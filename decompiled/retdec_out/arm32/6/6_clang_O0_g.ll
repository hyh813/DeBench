source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%_IO_FILE = type { i32 }
%shmid_ds = type { %ipc_perm, i32, i32, i32, i32, i32, i32, i16, i16, i32*, i32* }
%ipc_perm = type { i32, i32, i32, i32, i32, i32, i16 }
%stat = type { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }
%sockaddr = type { i32, [14 x i8] }

@global_var_1400c = local_unnamed_addr global i32 3116
@global_var_14010 = local_unnamed_addr global i32 3116
@global_var_14014 = local_unnamed_addr global i32 3116
@global_var_14018 = local_unnamed_addr global i32 3116
@global_var_1401c = local_unnamed_addr global i32 3116
@global_var_14020 = local_unnamed_addr global i32 3116
@global_var_14024 = local_unnamed_addr global i32 3116
@global_var_14028 = local_unnamed_addr global i32 3116
@global_var_1402c = local_unnamed_addr global i32 3116
@global_var_14030 = local_unnamed_addr global i32 3116
@global_var_14034 = local_unnamed_addr global i32 3116
@global_var_14038 = local_unnamed_addr global i32 3116
@global_var_1403c = local_unnamed_addr global i32 3116
@global_var_14040 = local_unnamed_addr global i32 3116
@global_var_14044 = local_unnamed_addr global i32 3116
@global_var_14048 = local_unnamed_addr global i32 3116
@global_var_1404c = local_unnamed_addr global i32 3116
@global_var_14050 = local_unnamed_addr global i32 3116
@global_var_14054 = local_unnamed_addr global i32 3116
@global_var_14058 = local_unnamed_addr global i32 3116
@global_var_1405c = local_unnamed_addr global i32 3116
@global_var_14060 = local_unnamed_addr global i32 3116
@global_var_14064 = local_unnamed_addr global i32 3116
@global_var_14068 = local_unnamed_addr global i32 3116
@global_var_1406c = local_unnamed_addr global i32 3116
@global_var_14070 = local_unnamed_addr global i32 3116
@global_var_14074 = local_unnamed_addr global i32 3116
@global_var_14078 = local_unnamed_addr global i32 3116
@global_var_1407c = local_unnamed_addr global i32 3116
@global_var_14080 = local_unnamed_addr global i32 3116
@global_var_14084 = local_unnamed_addr global i32 3116
@global_var_14088 = local_unnamed_addr global i32 3116
@global_var_1408c = local_unnamed_addr global i32 3116
@global_var_14090 = local_unnamed_addr global i32 3116
@global_var_14094 = local_unnamed_addr global i32 3116
@global_var_14098 = local_unnamed_addr global i32 3116
@global_var_1409c = local_unnamed_addr global i32 3116
@global_var_140a0 = local_unnamed_addr global i32 3116
@global_var_140a4 = local_unnamed_addr global i32 3116
@global_var_140a8 = local_unnamed_addr global i32 3116
@global_var_140ac = local_unnamed_addr global i32 3116
@global_var_140b0 = local_unnamed_addr global i32 3116
@global_var_140b4 = local_unnamed_addr global i32 3116
@global_var_140b8 = local_unnamed_addr global i32 3116
@global_var_140bc = local_unnamed_addr global i32 3116
@global_var_140c0 = local_unnamed_addr global i32 3116
@global_var_140c4 = local_unnamed_addr global i32 3116
@global_var_140c8 = local_unnamed_addr global i32 3116
@global_var_140cc = local_unnamed_addr global i32 3116
@global_var_140d0 = local_unnamed_addr global i32 3116
@global_var_140d4 = local_unnamed_addr global i32 3116
@global_var_140d8 = local_unnamed_addr global i32 3116
@global_var_140dc = local_unnamed_addr global i32 3116
@global_var_140e0 = local_unnamed_addr global i32 3116
@global_var_140e4 = local_unnamed_addr global i32 3116
@global_var_140e8 = local_unnamed_addr global i32 3116
@global_var_140ec = local_unnamed_addr global i32 3116
@global_var_140f0 = local_unnamed_addr global i32 3116
@global_var_13f00 = local_unnamed_addr global i32 4260
@global_var_140f4 = local_unnamed_addr global i32 3116
@global_var_25e = global i32 1179648
@global_var_13f0c = local_unnamed_addr global i32* @global_var_25e
@global_var_140f8 = local_unnamed_addr global i32 3116
@global_var_13f18 = local_unnamed_addr global i32 12
@global_var_140fc = local_unnamed_addr global i32 3116
@global_var_13f24 = local_unnamed_addr global i32 13144
@global_var_14100 = local_unnamed_addr global i32 3116
@global_var_13f30 = local_unnamed_addr global i32 27
@global_var_14104 = local_unnamed_addr global i32 3116
@global_var_13f04 = global i32 4156
@global_var_13f3c = local_unnamed_addr global i32* @global_var_13f04
@global_var_14108 = local_unnamed_addr global i32 3116
@global_var_f7c = local_unnamed_addr constant i32 77956
@global_var_13f08 = global i32 1
@global_var_14000 = local_unnamed_addr global i32* @global_var_13f08
@global_var_f80 = local_unnamed_addr constant i32 280
@global_var_14118 = local_unnamed_addr global i32 13084
@global_var_331c = constant i32 -382908416
@global_var_fa0 = local_unnamed_addr constant i32 77932
@global_var_fa4 = local_unnamed_addr constant i32 276
@global_var_14114 = local_unnamed_addr global i32 0
@global_var_fdc = local_unnamed_addr constant i32 78192
@global_var_fe0 = local_unnamed_addr constant i32 78188
@global_var_fe4 = local_unnamed_addr constant i32 77880
@global_var_fe8 = local_unnamed_addr constant i32 272
@global_var_14110 = local_unnamed_addr global i32 0
@global_var_102c = local_unnamed_addr constant i32 78124
@global_var_1030 = local_unnamed_addr constant i32 78120
@global_var_1034 = local_unnamed_addr constant i32 77800
@global_var_1038 = local_unnamed_addr constant i32 284
@global_var_1411c = local_unnamed_addr global i32 0
@global_var_1090 = local_unnamed_addr constant i32 78044
@global_var_1094 = local_unnamed_addr constant i32 77740
@global_var_1098 = local_unnamed_addr constant i32 268
@global_var_1410c = local_unnamed_addr global i32 0
@global_var_109c = local_unnamed_addr constant i32 77996
@global_var_10a0 = local_unnamed_addr constant i32 77980
@global_var_110c = local_unnamed_addr constant i32 8960
@global_var_33f4 = constant [9 x i8] c"HelloLib\00"
@global_var_11e0 = local_unnamed_addr constant i32 8821
@global_var_33fd = constant [4 x i8] c"abc\00"
@global_var_11e4 = local_unnamed_addr constant i32 8817
@global_var_3401 = constant [4 x i8] c"def\00"
@global_var_11e8 = local_unnamed_addr constant i32 8805
@global_var_3405 = constant [4 x i8] c"xyz\00"
@global_var_11ec = local_unnamed_addr constant i32 8789
@global_var_3409 = constant [4 x i8] c"bbb\00"
@global_var_11f0 = local_unnamed_addr constant i32 8785
@global_var_340d = constant [4 x i8] c"aaa\00"
@global_var_124c = local_unnamed_addr constant i32 8665
@global_var_3411 = constant [13 x i8] c"BinBench2025\00"
@global_var_12f0 = local_unnamed_addr constant i32 9552
@global_var_37f0 = local_unnamed_addr constant i32 10
@global_var_37f4 = local_unnamed_addr constant i32 20
@global_var_37f8 = local_unnamed_addr constant i32 30
@global_var_37fc = local_unnamed_addr constant i32 40
@global_var_3800 = local_unnamed_addr constant i32 50
@global_var_1420 = local_unnamed_addr constant i32 9360
@global_var_3804 = local_unnamed_addr constant i32 1
@global_var_1424 = local_unnamed_addr constant i32 9348
@global_var_3808 = local_unnamed_addr constant i32 2
@global_var_380c = local_unnamed_addr constant i32 3
@global_var_1428 = local_unnamed_addr constant i32 9336
@global_var_3810 = local_unnamed_addr constant i32 1
@global_var_3814 = local_unnamed_addr constant i32 2
@global_var_3818 = local_unnamed_addr constant i32 4
@global_var_142c = local_unnamed_addr constant i32 9312
@global_var_2460 = constant i32 -442564504
@global_var_13b0 = constant i32 -442560392
@global_var_1430 = local_unnamed_addr constant i32 9312
@global_var_13bc = local_unnamed_addr constant i32 -443478008
@global_var_1434 = local_unnamed_addr constant i32 9288
@global_var_381c = local_unnamed_addr constant i32 1
@global_var_1474 = local_unnamed_addr constant i32 8126
@global_var_341e = constant [21 x i8] c"Value: %d, Name: %s\0A\00"
@global_var_14a8 = local_unnamed_addr constant i32 8187
@global_var_1518 = local_unnamed_addr constant i32 8039
@global_var_1538 = local_unnamed_addr constant i32 7945
@global_var_3439 = constant [8 x i8] c"123,456\00"
@global_var_15ac = local_unnamed_addr constant i32 7909
@global_var_15e8 = local_unnamed_addr constant i32 7803
@global_var_3443 = constant [12 x i8] c"/etc/passwd\00"
@global_var_173c = local_unnamed_addr constant i32 7751
@global_var_344f = constant [19 x i8] c"BinBench Test Data\00"
@global_var_1740 = local_unnamed_addr constant i32 7754
@global_var_3462 = constant [3 x i8] c"w+\00"
@global_var_1760 = local_unnamed_addr constant i32 7437
@global_var_3465 = constant [23 x i8] c"/tmp/binbench_test.tmp\00"
@global_var_1a44 = local_unnamed_addr constant i32 6752
@global_var_347c = constant [20 x i8] c"Hello BinBench Test\00"
@global_var_1a48 = local_unnamed_addr constant i32 6756
@global_var_3490 = constant [6 x i8] c"Bench\00"
@global_var_1b58 = local_unnamed_addr constant i32 6710
@global_var_1b5c = local_unnamed_addr constant i32 6727
@global_var_1b60 = local_unnamed_addr constant i32 6734
@global_var_1b64 = local_unnamed_addr constant i32 6741
@global_var_1b68 = local_unnamed_addr constant i32 6749
@global_var_1b6c = local_unnamed_addr constant i32 6757
@global_var_1b70 = local_unnamed_addr constant i32 6765
@global_var_1b74 = local_unnamed_addr constant i32 6773
@global_var_1b78 = local_unnamed_addr constant i32 6782
@global_var_1b7c = local_unnamed_addr constant i32 6790
@global_var_1b80 = local_unnamed_addr constant i32 6798
@global_var_1b84 = local_unnamed_addr constant i32 6806
@global_var_1b88 = local_unnamed_addr constant i32 6813
@global_var_1c34 = local_unnamed_addr constant i32 6191
@global_var_1cb0 = local_unnamed_addr constant i32 6043
@global_var_1dbc = local_unnamed_addr constant i32 6257
@global_var_3609 = constant [10 x i8] c"/bin/true\00"
@global_var_1ed4 = local_unnamed_addr constant i32 6111
@global_var_3613 = constant [10 x i8] c"HelloPipe\00"
@global_var_216c = local_unnamed_addr constant i32 5585
@global_var_361d = constant [18 x i8] c"/tmp/binbench_shm\00"
@global_var_1b6 = local_unnamed_addr global i32 1313275904
@global_var_2170 = local_unnamed_addr constant i32 5513
@global_var_3b6 = global i32 0
@global_var_2174 = local_unnamed_addr constant i32 5379
@global_var_362f = constant [13 x i8] c"SharedMemory\00"
@global_var_23a8 = local_unnamed_addr constant i32 528
@global_var_23ac = local_unnamed_addr constant i32 488
@global_var_23b0 = local_unnamed_addr constant i32 73504
@global_var_14130 = local_unnamed_addr global i32 0
@global_var_3e8 = global i32 0
@global_var_23b4 = local_unnamed_addr constant i32 73468
@global_var_23b8 = local_unnamed_addr constant i32 73380
@global_var_23bc = local_unnamed_addr constant i32 73352
@global_var_14134 = local_unnamed_addr global i32 0
@global_var_23c0 = local_unnamed_addr constant i32 73316
@global_var_7d0 = constant [5 x i8] c"rlen\00"
@global_var_23c4 = local_unnamed_addr constant i32 73280
@global_var_23c8 = local_unnamed_addr constant i32 73192
@global_var_23cc = local_unnamed_addr constant i32 73176
@global_var_2400 = local_unnamed_addr constant i32 73036
@global_var_2404 = local_unnamed_addr constant i32 73020
@global_var_24c4 = local_unnamed_addr constant i32 4620
@global_var_24c8 = local_unnamed_addr constant i32 4628
@global_var_24cc = local_unnamed_addr constant i32 4636
@global_var_24d0 = local_unnamed_addr constant i32 4644
@global_var_24d4 = local_unnamed_addr constant i32 4652
@global_var_24d8 = local_unnamed_addr constant i32 4660
@global_var_24dc = local_unnamed_addr constant i32 4668
@global_var_24e0 = local_unnamed_addr constant i32 4676
@global_var_25c8 = local_unnamed_addr constant i32 -124
@global_var_27b8 = local_unnamed_addr constant i32 -264
@global_var_2868 = local_unnamed_addr constant i32 71968
@global_var_14138 = global i32 0
@global_var_286c = local_unnamed_addr constant i32 71972
@global_var_14150 = local_unnamed_addr global i32 0
@global_var_2870 = local_unnamed_addr constant i32 71964
@global_var_29c4 = local_unnamed_addr constant i32 71824
@global_var_29c8 = local_unnamed_addr constant i32 -296
@global_var_29cc = local_unnamed_addr constant i32 71600
@global_var_2a78 = local_unnamed_addr constant i32 71500
@global_var_14154 = global i32 0
@global_var_2a7c = local_unnamed_addr constant i32 71508
@global_var_1416c = local_unnamed_addr global i32 0
@global_var_2a80 = local_unnamed_addr constant i32 71492
@global_var_14170 = global i32 0
@global_var_2a84 = local_unnamed_addr constant i32 71456
@global_var_2a88 = local_unnamed_addr constant i32 71516
@global_var_141a0 = local_unnamed_addr global i32 0
@global_var_2a8c = local_unnamed_addr constant i32 71428
@global_var_2b00 = local_unnamed_addr constant i32 71324
@global_var_2b04 = local_unnamed_addr constant i32 71380
@global_var_2b08 = local_unnamed_addr constant i32 71312
@global_var_2b0c = local_unnamed_addr constant i32 71304
@global_var_2be4 = local_unnamed_addr constant i32 71236
@global_var_2be8 = local_unnamed_addr constant i32 71272
@global_var_2bec = local_unnamed_addr constant i32 -344
@global_var_2bf0 = local_unnamed_addr constant i32 -224
@global_var_2ccc = local_unnamed_addr constant i32 70984
@global_var_141a4 = global i32 0
@global_var_2d34 = local_unnamed_addr constant i32 70840
@global_var_2ed8 = local_unnamed_addr constant i32 70672
@global_var_2edc = local_unnamed_addr constant i32 -456
@global_var_2ee0 = local_unnamed_addr constant i32 -328
@global_var_2ee4 = local_unnamed_addr constant i32 70412
@global_var_1f4 = global i32 0
@global_var_2f94 = local_unnamed_addr constant i32 8
@global_var_2f98 = local_unnamed_addr constant i32 12
@global_var_324c = local_unnamed_addr constant i32 1744
@global_var_6d0 = constant [11 x i8] c"a_finalize\00"
@global_var_3250 = local_unnamed_addr constant i32 -412
@global_var_3300 = local_unnamed_addr constant i32 1190
@global_var_3304 = local_unnamed_addr constant i32 1201
@global_var_3308 = local_unnamed_addr constant i32 1209
@global_var_330c = local_unnamed_addr constant i32 1218
@global_var_3310 = local_unnamed_addr constant i32 1226
@global_var_3314 = local_unnamed_addr constant i32 1234
@global_var_3318 = local_unnamed_addr constant i32 1242
@0 = external global i32
@global_var_14128 = external global i8*
@1 = internal constant [3 x i8] c"\EA\08\00"
@global_var_1ffb = constant i8* getelementptr inbounds ([3 x i8], [3 x i8]* @1, i32 0, i32 0)
@2 = internal constant [3 x i8] c"\E5(\00"
@global_var_1f67 = constant i8* getelementptr inbounds ([3 x i8], [3 x i8]* @2, i32 0, i32 0)
@3 = internal constant [2 x i8] c"r\00"
@4 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @3, i32 0, i32 0)
@5 = internal constant [37 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\87\E5\87\86\E5\BA\93\E5\87\BD\E6\95\B0\E8\B0\83\E7\94\A8 ===\0A\00"
@global_var_3496 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @5, i32 0, i32 0)
@6 = internal constant [27 x i8] c"LIB-L1-01: %d (\E6\9C\9F\E6\9C\9B: 8)\0A\00"
@global_var_34bb = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @6, i32 0, i32 0)
@7 = internal constant [27 x i8] c"LIB-L1-02: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_34d6 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @7, i32 0, i32 0)
@8 = internal constant [28 x i8] c"LIB-L1-03: %d (\E6\9C\9F\E6\9C\9B: 12)\0A\00"
@global_var_34f1 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i32 0, i32 0)
@9 = internal constant [28 x i8] c"LIB-L1-04: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_350d = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i32 0, i32 0)
@10 = internal constant [28 x i8] c"LIB-L1-05: %d (\E6\9C\9F\E6\9C\9B: -1)\0A\00"
@global_var_3529 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i32 0, i32 0)
@11 = internal constant [28 x i8] c"LIB-L1-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_3545 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i32 0, i32 0)
@12 = internal constant [29 x i8] c"LIB-L1-07: %d (\E6\9C\9F\E6\9C\9B: 579)\0A\00"
@global_var_3561 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i32 0, i32 0)
@13 = internal constant [28 x i8] c"LIB-L1-08: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_357e = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @13, i32 0, i32 0)
@14 = internal constant [28 x i8] c"LIB-L1-09: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_359a = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @14, i32 0, i32 0)
@15 = internal constant [28 x i8] c"LIB-L1-10: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_35b6 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @15, i32 0, i32 0)
@16 = internal constant [27 x i8] c"LIB-L1-11: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_35d2 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @16, i32 0, i32 0)
@17 = internal constant [28 x i8] c"LIB-L1-12: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_35ed = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i32 0, i32 0)
@18 = internal constant [3 x i8] c"\E5\1E\00"
@global_var_179b = constant i8* getelementptr inbounds ([3 x i8], [3 x i8]* @18, i32 0, i32 0)
@global_var_210 = global void (i32)* inttoptr (i32 1572867 to void (i32)*)
@global_var_1e8 = global void (i32)* null
@19 = internal constant [28 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\B3\BB\E7\BB\9F\E8\B0\83\E7\94\A8 ===\0A\00"
@global_var_363c = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @19, i32 0, i32 0)
@20 = internal constant [28 x i8] c"SYS-L3-01: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3658 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @20, i32 0, i32 0)
@21 = internal constant [28 x i8] c"SYS-L3-02: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3674 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @21, i32 0, i32 0)
@22 = internal constant [28 x i8] c"SYS-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3690 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @22, i32 0, i32 0)
@23 = internal constant [28 x i8] c"SYS-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_36ac = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @23, i32 0, i32 0)
@24 = internal constant [28 x i8] c"SYS-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_36c8 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @24, i32 0, i32 0)
@25 = internal constant [28 x i8] c"SYS-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_36e4 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @25, i32 0, i32 0)
@26 = internal constant [28 x i8] c"SYS-L3-07: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3700 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @26, i32 0, i32 0)
@global_var_24e4 = constant i32* (i32*)* inttoptr (i32 -382908416 to i32* (i32*)*)
@global_var_4a6 = external global i8*
@global_var_4b1 = external global i8*
@global_var_4b9 = external global i8*
@global_var_4c2 = external global i8*
@global_var_4ca = external global i8*
@global_var_4d2 = external global i8*
@global_var_4da = external global i8*
@global_var_3441 = constant [2 x i8] c"r\00"

define i32 @_init(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_c20:
  %0 = call i32 @call_weak_fn(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i32 @"$a"(i32* %mutex) local_unnamed_addr {
dec_label_pc_c40:
  %0 = call i32 @pthread_mutex_unlock(i32* %mutex), !insn.addr !2
  ret i32 %0, !insn.addr !2
}

define i8* @function_c4c(i8* %haystack, i8* %needle) local_unnamed_addr {
dec_label_pc_c4c:
  %0 = call i8* @strstr(i8* %haystack, i8* %needle), !insn.addr !3
  ret i8* %0, !insn.addr !3
}

define i32 @function_c58(i32 %sig) local_unnamed_addr {
dec_label_pc_c58:
  %0 = call i32 @raise(i32 %sig), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i32 @function_c64(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_c64:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define i32 @function_c70(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_c70:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define void @function_c7c(i32* %d) local_unnamed_addr {
dec_label_pc_c7c:
  call void @__cxa_finalize(i32* %d), !insn.addr !7
  ret void, !insn.addr !7
}

define i32 @function_c88(i32 %fd, i32 %level, i32 %optname, i32* %optval, i32 %optlen) local_unnamed_addr {
dec_label_pc_c88:
  %0 = call i32 @setsockopt(i32 %fd, i32 %level, i32 %optname, i32* %optval, i32 %optlen), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i32 @function_c94(i8* %format, ...) local_unnamed_addr {
dec_label_pc_c94:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define %_IO_FILE* @function_ca0(i8* %filename, i8* %modes) local_unnamed_addr {
dec_label_pc_ca0:
  %0 = call %_IO_FILE* @fopen(i8* %filename, i8* %modes), !insn.addr !10
  ret %_IO_FILE* %0, !insn.addr !10
}

define i32 @function_cac(i32 %fd, i32* %buf, i32 %nbytes) local_unnamed_addr {
dec_label_pc_cac:
  %0 = call i32 @read(i32 %fd, i32* %buf, i32 %nbytes), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define void @function_cb8(i32* %ptr) local_unnamed_addr {
dec_label_pc_cb8:
  call void @free(i32* %ptr), !insn.addr !12
  ret void, !insn.addr !12
}

define i32 @function_cc4(i32* %mutex) local_unnamed_addr {
dec_label_pc_cc4:
  %0 = call i32 @pthread_mutex_lock(i32* %mutex), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define void @function_cd0(i32 %status) local_unnamed_addr {
dec_label_pc_cd0:
  call void @_exit(i32 %status), !insn.addr !14
  ret void, !insn.addr !14
}

define i32* @function_cdc(i32* %dest, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_cdc:
  %0 = call i32* @memcpy(i32* %dest, i32* %src, i32 %n), !insn.addr !15
  ret i32* %0, !insn.addr !15
}

define i32 @function_ce8() local_unnamed_addr {
dec_label_pc_ce8:
  %0 = call i32 @__atomic_fetch_add_4(), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i32 @function_cf4(i32 %key, i32 %size, i32 %shmflg) local_unnamed_addr {
dec_label_pc_cf4:
  %0 = call i32 @shmget(i32 %key, i32 %size, i32 %shmflg), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define void (i32)* @function_d00(i32 %sig, void (i32)* %handler) local_unnamed_addr {
dec_label_pc_d00:
  %0 = call void (i32)* @signal(i32 %sig, void (i32)* %handler), !insn.addr !18
  ret void (i32)* %0, !insn.addr !18
}

define i32 @function_d0c(i32* %s1, i32* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_d0c:
  %0 = call i32 @memcmp(i32* %s1, i32* %s2, i32 %n), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @function_d18(i32 %seconds) local_unnamed_addr {
dec_label_pc_d18:
  %0 = call i32 @sleep(i32 %seconds), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i16 @function_d24(i16 %hostshort) local_unnamed_addr {
dec_label_pc_d24:
  %0 = call i16 @htons(i16 %hostshort), !insn.addr !21
  ret i16 %0, !insn.addr !21
}

define void @function_d30(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_d30:
  call void @rewind(%_IO_FILE* %stream), !insn.addr !22
  ret void, !insn.addr !22
}

define i32 @function_d3c(i32 %seconds) local_unnamed_addr {
dec_label_pc_d3c:
  %0 = call i32 @alarm(i32 %seconds), !insn.addr !23
  ret i32 %0, !insn.addr !23
}

define i32 @function_d48(i8* %name) local_unnamed_addr {
dec_label_pc_d48:
  %0 = call i32 @unlink(i8* %name), !insn.addr !24
  ret i32 %0, !insn.addr !24
}

define i32 @function_d54(i32 %stat_loc) local_unnamed_addr {
dec_label_pc_d54:
  %0 = call i32 @wait(i32 %stat_loc), !insn.addr !25
  ret i32 %0, !insn.addr !25
}

define i32* @function_d60(i32 %shmid, i32* %shmaddr, i32 %shmflg) local_unnamed_addr {
dec_label_pc_d60:
  %0 = call i32* @shmat(i32 %shmid, i32* %shmaddr, i32 %shmflg), !insn.addr !26
  ret i32* %0, !insn.addr !26
}

define i32 @function_d6c(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_d6c:
  %0 = call i32 @fwrite(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !27
  ret i32 %0, !insn.addr !27
}

define i32 @function_d78(i32 %useconds) local_unnamed_addr {
dec_label_pc_d78:
  %0 = call i32 @usleep(i32 %useconds), !insn.addr !28
  ret i32 %0, !insn.addr !28
}

define i32 @function_d84(i32 %pid, i32* %stat_loc, i32 %options) local_unnamed_addr {
dec_label_pc_d84:
  %0 = call i32 @waitpid(i32 %pid, i32* %stat_loc, i32 %options), !insn.addr !29
  ret i32 %0, !insn.addr !29
}

define i8* @function_d90(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_d90:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !30
  ret i8* %0, !insn.addr !30
}

define i32 @function_d9c(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_d9c:
  %0 = call i32 @fread(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream), !insn.addr !31
  ret i32 %0, !insn.addr !31
}

define i32 @function_da8(i32 %shmid, i32 %cmd, %shmid_ds* %buf) local_unnamed_addr {
dec_label_pc_da8:
  %0 = call i32 @shmctl(i32 %shmid, i32 %cmd, %shmid_ds* %buf), !insn.addr !32
  ret i32 %0, !insn.addr !32
}

define i32* @function_db4(i32 %size) local_unnamed_addr {
dec_label_pc_db4:
  %0 = call i32* @malloc(i32 %size), !insn.addr !33
  ret i32* %0, !insn.addr !33
}

define i32 @function_dc0(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_dc0:
  %0 = call i32 @__atomic_load_4(i32 %arg1, i32 %arg2), !insn.addr !34
  ret i32 %0, !insn.addr !34
}

define void @function_dcc() local_unnamed_addr {
dec_label_pc_dcc:
  call void @__gmon_start__(), !insn.addr !35
  ret void, !insn.addr !35
}

define i32 @function_dd8(i8* %file, %stat* %buf) local_unnamed_addr {
dec_label_pc_dd8:
  %0 = call i32 @stat(i8* %file, %stat* %buf), !insn.addr !36
  ret i32 %0, !insn.addr !36
}

define i32 @function_de4(i8* %file, i32 %oflag, ...) local_unnamed_addr {
dec_label_pc_de4:
  %0 = call i32 (i8*, i32, ...) @open(i8* %file, i32 %oflag), !insn.addr !37
  ret i32 %0, !insn.addr !37
}

define i32 @function_df0(i32 %sysno, ...) local_unnamed_addr {
dec_label_pc_df0:
  %0 = call i32 (i32, ...) @syscall(i32 %sysno), !insn.addr !38
  ret i32 %0, !insn.addr !38
}

define i32 @function_dfc(i8* %s) local_unnamed_addr {
dec_label_pc_dfc:
  %0 = call i32 @strlen(i8* %s), !insn.addr !39
  ret i32 %0, !insn.addr !39
}

define i8* @function_e08(i8* %s, i32 %c) local_unnamed_addr {
dec_label_pc_e08:
  %0 = call i8* @strchr(i8* %s, i32 %c), !insn.addr !40
  ret i8* %0, !insn.addr !40
}

define i32 @function_e14(i32 %arg1, i32* %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_e14:
  %0 = call i32 @__atomic_compare_exchange_4(i32 %arg1, i32* %arg2, i32 %arg3), !insn.addr !41
  ret i32 %0, !insn.addr !41
}

define i32* @function_e20() local_unnamed_addr {
dec_label_pc_e20:
  %0 = call i32* @__errno_location(), !insn.addr !42
  ret i32* %0, !insn.addr !42
}

define i32 @function_e2c(i8* %s, i32 %maxlen, i8* %format, ...) local_unnamed_addr {
dec_label_pc_e2c:
  %0 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %s, i32 %maxlen, i8* %format), !insn.addr !43
  ret i32 %0, !insn.addr !43
}

define i32 @function_e38(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_e38:
  %0 = call i32 (i8*, i8*, ...) @sscanf(i8* %s, i8* %format), !insn.addr !44
  ret i32 %0, !insn.addr !44
}

define i32 @function_e44(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_e44:
  %0 = call i32 @bind(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !45
  ret i32 %0, !insn.addr !45
}

define i32* @function_e50(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_e50:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !46
  ret i32* %0, !insn.addr !46
}

define i8* @function_e5c(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_e5c:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !47
  ret i8* %0, !insn.addr !47
}

define i32 @function_e68(i32 %fd, i32* %buf, i32 %n) local_unnamed_addr {
dec_label_pc_e68:
  %0 = call i32 @write(i32 %fd, i32* %buf, i32 %n), !insn.addr !48
  ret i32 %0, !insn.addr !48
}

define i32 @function_e74(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_e74:
  %0 = call i32 @fileno(%_IO_FILE* %stream), !insn.addr !49
  ret i32 %0, !insn.addr !49
}

define i32 @function_e80(i32* %shmaddr) local_unnamed_addr {
dec_label_pc_e80:
  %0 = call i32 @shmdt(i32* %shmaddr), !insn.addr !50
  ret i32 %0, !insn.addr !50
}

define i32 @function_e8c(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_e8c:
  %0 = call i32 @fclose(%_IO_FILE* %stream), !insn.addr !51
  ret i32 %0, !insn.addr !51
}

define i32 @function_e98([2 x i32] %pipedes) local_unnamed_addr {
dec_label_pc_e98:
  %0 = call i32 @pipe([2 x i32] %pipedes), !insn.addr !52
  ret i32 %0, !insn.addr !52
}

define i32 @function_ea4(i32* %newthread, i32* %attr, i32* (i32*)* %start_routine, i32* %arg) local_unnamed_addr {
dec_label_pc_ea4:
  %0 = call i32 @pthread_create(i32* %newthread, i32* %attr, i32* (i32*)* %start_routine, i32* %arg), !insn.addr !53
  ret i32 %0, !insn.addr !53
}

define i32 @function_eb0() local_unnamed_addr {
dec_label_pc_eb0:
  %0 = call i32 @fork(), !insn.addr !54
  ret i32 %0, !insn.addr !54
}

define i32 @function_ebc(i8* %path, i8* %arg, ...) local_unnamed_addr {
dec_label_pc_ebc:
  %0 = call i32 (i8*, i8*, ...) @execl(i8* %path, i8* %arg), !insn.addr !55
  ret i32 %0, !insn.addr !55
}

define i32 @function_ec8(i32 %fd, i32 %n) local_unnamed_addr {
dec_label_pc_ec8:
  %0 = call i32 @listen(i32 %fd, i32 %n), !insn.addr !56
  ret i32 %0, !insn.addr !56
}

define i32 @function_ed4(i8* %pathname, i32 %proj_id) local_unnamed_addr {
dec_label_pc_ed4:
  %0 = call i32 @ftok(i8* %pathname, i32 %proj_id), !insn.addr !57
  ret i32 %0, !insn.addr !57
}

define i32 @function_ee0(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_ee0:
  %0 = call i32 @__atomic_store_4(i32 %arg1, i32 %arg2, i32 %arg3), !insn.addr !58
  ret i32 %0, !insn.addr !58
}

define i32 @function_eec(i32* %cond, i32* %mutex) local_unnamed_addr {
dec_label_pc_eec:
  %0 = call i32 @pthread_cond_wait(i32* %cond, i32* %mutex), !insn.addr !59
  ret i32 %0, !insn.addr !59
}

define i32 @function_ef8(i32 %domain, i32 %type, i32 %protocol) local_unnamed_addr {
dec_label_pc_ef8:
  %0 = call i32 @socket(i32 %domain, i32 %type, i32 %protocol), !insn.addr !60
  ret i32 %0, !insn.addr !60
}

define i32 @function_f04(i32 %th, i32** %thread_return) local_unnamed_addr {
dec_label_pc_f04:
  %0 = call i32 @pthread_join(i32 %th, i32** %thread_return), !insn.addr !61
  ret i32 %0, !insn.addr !61
}

define i32 @function_f10(i32 %th) local_unnamed_addr {
dec_label_pc_f10:
  %0 = call i32 @pthread_cancel(i32 %th), !insn.addr !62
  ret i32 %0, !insn.addr !62
}

define i32 @function_f1c(i32* %cond) local_unnamed_addr {
dec_label_pc_f1c:
  %0 = call i32 @pthread_cond_signal(i32* %cond), !insn.addr !63
  ret i32 %0, !insn.addr !63
}

define void @function_f28() local_unnamed_addr {
dec_label_pc_f28:
  call void @abort(), !insn.addr !64
  ret void, !insn.addr !64
}

define i32 @function_f34(i32 %fd) local_unnamed_addr {
dec_label_pc_f34:
  %0 = call i32 @close(i32 %fd), !insn.addr !65
  ret i32 %0, !insn.addr !65
}

define i32 @_start(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_f40:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !66
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !66
  %2 = call i32 @__libc_start_main(i32 ptrtoint (i32* @global_var_331c to i32), i32 %arg2, i8** nonnull %0, void ()* null, void ()* null, void ()* %1), !insn.addr !66
  call void @abort(), !insn.addr !67
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !67
}

define i32 @call_weak_fn() local_unnamed_addr {
dec_label_pc_f84:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* @global_var_14114, align 4, !insn.addr !68
  %3 = icmp eq i32 %2, 0, !insn.addr !69
  br i1 %3, label %4, label %dec_label_pc_f9c, !insn.addr !70

; <label>:4:                                      ; preds = %dec_label_pc_f84
  ret i32 %1, !insn.addr !70

dec_label_pc_f9c:                                 ; preds = %dec_label_pc_f84
  call void @__gmon_start__(), !insn.addr !71
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !71
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_fa8:
  ret i32 ptrtoint (i8** @global_var_14128 to i32), !insn.addr !72
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_fec:
  ret i32 ptrtoint (i8** @global_var_14128 to i32), !insn.addr !73
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_103c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i8, i8* bitcast (i8** @global_var_14128 to i8*), align 4, !insn.addr !74
  %3 = icmp eq i8 %2, 0, !insn.addr !75
  br i1 %3, label %dec_label_pc_1058, label %4, !insn.addr !76

; <label>:4:                                      ; preds = %dec_label_pc_103c
  ret i32 %1, !insn.addr !76

dec_label_pc_1058:                                ; preds = %dec_label_pc_103c
  %5 = load i32, i32* @global_var_1410c, align 4, !insn.addr !77
  %6 = icmp eq i32 %5, 0, !insn.addr !78
  br i1 %6, label %dec_label_pc_1078, label %dec_label_pc_106c, !insn.addr !79

dec_label_pc_106c:                                ; preds = %dec_label_pc_1058
  %7 = load i32, i32* inttoptr (i32 82212 to i32*), align 4, !insn.addr !80
  %8 = inttoptr i32 %7 to i32*, !insn.addr !81
  call void @__cxa_finalize(i32* %8), !insn.addr !81
  br label %dec_label_pc_1078, !insn.addr !81

dec_label_pc_1078:                                ; preds = %dec_label_pc_106c, %dec_label_pc_1058
  %9 = call i32 @deregister_tm_clones(), !insn.addr !82
  store i8 1, i8* bitcast (i8** @global_var_14128 to i8*), align 4, !insn.addr !83
  ret i32 %9, !insn.addr !84

; uselistorder directives
  uselistorder i8** @global_var_14128, { 1, 0 }
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_10a4:
  %0 = call i32 @register_tm_clones(), !insn.addr !85
  ret i32 %0, !insn.addr !85
}

define i32 @param_strcpy(i8* %dst, i8* %src) local_unnamed_addr {
dec_label_pc_10a8:
  %0 = call i8* @strcpy(i8* %dst, i8* %src), !insn.addr !86
  %1 = call i32 @strlen(i8* %dst), !insn.addr !87
  ret i32 %1, !insn.addr !88
}

define i32 @call_strcpy() local_unnamed_addr {
dec_label_pc_10dc:
  %buffer_-40 = alloca [1 x i8], align 1
  %0 = getelementptr inbounds [1 x i8], [1 x i8]* %buffer_-40, i32 0, i32 0, !insn.addr !89
  %1 = call i32 @param_strcpy(i8* nonnull %0, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_33f4, i32 0, i32 0)), !insn.addr !89
  ret i32 %1, !insn.addr !90
}

define i32 @param_strcmp(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_1110:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !91
  %1 = icmp slt i32 %0, 1, !insn.addr !92
  %2 = ashr i32 %0, 31
  %storemerge = select i1 %1, i32 %2, i32 1
  ret i32 %storemerge, !insn.addr !93
}

define i32 @call_strcmp() local_unnamed_addr {
dec_label_pc_1170:
  %0 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_33fd, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_3401, i32 0, i32 0)), !insn.addr !94
  %1 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_3405, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_3405, i32 0, i32 0)), !insn.addr !95
  %2 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_3409, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_340d, i32 0, i32 0)), !insn.addr !96
  %3 = add i32 %1, %0, !insn.addr !97
  %4 = add i32 %3, %2, !insn.addr !98
  ret i32 %4, !insn.addr !99

; uselistorder directives
  uselistorder i32 (i8*, i8*)* @param_strcmp, { 2, 1, 0 }
}

define i32 @param_strlen(i8* %str) local_unnamed_addr {
dec_label_pc_11f4:
  %0 = call i32 @strlen(i8* %str), !insn.addr !100
  ret i32 %0, !insn.addr !101
}

define i32 @call_strlen() local_unnamed_addr {
dec_label_pc_1220:
  %0 = call i32 @param_strlen(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_3411, i32 0, i32 0)), !insn.addr !102
  ret i32 %0, !insn.addr !103
}

define i32 @param_memcpy(i8* %dst, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1250:
  %0 = bitcast i8* %dst to i32*, !insn.addr !104
  %1 = call i32* @memcpy(i32* %0, i32* %src, i32 %n), !insn.addr !104
  ret i32 %n, !insn.addr !105
}

define i32 @call_memcpy() local_unnamed_addr {
dec_label_pc_1288:
  %src_-36 = alloca [1 x i32], align 4
  %stack_var_-56 = alloca i32, align 4
  store [1 x i32] [i32 10], [1 x i32]* %src_-36, align 4, !insn.addr !106
  store i32 0, i32* %stack_var_-56, align 4, !insn.addr !107
  %0 = bitcast i32* %stack_var_-56 to i8*, !insn.addr !108
  %1 = getelementptr inbounds [1 x i32], [1 x i32]* %src_-36, i32 0, i32 0, !insn.addr !108
  %2 = call i32 @param_memcpy(i8* nonnull %0, i32* nonnull %1, i32 20), !insn.addr !108
  %3 = load i32, i32* %stack_var_-56, align 4, !insn.addr !109
  ret i32 %3, !insn.addr !110

; uselistorder directives
  uselistorder i32* %stack_var_-56, { 1, 0, 2 }
}

define i32 @param_memcmp(i32* %p1, i32* %p2, i32 %n) local_unnamed_addr {
dec_label_pc_12f4:
  %0 = call i32 @memcmp(i32* %p1, i32* %p2, i32 %n), !insn.addr !111
  %1 = icmp slt i32 %0, 1, !insn.addr !112
  %2 = ashr i32 %0, 31
  %storemerge = select i1 %1, i32 %2, i32 1
  ret i32 %storemerge, !insn.addr !113
}

define i32 @call_memcmp() local_unnamed_addr {
dec_label_pc_135c:
  %arr3_-44 = alloca [1 x i32], align 4
  %arr2_-32 = alloca [1 x i32], align 4
  %arr1_-20 = alloca [1 x i32], align 4
  store [1 x i32] [i32 1], [1 x i32]* %arr1_-20, align 4, !insn.addr !114
  %0 = load i32, i32* inttoptr (i32 add (i32 ptrtoint (i32* @global_var_13b0 to i32), i32 ptrtoint (i32* @global_var_2460 to i32)) to i32*), align 4, !insn.addr !115
  %1 = insertvalue [1 x i32] undef, i32 %0, 0, !insn.addr !116
  store [1 x i32] %1, [1 x i32]* %arr2_-32, align 4, !insn.addr !116
  store [1 x i32] [i32 1], [1 x i32]* %arr3_-44, align 4, !insn.addr !117
  %2 = getelementptr inbounds [1 x i32], [1 x i32]* %arr1_-20, i32 0, i32 0, !insn.addr !118
  %3 = getelementptr inbounds [1 x i32], [1 x i32]* %arr2_-32, i32 0, i32 0, !insn.addr !118
  %4 = call i32 @param_memcmp(i32* nonnull %2, i32* nonnull %3, i32 12), !insn.addr !118
  %5 = getelementptr inbounds [1 x i32], [1 x i32]* %arr3_-44, i32 0, i32 0, !insn.addr !119
  %6 = call i32 @param_memcmp(i32* nonnull %2, i32* nonnull %5, i32 12), !insn.addr !119
  %7 = add i32 %6, %4, !insn.addr !120
  ret i32 %7, !insn.addr !121

; uselistorder directives
  uselistorder i32 (i32*, i32*, i32)* @param_memcmp, { 1, 0 }
}

define i32 @param_printf(i32 %x, i8* %name) local_unnamed_addr {
dec_label_pc_1438:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_341e, i32 0, i32 0), i32 %x, i8* %name), !insn.addr !122
  ret i32 %0, !insn.addr !123
}

define i32 @call_printf() local_unnamed_addr {
dec_label_pc_1478:
  %0 = call i32 @param_printf(i32 42, i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_1ffb to i32), i32 5264) to i8*)), !insn.addr !124
  ret i32 %0, !insn.addr !125
}

define i32 @param_scanf(i8* %input_str) local_unnamed_addr {
dec_label_pc_14ac:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = call i32 (i8*, i8*, ...) @sscanf(i8* %input_str, i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_1f67 to i32), i32 5324) to i8*)), !insn.addr !126
  %4 = icmp eq i32 %3, 2, !insn.addr !127
  %5 = add i32 %2, %1
  %spec.select = select i1 %4, i32 %5, i32 -1
  ret i32 %spec.select, !insn.addr !128

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @call_scanf() local_unnamed_addr {
dec_label_pc_151c:
  %0 = call i32 @param_scanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_3439, i32 0, i32 0)), !insn.addr !129
  ret i32 %0, !insn.addr !130
}

define i32 @param_fopen_fclose(i8* %filename) local_unnamed_addr {
dec_label_pc_153c:
  %storemerge.reg2mem = alloca i32, !insn.addr !131
  %0 = call %_IO_FILE* @fopen(i8* %filename, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_3441, i32 0, i32 0)), !insn.addr !132
  %1 = icmp eq %_IO_FILE* %0, null, !insn.addr !133
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !134
  br i1 %1, label %dec_label_pc_159c, label %dec_label_pc_157c, !insn.addr !134

dec_label_pc_157c:                                ; preds = %dec_label_pc_153c
  %2 = call i32 @fileno(%_IO_FILE* nonnull %0), !insn.addr !135
  %3 = call i32 @fclose(%_IO_FILE* nonnull %0), !insn.addr !136
  store i32 %2, i32* %storemerge.reg2mem, !insn.addr !137
  br label %dec_label_pc_159c, !insn.addr !137

dec_label_pc_159c:                                ; preds = %dec_label_pc_153c, %dec_label_pc_157c
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !138

; uselistorder directives
  uselistorder %_IO_FILE* %0, { 1, 0, 2 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_159c, { 1, 0 }
}

define i32 @call_fopen_fclose() local_unnamed_addr {
dec_label_pc_15b0:
  %0 = call i32 @param_fopen_fclose(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_3443, i32 0, i32 0)), !insn.addr !139
  %1 = add i32 %0, 1, !insn.addr !140
  %2 = icmp sgt i32 %1, 0, !insn.addr !141
  %spec.select = select i1 %2, i32 42, i32 -1
  ret i32 %spec.select, !insn.addr !142
}

define i32 @param_fread_fwrite(i8* %tmpfile) local_unnamed_addr {
dec_label_pc_15ec:
  %write_data_-12.0.reg2mem = alloca i8*, !insn.addr !143
  %read_buffer_-52 = alloca [1 x i8], align 1
  %0 = call %_IO_FILE* @fopen(i8* %tmpfile, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_3462, i32 0, i32 0)), !insn.addr !144
  %1 = icmp eq %_IO_FILE* %0, null, !insn.addr !145
  store i8* inttoptr (i32 -1 to i8*), i8** %write_data_-12.0.reg2mem, !insn.addr !146
  br i1 %1, label %dec_label_pc_172c, label %dec_label_pc_1638, !insn.addr !146

dec_label_pc_1638:                                ; preds = %dec_label_pc_15ec
  %2 = call i32 @strlen(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_344f, i32 0, i32 0)), !insn.addr !147
  %3 = call i32 @fwrite(i32* bitcast ([19 x i8]* @global_var_344f to i32*), i32 1, i32 %2, %_IO_FILE* nonnull %0), !insn.addr !148
  %4 = call i32 @strlen(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_344f, i32 0, i32 0)), !insn.addr !149
  %5 = icmp eq i32 %3, %4, !insn.addr !150
  br i1 %5, label %dec_label_pc_1694, label %dec_label_pc_1680, !insn.addr !151

dec_label_pc_1680:                                ; preds = %dec_label_pc_1638
  %6 = call i32 @fclose(%_IO_FILE* nonnull %0), !insn.addr !152
  store i8* inttoptr (i32 -2 to i8*), i8** %write_data_-12.0.reg2mem, !insn.addr !153
  br label %dec_label_pc_172c, !insn.addr !153

dec_label_pc_1694:                                ; preds = %dec_label_pc_1638
  call void @rewind(%_IO_FILE* nonnull %0), !insn.addr !154
  %7 = ptrtoint [1 x i8]* %read_buffer_-52 to i32, !insn.addr !155
  %8 = bitcast [1 x i8]* %read_buffer_-52 to i32*, !insn.addr !156
  %9 = call i32 @fread(i32* nonnull %8, i32 1, i32 %3, %_IO_FILE* nonnull %0), !insn.addr !156
  %10 = add i32 %9, %7, !insn.addr !157
  %11 = inttoptr i32 %10 to i8*, !insn.addr !157
  store i8 0, i8* %11, align 1, !insn.addr !157
  %12 = call i32 @fclose(%_IO_FILE* nonnull %0), !insn.addr !158
  %13 = call i32 @unlink(i8* %tmpfile), !insn.addr !159
  %14 = icmp eq i32 %9, %3, !insn.addr !160
  store i8* inttoptr (i32 -3 to i8*), i8** %write_data_-12.0.reg2mem, !insn.addr !161
  br i1 %14, label %dec_label_pc_16f8, label %dec_label_pc_172c, !insn.addr !161

dec_label_pc_16f8:                                ; preds = %dec_label_pc_1694
  %15 = getelementptr inbounds [1 x i8], [1 x i8]* %read_buffer_-52, i32 0, i32 0, !insn.addr !162
  %16 = call i32 @strcmp(i8* nonnull %15, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_344f, i32 0, i32 0)), !insn.addr !162
  %17 = icmp ne i32 %16, 0, !insn.addr !163
  %18 = icmp ne i1 %17, true, !insn.addr !163
  %phitmp = icmp eq i1 %18, false
  %phitmp2 = select i1 %phitmp, i8* inttoptr (i32 -3 to i8*), i8* inttoptr (i32 42 to i8*)
  store i8* %phitmp2, i8** %write_data_-12.0.reg2mem, !insn.addr !164
  br label %dec_label_pc_172c, !insn.addr !164

dec_label_pc_172c:                                ; preds = %dec_label_pc_16f8, %dec_label_pc_1694, %dec_label_pc_15ec, %dec_label_pc_1680
  %write_data_-12.0.reload = load i8*, i8** %write_data_-12.0.reg2mem
  %19 = ptrtoint i8* %write_data_-12.0.reload to i32, !insn.addr !165
  ret i32 %19, !insn.addr !166

; uselistorder directives
  uselistorder i32 %9, { 1, 0 }
  uselistorder %_IO_FILE* %0, { 0, 3, 1, 2, 4, 5 }
  uselistorder i8** %write_data_-12.0.reg2mem, { 0, 2, 1, 4, 3 }
  uselistorder i32 (i8*, i8*)* @strcmp, { 1, 0, 2 }
  uselistorder i8* inttoptr (i32 -3 to i8*), { 1, 0 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 2, 1, 0, 3 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 1, 0, 2 }
  uselistorder label %dec_label_pc_172c, { 0, 1, 3, 2 }
}

define i32 @call_fread_fwrite() local_unnamed_addr {
dec_label_pc_1744:
  %0 = call i32 @param_fread_fwrite(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_3465, i32 0, i32 0)), !insn.addr !167
  ret i32 %0, !insn.addr !168
}

define i32 @param_malloc_free(i32 %size) local_unnamed_addr {
dec_label_pc_1764:
  %storemerge1.reg2mem = alloca i32, !insn.addr !169
  %storemerge2.reg2mem = alloca i32, !insn.addr !169
  %0 = mul i32 %size, 4, !insn.addr !170
  %1 = call i32* @malloc(i32 %0), !insn.addr !171
  %2 = icmp eq i32* %1, null, !insn.addr !172
  store i32 -1, i32* %storemerge1.reg2mem, !insn.addr !173
  br i1 %2, label %dec_label_pc_181c, label %dec_label_pc_17ac.preheader, !insn.addr !173

dec_label_pc_17ac.preheader:                      ; preds = %dec_label_pc_1764
  %3 = icmp eq i32 %size, 0, !insn.addr !174
  %.pre = ptrtoint i32* %1 to i32
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !175
  br i1 %3, label %dec_label_pc_17e8, label %dec_label_pc_17c0, !insn.addr !175

dec_label_pc_17c0:                                ; preds = %dec_label_pc_17ac.preheader, %dec_label_pc_17c0
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %4 = mul i32 %storemerge2.reload, 10, !insn.addr !176
  %5 = mul i32 %storemerge2.reload, 4, !insn.addr !177
  %6 = add i32 %5, %.pre, !insn.addr !177
  %7 = inttoptr i32 %6 to i32*, !insn.addr !177
  store i32 %4, i32* %7, align 4, !insn.addr !177
  %8 = add nuw i32 %storemerge2.reload, 1, !insn.addr !178
  %9 = icmp ult i32 %8, %size, !insn.addr !174
  store i32 %8, i32* %storemerge2.reg2mem, !insn.addr !175
  br i1 %9, label %dec_label_pc_17c0, label %dec_label_pc_17e8, !insn.addr !175

dec_label_pc_17e8:                                ; preds = %dec_label_pc_17c0, %dec_label_pc_17ac.preheader
  %10 = load i32, i32* %1, align 4, !insn.addr !179
  %11 = add i32 %0, -4, !insn.addr !179
  %12 = add i32 %11, %.pre, !insn.addr !180
  %13 = inttoptr i32 %12 to i32*, !insn.addr !180
  %14 = load i32, i32* %13, align 4, !insn.addr !180
  %15 = add i32 %14, %10, !insn.addr !181
  call void @free(i32* nonnull %1), !insn.addr !182
  store i32 %15, i32* %storemerge1.reg2mem, !insn.addr !183
  br label %dec_label_pc_181c, !insn.addr !183

dec_label_pc_181c:                                ; preds = %dec_label_pc_1764, %dec_label_pc_17e8
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  ret i32 %storemerge1.reload, !insn.addr !184

; uselistorder directives
  uselistorder i32 %storemerge2.reload, { 0, 2, 1 }
  uselistorder i32 %.pre, { 1, 0 }
  uselistorder i32* %1, { 2, 1, 0, 3 }
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge1.reg2mem, { 0, 2, 1 }
  uselistorder i32 %size, { 2, 1, 0 }
  uselistorder label %dec_label_pc_181c, { 1, 0 }
  uselistorder label %dec_label_pc_17c0, { 1, 0 }
}

define i32 @call_malloc_free() local_unnamed_addr {
dec_label_pc_182c:
  %0 = call i32 @param_malloc_free(i32 10), !insn.addr !185
  ret i32 %0, !insn.addr !186
}

define i32 @param_memset(i8* %buffer, i32 %size) local_unnamed_addr {
dec_label_pc_1844:
  %sum_-24.0.lcssa.reg2mem = alloca i32, !insn.addr !187
  %sum_-24.01.reg2mem = alloca i32, !insn.addr !187
  %storemerge2.reg2mem = alloca i32, !insn.addr !187
  %0 = bitcast i8* %buffer to i32*, !insn.addr !188
  %1 = call i32* @memset(i32* %0, i32 0, i32 %size), !insn.addr !188
  %2 = icmp eq i32 %size, 0, !insn.addr !189
  store i32 0, i32* %sum_-24.0.lcssa.reg2mem, !insn.addr !190
  br i1 %2, label %dec_label_pc_18c4, label %dec_label_pc_1898.lr.ph, !insn.addr !190

dec_label_pc_1898.lr.ph:                          ; preds = %dec_label_pc_1844
  %3 = ptrtoint i8* %buffer to i32, !insn.addr !191
  store i32 0, i32* %storemerge2.reg2mem
  store i32 0, i32* %sum_-24.01.reg2mem
  br label %dec_label_pc_1898

dec_label_pc_1898:                                ; preds = %dec_label_pc_1898.lr.ph, %dec_label_pc_1898
  %sum_-24.01.reload = load i32, i32* %sum_-24.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %4 = add i32 %storemerge2.reload, %3, !insn.addr !192
  %5 = inttoptr i32 %4 to i8*, !insn.addr !192
  %6 = load i8, i8* %5, align 1, !insn.addr !192
  %7 = zext i8 %6 to i32, !insn.addr !192
  %8 = add i32 %sum_-24.01.reload, %7, !insn.addr !193
  %9 = add nuw i32 %storemerge2.reload, 1, !insn.addr !194
  %10 = icmp ult i32 %9, %size, !insn.addr !189
  store i32 %9, i32* %storemerge2.reg2mem, !insn.addr !190
  store i32 %8, i32* %sum_-24.01.reg2mem, !insn.addr !190
  store i32 %8, i32* %sum_-24.0.lcssa.reg2mem, !insn.addr !190
  br i1 %10, label %dec_label_pc_1898, label %dec_label_pc_18c4, !insn.addr !190

dec_label_pc_18c4:                                ; preds = %dec_label_pc_1898, %dec_label_pc_1844
  %sum_-24.0.lcssa.reload = load i32, i32* %sum_-24.0.lcssa.reg2mem
  ret i32 %sum_-24.0.lcssa.reload, !insn.addr !195

; uselistorder directives
  uselistorder i32* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-24.01.reg2mem, { 1, 0, 2 }
  uselistorder i32 %size, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1898, { 1, 0 }
}

define i32 @call_memset() local_unnamed_addr {
dec_label_pc_18d4:
  %0 = alloca i32
  %storemerge1.reg2mem = alloca i32, !insn.addr !196
  %1 = load i32, i32* %0
  %buffer_-48 = alloca [1 x i32], align 4
  %2 = ptrtoint [1 x i32]* %buffer_-48 to i32, !insn.addr !197
  store i32 0, i32* %storemerge1.reg2mem
  br label %dec_label_pc_18fc

dec_label_pc_18fc:                                ; preds = %dec_label_pc_18d4, %dec_label_pc_18fc
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %3 = mul i32 %storemerge1.reload, 4, !insn.addr !198
  %4 = add i32 %3, %2, !insn.addr !198
  %5 = inttoptr i32 %4 to i32*, !insn.addr !198
  store i32 255, i32* %5, align 4, !insn.addr !198
  %6 = add nuw nsw i32 %storemerge1.reload, 1, !insn.addr !199
  %7 = icmp ugt i32 %storemerge1.reload, 8, !insn.addr !200
  store i32 %6, i32* %storemerge1.reg2mem, !insn.addr !200
  br i1 %7, label %dec_label_pc_1920, label %dec_label_pc_18fc, !insn.addr !200

dec_label_pc_1920:                                ; preds = %dec_label_pc_18fc
  %8 = bitcast [1 x i32]* %buffer_-48 to i8*, !insn.addr !201
  %9 = call i32 @param_memset(i8* nonnull %8, i32 40), !insn.addr !201
  %10 = getelementptr inbounds [1 x i32], [1 x i32]* %buffer_-48, i32 0, i32 0, !insn.addr !202
  %11 = load i32, i32* %10, align 4, !insn.addr !202
  %12 = add i32 %11, %1, !insn.addr !203
  ret i32 %12, !insn.addr !204

; uselistorder directives
  uselistorder i32 %storemerge1.reload, { 1, 0, 2 }
  uselistorder i32* %storemerge1.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_18fc, { 1, 0 }
}

define i32 @param_strchr_strstr(i8* %str, i8 %ch, i8* %substr) local_unnamed_addr {
dec_label_pc_1944:
  %storemerge.reg2mem = alloca i32, !insn.addr !205
  %storemerge3.reg2mem = alloca i32, !insn.addr !205
  %0 = zext i8 %ch to i32
  %1 = call i8* @strchr(i8* %str, i32 %0), !insn.addr !206
  %2 = icmp eq i8* %1, null, !insn.addr !207
  store i32 -1, i32* %storemerge3.reg2mem, !insn.addr !208
  br i1 %2, label %dec_label_pc_199c, label %dec_label_pc_197c, !insn.addr !208

dec_label_pc_197c:                                ; preds = %dec_label_pc_1944
  %3 = ptrtoint i8* %1 to i32, !insn.addr !209
  %4 = ptrtoint i8* %str to i32, !insn.addr !210
  %5 = sub i32 %3, %4, !insn.addr !211
  store i32 %5, i32* %storemerge3.reg2mem, !insn.addr !212
  br label %dec_label_pc_199c, !insn.addr !212

dec_label_pc_199c:                                ; preds = %dec_label_pc_1944, %dec_label_pc_197c
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %6 = call i8* @strstr(i8* %str, i8* %substr), !insn.addr !213
  %7 = icmp eq i8* %6, null, !insn.addr !214
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !215
  br i1 %7, label %dec_label_pc_19e4, label %dec_label_pc_19c4, !insn.addr !215

dec_label_pc_19c4:                                ; preds = %dec_label_pc_199c
  %8 = ptrtoint i8* %6 to i32, !insn.addr !216
  %9 = ptrtoint i8* %str to i32, !insn.addr !217
  %10 = sub i32 %8, %9, !insn.addr !218
  store i32 %10, i32* %storemerge.reg2mem, !insn.addr !219
  br label %dec_label_pc_19e4, !insn.addr !219

dec_label_pc_19e4:                                ; preds = %dec_label_pc_199c, %dec_label_pc_19c4
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %11 = add i32 %storemerge.reload, %storemerge3.reload, !insn.addr !220
  ret i32 %11, !insn.addr !221

; uselistorder directives
  uselistorder i32* %storemerge3.reg2mem, { 0, 2, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i8* %str, { 1, 2, 0, 3 }
  uselistorder label %dec_label_pc_19e4, { 1, 0 }
  uselistorder label %dec_label_pc_199c, { 1, 0 }
}

define i32 @call_strchr_strstr() local_unnamed_addr {
dec_label_pc_1a04:
  %0 = call i32 @param_strchr_strstr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_347c, i32 0, i32 0), i8 66, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_3490, i32 0, i32 0)), !insn.addr !222
  ret i32 %0, !insn.addr !223
}

define void @test_standard_library_functions() local_unnamed_addr {
dec_label_pc_1a4c:
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3496 to i8*)), !insn.addr !224
  %1 = call i32 @call_strcpy(), !insn.addr !225
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_34bb to i8*)), !insn.addr !226
  %3 = call i32 @call_strcmp(), !insn.addr !227
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_34d6 to i8*)), !insn.addr !228
  %5 = call i32 @call_strlen(), !insn.addr !229
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_34f1 to i8*)), !insn.addr !230
  %7 = call i32 @call_memcpy(), !insn.addr !231
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_350d to i8*)), !insn.addr !232
  %9 = call i32 @call_memcmp(), !insn.addr !233
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3529 to i8*)), !insn.addr !234
  %11 = call i32 @call_printf(), !insn.addr !235
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3545 to i8*)), !insn.addr !236
  %13 = call i32 @call_scanf(), !insn.addr !237
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3561 to i8*)), !insn.addr !238
  %15 = call i32 @call_fopen_fclose(), !insn.addr !239
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_357e to i8*)), !insn.addr !240
  %17 = call i32 @call_fread_fwrite(), !insn.addr !241
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_359a to i8*)), !insn.addr !242
  %19 = call i32 @call_malloc_free(), !insn.addr !243
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_35b6 to i8*)), !insn.addr !244
  %21 = call i32 @call_memset(), !insn.addr !245
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_35d2 to i8*)), !insn.addr !246
  %23 = call i32 @call_strchr_strstr(), !insn.addr !247
  %24 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_35ed to i8*)), !insn.addr !248
  ret void, !insn.addr !249
}

define i32 @param_linux_syscall(i8* %pathname) local_unnamed_addr {
dec_label_pc_1b8c:
  %storemerge.reg2mem = alloca i32, !insn.addr !250
  %0 = call i32 (i32, ...) @syscall(i32 5), !insn.addr !251
  %1 = add i32 %0, 1, !insn.addr !252
  %2 = icmp sgt i32 %1, 0, !insn.addr !253
  br i1 %2, label %dec_label_pc_1bd4, label %dec_label_pc_1bc0, !insn.addr !253

dec_label_pc_1bc0:                                ; preds = %dec_label_pc_1b8c
  %3 = call i32* @__errno_location(), !insn.addr !254
  %4 = load i32, i32* %3, align 4, !insn.addr !255
  %5 = sub i32 0, %4, !insn.addr !256
  store i32 %5, i32* %storemerge.reg2mem, !insn.addr !257
  br label %dec_label_pc_1bec, !insn.addr !257

dec_label_pc_1bd4:                                ; preds = %dec_label_pc_1b8c
  %6 = call i32 (i32, ...) @syscall(i32 6), !insn.addr !258
  store i32 %0, i32* %storemerge.reg2mem, !insn.addr !259
  br label %dec_label_pc_1bec, !insn.addr !259

dec_label_pc_1bec:                                ; preds = %dec_label_pc_1bd4, %dec_label_pc_1bc0
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !260

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 (i32, ...)* @syscall, { 1, 0, 2 }
}

define i32 @call_linux_syscall() local_unnamed_addr {
dec_label_pc_1bfc:
  %0 = call i32 @param_linux_syscall(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_3443, i32 0, i32 0)), !insn.addr !261
  %1 = add i32 %0, 1, !insn.addr !262
  %2 = icmp sgt i32 %1, 0, !insn.addr !263
  %spec.select = select i1 %2, i32 42, i32 -1
  ret i32 %spec.select, !insn.addr !264
}

define i32 @param_win32_api(i8* %filename) local_unnamed_addr {
dec_label_pc_1c38:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-104 = alloca i32, align 4
  %2 = bitcast i32* %stack_var_-104 to %stat*, !insn.addr !265
  %3 = call i32 @stat(i8* %filename, %stat* nonnull %2), !insn.addr !265
  %4 = add i32 %3, 1, !insn.addr !266
  %5 = icmp sgt i32 %4, 0, !insn.addr !267
  %6 = icmp sgt i32 %1, 0
  %spec.select = select i1 %6, i32 42, i32 -2
  %storemerge = select i1 %5, i32 %spec.select, i32 -1
  ret i32 %storemerge, !insn.addr !268
}

define i32 @call_win32_api() local_unnamed_addr {
dec_label_pc_1c94:
  %0 = call i32 @param_win32_api(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_179b to i32), i32 7336) to i8*)), !insn.addr !269
  ret i32 %0, !insn.addr !270
}

define i32 @param_fork_exec(i8* %prog, i8* %arg) local_unnamed_addr {
dec_label_pc_1cb4:
  %0 = alloca i32
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !271
  %1 = load i32, i32* %0
  %stack_var_-28 = alloca i32, align 4
  %2 = call i32 @fork(), !insn.addr !272
  %3 = add i32 %2, 1, !insn.addr !273
  %4 = icmp sgt i32 %3, 0, !insn.addr !274
  store i32 -1, i32* %stack_var_-12.0.reg2mem, !insn.addr !274
  br i1 %4, label %dec_label_pc_1cec, label %dec_label_pc_1d70, !insn.addr !274

dec_label_pc_1cec:                                ; preds = %dec_label_pc_1cb4
  %5 = icmp eq i32 %2, 0, !insn.addr !275
  br i1 %5, label %dec_label_pc_1cfc, label %dec_label_pc_1d18, !insn.addr !276

dec_label_pc_1cfc:                                ; preds = %dec_label_pc_1cec
  %6 = call i32 (i8*, i8*, ...) @execl(i8* %prog, i8* %prog), !insn.addr !277
  call void @_exit(i32 127), !insn.addr !278
  unreachable, !insn.addr !278

dec_label_pc_1d18:                                ; preds = %dec_label_pc_1cec
  %7 = call i32 @waitpid(i32 %2, i32* nonnull %stack_var_-28, i32 0), !insn.addr !279
  %8 = add i32 %7, 1, !insn.addr !280
  %9 = icmp sgt i32 %8, 0, !insn.addr !281
  store i32 -2, i32* %stack_var_-12.0.reg2mem, !insn.addr !281
  br i1 %9, label %dec_label_pc_1d48, label %dec_label_pc_1d70, !insn.addr !281

dec_label_pc_1d48:                                ; preds = %dec_label_pc_1d18
  %10 = load i32, i32* %stack_var_-28, align 4, !insn.addr !282
  %11 = urem i32 %10, 128, !insn.addr !283
  %12 = icmp eq i32 %11, 0, !insn.addr !283
  %13 = urem i32 %1, 256
  %spec.select = select i1 %12, i32 %13, i32 -3
  ret i32 %spec.select

dec_label_pc_1d70:                                ; preds = %dec_label_pc_1d18, %dec_label_pc_1cb4
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !284

; uselistorder directives
  uselistorder i32* %stack_var_-28, { 1, 0 }
  uselistorder i8* %prog, { 1, 0 }
}

define i32 @call_fork_exec() local_unnamed_addr {
dec_label_pc_1d80:
  %0 = call i32 @param_fork_exec(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_3609, i32 0, i32 0), i8* null), !insn.addr !285
  %1 = icmp eq i32 %0, 0, !insn.addr !286
  %spec.select = select i1 %1, i32 42, i32 -1
  ret i32 %spec.select, !insn.addr !287
}

define i32 @param_pipe_communication() local_unnamed_addr {
dec_label_pc_1dc0:
  %0 = alloca i32
  %buffer_-52 = alloca [1 x i8], align 1
  %1 = load i32, i32* %0
  %pipefd_-12 = alloca [1 x i32], align 4
  %stack_var_-20 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-20 to i32, !insn.addr !288
  %3 = insertvalue [2 x i32] undef, i32 %2, 0, !insn.addr !289
  %4 = call i32 @pipe([2 x i32] %3), !insn.addr !289
  %5 = add i32 %4, 1, !insn.addr !290
  %6 = icmp sgt i32 %5, 0, !insn.addr !291
  br i1 %6, label %dec_label_pc_1dec, label %dec_label_pc_1de0, !insn.addr !291

dec_label_pc_1de0:                                ; preds = %dec_label_pc_1dc0
  store [1 x i32] [i32 -1], [1 x i32]* %pipefd_-12, align 4, !insn.addr !292
  br label %dec_label_pc_1ec4, !insn.addr !293

dec_label_pc_1dec:                                ; preds = %dec_label_pc_1dc0
  %7 = call i32 @fork(), !insn.addr !294
  %8 = add i32 %7, 1, !insn.addr !295
  %9 = icmp sgt i32 %8, 0, !insn.addr !296
  br i1 %9, label %dec_label_pc_1e10, label %dec_label_pc_1e04, !insn.addr !296

dec_label_pc_1e04:                                ; preds = %dec_label_pc_1dec
  store [1 x i32] [i32 -2], [1 x i32]* %pipefd_-12, align 4, !insn.addr !297
  br label %dec_label_pc_1ec4, !insn.addr !298

dec_label_pc_1e10:                                ; preds = %dec_label_pc_1dec
  %10 = icmp eq i32 %7, 0, !insn.addr !299
  br i1 %10, label %dec_label_pc_1e20, label %dec_label_pc_1e68, !insn.addr !300

dec_label_pc_1e20:                                ; preds = %dec_label_pc_1e10
  %11 = load i32, i32* %stack_var_-20, align 4, !insn.addr !301
  %12 = call i32 @close(i32 %11), !insn.addr !302
  %13 = call i32 @strlen(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_3613, i32 0, i32 0)), !insn.addr !303
  %14 = call i32 @write(i32 %1, i32* bitcast ([10 x i8]* @global_var_3613 to i32*), i32 %13), !insn.addr !304
  %15 = call i32 @close(i32 %1), !insn.addr !305
  call void @_exit(i32 0), !insn.addr !306
  unreachable, !insn.addr !306

dec_label_pc_1e68:                                ; preds = %dec_label_pc_1e10
  %16 = call i32 @close(i32 %1), !insn.addr !307
  %17 = load i32, i32* %stack_var_-20, align 4, !insn.addr !308
  %18 = ptrtoint [1 x i8]* %buffer_-52 to i32, !insn.addr !309
  %19 = bitcast [1 x i8]* %buffer_-52 to i32*, !insn.addr !310
  %20 = call i32 @read(i32 %17, i32* nonnull %19, i32 31), !insn.addr !310
  %21 = add i32 %20, %18, !insn.addr !311
  %22 = inttoptr i32 %21 to i8*, !insn.addr !311
  store i8 0, i8* %22, align 1, !insn.addr !311
  %23 = load i32, i32* %stack_var_-20, align 4, !insn.addr !312
  %24 = call i32 @close(i32 %23), !insn.addr !313
  %25 = call i32 @wait(i32 0), !insn.addr !314
  %26 = icmp sgt i32 %20, 0, !insn.addr !315
  %spec.select = select i1 %26, i32 42, i32 -3
  %27 = insertvalue [1 x i32] undef, i32 %spec.select, 0, !insn.addr !316
  store [1 x i32] %27, [1 x i32]* %pipefd_-12, align 4, !insn.addr !316
  br label %dec_label_pc_1ec4, !insn.addr !317

dec_label_pc_1ec4:                                ; preds = %dec_label_pc_1e68, %dec_label_pc_1e04, %dec_label_pc_1de0
  %28 = getelementptr inbounds [1 x i32], [1 x i32]* %pipefd_-12, i32 0, i32 0, !insn.addr !318
  %29 = load i32, i32* %28, align 4, !insn.addr !318
  ret i32 %29, !insn.addr !319

; uselistorder directives
  uselistorder i32 %20, { 1, 0 }
  uselistorder void (i32)* @_exit, { 1, 0, 2 }
  uselistorder [10 x i8]* @global_var_3613, { 1, 0 }
  uselistorder i32 ()* @fork, { 1, 0, 2 }
}

define i32 @call_pipe_communication() local_unnamed_addr {
dec_label_pc_1ed8:
  %0 = call i32 @param_pipe_communication(), !insn.addr !320
  ret i32 %0, !insn.addr !321
}

define i32 @param_socket_create() local_unnamed_addr {
dec_label_pc_1eec:
  %opt_-12.0.reg2mem = alloca i32, !insn.addr !322
  %addr_-36 = alloca i32, align 4
  %opt_-20 = alloca i32, align 4
  %0 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !323
  %1 = add i32 %0, 1, !insn.addr !324
  %2 = icmp sgt i32 %1, 0, !insn.addr !325
  store i32 -1, i32* %opt_-12.0.reg2mem, !insn.addr !325
  br i1 %2, label %dec_label_pc_1f28, label %dec_label_pc_2010, !insn.addr !325

dec_label_pc_1f28:                                ; preds = %dec_label_pc_1eec
  store i32 1, i32* %opt_-20, align 4, !insn.addr !326
  %3 = call i32 @setsockopt(i32 %0, i32 1, i32 2, i32* nonnull %opt_-20, i32 4), !insn.addr !327
  %4 = add i32 %3, 1, !insn.addr !328
  %5 = icmp sgt i32 %4, 0, !insn.addr !329
  br i1 %5, label %dec_label_pc_1f6c, label %dec_label_pc_1f58, !insn.addr !329

dec_label_pc_1f58:                                ; preds = %dec_label_pc_1f28
  %6 = call i32 @close(i32 %0), !insn.addr !330
  store i32 -2, i32* %opt_-12.0.reg2mem, !insn.addr !331
  br label %dec_label_pc_2010, !insn.addr !331

dec_label_pc_1f6c:                                ; preds = %dec_label_pc_1f28
  store i32 2, i32* %addr_-36, align 4, !insn.addr !332
  %7 = call i16 @htons(i16 0), !insn.addr !333
  %8 = bitcast i32* %addr_-36 to %sockaddr*, !insn.addr !334
  %9 = call i32 @bind(i32 %0, %sockaddr* nonnull %8, i32 16), !insn.addr !334
  %10 = add i32 %9, 1, !insn.addr !335
  %11 = icmp sgt i32 %10, 0, !insn.addr !336
  br i1 %11, label %dec_label_pc_1fd0, label %dec_label_pc_1fbc, !insn.addr !336

dec_label_pc_1fbc:                                ; preds = %dec_label_pc_1f6c
  %12 = call i32 @close(i32 %0), !insn.addr !337
  store i32 -3, i32* %opt_-12.0.reg2mem, !insn.addr !338
  br label %dec_label_pc_2010, !insn.addr !338

dec_label_pc_1fd0:                                ; preds = %dec_label_pc_1f6c
  %13 = call i32 @listen(i32 %0, i32 5), !insn.addr !339
  %14 = add i32 %13, 1, !insn.addr !340
  %15 = icmp sgt i32 %14, 0, !insn.addr !341
  %16 = call i32 @close(i32 %0)
  %. = select i1 %15, i32 42, i32 -4
  store i32 %., i32* %opt_-12.0.reg2mem, !insn.addr !342
  br label %dec_label_pc_2010, !insn.addr !342

dec_label_pc_2010:                                ; preds = %dec_label_pc_1fd0, %dec_label_pc_1eec, %dec_label_pc_1fbc, %dec_label_pc_1f58
  %opt_-12.0.reload = load i32, i32* %opt_-12.0.reg2mem
  ret i32 %opt_-12.0.reload, !insn.addr !343

; uselistorder directives
  uselistorder i32 %0, { 1, 2, 3, 4, 0, 5, 6 }
  uselistorder i32* %opt_-12.0.reg2mem, { 0, 1, 4, 3, 2 }
  uselistorder i32 2, { 0, 1, 2, 5, 3, 4 }
  uselistorder label %dec_label_pc_2010, { 0, 2, 3, 1 }
}

define i32 @call_socket_create() local_unnamed_addr {
dec_label_pc_2020:
  %0 = call i32 @param_socket_create(), !insn.addr !344
  ret i32 %0, !insn.addr !345
}

define i32 @param_shmget_shmat() local_unnamed_addr {
dec_label_pc_2034:
  %fd_-12.0.reg2mem = alloca i32, !insn.addr !346
  %0 = call i32 (i8*, i32, ...) @open(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_361d, i32 0, i32 0), i32 66), !insn.addr !347
  %1 = add i32 %0, 1, !insn.addr !348
  %2 = icmp sgt i32 %1, 0, !insn.addr !349
  store i32 -1, i32* %fd_-12.0.reg2mem, !insn.addr !349
  br i1 %2, label %dec_label_pc_2080, label %dec_label_pc_215c, !insn.addr !349

dec_label_pc_2080:                                ; preds = %dec_label_pc_2034
  %3 = call i32 @close(i32 %0), !insn.addr !350
  %4 = call i32 @ftok(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_361d, i32 0, i32 0), i32 42), !insn.addr !351
  %5 = add i32 %4, 1, !insn.addr !352
  %6 = icmp sgt i32 %5, 0, !insn.addr !353
  store i32 -1, i32* %fd_-12.0.reg2mem, !insn.addr !353
  br i1 %6, label %dec_label_pc_20b8, label %dec_label_pc_215c, !insn.addr !353

dec_label_pc_20b8:                                ; preds = %dec_label_pc_2080
  %7 = call i32 @shmget(i32 %4, i32 4096, i32 ptrtoint (i32* @global_var_3b6 to i32)), !insn.addr !354
  %8 = add i32 %7, 1, !insn.addr !355
  %9 = icmp sgt i32 %8, 0, !insn.addr !356
  store i32 -2, i32* %fd_-12.0.reg2mem, !insn.addr !356
  br i1 %9, label %dec_label_pc_20ec, label %dec_label_pc_215c, !insn.addr !356

dec_label_pc_20ec:                                ; preds = %dec_label_pc_20b8
  %10 = call i32* @shmat(i32 %7, i32* null, i32 0), !insn.addr !357
  %11 = icmp eq i32* %10, inttoptr (i32 -1 to i32*), !insn.addr !358
  store i32 -3, i32* %fd_-12.0.reg2mem, !insn.addr !359
  br i1 %11, label %dec_label_pc_215c, label %dec_label_pc_211c, !insn.addr !359

dec_label_pc_211c:                                ; preds = %dec_label_pc_20ec
  %12 = bitcast i32* %10 to i8*, !insn.addr !360
  %13 = call i8* @strcpy(i8* %12, i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_362f, i32 0, i32 0)), !insn.addr !361
  %14 = call i32 @strlen(i8* %12), !insn.addr !362
  %15 = call i32 @shmdt(i32* %10), !insn.addr !363
  %16 = call i32 @shmctl(i32 %7, i32 0, %shmid_ds* null), !insn.addr !364
  store i32 %14, i32* %fd_-12.0.reg2mem, !insn.addr !365
  br label %dec_label_pc_215c, !insn.addr !365

dec_label_pc_215c:                                ; preds = %dec_label_pc_20ec, %dec_label_pc_20b8, %dec_label_pc_2080, %dec_label_pc_2034, %dec_label_pc_211c
  %fd_-12.0.reload = load i32, i32* %fd_-12.0.reg2mem
  ret i32 %fd_-12.0.reload, !insn.addr !366

; uselistorder directives
  uselistorder i8* %12, { 1, 0 }
  uselistorder i32* %10, { 0, 2, 1 }
  uselistorder i32* %fd_-12.0.reg2mem, { 0, 5, 1, 2, 3, 4 }
  uselistorder i32 (i8*)* @strlen, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder i8* (i8*, i8*)* @strcpy, { 1, 0, 2 }
  uselistorder i32 (i32)* @close, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder label %dec_label_pc_215c, { 4, 0, 1, 2, 3 }
}

define i32 @call_shmget_shmat() local_unnamed_addr {
dec_label_pc_2178:
  %0 = call i32 @param_shmget_shmat(), !insn.addr !367
  %1 = icmp sgt i32 %0, 0, !insn.addr !368
  %spec.select = select i1 %1, i32 42, i32 -1
  ret i32 %spec.select, !insn.addr !369
}

define i32 @param_signal_handling() local_unnamed_addr {
dec_label_pc_21a8:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !370
  %.lcssa.reg2mem = alloca i32, !insn.addr !370
  %attempts_-16.27.reg2mem = alloca i32, !insn.addr !370
  %.reg2mem17 = alloca i1, !insn.addr !370
  %.lcssa5.reg2mem = alloca i1, !insn.addr !370
  %attempts_-16.09.reg2mem = alloca i32, !insn.addr !370
  %.reg2mem = alloca i1, !insn.addr !370
  %0 = call void (i32)* @signal(i32 10, void (i32)* inttoptr (i32 add (i32 ptrtoint (void (i32)** @global_var_210 to i32), i32 8640) to void (i32)*)), !insn.addr !371
  %1 = icmp eq void (i32)* %0, inttoptr (i32 -1 to void (i32)*), !insn.addr !372
  store i32 -1, i32* %stack_var_-12.0.reg2mem, !insn.addr !373
  br i1 %1, label %dec_label_pc_2398, label %dec_label_pc_21dc, !insn.addr !373

dec_label_pc_21dc:                                ; preds = %dec_label_pc_21a8
  %2 = call void (i32)* @signal(i32 14, void (i32)* inttoptr (i32 add (i32 ptrtoint (void (i32)** @global_var_1e8 to i32), i32 8680) to void (i32)*)), !insn.addr !374
  %3 = icmp eq void (i32)* %2, inttoptr (i32 -1 to void (i32)*), !insn.addr !375
  store i32 -2, i32* %stack_var_-12.0.reg2mem, !insn.addr !376
  br i1 %3, label %dec_label_pc_2398, label %dec_label_pc_2204, !insn.addr !376

dec_label_pc_2204:                                ; preds = %dec_label_pc_21dc
  store i32 0, i32* @global_var_14130, align 4, !insn.addr !377
  %4 = call i32 @raise(i32 10), !insn.addr !378
  %5 = load i32, i32* @global_var_14130, align 4, !insn.addr !379
  %6 = icmp eq i32 %5, 0, !insn.addr !380
  %narrow8 = icmp eq i1 %6, icmp sgt (i32* @global_var_3e8, i32* null)
  %7 = icmp eq i1 %narrow8, false, !insn.addr !381
  store i1 %6, i1* %.reg2mem, !insn.addr !382
  store i32 ptrtoint (i32* @global_var_3e8 to i32), i32* %attempts_-16.09.reg2mem, !insn.addr !382
  store i1 %6, i1* %.lcssa5.reg2mem, !insn.addr !382
  br i1 %7, label %dec_label_pc_2280, label %dec_label_pc_2274, !insn.addr !382

dec_label_pc_2274:                                ; preds = %dec_label_pc_2204, %dec_label_pc_2274
  %attempts_-16.09.reload = load i32, i32* %attempts_-16.09.reg2mem
  %.reload = load i1, i1* %.reg2mem
  %8 = sext i1 %.reload to i32
  %attempts_-16.1 = add i32 %attempts_-16.09.reload, %8
  %9 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !383
  %10 = load i32, i32* @global_var_14130, align 4, !insn.addr !379
  %11 = icmp eq i32 %10, 0, !insn.addr !380
  %12 = icmp sgt i32 %attempts_-16.1, 0
  %narrow = icmp eq i1 %12, %11
  %13 = icmp eq i1 %narrow, false, !insn.addr !381
  store i1 %11, i1* %.reg2mem, !insn.addr !382
  store i32 %attempts_-16.1, i32* %attempts_-16.09.reg2mem, !insn.addr !382
  store i1 %11, i1* %.lcssa5.reg2mem, !insn.addr !382
  br i1 %13, label %dec_label_pc_2280, label %dec_label_pc_2274, !insn.addr !382

dec_label_pc_2280:                                ; preds = %dec_label_pc_2274, %dec_label_pc_2204
  %.lcssa5.reload = load i1, i1* %.lcssa5.reg2mem
  store i32 -3, i32* %stack_var_-12.0.reg2mem, !insn.addr !384
  br i1 %.lcssa5.reload, label %dec_label_pc_2398, label %dec_label_pc_22a0, !insn.addr !384

dec_label_pc_22a0:                                ; preds = %dec_label_pc_2280
  %14 = load i32, i32* @global_var_14134, align 4, !insn.addr !385
  %15 = icmp eq i32 %14, 10, !insn.addr !386
  store i32 -4, i32* %stack_var_-12.0.reg2mem, !insn.addr !387
  br i1 %15, label %dec_label_pc_22c0, label %dec_label_pc_2398, !insn.addr !387

dec_label_pc_22c0:                                ; preds = %dec_label_pc_22a0
  store i32 0, i32* @global_var_14130, align 4, !insn.addr !388
  %16 = call i32 @alarm(i32 1), !insn.addr !389
  %17 = load i32, i32* @global_var_14130, align 4, !insn.addr !390
  %18 = icmp eq i32 %17, 0, !insn.addr !391
  %narrow46 = icmp eq i1 %18, icmp sgt ([5 x i8]* @global_var_7d0, [5 x i8]* null)
  %19 = icmp eq i1 %narrow46, false, !insn.addr !392
  store i1 %18, i1* %.reg2mem17, !insn.addr !393
  store i32 ptrtoint ([5 x i8]* @global_var_7d0 to i32), i32* %attempts_-16.27.reg2mem, !insn.addr !393
  store i32 %17, i32* %.lcssa.reg2mem, !insn.addr !393
  br i1 %19, label %dec_label_pc_233c, label %dec_label_pc_2330, !insn.addr !393

dec_label_pc_2330:                                ; preds = %dec_label_pc_22c0, %dec_label_pc_2330
  %attempts_-16.27.reload = load i32, i32* %attempts_-16.27.reg2mem
  %.reload18 = load i1, i1* %.reg2mem17
  %20 = sext i1 %.reload18 to i32
  %attempts_-16.3 = add i32 %attempts_-16.27.reload, %20
  %21 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !394
  %22 = load i32, i32* @global_var_14130, align 4, !insn.addr !390
  %23 = icmp eq i32 %22, 0, !insn.addr !391
  %24 = icmp sgt i32 %attempts_-16.3, 0
  %narrow4 = icmp eq i1 %24, %23
  %25 = icmp eq i1 %narrow4, false, !insn.addr !392
  store i1 %23, i1* %.reg2mem17, !insn.addr !393
  store i32 %attempts_-16.3, i32* %attempts_-16.27.reg2mem, !insn.addr !393
  store i32 %22, i32* %.lcssa.reg2mem, !insn.addr !393
  br i1 %25, label %dec_label_pc_233c, label %dec_label_pc_2330, !insn.addr !393

dec_label_pc_233c:                                ; preds = %dec_label_pc_2330, %dec_label_pc_22c0
  %.lcssa.reload = load i32, i32* %.lcssa.reg2mem
  %26 = icmp ne i32 %.lcssa.reload, 0, !insn.addr !395
  %27 = load i32, i32* @global_var_14134, align 4, !insn.addr !396
  %28 = icmp eq i32 %27, 14, !insn.addr !397
  %or.cond = icmp eq i1 %26, %28
  store i32 -5, i32* %stack_var_-12.0.reg2mem, !insn.addr !398
  br i1 %or.cond, label %dec_label_pc_2370, label %dec_label_pc_2398, !insn.addr !398

dec_label_pc_2370:                                ; preds = %dec_label_pc_233c
  %29 = call void (i32)* @signal(i32 10, void (i32)* null), !insn.addr !399
  %30 = call void (i32)* @signal(i32 14, void (i32)* null), !insn.addr !400
  store i32 42, i32* %stack_var_-12.0.reg2mem, !insn.addr !401
  br label %dec_label_pc_2398, !insn.addr !401

dec_label_pc_2398:                                ; preds = %dec_label_pc_233c, %dec_label_pc_22a0, %dec_label_pc_2280, %dec_label_pc_21dc, %dec_label_pc_21a8, %dec_label_pc_2370
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !402

; uselistorder directives
  uselistorder i1* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %attempts_-16.09.reg2mem, { 2, 0, 1 }
  uselistorder i1* %.reg2mem17, { 2, 0, 1 }
  uselistorder i32* %attempts_-16.27.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 6, 1, 2, 3, 4, 5 }
  uselistorder [5 x i8]* @global_var_7d0, { 1, 0 }
  uselistorder i32 -4, { 0, 2, 1 }
  uselistorder i32 14, { 1, 0, 2 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i32 10, { 1, 6, 2, 3, 4, 0, 5 }
  uselistorder label %dec_label_pc_2398, { 5, 0, 1, 2, 3, 4 }
  uselistorder label %dec_label_pc_2330, { 1, 0 }
  uselistorder label %dec_label_pc_2274, { 1, 0 }
}

define void @signal_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_23d0:
  store i32 1, i32* @global_var_14130, align 4, !insn.addr !403
  store i32 %sig, i32* @global_var_14134, align 4, !insn.addr !404
  ret void, !insn.addr !405

; uselistorder directives
  uselistorder i32* @global_var_14134, { 1, 0, 2 }
  uselistorder i32* @global_var_14130, { 2, 5, 1, 3, 6, 0, 4 }
}

define i32 @call_signal_handling() local_unnamed_addr {
dec_label_pc_2408:
  %0 = call i32 @param_signal_handling(), !insn.addr !406
  ret i32 %0, !insn.addr !407
}

define void @test_system_calls() local_unnamed_addr {
dec_label_pc_241c:
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_363c to i8*)), !insn.addr !408
  %1 = call i32 @call_linux_syscall(), !insn.addr !409
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3658 to i8*)), !insn.addr !410
  %3 = call i32 @call_win32_api(), !insn.addr !411
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3674 to i8*)), !insn.addr !412
  %5 = call i32 @call_fork_exec(), !insn.addr !413
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3690 to i8*)), !insn.addr !414
  %7 = call i32 @call_pipe_communication(), !insn.addr !415
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_36ac to i8*)), !insn.addr !416
  %9 = call i32 @call_socket_create(), !insn.addr !417
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_36c8 to i8*)), !insn.addr !418
  %11 = call i32 @call_shmget_shmat(), !insn.addr !419
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_36e4 to i8*)), !insn.addr !420
  %13 = call i32 @call_signal_handling(), !insn.addr !421
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3700 to i8*)), !insn.addr !422
  ret void, !insn.addr !423
}

define i8* @thread_compute(i8* %arg) local_unnamed_addr {
dec_label_pc_24e4:
  %0 = ptrtoint i8* %arg to i32, !insn.addr !424
  %1 = mul i32 %0, %0, !insn.addr !425
  %2 = call i32* @malloc(i32 4), !insn.addr !426
  store i32 %1, i32* %2, align 4, !insn.addr !427
  %3 = bitcast i32* %2 to i8*, !insn.addr !428
  ret i8* %3, !insn.addr !428
}

define i32 @param_pthread_create(i32 %x) local_unnamed_addr {
dec_label_pc_253c:
  %storemerge.reg2mem = alloca i32, !insn.addr !429
  %thread_ret_-28 = alloca i8*, align 4
  %stack_var_-20 = alloca i32, align 4
  %input_-24 = alloca i32, align 4
  store i32 %x, i32* %input_-24, align 4, !insn.addr !430
  %0 = call i32 @pthread_create(i32* nonnull %stack_var_-20, i32* null, i32* (i32*)* bitcast (i32* (i32*)** @global_var_24e4 to i32* (i32*)*), i32* nonnull %input_-24), !insn.addr !431
  %1 = icmp eq i32 %0, 0, !insn.addr !432
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !433
  br i1 %1, label %dec_label_pc_258c, label %dec_label_pc_25b8, !insn.addr !433

dec_label_pc_258c:                                ; preds = %dec_label_pc_253c
  %2 = load i32, i32* %stack_var_-20, align 4, !insn.addr !434
  %3 = bitcast i8** %thread_ret_-28 to i32**, !insn.addr !435
  %4 = call i32 @pthread_join(i32 %2, i32** nonnull %3), !insn.addr !435
  %5 = load i8*, i8** %thread_ret_-28, align 4
  %6 = bitcast i8* %5 to i32*, !insn.addr !436
  %7 = load i32, i32* %6, align 4, !insn.addr !436
  call void @free(i32* %6), !insn.addr !437
  store i32 %7, i32* %storemerge.reg2mem, !insn.addr !438
  br label %dec_label_pc_25b8, !insn.addr !438

dec_label_pc_25b8:                                ; preds = %dec_label_pc_253c, %dec_label_pc_258c
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !439

; uselistorder directives
  uselistorder i32* %stack_var_-20, { 1, 0 }
  uselistorder i8** %thread_ret_-28, { 1, 0 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_25b8, { 1, 0 }
}

define i32 @call_pthread_create() local_unnamed_addr {
dec_label_pc_25cc:
  %0 = call i32 @param_pthread_create(i32 7), !insn.addr !440
  ret i32 %0, !insn.addr !441
}

define i8* @thread_sum(i8* %arg) local_unnamed_addr {
dec_label_pc_25e4:
  %.reg2mem2 = alloca i32, !insn.addr !442
  %.reg2mem = alloca i32, !insn.addr !442
  %0 = ptrtoint i8* %arg to i32
  %1 = add i32 %0, 8, !insn.addr !443
  %2 = inttoptr i32 %1 to i32*, !insn.addr !443
  store i32 0, i32* %2, align 4, !insn.addr !443
  %3 = add i32 %0, 4, !insn.addr !444
  %4 = inttoptr i32 %3 to i32*, !insn.addr !444
  %5 = load i32, i32* %4, align 4, !insn.addr !444
  %6 = icmp slt i32 %5, %0, !insn.addr !445
  store i32 0, i32* %.reg2mem, !insn.addr !445
  store i32 %0, i32* %.reg2mem2, !insn.addr !445
  br i1 %6, label %dec_label_pc_2650, label %dec_label_pc_2628, !insn.addr !445

dec_label_pc_2628:                                ; preds = %dec_label_pc_25e4, %dec_label_pc_2628
  %.reload3 = load i32, i32* %.reg2mem2
  %.reload = load i32, i32* %.reg2mem, !insn.addr !446
  %7 = add i32 %.reload3, %.reload, !insn.addr !447
  store i32 %7, i32* %2, align 4, !insn.addr !448
  %8 = add i32 %.reload3, 1, !insn.addr !449
  %9 = load i32, i32* %4, align 4, !insn.addr !444
  %10 = icmp slt i32 %9, %8, !insn.addr !445
  store i32 %7, i32* %.reg2mem, !insn.addr !445
  store i32 %8, i32* %.reg2mem2, !insn.addr !445
  br i1 %10, label %dec_label_pc_2650, label %dec_label_pc_2628, !insn.addr !445

dec_label_pc_2650:                                ; preds = %dec_label_pc_2628, %dec_label_pc_25e4
  ret i8* null, !insn.addr !450

; uselistorder directives
  uselistorder i32* %4, { 1, 0 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %.reg2mem2, { 2, 0, 1 }
  uselistorder label %dec_label_pc_2628, { 1, 0 }
}

define i32 @param_pthread_join() local_unnamed_addr {
dec_label_pc_265c:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !451
  %total_-68.03.reg2mem = alloca i32, !insn.addr !451
  %storemerge14.reg2mem = alloca i32, !insn.addr !451
  %storemerge5.reg2mem = alloca i32, !insn.addr !451
  %stack_var_-24 = alloca i32, align 4
  %data_-60 = alloca i32, align 4
  %0 = call i32* @memset(i32* nonnull %data_-60, i32 0, i32 36), !insn.addr !452
  store i32 1, i32* %data_-60, align 4, !insn.addr !453
  %1 = ptrtoint i32* %stack_var_-24 to i32
  %2 = ptrtoint i32* %data_-60 to i32
  store i32 0, i32* %storemerge5.reg2mem
  br label %dec_label_pc_26c8

dec_label_pc_26b8:                                ; preds = %dec_label_pc_26c8
  %3 = add nuw nsw i32 %storemerge5.reload, 1, !insn.addr !454
  %4 = icmp ugt i32 %storemerge5.reload, 1, !insn.addr !455
  store i32 %3, i32* %storemerge5.reg2mem, !insn.addr !455
  br i1 %4, label %dec_label_pc_272c.preheader, label %dec_label_pc_26c8, !insn.addr !455

dec_label_pc_272c.preheader:                      ; preds = %dec_label_pc_26b8
  %5 = add i32 %2, 8
  store i32 0, i32* %storemerge14.reg2mem
  store i32 0, i32* %total_-68.03.reg2mem
  br label %dec_label_pc_273c

dec_label_pc_26c8:                                ; preds = %dec_label_pc_265c, %dec_label_pc_26b8
  %storemerge5.reload = load i32, i32* %storemerge5.reg2mem
  %6 = mul i32 %storemerge5.reload, 4, !insn.addr !456
  %7 = add i32 %6, %1, !insn.addr !456
  %8 = mul nuw nsw i32 %storemerge5.reload, 12, !insn.addr !457
  %9 = add i32 %8, %2, !insn.addr !457
  %10 = inttoptr i32 %7 to i32*, !insn.addr !458
  %11 = inttoptr i32 %9 to i32*, !insn.addr !458
  %12 = call i32 @pthread_create(i32* %10, i32* null, i32* (i32*)* inttoptr (i32 9700 to i32* (i32*)*), i32* %11), !insn.addr !458
  %13 = icmp eq i32 %12, 0, !insn.addr !459
  store i32 -1, i32* %stack_var_-12.0.reg2mem, !insn.addr !460
  br i1 %13, label %dec_label_pc_26b8, label %dec_label_pc_27a8, !insn.addr !460

dec_label_pc_273c:                                ; preds = %dec_label_pc_272c.preheader, %dec_label_pc_2768
  %storemerge14.reload = load i32, i32* %storemerge14.reg2mem
  %14 = mul i32 %storemerge14.reload, 4, !insn.addr !461
  %15 = add i32 %14, %1, !insn.addr !461
  %16 = inttoptr i32 %15 to i32*, !insn.addr !461
  %17 = load i32, i32* %16, align 4, !insn.addr !461
  %18 = call i32 @pthread_join(i32 %17, i32** null), !insn.addr !462
  %19 = icmp eq i32 %18, 0, !insn.addr !463
  store i32 -2, i32* %stack_var_-12.0.reg2mem, !insn.addr !464
  br i1 %19, label %dec_label_pc_2768, label %dec_label_pc_27a8, !insn.addr !464

dec_label_pc_2768:                                ; preds = %dec_label_pc_273c
  %total_-68.03.reload = load i32, i32* %total_-68.03.reg2mem
  %20 = mul nuw nsw i32 %storemerge14.reload, 12, !insn.addr !465
  %21 = add i32 %5, %20, !insn.addr !466
  %22 = inttoptr i32 %21 to i32*, !insn.addr !466
  %23 = load i32, i32* %22, align 4, !insn.addr !466
  %24 = add i32 %23, %total_-68.03.reload, !insn.addr !467
  %25 = add nuw nsw i32 %storemerge14.reload, 1, !insn.addr !468
  %26 = icmp ugt i32 %storemerge14.reload, 1, !insn.addr !469
  store i32 %25, i32* %storemerge14.reg2mem, !insn.addr !469
  store i32 %24, i32* %total_-68.03.reg2mem, !insn.addr !469
  store i32 %24, i32* %stack_var_-12.0.reg2mem, !insn.addr !469
  br i1 %26, label %dec_label_pc_27a8, label %dec_label_pc_273c, !insn.addr !469

dec_label_pc_27a8:                                ; preds = %dec_label_pc_26c8, %dec_label_pc_2768, %dec_label_pc_273c
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !470

; uselistorder directives
  uselistorder i32 %storemerge14.reload, { 2, 0, 1, 3 }
  uselistorder i32 %storemerge5.reload, { 1, 3, 0, 2 }
  uselistorder i32* %data_-60, { 1, 2, 0 }
  uselistorder i32* %storemerge14.reg2mem, { 1, 0, 2 }
  uselistorder i32* %total_-68.03.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32* (i32*, i32, i32)* @memset, { 1, 0, 2 }
  uselistorder label %dec_label_pc_27a8, { 1, 2, 0 }
  uselistorder label %dec_label_pc_273c, { 1, 0 }
  uselistorder label %dec_label_pc_26c8, { 1, 0 }
}

define i32 @call_pthread_join() local_unnamed_addr {
dec_label_pc_27bc:
  %0 = call i32 @param_pthread_join(), !insn.addr !471
  ret i32 %0, !insn.addr !472
}

define i8* @thread_increment(i8* %arg) local_unnamed_addr {
dec_label_pc_27d0:
  %storemerge1.reg2mem = alloca i32, !insn.addr !473
  %0 = ptrtoint i8* %arg to i32
  %1 = icmp sgt i8* %arg, null, !insn.addr !474
  store i32 0, i32* %storemerge1.reg2mem, !insn.addr !474
  br i1 %1, label %dec_label_pc_280c, label %dec_label_pc_2858, !insn.addr !474

dec_label_pc_280c:                                ; preds = %dec_label_pc_27d0, %dec_label_pc_280c
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %2 = call i32 @pthread_mutex_lock(i32* nonnull @global_var_14138), !insn.addr !475
  %3 = load i32, i32* @global_var_14150, align 4, !insn.addr !476
  %4 = add i32 %3, 1, !insn.addr !477
  store i32 %4, i32* @global_var_14150, align 4, !insn.addr !478
  %5 = call i32 @pthread_mutex_unlock(i32* nonnull @global_var_14138), !insn.addr !479
  %6 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !480
  %7 = add nuw nsw i32 %storemerge1.reload, 1, !insn.addr !481
  %8 = icmp slt i32 %7, %0, !insn.addr !474
  store i32 %7, i32* %storemerge1.reg2mem, !insn.addr !474
  br i1 %8, label %dec_label_pc_280c, label %dec_label_pc_2858, !insn.addr !474

dec_label_pc_2858:                                ; preds = %dec_label_pc_280c, %dec_label_pc_27d0
  ret i8* null, !insn.addr !482

; uselistorder directives
  uselistorder i32* %storemerge1.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i32)* @usleep, { 2, 1, 0, 3 }
  uselistorder label %dec_label_pc_280c, { 1, 0 }
}

define i32 @param_mutex_lock(i32 %thread_count, i32 %iterations_per_thread) local_unnamed_addr {
dec_label_pc_2874:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !483
  %storemerge13.reg2mem = alloca i32, !insn.addr !483
  %storemerge4.reg2mem = alloca i32, !insn.addr !483
  %stack_var_-20 = alloca i32, align 4
  store i32 %iterations_per_thread, i32* %stack_var_-20, align 4, !insn.addr !484
  %0 = mul i32 %thread_count, 4, !insn.addr !485
  %1 = call i32* @malloc(i32 %0), !insn.addr !486
  %2 = icmp eq i32* %1, null, !insn.addr !487
  store i32 -1, i32* %stack_var_-12.0.reg2mem, !insn.addr !488
  br i1 %2, label %dec_label_pc_29b4, label %dec_label_pc_28b4, !insn.addr !488

dec_label_pc_28b4:                                ; preds = %dec_label_pc_2874
  store i32 0, i32* @global_var_14150, align 4, !insn.addr !489
  %3 = icmp sgt i32 %thread_count, 0
  br i1 %3, label %dec_label_pc_28e0.lr.ph, label %dec_label_pc_297c, !insn.addr !490

dec_label_pc_28e0.lr.ph:                          ; preds = %dec_label_pc_28b4
  %4 = ptrtoint i32* %1 to i32, !insn.addr !491
  store i32 0, i32* %storemerge4.reg2mem
  br label %dec_label_pc_28e0

dec_label_pc_28cc:                                ; preds = %dec_label_pc_28e0
  %5 = add nuw nsw i32 %storemerge4.reload, 1, !insn.addr !492
  %6 = icmp slt i32 %5, %thread_count, !insn.addr !490
  store i32 %5, i32* %storemerge4.reg2mem, !insn.addr !490
  store i32 0, i32* %storemerge13.reg2mem, !insn.addr !490
  br i1 %6, label %dec_label_pc_28e0, label %dec_label_pc_2954, !insn.addr !490

dec_label_pc_28e0:                                ; preds = %dec_label_pc_28e0.lr.ph, %dec_label_pc_28cc
  %storemerge4.reload = load i32, i32* %storemerge4.reg2mem
  %7 = mul i32 %storemerge4.reload, 4, !insn.addr !493
  %8 = add i32 %7, %4, !insn.addr !493
  %9 = inttoptr i32 %8 to i32*, !insn.addr !494
  %10 = call i32 @pthread_create(i32* %9, i32* null, i32* (i32*)* inttoptr (i32 10192 to i32* (i32*)*), i32* nonnull %stack_var_-20), !insn.addr !494
  %11 = icmp eq i32 %10, 0, !insn.addr !495
  br i1 %11, label %dec_label_pc_28cc, label %dec_label_pc_290c, !insn.addr !496

dec_label_pc_290c:                                ; preds = %dec_label_pc_28e0
  call void @free(i32* nonnull %1), !insn.addr !497
  store i32 -2, i32* %stack_var_-12.0.reg2mem, !insn.addr !498
  br label %dec_label_pc_29b4, !insn.addr !498

dec_label_pc_2954:                                ; preds = %dec_label_pc_28cc, %dec_label_pc_2954
  %storemerge13.reload = load i32, i32* %storemerge13.reg2mem
  %12 = mul i32 %storemerge13.reload, 4, !insn.addr !499
  %13 = add i32 %12, %4, !insn.addr !499
  %14 = inttoptr i32 %13 to i32*, !insn.addr !499
  %15 = load i32, i32* %14, align 4, !insn.addr !499
  %16 = call i32 @pthread_join(i32 %15, i32** null), !insn.addr !500
  %17 = add nuw nsw i32 %storemerge13.reload, 1, !insn.addr !501
  %18 = icmp slt i32 %17, %thread_count, !insn.addr !502
  store i32 %17, i32* %storemerge13.reg2mem, !insn.addr !502
  br i1 %18, label %dec_label_pc_2954, label %dec_label_pc_297c, !insn.addr !502

dec_label_pc_297c:                                ; preds = %dec_label_pc_2954, %dec_label_pc_28b4
  call void @free(i32* nonnull %1), !insn.addr !503
  %19 = load i32, i32* %stack_var_-20, align 4, !insn.addr !504
  %20 = mul i32 %19, %thread_count, !insn.addr !505
  %21 = load i32, i32* @global_var_14150, align 4, !insn.addr !506
  %22 = icmp eq i32 %21, %20, !insn.addr !507
  %spec.select = select i1 %22, i32 42, i32 -3
  store i32 %spec.select, i32* %stack_var_-12.0.reg2mem, !insn.addr !508
  br label %dec_label_pc_29b4, !insn.addr !508

dec_label_pc_29b4:                                ; preds = %dec_label_pc_2874, %dec_label_pc_297c, %dec_label_pc_290c
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !509

; uselistorder directives
  uselistorder i32 %storemerge4.reload, { 1, 0 }
  uselistorder i32* %stack_var_-20, { 1, 0, 2 }
  uselistorder i32* %storemerge13.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32* @global_var_14150, { 2, 0, 1, 3 }
  uselistorder i32 %thread_count, { 1, 3, 4, 2, 0 }
  uselistorder label %dec_label_pc_29b4, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2954, { 1, 0 }
  uselistorder label %dec_label_pc_28e0, { 1, 0 }
}

define i32 @call_mutex_lock() local_unnamed_addr {
dec_label_pc_29d0:
  %0 = call i32 @param_mutex_lock(i32 4, i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !510
  ret i32 %0, !insn.addr !511
}

define i8* @consumer_thread(i8* %arg) local_unnamed_addr {
dec_label_pc_29ec:
  %0 = call i32 @pthread_mutex_lock(i32* nonnull @global_var_14154), !insn.addr !512
  %1 = load i32, i32* @global_var_1416c, align 4, !insn.addr !513
  %2 = icmp eq i32 %1, 0, !insn.addr !514
  br i1 %2, label %dec_label_pc_2a20, label %dec_label_pc_2a38, !insn.addr !515

dec_label_pc_2a20:                                ; preds = %dec_label_pc_29ec, %dec_label_pc_2a20
  %3 = call i32 @pthread_cond_wait(i32* nonnull @global_var_14170, i32* nonnull @global_var_14154), !insn.addr !516
  %4 = load i32, i32* @global_var_1416c, align 4, !insn.addr !513
  %5 = icmp eq i32 %4, 0, !insn.addr !514
  br i1 %5, label %dec_label_pc_2a20, label %dec_label_pc_2a38, !insn.addr !515

dec_label_pc_2a38:                                ; preds = %dec_label_pc_2a20, %dec_label_pc_29ec
  %6 = load i32, i32* @global_var_141a0, align 4, !insn.addr !517
  %7 = call i32 @pthread_mutex_unlock(i32* nonnull @global_var_14154), !insn.addr !518
  %8 = call i32* @malloc(i32 4), !insn.addr !519
  store i32 %6, i32* %8, align 4, !insn.addr !520
  %9 = bitcast i32* %8 to i8*, !insn.addr !521
  ret i8* %9, !insn.addr !521

; uselistorder directives
  uselistorder label %dec_label_pc_2a20, { 1, 0 }
}

define i8* @producer_thread(i8* %arg) local_unnamed_addr {
dec_label_pc_2a90:
  %0 = call i32 @sleep(i32 1), !insn.addr !522
  %1 = call i32 @pthread_mutex_lock(i32* nonnull @global_var_14154), !insn.addr !523
  store i32 42, i32* @global_var_141a0, align 4, !insn.addr !524
  store i32 1, i32* @global_var_1416c, align 4, !insn.addr !525
  %2 = call i32 @pthread_cond_signal(i32* nonnull @global_var_14170), !insn.addr !526
  %3 = call i32 @pthread_mutex_unlock(i32* nonnull @global_var_14154), !insn.addr !527
  ret i8* null, !insn.addr !528

; uselistorder directives
  uselistorder i32 (i32*)* @pthread_mutex_unlock, { 2, 1, 0, 3 }
  uselistorder i32 (i32*)* @pthread_mutex_lock, { 2, 1, 0, 3 }
}

define i32 @param_condition_variable() local_unnamed_addr {
dec_label_pc_2b10:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !529
  %consumer_ret_-24 = alloca i8*, align 4
  %stack_var_-16 = alloca i32, align 4
  %consumer_-20 = alloca i32, align 4
  store i32 0, i32* @global_var_1416c, align 4, !insn.addr !530
  store i32 0, i32* @global_var_141a0, align 4, !insn.addr !531
  %0 = call i32 @pthread_create(i32* nonnull %consumer_-20, i32* null, i32* (i32*)* inttoptr (i32 10732 to i32* (i32*)*), i32* null), !insn.addr !532
  %1 = icmp eq i32 %0, 0, !insn.addr !533
  store i32 -1, i32* %stack_var_-12.0.reg2mem, !insn.addr !534
  br i1 %1, label %dec_label_pc_2b64, label %dec_label_pc_2bd4, !insn.addr !534

dec_label_pc_2b64:                                ; preds = %dec_label_pc_2b10
  %2 = call i32 @pthread_create(i32* nonnull %stack_var_-16, i32* null, i32* (i32*)* inttoptr (i32 10896 to i32* (i32*)*), i32* null), !insn.addr !535
  %3 = icmp eq i32 %2, 0, !insn.addr !536
  %4 = load i32, i32* %consumer_-20, align 4
  br i1 %3, label %dec_label_pc_2b9c, label %dec_label_pc_2b88, !insn.addr !537

dec_label_pc_2b88:                                ; preds = %dec_label_pc_2b64
  %5 = call i32 @pthread_cancel(i32 %4), !insn.addr !538
  store i32 -2, i32* %stack_var_-12.0.reg2mem, !insn.addr !539
  br label %dec_label_pc_2bd4, !insn.addr !539

dec_label_pc_2b9c:                                ; preds = %dec_label_pc_2b64
  %6 = bitcast i8** %consumer_ret_-24 to i32**, !insn.addr !540
  %7 = call i32 @pthread_join(i32 %4, i32** nonnull %6), !insn.addr !540
  %8 = load i32, i32* %stack_var_-16, align 4, !insn.addr !541
  %9 = call i32 @pthread_join(i32 %8, i32** null), !insn.addr !542
  %10 = load i8*, i8** %consumer_ret_-24, align 4
  %11 = bitcast i8* %10 to i32*, !insn.addr !543
  %12 = load i32, i32* %11, align 4, !insn.addr !543
  call void @free(i32* %11), !insn.addr !544
  store i32 %12, i32* %stack_var_-12.0.reg2mem, !insn.addr !545
  br label %dec_label_pc_2bd4, !insn.addr !545

dec_label_pc_2bd4:                                ; preds = %dec_label_pc_2b10, %dec_label_pc_2b9c, %dec_label_pc_2b88
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !546

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32* %consumer_-20, { 1, 0 }
  uselistorder i32* %stack_var_-16, { 1, 0 }
  uselistorder i8** %consumer_ret_-24, { 1, 0 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32* @global_var_1416c, { 1, 2, 3, 0 }
  uselistorder label %dec_label_pc_2bd4, { 1, 2, 0 }
}

define i32 @call_condition_variable() local_unnamed_addr {
dec_label_pc_2bf4:
  %0 = call i32 @param_condition_variable(), !insn.addr !547
  ret i32 %0, !insn.addr !548
}

define i8* @thread_atomic_increment(i8* %arg) local_unnamed_addr {
dec_label_pc_2c08:
  %storemerge1.reg2mem = alloca i32, !insn.addr !549
  %0 = ptrtoint i8* %arg to i32
  %stack_var_-32 = alloca i32, align 4
  %1 = icmp sgt i8* %arg, null, !insn.addr !550
  store i32 0, i32* %storemerge1.reg2mem, !insn.addr !550
  br i1 %1, label %dec_label_pc_2c44, label %dec_label_pc_2cbc, !insn.addr !550

dec_label_pc_2c44:                                ; preds = %dec_label_pc_2c08, %dec_label_pc_2c44
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %2 = call i32 @__atomic_fetch_add_4(), !insn.addr !551
  store i32 %storemerge1.reload, i32* %stack_var_-32, align 4, !insn.addr !552
  %3 = add i32 %storemerge1.reload, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !553
  %4 = call i32 @__atomic_compare_exchange_4(i32 ptrtoint (i32* @global_var_141a4 to i32), i32* nonnull %stack_var_-32, i32 %3), !insn.addr !554
  %5 = add nuw nsw i32 %storemerge1.reload, 1, !insn.addr !555
  %6 = icmp slt i32 %5, %0, !insn.addr !550
  store i32 %5, i32* %storemerge1.reg2mem, !insn.addr !550
  br i1 %6, label %dec_label_pc_2c44, label %dec_label_pc_2cbc, !insn.addr !550

dec_label_pc_2cbc:                                ; preds = %dec_label_pc_2c44, %dec_label_pc_2c08
  ret i8* null, !insn.addr !556

; uselistorder directives
  uselistorder i32 %storemerge1.reload, { 0, 2, 1 }
  uselistorder i32* %storemerge1.reg2mem, { 2, 0, 1 }
  uselistorder i32* @global_var_3e8, { 1, 0 }
  uselistorder i32 ptrtoint (i32* @global_var_3e8 to i32), { 5, 1, 2, 3, 4, 0 }
  uselistorder label %dec_label_pc_2c44, { 1, 0 }
}

define i8* @thread_atomic_load_store(i8* %arg) local_unnamed_addr {
dec_label_pc_2cd0:
  %0 = call i32 @__atomic_load_4(i32 ptrtoint (i32* @global_var_141a4 to i32), i32 5), !insn.addr !557
  %1 = add i32 %0, 100, !insn.addr !558
  %2 = call i32 @__atomic_store_4(i32 ptrtoint (i32* @global_var_141a4 to i32), i32 %1, i32 5), !insn.addr !559
  ret i8* null, !insn.addr !560

; uselistorder directives
  uselistorder i8* null, { 2, 3, 0, 4, 5, 1, 6, 7, 8, 9 }
}

define i32 @param_atomic_ops(i32 %thread_count, i32 %iterations) local_unnamed_addr {
dec_label_pc_2d38:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !561
  %storemerge13.reg2mem = alloca i32, !insn.addr !561
  %storemerge4.reg2mem = alloca i32, !insn.addr !561
  %load_store_tid_-36 = alloca i32, align 4
  %stack_var_-20 = alloca i32, align 4
  store i32 %iterations, i32* %stack_var_-20, align 4, !insn.addr !562
  %0 = mul i32 %thread_count, 4, !insn.addr !563
  %1 = call i32* @malloc(i32 %0), !insn.addr !564
  %2 = icmp eq i32* %1, null, !insn.addr !565
  store i32 -1, i32* %stack_var_-12.0.reg2mem, !insn.addr !566
  br i1 %2, label %dec_label_pc_2ec8, label %dec_label_pc_2d78, !insn.addr !566

dec_label_pc_2d78:                                ; preds = %dec_label_pc_2d38
  %3 = call i32 @__atomic_store_4(i32 ptrtoint (i32* @global_var_141a4 to i32), i32 0, i32 5), !insn.addr !567
  %4 = icmp sgt i32 %thread_count, 0
  br i1 %4, label %dec_label_pc_2db8.lr.ph, label %dec_label_pc_2e0c, !insn.addr !568

dec_label_pc_2db8.lr.ph:                          ; preds = %dec_label_pc_2d78
  %5 = ptrtoint i32* %1 to i32, !insn.addr !569
  store i32 0, i32* %storemerge4.reg2mem
  br label %dec_label_pc_2db8

dec_label_pc_2da4:                                ; preds = %dec_label_pc_2db8
  %6 = add nuw nsw i32 %storemerge4.reload, 1, !insn.addr !570
  %7 = icmp slt i32 %6, %thread_count, !insn.addr !568
  store i32 %6, i32* %storemerge4.reg2mem, !insn.addr !568
  br i1 %7, label %dec_label_pc_2db8, label %dec_label_pc_2e0c, !insn.addr !568

dec_label_pc_2db8:                                ; preds = %dec_label_pc_2db8.lr.ph, %dec_label_pc_2da4
  %storemerge4.reload = load i32, i32* %storemerge4.reg2mem
  %8 = mul i32 %storemerge4.reload, 4, !insn.addr !571
  %9 = add i32 %8, %5, !insn.addr !571
  %10 = inttoptr i32 %9 to i32*, !insn.addr !572
  %11 = call i32 @pthread_create(i32* %10, i32* null, i32* (i32*)* inttoptr (i32 11272 to i32* (i32*)*), i32* nonnull %stack_var_-20), !insn.addr !572
  %12 = icmp eq i32 %11, 0, !insn.addr !573
  br i1 %12, label %dec_label_pc_2da4, label %dec_label_pc_2de4, !insn.addr !574

dec_label_pc_2de4:                                ; preds = %dec_label_pc_2db8
  call void @free(i32* nonnull %1), !insn.addr !575
  store i32 -2, i32* %stack_var_-12.0.reg2mem, !insn.addr !576
  br label %dec_label_pc_2ec8, !insn.addr !576

dec_label_pc_2e0c:                                ; preds = %dec_label_pc_2da4, %dec_label_pc_2d78
  %13 = call i32 @pthread_create(i32* nonnull %load_store_tid_-36, i32* null, i32* (i32*)* inttoptr (i32 11472 to i32* (i32*)*), i32* null), !insn.addr !577
  %14 = icmp eq i32 %13, 0, !insn.addr !578
  br i1 %14, label %dec_label_pc_2e34, label %dec_label_pc_2e44, !insn.addr !579

dec_label_pc_2e34:                                ; preds = %dec_label_pc_2e0c
  %15 = load i32, i32* %load_store_tid_-36, align 4, !insn.addr !580
  %16 = call i32 @pthread_join(i32 %15, i32** null), !insn.addr !581
  br label %dec_label_pc_2e44, !insn.addr !582

dec_label_pc_2e44:                                ; preds = %dec_label_pc_2e0c, %dec_label_pc_2e34
  br i1 %4, label %dec_label_pc_2e64.lr.ph, label %dec_label_pc_2e8c, !insn.addr !583

dec_label_pc_2e64.lr.ph:                          ; preds = %dec_label_pc_2e44
  %17 = ptrtoint i32* %1 to i32, !insn.addr !584
  store i32 0, i32* %storemerge13.reg2mem
  br label %dec_label_pc_2e64

dec_label_pc_2e64:                                ; preds = %dec_label_pc_2e64.lr.ph, %dec_label_pc_2e64
  %storemerge13.reload = load i32, i32* %storemerge13.reg2mem
  %18 = mul i32 %storemerge13.reload, 4, !insn.addr !585
  %19 = add i32 %18, %17, !insn.addr !585
  %20 = inttoptr i32 %19 to i32*, !insn.addr !585
  %21 = load i32, i32* %20, align 4, !insn.addr !585
  %22 = call i32 @pthread_join(i32 %21, i32** null), !insn.addr !586
  %23 = add nuw nsw i32 %storemerge13.reload, 1, !insn.addr !587
  %24 = icmp slt i32 %23, %thread_count, !insn.addr !583
  store i32 %23, i32* %storemerge13.reg2mem, !insn.addr !583
  br i1 %24, label %dec_label_pc_2e64, label %dec_label_pc_2e8c, !insn.addr !583

dec_label_pc_2e8c:                                ; preds = %dec_label_pc_2e64, %dec_label_pc_2e44
  %25 = call i32 @__atomic_load_4(i32 ptrtoint (i32* @global_var_141a4 to i32), i32 5), !insn.addr !588
  call void @free(i32* nonnull %1), !insn.addr !589
  %26 = icmp sgt i32 %25, 0, !insn.addr !590
  %spec.select = select i1 %26, i32 42, i32 -3
  store i32 %spec.select, i32* %stack_var_-12.0.reg2mem, !insn.addr !591
  br label %dec_label_pc_2ec8, !insn.addr !591

dec_label_pc_2ec8:                                ; preds = %dec_label_pc_2d38, %dec_label_pc_2e8c, %dec_label_pc_2de4
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !592

; uselistorder directives
  uselistorder i32 %storemerge4.reload, { 1, 0 }
  uselistorder i32* %load_store_tid_-36, { 1, 0 }
  uselistorder i32* %storemerge13.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32 (i32, i32)* @__atomic_load_4, { 1, 0, 2 }
  uselistorder i32** null, { 1, 0, 2, 3, 4 }
  uselistorder i32 (i32, i32, i32)* @__atomic_store_4, { 1, 0, 2 }
  uselistorder i32 5, { 1, 2, 0, 3, 4, 5 }
  uselistorder i32 %thread_count, { 2, 3, 1, 0 }
  uselistorder label %dec_label_pc_2ec8, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2e64, { 1, 0 }
  uselistorder label %dec_label_pc_2e44, { 1, 0 }
  uselistorder label %dec_label_pc_2db8, { 1, 0 }
}

define i32 @call_atomic_ops() local_unnamed_addr {
dec_label_pc_2ee8:
  %0 = call i32 @param_atomic_ops(i32 4, i32 ptrtoint (i32* @global_var_1f4 to i32)), !insn.addr !593
  ret i32 %0, !insn.addr !594
}

define i8* @thread_tls_test(i8* %arg) local_unnamed_addr {
dec_label_pc_2f04:
  %0 = ptrtoint i8* %arg to i32
  %1 = call i32 @__aeabi_read_tp(i32 %0), !insn.addr !595
  %2 = add i32 %1, 8, !insn.addr !596
  %3 = inttoptr i32 %2 to i32*, !insn.addr !596
  %4 = load i32, i32* %3, align 4, !insn.addr !596
  %5 = add i32 %4, 50, !insn.addr !597
  store i32 %5, i32* %3, align 4, !insn.addr !598
  %6 = add i32 %1, 12, !insn.addr !599
  %7 = inttoptr i32 %6 to i8*, !insn.addr !600
  %8 = call i8* @strncpy(i8* %7, i8* %arg, i32 31), !insn.addr !600
  %9 = call i32* @malloc(i32 8), !insn.addr !601
  store i32 %4, i32* %9, align 4, !insn.addr !602
  %10 = load i32, i32* %3, align 4, !insn.addr !603
  %11 = ptrtoint i32* %9 to i32, !insn.addr !604
  %12 = add i32 %11, 4, !insn.addr !605
  %13 = inttoptr i32 %12 to i32*, !insn.addr !605
  store i32 %10, i32* %13, align 4, !insn.addr !605
  %14 = bitcast i32* %9 to i8*, !insn.addr !606
  ret i8* %14, !insn.addr !606

; uselistorder directives
  uselistorder i32* %9, { 0, 2, 1 }
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32 50, { 1, 0 }
  uselistorder i32 8, { 3, 2, 1, 5, 0, 4 }
}

define i32 @param_thread_local_storage(i32 %thread_count) local_unnamed_addr {
dec_label_pc_2f9c:
  %tids_-12.0.reg2mem = alloca i32*, !insn.addr !607
  %total_final_-44.0.lcssa.reg2mem = alloca i32, !insn.addr !607
  %total_initial_-40.0.lcssa.reg2mem = alloca i32, !insn.addr !607
  %total_initial_-40.09.reg2mem = alloca i32, !insn.addr !607
  %total_final_-44.010.reg2mem = alloca i32, !insn.addr !607
  %storemerge311.reg2mem = alloca i32, !insn.addr !607
  %storemerge18.reg2mem = alloca i32, !insn.addr !607
  %storemerge213.reg2mem = alloca i32, !insn.addr !607
  %storemerge14.reg2mem = alloca i32, !insn.addr !607
  %stack_var_-52 = alloca i32, align 4
  %0 = mul i32 %thread_count, 4, !insn.addr !608
  %1 = call i32* @malloc(i32 %0), !insn.addr !609
  %2 = call i32* @malloc(i32 %0), !insn.addr !610
  %3 = icmp eq i32* %1, null, !insn.addr !611
  %4 = icmp eq i32* %2, null, !insn.addr !612
  %or.cond = or i1 %3, %4
  store i32* inttoptr (i32 -1 to i32*), i32** %tids_-12.0.reg2mem, !insn.addr !613
  br i1 %or.cond, label %dec_label_pc_323c, label %dec_label_pc_3004.preheader, !insn.addr !613

dec_label_pc_3004.preheader:                      ; preds = %dec_label_pc_2f9c
  %5 = icmp sgt i32 %thread_count, 0
  store i32 0, i32* %total_initial_-40.0.lcssa.reg2mem, !insn.addr !614
  store i32 0, i32* %total_final_-44.0.lcssa.reg2mem, !insn.addr !614
  br i1 %5, label %dec_label_pc_3018.lr.ph, label %dec_label_pc_31bc, !insn.addr !614

dec_label_pc_3018.lr.ph:                          ; preds = %dec_label_pc_3004.preheader
  %6 = ptrtoint i32* %2 to i32
  store i32 0, i32* %storemerge14.reg2mem
  br label %dec_label_pc_3018

dec_label_pc_3080.lr.ph:                          ; preds = %dec_label_pc_3018
  %7 = ptrtoint i32* %1 to i32, !insn.addr !615
  store i32 0, i32* %storemerge213.reg2mem
  br label %dec_label_pc_3080

dec_label_pc_3018:                                ; preds = %dec_label_pc_3018.lr.ph, %dec_label_pc_3018
  %storemerge14.reload = load i32, i32* %storemerge14.reg2mem
  %8 = call i32* @malloc(i32 16), !insn.addr !616
  %9 = ptrtoint i32* %8 to i32, !insn.addr !616
  %10 = mul i32 %storemerge14.reload, 4, !insn.addr !617
  %11 = add i32 %10, %6, !insn.addr !617
  %12 = inttoptr i32 %11 to i32*, !insn.addr !617
  store i32 %9, i32* %12, align 4, !insn.addr !617
  %13 = bitcast i32* %8 to i8*, !insn.addr !618
  %14 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %13, i32 16, i8* inttoptr (i32 add (i32 ptrtoint ([11 x i8]* @global_var_6d0 to i32), i32 12364) to i8*)), !insn.addr !618
  %15 = add nuw nsw i32 %storemerge14.reload, 1, !insn.addr !619
  %16 = icmp slt i32 %15, %thread_count, !insn.addr !614
  store i32 %15, i32* %storemerge14.reg2mem, !insn.addr !614
  br i1 %16, label %dec_label_pc_3018, label %dec_label_pc_3080.lr.ph, !insn.addr !614

dec_label_pc_314c.lr.ph:                          ; preds = %dec_label_pc_3114
  %17 = bitcast i32* %stack_var_-52 to i32**, !insn.addr !620
  store i32 0, i32* %storemerge311.reg2mem
  store i32 0, i32* %total_final_-44.010.reg2mem
  store i32 0, i32* %total_initial_-40.09.reg2mem
  br label %dec_label_pc_314c

dec_label_pc_3080:                                ; preds = %dec_label_pc_3080.lr.ph, %dec_label_pc_3114
  %storemerge213.reload = load i32, i32* %storemerge213.reg2mem
  %18 = mul i32 %storemerge213.reload, 4, !insn.addr !621
  %19 = add i32 %18, %7, !insn.addr !621
  %20 = add i32 %18, %6, !insn.addr !622
  %21 = inttoptr i32 %20 to i32*, !insn.addr !622
  %22 = load i32, i32* %21, align 4, !insn.addr !622
  %23 = inttoptr i32 %19 to i32*, !insn.addr !623
  %24 = inttoptr i32 %22 to i32*, !insn.addr !623
  %25 = call i32 @pthread_create(i32* %23, i32* null, i32* (i32*)* inttoptr (i32 12036 to i32* (i32*)*), i32* %24), !insn.addr !623
  %26 = icmp eq i32 %25, 0, !insn.addr !624
  store i32 0, i32* %storemerge18.reg2mem, !insn.addr !625
  br i1 %26, label %dec_label_pc_3114, label %dec_label_pc_30d0, !insn.addr !625

dec_label_pc_30d0:                                ; preds = %dec_label_pc_3080, %dec_label_pc_30d0
  %storemerge18.reload = load i32, i32* %storemerge18.reg2mem
  %27 = mul i32 %storemerge18.reload, 4, !insn.addr !626
  %28 = add i32 %27, %6, !insn.addr !626
  %29 = inttoptr i32 %28 to i32*, !insn.addr !626
  %30 = load i32, i32* %29, align 4, !insn.addr !626
  %31 = inttoptr i32 %30 to i32*, !insn.addr !627
  call void @free(i32* %31), !insn.addr !627
  %32 = add nuw nsw i32 %storemerge18.reload, 1, !insn.addr !628
  %33 = icmp ult i32 %storemerge18.reload, %storemerge213.reload, !insn.addr !629
  store i32 %32, i32* %storemerge18.reg2mem, !insn.addr !629
  br i1 %33, label %dec_label_pc_30d0, label %dec_label_pc_30f4, !insn.addr !629

dec_label_pc_30f4:                                ; preds = %dec_label_pc_30d0
  call void @free(i32* %2), !insn.addr !630
  call void @free(i32* %1), !insn.addr !631
  store i32* inttoptr (i32 -2 to i32*), i32** %tids_-12.0.reg2mem, !insn.addr !632
  br label %dec_label_pc_323c, !insn.addr !632

dec_label_pc_3114:                                ; preds = %dec_label_pc_3080
  %34 = add nuw nsw i32 %storemerge213.reload, 1, !insn.addr !633
  %35 = icmp slt i32 %34, %thread_count, !insn.addr !634
  store i32 %34, i32* %storemerge213.reg2mem, !insn.addr !634
  br i1 %35, label %dec_label_pc_3080, label %dec_label_pc_314c.lr.ph, !insn.addr !634

dec_label_pc_314c:                                ; preds = %dec_label_pc_314c.lr.ph, %dec_label_pc_314c
  %total_initial_-40.09.reload = load i32, i32* %total_initial_-40.09.reg2mem
  %total_final_-44.010.reload = load i32, i32* %total_final_-44.010.reg2mem
  %storemerge311.reload = load i32, i32* %storemerge311.reg2mem
  %36 = mul i32 %storemerge311.reload, 4, !insn.addr !635
  %37 = add i32 %36, %7, !insn.addr !635
  %38 = inttoptr i32 %37 to i32*, !insn.addr !635
  %39 = load i32, i32* %38, align 4, !insn.addr !635
  %40 = call i32 @pthread_join(i32 %39, i32** nonnull %17), !insn.addr !620
  %41 = load i32, i32* %stack_var_-52, align 4, !insn.addr !636
  %42 = inttoptr i32 %41 to i32*, !insn.addr !637
  %43 = load i32, i32* %42, align 4, !insn.addr !637
  %44 = add i32 %43, %total_initial_-40.09.reload, !insn.addr !638
  %45 = add i32 %41, 4, !insn.addr !639
  %46 = inttoptr i32 %45 to i32*, !insn.addr !639
  %47 = load i32, i32* %46, align 4, !insn.addr !639
  %48 = add i32 %47, %total_final_-44.010.reload, !insn.addr !640
  call void @free(i32* %42), !insn.addr !641
  %49 = add i32 %36, %6, !insn.addr !642
  %50 = inttoptr i32 %49 to i32*, !insn.addr !642
  %51 = load i32, i32* %50, align 4, !insn.addr !642
  %52 = inttoptr i32 %51 to i32*, !insn.addr !643
  call void @free(i32* %52), !insn.addr !643
  %53 = add nuw nsw i32 %storemerge311.reload, 1, !insn.addr !644
  %54 = icmp slt i32 %53, %thread_count, !insn.addr !645
  store i32 %53, i32* %storemerge311.reg2mem, !insn.addr !645
  store i32 %48, i32* %total_final_-44.010.reg2mem, !insn.addr !645
  store i32 %44, i32* %total_initial_-40.09.reg2mem, !insn.addr !645
  store i32 %44, i32* %total_initial_-40.0.lcssa.reg2mem, !insn.addr !645
  store i32 %48, i32* %total_final_-44.0.lcssa.reg2mem, !insn.addr !645
  br i1 %54, label %dec_label_pc_314c, label %dec_label_pc_31bc, !insn.addr !645

dec_label_pc_31bc:                                ; preds = %dec_label_pc_314c, %dec_label_pc_3004.preheader
  %total_initial_-40.0.lcssa.reload = load i32, i32* %total_initial_-40.0.lcssa.reg2mem
  call void @free(i32* %2), !insn.addr !646
  call void @free(i32* %1), !insn.addr !647
  %55 = mul i32 %thread_count, 100, !insn.addr !648
  %56 = icmp eq i32 %total_initial_-40.0.lcssa.reload, %55, !insn.addr !649
  store i32* inttoptr (i32 -3 to i32*), i32** %tids_-12.0.reg2mem, !insn.addr !650
  br i1 %56, label %dec_label_pc_3208, label %dec_label_pc_323c, !insn.addr !650

dec_label_pc_3208:                                ; preds = %dec_label_pc_31bc
  %total_final_-44.0.lcssa.reload = load i32, i32* %total_final_-44.0.lcssa.reg2mem
  %57 = mul i32 %thread_count, 150, !insn.addr !651
  %58 = icmp ne i32 %total_final_-44.0.lcssa.reload, %57, !insn.addr !652
  %59 = icmp ne i1 %58, true, !insn.addr !652
  %phitmp = icmp eq i1 %59, false
  %phitmp6 = select i1 %phitmp, i32* inttoptr (i32 -3 to i32*), i32* inttoptr (i32 42 to i32*)
  store i32* %phitmp6, i32** %tids_-12.0.reg2mem, !insn.addr !653
  br label %dec_label_pc_323c, !insn.addr !653

dec_label_pc_323c:                                ; preds = %dec_label_pc_3208, %dec_label_pc_31bc, %dec_label_pc_2f9c, %dec_label_pc_30f4
  %tids_-12.0.reload = load i32*, i32** %tids_-12.0.reg2mem
  %60 = ptrtoint i32* %tids_-12.0.reload to i32, !insn.addr !654
  ret i32 %60, !insn.addr !655

; uselistorder directives
  uselistorder i32 %36, { 1, 0 }
  uselistorder i32 %storemerge18.reload, { 1, 0, 2 }
  uselistorder i32 %18, { 1, 0 }
  uselistorder i32* %2, { 2, 1, 0, 3 }
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32* %stack_var_-52, { 1, 0 }
  uselistorder i32* %storemerge14.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge213.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge18.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge311.reg2mem, { 1, 0, 2 }
  uselistorder i32* %total_final_-44.010.reg2mem, { 1, 0, 2 }
  uselistorder i32* %total_initial_-40.09.reg2mem, { 1, 0, 2 }
  uselistorder i32** %tids_-12.0.reg2mem, { 0, 2, 1, 4, 3 }
  uselistorder i32 42, { 10, 2, 12, 3, 0, 4, 13, 1, 5, 6, 7, 8, 11, 9, 14 }
  uselistorder i1 false, { 4, 2, 1, 3, 0, 5 }
  uselistorder i32 -3, { 7, 4, 5, 0, 1, 2, 6, 3, 8 }
  uselistorder i32* inttoptr (i32 -3 to i32*), { 1, 0 }
  uselistorder i32 (i32, i32**)* @pthread_join, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder i32 -2, { 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 10 }
  uselistorder void (i32*)* @free, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14 }
  uselistorder i32 (i32*, i32*, i32* (i32*)*, i32*)* @pthread_create, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder i32 -1, { 0, 1, 2, 3, 4, 5, 20, 16, 21, 6, 7, 8, 17, 9, 14, 18, 10, 11, 12, 22, 19, 13, 15 }
  uselistorder i32* null, { 3, 0, 2, 5, 6, 7, 4, 8, 9, 10, 11, 13, 12, 14, 15, 1, 16, 17 }
  uselistorder i32* (i32)* @malloc, { 8, 7, 6, 5, 4, 3, 2, 1, 0, 9 }
  uselistorder i32 %thread_count, { 2, 3, 4, 5, 6, 1, 0 }
  uselistorder label %dec_label_pc_323c, { 0, 1, 3, 2 }
  uselistorder label %dec_label_pc_314c, { 1, 0 }
  uselistorder label %dec_label_pc_30d0, { 1, 0 }
  uselistorder label %dec_label_pc_3080, { 1, 0 }
  uselistorder label %dec_label_pc_3018, { 1, 0 }
}

define i32 @call_thread_local_storage() local_unnamed_addr {
dec_label_pc_3254:
  %0 = call i32 @param_thread_local_storage(i32 4), !insn.addr !656
  ret i32 %0, !insn.addr !657

; uselistorder directives
  uselistorder i32 4, { 17, 23, 0, 1, 2, 3, 4, 24, 18, 5, 6, 7, 19, 20, 8, 9, 10, 11, 12, 25, 21, 16, 13, 14, 15, 22 }
}

define void @test_thread_concurrency() local_unnamed_addr {
dec_label_pc_326c:
  %0 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_4a6 to i32), i32 12928) to i8*)), !insn.addr !658
  %1 = call i32 @call_pthread_create(), !insn.addr !659
  %2 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_4b1 to i32), i32 12948) to i8*)), !insn.addr !660
  %3 = call i32 @call_pthread_join(), !insn.addr !661
  %4 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_4b9 to i32), i32 12968) to i8*)), !insn.addr !662
  %5 = call i32 @call_mutex_lock(), !insn.addr !663
  %6 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_4c2 to i32), i32 12988) to i8*)), !insn.addr !664
  %7 = call i32 @call_condition_variable(), !insn.addr !665
  %8 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_4ca to i32), i32 13008) to i8*)), !insn.addr !666
  %9 = call i32 @call_atomic_ops(), !insn.addr !667
  %10 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_4d2 to i32), i32 13028) to i8*)), !insn.addr !668
  %11 = call i32 @call_thread_local_storage(), !insn.addr !669
  %12 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_4da to i32), i32 13048) to i8*)), !insn.addr !670
  ret void, !insn.addr !671

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 29 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_331c:
  call void @test_standard_library_functions(), !insn.addr !672
  call void @test_system_calls(), !insn.addr !673
  call void @test_thread_concurrency(), !insn.addr !674
  ret i32 0, !insn.addr !675

; uselistorder directives
  uselistorder i32 0, { 23, 5, 194, 2, 3, 4, 6, 7, 0, 1, 26, 139, 8, 195, 196, 9, 27, 140, 10, 197, 198, 142, 141, 199, 31, 200, 11, 12, 28, 143, 13, 201, 202, 14, 15, 16, 144, 17, 145, 203, 204, 146, 205, 33, 147, 148, 206, 32, 149, 150, 151, 34, 35, 152, 153, 154, 155, 36, 37, 156, 157, 158, 159, 160, 38, 39, 161, 162, 163, 40, 41, 207, 164, 165, 208, 42, 43, 209, 166, 167, 210, 168, 169, 170, 171, 211, 172, 44, 45, 46, 47, 48, 49, 18, 20, 21, 19, 29, 173, 22, 30, 50, 51, 52, 53, 54, 57, 58, 55, 56, 174, 59, 60, 24, 25, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 175, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 87, 88, 85, 86, 192, 193, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191 }
}

define i32 @__aeabi_read_tp(i32 %arg1) local_unnamed_addr {
dec_label_pc_3350:
  %0 = call i32 @function_ffff0fe0(), !insn.addr !676
  ret i32 %0, !insn.addr !676
}

define i32 @_fini(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_3358:
  ret i32 %arg1, !insn.addr !677
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

declare i32 @__atomic_fetch_add_4() local_unnamed_addr

declare i32 @shmget(i32, i32, i32) local_unnamed_addr

declare void (i32)* @signal(i32, void (i32)*) local_unnamed_addr

declare i32 @memcmp(i32*, i32*, i32) local_unnamed_addr

declare i32 @sleep(i32) local_unnamed_addr

declare i16 @htons(i16) local_unnamed_addr

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

declare i32* @malloc(i32) local_unnamed_addr

declare i32 @__atomic_load_4(i32, i32) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare i32 @stat(i8*, %stat*) local_unnamed_addr

declare i32 @open(i8*, i32, ...) local_unnamed_addr

declare i32 @syscall(i32, ...) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i8* @strchr(i8*, i32) local_unnamed_addr

declare i32 @__atomic_compare_exchange_4(i32, i32*, i32) local_unnamed_addr

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
  uselistorder i32 1, { 7, 103, 104, 105, 106, 74, 16, 15, 14, 13, 12, 11, 10, 9, 8, 107, 108, 76, 75, 19, 18, 17, 109, 77, 20, 80, 79, 78, 21, 58, 59, 110, 111, 81, 24, 23, 22, 112, 113, 25, 54, 114, 55, 115, 60, 83, 82, 29, 28, 27, 26, 116, 31, 30, 86, 85, 84, 32, 61, 62, 39, 38, 37, 36, 35, 34, 33, 117, 118, 119, 40, 120, 121, 122, 64, 63, 123, 65, 88, 87, 41, 124, 125, 91, 90, 89, 6, 126, 127, 92, 42, 5, 128, 93, 4, 129, 130, 43, 45, 44, 131, 94, 46, 3, 132, 49, 48, 47, 133, 51, 50, 66, 67, 95, 52, 134, 53, 2, 98, 97, 96, 56, 68, 100, 99, 57, 69, 101, 1, 0, 102, 70, 71, 72, 73 }
}

!0 = !{i64 3108}
!1 = !{i64 3112}
!2 = !{i64 3144}
!3 = !{i64 3156}
!4 = !{i64 3168}
!5 = !{i64 3180}
!6 = !{i64 3192}
!7 = !{i64 3204}
!8 = !{i64 3216}
!9 = !{i64 3228}
!10 = !{i64 3240}
!11 = !{i64 3252}
!12 = !{i64 3264}
!13 = !{i64 3276}
!14 = !{i64 3288}
!15 = !{i64 3300}
!16 = !{i64 3312}
!17 = !{i64 3324}
!18 = !{i64 3336}
!19 = !{i64 3348}
!20 = !{i64 3360}
!21 = !{i64 3372}
!22 = !{i64 3384}
!23 = !{i64 3396}
!24 = !{i64 3408}
!25 = !{i64 3420}
!26 = !{i64 3432}
!27 = !{i64 3444}
!28 = !{i64 3456}
!29 = !{i64 3468}
!30 = !{i64 3480}
!31 = !{i64 3492}
!32 = !{i64 3504}
!33 = !{i64 3516}
!34 = !{i64 3528}
!35 = !{i64 3540}
!36 = !{i64 3552}
!37 = !{i64 3564}
!38 = !{i64 3576}
!39 = !{i64 3588}
!40 = !{i64 3600}
!41 = !{i64 3612}
!42 = !{i64 3624}
!43 = !{i64 3636}
!44 = !{i64 3648}
!45 = !{i64 3660}
!46 = !{i64 3672}
!47 = !{i64 3684}
!48 = !{i64 3696}
!49 = !{i64 3708}
!50 = !{i64 3720}
!51 = !{i64 3732}
!52 = !{i64 3744}
!53 = !{i64 3756}
!54 = !{i64 3768}
!55 = !{i64 3780}
!56 = !{i64 3792}
!57 = !{i64 3804}
!58 = !{i64 3816}
!59 = !{i64 3828}
!60 = !{i64 3840}
!61 = !{i64 3852}
!62 = !{i64 3864}
!63 = !{i64 3876}
!64 = !{i64 3888}
!65 = !{i64 3900}
!66 = !{i64 3956}
!67 = !{i64 3960}
!68 = !{i64 3984}
!69 = !{i64 3988}
!70 = !{i64 3992}
!71 = !{i64 3996}
!72 = !{i64 4036}
!73 = !{i64 4116}
!74 = !{i64 4168}
!75 = !{i64 4176}
!76 = !{i64 4180}
!77 = !{i64 4192}
!78 = !{i64 4196}
!79 = !{i64 4200}
!80 = !{i64 4208}
!81 = !{i64 4212}
!82 = !{i64 4216}
!83 = !{i64 4232}
!84 = !{i64 4236}
!85 = !{i64 4260}
!86 = !{i64 4292}
!87 = !{i64 4300}
!88 = !{i64 4312}
!89 = !{i64 4340}
!90 = !{i64 4360}
!91 = !{i64 4396}
!92 = !{i64 4412}
!93 = !{i64 4460}
!94 = !{i64 4492}
!95 = !{i64 4512}
!96 = !{i64 4536}
!97 = !{i64 4552}
!98 = !{i64 4560}
!99 = !{i64 4572}
!100 = !{i64 4616}
!101 = !{i64 4636}
!102 = !{i64 4668}
!103 = !{i64 4680}
!104 = !{i64 4724}
!105 = !{i64 4740}
!106 = !{i64 4776}
!107 = !{i64 4800}
!108 = !{i64 4812}
!109 = !{i64 4816}
!110 = !{i64 4844}
!111 = !{i64 4888}
!112 = !{i64 4904}
!113 = !{i64 4952}
!114 = !{i64 4976}
!115 = !{i64 5032}
!116 = !{i64 5036}
!117 = !{i64 5072}
!118 = !{i64 5096}
!119 = !{i64 5120}
!120 = !{i64 5136}
!121 = !{i64 5148}
!122 = !{i64 5212}
!123 = !{i64 5232}
!124 = !{i64 5264}
!125 = !{i64 5284}
!126 = !{i64 5328}
!127 = !{i64 5340}
!128 = !{i64 5396}
!129 = !{i64 5420}
!130 = !{i64 5428}
!131 = !{i64 5436}
!132 = !{i64 5464}
!133 = !{i64 5476}
!134 = !{i64 5480}
!135 = !{i64 5504}
!136 = !{i64 5516}
!137 = !{i64 5528}
!138 = !{i64 5544}
!139 = !{i64 5572}
!140 = !{i64 5588}
!141 = !{i64 5592}
!142 = !{i64 5604}
!143 = !{i64 5612}
!144 = !{i64 5652}
!145 = !{i64 5664}
!146 = !{i64 5668}
!147 = !{i64 5696}
!148 = !{i64 5716}
!149 = !{i64 5736}
!150 = !{i64 5748}
!151 = !{i64 5752}
!152 = !{i64 5764}
!153 = !{i64 5776}
!154 = !{i64 5784}
!155 = !{i64 5800}
!156 = !{i64 5808}
!157 = !{i64 5832}
!158 = !{i64 5840}
!159 = !{i64 5848}
!160 = !{i64 5864}
!161 = !{i64 5872}
!162 = !{i64 5888}
!163 = !{i64 5892}
!164 = !{i64 5904}
!165 = !{i64 5932}
!166 = !{i64 5944}
!167 = !{i64 5972}
!168 = !{i64 5980}
!169 = !{i64 5988}
!170 = !{i64 6008}
!171 = !{i64 6012}
!172 = !{i64 6024}
!173 = !{i64 6028}
!174 = !{i64 6068}
!175 = !{i64 6072}
!176 = !{i64 6088}
!177 = !{i64 6096}
!178 = !{i64 6108}
!179 = !{i64 6128}
!180 = !{i64 6132}
!181 = !{i64 6136}
!182 = !{i64 6148}
!183 = !{i64 6168}
!184 = !{i64 6184}
!185 = !{i64 6200}
!186 = !{i64 6208}
!187 = !{i64 6212}
!188 = !{i64 6248}
!189 = !{i64 6284}
!190 = !{i64 6288}
!191 = !{i64 6296}
!192 = !{i64 6304}
!193 = !{i64 6312}
!194 = !{i64 6328}
!195 = !{i64 6352}
!196 = !{i64 6356}
!197 = !{i64 6400}
!198 = !{i64 6408}
!199 = !{i64 6420}
!200 = !{i64 6388}
!201 = !{i64 6440}
!202 = !{i64 6444}
!203 = !{i64 6452}
!204 = !{i64 6464}
!205 = !{i64 6468}
!206 = !{i64 6500}
!207 = !{i64 6512}
!208 = !{i64 6516}
!209 = !{i64 6524}
!210 = !{i64 6528}
!211 = !{i64 6532}
!212 = !{i64 6540}
!213 = !{i64 6572}
!214 = !{i64 6584}
!215 = !{i64 6588}
!216 = !{i64 6596}
!217 = !{i64 6600}
!218 = !{i64 6604}
!219 = !{i64 6612}
!220 = !{i64 6644}
!221 = !{i64 6656}
!222 = !{i64 6700}
!223 = !{i64 6720}
!224 = !{i64 6748}
!225 = !{i64 6752}
!226 = !{i64 6768}
!227 = !{i64 6772}
!228 = !{i64 6788}
!229 = !{i64 6792}
!230 = !{i64 6808}
!231 = !{i64 6812}
!232 = !{i64 6828}
!233 = !{i64 6832}
!234 = !{i64 6848}
!235 = !{i64 6852}
!236 = !{i64 6868}
!237 = !{i64 6872}
!238 = !{i64 6888}
!239 = !{i64 6892}
!240 = !{i64 6908}
!241 = !{i64 6912}
!242 = !{i64 6928}
!243 = !{i64 6932}
!244 = !{i64 6948}
!245 = !{i64 6952}
!246 = !{i64 6968}
!247 = !{i64 6972}
!248 = !{i64 6988}
!249 = !{i64 6996}
!250 = !{i64 7052}
!251 = !{i64 7080}
!252 = !{i64 7092}
!253 = !{i64 7096}
!254 = !{i64 7104}
!255 = !{i64 7108}
!256 = !{i64 7112}
!257 = !{i64 7120}
!258 = !{i64 7132}
!259 = !{i64 7144}
!260 = !{i64 7160}
!261 = !{i64 7184}
!262 = !{i64 7200}
!263 = !{i64 7204}
!264 = !{i64 7216}
!265 = !{i64 7248}
!266 = !{i64 7252}
!267 = !{i64 7256}
!268 = !{i64 7312}
!269 = !{i64 7332}
!270 = !{i64 7340}
!271 = !{i64 7348}
!272 = !{i64 7368}
!273 = !{i64 7380}
!274 = !{i64 7384}
!275 = !{i64 7408}
!276 = !{i64 7412}
!277 = !{i64 7436}
!278 = !{i64 7444}
!279 = !{i64 7460}
!280 = !{i64 7472}
!281 = !{i64 7476}
!282 = !{i64 7496}
!283 = !{i64 7500}
!284 = !{i64 7548}
!285 = !{i64 7576}
!286 = !{i64 7592}
!287 = !{i64 7608}
!288 = !{i64 7628}
!289 = !{i64 7632}
!290 = !{i64 7636}
!291 = !{i64 7640}
!292 = !{i64 7652}
!293 = !{i64 7656}
!294 = !{i64 7660}
!295 = !{i64 7672}
!296 = !{i64 7676}
!297 = !{i64 7688}
!298 = !{i64 7692}
!299 = !{i64 7700}
!300 = !{i64 7704}
!301 = !{i64 7712}
!302 = !{i64 7716}
!303 = !{i64 7748}
!304 = !{i64 7764}
!305 = !{i64 7772}
!306 = !{i64 7780}
!307 = !{i64 7788}
!308 = !{i64 7792}
!309 = !{i64 7800}
!310 = !{i64 7808}
!311 = !{i64 7832}
!312 = !{i64 7836}
!313 = !{i64 7840}
!314 = !{i64 7848}
!315 = !{i64 7864}
!316 = !{i64 7868}
!317 = !{i64 7872}
!318 = !{i64 7876}
!319 = !{i64 7888}
!320 = !{i64 7904}
!321 = !{i64 7912}
!322 = !{i64 7916}
!323 = !{i64 7940}
!324 = !{i64 7952}
!325 = !{i64 7956}
!326 = !{i64 7980}
!327 = !{i64 8008}
!328 = !{i64 8012}
!329 = !{i64 8016}
!330 = !{i64 8028}
!331 = !{i64 8040}
!332 = !{i64 8072}
!333 = !{i64 8076}
!334 = !{i64 8108}
!335 = !{i64 8112}
!336 = !{i64 8116}
!337 = !{i64 8128}
!338 = !{i64 8140}
!339 = !{i64 8152}
!340 = !{i64 8156}
!341 = !{i64 8160}
!342 = !{i64 8204}
!343 = !{i64 8220}
!344 = !{i64 8232}
!345 = !{i64 8240}
!346 = !{i64 8244}
!347 = !{i64 8284}
!348 = !{i64 8296}
!349 = !{i64 8300}
!350 = !{i64 8324}
!351 = !{i64 8340}
!352 = !{i64 8352}
!353 = !{i64 8356}
!354 = !{i64 8392}
!355 = !{i64 8404}
!356 = !{i64 8408}
!357 = !{i64 8440}
!358 = !{i64 8452}
!359 = !{i64 8456}
!360 = !{i64 8444}
!361 = !{i64 8488}
!362 = !{i64 8496}
!363 = !{i64 8508}
!364 = !{i64 8524}
!365 = !{i64 8536}
!366 = !{i64 8552}
!367 = !{i64 8580}
!368 = !{i64 8600}
!369 = !{i64 8612}
!370 = !{i64 8616}
!371 = !{i64 8640}
!372 = !{i64 8644}
!373 = !{i64 8648}
!374 = !{i64 8680}
!375 = !{i64 8684}
!376 = !{i64 8688}
!377 = !{i64 8720}
!378 = !{i64 8728}
!379 = !{i64 8748}
!380 = !{i64 8756}
!381 = !{i64 8808}
!382 = !{i64 8812}
!383 = !{i64 8824}
!384 = !{i64 8844}
!385 = !{i64 8868}
!386 = !{i64 8872}
!387 = !{i64 8876}
!388 = !{i64 8908}
!389 = !{i64 8916}
!390 = !{i64 8936}
!391 = !{i64 8944}
!392 = !{i64 8996}
!393 = !{i64 9000}
!394 = !{i64 9012}
!395 = !{i64 9028}
!396 = !{i64 9044}
!397 = !{i64 9048}
!398 = !{i64 9032}
!399 = !{i64 9084}
!400 = !{i64 9096}
!401 = !{i64 9108}
!402 = !{i64 9124}
!403 = !{i64 9188}
!404 = !{i64 9204}
!405 = !{i64 9212}
!406 = !{i64 9232}
!407 = !{i64 9240}
!408 = !{i64 9260}
!409 = !{i64 9264}
!410 = !{i64 9280}
!411 = !{i64 9284}
!412 = !{i64 9300}
!413 = !{i64 9304}
!414 = !{i64 9320}
!415 = !{i64 9324}
!416 = !{i64 9340}
!417 = !{i64 9344}
!418 = !{i64 9360}
!419 = !{i64 9364}
!420 = !{i64 9380}
!421 = !{i64 9384}
!422 = !{i64 9400}
!423 = !{i64 9408}
!424 = !{i64 9468}
!425 = !{i64 9484}
!426 = !{i64 9496}
!427 = !{i64 9512}
!428 = !{i64 9528}
!429 = !{i64 9532}
!430 = !{i64 9552}
!431 = !{i64 9576}
!432 = !{i64 9588}
!433 = !{i64 9592}
!434 = !{i64 9612}
!435 = !{i64 9620}
!436 = !{i64 9628}
!437 = !{i64 9640}
!438 = !{i64 9652}
!439 = !{i64 9668}
!440 = !{i64 9688}
!441 = !{i64 9696}
!442 = !{i64 9700}
!443 = !{i64 9724}
!444 = !{i64 9752}
!445 = !{i64 9760}
!446 = !{i64 9776}
!447 = !{i64 9780}
!448 = !{i64 9784}
!449 = !{i64 9796}
!450 = !{i64 9816}
!451 = !{i64 9820}
!452 = !{i64 9848}
!453 = !{i64 9860}
!454 = !{i64 10000}
!455 = !{i64 9920}
!456 = !{i64 9936}
!457 = !{i64 9948}
!458 = !{i64 9964}
!459 = !{i64 9968}
!460 = !{i64 9972}
!461 = !{i64 10052}
!462 = !{i64 10060}
!463 = !{i64 10064}
!464 = !{i64 10068}
!465 = !{i64 10100}
!466 = !{i64 10104}
!467 = !{i64 10112}
!468 = !{i64 10128}
!469 = !{i64 10036}
!470 = !{i64 10164}
!471 = !{i64 10180}
!472 = !{i64 10188}
!473 = !{i64 10192}
!474 = !{i64 10244}
!475 = !{i64 10264}
!476 = !{i64 10284}
!477 = !{i64 10288}
!478 = !{i64 10292}
!479 = !{i64 10296}
!480 = !{i64 10304}
!481 = !{i64 10316}
!482 = !{i64 10340}
!483 = !{i64 10356}
!484 = !{i64 10372}
!485 = !{i64 10380}
!486 = !{i64 10384}
!487 = !{i64 10396}
!488 = !{i64 10400}
!489 = !{i64 10432}
!490 = !{i64 10456}
!491 = !{i64 10464}
!492 = !{i64 10536}
!493 = !{i64 10472}
!494 = !{i64 10492}
!495 = !{i64 10496}
!496 = !{i64 10500}
!497 = !{i64 10512}
!498 = !{i64 10524}
!499 = !{i64 10588}
!500 = !{i64 10596}
!501 = !{i64 10608}
!502 = !{i64 10572}
!503 = !{i64 10624}
!504 = !{i64 10632}
!505 = !{i64 10636}
!506 = !{i64 10648}
!507 = !{i64 10660}
!508 = !{i64 10672}
!509 = !{i64 10688}
!510 = !{i64 10720}
!511 = !{i64 10728}
!512 = !{i64 10756}
!513 = !{i64 10768}
!514 = !{i64 10772}
!515 = !{i64 10776}
!516 = !{i64 10800}
!517 = !{i64 10812}
!518 = !{i64 10828}
!519 = !{i64 10836}
!520 = !{i64 10852}
!521 = !{i64 10868}
!522 = !{i64 10920}
!523 = !{i64 10936}
!524 = !{i64 10956}
!525 = !{i64 10968}
!526 = !{i64 10980}
!527 = !{i64 10988}
!528 = !{i64 11004}
!529 = !{i64 11024}
!530 = !{i64 11048}
!531 = !{i64 11060}
!532 = !{i64 11080}
!533 = !{i64 11084}
!534 = !{i64 11088}
!535 = !{i64 11128}
!536 = !{i64 11132}
!537 = !{i64 11136}
!538 = !{i64 11148}
!539 = !{i64 11160}
!540 = !{i64 11172}
!541 = !{i64 11176}
!542 = !{i64 11184}
!543 = !{i64 11192}
!544 = !{i64 11204}
!545 = !{i64 11216}
!546 = !{i64 11232}
!547 = !{i64 11260}
!548 = !{i64 11268}
!549 = !{i64 11272}
!550 = !{i64 11324}
!551 = !{i64 11364}
!552 = !{i64 11388}
!553 = !{i64 11396}
!554 = !{i64 11428}
!555 = !{i64 11440}
!556 = !{i64 11464}
!557 = !{i64 11508}
!558 = !{i64 11540}
!559 = !{i64 11552}
!560 = !{i64 11568}
!561 = !{i64 11576}
!562 = !{i64 11592}
!563 = !{i64 11600}
!564 = !{i64 11604}
!565 = !{i64 11616}
!566 = !{i64 11620}
!567 = !{i64 11668}
!568 = !{i64 11696}
!569 = !{i64 11704}
!570 = !{i64 11776}
!571 = !{i64 11712}
!572 = !{i64 11732}
!573 = !{i64 11736}
!574 = !{i64 11740}
!575 = !{i64 11752}
!576 = !{i64 11764}
!577 = !{i64 11808}
!578 = !{i64 11812}
!579 = !{i64 11816}
!580 = !{i64 11828}
!581 = !{i64 11836}
!582 = !{i64 11840}
!583 = !{i64 11868}
!584 = !{i64 11876}
!585 = !{i64 11884}
!586 = !{i64 11892}
!587 = !{i64 11904}
!588 = !{i64 11928}
!589 = !{i64 11948}
!590 = !{i64 11964}
!591 = !{i64 11972}
!592 = !{i64 11988}
!593 = !{i64 12024}
!594 = !{i64 12032}
!595 = !{i64 12068}
!596 = !{i64 12076}
!597 = !{i64 12088}
!598 = !{i64 12092}
!599 = !{i64 12104}
!600 = !{i64 12112}
!601 = !{i64 12120}
!602 = !{i64 12148}
!603 = !{i64 12152}
!604 = !{i64 12156}
!605 = !{i64 12160}
!606 = !{i64 12176}
!607 = !{i64 12188}
!608 = !{i64 12208}
!609 = !{i64 12212}
!610 = !{i64 12228}
!611 = !{i64 12240}
!612 = !{i64 12256}
!613 = !{i64 12244}
!614 = !{i64 12304}
!615 = !{i64 12416}
!616 = !{i64 12320}
!617 = !{i64 12336}
!618 = !{i64 12360}
!619 = !{i64 12372}
!620 = !{i64 12636}
!621 = !{i64 12424}
!622 = !{i64 12432}
!623 = !{i64 12448}
!624 = !{i64 12452}
!625 = !{i64 12456}
!626 = !{i64 12504}
!627 = !{i64 12508}
!628 = !{i64 12520}
!629 = !{i64 12488}
!630 = !{i64 12536}
!631 = !{i64 12544}
!632 = !{i64 12556}
!633 = !{i64 12568}
!634 = !{i64 12408}
!635 = !{i64 12628}
!636 = !{i64 12640}
!637 = !{i64 12652}
!638 = !{i64 12660}
!639 = !{i64 12672}
!640 = !{i64 12680}
!641 = !{i64 12692}
!642 = !{i64 12704}
!643 = !{i64 12708}
!644 = !{i64 12720}
!645 = !{i64 12612}
!646 = !{i64 12736}
!647 = !{i64 12744}
!648 = !{i64 12756}
!649 = !{i64 12792}
!650 = !{i64 12800}
!651 = !{i64 12772}
!652 = !{i64 12820}
!653 = !{i64 12832}
!654 = !{i64 12860}
!655 = !{i64 12872}
!656 = !{i64 12896}
!657 = !{i64 12904}
!658 = !{i64 12924}
!659 = !{i64 12928}
!660 = !{i64 12944}
!661 = !{i64 12948}
!662 = !{i64 12964}
!663 = !{i64 12968}
!664 = !{i64 12984}
!665 = !{i64 12988}
!666 = !{i64 13004}
!667 = !{i64 13008}
!668 = !{i64 13024}
!669 = !{i64 13028}
!670 = !{i64 13044}
!671 = !{i64 13052}
!672 = !{i64 13108}
!673 = !{i64 13112}
!674 = !{i64 13116}
!675 = !{i64 13132}
!676 = !{i64 13140}
!677 = !{i64 13148}
