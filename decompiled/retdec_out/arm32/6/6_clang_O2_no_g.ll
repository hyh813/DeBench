source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%_IO_FILE = type { i32 }
%shmid_ds = type { %ipc_perm, i32, i32, i32, i32, i32, i32, i16, i16, i32*, i32* }
%ipc_perm = type { i32, i32, i32, i32, i32, i32, i16 }
%stat = type { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }
%sockaddr = type { i32, [14 x i8] }

@global_var_1400c = local_unnamed_addr global i32 3144
@global_var_14010 = local_unnamed_addr global i32 3144
@global_var_14014 = local_unnamed_addr global i32 3144
@global_var_14018 = local_unnamed_addr global i32 3144
@global_var_1401c = local_unnamed_addr global i32 3144
@global_var_14020 = local_unnamed_addr global i32 3144
@global_var_14024 = local_unnamed_addr global i32 3144
@global_var_14028 = local_unnamed_addr global i32 3144
@global_var_1402c = local_unnamed_addr global i32 3144
@global_var_14030 = local_unnamed_addr global i32 3144
@global_var_14034 = local_unnamed_addr global i32 3144
@global_var_14038 = local_unnamed_addr global i32 3144
@global_var_1403c = local_unnamed_addr global i32 3144
@global_var_14040 = local_unnamed_addr global i32 3144
@global_var_14044 = local_unnamed_addr global i32 3144
@global_var_14048 = local_unnamed_addr global i32 3144
@global_var_1404c = local_unnamed_addr global i32 3144
@global_var_14050 = local_unnamed_addr global i32 3144
@global_var_14054 = local_unnamed_addr global i32 3144
@global_var_14058 = local_unnamed_addr global i32 3144
@global_var_1405c = local_unnamed_addr global i32 3144
@global_var_14060 = local_unnamed_addr global i32 3144
@global_var_14064 = local_unnamed_addr global i32 3144
@global_var_14068 = local_unnamed_addr global i32 3144
@global_var_1406c = local_unnamed_addr global i32 3144
@global_var_14070 = local_unnamed_addr global i32 3144
@global_var_14074 = local_unnamed_addr global i32 3144
@global_var_14078 = local_unnamed_addr global i32 3144
@global_var_1407c = local_unnamed_addr global i32 3144
@global_var_14080 = local_unnamed_addr global i32 3144
@global_var_14084 = local_unnamed_addr global i32 3144
@global_var_14088 = local_unnamed_addr global i32 3144
@global_var_1408c = local_unnamed_addr global i32 3144
@global_var_14090 = local_unnamed_addr global i32 3144
@global_var_14094 = local_unnamed_addr global i32 3144
@global_var_14098 = local_unnamed_addr global i32 3144
@global_var_1409c = local_unnamed_addr global i32 3144
@global_var_140a0 = local_unnamed_addr global i32 3144
@global_var_140a4 = local_unnamed_addr global i32 3144
@global_var_140a8 = local_unnamed_addr global i32 3144
@global_var_140ac = local_unnamed_addr global i32 3144
@global_var_140b0 = local_unnamed_addr global i32 3144
@global_var_140b4 = local_unnamed_addr global i32 3144
@global_var_140b8 = local_unnamed_addr global i32 3144
@global_var_140bc = local_unnamed_addr global i32 3144
@global_var_140c0 = local_unnamed_addr global i32 3144
@global_var_140c4 = local_unnamed_addr global i32 3144
@global_var_140c8 = local_unnamed_addr global i32 3144
@global_var_140cc = local_unnamed_addr global i32 3144
@global_var_140d0 = local_unnamed_addr global i32 3144
@global_var_140d4 = local_unnamed_addr global i32 3144
@global_var_140d8 = local_unnamed_addr global i32 3144
@global_var_140dc = local_unnamed_addr global i32 3144
@global_var_140e0 = local_unnamed_addr global i32 3144
@global_var_140e4 = local_unnamed_addr global i32 3144
@global_var_140e8 = local_unnamed_addr global i32 3144
@global_var_13f04 = local_unnamed_addr global i32 4204
@global_var_140ec = local_unnamed_addr global i32 3144
@global_var_13f10 = local_unnamed_addr global i32 1
@global_var_140f0 = local_unnamed_addr global i32 3144
@global_var_13f1c = local_unnamed_addr global i32 3132
@global_var_140f4 = local_unnamed_addr global i32 3144
@global_var_13f28 = local_unnamed_addr global i32 25
@global_var_140f8 = local_unnamed_addr global i32 3144
@global_var_13f34 = local_unnamed_addr global i32 4
@global_var_140fc = local_unnamed_addr global i32 3144
@global_var_13f40 = local_unnamed_addr global i32 28
@global_var_14100 = local_unnamed_addr global i32 3144
@global_var_1cc = global i32 1
@global_var_13f4c = local_unnamed_addr global i32* @global_var_1cc
@global_var_14104 = local_unnamed_addr global i32 3144
@global_var_13f58 = local_unnamed_addr global i32 6
@global_var_14108 = local_unnamed_addr global i32 3144
@global_var_2b3 = global i32 126720
@global_var_13f64 = local_unnamed_addr global i32* @global_var_2b3
@global_var_1410c = local_unnamed_addr global i32 3144
@global_var_fac = local_unnamed_addr constant i32 77908
@global_var_13f08 = global i32 1
@global_var_14000 = local_unnamed_addr global i32* @global_var_13f08
@global_var_fb0 = local_unnamed_addr constant i32 284
@global_var_1411c = local_unnamed_addr global i32 10736
@global_var_29f0 = constant i32 -382908416
@global_var_fd0 = local_unnamed_addr constant i32 77884
@global_var_fd4 = local_unnamed_addr constant i32 280
@global_var_14118 = local_unnamed_addr global i32 0
@global_var_100c = local_unnamed_addr constant i32 78148
@global_var_1010 = local_unnamed_addr constant i32 78144
@global_var_1014 = local_unnamed_addr constant i32 77832
@global_var_1018 = local_unnamed_addr constant i32 276
@global_var_14114 = local_unnamed_addr global i32 0
@global_var_105c = local_unnamed_addr constant i32 78080
@global_var_1060 = local_unnamed_addr constant i32 78076
@global_var_1064 = local_unnamed_addr constant i32 77752
@global_var_1068 = local_unnamed_addr constant i32 288
@global_var_14120 = local_unnamed_addr global i32 0
@global_var_10c0 = local_unnamed_addr constant i32 78004
@global_var_10c4 = local_unnamed_addr constant i32 77692
@global_var_10c8 = local_unnamed_addr constant i32 272
@global_var_14110 = local_unnamed_addr global i32 0
@global_var_10cc = local_unnamed_addr constant i32 77952
@global_var_10d0 = local_unnamed_addr constant i32 77940
@global_var_111c = local_unnamed_addr constant [9 x i8] c"oLibHell\00"
@global_var_1120 = local_unnamed_addr constant [5 x i8] c"Hell\00"
@global_var_1210 = local_unnamed_addr constant i32 6428
@global_var_191c = constant i32 -369098750
@global_var_1214 = local_unnamed_addr constant i32 6412
@global_var_2ad0 = constant i32 1
@global_var_122c = local_unnamed_addr constant i32 6332
@global_var_2ae8 = constant [21 x i8] c"Value: %d, Name: %s\0A\00"
@global_var_1248 = local_unnamed_addr constant i32 6308
@global_var_124c = local_unnamed_addr constant i32 6325
@global_var_2afd = constant [5 x i8] c"Test\00"
@global_var_1290 = local_unnamed_addr constant i32 6294
@global_var_2b02 = constant [6 x i8] c"%d,%d\00"
@global_var_12dc = local_unnamed_addr constant i32 6228
@global_var_12e0 = local_unnamed_addr constant i32 6218
@global_var_1324 = local_unnamed_addr constant i32 6172
@global_var_1378 = local_unnamed_addr constant i32 6102
@global_var_137c = local_unnamed_addr constant i32 6096
@global_var_2b12 = constant [12 x i8] c"/etc/passwd\00"
@global_var_1454 = local_unnamed_addr constant i32 6041
@global_var_2b31 = constant [3 x i8] c"w+\00"
@global_var_1458 = local_unnamed_addr constant i32 5986
@global_var_2b1e = constant [19 x i8] c"BinBench Test Data\00"
@global_var_145c = local_unnamed_addr constant i32 5886
@global_var_146c = local_unnamed_addr constant i32 5832
@global_var_2b34 = constant [23 x i8] c"/tmp/binbench_test.tmp\00"
@global_var_1760 = local_unnamed_addr constant i32 6322
@global_var_1758 = local_unnamed_addr constant i32 1651068015
@global_var_175c = local_unnamed_addr constant i32 1819043144
@global_var_1764 = local_unnamed_addr constant i32 5527
@global_var_1768 = local_unnamed_addr constant i32 5538
@global_var_176c = local_unnamed_addr constant i32 5549
@global_var_1770 = local_unnamed_addr constant i32 5561
@global_var_1774 = local_unnamed_addr constant i32 5348
@global_var_1778 = local_unnamed_addr constant i32 5332
@global_var_14d4 = constant i32 -476053414
@global_var_2adc = constant i32 1
@global_var_177c = local_unnamed_addr constant i32 5485
@global_var_1780 = local_unnamed_addr constant i32 5256
@global_var_1784 = local_unnamed_addr constant i32 5273
@global_var_1788 = local_unnamed_addr constant i32 5473
@global_var_178c = local_unnamed_addr constant i32 5244
@global_var_1790 = local_unnamed_addr constant i32 5234
@global_var_2b08 = constant [8 x i8] c"123,456\00"
@global_var_1794 = local_unnamed_addr constant i32 5437
@global_var_1798 = local_unnamed_addr constant i32 5198
@global_var_179c = local_unnamed_addr constant i32 5192
@global_var_17a0 = local_unnamed_addr constant i32 5390
@global_var_17a4 = local_unnamed_addr constant i32 5160
@global_var_17a8 = local_unnamed_addr constant i32 5390
@global_var_17ac = local_unnamed_addr constant i32 5402
@global_var_17b0 = local_unnamed_addr constant i32 5414
@global_var_17b4 = local_unnamed_addr constant i32 5425
@global_var_18d0 = local_unnamed_addr constant i32 4714
@global_var_19cc = local_unnamed_addr constant i32 4825
@global_var_2c99 = constant [10 x i8] c"/bin/true\00"
@global_var_1a84 = local_unnamed_addr constant i32 4655
@global_var_2ca3 = constant [10 x i8] c"HelloPipe\00"
@global_var_1c38 = local_unnamed_addr constant i32 4393
@global_var_1b6 = local_unnamed_addr global i32 1313275904
@global_var_2cad = constant [18 x i8] c"/tmp/binbench_shm\00"
@global_var_1c3c = local_unnamed_addr constant i32 4361
@global_var_3b6 = global i32 0
@global_var_1c40 = local_unnamed_addr constant i32 3792
@global_var_2ac0 = constant [13 x i8] c"SharedMemory\00"
@global_var_1dac = local_unnamed_addr constant i32 352
@global_var_1db0 = local_unnamed_addr constant i32 320
@global_var_1db4 = local_unnamed_addr constant i32 74880
@global_var_14138 = local_unnamed_addr global i32 0
@global_var_1db8 = local_unnamed_addr constant i32 74860
@global_var_3e8 = global i32 0
@global_var_1dbc = local_unnamed_addr constant i32 74832
@global_var_1dc0 = local_unnamed_addr constant i32 74808
@global_var_1dc4 = local_unnamed_addr constant i32 74784
@global_var_1413c = local_unnamed_addr global i32 0
@global_var_1dc8 = local_unnamed_addr constant i32 74748
@global_var_7d0 = constant [5 x i8] c"eate\00"
@global_var_1dcc = local_unnamed_addr constant i32 74720
@global_var_1dd0 = local_unnamed_addr constant i32 74692
@global_var_1dd4 = local_unnamed_addr constant i32 74680
@global_var_1df8 = local_unnamed_addr constant i32 74576
@global_var_1dfc = local_unnamed_addr constant i32 74568
@global_var_1f7c = local_unnamed_addr constant i32 4162
@global_var_1f80 = local_unnamed_addr constant i32 3302
@global_var_1f84 = local_unnamed_addr constant i32 3663
@global_var_1f88 = local_unnamed_addr constant i32 3218
@global_var_1f8c = local_unnamed_addr constant i32 3639
@global_var_1f90 = local_unnamed_addr constant i32 3583
@global_var_1f94 = local_unnamed_addr constant i32 3591
@global_var_1f98 = local_unnamed_addr constant i32 3599
@global_var_1f9c = local_unnamed_addr constant i32 3599
@global_var_1fa0 = local_unnamed_addr constant i32 3607
@global_var_1fa4 = local_unnamed_addr constant i32 3369
@global_var_2020 = local_unnamed_addr constant i32 -68
@global_var_2080 = local_unnamed_addr constant i32 -164
@global_var_21e8 = local_unnamed_addr constant i32 -184
@global_var_21ec = local_unnamed_addr constant i32 -220
@global_var_21f0 = local_unnamed_addr constant i32 -252
@global_var_2254 = local_unnamed_addr constant i32 73512
@global_var_2258 = local_unnamed_addr constant i32 73532
@global_var_14140 = global i32 0
@global_var_14158 = local_unnamed_addr global i32 0
@global_var_225c = local_unnamed_addr constant i32 73516
@global_var_2344 = local_unnamed_addr constant i32 73408
@global_var_2348 = local_unnamed_addr constant i32 -188
@global_var_234c = local_unnamed_addr constant i32 73284
@global_var_23dc = local_unnamed_addr constant i32 73200
@global_var_1415c = global i32 0
@global_var_23e0 = local_unnamed_addr constant i32 73212
@global_var_23e4 = local_unnamed_addr constant i32 73192
@global_var_23e8 = local_unnamed_addr constant i32 73160
@global_var_14178 = global i32 0
@global_var_23ec = local_unnamed_addr constant i32 73204
@global_var_23f0 = local_unnamed_addr constant i32 73116
@global_var_244c = local_unnamed_addr constant i32 73036
@global_var_2450 = local_unnamed_addr constant i32 73096
@global_var_2454 = local_unnamed_addr constant i32 73032
@global_var_2458 = local_unnamed_addr constant i32 73024
@global_var_2508 = local_unnamed_addr constant i32 72956
@global_var_250c = local_unnamed_addr constant i32 72996
@global_var_2510 = local_unnamed_addr constant i32 -316
@global_var_2514 = local_unnamed_addr constant i32 -200
@global_var_258c = local_unnamed_addr constant i32 72804
@global_var_141ac = global i32 0
@global_var_25c4 = local_unnamed_addr constant i32 72712
@global_var_26dc = local_unnamed_addr constant i32 72620
@global_var_26e0 = local_unnamed_addr constant i32 -260
@global_var_26e4 = local_unnamed_addr constant i32 -204
@global_var_26e8 = local_unnamed_addr constant i32 72460
@global_var_1f4 = global i32 0
@global_var_2738 = local_unnamed_addr constant i32 8
@global_var_273c = local_unnamed_addr constant i32 12
@global_var_28d8 = local_unnamed_addr constant i32 1523
@global_var_28d4 = local_unnamed_addr constant i32 -216
@global_var_29d0 = local_unnamed_addr constant i32 1405
@global_var_29d4 = local_unnamed_addr constant i32 -2416
@global_var_29d8 = local_unnamed_addr constant i32 1089
@global_var_29dc = local_unnamed_addr constant i32 1097
@global_var_29e0 = local_unnamed_addr constant i32 1098
@global_var_29e4 = local_unnamed_addr constant i32 1106
@global_var_29e8 = local_unnamed_addr constant i32 1106
@global_var_29ec = local_unnamed_addr constant i32 1110
@0 = external global i32
@global_var_14130 = external local_unnamed_addr global i8*
@1 = internal constant [3 x i8] c"\FA\12\00"
@global_var_1854 = constant i8* getelementptr inbounds ([3 x i8], [3 x i8]* @1, i32 0, i32 0)
@2 = internal constant [2 x i8] c"r\00"
@3 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @2, i32 0, i32 0)
@4 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\87\E5\87\86\E5\BA\93\E5\87\BD\E6\95\B0\E8\B0\83\E7\94\A8 ===\00"
@global_var_2e36 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @4, i32 0, i32 0)
@5 = internal constant [27 x i8] c"LIB-L1-01: %d (\E6\9C\9F\E6\9C\9B: 8)\0A\00"
@global_var_2b4b = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @5, i32 0, i32 0)
@6 = internal constant [27 x i8] c"LIB-L1-02: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_2b66 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @6, i32 0, i32 0)
@7 = internal constant [28 x i8] c"LIB-L1-03: %d (\E6\9C\9F\E6\9C\9B: 12)\0A\00"
@global_var_2b81 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @7, i32 0, i32 0)
@8 = internal constant [28 x i8] c"LIB-L1-04: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_2b9d = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i32 0, i32 0)
@9 = internal constant [28 x i8] c"LIB-L1-05: %d (\E6\9C\9F\E6\9C\9B: -1)\0A\00"
@global_var_2bb9 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i32 0, i32 0)
@10 = internal constant [28 x i8] c"LIB-L1-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_2bd5 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i32 0, i32 0)
@11 = internal constant [29 x i8] c"LIB-L1-07: %d (\E6\9C\9F\E6\9C\9B: 579)\0A\00"
@global_var_2bf1 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @11, i32 0, i32 0)
@12 = internal constant [28 x i8] c"LIB-L1-08: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2c0e = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @12, i32 0, i32 0)
@13 = internal constant [28 x i8] c"LIB-L1-09: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2c2a = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @13, i32 0, i32 0)
@14 = internal constant [28 x i8] c"LIB-L1-10: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_2c46 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @14, i32 0, i32 0)
@15 = internal constant [27 x i8] c"LIB-L1-11: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_2c62 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @15, i32 0, i32 0)
@16 = internal constant [28 x i8] c"LIB-L1-12: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_2c7d = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @16, i32 0, i32 0)
@17 = internal constant [27 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\B3\BB\E7\BB\9F\E8\B0\83\E7\94\A8 ===\00"
@global_var_2e5a = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @17, i32 0, i32 0)
@18 = internal constant [28 x i8] c"SYS-L3-01: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2cbf = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @18, i32 0, i32 0)
@19 = internal constant [28 x i8] c"SYS-L3-02: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2cdb = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @19, i32 0, i32 0)
@20 = internal constant [28 x i8] c"SYS-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2cf7 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @20, i32 0, i32 0)
@21 = internal constant [28 x i8] c"SYS-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2d13 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @21, i32 0, i32 0)
@22 = internal constant [28 x i8] c"SYS-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2d2f = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @22, i32 0, i32 0)
@23 = internal constant [28 x i8] c"SYS-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2d4b = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @23, i32 0, i32 0)
@24 = internal constant [28 x i8] c"SYS-L3-07: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2d67 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @24, i32 0, i32 0)
@global_var_1fa8 = constant i32* (i32*)* inttoptr (i32 -382910448 to i32* (i32*)*)
@global_var_14174 = external local_unnamed_addr global i8*
@global_var_141a8 = external local_unnamed_addr global i8*
@global_var_5f3 = external global i8*
@global_var_57d = external global i8*
@global_var_441 = external global i8*
@global_var_449 = external global i8*
@global_var_44a = external global i8*
@global_var_452 = external global i8*
@global_var_456 = external global i8*
@global_var_2b10 = constant [2 x i8] c"r\00"

define i32 @_init(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_c3c:
  %0 = call i32 @call_weak_fn(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i32 @"$a"(i32* %mutex) local_unnamed_addr {
dec_label_pc_c5c:
  %0 = call i32 @pthread_mutex_unlock(i32* %mutex), !insn.addr !2
  ret i32 %0, !insn.addr !2
}

define i8* @function_c68(i8* %haystack, i8* %needle) local_unnamed_addr {
dec_label_pc_c68:
  %0 = call i8* @strstr(i8* %haystack, i8* %needle), !insn.addr !3
  ret i8* %0, !insn.addr !3
}

define i32 @function_c74(i32 %sig) local_unnamed_addr {
dec_label_pc_c74:
  %0 = call i32 @raise(i32 %sig), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i32 @function_c80(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_c80:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define i32 @function_c8c(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_c8c:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define void @function_c98(i32* %d) local_unnamed_addr {
dec_label_pc_c98:
  call void @__cxa_finalize(i32* %d), !insn.addr !7
  ret void, !insn.addr !7
}

define i32 @function_ca4(i32 %fd, i32 %level, i32 %optname, i32* %optval, i32 %optlen) local_unnamed_addr {
dec_label_pc_ca4:
  %0 = call i32 @setsockopt(i32 %fd, i32 %level, i32 %optname, i32* %optval, i32 %optlen), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i32 @function_cb0(i8* %format, ...) local_unnamed_addr {
dec_label_pc_cb0:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define %_IO_FILE* @function_cbc(i8* %filename, i8* %modes) local_unnamed_addr {
dec_label_pc_cbc:
  %0 = call %_IO_FILE* @fopen(i8* %filename, i8* %modes), !insn.addr !10
  ret %_IO_FILE* %0, !insn.addr !10
}

define i32 @function_cc8(i32 %fd, i32* %buf, i32 %nbytes) local_unnamed_addr {
dec_label_pc_cc8:
  %0 = call i32 @read(i32 %fd, i32* %buf, i32 %nbytes), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define void @function_cd4(i32* %ptr) local_unnamed_addr {
dec_label_pc_cd4:
  call void @free(i32* %ptr), !insn.addr !12
  ret void, !insn.addr !12
}

define i32 @function_ce0(i32* %mutex) local_unnamed_addr {
dec_label_pc_ce0:
  %0 = call i32 @pthread_mutex_lock(i32* %mutex), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define void @function_cec(i32 %status) local_unnamed_addr {
dec_label_pc_cec:
  call void @_exit(i32 %status), !insn.addr !14
  ret void, !insn.addr !14
}

define i32* @function_cf8(i32* %dest, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_cf8:
  %0 = call i32* @memcpy(i32* %dest, i32* %src, i32 %n), !insn.addr !15
  ret i32* %0, !insn.addr !15
}

define i32 @function_d04(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_d04:
  %0 = call i32 @__atomic_fetch_add_4(i32 %arg1, i32 %arg2, i32 %arg3), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i32 @function_d10(i32 %key, i32 %size, i32 %shmflg) local_unnamed_addr {
dec_label_pc_d10:
  %0 = call i32 @shmget(i32 %key, i32 %size, i32 %shmflg), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define void (i32)* @function_d1c(i32 %sig, void (i32)* %handler) local_unnamed_addr {
dec_label_pc_d1c:
  %0 = call void (i32)* @signal(i32 %sig, void (i32)* %handler), !insn.addr !18
  ret void (i32)* %0, !insn.addr !18
}

define i32 @function_d28(i32* %s1, i32* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_d28:
  %0 = call i32 @memcmp(i32* %s1, i32* %s2, i32 %n), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @function_d34(i32 %seconds) local_unnamed_addr {
dec_label_pc_d34:
  %0 = call i32 @sleep(i32 %seconds), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define void @function_d40(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_d40:
  call void @rewind(%_IO_FILE* %stream), !insn.addr !21
  ret void, !insn.addr !21
}

define i32 @function_d4c(i32 %seconds) local_unnamed_addr {
dec_label_pc_d4c:
  %0 = call i32 @alarm(i32 %seconds), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define i32 @function_d58(i8* %name) local_unnamed_addr {
dec_label_pc_d58:
  %0 = call i32 @unlink(i8* %name), !insn.addr !23
  ret i32 %0, !insn.addr !23
}

define i32 @function_d64(i32 %stat_loc) local_unnamed_addr {
dec_label_pc_d64:
  %0 = call i32 @wait(i32 %stat_loc), !insn.addr !24
  ret i32 %0, !insn.addr !24
}

define i32* @function_d70(i32 %shmid, i32* %shmaddr, i32 %shmflg) local_unnamed_addr {
dec_label_pc_d70:
  %0 = call i32* @shmat(i32 %shmid, i32* %shmaddr, i32 %shmflg), !insn.addr !25
  ret i32* %0, !insn.addr !25
}

define i32 @function_d7c(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_d7c:
  %0 = call i32 @fwrite(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !26
  ret i32 %0, !insn.addr !26
}

define i32 @function_d88(i32 %useconds) local_unnamed_addr {
dec_label_pc_d88:
  %0 = call i32 @usleep(i32 %useconds), !insn.addr !27
  ret i32 %0, !insn.addr !27
}

define i32 @function_d94(i32 %pid, i32* %stat_loc, i32 %options) local_unnamed_addr {
dec_label_pc_d94:
  %0 = call i32 @waitpid(i32 %pid, i32* %stat_loc, i32 %options), !insn.addr !28
  ret i32 %0, !insn.addr !28
}

define i8* @function_da0(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_da0:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !29
  ret i8* %0, !insn.addr !29
}

define i32 @function_dac(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_dac:
  %0 = call i32 @fread(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream), !insn.addr !30
  ret i32 %0, !insn.addr !30
}

define i32 @function_db8(i32 %shmid, i32 %cmd, %shmid_ds* %buf) local_unnamed_addr {
dec_label_pc_db8:
  %0 = call i32 @shmctl(i32 %shmid, i32 %cmd, %shmid_ds* %buf), !insn.addr !31
  ret i32 %0, !insn.addr !31
}

define i32 @function_dc4(i8* %s) local_unnamed_addr {
dec_label_pc_dc4:
  %0 = call i32 @puts(i8* %s), !insn.addr !32
  ret i32 %0, !insn.addr !32
}

define i32* @function_dd0(i32 %size) local_unnamed_addr {
dec_label_pc_dd0:
  %0 = call i32* @malloc(i32 %size), !insn.addr !33
  ret i32* %0, !insn.addr !33
}

define i32 @function_ddc(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_ddc:
  %0 = call i32 @__atomic_load_4(i32 %arg1, i32 %arg2), !insn.addr !34
  ret i32 %0, !insn.addr !34
}

define void @function_de8() local_unnamed_addr {
dec_label_pc_de8:
  call void @__gmon_start__(), !insn.addr !35
  ret void, !insn.addr !35
}

define i32 @function_df4(i8* %file, %stat* %buf) local_unnamed_addr {
dec_label_pc_df4:
  %0 = call i32 @stat(i8* %file, %stat* %buf), !insn.addr !36
  ret i32 %0, !insn.addr !36
}

define i32 @function_e00(i8* %file, i32 %oflag, ...) local_unnamed_addr {
dec_label_pc_e00:
  %0 = call i32 (i8*, i32, ...) @open(i8* %file, i32 %oflag), !insn.addr !37
  ret i32 %0, !insn.addr !37
}

define i32 @function_e0c(i32 %sysno, ...) local_unnamed_addr {
dec_label_pc_e0c:
  %0 = call i32 (i32, ...) @syscall(i32 %sysno), !insn.addr !38
  ret i32 %0, !insn.addr !38
}

define i32 @function_e18(i32* %s1, i32* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_e18:
  %0 = call i32 @bcmp(i32* %s1, i32* %s2, i32 %n), !insn.addr !39
  ret i32 %0, !insn.addr !39
}

define i32 @function_e24(i8* %s) local_unnamed_addr {
dec_label_pc_e24:
  %0 = call i32 @strlen(i8* %s), !insn.addr !40
  ret i32 %0, !insn.addr !40
}

define i8* @function_e30(i8* %s, i32 %c) local_unnamed_addr {
dec_label_pc_e30:
  %0 = call i8* @strchr(i8* %s, i32 %c), !insn.addr !41
  ret i8* %0, !insn.addr !41
}

define i32 @function_e3c(i32 %arg1, i32* %arg2, i32 %arg3, i32 %arg4, i32 %arg5, i32 %arg6) local_unnamed_addr {
dec_label_pc_e3c:
  %0 = call i32 @__atomic_compare_exchange_4(i32 %arg1, i32* %arg2, i32 %arg3, i32 %arg4, i32 %arg5, i32 %arg6), !insn.addr !42
  ret i32 %0, !insn.addr !42
}

define i32* @function_e48() local_unnamed_addr {
dec_label_pc_e48:
  %0 = call i32* @__errno_location(), !insn.addr !43
  ret i32* %0, !insn.addr !43
}

define i32 @function_e54(i8* %s, i32 %maxlen, i8* %format, ...) local_unnamed_addr {
dec_label_pc_e54:
  %0 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %s, i32 %maxlen, i8* %format), !insn.addr !44
  ret i32 %0, !insn.addr !44
}

define i32 @function_e60(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_e60:
  %0 = call i32 (i8*, i8*, ...) @sscanf(i8* %s, i8* %format), !insn.addr !45
  ret i32 %0, !insn.addr !45
}

define i32 @function_e6c(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_e6c:
  %0 = call i32 @bind(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !46
  ret i32 %0, !insn.addr !46
}

define i32* @function_e78(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_e78:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !47
  ret i32* %0, !insn.addr !47
}

define i8* @function_e84(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_e84:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !48
  ret i8* %0, !insn.addr !48
}

define i32 @function_e90(i32 %fd, i32* %buf, i32 %n) local_unnamed_addr {
dec_label_pc_e90:
  %0 = call i32 @write(i32 %fd, i32* %buf, i32 %n), !insn.addr !49
  ret i32 %0, !insn.addr !49
}

define i32 @function_e9c(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_e9c:
  %0 = call i32 @fileno(%_IO_FILE* %stream), !insn.addr !50
  ret i32 %0, !insn.addr !50
}

define i32 @function_ea8(i32* %shmaddr) local_unnamed_addr {
dec_label_pc_ea8:
  %0 = call i32 @shmdt(i32* %shmaddr), !insn.addr !51
  ret i32 %0, !insn.addr !51
}

define i32 @function_eb4(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_eb4:
  %0 = call i32 @fclose(%_IO_FILE* %stream), !insn.addr !52
  ret i32 %0, !insn.addr !52
}

define i32 @function_ec0([2 x i32] %pipedes) local_unnamed_addr {
dec_label_pc_ec0:
  %0 = call i32 @pipe([2 x i32] %pipedes), !insn.addr !53
  ret i32 %0, !insn.addr !53
}

define i32 @function_ecc(i32* %newthread, i32* %attr, i32* (i32*)* %start_routine, i32* %arg) local_unnamed_addr {
dec_label_pc_ecc:
  %0 = call i32 @pthread_create(i32* %newthread, i32* %attr, i32* (i32*)* %start_routine, i32* %arg), !insn.addr !54
  ret i32 %0, !insn.addr !54
}

define i32 @function_ed8() local_unnamed_addr {
dec_label_pc_ed8:
  %0 = call i32 @fork(), !insn.addr !55
  ret i32 %0, !insn.addr !55
}

define i32 @function_ee4(i8* %path, i8* %arg, ...) local_unnamed_addr {
dec_label_pc_ee4:
  %0 = call i32 (i8*, i8*, ...) @execl(i8* %path, i8* %arg), !insn.addr !56
  ret i32 %0, !insn.addr !56
}

define i32 @function_ef0(i32 %fd, i32 %n) local_unnamed_addr {
dec_label_pc_ef0:
  %0 = call i32 @listen(i32 %fd, i32 %n), !insn.addr !57
  ret i32 %0, !insn.addr !57
}

define i32 @function_efc(i8* %pathname, i32 %proj_id) local_unnamed_addr {
dec_label_pc_efc:
  %0 = call i32 @ftok(i8* %pathname, i32 %proj_id), !insn.addr !58
  ret i32 %0, !insn.addr !58
}

define i32 @function_f08(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_f08:
  %0 = call i32 @__atomic_store_4(i32 %arg1, i32 %arg2, i32 %arg3), !insn.addr !59
  ret i32 %0, !insn.addr !59
}

define i32 @function_f14(i32* %cond, i32* %mutex) local_unnamed_addr {
dec_label_pc_f14:
  %0 = call i32 @pthread_cond_wait(i32* %cond, i32* %mutex), !insn.addr !60
  ret i32 %0, !insn.addr !60
}

define i32 @function_f20(i32 %domain, i32 %type, i32 %protocol) local_unnamed_addr {
dec_label_pc_f20:
  %0 = call i32 @socket(i32 %domain, i32 %type, i32 %protocol), !insn.addr !61
  ret i32 %0, !insn.addr !61
}

define i32 @function_f2c(i32 %th, i32** %thread_return) local_unnamed_addr {
dec_label_pc_f2c:
  %0 = call i32 @pthread_join(i32 %th, i32** %thread_return), !insn.addr !62
  ret i32 %0, !insn.addr !62
}

define i32 @function_f38(i32 %th) local_unnamed_addr {
dec_label_pc_f38:
  %0 = call i32 @pthread_cancel(i32 %th), !insn.addr !63
  ret i32 %0, !insn.addr !63
}

define i32 @function_f44(i32* %cond) local_unnamed_addr {
dec_label_pc_f44:
  %0 = call i32 @pthread_cond_signal(i32* %cond), !insn.addr !64
  ret i32 %0, !insn.addr !64
}

define void @function_f50() local_unnamed_addr {
dec_label_pc_f50:
  call void @abort(), !insn.addr !65
  ret void, !insn.addr !65
}

define i32 @function_f5c(i32 %fd) local_unnamed_addr {
dec_label_pc_f5c:
  %0 = call i32 @close(i32 %fd), !insn.addr !66
  ret i32 %0, !insn.addr !66
}

define i32 @_start(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_f70:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !67
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !67
  %2 = call i32 @__libc_start_main(i32 ptrtoint (i32* @global_var_29f0 to i32), i32 %arg2, i8** nonnull %0, void ()* null, void ()* null, void ()* %1), !insn.addr !67
  call void @abort(), !insn.addr !68
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !68
}

define i32 @call_weak_fn() local_unnamed_addr {
dec_label_pc_fb4:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* @global_var_14118, align 4, !insn.addr !69
  %3 = icmp eq i32 %2, 0, !insn.addr !70
  br i1 %3, label %4, label %dec_label_pc_fcc, !insn.addr !71

; <label>:4:                                      ; preds = %dec_label_pc_fb4
  ret i32 %1, !insn.addr !71

dec_label_pc_fcc:                                 ; preds = %dec_label_pc_fb4
  call void @__gmon_start__(), !insn.addr !72
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !72
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_fd8:
  ret i32 82220, !insn.addr !73
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_101c:
  ret i32 82220, !insn.addr !74
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_106c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i8, i8* bitcast (i8** @global_var_14130 to i8*), align 4, !insn.addr !75
  %3 = icmp eq i8 %2, 0, !insn.addr !76
  br i1 %3, label %dec_label_pc_1088, label %4, !insn.addr !77

; <label>:4:                                      ; preds = %dec_label_pc_106c
  ret i32 %1, !insn.addr !77

dec_label_pc_1088:                                ; preds = %dec_label_pc_106c
  %5 = load i32, i32* @global_var_14110, align 4, !insn.addr !78
  %6 = icmp eq i32 %5, 0, !insn.addr !79
  br i1 %6, label %dec_label_pc_10a8, label %dec_label_pc_109c, !insn.addr !80

dec_label_pc_109c:                                ; preds = %dec_label_pc_1088
  %7 = load i32, i32* inttoptr (i32 82216 to i32*), align 8, !insn.addr !81
  %8 = inttoptr i32 %7 to i32*, !insn.addr !82
  call void @__cxa_finalize(i32* %8), !insn.addr !82
  br label %dec_label_pc_10a8, !insn.addr !82

dec_label_pc_10a8:                                ; preds = %dec_label_pc_109c, %dec_label_pc_1088
  %9 = call i32 @deregister_tm_clones(), !insn.addr !83
  store i8 1, i8* bitcast (i8** @global_var_14130 to i8*), align 4, !insn.addr !84
  ret i32 %9, !insn.addr !85
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_10d4:
  %0 = call i32 @register_tm_clones(), !insn.addr !86
  ret i32 %0, !insn.addr !86
}

define i32 @param_strcpy() local_unnamed_addr {
dec_label_pc_10d8:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = inttoptr i32 %2 to i8*, !insn.addr !87
  %4 = inttoptr i32 %1 to i8*, !insn.addr !87
  %5 = call i8* @strcpy(i8* %3, i8* %4), !insn.addr !87
  %6 = call i32 @strlen(i8* %5), !insn.addr !88
  ret i32 %6, !insn.addr !88

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @call_strcpy() local_unnamed_addr {
dec_label_pc_10e8:
  %stack_var_-40 = alloca i8*, align 4
  store i8* inttoptr (i32 1819043144 to i8*), i8** %stack_var_-40, align 4, !insn.addr !89
  %0 = bitcast i8** %stack_var_-40 to i8*, !insn.addr !90
  %1 = call i32 @strlen(i8* nonnull %0), !insn.addr !90
  ret i32 %1, !insn.addr !91

; uselistorder directives
  uselistorder i8** %stack_var_-40, { 1, 0 }
}

define i32 @param_strcmp() local_unnamed_addr {
dec_label_pc_1124:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = inttoptr i32 %2 to i8*, !insn.addr !92
  %4 = inttoptr i32 %1 to i8*, !insn.addr !92
  %5 = call i32 @strcmp(i8* %3, i8* %4), !insn.addr !92
  %6 = icmp ne i32 %5, 0, !insn.addr !93
  %spec.select = sext i1 %6 to i32
  %7 = icmp sgt i32 %5, 0, !insn.addr !94
  %spec.store.select = select i1 %7, i32 1, i32 %spec.select
  ret i32 %spec.store.select, !insn.addr !95

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @call_strcmp() local_unnamed_addr {
dec_label_pc_114c:
  ret i32 0, !insn.addr !96
}

define i32 @param_strlen() local_unnamed_addr {
dec_label_pc_1154:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i8*, !insn.addr !97
  %3 = call i32 @strlen(i8* %2), !insn.addr !97
  ret i32 %3, !insn.addr !97
}

define i32 @call_strlen() local_unnamed_addr {
dec_label_pc_1158:
  ret i32 12, !insn.addr !98
}

define i32 @param_memcpy(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1160:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !99
  %1 = inttoptr i32 %arg2 to i32*, !insn.addr !99
  %2 = call i32* @memcpy(i32* %0, i32* %1, i32 %arg3), !insn.addr !99
  ret i32 %arg3, !insn.addr !100
}

define i32 @call_memcpy() local_unnamed_addr {
dec_label_pc_1178:
  ret i32 90, !insn.addr !101
}

define i32 @param_memcmp() local_unnamed_addr {
dec_label_pc_1180:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = inttoptr i32 %3 to i32*, !insn.addr !102
  %5 = inttoptr i32 %2 to i32*, !insn.addr !102
  %6 = call i32 @memcmp(i32* %4, i32* %5, i32 %1), !insn.addr !102
  %7 = icmp ne i32 %6, 0, !insn.addr !103
  %spec.select = sext i1 %7 to i32
  %8 = icmp sgt i32 %6, 0, !insn.addr !104
  %spec.store.select = select i1 %8, i32 1, i32 %spec.select
  ret i32 %spec.store.select, !insn.addr !105

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
}

define i32 @call_memcmp() local_unnamed_addr {
dec_label_pc_11a8:
  %0 = call i32 @memcmp(i32* inttoptr (i32 add (i32 ptrtoint (i32* @global_var_191c to i32), i32 4544) to i32*), i32* nonnull @global_var_2ad0, i32 12), !insn.addr !106
  %1 = icmp ne i32 %0, 0, !insn.addr !107
  %spec.select1 = sext i1 %1 to i32
  %2 = icmp sgt i32 %0, 0, !insn.addr !108
  %r5.1 = select i1 %2, i32 1, i32 %spec.select1
  %3 = call i32 @memcmp(i32* inttoptr (i32 add (i32 ptrtoint (i32* @global_var_191c to i32), i32 4544) to i32*), i32* inttoptr (i32 add (i32 ptrtoint (i32* @global_var_191c to i32), i32 4544) to i32*), i32 12), !insn.addr !109
  %4 = icmp ne i32 %3, 0, !insn.addr !110
  %spec.select = sext i1 %4 to i32
  %5 = icmp sgt i32 %3, 0, !insn.addr !111
  %spec.select2 = select i1 %5, i32 1, i32 %spec.select
  %6 = add nsw i32 %spec.select2, %r5.1, !insn.addr !112
  ret i32 %6, !insn.addr !113
}

define i32 @param_printf(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1218:
  %0 = inttoptr i32 %arg2 to i8*, !insn.addr !114
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_2ae8, i32 0, i32 0), i32 %arg1, i8* %0), !insn.addr !114
  ret i32 %1, !insn.addr !114
}

define i32 @call_printf() local_unnamed_addr {
dec_label_pc_1230:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_2ae8, i32 0, i32 0), i32 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_2afd, i32 0, i32 0)), !insn.addr !115
  ret i32 %0, !insn.addr !115
}

define i32 @param_scanf() local_unnamed_addr {
dec_label_pc_1250:
  %0 = alloca i32
  %r1.0.reg2mem = alloca i32, !insn.addr !116
  %1 = load i32, i32* %0
  %stack_var_-12 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  %2 = inttoptr i32 %1 to i8*, !insn.addr !117
  %3 = call i32 (i8*, i8*, ...) @sscanf(i8* %2, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_2b02, i32 0, i32 0), i32* nonnull %stack_var_-12, i32* nonnull %stack_var_-16), !insn.addr !117
  %4 = icmp eq i32 %3, 2, !insn.addr !118
  store i32 -1, i32* %r1.0.reg2mem, !insn.addr !119
  br i1 %4, label %5, label %9, !insn.addr !119

; <label>:5:                                      ; preds = %dec_label_pc_1250
  %6 = load i32, i32* %stack_var_-16, align 4, !insn.addr !120
  %7 = load i32, i32* %stack_var_-12, align 4, !insn.addr !121
  %8 = add i32 %7, %6, !insn.addr !119
  store i32 %8, i32* %r1.0.reg2mem, !insn.addr !119
  br label %9, !insn.addr !119

; <label>:9:                                      ; preds = %dec_label_pc_1250, %5
  %r1.0.reload = load i32, i32* %r1.0.reg2mem
  ret i32 %r1.0.reload, !insn.addr !122

; uselistorder directives
  uselistorder i32* %stack_var_-16, { 1, 0 }
  uselistorder i32* %stack_var_-12, { 1, 0 }
  uselistorder i32* %r1.0.reg2mem, { 0, 2, 1 }
  uselistorder label %9, { 1, 0 }
}

define i32 @call_scanf() local_unnamed_addr {
dec_label_pc_1294:
  %r1.0.reg2mem = alloca i32, !insn.addr !123
  %stack_var_-12 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  %0 = call i32 (i8*, i8*, ...) @sscanf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_1854 to i32), i32 4788) to i8*), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_2b02, i32 0, i32 0), i32* nonnull %stack_var_-12, i32* nonnull %stack_var_-16), !insn.addr !124
  %1 = icmp eq i32 %0, 2, !insn.addr !125
  store i32 -1, i32* %r1.0.reg2mem, !insn.addr !126
  br i1 %1, label %2, label %6, !insn.addr !126

; <label>:2:                                      ; preds = %dec_label_pc_1294
  %3 = load i32, i32* %stack_var_-16, align 4, !insn.addr !127
  %4 = load i32, i32* %stack_var_-12, align 4, !insn.addr !128
  %5 = add i32 %4, %3, !insn.addr !126
  store i32 %5, i32* %r1.0.reg2mem, !insn.addr !126
  br label %6, !insn.addr !126

; <label>:6:                                      ; preds = %dec_label_pc_1294, %2
  %r1.0.reload = load i32, i32* %r1.0.reg2mem
  ret i32 %r1.0.reload, !insn.addr !129

; uselistorder directives
  uselistorder i32* %stack_var_-16, { 1, 0 }
  uselistorder i32* %stack_var_-12, { 1, 0 }
  uselistorder i32* %r1.0.reg2mem, { 0, 2, 1 }
  uselistorder label %6, { 1, 0 }
}

define i32 @param_fopen_fclose() local_unnamed_addr {
dec_label_pc_12e4:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i8*, !insn.addr !130
  %3 = call %_IO_FILE* @fopen(i8* %2, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_2b10, i32 0, i32 0)), !insn.addr !130
  %4 = ptrtoint %_IO_FILE* %3 to i32, !insn.addr !130
  %5 = icmp eq %_IO_FILE* %3, null, !insn.addr !131
  %spec.select = select i1 %5, i32 -1, i32 %4
  br i1 %5, label %6, label %dec_label_pc_1304, !insn.addr !132

; <label>:6:                                      ; preds = %dec_label_pc_12e4
  ret i32 %spec.select, !insn.addr !132

dec_label_pc_1304:                                ; preds = %dec_label_pc_12e4
  %7 = inttoptr i32 %spec.select to %_IO_FILE*, !insn.addr !133
  %8 = call i32 @fileno(%_IO_FILE* %7), !insn.addr !133
  %9 = call i32 @fclose(%_IO_FILE* %7), !insn.addr !134
  ret i32 %8, !insn.addr !135

; uselistorder directives
  uselistorder i1 %5, { 1, 0 }
}

define i32 @call_fopen_fclose() local_unnamed_addr {
dec_label_pc_1328:
  %0 = call %_IO_FILE* @fopen(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_2b12, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_2b10, i32 0, i32 0)), !insn.addr !136
  %1 = ptrtoint %_IO_FILE* %0 to i32, !insn.addr !136
  %2 = icmp eq %_IO_FILE* %0, null, !insn.addr !137
  %spec.select1 = select i1 %2, i32 -1, i32 %1
  br i1 %2, label %3, label %dec_label_pc_1350, !insn.addr !138

; <label>:3:                                      ; preds = %dec_label_pc_1328
  ret i32 %spec.select1, !insn.addr !138

dec_label_pc_1350:                                ; preds = %dec_label_pc_1328
  %4 = inttoptr i32 %spec.select1 to %_IO_FILE*, !insn.addr !139
  %5 = call i32 @fileno(%_IO_FILE* %4), !insn.addr !139
  %6 = call i32 @fclose(%_IO_FILE* %4), !insn.addr !140
  %7 = add i32 %5, 1, !insn.addr !141
  %8 = icmp sgt i32 %7, 0, !insn.addr !142
  %spec.select = select i1 %8, i32 42, i32 -1
  ret i32 %spec.select, !insn.addr !143

; uselistorder directives
  uselistorder i1 %2, { 1, 0 }
}

define i32 @param_fread_fwrite(i8* %arg1) local_unnamed_addr {
dec_label_pc_1380:
  %r0.0.reg2mem = alloca i32, !insn.addr !144
  %stack_var_-56 = alloca i32, align 4
  %0 = call %_IO_FILE* @fopen(i8* %arg1, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_2b31, i32 0, i32 0)), !insn.addr !145
  %1 = icmp eq %_IO_FILE* %0, null, !insn.addr !146
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !147
  br i1 %1, label %dec_label_pc_1448, label %dec_label_pc_13a0, !insn.addr !147

dec_label_pc_13a0:                                ; preds = %dec_label_pc_1380
  %2 = call i32 @fwrite(i32* bitcast ([19 x i8]* @global_var_2b1e to i32*), i32 1, i32 18, %_IO_FILE* nonnull %0), !insn.addr !148
  %3 = icmp eq i32 %2, 18, !insn.addr !149
  br i1 %3, label %dec_label_pc_13c4, label %dec_label_pc_143c, !insn.addr !150

dec_label_pc_13c4:                                ; preds = %dec_label_pc_13a0
  call void @rewind(%_IO_FILE* nonnull %0), !insn.addr !151
  %4 = ptrtoint i32* %stack_var_-56 to i32, !insn.addr !152
  %5 = call i32 @fread(i32* nonnull %stack_var_-56, i32 1, i32 18, %_IO_FILE* nonnull %0), !insn.addr !153
  %6 = add i32 %5, %4, !insn.addr !154
  %7 = inttoptr i32 %6 to i8*, !insn.addr !154
  store i8 0, i8* %7, align 1, !insn.addr !154
  %8 = call i32 @fclose(%_IO_FILE* nonnull %0), !insn.addr !155
  %9 = call i32 @unlink(i8* %arg1), !insn.addr !156
  %10 = icmp eq i32 %5, 18, !insn.addr !157
  store i32 -3, i32* %r0.0.reg2mem, !insn.addr !158
  br i1 %10, label %dec_label_pc_140c, label %dec_label_pc_1448, !insn.addr !158

dec_label_pc_140c:                                ; preds = %dec_label_pc_13c4
  %11 = call i32 @bcmp(i32* nonnull %stack_var_-56, i32* bitcast ([19 x i8]* @global_var_2b1e to i32*), i32 19), !insn.addr !159
  %12 = icmp eq i32 %11, 0, !insn.addr !160
  %spec.select = select i1 %12, i32 42, i32 -3
  store i32 %spec.select, i32* %r0.0.reg2mem, !insn.addr !161
  br label %dec_label_pc_1448, !insn.addr !161

dec_label_pc_143c:                                ; preds = %dec_label_pc_13a0
  %13 = call i32 @fclose(%_IO_FILE* nonnull %0), !insn.addr !162
  store i32 -2, i32* %r0.0.reg2mem, !insn.addr !163
  br label %dec_label_pc_1448, !insn.addr !163

dec_label_pc_1448:                                ; preds = %dec_label_pc_1380, %dec_label_pc_13c4, %dec_label_pc_143c, %dec_label_pc_140c
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !164

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder %_IO_FILE* %0, { 2, 0, 1, 3, 4, 5 }
  uselistorder i32* %r0.0.reg2mem, { 0, 2, 4, 3, 1 }
  uselistorder i32 18, { 2, 0, 3, 1 }
  uselistorder label %dec_label_pc_1448, { 2, 3, 1, 0 }
}

define i32 @call_fread_fwrite() local_unnamed_addr {
dec_label_pc_1460:
  %0 = call i32 @param_fread_fwrite(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_2b34, i32 0, i32 0)), !insn.addr !165
  ret i32 %0, !insn.addr !165
}

define i32 @param_malloc_free(i32 %arg1) local_unnamed_addr {
dec_label_pc_1470:
  %0 = alloca i32
  %r5.1.reg2mem = alloca i32, !insn.addr !166
  %.pre-phi.reg2mem = alloca i32*, !insn.addr !166
  %r3.0.reg2mem = alloca i32, !insn.addr !166
  %r2.0.reg2mem = alloca i32, !insn.addr !166
  %r1.0.reg2mem = alloca i32, !insn.addr !166
  %1 = load i32, i32* %0
  %2 = mul i32 %arg1, 4, !insn.addr !167
  %3 = call i32* @malloc(i32 %2), !insn.addr !168
  %4 = ptrtoint i32* %3 to i32, !insn.addr !168
  %5 = icmp eq i32* %3, null, !insn.addr !169
  %spec.select = select i1 %5, i32 -1, i32 %4
  br i1 %5, label %6, label %dec_label_pc_1490, !insn.addr !170

; <label>:6:                                      ; preds = %dec_label_pc_1470
  ret i32 %spec.select, !insn.addr !170

dec_label_pc_1490:                                ; preds = %dec_label_pc_1470
  %r4.0 = select i1 %5, i32 %1, i32 %arg1
  %7 = icmp eq i32 %r4.0, 0, !insn.addr !171
  store i32 0, i32* %r1.0.reg2mem, !insn.addr !172
  store i32 %4, i32* %r2.0.reg2mem, !insn.addr !172
  store i32 %arg1, i32* %r3.0.reg2mem, !insn.addr !172
  br i1 %7, label %dec_label_pc_1490.dec_label_pc_14bc_crit_edge, label %dec_label_pc_14a4, !insn.addr !172

dec_label_pc_1490.dec_label_pc_14bc_crit_edge:    ; preds = %dec_label_pc_1490
  %.pre = inttoptr i32 %spec.select to i32*, !insn.addr !173
  store i32* %.pre, i32** %.pre-phi.reg2mem
  br label %dec_label_pc_14bc

dec_label_pc_14a4:                                ; preds = %dec_label_pc_1490, %dec_label_pc_14a4
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  %r2.0.reload = load i32, i32* %r2.0.reg2mem
  %r1.0.reload = load i32, i32* %r1.0.reg2mem
  %8 = inttoptr i32 %r2.0.reload to i32*, !insn.addr !174
  store i32 %r1.0.reload, i32* %8, align 4, !insn.addr !174
  %9 = add i32 %r2.0.reload, 4, !insn.addr !174
  %10 = add i32 %r1.0.reload, 10, !insn.addr !175
  %11 = add i32 %r3.0.reload, -1, !insn.addr !176
  %12 = icmp eq i32 %r3.0.reload, 1, !insn.addr !176
  store i32 %10, i32* %r1.0.reg2mem, !insn.addr !177
  store i32 %9, i32* %r2.0.reg2mem, !insn.addr !177
  store i32 %11, i32* %r3.0.reg2mem, !insn.addr !177
  br i1 %12, label %dec_label_pc_14b4, label %dec_label_pc_14a4, !insn.addr !177

dec_label_pc_14b4:                                ; preds = %dec_label_pc_14a4
  %13 = inttoptr i32 %spec.select to i32*
  %14 = load i32, i32* %13, align 4, !insn.addr !178
  store i32* %13, i32** %.pre-phi.reg2mem, !insn.addr !179
  store i32 %14, i32* %r5.1.reg2mem, !insn.addr !179
  br label %dec_label_pc_14bc, !insn.addr !179

dec_label_pc_14bc:                                ; preds = %dec_label_pc_1490.dec_label_pc_14bc_crit_edge, %dec_label_pc_14b4
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %.pre-phi.reload = load i32*, i32** %.pre-phi.reg2mem
  %15 = mul i32 %r4.0, 4, !insn.addr !180
  %16 = add i32 %spec.select, -4, !insn.addr !180
  %17 = add i32 %16, %15, !insn.addr !181
  %18 = inttoptr i32 %17 to i32*, !insn.addr !181
  %19 = load i32, i32* %18, align 4, !insn.addr !181
  call void @free(i32* %.pre-phi.reload), !insn.addr !173
  %20 = add i32 %19, %r5.1.reload, !insn.addr !182
  ret i32 %20, !insn.addr !183

; uselistorder directives
  uselistorder i32 %r1.0.reload, { 1, 0 }
  uselistorder i32 %r2.0.reload, { 1, 0 }
  uselistorder i32 %r3.0.reload, { 1, 0 }
  uselistorder i32 %spec.select, { 2, 3, 0, 1 }
  uselistorder i1 %5, { 0, 2, 1 }
  uselistorder i32* %r1.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r2.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r3.0.reg2mem, { 2, 0, 1 }
  uselistorder i32 %arg1, { 0, 2, 1 }
  uselistorder label %dec_label_pc_14bc, { 1, 0 }
  uselistorder label %dec_label_pc_14a4, { 1, 0 }
}

define i32 @call_malloc_free() local_unnamed_addr {
dec_label_pc_14d4:
  ret i32 90, !insn.addr !184
}

define i32 @param_memset(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_14dc:
  %r6.1.reg2mem = alloca i32, !insn.addr !185
  %r6.0.reg2mem = alloca i32, !insn.addr !185
  %r5.0.reg2mem = alloca i32, !insn.addr !185
  %r4.0.reg2mem = alloca i32, !insn.addr !185
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !186
  %1 = call i32* @memset(i32* %0, i32 0, i32 %arg2), !insn.addr !186
  %2 = icmp eq i32 %arg2, 0, !insn.addr !187
  store i32 %arg2, i32* %r4.0.reg2mem, !insn.addr !188
  store i32 %arg1, i32* %r5.0.reg2mem, !insn.addr !188
  store i32 0, i32* %r6.0.reg2mem, !insn.addr !188
  store i32 0, i32* %r6.1.reg2mem, !insn.addr !188
  br i1 %2, label %dec_label_pc_1514, label %dec_label_pc_1504, !insn.addr !188

dec_label_pc_1504:                                ; preds = %dec_label_pc_14dc, %dec_label_pc_1504
  %r6.0.reload = load i32, i32* %r6.0.reg2mem
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %3 = inttoptr i32 %r5.0.reload to i8*, !insn.addr !189
  %4 = load i8, i8* %3, align 1, !insn.addr !189
  %5 = zext i8 %4 to i32, !insn.addr !189
  %6 = add i32 %r5.0.reload, 1, !insn.addr !189
  %7 = add i32 %r4.0.reload, -1, !insn.addr !190
  %8 = icmp eq i32 %r4.0.reload, 1, !insn.addr !190
  %9 = add i32 %r6.0.reload, %5, !insn.addr !191
  store i32 %7, i32* %r4.0.reg2mem, !insn.addr !192
  store i32 %6, i32* %r5.0.reg2mem, !insn.addr !192
  store i32 %9, i32* %r6.0.reg2mem, !insn.addr !192
  store i32 %9, i32* %r6.1.reg2mem, !insn.addr !192
  br i1 %8, label %dec_label_pc_1514, label %dec_label_pc_1504, !insn.addr !192

dec_label_pc_1514:                                ; preds = %dec_label_pc_1504, %dec_label_pc_14dc
  %r6.1.reload = load i32, i32* %r6.1.reg2mem
  ret i32 %r6.1.reload, !insn.addr !193

; uselistorder directives
  uselistorder i32 %r4.0.reload, { 1, 0 }
  uselistorder i32* %r4.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r6.0.reg2mem, { 2, 0, 1 }
  uselistorder i32 %arg2, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1504, { 1, 0 }
}

define i32 @call_memset() local_unnamed_addr {
dec_label_pc_1520:
  ret i32 0, !insn.addr !194
}

define i32 @param_strchr_strstr(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1528:
  %0 = inttoptr i32 %arg1 to i8*, !insn.addr !195
  %1 = call i8* @strchr(i8* %0, i32 %arg2), !insn.addr !195
  %2 = ptrtoint i8* %1 to i32, !insn.addr !195
  %3 = sub i32 %2, %arg1, !insn.addr !196
  %4 = icmp eq i8* %1, null, !insn.addr !197
  %spec.select1 = select i1 %4, i32 -1, i32 %3
  %5 = inttoptr i32 %arg3 to i8*, !insn.addr !198
  %6 = call i8* @strstr(i8* %0, i8* %5), !insn.addr !198
  %7 = ptrtoint i8* %6 to i32, !insn.addr !198
  %8 = sub i32 %7, %arg1, !insn.addr !199
  %9 = icmp eq i8* %6, null, !insn.addr !200
  %spec.select = select i1 %9, i32 -1, i32 %8
  %10 = add i32 %spec.select, %spec.select1, !insn.addr !201
  ret i32 %10, !insn.addr !202
}

define i32 @call_strchr_strstr() local_unnamed_addr {
dec_label_pc_1568:
  ret i32 15, !insn.addr !203
}

define i32 @test_standard_library_functions() local_unnamed_addr {
dec_label_pc_1570:
  %stack_var_-52 = alloca i32, align 4
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_2e36 to i8*)), !insn.addr !204
  store i32 1819043144, i32* %stack_var_-52, align 4, !insn.addr !205
  %1 = bitcast i32* %stack_var_-52 to i8*, !insn.addr !206
  %2 = call i32 @strlen(i8* nonnull %1), !insn.addr !206
  %3 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2b4b to i8*)), !insn.addr !207
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2b66 to i8*)), !insn.addr !208
  %5 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2b81 to i8*)), !insn.addr !209
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2b9d to i8*)), !insn.addr !210
  %7 = call i32 @memcmp(i32* nonnull @global_var_2adc, i32* inttoptr (i32 add (i32 ptrtoint (i32* @global_var_14d4 to i32), i32 5628) to i32*), i32 12), !insn.addr !211
  %8 = call i32 @memcmp(i32* nonnull @global_var_2adc, i32* nonnull @global_var_2adc, i32 12), !insn.addr !212
  %9 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2bb9 to i8*)), !insn.addr !213
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_2ae8, i32 0, i32 0), i32 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_2afd, i32 0, i32 0)), !insn.addr !214
  %11 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2bd5 to i8*)), !insn.addr !215
  %12 = call i32 (i8*, i8*, ...) @sscanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_2b08, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_2b02, i32 0, i32 0)), !insn.addr !216
  %13 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2bf1 to i8*)), !insn.addr !217
  %14 = call %_IO_FILE* @fopen(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_2b12, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_2b10, i32 0, i32 0)), !insn.addr !218
  %15 = icmp eq %_IO_FILE* %14, null, !insn.addr !219
  br i1 %15, label %dec_label_pc_16f0, label %dec_label_pc_16d0, !insn.addr !220

dec_label_pc_16d0:                                ; preds = %dec_label_pc_1570
  %16 = call i32 @fileno(%_IO_FILE* nonnull %14), !insn.addr !221
  %17 = call i32 @fclose(%_IO_FILE* nonnull %14), !insn.addr !222
  br label %dec_label_pc_16f0, !insn.addr !223

dec_label_pc_16f0:                                ; preds = %dec_label_pc_16d0, %dec_label_pc_1570
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2c0e to i8*)), !insn.addr !224
  %19 = call i32 @param_fread_fwrite(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_2b34, i32 0, i32 0)), !insn.addr !225
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2c2a to i8*)), !insn.addr !226
  %21 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2c46 to i8*)), !insn.addr !227
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2c62 to i8*)), !insn.addr !228
  %23 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2c7d to i8*)), !insn.addr !229
  ret i32 %23, !insn.addr !230

; uselistorder directives
  uselistorder i32 (i8*)* @param_fread_fwrite, { 1, 0 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 4, 3, 2, 1, 0, 5 }
  uselistorder i32 (%_IO_FILE*)* @fileno, { 2, 1, 0, 3 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 3, 2, 1, 0, 4 }
  uselistorder i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_2b10, i32 0, i32 0), { 2, 1, 0 }
  uselistorder i32 (i8*, i8*, ...)* @sscanf, { 2, 1, 0, 3 }
  uselistorder i32 (i32*, i32*, i32)* @memcmp, { 4, 3, 2, 1, 0, 5 }
}

define i32 @param_linux_syscall(i32 %arg1) local_unnamed_addr {
dec_label_pc_17b8:
  %r4.0.reg2mem = alloca i32, !insn.addr !231
  %0 = call i32 (i32, ...) @syscall(i32 5), !insn.addr !232
  %1 = add i32 %0, 1, !insn.addr !233
  %2 = icmp slt i32 %1, 1, !insn.addr !234
  br i1 %2, label %dec_label_pc_17e8, label %dec_label_pc_17d4, !insn.addr !234

dec_label_pc_17d4:                                ; preds = %dec_label_pc_17b8
  %3 = call i32 (i32, ...) @syscall(i32 6), !insn.addr !235
  store i32 %0, i32* %r4.0.reg2mem, !insn.addr !236
  br label %dec_label_pc_17f4, !insn.addr !236

dec_label_pc_17e8:                                ; preds = %dec_label_pc_17b8
  %4 = call i32* @__errno_location(), !insn.addr !237
  %5 = load i32, i32* %4, align 4, !insn.addr !238
  %6 = sub i32 0, %5, !insn.addr !239
  store i32 %6, i32* %r4.0.reg2mem, !insn.addr !239
  br label %dec_label_pc_17f4, !insn.addr !239

dec_label_pc_17f4:                                ; preds = %dec_label_pc_17e8, %dec_label_pc_17d4
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !240

; uselistorder directives
  uselistorder i32* %r4.0.reg2mem, { 0, 2, 1 }
}

define i32 @call_linux_syscall() local_unnamed_addr {
dec_label_pc_1800:
  %.pre-phi.reg2mem = alloca i32, !insn.addr !241
  %0 = call i32 (i32, ...) @syscall(i32 5), !insn.addr !242
  %1 = add i32 %0, 1
  %2 = icmp slt i32 %1, 1, !insn.addr !243
  br i1 %2, label %dec_label_pc_1834, label %dec_label_pc_1820, !insn.addr !243

dec_label_pc_1820:                                ; preds = %dec_label_pc_1800
  %3 = call i32 (i32, ...) @syscall(i32 6), !insn.addr !244
  store i32 %1, i32* %.pre-phi.reg2mem, !insn.addr !245
  br label %dec_label_pc_1840, !insn.addr !245

dec_label_pc_1834:                                ; preds = %dec_label_pc_1800
  %4 = call i32* @__errno_location(), !insn.addr !246
  %5 = load i32, i32* %4, align 4, !insn.addr !247
  %.pre = sub i32 1, %5, !insn.addr !248
  store i32 %.pre, i32* %.pre-phi.reg2mem, !insn.addr !249
  br label %dec_label_pc_1840, !insn.addr !249

dec_label_pc_1840:                                ; preds = %dec_label_pc_1834, %dec_label_pc_1820
  %.pre-phi.reload = load i32, i32* %.pre-phi.reg2mem
  %6 = icmp sgt i32 %.pre-phi.reload, 0, !insn.addr !250
  %spec.store.select = select i1 %6, i32 42, i32 -1
  ret i32 %spec.store.select, !insn.addr !251

; uselistorder directives
  uselistorder i32* %.pre-phi.reg2mem, { 0, 2, 1 }
}

define i32 @param_win32_api() local_unnamed_addr {
dec_label_pc_1858:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-96 = alloca i32, align 4
  %3 = inttoptr i32 %1 to i8*, !insn.addr !252
  %4 = bitcast i32* %stack_var_-96 to %stat*, !insn.addr !252
  %5 = call i32 @stat(i8* %3, %stat* nonnull %4), !insn.addr !252
  %6 = icmp sgt i32 %2, 0, !insn.addr !253
  %spec.select = select i1 %6, i32 42, i32 -2
  %7 = add i32 %5, 1, !insn.addr !254
  %8 = icmp slt i32 %7, 1, !insn.addr !255
  %spec.store.select = select i1 %8, i32 -1, i32 %spec.select
  ret i32 %spec.store.select, !insn.addr !256

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @call_win32_api() local_unnamed_addr {
dec_label_pc_1890:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-96 = alloca i32, align 4
  %2 = bitcast i32* %stack_var_-96 to %stat*, !insn.addr !257
  %3 = call i32 @stat(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_2b12, i32 0, i32 0), %stat* nonnull %2), !insn.addr !257
  %4 = icmp sgt i32 %1, 0, !insn.addr !258
  %spec.select = select i1 %4, i32 42, i32 -2
  %5 = add i32 %3, 1, !insn.addr !259
  %6 = icmp slt i32 %5, 1, !insn.addr !260
  %spec.store.select = select i1 %6, i32 -1, i32 %spec.select
  ret i32 %spec.store.select, !insn.addr !261
}

define i32 @param_fork_exec(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_18d4:
  %r0.1.reg2mem = alloca i32, !insn.addr !262
  %stack_var_-20 = alloca i32, align 4
  %0 = call i32 @fork(), !insn.addr !263
  %1 = icmp slt i32 %0, 0, !insn.addr !264
  store i32 -1, i32* %r0.1.reg2mem, !insn.addr !265
  br i1 %1, label %dec_label_pc_192c, label %dec_label_pc_18f0, !insn.addr !265

dec_label_pc_18f0:                                ; preds = %dec_label_pc_18d4
  %2 = icmp eq i32 %0, 0, !insn.addr !264
  br i1 %2, label %dec_label_pc_1938, label %dec_label_pc_18f4, !insn.addr !266

dec_label_pc_18f4:                                ; preds = %dec_label_pc_18f0
  %3 = call i32 @waitpid(i32 %0, i32* nonnull %stack_var_-20, i32 0), !insn.addr !267
  %4 = icmp slt i32 %3, 0, !insn.addr !268
  store i32 -2, i32* %r0.1.reg2mem, !insn.addr !269
  br i1 %4, label %dec_label_pc_192c, label %dec_label_pc_1908, !insn.addr !269

dec_label_pc_1908:                                ; preds = %dec_label_pc_18f4
  %5 = load i32, i32* %stack_var_-20, align 4, !insn.addr !270
  %6 = urem i32 %5, 128, !insn.addr !271
  %7 = icmp eq i32 %6, 0, !insn.addr !271
  store i32 -3, i32* %r0.1.reg2mem, !insn.addr !272
  br i1 %7, label %8, label %dec_label_pc_192c, !insn.addr !272

; <label>:8:                                      ; preds = %dec_label_pc_1908
  %9 = udiv i32 %5, 256, !insn.addr !272
  %10 = urem i32 %9, 256, !insn.addr !272
  store i32 %10, i32* %r0.1.reg2mem, !insn.addr !272
  br label %dec_label_pc_192c, !insn.addr !272

dec_label_pc_192c:                                ; preds = %dec_label_pc_18f4, %dec_label_pc_18d4, %8, %dec_label_pc_1908
  %r0.1.reload = load i32, i32* %r0.1.reg2mem
  ret i32 %r0.1.reload, !insn.addr !273

dec_label_pc_1938:                                ; preds = %dec_label_pc_18f0
  %11 = inttoptr i32 %arg1 to i8*, !insn.addr !274
  %12 = call i32 (i8*, i8*, ...) @execl(i8* %11, i8* %11), !insn.addr !274
  call void @_exit(i32 127), !insn.addr !275
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !275

; uselistorder directives
  uselistorder i32* %stack_var_-20, { 1, 0 }
  uselistorder i32* %r0.1.reg2mem, { 0, 4, 3, 1, 2 }
  uselistorder i32 256, { 1, 0 }
  uselistorder label %dec_label_pc_192c, { 2, 3, 0, 1 }
}

define i32 @call_fork_exec() local_unnamed_addr {
dec_label_pc_1954:
  %r4.0.reg2mem = alloca i32, !insn.addr !276
  %stack_var_-12 = alloca i32, align 4
  %0 = call i32 @fork(), !insn.addr !277
  %1 = icmp slt i32 %0, 0, !insn.addr !278
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !279
  br i1 %1, label %dec_label_pc_199c, label %dec_label_pc_196c, !insn.addr !279

dec_label_pc_196c:                                ; preds = %dec_label_pc_1954
  %2 = icmp eq i32 %0, 0, !insn.addr !278
  br i1 %2, label %dec_label_pc_19ac, label %dec_label_pc_1970, !insn.addr !280

dec_label_pc_1970:                                ; preds = %dec_label_pc_196c
  %3 = call i32 @waitpid(i32 %0, i32* nonnull %stack_var_-12, i32 0), !insn.addr !281
  %4 = icmp slt i32 %3, 0, !insn.addr !282
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !283
  br i1 %4, label %dec_label_pc_199c, label %dec_label_pc_1984, !insn.addr !283

dec_label_pc_1984:                                ; preds = %dec_label_pc_1970
  %5 = load i32, i32* %stack_var_-12, align 4, !insn.addr !284
  %6 = urem i32 %5, 128, !insn.addr !285
  %7 = icmp eq i32 %6, 0, !insn.addr !285
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !286
  br i1 %7, label %dec_label_pc_1990, label %dec_label_pc_199c, !insn.addr !286

dec_label_pc_1990:                                ; preds = %dec_label_pc_1984
  %8 = and i32 %5, 65280, !insn.addr !287
  %9 = icmp eq i32 %8, 0, !insn.addr !287
  %spec.store.select = select i1 %9, i32 42, i32 -1
  store i32 %spec.store.select, i32* %r4.0.reg2mem, !insn.addr !288
  br label %dec_label_pc_199c, !insn.addr !288

dec_label_pc_199c:                                ; preds = %dec_label_pc_1984, %dec_label_pc_1990, %dec_label_pc_1970, %dec_label_pc_1954
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !289

dec_label_pc_19ac:                                ; preds = %dec_label_pc_196c
  %10 = call i32 (i8*, i8*, ...) @execl(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_2c99, i32 0, i32 0), i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_2c99, i32 0, i32 0)), !insn.addr !290
  call void @_exit(i32 127), !insn.addr !291
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !291

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i32* %stack_var_-12, { 1, 0 }
  uselistorder i32* %r4.0.reg2mem, { 0, 2, 1, 3, 4 }
  uselistorder label %dec_label_pc_199c, { 1, 0, 2, 3 }
}

define i32 @param_pipe_communication() local_unnamed_addr {
dec_label_pc_19d0:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !292
  %1 = load i32, i32* %0
  %stack_var_-24 = alloca i32, align 4
  %stack_var_-56 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-24 to i32, !insn.addr !293
  %3 = insertvalue [2 x i32] undef, i32 %2, 0, !insn.addr !294
  %4 = call i32 @pipe([2 x i32] %3), !insn.addr !294
  %5 = icmp slt i32 %4, 0, !insn.addr !295
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !296
  br i1 %5, label %dec_label_pc_1a4c, label %dec_label_pc_19e8, !insn.addr !296

dec_label_pc_19e8:                                ; preds = %dec_label_pc_19d0
  %6 = call i32 @fork(), !insn.addr !297
  %7 = icmp slt i32 %6, 0, !insn.addr !298
  store i32 -2, i32* %r0.0.reg2mem, !insn.addr !299
  br i1 %7, label %dec_label_pc_1a4c, label %dec_label_pc_19f4, !insn.addr !299

dec_label_pc_19f4:                                ; preds = %dec_label_pc_19e8
  %8 = icmp eq i32 %6, 0, !insn.addr !298
  br i1 %8, label %dec_label_pc_1a58, label %dec_label_pc_19f8, !insn.addr !300

dec_label_pc_19f8:                                ; preds = %dec_label_pc_19f4
  %9 = call i32 @close(i32 %1), !insn.addr !301
  %10 = load i32, i32* %stack_var_-24, align 4, !insn.addr !302
  %11 = ptrtoint i32* %stack_var_-56 to i32, !insn.addr !303
  %12 = call i32 @read(i32 %10, i32* nonnull %stack_var_-56, i32 31), !insn.addr !304
  %13 = add i32 %12, %11, !insn.addr !305
  %14 = inttoptr i32 %13 to i8*, !insn.addr !305
  store i8 0, i8* %14, align 1, !insn.addr !305
  %15 = load i32, i32* %stack_var_-24, align 4, !insn.addr !306
  %16 = call i32 @close(i32 %15), !insn.addr !307
  %17 = call i32 @wait(i32 0), !insn.addr !308
  %18 = icmp sgt i32 %12, 0, !insn.addr !309
  %spec.select = select i1 %18, i32 42, i32 -3
  store i32 %spec.select, i32* %r0.0.reg2mem, !insn.addr !310
  br label %dec_label_pc_1a4c, !insn.addr !310

dec_label_pc_1a4c:                                ; preds = %dec_label_pc_19e8, %dec_label_pc_19d0, %dec_label_pc_19f8
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !311

dec_label_pc_1a58:                                ; preds = %dec_label_pc_19f4
  %19 = load i32, i32* %stack_var_-24, align 4, !insn.addr !312
  %20 = call i32 @close(i32 %19), !insn.addr !313
  %21 = call i32 @write(i32 %1, i32* bitcast ([10 x i8]* @global_var_2ca3 to i32*), i32 9), !insn.addr !314
  %22 = call i32 @close(i32 %1), !insn.addr !315
  call void @_exit(i32 0), !insn.addr !316
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !316

; uselistorder directives
  uselistorder i32 %12, { 1, 0 }
  uselistorder i32* %r0.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder label %dec_label_pc_1a4c, { 2, 0, 1 }
}

define i32 @call_pipe_communication() local_unnamed_addr {
dec_label_pc_1a88:
  %0 = call i32 @param_pipe_communication(), !insn.addr !317
  ret i32 %0, !insn.addr !317
}

define i32 @param_socket_create() local_unnamed_addr {
dec_label_pc_1a8c:
  %r0.0.reg2mem = alloca i32, !insn.addr !318
  %stack_var_-36 = alloca i32, align 4
  %stack_var_-20 = alloca i32, align 4
  %0 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !319
  %1 = icmp slt i32 %0, 0, !insn.addr !320
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !321
  br i1 %1, label %dec_label_pc_1b58, label %dec_label_pc_1ab0, !insn.addr !321

dec_label_pc_1ab0:                                ; preds = %dec_label_pc_1a8c
  store i32 1, i32* %stack_var_-20, align 4, !insn.addr !322
  %2 = call i32 @setsockopt(i32 %0, i32 1, i32 2, i32* nonnull %stack_var_-20, i32 4), !insn.addr !323
  %3 = add i32 %2, 1, !insn.addr !324
  %4 = icmp slt i32 %3, 1, !insn.addr !325
  br i1 %4, label %dec_label_pc_1b3c, label %dec_label_pc_1ae0, !insn.addr !325

dec_label_pc_1ae0:                                ; preds = %dec_label_pc_1ab0
  store i32 2, i32* %stack_var_-36, align 4, !insn.addr !326
  %5 = bitcast i32* %stack_var_-36 to %sockaddr*, !insn.addr !327
  %6 = call i32 @bind(i32 %0, %sockaddr* nonnull %5, i32 16), !insn.addr !327
  %7 = add i32 %6, 1, !insn.addr !328
  %8 = icmp slt i32 %7, 1, !insn.addr !329
  br i1 %8, label %dec_label_pc_1b4c, label %dec_label_pc_1b0c, !insn.addr !329

dec_label_pc_1b0c:                                ; preds = %dec_label_pc_1ae0
  %9 = call i32 @listen(i32 %0, i32 5), !insn.addr !330
  %10 = call i32 @close(i32 %0), !insn.addr !331
  %11 = icmp slt i32 %9, 0, !insn.addr !332
  %spec.select = select i1 %11, i32 -4, i32 42
  store i32 %spec.select, i32* %r0.0.reg2mem, !insn.addr !333
  br label %dec_label_pc_1b58, !insn.addr !333

dec_label_pc_1b3c:                                ; preds = %dec_label_pc_1ab0
  %12 = call i32 @close(i32 %0), !insn.addr !334
  store i32 -2, i32* %r0.0.reg2mem, !insn.addr !335
  br label %dec_label_pc_1b58, !insn.addr !335

dec_label_pc_1b4c:                                ; preds = %dec_label_pc_1ae0
  %13 = call i32 @close(i32 %0), !insn.addr !336
  store i32 -3, i32* %r0.0.reg2mem, !insn.addr !337
  br label %dec_label_pc_1b58, !insn.addr !337

dec_label_pc_1b58:                                ; preds = %dec_label_pc_1a8c, %dec_label_pc_1b4c, %dec_label_pc_1b3c, %dec_label_pc_1b0c
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !338

; uselistorder directives
  uselistorder i32 %0, { 0, 4, 1, 2, 3, 5, 6 }
  uselistorder i32* %r0.0.reg2mem, { 0, 3, 4, 2, 1 }
  uselistorder label %dec_label_pc_1b58, { 1, 2, 3, 0 }
}

define i32 @call_socket_create() local_unnamed_addr {
dec_label_pc_1b64:
  %0 = call i32 @param_socket_create(), !insn.addr !339
  ret i32 %0, !insn.addr !339
}

define i32 @param_shmget_shmat() local_unnamed_addr {
dec_label_pc_1b68:
  %r4.0.reg2mem = alloca i32, !insn.addr !340
  %0 = call i32 (i8*, i32, ...) @open(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_2cad, i32 0, i32 0), i32 66), !insn.addr !341
  %1 = icmp slt i32 %0, 0, !insn.addr !342
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !343
  br i1 %1, label %dec_label_pc_1c2c, label %dec_label_pc_1b90, !insn.addr !343

dec_label_pc_1b90:                                ; preds = %dec_label_pc_1b68
  %2 = call i32 @close(i32 %0), !insn.addr !344
  %3 = call i32 @ftok(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_2cad, i32 0, i32 0), i32 42), !insn.addr !345
  %4 = icmp slt i32 %3, 0, !insn.addr !346
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !347
  br i1 %4, label %dec_label_pc_1c2c, label %dec_label_pc_1bac, !insn.addr !347

dec_label_pc_1bac:                                ; preds = %dec_label_pc_1b90
  %5 = call i32 @shmget(i32 %3, i32 4096, i32 ptrtoint (i32* @global_var_3b6 to i32)), !insn.addr !348
  %6 = icmp slt i32 %5, 0, !insn.addr !349
  store i32 -2, i32* %r4.0.reg2mem, !insn.addr !350
  br i1 %6, label %dec_label_pc_1c2c, label %dec_label_pc_1bc4, !insn.addr !350

dec_label_pc_1bc4:                                ; preds = %dec_label_pc_1bac
  %7 = call i32* @shmat(i32 %5, i32* null, i32 0), !insn.addr !351
  %8 = icmp eq i32* %7, inttoptr (i32 -1 to i32*), !insn.addr !352
  store i32 -3, i32* %r4.0.reg2mem, !insn.addr !353
  br i1 %8, label %dec_label_pc_1c2c, label %dec_label_pc_1bdc, !insn.addr !353

dec_label_pc_1bdc:                                ; preds = %dec_label_pc_1bc4
  %9 = call i32* @memcpy(i32* %7, i32* bitcast ([13 x i8]* @global_var_2ac0 to i32*), i32 13), !insn.addr !354
  %10 = bitcast i32* %7 to i8*, !insn.addr !355
  %11 = call i32 @strlen(i8* %10), !insn.addr !355
  %12 = call i32 @shmdt(i32* %7), !insn.addr !356
  %13 = call i32 @shmctl(i32 %5, i32 0, %shmid_ds* null), !insn.addr !357
  ret i32 %11, !insn.addr !358

dec_label_pc_1c2c:                                ; preds = %dec_label_pc_1bc4, %dec_label_pc_1bac, %dec_label_pc_1b90, %dec_label_pc_1b68
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !359

; uselistorder directives
  uselistorder i32* %7, { 1, 0, 2, 3 }
  uselistorder i32 (i8*)* @strlen, { 4, 3, 2, 1, 0, 5 }
  uselistorder i32* (i32*, i32*, i32)* @memcpy, { 1, 0, 2 }
  uselistorder i32 (i32)* @close, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
}

define i32 @call_shmget_shmat() local_unnamed_addr {
dec_label_pc_1c44:
  %0 = call i32 @param_shmget_shmat(), !insn.addr !360
  %1 = icmp sgt i32 %0, 0, !insn.addr !361
  %spec.select = select i1 %1, i32 42, i32 -1
  ret i32 %spec.select, !insn.addr !362
}

define i32 @param_signal_handling(i32 %arg1) local_unnamed_addr {
dec_label_pc_1c64:
  %.reg2mem = alloca i32, !insn.addr !363
  %r4.1.reg2mem = alloca i32, !insn.addr !363
  %r5.0.reg2mem = alloca i32, !insn.addr !363
  %merge.reg2mem = alloca i32, !insn.addr !363
  %0 = call void (i32)* @signal(i32 10, void (i32)* inttoptr (i32 7640 to void (i32)*)), !insn.addr !364
  %1 = ptrtoint void (i32)* %0 to i32, !insn.addr !364
  %2 = icmp eq void (i32)* %0, inttoptr (i32 -1 to void (i32)*), !insn.addr !365
  store i32 %1, i32* %merge.reg2mem, !insn.addr !366
  br i1 %2, label %dec_label_pc_1da4, label %dec_label_pc_1c88, !insn.addr !366

dec_label_pc_1da4:                                ; preds = %dec_label_pc_1cec, %dec_label_pc_1d5c, %dec_label_pc_1d88, %dec_label_pc_1d0c, %dec_label_pc_1d64, %dec_label_pc_1c88, %dec_label_pc_1c64
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !366

dec_label_pc_1c88:                                ; preds = %dec_label_pc_1c64
  %3 = call void (i32)* @signal(i32 14, void (i32)* inttoptr (i32 7640 to void (i32)*)), !insn.addr !367
  %4 = icmp eq void (i32)* %3, inttoptr (i32 -1 to void (i32)*), !insn.addr !368
  store i32 -2, i32* %merge.reg2mem, !insn.addr !369
  br i1 %4, label %dec_label_pc_1da4, label %dec_label_pc_1ca8, !insn.addr !369

dec_label_pc_1ca8:                                ; preds = %dec_label_pc_1c88
  store i32 0, i32* @global_var_14138, align 4, !insn.addr !370
  %5 = call i32 @raise(i32 10), !insn.addr !371
  %6 = load i32, i32* @global_var_14138, align 4
  %7 = icmp eq i32 %6, 0, !insn.addr !372
  store i32 ptrtoint (i32* @global_var_3e8 to i32), i32* %r5.0.reg2mem, !insn.addr !373
  br i1 %7, label %dec_label_pc_1cd4, label %dec_label_pc_1d0c, !insn.addr !373

dec_label_pc_1cd4:                                ; preds = %dec_label_pc_1ca8, %dec_label_pc_1cec
  %8 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !374
  %9 = load i32, i32* @global_var_14138, align 4
  %10 = icmp eq i32 %9, 0, !insn.addr !375
  br i1 %10, label %dec_label_pc_1cec, label %dec_label_pc_1d0c, !insn.addr !376

dec_label_pc_1cec:                                ; preds = %dec_label_pc_1cd4
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %11 = add i32 %r5.0.reload, -1, !insn.addr !377
  %12 = icmp eq i32 %r5.0.reload, 0, !insn.addr !377
  %13 = icmp ne i1 %12, true, !insn.addr !377
  %14 = icmp eq i32 %r5.0.reload, 1, !insn.addr !377
  %15 = icmp ne i1 %14, true, !insn.addr !378
  %16 = icmp eq i1 %13, %15, !insn.addr !378
  store i32 -3, i32* %merge.reg2mem, !insn.addr !378
  store i32 %11, i32* %r5.0.reg2mem, !insn.addr !378
  br i1 %16, label %dec_label_pc_1cd4, label %dec_label_pc_1da4, !insn.addr !378

dec_label_pc_1d0c:                                ; preds = %dec_label_pc_1cd4, %dec_label_pc_1ca8
  %17 = load i32, i32* @global_var_1413c, align 4, !insn.addr !379
  %18 = icmp eq i32 %17, 10, !insn.addr !380
  store i32 -4, i32* %merge.reg2mem, !insn.addr !381
  br i1 %18, label %dec_label_pc_1d20, label %dec_label_pc_1da4, !insn.addr !381

dec_label_pc_1d20:                                ; preds = %dec_label_pc_1d0c
  store i32 0, i32* @global_var_14138, align 4, !insn.addr !382
  %19 = call i32 @alarm(i32 1), !insn.addr !383
  %20 = load i32, i32* @global_var_14138, align 4, !insn.addr !384
  %21 = icmp eq i32 %20, 0, !insn.addr !385
  store i32 ptrtoint ([5 x i8]* @global_var_7d0 to i32), i32* %r4.1.reg2mem, !insn.addr !386
  store i32 %20, i32* %.reg2mem, !insn.addr !386
  br i1 %21, label %dec_label_pc_1d44, label %dec_label_pc_1d64, !insn.addr !386

dec_label_pc_1d44:                                ; preds = %dec_label_pc_1d20, %dec_label_pc_1d5c
  %22 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !387
  %23 = load i32, i32* @global_var_14138, align 4, !insn.addr !388
  %24 = icmp eq i32 %23, 0, !insn.addr !389
  store i32 %23, i32* %.reg2mem, !insn.addr !390
  br i1 %24, label %dec_label_pc_1d5c, label %dec_label_pc_1d64, !insn.addr !390

dec_label_pc_1d5c:                                ; preds = %dec_label_pc_1d44
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %25 = add i32 %r4.1.reload, -1, !insn.addr !391
  %26 = icmp eq i32 %r4.1.reload, 0, !insn.addr !391
  %27 = icmp ne i1 %26, true, !insn.addr !391
  %28 = icmp eq i32 %r4.1.reload, 1, !insn.addr !391
  %29 = icmp ne i1 %28, true, !insn.addr !392
  %30 = icmp eq i1 %27, %29, !insn.addr !392
  store i32 -5, i32* %merge.reg2mem, !insn.addr !392
  store i32 %25, i32* %r4.1.reg2mem, !insn.addr !392
  br i1 %30, label %dec_label_pc_1d44, label %dec_label_pc_1da4, !insn.addr !392

dec_label_pc_1d64:                                ; preds = %dec_label_pc_1d44, %dec_label_pc_1d20
  %.reload = load i32, i32* %.reg2mem, !insn.addr !393
  %31 = icmp ne i32 %.reload, 0, !insn.addr !394
  %32 = load i32, i32* @global_var_1413c, align 4, !insn.addr !395
  %33 = icmp eq i32 %32, 14, !insn.addr !396
  %or.cond = icmp eq i1 %31, %33
  store i32 -5, i32* %merge.reg2mem, !insn.addr !397
  br i1 %or.cond, label %dec_label_pc_1d88, label %dec_label_pc_1da4, !insn.addr !397

dec_label_pc_1d88:                                ; preds = %dec_label_pc_1d64
  %34 = call void (i32)* @signal(i32 10, void (i32)* null), !insn.addr !398
  %35 = call void (i32)* @signal(i32 14, void (i32)* null), !insn.addr !399
  store i32 42, i32* %merge.reg2mem, !insn.addr !400
  br label %dec_label_pc_1da4, !insn.addr !400

; uselistorder directives
  uselistorder i32 %r4.1.reload, { 2, 0, 1 }
  uselistorder i32 %r5.0.reload, { 2, 0, 1 }
  uselistorder i32* %merge.reg2mem, { 5, 4, 2, 3, 1, 6, 0, 7 }
  uselistorder i32* %r5.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.1.reg2mem, { 2, 0, 1 }
  uselistorder i32 -5, { 1, 0 }
  uselistorder i32 -4, { 0, 2, 1 }
  uselistorder i32 14, { 1, 0, 2 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i32 10, { 0, 3, 1, 2, 4 }
  uselistorder label %dec_label_pc_1d44, { 1, 0 }
  uselistorder label %dec_label_pc_1cd4, { 1, 0 }
  uselistorder label %dec_label_pc_1da4, { 2, 4, 1, 3, 0, 5, 6 }
}

define i32 @signal_handler(i32 %arg1) local_unnamed_addr {
dec_label_pc_1dd8:
  store i32 1, i32* @global_var_14138, align 4, !insn.addr !401
  store i32 %arg1, i32* @global_var_1413c, align 4, !insn.addr !402
  ret i32 %arg1, !insn.addr !403

; uselistorder directives
  uselistorder i32* @global_var_1413c, { 1, 0, 2 }
  uselistorder i32* @global_var_14138, { 1, 3, 4, 0, 5, 6, 2 }
  uselistorder i32 %arg1, { 1, 0 }
}

define i32 @call_signal_handling() local_unnamed_addr {
dec_label_pc_1e00:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @param_signal_handling(i32 %1), !insn.addr !404
  ret i32 %2, !insn.addr !404
}

define i32 @test_system_calls() local_unnamed_addr {
dec_label_pc_1e04:
  %stack_var_-104 = alloca i32, align 4
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_2e5a to i8*)), !insn.addr !405
  %1 = call i32 (i32, ...) @syscall(i32 5), !insn.addr !406
  %2 = add i32 %1, 1, !insn.addr !407
  %3 = icmp slt i32 %2, 1, !insn.addr !408
  br i1 %3, label %dec_label_pc_1e48, label %dec_label_pc_1e34, !insn.addr !408

dec_label_pc_1e34:                                ; preds = %dec_label_pc_1e04
  %4 = call i32 (i32, ...) @syscall(i32 6), !insn.addr !409
  br label %dec_label_pc_1e54, !insn.addr !410

dec_label_pc_1e48:                                ; preds = %dec_label_pc_1e04
  %5 = call i32* @__errno_location(), !insn.addr !411
  br label %dec_label_pc_1e54, !insn.addr !412

dec_label_pc_1e54:                                ; preds = %dec_label_pc_1e48, %dec_label_pc_1e34
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2cbf to i8*)), !insn.addr !413
  %7 = bitcast i32* %stack_var_-104 to %stat*, !insn.addr !414
  %8 = call i32 @stat(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_2b12, i32 0, i32 0), %stat* nonnull %7), !insn.addr !414
  %9 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2cdb to i8*)), !insn.addr !415
  %10 = call i32 @fork(), !insn.addr !416
  %11 = icmp slt i32 %10, 0, !insn.addr !417
  br i1 %11, label %dec_label_pc_1eec, label %dec_label_pc_1eb4, !insn.addr !418

dec_label_pc_1eb4:                                ; preds = %dec_label_pc_1e54
  %12 = icmp eq i32 %10, 0, !insn.addr !417
  br i1 %12, label %dec_label_pc_1f5c, label %dec_label_pc_1eb8, !insn.addr !419

dec_label_pc_1eb8:                                ; preds = %dec_label_pc_1eb4
  %13 = call i32 @waitpid(i32 %10, i32* nonnull %stack_var_-104, i32 0), !insn.addr !420
  br label %dec_label_pc_1eec

dec_label_pc_1eec:                                ; preds = %dec_label_pc_1eb8, %dec_label_pc_1e54
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2cf7 to i8*)), !insn.addr !421
  %15 = call i32 @param_pipe_communication(), !insn.addr !422
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2d13 to i8*)), !insn.addr !423
  %17 = call i32 @param_socket_create(), !insn.addr !424
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2d2f to i8*)), !insn.addr !425
  %19 = call i32 @param_shmget_shmat(), !insn.addr !426
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2d4b to i8*)), !insn.addr !427
  %21 = call i32 @param_signal_handling(i32 %20), !insn.addr !428
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2d67 to i8*)), !insn.addr !429
  ret i32 %22, !insn.addr !430

dec_label_pc_1f5c:                                ; preds = %dec_label_pc_1eb4
  %23 = call i32 (i8*, i8*, ...) @execl(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_2c99, i32 0, i32 0), i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_2c99, i32 0, i32 0)), !insn.addr !431
  call void @_exit(i32 127), !insn.addr !432
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !432

; uselistorder directives
  uselistorder void (i32)* @_exit, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i8*, i8*, ...)* @execl, { 2, 1, 0, 3 }
  uselistorder i32 (i32)* @param_signal_handling, { 1, 0 }
  uselistorder i32 ()* @param_shmget_shmat, { 1, 0 }
  uselistorder i32 ()* @param_socket_create, { 1, 0 }
  uselistorder i32 ()* @param_pipe_communication, { 1, 0 }
  uselistorder i32 (i32, i32*, i32)* @waitpid, { 2, 1, 0, 3 }
  uselistorder i32 ()* @fork, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i8*, %stat*)* @stat, { 2, 1, 0, 3 }
  uselistorder i32* ()* @__errno_location, { 2, 1, 0, 3 }
  uselistorder i32 (i32, ...)* @syscall, { 5, 4, 3, 2, 1, 0, 6 }
}

define i32 @thread_compute(i32 %arg1) local_unnamed_addr {
dec_label_pc_1fa8:
  %0 = mul i32 %arg1, %arg1, !insn.addr !433
  %1 = call i32* @malloc(i32 4), !insn.addr !434
  %2 = ptrtoint i32* %1 to i32, !insn.addr !434
  store i32 %0, i32* %1, align 4, !insn.addr !435
  ret i32 %2, !insn.addr !436

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0 }
}

define i32 @param_pthread_create(i32 %arg1) local_unnamed_addr {
dec_label_pc_1fc8:
  %r4.0.reg2mem = alloca i32, !insn.addr !437
  %stack_var_-20 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  store i32 %arg1, i32* %stack_var_-16, align 4, !insn.addr !438
  %0 = call i32 @pthread_create(i32* nonnull %stack_var_-12, i32* null, i32* (i32*)* bitcast (i32* (i32*)** @global_var_1fa8 to i32* (i32*)*), i32* nonnull %stack_var_-16), !insn.addr !439
  %1 = icmp eq i32 %0, 0, !insn.addr !440
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !441
  br i1 %1, label %dec_label_pc_1ff8, label %dec_label_pc_2010, !insn.addr !441

dec_label_pc_1ff8:                                ; preds = %dec_label_pc_1fc8
  %2 = load i32, i32* %stack_var_-12, align 4, !insn.addr !442
  %3 = bitcast i32* %stack_var_-20 to i32**, !insn.addr !443
  %4 = call i32 @pthread_join(i32 %2, i32** nonnull %3), !insn.addr !443
  %5 = load i32, i32* %stack_var_-20, align 4, !insn.addr !444
  %6 = inttoptr i32 %5 to i32*, !insn.addr !445
  %7 = load i32, i32* %6, align 4, !insn.addr !445
  call void @free(i32* %6), !insn.addr !446
  store i32 %7, i32* %r4.0.reg2mem, !insn.addr !446
  br label %dec_label_pc_2010, !insn.addr !446

dec_label_pc_2010:                                ; preds = %dec_label_pc_1fc8, %dec_label_pc_1ff8
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !447

; uselistorder directives
  uselistorder i32* %stack_var_-12, { 1, 0 }
  uselistorder i32* %stack_var_-20, { 1, 0 }
  uselistorder i32* %r4.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2010, { 1, 0 }
}

define i32 @call_pthread_create() local_unnamed_addr {
dec_label_pc_2024:
  %r4.0.reg2mem = alloca i32, !insn.addr !448
  %stack_var_-20 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  store i32 7, i32* %stack_var_-16, align 4, !insn.addr !449
  %0 = call i32 @pthread_create(i32* nonnull %stack_var_-12, i32* null, i32* (i32*)* bitcast (i32* (i32*)** @global_var_1fa8 to i32* (i32*)*), i32* nonnull %stack_var_-16), !insn.addr !450
  %1 = icmp eq i32 %0, 0, !insn.addr !451
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !452
  br i1 %1, label %dec_label_pc_2058, label %dec_label_pc_2070, !insn.addr !452

dec_label_pc_2058:                                ; preds = %dec_label_pc_2024
  %2 = load i32, i32* %stack_var_-12, align 4, !insn.addr !453
  %3 = bitcast i32* %stack_var_-20 to i32**, !insn.addr !454
  %4 = call i32 @pthread_join(i32 %2, i32** nonnull %3), !insn.addr !454
  %5 = load i32, i32* %stack_var_-20, align 4, !insn.addr !455
  %6 = inttoptr i32 %5 to i32*, !insn.addr !456
  %7 = load i32, i32* %6, align 4, !insn.addr !456
  call void @free(i32* %6), !insn.addr !457
  store i32 %7, i32* %r4.0.reg2mem, !insn.addr !457
  br label %dec_label_pc_2070, !insn.addr !457

dec_label_pc_2070:                                ; preds = %dec_label_pc_2024, %dec_label_pc_2058
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !458

; uselistorder directives
  uselistorder i32* %stack_var_-12, { 1, 0 }
  uselistorder i32* %stack_var_-20, { 1, 0 }
  uselistorder i32* %r4.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2070, { 1, 0 }
}

define i32 @thread_sum(i32 %arg1) local_unnamed_addr {
dec_label_pc_2084:
  %0 = add i32 %arg1, 8, !insn.addr !459
  %1 = inttoptr i32 %0 to i32*, !insn.addr !459
  store i32 0, i32* %1, align 4, !insn.addr !459
  %2 = add i32 %arg1, 4, !insn.addr !460
  %3 = inttoptr i32 %2 to i32*, !insn.addr !460
  %4 = load i32, i32* %3, align 4, !insn.addr !460
  %5 = icmp slt i32 %4, %arg1, !insn.addr !461
  br i1 %5, label %dec_label_pc_20c8, label %dec_label_pc_209c, !insn.addr !461

dec_label_pc_209c:                                ; preds = %dec_label_pc_2084
  %6 = sub i32 0, %arg1
  %7 = sub i32 %6, 1
  %8 = sub i32 %4, %arg1, !insn.addr !462
  %9 = add i32 %4, %7, !insn.addr !463
  %10 = zext i32 %9 to i64, !insn.addr !464
  %11 = zext i32 %8 to i64, !insn.addr !464
  %12 = mul nuw i64 %10, %11, !insn.addr !464
  %13 = trunc i64 %12 to i32, !insn.addr !464
  %14 = add i32 %arg1, 1, !insn.addr !465
  %15 = urem i64 %12, 4294967297
  %16 = icmp ne i64 %15, 0, !insn.addr !466
  %17 = zext i1 %16 to i32, !insn.addr !467
  %18 = and i64 %12, 4294967295, !insn.addr !467
  %19 = sub i32 33, %13, !insn.addr !467
  %20 = zext i32 %19 to i64, !insn.addr !467
  %21 = shl i64 %18, %20, !insn.addr !467
  %22 = sub i32 32, %13, !insn.addr !467
  %23 = shl i32 %17, %22, !insn.addr !467
  %24 = trunc i64 %21 to i32
  %25 = or i32 %23, %24, !insn.addr !467
  %26 = mul i32 %8, %14, !insn.addr !468
  %27 = add i32 %26, %arg1, !insn.addr !468
  %28 = add i32 %27, %25, !insn.addr !469
  store i32 %28, i32* %1, align 4, !insn.addr !470
  br label %dec_label_pc_20c8, !insn.addr !470

dec_label_pc_20c8:                                ; preds = %dec_label_pc_209c, %dec_label_pc_2084
  ret i32 0, !insn.addr !471

; uselistorder directives
  uselistorder i32 %13, { 1, 0 }
  uselistorder i64 %12, { 1, 0, 2 }
  uselistorder i32 %arg1, { 1, 3, 2, 0, 4, 6, 5 }
}

define i32 @param_pthread_join() local_unnamed_addr {
dec_label_pc_20d4:
  %r4.0.reg2mem = alloca i32, !insn.addr !472
  %stack_var_-20 = alloca i32, align 4
  %stack_var_-24 = alloca i32, align 4
  %stack_var_-52 = alloca i32, align 4
  %stack_var_-40 = alloca i32, align 4
  %stack_var_-28 = alloca i32, align 4
  %stack_var_-64 = alloca i32, align 4
  store i32 21, i32* %stack_var_-40, align 4, !insn.addr !473
  store i32 11, i32* %stack_var_-52, align 4, !insn.addr !474
  store i32 1, i32* %stack_var_-64, align 4, !insn.addr !475
  %0 = call i32 @pthread_create(i32* nonnull %stack_var_-28, i32* null, i32* (i32*)* inttoptr (i32 8324 to i32* (i32*)*), i32* nonnull %stack_var_-64), !insn.addr !476
  %1 = icmp eq i32 %0, 0, !insn.addr !477
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !478
  br i1 %1, label %dec_label_pc_2148, label %dec_label_pc_21d8, !insn.addr !478

dec_label_pc_2148:                                ; preds = %dec_label_pc_20d4
  %2 = call i32 @pthread_create(i32* nonnull %stack_var_-24, i32* null, i32* (i32*)* inttoptr (i32 8324 to i32* (i32*)*), i32* nonnull %stack_var_-52), !insn.addr !479
  %3 = icmp eq i32 %2, 0, !insn.addr !480
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !481
  br i1 %3, label %dec_label_pc_2168, label %dec_label_pc_21d8, !insn.addr !481

dec_label_pc_2168:                                ; preds = %dec_label_pc_2148
  %4 = call i32 @pthread_create(i32* nonnull %stack_var_-20, i32* null, i32* (i32*)* inttoptr (i32 8324 to i32* (i32*)*), i32* nonnull %stack_var_-40), !insn.addr !482
  %5 = icmp eq i32 %4, 0, !insn.addr !483
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !484
  br i1 %5, label %dec_label_pc_2188, label %dec_label_pc_21d8, !insn.addr !484

dec_label_pc_2188:                                ; preds = %dec_label_pc_2168
  %6 = load i32, i32* %stack_var_-28, align 4, !insn.addr !485
  %7 = call i32 @pthread_join(i32 %6, i32** null), !insn.addr !486
  %8 = icmp eq i32 %7, 0, !insn.addr !487
  store i32 -2, i32* %r4.0.reg2mem, !insn.addr !488
  br i1 %8, label %dec_label_pc_21a0, label %dec_label_pc_21d8, !insn.addr !488

dec_label_pc_21a0:                                ; preds = %dec_label_pc_2188
  %9 = load i32, i32* %stack_var_-24, align 4, !insn.addr !489
  %10 = call i32 @pthread_join(i32 %9, i32** null), !insn.addr !490
  %11 = icmp eq i32 %10, 0, !insn.addr !491
  store i32 -2, i32* %r4.0.reg2mem, !insn.addr !492
  br i1 %11, label %dec_label_pc_21b8, label %dec_label_pc_21d8, !insn.addr !492

dec_label_pc_21b8:                                ; preds = %dec_label_pc_21a0
  %12 = load i32, i32* %stack_var_-20, align 4, !insn.addr !493
  %13 = call i32 @pthread_join(i32 %12, i32** null), !insn.addr !494
  %14 = icmp eq i32 %13, 0, !insn.addr !495
  %spec.select = select i1 %14, i32 0, i32 -2
  ret i32 %spec.select

dec_label_pc_21d8:                                ; preds = %dec_label_pc_21a0, %dec_label_pc_2188, %dec_label_pc_2168, %dec_label_pc_2148, %dec_label_pc_20d4
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !496

; uselistorder directives
  uselistorder i32* %stack_var_-28, { 1, 0 }
  uselistorder i32* %stack_var_-24, { 1, 0 }
  uselistorder i32* %stack_var_-20, { 1, 0 }
  uselistorder i32* %r4.0.reg2mem, { 0, 5, 4, 3, 2, 1 }
}

define i32 @call_pthread_join() local_unnamed_addr {
dec_label_pc_21f4:
  %0 = call i32 @param_pthread_join(), !insn.addr !497
  ret i32 %0, !insn.addr !497
}

define i32 @thread_increment(i32 %arg1) local_unnamed_addr {
dec_label_pc_21f8:
  %r5.0.reg2mem = alloca i32, !insn.addr !498
  %0 = icmp slt i32 %arg1, 1, !insn.addr !499
  store i32 %arg1, i32* %r5.0.reg2mem, !insn.addr !499
  br i1 %0, label %dec_label_pc_2248, label %dec_label_pc_2218, !insn.addr !499

dec_label_pc_2218:                                ; preds = %dec_label_pc_21f8, %dec_label_pc_2218
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %1 = call i32 @pthread_mutex_lock(i32* nonnull @global_var_14140), !insn.addr !500
  %2 = load i32, i32* @global_var_14158, align 4, !insn.addr !501
  %3 = add i32 %2, 1, !insn.addr !502
  store i32 %3, i32* @global_var_14158, align 4, !insn.addr !503
  %4 = call i32 @pthread_mutex_unlock(i32* nonnull @global_var_14140), !insn.addr !504
  %5 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !505
  %6 = add i32 %r5.0.reload, -1, !insn.addr !506
  %7 = icmp eq i32 %r5.0.reload, 1, !insn.addr !506
  store i32 %6, i32* %r5.0.reg2mem, !insn.addr !507
  br i1 %7, label %dec_label_pc_2248, label %dec_label_pc_2218, !insn.addr !507

dec_label_pc_2248:                                ; preds = %dec_label_pc_2218, %dec_label_pc_21f8
  ret i32 0, !insn.addr !508

; uselistorder directives
  uselistorder i32 %r5.0.reload, { 1, 0 }
  uselistorder i32* %r5.0.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i32)* @usleep, { 2, 1, 0, 3 }
  uselistorder label %dec_label_pc_2218, { 1, 0 }
}

define i32 @param_mutex_lock(i32 %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_2260:
  %r0.0.reg2mem = alloca i32, !insn.addr !509
  %r5.1.reg2mem = alloca i32, !insn.addr !509
  %r4.1.reg2mem = alloca i32, !insn.addr !509
  %r5.0.reg2mem = alloca i32, !insn.addr !509
  %r4.0.reg2mem = alloca i32, !insn.addr !509
  %0 = ptrtoint i32* %arg2 to i32
  %stack_var_-36 = alloca i32, align 4
  %1 = mul i32 %arg1, 4, !insn.addr !510
  store i32 %0, i32* %stack_var_-36, align 4, !insn.addr !511
  %2 = call i32* @malloc(i32 %1), !insn.addr !512
  %3 = icmp eq i32* %2, null, !insn.addr !513
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !514
  br i1 %3, label %dec_label_pc_2338, label %dec_label_pc_2280, !insn.addr !514

dec_label_pc_2280:                                ; preds = %dec_label_pc_2260
  %4 = ptrtoint i32* %2 to i32, !insn.addr !512
  store i32 0, i32* @global_var_14158, align 4, !insn.addr !515
  %5 = icmp slt i32 %arg1, 1, !insn.addr !516
  store i32 %arg1, i32* %r4.0.reg2mem, !insn.addr !516
  store i32 %4, i32* %r5.0.reg2mem, !insn.addr !516
  br i1 %5, label %dec_label_pc_22fc, label %dec_label_pc_22b0, !insn.addr !516

dec_label_pc_22b0:                                ; preds = %dec_label_pc_2280, %dec_label_pc_22cc
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %6 = inttoptr i32 %r5.0.reload to i32*, !insn.addr !517
  %7 = call i32 @pthread_create(i32* %6, i32* null, i32* (i32*)* inttoptr (i32 8696 to i32* (i32*)*), i32* nonnull %stack_var_-36), !insn.addr !517
  %8 = icmp eq i32 %7, 0, !insn.addr !518
  br i1 %8, label %dec_label_pc_22cc, label %dec_label_pc_232c, !insn.addr !519

dec_label_pc_22cc:                                ; preds = %dec_label_pc_22b0
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %9 = add i32 %r5.0.reload, 4, !insn.addr !520
  %10 = add i32 %r4.0.reload, -1, !insn.addr !521
  %11 = icmp eq i32 %r4.0.reload, 1, !insn.addr !521
  store i32 %10, i32* %r4.0.reg2mem, !insn.addr !522
  store i32 %9, i32* %r5.0.reg2mem, !insn.addr !522
  store i32 %4, i32* %r4.1.reg2mem, !insn.addr !522
  store i32 %arg1, i32* %r5.1.reg2mem, !insn.addr !522
  br i1 %11, label %dec_label_pc_22e8, label %dec_label_pc_22b0, !insn.addr !522

dec_label_pc_22e8:                                ; preds = %dec_label_pc_22cc, %dec_label_pc_22e8
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %12 = inttoptr i32 %r4.1.reload to i32*, !insn.addr !523
  %13 = load i32, i32* %12, align 4, !insn.addr !523
  %14 = add i32 %r4.1.reload, 4, !insn.addr !523
  %15 = call i32 @pthread_join(i32 %13, i32** null), !insn.addr !524
  %16 = add i32 %r5.1.reload, -1, !insn.addr !525
  %17 = icmp eq i32 %r5.1.reload, 1, !insn.addr !525
  store i32 %14, i32* %r4.1.reg2mem, !insn.addr !526
  store i32 %16, i32* %r5.1.reg2mem, !insn.addr !526
  br i1 %17, label %dec_label_pc_22fc, label %dec_label_pc_22e8, !insn.addr !526

dec_label_pc_22fc:                                ; preds = %dec_label_pc_22e8, %dec_label_pc_2280
  call void @free(i32* nonnull %2), !insn.addr !527
  %18 = load i32, i32* %stack_var_-36, align 4, !insn.addr !528
  %19 = load i32, i32* @global_var_14158, align 4, !insn.addr !529
  %20 = mul i32 %18, %arg1, !insn.addr !530
  %21 = icmp eq i32 %19, %20, !insn.addr !531
  %spec.select = select i1 %21, i32 42, i32 -3
  store i32 %spec.select, i32* %r0.0.reg2mem, !insn.addr !532
  br label %dec_label_pc_2338, !insn.addr !532

dec_label_pc_232c:                                ; preds = %dec_label_pc_22b0
  call void @free(i32* nonnull %2), !insn.addr !533
  store i32 -2, i32* %r0.0.reg2mem, !insn.addr !534
  br label %dec_label_pc_2338, !insn.addr !534

dec_label_pc_2338:                                ; preds = %dec_label_pc_2260, %dec_label_pc_232c, %dec_label_pc_22fc
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !535

; uselistorder directives
  uselistorder i32 %r5.1.reload, { 1, 0 }
  uselistorder i32 %r4.0.reload, { 1, 0 }
  uselistorder i32 %r5.0.reload, { 1, 0 }
  uselistorder i32* %2, { 1, 0, 3, 2 }
  uselistorder i32* %stack_var_-36, { 1, 0, 2 }
  uselistorder i32* %r4.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r0.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32* @global_var_14158, { 2, 1, 0, 3 }
  uselistorder i32 %arg1, { 3, 0, 1, 4, 2 }
  uselistorder label %dec_label_pc_2338, { 1, 2, 0 }
  uselistorder label %dec_label_pc_22e8, { 1, 0 }
  uselistorder label %dec_label_pc_22b0, { 1, 0 }
}

define i32 @call_mutex_lock() local_unnamed_addr {
dec_label_pc_2350:
  %0 = call i32 @param_mutex_lock(i32 4, i32* nonnull @global_var_3e8), !insn.addr !536
  ret i32 %0, !insn.addr !536
}

define i32 @consumer_thread() local_unnamed_addr {
dec_label_pc_235c:
  %0 = call i32 @pthread_mutex_lock(i32* nonnull @global_var_1415c), !insn.addr !537
  %1 = load i8, i8* bitcast (i8** @global_var_14174 to i8*), align 4, !insn.addr !538
  %2 = icmp eq i8 %1, 0, !insn.addr !539
  br i1 %2, label %dec_label_pc_2390, label %dec_label_pc_23a8, !insn.addr !540

dec_label_pc_2390:                                ; preds = %dec_label_pc_235c, %dec_label_pc_2390
  %3 = call i32 @pthread_cond_wait(i32* nonnull @global_var_14178, i32* nonnull @global_var_1415c), !insn.addr !541
  %4 = load i8, i8* bitcast (i8** @global_var_14174 to i8*), align 4, !insn.addr !542
  %5 = icmp eq i8 %4, 1, !insn.addr !543
  br i1 %5, label %dec_label_pc_23a8, label %dec_label_pc_2390, !insn.addr !544

dec_label_pc_23a8:                                ; preds = %dec_label_pc_2390, %dec_label_pc_235c
  %6 = load i8, i8* bitcast (i8** @global_var_141a8 to i8*), align 4, !insn.addr !545
  %7 = call i32 @pthread_mutex_unlock(i32* nonnull @global_var_1415c), !insn.addr !546
  %8 = icmp eq i8 %6, 0, !insn.addr !547
  %narrow = select i1 %8, i8 0, i8 42
  %spec.select = zext i8 %narrow to i32
  %9 = call i32* @malloc(i32 4), !insn.addr !548
  %10 = ptrtoint i32* %9 to i32, !insn.addr !548
  store i32 %spec.select, i32* %9, align 4, !insn.addr !549
  ret i32 %10, !insn.addr !550

; uselistorder directives
  uselistorder label %dec_label_pc_2390, { 1, 0 }
}

define i32 @producer_thread() local_unnamed_addr {
dec_label_pc_23f4:
  %0 = call i32 @sleep(i32 1), !insn.addr !551
  %1 = call i32 @pthread_mutex_lock(i32* nonnull @global_var_1415c), !insn.addr !552
  store i8 1, i8* bitcast (i8** @global_var_141a8 to i8*), align 4, !insn.addr !553
  store i8 1, i8* bitcast (i8** @global_var_14174 to i8*), align 4, !insn.addr !554
  %2 = call i32 @pthread_cond_signal(i32* nonnull @global_var_14178), !insn.addr !555
  %3 = call i32 @pthread_mutex_unlock(i32* nonnull @global_var_1415c), !insn.addr !556
  ret i32 0, !insn.addr !557

; uselistorder directives
  uselistorder i32 (i32*)* @pthread_mutex_unlock, { 1, 0, 2, 3 }
  uselistorder i32* @global_var_14178, { 1, 0 }
  uselistorder i32 (i32*)* @pthread_mutex_lock, { 1, 2, 0, 3 }
  uselistorder i32* @global_var_1415c, { 1, 2, 3, 0, 4 }
}

define i32 @param_condition_variable() local_unnamed_addr {
dec_label_pc_245c:
  %r4.0.reg2mem = alloca i32, !insn.addr !558
  %stack_var_-20 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  store i8 0, i8* bitcast (i8** @global_var_14174 to i8*), align 4, !insn.addr !559
  store i8 0, i8* bitcast (i8** @global_var_141a8 to i8*), align 4, !insn.addr !560
  %0 = call i32 @pthread_create(i32* nonnull %stack_var_-16, i32* null, i32* (i32*)* inttoptr (i32 9052 to i32* (i32*)*), i32* null), !insn.addr !561
  %1 = icmp eq i32 %0, 0, !insn.addr !562
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !563
  br i1 %1, label %dec_label_pc_24a4, label %dec_label_pc_24f8, !insn.addr !563

dec_label_pc_24a4:                                ; preds = %dec_label_pc_245c
  %2 = call i32 @pthread_create(i32* nonnull %stack_var_-12, i32* null, i32* (i32*)* inttoptr (i32 9204 to i32* (i32*)*), i32* null), !insn.addr !564
  %3 = icmp eq i32 %2, 0, !insn.addr !565
  %4 = load i32, i32* %stack_var_-16, align 4
  br i1 %3, label %dec_label_pc_24d4, label %dec_label_pc_24c4, !insn.addr !566

dec_label_pc_24c4:                                ; preds = %dec_label_pc_24a4
  %5 = call i32 @pthread_cancel(i32 %4), !insn.addr !567
  store i32 -2, i32* %r4.0.reg2mem, !insn.addr !568
  br label %dec_label_pc_24f8, !insn.addr !568

dec_label_pc_24d4:                                ; preds = %dec_label_pc_24a4
  %6 = bitcast i32* %stack_var_-20 to i32**, !insn.addr !569
  %7 = call i32 @pthread_join(i32 %4, i32** nonnull %6), !insn.addr !569
  %8 = load i32, i32* %stack_var_-12, align 4, !insn.addr !570
  %9 = call i32 @pthread_join(i32 %8, i32** null), !insn.addr !571
  %10 = load i32, i32* %stack_var_-20, align 4, !insn.addr !572
  %11 = inttoptr i32 %10 to i32*, !insn.addr !573
  %12 = load i32, i32* %11, align 4, !insn.addr !573
  call void @free(i32* %11), !insn.addr !574
  store i32 %12, i32* %r4.0.reg2mem, !insn.addr !574
  br label %dec_label_pc_24f8, !insn.addr !574

dec_label_pc_24f8:                                ; preds = %dec_label_pc_245c, %dec_label_pc_24d4, %dec_label_pc_24c4
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !575

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32* %stack_var_-16, { 1, 0 }
  uselistorder i32* %stack_var_-12, { 1, 0 }
  uselistorder i32* %stack_var_-20, { 1, 0 }
  uselistorder i32* %r4.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i8* bitcast (i8** @global_var_14174 to i8*), { 0, 1, 3, 2 }
  uselistorder i8 0, { 1, 2, 0, 3, 4, 5, 6, 7 }
  uselistorder label %dec_label_pc_24f8, { 1, 2, 0 }
}

define i32 @call_condition_variable() local_unnamed_addr {
dec_label_pc_2518:
  %0 = call i32 @param_condition_variable(), !insn.addr !576
  ret i32 %0, !insn.addr !576
}

define i32 @thread_atomic_increment(i32 %arg1) local_unnamed_addr {
dec_label_pc_251c:
  %r7.0.reg2mem = alloca i32, !insn.addr !577
  %stack_var_-28 = alloca i32, align 4
  %0 = icmp slt i32 %arg1, 1, !insn.addr !578
  store i32 0, i32* %r7.0.reg2mem, !insn.addr !578
  br i1 %0, label %dec_label_pc_257c, label %dec_label_pc_2544, !insn.addr !578

dec_label_pc_2544:                                ; preds = %dec_label_pc_251c, %dec_label_pc_2544
  %r7.0.reload = load i32, i32* %r7.0.reg2mem
  %1 = call i32 @__atomic_fetch_add_4(i32 ptrtoint (i32* @global_var_141ac to i32), i32 1, i32 5), !insn.addr !579
  %2 = add i32 %r7.0.reload, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !580
  store i32 %r7.0.reload, i32* %stack_var_-28, align 4, !insn.addr !581
  %3 = call i32 @__atomic_compare_exchange_4(i32 ptrtoint (i32* @global_var_141ac to i32), i32* nonnull %stack_var_-28, i32 %2, i32 5, i32 5, i32 %r7.0.reload), !insn.addr !582
  %4 = add nuw i32 %r7.0.reload, 1, !insn.addr !583
  %5 = icmp eq i32 %4, %arg1, !insn.addr !584
  store i32 %4, i32* %r7.0.reg2mem, !insn.addr !585
  br i1 %5, label %dec_label_pc_257c, label %dec_label_pc_2544, !insn.addr !585

dec_label_pc_257c:                                ; preds = %dec_label_pc_2544, %dec_label_pc_251c
  ret i32 0, !insn.addr !586

; uselistorder directives
  uselistorder i32* %r7.0.reg2mem, { 2, 0, 1 }
  uselistorder i32 ptrtoint (i32* @global_var_3e8 to i32), { 4, 1, 2, 3, 0 }
  uselistorder label %dec_label_pc_2544, { 1, 0 }
}

define i32 @thread_atomic_load_store() local_unnamed_addr {
dec_label_pc_2590:
  %0 = call i32 @__atomic_load_4(i32 ptrtoint (i32* @global_var_141ac to i32), i32 5), !insn.addr !587
  %1 = add i32 %0, 100, !insn.addr !588
  %2 = call i32 @__atomic_store_4(i32 ptrtoint (i32* @global_var_141ac to i32), i32 %1, i32 5), !insn.addr !589
  ret i32 0, !insn.addr !590
}

define i32 @param_atomic_ops(i32 %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_25c8:
  %r0.0.reg2mem = alloca i32, !insn.addr !591
  %r6.0.reg2mem = alloca i32, !insn.addr !591
  %r4.1.reg2mem = alloca i32, !insn.addr !591
  %r5.0.reg2mem = alloca i32, !insn.addr !591
  %r4.0.reg2mem = alloca i32, !insn.addr !591
  %0 = ptrtoint i32* %arg2 to i32
  %stack_var_-36 = alloca i32, align 4
  %stack_var_-40 = alloca i32, align 4
  %1 = mul i32 %arg1, 4, !insn.addr !592
  store i32 %0, i32* %stack_var_-36, align 4, !insn.addr !593
  %2 = call i32* @malloc(i32 %1), !insn.addr !594
  %3 = icmp eq i32* %2, null, !insn.addr !595
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !596
  br i1 %3, label %dec_label_pc_26d0, label %dec_label_pc_25e8, !insn.addr !596

dec_label_pc_25e8:                                ; preds = %dec_label_pc_25c8
  %4 = ptrtoint i32* %2 to i32, !insn.addr !594
  %5 = call i32 @__atomic_store_4(i32 ptrtoint (i32* @global_var_141ac to i32), i32 0, i32 5), !insn.addr !597
  %6 = icmp slt i32 %arg1, 1, !insn.addr !598
  store i32 %4, i32* %r4.0.reg2mem, !insn.addr !598
  store i32 %arg1, i32* %r5.0.reg2mem, !insn.addr !598
  br i1 %6, label %dec_label_pc_2644, label %dec_label_pc_261c, !insn.addr !598

dec_label_pc_261c:                                ; preds = %dec_label_pc_25e8, %dec_label_pc_2638
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %7 = inttoptr i32 %r4.0.reload to i32*, !insn.addr !599
  %8 = call i32 @pthread_create(i32* %7, i32* null, i32* (i32*)* inttoptr (i32 9500 to i32* (i32*)*), i32* nonnull %stack_var_-36), !insn.addr !599
  %9 = icmp eq i32 %8, 0, !insn.addr !600
  br i1 %9, label %dec_label_pc_2638, label %dec_label_pc_26c4, !insn.addr !601

dec_label_pc_2638:                                ; preds = %dec_label_pc_261c
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %10 = add i32 %r4.0.reload, 4, !insn.addr !602
  %11 = add i32 %r5.0.reload, -1, !insn.addr !603
  %12 = icmp eq i32 %r5.0.reload, 1, !insn.addr !603
  store i32 %10, i32* %r4.0.reg2mem, !insn.addr !604
  store i32 %11, i32* %r5.0.reg2mem, !insn.addr !604
  br i1 %12, label %dec_label_pc_2644, label %dec_label_pc_261c, !insn.addr !604

dec_label_pc_2644:                                ; preds = %dec_label_pc_2638, %dec_label_pc_25e8
  %13 = call i32 @pthread_create(i32* nonnull %stack_var_-40, i32* null, i32* (i32*)* inttoptr (i32 9616 to i32* (i32*)*), i32* null), !insn.addr !605
  %14 = icmp eq i32 %13, 0, !insn.addr !606
  br i1 %14, label %dec_label_pc_2664, label %dec_label_pc_2670, !insn.addr !607

dec_label_pc_2664:                                ; preds = %dec_label_pc_2644
  %15 = load i32, i32* %stack_var_-40, align 4, !insn.addr !608
  %16 = call i32 @pthread_join(i32 %15, i32** null), !insn.addr !609
  br label %dec_label_pc_2670, !insn.addr !609

dec_label_pc_2670:                                ; preds = %dec_label_pc_2644, %dec_label_pc_2664
  store i32 %4, i32* %r4.1.reg2mem, !insn.addr !610
  store i32 %arg1, i32* %r6.0.reg2mem, !insn.addr !610
  br i1 %6, label %dec_label_pc_2690, label %dec_label_pc_267c, !insn.addr !610

dec_label_pc_267c:                                ; preds = %dec_label_pc_2670, %dec_label_pc_267c
  %r6.0.reload = load i32, i32* %r6.0.reg2mem
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %17 = inttoptr i32 %r4.1.reload to i32*, !insn.addr !611
  %18 = load i32, i32* %17, align 4, !insn.addr !611
  %19 = add i32 %r4.1.reload, 4, !insn.addr !611
  %20 = call i32 @pthread_join(i32 %18, i32** null), !insn.addr !612
  %21 = add i32 %r6.0.reload, -1, !insn.addr !613
  %22 = icmp eq i32 %r6.0.reload, 1, !insn.addr !613
  store i32 %19, i32* %r4.1.reg2mem, !insn.addr !614
  store i32 %21, i32* %r6.0.reg2mem, !insn.addr !614
  br i1 %22, label %dec_label_pc_2690, label %dec_label_pc_267c, !insn.addr !614

dec_label_pc_2690:                                ; preds = %dec_label_pc_267c, %dec_label_pc_2670
  %23 = call i32 @__atomic_load_4(i32 ptrtoint (i32* @global_var_141ac to i32), i32 5), !insn.addr !615
  call void @free(i32* nonnull %2), !insn.addr !616
  %24 = icmp sgt i32 %23, 0, !insn.addr !617
  %spec.select = select i1 %24, i32 42, i32 -3
  store i32 %spec.select, i32* %r0.0.reg2mem, !insn.addr !618
  br label %dec_label_pc_26d0, !insn.addr !618

dec_label_pc_26c4:                                ; preds = %dec_label_pc_261c
  call void @free(i32* nonnull %2), !insn.addr !619
  store i32 -2, i32* %r0.0.reg2mem, !insn.addr !620
  br label %dec_label_pc_26d0, !insn.addr !620

dec_label_pc_26d0:                                ; preds = %dec_label_pc_25c8, %dec_label_pc_26c4, %dec_label_pc_2690
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !621

; uselistorder directives
  uselistorder i32 %r6.0.reload, { 1, 0 }
  uselistorder i32 %r5.0.reload, { 1, 0 }
  uselistorder i32 %r4.0.reload, { 1, 0 }
  uselistorder i32* %2, { 1, 0, 3, 2 }
  uselistorder i32* %stack_var_-40, { 1, 0 }
  uselistorder i32* %r4.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r6.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r0.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32 (i32, i32, i32)* @__atomic_store_4, { 1, 0, 2 }
  uselistorder i32 5, { 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10 }
  uselistorder i32 ptrtoint (i32* @global_var_141ac to i32), { 2, 3, 4, 5, 1, 0 }
  uselistorder i32 %arg1, { 0, 1, 3, 2 }
  uselistorder label %dec_label_pc_26d0, { 1, 2, 0 }
  uselistorder label %dec_label_pc_267c, { 1, 0 }
  uselistorder label %dec_label_pc_2670, { 1, 0 }
  uselistorder label %dec_label_pc_261c, { 1, 0 }
}

define i32 @call_atomic_ops() local_unnamed_addr {
dec_label_pc_26ec:
  %0 = call i32 @param_atomic_ops(i32 4, i32* nonnull @global_var_1f4), !insn.addr !622
  ret i32 %0, !insn.addr !622
}

define i32 @thread_tls_test(i32 %arg1) local_unnamed_addr {
dec_label_pc_26f8:
  %0 = call i32 @__aeabi_read_tp(), !insn.addr !623
  %1 = add i32 %0, 8, !insn.addr !624
  %2 = inttoptr i32 %1 to i32*, !insn.addr !624
  %3 = load i32, i32* %2, align 4, !insn.addr !624
  %4 = add i32 %3, 50, !insn.addr !625
  store i32 %4, i32* %2, align 4, !insn.addr !626
  %5 = add i32 %0, 12, !insn.addr !627
  %6 = inttoptr i32 %5 to i8*, !insn.addr !628
  %7 = inttoptr i32 %arg1 to i8*, !insn.addr !628
  %8 = call i8* @strncpy(i8* %6, i8* %7, i32 31), !insn.addr !628
  %9 = call i32* @malloc(i32 8), !insn.addr !629
  %10 = ptrtoint i32* %9 to i32, !insn.addr !629
  store i32 %3, i32* %9, align 4, !insn.addr !630
  %11 = add i32 %10, 4, !insn.addr !630
  %12 = inttoptr i32 %11 to i32*, !insn.addr !630
  store i32 %4, i32* %12, align 4, !insn.addr !630
  ret i32 %10, !insn.addr !631

; uselistorder directives
  uselistorder i32 %10, { 1, 0 }
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32 12, { 3, 1, 4, 2, 5, 0, 6 }
  uselistorder i32 8, { 1, 0, 3, 2 }
}

define i32 @param_thread_local_storage(i32 %arg1) local_unnamed_addr {
dec_label_pc_2740:
  %r0.0.reg2mem = alloca i32, !insn.addr !632
  %r5.2.reg2mem = alloca i32, !insn.addr !632
  %sb.1.reg2mem = alloca i32, !insn.addr !632
  %r4.3.reg2mem = alloca i32, !insn.addr !632
  %sl.0.reg2mem = alloca i32, !insn.addr !632
  %sb.0.reg2mem = alloca i32, !insn.addr !632
  %r6.0.reg2mem = alloca i32, !insn.addr !632
  %r5.1.reg2mem = alloca i32, !insn.addr !632
  %r4.2.reg2mem = alloca i32, !insn.addr !632
  %r5.0.reg2mem = alloca i32, !insn.addr !632
  %r4.1.reg2mem = alloca i32, !insn.addr !632
  %r4.0.reg2mem = alloca i32, !insn.addr !632
  %stack_var_-40 = alloca i32, align 4
  %0 = mul i32 %arg1, 4, !insn.addr !633
  %1 = call i32* @malloc(i32 %0), !insn.addr !634
  %2 = call i32* @malloc(i32 %0), !insn.addr !635
  %3 = icmp eq i32* %1, null, !insn.addr !636
  %4 = icmp eq i32* %2, null
  %spec.select1 = or i1 %3, %4
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !637
  br i1 %spec.select1, label %dec_label_pc_28c8, label %dec_label_pc_2778, !insn.addr !637

dec_label_pc_2778:                                ; preds = %dec_label_pc_2740
  %5 = ptrtoint i32* %1 to i32, !insn.addr !634
  %6 = ptrtoint i32* %2 to i32, !insn.addr !635
  %7 = icmp slt i32 %arg1, 1, !insn.addr !638
  store i32 0, i32* %r4.0.reg2mem, !insn.addr !638
  store i32 0, i32* %r4.3.reg2mem, !insn.addr !638
  store i32 0, i32* %sb.1.reg2mem, !insn.addr !638
  br i1 %7, label %dec_label_pc_285c, label %dec_label_pc_278c, !insn.addr !638

dec_label_pc_278c:                                ; preds = %dec_label_pc_2778, %dec_label_pc_278c
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %8 = call i32* @malloc(i32 16), !insn.addr !639
  %9 = ptrtoint i32* %8 to i32, !insn.addr !639
  %10 = mul i32 %r4.0.reload, 4, !insn.addr !640
  %11 = add i32 %10, %6, !insn.addr !640
  %12 = inttoptr i32 %11 to i32*, !insn.addr !640
  store i32 %9, i32* %12, align 4, !insn.addr !640
  %13 = bitcast i32* %8 to i8*, !insn.addr !641
  %14 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %13, i32 16, i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_5f3 to i32), i32 10128) to i8*)), !insn.addr !641
  %15 = add nuw i32 %r4.0.reload, 1, !insn.addr !642
  %16 = icmp eq i32 %15, %arg1, !insn.addr !643
  store i32 %15, i32* %r4.0.reg2mem, !insn.addr !644
  store i32 %5, i32* %r4.1.reg2mem, !insn.addr !644
  store i32 0, i32* %r5.0.reg2mem, !insn.addr !644
  br i1 %16, label %dec_label_pc_27cc, label %dec_label_pc_278c, !insn.addr !644

dec_label_pc_27cc:                                ; preds = %dec_label_pc_278c, %dec_label_pc_27e8
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %17 = mul i32 %r5.0.reload, 4, !insn.addr !645
  %18 = add i32 %17, %6, !insn.addr !645
  %19 = inttoptr i32 %18 to i32*, !insn.addr !645
  %20 = load i32, i32* %19, align 4, !insn.addr !645
  %21 = inttoptr i32 %r4.1.reload to i32*, !insn.addr !646
  %22 = inttoptr i32 %20 to i32*, !insn.addr !646
  %23 = call i32 @pthread_create(i32* %21, i32* null, i32* (i32*)* inttoptr (i32 9976 to i32* (i32*)*), i32* %22), !insn.addr !646
  %24 = icmp eq i32 %23, 0, !insn.addr !647
  %25 = add nuw i32 %r5.0.reload, 1
  store i32 0, i32* %r5.2.reg2mem, !insn.addr !648
  br i1 %24, label %dec_label_pc_27e8, label %dec_label_pc_28a0, !insn.addr !648

dec_label_pc_27e8:                                ; preds = %dec_label_pc_27cc
  %26 = add i32 %r4.1.reload, 4, !insn.addr !649
  %27 = icmp eq i32 %25, %arg1, !insn.addr !650
  store i32 %26, i32* %r4.1.reg2mem, !insn.addr !651
  store i32 %25, i32* %r5.0.reg2mem, !insn.addr !651
  br i1 %27, label %dec_label_pc_2818.preheader, label %dec_label_pc_27cc, !insn.addr !651

dec_label_pc_2818.preheader:                      ; preds = %dec_label_pc_27e8
  %28 = bitcast i32* %stack_var_-40 to i32**, !insn.addr !652
  store i32 0, i32* %r4.2.reg2mem
  store i32 %5, i32* %r5.1.reg2mem
  store i32 %6, i32* %r6.0.reg2mem
  store i32 0, i32* %sb.0.reg2mem
  store i32 %arg1, i32* %sl.0.reg2mem
  br label %dec_label_pc_2818

dec_label_pc_2818:                                ; preds = %dec_label_pc_2818.preheader, %dec_label_pc_2818
  %sl.0.reload = load i32, i32* %sl.0.reg2mem
  %sb.0.reload = load i32, i32* %sb.0.reg2mem
  %r6.0.reload = load i32, i32* %r6.0.reg2mem
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %r4.2.reload = load i32, i32* %r4.2.reg2mem
  %29 = inttoptr i32 %r5.1.reload to i32*, !insn.addr !653
  %30 = load i32, i32* %29, align 4, !insn.addr !653
  %31 = add i32 %r5.1.reload, 4, !insn.addr !653
  %32 = call i32 @pthread_join(i32 %30, i32** nonnull %28), !insn.addr !652
  %33 = load i32, i32* %stack_var_-40, align 4, !insn.addr !654
  %34 = inttoptr i32 %33 to i32*, !insn.addr !655
  %35 = load i32, i32* %34, align 4, !insn.addr !655
  %36 = add i32 %33, 4, !insn.addr !655
  %37 = inttoptr i32 %36 to i32*, !insn.addr !655
  %38 = load i32, i32* %37, align 4, !insn.addr !655
  call void @free(i32* %34), !insn.addr !656
  %39 = inttoptr i32 %r6.0.reload to i32*, !insn.addr !657
  %40 = load i32, i32* %39, align 4, !insn.addr !657
  %41 = add i32 %r6.0.reload, 4, !insn.addr !657
  %42 = inttoptr i32 %40 to i32*, !insn.addr !658
  call void @free(i32* %42), !insn.addr !658
  %43 = add i32 %38, %sb.0.reload, !insn.addr !659
  %44 = add i32 %35, %r4.2.reload, !insn.addr !660
  %45 = add i32 %sl.0.reload, -1, !insn.addr !661
  %46 = icmp eq i32 %sl.0.reload, 1, !insn.addr !661
  store i32 %44, i32* %r4.2.reg2mem, !insn.addr !662
  store i32 %31, i32* %r5.1.reg2mem, !insn.addr !662
  store i32 %41, i32* %r6.0.reg2mem, !insn.addr !662
  store i32 %43, i32* %sb.0.reg2mem, !insn.addr !662
  store i32 %45, i32* %sl.0.reg2mem, !insn.addr !662
  store i32 %44, i32* %r4.3.reg2mem, !insn.addr !662
  store i32 %43, i32* %sb.1.reg2mem, !insn.addr !662
  br i1 %46, label %dec_label_pc_285c, label %dec_label_pc_2818, !insn.addr !662

dec_label_pc_285c:                                ; preds = %dec_label_pc_2818, %dec_label_pc_2778
  %sb.1.reload = load i32, i32* %sb.1.reg2mem
  %r4.3.reload = load i32, i32* %r4.3.reg2mem
  call void @free(i32* %2), !insn.addr !663
  call void @free(i32* %1), !insn.addr !664
  %47 = mul i32 %arg1, 150, !insn.addr !665
  %48 = mul i32 %arg1, 100, !insn.addr !666
  %49 = icmp eq i32 %r4.3.reload, %48
  %50 = icmp eq i32 %sb.1.reload, %47
  %51 = icmp eq i1 %49, %50, !insn.addr !667
  %spec.select = select i1 %51, i32 42, i32 -3
  store i32 %spec.select, i32* %r0.0.reg2mem, !insn.addr !668
  br label %dec_label_pc_28c8, !insn.addr !668

dec_label_pc_28a0:                                ; preds = %dec_label_pc_27cc, %dec_label_pc_28a0
  %r5.2.reload = load i32, i32* %r5.2.reg2mem
  %52 = mul i32 %r5.2.reload, 4, !insn.addr !669
  %53 = add i32 %52, %6, !insn.addr !669
  %54 = inttoptr i32 %53 to i32*, !insn.addr !669
  %55 = load i32, i32* %54, align 4, !insn.addr !669
  %56 = inttoptr i32 %55 to i32*, !insn.addr !670
  call void @free(i32* %56), !insn.addr !670
  %57 = add nuw i32 %r5.2.reload, 1, !insn.addr !671
  %58 = icmp eq i32 %25, %57, !insn.addr !672
  store i32 %57, i32* %r5.2.reg2mem, !insn.addr !673
  br i1 %58, label %dec_label_pc_28b4, label %dec_label_pc_28a0, !insn.addr !673

dec_label_pc_28b4:                                ; preds = %dec_label_pc_28a0
  call void @free(i32* %2), !insn.addr !674
  call void @free(i32* %1), !insn.addr !675
  store i32 -2, i32* %r0.0.reg2mem, !insn.addr !676
  br label %dec_label_pc_28c8, !insn.addr !676

dec_label_pc_28c8:                                ; preds = %dec_label_pc_28b4, %dec_label_pc_285c, %dec_label_pc_2740
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !677

; uselistorder directives
  uselistorder i32 %33, { 1, 0 }
  uselistorder i32 %sl.0.reload, { 1, 0 }
  uselistorder i32 %25, { 1, 0, 2 }
  uselistorder i32 %r4.1.reload, { 1, 0 }
  uselistorder i32 %6, { 1, 0, 2, 3 }
  uselistorder i32* %2, { 1, 0, 3, 2 }
  uselistorder i32* %1, { 1, 0, 3, 2 }
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32* %stack_var_-40, { 1, 0 }
  uselistorder i32* %r4.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r6.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sb.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sl.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.2.reg2mem, { 2, 0, 1 }
  uselistorder i32 -2, { 0, 1, 2, 3, 12, 5, 4, 6, 7, 8, 9, 10, 13, 14, 11 }
  uselistorder i32 -3, { 5, 6, 7, 0, 1, 2, 8, 3, 9, 4 }
  uselistorder i32 42, { 1, 2, 3, 0, 4, 13, 5, 6, 7, 8, 9, 10, 14, 11, 12, 15 }
  uselistorder i32 -1, { 31, 0, 32, 33, 1, 2, 34, 35, 3, 36, 6, 5, 4, 7, 8, 37, 38, 39, 24, 40, 9, 10, 11, 12, 25, 13, 14, 15, 16, 26, 27, 28, 29, 20, 41, 42, 21, 17, 30, 22, 23, 18, 19 }
  uselistorder i32* (i32)* @malloc, { 8, 7, 6, 5, 4, 3, 2, 1, 0, 9 }
  uselistorder i32 %arg1, { 5, 4, 0, 2, 3, 6, 1 }
  uselistorder label %dec_label_pc_28a0, { 1, 0 }
  uselistorder label %dec_label_pc_2818, { 1, 0 }
  uselistorder label %dec_label_pc_27cc, { 1, 0 }
  uselistorder label %dec_label_pc_278c, { 1, 0 }
}

define i32 @call_thread_local_storage() local_unnamed_addr {
dec_label_pc_28dc:
  %0 = call i32 @param_thread_local_storage(i32 4), !insn.addr !678
  ret i32 %0, !insn.addr !678
}

define i32 @test_thread_concurrency() local_unnamed_addr {
dec_label_pc_28e4:
  %stack_var_-20 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  %0 = call i32 @puts(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_57d to i32), i32 10488) to i8*)), !insn.addr !679
  store i32 7, i32* %stack_var_-16, align 4, !insn.addr !680
  %1 = call i32 @pthread_create(i32* nonnull %stack_var_-12, i32* null, i32* (i32*)* bitcast (i32* (i32*)** @global_var_1fa8 to i32* (i32*)*), i32* nonnull %stack_var_-16), !insn.addr !681
  %2 = icmp eq i32 %1, 0, !insn.addr !682
  br i1 %2, label %dec_label_pc_2924, label %dec_label_pc_293c, !insn.addr !683

dec_label_pc_2924:                                ; preds = %dec_label_pc_28e4
  %3 = load i32, i32* %stack_var_-12, align 4, !insn.addr !684
  %4 = bitcast i32* %stack_var_-20 to i32**, !insn.addr !685
  %5 = call i32 @pthread_join(i32 %3, i32** nonnull %4), !insn.addr !685
  %6 = load i32, i32* %stack_var_-20, align 4, !insn.addr !686
  %7 = inttoptr i32 %6 to i32*, !insn.addr !687
  call void @free(i32* %7), !insn.addr !687
  br label %dec_label_pc_293c, !insn.addr !687

dec_label_pc_293c:                                ; preds = %dec_label_pc_28e4, %dec_label_pc_2924
  %8 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_441 to i32), i32 10572) to i8*)), !insn.addr !688
  %9 = call i32 @param_pthread_join(), !insn.addr !689
  %10 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_449 to i32), i32 10592) to i8*)), !insn.addr !690
  %11 = call i32 @param_mutex_lock(i32 4, i32* nonnull @global_var_3e8), !insn.addr !691
  %12 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_44a to i32), i32 10620) to i8*)), !insn.addr !692
  %13 = call i32 @param_condition_variable(), !insn.addr !693
  %14 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_452 to i32), i32 10640) to i8*)), !insn.addr !694
  %15 = call i32 @param_atomic_ops(i32 4, i32* nonnull @global_var_1f4), !insn.addr !695
  %16 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_452 to i32), i32 10668) to i8*)), !insn.addr !696
  %17 = call i32 @param_thread_local_storage(i32 4), !insn.addr !697
  %18 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_456 to i32), i32 10692) to i8*)), !insn.addr !698
  ret i32 %18, !insn.addr !699

; uselistorder directives
  uselistorder i32* %stack_var_-12, { 1, 0 }
  uselistorder i32* %stack_var_-20, { 1, 0 }
  uselistorder i32 (i32)* @param_thread_local_storage, { 1, 0 }
  uselistorder i32 (i32, i32*)* @param_atomic_ops, { 1, 0 }
  uselistorder i32 ()* @param_condition_variable, { 1, 0 }
  uselistorder i32 (i32, i32*)* @param_mutex_lock, { 1, 0 }
  uselistorder i32 4, { 10, 11, 12, 13, 0, 18, 19, 20, 21, 1, 2, 3, 22, 14, 23, 24, 4, 8, 15, 25, 26, 5, 27, 16, 9, 6, 28, 7, 17 }
  uselistorder i32 ()* @param_pthread_join, { 1, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 28 }
  uselistorder void (i32*)* @free, { 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 16 }
  uselistorder i32 (i32, i32**)* @pthread_join, { 3, 5, 1, 0, 2, 9, 11, 8, 6, 4, 10, 7, 12 }
  uselistorder i32 (i32*, i32*, i32* (i32*)*, i32*)* @pthread_create, { 3, 4, 9, 5, 6, 7, 11, 8, 10, 0, 1, 2, 12 }
  uselistorder i32* null, { 1, 3, 0, 2, 5, 6, 7, 4, 8, 9, 10, 11, 13, 12, 14, 15, 16, 17, 18, 19, 20 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
  uselistorder label %dec_label_pc_293c, { 1, 0 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_29f0:
  %0 = call i32 @test_standard_library_functions(), !insn.addr !700
  %1 = call i32 @test_system_calls(), !insn.addr !701
  %2 = call i32 @test_thread_concurrency(), !insn.addr !702
  ret i32 0, !insn.addr !703

; uselistorder directives
  uselistorder i32 0, { 12, 128, 3, 4, 0, 129, 5, 1, 2, 6, 93, 130, 131, 94, 13, 14, 7, 132, 133, 15, 134, 95, 16, 22, 135, 136, 137, 138, 139, 140, 17, 11, 96, 141, 142, 97, 143, 144, 145, 23, 146, 147, 98, 24, 148, 149, 99, 100, 101, 102, 150, 151, 152, 25, 26, 153, 154, 103, 104, 105, 106, 155, 156, 157, 27, 28, 158, 159, 160, 107, 161, 162, 163, 164, 108, 165, 166, 109, 110, 111, 167, 29, 30, 18, 8, 9, 168, 112, 10, 169, 31, 32, 170, 33, 34, 113, 35, 36, 20, 21, 37, 38, 39, 40, 41, 42, 43, 171, 44, 172, 45, 173, 19, 46, 174, 175, 176, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127 }
}

define i32 @__aeabi_read_tp() local_unnamed_addr {
dec_label_pc_2a10:
  %0 = call i32 @function_ffff0fe0(), !insn.addr !704
  ret i32 %0, !insn.addr !704
}

define i32 @_fini(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_2a18:
  ret i32 %arg1, !insn.addr !705
}

declare i32 @pthread_mutex_unlock(i32*) local_unnamed_addr

declare i8* @strstr(i8*, i8*) local_unnamed_addr

declare i32 @raise(i32) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare void @__cxa_finalize(i32*) local_unnamed_addr

declare i32 @setsockopt(i32, i32, i32, i32*, i32) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare %_IO_FILE* @fopen(i8*, i8*) local_unnamed_addr

declare i32 @read(i32, i32*, i32) local_unnamed_addr

declare void @free(i32*) local_unnamed_addr

declare i32 @pthread_mutex_lock(i32*) local_unnamed_addr

declare void @_exit(i32) local_unnamed_addr

declare i32* @memcpy(i32*, i32*, i32) local_unnamed_addr

declare i32 @__atomic_fetch_add_4(i32, i32, i32) local_unnamed_addr

declare i32 @shmget(i32, i32, i32) local_unnamed_addr

declare void (i32)* @signal(i32, void (i32)*) local_unnamed_addr

declare i32 @memcmp(i32*, i32*, i32) local_unnamed_addr

declare i32 @sleep(i32) local_unnamed_addr

declare void @rewind(%_IO_FILE*) local_unnamed_addr

declare i32 @alarm(i32) local_unnamed_addr

declare i32 @unlink(i8*) local_unnamed_addr

declare i32 @wait(i32) local_unnamed_addr

declare i32* @shmat(i32, i32*, i32) local_unnamed_addr

declare i32 @fwrite(i32*, i32, i32, %_IO_FILE*) local_unnamed_addr

declare i32 @usleep(i32) local_unnamed_addr

declare i32 @waitpid(i32, i32*, i32) local_unnamed_addr

declare i8* @strcpy(i8*, i8*) local_unnamed_addr

declare i32 @fread(i32*, i32, i32, %_IO_FILE*) local_unnamed_addr

declare i32 @shmctl(i32, i32, %shmid_ds*) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32* @malloc(i32) local_unnamed_addr

declare i32 @__atomic_load_4(i32, i32) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare i32 @stat(i8*, %stat*) local_unnamed_addr

declare i32 @open(i8*, i32, ...) local_unnamed_addr

declare i32 @syscall(i32, ...) local_unnamed_addr

declare i32 @bcmp(i32*, i32*, i32) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i8* @strchr(i8*, i32) local_unnamed_addr

declare i32 @__atomic_compare_exchange_4(i32, i32*, i32, i32, i32, i32) local_unnamed_addr

declare i32* @__errno_location() local_unnamed_addr

declare i32 @snprintf(i8*, i32, i8*, ...) local_unnamed_addr

declare i32 @sscanf(i8*, i8*, ...) local_unnamed_addr

declare i32 @bind(i32, %sockaddr*, i32) local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

declare i8* @strncpy(i8*, i8*, i32) local_unnamed_addr

declare i32 @write(i32, i32*, i32) local_unnamed_addr

declare i32 @fileno(%_IO_FILE*) local_unnamed_addr

declare i32 @shmdt(i32*) local_unnamed_addr

declare i32 @fclose(%_IO_FILE*) local_unnamed_addr

declare i32 @pipe([2 x i32]) local_unnamed_addr

declare i32 @pthread_create(i32*, i32*, i32* (i32*)*, i32*) local_unnamed_addr

declare i32 @fork() local_unnamed_addr

declare i32 @execl(i8*, i8*, ...) local_unnamed_addr

declare i32 @listen(i32, i32) local_unnamed_addr

declare i32 @ftok(i8*, i32) local_unnamed_addr

declare i32 @__atomic_store_4(i32, i32, i32) local_unnamed_addr

declare i32 @pthread_cond_wait(i32*, i32*) local_unnamed_addr

declare i32 @socket(i32, i32, i32) local_unnamed_addr

declare i32 @pthread_join(i32, i32**) local_unnamed_addr

declare i32 @pthread_cancel(i32) local_unnamed_addr

declare i32 @pthread_cond_signal(i32*) local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @close(i32) local_unnamed_addr

define i32 @function_ffff0fe0() local_unnamed_addr {
dec_label_pc_ffff0fe0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1

; uselistorder directives
  uselistorder i32 1, { 13, 101, 100, 99, 138, 139, 140, 141, 80, 102, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 142, 143, 81, 104, 103, 30, 29, 28, 27, 26, 144, 82, 83, 105, 31, 108, 107, 106, 32, 84, 145, 146, 85, 109, 37, 36, 35, 34, 33, 147, 148, 86, 38, 87, 115, 114, 113, 112, 111, 110, 39, 149, 65, 118, 117, 116, 40, 121, 120, 119, 41, 72, 150, 122, 12, 88, 151, 89, 152, 45, 44, 43, 42, 46, 73, 153, 74, 154, 90, 69, 91, 124, 123, 47, 126, 125, 48, 11, 127, 49, 128, 50, 75, 155, 129, 10, 76, 156, 130, 9, 66, 77, 157, 51, 78, 158, 52, 131, 159, 160, 56, 55, 54, 53, 161, 61, 60, 59, 58, 57, 8, 92, 93, 132, 62, 162, 7, 134, 133, 63, 136, 135, 64, 6, 67, 68, 70, 5, 4, 71, 3, 79, 2, 1, 0, 137, 94, 95, 96, 97, 98 }
}

!0 = !{i64 3136}
!1 = !{i64 3140}
!2 = !{i64 3172}
!3 = !{i64 3184}
!4 = !{i64 3196}
!5 = !{i64 3208}
!6 = !{i64 3220}
!7 = !{i64 3232}
!8 = !{i64 3244}
!9 = !{i64 3256}
!10 = !{i64 3268}
!11 = !{i64 3280}
!12 = !{i64 3292}
!13 = !{i64 3304}
!14 = !{i64 3316}
!15 = !{i64 3328}
!16 = !{i64 3340}
!17 = !{i64 3352}
!18 = !{i64 3364}
!19 = !{i64 3376}
!20 = !{i64 3388}
!21 = !{i64 3400}
!22 = !{i64 3412}
!23 = !{i64 3424}
!24 = !{i64 3436}
!25 = !{i64 3448}
!26 = !{i64 3460}
!27 = !{i64 3472}
!28 = !{i64 3484}
!29 = !{i64 3496}
!30 = !{i64 3508}
!31 = !{i64 3520}
!32 = !{i64 3532}
!33 = !{i64 3544}
!34 = !{i64 3556}
!35 = !{i64 3568}
!36 = !{i64 3580}
!37 = !{i64 3592}
!38 = !{i64 3604}
!39 = !{i64 3616}
!40 = !{i64 3628}
!41 = !{i64 3640}
!42 = !{i64 3652}
!43 = !{i64 3664}
!44 = !{i64 3676}
!45 = !{i64 3688}
!46 = !{i64 3700}
!47 = !{i64 3712}
!48 = !{i64 3724}
!49 = !{i64 3736}
!50 = !{i64 3748}
!51 = !{i64 3760}
!52 = !{i64 3772}
!53 = !{i64 3784}
!54 = !{i64 3796}
!55 = !{i64 3808}
!56 = !{i64 3820}
!57 = !{i64 3832}
!58 = !{i64 3844}
!59 = !{i64 3856}
!60 = !{i64 3868}
!61 = !{i64 3880}
!62 = !{i64 3892}
!63 = !{i64 3904}
!64 = !{i64 3916}
!65 = !{i64 3928}
!66 = !{i64 3940}
!67 = !{i64 4004}
!68 = !{i64 4008}
!69 = !{i64 4032}
!70 = !{i64 4036}
!71 = !{i64 4040}
!72 = !{i64 4044}
!73 = !{i64 4084}
!74 = !{i64 4164}
!75 = !{i64 4216}
!76 = !{i64 4224}
!77 = !{i64 4228}
!78 = !{i64 4240}
!79 = !{i64 4244}
!80 = !{i64 4248}
!81 = !{i64 4256}
!82 = !{i64 4260}
!83 = !{i64 4264}
!84 = !{i64 4280}
!85 = !{i64 4284}
!86 = !{i64 4308}
!87 = !{i64 4316}
!88 = !{i64 4324}
!89 = !{i64 4356}
!90 = !{i64 4364}
!91 = !{i64 4376}
!92 = !{i64 4392}
!93 = !{i64 4396}
!94 = !{i64 4412}
!95 = !{i64 4424}
!96 = !{i64 4432}
!97 = !{i64 4436}
!98 = !{i64 4444}
!99 = !{i64 4456}
!100 = !{i64 4468}
!101 = !{i64 4476}
!102 = !{i64 4484}
!103 = !{i64 4488}
!104 = !{i64 4504}
!105 = !{i64 4516}
!106 = !{i64 4548}
!107 = !{i64 4552}
!108 = !{i64 4584}
!109 = !{i64 4588}
!110 = !{i64 4592}
!111 = !{i64 4608}
!112 = !{i64 4612}
!113 = !{i64 4620}
!114 = !{i64 4648}
!115 = !{i64 4676}
!116 = !{i64 4688}
!117 = !{i64 4712}
!118 = !{i64 4728}
!119 = !{i64 4732}
!120 = !{i64 4720}
!121 = !{i64 4716}
!122 = !{i64 4748}
!123 = !{i64 4756}
!124 = !{i64 4788}
!125 = !{i64 4804}
!126 = !{i64 4808}
!127 = !{i64 4796}
!128 = !{i64 4792}
!129 = !{i64 4824}
!130 = !{i64 4848}
!131 = !{i64 4852}
!132 = !{i64 4864}
!133 = !{i64 4872}
!134 = !{i64 4884}
!135 = !{i64 4896}
!136 = !{i64 4924}
!137 = !{i64 4928}
!138 = !{i64 4940}
!139 = !{i64 4948}
!140 = !{i64 4960}
!141 = !{i64 4968}
!142 = !{i64 4972}
!143 = !{i64 4980}
!144 = !{i64 4992}
!145 = !{i64 5012}
!146 = !{i64 5016}
!147 = !{i64 5020}
!148 = !{i64 5048}
!149 = !{i64 5052}
!150 = !{i64 5056}
!151 = !{i64 5064}
!152 = !{i64 5068}
!153 = !{i64 5088}
!154 = !{i64 5100}
!155 = !{i64 5108}
!156 = !{i64 5116}
!157 = !{i64 5124}
!158 = !{i64 5128}
!159 = !{i64 5148}
!160 = !{i64 5160}
!161 = !{i64 5168}
!162 = !{i64 5184}
!163 = !{i64 5188}
!164 = !{i64 5200}
!165 = !{i64 5224}
!166 = !{i64 5232}
!167 = !{i64 5240}
!168 = !{i64 5244}
!169 = !{i64 5248}
!170 = !{i64 5260}
!171 = !{i64 5264}
!172 = !{i64 5268}
!173 = !{i64 5316}
!174 = !{i64 5284}
!175 = !{i64 5288}
!176 = !{i64 5292}
!177 = !{i64 5296}
!178 = !{i64 5300}
!179 = !{i64 5304}
!180 = !{i64 5308}
!181 = !{i64 5312}
!182 = !{i64 5320}
!183 = !{i64 5328}
!184 = !{i64 5336}
!185 = !{i64 5340}
!186 = !{i64 5364}
!187 = !{i64 5368}
!188 = !{i64 5372}
!189 = !{i64 5380}
!190 = !{i64 5384}
!191 = !{i64 5388}
!192 = !{i64 5392}
!193 = !{i64 5404}
!194 = !{i64 5412}
!195 = !{i64 5428}
!196 = !{i64 5432}
!197 = !{i64 5436}
!198 = !{i64 5452}
!199 = !{i64 5456}
!200 = !{i64 5460}
!201 = !{i64 5468}
!202 = !{i64 5476}
!203 = !{i64 5484}
!204 = !{i64 5504}
!205 = !{i64 5528}
!206 = !{i64 5536}
!207 = !{i64 5552}
!208 = !{i64 5568}
!209 = !{i64 5584}
!210 = !{i64 5600}
!211 = !{i64 5628}
!212 = !{i64 5668}
!213 = !{i64 5704}
!214 = !{i64 5728}
!215 = !{i64 5744}
!216 = !{i64 5772}
!217 = !{i64 5808}
!218 = !{i64 5828}
!219 = !{i64 5832}
!220 = !{i64 5836}
!221 = !{i64 5844}
!222 = !{i64 5856}
!223 = !{i64 5868}
!224 = !{i64 5884}
!225 = !{i64 5896}
!226 = !{i64 5912}
!227 = !{i64 5928}
!228 = !{i64 5944}
!229 = !{i64 5960}
!230 = !{i64 5972}
!231 = !{i64 6072}
!232 = !{i64 6088}
!233 = !{i64 6092}
!234 = !{i64 6096}
!235 = !{i64 6112}
!236 = !{i64 6116}
!237 = !{i64 6120}
!238 = !{i64 6124}
!239 = !{i64 6128}
!240 = !{i64 6140}
!241 = !{i64 6144}
!242 = !{i64 6164}
!243 = !{i64 6172}
!244 = !{i64 6188}
!245 = !{i64 6192}
!246 = !{i64 6196}
!247 = !{i64 6200}
!248 = !{i64 6212}
!249 = !{i64 6204}
!250 = !{i64 6216}
!251 = !{i64 6224}
!252 = !{i64 6244}
!253 = !{i64 6260}
!254 = !{i64 6264}
!255 = !{i64 6268}
!256 = !{i64 6284}
!257 = !{i64 6308}
!258 = !{i64 6324}
!259 = !{i64 6328}
!260 = !{i64 6332}
!261 = !{i64 6348}
!262 = !{i64 6356}
!263 = !{i64 6372}
!264 = !{i64 6376}
!265 = !{i64 6380}
!266 = !{i64 6384}
!267 = !{i64 6396}
!268 = !{i64 6400}
!269 = !{i64 6404}
!270 = !{i64 6408}
!271 = !{i64 6416}
!272 = !{i64 6424}
!273 = !{i64 6452}
!274 = !{i64 6472}
!275 = !{i64 6480}
!276 = !{i64 6484}
!277 = !{i64 6492}
!278 = !{i64 6500}
!279 = !{i64 6504}
!280 = !{i64 6508}
!281 = !{i64 6520}
!282 = !{i64 6524}
!283 = !{i64 6528}
!284 = !{i64 6532}
!285 = !{i64 6536}
!286 = !{i64 6540}
!287 = !{i64 6548}
!288 = !{i64 6552}
!289 = !{i64 6568}
!290 = !{i64 6592}
!291 = !{i64 6600}
!292 = !{i64 6608}
!293 = !{i64 6616}
!294 = !{i64 6620}
!295 = !{i64 6624}
!296 = !{i64 6628}
!297 = !{i64 6632}
!298 = !{i64 6636}
!299 = !{i64 6640}
!300 = !{i64 6644}
!301 = !{i64 6652}
!302 = !{i64 6656}
!303 = !{i64 6660}
!304 = !{i64 6672}
!305 = !{i64 6684}
!306 = !{i64 6688}
!307 = !{i64 6692}
!308 = !{i64 6700}
!309 = !{i64 6712}
!310 = !{i64 6716}
!311 = !{i64 6740}
!312 = !{i64 6744}
!313 = !{i64 6748}
!314 = !{i64 6768}
!315 = !{i64 6776}
!316 = !{i64 6784}
!317 = !{i64 6792}
!318 = !{i64 6796}
!319 = !{i64 6820}
!320 = !{i64 6824}
!321 = !{i64 6828}
!322 = !{i64 6852}
!323 = !{i64 6868}
!324 = !{i64 6872}
!325 = !{i64 6876}
!326 = !{i64 6892}
!327 = !{i64 6912}
!328 = !{i64 6916}
!329 = !{i64 6920}
!330 = !{i64 6932}
!331 = !{i64 6944}
!332 = !{i64 6952}
!333 = !{i64 6960}
!334 = !{i64 6976}
!335 = !{i64 6984}
!336 = !{i64 6992}
!337 = !{i64 6996}
!338 = !{i64 7008}
!339 = !{i64 7012}
!340 = !{i64 7016}
!341 = !{i64 7040}
!342 = !{i64 7048}
!343 = !{i64 7052}
!344 = !{i64 7056}
!345 = !{i64 7072}
!346 = !{i64 7076}
!347 = !{i64 7080}
!348 = !{i64 7096}
!349 = !{i64 7100}
!350 = !{i64 7104}
!351 = !{i64 7120}
!352 = !{i64 7124}
!353 = !{i64 7128}
!354 = !{i64 7148}
!355 = !{i64 7156}
!356 = !{i64 7168}
!357 = !{i64 7184}
!358 = !{i64 7196}
!359 = !{i64 7220}
!360 = !{i64 7240}
!361 = !{i64 7252}
!362 = !{i64 7264}
!363 = !{i64 7268}
!364 = !{i64 7284}
!365 = !{i64 7288}
!366 = !{i64 7300}
!367 = !{i64 7316}
!368 = !{i64 7320}
!369 = !{i64 7332}
!370 = !{i64 7348}
!371 = !{i64 7356}
!372 = !{i64 7368}
!373 = !{i64 7372}
!374 = !{i64 7384}
!375 = !{i64 7396}
!376 = !{i64 7400}
!377 = !{i64 7404}
!378 = !{i64 7408}
!379 = !{i64 7444}
!380 = !{i64 7448}
!381 = !{i64 7452}
!382 = !{i64 7460}
!383 = !{i64 7468}
!384 = !{i64 7476}
!385 = !{i64 7480}
!386 = !{i64 7484}
!387 = !{i64 7496}
!388 = !{i64 7504}
!389 = !{i64 7508}
!390 = !{i64 7512}
!391 = !{i64 7516}
!392 = !{i64 7520}
!393 = !{i64 7532}
!394 = !{i64 7536}
!395 = !{i64 7548}
!396 = !{i64 7552}
!397 = !{i64 7540}
!398 = !{i64 7568}
!399 = !{i64 7580}
!400 = !{i64 7584}
!401 = !{i64 7652}
!402 = !{i64 7664}
!403 = !{i64 7668}
!404 = !{i64 7680}
!405 = !{i64 7700}
!406 = !{i64 7720}
!407 = !{i64 7724}
!408 = !{i64 7728}
!409 = !{i64 7744}
!410 = !{i64 7748}
!411 = !{i64 7752}
!412 = !{i64 7760}
!413 = !{i64 7788}
!414 = !{i64 7804}
!415 = !{i64 7840}
!416 = !{i64 7844}
!417 = !{i64 7848}
!418 = !{i64 7856}
!419 = !{i64 7860}
!420 = !{i64 7872}
!421 = !{i64 7924}
!422 = !{i64 7928}
!423 = !{i64 7944}
!424 = !{i64 7948}
!425 = !{i64 7964}
!426 = !{i64 7968}
!427 = !{i64 7992}
!428 = !{i64 7996}
!429 = !{i64 8012}
!430 = !{i64 8024}
!431 = !{i64 8048}
!432 = !{i64 8056}
!433 = !{i64 8112}
!434 = !{i64 8120}
!435 = !{i64 8124}
!436 = !{i64 8132}
!437 = !{i64 8136}
!438 = !{i64 8144}
!439 = !{i64 8168}
!440 = !{i64 8176}
!441 = !{i64 8180}
!442 = !{i64 8184}
!443 = !{i64 8192}
!444 = !{i64 8196}
!445 = !{i64 8200}
!446 = !{i64 8204}
!447 = !{i64 8220}
!448 = !{i64 8228}
!449 = !{i64 8248}
!450 = !{i64 8264}
!451 = !{i64 8272}
!452 = !{i64 8276}
!453 = !{i64 8280}
!454 = !{i64 8288}
!455 = !{i64 8292}
!456 = !{i64 8296}
!457 = !{i64 8300}
!458 = !{i64 8316}
!459 = !{i64 8332}
!460 = !{i64 8336}
!461 = !{i64 8344}
!462 = !{i64 8352}
!463 = !{i64 8356}
!464 = !{i64 8360}
!465 = !{i64 8368}
!466 = !{i64 8372}
!467 = !{i64 8376}
!468 = !{i64 8380}
!469 = !{i64 8384}
!470 = !{i64 8388}
!471 = !{i64 8400}
!472 = !{i64 8404}
!473 = !{i64 8456}
!474 = !{i64 8472}
!475 = !{i64 8488}
!476 = !{i64 8504}
!477 = !{i64 8512}
!478 = !{i64 8516}
!479 = !{i64 8540}
!480 = !{i64 8544}
!481 = !{i64 8548}
!482 = !{i64 8572}
!483 = !{i64 8576}
!484 = !{i64 8580}
!485 = !{i64 8584}
!486 = !{i64 8592}
!487 = !{i64 8600}
!488 = !{i64 8604}
!489 = !{i64 8608}
!490 = !{i64 8620}
!491 = !{i64 8624}
!492 = !{i64 8628}
!493 = !{i64 8632}
!494 = !{i64 8644}
!495 = !{i64 8648}
!496 = !{i64 8676}
!497 = !{i64 8692}
!498 = !{i64 8696}
!499 = !{i64 8708}
!500 = !{i64 8732}
!501 = !{i64 8740}
!502 = !{i64 8744}
!503 = !{i64 8748}
!504 = !{i64 8756}
!505 = !{i64 8764}
!506 = !{i64 8768}
!507 = !{i64 8772}
!508 = !{i64 8784}
!509 = !{i64 8800}
!510 = !{i64 8812}
!511 = !{i64 8816}
!512 = !{i64 8820}
!513 = !{i64 8824}
!514 = !{i64 8828}
!515 = !{i64 8852}
!516 = !{i64 8856}
!517 = !{i64 8896}
!518 = !{i64 8900}
!519 = !{i64 8904}
!520 = !{i64 8908}
!521 = !{i64 8912}
!522 = !{i64 8916}
!523 = !{i64 8936}
!524 = !{i64 8944}
!525 = !{i64 8948}
!526 = !{i64 8952}
!527 = !{i64 8960}
!528 = !{i64 8964}
!529 = !{i64 8972}
!530 = !{i64 8976}
!531 = !{i64 8984}
!532 = !{i64 8992}
!533 = !{i64 9008}
!534 = !{i64 9012}
!535 = !{i64 9024}
!536 = !{i64 9048}
!537 = !{i64 9064}
!538 = !{i64 9076}
!539 = !{i64 9080}
!540 = !{i64 9084}
!541 = !{i64 9112}
!542 = !{i64 9116}
!543 = !{i64 9120}
!544 = !{i64 9124}
!545 = !{i64 9136}
!546 = !{i64 9148}
!547 = !{i64 9152}
!548 = !{i64 9164}
!549 = !{i64 9168}
!550 = !{i64 9176}
!551 = !{i64 9216}
!552 = !{i64 9232}
!553 = !{i64 9244}
!554 = !{i64 9256}
!555 = !{i64 9268}
!556 = !{i64 9276}
!557 = !{i64 9288}
!558 = !{i64 9308}
!559 = !{i64 9332}
!560 = !{i64 9344}
!561 = !{i64 9364}
!562 = !{i64 9372}
!563 = !{i64 9376}
!564 = !{i64 9400}
!565 = !{i64 9404}
!566 = !{i64 9408}
!567 = !{i64 9416}
!568 = !{i64 9424}
!569 = !{i64 9436}
!570 = !{i64 9440}
!571 = !{i64 9448}
!572 = !{i64 9452}
!573 = !{i64 9456}
!574 = !{i64 9460}
!575 = !{i64 9476}
!576 = !{i64 9496}
!577 = !{i64 9500}
!578 = !{i64 9516}
!579 = !{i64 9552}
!580 = !{i64 9556}
!581 = !{i64 9572}
!582 = !{i64 9580}
!583 = !{i64 9584}
!584 = !{i64 9588}
!585 = !{i64 9592}
!586 = !{i64 9608}
!587 = !{i64 9636}
!588 = !{i64 9640}
!589 = !{i64 9652}
!590 = !{i64 9664}
!591 = !{i64 9672}
!592 = !{i64 9684}
!593 = !{i64 9688}
!594 = !{i64 9692}
!595 = !{i64 9696}
!596 = !{i64 9700}
!597 = !{i64 9724}
!598 = !{i64 9732}
!599 = !{i64 9772}
!600 = !{i64 9776}
!601 = !{i64 9780}
!602 = !{i64 9784}
!603 = !{i64 9788}
!604 = !{i64 9792}
!605 = !{i64 9816}
!606 = !{i64 9820}
!607 = !{i64 9824}
!608 = !{i64 9828}
!609 = !{i64 9836}
!610 = !{i64 9844}
!611 = !{i64 9852}
!612 = !{i64 9860}
!613 = !{i64 9864}
!614 = !{i64 9868}
!615 = !{i64 9884}
!616 = !{i64 9896}
!617 = !{i64 9908}
!618 = !{i64 9912}
!619 = !{i64 9928}
!620 = !{i64 9932}
!621 = !{i64 9944}
!622 = !{i64 9972}
!623 = !{i64 9988}
!624 = !{i64 9992}
!625 = !{i64 9996}
!626 = !{i64 10000}
!627 = !{i64 10008}
!628 = !{i64 10016}
!629 = !{i64 10024}
!630 = !{i64 10028}
!631 = !{i64 10036}
!632 = !{i64 10048}
!633 = !{i64 10056}
!634 = !{i64 10068}
!635 = !{i64 10080}
!636 = !{i64 10088}
!637 = !{i64 10100}
!638 = !{i64 10108}
!639 = !{i64 10128}
!640 = !{i64 10144}
!641 = !{i64 10148}
!642 = !{i64 10152}
!643 = !{i64 10156}
!644 = !{i64 10160}
!645 = !{i64 10188}
!646 = !{i64 10204}
!647 = !{i64 10208}
!648 = !{i64 10212}
!649 = !{i64 10220}
!650 = !{i64 10224}
!651 = !{i64 10228}
!652 = !{i64 10272}
!653 = !{i64 10264}
!654 = !{i64 10276}
!655 = !{i64 10280}
!656 = !{i64 10284}
!657 = !{i64 10288}
!658 = !{i64 10292}
!659 = !{i64 10296}
!660 = !{i64 10300}
!661 = !{i64 10304}
!662 = !{i64 10308}
!663 = !{i64 10336}
!664 = !{i64 10344}
!665 = !{i64 10356}
!666 = !{i64 10368}
!667 = !{i64 10376}
!668 = !{i64 10388}
!669 = !{i64 10400}
!670 = !{i64 10404}
!671 = !{i64 10408}
!672 = !{i64 10412}
!673 = !{i64 10416}
!674 = !{i64 10424}
!675 = !{i64 10432}
!676 = !{i64 10436}
!677 = !{i64 10448}
!678 = !{i64 10464}
!679 = !{i64 10484}
!680 = !{i64 10500}
!681 = !{i64 10516}
!682 = !{i64 10524}
!683 = !{i64 10528}
!684 = !{i64 10532}
!685 = !{i64 10540}
!686 = !{i64 10544}
!687 = !{i64 10552}
!688 = !{i64 10568}
!689 = !{i64 10572}
!690 = !{i64 10588}
!691 = !{i64 10600}
!692 = !{i64 10616}
!693 = !{i64 10620}
!694 = !{i64 10636}
!695 = !{i64 10648}
!696 = !{i64 10664}
!697 = !{i64 10672}
!698 = !{i64 10688}
!699 = !{i64 10700}
!700 = !{i64 10740}
!701 = !{i64 10744}
!702 = !{i64 10748}
!703 = !{i64 10760}
!704 = !{i64 10772}
!705 = !{i64 10780}
