source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

@global_var_2400c = local_unnamed_addr global i32 66968
@global_var_24010 = local_unnamed_addr global i32 66968
@global_var_24014 = local_unnamed_addr global i32 66968
@global_var_24018 = local_unnamed_addr global i32 66968
@global_var_2401c = local_unnamed_addr global i32 66968
@global_var_24020 = local_unnamed_addr global i32 66968
@global_var_24024 = local_unnamed_addr global i32 66968
@global_var_24028 = local_unnamed_addr global i32 66968
@global_var_2402c = local_unnamed_addr global i32 66968
@global_var_24030 = local_unnamed_addr global i32 66968
@global_var_24034 = local_unnamed_addr global i32 66968
@global_var_24038 = local_unnamed_addr global i32 66968
@global_var_2403c = local_unnamed_addr global i32 66968
@global_var_24040 = local_unnamed_addr global i32 66968
@global_var_24044 = local_unnamed_addr global i32 66968
@global_var_24048 = local_unnamed_addr global i32 66968
@global_var_2404c = local_unnamed_addr global i32 66968
@global_var_24050 = local_unnamed_addr global i32 66968
@global_var_106dc = local_unnamed_addr constant i32 80164
@global_var_23f0c = global i32 1
@global_var_24000 = local_unnamed_addr global i32* @global_var_23f0c
@global_var_106e0 = local_unnamed_addr constant i32 88
@global_var_24058 = local_unnamed_addr global i32 67204
@global_var_10700 = local_unnamed_addr constant i32 80140
@global_var_10704 = local_unnamed_addr constant i32 84
@global_var_24054 = local_unnamed_addr global i32 0
@global_var_10728 = local_unnamed_addr constant i32 147568
@global_var_1072c = local_unnamed_addr constant i32 147568
@global_var_10730 = local_unnamed_addr constant i32 0
@global_var_10760 = local_unnamed_addr constant i32 147568
@global_var_10764 = local_unnamed_addr constant i32 147568
@global_var_10768 = local_unnamed_addr constant i32 0
@global_var_10790 = local_unnamed_addr constant i32 147568
@global_var_10808 = local_unnamed_addr constant i32 147208
@global_var_23f08 = local_unnamed_addr global i32 0
@global_var_1089c = local_unnamed_addr constant i32 147208
@global_var_1092c = local_unnamed_addr constant i32 147208
@global_var_109bc = local_unnamed_addr constant i32 147208
@global_var_10a74 = local_unnamed_addr constant i32 76008
@global_var_10a78 = local_unnamed_addr constant i32 76040
@global_var_12908 = constant [28 x i8] c"MEM-L1-01 (local_vars): %d\0A\00"
@global_var_10a7c = local_unnamed_addr constant i32 76068
@global_var_12924 = constant [29 x i8] c"MEM-L1-02 (local_array): %d\0A\00"
@global_var_10a80 = local_unnamed_addr constant i32 76100
@global_var_12944 = constant [30 x i8] c"MEM-L1-03 (local_struct): %d\0A\00"
@global_var_10a84 = local_unnamed_addr constant i32 76132
@global_var_12964 = constant [34 x i8] c"MEM-L1-04 (address_of_local): %d\0A\00"
@global_var_10a88 = local_unnamed_addr constant i32 76168
@global_var_12988 = constant [34 x i8] c"MEM-L1-05 (address_of_array): %d\0A\00"
@global_var_10a8c = local_unnamed_addr constant i32 76204
@global_var_129ac = constant [35 x i8] c"MEM-L2-01 (large_stack_frame): %d\0A\00"
@global_var_10a90 = local_unnamed_addr constant i32 76240
@global_var_129d0 = constant [27 x i8] c"MEM-L2-02 (vla_stack): %d\0A\00"
@global_var_10a94 = local_unnamed_addr constant i32 76268
@global_var_129ec = constant [30 x i8] c"MEM-L2-03 (alloca_usage): %d\0A\00"
@global_var_10a98 = local_unnamed_addr constant i32 76300
@global_var_12a0c = constant [29 x i8] c"MEM-L2-04 (stack_alias): %d\0A\00"
@global_var_10ea0 = local_unnamed_addr constant i32 76332
@global_var_12a2c = constant [23 x i8] c"value before free: %d\0A\00"
@global_var_10f2c = local_unnamed_addr constant i32 1100
@global_var_11258 = local_unnamed_addr constant i32 147208
@global_var_1125c = local_unnamed_addr constant i32 76356
@global_var_11260 = local_unnamed_addr constant i32 76388
@global_var_12a64 = constant [29 x i8] c"HEAP-L2-01 (heap_basic): %d\0A\00"
@global_var_11264 = local_unnamed_addr constant i32 76420
@global_var_12a84 = constant [30 x i8] c"HEAP-L2-02 (heap_calloc): %d\0A\00"
@global_var_11268 = local_unnamed_addr constant i32 76452
@global_var_12aa4 = constant [31 x i8] c"HEAP-L2-03 (heap_realloc): %d\0A\00"
@global_var_1126c = local_unnamed_addr constant i32 76484
@global_var_12ac4 = constant [29 x i8] c"HEAP-L2-04 (heap_array): %d\0A\00"
@global_var_11270 = local_unnamed_addr constant i32 76516
@global_var_12ae4 = constant [30 x i8] c"HEAP-L2-05 (heap_struct): %d\0A\00"
@global_var_11274 = local_unnamed_addr constant i32 76824
@global_var_12c18 = constant [30 x i8] c"HEAP-L2-06 (heap_nested): %d\0A\00"
@global_var_11278 = local_unnamed_addr constant i32 76548
@global_var_12b04 = constant [35 x i8] c"HEAP-L3-01 (linked_list_heap): %d\0A\00"
@global_var_1127c = local_unnamed_addr constant i32 76584
@global_var_12b28 = constant [38 x i8] c"HEAP-L3-02 (tree_heap_traversal): %d\0A\00"
@global_var_11280 = local_unnamed_addr constant i32 76624
@global_var_12b50 = constant [30 x i8] c"HEAP-L3-03 (memory_leak): %d\0A\00"
@global_var_11284 = local_unnamed_addr constant i32 76656
@global_var_12b70 = constant [32 x i8] c"HEAP-L3-04 (dangling_pointer): \00"
@global_var_11288 = local_unnamed_addr constant i32 76812
@global_var_1128c = local_unnamed_addr constant i32 76332
@global_var_11290 = local_unnamed_addr constant i32 76688
@global_var_11294 = local_unnamed_addr constant i32 76744
@global_var_11298 = local_unnamed_addr constant i32 76704
@global_var_112b0 = local_unnamed_addr constant i32 147572
@global_var_24074 = local_unnamed_addr global i32 0
@global_var_112c4 = local_unnamed_addr constant i32 147572
@global_var_112dc = local_unnamed_addr constant i32 77708
@global_var_12f8c = local_unnamed_addr constant i32 0
@global_var_11300 = local_unnamed_addr constant i32 147572
@global_var_24078 = local_unnamed_addr global i32 0
@global_var_11320 = local_unnamed_addr constant i32 147564
@global_var_2406c = local_unnamed_addr global i32 23
@global_var_11340 = local_unnamed_addr constant i32 147556
@global_var_12f80 = constant [11 x i8] c"HelloWorld\00"
@global_var_24064 = local_unnamed_addr global [11 x i8]* @global_var_12f80
@global_var_11368 = local_unnamed_addr constant i32 147556
@global_var_11378 = local_unnamed_addr constant i32 147556
@global_var_11388 = local_unnamed_addr constant i32 147572
@global_var_2407c = local_unnamed_addr global i32 0
@global_var_113a8 = local_unnamed_addr constant i32 147572
@global_var_11550 = local_unnamed_addr constant i32 147572
@global_var_11554 = local_unnamed_addr constant i32 76856
@global_var_11558 = local_unnamed_addr constant i32 76892
@global_var_12c5c = constant [35 x i8] c"STM-L1-01 (global_var_access): %d\0A\00"
@global_var_1155c = local_unnamed_addr constant i32 77004
@global_var_12ccc = constant [30 x i8] c"STM-L1-03 (static_local): %d\0A\00"
@global_var_11560 = local_unnamed_addr constant i32 76928
@global_var_12c80 = constant [33 x i8] c"STM-L1-01 (global_var_read): %d\0A\00"
@global_var_11564 = local_unnamed_addr constant i32 76964
@global_var_12ca4 = constant [37 x i8] c"STM-L1-02 (global_array_access): %d\0A\00"
@global_var_11568 = local_unnamed_addr constant i32 77036
@global_var_12cec = constant [34 x i8] c"STM-L1-04 (call_static_func): %d\0A\00"
@global_var_1156c = local_unnamed_addr constant i32 147564
@global_var_11570 = local_unnamed_addr constant i32 77072
@global_var_12d10 = constant [38 x i8] c"STM-L2-01 (access_extern_global): %d\0A\00"
@global_var_11574 = local_unnamed_addr constant i32 147556
@global_var_11578 = local_unnamed_addr constant i32 77112
@global_var_12d38 = constant [34 x i8] c"STM-L2-02 (call_extern_func): %d\0A\00"
@global_var_1157c = local_unnamed_addr constant i32 77148
@global_var_12d5c = constant [33 x i8] c"STM-L2-03 (read_const_data): %d\0A\00"
@global_var_11580 = local_unnamed_addr constant i32 77184
@global_var_12d80 = constant [32 x i8] c"STM-L2-04 (access_bss_var): %d\0A\00"
@global_var_11584 = local_unnamed_addr constant i32 77216
@global_var_12da0 = constant [35 x i8] c"STM-L2-04 (access_bss_buffer): %d\0A\00"
@global_var_11588 = local_unnamed_addr constant i32 77252
@global_var_12dc4 = constant [38 x i8] c"STM-L2-05 (global_struct_access): %d\0A\00"
@global_var_1158c = local_unnamed_addr constant i32 77292
@global_var_12dec = constant [29 x i8] c"STM-L2-06 (file_static): %d\0A\00"
@global_var_11590 = local_unnamed_addr constant i32 67480
@global_var_11594 = local_unnamed_addr constant i32 77324
@global_var_12e0c = constant [33 x i8] c"STM-L2-07 (global_func_ptr): %d\0A\00"
@global_var_11598 = local_unnamed_addr constant i32 77360
@global_var_12e30 = constant [35 x i8] c"STM-L2-08 (global_heap_store): %d\0A\00"
@global_var_1159c = local_unnamed_addr constant i32 77396
@global_var_12e54 = constant [37 x i8] c"STM-L2-09 (static_complex_init): %d\0A\00"
@global_var_115a0 = local_unnamed_addr constant i32 77436
@global_var_12e7c = constant [28 x i8] c"STM-L3-01 (tls_access): %d\0A\00"
@global_var_115a4 = local_unnamed_addr constant i32 77464
@global_var_12e98 = constant [33 x i8] c"STM-L3-02 (init_order_test): %d\0A\00"
@global_var_11774 = local_unnamed_addr constant i32 147208
@global_var_11900 = local_unnamed_addr constant i32 147208
@global_var_11904 = local_unnamed_addr constant i32 77500
@global_var_11908 = local_unnamed_addr constant i32 1094795585
@global_var_1190c = local_unnamed_addr constant i32 77536
@global_var_12ee0 = constant [17 x i8] c"MEMOP-L2-01: %d\0A\00"
@global_var_11910 = local_unnamed_addr constant i32 77556
@global_var_12ef4 = constant [17 x i8] c"MEMOP-L2-02: %d\0A\00"
@global_var_11914 = local_unnamed_addr constant i32 77696
@global_var_12f84 = local_unnamed_addr constant [7 x i8] c"oWorld\00"
@global_var_12f88 = local_unnamed_addr constant [3 x i8] c"ld\00"
@global_var_11918 = local_unnamed_addr constant i32 77576
@global_var_12f08 = constant [17 x i8] c"MEMOP-L2-03: %c\0A\00"
@global_var_1191c = local_unnamed_addr constant i32 77748
@global_var_12fb4 = local_unnamed_addr constant i32 1
@global_var_12fb8 = local_unnamed_addr constant i32 2
@global_var_12fbc = local_unnamed_addr constant i32 3
@global_var_12fc0 = local_unnamed_addr constant i32 1
@global_var_12fc4 = local_unnamed_addr constant i32 2
@global_var_12fc8 = local_unnamed_addr constant i32 4
@global_var_11920 = local_unnamed_addr constant i32 77596
@global_var_12f1c = constant [17 x i8] c"MEMOP-L2-04: %d\0A\00"
@global_var_11924 = local_unnamed_addr constant i32 77616
@global_var_12f30 = constant [17 x i8] c"MEMOP-L2-05: %d\0A\00"
@global_var_11928 = local_unnamed_addr constant i32 77636
@global_var_12f44 = constant [17 x i8] c"MEMOP-L2-06: %d\0A\00"
@global_var_1192c = local_unnamed_addr constant i32 67305985
@global_var_11930 = local_unnamed_addr constant i32 77656
@global_var_12f58 = constant [19 x i8] c"MEMOP-L3-01: 0x%x\0A\00"
@global_var_11934 = local_unnamed_addr constant i32 77676
@global_var_12f6c = constant [17 x i8] c"MEMOP-L3-02: %d\0A\00"
@global_var_11974 = local_unnamed_addr constant i32 -61504
@global_var_119ac = local_unnamed_addr constant i32 -61504
@global_var_119e4 = local_unnamed_addr constant i32 -61504
@global_var_11a1c = local_unnamed_addr constant i32 -61504
@global_var_11a54 = local_unnamed_addr constant i32 -61504
@global_var_11a90 = local_unnamed_addr constant i32 -61504
@global_var_11aec = local_unnamed_addr constant i32 65535
@global_var_11af0 = local_unnamed_addr constant i32 -61504
@global_var_11b4c = local_unnamed_addr constant i32 65535
@global_var_11b50 = local_unnamed_addr constant i32 -61504
@global_var_11bac = local_unnamed_addr constant i32 65535
@global_var_11bb0 = local_unnamed_addr constant i32 -61504
@global_var_11c0c = local_unnamed_addr constant i32 65535
@global_var_11c10 = local_unnamed_addr constant i32 -61504
@global_var_11c6c = local_unnamed_addr constant i32 65535
@global_var_11c70 = local_unnamed_addr constant i32 -61504
@global_var_11cd0 = local_unnamed_addr constant i32 65535
@global_var_11cd4 = local_unnamed_addr constant i32 -61504
@global_var_11d30 = local_unnamed_addr constant i32 -61504
@global_var_11d8c = local_unnamed_addr constant i32 -61504
@global_var_11de8 = local_unnamed_addr constant i32 -61504
@global_var_11e44 = local_unnamed_addr constant i32 -61504
@global_var_11ea0 = local_unnamed_addr constant i32 -61504
@global_var_11f00 = local_unnamed_addr constant i32 -61504
@global_var_11f38 = local_unnamed_addr constant i32 -61504
@global_var_11f70 = local_unnamed_addr constant i32 -61504
@global_var_11fa8 = local_unnamed_addr constant i32 -61504
@global_var_11fe0 = local_unnamed_addr constant i32 -61504
@global_var_12018 = local_unnamed_addr constant i32 -61504
@global_var_12054 = local_unnamed_addr constant i32 -61504
@global_var_120b8 = local_unnamed_addr constant i32 65535
@global_var_120bc = local_unnamed_addr constant i32 -61504
@global_var_12120 = local_unnamed_addr constant i32 65535
@global_var_12124 = local_unnamed_addr constant i32 -61504
@global_var_12188 = local_unnamed_addr constant i32 65535
@global_var_1218c = local_unnamed_addr constant i32 -61504
@global_var_121f0 = local_unnamed_addr constant i32 65535
@global_var_121f4 = local_unnamed_addr constant i32 -61504
@global_var_12258 = local_unnamed_addr constant i32 65535
@global_var_1225c = local_unnamed_addr constant i32 -61504
@global_var_122c4 = local_unnamed_addr constant i32 65535
@global_var_122c8 = local_unnamed_addr constant i32 -61504
@global_var_1232c = local_unnamed_addr constant i32 -61504
@global_var_12390 = local_unnamed_addr constant i32 -61504
@global_var_123f4 = local_unnamed_addr constant i32 -61504
@global_var_12458 = local_unnamed_addr constant i32 -61504
@global_var_124bc = local_unnamed_addr constant i32 -61504
@global_var_12524 = local_unnamed_addr constant i32 -61504
@global_var_12574 = local_unnamed_addr constant i32 -61504
@global_var_125e8 = local_unnamed_addr constant i32 65535
@global_var_125ec = local_unnamed_addr constant i32 -61504
@global_var_12660 = local_unnamed_addr constant i32 -61504
@global_var_1268c = local_unnamed_addr constant i32 -61504
@global_var_126d0 = local_unnamed_addr constant i32 -61536
@global_var_12708 = local_unnamed_addr constant i32 -61504
@global_var_12764 = local_unnamed_addr constant i32 65535
@global_var_12768 = local_unnamed_addr constant i32 -61504
@global_var_127c4 = local_unnamed_addr constant i32 -61504
@global_var_127e8 = local_unnamed_addr constant i32 -61536
@global_var_12808 = local_unnamed_addr constant i32 -61536
@global_var_12828 = local_unnamed_addr constant i32 -61536
@global_var_12848 = local_unnamed_addr constant i32 -61536
@0 = external global i32
@1 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\88\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_128e8 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @1, i32 0, i32 0)
@2 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\A0\86\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_12a44 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @2, i32 0, i32 0)
@3 = internal constant [11 x i8] c"fork\E5\A4\B1\E8\B4\A5\00"
@global_var_12c0c = constant i8* getelementptr inbounds ([11 x i8], [11 x i8]* @3, i32 0, i32 0)
@4 = internal constant [16 x i8] c"%d (\E5\AD\90\E8\BF\9B\E7\A8\8B)\0A\00"
@global_var_12b90 = constant i8* getelementptr inbounds ([16 x i8], [16 x i8]* @4, i32 0, i32 0)
@5 = internal constant [65 x i8] c"\E2\9C\97 \E5\AD\90\E8\BF\9B\E7\A8\8B\E8\A2\AB\E4\BF\A1\E5\8F\B7\E7\BB\88\E6\AD\A2 (\E4\BF\A1\E5\8F\B7%d) - \E9\87\8E\E6\8C\87\E9\92\88\E5\AF\BC\E8\87\B4\E5\B4\A9\E6\BA\83\0A\00"
@global_var_12bc8 = constant i8* getelementptr inbounds ([65 x i8], [65 x i8]* @5, i32 0, i32 0)
@6 = internal constant [37 x i8] c"\E2\9C\93 \E5\AD\90\E8\BF\9B\E7\A8\8B\E6\AD\A3\E5\B8\B8\E9\80\80\E5\87\BA\EF\BC\8Ccode=%d\0A\00"
@global_var_12ba0 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @6, i32 0, i32 0)
@global_var_24068 = local_unnamed_addr global i8 100
@7 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\9D\99\E6\80\81\E4\B8\8E\E5\85\A8\E5\B1\80\E5\86\85\E5\AD\98 ===\00"
@global_var_12c38 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @7, i32 0, i32 0)
@8 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C\E5\87\BD\E6\95\B0 ===\00"
@global_var_12ebc = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @8, i32 0, i32 0)

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_10684:
  %0 = call i32 @test_stack_memory(), !insn.addr !0
  %1 = call i32 @test_heap_memory(), !insn.addr !1
  %2 = call i32 @test_static_global(), !insn.addr !2
  %3 = call i32 @test_memory_op_functions(), !insn.addr !3
  ret i32 0, !insn.addr !4
}

define i32 @large_stack_frame() local_unnamed_addr {
dec_label_pc_10830:
  %0 = alloca i8
  %r3.0.reg2mem = alloca i32, !insn.addr !5
  %r2.0.reg2mem = alloca i32, !insn.addr !5
  %1 = load i8, i8* %0
  %stack_var_-2061 = alloca i32, align 4
  %stack_var_-13 = alloca i32, align 4
  %2 = load i32, i32* @global_var_23f08, align 4, !insn.addr !6
  %3 = ptrtoint i32* %stack_var_-13 to i32, !insn.addr !7
  %4 = ptrtoint i32* %stack_var_-2061 to i32, !insn.addr !8
  store i32 0, i32* %r2.0.reg2mem, !insn.addr !8
  store i32 %4, i32* %r3.0.reg2mem, !insn.addr !8
  br label %dec_label_pc_10860, !insn.addr !8

dec_label_pc_10860:                               ; preds = %dec_label_pc_10860, %dec_label_pc_10830
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  %r2.0.reload = load i32, i32* %r2.0.reg2mem
  %5 = trunc i32 %r2.0.reload to i8, !insn.addr !9
  %6 = add i32 %r3.0.reload, 1, !insn.addr !9
  %7 = inttoptr i32 %6 to i8*, !insn.addr !9
  store i8 %5, i8* %7, align 1, !insn.addr !9
  %8 = icmp eq i32 %6, %3, !insn.addr !10
  %9 = add i32 %r2.0.reload, 1, !insn.addr !11
  store i32 %9, i32* %r2.0.reg2mem, !insn.addr !12
  store i32 %6, i32* %r3.0.reg2mem, !insn.addr !12
  br i1 %8, label %dec_label_pc_10870, label %dec_label_pc_10860, !insn.addr !12

dec_label_pc_10870:                               ; preds = %dec_label_pc_10860
  %10 = load i32, i32* @global_var_23f08, align 4, !insn.addr !13
  %11 = icmp eq i32 %2, %10, !insn.addr !14
  br i1 %11, label %dec_label_pc_1088c, label %dec_label_pc_10898, !insn.addr !15

dec_label_pc_1088c:                               ; preds = %dec_label_pc_10870
  %12 = zext i8 %1 to i32, !insn.addr !16
  ret i32 %12, !insn.addr !17

dec_label_pc_10898:                               ; preds = %dec_label_pc_10870
  call void @__stack_chk_fail(), !insn.addr !18
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !18

; uselistorder directives
  uselistorder i32 %r2.0.reload, { 1, 0 }
  uselistorder i32* %r2.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r3.0.reg2mem, { 1, 0, 2 }
}

define i32 @alloca_usage(i32 %arg1) local_unnamed_addr {
dec_label_pc_10930:
  %storemerge1.reg2mem = alloca i32, !insn.addr !19
  %r3.0.reg2mem = alloca i32, !insn.addr !19
  %r2.0.reg2mem = alloca i32, !insn.addr !19
  %stack_var_-16 = alloca i32, align 4
  %0 = icmp slt i32 %arg1, 1, !insn.addr !20
  store i32 -1, i32* %storemerge1.reg2mem, !insn.addr !20
  br i1 %0, label %dec_label_pc_109a8, label %dec_label_pc_10954, !insn.addr !20

dec_label_pc_10954:                               ; preds = %dec_label_pc_10930
  %1 = load i32, i32* @global_var_23f08, align 4, !insn.addr !21
  %2 = ptrtoint i32* %stack_var_-16 to i32, !insn.addr !22
  %3 = mul i32 %arg1, 4, !insn.addr !23
  %4 = add i32 %3, 7, !insn.addr !24
  %5 = and i32 %4, -8, !insn.addr !25
  %6 = sub i32 %2, %5, !insn.addr !26
  %7 = add i32 %6, -4
  %8 = add i32 %7, %3, !insn.addr !27
  store i32 0, i32* %r2.0.reg2mem, !insn.addr !27
  store i32 %7, i32* %r3.0.reg2mem, !insn.addr !27
  br label %dec_label_pc_10978, !insn.addr !27

dec_label_pc_10978:                               ; preds = %dec_label_pc_10978, %dec_label_pc_10954
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  %r2.0.reload = load i32, i32* %r2.0.reg2mem
  %9 = add i32 %r3.0.reload, 4, !insn.addr !28
  %10 = inttoptr i32 %9 to i32*, !insn.addr !28
  store i32 %r2.0.reload, i32* %10, align 4, !insn.addr !28
  %11 = icmp eq i32 %9, %8, !insn.addr !29
  %12 = add nuw i32 %r2.0.reload, 3, !insn.addr !30
  store i32 %12, i32* %r2.0.reg2mem, !insn.addr !31
  store i32 %9, i32* %r3.0.reg2mem, !insn.addr !31
  br i1 %11, label %dec_label_pc_10990, label %dec_label_pc_10978, !insn.addr !31

dec_label_pc_10990:                               ; preds = %dec_label_pc_10978
  %13 = udiv i32 %arg1, 2
  %14 = mul i32 %13, 4, !insn.addr !32
  %15 = add i32 %6, %14, !insn.addr !32
  %16 = inttoptr i32 %15 to i32*, !insn.addr !32
  %17 = load i32, i32* %16, align 4, !insn.addr !32
  %.pre = load i32, i32* @global_var_23f08, align 4
  %18 = icmp eq i32 %1, %.pre, !insn.addr !33
  store i32 %17, i32* %storemerge1.reg2mem, !insn.addr !34
  br i1 %18, label %dec_label_pc_109a8, label %dec_label_pc_109b8, !insn.addr !34

dec_label_pc_109a8:                               ; preds = %dec_label_pc_10930, %dec_label_pc_10990
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  ret i32 %storemerge1.reload, !insn.addr !35

dec_label_pc_109b8:                               ; preds = %dec_label_pc_10990
  call void @__stack_chk_fail(), !insn.addr !36
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !36

; uselistorder directives
  uselistorder i32 %r2.0.reload, { 1, 0 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32* %r2.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r3.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge1.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg1, { 1, 0, 2 }
  uselistorder label %dec_label_pc_109a8, { 1, 0 }
}

define i32 @test_stack_memory() local_unnamed_addr {
dec_label_pc_109c8:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_128e8 to i8*)), !insn.addr !37
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_12908, i32 0, i32 0), i32 20), !insn.addr !38
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_12924, i32 0, i32 0), i32 10), !insn.addr !39
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_12944, i32 0, i32 0), i32 15), !insn.addr !40
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_12964, i32 0, i32 0), i32 42), !insn.addr !41
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_12988, i32 0, i32 0), i32 2), !insn.addr !42
  %6 = call i32 @large_stack_frame(), !insn.addr !43
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_129ac, i32 0, i32 0), i32 %6), !insn.addr !44
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_129d0, i32 0, i32 0), i32 10), !insn.addr !45
  %9 = call i32 @alloca_usage(i32 10), !insn.addr !46
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_129ec, i32 0, i32 0), i32 %9), !insn.addr !47
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_12a0c, i32 0, i32 0), i32 20), !insn.addr !48
  ret i32 %11, !insn.addr !48
}

define i32 @heap_realloc() local_unnamed_addr {
dec_label_pc_10b4c:
  %r4.2.reg2mem = alloca i32, !insn.addr !49
  %0 = call i32* @malloc(i32 20), !insn.addr !50
  %1 = icmp eq i32* %0, null, !insn.addr !51
  store i32 -1, i32* %r4.2.reg2mem, !insn.addr !52
  br i1 %1, label %dec_label_pc_10ba8, label %dec_label_pc_10b60, !insn.addr !52

dec_label_pc_10b60:                               ; preds = %dec_label_pc_10b4c
  %2 = ptrtoint i32* %0 to i32, !insn.addr !50
  store i32 1, i32* %0, align 4, !insn.addr !53
  %3 = add i32 %2, 4, !insn.addr !53
  %4 = inttoptr i32 %3 to i32*, !insn.addr !53
  store i32 2, i32* %4, align 4, !insn.addr !53
  %5 = add i32 %2, 16, !insn.addr !54
  %6 = inttoptr i32 %5 to i32*, !insn.addr !54
  store i32 5, i32* %6, align 4, !insn.addr !54
  %7 = add i32 %2, 12, !insn.addr !55
  %8 = inttoptr i32 %7 to i32*, !insn.addr !55
  store i32 4, i32* %8, align 4, !insn.addr !55
  %9 = add i32 %2, 8, !insn.addr !56
  %10 = inttoptr i32 %9 to i32*, !insn.addr !56
  store i32 3, i32* %10, align 4, !insn.addr !56
  %11 = call i32* @realloc(i32* nonnull %0, i32 40), !insn.addr !57
  %12 = icmp eq i32* %11, null, !insn.addr !58
  br i1 %12, label %dec_label_pc_10bb8, label %dec_label_pc_10b94, !insn.addr !59

dec_label_pc_10b94:                               ; preds = %dec_label_pc_10b60
  %13 = ptrtoint i32* %11 to i32, !insn.addr !57
  %14 = add i32 %13, 8, !insn.addr !60
  %15 = inttoptr i32 %14 to i32*, !insn.addr !60
  %16 = load i32, i32* %15, align 4, !insn.addr !60
  %17 = icmp eq i32 %16, 3, !insn.addr !61
  %r4.1 = select i1 %17, i32 50, i32 -3
  call void @free(i32* nonnull %11), !insn.addr !62
  store i32 %r4.1, i32* %r4.2.reg2mem, !insn.addr !62
  br label %dec_label_pc_10ba8, !insn.addr !62

dec_label_pc_10ba8:                               ; preds = %dec_label_pc_10b4c, %dec_label_pc_10bb8, %dec_label_pc_10b94
  %r4.2.reload = load i32, i32* %r4.2.reg2mem
  ret i32 %r4.2.reload, !insn.addr !63

dec_label_pc_10bb8:                               ; preds = %dec_label_pc_10b60
  call void @free(i32* nonnull %0), !insn.addr !64
  store i32 -2, i32* %r4.2.reg2mem, !insn.addr !65
  br label %dec_label_pc_10ba8, !insn.addr !65

; uselistorder directives
  uselistorder i32* %11, { 0, 2, 1 }
  uselistorder i32* %0, { 0, 1, 2, 4, 3 }
  uselistorder i32* %r4.2.reg2mem, { 3, 0, 2, 1 }
  uselistorder label %dec_label_pc_10ba8, { 1, 2, 0 }
}

define i32 @linked_list_heap() local_unnamed_addr {
dec_label_pc_10cc8:
  %r4.3.reg2mem = alloca i32, !insn.addr !66
  %r5.2.reg2mem = alloca i32, !insn.addr !66
  %r4.2.reg2mem = alloca i32, !insn.addr !66
  %r5.1.reg2mem = alloca i32, !insn.addr !66
  %r3.1.reg2mem = alloca i32, !insn.addr !66
  %r5.0.reg2mem = alloca i32, !insn.addr !66
  %r4.0.reg2mem = alloca i32, !insn.addr !66
  %r3.0.reg2mem = alloca i32, !insn.addr !66
  store i32 0, i32* %r3.0.reg2mem, !insn.addr !67
  store i32 0, i32* %r4.0.reg2mem, !insn.addr !67
  store i32 0, i32* %r5.0.reg2mem, !insn.addr !67
  br label %dec_label_pc_10cdc, !insn.addr !67

dec_label_pc_10cdc:                               ; preds = %9, %dec_label_pc_10cc8
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %0 = call i32* @malloc(i32 8), !insn.addr !68
  %1 = icmp eq i32* %0, null, !insn.addr !69
  %2 = icmp eq i32 %r4.0.reload, 0
  br i1 %1, label %dec_label_pc_10d40, label %dec_label_pc_10cf0, !insn.addr !70

dec_label_pc_10cf0:                               ; preds = %dec_label_pc_10cdc
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  %3 = ptrtoint i32* %0 to i32, !insn.addr !68
  store i32 %r5.0.reload, i32* %0, align 4, !insn.addr !71
  %4 = add i32 %3, 4, !insn.addr !71
  %5 = inttoptr i32 %4 to i32*, !insn.addr !71
  store i32 0, i32* %5, align 4, !insn.addr !71
  br i1 %2, label %9, label %6, !insn.addr !72

; <label>:6:                                      ; preds = %dec_label_pc_10cf0
  %7 = add i32 %r3.0.reload, 4, !insn.addr !72
  %8 = inttoptr i32 %7 to i32*, !insn.addr !72
  store i32 %3, i32* %8, align 4, !insn.addr !72
  br label %9, !insn.addr !72

; <label>:9:                                      ; preds = %dec_label_pc_10cf0, %6
  %10 = add nuw nsw i32 %r5.0.reload, 10, !insn.addr !73
  %spec.select = select i1 %2, i32 %3, i32 %r4.0.reload
  %11 = icmp eq i32 %10, 50, !insn.addr !74
  store i32 %3, i32* %r3.0.reg2mem, !insn.addr !75
  store i32 %spec.select, i32* %r4.0.reg2mem, !insn.addr !75
  store i32 %10, i32* %r5.0.reg2mem, !insn.addr !75
  store i32 %spec.select, i32* %r3.1.reg2mem, !insn.addr !75
  store i32 0, i32* %r5.1.reg2mem, !insn.addr !75
  br i1 %11, label %dec_label_pc_10d14, label %dec_label_pc_10cdc, !insn.addr !75

dec_label_pc_10d14:                               ; preds = %9, %dec_label_pc_10d14
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %r3.1.reload = load i32, i32* %r3.1.reg2mem
  %12 = inttoptr i32 %r3.1.reload to i32*, !insn.addr !76
  %13 = load i32, i32* %12, align 4, !insn.addr !76
  %14 = add i32 %r3.1.reload, 4, !insn.addr !76
  %15 = inttoptr i32 %14 to i32*, !insn.addr !76
  %16 = load i32, i32* %15, align 4, !insn.addr !76
  %17 = icmp eq i32 %16, 0, !insn.addr !77
  %18 = add i32 %13, %r5.1.reload, !insn.addr !78
  store i32 %16, i32* %r3.1.reg2mem, !insn.addr !79
  store i32 %18, i32* %r5.1.reg2mem, !insn.addr !79
  store i32 %spec.select, i32* %r4.2.reg2mem, !insn.addr !79
  br i1 %17, label %dec_label_pc_10d24, label %dec_label_pc_10d14, !insn.addr !79

dec_label_pc_10d24:                               ; preds = %dec_label_pc_10d14, %dec_label_pc_10d24
  %r4.2.reload = load i32, i32* %r4.2.reg2mem
  %19 = add i32 %r4.2.reload, 4, !insn.addr !80
  %20 = inttoptr i32 %19 to i32*, !insn.addr !80
  %21 = load i32, i32* %20, align 4, !insn.addr !80
  %22 = inttoptr i32 %r4.2.reload to i32*, !insn.addr !81
  call void @free(i32* %22), !insn.addr !81
  %23 = icmp eq i32 %21, 0, !insn.addr !82
  store i32 %21, i32* %r4.2.reg2mem, !insn.addr !83
  store i32 %18, i32* %r5.2.reg2mem, !insn.addr !83
  br i1 %23, label %dec_label_pc_10d38, label %dec_label_pc_10d24, !insn.addr !83

dec_label_pc_10d38:                               ; preds = %dec_label_pc_10d24, %dec_label_pc_10d48, %dec_label_pc_10d40
  %r5.2.reload = load i32, i32* %r5.2.reg2mem
  ret i32 %r5.2.reload, !insn.addr !84

dec_label_pc_10d40:                               ; preds = %dec_label_pc_10cdc
  store i32 -1, i32* %r5.2.reg2mem, !insn.addr !85
  store i32 %r4.0.reload, i32* %r4.3.reg2mem, !insn.addr !85
  br i1 %2, label %dec_label_pc_10d38, label %dec_label_pc_10d48, !insn.addr !85

dec_label_pc_10d48:                               ; preds = %dec_label_pc_10d40, %dec_label_pc_10d48
  %r4.3.reload = load i32, i32* %r4.3.reg2mem
  %24 = add i32 %r4.3.reload, 4, !insn.addr !86
  %25 = inttoptr i32 %24 to i32*, !insn.addr !86
  %26 = load i32, i32* %25, align 4, !insn.addr !86
  %27 = inttoptr i32 %r4.3.reload to i32*, !insn.addr !87
  call void @free(i32* %27), !insn.addr !87
  %28 = icmp eq i32 %26, 0, !insn.addr !88
  store i32 -1, i32* %r5.2.reg2mem, !insn.addr !89
  store i32 %26, i32* %r4.3.reg2mem, !insn.addr !89
  br i1 %28, label %dec_label_pc_10d38, label %dec_label_pc_10d48, !insn.addr !89

; uselistorder directives
  uselistorder i32 %r4.3.reload, { 1, 0 }
  uselistorder i32 %r4.2.reload, { 1, 0 }
  uselistorder i32 %r5.0.reload, { 1, 0 }
  uselistorder i32* %0, { 0, 2, 1 }
  uselistorder i32 %r4.0.reload, { 0, 2, 1 }
  uselistorder i32* %r3.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r5.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r3.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.2.reg2mem, { 2, 3, 0, 1 }
  uselistorder i32* %r4.3.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_10d48, { 1, 0 }
  uselistorder label %dec_label_pc_10d38, { 1, 2, 0 }
  uselistorder label %dec_label_pc_10d24, { 1, 0 }
  uselistorder label %dec_label_pc_10d14, { 1, 0 }
  uselistorder label %9, { 1, 0 }
}

define i32 @tree_heap_traversal() local_unnamed_addr {
dec_label_pc_10d8c:
  %0 = call i32* @malloc(i32 12), !insn.addr !90
  %1 = icmp eq i32* %0, null, !insn.addr !91
  br i1 %1, label %dec_label_pc_10e0c, label %dec_label_pc_10da0, !insn.addr !92

dec_label_pc_10da0:                               ; preds = %dec_label_pc_10d8c
  %2 = call i32* @malloc(i32 12), !insn.addr !93
  %3 = icmp eq i32* %2, null, !insn.addr !94
  %4 = call i32* @malloc(i32 12)
  %5 = icmp eq i32* %4, null
  br i1 %3, label %dec_label_pc_10df8, label %dec_label_pc_10db4, !insn.addr !95

dec_label_pc_10db4:                               ; preds = %dec_label_pc_10da0
  call void @free(i32* nonnull %2)
  br i1 %5, label %dec_label_pc_10de8, label %dec_label_pc_10dc0, !insn.addr !96

dec_label_pc_10dc0:                               ; preds = %dec_label_pc_10db4
  call void @free(i32* nonnull %4), !insn.addr !97
  call void @free(i32* nonnull %0), !insn.addr !98
  ret i32 60, !insn.addr !99

dec_label_pc_10de8:                               ; preds = %dec_label_pc_10db4, %dec_label_pc_10e04, %dec_label_pc_10df8
  call void @free(i32* nonnull %0), !insn.addr !100
  ret i32 -2, !insn.addr !101

dec_label_pc_10df8:                               ; preds = %dec_label_pc_10da0
  br i1 %5, label %dec_label_pc_10de8, label %dec_label_pc_10e04, !insn.addr !102

dec_label_pc_10e04:                               ; preds = %dec_label_pc_10df8
  call void @free(i32* nonnull %4), !insn.addr !103
  br label %dec_label_pc_10de8, !insn.addr !104

dec_label_pc_10e0c:                               ; preds = %dec_label_pc_10d8c
  ret i32 -1, !insn.addr !105

; uselistorder directives
  uselistorder i1 %5, { 1, 0 }
  uselistorder i32* %4, { 1, 0, 2 }
  uselistorder label %dec_label_pc_10de8, { 1, 2, 0 }
}

define i32 @test_heap_memory() local_unnamed_addr {
dec_label_pc_10f30:
  %r0.0.reg2mem = alloca i32, !insn.addr !106
  %r2.3.reg2mem = alloca i32, !insn.addr !106
  %r2.2.reg2mem = alloca i32, !insn.addr !106
  %storemerge.reg2mem = alloca i32, !insn.addr !106
  %r4.3.reg2mem = alloca i32, !insn.addr !106
  %r3.2.reg2mem = alloca i32, !insn.addr !106
  %r2.1.reg2mem = alloca i32, !insn.addr !106
  %r4.2.reg2mem = alloca i32, !insn.addr !106
  %r4.1.reg2mem = alloca i32, !insn.addr !106
  %r3.1.reg2mem = alloca i32, !insn.addr !106
  %r4.0.reg2mem = alloca i32, !insn.addr !106
  %r3.0.reg2mem = alloca i32, !insn.addr !106
  %r2.0.reg2mem = alloca i32, !insn.addr !106
  %stack_var_-16 = alloca i32, align 4
  %0 = load i32, i32* @global_var_23f08, align 4, !insn.addr !107
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_12a44 to i8*)), !insn.addr !108
  %2 = call i32* @malloc(i32 40), !insn.addr !109
  %3 = icmp eq i32* %2, null, !insn.addr !110
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !111
  br i1 %3, label %dec_label_pc_10f80, label %dec_label_pc_10f60, !insn.addr !111

dec_label_pc_10f60:                               ; preds = %dec_label_pc_10f30
  %4 = ptrtoint i32* %2 to i32, !insn.addr !109
  %5 = add i32 %4, -4, !insn.addr !112
  store i32 %5, i32* %r2.0.reg2mem, !insn.addr !112
  store i32 0, i32* %r3.0.reg2mem, !insn.addr !112
  br label %dec_label_pc_10f68, !insn.addr !112

dec_label_pc_10f68:                               ; preds = %dec_label_pc_10f68, %dec_label_pc_10f60
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  %r2.0.reload = load i32, i32* %r2.0.reg2mem
  %6 = add i32 %r2.0.reload, 4, !insn.addr !113
  %7 = inttoptr i32 %6 to i32*, !insn.addr !113
  store i32 %r3.0.reload, i32* %7, align 4, !insn.addr !113
  %8 = add nuw nsw i32 %r3.0.reload, 2, !insn.addr !114
  %9 = icmp eq i32 %8, 20, !insn.addr !115
  store i32 %6, i32* %r2.0.reg2mem, !insn.addr !116
  store i32 %8, i32* %r3.0.reg2mem, !insn.addr !116
  br i1 %9, label %dec_label_pc_10f78, label %dec_label_pc_10f68, !insn.addr !116

dec_label_pc_10f78:                               ; preds = %dec_label_pc_10f68
  %10 = add i32 %4, 20, !insn.addr !117
  %11 = inttoptr i32 %10 to i32*, !insn.addr !117
  %12 = load i32, i32* %11, align 4, !insn.addr !117
  call void @free(i32* nonnull %2), !insn.addr !118
  store i32 %12, i32* %r4.0.reg2mem, !insn.addr !118
  br label %dec_label_pc_10f80, !insn.addr !118

dec_label_pc_10f80:                               ; preds = %dec_label_pc_10f30, %dec_label_pc_10f78
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_12a64, i32 0, i32 0), i32 %r4.0.reload), !insn.addr !119
  %14 = call i32* @calloc(i32 5, i32 4), !insn.addr !120
  %15 = icmp eq i32* %14, null, !insn.addr !121
  store i32 -1, i32* %r4.2.reg2mem, !insn.addr !122
  br i1 %15, label %dec_label_pc_10fc4, label %dec_label_pc_10fa4, !insn.addr !122

dec_label_pc_10fa4:                               ; preds = %dec_label_pc_10f80
  %16 = ptrtoint i32* %14 to i32, !insn.addr !120
  %17 = add i32 %16, -4, !insn.addr !123
  %18 = add nsw i32 %16, 12
  store i32 %17, i32* %r3.1.reg2mem, !insn.addr !124
  store i32 0, i32* %r4.1.reg2mem, !insn.addr !124
  br label %dec_label_pc_10fb0, !insn.addr !124

dec_label_pc_10fb0:                               ; preds = %dec_label_pc_10fb0, %dec_label_pc_10fa4
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %r3.1.reload = load i32, i32* %r3.1.reg2mem
  %19 = add i32 %r3.1.reload, 4, !insn.addr !125
  %20 = inttoptr i32 %19 to i32*, !insn.addr !125
  %21 = load i32, i32* %20, align 4, !insn.addr !125
  %22 = icmp eq i32 %18, %r3.1.reload, !insn.addr !126
  %23 = add i32 %21, %r4.1.reload, !insn.addr !127
  store i32 %19, i32* %r3.1.reg2mem, !insn.addr !128
  store i32 %23, i32* %r4.1.reg2mem, !insn.addr !128
  br i1 %22, label %dec_label_pc_10fc0, label %dec_label_pc_10fb0, !insn.addr !128

dec_label_pc_10fc0:                               ; preds = %dec_label_pc_10fb0
  call void @free(i32* nonnull %14), !insn.addr !129
  store i32 %23, i32* %r4.2.reg2mem, !insn.addr !129
  br label %dec_label_pc_10fc4, !insn.addr !129

dec_label_pc_10fc4:                               ; preds = %dec_label_pc_10f80, %dec_label_pc_10fc0
  %r4.2.reload = load i32, i32* %r4.2.reg2mem
  %24 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_12a84, i32 0, i32 0), i32 %r4.2.reload), !insn.addr !130
  %25 = call i32 @heap_realloc(), !insn.addr !131
  %26 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_12aa4, i32 0, i32 0), i32 %25), !insn.addr !132
  %27 = call i32* @malloc(i32 40), !insn.addr !133
  %28 = icmp eq i32* %27, null, !insn.addr !134
  store i32 -1, i32* %r4.3.reg2mem, !insn.addr !135
  br i1 %28, label %dec_label_pc_11018, label %dec_label_pc_10ff8, !insn.addr !135

dec_label_pc_10ff8:                               ; preds = %dec_label_pc_10fc4
  %29 = ptrtoint i32* %27 to i32, !insn.addr !133
  %30 = add i32 %29, -4, !insn.addr !136
  store i32 %30, i32* %r2.1.reg2mem, !insn.addr !136
  store i32 0, i32* %r3.2.reg2mem, !insn.addr !136
  br label %dec_label_pc_11000, !insn.addr !136

dec_label_pc_11000:                               ; preds = %dec_label_pc_11000, %dec_label_pc_10ff8
  %r3.2.reload = load i32, i32* %r3.2.reg2mem
  %r2.1.reload = load i32, i32* %r2.1.reg2mem
  %31 = add i32 %r2.1.reload, 4, !insn.addr !137
  %32 = inttoptr i32 %31 to i32*, !insn.addr !137
  store i32 %r3.2.reload, i32* %32, align 4, !insn.addr !137
  %33 = add nuw nsw i32 %r3.2.reload, 3, !insn.addr !138
  %34 = icmp eq i32 %33, 30, !insn.addr !139
  store i32 %31, i32* %r2.1.reg2mem, !insn.addr !140
  store i32 %33, i32* %r3.2.reg2mem, !insn.addr !140
  br i1 %34, label %dec_label_pc_11010, label %dec_label_pc_11000, !insn.addr !140

dec_label_pc_11010:                               ; preds = %dec_label_pc_11000
  %35 = add i32 %29, 20, !insn.addr !141
  %36 = inttoptr i32 %35 to i32*, !insn.addr !141
  %37 = load i32, i32* %36, align 4, !insn.addr !141
  call void @free(i32* nonnull %27), !insn.addr !142
  store i32 %37, i32* %r4.3.reg2mem, !insn.addr !142
  br label %dec_label_pc_11018, !insn.addr !142

dec_label_pc_11018:                               ; preds = %dec_label_pc_10fc4, %dec_label_pc_11010
  %r4.3.reload = load i32, i32* %r4.3.reg2mem
  %38 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_12ac4, i32 0, i32 0), i32 %r4.3.reload), !insn.addr !143
  %39 = call i32* @malloc(i32 8), !insn.addr !144
  %40 = icmp eq i32* %39, null, !insn.addr !145
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !146
  br i1 %40, label %dec_label_pc_11040, label %dec_label_pc_11038, !insn.addr !146

dec_label_pc_11038:                               ; preds = %dec_label_pc_11018
  call void @free(i32* nonnull %39), !insn.addr !147
  store i32 15, i32* %storemerge.reg2mem, !insn.addr !148
  br label %dec_label_pc_11040, !insn.addr !148

dec_label_pc_11040:                               ; preds = %dec_label_pc_11018, %dec_label_pc_11038
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %41 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_12ae4, i32 0, i32 0), i32 %storemerge.reload), !insn.addr !149
  %42 = call i32* @malloc(i32 8), !insn.addr !150
  %43 = icmp eq i32* %42, null, !insn.addr !151
  br i1 %43, label %dec_label_pc_11244, label %dec_label_pc_1105c, !insn.addr !152

dec_label_pc_1105c:                               ; preds = %dec_label_pc_11040
  %44 = ptrtoint i32* %42 to i32, !insn.addr !150
  %45 = call i32* @malloc(i32 8), !insn.addr !153
  %46 = ptrtoint i32* %45 to i32, !insn.addr !153
  %47 = icmp eq i32* %45, null, !insn.addr !154
  %48 = add i32 %44, 4, !insn.addr !155
  %49 = inttoptr i32 %48 to i32*, !insn.addr !155
  store i32 %46, i32* %49, align 4, !insn.addr !155
  br i1 %47, label %dec_label_pc_11234, label %dec_label_pc_11070, !insn.addr !156

dec_label_pc_11070:                               ; preds = %dec_label_pc_1105c
  store i32 20, i32* %45, align 4, !insn.addr !157
  %50 = add i32 %46, 4, !insn.addr !157
  %51 = inttoptr i32 %50 to i32*, !insn.addr !157
  store i32 0, i32* %51, align 4, !insn.addr !157
  store i32 0, i32* %r2.2.reg2mem, !insn.addr !157
  br label %dec_label_pc_11080, !insn.addr !157

dec_label_pc_11080:                               ; preds = %dec_label_pc_11234, %dec_label_pc_11070
  %r2.2.reload = load i32, i32* %r2.2.reg2mem
  %52 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_12c18, i32 0, i32 0), i32 %r2.2.reload), !insn.addr !158
  %53 = load i32, i32* %49, align 4, !insn.addr !159
  %54 = inttoptr i32 %53 to i32*, !insn.addr !160
  call void @free(i32* %54), !insn.addr !160
  call void @free(i32* nonnull %42), !insn.addr !161
  br label %dec_label_pc_1109c, !insn.addr !161

dec_label_pc_1109c:                               ; preds = %dec_label_pc_11244, %dec_label_pc_11080
  %55 = call i32 @linked_list_heap(), !insn.addr !162
  %56 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_12b04, i32 0, i32 0), i32 %55), !insn.addr !163
  %57 = call i32 @tree_heap_traversal(), !insn.addr !164
  %58 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_12b28, i32 0, i32 0), i32 %57), !insn.addr !165
  %59 = call i32* @malloc(i32 20), !insn.addr !166
  %60 = icmp eq i32* %59, null, !insn.addr !167
  store i32 -1, i32* %r2.3.reg2mem, !insn.addr !168
  br i1 %60, label %dec_label_pc_11100, label %dec_label_pc_110d4, !insn.addr !168

dec_label_pc_110d4:                               ; preds = %dec_label_pc_1109c
  %61 = ptrtoint i32* %59 to i32, !insn.addr !166
  %62 = add i32 %61, 4, !insn.addr !169
  %63 = inttoptr i32 %62 to i32*, !insn.addr !169
  store i32 1, i32* %63, align 4, !insn.addr !169
  %64 = add i32 %61, 16, !insn.addr !170
  %65 = inttoptr i32 %64 to i32*, !insn.addr !170
  store i32 4, i32* %65, align 4, !insn.addr !170
  store i32 0, i32* %59, align 4, !insn.addr !171
  %66 = add i32 %61, 8, !insn.addr !172
  %67 = inttoptr i32 %66 to i32*, !insn.addr !172
  store i32 2, i32* %67, align 4, !insn.addr !172
  %68 = add i32 %61, 12, !insn.addr !173
  %69 = inttoptr i32 %68 to i32*, !insn.addr !173
  store i32 3, i32* %69, align 4, !insn.addr !173
  store i32 2, i32* %r2.3.reg2mem, !insn.addr !173
  br label %dec_label_pc_11100, !insn.addr !173

dec_label_pc_11100:                               ; preds = %dec_label_pc_1109c, %dec_label_pc_110d4
  %r2.3.reload = load i32, i32* %r2.3.reg2mem
  %70 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_12b50, i32 0, i32 0), i32 %r2.3.reload), !insn.addr !174
  %71 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_12b70, i32 0, i32 0)), !insn.addr !175
  %72 = call i32 @fork(), !insn.addr !176
  %73 = icmp eq i32 %72, 0, !insn.addr !177
  br i1 %73, label %dec_label_pc_11198, label %dec_label_pc_11124, !insn.addr !178

dec_label_pc_11124:                               ; preds = %dec_label_pc_11100
  %74 = icmp sgt i32 %72, 0, !insn.addr !179
  br i1 %74, label %dec_label_pc_11128, label %dec_label_pc_11170, !insn.addr !179

dec_label_pc_11128:                               ; preds = %dec_label_pc_11124
  %75 = call i32 @waitpid(i32 %72, i32* nonnull %stack_var_-16, i32 0), !insn.addr !180
  %76 = load i32, i32* %stack_var_-16, align 4, !insn.addr !181
  %77 = urem i32 %76, 128, !insn.addr !182
  %78 = icmp eq i32 %77, 0, !insn.addr !182
  br i1 %78, label %dec_label_pc_111e8, label %dec_label_pc_11140, !insn.addr !183

dec_label_pc_11140:                               ; preds = %dec_label_pc_11128
  %79 = mul i32 %77, 16777216, !insn.addr !184
  %80 = add nuw i32 %79, 16777216, !insn.addr !185
  %81 = icmp sgt i32 %80, 33554431, !insn.addr !186
  store i32 %75, i32* %r0.0.reg2mem, !insn.addr !186
  br i1 %81, label %dec_label_pc_111d8, label %dec_label_pc_11150, !insn.addr !186

dec_label_pc_11150:                               ; preds = %dec_label_pc_111e8, %dec_label_pc_111d8, %dec_label_pc_11140
  %82 = load i32, i32* @global_var_23f08, align 4, !insn.addr !187
  %83 = icmp eq i32 %0, %82, !insn.addr !188
  br i1 %83, label %dec_label_pc_11168, label %dec_label_pc_11208, !insn.addr !189

dec_label_pc_11168:                               ; preds = %dec_label_pc_11150
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !190

dec_label_pc_11170:                               ; preds = %dec_label_pc_11124
  %84 = load i32, i32* @global_var_23f08, align 4, !insn.addr !191
  %85 = icmp eq i32 %0, %84, !insn.addr !192
  br i1 %85, label %dec_label_pc_11188, label %dec_label_pc_11208, !insn.addr !193

dec_label_pc_11188:                               ; preds = %dec_label_pc_11170
  call void @perror(i8* bitcast (i8** @global_var_12c0c to i8*)), !insn.addr !194
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !194

dec_label_pc_11198:                               ; preds = %dec_label_pc_11100
  %86 = call i32* @malloc(i32 4), !insn.addr !195
  %87 = icmp eq i32* %86, null, !insn.addr !196
  br i1 %87, label %dec_label_pc_111c4, label %dec_label_pc_111a8, !insn.addr !197

dec_label_pc_111a8:                               ; preds = %dec_label_pc_11198
  %88 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_12a2c, i32 0, i32 0), i32 42), !insn.addr !198
  call void @free(i32* nonnull %86), !insn.addr !199
  br label %dec_label_pc_111c4, !insn.addr !200

dec_label_pc_111c4:                               ; preds = %dec_label_pc_11198, %dec_label_pc_11208, %dec_label_pc_111a8
  %89 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_12b90 to i8*)), !insn.addr !201
  call void @exit(i32 0), !insn.addr !202
  unreachable, !insn.addr !202

dec_label_pc_111d8:                               ; preds = %dec_label_pc_11140
  %90 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_12bc8 to i8*)), !insn.addr !203
  store i32 %90, i32* %r0.0.reg2mem, !insn.addr !204
  br label %dec_label_pc_11150, !insn.addr !204

dec_label_pc_111e8:                               ; preds = %dec_label_pc_11128
  %91 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_12ba0 to i8*)), !insn.addr !205
  store i32 %91, i32* %r0.0.reg2mem, !insn.addr !206
  br label %dec_label_pc_11150, !insn.addr !206

dec_label_pc_11208:                               ; preds = %dec_label_pc_11170, %dec_label_pc_11150
  call void @__stack_chk_fail(), !insn.addr !207
  br label %dec_label_pc_111c4, !insn.addr !207

dec_label_pc_11234:                               ; preds = %dec_label_pc_1105c
  call void @free(i32* nonnull %42), !insn.addr !208
  store i32 -2, i32* %r2.2.reg2mem, !insn.addr !209
  br label %dec_label_pc_11080, !insn.addr !209

dec_label_pc_11244:                               ; preds = %dec_label_pc_11040
  %92 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_12c18, i32 0, i32 0), i32 -1), !insn.addr !210
  br label %dec_label_pc_1109c, !insn.addr !211

; uselistorder directives
  uselistorder i32* %59, { 0, 2, 1 }
  uselistorder i32* %42, { 0, 1, 3, 2 }
  uselistorder i32 %r3.2.reload, { 1, 0 }
  uselistorder i32* %27, { 0, 2, 1 }
  uselistorder i32 %r3.1.reload, { 1, 0 }
  uselistorder i32* %14, { 0, 2, 1 }
  uselistorder i32 %r3.0.reload, { 1, 0 }
  uselistorder i32* %2, { 0, 2, 1 }
  uselistorder i32* %stack_var_-16, { 1, 0 }
  uselistorder i32* %r2.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r3.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.0.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r3.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r2.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r3.2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.3.reg2mem, { 0, 2, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r2.2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r2.3.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r0.0.reg2mem, { 3, 2, 0, 1 }
  uselistorder i32 -2, { 0, 2, 1 }
  uselistorder i32 16777216, { 1, 0 }
  uselistorder i32 16, { 1, 0 }
  uselistorder i32 8, { 6, 0, 1, 2, 3, 4, 5 }
  uselistorder void (i32*)* @free, { 7, 6, 5, 4, 3, 2, 1, 0, 16, 15, 13, 12, 14, 11, 10, 9, 8 }
  uselistorder i32 4, { 2, 3, 13, 14, 15, 16, 17, 4, 18, 7, 8, 9, 10, 11, 5, 12, 0, 19, 1, 6 }
  uselistorder i32 -1, { 10, 0, 1, 2, 3, 4, 9, 5, 6, 7, 8 }
  uselistorder i32* (i32)* @malloc, { 6, 5, 4, 3, 2, 1, 0, 11, 10, 9, 8, 7 }
  uselistorder label %dec_label_pc_111c4, { 1, 2, 0 }
  uselistorder label %dec_label_pc_11100, { 1, 0 }
  uselistorder label %dec_label_pc_11040, { 1, 0 }
  uselistorder label %dec_label_pc_11018, { 1, 0 }
  uselistorder label %dec_label_pc_10fc4, { 1, 0 }
  uselistorder label %dec_label_pc_10f80, { 1, 0 }
}

define i32 @test_static_global() local_unnamed_addr {
dec_label_pc_113d4:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_12c38 to i8*)), !insn.addr !212
  %1 = load i32, i32* @global_var_24074, align 4, !insn.addr !213
  %2 = add i32 %1, 1, !insn.addr !214
  store i32 %2, i32* @global_var_24074, align 4, !insn.addr !215
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_12c5c, i32 0, i32 0), i32 %2), !insn.addr !216
  %4 = load i32, i32* @global_var_24074, align 4, !insn.addr !217
  %5 = mul i32 %4, 2, !insn.addr !218
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_12c80, i32 0, i32 0), i32 %5), !insn.addr !219
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_12ca4, i32 0, i32 0), i32 5), !insn.addr !220
  store i32 1, i32* @global_var_24078, align 4, !insn.addr !221
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_12ccc, i32 0, i32 0), i32 1), !insn.addr !222
  %9 = load i32, i32* @global_var_24078, align 4, !insn.addr !223
  %10 = add i32 %9, 1, !insn.addr !224
  store i32 %10, i32* @global_var_24078, align 4, !insn.addr !225
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_12ccc, i32 0, i32 0), i32 %10), !insn.addr !226
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_12cec, i32 0, i32 0), i32 11), !insn.addr !227
  %13 = load i32, i32* @global_var_2406c, align 4, !insn.addr !228
  %14 = add i32 %13, 100, !insn.addr !229
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_12d10, i32 0, i32 0), i32 %14), !insn.addr !230
  %16 = call i32 @extern_function(i32 5), !insn.addr !231
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_12d38, i32 0, i32 0), i32 %16), !insn.addr !232
  %18 = load i8, i8* @global_var_24068, align 1, !insn.addr !233
  %19 = zext i8 %18 to i32, !insn.addr !233
  %20 = add nuw nsw i32 %19, 42, !insn.addr !234
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_12d5c, i32 0, i32 0), i32 %20), !insn.addr !235
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_12d80, i32 0, i32 0), i32 0), !insn.addr !236
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_12da0, i32 0, i32 0), i32 0), !insn.addr !237
  %24 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_12dc4, i32 0, i32 0), i32 30), !insn.addr !238
  store i8 50, i8* @global_var_24068, align 1, !insn.addr !239
  %25 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_12dec, i32 0, i32 0), i32 50), !insn.addr !240
  store i32 67480, i32* @global_var_2407c, align 4, !insn.addr !241
  %26 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_12e0c, i32 0, i32 0), i32 10), !insn.addr !242
  %27 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_12e30, i32 0, i32 0), i32 100), !insn.addr !243
  %28 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_12e54, i32 0, i32 0), i32 15), !insn.addr !244
  %29 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_12e7c, i32 0, i32 0), i32 20), !insn.addr !245
  %30 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_12e98, i32 0, i32 0), i32 20), !insn.addr !246
  ret i32 %30, !insn.addr !246

; uselistorder directives
  uselistorder i32 %10, { 1, 0 }
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32 20, { 0, 1, 2, 3, 7, 8, 9, 4, 5, 6 }
  uselistorder i32 15, { 1, 0, 2 }
  uselistorder i32 42, { 2, 0, 1 }
  uselistorder i8* @global_var_24068, { 1, 0 }
  uselistorder i32 2, { 1, 0, 3, 8, 4, 5, 2, 6, 7 }
  uselistorder i32* @global_var_24074, { 1, 0, 2 }
}

define i32 @test_memory_op_functions() local_unnamed_addr {
dec_label_pc_117a0:
  %stack_var_-304 = alloca i32, align 4
  %stack_var_-316 = alloca i32, align 4
  %stack_var_-279 = alloca i32, align 4
  %stack_var_-280 = alloca i32, align 4
  %0 = load i32, i32* @global_var_23f08, align 4, !insn.addr !247
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_12ebc to i8*)), !insn.addr !248
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_12ee0, i32 0, i32 0), i32 65), !insn.addr !249
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_12ef4, i32 0, i32 0), i32 50), !insn.addr !250
  store i32 1819043144, i32* %stack_var_-280, align 4, !insn.addr !251
  %4 = call i32* @memmove(i32* nonnull %stack_var_-279, i32* nonnull %stack_var_-280, i32 9), !insn.addr !252
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_12f08, i32 0, i32 0), i8 72), !insn.addr !253
  store i32 1, i32* %stack_var_-316, align 4, !insn.addr !254
  store i32 1, i32* %stack_var_-304, align 4, !insn.addr !255
  %6 = call i32 @memcmp(i32* nonnull %stack_var_-316, i32* nonnull %stack_var_-304, i32 12), !insn.addr !256
  %7 = icmp ne i32 %6, 0, !insn.addr !257
  %8 = icmp sgt i32 %6, 0, !insn.addr !258
  %spec.select3 = sext i1 %7 to i32
  %r2.2 = select i1 %8, i32 1, i32 %spec.select3
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_12f1c, i32 0, i32 0), i32 %r2.2), !insn.addr !259
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_12f30, i32 0, i32 0), i32 0), !insn.addr !260
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_12f44, i32 0, i32 0), i32 1), !insn.addr !261
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_12f58, i32 0, i32 0), i32 67305985), !insn.addr !262
  %13 = call i32 @__sync_synchronize(i32 %12), !insn.addr !263
  %14 = load i32, i32* @global_var_23f08, align 4, !insn.addr !264
  %15 = icmp eq i32 %0, %14, !insn.addr !265
  br i1 %15, label %dec_label_pc_118e4, label %dec_label_pc_118fc, !insn.addr !266

dec_label_pc_118e4:                               ; preds = %dec_label_pc_117a0
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_12f6c, i32 0, i32 0), i32 10), !insn.addr !267
  ret i32 %16, !insn.addr !267

dec_label_pc_118fc:                               ; preds = %dec_label_pc_117a0
  call void @__stack_chk_fail(), !insn.addr !268
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !268

; uselistorder directives
  uselistorder void ()* @__stack_chk_fail, { 3, 2, 1, 0 }
  uselistorder i32 10, { 0, 1, 5, 2, 3, 4 }
  uselistorder i32 12, { 2, 6, 0, 1, 3, 4, 5 }
  uselistorder i32 50, { 1, 2, 3, 0 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 (i8*)* @puts, { 3, 2, 1, 0 }
  uselistorder i32 0, { 13, 14, 15, 16, 17, 18, 119, 19, 20, 21, 22, 120, 135, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 121, 43, 44, 122, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 123, 63, 64, 140, 124, 12, 141, 65, 66, 67, 68, 125, 69, 70, 71, 72, 73, 74, 0, 126, 75, 76, 77, 78, 1, 79, 80, 81, 82, 2, 83, 84, 3, 136, 138, 139, 4, 11, 137, 5, 6, 7, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 8, 9, 10, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 127, 128, 129, 130, 131, 132, 133, 134 }
  uselistorder i32* @global_var_23f08, { 1, 2, 3, 4, 5, 0, 6, 7, 8 }
}

define i32 @extern_function(i32 %arg1) local_unnamed_addr {
dec_label_pc_11938:
  %0 = mul i32 %arg1, 3, !insn.addr !269
  ret i32 %0, !insn.addr !270

; uselistorder directives
  uselistorder i32 3, { 0, 1, 5, 4, 2, 6, 3 }
}

define i32 @__sync_synchronize(i32 %arg1) local_unnamed_addr {
dec_label_pc_126c8:
  %0 = call i32 @function_ffff0fa0(), !insn.addr !271
  ret i32 %0, !insn.addr !271
}

declare i32* @calloc(i32, i32) local_unnamed_addr

declare i32* @memmove(i32*, i32*, i32) local_unnamed_addr

declare void @free(i32*) local_unnamed_addr

declare i32 @memcmp(i32*, i32*, i32) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i32* @realloc(i32*, i32) local_unnamed_addr

declare void @perror(i8*) local_unnamed_addr

declare i32 @waitpid(i32, i32*, i32) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32* @malloc(i32) local_unnamed_addr

declare void @exit(i32) local_unnamed_addr

declare i32 @__printf_chk(i32, i8*, ...) local_unnamed_addr

declare i32 @fork() local_unnamed_addr

define i32 @function_ffff0fa0() local_unnamed_addr {
dec_label_pc_ffff0fa0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1

; uselistorder directives
  uselistorder i32 1, { 0, 33, 34, 36, 35, 37, 38, 29, 30, 31, 39, 40, 41, 95, 94, 93, 92, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 61, 57, 56, 62, 58, 59, 60, 100, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 96, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 22, 21, 20, 19, 18, 17, 16, 15, 79, 23, 80, 81, 82, 83, 84, 85, 86, 87, 88, 32, 97, 26, 25, 24, 101, 102, 99, 98, 28, 27, 1, 89, 90, 91 }
}

!0 = !{i64 67208}
!1 = !{i64 67212}
!2 = !{i64 67216}
!3 = !{i64 67220}
!4 = !{i64 67228}
!5 = !{i64 67632}
!6 = !{i64 67652}
!7 = !{i64 67672}
!8 = !{i64 67676}
!9 = !{i64 67680}
!10 = !{i64 67684}
!11 = !{i64 67688}
!12 = !{i64 67692}
!13 = !{i64 67704}
!14 = !{i64 67712}
!15 = !{i64 67720}
!16 = !{i64 67700}
!17 = !{i64 67732}
!18 = !{i64 67736}
!19 = !{i64 67888}
!20 = !{i64 67920}
!21 = !{i64 67908}
!22 = !{i64 67896}
!23 = !{i64 67924}
!24 = !{i64 67928}
!25 = !{i64 67932}
!26 = !{i64 67936}
!27 = !{i64 67956}
!28 = !{i64 67960}
!29 = !{i64 67964}
!30 = !{i64 67968}
!31 = !{i64 67972}
!32 = !{i64 67980}
!33 = !{i64 67996}
!34 = !{i64 68004}
!35 = !{i64 68012}
!36 = !{i64 68024}
!37 = !{i64 68048}
!38 = !{i64 68064}
!39 = !{i64 68080}
!40 = !{i64 68096}
!41 = !{i64 68112}
!42 = !{i64 68128}
!43 = !{i64 68132}
!44 = !{i64 68148}
!45 = !{i64 68164}
!46 = !{i64 68172}
!47 = !{i64 68188}
!48 = !{i64 68208}
!49 = !{i64 68428}
!50 = !{i64 68436}
!51 = !{i64 68440}
!52 = !{i64 68444}
!53 = !{i64 68460}
!54 = !{i64 68476}
!55 = !{i64 68480}
!56 = !{i64 68484}
!57 = !{i64 68488}
!58 = !{i64 68492}
!59 = !{i64 68496}
!60 = !{i64 68500}
!61 = !{i64 68504}
!62 = !{i64 68516}
!63 = !{i64 68524}
!64 = !{i64 68540}
!65 = !{i64 68548}
!66 = !{i64 68808}
!67 = !{i64 68824}
!68 = !{i64 68836}
!69 = !{i64 68840}
!70 = !{i64 68844}
!71 = !{i64 68852}
!72 = !{i64 68864}
!73 = !{i64 68856}
!74 = !{i64 68868}
!75 = !{i64 68872}
!76 = !{i64 68884}
!77 = !{i64 68888}
!78 = !{i64 68892}
!79 = !{i64 68896}
!80 = !{i64 68904}
!81 = !{i64 68908}
!82 = !{i64 68912}
!83 = !{i64 68916}
!84 = !{i64 68924}
!85 = !{i64 68932}
!86 = !{i64 68940}
!87 = !{i64 68944}
!88 = !{i64 68948}
!89 = !{i64 68952}
!90 = !{i64 69012}
!91 = !{i64 69016}
!92 = !{i64 69020}
!93 = !{i64 69028}
!94 = !{i64 69032}
!95 = !{i64 69040}
!96 = !{i64 69052}
!97 = !{i64 69068}
!98 = !{i64 69076}
!99 = !{i64 69084}
!100 = !{i64 69100}
!101 = !{i64 69108}
!102 = !{i64 69120}
!103 = !{i64 69124}
!104 = !{i64 69128}
!105 = !{i64 69136}
!106 = !{i64 69424}
!107 = !{i64 69440}
!108 = !{i64 69452}
!109 = !{i64 69460}
!110 = !{i64 69464}
!111 = !{i64 69468}
!112 = !{i64 69476}
!113 = !{i64 69480}
!114 = !{i64 69484}
!115 = !{i64 69488}
!116 = !{i64 69492}
!117 = !{i64 69496}
!118 = !{i64 69500}
!119 = !{i64 69516}
!120 = !{i64 69528}
!121 = !{i64 69532}
!122 = !{i64 69536}
!123 = !{i64 69544}
!124 = !{i64 69548}
!125 = !{i64 69552}
!126 = !{i64 69556}
!127 = !{i64 69560}
!128 = !{i64 69564}
!129 = !{i64 69568}
!130 = !{i64 69584}
!131 = !{i64 69588}
!132 = !{i64 69604}
!133 = !{i64 69612}
!134 = !{i64 69616}
!135 = !{i64 69620}
!136 = !{i64 69628}
!137 = !{i64 69632}
!138 = !{i64 69636}
!139 = !{i64 69640}
!140 = !{i64 69644}
!141 = !{i64 69648}
!142 = !{i64 69652}
!143 = !{i64 69668}
!144 = !{i64 69676}
!145 = !{i64 69680}
!146 = !{i64 69684}
!147 = !{i64 69688}
!148 = !{i64 69692}
!149 = !{i64 69704}
!150 = !{i64 69712}
!151 = !{i64 69716}
!152 = !{i64 69720}
!153 = !{i64 69728}
!154 = !{i64 69732}
!155 = !{i64 69736}
!156 = !{i64 69740}
!157 = !{i64 69756}
!158 = !{i64 69768}
!159 = !{i64 69772}
!160 = !{i64 69776}
!161 = !{i64 69784}
!162 = !{i64 69788}
!163 = !{i64 69804}
!164 = !{i64 69808}
!165 = !{i64 69824}
!166 = !{i64 69832}
!167 = !{i64 69836}
!168 = !{i64 69840}
!169 = !{i64 69864}
!170 = !{i64 69872}
!171 = !{i64 69876}
!172 = !{i64 69880}
!173 = !{i64 69884}
!174 = !{i64 69896}
!175 = !{i64 69908}
!176 = !{i64 69912}
!177 = !{i64 69916}
!178 = !{i64 69920}
!179 = !{i64 69924}
!180 = !{i64 69936}
!181 = !{i64 69940}
!182 = !{i64 69944}
!183 = !{i64 69948}
!184 = !{i64 69952}
!185 = !{i64 69956}
!186 = !{i64 69964}
!187 = !{i64 69972}
!188 = !{i64 69980}
!189 = !{i64 69988}
!190 = !{i64 69996}
!191 = !{i64 70004}
!192 = !{i64 70012}
!193 = !{i64 70020}
!194 = !{i64 70036}
!195 = !{i64 70044}
!196 = !{i64 70048}
!197 = !{i64 70052}
!198 = !{i64 70068}
!199 = !{i64 70076}
!200 = !{i64 70080}
!201 = !{i64 70092}
!202 = !{i64 70100}
!203 = !{i64 70112}
!204 = !{i64 70116}
!205 = !{i64 70136}
!206 = !{i64 70140}
!207 = !{i64 70152}
!208 = !{i64 70200}
!209 = !{i64 70208}
!210 = !{i64 70224}
!211 = !{i64 70228}
!212 = !{i64 70628}
!213 = !{i64 70632}
!214 = !{i64 70640}
!215 = !{i64 70648}
!216 = !{i64 70652}
!217 = !{i64 70656}
!218 = !{i64 70664}
!219 = !{i64 70676}
!220 = !{i64 70692}
!221 = !{i64 70708}
!222 = !{i64 70712}
!223 = !{i64 70716}
!224 = !{i64 70724}
!225 = !{i64 70732}
!226 = !{i64 70736}
!227 = !{i64 70752}
!228 = !{i64 70764}
!229 = !{i64 70772}
!230 = !{i64 70776}
!231 = !{i64 70784}
!232 = !{i64 70804}
!233 = !{i64 70816}
!234 = !{i64 70824}
!235 = !{i64 70828}
!236 = !{i64 70844}
!237 = !{i64 70860}
!238 = !{i64 70876}
!239 = !{i64 70892}
!240 = !{i64 70896}
!241 = !{i64 70916}
!242 = !{i64 70920}
!243 = !{i64 70936}
!244 = !{i64 70952}
!245 = !{i64 70968}
!246 = !{i64 70988}
!247 = !{i64 71600}
!248 = !{i64 71612}
!249 = !{i64 71644}
!250 = !{i64 71660}
!251 = !{i64 71676}
!252 = !{i64 71704}
!253 = !{i64 71720}
!254 = !{i64 71744}
!255 = !{i64 71752}
!256 = !{i64 71768}
!257 = !{i64 71772}
!258 = !{i64 71776}
!259 = !{i64 71800}
!260 = !{i64 71828}
!261 = !{i64 71844}
!262 = !{i64 71860}
!263 = !{i64 71876}
!264 = !{i64 71888}
!265 = !{i64 71896}
!266 = !{i64 71904}
!267 = !{i64 71928}
!268 = !{i64 71932}
!269 = !{i64 71992}
!270 = !{i64 71996}
!271 = !{i64 75468}
