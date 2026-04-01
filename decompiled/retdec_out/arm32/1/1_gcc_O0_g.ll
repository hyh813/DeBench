source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@0 = external local_unnamed_addr global i32
@1 = external local_unnamed_addr global i32
@2 = external local_unnamed_addr global i32
@3 = external local_unnamed_addr global i32
@global_var_2400c = local_unnamed_addr global i32 66608
@global_var_24010 = local_unnamed_addr global i32 66608
@global_var_24014 = local_unnamed_addr global i32 66608
@global_var_24018 = local_unnamed_addr global i32 66608
@global_var_2401c = local_unnamed_addr global i32 66608
@global_var_24020 = local_unnamed_addr global i32 66608
@global_var_24024 = local_unnamed_addr global i32 66608
@global_var_24028 = local_unnamed_addr global i32 66608
@global_var_2402c = local_unnamed_addr global i32 66608
@global_var_24030 = local_unnamed_addr global i32 66608
@global_var_104f8 = local_unnamed_addr constant i32 80648
@global_var_23f0c = global i32 1
@global_var_24000 = local_unnamed_addr global i32* @global_var_23f0c
@global_var_104fc = local_unnamed_addr constant i32 56
@global_var_24038 = local_unnamed_addr global i32 75656
@global_var_12788 = local_unnamed_addr constant i32 -382908416
@global_var_1051c = local_unnamed_addr constant i32 80624
@global_var_10520 = local_unnamed_addr constant i32 52
@global_var_24034 = local_unnamed_addr global i32 0
@global_var_10544 = local_unnamed_addr constant i32 147524
@global_var_10548 = local_unnamed_addr constant i32 147524
@global_var_1054c = local_unnamed_addr constant i32 0
@global_var_1057c = local_unnamed_addr constant i32 147524
@global_var_10580 = local_unnamed_addr constant i32 147524
@global_var_10584 = local_unnamed_addr constant i32 0
@global_var_105ac = local_unnamed_addr constant i32 147528
@global_var_10d30 = local_unnamed_addr constant i32 147208
@global_var_23f08 = local_unnamed_addr global i32 0
@global_var_10d34 = local_unnamed_addr constant i32 76436
@global_var_12a94 = local_unnamed_addr constant i32 10
@global_var_12a98 = local_unnamed_addr constant i32 20
@global_var_12a9c = local_unnamed_addr constant i32 30
@global_var_12aa0 = local_unnamed_addr constant i32 40
@global_var_12aa4 = local_unnamed_addr constant i32 50
@global_var_111a0 = local_unnamed_addr constant i32 76456
@global_var_111a4 = local_unnamed_addr constant i32 76492
@global_var_12acc = constant [31 x i8] c"CF-L1-01 (sequential_ops): %d\0A\00"
@global_var_111a8 = local_unnamed_addr constant i32 76524
@global_var_12aec = constant [26 x i8] c"CF-L1-02 (single_if): %d\0A\00"
@global_var_111ac = local_unnamed_addr constant i32 76552
@global_var_12b08 = constant [24 x i8] c"CF-L1-03 (if_else): %d\0A\00"
@global_var_111b0 = local_unnamed_addr constant i32 76576
@global_var_12b20 = constant [28 x i8] c"CF-L1-04 (nested_if_2): %d\0A\00"
@global_var_111b4 = local_unnamed_addr constant i32 76604
@global_var_12b3c = constant [31 x i8] c"CF-L1-05 (nested_if_deep): %d\0A\00"
@global_var_111b8 = local_unnamed_addr constant i32 76636
@global_var_12b5c = constant [32 x i8] c"CF-L1-06 (if_elseif_chain): %d\0A\00"
@global_var_111bc = local_unnamed_addr constant i32 76668
@global_var_12b7c = constant [31 x i8] c"CF-L1-07 (if_elseif_long): %d\0A\00"
@global_var_111c0 = local_unnamed_addr constant i32 76700
@global_var_12b9c = constant [29 x i8] c"CF-L1-08 (switch_small): %d\0A\00"
@global_var_111c4 = local_unnamed_addr constant i32 76732
@global_var_12bbc = constant [29 x i8] c"CF-L1-09 (switch_large): %d\0A\00"
@global_var_111c8 = local_unnamed_addr constant i32 76764
@global_var_12bdc = constant [31 x i8] c"CF-L1-10 (switch_default): %d\0A\00"
@global_var_111cc = local_unnamed_addr constant i32 76796
@global_var_12bfc = constant [35 x i8] c"CF-L1-11 (switch_fallthrough): %d\0A\00"
@global_var_111d0 = local_unnamed_addr constant i32 76832
@global_var_12c20 = constant [31 x i8] c"CF-L1-12 (loop_for_fixed): %d\0A\00"
@global_var_111d4 = local_unnamed_addr constant [3 x i8] c"90\00"
@global_var_111d8 = local_unnamed_addr constant i32 76864
@global_var_12c40 = constant [27 x i8] c"CF-L1-13 (loop_while): %d\0A\00"
@global_var_111dc = local_unnamed_addr constant i32 9876
@global_var_111e0 = local_unnamed_addr constant i32 76892
@global_var_12c5c = constant [29 x i8] c"CF-L1-14 (loop_dowhile): %d\0A\00"
@global_var_111e4 = local_unnamed_addr constant i32 76924
@global_var_12c7c = constant [28 x i8] c"CF-L1-15 (loop_nested): %d\0A\00"
@global_var_111e8 = local_unnamed_addr constant i32 76952
@global_var_12c98 = constant [27 x i8] c"CF-L1-16 (loop_break): %d\0A\00"
@global_var_111ec = local_unnamed_addr constant i32 76980
@global_var_12cb4 = constant [30 x i8] c"CF-L1-17 (loop_continue): %d\0A\00"
@global_var_111f0 = local_unnamed_addr constant i32 77012
@global_var_12cd4 = constant [29 x i8] c"CF-L1-18 (goto_forward): %d\0A\00"
@global_var_111f4 = local_unnamed_addr constant i32 77044
@global_var_12cf4 = constant [30 x i8] c"CF-L1-19 (goto_backward): %d\0A\00"
@global_var_111f8 = local_unnamed_addr constant i32 77076
@global_var_12d14 = constant [27 x i8] c"CF-L1-20 (ternary_op): %d\0A\00"
@global_var_11304 = local_unnamed_addr constant i32 147208
@global_var_11308 = local_unnamed_addr constant i32 77104
@global_var_12d30 = local_unnamed_addr constant i32 1
@global_var_12d34 = local_unnamed_addr constant i32 2
@global_var_12d38 = local_unnamed_addr constant i32 3
@global_var_12d3c = local_unnamed_addr constant i32 4
@global_var_12d40 = local_unnamed_addr constant i32 5
@global_var_12d44 = local_unnamed_addr constant i32 6
@global_var_12d48 = local_unnamed_addr constant i32 7
@global_var_12d4c = local_unnamed_addr constant i32 8
@global_var_12d50 = local_unnamed_addr constant i32 9
@global_var_12d54 = local_unnamed_addr constant i32 10
@global_var_12d58 = local_unnamed_addr constant i32 11
@global_var_12d5c = local_unnamed_addr constant i32 12
@global_var_11a28 = local_unnamed_addr constant i32 147208
@global_var_11a2c = local_unnamed_addr constant i32 77152
@global_var_12d64 = local_unnamed_addr constant i32 72028
@global_var_12d68 = local_unnamed_addr constant i32 71536
@global_var_11d70 = local_unnamed_addr constant i32 147208
@global_var_11d74 = local_unnamed_addr constant i32 77164
@global_var_11d78 = local_unnamed_addr constant i32 77200
@global_var_12d90 = constant [32 x i8] c"CF-L2-01 (loop_multi_exit): %d\0A\00"
@global_var_11d7c = local_unnamed_addr constant i32 77232
@global_var_12db0 = constant [30 x i8] c"CF-L2-02 (infinite_loop): %d\0A\00"
@global_var_11d80 = local_unnamed_addr constant i32 77264
@global_var_12dd0 = constant [29 x i8] c"CF-L2-03 (multi_return): %d\0A\00"
@global_var_11d84 = local_unnamed_addr constant i32 77296
@global_var_12df0 = constant [35 x i8] c"CF-L2-04 (conditional_return): %d\0A\00"
@global_var_11d88 = local_unnamed_addr constant i32 77680
@global_var_12f70 = local_unnamed_addr constant i32 1
@global_var_12f74 = local_unnamed_addr constant i32 2
@global_var_12f78 = local_unnamed_addr constant i32 3
@global_var_12f7c = local_unnamed_addr constant i32 4
@global_var_12f80 = local_unnamed_addr constant i32 5
@global_var_12f84 = local_unnamed_addr constant i32 6
@global_var_12f88 = local_unnamed_addr constant i32 7
@global_var_12f8c = local_unnamed_addr constant i32 8
@global_var_11d8c = local_unnamed_addr constant i32 77332
@global_var_12e14 = constant [29 x i8] c"CF-L2-05 (duffs_device): %d\0A\00"
@global_var_11d90 = local_unnamed_addr constant i32 77364
@global_var_12e34 = constant [34 x i8] c"CF-L2-06 (loop_complex_cond): %d\0A\00"
@global_var_11d94 = local_unnamed_addr constant i32 77400
@global_var_12e58 = constant [32 x i8] c"CF-L2-07 (loop_modify_var): %d\0A\00"
@global_var_11d98 = local_unnamed_addr constant i32 77432
@global_var_12e78 = constant [36 x i8] c"CF-L2-08 (loop_external_state): %d\0A\00"
@global_var_11d9c = local_unnamed_addr constant i32 77468
@global_var_12e9c = constant [36 x i8] c"CF-L2-09 (recursion_factorial): %d\0A\00"
@global_var_11da0 = local_unnamed_addr constant i32 77504
@global_var_12ec0 = constant [31 x i8] c"CF-L2-10 (tail_recursion): %d\0A\00"
@global_var_11da4 = local_unnamed_addr constant i32 77536
@global_var_12ee0 = constant [35 x i8] c"CF-L2-11 (indirect_recursion): %d\0A\00"
@global_var_11dac = local_unnamed_addr constant i32 77572
@global_var_12f04 = constant [30 x i8] c"CF-L2-12 (call_func_ptr): %d\0A\00"
@global_var_11db0 = local_unnamed_addr constant i32 77604
@global_var_12f24 = constant [36 x i8] c"CF-L2-13 (call_func_ptr_array): %d\0A\00"
@global_var_11db4 = local_unnamed_addr constant i32 77712
@global_var_12f90 = local_unnamed_addr constant i32 1
@global_var_12f94 = local_unnamed_addr constant i32 2
@global_var_12f98 = local_unnamed_addr constant i32 3
@global_var_12f9c = local_unnamed_addr constant i32 4
@global_var_12fa0 = local_unnamed_addr constant i32 5
@global_var_11db8 = local_unnamed_addr constant i32 77640
@global_var_12f48 = constant [38 x i8] c"CF-L2-15 (process_with_callback): %d\0A\00"
@global_var_11e2c = local_unnamed_addr constant i32 147536
@jump_buffer = global i32 0
@global_var_12144 = local_unnamed_addr constant i32 147208
@global_var_12148 = local_unnamed_addr constant i32 77732
@global_var_12fa8 = local_unnamed_addr constant i32 73392
@global_var_12fac = local_unnamed_addr constant i32 73440
@global_var_12fb0 = local_unnamed_addr constant i32 73488
@global_var_12fb4 = local_unnamed_addr constant i32 73556
@global_var_12fb8 = local_unnamed_addr constant i32 73628
@global_var_12fbc = local_unnamed_addr constant i32 73676
@global_var_12fc0 = local_unnamed_addr constant i32 73724
@global_var_12fc4 = local_unnamed_addr constant i32 73772
@global_var_12fc8 = local_unnamed_addr constant i32 73820
@global_var_123f0 = local_unnamed_addr constant i32 147208
@global_var_123f4 = local_unnamed_addr constant i32 77772
@global_var_12fd0 = local_unnamed_addr constant i32 74412
@global_var_12fd4 = local_unnamed_addr constant i32 74488
@global_var_12fd8 = local_unnamed_addr constant i32 74524
@global_var_124ac = local_unnamed_addr constant i32 147208
@global_var_124b0 = local_unnamed_addr constant i32 77788
@global_var_12fdc = local_unnamed_addr constant i32 74856
@global_var_12fe0 = local_unnamed_addr constant i32 74864
@global_var_12fe4 = local_unnamed_addr constant i32 74872
@global_var_12fe8 = local_unnamed_addr constant i32 74880
@global_var_12754 = local_unnamed_addr constant i32 147208
@global_var_12758 = local_unnamed_addr constant i32 77804
@global_var_1275c = local_unnamed_addr constant i32 77840
@global_var_13010 = constant [31 x i8] c"CF-L3-01 (non_local_jump): %d\0A\00"
@global_var_12760 = local_unnamed_addr constant i32 77872
@global_var_13030 = constant [30 x i8] c"CF-L3-02 (cpp_exception): %d\0A\00"
@global_var_12764 = local_unnamed_addr constant i32 77904
@global_var_13050 = constant [33 x i8] c"CF-L3-03 (large_jump_table): %d\0A\00"
@global_var_12768 = local_unnamed_addr constant i32 77940
@global_var_13074 = constant [37 x i8] c"CF-L3-04 (conditional_func_ptr): %d\0A\00"
@global_var_1276c = local_unnamed_addr constant i32 77980
@global_var_1309c = constant [30 x i8] c"CF-L3-05 (state_machine): %d\0A\00"
@global_var_12770 = local_unnamed_addr constant i32 78012
@global_var_130bc = constant [31 x i8] c"CF-L3-06 (fsm_func_table): %d\0A\00"
@global_var_12774 = local_unnamed_addr constant i32 78176
@global_var_13160 = local_unnamed_addr constant i32 0
@global_var_13164 = local_unnamed_addr constant i32 1
@global_var_13168 = local_unnamed_addr constant i32 2
@global_var_1316c = local_unnamed_addr constant i32 3
@global_var_12778 = local_unnamed_addr constant i32 78044
@global_var_130dc = constant [30 x i8] c"CF-L3-07 (computed_goto): %d\0A\00"
@global_var_1277c = local_unnamed_addr constant i32 78076
@global_var_130fc = constant [30 x i8] c"CF-L3-08 (obfuscated_cf): %d\0A\00"
@global_var_12780 = local_unnamed_addr constant i32 78108
@global_var_1311c = constant [33 x i8] c"CF-L3-09 (opaque_predicate): %d\0A\00"
@global_var_12784 = local_unnamed_addr constant i32 78144
@global_var_13140 = constant [32 x i8] c"CF-L3-10 (overlapped_code): %d\0A\00"
@global_var_10b7c = local_unnamed_addr constant i64 -1932695132127730073
@global_var_10be0 = local_unnamed_addr constant i64 -1932695132127730073
@4 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\9F\BA\E7\A1\80\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_12aa8 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @4, i32 0, i32 0)
@global_var_12d60 = local_unnamed_addr constant i32 (i32)* inttoptr (i32 71988 to i32 (i32)*)
@5 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\AB\98\E7\BA\A7\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_12d6c = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @5, i32 0, i32 0)
@global_var_11da8 = local_unnamed_addr constant i32 (i32)* inttoptr (i32 71988 to i32 (i32)*)
@global_var_12fa4 = local_unnamed_addr constant i32 (i32, i32)* inttoptr (i32 73344 to i32 (i32, i32)*)
@global_var_121b4 = local_unnamed_addr constant i32 (i32)* inttoptr (i32 71988 to i32 (i32)*)
@global_var_121b8 = local_unnamed_addr constant i32 (i32)* inttoptr (i32 72028 to i32 (i32)*)
@global_var_121bc = local_unnamed_addr constant i32 (i32)* inttoptr (i32 71536 to i32 (i32)*)
@global_var_12fcc = local_unnamed_addr constant i32 (i32)* inttoptr (i32 74360 to i32 (i32)*)
@6 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\9E\81\E7\AB\AF\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_12fec = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @6, i32 0, i32 0)

define i32 @sequential_ops(i32 %a, i32 %b, i32 %c) local_unnamed_addr {
dec_label_pc_105b4:
  %0 = add i32 %b, %a, !insn.addr !0
  %1 = mul i32 %0, 2, !insn.addr !1
  %2 = sub i32 %1, %c, !insn.addr !2
  ret i32 %2, !insn.addr !3
}

define i32 @single_if(i32 %x) local_unnamed_addr {
dec_label_pc_1060c:
  %0 = icmp sgt i32 %x, 0, !insn.addr !4
  %1 = zext i1 %0 to i32
  %spec.select = shl i32 %x, %1
  ret i32 %spec.select, !insn.addr !5

; uselistorder directives
  uselistorder i32 %x, { 1, 0 }
}

define i32 @if_else(i32 %x) local_unnamed_addr {
dec_label_pc_10648:
  %0 = icmp sgt i32 %x, 0, !insn.addr !6
  %. = zext i1 %0 to i32
  ret i32 %., !insn.addr !7
}

define i32 @nested_if_2(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_10680:
  %0 = icmp slt i32 %a, 1, !insn.addr !8
  br i1 %0, label %dec_label_pc_106c8, label %dec_label_pc_106a0, !insn.addr !8

dec_label_pc_106a0:                               ; preds = %dec_label_pc_10680
  %1 = icmp sgt i32 %b, 0, !insn.addr !9
  %2 = select i1 %1, i32 %b, i32 0
  %spec.select = add i32 %2, %a
  ret i32 %spec.select

dec_label_pc_106c8:                               ; preds = %dec_label_pc_10680
  ret i32 0, !insn.addr !10
}

define i32 @nested_if_deep(i32 %a, i32 %b, i32 %c, i32 %d, i32 %e) local_unnamed_addr {
dec_label_pc_106d8:
  %r3.0.reg2mem = alloca i32, !insn.addr !11
  %0 = icmp slt i32 %a, 1, !insn.addr !12
  store i32 0, i32* %r3.0.reg2mem, !insn.addr !12
  br i1 %0, label %dec_label_pc_1075c, label %dec_label_pc_10700, !insn.addr !12

dec_label_pc_10700:                               ; preds = %dec_label_pc_106d8
  %1 = icmp slt i32 %b, 1, !insn.addr !13
  store i32 1, i32* %r3.0.reg2mem, !insn.addr !13
  br i1 %1, label %dec_label_pc_1075c, label %dec_label_pc_1070c, !insn.addr !13

dec_label_pc_1070c:                               ; preds = %dec_label_pc_10700
  %2 = icmp slt i32 %c, 1, !insn.addr !14
  store i32 2, i32* %r3.0.reg2mem, !insn.addr !14
  br i1 %2, label %dec_label_pc_1075c, label %dec_label_pc_10718, !insn.addr !14

dec_label_pc_10718:                               ; preds = %dec_label_pc_1070c
  %3 = icmp slt i32 %d, 1, !insn.addr !15
  store i32 3, i32* %r3.0.reg2mem, !insn.addr !15
  br i1 %3, label %dec_label_pc_1075c, label %dec_label_pc_10724, !insn.addr !15

dec_label_pc_10724:                               ; preds = %dec_label_pc_10718
  %4 = icmp slt i32 %e, 1, !insn.addr !16
  %. = select i1 %4, i32 4, i32 5
  store i32 %., i32* %r3.0.reg2mem, !insn.addr !17
  br label %dec_label_pc_1075c, !insn.addr !17

dec_label_pc_1075c:                               ; preds = %dec_label_pc_106d8, %dec_label_pc_10700, %dec_label_pc_1070c, %dec_label_pc_10718, %dec_label_pc_10724
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  ret i32 %r3.0.reload, !insn.addr !18

; uselistorder directives
  uselistorder i32* %r3.0.reg2mem, { 0, 5, 4, 3, 2, 1 }
  uselistorder label %dec_label_pc_1075c, { 4, 3, 2, 1, 0 }
}

define i32 @if_elseif_chain(i32 %x) local_unnamed_addr {
dec_label_pc_1076c:
  %r3.0.reg2mem = alloca i32, !insn.addr !19
  store i32 10, i32* %r3.0.reg2mem
  switch i32 %x, label %dec_label_pc_107b8 [
    i32 0, label %dec_label_pc_107bc
    i32 1, label %dec_label_pc_1079c
    i32 2, label %dec_label_pc_107b0
  ]

dec_label_pc_1079c:                               ; preds = %dec_label_pc_1076c
  store i32 20, i32* %r3.0.reg2mem, !insn.addr !20
  br label %dec_label_pc_107bc, !insn.addr !20

dec_label_pc_107b0:                               ; preds = %dec_label_pc_1076c
  store i32 30, i32* %r3.0.reg2mem, !insn.addr !21
  br label %dec_label_pc_107bc, !insn.addr !21

dec_label_pc_107b8:                               ; preds = %dec_label_pc_1076c
  store i32 -1, i32* %r3.0.reg2mem, !insn.addr !22
  br label %dec_label_pc_107bc, !insn.addr !22

dec_label_pc_107bc:                               ; preds = %dec_label_pc_1076c, %dec_label_pc_107b8, %dec_label_pc_107b0, %dec_label_pc_1079c
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  ret i32 %r3.0.reload, !insn.addr !23

; uselistorder directives
  uselistorder i32* %r3.0.reg2mem, { 0, 2, 3, 4, 1 }
  uselistorder label %dec_label_pc_107bc, { 1, 2, 3, 0 }
}

define i32 @if_elseif_long(i32 %x) local_unnamed_addr {
dec_label_pc_107cc:
  %r3.0.reg2mem = alloca i32, !insn.addr !24
  store i32 100, i32* %r3.0.reg2mem
  switch i32 %x, label %dec_label_pc_10840 [
    i32 0, label %dec_label_pc_10844
    i32 1, label %dec_label_pc_107fc
    i32 2, label %dec_label_pc_10810
    i32 3, label %dec_label_pc_10824
    i32 4, label %dec_label_pc_10838
  ]

dec_label_pc_107fc:                               ; preds = %dec_label_pc_107cc
  store i32 200, i32* %r3.0.reg2mem, !insn.addr !25
  br label %dec_label_pc_10844, !insn.addr !25

dec_label_pc_10810:                               ; preds = %dec_label_pc_107cc
  store i32 300, i32* %r3.0.reg2mem, !insn.addr !26
  br label %dec_label_pc_10844, !insn.addr !26

dec_label_pc_10824:                               ; preds = %dec_label_pc_107cc
  store i32 400, i32* %r3.0.reg2mem, !insn.addr !27
  br label %dec_label_pc_10844, !insn.addr !27

dec_label_pc_10838:                               ; preds = %dec_label_pc_107cc
  store i32 500, i32* %r3.0.reg2mem, !insn.addr !28
  br label %dec_label_pc_10844, !insn.addr !28

dec_label_pc_10840:                               ; preds = %dec_label_pc_107cc
  store i32 -1, i32* %r3.0.reg2mem, !insn.addr !29
  br label %dec_label_pc_10844, !insn.addr !29

dec_label_pc_10844:                               ; preds = %dec_label_pc_107cc, %dec_label_pc_10840, %dec_label_pc_10838, %dec_label_pc_10824, %dec_label_pc_10810, %dec_label_pc_107fc
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  ret i32 %r3.0.reload, !insn.addr !30

; uselistorder directives
  uselistorder i32* %r3.0.reg2mem, { 0, 2, 3, 4, 5, 6, 1 }
  uselistorder label %dec_label_pc_10844, { 1, 2, 3, 4, 5, 0 }
}

define i32 @switch_small(i32 %op) local_unnamed_addr {
dec_label_pc_10854:
  %r3.0.reg2mem = alloca i32, !insn.addr !31
  store i32 %op, i32* @0, align 4, !insn.addr !32
  store i32 15, i32* %r3.0.reg2mem, !insn.addr !32
  switch i32 %op, label %dec_label_pc_108d8 [
    i32 0, label %dec_label_pc_108dc
    i32 1, label %dec_label_pc_108a4
    i32 2, label %dec_label_pc_108b4
    i32 3, label %dec_label_pc_108c4
  ], !insn.addr !32

dec_label_pc_108a4:                               ; preds = %dec_label_pc_10854
  store i32 5, i32* %r3.0.reg2mem, !insn.addr !33
  br label %dec_label_pc_108dc, !insn.addr !33

dec_label_pc_108b4:                               ; preds = %dec_label_pc_10854
  store i32 50, i32* %r3.0.reg2mem, !insn.addr !34
  br label %dec_label_pc_108dc, !insn.addr !34

dec_label_pc_108c4:                               ; preds = %dec_label_pc_10854
  store i32 2, i32* %r3.0.reg2mem, !insn.addr !35
  br label %dec_label_pc_108dc, !insn.addr !35

dec_label_pc_108d8:                               ; preds = %dec_label_pc_10854
  store i32 -1, i32* %r3.0.reg2mem, !insn.addr !36
  br label %dec_label_pc_108dc, !insn.addr !36

dec_label_pc_108dc:                               ; preds = %dec_label_pc_10854, %dec_label_pc_108c4, %dec_label_pc_108b4, %dec_label_pc_108a4, %dec_label_pc_108d8
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  ret i32 %r3.0.reload, !insn.addr !37

; uselistorder directives
  uselistorder i32* %r3.0.reg2mem, { 0, 5, 4, 3, 2, 1 }
  uselistorder i32 %op, { 1, 0 }
  uselistorder label %dec_label_pc_108dc, { 4, 1, 2, 3, 0 }
}

define i32 @switch_large(i32 %op) local_unnamed_addr {
dec_label_pc_108e8:
  %r3.0.reg2mem = alloca i32, !insn.addr !38
  store i32 %op, i32* @1, align 4, !insn.addr !39
  store i32 0, i32* %r3.0.reg2mem, !insn.addr !39
  switch i32 %op, label %dec_label_pc_10980 [
    i32 0, label %dec_label_pc_10984
    i32 1, label %dec_label_pc_10938
    i32 2, label %dec_label_pc_10940
    i32 3, label %dec_label_pc_10948
    i32 4, label %dec_label_pc_10950
    i32 5, label %dec_label_pc_10958
    i32 6, label %dec_label_pc_10960
    i32 7, label %dec_label_pc_10968
    i32 8, label %dec_label_pc_10970
    i32 9, label %dec_label_pc_10978
  ], !insn.addr !39

dec_label_pc_10938:                               ; preds = %dec_label_pc_108e8
  store i32 10, i32* %r3.0.reg2mem, !insn.addr !40
  br label %dec_label_pc_10984, !insn.addr !40

dec_label_pc_10940:                               ; preds = %dec_label_pc_108e8
  store i32 20, i32* %r3.0.reg2mem, !insn.addr !41
  br label %dec_label_pc_10984, !insn.addr !41

dec_label_pc_10948:                               ; preds = %dec_label_pc_108e8
  store i32 30, i32* %r3.0.reg2mem, !insn.addr !42
  br label %dec_label_pc_10984, !insn.addr !42

dec_label_pc_10950:                               ; preds = %dec_label_pc_108e8
  store i32 40, i32* %r3.0.reg2mem, !insn.addr !43
  br label %dec_label_pc_10984, !insn.addr !43

dec_label_pc_10958:                               ; preds = %dec_label_pc_108e8
  store i32 50, i32* %r3.0.reg2mem, !insn.addr !44
  br label %dec_label_pc_10984, !insn.addr !44

dec_label_pc_10960:                               ; preds = %dec_label_pc_108e8
  store i32 60, i32* %r3.0.reg2mem, !insn.addr !45
  br label %dec_label_pc_10984, !insn.addr !45

dec_label_pc_10968:                               ; preds = %dec_label_pc_108e8
  store i32 70, i32* %r3.0.reg2mem, !insn.addr !46
  br label %dec_label_pc_10984, !insn.addr !46

dec_label_pc_10970:                               ; preds = %dec_label_pc_108e8
  store i32 80, i32* %r3.0.reg2mem, !insn.addr !47
  br label %dec_label_pc_10984, !insn.addr !47

dec_label_pc_10978:                               ; preds = %dec_label_pc_108e8
  store i32 90, i32* %r3.0.reg2mem, !insn.addr !48
  br label %dec_label_pc_10984, !insn.addr !48

dec_label_pc_10980:                               ; preds = %dec_label_pc_108e8
  store i32 -1, i32* %r3.0.reg2mem, !insn.addr !49
  br label %dec_label_pc_10984, !insn.addr !49

dec_label_pc_10984:                               ; preds = %dec_label_pc_108e8, %dec_label_pc_10978, %dec_label_pc_10970, %dec_label_pc_10968, %dec_label_pc_10960, %dec_label_pc_10958, %dec_label_pc_10950, %dec_label_pc_10948, %dec_label_pc_10940, %dec_label_pc_10938, %dec_label_pc_10980
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  ret i32 %r3.0.reload, !insn.addr !50

; uselistorder directives
  uselistorder i32* %r3.0.reg2mem, { 0, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 }
  uselistorder i32 %op, { 1, 0 }
  uselistorder label %dec_label_pc_10984, { 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 }
}

define i32 @switch_default(i32 %op) local_unnamed_addr {
dec_label_pc_10994:
  %r3.0.reg2mem = alloca i32, !insn.addr !51
  %0 = icmp eq i32 %op, 3, !insn.addr !52
  store i32 300, i32* %r3.0.reg2mem, !insn.addr !53
  br i1 %0, label %dec_label_pc_109f4, label %dec_label_pc_109b0, !insn.addr !53

dec_label_pc_109b0:                               ; preds = %dec_label_pc_10994
  %1 = icmp sgt i32 %op, 3, !insn.addr !54
  store i32 0, i32* %r3.0.reg2mem, !insn.addr !54
  br i1 %1, label %dec_label_pc_109f4, label %dec_label_pc_109bc, !insn.addr !54

dec_label_pc_109bc:                               ; preds = %dec_label_pc_109b0
  %switch.selectcmp = icmp eq i32 %op, 2
  %switch.select = select i1 %switch.selectcmp, i32 200, i32 0
  %switch.selectcmp1 = icmp eq i32 %op, 1
  %switch.select2 = select i1 %switch.selectcmp1, i32 100, i32 %switch.select
  store i32 %switch.select2, i32* %r3.0.reg2mem
  br label %dec_label_pc_109f4

dec_label_pc_109f4:                               ; preds = %dec_label_pc_109b0, %dec_label_pc_109bc, %dec_label_pc_10994
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  ret i32 %r3.0.reload, !insn.addr !55

; uselistorder directives
  uselistorder i32* %r3.0.reg2mem, { 0, 2, 1, 3 }
  uselistorder i32 200, { 1, 0 }
  uselistorder label %dec_label_pc_109f4, { 1, 0, 2 }
}

define i32 @switch_fallthrough(i32 %op) local_unnamed_addr {
dec_label_pc_10a04:
  %storemerge.reg2mem = alloca i32, !insn.addr !56
  %result_-12.1.reg2mem = alloca i32, !insn.addr !56
  %result_-12.0.reg2mem = alloca i32, !insn.addr !56
  %0 = icmp eq i32 %op, 3, !insn.addr !57
  store i32 12, i32* %result_-12.0.reg2mem, !insn.addr !58
  br i1 %0, label %dec_label_pc_10a64, label %dec_label_pc_10a28, !insn.addr !58

dec_label_pc_10a28:                               ; preds = %dec_label_pc_10a04
  %1 = icmp sgt i32 %op, 3, !insn.addr !59
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !59
  br i1 %1, label %dec_label_pc_10a94, label %dec_label_pc_10a34, !insn.addr !59

dec_label_pc_10a34:                               ; preds = %dec_label_pc_10a28
  store i32 0, i32* %result_-12.0.reg2mem
  store i32 0, i32* %result_-12.1.reg2mem
  store i32 -1, i32* %storemerge.reg2mem
  switch i32 %op, label %dec_label_pc_10a94 [
    i32 1, label %dec_label_pc_10a78
    i32 2, label %dec_label_pc_10a64
  ]

dec_label_pc_10a64:                               ; preds = %dec_label_pc_10a04, %dec_label_pc_10a34
  %result_-12.0.reload = load i32, i32* %result_-12.0.reg2mem
  %2 = mul i32 %op, 2, !insn.addr !60
  %3 = add i32 %result_-12.0.reload, %2, !insn.addr !61
  store i32 %3, i32* %result_-12.1.reg2mem, !insn.addr !62
  br label %dec_label_pc_10a78, !insn.addr !62

dec_label_pc_10a78:                               ; preds = %dec_label_pc_10a34, %dec_label_pc_10a64
  %result_-12.1.reload = load i32, i32* %result_-12.1.reg2mem
  %4 = add i32 %result_-12.1.reload, %op, !insn.addr !63
  store i32 %4, i32* %storemerge.reg2mem, !insn.addr !64
  br label %dec_label_pc_10a94, !insn.addr !64

dec_label_pc_10a94:                               ; preds = %dec_label_pc_10a34, %dec_label_pc_10a28, %dec_label_pc_10a78
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !65

; uselistorder directives
  uselistorder i32* %result_-12.0.reg2mem, { 0, 2, 1 }
  uselistorder i32* %result_-12.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 3, 1, 2 }
  uselistorder i32 %op, { 1, 0, 2, 3, 4 }
  uselistorder label %dec_label_pc_10a94, { 2, 0, 1 }
  uselistorder label %dec_label_pc_10a78, { 1, 0 }
  uselistorder label %dec_label_pc_10a64, { 1, 0 }
}

define i32 @loop_for_fixed(i32 %n) local_unnamed_addr {
dec_label_pc_10aa8:
  %sum_-16.0.lcssa.reg2mem = alloca i32, !insn.addr !66
  %0 = icmp sgt i32 %n, 0, !insn.addr !67
  store i32 0, i32* %sum_-16.0.lcssa.reg2mem, !insn.addr !67
  br i1 %0, label %dec_label_pc_10acc.lr.ph, label %dec_label_pc_10af8, !insn.addr !67

dec_label_pc_10acc.lr.ph:                         ; preds = %dec_label_pc_10aa8
  %1 = add i32 %n, -1
  %2 = zext i32 %1 to i33
  %3 = add i32 %n, -2
  %4 = zext i32 %3 to i33
  %5 = mul i33 %2, %4
  %6 = udiv i33 %5, 2
  %7 = trunc i33 %6 to i32
  %8 = add i32 %1, %7
  store i32 %8, i32* %sum_-16.0.lcssa.reg2mem
  br label %dec_label_pc_10af8

dec_label_pc_10af8:                               ; preds = %dec_label_pc_10acc.lr.ph, %dec_label_pc_10aa8
  %sum_-16.0.lcssa.reload = load i32, i32* %sum_-16.0.lcssa.reg2mem
  ret i32 %sum_-16.0.lcssa.reload, !insn.addr !68

; uselistorder directives
  uselistorder i32* %sum_-16.0.lcssa.reg2mem, { 0, 2, 1 }
}

define i32 @loop_while(i32 %x) local_unnamed_addr {
dec_label_pc_10b0c:
  %stack_var_-20.01.reg2mem = alloca i32, !insn.addr !69
  %storemerge2.reg2mem = alloca i32, !insn.addr !69
  %0 = icmp eq i32 %x, 0, !insn.addr !70
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !71
  store i32 %x, i32* %stack_var_-20.01.reg2mem, !insn.addr !71
  br i1 %0, label %dec_label_pc_10b5c.thread, label %dec_label_pc_10b28, !insn.addr !71

dec_label_pc_10b28:                               ; preds = %dec_label_pc_10b0c, %dec_label_pc_10b28
  %stack_var_-20.01.reload = load i32, i32* %stack_var_-20.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %1 = sdiv i32 %stack_var_-20.01.reload, 10, !insn.addr !72
  %2 = add i32 %storemerge2.reload, 1, !insn.addr !73
  %stack_var_-20.01.off = add i32 %stack_var_-20.01.reload, 9
  %3 = icmp ult i32 %stack_var_-20.01.off, 19
  store i32 %2, i32* %storemerge2.reg2mem, !insn.addr !71
  store i32 %1, i32* %stack_var_-20.01.reg2mem, !insn.addr !71
  br i1 %3, label %dec_label_pc_10b5c, label %dec_label_pc_10b28, !insn.addr !71

dec_label_pc_10b5c:                               ; preds = %dec_label_pc_10b28
  %4 = icmp sgt i32 %2, 1
  %spec.select = select i1 %4, i32 %2, i32 1
  ret i32 %spec.select

dec_label_pc_10b5c.thread:                        ; preds = %dec_label_pc_10b0c
  ret i32 1, !insn.addr !74

; uselistorder directives
  uselistorder i32 %2, { 1, 2, 0 }
  uselistorder i32 %stack_var_-20.01.reload, { 1, 0 }
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-20.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_10b28, { 1, 0 }
}

define i32 @loop_dowhile(i32 %x) local_unnamed_addr {
dec_label_pc_10b80:
  %count_-12.0.reg2mem = alloca i32, !insn.addr !75
  %stack_var_-20.0.reg2mem = alloca i32, !insn.addr !75
  store i32 %x, i32* %stack_var_-20.0.reg2mem, !insn.addr !76
  store i32 0, i32* %count_-12.0.reg2mem, !insn.addr !76
  br label %dec_label_pc_10b98, !insn.addr !76

dec_label_pc_10b98:                               ; preds = %dec_label_pc_10b98, %dec_label_pc_10b80
  %count_-12.0.reload = load i32, i32* %count_-12.0.reg2mem
  %stack_var_-20.0.reload = load i32, i32* %stack_var_-20.0.reg2mem
  %0 = sdiv i32 %stack_var_-20.0.reload, 10, !insn.addr !77
  %1 = add i32 %count_-12.0.reload, 1, !insn.addr !78
  %stack_var_-20.0.off = add i32 %stack_var_-20.0.reload, 9
  %2 = icmp ult i32 %stack_var_-20.0.off, 19
  store i32 %0, i32* %stack_var_-20.0.reg2mem, !insn.addr !79
  store i32 %1, i32* %count_-12.0.reg2mem, !insn.addr !79
  br i1 %2, label %dec_label_pc_10bcc, label %dec_label_pc_10b98, !insn.addr !79

dec_label_pc_10bcc:                               ; preds = %dec_label_pc_10b98
  ret i32 %1, !insn.addr !80

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32 %stack_var_-20.0.reload, { 1, 0 }
  uselistorder i32* %stack_var_-20.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %count_-12.0.reg2mem, { 1, 0, 2 }
  uselistorder i32 9, { 0, 1, 3, 2 }
}

define i32 @loop_nested(i32 %m, i32 %n) local_unnamed_addr {
dec_label_pc_10be4:
  %total_-20.1.lcssa.reg2mem = alloca i32, !insn.addr !81
  %0 = icmp sgt i32 %m, 0, !insn.addr !82
  store i32 0, i32* %total_-20.1.lcssa.reg2mem, !insn.addr !82
  br i1 %0, label %dec_label_pc_10c30.preheader.lr.ph, label %dec_label_pc_10c5c, !insn.addr !82

dec_label_pc_10c30.preheader.lr.ph:               ; preds = %dec_label_pc_10be4
  %1 = icmp sgt i32 %n, 0
  %smax = select i1 %1, i32 %n, i32 0
  %2 = mul i32 %smax, %m
  store i32 %2, i32* %total_-20.1.lcssa.reg2mem
  br label %dec_label_pc_10c5c

dec_label_pc_10c5c:                               ; preds = %dec_label_pc_10c30.preheader.lr.ph, %dec_label_pc_10be4
  %total_-20.1.lcssa.reload = load i32, i32* %total_-20.1.lcssa.reg2mem
  ret i32 %total_-20.1.lcssa.reload, !insn.addr !83

; uselistorder directives
  uselistorder i32* %total_-20.1.lcssa.reg2mem, { 0, 2, 1 }
}

define i32 @loop_break(i32 %target) local_unnamed_addr {
dec_label_pc_10c70:
  %storemerge.reg2mem = alloca i32, !insn.addr !84
  %storemerge12.reg2mem = alloca i32, !insn.addr !84
  %arr_-36 = alloca [5 x i32], align 4
  %stack_var_-4 = alloca i32, align 4
  store [5 x i32] [i32 5, i32 undef, i32 undef, i32 undef, i32 undef], [5 x i32]* %arr_-36, align 4, !insn.addr !85
  %0 = getelementptr inbounds [5 x i32], [5 x i32]* %arr_-36, i32 0, i32 0, !insn.addr !86
  %1 = load i32, i32* %0, align 4, !insn.addr !86
  %2 = icmp sgt i32 %1, 0, !insn.addr !87
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !87
  br i1 %2, label %dec_label_pc_10cc0.lr.ph, label %dec_label_pc_10d24, !insn.addr !87

dec_label_pc_10cc0.lr.ph:                         ; preds = %dec_label_pc_10c70
  %3 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !88
  %4 = add i32 %3, -28, !insn.addr !89
  store i32 0, i32* %storemerge12.reg2mem
  br label %dec_label_pc_10cc0

dec_label_pc_10cc0:                               ; preds = %dec_label_pc_10cc0.lr.ph, %dec_label_pc_10ce8
  %storemerge12.reload = load i32, i32* %storemerge12.reg2mem
  %5 = mul i32 %storemerge12.reload, 4, !insn.addr !90
  %6 = add i32 %4, %5, !insn.addr !91
  %7 = inttoptr i32 %6 to i32*, !insn.addr !91
  %8 = load i32, i32* %7, align 4, !insn.addr !91
  %9 = icmp eq i32 %8, %target, !insn.addr !92
  store i32 %storemerge12.reload, i32* %storemerge.reg2mem, !insn.addr !93
  br i1 %9, label %dec_label_pc_10d24, label %dec_label_pc_10ce8, !insn.addr !93

dec_label_pc_10ce8:                               ; preds = %dec_label_pc_10cc0
  %10 = add nuw nsw i32 %storemerge12.reload, 1, !insn.addr !94
  %11 = icmp slt i32 %10, %1, !insn.addr !87
  store i32 %10, i32* %storemerge12.reg2mem, !insn.addr !87
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !87
  br i1 %11, label %dec_label_pc_10cc0, label %dec_label_pc_10d24, !insn.addr !87

dec_label_pc_10d24:                               ; preds = %dec_label_pc_10ce8, %dec_label_pc_10cc0, %dec_label_pc_10c70
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !95

; uselistorder directives
  uselistorder i32 %storemerge12.reload, { 1, 0, 2 }
  uselistorder i32* %storemerge12.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_10cc0, { 1, 0 }
}

define i32 @loop_continue(i32 %n) local_unnamed_addr {
dec_label_pc_10d38:
  %sum_-16.1.lcssa.reg2mem = alloca i32, !insn.addr !96
  %sum_-16.11.reg2mem = alloca i32, !insn.addr !96
  %storemerge2.reg2mem = alloca i32, !insn.addr !96
  %0 = icmp slt i32 %n, 1, !insn.addr !97
  store i32 1, i32* %storemerge2.reg2mem, !insn.addr !97
  store i32 0, i32* %sum_-16.11.reg2mem, !insn.addr !97
  store i32 0, i32* %sum_-16.1.lcssa.reg2mem, !insn.addr !97
  br i1 %0, label %dec_label_pc_10da0, label %dec_label_pc_10d5c, !insn.addr !97

dec_label_pc_10d5c:                               ; preds = %dec_label_pc_10d38, %dec_label_pc_10d5c
  %sum_-16.11.reload = load i32, i32* %sum_-16.11.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %1 = urem i32 %storemerge2.reload, 2, !insn.addr !98
  %2 = icmp eq i32 %1, 0, !insn.addr !99
  %3 = select i1 %2, i32 0, i32 %storemerge2.reload
  %spec.select = add i32 %3, %sum_-16.11.reload
  %4 = add i32 %storemerge2.reload, 1, !insn.addr !100
  %5 = icmp sgt i32 %4, %n, !insn.addr !97
  store i32 %4, i32* %storemerge2.reg2mem, !insn.addr !97
  store i32 %spec.select, i32* %sum_-16.11.reg2mem, !insn.addr !97
  store i32 %spec.select, i32* %sum_-16.1.lcssa.reg2mem, !insn.addr !97
  br i1 %5, label %dec_label_pc_10da0, label %dec_label_pc_10d5c, !insn.addr !97

dec_label_pc_10da0:                               ; preds = %dec_label_pc_10d5c, %dec_label_pc_10d38
  %sum_-16.1.lcssa.reload = load i32, i32* %sum_-16.1.lcssa.reg2mem
  ret i32 %sum_-16.1.lcssa.reload, !insn.addr !101

; uselistorder directives
  uselistorder i32 %storemerge2.reload, { 1, 0, 2 }
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sum_-16.11.reg2mem, { 2, 0, 1 }
  uselistorder i32 %n, { 1, 0 }
  uselistorder label %dec_label_pc_10d5c, { 1, 0 }
}

define i32 @goto_forward(i32 %x) local_unnamed_addr {
dec_label_pc_10db4:
  %0 = icmp sgt i32 %x, 1
  %1 = select i1 %0, i32 %x, i32 1
  %storemerge = mul i32 %x, 2
  %2 = mul i32 %storemerge, %1, !insn.addr !102
  ret i32 %2, !insn.addr !103
}

define i32 @goto_backward(i32 %x) local_unnamed_addr {
dec_label_pc_10e10:
  %storemerge1.reg2mem = alloca i32, !insn.addr !104
  %i_-16.02.reg2mem = alloca i32, !insn.addr !104
  %storemerge3.reg2mem = alloca i32, !insn.addr !104
  %0 = icmp sgt i32 %x, 0, !insn.addr !105
  store i32 1, i32* %storemerge3.reg2mem, !insn.addr !105
  store i32 1, i32* %i_-16.02.reg2mem, !insn.addr !105
  store i32 1, i32* %storemerge1.reg2mem, !insn.addr !105
  br i1 %0, label %dec_label_pc_10e54, label %dec_label_pc_10e7c, !insn.addr !105

dec_label_pc_10e54:                               ; preds = %dec_label_pc_10e10, %dec_label_pc_10e54
  %i_-16.02.reload = load i32, i32* %i_-16.02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %1 = mul i32 %i_-16.02.reload, %storemerge3.reload, !insn.addr !106
  %2 = add i32 %storemerge3.reload, 1, !insn.addr !107
  %3 = icmp sgt i32 %2, %x, !insn.addr !108
  store i32 %2, i32* %storemerge3.reg2mem, !insn.addr !108
  store i32 %1, i32* %i_-16.02.reg2mem, !insn.addr !108
  store i32 %1, i32* %storemerge1.reg2mem, !insn.addr !108
  br i1 %3, label %dec_label_pc_10e7c, label %dec_label_pc_10e54, !insn.addr !108

dec_label_pc_10e7c:                               ; preds = %dec_label_pc_10e54, %dec_label_pc_10e10
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  ret i32 %storemerge1.reload, !insn.addr !109

; uselistorder directives
  uselistorder i32* %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder i32* %i_-16.02.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_10e54, { 1, 0 }
}

define i32 @ternary_op(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_10e8c:
  %0 = icmp slt i32 %b, %a, !insn.addr !110
  %spec.select = select i1 %0, i32 %a, i32 %b
  ret i32 %spec.select, !insn.addr !111
}

define void @test_control_flow_l1() local_unnamed_addr {
dec_label_pc_10ec4:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_12aa8 to i8*)), !insn.addr !112
  %1 = call i32 @sequential_ops(i32 5, i32 7, i32 3), !insn.addr !113
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_12acc, i32 0, i32 0), i32 %1), !insn.addr !114
  %3 = call i32 @single_if(i32 10), !insn.addr !115
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_12aec, i32 0, i32 0), i32 %3), !insn.addr !116
  %5 = call i32 @single_if(i32 -5), !insn.addr !117
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_12aec, i32 0, i32 0), i32 %5), !insn.addr !118
  %7 = call i32 @if_else(i32 5), !insn.addr !119
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_12b08, i32 0, i32 0), i32 %7), !insn.addr !120
  %9 = call i32 @if_else(i32 -3), !insn.addr !121
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_12b08, i32 0, i32 0), i32 %9), !insn.addr !122
  %11 = call i32 @nested_if_2(i32 10, i32 5), !insn.addr !123
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_12b20, i32 0, i32 0), i32 %11), !insn.addr !124
  %13 = call i32 @nested_if_2(i32 10, i32 -5), !insn.addr !125
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_12b20, i32 0, i32 0), i32 %13), !insn.addr !126
  %15 = call i32 @nested_if_2(i32 -10, i32 5), !insn.addr !127
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_12b20, i32 0, i32 0), i32 %15), !insn.addr !128
  %17 = call i32 @nested_if_deep(i32 1, i32 1, i32 1, i32 1, i32 1), !insn.addr !129
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_12b3c, i32 0, i32 0), i32 %17), !insn.addr !130
  %19 = call i32 @if_elseif_chain(i32 1), !insn.addr !131
  %20 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_12b5c, i32 0, i32 0), i32 %19), !insn.addr !132
  %21 = call i32 @if_elseif_long(i32 3), !insn.addr !133
  %22 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_12b7c, i32 0, i32 0), i32 %21), !insn.addr !134
  %23 = call i32 @switch_small(i32 2), !insn.addr !135
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_12b9c, i32 0, i32 0), i32 %23), !insn.addr !136
  %25 = call i32 @switch_large(i32 7), !insn.addr !137
  %26 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_12bbc, i32 0, i32 0), i32 %25), !insn.addr !138
  %27 = call i32 @switch_default(i32 5), !insn.addr !139
  %28 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_12bdc, i32 0, i32 0), i32 %27), !insn.addr !140
  %29 = call i32 @switch_fallthrough(i32 3), !insn.addr !141
  %30 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_12bfc, i32 0, i32 0), i32 %29), !insn.addr !142
  %31 = call i32 @loop_for_fixed(i32 10), !insn.addr !143
  %32 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_12c20, i32 0, i32 0), i32 %31), !insn.addr !144
  %33 = call i32 @loop_while(i32 12345), !insn.addr !145
  %34 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_12c40, i32 0, i32 0), i32 %33), !insn.addr !146
  %35 = call i32 @loop_dowhile(i32 9876), !insn.addr !147
  %36 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_12c5c, i32 0, i32 0), i32 %35), !insn.addr !148
  %37 = call i32 @loop_nested(i32 3, i32 4), !insn.addr !149
  %38 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_12c7c, i32 0, i32 0), i32 %37), !insn.addr !150
  %39 = call i32 @loop_break(i32 30), !insn.addr !151
  %40 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_12c98, i32 0, i32 0), i32 %39), !insn.addr !152
  %41 = call i32 @loop_break(i32 99), !insn.addr !153
  %42 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_12c98, i32 0, i32 0), i32 %41), !insn.addr !154
  %43 = call i32 @loop_continue(i32 10), !insn.addr !155
  %44 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_12cb4, i32 0, i32 0), i32 %43), !insn.addr !156
  %45 = call i32 @goto_forward(i32 5), !insn.addr !157
  %46 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_12cd4, i32 0, i32 0), i32 %45), !insn.addr !158
  %47 = call i32 @goto_forward(i32 -3), !insn.addr !159
  %48 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_12cd4, i32 0, i32 0), i32 %47), !insn.addr !160
  %49 = call i32 @goto_backward(i32 5), !insn.addr !161
  %50 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_12cf4, i32 0, i32 0), i32 %49), !insn.addr !162
  %51 = call i32 @ternary_op(i32 10, i32 5), !insn.addr !163
  %52 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_12d14, i32 0, i32 0), i32 %51), !insn.addr !164
  %53 = call i32 @ternary_op(i32 3, i32 8), !insn.addr !165
  %54 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_12d14, i32 0, i32 0), i32 %53), !insn.addr !166
  ret void, !insn.addr !167

; uselistorder directives
  uselistorder i32 (i32, i32)* @ternary_op, { 1, 0 }
  uselistorder i32 (i32)* @goto_forward, { 1, 0 }
  uselistorder i32 (i32)* @loop_break, { 1, 0 }
  uselistorder i32 30, { 2, 0, 1, 3 }
  uselistorder i32 (i32, i32)* @nested_if_2, { 2, 1, 0 }
  uselistorder i32 (i32)* @if_else, { 1, 0 }
  uselistorder i32 (i32)* @single_if, { 1, 0 }
}

define i32 @loop_multi_exit(i32 %target) local_unnamed_addr {
dec_label_pc_111fc:
  %storemerge1.reg2mem = alloca i32, !insn.addr !168
  %storemerge5.reg2mem = alloca i32, !insn.addr !168
  %.reg2mem = alloca i32, !insn.addr !168
  %matrix_-64 = alloca [3 x [4 x i32]], align 4
  %stack_var_-4 = alloca i32, align 4
  %0 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !169
  %1 = getelementptr inbounds [3 x [4 x i32]], [3 x [4 x i32]]* %matrix_-64, i32 0, i32 0, i32 0, !insn.addr !170
  %2 = add i32 %0, -56
  store i32 0, i32* %storemerge5.reg2mem
  br label %dec_label_pc_112b4.preheader

dec_label_pc_11258:                               ; preds = %dec_label_pc_11258.lr.ph, %dec_label_pc_112a8
  %.reload = load i32, i32* %.reg2mem
  %3 = add i32 %.reload, %20, !insn.addr !171
  %4 = mul i32 %3, 4, !insn.addr !172
  %5 = add i32 %2, %4, !insn.addr !173
  %6 = inttoptr i32 %5 to i32*, !insn.addr !173
  %7 = load i32, i32* %6, align 4, !insn.addr !173
  %8 = icmp eq i32 %7, %target, !insn.addr !174
  br i1 %8, label %dec_label_pc_11284, label %dec_label_pc_112a8, !insn.addr !175

dec_label_pc_11284:                               ; preds = %dec_label_pc_11258
  %9 = mul i32 %storemerge5.reload, 10, !insn.addr !176
  %10 = add i32 %.reload, %9, !insn.addr !177
  store i32 %10, i32* %storemerge1.reg2mem, !insn.addr !178
  br label %dec_label_pc_112f8, !insn.addr !178

dec_label_pc_112a8:                               ; preds = %dec_label_pc_11258
  %11 = add i32 %.reload, 1, !insn.addr !179
  %12 = insertvalue [4 x i32] undef, i32 %11, 0, !insn.addr !180
  %13 = insertvalue [3 x [4 x i32]] undef, [4 x i32] %12, 0, !insn.addr !180
  store [3 x [4 x i32]] %13, [3 x [4 x i32]]* %matrix_-64, align 4
  %14 = load i32, i32* %1, align 4, !insn.addr !170
  %15 = icmp slt i32 %14, 4, !insn.addr !181
  store i32 %14, i32* %.reg2mem, !insn.addr !181
  br i1 %15, label %dec_label_pc_11258, label %dec_label_pc_112c0, !insn.addr !181

dec_label_pc_112c0:                               ; preds = %dec_label_pc_112a8, %dec_label_pc_112b4.preheader
  %16 = add nuw nsw i32 %storemerge5.reload, 1, !insn.addr !182
  %17 = icmp ult i32 %16, 3, !insn.addr !183
  store i32 %16, i32* %storemerge5.reg2mem, !insn.addr !183
  store i32 -1, i32* %storemerge1.reg2mem, !insn.addr !183
  br i1 %17, label %dec_label_pc_112b4.preheader, label %dec_label_pc_112f8, !insn.addr !183

dec_label_pc_112b4.preheader:                     ; preds = %dec_label_pc_111fc, %dec_label_pc_112c0
  %storemerge5.reload = load i32, i32* %storemerge5.reg2mem
  store [3 x [4 x i32]] [[4 x i32] [i32 0, i32 undef, i32 undef, i32 undef], [4 x i32] undef, [4 x i32] undef], [3 x [4 x i32]]* %matrix_-64, align 4
  %18 = load i32, i32* %1, align 4, !insn.addr !170
  %19 = icmp slt i32 %18, 4, !insn.addr !181
  br i1 %19, label %dec_label_pc_11258.lr.ph, label %dec_label_pc_112c0, !insn.addr !181

dec_label_pc_11258.lr.ph:                         ; preds = %dec_label_pc_112b4.preheader
  %20 = mul i32 %storemerge5.reload, 4, !insn.addr !184
  store i32 %18, i32* %.reg2mem
  br label %dec_label_pc_11258

dec_label_pc_112f8:                               ; preds = %dec_label_pc_112c0, %dec_label_pc_11284
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  ret i32 %storemerge1.reload, !insn.addr !185

; uselistorder directives
  uselistorder i32 %storemerge5.reload, { 2, 1, 0 }
  uselistorder i32 %.reload, { 0, 2, 1 }
  uselistorder i32* %.reg2mem, { 2, 1, 0 }
  uselistorder label %dec_label_pc_112b4.preheader, { 1, 0 }
  uselistorder label %dec_label_pc_112c0, { 1, 0 }
}

define i32 @infinite_loop(i32* %flag) local_unnamed_addr {
dec_label_pc_1130c:
  %count_-12.1.reg2mem = alloca i32, !insn.addr !186
  %count_-12.0.reg2mem = alloca i32, !insn.addr !186
  %0 = icmp eq i32* %flag, inttoptr (i32 1 to i32*), !insn.addr !187
  store i32 0, i32* %count_-12.0.reg2mem, !insn.addr !188
  br label %dec_label_pc_11324, !insn.addr !188

dec_label_pc_11324:                               ; preds = %dec_label_pc_11334, %dec_label_pc_1130c
  store i32 0, i32* %count_-12.1.reg2mem, !insn.addr !189
  br i1 %0, label %dec_label_pc_11360, label %dec_label_pc_11334, !insn.addr !189

dec_label_pc_11334:                               ; preds = %dec_label_pc_11324
  %count_-12.0.reload = load i32, i32* %count_-12.0.reg2mem
  %1 = add nuw nsw i32 %count_-12.0.reload, 1, !insn.addr !190
  %2 = icmp ult i32 %1, 1001, !insn.addr !191
  store i32 %1, i32* %count_-12.0.reg2mem, !insn.addr !191
  br i1 %2, label %dec_label_pc_11324, label %dec_label_pc_1134c, !insn.addr !191

dec_label_pc_1134c:                               ; preds = %dec_label_pc_11334
  store i32 1, i32* %flag, align 4, !insn.addr !192
  store i32 1001, i32* %count_-12.1.reg2mem, !insn.addr !193
  br label %dec_label_pc_11360, !insn.addr !193

dec_label_pc_11360:                               ; preds = %dec_label_pc_11324, %dec_label_pc_1134c
  %count_-12.1.reload = load i32, i32* %count_-12.1.reg2mem
  ret i32 %count_-12.1.reload, !insn.addr !194

; uselistorder directives
  uselistorder i32* %count_-12.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %count_-12.1.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_11360, { 1, 0 }
}

define i32 @multi_return(i32 %x) local_unnamed_addr {
dec_label_pc_11374:
  %r3.0.reg2mem = alloca i32, !insn.addr !195
  %0 = icmp slt i32 %x, 0, !insn.addr !196
  store i32 -1, i32* %r3.0.reg2mem, !insn.addr !197
  br i1 %0, label %dec_label_pc_113d8, label %dec_label_pc_11398, !insn.addr !197

dec_label_pc_11398:                               ; preds = %dec_label_pc_11374
  %1 = mul i32 %x, 2, !insn.addr !198
  %2 = icmp slt i32 %1, 101, !insn.addr !199
  store i32 -2, i32* %r3.0.reg2mem, !insn.addr !199
  br i1 %2, label %dec_label_pc_113b8, label %dec_label_pc_113d8, !insn.addr !199

dec_label_pc_113b8:                               ; preds = %dec_label_pc_11398
  %3 = urem i32 %x, 2, !insn.addr !200
  %4 = icmp eq i32 %3, 0, !insn.addr !201
  %5 = add i32 %x, 1
  %spec.select = select i1 %4, i32 %1, i32 %5
  ret i32 %spec.select

dec_label_pc_113d8:                               ; preds = %dec_label_pc_11398, %dec_label_pc_11374
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  ret i32 %r3.0.reload, !insn.addr !202

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32 %x, { 2, 1, 0, 3 }
}

define i32 @conditional_return(i32 %x) local_unnamed_addr {
dec_label_pc_113e8:
  %0 = icmp slt i32 %x, 1, !insn.addr !203
  br i1 %0, label %dec_label_pc_11410, label %dec_label_pc_11404, !insn.addr !203

dec_label_pc_11404:                               ; preds = %dec_label_pc_113e8
  %1 = mul i32 %x, 2, !insn.addr !204
  ret i32 %1, !insn.addr !205

dec_label_pc_11410:                               ; preds = %dec_label_pc_113e8
  %2 = sub i32 0, %x
  ret i32 %2

; uselistorder directives
  uselistorder i32 %x, { 1, 0, 2 }
}

define i32 @duffs_device(i32* %dst, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1143c:
  %storemerge.reg2mem = alloca i32, !insn.addr !206
  %count_-12.7.reg2mem = alloca i32, !insn.addr !206
  %stack_var_-24.7.reg2mem = alloca i32, !insn.addr !206
  %stack_var_-20.7.reg2mem = alloca i32, !insn.addr !206
  %count_-12.6.reg2mem = alloca i32, !insn.addr !206
  %stack_var_-24.6.reg2mem = alloca i32, !insn.addr !206
  %stack_var_-20.6.reg2mem = alloca i32, !insn.addr !206
  %count_-12.5.reg2mem = alloca i32, !insn.addr !206
  %stack_var_-24.5.reg2mem = alloca i32, !insn.addr !206
  %stack_var_-20.5.reg2mem = alloca i32, !insn.addr !206
  %count_-12.4.reg2mem = alloca i32, !insn.addr !206
  %stack_var_-24.4.reg2mem = alloca i32, !insn.addr !206
  %stack_var_-20.4.reg2mem = alloca i32, !insn.addr !206
  %count_-12.3.reg2mem = alloca i32, !insn.addr !206
  %stack_var_-24.3.reg2mem = alloca i32, !insn.addr !206
  %stack_var_-20.3.reg2mem = alloca i32, !insn.addr !206
  %count_-12.2.reg2mem = alloca i32, !insn.addr !206
  %stack_var_-24.2.reg2mem = alloca i32, !insn.addr !206
  %stack_var_-20.2.reg2mem = alloca i32, !insn.addr !206
  %count_-12.1.reg2mem = alloca i32, !insn.addr !206
  %stack_var_-24.1.reg2mem = alloca i32, !insn.addr !206
  %stack_var_-20.1.reg2mem = alloca i32, !insn.addr !206
  %count_-12.0.reg2mem = alloca i32, !insn.addr !206
  %stack_var_-24.0.reg2mem = alloca i32, !insn.addr !206
  %stack_var_-20.0.reg2mem = alloca i32, !insn.addr !206
  %0 = icmp sgt i32 %n, 0, !insn.addr !207
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !207
  br i1 %0, label %dec_label_pc_11468, label %dec_label_pc_115e8, !insn.addr !207

dec_label_pc_11468:                               ; preds = %dec_label_pc_1143c
  %1 = ptrtoint i32* %src to i32
  %2 = ptrtoint i32* %dst to i32
  %3 = sdiv i32 %n, 16384, !insn.addr !208
  %4 = sub i32 0, %n, !insn.addr !209
  %5 = icmp slt i32 %4, 0, !insn.addr !209
  %6 = urem i32 %n, 8, !insn.addr !210
  %7 = urem i32 %4, 8
  %8 = sub nsw i32 0, %7
  %r3.1 = select i1 %5, i32 %6, i32 %8
  store i32 %r3.1, i32* @2, align 4, !insn.addr !211
  store i32 %2, i32* %stack_var_-20.0.reg2mem, !insn.addr !211
  store i32 %1, i32* %stack_var_-24.0.reg2mem, !insn.addr !211
  store i32 %3, i32* %count_-12.0.reg2mem, !insn.addr !211
  store i32 %2, i32* %stack_var_-20.1.reg2mem, !insn.addr !211
  store i32 %1, i32* %stack_var_-24.1.reg2mem, !insn.addr !211
  store i32 %3, i32* %count_-12.1.reg2mem, !insn.addr !211
  store i32 %2, i32* %stack_var_-20.2.reg2mem, !insn.addr !211
  store i32 %1, i32* %stack_var_-24.2.reg2mem, !insn.addr !211
  store i32 %3, i32* %count_-12.2.reg2mem, !insn.addr !211
  store i32 %2, i32* %stack_var_-20.3.reg2mem, !insn.addr !211
  store i32 %1, i32* %stack_var_-24.3.reg2mem, !insn.addr !211
  store i32 %3, i32* %count_-12.3.reg2mem, !insn.addr !211
  store i32 %2, i32* %stack_var_-20.4.reg2mem, !insn.addr !211
  store i32 %1, i32* %stack_var_-24.4.reg2mem, !insn.addr !211
  store i32 %3, i32* %count_-12.4.reg2mem, !insn.addr !211
  store i32 %2, i32* %stack_var_-20.5.reg2mem, !insn.addr !211
  store i32 %1, i32* %stack_var_-24.5.reg2mem, !insn.addr !211
  store i32 %3, i32* %count_-12.5.reg2mem, !insn.addr !211
  store i32 %2, i32* %stack_var_-20.6.reg2mem, !insn.addr !211
  store i32 %1, i32* %stack_var_-24.6.reg2mem, !insn.addr !211
  store i32 %3, i32* %count_-12.6.reg2mem, !insn.addr !211
  store i32 %2, i32* %stack_var_-20.7.reg2mem, !insn.addr !211
  store i32 %1, i32* %stack_var_-24.7.reg2mem, !insn.addr !211
  store i32 %3, i32* %count_-12.7.reg2mem, !insn.addr !211
  store i32 %n, i32* %storemerge.reg2mem, !insn.addr !211
  switch i32 %r3.1, label %dec_label_pc_115e8 [
    i32 0, label %dec_label_pc_114cc
    i32 1, label %dec_label_pc_115ac
    i32 2, label %dec_label_pc_1158c
    i32 3, label %dec_label_pc_1156c
    i32 4, label %dec_label_pc_1154c
    i32 5, label %dec_label_pc_1152c
    i32 6, label %dec_label_pc_1150c
    i32 7, label %dec_label_pc_114ec
  ], !insn.addr !211

dec_label_pc_114cc:                               ; preds = %dec_label_pc_115ac, %dec_label_pc_11468
  %count_-12.0.reload = load i32, i32* %count_-12.0.reg2mem
  %stack_var_-24.0.reload = load i32, i32* %stack_var_-24.0.reg2mem
  %stack_var_-20.0.reload = load i32, i32* %stack_var_-20.0.reg2mem
  %9 = add i32 %stack_var_-24.0.reload, 4, !insn.addr !212
  %10 = add i32 %stack_var_-20.0.reload, 4, !insn.addr !213
  %11 = inttoptr i32 %stack_var_-24.0.reload to i32*, !insn.addr !214
  %12 = load i32, i32* %11, align 4, !insn.addr !214
  %13 = inttoptr i32 %stack_var_-20.0.reload to i32*, !insn.addr !215
  store i32 %12, i32* %13, align 4, !insn.addr !215
  store i32 %10, i32* %stack_var_-20.1.reg2mem, !insn.addr !215
  store i32 %9, i32* %stack_var_-24.1.reg2mem, !insn.addr !215
  store i32 %count_-12.0.reload, i32* %count_-12.1.reg2mem, !insn.addr !215
  br label %dec_label_pc_114ec, !insn.addr !215

dec_label_pc_114ec:                               ; preds = %dec_label_pc_114cc, %dec_label_pc_11468
  %count_-12.1.reload = load i32, i32* %count_-12.1.reg2mem
  %stack_var_-24.1.reload = load i32, i32* %stack_var_-24.1.reg2mem
  %stack_var_-20.1.reload = load i32, i32* %stack_var_-20.1.reg2mem
  %14 = add i32 %stack_var_-24.1.reload, 4, !insn.addr !216
  %15 = add i32 %stack_var_-20.1.reload, 4, !insn.addr !217
  %16 = inttoptr i32 %stack_var_-24.1.reload to i32*, !insn.addr !218
  %17 = load i32, i32* %16, align 4, !insn.addr !218
  %18 = inttoptr i32 %stack_var_-20.1.reload to i32*, !insn.addr !219
  store i32 %17, i32* %18, align 4, !insn.addr !219
  store i32 %15, i32* %stack_var_-20.2.reg2mem, !insn.addr !219
  store i32 %14, i32* %stack_var_-24.2.reg2mem, !insn.addr !219
  store i32 %count_-12.1.reload, i32* %count_-12.2.reg2mem, !insn.addr !219
  br label %dec_label_pc_1150c, !insn.addr !219

dec_label_pc_1150c:                               ; preds = %dec_label_pc_114ec, %dec_label_pc_11468
  %count_-12.2.reload = load i32, i32* %count_-12.2.reg2mem
  %stack_var_-24.2.reload = load i32, i32* %stack_var_-24.2.reg2mem
  %stack_var_-20.2.reload = load i32, i32* %stack_var_-20.2.reg2mem
  %19 = add i32 %stack_var_-24.2.reload, 4, !insn.addr !220
  %20 = add i32 %stack_var_-20.2.reload, 4, !insn.addr !221
  %21 = inttoptr i32 %stack_var_-24.2.reload to i32*, !insn.addr !222
  %22 = load i32, i32* %21, align 4, !insn.addr !222
  %23 = inttoptr i32 %stack_var_-20.2.reload to i32*, !insn.addr !223
  store i32 %22, i32* %23, align 4, !insn.addr !223
  store i32 %20, i32* %stack_var_-20.3.reg2mem, !insn.addr !223
  store i32 %19, i32* %stack_var_-24.3.reg2mem, !insn.addr !223
  store i32 %count_-12.2.reload, i32* %count_-12.3.reg2mem, !insn.addr !223
  br label %dec_label_pc_1152c, !insn.addr !223

dec_label_pc_1152c:                               ; preds = %dec_label_pc_1150c, %dec_label_pc_11468
  %count_-12.3.reload = load i32, i32* %count_-12.3.reg2mem
  %stack_var_-24.3.reload = load i32, i32* %stack_var_-24.3.reg2mem
  %stack_var_-20.3.reload = load i32, i32* %stack_var_-20.3.reg2mem
  %24 = add i32 %stack_var_-24.3.reload, 4, !insn.addr !224
  %25 = add i32 %stack_var_-20.3.reload, 4, !insn.addr !225
  %26 = inttoptr i32 %stack_var_-24.3.reload to i32*, !insn.addr !226
  %27 = load i32, i32* %26, align 4, !insn.addr !226
  %28 = inttoptr i32 %stack_var_-20.3.reload to i32*, !insn.addr !227
  store i32 %27, i32* %28, align 4, !insn.addr !227
  store i32 %25, i32* %stack_var_-20.4.reg2mem, !insn.addr !227
  store i32 %24, i32* %stack_var_-24.4.reg2mem, !insn.addr !227
  store i32 %count_-12.3.reload, i32* %count_-12.4.reg2mem, !insn.addr !227
  br label %dec_label_pc_1154c, !insn.addr !227

dec_label_pc_1154c:                               ; preds = %dec_label_pc_1152c, %dec_label_pc_11468
  %count_-12.4.reload = load i32, i32* %count_-12.4.reg2mem
  %stack_var_-24.4.reload = load i32, i32* %stack_var_-24.4.reg2mem
  %stack_var_-20.4.reload = load i32, i32* %stack_var_-20.4.reg2mem
  %29 = add i32 %stack_var_-24.4.reload, 4, !insn.addr !228
  %30 = add i32 %stack_var_-20.4.reload, 4, !insn.addr !229
  %31 = inttoptr i32 %stack_var_-24.4.reload to i32*, !insn.addr !230
  %32 = load i32, i32* %31, align 4, !insn.addr !230
  %33 = inttoptr i32 %stack_var_-20.4.reload to i32*, !insn.addr !231
  store i32 %32, i32* %33, align 4, !insn.addr !231
  store i32 %30, i32* %stack_var_-20.5.reg2mem, !insn.addr !231
  store i32 %29, i32* %stack_var_-24.5.reg2mem, !insn.addr !231
  store i32 %count_-12.4.reload, i32* %count_-12.5.reg2mem, !insn.addr !231
  br label %dec_label_pc_1156c, !insn.addr !231

dec_label_pc_1156c:                               ; preds = %dec_label_pc_1154c, %dec_label_pc_11468
  %count_-12.5.reload = load i32, i32* %count_-12.5.reg2mem
  %stack_var_-24.5.reload = load i32, i32* %stack_var_-24.5.reg2mem
  %stack_var_-20.5.reload = load i32, i32* %stack_var_-20.5.reg2mem
  %34 = add i32 %stack_var_-24.5.reload, 4, !insn.addr !232
  %35 = add i32 %stack_var_-20.5.reload, 4, !insn.addr !233
  %36 = inttoptr i32 %stack_var_-24.5.reload to i32*, !insn.addr !234
  %37 = load i32, i32* %36, align 4, !insn.addr !234
  %38 = inttoptr i32 %stack_var_-20.5.reload to i32*, !insn.addr !235
  store i32 %37, i32* %38, align 4, !insn.addr !235
  store i32 %35, i32* %stack_var_-20.6.reg2mem, !insn.addr !235
  store i32 %34, i32* %stack_var_-24.6.reg2mem, !insn.addr !235
  store i32 %count_-12.5.reload, i32* %count_-12.6.reg2mem, !insn.addr !235
  br label %dec_label_pc_1158c, !insn.addr !235

dec_label_pc_1158c:                               ; preds = %dec_label_pc_1156c, %dec_label_pc_11468
  %count_-12.6.reload = load i32, i32* %count_-12.6.reg2mem
  %stack_var_-24.6.reload = load i32, i32* %stack_var_-24.6.reg2mem
  %stack_var_-20.6.reload = load i32, i32* %stack_var_-20.6.reg2mem
  %39 = add i32 %stack_var_-24.6.reload, 4, !insn.addr !236
  %40 = add i32 %stack_var_-20.6.reload, 4, !insn.addr !237
  %41 = inttoptr i32 %stack_var_-24.6.reload to i32*, !insn.addr !238
  %42 = load i32, i32* %41, align 4, !insn.addr !238
  %43 = inttoptr i32 %stack_var_-20.6.reload to i32*, !insn.addr !239
  store i32 %42, i32* %43, align 4, !insn.addr !239
  store i32 %40, i32* %stack_var_-20.7.reg2mem, !insn.addr !239
  store i32 %39, i32* %stack_var_-24.7.reg2mem, !insn.addr !239
  store i32 %count_-12.6.reload, i32* %count_-12.7.reg2mem, !insn.addr !239
  br label %dec_label_pc_115ac, !insn.addr !239

dec_label_pc_115ac:                               ; preds = %dec_label_pc_1158c, %dec_label_pc_11468
  %count_-12.7.reload = load i32, i32* %count_-12.7.reg2mem
  %stack_var_-24.7.reload = load i32, i32* %stack_var_-24.7.reg2mem
  %stack_var_-20.7.reload = load i32, i32* %stack_var_-20.7.reg2mem
  %44 = add i32 %stack_var_-24.7.reload, 4, !insn.addr !240
  %45 = add i32 %stack_var_-20.7.reload, 4, !insn.addr !241
  %46 = inttoptr i32 %stack_var_-24.7.reload to i32*, !insn.addr !242
  %47 = load i32, i32* %46, align 4, !insn.addr !242
  %48 = inttoptr i32 %stack_var_-20.7.reload to i32*, !insn.addr !243
  store i32 %47, i32* %48, align 4, !insn.addr !243
  %49 = add i32 %count_-12.7.reload, -1, !insn.addr !244
  %50 = icmp sgt i32 %49, 0, !insn.addr !245
  store i32 %45, i32* %stack_var_-20.0.reg2mem, !insn.addr !245
  store i32 %44, i32* %stack_var_-24.0.reg2mem, !insn.addr !245
  store i32 %49, i32* %count_-12.0.reg2mem, !insn.addr !245
  store i32 %n, i32* %storemerge.reg2mem, !insn.addr !245
  br i1 %50, label %dec_label_pc_114cc, label %dec_label_pc_115e8, !insn.addr !245

dec_label_pc_115e8:                               ; preds = %dec_label_pc_115ac, %dec_label_pc_11468, %dec_label_pc_1143c
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !246

; uselistorder directives
  uselistorder i32 %stack_var_-20.7.reload, { 1, 0 }
  uselistorder i32 %stack_var_-24.7.reload, { 1, 0 }
  uselistorder i32 %stack_var_-20.6.reload, { 1, 0 }
  uselistorder i32 %stack_var_-24.6.reload, { 1, 0 }
  uselistorder i32 %stack_var_-20.5.reload, { 1, 0 }
  uselistorder i32 %stack_var_-24.5.reload, { 1, 0 }
  uselistorder i32 %stack_var_-20.4.reload, { 1, 0 }
  uselistorder i32 %stack_var_-24.4.reload, { 1, 0 }
  uselistorder i32 %stack_var_-20.3.reload, { 1, 0 }
  uselistorder i32 %stack_var_-24.3.reload, { 1, 0 }
  uselistorder i32 %stack_var_-20.2.reload, { 1, 0 }
  uselistorder i32 %stack_var_-24.2.reload, { 1, 0 }
  uselistorder i32 %stack_var_-20.1.reload, { 1, 0 }
  uselistorder i32 %stack_var_-24.1.reload, { 1, 0 }
  uselistorder i32 %stack_var_-20.0.reload, { 1, 0 }
  uselistorder i32 %stack_var_-24.0.reload, { 1, 0 }
  uselistorder i32* %stack_var_-20.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-24.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %count_-12.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-20.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-24.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %count_-12.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-20.3.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-24.3.reg2mem, { 0, 2, 1 }
  uselistorder i32* %count_-12.3.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-20.4.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-24.4.reg2mem, { 0, 2, 1 }
  uselistorder i32* %count_-12.4.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-20.5.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-24.5.reg2mem, { 0, 2, 1 }
  uselistorder i32* %count_-12.5.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-20.6.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-24.6.reg2mem, { 0, 2, 1 }
  uselistorder i32* %count_-12.6.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-20.7.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-24.7.reg2mem, { 0, 2, 1 }
  uselistorder i32* %count_-12.7.reg2mem, { 0, 2, 1 }
  uselistorder i32 %n, { 0, 1, 2, 4, 3, 5 }
}

define i32 @loop_complex_cond(i32 %x) local_unnamed_addr {
dec_label_pc_115f8:
  %storemerge.lcssa.reg2mem = alloca i32, !insn.addr !247
  %c_-16.0.lcssa.reg2mem = alloca i32, !insn.addr !247
  %b_-20.0.lcssa.reg2mem = alloca i32, !insn.addr !247
  %b_-20.05.reg2mem = alloca i32, !insn.addr !247
  %c_-16.06.reg2mem = alloca i32, !insn.addr !247
  %storemerge7.reg2mem = alloca i32, !insn.addr !247
  %0 = icmp sgt i32 %x, 0, !insn.addr !248
  store i32 0, i32* %storemerge7.reg2mem, !insn.addr !249
  store i32 %x, i32* %c_-16.06.reg2mem, !insn.addr !249
  store i32 0, i32* %b_-20.05.reg2mem, !insn.addr !249
  store i32 0, i32* %b_-20.0.lcssa.reg2mem, !insn.addr !249
  store i32 %x, i32* %c_-16.0.lcssa.reg2mem, !insn.addr !249
  store i32 0, i32* %storemerge.lcssa.reg2mem, !insn.addr !249
  br i1 %0, label %dec_label_pc_11624, label %dec_label_pc_11670, !insn.addr !249

dec_label_pc_11624:                               ; preds = %dec_label_pc_115f8, %dec_label_pc_11624
  %b_-20.05.reload = load i32, i32* %b_-20.05.reg2mem
  %c_-16.06.reload = load i32, i32* %c_-16.06.reg2mem
  %storemerge7.reload = load i32, i32* %storemerge7.reg2mem
  %1 = add nuw nsw i32 %b_-20.05.reload, 2, !insn.addr !250
  %2 = add nsw i32 %c_-16.06.reload, -1, !insn.addr !251
  %3 = add nuw nsw i32 %storemerge7.reload, 1, !insn.addr !252
  %4 = icmp slt i32 %1, %2, !insn.addr !249
  %5 = icmp ult i32 %3, 10, !insn.addr !253
  %or.cond.not = icmp eq i1 %5, %4
  %6 = icmp sgt i32 %2, 0, !insn.addr !248
  %or.cond3 = icmp eq i1 %6, %or.cond.not
  store i32 %3, i32* %storemerge7.reg2mem, !insn.addr !249
  store i32 %2, i32* %c_-16.06.reg2mem, !insn.addr !249
  store i32 %1, i32* %b_-20.05.reg2mem, !insn.addr !249
  store i32 %1, i32* %b_-20.0.lcssa.reg2mem, !insn.addr !249
  store i32 %2, i32* %c_-16.0.lcssa.reg2mem, !insn.addr !249
  store i32 %3, i32* %storemerge.lcssa.reg2mem, !insn.addr !249
  br i1 %or.cond3, label %dec_label_pc_11624, label %dec_label_pc_11670, !insn.addr !249

dec_label_pc_11670:                               ; preds = %dec_label_pc_11624, %dec_label_pc_115f8
  %storemerge.lcssa.reload = load i32, i32* %storemerge.lcssa.reg2mem
  %c_-16.0.lcssa.reload = load i32, i32* %c_-16.0.lcssa.reg2mem
  %b_-20.0.lcssa.reload = load i32, i32* %b_-20.0.lcssa.reg2mem
  %7 = add i32 %c_-16.0.lcssa.reload, %b_-20.0.lcssa.reload, !insn.addr !254
  %8 = add i32 %7, %storemerge.lcssa.reload, !insn.addr !255
  ret i32 %8, !insn.addr !256

; uselistorder directives
  uselistorder i32* %storemerge7.reg2mem, { 2, 0, 1 }
  uselistorder i32* %c_-16.06.reg2mem, { 2, 0, 1 }
  uselistorder i32* %b_-20.05.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_11624, { 1, 0 }
}

define i32 @loop_modify_var(i32 %n) local_unnamed_addr {
dec_label_pc_11694:
  %sum_-16.0.lcssa.reg2mem = alloca i32, !insn.addr !257
  %sum_-16.01.reg2mem = alloca i32, !insn.addr !257
  %storemerge2.reg2mem = alloca i32, !insn.addr !257
  %0 = icmp sgt i32 %n, 0, !insn.addr !258
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !258
  store i32 0, i32* %sum_-16.01.reg2mem, !insn.addr !258
  store i32 0, i32* %sum_-16.0.lcssa.reg2mem, !insn.addr !258
  br i1 %0, label %dec_label_pc_116b8, label %dec_label_pc_116fc, !insn.addr !258

dec_label_pc_116b8:                               ; preds = %dec_label_pc_11694, %dec_label_pc_116b8
  %sum_-16.01.reload = load i32, i32* %sum_-16.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %1 = add i32 %sum_-16.01.reload, %storemerge2.reload, !insn.addr !259
  %2 = icmp slt i32 %storemerge2.reload, 6, !insn.addr !260
  %3 = add i32 %storemerge2.reload, 2
  %spec.select = select i1 %2, i32 %storemerge2.reload, i32 %3
  %4 = add i32 %spec.select, 1, !insn.addr !261
  %5 = icmp slt i32 %4, %n, !insn.addr !258
  store i32 %4, i32* %storemerge2.reg2mem, !insn.addr !258
  store i32 %1, i32* %sum_-16.01.reg2mem, !insn.addr !258
  store i32 %1, i32* %sum_-16.0.lcssa.reg2mem, !insn.addr !258
  br i1 %5, label %dec_label_pc_116b8, label %dec_label_pc_116fc, !insn.addr !258

dec_label_pc_116fc:                               ; preds = %dec_label_pc_116b8, %dec_label_pc_11694
  %sum_-16.0.lcssa.reload = load i32, i32* %sum_-16.0.lcssa.reg2mem
  ret i32 %sum_-16.0.lcssa.reload, !insn.addr !262

; uselistorder directives
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sum_-16.01.reg2mem, { 2, 0, 1 }
  uselistorder i32 6, { 0, 3, 4, 1, 2 }
  uselistorder i32 %n, { 1, 0 }
  uselistorder label %dec_label_pc_116b8, { 1, 0 }
}

define i32 @loop_external_state(i32* %flag) local_unnamed_addr {
dec_label_pc_11710:
  %count_-12.1.reg2mem = alloca i32, !insn.addr !263
  %count_-12.0.reg2mem = alloca i32, !insn.addr !263
  %0 = icmp eq i32* %flag, null, !insn.addr !264
  store i32 0, i32* %count_-12.0.reg2mem, !insn.addr !265
  br label %dec_label_pc_11744, !insn.addr !265

dec_label_pc_1172c:                               ; preds = %dec_label_pc_11744
  %count_-12.0.reload = load i32, i32* %count_-12.0.reg2mem
  %1 = add nuw nsw i32 %count_-12.0.reload, 1, !insn.addr !266
  %2 = icmp ugt i32 %count_-12.0.reload, 99, !insn.addr !267
  store i32 %1, i32* %count_-12.0.reg2mem, !insn.addr !267
  store i32 101, i32* %count_-12.1.reg2mem, !insn.addr !267
  br i1 %2, label %dec_label_pc_1175c, label %dec_label_pc_11744, !insn.addr !267

dec_label_pc_11744:                               ; preds = %dec_label_pc_1172c, %dec_label_pc_11710
  store i32 0, i32* %count_-12.1.reg2mem, !insn.addr !268
  br i1 %0, label %dec_label_pc_1172c, label %dec_label_pc_1175c, !insn.addr !268

dec_label_pc_1175c:                               ; preds = %dec_label_pc_1172c, %dec_label_pc_11744
  %count_-12.1.reload = load i32, i32* %count_-12.1.reg2mem
  ret i32 %count_-12.1.reload, !insn.addr !269

; uselistorder directives
  uselistorder i32 %count_-12.0.reload, { 1, 0 }
  uselistorder i32* %count_-12.0.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1175c, { 1, 0 }
}

define i32 @recursion_factorial(i32 %n) local_unnamed_addr {
dec_label_pc_11770:
  %storemerge.reg2mem = alloca i32, !insn.addr !270
  %0 = icmp sgt i32 %n, 1, !insn.addr !271
  store i32 1, i32* %storemerge.reg2mem, !insn.addr !271
  br i1 %0, label %dec_label_pc_11794, label %dec_label_pc_117b0, !insn.addr !271

dec_label_pc_11794:                               ; preds = %dec_label_pc_11770
  %1 = add i32 %n, -1, !insn.addr !272
  %2 = call i32 @recursion_factorial(i32 %1), !insn.addr !273
  %3 = mul i32 %2, %n, !insn.addr !274
  store i32 %3, i32* %storemerge.reg2mem, !insn.addr !274
  br label %dec_label_pc_117b0, !insn.addr !274

dec_label_pc_117b0:                               ; preds = %dec_label_pc_11770, %dec_label_pc_11794
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !275

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_117b0, { 1, 0 }
}

define i32 @tail_recursion(i32 %n, i32 %acc) local_unnamed_addr {
dec_label_pc_117bc:
  %storemerge.reg2mem = alloca i32, !insn.addr !276
  %0 = icmp sgt i32 %n, 1, !insn.addr !277
  store i32 %acc, i32* %storemerge.reg2mem, !insn.addr !277
  br i1 %0, label %dec_label_pc_117e4, label %dec_label_pc_11804, !insn.addr !277

dec_label_pc_117e4:                               ; preds = %dec_label_pc_117bc
  %1 = add i32 %n, -1, !insn.addr !278
  %2 = mul i32 %acc, %n, !insn.addr !279
  %3 = call i32 @tail_recursion(i32 %1, i32 %2), !insn.addr !280
  store i32 %3, i32* %storemerge.reg2mem, !insn.addr !281
  br label %dec_label_pc_11804, !insn.addr !281

dec_label_pc_11804:                               ; preds = %dec_label_pc_117bc, %dec_label_pc_117e4
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !282

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %acc, { 1, 0 }
  uselistorder label %dec_label_pc_11804, { 1, 0 }
}

define i32 @indirect_recursion_a(i32 %n, i32 %depth) local_unnamed_addr {
dec_label_pc_11810:
  %r3.0.reg2mem = alloca i32, !insn.addr !283
  %0 = icmp sgt i32 %depth, 0, !insn.addr !284
  store i32 %n, i32* %r3.0.reg2mem, !insn.addr !284
  br i1 %0, label %dec_label_pc_11838, label %dec_label_pc_118a4, !insn.addr !284

dec_label_pc_11838:                               ; preds = %dec_label_pc_11810
  %1 = urem i32 %n, 2, !insn.addr !285
  %2 = icmp eq i32 %1, 0, !insn.addr !286
  br i1 %2, label %dec_label_pc_11848, label %dec_label_pc_11878, !insn.addr !287

dec_label_pc_11848:                               ; preds = %dec_label_pc_11838
  %3 = icmp slt i32 %n, 0
  %4 = zext i1 %3 to i32, !insn.addr !288
  %5 = add i32 %4, %n, !insn.addr !289
  %6 = ashr i32 %5, 1, !insn.addr !290
  %7 = add i32 %depth, -1, !insn.addr !291
  %8 = call i32 @indirect_recursion_b(i32 %6, i32 %7), !insn.addr !292
  store i32 %8, i32* %r3.0.reg2mem, !insn.addr !293
  br label %dec_label_pc_118a4, !insn.addr !293

dec_label_pc_11878:                               ; preds = %dec_label_pc_11838
  %9 = mul i32 %n, 3, !insn.addr !294
  %10 = add i32 %9, 1, !insn.addr !295
  %11 = add i32 %depth, -1, !insn.addr !296
  %12 = call i32 @indirect_recursion_b(i32 %10, i32 %11), !insn.addr !297
  store i32 %12, i32* %r3.0.reg2mem, !insn.addr !298
  br label %dec_label_pc_118a4, !insn.addr !298

dec_label_pc_118a4:                               ; preds = %dec_label_pc_11810, %dec_label_pc_11878, %dec_label_pc_11848
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  ret i32 %r3.0.reload, !insn.addr !299

; uselistorder directives
  uselistorder i32* %r3.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32 (i32, i32)* @indirect_recursion_b, { 1, 0 }
  uselistorder i32 %n, { 4, 3, 1, 2, 0 }
  uselistorder label %dec_label_pc_118a4, { 1, 2, 0 }
}

define i32 @indirect_recursion_b(i32 %n, i32 %depth) local_unnamed_addr {
dec_label_pc_118b0:
  %storemerge.reg2mem = alloca i32, !insn.addr !300
  %0 = icmp sgt i32 %depth, 0, !insn.addr !301
  store i32 %n, i32* %storemerge.reg2mem, !insn.addr !301
  br i1 %0, label %dec_label_pc_118d8, label %dec_label_pc_118f8, !insn.addr !301

dec_label_pc_118d8:                               ; preds = %dec_label_pc_118b0
  %1 = add i32 %n, 1, !insn.addr !302
  %2 = add i32 %depth, -1, !insn.addr !303
  %3 = call i32 @indirect_recursion_a(i32 %1, i32 %2), !insn.addr !304
  store i32 %3, i32* %storemerge.reg2mem, !insn.addr !305
  br label %dec_label_pc_118f8, !insn.addr !305

dec_label_pc_118f8:                               ; preds = %dec_label_pc_118b0, %dec_label_pc_118d8
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !306

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %n, { 1, 0 }
  uselistorder label %dec_label_pc_118f8, { 1, 0 }
}

define i32 @call_func_ptr(i32 (i32)* %f, i32 %x) local_unnamed_addr {
dec_label_pc_11904:
  ret i32 %x, !insn.addr !307
}

define i32 @call_func_ptr_array(i32 %idx, i32 %x) local_unnamed_addr {
dec_label_pc_11a1c:
  %funcs_-28 = alloca [3 x i32 (i32)*], align 4
  %0 = inttoptr i32 %idx to i32 (i32)*, !insn.addr !308
  %1 = insertvalue [3 x i32 (i32)*] undef, i32 (i32)* %0, 0, !insn.addr !308
  store [3 x i32 (i32)*] %1, [3 x i32 (i32)*]* %funcs_-28, align 4, !insn.addr !308
  %2 = bitcast [3 x i32 (i32)*]* %funcs_-28 to i32*, !insn.addr !309
  %3 = load i32, i32* %2, align 4, !insn.addr !309
  %4 = icmp slt i32 %3, 0, !insn.addr !310
  %5 = icmp slt i32 %3, 3
  %spec.select = select i1 %5, i32 %x, i32 -1
  %storemerge = select i1 %4, i32 -1, i32 %spec.select
  ret i32 %storemerge, !insn.addr !311
}

define i32 @process_with_callback(i32* %arr, i32 %n, i32 (i32)* %cb) local_unnamed_addr {
dec_label_pc_11a5c:
  %sum_-16.0.lcssa.reg2mem = alloca i32, !insn.addr !312
  %sum_-16.02.reg2mem = alloca i32, !insn.addr !312
  %storemerge3.reg2mem = alloca i32, !insn.addr !312
  %0 = ptrtoint i32* %arr to i32
  %1 = icmp sgt i32 %n, 0, !insn.addr !313
  store i32 0, i32* %storemerge3.reg2mem, !insn.addr !313
  store i32 0, i32* %sum_-16.02.reg2mem, !insn.addr !313
  store i32 0, i32* %sum_-16.0.lcssa.reg2mem, !insn.addr !313
  br i1 %1, label %dec_label_pc_11a88, label %dec_label_pc_11ad4, !insn.addr !313

dec_label_pc_11a88:                               ; preds = %dec_label_pc_11a5c, %dec_label_pc_11a88
  %sum_-16.02.reload = load i32, i32* %sum_-16.02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %2 = mul i32 %storemerge3.reload, 4, !insn.addr !314
  %3 = add i32 %2, %0, !insn.addr !315
  %4 = inttoptr i32 %3 to i32*, !insn.addr !316
  %5 = load i32, i32* %4, align 4, !insn.addr !316
  %6 = add i32 %5, %sum_-16.02.reload, !insn.addr !317
  %7 = add nuw nsw i32 %storemerge3.reload, 1, !insn.addr !318
  %8 = icmp slt i32 %7, %n, !insn.addr !313
  store i32 %7, i32* %storemerge3.reg2mem, !insn.addr !313
  store i32 %6, i32* %sum_-16.02.reg2mem, !insn.addr !313
  store i32 %6, i32* %sum_-16.0.lcssa.reg2mem, !insn.addr !313
  br i1 %8, label %dec_label_pc_11a88, label %dec_label_pc_11ad4, !insn.addr !313

dec_label_pc_11ad4:                               ; preds = %dec_label_pc_11a88, %dec_label_pc_11a5c
  %sum_-16.0.lcssa.reload = load i32, i32* %sum_-16.0.lcssa.reg2mem
  ret i32 %sum_-16.0.lcssa.reload, !insn.addr !319

; uselistorder directives
  uselistorder i32* %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sum_-16.02.reg2mem, { 2, 0, 1 }
  uselistorder i32 %n, { 1, 0 }
  uselistorder label %dec_label_pc_11a88, { 1, 0 }
}

define void @test_control_flow_l2() local_unnamed_addr {
dec_label_pc_11ae4:
  %arr_-96 = alloca [5 x i32], align 4
  %arr_-100 = alloca [5 x i32], align 4
  %dst_-44 = alloca [8 x i32], align 4
  %src_-76 = alloca [8 x i32], align 4
  %flag_-104 = alloca i32, align 4
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_12d6c to i8*)), !insn.addr !320
  %1 = call i32 @loop_multi_exit(i32 7), !insn.addr !321
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_12d90, i32 0, i32 0), i32 %1), !insn.addr !322
  store i32 0, i32* %flag_-104, align 4, !insn.addr !323
  %3 = call i32 @infinite_loop(i32* nonnull %flag_-104), !insn.addr !324
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_12db0, i32 0, i32 0), i32 %3), !insn.addr !325
  %5 = call i32 @multi_return(i32 -5), !insn.addr !326
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_12dd0, i32 0, i32 0), i32 %5), !insn.addr !327
  %7 = call i32 @multi_return(i32 100), !insn.addr !328
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_12dd0, i32 0, i32 0), i32 %7), !insn.addr !329
  %9 = call i32 @multi_return(i32 3), !insn.addr !330
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_12dd0, i32 0, i32 0), i32 %9), !insn.addr !331
  %11 = call i32 @conditional_return(i32 5), !insn.addr !332
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_12df0, i32 0, i32 0), i32 %11), !insn.addr !333
  %13 = call i32 @conditional_return(i32 -5), !insn.addr !334
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_12df0, i32 0, i32 0), i32 %13), !insn.addr !335
  store [8 x i32] [i32 1, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], [8 x i32]* %src_-76, align 4, !insn.addr !336
  %15 = getelementptr inbounds [8 x i32], [8 x i32]* %dst_-44, i32 0, i32 0, !insn.addr !337
  %16 = call i32* @memset(i32* nonnull %15, i32 0, i32 32), !insn.addr !337
  %17 = getelementptr inbounds [8 x i32], [8 x i32]* %src_-76, i32 0, i32 0, !insn.addr !338
  %18 = call i32 @duffs_device(i32* nonnull %15, i32* nonnull %17, i32 8), !insn.addr !338
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_12e14, i32 0, i32 0), i32 %18), !insn.addr !339
  %20 = call i32 @loop_complex_cond(i32 10), !insn.addr !340
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_12e34, i32 0, i32 0), i32 %20), !insn.addr !341
  %22 = call i32 @loop_modify_var(i32 10), !insn.addr !342
  %23 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_12e58, i32 0, i32 0), i32 %22), !insn.addr !343
  store [5 x i32] [i32 0, i32 undef, i32 undef, i32 undef, i32 undef], [5 x i32]* %arr_-100, align 4, !insn.addr !344
  %24 = getelementptr inbounds [5 x i32], [5 x i32]* %arr_-100, i32 0, i32 0, !insn.addr !345
  %25 = call i32 @loop_external_state(i32* nonnull %24), !insn.addr !345
  %26 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_12e78, i32 0, i32 0), i32 %25), !insn.addr !346
  %27 = call i32 @recursion_factorial(i32 5), !insn.addr !347
  %28 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_12e9c, i32 0, i32 0), i32 %27), !insn.addr !348
  %29 = call i32 @tail_recursion(i32 5, i32 1), !insn.addr !349
  %30 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_12ec0, i32 0, i32 0), i32 %29), !insn.addr !350
  %31 = call i32 @indirect_recursion_a(i32 10, i32 3), !insn.addr !351
  %32 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_12ee0, i32 0, i32 0), i32 %31), !insn.addr !352
  %33 = call i32 @call_func_ptr(i32 (i32)* inttoptr (i32 71988 to i32 (i32)*), i32 5), !insn.addr !353
  %34 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_12f04, i32 0, i32 0), i32 %33), !insn.addr !354
  %35 = call i32 @call_func_ptr_array(i32 0, i32 5), !insn.addr !355
  %36 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_12f24, i32 0, i32 0), i32 %35), !insn.addr !356
  %37 = call i32 @call_func_ptr_array(i32 2, i32 5), !insn.addr !357
  %38 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_12f24, i32 0, i32 0), i32 %37), !insn.addr !358
  store [5 x i32] [i32 1, i32 undef, i32 undef, i32 undef, i32 undef], [5 x i32]* %arr_-96, align 4, !insn.addr !359
  %39 = getelementptr inbounds [5 x i32], [5 x i32]* %arr_-96, i32 0, i32 0, !insn.addr !360
  %40 = call i32 @process_with_callback(i32* nonnull %39, i32 5, i32 (i32)* inttoptr (i32 71988 to i32 (i32)*)), !insn.addr !360
  %41 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_12f48, i32 0, i32 0), i32 %40), !insn.addr !361
  ret void, !insn.addr !362

; uselistorder directives
  uselistorder i32 (i32, i32)* @call_func_ptr_array, { 1, 0 }
  uselistorder i32 (i32, i32)* @indirect_recursion_a, { 1, 0 }
  uselistorder i32 (i32, i32)* @tail_recursion, { 1, 0 }
  uselistorder i32 (i32)* @recursion_factorial, { 1, 0 }
  uselistorder i32 8, { 2, 0, 1, 3, 6, 4, 5 }
  uselistorder i32 (i32)* @conditional_return, { 1, 0 }
  uselistorder i32 100, { 2, 1, 0 }
  uselistorder i32 (i32)* @multi_return, { 2, 1, 0 }
  uselistorder i32 7, { 0, 5, 1, 2, 6, 3, 4 }
}

define i32 @non_local_jump(i32 %x) local_unnamed_addr {
dec_label_pc_11dbc:
  %storemerge.reg2mem = alloca i32, !insn.addr !363
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @jump_buffer to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !364
  %1 = icmp eq i32 %0, 0, !insn.addr !365
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !366
  br i1 %1, label %dec_label_pc_11de0, label %dec_label_pc_11e20, !insn.addr !366

dec_label_pc_11de0:                               ; preds = %dec_label_pc_11dbc
  %2 = icmp slt i32 %x, 0, !insn.addr !367
  br i1 %2, label %dec_label_pc_11dec, label %dec_label_pc_11df8, !insn.addr !368

dec_label_pc_11dec:                               ; preds = %dec_label_pc_11de0
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @jump_buffer to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 1), !insn.addr !369
  unreachable, !insn.addr !369

dec_label_pc_11df8:                               ; preds = %dec_label_pc_11de0
  %3 = icmp slt i32 %x, 101, !insn.addr !370
  br i1 %3, label %dec_label_pc_11e10, label %dec_label_pc_11e04, !insn.addr !370

dec_label_pc_11e04:                               ; preds = %dec_label_pc_11df8
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @jump_buffer to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 2), !insn.addr !371
  unreachable, !insn.addr !371

dec_label_pc_11e10:                               ; preds = %dec_label_pc_11df8
  %4 = mul i32 %x, 2, !insn.addr !372
  store i32 %4, i32* %storemerge.reg2mem, !insn.addr !373
  br label %dec_label_pc_11e20, !insn.addr !373

dec_label_pc_11e20:                               ; preds = %dec_label_pc_11dbc, %dec_label_pc_11e10
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !374

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder void ([1 x %__jmp_buf_tag], i32)* @longjmp, { 1, 0 }
  uselistorder i32 %x, { 0, 2, 1 }
  uselistorder label %dec_label_pc_11e20, { 1, 0 }
}

define i32 @cpp_exception(i32 %x) local_unnamed_addr {
dec_label_pc_11e30:
  %0 = icmp slt i32 %x, 0, !insn.addr !375
  br i1 %0, label %dec_label_pc_11e70, label %dec_label_pc_11e54, !insn.addr !376

dec_label_pc_11e54:                               ; preds = %dec_label_pc_11e30
  %1 = icmp slt i32 %x, 101, !insn.addr !377
  %2 = mul i32 %x, 2
  %spec.select = select i1 %1, i32 %2, i32 -2
  ret i32 %spec.select

dec_label_pc_11e70:                               ; preds = %dec_label_pc_11e30
  ret i32 -1, !insn.addr !378

; uselistorder directives
  uselistorder i32 -2, { 2, 0, 1 }
  uselistorder i32 101, { 1, 2, 0, 3 }
}

define i32 @large_jump_table(i32 %op, i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_1208c:
  %0 = icmp ult i32 %op, 10
  %storemerge = select i1 %0, i32 %a, i32 -1
  ret i32 %storemerge, !insn.addr !379
}

define i32 @conditional_func_ptr(i32 %mode, i32 %x) local_unnamed_addr {
dec_label_pc_1214c:
  ret i32 %x, !insn.addr !380
}

define i32 @state_machine(i32 %event, i32 %state) local_unnamed_addr {
dec_label_pc_121c0:
  %r3.0.reg2mem = alloca i32, !insn.addr !381
  store i32 %state, i32* @3, align 4, !insn.addr !382
  store i32 2, i32* %r3.0.reg2mem, !insn.addr !382
  switch i32 %state, label %dec_label_pc_12264 [
    i32 0, label %dec_label_pc_121f4
    i32 1, label %dec_label_pc_12210
    i32 2, label %dec_label_pc_12268
    i32 3, label %dec_label_pc_12248
  ], !insn.addr !382

dec_label_pc_121f4:                               ; preds = %dec_label_pc_121c0
  %0 = icmp eq i32 %event, 1, !insn.addr !383
  %. = zext i1 %0 to i32
  store i32 %., i32* %r3.0.reg2mem, !insn.addr !384
  br label %dec_label_pc_12268, !insn.addr !384

dec_label_pc_12210:                               ; preds = %dec_label_pc_121c0
  %switch.selectcmp = icmp eq i32 %event, 99
  %switch.select = select i1 %switch.selectcmp, i32 3, i32 1
  %switch.selectcmp2 = icmp eq i32 %event, 2
  %switch.select3 = select i1 %switch.selectcmp2, i32 2, i32 %switch.select
  store i32 %switch.select3, i32* %r3.0.reg2mem
  br label %dec_label_pc_12268

dec_label_pc_12248:                               ; preds = %dec_label_pc_121c0
  %1 = icmp eq i32 %event, 0, !insn.addr !385
  %.1 = select i1 %1, i32 0, i32 3
  store i32 %.1, i32* %r3.0.reg2mem, !insn.addr !386
  br label %dec_label_pc_12268, !insn.addr !386

dec_label_pc_12264:                               ; preds = %dec_label_pc_121c0
  store i32 3, i32* %r3.0.reg2mem, !insn.addr !387
  br label %dec_label_pc_12268, !insn.addr !387

dec_label_pc_12268:                               ; preds = %dec_label_pc_12210, %dec_label_pc_12248, %dec_label_pc_121c0, %dec_label_pc_121f4, %dec_label_pc_12264
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  ret i32 %r3.0.reload, !insn.addr !388

; uselistorder directives
  uselistorder i32* %r3.0.reg2mem, { 0, 5, 2, 1, 4, 3 }
  uselistorder i32 99, { 1, 0, 2 }
  uselistorder i32 %state, { 1, 0 }
  uselistorder i32 %event, { 3, 0, 1, 2 }
  uselistorder label %dec_label_pc_12268, { 4, 1, 0, 3, 2 }
}

define i32 @fsm_func_table(i32 %event, i32 %state) local_unnamed_addr {
dec_label_pc_12354:
  %0 = icmp ult i32 %state, 4
  %storemerge = select i1 %0, i32 %event, i32 3
  ret i32 %storemerge, !insn.addr !389
}

define i32 @computed_goto(i32* %labels, i32 %idx) local_unnamed_addr {
dec_label_pc_123f8:
  %0 = icmp ult i32 %idx, 4
  %merge = select i1 %0, i32 74856, i32 -1
  ret i32 %merge, !insn.addr !390

; uselistorder directives
  uselistorder i32 -1, { 14, 16, 12, 0, 15, 17, 18, 19, 20, 21, 22, 23, 24, 1, 2, 3, 4, 5, 13, 6, 7, 8, 9, 10, 11 }
  uselistorder i32 4, { 7, 8, 0, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 1, 4, 9, 2, 10, 3, 31, 5, 6, 11, 12, 13 }
}

define i32 @obfuscated_cf(i32 %x) local_unnamed_addr {
dec_label_pc_124b4:
  %0 = mul i32 %x, %x, !insn.addr !391
  %1 = add i32 %0, 1, !insn.addr !392
  %2 = sub i32 0, %0
  %3 = and i32 %1, %2, !insn.addr !392
  %4 = icmp slt i32 %3, 0, !insn.addr !392
  %5 = icmp slt i32 %1, 0, !insn.addr !392
  %6 = icmp eq i1 %5, %4, !insn.addr !393
  %7 = mul i32 %x, 2
  %8 = or i32 %7, 1
  %result_-12.0 = select i1 %6, i32 %x, i32 %8
  %9 = mul i32 %result_-12.0, 2, !insn.addr !394
  ret i32 %9, !insn.addr !395

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32 %x, { 1, 0, 2, 3 }
}

define i32 @opaque_predicate(i32 %x) local_unnamed_addr {
dec_label_pc_12514:
  %0 = mul i32 %x, 2, !insn.addr !396
  ret i32 %0, !insn.addr !397
}

define i32 @overlapped_code(i32 %x) local_unnamed_addr {
dec_label_pc_12564:
  %storemerge.reg2mem = alloca i32, !insn.addr !398
  %0 = urem i32 %x, 2, !insn.addr !399
  %1 = icmp eq i32 %0, 0, !insn.addr !400
  br i1 %1, label %dec_label_pc_1259c, label %dec_label_pc_12584, !insn.addr !401

dec_label_pc_12584:                               ; preds = %dec_label_pc_12564
  %2 = mul i32 %x, 3, !insn.addr !402
  %3 = add i32 %2, 1, !insn.addr !403
  store i32 %3, i32* %storemerge.reg2mem, !insn.addr !404
  br label %dec_label_pc_125ac, !insn.addr !404

dec_label_pc_1259c:                               ; preds = %dec_label_pc_12564
  %4 = icmp slt i32 %x, 0
  %5 = zext i1 %4 to i32, !insn.addr !405
  %6 = add i32 %5, %x, !insn.addr !406
  %7 = ashr i32 %6, 1, !insn.addr !407
  store i32 %7, i32* %storemerge.reg2mem, !insn.addr !407
  br label %dec_label_pc_125ac, !insn.addr !407

dec_label_pc_125ac:                               ; preds = %dec_label_pc_1259c, %dec_label_pc_12584
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !408

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 3, { 6, 5, 0, 3, 2, 23, 10, 11, 7, 8, 24, 9, 12, 13, 14, 15, 16, 17, 25, 18, 26, 27, 28, 4, 1, 19, 20, 21, 22 }
  uselistorder i32 %x, { 2, 0, 3, 1 }
}

define void @test_control_flow_l3() local_unnamed_addr {
dec_label_pc_125bc:
  %labels_-28 = alloca [4 x i32], align 4
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_12fec to i8*)), !insn.addr !409
  %1 = call i32 @non_local_jump(i32 5), !insn.addr !410
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_13010, i32 0, i32 0), i32 %1), !insn.addr !411
  %3 = call i32 @non_local_jump(i32 -5), !insn.addr !412
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_13010, i32 0, i32 0), i32 %3), !insn.addr !413
  %5 = call i32 @cpp_exception(i32 5), !insn.addr !414
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_13030, i32 0, i32 0), i32 %5), !insn.addr !415
  %7 = call i32 @cpp_exception(i32 -5), !insn.addr !416
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_13030, i32 0, i32 0), i32 %7), !insn.addr !417
  %9 = call i32 @large_jump_table(i32 0, i32 10, i32 5), !insn.addr !418
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_13050, i32 0, i32 0), i32 %9), !insn.addr !419
  %11 = call i32 @conditional_func_ptr(i32 0, i32 5), !insn.addr !420
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_13074, i32 0, i32 0), i32 %11), !insn.addr !421
  %13 = call i32 @state_machine(i32 1, i32 0), !insn.addr !422
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_1309c, i32 0, i32 0), i32 %13), !insn.addr !423
  %15 = call i32 @fsm_func_table(i32 2, i32 1), !insn.addr !424
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_130bc, i32 0, i32 0), i32 %15), !insn.addr !425
  store [4 x i32] [i32 0, i32 undef, i32 undef, i32 undef], [4 x i32]* %labels_-28, align 4, !insn.addr !426
  %17 = getelementptr inbounds [4 x i32], [4 x i32]* %labels_-28, i32 0, i32 0, !insn.addr !427
  %18 = call i32 @computed_goto(i32* nonnull %17, i32 2), !insn.addr !427
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_130dc, i32 0, i32 0), i32 %18), !insn.addr !428
  %20 = call i32 @obfuscated_cf(i32 5), !insn.addr !429
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_130fc, i32 0, i32 0), i32 %20), !insn.addr !430
  %22 = call i32 @opaque_predicate(i32 5), !insn.addr !431
  %23 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_1311c, i32 0, i32 0), i32 %22), !insn.addr !432
  %24 = call i32 @overlapped_code(i32 5), !insn.addr !433
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_13140, i32 0, i32 0), i32 %24), !insn.addr !434
  ret void, !insn.addr !435

; uselistorder directives
  uselistorder i32 2, { 23, 24, 13, 3, 4, 5, 17, 18, 32, 0, 6, 7, 25, 26, 14, 33, 34, 35, 8, 15, 9, 27, 10, 16, 11, 19, 20, 36, 1, 37, 21, 22, 2, 12, 28, 29, 30, 31 }
  uselistorder i32 10, { 7, 4, 8, 9, 10, 5, 6, 11, 12, 13, 14, 15, 16, 2, 3, 0, 1, 17, 18 }
  uselistorder i32 (i32)* @cpp_exception, { 1, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 (i32)* @non_local_jump, { 1, 0 }
  uselistorder i32 5, { 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 28, 17, 18, 19, 20, 21, 22, 23, 24, 2, 29, 0, 1, 25, 26, 27 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0 }
  uselistorder i32 1, { 104, 105, 121, 132, 133, 0, 93, 134, 85, 135, 136, 1, 106, 2, 94, 107, 95, 126, 125, 124, 123, 122, 137, 5, 4, 3, 127, 138, 6, 139, 140, 7, 108, 8, 9, 109, 10, 141, 12, 11, 142, 15, 14, 13, 143, 21, 20, 19, 18, 17, 16, 144, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 96, 145, 47, 110, 146, 90, 49, 48, 148, 147, 129, 128, 52, 51, 50, 111, 97, 115, 114, 113, 112, 149, 53, 55, 57, 58, 56, 54, 91, 92, 150, 61, 83, 62, 60, 59, 151, 131, 130, 64, 63, 65, 152, 67, 66, 81, 82, 84, 153, 69, 68, 70, 86, 73, 72, 71, 87, 74, 154, 75, 155, 76, 88, 77, 89, 78, 98, 99, 100, 79, 101, 102, 80, 103, 116, 117, 118, 119, 120 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_12788:
  call void @test_control_flow_l1(), !insn.addr !436
  call void @test_control_flow_l2(), !insn.addr !437
  call void @test_control_flow_l3(), !insn.addr !438
  ret i32 0, !insn.addr !439

; uselistorder directives
  uselistorder i32 0, { 27, 53, 54, 55, 56, 57, 58, 59, 60, 51, 52, 61, 62, 63, 64, 162, 65, 66, 163, 67, 68, 164, 69, 70, 71, 72, 29, 179, 180, 181, 30, 45, 182, 183, 184, 185, 186, 81, 82, 73, 74, 83, 84, 165, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 75, 76, 95, 96, 97, 98, 99, 100, 101, 77, 78, 166, 79, 80, 102, 103, 104, 105, 106, 107, 167, 108, 109, 0, 1, 2, 33, 187, 168, 31, 188, 169, 3, 4, 5, 6, 7, 34, 50, 8, 9, 10, 11, 39, 170, 189, 190, 191, 192, 171, 193, 194, 195, 12, 13, 113, 14, 110, 111, 112, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 172, 41, 196, 15, 16, 17, 35, 154, 155, 32, 36, 18, 37, 19, 20, 40, 21, 38, 22, 23, 46, 24, 197, 25, 198, 47, 48, 26, 28, 42, 43, 49, 44, 156, 157, 158, 159, 160, 161, 173, 174, 175, 176, 177, 178 }
}

declare i32 @printf(i8*, ...) local_unnamed_addr

declare void @longjmp([1 x %__jmp_buf_tag], i32) local_unnamed_addr

declare i32 @_setjmp([1 x %__jmp_buf_tag]) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

!0 = !{i64 67028}
!1 = !{i64 67040}
!2 = !{i64 67056}
!3 = !{i64 67080}
!4 = !{i64 67108}
!5 = !{i64 67140}
!6 = !{i64 67168}
!7 = !{i64 67196}
!8 = !{i64 67228}
!9 = !{i64 67240}
!10 = !{i64 67284}
!11 = !{i64 67288}
!12 = !{i64 67324}
!13 = !{i64 67336}
!14 = !{i64 67348}
!15 = !{i64 67360}
!16 = !{i64 67372}
!17 = !{i64 67388}
!18 = !{i64 67432}
!19 = !{i64 67436}
!20 = !{i64 67488}
!21 = !{i64 67508}
!22 = !{i64 67512}
!23 = !{i64 67528}
!24 = !{i64 67532}
!25 = !{i64 67584}
!26 = !{i64 67604}
!27 = !{i64 67624}
!28 = !{i64 67644}
!29 = !{i64 67648}
!30 = !{i64 67664}
!31 = !{i64 67668}
!32 = !{i64 67708}
!33 = !{i64 67760}
!34 = !{i64 67776}
!35 = !{i64 67796}
!36 = !{i64 67800}
!37 = !{i64 67812}
!38 = !{i64 67816}
!39 = !{i64 67840}
!40 = !{i64 67900}
!41 = !{i64 67908}
!42 = !{i64 67916}
!43 = !{i64 67924}
!44 = !{i64 67932}
!45 = !{i64 67940}
!46 = !{i64 67948}
!47 = !{i64 67956}
!48 = !{i64 67964}
!49 = !{i64 67968}
!50 = !{i64 67984}
!51 = !{i64 67988}
!52 = !{i64 68008}
!53 = !{i64 68012}
!54 = !{i64 68024}
!55 = !{i64 68096}
!56 = !{i64 68100}
!57 = !{i64 68128}
!58 = !{i64 68132}
!59 = !{i64 68144}
!60 = !{i64 68200}
!61 = !{i64 68208}
!62 = !{i64 68212}
!63 = !{i64 68224}
!64 = !{i64 68232}
!65 = !{i64 68260}
!66 = !{i64 68264}
!67 = !{i64 68340}
!68 = !{i64 68360}
!69 = !{i64 68364}
!70 = !{i64 68436}
!71 = !{i64 68440}
!72 = !{i64 68412}
!73 = !{i64 68424}
!74 = !{i64 68472}
!75 = !{i64 68480}
!76 = !{i64 68500}
!77 = !{i64 68524}
!78 = !{i64 68536}
!79 = !{i64 68552}
!80 = !{i64 68572}
!81 = !{i64 68580}
!82 = !{i64 68696}
!83 = !{i64 68716}
!84 = !{i64 68720}
!85 = !{i64 68784}
!86 = !{i64 68856}
!87 = !{i64 68864}
!88 = !{i64 68724}
!89 = !{i64 68812}
!90 = !{i64 68804}
!91 = !{i64 68816}
!92 = !{i64 68824}
!93 = !{i64 68828}
!94 = !{i64 68844}
!95 = !{i64 68908}
!96 = !{i64 68920}
!97 = !{i64 69020}
!98 = !{i64 68960}
!99 = !{i64 68964}
!100 = !{i64 69000}
!101 = !{i64 69040}
!102 = !{i64 69108}
!103 = !{i64 69132}
!104 = !{i64 69136}
!105 = !{i64 69160}
!106 = !{i64 69212}
!107 = !{i64 69224}
!108 = !{i64 69200}
!109 = !{i64 69256}
!110 = !{i64 69292}
!111 = !{i64 69312}
!112 = !{i64 69332}
!113 = !{i64 69348}
!114 = !{i64 69364}
!115 = !{i64 69372}
!116 = !{i64 69388}
!117 = !{i64 69396}
!118 = !{i64 69412}
!119 = !{i64 69420}
!120 = !{i64 69436}
!121 = !{i64 69444}
!122 = !{i64 69460}
!123 = !{i64 69472}
!124 = !{i64 69488}
!125 = !{i64 69500}
!126 = !{i64 69516}
!127 = !{i64 69528}
!128 = !{i64 69544}
!129 = !{i64 69572}
!130 = !{i64 69588}
!131 = !{i64 69596}
!132 = !{i64 69612}
!133 = !{i64 69620}
!134 = !{i64 69636}
!135 = !{i64 69644}
!136 = !{i64 69660}
!137 = !{i64 69668}
!138 = !{i64 69684}
!139 = !{i64 69692}
!140 = !{i64 69708}
!141 = !{i64 69716}
!142 = !{i64 69732}
!143 = !{i64 69740}
!144 = !{i64 69756}
!145 = !{i64 69764}
!146 = !{i64 69780}
!147 = !{i64 69788}
!148 = !{i64 69804}
!149 = !{i64 69816}
!150 = !{i64 69832}
!151 = !{i64 69840}
!152 = !{i64 69856}
!153 = !{i64 69864}
!154 = !{i64 69880}
!155 = !{i64 69888}
!156 = !{i64 69904}
!157 = !{i64 69912}
!158 = !{i64 69928}
!159 = !{i64 69936}
!160 = !{i64 69952}
!161 = !{i64 69960}
!162 = !{i64 69976}
!163 = !{i64 69988}
!164 = !{i64 70004}
!165 = !{i64 70016}
!166 = !{i64 70032}
!167 = !{i64 70044}
!168 = !{i64 70140}
!169 = !{i64 70144}
!170 = !{i64 70324}
!171 = !{i64 70244}
!172 = !{i64 70248}
!173 = !{i64 70260}
!174 = !{i64 70268}
!175 = !{i64 70272}
!176 = !{i64 70292}
!177 = !{i64 70304}
!178 = !{i64 70308}
!179 = !{i64 70316}
!180 = !{i64 70320}
!181 = !{i64 70332}
!182 = !{i64 70340}
!183 = !{i64 70356}
!184 = !{i64 70236}
!185 = !{i64 70400}
!186 = !{i64 70412}
!187 = !{i64 70444}
!188 = !{i64 70432}
!189 = !{i64 70448}
!190 = !{i64 70456}
!191 = !{i64 70472}
!192 = !{i64 70484}
!193 = !{i64 70488}
!194 = !{i64 70512}
!195 = !{i64 70516}
!196 = !{i64 70536}
!197 = !{i64 70540}
!198 = !{i64 70556}
!199 = !{i64 70572}
!200 = !{i64 70588}
!201 = !{i64 70592}
!202 = !{i64 70628}
!203 = !{i64 70656}
!204 = !{i64 70664}
!205 = !{i64 70712}
!206 = !{i64 70716}
!207 = !{i64 70748}
!208 = !{i64 70784}
!209 = !{i64 70796}
!210 = !{i64 70800}
!211 = !{i64 70816}
!212 = !{i64 70864}
!213 = !{i64 70876}
!214 = !{i64 70884}
!215 = !{i64 70888}
!216 = !{i64 70896}
!217 = !{i64 70908}
!218 = !{i64 70916}
!219 = !{i64 70920}
!220 = !{i64 70928}
!221 = !{i64 70940}
!222 = !{i64 70948}
!223 = !{i64 70952}
!224 = !{i64 70960}
!225 = !{i64 70972}
!226 = !{i64 70980}
!227 = !{i64 70984}
!228 = !{i64 70992}
!229 = !{i64 71004}
!230 = !{i64 71012}
!231 = !{i64 71016}
!232 = !{i64 71024}
!233 = !{i64 71036}
!234 = !{i64 71044}
!235 = !{i64 71048}
!236 = !{i64 71056}
!237 = !{i64 71068}
!238 = !{i64 71076}
!239 = !{i64 71080}
!240 = !{i64 71088}
!241 = !{i64 71100}
!242 = !{i64 71108}
!243 = !{i64 71112}
!244 = !{i64 71120}
!245 = !{i64 71136}
!246 = !{i64 71156}
!247 = !{i64 71160}
!248 = !{i64 71276}
!249 = !{i64 71252}
!250 = !{i64 71208}
!251 = !{i64 71220}
!252 = !{i64 71232}
!253 = !{i64 71264}
!254 = !{i64 71288}
!255 = !{i64 71296}
!256 = !{i64 71312}
!257 = !{i64 71316}
!258 = !{i64 71416}
!259 = !{i64 71360}
!260 = !{i64 71376}
!261 = !{i64 71396}
!262 = !{i64 71436}
!263 = !{i64 71440}
!264 = !{i64 71500}
!265 = !{i64 71464}
!266 = !{i64 71472}
!267 = !{i64 71488}
!268 = !{i64 71504}
!269 = !{i64 71532}
!270 = !{i64 71536}
!271 = !{i64 71560}
!272 = !{i64 71576}
!273 = !{i64 71584}
!274 = !{i64 71596}
!275 = !{i64 71608}
!276 = !{i64 71612}
!277 = !{i64 71640}
!278 = !{i64 71656}
!279 = !{i64 71668}
!280 = !{i64 71676}
!281 = !{i64 71680}
!282 = !{i64 71692}
!283 = !{i64 71696}
!284 = !{i64 71724}
!285 = !{i64 71740}
!286 = !{i64 71744}
!287 = !{i64 71748}
!288 = !{i64 71756}
!289 = !{i64 71760}
!290 = !{i64 71764}
!291 = !{i64 71776}
!292 = !{i64 71788}
!293 = !{i64 71796}
!294 = !{i64 71812}
!295 = !{i64 71816}
!296 = !{i64 71824}
!297 = !{i64 71836}
!298 = !{i64 71840}
!299 = !{i64 71852}
!300 = !{i64 71856}
!301 = !{i64 71884}
!302 = !{i64 71900}
!303 = !{i64 71908}
!304 = !{i64 71920}
!305 = !{i64 71924}
!306 = !{i64 71936}
!307 = !{i64 71984}
!308 = !{i64 72088}
!309 = !{i64 72128}
!310 = !{i64 72132}
!311 = !{i64 72228}
!312 = !{i64 72284}
!313 = !{i64 72400}
!314 = !{i64 72332}
!315 = !{i64 72340}
!316 = !{i64 72344}
!317 = !{i64 72368}
!318 = !{i64 72380}
!319 = !{i64 72416}
!320 = !{i64 72452}
!321 = !{i64 72460}
!322 = !{i64 72476}
!323 = !{i64 72484}
!324 = !{i64 72496}
!325 = !{i64 72512}
!326 = !{i64 72520}
!327 = !{i64 72536}
!328 = !{i64 72544}
!329 = !{i64 72560}
!330 = !{i64 72568}
!331 = !{i64 72584}
!332 = !{i64 72592}
!333 = !{i64 72608}
!334 = !{i64 72616}
!335 = !{i64 72632}
!336 = !{i64 72652}
!337 = !{i64 72680}
!338 = !{i64 72700}
!339 = !{i64 72716}
!340 = !{i64 72724}
!341 = !{i64 72740}
!342 = !{i64 72748}
!343 = !{i64 72764}
!344 = !{i64 72772}
!345 = !{i64 72784}
!346 = !{i64 72800}
!347 = !{i64 72808}
!348 = !{i64 72824}
!349 = !{i64 72836}
!350 = !{i64 72852}
!351 = !{i64 72864}
!352 = !{i64 72880}
!353 = !{i64 72892}
!354 = !{i64 72908}
!355 = !{i64 72920}
!356 = !{i64 72936}
!357 = !{i64 72948}
!358 = !{i64 72964}
!359 = !{i64 72984}
!360 = !{i64 73012}
!361 = !{i64 73028}
!362 = !{i64 73068}
!363 = !{i64 73148}
!364 = !{i64 73168}
!365 = !{i64 73176}
!366 = !{i64 73180}
!367 = !{i64 73188}
!368 = !{i64 73192}
!369 = !{i64 73204}
!370 = !{i64 73216}
!371 = !{i64 73228}
!372 = !{i64 73236}
!373 = !{i64 73240}
!374 = !{i64 73256}
!375 = !{i64 73284}
!376 = !{i64 73288}
!377 = !{i64 73308}
!378 = !{i64 73340}
!379 = !{i64 74048}
!380 = !{i64 74160}
!381 = !{i64 74176}
!382 = !{i64 74204}
!383 = !{i64 74232}
!384 = !{i64 74244}
!385 = !{i64 74316}
!386 = !{i64 74328}
!387 = !{i64 74340}
!388 = !{i64 74356}
!389 = !{i64 74732}
!390 = !{i64 74852}
!391 = !{i64 74964}
!392 = !{i64 74972}
!393 = !{i64 74976}
!394 = !{i64 75000}
!395 = !{i64 75024}
!396 = !{i64 75068}
!397 = !{i64 75104}
!398 = !{i64 75108}
!399 = !{i64 75128}
!400 = !{i64 75132}
!401 = !{i64 75136}
!402 = !{i64 75152}
!403 = !{i64 75156}
!404 = !{i64 75160}
!405 = !{i64 75168}
!406 = !{i64 75172}
!407 = !{i64 75176}
!408 = !{i64 75192}
!409 = !{i64 75228}
!410 = !{i64 75236}
!411 = !{i64 75252}
!412 = !{i64 75260}
!413 = !{i64 75276}
!414 = !{i64 75284}
!415 = !{i64 75300}
!416 = !{i64 75308}
!417 = !{i64 75324}
!418 = !{i64 75340}
!419 = !{i64 75356}
!420 = !{i64 75368}
!421 = !{i64 75384}
!422 = !{i64 75396}
!423 = !{i64 75412}
!424 = !{i64 75424}
!425 = !{i64 75440}
!426 = !{i64 75456}
!427 = !{i64 75472}
!428 = !{i64 75488}
!429 = !{i64 75496}
!430 = !{i64 75512}
!431 = !{i64 75520}
!432 = !{i64 75536}
!433 = !{i64 75544}
!434 = !{i64 75560}
!435 = !{i64 75600}
!436 = !{i64 75664}
!437 = !{i64 75668}
!438 = !{i64 75672}
!439 = !{i64 75684}
