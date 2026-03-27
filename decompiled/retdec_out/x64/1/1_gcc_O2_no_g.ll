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
@global_var_6040 = global i64 0
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

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_10e0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = ptrtoint i8** %argv to i64
  %5 = call i64 @test_control_flow_l1(), !insn.addr !12
  %6 = call i64 @test_control_flow_l2(i64 %argc, i64 %4, i64 %2, i64 %3, i64 %1), !insn.addr !13
  %7 = call i64 @test_control_flow_l3(), !insn.addr !14
  ret i64 0, !insn.addr !15

; uselistorder directives
  uselistorder i64* %0, { 2, 1, 0 }
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

define i64 @sequential_ops(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1370:
  %0 = add i64 %arg2, %arg1, !insn.addr !89
  %1 = mul i64 %0, 2, !insn.addr !90
  %2 = sub i64 %1, %arg3, !insn.addr !91
  %3 = and i64 %2, 4294967295, !insn.addr !91
  ret i64 %3, !insn.addr !92
}

define i64 @single_if(i64 %arg1) local_unnamed_addr {
dec_label_pc_1380:
  %0 = trunc i64 %arg1 to i32, !insn.addr !93
  %1 = icmp sgt i32 %0, 0
  %2 = zext i1 %1 to i64, !insn.addr !94
  %3 = shl i64 %arg1, %2, !insn.addr !95
  %4 = and i64 %3, 4294967295, !insn.addr !95
  ret i64 %4, !insn.addr !96
}

define i64 @if_else(i64 %arg1) local_unnamed_addr {
dec_label_pc_1390:
  %0 = trunc i64 %arg1 to i32, !insn.addr !97
  %1 = icmp eq i32 %0, 0, !insn.addr !97
  %2 = icmp slt i32 %0, 0, !insn.addr !97
  %3 = icmp eq i1 %2, false, !insn.addr !98
  %4 = icmp eq i1 %1, false, !insn.addr !98
  %5 = icmp eq i1 %3, %4, !insn.addr !98
  %6 = zext i1 %5 to i64, !insn.addr !98
  ret i64 %6, !insn.addr !99

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
}

define i64 @nested_if_2(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_13a0:
  %rax.0.reg2mem = alloca i64, !insn.addr !100
  %0 = trunc i64 %arg1 to i32, !insn.addr !101
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !102
  br i1 %1, label %dec_label_pc_13b2, label %dec_label_pc_13aa, !insn.addr !102

dec_label_pc_13aa:                                ; preds = %dec_label_pc_13a0
  %2 = trunc i64 %arg2 to i32, !insn.addr !103
  %3 = icmp slt i32 %2, 1
  %4 = select i1 %3, i64 0, i64 %arg2, !insn.addr !104
  %.v = add i64 %4, %arg1
  %5 = and i64 %.v, 4294967295, !insn.addr !105
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !105
  br label %dec_label_pc_13b2, !insn.addr !105

dec_label_pc_13b2:                                ; preds = %dec_label_pc_13aa, %dec_label_pc_13a0
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !106

; uselistorder directives
  uselistorder i64 %arg2, { 1, 0 }
}

define i64 @nested_if_deep(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_13c0:
  %rax.0.reg2mem = alloca i64, !insn.addr !107
  %0 = trunc i64 %arg1 to i32, !insn.addr !108
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !109
  br i1 %1, label %dec_label_pc_13f5, label %dec_label_pc_13ca, !insn.addr !109

dec_label_pc_13ca:                                ; preds = %dec_label_pc_13c0
  %2 = trunc i64 %arg2 to i32, !insn.addr !110
  %3 = icmp slt i32 %2, 1
  store i64 1, i64* %rax.0.reg2mem, !insn.addr !111
  br i1 %3, label %dec_label_pc_13f5, label %dec_label_pc_13d3, !insn.addr !111

dec_label_pc_13d3:                                ; preds = %dec_label_pc_13ca
  %4 = trunc i64 %arg3 to i32, !insn.addr !112
  %5 = icmp slt i32 %4, 1
  store i64 2, i64* %rax.0.reg2mem, !insn.addr !113
  br i1 %5, label %dec_label_pc_13f5, label %dec_label_pc_13d7, !insn.addr !113

dec_label_pc_13d7:                                ; preds = %dec_label_pc_13d3
  %6 = trunc i64 %arg4 to i32, !insn.addr !114
  %7 = icmp slt i32 %6, 1
  store i64 3, i64* %rax.0.reg2mem, !insn.addr !115
  br i1 %7, label %dec_label_pc_13f5, label %dec_label_pc_13db, !insn.addr !115

dec_label_pc_13db:                                ; preds = %dec_label_pc_13d7
  %8 = trunc i64 %arg5 to i32, !insn.addr !116
  %9 = icmp eq i32 %8, 0, !insn.addr !116
  %10 = icmp slt i32 %8, 0, !insn.addr !116
  %11 = icmp eq i1 %10, false, !insn.addr !117
  %12 = icmp eq i1 %9, false, !insn.addr !117
  %13 = icmp eq i1 %11, %12, !insn.addr !117
  %14 = select i1 %13, i64 5, i64 4, !insn.addr !118
  ret i64 %14, !insn.addr !119

dec_label_pc_13f5:                                ; preds = %dec_label_pc_13d3, %dec_label_pc_13d7, %dec_label_pc_13ca, %dec_label_pc_13c0
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !120

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1, 3, 4 }
  uselistorder label %dec_label_pc_13f5, { 1, 0, 2, 3 }
}

define i64 @if_elseif_chain(i64 %arg1) local_unnamed_addr {
dec_label_pc_1410:
  %rax.0.reg2mem = alloca i64, !insn.addr !121
  %0 = trunc i64 %arg1 to i32, !insn.addr !122
  store i64 10, i64* %rax.0.reg2mem
  switch i32 %0, label %dec_label_pc_1422 [
    i32 0, label %dec_label_pc_143d
    i32 1, label %dec_label_pc_143d.fold.split
  ]

dec_label_pc_1422:                                ; preds = %dec_label_pc_1410
  %1 = icmp eq i32 %0, 2, !insn.addr !123
  %2 = icmp eq i1 %1, false, !insn.addr !124
  %3 = select i1 %2, i64 4294967295, i64 30, !insn.addr !124
  ret i64 %3, !insn.addr !125

dec_label_pc_143d.fold.split:                     ; preds = %dec_label_pc_1410
  store i64 20, i64* %rax.0.reg2mem
  br label %dec_label_pc_143d

dec_label_pc_143d:                                ; preds = %dec_label_pc_1410, %dec_label_pc_143d.fold.split
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !126

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder label %dec_label_pc_143d, { 1, 0 }
}

define i64 @if_elseif_long(i64 %arg1) local_unnamed_addr {
dec_label_pc_1440:
  %rax.0.reg2mem = alloca i64, !insn.addr !127
  %0 = trunc i64 %arg1 to i32, !insn.addr !128
  %1 = icmp ult i32 %0, 5
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !129
  br i1 %1, label %dec_label_pc_144e, label %dec_label_pc_1454, !insn.addr !129

dec_label_pc_144e:                                ; preds = %dec_label_pc_1440
  %2 = mul i64 %arg1, 4294967296, !insn.addr !130
  %sext = add i64 %2, 4294967296
  %3 = udiv i64 %sext, 4294967296
  %4 = mul nuw nsw i64 %3, 100, !insn.addr !131
  %5 = and i64 %4, 4294967292, !insn.addr !131
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !131
  br label %dec_label_pc_1454, !insn.addr !131

dec_label_pc_1454:                                ; preds = %dec_label_pc_1440, %dec_label_pc_144e
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !132

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1454, { 1, 0 }
}

define i64 @switch_small(i64 %arg1) local_unnamed_addr {
dec_label_pc_1460:
  %rax.0.reg2mem = alloca i64, !insn.addr !133
  %0 = trunc i64 %arg1 to i32, !insn.addr !134
  %1 = icmp ult i32 %0, 4
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !135
  br i1 %1, label %dec_label_pc_146e, label %dec_label_pc_147a, !insn.addr !135

dec_label_pc_146e:                                ; preds = %dec_label_pc_1460
  %2 = mul i64 %arg1, 4, !insn.addr !136
  %3 = and i64 %2, 17179869180, !insn.addr !137
  %4 = add i64 %3, ptrtoint (i32** @global_var_3640 to i64), !insn.addr !137
  %5 = inttoptr i64 %4 to i32*, !insn.addr !137
  %6 = load i32, i32* %5, align 4, !insn.addr !137
  %7 = zext i32 %6 to i64, !insn.addr !137
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !137
  br label %dec_label_pc_147a, !insn.addr !137

dec_label_pc_147a:                                ; preds = %dec_label_pc_1460, %dec_label_pc_146e
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !138

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_147a, { 1, 0 }
}

define i64 @switch_large(i64 %arg1) local_unnamed_addr {
dec_label_pc_1480:
  %0 = trunc i64 %arg1 to i32, !insn.addr !139
  %1 = icmp ult i32 %0, 10
  %2 = mul i64 %arg1, 10
  %3 = and i64 %2, 4294967294
  %rax.0 = select i1 %1, i64 %3, i64 4294967295
  ret i64 %rax.0, !insn.addr !140
}

define i64 @switch_default(i64 %arg1) local_unnamed_addr {
dec_label_pc_14a0:
  %0 = trunc i64 %arg1 to i32
  %1 = add i32 %0, -1, !insn.addr !141
  %2 = icmp ult i32 %1, 3
  %3 = mul i64 %arg1, 100
  %4 = and i64 %3, 4294967292
  %rax.0 = select i1 %2, i64 %4, i64 0
  ret i64 %rax.0, !insn.addr !142
}

define i64 @switch_fallthrough(i64 %arg1) local_unnamed_addr {
dec_label_pc_14c0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !143
  switch i32 %0, label %dec_label_pc_14ce [
    i32 2, label %dec_label_pc_14f0
    i32 3, label %dec_label_pc_14e0
  ]

dec_label_pc_14ce:                                ; preds = %dec_label_pc_14c0
  %1 = icmp eq i32 %0, 1, !insn.addr !144
  %2 = zext i1 %1 to i64, !insn.addr !145
  %not. = icmp ne i1 %1, true
  %3 = sext i1 %not. to i64, !insn.addr !146
  %4 = add nsw i64 %3, %2, !insn.addr !146
  %5 = and i64 %4, 4294967295, !insn.addr !146
  ret i64 %5, !insn.addr !147

dec_label_pc_14e0:                                ; preds = %dec_label_pc_14c0
  %6 = mul i64 %arg1, 2
  %7 = add i64 %arg1, 12, !insn.addr !148
  %8 = add i64 %7, %6, !insn.addr !149
  %9 = and i64 %8, 4294967295, !insn.addr !149
  ret i64 %9, !insn.addr !150

dec_label_pc_14f0:                                ; preds = %dec_label_pc_14c0
  %10 = mul i64 %arg1, 3, !insn.addr !151
  %11 = and i64 %10, 4294967295, !insn.addr !151
  ret i64 %11, !insn.addr !152

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder i64 %arg1, { 2, 1, 0, 3 }
}

define i64 @loop_for_fixed(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1500:
  %merge.reg2mem = alloca i64, !insn.addr !153
  %r8.0.reg2mem = alloca i64, !insn.addr !153
  %rax.0.reg2mem = alloca i64, !insn.addr !153
  %0 = trunc i64 %arg1 to i32, !insn.addr !154
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !155
  store i64 0, i64* %r8.0.reg2mem, !insn.addr !155
  store i64 0, i64* %merge.reg2mem, !insn.addr !155
  br i1 %1, label %dec_label_pc_151a, label %dec_label_pc_1510, !insn.addr !155

dec_label_pc_1510:                                ; preds = %dec_label_pc_1500, %dec_label_pc_1510
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %2 = add nuw nsw i64 %r8.0.reload, %rax.0.reload, !insn.addr !156
  %3 = and i64 %2, 4294967295, !insn.addr !156
  %4 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !157
  %5 = and i64 %4, 4294967295, !insn.addr !157
  %6 = trunc i64 %4 to i32, !insn.addr !158
  %7 = icmp eq i32 %0, %6, !insn.addr !158
  %8 = icmp eq i1 %7, false, !insn.addr !159
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !159
  store i64 %3, i64* %r8.0.reg2mem, !insn.addr !159
  store i64 %3, i64* %merge.reg2mem, !insn.addr !159
  br i1 %8, label %dec_label_pc_1510, label %dec_label_pc_151a, !insn.addr !159

dec_label_pc_151a:                                ; preds = %dec_label_pc_1510, %dec_label_pc_1500
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !160

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r8.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1510, { 1, 0 }
}

define i64 @loop_while(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1530:
  %merge.reg2mem = alloca i64, !insn.addr !161
  %r8.0.reg2mem = alloca i64, !insn.addr !161
  %rdi.0.reg2mem = alloca i64, !insn.addr !161
  %0 = trunc i64 %arg1 to i32, !insn.addr !162
  %1 = icmp eq i32 %0, 0, !insn.addr !162
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !163
  store i64 0, i64* %r8.0.reg2mem, !insn.addr !163
  store i64 1, i64* %merge.reg2mem, !insn.addr !163
  br i1 %1, label %dec_label_pc_155d, label %dec_label_pc_1540, !insn.addr !163

dec_label_pc_1540:                                ; preds = %dec_label_pc_1530, %dec_label_pc_1540
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %sext = mul i64 %rdi.0.reload, 4294967296
  %2 = ashr exact i64 %sext, 32, !insn.addr !164
  %3 = trunc i64 %rdi.0.reload to i32, !insn.addr !165
  %4 = add nuw nsw i64 %r8.0.reload, 1, !insn.addr !166
  %5 = and i64 %4, 4294967295, !insn.addr !166
  %narrow = mul nsw i64 %2, 1717986919
  %6 = ashr i32 %3, 31, !insn.addr !167
  %7 = ashr i64 %narrow, 34, !insn.addr !168
  %8 = trunc i64 %7 to i32, !insn.addr !169
  %9 = sub i32 %8, %6, !insn.addr !169
  %10 = icmp eq i32 %9, 0, !insn.addr !169
  %11 = zext i32 %9 to i64, !insn.addr !170
  %12 = icmp eq i1 %10, false, !insn.addr !171
  store i64 %11, i64* %rdi.0.reg2mem, !insn.addr !171
  store i64 %5, i64* %r8.0.reg2mem, !insn.addr !171
  store i64 %5, i64* %merge.reg2mem, !insn.addr !171
  br i1 %12, label %dec_label_pc_1540, label %dec_label_pc_155d, !insn.addr !171

dec_label_pc_155d:                                ; preds = %dec_label_pc_1540, %dec_label_pc_1530
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !172

; uselistorder directives
  uselistorder i64* %rdi.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r8.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1540, { 1, 0 }
}

define i64 @loop_dowhile(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1580:
  %r8.0.reg2mem = alloca i64, !insn.addr !173
  %rdi.0.reg2mem = alloca i64, !insn.addr !173
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !174
  store i64 0, i64* %r8.0.reg2mem, !insn.addr !174
  br label %dec_label_pc_1590, !insn.addr !174

dec_label_pc_1590:                                ; preds = %dec_label_pc_1590, %dec_label_pc_1580
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %sext = mul i64 %rdi.0.reload, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !175
  %1 = trunc i64 %rdi.0.reload to i32, !insn.addr !176
  %2 = add nuw nsw i64 %r8.0.reload, 1, !insn.addr !177
  %3 = and i64 %2, 4294967295, !insn.addr !177
  %narrow = mul nsw i64 %0, 1717986919
  %4 = ashr i32 %1, 31, !insn.addr !178
  %5 = ashr i64 %narrow, 34, !insn.addr !179
  %6 = trunc i64 %5 to i32, !insn.addr !180
  %7 = sub i32 %6, %4, !insn.addr !180
  %8 = icmp eq i32 %7, 0, !insn.addr !180
  %9 = zext i32 %7 to i64, !insn.addr !181
  %10 = icmp eq i1 %8, false, !insn.addr !182
  store i64 %9, i64* %rdi.0.reg2mem, !insn.addr !182
  store i64 %3, i64* %r8.0.reg2mem, !insn.addr !182
  br i1 %10, label %dec_label_pc_1590, label %dec_label_pc_15ad, !insn.addr !182

dec_label_pc_15ad:                                ; preds = %dec_label_pc_1590
  ret i64 %3, !insn.addr !183

; uselistorder directives
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64* %rdi.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r8.0.reg2mem, { 1, 0, 2 }
}

define i64 @loop_nested(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_15c0:
  %rax.1.reg2mem = alloca i64, !insn.addr !184
  %rdx.0.reg2mem = alloca i64, !insn.addr !184
  %rax.0.reg2mem = alloca i64, !insn.addr !184
  %0 = trunc i64 %arg1 to i32, !insn.addr !185
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !186
  br i1 %1, label %dec_label_pc_15df, label %dec_label_pc_15d0.preheader, !insn.addr !186

dec_label_pc_15d0.preheader:                      ; preds = %dec_label_pc_15c0
  %2 = trunc i64 %arg2 to i32, !insn.addr !187
  %3 = icmp eq i32 %2, 0, !insn.addr !187
  %4 = icmp slt i32 %2, 0, !insn.addr !187
  %5 = icmp eq i1 %4, false, !insn.addr !188
  %6 = icmp eq i1 %3, false, !insn.addr !188
  %7 = icmp eq i1 %5, %6, !insn.addr !188
  %8 = select i1 %7, i64 %arg2, i64 0, !insn.addr !189
  store i64 0, i64* %rax.0.reg2mem
  store i64 0, i64* %rdx.0.reg2mem
  br label %dec_label_pc_15d0

dec_label_pc_15d0:                                ; preds = %dec_label_pc_15d0.preheader, %dec_label_pc_15d0
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %.v = add i64 %rax.0.reload, %8
  %9 = and i64 %.v, 4294967295, !insn.addr !188
  %10 = add nuw nsw i64 %rdx.0.reload, 1, !insn.addr !190
  %11 = and i64 %10, 4294967295, !insn.addr !190
  %12 = trunc i64 %10 to i32, !insn.addr !191
  %13 = icmp eq i32 %0, %12, !insn.addr !191
  %14 = icmp eq i1 %13, false, !insn.addr !192
  store i64 %9, i64* %rax.0.reg2mem, !insn.addr !192
  store i64 %11, i64* %rdx.0.reg2mem, !insn.addr !192
  store i64 %9, i64* %rax.1.reg2mem, !insn.addr !192
  br i1 %14, label %dec_label_pc_15d0, label %dec_label_pc_15df, !insn.addr !192

dec_label_pc_15df:                                ; preds = %dec_label_pc_15d0, %dec_label_pc_15c0
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !193

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64 %arg2, { 1, 0 }
  uselistorder label %dec_label_pc_15d0, { 1, 0 }
}

define i64 @loop_break(i64 %arg1) local_unnamed_addr {
dec_label_pc_15e0:
  %r8.0.reg2mem = alloca i64, !insn.addr !194
  %rax.0.reg2mem = alloca i64, !insn.addr !194
  %stack_var_-40 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-40 to i64, !insn.addr !195
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !196
  %2 = trunc i64 %arg1 to i32, !insn.addr !197
  %3 = icmp eq i32 %2, 10, !insn.addr !197
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !198
  store i64 0, i64* %r8.0.reg2mem, !insn.addr !198
  br i1 %3, label %dec_label_pc_1640, label %dec_label_pc_1622, !insn.addr !198

dec_label_pc_1622:                                ; preds = %dec_label_pc_15e0, %dec_label_pc_162c
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %4 = icmp eq i64 %rax.0.reload, 4, !insn.addr !199
  store i64 4294967295, i64* %r8.0.reg2mem, !insn.addr !200
  br i1 %4, label %dec_label_pc_1640, label %dec_label_pc_162c, !insn.addr !200

dec_label_pc_162c:                                ; preds = %dec_label_pc_1622
  %5 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !201
  %6 = mul i64 %5, 4, !insn.addr !202
  %7 = add i64 %6, %0, !insn.addr !202
  %8 = inttoptr i64 %7 to i32*, !insn.addr !202
  %9 = load i32, i32* %8, align 4, !insn.addr !202
  %10 = icmp eq i32 %9, %2, !insn.addr !203
  %11 = icmp eq i1 %10, false, !insn.addr !204
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !204
  br i1 %11, label %dec_label_pc_1622, label %dec_label_pc_1640.loopexit.split.loop.exit, !insn.addr !204

dec_label_pc_1640.loopexit.split.loop.exit:       ; preds = %dec_label_pc_162c
  %12 = and i64 %5, 4294967295, !insn.addr !205
  store i64 %12, i64* %r8.0.reg2mem
  br label %dec_label_pc_1640

dec_label_pc_1640:                                ; preds = %dec_label_pc_1622, %dec_label_pc_1640.loopexit.split.loop.exit, %dec_label_pc_15e0
  %13 = call i64 @__readfsqword(i64 40), !insn.addr !206
  %14 = icmp eq i64 %1, %13, !insn.addr !206
  %15 = icmp eq i1 %14, false, !insn.addr !207
  br i1 %15, label %dec_label_pc_1668, label %dec_label_pc_1650, !insn.addr !207

dec_label_pc_1650:                                ; preds = %dec_label_pc_1640
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  ret i64 %r8.0.reload, !insn.addr !208

dec_label_pc_1668:                                ; preds = %dec_label_pc_1640
  call void @__stack_chk_fail(), !insn.addr !209
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !210

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
  %merge.reg2mem = alloca i64, !insn.addr !211
  %r8.0.reg2mem = alloca i64, !insn.addr !211
  %rax.0.reg2mem = alloca i64, !insn.addr !211
  %0 = trunc i64 %arg1 to i32, !insn.addr !212
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %merge.reg2mem, !insn.addr !213
  br i1 %1, label %dec_label_pc_1699, label %dec_label_pc_1688.preheader, !insn.addr !213

dec_label_pc_1688.preheader:                      ; preds = %dec_label_pc_1670
  %2 = add i32 %0, 1, !insn.addr !214
  store i64 1, i64* %rax.0.reg2mem
  store i64 0, i64* %r8.0.reg2mem
  br label %dec_label_pc_1688

dec_label_pc_1688:                                ; preds = %dec_label_pc_1688.preheader, %dec_label_pc_1688
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %3 = urem i64 %rax.0.reload, 2
  %4 = icmp eq i64 %3, 0, !insn.addr !215
  %5 = icmp eq i1 %4, false, !insn.addr !216
  %6 = select i1 %5, i64 %rax.0.reload, i64 0, !insn.addr !217
  %.v = add nuw nsw i64 %6, %r8.0.reload
  %7 = and i64 %.v, 4294967295, !insn.addr !216
  %8 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !218
  %9 = and i64 %8, 4294967295, !insn.addr !218
  %10 = trunc i64 %8 to i32, !insn.addr !214
  %11 = icmp eq i32 %2, %10, !insn.addr !214
  %12 = icmp eq i1 %11, false, !insn.addr !219
  store i64 %9, i64* %rax.0.reg2mem, !insn.addr !219
  store i64 %7, i64* %r8.0.reg2mem, !insn.addr !219
  store i64 %7, i64* %merge.reg2mem, !insn.addr !219
  br i1 %12, label %dec_label_pc_1688, label %dec_label_pc_1699, !insn.addr !219

dec_label_pc_1699:                                ; preds = %dec_label_pc_1688, %dec_label_pc_1670
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !220

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r8.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1688, { 1, 0 }
}

define i64 @goto_forward(i64 %arg1) local_unnamed_addr {
dec_label_pc_16b0:
  %rdi.0.reg2mem = alloca i64, !insn.addr !221
  %0 = trunc i64 %arg1 to i32, !insn.addr !222
  %1 = icmp slt i32 %0, 1
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !223
  br i1 %1, label %dec_label_pc_16bb, label %dec_label_pc_16b8, !insn.addr !223

dec_label_pc_16b8:                                ; preds = %dec_label_pc_16b0
  %sext = mul i64 %arg1, 4294967296
  %2 = ashr exact i64 %sext, 32, !insn.addr !224
  %3 = mul nsw i64 %2, %2, !insn.addr !224
  %4 = and i64 %3, 4294967295, !insn.addr !224
  store i64 %4, i64* %rdi.0.reg2mem, !insn.addr !224
  br label %dec_label_pc_16bb, !insn.addr !224

dec_label_pc_16bb:                                ; preds = %dec_label_pc_16b8, %dec_label_pc_16b0
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %5 = mul i64 %rdi.0.reload, 2, !insn.addr !225
  %6 = and i64 %5, 4294967294, !insn.addr !225
  ret i64 %6, !insn.addr !226

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @goto_backward(i64 %arg1) local_unnamed_addr {
dec_label_pc_16c0:
  %r8.1.reg2mem = alloca i64, !insn.addr !227
  %r8.0.reg2mem = alloca i64, !insn.addr !227
  %rax.0.reg2mem = alloca i64, !insn.addr !227
  %0 = trunc i64 %arg1 to i32, !insn.addr !228
  %1 = icmp slt i32 %0, 1
  store i64 1, i64* %r8.1.reg2mem, !insn.addr !229
  br i1 %1, label %dec_label_pc_16eb, label %dec_label_pc_16e0.preheader, !insn.addr !229

dec_label_pc_16e0.preheader:                      ; preds = %dec_label_pc_16c0
  %2 = add i32 %0, 1, !insn.addr !230
  store i64 1, i64* %rax.0.reg2mem
  store i64 1, i64* %r8.0.reg2mem
  br label %dec_label_pc_16e0

dec_label_pc_16e0:                                ; preds = %dec_label_pc_16e0.preheader, %dec_label_pc_16e0
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %sext = mul i64 %r8.0.reload, 4294967296
  %3 = ashr exact i64 %sext, 32, !insn.addr !231
  %sext1 = mul i64 %rax.0.reload, 4294967296
  %4 = ashr exact i64 %sext1, 32, !insn.addr !231
  %5 = mul nsw i64 %3, %4, !insn.addr !231
  %6 = and i64 %5, 4294967295, !insn.addr !231
  %7 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !232
  %8 = and i64 %7, 4294967295, !insn.addr !232
  %9 = trunc i64 %7 to i32, !insn.addr !230
  %10 = icmp eq i32 %2, %9, !insn.addr !230
  %11 = icmp eq i1 %10, false, !insn.addr !233
  store i64 %8, i64* %rax.0.reg2mem, !insn.addr !233
  store i64 %6, i64* %r8.0.reg2mem, !insn.addr !233
  store i64 %6, i64* %r8.1.reg2mem, !insn.addr !233
  br i1 %11, label %dec_label_pc_16e0, label %dec_label_pc_16eb, !insn.addr !233

dec_label_pc_16eb:                                ; preds = %dec_label_pc_16e0, %dec_label_pc_16c0
  %r8.1.reload = load i64, i64* %r8.1.reg2mem
  ret i64 %r8.1.reload, !insn.addr !234

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r8.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_16e0, { 1, 0 }
}

define i64 @ternary_op(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_16f0:
  %0 = trunc i64 %arg2 to i32, !insn.addr !235
  %1 = trunc i64 %arg1 to i32, !insn.addr !235
  %2 = sub i32 %0, %1, !insn.addr !235
  %3 = xor i64 %arg2, %arg1
  %4 = trunc i64 %3 to i32, !insn.addr !235
  %5 = xor i32 %2, %0, !insn.addr !235
  %6 = and i32 %5, %4, !insn.addr !235
  %7 = icmp slt i32 %6, 0, !insn.addr !235
  %8 = icmp slt i32 %2, 0, !insn.addr !235
  %9 = icmp eq i1 %8, %7, !insn.addr !236
  %.v = select i1 %9, i64 %arg2, i64 %arg1
  %10 = and i64 %.v, 4294967295, !insn.addr !236
  ret i64 %10, !insn.addr !237

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i64 %arg2, { 1, 0, 2 }
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @test_control_flow_l1() local_unnamed_addr {
dec_label_pc_1700:
  %rdx.1.reg2mem = alloca i64, !insn.addr !238
  %rax.1.reg2mem = alloca i64, !insn.addr !238
  %rdx.0.reg2mem = alloca i64, !insn.addr !238
  %rax.0.reg2mem = alloca i64, !insn.addr !238
  %stack_var_-40 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !239
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_3008 to i8*)), !insn.addr !240
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3030, i64 0, i64 0), i64 21), !insn.addr !241
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_33b8, i64 0, i64 0), i64 20), !insn.addr !242
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_33b8, i64 0, i64 0), i64 4294967291), !insn.addr !243
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_33d2, i64 0, i64 0), i64 1), !insn.addr !244
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_33d2, i64 0, i64 0), i64 0), !insn.addr !245
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_33ea, i64 0, i64 0), i64 15), !insn.addr !246
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_33ea, i64 0, i64 0), i64 10), !insn.addr !247
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_33ea, i64 0, i64 0), i64 0), !insn.addr !248
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3050, i64 0, i64 0), i64 5), !insn.addr !249
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3070, i64 0, i64 0), i64 20), !insn.addr !250
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3090, i64 0, i64 0), i64 400), !insn.addr !251
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3406, i64 0, i64 0), i64 50), !insn.addr !252
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3423, i64 0, i64 0), i64 70), !insn.addr !253
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_30b0, i64 0, i64 0), i64 0), !insn.addr !254
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_30d0, i64 0, i64 0), i64 21), !insn.addr !255
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_30f8, i64 0, i64 0), i64 45), !insn.addr !256
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3440, i64 0, i64 0), i64 5), !insn.addr !257
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_345b, i64 0, i64 0), i64 4), !insn.addr !258
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_3478, i64 0, i64 0), i64 12), !insn.addr !259
  %21 = ptrtoint i64* %stack_var_-40 to i64, !insn.addr !260
  %22 = add i64 %21, -4
  store i64 1, i64* %rax.0.reg2mem, !insn.addr !261
  br label %dec_label_pc_1903, !insn.addr !261

dec_label_pc_1903:                                ; preds = %dec_label_pc_190f, %dec_label_pc_1700
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %23 = icmp eq i64 %rax.0.reload, 5, !insn.addr !262
  store i64 4294967295, i64* %rdx.0.reg2mem, !insn.addr !263
  br i1 %23, label %dec_label_pc_191a, label %dec_label_pc_190f, !insn.addr !263

dec_label_pc_190f:                                ; preds = %dec_label_pc_1903
  %24 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !264
  %25 = mul i64 %24, 4, !insn.addr !265
  %26 = add i64 %25, %22, !insn.addr !265
  %27 = inttoptr i64 %26 to i32*, !insn.addr !265
  %28 = load i32, i32* %27, align 4, !insn.addr !265
  %29 = icmp eq i32 %28, 30, !insn.addr !265
  %30 = icmp eq i1 %29, false, !insn.addr !266
  store i64 %24, i64* %rax.0.reg2mem, !insn.addr !266
  br i1 %30, label %dec_label_pc_1903, label %dec_label_pc_191a.split.loop.exit3, !insn.addr !266

dec_label_pc_191a.split.loop.exit3:               ; preds = %dec_label_pc_190f
  %31 = and i64 %rax.0.reload, 4294967295, !insn.addr !267
  store i64 %31, i64* %rdx.0.reg2mem
  br label %dec_label_pc_191a

dec_label_pc_191a:                                ; preds = %dec_label_pc_1903, %dec_label_pc_191a.split.loop.exit3
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %32 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3494, i64 0, i64 0), i64 %rdx.0.reload), !insn.addr !268
  store i64 1, i64* %rax.1.reg2mem, !insn.addr !269
  br label %dec_label_pc_1956, !insn.addr !269

dec_label_pc_1956:                                ; preds = %dec_label_pc_1962, %dec_label_pc_191a
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %33 = icmp eq i64 %rax.1.reload, 5, !insn.addr !270
  store i64 4294967295, i64* %rdx.1.reg2mem, !insn.addr !271
  br i1 %33, label %dec_label_pc_196d, label %dec_label_pc_1962, !insn.addr !271

dec_label_pc_1962:                                ; preds = %dec_label_pc_1956
  %34 = add nuw nsw i64 %rax.1.reload, 1, !insn.addr !272
  %35 = mul i64 %34, 4, !insn.addr !273
  %36 = add i64 %35, %22, !insn.addr !273
  %37 = inttoptr i64 %36 to i32*, !insn.addr !273
  %38 = load i32, i32* %37, align 4, !insn.addr !273
  %39 = icmp eq i32 %38, 99, !insn.addr !273
  %40 = icmp eq i1 %39, false, !insn.addr !274
  store i64 %34, i64* %rax.1.reg2mem, !insn.addr !274
  br i1 %40, label %dec_label_pc_1956, label %dec_label_pc_196d.split.loop.exit1, !insn.addr !274

dec_label_pc_196d.split.loop.exit1:               ; preds = %dec_label_pc_1962
  %41 = and i64 %rax.1.reload, 4294967295, !insn.addr !275
  store i64 %41, i64* %rdx.1.reg2mem
  br label %dec_label_pc_196d

dec_label_pc_196d:                                ; preds = %dec_label_pc_1956, %dec_label_pc_196d.split.loop.exit1
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  %42 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3494, i64 0, i64 0), i64 %rdx.1.reload), !insn.addr !276
  %43 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_34af, i64 0, i64 0), i64 25), !insn.addr !277
  %44 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_34cd, i64 0, i64 0), i64 50), !insn.addr !278
  %45 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_34cd, i64 0, i64 0), i64 4294967290), !insn.addr !279
  %46 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_34ea, i64 0, i64 0), i64 120), !insn.addr !280
  %47 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3508, i64 0, i64 0), i64 10), !insn.addr !281
  %48 = call i64 @__readfsqword(i64 40), !insn.addr !282
  %49 = icmp eq i64 %0, %48, !insn.addr !282
  %50 = icmp eq i1 %49, false, !insn.addr !283
  br i1 %50, label %dec_label_pc_1a3a, label %dec_label_pc_1a06, !insn.addr !283

dec_label_pc_1a06:                                ; preds = %dec_label_pc_196d
  %51 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3508, i64 0, i64 0), i64 8), !insn.addr !284
  %52 = sext i32 %51 to i64, !insn.addr !284
  ret i64 %52, !insn.addr !284

dec_label_pc_1a3a:                                ; preds = %dec_label_pc_196d
  call void @__stack_chk_fail(), !insn.addr !285
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !286

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

define i64 @loop_multi_exit(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1a40:
  %storemerge.reg2mem = alloca i64, !insn.addr !287
  %rdx.2.reg2mem = alloca i64, !insn.addr !287
  %rax.1.reg2mem = alloca i64, !insn.addr !287
  %rdx.0.reg2mem = alloca i64, !insn.addr !287
  %rax.0.reg2mem = alloca i64, !insn.addr !287
  %stack_var_-72 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !288
  %1 = trunc i64 %arg1 to i32, !insn.addr !289
  %2 = icmp eq i32 %1, 1, !insn.addr !289
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !290
  store i64 0, i64* %rdx.2.reg2mem, !insn.addr !290
  br i1 %2, label %dec_label_pc_1adc, label %dec_label_pc_1ab9.preheader, !insn.addr !290

dec_label_pc_1ab9.preheader:                      ; preds = %dec_label_pc_1a40
  %3 = ptrtoint i64* %stack_var_-72 to i64, !insn.addr !291
  store i64 %3, i64* %rax.0.reg2mem
  store i64 0, i64* %rdx.0.reg2mem
  br label %dec_label_pc_1ab9

dec_label_pc_1ab9:                                ; preds = %dec_label_pc_1ab9.preheader, %dec_label_pc_1ad4
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %4 = or i64 %rax.0.reload, 4, !insn.addr !292
  %5 = inttoptr i64 %4 to i32*, !insn.addr !292
  %6 = load i32, i32* %5, align 4, !insn.addr !292
  %7 = icmp eq i32 %6, %1, !insn.addr !292
  store i64 1, i64* %rax.1.reg2mem, !insn.addr !293
  store i64 %rdx.0.reload, i64* %rdx.2.reg2mem, !insn.addr !293
  br i1 %7, label %dec_label_pc_1adc, label %dec_label_pc_1abe, !insn.addr !293

dec_label_pc_1abe:                                ; preds = %dec_label_pc_1ab9
  %8 = add i64 %rax.0.reload, 8, !insn.addr !294
  %9 = inttoptr i64 %8 to i32*, !insn.addr !294
  %10 = load i32, i32* %9, align 8, !insn.addr !294
  %11 = icmp eq i32 %10, %1, !insn.addr !294
  store i64 2, i64* %rax.1.reg2mem, !insn.addr !295
  store i64 %rdx.0.reload, i64* %rdx.2.reg2mem, !insn.addr !295
  br i1 %11, label %dec_label_pc_1adc, label %dec_label_pc_1ac3, !insn.addr !295

dec_label_pc_1ac3:                                ; preds = %dec_label_pc_1abe
  %12 = add i64 %rax.0.reload, 12, !insn.addr !296
  %13 = inttoptr i64 %12 to i32*, !insn.addr !296
  %14 = load i32, i32* %13, align 4, !insn.addr !296
  %15 = icmp eq i32 %14, %1, !insn.addr !296
  store i64 3, i64* %rax.1.reg2mem, !insn.addr !297
  store i64 %rdx.0.reload, i64* %rdx.2.reg2mem, !insn.addr !297
  br i1 %15, label %dec_label_pc_1adc, label %dec_label_pc_1ac8, !insn.addr !297

dec_label_pc_1ac8:                                ; preds = %dec_label_pc_1ac3
  %16 = add nuw nsw i64 %rdx.0.reload, 1, !insn.addr !298
  %17 = trunc i64 %16 to i32, !insn.addr !299
  %18 = icmp eq i32 %17, 3, !insn.addr !299
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !300
  br i1 %18, label %dec_label_pc_1aed, label %dec_label_pc_1ad4, !insn.addr !300

dec_label_pc_1ad4:                                ; preds = %dec_label_pc_1ac8
  %19 = and i64 %16, 4294967295, !insn.addr !298
  %20 = add i64 %rax.0.reload, 16, !insn.addr !301
  %21 = inttoptr i64 %20 to i32*, !insn.addr !302
  %22 = load i32, i32* %21, align 8, !insn.addr !302
  %23 = icmp eq i32 %22, %1, !insn.addr !303
  %24 = icmp eq i1 %23, false, !insn.addr !304
  store i64 %20, i64* %rax.0.reg2mem, !insn.addr !304
  store i64 %19, i64* %rdx.0.reg2mem, !insn.addr !304
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !304
  store i64 %19, i64* %rdx.2.reg2mem, !insn.addr !304
  br i1 %24, label %dec_label_pc_1ab9, label %dec_label_pc_1adc, !insn.addr !304

dec_label_pc_1adc:                                ; preds = %dec_label_pc_1ac3, %dec_label_pc_1abe, %dec_label_pc_1ab9, %dec_label_pc_1ad4, %dec_label_pc_1a40
  %rdx.2.reload = load i64, i64* %rdx.2.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %25 = mul nsw i64 %rdx.2.reload, 10, !insn.addr !305
  %26 = add nsw i64 %25, %rax.1.reload, !insn.addr !306
  %27 = and i64 %26, 4294967295, !insn.addr !306
  store i64 %27, i64* %storemerge.reg2mem, !insn.addr !307
  br label %dec_label_pc_1aed, !insn.addr !307

dec_label_pc_1aed:                                ; preds = %dec_label_pc_1ac8, %dec_label_pc_1adc
  %28 = call i64 @__readfsqword(i64 40), !insn.addr !308
  %29 = icmp eq i64 %0, %28, !insn.addr !308
  %30 = icmp eq i1 %29, false, !insn.addr !309
  br i1 %30, label %dec_label_pc_1b27, label %dec_label_pc_1afd, !insn.addr !309

dec_label_pc_1afd:                                ; preds = %dec_label_pc_1aed
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !310

dec_label_pc_1b27:                                ; preds = %dec_label_pc_1aed
  call void @__stack_chk_fail(), !insn.addr !311
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !312

; uselistorder directives
  uselistorder i64 %16, { 1, 0 }
  uselistorder i64 %rax.0.reload, { 2, 0, 1, 3 }
  uselistorder i64 %rdx.0.reload, { 3, 0, 1, 2 }
  uselistorder i32 %1, { 0, 3, 2, 1, 4 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.1.reg2mem, { 0, 4, 1, 2, 3, 5 }
  uselistorder i64* %rdx.2.reg2mem, { 0, 4, 1, 2, 3, 5 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 12, { 2, 1, 0 }
  uselistorder label %dec_label_pc_1aed, { 1, 0 }
  uselistorder label %dec_label_pc_1adc, { 3, 0, 1, 2, 4 }
  uselistorder label %dec_label_pc_1ab9, { 1, 0 }
}

define i64 @infinite_loop(i64 %arg1) local_unnamed_addr {
dec_label_pc_1b30:
  %rax.0.reg2mem = alloca i64, !insn.addr !313
  %0 = trunc i64 %arg1 to i32
  %1 = icmp eq i32 %0, 1, !insn.addr !314
  %2 = icmp eq i1 %1, false, !insn.addr !315
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !316
  br label %dec_label_pc_1b4a, !insn.addr !316

dec_label_pc_1b40:                                ; preds = %dec_label_pc_1b4a
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %3 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !317
  %4 = and i64 %3, 4294967295, !insn.addr !317
  %5 = trunc i64 %3 to i32, !insn.addr !318
  %6 = icmp eq i32 %5, ptrtoint (i32* @global_var_3e9 to i32), !insn.addr !318
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !319
  br i1 %6, label %dec_label_pc_1b52, label %dec_label_pc_1b4a, !insn.addr !319

dec_label_pc_1b4a:                                ; preds = %dec_label_pc_1b40, %dec_label_pc_1b30
  br i1 %2, label %dec_label_pc_1b40, label %dec_label_pc_1b51, !insn.addr !315

dec_label_pc_1b51:                                ; preds = %dec_label_pc_1b4a
  ret i64 0, !insn.addr !320

dec_label_pc_1b52:                                ; preds = %dec_label_pc_1b40
  %7 = inttoptr i64 %arg1 to i32*, !insn.addr !321
  store i32 1, i32* %7, align 4, !insn.addr !321
  ret i64 %4, !insn.addr !322

; uselistorder directives
  uselistorder i64 %4, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
}

define i64 @multi_return(i64 %arg1) local_unnamed_addr {
dec_label_pc_1b60:
  %merge.reg2mem = alloca i64, !insn.addr !323
  %0 = trunc i64 %arg1 to i32, !insn.addr !324
  %1 = icmp slt i32 %0, 0, !insn.addr !324
  store i64 4294967295, i64* %merge.reg2mem, !insn.addr !325
  br i1 %1, label %dec_label_pc_1b80, label %dec_label_pc_1b68, !insn.addr !325

dec_label_pc_1b68:                                ; preds = %dec_label_pc_1b60
  %2 = mul i64 %arg1, 2, !insn.addr !326
  %3 = trunc i64 %2 to i32, !insn.addr !327
  %4 = icmp sgt i32 %3, 100, !insn.addr !327
  store i64 4294967294, i64* %merge.reg2mem, !insn.addr !327
  br i1 %4, label %dec_label_pc_1b80, label %dec_label_pc_1b70, !insn.addr !327

dec_label_pc_1b70:                                ; preds = %dec_label_pc_1b68
  %5 = add i64 %arg1, 1, !insn.addr !328
  %6 = urem i64 %arg1, 2
  %7 = icmp eq i64 %6, 0, !insn.addr !329
  %8 = icmp eq i1 %7, false, !insn.addr !330
  %9 = select i1 %8, i64 %5, i64 %2, !insn.addr !330
  %10 = and i64 %9, 4294967295, !insn.addr !330
  ret i64 %10, !insn.addr !331

dec_label_pc_1b80:                                ; preds = %dec_label_pc_1b60, %dec_label_pc_1b68
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !332

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %merge.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 1, 2, 0, 3 }
  uselistorder label %dec_label_pc_1b80, { 1, 0 }
}

define i64 @conditional_return(i64 %arg1) local_unnamed_addr {
dec_label_pc_1b90:
  %0 = trunc i64 %arg1 to i32, !insn.addr !333
  %1 = icmp slt i32 %0, 1
  br i1 %1, label %dec_label_pc_1ba0, label %dec_label_pc_1b98, !insn.addr !334

dec_label_pc_1b98:                                ; preds = %dec_label_pc_1b90
  %2 = mul i64 %arg1, 2, !insn.addr !335
  %3 = and i64 %2, 4294967294, !insn.addr !335
  ret i64 %3, !insn.addr !336

dec_label_pc_1ba0:                                ; preds = %dec_label_pc_1b90
  %4 = sub i64 0, %arg1, !insn.addr !337
  %5 = icmp eq i32 %0, 0, !insn.addr !338
  %.op = and i64 %4, 4294967295
  %6 = select i1 %5, i64 0, i64 %.op, !insn.addr !339
  ret i64 %6, !insn.addr !340

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @duffs_device(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1bb0:
  %0 = trunc i64 %arg3 to i32, !insn.addr !341
  %1 = icmp slt i32 %0, 1
  %spec.select = select i1 %1, i64 4294967295, i64 %arg1
  ret i64 %spec.select, !insn.addr !342
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

define i64 @call_virtual_func(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1e10:
  %0 = mul i64 %arg2, 2, !insn.addr !420
  %1 = and i64 %0, 4294967294, !insn.addr !420
  ret i64 %1, !insn.addr !421
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

define i64 @test_control_flow_l2(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1e90:
  %0 = alloca i128
  %.reg2mem18 = alloca i64, !insn.addr !433
  %.reg2mem16 = alloca i64, !insn.addr !433
  %rdx.2.reg2mem = alloca i64, !insn.addr !433
  %r8.03.reg2mem = alloca i64, !insn.addr !433
  %storemerge4.reg2mem = alloca i64, !insn.addr !433
  %.reg2mem14 = alloca i64, !insn.addr !433
  %.reg2mem = alloca i32, !insn.addr !433
  %rdx.0.reg2mem = alloca i64, !insn.addr !433
  %1 = load i128, i128* %0
  %stack_var_-120 = alloca i64, align 8
  %stack_var_-100 = alloca i64, align 8
  %stack_var_-56 = alloca i64, align 8
  %stack_var_-88 = alloca i64, align 8
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !434
  %3 = call i32 @puts(i8* bitcast (i8** @global_var_3118 to i8*)), !insn.addr !435
  %4 = call i64 @loop_multi_exit(i64 7, i64 %arg2, i64 %arg3), !insn.addr !436
  %5 = and i64 %4, 4294967295, !insn.addr !437
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3140, i64 0, i64 0), i64 %5), !insn.addr !438
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !439
  br label %dec_label_pc_1eef, !insn.addr !439

dec_label_pc_1eef:                                ; preds = %dec_label_pc_1eef, %dec_label_pc_1e90
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %7 = add nuw nsw i64 %rdx.0.reload, 1, !insn.addr !440
  %8 = and i64 %7, 4294967295, !insn.addr !440
  %9 = trunc i64 %7 to i32, !insn.addr !441
  %10 = icmp eq i32 %9, ptrtoint (i32* @global_var_3e9 to i32), !insn.addr !441
  store i64 %8, i64* %rdx.0.reg2mem, !insn.addr !442
  br i1 %10, label %dec_label_pc_1ef8, label %dec_label_pc_1eef, !insn.addr !442

dec_label_pc_1ef8:                                ; preds = %dec_label_pc_1eef
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3523, i64 0, i64 0), i64 %8), !insn.addr !443
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3541, i64 0, i64 0), i64 4294967295), !insn.addr !444
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3541, i64 0, i64 0), i64 4294967294), !insn.addr !445
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3541, i64 0, i64 0), i64 4), !insn.addr !446
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3160, i64 0, i64 0), i64 10), !insn.addr !447
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3160, i64 0, i64 0), i64 5), !insn.addr !448
  %17 = call i128 @__asm_pxor(i128 %1, i128 %1), !insn.addr !449
  %18 = ptrtoint i64* %stack_var_-88 to i64, !insn.addr !450
  store i64 8589934593, i64* %stack_var_-88, align 8, !insn.addr !451
  %19 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !452
  %20 = call i64 @__asm_movaps(i128 %17), !insn.addr !453
  store i64 %20, i64* %stack_var_-56, align 8, !insn.addr !453
  %21 = call i64 @__asm_movaps(i128 %17), !insn.addr !454
  %22 = call i64 @duffs_device(i64 %19, i64 %18, i64 8, i64 %arg4), !insn.addr !455
  %23 = and i64 %22, 4294967295, !insn.addr !456
  %24 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_355e, i64 0, i64 0), i64 %23), !insn.addr !457
  %25 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3188, i64 0, i64 0), i64 18), !insn.addr !458
  store i32 1, i32* %.reg2mem
  store i64 1, i64* %.reg2mem14
  store i64 0, i64* %storemerge4.reg2mem
  store i64 0, i64* %r8.03.reg2mem
  br label %dec_label_pc_2010

dec_label_pc_2010:                                ; preds = %dec_label_pc_1ef8, %dec_label_pc_2010
  %r8.03.reload = load i64, i64* %r8.03.reg2mem
  %storemerge4.reload = load i64, i64* %storemerge4.reg2mem
  %.reload15 = load i64, i64* %.reg2mem14
  %.reload = load i32, i32* %.reg2mem
  %26 = add nuw nsw i64 %storemerge4.reload, 3, !insn.addr !459
  %27 = add nuw nsw i64 %r8.03.reload, %.reload15, !insn.addr !460
  %28 = and i64 %27, 4294967295, !insn.addr !460
  %29 = add i32 %.reload, -5, !insn.addr !461
  %30 = sub i32 4, %.reload
  %31 = and i32 %30, %.reload, !insn.addr !461
  %32 = icmp slt i32 %31, 0, !insn.addr !461
  %33 = icmp eq i32 %29, 0, !insn.addr !461
  %34 = icmp slt i32 %29, 0, !insn.addr !461
  %35 = icmp ne i1 %34, %32, !insn.addr !462
  %36 = or i1 %33, %35, !insn.addr !462
  %37 = select i1 %36, i64 %.reload15, i64 %26, !insn.addr !462
  %38 = and i64 %37, 4294967295, !insn.addr !462
  %39 = add nuw nsw i64 %38, 1, !insn.addr !463
  %40 = trunc i64 %39 to i32, !insn.addr !464
  %41 = icmp slt i32 %40, 10, !insn.addr !464
  store i32 %40, i32* %.reg2mem, !insn.addr !464
  store i64 %39, i64* %.reg2mem14, !insn.addr !464
  store i64 %38, i64* %storemerge4.reg2mem, !insn.addr !464
  store i64 %28, i64* %r8.03.reg2mem, !insn.addr !464
  br i1 %41, label %dec_label_pc_2010, label %dec_label_pc_2024, !insn.addr !464

dec_label_pc_2024:                                ; preds = %dec_label_pc_2010
  %42 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_31b0, i64 0, i64 0), i64 %28), !insn.addr !465
  store i64 0, i64* %rdx.2.reg2mem, !insn.addr !466
  br label %dec_label_pc_2058, !insn.addr !466

dec_label_pc_2058:                                ; preds = %dec_label_pc_2058, %dec_label_pc_2024
  %rdx.2.reload = load i64, i64* %rdx.2.reg2mem
  %43 = add nuw nsw i64 %rdx.2.reload, 1, !insn.addr !467
  %44 = and i64 %43, 4294967295, !insn.addr !467
  %45 = trunc i64 %43 to i32, !insn.addr !468
  %46 = icmp eq i32 %45, 101, !insn.addr !468
  store i64 %44, i64* %rdx.2.reg2mem, !insn.addr !469
  br i1 %46, label %dec_label_pc_2060, label %dec_label_pc_2058, !insn.addr !469

dec_label_pc_2060:                                ; preds = %dec_label_pc_2058
  %47 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_31d0, i64 0, i64 0), i64 %44), !insn.addr !470
  %48 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_31f8, i64 0, i64 0), i64 120), !insn.addr !471
  %49 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3220, i64 0, i64 0), i64 120), !insn.addr !472
  %50 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3240, i64 0, i64 0), i64 3), !insn.addr !473
  %51 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_357b, i64 0, i64 0), i64 10), !insn.addr !474
  %52 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_3268, i64 0, i64 0), i64 10), !insn.addr !475
  %53 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_3268, i64 0, i64 0), i64 120), !insn.addr !476
  %54 = ptrtoint i64* %stack_var_-100 to i64, !insn.addr !477
  store i64 8589934593, i64* %stack_var_-120, align 8, !insn.addr !478
  %55 = ptrtoint i64* %stack_var_-120 to i64, !insn.addr !479
  %56 = or i64 %55, 4, !insn.addr !480
  store i64 2, i64* %.reg2mem16
  store i64 %56, i64* %.reg2mem18
  br label %dec_label_pc_2140

dec_label_pc_2140:                                ; preds = %dec_label_pc_2060, %dec_label_pc_2140
  %.reload19 = load i64, i64* %.reg2mem18
  %.reload17 = load i64, i64* %.reg2mem16
  %57 = inttoptr i64 %.reload19 to i32*, !insn.addr !481
  %58 = load i32, i32* %57, align 4, !insn.addr !481
  %59 = zext i32 %58 to i64, !insn.addr !481
  %60 = add i64 %.reload19, 4, !insn.addr !480
  %61 = mul i64 %59, 2, !insn.addr !482
  %62 = add nuw nsw i64 %61, %.reload17, !insn.addr !482
  %63 = and i64 %62, 4294967295, !insn.addr !482
  %64 = icmp eq i64 %60, %54, !insn.addr !483
  %65 = icmp eq i1 %64, false, !insn.addr !484
  store i64 %63, i64* %.reg2mem16, !insn.addr !484
  store i64 %60, i64* %.reg2mem18, !insn.addr !484
  br i1 %65, label %dec_label_pc_2140, label %dec_label_pc_214e, !insn.addr !484

dec_label_pc_214e:                                ; preds = %dec_label_pc_2140
  %66 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3290, i64 0, i64 0), i64 %63), !insn.addr !485
  %67 = call i64 @__readfsqword(i64 40), !insn.addr !486
  %68 = sub i64 %2, %67, !insn.addr !486
  %69 = icmp eq i64 %68, 0, !insn.addr !486
  %70 = icmp eq i1 %69, false, !insn.addr !487
  br i1 %70, label %dec_label_pc_2184, label %dec_label_pc_2171, !insn.addr !487

dec_label_pc_2171:                                ; preds = %dec_label_pc_214e
  ret i64 %68, !insn.addr !488

dec_label_pc_2184:                                ; preds = %dec_label_pc_214e
  call void @__stack_chk_fail(), !insn.addr !489
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !490

; uselistorder directives
  uselistorder i64 %63, { 1, 0 }
  uselistorder i64 %.reload19, { 1, 0 }
  uselistorder i64 %44, { 1, 0 }
  uselistorder i32 %29, { 1, 0 }
  uselistorder i64 %28, { 1, 0 }
  uselistorder i32 %.reload, { 2, 1, 0 }
  uselistorder i128 %17, { 1, 0 }
  uselistorder i64 %8, { 1, 0 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %.reg2mem, { 1, 0, 2 }
  uselistorder i64* %.reg2mem14, { 1, 0, 2 }
  uselistorder i64* %storemerge4.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r8.03.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.2.reg2mem, { 1, 0, 2 }
  uselistorder i64* %.reg2mem16, { 1, 0, 2 }
  uselistorder i64* %.reg2mem18, { 1, 0, 2 }
  uselistorder i64 8, { 0, 2, 1 }
  uselistorder i64 4, { 13, 5, 9, 11, 12, 0, 6, 1, 2, 10, 3, 7, 4, 8 }
  uselistorder label %dec_label_pc_2140, { 1, 0 }
  uselistorder label %dec_label_pc_2010, { 1, 0 }
}

define i64 @non_local_jump(i64 %arg1) local_unnamed_addr {
dec_label_pc_2190:
  %storemerge.reg2mem = alloca i64, !insn.addr !491
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @global_var_6040 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !492
  %1 = icmp eq i32 %0, 0, !insn.addr !493
  %2 = icmp eq i1 %1, false, !insn.addr !494
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !494
  br i1 %2, label %dec_label_pc_21c5, label %dec_label_pc_21b0, !insn.addr !494

dec_label_pc_21b0:                                ; preds = %dec_label_pc_2190
  %3 = trunc i64 %arg1 to i32, !insn.addr !495
  %4 = icmp slt i32 %3, 0, !insn.addr !495
  br i1 %4, label %dec_label_pc_21e8, label %dec_label_pc_21b8, !insn.addr !496

dec_label_pc_21b8:                                ; preds = %dec_label_pc_21b0
  %5 = icmp sgt i32 %3, 100, !insn.addr !497
  br i1 %5, label %dec_label_pc_21d7, label %dec_label_pc_21bf, !insn.addr !497

dec_label_pc_21bf:                                ; preds = %dec_label_pc_21b8
  %6 = mul i64 %arg1, 2
  %7 = and i64 %6, 4294967294, !insn.addr !498
  store i64 %7, i64* %storemerge.reg2mem, !insn.addr !498
  br label %dec_label_pc_21c5, !insn.addr !498

dec_label_pc_21c5:                                ; preds = %dec_label_pc_2190, %dec_label_pc_21bf
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !499

dec_label_pc_21d7:                                ; preds = %dec_label_pc_21b8
  %8 = call i64 @__longjmp_chk(i64* nonnull @global_var_6040, i64 2), !insn.addr !500
  br label %dec_label_pc_21e8, !insn.addr !500

dec_label_pc_21e8:                                ; preds = %dec_label_pc_21d7, %dec_label_pc_21b0
  %9 = call i64 @__longjmp_chk(i64* nonnull @global_var_6040, i64 1), !insn.addr !501
  ret i64 %9, !insn.addr !502

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 (i64*, i64)* @__longjmp_chk, { 1, 0, 2 }
  uselistorder label %dec_label_pc_21c5, { 1, 0 }
}

define i64 @cpp_exception(i64 %arg1) local_unnamed_addr {
dec_label_pc_2200:
  %merge.reg2mem = alloca i64, !insn.addr !503
  %0 = trunc i64 %arg1 to i32, !insn.addr !504
  %1 = icmp slt i32 %0, 0, !insn.addr !504
  store i64 4294967295, i64* %merge.reg2mem, !insn.addr !505
  br i1 %1, label %dec_label_pc_2218, label %dec_label_pc_2208, !insn.addr !505

dec_label_pc_2208:                                ; preds = %dec_label_pc_2200
  %2 = icmp sgt i32 %0, 100, !insn.addr !506
  store i64 4294967294, i64* %merge.reg2mem, !insn.addr !506
  br i1 %2, label %dec_label_pc_2218, label %dec_label_pc_220d, !insn.addr !506

dec_label_pc_220d:                                ; preds = %dec_label_pc_2208
  %3 = mul i64 %arg1, 2, !insn.addr !507
  %4 = and i64 %3, 4294967294, !insn.addr !507
  ret i64 %4, !insn.addr !508

dec_label_pc_2218:                                ; preds = %dec_label_pc_2200, %dec_label_pc_2208
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !509

; uselistorder directives
  uselistorder i64* %merge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2218, { 1, 0 }
}

define i64 @large_jump_table(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2230:
  %stack_var_-104 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !510
  store i64 4672, i64* %stack_var_-104, align 8, !insn.addr !511
  %1 = trunc i64 %arg1 to i32, !insn.addr !512
  %2 = icmp ult i32 %1, 10
  %3 = call i64 @__readfsqword(i64 40)
  %4 = icmp eq i64 %0, %3
  %5 = icmp eq i1 %4, false
  br i1 %2, label %dec_label_pc_22cb, label %dec_label_pc_22e8, !insn.addr !513

dec_label_pc_22cb:                                ; preds = %dec_label_pc_2230
  br i1 %5, label %dec_label_pc_2302, label %dec_label_pc_22db, !insn.addr !514

dec_label_pc_22db:                                ; preds = %dec_label_pc_22cb
  %6 = ptrtoint i64* %stack_var_-104 to i64, !insn.addr !515
  %sext = mul i64 %arg1, 4294967296
  %7 = ashr exact i64 %sext, 29, !insn.addr !516
  %8 = add i64 %7, %6, !insn.addr !516
  %9 = inttoptr i64 %8 to i64*, !insn.addr !516
  %10 = load i64, i64* %9, align 8, !insn.addr !516
  ret i64 %10, !insn.addr !517

dec_label_pc_22e8:                                ; preds = %dec_label_pc_2230
  br i1 %5, label %dec_label_pc_2302, label %dec_label_pc_22f8, !insn.addr !518

dec_label_pc_22f8:                                ; preds = %dec_label_pc_22e8
  ret i64 4294967295, !insn.addr !519

dec_label_pc_2302:                                ; preds = %dec_label_pc_22e8, %dec_label_pc_22cb
  call void @__stack_chk_fail(), !insn.addr !520
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !521

; uselistorder directives
  uselistorder i64* %stack_var_-104, { 1, 0 }
}

define i64 @conditional_func_ptr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2310:
  %0 = and i64 %arg1, 4294967295, !insn.addr !522
  %1 = trunc i64 %arg1 to i32, !insn.addr !523
  %2 = icmp eq i32 %1, 0, !insn.addr !523
  %spec.select = select i1 %2, i64 %0, i64 4608
  ret i64 %spec.select, !insn.addr !524
}

define i64 @state_machine(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2340:
  %merge.reg2mem = alloca i64, !insn.addr !525
  %0 = trunc i64 %arg2 to i32, !insn.addr !526
  %1 = icmp eq i32 %0, 2, !insn.addr !526
  store i64 2, i64* %merge.reg2mem, !insn.addr !527
  br i1 %1, label %dec_label_pc_2380, label %dec_label_pc_2349, !insn.addr !527

dec_label_pc_2349:                                ; preds = %dec_label_pc_2340
  %2 = icmp sgt i32 %0, 2, !insn.addr !528
  br i1 %2, label %dec_label_pc_2370, label %dec_label_pc_234b, !insn.addr !528

dec_label_pc_234b:                                ; preds = %dec_label_pc_2349
  %3 = icmp eq i32 %0, 0, !insn.addr !529
  br i1 %3, label %dec_label_pc_23a0, label %dec_label_pc_234f, !insn.addr !530

dec_label_pc_234f:                                ; preds = %dec_label_pc_234b
  %4 = icmp eq i32 %0, 1, !insn.addr !531
  %5 = icmp eq i1 %4, false, !insn.addr !532
  store i64 3, i64* %merge.reg2mem, !insn.addr !532
  br i1 %5, label %dec_label_pc_2380, label %dec_label_pc_2354, !insn.addr !532

dec_label_pc_2354:                                ; preds = %dec_label_pc_234f
  %6 = trunc i64 %arg1 to i32, !insn.addr !533
  %7 = icmp eq i32 %6, 2, !insn.addr !533
  store i64 2, i64* %merge.reg2mem, !insn.addr !534
  br i1 %7, label %dec_label_pc_2380, label %dec_label_pc_2359, !insn.addr !534

dec_label_pc_2359:                                ; preds = %dec_label_pc_2354
  %8 = icmp eq i32 %6, 99, !insn.addr !535
  %9 = zext i1 %8 to i64, !insn.addr !536
  %10 = select i1 %8, i64 2, i64 1, !insn.addr !537
  %11 = add nuw nsw i64 %10, %9, !insn.addr !537
  ret i64 %11, !insn.addr !538

dec_label_pc_2370:                                ; preds = %dec_label_pc_2349
  %12 = icmp eq i32 %0, 3, !insn.addr !539
  %13 = icmp eq i1 %12, false, !insn.addr !540
  store i64 3, i64* %merge.reg2mem, !insn.addr !540
  br i1 %13, label %dec_label_pc_2380, label %dec_label_pc_2375, !insn.addr !540

dec_label_pc_2375:                                ; preds = %dec_label_pc_2370
  %14 = trunc i64 %arg1 to i32, !insn.addr !541
  %15 = icmp eq i32 %14, 0, !insn.addr !541
  %16 = select i1 %15, i64 0, i64 3, !insn.addr !542
  ret i64 %16, !insn.addr !543

dec_label_pc_2380:                                ; preds = %dec_label_pc_234f, %dec_label_pc_2370, %dec_label_pc_2354, %dec_label_pc_2340
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !544

dec_label_pc_23a0:                                ; preds = %dec_label_pc_234b
  %17 = trunc i64 %arg1 to i32, !insn.addr !545
  %18 = icmp eq i32 %17, 1, !insn.addr !545
  %19 = zext i1 %18 to i64, !insn.addr !546
  ret i64 %19, !insn.addr !547

; uselistorder directives
  uselistorder i1 %8, { 1, 0 }
  uselistorder i32 %0, { 0, 2, 1, 3, 4 }
  uselistorder i64* %merge.reg2mem, { 0, 2, 4, 1, 3 }
  uselistorder i32 3, { 1, 2, 3, 0, 4 }
  uselistorder i32 2, { 2, 1, 3, 4, 0, 5, 6, 7 }
  uselistorder i64 %arg1, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2380, { 1, 2, 0, 3 }
}

define i64 @fsm_func_table(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_23b0:
  %stack_var_-56 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !548
  store i64 4864, i64* %stack_var_-56, align 8, !insn.addr !549
  %1 = trunc i64 %arg2 to i32, !insn.addr !550
  %2 = icmp ult i32 %1, 4
  %3 = call i64 @__readfsqword(i64 40)
  %4 = icmp eq i64 %0, %3
  %5 = icmp eq i1 %4, false
  br i1 %2, label %dec_label_pc_23fa, label %dec_label_pc_2420, !insn.addr !551

dec_label_pc_23fa:                                ; preds = %dec_label_pc_23b0
  br i1 %5, label %dec_label_pc_243a, label %dec_label_pc_240a, !insn.addr !552

dec_label_pc_240a:                                ; preds = %dec_label_pc_23fa
  %6 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !553
  %sext = mul i64 %arg2, 4294967296
  %7 = ashr exact i64 %sext, 29, !insn.addr !554
  %8 = add i64 %7, %6, !insn.addr !554
  %9 = inttoptr i64 %8 to i64*, !insn.addr !554
  %10 = load i64, i64* %9, align 8, !insn.addr !554
  ret i64 %10, !insn.addr !555

dec_label_pc_2420:                                ; preds = %dec_label_pc_23b0
  br i1 %5, label %dec_label_pc_243a, label %dec_label_pc_2430, !insn.addr !556

dec_label_pc_2430:                                ; preds = %dec_label_pc_2420
  ret i64 3, !insn.addr !557

dec_label_pc_243a:                                ; preds = %dec_label_pc_2420, %dec_label_pc_23fa
  call void @__stack_chk_fail(), !insn.addr !558
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !559

; uselistorder directives
  uselistorder i64* %stack_var_-56, { 1, 0 }
  uselistorder i64 3, { 4, 5, 1, 0, 12, 6, 7, 8, 2, 9, 3, 10, 11 }
  uselistorder i64 29, { 2, 0, 1 }
}

define i64 @computed_goto(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2440:
  %merge.reg2mem = alloca i64, !insn.addr !560
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !561
  %1 = trunc i64 %arg2 to i32, !insn.addr !562
  %2 = icmp ult i32 %1, 4
  store i64 9360, i64* %merge.reg2mem, !insn.addr !563
  br i1 %2, label %dec_label_pc_248a, label %dec_label_pc_24e0, !insn.addr !563

dec_label_pc_248a:                                ; preds = %dec_label_pc_24e0, %dec_label_pc_2440
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !564

dec_label_pc_24e0:                                ; preds = %dec_label_pc_2440
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !565
  %4 = icmp eq i64 %0, %3, !insn.addr !565
  %5 = icmp eq i1 %4, false, !insn.addr !566
  store i64 4294967295, i64* %merge.reg2mem, !insn.addr !566
  br i1 %5, label %dec_label_pc_24e7, label %dec_label_pc_248a, !insn.addr !566

dec_label_pc_24e7:                                ; preds = %dec_label_pc_24e0
  call void @__stack_chk_fail(), !insn.addr !567
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !568

; uselistorder directives
  uselistorder i64* %merge.reg2mem, { 1, 0, 2 }
}

define i64 @obfuscated_cf(i64 %arg1) local_unnamed_addr {
dec_label_pc_24f0:
  %0 = mul i64 %arg1, 2, !insn.addr !569
  %1 = and i64 %0, 4294967294, !insn.addr !569
  ret i64 %1, !insn.addr !570
}

define i64 @opaque_predicate(i64 %arg1) local_unnamed_addr {
dec_label_pc_2500:
  %0 = mul i64 %arg1, 2, !insn.addr !571
  %1 = and i64 %0, 4294967294, !insn.addr !571
  ret i64 %1, !insn.addr !572

; uselistorder directives
  uselistorder i64 4294967294, { 4, 5, 6, 0, 2, 13, 7, 8, 3, 9, 1, 10, 11, 12 }
}

define i64 @overlapped_code(i64 %arg1) local_unnamed_addr {
dec_label_pc_2510:
  %0 = urem i64 %arg1, 2
  %1 = icmp eq i64 %0, 0, !insn.addr !573
  br i1 %1, label %dec_label_pc_2520, label %dec_label_pc_251a, !insn.addr !574

dec_label_pc_251a:                                ; preds = %dec_label_pc_2510
  %2 = mul i64 %arg1, 2, !insn.addr !575
  %3 = add i64 %arg1, 1, !insn.addr !575
  %4 = add i64 %3, %2, !insn.addr !575
  %5 = and i64 %4, 4294967295, !insn.addr !575
  ret i64 %5, !insn.addr !576

dec_label_pc_2520:                                ; preds = %dec_label_pc_2510
  %6 = trunc i64 %arg1 to i32, !insn.addr !577
  %7 = icmp slt i32 %6, 0
  %8 = zext i1 %7 to i32, !insn.addr !578
  %9 = add i32 %8, %6, !insn.addr !579
  %10 = ashr i32 %9, 1, !insn.addr !580
  %11 = zext i32 %10 to i64, !insn.addr !580
  ret i64 %11, !insn.addr !581

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i32 0, { 0, 5, 6, 7, 8, 33, 34, 35, 36, 37, 1, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 2, 24, 25, 26, 27, 3, 28, 29, 30, 31, 32, 4 }
  uselistorder i64 %arg1, { 2, 3, 0, 1 }
}

define i64 @test_control_flow_l3() local_unnamed_addr {
dec_label_pc_2530:
  %stack_var_-40 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !582
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_32b8 to i8*)), !insn.addr !583
  %2 = call i64 @non_local_jump(i64 5), !insn.addr !584
  %3 = and i64 %2, 4294967295, !insn.addr !585
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_32e0, i64 0, i64 0), i64 %3), !insn.addr !586
  %5 = call i64 @non_local_jump(i64 4294967291), !insn.addr !587
  %6 = and i64 %5, 4294967295, !insn.addr !588
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_32e0, i64 0, i64 0), i64 %6), !insn.addr !589
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3599, i64 0, i64 0), i64 10), !insn.addr !590
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3599, i64 0, i64 0), i64 4294967295), !insn.addr !591
  %10 = call i64 @op_add(i64 10, i64 5), !insn.addr !592
  %11 = and i64 %10, 4294967295, !insn.addr !593
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3300, i64 0, i64 0), i64 %11), !insn.addr !594
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_3328, i64 0, i64 0), i64 10), !insn.addr !595
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_35b7, i64 0, i64 0), i64 1), !insn.addr !596
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3350, i64 0, i64 0), i64 2), !insn.addr !597
  store i64 4294967296, i64* %stack_var_-40, align 8, !insn.addr !598
  %16 = call i64 @computed_goto(i64* nonnull %stack_var_-40, i64 2), !insn.addr !599
  %17 = and i64 %16, 4294967295, !insn.addr !600
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_35d5, i64 0, i64 0), i64 %17), !insn.addr !601
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_35f3, i64 0, i64 0), i64 10), !insn.addr !602
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3370, i64 0, i64 0), i64 10), !insn.addr !603
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3398, i64 0, i64 0), i64 16), !insn.addr !604
  %22 = call i64 @__readfsqword(i64 40), !insn.addr !605
  %23 = sub i64 %0, %22, !insn.addr !605
  %24 = icmp eq i64 %23, 0, !insn.addr !605
  %25 = icmp eq i1 %24, false, !insn.addr !606
  br i1 %25, label %dec_label_pc_26ca, label %dec_label_pc_26c4, !insn.addr !606

dec_label_pc_26c4:                                ; preds = %dec_label_pc_2530
  ret i64 %23, !insn.addr !607

dec_label_pc_26ca:                                ; preds = %dec_label_pc_2530
  call void @__stack_chk_fail(), !insn.addr !608
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !608

; uselistorder directives
  uselistorder i64 ptrtoint (i32* @0 to i64), { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 }
  uselistorder void ()* @__stack_chk_fail, { 3, 8, 4, 5, 1, 6, 2, 0, 7, 9 }
  uselistorder i1 false, { 33, 31, 4, 5, 6, 7, 32, 36, 37, 8, 9, 10, 11, 12, 0, 13, 14, 34, 35, 38, 39, 40, 15, 16, 17, 18, 19, 20, 21, 1, 22, 23, 24, 25, 26, 2, 27, 3, 28, 29, 30 }
  uselistorder i64 4294967296, { 19, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 17, 18, 10, 11, 12, 13, 14, 15, 16 }
  uselistorder i64 2, { 28, 29, 5, 20, 6, 7, 24, 1, 0, 8, 30, 9, 10, 2, 11, 25, 21, 26, 12, 22, 13, 3, 14, 23, 15, 4, 16, 18, 19, 27, 17 }
  uselistorder i64 1, { 33, 36, 14, 34, 16, 17, 0, 15, 18, 19, 20, 21, 1, 13, 22, 23, 24, 25, 2, 38, 3, 39, 4, 35, 26, 6, 7, 5, 27, 8, 37, 28, 29, 30, 9, 31, 10, 32, 11, 12 }
  uselistorder i64 10, { 3, 4, 5, 6, 7, 8, 9, 10, 1, 11, 12, 2, 0 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 57 }
  uselistorder i64 4294967295, { 21, 22, 95, 23, 24, 25, 0, 26, 10, 1, 2, 31, 30, 28, 29, 32, 96, 27, 33, 34, 35, 11, 37, 38, 36, 18, 39, 40, 41, 42, 43, 44, 45, 48, 46, 47, 49, 50, 51, 52, 53, 54, 16, 55, 56, 3, 57, 58, 59, 4, 13, 5, 12, 6, 60, 61, 62, 63, 64, 65, 14, 7, 66, 67, 68, 69, 70, 71, 72, 73, 74, 17, 8, 9, 75, 76, 77, 78, 79, 80, 81, 82, 83, 15, 19, 84, 85, 20, 86, 87, 88, 89, 90, 91, 92, 93, 94 }
  uselistorder i64 (i64)* @non_local_jump, { 1, 0 }
  uselistorder i64 5, { 3, 4, 5, 0, 1, 6, 7, 2 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
  uselistorder i64 0, { 147, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 148, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 0, 80, 81, 1, 2, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 3, 92, 93, 5, 4, 37, 94, 6, 7, 8, 9, 10, 11, 12, 95, 96, 97, 33, 13, 15, 17, 14, 16, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 120, 118, 119, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 19, 18, 20, 21, 23, 24, 143, 22, 25, 26, 27, 28, 29, 36, 30, 144, 31, 146, 34, 35, 32, 149, 38, 39, 40, 41, 42, 43, 145 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_26d0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !609

; uselistorder directives
  uselistorder i32 1, { 5, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 167, 179, 6, 168, 96, 97, 7, 169, 8, 9, 98, 99, 100, 101, 102, 103, 104, 105, 106, 16, 107, 108, 109, 110, 111, 112, 113, 114, 115, 173, 172, 171, 170, 18, 17, 15, 14, 13, 12, 11, 10, 0, 116, 21, 20, 19, 174, 117, 180, 118, 119, 26, 25, 24, 23, 22, 120, 29, 28, 27, 31, 30, 4, 35, 34, 33, 32, 121, 38, 37, 36, 3, 122, 123, 39, 181, 124, 40, 125, 175, 45, 44, 43, 42, 41, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 176, 49, 48, 47, 46, 82, 153, 52, 51, 50, 154, 53, 83, 155, 56, 55, 54, 177, 58, 57, 156, 61, 60, 59, 63, 62, 66, 65, 64, 157, 69, 68, 67, 158, 70, 71, 81, 72, 159, 160, 161, 162, 73, 163, 164, 74, 165, 75, 76, 166, 79, 78, 77, 2, 178, 1, 80 }
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
!89 = !{i64 4980}
!90 = !{i64 4983}
!91 = !{i64 4985}
!92 = !{i64 4987}
!93 = !{i64 4999}
!94 = !{i64 4996}
!95 = !{i64 5001}
!96 = !{i64 5004}
!97 = !{i64 5014}
!98 = !{i64 5016}
!99 = !{i64 5019}
!100 = !{i64 5024}
!101 = !{i64 5030}
!102 = !{i64 5032}
!103 = !{i64 5037}
!104 = !{i64 5034}
!105 = !{i64 5039}
!106 = !{i64 5042}
!107 = !{i64 5056}
!108 = !{i64 5062}
!109 = !{i64 5064}
!110 = !{i64 5071}
!111 = !{i64 5073}
!112 = !{i64 5075}
!113 = !{i64 5077}
!114 = !{i64 5079}
!115 = !{i64 5081}
!116 = !{i64 5085}
!117 = !{i64 5088}
!118 = !{i64 5091}
!119 = !{i64 5094}
!120 = !{i64 5109}
!121 = !{i64 5136}
!122 = !{i64 5145}
!123 = !{i64 5154}
!124 = !{i64 5167}
!125 = !{i64 5170}
!126 = !{i64 5181}
!127 = !{i64 5184}
!128 = !{i64 5193}
!129 = !{i64 5196}
!130 = !{i64 5198}
!131 = !{i64 5201}
!132 = !{i64 5204}
!133 = !{i64 5216}
!134 = !{i64 5225}
!135 = !{i64 5228}
!136 = !{i64 5230}
!137 = !{i64 5239}
!138 = !{i64 5242}
!139 = !{i64 5257}
!140 = !{i64 5267}
!141 = !{i64 5284}
!142 = !{i64 5297}
!143 = !{i64 5316}
!144 = !{i64 5328}
!145 = !{i64 5331}
!146 = !{i64 5334}
!147 = !{i64 5338}
!148 = !{i64 5349}
!149 = !{i64 5352}
!150 = !{i64 5354}
!151 = !{i64 5365}
!152 = !{i64 5367}
!153 = !{i64 5376}
!154 = !{i64 5380}
!155 = !{i64 5382}
!156 = !{i64 5392}
!157 = !{i64 5395}
!158 = !{i64 5398}
!159 = !{i64 5400}
!160 = !{i64 5405}
!161 = !{i64 5424}
!162 = !{i64 5428}
!163 = !{i64 5430}
!164 = !{i64 5440}
!165 = !{i64 5443}
!166 = !{i64 5445}
!167 = !{i64 5456}
!168 = !{i64 5459}
!169 = !{i64 5463}
!170 = !{i64 5465}
!171 = !{i64 5467}
!172 = !{i64 5472}
!173 = !{i64 5504}
!174 = !{i64 5511}
!175 = !{i64 5520}
!176 = !{i64 5523}
!177 = !{i64 5525}
!178 = !{i64 5536}
!179 = !{i64 5539}
!180 = !{i64 5543}
!181 = !{i64 5545}
!182 = !{i64 5547}
!183 = !{i64 5552}
!184 = !{i64 5568}
!185 = !{i64 5576}
!186 = !{i64 5578}
!187 = !{i64 5584}
!188 = !{i64 5589}
!189 = !{i64 5586}
!190 = !{i64 5592}
!191 = !{i64 5595}
!192 = !{i64 5597}
!193 = !{i64 5599}
!194 = !{i64 5600}
!195 = !{i64 5604}
!196 = !{i64 5613}
!197 = !{i64 5662}
!198 = !{i64 5664}
!199 = !{i64 5670}
!200 = !{i64 5674}
!201 = !{i64 5666}
!202 = !{i64 5676}
!203 = !{i64 5682}
!204 = !{i64 5684}
!205 = !{i64 5679}
!206 = !{i64 5701}
!207 = !{i64 5710}
!208 = !{i64 5719}
!209 = !{i64 5736}
!210 = !{i64 5741}
!211 = !{i64 5744}
!212 = !{i64 5748}
!213 = !{i64 5750}
!214 = !{i64 5781}
!215 = !{i64 5772}
!216 = !{i64 5774}
!217 = !{i64 5768}
!218 = !{i64 5778}
!219 = !{i64 5783}
!220 = !{i64 5788}
!221 = !{i64 5808}
!222 = !{i64 5812}
!223 = !{i64 5814}
!224 = !{i64 5816}
!225 = !{i64 5819}
!226 = !{i64 5822}
!227 = !{i64 5824}
!228 = !{i64 5834}
!229 = !{i64 5836}
!230 = !{i64 5863}
!231 = !{i64 5856}
!232 = !{i64 5860}
!233 = !{i64 5865}
!234 = !{i64 5870}
!235 = !{i64 5876}
!236 = !{i64 5880}
!237 = !{i64 5883}
!238 = !{i64 5888}
!239 = !{i64 5911}
!240 = !{i64 5927}
!241 = !{i64 5951}
!242 = !{i64 5971}
!243 = !{i64 5998}
!244 = !{i64 6018}
!245 = !{i64 6042}
!246 = !{i64 6062}
!247 = !{i64 6082}
!248 = !{i64 6099}
!249 = !{i64 6123}
!250 = !{i64 6147}
!251 = !{i64 6171}
!252 = !{i64 6195}
!253 = !{i64 6219}
!254 = !{i64 6240}
!255 = !{i64 6264}
!256 = !{i64 6288}
!257 = !{i64 6312}
!258 = !{i64 6336}
!259 = !{i64 6360}
!260 = !{i64 6365}
!261 = !{i64 6398}
!262 = !{i64 6405}
!263 = !{i64 6409}
!264 = !{i64 6415}
!265 = !{i64 6419}
!266 = !{i64 6424}
!267 = !{i64 6403}
!268 = !{i64 6443}
!269 = !{i64 6481}
!270 = !{i64 6488}
!271 = !{i64 6492}
!272 = !{i64 6498}
!273 = !{i64 6502}
!274 = !{i64 6507}
!275 = !{i64 6486}
!276 = !{i64 6519}
!277 = !{i64 6550}
!278 = !{i64 6570}
!279 = !{i64 6597}
!280 = !{i64 6621}
!281 = !{i64 6641}
!282 = !{i64 6651}
!283 = !{i64 6660}
!284 = !{i64 6682}
!285 = !{i64 6714}
!286 = !{i64 6719}
!287 = !{i64 6720}
!288 = !{i64 6735}
!289 = !{i64 6837}
!290 = !{i64 6839}
!291 = !{i64 6834}
!292 = !{i64 6841}
!293 = !{i64 6844}
!294 = !{i64 6846}
!295 = !{i64 6849}
!296 = !{i64 6851}
!297 = !{i64 6854}
!298 = !{i64 6856}
!299 = !{i64 6863}
!300 = !{i64 6866}
!301 = !{i64 6859}
!302 = !{i64 6868}
!303 = !{i64 6870}
!304 = !{i64 6872}
!305 = !{i64 6876}
!306 = !{i64 6879}
!307 = !{i64 6882}
!308 = !{i64 6898}
!309 = !{i64 6907}
!310 = !{i64 6913}
!311 = !{i64 6951}
!312 = !{i64 6956}
!313 = !{i64 6960}
!314 = !{i64 6988}
!315 = !{i64 6991}
!316 = !{i64 6966}
!317 = !{i64 6976}
!318 = !{i64 6979}
!319 = !{i64 6984}
!320 = !{i64 6993}
!321 = !{i64 6994}
!322 = !{i64 7000}
!323 = !{i64 7008}
!324 = !{i64 7012}
!325 = !{i64 7014}
!326 = !{i64 7016}
!327 = !{i64 7022}
!328 = !{i64 7024}
!329 = !{i64 7027}
!330 = !{i64 7030}
!331 = !{i64 7033}
!332 = !{i64 7045}
!333 = !{i64 7060}
!334 = !{i64 7062}
!335 = !{i64 7064}
!336 = !{i64 7067}
!337 = !{i64 7074}
!338 = !{i64 7076}
!339 = !{i64 7083}
!340 = !{i64 7086}
!341 = !{i64 7101}
!342 = !{i64 7135}
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
!439 = !{i64 7902}
!440 = !{i64 7904}
!441 = !{i64 7907}
!442 = !{i64 7913}
!443 = !{i64 7949}
!444 = !{i64 7969}
!445 = !{i64 7989}
!446 = !{i64 8016}
!447 = !{i64 8036}
!448 = !{i64 8056}
!449 = !{i64 8061}
!450 = !{i64 8065}
!451 = !{i64 8080}
!452 = !{i64 8085}
!453 = !{i64 8135}
!454 = !{i64 8140}
!455 = !{i64 8150}
!456 = !{i64 8167}
!457 = !{i64 8171}
!458 = !{i64 8195}
!459 = !{i64 8208}
!460 = !{i64 8211}
!461 = !{i64 8214}
!462 = !{i64 8217}
!463 = !{i64 8220}
!464 = !{i64 8226}
!465 = !{i64 8245}
!466 = !{i64 8260}
!467 = !{i64 8272}
!468 = !{i64 8275}
!469 = !{i64 8278}
!470 = !{i64 8302}
!471 = !{i64 8333}
!472 = !{i64 8357}
!473 = !{i64 8381}
!474 = !{i64 8405}
!475 = !{i64 8425}
!476 = !{i64 8445}
!477 = !{i64 8458}
!478 = !{i64 8480}
!479 = !{i64 8500}
!480 = !{i64 8514}
!481 = !{i64 8512}
!482 = !{i64 8518}
!483 = !{i64 8521}
!484 = !{i64 8524}
!485 = !{i64 8540}
!486 = !{i64 8550}
!487 = !{i64 8559}
!488 = !{i64 8566}
!489 = !{i64 8580}
!490 = !{i64 8585}
!491 = !{i64 8592}
!492 = !{i64 8611}
!493 = !{i64 8620}
!494 = !{i64 8622}
!495 = !{i64 8628}
!496 = !{i64 8630}
!497 = !{i64 8637}
!498 = !{i64 8643}
!499 = !{i64 8649}
!500 = !{i64 8675}
!501 = !{i64 8692}
!502 = !{i64 8697}
!503 = !{i64 8704}
!504 = !{i64 8708}
!505 = !{i64 8710}
!506 = !{i64 8715}
!507 = !{i64 8717}
!508 = !{i64 8720}
!509 = !{i64 8733}
!510 = !{i64 8774}
!511 = !{i64 8790}
!512 = !{i64 8902}
!513 = !{i64 8905}
!514 = !{i64 8921}
!515 = !{i64 8756}
!516 = !{i64 8923}
!517 = !{i64 8931}
!518 = !{i64 8950}
!519 = !{i64 8961}
!520 = !{i64 8962}
!521 = !{i64 8967}
!522 = !{i64 8980}
!523 = !{i64 8991}
!524 = !{i64 9016}
!525 = !{i64 9024}
!526 = !{i64 9028}
!527 = !{i64 9031}
!528 = !{i64 9033}
!529 = !{i64 9035}
!530 = !{i64 9037}
!531 = !{i64 9039}
!532 = !{i64 9042}
!533 = !{i64 9044}
!534 = !{i64 9047}
!535 = !{i64 9051}
!536 = !{i64 9054}
!537 = !{i64 9057}
!538 = !{i64 9061}
!539 = !{i64 9072}
!540 = !{i64 9075}
!541 = !{i64 9077}
!542 = !{i64 9081}
!543 = !{i64 9084}
!544 = !{i64 9093}
!545 = !{i64 9122}
!546 = !{i64 9125}
!547 = !{i64 9128}
!548 = !{i64 9144}
!549 = !{i64 9165}
!550 = !{i64 9205}
!551 = !{i64 9208}
!552 = !{i64 9224}
!553 = !{i64 9140}
!554 = !{i64 9229}
!555 = !{i64 9237}
!556 = !{i64 9262}
!557 = !{i64 9273}
!558 = !{i64 9274}
!559 = !{i64 9279}
!560 = !{i64 9280}
!561 = !{i64 9288}
!562 = !{i64 9349}
!563 = !{i64 9352}
!564 = !{i64 9357}
!565 = !{i64 9374}
!566 = !{i64 9383}
!567 = !{i64 9447}
!568 = !{i64 9452}
!569 = !{i64 9460}
!570 = !{i64 9463}
!571 = !{i64 9476}
!572 = !{i64 9479}
!573 = !{i64 9492}
!574 = !{i64 9496}
!575 = !{i64 9498}
!576 = !{i64 9502}
!577 = !{i64 9504}
!578 = !{i64 9506}
!579 = !{i64 9509}
!580 = !{i64 9511}
!581 = !{i64 9513}
!582 = !{i64 9543}
!583 = !{i64 9559}
!584 = !{i64 9569}
!585 = !{i64 9582}
!586 = !{i64 9586}
!587 = !{i64 9596}
!588 = !{i64 9616}
!589 = !{i64 9620}
!590 = !{i64 9640}
!591 = !{i64 9660}
!592 = !{i64 9675}
!593 = !{i64 9692}
!594 = !{i64 9696}
!595 = !{i64 9720}
!596 = !{i64 9744}
!597 = !{i64 9768}
!598 = !{i64 9791}
!599 = !{i64 9810}
!600 = !{i64 9827}
!601 = !{i64 9831}
!602 = !{i64 9855}
!603 = !{i64 9879}
!604 = !{i64 9903}
!605 = !{i64 9913}
!606 = !{i64 9922}
!607 = !{i64 9929}
!608 = !{i64 9930}
!609 = !{i64 9948}
