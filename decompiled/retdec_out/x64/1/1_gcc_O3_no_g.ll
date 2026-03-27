source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@global_var_6040 = global i64 0
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

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_10e0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = ptrtoint i8** %argv to i64
  %4 = call i64 @test_control_flow_l1(), !insn.addr !12
  %5 = call i64 @test_control_flow_l2(i64 %argc, i64 %3, i64 %1, i64 %2), !insn.addr !13
  %6 = call i64 @test_control_flow_l3(), !insn.addr !14
  ret i64 0, !insn.addr !15

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
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

define i64 @triple_value(i64 %arg1) local_unnamed_addr {
dec_label_pc_1230:
  %0 = mul i64 %arg1, 3, !insn.addr !40
  %1 = and i64 %0, 4294967295, !insn.addr !40
  ret i64 %1, !insn.addr !41
}

define i64 @op_add(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1240:
  %0 = add i64 %arg2, %arg1, !insn.addr !42
  %1 = and i64 %0, 4294967295, !insn.addr !42
  ret i64 %1, !insn.addr !43
}

define i64 @op_sub(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1250:
  %0 = sub i64 %arg1, %arg2, !insn.addr !44
  %1 = and i64 %0, 4294967295, !insn.addr !44
  ret i64 %1, !insn.addr !45
}

define i64 @op_mul(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1260:
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !46
  %sext1 = mul i64 %arg2, 4294967296
  %1 = ashr exact i64 %sext1, 32, !insn.addr !46
  %2 = mul nsw i64 %1, %0, !insn.addr !46
  %3 = and i64 %2, 4294967295, !insn.addr !46
  ret i64 %3, !insn.addr !47
}

define i64 @op_div(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1270:
  %r8.0.in.reg2mem = alloca i64, !insn.addr !48
  %0 = trunc i64 %arg2 to i32, !insn.addr !49
  %1 = icmp eq i32 %0, 0, !insn.addr !49
  store i64 %arg2, i64* %r8.0.in.reg2mem, !insn.addr !50
  br i1 %1, label %dec_label_pc_1283, label %dec_label_pc_127b, !insn.addr !50

dec_label_pc_127b:                                ; preds = %dec_label_pc_1270
  %2 = trunc i64 %arg1 to i32, !insn.addr !51
  %3 = ashr i32 %2, 31, !insn.addr !51
  %4 = and i64 %arg1, 4294967295, !insn.addr !52
  %5 = zext i32 %3 to i64, !insn.addr !52
  %6 = mul i64 %5, 4294967296, !insn.addr !52
  %7 = or i64 %6, %4, !insn.addr !52
  %8 = and i64 %arg2, 4294967295, !insn.addr !52
  %9 = sdiv i64 %7, %8, !insn.addr !52
  store i64 %9, i64* %r8.0.in.reg2mem, !insn.addr !53
  br label %dec_label_pc_1283, !insn.addr !53

dec_label_pc_1283:                                ; preds = %dec_label_pc_127b, %dec_label_pc_1270
  %r8.0.in.reload = load i64, i64* %r8.0.in.reg2mem
  %r8.0 = and i64 %r8.0.in.reload, 4294967295
  ret i64 %r8.0, !insn.addr !54

; uselistorder directives
  uselistorder i64 %arg2, { 1, 0, 2 }
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @op_mod(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1290:
  %r8.0.in.reg2mem = alloca i64, !insn.addr !55
  %0 = trunc i64 %arg2 to i32, !insn.addr !56
  %1 = icmp eq i32 %0, 0, !insn.addr !56
  store i64 %arg2, i64* %r8.0.in.reg2mem, !insn.addr !57
  br i1 %1, label %dec_label_pc_12a3, label %dec_label_pc_129d, !insn.addr !57

dec_label_pc_129d:                                ; preds = %dec_label_pc_1290
  %2 = and i64 %arg1, 4294967295, !insn.addr !58
  %3 = trunc i64 %arg1 to i32, !insn.addr !59
  %4 = ashr i32 %3, 31, !insn.addr !59
  %5 = zext i32 %4 to i64, !insn.addr !60
  %6 = mul i64 %5, 4294967296, !insn.addr !60
  %7 = or i64 %6, %2, !insn.addr !60
  %8 = and i64 %arg2, 4294967295, !insn.addr !60
  %9 = srem i64 %7, %8, !insn.addr !60
  store i64 %9, i64* %r8.0.in.reg2mem, !insn.addr !61
  br label %dec_label_pc_12a3, !insn.addr !61

dec_label_pc_12a3:                                ; preds = %dec_label_pc_129d, %dec_label_pc_1290
  %r8.0.in.reload = load i64, i64* %r8.0.in.reg2mem
  %r8.0 = and i64 %r8.0.in.reload, 4294967295
  ret i64 %r8.0, !insn.addr !62

; uselistorder directives
  uselistorder i64 %arg2, { 1, 0, 2 }
}

define i64 @op_and(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_12b0:
  %0 = and i64 %arg1, 4294967295
  %1 = and i64 %0, %arg2, !insn.addr !63
  ret i64 %1, !insn.addr !64
}

define i64 @op_or(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_12c0:
  %0 = or i64 %arg2, %arg1
  %1 = and i64 %0, 4294967295, !insn.addr !65
  ret i64 %1, !insn.addr !66
}

define i64 @op_xor(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_12d0:
  %0 = xor i64 %arg2, %arg1
  %1 = and i64 %0, 4294967295, !insn.addr !67
  ret i64 %1, !insn.addr !68
}

define i64 @op_shl(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_12e0:
  %0 = and i64 %arg1, 4294967295, !insn.addr !69
  %1 = trunc i64 %arg2 to i32, !insn.addr !70
  %2 = urem i32 %1, 32, !insn.addr !70
  %3 = icmp eq i32 %2, 0, !insn.addr !70
  %4 = trunc i64 %arg1 to i32
  %5 = shl i32 %4, %2
  %6 = zext i32 %5 to i64
  %storemerge = select i1 %3, i64 %0, i64 %6
  ret i64 %storemerge, !insn.addr !71

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i64 @op_shr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_12f0:
  %0 = and i64 %arg1, 4294967295, !insn.addr !72
  %1 = trunc i64 %arg2 to i32, !insn.addr !73
  %2 = urem i32 %1, 32, !insn.addr !73
  %3 = icmp eq i32 %2, 0, !insn.addr !73
  %4 = trunc i64 %arg1 to i32
  %5 = ashr i32 %4, %2
  %6 = zext i32 %5 to i64
  %storemerge = select i1 %3, i64 %0, i64 %6
  ret i64 %storemerge, !insn.addr !74

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i64 @state_idle(i64 %arg1) local_unnamed_addr {
dec_label_pc_1300:
  %0 = trunc i64 %arg1 to i32, !insn.addr !75
  %1 = icmp eq i32 %0, 1, !insn.addr !75
  %2 = zext i1 %1 to i64, !insn.addr !76
  ret i64 %2, !insn.addr !77
}

define i64 @state_processing(i64 %arg1) local_unnamed_addr {
dec_label_pc_1310:
  %0 = trunc i64 %arg1 to i32, !insn.addr !78
  %1 = icmp eq i32 %0, 2, !insn.addr !78
  br i1 %1, label %dec_label_pc_1330, label %dec_label_pc_1319, !insn.addr !79

dec_label_pc_1319:                                ; preds = %dec_label_pc_1310
  %2 = icmp eq i32 %0, 99, !insn.addr !80
  %3 = zext i1 %2 to i64, !insn.addr !81
  %4 = select i1 %2, i64 2, i64 1, !insn.addr !82
  %5 = add nuw nsw i64 %4, %3, !insn.addr !82
  ret i64 %5, !insn.addr !83

dec_label_pc_1330:                                ; preds = %dec_label_pc_1310
  ret i64 2, !insn.addr !84

; uselistorder directives
  uselistorder i1 %2, { 1, 0 }
}

define i64 @state_done() local_unnamed_addr {
dec_label_pc_1340:
  ret i64 2, !insn.addr !85
}

define i64 @state_error(i64 %arg1) local_unnamed_addr {
dec_label_pc_1350:
  %0 = trunc i64 %arg1 to i32, !insn.addr !86
  %1 = icmp eq i32 %0, 0, !insn.addr !86
  %2 = icmp eq i1 %1, false, !insn.addr !87
  %3 = and i64 %arg1, 4294967295
  %4 = select i1 %2, i64 3, i64 %3, !insn.addr !87
  ret i64 %4, !insn.addr !88
}

define i64 @computed_goto.constprop.0() local_unnamed_addr {
dec_label_pc_1370:
  ret i64 20, !insn.addr !89
}

define i64 @non_local_jump.constprop.0() local_unnamed_addr {
dec_label_pc_1380:
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @global_var_6040 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !90
  %1 = icmp eq i32 %0, 0, !insn.addr !91
  %2 = select i1 %1, i64 10, i64 4294967295, !insn.addr !92
  ret i64 %2, !insn.addr !93
}

define i64 @sequential_ops(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_13b0:
  %0 = add i64 %arg2, %arg1, !insn.addr !94
  %1 = mul i64 %0, 2, !insn.addr !95
  %2 = sub i64 %1, %arg3, !insn.addr !96
  %3 = and i64 %2, 4294967295, !insn.addr !96
  ret i64 %3, !insn.addr !97
}

define i64 @single_if(i64 %arg1) local_unnamed_addr {
dec_label_pc_13c0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !98
  %1 = icmp sgt i32 %0, 0
  %2 = zext i1 %1 to i64, !insn.addr !99
  %3 = shl i64 %arg1, %2, !insn.addr !100
  %4 = and i64 %3, 4294967295, !insn.addr !100
  ret i64 %4, !insn.addr !101
}

define i64 @if_else(i64 %arg1) local_unnamed_addr {
dec_label_pc_13d0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !102
  %1 = icmp eq i32 %0, 0, !insn.addr !102
  %2 = icmp slt i32 %0, 0, !insn.addr !102
  %3 = icmp eq i1 %2, false, !insn.addr !103
  %4 = icmp eq i1 %1, false, !insn.addr !103
  %5 = icmp eq i1 %3, %4, !insn.addr !103
  %6 = zext i1 %5 to i64, !insn.addr !103
  ret i64 %6, !insn.addr !104

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
}

define i64 @nested_if_2(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_13e0:
  %rax.0.reg2mem = alloca i64, !insn.addr !105
  %0 = trunc i64 %arg1 to i32, !insn.addr !106
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !107
  br i1 %1, label %dec_label_pc_13f2, label %dec_label_pc_13ea, !insn.addr !107

dec_label_pc_13ea:                                ; preds = %dec_label_pc_13e0
  %2 = trunc i64 %arg2 to i32, !insn.addr !108
  %3 = icmp slt i32 %2, 1
  %4 = select i1 %3, i64 0, i64 %arg2, !insn.addr !109
  %.v = add i64 %4, %arg1
  %5 = and i64 %.v, 4294967295, !insn.addr !110
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !110
  br label %dec_label_pc_13f2, !insn.addr !110

dec_label_pc_13f2:                                ; preds = %dec_label_pc_13ea, %dec_label_pc_13e0
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !111

; uselistorder directives
  uselistorder i64 %arg2, { 1, 0 }
}

define i64 @nested_if_deep(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1400:
  %rax.0.reg2mem = alloca i64, !insn.addr !112
  %0 = trunc i64 %arg1 to i32, !insn.addr !113
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !114
  br i1 %1, label %dec_label_pc_1435, label %dec_label_pc_140a, !insn.addr !114

dec_label_pc_140a:                                ; preds = %dec_label_pc_1400
  %2 = trunc i64 %arg2 to i32, !insn.addr !115
  %3 = icmp slt i32 %2, 1
  store i64 1, i64* %rax.0.reg2mem, !insn.addr !116
  br i1 %3, label %dec_label_pc_1435, label %dec_label_pc_1413, !insn.addr !116

dec_label_pc_1413:                                ; preds = %dec_label_pc_140a
  %4 = trunc i64 %arg3 to i32, !insn.addr !117
  %5 = icmp slt i32 %4, 1
  store i64 2, i64* %rax.0.reg2mem, !insn.addr !118
  br i1 %5, label %dec_label_pc_1435, label %dec_label_pc_1417, !insn.addr !118

dec_label_pc_1417:                                ; preds = %dec_label_pc_1413
  %6 = trunc i64 %arg4 to i32, !insn.addr !119
  %7 = icmp slt i32 %6, 1
  store i64 3, i64* %rax.0.reg2mem, !insn.addr !120
  br i1 %7, label %dec_label_pc_1435, label %dec_label_pc_141b, !insn.addr !120

dec_label_pc_141b:                                ; preds = %dec_label_pc_1417
  %8 = trunc i64 %arg5 to i32, !insn.addr !121
  %9 = icmp eq i32 %8, 0, !insn.addr !121
  %10 = icmp slt i32 %8, 0, !insn.addr !121
  %11 = icmp eq i1 %10, false, !insn.addr !122
  %12 = icmp eq i1 %9, false, !insn.addr !122
  %13 = icmp eq i1 %11, %12, !insn.addr !122
  %14 = select i1 %13, i64 5, i64 4, !insn.addr !123
  ret i64 %14, !insn.addr !124

dec_label_pc_1435:                                ; preds = %dec_label_pc_1413, %dec_label_pc_1417, %dec_label_pc_140a, %dec_label_pc_1400
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !125

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1, 3, 4 }
  uselistorder label %dec_label_pc_1435, { 1, 0, 2, 3 }
}

define i64 @if_elseif_chain(i64 %arg1) local_unnamed_addr {
dec_label_pc_1450:
  %rax.0.reg2mem = alloca i64, !insn.addr !126
  %0 = trunc i64 %arg1 to i32, !insn.addr !127
  store i64 10, i64* %rax.0.reg2mem
  switch i32 %0, label %dec_label_pc_1462 [
    i32 0, label %dec_label_pc_147d
    i32 1, label %dec_label_pc_147d.fold.split
  ]

dec_label_pc_1462:                                ; preds = %dec_label_pc_1450
  %1 = icmp eq i32 %0, 2, !insn.addr !128
  %2 = icmp eq i1 %1, false, !insn.addr !129
  %3 = select i1 %2, i64 4294967295, i64 30, !insn.addr !129
  ret i64 %3, !insn.addr !130

dec_label_pc_147d.fold.split:                     ; preds = %dec_label_pc_1450
  store i64 20, i64* %rax.0.reg2mem
  br label %dec_label_pc_147d

dec_label_pc_147d:                                ; preds = %dec_label_pc_1450, %dec_label_pc_147d.fold.split
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !131

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder label %dec_label_pc_147d, { 1, 0 }
}

define i64 @if_elseif_long(i64 %arg1) local_unnamed_addr {
dec_label_pc_1480:
  %rax.0.reg2mem = alloca i64, !insn.addr !132
  %0 = trunc i64 %arg1 to i32, !insn.addr !133
  %1 = icmp ult i32 %0, 5
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !134
  br i1 %1, label %dec_label_pc_148e, label %dec_label_pc_1494, !insn.addr !134

dec_label_pc_148e:                                ; preds = %dec_label_pc_1480
  %2 = mul i64 %arg1, 4294967296, !insn.addr !135
  %sext = add i64 %2, 4294967296
  %3 = udiv i64 %sext, 4294967296
  %4 = mul nuw nsw i64 %3, 100, !insn.addr !136
  %5 = and i64 %4, 4294967292, !insn.addr !136
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !136
  br label %dec_label_pc_1494, !insn.addr !136

dec_label_pc_1494:                                ; preds = %dec_label_pc_1480, %dec_label_pc_148e
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !137

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1494, { 1, 0 }
}

define i64 @switch_small(i64 %arg1) local_unnamed_addr {
dec_label_pc_14a0:
  %rax.0.reg2mem = alloca i64, !insn.addr !138
  %0 = trunc i64 %arg1 to i32, !insn.addr !139
  %1 = icmp ult i32 %0, 4
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !140
  br i1 %1, label %dec_label_pc_14ae, label %dec_label_pc_14ba, !insn.addr !140

dec_label_pc_14ae:                                ; preds = %dec_label_pc_14a0
  %2 = mul i64 %arg1, 4, !insn.addr !141
  %3 = and i64 %2, 17179869180, !insn.addr !142
  %4 = add i64 %3, ptrtoint (i32** @global_var_3640 to i64), !insn.addr !142
  %5 = inttoptr i64 %4 to i32*, !insn.addr !142
  %6 = load i32, i32* %5, align 4, !insn.addr !142
  %7 = zext i32 %6 to i64, !insn.addr !142
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !142
  br label %dec_label_pc_14ba, !insn.addr !142

dec_label_pc_14ba:                                ; preds = %dec_label_pc_14a0, %dec_label_pc_14ae
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !143

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_14ba, { 1, 0 }
}

define i64 @switch_large(i64 %arg1) local_unnamed_addr {
dec_label_pc_14c0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !144
  %1 = icmp ult i32 %0, 10
  %2 = mul i64 %arg1, 10
  %3 = and i64 %2, 4294967294
  %rax.0 = select i1 %1, i64 %3, i64 4294967295
  ret i64 %rax.0, !insn.addr !145
}

define i64 @switch_default(i64 %arg1) local_unnamed_addr {
dec_label_pc_14e0:
  %0 = trunc i64 %arg1 to i32
  %1 = add i32 %0, -1, !insn.addr !146
  %2 = icmp ult i32 %1, 3
  %3 = mul i64 %arg1, 100
  %4 = and i64 %3, 4294967292
  %rax.0 = select i1 %2, i64 %4, i64 0
  ret i64 %rax.0, !insn.addr !147
}

define i64 @switch_fallthrough(i64 %arg1) local_unnamed_addr {
dec_label_pc_1500:
  %0 = trunc i64 %arg1 to i32, !insn.addr !148
  switch i32 %0, label %dec_label_pc_150e [
    i32 2, label %dec_label_pc_1530
    i32 3, label %dec_label_pc_1520
  ]

dec_label_pc_150e:                                ; preds = %dec_label_pc_1500
  %1 = icmp eq i32 %0, 1, !insn.addr !149
  %2 = zext i1 %1 to i64, !insn.addr !150
  %not. = icmp ne i1 %1, true
  %3 = sext i1 %not. to i64, !insn.addr !151
  %4 = add nsw i64 %3, %2, !insn.addr !151
  %5 = and i64 %4, 4294967295, !insn.addr !151
  ret i64 %5, !insn.addr !152

dec_label_pc_1520:                                ; preds = %dec_label_pc_1500
  %6 = mul i64 %arg1, 2
  %7 = add i64 %arg1, 12, !insn.addr !153
  %8 = add i64 %7, %6, !insn.addr !154
  %9 = and i64 %8, 4294967295, !insn.addr !154
  ret i64 %9, !insn.addr !155

dec_label_pc_1530:                                ; preds = %dec_label_pc_1500
  %10 = mul i64 %arg1, 3, !insn.addr !156
  %11 = and i64 %10, 4294967295, !insn.addr !156
  ret i64 %11, !insn.addr !157

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder i64 %arg1, { 2, 1, 0, 3 }
}

define i64 @loop_for_fixed(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1540:
  %0 = alloca i128
  %rax.2.reg2mem = alloca i64, !insn.addr !158
  %rcx.0.reg2mem = alloca i64, !insn.addr !158
  %rax.1.reg2mem = alloca i64, !insn.addr !158
  %rax.0.reg2mem = alloca i64, !insn.addr !158
  %xmm1.0.reg2mem = alloca i128, !insn.addr !158
  %xmm0.0.reg2mem = alloca i128, !insn.addr !158
  %1 = load i128, i128* %0
  %2 = trunc i64 %arg1 to i32, !insn.addr !159
  %3 = icmp slt i32 %2, 1
  store i64 0, i64* %rax.2.reg2mem, !insn.addr !160
  br i1 %3, label %dec_label_pc_1612, label %dec_label_pc_154e, !insn.addr !160

dec_label_pc_154e:                                ; preds = %dec_label_pc_1540
  %4 = add i32 %2, -1, !insn.addr !161
  %5 = icmp ult i32 %4, 10
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !162
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !162
  br i1 %5, label %dec_label_pc_15b3, label %dec_label_pc_155a, !insn.addr !162

dec_label_pc_155a:                                ; preds = %dec_label_pc_154e
  %6 = load i128, i128* @global_var_3650, align 8, !insn.addr !163
  %7 = call i128 @__asm_movdqa(i128 %6), !insn.addr !163
  %8 = call i128 @__asm_pxor(i128 %1, i128 %1), !insn.addr !164
  %9 = load i128, i128* @global_var_3660, align 8, !insn.addr !165
  %10 = call i128 @__asm_movdqa(i128 %9), !insn.addr !165
  %11 = udiv i64 %arg1, 4, !insn.addr !166
  %12 = trunc i64 %11 to i32
  %13 = urem i32 %12, 1073741824
  store i128 %8, i128* %xmm0.0.reg2mem, !insn.addr !167
  store i128 %7, i128* %xmm1.0.reg2mem, !insn.addr !167
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !167
  br label %dec_label_pc_1578, !insn.addr !167

dec_label_pc_1578:                                ; preds = %dec_label_pc_1578, %dec_label_pc_155a
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %xmm1.0.reload = load i128, i128* %xmm1.0.reg2mem
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %14 = call i128 @__asm_movdqa(i128 %xmm1.0.reload), !insn.addr !168
  %15 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !169
  %16 = and i64 %15, 4294967295, !insn.addr !169
  %17 = call i128 @__asm_paddd(i128 %xmm1.0.reload, i128 %10), !insn.addr !170
  %18 = call i128 @__asm_paddd(i128 %xmm0.0.reload, i128 %14), !insn.addr !171
  %19 = trunc i64 %15 to i32, !insn.addr !172
  %20 = icmp eq i32 %13, %19, !insn.addr !172
  %21 = icmp eq i1 %20, false, !insn.addr !173
  store i128 %18, i128* %xmm0.0.reg2mem, !insn.addr !173
  store i128 %17, i128* %xmm1.0.reg2mem, !insn.addr !173
  store i64 %16, i64* %rax.0.reg2mem, !insn.addr !173
  br i1 %21, label %dec_label_pc_1578, label %dec_label_pc_158b, !insn.addr !173

dec_label_pc_158b:                                ; preds = %dec_label_pc_1578
  %22 = call i128 @__asm_movdqa(i128 %18), !insn.addr !174
  %23 = call i128 @__asm_psrldq(i128 %22, i8 8), !insn.addr !175
  %24 = and i64 %arg1, 4294967292, !insn.addr !176
  %25 = call i128 @__asm_paddd(i128 %18, i128 %23), !insn.addr !177
  %26 = call i128 @__asm_movdqa(i128 %25), !insn.addr !178
  %27 = call i128 @__asm_psrldq(i128 %26, i8 4), !insn.addr !179
  %28 = call i128 @__asm_paddd(i128 %25, i128 %27), !insn.addr !180
  %29 = call i32 @__asm_movd(i128 %28), !insn.addr !181
  %30 = sext i32 %29 to i64, !insn.addr !181
  %31 = urem i64 %arg1, 4
  %32 = icmp eq i64 %31, 0, !insn.addr !182
  store i64 %30, i64* %rax.1.reg2mem, !insn.addr !183
  store i64 %24, i64* %rcx.0.reg2mem, !insn.addr !183
  store i64 %30, i64* %rax.2.reg2mem, !insn.addr !183
  br i1 %32, label %dec_label_pc_1612, label %dec_label_pc_15b3, !insn.addr !183

dec_label_pc_15b3:                                ; preds = %dec_label_pc_154e, %dec_label_pc_158b
  %33 = and i64 %arg1, 4294967295, !insn.addr !184
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %34 = or i64 %rcx.0.reload, 1, !insn.addr !185
  %35 = add nsw i64 %rcx.0.reload, %rax.1.reload, !insn.addr !186
  %36 = and i64 %35, 4294967295, !insn.addr !186
  %37 = icmp ugt i64 %33, %34, !insn.addr !187
  store i64 %36, i64* %rax.2.reg2mem, !insn.addr !187
  br i1 %37, label %dec_label_pc_15bc, label %dec_label_pc_1612, !insn.addr !187

dec_label_pc_15bc:                                ; preds = %dec_label_pc_15b3
  %38 = add nsw i64 %35, %34, !insn.addr !188
  %39 = and i64 %38, 4294967295, !insn.addr !188
  %40 = or i64 %rcx.0.reload, 2, !insn.addr !189
  %41 = icmp ugt i64 %33, %40, !insn.addr !190
  store i64 %39, i64* %rax.2.reg2mem, !insn.addr !190
  br i1 %41, label %dec_label_pc_15c5, label %dec_label_pc_1612, !insn.addr !190

dec_label_pc_15c5:                                ; preds = %dec_label_pc_15bc
  %42 = add nsw i64 %38, %40, !insn.addr !191
  %43 = and i64 %42, 4294967295, !insn.addr !191
  %44 = or i64 %rcx.0.reload, 3, !insn.addr !192
  %45 = icmp ugt i64 %33, %44, !insn.addr !193
  store i64 %43, i64* %rax.2.reg2mem, !insn.addr !193
  br i1 %45, label %dec_label_pc_15ce, label %dec_label_pc_1612, !insn.addr !193

dec_label_pc_15ce:                                ; preds = %dec_label_pc_15c5
  %46 = add nsw i64 %42, %44, !insn.addr !194
  %47 = and i64 %46, 4294967295, !insn.addr !194
  %48 = add nuw nsw i64 %rcx.0.reload, 4, !insn.addr !195
  %49 = and i64 %48, 4294967292, !insn.addr !195
  %50 = icmp ugt i64 %33, %49, !insn.addr !196
  store i64 %47, i64* %rax.2.reg2mem, !insn.addr !196
  br i1 %50, label %dec_label_pc_15d7, label %dec_label_pc_1612, !insn.addr !196

dec_label_pc_15d7:                                ; preds = %dec_label_pc_15ce
  %51 = add nsw i64 %46, %48, !insn.addr !197
  %52 = and i64 %51, 4294967295, !insn.addr !197
  %53 = add nuw nsw i64 %rcx.0.reload, 5, !insn.addr !198
  %54 = and i64 %53, 4294967293, !insn.addr !198
  %55 = icmp ugt i64 %33, %54, !insn.addr !199
  store i64 %52, i64* %rax.2.reg2mem, !insn.addr !199
  br i1 %55, label %dec_label_pc_15e0, label %dec_label_pc_1612, !insn.addr !199

dec_label_pc_15e0:                                ; preds = %dec_label_pc_15d7
  %56 = add i64 %51, %53, !insn.addr !200
  %57 = and i64 %56, 4294967295, !insn.addr !200
  %58 = add nuw nsw i64 %rcx.0.reload, 6, !insn.addr !201
  %59 = and i64 %58, 4294967294, !insn.addr !201
  %60 = icmp ugt i64 %33, %59, !insn.addr !202
  store i64 %57, i64* %rax.2.reg2mem, !insn.addr !202
  br i1 %60, label %dec_label_pc_15e9, label %dec_label_pc_1612, !insn.addr !202

dec_label_pc_15e9:                                ; preds = %dec_label_pc_15e0
  %61 = add i64 %56, %58, !insn.addr !203
  %62 = and i64 %61, 4294967295, !insn.addr !203
  %63 = add nuw nsw i64 %rcx.0.reload, 7, !insn.addr !204
  %64 = and i64 %63, 4294967295, !insn.addr !204
  %65 = icmp ugt i64 %33, %64, !insn.addr !205
  store i64 %62, i64* %rax.2.reg2mem, !insn.addr !205
  br i1 %65, label %dec_label_pc_15f2, label %dec_label_pc_1612, !insn.addr !205

dec_label_pc_15f2:                                ; preds = %dec_label_pc_15e9
  %66 = add i64 %61, %63, !insn.addr !206
  %67 = and i64 %66, 4294967295, !insn.addr !206
  %68 = add nuw nsw i64 %rcx.0.reload, 8, !insn.addr !207
  %69 = and i64 %68, 4294967292, !insn.addr !207
  %70 = icmp ugt i64 %33, %69, !insn.addr !208
  store i64 %67, i64* %rax.2.reg2mem, !insn.addr !208
  br i1 %70, label %dec_label_pc_15fb, label %dec_label_pc_1612, !insn.addr !208

dec_label_pc_15fb:                                ; preds = %dec_label_pc_15f2
  %71 = add i64 %66, %69, !insn.addr !209
  %72 = add nuw nsw i64 %rcx.0.reload, 9, !insn.addr !210
  %73 = trunc i64 %72 to i32, !insn.addr !211
  %74 = sub i32 %2, %73, !insn.addr !211
  %75 = xor i64 %72, %arg1
  %76 = trunc i64 %75 to i32, !insn.addr !211
  %77 = xor i32 %74, %2, !insn.addr !211
  %78 = and i32 %77, %76, !insn.addr !211
  %79 = icmp slt i32 %78, 0, !insn.addr !211
  %80 = icmp eq i32 %74, 0, !insn.addr !211
  %81 = icmp slt i32 %74, 0, !insn.addr !211
  %82 = icmp eq i1 %81, %79, !insn.addr !212
  %83 = icmp eq i1 %80, false, !insn.addr !212
  %84 = icmp eq i1 %82, %83, !insn.addr !212
  %85 = select i1 %84, i64 %72, i64 0, !insn.addr !213
  %.v = add i64 %71, %85
  %86 = and i64 %.v, 4294967295, !insn.addr !212
  ret i64 %86, !insn.addr !214

dec_label_pc_1612:                                ; preds = %dec_label_pc_158b, %dec_label_pc_1540, %dec_label_pc_15f2, %dec_label_pc_15e9, %dec_label_pc_15e0, %dec_label_pc_15d7, %dec_label_pc_15ce, %dec_label_pc_15c5, %dec_label_pc_15bc, %dec_label_pc_15b3
  %rax.2.reload = load i64, i64* %rax.2.reg2mem
  ret i64 %rax.2.reload, !insn.addr !215

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
  %merge.reg2mem = alloca i64, !insn.addr !216
  %r8.0.reg2mem = alloca i64, !insn.addr !216
  %rdi.0.reg2mem = alloca i64, !insn.addr !216
  %0 = trunc i64 %arg1 to i32, !insn.addr !217
  %1 = icmp eq i32 %0, 0, !insn.addr !217
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !218
  store i64 0, i64* %r8.0.reg2mem, !insn.addr !218
  store i64 1, i64* %merge.reg2mem, !insn.addr !218
  br i1 %1, label %dec_label_pc_164d, label %dec_label_pc_1630, !insn.addr !218

dec_label_pc_1630:                                ; preds = %dec_label_pc_1620, %dec_label_pc_1630
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %sext = mul i64 %rdi.0.reload, 4294967296
  %2 = ashr exact i64 %sext, 32, !insn.addr !219
  %3 = trunc i64 %rdi.0.reload to i32, !insn.addr !220
  %4 = add nuw nsw i64 %r8.0.reload, 1, !insn.addr !221
  %5 = and i64 %4, 4294967295, !insn.addr !221
  %narrow = mul nsw i64 %2, 1717986919
  %6 = ashr i32 %3, 31, !insn.addr !222
  %7 = ashr i64 %narrow, 34, !insn.addr !223
  %8 = trunc i64 %7 to i32, !insn.addr !224
  %9 = sub i32 %8, %6, !insn.addr !224
  %10 = icmp eq i32 %9, 0, !insn.addr !224
  %11 = zext i32 %9 to i64, !insn.addr !225
  %12 = icmp eq i1 %10, false, !insn.addr !226
  store i64 %11, i64* %rdi.0.reg2mem, !insn.addr !226
  store i64 %5, i64* %r8.0.reg2mem, !insn.addr !226
  store i64 %5, i64* %merge.reg2mem, !insn.addr !226
  br i1 %12, label %dec_label_pc_1630, label %dec_label_pc_164d, !insn.addr !226

dec_label_pc_164d:                                ; preds = %dec_label_pc_1630, %dec_label_pc_1620
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !227

; uselistorder directives
  uselistorder i64* %rdi.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r8.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1630, { 1, 0 }
}

define i64 @loop_dowhile(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1670:
  %r8.0.reg2mem = alloca i64, !insn.addr !228
  %rdi.0.reg2mem = alloca i64, !insn.addr !228
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !229
  store i64 0, i64* %r8.0.reg2mem, !insn.addr !229
  br label %dec_label_pc_1680, !insn.addr !229

dec_label_pc_1680:                                ; preds = %dec_label_pc_1680, %dec_label_pc_1670
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %sext = mul i64 %rdi.0.reload, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !230
  %1 = trunc i64 %rdi.0.reload to i32, !insn.addr !231
  %2 = add nuw nsw i64 %r8.0.reload, 1, !insn.addr !232
  %3 = and i64 %2, 4294967295, !insn.addr !232
  %narrow = mul nsw i64 %0, 1717986919
  %4 = ashr i32 %1, 31, !insn.addr !233
  %5 = ashr i64 %narrow, 34, !insn.addr !234
  %6 = trunc i64 %5 to i32, !insn.addr !235
  %7 = sub i32 %6, %4, !insn.addr !235
  %8 = icmp eq i32 %7, 0, !insn.addr !235
  %9 = zext i32 %7 to i64, !insn.addr !236
  %10 = icmp eq i1 %8, false, !insn.addr !237
  store i64 %9, i64* %rdi.0.reg2mem, !insn.addr !237
  store i64 %3, i64* %r8.0.reg2mem, !insn.addr !237
  br i1 %10, label %dec_label_pc_1680, label %dec_label_pc_169d, !insn.addr !237

dec_label_pc_169d:                                ; preds = %dec_label_pc_1680
  ret i64 %3, !insn.addr !238

; uselistorder directives
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64* %rdi.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r8.0.reg2mem, { 1, 0, 2 }
}

define i64 @loop_nested(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_16b0:
  %merge.reg2mem = alloca i64, !insn.addr !239
  %rdx.0.reg2mem = alloca i64, !insn.addr !239
  %rax.0.reg2mem = alloca i64, !insn.addr !239
  %0 = trunc i64 %arg1 to i32, !insn.addr !240
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %merge.reg2mem, !insn.addr !241
  br i1 %1, label %dec_label_pc_16cf, label %dec_label_pc_16c0.preheader, !insn.addr !241

dec_label_pc_16c0.preheader:                      ; preds = %dec_label_pc_16b0
  %2 = trunc i64 %arg2 to i32, !insn.addr !242
  %3 = icmp eq i32 %2, 0, !insn.addr !242
  %4 = icmp slt i32 %2, 0, !insn.addr !242
  %5 = icmp eq i1 %4, false, !insn.addr !243
  %6 = icmp eq i1 %3, false, !insn.addr !243
  %7 = icmp eq i1 %5, %6, !insn.addr !243
  %8 = select i1 %7, i64 %arg2, i64 0, !insn.addr !244
  store i64 0, i64* %rax.0.reg2mem
  store i64 0, i64* %rdx.0.reg2mem
  br label %dec_label_pc_16c0

dec_label_pc_16c0:                                ; preds = %dec_label_pc_16c0.preheader, %dec_label_pc_16c0
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %.v = add i64 %rax.0.reload, %8
  %9 = and i64 %.v, 4294967295, !insn.addr !243
  %10 = add nuw nsw i64 %rdx.0.reload, 1, !insn.addr !245
  %11 = and i64 %10, 4294967295, !insn.addr !245
  %12 = trunc i64 %10 to i32, !insn.addr !246
  %13 = icmp eq i32 %0, %12, !insn.addr !246
  %14 = icmp eq i1 %13, false, !insn.addr !247
  store i64 %9, i64* %rax.0.reg2mem, !insn.addr !247
  store i64 %11, i64* %rdx.0.reg2mem, !insn.addr !247
  store i64 %9, i64* %merge.reg2mem, !insn.addr !247
  br i1 %14, label %dec_label_pc_16c0, label %dec_label_pc_16cf, !insn.addr !247

dec_label_pc_16cf:                                ; preds = %dec_label_pc_16c0, %dec_label_pc_16b0
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !248

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64 %arg2, { 1, 0 }
  uselistorder label %dec_label_pc_16c0, { 1, 0 }
}

define i64 @loop_break(i64 %arg1) local_unnamed_addr {
dec_label_pc_16e0:
  %merge.reg2mem = alloca i64, !insn.addr !249
  %0 = trunc i64 %arg1 to i32, !insn.addr !250
  store i64 0, i64* %merge.reg2mem
  switch i32 %0, label %dec_label_pc_16f8 [
    i32 10, label %dec_label_pc_1708
    i32 20, label %dec_label_pc_1708.fold.split
    i32 30, label %dec_label_pc_1708.fold.split1
    i32 40, label %dec_label_pc_1708.fold.split2
  ]

dec_label_pc_16f8:                                ; preds = %dec_label_pc_16e0
  %1 = icmp eq i32 %0, 50, !insn.addr !251
  %2 = zext i1 %1 to i64, !insn.addr !252
  %3 = mul i64 %2, 4, !insn.addr !253
  %not. = icmp ne i1 %1, true
  %4 = sext i1 %not. to i64, !insn.addr !253
  %5 = add nsw i64 %3, %4, !insn.addr !253
  %6 = and i64 %5, 4294967295, !insn.addr !253
  ret i64 %6, !insn.addr !254

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
  ret i64 %merge.reload, !insn.addr !255

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder label %dec_label_pc_1708, { 1, 2, 3, 0 }
}

define i64 @loop_continue(i64 %arg1) local_unnamed_addr {
dec_label_pc_1730:
  %0 = alloca i128
  %rax.2.reg2mem = alloca i64, !insn.addr !256
  %rdx.0.reg2mem = alloca i64, !insn.addr !256
  %rax.1.reg2mem = alloca i64, !insn.addr !256
  %rax.0.reg2mem = alloca i64, !insn.addr !256
  %xmm2.0.reg2mem = alloca i128, !insn.addr !256
  %xmm1.0.reg2mem = alloca i128, !insn.addr !256
  %1 = load i128, i128* %0
  %2 = trunc i64 %arg1 to i32, !insn.addr !257
  %3 = icmp slt i32 %2, 1
  store i64 0, i64* %rax.2.reg2mem, !insn.addr !258
  br i1 %3, label %dec_label_pc_180a, label %dec_label_pc_173c, !insn.addr !258

dec_label_pc_173c:                                ; preds = %dec_label_pc_1730
  %4 = add i32 %2, -1, !insn.addr !259
  %5 = icmp ult i32 %4, 5
  store i64 1, i64* %rax.1.reg2mem, !insn.addr !260
  store i64 1, i64* %rdx.0.reg2mem, !insn.addr !260
  br i1 %5, label %dec_label_pc_17c4, label %dec_label_pc_1748, !insn.addr !260

dec_label_pc_1748:                                ; preds = %dec_label_pc_173c
  %6 = call i128 @__asm_pxor(i128 %1, i128 %1), !insn.addr !261
  %7 = load i128, i128* @global_var_3670, align 8, !insn.addr !262
  %8 = call i128 @__asm_movdqa(i128 %7), !insn.addr !262
  %9 = load i128, i128* @global_var_3660, align 8, !insn.addr !263
  %10 = call i128 @__asm_movdqa(i128 %9), !insn.addr !263
  %11 = load i128, i128* @global_var_3680, align 8, !insn.addr !264
  %12 = call i128 @__asm_movdqa(i128 %11), !insn.addr !264
  %13 = udiv i64 %arg1, 4, !insn.addr !265
  %14 = call i128 @__asm_movdqa(i128 %6), !insn.addr !266
  %15 = trunc i64 %13 to i32
  %16 = urem i32 %15, 1073741824
  store i128 %6, i128* %xmm1.0.reg2mem, !insn.addr !267
  store i128 %8, i128* %xmm2.0.reg2mem, !insn.addr !267
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !267
  br label %dec_label_pc_1770, !insn.addr !267

dec_label_pc_1770:                                ; preds = %dec_label_pc_1770, %dec_label_pc_1748
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %xmm2.0.reload = load i128, i128* %xmm2.0.reg2mem
  %xmm1.0.reload = load i128, i128* %xmm1.0.reg2mem
  %17 = call i128 @__asm_movdqa(i128 %xmm2.0.reload), !insn.addr !268
  %18 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !269
  %19 = and i64 %18, 4294967295, !insn.addr !269
  %20 = call i128 @__asm_paddd(i128 %xmm2.0.reload, i128 %10), !insn.addr !270
  %21 = call i128 @__asm_movdqa(i128 %17), !insn.addr !271
  %22 = call i128 @__asm_pand(i128 %21, i128 %12), !insn.addr !272
  %23 = call i128 @__asm_pcmpeqd(i128 %22, i128 %14), !insn.addr !273
  %24 = call i128 @__asm_pandn(i128 %23, i128 %17), !insn.addr !274
  %25 = call i128 @__asm_paddd(i128 %xmm1.0.reload, i128 %24), !insn.addr !275
  %26 = trunc i64 %18 to i32, !insn.addr !276
  %27 = icmp eq i32 %16, %26, !insn.addr !276
  %28 = icmp eq i1 %27, false, !insn.addr !277
  store i128 %25, i128* %xmm1.0.reg2mem, !insn.addr !277
  store i128 %20, i128* %xmm2.0.reg2mem, !insn.addr !277
  store i64 %19, i64* %rax.0.reg2mem, !insn.addr !277
  br i1 %28, label %dec_label_pc_1770, label %dec_label_pc_1793, !insn.addr !277

dec_label_pc_1793:                                ; preds = %dec_label_pc_1770
  %29 = call i128 @__asm_movdqa(i128 %25), !insn.addr !278
  %30 = call i128 @__asm_psrldq(i128 %29, i8 8), !insn.addr !279
  %31 = and i64 %arg1, 4294967292, !insn.addr !280
  %32 = call i128 @__asm_paddd(i128 %25, i128 %30), !insn.addr !281
  %33 = call i128 @__asm_movdqa(i128 %32), !insn.addr !282
  %34 = call i128 @__asm_psrldq(i128 %33, i8 4), !insn.addr !283
  %35 = call i128 @__asm_paddd(i128 %32, i128 %34), !insn.addr !284
  %36 = call i32 @__asm_movd(i128 %35), !insn.addr !285
  %37 = sext i32 %36 to i64, !insn.addr !285
  %38 = trunc i64 %31 to i32, !insn.addr !286
  %39 = icmp eq i32 %2, %38, !insn.addr !286
  store i64 %37, i64* %rax.2.reg2mem, !insn.addr !287
  br i1 %39, label %dec_label_pc_180a, label %dec_label_pc_17c2, !insn.addr !287

dec_label_pc_17c2:                                ; preds = %dec_label_pc_1793
  %40 = or i64 %31, 1, !insn.addr !288
  %41 = add nsw i64 %40, %37, !insn.addr !289
  %42 = and i64 %41, 4294967295, !insn.addr !289
  store i64 %42, i64* %rax.1.reg2mem, !insn.addr !289
  store i64 %40, i64* %rdx.0.reg2mem, !insn.addr !289
  br label %dec_label_pc_17c4, !insn.addr !289

dec_label_pc_17c4:                                ; preds = %dec_label_pc_173c, %dec_label_pc_17c2
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %43 = add nsw i64 %rdx.0.reload, 1, !insn.addr !290
  %44 = and i64 %43, 4294967294, !insn.addr !290
  %45 = icmp sgt i64 %44, %arg1, !insn.addr !291
  store i64 %rax.1.reload, i64* %rax.2.reg2mem, !insn.addr !291
  br i1 %45, label %dec_label_pc_180a, label %dec_label_pc_17cb, !insn.addr !291

dec_label_pc_17cb:                                ; preds = %dec_label_pc_17c4
  %46 = add nsw i64 %rdx.0.reload, 2, !insn.addr !292
  %47 = and i64 %46, 4294967295, !insn.addr !292
  %48 = icmp sgt i64 %47, %arg1, !insn.addr !293
  store i64 %rax.1.reload, i64* %rax.2.reg2mem, !insn.addr !293
  br i1 %48, label %dec_label_pc_180a, label %dec_label_pc_17db, !insn.addr !293

dec_label_pc_17db:                                ; preds = %dec_label_pc_17cb
  %49 = add nsw i64 %46, %rax.1.reload, !insn.addr !294
  %50 = add nsw i64 %rdx.0.reload, 3, !insn.addr !295
  %51 = and i64 %50, 4294967294, !insn.addr !295
  %52 = and i64 %49, 4294967295, !insn.addr !296
  %53 = icmp sgt i64 %51, %arg1, !insn.addr !297
  store i64 %52, i64* %rax.2.reg2mem, !insn.addr !297
  br i1 %53, label %dec_label_pc_180a, label %dec_label_pc_17eb, !insn.addr !297

dec_label_pc_17eb:                                ; preds = %dec_label_pc_17db
  %54 = add nsw i64 %rdx.0.reload, 4, !insn.addr !298
  %55 = and i64 %54, 4294967295, !insn.addr !298
  %56 = icmp sgt i64 %55, %arg1, !insn.addr !299
  store i64 %52, i64* %rax.2.reg2mem, !insn.addr !299
  br i1 %56, label %dec_label_pc_180a, label %dec_label_pc_17fb, !insn.addr !299

dec_label_pc_17fb:                                ; preds = %dec_label_pc_17eb
  %.v3 = add nsw i64 %49, %54
  %57 = and i64 %.v3, 4294967295, !insn.addr !300
  ret i64 %57, !insn.addr !301

dec_label_pc_180a:                                ; preds = %dec_label_pc_1730, %dec_label_pc_17eb, %dec_label_pc_17db, %dec_label_pc_17cb, %dec_label_pc_17c4, %dec_label_pc_1793
  %rax.2.reload = load i64, i64* %rax.2.reg2mem
  ret i64 %rax.2.reload, !insn.addr !302

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
  %rdi.0.reg2mem = alloca i64, !insn.addr !303
  %0 = trunc i64 %arg1 to i32, !insn.addr !304
  %1 = icmp slt i32 %0, 1
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !305
  br i1 %1, label %dec_label_pc_182b, label %dec_label_pc_1828, !insn.addr !305

dec_label_pc_1828:                                ; preds = %dec_label_pc_1820
  %sext = mul i64 %arg1, 4294967296
  %2 = ashr exact i64 %sext, 32, !insn.addr !306
  %3 = mul nsw i64 %2, %2, !insn.addr !306
  %4 = and i64 %3, 4294967295, !insn.addr !306
  store i64 %4, i64* %rdi.0.reg2mem, !insn.addr !306
  br label %dec_label_pc_182b, !insn.addr !306

dec_label_pc_182b:                                ; preds = %dec_label_pc_1828, %dec_label_pc_1820
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %5 = mul i64 %rdi.0.reload, 2, !insn.addr !307
  %6 = and i64 %5, 4294967294, !insn.addr !307
  ret i64 %6, !insn.addr !308

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @goto_backward(i64 %arg1) local_unnamed_addr {
dec_label_pc_1830:
  %r8.1.reg2mem = alloca i64, !insn.addr !309
  %r8.0.reg2mem = alloca i64, !insn.addr !309
  %rax.0.reg2mem = alloca i64, !insn.addr !309
  %0 = trunc i64 %arg1 to i32, !insn.addr !310
  %1 = icmp slt i32 %0, 1
  store i64 1, i64* %r8.1.reg2mem, !insn.addr !311
  br i1 %1, label %dec_label_pc_185b, label %dec_label_pc_1850.preheader, !insn.addr !311

dec_label_pc_1850.preheader:                      ; preds = %dec_label_pc_1830
  %2 = add i32 %0, 1, !insn.addr !312
  store i64 1, i64* %rax.0.reg2mem
  store i64 1, i64* %r8.0.reg2mem
  br label %dec_label_pc_1850

dec_label_pc_1850:                                ; preds = %dec_label_pc_1850.preheader, %dec_label_pc_1850
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %sext = mul i64 %r8.0.reload, 4294967296
  %3 = ashr exact i64 %sext, 32, !insn.addr !313
  %sext1 = mul i64 %rax.0.reload, 4294967296
  %4 = ashr exact i64 %sext1, 32, !insn.addr !313
  %5 = mul nsw i64 %3, %4, !insn.addr !313
  %6 = and i64 %5, 4294967295, !insn.addr !313
  %7 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !314
  %8 = and i64 %7, 4294967295, !insn.addr !314
  %9 = trunc i64 %7 to i32, !insn.addr !312
  %10 = icmp eq i32 %2, %9, !insn.addr !312
  %11 = icmp eq i1 %10, false, !insn.addr !315
  store i64 %8, i64* %rax.0.reg2mem, !insn.addr !315
  store i64 %6, i64* %r8.0.reg2mem, !insn.addr !315
  store i64 %6, i64* %r8.1.reg2mem, !insn.addr !315
  br i1 %11, label %dec_label_pc_1850, label %dec_label_pc_185b, !insn.addr !315

dec_label_pc_185b:                                ; preds = %dec_label_pc_1850, %dec_label_pc_1830
  %r8.1.reload = load i64, i64* %r8.1.reg2mem
  ret i64 %r8.1.reload, !insn.addr !316

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r8.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1850, { 1, 0 }
}

define i64 @ternary_op(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1860:
  %0 = trunc i64 %arg2 to i32, !insn.addr !317
  %1 = trunc i64 %arg1 to i32, !insn.addr !317
  %2 = sub i32 %0, %1, !insn.addr !317
  %3 = xor i64 %arg2, %arg1
  %4 = trunc i64 %3 to i32, !insn.addr !317
  %5 = xor i32 %2, %0, !insn.addr !317
  %6 = and i32 %5, %4, !insn.addr !317
  %7 = icmp slt i32 %6, 0, !insn.addr !317
  %8 = icmp slt i32 %2, 0, !insn.addr !317
  %9 = icmp eq i1 %8, %7, !insn.addr !318
  %.v = select i1 %9, i64 %arg2, i64 %arg1
  %10 = and i64 %.v, 4294967295, !insn.addr !318
  ret i64 %10, !insn.addr !319

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i64 %arg2, { 1, 0, 2 }
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @test_control_flow_l1() local_unnamed_addr {
dec_label_pc_1870:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3008 to i8*)), !insn.addr !320
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3030, i64 0, i64 0), i64 21), !insn.addr !321
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_33b8, i64 0, i64 0), i64 20), !insn.addr !322
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_33b8, i64 0, i64 0), i64 4294967291), !insn.addr !323
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_33d2, i64 0, i64 0), i64 1), !insn.addr !324
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_33d2, i64 0, i64 0), i64 0), !insn.addr !325
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_33ea, i64 0, i64 0), i64 15), !insn.addr !326
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_33ea, i64 0, i64 0), i64 10), !insn.addr !327
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_33ea, i64 0, i64 0), i64 0), !insn.addr !328
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3050, i64 0, i64 0), i64 5), !insn.addr !329
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3070, i64 0, i64 0), i64 20), !insn.addr !330
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3090, i64 0, i64 0), i64 400), !insn.addr !331
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3406, i64 0, i64 0), i64 50), !insn.addr !332
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3423, i64 0, i64 0), i64 70), !insn.addr !333
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_30b0, i64 0, i64 0), i64 0), !insn.addr !334
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_30d0, i64 0, i64 0), i64 21), !insn.addr !335
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_30f8, i64 0, i64 0), i64 45), !insn.addr !336
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3440, i64 0, i64 0), i64 5), !insn.addr !337
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_345b, i64 0, i64 0), i64 4), !insn.addr !338
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_3478, i64 0, i64 0), i64 12), !insn.addr !339
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3494, i64 0, i64 0), i64 2), !insn.addr !340
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3494, i64 0, i64 0), i64 4294967295), !insn.addr !341
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_34af, i64 0, i64 0), i64 25), !insn.addr !342
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_34cd, i64 0, i64 0), i64 50), !insn.addr !343
  %24 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_34cd, i64 0, i64 0), i64 4294967290), !insn.addr !344
  %25 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_34ea, i64 0, i64 0), i64 120), !insn.addr !345
  %26 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3508, i64 0, i64 0), i64 10), !insn.addr !346
  %27 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3508, i64 0, i64 0), i64 8), !insn.addr !347
  %28 = sext i32 %27 to i64, !insn.addr !347
  ret i64 %28, !insn.addr !347
}

define i64 @loop_multi_exit(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1b00:
  %rax.4.reg2mem = alloca i64, !insn.addr !348
  %rax.3.reg2mem = alloca i64, !insn.addr !348
  %rdx.0.reg2mem = alloca i64, !insn.addr !348
  %rax.1.reg2mem = alloca i64, !insn.addr !348
  %merge.reg2mem = alloca i64, !insn.addr !348
  %0 = trunc i64 %arg1 to i32, !insn.addr !349
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
  ret i64 %merge.reload, !insn.addr !350

dec_label_pc_1b59.fold.split:                     ; preds = %dec_label_pc_1b00
  store i64 2, i64* %rax.1.reg2mem
  store i64 0, i64* %rdx.0.reg2mem
  br label %dec_label_pc_1b59

dec_label_pc_1b59:                                ; preds = %dec_label_pc_1b00, %dec_label_pc_1b59.fold.split, %dec_label_pc_1b80, %dec_label_pc_1b79, %dec_label_pc_1b70
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %1 = mul nsw i64 %rax.1.reload, 10, !insn.addr !351
  %2 = add nsw i64 %rdx.0.reload, %1, !insn.addr !352
  %3 = and i64 %2, 4294967295, !insn.addr !352
  ret i64 %3, !insn.addr !353

dec_label_pc_1b70.fold.split:                     ; preds = %dec_label_pc_1b00
  store i64 2, i64* %rax.3.reg2mem
  br label %dec_label_pc_1b70

dec_label_pc_1b70:                                ; preds = %dec_label_pc_1b00, %dec_label_pc_1b70.fold.split, %dec_label_pc_1b8e
  %rax.3.reload = load i64, i64* %rax.3.reg2mem
  store i64 %rax.3.reload, i64* %rax.1.reg2mem, !insn.addr !354
  store i64 2, i64* %rdx.0.reg2mem, !insn.addr !354
  br label %dec_label_pc_1b59, !insn.addr !354

dec_label_pc_1b79.fold.split:                     ; preds = %dec_label_pc_1b00
  store i64 2, i64* %rax.4.reg2mem
  br label %dec_label_pc_1b79

dec_label_pc_1b79:                                ; preds = %dec_label_pc_1b00, %dec_label_pc_1b79.fold.split, %dec_label_pc_1b95
  %rax.4.reload = load i64, i64* %rax.4.reg2mem
  store i64 %rax.4.reload, i64* %rax.1.reg2mem, !insn.addr !355
  store i64 3, i64* %rdx.0.reg2mem, !insn.addr !355
  br label %dec_label_pc_1b59, !insn.addr !355

dec_label_pc_1b80:                                ; preds = %dec_label_pc_1b00
  store i64 1, i64* %rax.1.reg2mem, !insn.addr !356
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !356
  br label %dec_label_pc_1b59, !insn.addr !356

dec_label_pc_1b87:                                ; preds = %dec_label_pc_1b00
  store i64 11, i64* %merge.reg2mem, !insn.addr !357
  br label %dec_label_pc_1b54, !insn.addr !357

dec_label_pc_1b8e:                                ; preds = %dec_label_pc_1b00
  store i64 1, i64* %rax.3.reg2mem, !insn.addr !358
  br label %dec_label_pc_1b70, !insn.addr !358

dec_label_pc_1b95:                                ; preds = %dec_label_pc_1b00
  store i64 1, i64* %rax.4.reg2mem, !insn.addr !359
  br label %dec_label_pc_1b79, !insn.addr !359

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
  %rax.0.reg2mem = alloca i64, !insn.addr !360
  %0 = trunc i64 %arg1 to i32
  %1 = icmp eq i32 %0, 1, !insn.addr !361
  %2 = icmp eq i1 %1, false, !insn.addr !362
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !363
  br label %dec_label_pc_1bca, !insn.addr !363

dec_label_pc_1bc0:                                ; preds = %dec_label_pc_1bca
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %3 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !364
  %4 = and i64 %3, 4294967295, !insn.addr !364
  %5 = trunc i64 %3 to i32, !insn.addr !365
  %6 = icmp eq i32 %5, ptrtoint (i32* @global_var_3e9 to i32), !insn.addr !365
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !366
  br i1 %6, label %dec_label_pc_1bd2, label %dec_label_pc_1bca, !insn.addr !366

dec_label_pc_1bca:                                ; preds = %dec_label_pc_1bc0, %dec_label_pc_1bb0
  br i1 %2, label %dec_label_pc_1bc0, label %dec_label_pc_1bd1, !insn.addr !362

dec_label_pc_1bd1:                                ; preds = %dec_label_pc_1bca
  ret i64 0, !insn.addr !367

dec_label_pc_1bd2:                                ; preds = %dec_label_pc_1bc0
  %7 = inttoptr i64 %arg1 to i32*, !insn.addr !368
  store i32 1, i32* %7, align 4, !insn.addr !368
  ret i64 %4, !insn.addr !369

; uselistorder directives
  uselistorder i64 %4, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
}

define i64 @multi_return(i64 %arg1) local_unnamed_addr {
dec_label_pc_1be0:
  %merge.reg2mem = alloca i64, !insn.addr !370
  %0 = trunc i64 %arg1 to i32, !insn.addr !371
  %1 = icmp slt i32 %0, 0, !insn.addr !371
  store i64 4294967295, i64* %merge.reg2mem, !insn.addr !372
  br i1 %1, label %dec_label_pc_1c00, label %dec_label_pc_1be8, !insn.addr !372

dec_label_pc_1be8:                                ; preds = %dec_label_pc_1be0
  %2 = mul i64 %arg1, 2, !insn.addr !373
  %3 = trunc i64 %2 to i32, !insn.addr !374
  %4 = icmp sgt i32 %3, 100, !insn.addr !374
  store i64 4294967294, i64* %merge.reg2mem, !insn.addr !374
  br i1 %4, label %dec_label_pc_1c00, label %dec_label_pc_1bf0, !insn.addr !374

dec_label_pc_1bf0:                                ; preds = %dec_label_pc_1be8
  %5 = add i64 %arg1, 1, !insn.addr !375
  %6 = urem i64 %arg1, 2
  %7 = icmp eq i64 %6, 0, !insn.addr !376
  %8 = icmp eq i1 %7, false, !insn.addr !377
  %9 = select i1 %8, i64 %5, i64 %2, !insn.addr !377
  %10 = and i64 %9, 4294967295, !insn.addr !377
  ret i64 %10, !insn.addr !378

dec_label_pc_1c00:                                ; preds = %dec_label_pc_1be0, %dec_label_pc_1be8
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !379

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %merge.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 1, 2, 0, 3 }
  uselistorder label %dec_label_pc_1c00, { 1, 0 }
}

define i64 @conditional_return(i64 %arg1) local_unnamed_addr {
dec_label_pc_1c10:
  %0 = trunc i64 %arg1 to i32, !insn.addr !380
  %1 = icmp slt i32 %0, 1
  br i1 %1, label %dec_label_pc_1c20, label %dec_label_pc_1c18, !insn.addr !381

dec_label_pc_1c18:                                ; preds = %dec_label_pc_1c10
  %2 = mul i64 %arg1, 2, !insn.addr !382
  %3 = and i64 %2, 4294967294, !insn.addr !382
  ret i64 %3, !insn.addr !383

dec_label_pc_1c20:                                ; preds = %dec_label_pc_1c10
  %4 = sub i64 0, %arg1, !insn.addr !384
  %5 = icmp eq i32 %0, 0, !insn.addr !385
  %.op = and i64 %4, 4294967295
  %6 = select i1 %5, i64 0, i64 %.op, !insn.addr !386
  ret i64 %6, !insn.addr !387

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @duffs_device(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1c30:
  %0 = trunc i64 %arg3 to i32, !insn.addr !388
  %1 = icmp slt i32 %0, 1
  %spec.select = select i1 %1, i64 4294967295, i64 %arg1
  ret i64 %spec.select, !insn.addr !389
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

define i64 @call_virtual_func(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1fa0:
  %0 = mul i64 %arg2, 2, !insn.addr !504
  %1 = and i64 %0, 4294967294, !insn.addr !504
  ret i64 %1, !insn.addr !505
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

define i64 @test_control_flow_l2(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_2020:
  %rdx.4.reg2mem = alloca i64, !insn.addr !517
  %rdx.0.reg2mem = alloca i64, !insn.addr !517
  %stack_var_-56 = alloca i64, align 8
  %stack_var_-88 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !518
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_3118 to i8*)), !insn.addr !519
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3140, i64 0, i64 0), i64 12), !insn.addr !520
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !521
  br label %dec_label_pc_207f, !insn.addr !521

dec_label_pc_207f:                                ; preds = %dec_label_pc_207f, %dec_label_pc_2020
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %3 = add nuw nsw i64 %rdx.0.reload, 1, !insn.addr !522
  %4 = and i64 %3, 4294967295, !insn.addr !522
  %5 = trunc i64 %3 to i32, !insn.addr !523
  %6 = icmp eq i32 %5, ptrtoint (i32* @global_var_3e9 to i32), !insn.addr !523
  store i64 %4, i64* %rdx.0.reg2mem, !insn.addr !524
  br i1 %6, label %dec_label_pc_21b0, label %dec_label_pc_207f, !insn.addr !524

dec_label_pc_21b0:                                ; preds = %dec_label_pc_207f
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3523, i64 0, i64 0), i64 %4), !insn.addr !525
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3541, i64 0, i64 0), i64 4294967295), !insn.addr !526
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3541, i64 0, i64 0), i64 4294967294), !insn.addr !527
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3541, i64 0, i64 0), i64 4), !insn.addr !528
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3160, i64 0, i64 0), i64 10), !insn.addr !529
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3160, i64 0, i64 0), i64 5), !insn.addr !530
  %13 = ptrtoint i64* %stack_var_-88 to i64, !insn.addr !531
  %14 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !532
  %15 = load i128, i128* @global_var_3670, align 8, !insn.addr !533
  %16 = call i128 @__asm_movdqa(i128 %15), !insn.addr !533
  %17 = call i64 @__asm_movaps(i128 %16), !insn.addr !534
  store i64 %17, i64* %stack_var_-88, align 8, !insn.addr !534
  %18 = load i128, i128* @global_var_3690, align 8, !insn.addr !535
  %19 = call i128 @__asm_movdqa(i128 %18), !insn.addr !535
  %20 = call i64 @__asm_movaps(i128 %19), !insn.addr !536
  %21 = call i128 @__asm_pxor(i128 %19, i128 %19), !insn.addr !537
  %22 = call i64 @__asm_movaps(i128 %21), !insn.addr !538
  store i64 %22, i64* %stack_var_-56, align 8, !insn.addr !538
  %23 = call i64 @__asm_movaps(i128 %21), !insn.addr !539
  %24 = call i64 @duffs_device(i64 %14, i64 %13, i64 8, i64 %arg4), !insn.addr !540
  %25 = and i64 %24, 4294967295, !insn.addr !541
  %26 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_355e, i64 0, i64 0), i64 %25), !insn.addr !542
  %27 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3188, i64 0, i64 0), i64 18), !insn.addr !543
  %28 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_31b0, i64 0, i64 0), i64 30), !insn.addr !544
  store i64 0, i64* %rdx.4.reg2mem, !insn.addr !545
  br label %dec_label_pc_21d8, !insn.addr !545

dec_label_pc_21d8:                                ; preds = %dec_label_pc_21d8, %dec_label_pc_21b0
  %rdx.4.reload = load i64, i64* %rdx.4.reg2mem
  %29 = add nuw nsw i64 %rdx.4.reload, 1, !insn.addr !546
  %30 = and i64 %29, 4294967295, !insn.addr !546
  %31 = trunc i64 %29 to i32, !insn.addr !547
  %32 = icmp eq i32 %31, 101, !insn.addr !547
  store i64 %30, i64* %rdx.4.reg2mem, !insn.addr !548
  br i1 %32, label %dec_label_pc_21e0, label %dec_label_pc_21d8, !insn.addr !548

dec_label_pc_21e0:                                ; preds = %dec_label_pc_21d8
  %33 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_31d0, i64 0, i64 0), i64 %30), !insn.addr !549
  %34 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_31f8, i64 0, i64 0), i64 120), !insn.addr !550
  %35 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3220, i64 0, i64 0), i64 120), !insn.addr !551
  %36 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3240, i64 0, i64 0), i64 3), !insn.addr !552
  %37 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_357b, i64 0, i64 0), i64 10), !insn.addr !553
  %38 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_3268, i64 0, i64 0), i64 10), !insn.addr !554
  %39 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_3268, i64 0, i64 0), i64 120), !insn.addr !555
  %40 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3290, i64 0, i64 0), i64 30), !insn.addr !556
  %41 = call i64 @__readfsqword(i64 40), !insn.addr !557
  %42 = sub i64 %0, %41, !insn.addr !557
  %43 = icmp eq i64 %42, 0, !insn.addr !557
  %44 = icmp eq i1 %43, false, !insn.addr !558
  br i1 %44, label %dec_label_pc_22bd, label %dec_label_pc_22aa, !insn.addr !558

dec_label_pc_22aa:                                ; preds = %dec_label_pc_21e0
  ret i64 %42, !insn.addr !559

dec_label_pc_22bd:                                ; preds = %dec_label_pc_21e0
  call void @__stack_chk_fail(), !insn.addr !560
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !561

; uselistorder directives
  uselistorder i64 %30, { 1, 0 }
  uselistorder i128 %21, { 1, 0 }
  uselistorder i128 %19, { 2, 1, 0 }
  uselistorder i64 %4, { 1, 0 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.4.reg2mem, { 1, 0, 2 }
  uselistorder i64 30, { 2, 0, 1 }
  uselistorder i64 18, { 1, 0 }
  uselistorder i64 8, { 3, 1, 0, 4, 2 }
  uselistorder i128 (i128, i128)* @__asm_pxor, { 2, 0, 1 }
  uselistorder i128 (i128)* @__asm_movdqa, { 13, 14, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }
  uselistorder i128* @global_var_3670, { 1, 0 }
  uselistorder i64 5, { 3, 0, 4, 5, 1, 2 }
  uselistorder i64 4, { 12, 14, 15, 2, 8, 1, 0, 13, 9, 5, 3, 10, 6, 7, 4, 11 }
  uselistorder i64 12, { 2, 0, 3, 1 }
}

define i64 @non_local_jump(i64 %arg1) local_unnamed_addr {
dec_label_pc_22d0:
  %storemerge.reg2mem = alloca i64, !insn.addr !562
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @global_var_6040 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !563
  %1 = icmp eq i32 %0, 0, !insn.addr !564
  %2 = icmp eq i1 %1, false, !insn.addr !565
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !565
  br i1 %2, label %dec_label_pc_2305, label %dec_label_pc_22f0, !insn.addr !565

dec_label_pc_22f0:                                ; preds = %dec_label_pc_22d0
  %3 = trunc i64 %arg1 to i32, !insn.addr !566
  %4 = icmp slt i32 %3, 0, !insn.addr !566
  br i1 %4, label %dec_label_pc_2328, label %dec_label_pc_22f8, !insn.addr !567

dec_label_pc_22f8:                                ; preds = %dec_label_pc_22f0
  %5 = icmp sgt i32 %3, 100, !insn.addr !568
  br i1 %5, label %dec_label_pc_2317, label %dec_label_pc_22ff, !insn.addr !568

dec_label_pc_22ff:                                ; preds = %dec_label_pc_22f8
  %6 = mul i64 %arg1, 2
  %7 = and i64 %6, 4294967294, !insn.addr !569
  store i64 %7, i64* %storemerge.reg2mem, !insn.addr !569
  br label %dec_label_pc_2305, !insn.addr !569

dec_label_pc_2305:                                ; preds = %dec_label_pc_22d0, %dec_label_pc_22ff
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !570

dec_label_pc_2317:                                ; preds = %dec_label_pc_22f8
  %8 = call i64 @__longjmp_chk(i64* nonnull @global_var_6040, i64 2), !insn.addr !571
  br label %dec_label_pc_2328, !insn.addr !571

dec_label_pc_2328:                                ; preds = %dec_label_pc_2317, %dec_label_pc_22f0
  %9 = call i64 @__longjmp_chk(i64* nonnull @global_var_6040, i64 1), !insn.addr !572
  ret i64 %9, !insn.addr !573

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 (i64*, i64)* @__longjmp_chk, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2305, { 1, 0 }
}

define i64 @cpp_exception(i64 %arg1) local_unnamed_addr {
dec_label_pc_2340:
  %merge.reg2mem = alloca i64, !insn.addr !574
  %0 = trunc i64 %arg1 to i32, !insn.addr !575
  %1 = icmp slt i32 %0, 0, !insn.addr !575
  store i64 4294967295, i64* %merge.reg2mem, !insn.addr !576
  br i1 %1, label %dec_label_pc_2358, label %dec_label_pc_2348, !insn.addr !576

dec_label_pc_2348:                                ; preds = %dec_label_pc_2340
  %2 = icmp sgt i32 %0, 100, !insn.addr !577
  store i64 4294967294, i64* %merge.reg2mem, !insn.addr !577
  br i1 %2, label %dec_label_pc_2358, label %dec_label_pc_234d, !insn.addr !577

dec_label_pc_234d:                                ; preds = %dec_label_pc_2348
  %3 = mul i64 %arg1, 2, !insn.addr !578
  %4 = and i64 %3, 4294967294, !insn.addr !578
  ret i64 %4, !insn.addr !579

dec_label_pc_2358:                                ; preds = %dec_label_pc_2340, %dec_label_pc_2348
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !580

; uselistorder directives
  uselistorder i64* %merge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2358, { 1, 0 }
}

define i64 @large_jump_table(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2370:
  %stack_var_-104 = alloca i64, align 8
  %0 = call i128 @__asm_movq(i64 4672), !insn.addr !581
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !582
  %2 = call i128 @__asm_movq(i64 4688), !insn.addr !583
  %3 = call i128 @__asm_punpcklqdq(i128 %0, i128 %2), !insn.addr !584
  %4 = call i128 @__asm_movq(i64 4720), !insn.addr !585
  %5 = call i64 @__asm_movaps(i128 %3), !insn.addr !586
  store i64 %5, i64* %stack_var_-104, align 8, !insn.addr !586
  %6 = call i128 @__asm_movq(i64 4704), !insn.addr !587
  %7 = call i128 @__asm_movq(i64 4784), !insn.addr !588
  %8 = call i128 @__asm_punpcklqdq(i128 %6, i128 %4), !insn.addr !589
  %9 = call i64 @__asm_movaps(i128 %8), !insn.addr !590
  %10 = call i128 @__asm_movq(i64 4752), !insn.addr !591
  %11 = call i128 @__asm_movq(i64 4816), !insn.addr !592
  %12 = call i128 @__asm_punpcklqdq(i128 %10, i128 %7), !insn.addr !593
  %13 = call i64 @__asm_movaps(i128 %12), !insn.addr !594
  %14 = call i128 @__asm_movq(i64 4800), !insn.addr !595
  %15 = call i128 @__asm_movq(i64 4848), !insn.addr !596
  %16 = call i128 @__asm_punpcklqdq(i128 %14, i128 %11), !insn.addr !597
  %17 = call i64 @__asm_movaps(i128 %16), !insn.addr !598
  %18 = call i128 @__asm_movq(i64 4832), !insn.addr !599
  %19 = call i128 @__asm_punpcklqdq(i128 %18, i128 %15), !insn.addr !600
  %20 = call i64 @__asm_movaps(i128 %19), !insn.addr !601
  %21 = trunc i64 %arg1 to i32, !insn.addr !602
  %22 = icmp ult i32 %21, 10
  %23 = call i64 @__readfsqword(i64 40)
  %24 = icmp eq i64 %1, %23
  %25 = icmp eq i1 %24, false
  br i1 %22, label %dec_label_pc_2436, label %dec_label_pc_2450, !insn.addr !603

dec_label_pc_2436:                                ; preds = %dec_label_pc_2370
  br i1 %25, label %dec_label_pc_246a, label %dec_label_pc_2446, !insn.addr !604

dec_label_pc_2446:                                ; preds = %dec_label_pc_2436
  %26 = ptrtoint i64* %stack_var_-104 to i64, !insn.addr !605
  %sext = mul i64 %arg1, 4294967296
  %27 = ashr exact i64 %sext, 29, !insn.addr !606
  %28 = add i64 %27, %26, !insn.addr !606
  %29 = inttoptr i64 %28 to i64*, !insn.addr !606
  %30 = load i64, i64* %29, align 8, !insn.addr !606
  ret i64 %30, !insn.addr !607

dec_label_pc_2450:                                ; preds = %dec_label_pc_2370
  br i1 %25, label %dec_label_pc_246a, label %dec_label_pc_2460, !insn.addr !608

dec_label_pc_2460:                                ; preds = %dec_label_pc_2450
  ret i64 4294967295, !insn.addr !609

dec_label_pc_246a:                                ; preds = %dec_label_pc_2450, %dec_label_pc_2436
  call void @__stack_chk_fail(), !insn.addr !610
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !611

; uselistorder directives
  uselistorder i64* %stack_var_-104, { 1, 0 }
  uselistorder i32 10, { 2, 0, 1, 3, 4 }
}

define i64 @conditional_func_ptr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2470:
  %0 = and i64 %arg1, 4294967295, !insn.addr !612
  %1 = trunc i64 %arg1 to i32, !insn.addr !613
  %2 = icmp eq i32 %1, 0, !insn.addr !613
  %spec.select = select i1 %2, i64 %0, i64 4608
  ret i64 %spec.select, !insn.addr !614
}

define i64 @state_machine(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_24a0:
  %merge.reg2mem = alloca i64, !insn.addr !615
  %0 = trunc i64 %arg2 to i32, !insn.addr !616
  %1 = icmp eq i32 %0, 2, !insn.addr !616
  store i64 2, i64* %merge.reg2mem, !insn.addr !617
  br i1 %1, label %dec_label_pc_24e0, label %dec_label_pc_24a9, !insn.addr !617

dec_label_pc_24a9:                                ; preds = %dec_label_pc_24a0
  %2 = icmp sgt i32 %0, 2, !insn.addr !618
  br i1 %2, label %dec_label_pc_24d0, label %dec_label_pc_24ab, !insn.addr !618

dec_label_pc_24ab:                                ; preds = %dec_label_pc_24a9
  %3 = icmp eq i32 %0, 0, !insn.addr !619
  br i1 %3, label %dec_label_pc_2500, label %dec_label_pc_24af, !insn.addr !620

dec_label_pc_24af:                                ; preds = %dec_label_pc_24ab
  %4 = icmp eq i32 %0, 1, !insn.addr !621
  %5 = icmp eq i1 %4, false, !insn.addr !622
  store i64 3, i64* %merge.reg2mem, !insn.addr !622
  br i1 %5, label %dec_label_pc_24e0, label %dec_label_pc_24b4, !insn.addr !622

dec_label_pc_24b4:                                ; preds = %dec_label_pc_24af
  %6 = trunc i64 %arg1 to i32, !insn.addr !623
  %7 = icmp eq i32 %6, 2, !insn.addr !623
  store i64 2, i64* %merge.reg2mem, !insn.addr !624
  br i1 %7, label %dec_label_pc_24e0, label %dec_label_pc_24b9, !insn.addr !624

dec_label_pc_24b9:                                ; preds = %dec_label_pc_24b4
  %8 = icmp eq i32 %6, 99, !insn.addr !625
  %9 = zext i1 %8 to i64, !insn.addr !626
  %10 = select i1 %8, i64 2, i64 1, !insn.addr !627
  %11 = add nuw nsw i64 %10, %9, !insn.addr !627
  ret i64 %11, !insn.addr !628

dec_label_pc_24d0:                                ; preds = %dec_label_pc_24a9
  %12 = icmp eq i32 %0, 3, !insn.addr !629
  %13 = icmp eq i1 %12, false, !insn.addr !630
  store i64 3, i64* %merge.reg2mem, !insn.addr !630
  br i1 %13, label %dec_label_pc_24e0, label %dec_label_pc_24d5, !insn.addr !630

dec_label_pc_24d5:                                ; preds = %dec_label_pc_24d0
  %14 = trunc i64 %arg1 to i32, !insn.addr !631
  %15 = icmp eq i32 %14, 0, !insn.addr !631
  %16 = select i1 %15, i64 0, i64 3, !insn.addr !632
  ret i64 %16, !insn.addr !633

dec_label_pc_24e0:                                ; preds = %dec_label_pc_24af, %dec_label_pc_24d0, %dec_label_pc_24b4, %dec_label_pc_24a0
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !634

dec_label_pc_2500:                                ; preds = %dec_label_pc_24ab
  %17 = trunc i64 %arg1 to i32, !insn.addr !635
  %18 = icmp eq i32 %17, 1, !insn.addr !635
  %19 = zext i1 %18 to i64, !insn.addr !636
  ret i64 %19, !insn.addr !637

; uselistorder directives
  uselistorder i1 %8, { 1, 0 }
  uselistorder i32 %0, { 0, 2, 1, 3, 4 }
  uselistorder i64* %merge.reg2mem, { 0, 2, 4, 1, 3 }
  uselistorder i32 3, { 2, 3, 5, 4, 6, 7, 8, 0, 1, 9 }
  uselistorder i32 2, { 4, 3, 5, 6, 0, 1, 2, 7, 8, 9 }
  uselistorder i64 %arg1, { 1, 2, 0 }
  uselistorder label %dec_label_pc_24e0, { 1, 2, 0, 3 }
}

define i64 @fsm_func_table(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2510:
  %stack_var_-56 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !638
  %1 = call i128 @__asm_movq(i64 4864), !insn.addr !639
  %2 = call i128 @__asm_movq(i64 4880), !insn.addr !640
  %3 = call i128 @__asm_punpcklqdq(i128 %1, i128 %2), !insn.addr !641
  %4 = call i128 @__asm_movq(i64 4944), !insn.addr !642
  %5 = call i64 @__asm_movaps(i128 %3), !insn.addr !643
  store i64 %5, i64* %stack_var_-56, align 8, !insn.addr !643
  %6 = call i128 @__asm_movq(i64 4928), !insn.addr !644
  %7 = call i128 @__asm_punpcklqdq(i128 %6, i128 %4), !insn.addr !645
  %8 = call i64 @__asm_movaps(i128 %7), !insn.addr !646
  %9 = trunc i64 %arg2 to i32, !insn.addr !647
  %10 = icmp ult i32 %9, 4
  %11 = call i64 @__readfsqword(i64 40)
  %12 = icmp eq i64 %0, %11
  %13 = icmp eq i1 %12, false
  br i1 %10, label %dec_label_pc_256c, label %dec_label_pc_2590, !insn.addr !648

dec_label_pc_256c:                                ; preds = %dec_label_pc_2510
  br i1 %13, label %dec_label_pc_25aa, label %dec_label_pc_257c, !insn.addr !649

dec_label_pc_257c:                                ; preds = %dec_label_pc_256c
  %14 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !650
  %sext = mul i64 %arg2, 4294967296
  %15 = ashr exact i64 %sext, 29, !insn.addr !651
  %16 = add i64 %15, %14, !insn.addr !651
  %17 = inttoptr i64 %16 to i64*, !insn.addr !651
  %18 = load i64, i64* %17, align 8, !insn.addr !651
  ret i64 %18, !insn.addr !652

dec_label_pc_2590:                                ; preds = %dec_label_pc_2510
  br i1 %13, label %dec_label_pc_25aa, label %dec_label_pc_25a0, !insn.addr !653

dec_label_pc_25a0:                                ; preds = %dec_label_pc_2590
  ret i64 3, !insn.addr !654

dec_label_pc_25aa:                                ; preds = %dec_label_pc_2590, %dec_label_pc_256c
  call void @__stack_chk_fail(), !insn.addr !655
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !656

; uselistorder directives
  uselistorder i64* %stack_var_-56, { 1, 0 }
  uselistorder i64 3, { 6, 8, 1, 0, 16, 9, 10, 11, 2, 3, 12, 4, 7, 13, 5, 14, 15 }
  uselistorder i64 29, { 2, 0, 1 }
  uselistorder i64 4294967296, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 17, 18, 10, 11, 12, 13, 14, 15, 16 }
}

define i64 @computed_goto(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_25b0:
  %merge.reg2mem = alloca i64, !insn.addr !657
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !658
  %1 = call i128 @__asm_movq(i64 9824), !insn.addr !659
  %2 = call i128 @__asm_movq(i64 9808), !insn.addr !660
  %3 = call i128 @__asm_punpcklqdq(i128 %1, i128 %2), !insn.addr !661
  %4 = call i128 @__asm_movq(i64 9752), !insn.addr !662
  %5 = call i64 @__asm_movaps(i128 %3), !insn.addr !663
  %6 = call i128 @__asm_movq(i64 9792), !insn.addr !664
  %7 = call i128 @__asm_punpcklqdq(i128 %6, i128 %4), !insn.addr !665
  %8 = call i64 @__asm_movaps(i128 %7), !insn.addr !666
  %9 = trunc i64 %arg2 to i32, !insn.addr !667
  %10 = icmp ult i32 %9, 4
  store i64 9752, i64* %merge.reg2mem, !insn.addr !668
  br i1 %10, label %dec_label_pc_260c, label %dec_label_pc_2670, !insn.addr !668

dec_label_pc_260c:                                ; preds = %dec_label_pc_2670, %dec_label_pc_25b0
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !669

dec_label_pc_2670:                                ; preds = %dec_label_pc_25b0
  %11 = call i64 @__readfsqword(i64 40), !insn.addr !670
  %12 = icmp eq i64 %0, %11, !insn.addr !670
  %13 = icmp eq i1 %12, false, !insn.addr !671
  store i64 4294967295, i64* %merge.reg2mem, !insn.addr !671
  br i1 %13, label %dec_label_pc_2677, label %dec_label_pc_260c, !insn.addr !671

dec_label_pc_2677:                                ; preds = %dec_label_pc_2670
  call void @__stack_chk_fail(), !insn.addr !672
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !673

; uselistorder directives
  uselistorder i64* %merge.reg2mem, { 1, 0, 2 }
  uselistorder i64 ptrtoint (i32* @0 to i64), { 1, 2, 3, 4, 5, 0 }
  uselistorder void ()* @__stack_chk_fail, { 3, 4, 2, 0, 1, 5 }
  uselistorder i1 false, { 3, 4, 5, 6, 7, 29, 30, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 0, 19, 20, 21, 22, 23, 24, 1, 25, 2, 26, 27, 28 }
  uselistorder i32 4, { 1, 2, 0, 3 }
  uselistorder i64 (i128)* @__asm_movaps, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 10, 11, 12, 13, 9 }
}

define i64 @obfuscated_cf(i64 %arg1) local_unnamed_addr {
dec_label_pc_2680:
  %0 = mul i64 %arg1, 2, !insn.addr !674
  %1 = and i64 %0, 4294967294, !insn.addr !674
  ret i64 %1, !insn.addr !675
}

define i64 @opaque_predicate(i64 %arg1) local_unnamed_addr {
dec_label_pc_2690:
  %0 = mul i64 %arg1, 2, !insn.addr !676
  %1 = and i64 %0, 4294967294, !insn.addr !676
  ret i64 %1, !insn.addr !677

; uselistorder directives
  uselistorder i64 4294967294, { 6, 7, 8, 0, 2, 15, 9, 10, 11, 1, 12, 3, 4, 5, 13, 14 }
}

define i64 @overlapped_code(i64 %arg1) local_unnamed_addr {
dec_label_pc_26a0:
  %0 = urem i64 %arg1, 2
  %1 = icmp eq i64 %0, 0, !insn.addr !678
  br i1 %1, label %dec_label_pc_26b0, label %dec_label_pc_26aa, !insn.addr !679

dec_label_pc_26aa:                                ; preds = %dec_label_pc_26a0
  %2 = mul i64 %arg1, 2, !insn.addr !680
  %3 = add i64 %arg1, 1, !insn.addr !680
  %4 = add i64 %3, %2, !insn.addr !680
  %5 = and i64 %4, 4294967295, !insn.addr !680
  ret i64 %5, !insn.addr !681

dec_label_pc_26b0:                                ; preds = %dec_label_pc_26a0
  %6 = trunc i64 %arg1 to i32, !insn.addr !682
  %7 = icmp slt i32 %6, 0
  %8 = zext i1 %7 to i32, !insn.addr !683
  %9 = add i32 %8, %6, !insn.addr !684
  %10 = ashr i32 %9, 1, !insn.addr !685
  %11 = zext i32 %10 to i64, !insn.addr !685
  ret i64 %11, !insn.addr !686

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i32 0, { 0, 7, 8, 9, 10, 33, 34, 1, 2, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 3, 24, 25, 26, 27, 4, 5, 28, 29, 30, 31, 32, 6 }
  uselistorder i64 %arg1, { 2, 3, 0, 1 }
}

define i64 @test_control_flow_l3() local_unnamed_addr {
dec_label_pc_26c0:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_32b8 to i8*)), !insn.addr !687
  %1 = call i64 @non_local_jump.constprop.0(), !insn.addr !688
  %2 = and i64 %1, 4294967295, !insn.addr !689
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_32e0, i64 0, i64 0), i64 %2), !insn.addr !690
  %4 = call i64 @non_local_jump(i64 4294967291), !insn.addr !691
  %5 = and i64 %4, 4294967295, !insn.addr !692
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_32e0, i64 0, i64 0), i64 %5), !insn.addr !693
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3599, i64 0, i64 0), i64 10), !insn.addr !694
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3599, i64 0, i64 0), i64 4294967295), !insn.addr !695
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3300, i64 0, i64 0), i64 15), !insn.addr !696
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_3328, i64 0, i64 0), i64 10), !insn.addr !697
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_35b7, i64 0, i64 0), i64 1), !insn.addr !698
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3350, i64 0, i64 0), i64 2), !insn.addr !699
  %13 = call i64 @computed_goto.constprop.0(), !insn.addr !700
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_35d5, i64 0, i64 0)), !insn.addr !701
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_35f3, i64 0, i64 0), i64 10), !insn.addr !702
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3370, i64 0, i64 0), i64 10), !insn.addr !703
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3398, i64 0, i64 0), i64 16), !insn.addr !704
  %18 = sext i32 %17 to i64, !insn.addr !704
  ret i64 %18, !insn.addr !704

; uselistorder directives
  uselistorder i64 16, { 1, 0 }
  uselistorder i64 2, { 37, 11, 25, 12, 13, 32, 1, 0, 14, 38, 15, 16, 26, 33, 27, 34, 28, 2, 30, 4, 3, 17, 29, 18, 5, 7, 6, 8, 39, 19, 35, 9, 31, 20, 10, 21, 23, 24, 36, 22 }
  uselistorder i64 1, { 38, 41, 19, 39, 21, 20, 24, 23, 22, 25, 26, 0, 1, 2, 3, 27, 28, 4, 5, 6, 7, 40, 29, 9, 10, 8, 30, 31, 32, 11, 12, 13, 33, 34, 35, 14, 18, 36, 15, 37, 16, 17 }
  uselistorder i64 10, { 6, 7, 8, 9, 10, 11, 12, 2, 0, 3, 13, 14, 4, 1, 5 }
  uselistorder i64 4294967291, { 1, 0, 2 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 57 }
  uselistorder i64 4294967295, { 100, 16, 17, 18, 0, 19, 7, 1, 2, 21, 22, 101, 20, 23, 24, 8, 27, 25, 28, 26, 13, 29, 30, 31, 32, 33, 34, 35, 36, 37, 9, 38, 39, 40, 41, 42, 43, 44, 11, 45, 46, 3, 47, 48, 4, 102, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 75, 74, 76, 77, 78, 12, 5, 6, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 10, 14, 89, 90, 15, 91, 92, 93, 94, 95, 96, 97, 98, 99 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
  uselistorder i64 0, { 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 145, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 0, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 1, 88, 89, 3, 2, 90, 33, 91, 92, 4, 5, 6, 93, 94, 95, 29, 7, 12, 10, 8, 9, 11, 13, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 118, 116, 117, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 15, 14, 16, 18, 19, 139, 17, 20, 21, 140, 141, 25, 23, 24, 22, 32, 26, 142, 27, 144, 30, 31, 28, 146, 34, 35, 36, 37, 38, 39, 143 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_27fc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !705

; uselistorder directives
  uselistorder i32 1, { 6, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 176, 7, 170, 100, 101, 8, 171, 9, 10, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 173, 172, 12, 11, 120, 15, 14, 13, 174, 177, 86, 121, 178, 122, 123, 24, 23, 22, 21, 20, 19, 18, 17, 16, 124, 27, 26, 25, 29, 28, 5, 37, 36, 35, 34, 33, 32, 31, 30, 125, 40, 39, 38, 4, 126, 127, 41, 179, 128, 42, 84, 47, 46, 45, 44, 43, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 87, 156, 50, 49, 48, 157, 51, 158, 57, 56, 55, 54, 53, 52, 1, 58, 159, 61, 60, 59, 63, 62, 66, 65, 64, 160, 72, 71, 70, 69, 68, 67, 0, 161, 73, 74, 85, 75, 162, 163, 164, 165, 76, 166, 167, 77, 168, 78, 79, 169, 82, 81, 80, 3, 175, 2, 83 }
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
!51 = !{i64 4733}
!52 = !{i64 4734}
!53 = !{i64 4736}
!54 = !{i64 4742}
!55 = !{i64 4752}
!56 = !{i64 4761}
!57 = !{i64 4763}
!58 = !{i64 4756}
!59 = !{i64 4765}
!60 = !{i64 4766}
!61 = !{i64 4768}
!62 = !{i64 4774}
!63 = !{i64 4790}
!64 = !{i64 4792}
!65 = !{i64 4806}
!66 = !{i64 4808}
!67 = !{i64 4822}
!68 = !{i64 4824}
!69 = !{i64 4836}
!70 = !{i64 4840}
!71 = !{i64 4842}
!72 = !{i64 4852}
!73 = !{i64 4856}
!74 = !{i64 4858}
!75 = !{i64 4870}
!76 = !{i64 4873}
!77 = !{i64 4876}
!78 = !{i64 4884}
!79 = !{i64 4887}
!80 = !{i64 4891}
!81 = !{i64 4894}
!82 = !{i64 4897}
!83 = !{i64 4901}
!84 = !{i64 4917}
!85 = !{i64 4937}
!86 = !{i64 4950}
!87 = !{i64 4957}
!88 = !{i64 4960}
!89 = !{i64 4981}
!90 = !{i64 5003}
!91 = !{i64 5012}
!92 = !{i64 5024}
!93 = !{i64 5027}
!94 = !{i64 5044}
!95 = !{i64 5047}
!96 = !{i64 5049}
!97 = !{i64 5051}
!98 = !{i64 5063}
!99 = !{i64 5060}
!100 = !{i64 5065}
!101 = !{i64 5068}
!102 = !{i64 5078}
!103 = !{i64 5080}
!104 = !{i64 5083}
!105 = !{i64 5088}
!106 = !{i64 5094}
!107 = !{i64 5096}
!108 = !{i64 5101}
!109 = !{i64 5098}
!110 = !{i64 5103}
!111 = !{i64 5106}
!112 = !{i64 5120}
!113 = !{i64 5126}
!114 = !{i64 5128}
!115 = !{i64 5135}
!116 = !{i64 5137}
!117 = !{i64 5139}
!118 = !{i64 5141}
!119 = !{i64 5143}
!120 = !{i64 5145}
!121 = !{i64 5149}
!122 = !{i64 5152}
!123 = !{i64 5155}
!124 = !{i64 5158}
!125 = !{i64 5173}
!126 = !{i64 5200}
!127 = !{i64 5209}
!128 = !{i64 5218}
!129 = !{i64 5231}
!130 = !{i64 5234}
!131 = !{i64 5245}
!132 = !{i64 5248}
!133 = !{i64 5257}
!134 = !{i64 5260}
!135 = !{i64 5262}
!136 = !{i64 5265}
!137 = !{i64 5268}
!138 = !{i64 5280}
!139 = !{i64 5289}
!140 = !{i64 5292}
!141 = !{i64 5294}
!142 = !{i64 5303}
!143 = !{i64 5306}
!144 = !{i64 5321}
!145 = !{i64 5331}
!146 = !{i64 5348}
!147 = !{i64 5361}
!148 = !{i64 5380}
!149 = !{i64 5392}
!150 = !{i64 5395}
!151 = !{i64 5398}
!152 = !{i64 5402}
!153 = !{i64 5413}
!154 = !{i64 5416}
!155 = !{i64 5418}
!156 = !{i64 5429}
!157 = !{i64 5431}
!158 = !{i64 5440}
!159 = !{i64 5446}
!160 = !{i64 5448}
!161 = !{i64 5457}
!162 = !{i64 5460}
!163 = !{i64 5468}
!164 = !{i64 5478}
!165 = !{i64 5482}
!166 = !{i64 5490}
!167 = !{i64 5493}
!168 = !{i64 5496}
!169 = !{i64 5500}
!170 = !{i64 5503}
!171 = !{i64 5507}
!172 = !{i64 5511}
!173 = !{i64 5513}
!174 = !{i64 5515}
!175 = !{i64 5521}
!176 = !{i64 5526}
!177 = !{i64 5529}
!178 = !{i64 5533}
!179 = !{i64 5537}
!180 = !{i64 5542}
!181 = !{i64 5546}
!182 = !{i64 5550}
!183 = !{i64 5553}
!184 = !{i64 5444}
!185 = !{i64 5555}
!186 = !{i64 5558}
!187 = !{i64 5562}
!188 = !{i64 5564}
!189 = !{i64 5566}
!190 = !{i64 5571}
!191 = !{i64 5573}
!192 = !{i64 5575}
!193 = !{i64 5580}
!194 = !{i64 5582}
!195 = !{i64 5584}
!196 = !{i64 5589}
!197 = !{i64 5591}
!198 = !{i64 5593}
!199 = !{i64 5598}
!200 = !{i64 5600}
!201 = !{i64 5602}
!202 = !{i64 5607}
!203 = !{i64 5609}
!204 = !{i64 5611}
!205 = !{i64 5616}
!206 = !{i64 5618}
!207 = !{i64 5620}
!208 = !{i64 5625}
!209 = !{i64 5627}
!210 = !{i64 5629}
!211 = !{i64 5635}
!212 = !{i64 5637}
!213 = !{i64 5632}
!214 = !{i64 5640}
!215 = !{i64 5650}
!216 = !{i64 5664}
!217 = !{i64 5668}
!218 = !{i64 5670}
!219 = !{i64 5680}
!220 = !{i64 5683}
!221 = !{i64 5685}
!222 = !{i64 5696}
!223 = !{i64 5699}
!224 = !{i64 5703}
!225 = !{i64 5705}
!226 = !{i64 5707}
!227 = !{i64 5712}
!228 = !{i64 5744}
!229 = !{i64 5751}
!230 = !{i64 5760}
!231 = !{i64 5763}
!232 = !{i64 5765}
!233 = !{i64 5776}
!234 = !{i64 5779}
!235 = !{i64 5783}
!236 = !{i64 5785}
!237 = !{i64 5787}
!238 = !{i64 5792}
!239 = !{i64 5808}
!240 = !{i64 5812}
!241 = !{i64 5814}
!242 = !{i64 5824}
!243 = !{i64 5829}
!244 = !{i64 5826}
!245 = !{i64 5832}
!246 = !{i64 5835}
!247 = !{i64 5837}
!248 = !{i64 5839}
!249 = !{i64 5856}
!250 = !{i64 5860}
!251 = !{i64 5882}
!252 = !{i64 5885}
!253 = !{i64 5888}
!254 = !{i64 5892}
!255 = !{i64 5898}
!256 = !{i64 5936}
!257 = !{i64 5940}
!258 = !{i64 5942}
!259 = !{i64 5951}
!260 = !{i64 5954}
!261 = !{i64 5962}
!262 = !{i64 5966}
!263 = !{i64 5976}
!264 = !{i64 5984}
!265 = !{i64 5992}
!266 = !{i64 5995}
!267 = !{i64 5999}
!268 = !{i64 6000}
!269 = !{i64 6004}
!270 = !{i64 6007}
!271 = !{i64 6011}
!272 = !{i64 6015}
!273 = !{i64 6019}
!274 = !{i64 6023}
!275 = !{i64 6027}
!276 = !{i64 6031}
!277 = !{i64 6033}
!278 = !{i64 6035}
!279 = !{i64 6041}
!280 = !{i64 6046}
!281 = !{i64 6049}
!282 = !{i64 6056}
!283 = !{i64 6060}
!284 = !{i64 6065}
!285 = !{i64 6069}
!286 = !{i64 6073}
!287 = !{i64 6075}
!288 = !{i64 6053}
!289 = !{i64 6082}
!290 = !{i64 6084}
!291 = !{i64 6089}
!292 = !{i64 6097}
!293 = !{i64 6105}
!294 = !{i64 6107}
!295 = !{i64 6113}
!296 = !{i64 6116}
!297 = !{i64 6121}
!298 = !{i64 6132}
!299 = !{i64 6137}
!300 = !{i64 6145}
!301 = !{i64 6148}
!302 = !{i64 6154}
!303 = !{i64 6176}
!304 = !{i64 6180}
!305 = !{i64 6182}
!306 = !{i64 6184}
!307 = !{i64 6187}
!308 = !{i64 6190}
!309 = !{i64 6192}
!310 = !{i64 6202}
!311 = !{i64 6204}
!312 = !{i64 6231}
!313 = !{i64 6224}
!314 = !{i64 6228}
!315 = !{i64 6233}
!316 = !{i64 6238}
!317 = !{i64 6244}
!318 = !{i64 6248}
!319 = !{i64 6251}
!320 = !{i64 6275}
!321 = !{i64 6299}
!322 = !{i64 6319}
!323 = !{i64 6346}
!324 = !{i64 6366}
!325 = !{i64 6390}
!326 = !{i64 6410}
!327 = !{i64 6430}
!328 = !{i64 6454}
!329 = !{i64 6478}
!330 = !{i64 6502}
!331 = !{i64 6526}
!332 = !{i64 6550}
!333 = !{i64 6574}
!334 = !{i64 6595}
!335 = !{i64 6619}
!336 = !{i64 6643}
!337 = !{i64 6667}
!338 = !{i64 6691}
!339 = !{i64 6715}
!340 = !{i64 6735}
!341 = !{i64 6762}
!342 = !{i64 6786}
!343 = !{i64 6806}
!344 = !{i64 6833}
!345 = !{i64 6857}
!346 = !{i64 6877}
!347 = !{i64 6898}
!348 = !{i64 6912}
!349 = !{i64 6916}
!350 = !{i64 6996}
!351 = !{i64 7001}
!352 = !{i64 7004}
!353 = !{i64 7007}
!354 = !{i64 7029}
!355 = !{i64 7038}
!356 = !{i64 7045}
!357 = !{i64 7052}
!358 = !{i64 7059}
!359 = !{i64 7066}
!360 = !{i64 7088}
!361 = !{i64 7116}
!362 = !{i64 7119}
!363 = !{i64 7094}
!364 = !{i64 7104}
!365 = !{i64 7107}
!366 = !{i64 7112}
!367 = !{i64 7121}
!368 = !{i64 7122}
!369 = !{i64 7128}
!370 = !{i64 7136}
!371 = !{i64 7140}
!372 = !{i64 7142}
!373 = !{i64 7144}
!374 = !{i64 7150}
!375 = !{i64 7152}
!376 = !{i64 7155}
!377 = !{i64 7158}
!378 = !{i64 7161}
!379 = !{i64 7173}
!380 = !{i64 7188}
!381 = !{i64 7190}
!382 = !{i64 7192}
!383 = !{i64 7195}
!384 = !{i64 7202}
!385 = !{i64 7204}
!386 = !{i64 7211}
!387 = !{i64 7214}
!388 = !{i64 7229}
!389 = !{i64 7263}
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
!521 = !{i64 8295}
!522 = !{i64 8304}
!523 = !{i64 8307}
!524 = !{i64 8313}
!525 = !{i64 8349}
!526 = !{i64 8369}
!527 = !{i64 8389}
!528 = !{i64 8416}
!529 = !{i64 8436}
!530 = !{i64 8456}
!531 = !{i64 8461}
!532 = !{i64 8466}
!533 = !{i64 8471}
!534 = !{i64 8484}
!535 = !{i64 8489}
!536 = !{i64 8497}
!537 = !{i64 8502}
!538 = !{i64 8506}
!539 = !{i64 8511}
!540 = !{i64 8516}
!541 = !{i64 8533}
!542 = !{i64 8537}
!543 = !{i64 8561}
!544 = !{i64 8638}
!545 = !{i64 8653}
!546 = !{i64 8656}
!547 = !{i64 8659}
!548 = !{i64 8662}
!549 = !{i64 8686}
!550 = !{i64 8717}
!551 = !{i64 8741}
!552 = !{i64 8765}
!553 = !{i64 8789}
!554 = !{i64 8809}
!555 = !{i64 8829}
!556 = !{i64 8853}
!557 = !{i64 8863}
!558 = !{i64 8872}
!559 = !{i64 8879}
!560 = !{i64 8893}
!561 = !{i64 8909}
!562 = !{i64 8912}
!563 = !{i64 8931}
!564 = !{i64 8940}
!565 = !{i64 8942}
!566 = !{i64 8948}
!567 = !{i64 8950}
!568 = !{i64 8957}
!569 = !{i64 8963}
!570 = !{i64 8969}
!571 = !{i64 8995}
!572 = !{i64 9012}
!573 = !{i64 9017}
!574 = !{i64 9024}
!575 = !{i64 9028}
!576 = !{i64 9030}
!577 = !{i64 9035}
!578 = !{i64 9037}
!579 = !{i64 9040}
!580 = !{i64 9053}
!581 = !{i64 9094}
!582 = !{i64 9106}
!583 = !{i64 9127}
!584 = !{i64 9139}
!585 = !{i64 9143}
!586 = !{i64 9155}
!587 = !{i64 9159}
!588 = !{i64 9171}
!589 = !{i64 9176}
!590 = !{i64 9187}
!591 = !{i64 9192}
!592 = !{i64 9197}
!593 = !{i64 9209}
!594 = !{i64 9220}
!595 = !{i64 9225}
!596 = !{i64 9230}
!597 = !{i64 9242}
!598 = !{i64 9246}
!599 = !{i64 9251}
!600 = !{i64 9256}
!601 = !{i64 9260}
!602 = !{i64 9265}
!603 = !{i64 9268}
!604 = !{i64 9284}
!605 = !{i64 9076}
!606 = !{i64 9286}
!607 = !{i64 9294}
!608 = !{i64 9310}
!609 = !{i64 9321}
!610 = !{i64 9322}
!611 = !{i64 9327}
!612 = !{i64 9332}
!613 = !{i64 9343}
!614 = !{i64 9368}
!615 = !{i64 9376}
!616 = !{i64 9380}
!617 = !{i64 9383}
!618 = !{i64 9385}
!619 = !{i64 9387}
!620 = !{i64 9389}
!621 = !{i64 9391}
!622 = !{i64 9394}
!623 = !{i64 9396}
!624 = !{i64 9399}
!625 = !{i64 9403}
!626 = !{i64 9406}
!627 = !{i64 9409}
!628 = !{i64 9413}
!629 = !{i64 9424}
!630 = !{i64 9427}
!631 = !{i64 9429}
!632 = !{i64 9433}
!633 = !{i64 9436}
!634 = !{i64 9445}
!635 = !{i64 9474}
!636 = !{i64 9477}
!637 = !{i64 9480}
!638 = !{i64 9510}
!639 = !{i64 9531}
!640 = !{i64 9536}
!641 = !{i64 9548}
!642 = !{i64 9552}
!643 = !{i64 9557}
!644 = !{i64 9561}
!645 = !{i64 9566}
!646 = !{i64 9570}
!647 = !{i64 9575}
!648 = !{i64 9578}
!649 = !{i64 9594}
!650 = !{i64 9492}
!651 = !{i64 9599}
!652 = !{i64 9607}
!653 = !{i64 9630}
!654 = !{i64 9641}
!655 = !{i64 9642}
!656 = !{i64 9647}
!657 = !{i64 9648}
!658 = !{i64 9670}
!659 = !{i64 9691}
!660 = !{i64 9696}
!661 = !{i64 9708}
!662 = !{i64 9712}
!663 = !{i64 9717}
!664 = !{i64 9721}
!665 = !{i64 9726}
!666 = !{i64 9730}
!667 = !{i64 9735}
!668 = !{i64 9738}
!669 = !{i64 9743}
!670 = !{i64 9766}
!671 = !{i64 9775}
!672 = !{i64 9847}
!673 = !{i64 9852}
!674 = !{i64 9860}
!675 = !{i64 9863}
!676 = !{i64 9876}
!677 = !{i64 9879}
!678 = !{i64 9892}
!679 = !{i64 9896}
!680 = !{i64 9898}
!681 = !{i64 9902}
!682 = !{i64 9904}
!683 = !{i64 9906}
!684 = !{i64 9909}
!685 = !{i64 9911}
!686 = !{i64 9913}
!687 = !{i64 9939}
!688 = !{i64 9944}
!689 = !{i64 9957}
!690 = !{i64 9961}
!691 = !{i64 9971}
!692 = !{i64 9991}
!693 = !{i64 9995}
!694 = !{i64 10015}
!695 = !{i64 10035}
!696 = !{i64 10059}
!697 = !{i64 10083}
!698 = !{i64 10107}
!699 = !{i64 10131}
!700 = !{i64 10148}
!701 = !{i64 10157}
!702 = !{i64 10181}
!703 = !{i64 10205}
!704 = !{i64 10230}
!705 = !{i64 10248}
