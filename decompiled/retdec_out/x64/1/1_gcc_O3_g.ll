source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@jump_buffer = global i64 0
@global_var_33b8 = constant [26 x i8] c"CF-L1-02 (single_if): %d\0A\00"
@global_var_3030 = constant [31 x i8] c"CF-L1-01 (sequential_ops): %d\0A\00"
@global_var_33d2 = constant [24 x i8] c"CF-L1-03 (if_else): %d\0A\00"
@global_var_33ea = constant [28 x i8] c"CF-L1-04 (nested_if_2): %d\0A\00"
@global_var_3494 = constant [27 x i8] c"CF-L1-16 (loop_break): %d\0A\00"
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
@global_var_34cd = constant [29 x i8] c"CF-L1-18 (goto_forward): %d\0A\00"
@global_var_34af = constant [30 x i8] c"CF-L1-17 (loop_continue): %d\0A\00"
@global_var_3508 = constant [27 x i8] c"CF-L1-20 (ternary_op): %d\0A\00"
@global_var_34ea = constant [30 x i8] c"CF-L1-19 (goto_backward): %d\0A\00"
@global_var_3620 = local_unnamed_addr constant i64 -27870042790192
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
@global_var_3650 = external local_unnamed_addr constant i128
@global_var_3660 = external local_unnamed_addr constant i128
@global_var_3670 = external local_unnamed_addr constant i128
@global_var_3680 = external local_unnamed_addr constant i128
@1 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\9F\BA\E7\A1\80\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_3008 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @1, i64 0, i64 0)
@global_var_3e9 = global i32 0
@2 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\AB\98\E7\BA\A7\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_3118 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @2, i64 0, i64 0)
@global_var_3690 = external local_unnamed_addr constant i128
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

define i64 @op_add(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1240:
  %0 = add i64 %arg2, %arg1, !insn.addr !42
  %1 = and i64 %0, 4294967295, !insn.addr !42
  ret i64 %1, !insn.addr !43
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

define i64 @computed_goto.constprop.0() local_unnamed_addr {
dec_label_pc_1370:
  ret i64 20, !insn.addr !88
}

define i64 @non_local_jump.constprop.0() local_unnamed_addr {
dec_label_pc_1380:
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @jump_buffer to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !89
  %1 = icmp eq i32 %0, 0, !insn.addr !90
  %2 = select i1 %1, i64 10, i64 4294967295, !insn.addr !91
  ret i64 %2, !insn.addr !92
}

define i64 @sequential_ops(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_13b0:
  %0 = add i64 %arg2, %arg1, !insn.addr !93
  %1 = mul i64 %0, 2, !insn.addr !94
  %2 = sub i64 %1, %arg3, !insn.addr !95
  %3 = and i64 %2, 4294967295, !insn.addr !95
  ret i64 %3, !insn.addr !96
}

define i64 @single_if(i64 %arg1) local_unnamed_addr {
dec_label_pc_13c0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !97
  %1 = icmp sgt i32 %0, 0
  %2 = zext i1 %1 to i64, !insn.addr !98
  %3 = shl i64 %arg1, %2, !insn.addr !99
  %4 = and i64 %3, 4294967295, !insn.addr !99
  ret i64 %4, !insn.addr !100
}

define i64 @if_else(i64 %arg1) local_unnamed_addr {
dec_label_pc_13d0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !101
  %1 = icmp eq i32 %0, 0, !insn.addr !101
  %2 = icmp slt i32 %0, 0, !insn.addr !101
  %3 = icmp eq i1 %2, false, !insn.addr !102
  %4 = icmp eq i1 %1, false, !insn.addr !102
  %5 = icmp eq i1 %3, %4, !insn.addr !102
  %6 = zext i1 %5 to i64, !insn.addr !102
  ret i64 %6, !insn.addr !103

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
}

define i64 @nested_if_2(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_13e0:
  %rax.0.reg2mem = alloca i64, !insn.addr !104
  %0 = trunc i64 %arg1 to i32, !insn.addr !105
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !106
  br i1 %1, label %dec_label_pc_13f2, label %dec_label_pc_13ea, !insn.addr !106

dec_label_pc_13ea:                                ; preds = %dec_label_pc_13e0
  %2 = trunc i64 %arg2 to i32, !insn.addr !107
  %3 = icmp slt i32 %2, 1
  %4 = select i1 %3, i64 0, i64 %arg2, !insn.addr !108
  %.v = add i64 %4, %arg1
  %5 = and i64 %.v, 4294967295, !insn.addr !109
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !109
  br label %dec_label_pc_13f2, !insn.addr !109

dec_label_pc_13f2:                                ; preds = %dec_label_pc_13ea, %dec_label_pc_13e0
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !110

; uselistorder directives
  uselistorder i64 %arg2, { 1, 0 }
}

define i64 @nested_if_deep(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1400:
  %rax.0.reg2mem = alloca i64, !insn.addr !111
  %0 = trunc i64 %arg1 to i32, !insn.addr !112
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !113
  br i1 %1, label %dec_label_pc_1435, label %dec_label_pc_140a, !insn.addr !113

dec_label_pc_140a:                                ; preds = %dec_label_pc_1400
  %2 = trunc i64 %arg2 to i32, !insn.addr !114
  %3 = icmp slt i32 %2, 1
  store i64 1, i64* %rax.0.reg2mem, !insn.addr !115
  br i1 %3, label %dec_label_pc_1435, label %dec_label_pc_1413, !insn.addr !115

dec_label_pc_1413:                                ; preds = %dec_label_pc_140a
  %4 = trunc i64 %arg3 to i32, !insn.addr !116
  %5 = icmp slt i32 %4, 1
  store i64 2, i64* %rax.0.reg2mem, !insn.addr !117
  br i1 %5, label %dec_label_pc_1435, label %dec_label_pc_1417, !insn.addr !117

dec_label_pc_1417:                                ; preds = %dec_label_pc_1413
  %6 = trunc i64 %arg4 to i32, !insn.addr !118
  %7 = icmp slt i32 %6, 1
  store i64 3, i64* %rax.0.reg2mem, !insn.addr !119
  br i1 %7, label %dec_label_pc_1435, label %dec_label_pc_141b, !insn.addr !119

dec_label_pc_141b:                                ; preds = %dec_label_pc_1417
  %8 = trunc i64 %arg5 to i32, !insn.addr !120
  %9 = icmp eq i32 %8, 0, !insn.addr !120
  %10 = icmp slt i32 %8, 0, !insn.addr !120
  %11 = icmp eq i1 %10, false, !insn.addr !121
  %12 = icmp eq i1 %9, false, !insn.addr !121
  %13 = icmp eq i1 %11, %12, !insn.addr !121
  %14 = select i1 %13, i64 5, i64 4, !insn.addr !122
  ret i64 %14, !insn.addr !123

dec_label_pc_1435:                                ; preds = %dec_label_pc_1413, %dec_label_pc_1417, %dec_label_pc_140a, %dec_label_pc_1400
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !124

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1, 3, 4 }
  uselistorder label %dec_label_pc_1435, { 1, 0, 2, 3 }
}

define i64 @if_elseif_chain(i64 %arg1) local_unnamed_addr {
dec_label_pc_1450:
  %rax.0.reg2mem = alloca i64, !insn.addr !125
  %0 = trunc i64 %arg1 to i32, !insn.addr !126
  store i64 10, i64* %rax.0.reg2mem
  switch i32 %0, label %dec_label_pc_1462 [
    i32 0, label %dec_label_pc_147d
    i32 1, label %dec_label_pc_147d.fold.split
  ]

dec_label_pc_1462:                                ; preds = %dec_label_pc_1450
  %1 = icmp eq i32 %0, 2, !insn.addr !127
  %2 = icmp eq i1 %1, false, !insn.addr !128
  %3 = select i1 %2, i64 4294967295, i64 30, !insn.addr !128
  ret i64 %3, !insn.addr !129

dec_label_pc_147d.fold.split:                     ; preds = %dec_label_pc_1450
  store i64 20, i64* %rax.0.reg2mem
  br label %dec_label_pc_147d

dec_label_pc_147d:                                ; preds = %dec_label_pc_1450, %dec_label_pc_147d.fold.split
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !130

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder label %dec_label_pc_147d, { 1, 0 }
}

define i64 @if_elseif_long(i64 %arg1) local_unnamed_addr {
dec_label_pc_1480:
  %rax.0.reg2mem = alloca i64, !insn.addr !131
  %0 = trunc i64 %arg1 to i32, !insn.addr !132
  %1 = icmp ult i32 %0, 5
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !133
  br i1 %1, label %dec_label_pc_148e, label %dec_label_pc_1494, !insn.addr !133

dec_label_pc_148e:                                ; preds = %dec_label_pc_1480
  %2 = mul i64 %arg1, 4294967296, !insn.addr !134
  %sext = add i64 %2, 4294967296
  %3 = udiv i64 %sext, 4294967296
  %4 = mul nuw nsw i64 %3, 100, !insn.addr !135
  %5 = and i64 %4, 4294967292, !insn.addr !135
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !135
  br label %dec_label_pc_1494, !insn.addr !135

dec_label_pc_1494:                                ; preds = %dec_label_pc_1480, %dec_label_pc_148e
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !136

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1494, { 1, 0 }
}

define i64 @switch_small(i64 %arg1) local_unnamed_addr {
dec_label_pc_14a0:
  %rax.0.reg2mem = alloca i64, !insn.addr !137
  %0 = trunc i64 %arg1 to i32, !insn.addr !138
  %1 = icmp ult i32 %0, 4
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !139
  br i1 %1, label %dec_label_pc_14ae, label %dec_label_pc_14ba, !insn.addr !139

dec_label_pc_14ae:                                ; preds = %dec_label_pc_14a0
  %2 = mul i64 %arg1, 4, !insn.addr !140
  %3 = and i64 %2, 17179869180, !insn.addr !141
  %4 = add i64 %3, ptrtoint (i32** @global_var_3640 to i64), !insn.addr !141
  %5 = inttoptr i64 %4 to i32*, !insn.addr !141
  %6 = load i32, i32* %5, align 4, !insn.addr !141
  %7 = zext i32 %6 to i64, !insn.addr !141
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !141
  br label %dec_label_pc_14ba, !insn.addr !141

dec_label_pc_14ba:                                ; preds = %dec_label_pc_14a0, %dec_label_pc_14ae
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !142

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_14ba, { 1, 0 }
}

define i64 @switch_large(i64 %arg1) local_unnamed_addr {
dec_label_pc_14c0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !143
  %1 = icmp ult i32 %0, 10
  %2 = mul i64 %arg1, 10
  %3 = and i64 %2, 4294967294
  %rax.0 = select i1 %1, i64 %3, i64 4294967295
  ret i64 %rax.0, !insn.addr !144
}

define i64 @switch_default(i64 %arg1) local_unnamed_addr {
dec_label_pc_14e0:
  %0 = trunc i64 %arg1 to i32
  %1 = add i32 %0, -1, !insn.addr !145
  %2 = icmp ult i32 %1, 3
  %3 = mul i64 %arg1, 100
  %4 = and i64 %3, 4294967292
  %rax.0 = select i1 %2, i64 %4, i64 0
  ret i64 %rax.0, !insn.addr !146
}

define i64 @switch_fallthrough(i64 %arg1) local_unnamed_addr {
dec_label_pc_1500:
  %0 = trunc i64 %arg1 to i32, !insn.addr !147
  switch i32 %0, label %dec_label_pc_150e [
    i32 2, label %dec_label_pc_1530
    i32 3, label %dec_label_pc_1520
  ]

dec_label_pc_150e:                                ; preds = %dec_label_pc_1500
  %1 = icmp eq i32 %0, 1, !insn.addr !148
  %2 = zext i1 %1 to i64, !insn.addr !149
  %not. = icmp ne i1 %1, true
  %3 = sext i1 %not. to i64, !insn.addr !150
  %4 = add nsw i64 %3, %2, !insn.addr !150
  %5 = and i64 %4, 4294967295, !insn.addr !150
  ret i64 %5, !insn.addr !151

dec_label_pc_1520:                                ; preds = %dec_label_pc_1500
  %6 = mul i64 %arg1, 2
  %7 = add i64 %arg1, 12, !insn.addr !152
  %8 = add i64 %7, %6, !insn.addr !153
  %9 = and i64 %8, 4294967295, !insn.addr !153
  ret i64 %9, !insn.addr !154

dec_label_pc_1530:                                ; preds = %dec_label_pc_1500
  %10 = mul i64 %arg1, 3, !insn.addr !155
  %11 = and i64 %10, 4294967295, !insn.addr !155
  ret i64 %11, !insn.addr !156

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder i64 %arg1, { 2, 1, 0, 3 }
}

define i64 @loop_for_fixed(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1540:
  %0 = alloca i128
  %rax.2.reg2mem = alloca i64, !insn.addr !157
  %rcx.0.reg2mem = alloca i64, !insn.addr !157
  %rax.1.reg2mem = alloca i64, !insn.addr !157
  %rax.0.reg2mem = alloca i64, !insn.addr !157
  %xmm1.0.reg2mem = alloca i128, !insn.addr !157
  %xmm0.0.reg2mem = alloca i128, !insn.addr !157
  %1 = load i128, i128* %0
  %2 = trunc i64 %arg1 to i32, !insn.addr !158
  %3 = icmp slt i32 %2, 1
  store i64 0, i64* %rax.2.reg2mem, !insn.addr !159
  br i1 %3, label %dec_label_pc_1612, label %dec_label_pc_154e, !insn.addr !159

dec_label_pc_154e:                                ; preds = %dec_label_pc_1540
  %4 = add i32 %2, -1, !insn.addr !160
  %5 = icmp ult i32 %4, 10
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !161
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !161
  br i1 %5, label %dec_label_pc_15b3, label %dec_label_pc_155a, !insn.addr !161

dec_label_pc_155a:                                ; preds = %dec_label_pc_154e
  %6 = load i128, i128* @global_var_3650, align 8, !insn.addr !162
  %7 = call i128 @__asm_movdqa(i128 %6), !insn.addr !162
  %8 = call i128 @__asm_pxor(i128 %1, i128 %1), !insn.addr !163
  %9 = load i128, i128* @global_var_3660, align 8, !insn.addr !164
  %10 = call i128 @__asm_movdqa(i128 %9), !insn.addr !164
  %11 = udiv i64 %arg1, 4, !insn.addr !165
  %12 = trunc i64 %11 to i32
  %13 = urem i32 %12, 1073741824
  store i128 %8, i128* %xmm0.0.reg2mem, !insn.addr !166
  store i128 %7, i128* %xmm1.0.reg2mem, !insn.addr !166
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !166
  br label %dec_label_pc_1578, !insn.addr !166

dec_label_pc_1578:                                ; preds = %dec_label_pc_1578, %dec_label_pc_155a
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %xmm1.0.reload = load i128, i128* %xmm1.0.reg2mem
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %14 = call i128 @__asm_movdqa(i128 %xmm1.0.reload), !insn.addr !167
  %15 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !168
  %16 = and i64 %15, 4294967295, !insn.addr !168
  %17 = call i128 @__asm_paddd(i128 %xmm1.0.reload, i128 %10), !insn.addr !169
  %18 = call i128 @__asm_paddd(i128 %xmm0.0.reload, i128 %14), !insn.addr !170
  %19 = trunc i64 %15 to i32, !insn.addr !171
  %20 = icmp eq i32 %13, %19, !insn.addr !171
  %21 = icmp eq i1 %20, false, !insn.addr !172
  store i128 %18, i128* %xmm0.0.reg2mem, !insn.addr !172
  store i128 %17, i128* %xmm1.0.reg2mem, !insn.addr !172
  store i64 %16, i64* %rax.0.reg2mem, !insn.addr !172
  br i1 %21, label %dec_label_pc_1578, label %dec_label_pc_158b, !insn.addr !172

dec_label_pc_158b:                                ; preds = %dec_label_pc_1578
  %22 = call i128 @__asm_movdqa(i128 %18), !insn.addr !173
  %23 = call i128 @__asm_psrldq(i128 %22, i8 8), !insn.addr !174
  %24 = and i64 %arg1, 4294967292, !insn.addr !175
  %25 = call i128 @__asm_paddd(i128 %18, i128 %23), !insn.addr !176
  %26 = call i128 @__asm_movdqa(i128 %25), !insn.addr !177
  %27 = call i128 @__asm_psrldq(i128 %26, i8 4), !insn.addr !178
  %28 = call i128 @__asm_paddd(i128 %25, i128 %27), !insn.addr !179
  %29 = call i32 @__asm_movd(i128 %28), !insn.addr !180
  %30 = sext i32 %29 to i64, !insn.addr !180
  %31 = urem i64 %arg1, 4
  %32 = icmp eq i64 %31, 0, !insn.addr !181
  store i64 %30, i64* %rax.1.reg2mem, !insn.addr !182
  store i64 %24, i64* %rcx.0.reg2mem, !insn.addr !182
  store i64 %30, i64* %rax.2.reg2mem, !insn.addr !182
  br i1 %32, label %dec_label_pc_1612, label %dec_label_pc_15b3, !insn.addr !182

dec_label_pc_15b3:                                ; preds = %dec_label_pc_154e, %dec_label_pc_158b
  %33 = and i64 %arg1, 4294967295, !insn.addr !183
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %34 = or i64 %rcx.0.reload, 1, !insn.addr !184
  %35 = add nsw i64 %rcx.0.reload, %rax.1.reload, !insn.addr !185
  %36 = and i64 %35, 4294967295, !insn.addr !185
  %37 = icmp ugt i64 %33, %34, !insn.addr !186
  store i64 %36, i64* %rax.2.reg2mem, !insn.addr !186
  br i1 %37, label %dec_label_pc_15bc, label %dec_label_pc_1612, !insn.addr !186

dec_label_pc_15bc:                                ; preds = %dec_label_pc_15b3
  %38 = add nsw i64 %35, %34, !insn.addr !187
  %39 = and i64 %38, 4294967295, !insn.addr !187
  %40 = or i64 %rcx.0.reload, 2, !insn.addr !188
  %41 = icmp ugt i64 %33, %40, !insn.addr !189
  store i64 %39, i64* %rax.2.reg2mem, !insn.addr !189
  br i1 %41, label %dec_label_pc_15c5, label %dec_label_pc_1612, !insn.addr !189

dec_label_pc_15c5:                                ; preds = %dec_label_pc_15bc
  %42 = add nsw i64 %38, %40, !insn.addr !190
  %43 = and i64 %42, 4294967295, !insn.addr !190
  %44 = or i64 %rcx.0.reload, 3, !insn.addr !191
  %45 = icmp ugt i64 %33, %44, !insn.addr !192
  store i64 %43, i64* %rax.2.reg2mem, !insn.addr !192
  br i1 %45, label %dec_label_pc_15ce, label %dec_label_pc_1612, !insn.addr !192

dec_label_pc_15ce:                                ; preds = %dec_label_pc_15c5
  %46 = add nsw i64 %42, %44, !insn.addr !193
  %47 = and i64 %46, 4294967295, !insn.addr !193
  %48 = add nuw nsw i64 %rcx.0.reload, 4, !insn.addr !194
  %49 = and i64 %48, 4294967292, !insn.addr !194
  %50 = icmp ugt i64 %33, %49, !insn.addr !195
  store i64 %47, i64* %rax.2.reg2mem, !insn.addr !195
  br i1 %50, label %dec_label_pc_15d7, label %dec_label_pc_1612, !insn.addr !195

dec_label_pc_15d7:                                ; preds = %dec_label_pc_15ce
  %51 = add nsw i64 %46, %48, !insn.addr !196
  %52 = and i64 %51, 4294967295, !insn.addr !196
  %53 = add nuw nsw i64 %rcx.0.reload, 5, !insn.addr !197
  %54 = and i64 %53, 4294967293, !insn.addr !197
  %55 = icmp ugt i64 %33, %54, !insn.addr !198
  store i64 %52, i64* %rax.2.reg2mem, !insn.addr !198
  br i1 %55, label %dec_label_pc_15e0, label %dec_label_pc_1612, !insn.addr !198

dec_label_pc_15e0:                                ; preds = %dec_label_pc_15d7
  %56 = add i64 %51, %53, !insn.addr !199
  %57 = and i64 %56, 4294967295, !insn.addr !199
  %58 = add nuw nsw i64 %rcx.0.reload, 6, !insn.addr !200
  %59 = and i64 %58, 4294967294, !insn.addr !200
  %60 = icmp ugt i64 %33, %59, !insn.addr !201
  store i64 %57, i64* %rax.2.reg2mem, !insn.addr !201
  br i1 %60, label %dec_label_pc_15e9, label %dec_label_pc_1612, !insn.addr !201

dec_label_pc_15e9:                                ; preds = %dec_label_pc_15e0
  %61 = add i64 %56, %58, !insn.addr !202
  %62 = and i64 %61, 4294967295, !insn.addr !202
  %63 = add nuw nsw i64 %rcx.0.reload, 7, !insn.addr !203
  %64 = and i64 %63, 4294967295, !insn.addr !203
  %65 = icmp ugt i64 %33, %64, !insn.addr !204
  store i64 %62, i64* %rax.2.reg2mem, !insn.addr !204
  br i1 %65, label %dec_label_pc_15f2, label %dec_label_pc_1612, !insn.addr !204

dec_label_pc_15f2:                                ; preds = %dec_label_pc_15e9
  %66 = add i64 %61, %63, !insn.addr !205
  %67 = and i64 %66, 4294967295, !insn.addr !205
  %68 = add nuw nsw i64 %rcx.0.reload, 8, !insn.addr !206
  %69 = and i64 %68, 4294967292, !insn.addr !206
  %70 = icmp ugt i64 %33, %69, !insn.addr !207
  store i64 %67, i64* %rax.2.reg2mem, !insn.addr !207
  br i1 %70, label %dec_label_pc_15fb, label %dec_label_pc_1612, !insn.addr !207

dec_label_pc_15fb:                                ; preds = %dec_label_pc_15f2
  %71 = add i64 %66, %69, !insn.addr !208
  %72 = add nuw nsw i64 %rcx.0.reload, 9, !insn.addr !209
  %73 = trunc i64 %72 to i32, !insn.addr !210
  %74 = sub i32 %2, %73, !insn.addr !210
  %75 = xor i64 %72, %arg1
  %76 = trunc i64 %75 to i32, !insn.addr !210
  %77 = xor i32 %74, %2, !insn.addr !210
  %78 = and i32 %77, %76, !insn.addr !210
  %79 = icmp slt i32 %78, 0, !insn.addr !210
  %80 = icmp eq i32 %74, 0, !insn.addr !210
  %81 = icmp slt i32 %74, 0, !insn.addr !210
  %82 = icmp eq i1 %81, %79, !insn.addr !211
  %83 = icmp eq i1 %80, false, !insn.addr !211
  %84 = icmp eq i1 %82, %83, !insn.addr !211
  %85 = select i1 %84, i64 %72, i64 0, !insn.addr !212
  %.v = add i64 %71, %85
  %86 = and i64 %.v, 4294967295, !insn.addr !211
  ret i64 %86, !insn.addr !213

dec_label_pc_1612:                                ; preds = %dec_label_pc_158b, %dec_label_pc_1540, %dec_label_pc_15f2, %dec_label_pc_15e9, %dec_label_pc_15e0, %dec_label_pc_15d7, %dec_label_pc_15ce, %dec_label_pc_15c5, %dec_label_pc_15bc, %dec_label_pc_15b3
  %rax.2.reload = load i64, i64* %rax.2.reg2mem
  ret i64 %rax.2.reload, !insn.addr !214

; uselistorder directives
  uselistorder i32 %74, { 1, 2, 0 }
  uselistorder i64 %72, { 1, 0, 2 }
  uselistorder i64 %34, { 1, 0 }
  uselistorder i64 %rcx.0.reload, { 5, 4, 3, 2, 1, 0, 8, 7, 9, 6 }
  uselistorder i128 %25, { 1, 0 }
  uselistorder i128 %18, { 2, 1, 0 }
  uselistorder i128* %xmm0.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm1.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rcx.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.2.reg2mem, { 0, 10, 9, 8, 7, 6, 5, 4, 3, 1, 2 }
  uselistorder i64 %arg1, { 2, 5, 0, 3, 1, 4 }
  uselistorder label %dec_label_pc_1612, { 2, 3, 4, 5, 6, 7, 8, 9, 0, 1 }
  uselistorder label %dec_label_pc_15b3, { 1, 0 }
}

define i64 @loop_while(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1620:
  %merge.reg2mem = alloca i64, !insn.addr !215
  %r8.0.reg2mem = alloca i64, !insn.addr !215
  %rdi.0.reg2mem = alloca i64, !insn.addr !215
  %0 = trunc i64 %arg1 to i32, !insn.addr !216
  %1 = icmp eq i32 %0, 0, !insn.addr !216
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !217
  store i64 0, i64* %r8.0.reg2mem, !insn.addr !217
  store i64 1, i64* %merge.reg2mem, !insn.addr !217
  br i1 %1, label %dec_label_pc_164d, label %dec_label_pc_1630, !insn.addr !217

dec_label_pc_1630:                                ; preds = %dec_label_pc_1620, %dec_label_pc_1630
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %sext = mul i64 %rdi.0.reload, 4294967296
  %2 = ashr exact i64 %sext, 32, !insn.addr !218
  %3 = trunc i64 %rdi.0.reload to i32, !insn.addr !219
  %4 = add nuw nsw i64 %r8.0.reload, 1, !insn.addr !220
  %5 = and i64 %4, 4294967295, !insn.addr !220
  %narrow = mul nsw i64 %2, 1717986919
  %6 = ashr i32 %3, 31, !insn.addr !221
  %7 = ashr i64 %narrow, 34, !insn.addr !222
  %8 = trunc i64 %7 to i32, !insn.addr !223
  %9 = sub i32 %8, %6, !insn.addr !223
  %10 = icmp eq i32 %9, 0, !insn.addr !223
  %11 = zext i32 %9 to i64, !insn.addr !224
  %12 = icmp eq i1 %10, false, !insn.addr !225
  store i64 %11, i64* %rdi.0.reg2mem, !insn.addr !225
  store i64 %5, i64* %r8.0.reg2mem, !insn.addr !225
  store i64 %5, i64* %merge.reg2mem, !insn.addr !225
  br i1 %12, label %dec_label_pc_1630, label %dec_label_pc_164d, !insn.addr !225

dec_label_pc_164d:                                ; preds = %dec_label_pc_1630, %dec_label_pc_1620
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !226

; uselistorder directives
  uselistorder i64* %rdi.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r8.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1630, { 1, 0 }
}

define i64 @loop_dowhile(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1670:
  %r8.0.reg2mem = alloca i64, !insn.addr !227
  %rdi.0.reg2mem = alloca i64, !insn.addr !227
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !228
  store i64 0, i64* %r8.0.reg2mem, !insn.addr !228
  br label %dec_label_pc_1680, !insn.addr !228

dec_label_pc_1680:                                ; preds = %dec_label_pc_1680, %dec_label_pc_1670
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %sext = mul i64 %rdi.0.reload, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !229
  %1 = trunc i64 %rdi.0.reload to i32, !insn.addr !230
  %2 = add nuw nsw i64 %r8.0.reload, 1, !insn.addr !231
  %3 = and i64 %2, 4294967295, !insn.addr !231
  %narrow = mul nsw i64 %0, 1717986919
  %4 = ashr i32 %1, 31, !insn.addr !232
  %5 = ashr i64 %narrow, 34, !insn.addr !233
  %6 = trunc i64 %5 to i32, !insn.addr !234
  %7 = sub i32 %6, %4, !insn.addr !234
  %8 = icmp eq i32 %7, 0, !insn.addr !234
  %9 = zext i32 %7 to i64, !insn.addr !235
  %10 = icmp eq i1 %8, false, !insn.addr !236
  store i64 %9, i64* %rdi.0.reg2mem, !insn.addr !236
  store i64 %3, i64* %r8.0.reg2mem, !insn.addr !236
  br i1 %10, label %dec_label_pc_1680, label %dec_label_pc_169d, !insn.addr !236

dec_label_pc_169d:                                ; preds = %dec_label_pc_1680
  ret i64 %3, !insn.addr !237

; uselistorder directives
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64* %rdi.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r8.0.reg2mem, { 1, 0, 2 }
}

define i64 @loop_nested(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_16b0:
  %merge.reg2mem = alloca i64, !insn.addr !238
  %rdx.0.reg2mem = alloca i64, !insn.addr !238
  %rax.0.reg2mem = alloca i64, !insn.addr !238
  %0 = trunc i64 %arg1 to i32, !insn.addr !239
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %merge.reg2mem, !insn.addr !240
  br i1 %1, label %dec_label_pc_16cf, label %dec_label_pc_16c0.preheader, !insn.addr !240

dec_label_pc_16c0.preheader:                      ; preds = %dec_label_pc_16b0
  %2 = trunc i64 %arg2 to i32, !insn.addr !241
  %3 = icmp eq i32 %2, 0, !insn.addr !241
  %4 = icmp slt i32 %2, 0, !insn.addr !241
  %5 = icmp eq i1 %4, false, !insn.addr !242
  %6 = icmp eq i1 %3, false, !insn.addr !242
  %7 = icmp eq i1 %5, %6, !insn.addr !242
  %8 = select i1 %7, i64 %arg2, i64 0, !insn.addr !243
  store i64 0, i64* %rax.0.reg2mem
  store i64 0, i64* %rdx.0.reg2mem
  br label %dec_label_pc_16c0

dec_label_pc_16c0:                                ; preds = %dec_label_pc_16c0.preheader, %dec_label_pc_16c0
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %.v = add i64 %rax.0.reload, %8
  %9 = and i64 %.v, 4294967295, !insn.addr !242
  %10 = add nuw nsw i64 %rdx.0.reload, 1, !insn.addr !244
  %11 = and i64 %10, 4294967295, !insn.addr !244
  %12 = trunc i64 %10 to i32, !insn.addr !245
  %13 = icmp eq i32 %0, %12, !insn.addr !245
  %14 = icmp eq i1 %13, false, !insn.addr !246
  store i64 %9, i64* %rax.0.reg2mem, !insn.addr !246
  store i64 %11, i64* %rdx.0.reg2mem, !insn.addr !246
  store i64 %9, i64* %merge.reg2mem, !insn.addr !246
  br i1 %14, label %dec_label_pc_16c0, label %dec_label_pc_16cf, !insn.addr !246

dec_label_pc_16cf:                                ; preds = %dec_label_pc_16c0, %dec_label_pc_16b0
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !247

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64 %arg2, { 1, 0 }
  uselistorder label %dec_label_pc_16c0, { 1, 0 }
}

define i64 @loop_break(i64 %arg1) local_unnamed_addr {
dec_label_pc_16e0:
  %merge.reg2mem = alloca i64, !insn.addr !248
  %0 = trunc i64 %arg1 to i32, !insn.addr !249
  store i64 0, i64* %merge.reg2mem
  switch i32 %0, label %dec_label_pc_16f8 [
    i32 10, label %dec_label_pc_1708
    i32 20, label %dec_label_pc_1708.fold.split
    i32 30, label %dec_label_pc_1708.fold.split1
    i32 40, label %dec_label_pc_1708.fold.split2
  ]

dec_label_pc_16f8:                                ; preds = %dec_label_pc_16e0
  %1 = icmp eq i32 %0, 50, !insn.addr !250
  %2 = zext i1 %1 to i64, !insn.addr !251
  %3 = mul i64 %2, 4, !insn.addr !252
  %not. = icmp ne i1 %1, true
  %4 = sext i1 %not. to i64, !insn.addr !252
  %5 = add nsw i64 %3, %4, !insn.addr !252
  %6 = and i64 %5, 4294967295, !insn.addr !252
  ret i64 %6, !insn.addr !253

dec_label_pc_1708.fold.split:                     ; preds = %dec_label_pc_16e0
  store i64 1, i64* %merge.reg2mem
  br label %dec_label_pc_1708

dec_label_pc_1708.fold.split1:                    ; preds = %dec_label_pc_16e0
  store i64 2, i64* %merge.reg2mem
  br label %dec_label_pc_1708

dec_label_pc_1708.fold.split2:                    ; preds = %dec_label_pc_16e0
  store i64 3, i64* %merge.reg2mem
  br label %dec_label_pc_1708

dec_label_pc_1708:                                ; preds = %dec_label_pc_16e0, %dec_label_pc_1708.fold.split2, %dec_label_pc_1708.fold.split1, %dec_label_pc_1708.fold.split
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !254

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder label %dec_label_pc_1708, { 1, 2, 3, 0 }
}

define i64 @loop_continue(i64 %arg1) local_unnamed_addr {
dec_label_pc_1730:
  %0 = alloca i128
  %rax.2.reg2mem = alloca i64, !insn.addr !255
  %rdx.0.reg2mem = alloca i64, !insn.addr !255
  %rax.1.reg2mem = alloca i64, !insn.addr !255
  %rax.0.reg2mem = alloca i64, !insn.addr !255
  %xmm2.0.reg2mem = alloca i128, !insn.addr !255
  %xmm1.0.reg2mem = alloca i128, !insn.addr !255
  %1 = load i128, i128* %0
  %2 = trunc i64 %arg1 to i32, !insn.addr !256
  %3 = icmp slt i32 %2, 1
  store i64 0, i64* %rax.2.reg2mem, !insn.addr !257
  br i1 %3, label %dec_label_pc_180a, label %dec_label_pc_173c, !insn.addr !257

dec_label_pc_173c:                                ; preds = %dec_label_pc_1730
  %4 = add i32 %2, -1, !insn.addr !258
  %5 = icmp ult i32 %4, 5
  store i64 1, i64* %rax.1.reg2mem, !insn.addr !259
  store i64 1, i64* %rdx.0.reg2mem, !insn.addr !259
  br i1 %5, label %dec_label_pc_17c4, label %dec_label_pc_1748, !insn.addr !259

dec_label_pc_1748:                                ; preds = %dec_label_pc_173c
  %6 = call i128 @__asm_pxor(i128 %1, i128 %1), !insn.addr !260
  %7 = load i128, i128* @global_var_3670, align 8, !insn.addr !261
  %8 = call i128 @__asm_movdqa(i128 %7), !insn.addr !261
  %9 = load i128, i128* @global_var_3660, align 8, !insn.addr !262
  %10 = call i128 @__asm_movdqa(i128 %9), !insn.addr !262
  %11 = load i128, i128* @global_var_3680, align 8, !insn.addr !263
  %12 = call i128 @__asm_movdqa(i128 %11), !insn.addr !263
  %13 = udiv i64 %arg1, 4, !insn.addr !264
  %14 = call i128 @__asm_movdqa(i128 %6), !insn.addr !265
  %15 = trunc i64 %13 to i32
  %16 = urem i32 %15, 1073741824
  store i128 %6, i128* %xmm1.0.reg2mem, !insn.addr !266
  store i128 %8, i128* %xmm2.0.reg2mem, !insn.addr !266
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !266
  br label %dec_label_pc_1770, !insn.addr !266

dec_label_pc_1770:                                ; preds = %dec_label_pc_1770, %dec_label_pc_1748
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %xmm2.0.reload = load i128, i128* %xmm2.0.reg2mem
  %xmm1.0.reload = load i128, i128* %xmm1.0.reg2mem
  %17 = call i128 @__asm_movdqa(i128 %xmm2.0.reload), !insn.addr !267
  %18 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !268
  %19 = and i64 %18, 4294967295, !insn.addr !268
  %20 = call i128 @__asm_paddd(i128 %xmm2.0.reload, i128 %10), !insn.addr !269
  %21 = call i128 @__asm_movdqa(i128 %17), !insn.addr !270
  %22 = call i128 @__asm_pand(i128 %21, i128 %12), !insn.addr !271
  %23 = call i128 @__asm_pcmpeqd(i128 %22, i128 %14), !insn.addr !272
  %24 = call i128 @__asm_pandn(i128 %23, i128 %17), !insn.addr !273
  %25 = call i128 @__asm_paddd(i128 %xmm1.0.reload, i128 %24), !insn.addr !274
  %26 = trunc i64 %18 to i32, !insn.addr !275
  %27 = icmp eq i32 %16, %26, !insn.addr !275
  %28 = icmp eq i1 %27, false, !insn.addr !276
  store i128 %25, i128* %xmm1.0.reg2mem, !insn.addr !276
  store i128 %20, i128* %xmm2.0.reg2mem, !insn.addr !276
  store i64 %19, i64* %rax.0.reg2mem, !insn.addr !276
  br i1 %28, label %dec_label_pc_1770, label %dec_label_pc_1793, !insn.addr !276

dec_label_pc_1793:                                ; preds = %dec_label_pc_1770
  %29 = call i128 @__asm_movdqa(i128 %25), !insn.addr !277
  %30 = call i128 @__asm_psrldq(i128 %29, i8 8), !insn.addr !278
  %31 = and i64 %arg1, 4294967292, !insn.addr !279
  %32 = call i128 @__asm_paddd(i128 %25, i128 %30), !insn.addr !280
  %33 = call i128 @__asm_movdqa(i128 %32), !insn.addr !281
  %34 = call i128 @__asm_psrldq(i128 %33, i8 4), !insn.addr !282
  %35 = call i128 @__asm_paddd(i128 %32, i128 %34), !insn.addr !283
  %36 = call i32 @__asm_movd(i128 %35), !insn.addr !284
  %37 = sext i32 %36 to i64, !insn.addr !284
  %38 = trunc i64 %31 to i32, !insn.addr !285
  %39 = icmp eq i32 %2, %38, !insn.addr !285
  store i64 %37, i64* %rax.2.reg2mem, !insn.addr !286
  br i1 %39, label %dec_label_pc_180a, label %dec_label_pc_17c2, !insn.addr !286

dec_label_pc_17c2:                                ; preds = %dec_label_pc_1793
  %40 = or i64 %31, 1, !insn.addr !287
  %41 = add nsw i64 %40, %37, !insn.addr !288
  %42 = and i64 %41, 4294967295, !insn.addr !288
  store i64 %42, i64* %rax.1.reg2mem, !insn.addr !288
  store i64 %40, i64* %rdx.0.reg2mem, !insn.addr !288
  br label %dec_label_pc_17c4, !insn.addr !288

dec_label_pc_17c4:                                ; preds = %dec_label_pc_173c, %dec_label_pc_17c2
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %43 = add nsw i64 %rdx.0.reload, 1, !insn.addr !289
  %44 = and i64 %43, 4294967294, !insn.addr !289
  %45 = icmp sgt i64 %44, %arg1, !insn.addr !290
  store i64 %rax.1.reload, i64* %rax.2.reg2mem, !insn.addr !290
  br i1 %45, label %dec_label_pc_180a, label %dec_label_pc_17cb, !insn.addr !290

dec_label_pc_17cb:                                ; preds = %dec_label_pc_17c4
  %46 = add nsw i64 %rdx.0.reload, 2, !insn.addr !291
  %47 = and i64 %46, 4294967295, !insn.addr !291
  %48 = icmp sgt i64 %47, %arg1, !insn.addr !292
  store i64 %rax.1.reload, i64* %rax.2.reg2mem, !insn.addr !292
  br i1 %48, label %dec_label_pc_180a, label %dec_label_pc_17db, !insn.addr !292

dec_label_pc_17db:                                ; preds = %dec_label_pc_17cb
  %49 = add nsw i64 %46, %rax.1.reload, !insn.addr !293
  %50 = add nsw i64 %rdx.0.reload, 3, !insn.addr !294
  %51 = and i64 %50, 4294967294, !insn.addr !294
  %52 = and i64 %49, 4294967295, !insn.addr !295
  %53 = icmp sgt i64 %51, %arg1, !insn.addr !296
  store i64 %52, i64* %rax.2.reg2mem, !insn.addr !296
  br i1 %53, label %dec_label_pc_180a, label %dec_label_pc_17eb, !insn.addr !296

dec_label_pc_17eb:                                ; preds = %dec_label_pc_17db
  %54 = add nsw i64 %rdx.0.reload, 4, !insn.addr !297
  %55 = and i64 %54, 4294967295, !insn.addr !297
  %56 = icmp sgt i64 %55, %arg1, !insn.addr !298
  store i64 %52, i64* %rax.2.reg2mem, !insn.addr !298
  br i1 %56, label %dec_label_pc_180a, label %dec_label_pc_17fb, !insn.addr !298

dec_label_pc_17fb:                                ; preds = %dec_label_pc_17eb
  %.v3 = add nsw i64 %49, %54
  %57 = and i64 %.v3, 4294967295, !insn.addr !299
  ret i64 %57, !insn.addr !300

dec_label_pc_180a:                                ; preds = %dec_label_pc_1730, %dec_label_pc_17eb, %dec_label_pc_17db, %dec_label_pc_17cb, %dec_label_pc_17c4, %dec_label_pc_1793
  %rax.2.reload = load i64, i64* %rax.2.reg2mem
  ret i64 %rax.2.reload, !insn.addr !301

; uselistorder directives
  uselistorder i64 %rax.1.reload, { 2, 0, 1 }
  uselistorder i64 %rdx.0.reload, { 3, 2, 1, 0 }
  uselistorder i64 %37, { 1, 0 }
  uselistorder i128 %32, { 1, 0 }
  uselistorder i128 %25, { 2, 1, 0 }
  uselistorder i128 %17, { 1, 0 }
  uselistorder i128* %xmm1.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm2.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.2.reg2mem, { 0, 3, 4, 5, 6, 2, 1 }
  uselistorder i128* @global_var_3660, { 1, 0 }
  uselistorder i64 %arg1, { 1, 2, 3, 5, 4, 0, 6 }
  uselistorder label %dec_label_pc_180a, { 1, 2, 3, 4, 5, 0 }
  uselistorder label %dec_label_pc_17c4, { 1, 0 }
}

define i64 @goto_forward(i64 %arg1) local_unnamed_addr {
dec_label_pc_1820:
  %rdi.0.reg2mem = alloca i64, !insn.addr !302
  %0 = trunc i64 %arg1 to i32, !insn.addr !303
  %1 = icmp slt i32 %0, 1
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !304
  br i1 %1, label %dec_label_pc_182b, label %dec_label_pc_1828, !insn.addr !304

dec_label_pc_1828:                                ; preds = %dec_label_pc_1820
  %sext = mul i64 %arg1, 4294967296
  %2 = ashr exact i64 %sext, 32, !insn.addr !305
  %3 = mul nsw i64 %2, %2, !insn.addr !305
  %4 = and i64 %3, 4294967295, !insn.addr !305
  store i64 %4, i64* %rdi.0.reg2mem, !insn.addr !305
  br label %dec_label_pc_182b, !insn.addr !305

dec_label_pc_182b:                                ; preds = %dec_label_pc_1828, %dec_label_pc_1820
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %5 = mul i64 %rdi.0.reload, 2, !insn.addr !306
  %6 = and i64 %5, 4294967294, !insn.addr !306
  ret i64 %6, !insn.addr !307

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @goto_backward(i64 %arg1) local_unnamed_addr {
dec_label_pc_1830:
  %r8.1.reg2mem = alloca i64, !insn.addr !308
  %r8.0.reg2mem = alloca i64, !insn.addr !308
  %rax.0.reg2mem = alloca i64, !insn.addr !308
  %0 = trunc i64 %arg1 to i32, !insn.addr !309
  %1 = icmp slt i32 %0, 1
  store i64 1, i64* %r8.1.reg2mem, !insn.addr !310
  br i1 %1, label %dec_label_pc_185b, label %dec_label_pc_1850.preheader, !insn.addr !310

dec_label_pc_1850.preheader:                      ; preds = %dec_label_pc_1830
  %2 = add i32 %0, 1, !insn.addr !311
  store i64 1, i64* %rax.0.reg2mem
  store i64 1, i64* %r8.0.reg2mem
  br label %dec_label_pc_1850

dec_label_pc_1850:                                ; preds = %dec_label_pc_1850.preheader, %dec_label_pc_1850
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %sext = mul i64 %r8.0.reload, 4294967296
  %3 = ashr exact i64 %sext, 32, !insn.addr !312
  %sext1 = mul i64 %rax.0.reload, 4294967296
  %4 = ashr exact i64 %sext1, 32, !insn.addr !312
  %5 = mul nsw i64 %3, %4, !insn.addr !312
  %6 = and i64 %5, 4294967295, !insn.addr !312
  %7 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !313
  %8 = and i64 %7, 4294967295, !insn.addr !313
  %9 = trunc i64 %7 to i32, !insn.addr !311
  %10 = icmp eq i32 %2, %9, !insn.addr !311
  %11 = icmp eq i1 %10, false, !insn.addr !314
  store i64 %8, i64* %rax.0.reg2mem, !insn.addr !314
  store i64 %6, i64* %r8.0.reg2mem, !insn.addr !314
  store i64 %6, i64* %r8.1.reg2mem, !insn.addr !314
  br i1 %11, label %dec_label_pc_1850, label %dec_label_pc_185b, !insn.addr !314

dec_label_pc_185b:                                ; preds = %dec_label_pc_1850, %dec_label_pc_1830
  %r8.1.reload = load i64, i64* %r8.1.reg2mem
  ret i64 %r8.1.reload, !insn.addr !315

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r8.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1850, { 1, 0 }
}

define i64 @ternary_op(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1860:
  %0 = trunc i64 %arg2 to i32, !insn.addr !316
  %1 = trunc i64 %arg1 to i32, !insn.addr !316
  %2 = sub i32 %0, %1, !insn.addr !316
  %3 = xor i64 %arg2, %arg1
  %4 = trunc i64 %3 to i32, !insn.addr !316
  %5 = xor i32 %2, %0, !insn.addr !316
  %6 = and i32 %5, %4, !insn.addr !316
  %7 = icmp slt i32 %6, 0, !insn.addr !316
  %8 = icmp slt i32 %2, 0, !insn.addr !316
  %9 = icmp eq i1 %8, %7, !insn.addr !317
  %.v = select i1 %9, i64 %arg2, i64 %arg1
  %10 = and i64 %.v, 4294967295, !insn.addr !317
  ret i64 %10, !insn.addr !318

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i64 %arg2, { 1, 0, 2 }
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define void @test_control_flow_l1() local_unnamed_addr {
dec_label_pc_1870:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3008 to i8*)), !insn.addr !319
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3030, i64 0, i64 0), i64 21), !insn.addr !320
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_33b8, i64 0, i64 0), i64 20), !insn.addr !321
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_33b8, i64 0, i64 0), i64 4294967291), !insn.addr !322
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_33d2, i64 0, i64 0), i64 1), !insn.addr !323
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_33d2, i64 0, i64 0), i64 0), !insn.addr !324
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_33ea, i64 0, i64 0), i64 15), !insn.addr !325
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_33ea, i64 0, i64 0), i64 10), !insn.addr !326
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_33ea, i64 0, i64 0), i64 0), !insn.addr !327
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3050, i64 0, i64 0), i64 5), !insn.addr !328
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3070, i64 0, i64 0), i64 20), !insn.addr !329
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3090, i64 0, i64 0), i64 400), !insn.addr !330
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3406, i64 0, i64 0), i64 50), !insn.addr !331
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3423, i64 0, i64 0), i64 70), !insn.addr !332
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_30b0, i64 0, i64 0), i64 0), !insn.addr !333
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_30d0, i64 0, i64 0), i64 21), !insn.addr !334
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_30f8, i64 0, i64 0), i64 45), !insn.addr !335
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3440, i64 0, i64 0), i64 5), !insn.addr !336
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_345b, i64 0, i64 0), i64 4), !insn.addr !337
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_3478, i64 0, i64 0), i64 12), !insn.addr !338
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3494, i64 0, i64 0), i64 2), !insn.addr !339
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3494, i64 0, i64 0), i64 4294967295), !insn.addr !340
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_34af, i64 0, i64 0), i64 25), !insn.addr !341
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_34cd, i64 0, i64 0), i64 50), !insn.addr !342
  %24 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_34cd, i64 0, i64 0), i64 4294967290), !insn.addr !343
  %25 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_34ea, i64 0, i64 0), i64 120), !insn.addr !344
  %26 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3508, i64 0, i64 0), i64 10), !insn.addr !345
  %27 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3508, i64 0, i64 0), i64 8), !insn.addr !346
  ret void, !insn.addr !346
}

define i64 @loop_multi_exit(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1b00:
  %rax.4.reg2mem = alloca i64, !insn.addr !347
  %rax.3.reg2mem = alloca i64, !insn.addr !347
  %rdx.0.reg2mem = alloca i64, !insn.addr !347
  %rax.1.reg2mem = alloca i64, !insn.addr !347
  %merge.reg2mem = alloca i64, !insn.addr !347
  %0 = trunc i64 %arg1 to i32, !insn.addr !348
  store i64 1, i64* %merge.reg2mem
  store i64 0, i64* %rax.1.reg2mem
  store i64 0, i64* %rdx.0.reg2mem
  store i64 0, i64* %rax.3.reg2mem
  store i64 0, i64* %rax.4.reg2mem
  switch i32 %0, label %dec_label_pc_1b54.fold.split1 [
    i32 1, label %dec_label_pc_1b59
    i32 2, label %dec_label_pc_1b54
    i32 3, label %dec_label_pc_1b70
    i32 4, label %dec_label_pc_1b79
    i32 5, label %dec_label_pc_1b80
    i32 6, label %dec_label_pc_1b87
    i32 7, label %dec_label_pc_1b8e
    i32 8, label %dec_label_pc_1b95
    i32 9, label %dec_label_pc_1b59.fold.split
    i32 10, label %dec_label_pc_1b54.fold.split
    i32 11, label %dec_label_pc_1b70.fold.split
    i32 12, label %dec_label_pc_1b79.fold.split
  ]

dec_label_pc_1b54.fold.split:                     ; preds = %dec_label_pc_1b00
  store i64 21, i64* %merge.reg2mem
  br label %dec_label_pc_1b54

dec_label_pc_1b54.fold.split1:                    ; preds = %dec_label_pc_1b00
  store i64 4294967295, i64* %merge.reg2mem
  br label %dec_label_pc_1b54

dec_label_pc_1b54:                                ; preds = %dec_label_pc_1b00, %dec_label_pc_1b54.fold.split1, %dec_label_pc_1b54.fold.split, %dec_label_pc_1b87
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !349

dec_label_pc_1b59.fold.split:                     ; preds = %dec_label_pc_1b00
  store i64 2, i64* %rax.1.reg2mem
  store i64 0, i64* %rdx.0.reg2mem
  br label %dec_label_pc_1b59

dec_label_pc_1b59:                                ; preds = %dec_label_pc_1b00, %dec_label_pc_1b59.fold.split, %dec_label_pc_1b80, %dec_label_pc_1b79, %dec_label_pc_1b70
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %1 = mul nsw i64 %rax.1.reload, 10, !insn.addr !350
  %2 = add nsw i64 %rdx.0.reload, %1, !insn.addr !351
  %3 = and i64 %2, 4294967295, !insn.addr !351
  ret i64 %3, !insn.addr !352

dec_label_pc_1b70.fold.split:                     ; preds = %dec_label_pc_1b00
  store i64 2, i64* %rax.3.reg2mem
  br label %dec_label_pc_1b70

dec_label_pc_1b70:                                ; preds = %dec_label_pc_1b00, %dec_label_pc_1b70.fold.split, %dec_label_pc_1b8e
  %rax.3.reload = load i64, i64* %rax.3.reg2mem
  store i64 %rax.3.reload, i64* %rax.1.reg2mem, !insn.addr !353
  store i64 2, i64* %rdx.0.reg2mem, !insn.addr !353
  br label %dec_label_pc_1b59, !insn.addr !353

dec_label_pc_1b79.fold.split:                     ; preds = %dec_label_pc_1b00
  store i64 2, i64* %rax.4.reg2mem
  br label %dec_label_pc_1b79

dec_label_pc_1b79:                                ; preds = %dec_label_pc_1b00, %dec_label_pc_1b79.fold.split, %dec_label_pc_1b95
  %rax.4.reload = load i64, i64* %rax.4.reg2mem
  store i64 %rax.4.reload, i64* %rax.1.reg2mem, !insn.addr !354
  store i64 3, i64* %rdx.0.reg2mem, !insn.addr !354
  br label %dec_label_pc_1b59, !insn.addr !354

dec_label_pc_1b80:                                ; preds = %dec_label_pc_1b00
  store i64 1, i64* %rax.1.reg2mem, !insn.addr !355
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !355
  br label %dec_label_pc_1b59, !insn.addr !355

dec_label_pc_1b87:                                ; preds = %dec_label_pc_1b00
  store i64 11, i64* %merge.reg2mem, !insn.addr !356
  br label %dec_label_pc_1b54, !insn.addr !356

dec_label_pc_1b8e:                                ; preds = %dec_label_pc_1b00
  store i64 1, i64* %rax.3.reg2mem, !insn.addr !357
  br label %dec_label_pc_1b70, !insn.addr !357

dec_label_pc_1b95:                                ; preds = %dec_label_pc_1b00
  store i64 1, i64* %rax.4.reg2mem, !insn.addr !358
  br label %dec_label_pc_1b79, !insn.addr !358

; uselistorder directives
  uselistorder i64* %merge.reg2mem, { 4, 0, 1, 2, 3 }
  uselistorder i64* %rax.1.reg2mem, { 3, 4, 5, 0, 1, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 3, 4, 5, 0, 1, 2 }
  uselistorder i64* %rax.3.reg2mem, { 3, 0, 1, 2 }
  uselistorder i64* %rax.4.reg2mem, { 3, 0, 1, 2 }
  uselistorder label %dec_label_pc_1b79, { 2, 1, 0 }
  uselistorder label %dec_label_pc_1b70, { 2, 1, 0 }
  uselistorder label %dec_label_pc_1b59, { 2, 3, 4, 1, 0 }
  uselistorder label %dec_label_pc_1b54, { 3, 1, 2, 0 }
}

define i64 @infinite_loop(i64 %arg1) local_unnamed_addr {
dec_label_pc_1bb0:
  %rax.0.reg2mem = alloca i64, !insn.addr !359
  %0 = trunc i64 %arg1 to i32
  %1 = icmp eq i32 %0, 1, !insn.addr !360
  %2 = icmp eq i1 %1, false, !insn.addr !361
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !362
  br label %dec_label_pc_1bca, !insn.addr !362

dec_label_pc_1bc0:                                ; preds = %dec_label_pc_1bca
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %3 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !363
  %4 = and i64 %3, 4294967295, !insn.addr !363
  %5 = trunc i64 %3 to i32, !insn.addr !364
  %6 = icmp eq i32 %5, ptrtoint (i32* @global_var_3e9 to i32), !insn.addr !364
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !365
  br i1 %6, label %dec_label_pc_1bd2, label %dec_label_pc_1bca, !insn.addr !365

dec_label_pc_1bca:                                ; preds = %dec_label_pc_1bc0, %dec_label_pc_1bb0
  br i1 %2, label %dec_label_pc_1bc0, label %dec_label_pc_1bd1, !insn.addr !361

dec_label_pc_1bd1:                                ; preds = %dec_label_pc_1bca
  ret i64 0, !insn.addr !366

dec_label_pc_1bd2:                                ; preds = %dec_label_pc_1bc0
  %7 = inttoptr i64 %arg1 to i32*, !insn.addr !367
  store i32 1, i32* %7, align 4, !insn.addr !367
  ret i64 %4, !insn.addr !368

; uselistorder directives
  uselistorder i64 %4, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
}

define i64 @multi_return(i64 %arg1) local_unnamed_addr {
dec_label_pc_1be0:
  %merge.reg2mem = alloca i64, !insn.addr !369
  %0 = trunc i64 %arg1 to i32, !insn.addr !370
  %1 = icmp slt i32 %0, 0, !insn.addr !370
  store i64 4294967295, i64* %merge.reg2mem, !insn.addr !371
  br i1 %1, label %dec_label_pc_1c00, label %dec_label_pc_1be8, !insn.addr !371

dec_label_pc_1be8:                                ; preds = %dec_label_pc_1be0
  %2 = mul i64 %arg1, 2, !insn.addr !372
  %3 = trunc i64 %2 to i32, !insn.addr !373
  %4 = icmp sgt i32 %3, 100, !insn.addr !373
  store i64 4294967294, i64* %merge.reg2mem, !insn.addr !373
  br i1 %4, label %dec_label_pc_1c00, label %dec_label_pc_1bf0, !insn.addr !373

dec_label_pc_1bf0:                                ; preds = %dec_label_pc_1be8
  %5 = add i64 %arg1, 1, !insn.addr !374
  %6 = urem i64 %arg1, 2
  %7 = icmp eq i64 %6, 0, !insn.addr !375
  %8 = icmp eq i1 %7, false, !insn.addr !376
  %9 = select i1 %8, i64 %5, i64 %2, !insn.addr !376
  %10 = and i64 %9, 4294967295, !insn.addr !376
  ret i64 %10, !insn.addr !377

dec_label_pc_1c00:                                ; preds = %dec_label_pc_1be0, %dec_label_pc_1be8
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !378

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %merge.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 1, 2, 0, 3 }
  uselistorder label %dec_label_pc_1c00, { 1, 0 }
}

define i64 @conditional_return(i64 %arg1) local_unnamed_addr {
dec_label_pc_1c10:
  %0 = trunc i64 %arg1 to i32, !insn.addr !379
  %1 = icmp slt i32 %0, 1
  br i1 %1, label %dec_label_pc_1c20, label %dec_label_pc_1c18, !insn.addr !380

dec_label_pc_1c18:                                ; preds = %dec_label_pc_1c10
  %2 = mul i64 %arg1, 2, !insn.addr !381
  %3 = and i64 %2, 4294967294, !insn.addr !381
  ret i64 %3, !insn.addr !382

dec_label_pc_1c20:                                ; preds = %dec_label_pc_1c10
  %4 = sub i64 0, %arg1, !insn.addr !383
  %5 = icmp eq i32 %0, 0, !insn.addr !384
  %.op = and i64 %4, 4294967295
  %6 = select i1 %5, i64 0, i64 %.op, !insn.addr !385
  ret i64 %6, !insn.addr !386

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i32 @duffs_device(i32* %dst, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1c30:
  %0 = icmp slt i32 %n, 1
  br i1 %0, label %dec_label_pc_1ce8, label %dec_label_pc_1c45, !insn.addr !387

dec_label_pc_1c45:                                ; preds = %dec_label_pc_1c30
  %1 = ptrtoint i32* %dst to i64
  %2 = trunc i64 %1 to i32, !insn.addr !388
  ret i32 %2, !insn.addr !388

dec_label_pc_1ce8:                                ; preds = %dec_label_pc_1c30
  ret i32 -1, !insn.addr !389
}

define i64 @function_1cf0(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1cf0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !390
}

define i64 @loop_complex_cond(i64 %arg1) local_unnamed_addr {
dec_label_pc_1d00:
  %rdx.0.in.reg2mem = alloca i64, !insn.addr !391
  %rcx.0.reg2mem = alloca i64, !insn.addr !391
  %rax.0.reg2mem = alloca i64, !insn.addr !391
  %0 = trunc i64 %arg1 to i32, !insn.addr !392
  %1 = icmp slt i32 %0, 1
  br i1 %1, label %dec_label_pc_1d70, label %dec_label_pc_1d08, !insn.addr !393

dec_label_pc_1d08:                                ; preds = %dec_label_pc_1d00
  %2 = add i64 %arg1, 4294967295, !insn.addr !394
  %3 = trunc i64 %2 to i32, !insn.addr !395
  %4 = icmp slt i32 %3, 3, !insn.addr !395
  store i64 1, i64* %rax.0.reg2mem, !insn.addr !395
  store i64 2, i64* %rcx.0.reg2mem, !insn.addr !395
  store i64 %2, i64* %rdx.0.in.reg2mem, !insn.addr !395
  br i1 %4, label %dec_label_pc_1d5d, label %dec_label_pc_1d10, !insn.addr !395

dec_label_pc_1d10:                                ; preds = %dec_label_pc_1d08
  %5 = add i64 %arg1, 4294967294, !insn.addr !396
  %6 = trunc i64 %5 to i32, !insn.addr !397
  %7 = icmp slt i32 %6, 5, !insn.addr !397
  store i64 2, i64* %rax.0.reg2mem, !insn.addr !397
  store i64 4, i64* %rcx.0.reg2mem, !insn.addr !397
  store i64 %5, i64* %rdx.0.in.reg2mem, !insn.addr !397
  br i1 %7, label %dec_label_pc_1d5d, label %dec_label_pc_1d18, !insn.addr !397

dec_label_pc_1d18:                                ; preds = %dec_label_pc_1d10
  %8 = add i64 %arg1, 4294967293, !insn.addr !398
  %9 = trunc i64 %8 to i32, !insn.addr !399
  %10 = icmp slt i32 %9, 7, !insn.addr !399
  store i64 3, i64* %rax.0.reg2mem, !insn.addr !399
  store i64 6, i64* %rcx.0.reg2mem, !insn.addr !399
  store i64 %8, i64* %rdx.0.in.reg2mem, !insn.addr !399
  br i1 %10, label %dec_label_pc_1d5d, label %dec_label_pc_1d20, !insn.addr !399

dec_label_pc_1d20:                                ; preds = %dec_label_pc_1d18
  %11 = add i64 %arg1, 4294967292, !insn.addr !400
  %12 = trunc i64 %11 to i32, !insn.addr !401
  %13 = icmp slt i32 %12, 9, !insn.addr !401
  store i64 4, i64* %rax.0.reg2mem, !insn.addr !401
  store i64 8, i64* %rcx.0.reg2mem, !insn.addr !401
  store i64 %11, i64* %rdx.0.in.reg2mem, !insn.addr !401
  br i1 %13, label %dec_label_pc_1d5d, label %dec_label_pc_1d28, !insn.addr !401

dec_label_pc_1d28:                                ; preds = %dec_label_pc_1d20
  %14 = add i64 %arg1, 4294967291, !insn.addr !402
  %15 = trunc i64 %14 to i32, !insn.addr !403
  %16 = icmp slt i32 %15, 11, !insn.addr !403
  store i64 5, i64* %rax.0.reg2mem, !insn.addr !403
  store i64 10, i64* %rcx.0.reg2mem, !insn.addr !403
  store i64 %14, i64* %rdx.0.in.reg2mem, !insn.addr !403
  br i1 %16, label %dec_label_pc_1d5d, label %dec_label_pc_1d30, !insn.addr !403

dec_label_pc_1d30:                                ; preds = %dec_label_pc_1d28
  %17 = add i64 %arg1, 4294967290, !insn.addr !404
  %18 = trunc i64 %17 to i32, !insn.addr !405
  %19 = icmp slt i32 %18, 13, !insn.addr !405
  store i64 6, i64* %rax.0.reg2mem, !insn.addr !405
  store i64 12, i64* %rcx.0.reg2mem, !insn.addr !405
  store i64 %17, i64* %rdx.0.in.reg2mem, !insn.addr !405
  br i1 %19, label %dec_label_pc_1d5d, label %dec_label_pc_1d38, !insn.addr !405

dec_label_pc_1d38:                                ; preds = %dec_label_pc_1d30
  %20 = add i64 %arg1, 4294967289, !insn.addr !406
  %21 = trunc i64 %20 to i32, !insn.addr !407
  %22 = icmp slt i32 %21, 15, !insn.addr !407
  store i64 7, i64* %rax.0.reg2mem, !insn.addr !407
  store i64 14, i64* %rcx.0.reg2mem, !insn.addr !407
  store i64 %20, i64* %rdx.0.in.reg2mem, !insn.addr !407
  br i1 %22, label %dec_label_pc_1d5d, label %dec_label_pc_1d40, !insn.addr !407

dec_label_pc_1d40:                                ; preds = %dec_label_pc_1d38
  %23 = add i64 %arg1, 4294967288, !insn.addr !408
  %24 = trunc i64 %23 to i32, !insn.addr !409
  %25 = icmp slt i32 %24, 17, !insn.addr !409
  store i64 8, i64* %rax.0.reg2mem, !insn.addr !409
  store i64 16, i64* %rcx.0.reg2mem, !insn.addr !409
  store i64 %23, i64* %rdx.0.in.reg2mem, !insn.addr !409
  br i1 %25, label %dec_label_pc_1d5d, label %dec_label_pc_1d48, !insn.addr !409

dec_label_pc_1d48:                                ; preds = %dec_label_pc_1d40
  %26 = add i64 %arg1, 4294967287, !insn.addr !410
  %27 = trunc i64 %26 to i32, !insn.addr !411
  %28 = icmp slt i32 %27, 19, !insn.addr !411
  %29 = add i64 %arg1, 4294967286
  %spec.select = select i1 %28, i64 9, i64 10
  %spec.select1 = select i1 %28, i64 18, i64 20
  %spec.select2 = select i1 %28, i64 %26, i64 %29
  store i64 %spec.select, i64* %rax.0.reg2mem
  store i64 %spec.select1, i64* %rcx.0.reg2mem
  store i64 %spec.select2, i64* %rdx.0.in.reg2mem
  br label %dec_label_pc_1d5d

dec_label_pc_1d5d:                                ; preds = %dec_label_pc_1d48, %dec_label_pc_1d40, %dec_label_pc_1d38, %dec_label_pc_1d30, %dec_label_pc_1d20, %dec_label_pc_1d18, %dec_label_pc_1d10, %dec_label_pc_1d08, %dec_label_pc_1d28
  %rdx.0.in.reload = load i64, i64* %rdx.0.in.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %30 = add nuw nsw i64 %rcx.0.reload, %rax.0.reload, !insn.addr !412
  %31 = add i64 %30, %rdx.0.in.reload, !insn.addr !413
  %32 = and i64 %31, 4294967295, !insn.addr !413
  ret i64 %32, !insn.addr !414

dec_label_pc_1d70:                                ; preds = %dec_label_pc_1d00
  %33 = and i64 %arg1, 4294967295, !insn.addr !415
  ret i64 %33, !insn.addr !416

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 1, 2, 3, 4, 9, 5, 6, 7, 8 }
  uselistorder i64* %rcx.0.reg2mem, { 0, 1, 2, 3, 4, 9, 5, 6, 7, 8 }
  uselistorder i64* %rdx.0.in.reg2mem, { 0, 1, 2, 3, 4, 9, 5, 6, 7, 8 }
  uselistorder i64 20, { 2, 3, 4, 0, 1 }
  uselistorder i32 11, { 1, 0 }
  uselistorder i64 8, { 1, 0, 3, 2 }
  uselistorder i32 9, { 1, 0 }
  uselistorder i64 6, { 1, 0, 2 }
  uselistorder i32 7, { 1, 0 }
  uselistorder i64 4294967293, { 1, 0 }
  uselistorder i64 %arg1, { 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 10, 11 }
  uselistorder label %dec_label_pc_1d5d, { 0, 1, 2, 3, 8, 4, 5, 6, 7 }
}

define i64 @loop_modify_var(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1de0:
  %r8.3.reg2mem = alloca i64, !insn.addr !417
  %rax.18.reg2mem = alloca i64, !insn.addr !417
  %r8.29.reg2mem = alloca i64, !insn.addr !417
  %.reg2mem27 = alloca i64, !insn.addr !417
  %.lcssa.reg2mem = alloca i64, !insn.addr !417
  %rax.0.lcssa.reg2mem = alloca i64, !insn.addr !417
  %storemerge.in6.reg2mem = alloca i64, !insn.addr !417
  %.reg2mem = alloca i64, !insn.addr !417
  %0 = trunc i64 %arg1 to i32, !insn.addr !418
  %1 = icmp slt i32 %0, 2
  store i64 0, i64* %r8.3.reg2mem, !insn.addr !419
  br i1 %1, label %dec_label_pc_1e28, label %dec_label_pc_1e14.preheader, !insn.addr !419

dec_label_pc_1e14.preheader:                      ; preds = %dec_label_pc_1de0
  %2 = icmp sgt i64 %arg1, 2, !insn.addr !420
  store i64 2, i64* %.reg2mem27, !insn.addr !420
  store i64 1, i64* %r8.29.reg2mem, !insn.addr !420
  store i64 1, i64* %rax.18.reg2mem, !insn.addr !420
  store i64 1, i64* %r8.3.reg2mem, !insn.addr !420
  br i1 %2, label %dec_label_pc_1e0c.preheader, label %dec_label_pc_1e28, !insn.addr !420

dec_label_pc_1e00:                                ; preds = %dec_label_pc_1e0c.preheader, %dec_label_pc_1e0a
  %storemerge.in6.reload = load i64, i64* %storemerge.in6.reg2mem
  %.reload = load i64, i64* %.reg2mem
  %3 = add nsw i64 %storemerge.in6.reload, 4, !insn.addr !421
  %4 = and i64 %3, 4294967295, !insn.addr !421
  %5 = icmp slt i64 %4, %arg1, !insn.addr !422
  store i64 %.reload, i64* %r8.3.reg2mem, !insn.addr !422
  br i1 %5, label %dec_label_pc_1e0a, label %dec_label_pc_1e28, !insn.addr !422

dec_label_pc_1e0a:                                ; preds = %dec_label_pc_1e00
  %6 = add nsw i64 %storemerge.in6.reload, 3, !insn.addr !423
  %7 = and i64 %6, 4294967295, !insn.addr !423
  %8 = add nsw i64 %3, %.reload, !insn.addr !424
  %9 = and i64 %8, 4294967295, !insn.addr !424
  %10 = trunc i64 %3 to i32, !insn.addr !425
  %11 = icmp sgt i32 %10, 5, !insn.addr !425
  store i64 %9, i64* %.reg2mem, !insn.addr !425
  store i64 %7, i64* %storemerge.in6.reg2mem, !insn.addr !425
  store i64 %4, i64* %rax.0.lcssa.reg2mem, !insn.addr !425
  store i64 %9, i64* %.lcssa.reg2mem, !insn.addr !425
  br i1 %11, label %dec_label_pc_1e00, label %dec_label_pc_1e14.loopexit, !insn.addr !425

dec_label_pc_1e14.loopexit:                       ; preds = %dec_label_pc_1e0a, %dec_label_pc_1e0c.preheader
  %.lcssa.reload = load i64, i64* %.lcssa.reg2mem
  %rax.0.lcssa.reload = load i64, i64* %rax.0.lcssa.reg2mem
  %12 = add nsw i64 %rax.0.lcssa.reload, 1, !insn.addr !426
  %13 = and i64 %12, 4294967295, !insn.addr !426
  %14 = icmp slt i64 %13, %arg1, !insn.addr !420
  store i64 %13, i64* %.reg2mem27, !insn.addr !420
  store i64 %.lcssa.reload, i64* %r8.29.reg2mem, !insn.addr !420
  store i64 %rax.0.lcssa.reload, i64* %rax.18.reg2mem, !insn.addr !420
  store i64 %.lcssa.reload, i64* %r8.3.reg2mem, !insn.addr !420
  br i1 %14, label %dec_label_pc_1e0c.preheader, label %dec_label_pc_1e28, !insn.addr !420

dec_label_pc_1e0c.preheader:                      ; preds = %dec_label_pc_1e14.preheader, %dec_label_pc_1e14.loopexit
  %rax.18.reload = load i64, i64* %rax.18.reg2mem
  %r8.29.reload = load i64, i64* %r8.29.reg2mem
  %.reload28 = load i64, i64* %.reg2mem27
  %15 = add nsw i64 %r8.29.reload, %.reload28, !insn.addr !424
  %16 = and i64 %15, 4294967295, !insn.addr !424
  %17 = trunc i64 %.reload28 to i32, !insn.addr !425
  %18 = icmp sgt i32 %17, 5, !insn.addr !425
  store i64 %16, i64* %.reg2mem, !insn.addr !425
  store i64 %rax.18.reload, i64* %storemerge.in6.reg2mem, !insn.addr !425
  store i64 %.reload28, i64* %rax.0.lcssa.reg2mem, !insn.addr !425
  store i64 %16, i64* %.lcssa.reg2mem, !insn.addr !425
  br i1 %18, label %dec_label_pc_1e00, label %dec_label_pc_1e14.loopexit, !insn.addr !425

dec_label_pc_1e28:                                ; preds = %dec_label_pc_1e14.loopexit, %dec_label_pc_1e00, %dec_label_pc_1e14.preheader, %dec_label_pc_1de0
  %r8.3.reload = load i64, i64* %r8.3.reg2mem
  %19 = and i64 %r8.3.reload, 4294967295, !insn.addr !427
  ret i64 %19, !insn.addr !428

; uselistorder directives
  uselistorder i64 %.reload28, { 2, 0, 1 }
  uselistorder i64 %3, { 1, 0, 2 }
  uselistorder i64 %.reload, { 1, 0 }
  uselistorder i64* %.reg2mem, { 1, 2, 0 }
  uselistorder i64* %storemerge.in6.reg2mem, { 1, 2, 0 }
  uselistorder i64* %rax.0.lcssa.reg2mem, { 2, 0, 1 }
  uselistorder i64* %.lcssa.reg2mem, { 2, 0, 1 }
  uselistorder i64* %.reg2mem27, { 0, 2, 1 }
  uselistorder i64* %r8.29.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.18.reg2mem, { 0, 2, 1 }
  uselistorder i32 5, { 0, 5, 2, 1, 3, 4 }
  uselistorder i64 %arg1, { 2, 1, 0, 3 }
  uselistorder label %dec_label_pc_1e0c.preheader, { 1, 0 }
  uselistorder label %dec_label_pc_1e14.loopexit, { 1, 0 }
}

define i64 @loop_external_state() local_unnamed_addr {
dec_label_pc_1e30:
  %0 = alloca i64
  %rax.1.reg2mem = alloca i64, !insn.addr !429
  %rax.0.reg2mem = alloca i64, !insn.addr !429
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp eq i32 %2, 0, !insn.addr !430
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !431
  br label %dec_label_pc_1e48, !insn.addr !431

dec_label_pc_1e40:                                ; preds = %dec_label_pc_1e48
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %4 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !432
  %5 = and i64 %4, 4294967295, !insn.addr !432
  %6 = trunc i64 %4 to i32, !insn.addr !433
  %7 = icmp eq i32 %6, 101, !insn.addr !433
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !434
  store i64 %5, i64* %rax.1.reg2mem, !insn.addr !434
  br i1 %7, label %dec_label_pc_1e4e, label %dec_label_pc_1e48, !insn.addr !434

dec_label_pc_1e48:                                ; preds = %dec_label_pc_1e40, %dec_label_pc_1e30
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !435
  br i1 %3, label %dec_label_pc_1e40, label %dec_label_pc_1e4e, !insn.addr !435

dec_label_pc_1e4e:                                ; preds = %dec_label_pc_1e40, %dec_label_pc_1e48
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !436

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1e4e, { 1, 0 }
}

define i64 @tail_recursion(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1e50:
  %rax.1.reg2mem = alloca i64, !insn.addr !437
  %rdi.0.reg2mem = alloca i64, !insn.addr !437
  %rax.0.reg2mem = alloca i64, !insn.addr !437
  %0 = and i64 %arg2, 4294967295, !insn.addr !438
  %1 = trunc i64 %arg1 to i32, !insn.addr !439
  %2 = icmp slt i32 %1, 2, !insn.addr !439
  store i64 %0, i64* %rax.0.reg2mem, !insn.addr !439
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !439
  store i64 %0, i64* %rax.1.reg2mem, !insn.addr !439
  br i1 %2, label %dec_label_pc_1e6b, label %dec_label_pc_1e60, !insn.addr !439

dec_label_pc_1e60:                                ; preds = %dec_label_pc_1e50, %dec_label_pc_1e60
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %sext = mul i64 %rax.0.reload, 4294967296
  %3 = ashr exact i64 %sext, 32, !insn.addr !440
  %sext1 = mul i64 %rdi.0.reload, 4294967296
  %4 = ashr exact i64 %sext1, 32, !insn.addr !440
  %5 = mul nsw i64 %4, %3, !insn.addr !440
  %6 = and i64 %5, 4294967295, !insn.addr !440
  %7 = add i64 %rdi.0.reload, 4294967295, !insn.addr !441
  %8 = and i64 %7, 4294967295, !insn.addr !441
  %9 = trunc i64 %7 to i32, !insn.addr !442
  %10 = icmp eq i32 %9, 1, !insn.addr !442
  %11 = icmp eq i1 %10, false, !insn.addr !443
  store i64 %6, i64* %rax.0.reg2mem, !insn.addr !443
  store i64 %8, i64* %rdi.0.reg2mem, !insn.addr !443
  store i64 %6, i64* %rax.1.reg2mem, !insn.addr !443
  br i1 %11, label %dec_label_pc_1e60, label %dec_label_pc_1e6b, !insn.addr !443

dec_label_pc_1e6b:                                ; preds = %dec_label_pc_1e60, %dec_label_pc_1e50
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !444

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdi.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1e60, { 1, 0 }
}

define i64 @indirect_recursion_a(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1e70:
  %rax.3.reg2mem = alloca i64, !insn.addr !445
  %.pre-phi18.reg2mem = alloca i32, !insn.addr !445
  %rax.2.reg2mem = alloca i64, !insn.addr !445
  %storemerge.in.reg2mem = alloca i64, !insn.addr !445
  %rax.0.reg2mem = alloca i64, !insn.addr !445
  %.pre-phi.reg2mem = alloca i32, !insn.addr !445
  %rdi.0.reg2mem = alloca i64, !insn.addr !445
  %rsi.0.reg2mem = alloca i64, !insn.addr !445
  %rcx.0.in.in.reg2mem = alloca i64, !insn.addr !445
  %0 = and i64 %arg1, 4294967295, !insn.addr !446
  %1 = trunc i64 %arg2 to i32, !insn.addr !447
  %2 = icmp slt i32 %1, 1
  store i64 %arg2, i64* %rcx.0.in.in.reg2mem, !insn.addr !448
  store i64 %arg2, i64* %rsi.0.reg2mem, !insn.addr !448
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !448
  store i64 %0, i64* %rax.2.reg2mem, !insn.addr !448
  br i1 %2, label %dec_label_pc_1eb0, label %dec_label_pc_1e7d, !insn.addr !448

dec_label_pc_1e7d:                                ; preds = %dec_label_pc_1e70, %dec_label_pc_1ea4
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %rcx.0.in.in.reload = load i64, i64* %rcx.0.in.in.reg2mem
  %3 = urem i64 %rdi.0.reload, 2
  %4 = icmp eq i64 %3, 0, !insn.addr !449
  br i1 %4, label %dec_label_pc_1ec0, label %dec_label_pc_1e83, !insn.addr !450

dec_label_pc_1e83:                                ; preds = %dec_label_pc_1e7d
  %5 = mul i64 %rdi.0.reload, 3, !insn.addr !451
  %6 = trunc i64 %rsi.0.reload to i32
  %7 = icmp eq i32 %6, 1, !insn.addr !452
  br i1 %7, label %dec_label_pc_1eb8, label %dec_label_pc_1e8b, !insn.addr !453

dec_label_pc_1e8b:                                ; preds = %dec_label_pc_1e83
  %8 = add i64 %5, 2, !insn.addr !454
  %9 = and i64 %8, 4294967295, !insn.addr !454
  %10 = icmp slt i32 %6, 3, !insn.addr !455
  store i64 %9, i64* %rax.2.reg2mem, !insn.addr !455
  br i1 %10, label %dec_label_pc_1eb0, label %dec_label_pc_1e93, !insn.addr !455

dec_label_pc_1e93:                                ; preds = %dec_label_pc_1e8b
  %11 = urem i64 %8, 2
  %12 = icmp eq i64 %11, 0, !insn.addr !456
  store i32 %6, i32* %.pre-phi.reg2mem, !insn.addr !457
  store i64 %9, i64* %rax.0.reg2mem, !insn.addr !457
  store i32 %6, i32* %.pre-phi18.reg2mem, !insn.addr !457
  store i64 %9, i64* %rax.3.reg2mem, !insn.addr !457
  br i1 %12, label %dec_label_pc_1edc, label %dec_label_pc_1e97, !insn.addr !457

dec_label_pc_1e97:                                ; preds = %dec_label_pc_1ed8, %dec_label_pc_1e93
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %.pre-phi.reload = load i32, i32* %.pre-phi.reg2mem
  %13 = mul nuw nsw i64 %rax.0.reload, 3, !insn.addr !458
  %14 = icmp eq i32 %.pre-phi.reload, 3, !insn.addr !459
  br i1 %14, label %dec_label_pc_1ef8, label %dec_label_pc_1e9f, !insn.addr !460

dec_label_pc_1e9f:                                ; preds = %dec_label_pc_1e97
  %15 = and i64 %13, 4294967295, !insn.addr !458
  %16 = add nuw nsw i64 %15, 2, !insn.addr !461
  store i64 %16, i64* %storemerge.in.reg2mem, !insn.addr !461
  br label %dec_label_pc_1ea4, !insn.addr !461

dec_label_pc_1ea4:                                ; preds = %dec_label_pc_1eec, %dec_label_pc_1e9f
  %rcx.0.in = add i64 %rcx.0.in.in.reload, 4294967292
  %rcx.0 = and i64 %rcx.0.in, 4294967295
  %storemerge.in.reload = load i64, i64* %storemerge.in.reg2mem
  %storemerge = and i64 %storemerge.in.reload, 4294967295
  %17 = add i64 %rsi.0.reload, 4294967292, !insn.addr !462
  %18 = and i64 %17, 4294967295, !insn.addr !462
  %19 = icmp eq i64 %rcx.0, 0, !insn.addr !463
  %20 = icmp eq i1 %19, false, !insn.addr !464
  store i64 %rcx.0, i64* %rcx.0.in.in.reg2mem, !insn.addr !464
  store i64 %18, i64* %rsi.0.reg2mem, !insn.addr !464
  store i64 %storemerge, i64* %rdi.0.reg2mem, !insn.addr !464
  store i64 %storemerge, i64* %rax.2.reg2mem, !insn.addr !464
  br i1 %20, label %dec_label_pc_1e7d, label %dec_label_pc_1eb0, !insn.addr !464

dec_label_pc_1eb0.loopexit.split.loop.exit2:      ; preds = %dec_label_pc_1ec0
  %21 = zext i32 %28 to i64, !insn.addr !465
  store i64 %21, i64* %rax.2.reg2mem
  br label %dec_label_pc_1eb0

dec_label_pc_1eb0:                                ; preds = %dec_label_pc_1e8b, %dec_label_pc_1ed0, %dec_label_pc_1edc, %dec_label_pc_1ea4, %dec_label_pc_1eb0.loopexit.split.loop.exit2, %dec_label_pc_1e70
  %rax.2.reload = load i64, i64* %rax.2.reg2mem
  ret i64 %rax.2.reload, !insn.addr !466

dec_label_pc_1eb8:                                ; preds = %dec_label_pc_1e83
  %22 = add i64 %5, 1, !insn.addr !467
  %23 = and i64 %22, 4294967295, !insn.addr !467
  ret i64 %23, !insn.addr !468

dec_label_pc_1ec0:                                ; preds = %dec_label_pc_1e7d
  %24 = trunc i64 %rdi.0.reload to i32, !insn.addr !469
  %25 = icmp slt i32 %24, 0
  %26 = zext i1 %25 to i32, !insn.addr !470
  %27 = add i32 %26, %24, !insn.addr !471
  %28 = ashr i32 %27, 1, !insn.addr !465
  %29 = trunc i64 %rsi.0.reload to i32
  %30 = icmp eq i32 %29, 1, !insn.addr !472
  br i1 %30, label %dec_label_pc_1eb0.loopexit.split.loop.exit2, label %dec_label_pc_1ed0, !insn.addr !473

dec_label_pc_1ed0:                                ; preds = %dec_label_pc_1ec0
  %31 = add nsw i32 %28, 1
  %32 = zext i32 %31 to i64, !insn.addr !474
  %33 = icmp slt i32 %29, 3, !insn.addr !475
  store i64 %32, i64* %rax.2.reg2mem, !insn.addr !475
  br i1 %33, label %dec_label_pc_1eb0, label %dec_label_pc_1ed8, !insn.addr !475

dec_label_pc_1ed8:                                ; preds = %dec_label_pc_1ed0
  %34 = urem i64 %32, 2
  %35 = icmp eq i64 %34, 0, !insn.addr !476
  %36 = icmp eq i1 %35, false, !insn.addr !477
  store i32 %29, i32* %.pre-phi.reg2mem, !insn.addr !477
  store i64 %32, i64* %rax.0.reg2mem, !insn.addr !477
  store i32 %29, i32* %.pre-phi18.reg2mem, !insn.addr !477
  store i64 %32, i64* %rax.3.reg2mem, !insn.addr !477
  br i1 %36, label %dec_label_pc_1e97, label %dec_label_pc_1edc, !insn.addr !477

dec_label_pc_1edc:                                ; preds = %dec_label_pc_1ed8, %dec_label_pc_1e93
  %rax.3.reload = load i64, i64* %rax.3.reg2mem
  %.pre-phi18.reload = load i32, i32* %.pre-phi18.reg2mem
  %37 = trunc i64 %rax.3.reload to i32, !insn.addr !478
  %38 = icmp slt i32 %37, 0
  %39 = zext i1 %38 to i32, !insn.addr !479
  %40 = add i32 %39, %37, !insn.addr !480
  %41 = ashr i32 %40, 1, !insn.addr !481
  %42 = zext i32 %41 to i64, !insn.addr !481
  %43 = icmp eq i32 %.pre-phi18.reload, 3, !insn.addr !482
  store i64 %42, i64* %rax.2.reg2mem, !insn.addr !483
  br i1 %43, label %dec_label_pc_1eb0, label %dec_label_pc_1eec, !insn.addr !483

dec_label_pc_1eec:                                ; preds = %dec_label_pc_1edc
  %44 = add nuw nsw i64 %42, 1, !insn.addr !484
  store i64 %44, i64* %storemerge.in.reg2mem, !insn.addr !485
  br label %dec_label_pc_1ea4, !insn.addr !485

dec_label_pc_1ef8:                                ; preds = %dec_label_pc_1e97
  %45 = add nuw nsw i64 %13, 1, !insn.addr !486
  %46 = and i64 %45, 4294967295, !insn.addr !486
  ret i64 %46, !insn.addr !487

; uselistorder directives
  uselistorder i64 %42, { 1, 0 }
  uselistorder i32 %37, { 1, 0 }
  uselistorder i64 %32, { 0, 2, 3, 1 }
  uselistorder i32 %28, { 1, 0 }
  uselistorder i32 %24, { 1, 0 }
  uselistorder i64 %9, { 0, 2, 1 }
  uselistorder i64* %rcx.0.in.in.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rsi.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdi.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %.pre-phi.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge.in.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.2.reg2mem, { 3, 2, 0, 5, 4, 1, 6 }
  uselistorder i32* %.pre-phi18.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.3.reg2mem, { 0, 2, 1 }
  uselistorder i64 4294967292, { 4, 0, 5, 6, 1, 2, 3, 7, 8 }
  uselistorder label %dec_label_pc_1eb0, { 2, 1, 4, 3, 0, 5 }
  uselistorder label %dec_label_pc_1e7d, { 1, 0 }
}

define i64 @call_func_ptr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1f00:
  ret i64 %arg1, !insn.addr !488
}

define i64 @call_func_ptr_array(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1f10:
  %stack_var_-40 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !489
  %1 = call i128 @__asm_movq(i64 4640), !insn.addr !490
  %2 = call i128 @__asm_movq(i64 4656), !insn.addr !491
  %3 = call i128 @__asm_punpcklqdq(i128 %1, i128 %2), !insn.addr !492
  %4 = call i64 @__asm_movaps(i128 %3), !insn.addr !493
  store i64 %4, i64* %stack_var_-40, align 8, !insn.addr !493
  %5 = trunc i64 %arg1 to i32, !insn.addr !494
  %6 = icmp ult i32 %5, 3
  %7 = call i64 @__readfsqword(i64 40)
  %8 = icmp eq i64 %0, %7
  %9 = icmp eq i1 %8, false
  br i1 %6, label %dec_label_pc_1f5a, label %dec_label_pc_1f80, !insn.addr !495

dec_label_pc_1f5a:                                ; preds = %dec_label_pc_1f10
  br i1 %9, label %dec_label_pc_1f9a, label %dec_label_pc_1f6a, !insn.addr !496

dec_label_pc_1f6a:                                ; preds = %dec_label_pc_1f5a
  %10 = ptrtoint i64* %stack_var_-40 to i64, !insn.addr !497
  %sext = mul i64 %arg1, 4294967296
  %11 = ashr exact i64 %sext, 29, !insn.addr !498
  %12 = add i64 %11, %10, !insn.addr !498
  %13 = inttoptr i64 %12 to i64*, !insn.addr !498
  %14 = load i64, i64* %13, align 8, !insn.addr !498
  ret i64 %14, !insn.addr !499

dec_label_pc_1f80:                                ; preds = %dec_label_pc_1f10
  br i1 %9, label %dec_label_pc_1f9a, label %dec_label_pc_1f90, !insn.addr !500

dec_label_pc_1f90:                                ; preds = %dec_label_pc_1f80
  ret i64 4294967295, !insn.addr !501

dec_label_pc_1f9a:                                ; preds = %dec_label_pc_1f80, %dec_label_pc_1f5a
  call void @__stack_chk_fail(), !insn.addr !502
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !503

; uselistorder directives
  uselistorder i64* %stack_var_-40, { 1, 0 }
}

define i32 @call_virtual_func(i8* %obj, i32 %x) local_unnamed_addr {
dec_label_pc_1fa0:
  %0 = mul i32 %x, 2, !insn.addr !504
  ret i32 %0, !insn.addr !505
}

define i64 @process_with_callback(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1fb0:
  %merge.reg2mem = alloca i64, !insn.addr !506
  %r12.0.reg2mem = alloca i64, !insn.addr !506
  %rbx.0.reg2mem = alloca i64, !insn.addr !506
  %0 = trunc i64 %arg2 to i32, !insn.addr !507
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %merge.reg2mem, !insn.addr !508
  br i1 %1, label %dec_label_pc_1fe8, label %dec_label_pc_1fc2, !insn.addr !508

dec_label_pc_1fc2:                                ; preds = %dec_label_pc_1fb0
  %2 = add i64 %arg2, 4294967295, !insn.addr !509
  %3 = mul i64 %2, 4, !insn.addr !509
  %4 = and i64 %3, 17179869180, !insn.addr !510
  %5 = add i64 %arg1, 4, !insn.addr !510
  %6 = add i64 %5, %4, !insn.addr !510
  store i64 %arg1, i64* %rbx.0.reg2mem, !insn.addr !511
  store i64 0, i64* %r12.0.reg2mem, !insn.addr !511
  br label %dec_label_pc_1fd8, !insn.addr !511

dec_label_pc_1fd8:                                ; preds = %dec_label_pc_1fd8, %dec_label_pc_1fc2
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %7 = add i64 %rbx.0.reload, 4, !insn.addr !512
  %8 = add i64 %r12.0.reload, %2, !insn.addr !513
  %9 = and i64 %8, 4294967295, !insn.addr !513
  %10 = icmp eq i64 %7, %6, !insn.addr !514
  %11 = icmp eq i1 %10, false, !insn.addr !515
  store i64 %7, i64* %rbx.0.reg2mem, !insn.addr !515
  store i64 %9, i64* %r12.0.reg2mem, !insn.addr !515
  store i64 %9, i64* %merge.reg2mem, !insn.addr !515
  br i1 %11, label %dec_label_pc_1fd8, label %dec_label_pc_1fe8, !insn.addr !515

dec_label_pc_1fe8:                                ; preds = %dec_label_pc_1fd8, %dec_label_pc_1fb0
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !516

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r12.0.reg2mem, { 1, 0, 2 }
}

define void @test_control_flow_l2() local_unnamed_addr {
dec_label_pc_2020:
  %rdx.4.reg2mem = alloca i64, !insn.addr !517
  %rdx.1.reg2mem = alloca i64, !insn.addr !517
  %rdx.0.reg2mem = alloca i64, !insn.addr !517
  %stack_var_-56 = alloca i64, align 8
  %stack_var_-88 = alloca i64, align 8
  %src_-96 = alloca [8 x i32], align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !518
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_3118 to i8*)), !insn.addr !519
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3140, i64 0, i64 0), i64 12), !insn.addr !520
  store [8 x i32] [i32 0, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], [8 x i32]* %src_-96, align 4, !insn.addr !521
  %3 = getelementptr inbounds [8 x i32], [8 x i32]* %src_-96, i64 0, i64 0, !insn.addr !522
  %4 = load i32, i32* %3, align 4, !insn.addr !522
  %5 = icmp eq i32 %4, 1, !insn.addr !523
  %6 = icmp eq i1 %5, false, !insn.addr !524
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !525
  br label %dec_label_pc_207f, !insn.addr !525

dec_label_pc_2070:                                ; preds = %dec_label_pc_207f
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %7 = add nuw nsw i64 %rdx.0.reload, 1, !insn.addr !526
  %8 = and i64 %7, 4294967295, !insn.addr !526
  %9 = trunc i64 %7 to i32, !insn.addr !527
  %10 = icmp eq i32 %9, ptrtoint (i32* @global_var_3e9 to i32), !insn.addr !527
  store i64 %8, i64* %rdx.0.reg2mem, !insn.addr !528
  br i1 %10, label %dec_label_pc_22b0, label %dec_label_pc_207f, !insn.addr !528

dec_label_pc_207f:                                ; preds = %dec_label_pc_2070, %dec_label_pc_2020
  store i64 0, i64* %rdx.1.reg2mem, !insn.addr !524
  br i1 %6, label %dec_label_pc_2070, label %dec_label_pc_21b0, !insn.addr !524

dec_label_pc_21b0:                                ; preds = %dec_label_pc_22b0, %dec_label_pc_207f
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3523, i64 0, i64 0), i64 %rdx.1.reload), !insn.addr !529
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3541, i64 0, i64 0), i64 4294967295), !insn.addr !530
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3541, i64 0, i64 0), i64 4294967294), !insn.addr !531
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3541, i64 0, i64 0), i64 4), !insn.addr !532
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3160, i64 0, i64 0), i64 10), !insn.addr !533
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3160, i64 0, i64 0), i64 5), !insn.addr !534
  %17 = load i128, i128* @global_var_3670, align 8, !insn.addr !535
  %18 = call i128 @__asm_movdqa(i128 %17), !insn.addr !535
  %19 = call i64 @__asm_movaps(i128 %18), !insn.addr !536
  store i64 %19, i64* %stack_var_-88, align 8, !insn.addr !536
  %20 = load i128, i128* @global_var_3690, align 8, !insn.addr !537
  %21 = call i128 @__asm_movdqa(i128 %20), !insn.addr !537
  %22 = call i64 @__asm_movaps(i128 %21), !insn.addr !538
  %23 = call i128 @__asm_pxor(i128 %21, i128 %21), !insn.addr !539
  %24 = call i64 @__asm_movaps(i128 %23), !insn.addr !540
  store i64 %24, i64* %stack_var_-56, align 8, !insn.addr !540
  %25 = call i64 @__asm_movaps(i128 %23), !insn.addr !541
  %26 = bitcast i64* %stack_var_-56 to i32*, !insn.addr !542
  %27 = bitcast i64* %stack_var_-88 to i32*, !insn.addr !542
  %28 = call i32 @duffs_device(i32* nonnull %26, i32* nonnull %27, i32 8), !insn.addr !542
  %29 = zext i32 %28 to i64, !insn.addr !543
  %30 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_355e, i64 0, i64 0), i64 %29), !insn.addr !544
  %31 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3188, i64 0, i64 0), i64 18), !insn.addr !545
  %32 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_31b0, i64 0, i64 0), i64 30), !insn.addr !546
  store i64 0, i64* %rdx.4.reg2mem, !insn.addr !547
  br label %dec_label_pc_21d8, !insn.addr !547

dec_label_pc_21d8:                                ; preds = %dec_label_pc_21d8, %dec_label_pc_21b0
  %rdx.4.reload = load i64, i64* %rdx.4.reg2mem
  %33 = add nuw nsw i64 %rdx.4.reload, 1, !insn.addr !548
  %34 = and i64 %33, 4294967295, !insn.addr !548
  %35 = trunc i64 %33 to i32, !insn.addr !549
  %36 = icmp eq i32 %35, 101, !insn.addr !549
  store i64 %34, i64* %rdx.4.reg2mem, !insn.addr !550
  br i1 %36, label %dec_label_pc_21e0, label %dec_label_pc_21d8, !insn.addr !550

dec_label_pc_21e0:                                ; preds = %dec_label_pc_21d8
  %37 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_31d0, i64 0, i64 0), i64 %34), !insn.addr !551
  %38 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_31f8, i64 0, i64 0), i64 120), !insn.addr !552
  %39 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3220, i64 0, i64 0), i64 120), !insn.addr !553
  %40 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3240, i64 0, i64 0), i64 3), !insn.addr !554
  %41 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_357b, i64 0, i64 0), i64 10), !insn.addr !555
  %42 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_3268, i64 0, i64 0), i64 10), !insn.addr !556
  %43 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_3268, i64 0, i64 0), i64 120), !insn.addr !557
  %44 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3290, i64 0, i64 0), i64 30), !insn.addr !558
  %45 = call i64 @__readfsqword(i64 40), !insn.addr !559
  %46 = icmp eq i64 %0, %45, !insn.addr !559
  %47 = icmp eq i1 %46, false, !insn.addr !560
  br i1 %47, label %dec_label_pc_22bd, label %dec_label_pc_22aa, !insn.addr !560

dec_label_pc_22aa:                                ; preds = %dec_label_pc_21e0
  ret void, !insn.addr !561

dec_label_pc_22b0:                                ; preds = %dec_label_pc_2070
  store [8 x i32] [i32 1, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], [8 x i32]* %src_-96, align 4, !insn.addr !562
  store i64 %8, i64* %rdx.1.reg2mem, !insn.addr !563
  br label %dec_label_pc_21b0, !insn.addr !563

dec_label_pc_22bd:                                ; preds = %dec_label_pc_21e0
  call void @__stack_chk_fail(), !insn.addr !564
  ret void, !insn.addr !565

; uselistorder directives
  uselistorder i64 %34, { 1, 0 }
  uselistorder i128 %23, { 1, 0 }
  uselistorder i128 %21, { 2, 1, 0 }
  uselistorder [8 x i32]* %src_-96, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.4.reg2mem, { 1, 0, 2 }
  uselistorder i64 30, { 2, 0, 1 }
  uselistorder i64 18, { 1, 0 }
  uselistorder i32 8, { 1, 0 }
  uselistorder i128 (i128, i128)* @__asm_pxor, { 2, 0, 1 }
  uselistorder i128 (i128)* @__asm_movdqa, { 13, 14, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }
  uselistorder i128* @global_var_3670, { 1, 0 }
  uselistorder i64 5, { 3, 0, 4, 5, 1, 2 }
  uselistorder i64 4, { 12, 14, 15, 2, 8, 1, 0, 13, 9, 5, 3, 10, 6, 7, 4, 11 }
  uselistorder i64 12, { 2, 0, 3, 1 }
}

define i64 @non_local_jump(i64 %arg1) local_unnamed_addr {
dec_label_pc_22d0:
  %storemerge.reg2mem = alloca i64, !insn.addr !566
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @jump_buffer to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !567
  %1 = icmp eq i32 %0, 0, !insn.addr !568
  %2 = icmp eq i1 %1, false, !insn.addr !569
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !569
  br i1 %2, label %dec_label_pc_2305, label %dec_label_pc_22f0, !insn.addr !569

dec_label_pc_22f0:                                ; preds = %dec_label_pc_22d0
  %3 = trunc i64 %arg1 to i32, !insn.addr !570
  %4 = icmp slt i32 %3, 0, !insn.addr !570
  br i1 %4, label %dec_label_pc_2328, label %dec_label_pc_22f8, !insn.addr !571

dec_label_pc_22f8:                                ; preds = %dec_label_pc_22f0
  %5 = icmp sgt i32 %3, 100, !insn.addr !572
  br i1 %5, label %dec_label_pc_2317, label %dec_label_pc_22ff, !insn.addr !572

dec_label_pc_22ff:                                ; preds = %dec_label_pc_22f8
  %6 = mul i64 %arg1, 2
  %7 = and i64 %6, 4294967294, !insn.addr !573
  store i64 %7, i64* %storemerge.reg2mem, !insn.addr !573
  br label %dec_label_pc_2305, !insn.addr !573

dec_label_pc_2305:                                ; preds = %dec_label_pc_22d0, %dec_label_pc_22ff
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !574

dec_label_pc_2317:                                ; preds = %dec_label_pc_22f8
  %8 = call i64 @__longjmp_chk(i64* nonnull @jump_buffer, i64 2), !insn.addr !575
  br label %dec_label_pc_2328, !insn.addr !575

dec_label_pc_2328:                                ; preds = %dec_label_pc_2317, %dec_label_pc_22f0
  %9 = call i64 @__longjmp_chk(i64* nonnull @jump_buffer, i64 1), !insn.addr !576
  ret i64 %9, !insn.addr !577

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 (i64*, i64)* @__longjmp_chk, { 1, 0, 2 }
  uselistorder i32 ([1 x %__jmp_buf_tag])* @_setjmp, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2305, { 1, 0 }
}

define i64 @cpp_exception(i64 %arg1) local_unnamed_addr {
dec_label_pc_2340:
  %merge.reg2mem = alloca i64, !insn.addr !578
  %0 = trunc i64 %arg1 to i32, !insn.addr !579
  %1 = icmp slt i32 %0, 0, !insn.addr !579
  store i64 4294967295, i64* %merge.reg2mem, !insn.addr !580
  br i1 %1, label %dec_label_pc_2358, label %dec_label_pc_2348, !insn.addr !580

dec_label_pc_2348:                                ; preds = %dec_label_pc_2340
  %2 = icmp sgt i32 %0, 100, !insn.addr !581
  store i64 4294967294, i64* %merge.reg2mem, !insn.addr !581
  br i1 %2, label %dec_label_pc_2358, label %dec_label_pc_234d, !insn.addr !581

dec_label_pc_234d:                                ; preds = %dec_label_pc_2348
  %3 = mul i64 %arg1, 2, !insn.addr !582
  %4 = and i64 %3, 4294967294, !insn.addr !582
  ret i64 %4, !insn.addr !583

dec_label_pc_2358:                                ; preds = %dec_label_pc_2340, %dec_label_pc_2348
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !584

; uselistorder directives
  uselistorder i64* %merge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2358, { 1, 0 }
}

define i64 @large_jump_table(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2370:
  %stack_var_-104 = alloca i64, align 8
  %0 = call i128 @__asm_movq(i64 4672), !insn.addr !585
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !586
  %2 = call i128 @__asm_movq(i64 4688), !insn.addr !587
  %3 = call i128 @__asm_punpcklqdq(i128 %0, i128 %2), !insn.addr !588
  %4 = call i128 @__asm_movq(i64 4720), !insn.addr !589
  %5 = call i64 @__asm_movaps(i128 %3), !insn.addr !590
  store i64 %5, i64* %stack_var_-104, align 8, !insn.addr !590
  %6 = call i128 @__asm_movq(i64 4704), !insn.addr !591
  %7 = call i128 @__asm_movq(i64 4784), !insn.addr !592
  %8 = call i128 @__asm_punpcklqdq(i128 %6, i128 %4), !insn.addr !593
  %9 = call i64 @__asm_movaps(i128 %8), !insn.addr !594
  %10 = call i128 @__asm_movq(i64 4752), !insn.addr !595
  %11 = call i128 @__asm_movq(i64 4816), !insn.addr !596
  %12 = call i128 @__asm_punpcklqdq(i128 %10, i128 %7), !insn.addr !597
  %13 = call i64 @__asm_movaps(i128 %12), !insn.addr !598
  %14 = call i128 @__asm_movq(i64 4800), !insn.addr !599
  %15 = call i128 @__asm_movq(i64 4848), !insn.addr !600
  %16 = call i128 @__asm_punpcklqdq(i128 %14, i128 %11), !insn.addr !601
  %17 = call i64 @__asm_movaps(i128 %16), !insn.addr !602
  %18 = call i128 @__asm_movq(i64 4832), !insn.addr !603
  %19 = call i128 @__asm_punpcklqdq(i128 %18, i128 %15), !insn.addr !604
  %20 = call i64 @__asm_movaps(i128 %19), !insn.addr !605
  %21 = trunc i64 %arg1 to i32, !insn.addr !606
  %22 = icmp ult i32 %21, 10
  %23 = call i64 @__readfsqword(i64 40)
  %24 = icmp eq i64 %1, %23
  %25 = icmp eq i1 %24, false
  br i1 %22, label %dec_label_pc_2436, label %dec_label_pc_2450, !insn.addr !607

dec_label_pc_2436:                                ; preds = %dec_label_pc_2370
  br i1 %25, label %dec_label_pc_246a, label %dec_label_pc_2446, !insn.addr !608

dec_label_pc_2446:                                ; preds = %dec_label_pc_2436
  %26 = ptrtoint i64* %stack_var_-104 to i64, !insn.addr !609
  %sext = mul i64 %arg1, 4294967296
  %27 = ashr exact i64 %sext, 29, !insn.addr !610
  %28 = add i64 %27, %26, !insn.addr !610
  %29 = inttoptr i64 %28 to i64*, !insn.addr !610
  %30 = load i64, i64* %29, align 8, !insn.addr !610
  ret i64 %30, !insn.addr !611

dec_label_pc_2450:                                ; preds = %dec_label_pc_2370
  br i1 %25, label %dec_label_pc_246a, label %dec_label_pc_2460, !insn.addr !612

dec_label_pc_2460:                                ; preds = %dec_label_pc_2450
  ret i64 4294967295, !insn.addr !613

dec_label_pc_246a:                                ; preds = %dec_label_pc_2450, %dec_label_pc_2436
  call void @__stack_chk_fail(), !insn.addr !614
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !615

; uselistorder directives
  uselistorder i64* %stack_var_-104, { 1, 0 }
  uselistorder i32 10, { 2, 0, 1, 3, 4 }
}

define i64 @conditional_func_ptr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2470:
  %0 = and i64 %arg1, 4294967295, !insn.addr !616
  %1 = trunc i64 %arg1 to i32, !insn.addr !617
  %2 = icmp eq i32 %1, 0, !insn.addr !617
  %spec.select = select i1 %2, i64 %0, i64 4608
  ret i64 %spec.select, !insn.addr !618
}

define i64 @state_machine(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_24a0:
  %merge.reg2mem = alloca i64, !insn.addr !619
  %0 = trunc i64 %arg2 to i32, !insn.addr !620
  %1 = icmp eq i32 %0, 2, !insn.addr !620
  store i64 2, i64* %merge.reg2mem, !insn.addr !621
  br i1 %1, label %dec_label_pc_24e0, label %dec_label_pc_24a9, !insn.addr !621

dec_label_pc_24a9:                                ; preds = %dec_label_pc_24a0
  %2 = icmp sgt i32 %0, 2, !insn.addr !622
  br i1 %2, label %dec_label_pc_24d0, label %dec_label_pc_24ab, !insn.addr !622

dec_label_pc_24ab:                                ; preds = %dec_label_pc_24a9
  %3 = icmp eq i32 %0, 0, !insn.addr !623
  br i1 %3, label %dec_label_pc_2500, label %dec_label_pc_24af, !insn.addr !624

dec_label_pc_24af:                                ; preds = %dec_label_pc_24ab
  %4 = icmp eq i32 %0, 1, !insn.addr !625
  %5 = icmp eq i1 %4, false, !insn.addr !626
  store i64 3, i64* %merge.reg2mem, !insn.addr !626
  br i1 %5, label %dec_label_pc_24e0, label %dec_label_pc_24b4, !insn.addr !626

dec_label_pc_24b4:                                ; preds = %dec_label_pc_24af
  %6 = trunc i64 %arg1 to i32, !insn.addr !627
  %7 = icmp eq i32 %6, 2, !insn.addr !627
  store i64 2, i64* %merge.reg2mem, !insn.addr !628
  br i1 %7, label %dec_label_pc_24e0, label %dec_label_pc_24b9, !insn.addr !628

dec_label_pc_24b9:                                ; preds = %dec_label_pc_24b4
  %8 = icmp eq i32 %6, 99, !insn.addr !629
  %9 = zext i1 %8 to i64, !insn.addr !630
  %10 = select i1 %8, i64 2, i64 1, !insn.addr !631
  %11 = add nuw nsw i64 %10, %9, !insn.addr !631
  ret i64 %11, !insn.addr !632

dec_label_pc_24d0:                                ; preds = %dec_label_pc_24a9
  %12 = icmp eq i32 %0, 3, !insn.addr !633
  %13 = icmp eq i1 %12, false, !insn.addr !634
  store i64 3, i64* %merge.reg2mem, !insn.addr !634
  br i1 %13, label %dec_label_pc_24e0, label %dec_label_pc_24d5, !insn.addr !634

dec_label_pc_24d5:                                ; preds = %dec_label_pc_24d0
  %14 = trunc i64 %arg1 to i32, !insn.addr !635
  %15 = icmp eq i32 %14, 0, !insn.addr !635
  %16 = select i1 %15, i64 0, i64 3, !insn.addr !636
  ret i64 %16, !insn.addr !637

dec_label_pc_24e0:                                ; preds = %dec_label_pc_24af, %dec_label_pc_24d0, %dec_label_pc_24b4, %dec_label_pc_24a0
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !638

dec_label_pc_2500:                                ; preds = %dec_label_pc_24ab
  %17 = trunc i64 %arg1 to i32, !insn.addr !639
  %18 = icmp eq i32 %17, 1, !insn.addr !639
  %19 = zext i1 %18 to i64, !insn.addr !640
  ret i64 %19, !insn.addr !641

; uselistorder directives
  uselistorder i1 %8, { 1, 0 }
  uselistorder i32 %0, { 0, 2, 1, 3, 4 }
  uselistorder i64* %merge.reg2mem, { 0, 2, 4, 1, 3 }
  uselistorder i32 3, { 2, 3, 5, 4, 6, 7, 8, 0, 1, 9, 10, 11 }
  uselistorder i32 2, { 6, 5, 7, 0, 8, 2, 3, 4, 9, 1, 10, 11 }
  uselistorder i64 %arg1, { 1, 2, 0 }
  uselistorder label %dec_label_pc_24e0, { 1, 2, 0, 3 }
}

define i64 @fsm_func_table(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2510:
  %stack_var_-56 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !642
  %1 = call i128 @__asm_movq(i64 4864), !insn.addr !643
  %2 = call i128 @__asm_movq(i64 4880), !insn.addr !644
  %3 = call i128 @__asm_punpcklqdq(i128 %1, i128 %2), !insn.addr !645
  %4 = call i128 @__asm_movq(i64 4944), !insn.addr !646
  %5 = call i64 @__asm_movaps(i128 %3), !insn.addr !647
  store i64 %5, i64* %stack_var_-56, align 8, !insn.addr !647
  %6 = call i128 @__asm_movq(i64 4928), !insn.addr !648
  %7 = call i128 @__asm_punpcklqdq(i128 %6, i128 %4), !insn.addr !649
  %8 = call i64 @__asm_movaps(i128 %7), !insn.addr !650
  %9 = trunc i64 %arg2 to i32, !insn.addr !651
  %10 = icmp ult i32 %9, 4
  %11 = call i64 @__readfsqword(i64 40)
  %12 = icmp eq i64 %0, %11
  %13 = icmp eq i1 %12, false
  br i1 %10, label %dec_label_pc_256c, label %dec_label_pc_2590, !insn.addr !652

dec_label_pc_256c:                                ; preds = %dec_label_pc_2510
  br i1 %13, label %dec_label_pc_25aa, label %dec_label_pc_257c, !insn.addr !653

dec_label_pc_257c:                                ; preds = %dec_label_pc_256c
  %14 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !654
  %sext = mul i64 %arg2, 4294967296
  %15 = ashr exact i64 %sext, 29, !insn.addr !655
  %16 = add i64 %15, %14, !insn.addr !655
  %17 = inttoptr i64 %16 to i64*, !insn.addr !655
  %18 = load i64, i64* %17, align 8, !insn.addr !655
  ret i64 %18, !insn.addr !656

dec_label_pc_2590:                                ; preds = %dec_label_pc_2510
  br i1 %13, label %dec_label_pc_25aa, label %dec_label_pc_25a0, !insn.addr !657

dec_label_pc_25a0:                                ; preds = %dec_label_pc_2590
  ret i64 3, !insn.addr !658

dec_label_pc_25aa:                                ; preds = %dec_label_pc_2590, %dec_label_pc_256c
  call void @__stack_chk_fail(), !insn.addr !659
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !660

; uselistorder directives
  uselistorder i64* %stack_var_-56, { 1, 0 }
  uselistorder i64 3, { 6, 8, 1, 0, 14, 9, 10, 11, 2, 3, 12, 4, 7, 13, 5 }
  uselistorder i64 29, { 2, 0, 1 }
  uselistorder i64 4294967296, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 15, 16, 10, 11, 12, 13, 14 }
}

define i64 @computed_goto(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_25b0:
  %merge.reg2mem = alloca i64, !insn.addr !661
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !662
  %1 = call i128 @__asm_movq(i64 9824), !insn.addr !663
  %2 = call i128 @__asm_movq(i64 9808), !insn.addr !664
  %3 = call i128 @__asm_punpcklqdq(i128 %1, i128 %2), !insn.addr !665
  %4 = call i128 @__asm_movq(i64 9752), !insn.addr !666
  %5 = call i64 @__asm_movaps(i128 %3), !insn.addr !667
  %6 = call i128 @__asm_movq(i64 9792), !insn.addr !668
  %7 = call i128 @__asm_punpcklqdq(i128 %6, i128 %4), !insn.addr !669
  %8 = call i64 @__asm_movaps(i128 %7), !insn.addr !670
  %9 = trunc i64 %arg2 to i32, !insn.addr !671
  %10 = icmp ult i32 %9, 4
  store i64 9752, i64* %merge.reg2mem, !insn.addr !672
  br i1 %10, label %dec_label_pc_260c, label %dec_label_pc_2670, !insn.addr !672

dec_label_pc_260c:                                ; preds = %dec_label_pc_2670, %dec_label_pc_25b0
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !673

dec_label_pc_2670:                                ; preds = %dec_label_pc_25b0
  %11 = call i64 @__readfsqword(i64 40), !insn.addr !674
  %12 = icmp eq i64 %0, %11, !insn.addr !674
  %13 = icmp eq i1 %12, false, !insn.addr !675
  store i64 4294967295, i64* %merge.reg2mem, !insn.addr !675
  br i1 %13, label %dec_label_pc_2677, label %dec_label_pc_260c, !insn.addr !675

dec_label_pc_2677:                                ; preds = %dec_label_pc_2670
  call void @__stack_chk_fail(), !insn.addr !676
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !677

; uselistorder directives
  uselistorder i64* %merge.reg2mem, { 1, 0, 2 }
  uselistorder i64 ptrtoint (i32* @0 to i64), { 1, 2, 3, 4, 0 }
  uselistorder void ()* @__stack_chk_fail, { 4, 0, 1, 3, 2, 5 }
  uselistorder i1 false, { 3, 4, 5, 6, 7, 29, 30, 31, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 0, 19, 20, 21, 22, 23, 24, 1, 25, 2, 28, 26, 27 }
  uselistorder i32 4, { 1, 2, 0, 3 }
  uselistorder i64 (i128)* @__asm_movaps, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 10, 11, 12, 13, 9 }
}

define i64 @obfuscated_cf(i64 %arg1) local_unnamed_addr {
dec_label_pc_2680:
  %0 = mul i64 %arg1, 2, !insn.addr !678
  %1 = and i64 %0, 4294967294, !insn.addr !678
  ret i64 %1, !insn.addr !679
}

define i64 @opaque_predicate(i64 %arg1) local_unnamed_addr {
dec_label_pc_2690:
  %0 = mul i64 %arg1, 2, !insn.addr !680
  %1 = and i64 %0, 4294967294, !insn.addr !680
  ret i64 %1, !insn.addr !681

; uselistorder directives
  uselistorder i64 4294967294, { 6, 7, 8, 0, 2, 14, 9, 10, 1, 11, 3, 4, 5, 12, 13 }
}

define i64 @overlapped_code(i64 %arg1) local_unnamed_addr {
dec_label_pc_26a0:
  %0 = urem i64 %arg1, 2
  %1 = icmp eq i64 %0, 0, !insn.addr !682
  br i1 %1, label %dec_label_pc_26b0, label %dec_label_pc_26aa, !insn.addr !683

dec_label_pc_26aa:                                ; preds = %dec_label_pc_26a0
  %2 = mul i64 %arg1, 2, !insn.addr !684
  %3 = add i64 %arg1, 1, !insn.addr !684
  %4 = add i64 %3, %2, !insn.addr !684
  %5 = and i64 %4, 4294967295, !insn.addr !684
  ret i64 %5, !insn.addr !685

dec_label_pc_26b0:                                ; preds = %dec_label_pc_26a0
  %6 = trunc i64 %arg1 to i32, !insn.addr !686
  %7 = icmp slt i32 %6, 0
  %8 = zext i1 %7 to i32, !insn.addr !687
  %9 = add i32 %8, %6, !insn.addr !688
  %10 = ashr i32 %9, 1, !insn.addr !689
  %11 = zext i32 %10 to i64, !insn.addr !689
  ret i64 %11, !insn.addr !690

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i32 0, { 2, 10, 11, 12, 13, 34, 35, 6, 3, 4, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 5, 27, 28, 29, 30, 7, 8, 31, 0, 32, 1, 33, 9 }
  uselistorder i64 %arg1, { 2, 3, 0, 1 }
}

define void @test_control_flow_l3() local_unnamed_addr {
dec_label_pc_26c0:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_32b8 to i8*)), !insn.addr !691
  %1 = call i64 @non_local_jump.constprop.0(), !insn.addr !692
  %2 = and i64 %1, 4294967295, !insn.addr !693
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_32e0, i64 0, i64 0), i64 %2), !insn.addr !694
  %4 = call i64 @non_local_jump(i64 4294967291), !insn.addr !695
  %5 = and i64 %4, 4294967295, !insn.addr !696
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_32e0, i64 0, i64 0), i64 %5), !insn.addr !697
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3599, i64 0, i64 0), i64 10), !insn.addr !698
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3599, i64 0, i64 0), i64 4294967295), !insn.addr !699
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3300, i64 0, i64 0), i64 15), !insn.addr !700
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_3328, i64 0, i64 0), i64 10), !insn.addr !701
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_35b7, i64 0, i64 0), i64 1), !insn.addr !702
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3350, i64 0, i64 0), i64 2), !insn.addr !703
  %13 = call i64 @computed_goto.constprop.0(), !insn.addr !704
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_35d5, i64 0, i64 0)), !insn.addr !705
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_35f3, i64 0, i64 0), i64 10), !insn.addr !706
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3370, i64 0, i64 0), i64 10), !insn.addr !707
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3398, i64 0, i64 0), i64 16), !insn.addr !708
  ret void, !insn.addr !708

; uselistorder directives
  uselistorder i64 16, { 1, 0 }
  uselistorder i64 2, { 35, 11, 23, 12, 13, 30, 1, 0, 14, 36, 15, 24, 31, 25, 32, 26, 2, 28, 4, 3, 16, 27, 17, 5, 7, 6, 8, 37, 18, 33, 9, 29, 19, 10, 20, 22, 34, 21 }
  uselistorder i64 1, { 38, 41, 19, 39, 21, 20, 24, 23, 22, 25, 26, 0, 1, 2, 3, 27, 28, 4, 5, 6, 7, 40, 29, 9, 10, 8, 30, 31, 32, 11, 12, 13, 33, 34, 35, 14, 18, 36, 15, 37, 16, 17 }
  uselistorder i64 10, { 6, 7, 8, 9, 10, 11, 12, 2, 0, 3, 13, 14, 4, 1, 5 }
  uselistorder i64 4294967291, { 1, 0, 2 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 57 }
  uselistorder i64 4294967295, { 83, 12, 13, 14, 0, 15, 7, 1, 2, 17, 84, 16, 18, 19, 8, 22, 20, 23, 21, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 9, 33, 34, 35, 36, 37, 38, 39, 40, 41, 3, 42, 43, 4, 85, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 70, 69, 71, 72, 73, 10, 5, 6, 74, 75, 76, 77, 78, 79, 80, 81, 82 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
  uselistorder i64 0, { 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 0, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 1, 2, 62, 63, 90, 91, 4, 3, 92, 33, 93, 94, 5, 6, 7, 95, 96, 97, 30, 8, 13, 11, 9, 10, 12, 14, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 120, 118, 119, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 16, 15, 17, 19, 20, 141, 18, 21, 22, 142, 143, 26, 24, 25, 23, 32, 27, 144, 28, 146, 31, 29, 147, 34, 35, 36, 37, 38, 39, 145 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_27fc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !709

; uselistorder directives
  uselistorder i32 1, { 5, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 179, 6, 172, 100, 101, 7, 173, 8, 9, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 102, 121, 176, 175, 174, 12, 11, 10, 122, 15, 14, 13, 177, 180, 86, 123, 181, 124, 125, 24, 23, 22, 21, 20, 19, 18, 17, 16, 126, 27, 26, 25, 29, 28, 4, 37, 36, 35, 34, 33, 32, 31, 30, 127, 40, 39, 38, 3, 128, 129, 41, 182, 130, 42, 84, 47, 46, 45, 44, 43, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 87, 158, 50, 49, 48, 159, 51, 160, 57, 56, 55, 54, 53, 52, 1, 58, 161, 61, 60, 59, 63, 62, 66, 65, 64, 162, 72, 71, 70, 69, 68, 67, 0, 163, 73, 74, 85, 75, 164, 165, 166, 167, 76, 168, 169, 77, 170, 78, 79, 171, 82, 81, 80, 2, 178, 83 }
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

declare i128 @__asm_movdqa(i128) local_unnamed_addr

declare i64 @__asm_movaps(i128) local_unnamed_addr

declare i128 @__asm_pxor(i128, i128) local_unnamed_addr

declare i128 @__asm_paddd(i128, i128) local_unnamed_addr

declare i128 @__asm_psrldq(i128, i8) local_unnamed_addr

declare i32 @__asm_movd(i128) local_unnamed_addr

declare i128 @__asm_pand(i128, i128) local_unnamed_addr

declare i128 @__asm_pcmpeqd(i128, i128) local_unnamed_addr

declare i128 @__asm_pandn(i128, i128) local_unnamed_addr

declare i128 @__asm_movq(i64) local_unnamed_addr

declare i128 @__asm_punpcklqdq(i128, i128) local_unnamed_addr

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
!88 = !{i64 4981}
!89 = !{i64 5003}
!90 = !{i64 5012}
!91 = !{i64 5024}
!92 = !{i64 5027}
!93 = !{i64 5044}
!94 = !{i64 5047}
!95 = !{i64 5049}
!96 = !{i64 5051}
!97 = !{i64 5063}
!98 = !{i64 5060}
!99 = !{i64 5065}
!100 = !{i64 5068}
!101 = !{i64 5078}
!102 = !{i64 5080}
!103 = !{i64 5083}
!104 = !{i64 5088}
!105 = !{i64 5094}
!106 = !{i64 5096}
!107 = !{i64 5101}
!108 = !{i64 5098}
!109 = !{i64 5103}
!110 = !{i64 5106}
!111 = !{i64 5120}
!112 = !{i64 5126}
!113 = !{i64 5128}
!114 = !{i64 5135}
!115 = !{i64 5137}
!116 = !{i64 5139}
!117 = !{i64 5141}
!118 = !{i64 5143}
!119 = !{i64 5145}
!120 = !{i64 5149}
!121 = !{i64 5152}
!122 = !{i64 5155}
!123 = !{i64 5158}
!124 = !{i64 5173}
!125 = !{i64 5200}
!126 = !{i64 5209}
!127 = !{i64 5218}
!128 = !{i64 5231}
!129 = !{i64 5234}
!130 = !{i64 5245}
!131 = !{i64 5248}
!132 = !{i64 5257}
!133 = !{i64 5260}
!134 = !{i64 5262}
!135 = !{i64 5265}
!136 = !{i64 5268}
!137 = !{i64 5280}
!138 = !{i64 5289}
!139 = !{i64 5292}
!140 = !{i64 5294}
!141 = !{i64 5303}
!142 = !{i64 5306}
!143 = !{i64 5321}
!144 = !{i64 5331}
!145 = !{i64 5348}
!146 = !{i64 5361}
!147 = !{i64 5380}
!148 = !{i64 5392}
!149 = !{i64 5395}
!150 = !{i64 5398}
!151 = !{i64 5402}
!152 = !{i64 5413}
!153 = !{i64 5416}
!154 = !{i64 5418}
!155 = !{i64 5429}
!156 = !{i64 5431}
!157 = !{i64 5440}
!158 = !{i64 5446}
!159 = !{i64 5448}
!160 = !{i64 5457}
!161 = !{i64 5460}
!162 = !{i64 5468}
!163 = !{i64 5478}
!164 = !{i64 5482}
!165 = !{i64 5490}
!166 = !{i64 5493}
!167 = !{i64 5496}
!168 = !{i64 5500}
!169 = !{i64 5503}
!170 = !{i64 5507}
!171 = !{i64 5511}
!172 = !{i64 5513}
!173 = !{i64 5515}
!174 = !{i64 5521}
!175 = !{i64 5526}
!176 = !{i64 5529}
!177 = !{i64 5533}
!178 = !{i64 5537}
!179 = !{i64 5542}
!180 = !{i64 5546}
!181 = !{i64 5550}
!182 = !{i64 5553}
!183 = !{i64 5444}
!184 = !{i64 5555}
!185 = !{i64 5558}
!186 = !{i64 5562}
!187 = !{i64 5564}
!188 = !{i64 5566}
!189 = !{i64 5571}
!190 = !{i64 5573}
!191 = !{i64 5575}
!192 = !{i64 5580}
!193 = !{i64 5582}
!194 = !{i64 5584}
!195 = !{i64 5589}
!196 = !{i64 5591}
!197 = !{i64 5593}
!198 = !{i64 5598}
!199 = !{i64 5600}
!200 = !{i64 5602}
!201 = !{i64 5607}
!202 = !{i64 5609}
!203 = !{i64 5611}
!204 = !{i64 5616}
!205 = !{i64 5618}
!206 = !{i64 5620}
!207 = !{i64 5625}
!208 = !{i64 5627}
!209 = !{i64 5629}
!210 = !{i64 5635}
!211 = !{i64 5637}
!212 = !{i64 5632}
!213 = !{i64 5640}
!214 = !{i64 5650}
!215 = !{i64 5664}
!216 = !{i64 5668}
!217 = !{i64 5670}
!218 = !{i64 5680}
!219 = !{i64 5683}
!220 = !{i64 5685}
!221 = !{i64 5696}
!222 = !{i64 5699}
!223 = !{i64 5703}
!224 = !{i64 5705}
!225 = !{i64 5707}
!226 = !{i64 5712}
!227 = !{i64 5744}
!228 = !{i64 5751}
!229 = !{i64 5760}
!230 = !{i64 5763}
!231 = !{i64 5765}
!232 = !{i64 5776}
!233 = !{i64 5779}
!234 = !{i64 5783}
!235 = !{i64 5785}
!236 = !{i64 5787}
!237 = !{i64 5792}
!238 = !{i64 5808}
!239 = !{i64 5812}
!240 = !{i64 5814}
!241 = !{i64 5824}
!242 = !{i64 5829}
!243 = !{i64 5826}
!244 = !{i64 5832}
!245 = !{i64 5835}
!246 = !{i64 5837}
!247 = !{i64 5839}
!248 = !{i64 5856}
!249 = !{i64 5860}
!250 = !{i64 5882}
!251 = !{i64 5885}
!252 = !{i64 5888}
!253 = !{i64 5892}
!254 = !{i64 5898}
!255 = !{i64 5936}
!256 = !{i64 5940}
!257 = !{i64 5942}
!258 = !{i64 5951}
!259 = !{i64 5954}
!260 = !{i64 5962}
!261 = !{i64 5966}
!262 = !{i64 5976}
!263 = !{i64 5984}
!264 = !{i64 5992}
!265 = !{i64 5995}
!266 = !{i64 5999}
!267 = !{i64 6000}
!268 = !{i64 6004}
!269 = !{i64 6007}
!270 = !{i64 6011}
!271 = !{i64 6015}
!272 = !{i64 6019}
!273 = !{i64 6023}
!274 = !{i64 6027}
!275 = !{i64 6031}
!276 = !{i64 6033}
!277 = !{i64 6035}
!278 = !{i64 6041}
!279 = !{i64 6046}
!280 = !{i64 6049}
!281 = !{i64 6056}
!282 = !{i64 6060}
!283 = !{i64 6065}
!284 = !{i64 6069}
!285 = !{i64 6073}
!286 = !{i64 6075}
!287 = !{i64 6053}
!288 = !{i64 6082}
!289 = !{i64 6084}
!290 = !{i64 6089}
!291 = !{i64 6097}
!292 = !{i64 6105}
!293 = !{i64 6107}
!294 = !{i64 6113}
!295 = !{i64 6116}
!296 = !{i64 6121}
!297 = !{i64 6132}
!298 = !{i64 6137}
!299 = !{i64 6145}
!300 = !{i64 6148}
!301 = !{i64 6154}
!302 = !{i64 6176}
!303 = !{i64 6180}
!304 = !{i64 6182}
!305 = !{i64 6184}
!306 = !{i64 6187}
!307 = !{i64 6190}
!308 = !{i64 6192}
!309 = !{i64 6202}
!310 = !{i64 6204}
!311 = !{i64 6231}
!312 = !{i64 6224}
!313 = !{i64 6228}
!314 = !{i64 6233}
!315 = !{i64 6238}
!316 = !{i64 6244}
!317 = !{i64 6248}
!318 = !{i64 6251}
!319 = !{i64 6275}
!320 = !{i64 6299}
!321 = !{i64 6319}
!322 = !{i64 6346}
!323 = !{i64 6366}
!324 = !{i64 6390}
!325 = !{i64 6410}
!326 = !{i64 6430}
!327 = !{i64 6454}
!328 = !{i64 6478}
!329 = !{i64 6502}
!330 = !{i64 6526}
!331 = !{i64 6550}
!332 = !{i64 6574}
!333 = !{i64 6595}
!334 = !{i64 6619}
!335 = !{i64 6643}
!336 = !{i64 6667}
!337 = !{i64 6691}
!338 = !{i64 6715}
!339 = !{i64 6735}
!340 = !{i64 6762}
!341 = !{i64 6786}
!342 = !{i64 6806}
!343 = !{i64 6833}
!344 = !{i64 6857}
!345 = !{i64 6877}
!346 = !{i64 6898}
!347 = !{i64 6912}
!348 = !{i64 6916}
!349 = !{i64 6996}
!350 = !{i64 7001}
!351 = !{i64 7004}
!352 = !{i64 7007}
!353 = !{i64 7029}
!354 = !{i64 7038}
!355 = !{i64 7045}
!356 = !{i64 7052}
!357 = !{i64 7059}
!358 = !{i64 7066}
!359 = !{i64 7088}
!360 = !{i64 7116}
!361 = !{i64 7119}
!362 = !{i64 7094}
!363 = !{i64 7104}
!364 = !{i64 7107}
!365 = !{i64 7112}
!366 = !{i64 7121}
!367 = !{i64 7122}
!368 = !{i64 7128}
!369 = !{i64 7136}
!370 = !{i64 7140}
!371 = !{i64 7142}
!372 = !{i64 7144}
!373 = !{i64 7150}
!374 = !{i64 7152}
!375 = !{i64 7155}
!376 = !{i64 7158}
!377 = !{i64 7161}
!378 = !{i64 7173}
!379 = !{i64 7188}
!380 = !{i64 7190}
!381 = !{i64 7192}
!382 = !{i64 7195}
!383 = !{i64 7202}
!384 = !{i64 7204}
!385 = !{i64 7211}
!386 = !{i64 7214}
!387 = !{i64 7231}
!388 = !{i64 7263}
!389 = !{i64 7378}
!390 = !{i64 7414}
!391 = !{i64 7424}
!392 = !{i64 7428}
!393 = !{i64 7430}
!394 = !{i64 7432}
!395 = !{i64 7438}
!396 = !{i64 7440}
!397 = !{i64 7446}
!398 = !{i64 7448}
!399 = !{i64 7454}
!400 = !{i64 7456}
!401 = !{i64 7462}
!402 = !{i64 7464}
!403 = !{i64 7470}
!404 = !{i64 7472}
!405 = !{i64 7478}
!406 = !{i64 7480}
!407 = !{i64 7486}
!408 = !{i64 7488}
!409 = !{i64 7494}
!410 = !{i64 7496}
!411 = !{i64 7502}
!412 = !{i64 7517}
!413 = !{i64 7519}
!414 = !{i64 7521}
!415 = !{i64 7536}
!416 = !{i64 7538}
!417 = !{i64 7648}
!418 = !{i64 7655}
!419 = !{i64 7657}
!420 = !{i64 7705}
!421 = !{i64 7680}
!422 = !{i64 7688}
!423 = !{i64 7683}
!424 = !{i64 7692}
!425 = !{i64 7698}
!426 = !{i64 7700}
!427 = !{i64 7720}
!428 = !{i64 7723}
!429 = !{i64 7728}
!430 = !{i64 7754}
!431 = !{i64 7734}
!432 = !{i64 7744}
!433 = !{i64 7747}
!434 = !{i64 7750}
!435 = !{i64 7756}
!436 = !{i64 7758}
!437 = !{i64 7760}
!438 = !{i64 7764}
!439 = !{i64 7769}
!440 = !{i64 7776}
!441 = !{i64 7779}
!442 = !{i64 7782}
!443 = !{i64 7785}
!444 = !{i64 7787}
!445 = !{i64 7792}
!446 = !{i64 7796}
!447 = !{i64 7801}
!448 = !{i64 7803}
!449 = !{i64 7805}
!450 = !{i64 7809}
!451 = !{i64 7811}
!452 = !{i64 7814}
!453 = !{i64 7817}
!454 = !{i64 7819}
!455 = !{i64 7825}
!456 = !{i64 7827}
!457 = !{i64 7829}
!458 = !{i64 7831}
!459 = !{i64 7834}
!460 = !{i64 7837}
!461 = !{i64 7841}
!462 = !{i64 7847}
!463 = !{i64 7850}
!464 = !{i64 7852}
!465 = !{i64 7879}
!466 = !{i64 7856}
!467 = !{i64 7864}
!468 = !{i64 7867}
!469 = !{i64 7872}
!470 = !{i64 7874}
!471 = !{i64 7877}
!472 = !{i64 7883}
!473 = !{i64 7886}
!474 = !{i64 7888}
!475 = !{i64 7894}
!476 = !{i64 7896}
!477 = !{i64 7898}
!478 = !{i64 7900}
!479 = !{i64 7902}
!480 = !{i64 7905}
!481 = !{i64 7907}
!482 = !{i64 7911}
!483 = !{i64 7914}
!484 = !{i64 7918}
!485 = !{i64 7921}
!486 = !{i64 7928}
!487 = !{i64 7931}
!488 = !{i64 7945}
!489 = !{i64 7970}
!490 = !{i64 7991}
!491 = !{i64 8008}
!492 = !{i64 8013}
!493 = !{i64 8017}
!494 = !{i64 8021}
!495 = !{i64 8024}
!496 = !{i64 8040}
!497 = !{i64 7956}
!498 = !{i64 8042}
!499 = !{i64 8052}
!500 = !{i64 8078}
!501 = !{i64 8089}
!502 = !{i64 8090}
!503 = !{i64 8095}
!504 = !{i64 8100}
!505 = !{i64 8103}
!506 = !{i64 8112}
!507 = !{i64 8126}
!508 = !{i64 8128}
!509 = !{i64 8130}
!510 = !{i64 8142}
!511 = !{i64 8147}
!512 = !{i64 8154}
!513 = !{i64 8160}
!514 = !{i64 8163}
!515 = !{i64 8166}
!516 = !{i64 8181}
!517 = !{i64 8224}
!518 = !{i64 8240}
!519 = !{i64 8256}
!520 = !{i64 8280}
!521 = !{i64 8285}
!522 = !{i64 8319}
!523 = !{i64 8323}
!524 = !{i64 8326}
!525 = !{i64 8295}
!526 = !{i64 8304}
!527 = !{i64 8307}
!528 = !{i64 8313}
!529 = !{i64 8349}
!530 = !{i64 8369}
!531 = !{i64 8389}
!532 = !{i64 8416}
!533 = !{i64 8436}
!534 = !{i64 8456}
!535 = !{i64 8471}
!536 = !{i64 8484}
!537 = !{i64 8489}
!538 = !{i64 8497}
!539 = !{i64 8502}
!540 = !{i64 8506}
!541 = !{i64 8511}
!542 = !{i64 8516}
!543 = !{i64 8533}
!544 = !{i64 8537}
!545 = !{i64 8561}
!546 = !{i64 8638}
!547 = !{i64 8653}
!548 = !{i64 8656}
!549 = !{i64 8659}
!550 = !{i64 8662}
!551 = !{i64 8686}
!552 = !{i64 8717}
!553 = !{i64 8741}
!554 = !{i64 8765}
!555 = !{i64 8789}
!556 = !{i64 8809}
!557 = !{i64 8829}
!558 = !{i64 8853}
!559 = !{i64 8863}
!560 = !{i64 8872}
!561 = !{i64 8879}
!562 = !{i64 8880}
!563 = !{i64 8888}
!564 = !{i64 8893}
!565 = !{i64 8909}
!566 = !{i64 8912}
!567 = !{i64 8931}
!568 = !{i64 8940}
!569 = !{i64 8942}
!570 = !{i64 8948}
!571 = !{i64 8950}
!572 = !{i64 8957}
!573 = !{i64 8963}
!574 = !{i64 8969}
!575 = !{i64 8995}
!576 = !{i64 9012}
!577 = !{i64 9017}
!578 = !{i64 9024}
!579 = !{i64 9028}
!580 = !{i64 9030}
!581 = !{i64 9035}
!582 = !{i64 9037}
!583 = !{i64 9040}
!584 = !{i64 9053}
!585 = !{i64 9094}
!586 = !{i64 9106}
!587 = !{i64 9127}
!588 = !{i64 9139}
!589 = !{i64 9143}
!590 = !{i64 9155}
!591 = !{i64 9159}
!592 = !{i64 9171}
!593 = !{i64 9176}
!594 = !{i64 9187}
!595 = !{i64 9192}
!596 = !{i64 9197}
!597 = !{i64 9209}
!598 = !{i64 9220}
!599 = !{i64 9225}
!600 = !{i64 9230}
!601 = !{i64 9242}
!602 = !{i64 9246}
!603 = !{i64 9251}
!604 = !{i64 9256}
!605 = !{i64 9260}
!606 = !{i64 9265}
!607 = !{i64 9268}
!608 = !{i64 9284}
!609 = !{i64 9076}
!610 = !{i64 9286}
!611 = !{i64 9294}
!612 = !{i64 9310}
!613 = !{i64 9321}
!614 = !{i64 9322}
!615 = !{i64 9327}
!616 = !{i64 9332}
!617 = !{i64 9343}
!618 = !{i64 9368}
!619 = !{i64 9376}
!620 = !{i64 9380}
!621 = !{i64 9383}
!622 = !{i64 9385}
!623 = !{i64 9387}
!624 = !{i64 9389}
!625 = !{i64 9391}
!626 = !{i64 9394}
!627 = !{i64 9396}
!628 = !{i64 9399}
!629 = !{i64 9403}
!630 = !{i64 9406}
!631 = !{i64 9409}
!632 = !{i64 9413}
!633 = !{i64 9424}
!634 = !{i64 9427}
!635 = !{i64 9429}
!636 = !{i64 9433}
!637 = !{i64 9436}
!638 = !{i64 9445}
!639 = !{i64 9474}
!640 = !{i64 9477}
!641 = !{i64 9480}
!642 = !{i64 9510}
!643 = !{i64 9531}
!644 = !{i64 9536}
!645 = !{i64 9548}
!646 = !{i64 9552}
!647 = !{i64 9557}
!648 = !{i64 9561}
!649 = !{i64 9566}
!650 = !{i64 9570}
!651 = !{i64 9575}
!652 = !{i64 9578}
!653 = !{i64 9594}
!654 = !{i64 9492}
!655 = !{i64 9599}
!656 = !{i64 9607}
!657 = !{i64 9630}
!658 = !{i64 9641}
!659 = !{i64 9642}
!660 = !{i64 9647}
!661 = !{i64 9648}
!662 = !{i64 9670}
!663 = !{i64 9691}
!664 = !{i64 9696}
!665 = !{i64 9708}
!666 = !{i64 9712}
!667 = !{i64 9717}
!668 = !{i64 9721}
!669 = !{i64 9726}
!670 = !{i64 9730}
!671 = !{i64 9735}
!672 = !{i64 9738}
!673 = !{i64 9743}
!674 = !{i64 9766}
!675 = !{i64 9775}
!676 = !{i64 9847}
!677 = !{i64 9852}
!678 = !{i64 9860}
!679 = !{i64 9863}
!680 = !{i64 9876}
!681 = !{i64 9879}
!682 = !{i64 9892}
!683 = !{i64 9896}
!684 = !{i64 9898}
!685 = !{i64 9902}
!686 = !{i64 9904}
!687 = !{i64 9906}
!688 = !{i64 9909}
!689 = !{i64 9911}
!690 = !{i64 9913}
!691 = !{i64 9939}
!692 = !{i64 9944}
!693 = !{i64 9957}
!694 = !{i64 9961}
!695 = !{i64 9971}
!696 = !{i64 9991}
!697 = !{i64 9995}
!698 = !{i64 10015}
!699 = !{i64 10035}
!700 = !{i64 10059}
!701 = !{i64 10083}
!702 = !{i64 10107}
!703 = !{i64 10131}
!704 = !{i64 10148}
!705 = !{i64 10157}
!706 = !{i64 10181}
!707 = !{i64 10205}
!708 = !{i64 10230}
!709 = !{i64 10248}
