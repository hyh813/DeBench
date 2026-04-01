source_filename = "test"
target datalayout = "e-m:e-i64:64-i128:128-n32:64-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@0 = external local_unnamed_addr global i32
@global_var_13000 = global i64 2176
@global_var_13008 = local_unnamed_addr global i64 2176
@global_var_13010 = local_unnamed_addr global i64 2176
@global_var_13018 = local_unnamed_addr global i64 2176
@global_var_13020 = local_unnamed_addr global i64 2176
@global_var_13028 = local_unnamed_addr global i64 2176
@global_var_13030 = local_unnamed_addr global i64 2176
@global_var_13038 = local_unnamed_addr global i64 2176
@global_var_12fd8 = local_unnamed_addr global i64 6292
@global_var_12fd0 = local_unnamed_addr global i64 0
@global_var_13050 = global i64 0
@global_var_12fc0 = local_unnamed_addr global i64 0
@global_var_12fe0 = local_unnamed_addr global i64 0
@global_var_a34 = local_unnamed_addr constant i64 4107637316607016992
@global_var_18d8 = constant i64 85899345930
@global_var_191c = constant [31 x i8] c"CF-L1-01 (sequential_ops): %d\0A\00"
@global_var_193b = constant [26 x i8] c"CF-L1-02 (single_if): %d\0A\00"
@global_var_1955 = constant [24 x i8] c"CF-L1-03 (if_else): %d\0A\00"
@global_var_196d = constant [28 x i8] c"CF-L1-04 (nested_if_2): %d\0A\00"
@global_var_1989 = constant [31 x i8] c"CF-L1-05 (nested_if_deep): %d\0A\00"
@global_var_19a8 = constant [32 x i8] c"CF-L1-06 (if_elseif_chain): %d\0A\00"
@global_var_19c8 = constant [31 x i8] c"CF-L1-07 (if_elseif_long): %d\0A\00"
@global_var_19e7 = constant [29 x i8] c"CF-L1-08 (switch_small): %d\0A\00"
@global_var_1a04 = constant [29 x i8] c"CF-L1-09 (switch_large): %d\0A\00"
@global_var_1a21 = constant [31 x i8] c"CF-L1-10 (switch_default): %d\0A\00"
@global_var_1a40 = constant [35 x i8] c"CF-L1-11 (switch_fallthrough): %d\0A\00"
@global_var_1a63 = constant [31 x i8] c"CF-L1-12 (loop_for_fixed): %d\0A\00"
@global_var_1a82 = constant [27 x i8] c"CF-L1-13 (loop_while): %d\0A\00"
@global_var_1a9d = constant [29 x i8] c"CF-L1-14 (loop_dowhile): %d\0A\00"
@global_var_1aba = constant [28 x i8] c"CF-L1-15 (loop_nested): %d\0A\00"
@global_var_1ad6 = constant [27 x i8] c"CF-L1-16 (loop_break): %d\0A\00"
@global_var_1af1 = constant [30 x i8] c"CF-L1-17 (loop_continue): %d\0A\00"
@global_var_1b0f = constant [29 x i8] c"CF-L1-18 (goto_forward): %d\0A\00"
@global_var_1b2c = constant [30 x i8] c"CF-L1-19 (goto_backward): %d\0A\00"
@global_var_1b4a = constant [27 x i8] c"CF-L1-20 (ternary_op): %d\0A\00"
@global_var_18f0 = constant i64 12884901890
@global_var_18ec = constant i64 8589934593
@global_var_18cc = local_unnamed_addr constant i64 145247719580765696
@global_var_12d30 = local_unnamed_addr global i64 4668
@global_var_12c8 = local_unnamed_addr constant i64 -6188223065600557046
@global_var_1b65 = constant [32 x i8] c"CF-L2-01 (loop_multi_exit): %d\0A\00"
@global_var_1b85 = constant [30 x i8] c"CF-L2-02 (infinite_loop): %d\0A\00"
@global_var_1ba3 = constant [29 x i8] c"CF-L2-03 (multi_return): %d\0A\00"
@global_var_1bc0 = constant [35 x i8] c"CF-L2-04 (conditional_return): %d\0A\00"
@global_var_1be3 = constant [29 x i8] c"CF-L2-05 (duffs_device): %d\0A\00"
@global_var_1c00 = constant [34 x i8] c"CF-L2-06 (loop_complex_cond): %d\0A\00"
@global_var_1c22 = constant [32 x i8] c"CF-L2-07 (loop_modify_var): %d\0A\00"
@global_var_1c42 = constant [36 x i8] c"CF-L2-08 (loop_external_state): %d\0A\00"
@global_var_1c66 = constant [36 x i8] c"CF-L2-09 (recursion_factorial): %d\0A\00"
@global_var_1c8a = constant [31 x i8] c"CF-L2-10 (tail_recursion): %d\0A\00"
@global_var_1ca9 = constant [35 x i8] c"CF-L2-11 (indirect_recursion): %d\0A\00"
@global_var_1ccc = constant [30 x i8] c"CF-L2-12 (call_func_ptr): %d\0A\00"
@global_var_1cea = constant [36 x i8] c"CF-L2-13 (call_func_ptr_array): %d\0A\00"
@global_var_1d0e = constant [38 x i8] c"CF-L2-15 (process_with_callback): %d\0A\00"
@global_var_1514 = local_unnamed_addr constant i64 1333065490574082144
@global_var_155c = local_unnamed_addr constant i64 5989638009786466344
@global_var_12d48 = local_unnamed_addr global i64 5552
@global_var_18d4 = local_unnamed_addr constant i64 43151263232
@global_var_12d98 = local_unnamed_addr global i64 5872
@global_var_12db8 = local_unnamed_addr global i64 5964
@global_var_1d34 = constant [31 x i8] c"CF-L3-01 (non_local_jump): %d\0A\00"
@global_var_1d53 = constant [30 x i8] c"CF-L3-02 (cpp_exception): %d\0A\00"
@global_var_1d71 = constant [33 x i8] c"CF-L3-03 (large_jump_table): %d\0A\00"
@global_var_1d92 = constant [37 x i8] c"CF-L3-04 (conditional_func_ptr): %d\0A\00"
@global_var_1db7 = constant [30 x i8] c"CF-L3-05 (state_machine): %d\0A\00"
@global_var_1dd5 = constant [31 x i8] c"CF-L3-06 (fsm_func_table): %d\0A\00"
@global_var_1840 = local_unnamed_addr constant i64 -7493990079208095679
@global_var_1df4 = constant [30 x i8] c"CF-L3-07 (computed_goto): %d\0A\00"
@global_var_1e12 = constant [30 x i8] c"CF-L3-08 (obfuscated_cf): %d\0A\00"
@global_var_1e30 = constant [33 x i8] c"CF-L3-09 (opaque_predicate): %d\0A\00"
@global_var_1e51 = constant [32 x i8] c"CF-L3-10 (overlapped_code): %d\0A\00"
@1 = external global i32
@global_var_1ee0 = constant i32* inttoptr (i64 21474836495 to i32*)
@2 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\9F\BA\E7\A1\80\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_1e71 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @2, i64 0, i64 0)
@global_var_3e9 = global i1 false
@3 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\AB\98\E7\BA\A7\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_1e95 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @3, i64 0, i64 0)
@global_var_13058 = global i32 0
@4 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\9E\81\E7\AB\AF\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_1eb9 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @4, i64 0, i64 0)

define i64 @_init(i64 %arg1) local_unnamed_addr {
dec_label_pc_860:
  %0 = call i64 @call_weak_fn(), !insn.addr !0
  ret i64 %0, !insn.addr !1
}

define i32 @function_8a0([1 x %__jmp_buf_tag] %env) local_unnamed_addr {
dec_label_pc_8a0:
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] %env), !insn.addr !2
  ret i32 %0, !insn.addr !2
}

define i32 @function_8b0(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_8b0:
  %0 = call i32 @__libc_start_main(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i64 @function_8c0(i64 %arg1) local_unnamed_addr {
dec_label_pc_8c0:
  %0 = call i64 @__cxa_finalize.5(i64 %arg1), !insn.addr !4
  ret i64 %0, !insn.addr !4
}

define i64 @function_8d0(i64 %arg1) local_unnamed_addr {
dec_label_pc_8d0:
  %0 = call i64 @__gmon_start__.6(i64 %arg1), !insn.addr !5
  ret i64 %0, !insn.addr !5
}

define void @function_8e0() local_unnamed_addr {
dec_label_pc_8e0:
  call void @abort(), !insn.addr !6
  ret void, !insn.addr !6
}

define i32 @function_8f0(i8* %s) local_unnamed_addr {
dec_label_pc_8f0:
  %0 = call i32 @puts(i8* %s), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define void @function_900([1 x %__jmp_buf_tag] %env, i32 %val) local_unnamed_addr {
dec_label_pc_900:
  call void @longjmp([1 x %__jmp_buf_tag] %env, i32 %val), !insn.addr !8
  ret void, !insn.addr !8
}

define i32 @function_910(i8* %format, ...) local_unnamed_addr {
dec_label_pc_910:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i64 @_start(i64 %arg1) local_unnamed_addr {
dec_label_pc_940:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_8 = alloca i64, align 8
  %2 = load i64, i64* @global_var_12fd8, align 8, !insn.addr !10
  %3 = trunc i64 %arg1 to i32, !insn.addr !11
  %4 = bitcast i64* %stack_var_8 to i8**, !insn.addr !11
  %5 = inttoptr i64 %1 to void ()*, !insn.addr !11
  %6 = call i32 @__libc_start_main(i64 %2, i32 %3, i8** nonnull %4, void ()* null, void ()* null, void ()* %5), !insn.addr !11
  call void @abort(), !insn.addr !12
  ret i64 ptrtoint (i32* @1 to i64), !insn.addr !12
}

define i64 @call_weak_fn() local_unnamed_addr {
dec_label_pc_974:
  %0 = load i64, i64* @global_var_12fd0, align 8, !insn.addr !13
  %1 = icmp eq i64 %0, 0, !insn.addr !14
  br i1 %1, label %dec_label_pc_984, label %dec_label_pc_980, !insn.addr !14

dec_label_pc_980:                                 ; preds = %dec_label_pc_974
  %2 = call i64 @__gmon_start__.6(i64 %0), !insn.addr !15
  ret i64 %2, !insn.addr !15

dec_label_pc_984:                                 ; preds = %dec_label_pc_974
  ret i64 0, !insn.addr !16
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_990:
  ret i64 ptrtoint (i64* @global_var_13050 to i64), !insn.addr !17
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_9c0:
  ret i64 ptrtoint (i64* @global_var_13050 to i64), !insn.addr !18
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_a00:
  %x0.0.reg2mem = alloca i64, !insn.addr !19
  %0 = load i8, i8* bitcast (i64* @global_var_13050 to i8*), align 8, !insn.addr !20
  %1 = zext i8 %0 to i64, !insn.addr !20
  %2 = icmp eq i8 %0, 0, !insn.addr !21
  store i64 %1, i64* %x0.0.reg2mem, !insn.addr !21
  br i1 %2, label %dec_label_pc_a18, label %dec_label_pc_a3c, !insn.addr !21

dec_label_pc_a18:                                 ; preds = %dec_label_pc_a00
  %3 = load i64, i64* inttoptr (i64 77768 to i64*), align 8, !insn.addr !22
  %4 = icmp eq i64 %3, 0, !insn.addr !23
  br i1 %4, label %dec_label_pc_a30, label %dec_label_pc_a24, !insn.addr !23

dec_label_pc_a24:                                 ; preds = %dec_label_pc_a18
  %5 = load i64, i64* inttoptr (i64 add (i64 ptrtoint (i64* @global_var_13000 to i64), i64 72) to i64*), align 8, !insn.addr !24
  %6 = call i64 @__cxa_finalize.5(i64 %5), !insn.addr !25
  br label %dec_label_pc_a30, !insn.addr !25

dec_label_pc_a30:                                 ; preds = %dec_label_pc_a24, %dec_label_pc_a18
  %7 = call i64 @deregister_tm_clones(), !insn.addr !26
  store i8 1, i8* bitcast (i64* @global_var_13050 to i8*), align 8, !insn.addr !27
  store i64 1, i64* %x0.0.reg2mem, !insn.addr !27
  br label %dec_label_pc_a3c, !insn.addr !27

dec_label_pc_a3c:                                 ; preds = %dec_label_pc_a00, %dec_label_pc_a30
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !28

; uselistorder directives
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_a3c, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_a50:
  %0 = call i64 @register_tm_clones(), !insn.addr !29
  ret i64 %0, !insn.addr !29
}

define i64 @sequential_ops() local_unnamed_addr {
dec_label_pc_a54:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = add i64 %3, %2, !insn.addr !30
  %5 = mul i64 %4, 2, !insn.addr !31
  %6 = sub i64 %5, %1, !insn.addr !32
  %7 = and i64 %6, 4294967295, !insn.addr !32
  ret i64 %7, !insn.addr !33

; uselistorder directives
  uselistorder i64* %0, { 2, 1, 0 }
}

define i64 @single_if() local_unnamed_addr {
dec_label_pc_a64:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !34
  %3 = icmp slt i32 %2, 1
  %4 = icmp ne i1 %3, true, !insn.addr !35
  %5 = zext i1 %4 to i32, !insn.addr !35
  %6 = shl i32 %2, %5, !insn.addr !36
  %7 = zext i32 %6 to i64, !insn.addr !36
  ret i64 %7, !insn.addr !37
}

define i64 @if_else() local_unnamed_addr {
dec_label_pc_a74:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !38
  %3 = icmp slt i32 %2, 1
  %4 = icmp ne i1 %3, true, !insn.addr !39
  %5 = zext i1 %4 to i64, !insn.addr !39
  ret i64 %5, !insn.addr !40
}

define i64 @nested_if_2() local_unnamed_addr {
dec_label_pc_a80:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32, !insn.addr !41
  %4 = icmp slt i32 %3, 0
  %5 = zext i1 %4 to i32
  %6 = add nsw i32 %5, -1, !insn.addr !41
  %7 = and i32 %6, %3, !insn.addr !41
  %8 = trunc i64 %2 to i32, !insn.addr !42
  %9 = add i32 %7, %8, !insn.addr !43
  %10 = icmp slt i32 %8, 1
  %11 = select i1 %10, i32 0, i32 %9, !insn.addr !44
  %12 = zext i32 %11 to i64, !insn.addr !44
  ret i64 %12, !insn.addr !45

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @nested_if_deep() local_unnamed_addr {
dec_label_pc_a94:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !46
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = load i64, i64* %0
  %6 = trunc i64 %5 to i32, !insn.addr !47
  %7 = icmp slt i32 %6, 1, !insn.addr !47
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !47
  br i1 %7, label %dec_label_pc_ac4, label %dec_label_pc_a9c, !insn.addr !47

dec_label_pc_a9c:                                 ; preds = %dec_label_pc_a94
  %8 = trunc i64 %4 to i32, !insn.addr !48
  %9 = icmp slt i32 %8, 1, !insn.addr !48
  store i64 1, i64* %storemerge.reg2mem, !insn.addr !48
  br i1 %9, label %dec_label_pc_ac4, label %dec_label_pc_aa4, !insn.addr !48

dec_label_pc_aa4:                                 ; preds = %dec_label_pc_a9c
  %10 = trunc i64 %3 to i32, !insn.addr !49
  %11 = icmp slt i32 %10, 1, !insn.addr !49
  store i64 2, i64* %storemerge.reg2mem, !insn.addr !49
  br i1 %11, label %dec_label_pc_ac4, label %dec_label_pc_aac, !insn.addr !49

dec_label_pc_aac:                                 ; preds = %dec_label_pc_aa4
  %12 = trunc i64 %2 to i32, !insn.addr !50
  %13 = icmp slt i32 %12, 1, !insn.addr !50
  store i64 3, i64* %storemerge.reg2mem, !insn.addr !50
  br i1 %13, label %dec_label_pc_ac4, label %dec_label_pc_ab4, !insn.addr !50

dec_label_pc_ab4:                                 ; preds = %dec_label_pc_aac
  %14 = trunc i64 %1 to i32, !insn.addr !51
  %15 = icmp slt i32 %14, 1
  %. = select i1 %15, i64 4, i64 5
  store i64 %., i64* %storemerge.reg2mem, !insn.addr !52
  br label %dec_label_pc_ac4, !insn.addr !52

dec_label_pc_ac4:                                 ; preds = %dec_label_pc_aac, %dec_label_pc_aa4, %dec_label_pc_a9c, %dec_label_pc_a94, %dec_label_pc_ab4
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !53

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 5, 1, 2, 3, 4 }
  uselistorder i64* %0, { 4, 3, 2, 1, 0 }
  uselistorder label %dec_label_pc_ac4, { 4, 0, 1, 2, 3 }
}

define i64 @if_elseif_chain() local_unnamed_addr {
dec_label_pc_ae4:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !54
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !55
  %3 = icmp ult i32 %2, 3, !insn.addr !55
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !56
  br i1 %3, label %4, label %8, !insn.addr !56

; <label>:4:                                      ; preds = %dec_label_pc_ae4
  %5 = mul i64 %1, 10, !insn.addr !57
  %6 = add i64 %5, 10, !insn.addr !58
  %7 = and i64 %6, 4294967294, !insn.addr !56
  store i64 %7, i64* %storemerge.reg2mem, !insn.addr !56
  br label %8, !insn.addr !56

; <label>:8:                                      ; preds = %dec_label_pc_ae4, %4
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !59

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %8, { 1, 0 }
}

define i64 @if_elseif_long() local_unnamed_addr {
dec_label_pc_afc:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !60
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !61
  %3 = icmp ult i32 %2, 5, !insn.addr !61
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !62
  br i1 %3, label %4, label %8, !insn.addr !62

; <label>:4:                                      ; preds = %dec_label_pc_afc
  %5 = mul i64 %1, 100, !insn.addr !63
  %6 = add i64 %5, 100, !insn.addr !64
  %7 = and i64 %6, 4294967292, !insn.addr !62
  store i64 %7, i64* %storemerge.reg2mem, !insn.addr !62
  br label %8, !insn.addr !62

; <label>:8:                                      ; preds = %dec_label_pc_afc, %4
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !65

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %8, { 1, 0 }
}

define i64 @switch_small() local_unnamed_addr {
dec_label_pc_b14:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !66
  %3 = icmp ult i32 %2, 3, !insn.addr !66
  %4 = icmp ne i1 %3, true, !insn.addr !66
  %5 = icmp eq i32 %2, 3, !insn.addr !66
  %6 = icmp ne i1 %5, true, !insn.addr !67
  %7 = icmp eq i1 %4, %6, !insn.addr !67
  br i1 %7, label %dec_label_pc_b2c, label %dec_label_pc_b1c, !insn.addr !67

dec_label_pc_b1c:                                 ; preds = %dec_label_pc_b14
  %8 = mul i64 %1, 4, !insn.addr !68
  %9 = and i64 %8, 4294967292, !insn.addr !68
  %10 = add i64 %9, ptrtoint (i32** @global_var_1ee0 to i64), !insn.addr !68
  %11 = inttoptr i64 %10 to i32*, !insn.addr !68
  %12 = load i32, i32* %11, align 4, !insn.addr !68
  %13 = zext i32 %12 to i64, !insn.addr !68
  ret i64 %13, !insn.addr !69

dec_label_pc_b2c:                                 ; preds = %dec_label_pc_b14
  ret i64 4294967295, !insn.addr !70

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @switch_large() local_unnamed_addr {
dec_label_pc_b34:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !71
  %3 = icmp ult i32 %2, 10, !insn.addr !71
  %4 = mul i64 %1, 10
  %5 = and i64 %4, 4294967294
  %storemerge = select i1 %3, i64 %5, i64 4294967295
  ret i64 %storemerge, !insn.addr !72

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @switch_default() local_unnamed_addr {
dec_label_pc_b48:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 4294967295, !insn.addr !73
  %3 = trunc i64 %2 to i32, !insn.addr !74
  %4 = icmp ult i32 %3, 3, !insn.addr !74
  %5 = mul i64 %2, 100, !insn.addr !75
  %6 = add i64 %5, 100, !insn.addr !76
  %.op = and i64 %6, 4294967292
  %7 = select i1 %4, i64 %.op, i64 0, !insn.addr !77
  ret i64 %7, !insn.addr !78
}

define i64 @switch_fallthrough() local_unnamed_addr {
dec_label_pc_b64:
  %0 = alloca i64
  %x8.1.reg2mem = alloca i64, !insn.addr !79
  %x8.0.reg2mem = alloca i64, !insn.addr !79
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !80
  store i64 0, i64* %x8.0.reg2mem
  store i64 0, i64* %x8.1.reg2mem
  switch i32 %2, label %dec_label_pc_b90 [
    i32 1, label %dec_label_pc_b88
    i32 2, label %dec_label_pc_b84
    i32 3, label %dec_label_pc_b80
  ]

dec_label_pc_b80:                                 ; preds = %dec_label_pc_b64
  store i64 12, i64* %x8.0.reg2mem, !insn.addr !81
  br label %dec_label_pc_b84, !insn.addr !81

dec_label_pc_b84:                                 ; preds = %dec_label_pc_b64, %dec_label_pc_b80
  %x8.0.reload = load i64, i64* %x8.0.reg2mem
  %3 = mul i64 %1, 2, !insn.addr !82
  %4 = add i64 %x8.0.reload, %3, !insn.addr !82
  %5 = and i64 %4, 4294967294, !insn.addr !82
  store i64 %5, i64* %x8.1.reg2mem, !insn.addr !82
  br label %dec_label_pc_b88, !insn.addr !82

dec_label_pc_b88:                                 ; preds = %dec_label_pc_b64, %dec_label_pc_b84
  %x8.1.reload = load i64, i64* %x8.1.reg2mem
  %6 = add i64 %x8.1.reload, %1, !insn.addr !83
  %7 = and i64 %6, 4294967295, !insn.addr !83
  ret i64 %7, !insn.addr !84

dec_label_pc_b90:                                 ; preds = %dec_label_pc_b64
  ret i64 4294967295, !insn.addr !85

; uselistorder directives
  uselistorder i64 %1, { 1, 2, 0 }
  uselistorder i64* %x8.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_b88, { 1, 0 }
  uselistorder label %dec_label_pc_b84, { 1, 0 }
}

define i64 @loop_for_fixed() local_unnamed_addr {
dec_label_pc_b98:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !86
  %3 = icmp slt i32 %2, 1, !insn.addr !86
  br i1 %3, label %dec_label_pc_bb8, label %dec_label_pc_ba0, !insn.addr !86

dec_label_pc_ba0:                                 ; preds = %dec_label_pc_b98
  %4 = add i64 %1, 4294967295
  %5 = and i64 %4, 4294967295, !insn.addr !87
  %6 = add i64 %1, 4294967294, !insn.addr !88
  %7 = and i64 %6, 4294967295, !insn.addr !89
  %8 = mul nuw i64 %5, %7, !insn.addr !89
  %9 = udiv i64 %8, 2, !insn.addr !90
  %10 = add i64 %9, %4, !insn.addr !91
  %11 = and i64 %10, 4294967295, !insn.addr !91
  ret i64 %11, !insn.addr !92

dec_label_pc_bb8:                                 ; preds = %dec_label_pc_b98
  ret i64 0, !insn.addr !93

; uselistorder directives
  uselistorder i64 %1, { 2, 1, 0 }
}

define i64 @loop_while() local_unnamed_addr {
dec_label_pc_bc0:
  %0 = alloca i64
  %.reg2mem = alloca i64, !insn.addr !94
  %x8.0.reg2mem = alloca i64, !insn.addr !94
  %x0.0.reg2mem = alloca i64, !insn.addr !94
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !95
  %3 = icmp eq i32 %2, 0, !insn.addr !95
  store i64 0, i64* %x8.0.reg2mem, !insn.addr !95
  br i1 %3, label %dec_label_pc_bf4.thread, label %dec_label_pc_bd0, !insn.addr !95

dec_label_pc_bd0:                                 ; preds = %dec_label_pc_bc0, %dec_label_pc_bd0
  %x8.0.reload = load i64, i64* %x8.0.reg2mem
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %sext = mul i64 %x0.0.reload, 4294967296
  %4 = ashr exact i64 %sext, 32, !insn.addr !96
  %5 = mul nsw i64 %4, 1717986919, !insn.addr !96
  %6 = add nuw nsw i64 %x8.0.reload, 1, !insn.addr !97
  %7 = and i64 %6, 4294967295, !insn.addr !97
  %8 = lshr i64 %5, 63, !insn.addr !98
  %9 = ashr i64 %5, 34, !insn.addr !99
  %10 = add nsw i64 %9, %8, !insn.addr !100
  %11 = trunc i64 %x0.0.reload to i32, !insn.addr !101
  %12 = add i32 %11, 9, !insn.addr !101
  %13 = and i64 %10, 4294967295, !insn.addr !102
  %14 = icmp ult i32 %12, 18, !insn.addr !103
  %15 = icmp ne i1 %14, true, !insn.addr !103
  %16 = icmp eq i32 %11, 9, !insn.addr !103
  %17 = icmp ne i1 %16, true, !insn.addr !104
  %18 = icmp eq i1 %15, %17, !insn.addr !104
  store i64 %13, i64* %x0.0.reg2mem, !insn.addr !104
  store i64 %7, i64* %x8.0.reg2mem, !insn.addr !104
  br i1 %18, label %dec_label_pc_bd0, label %dec_label_pc_bf4, !insn.addr !104

dec_label_pc_bf4:                                 ; preds = %dec_label_pc_bd0
  %19 = icmp eq i64 %7, 0, !insn.addr !105
  store i64 %7, i64* %.reg2mem
  br i1 %19, label %dec_label_pc_bf4.thread, label %20

dec_label_pc_bf4.thread:                          ; preds = %dec_label_pc_bc0, %dec_label_pc_bf4
  store i64 1, i64* %.reg2mem
  br label %20

; <label>:20:                                     ; preds = %dec_label_pc_bf4, %dec_label_pc_bf4.thread
  %.reload = load i64, i64* %.reg2mem
  ret i64 %.reload, !insn.addr !106

; uselistorder directives
  uselistorder i64 %7, { 0, 2, 1 }
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64* %x0.0.reg2mem, { 1, 0 }
  uselistorder i64* %x8.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %.reg2mem, { 0, 2, 1 }
  uselistorder label %20, { 1, 0 }
  uselistorder label %dec_label_pc_bf4.thread, { 1, 0 }
  uselistorder label %dec_label_pc_bd0, { 1, 0 }
}

define i64 @loop_dowhile() local_unnamed_addr {
dec_label_pc_c00:
  %x8.0.in.reg2mem = alloca i64, !insn.addr !107
  %x0.0.reg2mem = alloca i64, !insn.addr !107
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !108
  br label %dec_label_pc_c10, !insn.addr !108

dec_label_pc_c10:                                 ; preds = %dec_label_pc_c10, %dec_label_pc_c00
  %x8.0.in.reload = load i64, i64* %x8.0.in.reg2mem
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %sext = mul i64 %x8.0.in.reload, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !109
  %1 = mul nsw i64 %0, 1717986919, !insn.addr !109
  %2 = add nuw nsw i64 %x0.0.reload, 1, !insn.addr !110
  %3 = and i64 %2, 4294967295, !insn.addr !110
  %4 = lshr i64 %1, 63, !insn.addr !111
  %5 = ashr i64 %1, 34, !insn.addr !112
  %6 = add nsw i64 %5, %4, !insn.addr !113
  %7 = trunc i64 %x8.0.in.reload to i32, !insn.addr !114
  %8 = add i32 %7, 9, !insn.addr !114
  %9 = icmp ult i32 %8, 18, !insn.addr !115
  %10 = icmp ne i1 %9, true, !insn.addr !115
  %11 = icmp eq i32 %7, 9, !insn.addr !115
  %12 = icmp ne i1 %11, true, !insn.addr !116
  %13 = icmp eq i1 %10, %12, !insn.addr !116
  store i64 %3, i64* %x0.0.reg2mem, !insn.addr !116
  store i64 %6, i64* %x8.0.in.reg2mem, !insn.addr !116
  br i1 %13, label %dec_label_pc_c10, label %dec_label_pc_c34, !insn.addr !116

dec_label_pc_c34:                                 ; preds = %dec_label_pc_c10
  ret i64 %3, !insn.addr !117

; uselistorder directives
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %x0.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x8.0.in.reg2mem, { 1, 0 }
}

define i64 @loop_nested() local_unnamed_addr {
dec_label_pc_c38:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32, !insn.addr !118
  %4 = icmp slt i32 %3, 1
  %5 = select i1 %4, i64 0, i64 %1, !insn.addr !119
  %6 = trunc i64 %2 to i32, !insn.addr !120
  %7 = mul i64 %5, %2, !insn.addr !121
  %8 = icmp slt i32 %6, 1
  %.op = and i64 %7, 4294967295
  %9 = select i1 %8, i64 0, i64 %.op, !insn.addr !122
  ret i64 %9, !insn.addr !123

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @loop_break() local_unnamed_addr {
dec_label_pc_c50:
  %0 = alloca i64
  %x0.1.reg2mem = alloca i64, !insn.addr !124
  %x0.0.reg2mem = alloca i64, !insn.addr !124
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !125
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !126
  br label %dec_label_pc_c60, !insn.addr !126

dec_label_pc_c60:                                 ; preds = %dec_label_pc_c6c, %dec_label_pc_c50
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %3 = mul i64 %x0.0.reload, 4, !insn.addr !127
  %4 = add i64 %3, ptrtoint (i64* @global_var_18d8 to i64), !insn.addr !127
  %5 = inttoptr i64 %4 to i32*, !insn.addr !127
  %6 = load i32, i32* %5, align 4, !insn.addr !127
  %7 = icmp eq i32 %6, %2, !insn.addr !125
  store i64 %x0.0.reload, i64* %x0.1.reg2mem, !insn.addr !128
  br i1 %7, label %dec_label_pc_c7c, label %dec_label_pc_c6c, !insn.addr !128

dec_label_pc_c6c:                                 ; preds = %dec_label_pc_c60
  %8 = add nuw nsw i64 %x0.0.reload, 1, !insn.addr !129
  %9 = icmp eq i64 %8, 5, !insn.addr !130
  store i64 %8, i64* %x0.0.reg2mem, !insn.addr !130
  store i64 4294967295, i64* %x0.1.reg2mem, !insn.addr !130
  br i1 %9, label %dec_label_pc_c7c, label %dec_label_pc_c60, !insn.addr !130

dec_label_pc_c7c:                                 ; preds = %dec_label_pc_c6c, %dec_label_pc_c60
  %x0.1.reload = load i64, i64* %x0.1.reg2mem
  ret i64 %x0.1.reload, !insn.addr !131

; uselistorder directives
  uselistorder i64 %x0.0.reload, { 1, 0, 2 }
  uselistorder i64* %x0.0.reg2mem, { 1, 0, 2 }
}

define i64 @loop_continue() local_unnamed_addr {
dec_label_pc_c80:
  %0 = alloca i64
  %x10.0.reg2mem = alloca i64, !insn.addr !132
  %x9.0.reg2mem = alloca i64, !insn.addr !132
  %x8.0.reg2mem = alloca i32, !insn.addr !132
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !133
  %3 = icmp slt i32 %2, 1, !insn.addr !133
  store i32 0, i32* %x8.0.reg2mem, !insn.addr !133
  store i64 0, i64* %x9.0.reg2mem, !insn.addr !133
  br i1 %3, label %dec_label_pc_cb0, label %dec_label_pc_c90, !insn.addr !133

dec_label_pc_c90:                                 ; preds = %dec_label_pc_c80, %dec_label_pc_c90
  %x10.0.reload = load i64, i64* %x10.0.reg2mem
  %x9.0.reload = load i64, i64* %x9.0.reg2mem
  %x8.0.reload = load i32, i32* %x8.0.reg2mem
  %4 = add nuw nsw i64 %x9.0.reload, 1, !insn.addr !134
  %5 = and i64 %4, 4294967295, !insn.addr !134
  %6 = trunc i64 %x10.0.reload to i32, !insn.addr !135
  %7 = trunc i64 %4 to i32, !insn.addr !135
  %8 = call i32 @__asm_sbfx(i32 %6, i32 %7, i64 0, i64 1), !insn.addr !135
  %9 = and i32 %8, %7, !insn.addr !136
  %10 = zext i32 %9 to i64, !insn.addr !136
  %11 = add i32 %9, %x8.0.reload, !insn.addr !137
  %12 = icmp eq i64 %1, %5, !insn.addr !138
  store i32 %11, i32* %x8.0.reg2mem, !insn.addr !138
  store i64 %5, i64* %x9.0.reg2mem, !insn.addr !138
  store i64 %10, i64* %x10.0.reg2mem, !insn.addr !138
  br i1 %12, label %dec_label_pc_ca8, label %dec_label_pc_c90, !insn.addr !138

dec_label_pc_ca8:                                 ; preds = %dec_label_pc_c90
  %13 = zext i32 %11 to i64, !insn.addr !137
  ret i64 %13, !insn.addr !139

dec_label_pc_cb0:                                 ; preds = %dec_label_pc_c80
  ret i64 0, !insn.addr !140

; uselistorder directives
  uselistorder i32 %11, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i32* %x8.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x9.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x10.0.reg2mem, { 1, 0 }
  uselistorder label %dec_label_pc_c90, { 1, 0 }
}

define i64 @goto_forward() local_unnamed_addr {
dec_label_pc_cbc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !141
  %3 = icmp sgt i32 %2, 1, !insn.addr !141
  %4 = and i64 %1, 4294967295
  %storemerge = select i1 %3, i64 %4, i64 1
  %5 = mul i64 %1, 2, !insn.addr !142
  %6 = mul i64 %5, %storemerge, !insn.addr !143
  %7 = and i64 %6, 4294967294, !insn.addr !143
  ret i64 %7, !insn.addr !144

; uselistorder directives
  uselistorder i64 %1, { 2, 1, 0 }
}

define i64 @goto_backward() local_unnamed_addr {
dec_label_pc_cd0:
  %0 = alloca i64
  %merge.reg2mem = alloca i64, !insn.addr !145
  %x9.0.reg2mem = alloca i64, !insn.addr !145
  %x0.0.reg2mem = alloca i64, !insn.addr !145
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !146
  %3 = icmp slt i32 %2, 1, !insn.addr !146
  store i64 1, i64* %merge.reg2mem, !insn.addr !146
  br i1 %3, label %dec_label_pc_cf4, label %dec_label_pc_cd8, !insn.addr !146

dec_label_pc_cd8:                                 ; preds = %dec_label_pc_cd0
  %4 = and i64 %1, 4294967295, !insn.addr !147
  store i64 1, i64* %x0.0.reg2mem, !insn.addr !148
  store i64 0, i64* %x9.0.reg2mem, !insn.addr !148
  br label %dec_label_pc_ce4, !insn.addr !148

dec_label_pc_ce4:                                 ; preds = %dec_label_pc_ce4, %dec_label_pc_cd8
  %x9.0.reload = load i64, i64* %x9.0.reg2mem
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %5 = add nuw nsw i64 %x9.0.reload, 1, !insn.addr !149
  %6 = and i64 %5, 4294967295, !insn.addr !149
  %7 = mul i64 %5, %x0.0.reload, !insn.addr !150
  %8 = and i64 %7, 4294967295, !insn.addr !150
  %9 = icmp eq i64 %4, %6, !insn.addr !151
  store i64 %8, i64* %x0.0.reg2mem, !insn.addr !151
  store i64 %6, i64* %x9.0.reg2mem, !insn.addr !151
  store i64 %8, i64* %merge.reg2mem, !insn.addr !151
  br i1 %9, label %dec_label_pc_cf4, label %dec_label_pc_ce4, !insn.addr !151

dec_label_pc_cf4:                                 ; preds = %dec_label_pc_ce4, %dec_label_pc_cd0
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !152

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %x0.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x9.0.reg2mem, { 1, 0, 2 }
}

define i64 @ternary_op() local_unnamed_addr {
dec_label_pc_d00:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32, !insn.addr !153
  %4 = trunc i64 %1 to i32, !insn.addr !153
  %5 = sub i32 %3, %4, !insn.addr !153
  %6 = xor i64 %2, %1
  %7 = trunc i64 %6 to i32, !insn.addr !153
  %8 = xor i32 %5, %3, !insn.addr !153
  %9 = and i32 %8, %7, !insn.addr !153
  %10 = icmp slt i32 %9, 0, !insn.addr !153
  %11 = icmp slt i32 %5, 0, !insn.addr !153
  %12 = icmp eq i32 %5, 0, !insn.addr !153
  %13 = icmp ne i1 %11, %10, !insn.addr !154
  %14 = or i1 %12, %13, !insn.addr !154
  %.v = select i1 %14, i64 %1, i64 %2
  %15 = and i64 %.v, 4294967295, !insn.addr !154
  ret i64 %15, !insn.addr !155

; uselistorder directives
  uselistorder i32 %5, { 1, 2, 0 }
  uselistorder i64 %2, { 1, 2, 0 }
  uselistorder i64 %1, { 1, 2, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @test_control_flow_l1() local_unnamed_addr {
dec_label_pc_d0c:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_1e71 to i8*)), !insn.addr !156
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_191c, i64 0, i64 0), i64 21), !insn.addr !157
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_193b, i64 0, i64 0), i64 20), !insn.addr !158
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_193b, i64 0, i64 0), i64 4294967291), !insn.addr !159
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_1955, i64 0, i64 0), i64 1), !insn.addr !160
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_1955, i64 0, i64 0), i64 0), !insn.addr !161
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_196d, i64 0, i64 0), i64 15), !insn.addr !162
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_196d, i64 0, i64 0), i64 10), !insn.addr !163
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_196d, i64 0, i64 0), i64 0), !insn.addr !164
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_1989, i64 0, i64 0), i64 5), !insn.addr !165
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_19a8, i64 0, i64 0), i64 20), !insn.addr !166
  %11 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_19c8, i64 0, i64 0), i64 400), !insn.addr !167
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_19e7, i64 0, i64 0), i64 50), !insn.addr !168
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_1a04, i64 0, i64 0), i64 70), !insn.addr !169
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_1a21, i64 0, i64 0), i64 0), !insn.addr !170
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_1a40, i64 0, i64 0), i64 21), !insn.addr !171
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_1a63, i64 0, i64 0), i64 45), !insn.addr !172
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_1a82, i64 0, i64 0), i64 5), !insn.addr !173
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_1a9d, i64 0, i64 0), i64 4), !insn.addr !174
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_1aba, i64 0, i64 0), i64 12), !insn.addr !175
  %20 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_1ad6, i64 0, i64 0), i64 2), !insn.addr !176
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_1ad6, i64 0, i64 0), i64 4294967295), !insn.addr !177
  %22 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_1af1, i64 0, i64 0), i64 25), !insn.addr !178
  %23 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_1b0f, i64 0, i64 0), i64 50), !insn.addr !179
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_1b0f, i64 0, i64 0), i64 4294967290), !insn.addr !180
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_1b2c, i64 0, i64 0), i64 120), !insn.addr !181
  %26 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_1b4a, i64 0, i64 0), i64 10), !insn.addr !182
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_1b4a, i64 0, i64 0), i64 8), !insn.addr !183
  %28 = sext i32 %27 to i64, !insn.addr !183
  ret i64 %28, !insn.addr !184

; uselistorder directives
  uselistorder i64 12, { 1, 0 }
}

define i64 @loop_multi_exit() local_unnamed_addr {
dec_label_pc_edc:
  %0 = alloca i64
  %.reg2mem = alloca i64, !insn.addr !185
  %x14.0.reg2mem = alloca i64, !insn.addr !185
  %x10.0.reg2mem = alloca i64, !insn.addr !185
  %x8.0.reg2mem = alloca i64, !insn.addr !185
  %1 = load i64, i64* %0
  store i64 0, i64* %x8.0.reg2mem, !insn.addr !186
  store i64 ptrtoint (i64* @global_var_18f0 to i64), i64* %x10.0.reg2mem, !insn.addr !186
  br label %dec_label_pc_ef4, !insn.addr !186

dec_label_pc_ef4:                                 ; preds = %dec_label_pc_f54, %dec_label_pc_edc
  %x10.0.reload = load i64, i64* %x10.0.reg2mem
  %x8.0.reload = load i64, i64* %x8.0.reg2mem
  %2 = mul i64 %x8.0.reload, 16, !insn.addr !187
  %3 = add i64 %2, ptrtoint (i64* @global_var_18ec to i64), !insn.addr !188
  %4 = inttoptr i64 %3 to i32*, !insn.addr !188
  %5 = load i32, i32* %4, align 8, !insn.addr !188
  %6 = zext i32 %5 to i64, !insn.addr !188
  %7 = icmp eq i64 %1, %6, !insn.addr !189
  store i64 0, i64* %x14.0.reg2mem, !insn.addr !189
  br i1 %7, label %dec_label_pc_f38.thread, label %dec_label_pc_f14, !insn.addr !189

dec_label_pc_f38.thread:                          ; preds = %dec_label_pc_ef4
  %8 = mul i64 %x8.0.reload, 10, !insn.addr !190
  %9 = and i64 %8, 4294967294, !insn.addr !190
  store i64 %9, i64* %.reg2mem
  br label %dec_label_pc_f68.thread

dec_label_pc_f14:                                 ; preds = %dec_label_pc_ef4, %dec_label_pc_f1c
  %x14.0.reload = load i64, i64* %x14.0.reg2mem
  %10 = icmp eq i64 %x14.0.reload, 3, !insn.addr !191
  br i1 %10, label %dec_label_pc_f54, label %dec_label_pc_f1c, !insn.addr !192

dec_label_pc_f1c:                                 ; preds = %dec_label_pc_f14
  %11 = mul i64 %x14.0.reload, 4, !insn.addr !193
  %12 = add i64 %11, %x10.0.reload, !insn.addr !193
  %13 = inttoptr i64 %12 to i32*, !insn.addr !193
  %14 = load i32, i32* %13, align 4, !insn.addr !193
  %15 = zext i32 %14 to i64, !insn.addr !193
  %16 = add nuw nsw i64 %x14.0.reload, 1, !insn.addr !194
  %17 = icmp eq i64 %1, %15, !insn.addr !195
  store i64 %16, i64* %x14.0.reg2mem, !insn.addr !195
  br i1 %17, label %dec_label_pc_f38, label %dec_label_pc_f14, !insn.addr !195

dec_label_pc_f38:                                 ; preds = %dec_label_pc_f1c
  %18 = icmp ult i64 %x14.0.reload, 3, !insn.addr !196
  %19 = icmp ne i1 %18, true, !insn.addr !196
  %20 = icmp ne i1 %19, true, !insn.addr !197
  %21 = icmp eq i1 %20, false, !insn.addr !198
  br i1 %21, label %dec_label_pc_f54, label %dec_label_pc_f68.thread.loopexit.split.loop.exit, !insn.addr !198

dec_label_pc_f54:                                 ; preds = %dec_label_pc_f14, %dec_label_pc_f38
  %22 = add nuw nsw i64 %x8.0.reload, 1, !insn.addr !199
  %23 = add i64 %x10.0.reload, 16, !insn.addr !200
  %24 = icmp eq i64 %22, 3, !insn.addr !201
  store i64 %22, i64* %x8.0.reg2mem, !insn.addr !201
  store i64 %23, i64* %x10.0.reg2mem, !insn.addr !201
  store i64 4294967295, i64* %.reg2mem, !insn.addr !201
  br i1 %24, label %dec_label_pc_f68.thread, label %dec_label_pc_ef4, !insn.addr !201

dec_label_pc_f68.thread.loopexit.split.loop.exit: ; preds = %dec_label_pc_f38
  %25 = mul i64 %x8.0.reload, 10, !insn.addr !190
  %26 = add i64 %16, %25, !insn.addr !190
  %27 = and i64 %26, 4294967295, !insn.addr !190
  store i64 %27, i64* %.reg2mem
  br label %dec_label_pc_f68.thread

dec_label_pc_f68.thread:                          ; preds = %dec_label_pc_f54, %dec_label_pc_f68.thread.loopexit.split.loop.exit, %dec_label_pc_f38.thread
  %.reload = load i64, i64* %.reg2mem
  ret i64 %.reload, !insn.addr !202

; uselistorder directives
  uselistorder i64 %16, { 1, 0 }
  uselistorder i64 %x14.0.reload, { 2, 1, 3, 0 }
  uselistorder i64 %x8.0.reload, { 1, 0, 2, 3 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %x8.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x10.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x14.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %.reg2mem, { 0, 2, 1, 3 }
  uselistorder label %dec_label_pc_f68.thread, { 1, 0, 2 }
  uselistorder label %dec_label_pc_f54, { 1, 0 }
  uselistorder label %dec_label_pc_f14, { 1, 0 }
}

define i64 @infinite_loop() local_unnamed_addr {
dec_label_pc_f74:
  %0 = alloca i64
  %.reg2mem7 = alloca i64, !insn.addr !203
  %.reg2mem5 = alloca i32, !insn.addr !203
  %.reg2mem = alloca i64, !insn.addr !203
  %1 = load i64, i64* %0
  store i64 0, i64* %.reg2mem, !insn.addr !204
  store i32 0, i32* %.reg2mem5, !insn.addr !204
  br label %dec_label_pc_f7c, !insn.addr !204

dec_label_pc_f7c:                                 ; preds = %dec_label_pc_f88, %dec_label_pc_f74
  %.reload6 = load i32, i32* %.reg2mem5, !insn.addr !205
  %.reload = load i64, i64* %.reg2mem, !insn.addr !206
  %2 = icmp eq i32 %.reload6, 1, !insn.addr !207
  store i64 %.reload, i64* %.reg2mem7, !insn.addr !208
  br i1 %2, label %dec_label_pc_f9c, label %dec_label_pc_f88, !insn.addr !208

dec_label_pc_f88:                                 ; preds = %dec_label_pc_f7c
  %3 = add nuw nsw i64 %.reload, 1, !insn.addr !206
  %4 = and i64 %3, 4294967295, !insn.addr !206
  %5 = trunc i64 %3 to i32, !insn.addr !209
  %6 = icmp eq i32 %5, 1001, !insn.addr !209
  store i64 %4, i64* %.reg2mem, !insn.addr !209
  store i32 %5, i32* %.reg2mem5, !insn.addr !209
  br i1 %6, label %dec_label_pc_f94, label %dec_label_pc_f7c, !insn.addr !209

dec_label_pc_f94:                                 ; preds = %dec_label_pc_f88
  %7 = inttoptr i64 %1 to i32*, !insn.addr !210
  store i32 1, i32* %7, align 4, !insn.addr !210
  store i64 %4, i64* %.reg2mem7, !insn.addr !210
  br label %dec_label_pc_f9c, !insn.addr !210

dec_label_pc_f9c:                                 ; preds = %dec_label_pc_f7c, %dec_label_pc_f94
  %.reload8 = load i64, i64* %.reg2mem7, !insn.addr !211
  ret i64 %.reload8, !insn.addr !211

; uselistorder directives
  uselistorder i64 %.reload, { 1, 0 }
  uselistorder i64* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %.reg2mem5, { 2, 0, 1 }
  uselistorder i64* %.reg2mem7, { 0, 2, 1 }
  uselistorder label %dec_label_pc_f9c, { 1, 0 }
}

define i64 @multi_return() local_unnamed_addr {
dec_label_pc_fa0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp slt i32 %2, 0, !insn.addr !212
  br i1 %3, label %dec_label_pc_fc0, label %dec_label_pc_fa4, !insn.addr !212

dec_label_pc_fa4:                                 ; preds = %dec_label_pc_fa0
  %4 = urem i64 %1, 2
  %5 = icmp eq i64 %4, 0, !insn.addr !213
  %6 = mul i64 %1, 2
  %7 = and i64 %6, 4294967294
  %8 = add i64 %1, 1
  %9 = and i64 %8, 4294967295
  %storemerge = select i1 %5, i64 %7, i64 %9
  %10 = add i32 %2, -50, !insn.addr !214
  %11 = sub i32 49, %2
  %12 = and i32 %11, %2, !insn.addr !214
  %13 = icmp slt i32 %12, 0, !insn.addr !214
  %14 = icmp slt i32 %10, 0, !insn.addr !214
  %15 = icmp eq i32 %10, 0, !insn.addr !214
  %16 = icmp ne i1 %14, %13, !insn.addr !215
  %17 = or i1 %15, %16, !insn.addr !215
  %.v = select i1 %17, i64 %storemerge, i64 4294967294
  ret i64 %.v, !insn.addr !216

dec_label_pc_fc0:                                 ; preds = %dec_label_pc_fa0
  ret i64 4294967295, !insn.addr !217

; uselistorder directives
  uselistorder i32 %10, { 1, 0 }
  uselistorder i32 %2, { 0, 2, 1, 3 }
  uselistorder i64 %1, { 1, 3, 2, 0 }
}

define i64 @conditional_return() local_unnamed_addr {
dec_label_pc_fc8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !218
  %3 = icmp sgt i32 %2, 0, !insn.addr !218
  %4 = mul i64 %1, 2
  %5 = and i64 %4, 4294967294
  %6 = sub i64 0, %1
  %7 = and i64 %6, 4294967295
  %storemerge = select i1 %3, i64 %5, i64 %7
  ret i64 %storemerge, !insn.addr !219

; uselistorder directives
  uselistorder i64 %1, { 1, 2, 0 }
}

define i64 @duffs_device() local_unnamed_addr {
dec_label_pc_fd8:
  %0 = alloca i64
  %merge.reg2mem = alloca i64, !insn.addr !220
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32, !insn.addr !221
  %4 = icmp slt i32 %3, 1, !insn.addr !221
  store i64 4294967295, i64* %merge.reg2mem, !insn.addr !221
  br i1 %4, label %dec_label_pc_1010, label %dec_label_pc_fe4, !insn.addr !221

dec_label_pc_fe4:                                 ; preds = %dec_label_pc_fd8
  %5 = urem i32 %3, 8, !insn.addr !222
  %6 = icmp ne i32 %5, 7, !insn.addr !223
  %7 = icmp ne i1 %6, true, !insn.addr !223
  %8 = icmp eq i32 %5, 7, !insn.addr !223
  %9 = icmp ne i1 %8, true, !insn.addr !224
  %10 = icmp eq i1 %7, %9, !insn.addr !224
  %11 = and i64 %1, 4294967295
  %spec.select = select i1 %10, i64 %11, i64 %2
  store i64 %spec.select, i64* %merge.reg2mem
  br label %dec_label_pc_1010

dec_label_pc_1010:                                ; preds = %dec_label_pc_fe4, %dec_label_pc_fd8
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !225

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @loop_complex_cond() local_unnamed_addr {
dec_label_pc_107c:
  %0 = alloca i64
  %x9.0.reg2mem = alloca i64, !insn.addr !226
  %x8.1.reg2mem = alloca i64, !insn.addr !226
  %x0.1.reg2mem = alloca i64, !insn.addr !226
  %x10.0.reg2mem = alloca i64, !insn.addr !226
  %x8.0.reg2mem = alloca i64, !insn.addr !226
  %x0.0.reg2mem = alloca i64, !insn.addr !226
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !227
  %3 = icmp slt i32 %2, 1, !insn.addr !227
  store i64 0, i64* %x8.0.reg2mem, !insn.addr !227
  store i64 0, i64* %x10.0.reg2mem, !insn.addr !227
  store i64 0, i64* %x8.1.reg2mem, !insn.addr !227
  store i64 0, i64* %x9.0.reg2mem, !insn.addr !227
  br i1 %3, label %dec_label_pc_10c4, label %dec_label_pc_108c, !insn.addr !227

dec_label_pc_108c:                                ; preds = %dec_label_pc_107c, %dec_label_pc_108c
  %x10.0.reload = load i64, i64* %x10.0.reg2mem
  %x8.0.reload = load i64, i64* %x8.0.reg2mem
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %4 = trunc i64 %x0.0.reload to i32, !insn.addr !228
  %5 = add nuw nsw i64 %x8.0.reload, 2, !insn.addr !229
  %6 = and i64 %5, 4294967295, !insn.addr !229
  %7 = add i64 %x0.0.reload, 4294967295, !insn.addr !230
  %8 = and i64 %7, 4294967295, !insn.addr !230
  %9 = add nuw nsw i64 %x10.0.reload, 1, !insn.addr !231
  %10 = and i64 %9, 4294967295, !insn.addr !231
  %11 = icmp sgt i32 %4, 1, !insn.addr !232
  %12 = icmp ult i64 %6, %8, !insn.addr !233
  %or.cond = icmp eq i1 %11, %12
  %13 = icmp ult i64 %x10.0.reload, 9
  %or.cond2 = icmp eq i1 %13, %or.cond
  store i64 %8, i64* %x0.0.reg2mem, !insn.addr !232
  store i64 %6, i64* %x8.0.reg2mem, !insn.addr !232
  store i64 %10, i64* %x10.0.reg2mem, !insn.addr !232
  store i64 %8, i64* %x0.1.reg2mem, !insn.addr !232
  store i64 %6, i64* %x8.1.reg2mem, !insn.addr !232
  store i64 %10, i64* %x9.0.reg2mem, !insn.addr !232
  br i1 %or.cond2, label %dec_label_pc_108c, label %dec_label_pc_10c4, !insn.addr !232

dec_label_pc_10c4:                                ; preds = %dec_label_pc_108c, %dec_label_pc_107c
  %x9.0.reload = load i64, i64* %x9.0.reg2mem
  %x8.1.reload = load i64, i64* %x8.1.reg2mem
  %x0.1.reload = load i64, i64* %x0.1.reg2mem
  %14 = add i64 %x8.1.reload, %x0.1.reload, !insn.addr !234
  %15 = add i64 %14, %x9.0.reload, !insn.addr !235
  %16 = and i64 %15, 4294967295, !insn.addr !235
  ret i64 %16, !insn.addr !236

; uselistorder directives
  uselistorder i64 %x10.0.reload, { 1, 0 }
  uselistorder i64* %x0.0.reg2mem, { 1, 0 }
  uselistorder i64* %x8.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x10.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_108c, { 1, 0 }
}

define i64 @loop_modify_var() local_unnamed_addr {
dec_label_pc_10d0:
  %0 = alloca i64
  %merge.reg2mem = alloca i64, !insn.addr !237
  %x9.0.reg2mem = alloca i64, !insn.addr !237
  %x8.0.reg2mem = alloca i64, !insn.addr !237
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !238
  %3 = icmp slt i32 %2, 1, !insn.addr !238
  store i64 0, i64* %x8.0.reg2mem, !insn.addr !238
  store i64 0, i64* %x9.0.reg2mem, !insn.addr !238
  store i64 0, i64* %merge.reg2mem, !insn.addr !238
  br i1 %3, label %dec_label_pc_10fc, label %dec_label_pc_10e0, !insn.addr !238

dec_label_pc_10e0:                                ; preds = %dec_label_pc_10d0, %dec_label_pc_10e0
  %x9.0.reload = load i64, i64* %x9.0.reg2mem
  %x8.0.reload = load i64, i64* %x8.0.reg2mem
  %4 = add nuw nsw i64 %x9.0.reload, 2, !insn.addr !239
  %5 = trunc i64 %x9.0.reload to i32, !insn.addr !240
  %6 = add i32 %5, -5, !insn.addr !240
  %7 = sub i32 4, %5
  %8 = and i32 %7, %5, !insn.addr !240
  %9 = icmp slt i32 %8, 0, !insn.addr !240
  %10 = icmp slt i32 %6, 0, !insn.addr !240
  %11 = icmp eq i32 %6, 0, !insn.addr !240
  %12 = icmp ne i1 %10, %9, !insn.addr !241
  %13 = or i1 %11, %12, !insn.addr !241
  %14 = select i1 %13, i64 %x9.0.reload, i64 %4, !insn.addr !241
  %15 = add nuw nsw i64 %x9.0.reload, %x8.0.reload, !insn.addr !242
  %16 = and i64 %15, 4294967295, !insn.addr !242
  %17 = add nuw nsw i64 %14, 1, !insn.addr !243
  %18 = and i64 %17, 4294967295, !insn.addr !243
  %19 = icmp slt i64 %18, %1, !insn.addr !244
  store i64 %16, i64* %x8.0.reg2mem, !insn.addr !244
  store i64 %18, i64* %x9.0.reg2mem, !insn.addr !244
  store i64 %16, i64* %merge.reg2mem, !insn.addr !244
  br i1 %19, label %dec_label_pc_10e0, label %dec_label_pc_10fc, !insn.addr !244

dec_label_pc_10fc:                                ; preds = %dec_label_pc_10e0, %dec_label_pc_10d0
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !245

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i64 %x9.0.reload, { 3, 0, 2, 1 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %x8.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x9.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_10e0, { 1, 0 }
}

define i64 @loop_external_state() local_unnamed_addr {
dec_label_pc_1110:
  %.reg2mem3 = alloca i64, !insn.addr !246
  %.reg2mem1 = alloca i32, !insn.addr !246
  %.reg2mem = alloca i64, !insn.addr !246
  store i64 0, i64* %.reg2mem, !insn.addr !247
  store i32 0, i32* %.reg2mem1, !insn.addr !247
  br label %dec_label_pc_1118, !insn.addr !247

dec_label_pc_1118:                                ; preds = %dec_label_pc_1120, %dec_label_pc_1110
  %.reload2 = load i32, i32* %.reg2mem1, !insn.addr !248
  %.reload = load i64, i64* %.reg2mem, !insn.addr !249
  %0 = icmp eq i32 %.reload2, 0, !insn.addr !250
  store i64 %.reload, i64* %.reg2mem3, !insn.addr !250
  br i1 %0, label %dec_label_pc_1120, label %dec_label_pc_112c, !insn.addr !250

dec_label_pc_1120:                                ; preds = %dec_label_pc_1118
  %1 = add nuw nsw i64 %.reload, 1, !insn.addr !249
  %2 = and i64 %1, 4294967295, !insn.addr !249
  %3 = trunc i64 %1 to i32, !insn.addr !251
  %4 = icmp eq i32 %3, 101, !insn.addr !251
  store i64 %2, i64* %.reg2mem, !insn.addr !251
  store i32 %3, i32* %.reg2mem1, !insn.addr !251
  store i64 %2, i64* %.reg2mem3, !insn.addr !251
  br i1 %4, label %dec_label_pc_112c, label %dec_label_pc_1118, !insn.addr !251

dec_label_pc_112c:                                ; preds = %dec_label_pc_1120, %dec_label_pc_1118
  %.reload4 = load i64, i64* %.reg2mem3, !insn.addr !252
  ret i64 %.reload4, !insn.addr !252

; uselistorder directives
  uselistorder i64 %.reload, { 1, 0 }
  uselistorder i64* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %.reg2mem1, { 2, 0, 1 }
  uselistorder i64* %.reg2mem3, { 0, 2, 1 }
}

define i64 @recursion_factorial() local_unnamed_addr {
dec_label_pc_1130:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !253
  %3 = icmp sgt i32 %2, 1, !insn.addr !253
  br i1 %3, label %dec_label_pc_1140, label %dec_label_pc_1138, !insn.addr !253

dec_label_pc_1138:                                ; preds = %dec_label_pc_1130
  ret i64 1, !insn.addr !254

dec_label_pc_1140:                                ; preds = %dec_label_pc_1130
  %4 = call i64 @recursion_factorial(), !insn.addr !255
  %5 = mul i64 %4, %1, !insn.addr !256
  %6 = and i64 %5, 4294967295, !insn.addr !256
  ret i64 %6, !insn.addr !257

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @tail_recursion(i64 %arg1) local_unnamed_addr {
dec_label_pc_1168:
  %0 = alloca i64
  %x1.0.reg2mem = alloca i64, !insn.addr !258
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32, !insn.addr !259
  %4 = icmp slt i32 %3, 2, !insn.addr !259
  br i1 %4, label %dec_label_pc_118c, label %dec_label_pc_1170, !insn.addr !259

dec_label_pc_1170:                                ; preds = %dec_label_pc_1168
  %5 = call i64 @tail_recursion(i64 %1), !insn.addr !260
  %6 = and i64 %5, 4294967295, !insn.addr !261
  store i64 %6, i64* %x1.0.reg2mem, !insn.addr !262
  br label %dec_label_pc_118c, !insn.addr !262

dec_label_pc_118c:                                ; preds = %dec_label_pc_1170, %dec_label_pc_1168
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %7 = and i64 %x1.0.reload, 4294967295, !insn.addr !263
  ret i64 %7, !insn.addr !264

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @indirect_recursion_a(i64 %arg1) local_unnamed_addr {
dec_label_pc_1194:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !265
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = trunc i64 %2 to i32, !insn.addr !266
  %5 = icmp slt i32 %4, 1, !insn.addr !266
  br i1 %5, label %dec_label_pc_11e8, label %dec_label_pc_119c, !insn.addr !266

dec_label_pc_119c:                                ; preds = %dec_label_pc_1194
  %6 = urem i64 %3, 2
  %7 = icmp eq i64 %6, 0, !insn.addr !267
  br i1 %7, label %dec_label_pc_11a0, label %dec_label_pc_11bc, !insn.addr !267

dec_label_pc_11a0:                                ; preds = %dec_label_pc_119c
  %8 = trunc i64 %3 to i32, !insn.addr !268
  %9 = icmp slt i32 %8, 0, !insn.addr !268
  %10 = zext i1 %9 to i64
  %storemerge.in = add i64 %3, %10
  %11 = trunc i64 %storemerge.in to i32, !insn.addr !269
  %12 = ashr i32 %11, 1, !insn.addr !269
  %13 = zext i32 %12 to i64, !insn.addr !269
  %14 = icmp slt i32 %4, 2, !insn.addr !270
  store i64 %13, i64* %x0.0.reg2mem, !insn.addr !270
  br i1 %14, label %dec_label_pc_11e8, label %dec_label_pc_11d4, !insn.addr !270

dec_label_pc_11bc:                                ; preds = %dec_label_pc_119c
  %15 = icmp sgt i32 %4, 1, !insn.addr !271
  br i1 %15, label %dec_label_pc_11d4, label %dec_label_pc_11c8, !insn.addr !271

dec_label_pc_11c8:                                ; preds = %dec_label_pc_11bc
  %16 = mul i64 %3, 3, !insn.addr !272
  %17 = add i64 %16, 1, !insn.addr !273
  %18 = and i64 %17, 4294967295, !insn.addr !273
  ret i64 %18, !insn.addr !274

dec_label_pc_11d4:                                ; preds = %dec_label_pc_11bc, %dec_label_pc_11a0
  %19 = call i64 @indirect_recursion_a(i64 %1), !insn.addr !275
  store i64 %19, i64* %x0.0.reg2mem, !insn.addr !276
  br label %dec_label_pc_11e8, !insn.addr !276

dec_label_pc_11e8:                                ; preds = %dec_label_pc_11d4, %dec_label_pc_11a0, %dec_label_pc_1194
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !277

; uselistorder directives
  uselistorder i64 %3, { 1, 2, 0, 3 }
  uselistorder i64* %0, { 2, 1, 0 }
}

define i64 @call_func_ptr() local_unnamed_addr {
dec_label_pc_11ec:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = and i64 %1, 4294967295, !insn.addr !278
  ret i64 %2, !insn.addr !279
}

define i64 @function_1200(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1200:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !280
}

define i64 @call_func_ptr_array() local_unnamed_addr {
dec_label_pc_1208:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32, !insn.addr !281
  %4 = icmp ult i32 %3, 2, !insn.addr !281
  %5 = icmp ne i1 %4, true, !insn.addr !281
  %6 = icmp eq i32 %3, 2, !insn.addr !281
  %7 = icmp ne i1 %5, true, !insn.addr !282
  %8 = or i1 %6, %7, !insn.addr !282
  br i1 %8, label %dec_label_pc_1218, label %dec_label_pc_1210, !insn.addr !282

dec_label_pc_1210:                                ; preds = %dec_label_pc_1208
  ret i64 4294967295, !insn.addr !283

dec_label_pc_1218:                                ; preds = %dec_label_pc_1208
  %9 = and i64 %1, 4294967295, !insn.addr !284
  ret i64 %9, !insn.addr !285

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @function_1234(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1234:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !286
}

define i64 @double_value() local_unnamed_addr {
dec_label_pc_123c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !287
  %3 = and i64 %2, 4294967294, !insn.addr !287
  ret i64 %3, !insn.addr !288
}

define i64 @triple_value() local_unnamed_addr {
dec_label_pc_1244:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 3, !insn.addr !289
  %3 = and i64 %2, 4294967295, !insn.addr !289
  ret i64 %3, !insn.addr !290
}

define i64 @call_virtual_func() local_unnamed_addr {
dec_label_pc_124c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !291
  %3 = and i64 %2, 4294967294, !insn.addr !291
  ret i64 %3, !insn.addr !292
}

define i64 @process_with_callback() local_unnamed_addr {
dec_label_pc_1254:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32, !insn.addr !293
  %4 = icmp slt i32 %3, 1, !insn.addr !293
  br i1 %4, label %dec_label_pc_1294, label %dec_label_pc_127c, !insn.addr !293

dec_label_pc_127c:                                ; preds = %dec_label_pc_1254
  %5 = and i64 %2, 4294967295, !insn.addr !294
  ret i64 %5, !insn.addr !295

dec_label_pc_1294:                                ; preds = %dec_label_pc_1254
  ret i64 0, !insn.addr !296

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @test_control_flow_l2() local_unnamed_addr {
dec_label_pc_12ac:
  %x1.2.reg2mem = alloca i64, !insn.addr !297
  %x21.0.reg2mem = alloca i64, !insn.addr !297
  %x19.0.reg2mem = alloca i64, !insn.addr !297
  %x8.1.reg2mem = alloca i64, !insn.addr !297
  %x1.0.reg2mem = alloca i64, !insn.addr !297
  %.reg2mem = alloca i64, !insn.addr !297
  %x12.0.reg2mem = alloca i64, !insn.addr !297
  %x10.0.reg2mem = alloca i64, !insn.addr !297
  %x9.0.reg2mem = alloca i64, !insn.addr !297
  %x8.0.reg2mem = alloca i64, !insn.addr !297
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_1e95 to i8*)), !insn.addr !298
  store i64 0, i64* %x8.0.reg2mem, !insn.addr !299
  store i64 0, i64* %x9.0.reg2mem, !insn.addr !299
  store i64 ptrtoint (i64* @global_var_18f0 to i64), i64* %x10.0.reg2mem, !insn.addr !299
  br label %dec_label_pc_12d8, !insn.addr !299

dec_label_pc_12d8:                                ; preds = %dec_label_pc_131c, %dec_label_pc_12ac
  %x10.0.reload = load i64, i64* %x10.0.reg2mem
  %x9.0.reload = load i64, i64* %x9.0.reg2mem
  %x8.0.reload = load i64, i64* %x8.0.reg2mem
  store i64 0, i64* %x12.0.reg2mem, !insn.addr !300
  br label %dec_label_pc_12dc, !insn.addr !300

dec_label_pc_12dc:                                ; preds = %dec_label_pc_12e4, %dec_label_pc_12d8
  %x12.0.reload = load i64, i64* %x12.0.reg2mem
  %1 = icmp eq i64 %x12.0.reload, 3, !insn.addr !301
  br i1 %1, label %dec_label_pc_131c, label %dec_label_pc_12e4, !insn.addr !302

dec_label_pc_12e4:                                ; preds = %dec_label_pc_12dc
  %2 = mul i64 %x12.0.reload, 4, !insn.addr !303
  %3 = add i64 %2, %x10.0.reload, !insn.addr !303
  %4 = inttoptr i64 %3 to i32*, !insn.addr !303
  %5 = load i32, i32* %4, align 4, !insn.addr !303
  %6 = add nuw nsw i64 %x12.0.reload, 1, !insn.addr !304
  %7 = icmp eq i32 %5, 7, !insn.addr !305
  store i64 %6, i64* %x12.0.reg2mem, !insn.addr !305
  br i1 %7, label %dec_label_pc_12f4, label %dec_label_pc_12dc, !insn.addr !305

dec_label_pc_12f4:                                ; preds = %dec_label_pc_12e4
  %8 = icmp ult i64 %x12.0.reload, 3, !insn.addr !306
  %9 = icmp ne i1 %8, true, !insn.addr !306
  %10 = icmp ne i1 %9, true, !insn.addr !307
  %11 = icmp eq i1 %10, false, !insn.addr !308
  br i1 %11, label %dec_label_pc_131c, label %dec_label_pc_1334, !insn.addr !308

dec_label_pc_131c:                                ; preds = %dec_label_pc_12dc, %dec_label_pc_12f4
  %12 = add nuw nsw i64 %x9.0.reload, 1, !insn.addr !309
  %13 = add nsw i64 %x8.0.reload, -10, !insn.addr !310
  %14 = add i64 %x10.0.reload, 16, !insn.addr !311
  %15 = icmp eq i64 %12, 3, !insn.addr !312
  store i64 %13, i64* %x8.0.reg2mem, !insn.addr !312
  store i64 %12, i64* %x9.0.reg2mem, !insn.addr !312
  store i64 %14, i64* %x10.0.reg2mem, !insn.addr !312
  store i64 4294967295, i64* %.reg2mem, !insn.addr !312
  br i1 %15, label %.loopexit, label %dec_label_pc_12d8, !insn.addr !312

dec_label_pc_1334:                                ; preds = %dec_label_pc_12f4
  %16 = sub i64 %6, %x8.0.reload, !insn.addr !313
  %17 = and i64 %16, 4294967295, !insn.addr !313
  store i64 %17, i64* %.reg2mem
  br label %.loopexit

.loopexit:                                        ; preds = %dec_label_pc_131c, %dec_label_pc_1334
  %.reload = load i64, i64* %.reg2mem
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_1b65, i64 0, i64 0), i64 %.reload), !insn.addr !314
  store i64 0, i64* %x1.0.reg2mem, !insn.addr !315
  br label %dec_label_pc_1350, !insn.addr !315

dec_label_pc_1350:                                ; preds = %dec_label_pc_1350, %.loopexit
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %19 = add nuw nsw i64 %x1.0.reload, 1, !insn.addr !316
  %20 = and i64 %19, 4294967295, !insn.addr !316
  %21 = trunc i64 %19 to i32, !insn.addr !317
  %22 = icmp eq i32 %21, ptrtoint (i1* @global_var_3e9 to i32), !insn.addr !317
  store i64 %20, i64* %x1.0.reg2mem, !insn.addr !317
  br i1 %22, label %dec_label_pc_1370, label %dec_label_pc_1350, !insn.addr !317

dec_label_pc_1370:                                ; preds = %dec_label_pc_1350
  %23 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_1b85, i64 0, i64 0), i64 %20), !insn.addr !318
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_1ba3, i64 0, i64 0), i64 4294967295), !insn.addr !319
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_1ba3, i64 0, i64 0), i64 4294967294), !insn.addr !320
  %26 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_1ba3, i64 0, i64 0), i64 4), !insn.addr !321
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_1bc0, i64 0, i64 0), i64 10), !insn.addr !322
  %28 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_1bc0, i64 0, i64 0), i64 5), !insn.addr !323
  %29 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_1be3, i64 0, i64 0), i64 8), !insn.addr !324
  store i64 11, i64* %x8.1.reg2mem, !insn.addr !325
  store i64 10, i64* %x19.0.reg2mem, !insn.addr !325
  store i64 4294967295, i64* %x21.0.reg2mem, !insn.addr !325
  br label %dec_label_pc_13e4, !insn.addr !325

dec_label_pc_13e4:                                ; preds = %dec_label_pc_13f8, %dec_label_pc_1370
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  %x8.1.reload = load i64, i64* %x8.1.reg2mem
  %30 = trunc i64 %x19.0.reload to i32, !insn.addr !326
  %31 = add i32 %30, -8, !insn.addr !326
  %32 = add nuw nsw i64 %x19.0.reload, 2, !insn.addr !327
  %33 = and i64 %32, 4294967295, !insn.addr !327
  %34 = trunc i64 %x8.1.reload to i32, !insn.addr !328
  %35 = add i32 %34, -2, !insn.addr !328
  %36 = icmp ult i32 %31, %35, !insn.addr !329
  br i1 %36, label %dec_label_pc_13f8, label %dec_label_pc_1408, !insn.addr !330

dec_label_pc_13f8:                                ; preds = %dec_label_pc_13e4
  %x21.0.reload = load i64, i64* %x21.0.reg2mem
  %37 = add nuw nsw i64 %x21.0.reload, 1, !insn.addr !331
  %38 = and i64 %37, 4294967295, !insn.addr !331
  %39 = add nuw nsw i64 %x8.1.reload, 4294967295, !insn.addr !332
  %40 = and i64 %39, 4294967295, !insn.addr !332
  %41 = trunc i64 %37 to i32, !insn.addr !333
  %42 = icmp ult i32 %41, 9, !insn.addr !333
  store i64 %40, i64* %x8.1.reg2mem, !insn.addr !334
  store i64 %33, i64* %x19.0.reg2mem, !insn.addr !334
  store i64 %38, i64* %x21.0.reg2mem, !insn.addr !334
  br i1 %42, label %dec_label_pc_13e4, label %dec_label_pc_1408, !insn.addr !334

dec_label_pc_1408:                                ; preds = %dec_label_pc_13f8, %dec_label_pc_13e4
  %43 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_1c00, i64 0, i64 0), i64 %33), !insn.addr !335
  %44 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_1c22, i64 0, i64 0), i64 30), !insn.addr !336
  store i64 0, i64* %x1.2.reg2mem, !insn.addr !337
  br label %dec_label_pc_1430, !insn.addr !337

dec_label_pc_1430:                                ; preds = %dec_label_pc_1430, %dec_label_pc_1408
  %x1.2.reload = load i64, i64* %x1.2.reg2mem
  %45 = add nuw nsw i64 %x1.2.reload, 1, !insn.addr !338
  %46 = and i64 %45, 4294967295, !insn.addr !338
  %47 = trunc i64 %45 to i32, !insn.addr !339
  %48 = icmp eq i32 %47, 101, !insn.addr !339
  store i64 %46, i64* %x1.2.reg2mem, !insn.addr !339
  br i1 %48, label %dec_label_pc_1444, label %dec_label_pc_1430, !insn.addr !339

dec_label_pc_1444:                                ; preds = %dec_label_pc_1430
  %49 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_1c42, i64 0, i64 0), i64 %46), !insn.addr !340
  %50 = call i64 @recursion_factorial(), !insn.addr !341
  %51 = and i64 %50, 4294967295, !insn.addr !342
  %52 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_1c66, i64 0, i64 0), i64 %51), !insn.addr !343
  %53 = call i64 @tail_recursion(i64 ptrtoint (i32* @1 to i64)), !insn.addr !344
  %54 = and i64 %53, 4294967295, !insn.addr !345
  %55 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_1c8a, i64 0, i64 0), i64 %54), !insn.addr !346
  %56 = call i64 @indirect_recursion_a(i64 ptrtoint (i32* @1 to i64)), !insn.addr !347
  %57 = and i64 %56, 4294967295, !insn.addr !348
  %58 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_1ca9, i64 0, i64 0), i64 %57), !insn.addr !349
  %59 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_1ccc, i64 0, i64 0), i64 10), !insn.addr !350
  %60 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_1cea, i64 0, i64 0), i64 10), !insn.addr !351
  %61 = call i64 @recursion_factorial(), !insn.addr !352
  %62 = and i64 %61, 4294967295, !insn.addr !353
  %63 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_1cea, i64 0, i64 0), i64 %62), !insn.addr !354
  %64 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_1d0e, i64 0, i64 0), i64 30), !insn.addr !355
  %65 = sext i32 %64 to i64, !insn.addr !355
  ret i64 %65, !insn.addr !356

; uselistorder directives
  uselistorder i64 %46, { 1, 0 }
  uselistorder i64 %33, { 1, 0 }
  uselistorder i64 %x8.1.reload, { 1, 0 }
  uselistorder i64 %20, { 1, 0 }
  uselistorder i64 %6, { 1, 0 }
  uselistorder i64 %x12.0.reload, { 2, 1, 3, 0 }
  uselistorder i64 %x8.0.reload, { 1, 0 }
  uselistorder i64* %x8.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x9.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x10.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x12.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x1.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x8.1.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x19.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x21.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x1.2.reg2mem, { 1, 0, 2 }
  uselistorder i64 (i64)* @indirect_recursion_a, { 1, 0 }
  uselistorder i64 (i64)* @tail_recursion, { 1, 0 }
  uselistorder i64 ()* @recursion_factorial, { 2, 1, 0 }
  uselistorder i64 5, { 1, 2, 3, 4, 0 }
  uselistorder i1 false, { 1, 0, 2 }
  uselistorder i32 7, { 2, 1, 0 }
  uselistorder i64 4, { 5, 0, 1, 6, 2, 3, 4 }
  uselistorder label %.loopexit, { 1, 0 }
  uselistorder label %dec_label_pc_131c, { 1, 0 }
}

define i64 @non_local_jump() local_unnamed_addr {
dec_label_pc_14f8:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !357
  %1 = load i64, i64* %0
  %2 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_13058 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !358
  %3 = icmp eq i32 %2, 0, !insn.addr !359
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !359
  br i1 %3, label %dec_label_pc_1520, label %dec_label_pc_1530, !insn.addr !359

dec_label_pc_1520:                                ; preds = %dec_label_pc_14f8
  %4 = trunc i64 %1 to i32
  %5 = icmp slt i32 %4, 0, !insn.addr !360
  br i1 %5, label %dec_label_pc_153c, label %dec_label_pc_1524, !insn.addr !360

dec_label_pc_1524:                                ; preds = %dec_label_pc_1520
  %6 = icmp sgt i32 %4, 100, !insn.addr !361
  br i1 %6, label %dec_label_pc_154c, label %dec_label_pc_152c, !insn.addr !361

dec_label_pc_152c:                                ; preds = %dec_label_pc_1524
  %7 = mul i64 %1, 2, !insn.addr !362
  %8 = and i64 %7, 4294967294, !insn.addr !363
  store i64 %8, i64* %storemerge.reg2mem, !insn.addr !363
  br label %dec_label_pc_1530, !insn.addr !363

dec_label_pc_1530:                                ; preds = %dec_label_pc_14f8, %dec_label_pc_152c
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !364

dec_label_pc_153c:                                ; preds = %dec_label_pc_1520
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_13058 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 1), !insn.addr !365
  unreachable, !insn.addr !365

dec_label_pc_154c:                                ; preds = %dec_label_pc_1524
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_13058 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 2), !insn.addr !366
  ret i64 ptrtoint (i32* @1 to i64), !insn.addr !366

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder void ([1 x %__jmp_buf_tag], i32)* @longjmp, { 1, 0, 2 }
  uselistorder [1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_13058 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], { 1, 0, 2 }
  uselistorder label %dec_label_pc_1530, { 1, 0 }
}

define i64 @cpp_exception() local_unnamed_addr {
dec_label_pc_155c:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !367
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !368
  %3 = icmp slt i32 %2, 0, !insn.addr !369
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !370
  br i1 %3, label %16, label %4, !insn.addr !370

; <label>:4:                                      ; preds = %dec_label_pc_155c
  %5 = add i32 %2, -100, !insn.addr !368
  %6 = icmp eq i32 %5, 0, !insn.addr !368
  %7 = icmp slt i32 %5, 0, !insn.addr !368
  %8 = sub i32 99, %2
  %9 = and i32 %8, %2, !insn.addr !368
  %10 = icmp slt i32 %9, 0, !insn.addr !368
  %11 = icmp ne i1 %7, %10, !insn.addr !371
  %12 = or i1 %6, %11, !insn.addr !371
  %13 = mul i64 %1, 2, !insn.addr !372
  %14 = and i64 %13, 4294967294
  %15 = select i1 %12, i64 %14, i64 4294967294, !insn.addr !370
  store i64 %15, i64* %storemerge.reg2mem, !insn.addr !370
  br label %16, !insn.addr !370

; <label>:16:                                     ; preds = %dec_label_pc_155c, %4
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !373

; uselistorder directives
  uselistorder i32 %2, { 0, 2, 3, 1 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %16, { 1, 0 }
}

define i64 @large_jump_table() local_unnamed_addr {
dec_label_pc_1578:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32, !insn.addr !374
  %4 = icmp ult i32 %3, 9, !insn.addr !374
  %5 = icmp ne i1 %4, true, !insn.addr !374
  %6 = icmp eq i32 %3, 9, !insn.addr !374
  %7 = icmp ne i1 %5, true, !insn.addr !375
  %8 = or i1 %6, %7, !insn.addr !375
  br i1 %8, label %dec_label_pc_1588, label %dec_label_pc_1580, !insn.addr !375

dec_label_pc_1580:                                ; preds = %dec_label_pc_1578
  ret i64 4294967295, !insn.addr !376

dec_label_pc_1588:                                ; preds = %dec_label_pc_1578
  %9 = and i64 %1, 4294967295, !insn.addr !377
  ret i64 %9, !insn.addr !378

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
  uselistorder i32 9, { 0, 3, 4, 1, 5, 2, 6 }
}

define i64 @function_15a8(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_15a8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !379
}

define i64 @op_add() local_unnamed_addr {
dec_label_pc_15b0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %2, %1, !insn.addr !380
  %4 = and i64 %3, 4294967295, !insn.addr !380
  ret i64 %4, !insn.addr !381

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @op_sub() local_unnamed_addr {
dec_label_pc_15b8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = sub i64 %2, %1, !insn.addr !382
  %4 = and i64 %3, 4294967295, !insn.addr !382
  ret i64 %4, !insn.addr !383

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @op_mul() local_unnamed_addr {
dec_label_pc_15c0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = mul i64 %2, %1, !insn.addr !384
  %4 = and i64 %3, 4294967295, !insn.addr !384
  ret i64 %4, !insn.addr !385

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @op_div() local_unnamed_addr {
dec_label_pc_15c8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32, !insn.addr !386
  %4 = icmp eq i32 %3, 0, !insn.addr !386
  br i1 %4, label %dec_label_pc_15d4, label %dec_label_pc_15cc, !insn.addr !386

dec_label_pc_15cc:                                ; preds = %dec_label_pc_15c8
  %5 = trunc i64 %2 to i32, !insn.addr !387
  %6 = sdiv i32 %5, %3, !insn.addr !387
  %7 = zext i32 %6 to i64, !insn.addr !387
  ret i64 %7, !insn.addr !388

dec_label_pc_15d4:                                ; preds = %dec_label_pc_15c8
  ret i64 0, !insn.addr !389

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @op_mod() local_unnamed_addr {
dec_label_pc_15dc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32, !insn.addr !390
  %4 = icmp eq i32 %3, 0, !insn.addr !390
  br i1 %4, label %dec_label_pc_15ec, label %dec_label_pc_15e0, !insn.addr !390

dec_label_pc_15e0:                                ; preds = %dec_label_pc_15dc
  %5 = trunc i64 %2 to i32, !insn.addr !391
  %6 = srem i32 %5, %3
  %7 = zext i32 %6 to i64, !insn.addr !392
  ret i64 %7, !insn.addr !393

dec_label_pc_15ec:                                ; preds = %dec_label_pc_15dc
  ret i64 0, !insn.addr !394

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @op_and() local_unnamed_addr {
dec_label_pc_15f4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = and i64 %1, 4294967295
  %4 = and i64 %3, %2, !insn.addr !395
  ret i64 %4, !insn.addr !396

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @op_or() local_unnamed_addr {
dec_label_pc_15fc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = or i64 %2, %1
  %4 = and i64 %3, 4294967295, !insn.addr !397
  ret i64 %4, !insn.addr !398

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @op_xor() local_unnamed_addr {
dec_label_pc_1604:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = xor i64 %2, %1
  %4 = and i64 %3, 4294967295, !insn.addr !399
  ret i64 %4, !insn.addr !400

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @op_shl() local_unnamed_addr {
dec_label_pc_160c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32, !insn.addr !401
  %4 = trunc i64 %1 to i32, !insn.addr !401
  %5 = shl i32 %3, %4, !insn.addr !401
  %6 = zext i32 %5 to i64, !insn.addr !401
  ret i64 %6, !insn.addr !402

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @op_shr() local_unnamed_addr {
dec_label_pc_1614:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32, !insn.addr !403
  %4 = trunc i64 %1 to i32, !insn.addr !403
  %5 = ashr i32 %3, %4, !insn.addr !403
  %6 = zext i32 %5 to i64, !insn.addr !403
  ret i64 %6, !insn.addr !404

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @conditional_func_ptr() local_unnamed_addr {
dec_label_pc_161c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = and i64 %1, 4294967295, !insn.addr !405
  ret i64 %2, !insn.addr !406
}

define i64 @function_1654(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1654:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !407
}

define i64 @state_machine() local_unnamed_addr {
dec_label_pc_165c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32, !insn.addr !408
  %4 = icmp ult i32 %3, 3, !insn.addr !408
  %5 = icmp ne i1 %4, true, !insn.addr !408
  %6 = icmp eq i32 %3, 3, !insn.addr !408
  %7 = icmp ne i1 %6, true, !insn.addr !409
  %8 = icmp eq i1 %5, %7, !insn.addr !409
  %spec.select = select i1 %8, i64 3, i64 %2
  ret i64 %spec.select, !insn.addr !410

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @function_1698() local_unnamed_addr {
dec_label_pc_1698:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !411
  %3 = icmp eq i32 %2, 99, !insn.addr !411
  %. = select i1 %3, i64 3, i64 1
  %4 = icmp eq i32 %2, 2, !insn.addr !412
  %.v = select i1 %4, i64 %1, i64 %.
  %5 = and i64 %.v, 4294967295, !insn.addr !413
  ret i64 %5, !insn.addr !414

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @function_16b0() local_unnamed_addr {
dec_label_pc_16b0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !415
  %3 = icmp eq i32 %2, 0, !insn.addr !415
  %4 = select i1 %3, i64 0, i64 3, !insn.addr !416
  ret i64 %4, !insn.addr !417
}

define i64 @fsm_func_table() local_unnamed_addr {
dec_label_pc_16c0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32, !insn.addr !418
  %4 = icmp ult i32 %3, 3, !insn.addr !418
  %5 = icmp ne i1 %4, true, !insn.addr !418
  %6 = icmp eq i32 %3, 3, !insn.addr !418
  %7 = icmp ne i1 %5, true, !insn.addr !419
  %8 = or i1 %6, %7, !insn.addr !419
  %spec.select = select i1 %8, i64 %2, i64 3
  ret i64 %spec.select, !insn.addr !420

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @function_16e8(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_16e8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !421
}

define i64 @state_idle() local_unnamed_addr {
dec_label_pc_16f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !422
  %3 = icmp eq i32 %2, 1, !insn.addr !422
  %4 = zext i1 %3 to i64, !insn.addr !423
  ret i64 %4, !insn.addr !424
}

define i64 @state_processing() local_unnamed_addr {
dec_label_pc_16fc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !425
  %3 = icmp eq i32 %2, 99, !insn.addr !425
  %. = select i1 %3, i64 3, i64 1
  %4 = icmp eq i32 %2, 2, !insn.addr !426
  %.v = select i1 %4, i64 %1, i64 %.
  %5 = and i64 %.v, 4294967295, !insn.addr !427
  ret i64 %5, !insn.addr !428

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @state_done() local_unnamed_addr {
dec_label_pc_1714:
  ret i64 2, !insn.addr !429
}

define i64 @state_error() local_unnamed_addr {
dec_label_pc_171c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !430
  %3 = icmp eq i32 %2, 0, !insn.addr !430
  %4 = select i1 %3, i64 0, i64 3, !insn.addr !431
  ret i64 %4, !insn.addr !432
}

define i64 @computed_goto() local_unnamed_addr {
dec_label_pc_172c:
  %0 = alloca i64
  %merge.reg2mem = alloca i64, !insn.addr !433
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !434
  store i32 %2, i32* @0, align 4, !insn.addr !434
  store i64 4294967295, i64* %merge.reg2mem, !insn.addr !435
  switch i32 %2, label %dec_label_pc_1734 [
    i32 0, label %dec_label_pc_174c
    i32 1, label %dec_label_pc_1764
    i32 2, label %dec_label_pc_1754
    i32 3, label %dec_label_pc_175c
  ], !insn.addr !435

dec_label_pc_1734:                                ; preds = %dec_label_pc_1764, %dec_label_pc_175c, %dec_label_pc_1754, %dec_label_pc_174c, %dec_label_pc_172c
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !436

dec_label_pc_174c:                                ; preds = %dec_label_pc_172c
  store i64 0, i64* %merge.reg2mem
  br label %dec_label_pc_1734

dec_label_pc_1754:                                ; preds = %dec_label_pc_172c
  store i64 20, i64* %merge.reg2mem
  br label %dec_label_pc_1734

dec_label_pc_175c:                                ; preds = %dec_label_pc_172c
  store i64 30, i64* %merge.reg2mem
  br label %dec_label_pc_1734

dec_label_pc_1764:                                ; preds = %dec_label_pc_172c
  store i64 10, i64* %merge.reg2mem
  br label %dec_label_pc_1734

; uselistorder directives
  uselistorder i64* %merge.reg2mem, { 1, 2, 3, 4, 0, 5 }
  uselistorder i32 3, { 4, 1, 5, 2, 6, 0, 7, 3, 8, 9 }
  uselistorder i32 2, { 7, 1, 2, 3, 4, 8, 5, 6, 0 }
}

define i64 @obfuscated_cf() local_unnamed_addr {
dec_label_pc_176c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !437
  %3 = and i64 %2, 4294967294, !insn.addr !437
  ret i64 %3, !insn.addr !438
}

define i64 @opaque_predicate() local_unnamed_addr {
dec_label_pc_1774:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !439
  %3 = and i64 %2, 4294967294, !insn.addr !439
  ret i64 %3, !insn.addr !440

; uselistorder directives
  uselistorder i64 4294967294, { 4, 5, 7, 6, 1, 16, 8, 9, 10, 3, 11, 0, 12, 13, 2, 14, 15 }
}

define i64 @overlapped_code() local_unnamed_addr {
dec_label_pc_177c:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !441
  %1 = load i64, i64* %0
  %2 = urem i64 %1, 2
  %3 = icmp eq i64 %2, 0, !insn.addr !442
  br i1 %3, label %4, label %11, !insn.addr !443

; <label>:4:                                      ; preds = %dec_label_pc_177c
  %5 = trunc i64 %1 to i32, !insn.addr !441
  %6 = icmp slt i32 %5, 0, !insn.addr !441
  %7 = zext i1 %6 to i64
  %storemerge1.in = add i64 %1, %7
  %8 = trunc i64 %storemerge1.in to i32, !insn.addr !444
  %9 = ashr i32 %8, 1, !insn.addr !444
  %10 = zext i32 %9 to i64, !insn.addr !443
  store i64 %10, i64* %storemerge.reg2mem, !insn.addr !443
  br label %15, !insn.addr !443

; <label>:11:                                     ; preds = %dec_label_pc_177c
  %12 = mul i64 %1, 3, !insn.addr !445
  %13 = add i64 %12, 1, !insn.addr !443
  %14 = and i64 %13, 4294967295, !insn.addr !443
  store i64 %14, i64* %storemerge.reg2mem, !insn.addr !443
  br label %15, !insn.addr !443

; <label>:15:                                     ; preds = %4, %11
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !446

; uselistorder directives
  uselistorder i64 %1, { 1, 2, 0, 3 }
  uselistorder i64 3, { 5, 6, 3, 1, 7, 4, 2, 12, 14, 8, 9, 10, 13, 15, 11, 0 }
  uselistorder i32 0, { 10, 11, 12, 9, 13, 14, 18, 17, 16, 15, 4, 19, 20, 21, 0, 22, 23, 24, 8, 25, 26, 27, 5, 1, 28, 29, 30, 2, 31, 6, 3, 7 }
  uselistorder label %15, { 1, 0 }
}

define i64 @test_control_flow_l3() local_unnamed_addr {
dec_label_pc_1798:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_1eb9 to i8*)), !insn.addr !447
  %1 = call i64 @non_local_jump(), !insn.addr !448
  %2 = and i64 %1, 4294967295, !insn.addr !449
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_1d34, i64 0, i64 0), i64 %2), !insn.addr !450
  %4 = call i64 @non_local_jump(), !insn.addr !451
  %5 = and i64 %4, 4294967295, !insn.addr !452
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_1d34, i64 0, i64 0), i64 %5), !insn.addr !453
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_1d53, i64 0, i64 0), i64 10), !insn.addr !454
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_1d53, i64 0, i64 0), i64 4294967295), !insn.addr !455
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_1d71, i64 0, i64 0), i64 15), !insn.addr !456
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_1d92, i64 0, i64 0), i64 10), !insn.addr !457
  %11 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_1db7, i64 0, i64 0), i64 1), !insn.addr !458
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_1dd5, i64 0, i64 0), i64 2), !insn.addr !459
  %13 = call i64 @computed_goto(), !insn.addr !460
  %14 = and i64 %13, 4294967295, !insn.addr !461
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_1df4, i64 0, i64 0), i64 %14), !insn.addr !462
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_1e12, i64 0, i64 0), i64 10), !insn.addr !463
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_1e30, i64 0, i64 0), i64 10), !insn.addr !464
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_1e51, i64 0, i64 0), i64 16), !insn.addr !465
  %19 = sext i32 %18 to i64, !insn.addr !465
  ret i64 %19, !insn.addr !466

; uselistorder directives
  uselistorder i64 16, { 1, 2, 3, 0 }
  uselistorder i64 2, { 20, 13, 1, 2, 12, 3, 4, 17, 5, 6, 14, 18, 19, 7, 8, 15, 21, 9, 16, 10, 0, 11 }
  uselistorder i64 1, { 23, 9, 6, 7, 10, 11, 12, 25, 26, 13, 5, 14, 15, 16, 17, 18, 27, 28, 24, 19, 1, 0, 8, 29, 20, 30, 21, 2, 22, 3, 4 }
  uselistorder i64 10, { 7, 8, 9, 10, 0, 11, 12, 1, 13, 2, 3, 14, 15, 4, 5, 6 }
  uselistorder i32 (i8*, ...)* @printf, { 47, 46, 45, 53, 52, 51, 50, 49, 48, 56, 55, 54, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 57 }
  uselistorder i64 4294967295, { 19, 79, 20, 21, 22, 0, 23, 24, 25, 26, 27, 17, 28, 29, 30, 31, 10, 1, 2, 32, 33, 34, 35, 36, 37, 38, 39, 40, 3, 80, 41, 42, 4, 15, 43, 44, 11, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 5, 59, 12, 60, 61, 16, 6, 81, 62, 63, 64, 65, 66, 67, 7, 68, 69, 70, 71, 72, 73, 74, 75, 13, 76, 77, 18, 14, 8, 9, 78 }
  uselistorder i64 ()* @non_local_jump, { 1, 0 }
  uselistorder i32 (i8*)* @puts, { 1, 2, 0, 3 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1894:
  %0 = call i64 @test_control_flow_l1(), !insn.addr !467
  %1 = call i64 @test_control_flow_l2(), !insn.addr !468
  %2 = call i64 @test_control_flow_l3(), !insn.addr !469
  ret i64 0, !insn.addr !470

; uselistorder directives
  uselistorder i64 0, { 25, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 0, 60, 61, 26, 27, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 1, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 2, 88, 89, 3, 4, 5, 28, 90, 6, 7, 8, 9, 10, 11, 12, 13, 91, 92, 14, 15, 16, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 136, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 137, 125, 126, 138, 127, 128, 129, 130, 131, 132, 17, 29, 143, 18, 19, 133, 134, 20, 32, 21, 30, 22, 23, 135, 24, 144, 31, 145, 33, 34, 35, 36, 37, 38, 139, 140, 141, 142 }
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_18b4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !471

; uselistorder directives
  uselistorder i32 1, { 66, 150, 67, 65, 64, 63, 151, 68, 62, 61, 60, 124, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 69, 39, 125, 70, 38, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 136, 37, 36, 35, 34, 33, 32, 31, 30, 126, 152, 137, 81, 29, 82, 28, 127, 27, 85, 84, 83, 138, 88, 87, 86, 26, 122, 139, 94, 93, 92, 91, 90, 89, 25, 140, 95, 24, 23, 22, 129, 128, 98, 97, 96, 21, 102, 101, 100, 99, 20, 19, 141, 105, 104, 103, 18, 142, 17, 143, 108, 107, 106, 16, 110, 109, 15, 130, 131, 14, 112, 111, 115, 114, 113, 13, 144, 12, 123, 117, 116, 11, 10, 9, 8, 118, 7, 119, 6, 132, 145, 146, 147, 148, 120, 5, 133, 4, 134, 3, 135, 2, 1, 121, 149, 0 }
}

declare i32 @_setjmp([1 x %__jmp_buf_tag]) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i64 @__cxa_finalize.5(i64) local_unnamed_addr

declare i64 @__gmon_start__.6(i64) local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare void @longjmp([1 x %__jmp_buf_tag], i32) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @__asm_sbfx(i32, i32, i64, i64) local_unnamed_addr

!0 = !{i64 2156}
!1 = !{i64 2164}
!2 = !{i64 2220}
!3 = !{i64 2236}
!4 = !{i64 2252}
!5 = !{i64 2268}
!6 = !{i64 2284}
!7 = !{i64 2300}
!8 = !{i64 2316}
!9 = !{i64 2332}
!10 = !{i64 2400}
!11 = !{i64 2412}
!12 = !{i64 2416}
!13 = !{i64 2424}
!14 = !{i64 2428}
!15 = !{i64 2432}
!16 = !{i64 2436}
!17 = !{i64 2492}
!18 = !{i64 2552}
!19 = !{i64 2560}
!20 = !{i64 2576}
!21 = !{i64 2580}
!22 = !{i64 2588}
!23 = !{i64 2592}
!24 = !{i64 2600}
!25 = !{i64 2604}
!26 = !{i64 2608}
!27 = !{i64 2616}
!28 = !{i64 2628}
!29 = !{i64 2640}
!30 = !{i64 2644}
!31 = !{i64 2648}
!32 = !{i64 2652}
!33 = !{i64 2656}
!34 = !{i64 2660}
!35 = !{i64 2664}
!36 = !{i64 2668}
!37 = !{i64 2672}
!38 = !{i64 2676}
!39 = !{i64 2680}
!40 = !{i64 2684}
!41 = !{i64 2688}
!42 = !{i64 2692}
!43 = !{i64 2696}
!44 = !{i64 2700}
!45 = !{i64 2704}
!46 = !{i64 2708}
!47 = !{i64 2712}
!48 = !{i64 2720}
!49 = !{i64 2728}
!50 = !{i64 2736}
!51 = !{i64 2740}
!52 = !{i64 2748}
!53 = !{i64 2752}
!54 = !{i64 2788}
!55 = !{i64 2792}
!56 = !{i64 2804}
!57 = !{i64 2796}
!58 = !{i64 2800}
!59 = !{i64 2808}
!60 = !{i64 2812}
!61 = !{i64 2816}
!62 = !{i64 2828}
!63 = !{i64 2820}
!64 = !{i64 2824}
!65 = !{i64 2832}
!66 = !{i64 2836}
!67 = !{i64 2840}
!68 = !{i64 2852}
!69 = !{i64 2856}
!70 = !{i64 2864}
!71 = !{i64 2872}
!72 = !{i64 2884}
!73 = !{i64 2892}
!74 = !{i64 2896}
!75 = !{i64 2900}
!76 = !{i64 2904}
!77 = !{i64 2908}
!78 = !{i64 2912}
!79 = !{i64 2916}
!80 = !{i64 2920}
!81 = !{i64 2944}
!82 = !{i64 2948}
!83 = !{i64 2952}
!84 = !{i64 2956}
!85 = !{i64 2964}
!86 = !{i64 2972}
!87 = !{i64 2968}
!88 = !{i64 2976}
!89 = !{i64 2980}
!90 = !{i64 2984}
!91 = !{i64 2992}
!92 = !{i64 2996}
!93 = !{i64 3004}
!94 = !{i64 3008}
!95 = !{i64 3012}
!96 = !{i64 3024}
!97 = !{i64 3028}
!98 = !{i64 3032}
!99 = !{i64 3036}
!100 = !{i64 3040}
!101 = !{i64 3044}
!102 = !{i64 3048}
!103 = !{i64 3052}
!104 = !{i64 3056}
!105 = !{i64 3060}
!106 = !{i64 3068}
!107 = !{i64 3072}
!108 = !{i64 3084}
!109 = !{i64 3088}
!110 = !{i64 3092}
!111 = !{i64 3096}
!112 = !{i64 3100}
!113 = !{i64 3104}
!114 = !{i64 3108}
!115 = !{i64 3116}
!116 = !{i64 3120}
!117 = !{i64 3124}
!118 = !{i64 3128}
!119 = !{i64 3132}
!120 = !{i64 3136}
!121 = !{i64 3140}
!122 = !{i64 3144}
!123 = !{i64 3148}
!124 = !{i64 3152}
!125 = !{i64 3172}
!126 = !{i64 3164}
!127 = !{i64 3168}
!128 = !{i64 3176}
!129 = !{i64 3180}
!130 = !{i64 3188}
!131 = !{i64 3196}
!132 = !{i64 3200}
!133 = !{i64 3204}
!134 = !{i64 3216}
!135 = !{i64 3220}
!136 = !{i64 3228}
!137 = !{i64 3232}
!138 = !{i64 3236}
!139 = !{i64 3244}
!140 = !{i64 3256}
!141 = !{i64 3264}
!142 = !{i64 3268}
!143 = !{i64 3272}
!144 = !{i64 3276}
!145 = !{i64 3280}
!146 = !{i64 3284}
!147 = !{i64 3288}
!148 = !{i64 3296}
!149 = !{i64 3300}
!150 = !{i64 3308}
!151 = !{i64 3312}
!152 = !{i64 3316}
!153 = !{i64 3328}
!154 = !{i64 3332}
!155 = !{i64 3336}
!156 = !{i64 3360}
!157 = !{i64 3376}
!158 = !{i64 3396}
!159 = !{i64 3408}
!160 = !{i64 3428}
!161 = !{i64 3440}
!162 = !{i64 3460}
!163 = !{i64 3472}
!164 = !{i64 3484}
!165 = !{i64 3500}
!166 = !{i64 3516}
!167 = !{i64 3532}
!168 = !{i64 3548}
!169 = !{i64 3564}
!170 = !{i64 3580}
!171 = !{i64 3596}
!172 = !{i64 3612}
!173 = !{i64 3628}
!174 = !{i64 3644}
!175 = !{i64 3660}
!176 = !{i64 3680}
!177 = !{i64 3692}
!178 = !{i64 3708}
!179 = !{i64 3728}
!180 = !{i64 3740}
!181 = !{i64 3756}
!182 = !{i64 3776}
!183 = !{i64 3788}
!184 = !{i64 3800}
!185 = !{i64 3804}
!186 = !{i64 3824}
!187 = !{i64 3828}
!188 = !{i64 3832}
!189 = !{i64 3840}
!190 = !{i64 3896}
!191 = !{i64 3860}
!192 = !{i64 3864}
!193 = !{i64 3868}
!194 = !{i64 3872}
!195 = !{i64 3880}
!196 = !{i64 3888}
!197 = !{i64 3892}
!198 = !{i64 3904}
!199 = !{i64 3924}
!200 = !{i64 3928}
!201 = !{i64 3936}
!202 = !{i64 3952}
!203 = !{i64 3956}
!204 = !{i64 3960}
!205 = !{i64 3964}
!206 = !{i64 3976}
!207 = !{i64 3968}
!208 = !{i64 3972}
!209 = !{i64 3984}
!210 = !{i64 3992}
!211 = !{i64 3996}
!212 = !{i64 4000}
!213 = !{i64 4008}
!214 = !{i64 4020}
!215 = !{i64 4024}
!216 = !{i64 4028}
!217 = !{i64 4036}
!218 = !{i64 4048}
!219 = !{i64 4052}
!220 = !{i64 4056}
!221 = !{i64 4064}
!222 = !{i64 4100}
!223 = !{i64 4104}
!224 = !{i64 4108}
!225 = !{i64 4132}
!226 = !{i64 4220}
!227 = !{i64 4224}
!228 = !{i64 4236}
!229 = !{i64 4240}
!230 = !{i64 4244}
!231 = !{i64 4248}
!232 = !{i64 4256}
!233 = !{i64 4264}
!234 = !{i64 4292}
!235 = !{i64 4296}
!236 = !{i64 4300}
!237 = !{i64 4304}
!238 = !{i64 4308}
!239 = !{i64 4320}
!240 = !{i64 4324}
!241 = !{i64 4328}
!242 = !{i64 4332}
!243 = !{i64 4336}
!244 = !{i64 4344}
!245 = !{i64 4352}
!246 = !{i64 4368}
!247 = !{i64 4372}
!248 = !{i64 4376}
!249 = !{i64 4384}
!250 = !{i64 4380}
!251 = !{i64 4392}
!252 = !{i64 4396}
!253 = !{i64 4404}
!254 = !{i64 4412}
!255 = !{i64 4436}
!256 = !{i64 4440}
!257 = !{i64 4452}
!258 = !{i64 4456}
!259 = !{i64 4460}
!260 = !{i64 4480}
!261 = !{i64 4484}
!262 = !{i64 4488}
!263 = !{i64 4492}
!264 = !{i64 4496}
!265 = !{i64 4500}
!266 = !{i64 4504}
!267 = !{i64 4508}
!268 = !{i64 4512}
!269 = !{i64 4524}
!270 = !{i64 4528}
!271 = !{i64 4548}
!272 = !{i64 4540}
!273 = !{i64 4552}
!274 = !{i64 4556}
!275 = !{i64 4576}
!276 = !{i64 4580}
!277 = !{i64 4584}
!278 = !{i64 4600}
!279 = !{i64 4604}
!280 = !{i64 4612}
!281 = !{i64 4616}
!282 = !{i64 4620}
!283 = !{i64 4628}
!284 = !{i64 4652}
!285 = !{i64 4656}
!286 = !{i64 4664}
!287 = !{i64 4668}
!288 = !{i64 4672}
!289 = !{i64 4676}
!290 = !{i64 4680}
!291 = !{i64 4684}
!292 = !{i64 4688}
!293 = !{i64 4712}
!294 = !{i64 4732}
!295 = !{i64 4736}
!296 = !{i64 4776}
!297 = !{i64 4780}
!298 = !{i64 4804}
!299 = !{i64 4820}
!300 = !{i64 4824}
!301 = !{i64 4828}
!302 = !{i64 4832}
!303 = !{i64 4836}
!304 = !{i64 4840}
!305 = !{i64 4848}
!306 = !{i64 4856}
!307 = !{i64 4864}
!308 = !{i64 4872}
!309 = !{i64 4892}
!310 = !{i64 4896}
!311 = !{i64 4900}
!312 = !{i64 4908}
!313 = !{i64 4860}
!314 = !{i64 4932}
!315 = !{i64 4940}
!316 = !{i64 4956}
!317 = !{i64 4964}
!318 = !{i64 4984}
!319 = !{i64 5008}
!320 = !{i64 5020}
!321 = !{i64 5032}
!322 = !{i64 5056}
!323 = !{i64 5068}
!324 = !{i64 5084}
!325 = !{i64 5088}
!326 = !{i64 5092}
!327 = !{i64 5096}
!328 = !{i64 5100}
!329 = !{i64 5104}
!330 = !{i64 5108}
!331 = !{i64 5112}
!332 = !{i64 5116}
!333 = !{i64 5120}
!334 = !{i64 5124}
!335 = !{i64 5140}
!336 = !{i64 5156}
!337 = !{i64 5164}
!338 = !{i64 5176}
!339 = !{i64 5184}
!340 = !{i64 5196}
!341 = !{i64 5204}
!342 = !{i64 5208}
!343 = !{i64 5220}
!344 = !{i64 5232}
!345 = !{i64 5236}
!346 = !{i64 5248}
!347 = !{i64 5260}
!348 = !{i64 5264}
!349 = !{i64 5276}
!350 = !{i64 5292}
!351 = !{i64 5312}
!352 = !{i64 5320}
!353 = !{i64 5324}
!354 = !{i64 5332}
!355 = !{i64 5348}
!356 = !{i64 5364}
!357 = !{i64 5368}
!358 = !{i64 5392}
!359 = !{i64 5396}
!360 = !{i64 5408}
!361 = !{i64 5416}
!362 = !{i64 5380}
!363 = !{i64 5420}
!364 = !{i64 5432}
!365 = !{i64 5448}
!366 = !{i64 5464}
!367 = !{i64 5468}
!368 = !{i64 5476}
!369 = !{i64 5484}
!370 = !{i64 5488}
!371 = !{i64 5480}
!372 = !{i64 5472}
!373 = !{i64 5492}
!374 = !{i64 5496}
!375 = !{i64 5500}
!376 = !{i64 5508}
!377 = !{i64 5532}
!378 = !{i64 5540}
!379 = !{i64 5548}
!380 = !{i64 5552}
!381 = !{i64 5556}
!382 = !{i64 5560}
!383 = !{i64 5564}
!384 = !{i64 5568}
!385 = !{i64 5572}
!386 = !{i64 5576}
!387 = !{i64 5580}
!388 = !{i64 5584}
!389 = !{i64 5592}
!390 = !{i64 5596}
!391 = !{i64 5600}
!392 = !{i64 5604}
!393 = !{i64 5608}
!394 = !{i64 5616}
!395 = !{i64 5620}
!396 = !{i64 5624}
!397 = !{i64 5628}
!398 = !{i64 5632}
!399 = !{i64 5636}
!400 = !{i64 5640}
!401 = !{i64 5644}
!402 = !{i64 5648}
!403 = !{i64 5652}
!404 = !{i64 5656}
!405 = !{i64 5704}
!406 = !{i64 5712}
!407 = !{i64 5720}
!408 = !{i64 5724}
!409 = !{i64 5728}
!410 = !{i64 5756}
!411 = !{i64 5784}
!412 = !{i64 5796}
!413 = !{i64 5800}
!414 = !{i64 5804}
!415 = !{i64 5808}
!416 = !{i64 5816}
!417 = !{i64 5820}
!418 = !{i64 5824}
!419 = !{i64 5828}
!420 = !{i64 5836}
!421 = !{i64 5868}
!422 = !{i64 5872}
!423 = !{i64 5876}
!424 = !{i64 5880}
!425 = !{i64 5888}
!426 = !{i64 5896}
!427 = !{i64 5900}
!428 = !{i64 5904}
!429 = !{i64 5912}
!430 = !{i64 5920}
!431 = !{i64 5924}
!432 = !{i64 5928}
!433 = !{i64 5932}
!434 = !{i64 5956}
!435 = !{i64 5960}
!436 = !{i64 5944}
!437 = !{i64 5996}
!438 = !{i64 6000}
!439 = !{i64 6004}
!440 = !{i64 6008}
!441 = !{i64 6012}
!442 = !{i64 6024}
!443 = !{i64 6032}
!444 = !{i64 6028}
!445 = !{i64 6016}
!446 = !{i64 6036}
!447 = !{i64 6060}
!448 = !{i64 6068}
!449 = !{i64 6076}
!450 = !{i64 6088}
!451 = !{i64 6096}
!452 = !{i64 6100}
!453 = !{i64 6108}
!454 = !{i64 6128}
!455 = !{i64 6140}
!456 = !{i64 6156}
!457 = !{i64 6172}
!458 = !{i64 6188}
!459 = !{i64 6204}
!460 = !{i64 6212}
!461 = !{i64 6216}
!462 = !{i64 6228}
!463 = !{i64 6244}
!464 = !{i64 6260}
!465 = !{i64 6276}
!466 = !{i64 6288}
!467 = !{i64 6300}
!468 = !{i64 6304}
!469 = !{i64 6308}
!470 = !{i64 6320}
!471 = !{i64 6340}
