source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@global_var_1400c = local_unnamed_addr global i32 1212
@global_var_14010 = local_unnamed_addr global i32 1212
@global_var_14014 = local_unnamed_addr global i32 1212
@global_var_14018 = local_unnamed_addr global i32 1212
@global_var_1401c = local_unnamed_addr global i32 1212
@global_var_14020 = local_unnamed_addr global i32 1212
@global_var_14024 = local_unnamed_addr global i32 1212
@global_var_14028 = local_unnamed_addr global i32 1212
@global_var_56c = local_unnamed_addr constant i32 80532
@global_var_13f10 = global i32 1
@global_var_14000 = local_unnamed_addr global i32* @global_var_13f10
@global_var_570 = local_unnamed_addr constant i32 56
@global_var_14038 = local_unnamed_addr global i32 10500
@global_var_2904 = constant i32 -382908416
@global_var_590 = local_unnamed_addr constant i32 80508
@global_var_594 = local_unnamed_addr constant i32 52
@global_var_14034 = local_unnamed_addr global i32 0
@global_var_5cc = local_unnamed_addr constant i32 80544
@global_var_5d0 = local_unnamed_addr constant i32 80540
@global_var_5d4 = local_unnamed_addr constant i32 80456
@global_var_5d8 = local_unnamed_addr constant i32 48
@global_var_14030 = local_unnamed_addr global i32 0
@global_var_61c = local_unnamed_addr constant i32 80476
@global_var_620 = local_unnamed_addr constant i32 80472
@global_var_624 = local_unnamed_addr constant i32 80376
@global_var_628 = local_unnamed_addr constant i32 60
@global_var_1403c = local_unnamed_addr global i32 0
@global_var_680 = local_unnamed_addr constant i32 80396
@global_var_684 = local_unnamed_addr constant i32 80316
@global_var_688 = local_unnamed_addr constant i32 44
@global_var_1402c = local_unnamed_addr global i32 0
@global_var_68c = local_unnamed_addr constant i32 80348
@global_var_690 = local_unnamed_addr constant i32 80332
@global_var_190 = global i32 16
@global_var_1f4 = global i32 50
@global_var_9d0 = constant i32 16
@global_var_a74 = constant i32 40
@global_var_eac = local_unnamed_addr constant i32 7680
@global_var_2c24 = local_unnamed_addr constant i32 10
@global_var_2c28 = local_unnamed_addr constant i32 20
@global_var_2c2c = local_unnamed_addr constant i32 30
@global_var_2c30 = local_unnamed_addr constant i32 40
@global_var_2c34 = local_unnamed_addr constant i32 50
@global_var_1348 = local_unnamed_addr constant i32 7196
@global_var_134c = local_unnamed_addr constant i32 7189
@global_var_2ca1 = constant [31 x i8] c"CF-L1-01 (sequential_ops): %d\0A\00"
@global_var_1350 = local_unnamed_addr constant i32 7192
@global_var_2cc0 = constant [26 x i8] c"CF-L1-02 (single_if): %d\0A\00"
@global_var_1354 = local_unnamed_addr constant i32 7166
@global_var_2cda = constant [24 x i8] c"CF-L1-03 (if_else): %d\0A\00"
@global_var_1358 = local_unnamed_addr constant i32 7134
@global_var_2cf2 = constant [28 x i8] c"CF-L1-04 (nested_if_2): %d\0A\00"
@global_var_135c = local_unnamed_addr constant i32 7062
@global_var_2d0e = constant [31 x i8] c"CF-L1-05 (nested_if_deep): %d\0A\00"
@global_var_1360 = local_unnamed_addr constant i32 7069
@global_var_2d2d = constant [32 x i8] c"CF-L1-06 (if_elseif_chain): %d\0A\00"
@global_var_1364 = local_unnamed_addr constant i32 7077
@global_var_2d4d = constant [31 x i8] c"CF-L1-07 (if_elseif_long): %d\0A\00"
@global_var_1368 = local_unnamed_addr constant i32 7084
@global_var_2d6c = constant [29 x i8] c"CF-L1-08 (switch_small): %d\0A\00"
@global_var_136c = local_unnamed_addr constant i32 7089
@global_var_2d89 = constant [29 x i8] c"CF-L1-09 (switch_large): %d\0A\00"
@global_var_1370 = local_unnamed_addr constant i32 7094
@global_var_2da6 = constant [31 x i8] c"CF-L1-10 (switch_default): %d\0A\00"
@global_var_1374 = local_unnamed_addr constant i32 7101
@global_var_2dc5 = constant [35 x i8] c"CF-L1-11 (switch_fallthrough): %d\0A\00"
@global_var_1378 = local_unnamed_addr constant i32 7112
@global_var_2de8 = constant [31 x i8] c"CF-L1-12 (loop_for_fixed): %d\0A\00"
@global_var_3039 = constant [26 x i8] c"-10 (tail_recursion): %d\0A\00"
@global_var_137c = local_unnamed_addr constant i32 7115
@global_var_2e07 = constant [27 x i8] c"CF-L1-13 (loop_while): %d\0A\00"
@global_var_294 = global i32 1667194624
@global_var_1380 = local_unnamed_addr constant i32 7114
@global_var_2e22 = constant [29 x i8] c"CF-L1-14 (loop_dowhile): %d\0A\00"
@global_var_1384 = local_unnamed_addr constant i32 7115
@global_var_2e3f = constant [28 x i8] c"CF-L1-15 (loop_nested): %d\0A\00"
@global_var_1388 = local_unnamed_addr constant i32 7119
@global_var_2e5b = constant [27 x i8] c"CF-L1-16 (loop_break): %d\0A\00"
@global_var_138c = local_unnamed_addr constant i32 7098
@global_var_2e76 = constant [30 x i8] c"CF-L1-17 (loop_continue): %d\0A\00"
@global_var_1390 = local_unnamed_addr constant i32 7104
@global_var_2e94 = constant [29 x i8] c"CF-L1-18 (goto_forward): %d\0A\00"
@global_var_1394 = local_unnamed_addr constant i32 7085
@global_var_2eb1 = constant [30 x i8] c"CF-L1-19 (goto_backward): %d\0A\00"
@global_var_1398 = local_unnamed_addr constant i32 7087
@global_var_1480 = local_unnamed_addr constant i32 6272
@global_var_2c38 = local_unnamed_addr constant i32 1
@global_var_2c3c = local_unnamed_addr constant i32 2
@global_var_2c40 = local_unnamed_addr constant i32 3
@global_var_2c44 = local_unnamed_addr constant i32 4
@global_var_2c48 = local_unnamed_addr constant i32 5
@global_var_2c4c = local_unnamed_addr constant i32 6
@global_var_2c50 = local_unnamed_addr constant i32 7
@global_var_2c54 = local_unnamed_addr constant i32 8
@global_var_2c58 = local_unnamed_addr constant i32 9
@global_var_2c5c = local_unnamed_addr constant i32 10
@global_var_2c60 = local_unnamed_addr constant i32 11
@global_var_2c64 = local_unnamed_addr constant i32 12
@global_var_13ee4 = global i32 8788
@global_var_3e8 = global i32* @global_var_13ee4
@global_var_165c = constant i32 32
@global_var_1be0 = local_unnamed_addr constant i32 74576
@global_var_13ebc = local_unnamed_addr global i32 7144
@global_var_13ec0 = local_unnamed_addr global i32 7168
@global_var_13ec4 = local_unnamed_addr global i32 6504
@global_var_1be4 = local_unnamed_addr constant i32 74552
@global_var_1f30 = local_unnamed_addr constant i32 4630
@global_var_1f34 = local_unnamed_addr constant i32 4643
@global_var_2f0f = constant [32 x i8] c"CF-L2-01 (loop_multi_exit): %d\0A\00"
@global_var_1f38 = local_unnamed_addr constant i32 4639
@global_var_2f2f = constant [30 x i8] c"CF-L2-02 (infinite_loop): %d\0A\00"
@global_var_1f3c = local_unnamed_addr constant i32 4641
@global_var_2f4d = constant [29 x i8] c"CF-L2-03 (multi_return): %d\0A\00"
@global_var_1f40 = local_unnamed_addr constant i32 4594
@global_var_2f6a = constant [35 x i8] c"CF-L2-04 (conditional_return): %d\0A\00"
@global_var_1f44 = local_unnamed_addr constant i32 5280
@global_var_3240 = local_unnamed_addr constant i32 1
@global_var_3244 = local_unnamed_addr constant i32 2
@global_var_3248 = local_unnamed_addr constant i32 3
@global_var_324c = local_unnamed_addr constant i32 4
@global_var_3250 = local_unnamed_addr constant i32 5
@global_var_3254 = local_unnamed_addr constant i32 6
@global_var_3258 = local_unnamed_addr constant i32 7
@global_var_325c = local_unnamed_addr constant i32 8
@global_var_1f48 = local_unnamed_addr constant i32 4509
@global_var_2f8d = constant [29 x i8] c"CF-L2-05 (duffs_device): %d\0A\00"
@global_var_1f4c = local_unnamed_addr constant i32 4510
@global_var_2faa = constant [34 x i8] c"CF-L2-06 (loop_complex_cond): %d\0A\00"
@global_var_1f50 = local_unnamed_addr constant i32 4520
@global_var_2fcc = constant [32 x i8] c"CF-L2-07 (loop_modify_var): %d\0A\00"
@global_var_1f54 = local_unnamed_addr constant i32 4520
@global_var_2fec = constant [36 x i8] c"CF-L2-08 (loop_external_state): %d\0A\00"
@global_var_1f58 = local_unnamed_addr constant i32 4532
@global_var_3010 = constant [36 x i8] c"CF-L2-09 (recursion_factorial): %d\0A\00"
@global_var_1f5c = local_unnamed_addr constant i32 4540
@global_var_3034 = constant [31 x i8] c"CF-L2-10 (tail_recursion): %d\0A\00"
@global_var_1f60 = local_unnamed_addr constant i32 4543
@global_var_3053 = constant [35 x i8] c"CF-L2-11 (indirect_recursion): %d\0A\00"
@global_var_1f64 = local_unnamed_addr constant i32 -700
@global_var_1f68 = local_unnamed_addr constant i32 4542
@global_var_3076 = constant [30 x i8] c"CF-L2-12 (call_func_ptr): %d\0A\00"
@global_var_1f6c = local_unnamed_addr constant i32 4544
@global_var_3094 = constant [36 x i8] c"CF-L2-13 (call_func_ptr_array): %d\0A\00"
@global_var_1f70 = local_unnamed_addr constant i32 3428
@global_var_2c68 = local_unnamed_addr constant i32 1
@global_var_2c6c = local_unnamed_addr constant i32 2
@global_var_2c70 = local_unnamed_addr constant i32 3
@global_var_2c74 = local_unnamed_addr constant i32 4
@global_var_2c78 = local_unnamed_addr constant i32 5
@global_var_1f74 = local_unnamed_addr constant i32 4500
@global_var_30b8 = constant [38 x i8] c"CF-L2-15 (process_with_callback): %d\0A\00"
@global_var_200c = local_unnamed_addr constant i32 73916
@global_var_2010 = local_unnamed_addr constant i32 73876
@global_var_2014 = local_unnamed_addr constant i32 73844
@global_var_2108 = local_unnamed_addr constant i32 73264
@global_var_13ec8 = local_unnamed_addr global i32 8460
@global_var_13ecc = local_unnamed_addr global i32 8492
@global_var_13ed0 = local_unnamed_addr global i32 8524
@global_var_13ed4 = local_unnamed_addr global i32 8556
@global_var_13ed8 = local_unnamed_addr global i32 8640
@global_var_13edc = local_unnamed_addr global i32 8724
@global_var_13ee0 = local_unnamed_addr global i32 8756
@global_var_13ee8 = local_unnamed_addr global i32 8820
@global_var_13eec = local_unnamed_addr global i32 8852
@global_var_20f0 = local_unnamed_addr constant i32 -452263924
@global_var_2338 = local_unnamed_addr constant i32 -1788
@global_var_233c = local_unnamed_addr constant i32 -1796
@global_var_2340 = local_unnamed_addr constant i32 -2476
@global_var_2370 = constant i32 16
@global_var_24d4 = local_unnamed_addr constant i32 72344
@global_var_13ef4 = local_unnamed_addr global i32 9468
@global_var_13ef8 = local_unnamed_addr global i32 9556
@global_var_13efc = local_unnamed_addr global i32 9576
@global_var_24d8 = local_unnamed_addr constant i32 72312
@global_var_2640 = local_unnamed_addr constant i32 72036
@global_var_13f04 = local_unnamed_addr global i32 9736
@global_var_2608 = local_unnamed_addr constant i32 -476053494
@global_var_13f08 = local_unnamed_addr global i32 9748
@global_var_13f0c = local_unnamed_addr global i32 9760
@global_var_2644 = local_unnamed_addr constant i32 72004
@global_var_28d0 = local_unnamed_addr constant i32 2450
@global_var_28d4 = local_unnamed_addr constant i32 2459
@global_var_3103 = constant [31 x i8] c"CF-L3-01 (non_local_jump): %d\0A\00"
@global_var_28d8 = local_unnamed_addr constant i32 2438
@global_var_3122 = constant [30 x i8] c"CF-L3-02 (cpp_exception): %d\0A\00"
@global_var_28dc = local_unnamed_addr constant i32 2408
@global_var_3140 = constant [33 x i8] c"CF-L3-03 (large_jump_table): %d\0A\00"
@global_var_28e0 = local_unnamed_addr constant i32 2413
@global_var_3161 = constant [37 x i8] c"CF-L3-04 (conditional_func_ptr): %d\0A\00"
@global_var_28e4 = local_unnamed_addr constant i32 2418
@global_var_3186 = constant [30 x i8] c"CF-L3-05 (state_machine): %d\0A\00"
@global_var_28e8 = local_unnamed_addr constant i32 2416
@global_var_31a4 = constant [31 x i8] c"CF-L3-06 (fsm_func_table): %d\0A\00"
@global_var_28ec = local_unnamed_addr constant i32 2588
@global_var_a1c = local_unnamed_addr constant i32 -442695668
@global_var_2844 = local_unnamed_addr constant i32 -443342840
@global_var_28f0 = local_unnamed_addr constant i32 2556
@global_var_3260 = local_unnamed_addr constant i32 0
@global_var_28f4 = local_unnamed_addr constant i32 2375
@global_var_28f8 = local_unnamed_addr constant i32 2381
@global_var_31e1 = constant [30 x i8] c"CF-L3-08 (obfuscated_cf): %d\0A\00"
@global_var_28fc = local_unnamed_addr constant i32 2387
@global_var_2900 = local_unnamed_addr constant i32 2396
@global_var_3220 = constant [32 x i8] c"CF-L3-10 (overlapped_code): %d\0A\00"
@0 = external global i32
@global_var_14048 = external global i8*
@global_var_d18 = local_unnamed_addr constant i64 -2139825513434814873
@global_var_d74 = local_unnamed_addr constant i64 -2139825461895207321
@1 = internal constant [37 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\9F\BA\E7\A1\80\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\0A\00"
@global_var_2c7c = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @1, i32 0, i32 0)
@2 = internal constant [7 x i8] c"\EA\08\10\1B\E5\0D\00"
@global_var_1baf = constant i8* getelementptr inbounds ([7 x i8], [7 x i8]* @2, i32 0, i32 0)
@3 = internal constant [37 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\AB\98\E7\BA\A7\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\0A\00"
@global_var_2eea = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @3, i32 0, i32 0)
@global_var_14050 = global [8 x i32] zeroinitializer
@global_var_13ef0 = local_unnamed_addr global i32 (i32)* inttoptr (i32 9436 to i32 (i32)*)
@4 = internal constant [3 x i8] c"\FC%\00"
@global_var_13f00 = local_unnamed_addr global i8* getelementptr inbounds ([3 x i8], [3 x i8]* @4, i32 0, i32 0)
@5 = internal constant [37 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\9E\81\E7\AB\AF\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\0A\00"
@global_var_30de = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @5, i32 0, i32 0)
@6 = internal constant [3 x i8] c"\E3\03\00"
@global_var_947 = constant i8* getelementptr inbounds ([3 x i8], [3 x i8]* @6, i32 0, i32 0)
@7 = internal constant [3 x i8] c"\E3\04\00"
@global_var_953 = constant i8* getelementptr inbounds ([3 x i8], [3 x i8]* @7, i32 0, i32 0)

define i32 @_init(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_4b0:
  %0 = call i32 @call_weak_fn(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i32 @"$a"(i32 %sig) local_unnamed_addr {
dec_label_pc_4d0:
  %0 = call i32 @raise(i32 %sig), !insn.addr !2
  ret i32 %0, !insn.addr !2
}

define i32 @function_4dc(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_4dc:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define void @function_4e8(i32* %d) local_unnamed_addr {
dec_label_pc_4e8:
  call void @__cxa_finalize(i32* %d), !insn.addr !4
  ret void, !insn.addr !4
}

define i32 @function_4f4(i8* %format, ...) local_unnamed_addr {
dec_label_pc_4f4:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define void @function_500([1 x %__jmp_buf_tag] %env, i32 %val) local_unnamed_addr {
dec_label_pc_500:
  call void @longjmp([1 x %__jmp_buf_tag] %env, i32 %val), !insn.addr !6
  ret void, !insn.addr !6
}

define i32 @function_50c([1 x %__jmp_buf_tag] %env) local_unnamed_addr {
dec_label_pc_50c:
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] %env), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @function_518() local_unnamed_addr {
dec_label_pc_518:
  %0 = call i32 @__gmon_start__.2(), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define void @function_524() local_unnamed_addr {
dec_label_pc_524:
  call void @abort(), !insn.addr !9
  ret void, !insn.addr !9
}

define i32 @_start(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_530:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !10
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !10
  %2 = call i32 @__libc_start_main(i32 ptrtoint (i32* @global_var_2904 to i32), i32 %arg2, i8** nonnull %0, void ()* null, void ()* null, void ()* %1), !insn.addr !10
  call void @abort(), !insn.addr !11
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !11
}

define i32 @call_weak_fn() local_unnamed_addr {
dec_label_pc_574:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* @global_var_14034, align 4, !insn.addr !12
  %3 = icmp eq i32 %2, 0, !insn.addr !13
  br i1 %3, label %4, label %dec_label_pc_58c, !insn.addr !14

; <label>:4:                                      ; preds = %dec_label_pc_574
  ret i32 %1, !insn.addr !14

dec_label_pc_58c:                                 ; preds = %dec_label_pc_574
  %5 = call i32 @__gmon_start__.2(), !insn.addr !15
  ret i32 %5, !insn.addr !15
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_598:
  ret i32 ptrtoint (i8** @global_var_14048 to i32), !insn.addr !16
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_5dc:
  ret i32 ptrtoint (i8** @global_var_14048 to i32), !insn.addr !17
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_62c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i8, i8* bitcast (i8** @global_var_14048 to i8*), align 4, !insn.addr !18
  %3 = icmp eq i8 %2, 0, !insn.addr !19
  br i1 %3, label %dec_label_pc_648, label %4, !insn.addr !20

; <label>:4:                                      ; preds = %dec_label_pc_62c
  ret i32 %1, !insn.addr !20

dec_label_pc_648:                                 ; preds = %dec_label_pc_62c
  %5 = load i32, i32* @global_var_1402c, align 4, !insn.addr !21
  %6 = icmp eq i32 %5, 0, !insn.addr !22
  br i1 %6, label %dec_label_pc_668, label %dec_label_pc_65c, !insn.addr !23

dec_label_pc_65c:                                 ; preds = %dec_label_pc_648
  %7 = load i32, i32* inttoptr (i32 81988 to i32*), align 4, !insn.addr !24
  %8 = inttoptr i32 %7 to i32*, !insn.addr !25
  call void @__cxa_finalize(i32* %8), !insn.addr !25
  br label %dec_label_pc_668, !insn.addr !25

dec_label_pc_668:                                 ; preds = %dec_label_pc_65c, %dec_label_pc_648
  %9 = call i32 @deregister_tm_clones(), !insn.addr !26
  store i8 1, i8* bitcast (i8** @global_var_14048 to i8*), align 4, !insn.addr !27
  ret i32 %9, !insn.addr !28

; uselistorder directives
  uselistorder i8** @global_var_14048, { 1, 0 }
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_694:
  %0 = call i32 @register_tm_clones(), !insn.addr !29
  ret i32 %0, !insn.addr !29
}

define i32 @sequential_ops(i32 %a, i32 %b, i32 %c) local_unnamed_addr {
dec_label_pc_698:
  %0 = add i32 %b, %a, !insn.addr !30
  %1 = mul i32 %0, 2, !insn.addr !31
  %2 = sub i32 %1, %c, !insn.addr !32
  ret i32 %2, !insn.addr !33
}

define i32 @single_if(i32 %x) local_unnamed_addr {
dec_label_pc_6e0:
  %0 = icmp sgt i32 %x, 0, !insn.addr !34
  %1 = zext i1 %0 to i32
  %spec.select = shl i32 %x, %1
  ret i32 %spec.select, !insn.addr !35

; uselistorder directives
  uselistorder i32 %x, { 1, 0 }
}

define i32 @if_else(i32 %x) local_unnamed_addr {
dec_label_pc_714:
  %0 = icmp sgt i32 %x, 0, !insn.addr !36
  %storemerge = zext i1 %0 to i32
  ret i32 %storemerge, !insn.addr !37
}

define i32 @nested_if_2(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_750:
  %0 = icmp slt i32 %a, 1, !insn.addr !38
  br i1 %0, label %dec_label_pc_7a8, label %dec_label_pc_76c, !insn.addr !38

dec_label_pc_76c:                                 ; preds = %dec_label_pc_750
  %1 = icmp sgt i32 %b, 0, !insn.addr !39
  %2 = select i1 %1, i32 %b, i32 0
  %spec.select = add i32 %2, %a
  ret i32 %spec.select

dec_label_pc_7a8:                                 ; preds = %dec_label_pc_750
  ret i32 0, !insn.addr !40
}

define i32 @nested_if_deep(i32 %a, i32 %b, i32 %c, i32 %d, i32 %e) local_unnamed_addr {
dec_label_pc_7b4:
  %stack_var_-4.0.reg2mem = alloca i32, !insn.addr !41
  %0 = icmp slt i32 %a, 1, !insn.addr !42
  store i32 0, i32* %stack_var_-4.0.reg2mem, !insn.addr !42
  br i1 %0, label %dec_label_pc_864, label %dec_label_pc_7dc, !insn.addr !42

dec_label_pc_7dc:                                 ; preds = %dec_label_pc_7b4
  %1 = icmp slt i32 %b, 1, !insn.addr !43
  store i32 1, i32* %stack_var_-4.0.reg2mem, !insn.addr !43
  br i1 %1, label %dec_label_pc_864, label %dec_label_pc_7ec, !insn.addr !43

dec_label_pc_7ec:                                 ; preds = %dec_label_pc_7dc
  %2 = icmp slt i32 %c, 1, !insn.addr !44
  store i32 2, i32* %stack_var_-4.0.reg2mem, !insn.addr !44
  br i1 %2, label %dec_label_pc_864, label %dec_label_pc_7fc, !insn.addr !44

dec_label_pc_7fc:                                 ; preds = %dec_label_pc_7ec
  %3 = icmp slt i32 %d, 1, !insn.addr !45
  store i32 3, i32* %stack_var_-4.0.reg2mem, !insn.addr !45
  br i1 %3, label %dec_label_pc_864, label %dec_label_pc_80c, !insn.addr !45

dec_label_pc_80c:                                 ; preds = %dec_label_pc_7fc
  %4 = icmp slt i32 %e, 1, !insn.addr !46
  %. = select i1 %4, i32 4, i32 5
  store i32 %., i32* %stack_var_-4.0.reg2mem, !insn.addr !47
  br label %dec_label_pc_864, !insn.addr !47

dec_label_pc_864:                                 ; preds = %dec_label_pc_7b4, %dec_label_pc_7dc, %dec_label_pc_7ec, %dec_label_pc_7fc, %dec_label_pc_80c
  %stack_var_-4.0.reload = load i32, i32* %stack_var_-4.0.reg2mem
  ret i32 %stack_var_-4.0.reload, !insn.addr !48

; uselistorder directives
  uselistorder i32* %stack_var_-4.0.reg2mem, { 0, 5, 4, 3, 2, 1 }
  uselistorder label %dec_label_pc_864, { 4, 3, 2, 1, 0 }
}

define i32 @if_elseif_chain(i32 %x) local_unnamed_addr {
dec_label_pc_870:
  %stack_var_-4.0.reg2mem = alloca i32, !insn.addr !49
  store i32 10, i32* %stack_var_-4.0.reg2mem
  switch i32 %x, label %dec_label_pc_8cc [
    i32 0, label %dec_label_pc_8d8
    i32 1, label %dec_label_pc_8a4
    i32 2, label %dec_label_pc_8c0
  ]

dec_label_pc_8a4:                                 ; preds = %dec_label_pc_870
  store i32 20, i32* %stack_var_-4.0.reg2mem, !insn.addr !50
  br label %dec_label_pc_8d8, !insn.addr !50

dec_label_pc_8c0:                                 ; preds = %dec_label_pc_870
  store i32 30, i32* %stack_var_-4.0.reg2mem, !insn.addr !51
  br label %dec_label_pc_8d8, !insn.addr !51

dec_label_pc_8cc:                                 ; preds = %dec_label_pc_870
  store i32 -1, i32* %stack_var_-4.0.reg2mem, !insn.addr !52
  br label %dec_label_pc_8d8, !insn.addr !52

dec_label_pc_8d8:                                 ; preds = %dec_label_pc_870, %dec_label_pc_8cc, %dec_label_pc_8c0, %dec_label_pc_8a4
  %stack_var_-4.0.reload = load i32, i32* %stack_var_-4.0.reg2mem
  ret i32 %stack_var_-4.0.reload, !insn.addr !53

; uselistorder directives
  uselistorder i32* %stack_var_-4.0.reg2mem, { 0, 2, 3, 4, 1 }
  uselistorder label %dec_label_pc_8d8, { 1, 2, 3, 0 }
}

define i32 @if_elseif_long(i32 %x) local_unnamed_addr {
dec_label_pc_8e4:
  %stack_var_-4.0.reg2mem = alloca i32, !insn.addr !54
  store i32 100, i32* %stack_var_-4.0.reg2mem
  switch i32 %x, label %dec_label_pc_978 [
    i32 0, label %dec_label_pc_984
    i32 1, label %dec_label_pc_918
    i32 2, label %dec_label_pc_934
    i32 3, label %dec_label_pc_950
    i32 4, label %dec_label_pc_96c
  ]

dec_label_pc_918:                                 ; preds = %dec_label_pc_8e4
  store i32 200, i32* %stack_var_-4.0.reg2mem, !insn.addr !55
  br label %dec_label_pc_984, !insn.addr !55

dec_label_pc_934:                                 ; preds = %dec_label_pc_8e4
  store i32 300, i32* %stack_var_-4.0.reg2mem, !insn.addr !56
  br label %dec_label_pc_984, !insn.addr !56

dec_label_pc_950:                                 ; preds = %dec_label_pc_8e4
  store i32 ptrtoint (i32* @global_var_190 to i32), i32* %stack_var_-4.0.reg2mem, !insn.addr !57
  br label %dec_label_pc_984, !insn.addr !57

dec_label_pc_96c:                                 ; preds = %dec_label_pc_8e4
  store i32 ptrtoint (i32* @global_var_1f4 to i32), i32* %stack_var_-4.0.reg2mem, !insn.addr !58
  br label %dec_label_pc_984, !insn.addr !58

dec_label_pc_978:                                 ; preds = %dec_label_pc_8e4
  store i32 -1, i32* %stack_var_-4.0.reg2mem, !insn.addr !59
  br label %dec_label_pc_984, !insn.addr !59

dec_label_pc_984:                                 ; preds = %dec_label_pc_8e4, %dec_label_pc_978, %dec_label_pc_96c, %dec_label_pc_950, %dec_label_pc_934, %dec_label_pc_918
  %stack_var_-4.0.reload = load i32, i32* %stack_var_-4.0.reg2mem
  ret i32 %stack_var_-4.0.reload, !insn.addr !60

; uselistorder directives
  uselistorder i32* %stack_var_-4.0.reg2mem, { 0, 2, 3, 4, 5, 6, 1 }
  uselistorder label %dec_label_pc_984, { 1, 2, 3, 4, 5, 0 }
}

define i32 @switch_small(i32 %op) local_unnamed_addr {
dec_label_pc_990:
  %0 = icmp ult i32 %op, 3, !insn.addr !61
  %1 = icmp ne i1 %0, true, !insn.addr !61
  %2 = icmp eq i32 %op, 3, !insn.addr !61
  %3 = icmp ne i1 %2, true, !insn.addr !62
  %4 = icmp eq i1 %1, %3, !insn.addr !62
  %spec.select = select i1 %4, i32 -1, i32 ptrtoint (i32* @global_var_9d0 to i32)
  ret i32 %spec.select, !insn.addr !63

; uselistorder directives
  uselistorder i32 %op, { 1, 0 }
}

define i32 @switch_large(i32 %op) local_unnamed_addr {
dec_label_pc_a4c:
  %0 = icmp ult i32 %op, 9, !insn.addr !64
  %1 = icmp ne i1 %0, true, !insn.addr !64
  %2 = icmp eq i32 %op, 9, !insn.addr !64
  %3 = icmp ne i1 %2, true, !insn.addr !65
  %4 = icmp eq i1 %1, %3, !insn.addr !65
  %spec.select = select i1 %4, i32 -1, i32 ptrtoint (i32* @global_var_a74 to i32)
  ret i32 %spec.select, !insn.addr !66

; uselistorder directives
  uselistorder i32 9, { 1, 2, 0 }
  uselistorder i32 %op, { 1, 0 }
}

define i32 @switch_default(i32 %op) local_unnamed_addr {
dec_label_pc_b2c:
  %stack_var_-4.0.reg2mem = alloca i32, !insn.addr !67
  store i32 100, i32* %stack_var_-4.0.reg2mem
  switch i32 %op, label %dec_label_pc_b8c [
    i32 1, label %dec_label_pc_b98
    i32 2, label %dec_label_pc_b74
    i32 3, label %dec_label_pc_b80
  ]

dec_label_pc_b74:                                 ; preds = %dec_label_pc_b2c
  store i32 200, i32* %stack_var_-4.0.reg2mem, !insn.addr !68
  br label %dec_label_pc_b98, !insn.addr !68

dec_label_pc_b80:                                 ; preds = %dec_label_pc_b2c
  store i32 300, i32* %stack_var_-4.0.reg2mem, !insn.addr !69
  br label %dec_label_pc_b98, !insn.addr !69

dec_label_pc_b8c:                                 ; preds = %dec_label_pc_b2c
  store i32 0, i32* %stack_var_-4.0.reg2mem, !insn.addr !70
  br label %dec_label_pc_b98, !insn.addr !70

dec_label_pc_b98:                                 ; preds = %dec_label_pc_b2c, %dec_label_pc_b8c, %dec_label_pc_b80, %dec_label_pc_b74
  %stack_var_-4.0.reload = load i32, i32* %stack_var_-4.0.reg2mem
  ret i32 %stack_var_-4.0.reload, !insn.addr !71

; uselistorder directives
  uselistorder i32* %stack_var_-4.0.reg2mem, { 0, 2, 3, 4, 1 }
  uselistorder label %dec_label_pc_b98, { 1, 2, 3, 0 }
}

define i32 @switch_fallthrough(i32 %op) local_unnamed_addr {
dec_label_pc_ba4:
  %storemerge.reg2mem = alloca i32, !insn.addr !72
  %result_-8.1.reg2mem = alloca i32, !insn.addr !72
  %result_-8.0.reg2mem = alloca i32, !insn.addr !72
  store i32 0, i32* %result_-8.0.reg2mem
  store i32 0, i32* %result_-8.1.reg2mem
  store i32 -1, i32* %storemerge.reg2mem
  switch i32 %op, label %dec_label_pc_c30 [
    i32 1, label %dec_label_pc_c10
    i32 2, label %dec_label_pc_bfc
    i32 3, label %dec_label_pc_be8
  ]

dec_label_pc_be8:                                 ; preds = %dec_label_pc_ba4
  store i32 12, i32* %result_-8.0.reg2mem, !insn.addr !73
  br label %dec_label_pc_bfc, !insn.addr !73

dec_label_pc_bfc:                                 ; preds = %dec_label_pc_ba4, %dec_label_pc_be8
  %result_-8.0.reload = load i32, i32* %result_-8.0.reg2mem
  %0 = mul i32 %op, 2, !insn.addr !74
  %1 = add i32 %result_-8.0.reload, %0, !insn.addr !74
  store i32 %1, i32* %result_-8.1.reg2mem, !insn.addr !75
  br label %dec_label_pc_c10, !insn.addr !75

dec_label_pc_c10:                                 ; preds = %dec_label_pc_ba4, %dec_label_pc_bfc
  %result_-8.1.reload = load i32, i32* %result_-8.1.reg2mem
  %2 = add i32 %result_-8.1.reload, %op, !insn.addr !76
  store i32 %2, i32* %storemerge.reg2mem, !insn.addr !77
  br label %dec_label_pc_c30, !insn.addr !77

dec_label_pc_c30:                                 ; preds = %dec_label_pc_ba4, %dec_label_pc_c10
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !78

; uselistorder directives
  uselistorder i32* %result_-8.0.reg2mem, { 0, 2, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %op, { 1, 0, 2 }
  uselistorder label %dec_label_pc_c30, { 1, 0 }
  uselistorder label %dec_label_pc_c10, { 1, 0 }
  uselistorder label %dec_label_pc_bfc, { 1, 0 }
}

define i32 @loop_for_fixed(i32 %n) local_unnamed_addr {
dec_label_pc_c3c:
  %sum_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !79
  %0 = icmp sgt i32 %n, 0, !insn.addr !80
  store i32 0, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !80
  br i1 %0, label %dec_label_pc_c68.lr.ph, label %dec_label_pc_c8c, !insn.addr !80

dec_label_pc_c68.lr.ph:                           ; preds = %dec_label_pc_c3c
  %1 = add i32 %n, -1
  %2 = zext i32 %1 to i33
  %3 = add i32 %n, -2
  %4 = zext i32 %3 to i33
  %5 = mul i33 %2, %4
  %6 = udiv i33 %5, 2
  %7 = trunc i33 %6 to i32
  %8 = add i32 %1, %7
  store i32 %8, i32* %sum_-8.0.lcssa.reg2mem
  br label %dec_label_pc_c8c

dec_label_pc_c8c:                                 ; preds = %dec_label_pc_c68.lr.ph, %dec_label_pc_c3c
  %sum_-8.0.lcssa.reload = load i32, i32* %sum_-8.0.lcssa.reg2mem
  ret i32 %sum_-8.0.lcssa.reload, !insn.addr !81

; uselistorder directives
  uselistorder i32* %sum_-8.0.lcssa.reg2mem, { 0, 2, 1 }
}

define i32 @loop_while(i32 %x) local_unnamed_addr {
dec_label_pc_c98:
  %stack_var_-4.02.reg2mem = alloca i32, !insn.addr !82
  %storemerge3.reg2mem = alloca i32, !insn.addr !82
  %0 = icmp eq i32 %x, 0, !insn.addr !83
  store i32 0, i32* %storemerge3.reg2mem, !insn.addr !84
  store i32 %x, i32* %stack_var_-4.02.reg2mem, !insn.addr !84
  br i1 %0, label %dec_label_pc_ce4.thread, label %dec_label_pc_cbc, !insn.addr !84

dec_label_pc_cbc:                                 ; preds = %dec_label_pc_c98, %dec_label_pc_cbc
  %stack_var_-4.02.reload = load i32, i32* %stack_var_-4.02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %1 = sext i32 %stack_var_-4.02.reload to i64, !insn.addr !85
  %2 = mul nsw i64 %1, 1717986919, !insn.addr !85
  %3 = udiv i64 %2, 4294967296, !insn.addr !85
  %4 = trunc i64 %3 to i32, !insn.addr !85
  %5 = ashr i32 %4, 2, !insn.addr !86
  %6 = lshr i64 %2, 63
  %7 = trunc i64 %6 to i32, !insn.addr !87
  %8 = add nsw i32 %5, %7, !insn.addr !87
  %9 = add i32 %storemerge3.reload, 1, !insn.addr !88
  %10 = icmp eq i32 %8, 0, !insn.addr !83
  store i32 %9, i32* %storemerge3.reg2mem, !insn.addr !84
  store i32 %8, i32* %stack_var_-4.02.reg2mem, !insn.addr !84
  br i1 %10, label %dec_label_pc_ce4, label %dec_label_pc_cbc, !insn.addr !84

dec_label_pc_ce4:                                 ; preds = %dec_label_pc_cbc
  %11 = icmp sgt i32 %9, 1
  %spec.select = select i1 %11, i32 %9, i32 1
  ret i32 %spec.select

dec_label_pc_ce4.thread:                          ; preds = %dec_label_pc_c98
  ret i32 1, !insn.addr !89

; uselistorder directives
  uselistorder i32 %9, { 1, 2, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i32* %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-4.02.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_cbc, { 1, 0 }
}

define i32 @loop_dowhile(i32 %x) local_unnamed_addr {
dec_label_pc_d1c:
  %stack_var_-4.0.reg2mem = alloca i32, !insn.addr !90
  %stack_var_-8.0.reg2mem = alloca i32, !insn.addr !90
  store i32 0, i32* %stack_var_-8.0.reg2mem, !insn.addr !91
  store i32 %x, i32* %stack_var_-4.0.reg2mem, !insn.addr !91
  br label %dec_label_pc_d30, !insn.addr !91

dec_label_pc_d30:                                 ; preds = %dec_label_pc_d30, %dec_label_pc_d1c
  %stack_var_-4.0.reload = load i32, i32* %stack_var_-4.0.reg2mem
  %stack_var_-8.0.reload = load i32, i32* %stack_var_-8.0.reg2mem
  %0 = sext i32 %stack_var_-4.0.reload to i64, !insn.addr !92
  %1 = mul nsw i64 %0, 1717986919, !insn.addr !92
  %2 = udiv i64 %1, 4294967296, !insn.addr !92
  %3 = trunc i64 %2 to i32, !insn.addr !92
  %4 = ashr i32 %3, 2, !insn.addr !93
  %5 = lshr i64 %1, 63
  %6 = trunc i64 %5 to i32, !insn.addr !94
  %7 = add nsw i32 %4, %6, !insn.addr !94
  %8 = add i32 %stack_var_-8.0.reload, 1, !insn.addr !95
  %9 = icmp eq i32 %7, 0, !insn.addr !96
  store i32 %8, i32* %stack_var_-8.0.reg2mem, !insn.addr !97
  store i32 %7, i32* %stack_var_-4.0.reg2mem, !insn.addr !97
  br i1 %9, label %dec_label_pc_d68, label %dec_label_pc_d30, !insn.addr !97

dec_label_pc_d68:                                 ; preds = %dec_label_pc_d30
  ret i32 %8, !insn.addr !98

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i32* %stack_var_-8.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-4.0.reg2mem, { 1, 0, 2 }
}

define i32 @loop_nested(i32 %m, i32 %n) local_unnamed_addr {
dec_label_pc_d78:
  %total_-12.0.lcssa.reg2mem = alloca i32, !insn.addr !99
  %0 = icmp sgt i32 %m, 0, !insn.addr !100
  store i32 0, i32* %total_-12.0.lcssa.reg2mem, !insn.addr !100
  br i1 %0, label %dec_label_pc_db4.preheader.lr.ph, label %dec_label_pc_dfc, !insn.addr !100

dec_label_pc_db4.preheader.lr.ph:                 ; preds = %dec_label_pc_d78
  %1 = icmp sgt i32 %n, 0
  %smax = select i1 %1, i32 %n, i32 0
  %2 = mul i32 %smax, %m
  store i32 %2, i32* %total_-12.0.lcssa.reg2mem
  br label %dec_label_pc_dfc

dec_label_pc_dfc:                                 ; preds = %dec_label_pc_db4.preheader.lr.ph, %dec_label_pc_d78
  %total_-12.0.lcssa.reload = load i32, i32* %total_-12.0.lcssa.reg2mem
  ret i32 %total_-12.0.lcssa.reload, !insn.addr !101

; uselistorder directives
  uselistorder i32* %total_-12.0.lcssa.reg2mem, { 0, 2, 1 }
}

define i32 @loop_break(i32 %target) local_unnamed_addr {
dec_label_pc_e08:
  %storemerge1.reg2mem = alloca i32, !insn.addr !102
  %storemerge2.reg2mem = alloca i32, !insn.addr !102
  %arr_-44 = alloca [1 x i32], align 4
  store [1 x i32] [i32 10], [1 x i32]* %arr_-44, align 4, !insn.addr !103
  %0 = ptrtoint [1 x i32]* %arr_-44 to i32
  store i32 0, i32* %storemerge2.reg2mem
  br label %dec_label_pc_e54

dec_label_pc_e54:                                 ; preds = %dec_label_pc_e08, %dec_label_pc_e80
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %1 = mul i32 %storemerge2.reload, 4, !insn.addr !104
  %2 = add i32 %1, %0, !insn.addr !104
  %3 = inttoptr i32 %2 to i32*, !insn.addr !104
  %4 = load i32, i32* %3, align 4, !insn.addr !104
  %5 = icmp eq i32 %4, %target, !insn.addr !105
  store i32 %storemerge2.reload, i32* %storemerge1.reg2mem, !insn.addr !106
  br i1 %5, label %dec_label_pc_e9c, label %dec_label_pc_e80, !insn.addr !106

dec_label_pc_e80:                                 ; preds = %dec_label_pc_e54
  %6 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !107
  %7 = icmp ult i32 %6, 5, !insn.addr !108
  store i32 %6, i32* %storemerge2.reg2mem, !insn.addr !108
  store i32 -1, i32* %storemerge1.reg2mem, !insn.addr !108
  br i1 %7, label %dec_label_pc_e54, label %dec_label_pc_e9c, !insn.addr !108

dec_label_pc_e9c:                                 ; preds = %dec_label_pc_e54, %dec_label_pc_e80
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  ret i32 %storemerge1.reload, !insn.addr !109

; uselistorder directives
  uselistorder i32 %storemerge2.reload, { 1, 0, 2 }
  uselistorder i32* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge1.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_e9c, { 1, 0 }
  uselistorder label %dec_label_pc_e54, { 1, 0 }
}

define i32 @loop_continue(i32 %n) local_unnamed_addr {
dec_label_pc_eb0:
  %sum_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !110
  %sum_-8.01.reg2mem = alloca i32, !insn.addr !110
  %storemerge2.reg2mem = alloca i32, !insn.addr !110
  %0 = icmp slt i32 %n, 1, !insn.addr !111
  store i32 1, i32* %storemerge2.reg2mem, !insn.addr !111
  store i32 0, i32* %sum_-8.01.reg2mem, !insn.addr !111
  store i32 0, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !111
  br i1 %0, label %dec_label_pc_f24, label %dec_label_pc_ee0, !insn.addr !111

dec_label_pc_ee0:                                 ; preds = %dec_label_pc_eb0, %dec_label_pc_ee0
  %sum_-8.01.reload = load i32, i32* %sum_-8.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %1 = icmp slt i32 %storemerge2.reload, 0
  %2 = zext i1 %1 to i32, !insn.addr !112
  %3 = add i32 %storemerge2.reload, %2, !insn.addr !112
  %4 = and i32 %3, -2, !insn.addr !113
  %5 = icmp eq i32 %storemerge2.reload, %4, !insn.addr !114
  %6 = select i1 %5, i32 0, i32 %storemerge2.reload
  %spec.select = add i32 %6, %sum_-8.01.reload
  %7 = add i32 %storemerge2.reload, 1, !insn.addr !115
  %8 = icmp sgt i32 %7, %n, !insn.addr !111
  store i32 %7, i32* %storemerge2.reg2mem, !insn.addr !111
  store i32 %spec.select, i32* %sum_-8.01.reg2mem, !insn.addr !111
  store i32 %spec.select, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !111
  br i1 %8, label %dec_label_pc_f24, label %dec_label_pc_ee0, !insn.addr !111

dec_label_pc_f24:                                 ; preds = %dec_label_pc_ee0, %dec_label_pc_eb0
  %sum_-8.0.lcssa.reload = load i32, i32* %sum_-8.0.lcssa.reg2mem
  ret i32 %sum_-8.0.lcssa.reload, !insn.addr !116

; uselistorder directives
  uselistorder i32 %storemerge2.reload, { 1, 0, 2, 4, 3 }
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sum_-8.01.reg2mem, { 2, 0, 1 }
  uselistorder i32 %n, { 1, 0 }
  uselistorder label %dec_label_pc_ee0, { 1, 0 }
}

define i32 @goto_forward(i32 %x) local_unnamed_addr {
dec_label_pc_f30:
  %0 = icmp sgt i32 %x, 1
  %1 = select i1 %0, i32 %x, i32 1
  %stack_var_-8.0 = mul i32 %x, 2
  %2 = mul i32 %stack_var_-8.0, %1, !insn.addr !117
  ret i32 %2, !insn.addr !118
}

define i32 @goto_backward(i32 %x) local_unnamed_addr {
dec_label_pc_f80:
  %storemerge.reg2mem = alloca i32, !insn.addr !119
  %result_-12.02.reg2mem = alloca i32, !insn.addr !119
  %storemerge13.reg2mem = alloca i32, !insn.addr !119
  %0 = icmp sgt i32 %x, 0, !insn.addr !120
  store i32 1, i32* %storemerge13.reg2mem, !insn.addr !120
  store i32 1, i32* %result_-12.02.reg2mem, !insn.addr !120
  store i32 1, i32* %storemerge.reg2mem, !insn.addr !120
  br i1 %0, label %dec_label_pc_fcc, label %dec_label_pc_ff8, !insn.addr !120

dec_label_pc_fcc:                                 ; preds = %dec_label_pc_f80, %dec_label_pc_fcc
  %result_-12.02.reload = load i32, i32* %result_-12.02.reg2mem
  %storemerge13.reload = load i32, i32* %storemerge13.reg2mem
  %1 = mul i32 %result_-12.02.reload, %storemerge13.reload, !insn.addr !121
  %2 = add i32 %storemerge13.reload, 1, !insn.addr !122
  %3 = icmp sgt i32 %2, %x, !insn.addr !123
  store i32 %2, i32* %storemerge13.reg2mem, !insn.addr !123
  store i32 %1, i32* %result_-12.02.reg2mem, !insn.addr !123
  store i32 %1, i32* %storemerge.reg2mem, !insn.addr !123
  br i1 %3, label %dec_label_pc_ff8, label %dec_label_pc_fcc, !insn.addr !123

dec_label_pc_ff8:                                 ; preds = %dec_label_pc_fcc, %dec_label_pc_f80
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !124

; uselistorder directives
  uselistorder i32* %storemerge13.reg2mem, { 2, 0, 1 }
  uselistorder i32* %result_-12.02.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_fcc, { 1, 0 }
}

define i32 @ternary_op(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_1004:
  %0 = icmp sgt i32 %a, %b, !insn.addr !125
  %storemerge = select i1 %0, i32 %a, i32 %b
  ret i32 %storemerge, !insn.addr !126
}

define void @test_control_flow_l1() local_unnamed_addr {
dec_label_pc_1048:
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2c7c to i8*)), !insn.addr !127
  %1 = call i32 @sequential_ops(i32 5, i32 7, i32 3), !insn.addr !128
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_2ca1, i32 0, i32 0), i32 %1), !insn.addr !129
  %3 = call i32 @single_if(i32 10), !insn.addr !130
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_2cc0, i32 0, i32 0), i32 %3), !insn.addr !131
  %5 = call i32 @single_if(i32 -5), !insn.addr !132
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_2cc0, i32 0, i32 0), i32 %5), !insn.addr !133
  %7 = call i32 @if_else(i32 5), !insn.addr !134
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_2cda, i32 0, i32 0), i32 %7), !insn.addr !135
  %9 = call i32 @if_else(i32 -3), !insn.addr !136
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_2cda, i32 0, i32 0), i32 %9), !insn.addr !137
  %11 = call i32 @nested_if_2(i32 10, i32 5), !insn.addr !138
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_2cf2, i32 0, i32 0), i32 %11), !insn.addr !139
  %13 = call i32 @nested_if_2(i32 10, i32 -5), !insn.addr !140
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_2cf2, i32 0, i32 0), i32 %13), !insn.addr !141
  %15 = call i32 @nested_if_2(i32 -10, i32 5), !insn.addr !142
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_2cf2, i32 0, i32 0), i32 %15), !insn.addr !143
  %17 = call i32 @nested_if_deep(i32 1, i32 1, i32 1, i32 1, i32 1), !insn.addr !144
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_2d0e, i32 0, i32 0), i32 %17), !insn.addr !145
  %19 = call i32 @if_elseif_chain(i32 1), !insn.addr !146
  %20 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_2d2d, i32 0, i32 0), i32 %19), !insn.addr !147
  %21 = call i32 @if_elseif_long(i32 3), !insn.addr !148
  %22 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_2d4d, i32 0, i32 0), i32 %21), !insn.addr !149
  %23 = call i32 @switch_small(i32 2), !insn.addr !150
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2d6c, i32 0, i32 0), i32 %23), !insn.addr !151
  %25 = call i32 @switch_large(i32 7), !insn.addr !152
  %26 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2d89, i32 0, i32 0), i32 %25), !insn.addr !153
  %27 = call i32 @switch_default(i32 5), !insn.addr !154
  %28 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_2da6, i32 0, i32 0), i32 %27), !insn.addr !155
  %29 = call i32 @switch_fallthrough(i32 3), !insn.addr !156
  %30 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_2dc5, i32 0, i32 0), i32 %29), !insn.addr !157
  %31 = call i32 @loop_for_fixed(i32 10), !insn.addr !158
  %32 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_2de8, i32 0, i32 0), i32 %31), !insn.addr !159
  %33 = call i32 @loop_while(i32 ptrtoint ([26 x i8]* @global_var_3039 to i32)), !insn.addr !160
  %34 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_2e07, i32 0, i32 0), i32 %33), !insn.addr !161
  %35 = call i32 @loop_dowhile(i32 or (i32 ptrtoint (i32* @global_var_294 to i32), i32 9216)), !insn.addr !162
  %36 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2e22, i32 0, i32 0), i32 %35), !insn.addr !163
  %37 = call i32 @loop_nested(i32 3, i32 4), !insn.addr !164
  %38 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_2e3f, i32 0, i32 0), i32 %37), !insn.addr !165
  %39 = call i32 @loop_break(i32 30), !insn.addr !166
  %40 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_2e5b, i32 0, i32 0), i32 %39), !insn.addr !167
  %41 = call i32 @loop_break(i32 99), !insn.addr !168
  %42 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_2e5b, i32 0, i32 0), i32 %41), !insn.addr !169
  %43 = call i32 @loop_continue(i32 10), !insn.addr !170
  %44 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2e76, i32 0, i32 0), i32 %43), !insn.addr !171
  %45 = call i32 @goto_forward(i32 5), !insn.addr !172
  %46 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2e94, i32 0, i32 0), i32 %45), !insn.addr !173
  %47 = call i32 @goto_forward(i32 -3), !insn.addr !174
  %48 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2e94, i32 0, i32 0), i32 %47), !insn.addr !175
  %49 = call i32 @goto_backward(i32 5), !insn.addr !176
  %50 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2eb1, i32 0, i32 0), i32 %49), !insn.addr !177
  %51 = call i32 @ternary_op(i32 10, i32 5), !insn.addr !178
  %52 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_1baf to i32), i32 4896) to i8*)), !insn.addr !179
  %53 = call i32 @ternary_op(i32 3, i32 8), !insn.addr !180
  %54 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_1baf to i32), i32 4896) to i8*)), !insn.addr !181
  ret void, !insn.addr !182

; uselistorder directives
  uselistorder i32 (i32, i32)* @ternary_op, { 1, 0 }
  uselistorder i32 (i32)* @goto_forward, { 1, 0 }
  uselistorder i32 (i32)* @loop_break, { 1, 0 }
  uselistorder i32 30, { 1, 0, 2 }
  uselistorder i32 (i32, i32)* @nested_if_2, { 2, 1, 0 }
  uselistorder i32 (i32)* @if_else, { 1, 0 }
  uselistorder i32 (i32)* @single_if, { 1, 0 }
}

define i32 @loop_multi_exit(i32 %target) local_unnamed_addr {
dec_label_pc_139c:
  %storemerge2.reg2mem = alloca i32, !insn.addr !183
  %storemerge5.reg2mem = alloca i32, !insn.addr !183
  %storemerge16.reg2mem = alloca i32, !insn.addr !183
  %matrix_-72 = alloca [1 x [1 x i32]], align 4
  store [1 x [1 x i32]] [[1 x i32] [i32 1]], [1 x [1 x i32]]* %matrix_-72, align 4, !insn.addr !184
  %0 = ptrtoint [1 x [1 x i32]]* %matrix_-72 to i32, !insn.addr !185
  store i32 0, i32* %storemerge16.reg2mem
  br label %dec_label_pc_13f0.preheader

dec_label_pc_13f0.preheader:                      ; preds = %dec_label_pc_139c, %dec_label_pc_1454
  %storemerge16.reload = load i32, i32* %storemerge16.reg2mem
  %1 = mul i32 %storemerge16.reload, 16, !insn.addr !186
  %2 = add i32 %1, %0, !insn.addr !186
  store i32 0, i32* %storemerge5.reg2mem
  br label %dec_label_pc_1400

dec_label_pc_1400:                                ; preds = %dec_label_pc_13f0.preheader, %dec_label_pc_1440
  %storemerge5.reload = load i32, i32* %storemerge5.reg2mem
  %3 = mul i32 %storemerge5.reload, 4, !insn.addr !187
  %4 = add i32 %2, %3, !insn.addr !187
  %5 = inttoptr i32 %4 to i32*, !insn.addr !187
  %6 = load i32, i32* %5, align 4, !insn.addr !187
  %7 = icmp eq i32 %6, %target, !insn.addr !188
  br i1 %7, label %dec_label_pc_1424, label %dec_label_pc_1440, !insn.addr !189

dec_label_pc_1424:                                ; preds = %dec_label_pc_1400
  %8 = mul i32 %storemerge16.reload, 10, !insn.addr !190
  %9 = add i32 %storemerge5.reload, %8, !insn.addr !190
  store i32 %9, i32* %storemerge2.reg2mem, !insn.addr !191
  br label %dec_label_pc_1470, !insn.addr !191

dec_label_pc_1440:                                ; preds = %dec_label_pc_1400
  %10 = add nuw nsw i32 %storemerge5.reload, 1, !insn.addr !192
  %11 = icmp ugt i32 %storemerge5.reload, 2, !insn.addr !193
  store i32 %10, i32* %storemerge5.reg2mem, !insn.addr !193
  br i1 %11, label %dec_label_pc_1454, label %dec_label_pc_1400, !insn.addr !193

dec_label_pc_1454:                                ; preds = %dec_label_pc_1440
  %12 = add nuw nsw i32 %storemerge16.reload, 1, !insn.addr !194
  %13 = icmp ugt i32 %storemerge16.reload, 1, !insn.addr !195
  store i32 %12, i32* %storemerge16.reg2mem, !insn.addr !195
  store i32 -1, i32* %storemerge2.reg2mem, !insn.addr !195
  br i1 %13, label %dec_label_pc_1470, label %dec_label_pc_13f0.preheader, !insn.addr !195

dec_label_pc_1470:                                ; preds = %dec_label_pc_1454, %dec_label_pc_1424
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  ret i32 %storemerge2.reload, !insn.addr !196

; uselistorder directives
  uselistorder i32 %storemerge5.reload, { 1, 0, 2, 3 }
  uselistorder i32 %storemerge16.reload, { 1, 0, 2, 3 }
  uselistorder i32* %storemerge16.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge5.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1400, { 1, 0 }
  uselistorder label %dec_label_pc_13f0.preheader, { 1, 0 }
}

define i32 @infinite_loop(i32* %flag) local_unnamed_addr {
dec_label_pc_1484:
  %stack_var_-8.1.reg2mem = alloca i32, !insn.addr !197
  %stack_var_-8.0.reg2mem = alloca i32, !insn.addr !197
  %0 = icmp eq i32* %flag, inttoptr (i32 1 to i32*), !insn.addr !198
  store i32 0, i32* %stack_var_-8.0.reg2mem, !insn.addr !199
  br label %dec_label_pc_1498, !insn.addr !199

dec_label_pc_1498:                                ; preds = %dec_label_pc_14b0, %dec_label_pc_1484
  store i32 0, i32* %stack_var_-8.1.reg2mem, !insn.addr !200
  br i1 %0, label %dec_label_pc_14e0, label %dec_label_pc_14b0, !insn.addr !200

dec_label_pc_14b0:                                ; preds = %dec_label_pc_1498
  %stack_var_-8.0.reload = load i32, i32* %stack_var_-8.0.reg2mem
  %1 = add nuw nsw i32 %stack_var_-8.0.reload, 1, !insn.addr !201
  %2 = icmp slt i32 %stack_var_-8.0.reload, ptrtoint (i32** @global_var_3e8 to i32), !insn.addr !202
  store i32 %1, i32* %stack_var_-8.0.reg2mem, !insn.addr !202
  br i1 %2, label %dec_label_pc_1498, label %dec_label_pc_14cc, !insn.addr !202

dec_label_pc_14cc:                                ; preds = %dec_label_pc_14b0
  store i32 1, i32* %flag, align 4, !insn.addr !203
  store i32 %1, i32* %stack_var_-8.1.reg2mem, !insn.addr !204
  br label %dec_label_pc_14e0, !insn.addr !204

dec_label_pc_14e0:                                ; preds = %dec_label_pc_1498, %dec_label_pc_14cc
  %stack_var_-8.1.reload = load i32, i32* %stack_var_-8.1.reg2mem
  ret i32 %stack_var_-8.1.reload, !insn.addr !205

; uselistorder directives
  uselistorder i32 %stack_var_-8.0.reload, { 1, 0 }
  uselistorder i32* %stack_var_-8.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-8.1.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_14e0, { 1, 0 }
}

define i32 @multi_return(i32 %x) local_unnamed_addr {
dec_label_pc_14ec:
  %stack_var_-4.0.reg2mem = alloca i32, !insn.addr !206
  %0 = add i32 %x, 1, !insn.addr !207
  %1 = icmp sgt i32 %0, 0, !insn.addr !208
  store i32 -1, i32* %stack_var_-4.0.reg2mem, !insn.addr !208
  br i1 %1, label %dec_label_pc_1510, label %dec_label_pc_1570, !insn.addr !208

dec_label_pc_1510:                                ; preds = %dec_label_pc_14ec
  %2 = mul i32 %x, 2, !insn.addr !209
  %3 = icmp slt i32 %2, 101, !insn.addr !210
  store i32 -2, i32* %stack_var_-4.0.reg2mem, !insn.addr !210
  br i1 %3, label %dec_label_pc_1538, label %dec_label_pc_1570, !insn.addr !210

dec_label_pc_1538:                                ; preds = %dec_label_pc_1510
  %4 = icmp slt i32 %x, 0
  %5 = zext i1 %4 to i32, !insn.addr !211
  %6 = add i32 %5, %x, !insn.addr !211
  %7 = and i32 %6, -2, !insn.addr !212
  %8 = icmp eq i32 %7, %x, !insn.addr !213
  %spec.select = select i1 %8, i32 %2, i32 %0
  ret i32 %spec.select

dec_label_pc_1570:                                ; preds = %dec_label_pc_1510, %dec_label_pc_14ec
  %stack_var_-4.0.reload = load i32, i32* %stack_var_-4.0.reg2mem
  ret i32 %stack_var_-4.0.reload, !insn.addr !214

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32 %x, { 3, 2, 1, 0, 4 }
}

define i32 @conditional_return(i32 %x) local_unnamed_addr {
dec_label_pc_157c:
  %storemerge.reg2mem = alloca i32, !insn.addr !215
  %0 = icmp slt i32 %x, 1, !insn.addr !216
  br i1 %0, label %dec_label_pc_15a4, label %dec_label_pc_1594, !insn.addr !216

dec_label_pc_1594:                                ; preds = %dec_label_pc_157c
  %1 = mul i32 %x, 2, !insn.addr !217
  store i32 %1, i32* %storemerge.reg2mem, !insn.addr !218
  br label %dec_label_pc_15dc, !insn.addr !218

dec_label_pc_15a4:                                ; preds = %dec_label_pc_157c
  %2 = add i32 %x, 1, !insn.addr !219
  %3 = icmp sgt i32 %2, 0, !insn.addr !220
  %4 = sub i32 0, %x
  %storemerge1 = select i1 %3, i32 0, i32 %4
  store i32 %storemerge1, i32* %storemerge.reg2mem
  br label %dec_label_pc_15dc

dec_label_pc_15dc:                                ; preds = %dec_label_pc_15a4, %dec_label_pc_1594
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !221

; uselistorder directives
  uselistorder i32 %x, { 1, 2, 0, 3 }
}

define i32 @duffs_device(i32* %dst, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_15e8:
  %merge.reg2mem = alloca i32, !insn.addr !222
  %0 = icmp sgt i32 %n, 0, !insn.addr !223
  store i32 -1, i32* %merge.reg2mem, !insn.addr !223
  br i1 %0, label %dec_label_pc_1614, label %dec_label_pc_164c, !insn.addr !223

dec_label_pc_1614:                                ; preds = %dec_label_pc_15e8
  %1 = urem i32 %n, 8, !insn.addr !224
  %2 = icmp ne i32 %1, 7, !insn.addr !225
  %3 = icmp ne i1 %2, true, !insn.addr !225
  %4 = icmp eq i32 %1, 7, !insn.addr !225
  %5 = icmp ne i1 %4, true, !insn.addr !226
  %6 = icmp eq i1 %3, %5, !insn.addr !226
  %spec.select = select i1 %6, i32 %n, i32 ptrtoint (i32* @global_var_165c to i32)
  store i32 %spec.select, i32* %merge.reg2mem
  br label %dec_label_pc_164c

dec_label_pc_164c:                                ; preds = %dec_label_pc_1614, %dec_label_pc_15e8
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !227

; uselistorder directives
  uselistorder i32 %n, { 1, 0, 2 }
}

define i32 @loop_complex_cond(i32 %x) local_unnamed_addr {
dec_label_pc_17d4:
  %storemerge.lcssa.reg2mem = alloca i32, !insn.addr !228
  %b_-12.0.lcssa.reg2mem = alloca i32, !insn.addr !228
  %a_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !228
  %a_-8.03.reg2mem = alloca i32, !insn.addr !228
  %b_-12.04.reg2mem = alloca i32, !insn.addr !228
  %storemerge5.reg2mem = alloca i32, !insn.addr !228
  %0 = icmp sgt i32 %x, 0
  %1 = icmp eq i1 %0, false, !insn.addr !229
  store i32 0, i32* %storemerge5.reg2mem, !insn.addr !230
  store i32 %x, i32* %b_-12.04.reg2mem, !insn.addr !230
  store i32 0, i32* %a_-8.03.reg2mem, !insn.addr !230
  store i32 0, i32* %a_-8.0.lcssa.reg2mem, !insn.addr !230
  store i32 %x, i32* %b_-12.0.lcssa.reg2mem, !insn.addr !230
  store i32 0, i32* %storemerge.lcssa.reg2mem, !insn.addr !230
  br i1 %1, label %dec_label_pc_1878, label %dec_label_pc_1850, !insn.addr !230

dec_label_pc_1850:                                ; preds = %dec_label_pc_17d4, %dec_label_pc_1850
  %a_-8.03.reload = load i32, i32* %a_-8.03.reg2mem
  %b_-12.04.reload = load i32, i32* %b_-12.04.reg2mem
  %storemerge5.reload = load i32, i32* %storemerge5.reg2mem
  %2 = add i32 %a_-8.03.reload, 2, !insn.addr !231
  %3 = add i32 %b_-12.04.reload, -1, !insn.addr !232
  %4 = add i32 %storemerge5.reload, 1, !insn.addr !233
  %5 = icmp slt i32 %2, %3, !insn.addr !234
  %6 = icmp slt i32 %4, 10, !insn.addr !235
  %7 = icmp sgt i32 %3, 0
  %not.or.cond = icmp eq i1 %6, %5
  %narrow = icmp eq i1 %7, %not.or.cond
  %8 = icmp eq i1 %narrow, false, !insn.addr !229
  store i32 %4, i32* %storemerge5.reg2mem, !insn.addr !230
  store i32 %3, i32* %b_-12.04.reg2mem, !insn.addr !230
  store i32 %2, i32* %a_-8.03.reg2mem, !insn.addr !230
  store i32 %2, i32* %a_-8.0.lcssa.reg2mem, !insn.addr !230
  store i32 %3, i32* %b_-12.0.lcssa.reg2mem, !insn.addr !230
  store i32 %4, i32* %storemerge.lcssa.reg2mem, !insn.addr !230
  br i1 %8, label %dec_label_pc_1878, label %dec_label_pc_1850, !insn.addr !230

dec_label_pc_1878:                                ; preds = %dec_label_pc_1850, %dec_label_pc_17d4
  %storemerge.lcssa.reload = load i32, i32* %storemerge.lcssa.reg2mem
  %b_-12.0.lcssa.reload = load i32, i32* %b_-12.0.lcssa.reg2mem
  %a_-8.0.lcssa.reload = load i32, i32* %a_-8.0.lcssa.reg2mem
  %9 = add i32 %b_-12.0.lcssa.reload, %a_-8.0.lcssa.reload, !insn.addr !236
  %10 = add i32 %9, %storemerge.lcssa.reload, !insn.addr !237
  ret i32 %10, !insn.addr !238

; uselistorder directives
  uselistorder i32 %3, { 0, 1, 3, 2 }
  uselistorder i32* %storemerge5.reg2mem, { 2, 0, 1 }
  uselistorder i32* %b_-12.04.reg2mem, { 2, 0, 1 }
  uselistorder i32* %a_-8.03.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1850, { 1, 0 }
}

define i32 @loop_modify_var(i32 %n) local_unnamed_addr {
dec_label_pc_1894:
  %sum_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !239
  %sum_-8.01.reg2mem = alloca i32, !insn.addr !239
  %storemerge2.reg2mem = alloca i32, !insn.addr !239
  %0 = icmp sgt i32 %n, 0, !insn.addr !240
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !240
  store i32 0, i32* %sum_-8.01.reg2mem, !insn.addr !240
  store i32 0, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !240
  br i1 %0, label %dec_label_pc_18c0, label %dec_label_pc_1904, !insn.addr !240

dec_label_pc_18c0:                                ; preds = %dec_label_pc_1894, %dec_label_pc_18c0
  %sum_-8.01.reload = load i32, i32* %sum_-8.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %1 = add i32 %sum_-8.01.reload, %storemerge2.reload, !insn.addr !241
  %2 = icmp slt i32 %storemerge2.reload, 6, !insn.addr !242
  %3 = add i32 %storemerge2.reload, 2
  %spec.select = select i1 %2, i32 %storemerge2.reload, i32 %3
  %4 = add i32 %spec.select, 1, !insn.addr !243
  %5 = icmp slt i32 %4, %n, !insn.addr !240
  store i32 %4, i32* %storemerge2.reg2mem, !insn.addr !240
  store i32 %1, i32* %sum_-8.01.reg2mem, !insn.addr !240
  store i32 %1, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !240
  br i1 %5, label %dec_label_pc_18c0, label %dec_label_pc_1904, !insn.addr !240

dec_label_pc_1904:                                ; preds = %dec_label_pc_18c0, %dec_label_pc_1894
  %sum_-8.0.lcssa.reload = load i32, i32* %sum_-8.0.lcssa.reg2mem
  ret i32 %sum_-8.0.lcssa.reload, !insn.addr !244

; uselistorder directives
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sum_-8.01.reg2mem, { 2, 0, 1 }
  uselistorder i32 %n, { 1, 0 }
  uselistorder label %dec_label_pc_18c0, { 1, 0 }
}

define i32 @loop_external_state(i32* %flag) local_unnamed_addr {
dec_label_pc_1910:
  %stack_var_-8.1.reg2mem = alloca i32, !insn.addr !245
  %stack_var_-8.0.reg2mem = alloca i32, !insn.addr !245
  %0 = icmp eq i32* %flag, null, !insn.addr !246
  store i32 0, i32* %stack_var_-8.0.reg2mem, !insn.addr !247
  br label %dec_label_pc_1924, !insn.addr !247

dec_label_pc_1924:                                ; preds = %dec_label_pc_1938, %dec_label_pc_1910
  store i32 0, i32* %stack_var_-8.1.reg2mem, !insn.addr !248
  br i1 %0, label %dec_label_pc_1938, label %dec_label_pc_195c, !insn.addr !248

dec_label_pc_1938:                                ; preds = %dec_label_pc_1924
  %stack_var_-8.0.reload = load i32, i32* %stack_var_-8.0.reg2mem
  %1 = add nuw nsw i32 %stack_var_-8.0.reload, 1, !insn.addr !249
  %2 = icmp ult i32 %1, 101, !insn.addr !250
  store i32 %1, i32* %stack_var_-8.0.reg2mem, !insn.addr !250
  store i32 101, i32* %stack_var_-8.1.reg2mem, !insn.addr !250
  br i1 %2, label %dec_label_pc_1924, label %dec_label_pc_195c, !insn.addr !250

dec_label_pc_195c:                                ; preds = %dec_label_pc_1938, %dec_label_pc_1924
  %stack_var_-8.1.reload = load i32, i32* %stack_var_-8.1.reg2mem
  ret i32 %stack_var_-8.1.reload, !insn.addr !251

; uselistorder directives
  uselistorder i32* %stack_var_-8.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-8.1.reg2mem, { 0, 2, 1 }
}

define i32 @recursion_factorial(i32 %n) local_unnamed_addr {
dec_label_pc_1968:
  %storemerge.reg2mem = alloca i32, !insn.addr !252
  %0 = icmp sgt i32 %n, 1, !insn.addr !253
  store i32 1, i32* %storemerge.reg2mem, !insn.addr !253
  br i1 %0, label %dec_label_pc_1994, label %dec_label_pc_19b8, !insn.addr !253

dec_label_pc_1994:                                ; preds = %dec_label_pc_1968
  %1 = add i32 %n, -1, !insn.addr !254
  %2 = call i32 @recursion_factorial(i32 %1), !insn.addr !255
  %3 = mul i32 %2, %n, !insn.addr !256
  store i32 %3, i32* %storemerge.reg2mem, !insn.addr !257
  br label %dec_label_pc_19b8, !insn.addr !257

dec_label_pc_19b8:                                ; preds = %dec_label_pc_1968, %dec_label_pc_1994
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !258

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_19b8, { 1, 0 }
}

define i32 @tail_recursion(i32 %n, i32 %acc) local_unnamed_addr {
dec_label_pc_19c8:
  %storemerge.reg2mem = alloca i32, !insn.addr !259
  %0 = icmp sgt i32 %n, 1, !insn.addr !260
  store i32 %acc, i32* %storemerge.reg2mem, !insn.addr !260
  br i1 %0, label %dec_label_pc_19f8, label %dec_label_pc_1a14, !insn.addr !260

dec_label_pc_19f8:                                ; preds = %dec_label_pc_19c8
  %1 = add i32 %n, -1, !insn.addr !261
  %2 = mul i32 %acc, %n, !insn.addr !262
  %3 = call i32 @tail_recursion(i32 %1, i32 %2), !insn.addr !263
  store i32 %3, i32* %storemerge.reg2mem, !insn.addr !264
  br label %dec_label_pc_1a14, !insn.addr !264

dec_label_pc_1a14:                                ; preds = %dec_label_pc_19c8, %dec_label_pc_19f8
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !265

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %acc, { 1, 0 }
  uselistorder label %dec_label_pc_1a14, { 1, 0 }
}

define i32 @indirect_recursion_a(i32 %n, i32 %depth) local_unnamed_addr {
dec_label_pc_1a24:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !266
  %0 = icmp sgt i32 %depth, 0, !insn.addr !267
  store i32 %n, i32* %stack_var_-12.0.reg2mem, !insn.addr !267
  br i1 %0, label %dec_label_pc_1a54, label %dec_label_pc_1ab0, !insn.addr !267

dec_label_pc_1a54:                                ; preds = %dec_label_pc_1a24
  %1 = icmp slt i32 %n, 0
  %2 = zext i1 %1 to i32, !insn.addr !268
  %3 = add i32 %2, %n, !insn.addr !268
  %4 = and i32 %3, -2, !insn.addr !269
  %5 = icmp eq i32 %4, %n, !insn.addr !270
  br i1 %5, label %dec_label_pc_1a70, label %dec_label_pc_1a90, !insn.addr !271

dec_label_pc_1a70:                                ; preds = %dec_label_pc_1a54
  %6 = ashr i32 %3, 1, !insn.addr !272
  %7 = add i32 %depth, -1, !insn.addr !273
  %8 = call i32 @indirect_recursion_b(i32 %6, i32 %7), !insn.addr !274
  store i32 %8, i32* %stack_var_-12.0.reg2mem, !insn.addr !275
  br label %dec_label_pc_1ab0, !insn.addr !275

dec_label_pc_1a90:                                ; preds = %dec_label_pc_1a54
  %9 = mul i32 %n, 3, !insn.addr !276
  %10 = add i32 %9, 1, !insn.addr !277
  %11 = add i32 %depth, -1, !insn.addr !278
  %12 = call i32 @indirect_recursion_b(i32 %10, i32 %11), !insn.addr !279
  store i32 %12, i32* %stack_var_-12.0.reg2mem, !insn.addr !280
  br label %dec_label_pc_1ab0, !insn.addr !280

dec_label_pc_1ab0:                                ; preds = %dec_label_pc_1a24, %dec_label_pc_1a90, %dec_label_pc_1a70
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !281

; uselistorder directives
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32 (i32, i32)* @indirect_recursion_b, { 1, 0 }
  uselistorder i32 %n, { 4, 3, 2, 1, 0 }
  uselistorder label %dec_label_pc_1ab0, { 1, 2, 0 }
}

define i32 @indirect_recursion_b(i32 %n, i32 %depth) local_unnamed_addr {
dec_label_pc_1ac0:
  %storemerge.reg2mem = alloca i32, !insn.addr !282
  %0 = icmp sgt i32 %depth, 0, !insn.addr !283
  store i32 %n, i32* %storemerge.reg2mem, !insn.addr !283
  br i1 %0, label %dec_label_pc_1af0, label %dec_label_pc_1b0c, !insn.addr !283

dec_label_pc_1af0:                                ; preds = %dec_label_pc_1ac0
  %1 = add i32 %n, 1, !insn.addr !284
  %2 = add i32 %depth, -1, !insn.addr !285
  %3 = call i32 @indirect_recursion_a(i32 %1, i32 %2), !insn.addr !286
  store i32 %3, i32* %storemerge.reg2mem, !insn.addr !287
  br label %dec_label_pc_1b0c, !insn.addr !287

dec_label_pc_1b0c:                                ; preds = %dec_label_pc_1ac0, %dec_label_pc_1af0
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !288

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %n, { 1, 0 }
  uselistorder label %dec_label_pc_1b0c, { 1, 0 }
}

define i32 @call_func_ptr(i32 (i32)* %f, i32 %x) local_unnamed_addr {
dec_label_pc_1b1c:
  ret i32 %x, !insn.addr !289
}

define i32 @call_func_ptr_array(i32 %idx, i32 %x) local_unnamed_addr {
dec_label_pc_1b4c:
  %0 = icmp ult i32 %idx, 3
  %storemerge = select i1 %0, i32 %x, i32 -1
  ret i32 %storemerge, !insn.addr !290
}

define i32 @double_value(i32 %x) local_unnamed_addr {
dec_label_pc_1be8:
  %0 = mul i32 %x, 2, !insn.addr !291
  ret i32 %0, !insn.addr !292
}

define i32 @triple_value(i32 %x) local_unnamed_addr {
dec_label_pc_1c00:
  %0 = mul i32 %x, 3, !insn.addr !293
  ret i32 %0, !insn.addr !294
}

define i32 @call_virtual_func(i8* %obj, i32 %x) local_unnamed_addr {
dec_label_pc_1c18:
  %0 = mul i32 %x, 2, !insn.addr !295
  ret i32 %0, !insn.addr !296
}

define i32 @process_with_callback(i32* %arr, i32 %n, i32 (i32)* %cb) local_unnamed_addr {
dec_label_pc_1c34:
  %sum_-24.0.lcssa.reg2mem = alloca i32, !insn.addr !297
  %sum_-24.02.reg2mem = alloca i32, !insn.addr !297
  %storemerge3.reg2mem = alloca i32, !insn.addr !297
  %0 = ptrtoint i32* %arr to i32
  %1 = icmp sgt i32 %n, 0, !insn.addr !298
  store i32 0, i32* %storemerge3.reg2mem, !insn.addr !298
  store i32 0, i32* %sum_-24.02.reg2mem, !insn.addr !298
  store i32 0, i32* %sum_-24.0.lcssa.reg2mem, !insn.addr !298
  br i1 %1, label %dec_label_pc_1c70, label %dec_label_pc_1cac, !insn.addr !298

dec_label_pc_1c70:                                ; preds = %dec_label_pc_1c34, %dec_label_pc_1c70
  %sum_-24.02.reload = load i32, i32* %sum_-24.02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %2 = mul i32 %storemerge3.reload, 4, !insn.addr !299
  %3 = add i32 %2, %0, !insn.addr !299
  %4 = inttoptr i32 %3 to i32*, !insn.addr !299
  %5 = load i32, i32* %4, align 4, !insn.addr !299
  %6 = add i32 %5, %sum_-24.02.reload, !insn.addr !300
  %7 = add nuw nsw i32 %storemerge3.reload, 1, !insn.addr !301
  %8 = icmp slt i32 %7, %n, !insn.addr !298
  store i32 %7, i32* %storemerge3.reg2mem, !insn.addr !298
  store i32 %6, i32* %sum_-24.02.reg2mem, !insn.addr !298
  store i32 %6, i32* %sum_-24.0.lcssa.reg2mem, !insn.addr !298
  br i1 %8, label %dec_label_pc_1c70, label %dec_label_pc_1cac, !insn.addr !298

dec_label_pc_1cac:                                ; preds = %dec_label_pc_1c70, %dec_label_pc_1c34
  %sum_-24.0.lcssa.reload = load i32, i32* %sum_-24.0.lcssa.reg2mem
  ret i32 %sum_-24.0.lcssa.reload, !insn.addr !302

; uselistorder directives
  uselistorder i32* %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sum_-24.02.reg2mem, { 2, 0, 1 }
  uselistorder i32 %n, { 1, 0 }
  uselistorder label %dec_label_pc_1c70, { 1, 0 }
}

define void @test_control_flow_l2() local_unnamed_addr {
dec_label_pc_1cbc:
  %arr_-116 = alloca [1 x i32], align 4
  %ext_flag_-96 = alloca i32, align 4
  %dst_-92 = alloca [1 x i32], align 4
  %stack_var_-60 = alloca i32, align 4
  %flag_-28 = alloca i32, align 4
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2eea to i8*)), !insn.addr !303
  %1 = call i32 @loop_multi_exit(i32 7), !insn.addr !304
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_2f0f, i32 0, i32 0), i32 %1), !insn.addr !305
  store i32 0, i32* %flag_-28, align 4, !insn.addr !306
  %3 = call i32 @infinite_loop(i32* nonnull %flag_-28), !insn.addr !307
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2f2f, i32 0, i32 0), i32 %3), !insn.addr !308
  %5 = call i32 @multi_return(i32 -5), !insn.addr !309
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2f4d, i32 0, i32 0), i32 %5), !insn.addr !310
  %7 = call i32 @multi_return(i32 100), !insn.addr !311
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2f4d, i32 0, i32 0), i32 %7), !insn.addr !312
  %9 = call i32 @multi_return(i32 3), !insn.addr !313
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2f4d, i32 0, i32 0), i32 %9), !insn.addr !314
  %11 = call i32 @conditional_return(i32 5), !insn.addr !315
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_2f6a, i32 0, i32 0), i32 %11), !insn.addr !316
  %13 = call i32 @conditional_return(i32 -5), !insn.addr !317
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_2f6a, i32 0, i32 0), i32 %13), !insn.addr !318
  store i32 1, i32* %stack_var_-60, align 4, !insn.addr !319
  store [1 x i32] zeroinitializer, [1 x i32]* %dst_-92, align 4, !insn.addr !320
  %15 = getelementptr inbounds [1 x i32], [1 x i32]* %dst_-92, i32 0, i32 0, !insn.addr !321
  %16 = call i32 @duffs_device(i32* nonnull %15, i32* nonnull %stack_var_-60, i32 8), !insn.addr !321
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2f8d, i32 0, i32 0), i32 %16), !insn.addr !322
  %18 = call i32 @loop_complex_cond(i32 10), !insn.addr !323
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_2faa, i32 0, i32 0), i32 %18), !insn.addr !324
  %20 = call i32 @loop_modify_var(i32 10), !insn.addr !325
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_2fcc, i32 0, i32 0), i32 %20), !insn.addr !326
  store i32 0, i32* %ext_flag_-96, align 4, !insn.addr !327
  %22 = call i32 @loop_external_state(i32* nonnull %ext_flag_-96), !insn.addr !328
  %23 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_2fec, i32 0, i32 0), i32 %22), !insn.addr !329
  %24 = call i32 @recursion_factorial(i32 5), !insn.addr !330
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_3010, i32 0, i32 0), i32 %24), !insn.addr !331
  %26 = call i32 @tail_recursion(i32 5, i32 1), !insn.addr !332
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3034, i32 0, i32 0), i32 %26), !insn.addr !333
  %28 = call i32 @indirect_recursion_a(i32 10, i32 3), !insn.addr !334
  %29 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3053, i32 0, i32 0), i32 %28), !insn.addr !335
  %30 = call i32 @call_func_ptr(i32 (i32)* inttoptr (i32 7144 to i32 (i32)*), i32 5), !insn.addr !336
  %31 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3076, i32 0, i32 0), i32 %30), !insn.addr !337
  %32 = call i32 @call_func_ptr_array(i32 0, i32 5), !insn.addr !338
  %33 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_3094, i32 0, i32 0), i32 %32), !insn.addr !339
  %34 = call i32 @call_func_ptr_array(i32 2, i32 5), !insn.addr !340
  %35 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_3094, i32 0, i32 0), i32 %34), !insn.addr !341
  store [1 x i32] [i32 1], [1 x i32]* %arr_-116, align 4, !insn.addr !342
  %36 = getelementptr inbounds [1 x i32], [1 x i32]* %arr_-116, i32 0, i32 0, !insn.addr !343
  %37 = call i32 @process_with_callback(i32* nonnull %36, i32 5, i32 (i32)* inttoptr (i32 7144 to i32 (i32)*)), !insn.addr !343
  %38 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_30b8, i32 0, i32 0), i32 %37), !insn.addr !344
  ret void, !insn.addr !345

; uselistorder directives
  uselistorder i32 (i32, i32)* @call_func_ptr_array, { 1, 0 }
  uselistorder i32 (i32, i32)* @indirect_recursion_a, { 1, 0 }
  uselistorder i32 (i32, i32)* @tail_recursion, { 1, 0 }
  uselistorder i32 (i32)* @recursion_factorial, { 1, 0 }
  uselistorder i32 (i32)* @conditional_return, { 1, 0 }
  uselistorder i32 100, { 2, 0, 1 }
  uselistorder i32 (i32)* @multi_return, { 2, 1, 0 }
  uselistorder i32 7, { 1, 6, 0, 2, 3, 4, 5 }
}

define i32 @non_local_jump(i32 %x) local_unnamed_addr {
dec_label_pc_1f78:
  %storemerge.reg2mem = alloca i32, !insn.addr !346
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint ([8 x i32]* @global_var_14050 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !347
  %1 = icmp eq i32 %0, 0, !insn.addr !348
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !349
  br i1 %1, label %dec_label_pc_1fa0, label %dec_label_pc_1ffc, !insn.addr !349

dec_label_pc_1fa0:                                ; preds = %dec_label_pc_1f78
  %2 = add i32 %x, 1, !insn.addr !350
  %3 = icmp sgt i32 %2, 0, !insn.addr !351
  br i1 %3, label %dec_label_pc_1fc0, label %dec_label_pc_1fb0, !insn.addr !351

dec_label_pc_1fb0:                                ; preds = %dec_label_pc_1fa0
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint ([8 x i32]* @global_var_14050 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 1), !insn.addr !352
  unreachable, !insn.addr !352

dec_label_pc_1fc0:                                ; preds = %dec_label_pc_1fa0
  %4 = icmp slt i32 %x, 101, !insn.addr !353
  br i1 %4, label %dec_label_pc_1fe0, label %dec_label_pc_1fd0, !insn.addr !353

dec_label_pc_1fd0:                                ; preds = %dec_label_pc_1fc0
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint ([8 x i32]* @global_var_14050 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 2), !insn.addr !354
  unreachable, !insn.addr !354

dec_label_pc_1fe0:                                ; preds = %dec_label_pc_1fc0
  %5 = mul i32 %x, 2, !insn.addr !355
  store i32 %5, i32* %storemerge.reg2mem, !insn.addr !356
  br label %dec_label_pc_1ffc, !insn.addr !356

dec_label_pc_1ffc:                                ; preds = %dec_label_pc_1f78, %dec_label_pc_1fe0
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !357

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %x, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1ffc, { 1, 0 }
}

define i32 @cpp_exception(i32 %x) local_unnamed_addr {
dec_label_pc_2018:
  %0 = add i32 %x, 1, !insn.addr !358
  %1 = icmp sgt i32 %0, 0, !insn.addr !359
  br i1 %1, label %dec_label_pc_203c, label %dec_label_pc_2068, !insn.addr !359

dec_label_pc_203c:                                ; preds = %dec_label_pc_2018
  %2 = icmp slt i32 %x, 101, !insn.addr !360
  %3 = mul i32 %x, 2
  %spec.select = select i1 %2, i32 %3, i32 -2
  ret i32 %spec.select

dec_label_pc_2068:                                ; preds = %dec_label_pc_2018
  ret i32 -1, !insn.addr !361

; uselistorder directives
  uselistorder i32 -2, { 2, 3, 4, 0, 5, 1 }
  uselistorder i32 101, { 1, 2, 0, 3, 4 }
}

define i32 @large_jump_table(i32 %op, i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2074:
  %0 = icmp ult i32 %op, 10
  %storemerge = select i1 %0, i32 %a, i32 -1
  ret i32 %storemerge, !insn.addr !362
}

define i32 @op_add(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_210c:
  %0 = add i32 %b, %a, !insn.addr !363
  ret i32 %0, !insn.addr !364
}

define i32 @op_sub(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_212c:
  %0 = sub i32 %a, %b, !insn.addr !365
  ret i32 %0, !insn.addr !366
}

define i32 @op_mul(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_214c:
  %0 = mul i32 %b, %a, !insn.addr !367
  ret i32 %0, !insn.addr !368
}

define i32 @op_div(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_216c:
  %storemerge.reg2mem = alloca i32, !insn.addr !369
  %0 = icmp eq i32 %b, 0, !insn.addr !370
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !371
  br i1 %0, label %dec_label_pc_21b0, label %dec_label_pc_2190, !insn.addr !371

dec_label_pc_2190:                                ; preds = %dec_label_pc_216c
  %1 = sdiv i32 %a, %b, !insn.addr !372
  store i32 %1, i32* %storemerge.reg2mem, !insn.addr !373
  br label %dec_label_pc_21b0, !insn.addr !373

dec_label_pc_21b0:                                ; preds = %dec_label_pc_216c, %dec_label_pc_2190
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !374

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_21b0, { 1, 0 }
}

define i32 @op_mod(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_21c0:
  %storemerge.reg2mem = alloca i32, !insn.addr !375
  %0 = icmp eq i32 %b, 0, !insn.addr !376
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !377
  br i1 %0, label %dec_label_pc_2204, label %dec_label_pc_21e4, !insn.addr !377

dec_label_pc_21e4:                                ; preds = %dec_label_pc_21c0
  %1 = urem i32 %a, %b, !insn.addr !378
  store i32 %1, i32* %storemerge.reg2mem, !insn.addr !379
  br label %dec_label_pc_2204, !insn.addr !379

dec_label_pc_2204:                                ; preds = %dec_label_pc_21c0, %dec_label_pc_21e4
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !380

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2204, { 1, 0 }
}

define i32 @op_and(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2214:
  %0 = and i32 %b, %a, !insn.addr !381
  ret i32 %0, !insn.addr !382
}

define i32 @op_or(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2234:
  %0 = or i32 %b, %a, !insn.addr !383
  ret i32 %0, !insn.addr !384
}

define i32 @op_xor(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2254:
  %0 = xor i32 %b, %a, !insn.addr !385
  ret i32 %0, !insn.addr !386
}

define i32 @op_shl(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2274:
  %0 = shl i32 %a, %b, !insn.addr !387
  ret i32 %0, !insn.addr !388
}

define i32 @op_shr(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2294:
  %0 = ashr i32 %a, %b, !insn.addr !389
  ret i32 %0, !insn.addr !390
}

define i32 @conditional_func_ptr(i32 %mode, i32 %x) local_unnamed_addr {
dec_label_pc_22b4:
  ret i32 %x, !insn.addr !391
}

define i32 @state_machine(i32 %event, i32 %state) local_unnamed_addr {
dec_label_pc_2344:
  %0 = icmp ult i32 %state, 3, !insn.addr !392
  %1 = icmp ne i1 %0, true, !insn.addr !392
  %2 = icmp eq i32 %state, 3, !insn.addr !392
  %3 = icmp ne i1 %2, true, !insn.addr !393
  %4 = icmp eq i1 %1, %3, !insn.addr !393
  %spec.select = select i1 %4, i32 3, i32 ptrtoint (i32* @global_var_2370 to i32)
  ret i32 %spec.select, !insn.addr !394

; uselistorder directives
  uselistorder i32 %state, { 1, 0 }
}

define i32 @fsm_func_table(i32 %event, i32 %state) local_unnamed_addr {
dec_label_pc_2438:
  %0 = icmp ult i32 %state, 4
  %storemerge = select i1 %0, i32 %event, i32 3
  ret i32 %storemerge, !insn.addr !395
}

define i32 @state_idle(i32 %event) local_unnamed_addr {
dec_label_pc_24dc:
  %0 = icmp ne i32 %event, 1, !insn.addr !396
  %1 = icmp ne i1 %0, true, !insn.addr !396
  %2 = zext i1 %1 to i32, !insn.addr !397
  ret i32 %2, !insn.addr !398
}

define i32 @state_processing(i32 %event) local_unnamed_addr {
dec_label_pc_24fc:
  %switch.selectcmp = icmp eq i32 %event, 99
  %switch.select = select i1 %switch.selectcmp, i32 3, i32 1
  %switch.selectcmp1 = icmp eq i32 %event, 2
  %switch.select2 = select i1 %switch.selectcmp1, i32 2, i32 %switch.select
  ret i32 %switch.select2, !insn.addr !399
}

define i32 @state_done(i32 %event) local_unnamed_addr {
dec_label_pc_2554:
  ret i32 2, !insn.addr !400
}

define i32 @state_error(i32 %event) local_unnamed_addr {
dec_label_pc_2568:
  %0 = icmp eq i32 %event, 0, !insn.addr !401
  %spec.select = select i1 %0, i32 0, i32 3
  ret i32 %spec.select, !insn.addr !402
}

define i32 @computed_goto(i32* %labels, i32 %idx) local_unnamed_addr {
dec_label_pc_2584:
  %targets_-28 = alloca [1 x i8*], align 4
  %0 = load i8*, i8** @global_var_13f00, align 4, !insn.addr !403
  %1 = insertvalue [1 x i8*] undef, i8* %0, 0, !insn.addr !404
  store [1 x i8*] %1, [1 x i8*]* %targets_-28, align 4, !insn.addr !404
  %2 = icmp ult i32 %idx, 4
  br i1 %2, label %dec_label_pc_25e8, label %dec_label_pc_25dc, !insn.addr !405

dec_label_pc_25dc:                                ; preds = %dec_label_pc_2584
  ret i32 -1, !insn.addr !406

dec_label_pc_25e8:                                ; preds = %dec_label_pc_2584
  %3 = ptrtoint [1 x i8*]* %targets_-28 to i32, !insn.addr !407
  %4 = mul i32 %idx, 4, !insn.addr !408
  %5 = add i32 %4, %3, !insn.addr !408
  %6 = inttoptr i32 %5 to i32*, !insn.addr !408
  %7 = load i32, i32* %6, align 4, !insn.addr !408
  ret i32 %7, !insn.addr !409
}

define i32 @obfuscated_cf(i32 %x) local_unnamed_addr {
dec_label_pc_2648:
  %0 = mul i32 %x, %x, !insn.addr !410
  %1 = add i32 %0, 2, !insn.addr !411
  %2 = icmp sgt i32 %1, 0, !insn.addr !412
  %3 = mul i32 %x, 2
  %4 = or i32 %3, 1
  %stack_var_-8.0 = select i1 %2, i32 %x, i32 %4
  %5 = mul i32 %stack_var_-8.0, 2, !insn.addr !413
  ret i32 %5, !insn.addr !414

; uselistorder directives
  uselistorder i32 %x, { 1, 0, 3, 2 }
}

define i32 @opaque_predicate(i32 %x) local_unnamed_addr {
dec_label_pc_269c:
  %0 = mul i32 %x, 2, !insn.addr !415
  ret i32 %0, !insn.addr !416
}

define i32 @overlapped_code(i32 %x) local_unnamed_addr {
dec_label_pc_26e8:
  %storemerge.reg2mem = alloca i32, !insn.addr !417
  %0 = urem i32 %x, 2, !insn.addr !418
  %1 = icmp eq i32 %0, 0, !insn.addr !418
  br i1 %1, label %dec_label_pc_2714, label %dec_label_pc_2700, !insn.addr !419

dec_label_pc_2700:                                ; preds = %dec_label_pc_26e8
  %2 = mul i32 %x, 3, !insn.addr !420
  %3 = add i32 %2, 1, !insn.addr !421
  store i32 %3, i32* %storemerge.reg2mem, !insn.addr !422
  br label %dec_label_pc_2728, !insn.addr !422

dec_label_pc_2714:                                ; preds = %dec_label_pc_26e8
  %4 = icmp slt i32 %x, 0
  %5 = zext i1 %4 to i32, !insn.addr !423
  %6 = add i32 %5, %x, !insn.addr !423
  %7 = ashr i32 %6, 1, !insn.addr !424
  store i32 %7, i32* %storemerge.reg2mem, !insn.addr !425
  br label %dec_label_pc_2728, !insn.addr !425

dec_label_pc_2728:                                ; preds = %dec_label_pc_2714, %dec_label_pc_2700
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !426

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 3, { 9, 7, 1, 8, 2, 22, 23, 12, 13, 10, 6, 11, 14, 15, 16, 17, 18, 3, 4, 24, 25, 5, 0, 19, 20, 21 }
  uselistorder i32 %x, { 2, 0, 3, 1 }
}

define void @test_control_flow_l3() local_unnamed_addr {
dec_label_pc_2734:
  %labels_-24 = alloca [1 x i32], align 4
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_30de to i8*)), !insn.addr !427
  %1 = call i32 @non_local_jump(i32 5), !insn.addr !428
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3103, i32 0, i32 0), i32 %1), !insn.addr !429
  %3 = call i32 @non_local_jump(i32 -5), !insn.addr !430
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3103, i32 0, i32 0), i32 %3), !insn.addr !431
  %5 = call i32 @cpp_exception(i32 5), !insn.addr !432
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3122, i32 0, i32 0), i32 %5), !insn.addr !433
  %7 = call i32 @cpp_exception(i32 -5), !insn.addr !434
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3122, i32 0, i32 0), i32 %7), !insn.addr !435
  %9 = call i32 @large_jump_table(i32 0, i32 10, i32 5), !insn.addr !436
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3140, i32 0, i32 0), i32 %9), !insn.addr !437
  %11 = call i32 @conditional_func_ptr(i32 0, i32 5), !insn.addr !438
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_3161, i32 0, i32 0), i32 %11), !insn.addr !439
  %13 = call i32 @state_machine(i32 1, i32 0), !insn.addr !440
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3186, i32 0, i32 0), i32 %13), !insn.addr !441
  %15 = call i32 @fsm_func_table(i32 2, i32 1), !insn.addr !442
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_31a4, i32 0, i32 0), i32 %15), !insn.addr !443
  store [1 x i32] zeroinitializer, [1 x i32]* %labels_-24, align 4, !insn.addr !444
  %17 = getelementptr inbounds [1 x i32], [1 x i32]* %labels_-24, i32 0, i32 0, !insn.addr !445
  %18 = call i32 @computed_goto(i32* nonnull %17, i32 2), !insn.addr !445
  %19 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_947 to i32), i32 10364) to i8*)), !insn.addr !446
  %20 = call i32 @obfuscated_cf(i32 5), !insn.addr !447
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_31e1, i32 0, i32 0), i32 %20), !insn.addr !448
  %22 = call i32 @opaque_predicate(i32 5), !insn.addr !449
  %23 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_953 to i32), i32 10412) to i8*)), !insn.addr !450
  %24 = call i32 @overlapped_code(i32 5), !insn.addr !451
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3220, i32 0, i32 0), i32 %24), !insn.addr !452
  ret void, !insn.addr !453

; uselistorder directives
  uselistorder i32 10, { 4, 2, 5, 6, 7, 1, 3, 8, 9, 10, 11, 12, 13, 0, 14, 15 }
  uselistorder i32 (i32)* @cpp_exception, { 1, 0 }
  uselistorder i32 (i32)* @non_local_jump, { 1, 0 }
  uselistorder i32 5, { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 1, 0, 24, 25, 26 }
  uselistorder i32 (i8*, ...)* @printf, { 45, 49, 27, 53, 25, 31, 28, 26, 23, 32, 33, 34, 56, 24, 0, 55, 58, 48, 50, 54, 51, 46, 4, 7, 6, 1, 2, 3, 14, 10, 11, 57, 59, 52, 12, 13, 8, 9, 15, 19, 36, 37, 38, 43, 44, 35, 29, 41, 39, 40, 20, 22, 21, 30, 42, 16, 17, 18, 5, 47, 60 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_2904:
  call void @test_control_flow_l1(), !insn.addr !454
  call void @test_control_flow_l2(), !insn.addr !455
  call void @test_control_flow_l3(), !insn.addr !456
  ret i32 0, !insn.addr !457
}

define i32 @__aeabi_idiv(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2938:
  %merge.reg2mem = alloca i32, !insn.addr !458
  %0 = icmp eq i32 %arg2, 0, !insn.addr !458
  store i32 undef, i32* %merge.reg2mem, !insn.addr !459
  br i1 %0, label %dec_label_pc_2b48, label %dec_label_pc_2940, !insn.addr !459

dec_label_pc_2940:                                ; preds = %dec_label_pc_2938
  %1 = icmp slt i32 %arg2, 0, !insn.addr !458
  %2 = sub i32 0, %arg2
  %spec.select = select i1 %1, i32 %2, i32 %arg2
  %3 = icmp eq i32 %spec.select, 1, !insn.addr !460
  br i1 %3, label %dec_label_pc_2b14, label %dec_label_pc_2950, !insn.addr !461

dec_label_pc_2950:                                ; preds = %dec_label_pc_2940
  %4 = xor i32 %arg2, %arg1, !insn.addr !462
  %5 = icmp slt i32 %arg1, 0, !insn.addr !463
  %6 = sub i32 0, %arg1
  %spec.select1 = select i1 %5, i32 %6, i32 %arg1
  %7 = icmp ult i32 %spec.select1, %spec.select, !insn.addr !464
  %8 = icmp ne i1 %7, true, !insn.addr !464
  %9 = icmp eq i32 %spec.select1, %spec.select, !insn.addr !464
  %10 = icmp ne i1 %8, true, !insn.addr !465
  %11 = or i1 %9, %10, !insn.addr !465
  br i1 %11, label %dec_label_pc_2b20, label %dec_label_pc_2960, !insn.addr !465

dec_label_pc_2960:                                ; preds = %dec_label_pc_2950
  %12 = add i32 %spec.select, -1, !insn.addr !460
  %13 = and i32 %12, %spec.select, !insn.addr !466
  %14 = icmp eq i32 %13, 0, !insn.addr !466
  br i1 %14, label %dec_label_pc_2b30, label %dec_label_pc_2968, !insn.addr !467

dec_label_pc_2968:                                ; preds = %dec_label_pc_2960
  %15 = call i32 @llvm.ctlz.i32(i32 %spec.select1, i1 true), !range !468, !insn.addr !469
  %16 = call i32 @llvm.ctlz.i32(i32 %spec.select, i1 true), !range !468, !insn.addr !470
  %17 = sub nsw i32 %16, %15, !insn.addr !471
  %18 = icmp eq i32 %17, 31, !insn.addr !472
  store i32 0, i32* %merge.reg2mem, !insn.addr !473
  br i1 %18, label %dec_label_pc_2984, label %dec_label_pc_2b48, !insn.addr !473

dec_label_pc_2b48:                                ; preds = %dec_label_pc_2938, %dec_label_pc_2b30, %dec_label_pc_2b20, %dec_label_pc_2b14, %dec_label_pc_2984, %dec_label_pc_2968
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !473

dec_label_pc_2984:                                ; preds = %dec_label_pc_2968
  %19 = shl i32 %spec.select, 31, !insn.addr !474
  %20 = icmp ult i32 %spec.select1, %19, !insn.addr !474
  %21 = icmp ne i1 %20, true, !insn.addr !474
  %22 = zext i1 %21 to i32, !insn.addr !475
  %23 = or i1 %20, %21
  %24 = icmp eq i1 %23, false
  %25 = select i1 %24, i32 %19, i32 0
  %r3.1 = sub i32 %spec.select1, %25
  %26 = mul i32 %spec.select, 1073741824, !insn.addr !476
  %27 = icmp ult i32 %r3.1, %26, !insn.addr !476
  %28 = icmp ne i1 %27, true, !insn.addr !476
  %29 = mul i32 %22, 2, !insn.addr !477
  %30 = zext i1 %28 to i32, !insn.addr !477
  %31 = or i32 %29, %30, !insn.addr !477
  %32 = icmp ule i32 %31, %22, !insn.addr !477
  %33 = icmp ult i32 %29, %22, !insn.addr !477
  %34 = select i1 %28, i1 %32, i1 %33, !insn.addr !477
  %35 = select i1 %34, i32 %26, i32 0
  %r3.2 = sub i32 %r3.1, %35
  %36 = mul i32 %spec.select, 536870912, !insn.addr !478
  %37 = icmp ult i32 %r3.2, %36, !insn.addr !478
  %38 = icmp ne i1 %37, true, !insn.addr !478
  %39 = mul i32 %31, 2, !insn.addr !479
  %40 = zext i1 %38 to i32, !insn.addr !479
  %41 = or i32 %39, %40, !insn.addr !479
  %42 = icmp ule i32 %41, %31, !insn.addr !479
  %43 = icmp ult i32 %39, %31, !insn.addr !479
  %44 = select i1 %38, i1 %42, i1 %43, !insn.addr !479
  %45 = select i1 %44, i32 %36, i32 0
  %r3.3 = sub i32 %r3.2, %45
  %46 = mul i32 %spec.select, 268435456, !insn.addr !480
  %47 = icmp ult i32 %r3.3, %46, !insn.addr !480
  %48 = icmp ne i1 %47, true, !insn.addr !480
  %49 = mul i32 %41, 2, !insn.addr !481
  %50 = zext i1 %48 to i32, !insn.addr !481
  %51 = or i32 %49, %50, !insn.addr !481
  %52 = icmp ule i32 %51, %41, !insn.addr !481
  %53 = icmp ult i32 %49, %41, !insn.addr !481
  %54 = select i1 %48, i1 %52, i1 %53, !insn.addr !481
  %55 = select i1 %54, i32 %46, i32 0
  %r3.4 = sub i32 %r3.3, %55
  %56 = mul i32 %spec.select, 134217728, !insn.addr !482
  %57 = icmp ult i32 %r3.4, %56, !insn.addr !482
  %58 = icmp ne i1 %57, true, !insn.addr !482
  %59 = mul i32 %51, 2, !insn.addr !483
  %60 = zext i1 %58 to i32, !insn.addr !483
  %61 = or i32 %59, %60, !insn.addr !483
  %62 = icmp ule i32 %61, %51, !insn.addr !483
  %63 = icmp ult i32 %59, %51, !insn.addr !483
  %64 = select i1 %58, i1 %62, i1 %63, !insn.addr !483
  %65 = select i1 %64, i32 %56, i32 0
  %r3.5 = sub i32 %r3.4, %65
  %66 = mul i32 %spec.select, 67108864, !insn.addr !484
  %67 = icmp ult i32 %r3.5, %66, !insn.addr !484
  %68 = icmp ne i1 %67, true, !insn.addr !484
  %69 = mul i32 %61, 2, !insn.addr !485
  %70 = zext i1 %68 to i32, !insn.addr !485
  %71 = or i32 %69, %70, !insn.addr !485
  %72 = icmp ule i32 %71, %61, !insn.addr !485
  %73 = icmp ult i32 %69, %61, !insn.addr !485
  %74 = select i1 %68, i1 %72, i1 %73, !insn.addr !485
  %75 = select i1 %74, i32 %66, i32 0
  %r3.6 = sub i32 %r3.5, %75
  %76 = mul i32 %spec.select, 33554432, !insn.addr !486
  %77 = icmp ult i32 %r3.6, %76, !insn.addr !486
  %78 = icmp ne i1 %77, true, !insn.addr !486
  %79 = mul i32 %71, 2, !insn.addr !487
  %80 = zext i1 %78 to i32, !insn.addr !487
  %81 = or i32 %79, %80, !insn.addr !487
  %82 = icmp ule i32 %81, %71, !insn.addr !487
  %83 = icmp ult i32 %79, %71, !insn.addr !487
  %84 = select i1 %78, i1 %82, i1 %83, !insn.addr !487
  %85 = select i1 %84, i32 %76, i32 0
  %r3.7 = sub i32 %r3.6, %85
  %86 = mul i32 %spec.select, 16777216, !insn.addr !488
  %87 = icmp ult i32 %r3.7, %86, !insn.addr !488
  %88 = icmp ne i1 %87, true, !insn.addr !488
  %89 = mul i32 %81, 2, !insn.addr !489
  %90 = zext i1 %88 to i32, !insn.addr !489
  %91 = or i32 %89, %90, !insn.addr !489
  %92 = icmp ule i32 %91, %81, !insn.addr !489
  %93 = icmp ult i32 %89, %81, !insn.addr !489
  %94 = select i1 %88, i1 %92, i1 %93, !insn.addr !489
  %95 = select i1 %94, i32 %86, i32 0
  %r3.8 = sub i32 %r3.7, %95
  %96 = mul i32 %spec.select, 8388608, !insn.addr !490
  %97 = icmp ult i32 %r3.8, %96, !insn.addr !490
  %98 = icmp ne i1 %97, true, !insn.addr !490
  %99 = mul i32 %91, 2, !insn.addr !491
  %100 = zext i1 %98 to i32, !insn.addr !491
  %101 = or i32 %99, %100, !insn.addr !491
  %102 = icmp ule i32 %101, %91, !insn.addr !491
  %103 = icmp ult i32 %99, %91, !insn.addr !491
  %104 = select i1 %98, i1 %102, i1 %103, !insn.addr !491
  %105 = select i1 %104, i32 %96, i32 0
  %r3.9 = sub i32 %r3.8, %105
  %106 = mul i32 %spec.select, 4194304, !insn.addr !492
  %107 = icmp ult i32 %r3.9, %106, !insn.addr !492
  %108 = icmp ne i1 %107, true, !insn.addr !492
  %109 = mul i32 %101, 2, !insn.addr !493
  %110 = zext i1 %108 to i32, !insn.addr !493
  %111 = or i32 %109, %110, !insn.addr !493
  %112 = icmp ule i32 %111, %101, !insn.addr !493
  %113 = icmp ult i32 %109, %101, !insn.addr !493
  %114 = select i1 %108, i1 %112, i1 %113, !insn.addr !493
  %115 = select i1 %114, i32 %106, i32 0
  %r3.10 = sub i32 %r3.9, %115
  %116 = mul i32 %spec.select, 2097152, !insn.addr !494
  %117 = icmp ult i32 %r3.10, %116, !insn.addr !494
  %118 = icmp ne i1 %117, true, !insn.addr !494
  %119 = mul i32 %111, 2, !insn.addr !495
  %120 = zext i1 %118 to i32, !insn.addr !495
  %121 = or i32 %119, %120, !insn.addr !495
  %122 = icmp ule i32 %121, %111, !insn.addr !495
  %123 = icmp ult i32 %119, %111, !insn.addr !495
  %124 = select i1 %118, i1 %122, i1 %123, !insn.addr !495
  %125 = select i1 %124, i32 %116, i32 0
  %r3.11 = sub i32 %r3.10, %125
  %126 = mul i32 %spec.select, 1048576, !insn.addr !496
  %127 = icmp ult i32 %r3.11, %126, !insn.addr !496
  %128 = icmp ne i1 %127, true, !insn.addr !496
  %129 = mul i32 %121, 2, !insn.addr !497
  %130 = zext i1 %128 to i32, !insn.addr !497
  %131 = or i32 %129, %130, !insn.addr !497
  %132 = icmp ule i32 %131, %121, !insn.addr !497
  %133 = icmp ult i32 %129, %121, !insn.addr !497
  %134 = select i1 %128, i1 %132, i1 %133, !insn.addr !497
  %135 = select i1 %134, i32 %126, i32 0
  %r3.12 = sub i32 %r3.11, %135
  %136 = mul i32 %spec.select, 524288, !insn.addr !498
  %137 = icmp ult i32 %r3.12, %136, !insn.addr !498
  %138 = icmp ne i1 %137, true, !insn.addr !498
  %139 = mul i32 %131, 2, !insn.addr !499
  %140 = zext i1 %138 to i32, !insn.addr !499
  %141 = or i32 %139, %140, !insn.addr !499
  %142 = icmp ule i32 %141, %131, !insn.addr !499
  %143 = icmp ult i32 %139, %131, !insn.addr !499
  %144 = select i1 %138, i1 %142, i1 %143, !insn.addr !499
  %145 = select i1 %144, i32 %136, i32 0
  %r3.13 = sub i32 %r3.12, %145
  %146 = mul i32 %spec.select, 262144, !insn.addr !500
  %147 = icmp ult i32 %r3.13, %146, !insn.addr !500
  %148 = icmp ne i1 %147, true, !insn.addr !500
  %149 = mul i32 %141, 2, !insn.addr !501
  %150 = zext i1 %148 to i32, !insn.addr !501
  %151 = or i32 %149, %150, !insn.addr !501
  %152 = icmp ule i32 %151, %141, !insn.addr !501
  %153 = icmp ult i32 %149, %141, !insn.addr !501
  %154 = select i1 %148, i1 %152, i1 %153, !insn.addr !501
  %155 = select i1 %154, i32 %146, i32 0
  %r3.14 = sub i32 %r3.13, %155
  %156 = mul i32 %spec.select, 131072, !insn.addr !502
  %157 = icmp ult i32 %r3.14, %156, !insn.addr !502
  %158 = icmp ne i1 %157, true, !insn.addr !502
  %159 = mul i32 %151, 2, !insn.addr !503
  %160 = zext i1 %158 to i32, !insn.addr !503
  %161 = or i32 %159, %160, !insn.addr !503
  %162 = icmp ule i32 %161, %151, !insn.addr !503
  %163 = icmp ult i32 %159, %151, !insn.addr !503
  %164 = select i1 %158, i1 %162, i1 %163, !insn.addr !503
  %165 = select i1 %164, i32 %156, i32 0
  %r3.15 = sub i32 %r3.14, %165
  %166 = mul i32 %spec.select, 65536, !insn.addr !504
  %167 = icmp ult i32 %r3.15, %166, !insn.addr !504
  %168 = icmp ne i1 %167, true, !insn.addr !504
  %169 = mul i32 %161, 2, !insn.addr !505
  %170 = zext i1 %168 to i32, !insn.addr !505
  %171 = or i32 %169, %170, !insn.addr !505
  %172 = icmp ule i32 %171, %161, !insn.addr !505
  %173 = icmp ult i32 %169, %161, !insn.addr !505
  %174 = select i1 %168, i1 %172, i1 %173, !insn.addr !505
  %175 = select i1 %174, i32 %166, i32 0
  %r3.16 = sub i32 %r3.15, %175
  %176 = mul i32 %spec.select, 32768, !insn.addr !506
  %177 = icmp ult i32 %r3.16, %176, !insn.addr !506
  %178 = icmp ne i1 %177, true, !insn.addr !506
  %179 = mul i32 %171, 2, !insn.addr !507
  %180 = zext i1 %178 to i32, !insn.addr !507
  %181 = or i32 %179, %180, !insn.addr !507
  %182 = icmp ule i32 %181, %171, !insn.addr !507
  %183 = icmp ult i32 %179, %171, !insn.addr !507
  %184 = select i1 %178, i1 %182, i1 %183, !insn.addr !507
  %185 = select i1 %184, i32 %176, i32 0
  %r3.17 = sub i32 %r3.16, %185
  %186 = mul i32 %spec.select, 16384, !insn.addr !508
  %187 = icmp ult i32 %r3.17, %186, !insn.addr !508
  %188 = icmp ne i1 %187, true, !insn.addr !508
  %189 = mul i32 %181, 2, !insn.addr !509
  %190 = zext i1 %188 to i32, !insn.addr !509
  %191 = or i32 %189, %190, !insn.addr !509
  %192 = icmp ule i32 %191, %181, !insn.addr !509
  %193 = icmp ult i32 %189, %181, !insn.addr !509
  %194 = select i1 %188, i1 %192, i1 %193, !insn.addr !509
  %195 = select i1 %194, i32 %186, i32 0
  %r3.18 = sub i32 %r3.17, %195
  %196 = mul i32 %spec.select, 8192, !insn.addr !510
  %197 = icmp ult i32 %r3.18, %196, !insn.addr !510
  %198 = icmp ne i1 %197, true, !insn.addr !510
  %199 = mul i32 %191, 2, !insn.addr !511
  %200 = zext i1 %198 to i32, !insn.addr !511
  %201 = or i32 %199, %200, !insn.addr !511
  %202 = icmp ule i32 %201, %191, !insn.addr !511
  %203 = icmp ult i32 %199, %191, !insn.addr !511
  %204 = select i1 %198, i1 %202, i1 %203, !insn.addr !511
  %205 = select i1 %204, i32 %196, i32 0
  %r3.19 = sub i32 %r3.18, %205
  %206 = mul i32 %spec.select, 4096, !insn.addr !512
  %207 = icmp ult i32 %r3.19, %206, !insn.addr !512
  %208 = icmp ne i1 %207, true, !insn.addr !512
  %209 = mul i32 %201, 2, !insn.addr !513
  %210 = zext i1 %208 to i32, !insn.addr !513
  %211 = or i32 %209, %210, !insn.addr !513
  %212 = icmp ule i32 %211, %201, !insn.addr !513
  %213 = icmp ult i32 %209, %201, !insn.addr !513
  %214 = select i1 %208, i1 %212, i1 %213, !insn.addr !513
  %215 = select i1 %214, i32 %206, i32 0
  %r3.20 = sub i32 %r3.19, %215
  %216 = mul i32 %spec.select, 2048, !insn.addr !514
  %217 = icmp ult i32 %r3.20, %216, !insn.addr !514
  %218 = icmp ne i1 %217, true, !insn.addr !514
  %219 = mul i32 %211, 2, !insn.addr !515
  %220 = zext i1 %218 to i32, !insn.addr !515
  %221 = or i32 %219, %220, !insn.addr !515
  %222 = icmp ule i32 %221, %211, !insn.addr !515
  %223 = icmp ult i32 %219, %211, !insn.addr !515
  %224 = select i1 %218, i1 %222, i1 %223, !insn.addr !515
  %225 = select i1 %224, i32 %216, i32 0
  %r3.21 = sub i32 %r3.20, %225
  %226 = mul i32 %spec.select, 1024, !insn.addr !516
  %227 = icmp ult i32 %r3.21, %226, !insn.addr !516
  %228 = icmp ne i1 %227, true, !insn.addr !516
  %229 = mul i32 %221, 2, !insn.addr !517
  %230 = zext i1 %228 to i32, !insn.addr !517
  %231 = or i32 %229, %230, !insn.addr !517
  %232 = icmp ule i32 %231, %221, !insn.addr !517
  %233 = icmp ult i32 %229, %221, !insn.addr !517
  %234 = select i1 %228, i1 %232, i1 %233, !insn.addr !517
  %235 = select i1 %234, i32 %226, i32 0
  %r3.22 = sub i32 %r3.21, %235
  %236 = mul i32 %spec.select, 512, !insn.addr !518
  %237 = icmp ult i32 %r3.22, %236, !insn.addr !518
  %238 = icmp ne i1 %237, true, !insn.addr !518
  %239 = mul i32 %231, 2, !insn.addr !519
  %240 = zext i1 %238 to i32, !insn.addr !519
  %241 = or i32 %239, %240, !insn.addr !519
  %242 = icmp ule i32 %241, %231, !insn.addr !519
  %243 = icmp ult i32 %239, %231, !insn.addr !519
  %244 = select i1 %238, i1 %242, i1 %243, !insn.addr !519
  %245 = select i1 %244, i32 %236, i32 0
  %r3.23 = sub i32 %r3.22, %245
  %246 = mul i32 %spec.select, 256, !insn.addr !520
  %247 = icmp ult i32 %r3.23, %246, !insn.addr !520
  %248 = icmp ne i1 %247, true, !insn.addr !520
  %249 = mul i32 %241, 2, !insn.addr !521
  %250 = zext i1 %248 to i32, !insn.addr !521
  %251 = or i32 %249, %250, !insn.addr !521
  %252 = icmp ule i32 %251, %241, !insn.addr !521
  %253 = icmp ult i32 %249, %241, !insn.addr !521
  %254 = select i1 %248, i1 %252, i1 %253, !insn.addr !521
  %255 = select i1 %254, i32 %246, i32 0
  %r3.24 = sub i32 %r3.23, %255
  %256 = mul i32 %spec.select, 128, !insn.addr !522
  %257 = icmp ult i32 %r3.24, %256, !insn.addr !522
  %258 = icmp ne i1 %257, true, !insn.addr !522
  %259 = mul i32 %251, 2, !insn.addr !523
  %260 = zext i1 %258 to i32, !insn.addr !523
  %261 = or i32 %259, %260, !insn.addr !523
  %262 = icmp ule i32 %261, %251, !insn.addr !523
  %263 = icmp ult i32 %259, %251, !insn.addr !523
  %264 = select i1 %258, i1 %262, i1 %263, !insn.addr !523
  %265 = select i1 %264, i32 %256, i32 0
  %r3.25 = sub i32 %r3.24, %265
  %266 = mul i32 %spec.select, 64, !insn.addr !524
  %267 = icmp ult i32 %r3.25, %266, !insn.addr !524
  %268 = icmp ne i1 %267, true, !insn.addr !524
  %269 = mul i32 %261, 2, !insn.addr !525
  %270 = zext i1 %268 to i32, !insn.addr !525
  %271 = or i32 %269, %270, !insn.addr !525
  %272 = icmp ule i32 %271, %261, !insn.addr !525
  %273 = icmp ult i32 %269, %261, !insn.addr !525
  %274 = select i1 %268, i1 %272, i1 %273, !insn.addr !525
  %275 = select i1 %274, i32 %266, i32 0
  %r3.26 = sub i32 %r3.25, %275
  %276 = mul i32 %spec.select, 32, !insn.addr !526
  %277 = icmp ult i32 %r3.26, %276, !insn.addr !526
  %278 = icmp ne i1 %277, true, !insn.addr !526
  %279 = mul i32 %271, 2, !insn.addr !527
  %280 = zext i1 %278 to i32, !insn.addr !527
  %281 = or i32 %279, %280, !insn.addr !527
  %282 = icmp ule i32 %281, %271, !insn.addr !527
  %283 = icmp ult i32 %279, %271, !insn.addr !527
  %284 = select i1 %278, i1 %282, i1 %283, !insn.addr !527
  %285 = select i1 %284, i32 %276, i32 0
  %r3.27 = sub i32 %r3.26, %285
  %286 = mul i32 %spec.select, 16, !insn.addr !528
  %287 = icmp ult i32 %r3.27, %286, !insn.addr !528
  %288 = icmp ne i1 %287, true, !insn.addr !528
  %289 = mul i32 %281, 2, !insn.addr !529
  %290 = zext i1 %288 to i32, !insn.addr !529
  %291 = or i32 %289, %290, !insn.addr !529
  %292 = icmp ule i32 %291, %281, !insn.addr !529
  %293 = icmp ult i32 %289, %281, !insn.addr !529
  %294 = select i1 %288, i1 %292, i1 %293, !insn.addr !529
  %295 = select i1 %294, i32 %286, i32 0
  %r3.28 = sub i32 %r3.27, %295
  %296 = mul i32 %spec.select, 8, !insn.addr !530
  %297 = icmp ult i32 %r3.28, %296, !insn.addr !530
  %298 = icmp ne i1 %297, true, !insn.addr !530
  %299 = mul i32 %291, 2, !insn.addr !531
  %300 = zext i1 %298 to i32, !insn.addr !531
  %301 = or i32 %299, %300, !insn.addr !531
  %302 = icmp ule i32 %301, %291, !insn.addr !531
  %303 = icmp ult i32 %299, %291, !insn.addr !531
  %304 = select i1 %298, i1 %302, i1 %303, !insn.addr !531
  %305 = select i1 %304, i32 %296, i32 0
  %r3.29 = sub i32 %r3.28, %305
  %306 = mul i32 %spec.select, 4, !insn.addr !532
  %307 = icmp ult i32 %r3.29, %306, !insn.addr !532
  %308 = icmp ne i1 %307, true, !insn.addr !532
  %309 = mul i32 %301, 2, !insn.addr !533
  %310 = zext i1 %308 to i32, !insn.addr !533
  %311 = or i32 %309, %310, !insn.addr !533
  %312 = icmp ule i32 %311, %301, !insn.addr !533
  %313 = icmp ult i32 %309, %301, !insn.addr !533
  %314 = select i1 %308, i1 %312, i1 %313, !insn.addr !533
  %315 = select i1 %314, i32 %306, i32 0
  %r3.30 = sub i32 %r3.29, %315
  %316 = mul i32 %spec.select, 2, !insn.addr !534
  %317 = icmp ult i32 %r3.30, %316, !insn.addr !534
  %318 = icmp ne i1 %317, true, !insn.addr !534
  %319 = mul i32 %311, 2, !insn.addr !535
  %320 = zext i1 %318 to i32, !insn.addr !535
  %321 = or i32 %319, %320, !insn.addr !535
  %322 = icmp ule i32 %321, %311, !insn.addr !535
  %323 = icmp ult i32 %319, %311, !insn.addr !535
  %324 = select i1 %318, i1 %322, i1 %323, !insn.addr !535
  %325 = select i1 %324, i32 %316, i32 0
  %r3.31 = sub i32 %r3.30, %325
  %326 = icmp ult i32 %r3.31, %spec.select, !insn.addr !536
  %327 = icmp ne i1 %326, true, !insn.addr !536
  %328 = mul i32 %321, 2, !insn.addr !537
  %329 = zext i1 %327 to i32, !insn.addr !537
  %330 = or i32 %328, %329, !insn.addr !537
  %331 = icmp slt i32 %4, 0, !insn.addr !538
  %332 = sub i32 0, %330
  %spec.select2 = select i1 %331, i32 %332, i32 %330
  store i32 %spec.select2, i32* %merge.reg2mem
  br label %dec_label_pc_2b48

dec_label_pc_2b14:                                ; preds = %dec_label_pc_2940
  %333 = sub i32 0, %arg1
  %spec.select3 = select i1 %1, i32 %333, i32 %arg1
  store i32 %spec.select3, i32* %merge.reg2mem
  br label %dec_label_pc_2b48

dec_label_pc_2b20:                                ; preds = %dec_label_pc_2950
  %spec.select4 = select i1 %8, i32 %arg1, i32 0
  %334 = ashr i32 %4, 31
  %335 = or i32 %334, 1
  %spec.select5 = select i1 %9, i32 %335, i32 %spec.select4
  store i32 %spec.select5, i32* %merge.reg2mem
  br label %dec_label_pc_2b48

dec_label_pc_2b30:                                ; preds = %dec_label_pc_2960
  %336 = call i32 @llvm.ctlz.i32(i32 %spec.select, i1 true), !range !468, !insn.addr !539
  %337 = xor i32 %336, 31, !insn.addr !540
  %338 = icmp slt i32 %4, 0, !insn.addr !541
  %339 = lshr i32 %spec.select1, %337, !insn.addr !542
  %340 = sub i32 0, %339
  %spec.select6 = select i1 %338, i32 %340, i32 %339
  store i32 %spec.select6, i32* %merge.reg2mem
  br label %dec_label_pc_2b48

; uselistorder directives
  uselistorder i1 %318, { 1, 0 }
  uselistorder i32 %316, { 1, 0 }
  uselistorder i32 %311, { 2, 1, 0, 3 }
  uselistorder i1 %308, { 1, 0 }
  uselistorder i32 %306, { 1, 0 }
  uselistorder i32 %301, { 2, 1, 0, 3 }
  uselistorder i1 %298, { 1, 0 }
  uselistorder i32 %296, { 1, 0 }
  uselistorder i32 %291, { 2, 1, 0, 3 }
  uselistorder i1 %288, { 1, 0 }
  uselistorder i32 %286, { 1, 0 }
  uselistorder i32 %281, { 2, 1, 0, 3 }
  uselistorder i1 %278, { 1, 0 }
  uselistorder i32 %276, { 1, 0 }
  uselistorder i32 %271, { 2, 1, 0, 3 }
  uselistorder i1 %268, { 1, 0 }
  uselistorder i32 %266, { 1, 0 }
  uselistorder i32 %261, { 2, 1, 0, 3 }
  uselistorder i1 %258, { 1, 0 }
  uselistorder i32 %256, { 1, 0 }
  uselistorder i32 %251, { 2, 1, 0, 3 }
  uselistorder i1 %248, { 1, 0 }
  uselistorder i32 %246, { 1, 0 }
  uselistorder i32 %241, { 2, 1, 0, 3 }
  uselistorder i1 %238, { 1, 0 }
  uselistorder i32 %236, { 1, 0 }
  uselistorder i32 %231, { 2, 1, 0, 3 }
  uselistorder i1 %228, { 1, 0 }
  uselistorder i32 %226, { 1, 0 }
  uselistorder i32 %221, { 2, 1, 0, 3 }
  uselistorder i1 %218, { 1, 0 }
  uselistorder i32 %216, { 1, 0 }
  uselistorder i32 %211, { 2, 1, 0, 3 }
  uselistorder i1 %208, { 1, 0 }
  uselistorder i32 %206, { 1, 0 }
  uselistorder i32 %201, { 2, 1, 0, 3 }
  uselistorder i1 %198, { 1, 0 }
  uselistorder i32 %196, { 1, 0 }
  uselistorder i32 %191, { 2, 1, 0, 3 }
  uselistorder i1 %188, { 1, 0 }
  uselistorder i32 %186, { 1, 0 }
  uselistorder i32 %181, { 2, 1, 0, 3 }
  uselistorder i1 %178, { 1, 0 }
  uselistorder i32 %176, { 1, 0 }
  uselistorder i32 %171, { 2, 1, 0, 3 }
  uselistorder i1 %168, { 1, 0 }
  uselistorder i32 %166, { 1, 0 }
  uselistorder i32 %161, { 2, 1, 0, 3 }
  uselistorder i1 %158, { 1, 0 }
  uselistorder i32 %156, { 1, 0 }
  uselistorder i32 %151, { 2, 1, 0, 3 }
  uselistorder i1 %148, { 1, 0 }
  uselistorder i32 %146, { 1, 0 }
  uselistorder i32 %141, { 2, 1, 0, 3 }
  uselistorder i1 %138, { 1, 0 }
  uselistorder i32 %136, { 1, 0 }
  uselistorder i32 %131, { 2, 1, 0, 3 }
  uselistorder i1 %128, { 1, 0 }
  uselistorder i32 %126, { 1, 0 }
  uselistorder i32 %121, { 2, 1, 0, 3 }
  uselistorder i1 %118, { 1, 0 }
  uselistorder i32 %116, { 1, 0 }
  uselistorder i32 %111, { 2, 1, 0, 3 }
  uselistorder i1 %108, { 1, 0 }
  uselistorder i32 %106, { 1, 0 }
  uselistorder i32 %101, { 2, 1, 0, 3 }
  uselistorder i1 %98, { 1, 0 }
  uselistorder i32 %96, { 1, 0 }
  uselistorder i32 %91, { 2, 1, 0, 3 }
  uselistorder i1 %88, { 1, 0 }
  uselistorder i32 %86, { 1, 0 }
  uselistorder i32 %81, { 2, 1, 0, 3 }
  uselistorder i1 %78, { 1, 0 }
  uselistorder i32 %76, { 1, 0 }
  uselistorder i32 %71, { 2, 1, 0, 3 }
  uselistorder i1 %68, { 1, 0 }
  uselistorder i32 %66, { 1, 0 }
  uselistorder i32 %61, { 2, 1, 0, 3 }
  uselistorder i1 %58, { 1, 0 }
  uselistorder i32 %56, { 1, 0 }
  uselistorder i32 %51, { 2, 1, 0, 3 }
  uselistorder i1 %48, { 1, 0 }
  uselistorder i32 %46, { 1, 0 }
  uselistorder i32 %41, { 2, 1, 0, 3 }
  uselistorder i1 %38, { 1, 0 }
  uselistorder i32 %36, { 1, 0 }
  uselistorder i32 %31, { 2, 1, 0, 3 }
  uselistorder i1 %28, { 1, 0 }
  uselistorder i32 %26, { 1, 0 }
  uselistorder i32 %22, { 2, 1, 0 }
  uselistorder i32 %spec.select1, { 3, 0, 5, 4, 1, 2 }
  uselistorder i32 %4, { 1, 2, 0 }
  uselistorder i32 %spec.select, { 36, 38, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 37, 35, 30, 31, 33, 34, 32 }
  uselistorder i32* %merge.reg2mem, { 2, 3, 4, 5, 0, 6, 1 }
  uselistorder i32 4, { 0, 1, 7, 8, 2, 3, 9, 4, 5, 6, 10, 11, 12 }
  uselistorder i32 2, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 55, 56, 46, 33, 34, 35, 54, 45, 48, 49, 36, 37, 57, 58, 38, 39, 63, 64, 40, 41, 47, 59, 42, 65, 66, 43, 50, 51, 52, 53, 0, 44, 60, 61, 62 }
  uselistorder i1 false, { 2, 1, 0 }
  uselistorder i32 31, { 0, 2, 3, 1 }
  uselistorder i32 -1, { 15, 8, 13, 9, 0, 14, 16, 17, 18, 19, 20, 21, 1, 2, 3, 4, 10, 5, 11, 12, 6, 7 }
  uselistorder i1 true, { 43, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 44, 45, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42 }
  uselistorder i32 0, { 213, 214, 79, 215, 216, 217, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 0, 218, 219, 220, 221, 223, 222, 30, 87, 88, 89, 90, 85, 86, 91, 92, 93, 94, 187, 95, 96, 188, 97, 98, 189, 99, 100, 101, 102, 32, 210, 190, 82, 211, 1, 212, 2, 224, 191, 192, 225, 107, 108, 103, 104, 109, 110, 193, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 194, 121, 122, 123, 124, 125, 126, 105, 106, 127, 128, 129, 130, 131, 132, 195, 133, 134, 3, 4, 5, 37, 196, 33, 197, 6, 7, 8, 9, 10, 38, 198, 11, 12, 13, 14, 42, 199, 84, 226, 200, 34, 201, 15, 16, 17, 18, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 202, 75, 35, 19, 20, 21, 36, 39, 22, 40, 227, 23, 228, 24, 43, 25, 41, 26, 27, 28, 80, 81, 29, 31, 76, 77, 83, 78, 208, 209, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 203, 204, 205, 206, 207 }
  uselistorder i32 1, { 64, 113, 2, 78, 79, 101, 111, 112, 3, 74, 102, 67, 75, 4, 5, 114, 80, 115, 6, 81, 76, 107, 106, 105, 104, 103, 116, 9, 8, 7, 117, 10, 118, 119, 11, 82, 12, 13, 83, 14, 120, 16, 15, 121, 19, 18, 17, 122, 25, 24, 23, 22, 21, 20, 26, 123, 84, 27, 124, 28, 85, 125, 72, 30, 29, 62, 126, 127, 108, 33, 32, 31, 86, 77, 90, 87, 88, 89, 128, 34, 36, 38, 39, 37, 35, 65, 66, 129, 42, 63, 43, 41, 40, 130, 109, 45, 44, 46, 131, 48, 47, 60, 61, 73, 132, 50, 49, 51, 68, 54, 53, 52, 69, 55, 70, 56, 71, 57, 91, 92, 93, 58, 94, 95, 59, 96, 1, 0, 110, 97, 98, 99, 100 }
  uselistorder i32 %arg2, { 0, 1, 2, 4, 3 }
  uselistorder i32 %arg1, { 1, 2, 6, 3, 4, 5, 0 }
  uselistorder label %dec_label_pc_2b48, { 1, 2, 3, 4, 5, 0 }
}

define i32 @__aeabi_idivmod(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2b58:
  ret i32 %arg1, !insn.addr !543
}

define i32 @__aeabi_idiv0(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2b78:
  %0 = call i32 @raise(i32 8), !insn.addr !544
  ret i32 %0, !insn.addr !545

; uselistorder directives
  uselistorder i32 8, { 2, 0, 3, 1, 4, 5, 6 }
}

define i32 @_fini(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_2b88:
  ret i32 %arg1, !insn.addr !546
}

declare i32 @raise(i32) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__cxa_finalize(i32*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare void @longjmp([1 x %__jmp_buf_tag], i32) local_unnamed_addr

declare i32 @_setjmp([1 x %__jmp_buf_tag]) local_unnamed_addr

declare i32 @__gmon_start__.2() local_unnamed_addr

declare void @abort() local_unnamed_addr

; Function Attrs: nounwind readnone speculatable
declare i32 @llvm.ctlz.i32(i32, i1) #0

attributes #0 = { nounwind readnone speculatable }

!0 = !{i64 1204}
!1 = !{i64 1208}
!2 = !{i64 1240}
!3 = !{i64 1252}
!4 = !{i64 1264}
!5 = !{i64 1276}
!6 = !{i64 1288}
!7 = !{i64 1300}
!8 = !{i64 1312}
!9 = !{i64 1324}
!10 = !{i64 1380}
!11 = !{i64 1384}
!12 = !{i64 1408}
!13 = !{i64 1412}
!14 = !{i64 1416}
!15 = !{i64 1420}
!16 = !{i64 1460}
!17 = !{i64 1540}
!18 = !{i64 1592}
!19 = !{i64 1600}
!20 = !{i64 1604}
!21 = !{i64 1616}
!22 = !{i64 1620}
!23 = !{i64 1624}
!24 = !{i64 1632}
!25 = !{i64 1636}
!26 = !{i64 1640}
!27 = !{i64 1656}
!28 = !{i64 1660}
!29 = !{i64 1684}
!30 = !{i64 1712}
!31 = !{i64 1724}
!32 = !{i64 1740}
!33 = !{i64 1756}
!34 = !{i64 1776}
!35 = !{i64 1808}
!36 = !{i64 1828}
!37 = !{i64 1868}
!38 = !{i64 1892}
!39 = !{i64 1908}
!40 = !{i64 1968}
!41 = !{i64 1972}
!42 = !{i64 2004}
!43 = !{i64 2020}
!44 = !{i64 2036}
!45 = !{i64 2052}
!46 = !{i64 2068}
!47 = !{i64 2096}
!48 = !{i64 2156}
!49 = !{i64 2160}
!50 = !{i64 2220}
!51 = !{i64 2248}
!52 = !{i64 2260}
!53 = !{i64 2272}
!54 = !{i64 2276}
!55 = !{i64 2336}
!56 = !{i64 2364}
!57 = !{i64 2392}
!58 = !{i64 2420}
!59 = !{i64 2432}
!60 = !{i64 2444}
!61 = !{i64 2488}
!62 = !{i64 2492}
!63 = !{i64 2508}
!64 = !{i64 2652}
!65 = !{i64 2656}
!66 = !{i64 2672}
!67 = !{i64 2860}
!68 = !{i64 2940}
!69 = !{i64 2952}
!70 = !{i64 2964}
!71 = !{i64 2976}
!72 = !{i64 2980}
!73 = !{i64 3064}
!74 = !{i64 3076}
!75 = !{i64 3084}
!76 = !{i64 3096}
!77 = !{i64 3104}
!78 = !{i64 3128}
!79 = !{i64 3132}
!80 = !{i64 3168}
!81 = !{i64 3220}
!82 = !{i64 3224}
!83 = !{i64 3248}
!84 = !{i64 3252}
!85 = !{i64 3268}
!86 = !{i64 3272}
!87 = !{i64 3276}
!88 = !{i64 3288}
!89 = !{i64 3348}
!90 = !{i64 3356}
!91 = !{i64 3372}
!92 = !{i64 3384}
!93 = !{i64 3388}
!94 = !{i64 3392}
!95 = !{i64 3404}
!96 = !{i64 3420}
!97 = !{i64 3424}
!98 = !{i64 3440}
!99 = !{i64 3448}
!100 = !{i64 3488}
!101 = !{i64 3588}
!102 = !{i64 3592}
!103 = !{i64 3624}
!104 = !{i64 3676}
!105 = !{i64 3684}
!106 = !{i64 3688}
!107 = !{i64 3716}
!108 = !{i64 3660}
!109 = !{i64 3752}
!110 = !{i64 3760}
!111 = !{i64 3800}
!112 = !{i64 3812}
!113 = !{i64 3816}
!114 = !{i64 3824}
!115 = !{i64 3864}
!116 = !{i64 3884}
!117 = !{i64 3948}
!118 = !{i64 3964}
!119 = !{i64 3968}
!120 = !{i64 3984}
!121 = !{i64 4052}
!122 = !{i64 4064}
!123 = !{i64 4032}
!124 = !{i64 4096}
!125 = !{i64 4124}
!126 = !{i64 4164}
!127 = !{i64 4188}
!128 = !{i64 4216}
!129 = !{i64 4232}
!130 = !{i64 4244}
!131 = !{i64 4264}
!132 = !{i64 4276}
!133 = !{i64 4288}
!134 = !{i64 4296}
!135 = !{i64 4316}
!136 = !{i64 4328}
!137 = !{i64 4340}
!138 = !{i64 4352}
!139 = !{i64 4372}
!140 = !{i64 4384}
!141 = !{i64 4396}
!142 = !{i64 4408}
!143 = !{i64 4420}
!144 = !{i64 4452}
!145 = !{i64 4468}
!146 = !{i64 4476}
!147 = !{i64 4492}
!148 = !{i64 4500}
!149 = !{i64 4516}
!150 = !{i64 4524}
!151 = !{i64 4540}
!152 = !{i64 4548}
!153 = !{i64 4564}
!154 = !{i64 4572}
!155 = !{i64 4588}
!156 = !{i64 4596}
!157 = !{i64 4612}
!158 = !{i64 4620}
!159 = !{i64 4636}
!160 = !{i64 4648}
!161 = !{i64 4664}
!162 = !{i64 4676}
!163 = !{i64 4692}
!164 = !{i64 4704}
!165 = !{i64 4720}
!166 = !{i64 4728}
!167 = !{i64 4748}
!168 = !{i64 4756}
!169 = !{i64 4768}
!170 = !{i64 4776}
!171 = !{i64 4792}
!172 = !{i64 4800}
!173 = !{i64 4820}
!174 = !{i64 4828}
!175 = !{i64 4840}
!176 = !{i64 4848}
!177 = !{i64 4864}
!178 = !{i64 4876}
!179 = !{i64 4896}
!180 = !{i64 4908}
!181 = !{i64 4920}
!182 = !{i64 4932}
!183 = !{i64 5020}
!184 = !{i64 5052}
!185 = !{i64 5124}
!186 = !{i64 5128}
!187 = !{i64 5136}
!188 = !{i64 5144}
!189 = !{i64 5148}
!190 = !{i64 5168}
!191 = !{i64 5176}
!192 = !{i64 5188}
!193 = !{i64 5112}
!194 = !{i64 5208}
!195 = !{i64 5084}
!196 = !{i64 5244}
!197 = !{i64 5252}
!198 = !{i64 5280}
!199 = !{i64 5268}
!200 = !{i64 5284}
!201 = !{i64 5300}
!202 = !{i64 5316}
!203 = !{i64 5332}
!204 = !{i64 5336}
!205 = !{i64 5352}
!206 = !{i64 5356}
!207 = !{i64 5368}
!208 = !{i64 5372}
!209 = !{i64 5396}
!210 = !{i64 5412}
!211 = !{i64 5436}
!212 = !{i64 5440}
!213 = !{i64 5448}
!214 = !{i64 5496}
!215 = !{i64 5500}
!216 = !{i64 5516}
!217 = !{i64 5528}
!218 = !{i64 5536}
!219 = !{i64 5544}
!220 = !{i64 5548}
!221 = !{i64 5604}
!222 = !{i64 5608}
!223 = !{i64 5632}
!224 = !{i64 5692}
!225 = !{i64 5700}
!226 = !{i64 5704}
!227 = !{i64 5720}
!228 = !{i64 6100}
!229 = !{i64 6212}
!230 = !{i64 6216}
!231 = !{i64 6228}
!232 = !{i64 6240}
!233 = !{i64 6252}
!234 = !{i64 6152}
!235 = !{i64 6176}
!236 = !{i64 6272}
!237 = !{i64 6280}
!238 = !{i64 6288}
!239 = !{i64 6292}
!240 = !{i64 6328}
!241 = !{i64 6344}
!242 = !{i64 6360}
!243 = !{i64 6392}
!244 = !{i64 6412}
!245 = !{i64 6416}
!246 = !{i64 6444}
!247 = !{i64 6432}
!248 = !{i64 6448}
!249 = !{i64 6460}
!250 = !{i64 6476}
!251 = !{i64 6500}
!252 = !{i64 6504}
!253 = !{i64 6528}
!254 = !{i64 6556}
!255 = !{i64 6560}
!256 = !{i64 6572}
!257 = !{i64 6580}
!258 = !{i64 6596}
!259 = !{i64 6600}
!260 = !{i64 6628}
!261 = !{i64 6652}
!262 = !{i64 6660}
!263 = !{i64 6664}
!264 = !{i64 6672}
!265 = !{i64 6688}
!266 = !{i64 6692}
!267 = !{i64 6720}
!268 = !{i64 6744}
!269 = !{i64 6748}
!270 = !{i64 6756}
!271 = !{i64 6760}
!272 = !{i64 6776}
!273 = !{i64 6784}
!274 = !{i64 6788}
!275 = !{i64 6796}
!276 = !{i64 6804}
!277 = !{i64 6808}
!278 = !{i64 6816}
!279 = !{i64 6820}
!280 = !{i64 6828}
!281 = !{i64 6844}
!282 = !{i64 6848}
!283 = !{i64 6876}
!284 = !{i64 6900}
!285 = !{i64 6908}
!286 = !{i64 6912}
!287 = !{i64 6920}
!288 = !{i64 6936}
!289 = !{i64 6984}
!290 = !{i64 7132}
!291 = !{i64 7156}
!292 = !{i64 7164}
!293 = !{i64 7180}
!294 = !{i64 7188}
!295 = !{i64 7208}
!296 = !{i64 7216}
!297 = !{i64 7220}
!298 = !{i64 7272}
!299 = !{i64 7292}
!300 = !{i64 7312}
!301 = !{i64 7328}
!302 = !{i64 7352}
!303 = !{i64 7376}
!304 = !{i64 7384}
!305 = !{i64 7400}
!306 = !{i64 7412}
!307 = !{i64 7420}
!308 = !{i64 7436}
!309 = !{i64 7448}
!310 = !{i64 7468}
!311 = !{i64 7476}
!312 = !{i64 7488}
!313 = !{i64 7500}
!314 = !{i64 7512}
!315 = !{i64 7524}
!316 = !{i64 7544}
!317 = !{i64 7552}
!318 = !{i64 7564}
!319 = !{i64 7592}
!320 = !{i64 7632}
!321 = !{i64 7644}
!322 = !{i64 7660}
!323 = !{i64 7672}
!324 = !{i64 7688}
!325 = !{i64 7696}
!326 = !{i64 7712}
!327 = !{i64 7720}
!328 = !{i64 7728}
!329 = !{i64 7744}
!330 = !{i64 7752}
!331 = !{i64 7768}
!332 = !{i64 7780}
!333 = !{i64 7796}
!334 = !{i64 7808}
!335 = !{i64 7824}
!336 = !{i64 7844}
!337 = !{i64 7860}
!338 = !{i64 7872}
!339 = !{i64 7892}
!340 = !{i64 7904}
!341 = !{i64 7916}
!342 = !{i64 7948}
!343 = !{i64 7952}
!344 = !{i64 7968}
!345 = !{i64 7980}
!346 = !{i64 8056}
!347 = !{i64 8080}
!348 = !{i64 8084}
!349 = !{i64 8088}
!350 = !{i64 8100}
!351 = !{i64 8104}
!352 = !{i64 8124}
!353 = !{i64 8136}
!354 = !{i64 8156}
!355 = !{i64 8164}
!356 = !{i64 8172}
!357 = !{i64 8200}
!358 = !{i64 8228}
!359 = !{i64 8232}
!360 = !{i64 8260}
!361 = !{i64 8304}
!362 = !{i64 8452}
!363 = !{i64 8480}
!364 = !{i64 8488}
!365 = !{i64 8512}
!366 = !{i64 8520}
!367 = !{i64 8544}
!368 = !{i64 8552}
!369 = !{i64 8556}
!370 = !{i64 8580}
!371 = !{i64 8584}
!372 = !{i64 8600}
!373 = !{i64 8608}
!374 = !{i64 8636}
!375 = !{i64 8640}
!376 = !{i64 8664}
!377 = !{i64 8668}
!378 = !{i64 8684}
!379 = !{i64 8692}
!380 = !{i64 8720}
!381 = !{i64 8744}
!382 = !{i64 8752}
!383 = !{i64 8776}
!384 = !{i64 8784}
!385 = !{i64 8808}
!386 = !{i64 8816}
!387 = !{i64 8840}
!388 = !{i64 8848}
!389 = !{i64 8872}
!390 = !{i64 8880}
!391 = !{i64 9012}
!392 = !{i64 9048}
!393 = !{i64 9052}
!394 = !{i64 9068}
!395 = !{i64 9424}
!396 = !{i64 9452}
!397 = !{i64 9456}
!398 = !{i64 9464}
!399 = !{i64 9552}
!400 = !{i64 9572}
!401 = !{i64 9588}
!402 = !{i64 9600}
!403 = !{i64 9652}
!404 = !{i64 9656}
!405 = !{i64 9668}
!406 = !{i64 9780}
!407 = !{i64 9708}
!408 = !{i64 9712}
!409 = !{i64 9788}
!410 = !{i64 9820}
!411 = !{i64 9828}
!412 = !{i64 9832}
!413 = !{i64 9864}
!414 = !{i64 9880}
!415 = !{i64 9920}
!416 = !{i64 9956}
!417 = !{i64 9960}
!418 = !{i64 9972}
!419 = !{i64 9976}
!420 = !{i64 9988}
!421 = !{i64 9992}
!422 = !{i64 10000}
!423 = !{i64 10008}
!424 = !{i64 10012}
!425 = !{i64 10020}
!426 = !{i64 10032}
!427 = !{i64 10056}
!428 = !{i64 10068}
!429 = !{i64 10088}
!430 = !{i64 10100}
!431 = !{i64 10112}
!432 = !{i64 10120}
!433 = !{i64 10140}
!434 = !{i64 10148}
!435 = !{i64 10160}
!436 = !{i64 10180}
!437 = !{i64 10196}
!438 = !{i64 10208}
!439 = !{i64 10224}
!440 = !{i64 10240}
!441 = !{i64 10256}
!442 = !{i64 10272}
!443 = !{i64 10288}
!444 = !{i64 10336}
!445 = !{i64 10344}
!446 = !{i64 10360}
!447 = !{i64 10368}
!448 = !{i64 10384}
!449 = !{i64 10392}
!450 = !{i64 10408}
!451 = !{i64 10416}
!452 = !{i64 10432}
!453 = !{i64 10444}
!454 = !{i64 10524}
!455 = !{i64 10528}
!456 = !{i64 10532}
!457 = !{i64 10548}
!458 = !{i64 10552}
!459 = !{i64 10556}
!460 = !{i64 10568}
!461 = !{i64 10572}
!462 = !{i64 10560}
!463 = !{i64 10576}
!464 = !{i64 10584}
!465 = !{i64 10588}
!466 = !{i64 10592}
!467 = !{i64 10596}
!468 = !{i32 0, i32 33}
!469 = !{i64 10600}
!470 = !{i64 10604}
!471 = !{i64 10608}
!472 = !{i64 10612}
!473 = !{i64 10624}
!474 = !{i64 10632}
!475 = !{i64 10636}
!476 = !{i64 10644}
!477 = !{i64 10648}
!478 = !{i64 10656}
!479 = !{i64 10660}
!480 = !{i64 10668}
!481 = !{i64 10672}
!482 = !{i64 10680}
!483 = !{i64 10684}
!484 = !{i64 10692}
!485 = !{i64 10696}
!486 = !{i64 10704}
!487 = !{i64 10708}
!488 = !{i64 10716}
!489 = !{i64 10720}
!490 = !{i64 10728}
!491 = !{i64 10732}
!492 = !{i64 10740}
!493 = !{i64 10744}
!494 = !{i64 10752}
!495 = !{i64 10756}
!496 = !{i64 10764}
!497 = !{i64 10768}
!498 = !{i64 10776}
!499 = !{i64 10780}
!500 = !{i64 10788}
!501 = !{i64 10792}
!502 = !{i64 10800}
!503 = !{i64 10804}
!504 = !{i64 10812}
!505 = !{i64 10816}
!506 = !{i64 10824}
!507 = !{i64 10828}
!508 = !{i64 10836}
!509 = !{i64 10840}
!510 = !{i64 10848}
!511 = !{i64 10852}
!512 = !{i64 10860}
!513 = !{i64 10864}
!514 = !{i64 10872}
!515 = !{i64 10876}
!516 = !{i64 10884}
!517 = !{i64 10888}
!518 = !{i64 10896}
!519 = !{i64 10900}
!520 = !{i64 10908}
!521 = !{i64 10912}
!522 = !{i64 10920}
!523 = !{i64 10924}
!524 = !{i64 10932}
!525 = !{i64 10936}
!526 = !{i64 10944}
!527 = !{i64 10948}
!528 = !{i64 10956}
!529 = !{i64 10960}
!530 = !{i64 10968}
!531 = !{i64 10972}
!532 = !{i64 10980}
!533 = !{i64 10984}
!534 = !{i64 10992}
!535 = !{i64 10996}
!536 = !{i64 11004}
!537 = !{i64 11008}
!538 = !{i64 11016}
!539 = !{i64 11056}
!540 = !{i64 11060}
!541 = !{i64 11064}
!542 = !{i64 11068}
!543 = !{i64 11124}
!544 = !{i64 11136}
!545 = !{i64 11140}
!546 = !{i64 11148}
