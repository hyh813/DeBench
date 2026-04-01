source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@global_var_33b8 = constant [26 x i8] c"CF-L1-02 (single_if): %d\0A\00"
@global_var_3030 = constant [31 x i8] c"CF-L1-01 (sequential_ops): %d\0A\00"
@global_var_33d2 = constant [24 x i8] c"CF-L1-03 (if_else): %d\0A\00"
@global_var_33ea = constant [28 x i8] c"CF-L1-04 (nested_if_2): %d\0A\00"
@global_var_3050 = constant [31 x i8] c"CF-L1-05 (nested_if_deep): %d\0A\00"
@global_var_3070 = constant [32 x i8] c"CF-L1-06 (if_elseif_chain): %d\0A\00"
@global_var_3090 = constant [31 x i8] c"CF-L1-07 (if_elseif_long): %d\0A\00"
@global_var_3406 = constant [29 x i8] c"CF-L1-08 (switch_small): %d\0A\00"
@global_var_3423 = constant [29 x i8] c"CF-L1-09 (switch_large): %d\0A\00"
@global_var_30b0 = constant [31 x i8] c"CF-L1-10 (switch_default): %d\0A\00"
@global_var_30d0 = constant [35 x i8] c"CF-L1-11 (switch_fallthrough): %d\0A\00"
@global_var_30f8 = constant [31 x i8] c"CF-L1-12 (loop_for_fixed): %d\0A\00"
@global_var_3440 = constant [27 x i8] c"CF-L1-13 (loop_while): %d\0A\00"
@global_var_345b = constant [29 x i8] c"CF-L1-14 (loop_dowhile): %d\0A\00"
@global_var_3478 = constant [28 x i8] c"CF-L1-15 (loop_nested): %d\0A\00"
@global_var_3494 = constant [27 x i8] c"CF-L1-16 (loop_break): %d\0A\00"
@global_var_34cd = constant [29 x i8] c"CF-L1-18 (goto_forward): %d\0A\00"
@global_var_34af = constant [30 x i8] c"CF-L1-17 (loop_continue): %d\0A\00"
@global_var_3508 = constant [27 x i8] c"CF-L1-20 (ternary_op): %d\0A\00"
@global_var_34ea = constant [30 x i8] c"CF-L1-19 (goto_backward): %d\0A\00"
@global_var_3620 = local_unnamed_addr constant i64 -28419798604208
@global_var_3140 = constant [32 x i8] c"CF-L2-01 (loop_multi_exit): %d\0A\00"
@global_var_3541 = constant [29 x i8] c"CF-L2-03 (multi_return): %d\0A\00"
@global_var_3523 = constant [30 x i8] c"CF-L2-02 (infinite_loop): %d\0A\00"
@global_var_3160 = constant [35 x i8] c"CF-L2-04 (conditional_return): %d\0A\00"
@global_var_355e = constant [29 x i8] c"CF-L2-05 (duffs_device): %d\0A\00"
@global_var_3188 = constant [34 x i8] c"CF-L2-06 (loop_complex_cond): %d\0A\00"
@global_var_31b0 = constant [32 x i8] c"CF-L2-07 (loop_modify_var): %d\0A\00"
@global_var_31d0 = constant [36 x i8] c"CF-L2-08 (loop_external_state): %d\0A\00"
@global_var_31f8 = constant [36 x i8] c"CF-L2-09 (recursion_factorial): %d\0A\00"
@global_var_3268 = constant [36 x i8] c"CF-L2-13 (call_func_ptr_array): %d\0A\00"
@global_var_3220 = constant [31 x i8] c"CF-L2-10 (tail_recursion): %d\0A\00"
@global_var_3240 = constant [35 x i8] c"CF-L2-11 (indirect_recursion): %d\0A\00"
@global_var_357b = constant [30 x i8] c"CF-L2-12 (call_func_ptr): %d\0A\00"
@global_var_3290 = constant [38 x i8] c"CF-L2-15 (process_with_callback): %d\0A\00"
@jump_buffer = global i64 0
@global_var_32e0 = constant [31 x i8] c"CF-L3-01 (non_local_jump): %d\0A\00"
@global_var_3599 = constant [30 x i8] c"CF-L3-02 (cpp_exception): %d\0A\00"
@global_var_3300 = constant [33 x i8] c"CF-L3-03 (large_jump_table): %d\0A\00"
@global_var_3328 = constant [37 x i8] c"CF-L3-04 (conditional_func_ptr): %d\0A\00"
@global_var_35b7 = constant [30 x i8] c"CF-L3-05 (state_machine): %d\0A\00"
@global_var_3350 = constant [31 x i8] c"CF-L3-06 (fsm_func_table): %d\0A\00"
@global_var_35d5 = constant [30 x i8] c"CF-L3-07 (computed_goto): %d\0A\00"
@global_var_35f3 = constant [30 x i8] c"CF-L3-08 (obfuscated_cf): %d\0A\00"
@global_var_3370 = constant [33 x i8] c"CF-L3-09 (opaque_predicate): %d\0A\00"
@global_var_3398 = constant [32 x i8] c"CF-L3-10 (overlapped_code): %d\0A\00"
@0 = external global i32
@global_var_6020 = local_unnamed_addr global i8 0
@global_var_3640 = constant i32* inttoptr (i64 21474836495 to i32*)
@1 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\9F\BA\E7\A1\80\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_3008 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @1, i64 0, i64 0)
@global_var_3e9 = global i32 0
@2 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\AB\98\E7\BA\A7\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_3118 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @2, i64 0, i64 0)
@3 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\9E\81\E7\AB\AF\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_32b8 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @3, i64 0, i64 0)

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

define i32 @function_10b0([1 x %__jmp_buf_tag] %env) local_unnamed_addr {
dec_label_pc_10b0:
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] %env), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @function_10c0(i32 %flag, i8* %format, ...) local_unnamed_addr {
dec_label_pc_10c0:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 %flag, i8* %format), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i64 @function_10d0(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_10d0:
  %0 = call i64 @__longjmp_chk(i64* %arg1, i64 %arg2), !insn.addr !11
  ret i64 %0, !insn.addr !11
}

define i32 @main() local_unnamed_addr {
dec_label_pc_10e0:
  call void @test_control_flow_l1(), !insn.addr !12
  call void @test_control_flow_l2(), !insn.addr !13
  call void @test_control_flow_l3(), !insn.addr !14
  ret i32 xor (i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !15
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1110:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !16
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !16
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !16
  %3 = call i32 @__libc_start_main(i64 4320, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !16
  %4 = call i64 @__asm_hlt(), !insn.addr !17
  unreachable, !insn.addr !17
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1140:
  ret i64 24592, !insn.addr !18
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1170:
  ret i64 0, !insn.addr !19
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_11b0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* @global_var_6020, align 1, !insn.addr !20
  %3 = icmp eq i8 %2, 0, !insn.addr !20
  %4 = icmp eq i1 %3, false, !insn.addr !21
  br i1 %4, label %dec_label_pc_11e8, label %dec_label_pc_11bd, !insn.addr !21

dec_label_pc_11bd:                                ; preds = %dec_label_pc_11b0
  %5 = load i64, i64* inttoptr (i64 24568 to i64*), align 8, !insn.addr !22
  %6 = icmp eq i64 %5, 0, !insn.addr !22
  br i1 %6, label %dec_label_pc_11d7, label %dec_label_pc_11cb, !insn.addr !23

dec_label_pc_11cb:                                ; preds = %dec_label_pc_11bd
  %7 = load i64, i64* inttoptr (i64 24584 to i64*), align 8, !insn.addr !24
  %8 = inttoptr i64 %7 to i64*, !insn.addr !25
  call void @__cxa_finalize(i64* %8), !insn.addr !25
  br label %dec_label_pc_11d7, !insn.addr !25

dec_label_pc_11d7:                                ; preds = %dec_label_pc_11cb, %dec_label_pc_11bd
  %9 = call i64 @deregister_tm_clones(), !insn.addr !26
  store i8 1, i8* @global_var_6020, align 1, !insn.addr !27
  ret i64 %9, !insn.addr !28

dec_label_pc_11e8:                                ; preds = %dec_label_pc_11b0
  ret i64 %1, !insn.addr !29

; uselistorder directives
  uselistorder i8 0, { 1, 0 }
  uselistorder i8* @global_var_6020, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_11f0:
  %0 = call i64 @register_tm_clones(), !insn.addr !30
  ret i64 %0, !insn.addr !30
}

define i64 @recursion_factorial(i64 %arg1) local_unnamed_addr {
dec_label_pc_1200:
  %rax.1.reg2mem = alloca i64, !insn.addr !31
  %rdi.0.reg2mem = alloca i64, !insn.addr !31
  %rax.0.reg2mem = alloca i64, !insn.addr !31
  %0 = trunc i64 %arg1 to i32, !insn.addr !32
  %1 = icmp slt i32 %0, 2, !insn.addr !32
  store i64 1, i64* %rax.0.reg2mem, !insn.addr !32
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !32
  store i64 1, i64* %rax.1.reg2mem, !insn.addr !32
  br i1 %1, label %dec_label_pc_121d, label %dec_label_pc_1210, !insn.addr !32

dec_label_pc_1210:                                ; preds = %dec_label_pc_1200, %dec_label_pc_1210
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %2 = add i64 %rdi.0.reload, 4294967295, !insn.addr !33
  %3 = and i64 %2, 4294967295, !insn.addr !33
  %sext = mul i64 %rax.0.reload, 4294967296
  %4 = ashr exact i64 %sext, 32, !insn.addr !34
  %sext1 = mul i64 %rdi.0.reload, 4294967296
  %5 = ashr exact i64 %sext1, 32, !insn.addr !34
  %6 = mul nsw i64 %5, %4, !insn.addr !34
  %7 = and i64 %6, 4294967295, !insn.addr !34
  %8 = trunc i64 %2 to i32, !insn.addr !35
  %9 = icmp eq i32 %8, 1, !insn.addr !35
  %10 = icmp eq i1 %9, false, !insn.addr !36
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !36
  store i64 %3, i64* %rdi.0.reg2mem, !insn.addr !36
  store i64 %7, i64* %rax.1.reg2mem, !insn.addr !36
  br i1 %10, label %dec_label_pc_1210, label %dec_label_pc_121d, !insn.addr !36

dec_label_pc_121d:                                ; preds = %dec_label_pc_1210, %dec_label_pc_1200
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !37

; uselistorder directives
  uselistorder i64 %rdi.0.reload, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdi.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1210, { 1, 0 }
}

define i64 @double_value(i64 %arg1) local_unnamed_addr {
dec_label_pc_1220:
  %0 = mul i64 %arg1, 2, !insn.addr !38
  %1 = and i64 %0, 4294967294, !insn.addr !38
  ret i64 %1, !insn.addr !39
}

define i32 @triple_value(i32 %x) local_unnamed_addr {
dec_label_pc_1230:
  %0 = mul i32 %x, 3, !insn.addr !40
  ret i32 %0, !insn.addr !41
}

define i32 @op_add(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_1240:
  %0 = add i32 %b, %a, !insn.addr !42
  ret i32 %0, !insn.addr !43
}

define i32 @op_sub(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_1250:
  %0 = sub i32 %a, %b, !insn.addr !44
  ret i32 %0, !insn.addr !45
}

define i32 @op_mul(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_1260:
  %0 = mul i32 %b, %a, !insn.addr !46
  ret i32 %0, !insn.addr !47
}

define i32 @op_div(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_1270:
  %r8.0.reg2mem = alloca i32, !insn.addr !48
  %0 = icmp eq i32 %b, 0, !insn.addr !49
  store i32 0, i32* %r8.0.reg2mem, !insn.addr !50
  br i1 %0, label %dec_label_pc_1283, label %dec_label_pc_127b, !insn.addr !50

dec_label_pc_127b:                                ; preds = %dec_label_pc_1270
  %1 = zext i32 %b to i64, !insn.addr !51
  %2 = zext i32 %a to i64
  %3 = ashr i32 %a, 31, !insn.addr !52
  %4 = zext i32 %3 to i64, !insn.addr !53
  %5 = mul i64 %4, 4294967296, !insn.addr !53
  %6 = or i64 %5, %2, !insn.addr !53
  %7 = sdiv i64 %6, %1, !insn.addr !53
  %phitmp = trunc i64 %7 to i32
  store i32 %phitmp, i32* %r8.0.reg2mem, !insn.addr !54
  br label %dec_label_pc_1283, !insn.addr !54

dec_label_pc_1283:                                ; preds = %dec_label_pc_127b, %dec_label_pc_1270
  %r8.0.reload = load i32, i32* %r8.0.reg2mem
  ret i32 %r8.0.reload, !insn.addr !55

; uselistorder directives
  uselistorder i32 %b, { 1, 0 }
  uselistorder i32 %a, { 1, 0 }
}

define i32 @op_mod(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_1290:
  %r8.0.reg2mem = alloca i32, !insn.addr !56
  %0 = icmp eq i32 %b, 0, !insn.addr !57
  store i32 0, i32* %r8.0.reg2mem, !insn.addr !58
  br i1 %0, label %dec_label_pc_12a3, label %dec_label_pc_129d, !insn.addr !58

dec_label_pc_129d:                                ; preds = %dec_label_pc_1290
  %1 = zext i32 %b to i64, !insn.addr !59
  %2 = zext i32 %a to i64, !insn.addr !60
  %3 = ashr i32 %a, 31, !insn.addr !61
  %4 = zext i32 %3 to i64, !insn.addr !62
  %5 = mul i64 %4, 4294967296, !insn.addr !62
  %6 = or i64 %5, %2, !insn.addr !62
  %7 = srem i64 %6, %1, !insn.addr !62
  %phitmp = trunc i64 %7 to i32
  store i32 %phitmp, i32* %r8.0.reg2mem, !insn.addr !63
  br label %dec_label_pc_12a3, !insn.addr !63

dec_label_pc_12a3:                                ; preds = %dec_label_pc_129d, %dec_label_pc_1290
  %r8.0.reload = load i32, i32* %r8.0.reg2mem
  ret i32 %r8.0.reload, !insn.addr !64

; uselistorder directives
  uselistorder i32 %b, { 1, 0 }
}

define i32 @op_and(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_12b0:
  %0 = and i32 %b, %a, !insn.addr !65
  ret i32 %0, !insn.addr !66
}

define i32 @op_or(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_12c0:
  %0 = or i32 %b, %a, !insn.addr !67
  ret i32 %0, !insn.addr !68
}

define i32 @op_xor(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_12d0:
  %0 = xor i32 %b, %a, !insn.addr !69
  ret i32 %0, !insn.addr !70
}

define i32 @op_shl(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_12e0:
  %0 = urem i32 %b, 32, !insn.addr !71
  %1 = shl i32 %a, %0
  ret i32 %1, !insn.addr !72
}

define i32 @op_shr(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_12f0:
  %0 = urem i32 %b, 32, !insn.addr !73
  %1 = ashr i32 %a, %0
  ret i32 %1, !insn.addr !74
}

define i32 @state_idle(i32 %event) local_unnamed_addr {
dec_label_pc_1300:
  %0 = icmp eq i32 %event, 1, !insn.addr !75
  %1 = zext i1 %0 to i32, !insn.addr !76
  ret i32 %1, !insn.addr !76
}

define i64 @state_processing(i64 %arg1) local_unnamed_addr {
dec_label_pc_1310:
  %0 = trunc i64 %arg1 to i32, !insn.addr !77
  %1 = icmp eq i32 %0, 2, !insn.addr !77
  br i1 %1, label %dec_label_pc_1330, label %dec_label_pc_1319, !insn.addr !78

dec_label_pc_1319:                                ; preds = %dec_label_pc_1310
  %2 = icmp eq i32 %0, 99, !insn.addr !79
  %3 = zext i1 %2 to i64, !insn.addr !80
  %4 = select i1 %2, i64 2, i64 1, !insn.addr !81
  %5 = add nuw nsw i64 %4, %3, !insn.addr !81
  ret i64 %5, !insn.addr !82

dec_label_pc_1330:                                ; preds = %dec_label_pc_1310
  ret i64 2, !insn.addr !83

; uselistorder directives
  uselistorder i1 %2, { 1, 0 }
}

define i32 @state_done(i32 %event) local_unnamed_addr {
dec_label_pc_1340:
  ret i32 2, !insn.addr !84
}

define i32 @state_error(i32 %event) local_unnamed_addr {
dec_label_pc_1350:
  %0 = icmp eq i32 %event, 0, !insn.addr !85
  %1 = icmp eq i1 %0, false, !insn.addr !86
  %2 = select i1 %1, i32 3, i32 %event, !insn.addr !86
  ret i32 %2, !insn.addr !87
}

define i64 @sequential_ops(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1370:
  %0 = add i64 %arg2, %arg1, !insn.addr !88
  %1 = mul i64 %0, 2, !insn.addr !89
  %2 = sub i64 %1, %arg3, !insn.addr !90
  %3 = and i64 %2, 4294967295, !insn.addr !90
  ret i64 %3, !insn.addr !91
}

define i64 @single_if(i64 %arg1) local_unnamed_addr {
dec_label_pc_1380:
  %0 = trunc i64 %arg1 to i32, !insn.addr !92
  %1 = icmp sgt i32 %0, 0
  %2 = zext i1 %1 to i64, !insn.addr !93
  %3 = shl i64 %arg1, %2, !insn.addr !94
  %4 = and i64 %3, 4294967295, !insn.addr !94
  ret i64 %4, !insn.addr !95
}

define i64 @if_else(i64 %arg1) local_unnamed_addr {
dec_label_pc_1390:
  %0 = trunc i64 %arg1 to i32, !insn.addr !96
  %1 = icmp eq i32 %0, 0, !insn.addr !96
  %2 = icmp slt i32 %0, 0, !insn.addr !96
  %3 = icmp eq i1 %2, false, !insn.addr !97
  %4 = icmp eq i1 %1, false, !insn.addr !97
  %5 = icmp eq i1 %3, %4, !insn.addr !97
  %6 = zext i1 %5 to i64, !insn.addr !97
  ret i64 %6, !insn.addr !98

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
}

define i64 @nested_if_2(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_13a0:
  %rax.0.reg2mem = alloca i64, !insn.addr !99
  %0 = trunc i64 %arg1 to i32, !insn.addr !100
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !101
  br i1 %1, label %dec_label_pc_13b2, label %dec_label_pc_13aa, !insn.addr !101

dec_label_pc_13aa:                                ; preds = %dec_label_pc_13a0
  %2 = trunc i64 %arg2 to i32, !insn.addr !102
  %3 = icmp slt i32 %2, 1
  %4 = select i1 %3, i64 0, i64 %arg2, !insn.addr !103
  %.v = add i64 %4, %arg1
  %5 = and i64 %.v, 4294967295, !insn.addr !104
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !104
  br label %dec_label_pc_13b2, !insn.addr !104

dec_label_pc_13b2:                                ; preds = %dec_label_pc_13aa, %dec_label_pc_13a0
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !105

; uselistorder directives
  uselistorder i64 %arg2, { 1, 0 }
}

define i64 @nested_if_deep(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_13c0:
  %rax.0.reg2mem = alloca i64, !insn.addr !106
  %0 = trunc i64 %arg1 to i32, !insn.addr !107
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !108
  br i1 %1, label %dec_label_pc_13f5, label %dec_label_pc_13ca, !insn.addr !108

dec_label_pc_13ca:                                ; preds = %dec_label_pc_13c0
  %2 = trunc i64 %arg2 to i32, !insn.addr !109
  %3 = icmp slt i32 %2, 1
  store i64 1, i64* %rax.0.reg2mem, !insn.addr !110
  br i1 %3, label %dec_label_pc_13f5, label %dec_label_pc_13d3, !insn.addr !110

dec_label_pc_13d3:                                ; preds = %dec_label_pc_13ca
  %4 = trunc i64 %arg3 to i32, !insn.addr !111
  %5 = icmp slt i32 %4, 1
  store i64 2, i64* %rax.0.reg2mem, !insn.addr !112
  br i1 %5, label %dec_label_pc_13f5, label %dec_label_pc_13d7, !insn.addr !112

dec_label_pc_13d7:                                ; preds = %dec_label_pc_13d3
  %6 = trunc i64 %arg4 to i32, !insn.addr !113
  %7 = icmp slt i32 %6, 1
  store i64 3, i64* %rax.0.reg2mem, !insn.addr !114
  br i1 %7, label %dec_label_pc_13f5, label %dec_label_pc_13db, !insn.addr !114

dec_label_pc_13db:                                ; preds = %dec_label_pc_13d7
  %8 = trunc i64 %arg5 to i32, !insn.addr !115
  %9 = icmp eq i32 %8, 0, !insn.addr !115
  %10 = icmp slt i32 %8, 0, !insn.addr !115
  %11 = icmp eq i1 %10, false, !insn.addr !116
  %12 = icmp eq i1 %9, false, !insn.addr !116
  %13 = icmp eq i1 %11, %12, !insn.addr !116
  %14 = select i1 %13, i64 5, i64 4, !insn.addr !117
  ret i64 %14, !insn.addr !118

dec_label_pc_13f5:                                ; preds = %dec_label_pc_13d3, %dec_label_pc_13d7, %dec_label_pc_13ca, %dec_label_pc_13c0
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !119

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1, 3, 4 }
  uselistorder label %dec_label_pc_13f5, { 1, 0, 2, 3 }
}

define i64 @if_elseif_chain(i64 %arg1) local_unnamed_addr {
dec_label_pc_1410:
  %rax.0.reg2mem = alloca i64, !insn.addr !120
  %0 = trunc i64 %arg1 to i32, !insn.addr !121
  store i64 10, i64* %rax.0.reg2mem
  switch i32 %0, label %dec_label_pc_1422 [
    i32 0, label %dec_label_pc_143d
    i32 1, label %dec_label_pc_143d.fold.split
  ]

dec_label_pc_1422:                                ; preds = %dec_label_pc_1410
  %1 = icmp eq i32 %0, 2, !insn.addr !122
  %2 = icmp eq i1 %1, false, !insn.addr !123
  %3 = select i1 %2, i64 4294967295, i64 30, !insn.addr !123
  ret i64 %3, !insn.addr !124

dec_label_pc_143d.fold.split:                     ; preds = %dec_label_pc_1410
  store i64 20, i64* %rax.0.reg2mem
  br label %dec_label_pc_143d

dec_label_pc_143d:                                ; preds = %dec_label_pc_1410, %dec_label_pc_143d.fold.split
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !125

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder label %dec_label_pc_143d, { 1, 0 }
}

define i64 @if_elseif_long(i64 %arg1) local_unnamed_addr {
dec_label_pc_1440:
  %rax.0.reg2mem = alloca i64, !insn.addr !126
  %0 = trunc i64 %arg1 to i32, !insn.addr !127
  %1 = icmp ult i32 %0, 5
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !128
  br i1 %1, label %dec_label_pc_144e, label %dec_label_pc_1454, !insn.addr !128

dec_label_pc_144e:                                ; preds = %dec_label_pc_1440
  %2 = mul i64 %arg1, 4294967296, !insn.addr !129
  %sext = add i64 %2, 4294967296
  %3 = udiv i64 %sext, 4294967296
  %4 = mul nuw nsw i64 %3, 100, !insn.addr !130
  %5 = and i64 %4, 4294967292, !insn.addr !130
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !130
  br label %dec_label_pc_1454, !insn.addr !130

dec_label_pc_1454:                                ; preds = %dec_label_pc_1440, %dec_label_pc_144e
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !131

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1454, { 1, 0 }
}

define i64 @switch_small(i64 %arg1) local_unnamed_addr {
dec_label_pc_1460:
  %rax.0.reg2mem = alloca i64, !insn.addr !132
  %0 = trunc i64 %arg1 to i32, !insn.addr !133
  %1 = icmp ult i32 %0, 4
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !134
  br i1 %1, label %dec_label_pc_146e, label %dec_label_pc_147a, !insn.addr !134

dec_label_pc_146e:                                ; preds = %dec_label_pc_1460
  %2 = mul i64 %arg1, 4, !insn.addr !135
  %3 = and i64 %2, 17179869180, !insn.addr !136
  %4 = add i64 %3, ptrtoint (i32** @global_var_3640 to i64), !insn.addr !136
  %5 = inttoptr i64 %4 to i32*, !insn.addr !136
  %6 = load i32, i32* %5, align 4, !insn.addr !136
  %7 = zext i32 %6 to i64, !insn.addr !136
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !136
  br label %dec_label_pc_147a, !insn.addr !136

dec_label_pc_147a:                                ; preds = %dec_label_pc_1460, %dec_label_pc_146e
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !137

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_147a, { 1, 0 }
}

define i64 @switch_large(i64 %arg1) local_unnamed_addr {
dec_label_pc_1480:
  %0 = trunc i64 %arg1 to i32, !insn.addr !138
  %1 = icmp ult i32 %0, 10
  %2 = mul i64 %arg1, 10
  %3 = and i64 %2, 4294967294
  %rax.0 = select i1 %1, i64 %3, i64 4294967295
  ret i64 %rax.0, !insn.addr !139
}

define i64 @switch_default(i64 %arg1) local_unnamed_addr {
dec_label_pc_14a0:
  %0 = trunc i64 %arg1 to i32
  %1 = add i32 %0, -1, !insn.addr !140
  %2 = icmp ult i32 %1, 3
  %3 = mul i64 %arg1, 100
  %4 = and i64 %3, 4294967292
  %rax.0 = select i1 %2, i64 %4, i64 0
  ret i64 %rax.0, !insn.addr !141
}

define i64 @switch_fallthrough(i64 %arg1) local_unnamed_addr {
dec_label_pc_14c0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !142
  switch i32 %0, label %dec_label_pc_14ce [
    i32 2, label %dec_label_pc_14f0
    i32 3, label %dec_label_pc_14e0
  ]

dec_label_pc_14ce:                                ; preds = %dec_label_pc_14c0
  %1 = icmp eq i32 %0, 1, !insn.addr !143
  %2 = zext i1 %1 to i64, !insn.addr !144
  %not. = icmp ne i1 %1, true
  %3 = sext i1 %not. to i64, !insn.addr !145
  %4 = add nsw i64 %3, %2, !insn.addr !145
  %5 = and i64 %4, 4294967295, !insn.addr !145
  ret i64 %5, !insn.addr !146

dec_label_pc_14e0:                                ; preds = %dec_label_pc_14c0
  %6 = mul i64 %arg1, 2
  %7 = add i64 %arg1, 12, !insn.addr !147
  %8 = add i64 %7, %6, !insn.addr !148
  %9 = and i64 %8, 4294967295, !insn.addr !148
  ret i64 %9, !insn.addr !149

dec_label_pc_14f0:                                ; preds = %dec_label_pc_14c0
  %10 = mul i64 %arg1, 3, !insn.addr !150
  %11 = and i64 %10, 4294967295, !insn.addr !150
  ret i64 %11, !insn.addr !151

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder i64 %arg1, { 2, 1, 0, 3 }
}

define i64 @loop_for_fixed(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1500:
  %merge.reg2mem = alloca i64, !insn.addr !152
  %r8.0.reg2mem = alloca i64, !insn.addr !152
  %rax.0.reg2mem = alloca i64, !insn.addr !152
  %0 = trunc i64 %arg1 to i32, !insn.addr !153
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !154
  store i64 0, i64* %r8.0.reg2mem, !insn.addr !154
  store i64 0, i64* %merge.reg2mem, !insn.addr !154
  br i1 %1, label %dec_label_pc_151a, label %dec_label_pc_1510, !insn.addr !154

dec_label_pc_1510:                                ; preds = %dec_label_pc_1500, %dec_label_pc_1510
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %2 = add nuw nsw i64 %r8.0.reload, %rax.0.reload, !insn.addr !155
  %3 = and i64 %2, 4294967295, !insn.addr !155
  %4 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !156
  %5 = and i64 %4, 4294967295, !insn.addr !156
  %6 = trunc i64 %4 to i32, !insn.addr !157
  %7 = icmp eq i32 %0, %6, !insn.addr !157
  %8 = icmp eq i1 %7, false, !insn.addr !158
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !158
  store i64 %3, i64* %r8.0.reg2mem, !insn.addr !158
  store i64 %3, i64* %merge.reg2mem, !insn.addr !158
  br i1 %8, label %dec_label_pc_1510, label %dec_label_pc_151a, !insn.addr !158

dec_label_pc_151a:                                ; preds = %dec_label_pc_1510, %dec_label_pc_1500
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !159

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r8.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1510, { 1, 0 }
}

define i64 @loop_while(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1530:
  %merge.reg2mem = alloca i64, !insn.addr !160
  %r8.0.reg2mem = alloca i64, !insn.addr !160
  %rdi.0.reg2mem = alloca i64, !insn.addr !160
  %0 = trunc i64 %arg1 to i32, !insn.addr !161
  %1 = icmp eq i32 %0, 0, !insn.addr !161
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !162
  store i64 0, i64* %r8.0.reg2mem, !insn.addr !162
  store i64 1, i64* %merge.reg2mem, !insn.addr !162
  br i1 %1, label %dec_label_pc_155d, label %dec_label_pc_1540, !insn.addr !162

dec_label_pc_1540:                                ; preds = %dec_label_pc_1530, %dec_label_pc_1540
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %sext = mul i64 %rdi.0.reload, 4294967296
  %2 = ashr exact i64 %sext, 32, !insn.addr !163
  %3 = trunc i64 %rdi.0.reload to i32, !insn.addr !164
  %4 = add nuw nsw i64 %r8.0.reload, 1, !insn.addr !165
  %5 = and i64 %4, 4294967295, !insn.addr !165
  %narrow = mul nsw i64 %2, 1717986919
  %6 = ashr i32 %3, 31, !insn.addr !166
  %7 = ashr i64 %narrow, 34, !insn.addr !167
  %8 = trunc i64 %7 to i32, !insn.addr !168
  %9 = sub i32 %8, %6, !insn.addr !168
  %10 = icmp eq i32 %9, 0, !insn.addr !168
  %11 = zext i32 %9 to i64, !insn.addr !169
  %12 = icmp eq i1 %10, false, !insn.addr !170
  store i64 %11, i64* %rdi.0.reg2mem, !insn.addr !170
  store i64 %5, i64* %r8.0.reg2mem, !insn.addr !170
  store i64 %5, i64* %merge.reg2mem, !insn.addr !170
  br i1 %12, label %dec_label_pc_1540, label %dec_label_pc_155d, !insn.addr !170

dec_label_pc_155d:                                ; preds = %dec_label_pc_1540, %dec_label_pc_1530
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !171

; uselistorder directives
  uselistorder i64* %rdi.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r8.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1540, { 1, 0 }
}

define i64 @loop_dowhile(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1580:
  %r8.0.reg2mem = alloca i64, !insn.addr !172
  %rdi.0.reg2mem = alloca i64, !insn.addr !172
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !173
  store i64 0, i64* %r8.0.reg2mem, !insn.addr !173
  br label %dec_label_pc_1590, !insn.addr !173

dec_label_pc_1590:                                ; preds = %dec_label_pc_1590, %dec_label_pc_1580
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %sext = mul i64 %rdi.0.reload, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !174
  %1 = trunc i64 %rdi.0.reload to i32, !insn.addr !175
  %2 = add nuw nsw i64 %r8.0.reload, 1, !insn.addr !176
  %3 = and i64 %2, 4294967295, !insn.addr !176
  %narrow = mul nsw i64 %0, 1717986919
  %4 = ashr i32 %1, 31, !insn.addr !177
  %5 = ashr i64 %narrow, 34, !insn.addr !178
  %6 = trunc i64 %5 to i32, !insn.addr !179
  %7 = sub i32 %6, %4, !insn.addr !179
  %8 = icmp eq i32 %7, 0, !insn.addr !179
  %9 = zext i32 %7 to i64, !insn.addr !180
  %10 = icmp eq i1 %8, false, !insn.addr !181
  store i64 %9, i64* %rdi.0.reg2mem, !insn.addr !181
  store i64 %3, i64* %r8.0.reg2mem, !insn.addr !181
  br i1 %10, label %dec_label_pc_1590, label %dec_label_pc_15ad, !insn.addr !181

dec_label_pc_15ad:                                ; preds = %dec_label_pc_1590
  ret i64 %3, !insn.addr !182

; uselistorder directives
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64* %rdi.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r8.0.reg2mem, { 1, 0, 2 }
}

define i64 @loop_nested(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_15c0:
  %rax.1.reg2mem = alloca i64, !insn.addr !183
  %rdx.0.reg2mem = alloca i64, !insn.addr !183
  %rax.0.reg2mem = alloca i64, !insn.addr !183
  %0 = trunc i64 %arg1 to i32, !insn.addr !184
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !185
  br i1 %1, label %dec_label_pc_15df, label %dec_label_pc_15d0.preheader, !insn.addr !185

dec_label_pc_15d0.preheader:                      ; preds = %dec_label_pc_15c0
  %2 = trunc i64 %arg2 to i32, !insn.addr !186
  %3 = icmp eq i32 %2, 0, !insn.addr !186
  %4 = icmp slt i32 %2, 0, !insn.addr !186
  %5 = icmp eq i1 %4, false, !insn.addr !187
  %6 = icmp eq i1 %3, false, !insn.addr !187
  %7 = icmp eq i1 %5, %6, !insn.addr !187
  %8 = select i1 %7, i64 %arg2, i64 0, !insn.addr !188
  store i64 0, i64* %rax.0.reg2mem
  store i64 0, i64* %rdx.0.reg2mem
  br label %dec_label_pc_15d0

dec_label_pc_15d0:                                ; preds = %dec_label_pc_15d0.preheader, %dec_label_pc_15d0
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %.v = add i64 %rax.0.reload, %8
  %9 = and i64 %.v, 4294967295, !insn.addr !187
  %10 = add nuw nsw i64 %rdx.0.reload, 1, !insn.addr !189
  %11 = and i64 %10, 4294967295, !insn.addr !189
  %12 = trunc i64 %10 to i32, !insn.addr !190
  %13 = icmp eq i32 %0, %12, !insn.addr !190
  %14 = icmp eq i1 %13, false, !insn.addr !191
  store i64 %9, i64* %rax.0.reg2mem, !insn.addr !191
  store i64 %11, i64* %rdx.0.reg2mem, !insn.addr !191
  store i64 %9, i64* %rax.1.reg2mem, !insn.addr !191
  br i1 %14, label %dec_label_pc_15d0, label %dec_label_pc_15df, !insn.addr !191

dec_label_pc_15df:                                ; preds = %dec_label_pc_15d0, %dec_label_pc_15c0
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !192

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64 %arg2, { 1, 0 }
  uselistorder label %dec_label_pc_15d0, { 1, 0 }
}

define i64 @loop_break(i64 %arg1) local_unnamed_addr {
dec_label_pc_15e0:
  %r8.0.reg2mem = alloca i64, !insn.addr !193
  %rax.0.reg2mem = alloca i64, !insn.addr !193
  %stack_var_-40 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-40 to i64, !insn.addr !194
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !195
  %2 = trunc i64 %arg1 to i32, !insn.addr !196
  %3 = icmp eq i32 %2, 10, !insn.addr !196
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !197
  store i64 0, i64* %r8.0.reg2mem, !insn.addr !197
  br i1 %3, label %dec_label_pc_1640, label %dec_label_pc_1622, !insn.addr !197

dec_label_pc_1622:                                ; preds = %dec_label_pc_15e0, %dec_label_pc_162c
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %4 = icmp eq i64 %rax.0.reload, 4, !insn.addr !198
  store i64 4294967295, i64* %r8.0.reg2mem, !insn.addr !199
  br i1 %4, label %dec_label_pc_1640, label %dec_label_pc_162c, !insn.addr !199

dec_label_pc_162c:                                ; preds = %dec_label_pc_1622
  %5 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !200
  %6 = mul i64 %5, 4, !insn.addr !201
  %7 = add i64 %6, %0, !insn.addr !201
  %8 = inttoptr i64 %7 to i32*, !insn.addr !201
  %9 = load i32, i32* %8, align 4, !insn.addr !201
  %10 = icmp eq i32 %9, %2, !insn.addr !202
  %11 = icmp eq i1 %10, false, !insn.addr !203
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !203
  br i1 %11, label %dec_label_pc_1622, label %dec_label_pc_1640.loopexit.split.loop.exit, !insn.addr !203

dec_label_pc_1640.loopexit.split.loop.exit:       ; preds = %dec_label_pc_162c
  %12 = and i64 %5, 4294967295, !insn.addr !204
  store i64 %12, i64* %r8.0.reg2mem
  br label %dec_label_pc_1640

dec_label_pc_1640:                                ; preds = %dec_label_pc_1622, %dec_label_pc_1640.loopexit.split.loop.exit, %dec_label_pc_15e0
  %13 = call i64 @__readfsqword(i64 40), !insn.addr !205
  %14 = icmp eq i64 %1, %13, !insn.addr !205
  %15 = icmp eq i1 %14, false, !insn.addr !206
  br i1 %15, label %dec_label_pc_1668, label %dec_label_pc_1650, !insn.addr !206

dec_label_pc_1650:                                ; preds = %dec_label_pc_1640
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  ret i64 %r8.0.reload, !insn.addr !207

dec_label_pc_1668:                                ; preds = %dec_label_pc_1640
  call void @__stack_chk_fail(), !insn.addr !208
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !209

; uselistorder directives
  uselistorder i64 %5, { 2, 0, 1 }
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r8.0.reg2mem, { 0, 2, 1, 3 }
  uselistorder label %dec_label_pc_1640, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1622, { 1, 0 }
}

define i64 @loop_continue(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1670:
  %merge.reg2mem = alloca i64, !insn.addr !210
  %r8.0.reg2mem = alloca i64, !insn.addr !210
  %rax.0.reg2mem = alloca i64, !insn.addr !210
  %0 = trunc i64 %arg1 to i32, !insn.addr !211
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %merge.reg2mem, !insn.addr !212
  br i1 %1, label %dec_label_pc_1699, label %dec_label_pc_1688.preheader, !insn.addr !212

dec_label_pc_1688.preheader:                      ; preds = %dec_label_pc_1670
  %2 = add i32 %0, 1, !insn.addr !213
  store i64 1, i64* %rax.0.reg2mem
  store i64 0, i64* %r8.0.reg2mem
  br label %dec_label_pc_1688

dec_label_pc_1688:                                ; preds = %dec_label_pc_1688.preheader, %dec_label_pc_1688
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %3 = urem i64 %rax.0.reload, 2
  %4 = icmp eq i64 %3, 0, !insn.addr !214
  %5 = icmp eq i1 %4, false, !insn.addr !215
  %6 = select i1 %5, i64 %rax.0.reload, i64 0, !insn.addr !216
  %.v = add nuw nsw i64 %6, %r8.0.reload
  %7 = and i64 %.v, 4294967295, !insn.addr !215
  %8 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !217
  %9 = and i64 %8, 4294967295, !insn.addr !217
  %10 = trunc i64 %8 to i32, !insn.addr !213
  %11 = icmp eq i32 %2, %10, !insn.addr !213
  %12 = icmp eq i1 %11, false, !insn.addr !218
  store i64 %9, i64* %rax.0.reg2mem, !insn.addr !218
  store i64 %7, i64* %r8.0.reg2mem, !insn.addr !218
  store i64 %7, i64* %merge.reg2mem, !insn.addr !218
  br i1 %12, label %dec_label_pc_1688, label %dec_label_pc_1699, !insn.addr !218

dec_label_pc_1699:                                ; preds = %dec_label_pc_1688, %dec_label_pc_1670
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !219

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r8.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1688, { 1, 0 }
}

define i64 @goto_forward(i64 %arg1) local_unnamed_addr {
dec_label_pc_16b0:
  %rdi.0.reg2mem = alloca i64, !insn.addr !220
  %0 = trunc i64 %arg1 to i32, !insn.addr !221
  %1 = icmp slt i32 %0, 1
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !222
  br i1 %1, label %dec_label_pc_16bb, label %dec_label_pc_16b8, !insn.addr !222

dec_label_pc_16b8:                                ; preds = %dec_label_pc_16b0
  %sext = mul i64 %arg1, 4294967296
  %2 = ashr exact i64 %sext, 32, !insn.addr !223
  %3 = mul nsw i64 %2, %2, !insn.addr !223
  %4 = and i64 %3, 4294967295, !insn.addr !223
  store i64 %4, i64* %rdi.0.reg2mem, !insn.addr !223
  br label %dec_label_pc_16bb, !insn.addr !223

dec_label_pc_16bb:                                ; preds = %dec_label_pc_16b8, %dec_label_pc_16b0
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %5 = mul i64 %rdi.0.reload, 2, !insn.addr !224
  %6 = and i64 %5, 4294967294, !insn.addr !224
  ret i64 %6, !insn.addr !225

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @goto_backward(i64 %arg1) local_unnamed_addr {
dec_label_pc_16c0:
  %r8.1.reg2mem = alloca i64, !insn.addr !226
  %r8.0.reg2mem = alloca i64, !insn.addr !226
  %rax.0.reg2mem = alloca i64, !insn.addr !226
  %0 = trunc i64 %arg1 to i32, !insn.addr !227
  %1 = icmp slt i32 %0, 1
  store i64 1, i64* %r8.1.reg2mem, !insn.addr !228
  br i1 %1, label %dec_label_pc_16eb, label %dec_label_pc_16e0.preheader, !insn.addr !228

dec_label_pc_16e0.preheader:                      ; preds = %dec_label_pc_16c0
  %2 = add i32 %0, 1, !insn.addr !229
  store i64 1, i64* %rax.0.reg2mem
  store i64 1, i64* %r8.0.reg2mem
  br label %dec_label_pc_16e0

dec_label_pc_16e0:                                ; preds = %dec_label_pc_16e0.preheader, %dec_label_pc_16e0
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %sext = mul i64 %r8.0.reload, 4294967296
  %3 = ashr exact i64 %sext, 32, !insn.addr !230
  %sext1 = mul i64 %rax.0.reload, 4294967296
  %4 = ashr exact i64 %sext1, 32, !insn.addr !230
  %5 = mul nsw i64 %3, %4, !insn.addr !230
  %6 = and i64 %5, 4294967295, !insn.addr !230
  %7 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !231
  %8 = and i64 %7, 4294967295, !insn.addr !231
  %9 = trunc i64 %7 to i32, !insn.addr !229
  %10 = icmp eq i32 %2, %9, !insn.addr !229
  %11 = icmp eq i1 %10, false, !insn.addr !232
  store i64 %8, i64* %rax.0.reg2mem, !insn.addr !232
  store i64 %6, i64* %r8.0.reg2mem, !insn.addr !232
  store i64 %6, i64* %r8.1.reg2mem, !insn.addr !232
  br i1 %11, label %dec_label_pc_16e0, label %dec_label_pc_16eb, !insn.addr !232

dec_label_pc_16eb:                                ; preds = %dec_label_pc_16e0, %dec_label_pc_16c0
  %r8.1.reload = load i64, i64* %r8.1.reg2mem
  ret i64 %r8.1.reload, !insn.addr !233

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r8.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_16e0, { 1, 0 }
}

define i64 @ternary_op(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_16f0:
  %0 = trunc i64 %arg2 to i32, !insn.addr !234
  %1 = trunc i64 %arg1 to i32, !insn.addr !234
  %2 = sub i32 %0, %1, !insn.addr !234
  %3 = xor i64 %arg2, %arg1
  %4 = trunc i64 %3 to i32, !insn.addr !234
  %5 = xor i32 %2, %0, !insn.addr !234
  %6 = and i32 %5, %4, !insn.addr !234
  %7 = icmp slt i32 %6, 0, !insn.addr !234
  %8 = icmp slt i32 %2, 0, !insn.addr !234
  %9 = icmp eq i1 %8, %7, !insn.addr !235
  %.v = select i1 %9, i64 %arg2, i64 %arg1
  %10 = and i64 %.v, 4294967295, !insn.addr !235
  ret i64 %10, !insn.addr !236

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i64 %arg2, { 1, 0, 2 }
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define void @test_control_flow_l1() local_unnamed_addr {
dec_label_pc_1700:
  %rdx.1.reg2mem = alloca i64, !insn.addr !237
  %rax.1.reg2mem = alloca i64, !insn.addr !237
  %rdx.0.reg2mem = alloca i64, !insn.addr !237
  %rax.0.reg2mem = alloca i64, !insn.addr !237
  %stack_var_-40 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !238
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_3008 to i8*)), !insn.addr !239
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3030, i64 0, i64 0), i64 21), !insn.addr !240
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_33b8, i64 0, i64 0), i64 20), !insn.addr !241
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_33b8, i64 0, i64 0), i64 4294967291), !insn.addr !242
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_33d2, i64 0, i64 0), i64 1), !insn.addr !243
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_33d2, i64 0, i64 0), i64 0), !insn.addr !244
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_33ea, i64 0, i64 0), i64 15), !insn.addr !245
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_33ea, i64 0, i64 0), i64 10), !insn.addr !246
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_33ea, i64 0, i64 0), i64 0), !insn.addr !247
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3050, i64 0, i64 0), i64 5), !insn.addr !248
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3070, i64 0, i64 0), i64 20), !insn.addr !249
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3090, i64 0, i64 0), i64 400), !insn.addr !250
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3406, i64 0, i64 0), i64 50), !insn.addr !251
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3423, i64 0, i64 0), i64 70), !insn.addr !252
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_30b0, i64 0, i64 0), i64 0), !insn.addr !253
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_30d0, i64 0, i64 0), i64 21), !insn.addr !254
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_30f8, i64 0, i64 0), i64 45), !insn.addr !255
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3440, i64 0, i64 0), i64 5), !insn.addr !256
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_345b, i64 0, i64 0), i64 4), !insn.addr !257
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_3478, i64 0, i64 0), i64 12), !insn.addr !258
  %21 = ptrtoint i64* %stack_var_-40 to i64, !insn.addr !259
  %22 = add i64 %21, -4
  store i64 1, i64* %rax.0.reg2mem, !insn.addr !260
  br label %dec_label_pc_1903, !insn.addr !260

dec_label_pc_1903:                                ; preds = %dec_label_pc_190f, %dec_label_pc_1700
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %23 = icmp eq i64 %rax.0.reload, 5, !insn.addr !261
  store i64 4294967295, i64* %rdx.0.reg2mem, !insn.addr !262
  br i1 %23, label %dec_label_pc_191a, label %dec_label_pc_190f, !insn.addr !262

dec_label_pc_190f:                                ; preds = %dec_label_pc_1903
  %24 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !263
  %25 = mul i64 %24, 4, !insn.addr !264
  %26 = add i64 %25, %22, !insn.addr !264
  %27 = inttoptr i64 %26 to i32*, !insn.addr !264
  %28 = load i32, i32* %27, align 4, !insn.addr !264
  %29 = icmp eq i32 %28, 30, !insn.addr !264
  %30 = icmp eq i1 %29, false, !insn.addr !265
  store i64 %24, i64* %rax.0.reg2mem, !insn.addr !265
  br i1 %30, label %dec_label_pc_1903, label %dec_label_pc_191a.split.loop.exit3, !insn.addr !265

dec_label_pc_191a.split.loop.exit3:               ; preds = %dec_label_pc_190f
  %31 = and i64 %rax.0.reload, 4294967295, !insn.addr !266
  store i64 %31, i64* %rdx.0.reg2mem
  br label %dec_label_pc_191a

dec_label_pc_191a:                                ; preds = %dec_label_pc_1903, %dec_label_pc_191a.split.loop.exit3
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %32 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3494, i64 0, i64 0), i64 %rdx.0.reload), !insn.addr !267
  store i64 1, i64* %rax.1.reg2mem, !insn.addr !268
  br label %dec_label_pc_1956, !insn.addr !268

dec_label_pc_1956:                                ; preds = %dec_label_pc_1962, %dec_label_pc_191a
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %33 = icmp eq i64 %rax.1.reload, 5, !insn.addr !269
  store i64 4294967295, i64* %rdx.1.reg2mem, !insn.addr !270
  br i1 %33, label %dec_label_pc_196d, label %dec_label_pc_1962, !insn.addr !270

dec_label_pc_1962:                                ; preds = %dec_label_pc_1956
  %34 = add nuw nsw i64 %rax.1.reload, 1, !insn.addr !271
  %35 = mul i64 %34, 4, !insn.addr !272
  %36 = add i64 %35, %22, !insn.addr !272
  %37 = inttoptr i64 %36 to i32*, !insn.addr !272
  %38 = load i32, i32* %37, align 4, !insn.addr !272
  %39 = icmp eq i32 %38, 99, !insn.addr !272
  %40 = icmp eq i1 %39, false, !insn.addr !273
  store i64 %34, i64* %rax.1.reg2mem, !insn.addr !273
  br i1 %40, label %dec_label_pc_1956, label %dec_label_pc_196d.split.loop.exit1, !insn.addr !273

dec_label_pc_196d.split.loop.exit1:               ; preds = %dec_label_pc_1962
  %41 = and i64 %rax.1.reload, 4294967295, !insn.addr !274
  store i64 %41, i64* %rdx.1.reg2mem
  br label %dec_label_pc_196d

dec_label_pc_196d:                                ; preds = %dec_label_pc_1956, %dec_label_pc_196d.split.loop.exit1
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  %42 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3494, i64 0, i64 0), i64 %rdx.1.reload), !insn.addr !275
  %43 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_34af, i64 0, i64 0), i64 25), !insn.addr !276
  %44 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_34cd, i64 0, i64 0), i64 50), !insn.addr !277
  %45 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_34cd, i64 0, i64 0), i64 4294967290), !insn.addr !278
  %46 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_34ea, i64 0, i64 0), i64 120), !insn.addr !279
  %47 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3508, i64 0, i64 0), i64 10), !insn.addr !280
  %48 = call i64 @__readfsqword(i64 40), !insn.addr !281
  %49 = icmp eq i64 %0, %48, !insn.addr !281
  %50 = icmp eq i1 %49, false, !insn.addr !282
  br i1 %50, label %dec_label_pc_1a3a, label %dec_label_pc_1a06, !insn.addr !282

dec_label_pc_1a06:                                ; preds = %dec_label_pc_196d
  %51 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3508, i64 0, i64 0), i64 8), !insn.addr !283
  ret void, !insn.addr !283

dec_label_pc_1a3a:                                ; preds = %dec_label_pc_196d
  call void @__stack_chk_fail(), !insn.addr !284
  ret void, !insn.addr !285

; uselistorder directives
  uselistorder i64 %rax.1.reload, { 2, 1, 0 }
  uselistorder i64 %rax.0.reload, { 2, 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.1.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.1.reg2mem, { 0, 2, 1 }
  uselistorder i64 20, { 1, 2, 0 }
  uselistorder label %dec_label_pc_196d, { 1, 0 }
  uselistorder label %dec_label_pc_191a, { 1, 0 }
}

define i32 @loop_multi_exit(i32 %target) local_unnamed_addr {
dec_label_pc_1a40:
  %storemerge.reg2mem = alloca i32, !insn.addr !286
  %rdx.2.reg2mem = alloca i64, !insn.addr !286
  %rax.1.reg2mem = alloca i64, !insn.addr !286
  %rdx.0.reg2mem = alloca i64, !insn.addr !286
  %rax.0.reg2mem = alloca i64, !insn.addr !286
  %stack_var_-72 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !287
  %1 = icmp eq i32 %target, 1, !insn.addr !288
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !289
  store i64 0, i64* %rdx.2.reg2mem, !insn.addr !289
  br i1 %1, label %dec_label_pc_1adc, label %dec_label_pc_1ab9.preheader, !insn.addr !289

dec_label_pc_1ab9.preheader:                      ; preds = %dec_label_pc_1a40
  %2 = ptrtoint i64* %stack_var_-72 to i64, !insn.addr !290
  store i64 %2, i64* %rax.0.reg2mem
  store i64 0, i64* %rdx.0.reg2mem
  br label %dec_label_pc_1ab9

dec_label_pc_1ab9:                                ; preds = %dec_label_pc_1ab9.preheader, %dec_label_pc_1ad4
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %3 = or i64 %rax.0.reload, 4, !insn.addr !291
  %4 = inttoptr i64 %3 to i32*, !insn.addr !291
  %5 = load i32, i32* %4, align 4, !insn.addr !291
  %6 = icmp eq i32 %5, %target, !insn.addr !291
  store i64 1, i64* %rax.1.reg2mem, !insn.addr !292
  store i64 %rdx.0.reload, i64* %rdx.2.reg2mem, !insn.addr !292
  br i1 %6, label %dec_label_pc_1adc, label %dec_label_pc_1abe, !insn.addr !292

dec_label_pc_1abe:                                ; preds = %dec_label_pc_1ab9
  %7 = add i64 %rax.0.reload, 8, !insn.addr !293
  %8 = inttoptr i64 %7 to i32*, !insn.addr !293
  %9 = load i32, i32* %8, align 8, !insn.addr !293
  %10 = icmp eq i32 %9, %target, !insn.addr !293
  store i64 2, i64* %rax.1.reg2mem, !insn.addr !294
  store i64 %rdx.0.reload, i64* %rdx.2.reg2mem, !insn.addr !294
  br i1 %10, label %dec_label_pc_1adc, label %dec_label_pc_1ac3, !insn.addr !294

dec_label_pc_1ac3:                                ; preds = %dec_label_pc_1abe
  %11 = add i64 %rax.0.reload, 12, !insn.addr !295
  %12 = inttoptr i64 %11 to i32*, !insn.addr !295
  %13 = load i32, i32* %12, align 4, !insn.addr !295
  %14 = icmp eq i32 %13, %target, !insn.addr !295
  store i64 3, i64* %rax.1.reg2mem, !insn.addr !296
  store i64 %rdx.0.reload, i64* %rdx.2.reg2mem, !insn.addr !296
  br i1 %14, label %dec_label_pc_1adc, label %dec_label_pc_1ac8, !insn.addr !296

dec_label_pc_1ac8:                                ; preds = %dec_label_pc_1ac3
  %15 = add nuw nsw i64 %rdx.0.reload, 1, !insn.addr !297
  %16 = trunc i64 %15 to i32, !insn.addr !298
  %17 = icmp eq i32 %16, 3, !insn.addr !298
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !299
  br i1 %17, label %dec_label_pc_1aed, label %dec_label_pc_1ad4, !insn.addr !299

dec_label_pc_1ad4:                                ; preds = %dec_label_pc_1ac8
  %18 = and i64 %15, 4294967295, !insn.addr !297
  %19 = add i64 %rax.0.reload, 16, !insn.addr !300
  %20 = inttoptr i64 %19 to i32*, !insn.addr !301
  %21 = load i32, i32* %20, align 8, !insn.addr !301
  %22 = icmp eq i32 %21, %target, !insn.addr !302
  %23 = icmp eq i1 %22, false, !insn.addr !303
  store i64 %19, i64* %rax.0.reg2mem, !insn.addr !303
  store i64 %18, i64* %rdx.0.reg2mem, !insn.addr !303
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !303
  store i64 %18, i64* %rdx.2.reg2mem, !insn.addr !303
  br i1 %23, label %dec_label_pc_1ab9, label %dec_label_pc_1adc, !insn.addr !303

dec_label_pc_1adc:                                ; preds = %dec_label_pc_1ac3, %dec_label_pc_1abe, %dec_label_pc_1ab9, %dec_label_pc_1ad4, %dec_label_pc_1a40
  %rdx.2.reload = load i64, i64* %rdx.2.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %24 = mul nsw i64 %rdx.2.reload, 10, !insn.addr !304
  %25 = add nsw i64 %24, %rax.1.reload, !insn.addr !305
  %phitmp = trunc i64 %25 to i32
  store i32 %phitmp, i32* %storemerge.reg2mem, !insn.addr !306
  br label %dec_label_pc_1aed, !insn.addr !306

dec_label_pc_1aed:                                ; preds = %dec_label_pc_1ac8, %dec_label_pc_1adc
  %26 = call i64 @__readfsqword(i64 40), !insn.addr !307
  %27 = icmp eq i64 %0, %26, !insn.addr !307
  %28 = icmp eq i1 %27, false, !insn.addr !308
  br i1 %28, label %dec_label_pc_1b27, label %dec_label_pc_1afd, !insn.addr !308

dec_label_pc_1afd:                                ; preds = %dec_label_pc_1aed
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !309

dec_label_pc_1b27:                                ; preds = %dec_label_pc_1aed
  call void @__stack_chk_fail(), !insn.addr !310
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !311

; uselistorder directives
  uselistorder i64 %15, { 1, 0 }
  uselistorder i64 %rax.0.reload, { 2, 0, 1, 3 }
  uselistorder i64 %rdx.0.reload, { 3, 0, 1, 2 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.1.reg2mem, { 0, 4, 1, 2, 3, 5 }
  uselistorder i64* %rdx.2.reg2mem, { 0, 4, 1, 2, 3, 5 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 12, { 2, 1, 0 }
  uselistorder i64 8, { 1, 0 }
  uselistorder label %dec_label_pc_1aed, { 1, 0 }
  uselistorder label %dec_label_pc_1adc, { 3, 0, 1, 2, 4 }
  uselistorder label %dec_label_pc_1ab9, { 1, 0 }
}

define i64 @infinite_loop(i64 %arg1) local_unnamed_addr {
dec_label_pc_1b30:
  %rax.0.reg2mem = alloca i64, !insn.addr !312
  %0 = trunc i64 %arg1 to i32
  %1 = icmp eq i32 %0, 1, !insn.addr !313
  %2 = icmp eq i1 %1, false, !insn.addr !314
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !315
  br label %dec_label_pc_1b4a, !insn.addr !315

dec_label_pc_1b40:                                ; preds = %dec_label_pc_1b4a
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %3 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !316
  %4 = and i64 %3, 4294967295, !insn.addr !316
  %5 = trunc i64 %3 to i32, !insn.addr !317
  %6 = icmp eq i32 %5, ptrtoint (i32* @global_var_3e9 to i32), !insn.addr !317
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !318
  br i1 %6, label %dec_label_pc_1b52, label %dec_label_pc_1b4a, !insn.addr !318

dec_label_pc_1b4a:                                ; preds = %dec_label_pc_1b40, %dec_label_pc_1b30
  br i1 %2, label %dec_label_pc_1b40, label %dec_label_pc_1b51, !insn.addr !314

dec_label_pc_1b51:                                ; preds = %dec_label_pc_1b4a
  ret i64 0, !insn.addr !319

dec_label_pc_1b52:                                ; preds = %dec_label_pc_1b40
  %7 = inttoptr i64 %arg1 to i32*, !insn.addr !320
  store i32 1, i32* %7, align 4, !insn.addr !320
  ret i64 %4, !insn.addr !321

; uselistorder directives
  uselistorder i64 %4, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
}

define i64 @multi_return(i64 %arg1) local_unnamed_addr {
dec_label_pc_1b60:
  %merge.reg2mem = alloca i64, !insn.addr !322
  %0 = trunc i64 %arg1 to i32, !insn.addr !323
  %1 = icmp slt i32 %0, 0, !insn.addr !323
  store i64 4294967295, i64* %merge.reg2mem, !insn.addr !324
  br i1 %1, label %dec_label_pc_1b80, label %dec_label_pc_1b68, !insn.addr !324

dec_label_pc_1b68:                                ; preds = %dec_label_pc_1b60
  %2 = mul i64 %arg1, 2, !insn.addr !325
  %3 = trunc i64 %2 to i32, !insn.addr !326
  %4 = icmp sgt i32 %3, 100, !insn.addr !326
  store i64 4294967294, i64* %merge.reg2mem, !insn.addr !326
  br i1 %4, label %dec_label_pc_1b80, label %dec_label_pc_1b70, !insn.addr !326

dec_label_pc_1b70:                                ; preds = %dec_label_pc_1b68
  %5 = add i64 %arg1, 1, !insn.addr !327
  %6 = urem i64 %arg1, 2
  %7 = icmp eq i64 %6, 0, !insn.addr !328
  %8 = icmp eq i1 %7, false, !insn.addr !329
  %9 = select i1 %8, i64 %5, i64 %2, !insn.addr !329
  %10 = and i64 %9, 4294967295, !insn.addr !329
  ret i64 %10, !insn.addr !330

dec_label_pc_1b80:                                ; preds = %dec_label_pc_1b60, %dec_label_pc_1b68
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !331

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %merge.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 1, 2, 0, 3 }
  uselistorder label %dec_label_pc_1b80, { 1, 0 }
}

define i64 @conditional_return(i64 %arg1) local_unnamed_addr {
dec_label_pc_1b90:
  %0 = trunc i64 %arg1 to i32, !insn.addr !332
  %1 = icmp slt i32 %0, 1
  br i1 %1, label %dec_label_pc_1ba0, label %dec_label_pc_1b98, !insn.addr !333

dec_label_pc_1b98:                                ; preds = %dec_label_pc_1b90
  %2 = mul i64 %arg1, 2, !insn.addr !334
  %3 = and i64 %2, 4294967294, !insn.addr !334
  ret i64 %3, !insn.addr !335

dec_label_pc_1ba0:                                ; preds = %dec_label_pc_1b90
  %4 = sub i64 0, %arg1, !insn.addr !336
  %5 = icmp eq i32 %0, 0, !insn.addr !337
  %.op = and i64 %4, 4294967295
  %6 = select i1 %5, i64 0, i64 %.op, !insn.addr !338
  ret i64 %6, !insn.addr !339

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i32 @duffs_device(i32* %dst, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1bb0:
  %0 = icmp slt i32 %n, 1
  br i1 %0, label %dec_label_pc_1c68, label %dec_label_pc_1bc5, !insn.addr !340

dec_label_pc_1bc5:                                ; preds = %dec_label_pc_1bb0
  %1 = ptrtoint i32* %dst to i64
  %2 = trunc i64 %1 to i32, !insn.addr !341
  ret i32 %2, !insn.addr !341

dec_label_pc_1c68:                                ; preds = %dec_label_pc_1bb0
  ret i32 -1, !insn.addr !342
}

define i64 @function_1c70(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1c70:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !343
}

define i64 @loop_complex_cond(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1c80:
  %rdi.0.reg2mem = alloca i64, !insn.addr !344
  %rdx.0.reg2mem = alloca i64, !insn.addr !344
  %rax.0.reg2mem = alloca i64, !insn.addr !344
  %0 = trunc i64 %arg1 to i32, !insn.addr !345
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !346
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !346
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !346
  br i1 %1, label %dec_label_pc_1cb0, label %dec_label_pc_1c90, !insn.addr !346

dec_label_pc_1c90:                                ; preds = %dec_label_pc_1c80, %dec_label_pc_1c9d
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %2 = add nuw nsw i64 %rax.0.reload, 2, !insn.addr !347
  %3 = and i64 %2, 4294967295, !insn.addr !347
  %4 = add i64 %rdi.0.reload, 4294967295, !insn.addr !348
  %5 = and i64 %4, 4294967295, !insn.addr !348
  %6 = add nuw nsw i64 %rdx.0.reload, 1, !insn.addr !349
  %7 = icmp ult i64 %3, %5, !insn.addr !350
  br i1 %7, label %dec_label_pc_1c9d, label %dec_label_pc_1ca2, !insn.addr !350

dec_label_pc_1c9d:                                ; preds = %dec_label_pc_1c90
  %8 = and i64 %6, 4294967295, !insn.addr !349
  %9 = trunc i64 %6 to i32, !insn.addr !351
  %10 = icmp slt i32 %9, 10, !insn.addr !351
  store i64 %3, i64* %rax.0.reg2mem, !insn.addr !351
  store i64 %8, i64* %rdx.0.reg2mem, !insn.addr !351
  store i64 %5, i64* %rdi.0.reg2mem, !insn.addr !351
  br i1 %10, label %dec_label_pc_1c90, label %dec_label_pc_1ca2, !insn.addr !351

dec_label_pc_1ca2:                                ; preds = %dec_label_pc_1c90, %dec_label_pc_1c9d
  %11 = add nuw nsw i64 %6, %2, !insn.addr !352
  %12 = add i64 %11, %4, !insn.addr !353
  %13 = and i64 %12, 4294967295, !insn.addr !353
  ret i64 %13, !insn.addr !354

dec_label_pc_1cb0:                                ; preds = %dec_label_pc_1c80
  %14 = and i64 %arg1, 4294967295, !insn.addr !355
  ret i64 %14, !insn.addr !356

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdi.0.reg2mem, { 2, 0, 1 }
  uselistorder i64 %arg1, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1ca2, { 1, 0 }
  uselistorder label %dec_label_pc_1c90, { 1, 0 }
}

define i64 @loop_modify_var(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1cc0:
  %r8.1.reg2mem = alloca i64, !insn.addr !357
  %rax.01.reg2mem = alloca i64, !insn.addr !357
  %r8.02.reg2mem = alloca i64, !insn.addr !357
  %.reg2mem = alloca i64, !insn.addr !357
  %0 = trunc i64 %arg1 to i32, !insn.addr !358
  %1 = icmp eq i32 %0, 0, !insn.addr !358
  %2 = icmp slt i32 %0, 0, !insn.addr !358
  %3 = icmp eq i1 %2, false, !insn.addr !359
  %4 = icmp eq i1 %1, false, !insn.addr !359
  %5 = icmp eq i1 %3, %4, !insn.addr !359
  %6 = icmp sgt i64 %arg1, 1, !insn.addr !360
  %or.cond = icmp eq i1 %6, %5
  store i64 1, i64* %.reg2mem, !insn.addr !359
  store i64 0, i64* %r8.02.reg2mem, !insn.addr !359
  store i64 0, i64* %rax.01.reg2mem, !insn.addr !359
  store i64 0, i64* %r8.1.reg2mem, !insn.addr !359
  br i1 %or.cond, label %dec_label_pc_1cd0, label %dec_label_pc_1ce3, !insn.addr !359

dec_label_pc_1cd0:                                ; preds = %dec_label_pc_1cc0, %dec_label_pc_1cd0
  %rax.01.reload = load i64, i64* %rax.01.reg2mem
  %r8.02.reload = load i64, i64* %r8.02.reg2mem
  %.reload = load i64, i64* %.reg2mem
  %7 = add nuw nsw i64 %rax.01.reload, 3, !insn.addr !361
  %8 = add nuw nsw i64 %r8.02.reload, %.reload, !insn.addr !362
  %9 = and i64 %8, 4294967295, !insn.addr !362
  %10 = trunc i64 %.reload to i32, !insn.addr !363
  %11 = add i32 %10, -5, !insn.addr !363
  %12 = sub i32 4, %10
  %13 = and i32 %12, %10, !insn.addr !363
  %14 = icmp slt i32 %13, 0, !insn.addr !363
  %15 = icmp eq i32 %11, 0, !insn.addr !363
  %16 = icmp slt i32 %11, 0, !insn.addr !363
  %17 = icmp ne i1 %16, %14, !insn.addr !364
  %18 = or i1 %15, %17, !insn.addr !364
  %19 = select i1 %18, i64 %.reload, i64 %7, !insn.addr !364
  %20 = and i64 %19, 4294967295, !insn.addr !364
  %21 = add nuw nsw i64 %20, 1, !insn.addr !365
  %22 = and i64 %21, 4294967295, !insn.addr !365
  %23 = icmp slt i64 %22, %arg1, !insn.addr !360
  store i64 %21, i64* %.reg2mem, !insn.addr !360
  store i64 %9, i64* %r8.02.reg2mem, !insn.addr !360
  store i64 %20, i64* %rax.01.reg2mem, !insn.addr !360
  store i64 %9, i64* %r8.1.reg2mem, !insn.addr !360
  br i1 %23, label %dec_label_pc_1cd0, label %dec_label_pc_1ce3, !insn.addr !360

dec_label_pc_1ce3:                                ; preds = %dec_label_pc_1cd0, %dec_label_pc_1cc0
  %r8.1.reload = load i64, i64* %r8.1.reg2mem
  ret i64 %r8.1.reload, !insn.addr !366

; uselistorder directives
  uselistorder i32 %11, { 1, 0 }
  uselistorder i32 %0, { 1, 0 }
  uselistorder i64* %.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r8.02.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.01.reg2mem, { 2, 0, 1 }
  uselistorder i64 %arg1, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1cd0, { 1, 0 }
}

define i64 @loop_external_state() local_unnamed_addr {
dec_label_pc_1cf0:
  %0 = alloca i64
  %rax.1.reg2mem = alloca i64, !insn.addr !367
  %rax.0.reg2mem = alloca i64, !insn.addr !367
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp eq i32 %2, 0, !insn.addr !368
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !369
  br label %dec_label_pc_1d08, !insn.addr !369

dec_label_pc_1d00:                                ; preds = %dec_label_pc_1d08
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %4 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !370
  %5 = and i64 %4, 4294967295, !insn.addr !370
  %6 = trunc i64 %4 to i32, !insn.addr !371
  %7 = icmp eq i32 %6, 101, !insn.addr !371
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !372
  store i64 %5, i64* %rax.1.reg2mem, !insn.addr !372
  br i1 %7, label %dec_label_pc_1d0e, label %dec_label_pc_1d08, !insn.addr !372

dec_label_pc_1d08:                                ; preds = %dec_label_pc_1d00, %dec_label_pc_1cf0
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !373
  br i1 %3, label %dec_label_pc_1d00, label %dec_label_pc_1d0e, !insn.addr !373

dec_label_pc_1d0e:                                ; preds = %dec_label_pc_1d00, %dec_label_pc_1d08
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !374

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1d0e, { 1, 0 }
}

define i64 @tail_recursion(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1d10:
  %rax.1.reg2mem = alloca i64, !insn.addr !375
  %rdi.0.reg2mem = alloca i64, !insn.addr !375
  %rax.0.reg2mem = alloca i64, !insn.addr !375
  %0 = and i64 %arg2, 4294967295, !insn.addr !376
  %1 = trunc i64 %arg1 to i32, !insn.addr !377
  %2 = icmp slt i32 %1, 2, !insn.addr !377
  store i64 %0, i64* %rax.0.reg2mem, !insn.addr !377
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !377
  store i64 %0, i64* %rax.1.reg2mem, !insn.addr !377
  br i1 %2, label %dec_label_pc_1d2b, label %dec_label_pc_1d20, !insn.addr !377

dec_label_pc_1d20:                                ; preds = %dec_label_pc_1d10, %dec_label_pc_1d20
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %sext = mul i64 %rax.0.reload, 4294967296
  %3 = ashr exact i64 %sext, 32, !insn.addr !378
  %sext1 = mul i64 %rdi.0.reload, 4294967296
  %4 = ashr exact i64 %sext1, 32, !insn.addr !378
  %5 = mul nsw i64 %4, %3, !insn.addr !378
  %6 = and i64 %5, 4294967295, !insn.addr !378
  %7 = add i64 %rdi.0.reload, 4294967295, !insn.addr !379
  %8 = and i64 %7, 4294967295, !insn.addr !379
  %9 = trunc i64 %7 to i32, !insn.addr !380
  %10 = icmp eq i32 %9, 1, !insn.addr !380
  %11 = icmp eq i1 %10, false, !insn.addr !381
  store i64 %6, i64* %rax.0.reg2mem, !insn.addr !381
  store i64 %8, i64* %rdi.0.reg2mem, !insn.addr !381
  store i64 %6, i64* %rax.1.reg2mem, !insn.addr !381
  br i1 %11, label %dec_label_pc_1d20, label %dec_label_pc_1d2b, !insn.addr !381

dec_label_pc_1d2b:                                ; preds = %dec_label_pc_1d20, %dec_label_pc_1d10
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !382

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdi.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1d20, { 1, 0 }
}

define i64 @indirect_recursion_a(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1d30:
  %rax.1.reg2mem = alloca i64, !insn.addr !383
  %storemerge.in.reg2mem = alloca i64, !insn.addr !383
  %rdi.0.reg2mem = alloca i64, !insn.addr !383
  %rsi.0.reg2mem = alloca i64, !insn.addr !383
  %rdx.0.in.in.reg2mem = alloca i64, !insn.addr !383
  %0 = and i64 %arg1, 4294967295, !insn.addr !384
  %1 = trunc i64 %arg2 to i32, !insn.addr !385
  %2 = icmp slt i32 %1, 1
  store i64 %arg2, i64* %rdx.0.in.in.reg2mem, !insn.addr !386
  store i64 %arg2, i64* %rsi.0.reg2mem, !insn.addr !386
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !386
  store i64 %0, i64* %rax.1.reg2mem, !insn.addr !386
  br i1 %2, label %dec_label_pc_1d5c, label %dec_label_pc_1d3d, !insn.addr !386

dec_label_pc_1d3d:                                ; preds = %dec_label_pc_1d30, %dec_label_pc_1d50
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %rdx.0.in.in.reload = load i64, i64* %rdx.0.in.in.reg2mem
  %3 = urem i64 %rdi.0.reload, 2
  %4 = icmp eq i64 %3, 0, !insn.addr !387
  br i1 %4, label %dec_label_pc_1d68, label %dec_label_pc_1d43, !insn.addr !388

dec_label_pc_1d43:                                ; preds = %dec_label_pc_1d3d
  %5 = mul i64 %rdi.0.reload, 3, !insn.addr !389
  %6 = trunc i64 %rsi.0.reload to i32, !insn.addr !390
  %7 = icmp eq i32 %6, 1, !insn.addr !390
  br i1 %7, label %dec_label_pc_1d60, label %dec_label_pc_1d4b, !insn.addr !391

dec_label_pc_1d4b:                                ; preds = %dec_label_pc_1d43
  %8 = and i64 %5, 4294967295, !insn.addr !389
  %9 = add nuw nsw i64 %8, 2, !insn.addr !392
  store i64 %9, i64* %storemerge.in.reg2mem, !insn.addr !392
  br label %dec_label_pc_1d50, !insn.addr !392

dec_label_pc_1d50:                                ; preds = %dec_label_pc_1d78, %dec_label_pc_1d4b
  %rdx.0.in = add i64 %rdx.0.in.in.reload, 4294967294
  %rdx.0 = and i64 %rdx.0.in, 4294967295
  %storemerge.in.reload = load i64, i64* %storemerge.in.reg2mem
  %storemerge = and i64 %storemerge.in.reload, 4294967295
  %10 = add i64 %rsi.0.reload, 4294967294, !insn.addr !393
  %11 = and i64 %10, 4294967295, !insn.addr !393
  %12 = icmp eq i64 %rdx.0, 0, !insn.addr !394
  %13 = icmp eq i1 %12, false, !insn.addr !395
  store i64 %rdx.0, i64* %rdx.0.in.in.reg2mem, !insn.addr !395
  store i64 %11, i64* %rsi.0.reg2mem, !insn.addr !395
  store i64 %storemerge, i64* %rdi.0.reg2mem, !insn.addr !395
  store i64 %storemerge, i64* %rax.1.reg2mem, !insn.addr !395
  br i1 %13, label %dec_label_pc_1d3d, label %dec_label_pc_1d5c, !insn.addr !395

dec_label_pc_1d5c:                                ; preds = %dec_label_pc_1d50, %dec_label_pc_1d68, %dec_label_pc_1d30
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !396

dec_label_pc_1d60:                                ; preds = %dec_label_pc_1d43
  %14 = add i64 %5, 1, !insn.addr !397
  %15 = and i64 %14, 4294967295, !insn.addr !397
  ret i64 %15, !insn.addr !398

dec_label_pc_1d68:                                ; preds = %dec_label_pc_1d3d
  %16 = trunc i64 %rdi.0.reload to i32, !insn.addr !399
  %17 = icmp slt i32 %16, 0
  %18 = zext i1 %17 to i32, !insn.addr !400
  %19 = add i32 %18, %16, !insn.addr !401
  %20 = ashr i32 %19, 1, !insn.addr !402
  %21 = zext i32 %20 to i64, !insn.addr !402
  %22 = trunc i64 %rsi.0.reload to i32, !insn.addr !403
  %23 = icmp eq i32 %22, 1, !insn.addr !403
  store i64 %21, i64* %rax.1.reg2mem, !insn.addr !404
  br i1 %23, label %dec_label_pc_1d5c, label %dec_label_pc_1d78, !insn.addr !404

dec_label_pc_1d78:                                ; preds = %dec_label_pc_1d68
  %24 = add nuw nsw i64 %21, 1, !insn.addr !405
  store i64 %24, i64* %storemerge.in.reg2mem, !insn.addr !406
  br label %dec_label_pc_1d50, !insn.addr !406

; uselistorder directives
  uselistorder i64 %21, { 1, 0 }
  uselistorder i32 %16, { 1, 0 }
  uselistorder i64* %rdx.0.in.in.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rsi.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdi.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge.in.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.1.reg2mem, { 2, 0, 1, 3 }
  uselistorder label %dec_label_pc_1d5c, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1d3d, { 1, 0 }
}

define i64 @call_func_ptr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1d80:
  ret i64 %arg1, !insn.addr !407
}

define i64 @call_func_ptr_array(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1d90:
  %stack_var_-40 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !408
  store i64 4640, i64* %stack_var_-40, align 8, !insn.addr !409
  %1 = trunc i64 %arg1 to i32, !insn.addr !410
  %2 = icmp ult i32 %1, 3
  %3 = call i64 @__readfsqword(i64 40)
  %4 = icmp eq i64 %0, %3
  %5 = icmp eq i1 %4, false
  br i1 %2, label %dec_label_pc_1dd3, label %dec_label_pc_1df0, !insn.addr !411

dec_label_pc_1dd3:                                ; preds = %dec_label_pc_1d90
  br i1 %5, label %dec_label_pc_1e0a, label %dec_label_pc_1de3, !insn.addr !412

dec_label_pc_1de3:                                ; preds = %dec_label_pc_1dd3
  %6 = ptrtoint i64* %stack_var_-40 to i64, !insn.addr !413
  %sext = mul i64 %arg1, 4294967296
  %7 = ashr exact i64 %sext, 29, !insn.addr !414
  %8 = add i64 %7, %6, !insn.addr !414
  %9 = inttoptr i64 %8 to i64*, !insn.addr !414
  %10 = load i64, i64* %9, align 8, !insn.addr !414
  ret i64 %10, !insn.addr !415

dec_label_pc_1df0:                                ; preds = %dec_label_pc_1d90
  br i1 %5, label %dec_label_pc_1e0a, label %dec_label_pc_1e00, !insn.addr !416

dec_label_pc_1e00:                                ; preds = %dec_label_pc_1df0
  ret i64 4294967295, !insn.addr !417

dec_label_pc_1e0a:                                ; preds = %dec_label_pc_1df0, %dec_label_pc_1dd3
  call void @__stack_chk_fail(), !insn.addr !418
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !419

; uselistorder directives
  uselistorder i64* %stack_var_-40, { 1, 0 }
}

define i32 @call_virtual_func(i8* %obj, i32 %x) local_unnamed_addr {
dec_label_pc_1e10:
  %0 = mul i32 %x, 2, !insn.addr !420
  ret i32 %0, !insn.addr !421
}

define i64 @process_with_callback(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1e20:
  %merge.reg2mem = alloca i64, !insn.addr !422
  %r12.0.reg2mem = alloca i64, !insn.addr !422
  %rbx.0.reg2mem = alloca i64, !insn.addr !422
  %0 = trunc i64 %arg2 to i32, !insn.addr !423
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %merge.reg2mem, !insn.addr !424
  br i1 %1, label %dec_label_pc_1e58, label %dec_label_pc_1e32, !insn.addr !424

dec_label_pc_1e32:                                ; preds = %dec_label_pc_1e20
  %2 = add i64 %arg2, 4294967295, !insn.addr !425
  %3 = mul i64 %2, 4, !insn.addr !425
  %4 = and i64 %3, 17179869180, !insn.addr !426
  %5 = add i64 %arg1, 4, !insn.addr !426
  %6 = add i64 %5, %4, !insn.addr !426
  store i64 %arg1, i64* %rbx.0.reg2mem, !insn.addr !427
  store i64 0, i64* %r12.0.reg2mem, !insn.addr !427
  br label %dec_label_pc_1e48, !insn.addr !427

dec_label_pc_1e48:                                ; preds = %dec_label_pc_1e48, %dec_label_pc_1e32
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %7 = add i64 %rbx.0.reload, 4, !insn.addr !428
  %8 = add i64 %r12.0.reload, %2, !insn.addr !429
  %9 = and i64 %8, 4294967295, !insn.addr !429
  %10 = icmp eq i64 %7, %6, !insn.addr !430
  %11 = icmp eq i1 %10, false, !insn.addr !431
  store i64 %7, i64* %rbx.0.reg2mem, !insn.addr !431
  store i64 %9, i64* %r12.0.reg2mem, !insn.addr !431
  store i64 %9, i64* %merge.reg2mem, !insn.addr !431
  br i1 %11, label %dec_label_pc_1e48, label %dec_label_pc_1e58, !insn.addr !431

dec_label_pc_1e58:                                ; preds = %dec_label_pc_1e48, %dec_label_pc_1e20
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !432

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r12.0.reg2mem, { 1, 0, 2 }
}

define void @test_control_flow_l2() local_unnamed_addr {
dec_label_pc_1e90:
  %0 = alloca i128
  %.reg2mem20 = alloca i64, !insn.addr !433
  %.reg2mem18 = alloca i64, !insn.addr !433
  %rdx.2.reg2mem = alloca i64, !insn.addr !433
  %r8.04.reg2mem = alloca i64, !insn.addr !433
  %storemerge5.reg2mem = alloca i64, !insn.addr !433
  %.reg2mem16 = alloca i64, !insn.addr !433
  %.reg2mem = alloca i32, !insn.addr !433
  %rdx.1.reg2mem = alloca i64, !insn.addr !433
  %rdx.0.reg2mem = alloca i64, !insn.addr !433
  %1 = load i128, i128* %0
  %stack_var_-120 = alloca i64, align 8
  %stack_var_-100 = alloca i64, align 8
  %stack_var_-56 = alloca i64, align 8
  %stack_var_-88 = alloca i64, align 8
  %arr_-128 = alloca [5 x i32], align 4
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !434
  %3 = call i32 @puts(i8* bitcast (i8** @global_var_3118 to i8*)), !insn.addr !435
  %4 = call i32 @loop_multi_exit(i32 7), !insn.addr !436
  %5 = zext i32 %4 to i64, !insn.addr !437
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3140, i64 0, i64 0), i64 %5), !insn.addr !438
  store [5 x i32] [i32 0, i32 undef, i32 undef, i32 undef, i32 undef], [5 x i32]* %arr_-128, align 4, !insn.addr !439
  %7 = getelementptr inbounds [5 x i32], [5 x i32]* %arr_-128, i64 0, i64 0, !insn.addr !440
  %8 = load i32, i32* %7, align 4, !insn.addr !440
  %9 = icmp eq i32 %8, 1, !insn.addr !441
  %10 = icmp eq i1 %9, false, !insn.addr !442
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !443
  br label %dec_label_pc_1eef, !insn.addr !443

dec_label_pc_1ee0:                                ; preds = %dec_label_pc_1eef
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %11 = add nuw nsw i64 %rdx.0.reload, 1, !insn.addr !444
  %12 = and i64 %11, 4294967295, !insn.addr !444
  %13 = trunc i64 %11 to i32, !insn.addr !445
  %14 = icmp eq i32 %13, ptrtoint (i32* @global_var_3e9 to i32), !insn.addr !445
  store i64 %12, i64* %rdx.0.reg2mem, !insn.addr !446
  br i1 %14, label %dec_label_pc_2177, label %dec_label_pc_1eef, !insn.addr !446

dec_label_pc_1eef:                                ; preds = %dec_label_pc_1ee0, %dec_label_pc_1e90
  store i64 0, i64* %rdx.1.reg2mem, !insn.addr !442
  br i1 %10, label %dec_label_pc_1ee0, label %dec_label_pc_1ef8, !insn.addr !442

dec_label_pc_1ef8:                                ; preds = %dec_label_pc_1eef, %dec_label_pc_2177
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3523, i64 0, i64 0), i64 %rdx.1.reload), !insn.addr !447
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3541, i64 0, i64 0), i64 4294967295), !insn.addr !448
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3541, i64 0, i64 0), i64 4294967294), !insn.addr !449
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3541, i64 0, i64 0), i64 4), !insn.addr !450
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3160, i64 0, i64 0), i64 10), !insn.addr !451
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3160, i64 0, i64 0), i64 5), !insn.addr !452
  %21 = call i128 @__asm_pxor(i128 %1, i128 %1), !insn.addr !453
  store i64 8589934593, i64* %stack_var_-88, align 8, !insn.addr !454
  %22 = call i64 @__asm_movaps(i128 %21), !insn.addr !455
  store i64 %22, i64* %stack_var_-56, align 8, !insn.addr !455
  %23 = call i64 @__asm_movaps(i128 %21), !insn.addr !456
  %24 = bitcast i64* %stack_var_-56 to i32*, !insn.addr !457
  %25 = bitcast i64* %stack_var_-88 to i32*, !insn.addr !457
  %26 = call i32 @duffs_device(i32* nonnull %24, i32* nonnull %25, i32 8), !insn.addr !457
  %27 = zext i32 %26 to i64, !insn.addr !458
  %28 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_355e, i64 0, i64 0), i64 %27), !insn.addr !459
  %29 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3188, i64 0, i64 0), i64 18), !insn.addr !460
  store i32 1, i32* %.reg2mem
  store i64 1, i64* %.reg2mem16
  store i64 0, i64* %storemerge5.reg2mem
  store i64 0, i64* %r8.04.reg2mem
  br label %dec_label_pc_2010

dec_label_pc_2010:                                ; preds = %dec_label_pc_1ef8, %dec_label_pc_2010
  %r8.04.reload = load i64, i64* %r8.04.reg2mem
  %storemerge5.reload = load i64, i64* %storemerge5.reg2mem
  %.reload17 = load i64, i64* %.reg2mem16
  %.reload = load i32, i32* %.reg2mem
  %30 = add nuw nsw i64 %storemerge5.reload, 3, !insn.addr !461
  %31 = add nuw nsw i64 %r8.04.reload, %.reload17, !insn.addr !462
  %32 = and i64 %31, 4294967295, !insn.addr !462
  %33 = add i32 %.reload, -5, !insn.addr !463
  %34 = sub i32 4, %.reload
  %35 = and i32 %34, %.reload, !insn.addr !463
  %36 = icmp slt i32 %35, 0, !insn.addr !463
  %37 = icmp eq i32 %33, 0, !insn.addr !463
  %38 = icmp slt i32 %33, 0, !insn.addr !463
  %39 = icmp ne i1 %38, %36, !insn.addr !464
  %40 = or i1 %37, %39, !insn.addr !464
  %41 = select i1 %40, i64 %.reload17, i64 %30, !insn.addr !464
  %42 = and i64 %41, 4294967295, !insn.addr !464
  %43 = add nuw nsw i64 %42, 1, !insn.addr !465
  %44 = trunc i64 %43 to i32, !insn.addr !466
  %45 = icmp slt i32 %44, 10, !insn.addr !466
  store i32 %44, i32* %.reg2mem, !insn.addr !466
  store i64 %43, i64* %.reg2mem16, !insn.addr !466
  store i64 %42, i64* %storemerge5.reg2mem, !insn.addr !466
  store i64 %32, i64* %r8.04.reg2mem, !insn.addr !466
  br i1 %45, label %dec_label_pc_2010, label %dec_label_pc_2024, !insn.addr !466

dec_label_pc_2024:                                ; preds = %dec_label_pc_2010
  %46 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_31b0, i64 0, i64 0), i64 %32), !insn.addr !467
  store i64 0, i64* %rdx.2.reg2mem, !insn.addr !468
  br label %dec_label_pc_2058, !insn.addr !468

dec_label_pc_2058:                                ; preds = %dec_label_pc_2058, %dec_label_pc_2024
  %rdx.2.reload = load i64, i64* %rdx.2.reg2mem
  %47 = add nuw nsw i64 %rdx.2.reload, 1, !insn.addr !469
  %48 = and i64 %47, 4294967295, !insn.addr !469
  %49 = trunc i64 %47 to i32, !insn.addr !470
  %50 = icmp eq i32 %49, 101, !insn.addr !470
  store i64 %48, i64* %rdx.2.reg2mem, !insn.addr !471
  br i1 %50, label %dec_label_pc_2060, label %dec_label_pc_2058, !insn.addr !471

dec_label_pc_2060:                                ; preds = %dec_label_pc_2058
  %51 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_31d0, i64 0, i64 0), i64 %48), !insn.addr !472
  %52 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_31f8, i64 0, i64 0), i64 120), !insn.addr !473
  %53 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3220, i64 0, i64 0), i64 120), !insn.addr !474
  %54 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3240, i64 0, i64 0), i64 3), !insn.addr !475
  %55 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_357b, i64 0, i64 0), i64 10), !insn.addr !476
  %56 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_3268, i64 0, i64 0), i64 10), !insn.addr !477
  %57 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_3268, i64 0, i64 0), i64 120), !insn.addr !478
  %58 = ptrtoint i64* %stack_var_-100 to i64, !insn.addr !479
  store i64 8589934593, i64* %stack_var_-120, align 8, !insn.addr !480
  %59 = ptrtoint i64* %stack_var_-120 to i64, !insn.addr !481
  %60 = or i64 %59, 4, !insn.addr !482
  store i64 2, i64* %.reg2mem18
  store i64 %60, i64* %.reg2mem20
  br label %dec_label_pc_2140

dec_label_pc_2140:                                ; preds = %dec_label_pc_2060, %dec_label_pc_2140
  %.reload21 = load i64, i64* %.reg2mem20
  %.reload19 = load i64, i64* %.reg2mem18
  %61 = inttoptr i64 %.reload21 to i32*, !insn.addr !483
  %62 = load i32, i32* %61, align 4, !insn.addr !483
  %63 = zext i32 %62 to i64, !insn.addr !483
  %64 = add i64 %.reload21, 4, !insn.addr !482
  %65 = mul i64 %63, 2, !insn.addr !484
  %66 = add nuw nsw i64 %65, %.reload19, !insn.addr !484
  %67 = and i64 %66, 4294967295, !insn.addr !484
  %68 = icmp eq i64 %64, %58, !insn.addr !485
  %69 = icmp eq i1 %68, false, !insn.addr !486
  store i64 %67, i64* %.reg2mem18, !insn.addr !486
  store i64 %64, i64* %.reg2mem20, !insn.addr !486
  br i1 %69, label %dec_label_pc_2140, label %dec_label_pc_214e, !insn.addr !486

dec_label_pc_214e:                                ; preds = %dec_label_pc_2140
  %70 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3290, i64 0, i64 0), i64 %67), !insn.addr !487
  %71 = call i64 @__readfsqword(i64 40), !insn.addr !488
  %72 = icmp eq i64 %2, %71, !insn.addr !488
  %73 = icmp eq i1 %72, false, !insn.addr !489
  br i1 %73, label %dec_label_pc_2184, label %dec_label_pc_2171, !insn.addr !489

dec_label_pc_2171:                                ; preds = %dec_label_pc_214e
  ret void, !insn.addr !490

dec_label_pc_2177:                                ; preds = %dec_label_pc_1ee0
  store [5 x i32] [i32 1, i32 undef, i32 undef, i32 undef, i32 undef], [5 x i32]* %arr_-128, align 4, !insn.addr !491
  store i64 %12, i64* %rdx.1.reg2mem, !insn.addr !492
  br label %dec_label_pc_1ef8, !insn.addr !492

dec_label_pc_2184:                                ; preds = %dec_label_pc_214e
  call void @__stack_chk_fail(), !insn.addr !493
  ret void, !insn.addr !494

; uselistorder directives
  uselistorder i64 %67, { 1, 0 }
  uselistorder i64 %.reload21, { 1, 0 }
  uselistorder i64 %48, { 1, 0 }
  uselistorder i32 %33, { 1, 0 }
  uselistorder i64 %32, { 1, 0 }
  uselistorder i32 %.reload, { 2, 1, 0 }
  uselistorder i128 %21, { 1, 0 }
  uselistorder [5 x i32]* %arr_-128, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %.reg2mem, { 1, 0, 2 }
  uselistorder i64* %.reg2mem16, { 1, 0, 2 }
  uselistorder i64* %storemerge5.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r8.04.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.2.reg2mem, { 1, 0, 2 }
  uselistorder i64* %.reg2mem18, { 1, 0, 2 }
  uselistorder i64* %.reg2mem20, { 1, 0, 2 }
  uselistorder i64 5, { 3, 0, 1, 4, 5, 2 }
  uselistorder i64 4, { 13, 5, 9, 11, 12, 0, 6, 1, 2, 10, 3, 7, 4, 8 }
  uselistorder label %dec_label_pc_2140, { 1, 0 }
  uselistorder label %dec_label_pc_2010, { 1, 0 }
  uselistorder label %dec_label_pc_1ef8, { 1, 0 }
}

define i32 @non_local_jump(i32 %x) local_unnamed_addr {
dec_label_pc_2190:
  %storemerge.reg2mem = alloca i32, !insn.addr !495
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @jump_buffer to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !496
  %1 = icmp eq i32 %0, 0, !insn.addr !497
  %2 = icmp eq i1 %1, false, !insn.addr !498
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !498
  br i1 %2, label %dec_label_pc_21c5, label %dec_label_pc_21b0, !insn.addr !498

dec_label_pc_21b0:                                ; preds = %dec_label_pc_2190
  %3 = icmp slt i32 %x, 0, !insn.addr !499
  br i1 %3, label %dec_label_pc_21e8, label %dec_label_pc_21b8, !insn.addr !500

dec_label_pc_21b8:                                ; preds = %dec_label_pc_21b0
  %4 = icmp sgt i32 %x, 100, !insn.addr !501
  br i1 %4, label %dec_label_pc_21d7, label %dec_label_pc_21bf, !insn.addr !501

dec_label_pc_21bf:                                ; preds = %dec_label_pc_21b8
  %5 = mul i32 %x, 2, !insn.addr !502
  store i32 %5, i32* %storemerge.reg2mem, !insn.addr !502
  br label %dec_label_pc_21c5, !insn.addr !502

dec_label_pc_21c5:                                ; preds = %dec_label_pc_2190, %dec_label_pc_21bf
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !503

dec_label_pc_21d7:                                ; preds = %dec_label_pc_21b8
  %6 = call i64 @__longjmp_chk(i64* nonnull @jump_buffer, i64 2), !insn.addr !504
  br label %dec_label_pc_21e8, !insn.addr !504

dec_label_pc_21e8:                                ; preds = %dec_label_pc_21d7, %dec_label_pc_21b0
  %7 = call i64 @__longjmp_chk(i64* nonnull @jump_buffer, i64 1), !insn.addr !505
  %8 = trunc i64 %7 to i32, !insn.addr !506
  ret i32 %8, !insn.addr !506

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %x, { 0, 2, 1 }
  uselistorder label %dec_label_pc_21c5, { 1, 0 }
}

define i64 @cpp_exception(i64 %arg1) local_unnamed_addr {
dec_label_pc_2200:
  %merge.reg2mem = alloca i64, !insn.addr !507
  %0 = trunc i64 %arg1 to i32, !insn.addr !508
  %1 = icmp slt i32 %0, 0, !insn.addr !508
  store i64 4294967295, i64* %merge.reg2mem, !insn.addr !509
  br i1 %1, label %dec_label_pc_2218, label %dec_label_pc_2208, !insn.addr !509

dec_label_pc_2208:                                ; preds = %dec_label_pc_2200
  %2 = icmp sgt i32 %0, 100, !insn.addr !510
  store i64 4294967294, i64* %merge.reg2mem, !insn.addr !510
  br i1 %2, label %dec_label_pc_2218, label %dec_label_pc_220d, !insn.addr !510

dec_label_pc_220d:                                ; preds = %dec_label_pc_2208
  %3 = mul i64 %arg1, 2, !insn.addr !511
  %4 = and i64 %3, 4294967294, !insn.addr !511
  ret i64 %4, !insn.addr !512

dec_label_pc_2218:                                ; preds = %dec_label_pc_2200, %dec_label_pc_2208
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !513

; uselistorder directives
  uselistorder i64* %merge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2218, { 1, 0 }
}

define i64 @large_jump_table(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2230:
  %stack_var_-104 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !514
  store i64 4672, i64* %stack_var_-104, align 8, !insn.addr !515
  %1 = trunc i64 %arg1 to i32, !insn.addr !516
  %2 = icmp ult i32 %1, 10
  %3 = call i64 @__readfsqword(i64 40)
  %4 = icmp eq i64 %0, %3
  %5 = icmp eq i1 %4, false
  br i1 %2, label %dec_label_pc_22cb, label %dec_label_pc_22e8, !insn.addr !517

dec_label_pc_22cb:                                ; preds = %dec_label_pc_2230
  br i1 %5, label %dec_label_pc_2302, label %dec_label_pc_22db, !insn.addr !518

dec_label_pc_22db:                                ; preds = %dec_label_pc_22cb
  %6 = ptrtoint i64* %stack_var_-104 to i64, !insn.addr !519
  %sext = mul i64 %arg1, 4294967296
  %7 = ashr exact i64 %sext, 29, !insn.addr !520
  %8 = add i64 %7, %6, !insn.addr !520
  %9 = inttoptr i64 %8 to i64*, !insn.addr !520
  %10 = load i64, i64* %9, align 8, !insn.addr !520
  ret i64 %10, !insn.addr !521

dec_label_pc_22e8:                                ; preds = %dec_label_pc_2230
  br i1 %5, label %dec_label_pc_2302, label %dec_label_pc_22f8, !insn.addr !522

dec_label_pc_22f8:                                ; preds = %dec_label_pc_22e8
  ret i64 4294967295, !insn.addr !523

dec_label_pc_2302:                                ; preds = %dec_label_pc_22e8, %dec_label_pc_22cb
  call void @__stack_chk_fail(), !insn.addr !524
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !525

; uselistorder directives
  uselistorder i64* %stack_var_-104, { 1, 0 }
}

define i64 @conditional_func_ptr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2310:
  %0 = and i64 %arg1, 4294967295, !insn.addr !526
  %1 = trunc i64 %arg1 to i32, !insn.addr !527
  %2 = icmp eq i32 %1, 0, !insn.addr !527
  %spec.select = select i1 %2, i64 %0, i64 4608
  ret i64 %spec.select, !insn.addr !528
}

define i64 @state_machine(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2340:
  %merge.reg2mem = alloca i64, !insn.addr !529
  %0 = trunc i64 %arg2 to i32, !insn.addr !530
  %1 = icmp eq i32 %0, 2, !insn.addr !530
  store i64 2, i64* %merge.reg2mem, !insn.addr !531
  br i1 %1, label %dec_label_pc_2380, label %dec_label_pc_2349, !insn.addr !531

dec_label_pc_2349:                                ; preds = %dec_label_pc_2340
  %2 = icmp sgt i32 %0, 2, !insn.addr !532
  br i1 %2, label %dec_label_pc_2370, label %dec_label_pc_234b, !insn.addr !532

dec_label_pc_234b:                                ; preds = %dec_label_pc_2349
  %3 = icmp eq i32 %0, 0, !insn.addr !533
  br i1 %3, label %dec_label_pc_23a0, label %dec_label_pc_234f, !insn.addr !534

dec_label_pc_234f:                                ; preds = %dec_label_pc_234b
  %4 = icmp eq i32 %0, 1, !insn.addr !535
  %5 = icmp eq i1 %4, false, !insn.addr !536
  store i64 3, i64* %merge.reg2mem, !insn.addr !536
  br i1 %5, label %dec_label_pc_2380, label %dec_label_pc_2354, !insn.addr !536

dec_label_pc_2354:                                ; preds = %dec_label_pc_234f
  %6 = trunc i64 %arg1 to i32, !insn.addr !537
  %7 = icmp eq i32 %6, 2, !insn.addr !537
  store i64 2, i64* %merge.reg2mem, !insn.addr !538
  br i1 %7, label %dec_label_pc_2380, label %dec_label_pc_2359, !insn.addr !538

dec_label_pc_2359:                                ; preds = %dec_label_pc_2354
  %8 = icmp eq i32 %6, 99, !insn.addr !539
  %9 = zext i1 %8 to i64, !insn.addr !540
  %10 = select i1 %8, i64 2, i64 1, !insn.addr !541
  %11 = add nuw nsw i64 %10, %9, !insn.addr !541
  ret i64 %11, !insn.addr !542

dec_label_pc_2370:                                ; preds = %dec_label_pc_2349
  %12 = icmp eq i32 %0, 3, !insn.addr !543
  %13 = icmp eq i1 %12, false, !insn.addr !544
  store i64 3, i64* %merge.reg2mem, !insn.addr !544
  br i1 %13, label %dec_label_pc_2380, label %dec_label_pc_2375, !insn.addr !544

dec_label_pc_2375:                                ; preds = %dec_label_pc_2370
  %14 = trunc i64 %arg1 to i32, !insn.addr !545
  %15 = icmp eq i32 %14, 0, !insn.addr !545
  %16 = select i1 %15, i64 0, i64 3, !insn.addr !546
  ret i64 %16, !insn.addr !547

dec_label_pc_2380:                                ; preds = %dec_label_pc_234f, %dec_label_pc_2370, %dec_label_pc_2354, %dec_label_pc_2340
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !548

dec_label_pc_23a0:                                ; preds = %dec_label_pc_234b
  %17 = trunc i64 %arg1 to i32, !insn.addr !549
  %18 = icmp eq i32 %17, 1, !insn.addr !549
  %19 = zext i1 %18 to i64, !insn.addr !550
  ret i64 %19, !insn.addr !551

; uselistorder directives
  uselistorder i1 %8, { 1, 0 }
  uselistorder i32 %0, { 0, 2, 1, 3, 4 }
  uselistorder i64* %merge.reg2mem, { 0, 2, 4, 1, 3 }
  uselistorder i32 3, { 1, 2, 3, 0, 4, 5, 6 }
  uselistorder i64 %arg1, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2380, { 1, 2, 0, 3 }
}

define i64 @fsm_func_table(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_23b0:
  %stack_var_-56 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !552
  store i64 4864, i64* %stack_var_-56, align 8, !insn.addr !553
  %1 = trunc i64 %arg2 to i32, !insn.addr !554
  %2 = icmp ult i32 %1, 4
  %3 = call i64 @__readfsqword(i64 40)
  %4 = icmp eq i64 %0, %3
  %5 = icmp eq i1 %4, false
  br i1 %2, label %dec_label_pc_23fa, label %dec_label_pc_2420, !insn.addr !555

dec_label_pc_23fa:                                ; preds = %dec_label_pc_23b0
  br i1 %5, label %dec_label_pc_243a, label %dec_label_pc_240a, !insn.addr !556

dec_label_pc_240a:                                ; preds = %dec_label_pc_23fa
  %6 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !557
  %sext = mul i64 %arg2, 4294967296
  %7 = ashr exact i64 %sext, 29, !insn.addr !558
  %8 = add i64 %7, %6, !insn.addr !558
  %9 = inttoptr i64 %8 to i64*, !insn.addr !558
  %10 = load i64, i64* %9, align 8, !insn.addr !558
  ret i64 %10, !insn.addr !559

dec_label_pc_2420:                                ; preds = %dec_label_pc_23b0
  br i1 %5, label %dec_label_pc_243a, label %dec_label_pc_2430, !insn.addr !560

dec_label_pc_2430:                                ; preds = %dec_label_pc_2420
  ret i64 3, !insn.addr !561

dec_label_pc_243a:                                ; preds = %dec_label_pc_2420, %dec_label_pc_23fa
  call void @__stack_chk_fail(), !insn.addr !562
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !563

; uselistorder directives
  uselistorder i64* %stack_var_-56, { 1, 0 }
  uselistorder i64 ptrtoint (i32* @0 to i64), { 1, 2, 3, 4, 0 }
  uselistorder i64 3, { 4, 5, 1, 0, 10, 6, 7, 8, 2, 9, 3 }
  uselistorder i64 29, { 2, 0, 1 }
}

define i32 @computed_goto(i32* %labels, i32 %idx) local_unnamed_addr {
dec_label_pc_2440:
  %merge.reg2mem = alloca i32, !insn.addr !564
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !565
  %1 = icmp ult i32 %idx, 4
  store i32 9360, i32* %merge.reg2mem, !insn.addr !566
  br i1 %1, label %dec_label_pc_248a, label %dec_label_pc_24e0, !insn.addr !566

dec_label_pc_248a:                                ; preds = %dec_label_pc_24e0, %dec_label_pc_2440
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !567

dec_label_pc_24e0:                                ; preds = %dec_label_pc_2440
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !568
  %3 = icmp eq i64 %0, %2, !insn.addr !568
  %4 = icmp eq i1 %3, false, !insn.addr !569
  store i32 -1, i32* %merge.reg2mem, !insn.addr !569
  br i1 %4, label %dec_label_pc_24e7, label %dec_label_pc_248a, !insn.addr !569

dec_label_pc_24e7:                                ; preds = %dec_label_pc_24e0
  call void @__stack_chk_fail(), !insn.addr !570
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !571

; uselistorder directives
  uselistorder i32* %merge.reg2mem, { 1, 0, 2 }
  uselistorder i32 -1, { 0, 1, 3, 2, 4 }
}

define i64 @obfuscated_cf(i64 %arg1) local_unnamed_addr {
dec_label_pc_24f0:
  %0 = mul i64 %arg1, 2, !insn.addr !572
  %1 = and i64 %0, 4294967294, !insn.addr !572
  ret i64 %1, !insn.addr !573
}

define i64 @opaque_predicate(i64 %arg1) local_unnamed_addr {
dec_label_pc_2500:
  %0 = mul i64 %arg1, 2, !insn.addr !574
  %1 = and i64 %0, 4294967294, !insn.addr !574
  ret i64 %1, !insn.addr !575

; uselistorder directives
  uselistorder i64 4294967294, { 3, 4, 5, 0, 11, 6, 2, 7, 1, 8, 9, 10 }
}

define i64 @overlapped_code(i64 %arg1) local_unnamed_addr {
dec_label_pc_2510:
  %0 = urem i64 %arg1, 2
  %1 = icmp eq i64 %0, 0, !insn.addr !576
  br i1 %1, label %dec_label_pc_2520, label %dec_label_pc_251a, !insn.addr !577

dec_label_pc_251a:                                ; preds = %dec_label_pc_2510
  %2 = mul i64 %arg1, 2, !insn.addr !578
  %3 = add i64 %arg1, 1, !insn.addr !578
  %4 = add i64 %3, %2, !insn.addr !578
  %5 = and i64 %4, 4294967295, !insn.addr !578
  ret i64 %5, !insn.addr !579

dec_label_pc_2520:                                ; preds = %dec_label_pc_2510
  %6 = trunc i64 %arg1 to i32, !insn.addr !580
  %7 = icmp slt i32 %6, 0
  %8 = zext i1 %7 to i32, !insn.addr !581
  %9 = add i32 %8, %6, !insn.addr !582
  %10 = ashr i32 %9, 1, !insn.addr !583
  %11 = zext i32 %10 to i64, !insn.addr !583
  ret i64 %11, !insn.addr !584

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i32 0, { 2, 8, 9, 10, 11, 34, 35, 36, 37, 38, 5, 3, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 4, 27, 28, 29, 30, 6, 31, 0, 32, 1, 33, 7 }
  uselistorder i64 %arg1, { 2, 3, 0, 1 }
}

define void @test_control_flow_l3() local_unnamed_addr {
dec_label_pc_2530:
  %stack_var_-40 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !585
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_32b8 to i8*)), !insn.addr !586
  %2 = call i32 @non_local_jump(i32 5), !insn.addr !587
  %3 = zext i32 %2 to i64, !insn.addr !588
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_32e0, i64 0, i64 0), i64 %3), !insn.addr !589
  %5 = call i32 @non_local_jump(i32 -5), !insn.addr !590
  %6 = zext i32 %5 to i64, !insn.addr !591
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_32e0, i64 0, i64 0), i64 %6), !insn.addr !592
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3599, i64 0, i64 0), i64 10), !insn.addr !593
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3599, i64 0, i64 0), i64 4294967295), !insn.addr !594
  %10 = call i32 @op_add(i32 10, i32 5), !insn.addr !595
  %11 = zext i32 %10 to i64, !insn.addr !596
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3300, i64 0, i64 0), i64 %11), !insn.addr !597
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_3328, i64 0, i64 0), i64 10), !insn.addr !598
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_35b7, i64 0, i64 0), i64 1), !insn.addr !599
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3350, i64 0, i64 0), i64 2), !insn.addr !600
  store i64 4294967296, i64* %stack_var_-40, align 8, !insn.addr !601
  %16 = bitcast i64* %stack_var_-40 to i32*, !insn.addr !602
  %17 = call i32 @computed_goto(i32* nonnull %16, i32 2), !insn.addr !602
  %18 = zext i32 %17 to i64, !insn.addr !603
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_35d5, i64 0, i64 0), i64 %18), !insn.addr !604
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_35f3, i64 0, i64 0), i64 10), !insn.addr !605
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3370, i64 0, i64 0), i64 10), !insn.addr !606
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3398, i64 0, i64 0), i64 16), !insn.addr !607
  %23 = call i64 @__readfsqword(i64 40), !insn.addr !608
  %24 = icmp eq i64 %0, %23, !insn.addr !608
  %25 = icmp eq i1 %24, false, !insn.addr !609
  br i1 %25, label %dec_label_pc_26ca, label %dec_label_pc_26c4, !insn.addr !609

dec_label_pc_26c4:                                ; preds = %dec_label_pc_2530
  ret void, !insn.addr !610

dec_label_pc_26ca:                                ; preds = %dec_label_pc_2530
  call void @__stack_chk_fail(), !insn.addr !611
  ret void, !insn.addr !611

; uselistorder directives
  uselistorder void ()* @__stack_chk_fail, { 7, 0, 4, 3, 5, 2, 6, 8, 1, 9 }
  uselistorder i1 false, { 33, 31, 4, 5, 6, 7, 32, 36, 37, 38, 8, 9, 10, 11, 12, 0, 13, 14, 34, 35, 39, 40, 41, 15, 16, 17, 18, 19, 20, 21, 1, 22, 23, 24, 25, 26, 2, 27, 3, 30, 28, 29 }
  uselistorder i32 2, { 5, 6, 4, 7, 0, 1, 8, 3, 9, 2, 10, 11 }
  uselistorder i64 4294967296, { 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 15, 16, 10, 11, 12, 13, 14 }
  uselistorder i64 2, { 25, 5, 17, 6, 7, 21, 1, 0, 8, 26, 9, 2, 22, 18, 23, 10, 19, 11, 3, 12, 20, 13, 4, 14, 16, 24, 15 }
  uselistorder i64 1, { 33, 36, 14, 34, 16, 17, 0, 15, 18, 19, 20, 21, 1, 13, 22, 23, 24, 25, 2, 38, 3, 39, 4, 35, 26, 6, 7, 5, 27, 8, 37, 28, 29, 30, 9, 31, 10, 32, 11, 12 }
  uselistorder i64 4294967295, { 68, 14, 15, 7, 0, 20, 19, 17, 18, 69, 16, 21, 22, 8, 24, 25, 23, 13, 26, 27, 28, 29, 30, 31, 32, 35, 33, 34, 36, 37, 38, 39, 40, 41, 42, 43, 1, 44, 45, 10, 2, 9, 3, 46, 47, 48, 49, 50, 51, 11, 4, 52, 53, 54, 55, 56, 57, 58, 59, 60, 12, 5, 6, 61, 62, 63, 64, 65, 66, 67 }
  uselistorder i64 10, { 3, 4, 5, 6, 7, 8, 9, 1, 10, 11, 2, 0 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 15, 14, 19, 22, 24, 31, 10, 9, 16, 13, 12, 17, 5, 4, 32, 40, 34, 29, 36, 35, 47, 2, 11, 8, 28, 27, 30, 45, 48, 56, 50, 49, 38, 46, 1, 0, 42, 41, 55, 33, 7, 6, 37, 26, 25, 18, 23, 21, 20, 3, 44, 43, 39, 54, 53, 52, 51, 57 }
  uselistorder i32 (i32)* @non_local_jump, { 1, 0 }
  uselistorder i32 (i8*)* @puts, { 0, 2, 1, 3 }
  uselistorder i64 0, { 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 0, 82, 83, 1, 2, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 3, 4, 66, 67, 94, 95, 6, 5, 37, 96, 7, 8, 9, 10, 11, 12, 13, 97, 98, 99, 34, 14, 16, 18, 15, 17, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 122, 120, 121, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 20, 19, 21, 22, 24, 25, 145, 23, 26, 27, 28, 29, 30, 36, 31, 146, 32, 148, 35, 33, 149, 38, 39, 40, 41, 42, 43, 147 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_26d0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !612

; uselistorder directives
  uselistorder i32 1, { 4, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 169, 182, 5, 170, 96, 97, 6, 171, 7, 8, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 15, 109, 110, 111, 112, 113, 114, 115, 116, 98, 117, 176, 175, 174, 173, 172, 18, 17, 16, 14, 13, 12, 11, 10, 9, 0, 118, 21, 20, 19, 177, 119, 183, 120, 121, 26, 25, 24, 23, 22, 122, 29, 28, 27, 31, 30, 3, 35, 34, 33, 32, 123, 38, 37, 36, 2, 124, 125, 39, 184, 126, 40, 127, 178, 45, 44, 43, 42, 41, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 179, 49, 48, 47, 46, 82, 155, 52, 51, 50, 156, 53, 83, 157, 56, 55, 54, 180, 58, 57, 158, 61, 60, 59, 63, 62, 66, 65, 64, 159, 69, 68, 67, 160, 70, 71, 81, 72, 161, 162, 163, 164, 73, 165, 166, 74, 167, 75, 76, 168, 79, 78, 77, 1, 181, 80 }
}

declare i32 @puts(i8*) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i32 @_setjmp([1 x %__jmp_buf_tag]) local_unnamed_addr

declare i32 @__printf_chk(i32, i8*, ...) local_unnamed_addr

declare i64 @__longjmp_chk(i64*, i64) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

declare i128 @__asm_pxor(i128, i128) local_unnamed_addr

declare i64 @__asm_movaps(i128) local_unnamed_addr

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
!12 = !{i64 4330}
!13 = !{i64 4337}
!14 = !{i64 4344}
!15 = !{i64 4355}
!16 = !{i64 4399}
!17 = !{i64 4405}
!18 = !{i64 4456}
!19 = !{i64 4520}
!20 = !{i64 4532}
!21 = !{i64 4539}
!22 = !{i64 4542}
!23 = !{i64 4553}
!24 = !{i64 4555}
!25 = !{i64 4562}
!26 = !{i64 4567}
!27 = !{i64 4572}
!28 = !{i64 4580}
!29 = !{i64 4584}
!30 = !{i64 4596}
!31 = !{i64 4608}
!32 = !{i64 4620}
!33 = !{i64 4626}
!34 = !{i64 4629}
!35 = !{i64 4632}
!36 = !{i64 4635}
!37 = !{i64 4637}
!38 = !{i64 4644}
!39 = !{i64 4647}
!40 = !{i64 4660}
!41 = !{i64 4663}
!42 = !{i64 4676}
!43 = !{i64 4679}
!44 = !{i64 4694}
!45 = !{i64 4696}
!46 = !{i64 4710}
!47 = !{i64 4713}
!48 = !{i64 4720}
!49 = !{i64 4727}
!50 = !{i64 4729}
!51 = !{i64 4724}
!52 = !{i64 4733}
!53 = !{i64 4734}
!54 = !{i64 4736}
!55 = !{i64 4742}
!56 = !{i64 4752}
!57 = !{i64 4761}
!58 = !{i64 4763}
!59 = !{i64 4758}
!60 = !{i64 4756}
!61 = !{i64 4765}
!62 = !{i64 4766}
!63 = !{i64 4768}
!64 = !{i64 4774}
!65 = !{i64 4790}
!66 = !{i64 4792}
!67 = !{i64 4806}
!68 = !{i64 4808}
!69 = !{i64 4822}
!70 = !{i64 4824}
!71 = !{i64 4840}
!72 = !{i64 4842}
!73 = !{i64 4856}
!74 = !{i64 4858}
!75 = !{i64 4870}
!76 = !{i64 4876}
!77 = !{i64 4884}
!78 = !{i64 4887}
!79 = !{i64 4891}
!80 = !{i64 4894}
!81 = !{i64 4897}
!82 = !{i64 4901}
!83 = !{i64 4917}
!84 = !{i64 4937}
!85 = !{i64 4950}
!86 = !{i64 4957}
!87 = !{i64 4960}
!88 = !{i64 4980}
!89 = !{i64 4983}
!90 = !{i64 4985}
!91 = !{i64 4987}
!92 = !{i64 4999}
!93 = !{i64 4996}
!94 = !{i64 5001}
!95 = !{i64 5004}
!96 = !{i64 5014}
!97 = !{i64 5016}
!98 = !{i64 5019}
!99 = !{i64 5024}
!100 = !{i64 5030}
!101 = !{i64 5032}
!102 = !{i64 5037}
!103 = !{i64 5034}
!104 = !{i64 5039}
!105 = !{i64 5042}
!106 = !{i64 5056}
!107 = !{i64 5062}
!108 = !{i64 5064}
!109 = !{i64 5071}
!110 = !{i64 5073}
!111 = !{i64 5075}
!112 = !{i64 5077}
!113 = !{i64 5079}
!114 = !{i64 5081}
!115 = !{i64 5085}
!116 = !{i64 5088}
!117 = !{i64 5091}
!118 = !{i64 5094}
!119 = !{i64 5109}
!120 = !{i64 5136}
!121 = !{i64 5145}
!122 = !{i64 5154}
!123 = !{i64 5167}
!124 = !{i64 5170}
!125 = !{i64 5181}
!126 = !{i64 5184}
!127 = !{i64 5193}
!128 = !{i64 5196}
!129 = !{i64 5198}
!130 = !{i64 5201}
!131 = !{i64 5204}
!132 = !{i64 5216}
!133 = !{i64 5225}
!134 = !{i64 5228}
!135 = !{i64 5230}
!136 = !{i64 5239}
!137 = !{i64 5242}
!138 = !{i64 5257}
!139 = !{i64 5267}
!140 = !{i64 5284}
!141 = !{i64 5297}
!142 = !{i64 5316}
!143 = !{i64 5328}
!144 = !{i64 5331}
!145 = !{i64 5334}
!146 = !{i64 5338}
!147 = !{i64 5349}
!148 = !{i64 5352}
!149 = !{i64 5354}
!150 = !{i64 5365}
!151 = !{i64 5367}
!152 = !{i64 5376}
!153 = !{i64 5380}
!154 = !{i64 5382}
!155 = !{i64 5392}
!156 = !{i64 5395}
!157 = !{i64 5398}
!158 = !{i64 5400}
!159 = !{i64 5405}
!160 = !{i64 5424}
!161 = !{i64 5428}
!162 = !{i64 5430}
!163 = !{i64 5440}
!164 = !{i64 5443}
!165 = !{i64 5445}
!166 = !{i64 5456}
!167 = !{i64 5459}
!168 = !{i64 5463}
!169 = !{i64 5465}
!170 = !{i64 5467}
!171 = !{i64 5472}
!172 = !{i64 5504}
!173 = !{i64 5511}
!174 = !{i64 5520}
!175 = !{i64 5523}
!176 = !{i64 5525}
!177 = !{i64 5536}
!178 = !{i64 5539}
!179 = !{i64 5543}
!180 = !{i64 5545}
!181 = !{i64 5547}
!182 = !{i64 5552}
!183 = !{i64 5568}
!184 = !{i64 5576}
!185 = !{i64 5578}
!186 = !{i64 5584}
!187 = !{i64 5589}
!188 = !{i64 5586}
!189 = !{i64 5592}
!190 = !{i64 5595}
!191 = !{i64 5597}
!192 = !{i64 5599}
!193 = !{i64 5600}
!194 = !{i64 5604}
!195 = !{i64 5613}
!196 = !{i64 5662}
!197 = !{i64 5664}
!198 = !{i64 5670}
!199 = !{i64 5674}
!200 = !{i64 5666}
!201 = !{i64 5676}
!202 = !{i64 5682}
!203 = !{i64 5684}
!204 = !{i64 5679}
!205 = !{i64 5701}
!206 = !{i64 5710}
!207 = !{i64 5719}
!208 = !{i64 5736}
!209 = !{i64 5741}
!210 = !{i64 5744}
!211 = !{i64 5748}
!212 = !{i64 5750}
!213 = !{i64 5781}
!214 = !{i64 5772}
!215 = !{i64 5774}
!216 = !{i64 5768}
!217 = !{i64 5778}
!218 = !{i64 5783}
!219 = !{i64 5788}
!220 = !{i64 5808}
!221 = !{i64 5812}
!222 = !{i64 5814}
!223 = !{i64 5816}
!224 = !{i64 5819}
!225 = !{i64 5822}
!226 = !{i64 5824}
!227 = !{i64 5834}
!228 = !{i64 5836}
!229 = !{i64 5863}
!230 = !{i64 5856}
!231 = !{i64 5860}
!232 = !{i64 5865}
!233 = !{i64 5870}
!234 = !{i64 5876}
!235 = !{i64 5880}
!236 = !{i64 5883}
!237 = !{i64 5888}
!238 = !{i64 5911}
!239 = !{i64 5927}
!240 = !{i64 5951}
!241 = !{i64 5971}
!242 = !{i64 5998}
!243 = !{i64 6018}
!244 = !{i64 6042}
!245 = !{i64 6062}
!246 = !{i64 6082}
!247 = !{i64 6099}
!248 = !{i64 6123}
!249 = !{i64 6147}
!250 = !{i64 6171}
!251 = !{i64 6195}
!252 = !{i64 6219}
!253 = !{i64 6240}
!254 = !{i64 6264}
!255 = !{i64 6288}
!256 = !{i64 6312}
!257 = !{i64 6336}
!258 = !{i64 6360}
!259 = !{i64 6365}
!260 = !{i64 6398}
!261 = !{i64 6405}
!262 = !{i64 6409}
!263 = !{i64 6415}
!264 = !{i64 6419}
!265 = !{i64 6424}
!266 = !{i64 6403}
!267 = !{i64 6443}
!268 = !{i64 6481}
!269 = !{i64 6488}
!270 = !{i64 6492}
!271 = !{i64 6498}
!272 = !{i64 6502}
!273 = !{i64 6507}
!274 = !{i64 6486}
!275 = !{i64 6519}
!276 = !{i64 6550}
!277 = !{i64 6570}
!278 = !{i64 6597}
!279 = !{i64 6621}
!280 = !{i64 6641}
!281 = !{i64 6651}
!282 = !{i64 6660}
!283 = !{i64 6682}
!284 = !{i64 6714}
!285 = !{i64 6719}
!286 = !{i64 6720}
!287 = !{i64 6735}
!288 = !{i64 6837}
!289 = !{i64 6839}
!290 = !{i64 6834}
!291 = !{i64 6841}
!292 = !{i64 6844}
!293 = !{i64 6846}
!294 = !{i64 6849}
!295 = !{i64 6851}
!296 = !{i64 6854}
!297 = !{i64 6856}
!298 = !{i64 6863}
!299 = !{i64 6866}
!300 = !{i64 6859}
!301 = !{i64 6868}
!302 = !{i64 6870}
!303 = !{i64 6872}
!304 = !{i64 6876}
!305 = !{i64 6879}
!306 = !{i64 6882}
!307 = !{i64 6898}
!308 = !{i64 6907}
!309 = !{i64 6913}
!310 = !{i64 6951}
!311 = !{i64 6956}
!312 = !{i64 6960}
!313 = !{i64 6988}
!314 = !{i64 6991}
!315 = !{i64 6966}
!316 = !{i64 6976}
!317 = !{i64 6979}
!318 = !{i64 6984}
!319 = !{i64 6993}
!320 = !{i64 6994}
!321 = !{i64 7000}
!322 = !{i64 7008}
!323 = !{i64 7012}
!324 = !{i64 7014}
!325 = !{i64 7016}
!326 = !{i64 7022}
!327 = !{i64 7024}
!328 = !{i64 7027}
!329 = !{i64 7030}
!330 = !{i64 7033}
!331 = !{i64 7045}
!332 = !{i64 7060}
!333 = !{i64 7062}
!334 = !{i64 7064}
!335 = !{i64 7067}
!336 = !{i64 7074}
!337 = !{i64 7076}
!338 = !{i64 7083}
!339 = !{i64 7086}
!340 = !{i64 7103}
!341 = !{i64 7135}
!342 = !{i64 7250}
!343 = !{i64 7286}
!344 = !{i64 7296}
!345 = !{i64 7300}
!346 = !{i64 7302}
!347 = !{i64 7312}
!348 = !{i64 7315}
!349 = !{i64 7318}
!350 = !{i64 7323}
!351 = !{i64 7328}
!352 = !{i64 7330}
!353 = !{i64 7332}
!354 = !{i64 7334}
!355 = !{i64 7344}
!356 = !{i64 7346}
!357 = !{i64 7360}
!358 = !{i64 7369}
!359 = !{i64 7371}
!360 = !{i64 7393}
!361 = !{i64 7376}
!362 = !{i64 7379}
!363 = !{i64 7382}
!364 = !{i64 7385}
!365 = !{i64 7388}
!366 = !{i64 7398}
!367 = !{i64 7408}
!368 = !{i64 7434}
!369 = !{i64 7414}
!370 = !{i64 7424}
!371 = !{i64 7427}
!372 = !{i64 7430}
!373 = !{i64 7436}
!374 = !{i64 7438}
!375 = !{i64 7440}
!376 = !{i64 7444}
!377 = !{i64 7449}
!378 = !{i64 7456}
!379 = !{i64 7459}
!380 = !{i64 7462}
!381 = !{i64 7465}
!382 = !{i64 7467}
!383 = !{i64 7472}
!384 = !{i64 7476}
!385 = !{i64 7481}
!386 = !{i64 7483}
!387 = !{i64 7485}
!388 = !{i64 7489}
!389 = !{i64 7491}
!390 = !{i64 7494}
!391 = !{i64 7497}
!392 = !{i64 7501}
!393 = !{i64 7507}
!394 = !{i64 7510}
!395 = !{i64 7512}
!396 = !{i64 7516}
!397 = !{i64 7520}
!398 = !{i64 7523}
!399 = !{i64 7528}
!400 = !{i64 7530}
!401 = !{i64 7533}
!402 = !{i64 7535}
!403 = !{i64 7539}
!404 = !{i64 7542}
!405 = !{i64 7546}
!406 = !{i64 7549}
!407 = !{i64 7561}
!408 = !{i64 7586}
!409 = !{i64 7602}
!410 = !{i64 7630}
!411 = !{i64 7633}
!412 = !{i64 7649}
!413 = !{i64 7572}
!414 = !{i64 7651}
!415 = !{i64 7661}
!416 = !{i64 7678}
!417 = !{i64 7689}
!418 = !{i64 7690}
!419 = !{i64 7695}
!420 = !{i64 7700}
!421 = !{i64 7703}
!422 = !{i64 7712}
!423 = !{i64 7726}
!424 = !{i64 7728}
!425 = !{i64 7730}
!426 = !{i64 7742}
!427 = !{i64 7747}
!428 = !{i64 7754}
!429 = !{i64 7760}
!430 = !{i64 7763}
!431 = !{i64 7766}
!432 = !{i64 7781}
!433 = !{i64 7824}
!434 = !{i64 7840}
!435 = !{i64 7856}
!436 = !{i64 7866}
!437 = !{i64 7883}
!438 = !{i64 7887}
!439 = !{i64 7892}
!440 = !{i64 7919}
!441 = !{i64 7923}
!442 = !{i64 7926}
!443 = !{i64 7902}
!444 = !{i64 7904}
!445 = !{i64 7907}
!446 = !{i64 7913}
!447 = !{i64 7949}
!448 = !{i64 7969}
!449 = !{i64 7989}
!450 = !{i64 8016}
!451 = !{i64 8036}
!452 = !{i64 8056}
!453 = !{i64 8061}
!454 = !{i64 8080}
!455 = !{i64 8135}
!456 = !{i64 8140}
!457 = !{i64 8150}
!458 = !{i64 8167}
!459 = !{i64 8171}
!460 = !{i64 8195}
!461 = !{i64 8208}
!462 = !{i64 8211}
!463 = !{i64 8214}
!464 = !{i64 8217}
!465 = !{i64 8220}
!466 = !{i64 8226}
!467 = !{i64 8245}
!468 = !{i64 8260}
!469 = !{i64 8272}
!470 = !{i64 8275}
!471 = !{i64 8278}
!472 = !{i64 8302}
!473 = !{i64 8333}
!474 = !{i64 8357}
!475 = !{i64 8381}
!476 = !{i64 8405}
!477 = !{i64 8425}
!478 = !{i64 8445}
!479 = !{i64 8458}
!480 = !{i64 8480}
!481 = !{i64 8500}
!482 = !{i64 8514}
!483 = !{i64 8512}
!484 = !{i64 8518}
!485 = !{i64 8521}
!486 = !{i64 8524}
!487 = !{i64 8540}
!488 = !{i64 8550}
!489 = !{i64 8559}
!490 = !{i64 8566}
!491 = !{i64 8567}
!492 = !{i64 8575}
!493 = !{i64 8580}
!494 = !{i64 8585}
!495 = !{i64 8592}
!496 = !{i64 8611}
!497 = !{i64 8620}
!498 = !{i64 8622}
!499 = !{i64 8628}
!500 = !{i64 8630}
!501 = !{i64 8637}
!502 = !{i64 8643}
!503 = !{i64 8649}
!504 = !{i64 8675}
!505 = !{i64 8692}
!506 = !{i64 8697}
!507 = !{i64 8704}
!508 = !{i64 8708}
!509 = !{i64 8710}
!510 = !{i64 8715}
!511 = !{i64 8717}
!512 = !{i64 8720}
!513 = !{i64 8733}
!514 = !{i64 8774}
!515 = !{i64 8790}
!516 = !{i64 8902}
!517 = !{i64 8905}
!518 = !{i64 8921}
!519 = !{i64 8756}
!520 = !{i64 8923}
!521 = !{i64 8931}
!522 = !{i64 8950}
!523 = !{i64 8961}
!524 = !{i64 8962}
!525 = !{i64 8967}
!526 = !{i64 8980}
!527 = !{i64 8991}
!528 = !{i64 9016}
!529 = !{i64 9024}
!530 = !{i64 9028}
!531 = !{i64 9031}
!532 = !{i64 9033}
!533 = !{i64 9035}
!534 = !{i64 9037}
!535 = !{i64 9039}
!536 = !{i64 9042}
!537 = !{i64 9044}
!538 = !{i64 9047}
!539 = !{i64 9051}
!540 = !{i64 9054}
!541 = !{i64 9057}
!542 = !{i64 9061}
!543 = !{i64 9072}
!544 = !{i64 9075}
!545 = !{i64 9077}
!546 = !{i64 9081}
!547 = !{i64 9084}
!548 = !{i64 9093}
!549 = !{i64 9122}
!550 = !{i64 9125}
!551 = !{i64 9128}
!552 = !{i64 9144}
!553 = !{i64 9165}
!554 = !{i64 9205}
!555 = !{i64 9208}
!556 = !{i64 9224}
!557 = !{i64 9140}
!558 = !{i64 9229}
!559 = !{i64 9237}
!560 = !{i64 9262}
!561 = !{i64 9273}
!562 = !{i64 9274}
!563 = !{i64 9279}
!564 = !{i64 9280}
!565 = !{i64 9288}
!566 = !{i64 9352}
!567 = !{i64 9357}
!568 = !{i64 9374}
!569 = !{i64 9383}
!570 = !{i64 9447}
!571 = !{i64 9452}
!572 = !{i64 9460}
!573 = !{i64 9463}
!574 = !{i64 9476}
!575 = !{i64 9479}
!576 = !{i64 9492}
!577 = !{i64 9496}
!578 = !{i64 9498}
!579 = !{i64 9502}
!580 = !{i64 9504}
!581 = !{i64 9506}
!582 = !{i64 9509}
!583 = !{i64 9511}
!584 = !{i64 9513}
!585 = !{i64 9543}
!586 = !{i64 9559}
!587 = !{i64 9569}
!588 = !{i64 9582}
!589 = !{i64 9586}
!590 = !{i64 9596}
!591 = !{i64 9616}
!592 = !{i64 9620}
!593 = !{i64 9640}
!594 = !{i64 9660}
!595 = !{i64 9675}
!596 = !{i64 9692}
!597 = !{i64 9696}
!598 = !{i64 9720}
!599 = !{i64 9744}
!600 = !{i64 9768}
!601 = !{i64 9791}
!602 = !{i64 9810}
!603 = !{i64 9827}
!604 = !{i64 9831}
!605 = !{i64 9855}
!606 = !{i64 9879}
!607 = !{i64 9903}
!608 = !{i64 9913}
!609 = !{i64 9922}
!610 = !{i64 9929}
!611 = !{i64 9930}
!612 = !{i64 9948}
