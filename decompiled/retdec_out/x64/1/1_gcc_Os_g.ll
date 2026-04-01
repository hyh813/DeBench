source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@global_var_3047 = constant [26 x i8] c"CF-L1-02 (single_if): %d\0A\00"
@global_var_3028 = constant [31 x i8] c"CF-L1-01 (sequential_ops): %d\0A\00"
@global_var_3061 = constant [24 x i8] c"CF-L1-03 (if_else): %d\0A\00"
@global_var_3079 = constant [28 x i8] c"CF-L1-04 (nested_if_2): %d\0A\00"
@global_var_31e2 = constant [27 x i8] c"CF-L1-16 (loop_break): %d\0A\00"
@global_var_3095 = constant [31 x i8] c"CF-L1-05 (nested_if_deep): %d\0A\00"
@global_var_30b4 = constant [32 x i8] c"CF-L1-06 (if_elseif_chain): %d\0A\00"
@global_var_30d4 = constant [31 x i8] c"CF-L1-07 (if_elseif_long): %d\0A\00"
@global_var_30f3 = constant [29 x i8] c"CF-L1-08 (switch_small): %d\0A\00"
@global_var_3110 = constant [29 x i8] c"CF-L1-09 (switch_large): %d\0A\00"
@global_var_312d = constant [31 x i8] c"CF-L1-10 (switch_default): %d\0A\00"
@global_var_314c = constant [35 x i8] c"CF-L1-11 (switch_fallthrough): %d\0A\00"
@global_var_316f = constant [31 x i8] c"CF-L1-12 (loop_for_fixed): %d\0A\00"
@global_var_318e = constant [27 x i8] c"CF-L1-13 (loop_while): %d\0A\00"
@global_var_31a9 = constant [29 x i8] c"CF-L1-14 (loop_dowhile): %d\0A\00"
@global_var_31c6 = constant [28 x i8] c"CF-L1-15 (loop_nested): %d\0A\00"
@global_var_321b = constant [29 x i8] c"CF-L1-18 (goto_forward): %d\0A\00"
@global_var_31fd = constant [30 x i8] c"CF-L1-17 (loop_continue): %d\0A\00"
@global_var_3256 = constant [27 x i8] c"CF-L1-20 (ternary_op): %d\0A\00"
@global_var_3238 = constant [30 x i8] c"CF-L1-19 (goto_backward): %d\0A\00"
@global_var_3610 = local_unnamed_addr constant i64 -31928786885886
@global_var_341a = constant [36 x i8] c"CF-L2-13 (call_func_ptr_array): %d\0A\00"
@global_var_32d3 = constant [29 x i8] c"CF-L2-03 (multi_return): %d\0A\00"
@global_var_3295 = constant [32 x i8] c"CF-L2-01 (loop_multi_exit): %d\0A\00"
@global_var_32b5 = constant [30 x i8] c"CF-L2-02 (infinite_loop): %d\0A\00"
@global_var_32f0 = constant [35 x i8] c"CF-L2-04 (conditional_return): %d\0A\00"
@global_var_3313 = constant [29 x i8] c"CF-L2-05 (duffs_device): %d\0A\00"
@global_var_3330 = constant [34 x i8] c"CF-L2-06 (loop_complex_cond): %d\0A\00"
@global_var_3352 = constant [32 x i8] c"CF-L2-07 (loop_modify_var): %d\0A\00"
@global_var_3372 = constant [36 x i8] c"CF-L2-08 (loop_external_state): %d\0A\00"
@global_var_3396 = constant [36 x i8] c"CF-L2-09 (recursion_factorial): %d\0A\00"
@global_var_33ba = constant [31 x i8] c"CF-L2-10 (tail_recursion): %d\0A\00"
@global_var_33d9 = constant [35 x i8] c"CF-L2-11 (indirect_recursion): %d\0A\00"
@global_var_33fc = constant [30 x i8] c"CF-L2-12 (call_func_ptr): %d\0A\00"
@global_var_343e = constant [38 x i8] c"CF-L2-15 (process_with_callback): %d\0A\00"
@jump_buffer = global i64 0
@global_var_3488 = constant [31 x i8] c"CF-L3-01 (non_local_jump): %d\0A\00"
@global_var_34a7 = constant [30 x i8] c"CF-L3-02 (cpp_exception): %d\0A\00"
@global_var_34c5 = constant [33 x i8] c"CF-L3-03 (large_jump_table): %d\0A\00"
@global_var_34e6 = constant [37 x i8] c"CF-L3-04 (conditional_func_ptr): %d\0A\00"
@global_var_350b = constant [30 x i8] c"CF-L3-05 (state_machine): %d\0A\00"
@global_var_3529 = constant [31 x i8] c"CF-L3-06 (fsm_func_table): %d\0A\00"
@global_var_3548 = constant [30 x i8] c"CF-L3-07 (computed_goto): %d\0A\00"
@global_var_3566 = constant [30 x i8] c"CF-L3-08 (obfuscated_cf): %d\0A\00"
@global_var_3584 = constant [33 x i8] c"CF-L3-09 (opaque_predicate): %d\0A\00"
@global_var_35a5 = constant [32 x i8] c"CF-L3-10 (overlapped_code): %d\0A\00"
@0 = external global i32
@global_var_6080 = local_unnamed_addr global i8 0
@1 = internal constant [11 x i8] c"\0F\052\02\01\1B\03;4\02\00"
@global_var_362c = constant i8* getelementptr inbounds ([11 x i8], [11 x i8]* @1, i64 0, i64 0)
@2 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\9F\BA\E7\A1\80\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_3004 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @2, i64 0, i64 0)
@global_var_3039 = constant i32 1600938345
@3 = internal constant [2 x i8] c"\01\00"
@global_var_35e0 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @3, i64 0, i64 0)
@global_var_3e9 = global i32 0
@4 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\AB\98\E7\BA\A7\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_3271 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @4, i64 0, i64 0)
@5 = internal constant [3 x i8] c"\0F\12\00"
@global_var_6020 = global i8* getelementptr inbounds ([3 x i8], [3 x i8]* @5, i64 0, i64 0)
@6 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\9E\81\E7\AB\AF\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_3464 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @6, i64 0, i64 0)

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
dec_label_pc_1100:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !16
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !16
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !16
  %3 = call i32 @__libc_start_main(i64 4320, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !16
  %4 = call i64 @__asm_hlt(), !insn.addr !17
  unreachable, !insn.addr !17
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1130:
  ret i64 24688, !insn.addr !18
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1160:
  ret i64 0, !insn.addr !19
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_11a0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* @global_var_6080, align 1, !insn.addr !20
  %3 = icmp eq i8 %2, 0, !insn.addr !20
  %4 = icmp eq i1 %3, false, !insn.addr !21
  br i1 %4, label %dec_label_pc_11d8, label %dec_label_pc_11ad, !insn.addr !21

dec_label_pc_11ad:                                ; preds = %dec_label_pc_11a0
  %5 = load i64, i64* inttoptr (i64 24568 to i64*), align 8, !insn.addr !22
  %6 = icmp eq i64 %5, 0, !insn.addr !22
  br i1 %6, label %dec_label_pc_11c7, label %dec_label_pc_11bb, !insn.addr !23

dec_label_pc_11bb:                                ; preds = %dec_label_pc_11ad
  %7 = load i64, i64* inttoptr (i64 24584 to i64*), align 8, !insn.addr !24
  %8 = inttoptr i64 %7 to i64*, !insn.addr !25
  call void @__cxa_finalize(i64* %8), !insn.addr !25
  br label %dec_label_pc_11c7, !insn.addr !25

dec_label_pc_11c7:                                ; preds = %dec_label_pc_11bb, %dec_label_pc_11ad
  %9 = call i64 @deregister_tm_clones(), !insn.addr !26
  store i8 1, i8* @global_var_6080, align 1, !insn.addr !27
  ret i64 %9, !insn.addr !28

dec_label_pc_11d8:                                ; preds = %dec_label_pc_11a0
  ret i64 %1, !insn.addr !29

; uselistorder directives
  uselistorder i8 0, { 1, 0 }
  uselistorder i8* @global_var_6080, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_11e0:
  %0 = call i64 @register_tm_clones(), !insn.addr !30
  ret i64 %0, !insn.addr !30
}

define i32 @recursion_factorial(i32 %n) local_unnamed_addr {
dec_label_pc_11e9:
  %rax.0.lcssa.reg2mem = alloca i32, !insn.addr !31
  %rax.02.reg2mem = alloca i64, !insn.addr !31
  %rdi.03.reg2mem = alloca i64, !insn.addr !31
  %0 = icmp slt i32 %n, 2, !insn.addr !32
  store i32 1, i32* %rax.0.lcssa.reg2mem, !insn.addr !32
  br i1 %0, label %dec_label_pc_11fe, label %dec_label_pc_11f7.lr.ph, !insn.addr !32

dec_label_pc_11f7.lr.ph:                          ; preds = %dec_label_pc_11e9
  %1 = sext i32 %n to i64
  store i64 %1, i64* %rdi.03.reg2mem
  store i64 1, i64* %rax.02.reg2mem
  br label %dec_label_pc_11f7

dec_label_pc_11f7:                                ; preds = %dec_label_pc_11f7.lr.ph, %dec_label_pc_11f7
  %rax.02.reload = load i64, i64* %rax.02.reg2mem
  %rdi.03.reload = load i64, i64* %rdi.03.reg2mem
  %sext = mul i64 %rax.02.reload, 4294967296
  %2 = ashr exact i64 %sext, 32, !insn.addr !33
  %sext1 = mul i64 %rdi.03.reload, 4294967296
  %3 = ashr exact i64 %sext1, 32, !insn.addr !33
  %4 = mul nsw i64 %2, %3, !insn.addr !33
  %5 = and i64 %4, 4294967295, !insn.addr !33
  %6 = add nsw i64 %rdi.03.reload, 4294967295, !insn.addr !34
  %7 = and i64 %6, 4294967295, !insn.addr !34
  %8 = trunc i64 %6 to i32, !insn.addr !32
  %9 = icmp slt i32 %8, 2, !insn.addr !32
  store i64 %7, i64* %rdi.03.reg2mem, !insn.addr !32
  store i64 %5, i64* %rax.02.reg2mem, !insn.addr !32
  br i1 %9, label %dec_label_pc_11f2.dec_label_pc_11fe_crit_edge, label %dec_label_pc_11f7, !insn.addr !32

dec_label_pc_11f2.dec_label_pc_11fe_crit_edge:    ; preds = %dec_label_pc_11f7
  %phitmp = trunc i64 %4 to i32
  store i32 %phitmp, i32* %rax.0.lcssa.reg2mem
  br label %dec_label_pc_11fe

dec_label_pc_11fe:                                ; preds = %dec_label_pc_11f2.dec_label_pc_11fe_crit_edge, %dec_label_pc_11e9
  %rax.0.lcssa.reload = load i32, i32* %rax.0.lcssa.reg2mem
  ret i32 %rax.0.lcssa.reload, !insn.addr !35

; uselistorder directives
  uselistorder i64* %rdi.03.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.02.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rax.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i32 %n, { 1, 0 }
  uselistorder label %dec_label_pc_11f7, { 1, 0 }
}

define i64 @double_value(i64 %arg1) local_unnamed_addr {
dec_label_pc_11ff:
  %0 = mul i64 %arg1, 2, !insn.addr !36
  %1 = and i64 %0, 4294967294, !insn.addr !36
  ret i64 %1, !insn.addr !37
}

define i32 @triple_value(i32 %x) local_unnamed_addr {
dec_label_pc_1207:
  %0 = mul i32 %x, 3, !insn.addr !38
  ret i32 %0, !insn.addr !39
}

define i32 @op_add(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_120f:
  %0 = add i32 %b, %a, !insn.addr !40
  ret i32 %0, !insn.addr !41
}

define i32 @op_sub(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_1217:
  %0 = sub i32 %a, %b, !insn.addr !42
  ret i32 %0, !insn.addr !43
}

define i32 @op_mul(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_1220:
  %0 = mul i32 %b, %a, !insn.addr !44
  ret i32 %0, !insn.addr !45
}

define i32 @op_div(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_122a:
  %r8.0.reg2mem = alloca i32, !insn.addr !46
  %0 = icmp eq i32 %b, 0, !insn.addr !47
  store i32 0, i32* %r8.0.reg2mem, !insn.addr !48
  br i1 %0, label %dec_label_pc_123d, label %dec_label_pc_1237, !insn.addr !48

dec_label_pc_1237:                                ; preds = %dec_label_pc_122a
  %1 = zext i32 %b to i64, !insn.addr !49
  %2 = zext i32 %a to i64, !insn.addr !50
  %3 = ashr i32 %a, 31, !insn.addr !51
  %4 = zext i32 %3 to i64, !insn.addr !52
  %5 = mul i64 %4, 4294967296, !insn.addr !52
  %6 = or i64 %5, %2, !insn.addr !52
  %7 = sdiv i64 %6, %1, !insn.addr !52
  %phitmp = trunc i64 %7 to i32
  store i32 %phitmp, i32* %r8.0.reg2mem, !insn.addr !53
  br label %dec_label_pc_123d, !insn.addr !53

dec_label_pc_123d:                                ; preds = %dec_label_pc_1237, %dec_label_pc_122a
  %r8.0.reload = load i32, i32* %r8.0.reg2mem
  ret i32 %r8.0.reload, !insn.addr !54

; uselistorder directives
  uselistorder i32 %b, { 1, 0 }
}

define i32 @op_mod(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_1241:
  %rdx.0.reg2mem = alloca i32, !insn.addr !55
  %0 = icmp eq i32 %b, 0, !insn.addr !56
  store i32 0, i32* %rdx.0.reg2mem, !insn.addr !57
  br i1 %0, label %dec_label_pc_1250, label %dec_label_pc_124d, !insn.addr !57

dec_label_pc_124d:                                ; preds = %dec_label_pc_1241
  %1 = zext i32 %b to i64, !insn.addr !58
  %2 = zext i32 %a to i64, !insn.addr !59
  %3 = ashr i32 %a, 31, !insn.addr !60
  %4 = zext i32 %3 to i64, !insn.addr !61
  %5 = mul i64 %4, 4294967296, !insn.addr !61
  %6 = or i64 %5, %2, !insn.addr !61
  %7 = srem i64 %6, %1, !insn.addr !61
  %phitmp = trunc i64 %7 to i32
  store i32 %phitmp, i32* %rdx.0.reg2mem, !insn.addr !61
  br label %dec_label_pc_1250, !insn.addr !61

dec_label_pc_1250:                                ; preds = %dec_label_pc_124d, %dec_label_pc_1241
  %rdx.0.reload = load i32, i32* %rdx.0.reg2mem
  ret i32 %rdx.0.reload, !insn.addr !62

; uselistorder directives
  uselistorder i32 %b, { 1, 0 }
}

define i32 @op_and(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_1253:
  %0 = and i32 %b, %a, !insn.addr !63
  ret i32 %0, !insn.addr !64
}

define i32 @op_or(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_125c:
  %0 = or i32 %b, %a, !insn.addr !65
  ret i32 %0, !insn.addr !66
}

define i32 @op_xor(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_1265:
  %0 = xor i32 %b, %a, !insn.addr !67
  ret i32 %0, !insn.addr !68
}

define i32 @op_shl(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_126e:
  %0 = urem i32 %b, 32, !insn.addr !69
  %1 = shl i32 %a, %0
  ret i32 %1, !insn.addr !70
}

define i32 @op_shr(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_1279:
  %0 = urem i32 %b, 32, !insn.addr !71
  %1 = ashr i32 %a, %0
  ret i32 %1, !insn.addr !72
}

define i32 @state_idle(i32 %event) local_unnamed_addr {
dec_label_pc_1284:
  %0 = icmp eq i32 %event, 1, !insn.addr !73
  %1 = zext i1 %0 to i32, !insn.addr !74
  ret i32 %1, !insn.addr !74
}

define i32 @state_processing(i32 %event) local_unnamed_addr {
dec_label_pc_1290:
  %rax.0.reg2mem = alloca i32, !insn.addr !75
  %merge.reg2mem = alloca i32, !insn.addr !75
  %0 = icmp eq i32 %event, 2, !insn.addr !76
  store i32 2, i32* %rax.0.reg2mem, !insn.addr !77
  br i1 %0, label %dec_label_pc_12ab, label %dec_label_pc_129b, !insn.addr !77

dec_label_pc_129b:                                ; preds = %dec_label_pc_1290
  %1 = icmp eq i32 %event, 99, !insn.addr !78
  %2 = icmp eq i1 %1, false, !insn.addr !79
  store i32 3, i32* %merge.reg2mem, !insn.addr !79
  store i32 1, i32* %rax.0.reg2mem, !insn.addr !79
  br i1 %2, label %dec_label_pc_12ab, label %dec_label_pc_12a0, !insn.addr !79

dec_label_pc_12a0:                                ; preds = %dec_label_pc_12ab, %dec_label_pc_129b
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !80

dec_label_pc_12ab:                                ; preds = %dec_label_pc_129b, %dec_label_pc_1290
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  store i32 %rax.0.reload, i32* %merge.reg2mem
  br label %dec_label_pc_12a0

; uselistorder directives
  uselistorder i32* %merge.reg2mem, { 1, 0, 2 }
}

define i32 @state_done(i32 %event) local_unnamed_addr {
dec_label_pc_12ac:
  ret i32 2, !insn.addr !81
}

define i32 @state_error(i32 %event) local_unnamed_addr {
dec_label_pc_12b6:
  %0 = icmp eq i32 %event, 0, !insn.addr !82
  %spec.select = select i1 %0, i32 0, i32 3
  ret i32 %spec.select, !insn.addr !83
}

define i64 @sequential_ops(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_12c6:
  %0 = add i64 %arg2, %arg1, !insn.addr !84
  %1 = mul i64 %0, 2, !insn.addr !85
  %2 = sub i64 %1, %arg3, !insn.addr !86
  %3 = and i64 %2, 4294967295, !insn.addr !86
  ret i64 %3, !insn.addr !87
}

define i64 @single_if(i64 %arg1) local_unnamed_addr {
dec_label_pc_12d2:
  %0 = and i64 %arg1, 4294967295, !insn.addr !88
  %1 = trunc i64 %arg1 to i32, !insn.addr !89
  %2 = icmp slt i32 %1, 1
  %3 = mul i64 %0, 2
  %4 = and i64 %3, 4294967294
  %rax.0 = select i1 %2, i64 %0, i64 %4
  ret i64 %rax.0, !insn.addr !90

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i64 @if_else(i64 %arg1) local_unnamed_addr {
dec_label_pc_12df:
  %0 = trunc i64 %arg1 to i32, !insn.addr !91
  %1 = icmp eq i32 %0, 0, !insn.addr !91
  %2 = icmp slt i32 %0, 0, !insn.addr !91
  %3 = icmp eq i1 %2, false, !insn.addr !92
  %4 = icmp eq i1 %1, false, !insn.addr !92
  %5 = icmp eq i1 %3, %4, !insn.addr !92
  %6 = zext i1 %5 to i64, !insn.addr !92
  ret i64 %6, !insn.addr !93

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
}

define i64 @nested_if_2(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_12eb:
  %rax.0.reg2mem = alloca i64, !insn.addr !94
  %0 = trunc i64 %arg1 to i32, !insn.addr !95
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !96
  br i1 %1, label %dec_label_pc_12fe, label %dec_label_pc_12f5, !insn.addr !96

dec_label_pc_12f5:                                ; preds = %dec_label_pc_12eb
  %2 = and i64 %arg1, 4294967295, !insn.addr !97
  %3 = trunc i64 %arg2 to i32, !insn.addr !98
  %4 = icmp slt i32 %3, 1
  store i64 %2, i64* %rax.0.reg2mem, !insn.addr !99
  br i1 %4, label %dec_label_pc_12fe, label %dec_label_pc_12f9, !insn.addr !99

dec_label_pc_12f9:                                ; preds = %dec_label_pc_12f5
  %5 = add i64 %arg2, %arg1, !insn.addr !100
  %6 = and i64 %5, 4294967295, !insn.addr !100
  ret i64 %6, !insn.addr !101

dec_label_pc_12fe:                                ; preds = %dec_label_pc_12eb, %dec_label_pc_12f5
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !102

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 0, 2, 1 }
  uselistorder label %dec_label_pc_12fe, { 1, 0 }
}

define i64 @nested_if_deep(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_12ff:
  %rax.0.reg2mem = alloca i64, !insn.addr !103
  %0 = trunc i64 %arg1 to i32, !insn.addr !104
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !105
  br i1 %1, label %dec_label_pc_132f, label %dec_label_pc_1309, !insn.addr !105

dec_label_pc_1309:                                ; preds = %dec_label_pc_12ff
  %2 = trunc i64 %arg2 to i32, !insn.addr !106
  %3 = icmp slt i32 %2, 1
  store i64 1, i64* %rax.0.reg2mem, !insn.addr !107
  br i1 %3, label %dec_label_pc_132f, label %dec_label_pc_1312, !insn.addr !107

dec_label_pc_1312:                                ; preds = %dec_label_pc_1309
  %4 = trunc i64 %arg3 to i32, !insn.addr !108
  %5 = icmp slt i32 %4, 1
  store i64 2, i64* %rax.0.reg2mem, !insn.addr !109
  br i1 %5, label %dec_label_pc_132f, label %dec_label_pc_131b, !insn.addr !109

dec_label_pc_131b:                                ; preds = %dec_label_pc_1312
  %6 = trunc i64 %arg4 to i32, !insn.addr !110
  %7 = icmp slt i32 %6, 1
  store i64 3, i64* %rax.0.reg2mem, !insn.addr !111
  br i1 %7, label %dec_label_pc_132f, label %dec_label_pc_1324, !insn.addr !111

dec_label_pc_1324:                                ; preds = %dec_label_pc_131b
  %8 = trunc i64 %arg5 to i32, !insn.addr !112
  %9 = icmp eq i32 %8, 0, !insn.addr !112
  %10 = icmp slt i32 %8, 0, !insn.addr !112
  %11 = icmp eq i1 %10, false, !insn.addr !113
  %12 = icmp eq i1 %9, false, !insn.addr !113
  %13 = icmp eq i1 %11, %12, !insn.addr !113
  %14 = select i1 %13, i64 5, i64 4, !insn.addr !114
  store i64 %14, i64* %rax.0.reg2mem, !insn.addr !114
  br label %dec_label_pc_132f, !insn.addr !114

dec_label_pc_132f:                                ; preds = %dec_label_pc_1324, %dec_label_pc_131b, %dec_label_pc_1312, %dec_label_pc_1309, %dec_label_pc_12ff
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !115

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
}

define i64 @if_elseif_chain(i64 %arg1) local_unnamed_addr {
dec_label_pc_1330:
  %rax.0.reg2mem = alloca i64, !insn.addr !116
  %0 = trunc i64 %arg1 to i32, !insn.addr !117
  store i64 10, i64* %rax.0.reg2mem
  switch i32 %0, label %dec_label_pc_1347 [
    i32 0, label %dec_label_pc_1357
    i32 1, label %dec_label_pc_1357.fold.split
  ]

dec_label_pc_1347:                                ; preds = %dec_label_pc_1330
  %1 = icmp eq i32 %0, 2, !insn.addr !118
  %2 = icmp eq i1 %1, false, !insn.addr !119
  %3 = select i1 %2, i64 4294967295, i64 30, !insn.addr !119
  store i64 %3, i64* %rax.0.reg2mem, !insn.addr !119
  br label %dec_label_pc_1357, !insn.addr !119

dec_label_pc_1357.fold.split:                     ; preds = %dec_label_pc_1330
  store i64 20, i64* %rax.0.reg2mem
  br label %dec_label_pc_1357

dec_label_pc_1357:                                ; preds = %dec_label_pc_1330, %dec_label_pc_1357.fold.split, %dec_label_pc_1347
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !120

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder label %dec_label_pc_1357, { 1, 2, 0 }
}

define i64 @if_elseif_long(i64 %arg1) local_unnamed_addr {
dec_label_pc_1358:
  %rax.0.reg2mem = alloca i64, !insn.addr !121
  %0 = trunc i64 %arg1 to i32, !insn.addr !122
  %1 = icmp ult i32 %0, 5
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !123
  br i1 %1, label %dec_label_pc_1364, label %dec_label_pc_1369, !insn.addr !123

dec_label_pc_1364:                                ; preds = %dec_label_pc_1358
  %2 = mul i64 %arg1, 4294967296, !insn.addr !124
  %sext = add i64 %2, 4294967296
  %3 = udiv i64 %sext, 4294967296
  %4 = mul nuw nsw i64 %3, 100, !insn.addr !125
  %5 = and i64 %4, 4294967292, !insn.addr !125
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !125
  br label %dec_label_pc_1369, !insn.addr !125

dec_label_pc_1369:                                ; preds = %dec_label_pc_1358, %dec_label_pc_1364
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !126

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1369, { 1, 0 }
}

define i64 @switch_small(i64 %arg1) local_unnamed_addr {
dec_label_pc_136a:
  %rax.0.reg2mem = alloca i64, !insn.addr !127
  %0 = trunc i64 %arg1 to i32, !insn.addr !128
  %1 = icmp ult i32 %0, 4
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !129
  br i1 %1, label %dec_label_pc_1376, label %dec_label_pc_1383, !insn.addr !129

dec_label_pc_1376:                                ; preds = %dec_label_pc_136a
  %2 = and i64 %arg1, 4294967295, !insn.addr !130
  %3 = add i64 %2, ptrtoint (i8** @global_var_362c to i64), !insn.addr !131
  %4 = inttoptr i64 %3 to i8*, !insn.addr !131
  %5 = load i8, i8* %4, align 1, !insn.addr !131
  %6 = sext i8 %5 to i64, !insn.addr !131
  store i64 %6, i64* %rax.0.reg2mem, !insn.addr !131
  br label %dec_label_pc_1383, !insn.addr !131

dec_label_pc_1383:                                ; preds = %dec_label_pc_136a, %dec_label_pc_1376
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !132

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1383, { 1, 0 }
}

define i64 @switch_large(i64 %arg1) local_unnamed_addr {
dec_label_pc_1384:
  %0 = trunc i64 %arg1 to i32, !insn.addr !133
  %1 = icmp ult i32 %0, 10
  %2 = mul i64 %arg1, 10
  %3 = and i64 %2, 4294967294
  %rax.0 = select i1 %1, i64 %3, i64 4294967295
  ret i64 %rax.0, !insn.addr !134
}

define i64 @switch_default(i64 %arg1) local_unnamed_addr {
dec_label_pc_1394:
  %0 = trunc i64 %arg1 to i32
  %1 = add i32 %0, -1, !insn.addr !135
  %2 = icmp ult i32 %1, 3
  %3 = mul i64 %arg1, 100
  %4 = and i64 %3, 4294967292
  %rax.0 = select i1 %2, i64 %4, i64 0
  ret i64 %rax.0, !insn.addr !136
}

define i64 @switch_fallthrough(i64 %arg1) local_unnamed_addr {
dec_label_pc_13a6:
  %storemerge.reg2mem = alloca i64, !insn.addr !137
  %storemerge1.reg2mem = alloca i64, !insn.addr !137
  %0 = trunc i64 %arg1 to i32, !insn.addr !138
  store i64 0, i64* %storemerge1.reg2mem
  store i64 0, i64* %storemerge.reg2mem
  switch i32 %0, label %dec_label_pc_13b9 [
    i32 2, label %dec_label_pc_13c6
    i32 3, label %dec_label_pc_13c6.fold.split
    i32 1, label %dec_label_pc_13cd
  ]

dec_label_pc_13b9:                                ; preds = %dec_label_pc_13a6
  ret i64 4294967295, !insn.addr !139

dec_label_pc_13c6.fold.split:                     ; preds = %dec_label_pc_13a6
  store i64 12, i64* %storemerge1.reg2mem
  br label %dec_label_pc_13c6

dec_label_pc_13c6:                                ; preds = %dec_label_pc_13a6, %dec_label_pc_13c6.fold.split
  %storemerge1.reload = load i64, i64* %storemerge1.reg2mem
  %1 = mul i64 %arg1, 2, !insn.addr !140
  %2 = add i64 %storemerge1.reload, %1, !insn.addr !140
  %3 = and i64 %2, 4294967294, !insn.addr !140
  store i64 %3, i64* %storemerge.reg2mem, !insn.addr !141
  br label %dec_label_pc_13cd, !insn.addr !141

dec_label_pc_13cd:                                ; preds = %dec_label_pc_13a6, %dec_label_pc_13c6
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %4 = add i64 %storemerge.reload, %arg1, !insn.addr !142
  %5 = and i64 %4, 4294967295, !insn.addr !142
  ret i64 %5, !insn.addr !143

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 1, 0, 2 }
  uselistorder label %dec_label_pc_13cd, { 1, 0 }
  uselistorder label %dec_label_pc_13c6, { 1, 0 }
}

define i32 @loop_for_fixed(i32 %n) local_unnamed_addr {
dec_label_pc_13d0:
  %r8.0.lcssa.reg2mem = alloca i32, !insn.addr !144
  %rax.01.reg2mem = alloca i64, !insn.addr !144
  %r8.02.reg2mem = alloca i64, !insn.addr !144
  %0 = sext i32 %n to i64
  %1 = icmp sgt i32 %n, 0, !insn.addr !145
  store i64 0, i64* %r8.02.reg2mem, !insn.addr !145
  store i64 0, i64* %rax.01.reg2mem, !insn.addr !145
  store i32 0, i32* %r8.0.lcssa.reg2mem, !insn.addr !145
  br i1 %1, label %dec_label_pc_13dd, label %dec_label_pc_13e4, !insn.addr !145

dec_label_pc_13dd:                                ; preds = %dec_label_pc_13d0, %dec_label_pc_13dd
  %rax.01.reload = load i64, i64* %rax.01.reg2mem
  %r8.02.reload = load i64, i64* %r8.02.reg2mem
  %2 = add nuw nsw i64 %rax.01.reload, %r8.02.reload, !insn.addr !146
  %3 = and i64 %2, 4294967295, !insn.addr !146
  %4 = add nuw nsw i64 %rax.01.reload, 1, !insn.addr !147
  %5 = and i64 %4, 4294967295, !insn.addr !147
  %6 = icmp slt i64 %5, %0, !insn.addr !145
  store i64 %3, i64* %r8.02.reg2mem, !insn.addr !145
  store i64 %5, i64* %rax.01.reg2mem, !insn.addr !145
  br i1 %6, label %dec_label_pc_13dd, label %dec_label_pc_13d9.dec_label_pc_13e4_crit_edge, !insn.addr !145

dec_label_pc_13d9.dec_label_pc_13e4_crit_edge:    ; preds = %dec_label_pc_13dd
  %phitmp = trunc i64 %2 to i32
  store i32 %phitmp, i32* %r8.0.lcssa.reg2mem
  br label %dec_label_pc_13e4

dec_label_pc_13e4:                                ; preds = %dec_label_pc_13d9.dec_label_pc_13e4_crit_edge, %dec_label_pc_13d0
  %r8.0.lcssa.reload = load i32, i32* %r8.0.lcssa.reg2mem
  ret i32 %r8.0.lcssa.reload, !insn.addr !148

; uselistorder directives
  uselistorder i64* %r8.02.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.01.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r8.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_13dd, { 1, 0 }
}

define i32 @loop_while(i32 %x) local_unnamed_addr {
dec_label_pc_13e8:
  %rcx.0.lcssa.reg2mem = alloca i32, !insn.addr !149
  %rax.01.reg2mem = alloca i64, !insn.addr !149
  %rcx.02.reg2mem = alloca i64, !insn.addr !149
  %.reg2mem = alloca i32, !insn.addr !149
  %0 = icmp eq i32 %x, 0, !insn.addr !150
  store i32 0, i32* %rcx.0.lcssa.reg2mem, !insn.addr !151
  br i1 %0, label %dec_label_pc_1400, label %dec_label_pc_13f9.lr.ph, !insn.addr !151

dec_label_pc_13f9.lr.ph:                          ; preds = %dec_label_pc_13e8
  %1 = zext i32 %x to i64, !insn.addr !152
  store i32 %x, i32* %.reg2mem
  store i64 0, i64* %rcx.02.reg2mem
  store i64 %1, i64* %rax.01.reg2mem
  br label %dec_label_pc_13f9

dec_label_pc_13f9:                                ; preds = %dec_label_pc_13f9.lr.ph, %dec_label_pc_13f9
  %rax.01.reload = load i64, i64* %rax.01.reg2mem
  %rcx.02.reload = load i64, i64* %rcx.02.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %2 = ashr i32 %.reload, 31, !insn.addr !153
  %3 = add nuw nsw i64 %rcx.02.reload, 1, !insn.addr !154
  %4 = and i64 %3, 4294967295, !insn.addr !154
  %5 = zext i32 %2 to i64, !insn.addr !155
  %6 = mul i64 %5, 4294967296, !insn.addr !155
  %7 = or i64 %6, %rax.01.reload, !insn.addr !155
  %8 = sdiv i64 %7, 10, !insn.addr !155
  %9 = and i64 %8, 4294967295, !insn.addr !155
  %10 = trunc i64 %8 to i32, !insn.addr !150
  %11 = icmp eq i32 %10, 0, !insn.addr !150
  store i32 %10, i32* %.reg2mem, !insn.addr !151
  store i64 %4, i64* %rcx.02.reg2mem, !insn.addr !151
  store i64 %9, i64* %rax.01.reg2mem, !insn.addr !151
  br i1 %11, label %dec_label_pc_13f5.dec_label_pc_1400_crit_edge, label %dec_label_pc_13f9, !insn.addr !151

dec_label_pc_13f5.dec_label_pc_1400_crit_edge:    ; preds = %dec_label_pc_13f9
  %phitmp = trunc i64 %3 to i32
  store i32 %phitmp, i32* %rcx.0.lcssa.reg2mem
  br label %dec_label_pc_1400

dec_label_pc_1400:                                ; preds = %dec_label_pc_13f5.dec_label_pc_1400_crit_edge, %dec_label_pc_13e8
  %rcx.0.lcssa.reload = load i32, i32* %rcx.0.lcssa.reg2mem
  %12 = icmp eq i32 %rcx.0.lcssa.reload, 0, !insn.addr !156
  %13 = icmp slt i32 %rcx.0.lcssa.reload, 0, !insn.addr !156
  %14 = icmp eq i1 %13, false, !insn.addr !157
  %15 = icmp eq i1 %12, false, !insn.addr !157
  %16 = icmp eq i1 %14, %15, !insn.addr !157
  %17 = select i1 %16, i32 %rcx.0.lcssa.reload, i32 1, !insn.addr !157
  ret i32 %17, !insn.addr !158

; uselistorder directives
  uselistorder i32 %rcx.0.lcssa.reload, { 0, 2, 1 }
  uselistorder i32* %.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.02.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.01.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rcx.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i32 %x, { 0, 2, 1 }
  uselistorder label %dec_label_pc_13f9, { 1, 0 }
}

define i32 @loop_dowhile(i32 %x) local_unnamed_addr {
dec_label_pc_140b:
  %r8.0.reg2mem = alloca i64, !insn.addr !159
  %rax.0.reg2mem = alloca i64, !insn.addr !159
  %0 = zext i32 %x to i64, !insn.addr !160
  store i64 %0, i64* %rax.0.reg2mem, !insn.addr !161
  store i64 0, i64* %r8.0.reg2mem, !insn.addr !161
  br label %dec_label_pc_1419, !insn.addr !161

dec_label_pc_1419:                                ; preds = %dec_label_pc_1419, %dec_label_pc_140b
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %1 = trunc i64 %rax.0.reload to i32, !insn.addr !162
  %2 = ashr i32 %1, 31, !insn.addr !162
  %3 = add nuw nsw i64 %r8.0.reload, 1, !insn.addr !163
  %4 = and i64 %3, 4294967295, !insn.addr !163
  %5 = zext i32 %2 to i64, !insn.addr !164
  %6 = mul i64 %5, 4294967296, !insn.addr !164
  %7 = or i64 %6, %rax.0.reload, !insn.addr !164
  %8 = sdiv i64 %7, 10, !insn.addr !164
  %9 = and i64 %8, 4294967295, !insn.addr !164
  %10 = trunc i64 %8 to i32, !insn.addr !165
  %11 = icmp eq i32 %10, 0, !insn.addr !165
  %12 = icmp eq i1 %11, false, !insn.addr !166
  store i64 %9, i64* %rax.0.reg2mem, !insn.addr !166
  store i64 %4, i64* %r8.0.reg2mem, !insn.addr !166
  br i1 %12, label %dec_label_pc_1419, label %dec_label_pc_1423, !insn.addr !166

dec_label_pc_1423:                                ; preds = %dec_label_pc_1419
  %13 = trunc i64 %3 to i32, !insn.addr !167
  ret i32 %13, !insn.addr !168

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r8.0.reg2mem, { 1, 0, 2 }
}

define i32 @loop_nested(i32 %m, i32 %n) local_unnamed_addr {
dec_label_pc_1427:
  %rax.0.lcssa.reg2mem = alloca i32, !insn.addr !169
  %rax.01.reg2mem = alloca i64, !insn.addr !169
  %rdx.02.reg2mem = alloca i64, !insn.addr !169
  %0 = sext i32 %m to i64
  %1 = icmp sgt i32 %n, 0
  %2 = select i1 %1, i32 %n, i32 0, !insn.addr !170
  %3 = zext i32 %2 to i64, !insn.addr !170
  %4 = icmp sgt i32 %m, 0, !insn.addr !171
  store i64 0, i64* %rdx.02.reg2mem, !insn.addr !171
  store i64 0, i64* %rax.01.reg2mem, !insn.addr !171
  store i32 0, i32* %rax.0.lcssa.reg2mem, !insn.addr !171
  br i1 %4, label %dec_label_pc_143a, label %dec_label_pc_1440, !insn.addr !171

dec_label_pc_143a:                                ; preds = %dec_label_pc_1427, %dec_label_pc_143a
  %rax.01.reload = load i64, i64* %rax.01.reg2mem
  %rdx.02.reload = load i64, i64* %rdx.02.reg2mem
  %5 = add nuw nsw i64 %rax.01.reload, %3, !insn.addr !172
  %6 = and i64 %5, 4294967295, !insn.addr !172
  %7 = add nuw nsw i64 %rdx.02.reload, 1, !insn.addr !173
  %8 = and i64 %7, 4294967295, !insn.addr !173
  %9 = icmp slt i64 %8, %0, !insn.addr !171
  store i64 %8, i64* %rdx.02.reg2mem, !insn.addr !171
  store i64 %6, i64* %rax.01.reg2mem, !insn.addr !171
  br i1 %9, label %dec_label_pc_143a, label %dec_label_pc_1436.dec_label_pc_1440_crit_edge, !insn.addr !171

dec_label_pc_1436.dec_label_pc_1440_crit_edge:    ; preds = %dec_label_pc_143a
  %phitmp = trunc i64 %5 to i32
  store i32 %phitmp, i32* %rax.0.lcssa.reg2mem
  br label %dec_label_pc_1440

dec_label_pc_1440:                                ; preds = %dec_label_pc_1436.dec_label_pc_1440_crit_edge, %dec_label_pc_1427
  %rax.0.lcssa.reload = load i32, i32* %rax.0.lcssa.reg2mem
  ret i32 %rax.0.lcssa.reload, !insn.addr !174

; uselistorder directives
  uselistorder i64* %rdx.02.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.01.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rax.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_143a, { 1, 0 }
}

define i32 @loop_break(i32 %target) local_unnamed_addr {
dec_label_pc_1441:
  %r8.0.reg2mem = alloca i32, !insn.addr !175
  %rax.0.reg2mem = alloca i64, !insn.addr !175
  %stack_var_-36 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !176
  %1 = ptrtoint i64* %stack_var_-36 to i64, !insn.addr !177
  store i64 85899345930, i64* %stack_var_-36, align 8, !insn.addr !178
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !179
  br label %dec_label_pc_1484, !insn.addr !179

dec_label_pc_1484:                                ; preds = %dec_label_pc_148c, %dec_label_pc_1441
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %2 = mul i64 %rax.0.reload, 4, !insn.addr !180
  %3 = add i64 %2, %1, !insn.addr !180
  %4 = inttoptr i64 %3 to i32*, !insn.addr !180
  %5 = load i32, i32* %4, align 4, !insn.addr !180
  %6 = icmp eq i32 %5, %target, !insn.addr !180
  br i1 %6, label %dec_label_pc_1499.split.loop.exit1, label %dec_label_pc_148c, !insn.addr !181

dec_label_pc_148c:                                ; preds = %dec_label_pc_1484
  %7 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !182
  %8 = icmp eq i64 %rax.0.reload, 4, !insn.addr !183
  %9 = icmp eq i1 %8, false, !insn.addr !184
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !184
  store i32 -1, i32* %r8.0.reg2mem, !insn.addr !184
  br i1 %9, label %dec_label_pc_1484, label %dec_label_pc_1499, !insn.addr !184

dec_label_pc_1499.split.loop.exit1:               ; preds = %dec_label_pc_1484
  %phitmp = trunc i64 %rax.0.reload to i32
  store i32 %phitmp, i32* %r8.0.reg2mem
  br label %dec_label_pc_1499

dec_label_pc_1499:                                ; preds = %dec_label_pc_148c, %dec_label_pc_1499.split.loop.exit1
  %r8.0.reload = load i32, i32* %r8.0.reg2mem
  %10 = call i64 @__readfsqword(i64 40), !insn.addr !185
  %11 = icmp eq i64 %0, %10, !insn.addr !185
  br i1 %11, label %dec_label_pc_14ae, label %dec_label_pc_14a9, !insn.addr !186

dec_label_pc_14a9:                                ; preds = %dec_label_pc_1499
  call void @__stack_chk_fail(), !insn.addr !187
  br label %dec_label_pc_14ae, !insn.addr !187

dec_label_pc_14ae:                                ; preds = %dec_label_pc_14a9, %dec_label_pc_1499
  ret i32 %r8.0.reload, !insn.addr !188

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 2, 0, 1, 3 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r8.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1499, { 1, 0 }
}

define i32 @loop_continue(i32 %n) local_unnamed_addr {
dec_label_pc_14b6:
  %r8.0.lcssa.reg2mem = alloca i32, !insn.addr !189
  %rax.01.reg2mem = alloca i64, !insn.addr !189
  %r8.02.reg2mem = alloca i64, !insn.addr !189
  %0 = sext i32 %n to i64
  %1 = icmp slt i32 %n, 1, !insn.addr !190
  store i64 0, i64* %r8.02.reg2mem, !insn.addr !190
  store i64 1, i64* %rax.01.reg2mem, !insn.addr !190
  store i32 0, i32* %r8.0.lcssa.reg2mem, !insn.addr !190
  br i1 %1, label %dec_label_pc_14d1, label %dec_label_pc_14c6, !insn.addr !190

dec_label_pc_14c6:                                ; preds = %dec_label_pc_14b6, %dec_label_pc_14c6
  %rax.01.reload = load i64, i64* %rax.01.reg2mem
  %r8.02.reload = load i64, i64* %r8.02.reg2mem
  %2 = urem i64 %rax.01.reload, 2
  %3 = icmp eq i64 %2, 0, !insn.addr !191
  %4 = add i64 %rax.01.reload, %r8.02.reload
  %5 = and i64 %4, 4294967295
  %r8.1 = select i1 %3, i64 %r8.02.reload, i64 %5
  %6 = add nuw nsw i64 %rax.01.reload, 1, !insn.addr !192
  %7 = and i64 %6, 4294967295, !insn.addr !192
  %8 = icmp sgt i64 %7, %0, !insn.addr !190
  store i64 %r8.1, i64* %r8.02.reg2mem, !insn.addr !190
  store i64 %7, i64* %rax.01.reg2mem, !insn.addr !190
  br i1 %8, label %dec_label_pc_14c2.dec_label_pc_14d1_crit_edge, label %dec_label_pc_14c6, !insn.addr !190

dec_label_pc_14c2.dec_label_pc_14d1_crit_edge:    ; preds = %dec_label_pc_14c6
  %phitmp = trunc i64 %r8.1 to i32
  store i32 %phitmp, i32* %r8.0.lcssa.reg2mem
  br label %dec_label_pc_14d1

dec_label_pc_14d1:                                ; preds = %dec_label_pc_14c2.dec_label_pc_14d1_crit_edge, %dec_label_pc_14b6
  %r8.0.lcssa.reload = load i32, i32* %r8.0.lcssa.reg2mem
  ret i32 %r8.0.lcssa.reload, !insn.addr !193

; uselistorder directives
  uselistorder i64 %r8.1, { 1, 0 }
  uselistorder i64* %r8.02.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.01.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r8.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_14c6, { 1, 0 }
}

define i64 @goto_forward(i64 %arg1) local_unnamed_addr {
dec_label_pc_14d5:
  %rdi.0.reg2mem = alloca i64, !insn.addr !194
  %0 = trunc i64 %arg1 to i32, !insn.addr !195
  %1 = icmp slt i32 %0, 1
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !196
  br i1 %1, label %dec_label_pc_14e0, label %dec_label_pc_14dd, !insn.addr !196

dec_label_pc_14dd:                                ; preds = %dec_label_pc_14d5
  %sext = mul i64 %arg1, 4294967296
  %2 = ashr exact i64 %sext, 32, !insn.addr !197
  %3 = mul nsw i64 %2, %2, !insn.addr !197
  %4 = and i64 %3, 4294967295, !insn.addr !197
  store i64 %4, i64* %rdi.0.reg2mem, !insn.addr !197
  br label %dec_label_pc_14e0, !insn.addr !197

dec_label_pc_14e0:                                ; preds = %dec_label_pc_14dd, %dec_label_pc_14d5
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %5 = mul i64 %rdi.0.reload, 2, !insn.addr !198
  %6 = and i64 %5, 4294967294, !insn.addr !198
  ret i64 %6, !insn.addr !199

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @goto_backward(i64 %arg1) local_unnamed_addr {
dec_label_pc_14e4:
  %r8.1.reg2mem = alloca i64, !insn.addr !200
  %r8.0.reg2mem = alloca i64, !insn.addr !200
  %rax.0.reg2mem = alloca i64, !insn.addr !200
  %0 = trunc i64 %arg1 to i32, !insn.addr !201
  %1 = icmp slt i32 %0, 1
  store i64 1, i64* %rax.0.reg2mem, !insn.addr !202
  store i64 1, i64* %r8.0.reg2mem, !insn.addr !202
  store i64 1, i64* %r8.1.reg2mem, !insn.addr !202
  br i1 %1, label %dec_label_pc_1501, label %dec_label_pc_14f7, !insn.addr !202

dec_label_pc_14f7:                                ; preds = %dec_label_pc_14e4, %dec_label_pc_14f7
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %sext = mul i64 %r8.0.reload, 4294967296
  %2 = ashr exact i64 %sext, 32, !insn.addr !203
  %sext1 = mul i64 %rax.0.reload, 4294967296
  %3 = ashr exact i64 %sext1, 32, !insn.addr !203
  %4 = mul nsw i64 %2, %3, !insn.addr !203
  %5 = and i64 %4, 4294967295, !insn.addr !203
  %6 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !204
  %7 = and i64 %6, 4294967295, !insn.addr !204
  %8 = icmp sgt i64 %7, %arg1, !insn.addr !205
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !205
  store i64 %5, i64* %r8.0.reg2mem, !insn.addr !205
  store i64 %5, i64* %r8.1.reg2mem, !insn.addr !205
  br i1 %8, label %dec_label_pc_1501, label %dec_label_pc_14f7, !insn.addr !205

dec_label_pc_1501:                                ; preds = %dec_label_pc_14f7, %dec_label_pc_14e4
  %r8.1.reload = load i64, i64* %r8.1.reg2mem
  ret i64 %r8.1.reload, !insn.addr !206

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r8.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_14f7, { 1, 0 }
}

define i64 @ternary_op(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1505:
  %0 = trunc i64 %arg2 to i32, !insn.addr !207
  %1 = trunc i64 %arg1 to i32, !insn.addr !207
  %2 = sub i32 %0, %1, !insn.addr !207
  %3 = xor i64 %arg2, %arg1
  %4 = trunc i64 %3 to i32, !insn.addr !207
  %5 = xor i32 %2, %0, !insn.addr !207
  %6 = and i32 %5, %4, !insn.addr !207
  %7 = icmp slt i32 %6, 0, !insn.addr !207
  %8 = icmp slt i32 %2, 0, !insn.addr !207
  %9 = icmp eq i1 %8, %7, !insn.addr !208
  %.v = select i1 %9, i64 %arg2, i64 %arg1
  %10 = and i64 %.v, 4294967295, !insn.addr !208
  ret i64 %10, !insn.addr !209

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i64 %arg2, { 1, 0, 2 }
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define void @test_control_flow_l1() local_unnamed_addr {
dec_label_pc_1511:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3004 to i8*)), !insn.addr !210
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3028, i64 0, i64 0), i64 21), !insn.addr !211
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_3047, i64 0, i64 0), i64 20), !insn.addr !212
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_3047, i64 0, i64 0), i64 4294967291), !insn.addr !213
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_3061, i64 0, i64 0), i64 1), !insn.addr !214
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_3061, i64 0, i64 0), i64 0), !insn.addr !215
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_3079, i64 0, i64 0), i64 15), !insn.addr !216
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_3079, i64 0, i64 0), i64 10), !insn.addr !217
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_3079, i64 0, i64 0), i64 0), !insn.addr !218
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3095, i64 0, i64 0), i64 5), !insn.addr !219
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_30b4, i64 0, i64 0), i64 20), !insn.addr !220
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_30d4, i64 0, i64 0), i64 400), !insn.addr !221
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_30f3, i64 0, i64 0), i64 50), !insn.addr !222
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3110, i64 0, i64 0), i64 70), !insn.addr !223
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_312d, i64 0, i64 0), i64 0), !insn.addr !224
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_314c, i64 0, i64 0), i64 21), !insn.addr !225
  %16 = call i32 @loop_for_fixed(i32 10), !insn.addr !226
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_316f, i64 0, i64 0)), !insn.addr !227
  %18 = call i32 @loop_while(i32 ptrtoint (i32* @global_var_3039 to i32)), !insn.addr !228
  %19 = zext i32 %18 to i64, !insn.addr !229
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_318e, i64 0, i64 0), i64 %19), !insn.addr !230
  %21 = call i32 @loop_dowhile(i32 9876), !insn.addr !231
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_31a9, i64 0, i64 0)), !insn.addr !232
  %23 = call i32 @loop_nested(i32 3, i32 4), !insn.addr !233
  %24 = zext i32 %23 to i64, !insn.addr !234
  %25 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_31c6, i64 0, i64 0), i64 %24), !insn.addr !235
  %26 = call i32 @loop_break(i32 30), !insn.addr !236
  %27 = zext i32 %26 to i64, !insn.addr !237
  %28 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_31e2, i64 0, i64 0), i64 %27), !insn.addr !238
  %29 = call i32 @loop_break(i32 99), !insn.addr !239
  %30 = zext i32 %29 to i64, !insn.addr !240
  %31 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_31e2, i64 0, i64 0), i64 %30), !insn.addr !241
  %32 = call i32 @loop_continue(i32 10), !insn.addr !242
  %33 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_31fd, i64 0, i64 0)), !insn.addr !243
  %34 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_321b, i64 0, i64 0), i64 50), !insn.addr !244
  %35 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_321b, i64 0, i64 0), i64 4294967290), !insn.addr !245
  %36 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3238, i64 0, i64 0), i64 120), !insn.addr !246
  %37 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3256, i64 0, i64 0), i64 10), !insn.addr !247
  %38 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3256, i64 0, i64 0), i64 8), !insn.addr !248
  ret void, !insn.addr !248

; uselistorder directives
  uselistorder i32 (i32)* @loop_break, { 1, 0 }
}

define i32 @loop_multi_exit(i32 %target) local_unnamed_addr {
dec_label_pc_17ce:
  %rax.1.reg2mem = alloca i64, !insn.addr !249
  %storemerge.reg2mem = alloca i64, !insn.addr !249
  %rdx.0.reg2mem = alloca i64, !insn.addr !249
  %rcx.0.reg2mem = alloca i64, !insn.addr !249
  %rax.0.reg2mem = alloca i64, !insn.addr !249
  %stack_var_-72 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !250
  %1 = bitcast i64* %stack_var_-72 to i8*, !insn.addr !251
  call void @__asm_rep_movsd_memcpy(i8* nonnull %1, i8* bitcast (i8** @global_var_35e0 to i8*), i64 12), !insn.addr !251
  %2 = ptrtoint i64* %stack_var_-72 to i64, !insn.addr !252
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !252
  store i64 %2, i64* %rcx.0.reg2mem, !insn.addr !252
  br label %dec_label_pc_17fd, !insn.addr !252

dec_label_pc_17fd:                                ; preds = %dec_label_pc_1815, %dec_label_pc_17ce
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !253
  br label %dec_label_pc_17ff, !insn.addr !253

dec_label_pc_17ff:                                ; preds = %dec_label_pc_180c, %dec_label_pc_17fd
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %3 = mul i64 %rdx.0.reload, 4, !insn.addr !254
  %4 = add i64 %3, %rcx.0.reload, !insn.addr !254
  %5 = inttoptr i64 %4 to i32*, !insn.addr !254
  %6 = load i32, i32* %5, align 4, !insn.addr !254
  %7 = icmp eq i32 %6, %target, !insn.addr !254
  %8 = icmp eq i1 %7, false, !insn.addr !255
  br i1 %8, label %dec_label_pc_180c, label %dec_label_pc_1805, !insn.addr !255

dec_label_pc_1805:                                ; preds = %dec_label_pc_17ff
  %9 = mul nuw nsw i64 %rax.0.reload, 10, !insn.addr !256
  %10 = add nuw i64 %rdx.0.reload, %9, !insn.addr !257
  %11 = and i64 %10, 4294967295, !insn.addr !257
  store i64 %11, i64* %storemerge.reg2mem, !insn.addr !258
  br label %dec_label_pc_1823, !insn.addr !258

dec_label_pc_180c:                                ; preds = %dec_label_pc_17ff
  %12 = add nuw nsw i64 %rdx.0.reload, 1, !insn.addr !259
  %13 = icmp eq i64 %rdx.0.reload, 3, !insn.addr !260
  %14 = icmp eq i1 %13, false, !insn.addr !261
  store i64 %12, i64* %rdx.0.reg2mem, !insn.addr !261
  br i1 %14, label %dec_label_pc_17ff, label %dec_label_pc_1815, !insn.addr !261

dec_label_pc_1815:                                ; preds = %dec_label_pc_180c
  %15 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !262
  %16 = and i64 %15, 4294967295, !insn.addr !262
  %17 = add i64 %rcx.0.reload, 16, !insn.addr !263
  %18 = trunc i64 %15 to i32, !insn.addr !264
  %19 = icmp eq i32 %18, 3, !insn.addr !264
  %20 = icmp eq i1 %19, false, !insn.addr !265
  store i64 %16, i64* %rax.0.reg2mem, !insn.addr !265
  store i64 %17, i64* %rcx.0.reg2mem, !insn.addr !265
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !265
  br i1 %20, label %dec_label_pc_17fd, label %dec_label_pc_1823, !insn.addr !265

dec_label_pc_1823:                                ; preds = %dec_label_pc_1815, %dec_label_pc_1805
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %21 = call i64 @__readfsqword(i64 40), !insn.addr !266
  %22 = icmp eq i64 %0, %21, !insn.addr !266
  store i64 %storemerge.reload, i64* %rax.1.reg2mem, !insn.addr !267
  br i1 %22, label %dec_label_pc_1838, label %dec_label_pc_1833, !insn.addr !267

dec_label_pc_1833:                                ; preds = %dec_label_pc_1823
  call void @__stack_chk_fail(), !insn.addr !268
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.1.reg2mem, !insn.addr !268
  br label %dec_label_pc_1838, !insn.addr !268

dec_label_pc_1838:                                ; preds = %dec_label_pc_1833, %dec_label_pc_1823
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %23 = trunc i64 %rax.1.reload to i32, !insn.addr !269
  ret i32 %23, !insn.addr !269

; uselistorder directives
  uselistorder i64 %rdx.0.reload, { 1, 0, 2, 3 }
  uselistorder i64* %stack_var_-72, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
}

define i32 @infinite_loop(i32* %flag) local_unnamed_addr {
dec_label_pc_183d:
  %rax.1.reg2mem = alloca i32, !insn.addr !270
  %rax.0.reg2mem = alloca i64, !insn.addr !270
  %0 = ptrtoint i32* %flag to i64
  %1 = trunc i64 %0 to i32
  %2 = icmp eq i32 %1, 1, !insn.addr !271
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !272
  br label %dec_label_pc_1843, !insn.addr !272

dec_label_pc_1843:                                ; preds = %dec_label_pc_1849, %dec_label_pc_183d
  store i32 0, i32* %rax.1.reg2mem, !insn.addr !273
  br i1 %2, label %dec_label_pc_1858, label %dec_label_pc_1849, !insn.addr !273

dec_label_pc_1849:                                ; preds = %dec_label_pc_1843
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %3 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !274
  %4 = and i64 %3, 4294967295, !insn.addr !274
  %5 = trunc i64 %3 to i32
  %6 = icmp eq i32 %5, ptrtoint (i32* @global_var_3e9 to i32), !insn.addr !275
  %7 = icmp eq i1 %6, false, !insn.addr !276
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !276
  br i1 %7, label %dec_label_pc_1843, label %dec_label_pc_1852, !insn.addr !276

dec_label_pc_1852:                                ; preds = %dec_label_pc_1849
  store i32 1, i32* %flag, align 4, !insn.addr !277
  store i32 %5, i32* %rax.1.reg2mem, !insn.addr !277
  br label %dec_label_pc_1858, !insn.addr !277

dec_label_pc_1858:                                ; preds = %dec_label_pc_1843, %dec_label_pc_1852
  %rax.1.reload = load i32, i32* %rax.1.reg2mem
  ret i32 %rax.1.reload, !insn.addr !278

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rax.1.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1858, { 1, 0 }
}

define i64 @multi_return(i64 %arg1) local_unnamed_addr {
dec_label_pc_1859:
  %rax.0.reg2mem = alloca i64, !insn.addr !279
  %0 = trunc i64 %arg1 to i32, !insn.addr !280
  %1 = icmp slt i32 %0, 0, !insn.addr !280
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !281
  br i1 %1, label %dec_label_pc_187b, label %dec_label_pc_1864, !insn.addr !281

dec_label_pc_1864:                                ; preds = %dec_label_pc_1859
  %2 = mul i64 %arg1, 2, !insn.addr !282
  %3 = trunc i64 %2 to i32, !insn.addr !283
  %4 = icmp sgt i32 %3, 100, !insn.addr !283
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !283
  br i1 %4, label %dec_label_pc_187b, label %dec_label_pc_186c, !insn.addr !283

dec_label_pc_186c:                                ; preds = %dec_label_pc_1864
  %5 = and i64 %2, 4294967294, !insn.addr !282
  %6 = urem i64 %arg1, 2
  %7 = icmp eq i64 %6, 0, !insn.addr !284
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !285
  br i1 %7, label %dec_label_pc_187b, label %dec_label_pc_1872, !insn.addr !285

dec_label_pc_1872:                                ; preds = %dec_label_pc_186c
  %8 = add i64 %arg1, 1, !insn.addr !286
  %9 = and i64 %8, 4294967295, !insn.addr !286
  ret i64 %9, !insn.addr !287

dec_label_pc_187b:                                ; preds = %dec_label_pc_1864, %dec_label_pc_186c, %dec_label_pc_1859
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !288

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1, 3 }
  uselistorder i64 %arg1, { 2, 1, 0, 3 }
  uselistorder label %dec_label_pc_187b, { 1, 0, 2 }
}

define i64 @conditional_return(i64 %arg1) local_unnamed_addr {
dec_label_pc_187c:
  %0 = and i64 %arg1, 4294967295, !insn.addr !289
  %1 = trunc i64 %arg1 to i32, !insn.addr !290
  %2 = icmp slt i32 %1, 1
  br i1 %2, label %dec_label_pc_1889, label %dec_label_pc_1886, !insn.addr !291

dec_label_pc_1886:                                ; preds = %dec_label_pc_187c
  %3 = mul i64 %0, 2, !insn.addr !292
  %4 = and i64 %3, 4294967294, !insn.addr !292
  ret i64 %4, !insn.addr !293

dec_label_pc_1889:                                ; preds = %dec_label_pc_187c
  %5 = icmp eq i32 %1, 0, !insn.addr !290
  %6 = sub i64 0, %arg1
  %7 = and i64 %6, 4294967295
  %rax.0 = select i1 %5, i64 %0, i64 %7
  ret i64 %rax.0, !insn.addr !294

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
  uselistorder i64 %0, { 1, 0 }
}

define i32 @duffs_device(i32* %dst, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_188e:
  %r8.0.reg2mem = alloca i32, !insn.addr !295
  %rsi.0.in.reg2mem = alloca i32, !insn.addr !295
  %rcx.0.reg2mem = alloca i64, !insn.addr !295
  %rax.0.reg2mem = alloca i64, !insn.addr !295
  %0 = icmp slt i32 %n, 1
  store i32 -1, i32* %r8.0.reg2mem, !insn.addr !296
  br i1 %0, label %dec_label_pc_1935, label %dec_label_pc_18a3, !insn.addr !296

dec_label_pc_18a3:                                ; preds = %dec_label_pc_188e
  %1 = ptrtoint i32* %dst to i64
  %2 = urem i32 %n, 8
  %3 = add nsw i32 %2, -1, !insn.addr !297
  %4 = icmp ult i32 %3, 7
  br i1 %4, label %dec_label_pc_18b3, label %dec_label_pc_1922.preheader, !insn.addr !298

dec_label_pc_1922.preheader:                      ; preds = %dec_label_pc_18a3
  %5 = add i32 %n, 7, !insn.addr !299
  %6 = ashr i32 %5, 3, !insn.addr !300
  %7 = ptrtoint i32* %src to i64
  store i64 %1, i64* %rax.0.reg2mem
  store i64 %7, i64* %rcx.0.reg2mem
  store i32 %6, i32* %rsi.0.in.reg2mem
  br label %dec_label_pc_1922

dec_label_pc_18b3:                                ; preds = %dec_label_pc_18a3
  %8 = trunc i64 %1 to i32, !insn.addr !301
  ret i32 %8, !insn.addr !301

dec_label_pc_191a:                                ; preds = %dec_label_pc_1922
  %9 = add i64 %rcx.0.reload, 32, !insn.addr !302
  %10 = add i64 %rax.0.reload, 32, !insn.addr !303
  store i64 %10, i64* %rax.0.reg2mem, !insn.addr !303
  store i64 %9, i64* %rcx.0.reg2mem, !insn.addr !303
  store i32 %49, i32* %rsi.0.in.reg2mem, !insn.addr !303
  br label %dec_label_pc_1922, !insn.addr !303

dec_label_pc_1922:                                ; preds = %dec_label_pc_1922.preheader, %dec_label_pc_191a
  %rsi.0.in.reload = load i32, i32* %rsi.0.in.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %11 = inttoptr i64 %rcx.0.reload to i32*, !insn.addr !304
  %12 = load i32, i32* %11, align 4, !insn.addr !304
  %13 = add i64 %rax.0.reload, 4, !insn.addr !305
  %14 = add i64 %rcx.0.reload, 4, !insn.addr !306
  %15 = inttoptr i64 %rax.0.reload to i32*, !insn.addr !307
  store i32 %12, i32* %15, align 4, !insn.addr !307
  %16 = inttoptr i64 %14 to i32*, !insn.addr !308
  %17 = load i32, i32* %16, align 4, !insn.addr !308
  %18 = add i64 %rcx.0.reload, 8, !insn.addr !309
  %19 = inttoptr i64 %13 to i32*, !insn.addr !310
  store i32 %17, i32* %19, align 4, !insn.addr !310
  %20 = inttoptr i64 %18 to i32*, !insn.addr !311
  %21 = load i32, i32* %20, align 4, !insn.addr !311
  %22 = add i64 %rcx.0.reload, 12, !insn.addr !312
  %23 = add i64 %rax.0.reload, 8, !insn.addr !313
  %24 = inttoptr i64 %23 to i32*, !insn.addr !313
  store i32 %21, i32* %24, align 4, !insn.addr !313
  %25 = inttoptr i64 %22 to i32*, !insn.addr !314
  %26 = load i32, i32* %25, align 4, !insn.addr !314
  %27 = add i64 %rcx.0.reload, 16, !insn.addr !315
  %28 = add i64 %rax.0.reload, 12, !insn.addr !316
  %29 = inttoptr i64 %28 to i32*, !insn.addr !316
  store i32 %26, i32* %29, align 4, !insn.addr !316
  %30 = inttoptr i64 %27 to i32*, !insn.addr !317
  %31 = load i32, i32* %30, align 4, !insn.addr !317
  %32 = add i64 %rcx.0.reload, 20, !insn.addr !318
  %33 = add i64 %rax.0.reload, 16, !insn.addr !319
  %34 = inttoptr i64 %33 to i32*, !insn.addr !319
  store i32 %31, i32* %34, align 4, !insn.addr !319
  %35 = inttoptr i64 %32 to i32*, !insn.addr !320
  %36 = load i32, i32* %35, align 4, !insn.addr !320
  %37 = add i64 %rcx.0.reload, 24, !insn.addr !321
  %38 = add i64 %rax.0.reload, 20, !insn.addr !322
  %39 = inttoptr i64 %38 to i32*, !insn.addr !322
  store i32 %36, i32* %39, align 4, !insn.addr !322
  %40 = inttoptr i64 %37 to i32*, !insn.addr !323
  %41 = load i32, i32* %40, align 4, !insn.addr !323
  %42 = add i64 %rax.0.reload, 28, !insn.addr !324
  %43 = add i64 %rcx.0.reload, 28, !insn.addr !325
  %44 = add i64 %rax.0.reload, 24, !insn.addr !326
  %45 = inttoptr i64 %44 to i32*, !insn.addr !326
  store i32 %41, i32* %45, align 4, !insn.addr !326
  %46 = inttoptr i64 %43 to i32*, !insn.addr !327
  %47 = load i32, i32* %46, align 4, !insn.addr !327
  %48 = inttoptr i64 %42 to i32*, !insn.addr !328
  store i32 %47, i32* %48, align 4, !insn.addr !328
  %49 = add i32 %rsi.0.in.reload, -1, !insn.addr !329
  %50 = icmp eq i32 %49, 0, !insn.addr !329
  store i32 %n, i32* %r8.0.reg2mem, !insn.addr !330
  br i1 %50, label %dec_label_pc_1935, label %dec_label_pc_191a, !insn.addr !330

dec_label_pc_1935:                                ; preds = %dec_label_pc_1922, %dec_label_pc_188e
  %r8.0.reload = load i32, i32* %r8.0.reg2mem
  ret i32 %r8.0.reload, !insn.addr !331

; uselistorder directives
  uselistorder i32 %49, { 1, 0 }
  uselistorder i64 %rax.0.reload, { 7, 6, 5, 4, 3, 2, 0, 1, 8 }
  uselistorder i64 %rcx.0.reload, { 7, 6, 5, 4, 3, 2, 0, 1, 8 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rcx.0.reg2mem, { 0, 2, 1 }
  uselistorder i32* %rsi.0.in.reg2mem, { 0, 2, 1 }
  uselistorder i64 12, { 1, 2, 3, 0 }
  uselistorder i32 %n, { 0, 2, 1, 3 }
  uselistorder label %dec_label_pc_1922, { 1, 0 }
}

define i32 @loop_complex_cond(i32 %x) local_unnamed_addr {
dec_label_pc_1939:
  %.lcssa.reg2mem = alloca i32, !insn.addr !332
  %.lcssa2.reg2mem = alloca i32, !insn.addr !332
  %.lcssa3.reg2mem = alloca i32, !insn.addr !332
  %storemerge4.reg2mem = alloca i64, !insn.addr !332
  %0 = zext i32 %x to i64
  %1 = icmp eq i32 %x, 0, !insn.addr !333
  store i64 0, i64* %storemerge4.reg2mem, !insn.addr !333
  store i32 0, i32* %.lcssa3.reg2mem, !insn.addr !333
  store i32 0, i32* %.lcssa2.reg2mem, !insn.addr !333
  store i32 0, i32* %.lcssa.reg2mem, !insn.addr !333
  br i1 %1, label %dec_label_pc_1953, label %dec_label_pc_194f, !insn.addr !333

dec_label_pc_194f:                                ; preds = %dec_label_pc_1939, %dec_label_pc_194f
  %storemerge4.reload = load i64, i64* %storemerge4.reg2mem
  %2 = add nuw nsw i64 %storemerge4.reload, 1, !insn.addr !334
  %3 = and i64 %2, 4294967295, !insn.addr !334
  %4 = mul i64 %3, 2, !insn.addr !335
  %5 = and i64 %4, 4294967294, !insn.addr !335
  %6 = sub nsw i64 %0, %3, !insn.addr !336
  %7 = and i64 %6, 4294967295, !insn.addr !336
  %8 = icmp uge i64 %5, %7, !insn.addr !333
  %9 = trunc i64 %2 to i32
  %10 = icmp sgt i32 %9, 9, !insn.addr !337
  %or.cond = or i1 %10, %8
  store i64 %3, i64* %storemerge4.reg2mem, !insn.addr !333
  br i1 %or.cond, label %dec_label_pc_193f.dec_label_pc_1953_crit_edge, label %dec_label_pc_194f, !insn.addr !333

dec_label_pc_193f.dec_label_pc_1953_crit_edge:    ; preds = %dec_label_pc_194f
  %phitmp = trunc i64 %4 to i32
  %phitmp11 = trunc i64 %6 to i32
  store i32 %phitmp, i32* %.lcssa3.reg2mem
  store i32 %phitmp11, i32* %.lcssa2.reg2mem
  store i32 %9, i32* %.lcssa.reg2mem
  br label %dec_label_pc_1953

dec_label_pc_1953:                                ; preds = %dec_label_pc_193f.dec_label_pc_1953_crit_edge, %dec_label_pc_1939
  %.lcssa.reload = load i32, i32* %.lcssa.reg2mem
  %.lcssa2.reload = load i32, i32* %.lcssa2.reg2mem
  %.lcssa3.reload = load i32, i32* %.lcssa3.reg2mem
  %11 = add i32 %.lcssa2.reload, %.lcssa3.reload, !insn.addr !338
  %12 = add i32 %11, %.lcssa.reload, !insn.addr !339
  ret i32 %12, !insn.addr !340

; uselistorder directives
  uselistorder i64 %4, { 1, 0 }
  uselistorder i64 %3, { 0, 2, 1 }
  uselistorder i64* %storemerge4.reg2mem, { 2, 0, 1 }
  uselistorder i32* %.lcssa3.reg2mem, { 0, 2, 1 }
  uselistorder i32* %.lcssa2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_194f, { 1, 0 }
}

define i32 @loop_modify_var(i32 %n) local_unnamed_addr {
dec_label_pc_1958:
  %r8.0.lcssa.reg2mem = alloca i32, !insn.addr !341
  %rax.01.reg2mem = alloca i64, !insn.addr !341
  %r8.02.reg2mem = alloca i64, !insn.addr !341
  %0 = sext i32 %n to i64
  %1 = icmp sgt i32 %n, 0, !insn.addr !342
  store i64 0, i64* %r8.02.reg2mem, !insn.addr !342
  store i64 0, i64* %rax.01.reg2mem, !insn.addr !342
  store i32 0, i32* %r8.0.lcssa.reg2mem, !insn.addr !342
  br i1 %1, label %dec_label_pc_1965, label %dec_label_pc_1974, !insn.addr !342

dec_label_pc_1965:                                ; preds = %dec_label_pc_1958, %dec_label_pc_1965
  %rax.01.reload = load i64, i64* %rax.01.reg2mem
  %r8.02.reload = load i64, i64* %r8.02.reg2mem
  %2 = add nuw nsw i64 %rax.01.reload, %r8.02.reload, !insn.addr !343
  %3 = and i64 %2, 4294967295, !insn.addr !343
  %4 = trunc i64 %rax.01.reload to i32, !insn.addr !344
  %5 = icmp slt i32 %4, 6, !insn.addr !344
  %6 = add nuw nsw i64 %rax.01.reload, 2
  %rax.1 = select i1 %5, i64 %rax.01.reload, i64 %6
  %7 = add nuw nsw i64 %rax.1, 1, !insn.addr !345
  %8 = and i64 %7, 4294967295, !insn.addr !345
  %9 = icmp slt i64 %8, %0, !insn.addr !342
  store i64 %3, i64* %r8.02.reg2mem, !insn.addr !342
  store i64 %8, i64* %rax.01.reg2mem, !insn.addr !342
  br i1 %9, label %dec_label_pc_1965, label %dec_label_pc_1961.dec_label_pc_1974_crit_edge, !insn.addr !342

dec_label_pc_1961.dec_label_pc_1974_crit_edge:    ; preds = %dec_label_pc_1965
  %phitmp = trunc i64 %2 to i32
  store i32 %phitmp, i32* %r8.0.lcssa.reg2mem
  br label %dec_label_pc_1974

dec_label_pc_1974:                                ; preds = %dec_label_pc_1961.dec_label_pc_1974_crit_edge, %dec_label_pc_1958
  %r8.0.lcssa.reload = load i32, i32* %r8.0.lcssa.reg2mem
  ret i32 %r8.0.lcssa.reload, !insn.addr !346

; uselistorder directives
  uselistorder i64* %r8.02.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.01.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r8.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1965, { 1, 0 }
}

define i32 @loop_external_state(i32* %flag) local_unnamed_addr {
dec_label_pc_1978:
  %0 = alloca i64
  %rax.1.reg2mem = alloca i64, !insn.addr !347
  %rax.0.reg2mem = alloca i64, !insn.addr !347
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp eq i32 %2, 0, !insn.addr !348
  %4 = icmp eq i1 %3, false, !insn.addr !349
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !350
  br label %dec_label_pc_197e, !insn.addr !350

dec_label_pc_197e:                                ; preds = %dec_label_pc_1984, %dec_label_pc_1978
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !349
  br i1 %4, label %dec_label_pc_198b, label %dec_label_pc_1984, !insn.addr !349

dec_label_pc_1984:                                ; preds = %dec_label_pc_197e
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %5 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !351
  %6 = and i64 %5, 4294967295, !insn.addr !351
  %7 = trunc i64 %5 to i32, !insn.addr !352
  %8 = icmp eq i32 %7, 101, !insn.addr !352
  %9 = icmp eq i1 %8, false, !insn.addr !353
  store i64 %6, i64* %rax.0.reg2mem, !insn.addr !353
  store i64 %6, i64* %rax.1.reg2mem, !insn.addr !353
  br i1 %9, label %dec_label_pc_197e, label %dec_label_pc_198b, !insn.addr !353

dec_label_pc_198b:                                ; preds = %dec_label_pc_1984, %dec_label_pc_197e
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %10 = trunc i64 %rax.1.reload to i32, !insn.addr !354
  ret i32 %10, !insn.addr !354

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
}

define i64 @tail_recursion(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_198c:
  %rax.0.in.lcssa.reg2mem = alloca i64, !insn.addr !355
  %rax.0.in2.reg2mem = alloca i64, !insn.addr !355
  %rdi.03.reg2mem = alloca i64, !insn.addr !355
  %0 = trunc i64 %arg1 to i32, !insn.addr !356
  %1 = icmp slt i32 %0, 2, !insn.addr !356
  store i64 %arg1, i64* %rdi.03.reg2mem, !insn.addr !356
  store i64 %arg2, i64* %rax.0.in2.reg2mem, !insn.addr !356
  store i64 %arg2, i64* %rax.0.in.lcssa.reg2mem, !insn.addr !356
  br i1 %1, label %dec_label_pc_199e, label %dec_label_pc_1997, !insn.addr !356

dec_label_pc_1997:                                ; preds = %dec_label_pc_198c, %dec_label_pc_1997
  %rax.0.in2.reload = load i64, i64* %rax.0.in2.reg2mem
  %rdi.03.reload = load i64, i64* %rdi.03.reg2mem
  %sext = mul i64 %rax.0.in2.reload, 4294967296
  %2 = ashr exact i64 %sext, 32, !insn.addr !357
  %sext1 = mul i64 %rdi.03.reload, 4294967296
  %3 = ashr exact i64 %sext1, 32, !insn.addr !357
  %4 = mul nsw i64 %2, %3, !insn.addr !357
  %5 = add i64 %rdi.03.reload, 4294967295, !insn.addr !358
  %6 = and i64 %5, 4294967295, !insn.addr !358
  %7 = trunc i64 %5 to i32, !insn.addr !356
  %8 = icmp slt i32 %7, 2, !insn.addr !356
  store i64 %6, i64* %rdi.03.reg2mem, !insn.addr !356
  store i64 %4, i64* %rax.0.in2.reg2mem, !insn.addr !356
  store i64 %4, i64* %rax.0.in.lcssa.reg2mem, !insn.addr !356
  br i1 %8, label %dec_label_pc_199e, label %dec_label_pc_1997, !insn.addr !356

dec_label_pc_199e:                                ; preds = %dec_label_pc_1997, %dec_label_pc_198c
  %rax.0.in.lcssa.reload = load i64, i64* %rax.0.in.lcssa.reg2mem
  %rax.0 = and i64 %rax.0.in.lcssa.reload, 4294967295
  ret i64 %rax.0, !insn.addr !359

; uselistorder directives
  uselistorder i64* %rdi.03.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.0.in2.reg2mem, { 2, 0, 1 }
  uselistorder i64 32, { 2, 3, 0, 1, 4, 5, 6, 7, 8 }
  uselistorder label %dec_label_pc_1997, { 1, 0 }
}

define i64 @indirect_recursion_a(i64 %arg1) local_unnamed_addr {
dec_label_pc_199f:
  %0 = alloca i64
  %rax.1.reg2mem = alloca i64, !insn.addr !360
  %storemerge.in.reg2mem = alloca i64, !insn.addr !360
  %rax.0.in2.reg2mem = alloca i64, !insn.addr !360
  %rsi.03.reg2mem = alloca i64, !insn.addr !360
  %rax.04.reg2mem = alloca i64, !insn.addr !360
  %.reg2mem = alloca i32, !insn.addr !360
  %1 = load i64, i64* %0
  %rax.01 = and i64 %arg1, 4294967295
  %2 = trunc i64 %1 to i32, !insn.addr !361
  %3 = icmp slt i32 %2, 1
  store i32 %2, i32* %.reg2mem, !insn.addr !362
  store i64 %rax.01, i64* %rax.04.reg2mem, !insn.addr !362
  store i64 %arg1, i64* %rax.0.in2.reg2mem, !insn.addr !362
  store i64 %rax.01, i64* %rax.1.reg2mem, !insn.addr !362
  br i1 %3, label %dec_label_pc_19d1, label %dec_label_pc_19ae, !insn.addr !362

dec_label_pc_19ae:                                ; preds = %dec_label_pc_199f, %dec_label_pc_19bc
  %rax.0.in2.reload = load i64, i64* %rax.0.in2.reg2mem
  %rsi.03.reload = load i64, i64* %rsi.03.reg2mem
  %rax.04.reload = load i64, i64* %rax.04.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %4 = urem i64 %rax.0.in2.reload, 2
  %5 = icmp eq i64 %4, 0, !insn.addr !363
  %6 = icmp eq i1 %5, false, !insn.addr !364
  br i1 %6, label %dec_label_pc_19c1, label %dec_label_pc_19b2, !insn.addr !364

dec_label_pc_19b2:                                ; preds = %dec_label_pc_19ae
  %7 = trunc i64 %rax.0.in2.reload to i32, !insn.addr !365
  %8 = ashr i32 %7, 31, !insn.addr !365
  %9 = zext i32 %8 to i64, !insn.addr !366
  %10 = mul i64 %9, 4294967296, !insn.addr !366
  %11 = or i64 %10, %rax.04.reload, !insn.addr !366
  %12 = sdiv i64 %11, 2, !insn.addr !366
  %13 = and i64 %12, 4294967295, !insn.addr !366
  %14 = icmp eq i32 %.reload, 1, !insn.addr !367
  store i64 %13, i64* %rax.1.reg2mem, !insn.addr !368
  br i1 %14, label %dec_label_pc_19d1, label %dec_label_pc_19ba, !insn.addr !368

dec_label_pc_19ba:                                ; preds = %dec_label_pc_19b2
  %15 = add nuw nsw i64 %13, 1, !insn.addr !369
  store i64 %15, i64* %storemerge.in.reg2mem, !insn.addr !369
  br label %dec_label_pc_19bc, !insn.addr !369

dec_label_pc_19bc:                                ; preds = %dec_label_pc_19cc, %dec_label_pc_19ba
  %storemerge.in.reload = load i64, i64* %storemerge.in.reg2mem
  %16 = add i64 %rsi.03.reload, 4294967294, !insn.addr !370
  %17 = and i64 %16, 4294967295, !insn.addr !370
  %rax.0 = and i64 %storemerge.in.reload, 4294967295
  %18 = trunc i64 %16 to i32, !insn.addr !361
  %19 = icmp slt i32 %18, 1
  store i32 %18, i32* %.reg2mem, !insn.addr !362
  store i64 %rax.0, i64* %rax.04.reg2mem, !insn.addr !362
  store i64 %17, i64* %rsi.03.reg2mem, !insn.addr !362
  store i64 %storemerge.in.reload, i64* %rax.0.in2.reg2mem, !insn.addr !362
  store i64 %rax.0, i64* %rax.1.reg2mem, !insn.addr !362
  br i1 %19, label %dec_label_pc_19d1, label %dec_label_pc_19ae, !insn.addr !362

dec_label_pc_19c1:                                ; preds = %dec_label_pc_19ae
  %20 = mul nuw nsw i64 %rax.04.reload, 3, !insn.addr !371
  %21 = icmp eq i32 %.reload, 1, !insn.addr !372
  %22 = icmp eq i1 %21, false, !insn.addr !373
  br i1 %22, label %dec_label_pc_19cc, label %dec_label_pc_19c9, !insn.addr !373

dec_label_pc_19c9:                                ; preds = %dec_label_pc_19c1
  %23 = add nuw nsw i64 %20, 1, !insn.addr !374
  %24 = and i64 %23, 4294967295, !insn.addr !374
  ret i64 %24, !insn.addr !375

dec_label_pc_19cc:                                ; preds = %dec_label_pc_19c1
  %25 = and i64 %20, 4294967295, !insn.addr !371
  %26 = add nuw nsw i64 %25, 2, !insn.addr !376
  store i64 %26, i64* %storemerge.in.reg2mem, !insn.addr !377
  br label %dec_label_pc_19bc, !insn.addr !377

dec_label_pc_19d1:                                ; preds = %dec_label_pc_19bc, %dec_label_pc_19b2, %dec_label_pc_199f
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !378

; uselistorder directives
  uselistorder i64 %20, { 1, 0 }
  uselistorder i64 %storemerge.in.reload, { 1, 0 }
  uselistorder i64 %13, { 1, 0 }
  uselistorder i32 %.reload, { 1, 0 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.04.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rsi.03.reg2mem, { 1, 0 }
  uselistorder i64* %rax.0.in2.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge.in.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.1.reg2mem, { 0, 2, 1, 3 }
  uselistorder label %dec_label_pc_19ae, { 1, 0 }
}

define i32 @call_func_ptr(i32 (i32)* %f, i32 %x) local_unnamed_addr {
dec_label_pc_19d2:
  %0 = ptrtoint i32 (i32)* %f to i64
  %1 = trunc i64 %0 to i32, !insn.addr !379
  ret i32 %1, !insn.addr !379
}

define i32 @call_func_ptr_array(i32 %idx, i32 %x) local_unnamed_addr {
dec_label_pc_19dd:
  %stack_var_-40 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !380
  store i64 4607, i64* %stack_var_-40, align 8, !insn.addr !381
  %1 = icmp ult i32 %idx, 3
  %2 = call i64 @__readfsqword(i64 40)
  %3 = icmp eq i64 %0, %2
  br i1 %1, label %dec_label_pc_1a20, label %dec_label_pc_1a3c, !insn.addr !382

dec_label_pc_1a20:                                ; preds = %dec_label_pc_19dd
  %4 = icmp eq i1 %3, false, !insn.addr !383
  br i1 %4, label %dec_label_pc_1a4c, label %dec_label_pc_1a30, !insn.addr !383

dec_label_pc_1a30:                                ; preds = %dec_label_pc_1a20
  %5 = ptrtoint i64* %stack_var_-40 to i64, !insn.addr !384
  %6 = sext i32 %idx to i64, !insn.addr !385
  %7 = mul i64 %6, 8, !insn.addr !386
  %8 = add i64 %7, %5, !insn.addr !386
  %9 = inttoptr i64 %8 to i64*, !insn.addr !386
  %10 = load i64, i64* %9, align 8, !insn.addr !386
  %11 = trunc i64 %10 to i32, !insn.addr !387
  ret i32 %11, !insn.addr !387

dec_label_pc_1a3c:                                ; preds = %dec_label_pc_19dd
  br i1 %3, label %dec_label_pc_1a51, label %dec_label_pc_1a4c, !insn.addr !388

dec_label_pc_1a4c:                                ; preds = %dec_label_pc_1a3c, %dec_label_pc_1a20
  call void @__stack_chk_fail(), !insn.addr !389
  br label %dec_label_pc_1a51, !insn.addr !389

dec_label_pc_1a51:                                ; preds = %dec_label_pc_1a4c, %dec_label_pc_1a3c
  ret i32 -1, !insn.addr !390

; uselistorder directives
  uselistorder i64* %stack_var_-40, { 1, 0 }
  uselistorder i32 %idx, { 1, 0 }
}

define i32 @call_virtual_func(i8* %obj, i32 %x) local_unnamed_addr {
dec_label_pc_1a59:
  %0 = mul i32 %x, 2, !insn.addr !391
  ret i32 %0, !insn.addr !392
}

define i32 @process_with_callback(i32* %arr, i32 %n, i32 (i32)* %cb) local_unnamed_addr {
dec_label_pc_1a61:
  %0 = alloca i64
  %r12.0.lcssa.reg2mem = alloca i32, !insn.addr !393
  %rbx.01.reg2mem = alloca i64, !insn.addr !393
  %r12.02.reg2mem = alloca i64, !insn.addr !393
  %1 = load i64, i64* %0
  %2 = zext i32 %n to i64, !insn.addr !394
  %3 = icmp eq i32 %n, 0, !insn.addr !395
  store i64 0, i64* %r12.02.reg2mem, !insn.addr !395
  store i64 0, i64* %rbx.01.reg2mem, !insn.addr !395
  store i32 0, i32* %r12.0.lcssa.reg2mem, !insn.addr !395
  br i1 %3, label %dec_label_pc_1a8e, label %dec_label_pc_1a7e, !insn.addr !395

dec_label_pc_1a7e:                                ; preds = %dec_label_pc_1a61, %dec_label_pc_1a7e
  %rbx.01.reload = load i64, i64* %rbx.01.reg2mem
  %r12.02.reload = load i64, i64* %r12.02.reg2mem
  %4 = add nuw nsw i64 %rbx.01.reload, 1, !insn.addr !396
  %5 = add i64 %r12.02.reload, %1, !insn.addr !397
  %6 = and i64 %5, 4294967295, !insn.addr !397
  %exitcond = icmp eq i64 %4, %2
  store i64 %6, i64* %r12.02.reg2mem, !insn.addr !395
  store i64 %4, i64* %rbx.01.reg2mem, !insn.addr !395
  br i1 %exitcond, label %dec_label_pc_1a7a.dec_label_pc_1a8e_crit_edge, label %dec_label_pc_1a7e, !insn.addr !395

dec_label_pc_1a7a.dec_label_pc_1a8e_crit_edge:    ; preds = %dec_label_pc_1a7e
  %phitmp = trunc i64 %5 to i32
  store i32 %phitmp, i32* %r12.0.lcssa.reg2mem
  br label %dec_label_pc_1a8e

dec_label_pc_1a8e:                                ; preds = %dec_label_pc_1a61, %dec_label_pc_1a7a.dec_label_pc_1a8e_crit_edge
  %r12.0.lcssa.reload = load i32, i32* %r12.0.lcssa.reg2mem
  ret i32 %r12.0.lcssa.reload, !insn.addr !398

; uselistorder directives
  uselistorder i64* %r12.02.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.01.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r12.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1a8e, { 1, 0 }
  uselistorder label %dec_label_pc_1a7e, { 1, 0 }
}

define void @test_control_flow_l2() local_unnamed_addr {
dec_label_pc_1a9a:
  %stack_var_-132 = alloca i64, align 8
  %stack_var_-136 = alloca i64, align 8
  %stack_var_-112 = alloca i64, align 8
  %stack_var_-80 = alloca i64, align 8
  %arr_-140 = alloca [5 x i32], align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !399
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_3271 to i8*)), !insn.addr !400
  %2 = call i32 @loop_multi_exit(i32 7), !insn.addr !401
  %3 = zext i32 %2 to i64, !insn.addr !402
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3295, i64 0, i64 0), i64 %3), !insn.addr !403
  store [5 x i32] [i32 0, i32 undef, i32 undef, i32 undef, i32 undef], [5 x i32]* %arr_-140, align 4, !insn.addr !404
  %5 = getelementptr inbounds [5 x i32], [5 x i32]* %arr_-140, i64 0, i64 0, !insn.addr !405
  %6 = call i32 @infinite_loop(i32* nonnull %5), !insn.addr !405
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_32b5, i64 0, i64 0)), !insn.addr !406
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_32d3, i64 0, i64 0), i64 4294967295), !insn.addr !407
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_32d3, i64 0, i64 0), i64 4294967294), !insn.addr !408
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_32d3, i64 0, i64 0), i64 4), !insn.addr !409
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_32f0, i64 0, i64 0), i64 10), !insn.addr !410
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_32f0, i64 0, i64 0), i64 5), !insn.addr !411
  %13 = bitcast i64* %stack_var_-80 to i8*, !insn.addr !412
  call void @__asm_rep_stosd_memset(i8* nonnull %13, i32 0, i64 8), !insn.addr !412
  store i64 8589934593, i64* %stack_var_-112, align 8, !insn.addr !413
  %14 = bitcast i64* %stack_var_-80 to i32*, !insn.addr !414
  %15 = bitcast i64* %stack_var_-112 to i32*, !insn.addr !414
  %16 = call i32 @duffs_device(i32* nonnull %14, i32* nonnull %15, i32 8), !insn.addr !414
  %17 = zext i32 %16 to i64, !insn.addr !415
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3313, i64 0, i64 0), i64 %17), !insn.addr !416
  %19 = call i32 @loop_complex_cond(i32 10), !insn.addr !417
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3330, i64 0, i64 0)), !insn.addr !418
  %21 = call i32 @loop_modify_var(i32 10), !insn.addr !419
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3352, i64 0, i64 0)), !insn.addr !420
  store i64 0, i64* %stack_var_-136, align 8, !insn.addr !421
  %23 = bitcast i64* %stack_var_-136 to i32*, !insn.addr !422
  %24 = call i32 @loop_external_state(i32* nonnull %23), !insn.addr !422
  %25 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_3372, i64 0, i64 0)), !insn.addr !423
  %26 = call i32 @recursion_factorial(i32 5), !insn.addr !424
  %27 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_3396, i64 0, i64 0)), !insn.addr !425
  %28 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_33ba, i64 0, i64 0), i64 120), !insn.addr !426
  %29 = call i64 @indirect_recursion_a(i64 6), !insn.addr !427
  %30 = and i64 %29, 4294967295, !insn.addr !428
  %31 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_33d9, i64 0, i64 0), i64 %30), !insn.addr !429
  %32 = call i32 @call_func_ptr(i32 (i32)* inttoptr (i64 4607 to i32 (i32)*), i32 5), !insn.addr !430
  %33 = zext i32 %32 to i64, !insn.addr !431
  %34 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_33fc, i64 0, i64 0), i64 %33), !insn.addr !432
  %35 = call i32 @call_func_ptr_array(i32 0, i32 5), !insn.addr !433
  %36 = zext i32 %35 to i64, !insn.addr !434
  %37 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_341a, i64 0, i64 0), i64 %36), !insn.addr !435
  %38 = call i32 @call_func_ptr_array(i32 2, i32 5), !insn.addr !436
  %39 = zext i32 %38 to i64, !insn.addr !437
  %40 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_341a, i64 0, i64 0), i64 %39), !insn.addr !438
  store i64 8589934593, i64* %stack_var_-132, align 8, !insn.addr !439
  %41 = bitcast i64* %stack_var_-132 to i32*, !insn.addr !440
  %42 = call i32 @process_with_callback(i32* nonnull %41, i32 5, i32 (i32)* inttoptr (i64 4607 to i32 (i32)*)), !insn.addr !440
  %43 = zext i32 %42 to i64, !insn.addr !441
  %44 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_343e, i64 0, i64 0), i64 %43), !insn.addr !442
  %45 = call i64 @__readfsqword(i64 40), !insn.addr !443
  %46 = icmp eq i64 %0, %45, !insn.addr !443
  br i1 %46, label %dec_label_pc_1d68, label %dec_label_pc_1d63, !insn.addr !444

dec_label_pc_1d63:                                ; preds = %dec_label_pc_1a9a
  call void @__stack_chk_fail(), !insn.addr !445
  br label %dec_label_pc_1d68, !insn.addr !445

dec_label_pc_1d68:                                ; preds = %dec_label_pc_1d63, %dec_label_pc_1a9a
  ret void, !insn.addr !446

; uselistorder directives
  uselistorder i32 (i32, i32)* @call_func_ptr_array, { 1, 0 }
  uselistorder i32 8, { 1, 0 }
  uselistorder i64 8589934593, { 1, 0 }
  uselistorder i64 5, { 1, 2, 0 }
  uselistorder i64 4, { 4, 5, 6, 0, 2, 1, 3 }
  uselistorder i32 7, { 0, 2, 1 }
}

define i32 @non_local_jump(i32 %x) local_unnamed_addr {
dec_label_pc_1d73:
  %rax.0.reg2mem = alloca i32, !insn.addr !447
  %rsi.0.reg2mem = alloca i64, !insn.addr !447
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @jump_buffer to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !448
  %1 = icmp eq i32 %0, 0, !insn.addr !449
  %2 = icmp eq i1 %1, false, !insn.addr !450
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !450
  br i1 %2, label %dec_label_pc_1dc0, label %dec_label_pc_1d93, !insn.addr !450

dec_label_pc_1d93:                                ; preds = %dec_label_pc_1d73
  %3 = icmp slt i32 %x, 0, !insn.addr !451
  store i64 1, i64* %rsi.0.reg2mem, !insn.addr !452
  br i1 %3, label %dec_label_pc_1db1, label %dec_label_pc_1d9f, !insn.addr !452

dec_label_pc_1d9f:                                ; preds = %dec_label_pc_1d93
  %4 = mul i32 %x, 2, !insn.addr !453
  %5 = icmp slt i32 %x, 101, !insn.addr !454
  store i64 2, i64* %rsi.0.reg2mem, !insn.addr !454
  store i32 %4, i32* %rax.0.reg2mem, !insn.addr !454
  br i1 %5, label %dec_label_pc_1dc0, label %dec_label_pc_1db1, !insn.addr !454

dec_label_pc_1db1:                                ; preds = %dec_label_pc_1d9f, %dec_label_pc_1d93
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %6 = call i64 @__longjmp_chk(i64* nonnull @jump_buffer, i64 %rsi.0.reload), !insn.addr !455
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !455
  br label %dec_label_pc_1dc0, !insn.addr !455

dec_label_pc_1dc0:                                ; preds = %dec_label_pc_1d73, %dec_label_pc_1db1, %dec_label_pc_1d9f
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !456

; uselistorder directives
  uselistorder i32* %rax.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32 %x, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1dc0, { 1, 2, 0 }
}

define i64 @cpp_exception(i64 %arg1) local_unnamed_addr {
dec_label_pc_1dc5:
  %rax.0.reg2mem = alloca i64, !insn.addr !457
  %0 = trunc i64 %arg1 to i32, !insn.addr !458
  %1 = icmp slt i32 %0, 0, !insn.addr !458
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !459
  br i1 %1, label %dec_label_pc_1ddd, label %dec_label_pc_1dd0, !insn.addr !459

dec_label_pc_1dd0:                                ; preds = %dec_label_pc_1dc5
  %2 = icmp sgt i32 %0, 100, !insn.addr !460
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !460
  br i1 %2, label %dec_label_pc_1ddd, label %dec_label_pc_1dda, !insn.addr !460

dec_label_pc_1dda:                                ; preds = %dec_label_pc_1dd0
  %3 = mul i64 %arg1, 2, !insn.addr !461
  %4 = and i64 %3, 4294967294, !insn.addr !461
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !461
  br label %dec_label_pc_1ddd, !insn.addr !461

dec_label_pc_1ddd:                                ; preds = %dec_label_pc_1dda, %dec_label_pc_1dd0, %dec_label_pc_1dc5
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !462
}

define i32 @large_jump_table(i32 %op, i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_1dde:
  %stack_var_-96 = alloca i64, align 8
  %ops_-104 = alloca [10 x i32 (i32, i32)*], align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !463
  %1 = bitcast i64* %stack_var_-96 to i8*, !insn.addr !464
  call void @__asm_rep_movsd_memcpy(i8* nonnull %1, i8* bitcast (i8** @global_var_6020 to i8*), i64 20), !insn.addr !464
  %2 = icmp ult i32 %op, 10
  %3 = call i64 @__readfsqword(i64 40)
  %4 = icmp eq i64 %0, %3
  br i1 %2, label %dec_label_pc_1e17, label %dec_label_pc_1e38, !insn.addr !465

dec_label_pc_1e17:                                ; preds = %dec_label_pc_1dde
  %5 = icmp eq i1 %4, false, !insn.addr !466
  br i1 %5, label %dec_label_pc_1e48, label %dec_label_pc_1e27, !insn.addr !466

dec_label_pc_1e27:                                ; preds = %dec_label_pc_1e17
  %6 = ptrtoint [10 x i32 (i32, i32)*]* %ops_-104 to i64, !insn.addr !467
  %7 = sext i32 %op to i64, !insn.addr !468
  %8 = mul i64 %7, 8, !insn.addr !469
  %9 = add nsw i64 %8, 8, !insn.addr !469
  %10 = add i64 %9, %6, !insn.addr !469
  %11 = inttoptr i64 %10 to i64*, !insn.addr !469
  %12 = load i64, i64* %11, align 8, !insn.addr !469
  %13 = trunc i64 %12 to i32, !insn.addr !470
  ret i32 %13, !insn.addr !470

dec_label_pc_1e38:                                ; preds = %dec_label_pc_1dde
  br i1 %4, label %dec_label_pc_1e4d, label %dec_label_pc_1e48, !insn.addr !471

dec_label_pc_1e48:                                ; preds = %dec_label_pc_1e38, %dec_label_pc_1e17
  call void @__stack_chk_fail(), !insn.addr !472
  br label %dec_label_pc_1e4d, !insn.addr !472

dec_label_pc_1e4d:                                ; preds = %dec_label_pc_1e48, %dec_label_pc_1e38
  ret i32 -1, !insn.addr !473

; uselistorder directives
  uselistorder i64 20, { 3, 1, 2, 4, 5, 0 }
  uselistorder i32 %op, { 1, 0 }
}

define i32 @conditional_func_ptr(i32 %mode, i32 %x) local_unnamed_addr {
dec_label_pc_1e55:
  %rax.0.reg2mem = alloca i32, !insn.addr !474
  %0 = icmp eq i32 %mode, 0, !insn.addr !475
  store i32 4607, i32* %rax.0.reg2mem, !insn.addr !476
  br i1 %0, label %dec_label_pc_1e7c, label %dec_label_pc_1e68, !insn.addr !476

dec_label_pc_1e68:                                ; preds = %dec_label_pc_1e55
  %1 = icmp eq i32 %mode, 1, !insn.addr !477
  %2 = icmp eq i1 %1, false, !insn.addr !478
  %phitmp = select i1 %2, i32 4585, i32 4615, !insn.addr !478
  store i32 %phitmp, i32* %rax.0.reg2mem, !insn.addr !478
  br label %dec_label_pc_1e7c, !insn.addr !478

dec_label_pc_1e7c:                                ; preds = %dec_label_pc_1e68, %dec_label_pc_1e55
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !479
}

define i64 @state_machine(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1e7e:
  %rdx.0.reg2mem = alloca i64, !insn.addr !480
  %zf.0.reg2mem = alloca i1, !insn.addr !480
  %merge.reg2mem = alloca i64, !insn.addr !480
  %0 = and i64 %arg2, 4294967295, !insn.addr !481
  %1 = trunc i64 %arg2 to i32, !insn.addr !482
  %2 = icmp eq i32 %1, 2, !insn.addr !482
  store i64 %0, i64* %merge.reg2mem, !insn.addr !483
  br i1 %2, label %dec_label_pc_1e9b, label %dec_label_pc_1e89, !insn.addr !483

dec_label_pc_1e89:                                ; preds = %dec_label_pc_1e7e
  %3 = icmp sgt i32 %1, 2, !insn.addr !484
  br i1 %3, label %dec_label_pc_1e96, label %dec_label_pc_1e8b, !insn.addr !484

dec_label_pc_1e8b:                                ; preds = %dec_label_pc_1e89
  store i64 3, i64* %merge.reg2mem
  switch i32 %1, label %dec_label_pc_1e9b [
    i32 0, label %dec_label_pc_1ea1
    i32 1, label %dec_label_pc_1ea9
  ]

dec_label_pc_1e96:                                ; preds = %dec_label_pc_1e89
  %4 = icmp eq i32 %1, 3, !insn.addr !485
  store i64 3, i64* %merge.reg2mem, !insn.addr !486
  br i1 %4, label %dec_label_pc_1eb8, label %dec_label_pc_1e9b, !insn.addr !486

dec_label_pc_1e9b:                                ; preds = %dec_label_pc_1e7e, %dec_label_pc_1ea9, %dec_label_pc_1e8b, %dec_label_pc_1e96
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !487

dec_label_pc_1ea1:                                ; preds = %dec_label_pc_1e8b
  %5 = trunc i64 %arg1 to i32, !insn.addr !488
  %6 = icmp eq i32 %5, 1, !insn.addr !488
  %7 = zext i1 %6 to i64, !insn.addr !489
  ret i64 %7, !insn.addr !490

dec_label_pc_1ea9:                                ; preds = %dec_label_pc_1e8b
  %8 = trunc i64 %arg1 to i32, !insn.addr !491
  %9 = icmp eq i32 %8, 2, !insn.addr !491
  store i64 2, i64* %merge.reg2mem, !insn.addr !492
  br i1 %9, label %dec_label_pc_1e9b, label %dec_label_pc_1eae, !insn.addr !492

dec_label_pc_1eae:                                ; preds = %dec_label_pc_1ea9
  %10 = icmp eq i32 %8, 99, !insn.addr !493
  store i1 %10, i1* %zf.0.reg2mem, !insn.addr !494
  store i64 3, i64* %rdx.0.reg2mem, !insn.addr !494
  br label %dec_label_pc_1ebc, !insn.addr !494

dec_label_pc_1eb8:                                ; preds = %dec_label_pc_1e96
  %11 = trunc i64 %arg1 to i32, !insn.addr !495
  %12 = icmp eq i32 %11, 0, !insn.addr !495
  store i1 %12, i1* %zf.0.reg2mem, !insn.addr !495
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !495
  br label %dec_label_pc_1ebc, !insn.addr !495

dec_label_pc_1ebc:                                ; preds = %dec_label_pc_1eb8, %dec_label_pc_1eae
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %zf.0.reload = load i1, i1* %zf.0.reg2mem
  %.v = select i1 %zf.0.reload, i64 %rdx.0.reload, i64 %arg2
  %13 = and i64 %.v, 4294967295, !insn.addr !496
  ret i64 %13, !insn.addr !497

; uselistorder directives
  uselistorder i64* %merge.reg2mem, { 1, 0, 4, 3, 2 }
  uselistorder i1* %zf.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg2, { 0, 2, 1 }
  uselistorder i64 %arg1, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1e9b, { 1, 3, 2, 0 }
}

define i32 @fsm_func_table(i32 %event, i32 %state) local_unnamed_addr {
dec_label_pc_1ec6:
  %state_handlers_-56 = alloca [4 x i32 (i32)*], align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !498
  %1 = icmp ult i32 %state, 4
  %2 = call i64 @__readfsqword(i64 40)
  %3 = icmp eq i64 %0, %2
  br i1 %1, label %dec_label_pc_1f11, label %dec_label_pc_1f2f, !insn.addr !499

dec_label_pc_1f11:                                ; preds = %dec_label_pc_1ec6
  %4 = icmp eq i1 %3, false, !insn.addr !500
  br i1 %4, label %dec_label_pc_1f3f, label %dec_label_pc_1f21, !insn.addr !500

dec_label_pc_1f21:                                ; preds = %dec_label_pc_1f11
  %5 = zext i32 %state to i64
  %6 = ptrtoint [4 x i32 (i32)*]* %state_handlers_-56 to i64, !insn.addr !501
  %sext = mul i64 %5, 4294967296
  %7 = ashr exact i64 %sext, 29, !insn.addr !502
  %8 = add nsw i64 %7, 8, !insn.addr !502
  %9 = add i64 %8, %6, !insn.addr !502
  %10 = inttoptr i64 %9 to i64*, !insn.addr !502
  %11 = load i64, i64* %10, align 8, !insn.addr !502
  %12 = trunc i64 %11 to i32, !insn.addr !503
  ret i32 %12, !insn.addr !503

dec_label_pc_1f2f:                                ; preds = %dec_label_pc_1ec6
  br i1 %3, label %dec_label_pc_1f44, label %dec_label_pc_1f3f, !insn.addr !504

dec_label_pc_1f3f:                                ; preds = %dec_label_pc_1f2f, %dec_label_pc_1f11
  call void @__stack_chk_fail(), !insn.addr !505
  br label %dec_label_pc_1f44, !insn.addr !505

dec_label_pc_1f44:                                ; preds = %dec_label_pc_1f3f, %dec_label_pc_1f2f
  ret i32 3, !insn.addr !506

; uselistorder directives
  uselistorder i32 3, { 1, 4, 5, 10, 6, 7, 2, 8, 3, 0, 9 }
  uselistorder i64 8, { 6, 7, 0, 4, 1, 2, 3, 5 }
  uselistorder i1 false, { 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0, 3, 4, 1, 5, 2, 7, 6 }
}

define i32 @computed_goto(i32* %labels, i32 %idx) local_unnamed_addr {
dec_label_pc_1f4e:
  %merge.reg2mem = alloca i32, !insn.addr !507
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !508
  %1 = icmp ult i32 %idx, 4
  store i32 -1, i32* %merge.reg2mem, !insn.addr !509
  br i1 %1, label %dec_label_pc_1f9c, label %dec_label_pc_1fca, !insn.addr !509

dec_label_pc_1f9c:                                ; preds = %dec_label_pc_1fca, %dec_label_pc_1fda, %dec_label_pc_1f4e
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !510

dec_label_pc_1fca:                                ; preds = %dec_label_pc_1f4e
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !511
  %3 = icmp eq i64 %0, %2, !insn.addr !511
  store i32 -1, i32* %merge.reg2mem, !insn.addr !512
  br i1 %3, label %dec_label_pc_1f9c, label %dec_label_pc_1fda, !insn.addr !512

dec_label_pc_1fda:                                ; preds = %dec_label_pc_1fca
  call void @__stack_chk_fail(), !insn.addr !513
  store i32 ptrtoint (i32* @0 to i32), i32* %merge.reg2mem, !insn.addr !513
  br label %dec_label_pc_1f9c, !insn.addr !513

; uselistorder directives
  uselistorder i32* %merge.reg2mem, { 1, 2, 0, 3 }
  uselistorder i32 -1, { 0, 1, 6, 3, 2, 7, 9, 8, 4, 5, 10 }
  uselistorder label %dec_label_pc_1f9c, { 1, 0, 2 }
}

define i64 @obfuscated_cf(i64 %arg1) local_unnamed_addr {
dec_label_pc_1fe4:
  %0 = mul i64 %arg1, 2, !insn.addr !514
  %1 = and i64 %0, 4294967294, !insn.addr !514
  ret i64 %1, !insn.addr !515
}

define i64 @opaque_predicate(i64 %arg1) local_unnamed_addr {
dec_label_pc_1fec:
  %0 = mul i64 %arg1, 2, !insn.addr !516
  %1 = and i64 %0, 4294967294, !insn.addr !516
  ret i64 %1, !insn.addr !517

; uselistorder directives
  uselistorder i64 4294967294, { 2, 3, 4, 0, 14, 5, 6, 7, 8, 1, 9, 10, 11, 12, 13 }
}

define i64 @overlapped_code(i64 %arg1) local_unnamed_addr {
dec_label_pc_1ff4:
  %0 = urem i64 %arg1, 2
  %1 = icmp eq i64 %0, 0, !insn.addr !518
  br i1 %1, label %dec_label_pc_2004, label %dec_label_pc_1ffe, !insn.addr !519

dec_label_pc_1ffe:                                ; preds = %dec_label_pc_1ff4
  %2 = mul i64 %arg1, 3, !insn.addr !520
  %3 = add i64 %2, 1, !insn.addr !521
  %4 = and i64 %3, 4294967295, !insn.addr !521
  ret i64 %4, !insn.addr !522

dec_label_pc_2004:                                ; preds = %dec_label_pc_1ff4
  %5 = and i64 %arg1, 4294967295, !insn.addr !523
  %6 = trunc i64 %arg1 to i32, !insn.addr !524
  %7 = ashr i32 %6, 31, !insn.addr !524
  %8 = zext i32 %7 to i64, !insn.addr !525
  %9 = mul i64 %8, 4294967296, !insn.addr !525
  %10 = or i64 %9, %5, !insn.addr !525
  %11 = sdiv i64 %10, 2, !insn.addr !525
  %12 = and i64 %11, 4294967295, !insn.addr !525
  ret i64 %12, !insn.addr !526

; uselistorder directives
  uselistorder i32 31, { 0, 3, 4, 5, 1, 2 }
  uselistorder i64 3, { 4, 0, 2, 1, 5, 6, 3 }
  uselistorder i64 2, { 19, 14, 3, 4, 0, 5, 1, 20, 18, 15, 21, 6, 7, 16, 8, 9, 17, 10, 2, 11, 12, 13 }
  uselistorder i64 %arg1, { 1, 3, 2, 0 }
}

define void @test_control_flow_l3() local_unnamed_addr {
dec_label_pc_200d:
  %stack_var_-32 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !527
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_3464 to i8*)), !insn.addr !528
  %2 = call i32 @non_local_jump(i32 5), !insn.addr !529
  %3 = zext i32 %2 to i64, !insn.addr !530
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3488, i64 0, i64 0), i64 %3), !insn.addr !531
  %5 = call i32 @non_local_jump(i32 -5), !insn.addr !532
  %6 = zext i32 %5 to i64, !insn.addr !533
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3488, i64 0, i64 0), i64 %6), !insn.addr !534
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_34a7, i64 0, i64 0), i64 10), !insn.addr !535
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_34a7, i64 0, i64 0), i64 4294967295), !insn.addr !536
  %10 = call i32 @large_jump_table(i32 0, i32 10, i32 5), !insn.addr !537
  %11 = zext i32 %10 to i64, !insn.addr !538
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_34c5, i64 0, i64 0), i64 %11), !insn.addr !539
  %13 = call i32 @conditional_func_ptr(i32 0, i32 5), !insn.addr !540
  %14 = zext i32 %13 to i64, !insn.addr !541
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_34e6, i64 0, i64 0), i64 %14), !insn.addr !542
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_350b, i64 0, i64 0), i64 1), !insn.addr !543
  %17 = call i32 @fsm_func_table(i32 2, i32 1), !insn.addr !544
  %18 = zext i32 %17 to i64, !insn.addr !545
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3529, i64 0, i64 0), i64 %18), !insn.addr !546
  store i64 4294967296, i64* %stack_var_-32, align 8, !insn.addr !547
  %20 = bitcast i64* %stack_var_-32 to i32*, !insn.addr !548
  %21 = call i32 @computed_goto(i32* nonnull %20, i32 2), !insn.addr !548
  %22 = zext i32 %21 to i64, !insn.addr !549
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3548, i64 0, i64 0), i64 %22), !insn.addr !550
  %24 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3566, i64 0, i64 0), i64 10), !insn.addr !551
  %25 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3584, i64 0, i64 0), i64 10), !insn.addr !552
  %26 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_35a5, i64 0, i64 0), i64 16), !insn.addr !553
  %27 = call i64 @__readfsqword(i64 40), !insn.addr !554
  %28 = icmp eq i64 %0, %27, !insn.addr !554
  br i1 %28, label %dec_label_pc_21bd, label %dec_label_pc_21b8, !insn.addr !555

dec_label_pc_21b8:                                ; preds = %dec_label_pc_200d
  call void @__stack_chk_fail(), !insn.addr !556
  br label %dec_label_pc_21bd, !insn.addr !556

dec_label_pc_21bd:                                ; preds = %dec_label_pc_21b8, %dec_label_pc_200d
  ret void, !insn.addr !557

; uselistorder directives
  uselistorder void ()* @__stack_chk_fail, { 6, 3, 4, 5, 1, 7, 0, 2, 8 }
  uselistorder i64 16, { 2, 0, 1, 3 }
  uselistorder i64 4294967296, { 16, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 15, 17, 10, 11, 12, 13, 14 }
  uselistorder i32 2, { 8, 9, 10, 7, 11, 1, 12, 2, 13, 4, 6, 14, 3, 0, 15, 16, 5 }
  uselistorder i64 1, { 22, 7, 0, 24, 8, 9, 10, 11, 12, 13, 14, 15, 25, 23, 16, 1, 2, 3, 17, 4, 26, 18, 19, 20, 21, 5, 6 }
  uselistorder i32 0, { 21, 22, 29, 19, 42, 30, 43, 44, 23, 24, 25, 0, 12, 45, 1, 13, 2, 3, 4, 14, 46, 31, 32, 5, 33, 34, 6, 7, 15, 26, 27, 47, 48, 49, 50, 8, 17, 9, 16, 18, 35, 36, 37, 38, 20, 39, 10, 40, 11, 41, 28 }
  uselistorder i64 4294967295, { 10, 11, 13, 12, 14, 15, 0, 16, 17, 18, 20, 19, 8, 21, 22, 6, 9, 23, 24, 25, 26, 27, 29, 28, 30, 31, 32, 1, 33, 2, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 5, 7, 51, 3, 4, 52, 53, 54, 55, 56, 57, 58, 59 }
  uselistorder i64 10, { 5, 6, 7, 8, 3, 9, 10, 1, 2, 4, 0 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 57 }
  uselistorder i32 (i32)* @non_local_jump, { 1, 0 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
  uselistorder i64 0, { 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 0, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 59, 60, 88, 89, 1, 2, 90, 3, 4, 5, 6, 7, 91, 92, 8, 9, 10, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 115, 113, 114, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 25, 21, 22, 138, 24, 23, 139, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 137 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_21c4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !558

; uselistorder directives
  uselistorder i32 1, { 4, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 166, 5, 167, 102, 87, 8, 7, 6, 103, 9, 169, 168, 10, 12, 11, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 174, 173, 172, 171, 170, 15, 14, 13, 3, 175, 122, 124, 123, 85, 21, 20, 19, 18, 17, 16, 2, 24, 23, 22, 26, 25, 1, 29, 28, 27, 33, 32, 31, 30, 125, 37, 36, 35, 34, 126, 38, 179, 127, 40, 39, 176, 45, 44, 43, 42, 41, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 48, 47, 46, 156, 49, 84, 52, 51, 50, 177, 54, 53, 57, 56, 55, 59, 58, 157, 63, 62, 61, 60, 66, 65, 64, 88, 68, 67, 69, 70, 86, 71, 158, 159, 160, 161, 72, 162, 163, 73, 164, 74, 76, 75, 165, 77, 78, 79, 82, 81, 80, 0, 178, 83 }
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

declare void @__asm_rep_stosd_memset(i8*, i32, i64) local_unnamed_addr

declare void @__asm_rep_movsd_memcpy(i8*, i8*, i64) local_unnamed_addr

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
!12 = !{i64 4327}
!13 = !{i64 4334}
!14 = !{i64 4341}
!15 = !{i64 4349}
!16 = !{i64 4383}
!17 = !{i64 4389}
!18 = !{i64 4440}
!19 = !{i64 4504}
!20 = !{i64 4516}
!21 = !{i64 4523}
!22 = !{i64 4526}
!23 = !{i64 4537}
!24 = !{i64 4539}
!25 = !{i64 4546}
!26 = !{i64 4551}
!27 = !{i64 4556}
!28 = !{i64 4564}
!29 = !{i64 4568}
!30 = !{i64 4580}
!31 = !{i64 4585}
!32 = !{i64 4597}
!33 = !{i64 4599}
!34 = !{i64 4602}
!35 = !{i64 4606}
!36 = !{i64 4611}
!37 = !{i64 4614}
!38 = !{i64 4619}
!39 = !{i64 4622}
!40 = !{i64 4627}
!41 = !{i64 4630}
!42 = !{i64 4637}
!43 = !{i64 4639}
!44 = !{i64 4646}
!45 = !{i64 4649}
!46 = !{i64 4650}
!47 = !{i64 4659}
!48 = !{i64 4661}
!49 = !{i64 4656}
!50 = !{i64 4654}
!51 = !{i64 4663}
!52 = !{i64 4664}
!53 = !{i64 4666}
!54 = !{i64 4672}
!55 = !{i64 4673}
!56 = !{i64 4681}
!57 = !{i64 4683}
!58 = !{i64 4679}
!59 = !{i64 4677}
!60 = !{i64 4685}
!61 = !{i64 4686}
!62 = !{i64 4690}
!63 = !{i64 4697}
!64 = !{i64 4699}
!65 = !{i64 4706}
!66 = !{i64 4708}
!67 = !{i64 4715}
!68 = !{i64 4717}
!69 = !{i64 4726}
!70 = !{i64 4728}
!71 = !{i64 4737}
!72 = !{i64 4739}
!73 = !{i64 4746}
!74 = !{i64 4751}
!75 = !{i64 4752}
!76 = !{i64 4758}
!77 = !{i64 4761}
!78 = !{i64 4763}
!79 = !{i64 4766}
!80 = !{i64 4773}
!81 = !{i64 4789}
!82 = !{i64 4796}
!83 = !{i64 4805}
!84 = !{i64 4810}
!85 = !{i64 4813}
!86 = !{i64 4815}
!87 = !{i64 4817}
!88 = !{i64 4822}
!89 = !{i64 4824}
!90 = !{i64 4830}
!91 = !{i64 4837}
!92 = !{i64 4839}
!93 = !{i64 4842}
!94 = !{i64 4843}
!95 = !{i64 4849}
!96 = !{i64 4851}
!97 = !{i64 4847}
!98 = !{i64 4853}
!99 = !{i64 4855}
!100 = !{i64 4857}
!101 = !{i64 4859}
!102 = !{i64 4862}
!103 = !{i64 4863}
!104 = !{i64 4869}
!105 = !{i64 4871}
!106 = !{i64 4878}
!107 = !{i64 4880}
!108 = !{i64 4887}
!109 = !{i64 4889}
!110 = !{i64 4896}
!111 = !{i64 4898}
!112 = !{i64 4902}
!113 = !{i64 4905}
!114 = !{i64 4908}
!115 = !{i64 4911}
!116 = !{i64 4912}
!117 = !{i64 4921}
!118 = !{i64 4935}
!119 = !{i64 4948}
!120 = !{i64 4951}
!121 = !{i64 4952}
!122 = !{i64 4959}
!123 = !{i64 4962}
!124 = !{i64 4964}
!125 = !{i64 4966}
!126 = !{i64 4969}
!127 = !{i64 4970}
!128 = !{i64 4977}
!129 = !{i64 4980}
!130 = !{i64 4982}
!131 = !{i64 4991}
!132 = !{i64 4995}
!133 = !{i64 5003}
!134 = !{i64 5011}
!135 = !{i64 5016}
!136 = !{i64 5029}
!137 = !{i64 5030}
!138 = !{i64 5034}
!139 = !{i64 5052}
!140 = !{i64 5062}
!141 = !{i64 5065}
!142 = !{i64 5069}
!143 = !{i64 5071}
!144 = !{i64 5072}
!145 = !{i64 5083}
!146 = !{i64 5085}
!147 = !{i64 5088}
!148 = !{i64 5095}
!149 = !{i64 5096}
!150 = !{i64 5109}
!151 = !{i64 5111}
!152 = !{i64 5100}
!153 = !{i64 5113}
!154 = !{i64 5114}
!155 = !{i64 5116}
!156 = !{i64 5120}
!157 = !{i64 5127}
!158 = !{i64 5130}
!159 = !{i64 5131}
!160 = !{i64 5135}
!161 = !{i64 5140}
!162 = !{i64 5145}
!163 = !{i64 5146}
!164 = !{i64 5149}
!165 = !{i64 5151}
!166 = !{i64 5153}
!167 = !{i64 5155}
!168 = !{i64 5158}
!169 = !{i64 5159}
!170 = !{i64 5171}
!171 = !{i64 5176}
!172 = !{i64 5178}
!173 = !{i64 5180}
!174 = !{i64 5184}
!175 = !{i64 5185}
!176 = !{i64 5193}
!177 = !{i64 5225}
!178 = !{i64 5230}
!179 = !{i64 5250}
!180 = !{i64 5255}
!181 = !{i64 5258}
!182 = !{i64 5260}
!183 = !{i64 5263}
!184 = !{i64 5267}
!185 = !{i64 5278}
!186 = !{i64 5287}
!187 = !{i64 5289}
!188 = !{i64 5301}
!189 = !{i64 5302}
!190 = !{i64 5316}
!191 = !{i64 5318}
!192 = !{i64 5325}
!193 = !{i64 5332}
!194 = !{i64 5333}
!195 = !{i64 5337}
!196 = !{i64 5339}
!197 = !{i64 5341}
!198 = !{i64 5344}
!199 = !{i64 5347}
!200 = !{i64 5348}
!201 = !{i64 5358}
!202 = !{i64 5360}
!203 = !{i64 5367}
!204 = !{i64 5371}
!205 = !{i64 5375}
!206 = !{i64 5380}
!207 = !{i64 5385}
!208 = !{i64 5389}
!209 = !{i64 5392}
!210 = !{i64 5412}
!211 = !{i64 5436}
!212 = !{i64 5456}
!213 = !{i64 5483}
!214 = !{i64 5503}
!215 = !{i64 5527}
!216 = !{i64 5547}
!217 = !{i64 5567}
!218 = !{i64 5591}
!219 = !{i64 5615}
!220 = !{i64 5639}
!221 = !{i64 5663}
!222 = !{i64 5687}
!223 = !{i64 5711}
!224 = !{i64 5732}
!225 = !{i64 5756}
!226 = !{i64 5773}
!227 = !{i64 5787}
!228 = !{i64 5797}
!229 = !{i64 5814}
!230 = !{i64 5818}
!231 = !{i64 5835}
!232 = !{i64 5849}
!233 = !{i64 5864}
!234 = !{i64 5881}
!235 = !{i64 5885}
!236 = !{i64 5895}
!237 = !{i64 5908}
!238 = !{i64 5912}
!239 = !{i64 5922}
!240 = !{i64 5942}
!241 = !{i64 5946}
!242 = !{i64 5963}
!243 = !{i64 5977}
!244 = !{i64 5997}
!245 = !{i64 6024}
!246 = !{i64 6048}
!247 = !{i64 6068}
!248 = !{i64 6089}
!249 = !{i64 6094}
!250 = !{i64 6110}
!251 = !{i64 6136}
!252 = !{i64 6138}
!253 = !{i64 6141}
!254 = !{i64 6143}
!255 = !{i64 6147}
!256 = !{i64 6149}
!257 = !{i64 6152}
!258 = !{i64 6154}
!259 = !{i64 6156}
!260 = !{i64 6159}
!261 = !{i64 6163}
!262 = !{i64 6165}
!263 = !{i64 6167}
!264 = !{i64 6171}
!265 = !{i64 6174}
!266 = !{i64 6184}
!267 = !{i64 6193}
!268 = !{i64 6195}
!269 = !{i64 6204}
!270 = !{i64 6205}
!271 = !{i64 6213}
!272 = !{i64 6209}
!273 = !{i64 6215}
!274 = !{i64 6217}
!275 = !{i64 6219}
!276 = !{i64 6224}
!277 = !{i64 6226}
!278 = !{i64 6232}
!279 = !{i64 6233}
!280 = !{i64 6240}
!281 = !{i64 6242}
!282 = !{i64 6244}
!283 = !{i64 6250}
!284 = !{i64 6252}
!285 = !{i64 6256}
!286 = !{i64 6258}
!287 = !{i64 6261}
!288 = !{i64 6267}
!289 = !{i64 6272}
!290 = !{i64 6274}
!291 = !{i64 6276}
!292 = !{i64 6278}
!293 = !{i64 6280}
!294 = !{i64 6285}
!295 = !{i64 6286}
!296 = !{i64 6301}
!297 = !{i64 6313}
!298 = !{i64 6321}
!299 = !{i64 6307}
!300 = !{i64 6315}
!301 = !{i64 6337}
!302 = !{i64 6426}
!303 = !{i64 6430}
!304 = !{i64 6434}
!305 = !{i64 6436}
!306 = !{i64 6440}
!307 = !{i64 6444}
!308 = !{i64 6340}
!309 = !{i64 6346}
!310 = !{i64 6350}
!311 = !{i64 6353}
!312 = !{i64 6359}
!313 = !{i64 6363}
!314 = !{i64 6366}
!315 = !{i64 6372}
!316 = !{i64 6376}
!317 = !{i64 6379}
!318 = !{i64 6385}
!319 = !{i64 6389}
!320 = !{i64 6392}
!321 = !{i64 6398}
!322 = !{i64 6402}
!323 = !{i64 6405}
!324 = !{i64 6407}
!325 = !{i64 6411}
!326 = !{i64 6415}
!327 = !{i64 6418}
!328 = !{i64 6420}
!329 = !{i64 6422}
!330 = !{i64 6424}
!331 = !{i64 6456}
!332 = !{i64 6457}
!333 = !{i64 6472}
!334 = !{i64 6479}
!335 = !{i64 6465}
!336 = !{i64 6468}
!337 = !{i64 6477}
!338 = !{i64 6483}
!339 = !{i64 6485}
!340 = !{i64 6487}
!341 = !{i64 6488}
!342 = !{i64 6499}
!343 = !{i64 6501}
!344 = !{i64 6507}
!345 = !{i64 6512}
!346 = !{i64 6519}
!347 = !{i64 6520}
!348 = !{i64 6528}
!349 = !{i64 6530}
!350 = !{i64 6524}
!351 = !{i64 6532}
!352 = !{i64 6534}
!353 = !{i64 6537}
!354 = !{i64 6539}
!355 = !{i64 6540}
!356 = !{i64 6549}
!357 = !{i64 6551}
!358 = !{i64 6554}
!359 = !{i64 6558}
!360 = !{i64 6559}
!361 = !{i64 6570}
!362 = !{i64 6572}
!363 = !{i64 6574}
!364 = !{i64 6576}
!365 = !{i64 6578}
!366 = !{i64 6579}
!367 = !{i64 6581}
!368 = !{i64 6584}
!369 = !{i64 6586}
!370 = !{i64 6588}
!371 = !{i64 6593}
!372 = !{i64 6596}
!373 = !{i64 6599}
!374 = !{i64 6601}
!375 = !{i64 6603}
!376 = !{i64 6604}
!377 = !{i64 6607}
!378 = !{i64 6609}
!379 = !{i64 6619}
!380 = !{i64 6639}
!381 = !{i64 6655}
!382 = !{i64 6686}
!383 = !{i64 6702}
!384 = !{i64 6625}
!385 = !{i64 6636}
!386 = !{i64 6704}
!387 = !{i64 6714}
!388 = !{i64 6730}
!389 = !{i64 6732}
!390 = !{i64 6744}
!391 = !{i64 6749}
!392 = !{i64 6752}
!393 = !{i64 6753}
!394 = !{i64 6773}
!395 = !{i64 6780}
!396 = !{i64 6787}
!397 = !{i64 6793}
!398 = !{i64 6809}
!399 = !{i64 6862}
!400 = !{i64 6878}
!401 = !{i64 6888}
!402 = !{i64 6905}
!403 = !{i64 6909}
!404 = !{i64 6919}
!405 = !{i64 6934}
!406 = !{i64 6948}
!407 = !{i64 6966}
!408 = !{i64 6986}
!409 = !{i64 7013}
!410 = !{i64 7033}
!411 = !{i64 7063}
!412 = !{i64 7120}
!413 = !{i64 7127}
!414 = !{i64 7137}
!415 = !{i64 7154}
!416 = !{i64 7158}
!417 = !{i64 7175}
!418 = !{i64 7189}
!419 = !{i64 7206}
!420 = !{i64 7220}
!421 = !{i64 7230}
!422 = !{i64 7245}
!423 = !{i64 7259}
!424 = !{i64 7276}
!425 = !{i64 7290}
!426 = !{i64 7314}
!427 = !{i64 7329}
!428 = !{i64 7346}
!429 = !{i64 7350}
!430 = !{i64 7363}
!431 = !{i64 7380}
!432 = !{i64 7384}
!433 = !{i64 7396}
!434 = !{i64 7409}
!435 = !{i64 7413}
!436 = !{i64 7428}
!437 = !{i64 7441}
!438 = !{i64 7445}
!439 = !{i64 7463}
!440 = !{i64 7481}
!441 = !{i64 7498}
!442 = !{i64 7502}
!443 = !{i64 7512}
!444 = !{i64 7521}
!445 = !{i64 7523}
!446 = !{i64 7538}
!447 = !{i64 7539}
!448 = !{i64 7558}
!449 = !{i64 7567}
!450 = !{i64 7569}
!451 = !{i64 7571}
!452 = !{i64 7581}
!453 = !{i64 7587}
!454 = !{i64 7594}
!455 = !{i64 7608}
!456 = !{i64 7620}
!457 = !{i64 7621}
!458 = !{i64 7628}
!459 = !{i64 7630}
!460 = !{i64 7640}
!461 = !{i64 7642}
!462 = !{i64 7645}
!463 = !{i64 7663}
!464 = !{i64 7696}
!465 = !{i64 7701}
!466 = !{i64 7717}
!467 = !{i64 7650}
!468 = !{i64 7654}
!469 = !{i64 7719}
!470 = !{i64 7734}
!471 = !{i64 7750}
!472 = !{i64 7752}
!473 = !{i64 7764}
!474 = !{i64 7765}
!475 = !{i64 7780}
!476 = !{i64 7782}
!477 = !{i64 7784}
!478 = !{i64 7800}
!479 = !{i64 7804}
!480 = !{i64 7806}
!481 = !{i64 7810}
!482 = !{i64 7812}
!483 = !{i64 7815}
!484 = !{i64 7817}
!485 = !{i64 7830}
!486 = !{i64 7833}
!487 = !{i64 7840}
!488 = !{i64 7843}
!489 = !{i64 7845}
!490 = !{i64 7848}
!491 = !{i64 7849}
!492 = !{i64 7852}
!493 = !{i64 7854}
!494 = !{i64 7862}
!495 = !{i64 7866}
!496 = !{i64 7868}
!497 = !{i64 7871}
!498 = !{i64 7886}
!499 = !{i64 7951}
!500 = !{i64 7967}
!501 = !{i64 7882}
!502 = !{i64 7972}
!503 = !{i64 7981}
!504 = !{i64 7997}
!505 = !{i64 7999}
!506 = !{i64 8013}
!507 = !{i64 8014}
!508 = !{i64 8022}
!509 = !{i64 8090}
!510 = !{i64 8095}
!511 = !{i64 8143}
!512 = !{i64 8152}
!513 = !{i64 8154}
!514 = !{i64 8168}
!515 = !{i64 8171}
!516 = !{i64 8176}
!517 = !{i64 8179}
!518 = !{i64 8186}
!519 = !{i64 8188}
!520 = !{i64 8190}
!521 = !{i64 8193}
!522 = !{i64 8195}
!523 = !{i64 8184}
!524 = !{i64 8201}
!525 = !{i64 8202}
!526 = !{i64 8204}
!527 = !{i64 8228}
!528 = !{i64 8244}
!529 = !{i64 8254}
!530 = !{i64 8267}
!531 = !{i64 8271}
!532 = !{i64 8281}
!533 = !{i64 8301}
!534 = !{i64 8305}
!535 = !{i64 8325}
!536 = !{i64 8343}
!537 = !{i64 8360}
!538 = !{i64 8377}
!539 = !{i64 8381}
!540 = !{i64 8393}
!541 = !{i64 8410}
!542 = !{i64 8414}
!543 = !{i64 8438}
!544 = !{i64 8453}
!545 = !{i64 8470}
!546 = !{i64 8474}
!547 = !{i64 8498}
!548 = !{i64 8518}
!549 = !{i64 8535}
!550 = !{i64 8539}
!551 = !{i64 8563}
!552 = !{i64 8587}
!553 = !{i64 8611}
!554 = !{i64 8621}
!555 = !{i64 8630}
!556 = !{i64 8632}
!557 = !{i64 8642}
!558 = !{i64 8656}
