source_filename = "test"
target datalayout = "e-m:e-i64:64-i128:128-n32:64-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@global_var_13f80 = local_unnamed_addr global i64 2352
@global_var_13f88 = local_unnamed_addr global i64 2352
@global_var_13f90 = local_unnamed_addr global i64 2352
@global_var_13f98 = local_unnamed_addr global i64 2352
@global_var_13fa0 = local_unnamed_addr global i64 2352
@global_var_13fa8 = local_unnamed_addr global i64 2352
@global_var_13fb0 = local_unnamed_addr global i64 2352
@global_var_13fb8 = local_unnamed_addr global i64 2352
@global_var_13fc0 = local_unnamed_addr global i64 2352
@global_var_13ff0 = local_unnamed_addr global i64 10644
@global_var_14000 = global i64 0
@global_var_140b8 = global i64 0
@global_var_13fd0 = local_unnamed_addr global i64 0
@global_var_13ff8 = local_unnamed_addr global i64 0
@global_var_af4 = local_unnamed_addr constant i64 4108094713444171808
@global_var_13fe8 = local_unnamed_addr global i64 0
@global_var_29d0 = local_unnamed_addr constant i64 85899345930
@global_var_29d8 = local_unnamed_addr constant i64 171798691870
@global_var_29e0 = local_unnamed_addr constant i64 50
@global_var_13b8 = local_unnamed_addr constant i64 5944752475880816738
@global_var_2a10 = constant [31 x i8] c"CF-L1-01 (sequential_ops): %d\0A\00"
@global_var_2a30 = constant [26 x i8] c"CF-L1-02 (single_if): %d\0A\00"
@global_var_2a50 = constant [24 x i8] c"CF-L1-03 (if_else): %d\0A\00"
@global_var_1420 = local_unnamed_addr constant i64 -7493992146161106880
@global_var_2a68 = constant [28 x i8] c"CF-L1-04 (nested_if_2): %d\0A\00"
@global_var_148c = local_unnamed_addr constant i64 5944751659837030436
@global_var_2a88 = constant [31 x i8] c"CF-L1-05 (nested_if_deep): %d\0A\00"
@global_var_14b4 = local_unnamed_addr constant i64 -7493992037713182688
@global_var_2aa8 = constant [32 x i8] c"CF-L1-06 (if_elseif_chain): %d\0A\00"
@global_var_14cc = local_unnamed_addr constant i64 -7493991977583640480
@global_var_2ac8 = constant [31 x i8] c"CF-L1-07 (if_elseif_long): %d\0A\00"
@global_var_14e4 = local_unnamed_addr constant i64 -7493991874504425408
@global_var_2ae8 = constant [29 x i8] c"CF-L1-08 (switch_small): %d\0A\00"
@global_var_2b08 = constant [29 x i8] c"CF-L1-09 (switch_large): %d\0A\00"
@global_var_2b28 = constant [31 x i8] c"CF-L1-10 (switch_default): %d\0A\00"
@global_var_152c = local_unnamed_addr constant i64 -7493991316158676896
@global_var_2b48 = constant [35 x i8] c"CF-L1-11 (switch_fallthrough): %d\0A\00"
@global_var_2b70 = constant [31 x i8] c"CF-L1-12 (loop_for_fixed): %d\0A\00"
@global_var_2b90 = constant [27 x i8] c"CF-L1-13 (loop_while): %d\0A\00"
@global_var_2bb0 = constant [29 x i8] c"CF-L1-14 (loop_dowhile): %d\0A\00"
@global_var_2bd0 = constant [28 x i8] c"CF-L1-15 (loop_nested): %d\0A\00"
@global_var_2bf0 = constant [27 x i8] c"CF-L1-16 (loop_break): %d\0A\00"
@global_var_2c10 = constant [30 x i8] c"CF-L1-17 (loop_continue): %d\0A\00"
@global_var_2c30 = constant [29 x i8] c"CF-L1-18 (goto_forward): %d\0A\00"
@global_var_1608 = local_unnamed_addr constant i64 -7493990672987324352
@global_var_2c50 = constant [30 x i8] c"CF-L1-19 (goto_backward): %d\0A\00"
@global_var_2c70 = constant [27 x i8] c"CF-L1-20 (ternary_op): %d\0A\00"
@global_var_2ca0 = local_unnamed_addr constant i64 25769803781
@global_var_2cb0 = local_unnamed_addr constant i64 42949672969
@global_var_1c80 = local_unnamed_addr constant i64 -5098039726619754485
@global_var_14010 = local_unnamed_addr global i64 7456
@global_var_14018 = local_unnamed_addr global i64 7480
@global_var_14020 = local_unnamed_addr global i64 7064
@global_var_2ce8 = constant [32 x i8] c"CF-L2-01 (loop_multi_exit): %d\0A\00"
@global_var_2d08 = constant [30 x i8] c"CF-L2-02 (infinite_loop): %d\0A\00"
@global_var_2d28 = constant [29 x i8] c"CF-L2-03 (multi_return): %d\0A\00"
@global_var_1f20 = local_unnamed_addr constant i64 -7493991797195014048
@global_var_2d48 = constant [35 x i8] c"CF-L2-04 (conditional_return): %d\0A\00"
@global_var_2ef0 = local_unnamed_addr constant i64 25769803781
@global_var_2d70 = constant [29 x i8] c"CF-L2-05 (duffs_device): %d\0A\00"
@global_var_2d90 = constant [34 x i8] c"CF-L2-06 (loop_complex_cond): %d\0A\00"
@global_var_2db8 = constant [32 x i8] c"CF-L2-07 (loop_modify_var): %d\0A\00"
@global_var_2dd8 = constant [36 x i8] c"CF-L2-08 (loop_external_state): %d\0A\00"
@global_var_2e00 = constant [36 x i8] c"CF-L2-09 (recursion_factorial): %d\0A\00"
@global_var_2008 = local_unnamed_addr constant i64 5944752196707942433
@global_var_2e28 = constant [31 x i8] c"CF-L2-10 (tail_recursion): %d\0A\00"
@global_var_2024 = local_unnamed_addr constant i64 5944752883902709857
@global_var_2e48 = constant [35 x i8] c"CF-L2-11 (indirect_recursion): %d\0A\00"
@global_var_2e70 = constant [30 x i8] c"CF-L2-12 (call_func_ptr): %d\0A\00"
@global_var_2e90 = constant [36 x i8] c"CF-L2-13 (call_func_ptr_array): %d\0A\00"
@global_var_2f00 = local_unnamed_addr constant i64 8589934593
@global_var_2f08 = local_unnamed_addr constant i64 17179869187
@global_var_2f10 = local_unnamed_addr constant i64 5
@global_var_2eb8 = constant [38 x i8] c"CF-L2-15 (process_with_callback): %d\0A\00"
@jump_buffer = global i64 0
@global_var_14038 = local_unnamed_addr global i64 8700
@global_var_14048 = local_unnamed_addr global i64 8784
@global_var_14058 = local_unnamed_addr global i64 8880
@global_var_14068 = local_unnamed_addr global i64 8944
@global_var_14078 = local_unnamed_addr global i64 9508
@global_var_14098 = local_unnamed_addr global i64 9940
@global_var_2f40 = constant [31 x i8] c"CF-L3-01 (non_local_jump): %d\0A\00"
@global_var_2f60 = constant [30 x i8] c"CF-L3-02 (cpp_exception): %d\0A\00"
@global_var_2f80 = constant [33 x i8] c"CF-L3-03 (large_jump_table): %d\0A\00"
@global_var_2fa8 = constant [37 x i8] c"CF-L3-04 (conditional_func_ptr): %d\0A\00"
@global_var_2fd0 = constant [30 x i8] c"CF-L3-05 (state_machine): %d\0A\00"
@global_var_28cc = local_unnamed_addr constant i64 5944751784391082017
@global_var_2ff0 = constant [31 x i8] c"CF-L3-06 (fsm_func_table): %d\0A\00"
@global_var_3000 = local_unnamed_addr constant [15 x i8] c"nc_table): %d\0A\00"
@global_var_3010 = constant [30 x i8] c"CF-L3-07 (computed_goto): %d\0A\00"
@global_var_3030 = constant [30 x i8] c"CF-L3-08 (obfuscated_cf): %d\0A\00"
@global_var_3050 = constant [33 x i8] c"CF-L3-09 (opaque_predicate): %d\0A\00"
@global_var_3078 = constant [32 x i8] c"CF-L3-10 (overlapped_code): %d\0A\00"
@0 = external global i32
@1 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\9F\BA\E7\A1\80\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_29e8 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @1, i64 0, i64 0)
@global_var_3039 = constant i32 1717727016
@global_var_2c90 = local_unnamed_addr constant fp128 0xL00000000000000003BED000000020000
@global_var_3e8 = global i1 false
@2 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\AB\98\E7\BA\A7\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_2cc0 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @2, i64 0, i64 0)
@global_var_2ee0 = local_unnamed_addr constant fp128 0xL00000000000000003BED000000020000
@global_var_14028 = local_unnamed_addr global fp128 0xL00000000000000003BFA0DE000000000
@3 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\9E\81\E7\AB\AF\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_2f18 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @3, i64 0, i64 0)

define i64 @_init(i64 %arg1) local_unnamed_addr {
dec_label_pc_918:
  %0 = call i64 @call_weak_fn(), !insn.addr !0
  ret i64 %0, !insn.addr !1
}

define i32 @function_950([1 x %__jmp_buf_tag] %env) local_unnamed_addr {
dec_label_pc_950:
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] %env), !insn.addr !2
  ret i32 %0, !insn.addr !2
}

define i32 @function_960(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_960:
  %0 = call i32 @__libc_start_main(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define void @function_970(i64* %d) local_unnamed_addr {
dec_label_pc_970:
  call void @__cxa_finalize(i64* %d), !insn.addr !4
  ret void, !insn.addr !4
}

define void @function_980() local_unnamed_addr {
dec_label_pc_980:
  call void @__stack_chk_fail(), !insn.addr !5
  ret void, !insn.addr !5
}

define void @function_990() local_unnamed_addr {
dec_label_pc_990:
  call void @__gmon_start__(), !insn.addr !6
  ret void, !insn.addr !6
}

define void @function_9a0() local_unnamed_addr {
dec_label_pc_9a0:
  call void @abort(), !insn.addr !7
  ret void, !insn.addr !7
}

define i32 @function_9b0(i8* %s) local_unnamed_addr {
dec_label_pc_9b0:
  %0 = call i32 @puts(i8* %s), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define void @function_9c0([1 x %__jmp_buf_tag] %env, i32 %val) local_unnamed_addr {
dec_label_pc_9c0:
  call void @longjmp([1 x %__jmp_buf_tag] %env, i32 %val), !insn.addr !9
  ret void, !insn.addr !9
}

define i32 @function_9d0(i8* %format, ...) local_unnamed_addr {
dec_label_pc_9d0:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i64 @_start(i64 %arg1) local_unnamed_addr {
dec_label_pc_a00:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_8 = alloca i64, align 8
  %2 = load i64, i64* @global_var_13ff0, align 8, !insn.addr !11
  %3 = trunc i64 %arg1 to i32, !insn.addr !12
  %4 = bitcast i64* %stack_var_8 to i8**, !insn.addr !12
  %5 = inttoptr i64 %1 to void ()*, !insn.addr !12
  %6 = call i32 @__libc_start_main(i64 %2, i32 %3, i8** nonnull %4, void ()* null, void ()* null, void ()* %5), !insn.addr !12
  call void @abort(), !insn.addr !13
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !13
}

define i64 @call_weak_fn() local_unnamed_addr {
dec_label_pc_a34:
  %0 = load i64, i64* inttoptr (i64 81888 to i64*), align 32, !insn.addr !14
  %1 = icmp eq i64 %0, 0, !insn.addr !15
  br i1 %1, label %dec_label_pc_a44, label %dec_label_pc_a40, !insn.addr !15

dec_label_pc_a40:                                 ; preds = %dec_label_pc_a34
  call void @__gmon_start__(), !insn.addr !16
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !16

dec_label_pc_a44:                                 ; preds = %dec_label_pc_a34
  ret i64 0, !insn.addr !17
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_a50:
  ret i64 ptrtoint (i64* @global_var_140b8 to i64), !insn.addr !18
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_a80:
  ret i64 ptrtoint (i64* @global_var_140b8 to i64), !insn.addr !19
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_ac0:
  %x0.0.reg2mem = alloca i64, !insn.addr !20
  %0 = load i8, i8* bitcast (i64* @global_var_140b8 to i8*), align 8, !insn.addr !21
  %1 = zext i8 %0 to i64, !insn.addr !21
  %2 = icmp eq i8 %0, 0, !insn.addr !22
  store i64 %1, i64* %x0.0.reg2mem, !insn.addr !22
  br i1 %2, label %dec_label_pc_ad8, label %dec_label_pc_afc, !insn.addr !22

dec_label_pc_ad8:                                 ; preds = %dec_label_pc_ac0
  %3 = load i64, i64* inttoptr (i64 81880 to i64*), align 8, !insn.addr !23
  %4 = icmp eq i64 %3, 0, !insn.addr !24
  br i1 %4, label %dec_label_pc_af0, label %dec_label_pc_ae4, !insn.addr !24

dec_label_pc_ae4:                                 ; preds = %dec_label_pc_ad8
  %5 = load i64, i64* inttoptr (i64 add (i64 ptrtoint (i64* @global_var_14000 to i64), i64 8) to i64*), align 8, !insn.addr !25
  %6 = inttoptr i64 %5 to i64*, !insn.addr !26
  call void @__cxa_finalize(i64* %6), !insn.addr !26
  br label %dec_label_pc_af0, !insn.addr !26

dec_label_pc_af0:                                 ; preds = %dec_label_pc_ae4, %dec_label_pc_ad8
  %7 = call i64 @deregister_tm_clones(), !insn.addr !27
  store i8 1, i8* bitcast (i64* @global_var_140b8 to i8*), align 8, !insn.addr !28
  store i64 1, i64* %x0.0.reg2mem, !insn.addr !28
  br label %dec_label_pc_afc, !insn.addr !28

dec_label_pc_afc:                                 ; preds = %dec_label_pc_ac0, %dec_label_pc_af0
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !29

; uselistorder directives
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_afc, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_b10:
  %0 = call i64 @register_tm_clones(), !insn.addr !30
  ret i64 %0, !insn.addr !30
}

define i32 @sequential_ops(i32 %a, i32 %b, i32 %c) local_unnamed_addr {
dec_label_pc_b14:
  %0 = add i32 %b, %a, !insn.addr !31
  %1 = mul i32 %0, 2, !insn.addr !32
  %2 = sub i32 %1, %c, !insn.addr !33
  ret i32 %2, !insn.addr !34
}

define i32 @single_if(i32 %x) local_unnamed_addr {
dec_label_pc_b5c:
  %0 = icmp sgt i32 %x, 0, !insn.addr !35
  %1 = zext i1 %0 to i32
  %spec.select = shl i32 %x, %1
  ret i32 %spec.select, !insn.addr !36

; uselistorder directives
  uselistorder i32 %x, { 1, 0 }
}

define i32 @if_else(i32 %x) local_unnamed_addr {
dec_label_pc_b88:
  %0 = icmp sgt i32 %x, 0, !insn.addr !37
  %. = zext i1 %0 to i32
  ret i32 %., !insn.addr !38
}

define i32 @nested_if_2(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_bb0:
  %0 = icmp slt i32 %a, 1, !insn.addr !39
  br i1 %0, label %dec_label_pc_bf0, label %dec_label_pc_bc8, !insn.addr !39

dec_label_pc_bc8:                                 ; preds = %dec_label_pc_bb0
  %1 = icmp sgt i32 %b, 0, !insn.addr !40
  %2 = select i1 %1, i32 %b, i32 0
  %spec.select = add i32 %2, %a
  ret i32 %spec.select

dec_label_pc_bf0:                                 ; preds = %dec_label_pc_bb0
  ret i32 0, !insn.addr !41
}

define i32 @nested_if_deep(i32 %a, i32 %b, i32 %c, i32 %d, i32 %e) local_unnamed_addr {
dec_label_pc_bf8:
  %x0.0.reg2mem = alloca i32, !insn.addr !42
  %0 = icmp slt i32 %a, 1, !insn.addr !43
  store i32 0, i32* %x0.0.reg2mem, !insn.addr !43
  br i1 %0, label %dec_label_pc_c78, label %dec_label_pc_c1c, !insn.addr !43

dec_label_pc_c1c:                                 ; preds = %dec_label_pc_bf8
  %1 = icmp slt i32 %b, 1, !insn.addr !44
  store i32 1, i32* %x0.0.reg2mem, !insn.addr !44
  br i1 %1, label %dec_label_pc_c78, label %dec_label_pc_c28, !insn.addr !44

dec_label_pc_c28:                                 ; preds = %dec_label_pc_c1c
  %2 = icmp slt i32 %c, 1, !insn.addr !45
  store i32 2, i32* %x0.0.reg2mem, !insn.addr !45
  br i1 %2, label %dec_label_pc_c78, label %dec_label_pc_c34, !insn.addr !45

dec_label_pc_c34:                                 ; preds = %dec_label_pc_c28
  %3 = icmp slt i32 %d, 1, !insn.addr !46
  store i32 3, i32* %x0.0.reg2mem, !insn.addr !46
  br i1 %3, label %dec_label_pc_c78, label %dec_label_pc_c40, !insn.addr !46

dec_label_pc_c40:                                 ; preds = %dec_label_pc_c34
  %4 = icmp slt i32 %e, 1, !insn.addr !47
  %. = select i1 %4, i32 4, i32 5
  store i32 %., i32* %x0.0.reg2mem, !insn.addr !48
  br label %dec_label_pc_c78, !insn.addr !48

dec_label_pc_c78:                                 ; preds = %dec_label_pc_bf8, %dec_label_pc_c1c, %dec_label_pc_c28, %dec_label_pc_c34, %dec_label_pc_c40
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !49

; uselistorder directives
  uselistorder i32* %x0.0.reg2mem, { 0, 5, 4, 3, 2, 1 }
  uselistorder label %dec_label_pc_c78, { 4, 3, 2, 1, 0 }
}

define i32 @if_elseif_chain(i32 %x) local_unnamed_addr {
dec_label_pc_c80:
  %x0.0.reg2mem = alloca i32, !insn.addr !50
  store i32 10, i32* %x0.0.reg2mem
  switch i32 %x, label %dec_label_pc_cc4 [
    i32 0, label %dec_label_pc_cc8
    i32 1, label %dec_label_pc_ca8
    i32 2, label %dec_label_pc_cbc
  ]

dec_label_pc_ca8:                                 ; preds = %dec_label_pc_c80
  store i32 20, i32* %x0.0.reg2mem, !insn.addr !51
  br label %dec_label_pc_cc8, !insn.addr !51

dec_label_pc_cbc:                                 ; preds = %dec_label_pc_c80
  store i32 30, i32* %x0.0.reg2mem, !insn.addr !52
  br label %dec_label_pc_cc8, !insn.addr !52

dec_label_pc_cc4:                                 ; preds = %dec_label_pc_c80
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !53
  br label %dec_label_pc_cc8, !insn.addr !53

dec_label_pc_cc8:                                 ; preds = %dec_label_pc_c80, %dec_label_pc_cc4, %dec_label_pc_cbc, %dec_label_pc_ca8
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !54

; uselistorder directives
  uselistorder i32* %x0.0.reg2mem, { 0, 2, 3, 4, 1 }
  uselistorder label %dec_label_pc_cc8, { 1, 2, 3, 0 }
}

define i32 @if_elseif_long(i32 %x) local_unnamed_addr {
dec_label_pc_cd0:
  %x0.0.reg2mem = alloca i32, !insn.addr !55
  store i32 100, i32* %x0.0.reg2mem
  switch i32 %x, label %dec_label_pc_d3c [
    i32 0, label %dec_label_pc_d40
    i32 1, label %dec_label_pc_cf8
    i32 2, label %dec_label_pc_d0c
    i32 3, label %dec_label_pc_d20
    i32 4, label %dec_label_pc_d34
  ]

dec_label_pc_cf8:                                 ; preds = %dec_label_pc_cd0
  store i32 200, i32* %x0.0.reg2mem, !insn.addr !56
  br label %dec_label_pc_d40, !insn.addr !56

dec_label_pc_d0c:                                 ; preds = %dec_label_pc_cd0
  store i32 300, i32* %x0.0.reg2mem, !insn.addr !57
  br label %dec_label_pc_d40, !insn.addr !57

dec_label_pc_d20:                                 ; preds = %dec_label_pc_cd0
  store i32 400, i32* %x0.0.reg2mem, !insn.addr !58
  br label %dec_label_pc_d40, !insn.addr !58

dec_label_pc_d34:                                 ; preds = %dec_label_pc_cd0
  store i32 500, i32* %x0.0.reg2mem, !insn.addr !59
  br label %dec_label_pc_d40, !insn.addr !59

dec_label_pc_d3c:                                 ; preds = %dec_label_pc_cd0
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !60
  br label %dec_label_pc_d40, !insn.addr !60

dec_label_pc_d40:                                 ; preds = %dec_label_pc_cd0, %dec_label_pc_d3c, %dec_label_pc_d34, %dec_label_pc_d20, %dec_label_pc_d0c, %dec_label_pc_cf8
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !61

; uselistorder directives
  uselistorder i32* %x0.0.reg2mem, { 0, 2, 3, 4, 5, 6, 1 }
  uselistorder label %dec_label_pc_d40, { 1, 2, 3, 4, 5, 0 }
}

define i32 @switch_small(i32 %op) local_unnamed_addr {
dec_label_pc_d48:
  %x0.0.reg2mem = alloca i32, !insn.addr !62
  %0 = icmp eq i32 %op, 3, !insn.addr !63
  store i32 2, i32* %x0.0.reg2mem, !insn.addr !64
  br i1 %0, label %dec_label_pc_df0, label %dec_label_pc_d6c, !insn.addr !64

dec_label_pc_d6c:                                 ; preds = %dec_label_pc_d48
  %1 = icmp sgt i32 %op, 3, !insn.addr !65
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !65
  br i1 %1, label %dec_label_pc_df0, label %dec_label_pc_d78, !insn.addr !65

dec_label_pc_d78:                                 ; preds = %dec_label_pc_d6c
  %2 = icmp eq i32 %op, 2, !insn.addr !66
  store i32 50, i32* %x0.0.reg2mem, !insn.addr !67
  br i1 %2, label %dec_label_pc_df0, label %dec_label_pc_d90, !insn.addr !67

dec_label_pc_d90:                                 ; preds = %dec_label_pc_d78
  %switch.selectcmp = icmp eq i32 %op, 1
  %switch.select = select i1 %switch.selectcmp, i32 5, i32 -1
  %switch.selectcmp1 = icmp eq i32 %op, 0
  %switch.select2 = select i1 %switch.selectcmp1, i32 15, i32 %switch.select
  store i32 %switch.select2, i32* %x0.0.reg2mem
  br label %dec_label_pc_df0

dec_label_pc_df0:                                 ; preds = %dec_label_pc_d6c, %dec_label_pc_d90, %dec_label_pc_d48, %dec_label_pc_d78
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !68

; uselistorder directives
  uselistorder i32* %x0.0.reg2mem, { 0, 2, 4, 1, 3 }
  uselistorder i32 %op, { 0, 1, 3, 2, 4 }
  uselistorder label %dec_label_pc_df0, { 1, 3, 0, 2 }
}

define i32 @switch_large(i32 %op) local_unnamed_addr {
dec_label_pc_df8:
  %x0.0.reg2mem = alloca i32, !insn.addr !69
  %0 = icmp eq i32 %op, 9, !insn.addr !70
  store i32 90, i32* %x0.0.reg2mem, !insn.addr !71
  br i1 %0, label %dec_label_pc_f30, label %dec_label_pc_e0c, !insn.addr !71

dec_label_pc_e0c:                                 ; preds = %dec_label_pc_df8
  %1 = icmp sgt i32 %op, 9, !insn.addr !72
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !72
  br i1 %1, label %dec_label_pc_f30, label %dec_label_pc_e18, !insn.addr !72

dec_label_pc_e18:                                 ; preds = %dec_label_pc_e0c
  store i32 80, i32* %x0.0.reg2mem
  switch i32 %op, label %dec_label_pc_ec0 [
    i32 8, label %dec_label_pc_f30
    i32 7, label %dec_label_pc_f30.fold.split
    i32 6, label %dec_label_pc_f30.fold.split3
    i32 5, label %dec_label_pc_f30.fold.split4
    i32 4, label %dec_label_pc_f30.fold.split5
    i32 3, label %dec_label_pc_f30.fold.split6
    i32 2, label %dec_label_pc_f30.fold.split7
  ]

dec_label_pc_ec0:                                 ; preds = %dec_label_pc_e18
  %switch.selectcmp = icmp eq i32 %op, 1
  %switch.select = select i1 %switch.selectcmp, i32 10, i32 -1
  %switch.selectcmp1 = icmp eq i32 %op, 0
  %switch.select2 = select i1 %switch.selectcmp1, i32 0, i32 %switch.select
  store i32 %switch.select2, i32* %x0.0.reg2mem
  br label %dec_label_pc_f30

dec_label_pc_f30.fold.split:                      ; preds = %dec_label_pc_e18
  store i32 70, i32* %x0.0.reg2mem
  br label %dec_label_pc_f30

dec_label_pc_f30.fold.split3:                     ; preds = %dec_label_pc_e18
  store i32 60, i32* %x0.0.reg2mem
  br label %dec_label_pc_f30

dec_label_pc_f30.fold.split4:                     ; preds = %dec_label_pc_e18
  store i32 50, i32* %x0.0.reg2mem
  br label %dec_label_pc_f30

dec_label_pc_f30.fold.split5:                     ; preds = %dec_label_pc_e18
  store i32 40, i32* %x0.0.reg2mem
  br label %dec_label_pc_f30

dec_label_pc_f30.fold.split6:                     ; preds = %dec_label_pc_e18
  store i32 30, i32* %x0.0.reg2mem
  br label %dec_label_pc_f30

dec_label_pc_f30.fold.split7:                     ; preds = %dec_label_pc_e18
  store i32 20, i32* %x0.0.reg2mem
  br label %dec_label_pc_f30

dec_label_pc_f30:                                 ; preds = %dec_label_pc_e18, %dec_label_pc_f30.fold.split7, %dec_label_pc_f30.fold.split6, %dec_label_pc_f30.fold.split5, %dec_label_pc_f30.fold.split4, %dec_label_pc_f30.fold.split3, %dec_label_pc_f30.fold.split, %dec_label_pc_e0c, %dec_label_pc_ec0, %dec_label_pc_df8
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !73

; uselistorder directives
  uselistorder i32* %x0.0.reg2mem, { 0, 1, 2, 3, 4, 5, 6, 8, 10, 7, 9 }
  uselistorder i32 %op, { 1, 2, 0, 3, 4 }
  uselistorder label %dec_label_pc_f30, { 1, 2, 3, 4, 5, 6, 8, 0, 7, 9 }
}

define i32 @switch_default(i32 %op) local_unnamed_addr {
dec_label_pc_f38:
  %x0.0.reg2mem = alloca i32, !insn.addr !74
  %0 = icmp eq i32 %op, 3, !insn.addr !75
  store i32 300, i32* %x0.0.reg2mem, !insn.addr !76
  br i1 %0, label %dec_label_pc_f90, label %dec_label_pc_f4c, !insn.addr !76

dec_label_pc_f4c:                                 ; preds = %dec_label_pc_f38
  %1 = icmp sgt i32 %op, 3, !insn.addr !77
  store i32 0, i32* %x0.0.reg2mem, !insn.addr !77
  br i1 %1, label %dec_label_pc_f90, label %dec_label_pc_f58, !insn.addr !77

dec_label_pc_f58:                                 ; preds = %dec_label_pc_f4c
  %switch.selectcmp = icmp eq i32 %op, 2
  %switch.select = select i1 %switch.selectcmp, i32 200, i32 0
  %switch.selectcmp1 = icmp eq i32 %op, 1
  %switch.select2 = select i1 %switch.selectcmp1, i32 100, i32 %switch.select
  store i32 %switch.select2, i32* %x0.0.reg2mem
  br label %dec_label_pc_f90

dec_label_pc_f90:                                 ; preds = %dec_label_pc_f4c, %dec_label_pc_f58, %dec_label_pc_f38
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !78

; uselistorder directives
  uselistorder i32* %x0.0.reg2mem, { 0, 2, 1, 3 }
  uselistorder i32 200, { 1, 0 }
  uselistorder label %dec_label_pc_f90, { 1, 0, 2 }
}

define i32 @switch_fallthrough(i32 %op) local_unnamed_addr {
dec_label_pc_f98:
  %storemerge.reg2mem = alloca i32, !insn.addr !79
  %result_-4.1.reg2mem = alloca i32, !insn.addr !79
  %result_-4.0.reg2mem = alloca i32, !insn.addr !79
  %0 = icmp eq i32 %op, 3, !insn.addr !80
  store i32 12, i32* %result_-4.0.reg2mem, !insn.addr !81
  br i1 %0, label %dec_label_pc_fec, label %dec_label_pc_fb0, !insn.addr !81

dec_label_pc_fb0:                                 ; preds = %dec_label_pc_f98
  %1 = icmp sgt i32 %op, 3, !insn.addr !82
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !82
  br i1 %1, label %dec_label_pc_101c, label %dec_label_pc_fbc, !insn.addr !82

dec_label_pc_fbc:                                 ; preds = %dec_label_pc_fb0
  store i32 0, i32* %result_-4.0.reg2mem
  store i32 0, i32* %result_-4.1.reg2mem
  store i32 -1, i32* %storemerge.reg2mem
  switch i32 %op, label %dec_label_pc_101c [
    i32 1, label %dec_label_pc_1000
    i32 2, label %dec_label_pc_fec
  ]

dec_label_pc_fec:                                 ; preds = %dec_label_pc_f98, %dec_label_pc_fbc
  %result_-4.0.reload = load i32, i32* %result_-4.0.reg2mem
  %2 = mul i32 %op, 2, !insn.addr !83
  %3 = add i32 %result_-4.0.reload, %2, !insn.addr !84
  store i32 %3, i32* %result_-4.1.reg2mem, !insn.addr !85
  br label %dec_label_pc_1000, !insn.addr !85

dec_label_pc_1000:                                ; preds = %dec_label_pc_fbc, %dec_label_pc_fec
  %result_-4.1.reload = load i32, i32* %result_-4.1.reg2mem
  %4 = add i32 %result_-4.1.reload, %op, !insn.addr !86
  store i32 %4, i32* %storemerge.reg2mem, !insn.addr !87
  br label %dec_label_pc_101c, !insn.addr !87

dec_label_pc_101c:                                ; preds = %dec_label_pc_fbc, %dec_label_pc_fb0, %dec_label_pc_1000
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !88

; uselistorder directives
  uselistorder i32* %result_-4.0.reg2mem, { 0, 2, 1 }
  uselistorder i32* %result_-4.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 3, 1, 2 }
  uselistorder i32 %op, { 1, 0, 2, 3, 4 }
  uselistorder label %dec_label_pc_101c, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1000, { 1, 0 }
  uselistorder label %dec_label_pc_fec, { 1, 0 }
}

define i32 @loop_for_fixed(i32 %n) local_unnamed_addr {
dec_label_pc_1028:
  %sum_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !89
  %0 = icmp eq i32 %n, 0, !insn.addr !90
  store i32 0, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !90
  br i1 %0, label %dec_label_pc_1068, label %dec_label_pc_103c.lr.ph, !insn.addr !90

dec_label_pc_103c.lr.ph:                          ; preds = %dec_label_pc_1028
  %1 = add i32 %n, -1
  %2 = zext i32 %1 to i33
  %3 = add i32 %n, -2
  %4 = zext i32 %3 to i33
  %5 = mul i33 %2, %4
  %6 = udiv i33 %5, 2
  %7 = trunc i33 %6 to i32
  %8 = add i32 %1, %7
  store i32 %8, i32* %sum_-8.0.lcssa.reg2mem
  br label %dec_label_pc_1068

dec_label_pc_1068:                                ; preds = %dec_label_pc_1028, %dec_label_pc_103c.lr.ph
  %sum_-8.0.lcssa.reload = load i32, i32* %sum_-8.0.lcssa.reg2mem
  ret i32 %sum_-8.0.lcssa.reload, !insn.addr !91

; uselistorder directives
  uselistorder i32* %sum_-8.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1068, { 1, 0 }
}

define i32 @loop_while(i32 %x) local_unnamed_addr {
dec_label_pc_1074:
  %stack_var_-20.01.reg2mem = alloca i32, !insn.addr !92
  %storemerge2.reg2mem = alloca i32, !insn.addr !92
  %0 = icmp eq i32 %x, 0, !insn.addr !93
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !94
  store i32 %x, i32* %stack_var_-20.01.reg2mem, !insn.addr !94
  br i1 %0, label %dec_label_pc_10c0.thread, label %dec_label_pc_1084, !insn.addr !94

dec_label_pc_1084:                                ; preds = %dec_label_pc_1074, %dec_label_pc_1084
  %stack_var_-20.01.reload = load i32, i32* %stack_var_-20.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %1 = sdiv i32 %stack_var_-20.01.reload, 10, !insn.addr !95
  %2 = add i32 %storemerge2.reload, 1, !insn.addr !96
  %stack_var_-20.01.off = add i32 %stack_var_-20.01.reload, 9
  %3 = icmp ult i32 %stack_var_-20.01.off, 19
  store i32 %2, i32* %storemerge2.reg2mem, !insn.addr !94
  store i32 %1, i32* %stack_var_-20.01.reg2mem, !insn.addr !94
  br i1 %3, label %dec_label_pc_10c0, label %dec_label_pc_1084, !insn.addr !94

dec_label_pc_10c0:                                ; preds = %dec_label_pc_1084
  %4 = icmp sgt i32 %2, 1
  %spec.select = select i1 %4, i32 %2, i32 1
  ret i32 %spec.select

dec_label_pc_10c0.thread:                         ; preds = %dec_label_pc_1074
  ret i32 1, !insn.addr !97

; uselistorder directives
  uselistorder i32 %2, { 1, 2, 0 }
  uselistorder i32 %stack_var_-20.01.reload, { 1, 0 }
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-20.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1084, { 1, 0 }
}

define i32 @loop_dowhile(i32 %x) local_unnamed_addr {
dec_label_pc_10dc:
  %count_-4.0.reg2mem = alloca i32, !insn.addr !98
  %stack_var_-20.0.reg2mem = alloca i32, !insn.addr !98
  store i32 %x, i32* %stack_var_-20.0.reg2mem, !insn.addr !99
  store i32 0, i32* %count_-4.0.reg2mem, !insn.addr !99
  br label %dec_label_pc_10e8, !insn.addr !99

dec_label_pc_10e8:                                ; preds = %dec_label_pc_10e8, %dec_label_pc_10dc
  %count_-4.0.reload = load i32, i32* %count_-4.0.reg2mem
  %stack_var_-20.0.reload = load i32, i32* %stack_var_-20.0.reg2mem
  %0 = sdiv i32 %stack_var_-20.0.reload, 10, !insn.addr !100
  %1 = add i32 %count_-4.0.reload, 1, !insn.addr !101
  %stack_var_-20.0.off = add i32 %stack_var_-20.0.reload, 9
  %2 = icmp ult i32 %stack_var_-20.0.off, 19
  store i32 %0, i32* %stack_var_-20.0.reg2mem, !insn.addr !102
  store i32 %1, i32* %count_-4.0.reg2mem, !insn.addr !102
  br i1 %2, label %dec_label_pc_1124, label %dec_label_pc_10e8, !insn.addr !102

dec_label_pc_1124:                                ; preds = %dec_label_pc_10e8
  ret i32 %1, !insn.addr !103

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32 %stack_var_-20.0.reload, { 1, 0 }
  uselistorder i32* %stack_var_-20.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %count_-4.0.reg2mem, { 1, 0, 2 }
  uselistorder i32 9, { 0, 1, 3, 2 }
}

define i32 @loop_nested(i32 %m, i32 %n) local_unnamed_addr {
dec_label_pc_1130:
  %0 = mul i32 %n, %m
  ret i32 %0, !insn.addr !104
}

define i32 @loop_break(i32 %target) local_unnamed_addr {
dec_label_pc_11a0:
  %storemerge.reg2mem = alloca i32, !insn.addr !105
  %.reg2mem = alloca i32, !insn.addr !105
  %arr_-32 = alloca [5 x i32], align 4
  %stack_var_-24 = alloca i64, align 8
  %0 = load i64, i64* @global_var_13fe8, align 8, !insn.addr !106
  %1 = inttoptr i64 %0 to i64*
  %2 = load i64, i64* %1, align 8, !insn.addr !107
  store i64 85899345930, i64* %stack_var_-24, align 8, !insn.addr !108
  store [5 x i32] [i32 0, i32 undef, i32 undef, i32 undef, i32 undef], [5 x i32]* %arr_-32, align 4
  %3 = getelementptr inbounds [5 x i32], [5 x i32]* %arr_-32, i64 0, i64 0, !insn.addr !109
  %4 = load i32, i32* %3, align 4, !insn.addr !109
  %5 = icmp ult i32 %4, 5, !insn.addr !110
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !110
  br i1 %5, label %dec_label_pc_11f0.lr.ph, label %dec_label_pc_1234, !insn.addr !110

dec_label_pc_11f0.lr.ph:                          ; preds = %dec_label_pc_11a0
  %6 = ptrtoint i64* %stack_var_-24 to i64, !insn.addr !111
  store i32 %4, i32* %.reg2mem
  br label %dec_label_pc_11f0

dec_label_pc_11f0:                                ; preds = %dec_label_pc_11f0.lr.ph, %dec_label_pc_1214
  %.reload = load i32, i32* %.reg2mem
  %7 = sext i32 %.reload to i64, !insn.addr !112
  %8 = mul i64 %7, 4, !insn.addr !113
  %9 = add i64 %8, %6, !insn.addr !114
  %10 = inttoptr i64 %9 to i32*, !insn.addr !114
  %11 = load i32, i32* %10, align 4, !insn.addr !114
  %12 = icmp eq i32 %11, %target, !insn.addr !115
  store i32 %.reload, i32* %storemerge.reg2mem, !insn.addr !115
  br i1 %12, label %dec_label_pc_1234, label %dec_label_pc_1214, !insn.addr !115

dec_label_pc_1214:                                ; preds = %dec_label_pc_11f0
  %13 = add i32 %.reload, 1, !insn.addr !116
  %14 = insertvalue [5 x i32] undef, i32 %13, 0, !insn.addr !117
  store [5 x i32] %14, [5 x i32]* %arr_-32, align 4
  %15 = load i32, i32* %3, align 4, !insn.addr !109
  %16 = icmp ult i32 %15, 5, !insn.addr !110
  store i32 %15, i32* %.reg2mem, !insn.addr !110
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !110
  br i1 %16, label %dec_label_pc_11f0, label %dec_label_pc_1234, !insn.addr !110

dec_label_pc_1234:                                ; preds = %dec_label_pc_1214, %dec_label_pc_11f0, %dec_label_pc_11a0
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %17 = load i64, i64* %1, align 8, !insn.addr !118
  %18 = icmp eq i64 %2, %17, !insn.addr !119
  br i1 %18, label %dec_label_pc_1258, label %dec_label_pc_1254, !insn.addr !120

dec_label_pc_1254:                                ; preds = %dec_label_pc_1234
  call void @__stack_chk_fail(), !insn.addr !121
  br label %dec_label_pc_1258, !insn.addr !121

dec_label_pc_1258:                                ; preds = %dec_label_pc_1254, %dec_label_pc_1234
  ret i32 %storemerge.reload, !insn.addr !122

; uselistorder directives
  uselistorder i32 %.reload, { 1, 0, 2 }
  uselistorder i32* %3, { 1, 0 }
  uselistorder [5 x i32]* %arr_-32, { 1, 2, 0 }
  uselistorder i32* %.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1, 3 }
  uselistorder label %dec_label_pc_11f0, { 1, 0 }
}

define i32 @loop_continue(i32 %n) local_unnamed_addr {
dec_label_pc_1264:
  %sum_-8.1.lcssa.reg2mem = alloca i32, !insn.addr !123
  %sum_-8.11.reg2mem = alloca i32, !insn.addr !123
  %storemerge2.reg2mem = alloca i32, !insn.addr !123
  %0 = icmp eq i32 %n, 0, !insn.addr !124
  store i32 1, i32* %storemerge2.reg2mem, !insn.addr !124
  store i32 0, i32* %sum_-8.11.reg2mem, !insn.addr !124
  store i32 0, i32* %sum_-8.1.lcssa.reg2mem, !insn.addr !124
  br i1 %0, label %dec_label_pc_12c0, label %dec_label_pc_127c, !insn.addr !124

dec_label_pc_127c:                                ; preds = %dec_label_pc_1264, %dec_label_pc_127c
  %sum_-8.11.reload = load i32, i32* %sum_-8.11.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %1 = urem i32 %storemerge2.reload, 2, !insn.addr !125
  %2 = icmp eq i32 %1, 0, !insn.addr !126
  %3 = select i1 %2, i32 0, i32 %storemerge2.reload
  %spec.select = add i32 %3, %sum_-8.11.reload
  %4 = add i32 %storemerge2.reload, 1, !insn.addr !127
  %5 = icmp ugt i32 %4, %n, !insn.addr !124
  store i32 %4, i32* %storemerge2.reg2mem, !insn.addr !124
  store i32 %spec.select, i32* %sum_-8.11.reg2mem, !insn.addr !124
  store i32 %spec.select, i32* %sum_-8.1.lcssa.reg2mem, !insn.addr !124
  br i1 %5, label %dec_label_pc_12c0, label %dec_label_pc_127c, !insn.addr !124

dec_label_pc_12c0:                                ; preds = %dec_label_pc_127c, %dec_label_pc_1264
  %sum_-8.1.lcssa.reload = load i32, i32* %sum_-8.1.lcssa.reg2mem
  ret i32 %sum_-8.1.lcssa.reload, !insn.addr !128

; uselistorder directives
  uselistorder i32 %storemerge2.reload, { 1, 0, 2 }
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sum_-8.11.reg2mem, { 2, 0, 1 }
  uselistorder i32 %n, { 1, 0 }
  uselistorder label %dec_label_pc_127c, { 1, 0 }
}

define i32 @goto_forward(i32 %x) local_unnamed_addr {
dec_label_pc_12cc:
  %0 = icmp sgt i32 %x, 1
  %1 = select i1 %0, i32 %x, i32 1
  %storemerge = mul i32 %x, 2
  %2 = mul i32 %storemerge, %1, !insn.addr !129
  ret i32 %2, !insn.addr !130
}

define i32 @goto_backward(i32 %x) local_unnamed_addr {
dec_label_pc_1310:
  %storemerge1.reg2mem = alloca i32, !insn.addr !131
  %result_-8.02.reg2mem = alloca i32, !insn.addr !131
  %storemerge3.reg2mem = alloca i32, !insn.addr !131
  %0 = icmp sgt i32 %x, 0, !insn.addr !132
  store i32 1, i32* %storemerge3.reg2mem, !insn.addr !132
  store i32 1, i32* %result_-8.02.reg2mem, !insn.addr !132
  store i32 1, i32* %storemerge1.reg2mem, !insn.addr !132
  br i1 %0, label %dec_label_pc_134c, label %dec_label_pc_1374, !insn.addr !132

dec_label_pc_134c:                                ; preds = %dec_label_pc_1310, %dec_label_pc_134c
  %result_-8.02.reload = load i32, i32* %result_-8.02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %1 = mul i32 %result_-8.02.reload, %storemerge3.reload, !insn.addr !133
  %2 = add i32 %storemerge3.reload, 1, !insn.addr !134
  %3 = icmp ugt i32 %2, %x, !insn.addr !135
  store i32 %2, i32* %storemerge3.reg2mem, !insn.addr !135
  store i32 %1, i32* %result_-8.02.reg2mem, !insn.addr !135
  store i32 %1, i32* %storemerge1.reg2mem, !insn.addr !135
  br i1 %3, label %dec_label_pc_1374, label %dec_label_pc_134c, !insn.addr !135

dec_label_pc_1374:                                ; preds = %dec_label_pc_134c, %dec_label_pc_1310
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  ret i32 %storemerge1.reload, !insn.addr !136

; uselistorder directives
  uselistorder i32* %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder i32* %result_-8.02.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_134c, { 1, 0 }
}

define i32 @ternary_op(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_137c:
  %0 = sub i32 %b, %a, !insn.addr !137
  %1 = xor i32 %b, %a, !insn.addr !137
  %2 = xor i32 %0, %b, !insn.addr !137
  %3 = and i32 %2, %1, !insn.addr !137
  %4 = icmp slt i32 %3, 0, !insn.addr !137
  %5 = icmp slt i32 %0, 0, !insn.addr !137
  %6 = icmp eq i1 %5, %4, !insn.addr !138
  %7 = select i1 %6, i32 %b, i32 %a, !insn.addr !138
  ret i32 %7, !insn.addr !139

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32 %b, { 2, 0, 1, 3 }
  uselistorder i32 %a, { 1, 0, 2 }
}

define void @test_control_flow_l1() local_unnamed_addr {
dec_label_pc_13a4:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_29e8 to i8*)), !insn.addr !140
  %1 = call i32 @sequential_ops(i32 5, i32 7, i32 3), !insn.addr !141
  %2 = zext i32 %1 to i64, !insn.addr !142
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_2a10, i64 0, i64 0), i64 %2), !insn.addr !143
  %4 = call i32 @single_if(i32 10), !insn.addr !144
  %5 = zext i32 %4 to i64, !insn.addr !145
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_2a30, i64 0, i64 0), i64 %5), !insn.addr !146
  %7 = call i32 @single_if(i32 -5), !insn.addr !147
  %8 = zext i32 %7 to i64, !insn.addr !148
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_2a30, i64 0, i64 0), i64 %8), !insn.addr !149
  %10 = call i32 @if_else(i32 5), !insn.addr !150
  %11 = zext i32 %10 to i64, !insn.addr !151
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_2a50, i64 0, i64 0), i64 %11), !insn.addr !152
  %13 = call i32 @if_else(i32 -3), !insn.addr !153
  %14 = zext i32 %13 to i64, !insn.addr !154
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_2a50, i64 0, i64 0), i64 %14), !insn.addr !155
  %16 = call i32 @nested_if_2(i32 10, i32 5), !insn.addr !156
  %17 = zext i32 %16 to i64, !insn.addr !157
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_2a68, i64 0, i64 0), i64 %17), !insn.addr !158
  %19 = call i32 @nested_if_2(i32 10, i32 -5), !insn.addr !159
  %20 = zext i32 %19 to i64, !insn.addr !160
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_2a68, i64 0, i64 0), i64 %20), !insn.addr !161
  %22 = call i32 @nested_if_2(i32 -10, i32 5), !insn.addr !162
  %23 = zext i32 %22 to i64, !insn.addr !163
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_2a68, i64 0, i64 0), i64 %23), !insn.addr !164
  %25 = call i32 @nested_if_deep(i32 1, i32 1, i32 1, i32 1, i32 1), !insn.addr !165
  %26 = zext i32 %25 to i64, !insn.addr !166
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_2a88, i64 0, i64 0), i64 %26), !insn.addr !167
  %28 = call i32 @if_elseif_chain(i32 1), !insn.addr !168
  %29 = zext i32 %28 to i64, !insn.addr !169
  %30 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_2aa8, i64 0, i64 0), i64 %29), !insn.addr !170
  %31 = call i32 @if_elseif_long(i32 3), !insn.addr !171
  %32 = zext i32 %31 to i64, !insn.addr !172
  %33 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_2ac8, i64 0, i64 0), i64 %32), !insn.addr !173
  %34 = call i32 @switch_small(i32 2), !insn.addr !174
  %35 = zext i32 %34 to i64, !insn.addr !175
  %36 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2ae8, i64 0, i64 0), i64 %35), !insn.addr !176
  %37 = call i32 @switch_large(i32 7), !insn.addr !177
  %38 = zext i32 %37 to i64, !insn.addr !178
  %39 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2b08, i64 0, i64 0), i64 %38), !insn.addr !179
  %40 = call i32 @switch_default(i32 5), !insn.addr !180
  %41 = zext i32 %40 to i64, !insn.addr !181
  %42 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_2b28, i64 0, i64 0), i64 %41), !insn.addr !182
  %43 = call i32 @switch_fallthrough(i32 3), !insn.addr !183
  %44 = zext i32 %43 to i64, !insn.addr !184
  %45 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_2b48, i64 0, i64 0), i64 %44), !insn.addr !185
  %46 = call i32 @loop_for_fixed(i32 10), !insn.addr !186
  %47 = zext i32 %46 to i64, !insn.addr !187
  %48 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_2b70, i64 0, i64 0), i64 %47), !insn.addr !188
  %49 = call i32 @loop_while(i32 ptrtoint (i32* @global_var_3039 to i32)), !insn.addr !189
  %50 = zext i32 %49 to i64, !insn.addr !190
  %51 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_2b90, i64 0, i64 0), i64 %50), !insn.addr !191
  %52 = call i32 @loop_dowhile(i32 9876), !insn.addr !192
  %53 = zext i32 %52 to i64, !insn.addr !193
  %54 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2bb0, i64 0, i64 0), i64 %53), !insn.addr !194
  %55 = call i32 @loop_nested(i32 3, i32 4), !insn.addr !195
  %56 = zext i32 %55 to i64, !insn.addr !196
  %57 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_2bd0, i64 0, i64 0), i64 %56), !insn.addr !197
  %58 = call i32 @loop_break(i32 30), !insn.addr !198
  %59 = zext i32 %58 to i64, !insn.addr !199
  %60 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_2bf0, i64 0, i64 0), i64 %59), !insn.addr !200
  %61 = call i32 @loop_break(i32 99), !insn.addr !201
  %62 = zext i32 %61 to i64, !insn.addr !202
  %63 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_2bf0, i64 0, i64 0), i64 %62), !insn.addr !203
  %64 = call i32 @loop_continue(i32 10), !insn.addr !204
  %65 = zext i32 %64 to i64, !insn.addr !205
  %66 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2c10, i64 0, i64 0), i64 %65), !insn.addr !206
  %67 = call i32 @goto_forward(i32 5), !insn.addr !207
  %68 = zext i32 %67 to i64, !insn.addr !208
  %69 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2c30, i64 0, i64 0), i64 %68), !insn.addr !209
  %70 = call i32 @goto_forward(i32 -3), !insn.addr !210
  %71 = zext i32 %70 to i64, !insn.addr !211
  %72 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2c30, i64 0, i64 0), i64 %71), !insn.addr !212
  %73 = call i32 @goto_backward(i32 5), !insn.addr !213
  %74 = zext i32 %73 to i64, !insn.addr !214
  %75 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2c50, i64 0, i64 0), i64 %74), !insn.addr !215
  %76 = call i32 @ternary_op(i32 10, i32 5), !insn.addr !216
  %77 = zext i32 %76 to i64, !insn.addr !217
  %78 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_2c70, i64 0, i64 0), i64 %77), !insn.addr !218
  %79 = call i32 @ternary_op(i32 3, i32 8), !insn.addr !219
  %80 = zext i32 %79 to i64, !insn.addr !220
  %81 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_2c70, i64 0, i64 0), i64 %80), !insn.addr !221
  ret void, !insn.addr !222

; uselistorder directives
  uselistorder i32 (i32, i32)* @ternary_op, { 1, 0 }
  uselistorder i32 (i32)* @goto_forward, { 1, 0 }
  uselistorder i32 (i32)* @loop_break, { 1, 0 }
  uselistorder i32 30, { 2, 0, 1 }
  uselistorder i32 (i32, i32)* @nested_if_2, { 2, 1, 0 }
  uselistorder i32 (i32)* @if_else, { 1, 0 }
  uselistorder i32 (i32)* @single_if, { 1, 0 }
}

define i32 @loop_multi_exit(i32 %target) local_unnamed_addr {
dec_label_pc_167c:
  %storemerge1.reg2mem = alloca i32, !insn.addr !223
  %.reg2mem = alloca i32, !insn.addr !223
  %storemerge24.reg2mem = alloca i32, !insn.addr !223
  %matrix_-56 = alloca [3 x [4 x i32]], align 4
  %stack_var_-48 = alloca i64, align 8
  %0 = load i64, i64* @global_var_13fe8, align 8, !insn.addr !224
  %1 = inttoptr i64 %0 to i64*
  %2 = load i64, i64* %1, align 8, !insn.addr !225
  store i64 4294967298, i64* %stack_var_-48, align 8, !insn.addr !226
  store [3 x [4 x i32]] [[4 x i32] [i32 0, i32 undef, i32 undef, i32 undef], [4 x i32] undef, [4 x i32] undef], [3 x [4 x i32]]* %matrix_-56, align 4
  %3 = getelementptr inbounds [3 x [4 x i32]], [3 x [4 x i32]]* %matrix_-56, i64 0, i64 0, i64 0, !insn.addr !227
  %4 = load i32, i32* %3, align 4, !insn.addr !227
  %5 = icmp slt i32 %4, 3, !insn.addr !228
  store i32 -1, i32* %storemerge1.reg2mem, !insn.addr !228
  br i1 %5, label %dec_label_pc_1720.preheader.lr.ph, label %dec_label_pc_1748, !insn.addr !228

dec_label_pc_1720.preheader.lr.ph:                ; preds = %dec_label_pc_167c
  %6 = ptrtoint i64* %stack_var_-48 to i64, !insn.addr !229
  store i32 %4, i32* %.reg2mem
  br label %dec_label_pc_1720.preheader

dec_label_pc_16c8:                                ; preds = %dec_label_pc_1720.preheader, %dec_label_pc_1714
  %storemerge24.reload = load i32, i32* %storemerge24.reg2mem
  %7 = sext i32 %storemerge24.reload to i64, !insn.addr !230
  %8 = add nsw i64 %24, %7, !insn.addr !231
  %9 = mul i64 %8, 4, !insn.addr !232
  %10 = add i64 %9, %6, !insn.addr !233
  %11 = inttoptr i64 %10 to i32*, !insn.addr !233
  %12 = load i32, i32* %11, align 4, !insn.addr !233
  %13 = icmp eq i32 %12, %target, !insn.addr !234
  br i1 %13, label %dec_label_pc_16f0, label %dec_label_pc_1714, !insn.addr !234

dec_label_pc_16f0:                                ; preds = %dec_label_pc_16c8
  %14 = mul i32 %.reload, 10, !insn.addr !235
  %15 = add i32 %storemerge24.reload, %14, !insn.addr !236
  store i32 %15, i32* %storemerge1.reg2mem, !insn.addr !237
  br label %dec_label_pc_1748, !insn.addr !237

dec_label_pc_1714:                                ; preds = %dec_label_pc_16c8
  %16 = add nuw i32 %storemerge24.reload, 1, !insn.addr !238
  %17 = icmp ult i32 %16, 4, !insn.addr !239
  store i32 %16, i32* %storemerge24.reg2mem, !insn.addr !239
  br i1 %17, label %dec_label_pc_16c8, label %dec_label_pc_172c, !insn.addr !239

dec_label_pc_172c:                                ; preds = %dec_label_pc_1714
  %18 = add i32 %.reload, 1, !insn.addr !240
  %19 = insertvalue [4 x i32] undef, i32 %18, 0, !insn.addr !241
  %20 = insertvalue [3 x [4 x i32]] undef, [4 x i32] %19, 0, !insn.addr !241
  store [3 x [4 x i32]] %20, [3 x [4 x i32]]* %matrix_-56, align 4
  %21 = load i32, i32* %3, align 4, !insn.addr !227
  %22 = icmp slt i32 %21, 3, !insn.addr !228
  store i32 %21, i32* %.reg2mem, !insn.addr !228
  store i32 -1, i32* %storemerge1.reg2mem, !insn.addr !228
  br i1 %22, label %dec_label_pc_1720.preheader, label %dec_label_pc_1748, !insn.addr !228

dec_label_pc_1720.preheader:                      ; preds = %dec_label_pc_1720.preheader.lr.ph, %dec_label_pc_172c
  %.reload = load i32, i32* %.reg2mem, !insn.addr !242
  %23 = sext i32 %.reload to i64, !insn.addr !243
  %24 = mul i64 %23, 4, !insn.addr !244
  store i32 0, i32* %storemerge24.reg2mem
  br label %dec_label_pc_16c8

dec_label_pc_1748:                                ; preds = %dec_label_pc_172c, %dec_label_pc_167c, %dec_label_pc_16f0
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %25 = load i64, i64* %1, align 8, !insn.addr !245
  %26 = icmp eq i64 %2, %25, !insn.addr !246
  br i1 %26, label %dec_label_pc_176c, label %dec_label_pc_1768, !insn.addr !247

dec_label_pc_1768:                                ; preds = %dec_label_pc_1748
  call void @__stack_chk_fail(), !insn.addr !248
  br label %dec_label_pc_176c, !insn.addr !248

dec_label_pc_176c:                                ; preds = %dec_label_pc_1768, %dec_label_pc_1748
  ret i32 %storemerge1.reload, !insn.addr !249

; uselistorder directives
  uselistorder i32 %.reload, { 0, 2, 1 }
  uselistorder i32 %storemerge24.reload, { 0, 2, 1 }
  uselistorder i32* %3, { 1, 0 }
  uselistorder [3 x [4 x i32]]* %matrix_-56, { 1, 2, 0 }
  uselistorder i32* %storemerge24.reg2mem, { 2, 1, 0 }
  uselistorder i32* %storemerge1.reg2mem, { 0, 1, 3, 2 }
  uselistorder [4 x i32] undef, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1748, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1720.preheader, { 1, 0 }
}

define i32 @infinite_loop(i32* %flag) local_unnamed_addr {
dec_label_pc_1778:
  %0 = alloca i64
  %count_-4.1.reg2mem = alloca i32, !insn.addr !250
  %count_-4.0.reg2mem = alloca i32, !insn.addr !250
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp eq i32 %2, 1, !insn.addr !251
  store i32 0, i32* %count_-4.0.reg2mem, !insn.addr !252
  br label %dec_label_pc_1784, !insn.addr !252

dec_label_pc_1784:                                ; preds = %dec_label_pc_1794, %dec_label_pc_1778
  store i32 0, i32* %count_-4.1.reg2mem, !insn.addr !253
  br i1 %3, label %dec_label_pc_17c0, label %dec_label_pc_1794, !insn.addr !253

dec_label_pc_1794:                                ; preds = %dec_label_pc_1784
  %count_-4.0.reload = load i32, i32* %count_-4.0.reg2mem
  %4 = add i32 %count_-4.0.reload, 1, !insn.addr !254
  %5 = icmp sgt i32 %4, ptrtoint (i1* @global_var_3e8 to i32), !insn.addr !255
  store i32 %4, i32* %count_-4.0.reg2mem, !insn.addr !255
  br i1 %5, label %dec_label_pc_17ac, label %dec_label_pc_1784, !insn.addr !255

dec_label_pc_17ac:                                ; preds = %dec_label_pc_1794
  store i32 1, i32* %flag, align 4, !insn.addr !256
  store i32 %4, i32* %count_-4.1.reg2mem, !insn.addr !257
  br label %dec_label_pc_17c0, !insn.addr !257

dec_label_pc_17c0:                                ; preds = %dec_label_pc_1784, %dec_label_pc_17ac
  %count_-4.1.reload = load i32, i32* %count_-4.1.reg2mem
  ret i32 %count_-4.1.reload, !insn.addr !258

; uselistorder directives
  uselistorder i32* %count_-4.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %count_-4.1.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_17c0, { 1, 0 }
}

define i32 @multi_return(i32 %x) local_unnamed_addr {
dec_label_pc_17cc:
  %x0.0.shrunk.reg2mem = alloca i32, !insn.addr !259
  %0 = icmp slt i32 %x, 0, !insn.addr !260
  store i32 -1, i32* %x0.0.shrunk.reg2mem, !insn.addr !261
  br i1 %0, label %dec_label_pc_1828, label %dec_label_pc_17e8, !insn.addr !261

dec_label_pc_17e8:                                ; preds = %dec_label_pc_17cc
  %1 = mul i32 %x, 2, !insn.addr !262
  %2 = icmp slt i32 %1, 101, !insn.addr !263
  store i32 -2, i32* %x0.0.shrunk.reg2mem, !insn.addr !263
  br i1 %2, label %dec_label_pc_1808, label %dec_label_pc_1828, !insn.addr !263

dec_label_pc_1808:                                ; preds = %dec_label_pc_17e8
  %3 = urem i32 %x, 2, !insn.addr !264
  %4 = icmp eq i32 %3, 0, !insn.addr !265
  %5 = add i32 %x, 1
  %spec.select = select i1 %4, i32 %1, i32 %5
  ret i32 %spec.select

dec_label_pc_1828:                                ; preds = %dec_label_pc_17e8, %dec_label_pc_17cc
  %x0.0.shrunk.reload = load i32, i32* %x0.0.shrunk.reg2mem
  ret i32 %x0.0.shrunk.reload, !insn.addr !266

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32 %x, { 2, 1, 0, 3 }
}

define i32 @conditional_return(i32 %x) local_unnamed_addr {
dec_label_pc_1830:
  %0 = icmp slt i32 %x, 1, !insn.addr !267
  br i1 %0, label %dec_label_pc_1850, label %dec_label_pc_1844, !insn.addr !267

dec_label_pc_1844:                                ; preds = %dec_label_pc_1830
  %1 = mul i32 %x, 2, !insn.addr !268
  ret i32 %1, !insn.addr !269

dec_label_pc_1850:                                ; preds = %dec_label_pc_1830
  %2 = sub i32 0, %x
  ret i32 %2

; uselistorder directives
  uselistorder i32 %x, { 1, 0, 2 }
}

define i32 @duffs_device(i32* %dst, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1874:
  %storemerge.reg2mem = alloca i32, !insn.addr !270
  %count_-4.7.reg2mem = alloca i32, !insn.addr !270
  %stack_var_-32.7.reg2mem = alloca i32*, !insn.addr !270
  %stack_var_-24.7.reg2mem = alloca i32*, !insn.addr !270
  %count_-4.6.reg2mem = alloca i32, !insn.addr !270
  %stack_var_-32.6.reg2mem = alloca i32*, !insn.addr !270
  %stack_var_-24.6.reg2mem = alloca i32*, !insn.addr !270
  %count_-4.5.reg2mem = alloca i32, !insn.addr !270
  %stack_var_-32.5.reg2mem = alloca i32*, !insn.addr !270
  %stack_var_-24.5.reg2mem = alloca i32*, !insn.addr !270
  %count_-4.4.reg2mem = alloca i32, !insn.addr !270
  %stack_var_-32.4.reg2mem = alloca i32*, !insn.addr !270
  %stack_var_-24.4.reg2mem = alloca i32*, !insn.addr !270
  %count_-4.3.reg2mem = alloca i32, !insn.addr !270
  %stack_var_-32.3.reg2mem = alloca i32*, !insn.addr !270
  %stack_var_-24.3.reg2mem = alloca i32*, !insn.addr !270
  %count_-4.2.reg2mem = alloca i32, !insn.addr !270
  %stack_var_-32.2.reg2mem = alloca i32*, !insn.addr !270
  %stack_var_-24.2.reg2mem = alloca i32*, !insn.addr !270
  %count_-4.1.reg2mem = alloca i32, !insn.addr !270
  %stack_var_-32.1.reg2mem = alloca i32*, !insn.addr !270
  %stack_var_-24.1.reg2mem = alloca i32*, !insn.addr !270
  %count_-4.0.reg2mem = alloca i32, !insn.addr !270
  %stack_var_-32.0.reg2mem = alloca i32*, !insn.addr !270
  %stack_var_-24.0.reg2mem = alloca i32*, !insn.addr !270
  %0 = icmp sgt i32 %n, 0, !insn.addr !271
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !271
  br i1 %0, label %dec_label_pc_1898, label %dec_label_pc_1a5c, !insn.addr !271

dec_label_pc_1898:                                ; preds = %dec_label_pc_1874
  %1 = sdiv i32 %n, 16384, !insn.addr !272
  %2 = sub i32 0, %n, !insn.addr !273
  %3 = icmp slt i32 %2, 0, !insn.addr !273
  %4 = urem i32 %n, 8
  %5 = urem i32 %2, 8
  %6 = sub nsw i32 0, %5
  %storemerge3.in = select i1 %3, i32 %4, i32 %6
  store i32* %dst, i32** %stack_var_-24.0.reg2mem
  store i32* %src, i32** %stack_var_-32.0.reg2mem
  store i32 %1, i32* %count_-4.0.reg2mem
  store i32* %dst, i32** %stack_var_-24.1.reg2mem
  store i32* %src, i32** %stack_var_-32.1.reg2mem
  store i32 %1, i32* %count_-4.1.reg2mem
  store i32* %dst, i32** %stack_var_-24.2.reg2mem
  store i32* %src, i32** %stack_var_-32.2.reg2mem
  store i32 %1, i32* %count_-4.2.reg2mem
  store i32* %dst, i32** %stack_var_-24.3.reg2mem
  store i32* %src, i32** %stack_var_-32.3.reg2mem
  store i32 %1, i32* %count_-4.3.reg2mem
  store i32* %dst, i32** %stack_var_-24.4.reg2mem
  store i32* %src, i32** %stack_var_-32.4.reg2mem
  store i32 %1, i32* %count_-4.4.reg2mem
  store i32* %dst, i32** %stack_var_-24.5.reg2mem
  store i32* %src, i32** %stack_var_-32.5.reg2mem
  store i32 %1, i32* %count_-4.5.reg2mem
  store i32* %dst, i32** %stack_var_-24.6.reg2mem
  store i32* %src, i32** %stack_var_-32.6.reg2mem
  store i32 %1, i32* %count_-4.6.reg2mem
  store i32* %dst, i32** %stack_var_-24.7.reg2mem
  store i32* %src, i32** %stack_var_-32.7.reg2mem
  store i32 %1, i32* %count_-4.7.reg2mem
  store i32 %n, i32* %storemerge.reg2mem
  switch i32 %storemerge3.in, label %dec_label_pc_1a5c [
    i32 7, label %dec_label_pc_1960
    i32 6, label %dec_label_pc_1980
    i32 5, label %dec_label_pc_19a0
    i32 4, label %dec_label_pc_19c0
    i32 3, label %dec_label_pc_19e0
    i32 2, label %dec_label_pc_1a00
    i32 0, label %dec_label_pc_1940
    i32 1, label %dec_label_pc_1a20
  ]

dec_label_pc_1940:                                ; preds = %dec_label_pc_1898, %dec_label_pc_1a20
  %count_-4.0.reload = load i32, i32* %count_-4.0.reg2mem
  %stack_var_-32.0.reload = load i32*, i32** %stack_var_-32.0.reg2mem
  %stack_var_-24.0.reload = load i32*, i32** %stack_var_-24.0.reg2mem
  %7 = ptrtoint i32* %stack_var_-32.0.reload to i64, !insn.addr !274
  %8 = add i64 %7, 4, !insn.addr !275
  %9 = inttoptr i64 %8 to i32*, !insn.addr !276
  %10 = ptrtoint i32* %stack_var_-24.0.reload to i64, !insn.addr !277
  %11 = add i64 %10, 4, !insn.addr !278
  %12 = inttoptr i64 %11 to i32*, !insn.addr !279
  %13 = load i32, i32* %stack_var_-32.0.reload, align 4, !insn.addr !280
  store i32 %13, i32* %stack_var_-24.0.reload, align 4, !insn.addr !281
  store i32* %12, i32** %stack_var_-24.1.reg2mem, !insn.addr !281
  store i32* %9, i32** %stack_var_-32.1.reg2mem, !insn.addr !281
  store i32 %count_-4.0.reload, i32* %count_-4.1.reg2mem, !insn.addr !281
  br label %dec_label_pc_1960, !insn.addr !281

dec_label_pc_1960:                                ; preds = %dec_label_pc_1898, %dec_label_pc_1940
  %count_-4.1.reload = load i32, i32* %count_-4.1.reg2mem
  %stack_var_-32.1.reload = load i32*, i32** %stack_var_-32.1.reg2mem
  %stack_var_-24.1.reload = load i32*, i32** %stack_var_-24.1.reg2mem
  %14 = ptrtoint i32* %stack_var_-32.1.reload to i64, !insn.addr !282
  %15 = add i64 %14, 4, !insn.addr !283
  %16 = inttoptr i64 %15 to i32*, !insn.addr !284
  %17 = ptrtoint i32* %stack_var_-24.1.reload to i64, !insn.addr !285
  %18 = add i64 %17, 4, !insn.addr !286
  %19 = inttoptr i64 %18 to i32*, !insn.addr !287
  %20 = load i32, i32* %stack_var_-32.1.reload, align 4, !insn.addr !288
  store i32 %20, i32* %stack_var_-24.1.reload, align 4, !insn.addr !289
  store i32* %19, i32** %stack_var_-24.2.reg2mem, !insn.addr !289
  store i32* %16, i32** %stack_var_-32.2.reg2mem, !insn.addr !289
  store i32 %count_-4.1.reload, i32* %count_-4.2.reg2mem, !insn.addr !289
  br label %dec_label_pc_1980, !insn.addr !289

dec_label_pc_1980:                                ; preds = %dec_label_pc_1898, %dec_label_pc_1960
  %count_-4.2.reload = load i32, i32* %count_-4.2.reg2mem
  %stack_var_-32.2.reload = load i32*, i32** %stack_var_-32.2.reg2mem
  %stack_var_-24.2.reload = load i32*, i32** %stack_var_-24.2.reg2mem
  %21 = ptrtoint i32* %stack_var_-32.2.reload to i64, !insn.addr !290
  %22 = add i64 %21, 4, !insn.addr !291
  %23 = inttoptr i64 %22 to i32*, !insn.addr !292
  %24 = ptrtoint i32* %stack_var_-24.2.reload to i64, !insn.addr !293
  %25 = add i64 %24, 4, !insn.addr !294
  %26 = inttoptr i64 %25 to i32*, !insn.addr !295
  %27 = load i32, i32* %stack_var_-32.2.reload, align 4, !insn.addr !296
  store i32 %27, i32* %stack_var_-24.2.reload, align 4, !insn.addr !297
  store i32* %26, i32** %stack_var_-24.3.reg2mem, !insn.addr !297
  store i32* %23, i32** %stack_var_-32.3.reg2mem, !insn.addr !297
  store i32 %count_-4.2.reload, i32* %count_-4.3.reg2mem, !insn.addr !297
  br label %dec_label_pc_19a0, !insn.addr !297

dec_label_pc_19a0:                                ; preds = %dec_label_pc_1898, %dec_label_pc_1980
  %count_-4.3.reload = load i32, i32* %count_-4.3.reg2mem
  %stack_var_-32.3.reload = load i32*, i32** %stack_var_-32.3.reg2mem
  %stack_var_-24.3.reload = load i32*, i32** %stack_var_-24.3.reg2mem
  %28 = ptrtoint i32* %stack_var_-32.3.reload to i64, !insn.addr !298
  %29 = add i64 %28, 4, !insn.addr !299
  %30 = inttoptr i64 %29 to i32*, !insn.addr !300
  %31 = ptrtoint i32* %stack_var_-24.3.reload to i64, !insn.addr !301
  %32 = add i64 %31, 4, !insn.addr !302
  %33 = inttoptr i64 %32 to i32*, !insn.addr !303
  %34 = load i32, i32* %stack_var_-32.3.reload, align 4, !insn.addr !304
  store i32 %34, i32* %stack_var_-24.3.reload, align 4, !insn.addr !305
  store i32* %33, i32** %stack_var_-24.4.reg2mem, !insn.addr !305
  store i32* %30, i32** %stack_var_-32.4.reg2mem, !insn.addr !305
  store i32 %count_-4.3.reload, i32* %count_-4.4.reg2mem, !insn.addr !305
  br label %dec_label_pc_19c0, !insn.addr !305

dec_label_pc_19c0:                                ; preds = %dec_label_pc_1898, %dec_label_pc_19a0
  %count_-4.4.reload = load i32, i32* %count_-4.4.reg2mem
  %stack_var_-32.4.reload = load i32*, i32** %stack_var_-32.4.reg2mem
  %stack_var_-24.4.reload = load i32*, i32** %stack_var_-24.4.reg2mem
  %35 = ptrtoint i32* %stack_var_-32.4.reload to i64, !insn.addr !306
  %36 = add i64 %35, 4, !insn.addr !307
  %37 = inttoptr i64 %36 to i32*, !insn.addr !308
  %38 = ptrtoint i32* %stack_var_-24.4.reload to i64, !insn.addr !309
  %39 = add i64 %38, 4, !insn.addr !310
  %40 = inttoptr i64 %39 to i32*, !insn.addr !311
  %41 = load i32, i32* %stack_var_-32.4.reload, align 4, !insn.addr !312
  store i32 %41, i32* %stack_var_-24.4.reload, align 4, !insn.addr !313
  store i32* %40, i32** %stack_var_-24.5.reg2mem, !insn.addr !313
  store i32* %37, i32** %stack_var_-32.5.reg2mem, !insn.addr !313
  store i32 %count_-4.4.reload, i32* %count_-4.5.reg2mem, !insn.addr !313
  br label %dec_label_pc_19e0, !insn.addr !313

dec_label_pc_19e0:                                ; preds = %dec_label_pc_1898, %dec_label_pc_19c0
  %count_-4.5.reload = load i32, i32* %count_-4.5.reg2mem
  %stack_var_-32.5.reload = load i32*, i32** %stack_var_-32.5.reg2mem
  %stack_var_-24.5.reload = load i32*, i32** %stack_var_-24.5.reg2mem
  %42 = ptrtoint i32* %stack_var_-32.5.reload to i64, !insn.addr !314
  %43 = add i64 %42, 4, !insn.addr !315
  %44 = inttoptr i64 %43 to i32*, !insn.addr !316
  %45 = ptrtoint i32* %stack_var_-24.5.reload to i64, !insn.addr !317
  %46 = add i64 %45, 4, !insn.addr !318
  %47 = inttoptr i64 %46 to i32*, !insn.addr !319
  %48 = load i32, i32* %stack_var_-32.5.reload, align 4, !insn.addr !320
  store i32 %48, i32* %stack_var_-24.5.reload, align 4, !insn.addr !321
  store i32* %47, i32** %stack_var_-24.6.reg2mem, !insn.addr !321
  store i32* %44, i32** %stack_var_-32.6.reg2mem, !insn.addr !321
  store i32 %count_-4.5.reload, i32* %count_-4.6.reg2mem, !insn.addr !321
  br label %dec_label_pc_1a00, !insn.addr !321

dec_label_pc_1a00:                                ; preds = %dec_label_pc_1898, %dec_label_pc_19e0
  %count_-4.6.reload = load i32, i32* %count_-4.6.reg2mem
  %stack_var_-32.6.reload = load i32*, i32** %stack_var_-32.6.reg2mem
  %stack_var_-24.6.reload = load i32*, i32** %stack_var_-24.6.reg2mem
  %49 = ptrtoint i32* %stack_var_-32.6.reload to i64, !insn.addr !322
  %50 = add i64 %49, 4, !insn.addr !323
  %51 = inttoptr i64 %50 to i32*, !insn.addr !324
  %52 = ptrtoint i32* %stack_var_-24.6.reload to i64, !insn.addr !325
  %53 = add i64 %52, 4, !insn.addr !326
  %54 = inttoptr i64 %53 to i32*, !insn.addr !327
  %55 = load i32, i32* %stack_var_-32.6.reload, align 4, !insn.addr !328
  store i32 %55, i32* %stack_var_-24.6.reload, align 4, !insn.addr !329
  store i32* %54, i32** %stack_var_-24.7.reg2mem, !insn.addr !329
  store i32* %51, i32** %stack_var_-32.7.reg2mem, !insn.addr !329
  store i32 %count_-4.6.reload, i32* %count_-4.7.reg2mem, !insn.addr !329
  br label %dec_label_pc_1a20, !insn.addr !329

dec_label_pc_1a20:                                ; preds = %dec_label_pc_1898, %dec_label_pc_1a00
  %count_-4.7.reload = load i32, i32* %count_-4.7.reg2mem
  %stack_var_-32.7.reload = load i32*, i32** %stack_var_-32.7.reg2mem
  %stack_var_-24.7.reload = load i32*, i32** %stack_var_-24.7.reg2mem
  %56 = ptrtoint i32* %stack_var_-32.7.reload to i64, !insn.addr !330
  %57 = add i64 %56, 4, !insn.addr !331
  %58 = inttoptr i64 %57 to i32*, !insn.addr !332
  %59 = ptrtoint i32* %stack_var_-24.7.reload to i64, !insn.addr !333
  %60 = add i64 %59, 4, !insn.addr !334
  %61 = inttoptr i64 %60 to i32*, !insn.addr !335
  %62 = load i32, i32* %stack_var_-32.7.reload, align 4, !insn.addr !336
  store i32 %62, i32* %stack_var_-24.7.reload, align 4, !insn.addr !337
  %63 = add i32 %count_-4.7.reload, -1, !insn.addr !338
  %64 = icmp sgt i32 %63, 0, !insn.addr !339
  store i32* %61, i32** %stack_var_-24.0.reg2mem, !insn.addr !339
  store i32* %58, i32** %stack_var_-32.0.reg2mem, !insn.addr !339
  store i32 %63, i32* %count_-4.0.reg2mem, !insn.addr !339
  store i32 %n, i32* %storemerge.reg2mem, !insn.addr !339
  br i1 %64, label %dec_label_pc_1940, label %dec_label_pc_1a5c, !insn.addr !339

dec_label_pc_1a5c:                                ; preds = %dec_label_pc_1898, %dec_label_pc_1a20, %dec_label_pc_1874
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !340

; uselistorder directives
  uselistorder i32** %stack_var_-24.0.reg2mem, { 2, 0, 1 }
  uselistorder i32** %stack_var_-32.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %count_-4.0.reg2mem, { 2, 0, 1 }
  uselistorder i32** %stack_var_-24.2.reg2mem, { 0, 2, 1 }
  uselistorder i32** %stack_var_-32.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %count_-4.2.reg2mem, { 0, 2, 1 }
  uselistorder i32** %stack_var_-24.3.reg2mem, { 0, 2, 1 }
  uselistorder i32** %stack_var_-32.3.reg2mem, { 0, 2, 1 }
  uselistorder i32* %count_-4.3.reg2mem, { 0, 2, 1 }
  uselistorder i32** %stack_var_-24.4.reg2mem, { 0, 2, 1 }
  uselistorder i32** %stack_var_-32.4.reg2mem, { 0, 2, 1 }
  uselistorder i32* %count_-4.4.reg2mem, { 0, 2, 1 }
  uselistorder i32** %stack_var_-24.5.reg2mem, { 0, 2, 1 }
  uselistorder i32** %stack_var_-32.5.reg2mem, { 0, 2, 1 }
  uselistorder i32* %count_-4.5.reg2mem, { 0, 2, 1 }
  uselistorder i32** %stack_var_-24.6.reg2mem, { 0, 2, 1 }
  uselistorder i32** %stack_var_-32.6.reg2mem, { 0, 2, 1 }
  uselistorder i32* %count_-4.6.reg2mem, { 0, 2, 1 }
  uselistorder i32** %stack_var_-24.7.reg2mem, { 0, 2, 1 }
  uselistorder i32** %stack_var_-32.7.reg2mem, { 0, 2, 1 }
  uselistorder i32* %count_-4.7.reg2mem, { 0, 2, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1, 3 }
  uselistorder i64 4, { 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 0, 1, 2 }
  uselistorder i32 %n, { 1, 0, 2, 4, 3, 5 }
  uselistorder label %dec_label_pc_1a5c, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1a20, { 1, 0 }
  uselistorder label %dec_label_pc_1a00, { 1, 0 }
  uselistorder label %dec_label_pc_19e0, { 1, 0 }
  uselistorder label %dec_label_pc_19c0, { 1, 0 }
  uselistorder label %dec_label_pc_19a0, { 1, 0 }
  uselistorder label %dec_label_pc_1980, { 1, 0 }
  uselistorder label %dec_label_pc_1960, { 1, 0 }
  uselistorder label %dec_label_pc_1940, { 1, 0 }
}

define i32 @loop_complex_cond(i32 %x) local_unnamed_addr {
dec_label_pc_1a64:
  %storemerge.lcssa.reg2mem = alloca i32, !insn.addr !341
  %b_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !341
  %a_-12.0.lcssa.reg2mem = alloca i32, !insn.addr !341
  %a_-12.05.reg2mem = alloca i32, !insn.addr !341
  %b_-8.06.reg2mem = alloca i32, !insn.addr !341
  %storemerge7.reg2mem = alloca i32, !insn.addr !341
  %0 = icmp sgt i32 %x, 0, !insn.addr !342
  store i32 0, i32* %storemerge7.reg2mem, !insn.addr !343
  store i32 %x, i32* %b_-8.06.reg2mem, !insn.addr !343
  store i32 0, i32* %a_-12.05.reg2mem, !insn.addr !343
  store i32 0, i32* %a_-12.0.lcssa.reg2mem, !insn.addr !343
  store i32 %x, i32* %b_-8.0.lcssa.reg2mem, !insn.addr !343
  store i32 0, i32* %storemerge.lcssa.reg2mem, !insn.addr !343
  br i1 %0, label %dec_label_pc_1a80, label %dec_label_pc_1acc, !insn.addr !343

dec_label_pc_1a80:                                ; preds = %dec_label_pc_1a64, %dec_label_pc_1a80
  %a_-12.05.reload = load i32, i32* %a_-12.05.reg2mem
  %b_-8.06.reload = load i32, i32* %b_-8.06.reg2mem
  %storemerge7.reload = load i32, i32* %storemerge7.reg2mem
  %1 = add nuw nsw i32 %a_-12.05.reload, 2, !insn.addr !344
  %2 = add nsw i32 %b_-8.06.reload, -1, !insn.addr !345
  %3 = add nuw nsw i32 %storemerge7.reload, 1, !insn.addr !346
  %4 = icmp ult i32 %1, %2, !insn.addr !343
  %5 = icmp ult i32 %3, 10, !insn.addr !347
  %or.cond.not = icmp eq i1 %5, %4
  %6 = icmp sgt i32 %2, 0, !insn.addr !342
  %or.cond3 = icmp eq i1 %6, %or.cond.not
  store i32 %3, i32* %storemerge7.reg2mem, !insn.addr !343
  store i32 %2, i32* %b_-8.06.reg2mem, !insn.addr !343
  store i32 %1, i32* %a_-12.05.reg2mem, !insn.addr !343
  store i32 %1, i32* %a_-12.0.lcssa.reg2mem, !insn.addr !343
  store i32 %2, i32* %b_-8.0.lcssa.reg2mem, !insn.addr !343
  store i32 %3, i32* %storemerge.lcssa.reg2mem, !insn.addr !343
  br i1 %or.cond3, label %dec_label_pc_1a80, label %dec_label_pc_1acc, !insn.addr !343

dec_label_pc_1acc:                                ; preds = %dec_label_pc_1a80, %dec_label_pc_1a64
  %storemerge.lcssa.reload = load i32, i32* %storemerge.lcssa.reg2mem
  %b_-8.0.lcssa.reload = load i32, i32* %b_-8.0.lcssa.reg2mem
  %a_-12.0.lcssa.reload = load i32, i32* %a_-12.0.lcssa.reg2mem
  %7 = add i32 %b_-8.0.lcssa.reload, %a_-12.0.lcssa.reload, !insn.addr !348
  %8 = add i32 %7, %storemerge.lcssa.reload, !insn.addr !349
  ret i32 %8, !insn.addr !350

; uselistorder directives
  uselistorder i32* %storemerge7.reg2mem, { 2, 0, 1 }
  uselistorder i32* %b_-8.06.reg2mem, { 2, 0, 1 }
  uselistorder i32* %a_-12.05.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1a80, { 1, 0 }
}

define i32 @loop_modify_var(i32 %n) local_unnamed_addr {
dec_label_pc_1ae8:
  %sum_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !351
  %sum_-8.01.reg2mem = alloca i32, !insn.addr !351
  %storemerge2.reg2mem = alloca i32, !insn.addr !351
  %0 = icmp eq i32 %n, 0, !insn.addr !352
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !352
  store i32 0, i32* %sum_-8.01.reg2mem, !insn.addr !352
  store i32 0, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !352
  br i1 %0, label %dec_label_pc_1b40, label %dec_label_pc_1afc, !insn.addr !352

dec_label_pc_1afc:                                ; preds = %dec_label_pc_1ae8, %dec_label_pc_1afc
  %sum_-8.01.reload = load i32, i32* %sum_-8.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %1 = add i32 %sum_-8.01.reload, %storemerge2.reload, !insn.addr !353
  %2 = icmp slt i32 %storemerge2.reload, 6, !insn.addr !354
  %3 = add i32 %storemerge2.reload, 2
  %spec.select = select i1 %2, i32 %storemerge2.reload, i32 %3
  %4 = add i32 %spec.select, 1, !insn.addr !355
  %5 = icmp ult i32 %4, %n, !insn.addr !352
  store i32 %4, i32* %storemerge2.reg2mem, !insn.addr !352
  store i32 %1, i32* %sum_-8.01.reg2mem, !insn.addr !352
  store i32 %1, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !352
  br i1 %5, label %dec_label_pc_1afc, label %dec_label_pc_1b40, !insn.addr !352

dec_label_pc_1b40:                                ; preds = %dec_label_pc_1afc, %dec_label_pc_1ae8
  %sum_-8.0.lcssa.reload = load i32, i32* %sum_-8.0.lcssa.reg2mem
  ret i32 %sum_-8.0.lcssa.reload, !insn.addr !356

; uselistorder directives
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sum_-8.01.reg2mem, { 2, 0, 1 }
  uselistorder i32 6, { 2, 0, 1 }
  uselistorder i32 %n, { 1, 0 }
  uselistorder label %dec_label_pc_1afc, { 1, 0 }
}

define i32 @loop_external_state(i32* %flag) local_unnamed_addr {
dec_label_pc_1b4c:
  %0 = alloca i64
  %count_-4.1.reg2mem = alloca i32, !insn.addr !357
  %count_-4.0.reg2mem = alloca i32, !insn.addr !357
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp eq i32 %2, 0, !insn.addr !358
  store i32 0, i32* %count_-4.0.reg2mem, !insn.addr !359
  br label %dec_label_pc_1b74, !insn.addr !359

dec_label_pc_1b5c:                                ; preds = %dec_label_pc_1b74
  %count_-4.0.reload = load i32, i32* %count_-4.0.reg2mem
  %4 = add nuw nsw i32 %count_-4.0.reload, 1, !insn.addr !360
  %5 = icmp ugt i32 %count_-4.0.reload, 99, !insn.addr !361
  store i32 %4, i32* %count_-4.0.reg2mem, !insn.addr !361
  store i32 101, i32* %count_-4.1.reg2mem, !insn.addr !361
  br i1 %5, label %dec_label_pc_1b8c, label %dec_label_pc_1b74, !insn.addr !361

dec_label_pc_1b74:                                ; preds = %dec_label_pc_1b5c, %dec_label_pc_1b4c
  store i32 0, i32* %count_-4.1.reg2mem, !insn.addr !362
  br i1 %3, label %dec_label_pc_1b5c, label %dec_label_pc_1b8c, !insn.addr !362

dec_label_pc_1b8c:                                ; preds = %dec_label_pc_1b5c, %dec_label_pc_1b74
  %count_-4.1.reload = load i32, i32* %count_-4.1.reg2mem
  ret i32 %count_-4.1.reload, !insn.addr !363

; uselistorder directives
  uselistorder i32 %count_-4.0.reload, { 1, 0 }
  uselistorder i32* %count_-4.0.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1b8c, { 1, 0 }
}

define i32 @recursion_factorial(i32 %n) local_unnamed_addr {
dec_label_pc_1b98:
  %storemerge.reg2mem = alloca i32, !insn.addr !364
  %0 = icmp sgt i32 %n, 1, !insn.addr !365
  store i32 1, i32* %storemerge.reg2mem, !insn.addr !365
  br i1 %0, label %dec_label_pc_1bb8, label %dec_label_pc_1bd0, !insn.addr !365

dec_label_pc_1bb8:                                ; preds = %dec_label_pc_1b98
  %1 = add i32 %n, -1, !insn.addr !366
  %2 = call i32 @recursion_factorial(i32 %1), !insn.addr !367
  %3 = mul i32 %2, %n, !insn.addr !368
  store i32 %3, i32* %storemerge.reg2mem, !insn.addr !368
  br label %dec_label_pc_1bd0, !insn.addr !368

dec_label_pc_1bd0:                                ; preds = %dec_label_pc_1b98, %dec_label_pc_1bb8
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !369

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1bd0, { 1, 0 }
}

define i32 @tail_recursion(i32 %n, i32 %acc) local_unnamed_addr {
dec_label_pc_1bd8:
  %storemerge.reg2mem = alloca i32, !insn.addr !370
  %0 = icmp sgt i32 %n, 1, !insn.addr !371
  store i32 %acc, i32* %storemerge.reg2mem, !insn.addr !371
  br i1 %0, label %dec_label_pc_1bfc, label %dec_label_pc_1c1c, !insn.addr !371

dec_label_pc_1bfc:                                ; preds = %dec_label_pc_1bd8
  %1 = add i32 %n, -1, !insn.addr !372
  %2 = mul i32 %acc, %n, !insn.addr !373
  %3 = call i32 @tail_recursion(i32 %1, i32 %2), !insn.addr !374
  store i32 %3, i32* %storemerge.reg2mem, !insn.addr !374
  br label %dec_label_pc_1c1c, !insn.addr !374

dec_label_pc_1c1c:                                ; preds = %dec_label_pc_1bd8, %dec_label_pc_1bfc
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !375

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %acc, { 1, 0 }
  uselistorder label %dec_label_pc_1c1c, { 1, 0 }
}

define i32 @indirect_recursion_a(i32 %n, i32 %depth) local_unnamed_addr {
dec_label_pc_1c24:
  %x0.0.reg2mem = alloca i32, !insn.addr !376
  %0 = icmp sgt i32 %depth, 0, !insn.addr !377
  store i32 %n, i32* %x0.0.reg2mem, !insn.addr !377
  br i1 %0, label %dec_label_pc_1c48, label %dec_label_pc_1cac, !insn.addr !377

dec_label_pc_1c48:                                ; preds = %dec_label_pc_1c24
  %1 = urem i32 %n, 2, !insn.addr !378
  %2 = icmp eq i32 %1, 0, !insn.addr !379
  br i1 %2, label %dec_label_pc_1c58, label %dec_label_pc_1c84, !insn.addr !380

dec_label_pc_1c58:                                ; preds = %dec_label_pc_1c48
  %3 = icmp slt i32 %n, 0
  %4 = zext i1 %3 to i32, !insn.addr !381
  %5 = add i32 %4, %n, !insn.addr !382
  %6 = ashr i32 %5, 1, !insn.addr !383
  %7 = add i32 %depth, -1, !insn.addr !384
  %8 = call i32 @indirect_recursion_b(i32 %6, i32 %7), !insn.addr !385
  store i32 %8, i32* %x0.0.reg2mem, !insn.addr !386
  br label %dec_label_pc_1cac, !insn.addr !386

dec_label_pc_1c84:                                ; preds = %dec_label_pc_1c48
  %9 = mul i32 %n, 3, !insn.addr !387
  %10 = add i32 %9, 1, !insn.addr !388
  %11 = add i32 %depth, -1, !insn.addr !389
  %12 = call i32 @indirect_recursion_b(i32 %10, i32 %11), !insn.addr !390
  store i32 %12, i32* %x0.0.reg2mem, !insn.addr !390
  br label %dec_label_pc_1cac, !insn.addr !390

dec_label_pc_1cac:                                ; preds = %dec_label_pc_1c24, %dec_label_pc_1c84, %dec_label_pc_1c58
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !391

; uselistorder directives
  uselistorder i32* %x0.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32 (i32, i32)* @indirect_recursion_b, { 1, 0 }
  uselistorder i32 %n, { 4, 3, 1, 2, 0 }
  uselistorder label %dec_label_pc_1cac, { 1, 2, 0 }
}

define i32 @indirect_recursion_b(i32 %n, i32 %depth) local_unnamed_addr {
dec_label_pc_1cb4:
  %storemerge.reg2mem = alloca i32, !insn.addr !392
  %0 = icmp sgt i32 %depth, 0, !insn.addr !393
  store i32 %n, i32* %storemerge.reg2mem, !insn.addr !393
  br i1 %0, label %dec_label_pc_1cd8, label %dec_label_pc_1cf4, !insn.addr !393

dec_label_pc_1cd8:                                ; preds = %dec_label_pc_1cb4
  %1 = add i32 %n, 1, !insn.addr !394
  %2 = add i32 %depth, -1, !insn.addr !395
  %3 = call i32 @indirect_recursion_a(i32 %1, i32 %2), !insn.addr !396
  store i32 %3, i32* %storemerge.reg2mem, !insn.addr !396
  br label %dec_label_pc_1cf4, !insn.addr !396

dec_label_pc_1cf4:                                ; preds = %dec_label_pc_1cb4, %dec_label_pc_1cd8
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !397

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %n, { 1, 0 }
  uselistorder label %dec_label_pc_1cf4, { 1, 0 }
}

define i32 @call_func_ptr(i32 (i32)* %f, i32 %x) local_unnamed_addr {
dec_label_pc_1cfc:
  ret i32 %x, !insn.addr !398
}

define i64 @function_1d18(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1d18:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !399
}

define i32 @double_value(i32 %x) local_unnamed_addr {
dec_label_pc_1d20:
  %0 = mul i32 %x, 2, !insn.addr !400
  ret i32 %0, !insn.addr !401
}

define i32 @triple_value(i32 %x) local_unnamed_addr {
dec_label_pc_1d38:
  %0 = mul i32 %x, 3, !insn.addr !402
  ret i32 %0, !insn.addr !403
}

define i32 @call_func_ptr_array(i32 %idx, i32 %x) local_unnamed_addr {
dec_label_pc_1d58:
  %funcs_-32 = alloca [3 x i32 (i32)*], align 8
  %0 = zext i32 %x to i64
  %1 = inttoptr i64 %0 to i32 (i32)*, !insn.addr !404
  %2 = insertvalue [3 x i32 (i32)*] undef, i32 (i32)* %1, 0, !insn.addr !404
  store [3 x i32 (i32)*] %2, [3 x i32 (i32)*]* %funcs_-32, align 8, !insn.addr !404
  %3 = icmp ult i32 %idx, 3
  br i1 %3, label %dec_label_pc_1dbc, label %dec_label_pc_1df8, !insn.addr !405

dec_label_pc_1dbc:                                ; preds = %dec_label_pc_1d58
  %4 = bitcast [3 x i32 (i32)*]* %funcs_-32 to i32*, !insn.addr !406
  %5 = load i32, i32* %4, align 8, !insn.addr !406
  ret i32 %5, !insn.addr !407

dec_label_pc_1df8:                                ; preds = %dec_label_pc_1d58
  ret i32 -1, !insn.addr !408
}

define i32 @call_virtual_func(i8* %obj, i32 %x) local_unnamed_addr {
dec_label_pc_1e04:
  %0 = mul i32 %x, 2, !insn.addr !409
  ret i32 %0, !insn.addr !410
}

define i32 @process_with_callback(i32* %arr, i32 %n, i32 (i32)* %cb) local_unnamed_addr {
dec_label_pc_1e20:
  %0 = icmp eq i32 %n, 0, !insn.addr !411
  br i1 %0, label %dec_label_pc_1e88, label %dec_label_pc_1e40, !insn.addr !411

dec_label_pc_1e40:                                ; preds = %dec_label_pc_1e20
  %1 = load i32, i32* %arr, align 4, !insn.addr !412
  ret i32 %1, !insn.addr !413

dec_label_pc_1e88:                                ; preds = %dec_label_pc_1e20
  ret i32 0, !insn.addr !414
}

define void @test_control_flow_l2() local_unnamed_addr {
dec_label_pc_1e94:
  %stack_var_-88 = alloca i64, align 8
  %stack_var_-92 = alloca i32, align 4
  %stack_var_-32 = alloca i64, align 8
  %stack_var_-64 = alloca i64, align 8
  %arr_-96 = alloca [5 x i32], align 4
  %0 = load i64, i64* @global_var_13fe8, align 8, !insn.addr !415
  %1 = inttoptr i64 %0 to i64*, !insn.addr !416
  %2 = load i64, i64* %1, align 8, !insn.addr !416
  %3 = call i32 @puts(i8* bitcast (i8** @global_var_2cc0 to i8*)), !insn.addr !417
  %4 = call i32 @loop_multi_exit(i32 7), !insn.addr !418
  %5 = zext i32 %4 to i64, !insn.addr !419
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_2ce8, i64 0, i64 0), i64 %5), !insn.addr !420
  store [5 x i32] [i32 0, i32 undef, i32 undef, i32 undef, i32 undef], [5 x i32]* %arr_-96, align 4, !insn.addr !421
  %7 = getelementptr inbounds [5 x i32], [5 x i32]* %arr_-96, i64 0, i64 0, !insn.addr !422
  %8 = call i32 @infinite_loop(i32* nonnull %7), !insn.addr !422
  %9 = zext i32 %8 to i64, !insn.addr !423
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2d08, i64 0, i64 0), i64 %9), !insn.addr !424
  %11 = call i32 @multi_return(i32 -5), !insn.addr !425
  %12 = zext i32 %11 to i64, !insn.addr !426
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2d28, i64 0, i64 0), i64 %12), !insn.addr !427
  %14 = call i32 @multi_return(i32 100), !insn.addr !428
  %15 = zext i32 %14 to i64, !insn.addr !429
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2d28, i64 0, i64 0), i64 %15), !insn.addr !430
  %17 = call i32 @multi_return(i32 3), !insn.addr !431
  %18 = zext i32 %17 to i64, !insn.addr !432
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2d28, i64 0, i64 0), i64 %18), !insn.addr !433
  %20 = call i32 @conditional_return(i32 5), !insn.addr !434
  %21 = zext i32 %20 to i64, !insn.addr !435
  %22 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_2d48, i64 0, i64 0), i64 %21), !insn.addr !436
  %23 = call i32 @conditional_return(i32 -5), !insn.addr !437
  %24 = zext i32 %23 to i64, !insn.addr !438
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_2d48, i64 0, i64 0), i64 %24), !insn.addr !439
  store i64 4294967298, i64* %stack_var_-64, align 8, !insn.addr !440
  store i64 0, i64* %stack_var_-32, align 8, !insn.addr !441
  %26 = bitcast i64* %stack_var_-32 to i32*, !insn.addr !442
  %27 = bitcast i64* %stack_var_-64 to i32*, !insn.addr !442
  %28 = call i32 @duffs_device(i32* nonnull %26, i32* nonnull %27, i32 8), !insn.addr !442
  %29 = zext i32 %28 to i64, !insn.addr !443
  %30 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2d70, i64 0, i64 0), i64 %29), !insn.addr !444
  %31 = call i32 @loop_complex_cond(i32 10), !insn.addr !445
  %32 = zext i32 %31 to i64, !insn.addr !446
  %33 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_2d90, i64 0, i64 0), i64 %32), !insn.addr !447
  %34 = call i32 @loop_modify_var(i32 10), !insn.addr !448
  %35 = zext i32 %34 to i64, !insn.addr !449
  %36 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_2db8, i64 0, i64 0), i64 %35), !insn.addr !450
  store i32 0, i32* %stack_var_-92, align 4, !insn.addr !451
  %37 = call i32 @loop_external_state(i32* nonnull %stack_var_-92), !insn.addr !452
  %38 = zext i32 %37 to i64, !insn.addr !453
  %39 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_2dd8, i64 0, i64 0), i64 %38), !insn.addr !454
  %40 = call i32 @recursion_factorial(i32 5), !insn.addr !455
  %41 = zext i32 %40 to i64, !insn.addr !456
  %42 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_2e00, i64 0, i64 0), i64 %41), !insn.addr !457
  %43 = call i32 @tail_recursion(i32 5, i32 1), !insn.addr !458
  %44 = zext i32 %43 to i64, !insn.addr !459
  %45 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_2e28, i64 0, i64 0), i64 %44), !insn.addr !460
  %46 = call i32 @indirect_recursion_a(i32 10, i32 3), !insn.addr !461
  %47 = zext i32 %46 to i64, !insn.addr !462
  %48 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_2e48, i64 0, i64 0), i64 %47), !insn.addr !463
  %49 = call i32 @call_func_ptr(i32 (i32)* inttoptr (i64 7456 to i32 (i32)*), i32 5), !insn.addr !464
  %50 = zext i32 %49 to i64, !insn.addr !465
  %51 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2e70, i64 0, i64 0), i64 %50), !insn.addr !466
  %52 = call i32 @call_func_ptr_array(i32 0, i32 5), !insn.addr !467
  %53 = zext i32 %52 to i64, !insn.addr !468
  %54 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_2e90, i64 0, i64 0), i64 %53), !insn.addr !469
  %55 = call i32 @call_func_ptr_array(i32 2, i32 5), !insn.addr !470
  %56 = zext i32 %55 to i64, !insn.addr !471
  %57 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_2e90, i64 0, i64 0), i64 %56), !insn.addr !472
  store i64 8589934593, i64* %stack_var_-88, align 8, !insn.addr !473
  %58 = bitcast i64* %stack_var_-88 to i32*, !insn.addr !474
  %59 = call i32 @process_with_callback(i32* nonnull %58, i32 5, i32 (i32)* inttoptr (i64 7456 to i32 (i32)*)), !insn.addr !474
  %60 = zext i32 %59 to i64, !insn.addr !475
  %61 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_2eb8, i64 0, i64 0), i64 %60), !insn.addr !476
  %62 = load i64, i64* @global_var_13fe8, align 8, !insn.addr !477
  %63 = inttoptr i64 %62 to i64*, !insn.addr !478
  %64 = load i64, i64* %63, align 8, !insn.addr !478
  %65 = icmp eq i64 %2, %64, !insn.addr !479
  br i1 %65, label %dec_label_pc_2104, label %dec_label_pc_2100, !insn.addr !480

dec_label_pc_2100:                                ; preds = %dec_label_pc_1e94
  call void @__stack_chk_fail(), !insn.addr !481
  br label %dec_label_pc_2104, !insn.addr !481

dec_label_pc_2104:                                ; preds = %dec_label_pc_2100, %dec_label_pc_1e94
  ret void, !insn.addr !482

; uselistorder directives
  uselistorder i32 (i32, i32)* @call_func_ptr_array, { 1, 0 }
  uselistorder i32 (i32, i32)* @indirect_recursion_a, { 1, 0 }
  uselistorder i32 (i32, i32)* @tail_recursion, { 1, 0 }
  uselistorder i32 (i32)* @recursion_factorial, { 1, 0 }
  uselistorder i32 8, { 3, 0, 1, 4, 2 }
  uselistorder i32 (i32)* @conditional_return, { 1, 0 }
  uselistorder i32 100, { 2, 1, 0 }
  uselistorder i32 (i32)* @multi_return, { 2, 1, 0 }
  uselistorder [5 x i32] [i32 0, i32 undef, i32 undef, i32 undef, i32 undef], { 1, 0 }
  uselistorder i32 7, { 2, 0, 3, 4, 1 }
}

define i32 @non_local_jump(i32 %x) local_unnamed_addr {
dec_label_pc_210c:
  %storemerge.reg2mem = alloca i32, !insn.addr !483
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @jump_buffer to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !484
  %1 = icmp eq i32 %0, 0, !insn.addr !485
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !486
  br i1 %1, label %dec_label_pc_212c, label %dec_label_pc_2174, !insn.addr !486

dec_label_pc_212c:                                ; preds = %dec_label_pc_210c
  %2 = icmp slt i32 %x, 0, !insn.addr !487
  br i1 %2, label %dec_label_pc_2138, label %dec_label_pc_2148, !insn.addr !488

dec_label_pc_2138:                                ; preds = %dec_label_pc_212c
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @jump_buffer to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 1), !insn.addr !489
  unreachable, !insn.addr !489

dec_label_pc_2148:                                ; preds = %dec_label_pc_212c
  %3 = icmp slt i32 %x, 101, !insn.addr !490
  br i1 %3, label %dec_label_pc_2164, label %dec_label_pc_2154, !insn.addr !490

dec_label_pc_2154:                                ; preds = %dec_label_pc_2148
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @jump_buffer to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 2), !insn.addr !491
  unreachable, !insn.addr !491

dec_label_pc_2164:                                ; preds = %dec_label_pc_2148
  %4 = mul i32 %x, 2, !insn.addr !492
  store i32 %4, i32* %storemerge.reg2mem, !insn.addr !493
  br label %dec_label_pc_2174, !insn.addr !493

dec_label_pc_2174:                                ; preds = %dec_label_pc_210c, %dec_label_pc_2164
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !494

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder void ([1 x %__jmp_buf_tag], i32)* @longjmp, { 1, 0, 2 }
  uselistorder i32 %x, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2174, { 1, 0 }
}

define i32 @cpp_exception(i32 %x) local_unnamed_addr {
dec_label_pc_217c:
  %0 = icmp slt i32 %x, 0, !insn.addr !495
  br i1 %0, label %dec_label_pc_21b4, label %dec_label_pc_2198, !insn.addr !496

dec_label_pc_2198:                                ; preds = %dec_label_pc_217c
  %1 = icmp slt i32 %x, 101, !insn.addr !497
  %2 = mul i32 %x, 2
  %spec.select = select i1 %1, i32 %2, i32 -2
  ret i32 %spec.select

dec_label_pc_21b4:                                ; preds = %dec_label_pc_217c
  ret i32 -1, !insn.addr !498

; uselistorder directives
  uselistorder i32 -2, { 2, 0, 1 }
  uselistorder i32 101, { 1, 2, 0, 3 }
}

define i32 @op_add(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_21bc:
  %0 = add i32 %b, %a, !insn.addr !499
  ret i32 %0, !insn.addr !500
}

define i32 @op_sub(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_21dc:
  %0 = sub i32 %a, %b, !insn.addr !501
  ret i32 %0, !insn.addr !502
}

define i32 @op_mul(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_21fc:
  %0 = mul i32 %b, %a, !insn.addr !503
  ret i32 %0, !insn.addr !504
}

define i32 @op_div(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_221c:
  %storemerge.reg2mem = alloca i32, !insn.addr !505
  %0 = icmp eq i32 %b, 0, !insn.addr !506
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !507
  br i1 %0, label %dec_label_pc_2248, label %dec_label_pc_2234, !insn.addr !507

dec_label_pc_2234:                                ; preds = %dec_label_pc_221c
  %1 = sdiv i32 %a, %b, !insn.addr !508
  store i32 %1, i32* %storemerge.reg2mem, !insn.addr !509
  br label %dec_label_pc_2248, !insn.addr !509

dec_label_pc_2248:                                ; preds = %dec_label_pc_221c, %dec_label_pc_2234
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !510

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2248, { 1, 0 }
}

define i32 @op_mod(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2250:
  %storemerge.reg2mem = alloca i32, !insn.addr !511
  %0 = icmp eq i32 %b, 0, !insn.addr !512
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !513
  br i1 %0, label %dec_label_pc_2288, label %dec_label_pc_2268, !insn.addr !513

dec_label_pc_2268:                                ; preds = %dec_label_pc_2250
  %1 = srem i32 %a, %b
  store i32 %1, i32* %storemerge.reg2mem, !insn.addr !514
  br label %dec_label_pc_2288, !insn.addr !514

dec_label_pc_2288:                                ; preds = %dec_label_pc_2250, %dec_label_pc_2268
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !515

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2288, { 1, 0 }
}

define i32 @op_and(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2290:
  %0 = and i32 %b, %a, !insn.addr !516
  ret i32 %0, !insn.addr !517
}

define i32 @op_or(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_22b0:
  %0 = or i32 %b, %a, !insn.addr !518
  ret i32 %0, !insn.addr !519
}

define i32 @op_xor(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_22d0:
  %0 = xor i32 %b, %a, !insn.addr !520
  ret i32 %0, !insn.addr !521
}

define i32 @op_shl(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_22f0:
  %0 = shl i32 %a, %b, !insn.addr !522
  ret i32 %0, !insn.addr !523
}

define i32 @op_shr(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2310:
  %0 = ashr i32 %a, %b, !insn.addr !524
  ret i32 %0, !insn.addr !525
}

define i32 @large_jump_table(i32 %op, i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2330:
  %0 = icmp ult i32 %op, 10
  %merge = select i1 %0, i32 %a, i32 -1
  ret i32 %merge, !insn.addr !526
}

define i32 @conditional_func_ptr(i32 %mode, i32 %x) local_unnamed_addr {
dec_label_pc_23e8:
  ret i32 %x, !insn.addr !527
}

define i64 @function_2448(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2448:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !528
}

define i32 @state_machine(i32 %event, i32 %state) local_unnamed_addr {
dec_label_pc_2450:
  %x0.0.reg2mem = alloca i32, !insn.addr !529
  %0 = icmp eq i32 %state, 3, !insn.addr !530
  br i1 %0, label %dec_label_pc_24fc, label %dec_label_pc_2468, !insn.addr !531

dec_label_pc_2468:                                ; preds = %dec_label_pc_2450
  %1 = icmp sgt i32 %state, 3, !insn.addr !532
  store i32 3, i32* %x0.0.reg2mem, !insn.addr !532
  br i1 %1, label %dec_label_pc_251c, label %dec_label_pc_2474, !insn.addr !532

dec_label_pc_2474:                                ; preds = %dec_label_pc_2468
  store i32 2, i32* %x0.0.reg2mem
  switch i32 %state, label %dec_label_pc_251c.fold.split [
    i32 2, label %dec_label_pc_251c
    i32 0, label %dec_label_pc_24a8
    i32 1, label %dec_label_pc_24c4
  ]

dec_label_pc_24a8:                                ; preds = %dec_label_pc_2474
  %2 = icmp eq i32 %event, 1, !insn.addr !533
  %. = zext i1 %2 to i32
  store i32 %., i32* %x0.0.reg2mem, !insn.addr !534
  br label %dec_label_pc_251c, !insn.addr !534

dec_label_pc_24c4:                                ; preds = %dec_label_pc_2474
  %switch.selectcmp = icmp eq i32 %event, 99
  %switch.select = select i1 %switch.selectcmp, i32 3, i32 1
  %switch.selectcmp2 = icmp eq i32 %event, 2
  %switch.select3 = select i1 %switch.selectcmp2, i32 2, i32 %switch.select
  store i32 %switch.select3, i32* %x0.0.reg2mem
  br label %dec_label_pc_251c

dec_label_pc_24fc:                                ; preds = %dec_label_pc_2450
  %3 = icmp eq i32 %event, 0, !insn.addr !535
  %.1 = select i1 %3, i32 0, i32 3
  store i32 %.1, i32* %x0.0.reg2mem, !insn.addr !536
  br label %dec_label_pc_251c, !insn.addr !536

dec_label_pc_251c.fold.split:                     ; preds = %dec_label_pc_2474
  store i32 3, i32* %x0.0.reg2mem
  br label %dec_label_pc_251c

dec_label_pc_251c:                                ; preds = %dec_label_pc_2474, %dec_label_pc_251c.fold.split, %dec_label_pc_24c4, %dec_label_pc_2468, %dec_label_pc_24fc, %dec_label_pc_24a8
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !537

; uselistorder directives
  uselistorder i32* %x0.0.reg2mem, { 0, 1, 4, 2, 6, 5, 3 }
  uselistorder i32 %event, { 3, 0, 1, 2 }
  uselistorder label %dec_label_pc_251c, { 1, 4, 2, 5, 0, 3 }
}

define i32 @state_idle(i32 %event) local_unnamed_addr {
dec_label_pc_2524:
  %0 = icmp eq i32 %event, 1, !insn.addr !538
  %1 = zext i1 %0 to i32, !insn.addr !539
  ret i32 %1, !insn.addr !540
}

define i32 @state_processing(i32 %event) local_unnamed_addr {
dec_label_pc_2544:
  %switch.selectcmp = icmp eq i32 %event, 99
  %switch.select = select i1 %switch.selectcmp, i32 3, i32 1
  %switch.selectcmp1 = icmp eq i32 %event, 2
  %switch.select2 = select i1 %switch.selectcmp1, i32 2, i32 %switch.select
  ret i32 %switch.select2, !insn.addr !541

; uselistorder directives
  uselistorder i32 99, { 1, 2, 0, 3 }
}

define i32 @state_done(i32 %event) local_unnamed_addr {
dec_label_pc_2580:
  ret i32 2, !insn.addr !542
}

define i32 @state_error(i32 %event) local_unnamed_addr {
dec_label_pc_2594:
  %0 = icmp eq i32 %event, 0, !insn.addr !543
  %. = select i1 %0, i32 0, i32 3
  ret i32 %., !insn.addr !544
}

define i32 @fsm_func_table(i32 %event, i32 %state) local_unnamed_addr {
dec_label_pc_25bc:
  %0 = alloca i64
  %merge.reg2mem = alloca i32, !insn.addr !545
  %1 = load i64, i64* %0
  %2 = load i64, i64* @global_var_13fe8, align 8, !insn.addr !546
  %3 = inttoptr i64 %2 to i64*, !insn.addr !547
  %4 = load i64, i64* %3, align 8, !insn.addr !547
  %5 = load i64, i64* @global_var_14078, align 8, !insn.addr !548
  %6 = call i128 @__asm_ld1(i8 undef, i8 undef, i64 %5), !insn.addr !548
  %7 = call i128 @__asm_st1(i8 undef, i8 undef, i64 %1), !insn.addr !549
  %8 = icmp ult i32 %state, 4
  store i32 %event, i32* %merge.reg2mem, !insn.addr !550
  br i1 %8, label %dec_label_pc_2618, label %dec_label_pc_2610, !insn.addr !550

dec_label_pc_2610:                                ; preds = %dec_label_pc_25bc
  %9 = load i64, i64* @global_var_13fe8, align 8, !insn.addr !551
  %10 = inttoptr i64 %9 to i64*, !insn.addr !552
  %11 = load i64, i64* %10, align 8, !insn.addr !552
  %12 = icmp eq i64 %4, %11, !insn.addr !553
  store i32 3, i32* %merge.reg2mem, !insn.addr !554
  br i1 %12, label %dec_label_pc_2618, label %dec_label_pc_2650, !insn.addr !554

dec_label_pc_2618:                                ; preds = %dec_label_pc_2610, %dec_label_pc_2650, %dec_label_pc_25bc
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !555

dec_label_pc_2650:                                ; preds = %dec_label_pc_2610
  call void @__stack_chk_fail(), !insn.addr !556
  store i32 3, i32* %merge.reg2mem, !insn.addr !556
  br label %dec_label_pc_2618, !insn.addr !556

; uselistorder directives
  uselistorder i32* %merge.reg2mem, { 2, 0, 1, 3 }
  uselistorder label %dec_label_pc_2618, { 1, 0, 2 }
}

define i32 @computed_goto(i32* %labels, i32 %idx) local_unnamed_addr {
dec_label_pc_2660:
  %0 = alloca i64
  %stack_var_-32 = alloca i64, align 8
  %1 = load i64, i64* %0
  %2 = load i64, i64* @global_var_13fe8, align 8, !insn.addr !557
  %3 = inttoptr i64 %2 to i64*, !insn.addr !558
  %4 = load i64, i64* %3, align 8, !insn.addr !558
  %5 = load i64, i64* @global_var_14098, align 8, !insn.addr !559
  %6 = call i128 @__asm_ld1(i8 undef, i8 undef, i64 %5), !insn.addr !559
  %7 = call i128 @__asm_st1(i8 undef, i8 undef, i64 %1), !insn.addr !560
  %8 = icmp ult i32 %idx, 4
  br i1 %8, label %dec_label_pc_26bc, label %dec_label_pc_26b4, !insn.addr !561

dec_label_pc_26b4:                                ; preds = %dec_label_pc_2660
  %9 = load i64, i64* @global_var_13fe8, align 8, !insn.addr !562
  %10 = inttoptr i64 %9 to i64*, !insn.addr !563
  %11 = load i64, i64* %10, align 8, !insn.addr !563
  %12 = icmp eq i64 %4, %11, !insn.addr !564
  br i1 %12, label %dec_label_pc_2714, label %dec_label_pc_2710, !insn.addr !565

dec_label_pc_26bc:                                ; preds = %dec_label_pc_2660
  %13 = ptrtoint i64* %stack_var_-32 to i64, !insn.addr !566
  %14 = sext i32 %idx to i64, !insn.addr !567
  %15 = mul i64 %14, 8, !insn.addr !568
  %16 = add i64 %15, %13, !insn.addr !568
  %17 = inttoptr i64 %16 to i64*, !insn.addr !568
  %18 = load i64, i64* %17, align 8, !insn.addr !568
  %19 = trunc i64 %18 to i32, !insn.addr !569
  ret i32 %19, !insn.addr !569

dec_label_pc_2710:                                ; preds = %dec_label_pc_26b4
  call void @__stack_chk_fail(), !insn.addr !570
  br label %dec_label_pc_2714, !insn.addr !570

dec_label_pc_2714:                                ; preds = %dec_label_pc_2710, %dec_label_pc_26b4
  ret i32 -1, !insn.addr !571

; uselistorder directives
  uselistorder i32 -1, { 13, 17, 14, 0, 15, 20, 21, 22, 23, 24, 25, 26, 1, 2, 3, 4, 5, 6, 16, 7, 8, 18, 9, 19, 10, 11, 12 }
  uselistorder i32 4, { 4, 5, 0, 6, 7, 1, 2, 3 }
  uselistorder i32 %idx, { 1, 0 }
}

define i32 @obfuscated_cf(i32 %x) local_unnamed_addr {
dec_label_pc_2720:
  %0 = mul i32 %x, %x, !insn.addr !572
  %1 = add i32 %0, 1, !insn.addr !573
  %2 = sub i32 0, %0
  %3 = and i32 %1, %2, !insn.addr !573
  %4 = icmp slt i32 %3, 0, !insn.addr !573
  %5 = icmp slt i32 %1, 0, !insn.addr !573
  %6 = icmp eq i1 %5, %4, !insn.addr !574
  %7 = mul i32 %x, 2
  %8 = or i32 %7, 1
  %result_-4.0 = select i1 %6, i32 %x, i32 %8
  %9 = mul i32 %result_-4.0, 2, !insn.addr !575
  ret i32 %9, !insn.addr !576

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32 %x, { 1, 0, 2, 3 }
}

define i32 @opaque_predicate(i32 %x) local_unnamed_addr {
dec_label_pc_2768:
  %0 = mul i32 %x, 2, !insn.addr !577
  ret i32 %0, !insn.addr !578
}

define i32 @overlapped_code(i32 %x) local_unnamed_addr {
dec_label_pc_27a4:
  %storemerge.in.reg2mem = alloca i32, !insn.addr !579
  %0 = urem i32 %x, 2, !insn.addr !580
  %1 = icmp eq i32 %0, 0, !insn.addr !581
  br i1 %1, label %dec_label_pc_27d4, label %dec_label_pc_27bc, !insn.addr !582

dec_label_pc_27bc:                                ; preds = %dec_label_pc_27a4
  %2 = mul i32 %x, 3, !insn.addr !583
  %3 = add i32 %2, 1, !insn.addr !584
  store i32 %3, i32* %storemerge.in.reg2mem, !insn.addr !585
  br label %dec_label_pc_27e4, !insn.addr !585

dec_label_pc_27d4:                                ; preds = %dec_label_pc_27a4
  %4 = icmp slt i32 %x, 0
  %5 = zext i1 %4 to i32, !insn.addr !586
  %6 = add i32 %5, %x, !insn.addr !587
  %7 = ashr i32 %6, 1, !insn.addr !588
  store i32 %7, i32* %storemerge.in.reg2mem, !insn.addr !588
  br label %dec_label_pc_27e4, !insn.addr !588

dec_label_pc_27e4:                                ; preds = %dec_label_pc_27d4, %dec_label_pc_27bc
  %storemerge.in.reload = load i32, i32* %storemerge.in.reg2mem
  ret i32 %storemerge.in.reload, !insn.addr !589

; uselistorder directives
  uselistorder i32* %storemerge.in.reg2mem, { 0, 2, 1 }
  uselistorder i32 3, { 14, 1, 0, 13, 8, 2, 10, 9, 3, 29, 15, 16, 17, 12, 18, 19, 6, 20, 5, 21, 22, 23, 24, 25, 30, 26, 31, 27, 7, 32, 28, 11, 4 }
  uselistorder i32 %x, { 2, 0, 3, 1 }
}

define void @test_control_flow_l3() local_unnamed_addr {
dec_label_pc_27ec:
  %stack_var_-16 = alloca i32, align 4
  %0 = load i64, i64* @global_var_13fe8, align 8, !insn.addr !590
  %1 = inttoptr i64 %0 to i64*, !insn.addr !591
  %2 = load i64, i64* %1, align 8, !insn.addr !591
  %3 = call i32 @puts(i8* bitcast (i8** @global_var_2f18 to i8*)), !insn.addr !592
  %4 = call i32 @non_local_jump(i32 5), !insn.addr !593
  %5 = zext i32 %4 to i64, !insn.addr !594
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_2f40, i64 0, i64 0), i64 %5), !insn.addr !595
  %7 = call i32 @non_local_jump(i32 -5), !insn.addr !596
  %8 = zext i32 %7 to i64, !insn.addr !597
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_2f40, i64 0, i64 0), i64 %8), !insn.addr !598
  %10 = call i32 @cpp_exception(i32 5), !insn.addr !599
  %11 = zext i32 %10 to i64, !insn.addr !600
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2f60, i64 0, i64 0), i64 %11), !insn.addr !601
  %13 = call i32 @cpp_exception(i32 -5), !insn.addr !602
  %14 = zext i32 %13 to i64, !insn.addr !603
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2f60, i64 0, i64 0), i64 %14), !insn.addr !604
  %16 = call i32 @large_jump_table(i32 0, i32 10, i32 5), !insn.addr !605
  %17 = zext i32 %16 to i64, !insn.addr !606
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_2f80, i64 0, i64 0), i64 %17), !insn.addr !607
  %19 = call i32 @conditional_func_ptr(i32 0, i32 5), !insn.addr !608
  %20 = zext i32 %19 to i64, !insn.addr !609
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_2fa8, i64 0, i64 0), i64 %20), !insn.addr !610
  %22 = call i32 @state_machine(i32 1, i32 0), !insn.addr !611
  %23 = zext i32 %22 to i64, !insn.addr !612
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2fd0, i64 0, i64 0), i64 %23), !insn.addr !613
  %25 = call i32 @fsm_func_table(i32 2, i32 1), !insn.addr !614
  %26 = zext i32 %25 to i64, !insn.addr !615
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_2ff0, i64 0, i64 0), i64 %26), !insn.addr !616
  store i32 0, i32* %stack_var_-16, align 4, !insn.addr !617
  %28 = call i32 @computed_goto(i32* nonnull %stack_var_-16, i32 2), !insn.addr !618
  %29 = zext i32 %28 to i64, !insn.addr !619
  %30 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3010, i64 0, i64 0), i64 %29), !insn.addr !620
  %31 = call i32 @obfuscated_cf(i32 5), !insn.addr !621
  %32 = zext i32 %31 to i64, !insn.addr !622
  %33 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3030, i64 0, i64 0), i64 %32), !insn.addr !623
  %34 = call i32 @opaque_predicate(i32 5), !insn.addr !624
  %35 = zext i32 %34 to i64, !insn.addr !625
  %36 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3050, i64 0, i64 0), i64 %35), !insn.addr !626
  %37 = call i32 @overlapped_code(i32 5), !insn.addr !627
  %38 = zext i32 %37 to i64, !insn.addr !628
  %39 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3078, i64 0, i64 0), i64 %38), !insn.addr !629
  %40 = load i64, i64* @global_var_13fe8, align 8, !insn.addr !630
  %41 = inttoptr i64 %40 to i64*, !insn.addr !631
  %42 = load i64, i64* %41, align 8, !insn.addr !631
  %43 = icmp eq i64 %2, %42, !insn.addr !632
  br i1 %43, label %dec_label_pc_298c, label %dec_label_pc_2988, !insn.addr !633

dec_label_pc_2988:                                ; preds = %dec_label_pc_27ec
  call void @__stack_chk_fail(), !insn.addr !634
  br label %dec_label_pc_298c, !insn.addr !634

dec_label_pc_298c:                                ; preds = %dec_label_pc_2988, %dec_label_pc_27ec
  ret void, !insn.addr !635

; uselistorder directives
  uselistorder void ()* @__stack_chk_fail, { 0, 2, 5, 1, 4, 3, 6 }
  uselistorder i32 2, { 31, 32, 16, 3, 4, 5, 15, 23, 24, 25, 26, 20, 0, 6, 7, 33, 34, 8, 9, 17, 37, 38, 21, 10, 18, 11, 35, 12, 19, 13, 27, 28, 22, 36, 1, 29, 30, 2, 14 }
  uselistorder i32 10, { 6, 4, 7, 8, 9, 5, 10, 11, 12, 13, 14, 15, 16, 1, 2, 3, 0 }
  uselistorder i32 (i32)* @cpp_exception, { 1, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 54, 53, 56, 22, 24, 27, 39, 46, 1, 11, 13, 18, 52, 50, 51, 55, 19, 20, 21, 23, 25, 26, 28, 29, 34, 33, 32, 35, 36, 31, 30, 37, 38, 41, 40, 43, 42, 45, 44, 49, 48, 47, 0, 2, 3, 4, 5, 7, 8, 9, 10, 6, 12, 14, 15, 16, 17, 57 }
  uselistorder i32 (i32)* @non_local_jump, { 1, 0 }
  uselistorder i32 5, { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 1, 20, 21, 22, 23, 24, 25, 26, 27, 5, 0, 2, 3, 4 }
  uselistorder i32 (i8*)* @puts, { 1, 2, 0, 3 }
  uselistorder i64 0, { 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 108, 49, 50, 51, 52, 53, 54, 27, 28, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 109, 0, 110, 1, 2, 3, 4, 5, 6, 102, 103, 104, 105, 106, 107 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_2994:
  call void @test_control_flow_l1(), !insn.addr !636
  call void @test_control_flow_l2(), !insn.addr !637
  call void @test_control_flow_l3(), !insn.addr !638
  ret i32 0, !insn.addr !639

; uselistorder directives
  uselistorder i32 0, { 23, 63, 51, 52, 53, 26, 65, 66, 67, 27, 49, 68, 40, 69, 38, 0, 70, 1, 71, 72, 73, 74, 54, 64, 24, 47, 58, 28, 75, 59, 2, 3, 76, 4, 5, 6, 29, 50, 7, 8, 9, 10, 32, 60, 39, 55, 77, 78, 61, 79, 80, 81, 11, 12, 13, 56, 82, 83, 62, 34, 84, 14, 15, 30, 57, 16, 17, 33, 18, 31, 19, 20, 41, 21, 42, 43, 44, 45, 46, 22, 25, 35, 36, 48, 37 }
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_29b4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !640

; uselistorder directives
  uselistorder i32 1, { 7, 103, 104, 128, 141, 142, 8, 105, 143, 129, 6, 9, 5, 93, 106, 94, 125, 91, 10, 4, 11, 12, 107, 13, 108, 134, 133, 132, 131, 130, 135, 3, 144, 14, 145, 146, 15, 126, 16, 17, 127, 18, 147, 20, 19, 2, 148, 23, 22, 21, 149, 29, 28, 27, 26, 25, 24, 92, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 109, 150, 55, 111, 151, 110, 57, 56, 1, 153, 152, 137, 136, 60, 59, 58, 112, 113, 114, 115, 116, 117, 154, 61, 63, 65, 66, 64, 62, 101, 102, 155, 69, 70, 68, 67, 156, 139, 138, 72, 71, 157, 74, 73, 89, 90, 118, 158, 76, 75, 77, 95, 80, 79, 78, 96, 81, 97, 82, 98, 83, 99, 84, 100, 85, 119, 120, 121, 86, 122, 123, 87, 124, 88, 140, 0 }
}

declare i32 @_setjmp([1 x %__jmp_buf_tag]) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare void @longjmp([1 x %__jmp_buf_tag], i32) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i128 @__asm_ld1(i8, i8, i64) local_unnamed_addr

declare i128 @__asm_st1(i8, i8, i64) local_unnamed_addr

!0 = !{i64 2340}
!1 = !{i64 2348}
!2 = !{i64 2396}
!3 = !{i64 2412}
!4 = !{i64 2428}
!5 = !{i64 2444}
!6 = !{i64 2460}
!7 = !{i64 2476}
!8 = !{i64 2492}
!9 = !{i64 2508}
!10 = !{i64 2524}
!11 = !{i64 2592}
!12 = !{i64 2604}
!13 = !{i64 2608}
!14 = !{i64 2616}
!15 = !{i64 2620}
!16 = !{i64 2624}
!17 = !{i64 2628}
!18 = !{i64 2684}
!19 = !{i64 2744}
!20 = !{i64 2752}
!21 = !{i64 2768}
!22 = !{i64 2772}
!23 = !{i64 2780}
!24 = !{i64 2784}
!25 = !{i64 2792}
!26 = !{i64 2796}
!27 = !{i64 2800}
!28 = !{i64 2808}
!29 = !{i64 2820}
!30 = !{i64 2832}
!31 = !{i64 2860}
!32 = !{i64 2872}
!33 = !{i64 2888}
!34 = !{i64 2904}
!35 = !{i64 2924}
!36 = !{i64 2948}
!37 = !{i64 2968}
!38 = !{i64 2988}
!39 = !{i64 3012}
!40 = !{i64 3024}
!41 = !{i64 3060}
!42 = !{i64 3064}
!43 = !{i64 3096}
!44 = !{i64 3108}
!45 = !{i64 3120}
!46 = !{i64 3132}
!47 = !{i64 3144}
!48 = !{i64 3160}
!49 = !{i64 3196}
!50 = !{i64 3200}
!51 = !{i64 3244}
!52 = !{i64 3264}
!53 = !{i64 3268}
!54 = !{i64 3276}
!55 = !{i64 3280}
!56 = !{i64 3324}
!57 = !{i64 3344}
!58 = !{i64 3364}
!59 = !{i64 3384}
!60 = !{i64 3388}
!61 = !{i64 3396}
!62 = !{i64 3400}
!63 = !{i64 3428}
!64 = !{i64 3432}
!65 = !{i64 3444}
!66 = !{i64 3452}
!67 = !{i64 3456}
!68 = !{i64 3572}
!69 = !{i64 3576}
!70 = !{i64 3588}
!71 = !{i64 3592}
!72 = !{i64 3604}
!73 = !{i64 3892}
!74 = !{i64 3896}
!75 = !{i64 3908}
!76 = !{i64 3912}
!77 = !{i64 3924}
!78 = !{i64 3988}
!79 = !{i64 3992}
!80 = !{i64 4008}
!81 = !{i64 4012}
!82 = !{i64 4024}
!83 = !{i64 4080}
!84 = !{i64 4088}
!85 = !{i64 4092}
!86 = !{i64 4104}
!87 = !{i64 4112}
!88 = !{i64 4132}
!89 = !{i64 4136}
!90 = !{i64 4196}
!91 = !{i64 4208}
!92 = !{i64 4212}
!93 = !{i64 4280}
!94 = !{i64 4284}
!95 = !{i64 4256}
!96 = !{i64 4268}
!97 = !{i64 4312}
!98 = !{i64 4316}
!99 = !{i64 4324}
!100 = !{i64 4356}
!101 = !{i64 4368}
!102 = !{i64 4384}
!103 = !{i64 4396}
!104 = !{i64 4508}
!105 = !{i64 4512}
!106 = !{i64 4528}
!107 = !{i64 4532}
!108 = !{i64 4564}
!109 = !{i64 4640}
!110 = !{i64 4652}
!111 = !{i64 4600}
!112 = !{i64 4592}
!113 = !{i64 4596}
!114 = !{i64 4604}
!115 = !{i64 4616}
!116 = !{i64 4632}
!117 = !{i64 4636}
!118 = !{i64 4676}
!119 = !{i64 4680}
!120 = !{i64 4688}
!121 = !{i64 4692}
!122 = !{i64 4704}
!123 = !{i64 4708}
!124 = !{i64 4796}
!125 = !{i64 4736}
!126 = !{i64 4740}
!127 = !{i64 4776}
!128 = !{i64 4808}
!129 = !{i64 4860}
!130 = !{i64 4876}
!131 = !{i64 4880}
!132 = !{i64 4896}
!133 = !{i64 4948}
!134 = !{i64 4960}
!135 = !{i64 4936}
!136 = !{i64 4984}
!137 = !{i64 5012}
!138 = !{i64 5016}
!139 = !{i64 5024}
!140 = !{i64 5044}
!141 = !{i64 5060}
!142 = !{i64 5064}
!143 = !{i64 5076}
!144 = !{i64 5084}
!145 = !{i64 5088}
!146 = !{i64 5100}
!147 = !{i64 5108}
!148 = !{i64 5112}
!149 = !{i64 5124}
!150 = !{i64 5132}
!151 = !{i64 5136}
!152 = !{i64 5148}
!153 = !{i64 5156}
!154 = !{i64 5160}
!155 = !{i64 5172}
!156 = !{i64 5184}
!157 = !{i64 5188}
!158 = !{i64 5200}
!159 = !{i64 5212}
!160 = !{i64 5216}
!161 = !{i64 5228}
!162 = !{i64 5240}
!163 = !{i64 5244}
!164 = !{i64 5256}
!165 = !{i64 5280}
!166 = !{i64 5284}
!167 = !{i64 5296}
!168 = !{i64 5304}
!169 = !{i64 5308}
!170 = !{i64 5320}
!171 = !{i64 5328}
!172 = !{i64 5332}
!173 = !{i64 5344}
!174 = !{i64 5352}
!175 = !{i64 5356}
!176 = !{i64 5368}
!177 = !{i64 5376}
!178 = !{i64 5380}
!179 = !{i64 5392}
!180 = !{i64 5400}
!181 = !{i64 5404}
!182 = !{i64 5416}
!183 = !{i64 5424}
!184 = !{i64 5428}
!185 = !{i64 5440}
!186 = !{i64 5448}
!187 = !{i64 5452}
!188 = !{i64 5464}
!189 = !{i64 5472}
!190 = !{i64 5476}
!191 = !{i64 5488}
!192 = !{i64 5496}
!193 = !{i64 5500}
!194 = !{i64 5512}
!195 = !{i64 5524}
!196 = !{i64 5528}
!197 = !{i64 5540}
!198 = !{i64 5548}
!199 = !{i64 5552}
!200 = !{i64 5564}
!201 = !{i64 5572}
!202 = !{i64 5576}
!203 = !{i64 5588}
!204 = !{i64 5596}
!205 = !{i64 5600}
!206 = !{i64 5612}
!207 = !{i64 5620}
!208 = !{i64 5624}
!209 = !{i64 5636}
!210 = !{i64 5644}
!211 = !{i64 5648}
!212 = !{i64 5660}
!213 = !{i64 5668}
!214 = !{i64 5672}
!215 = !{i64 5684}
!216 = !{i64 5696}
!217 = !{i64 5700}
!218 = !{i64 5712}
!219 = !{i64 5724}
!220 = !{i64 5728}
!221 = !{i64 5740}
!222 = !{i64 5752}
!223 = !{i64 5756}
!224 = !{i64 5772}
!225 = !{i64 5776}
!226 = !{i64 5804}
!227 = !{i64 5944}
!228 = !{i64 5952}
!229 = !{i64 5852}
!230 = !{i64 5832}
!231 = !{i64 5844}
!232 = !{i64 5848}
!233 = !{i64 5856}
!234 = !{i64 5868}
!235 = !{i64 5888}
!236 = !{i64 5900}
!237 = !{i64 5904}
!238 = !{i64 5912}
!239 = !{i64 5928}
!240 = !{i64 5936}
!241 = !{i64 5940}
!242 = !{i64 5932}
!243 = !{i64 5836}
!244 = !{i64 5840}
!245 = !{i64 5976}
!246 = !{i64 5980}
!247 = !{i64 5988}
!248 = !{i64 5992}
!249 = !{i64 6004}
!250 = !{i64 6008}
!251 = !{i64 6028}
!252 = !{i64 6016}
!253 = !{i64 6032}
!254 = !{i64 6040}
!255 = !{i64 6056}
!256 = !{i64 6068}
!257 = !{i64 6072}
!258 = !{i64 6088}
!259 = !{i64 6092}
!260 = !{i64 6104}
!261 = !{i64 6108}
!262 = !{i64 6124}
!263 = !{i64 6140}
!264 = !{i64 6156}
!265 = !{i64 6160}
!266 = !{i64 6188}
!267 = !{i64 6208}
!268 = !{i64 6216}
!269 = !{i64 6256}
!270 = !{i64 6260}
!271 = !{i64 6284}
!272 = !{i64 6316}
!273 = !{i64 6328}
!274 = !{i64 6464}
!275 = !{i64 6468}
!276 = !{i64 6472}
!277 = !{i64 6476}
!278 = !{i64 6480}
!279 = !{i64 6484}
!280 = !{i64 6488}
!281 = !{i64 6492}
!282 = !{i64 6496}
!283 = !{i64 6500}
!284 = !{i64 6504}
!285 = !{i64 6508}
!286 = !{i64 6512}
!287 = !{i64 6516}
!288 = !{i64 6520}
!289 = !{i64 6524}
!290 = !{i64 6528}
!291 = !{i64 6532}
!292 = !{i64 6536}
!293 = !{i64 6540}
!294 = !{i64 6544}
!295 = !{i64 6548}
!296 = !{i64 6552}
!297 = !{i64 6556}
!298 = !{i64 6560}
!299 = !{i64 6564}
!300 = !{i64 6568}
!301 = !{i64 6572}
!302 = !{i64 6576}
!303 = !{i64 6580}
!304 = !{i64 6584}
!305 = !{i64 6588}
!306 = !{i64 6592}
!307 = !{i64 6596}
!308 = !{i64 6600}
!309 = !{i64 6604}
!310 = !{i64 6608}
!311 = !{i64 6612}
!312 = !{i64 6616}
!313 = !{i64 6620}
!314 = !{i64 6624}
!315 = !{i64 6628}
!316 = !{i64 6632}
!317 = !{i64 6636}
!318 = !{i64 6640}
!319 = !{i64 6644}
!320 = !{i64 6648}
!321 = !{i64 6652}
!322 = !{i64 6656}
!323 = !{i64 6660}
!324 = !{i64 6664}
!325 = !{i64 6668}
!326 = !{i64 6672}
!327 = !{i64 6676}
!328 = !{i64 6680}
!329 = !{i64 6684}
!330 = !{i64 6688}
!331 = !{i64 6692}
!332 = !{i64 6696}
!333 = !{i64 6700}
!334 = !{i64 6704}
!335 = !{i64 6708}
!336 = !{i64 6712}
!337 = !{i64 6716}
!338 = !{i64 6724}
!339 = !{i64 6740}
!340 = !{i64 6752}
!341 = !{i64 6756}
!342 = !{i64 6856}
!343 = !{i64 6832}
!344 = !{i64 6788}
!345 = !{i64 6800}
!346 = !{i64 6812}
!347 = !{i64 6844}
!348 = !{i64 6868}
!349 = !{i64 6876}
!350 = !{i64 6884}
!351 = !{i64 6888}
!352 = !{i64 6972}
!353 = !{i64 6916}
!354 = !{i64 6932}
!355 = !{i64 6952}
!356 = !{i64 6984}
!357 = !{i64 6988}
!358 = !{i64 7036}
!359 = !{i64 7000}
!360 = !{i64 7008}
!361 = !{i64 7024}
!362 = !{i64 7040}
!363 = !{i64 7060}
!364 = !{i64 7064}
!365 = !{i64 7084}
!366 = !{i64 7100}
!367 = !{i64 7104}
!368 = !{i64 7116}
!369 = !{i64 7124}
!370 = !{i64 7128}
!371 = !{i64 7152}
!372 = !{i64 7168}
!373 = !{i64 7180}
!374 = !{i64 7192}
!375 = !{i64 7200}
!376 = !{i64 7204}
!377 = !{i64 7228}
!378 = !{i64 7244}
!379 = !{i64 7248}
!380 = !{i64 7252}
!381 = !{i64 7260}
!382 = !{i64 7264}
!383 = !{i64 7268}
!384 = !{i64 7280}
!385 = !{i64 7292}
!386 = !{i64 7296}
!387 = !{i64 7312}
!388 = !{i64 7316}
!389 = !{i64 7324}
!390 = !{i64 7336}
!391 = !{i64 7344}
!392 = !{i64 7348}
!393 = !{i64 7372}
!394 = !{i64 7388}
!395 = !{i64 7396}
!396 = !{i64 7408}
!397 = !{i64 7416}
!398 = !{i64 7444}
!399 = !{i64 7452}
!400 = !{i64 7468}
!401 = !{i64 7476}
!402 = !{i64 7500}
!403 = !{i64 7508}
!404 = !{i64 7524}
!405 = !{i64 7588}
!406 = !{i64 7628}
!407 = !{i64 7632}
!408 = !{i64 7680}
!409 = !{i64 7700}
!410 = !{i64 7708}
!411 = !{i64 7812}
!412 = !{i64 7760}
!413 = !{i64 7768}
!414 = !{i64 7824}
!415 = !{i64 7840}
!416 = !{i64 7844}
!417 = !{i64 7864}
!418 = !{i64 7872}
!419 = !{i64 7876}
!420 = !{i64 7888}
!421 = !{i64 7892}
!422 = !{i64 7900}
!423 = !{i64 7904}
!424 = !{i64 7916}
!425 = !{i64 7924}
!426 = !{i64 7928}
!427 = !{i64 7940}
!428 = !{i64 7948}
!429 = !{i64 7952}
!430 = !{i64 7964}
!431 = !{i64 7972}
!432 = !{i64 7976}
!433 = !{i64 7988}
!434 = !{i64 7996}
!435 = !{i64 8000}
!436 = !{i64 8012}
!437 = !{i64 8020}
!438 = !{i64 8024}
!439 = !{i64 8036}
!440 = !{i64 8056}
!441 = !{i64 8060}
!442 = !{i64 8080}
!443 = !{i64 8084}
!444 = !{i64 8096}
!445 = !{i64 8104}
!446 = !{i64 8108}
!447 = !{i64 8120}
!448 = !{i64 8128}
!449 = !{i64 8132}
!450 = !{i64 8144}
!451 = !{i64 8148}
!452 = !{i64 8156}
!453 = !{i64 8160}
!454 = !{i64 8172}
!455 = !{i64 8180}
!456 = !{i64 8184}
!457 = !{i64 8196}
!458 = !{i64 8208}
!459 = !{i64 8212}
!460 = !{i64 8224}
!461 = !{i64 8236}
!462 = !{i64 8240}
!463 = !{i64 8252}
!464 = !{i64 8268}
!465 = !{i64 8272}
!466 = !{i64 8284}
!467 = !{i64 8296}
!468 = !{i64 8300}
!469 = !{i64 8312}
!470 = !{i64 8324}
!471 = !{i64 8328}
!472 = !{i64 8340}
!473 = !{i64 8364}
!474 = !{i64 8396}
!475 = !{i64 8400}
!476 = !{i64 8412}
!477 = !{i64 8424}
!478 = !{i64 8432}
!479 = !{i64 8436}
!480 = !{i64 8444}
!481 = !{i64 8448}
!482 = !{i64 8456}
!483 = !{i64 8460}
!484 = !{i64 8480}
!485 = !{i64 8484}
!486 = !{i64 8488}
!487 = !{i64 8496}
!488 = !{i64 8500}
!489 = !{i64 8516}
!490 = !{i64 8528}
!491 = !{i64 8544}
!492 = !{i64 8552}
!493 = !{i64 8556}
!494 = !{i64 8568}
!495 = !{i64 8584}
!496 = !{i64 8588}
!497 = !{i64 8608}
!498 = !{i64 8632}
!499 = !{i64 8656}
!500 = !{i64 8664}
!501 = !{i64 8688}
!502 = !{i64 8696}
!503 = !{i64 8720}
!504 = !{i64 8728}
!505 = !{i64 8732}
!506 = !{i64 8748}
!507 = !{i64 8752}
!508 = !{i64 8764}
!509 = !{i64 8768}
!510 = !{i64 8780}
!511 = !{i64 8784}
!512 = !{i64 8800}
!513 = !{i64 8804}
!514 = !{i64 8832}
!515 = !{i64 8844}
!516 = !{i64 8868}
!517 = !{i64 8876}
!518 = !{i64 8900}
!519 = !{i64 8908}
!520 = !{i64 8932}
!521 = !{i64 8940}
!522 = !{i64 8964}
!523 = !{i64 8972}
!524 = !{i64 8996}
!525 = !{i64 9004}
!526 = !{i64 9140}
!527 = !{i64 9284}
!528 = !{i64 9292}
!529 = !{i64 9296}
!530 = !{i64 9312}
!531 = !{i64 9316}
!532 = !{i64 9328}
!533 = !{i64 9392}
!534 = !{i64 9400}
!535 = !{i64 9472}
!536 = !{i64 9484}
!537 = !{i64 9504}
!538 = !{i64 9520}
!539 = !{i64 9524}
!540 = !{i64 9536}
!541 = !{i64 9596}
!542 = !{i64 9616}
!543 = !{i64 9632}
!544 = !{i64 9656}
!545 = !{i64 9660}
!546 = !{i64 9680}
!547 = !{i64 9684}
!548 = !{i64 9712}
!549 = !{i64 9716}
!550 = !{i64 9728}
!551 = !{i64 9784}
!552 = !{i64 9792}
!553 = !{i64 9796}
!554 = !{i64 9804}
!555 = !{i64 9772}
!556 = !{i64 9808}
!557 = !{i64 9844}
!558 = !{i64 9848}
!559 = !{i64 9876}
!560 = !{i64 9880}
!561 = !{i64 9892}
!562 = !{i64 9976}
!563 = !{i64 9984}
!564 = !{i64 9988}
!565 = !{i64 9996}
!566 = !{i64 9920}
!567 = !{i64 9924}
!568 = !{i64 9928}
!569 = !{i64 9936}
!570 = !{i64 10000}
!571 = !{i64 10012}
!572 = !{i64 10036}
!573 = !{i64 10040}
!574 = !{i64 10044}
!575 = !{i64 10068}
!576 = !{i64 10084}
!577 = !{i64 10116}
!578 = !{i64 10144}
!579 = !{i64 10148}
!580 = !{i64 10160}
!581 = !{i64 10164}
!582 = !{i64 10168}
!583 = !{i64 10184}
!584 = !{i64 10188}
!585 = !{i64 10192}
!586 = !{i64 10200}
!587 = !{i64 10204}
!588 = !{i64 10208}
!589 = !{i64 10216}
!590 = !{i64 10232}
!591 = !{i64 10236}
!592 = !{i64 10256}
!593 = !{i64 10264}
!594 = !{i64 10268}
!595 = !{i64 10280}
!596 = !{i64 10288}
!597 = !{i64 10292}
!598 = !{i64 10304}
!599 = !{i64 10312}
!600 = !{i64 10316}
!601 = !{i64 10328}
!602 = !{i64 10336}
!603 = !{i64 10340}
!604 = !{i64 10352}
!605 = !{i64 10368}
!606 = !{i64 10372}
!607 = !{i64 10384}
!608 = !{i64 10396}
!609 = !{i64 10400}
!610 = !{i64 10412}
!611 = !{i64 10424}
!612 = !{i64 10428}
!613 = !{i64 10440}
!614 = !{i64 10452}
!615 = !{i64 10456}
!616 = !{i64 10468}
!617 = !{i64 10472}
!618 = !{i64 10508}
!619 = !{i64 10512}
!620 = !{i64 10524}
!621 = !{i64 10532}
!622 = !{i64 10536}
!623 = !{i64 10548}
!624 = !{i64 10556}
!625 = !{i64 10560}
!626 = !{i64 10572}
!627 = !{i64 10580}
!628 = !{i64 10584}
!629 = !{i64 10596}
!630 = !{i64 10608}
!631 = !{i64 10616}
!632 = !{i64 10620}
!633 = !{i64 10628}
!634 = !{i64 10632}
!635 = !{i64 10640}
!636 = !{i64 10652}
!637 = !{i64 10656}
!638 = !{i64 10660}
!639 = !{i64 10672}
!640 = !{i64 10692}
