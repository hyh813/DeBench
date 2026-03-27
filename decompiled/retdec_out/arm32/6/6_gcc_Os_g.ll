source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%_IO_FILE = type { i32 }
%stat = type { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }
%sockaddr = type { i32, [14 x i8] }
%shmid_ds = type { %ipc_perm, i32, i32, i32, i32, i32, i32, i16, i16, i32*, i32* }
%ipc_perm = type { i32, i32, i32, i32, i32, i32, i16 }

@global_var_2400c = local_unnamed_addr global i32 68776
@global_var_24010 = local_unnamed_addr global i32 68776
@global_var_24014 = local_unnamed_addr global i32 68776
@global_var_24018 = local_unnamed_addr global i32 68776
@global_var_2401c = local_unnamed_addr global i32 68776
@global_var_24020 = local_unnamed_addr global i32 68776
@global_var_24024 = local_unnamed_addr global i32 68776
@global_var_24028 = local_unnamed_addr global i32 68776
@global_var_2402c = local_unnamed_addr global i32 68776
@global_var_24030 = local_unnamed_addr global i32 68776
@global_var_24034 = local_unnamed_addr global i32 68776
@global_var_24038 = local_unnamed_addr global i32 68776
@global_var_2403c = local_unnamed_addr global i32 68776
@global_var_24040 = local_unnamed_addr global i32 68776
@global_var_24044 = local_unnamed_addr global i32 68776
@global_var_24048 = local_unnamed_addr global i32 68776
@global_var_2404c = local_unnamed_addr global i32 68776
@global_var_24050 = local_unnamed_addr global i32 68776
@global_var_24054 = local_unnamed_addr global i32 68776
@global_var_24058 = local_unnamed_addr global i32 68776
@global_var_2405c = local_unnamed_addr global i32 68776
@global_var_24060 = local_unnamed_addr global i32 68776
@global_var_24064 = local_unnamed_addr global i32 68776
@global_var_24068 = local_unnamed_addr global i32 68776
@global_var_2406c = local_unnamed_addr global i32 68776
@global_var_24070 = local_unnamed_addr global i32 68776
@global_var_24074 = local_unnamed_addr global i32 68776
@global_var_24078 = local_unnamed_addr global i32 68776
@global_var_2407c = local_unnamed_addr global i32 68776
@global_var_24080 = local_unnamed_addr global i32 68776
@global_var_24084 = local_unnamed_addr global i32 68776
@global_var_24088 = local_unnamed_addr global i32 68776
@global_var_2408c = local_unnamed_addr global i32 68776
@global_var_24090 = local_unnamed_addr global i32 68776
@global_var_24094 = local_unnamed_addr global i32 68776
@global_var_24098 = local_unnamed_addr global i32 68776
@global_var_2409c = local_unnamed_addr global i32 68776
@global_var_240a0 = local_unnamed_addr global i32 68776
@global_var_240a4 = local_unnamed_addr global i32 68776
@global_var_240a8 = local_unnamed_addr global i32 68776
@global_var_240ac = local_unnamed_addr global i32 68776
@global_var_240b0 = local_unnamed_addr global i32 68776
@global_var_240b4 = local_unnamed_addr global i32 68776
@global_var_240b8 = local_unnamed_addr global i32 68776
@global_var_240bc = local_unnamed_addr global i32 68776
@global_var_240c0 = local_unnamed_addr global i32 68776
@global_var_240c4 = local_unnamed_addr global i32 68776
@global_var_240c8 = local_unnamed_addr global i32 68776
@global_var_23f04 = global i32 69748
@global_var_240cc = local_unnamed_addr global i32 68776
@global_var_23f10 = local_unnamed_addr global i32 493
@global_var_240d0 = local_unnamed_addr global i32 68776
@global_var_23f1c = local_unnamed_addr global i32 12
@global_var_240d4 = local_unnamed_addr global i32 68776
@global_var_23f28 = local_unnamed_addr global i32 79224
@global_var_240d8 = local_unnamed_addr global i32 68776
@global_var_23f34 = local_unnamed_addr global i32 27
@global_var_240dc = local_unnamed_addr global i32 68776
@global_var_23f40 = local_unnamed_addr global i32* @global_var_23f04
@global_var_240e0 = local_unnamed_addr global i32 68776
@global_var_23f4c = local_unnamed_addr global i32 1879047925
@global_var_240e4 = local_unnamed_addr global i32 68776
@global_var_10780 = global i32 1885298432
@global_var_23f58 = local_unnamed_addr global i32* @global_var_10780
@global_var_240e8 = local_unnamed_addr global i32 68776
@global_var_23f64 = local_unnamed_addr global i32 10
@global_var_240ec = local_unnamed_addr global i32 68776
@global_var_23f70 = local_unnamed_addr global i32 16
@global_var_240f0 = local_unnamed_addr global i32 68776
@global_var_23f7c = local_unnamed_addr global i32 3
@global_var_240f4 = local_unnamed_addr global i32 68776
@global_var_23f88 = local_unnamed_addr global i32 480
@global_var_240f8 = local_unnamed_addr global i32 68776
@global_var_10fe4 = local_unnamed_addr constant i32 77852
@global_var_10fe8 = local_unnamed_addr constant i32 256
@global_var_11008 = local_unnamed_addr constant i32 77828
@global_var_1100c = local_unnamed_addr constant i32 252
@global_var_23f0c = global i32 1
@global_var_24000 = local_unnamed_addr global i32* @global_var_23f0c
@global_var_240fc = local_unnamed_addr global i32 0
@global_var_11030 = local_unnamed_addr constant i32 147724
@global_var_11034 = local_unnamed_addr constant i32 147724
@global_var_11038 = local_unnamed_addr constant i32 0
@global_var_11068 = local_unnamed_addr constant i32 147724
@global_var_1106c = local_unnamed_addr constant i32 147724
@global_var_11070 = local_unnamed_addr constant i32 0
@global_var_11098 = local_unnamed_addr constant i32 147728
@global_var_110b4 = local_unnamed_addr constant i32 147736
@signal_received = local_unnamed_addr global i32 0
@signal_number = local_unnamed_addr global i32 0
@global_var_11160 = local_unnamed_addr constant i32 147736
@counter_mutex = local_unnamed_addr global i32 0
@shared_counter = local_unnamed_addr global i32 0
@global_var_111b0 = local_unnamed_addr constant i32 147772
@cond_mutex = local_unnamed_addr global i32 0
@global_var_111b4 = local_unnamed_addr constant i32 147736
@ready = local_unnamed_addr global i32 0
@data = local_unnamed_addr global i32 0
@global_var_111b8 = local_unnamed_addr constant i32 147800
@cond = local_unnamed_addr global i32 0
@global_var_11200 = local_unnamed_addr constant i32 147736
@global_var_11284 = local_unnamed_addr constant i32 147208
@global_var_23f08 = local_unnamed_addr global i32 0
@global_var_11288 = local_unnamed_addr constant i32 147856
@atomic_counter = local_unnamed_addr global i32 0
@global_var_112b8 = local_unnamed_addr constant i32 147736
@global_var_112fc = local_unnamed_addr constant i32 8
@global_var_11300 = local_unnamed_addr constant i32 12
@global_var_11364 = local_unnamed_addr constant i32 147208
@global_var_11368 = local_unnamed_addr constant i32 79380
@global_var_13614 = constant [9 x i8] c"HelloLib\00"
@global_var_113cc = local_unnamed_addr constant i32 79389
@global_var_1361d = constant [4 x i8] c"def\00"
@global_var_113d0 = local_unnamed_addr constant i32 79393
@global_var_13621 = constant [4 x i8] c"abc\00"
@global_var_113d4 = local_unnamed_addr constant i32 79397
@global_var_13625 = constant [4 x i8] c"xyz\00"
@global_var_113d8 = local_unnamed_addr constant i32 79401
@global_var_13629 = constant [4 x i8] c"aaa\00"
@global_var_113dc = local_unnamed_addr constant i32 79405
@global_var_1362d = constant [4 x i8] c"bbb\00"
@global_var_11488 = local_unnamed_addr constant i32 147208
@global_var_1148c = local_unnamed_addr constant i32 80384
@global_var_13a00 = local_unnamed_addr constant i32 10
@global_var_13a04 = local_unnamed_addr constant i32 20
@global_var_13a08 = local_unnamed_addr constant i32 30
@global_var_13a0c = local_unnamed_addr constant i32 40
@global_var_13a10 = local_unnamed_addr constant i32 50
@global_var_11544 = local_unnamed_addr constant i32 147208
@global_var_11548 = local_unnamed_addr constant i32 80404
@global_var_13a14 = local_unnamed_addr constant i32 1
@global_var_13a18 = local_unnamed_addr constant i32 2
@global_var_13a1c = local_unnamed_addr constant i32 3
@global_var_13a20 = local_unnamed_addr constant i32 1
@global_var_13a24 = local_unnamed_addr constant i32 2
@global_var_13a28 = local_unnamed_addr constant i32 4
@global_var_11560 = local_unnamed_addr constant i32 79409
@global_var_13631 = constant [21 x i8] c"Value: %d, Name: %s\0A\00"
@global_var_11570 = local_unnamed_addr constant i32 79524
@global_var_136a4 = constant [5 x i8] c"Test\00"
@global_var_115cc = local_unnamed_addr constant i32 147208
@global_var_115d0 = local_unnamed_addr constant i32 79430
@global_var_13646 = constant [6 x i8] c"%d,%d\00"
@global_var_115dc = local_unnamed_addr constant i32 79436
@global_var_1364c = constant [8 x i8] c"123,456\00"
@global_var_11610 = local_unnamed_addr constant i32 79444
@global_var_11630 = local_unnamed_addr constant i32 79446
@global_var_13656 = constant [12 x i8] c"/etc/passwd\00"
@global_var_11718 = local_unnamed_addr constant i32 147208
@global_var_1171c = local_unnamed_addr constant i32 79458
@global_var_13662 = constant [3 x i8] c"w+\00"
@global_var_11720 = local_unnamed_addr constant i32 79461
@global_var_13665 = constant [19 x i8] c"BinBench Test Data\00"
@global_var_1172c = local_unnamed_addr constant i32 79480
@global_var_13678 = constant [23 x i8] c"/tmp/binbench_test.tmp\00"
@global_var_1183c = local_unnamed_addr constant i32 147208
@global_var_1188c = local_unnamed_addr constant i32 79503
@global_var_1368f = constant [6 x i8] c"Bench\00"
@global_var_11890 = local_unnamed_addr constant i32 79509
@global_var_13695 = constant [20 x i8] c"Hello BinBench Test\00"
@global_var_11990 = local_unnamed_addr constant i32 79529
@global_var_11994 = local_unnamed_addr constant i32 79565
@global_var_11998 = local_unnamed_addr constant i32 79592
@global_var_1199c = local_unnamed_addr constant i32 79619
@global_var_119a0 = local_unnamed_addr constant i32 79647
@global_var_119a4 = local_unnamed_addr constant i32 79675
@global_var_119a8 = local_unnamed_addr constant i32 79703
@global_var_119ac = local_unnamed_addr constant i32 79731
@global_var_119b0 = local_unnamed_addr constant i32 79760
@global_var_119b4 = local_unnamed_addr constant i32 79788
@global_var_119b8 = local_unnamed_addr constant i32 79816
@global_var_119bc = local_unnamed_addr constant i32 79844
@global_var_119c0 = local_unnamed_addr constant i32 79871
@global_var_11a20 = local_unnamed_addr constant i32 79446
@global_var_11a84 = local_unnamed_addr constant i32 147208
@global_var_11a90 = local_unnamed_addr constant i32 79446
@global_var_11b30 = local_unnamed_addr constant i32 147208
@global_var_11b54 = local_unnamed_addr constant i32 79899
@global_var_1381b = constant [10 x i8] c"/bin/true\00"
@global_var_11c34 = local_unnamed_addr constant i32 147208
@global_var_11c38 = local_unnamed_addr constant i32 79909
@global_var_13825 = constant [10 x i8] c"HelloPipe\00"
@global_var_11d38 = local_unnamed_addr constant i32 147208
@global_var_11de4 = local_unnamed_addr constant i32 438
@global_var_11de8 = local_unnamed_addr constant i32 79919
@global_var_1382f = constant [18 x i8] c"/tmp/binbench_shm\00"
@global_var_11dec = local_unnamed_addr constant i32 950
@global_var_11df0 = local_unnamed_addr constant i32 79937
@global_var_13841 = constant [13 x i8] c"SharedMemory\00"
@global_var_11f18 = local_unnamed_addr constant i32 147736
@global_var_11f1c = local_unnamed_addr constant i32 1001
@global_var_11f20 = local_unnamed_addr constant i32 2001
@global_var_11fc4 = local_unnamed_addr constant i32 79950
@global_var_11fc8 = local_unnamed_addr constant i32 79977
@global_var_11fcc = local_unnamed_addr constant i32 80005
@global_var_11fd0 = local_unnamed_addr constant i32 80033
@global_var_11fd4 = local_unnamed_addr constant i32 80061
@global_var_11fd8 = local_unnamed_addr constant i32 80089
@global_var_11fdc = local_unnamed_addr constant i32 80117
@global_var_11fe0 = local_unnamed_addr constant i32 80145
@global_var_1205c = local_unnamed_addr constant i32 147208
@global_var_12060 = local_unnamed_addr constant i32 69868
@global_var_1214c = local_unnamed_addr constant i32 147208
@global_var_12150 = local_unnamed_addr constant i32 80428
@global_var_13a2c = local_unnamed_addr constant i32 1
@global_var_13a30 = local_unnamed_addr constant i32 10
@global_var_13a34 = local_unnamed_addr constant i32 0
@global_var_13a38 = local_unnamed_addr constant i32 11
@global_var_13a3c = local_unnamed_addr constant i32 20
@global_var_13a40 = local_unnamed_addr constant i32 0
@global_var_13a44 = local_unnamed_addr constant i32 21
@global_var_13a48 = local_unnamed_addr constant i32 30
@global_var_13a4c = local_unnamed_addr constant i32 0
@global_var_12154 = local_unnamed_addr constant i32 69816
@global_var_12210 = local_unnamed_addr constant i32 147736
@global_var_122d8 = local_unnamed_addr constant i32 147208
@global_var_122dc = local_unnamed_addr constant i32 147736
@global_var_122e0 = local_unnamed_addr constant i32 69988
@global_var_122e4 = local_unnamed_addr constant i32 70076
@global_var_111bc = constant i32 -382910352
@global_var_123f8 = local_unnamed_addr constant i32 147208
@global_var_123fc = local_unnamed_addr constant i32 147736
@global_var_12400 = local_unnamed_addr constant i32 70148
@global_var_12404 = local_unnamed_addr constant i32 70284
@global_var_125a0 = local_unnamed_addr constant i32 147208
@global_var_125a4 = local_unnamed_addr constant i32 80173
@global_var_1392d = constant [10 x i8] c"Thread-%d\00"
@global_var_125a8 = local_unnamed_addr constant i32 70332
@global_var_1263c = local_unnamed_addr constant i32 80183
@global_var_12640 = local_unnamed_addr constant i32 80213
@global_var_12644 = local_unnamed_addr constant i32 80241
@global_var_12648 = local_unnamed_addr constant i32 80270
@global_var_1264c = local_unnamed_addr constant i32 80298
@global_var_12650 = local_unnamed_addr constant i32 80326
@global_var_12654 = local_unnamed_addr constant i32 80354
@global_var_1268c = local_unnamed_addr constant i32 -61504
@global_var_126c4 = local_unnamed_addr constant i32 -61504
@global_var_126fc = local_unnamed_addr constant i32 -61504
@global_var_12734 = local_unnamed_addr constant i32 -61504
@global_var_1276c = local_unnamed_addr constant i32 -61504
@global_var_127a8 = local_unnamed_addr constant i32 -61504
@global_var_12804 = local_unnamed_addr constant i32 65535
@global_var_12808 = local_unnamed_addr constant i32 -61504
@global_var_12864 = local_unnamed_addr constant i32 65535
@global_var_12868 = local_unnamed_addr constant i32 -61504
@global_var_128c4 = local_unnamed_addr constant i32 65535
@global_var_128c8 = local_unnamed_addr constant i32 -61504
@global_var_12924 = local_unnamed_addr constant i32 65535
@global_var_12928 = local_unnamed_addr constant i32 -61504
@global_var_12984 = local_unnamed_addr constant i32 65535
@global_var_12988 = local_unnamed_addr constant i32 -61504
@global_var_129e8 = local_unnamed_addr constant i32 65535
@global_var_129ec = local_unnamed_addr constant i32 -61504
@global_var_12a48 = local_unnamed_addr constant i32 -61504
@global_var_12aa4 = local_unnamed_addr constant i32 -61504
@global_var_12b00 = local_unnamed_addr constant i32 -61504
@global_var_12b5c = local_unnamed_addr constant i32 -61504
@global_var_12bb8 = local_unnamed_addr constant i32 -61504
@global_var_12c18 = local_unnamed_addr constant i32 -61504
@global_var_12c50 = local_unnamed_addr constant i32 -61504
@global_var_12c88 = local_unnamed_addr constant i32 -61504
@global_var_12cc0 = local_unnamed_addr constant i32 -61504
@global_var_12cf8 = local_unnamed_addr constant i32 -61504
@global_var_12d30 = local_unnamed_addr constant i32 -61504
@global_var_12d6c = local_unnamed_addr constant i32 -61504
@global_var_12dd0 = local_unnamed_addr constant i32 65535
@global_var_12dd4 = local_unnamed_addr constant i32 -61504
@global_var_12e38 = local_unnamed_addr constant i32 65535
@global_var_12e3c = local_unnamed_addr constant i32 -61504
@global_var_12ea0 = local_unnamed_addr constant i32 65535
@global_var_12ea4 = local_unnamed_addr constant i32 -61504
@global_var_12f08 = local_unnamed_addr constant i32 65535
@global_var_12f0c = local_unnamed_addr constant i32 -61504
@global_var_12f70 = local_unnamed_addr constant i32 65535
@global_var_12f74 = local_unnamed_addr constant i32 -61504
@global_var_12fdc = local_unnamed_addr constant i32 65535
@global_var_12fe0 = local_unnamed_addr constant i32 -61504
@global_var_13044 = local_unnamed_addr constant i32 -61504
@global_var_130a8 = local_unnamed_addr constant i32 -61504
@global_var_1310c = local_unnamed_addr constant i32 -61504
@global_var_13170 = local_unnamed_addr constant i32 -61504
@global_var_131d4 = local_unnamed_addr constant i32 -61504
@global_var_1323c = local_unnamed_addr constant i32 -61504
@global_var_1328c = local_unnamed_addr constant i32 -61504
@global_var_13300 = local_unnamed_addr constant i32 65535
@global_var_13304 = local_unnamed_addr constant i32 -61504
@global_var_13378 = local_unnamed_addr constant i32 -61504
@global_var_133a4 = local_unnamed_addr constant i32 -61504
@global_var_133e8 = local_unnamed_addr constant i32 -61536
@global_var_13420 = local_unnamed_addr constant i32 -61504
@global_var_1347c = local_unnamed_addr constant i32 65535
@global_var_13480 = local_unnamed_addr constant i32 -61504
@global_var_134dc = local_unnamed_addr constant i32 -61504
@global_var_13500 = local_unnamed_addr constant i32 -61536
@global_var_13520 = local_unnamed_addr constant i32 -61536
@global_var_13540 = local_unnamed_addr constant i32 -61536
@global_var_13560 = local_unnamed_addr constant i32 -61536
@0 = external global i32
@1 = internal constant [2 x i8] c"r\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i32 0, i32 0)
@3 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\87\E5\87\86\E5\BA\93\E5\87\BD\E6\95\B0\E8\B0\83\E7\94\A8 ===\00"
@global_var_136a9 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @3, i32 0, i32 0)
@4 = internal constant [27 x i8] c"LIB-L1-01: %d (\E6\9C\9F\E6\9C\9B: 8)\0A\00"
@global_var_136cd = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @4, i32 0, i32 0)
@5 = internal constant [27 x i8] c"LIB-L1-02: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_136e8 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @5, i32 0, i32 0)
@6 = internal constant [28 x i8] c"LIB-L1-03: %d (\E6\9C\9F\E6\9C\9B: 12)\0A\00"
@global_var_13703 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @6, i32 0, i32 0)
@7 = internal constant [28 x i8] c"LIB-L1-04: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_1371f = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @7, i32 0, i32 0)
@8 = internal constant [28 x i8] c"LIB-L1-05: %d (\E6\9C\9F\E6\9C\9B: -1)\0A\00"
@global_var_1373b = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i32 0, i32 0)
@9 = internal constant [28 x i8] c"LIB-L1-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_13757 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i32 0, i32 0)
@10 = internal constant [29 x i8] c"LIB-L1-07: %d (\E6\9C\9F\E6\9C\9B: 579)\0A\00"
@global_var_13773 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @10, i32 0, i32 0)
@11 = internal constant [28 x i8] c"LIB-L1-08: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_13790 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i32 0, i32 0)
@12 = internal constant [28 x i8] c"LIB-L1-09: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_137ac = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @12, i32 0, i32 0)
@13 = internal constant [28 x i8] c"LIB-L1-10: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_137c8 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @13, i32 0, i32 0)
@14 = internal constant [27 x i8] c"LIB-L1-11: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_137e4 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @14, i32 0, i32 0)
@15 = internal constant [28 x i8] c"LIB-L1-12: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_137ff = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @15, i32 0, i32 0)
@global_var_11f14 = local_unnamed_addr constant void (i32)* inttoptr (i32 69792 to void (i32)*)
@16 = internal constant [27 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\B3\BB\E7\BB\9F\E8\B0\83\E7\94\A8 ===\00"
@global_var_1384e = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @16, i32 0, i32 0)
@17 = internal constant [28 x i8] c"SYS-L3-01: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_13869 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i32 0, i32 0)
@18 = internal constant [28 x i8] c"SYS-L3-02: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_13885 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @18, i32 0, i32 0)
@19 = internal constant [28 x i8] c"SYS-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_138a1 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @19, i32 0, i32 0)
@20 = internal constant [28 x i8] c"SYS-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_138bd = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @20, i32 0, i32 0)
@21 = internal constant [28 x i8] c"SYS-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_138d9 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @21, i32 0, i32 0)
@22 = internal constant [28 x i8] c"SYS-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_138f5 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @22, i32 0, i32 0)
@23 = internal constant [28 x i8] c"SYS-L3-07: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_13911 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @23, i32 0, i32 0)
@global_var_110b8 = constant i32* (i32*)* inttoptr (i32 -476041216 to i32* (i32*)*)
@global_var_12214 = local_unnamed_addr constant i32* (i32*)* inttoptr (i32 69904 to i32* (i32*)*)
@global_var_11164 = constant i32* (i32*)* inttoptr (i32 -382910352 to i32* (i32*)*)
@global_var_11204 = constant i32* (i32*)* inttoptr (i32 -382910217 to i32* (i32*)*)
@global_var_1128c = constant i32* (i32*)* inttoptr (i32 -382910352 to i32* (i32*)*)
@global_var_112bc = constant i32* (i32*)* inttoptr (i32 -382910352 to i32* (i32*)*)
@24 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\BA\BF\E7\A8\8B\E4\B8\8E\E5\B9\B6\E5\8F\91 ===\00"
@global_var_13937 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @24, i32 0, i32 0)
@25 = internal constant [28 x i8] c"THR-L3-01: %d (\E6\9C\9F\E6\9C\9B: 49)\0A\00"
@global_var_13955 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @25, i32 0, i32 0)
@26 = internal constant [29 x i8] c"THR-L3-02: %d (\E6\9C\9F\E6\9C\9B: 465)\0A\00"
@global_var_13971 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @26, i32 0, i32 0)
@27 = internal constant [28 x i8] c"THR-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_1398e = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @27, i32 0, i32 0)
@28 = internal constant [28 x i8] c"THR-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_139aa = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @28, i32 0, i32 0)
@29 = internal constant [28 x i8] c"THR-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_139c6 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @29, i32 0, i32 0)
@30 = internal constant [28 x i8] c"THR-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_139e2 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @30, i32 0, i32 0)
@global_var_13654 = constant [2 x i8] c"r\00"

define i32 @main() local_unnamed_addr {
dec_label_pc_10f90:
  call void @test_standard_library_functions(), !insn.addr !0
  call void @test_system_calls(), !insn.addr !1
  call void @test_thread_concurrency(), !insn.addr !2
  ret i32 0, !insn.addr !3
}

define i32 @param_strcpy(i8* %dst, i8* %src) local_unnamed_addr {
dec_label_pc_11304:
  %0 = call i8* @strcpy(i8* %dst, i8* %src), !insn.addr !4
  %1 = call i32 @strlen(i8* %dst), !insn.addr !5
  ret i32 %1, !insn.addr !5
}

define i32 @call_strcpy() local_unnamed_addr {
dec_label_pc_1131c:
  %buffer_-44 = alloca [32 x i8], align 1
  %0 = getelementptr inbounds [32 x i8], [32 x i8]* %buffer_-44, i32 0, i32 0, !insn.addr !6
  %1 = call i32 @param_strcpy(i8* nonnull %0, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_13614, i32 0, i32 0)), !insn.addr !6
  ret i32 %1, !insn.addr !7
}

define i32 @param_strcmp(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_1136c:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !8
  %1 = icmp sgt i32 %0, 0, !insn.addr !9
  br i1 %1, label %dec_label_pc_11388, label %dec_label_pc_1137c, !insn.addr !9

dec_label_pc_1137c:                               ; preds = %dec_label_pc_1136c
  %2 = icmp ne i32 %0, 0, !insn.addr !10
  %spec.select1 = sext i1 %2 to i32
  ret i32 %spec.select1

dec_label_pc_11388:                               ; preds = %dec_label_pc_1136c
  ret i32 1, !insn.addr !11

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
}

define i32 @call_strcmp() local_unnamed_addr {
dec_label_pc_11390:
  %0 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_13621, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_1361d, i32 0, i32 0)), !insn.addr !12
  %1 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_13625, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_13625, i32 0, i32 0)), !insn.addr !13
  %2 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_1362d, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_13629, i32 0, i32 0)), !insn.addr !14
  %3 = add i32 %1, %0, !insn.addr !15
  %4 = add i32 %3, %2, !insn.addr !16
  ret i32 %4, !insn.addr !17

; uselistorder directives
  uselistorder i32 (i8*, i8*)* @param_strcmp, { 2, 1, 0 }
}

define i32 @param_memcpy(i8* %dst, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_113ec:
  %0 = bitcast i8* %dst to i32*, !insn.addr !18
  %1 = call i32* @memcpy(i32* %0, i32* %src, i32 %n), !insn.addr !18
  ret i32 %n, !insn.addr !19
}

define i32 @call_memcpy() local_unnamed_addr {
dec_label_pc_11400:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %dst_-32 = alloca [5 x i32], align 4
  %src_-52 = alloca [5 x i32], align 4
  store [5 x i32] [i32 10, i32 undef, i32 undef, i32 undef, i32 undef], [5 x i32]* %src_-52, align 4, !insn.addr !20
  %3 = getelementptr inbounds [5 x i32], [5 x i32]* %dst_-32, i32 0, i32 0, !insn.addr !21
  %4 = call i32* @memset(i32* nonnull %3, i32 0, i32 20), !insn.addr !21
  %5 = bitcast [5 x i32]* %dst_-32 to i8*, !insn.addr !22
  %6 = getelementptr inbounds [5 x i32], [5 x i32]* %src_-52, i32 0, i32 0, !insn.addr !22
  %7 = call i32 @param_memcpy(i8* nonnull %5, i32* nonnull %6, i32 20), !insn.addr !22
  %8 = load i32, i32* %3, align 4, !insn.addr !23
  %9 = add i32 %2, %1, !insn.addr !24
  %10 = add i32 %9, %8, !insn.addr !25
  ret i32 %10, !insn.addr !26

; uselistorder directives
  uselistorder [5 x i32]* %dst_-32, { 1, 0 }
  uselistorder i32* %0, { 1, 0 }
}

define i32 @param_memcmp(i32* %p1, i32* %p2, i32 %n) local_unnamed_addr {
dec_label_pc_11490:
  %0 = call i32 @memcmp(i32* %p1, i32* %p2, i32 %n), !insn.addr !27
  %1 = icmp sgt i32 %0, 0, !insn.addr !28
  br i1 %1, label %dec_label_pc_114ac, label %dec_label_pc_114a0, !insn.addr !28

dec_label_pc_114a0:                               ; preds = %dec_label_pc_11490
  %2 = icmp ne i32 %0, 0, !insn.addr !29
  %spec.select1 = sext i1 %2 to i32
  ret i32 %spec.select1

dec_label_pc_114ac:                               ; preds = %dec_label_pc_11490
  ret i32 1, !insn.addr !30

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
}

define i32 @call_memcmp() local_unnamed_addr {
dec_label_pc_114b4:
  %arr3_-32 = alloca [3 x i32], align 4
  %arr2_-44 = alloca [3 x i32], align 4
  %arr1_-56 = alloca [3 x i32], align 4
  store [3 x i32] [i32 1, i32 undef, i32 undef], [3 x i32]* %arr1_-56, align 4, !insn.addr !31
  store [3 x i32] [i32 1, i32 undef, i32 undef], [3 x i32]* %arr2_-44, align 4, !insn.addr !32
  store [3 x i32] [i32 1, i32 undef, i32 undef], [3 x i32]* %arr3_-32, align 4, !insn.addr !33
  %0 = getelementptr inbounds [3 x i32], [3 x i32]* %arr1_-56, i32 0, i32 0, !insn.addr !34
  %1 = getelementptr inbounds [3 x i32], [3 x i32]* %arr2_-44, i32 0, i32 0, !insn.addr !34
  %2 = call i32 @param_memcmp(i32* nonnull %0, i32* nonnull %1, i32 12), !insn.addr !34
  %3 = getelementptr inbounds [3 x i32], [3 x i32]* %arr3_-32, i32 0, i32 0, !insn.addr !35
  %4 = call i32 @param_memcmp(i32* nonnull %0, i32* nonnull %3, i32 12), !insn.addr !35
  %5 = add i32 %4, %2, !insn.addr !36
  ret i32 %5, !insn.addr !37

; uselistorder directives
  uselistorder i32 (i32*, i32*, i32)* @param_memcmp, { 1, 0 }
}

define i32 @param_printf(i32 %x, i8* %name) local_unnamed_addr {
dec_label_pc_1154c:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_13631, i32 0, i32 0), i32 %x, i8* %name), !insn.addr !38
  ret i32 %0, !insn.addr !38
}

define i32 @call_printf() local_unnamed_addr {
dec_label_pc_11564:
  %0 = call i32 @param_printf(i32 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_136a4, i32 0, i32 0)), !insn.addr !39
  ret i32 %0, !insn.addr !39
}

define i32 @param_scanf(i8* %input_str) local_unnamed_addr {
dec_label_pc_11574:
  %r0.3.reg2mem = alloca i32, !insn.addr !40
  %b_-16 = alloca i32, align 4
  %a_-20 = alloca i32, align 4
  %0 = load i32, i32* @global_var_23f08, align 4, !insn.addr !41
  %1 = call i32 (i8*, i8*, ...) @sscanf(i8* %input_str, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_13646, i32 0, i32 0), i32* nonnull %a_-20, i32* nonnull %b_-16), !insn.addr !42
  %2 = icmp eq i32 %1, 2, !insn.addr !43
  %3 = load i32, i32* %a_-20, align 4
  %4 = load i32, i32* %b_-16, align 4
  %5 = add i32 %4, %3
  %r0.2 = select i1 %2, i32 %5, i32 -1
  %6 = load i32, i32* @global_var_23f08, align 4, !insn.addr !44
  %7 = icmp eq i32 %0, %6, !insn.addr !45
  store i32 %r0.2, i32* %r0.3.reg2mem, !insn.addr !46
  br i1 %7, label %dec_label_pc_115c4, label %dec_label_pc_115c0, !insn.addr !46

dec_label_pc_115c0:                               ; preds = %dec_label_pc_11574
  call void @__stack_chk_fail(), !insn.addr !47
  store i32 ptrtoint (i32* @0 to i32), i32* %r0.3.reg2mem, !insn.addr !47
  br label %dec_label_pc_115c4, !insn.addr !47

dec_label_pc_115c4:                               ; preds = %dec_label_pc_115c0, %dec_label_pc_11574
  %r0.3.reload = load i32, i32* %r0.3.reg2mem
  ret i32 %r0.3.reload, !insn.addr !48

; uselistorder directives
  uselistorder i32* %a_-20, { 1, 0 }
  uselistorder i32* %b_-16, { 1, 0 }
}

define i32 @call_scanf() local_unnamed_addr {
dec_label_pc_115d4:
  %0 = call i32 @param_scanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_1364c, i32 0, i32 0)), !insn.addr !49
  ret i32 %0, !insn.addr !49
}

define i32 @param_fopen_fclose(i8* %filename) local_unnamed_addr {
dec_label_pc_115e0:
  %r4.1.reg2mem = alloca i32, !insn.addr !50
  %0 = call %_IO_FILE* @fopen(i8* %filename, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_13654, i32 0, i32 0)), !insn.addr !51
  %1 = icmp eq %_IO_FILE* %0, null, !insn.addr !52
  store i32 -1, i32* %r4.1.reg2mem, !insn.addr !53
  br i1 %1, label %dec_label_pc_11608, label %dec_label_pc_115f8, !insn.addr !53

dec_label_pc_115f8:                               ; preds = %dec_label_pc_115e0
  %2 = call i32 @fileno(%_IO_FILE* nonnull %0), !insn.addr !54
  %3 = call i32 @fclose(%_IO_FILE* nonnull %0), !insn.addr !55
  store i32 %2, i32* %r4.1.reg2mem, !insn.addr !55
  br label %dec_label_pc_11608, !insn.addr !55

dec_label_pc_11608:                               ; preds = %dec_label_pc_115f8, %dec_label_pc_115e0
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  ret i32 %r4.1.reload, !insn.addr !56
}

define i32 @call_fopen_fclose() local_unnamed_addr {
dec_label_pc_11614:
  %0 = call i32 @param_fopen_fclose(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_13656, i32 0, i32 0)), !insn.addr !57
  %1 = icmp slt i32 %0, 0, !insn.addr !58
  %spec.select = select i1 %1, i32 %0, i32 42
  %2 = icmp eq i1 %1, false, !insn.addr !59
  %r0.1 = select i1 %2, i32 %spec.select, i32 -1
  ret i32 %r0.1, !insn.addr !60

; uselistorder directives
  uselistorder i1 %1, { 1, 0 }
}

define i32 @param_fread_fwrite(i8* %tmpfile) local_unnamed_addr {
dec_label_pc_11634:
  %r5.1.reg2mem = alloca i32, !insn.addr !61
  %r0.2.reg2mem = alloca i32, !insn.addr !61
  %r5.0.reg2mem = alloca i32, !insn.addr !61
  %r0.1.reg2mem = alloca i32, !insn.addr !61
  %read_buffer_-52 = alloca [32 x i8], align 1
  %stack_var_-56 = alloca i32, align 4
  %0 = load i32, i32* @global_var_23f08, align 4, !insn.addr !62
  %1 = call %_IO_FILE* @fopen(i8* %tmpfile, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_13662, i32 0, i32 0)), !insn.addr !63
  %2 = icmp eq %_IO_FILE* %1, null, !insn.addr !64
  store i32 -1, i32* %r0.1.reg2mem, !insn.addr !65
  br i1 %2, label %dec_label_pc_11690, label %dec_label_pc_11664, !insn.addr !65

dec_label_pc_11664:                               ; preds = %dec_label_pc_11634
  %3 = ptrtoint %_IO_FILE* %1 to i32, !insn.addr !63
  %4 = call i32 @fwrite(i32* bitcast ([19 x i8]* @global_var_13665 to i32*), i32 1, i32 18, %_IO_FILE* nonnull %1), !insn.addr !66
  %5 = icmp eq i32 %4, 18, !insn.addr !67
  store i32 %3, i32* %r0.2.reg2mem, !insn.addr !68
  store i32 18, i32* %r5.1.reg2mem, !insn.addr !68
  br i1 %5, label %dec_label_pc_116ac, label %dec_label_pc_11688, !insn.addr !68

dec_label_pc_11688:                               ; preds = %dec_label_pc_11664
  %6 = call i32 @fclose(%_IO_FILE* nonnull %1), !insn.addr !69
  store i32 -2, i32* %r0.1.reg2mem, !insn.addr !70
  store i32 %4, i32* %r5.0.reg2mem, !insn.addr !70
  br label %dec_label_pc_11690, !insn.addr !70

dec_label_pc_11690:                               ; preds = %dec_label_pc_116ac, %dec_label_pc_116f4, %dec_label_pc_11688, %dec_label_pc_11634
  %7 = load i32, i32* @global_var_23f08, align 4, !insn.addr !71
  %8 = icmp eq i32 %0, %7, !insn.addr !72
  br i1 %8, label %dec_label_pc_11710, label %dec_label_pc_116a8, !insn.addr !73

dec_label_pc_116a8:                               ; preds = %dec_label_pc_11690
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  call void @__stack_chk_fail(), !insn.addr !74
  store i32 ptrtoint (i32* @0 to i32), i32* %r0.2.reg2mem, !insn.addr !74
  store i32 %r5.0.reload, i32* %r5.1.reg2mem, !insn.addr !74
  br label %dec_label_pc_116ac, !insn.addr !74

dec_label_pc_116ac:                               ; preds = %dec_label_pc_116a8, %dec_label_pc_11664
  %9 = ptrtoint i32* %stack_var_-56 to i32, !insn.addr !75
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %r0.2.reload = load i32, i32* %r0.2.reg2mem
  %10 = inttoptr i32 %r0.2.reload to %_IO_FILE*, !insn.addr !76
  call void @rewind(%_IO_FILE* %10), !insn.addr !76
  %11 = bitcast [32 x i8]* %read_buffer_-52 to i32*, !insn.addr !77
  %12 = call i32 @fread(i32* nonnull %11, i32 1, i32 %r5.1.reload, %_IO_FILE* %1), !insn.addr !77
  %13 = add i32 %9, 4, !insn.addr !78
  %14 = add i32 %13, %12, !insn.addr !79
  %15 = inttoptr i32 %14 to i8*, !insn.addr !79
  store i8 0, i8* %15, align 1, !insn.addr !79
  %16 = call i32 @fclose(%_IO_FILE* %1), !insn.addr !80
  %17 = call i32 @unlink(i8* %tmpfile), !insn.addr !81
  %18 = icmp eq i32 %12, 18, !insn.addr !82
  store i32 -3, i32* %r0.1.reg2mem, !insn.addr !83
  store i32 %12, i32* %r5.0.reg2mem, !insn.addr !83
  br i1 %18, label %dec_label_pc_116f4, label %dec_label_pc_11690, !insn.addr !83

dec_label_pc_116f4:                               ; preds = %dec_label_pc_116ac
  %19 = getelementptr inbounds [32 x i8], [32 x i8]* %read_buffer_-52, i32 0, i32 0, !insn.addr !84
  %20 = call i32 @strcmp(i8* nonnull %19, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_13665, i32 0, i32 0)), !insn.addr !84
  %21 = icmp eq i32 %20, 0, !insn.addr !85
  %r0.5 = select i1 %21, i32 42, i32 -3
  store i32 %r0.5, i32* %r0.1.reg2mem, !insn.addr !86
  store i32 18, i32* %r5.0.reg2mem, !insn.addr !86
  br label %dec_label_pc_11690, !insn.addr !86

dec_label_pc_11710:                               ; preds = %dec_label_pc_11690
  %r0.1.reload = load i32, i32* %r0.1.reg2mem
  ret i32 %r0.1.reload, !insn.addr !87

; uselistorder directives
  uselistorder i32 %12, { 0, 2, 1 }
  uselistorder %_IO_FILE* %1, { 0, 1, 2, 3, 5, 4 }
  uselistorder i32* %r0.1.reg2mem, { 0, 3, 2, 1, 4 }
  uselistorder i32* %r5.0.reg2mem, { 3, 2, 0, 1 }
  uselistorder i32* %r0.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r5.1.reg2mem, { 0, 2, 1 }
  uselistorder i32 (i8*, i8*)* @strcmp, { 1, 0 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 2, 1, 0 }
  uselistorder i32 18, { 1, 3, 0, 4, 2 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 1, 0 }
  uselistorder label %dec_label_pc_11690, { 1, 0, 2, 3 }
}

define i32 @call_fread_fwrite() local_unnamed_addr {
dec_label_pc_11724:
  %0 = call i32 @param_fread_fwrite(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_13678, i32 0, i32 0)), !insn.addr !88
  ret i32 %0, !insn.addr !88
}

define i32 @param_malloc_free(i32 %size) local_unnamed_addr {
dec_label_pc_11730:
  %0 = alloca i32
  %r4.0.reg2mem = alloca i32, !insn.addr !89
  %r3.11.reg2mem = alloca i32, !insn.addr !89
  %1 = load i32, i32* %0
  %2 = mul i32 %size, 4, !insn.addr !90
  %3 = call i32* @malloc(i32 %2), !insn.addr !91
  %4 = icmp eq i32* %3, null, !insn.addr !92
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !93
  br i1 %4, label %dec_label_pc_11784, label %dec_label_pc_11768.preheader, !insn.addr !93

dec_label_pc_11768.preheader:                     ; preds = %dec_label_pc_11730
  %5 = ptrtoint i32* %3 to i32, !insn.addr !91
  %r2.0 = select i1 %4, i32 %1, i32 10
  %6 = icmp eq i32 %size, 0, !insn.addr !94
  store i32 0, i32* %r3.11.reg2mem, !insn.addr !95
  br i1 %6, label %dec_label_pc_11770, label %dec_label_pc_1175c, !insn.addr !95

dec_label_pc_1175c:                               ; preds = %dec_label_pc_11768.preheader, %dec_label_pc_1175c
  %r3.11.reload = load i32, i32* %r3.11.reg2mem
  %7 = mul i32 %r3.11.reload, %r2.0, !insn.addr !96
  %8 = mul i32 %r3.11.reload, 4, !insn.addr !97
  %9 = add i32 %8, %5, !insn.addr !97
  %10 = inttoptr i32 %9 to i32*, !insn.addr !97
  store i32 %7, i32* %10, align 4, !insn.addr !97
  %11 = add nuw i32 %r3.11.reload, 1, !insn.addr !98
  %12 = icmp eq i32 %11, %size, !insn.addr !94
  store i32 %11, i32* %r3.11.reg2mem, !insn.addr !95
  br i1 %12, label %dec_label_pc_11770, label %dec_label_pc_1175c, !insn.addr !95

dec_label_pc_11770:                               ; preds = %dec_label_pc_1175c, %dec_label_pc_11768.preheader
  %13 = add i32 %2, -4, !insn.addr !99
  %14 = add i32 %13, %5, !insn.addr !100
  %15 = inttoptr i32 %14 to i32*, !insn.addr !100
  %16 = load i32, i32* %15, align 4, !insn.addr !100
  %17 = load i32, i32* %3, align 4, !insn.addr !101
  %18 = add i32 %17, %16, !insn.addr !102
  call void @free(i32* nonnull %3), !insn.addr !103
  store i32 %18, i32* %r4.0.reg2mem, !insn.addr !103
  br label %dec_label_pc_11784, !insn.addr !103

dec_label_pc_11784:                               ; preds = %dec_label_pc_11730, %dec_label_pc_11770
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !104

; uselistorder directives
  uselistorder i32 %r3.11.reload, { 0, 2, 1 }
  uselistorder i32 %5, { 1, 0 }
  uselistorder i32* %3, { 0, 1, 3, 2 }
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32* %r3.11.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 %size, { 2, 1, 0 }
  uselistorder label %dec_label_pc_11784, { 1, 0 }
  uselistorder label %dec_label_pc_1175c, { 1, 0 }
}

define i32 @call_malloc_free() local_unnamed_addr {
dec_label_pc_1178c:
  %0 = call i32 @param_malloc_free(i32 10), !insn.addr !105
  ret i32 %0, !insn.addr !105
}

define i32 @param_memset(i8* %buffer, i32 %size) local_unnamed_addr {
dec_label_pc_11794:
  %r0.01.reg2mem = alloca i32, !insn.addr !106
  %r3.02.reg2mem = alloca i32, !insn.addr !106
  %r0.0.lcssa.reg2mem = alloca i32, !insn.addr !106
  %0 = ptrtoint i8* %buffer to i32
  %1 = bitcast i8* %buffer to i32*, !insn.addr !107
  %2 = call i32* @memset(i32* %1, i32 0, i32 %size), !insn.addr !107
  %3 = add i32 %0, %size, !insn.addr !108
  %4 = icmp eq i32 %size, 0, !insn.addr !109
  store i32 0, i32* %r0.0.lcssa.reg2mem, !insn.addr !110
  store i32 %0, i32* %r3.02.reg2mem, !insn.addr !110
  store i32 0, i32* %r0.01.reg2mem, !insn.addr !110
  br i1 %4, label %dec_label_pc_117b8._crit_edge, label %dec_label_pc_117c0, !insn.addr !110

dec_label_pc_117b8._crit_edge:                    ; preds = %dec_label_pc_117c0, %dec_label_pc_11794
  %r0.0.lcssa.reload = load i32, i32* %r0.0.lcssa.reg2mem
  ret i32 %r0.0.lcssa.reload, !insn.addr !110

dec_label_pc_117c0:                               ; preds = %dec_label_pc_11794, %dec_label_pc_117c0
  %r0.01.reload = load i32, i32* %r0.01.reg2mem
  %r3.02.reload = load i32, i32* %r3.02.reg2mem
  %5 = inttoptr i32 %r3.02.reload to i8*, !insn.addr !111
  %6 = load i8, i8* %5, align 1, !insn.addr !111
  %7 = zext i8 %6 to i32, !insn.addr !111
  %8 = add i32 %r3.02.reload, 1, !insn.addr !111
  %9 = add i32 %r0.01.reload, %7, !insn.addr !112
  %10 = icmp eq i32 %8, %3, !insn.addr !109
  store i32 %9, i32* %r0.0.lcssa.reg2mem, !insn.addr !110
  store i32 %8, i32* %r3.02.reg2mem, !insn.addr !110
  store i32 %9, i32* %r0.01.reg2mem, !insn.addr !110
  br i1 %10, label %dec_label_pc_117b8._crit_edge, label %dec_label_pc_117c0, !insn.addr !110

; uselistorder directives
  uselistorder i32* %r0.0.lcssa.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r3.02.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r0.01.reg2mem, { 2, 0, 1 }
  uselistorder i32 %size, { 0, 2, 1 }
  uselistorder label %dec_label_pc_117c0, { 1, 0 }
}

define i32 @call_memset() local_unnamed_addr {
dec_label_pc_117cc:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !113
  %r3.0.reg2mem = alloca i32, !insn.addr !113
  %r2.0.reg2mem = alloca i32, !insn.addr !113
  %1 = load i32, i32* %0
  %buffer_-52 = alloca [10 x i32], align 4
  %2 = ptrtoint [10 x i32]* %buffer_-52 to i32, !insn.addr !114
  %3 = load i32, i32* @global_var_23f08, align 4, !insn.addr !115
  store i32 %2, i32* %r2.0.reg2mem, !insn.addr !116
  store i32 0, i32* %r3.0.reg2mem, !insn.addr !116
  br label %dec_label_pc_117f4, !insn.addr !116

dec_label_pc_117f4:                               ; preds = %dec_label_pc_117f4, %dec_label_pc_117cc
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  %r2.0.reload = load i32, i32* %r2.0.reg2mem
  %4 = add nuw nsw i32 %r3.0.reload, 1, !insn.addr !117
  %5 = icmp eq i32 %4, 10, !insn.addr !118
  %6 = inttoptr i32 %r2.0.reload to i32*, !insn.addr !119
  store i32 255, i32* %6, align 4, !insn.addr !119
  %7 = add i32 %r2.0.reload, 4, !insn.addr !119
  store i32 %7, i32* %r2.0.reg2mem, !insn.addr !120
  store i32 %4, i32* %r3.0.reg2mem, !insn.addr !120
  br i1 %5, label %dec_label_pc_11804, label %dec_label_pc_117f4, !insn.addr !120

dec_label_pc_11804:                               ; preds = %dec_label_pc_117f4
  %8 = bitcast [10 x i32]* %buffer_-52 to i8*, !insn.addr !121
  %9 = call i32 @param_memset(i8* nonnull %8, i32 40), !insn.addr !121
  %10 = getelementptr inbounds [10 x i32], [10 x i32]* %buffer_-52, i32 0, i32 0, !insn.addr !122
  %11 = load i32, i32* %10, align 4, !insn.addr !122
  %12 = add i32 %11, %1, !insn.addr !123
  %13 = load i32, i32* @global_var_23f08, align 4, !insn.addr !124
  %14 = icmp eq i32 %3, %13, !insn.addr !125
  store i32 %12, i32* %r0.0.reg2mem, !insn.addr !126
  br i1 %14, label %dec_label_pc_11834, label %dec_label_pc_11830, !insn.addr !126

dec_label_pc_11830:                               ; preds = %dec_label_pc_11804
  call void @__stack_chk_fail(), !insn.addr !127
  store i32 ptrtoint (i32* @0 to i32), i32* %r0.0.reg2mem, !insn.addr !127
  br label %dec_label_pc_11834, !insn.addr !127

dec_label_pc_11834:                               ; preds = %dec_label_pc_11830, %dec_label_pc_11804
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !128

; uselistorder directives
  uselistorder i32 %r2.0.reload, { 1, 0 }
  uselistorder [10 x i32]* %buffer_-52, { 1, 0, 2 }
  uselistorder i32* %r2.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r3.0.reg2mem, { 1, 0, 2 }
}

define i32 @param_strchr_strstr(i8* %str, i8 %ch, i8* %substr) local_unnamed_addr {
dec_label_pc_11840:
  %0 = sext i8 %ch to i32
  %1 = ptrtoint i8* %str to i32
  %2 = call i8* @strchr(i8* %str, i32 %0), !insn.addr !129
  %3 = ptrtoint i8* %2 to i32, !insn.addr !129
  %4 = icmp eq i8* %2, null, !insn.addr !130
  %5 = sub i32 %3, %1
  %r4.1 = select i1 %4, i32 -1, i32 %5
  %6 = call i8* @strstr(i8* %str, i8* %substr), !insn.addr !131
  %7 = ptrtoint i8* %6 to i32, !insn.addr !131
  %8 = icmp eq i8* %6, null, !insn.addr !132
  %9 = sub i32 %7, %1
  %r0.1 = select i1 %8, i32 -1, i32 %9
  %10 = add i32 %r0.1, %r4.1, !insn.addr !133
  ret i32 %10, !insn.addr !134
}

define i32 @call_strchr_strstr() local_unnamed_addr {
dec_label_pc_1187c:
  %0 = call i32 @param_strchr_strstr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_13695, i32 0, i32 0), i8 66, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_1368f, i32 0, i32 0)), !insn.addr !135
  ret i32 %0, !insn.addr !135
}

define void @test_standard_library_functions() local_unnamed_addr {
dec_label_pc_11894:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_136a9 to i8*)), !insn.addr !136
  %1 = call i32 @call_strcpy(), !insn.addr !137
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_136cd to i8*)), !insn.addr !138
  %3 = call i32 @call_strcmp(), !insn.addr !139
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_136e8 to i8*)), !insn.addr !140
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_13703 to i8*)), !insn.addr !141
  %6 = call i32 @call_memcpy(), !insn.addr !142
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1371f to i8*)), !insn.addr !143
  %8 = call i32 @call_memcmp(), !insn.addr !144
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1373b to i8*)), !insn.addr !145
  %10 = call i32 @call_printf(), !insn.addr !146
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_13757 to i8*)), !insn.addr !147
  %12 = call i32 @call_scanf(), !insn.addr !148
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_13773 to i8*)), !insn.addr !149
  %14 = call i32 @call_fopen_fclose(), !insn.addr !150
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_13790 to i8*)), !insn.addr !151
  %16 = call i32 @call_fread_fwrite(), !insn.addr !152
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_137ac to i8*)), !insn.addr !153
  %18 = call i32 @call_malloc_free(), !insn.addr !154
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_137c8 to i8*)), !insn.addr !155
  %20 = call i32 @call_memset(), !insn.addr !156
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_137e4 to i8*)), !insn.addr !157
  %22 = call i32 @call_strchr_strstr(), !insn.addr !158
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_137ff to i8*)), !insn.addr !159
  ret void, !insn.addr !159
}

define i32 @param_linux_syscall(i8* %arg1) local_unnamed_addr {
dec_label_pc_119c4:
  %r4.0.reg2mem = alloca i32, !insn.addr !160
  %0 = call i32 (i32, ...) @syscall(i32 5), !insn.addr !161
  %1 = icmp slt i32 %0, 0, !insn.addr !162
  br i1 %1, label %dec_label_pc_119e0, label %dec_label_pc_119f4, !insn.addr !163

dec_label_pc_119e0:                               ; preds = %dec_label_pc_119c4
  %2 = call i32* @__errno_location(), !insn.addr !164
  %3 = load i32, i32* %2, align 4, !insn.addr !165
  %4 = sub i32 0, %3, !insn.addr !166
  store i32 %4, i32* %r4.0.reg2mem, !insn.addr !166
  br label %dec_label_pc_119ec, !insn.addr !166

dec_label_pc_119ec:                               ; preds = %dec_label_pc_119f4, %dec_label_pc_119e0
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !167

dec_label_pc_119f4:                               ; preds = %dec_label_pc_119c4
  %5 = call i32 (i32, ...) @syscall(i32 6), !insn.addr !168
  store i32 %0, i32* %r4.0.reg2mem, !insn.addr !169
  br label %dec_label_pc_119ec, !insn.addr !169

; uselistorder directives
  uselistorder i32* %r4.0.reg2mem, { 1, 0, 2 }
  uselistorder i32 (i32, ...)* @syscall, { 1, 0 }
}

define i32 @call_linux_syscall() local_unnamed_addr {
dec_label_pc_11a04:
  %0 = call i32 @param_linux_syscall(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_13656, i32 0, i32 0)), !insn.addr !170
  %1 = icmp slt i32 %0, 0, !insn.addr !171
  %spec.select = select i1 %1, i32 %0, i32 42
  %2 = icmp eq i1 %1, false, !insn.addr !172
  %r0.1 = select i1 %2, i32 %spec.select, i32 -1
  ret i32 %r0.1, !insn.addr !173

; uselistorder directives
  uselistorder i1 %1, { 1, 0 }
}

define i32 @param_win32_api(i8* %filename) local_unnamed_addr {
dec_label_pc_11a24:
  %0 = alloca i32
  %r0.3.reg2mem = alloca i32, !insn.addr !174
  %1 = load i32, i32* %0
  %st_-104 = alloca i32, align 4
  %2 = load i32, i32* @global_var_23f08, align 4, !insn.addr !175
  %3 = bitcast i32* %st_-104 to %stat*, !insn.addr !176
  %4 = call i32 @stat(i8* %filename, %stat* nonnull %3), !insn.addr !176
  %5 = icmp slt i32 %4, 0, !insn.addr !177
  %6 = icmp eq i1 %5, false, !insn.addr !178
  %7 = icmp sgt i32 %1, 0
  %spec.select2 = select i1 %7, i32 42, i32 -2
  %r0.2 = select i1 %6, i32 %spec.select2, i32 -1
  %8 = load i32, i32* @global_var_23f08, align 4, !insn.addr !179
  %9 = icmp eq i32 %2, %8, !insn.addr !180
  store i32 %r0.2, i32* %r0.3.reg2mem, !insn.addr !181
  br i1 %9, label %dec_label_pc_11a7c, label %dec_label_pc_11a78, !insn.addr !181

dec_label_pc_11a78:                               ; preds = %dec_label_pc_11a24
  call void @__stack_chk_fail(), !insn.addr !182
  store i32 ptrtoint (i32* @0 to i32), i32* %r0.3.reg2mem, !insn.addr !182
  br label %dec_label_pc_11a7c, !insn.addr !182

dec_label_pc_11a7c:                               ; preds = %dec_label_pc_11a78, %dec_label_pc_11a24
  %r0.3.reload = load i32, i32* %r0.3.reg2mem
  ret i32 %r0.3.reload, !insn.addr !183
}

define i32 @call_win32_api() local_unnamed_addr {
dec_label_pc_11a88:
  %0 = call i32 @param_win32_api(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_13656, i32 0, i32 0)), !insn.addr !184
  ret i32 %0, !insn.addr !184
}

define i32 @param_fork_exec(i8* %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_11a94:
  %r0.3.reg2mem = alloca i32, !insn.addr !185
  %stack_var_-24 = alloca i8*, align 4
  store i8* %arg1, i8** %stack_var_-24, align 4, !insn.addr !185
  %0 = load i32, i32* @global_var_23f08, align 4, !insn.addr !186
  %1 = call i32 @fork(), !insn.addr !187
  %2 = icmp slt i32 %1, 0, !insn.addr !188
  br i1 %2, label %dec_label_pc_11b20, label %dec_label_pc_11abc, !insn.addr !189

dec_label_pc_11abc:                               ; preds = %dec_label_pc_11a94
  %3 = icmp eq i32 %1, 0, !insn.addr !188
  br i1 %3, label %dec_label_pc_11ac0, label %dec_label_pc_11ad8, !insn.addr !190

dec_label_pc_11ac0:                               ; preds = %dec_label_pc_11abc
  %4 = call i32 (i8*, i8*, ...) @execl(i8* %arg1, i8* %arg1), !insn.addr !191
  call void @_exit(i32 127), !insn.addr !192
  unreachable, !insn.addr !192

dec_label_pc_11ad8:                               ; preds = %dec_label_pc_11abc
  %5 = bitcast i8** %stack_var_-24 to i32*, !insn.addr !193
  %6 = call i32 @waitpid(i32 %1, i32* nonnull %5, i32 0), !insn.addr !193
  %7 = icmp slt i32 %6, 0, !insn.addr !194
  %8 = icmp eq i1 %7, false, !insn.addr !195
  store i32 -2, i32* %r0.3.reg2mem, !insn.addr !195
  br i1 %8, label %dec_label_pc_11af0, label %dec_label_pc_11b04, !insn.addr !195

dec_label_pc_11af0:                               ; preds = %dec_label_pc_11ad8
  %9 = load i8*, i8** %stack_var_-24, align 4, !insn.addr !196
  %10 = ptrtoint i8* %9 to i32, !insn.addr !196
  %11 = urem i32 %10, 128, !insn.addr !197
  %12 = icmp eq i32 %11, 0, !insn.addr !197
  %13 = udiv i32 %10, 256
  %14 = urem i32 %13, 256
  %spec.select3 = select i1 %12, i32 %14, i32 -3
  store i32 %spec.select3, i32* %r0.3.reg2mem
  br label %dec_label_pc_11b04

dec_label_pc_11b04:                               ; preds = %dec_label_pc_11af0, %dec_label_pc_11ad8, %dec_label_pc_11b20
  %15 = load i32, i32* @global_var_23f08, align 4, !insn.addr !198
  %16 = icmp eq i32 %0, %15, !insn.addr !199
  br i1 %16, label %dec_label_pc_11b28, label %dec_label_pc_11b1c, !insn.addr !200

dec_label_pc_11b1c:                               ; preds = %dec_label_pc_11b04
  call void @__stack_chk_fail(), !insn.addr !201
  br label %dec_label_pc_11b20, !insn.addr !201

dec_label_pc_11b20:                               ; preds = %dec_label_pc_11b1c, %dec_label_pc_11a94
  store i32 -1, i32* %r0.3.reg2mem, !insn.addr !202
  br label %dec_label_pc_11b04, !insn.addr !202

dec_label_pc_11b28:                               ; preds = %dec_label_pc_11b04
  %r0.3.reload = load i32, i32* %r0.3.reg2mem
  ret i32 %r0.3.reload, !insn.addr !203

; uselistorder directives
  uselistorder i8** %stack_var_-24, { 1, 2, 0 }
  uselistorder i32* %r0.3.reg2mem, { 0, 3, 1, 2 }
  uselistorder i32 256, { 1, 0, 2 }
  uselistorder label %dec_label_pc_11b04, { 2, 0, 1 }
}

define i32 @call_fork_exec() local_unnamed_addr {
dec_label_pc_11b34:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @param_fork_exec(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_1381b, i32 0, i32 0), i32 0, i32 %1), !insn.addr !204
  %3 = icmp eq i32 %2, 0, !insn.addr !205
  %r0.1 = select i1 %3, i32 42, i32 -1
  ret i32 %r0.1, !insn.addr !206
}

define i32 @param_pipe_communication() local_unnamed_addr {
dec_label_pc_11b58:
  %0 = alloca i32
  %r0.1.reg2mem = alloca i32, !insn.addr !207
  %buffer_-52 = alloca [32 x i8], align 1
  %1 = load i32, i32* %0
  %pipefd_-60 = alloca [2 x i32], align 4
  %stack_var_-64 = alloca i32, align 4
  %2 = ptrtoint [2 x i32]* %pipefd_-60 to i32, !insn.addr !208
  %3 = load i32, i32* @global_var_23f08, align 4, !insn.addr !209
  %4 = insertvalue [2 x i32] undef, i32 %2, 0, !insn.addr !210
  %5 = call i32 @pipe([2 x i32] %4), !insn.addr !210
  %6 = icmp slt i32 %5, 0, !insn.addr !211
  br i1 %6, label %dec_label_pc_11c1c, label %dec_label_pc_11b80, !insn.addr !212

dec_label_pc_11b80:                               ; preds = %dec_label_pc_11b58
  %7 = call i32 @fork(), !insn.addr !213
  %8 = icmp slt i32 %7, 0, !insn.addr !214
  store i32 -2, i32* %r0.1.reg2mem, !insn.addr !215
  br i1 %8, label %dec_label_pc_11c00, label %dec_label_pc_11b8c, !insn.addr !215

dec_label_pc_11b8c:                               ; preds = %dec_label_pc_11b80
  %9 = icmp eq i32 %7, 0, !insn.addr !214
  br i1 %9, label %dec_label_pc_11b90, label %dec_label_pc_11bb8, !insn.addr !216

dec_label_pc_11b90:                               ; preds = %dec_label_pc_11b8c
  %10 = getelementptr inbounds [2 x i32], [2 x i32]* %pipefd_-60, i32 0, i32 0, !insn.addr !217
  %11 = load i32, i32* %10, align 4, !insn.addr !217
  %12 = call i32 @close(i32 %11), !insn.addr !218
  %13 = call i32 @write(i32 %1, i32* bitcast ([10 x i8]* @global_var_13825 to i32*), i32 9), !insn.addr !219
  %14 = call i32 @close(i32 %1), !insn.addr !220
  call void @_exit(i32 0), !insn.addr !221
  unreachable, !insn.addr !221

dec_label_pc_11bb8:                               ; preds = %dec_label_pc_11b8c
  %15 = ptrtoint i32* %stack_var_-64 to i32, !insn.addr !222
  %16 = call i32 @close(i32 %1), !insn.addr !223
  %17 = getelementptr inbounds [2 x i32], [2 x i32]* %pipefd_-60, i32 0, i32 0, !insn.addr !224
  %18 = load i32, i32* %17, align 4, !insn.addr !224
  %19 = bitcast [32 x i8]* %buffer_-52 to i32*, !insn.addr !225
  %20 = call i32 @read(i32 %18, i32* nonnull %19, i32 31), !insn.addr !225
  %21 = add i32 %15, 12, !insn.addr !226
  %22 = add i32 %21, %20, !insn.addr !227
  %23 = inttoptr i32 %22 to i8*, !insn.addr !227
  store i8 0, i8* %23, align 1, !insn.addr !227
  %24 = load i32, i32* %17, align 4, !insn.addr !228
  %25 = call i32 @close(i32 %24), !insn.addr !229
  %26 = call i32 @wait(i32 0), !insn.addr !230
  %27 = icmp sgt i32 %20, 0, !insn.addr !231
  %spec.select1 = select i1 %27, i32 42, i32 -3
  store i32 %spec.select1, i32* %r0.1.reg2mem
  br label %dec_label_pc_11c00

dec_label_pc_11c00:                               ; preds = %dec_label_pc_11bb8, %dec_label_pc_11b80, %dec_label_pc_11c1c
  %28 = load i32, i32* @global_var_23f08, align 4, !insn.addr !232
  %29 = icmp eq i32 %3, %28, !insn.addr !233
  br i1 %29, label %dec_label_pc_11c2c, label %dec_label_pc_11c18, !insn.addr !234

dec_label_pc_11c18:                               ; preds = %dec_label_pc_11c00
  call void @__stack_chk_fail(), !insn.addr !235
  br label %dec_label_pc_11c1c, !insn.addr !235

dec_label_pc_11c1c:                               ; preds = %dec_label_pc_11c18, %dec_label_pc_11b58
  store i32 -1, i32* %r0.1.reg2mem, !insn.addr !236
  br label %dec_label_pc_11c00, !insn.addr !236

dec_label_pc_11c2c:                               ; preds = %dec_label_pc_11c00
  %r0.1.reload = load i32, i32* %r0.1.reg2mem
  ret i32 %r0.1.reload, !insn.addr !237

; uselistorder directives
  uselistorder i32 %20, { 1, 0 }
  uselistorder i32* %r0.1.reg2mem, { 0, 3, 1, 2 }
  uselistorder void (i32)* @_exit, { 1, 0 }
  uselistorder i32 ()* @fork, { 1, 0 }
  uselistorder label %dec_label_pc_11c00, { 2, 0, 1 }
}

define i32 @param_socket_create() local_unnamed_addr {
dec_label_pc_11c40:
  %r0.1.reg2mem = alloca i32, !insn.addr !238
  %addr_-28 = alloca i32, align 4
  %opt_-32 = alloca i32, align 4
  %0 = load i32, i32* @global_var_23f08, align 4, !insn.addr !239
  %1 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !240
  %2 = icmp slt i32 %1, 0, !insn.addr !241
  %3 = icmp eq i1 %2, false, !insn.addr !242
  store i32 -1, i32* %r0.1.reg2mem, !insn.addr !242
  br i1 %3, label %dec_label_pc_11c74, label %dec_label_pc_11ca4, !insn.addr !242

dec_label_pc_11c74:                               ; preds = %dec_label_pc_11c40
  store i32 1, i32* %opt_-32, align 4, !insn.addr !243
  %4 = call i32 @setsockopt(i32 %1, i32 1, i32 2, i32* nonnull %opt_-32, i32 4), !insn.addr !244
  %5 = icmp slt i32 %4, 0, !insn.addr !245
  br i1 %5, label %dec_label_pc_11c98, label %dec_label_pc_11cc0, !insn.addr !246

dec_label_pc_11c98:                               ; preds = %dec_label_pc_11c74
  %6 = call i32 @close(i32 %1), !insn.addr !247
  store i32 -2, i32* %r0.1.reg2mem, !insn.addr !248
  br label %dec_label_pc_11ca4, !insn.addr !248

dec_label_pc_11ca4:                               ; preds = %dec_label_pc_11d00, %dec_label_pc_11c40, %dec_label_pc_11cf0, %dec_label_pc_11c98
  %7 = load i32, i32* @global_var_23f08, align 4, !insn.addr !249
  %8 = icmp eq i32 %0, %7, !insn.addr !250
  br i1 %8, label %dec_label_pc_11d30, label %dec_label_pc_11cbc, !insn.addr !251

dec_label_pc_11cbc:                               ; preds = %dec_label_pc_11ca4
  call void @__stack_chk_fail(), !insn.addr !252
  br label %dec_label_pc_11cc0, !insn.addr !252

dec_label_pc_11cc0:                               ; preds = %dec_label_pc_11c74, %dec_label_pc_11cbc
  %9 = call i32* @memset(i32* nonnull %addr_-28, i32 0, i32 16), !insn.addr !253
  store i32 2, i32* %addr_-28, align 4, !insn.addr !254
  %10 = bitcast i32* %addr_-28 to %sockaddr*, !insn.addr !255
  %11 = call i32 @bind(i32 %1, %sockaddr* nonnull %10, i32 16), !insn.addr !255
  %12 = icmp slt i32 %11, 0, !insn.addr !256
  br i1 %12, label %dec_label_pc_11cf0, label %dec_label_pc_11d00, !insn.addr !257

dec_label_pc_11cf0:                               ; preds = %dec_label_pc_11cc0
  %13 = call i32 @close(i32 %1), !insn.addr !258
  store i32 -3, i32* %r0.1.reg2mem, !insn.addr !259
  br label %dec_label_pc_11ca4, !insn.addr !259

dec_label_pc_11d00:                               ; preds = %dec_label_pc_11cc0
  %14 = call i32 @listen(i32 %1, i32 5), !insn.addr !260
  %15 = icmp slt i32 %14, 0, !insn.addr !261
  %16 = call i32 @close(i32 %1)
  %. = select i1 %15, i32 -4, i32 42
  store i32 %., i32* %r0.1.reg2mem, !insn.addr !262
  br label %dec_label_pc_11ca4, !insn.addr !262

dec_label_pc_11d30:                               ; preds = %dec_label_pc_11ca4
  %r0.1.reload = load i32, i32* %r0.1.reg2mem
  ret i32 %r0.1.reload, !insn.addr !263

; uselistorder directives
  uselistorder i32 %1, { 3, 2, 1, 4, 5, 0, 6 }
  uselistorder i32* %addr_-28, { 0, 2, 1 }
  uselistorder i32* %r0.1.reg2mem, { 0, 1, 3, 4, 2 }
  uselistorder i32* (i32*, i32, i32)* @memset, { 2, 1, 0 }
  uselistorder i32 2, { 0, 1, 2, 5, 3, 4 }
  uselistorder label %dec_label_pc_11cc0, { 1, 0 }
  uselistorder label %dec_label_pc_11ca4, { 0, 2, 3, 1 }
}

define i32 @param_shmget_shmat() local_unnamed_addr {
dec_label_pc_11d40:
  %r4.0.reg2mem = alloca i32, !insn.addr !264
  %0 = call i32 (i8*, i32, ...) @open(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_1382f, i32 0, i32 0), i32 66), !insn.addr !265
  %1 = icmp slt i32 %0, 0, !insn.addr !266
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !267
  br i1 %1, label %dec_label_pc_11d60, label %dec_label_pc_11d68, !insn.addr !267

dec_label_pc_11d60:                               ; preds = %dec_label_pc_11d68, %dec_label_pc_11d40, %dec_label_pc_11d80, %dec_label_pc_11db4, %dec_label_pc_11d98
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !268

dec_label_pc_11d68:                               ; preds = %dec_label_pc_11d40
  %2 = call i32 @close(i32 %0), !insn.addr !269
  %3 = call i32 @ftok(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_1382f, i32 0, i32 0), i32 42), !insn.addr !270
  %4 = icmp slt i32 %3, 0, !insn.addr !271
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !272
  br i1 %4, label %dec_label_pc_11d60, label %dec_label_pc_11d80, !insn.addr !272

dec_label_pc_11d80:                               ; preds = %dec_label_pc_11d68
  %5 = call i32 @shmget(i32 %3, i32 4096, i32 950), !insn.addr !273
  %6 = icmp slt i32 %5, 0, !insn.addr !274
  %7 = icmp eq i1 %6, false, !insn.addr !275
  store i32 -2, i32* %r4.0.reg2mem, !insn.addr !275
  br i1 %7, label %dec_label_pc_11d98, label %dec_label_pc_11d60, !insn.addr !275

dec_label_pc_11d98:                               ; preds = %dec_label_pc_11d80
  %8 = call i32* @shmat(i32 %5, i32* null, i32 0), !insn.addr !276
  %9 = icmp eq i32* %8, inttoptr (i32 -1 to i32*), !insn.addr !277
  store i32 -3, i32* %r4.0.reg2mem, !insn.addr !278
  br i1 %9, label %dec_label_pc_11d60, label %dec_label_pc_11db4, !insn.addr !278

dec_label_pc_11db4:                               ; preds = %dec_label_pc_11d98
  %10 = bitcast i32* %8 to i8*, !insn.addr !279
  %11 = call i8* @strcpy(i8* %10, i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_13841, i32 0, i32 0)), !insn.addr !279
  %12 = call i32 @strlen(i8* %10), !insn.addr !280
  %13 = call i32 @shmdt(i32* %8), !insn.addr !281
  %14 = call i32 @shmctl(i32 %5, i32 0, %shmid_ds* null), !insn.addr !282
  store i32 %12, i32* %r4.0.reg2mem, !insn.addr !283
  br label %dec_label_pc_11d60, !insn.addr !283

; uselistorder directives
  uselistorder i32* %r4.0.reg2mem, { 4, 5, 3, 1, 0, 2 }
  uselistorder i32 (i8*)* @strlen, { 1, 0 }
  uselistorder i8* (i8*, i8*)* @strcpy, { 1, 0 }
  uselistorder i32 (i32)* @close, { 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder label %dec_label_pc_11d60, { 3, 4, 2, 0, 1 }
}

define i32 @call_shmget_shmat() local_unnamed_addr {
dec_label_pc_11df4:
  %0 = call i32 @param_shmget_shmat(), !insn.addr !284
  %1 = icmp sgt i32 %0, 0, !insn.addr !285
  %r0.1 = select i1 %1, i32 42, i32 -1
  ret i32 %r0.1, !insn.addr !286
}

define i32 @param_signal_handling() local_unnamed_addr {
dec_label_pc_11e0c:
  %r5.13.reg2mem = alloca i32, !insn.addr !287
  %r5.04.reg2mem = alloca i32, !insn.addr !287
  %merge8.reg2mem = alloca i32, !insn.addr !287
  %0 = call void (i32)* @signal(i32 10, void (i32)* inttoptr (i32 69792 to void (i32)*)), !insn.addr !288
  %1 = icmp eq void (i32)* %0, inttoptr (i32 -1 to void (i32)*), !insn.addr !289
  store i32 -1, i32* %merge8.reg2mem, !insn.addr !290
  br i1 %1, label %dec_label_pc_11ef4, label %dec_label_pc_11e24, !insn.addr !290

dec_label_pc_11ef4:                               ; preds = %dec_label_pc_11e24, %dec_label_pc_11e64, %dec_label_pc_11e70, %dec_label_pc_11eb0, %dec_label_pc_11ea4, %dec_label_pc_11e0c
  %merge8.reload = load i32, i32* %merge8.reg2mem
  ret i32 %merge8.reload, !insn.addr !290

dec_label_pc_11e24:                               ; preds = %dec_label_pc_11e0c
  %2 = call void (i32)* @signal(i32 14, void (i32)* inttoptr (i32 69792 to void (i32)*)), !insn.addr !291
  %3 = icmp eq void (i32)* %2, inttoptr (i32 -1 to void (i32)*), !insn.addr !292
  store i32 -2, i32* %merge8.reg2mem, !insn.addr !293
  br i1 %3, label %dec_label_pc_11ef4, label %dec_label_pc_11e38, !insn.addr !293

dec_label_pc_11e38:                               ; preds = %dec_label_pc_11e24
  store i32 0, i32* @signal_received, align 4, !insn.addr !294
  %4 = call i32 @raise(i32 10), !insn.addr !295
  %5 = load i32, i32* @signal_received, align 4, !insn.addr !296
  %6 = icmp eq i32 %5, 0, !insn.addr !297
  store i32 1001, i32* %r5.04.reg2mem, !insn.addr !298
  br i1 %6, label %dec_label_pc_11edc, label %dec_label_pc_11e70, !insn.addr !298

dec_label_pc_11e64:                               ; preds = %dec_label_pc_11edc
  %7 = icmp eq i32 %20, 0, !insn.addr !299
  store i32 -3, i32* %merge8.reg2mem, !insn.addr !300
  br i1 %7, label %dec_label_pc_11ef4, label %dec_label_pc_11e70, !insn.addr !300

dec_label_pc_11e70:                               ; preds = %dec_label_pc_11e38, %dec_label_pc_11e64
  %8 = load i32, i32* @signal_number, align 4, !insn.addr !301
  %9 = icmp eq i32 %8, 10, !insn.addr !302
  store i32 -4, i32* %merge8.reg2mem, !insn.addr !303
  br i1 %9, label %dec_label_pc_11e7c, label %dec_label_pc_11ef4, !insn.addr !303

dec_label_pc_11e7c:                               ; preds = %dec_label_pc_11e70
  store i32 0, i32* @signal_received, align 4, !insn.addr !304
  %10 = call i32 @alarm(i32 1), !insn.addr !305
  %11 = load i32, i32* @signal_received, align 4, !insn.addr !306
  %12 = icmp eq i32 %11, 0, !insn.addr !307
  store i32 2001, i32* %r5.13.reg2mem, !insn.addr !308
  br i1 %12, label %dec_label_pc_11ee8, label %dec_label_pc_11eb0, !insn.addr !308

dec_label_pc_11ea4:                               ; preds = %dec_label_pc_11ee8
  %13 = icmp eq i32 %25, 0, !insn.addr !309
  store i32 -5, i32* %merge8.reg2mem, !insn.addr !310
  br i1 %13, label %dec_label_pc_11ef4, label %dec_label_pc_11eb0, !insn.addr !310

dec_label_pc_11eb0:                               ; preds = %dec_label_pc_11e7c, %dec_label_pc_11ea4
  %14 = load i32, i32* @signal_number, align 4, !insn.addr !311
  %15 = icmp eq i32 %14, 14, !insn.addr !312
  store i32 -5, i32* %merge8.reg2mem, !insn.addr !313
  br i1 %15, label %dec_label_pc_11ebc, label %dec_label_pc_11ef4, !insn.addr !313

dec_label_pc_11ebc:                               ; preds = %dec_label_pc_11eb0
  %16 = call void (i32)* @signal(i32 10, void (i32)* null), !insn.addr !314
  %17 = call void (i32)* @signal(i32 14, void (i32)* null), !insn.addr !315
  ret i32 42, !insn.addr !316

dec_label_pc_11edc:                               ; preds = %dec_label_pc_11e38, %dec_label_pc_11edc
  %r5.04.reload = load i32, i32* %r5.04.reg2mem
  %18 = add nsw i32 %r5.04.reload, -1, !insn.addr !317
  %19 = call i32 @usleep(i32 1000), !insn.addr !318
  %20 = load i32, i32* @signal_received, align 4, !insn.addr !296
  %21 = icmp ne i32 %20, 0, !insn.addr !297
  %22 = icmp eq i32 %18, 1, !insn.addr !317
  %or.cond = or i1 %22, %21
  store i32 %18, i32* %r5.04.reg2mem, !insn.addr !298
  br i1 %or.cond, label %dec_label_pc_11e64, label %dec_label_pc_11edc, !insn.addr !298

dec_label_pc_11ee8:                               ; preds = %dec_label_pc_11e7c, %dec_label_pc_11ee8
  %r5.13.reload = load i32, i32* %r5.13.reg2mem
  %23 = add nsw i32 %r5.13.reload, -1, !insn.addr !319
  %24 = call i32 @usleep(i32 1000), !insn.addr !320
  %25 = load i32, i32* @signal_received, align 4, !insn.addr !306
  %26 = icmp ne i32 %25, 0, !insn.addr !307
  %27 = icmp eq i32 %23, 1, !insn.addr !319
  %or.cond1 = or i1 %27, %26
  store i32 %23, i32* %r5.13.reg2mem, !insn.addr !308
  br i1 %or.cond1, label %dec_label_pc_11ea4, label %dec_label_pc_11ee8, !insn.addr !308

; uselistorder directives
  uselistorder i32 %25, { 1, 0 }
  uselistorder i32 %20, { 1, 0 }
  uselistorder i32* %merge8.reg2mem, { 2, 1, 3, 4, 5, 0, 6 }
  uselistorder i32* %r5.04.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.13.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i32)* @usleep, { 1, 0 }
  uselistorder i32 -5, { 1, 0 }
  uselistorder i32* @signal_received, { 4, 5, 1, 2, 0, 3 }
  uselistorder i32 14, { 0, 2, 1 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0 }
  uselistorder i32 10, { 2, 9, 3, 4, 10, 5, 0, 1, 6, 7, 8 }
  uselistorder label %dec_label_pc_11ee8, { 1, 0 }
  uselistorder label %dec_label_pc_11edc, { 1, 0 }
  uselistorder label %dec_label_pc_11eb0, { 1, 0 }
  uselistorder label %dec_label_pc_11e70, { 1, 0 }
  uselistorder label %dec_label_pc_11ef4, { 3, 4, 2, 1, 0, 5 }
}

define void @test_system_calls() local_unnamed_addr {
dec_label_pc_11f28:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_1384e to i8*)), !insn.addr !321
  %1 = call i32 @call_linux_syscall(), !insn.addr !322
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_13869 to i8*)), !insn.addr !323
  %3 = call i32 @call_win32_api(), !insn.addr !324
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_13885 to i8*)), !insn.addr !325
  %5 = call i32 @call_fork_exec(), !insn.addr !326
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_138a1 to i8*)), !insn.addr !327
  %7 = call i32 @param_pipe_communication(), !insn.addr !328
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_138bd to i8*)), !insn.addr !329
  %9 = call i32 @param_socket_create(), !insn.addr !330
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_138d9 to i8*)), !insn.addr !331
  %11 = call i32 @call_shmget_shmat(), !insn.addr !332
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_138f5 to i8*)), !insn.addr !333
  %13 = call i32 @param_signal_handling(), !insn.addr !334
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_13911 to i8*)), !insn.addr !335
  ret void, !insn.addr !335
}

define i32 @param_pthread_create(i32 %x) local_unnamed_addr {
dec_label_pc_11fe4:
  %0 = alloca i32
  %r4.1.reg2mem = alloca i32, !insn.addr !336
  %1 = load i32, i32* %0
  %thread_ret_-16 = alloca i8*, align 4
  %input_-20 = alloca i32, align 4
  %tid_-24 = alloca i32, align 4
  store i32 %x, i32* %tid_-24, align 4, !insn.addr !336
  %2 = inttoptr i32 %1 to i8*, !insn.addr !336
  store i8* %2, i8** %thread_ret_-16, align 4, !insn.addr !336
  %3 = load i32, i32* @global_var_23f08, align 4, !insn.addr !337
  store i32 %x, i32* %input_-20, align 4, !insn.addr !338
  %4 = call i32 @pthread_create(i32* nonnull %tid_-24, i32* null, i32* (i32*)* inttoptr (i32 69868 to i32* (i32*)*), i32* nonnull %input_-20), !insn.addr !339
  %5 = icmp eq i32 %4, 0, !insn.addr !340
  store i32 -1, i32* %r4.1.reg2mem, !insn.addr !341
  br i1 %5, label %dec_label_pc_1201c, label %dec_label_pc_12034, !insn.addr !341

dec_label_pc_1201c:                               ; preds = %dec_label_pc_11fe4
  %6 = load i32, i32* %tid_-24, align 4, !insn.addr !342
  %7 = bitcast i8** %thread_ret_-16 to i32**, !insn.addr !343
  %8 = call i32 @pthread_join(i32 %6, i32** nonnull %7), !insn.addr !343
  %9 = load i8*, i8** %thread_ret_-16, align 4, !insn.addr !344
  %10 = bitcast i8* %9 to i32*, !insn.addr !345
  call void @free(i32* %10), !insn.addr !345
  store i32 69868, i32* %r4.1.reg2mem, !insn.addr !345
  br label %dec_label_pc_12034, !insn.addr !345

dec_label_pc_12034:                               ; preds = %dec_label_pc_11fe4, %dec_label_pc_1201c
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %11 = load i32, i32* @global_var_23f08, align 4, !insn.addr !346
  %12 = icmp eq i32 %3, %11, !insn.addr !347
  br i1 %12, label %dec_label_pc_12050, label %dec_label_pc_1204c, !insn.addr !348

dec_label_pc_1204c:                               ; preds = %dec_label_pc_12034
  call void @__stack_chk_fail(), !insn.addr !349
  br label %dec_label_pc_12050, !insn.addr !349

dec_label_pc_12050:                               ; preds = %dec_label_pc_1204c, %dec_label_pc_12034
  ret i32 %r4.1.reload, !insn.addr !350

; uselistorder directives
  uselistorder i32* %tid_-24, { 1, 0, 2 }
  uselistorder i8** %thread_ret_-16, { 1, 0, 2 }
  uselistorder i32* %r4.1.reg2mem, { 0, 2, 1 }
  uselistorder i32 %x, { 1, 0 }
  uselistorder label %dec_label_pc_12034, { 1, 0 }
}

define i32 @call_pthread_create() local_unnamed_addr {
dec_label_pc_12064:
  %0 = call i32 @param_pthread_create(i32 7), !insn.addr !351
  ret i32 %0, !insn.addr !351
}

define i32 @param_pthread_join() local_unnamed_addr {
dec_label_pc_1206c:
  %r4.1.reg2mem = alloca i32, !insn.addr !352
  %r4.1.ph.reg2mem = alloca i32, !insn.addr !352
  %sb.0.reg2mem = alloca i32, !insn.addr !352
  %r8.0.reg2mem = alloca i32, !insn.addr !352
  %r5.1.reg2mem = alloca i32, !insn.addr !352
  %r4.0.reg2mem = alloca i32, !insn.addr !352
  %r7.0.reg2mem = alloca i32, !insn.addr !352
  %r6.0.reg2mem = alloca i32, !insn.addr !352
  %r5.0.reg2mem = alloca i32, !insn.addr !352
  %data_-72 = alloca i32, align 4
  %tids_-84 = alloca [3 x i32], align 4
  %0 = ptrtoint [3 x i32]* %tids_-84 to i32, !insn.addr !353
  %1 = ptrtoint i32* %data_-72 to i32, !insn.addr !354
  %2 = load i32, i32* @global_var_23f08, align 4, !insn.addr !355
  store i32 1, i32* %data_-72, align 4, !insn.addr !356
  store i32 0, i32* %r5.0.reg2mem, !insn.addr !357
  store i32 %1, i32* %r6.0.reg2mem, !insn.addr !357
  store i32 %0, i32* %r7.0.reg2mem, !insn.addr !357
  br label %dec_label_pc_120bc, !insn.addr !357

dec_label_pc_120bc:                               ; preds = %dec_label_pc_120d8, %dec_label_pc_1206c
  %r7.0.reload = load i32, i32* %r7.0.reg2mem
  %r6.0.reload = load i32, i32* %r6.0.reg2mem
  %3 = inttoptr i32 %r7.0.reload to i32*, !insn.addr !358
  %4 = inttoptr i32 %r6.0.reload to i32*, !insn.addr !358
  %5 = call i32 @pthread_create(i32* %3, i32* null, i32* (i32*)* bitcast (i32* (i32*)** @global_var_110b8 to i32* (i32*)*), i32* %4), !insn.addr !358
  %6 = icmp eq i32 %5, 0, !insn.addr !359
  br i1 %6, label %dec_label_pc_120d8, label %dec_label_pc_12130, !insn.addr !360

dec_label_pc_120d8:                               ; preds = %dec_label_pc_120bc
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %7 = add nuw nsw i32 %r5.0.reload, 1, !insn.addr !361
  %8 = icmp eq i32 %7, 3, !insn.addr !362
  %9 = add i32 %r7.0.reload, 4, !insn.addr !363
  %10 = add i32 %r6.0.reload, 12, !insn.addr !364
  store i32 %7, i32* %r5.0.reg2mem, !insn.addr !365
  store i32 %10, i32* %r6.0.reg2mem, !insn.addr !365
  store i32 %9, i32* %r7.0.reg2mem, !insn.addr !365
  store i32 0, i32* %r4.0.reg2mem, !insn.addr !365
  store i32 3, i32* %r5.1.reg2mem, !insn.addr !365
  store i32 %1, i32* %r8.0.reg2mem, !insn.addr !365
  store i32 %0, i32* %sb.0.reg2mem, !insn.addr !365
  br i1 %8, label %dec_label_pc_120ec, label %dec_label_pc_120bc, !insn.addr !365

dec_label_pc_120ec:                               ; preds = %dec_label_pc_120d8, %dec_label_pc_12100
  %sb.0.reload = load i32, i32* %sb.0.reg2mem
  %11 = inttoptr i32 %sb.0.reload to i32*, !insn.addr !366
  %12 = load i32, i32* %11, align 4, !insn.addr !366
  %13 = call i32 @pthread_join(i32 %12, i32** null), !insn.addr !367
  %14 = icmp eq i32 %13, 0, !insn.addr !368
  store i32 -2, i32* %r4.1.ph.reg2mem, !insn.addr !369
  br i1 %14, label %dec_label_pc_12100, label %dec_label_pc_12114.loopexit, !insn.addr !369

dec_label_pc_12100:                               ; preds = %dec_label_pc_120ec
  %r8.0.reload = load i32, i32* %r8.0.reg2mem
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %15 = add i32 %sb.0.reload, 4, !insn.addr !366
  %16 = add i32 %r8.0.reload, 8, !insn.addr !370
  %17 = inttoptr i32 %16 to i32*, !insn.addr !370
  %18 = load i32, i32* %17, align 4, !insn.addr !370
  %19 = add nsw i32 %r5.1.reload, -1, !insn.addr !371
  %20 = icmp eq i32 %r5.1.reload, 1, !insn.addr !371
  %21 = add i32 %18, %r4.0.reload, !insn.addr !372
  %22 = add i32 %r8.0.reload, 12, !insn.addr !373
  store i32 %21, i32* %r4.0.reg2mem, !insn.addr !374
  store i32 %19, i32* %r5.1.reg2mem, !insn.addr !374
  store i32 %22, i32* %r8.0.reg2mem, !insn.addr !374
  store i32 %15, i32* %sb.0.reg2mem, !insn.addr !374
  store i32 %21, i32* %r4.1.ph.reg2mem, !insn.addr !374
  br i1 %20, label %dec_label_pc_12114.loopexit, label %dec_label_pc_120ec, !insn.addr !374

dec_label_pc_12114.loopexit:                      ; preds = %dec_label_pc_12100, %dec_label_pc_120ec
  %r4.1.ph.reload = load i32, i32* %r4.1.ph.reg2mem
  store i32 %r4.1.ph.reload, i32* %r4.1.reg2mem
  br label %dec_label_pc_12114

dec_label_pc_12114:                               ; preds = %dec_label_pc_12114.loopexit, %dec_label_pc_12130
  %23 = load i32, i32* @global_var_23f08, align 4, !insn.addr !375
  %24 = icmp eq i32 %2, %23, !insn.addr !376
  br i1 %24, label %dec_label_pc_12140, label %dec_label_pc_1212c, !insn.addr !377

dec_label_pc_1212c:                               ; preds = %dec_label_pc_12114
  call void @__stack_chk_fail(), !insn.addr !378
  br label %dec_label_pc_12130, !insn.addr !378

dec_label_pc_12130:                               ; preds = %dec_label_pc_120bc, %dec_label_pc_1212c
  store i32 -1, i32* %r4.1.reg2mem, !insn.addr !379
  br label %dec_label_pc_12114, !insn.addr !379

dec_label_pc_12140:                               ; preds = %dec_label_pc_12114
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  ret i32 %r4.1.reload, !insn.addr !380

; uselistorder directives
  uselistorder i32 %r5.1.reload, { 1, 0 }
  uselistorder i32 %r8.0.reload, { 1, 0 }
  uselistorder i32 %r6.0.reload, { 1, 0 }
  uselistorder i32 %r7.0.reload, { 1, 0 }
  uselistorder i32* %r5.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r6.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r7.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r8.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sb.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.1.reg2mem, { 0, 2, 1 }
  uselistorder i32 8, { 1, 0 }
  uselistorder i32 12, { 5, 6, 0, 1, 2, 3, 4 }
  uselistorder i32 3, { 0, 3, 1, 2 }
  uselistorder label %dec_label_pc_12130, { 1, 0 }
  uselistorder label %dec_label_pc_12114, { 1, 0 }
  uselistorder label %dec_label_pc_120ec, { 1, 0 }
}

define i32 @param_mutex_lock(i32 %thread_count, i32 %iterations_per_thread) local_unnamed_addr {
dec_label_pc_1215c:
  %storemerge3.reg2mem = alloca i32, !insn.addr !381
  %r0.2.reg2mem = alloca i32, !insn.addr !381
  %r6.04.reg2mem = alloca i32, !insn.addr !381
  %stack_var_-28 = alloca i32, align 4
  %0 = mul i32 %thread_count, 4, !insn.addr !382
  store i32 %iterations_per_thread, i32* %stack_var_-28, align 4, !insn.addr !383
  %1 = call i32* @malloc(i32 %0), !insn.addr !384
  %2 = icmp eq i32* %1, null, !insn.addr !385
  store i32 -1, i32* %r0.2.reg2mem, !insn.addr !386
  br i1 %2, label %dec_label_pc_121ec, label %dec_label_pc_1217c, !insn.addr !386

dec_label_pc_1217c:                               ; preds = %dec_label_pc_1215c
  %3 = ptrtoint i32* %1 to i32, !insn.addr !384
  store i32 0, i32* @shared_counter, align 4, !insn.addr !387
  %4 = icmp sgt i32 %thread_count, 0
  store i32 0, i32* %r6.04.reg2mem, !insn.addr !388
  br i1 %4, label %dec_label_pc_121c4, label %dec_label_pc_121a0, !insn.addr !388

dec_label_pc_1218c:                               ; preds = %dec_label_pc_121c4
  %5 = add nuw nsw i32 %r6.04.reload, 1, !insn.addr !389
  %6 = icmp slt i32 %5, %thread_count, !insn.addr !388
  store i32 %5, i32* %r6.04.reg2mem, !insn.addr !388
  store i32 0, i32* %storemerge3.reg2mem, !insn.addr !388
  br i1 %6, label %dec_label_pc_121c4, label %dec_label_pc_121fc, !insn.addr !388

dec_label_pc_121a0:                               ; preds = %dec_label_pc_121fc, %dec_label_pc_1217c
  call void @free(i32* nonnull %1), !insn.addr !390
  %7 = load i32, i32* %stack_var_-28, align 4, !insn.addr !391
  %8 = load i32, i32* @shared_counter, align 4, !insn.addr !392
  %9 = mul i32 %7, %thread_count, !insn.addr !393
  %10 = icmp eq i32 %8, %9, !insn.addr !394
  %spec.select2 = select i1 %10, i32 42, i32 -3
  ret i32 %spec.select2

dec_label_pc_121c4:                               ; preds = %dec_label_pc_1217c, %dec_label_pc_1218c
  %r6.04.reload = load i32, i32* %r6.04.reg2mem
  %11 = mul i32 %r6.04.reload, 4, !insn.addr !395
  %12 = add i32 %11, %3, !insn.addr !395
  %13 = inttoptr i32 %12 to i32*, !insn.addr !396
  %14 = call i32 @pthread_create(i32* %13, i32* null, i32* (i32*)* inttoptr (i32 69904 to i32* (i32*)*), i32* nonnull %stack_var_-28), !insn.addr !396
  %15 = icmp eq i32 %14, 0, !insn.addr !397
  br i1 %15, label %dec_label_pc_1218c, label %dec_label_pc_121e0, !insn.addr !398

dec_label_pc_121e0:                               ; preds = %dec_label_pc_121c4
  call void @free(i32* nonnull %1), !insn.addr !399
  store i32 -2, i32* %r0.2.reg2mem, !insn.addr !400
  br label %dec_label_pc_121ec, !insn.addr !400

dec_label_pc_121ec:                               ; preds = %dec_label_pc_121e0, %dec_label_pc_1215c
  %r0.2.reload = load i32, i32* %r0.2.reg2mem
  ret i32 %r0.2.reload, !insn.addr !401

dec_label_pc_121fc:                               ; preds = %dec_label_pc_1218c, %dec_label_pc_121fc
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %16 = mul i32 %storemerge3.reload, 4, !insn.addr !402
  %17 = add i32 %16, %3, !insn.addr !402
  %18 = inttoptr i32 %17 to i32*, !insn.addr !402
  %19 = load i32, i32* %18, align 4, !insn.addr !402
  %20 = call i32 @pthread_join(i32 %19, i32** null), !insn.addr !403
  %21 = add nuw nsw i32 %storemerge3.reload, 1, !insn.addr !404
  %22 = icmp slt i32 %21, %thread_count, !insn.addr !405
  store i32 %21, i32* %storemerge3.reg2mem, !insn.addr !405
  br i1 %22, label %dec_label_pc_121fc, label %dec_label_pc_121a0, !insn.addr !405

; uselistorder directives
  uselistorder i32 %r6.04.reload, { 1, 0 }
  uselistorder i32* %1, { 0, 1, 3, 2 }
  uselistorder i32* %r6.04.reg2mem, { 0, 2, 1 }
  uselistorder i32* %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder i32 %thread_count, { 3, 1, 4, 2, 0 }
  uselistorder label %dec_label_pc_121fc, { 1, 0 }
  uselistorder label %dec_label_pc_121c4, { 1, 0 }
}

define i32 @call_mutex_lock() local_unnamed_addr {
dec_label_pc_12218:
  %0 = call i32 @param_mutex_lock(i32 4, i32 1000), !insn.addr !406
  ret i32 %0, !insn.addr !406
}

define i32 @param_condition_variable() local_unnamed_addr {
dec_label_pc_12224:
  %0 = alloca i32
  %r4.2.reg2mem = alloca i32, !insn.addr !407
  %r2.0.reg2mem = alloca i32, !insn.addr !407
  %r4.1.reg2mem = alloca i32, !insn.addr !407
  %1 = load i32, i32* %0
  %consumer_ret_-16 = alloca i8*, align 4
  %consumer_-20 = alloca i32, align 4
  %producer_-24 = alloca i32, align 4
  %2 = inttoptr i32 %1 to i8*, !insn.addr !407
  store i8* %2, i8** %consumer_ret_-16, align 4, !insn.addr !407
  store i32 0, i32* @ready, align 4, !insn.addr !408
  store i32 0, i32* @data, align 4, !insn.addr !409
  %3 = call i32 @pthread_create(i32* nonnull %consumer_-20, i32* null, i32* (i32*)* bitcast (i32* (i32*)** @global_var_11164 to i32* (i32*)*), i32* null), !insn.addr !410
  %4 = icmp eq i32 %3, 0, !insn.addr !411
  store i32 -1, i32* %r4.1.reg2mem, !insn.addr !412
  br i1 %4, label %dec_label_pc_12264, label %dec_label_pc_12288, !insn.addr !412

dec_label_pc_12264:                               ; preds = %dec_label_pc_12224
  %5 = call i32 @pthread_create(i32* nonnull %producer_-24, i32* null, i32* (i32*)* bitcast (i32* @global_var_111bc to i32* (i32*)*), i32* null), !insn.addr !413
  %6 = icmp eq i32 %5, 0, !insn.addr !414
  store i32 ptrtoint (i32* @global_var_111bc to i32), i32* %r2.0.reg2mem, !insn.addr !415
  store i32 0, i32* %r4.2.reg2mem, !insn.addr !415
  br i1 %6, label %dec_label_pc_122a4, label %dec_label_pc_1227c, !insn.addr !415

dec_label_pc_1227c:                               ; preds = %dec_label_pc_12264
  %7 = load i32, i32* %consumer_-20, align 4, !insn.addr !416
  %8 = call i32 @pthread_cancel(i32 %7), !insn.addr !417
  store i32 -2, i32* %r4.1.reg2mem, !insn.addr !418
  br label %dec_label_pc_12288, !insn.addr !418

dec_label_pc_12288:                               ; preds = %dec_label_pc_12224, %dec_label_pc_122a4, %dec_label_pc_1227c
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  br i1 true, label %dec_label_pc_122cc, label %dec_label_pc_122a0, !insn.addr !419

dec_label_pc_122a0:                               ; preds = %dec_label_pc_12288
  store i32 0, i32* %r2.0.reg2mem, !insn.addr !420
  store i32 %r4.1.reload, i32* %r4.2.reg2mem, !insn.addr !420
  br label %dec_label_pc_122a4, !insn.addr !420

dec_label_pc_122a4:                               ; preds = %dec_label_pc_122a0, %dec_label_pc_12264
  %r4.2.reload = load i32, i32* %r4.2.reg2mem
  %r2.0.reload = load i32, i32* %r2.0.reg2mem
  %9 = load i32, i32* %consumer_-20, align 4, !insn.addr !421
  %10 = bitcast i8** %consumer_ret_-16 to i32**, !insn.addr !422
  %11 = call i32 @pthread_join(i32 %9, i32** nonnull %10), !insn.addr !422
  %12 = load i32, i32* %producer_-24, align 4, !insn.addr !423
  %13 = inttoptr i32 %r4.2.reload to i32**, !insn.addr !424
  %14 = call i32 @pthread_join(i32 %12, i32** %13), !insn.addr !424
  %15 = load i8*, i8** %consumer_ret_-16, align 4, !insn.addr !425
  %16 = bitcast i8* %15 to i32*, !insn.addr !426
  call void @free(i32* %16), !insn.addr !426
  store i32 %r2.0.reload, i32* %r4.1.reg2mem, !insn.addr !427
  br label %dec_label_pc_12288, !insn.addr !427

dec_label_pc_122cc:                               ; preds = %dec_label_pc_12288
  ret i32 %r4.1.reload, !insn.addr !428

; uselistorder directives
  uselistorder i32 %r4.1.reload, { 1, 0 }
  uselistorder i32* %producer_-24, { 1, 0 }
  uselistorder i32* %consumer_-20, { 1, 2, 0 }
  uselistorder i8** %consumer_ret_-16, { 1, 0, 2 }
  uselistorder i32* %r4.1.reg2mem, { 3, 0, 2, 1 }
  uselistorder i32* @global_var_111bc, { 1, 0 }
  uselistorder label %dec_label_pc_12288, { 1, 2, 0 }
}

define i32 @param_atomic_ops(i32 %thread_count, i32 %iterations) local_unnamed_addr {
dec_label_pc_122ec:
  %storemerge2.reg2mem = alloca i32, !insn.addr !429
  %r8.2.reg2mem = alloca i32, !insn.addr !429
  %r5.2.reg2mem = alloca i32, !insn.addr !429
  %r8.1.reg2mem = alloca i32, !insn.addr !429
  %r5.1.reg2mem = alloca i32, !insn.addr !429
  %r0.5.reg2mem = alloca i32, !insn.addr !429
  %r0.2.lcssa.reg2mem = alloca i32, !insn.addr !429
  %r0.1.reg2mem = alloca i32, !insn.addr !429
  %r8.0.reg2mem = alloca i32, !insn.addr !429
  %r5.0.reg2mem = alloca i32, !insn.addr !429
  %load_store_tid_-32 = alloca i32, align 4
  %stack_var_-36 = alloca i32, align 4
  store i32 %iterations, i32* %stack_var_-36, align 4, !insn.addr !430
  %0 = mul i32 %thread_count, 4, !insn.addr !431
  %1 = load i32, i32* @global_var_23f08, align 4, !insn.addr !432
  %2 = call i32* @malloc(i32 %0), !insn.addr !433
  %3 = ptrtoint i32* %2 to i32, !insn.addr !433
  %4 = icmp eq i32* %2, null, !insn.addr !434
  store i32 -1, i32* %r0.5.reg2mem, !insn.addr !435
  br i1 %4, label %dec_label_pc_123b8, label %dec_label_pc_1231c, !insn.addr !435

dec_label_pc_1231c:                               ; preds = %dec_label_pc_122ec
  %5 = call i32 @__sync_synchronize(i32 %3), !insn.addr !436
  store i32 0, i32* @atomic_counter, align 4, !insn.addr !437
  %6 = call i32 @__sync_synchronize(i32 %5), !insn.addr !438
  store i32 0, i32* %r5.0.reg2mem, !insn.addr !439
  store i32 ptrtoint (i32* (i32*)** @global_var_11204 to i32), i32* %r8.0.reg2mem, !insn.addr !439
  br label %dec_label_pc_12334, !insn.addr !439

dec_label_pc_12334:                               ; preds = %dec_label_pc_123d4, %dec_label_pc_1231c
  %r8.0.reload = load i32, i32* %r8.0.reg2mem
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %7 = icmp slt i32 %r5.0.reload, %thread_count, !insn.addr !440
  br i1 %7, label %dec_label_pc_12390, label %dec_label_pc_1233c, !insn.addr !440

dec_label_pc_1233c:                               ; preds = %dec_label_pc_12334
  %8 = call i32 @pthread_create(i32* nonnull %load_store_tid_-32, i32* null, i32* (i32*)* bitcast (i32* (i32*)** @global_var_1128c to i32* (i32*)*), i32* null), !insn.addr !441
  %9 = icmp eq i32 %8, 0, !insn.addr !442
  store i32 %8, i32* %r0.1.reg2mem, !insn.addr !443
  br i1 %9, label %dec_label_pc_12358, label %dec_label_pc_12360, !insn.addr !443

dec_label_pc_12358:                               ; preds = %dec_label_pc_1233c
  %10 = load i32, i32* %load_store_tid_-32, align 4, !insn.addr !444
  %11 = call i32 @pthread_join(i32 %10, i32** null), !insn.addr !445
  store i32 %11, i32* %r0.1.reg2mem, !insn.addr !445
  br label %dec_label_pc_12360, !insn.addr !445

dec_label_pc_12360:                               ; preds = %dec_label_pc_1233c, %dec_label_pc_12358
  %r0.1.reload = load i32, i32* %r0.1.reg2mem
  %12 = icmp sgt i32 %thread_count, 0, !insn.addr !446
  store i32 %r0.1.reload, i32* %r0.2.lcssa.reg2mem, !insn.addr !446
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !446
  br i1 %12, label %dec_label_pc_123dc, label %dec_label_pc_1236c, !insn.addr !446

dec_label_pc_1236c:                               ; preds = %dec_label_pc_123dc, %dec_label_pc_12360
  %r0.2.lcssa.reload = load i32, i32* %r0.2.lcssa.reg2mem
  %13 = call i32 @__sync_synchronize(i32 %r0.2.lcssa.reload), !insn.addr !447
  %14 = load i32, i32* @atomic_counter, align 4, !insn.addr !448
  %15 = call i32 @__sync_synchronize(i32 %13), !insn.addr !449
  call void @free(i32* %2), !insn.addr !450
  %16 = icmp sgt i32 %14, 0, !insn.addr !451
  %r0.4 = select i1 %16, i32 42, i32 -3
  store i32 %r0.4, i32* %r0.5.reg2mem, !insn.addr !452
  store i32 %14, i32* %r5.1.reg2mem, !insn.addr !452
  store i32 %r8.0.reload, i32* %r8.1.reg2mem, !insn.addr !452
  br label %dec_label_pc_123b8, !insn.addr !452

dec_label_pc_12390:                               ; preds = %dec_label_pc_12334
  %17 = mul i32 %r5.0.reload, 4, !insn.addr !453
  %18 = add i32 %17, %3, !insn.addr !453
  %19 = inttoptr i32 %18 to i32*, !insn.addr !454
  %20 = inttoptr i32 %r8.0.reload to i32* (i32*)*, !insn.addr !454
  %21 = call i32 @pthread_create(i32* %19, i32* null, i32* (i32*)* %20, i32* nonnull %stack_var_-36), !insn.addr !454
  %22 = icmp eq i32 %21, 0, !insn.addr !455
  store i32 %r5.0.reload, i32* %r5.2.reg2mem, !insn.addr !456
  store i32 %r8.0.reload, i32* %r8.2.reg2mem, !insn.addr !456
  br i1 %22, label %dec_label_pc_123d4, label %dec_label_pc_123ac, !insn.addr !456

dec_label_pc_123ac:                               ; preds = %dec_label_pc_12390
  call void @free(i32* %2), !insn.addr !457
  store i32 -2, i32* %r0.5.reg2mem, !insn.addr !458
  store i32 %r5.0.reload, i32* %r5.1.reg2mem, !insn.addr !458
  store i32 %r8.0.reload, i32* %r8.1.reg2mem, !insn.addr !458
  br label %dec_label_pc_123b8, !insn.addr !458

dec_label_pc_123b8:                               ; preds = %dec_label_pc_123ac, %dec_label_pc_1236c, %dec_label_pc_122ec
  %23 = load i32, i32* @global_var_23f08, align 4, !insn.addr !459
  %24 = icmp eq i32 %1, %23, !insn.addr !460
  br i1 %24, label %dec_label_pc_123f0, label %dec_label_pc_123d0, !insn.addr !461

dec_label_pc_123d0:                               ; preds = %dec_label_pc_123b8
  %r8.1.reload = load i32, i32* %r8.1.reg2mem
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  call void @__stack_chk_fail(), !insn.addr !462
  store i32 %r5.1.reload, i32* %r5.2.reg2mem, !insn.addr !462
  store i32 %r8.1.reload, i32* %r8.2.reg2mem, !insn.addr !462
  br label %dec_label_pc_123d4, !insn.addr !462

dec_label_pc_123d4:                               ; preds = %dec_label_pc_123d0, %dec_label_pc_12390
  %r8.2.reload = load i32, i32* %r8.2.reg2mem
  %r5.2.reload = load i32, i32* %r5.2.reg2mem
  %25 = add i32 %r5.2.reload, 1, !insn.addr !463
  store i32 %25, i32* %r5.0.reg2mem, !insn.addr !464
  store i32 %r8.2.reload, i32* %r8.0.reg2mem, !insn.addr !464
  br label %dec_label_pc_12334, !insn.addr !464

dec_label_pc_123dc:                               ; preds = %dec_label_pc_12360, %dec_label_pc_123dc
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %26 = mul i32 %storemerge2.reload, 4, !insn.addr !465
  %27 = add i32 %26, %3, !insn.addr !465
  %28 = inttoptr i32 %27 to i32*, !insn.addr !465
  %29 = load i32, i32* %28, align 4, !insn.addr !465
  %30 = call i32 @pthread_join(i32 %29, i32** null), !insn.addr !466
  %31 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !467
  %32 = icmp slt i32 %31, %thread_count, !insn.addr !446
  store i32 %30, i32* %r0.2.lcssa.reg2mem, !insn.addr !446
  store i32 %31, i32* %storemerge2.reg2mem, !insn.addr !446
  br i1 %32, label %dec_label_pc_123dc, label %dec_label_pc_1236c, !insn.addr !446

dec_label_pc_123f0:                               ; preds = %dec_label_pc_123b8
  %r0.5.reload = load i32, i32* %r0.5.reg2mem
  ret i32 %r0.5.reload, !insn.addr !468

; uselistorder directives
  uselistorder i32 %r5.0.reload, { 1, 0, 3, 2 }
  uselistorder i32 %r8.0.reload, { 2, 0, 3, 1 }
  uselistorder i32 %3, { 1, 0, 2 }
  uselistorder i32* %load_store_tid_-32, { 1, 0 }
  uselistorder i32* %r5.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r8.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r0.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r0.2.lcssa.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r0.5.reg2mem, { 0, 2, 1, 3 }
  uselistorder i32* %r5.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r8.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r5.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r8.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32** null, { 1, 0, 2, 3 }
  uselistorder i32 (i32)* @__sync_synchronize, { 3, 2, 1, 0 }
  uselistorder i32 %thread_count, { 2, 1, 3, 0 }
  uselistorder label %dec_label_pc_123dc, { 1, 0 }
  uselistorder label %dec_label_pc_12360, { 1, 0 }
}

define i32 @call_atomic_ops() local_unnamed_addr {
dec_label_pc_12408:
  %0 = call i32 @param_atomic_ops(i32 4, i32 500), !insn.addr !469
  ret i32 %0, !insn.addr !469
}

define i32 @param_thread_local_storage(i32 %thread_count) local_unnamed_addr {
dec_label_pc_12414:
  %r7.46.reg2mem = alloca i32, !insn.addr !470
  %r8.17.reg2mem = alloca i32, !insn.addr !470
  %sb.18.reg2mem = alloca i32, !insn.addr !470
  %sb.3.reg2mem = alloca i32, !insn.addr !470
  %r7.6.reg2mem = alloca i32, !insn.addr !470
  %r5.3.reg2mem = alloca i32, !insn.addr !470
  %sb.2.reg2mem = alloca i32, !insn.addr !470
  %r7.5.reg2mem = alloca i32, !insn.addr !470
  %r5.2.reg2mem = alloca i32, !insn.addr !470
  %r0.2.reg2mem = alloca i32, !insn.addr !470
  %r5.1.reg2mem = alloca i32, !insn.addr !470
  %sb.1.lcssa.reg2mem = alloca i32, !insn.addr !470
  %r8.1.lcssa.reg2mem = alloca i32, !insn.addr !470
  %r7.4.lcssa.reg2mem = alloca i32, !insn.addr !470
  %sb.0.reg2mem = alloca i32, !insn.addr !470
  %r7.3.reg2mem = alloca i32, !insn.addr !470
  %r5.0.reg2mem = alloca i32, !insn.addr !470
  %r7.211.reg2mem = alloca i32, !insn.addr !470
  %stack_var_-40 = alloca i32, align 4
  %0 = mul i32 %thread_count, 4, !insn.addr !471
  %1 = load i32, i32* @global_var_23f08, align 4, !insn.addr !472
  %2 = call i32* @malloc(i32 %0), !insn.addr !473
  %3 = call i32* @malloc(i32 %0), !insn.addr !474
  %4 = ptrtoint i32* %3 to i32, !insn.addr !474
  %5 = icmp eq i32* %3, null, !insn.addr !475
  %6 = icmp eq i32* %2, null
  %spec.select = or i1 %6, %5
  %r4.0 = select i1 %spec.select, i32 %0, i32 %4
  store i32 -1, i32* %r0.2.reg2mem, !insn.addr !476
  store i32 %thread_count, i32* %r5.2.reg2mem, !insn.addr !476
  store i32 1, i32* %r7.5.reg2mem, !insn.addr !476
  br i1 %spec.select, label %dec_label_pc_12540, label %dec_label_pc_12494.preheader, !insn.addr !476

dec_label_pc_12494.preheader:                     ; preds = %dec_label_pc_12414
  %7 = icmp sgt i32 %thread_count, 0, !insn.addr !477
  store i32 0, i32* %r7.211.reg2mem, !insn.addr !477
  store i32 %thread_count, i32* %r5.0.reg2mem, !insn.addr !477
  store i32 0, i32* %r7.3.reg2mem, !insn.addr !477
  store i32 ptrtoint (i32* (i32*)** @global_var_112bc to i32), i32* %sb.0.reg2mem, !insn.addr !477
  br i1 %7, label %dec_label_pc_1246c, label %dec_label_pc_124a4, !insn.addr !477

dec_label_pc_1246c:                               ; preds = %dec_label_pc_12494.preheader, %dec_label_pc_1246c
  %r7.211.reload = load i32, i32* %r7.211.reg2mem
  %8 = call i32* @malloc(i32 16), !insn.addr !478
  %9 = ptrtoint i32* %8 to i32, !insn.addr !478
  %10 = mul i32 %r7.211.reload, 4, !insn.addr !479
  %11 = add i32 %10, %r4.0, !insn.addr !479
  %12 = inttoptr i32 %11 to i32*, !insn.addr !479
  store i32 %9, i32* %12, align 4, !insn.addr !479
  %13 = bitcast i32* %8 to i8*, !insn.addr !480
  %14 = call i32 (i8*, i32, i32, i32, i8*, ...) @__snprintf_chk(i8* %13, i32 16, i32 1, i32 16, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_1392d, i32 0, i32 0), i32 %r7.211.reload), !insn.addr !480
  %15 = add nuw nsw i32 %r7.211.reload, 1, !insn.addr !481
  %16 = icmp slt i32 %15, %thread_count, !insn.addr !477
  store i32 %15, i32* %r7.211.reg2mem, !insn.addr !477
  store i32 %thread_count, i32* %r5.0.reg2mem, !insn.addr !477
  store i32 0, i32* %r7.3.reg2mem, !insn.addr !477
  store i32 ptrtoint (i32* (i32*)** @global_var_112bc to i32), i32* %sb.0.reg2mem, !insn.addr !477
  br i1 %16, label %dec_label_pc_1246c, label %dec_label_pc_124a4, !insn.addr !477

dec_label_pc_124a4:                               ; preds = %dec_label_pc_1246c, %dec_label_pc_12494.preheader, %dec_label_pc_1255c
  %17 = ptrtoint i32* %2 to i32, !insn.addr !473
  %r7.3.reload = load i32, i32* %r7.3.reg2mem
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %18 = icmp slt i32 %r7.3.reload, %r5.0.reload, !insn.addr !482
  br i1 %18, label %dec_label_pc_124f4, label %dec_label_pc_124b8.preheader, !insn.addr !482

dec_label_pc_124b8.preheader:                     ; preds = %dec_label_pc_124a4
  %19 = icmp sgt i32 %r5.0.reload, 0, !insn.addr !483
  store i32 0, i32* %r7.4.lcssa.reg2mem, !insn.addr !483
  store i32 0, i32* %r8.1.lcssa.reg2mem, !insn.addr !483
  store i32 0, i32* %sb.1.lcssa.reg2mem, !insn.addr !483
  br i1 %19, label %dec_label_pc_12564.lr.ph, label %dec_label_pc_124c0, !insn.addr !483

dec_label_pc_12564.lr.ph:                         ; preds = %dec_label_pc_124b8.preheader
  %20 = bitcast i32* %stack_var_-40 to i32**, !insn.addr !484
  store i32 0, i32* %sb.18.reg2mem
  store i32 0, i32* %r8.17.reg2mem
  store i32 0, i32* %r7.46.reg2mem
  br label %dec_label_pc_12564

dec_label_pc_124c0:                               ; preds = %dec_label_pc_12564, %dec_label_pc_124b8.preheader
  %sb.1.lcssa.reload = load i32, i32* %sb.1.lcssa.reg2mem
  %r8.1.lcssa.reload = load i32, i32* %r8.1.lcssa.reg2mem
  %r7.4.lcssa.reload = load i32, i32* %r7.4.lcssa.reg2mem
  %21 = inttoptr i32 %r4.0 to i32*, !insn.addr !485
  call void @free(i32* %21), !insn.addr !485
  call void @free(i32* %2), !insn.addr !486
  %22 = mul i32 %r5.0.reload, 100, !insn.addr !487
  %23 = mul i32 %r5.0.reload, 150, !insn.addr !488
  %24 = icmp eq i32 %22, %sb.1.lcssa.reload, !insn.addr !489
  %25 = icmp eq i32 %23, %r8.1.lcssa.reload
  %spec.select4 = icmp eq i1 %25, %24
  %spec.select5 = select i1 %spec.select4, i32 42, i32 -3
  store i32 %spec.select5, i32* %r0.2.reg2mem, !insn.addr !490
  store i32 %23, i32* %r5.2.reg2mem, !insn.addr !490
  store i32 %r7.4.lcssa.reload, i32* %r7.5.reg2mem, !insn.addr !490
  store i32 %sb.1.lcssa.reload, i32* %sb.2.reg2mem, !insn.addr !490
  br label %dec_label_pc_12540, !insn.addr !490

dec_label_pc_124f4:                               ; preds = %dec_label_pc_124a4
  %sb.0.reload = load i32, i32* %sb.0.reg2mem
  %26 = mul i32 %r7.3.reload, 4, !insn.addr !491
  %27 = add i32 %26, %r4.0, !insn.addr !491
  %28 = inttoptr i32 %27 to i32*, !insn.addr !491
  %29 = load i32, i32* %28, align 4, !insn.addr !491
  %30 = add i32 %26, %17, !insn.addr !492
  %31 = inttoptr i32 %30 to i32*, !insn.addr !493
  %32 = inttoptr i32 %sb.0.reload to i32* (i32*)*, !insn.addr !493
  %33 = inttoptr i32 %29 to i32*, !insn.addr !493
  %34 = call i32 @pthread_create(i32* %31, i32* null, i32* (i32*)* %32, i32* %33), !insn.addr !493
  %35 = icmp eq i32 %34, 0, !insn.addr !494
  store i32 %r5.0.reload, i32* %r5.3.reg2mem, !insn.addr !495
  store i32 %r7.3.reload, i32* %r7.6.reg2mem, !insn.addr !495
  store i32 %sb.0.reload, i32* %sb.3.reg2mem, !insn.addr !495
  br i1 %35, label %dec_label_pc_1255c, label %dec_label_pc_12514, !insn.addr !495

dec_label_pc_12514:                               ; preds = %dec_label_pc_124f4
  %36 = add i32 %r4.0, -4, !insn.addr !496
  store i32 %36, i32* %r5.1.reg2mem, !insn.addr !497
  br label %dec_label_pc_1251c, !insn.addr !497

dec_label_pc_1251c:                               ; preds = %dec_label_pc_1251c, %dec_label_pc_12514
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %37 = add i32 %r5.1.reload, 4, !insn.addr !498
  %38 = inttoptr i32 %37 to i32*, !insn.addr !498
  %39 = load i32, i32* %38, align 4, !insn.addr !498
  %40 = inttoptr i32 %39 to i32*, !insn.addr !499
  call void @free(i32* %40), !insn.addr !499
  %41 = icmp eq i32 %37, %27, !insn.addr !500
  store i32 %37, i32* %r5.1.reg2mem, !insn.addr !501
  br i1 %41, label %dec_label_pc_1252c, label %dec_label_pc_1251c, !insn.addr !501

dec_label_pc_1252c:                               ; preds = %dec_label_pc_1251c
  %42 = inttoptr i32 %r4.0 to i32*, !insn.addr !502
  call void @free(i32* %42), !insn.addr !502
  call void @free(i32* %2), !insn.addr !503
  store i32 -2, i32* %r0.2.reg2mem, !insn.addr !504
  store i32 %27, i32* %r5.2.reg2mem, !insn.addr !504
  store i32 %r7.3.reload, i32* %r7.5.reg2mem, !insn.addr !504
  store i32 %sb.0.reload, i32* %sb.2.reg2mem, !insn.addr !504
  br label %dec_label_pc_12540, !insn.addr !504

dec_label_pc_12540:                               ; preds = %dec_label_pc_12414, %dec_label_pc_1252c, %dec_label_pc_124c0
  %43 = load i32, i32* @global_var_23f08, align 4, !insn.addr !505
  %44 = icmp eq i32 %1, %43, !insn.addr !506
  br i1 %44, label %dec_label_pc_12598, label %dec_label_pc_12558, !insn.addr !507

dec_label_pc_12558:                               ; preds = %dec_label_pc_12540
  %sb.2.reload = load i32, i32* %sb.2.reg2mem
  %r7.5.reload = load i32, i32* %r7.5.reg2mem
  %r5.2.reload = load i32, i32* %r5.2.reg2mem
  call void @__stack_chk_fail(), !insn.addr !508
  store i32 %r5.2.reload, i32* %r5.3.reg2mem, !insn.addr !508
  store i32 %r7.5.reload, i32* %r7.6.reg2mem, !insn.addr !508
  store i32 %sb.2.reload, i32* %sb.3.reg2mem, !insn.addr !508
  br label %dec_label_pc_1255c, !insn.addr !508

dec_label_pc_1255c:                               ; preds = %dec_label_pc_12558, %dec_label_pc_124f4
  %sb.3.reload = load i32, i32* %sb.3.reg2mem
  %r7.6.reload = load i32, i32* %r7.6.reg2mem
  %r5.3.reload = load i32, i32* %r5.3.reg2mem
  %45 = add i32 %r7.6.reload, 1, !insn.addr !509
  store i32 %r5.3.reload, i32* %r5.0.reg2mem, !insn.addr !510
  store i32 %45, i32* %r7.3.reg2mem, !insn.addr !510
  store i32 %sb.3.reload, i32* %sb.0.reg2mem, !insn.addr !510
  br label %dec_label_pc_124a4, !insn.addr !510

dec_label_pc_12564:                               ; preds = %dec_label_pc_12564.lr.ph, %dec_label_pc_12564
  %r7.46.reload = load i32, i32* %r7.46.reg2mem
  %r8.17.reload = load i32, i32* %r8.17.reg2mem
  %sb.18.reload = load i32, i32* %sb.18.reg2mem
  %46 = mul i32 %r7.46.reload, 4, !insn.addr !511
  %47 = add i32 %46, %17, !insn.addr !511
  %48 = inttoptr i32 %47 to i32*, !insn.addr !511
  %49 = load i32, i32* %48, align 4, !insn.addr !511
  %50 = call i32 @pthread_join(i32 %49, i32** nonnull %20), !insn.addr !484
  %51 = load i32, i32* %stack_var_-40, align 4, !insn.addr !512
  %52 = inttoptr i32 %51 to i32*, !insn.addr !513
  %53 = load i32, i32* %52, align 4, !insn.addr !513
  %54 = add i32 %53, %sb.18.reload, !insn.addr !514
  %55 = add i32 %51, 4, !insn.addr !515
  %56 = inttoptr i32 %55 to i32*, !insn.addr !515
  %57 = load i32, i32* %56, align 4, !insn.addr !515
  %58 = add i32 %57, %r8.17.reload, !insn.addr !516
  call void @free(i32* %52), !insn.addr !517
  %59 = add i32 %46, %r4.0, !insn.addr !518
  %60 = inttoptr i32 %59 to i32*, !insn.addr !518
  %61 = load i32, i32* %60, align 4, !insn.addr !518
  %62 = inttoptr i32 %61 to i32*, !insn.addr !519
  call void @free(i32* %62), !insn.addr !519
  %63 = add nuw nsw i32 %r7.46.reload, 1, !insn.addr !520
  %64 = icmp slt i32 %63, %r5.0.reload, !insn.addr !483
  store i32 %63, i32* %r7.4.lcssa.reg2mem, !insn.addr !483
  store i32 %58, i32* %r8.1.lcssa.reg2mem, !insn.addr !483
  store i32 %54, i32* %sb.1.lcssa.reg2mem, !insn.addr !483
  store i32 %54, i32* %sb.18.reg2mem, !insn.addr !483
  store i32 %58, i32* %r8.17.reg2mem, !insn.addr !483
  store i32 %63, i32* %r7.46.reg2mem, !insn.addr !483
  br i1 %64, label %dec_label_pc_12564, label %dec_label_pc_124c0, !insn.addr !483

dec_label_pc_12598:                               ; preds = %dec_label_pc_12540
  %r0.2.reload = load i32, i32* %r0.2.reg2mem
  ret i32 %r0.2.reload, !insn.addr !521

; uselistorder directives
  uselistorder i32 %51, { 1, 0 }
  uselistorder i32 %46, { 1, 0 }
  uselistorder i32 %26, { 1, 0 }
  uselistorder i32 %sb.0.reload, { 1, 0, 2 }
  uselistorder i32 %r5.0.reload, { 2, 0, 3, 4, 5, 1 }
  uselistorder i32 %r7.3.reload, { 1, 0, 3, 2 }
  uselistorder i32 %17, { 1, 0 }
  uselistorder i32 %r7.211.reload, { 1, 0, 2 }
  uselistorder i32 %r4.0, { 1, 4, 3, 0, 5, 2 }
  uselistorder i32* %2, { 0, 1, 3, 2 }
  uselistorder i32 %0, { 2, 1, 0 }
  uselistorder i32* %stack_var_-40, { 1, 0 }
  uselistorder i32* %r7.211.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.0.reg2mem, { 3, 0, 1, 2 }
  uselistorder i32* %r7.3.reg2mem, { 3, 0, 1, 2 }
  uselistorder i32* %sb.0.reg2mem, { 3, 0, 1, 2 }
  uselistorder i32* %r7.4.lcssa.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r8.1.lcssa.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sb.1.lcssa.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r5.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r0.2.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32* %r5.2.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32* %r7.5.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32* %sb.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r5.3.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r7.6.reg2mem, { 0, 2, 1 }
  uselistorder i32* %sb.3.reg2mem, { 0, 2, 1 }
  uselistorder i32* %sb.18.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r8.17.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r7.46.reg2mem, { 1, 0, 2 }
  uselistorder i32 (i32, i32**)* @pthread_join, { 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder void ()* @__stack_chk_fail, { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 -2, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 10 }
  uselistorder i32 -4, { 3, 0, 2, 1 }
  uselistorder i32 (i32*, i32*, i32* (i32*)*, i32*)* @pthread_create, { 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 -3, { 6, 7, 8, 0, 1, 2, 9, 4, 5, 3 }
  uselistorder i32 42, { 1, 2, 3, 0, 4, 12, 8, 5, 6, 7, 9, 10, 11, 13 }
  uselistorder void (i32*)* @free, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 16, { 1, 0, 2, 3, 4, 5 }
  uselistorder i32 -1, { 0, 1, 2, 3, 4, 23, 5, 24, 25, 6, 26, 18, 27, 7, 8, 9, 10, 19, 11, 15, 20, 16, 17, 12, 13, 21, 14, 22 }
  uselistorder i32* null, { 4, 2, 3, 6, 7, 8, 5, 1, 0, 9, 10, 12, 11, 13, 14, 15, 16 }
  uselistorder i32* (i32)* @malloc, { 5, 4, 3, 2, 1, 0 }
  uselistorder i32 %thread_count, { 1, 5, 2, 4, 0, 3 }
  uselistorder label %dec_label_pc_12564, { 1, 0 }
  uselistorder label %dec_label_pc_12540, { 1, 2, 0 }
  uselistorder label %dec_label_pc_124a4, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1246c, { 1, 0 }
}

define i32 @call_thread_local_storage() local_unnamed_addr {
dec_label_pc_125ac:
  %0 = call i32 @param_thread_local_storage(i32 4), !insn.addr !522
  ret i32 %0, !insn.addr !522

; uselistorder directives
  uselistorder i32 4, { 14, 18, 0, 19, 1, 2, 3, 15, 4, 5, 6, 16, 7, 8, 9, 20, 21, 13, 22, 10, 11, 12, 17 }
}

define void @test_thread_concurrency() local_unnamed_addr {
dec_label_pc_125b4:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_13937 to i8*)), !insn.addr !523
  %1 = call i32 @call_pthread_create(), !insn.addr !524
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_13955 to i8*)), !insn.addr !525
  %3 = call i32 @param_pthread_join(), !insn.addr !526
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_13971 to i8*)), !insn.addr !527
  %5 = call i32 @call_mutex_lock(), !insn.addr !528
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1398e to i8*)), !insn.addr !529
  %7 = call i32 @param_condition_variable(), !insn.addr !530
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_139aa to i8*)), !insn.addr !531
  %9 = call i32 @call_atomic_ops(), !insn.addr !532
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_139c6 to i8*)), !insn.addr !533
  %11 = call i32 @call_thread_local_storage(), !insn.addr !534
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_139e2 to i8*)), !insn.addr !535
  ret void, !insn.addr !535

; uselistorder directives
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0 }
  uselistorder i32 0, { 188, 0, 1, 2, 3, 4, 5, 25, 6, 33, 34, 7, 8, 26, 189, 151, 9, 27, 190, 10, 152, 12, 11, 191, 192, 154, 153, 193, 13, 14, 28, 155, 194, 15, 195, 16, 196, 198, 200, 197, 32, 156, 199, 31, 157, 158, 159, 35, 36, 160, 201, 202, 203, 37, 38, 204, 205, 161, 206, 207, 162, 163, 164, 39, 40, 24, 41, 42, 208, 209, 210, 215, 165, 43, 44, 211, 212, 166, 213, 214, 167, 216, 219, 217, 218, 45, 46, 47, 48, 49, 50, 17, 18, 19, 29, 168, 20, 30, 51, 52, 220, 55, 56, 53, 54, 57, 58, 221, 59, 60, 22, 23, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 222, 169, 75, 76, 170, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 223, 171, 91, 92, 89, 90, 21, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187 }
}

define i32 @__sync_synchronize(i32 %arg1) local_unnamed_addr {
dec_label_pc_133e0:
  %0 = call i32 @function_ffff0fa0(), !insn.addr !536
  ret i32 %0, !insn.addr !536
}

declare i8* @strstr(i8*, i8*) local_unnamed_addr

declare i32 @raise(i32) local_unnamed_addr

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare i32 @setsockopt(i32, i32, i32, i32*, i32) local_unnamed_addr

declare %_IO_FILE* @fopen(i8*, i8*) local_unnamed_addr

declare i32 @read(i32, i32*, i32) local_unnamed_addr

declare void @free(i32*) local_unnamed_addr

declare void @_exit(i32) local_unnamed_addr

declare i32* @memcpy(i32*, i32*, i32) local_unnamed_addr

declare i32 @shmget(i32, i32, i32) local_unnamed_addr

declare void (i32)* @signal(i32, void (i32)*) local_unnamed_addr

declare i32 @memcmp(i32*, i32*, i32) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

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

declare i32 @stat(i8*, %stat*) local_unnamed_addr

declare i32 @open(i8*, i32, ...) local_unnamed_addr

declare i32 @syscall(i32, ...) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i8* @strchr(i8*, i32) local_unnamed_addr

declare i32* @__errno_location() local_unnamed_addr

declare i32 @sscanf(i8*, i8*, ...) local_unnamed_addr

declare i32 @bind(i32, %sockaddr*, i32) local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

declare i32 @__printf_chk(i32, i8*, ...) local_unnamed_addr

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

declare i32 @socket(i32, i32, i32) local_unnamed_addr

declare i32 @pthread_join(i32, i32**) local_unnamed_addr

declare i32 @pthread_cancel(i32) local_unnamed_addr

declare i32 @close(i32) local_unnamed_addr

declare i32 @__snprintf_chk(i8*, i32, i32, i32, i8*, ...) local_unnamed_addr

define i32 @function_ffff0fa0() local_unnamed_addr {
dec_label_pc_ffff0fa0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1

; uselistorder directives
  uselistorder i32 1, { 8, 84, 85, 86, 87, 88, 89, 150, 151, 152, 90, 16, 121, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 15, 14, 13, 12, 11, 10, 9, 153, 154, 123, 122, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 126, 125, 124, 40, 39, 38, 7, 155, 156, 127, 43, 42, 41, 157, 158, 81, 129, 128, 52, 51, 50, 49, 48, 47, 46, 45, 44, 132, 131, 130, 53, 6, 91, 92, 93, 94, 95, 96, 97, 79, 80, 98, 56, 55, 54, 57, 100, 99, 101, 134, 133, 58, 137, 136, 135, 59, 5, 4, 83, 60, 138, 61, 3, 62, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 160, 139, 65, 64, 63, 2, 159, 68, 67, 66, 161, 70, 69, 1, 114, 115, 141, 140, 74, 73, 72, 71, 75, 143, 142, 76, 116, 82, 146, 145, 144, 77, 148, 147, 0, 78, 149, 117, 118, 119, 120 }
}

!0 = !{i64 69524}
!1 = !{i64 69528}
!2 = !{i64 69532}
!3 = !{i64 69540}
!4 = !{i64 70412}
!5 = !{i64 70424}
!6 = !{i64 70460}
!7 = !{i64 70496}
!8 = !{i64 70512}
!9 = !{i64 70520}
!10 = !{i64 70516}
!11 = !{i64 70532}
!12 = !{i64 70556}
!13 = !{i64 70572}
!14 = !{i64 70588}
!15 = !{i64 70592}
!16 = !{i64 70596}
!17 = !{i64 70600}
!18 = !{i64 70644}
!19 = !{i64 70652}
!20 = !{i64 70692}
!21 = !{i64 70716}
!22 = !{i64 70732}
!23 = !{i64 70740}
!24 = !{i64 70744}
!25 = !{i64 70752}
!26 = !{i64 70788}
!27 = !{i64 70804}
!28 = !{i64 70812}
!29 = !{i64 70808}
!30 = !{i64 70824}
!31 = !{i64 70880}
!32 = !{i64 70892}
!33 = !{i64 70900}
!34 = !{i64 70916}
!35 = !{i64 70936}
!36 = !{i64 70944}
!37 = !{i64 70976}
!38 = !{i64 71004}
!39 = !{i64 71020}
!40 = !{i64 71028}
!41 = !{i64 71040}
!42 = !{i64 71060}
!43 = !{i64 71064}
!44 = !{i64 71084}
!45 = !{i64 71092}
!46 = !{i64 71100}
!47 = !{i64 71104}
!48 = !{i64 71112}
!49 = !{i64 71128}
!50 = !{i64 71136}
!51 = !{i64 71144}
!52 = !{i64 71148}
!53 = !{i64 71156}
!54 = !{i64 71160}
!55 = !{i64 71172}
!56 = !{i64 71180}
!57 = !{i64 71196}
!58 = !{i64 71200}
!59 = !{i64 71208}
!60 = !{i64 71212}
!61 = !{i64 71220}
!62 = !{i64 71240}
!63 = !{i64 71252}
!64 = !{i64 71256}
!65 = !{i64 71264}
!66 = !{i64 71284}
!67 = !{i64 71292}
!68 = !{i64 71300}
!69 = !{i64 71304}
!70 = !{i64 71308}
!71 = !{i64 71316}
!72 = !{i64 71324}
!73 = !{i64 71332}
!74 = !{i64 71336}
!75 = !{i64 71228}
!76 = !{i64 71340}
!77 = !{i64 71360}
!78 = !{i64 71376}
!79 = !{i64 71380}
!80 = !{i64 71388}
!81 = !{i64 71396}
!82 = !{i64 71400}
!83 = !{i64 71408}
!84 = !{i64 71420}
!85 = !{i64 71424}
!86 = !{i64 71436}
!87 = !{i64 71444}
!88 = !{i64 71464}
!89 = !{i64 71472}
!90 = !{i64 71476}
!91 = !{i64 71488}
!92 = !{i64 71492}
!93 = !{i64 71504}
!94 = !{i64 71528}
!95 = !{i64 71532}
!96 = !{i64 71516}
!97 = !{i64 71520}
!98 = !{i64 71524}
!99 = !{i64 71536}
!100 = !{i64 71540}
!101 = !{i64 71544}
!102 = !{i64 71548}
!103 = !{i64 71552}
!104 = !{i64 71560}
!105 = !{i64 71568}
!106 = !{i64 71572}
!107 = !{i64 71592}
!108 = !{i64 71604}
!109 = !{i64 71608}
!110 = !{i64 71612}
!111 = !{i64 71616}
!112 = !{i64 71620}
!113 = !{i64 71628}
!114 = !{i64 71640}
!115 = !{i64 71644}
!116 = !{i64 71664}
!117 = !{i64 71668}
!118 = !{i64 71672}
!119 = !{i64 71676}
!120 = !{i64 71680}
!121 = !{i64 71688}
!122 = !{i64 71696}
!123 = !{i64 71700}
!124 = !{i64 71708}
!125 = !{i64 71716}
!126 = !{i64 71724}
!127 = !{i64 71728}
!128 = !{i64 71736}
!129 = !{i64 71756}
!130 = !{i64 71764}
!131 = !{i64 71780}
!132 = !{i64 71784}
!133 = !{i64 71796}
!134 = !{i64 71800}
!135 = !{i64 71816}
!136 = !{i64 71836}
!137 = !{i64 71840}
!138 = !{i64 71856}
!139 = !{i64 71860}
!140 = !{i64 71876}
!141 = !{i64 71892}
!142 = !{i64 71896}
!143 = !{i64 71912}
!144 = !{i64 71916}
!145 = !{i64 71932}
!146 = !{i64 71936}
!147 = !{i64 71952}
!148 = !{i64 71956}
!149 = !{i64 71972}
!150 = !{i64 71976}
!151 = !{i64 71992}
!152 = !{i64 71996}
!153 = !{i64 72012}
!154 = !{i64 72016}
!155 = !{i64 72032}
!156 = !{i64 72036}
!157 = !{i64 72052}
!158 = !{i64 72056}
!159 = !{i64 72076}
!160 = !{i64 72132}
!161 = !{i64 72148}
!162 = !{i64 72152}
!163 = !{i64 72156}
!164 = !{i64 72160}
!165 = !{i64 72164}
!166 = !{i64 72168}
!167 = !{i64 72176}
!168 = !{i64 72188}
!169 = !{i64 72192}
!170 = !{i64 72204}
!171 = !{i64 72208}
!172 = !{i64 72216}
!173 = !{i64 72220}
!174 = !{i64 72228}
!175 = !{i64 72244}
!176 = !{i64 72256}
!177 = !{i64 72260}
!178 = !{i64 72268}
!179 = !{i64 72292}
!180 = !{i64 72300}
!181 = !{i64 72308}
!182 = !{i64 72312}
!183 = !{i64 72320}
!184 = !{i64 72332}
!185 = !{i64 72340}
!186 = !{i64 72352}
!187 = !{i64 72368}
!188 = !{i64 72372}
!189 = !{i64 72376}
!190 = !{i64 72380}
!191 = !{i64 72396}
!192 = !{i64 72404}
!193 = !{i64 72416}
!194 = !{i64 72420}
!195 = !{i64 72428}
!196 = !{i64 72432}
!197 = !{i64 72436}
!198 = !{i64 72456}
!199 = !{i64 72464}
!200 = !{i64 72472}
!201 = !{i64 72476}
!202 = !{i64 72484}
!203 = !{i64 72492}
!204 = !{i64 72512}
!205 = !{i64 72516}
!206 = !{i64 72528}
!207 = !{i64 72536}
!208 = !{i64 72548}
!209 = !{i64 72552}
!210 = !{i64 72564}
!211 = !{i64 72568}
!212 = !{i64 72572}
!213 = !{i64 72576}
!214 = !{i64 72580}
!215 = !{i64 72584}
!216 = !{i64 72588}
!217 = !{i64 72592}
!218 = !{i64 72596}
!219 = !{i64 72612}
!220 = !{i64 72620}
!221 = !{i64 72628}
!222 = !{i64 72544}
!223 = !{i64 72636}
!224 = !{i64 72648}
!225 = !{i64 72652}
!226 = !{i64 72668}
!227 = !{i64 72672}
!228 = !{i64 72676}
!229 = !{i64 72680}
!230 = !{i64 72688}
!231 = !{i64 72696}
!232 = !{i64 72708}
!233 = !{i64 72716}
!234 = !{i64 72724}
!235 = !{i64 72728}
!236 = !{i64 72736}
!237 = !{i64 72752}
!238 = !{i64 72768}
!239 = !{i64 72792}
!240 = !{i64 72804}
!241 = !{i64 72808}
!242 = !{i64 72816}
!243 = !{i64 72840}
!244 = !{i64 72844}
!245 = !{i64 72848}
!246 = !{i64 72852}
!247 = !{i64 72860}
!248 = !{i64 72864}
!249 = !{i64 72872}
!250 = !{i64 72880}
!251 = !{i64 72888}
!252 = !{i64 72892}
!253 = !{i64 72908}
!254 = !{i64 72928}
!255 = !{i64 72932}
!256 = !{i64 72936}
!257 = !{i64 72940}
!258 = !{i64 72948}
!259 = !{i64 72956}
!260 = !{i64 72968}
!261 = !{i64 72972}
!262 = !{i64 72992}
!263 = !{i64 73012}
!264 = !{i64 73024}
!265 = !{i64 73040}
!266 = !{i64 73044}
!267 = !{i64 73048}
!268 = !{i64 73060}
!269 = !{i64 73064}
!270 = !{i64 73076}
!271 = !{i64 73080}
!272 = !{i64 73084}
!273 = !{i64 73096}
!274 = !{i64 73100}
!275 = !{i64 73108}
!276 = !{i64 73120}
!277 = !{i64 73124}
!278 = !{i64 73136}
!279 = !{i64 73144}
!280 = !{i64 73152}
!281 = !{i64 73164}
!282 = !{i64 73180}
!283 = !{i64 73184}
!284 = !{i64 73208}
!285 = !{i64 73216}
!286 = !{i64 73224}
!287 = !{i64 73228}
!288 = !{i64 73240}
!289 = !{i64 73244}
!290 = !{i64 73248}
!291 = !{i64 73260}
!292 = !{i64 73264}
!293 = !{i64 73268}
!294 = !{i64 73284}
!295 = !{i64 73288}
!296 = !{i64 73296}
!297 = !{i64 73300}
!298 = !{i64 73304}
!299 = !{i64 73320}
!300 = !{i64 73324}
!301 = !{i64 73328}
!302 = !{i64 73332}
!303 = !{i64 73336}
!304 = !{i64 73348}
!305 = !{i64 73352}
!306 = !{i64 73360}
!307 = !{i64 73364}
!308 = !{i64 73368}
!309 = !{i64 73384}
!310 = !{i64 73388}
!311 = !{i64 73392}
!312 = !{i64 73396}
!313 = !{i64 73400}
!314 = !{i64 73412}
!315 = !{i64 73424}
!316 = !{i64 73432}
!317 = !{i64 73308}
!318 = !{i64 73440}
!319 = !{i64 73372}
!320 = !{i64 73452}
!321 = !{i64 73520}
!322 = !{i64 73524}
!323 = !{i64 73540}
!324 = !{i64 73544}
!325 = !{i64 73560}
!326 = !{i64 73564}
!327 = !{i64 73580}
!328 = !{i64 73584}
!329 = !{i64 73600}
!330 = !{i64 73604}
!331 = !{i64 73620}
!332 = !{i64 73624}
!333 = !{i64 73640}
!334 = !{i64 73644}
!335 = !{i64 73664}
!336 = !{i64 73700}
!337 = !{i64 73712}
!338 = !{i64 73728}
!339 = !{i64 73740}
!340 = !{i64 73744}
!341 = !{i64 73752}
!342 = !{i64 73756}
!343 = !{i64 73764}
!344 = !{i64 73768}
!345 = !{i64 73776}
!346 = !{i64 73784}
!347 = !{i64 73792}
!348 = !{i64 73800}
!349 = !{i64 73804}
!350 = !{i64 73816}
!351 = !{i64 73832}
!352 = !{i64 73836}
!353 = !{i64 73844}
!354 = !{i64 73848}
!355 = !{i64 73876}
!356 = !{i64 73892}
!357 = !{i64 73912}
!358 = !{i64 73932}
!359 = !{i64 73936}
!360 = !{i64 73940}
!361 = !{i64 73944}
!362 = !{i64 73948}
!363 = !{i64 73952}
!364 = !{i64 73956}
!365 = !{i64 73960}
!366 = !{i64 73968}
!367 = !{i64 73972}
!368 = !{i64 73976}
!369 = !{i64 73980}
!370 = !{i64 73984}
!371 = !{i64 73988}
!372 = !{i64 73992}
!373 = !{i64 73996}
!374 = !{i64 74000}
!375 = !{i64 74008}
!376 = !{i64 74016}
!377 = !{i64 74024}
!378 = !{i64 74028}
!379 = !{i64 74036}
!380 = !{i64 74056}
!381 = !{i64 74076}
!382 = !{i64 74084}
!383 = !{i64 74088}
!384 = !{i64 74092}
!385 = !{i64 74096}
!386 = !{i64 74104}
!387 = !{i64 74120}
!388 = !{i64 74128}
!389 = !{i64 74228}
!390 = !{i64 74148}
!391 = !{i64 74152}
!392 = !{i64 74156}
!393 = !{i64 74160}
!394 = !{i64 74164}
!395 = !{i64 74192}
!396 = !{i64 74196}
!397 = !{i64 74200}
!398 = !{i64 74204}
!399 = !{i64 74212}
!400 = !{i64 74216}
!401 = !{i64 74224}
!402 = !{i64 74236}
!403 = !{i64 74244}
!404 = !{i64 74248}
!405 = !{i64 74140}
!406 = !{i64 74272}
!407 = !{i64 74276}
!408 = !{i64 74308}
!409 = !{i64 74312}
!410 = !{i64 74324}
!411 = !{i64 74328}
!412 = !{i64 74336}
!413 = !{i64 74352}
!414 = !{i64 74356}
!415 = !{i64 74360}
!416 = !{i64 74364}
!417 = !{i64 74368}
!418 = !{i64 74372}
!419 = !{i64 74396}
!420 = !{i64 74400}
!421 = !{i64 74408}
!422 = !{i64 74412}
!423 = !{i64 74420}
!424 = !{i64 74424}
!425 = !{i64 74428}
!426 = !{i64 74436}
!427 = !{i64 74440}
!428 = !{i64 74452}
!429 = !{i64 74476}
!430 = !{i64 74484}
!431 = !{i64 74492}
!432 = !{i64 74496}
!433 = !{i64 74508}
!434 = !{i64 74512}
!435 = !{i64 74520}
!436 = !{i64 74532}
!437 = !{i64 74536}
!438 = !{i64 74540}
!439 = !{i64 74544}
!440 = !{i64 74552}
!441 = !{i64 74572}
!442 = !{i64 74576}
!443 = !{i64 74580}
!444 = !{i64 74584}
!445 = !{i64 74588}
!446 = !{i64 74600}
!447 = !{i64 74604}
!448 = !{i64 74608}
!449 = !{i64 74612}
!450 = !{i64 74620}
!451 = !{i64 74628}
!452 = !{i64 74636}
!453 = !{i64 74652}
!454 = !{i64 74656}
!455 = !{i64 74660}
!456 = !{i64 74664}
!457 = !{i64 74672}
!458 = !{i64 74676}
!459 = !{i64 74684}
!460 = !{i64 74692}
!461 = !{i64 74700}
!462 = !{i64 74704}
!463 = !{i64 74708}
!464 = !{i64 74712}
!465 = !{i64 74716}
!466 = !{i64 74724}
!467 = !{i64 74728}
!468 = !{i64 74740}
!469 = !{i64 74768}
!470 = !{i64 74772}
!471 = !{i64 74780}
!472 = !{i64 74796}
!473 = !{i64 74808}
!474 = !{i64 74820}
!475 = !{i64 74824}
!476 = !{i64 74848}
!477 = !{i64 74904}
!478 = !{i64 74864}
!479 = !{i64 74872}
!480 = !{i64 74892}
!481 = !{i64 74896}
!482 = !{i64 74920}
!483 = !{i64 74940}
!484 = !{i64 75116}
!485 = !{i64 74948}
!486 = !{i64 74956}
!487 = !{i64 74968}
!488 = !{i64 74972}
!489 = !{i64 74976}
!490 = !{i64 74992}
!491 = !{i64 75004}
!492 = !{i64 75008}
!493 = !{i64 75012}
!494 = !{i64 75016}
!495 = !{i64 75024}
!496 = !{i64 75028}
!497 = !{i64 75032}
!498 = !{i64 75036}
!499 = !{i64 75040}
!500 = !{i64 75044}
!501 = !{i64 75048}
!502 = !{i64 75056}
!503 = !{i64 75064}
!504 = !{i64 75068}
!505 = !{i64 75076}
!506 = !{i64 75084}
!507 = !{i64 75092}
!508 = !{i64 75096}
!509 = !{i64 75100}
!510 = !{i64 75104}
!511 = !{i64 75112}
!512 = !{i64 75120}
!513 = !{i64 75124}
!514 = !{i64 75128}
!515 = !{i64 75132}
!516 = !{i64 75136}
!517 = !{i64 75140}
!518 = !{i64 75144}
!519 = !{i64 75148}
!520 = !{i64 75152}
!521 = !{i64 75164}
!522 = !{i64 75184}
!523 = !{i64 75196}
!524 = !{i64 75200}
!525 = !{i64 75216}
!526 = !{i64 75220}
!527 = !{i64 75236}
!528 = !{i64 75240}
!529 = !{i64 75256}
!530 = !{i64 75260}
!531 = !{i64 75276}
!532 = !{i64 75280}
!533 = !{i64 75296}
!534 = !{i64 75300}
!535 = !{i64 75320}
!536 = !{i64 78820}
