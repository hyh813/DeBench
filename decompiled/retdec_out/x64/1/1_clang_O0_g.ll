source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@global_var_6050 = global i64 0
@global_var_3080 = local_unnamed_addr constant i64 85899345930
@global_var_3088 = local_unnamed_addr constant i64 171798691870
@global_var_3090 = local_unnamed_addr constant i64 50
@global_var_3109 = constant [31 x i8] c"CF-L1-01 (sequential_ops): %d\0A\00"
@global_var_3128 = constant [26 x i8] c"CF-L1-02 (single_if): %d\0A\00"
@global_var_3142 = constant [24 x i8] c"CF-L1-03 (if_else): %d\0A\00"
@global_var_315a = constant [28 x i8] c"CF-L1-04 (nested_if_2): %d\0A\00"
@global_var_3176 = constant [31 x i8] c"CF-L1-05 (nested_if_deep): %d\0A\00"
@global_var_3195 = constant [32 x i8] c"CF-L1-06 (if_elseif_chain): %d\0A\00"
@global_var_31b5 = constant [31 x i8] c"CF-L1-07 (if_elseif_long): %d\0A\00"
@global_var_31d4 = constant [29 x i8] c"CF-L1-08 (switch_small): %d\0A\00"
@global_var_31f1 = constant [29 x i8] c"CF-L1-09 (switch_large): %d\0A\00"
@global_var_320e = constant [31 x i8] c"CF-L1-10 (switch_default): %d\0A\00"
@global_var_322d = constant [35 x i8] c"CF-L1-11 (switch_fallthrough): %d\0A\00"
@global_var_3250 = constant [31 x i8] c"CF-L1-12 (loop_for_fixed): %d\0A\00"
@global_var_326f = constant [27 x i8] c"CF-L1-13 (loop_while): %d\0A\00"
@global_var_328a = constant [29 x i8] c"CF-L1-14 (loop_dowhile): %d\0A\00"
@global_var_32a7 = constant [28 x i8] c"CF-L1-15 (loop_nested): %d\0A\00"
@global_var_32c3 = constant [27 x i8] c"CF-L1-16 (loop_break): %d\0A\00"
@global_var_32de = constant [30 x i8] c"CF-L1-17 (loop_continue): %d\0A\00"
@global_var_32fc = constant [29 x i8] c"CF-L1-18 (goto_forward): %d\0A\00"
@global_var_3319 = constant [30 x i8] c"CF-L1-19 (goto_backward): %d\0A\00"
@global_var_3337 = constant [27 x i8] c"CF-L1-20 (ternary_op): %d\0A\00"
@global_var_30a0 = constant i64 8589934593
@global_var_5d40 = local_unnamed_addr global i64 8848
@global_var_5d48 = local_unnamed_addr global i64 8864
@global_var_5d50 = local_unnamed_addr global i64 8352
@global_var_3377 = constant [32 x i8] c"CF-L2-01 (loop_multi_exit): %d\0A\00"
@global_var_3397 = constant [30 x i8] c"CF-L2-02 (infinite_loop): %d\0A\00"
@global_var_33b5 = constant [29 x i8] c"CF-L2-03 (multi_return): %d\0A\00"
@global_var_33d2 = constant [35 x i8] c"CF-L2-04 (conditional_return): %d\0A\00"
@global_var_36b8 = local_unnamed_addr constant i64 17179869187
@global_var_36c0 = local_unnamed_addr constant i64 25769803781
@global_var_36c8 = local_unnamed_addr constant i64 34359738375
@global_var_33f5 = constant [29 x i8] c"CF-L2-05 (duffs_device): %d\0A\00"
@global_var_3412 = constant [34 x i8] c"CF-L2-06 (loop_complex_cond): %d\0A\00"
@global_var_3434 = constant [32 x i8] c"CF-L2-07 (loop_modify_var): %d\0A\00"
@global_var_3454 = constant [36 x i8] c"CF-L2-08 (loop_external_state): %d\0A\00"
@global_var_3478 = constant [36 x i8] c"CF-L2-09 (recursion_factorial): %d\0A\00"
@global_var_349c = constant [31 x i8] c"CF-L2-10 (tail_recursion): %d\0A\00"
@global_var_34bb = constant [35 x i8] c"CF-L2-11 (indirect_recursion): %d\0A\00"
@global_var_34de = constant [30 x i8] c"CF-L2-12 (call_func_ptr): %d\0A\00"
@global_var_34fc = constant [36 x i8] c"CF-L2-13 (call_func_ptr_array): %d\0A\00"
@global_var_30d0 = local_unnamed_addr constant i64 8589934593
@global_var_30d8 = local_unnamed_addr constant i64 17179869187
@global_var_30e0 = local_unnamed_addr constant i64 2323080314995343365
@global_var_3520 = constant [38 x i8] c"CF-L2-15 (process_with_callback): %d\0A\00"
@global_var_5d60 = global i64 9984
@global_var_5db0 = local_unnamed_addr global i64 10816
@global_var_5db8 = local_unnamed_addr global i64 10848
@global_var_5dc0 = local_unnamed_addr global i64 10912
@global_var_5dc8 = local_unnamed_addr global i64 10928
@global_var_5dd0 = local_unnamed_addr global i64 11065
@global_var_5dd8 = local_unnamed_addr global i64 11077
@global_var_5de0 = local_unnamed_addr global i64 11089
@global_var_5de8 = local_unnamed_addr global i64 11101
@global_var_356b = constant [31 x i8] c"CF-L3-01 (non_local_jump): %d\0A\00"
@global_var_358a = constant [30 x i8] c"CF-L3-02 (cpp_exception): %d\0A\00"
@global_var_35a8 = constant [33 x i8] c"CF-L3-03 (large_jump_table): %d\0A\00"
@global_var_35c9 = constant [37 x i8] c"CF-L3-04 (conditional_func_ptr): %d\0A\00"
@global_var_35ee = constant [30 x i8] c"CF-L3-05 (state_machine): %d\0A\00"
@global_var_360c = constant [31 x i8] c"CF-L3-06 (fsm_func_table): %d\0A\00"
@global_var_36d0 = local_unnamed_addr constant i64 4294967296
@global_var_36d8 = local_unnamed_addr constant i64 12884901890
@global_var_362b = constant [30 x i8] c"CF-L3-07 (computed_goto): %d\0A\00"
@global_var_3649 = constant [30 x i8] c"CF-L3-08 (obfuscated_cf): %d\0A\00"
@global_var_3667 = constant [33 x i8] c"CF-L3-09 (opaque_predicate): %d\0A\00"
@global_var_3688 = constant [32 x i8] c"CF-L3-10 (overlapped_code): %d\0A\00"
@0 = external global i32
@global_var_3010 = constant i32 -7174
@global_var_3020 = constant i32 -7076
@1 = internal constant [37 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\9F\BA\E7\A1\80\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\0A\00"
@global_var_30e4 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @1, i64 0, i64 0)
@global_var_3039 = constant i32 -1325400092
@global_var_3e8 = global i1 false
@global_var_3048 = constant i32 -4614
@2 = internal constant [37 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\AB\98\E7\BA\A7\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\0A\00"
@global_var_3352 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @2, i64 0, i64 0)
@global_var_36b0 = local_unnamed_addr constant i32 1
@global_var_6060 = global i32 0
@global_var_3068 = constant i32 -1865
@3 = internal constant [37 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\9E\81\E7\AB\AF\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\0A\00"
@global_var_3546 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @3, i64 0, i64 0)

define i64 @_init() local_unnamed_addr {
dec_label_pc_1000:
  %rax.0.reg2mem = alloca i64, !insn.addr !0
  %0 = load i64, i64* inttoptr (i64 24544 to i64*), align 32, !insn.addr !1
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

define i32 @function_1030(i8* %format, ...) local_unnamed_addr {
dec_label_pc_1030:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i64* @function_1040(i64* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_1040:
  %0 = call i64* @memset(i64* %s, i32 %c, i32 %n), !insn.addr !7
  ret i64* %0, !insn.addr !7
}

define i32 @function_1050([1 x %__jmp_buf_tag] %env) local_unnamed_addr {
dec_label_pc_1050:
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] %env), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i64* @function_1060(i64* %dest, i64* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1060:
  %0 = call i64* @memcpy(i64* %dest, i64* %src, i32 %n), !insn.addr !9
  ret i64* %0, !insn.addr !9
}

define void @function_1070([1 x %__jmp_buf_tag] %env, i32 %val) local_unnamed_addr {
dec_label_pc_1070:
  call void @longjmp([1 x %__jmp_buf_tag] %env, i32 %val), !insn.addr !10
  ret void, !insn.addr !10
}

define void @function_1080(i64* %d) local_unnamed_addr {
dec_label_pc_1080:
  call void @__cxa_finalize(i64* %d), !insn.addr !11
  ret void, !insn.addr !11
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1090:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !12
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !12
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !12
  %3 = call i32 @__libc_start_main(i64 11696, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !12
  %4 = call i64 @__asm_hlt(), !insn.addr !13
  unreachable, !insn.addr !13
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_10c0:
  ret i64 ptrtoint (i64* @global_var_6050 to i64), !insn.addr !14
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_10f0:
  ret i64 0, !insn.addr !15
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1130:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* bitcast (i64* @global_var_6050 to i8*), align 8, !insn.addr !16
  %3 = icmp eq i8 %2, 0, !insn.addr !16
  %4 = icmp eq i1 %3, false, !insn.addr !17
  br i1 %4, label %dec_label_pc_1168, label %dec_label_pc_113d, !insn.addr !17

dec_label_pc_113d:                                ; preds = %dec_label_pc_1130
  %5 = load i64, i64* inttoptr (i64 24560 to i64*), align 16, !insn.addr !18
  %6 = icmp eq i64 %5, 0, !insn.addr !18
  br i1 %6, label %dec_label_pc_1157, label %dec_label_pc_114b, !insn.addr !19

dec_label_pc_114b:                                ; preds = %dec_label_pc_113d
  %7 = load i64, i64* inttoptr (i64 24648 to i64*), align 8, !insn.addr !20
  %8 = inttoptr i64 %7 to i64*, !insn.addr !21
  call void @__cxa_finalize(i64* %8), !insn.addr !21
  br label %dec_label_pc_1157, !insn.addr !21

dec_label_pc_1157:                                ; preds = %dec_label_pc_114b, %dec_label_pc_113d
  %9 = call i64 @deregister_tm_clones(), !insn.addr !22
  store i8 1, i8* bitcast (i64* @global_var_6050 to i8*), align 8, !insn.addr !23
  ret i64 %9, !insn.addr !24

dec_label_pc_1168:                                ; preds = %dec_label_pc_1130
  ret i64 %1, !insn.addr !25
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1170:
  %0 = call i64 @register_tm_clones(), !insn.addr !26
  ret i64 %0, !insn.addr !26
}

define i32 @sequential_ops(i32 %a, i32 %b, i32 %c) local_unnamed_addr {
dec_label_pc_1180:
  %0 = add i32 %b, %a, !insn.addr !27
  %1 = mul i32 %0, 2, !insn.addr !28
  %2 = sub i32 %1, %c, !insn.addr !29
  ret i32 %2, !insn.addr !30
}

define i32 @single_if(i32 %x) local_unnamed_addr {
dec_label_pc_11b0:
  %0 = icmp sgt i32 %x, 0, !insn.addr !31
  %1 = zext i1 %0 to i32
  %spec.select = shl i32 %x, %1
  ret i32 %spec.select, !insn.addr !32

; uselistorder directives
  uselistorder i32 %x, { 1, 0 }
}

define i32 @if_else(i32 %x) local_unnamed_addr {
dec_label_pc_11d0:
  %0 = icmp sgt i32 %x, 0, !insn.addr !33
  %. = zext i1 %0 to i32
  ret i32 %., !insn.addr !34
}

define i32 @nested_if_2(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_1200:
  %0 = icmp slt i32 %a, 1, !insn.addr !35
  br i1 %0, label %dec_label_pc_123e, label %dec_label_pc_1214, !insn.addr !35

dec_label_pc_1214:                                ; preds = %dec_label_pc_1200
  %1 = icmp sgt i32 %b, 0, !insn.addr !36
  %2 = select i1 %1, i32 %b, i32 0
  %spec.select = add i32 %2, %a
  ret i32 %spec.select

dec_label_pc_123e:                                ; preds = %dec_label_pc_1200
  ret i32 0, !insn.addr !37
}

define i32 @nested_if_deep(i32 %a, i32 %b, i32 %c, i32 %d, i32 %e) local_unnamed_addr {
dec_label_pc_1250:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !38
  %0 = icmp slt i32 %a, 1, !insn.addr !39
  store i32 0, i32* %stack_var_-12.0.reg2mem, !insn.addr !39
  br i1 %0, label %dec_label_pc_12d9, label %dec_label_pc_126e, !insn.addr !39

dec_label_pc_126e:                                ; preds = %dec_label_pc_1250
  %1 = icmp slt i32 %b, 1, !insn.addr !40
  store i32 1, i32* %stack_var_-12.0.reg2mem, !insn.addr !40
  br i1 %1, label %dec_label_pc_12d9, label %dec_label_pc_1278, !insn.addr !40

dec_label_pc_1278:                                ; preds = %dec_label_pc_126e
  %2 = icmp slt i32 %c, 1, !insn.addr !41
  store i32 2, i32* %stack_var_-12.0.reg2mem, !insn.addr !41
  br i1 %2, label %dec_label_pc_12d9, label %dec_label_pc_1282, !insn.addr !41

dec_label_pc_1282:                                ; preds = %dec_label_pc_1278
  %3 = icmp slt i32 %d, 1, !insn.addr !42
  store i32 3, i32* %stack_var_-12.0.reg2mem, !insn.addr !42
  br i1 %3, label %dec_label_pc_12d9, label %dec_label_pc_128c, !insn.addr !42

dec_label_pc_128c:                                ; preds = %dec_label_pc_1282
  %4 = icmp slt i32 %e, 1, !insn.addr !43
  %. = select i1 %4, i32 4, i32 5
  store i32 %., i32* %stack_var_-12.0.reg2mem, !insn.addr !44
  br label %dec_label_pc_12d9, !insn.addr !44

dec_label_pc_12d9:                                ; preds = %dec_label_pc_1250, %dec_label_pc_126e, %dec_label_pc_1278, %dec_label_pc_1282, %dec_label_pc_128c
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !45

; uselistorder directives
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 5, 4, 3, 2, 1 }
  uselistorder label %dec_label_pc_12d9, { 4, 3, 2, 1, 0 }
}

define i32 @if_elseif_chain(i32 %x) local_unnamed_addr {
dec_label_pc_12e0:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !46
  %0 = icmp eq i32 %x, 0, !insn.addr !47
  %1 = icmp eq i1 %0, false, !insn.addr !48
  store i32 10, i32* %stack_var_-12.0.reg2mem, !insn.addr !48
  br i1 %1, label %dec_label_pc_12fd, label %dec_label_pc_1330, !insn.addr !48

dec_label_pc_12fd:                                ; preds = %dec_label_pc_12e0
  %2 = icmp eq i32 %x, 1, !insn.addr !49
  %3 = icmp eq i1 %2, false, !insn.addr !50
  store i32 20, i32* %stack_var_-12.0.reg2mem, !insn.addr !50
  br i1 %3, label %dec_label_pc_1313, label %dec_label_pc_1330, !insn.addr !50

dec_label_pc_1313:                                ; preds = %dec_label_pc_12fd
  %4 = icmp eq i32 %x, 2, !insn.addr !51
  %5 = icmp eq i1 %4, false, !insn.addr !52
  %. = select i1 %5, i32 -1, i32 30
  store i32 %., i32* %stack_var_-12.0.reg2mem, !insn.addr !53
  br label %dec_label_pc_1330, !insn.addr !53

dec_label_pc_1330:                                ; preds = %dec_label_pc_1313, %dec_label_pc_12fd, %dec_label_pc_12e0
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !54
}

define i32 @if_elseif_long(i32 %x) local_unnamed_addr {
dec_label_pc_1340:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !55
  %0 = icmp eq i32 %x, 0, !insn.addr !56
  %1 = icmp eq i1 %0, false, !insn.addr !57
  store i32 100, i32* %stack_var_-12.0.reg2mem, !insn.addr !57
  br i1 %1, label %dec_label_pc_135d, label %dec_label_pc_13bc, !insn.addr !57

dec_label_pc_135d:                                ; preds = %dec_label_pc_1340
  %2 = icmp eq i32 %x, 1, !insn.addr !58
  %3 = icmp eq i1 %2, false, !insn.addr !59
  store i32 200, i32* %stack_var_-12.0.reg2mem, !insn.addr !59
  br i1 %3, label %dec_label_pc_1373, label %dec_label_pc_13bc, !insn.addr !59

dec_label_pc_1373:                                ; preds = %dec_label_pc_135d
  %4 = icmp eq i32 %x, 2, !insn.addr !60
  %5 = icmp eq i1 %4, false, !insn.addr !61
  store i32 300, i32* %stack_var_-12.0.reg2mem, !insn.addr !61
  br i1 %5, label %dec_label_pc_1389, label %dec_label_pc_13bc, !insn.addr !61

dec_label_pc_1389:                                ; preds = %dec_label_pc_1373
  %6 = icmp eq i32 %x, 3, !insn.addr !62
  %7 = icmp eq i1 %6, false, !insn.addr !63
  store i32 400, i32* %stack_var_-12.0.reg2mem, !insn.addr !63
  br i1 %7, label %dec_label_pc_139f, label %dec_label_pc_13bc, !insn.addr !63

dec_label_pc_139f:                                ; preds = %dec_label_pc_1389
  %8 = icmp eq i32 %x, 4, !insn.addr !64
  %9 = icmp eq i1 %8, false, !insn.addr !65
  %. = select i1 %9, i32 -1, i32 500
  store i32 %., i32* %stack_var_-12.0.reg2mem, !insn.addr !66
  br label %dec_label_pc_13bc, !insn.addr !66

dec_label_pc_13bc:                                ; preds = %dec_label_pc_139f, %dec_label_pc_1389, %dec_label_pc_1373, %dec_label_pc_135d, %dec_label_pc_1340
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !67
}

define i32 @switch_small(i32 %op) local_unnamed_addr {
dec_label_pc_13d0:
  %0 = icmp ult i32 %op, 4
  br i1 %0, label %dec_label_pc_13f6, label %dec_label_pc_1444, !insn.addr !68

dec_label_pc_13f6:                                ; preds = %dec_label_pc_13d0
  %1 = sext i32 %op to i64, !insn.addr !69
  %2 = mul i64 %1, 4, !insn.addr !70
  %3 = add i64 %2, ptrtoint (i32* @global_var_3010 to i64), !insn.addr !70
  %4 = inttoptr i64 %3 to i32*, !insn.addr !70
  %5 = load i32, i32* %4, align 4, !insn.addr !70
  %6 = add i32 %5, ptrtoint (i32* @global_var_3010 to i32), !insn.addr !71
  ret i32 %6, !insn.addr !72

dec_label_pc_1444:                                ; preds = %dec_label_pc_13d0
  ret i32 -1, !insn.addr !73
}

define i32 @switch_large(i32 %op) local_unnamed_addr {
dec_label_pc_1450:
  %0 = icmp ult i32 %op, 10
  br i1 %0, label %dec_label_pc_1468, label %dec_label_pc_14f4, !insn.addr !74

dec_label_pc_1468:                                ; preds = %dec_label_pc_1450
  %1 = sext i32 %op to i64, !insn.addr !75
  %2 = mul i64 %1, 4, !insn.addr !76
  %3 = add i64 %2, ptrtoint (i32* @global_var_3020 to i64), !insn.addr !76
  %4 = inttoptr i64 %3 to i32*, !insn.addr !76
  %5 = load i32, i32* %4, align 4, !insn.addr !76
  %6 = add i32 %5, ptrtoint (i32* @global_var_3020 to i32), !insn.addr !77
  ret i32 %6, !insn.addr !78

dec_label_pc_14f4:                                ; preds = %dec_label_pc_1450
  ret i32 -1, !insn.addr !79
}

define i32 @switch_default(i32 %op) local_unnamed_addr {
dec_label_pc_1500:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !80
  store i32 100, i32* %stack_var_-12.0.reg2mem
  switch i32 %op, label %dec_label_pc_1561 [
    i32 1, label %dec_label_pc_1568
    i32 2, label %dec_label_pc_1549
    i32 3, label %dec_label_pc_1555
  ]

dec_label_pc_1549:                                ; preds = %dec_label_pc_1500
  store i32 200, i32* %stack_var_-12.0.reg2mem, !insn.addr !81
  br label %dec_label_pc_1568, !insn.addr !81

dec_label_pc_1555:                                ; preds = %dec_label_pc_1500
  store i32 300, i32* %stack_var_-12.0.reg2mem, !insn.addr !82
  br label %dec_label_pc_1568, !insn.addr !82

dec_label_pc_1561:                                ; preds = %dec_label_pc_1500
  store i32 0, i32* %stack_var_-12.0.reg2mem, !insn.addr !83
  br label %dec_label_pc_1568, !insn.addr !83

dec_label_pc_1568:                                ; preds = %dec_label_pc_1500, %dec_label_pc_1561, %dec_label_pc_1555, %dec_label_pc_1549
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !84

; uselistorder directives
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 2, 3, 4, 1 }
  uselistorder label %dec_label_pc_1568, { 1, 2, 3, 0 }
}

define i32 @switch_fallthrough(i32 %op) local_unnamed_addr {
dec_label_pc_1570:
  %storemerge.reg2mem = alloca i32, !insn.addr !85
  %result_-16.1.reg2mem = alloca i32, !insn.addr !85
  %result_-16.0.reg2mem = alloca i32, !insn.addr !85
  store i32 0, i32* %result_-16.0.reg2mem
  store i32 0, i32* %result_-16.1.reg2mem
  switch i32 %op, label %dec_label_pc_15a3 [
    i32 1, label %dec_label_pc_15cc
    i32 2, label %dec_label_pc_15c0
  ]

dec_label_pc_15a3:                                ; preds = %dec_label_pc_1570
  %0 = icmp eq i32 %op, 3, !insn.addr !86
  %1 = icmp eq i1 %0, false, !insn.addr !87
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !87
  br i1 %1, label %dec_label_pc_15e1, label %dec_label_pc_15b4, !insn.addr !87

dec_label_pc_15b4:                                ; preds = %dec_label_pc_15a3
  %2 = mul i32 %op, 4, !insn.addr !88
  store i32 %2, i32* %result_-16.0.reg2mem, !insn.addr !89
  br label %dec_label_pc_15c0, !insn.addr !89

dec_label_pc_15c0:                                ; preds = %dec_label_pc_1570, %dec_label_pc_15b4
  %result_-16.0.reload = load i32, i32* %result_-16.0.reg2mem
  %3 = mul i32 %op, 2, !insn.addr !90
  %4 = add i32 %result_-16.0.reload, %3, !insn.addr !91
  store i32 %4, i32* %result_-16.1.reg2mem, !insn.addr !92
  br label %dec_label_pc_15cc, !insn.addr !92

dec_label_pc_15cc:                                ; preds = %dec_label_pc_1570, %dec_label_pc_15c0
  %result_-16.1.reload = load i32, i32* %result_-16.1.reg2mem
  %5 = add i32 %result_-16.1.reload, %op, !insn.addr !93
  store i32 %5, i32* %storemerge.reg2mem, !insn.addr !94
  br label %dec_label_pc_15e1, !insn.addr !94

dec_label_pc_15e1:                                ; preds = %dec_label_pc_15a3, %dec_label_pc_15cc
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !95

; uselistorder directives
  uselistorder i32* %result_-16.0.reg2mem, { 0, 2, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %op, { 2, 0, 1, 4, 3 }
  uselistorder label %dec_label_pc_15e1, { 1, 0 }
  uselistorder label %dec_label_pc_15cc, { 1, 0 }
  uselistorder label %dec_label_pc_15c0, { 1, 0 }
}

define i32 @loop_for_fixed(i32 %n) local_unnamed_addr {
dec_label_pc_15f0:
  %sum_-16.0.lcssa.reg2mem = alloca i32, !insn.addr !96
  %0 = icmp sgt i32 %n, 0, !insn.addr !97
  store i32 0, i32* %sum_-16.0.lcssa.reg2mem, !insn.addr !97
  br i1 %0, label %dec_label_pc_1611.lr.ph, label %dec_label_pc_1628, !insn.addr !97

dec_label_pc_1611.lr.ph:                          ; preds = %dec_label_pc_15f0
  %1 = add i32 %n, -1
  %2 = zext i32 %1 to i33
  %3 = add i32 %n, -2
  %4 = zext i32 %3 to i33
  %5 = mul i33 %2, %4
  %6 = udiv i33 %5, 2
  %7 = trunc i33 %6 to i32
  %8 = add i32 %1, %7
  store i32 %8, i32* %sum_-16.0.lcssa.reg2mem
  br label %dec_label_pc_1628

dec_label_pc_1628:                                ; preds = %dec_label_pc_1611.lr.ph, %dec_label_pc_15f0
  %sum_-16.0.lcssa.reload = load i32, i32* %sum_-16.0.lcssa.reg2mem
  ret i32 %sum_-16.0.lcssa.reload, !insn.addr !98

; uselistorder directives
  uselistorder i32* %sum_-16.0.lcssa.reg2mem, { 0, 2, 1 }
}

define i32 @loop_while(i32 %x) local_unnamed_addr {
dec_label_pc_1630:
  %stack_var_-12.02.reg2mem = alloca i32, !insn.addr !99
  %storemerge3.reg2mem = alloca i32, !insn.addr !99
  %0 = icmp eq i32 %x, 0, !insn.addr !100
  store i32 0, i32* %storemerge3.reg2mem, !insn.addr !101
  store i32 %x, i32* %stack_var_-12.02.reg2mem, !insn.addr !101
  br i1 %0, label %dec_label_pc_1664.thread, label %dec_label_pc_1648, !insn.addr !101

dec_label_pc_1648:                                ; preds = %dec_label_pc_1630, %dec_label_pc_1648
  %stack_var_-12.02.reload = load i32, i32* %stack_var_-12.02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %1 = ashr i32 %stack_var_-12.02.reload, 31, !insn.addr !102
  %2 = zext i32 %stack_var_-12.02.reload to i64, !insn.addr !103
  %3 = zext i32 %1 to i64, !insn.addr !103
  %4 = mul i64 %3, 4294967296, !insn.addr !103
  %5 = or i64 %4, %2, !insn.addr !103
  %6 = sdiv i64 %5, 10, !insn.addr !103
  %7 = trunc i64 %6 to i32, !insn.addr !103
  %8 = add i32 %storemerge3.reload, 1, !insn.addr !104
  %9 = icmp eq i32 %7, 0, !insn.addr !100
  store i32 %8, i32* %storemerge3.reg2mem, !insn.addr !101
  store i32 %7, i32* %stack_var_-12.02.reg2mem, !insn.addr !101
  br i1 %9, label %dec_label_pc_1664, label %dec_label_pc_1648, !insn.addr !101

dec_label_pc_1664:                                ; preds = %dec_label_pc_1648
  %10 = icmp sgt i32 %8, 1
  %spec.select = select i1 %10, i32 %8, i32 1
  ret i32 %spec.select

dec_label_pc_1664.thread:                         ; preds = %dec_label_pc_1630
  ret i32 1, !insn.addr !105

; uselistorder directives
  uselistorder i32 %8, { 1, 2, 0 }
  uselistorder i32* %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-12.02.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1648, { 1, 0 }
}

define i32 @loop_dowhile(i32 %x) local_unnamed_addr {
dec_label_pc_1690:
  %count_-16.0.reg2mem = alloca i32, !insn.addr !106
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !106
  store i32 %x, i32* %stack_var_-12.0.reg2mem, !insn.addr !107
  store i32 0, i32* %count_-16.0.reg2mem, !insn.addr !107
  br label %dec_label_pc_169e, !insn.addr !107

dec_label_pc_169e:                                ; preds = %dec_label_pc_169e, %dec_label_pc_1690
  %count_-16.0.reload = load i32, i32* %count_-16.0.reg2mem
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  %0 = ashr i32 %stack_var_-12.0.reload, 31, !insn.addr !108
  %1 = zext i32 %stack_var_-12.0.reload to i64, !insn.addr !109
  %2 = zext i32 %0 to i64, !insn.addr !109
  %3 = mul i64 %2, 4294967296, !insn.addr !109
  %4 = or i64 %3, %1, !insn.addr !109
  %5 = sdiv i64 %4, 10, !insn.addr !109
  %6 = trunc i64 %5 to i32, !insn.addr !109
  %7 = add i32 %count_-16.0.reload, 1, !insn.addr !110
  %8 = icmp eq i32 %6, 0, !insn.addr !111
  %9 = icmp eq i1 %8, false, !insn.addr !112
  store i32 %6, i32* %stack_var_-12.0.reg2mem, !insn.addr !112
  store i32 %7, i32* %count_-16.0.reg2mem, !insn.addr !112
  br i1 %9, label %dec_label_pc_169e, label %dec_label_pc_16bf, !insn.addr !112

dec_label_pc_16bf:                                ; preds = %dec_label_pc_169e
  ret i32 %7, !insn.addr !113

; uselistorder directives
  uselistorder i32 %7, { 1, 0 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %count_-16.0.reg2mem, { 1, 0, 2 }
}

define i32 @loop_nested(i32 %m, i32 %n) local_unnamed_addr {
dec_label_pc_16d0:
  %total_-20.0.lcssa.reg2mem = alloca i32, !insn.addr !114
  %0 = icmp sgt i32 %m, 0, !insn.addr !115
  store i32 0, i32* %total_-20.0.lcssa.reg2mem, !insn.addr !115
  br i1 %0, label %dec_label_pc_16fb.preheader.lr.ph, label %dec_label_pc_1731, !insn.addr !115

dec_label_pc_16fb.preheader.lr.ph:                ; preds = %dec_label_pc_16d0
  %1 = icmp sgt i32 %n, 0
  %smax = select i1 %1, i32 %n, i32 0
  %2 = mul i32 %smax, %m
  store i32 %2, i32* %total_-20.0.lcssa.reg2mem
  br label %dec_label_pc_1731

dec_label_pc_1731:                                ; preds = %dec_label_pc_16fb.preheader.lr.ph, %dec_label_pc_16d0
  %total_-20.0.lcssa.reload = load i32, i32* %total_-20.0.lcssa.reg2mem
  ret i32 %total_-20.0.lcssa.reload, !insn.addr !116

; uselistorder directives
  uselistorder i32* %total_-20.0.lcssa.reg2mem, { 0, 2, 1 }
}

define i32 @loop_break(i32 %target) local_unnamed_addr {
dec_label_pc_1740:
  %storemerge1.reg2mem = alloca i32, !insn.addr !117
  %storemerge2.reg2mem = alloca i32, !insn.addr !117
  %stack_var_-8 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !118
  %1 = add i64 %0, -32, !insn.addr !119
  store i32 0, i32* %storemerge2.reg2mem
  br label %dec_label_pc_1780

dec_label_pc_1780:                                ; preds = %dec_label_pc_1740, %dec_label_pc_17a1
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %2 = sext i32 %storemerge2.reload to i64, !insn.addr !120
  %3 = mul i64 %2, 4, !insn.addr !119
  %4 = add i64 %1, %3, !insn.addr !119
  %5 = inttoptr i64 %4 to i32*, !insn.addr !119
  %6 = load i32, i32* %5, align 4, !insn.addr !119
  %7 = icmp eq i32 %6, %target, !insn.addr !121
  %8 = icmp eq i1 %7, false, !insn.addr !122
  store i32 %storemerge2.reload, i32* %storemerge1.reg2mem, !insn.addr !122
  br i1 %8, label %dec_label_pc_17a1, label %dec_label_pc_17b6, !insn.addr !122

dec_label_pc_17a1:                                ; preds = %dec_label_pc_1780
  %9 = add nuw i32 %storemerge2.reload, 1, !insn.addr !123
  %10 = icmp ult i32 %9, 5, !insn.addr !124
  store i32 %9, i32* %storemerge2.reg2mem, !insn.addr !124
  store i32 -1, i32* %storemerge1.reg2mem, !insn.addr !124
  br i1 %10, label %dec_label_pc_1780, label %dec_label_pc_17b6, !insn.addr !124

dec_label_pc_17b6:                                ; preds = %dec_label_pc_1780, %dec_label_pc_17a1
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  ret i32 %storemerge1.reload, !insn.addr !125

; uselistorder directives
  uselistorder i32 %storemerge2.reload, { 1, 0, 2 }
  uselistorder i32* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge1.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_17b6, { 1, 0 }
  uselistorder label %dec_label_pc_1780, { 1, 0 }
}

define i32 @loop_continue(i32 %n) local_unnamed_addr {
dec_label_pc_17c0:
  %sum_-16.0.lcssa.reg2mem = alloca i32, !insn.addr !126
  %sum_-16.01.reg2mem = alloca i32, !insn.addr !126
  %storemerge2.reg2mem = alloca i32, !insn.addr !126
  %0 = icmp slt i32 %n, 1, !insn.addr !127
  store i32 1, i32* %storemerge2.reg2mem, !insn.addr !127
  store i32 0, i32* %sum_-16.01.reg2mem, !insn.addr !127
  store i32 0, i32* %sum_-16.0.lcssa.reg2mem, !insn.addr !127
  br i1 %0, label %dec_label_pc_1811, label %dec_label_pc_17e1, !insn.addr !127

dec_label_pc_17e1:                                ; preds = %dec_label_pc_17c0, %dec_label_pc_17e1
  %sum_-16.01.reload = load i32, i32* %sum_-16.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %1 = zext i32 %storemerge2.reload to i64, !insn.addr !128
  %2 = mul i64 %1, 4294967296, !insn.addr !128
  %3 = or i64 %2, %1, !insn.addr !128
  %4 = srem i64 %3, 2, !insn.addr !128
  %5 = trunc i64 %4 to i32, !insn.addr !128
  %6 = icmp eq i32 %5, 0, !insn.addr !129
  %7 = icmp eq i1 %6, false, !insn.addr !130
  %8 = select i1 %7, i32 %storemerge2.reload, i32 0
  %spec.select = add i32 %8, %sum_-16.01.reload
  %9 = add i32 %storemerge2.reload, 1, !insn.addr !131
  %10 = icmp sgt i32 %9, %n, !insn.addr !127
  store i32 %9, i32* %storemerge2.reg2mem, !insn.addr !127
  store i32 %spec.select, i32* %sum_-16.01.reg2mem, !insn.addr !127
  store i32 %spec.select, i32* %sum_-16.0.lcssa.reg2mem, !insn.addr !127
  br i1 %10, label %dec_label_pc_1811, label %dec_label_pc_17e1, !insn.addr !127

dec_label_pc_1811:                                ; preds = %dec_label_pc_17e1, %dec_label_pc_17c0
  %sum_-16.0.lcssa.reload = load i32, i32* %sum_-16.0.lcssa.reg2mem
  ret i32 %sum_-16.0.lcssa.reload, !insn.addr !132

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i32 %storemerge2.reload, { 1, 0, 2 }
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sum_-16.01.reg2mem, { 2, 0, 1 }
  uselistorder i32 %n, { 1, 0 }
  uselistorder label %dec_label_pc_17e1, { 1, 0 }
}

define i32 @goto_forward(i32 %x) local_unnamed_addr {
dec_label_pc_1820:
  %0 = icmp sgt i32 %x, 1
  %1 = select i1 %0, i32 %x, i32 1
  %storemerge = mul i32 %x, 2
  %2 = mul i32 %storemerge, %1, !insn.addr !133
  ret i32 %2, !insn.addr !134
}

define i32 @goto_backward(i32 %x) local_unnamed_addr {
dec_label_pc_1860:
  %storemerge.reg2mem = alloca i32, !insn.addr !135
  %result_-20.02.reg2mem = alloca i32, !insn.addr !135
  %storemerge13.reg2mem = alloca i32, !insn.addr !135
  %0 = icmp eq i32 %x, 0, !insn.addr !136
  %1 = icmp slt i32 %x, 0, !insn.addr !136
  %2 = icmp eq i1 %1, false, !insn.addr !137
  %3 = icmp eq i1 %0, false, !insn.addr !137
  %4 = icmp ne i1 %2, %3, !insn.addr !137
  %5 = icmp slt i32 %x, 1, !insn.addr !138
  %or.cond = or i1 %5, %4
  store i32 1, i32* %storemerge13.reg2mem, !insn.addr !137
  store i32 1, i32* %result_-20.02.reg2mem, !insn.addr !137
  store i32 1, i32* %storemerge.reg2mem, !insn.addr !137
  br i1 %or.cond, label %dec_label_pc_18ba, label %dec_label_pc_189c, !insn.addr !137

dec_label_pc_189c:                                ; preds = %dec_label_pc_1860, %dec_label_pc_189c
  %result_-20.02.reload = load i32, i32* %result_-20.02.reg2mem
  %storemerge13.reload = load i32, i32* %storemerge13.reg2mem
  %6 = mul i32 %result_-20.02.reload, %storemerge13.reload, !insn.addr !139
  %7 = add i32 %storemerge13.reload, 1, !insn.addr !140
  %8 = icmp sgt i32 %7, %x, !insn.addr !138
  store i32 %7, i32* %storemerge13.reg2mem, !insn.addr !138
  store i32 %6, i32* %result_-20.02.reg2mem, !insn.addr !138
  store i32 %6, i32* %storemerge.reg2mem, !insn.addr !138
  br i1 %8, label %dec_label_pc_18ba, label %dec_label_pc_189c, !insn.addr !138

dec_label_pc_18ba:                                ; preds = %dec_label_pc_189c, %dec_label_pc_1860
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !141

; uselistorder directives
  uselistorder i32* %storemerge13.reg2mem, { 2, 0, 1 }
  uselistorder i32* %result_-20.02.reg2mem, { 2, 0, 1 }
  uselistorder i32 %x, { 1, 0, 3, 2 }
  uselistorder label %dec_label_pc_189c, { 1, 0 }
}

define i32 @ternary_op(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_18c0:
  %0 = icmp sgt i32 %a, %b, !insn.addr !142
  %storemerge = select i1 %0, i32 %a, i32 %b
  ret i32 %storemerge, !insn.addr !143
}

define void @test_control_flow_l1() local_unnamed_addr {
dec_label_pc_18f0:
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_30e4 to i8*)), !insn.addr !144
  %1 = call i32 @sequential_ops(i32 5, i32 7, i32 3), !insn.addr !145
  %2 = zext i32 %1 to i64, !insn.addr !146
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3109, i64 0, i64 0), i64 %2), !insn.addr !147
  %4 = call i32 @single_if(i32 10), !insn.addr !148
  %5 = zext i32 %4 to i64, !insn.addr !149
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_3128, i64 0, i64 0), i64 %5), !insn.addr !150
  %7 = call i32 @single_if(i32 -5), !insn.addr !151
  %8 = zext i32 %7 to i64, !insn.addr !152
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_3128, i64 0, i64 0), i64 %8), !insn.addr !153
  %10 = call i32 @if_else(i32 5), !insn.addr !154
  %11 = zext i32 %10 to i64, !insn.addr !155
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_3142, i64 0, i64 0), i64 %11), !insn.addr !156
  %13 = call i32 @if_else(i32 -3), !insn.addr !157
  %14 = zext i32 %13 to i64, !insn.addr !158
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_3142, i64 0, i64 0), i64 %14), !insn.addr !159
  %16 = call i32 @nested_if_2(i32 10, i32 5), !insn.addr !160
  %17 = zext i32 %16 to i64, !insn.addr !161
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_315a, i64 0, i64 0), i64 %17), !insn.addr !162
  %19 = call i32 @nested_if_2(i32 10, i32 -5), !insn.addr !163
  %20 = zext i32 %19 to i64, !insn.addr !164
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_315a, i64 0, i64 0), i64 %20), !insn.addr !165
  %22 = call i32 @nested_if_2(i32 -10, i32 5), !insn.addr !166
  %23 = zext i32 %22 to i64, !insn.addr !167
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_315a, i64 0, i64 0), i64 %23), !insn.addr !168
  %25 = call i32 @nested_if_deep(i32 1, i32 1, i32 1, i32 1, i32 1), !insn.addr !169
  %26 = zext i32 %25 to i64, !insn.addr !170
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3176, i64 0, i64 0), i64 %26), !insn.addr !171
  %28 = call i32 @if_elseif_chain(i32 1), !insn.addr !172
  %29 = zext i32 %28 to i64, !insn.addr !173
  %30 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3195, i64 0, i64 0), i64 %29), !insn.addr !174
  %31 = call i32 @if_elseif_long(i32 3), !insn.addr !175
  %32 = zext i32 %31 to i64, !insn.addr !176
  %33 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_31b5, i64 0, i64 0), i64 %32), !insn.addr !177
  %34 = call i32 @switch_small(i32 2), !insn.addr !178
  %35 = zext i32 %34 to i64, !insn.addr !179
  %36 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_31d4, i64 0, i64 0), i64 %35), !insn.addr !180
  %37 = call i32 @switch_large(i32 7), !insn.addr !181
  %38 = zext i32 %37 to i64, !insn.addr !182
  %39 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_31f1, i64 0, i64 0), i64 %38), !insn.addr !183
  %40 = call i32 @switch_default(i32 5), !insn.addr !184
  %41 = zext i32 %40 to i64, !insn.addr !185
  %42 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_320e, i64 0, i64 0), i64 %41), !insn.addr !186
  %43 = call i32 @switch_fallthrough(i32 3), !insn.addr !187
  %44 = zext i32 %43 to i64, !insn.addr !188
  %45 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_322d, i64 0, i64 0), i64 %44), !insn.addr !189
  %46 = call i32 @loop_for_fixed(i32 10), !insn.addr !190
  %47 = zext i32 %46 to i64, !insn.addr !191
  %48 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3250, i64 0, i64 0), i64 %47), !insn.addr !192
  %49 = call i32 @loop_while(i32 ptrtoint (i32* @global_var_3039 to i32)), !insn.addr !193
  %50 = zext i32 %49 to i64, !insn.addr !194
  %51 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_326f, i64 0, i64 0), i64 %50), !insn.addr !195
  %52 = call i32 @loop_dowhile(i32 9876), !insn.addr !196
  %53 = zext i32 %52 to i64, !insn.addr !197
  %54 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_328a, i64 0, i64 0), i64 %53), !insn.addr !198
  %55 = call i32 @loop_nested(i32 3, i32 4), !insn.addr !199
  %56 = zext i32 %55 to i64, !insn.addr !200
  %57 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_32a7, i64 0, i64 0), i64 %56), !insn.addr !201
  %58 = call i32 @loop_break(i32 30), !insn.addr !202
  %59 = zext i32 %58 to i64, !insn.addr !203
  %60 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_32c3, i64 0, i64 0), i64 %59), !insn.addr !204
  %61 = call i32 @loop_break(i32 99), !insn.addr !205
  %62 = zext i32 %61 to i64, !insn.addr !206
  %63 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_32c3, i64 0, i64 0), i64 %62), !insn.addr !207
  %64 = call i32 @loop_continue(i32 10), !insn.addr !208
  %65 = zext i32 %64 to i64, !insn.addr !209
  %66 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_32de, i64 0, i64 0), i64 %65), !insn.addr !210
  %67 = call i32 @goto_forward(i32 5), !insn.addr !211
  %68 = zext i32 %67 to i64, !insn.addr !212
  %69 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_32fc, i64 0, i64 0), i64 %68), !insn.addr !213
  %70 = call i32 @goto_forward(i32 -3), !insn.addr !214
  %71 = zext i32 %70 to i64, !insn.addr !215
  %72 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_32fc, i64 0, i64 0), i64 %71), !insn.addr !216
  %73 = call i32 @goto_backward(i32 5), !insn.addr !217
  %74 = zext i32 %73 to i64, !insn.addr !218
  %75 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3319, i64 0, i64 0), i64 %74), !insn.addr !219
  %76 = call i32 @ternary_op(i32 10, i32 5), !insn.addr !220
  %77 = zext i32 %76 to i64, !insn.addr !221
  %78 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3337, i64 0, i64 0), i64 %77), !insn.addr !222
  %79 = call i32 @ternary_op(i32 3, i32 8), !insn.addr !223
  %80 = zext i32 %79 to i64, !insn.addr !224
  %81 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3337, i64 0, i64 0), i64 %80), !insn.addr !225
  ret void, !insn.addr !226

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
dec_label_pc_1c00:
  %storemerge2.reg2mem = alloca i32, !insn.addr !227
  %storemerge5.reg2mem = alloca i32, !insn.addr !227
  %storemerge16.reg2mem = alloca i32, !insn.addr !227
  %matrix_-72 = alloca [1 x [1 x i32]], align 4
  %0 = bitcast [1 x [1 x i32]]* %matrix_-72 to i64*, !insn.addr !228
  %1 = call i64* @memcpy(i64* nonnull %0, i64* nonnull @global_var_30a0, i32 48), !insn.addr !228
  %2 = ptrtoint [1 x [1 x i32]]* %matrix_-72 to i64, !insn.addr !229
  store i32 0, i32* %storemerge16.reg2mem
  br label %dec_label_pc_1c38.preheader

dec_label_pc_1c38.preheader:                      ; preds = %dec_label_pc_1c00, %dec_label_pc_1c88
  %storemerge16.reload = load i32, i32* %storemerge16.reg2mem
  %3 = sext i32 %storemerge16.reload to i64, !insn.addr !230
  %4 = mul i64 %3, 16, !insn.addr !231
  %5 = add i64 %4, %2, !insn.addr !232
  store i32 0, i32* %storemerge5.reg2mem
  br label %dec_label_pc_1c42

dec_label_pc_1c42:                                ; preds = %dec_label_pc_1c38.preheader, %dec_label_pc_1c75
  %storemerge5.reload = load i32, i32* %storemerge5.reg2mem
  %6 = sext i32 %storemerge5.reload to i64, !insn.addr !233
  %7 = mul i64 %6, 4, !insn.addr !234
  %8 = add i64 %5, %7, !insn.addr !234
  %9 = inttoptr i64 %8 to i32*, !insn.addr !234
  %10 = load i32, i32* %9, align 4, !insn.addr !234
  %11 = icmp eq i32 %10, %target, !insn.addr !235
  %12 = icmp eq i1 %11, false, !insn.addr !236
  br i1 %12, label %dec_label_pc_1c75, label %dec_label_pc_1c61, !insn.addr !236

dec_label_pc_1c61:                                ; preds = %dec_label_pc_1c42
  %13 = mul i32 %storemerge16.reload, 10, !insn.addr !237
  %14 = add i32 %storemerge5.reload, %13, !insn.addr !238
  store i32 %14, i32* %storemerge2.reg2mem, !insn.addr !239
  br label %dec_label_pc_1c9d, !insn.addr !239

dec_label_pc_1c75:                                ; preds = %dec_label_pc_1c42
  %15 = add nuw i32 %storemerge5.reload, 1, !insn.addr !240
  %16 = icmp ugt i32 %storemerge5.reload, 2, !insn.addr !241
  store i32 %15, i32* %storemerge5.reg2mem, !insn.addr !241
  br i1 %16, label %dec_label_pc_1c88, label %dec_label_pc_1c42, !insn.addr !241

dec_label_pc_1c88:                                ; preds = %dec_label_pc_1c75
  %17 = add nuw i32 %storemerge16.reload, 1, !insn.addr !242
  %18 = icmp ugt i32 %storemerge16.reload, 1, !insn.addr !243
  store i32 %17, i32* %storemerge16.reg2mem, !insn.addr !243
  store i32 -1, i32* %storemerge2.reg2mem, !insn.addr !243
  br i1 %18, label %dec_label_pc_1c9d, label %dec_label_pc_1c38.preheader, !insn.addr !243

dec_label_pc_1c9d:                                ; preds = %dec_label_pc_1c88, %dec_label_pc_1c61
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  ret i32 %storemerge2.reload, !insn.addr !244

; uselistorder directives
  uselistorder i32 %storemerge5.reload, { 2, 0, 3, 1 }
  uselistorder i32 %storemerge16.reload, { 2, 0, 3, 1 }
  uselistorder [1 x [1 x i32]]* %matrix_-72, { 1, 0 }
  uselistorder i32* %storemerge16.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge5.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1c42, { 1, 0 }
  uselistorder label %dec_label_pc_1c38.preheader, { 1, 0 }
}

define i32 @infinite_loop(i32* %flag) local_unnamed_addr {
dec_label_pc_1cb0:
  %0 = alloca i64
  %count_-20.1.reg2mem = alloca i32, !insn.addr !245
  %count_-20.0.reg2mem = alloca i32, !insn.addr !245
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp eq i32 %2, 1, !insn.addr !246
  %4 = icmp eq i1 %3, false, !insn.addr !247
  store i32 0, i32* %count_-20.0.reg2mem, !insn.addr !248
  br label %dec_label_pc_1cbf, !insn.addr !248

dec_label_pc_1cbf:                                ; preds = %dec_label_pc_1cd3, %dec_label_pc_1cb0
  store i32 0, i32* %count_-20.1.reg2mem, !insn.addr !247
  br i1 %4, label %dec_label_pc_1cd3, label %dec_label_pc_1cfd, !insn.addr !247

dec_label_pc_1cd3:                                ; preds = %dec_label_pc_1cbf
  %count_-20.0.reload = load i32, i32* %count_-20.0.reg2mem
  %5 = add i32 %count_-20.0.reload, 1, !insn.addr !249
  %6 = icmp sgt i32 %5, ptrtoint (i1* @global_var_3e8 to i32), !insn.addr !250
  store i32 %5, i32* %count_-20.0.reg2mem, !insn.addr !250
  br i1 %6, label %dec_label_pc_1ce9, label %dec_label_pc_1cbf, !insn.addr !250

dec_label_pc_1ce9:                                ; preds = %dec_label_pc_1cd3
  store i32 1, i32* %flag, align 4, !insn.addr !251
  store i32 %5, i32* %count_-20.1.reg2mem, !insn.addr !252
  br label %dec_label_pc_1cfd, !insn.addr !252

dec_label_pc_1cfd:                                ; preds = %dec_label_pc_1cbf, %dec_label_pc_1ce9
  %count_-20.1.reload = load i32, i32* %count_-20.1.reg2mem
  ret i32 %count_-20.1.reload, !insn.addr !253

; uselistorder directives
  uselistorder i32* %count_-20.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %count_-20.1.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1cfd, { 1, 0 }
}

define i32 @multi_return(i32 %x) local_unnamed_addr {
dec_label_pc_1d10:
  %temp_-12.0.reg2mem = alloca i32, !insn.addr !254
  %0 = icmp slt i32 %x, 0, !insn.addr !255
  %1 = icmp eq i1 %0, false, !insn.addr !256
  store i32 -1, i32* %temp_-12.0.reg2mem, !insn.addr !256
  br i1 %1, label %dec_label_pc_1d2d, label %dec_label_pc_1d74, !insn.addr !256

dec_label_pc_1d2d:                                ; preds = %dec_label_pc_1d10
  %2 = mul i32 %x, 2, !insn.addr !257
  %3 = icmp slt i32 %2, 101, !insn.addr !258
  store i32 -2, i32* %temp_-12.0.reg2mem, !insn.addr !258
  br i1 %3, label %dec_label_pc_1d4c, label %dec_label_pc_1d74, !insn.addr !258

dec_label_pc_1d4c:                                ; preds = %dec_label_pc_1d2d
  %4 = zext i32 %x to i64, !insn.addr !259
  %5 = mul i64 %4, 4294967296, !insn.addr !259
  %6 = or i64 %5, %4, !insn.addr !259
  %7 = srem i64 %6, 2, !insn.addr !259
  %8 = trunc i64 %7 to i32, !insn.addr !259
  %9 = icmp eq i32 %8, 0, !insn.addr !260
  %10 = icmp eq i1 %9, false, !insn.addr !261
  %11 = add i32 %x, 1
  %spec.select = select i1 %10, i32 %11, i32 %2
  ret i32 %spec.select

dec_label_pc_1d74:                                ; preds = %dec_label_pc_1d2d, %dec_label_pc_1d10
  %temp_-12.0.reload = load i32, i32* %temp_-12.0.reg2mem
  ret i32 %temp_-12.0.reload, !insn.addr !262

; uselistorder directives
  uselistorder i64 %4, { 1, 0 }
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32 %x, { 2, 1, 0, 3 }
}

define i32 @conditional_return(i32 %x) local_unnamed_addr {
dec_label_pc_1d80:
  %storemerge.reg2mem = alloca i32, !insn.addr !263
  %0 = icmp slt i32 %x, 1, !insn.addr !264
  br i1 %0, label %dec_label_pc_1d9f, label %dec_label_pc_1d91, !insn.addr !264

dec_label_pc_1d91:                                ; preds = %dec_label_pc_1d80
  %1 = mul i32 %x, 2, !insn.addr !265
  store i32 %1, i32* %storemerge.reg2mem, !insn.addr !266
  br label %dec_label_pc_1dc5, !insn.addr !266

dec_label_pc_1d9f:                                ; preds = %dec_label_pc_1d80
  %2 = icmp ne i32 %x, 0, !insn.addr !267
  %3 = icmp eq i1 %2, false, !insn.addr !268
  %4 = mul i32 %x, -1
  %storemerge1 = select i1 %3, i32 0, i32 %4
  store i32 %storemerge1, i32* %storemerge.reg2mem
  br label %dec_label_pc_1dc5

dec_label_pc_1dc5:                                ; preds = %dec_label_pc_1d9f, %dec_label_pc_1d91
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !269

; uselistorder directives
  uselistorder i32 %x, { 2, 1, 0, 3 }
}

define i32 @duffs_device(i32* %dst, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1dd0:
  %storemerge.reg2mem = alloca i32, !insn.addr !270
  %0 = icmp eq i32 %n, 0, !insn.addr !271
  %1 = icmp slt i32 %n, 0, !insn.addr !271
  %2 = icmp eq i1 %1, false, !insn.addr !272
  %3 = icmp eq i1 %0, false, !insn.addr !272
  %4 = icmp eq i1 %2, %3, !insn.addr !272
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !272
  br i1 %4, label %dec_label_pc_1df5, label %dec_label_pc_1f74, !insn.addr !272

dec_label_pc_1df5:                                ; preds = %dec_label_pc_1dd0
  %5 = add i32 %n, 7, !insn.addr !273
  %6 = select i1 %1, i32 %5, i32 %n, !insn.addr !274
  %7 = and i32 %6, -8, !insn.addr !275
  %8 = sub i32 %n, %7, !insn.addr !276
  %9 = icmp ult i32 %8, 8
  store i32 %n, i32* %storemerge.reg2mem, !insn.addr !277
  br i1 %9, label %dec_label_pc_1e2e, label %dec_label_pc_1f74, !insn.addr !277

dec_label_pc_1e2e:                                ; preds = %dec_label_pc_1df5
  %10 = zext i32 %8 to i64, !insn.addr !278
  %11 = mul i64 %10, 4, !insn.addr !279
  %12 = add i64 %11, ptrtoint (i32* @global_var_3048 to i64), !insn.addr !279
  %13 = inttoptr i64 %12 to i32*, !insn.addr !279
  %14 = load i32, i32* %13, align 4, !insn.addr !279
  %15 = add i32 %14, ptrtoint (i32* @global_var_3048 to i32), !insn.addr !280
  ret i32 %15, !insn.addr !281

dec_label_pc_1f74:                                ; preds = %dec_label_pc_1df5, %dec_label_pc_1dd0
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !282

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
  uselistorder i32 %n, { 0, 3, 2, 1, 5, 4 }
}

define i32 @loop_complex_cond(i32 %x) local_unnamed_addr {
dec_label_pc_1f80:
  %storemerge.lcssa.reg2mem = alloca i32, !insn.addr !283
  %b_-20.0.lcssa.reg2mem = alloca i32, !insn.addr !283
  %a_-16.0.lcssa.reg2mem = alloca i32, !insn.addr !283
  %a_-16.01.reg2mem = alloca i32, !insn.addr !283
  %b_-20.02.reg2mem = alloca i32, !insn.addr !283
  %storemerge3.reg2mem = alloca i32, !insn.addr !283
  %0 = icmp slt i32 %x, 1, !insn.addr !284
  store i32 0, i32* %storemerge3.reg2mem, !insn.addr !284
  store i32 %x, i32* %b_-20.02.reg2mem, !insn.addr !284
  store i32 0, i32* %a_-16.01.reg2mem, !insn.addr !284
  store i32 0, i32* %a_-16.0.lcssa.reg2mem, !insn.addr !284
  store i32 %x, i32* %b_-20.0.lcssa.reg2mem, !insn.addr !284
  store i32 0, i32* %storemerge.lcssa.reg2mem, !insn.addr !284
  br i1 %0, label %dec_label_pc_1ff5, label %dec_label_pc_1fd5, !insn.addr !284

dec_label_pc_1fd5:                                ; preds = %dec_label_pc_1f80, %dec_label_pc_1fd5
  %a_-16.01.reload = load i32, i32* %a_-16.01.reg2mem
  %b_-20.02.reload = load i32, i32* %b_-20.02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %1 = add nuw nsw i32 %a_-16.01.reload, 2, !insn.addr !285
  %2 = add nsw i32 %b_-20.02.reload, -1, !insn.addr !286
  %3 = add nuw nsw i32 %storemerge3.reload, 1, !insn.addr !287
  %4 = icmp sge i32 %1, %2, !insn.addr !284
  %5 = icmp ugt i32 %storemerge3.reload, 8, !insn.addr !288
  %or.cond = or i1 %5, %4
  store i32 %3, i32* %storemerge3.reg2mem, !insn.addr !284
  store i32 %2, i32* %b_-20.02.reg2mem, !insn.addr !284
  store i32 %1, i32* %a_-16.01.reg2mem, !insn.addr !284
  store i32 %1, i32* %a_-16.0.lcssa.reg2mem, !insn.addr !284
  store i32 %2, i32* %b_-20.0.lcssa.reg2mem, !insn.addr !284
  store i32 %3, i32* %storemerge.lcssa.reg2mem, !insn.addr !284
  br i1 %or.cond, label %dec_label_pc_1ff5, label %dec_label_pc_1fd5, !insn.addr !284

dec_label_pc_1ff5:                                ; preds = %dec_label_pc_1fd5, %dec_label_pc_1f80
  %storemerge.lcssa.reload = load i32, i32* %storemerge.lcssa.reg2mem
  %b_-20.0.lcssa.reload = load i32, i32* %b_-20.0.lcssa.reg2mem
  %a_-16.0.lcssa.reload = load i32, i32* %a_-16.0.lcssa.reg2mem
  %6 = add i32 %b_-20.0.lcssa.reload, %a_-16.0.lcssa.reload, !insn.addr !289
  %7 = add i32 %6, %storemerge.lcssa.reload, !insn.addr !290
  ret i32 %7, !insn.addr !291

; uselistorder directives
  uselistorder i32 %storemerge3.reload, { 1, 0 }
  uselistorder i32* %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder i32* %b_-20.02.reg2mem, { 2, 0, 1 }
  uselistorder i32* %a_-16.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1fd5, { 1, 0 }
}

define i32 @loop_modify_var(i32 %n) local_unnamed_addr {
dec_label_pc_2000:
  %sum_-16.0.lcssa.reg2mem = alloca i32, !insn.addr !292
  %sum_-16.01.reg2mem = alloca i32, !insn.addr !292
  %storemerge2.reg2mem = alloca i32, !insn.addr !292
  %0 = icmp sgt i32 %n, 0, !insn.addr !293
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !293
  store i32 0, i32* %sum_-16.01.reg2mem, !insn.addr !293
  store i32 0, i32* %sum_-16.0.lcssa.reg2mem, !insn.addr !293
  br i1 %0, label %dec_label_pc_2021, label %dec_label_pc_2050, !insn.addr !293

dec_label_pc_2021:                                ; preds = %dec_label_pc_2000, %dec_label_pc_2021
  %sum_-16.01.reload = load i32, i32* %sum_-16.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %1 = add i32 %sum_-16.01.reload, %storemerge2.reload, !insn.addr !294
  %2 = icmp slt i32 %storemerge2.reload, 6, !insn.addr !295
  %3 = add i32 %storemerge2.reload, 2
  %spec.select = select i1 %2, i32 %storemerge2.reload, i32 %3
  %4 = add i32 %spec.select, 1, !insn.addr !296
  %5 = icmp slt i32 %4, %n, !insn.addr !293
  store i32 %4, i32* %storemerge2.reg2mem, !insn.addr !293
  store i32 %1, i32* %sum_-16.01.reg2mem, !insn.addr !293
  store i32 %1, i32* %sum_-16.0.lcssa.reg2mem, !insn.addr !293
  br i1 %5, label %dec_label_pc_2021, label %dec_label_pc_2050, !insn.addr !293

dec_label_pc_2050:                                ; preds = %dec_label_pc_2021, %dec_label_pc_2000
  %sum_-16.0.lcssa.reload = load i32, i32* %sum_-16.0.lcssa.reg2mem
  ret i32 %sum_-16.0.lcssa.reload, !insn.addr !297

; uselistorder directives
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sum_-16.01.reg2mem, { 2, 0, 1 }
  uselistorder i32 %n, { 1, 0 }
  uselistorder label %dec_label_pc_2021, { 1, 0 }
}

define i32 @loop_external_state(i32* %flag) local_unnamed_addr {
dec_label_pc_2060:
  %0 = alloca i64
  %count_-20.1.reg2mem = alloca i32, !insn.addr !298
  %count_-20.0.reg2mem = alloca i32, !insn.addr !298
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp eq i32 %2, 0, !insn.addr !299
  %4 = icmp eq i1 %3, false, !insn.addr !300
  store i32 0, i32* %count_-20.0.reg2mem, !insn.addr !301
  br label %dec_label_pc_206f, !insn.addr !301

dec_label_pc_206f:                                ; preds = %dec_label_pc_207e, %dec_label_pc_2060
  store i32 0, i32* %count_-20.1.reg2mem, !insn.addr !300
  br i1 %4, label %dec_label_pc_209b, label %dec_label_pc_207e, !insn.addr !300

dec_label_pc_207e:                                ; preds = %dec_label_pc_206f
  %count_-20.0.reload = load i32, i32* %count_-20.0.reg2mem
  %5 = add nuw nsw i32 %count_-20.0.reload, 1, !insn.addr !302
  %6 = icmp ult i32 %5, 101, !insn.addr !303
  store i32 %5, i32* %count_-20.0.reg2mem, !insn.addr !303
  store i32 101, i32* %count_-20.1.reg2mem, !insn.addr !303
  br i1 %6, label %dec_label_pc_206f, label %dec_label_pc_209b, !insn.addr !303

dec_label_pc_209b:                                ; preds = %dec_label_pc_207e, %dec_label_pc_206f
  %count_-20.1.reload = load i32, i32* %count_-20.1.reg2mem
  ret i32 %count_-20.1.reload, !insn.addr !304

; uselistorder directives
  uselistorder i32* %count_-20.0.reg2mem, { 1, 0, 2 }
}

define i32 @recursion_factorial(i32 %n) local_unnamed_addr {
dec_label_pc_20a0:
  %storemerge.reg2mem = alloca i32, !insn.addr !305
  %0 = icmp sgt i32 %n, 1, !insn.addr !306
  store i32 1, i32* %storemerge.reg2mem, !insn.addr !306
  br i1 %0, label %dec_label_pc_20c1, label %dec_label_pc_20dd, !insn.addr !306

dec_label_pc_20c1:                                ; preds = %dec_label_pc_20a0
  %1 = add i32 %n, -1, !insn.addr !307
  %2 = call i32 @recursion_factorial(i32 %1), !insn.addr !308
  %3 = mul i32 %2, %n, !insn.addr !309
  store i32 %3, i32* %storemerge.reg2mem, !insn.addr !310
  br label %dec_label_pc_20dd, !insn.addr !310

dec_label_pc_20dd:                                ; preds = %dec_label_pc_20a0, %dec_label_pc_20c1
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !311

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_20dd, { 1, 0 }
}

define i32 @tail_recursion(i32 %n, i32 %acc) local_unnamed_addr {
dec_label_pc_20f0:
  %storemerge.reg2mem = alloca i32, !insn.addr !312
  %0 = icmp sgt i32 %n, 1, !insn.addr !313
  store i32 %acc, i32* %storemerge.reg2mem, !insn.addr !313
  br i1 %0, label %dec_label_pc_2113, label %dec_label_pc_2128, !insn.addr !313

dec_label_pc_2113:                                ; preds = %dec_label_pc_20f0
  %1 = add i32 %n, -1, !insn.addr !314
  %2 = mul i32 %acc, %n, !insn.addr !315
  %3 = call i32 @tail_recursion(i32 %1, i32 %2), !insn.addr !316
  store i32 %3, i32* %storemerge.reg2mem, !insn.addr !317
  br label %dec_label_pc_2128, !insn.addr !317

dec_label_pc_2128:                                ; preds = %dec_label_pc_20f0, %dec_label_pc_2113
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !318

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %acc, { 1, 0 }
  uselistorder label %dec_label_pc_2128, { 1, 0 }
}

define i32 @indirect_recursion_a(i32 %n, i32 %depth) local_unnamed_addr {
dec_label_pc_2140:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !319
  %0 = icmp eq i32 %depth, 0, !insn.addr !320
  %1 = icmp slt i32 %depth, 0, !insn.addr !320
  %2 = icmp eq i1 %1, false, !insn.addr !321
  %3 = icmp eq i1 %0, false, !insn.addr !321
  %4 = icmp eq i1 %2, %3, !insn.addr !321
  store i32 %n, i32* %stack_var_-12.0.reg2mem, !insn.addr !321
  br i1 %4, label %dec_label_pc_2163, label %dec_label_pc_21ac, !insn.addr !321

dec_label_pc_2163:                                ; preds = %dec_label_pc_2140
  %5 = zext i32 %n to i64, !insn.addr !322
  %6 = mul i64 %5, 4294967296, !insn.addr !322
  %7 = or i64 %6, %5, !insn.addr !322
  %8 = srem i64 %7, 2, !insn.addr !322
  %9 = trunc i64 %8 to i32, !insn.addr !322
  %10 = icmp eq i32 %9, 0, !insn.addr !323
  %11 = icmp eq i1 %10, false, !insn.addr !324
  br i1 %11, label %dec_label_pc_2197, label %dec_label_pc_2177, !insn.addr !324

dec_label_pc_2177:                                ; preds = %dec_label_pc_2163
  %12 = ashr i32 %n, 31, !insn.addr !325
  %13 = zext i32 %12 to i64, !insn.addr !326
  %14 = mul i64 %13, 4294967296, !insn.addr !326
  %15 = or i64 %14, %5, !insn.addr !326
  %16 = sdiv i64 %15, 2, !insn.addr !326
  %17 = trunc i64 %16 to i32, !insn.addr !326
  %18 = add i32 %depth, -1, !insn.addr !327
  %19 = call i32 @indirect_recursion_b(i32 %17, i32 %18), !insn.addr !328
  store i32 %19, i32* %stack_var_-12.0.reg2mem, !insn.addr !329
  br label %dec_label_pc_21ac, !insn.addr !329

dec_label_pc_2197:                                ; preds = %dec_label_pc_2163
  %20 = mul i32 %n, 3, !insn.addr !330
  %21 = add i32 %20, 1, !insn.addr !331
  %22 = add i32 %depth, -1, !insn.addr !332
  %23 = call i32 @indirect_recursion_b(i32 %21, i32 %22), !insn.addr !333
  store i32 %23, i32* %stack_var_-12.0.reg2mem, !insn.addr !334
  br label %dec_label_pc_21ac, !insn.addr !334

dec_label_pc_21ac:                                ; preds = %dec_label_pc_2140, %dec_label_pc_2197, %dec_label_pc_2177
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !335

; uselistorder directives
  uselistorder i64 %5, { 1, 2, 0 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32 (i32, i32)* @indirect_recursion_b, { 1, 0 }
  uselistorder i32 %depth, { 1, 0, 3, 2 }
  uselistorder i32 %n, { 3, 2, 1, 0 }
  uselistorder label %dec_label_pc_21ac, { 1, 2, 0 }
}

define i32 @indirect_recursion_b(i32 %n, i32 %depth) local_unnamed_addr {
dec_label_pc_21c0:
  %storemerge.reg2mem = alloca i32, !insn.addr !336
  %0 = icmp eq i32 %depth, 0, !insn.addr !337
  %1 = icmp slt i32 %depth, 0, !insn.addr !337
  %2 = icmp eq i1 %1, false, !insn.addr !338
  %3 = icmp eq i1 %0, false, !insn.addr !338
  %4 = icmp eq i1 %2, %3, !insn.addr !338
  store i32 %n, i32* %storemerge.reg2mem, !insn.addr !338
  br i1 %4, label %dec_label_pc_21e3, label %dec_label_pc_21f7, !insn.addr !338

dec_label_pc_21e3:                                ; preds = %dec_label_pc_21c0
  %5 = add i32 %n, 1, !insn.addr !339
  %6 = add i32 %depth, -1, !insn.addr !340
  %7 = call i32 @indirect_recursion_a(i32 %5, i32 %6), !insn.addr !341
  store i32 %7, i32* %storemerge.reg2mem, !insn.addr !342
  br label %dec_label_pc_21f7, !insn.addr !342

dec_label_pc_21f7:                                ; preds = %dec_label_pc_21c0, %dec_label_pc_21e3
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !343

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %depth, { 0, 2, 1 }
  uselistorder i32 %n, { 1, 0 }
  uselistorder label %dec_label_pc_21f7, { 1, 0 }
}

define i32 @call_func_ptr(i32 (i32)* %f, i32 %x) local_unnamed_addr {
dec_label_pc_2200:
  %0 = ptrtoint i32 (i32)* %f to i64
  %1 = trunc i64 %0 to i32, !insn.addr !344
  ret i32 %1, !insn.addr !344
}

define i32 @call_func_ptr_array(i32 %idx, i32 %x) local_unnamed_addr {
dec_label_pc_2220:
  %storemerge.reg2mem = alloca i32, !insn.addr !345
  %stack_var_-8 = alloca i64, align 8
  %0 = icmp ult i32 %idx, 3
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !346
  br i1 %0, label %dec_label_pc_226f, label %dec_label_pc_2280, !insn.addr !346

dec_label_pc_226f:                                ; preds = %dec_label_pc_2220
  %1 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !347
  %2 = sext i32 %idx to i64, !insn.addr !348
  %3 = mul i64 %2, 8, !insn.addr !349
  %4 = add nsw i64 %3, -48, !insn.addr !349
  %5 = add i64 %4, %1, !insn.addr !349
  %6 = inttoptr i64 %5 to i64*, !insn.addr !349
  %7 = load i64, i64* %6, align 8, !insn.addr !349
  %8 = trunc i64 %7 to i32, !insn.addr !350
  store i32 %8, i32* %storemerge.reg2mem, !insn.addr !350
  br label %dec_label_pc_2280, !insn.addr !350

dec_label_pc_2280:                                ; preds = %dec_label_pc_2220, %dec_label_pc_226f
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !351

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %idx, { 1, 0 }
  uselistorder label %dec_label_pc_2280, { 1, 0 }
}

define i32 @double_value(i32 %x) local_unnamed_addr {
dec_label_pc_2290:
  %0 = mul i32 %x, 2, !insn.addr !352
  ret i32 %0, !insn.addr !353
}

define i32 @triple_value(i32 %x) local_unnamed_addr {
dec_label_pc_22a0:
  %0 = mul i32 %x, 3, !insn.addr !354
  ret i32 %0, !insn.addr !355
}

define i32 @call_virtual_func(i8* %obj, i32 %x) local_unnamed_addr {
dec_label_pc_22b0:
  %0 = mul i32 %x, 2, !insn.addr !356
  ret i32 %0, !insn.addr !357
}

define i32 @process_with_callback(i32* %arr, i32 %n, i32 (i32)* %cb) local_unnamed_addr {
dec_label_pc_22d0:
  %0 = icmp sgt i32 %n, 0, !insn.addr !358
  %1 = ptrtoint i32 (i32)* %cb to i64
  %2 = trunc i64 %1 to i32
  %3 = mul i32 %2, %n
  %sum_-36.0.lcssa = select i1 %0, i32 %3, i32 0
  ret i32 %sum_-36.0.lcssa, !insn.addr !359
}

define void @test_control_flow_l2() local_unnamed_addr {
dec_label_pc_2330:
  %ext_flag_-92 = alloca i32, align 4
  %dst_-88 = alloca [1 x i32], align 4
  %src_-56 = alloca [1 x i32], align 4
  %flag_-12 = alloca i32, align 4
  %stack_var_-120 = alloca i64, align 8
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3352 to i8*)), !insn.addr !360
  %1 = call i32 @loop_multi_exit(i32 7), !insn.addr !361
  %2 = zext i32 %1 to i64, !insn.addr !362
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3377, i64 0, i64 0), i64 %2), !insn.addr !363
  store i32 0, i32* %flag_-12, align 4, !insn.addr !364
  %4 = call i32 @infinite_loop(i32* nonnull %flag_-12), !insn.addr !365
  %5 = zext i32 %4 to i64, !insn.addr !366
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3397, i64 0, i64 0), i64 %5), !insn.addr !367
  %7 = call i32 @multi_return(i32 -5), !insn.addr !368
  %8 = zext i32 %7 to i64, !insn.addr !369
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_33b5, i64 0, i64 0), i64 %8), !insn.addr !370
  %10 = call i32 @multi_return(i32 100), !insn.addr !371
  %11 = zext i32 %10 to i64, !insn.addr !372
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_33b5, i64 0, i64 0), i64 %11), !insn.addr !373
  %13 = call i32 @multi_return(i32 3), !insn.addr !374
  %14 = zext i32 %13 to i64, !insn.addr !375
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_33b5, i64 0, i64 0), i64 %14), !insn.addr !376
  %16 = call i32 @conditional_return(i32 5), !insn.addr !377
  %17 = zext i32 %16 to i64, !insn.addr !378
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_33d2, i64 0, i64 0), i64 %17), !insn.addr !379
  %19 = call i32 @conditional_return(i32 -5), !insn.addr !380
  %20 = zext i32 %19 to i64, !insn.addr !381
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_33d2, i64 0, i64 0), i64 %20), !insn.addr !382
  store [1 x i32] [i32 1], [1 x i32]* %src_-56, align 4, !insn.addr !383
  %22 = bitcast [1 x i32]* %dst_-88 to i64*, !insn.addr !384
  %23 = call i64* @memset(i64* nonnull %22, i32 0, i32 32), !insn.addr !384
  %24 = getelementptr inbounds [1 x i32], [1 x i32]* %dst_-88, i64 0, i64 0, !insn.addr !385
  %25 = getelementptr inbounds [1 x i32], [1 x i32]* %src_-56, i64 0, i64 0, !insn.addr !385
  %26 = call i32 @duffs_device(i32* nonnull %24, i32* nonnull %25, i32 8), !insn.addr !385
  %27 = zext i32 %26 to i64, !insn.addr !386
  %28 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_33f5, i64 0, i64 0), i64 %27), !insn.addr !387
  %29 = call i32 @loop_complex_cond(i32 10), !insn.addr !388
  %30 = zext i32 %29 to i64, !insn.addr !389
  %31 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3412, i64 0, i64 0), i64 %30), !insn.addr !390
  %32 = call i32 @loop_modify_var(i32 10), !insn.addr !391
  %33 = zext i32 %32 to i64, !insn.addr !392
  %34 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3434, i64 0, i64 0), i64 %33), !insn.addr !393
  store i32 0, i32* %ext_flag_-92, align 4, !insn.addr !394
  %35 = call i32 @loop_external_state(i32* nonnull %ext_flag_-92), !insn.addr !395
  %36 = zext i32 %35 to i64, !insn.addr !396
  %37 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_3454, i64 0, i64 0), i64 %36), !insn.addr !397
  %38 = call i32 @recursion_factorial(i32 5), !insn.addr !398
  %39 = zext i32 %38 to i64, !insn.addr !399
  %40 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_3478, i64 0, i64 0), i64 %39), !insn.addr !400
  %41 = call i32 @tail_recursion(i32 5, i32 1), !insn.addr !401
  %42 = zext i32 %41 to i64, !insn.addr !402
  %43 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_349c, i64 0, i64 0), i64 %42), !insn.addr !403
  %44 = call i32 @indirect_recursion_a(i32 10, i32 3), !insn.addr !404
  %45 = zext i32 %44 to i64, !insn.addr !405
  %46 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_34bb, i64 0, i64 0), i64 %45), !insn.addr !406
  %47 = call i32 @call_func_ptr(i32 (i32)* inttoptr (i64 8848 to i32 (i32)*), i32 5), !insn.addr !407
  %48 = zext i32 %47 to i64, !insn.addr !408
  %49 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_34de, i64 0, i64 0), i64 %48), !insn.addr !409
  %50 = call i32 @call_func_ptr_array(i32 xor (i32 ptrtoint ([30 x i8]* @global_var_34de to i32), i32 ptrtoint ([30 x i8]* @global_var_34de to i32)), i32 5), !insn.addr !410
  %51 = zext i32 %50 to i64, !insn.addr !411
  %52 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_34fc, i64 0, i64 0), i64 %51), !insn.addr !412
  %53 = call i32 @call_func_ptr_array(i32 2, i32 5), !insn.addr !413
  %54 = zext i32 %53 to i64, !insn.addr !414
  %55 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_34fc, i64 0, i64 0), i64 %54), !insn.addr !415
  store i64 8589934593, i64* %stack_var_-120, align 8, !insn.addr !416
  %56 = bitcast i64* %stack_var_-120 to i32*, !insn.addr !417
  %57 = call i32 @process_with_callback(i32* nonnull %56, i32 5, i32 (i32)* inttoptr (i64 8848 to i32 (i32)*)), !insn.addr !417
  %58 = zext i32 %57 to i64, !insn.addr !418
  %59 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3520, i64 0, i64 0), i64 %58), !insn.addr !419
  ret void, !insn.addr !420

; uselistorder directives
  uselistorder i32 (i32, i32)* @call_func_ptr_array, { 1, 0 }
  uselistorder i32 (i32, i32)* @indirect_recursion_a, { 1, 0 }
  uselistorder i32 (i32, i32)* @tail_recursion, { 1, 0 }
  uselistorder i32 (i32)* @recursion_factorial, { 1, 0 }
  uselistorder i32 8, { 1, 0, 2, 3 }
  uselistorder i32 (i32)* @conditional_return, { 1, 0 }
  uselistorder i32 100, { 2, 0, 1 }
  uselistorder i32 (i32)* @multi_return, { 2, 1, 0 }
  uselistorder i32 7, { 0, 3, 1, 2 }
}

define i32 @non_local_jump(i32 %x) local_unnamed_addr {
dec_label_pc_25c0:
  %storemerge.reg2mem = alloca i32, !insn.addr !421
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_6060 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !422
  %1 = icmp eq i32 %0, 0, !insn.addr !423
  %2 = icmp eq i1 %1, false, !insn.addr !424
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !424
  br i1 %2, label %dec_label_pc_262b, label %dec_label_pc_25e0, !insn.addr !424

dec_label_pc_25e0:                                ; preds = %dec_label_pc_25c0
  %3 = icmp slt i32 %x, 0, !insn.addr !425
  %4 = icmp eq i1 %3, false, !insn.addr !426
  br i1 %4, label %dec_label_pc_25fb, label %dec_label_pc_25ea, !insn.addr !426

dec_label_pc_25ea:                                ; preds = %dec_label_pc_25e0
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_6060 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 1), !insn.addr !427
  unreachable, !insn.addr !427

dec_label_pc_25fb:                                ; preds = %dec_label_pc_25e0
  %5 = icmp slt i32 %x, 101, !insn.addr !428
  br i1 %5, label %dec_label_pc_2616, label %dec_label_pc_2605, !insn.addr !428

dec_label_pc_2605:                                ; preds = %dec_label_pc_25fb
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_6060 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 2), !insn.addr !429
  unreachable, !insn.addr !429

dec_label_pc_2616:                                ; preds = %dec_label_pc_25fb
  %6 = mul i32 %x, 2, !insn.addr !430
  store i32 %6, i32* %storemerge.reg2mem, !insn.addr !431
  br label %dec_label_pc_262b, !insn.addr !431

dec_label_pc_262b:                                ; preds = %dec_label_pc_25c0, %dec_label_pc_2616
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !432

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %x, { 0, 2, 1 }
  uselistorder label %dec_label_pc_262b, { 1, 0 }
}

define i32 @cpp_exception(i32 %x) local_unnamed_addr {
dec_label_pc_2640:
  %0 = icmp slt i32 %x, 0, !insn.addr !433
  %1 = icmp eq i1 %0, false, !insn.addr !434
  br i1 %1, label %dec_label_pc_265d, label %dec_label_pc_267c, !insn.addr !434

dec_label_pc_265d:                                ; preds = %dec_label_pc_2640
  %2 = icmp slt i32 %x, 101, !insn.addr !435
  %3 = mul i32 %x, 2
  %spec.select = select i1 %2, i32 %3, i32 -2
  ret i32 %spec.select

dec_label_pc_267c:                                ; preds = %dec_label_pc_2640
  ret i32 -1, !insn.addr !436

; uselistorder directives
  uselistorder i32 -2, { 2, 0, 1 }
  uselistorder i32 101, { 1, 2, 0, 3, 4 }
}

define i32 @large_jump_table(i32 %op, i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2690:
  %storemerge.reg2mem = alloca i32, !insn.addr !437
  %stack_var_-104 = alloca i64, align 8
  %stack_var_-8 = alloca i64, align 8
  %0 = call i64* @memcpy(i64* nonnull %stack_var_-104, i64* nonnull @global_var_5d60, i32 80), !insn.addr !438
  %1 = icmp ult i32 %op, 10
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !439
  br i1 %1, label %dec_label_pc_26d6, label %dec_label_pc_26ea, !insn.addr !439

dec_label_pc_26d6:                                ; preds = %dec_label_pc_2690
  %2 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !440
  %3 = sext i32 %op to i64, !insn.addr !441
  %4 = mul i64 %3, 8, !insn.addr !442
  %5 = add nsw i64 %4, -96, !insn.addr !442
  %6 = add i64 %5, %2, !insn.addr !442
  %7 = inttoptr i64 %6 to i64*, !insn.addr !442
  %8 = load i64, i64* %7, align 8, !insn.addr !442
  %9 = trunc i64 %8 to i32, !insn.addr !443
  store i32 %9, i32* %storemerge.reg2mem, !insn.addr !443
  br label %dec_label_pc_26ea, !insn.addr !443

dec_label_pc_26ea:                                ; preds = %dec_label_pc_2690, %dec_label_pc_26d6
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !444

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %op, { 1, 0 }
  uselistorder label %dec_label_pc_26ea, { 1, 0 }
}

define i32 @op_add(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2700:
  %0 = add i32 %b, %a, !insn.addr !445
  ret i32 %0, !insn.addr !446
}

define i32 @op_sub(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2720:
  %0 = sub i32 %a, %b, !insn.addr !447
  ret i32 %0, !insn.addr !448
}

define i32 @op_mul(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2740:
  %0 = mul i32 %b, %a, !insn.addr !449
  ret i32 %0, !insn.addr !450
}

define i32 @op_div(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2760:
  %storemerge.reg2mem = alloca i32, !insn.addr !451
  %0 = icmp eq i32 %b, 0, !insn.addr !452
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !453
  br i1 %0, label %dec_label_pc_278d, label %dec_label_pc_2774, !insn.addr !453

dec_label_pc_2774:                                ; preds = %dec_label_pc_2760
  %1 = ashr i32 %a, 31, !insn.addr !454
  %2 = zext i32 %a to i64, !insn.addr !455
  %3 = zext i32 %1 to i64, !insn.addr !455
  %4 = mul i64 %3, 4294967296, !insn.addr !455
  %5 = or i64 %4, %2, !insn.addr !455
  %6 = zext i32 %b to i64, !insn.addr !455
  %7 = sdiv i64 %5, %6, !insn.addr !455
  %8 = trunc i64 %7 to i32, !insn.addr !455
  store i32 %8, i32* %storemerge.reg2mem, !insn.addr !456
  br label %dec_label_pc_278d, !insn.addr !456

dec_label_pc_278d:                                ; preds = %dec_label_pc_2760, %dec_label_pc_2774
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !457

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %a, { 1, 0 }
  uselistorder label %dec_label_pc_278d, { 1, 0 }
}

define i32 @op_mod(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_27a0:
  %storemerge.reg2mem = alloca i32, !insn.addr !458
  %0 = icmp eq i32 %b, 0, !insn.addr !459
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !460
  br i1 %0, label %dec_label_pc_27cd, label %dec_label_pc_27b4, !insn.addr !460

dec_label_pc_27b4:                                ; preds = %dec_label_pc_27a0
  %1 = ashr i32 %a, 31, !insn.addr !461
  %2 = zext i32 %a to i64, !insn.addr !462
  %3 = zext i32 %1 to i64, !insn.addr !462
  %4 = mul i64 %3, 4294967296, !insn.addr !462
  %5 = or i64 %4, %2, !insn.addr !462
  %6 = zext i32 %b to i64, !insn.addr !462
  %7 = srem i64 %5, %6, !insn.addr !462
  %8 = trunc i64 %7 to i32, !insn.addr !462
  store i32 %8, i32* %storemerge.reg2mem, !insn.addr !463
  br label %dec_label_pc_27cd, !insn.addr !463

dec_label_pc_27cd:                                ; preds = %dec_label_pc_27a0, %dec_label_pc_27b4
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !464

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %a, { 1, 0 }
  uselistorder label %dec_label_pc_27cd, { 1, 0 }
}

define i32 @op_and(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_27e0:
  %0 = and i32 %b, %a, !insn.addr !465
  ret i32 %0, !insn.addr !466
}

define i32 @op_or(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2800:
  %0 = or i32 %b, %a, !insn.addr !467
  ret i32 %0, !insn.addr !468
}

define i32 @op_xor(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2820:
  %0 = xor i32 %b, %a, !insn.addr !469
  ret i32 %0, !insn.addr !470
}

define i32 @op_shl(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2840:
  %0 = urem i32 %b, 32, !insn.addr !471
  %1 = shl i32 %a, %0
  ret i32 %1, !insn.addr !472
}

define i32 @op_shr(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2860:
  %0 = urem i32 %b, 32, !insn.addr !473
  %1 = ashr i32 %a, %0
  ret i32 %1, !insn.addr !474
}

define i32 @conditional_func_ptr(i32 %mode, i32 %x) local_unnamed_addr {
dec_label_pc_2880:
  %storemerge2.reg2mem = alloca i32, !insn.addr !475
  %0 = icmp eq i32 %mode, 0, !insn.addr !476
  %1 = icmp eq i1 %0, false, !insn.addr !477
  store i32 8848, i32* %storemerge2.reg2mem, !insn.addr !477
  br i1 %1, label %dec_label_pc_28a8, label %dec_label_pc_28d2, !insn.addr !477

dec_label_pc_28a8:                                ; preds = %dec_label_pc_2880
  %2 = icmp eq i32 %mode, 1, !insn.addr !478
  %3 = icmp eq i1 %2, false, !insn.addr !479
  %. = select i1 %3, i32 8352, i32 8864
  store i32 %., i32* %storemerge2.reg2mem, !insn.addr !480
  br label %dec_label_pc_28d2, !insn.addr !480

dec_label_pc_28d2:                                ; preds = %dec_label_pc_2880, %dec_label_pc_28a8
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  ret i32 %storemerge2.reload, !insn.addr !481

; uselistorder directives
  uselistorder i32* %storemerge2.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_28d2, { 1, 0 }
}

define i32 @state_machine(i32 %event, i32 %state) local_unnamed_addr {
dec_label_pc_28f0:
  %0 = icmp ult i32 %state, 4
  br i1 %0, label %dec_label_pc_290b, label %dec_label_pc_29a7, !insn.addr !482

dec_label_pc_290b:                                ; preds = %dec_label_pc_28f0
  %1 = sext i32 %state to i64, !insn.addr !483
  %2 = mul i64 %1, 4, !insn.addr !484
  %3 = add i64 %2, ptrtoint (i32* @global_var_3068 to i64), !insn.addr !484
  %4 = inttoptr i64 %3 to i32*, !insn.addr !484
  %5 = load i32, i32* %4, align 4, !insn.addr !484
  %6 = add i32 %5, ptrtoint (i32* @global_var_3068 to i32), !insn.addr !485
  ret i32 %6, !insn.addr !486

dec_label_pc_29a7:                                ; preds = %dec_label_pc_28f0
  ret i32 3, !insn.addr !487
}

define i32 @fsm_func_table(i32 %event, i32 %state) local_unnamed_addr {
dec_label_pc_29c0:
  %storemerge.reg2mem = alloca i32, !insn.addr !488
  %stack_var_-8 = alloca i64, align 8
  %0 = icmp ult i32 %state, 4
  store i32 3, i32* %storemerge.reg2mem, !insn.addr !489
  br i1 %0, label %dec_label_pc_2a1a, label %dec_label_pc_2a2b, !insn.addr !489

dec_label_pc_2a1a:                                ; preds = %dec_label_pc_29c0
  %1 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !490
  %2 = sext i32 %state to i64, !insn.addr !491
  %3 = mul i64 %2, 8, !insn.addr !492
  %4 = add nsw i64 %3, -48, !insn.addr !492
  %5 = add i64 %4, %1, !insn.addr !492
  %6 = inttoptr i64 %5 to i64*, !insn.addr !492
  %7 = load i64, i64* %6, align 8, !insn.addr !492
  %8 = trunc i64 %7 to i32, !insn.addr !493
  store i32 %8, i32* %storemerge.reg2mem, !insn.addr !493
  br label %dec_label_pc_2a2b, !insn.addr !493

dec_label_pc_2a2b:                                ; preds = %dec_label_pc_29c0, %dec_label_pc_2a1a
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !494

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %state, { 1, 0 }
  uselistorder label %dec_label_pc_2a2b, { 1, 0 }
}

define i32 @state_idle(i32 %event) local_unnamed_addr {
dec_label_pc_2a40:
  %0 = icmp eq i32 %event, 1, !insn.addr !495
  %1 = zext i1 %0 to i32, !insn.addr !496
  ret i32 %1, !insn.addr !497
}

define i32 @state_processing(i32 %event) local_unnamed_addr {
dec_label_pc_2a60:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !498
  %0 = icmp eq i32 %event, 2, !insn.addr !499
  %1 = icmp eq i1 %0, false, !insn.addr !500
  store i32 2, i32* %stack_var_-12.0.reg2mem, !insn.addr !500
  br i1 %1, label %dec_label_pc_2a7d, label %dec_label_pc_2a9a, !insn.addr !500

dec_label_pc_2a7d:                                ; preds = %dec_label_pc_2a60
  %2 = icmp eq i32 %event, 99, !insn.addr !501
  %3 = icmp eq i1 %2, false, !insn.addr !502
  %. = select i1 %3, i32 1, i32 3
  store i32 %., i32* %stack_var_-12.0.reg2mem, !insn.addr !503
  br label %dec_label_pc_2a9a, !insn.addr !503

dec_label_pc_2a9a:                                ; preds = %dec_label_pc_2a7d, %dec_label_pc_2a60
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !504
}

define i32 @state_done(i32 %event) local_unnamed_addr {
dec_label_pc_2aa0:
  ret i32 2, !insn.addr !505
}

define i32 @state_error(i32 %event) local_unnamed_addr {
dec_label_pc_2ab0:
  %0 = icmp eq i32 %event, 0, !insn.addr !506
  %1 = select i1 %0, i32 0, i32 3, !insn.addr !507
  ret i32 %1, !insn.addr !508
}

define i32 @computed_goto(i32* %labels, i32 %idx) local_unnamed_addr {
dec_label_pc_2ad0:
  %stack_var_-8 = alloca i64, align 8
  %0 = icmp ult i32 %idx, 4
  br i1 %0, label %dec_label_pc_2b27, label %dec_label_pc_2b1b, !insn.addr !509

dec_label_pc_2b1b:                                ; preds = %dec_label_pc_2ad0
  ret i32 -1, !insn.addr !510

dec_label_pc_2b27:                                ; preds = %dec_label_pc_2ad0
  %1 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !511
  %2 = sext i32 %idx to i64, !insn.addr !512
  %3 = mul i64 %2, 8, !insn.addr !513
  %4 = add nsw i64 %3, -64, !insn.addr !513
  %5 = add i64 %4, %1, !insn.addr !513
  %6 = inttoptr i64 %5 to i64*, !insn.addr !513
  %7 = load i64, i64* %6, align 8, !insn.addr !513
  %8 = trunc i64 %7 to i32, !insn.addr !514
  ret i32 %8, !insn.addr !515

; uselistorder directives
  uselistorder i32 -1, { 8, 0, 9, 1, 2, 15, 16, 17, 18, 19, 20, 3, 21, 4, 5, 6, 12, 7, 10, 11, 13, 14 }
  uselistorder i32 4, { 2, 3, 4, 5, 0, 6, 7, 1 }
  uselistorder i32 %idx, { 1, 0 }
}

define i32 @obfuscated_cf(i32 %x) local_unnamed_addr {
dec_label_pc_2b70:
  %0 = mul i32 %x, %x, !insn.addr !516
  %1 = add i32 %0, 1, !insn.addr !517
  %2 = icmp slt i32 %1, 0, !insn.addr !518
  %3 = icmp eq i1 %2, false, !insn.addr !519
  %4 = mul i32 %x, 2
  %5 = or i32 %4, 1
  %result_-16.0 = select i1 %3, i32 %x, i32 %5
  %6 = mul i32 %result_-16.0, 2, !insn.addr !520
  ret i32 %6, !insn.addr !521

; uselistorder directives
  uselistorder i1 false, { 0, 11, 12, 13, 14, 1, 2, 15, 16, 3, 17, 18, 4, 19, 20, 5, 6, 21, 7, 22, 23, 24, 8, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 10, 9 }
  uselistorder i32 %x, { 1, 0, 2, 3 }
}

define i32 @opaque_predicate(i32 %x) local_unnamed_addr {
dec_label_pc_2bb0:
  %0 = mul i32 %x, 2, !insn.addr !522
  ret i32 %0, !insn.addr !523
}

define i32 @overlapped_code(i32 %x) local_unnamed_addr {
dec_label_pc_2bf0:
  %storemerge.reg2mem = alloca i32, !insn.addr !524
  %0 = urem i32 %x, 2, !insn.addr !525
  %1 = icmp eq i32 %0, 0, !insn.addr !526
  br i1 %1, label %dec_label_pc_2c15, label %dec_label_pc_2c06, !insn.addr !527

dec_label_pc_2c06:                                ; preds = %dec_label_pc_2bf0
  %2 = mul i32 %x, 3, !insn.addr !528
  %3 = add i32 %2, 1, !insn.addr !529
  store i32 %3, i32* %storemerge.reg2mem, !insn.addr !530
  br label %dec_label_pc_2c23, !insn.addr !530

dec_label_pc_2c15:                                ; preds = %dec_label_pc_2bf0
  %4 = ashr i32 %x, 31, !insn.addr !531
  %5 = zext i32 %x to i64, !insn.addr !532
  %6 = zext i32 %4 to i64, !insn.addr !532
  %7 = mul i64 %6, 4294967296, !insn.addr !532
  %8 = or i64 %7, %5, !insn.addr !532
  %9 = sdiv i64 %8, 2, !insn.addr !532
  %10 = trunc i64 %9 to i32, !insn.addr !532
  store i32 %10, i32* %storemerge.reg2mem, !insn.addr !533
  br label %dec_label_pc_2c23, !insn.addr !533

dec_label_pc_2c23:                                ; preds = %dec_label_pc_2c15, %dec_label_pc_2c06
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !534

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 3, { 6, 7, 3, 0, 2, 8, 9, 10, 5, 11, 12, 13, 14, 15, 16, 17, 4, 18, 1 }
  uselistorder i32 %x, { 2, 1, 3, 0 }
}

define void @test_control_flow_l3() local_unnamed_addr {
dec_label_pc_2c30:
  %stack_var_-24 = alloca i64, align 8
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3546 to i8*)), !insn.addr !535
  %1 = call i32 @non_local_jump(i32 5), !insn.addr !536
  %2 = zext i32 %1 to i64, !insn.addr !537
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_356b, i64 0, i64 0), i64 %2), !insn.addr !538
  %4 = call i32 @non_local_jump(i32 -5), !insn.addr !539
  %5 = zext i32 %4 to i64, !insn.addr !540
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_356b, i64 0, i64 0), i64 %5), !insn.addr !541
  %7 = call i32 @cpp_exception(i32 5), !insn.addr !542
  %8 = zext i32 %7 to i64, !insn.addr !543
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_358a, i64 0, i64 0), i64 %8), !insn.addr !544
  %10 = call i32 @cpp_exception(i32 -5), !insn.addr !545
  %11 = zext i32 %10 to i64, !insn.addr !546
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_358a, i64 0, i64 0), i64 %11), !insn.addr !547
  %13 = call i32 @large_jump_table(i32 xor (i32 ptrtoint ([30 x i8]* @global_var_358a to i32), i32 ptrtoint ([30 x i8]* @global_var_358a to i32)), i32 10, i32 5), !insn.addr !548
  %14 = zext i32 %13 to i64, !insn.addr !549
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_35a8, i64 0, i64 0), i64 %14), !insn.addr !550
  %16 = call i32 @conditional_func_ptr(i32 xor (i32 ptrtoint ([33 x i8]* @global_var_35a8 to i32), i32 ptrtoint ([33 x i8]* @global_var_35a8 to i32)), i32 5), !insn.addr !551
  %17 = zext i32 %16 to i64, !insn.addr !552
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_35c9, i64 0, i64 0), i64 %17), !insn.addr !553
  %19 = call i32 @state_machine(i32 1, i32 0), !insn.addr !554
  %20 = zext i32 %19 to i64, !insn.addr !555
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_35ee, i64 0, i64 0), i64 %20), !insn.addr !556
  %22 = call i32 @fsm_func_table(i32 2, i32 1), !insn.addr !557
  %23 = zext i32 %22 to i64, !insn.addr !558
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_360c, i64 0, i64 0), i64 %23), !insn.addr !559
  store i64 4294967296, i64* %stack_var_-24, align 8, !insn.addr !560
  %25 = bitcast i64* %stack_var_-24 to i32*, !insn.addr !561
  %26 = call i32 @computed_goto(i32* nonnull %25, i32 2), !insn.addr !561
  %27 = zext i32 %26 to i64, !insn.addr !562
  %28 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_362b, i64 0, i64 0), i64 %27), !insn.addr !563
  %29 = call i32 @obfuscated_cf(i32 5), !insn.addr !564
  %30 = zext i32 %29 to i64, !insn.addr !565
  %31 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3649, i64 0, i64 0), i64 %30), !insn.addr !566
  %32 = call i32 @opaque_predicate(i32 5), !insn.addr !567
  %33 = zext i32 %32 to i64, !insn.addr !568
  %34 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3667, i64 0, i64 0), i64 %33), !insn.addr !569
  %35 = call i32 @overlapped_code(i32 5), !insn.addr !570
  %36 = zext i32 %35 to i64, !insn.addr !571
  %37 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3688, i64 0, i64 0), i64 %36), !insn.addr !572
  ret void, !insn.addr !573

; uselistorder directives
  uselistorder i64 4294967296, { 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 10 }
  uselistorder i32 2, { 19, 20, 15, 2, 3, 4, 14, 0, 21, 5, 6, 22, 23, 7, 8, 27, 28, 9, 10, 16, 24, 11, 12, 17, 18, 25, 26, 1, 13 }
  uselistorder i32 0, { 42, 48, 49, 43, 50, 51, 0, 52, 1, 53, 54, 55, 56, 46, 44, 47, 27, 29, 57, 58, 59, 60, 61, 2, 3, 62, 4, 5, 6, 30, 7, 8, 9, 10, 63, 64, 41, 39, 65, 66, 11, 12, 13, 14, 67, 68, 35, 69, 15, 16, 17, 28, 31, 18, 32, 70, 19, 71, 20, 34, 21, 33, 22, 23, 24, 72, 73, 25, 26, 36, 37, 40, 38, 45 }
  uselistorder i32 10, { 2, 1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 0 }
  uselistorder i32 (i32)* @cpp_exception, { 1, 0 }
  uselistorder i32 (i32)* @non_local_jump, { 1, 0 }
  uselistorder i32 5, { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 1, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 21, 0, 1, 2, 39, 51, 56, 34, 45, 52, 46, 41, 5, 50, 47, 53, 54, 42, 43, 44, 55, 36, 35, 40, 37, 48, 38, 59, 58, 33, 49, 32, 57, 18, 19, 14, 23, 20, 12, 24, 25, 8, 10, 9, 11, 13, 17, 29, 15, 16, 7, 26, 27, 22, 4, 3, 6, 30, 31, 28, 60 }
  uselistorder i64 0, { 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 28, 29, 30, 31, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 101, 1, 0, 102, 2, 3, 4, 5, 6, 7, 100 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_2db0:
  call void @test_control_flow_l1(), !insn.addr !574
  call void @test_control_flow_l2(), !insn.addr !575
  call void @test_control_flow_l3(), !insn.addr !576
  ret i32 xor (i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !577
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_2dd8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !578

; uselistorder directives
  uselistorder i32 1, { 3, 76, 77, 102, 116, 4, 78, 117, 103, 70, 5, 79, 104, 6, 80, 7, 8, 9, 106, 105, 10, 81, 11, 82, 111, 110, 109, 108, 107, 112, 12, 118, 13, 119, 14, 100, 15, 16, 101, 17, 120, 19, 18, 2, 121, 22, 21, 20, 122, 68, 28, 27, 26, 25, 24, 23, 29, 83, 30, 123, 31, 124, 125, 84, 33, 32, 1, 67, 126, 127, 113, 36, 35, 34, 85, 86, 87, 88, 89, 90, 128, 37, 39, 41, 65, 42, 40, 38, 73, 74, 129, 45, 69, 46, 44, 43, 130, 114, 48, 47, 49, 131, 51, 50, 64, 66, 75, 132, 53, 52, 54, 71, 57, 56, 55, 72, 58, 91, 59, 92, 60, 93, 94, 95, 61, 96, 97, 62, 98, 0, 115, 63, 99 }
}

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i64* @memset(i64*, i32, i32) local_unnamed_addr

declare i32 @_setjmp([1 x %__jmp_buf_tag]) local_unnamed_addr

declare i64* @memcpy(i64*, i64*, i32) local_unnamed_addr

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
!11 = !{i64 4224}
!12 = !{i64 4271}
!13 = !{i64 4277}
!14 = !{i64 4328}
!15 = !{i64 4392}
!16 = !{i64 4404}
!17 = !{i64 4411}
!18 = !{i64 4414}
!19 = !{i64 4425}
!20 = !{i64 4427}
!21 = !{i64 4434}
!22 = !{i64 4439}
!23 = !{i64 4444}
!24 = !{i64 4452}
!25 = !{i64 4456}
!26 = !{i64 4468}
!27 = !{i64 4496}
!28 = !{i64 4505}
!29 = !{i64 4514}
!30 = !{i64 4524}
!31 = !{i64 4539}
!32 = !{i64 4558}
!33 = !{i64 4571}
!34 = !{i64 4600}
!35 = !{i64 4622}
!36 = !{i64 4632}
!37 = !{i64 4674}
!38 = !{i64 4688}
!39 = !{i64 4712}
!40 = !{i64 4722}
!41 = !{i64 4732}
!42 = !{i64 4742}
!43 = !{i64 4752}
!44 = !{i64 4777}
!45 = !{i64 4829}
!46 = !{i64 4832}
!47 = !{i64 4839}
!48 = !{i64 4843}
!49 = !{i64 4861}
!50 = !{i64 4865}
!51 = !{i64 4883}
!52 = !{i64 4887}
!53 = !{i64 4905}
!54 = !{i64 4916}
!55 = !{i64 4928}
!56 = !{i64 4935}
!57 = !{i64 4939}
!58 = !{i64 4957}
!59 = !{i64 4961}
!60 = !{i64 4979}
!61 = !{i64 4983}
!62 = !{i64 5001}
!63 = !{i64 5005}
!64 = !{i64 5023}
!65 = !{i64 5027}
!66 = !{i64 5045}
!67 = !{i64 5056}
!68 = !{i64 5104}
!69 = !{i64 5110}
!70 = !{i64 5121}
!71 = !{i64 5125}
!72 = !{i64 5128}
!73 = !{i64 5199}
!74 = !{i64 5218}
!75 = !{i64 5224}
!76 = !{i64 5235}
!77 = !{i64 5239}
!78 = !{i64 5242}
!79 = !{i64 5375}
!80 = !{i64 5376}
!81 = !{i64 5456}
!82 = !{i64 5468}
!83 = !{i64 5473}
!84 = !{i64 5484}
!85 = !{i64 5488}
!86 = !{i64 5542}
!87 = !{i64 5545}
!88 = !{i64 5559}
!89 = !{i64 5565}
!90 = !{i64 5571}
!91 = !{i64 5574}
!92 = !{i64 5577}
!93 = !{i64 5583}
!94 = !{i64 5589}
!95 = !{i64 5605}
!96 = !{i64 5616}
!97 = !{i64 5643}
!98 = !{i64 5676}
!99 = !{i64 5680}
!100 = !{i64 5694}
!101 = !{i64 5698}
!102 = !{i64 5712}
!103 = !{i64 5713}
!104 = !{i64 5721}
!105 = !{i64 5770}
!106 = !{i64 5776}
!107 = !{i64 5783}
!108 = !{i64 5798}
!109 = !{i64 5799}
!110 = !{i64 5807}
!111 = !{i64 5813}
!112 = !{i64 5817}
!113 = !{i64 5827}
!114 = !{i64 5840}
!115 = !{i64 5870}
!116 = !{i64 5941}
!117 = !{i64 5952}
!118 = !{i64 5953}
!119 = !{i64 6020}
!120 = !{i64 6016}
!121 = !{i64 6024}
!122 = !{i64 6027}
!123 = !{i64 6052}
!124 = !{i64 6010}
!125 = !{i64 6074}
!126 = !{i64 6080}
!127 = !{i64 6107}
!128 = !{i64 6122}
!129 = !{i64 6124}
!130 = !{i64 6127}
!131 = !{i64 6150}
!132 = !{i64 6165}
!133 = !{i64 6222}
!134 = !{i64 6232}
!135 = !{i64 6240}
!136 = !{i64 6247}
!137 = !{i64 6251}
!138 = !{i64 6289}
!139 = !{i64 6303}
!140 = !{i64 6313}
!141 = !{i64 6334}
!142 = !{i64 6352}
!143 = !{i64 6379}
!144 = !{i64 6397}
!145 = !{i64 6417}
!146 = !{i64 6422}
!147 = !{i64 6433}
!148 = !{i64 6443}
!149 = !{i64 6448}
!150 = !{i64 6459}
!151 = !{i64 6469}
!152 = !{i64 6474}
!153 = !{i64 6485}
!154 = !{i64 6495}
!155 = !{i64 6500}
!156 = !{i64 6511}
!157 = !{i64 6521}
!158 = !{i64 6526}
!159 = !{i64 6537}
!160 = !{i64 6552}
!161 = !{i64 6557}
!162 = !{i64 6568}
!163 = !{i64 6583}
!164 = !{i64 6588}
!165 = !{i64 6599}
!166 = !{i64 6614}
!167 = !{i64 6619}
!168 = !{i64 6630}
!169 = !{i64 6653}
!170 = !{i64 6658}
!171 = !{i64 6669}
!172 = !{i64 6679}
!173 = !{i64 6684}
!174 = !{i64 6695}
!175 = !{i64 6705}
!176 = !{i64 6710}
!177 = !{i64 6721}
!178 = !{i64 6731}
!179 = !{i64 6736}
!180 = !{i64 6747}
!181 = !{i64 6757}
!182 = !{i64 6762}
!183 = !{i64 6773}
!184 = !{i64 6783}
!185 = !{i64 6788}
!186 = !{i64 6799}
!187 = !{i64 6809}
!188 = !{i64 6814}
!189 = !{i64 6825}
!190 = !{i64 6835}
!191 = !{i64 6840}
!192 = !{i64 6851}
!193 = !{i64 6861}
!194 = !{i64 6866}
!195 = !{i64 6877}
!196 = !{i64 6887}
!197 = !{i64 6892}
!198 = !{i64 6903}
!199 = !{i64 6918}
!200 = !{i64 6923}
!201 = !{i64 6934}
!202 = !{i64 6944}
!203 = !{i64 6949}
!204 = !{i64 6960}
!205 = !{i64 6970}
!206 = !{i64 6975}
!207 = !{i64 6986}
!208 = !{i64 6996}
!209 = !{i64 7001}
!210 = !{i64 7012}
!211 = !{i64 7022}
!212 = !{i64 7027}
!213 = !{i64 7038}
!214 = !{i64 7048}
!215 = !{i64 7053}
!216 = !{i64 7064}
!217 = !{i64 7074}
!218 = !{i64 7079}
!219 = !{i64 7090}
!220 = !{i64 7105}
!221 = !{i64 7110}
!222 = !{i64 7121}
!223 = !{i64 7136}
!224 = !{i64 7141}
!225 = !{i64 7152}
!226 = !{i64 7158}
!227 = !{i64 7168}
!228 = !{i64 7195}
!229 = !{i64 7238}
!230 = !{i64 7234}
!231 = !{i64 7242}
!232 = !{i64 7246}
!233 = !{i64 7249}
!234 = !{i64 7253}
!235 = !{i64 7256}
!236 = !{i64 7259}
!237 = !{i64 7265}
!238 = !{i64 7269}
!239 = !{i64 7275}
!240 = !{i64 7288}
!241 = !{i64 7228}
!242 = !{i64 7307}
!243 = !{i64 7211}
!244 = !{i64 7333}
!245 = !{i64 7344}
!246 = !{i64 7365}
!247 = !{i64 7368}
!248 = !{i64 7352}
!249 = !{i64 7382}
!250 = !{i64 7395}
!251 = !{i64 7405}
!252 = !{i64 7411}
!253 = !{i64 7425}
!254 = !{i64 7440}
!255 = !{i64 7447}
!256 = !{i64 7451}
!257 = !{i64 7472}
!258 = !{i64 7482}
!259 = !{i64 7509}
!260 = !{i64 7511}
!261 = !{i64 7514}
!262 = !{i64 7544}
!263 = !{i64 7552}
!264 = !{i64 7563}
!265 = !{i64 7572}
!266 = !{i64 7578}
!267 = !{i64 7583}
!268 = !{i64 7587}
!269 = !{i64 7625}
!270 = !{i64 7632}
!271 = !{i64 7647}
!272 = !{i64 7651}
!273 = !{i64 7696}
!274 = !{i64 7703}
!275 = !{i64 7706}
!276 = !{i64 7709}
!277 = !{i64 7720}
!278 = !{i64 7711}
!279 = !{i64 7737}
!280 = !{i64 7741}
!281 = !{i64 7744}
!282 = !{i64 8056}
!283 = !{i64 8064}
!284 = !{i64 8102}
!285 = !{i64 8152}
!286 = !{i64 8161}
!287 = !{i64 8170}
!288 = !{i64 8117}
!289 = !{i64 8184}
!290 = !{i64 8187}
!291 = !{i64 8191}
!292 = !{i64 8192}
!293 = !{i64 8219}
!294 = !{i64 8228}
!295 = !{i64 8238}
!296 = !{i64 8261}
!297 = !{i64 8276}
!298 = !{i64 8288}
!299 = !{i64 8309}
!300 = !{i64 8312}
!301 = !{i64 8296}
!302 = !{i64 8321}
!303 = !{i64 8331}
!304 = !{i64 8351}
!305 = !{i64 8352}
!306 = !{i64 8367}
!307 = !{i64 8394}
!308 = !{i64 8397}
!309 = !{i64 8407}
!310 = !{i64 8410}
!311 = !{i64 8421}
!312 = !{i64 8432}
!313 = !{i64 8450}
!314 = !{i64 8470}
!315 = !{i64 8476}
!316 = !{i64 8480}
!317 = !{i64 8485}
!318 = !{i64 8496}
!319 = !{i64 8512}
!320 = !{i64 8526}
!321 = !{i64 8530}
!322 = !{i64 8556}
!323 = !{i64 8558}
!324 = !{i64 8561}
!325 = !{i64 8575}
!326 = !{i64 8576}
!327 = !{i64 8583}
!328 = !{i64 8586}
!329 = !{i64 8594}
!330 = !{i64 8599}
!331 = !{i64 8603}
!332 = !{i64 8609}
!333 = !{i64 8612}
!334 = !{i64 8617}
!335 = !{i64 8628}
!336 = !{i64 8640}
!337 = !{i64 8654}
!338 = !{i64 8658}
!339 = !{i64 8678}
!340 = !{i64 8684}
!341 = !{i64 8687}
!342 = !{i64 8692}
!343 = !{i64 8703}
!344 = !{i64 8733}
!345 = !{i64 8736}
!346 = !{i64 8787}
!347 = !{i64 8737}
!348 = !{i64 8815}
!349 = !{i64 8819}
!350 = !{i64 8829}
!351 = !{i64 8840}
!352 = !{i64 8858}
!353 = !{i64 8862}
!354 = !{i64 8871}
!355 = !{i64 8876}
!356 = !{i64 8894}
!357 = !{i64 8898}
!358 = !{i64 8951}
!359 = !{i64 9002}
!360 = !{i64 9025}
!361 = !{i64 9035}
!362 = !{i64 9040}
!363 = !{i64 9051}
!364 = !{i64 9056}
!365 = !{i64 9067}
!366 = !{i64 9072}
!367 = !{i64 9083}
!368 = !{i64 9093}
!369 = !{i64 9098}
!370 = !{i64 9109}
!371 = !{i64 9119}
!372 = !{i64 9124}
!373 = !{i64 9135}
!374 = !{i64 9145}
!375 = !{i64 9150}
!376 = !{i64 9161}
!377 = !{i64 9171}
!378 = !{i64 9176}
!379 = !{i64 9187}
!380 = !{i64 9197}
!381 = !{i64 9202}
!382 = !{i64 9213}
!383 = !{i64 9225}
!384 = !{i64 9273}
!385 = !{i64 9291}
!386 = !{i64 9296}
!387 = !{i64 9307}
!388 = !{i64 9317}
!389 = !{i64 9322}
!390 = !{i64 9333}
!391 = !{i64 9343}
!392 = !{i64 9348}
!393 = !{i64 9359}
!394 = !{i64 9364}
!395 = !{i64 9375}
!396 = !{i64 9380}
!397 = !{i64 9391}
!398 = !{i64 9401}
!399 = !{i64 9406}
!400 = !{i64 9417}
!401 = !{i64 9432}
!402 = !{i64 9437}
!403 = !{i64 9448}
!404 = !{i64 9463}
!405 = !{i64 9468}
!406 = !{i64 9479}
!407 = !{i64 9496}
!408 = !{i64 9501}
!409 = !{i64 9512}
!410 = !{i64 9524}
!411 = !{i64 9529}
!412 = !{i64 9540}
!413 = !{i64 9555}
!414 = !{i64 9560}
!415 = !{i64 9571}
!416 = !{i64 9583}
!417 = !{i64 9623}
!418 = !{i64 9628}
!419 = !{i64 9639}
!420 = !{i64 9649}
!421 = !{i64 9664}
!422 = !{i64 9682}
!423 = !{i64 9687}
!424 = !{i64 9690}
!425 = !{i64 9696}
!426 = !{i64 9700}
!427 = !{i64 9718}
!428 = !{i64 9727}
!429 = !{i64 9745}
!430 = !{i64 9753}
!431 = !{i64 9759}
!432 = !{i64 9779}
!433 = !{i64 9799}
!434 = !{i64 9803}
!435 = !{i64 9825}
!436 = !{i64 9856}
!437 = !{i64 9872}
!438 = !{i64 9905}
!439 = !{i64 9914}
!440 = !{i64 9873}
!441 = !{i64 9942}
!442 = !{i64 9946}
!443 = !{i64 9959}
!444 = !{i64 9970}
!445 = !{i64 9997}
!446 = !{i64 10001}
!447 = !{i64 10029}
!448 = !{i64 10033}
!449 = !{i64 10061}
!450 = !{i64 10066}
!451 = !{i64 10080}
!452 = !{i64 10090}
!453 = !{i64 10094}
!454 = !{i64 10103}
!455 = !{i64 10104}
!456 = !{i64 10110}
!457 = !{i64 10129}
!458 = !{i64 10144}
!459 = !{i64 10154}
!460 = !{i64 10158}
!461 = !{i64 10167}
!462 = !{i64 10168}
!463 = !{i64 10174}
!464 = !{i64 10193}
!465 = !{i64 10221}
!466 = !{i64 10225}
!467 = !{i64 10253}
!468 = !{i64 10257}
!469 = !{i64 10285}
!470 = !{i64 10289}
!471 = !{i64 10320}
!472 = !{i64 10323}
!473 = !{i64 10352}
!474 = !{i64 10355}
!475 = !{i64 10368}
!476 = !{i64 10382}
!477 = !{i64 10386}
!478 = !{i64 10408}
!479 = !{i64 10412}
!480 = !{i64 10445}
!481 = !{i64 10464}
!482 = !{i64 10501}
!483 = !{i64 10507}
!484 = !{i64 10518}
!485 = !{i64 10522}
!486 = !{i64 10525}
!487 = !{i64 10674}
!488 = !{i64 10688}
!489 = !{i64 10750}
!490 = !{i64 10689}
!491 = !{i64 10778}
!492 = !{i64 10782}
!493 = !{i64 10792}
!494 = !{i64 10803}
!495 = !{i64 10833}
!496 = !{i64 10836}
!497 = !{i64 10840}
!498 = !{i64 10848}
!499 = !{i64 10855}
!500 = !{i64 10859}
!501 = !{i64 10877}
!502 = !{i64 10881}
!503 = !{i64 10899}
!504 = !{i64 10910}
!505 = !{i64 10925}
!506 = !{i64 10945}
!507 = !{i64 10948}
!508 = !{i64 10952}
!509 = !{i64 11019}
!510 = !{i64 11112}
!511 = !{i64 10961}
!512 = !{i64 11047}
!513 = !{i64 11051}
!514 = !{i64 11056}
!515 = !{i64 11117}
!516 = !{i64 11136}
!517 = !{i64 11140}
!518 = !{i64 11143}
!519 = !{i64 11146}
!520 = !{i64 11167}
!521 = !{i64 11177}
!522 = !{i64 11220}
!523 = !{i64 11242}
!524 = !{i64 11248}
!525 = !{i64 11258}
!526 = !{i64 11261}
!527 = !{i64 11264}
!528 = !{i64 11270}
!529 = !{i64 11274}
!530 = !{i64 11280}
!531 = !{i64 11293}
!532 = !{i64 11294}
!533 = !{i64 11296}
!534 = !{i64 11303}
!535 = !{i64 11329}
!536 = !{i64 11339}
!537 = !{i64 11344}
!538 = !{i64 11355}
!539 = !{i64 11365}
!540 = !{i64 11370}
!541 = !{i64 11381}
!542 = !{i64 11391}
!543 = !{i64 11396}
!544 = !{i64 11407}
!545 = !{i64 11417}
!546 = !{i64 11422}
!547 = !{i64 11433}
!548 = !{i64 11450}
!549 = !{i64 11455}
!550 = !{i64 11466}
!551 = !{i64 11478}
!552 = !{i64 11483}
!553 = !{i64 11494}
!554 = !{i64 11506}
!555 = !{i64 11511}
!556 = !{i64 11522}
!557 = !{i64 11537}
!558 = !{i64 11542}
!559 = !{i64 11553}
!560 = !{i64 11565}
!561 = !{i64 11589}
!562 = !{i64 11594}
!563 = !{i64 11605}
!564 = !{i64 11615}
!565 = !{i64 11620}
!566 = !{i64 11631}
!567 = !{i64 11641}
!568 = !{i64 11646}
!569 = !{i64 11657}
!570 = !{i64 11667}
!571 = !{i64 11672}
!572 = !{i64 11683}
!573 = !{i64 11693}
!574 = !{i64 11711}
!575 = !{i64 11716}
!576 = !{i64 11721}
!577 = !{i64 11733}
!578 = !{i64 11748}
