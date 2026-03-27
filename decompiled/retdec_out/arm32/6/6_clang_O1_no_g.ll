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
@global_var_1411c = local_unnamed_addr global i32 11524
@global_var_2d04 = constant i32 -382908416
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
@global_var_1120 = local_unnamed_addr constant [9 x i8] c"oLibHell\00"
@global_var_1124 = local_unnamed_addr constant [5 x i8] c"Hell\00"
@global_var_1220 = local_unnamed_addr constant i32 7204
@global_var_2dec = constant i32 1
@global_var_1224 = local_unnamed_addr constant i32 7184
@global_var_2de0 = constant i32 1
@global_var_1248 = local_unnamed_addr constant i32 7096
@global_var_2df8 = constant [21 x i8] c"Value: %d, Name: %s\0A\00"
@global_var_1270 = local_unnamed_addr constant i32 7068
@global_var_1274 = local_unnamed_addr constant i32 7081
@global_var_2e0d = constant [5 x i8] c"Test\00"
@global_var_12b8 = local_unnamed_addr constant i32 7046
@global_var_2e12 = constant [6 x i8] c"%d,%d\00"
@global_var_1304 = local_unnamed_addr constant i32 6984
@global_var_2e18 = constant [8 x i8] c"123,456\00"
@global_var_1308 = local_unnamed_addr constant i32 6970
@global_var_134c = local_unnamed_addr constant i32 6916
@global_var_13a0 = local_unnamed_addr constant i32 6850
@global_var_2e22 = constant [12 x i8] c"/etc/passwd\00"
@global_var_13a4 = local_unnamed_addr constant i32 6840
@global_var_1480 = local_unnamed_addr constant i32 6785
@global_var_2e41 = constant [3 x i8] c"w+\00"
@global_var_1484 = local_unnamed_addr constant i32 6742
@global_var_2e2e = constant [19 x i8] c"BinBench Test Data\00"
@global_var_1488 = local_unnamed_addr constant i32 6630
@global_var_14a4 = local_unnamed_addr constant i32 6568
@global_var_2e44 = constant [23 x i8] c"/tmp/binbench_test.tmp\00"
@global_var_1890 = local_unnamed_addr constant i32 6914
@global_var_1888 = local_unnamed_addr constant i32 1651068015
@global_var_188c = local_unnamed_addr constant i32 1819043144
@global_var_1894 = local_unnamed_addr constant i32 6119
@global_var_1898 = local_unnamed_addr constant i32 6134
@global_var_189c = local_unnamed_addr constant i32 6145
@global_var_18a0 = local_unnamed_addr constant i32 6157
@global_var_18a4 = local_unnamed_addr constant i32 5948
@global_var_18a8 = local_unnamed_addr constant i32 5928
@global_var_18ac = local_unnamed_addr constant i32 6077
@global_var_18b0 = local_unnamed_addr constant i32 5856
@global_var_18b4 = local_unnamed_addr constant i32 5869
@global_var_18b8 = local_unnamed_addr constant i32 6065
@global_var_18bc = local_unnamed_addr constant i32 5848
@global_var_18c0 = local_unnamed_addr constant i32 5834
@global_var_18c4 = local_unnamed_addr constant i32 6025
@global_var_18c8 = local_unnamed_addr constant i32 5790
@global_var_18cc = local_unnamed_addr constant i32 5780
@global_var_18d0 = local_unnamed_addr constant i32 5978
@global_var_18d4 = local_unnamed_addr constant i32 5748
@global_var_18d8 = local_unnamed_addr constant i32 5978
@global_var_18dc = local_unnamed_addr constant i32 5934
@global_var_18e0 = local_unnamed_addr constant i32 5894
@global_var_18e4 = local_unnamed_addr constant i32 5909
@global_var_1984 = local_unnamed_addr constant i32 5346
@global_var_1a00 = local_unnamed_addr constant i32 5198
@global_var_1b0c = local_unnamed_addr constant i32 5297
@global_var_2fa9 = constant [10 x i8] c"/bin/true\00"
@global_var_1bc4 = local_unnamed_addr constant i32 5123
@global_var_2fb3 = constant [10 x i8] c"HelloPipe\00"
@global_var_1d88 = local_unnamed_addr constant i32 4845
@global_var_2fbd = constant [18 x i8] c"/tmp/binbench_shm\00"
@global_var_1b6 = local_unnamed_addr global i32 1313275904
@global_var_1d8c = local_unnamed_addr constant i32 4805
@global_var_3b6 = global i32 0
@global_var_1d90 = local_unnamed_addr constant i32 4236
@global_var_2dd0 = constant [13 x i8] c"SharedMemory\00"
@global_var_1efc = local_unnamed_addr constant i32 356
@global_var_1f00 = local_unnamed_addr constant i32 324
@global_var_1f04 = local_unnamed_addr constant i32 74548
@global_var_14138 = local_unnamed_addr global i32 0
@global_var_1f08 = local_unnamed_addr constant i32 74524
@global_var_3e8 = global i32 0
@global_var_1f0c = local_unnamed_addr constant i32 74496
@global_var_1f10 = local_unnamed_addr constant i32 74472
@global_var_1f14 = local_unnamed_addr constant i32 74448
@global_var_1413c = local_unnamed_addr global i32 0
@global_var_1f18 = local_unnamed_addr constant i32 74412
@global_var_7d0 = constant [5 x i8] c"eate\00"
@global_var_1f1c = local_unnamed_addr constant i32 74384
@global_var_1f20 = local_unnamed_addr constant i32 74356
@global_var_1f24 = local_unnamed_addr constant i32 74344
@global_var_1f48 = local_unnamed_addr constant i32 74244
@global_var_1f4c = local_unnamed_addr constant i32 74232
@global_var_20e0 = local_unnamed_addr constant i32 4598
@global_var_20e4 = local_unnamed_addr constant i32 3746
@global_var_20e8 = local_unnamed_addr constant i32 4099
@global_var_20ec = local_unnamed_addr constant i32 3658
@global_var_20f0 = local_unnamed_addr constant i32 4075
@global_var_20f4 = local_unnamed_addr constant i32 4011
@global_var_20f8 = local_unnamed_addr constant i32 4019
@global_var_20fc = local_unnamed_addr constant i32 4027
@global_var_2100 = local_unnamed_addr constant i32 4031
@global_var_2104 = local_unnamed_addr constant i32 4035
@global_var_2108 = local_unnamed_addr constant i32 3805
@global_var_2184 = local_unnamed_addr constant i32 -60
@global_var_21e4 = local_unnamed_addr constant i32 -156
@global_var_2324 = local_unnamed_addr constant i32 -184
@global_var_240c = local_unnamed_addr constant i32 -416
@global_var_246c = local_unnamed_addr constant i32 72980
@global_var_14140 = global i32 0
@global_var_2470 = local_unnamed_addr constant i32 72996
@global_var_14158 = local_unnamed_addr global i32 0
@global_var_2474 = local_unnamed_addr constant i32 72980
@global_var_255c = local_unnamed_addr constant i32 72880
@global_var_2560 = local_unnamed_addr constant i32 -176
@global_var_2564 = local_unnamed_addr constant i32 72740
@global_var_2600 = local_unnamed_addr constant i32 72652
@global_var_1415c = global i32 0
@global_var_2604 = local_unnamed_addr constant i32 72664
@global_var_2608 = local_unnamed_addr constant i32 72648
@global_var_14178 = global i32 0
@global_var_260c = local_unnamed_addr constant i32 72612
@global_var_2610 = local_unnamed_addr constant i32 72656
@global_var_2614 = local_unnamed_addr constant i32 72568
@global_var_2670 = local_unnamed_addr constant i32 72488
@global_var_2674 = local_unnamed_addr constant i32 72548
@global_var_2678 = local_unnamed_addr constant i32 72484
@global_var_267c = local_unnamed_addr constant i32 72476
@global_var_272c = local_unnamed_addr constant i32 72416
@global_var_2730 = local_unnamed_addr constant i32 72452
@global_var_2734 = local_unnamed_addr constant i32 -308
@global_var_2738 = local_unnamed_addr constant i32 -192
@global_var_27bc = local_unnamed_addr constant i32 72252
@global_var_141ac = global i32 0
@global_var_27f4 = local_unnamed_addr constant i32 72156
@global_var_290c = local_unnamed_addr constant i32 72068
@global_var_2910 = local_unnamed_addr constant i32 -248
@global_var_2914 = local_unnamed_addr constant i32 -196
@global_var_2918 = local_unnamed_addr constant i32 71904
@global_var_1f4 = global i32 0
@global_var_2974 = local_unnamed_addr constant i32 8
@global_var_2978 = local_unnamed_addr constant i32 12
@global_var_2b10 = local_unnamed_addr constant i32 1723
@global_var_6bb = constant [16 x i8] c"__atomic_load_4\00"
@global_var_2b14 = local_unnamed_addr constant i32 -224
@global_var_2ce0 = local_unnamed_addr constant i32 1605
@global_var_645 = constant [28 x i8] c"_ITM_deregisterTMCloneTable\00"
@global_var_2ce4 = local_unnamed_addr constant i32 -2640
@global_var_2ce8 = local_unnamed_addr constant i32 1281
@global_var_2cec = local_unnamed_addr constant i32 -2564
@global_var_2cf0 = local_unnamed_addr constant i32 1101
@global_var_2cf4 = local_unnamed_addr constant i32 1098
@global_var_2cf8 = local_unnamed_addr constant i32 1106
@global_var_2cfc = local_unnamed_addr constant i32 1106
@global_var_2d00 = local_unnamed_addr constant i32 1110
@0 = external global i32
@global_var_14130 = external local_unnamed_addr global i8*
@1 = internal constant [2 x i8] c"r\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i32 0, i32 0)
@3 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\87\E5\87\86\E5\BA\93\E5\87\BD\E6\95\B0\E8\B0\83\E7\94\A8 ===\00"
@global_var_3146 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @3, i32 0, i32 0)
@4 = internal constant [2 x i8] c"\EB\00"
@global_var_17e7 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @4, i32 0, i32 0)
@5 = internal constant [27 x i8] c"LIB-L1-02: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_2e76 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @5, i32 0, i32 0)
@6 = internal constant [28 x i8] c"LIB-L1-03: %d (\E6\9C\9F\E6\9C\9B: 12)\0A\00"
@global_var_2e91 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @6, i32 0, i32 0)
@7 = internal constant [28 x i8] c"LIB-L1-04: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_2ead = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @7, i32 0, i32 0)
@8 = internal constant [28 x i8] c"LIB-L1-05: %d (\E6\9C\9F\E6\9C\9B: -1)\0A\00"
@global_var_2ec9 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i32 0, i32 0)
@9 = internal constant [28 x i8] c"LIB-L1-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_2ee5 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i32 0, i32 0)
@10 = internal constant [29 x i8] c"LIB-L1-07: %d (\E6\9C\9F\E6\9C\9B: 579)\0A\00"
@global_var_2f01 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @10, i32 0, i32 0)
@11 = internal constant [28 x i8] c"LIB-L1-08: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2f1e = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i32 0, i32 0)
@12 = internal constant [28 x i8] c"LIB-L1-09: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2f3a = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @12, i32 0, i32 0)
@13 = internal constant [28 x i8] c"LIB-L1-10: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_2f56 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @13, i32 0, i32 0)
@14 = internal constant [27 x i8] c"LIB-L1-11: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_2f72 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @14, i32 0, i32 0)
@15 = internal constant [28 x i8] c"LIB-L1-12: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_2f8d = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @15, i32 0, i32 0)
@16 = internal constant [27 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\B3\BB\E7\BB\9F\E8\B0\83\E7\94\A8 ===\00"
@global_var_316a = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @16, i32 0, i32 0)
@17 = internal constant [28 x i8] c"SYS-L3-01: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2fcf = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i32 0, i32 0)
@18 = internal constant [28 x i8] c"SYS-L3-02: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2feb = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @18, i32 0, i32 0)
@19 = internal constant [28 x i8] c"SYS-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3007 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @19, i32 0, i32 0)
@20 = internal constant [28 x i8] c"SYS-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3023 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @20, i32 0, i32 0)
@21 = internal constant [28 x i8] c"SYS-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_303f = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @21, i32 0, i32 0)
@22 = internal constant [28 x i8] c"SYS-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_305b = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @22, i32 0, i32 0)
@23 = internal constant [28 x i8] c"SYS-L3-07: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3077 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @23, i32 0, i32 0)
@global_var_210c = constant i32* (i32*)* inttoptr (i32 -382910448 to i32* (i32*)*)
@global_var_14174 = external local_unnamed_addr global i8*
@global_var_141a8 = external local_unnamed_addr global i8*
@global_var_501 = external global i8*
@global_var_44d = external global i8*
@global_var_44a = external global i8*
@global_var_452 = external global i8*
@global_var_456 = external global i8*
@global_var_2e20 = constant [2 x i8] c"r\00"

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
  %2 = call i32 @__libc_start_main(i32 ptrtoint (i32* @global_var_2d04 to i32), i32 %arg2, i8** nonnull %0, void ()* null, void ()* null, void ()* %1), !insn.addr !67
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
  ret i32 %6, !insn.addr !89

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @call_strcpy() local_unnamed_addr {
dec_label_pc_10ec:
  %stack_var_-40 = alloca i8*, align 4
  store i8* inttoptr (i32 1819043144 to i8*), i8** %stack_var_-40, align 4, !insn.addr !90
  %0 = bitcast i8** %stack_var_-40 to i8*, !insn.addr !91
  %1 = call i32 @strlen(i8* nonnull %0), !insn.addr !91
  ret i32 %1, !insn.addr !92

; uselistorder directives
  uselistorder i8** %stack_var_-40, { 1, 0 }
}

define i32 @param_strcmp() local_unnamed_addr {
dec_label_pc_1128:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = inttoptr i32 %2 to i8*, !insn.addr !93
  %4 = inttoptr i32 %1 to i8*, !insn.addr !93
  %5 = call i32 @strcmp(i8* %3, i8* %4), !insn.addr !93
  %6 = icmp ne i32 %5, 0, !insn.addr !94
  %spec.select = sext i1 %6 to i32
  %7 = icmp sgt i32 %5, 0, !insn.addr !95
  %spec.store.select = select i1 %7, i32 1, i32 %spec.select
  ret i32 %spec.store.select, !insn.addr !96

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @call_strcmp() local_unnamed_addr {
dec_label_pc_1150:
  ret i32 0, !insn.addr !97
}

define i32 @param_strlen() local_unnamed_addr {
dec_label_pc_1158:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i8*, !insn.addr !98
  %3 = call i32 @strlen(i8* %2), !insn.addr !98
  ret i32 %3, !insn.addr !99
}

define i32 @call_strlen() local_unnamed_addr {
dec_label_pc_1168:
  ret i32 12, !insn.addr !100
}

define i32 @param_memcpy(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1170:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !101
  %1 = inttoptr i32 %arg2 to i32*, !insn.addr !101
  %2 = call i32* @memcpy(i32* %0, i32* %1, i32 %arg3), !insn.addr !101
  ret i32 %arg3, !insn.addr !102
}

define i32 @call_memcpy() local_unnamed_addr {
dec_label_pc_1188:
  ret i32 90, !insn.addr !103
}

define i32 @param_memcmp() local_unnamed_addr {
dec_label_pc_1190:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = inttoptr i32 %3 to i32*, !insn.addr !104
  %5 = inttoptr i32 %2 to i32*, !insn.addr !104
  %6 = call i32 @memcmp(i32* %4, i32* %5, i32 %1), !insn.addr !104
  %7 = icmp ne i32 %6, 0, !insn.addr !105
  %spec.select = sext i1 %7 to i32
  %8 = icmp sgt i32 %6, 0, !insn.addr !106
  %spec.store.select = select i1 %8, i32 1, i32 %spec.select
  ret i32 %spec.store.select, !insn.addr !107

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
}

define i32 @call_memcmp() local_unnamed_addr {
dec_label_pc_11b8:
  %0 = call i32 @memcmp(i32* nonnull @global_var_2dec, i32* nonnull @global_var_2de0, i32 12), !insn.addr !108
  %1 = icmp ne i32 %0, 0, !insn.addr !109
  %spec.select = sext i1 %1 to i32
  %2 = icmp sgt i32 %0, 0, !insn.addr !110
  %spec.select3 = select i1 %2, i32 1, i32 %spec.select
  %3 = call i32 @memcmp(i32* nonnull @global_var_2dec, i32* nonnull @global_var_2dec, i32 12), !insn.addr !111
  %4 = icmp ne i32 %3, 0, !insn.addr !112
  %spec.select2 = sext i1 %4 to i32
  %5 = icmp sgt i32 %3, 0, !insn.addr !113
  %r1.0 = select i1 %5, i32 1, i32 %spec.select2
  %6 = add nsw i32 %r1.0, %spec.select3, !insn.addr !114
  ret i32 %6, !insn.addr !115
}

define i32 @param_printf(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1228:
  %0 = inttoptr i32 %arg2 to i8*, !insn.addr !116
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_2df8, i32 0, i32 0), i32 %arg1, i8* %0), !insn.addr !116
  ret i32 %1, !insn.addr !117
}

define i32 @call_printf() local_unnamed_addr {
dec_label_pc_124c:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_2df8, i32 0, i32 0), i32 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_2e0d, i32 0, i32 0)), !insn.addr !118
  ret i32 %0, !insn.addr !119
}

define i32 @param_scanf() local_unnamed_addr {
dec_label_pc_1278:
  %0 = alloca i32
  %r1.0.reg2mem = alloca i32, !insn.addr !120
  %1 = load i32, i32* %0
  %stack_var_-12 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  %2 = inttoptr i32 %1 to i8*, !insn.addr !121
  %3 = call i32 (i8*, i8*, ...) @sscanf(i8* %2, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_2e12, i32 0, i32 0), i32* nonnull %stack_var_-12, i32* nonnull %stack_var_-16), !insn.addr !121
  %4 = icmp eq i32 %3, 2, !insn.addr !122
  store i32 -1, i32* %r1.0.reg2mem, !insn.addr !123
  br i1 %4, label %5, label %9, !insn.addr !123

; <label>:5:                                      ; preds = %dec_label_pc_1278
  %6 = load i32, i32* %stack_var_-16, align 4, !insn.addr !124
  %7 = load i32, i32* %stack_var_-12, align 4, !insn.addr !125
  %8 = add i32 %7, %6, !insn.addr !123
  store i32 %8, i32* %r1.0.reg2mem, !insn.addr !123
  br label %9, !insn.addr !123

; <label>:9:                                      ; preds = %dec_label_pc_1278, %5
  %r1.0.reload = load i32, i32* %r1.0.reg2mem
  ret i32 %r1.0.reload, !insn.addr !126

; uselistorder directives
  uselistorder i32* %stack_var_-16, { 1, 0 }
  uselistorder i32* %stack_var_-12, { 1, 0 }
  uselistorder i32* %r1.0.reg2mem, { 0, 2, 1 }
  uselistorder label %9, { 1, 0 }
}

define i32 @call_scanf() local_unnamed_addr {
dec_label_pc_12bc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = call i32 (i8*, i8*, ...) @sscanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_2e18, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_2e12, i32 0, i32 0)), !insn.addr !127
  %4 = icmp eq i32 %3, 2, !insn.addr !128
  %5 = add i32 %2, %1
  %spec.select = select i1 %4, i32 %5, i32 -1
  ret i32 %spec.select, !insn.addr !129

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @param_fopen_fclose() local_unnamed_addr {
dec_label_pc_130c:
  %0 = alloca i32
  %r4.0.reg2mem = alloca i32, !insn.addr !130
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i8*, !insn.addr !131
  %3 = call %_IO_FILE* @fopen(i8* %2, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_2e20, i32 0, i32 0)), !insn.addr !131
  %4 = icmp eq %_IO_FILE* %3, null, !insn.addr !132
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !133
  br i1 %4, label %dec_label_pc_1340, label %dec_label_pc_1324, !insn.addr !133

dec_label_pc_1324:                                ; preds = %dec_label_pc_130c
  %5 = call i32 @fileno(%_IO_FILE* nonnull %3), !insn.addr !134
  %6 = call i32 @fclose(%_IO_FILE* nonnull %3), !insn.addr !135
  store i32 %5, i32* %r4.0.reg2mem, !insn.addr !136
  br label %dec_label_pc_1340, !insn.addr !136

dec_label_pc_1340:                                ; preds = %dec_label_pc_130c, %dec_label_pc_1324
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !137

; uselistorder directives
  uselistorder i32* %r4.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1340, { 1, 0 }
}

define i32 @call_fopen_fclose() local_unnamed_addr {
dec_label_pc_1350:
  %0 = call %_IO_FILE* @fopen(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_2e22, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_2e20, i32 0, i32 0)), !insn.addr !138
  %1 = ptrtoint %_IO_FILE* %0 to i32, !insn.addr !138
  %2 = icmp eq %_IO_FILE* %0, null, !insn.addr !139
  %spec.select1 = select i1 %2, i32 -1, i32 %1
  br i1 %2, label %3, label %dec_label_pc_1378, !insn.addr !140

; <label>:3:                                      ; preds = %dec_label_pc_1350
  ret i32 %spec.select1, !insn.addr !140

dec_label_pc_1378:                                ; preds = %dec_label_pc_1350
  %4 = inttoptr i32 %spec.select1 to %_IO_FILE*, !insn.addr !141
  %5 = call i32 @fileno(%_IO_FILE* %4), !insn.addr !141
  %6 = call i32 @fclose(%_IO_FILE* %4), !insn.addr !142
  %7 = add i32 %5, 1, !insn.addr !143
  %8 = icmp sgt i32 %7, 0, !insn.addr !144
  %spec.select = select i1 %8, i32 42, i32 -1
  ret i32 %spec.select, !insn.addr !145

; uselistorder directives
  uselistorder i1 %2, { 1, 0 }
}

define i32 @param_fread_fwrite(i8* %arg1) local_unnamed_addr {
dec_label_pc_13a8:
  %r0.0.reg2mem = alloca i32, !insn.addr !146
  %stack_var_-56 = alloca i32, align 4
  %0 = call %_IO_FILE* @fopen(i8* %arg1, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_2e41, i32 0, i32 0)), !insn.addr !147
  %1 = icmp eq %_IO_FILE* %0, null, !insn.addr !148
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !149
  br i1 %1, label %dec_label_pc_1474, label %dec_label_pc_13c8, !insn.addr !149

dec_label_pc_13c8:                                ; preds = %dec_label_pc_13a8
  %2 = call i32 @fwrite(i32* bitcast ([19 x i8]* @global_var_2e2e to i32*), i32 1, i32 18, %_IO_FILE* nonnull %0), !insn.addr !150
  %3 = icmp eq i32 %2, 18, !insn.addr !151
  br i1 %3, label %dec_label_pc_13ec, label %dec_label_pc_1468, !insn.addr !152

dec_label_pc_13ec:                                ; preds = %dec_label_pc_13c8
  call void @rewind(%_IO_FILE* nonnull %0), !insn.addr !153
  %4 = ptrtoint i32* %stack_var_-56 to i32, !insn.addr !154
  %5 = call i32 @fread(i32* nonnull %stack_var_-56, i32 1, i32 18, %_IO_FILE* nonnull %0), !insn.addr !155
  %6 = add i32 %5, %4, !insn.addr !156
  %7 = inttoptr i32 %6 to i8*, !insn.addr !156
  store i8 0, i8* %7, align 1, !insn.addr !156
  %8 = call i32 @fclose(%_IO_FILE* nonnull %0), !insn.addr !157
  %9 = call i32 @unlink(i8* %arg1), !insn.addr !158
  %10 = icmp eq i32 %5, 18, !insn.addr !159
  store i32 -3, i32* %r0.0.reg2mem, !insn.addr !160
  br i1 %10, label %dec_label_pc_1438, label %dec_label_pc_1474, !insn.addr !160

dec_label_pc_1438:                                ; preds = %dec_label_pc_13ec
  %11 = call i32 @bcmp(i32* nonnull %stack_var_-56, i32* bitcast ([19 x i8]* @global_var_2e2e to i32*), i32 19), !insn.addr !161
  %12 = icmp eq i32 %11, 0, !insn.addr !162
  %spec.select = select i1 %12, i32 42, i32 -3
  store i32 %spec.select, i32* %r0.0.reg2mem, !insn.addr !163
  br label %dec_label_pc_1474, !insn.addr !163

dec_label_pc_1468:                                ; preds = %dec_label_pc_13c8
  %13 = call i32 @fclose(%_IO_FILE* nonnull %0), !insn.addr !164
  store i32 -2, i32* %r0.0.reg2mem, !insn.addr !165
  br label %dec_label_pc_1474, !insn.addr !165

dec_label_pc_1474:                                ; preds = %dec_label_pc_13a8, %dec_label_pc_13ec, %dec_label_pc_1468, %dec_label_pc_1438
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !166

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder %_IO_FILE* %0, { 3, 0, 1, 2, 4, 5 }
  uselistorder i32* %r0.0.reg2mem, { 0, 2, 4, 3, 1 }
  uselistorder i32 18, { 1, 0, 3, 2 }
  uselistorder label %dec_label_pc_1474, { 2, 3, 1, 0 }
}

define i32 @call_fread_fwrite() local_unnamed_addr {
dec_label_pc_148c:
  %0 = call i32 @param_fread_fwrite(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_2e44, i32 0, i32 0)), !insn.addr !167
  ret i32 %0, !insn.addr !168
}

define i32 @param_malloc_free(i32 %arg1) local_unnamed_addr {
dec_label_pc_14a8:
  %0 = alloca i32
  %r3.0.reg2mem = alloca i32, !insn.addr !169
  %r2.0.reg2mem = alloca i32, !insn.addr !169
  %r1.0.reg2mem = alloca i32, !insn.addr !169
  %1 = load i32, i32* %0
  %2 = mul i32 %arg1, 4, !insn.addr !170
  %3 = call i32* @malloc(i32 %2), !insn.addr !171
  %4 = ptrtoint i32* %3 to i32, !insn.addr !171
  %5 = icmp eq i32* %3, null, !insn.addr !172
  %spec.select = select i1 %5, i32 -1, i32 %4
  br i1 %5, label %6, label %dec_label_pc_14c8, !insn.addr !173

; <label>:6:                                      ; preds = %dec_label_pc_14a8
  ret i32 %spec.select, !insn.addr !173

dec_label_pc_14c8:                                ; preds = %dec_label_pc_14a8
  %r4.0 = select i1 %5, i32 %1, i32 %arg1
  %7 = icmp eq i32 %r4.0, 0, !insn.addr !174
  store i32 0, i32* %r1.0.reg2mem, !insn.addr !175
  store i32 %4, i32* %r2.0.reg2mem, !insn.addr !175
  store i32 %arg1, i32* %r3.0.reg2mem, !insn.addr !175
  br i1 %7, label %dec_label_pc_14ec, label %dec_label_pc_14dc, !insn.addr !175

dec_label_pc_14dc:                                ; preds = %dec_label_pc_14c8, %dec_label_pc_14dc
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  %r2.0.reload = load i32, i32* %r2.0.reg2mem
  %r1.0.reload = load i32, i32* %r1.0.reg2mem
  %8 = inttoptr i32 %r2.0.reload to i32*, !insn.addr !176
  store i32 %r1.0.reload, i32* %8, align 4, !insn.addr !176
  %9 = add i32 %r2.0.reload, 4, !insn.addr !176
  %10 = add i32 %r1.0.reload, 10, !insn.addr !177
  %11 = add i32 %r3.0.reload, -1, !insn.addr !178
  %12 = icmp eq i32 %r3.0.reload, 1, !insn.addr !178
  store i32 %10, i32* %r1.0.reg2mem, !insn.addr !179
  store i32 %9, i32* %r2.0.reg2mem, !insn.addr !179
  store i32 %11, i32* %r3.0.reg2mem, !insn.addr !179
  br i1 %12, label %dec_label_pc_14ec, label %dec_label_pc_14dc, !insn.addr !179

dec_label_pc_14ec:                                ; preds = %dec_label_pc_14dc, %dec_label_pc_14c8
  %13 = inttoptr i32 %spec.select to i32*, !insn.addr !180
  %14 = load i32, i32* %13, align 4, !insn.addr !180
  %15 = mul i32 %r4.0, 4, !insn.addr !180
  %16 = add i32 %spec.select, -4, !insn.addr !180
  %17 = add i32 %16, %15, !insn.addr !181
  %18 = inttoptr i32 %17 to i32*, !insn.addr !181
  %19 = load i32, i32* %18, align 4, !insn.addr !181
  call void @free(i32* %13), !insn.addr !182
  %20 = add i32 %19, %14, !insn.addr !183
  ret i32 %20, !insn.addr !184

; uselistorder directives
  uselistorder i32 %r1.0.reload, { 1, 0 }
  uselistorder i32 %r2.0.reload, { 1, 0 }
  uselistorder i32 %r3.0.reload, { 1, 0 }
  uselistorder i32 %spec.select, { 2, 1, 0 }
  uselistorder i1 %5, { 0, 2, 1 }
  uselistorder i32* %r1.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r2.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r3.0.reg2mem, { 2, 0, 1 }
  uselistorder i32 %arg1, { 0, 2, 1 }
  uselistorder label %dec_label_pc_14dc, { 1, 0 }
}

define i32 @call_malloc_free() local_unnamed_addr {
dec_label_pc_1508:
  %r2.0.reg2mem = alloca i32, !insn.addr !185
  %r1.0.reg2mem = alloca i32, !insn.addr !185
  %0 = call i32* @malloc(i32 40), !insn.addr !186
  %1 = ptrtoint i32* %0 to i32, !insn.addr !186
  %2 = icmp eq i32* %0, null, !insn.addr !187
  %spec.select = select i1 %2, i32 -1, i32 %1
  store i32 0, i32* %r1.0.reg2mem, !insn.addr !188
  store i32 0, i32* %r2.0.reg2mem, !insn.addr !188
  br i1 %2, label %3, label %dec_label_pc_152c, !insn.addr !188

; <label>:3:                                      ; preds = %dec_label_pc_1508
  ret i32 %spec.select, !insn.addr !188

dec_label_pc_152c:                                ; preds = %dec_label_pc_1508, %dec_label_pc_152c
  %r2.0.reload = load i32, i32* %r2.0.reg2mem
  %r1.0.reload = load i32, i32* %r1.0.reg2mem
  %4 = mul i32 %r2.0.reload, 4, !insn.addr !189
  %5 = add i32 %4, %spec.select, !insn.addr !189
  %6 = inttoptr i32 %5 to i32*, !insn.addr !189
  store i32 %r1.0.reload, i32* %6, align 4, !insn.addr !189
  %7 = add nuw nsw i32 %r1.0.reload, 10, !insn.addr !190
  %8 = add nsw i32 %r2.0.reload, -1, !insn.addr !191
  %9 = icmp eq i32 %r2.0.reload, -9, !insn.addr !192
  store i32 %7, i32* %r1.0.reg2mem, !insn.addr !193
  store i32 %8, i32* %r2.0.reg2mem, !insn.addr !193
  br i1 %9, label %dec_label_pc_1540, label %dec_label_pc_152c, !insn.addr !193

dec_label_pc_1540:                                ; preds = %dec_label_pc_152c
  %10 = inttoptr i32 %spec.select to i32*, !insn.addr !194
  %11 = load i32, i32* %10, align 4, !insn.addr !194
  %12 = add i32 %spec.select, 36, !insn.addr !195
  %13 = inttoptr i32 %12 to i32*, !insn.addr !195
  %14 = load i32, i32* %13, align 4, !insn.addr !195
  call void @free(i32* %10), !insn.addr !196
  %15 = add i32 %14, %11, !insn.addr !197
  ret i32 %15, !insn.addr !198

; uselistorder directives
  uselistorder i32 %r1.0.reload, { 1, 0 }
  uselistorder i32 %spec.select, { 2, 3, 0, 1 }
  uselistorder i1 %2, { 1, 0 }
  uselistorder i32* %r1.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r2.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_152c, { 1, 0 }
}

define i32 @param_memset(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1558:
  %r6.1.reg2mem = alloca i32, !insn.addr !199
  %r6.0.reg2mem = alloca i32, !insn.addr !199
  %r5.0.reg2mem = alloca i32, !insn.addr !199
  %r4.0.reg2mem = alloca i32, !insn.addr !199
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !200
  %1 = call i32* @memset(i32* %0, i32 0, i32 %arg2), !insn.addr !200
  %2 = icmp eq i32 %arg2, 0, !insn.addr !201
  store i32 %arg2, i32* %r4.0.reg2mem, !insn.addr !202
  store i32 %arg1, i32* %r5.0.reg2mem, !insn.addr !202
  store i32 0, i32* %r6.0.reg2mem, !insn.addr !202
  store i32 0, i32* %r6.1.reg2mem, !insn.addr !202
  br i1 %2, label %dec_label_pc_1590, label %dec_label_pc_1580, !insn.addr !202

dec_label_pc_1580:                                ; preds = %dec_label_pc_1558, %dec_label_pc_1580
  %r6.0.reload = load i32, i32* %r6.0.reg2mem
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %3 = inttoptr i32 %r5.0.reload to i8*, !insn.addr !203
  %4 = load i8, i8* %3, align 1, !insn.addr !203
  %5 = zext i8 %4 to i32, !insn.addr !203
  %6 = add i32 %r5.0.reload, 1, !insn.addr !203
  %7 = add i32 %r6.0.reload, %5, !insn.addr !204
  %8 = add i32 %r4.0.reload, -1, !insn.addr !205
  %9 = icmp eq i32 %r4.0.reload, 1, !insn.addr !205
  store i32 %8, i32* %r4.0.reg2mem, !insn.addr !206
  store i32 %6, i32* %r5.0.reg2mem, !insn.addr !206
  store i32 %7, i32* %r6.0.reg2mem, !insn.addr !206
  store i32 %7, i32* %r6.1.reg2mem, !insn.addr !206
  br i1 %9, label %dec_label_pc_1590, label %dec_label_pc_1580, !insn.addr !206

dec_label_pc_1590:                                ; preds = %dec_label_pc_1580, %dec_label_pc_1558
  %r6.1.reload = load i32, i32* %r6.1.reg2mem
  ret i32 %r6.1.reload, !insn.addr !207

; uselistorder directives
  uselistorder i32 %r4.0.reload, { 1, 0 }
  uselistorder i32* %r4.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r6.0.reg2mem, { 2, 0, 1 }
  uselistorder i32 %arg2, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1580, { 1, 0 }
}

define i32 @call_memset() local_unnamed_addr {
dec_label_pc_159c:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !208
  %1 = load i32, i32* %0
  %stack_var_-48 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-48 to i32, !insn.addr !209
  store i32 0, i32* %r0.0.reg2mem, !insn.addr !210
  br label %dec_label_pc_15b0, !insn.addr !210

dec_label_pc_15b0:                                ; preds = %dec_label_pc_15b0, %dec_label_pc_159c
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  %3 = mul i32 %r0.0.reload, 4, !insn.addr !211
  %4 = add i32 %3, %2, !insn.addr !211
  %5 = inttoptr i32 %4 to i32*, !insn.addr !211
  store i32 255, i32* %5, align 4, !insn.addr !211
  %6 = add nsw i32 %r0.0.reload, -1, !insn.addr !212
  %7 = icmp eq i32 %r0.0.reload, -9, !insn.addr !213
  store i32 %6, i32* %r0.0.reg2mem, !insn.addr !214
  br i1 %7, label %dec_label_pc_15c0, label %dec_label_pc_15b0, !insn.addr !214

dec_label_pc_15c0:                                ; preds = %dec_label_pc_15b0
  %8 = call i32* @memset(i32* nonnull %stack_var_-48, i32 0, i32 40), !insn.addr !215
  %9 = load i32, i32* %stack_var_-48, align 4, !insn.addr !216
  %10 = add i32 %9, %1, !insn.addr !217
  ret i32 %10, !insn.addr !218

; uselistorder directives
  uselistorder i32* %stack_var_-48, { 1, 0, 2 }
  uselistorder i32* %r0.0.reg2mem, { 1, 0, 2 }
}

define i32 @param_strchr_strstr(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_15e8:
  %0 = inttoptr i32 %arg1 to i8*, !insn.addr !219
  %1 = call i8* @strchr(i8* %0, i32 %arg2), !insn.addr !219
  %2 = ptrtoint i8* %1 to i32, !insn.addr !219
  %3 = sub i32 %2, %arg1, !insn.addr !220
  %4 = icmp eq i8* %1, null, !insn.addr !221
  %spec.select = select i1 %4, i32 -1, i32 %3
  %5 = inttoptr i32 %arg3 to i8*, !insn.addr !222
  %6 = call i8* @strstr(i8* %0, i8* %5), !insn.addr !222
  %7 = ptrtoint i8* %6 to i32, !insn.addr !222
  %8 = sub i32 %7, %arg1, !insn.addr !223
  %9 = icmp eq i8* %6, null, !insn.addr !224
  %storemerge = select i1 %9, i32 -1, i32 %8
  %10 = add i32 %storemerge, %spec.select, !insn.addr !225
  ret i32 %10, !insn.addr !226
}

define i32 @call_strchr_strstr() local_unnamed_addr {
dec_label_pc_1628:
  ret i32 15, !insn.addr !227
}

define i32 @test_standard_library_functions() local_unnamed_addr {
dec_label_pc_1630:
  %r0.0.reg2mem = alloca i32, !insn.addr !228
  %r2.0.reg2mem = alloca i32, !insn.addr !228
  %r1.0.reg2mem = alloca i32, !insn.addr !228
  %stack_var_-64 = alloca i32, align 4
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3146 to i8*)), !insn.addr !229
  store i32 1819043144, i32* %stack_var_-64, align 4, !insn.addr !230
  %1 = bitcast i32* %stack_var_-64 to i8*, !insn.addr !231
  %2 = call i32 @strlen(i8* nonnull %1), !insn.addr !231
  %3 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_17e7 to i32), i32 5748) to i8*)), !insn.addr !232
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2e76 to i8*)), !insn.addr !233
  %5 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2e91 to i8*)), !insn.addr !234
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2ead to i8*)), !insn.addr !235
  %7 = call i32 @memcmp(i32* nonnull @global_var_2dec, i32* nonnull @global_var_2de0, i32 12), !insn.addr !236
  %8 = call i32 @memcmp(i32* nonnull @global_var_2dec, i32* nonnull @global_var_2dec, i32 12), !insn.addr !237
  %9 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2ec9 to i8*)), !insn.addr !238
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_2df8, i32 0, i32 0), i32 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_2e0d, i32 0, i32 0)), !insn.addr !239
  %11 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2ee5 to i8*)), !insn.addr !240
  %12 = call i32 (i8*, i8*, ...) @sscanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_2e18, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_2e12, i32 0, i32 0)), !insn.addr !241
  %13 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2f01 to i8*)), !insn.addr !242
  %14 = call %_IO_FILE* @fopen(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_2e22, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_2e20, i32 0, i32 0)), !insn.addr !243
  %15 = icmp eq %_IO_FILE* %14, null, !insn.addr !244
  br i1 %15, label %dec_label_pc_17b8, label %dec_label_pc_1798, !insn.addr !245

dec_label_pc_1798:                                ; preds = %dec_label_pc_1630
  %16 = call i32 @fileno(%_IO_FILE* nonnull %14), !insn.addr !246
  %17 = call i32 @fclose(%_IO_FILE* nonnull %14), !insn.addr !247
  br label %dec_label_pc_17b8, !insn.addr !248

dec_label_pc_17b8:                                ; preds = %dec_label_pc_1798, %dec_label_pc_1630
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2f1e to i8*)), !insn.addr !249
  %19 = call i32 @param_fread_fwrite(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_2e44, i32 0, i32 0)), !insn.addr !250
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2f3a to i8*)), !insn.addr !251
  %21 = call i32* @malloc(i32 40), !insn.addr !252
  %22 = ptrtoint i32* %21 to i32, !insn.addr !252
  %23 = icmp eq i32* %21, null, !insn.addr !253
  store i32 0, i32* %r1.0.reg2mem, !insn.addr !254
  store i32 0, i32* %r2.0.reg2mem, !insn.addr !254
  br i1 %23, label %dec_label_pc_181c, label %dec_label_pc_17f8, !insn.addr !254

dec_label_pc_17f8:                                ; preds = %dec_label_pc_17b8, %dec_label_pc_17f8
  %r2.0.reload = load i32, i32* %r2.0.reg2mem
  %r1.0.reload = load i32, i32* %r1.0.reg2mem
  %24 = mul i32 %r2.0.reload, 4, !insn.addr !255
  %25 = add i32 %24, %22, !insn.addr !255
  %26 = inttoptr i32 %25 to i32*, !insn.addr !255
  store i32 %r1.0.reload, i32* %26, align 4, !insn.addr !255
  %27 = add nuw nsw i32 %r1.0.reload, 10, !insn.addr !256
  %28 = add nsw i32 %r2.0.reload, -1, !insn.addr !257
  %29 = icmp eq i32 %r2.0.reload, -9, !insn.addr !258
  store i32 %27, i32* %r1.0.reg2mem, !insn.addr !259
  store i32 %28, i32* %r2.0.reg2mem, !insn.addr !259
  br i1 %29, label %dec_label_pc_180c, label %dec_label_pc_17f8, !insn.addr !259

dec_label_pc_180c:                                ; preds = %dec_label_pc_17f8
  call void @free(i32* nonnull %21), !insn.addr !260
  br label %dec_label_pc_181c, !insn.addr !261

dec_label_pc_181c:                                ; preds = %dec_label_pc_180c, %dec_label_pc_17b8
  %30 = ptrtoint i32* %stack_var_-64 to i32, !insn.addr !262
  %31 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2f56 to i8*)), !insn.addr !263
  store i32 0, i32* %r0.0.reg2mem, !insn.addr !264
  br label %dec_label_pc_1834, !insn.addr !264

dec_label_pc_1834:                                ; preds = %dec_label_pc_1834, %dec_label_pc_181c
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  %32 = mul i32 %r0.0.reload, 4, !insn.addr !265
  %33 = add i32 %32, %30, !insn.addr !265
  %34 = inttoptr i32 %33 to i32*, !insn.addr !265
  store i32 255, i32* %34, align 4, !insn.addr !265
  %35 = add nsw i32 %r0.0.reload, -1, !insn.addr !266
  %36 = icmp eq i32 %r0.0.reload, -9, !insn.addr !267
  store i32 %35, i32* %r0.0.reg2mem, !insn.addr !268
  br i1 %36, label %dec_label_pc_1844, label %dec_label_pc_1834, !insn.addr !268

dec_label_pc_1844:                                ; preds = %dec_label_pc_1834
  %37 = call i32* @memset(i32* nonnull %stack_var_-64, i32 0, i32 40), !insn.addr !269
  %38 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2f72 to i8*)), !insn.addr !270
  %39 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2f8d to i8*)), !insn.addr !271
  ret i32 %39, !insn.addr !272

; uselistorder directives
  uselistorder i32 %r1.0.reload, { 1, 0 }
  uselistorder i32* %stack_var_-64, { 0, 2, 1, 3 }
  uselistorder i32* %r1.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r2.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r0.0.reg2mem, { 1, 0, 2 }
  uselistorder i32 (i8*)* @param_fread_fwrite, { 1, 0 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 4, 3, 2, 1, 0, 5 }
  uselistorder i32 (%_IO_FILE*)* @fileno, { 2, 1, 0, 3 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 3, 2, 1, 0, 4 }
  uselistorder i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_2e20, i32 0, i32 0), { 2, 1, 0 }
  uselistorder i32 (i8*, i8*, ...)* @sscanf, { 2, 1, 0, 3 }
  uselistorder i32 (i32*, i32*, i32)* @memcmp, { 4, 3, 2, 1, 0, 5 }
  uselistorder i32* @global_var_2dec, { 1, 0, 4, 3, 2, 5 }
  uselistorder label %dec_label_pc_17f8, { 1, 0 }
}

define i32 @param_linux_syscall(i32 %arg1) local_unnamed_addr {
dec_label_pc_18e8:
  %r4.0.reg2mem = alloca i32, !insn.addr !273
  %0 = call i32 (i32, ...) @syscall(i32 5), !insn.addr !274
  %1 = add i32 %0, 1, !insn.addr !275
  %2 = icmp slt i32 %1, 1, !insn.addr !276
  br i1 %2, label %dec_label_pc_1918, label %dec_label_pc_1904, !insn.addr !276

dec_label_pc_1904:                                ; preds = %dec_label_pc_18e8
  %3 = call i32 (i32, ...) @syscall(i32 6), !insn.addr !277
  store i32 %0, i32* %r4.0.reg2mem, !insn.addr !278
  br label %dec_label_pc_1924, !insn.addr !278

dec_label_pc_1918:                                ; preds = %dec_label_pc_18e8
  %4 = call i32* @__errno_location(), !insn.addr !279
  %5 = load i32, i32* %4, align 4, !insn.addr !280
  %6 = sub i32 0, %5, !insn.addr !281
  store i32 %6, i32* %r4.0.reg2mem, !insn.addr !281
  br label %dec_label_pc_1924, !insn.addr !281

dec_label_pc_1924:                                ; preds = %dec_label_pc_1918, %dec_label_pc_1904
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !282

; uselistorder directives
  uselistorder i32* %r4.0.reg2mem, { 0, 2, 1 }
}

define i32 @call_linux_syscall() local_unnamed_addr {
dec_label_pc_1930:
  %.pre-phi.reg2mem = alloca i32, !insn.addr !283
  %0 = call i32 (i32, ...) @syscall(i32 5), !insn.addr !284
  %1 = add i32 %0, 1
  %2 = icmp slt i32 %1, 1, !insn.addr !285
  br i1 %2, label %dec_label_pc_1964, label %dec_label_pc_1950, !insn.addr !285

dec_label_pc_1950:                                ; preds = %dec_label_pc_1930
  %3 = call i32 (i32, ...) @syscall(i32 6), !insn.addr !286
  store i32 %1, i32* %.pre-phi.reg2mem, !insn.addr !287
  br label %dec_label_pc_1970, !insn.addr !287

dec_label_pc_1964:                                ; preds = %dec_label_pc_1930
  %4 = call i32* @__errno_location(), !insn.addr !288
  %5 = load i32, i32* %4, align 4, !insn.addr !289
  %.pre = sub i32 1, %5, !insn.addr !290
  store i32 %.pre, i32* %.pre-phi.reg2mem, !insn.addr !291
  br label %dec_label_pc_1970, !insn.addr !291

dec_label_pc_1970:                                ; preds = %dec_label_pc_1964, %dec_label_pc_1950
  %.pre-phi.reload = load i32, i32* %.pre-phi.reg2mem
  %6 = icmp sgt i32 %.pre-phi.reload, 0, !insn.addr !292
  %spec.store.select = select i1 %6, i32 42, i32 -1
  ret i32 %spec.store.select, !insn.addr !293

; uselistorder directives
  uselistorder i32* %.pre-phi.reg2mem, { 0, 2, 1 }
}

define i32 @param_win32_api() local_unnamed_addr {
dec_label_pc_1988:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-96 = alloca i32, align 4
  %3 = inttoptr i32 %1 to i8*, !insn.addr !294
  %4 = bitcast i32* %stack_var_-96 to %stat*, !insn.addr !294
  %5 = call i32 @stat(i8* %3, %stat* nonnull %4), !insn.addr !294
  %6 = icmp sgt i32 %2, 0, !insn.addr !295
  %spec.store.select = select i1 %6, i32 42, i32 -2
  %7 = add i32 %5, 1, !insn.addr !296
  %8 = icmp slt i32 %7, 1, !insn.addr !297
  %spec.store.select1 = select i1 %8, i32 -1, i32 %spec.store.select
  ret i32 %spec.store.select1, !insn.addr !298

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @call_win32_api() local_unnamed_addr {
dec_label_pc_19c0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-96 = alloca i32, align 4
  %2 = bitcast i32* %stack_var_-96 to %stat*, !insn.addr !299
  %3 = call i32 @stat(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_2e22, i32 0, i32 0), %stat* nonnull %2), !insn.addr !299
  %4 = icmp sgt i32 %1, 0, !insn.addr !300
  %spec.store.select = select i1 %4, i32 42, i32 -2
  %5 = add i32 %3, 1, !insn.addr !301
  %6 = icmp slt i32 %5, 1, !insn.addr !302
  %spec.store.select1 = select i1 %6, i32 -1, i32 %spec.store.select
  ret i32 %spec.store.select1, !insn.addr !303
}

define i32 @param_fork_exec(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1a04:
  %r0.1.reg2mem = alloca i32, !insn.addr !304
  %stack_var_-20 = alloca i32, align 4
  %0 = call i32 @fork(), !insn.addr !305
  %1 = icmp slt i32 %0, 0, !insn.addr !306
  store i32 -1, i32* %r0.1.reg2mem, !insn.addr !307
  br i1 %1, label %dec_label_pc_1a5c, label %dec_label_pc_1a20, !insn.addr !307

dec_label_pc_1a20:                                ; preds = %dec_label_pc_1a04
  %2 = icmp eq i32 %0, 0, !insn.addr !306
  br i1 %2, label %dec_label_pc_1a68, label %dec_label_pc_1a24, !insn.addr !308

dec_label_pc_1a24:                                ; preds = %dec_label_pc_1a20
  %3 = call i32 @waitpid(i32 %0, i32* nonnull %stack_var_-20, i32 0), !insn.addr !309
  %4 = icmp slt i32 %3, 0, !insn.addr !310
  store i32 -2, i32* %r0.1.reg2mem, !insn.addr !311
  br i1 %4, label %dec_label_pc_1a5c, label %dec_label_pc_1a38, !insn.addr !311

dec_label_pc_1a38:                                ; preds = %dec_label_pc_1a24
  %5 = load i32, i32* %stack_var_-20, align 4, !insn.addr !312
  %6 = urem i32 %5, 128, !insn.addr !313
  %7 = icmp eq i32 %6, 0, !insn.addr !313
  store i32 -3, i32* %r0.1.reg2mem, !insn.addr !314
  br i1 %7, label %8, label %dec_label_pc_1a5c, !insn.addr !314

; <label>:8:                                      ; preds = %dec_label_pc_1a38
  %9 = udiv i32 %5, 256, !insn.addr !314
  %10 = urem i32 %9, 256, !insn.addr !314
  store i32 %10, i32* %r0.1.reg2mem, !insn.addr !314
  br label %dec_label_pc_1a5c, !insn.addr !314

dec_label_pc_1a5c:                                ; preds = %dec_label_pc_1a24, %dec_label_pc_1a04, %8, %dec_label_pc_1a38
  %r0.1.reload = load i32, i32* %r0.1.reg2mem
  ret i32 %r0.1.reload, !insn.addr !315

dec_label_pc_1a68:                                ; preds = %dec_label_pc_1a20
  %11 = inttoptr i32 %arg1 to i8*, !insn.addr !316
  %12 = call i32 (i8*, i8*, ...) @execl(i8* %11, i8* %11), !insn.addr !316
  call void @_exit(i32 127), !insn.addr !317
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !317

; uselistorder directives
  uselistorder i32* %stack_var_-20, { 1, 0 }
  uselistorder i32* %r0.1.reg2mem, { 0, 4, 3, 1, 2 }
  uselistorder i32 256, { 1, 0 }
  uselistorder label %dec_label_pc_1a5c, { 2, 3, 0, 1 }
}

define i32 @call_fork_exec() local_unnamed_addr {
dec_label_pc_1a84:
  %stack_var_-12 = alloca i32, align 4
  %0 = call i32 @fork(), !insn.addr !318
  %1 = icmp slt i32 %0, 0, !insn.addr !319
  br i1 %1, label %dec_label_pc_1ad4.thread, label %dec_label_pc_1aa0, !insn.addr !320

dec_label_pc_1aa0:                                ; preds = %dec_label_pc_1a84
  %2 = icmp eq i32 %0, 0, !insn.addr !319
  br i1 %2, label %dec_label_pc_1aec, label %dec_label_pc_1aa4, !insn.addr !321

dec_label_pc_1aa4:                                ; preds = %dec_label_pc_1aa0
  %3 = call i32 @waitpid(i32 %0, i32* nonnull %stack_var_-12, i32 0), !insn.addr !322
  %4 = icmp slt i32 %3, 0, !insn.addr !323
  br i1 %4, label %dec_label_pc_1ad4.thread, label %dec_label_pc_1ab8, !insn.addr !324

dec_label_pc_1ab8:                                ; preds = %dec_label_pc_1aa4
  %5 = load i32, i32* %stack_var_-12, align 4, !insn.addr !325
  %6 = urem i32 %5, 128, !insn.addr !326
  %7 = icmp eq i32 %6, 0, !insn.addr !326
  br i1 %7, label %dec_label_pc_1ad4, label %dec_label_pc_1ad4.thread, !insn.addr !327

dec_label_pc_1ad4:                                ; preds = %dec_label_pc_1ab8
  %8 = and i32 %5, 65280, !insn.addr !327
  %phitmp = icmp eq i32 %8, 0
  %spec.select2 = select i1 %phitmp, i32 42, i32 -1
  ret i32 %spec.select2

dec_label_pc_1ad4.thread:                         ; preds = %dec_label_pc_1aa4, %dec_label_pc_1ab8, %dec_label_pc_1a84
  ret i32 -1, !insn.addr !328

dec_label_pc_1aec:                                ; preds = %dec_label_pc_1aa0
  %9 = call i32 (i8*, i8*, ...) @execl(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_2fa9, i32 0, i32 0), i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_2fa9, i32 0, i32 0)), !insn.addr !329
  call void @_exit(i32 127), !insn.addr !330
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !330

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i32* %stack_var_-12, { 1, 0 }
  uselistorder label %dec_label_pc_1ad4.thread, { 1, 0, 2 }
}

define i32 @param_pipe_communication() local_unnamed_addr {
dec_label_pc_1b10:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !331
  %1 = load i32, i32* %0
  %stack_var_-24 = alloca i32, align 4
  %stack_var_-56 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-24 to i32, !insn.addr !332
  %3 = insertvalue [2 x i32] undef, i32 %2, 0, !insn.addr !333
  %4 = call i32 @pipe([2 x i32] %3), !insn.addr !333
  %5 = icmp slt i32 %4, 0, !insn.addr !334
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !335
  br i1 %5, label %dec_label_pc_1b8c, label %dec_label_pc_1b28, !insn.addr !335

dec_label_pc_1b28:                                ; preds = %dec_label_pc_1b10
  %6 = call i32 @fork(), !insn.addr !336
  %7 = icmp slt i32 %6, 0, !insn.addr !337
  store i32 -2, i32* %r0.0.reg2mem, !insn.addr !338
  br i1 %7, label %dec_label_pc_1b8c, label %dec_label_pc_1b34, !insn.addr !338

dec_label_pc_1b34:                                ; preds = %dec_label_pc_1b28
  %8 = icmp eq i32 %6, 0, !insn.addr !337
  br i1 %8, label %dec_label_pc_1b98, label %dec_label_pc_1b38, !insn.addr !339

dec_label_pc_1b38:                                ; preds = %dec_label_pc_1b34
  %9 = call i32 @close(i32 %1), !insn.addr !340
  %10 = load i32, i32* %stack_var_-24, align 4, !insn.addr !341
  %11 = ptrtoint i32* %stack_var_-56 to i32, !insn.addr !342
  %12 = call i32 @read(i32 %10, i32* nonnull %stack_var_-56, i32 31), !insn.addr !343
  %13 = add i32 %12, %11, !insn.addr !344
  %14 = inttoptr i32 %13 to i8*, !insn.addr !344
  store i8 0, i8* %14, align 1, !insn.addr !344
  %15 = load i32, i32* %stack_var_-24, align 4, !insn.addr !345
  %16 = call i32 @close(i32 %15), !insn.addr !346
  %17 = call i32 @wait(i32 0), !insn.addr !347
  %18 = icmp sgt i32 %12, 0, !insn.addr !348
  %spec.select = select i1 %18, i32 42, i32 -3
  store i32 %spec.select, i32* %r0.0.reg2mem, !insn.addr !349
  br label %dec_label_pc_1b8c, !insn.addr !349

dec_label_pc_1b8c:                                ; preds = %dec_label_pc_1b28, %dec_label_pc_1b10, %dec_label_pc_1b38
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !350

dec_label_pc_1b98:                                ; preds = %dec_label_pc_1b34
  %19 = load i32, i32* %stack_var_-24, align 4, !insn.addr !351
  %20 = call i32 @close(i32 %19), !insn.addr !352
  %21 = call i32 @write(i32 %1, i32* bitcast ([10 x i8]* @global_var_2fb3 to i32*), i32 9), !insn.addr !353
  %22 = call i32 @close(i32 %1), !insn.addr !354
  call void @_exit(i32 0), !insn.addr !355
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !355

; uselistorder directives
  uselistorder i32 %12, { 1, 0 }
  uselistorder i32* %r0.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder label %dec_label_pc_1b8c, { 2, 0, 1 }
}

define i32 @call_pipe_communication() local_unnamed_addr {
dec_label_pc_1bc8:
  %0 = call i32 @param_pipe_communication(), !insn.addr !356
  ret i32 %0, !insn.addr !357
}

define i32 @param_socket_create() local_unnamed_addr {
dec_label_pc_1bd8:
  %r0.0.reg2mem = alloca i32, !insn.addr !358
  %stack_var_-36 = alloca i32, align 4
  %stack_var_-20 = alloca i32, align 4
  %0 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !359
  %1 = icmp slt i32 %0, 0, !insn.addr !360
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !361
  br i1 %1, label %dec_label_pc_1ca4, label %dec_label_pc_1bfc, !insn.addr !361

dec_label_pc_1bfc:                                ; preds = %dec_label_pc_1bd8
  store i32 1, i32* %stack_var_-20, align 4, !insn.addr !362
  %2 = call i32 @setsockopt(i32 %0, i32 1, i32 2, i32* nonnull %stack_var_-20, i32 4), !insn.addr !363
  %3 = add i32 %2, 1, !insn.addr !364
  %4 = icmp slt i32 %3, 1, !insn.addr !365
  br i1 %4, label %dec_label_pc_1c88, label %dec_label_pc_1c2c, !insn.addr !365

dec_label_pc_1c2c:                                ; preds = %dec_label_pc_1bfc
  store i32 2, i32* %stack_var_-36, align 4, !insn.addr !366
  %5 = bitcast i32* %stack_var_-36 to %sockaddr*, !insn.addr !367
  %6 = call i32 @bind(i32 %0, %sockaddr* nonnull %5, i32 16), !insn.addr !367
  %7 = add i32 %6, 1, !insn.addr !368
  %8 = icmp slt i32 %7, 1, !insn.addr !369
  br i1 %8, label %dec_label_pc_1c98, label %dec_label_pc_1c58, !insn.addr !369

dec_label_pc_1c58:                                ; preds = %dec_label_pc_1c2c
  %9 = call i32 @listen(i32 %0, i32 5), !insn.addr !370
  %10 = call i32 @close(i32 %0), !insn.addr !371
  %11 = icmp slt i32 %9, 0, !insn.addr !372
  %spec.select = select i1 %11, i32 -4, i32 42
  store i32 %spec.select, i32* %r0.0.reg2mem, !insn.addr !373
  br label %dec_label_pc_1ca4, !insn.addr !373

dec_label_pc_1c88:                                ; preds = %dec_label_pc_1bfc
  %12 = call i32 @close(i32 %0), !insn.addr !374
  store i32 -2, i32* %r0.0.reg2mem, !insn.addr !375
  br label %dec_label_pc_1ca4, !insn.addr !375

dec_label_pc_1c98:                                ; preds = %dec_label_pc_1c2c
  %13 = call i32 @close(i32 %0), !insn.addr !376
  store i32 -3, i32* %r0.0.reg2mem, !insn.addr !377
  br label %dec_label_pc_1ca4, !insn.addr !377

dec_label_pc_1ca4:                                ; preds = %dec_label_pc_1bd8, %dec_label_pc_1c98, %dec_label_pc_1c88, %dec_label_pc_1c58
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !378

; uselistorder directives
  uselistorder i32 %0, { 0, 4, 1, 2, 3, 5, 6 }
  uselistorder i32* %r0.0.reg2mem, { 0, 3, 4, 2, 1 }
  uselistorder label %dec_label_pc_1ca4, { 1, 2, 3, 0 }
}

define i32 @call_socket_create() local_unnamed_addr {
dec_label_pc_1cb0:
  %0 = call i32 @param_socket_create(), !insn.addr !379
  ret i32 %0, !insn.addr !380
}

define i32 @param_shmget_shmat() local_unnamed_addr {
dec_label_pc_1cc0:
  %r4.0.reg2mem = alloca i32, !insn.addr !381
  %0 = call i32 (i8*, i32, ...) @open(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_2fbd, i32 0, i32 0), i32 66), !insn.addr !382
  %1 = icmp slt i32 %0, 0, !insn.addr !383
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !384
  br i1 %1, label %dec_label_pc_1d7c, label %dec_label_pc_1ce8, !insn.addr !384

dec_label_pc_1ce8:                                ; preds = %dec_label_pc_1cc0
  %2 = call i32 @close(i32 %0), !insn.addr !385
  %3 = call i32 @ftok(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_2fbd, i32 0, i32 0), i32 42), !insn.addr !386
  %4 = icmp slt i32 %3, 0, !insn.addr !387
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !388
  br i1 %4, label %dec_label_pc_1d7c, label %dec_label_pc_1d04, !insn.addr !388

dec_label_pc_1d04:                                ; preds = %dec_label_pc_1ce8
  %5 = call i32 @shmget(i32 %3, i32 4096, i32 ptrtoint (i32* @global_var_3b6 to i32)), !insn.addr !389
  %6 = icmp slt i32 %5, 0, !insn.addr !390
  store i32 -2, i32* %r4.0.reg2mem, !insn.addr !391
  br i1 %6, label %dec_label_pc_1d7c, label %dec_label_pc_1d1c, !insn.addr !391

dec_label_pc_1d1c:                                ; preds = %dec_label_pc_1d04
  %7 = call i32* @shmat(i32 %5, i32* null, i32 0), !insn.addr !392
  %8 = icmp eq i32* %7, inttoptr (i32 -1 to i32*), !insn.addr !393
  store i32 -3, i32* %r4.0.reg2mem, !insn.addr !394
  br i1 %8, label %dec_label_pc_1d7c, label %dec_label_pc_1d34, !insn.addr !394

dec_label_pc_1d34:                                ; preds = %dec_label_pc_1d1c
  %9 = call i32* @memcpy(i32* %7, i32* bitcast ([13 x i8]* @global_var_2dd0 to i32*), i32 13), !insn.addr !395
  %10 = bitcast i32* %7 to i8*, !insn.addr !396
  %11 = call i32 @strlen(i8* %10), !insn.addr !396
  %12 = call i32 @shmdt(i32* %7), !insn.addr !397
  %13 = call i32 @shmctl(i32 %5, i32 0, %shmid_ds* null), !insn.addr !398
  store i32 %11, i32* %r4.0.reg2mem, !insn.addr !399
  br label %dec_label_pc_1d7c, !insn.addr !399

dec_label_pc_1d7c:                                ; preds = %dec_label_pc_1d1c, %dec_label_pc_1d04, %dec_label_pc_1d34, %dec_label_pc_1ce8, %dec_label_pc_1cc0
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !400

; uselistorder directives
  uselistorder i32* %7, { 1, 0, 2, 3 }
  uselistorder i32* %r4.0.reg2mem, { 0, 3, 1, 2, 4, 5 }
  uselistorder i32 (i8*)* @strlen, { 4, 3, 2, 1, 0, 5 }
  uselistorder i32* (i32*, i32*, i32)* @memcpy, { 1, 0, 2 }
  uselistorder i32 (i32)* @close, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder label %dec_label_pc_1d7c, { 2, 0, 1, 3, 4 }
}

define i32 @call_shmget_shmat() local_unnamed_addr {
dec_label_pc_1d94:
  %0 = call i32 @param_shmget_shmat(), !insn.addr !401
  %1 = icmp sgt i32 %0, 0, !insn.addr !402
  %spec.select = select i1 %1, i32 42, i32 -1
  ret i32 %spec.select, !insn.addr !403
}

define i32 @param_signal_handling(i32 %arg1) local_unnamed_addr {
dec_label_pc_1db4:
  %.reg2mem = alloca i32, !insn.addr !404
  %r4.1.reg2mem = alloca i32, !insn.addr !404
  %r5.0.reg2mem = alloca i32, !insn.addr !404
  %merge.reg2mem = alloca i32, !insn.addr !404
  %0 = call void (i32)* @signal(i32 10, void (i32)* inttoptr (i32 7976 to void (i32)*)), !insn.addr !405
  %1 = ptrtoint void (i32)* %0 to i32, !insn.addr !405
  %2 = icmp eq void (i32)* %0, inttoptr (i32 -1 to void (i32)*), !insn.addr !406
  store i32 %1, i32* %merge.reg2mem, !insn.addr !407
  br i1 %2, label %dec_label_pc_1ef4, label %dec_label_pc_1dd8, !insn.addr !407

dec_label_pc_1ef4:                                ; preds = %dec_label_pc_1e3c, %dec_label_pc_1eac, %dec_label_pc_1ed8, %dec_label_pc_1e5c, %dec_label_pc_1eb4, %dec_label_pc_1dd8, %dec_label_pc_1db4
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !407

dec_label_pc_1dd8:                                ; preds = %dec_label_pc_1db4
  %3 = call void (i32)* @signal(i32 14, void (i32)* inttoptr (i32 7976 to void (i32)*)), !insn.addr !408
  %4 = icmp eq void (i32)* %3, inttoptr (i32 -1 to void (i32)*), !insn.addr !409
  store i32 -2, i32* %merge.reg2mem, !insn.addr !410
  br i1 %4, label %dec_label_pc_1ef4, label %dec_label_pc_1df8, !insn.addr !410

dec_label_pc_1df8:                                ; preds = %dec_label_pc_1dd8
  store i32 0, i32* @global_var_14138, align 4, !insn.addr !411
  %5 = call i32 @raise(i32 10), !insn.addr !412
  %6 = load i32, i32* @global_var_14138, align 4
  %7 = icmp eq i32 %6, 0, !insn.addr !413
  store i32 ptrtoint (i32* @global_var_3e8 to i32), i32* %r5.0.reg2mem, !insn.addr !414
  br i1 %7, label %dec_label_pc_1e24, label %dec_label_pc_1e5c, !insn.addr !414

dec_label_pc_1e24:                                ; preds = %dec_label_pc_1df8, %dec_label_pc_1e3c
  %8 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !415
  %9 = load i32, i32* @global_var_14138, align 4
  %10 = icmp eq i32 %9, 0, !insn.addr !416
  br i1 %10, label %dec_label_pc_1e3c, label %dec_label_pc_1e5c, !insn.addr !417

dec_label_pc_1e3c:                                ; preds = %dec_label_pc_1e24
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %11 = add i32 %r5.0.reload, -1, !insn.addr !418
  %12 = icmp eq i32 %r5.0.reload, 0, !insn.addr !418
  %13 = icmp ne i1 %12, true, !insn.addr !418
  %14 = icmp eq i32 %r5.0.reload, 1, !insn.addr !418
  %15 = icmp ne i1 %14, true, !insn.addr !419
  %16 = icmp eq i1 %13, %15, !insn.addr !419
  store i32 -3, i32* %merge.reg2mem, !insn.addr !419
  store i32 %11, i32* %r5.0.reg2mem, !insn.addr !419
  br i1 %16, label %dec_label_pc_1e24, label %dec_label_pc_1ef4, !insn.addr !419

dec_label_pc_1e5c:                                ; preds = %dec_label_pc_1e24, %dec_label_pc_1df8
  %17 = load i32, i32* @global_var_1413c, align 4, !insn.addr !420
  %18 = icmp eq i32 %17, 10, !insn.addr !421
  store i32 -4, i32* %merge.reg2mem, !insn.addr !422
  br i1 %18, label %dec_label_pc_1e70, label %dec_label_pc_1ef4, !insn.addr !422

dec_label_pc_1e70:                                ; preds = %dec_label_pc_1e5c
  store i32 0, i32* @global_var_14138, align 4, !insn.addr !423
  %19 = call i32 @alarm(i32 1), !insn.addr !424
  %20 = load i32, i32* @global_var_14138, align 4, !insn.addr !425
  %21 = icmp eq i32 %20, 0, !insn.addr !426
  store i32 ptrtoint ([5 x i8]* @global_var_7d0 to i32), i32* %r4.1.reg2mem, !insn.addr !427
  store i32 %20, i32* %.reg2mem, !insn.addr !427
  br i1 %21, label %dec_label_pc_1e94, label %dec_label_pc_1eb4, !insn.addr !427

dec_label_pc_1e94:                                ; preds = %dec_label_pc_1e70, %dec_label_pc_1eac
  %22 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !428
  %23 = load i32, i32* @global_var_14138, align 4, !insn.addr !429
  %24 = icmp eq i32 %23, 0, !insn.addr !430
  store i32 %23, i32* %.reg2mem, !insn.addr !431
  br i1 %24, label %dec_label_pc_1eac, label %dec_label_pc_1eb4, !insn.addr !431

dec_label_pc_1eac:                                ; preds = %dec_label_pc_1e94
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %25 = add i32 %r4.1.reload, -1, !insn.addr !432
  %26 = icmp eq i32 %r4.1.reload, 0, !insn.addr !432
  %27 = icmp ne i1 %26, true, !insn.addr !432
  %28 = icmp eq i32 %r4.1.reload, 1, !insn.addr !432
  %29 = icmp ne i1 %28, true, !insn.addr !433
  %30 = icmp eq i1 %27, %29, !insn.addr !433
  store i32 -5, i32* %merge.reg2mem, !insn.addr !433
  store i32 %25, i32* %r4.1.reg2mem, !insn.addr !433
  br i1 %30, label %dec_label_pc_1e94, label %dec_label_pc_1ef4, !insn.addr !433

dec_label_pc_1eb4:                                ; preds = %dec_label_pc_1e94, %dec_label_pc_1e70
  %.reload = load i32, i32* %.reg2mem, !insn.addr !434
  %31 = icmp ne i32 %.reload, 0, !insn.addr !435
  %32 = load i32, i32* @global_var_1413c, align 4, !insn.addr !436
  %33 = icmp eq i32 %32, 14, !insn.addr !437
  %or.cond = icmp eq i1 %31, %33
  store i32 -5, i32* %merge.reg2mem, !insn.addr !438
  br i1 %or.cond, label %dec_label_pc_1ed8, label %dec_label_pc_1ef4, !insn.addr !438

dec_label_pc_1ed8:                                ; preds = %dec_label_pc_1eb4
  %34 = call void (i32)* @signal(i32 10, void (i32)* null), !insn.addr !439
  %35 = call void (i32)* @signal(i32 14, void (i32)* null), !insn.addr !440
  store i32 42, i32* %merge.reg2mem, !insn.addr !441
  br label %dec_label_pc_1ef4, !insn.addr !441

; uselistorder directives
  uselistorder i32 %r4.1.reload, { 2, 0, 1 }
  uselistorder i32 %r5.0.reload, { 2, 0, 1 }
  uselistorder i32* %merge.reg2mem, { 5, 4, 2, 3, 1, 6, 0, 7 }
  uselistorder i32* %r5.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.1.reg2mem, { 2, 0, 1 }
  uselistorder i32 -5, { 1, 0 }
  uselistorder i32 14, { 1, 0, 2 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i32 10, { 0, 3, 1, 2, 4, 5, 6 }
  uselistorder label %dec_label_pc_1e94, { 1, 0 }
  uselistorder label %dec_label_pc_1e24, { 1, 0 }
  uselistorder label %dec_label_pc_1ef4, { 2, 4, 1, 3, 0, 5, 6 }
}

define i32 @signal_handler(i32 %arg1) local_unnamed_addr {
dec_label_pc_1f28:
  store i32 1, i32* @global_var_14138, align 4, !insn.addr !442
  store i32 %arg1, i32* @global_var_1413c, align 4, !insn.addr !443
  ret i32 %arg1, !insn.addr !444

; uselistorder directives
  uselistorder i32* @global_var_1413c, { 1, 0, 2 }
  uselistorder i32* @global_var_14138, { 1, 3, 4, 0, 5, 6, 2 }
  uselistorder i32 %arg1, { 1, 0 }
}

define i32 @call_signal_handling() local_unnamed_addr {
dec_label_pc_1f50:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @param_signal_handling(i32 %1), !insn.addr !445
  ret i32 %2, !insn.addr !446
}

define i32 @test_system_calls() local_unnamed_addr {
dec_label_pc_1f60:
  %stack_var_-104 = alloca i32, align 4
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_316a to i8*)), !insn.addr !447
  %1 = call i32 (i32, ...) @syscall(i32 5), !insn.addr !448
  %2 = add i32 %1, 1, !insn.addr !449
  %3 = icmp slt i32 %2, 1, !insn.addr !450
  br i1 %3, label %dec_label_pc_1fa4, label %dec_label_pc_1f90, !insn.addr !450

dec_label_pc_1f90:                                ; preds = %dec_label_pc_1f60
  %4 = call i32 (i32, ...) @syscall(i32 6), !insn.addr !451
  br label %dec_label_pc_1fb0, !insn.addr !452

dec_label_pc_1fa4:                                ; preds = %dec_label_pc_1f60
  %5 = call i32* @__errno_location(), !insn.addr !453
  br label %dec_label_pc_1fb0, !insn.addr !454

dec_label_pc_1fb0:                                ; preds = %dec_label_pc_1fa4, %dec_label_pc_1f90
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2fcf to i8*)), !insn.addr !455
  %7 = bitcast i32* %stack_var_-104 to %stat*, !insn.addr !456
  %8 = call i32 @stat(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_2e22, i32 0, i32 0), %stat* nonnull %7), !insn.addr !456
  %9 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2feb to i8*)), !insn.addr !457
  %10 = call i32 @fork(), !insn.addr !458
  %11 = icmp slt i32 %10, 0, !insn.addr !459
  br i1 %11, label %dec_label_pc_2044, label %dec_label_pc_2010, !insn.addr !460

dec_label_pc_2010:                                ; preds = %dec_label_pc_1fb0
  %12 = icmp eq i32 %10, 0, !insn.addr !459
  br i1 %12, label %dec_label_pc_20c0, label %dec_label_pc_2014, !insn.addr !461

dec_label_pc_2014:                                ; preds = %dec_label_pc_2010
  %13 = call i32 @waitpid(i32 %10, i32* nonnull %stack_var_-104, i32 0), !insn.addr !462
  br label %dec_label_pc_2044

dec_label_pc_2044:                                ; preds = %dec_label_pc_2014, %dec_label_pc_1fb0
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3007 to i8*)), !insn.addr !463
  %15 = call i32 @param_pipe_communication(), !insn.addr !464
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3023 to i8*)), !insn.addr !465
  %17 = call i32 @param_socket_create(), !insn.addr !466
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_303f to i8*)), !insn.addr !467
  %19 = call i32 @param_shmget_shmat(), !insn.addr !468
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_305b to i8*)), !insn.addr !469
  %21 = call i32 @param_signal_handling(i32 %20), !insn.addr !470
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3077 to i8*)), !insn.addr !471
  ret i32 %22, !insn.addr !472

dec_label_pc_20c0:                                ; preds = %dec_label_pc_2010
  %23 = call i32 (i8*, i8*, ...) @execl(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_2fa9, i32 0, i32 0), i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_2fa9, i32 0, i32 0)), !insn.addr !473
  call void @_exit(i32 127), !insn.addr !474
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !474

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
dec_label_pc_210c:
  %0 = mul i32 %arg1, %arg1, !insn.addr !475
  %1 = call i32* @malloc(i32 4), !insn.addr !476
  %2 = ptrtoint i32* %1 to i32, !insn.addr !476
  store i32 %0, i32* %1, align 4, !insn.addr !477
  ret i32 %2, !insn.addr !478

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0 }
}

define i32 @param_pthread_create(i32 %arg1) local_unnamed_addr {
dec_label_pc_212c:
  %r4.0.reg2mem = alloca i32, !insn.addr !479
  %stack_var_-20 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  store i32 %arg1, i32* %stack_var_-16, align 4, !insn.addr !480
  %0 = call i32 @pthread_create(i32* nonnull %stack_var_-12, i32* null, i32* (i32*)* bitcast (i32* (i32*)** @global_var_210c to i32* (i32*)*), i32* nonnull %stack_var_-16), !insn.addr !481
  %1 = icmp eq i32 %0, 0, !insn.addr !482
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !483
  br i1 %1, label %dec_label_pc_215c, label %dec_label_pc_2174, !insn.addr !483

dec_label_pc_215c:                                ; preds = %dec_label_pc_212c
  %2 = load i32, i32* %stack_var_-12, align 4, !insn.addr !484
  %3 = bitcast i32* %stack_var_-20 to i32**, !insn.addr !485
  %4 = call i32 @pthread_join(i32 %2, i32** nonnull %3), !insn.addr !485
  %5 = load i32, i32* %stack_var_-20, align 4, !insn.addr !486
  %6 = inttoptr i32 %5 to i32*, !insn.addr !487
  %7 = load i32, i32* %6, align 4, !insn.addr !487
  call void @free(i32* %6), !insn.addr !488
  store i32 %7, i32* %r4.0.reg2mem, !insn.addr !488
  br label %dec_label_pc_2174, !insn.addr !488

dec_label_pc_2174:                                ; preds = %dec_label_pc_212c, %dec_label_pc_215c
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !489

; uselistorder directives
  uselistorder i32* %stack_var_-12, { 1, 0 }
  uselistorder i32* %stack_var_-20, { 1, 0 }
  uselistorder i32* %r4.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2174, { 1, 0 }
}

define i32 @call_pthread_create() local_unnamed_addr {
dec_label_pc_2188:
  %r4.0.reg2mem = alloca i32, !insn.addr !490
  %stack_var_-20 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  store i32 7, i32* %stack_var_-16, align 4, !insn.addr !491
  %0 = call i32 @pthread_create(i32* nonnull %stack_var_-12, i32* null, i32* (i32*)* bitcast (i32* (i32*)** @global_var_210c to i32* (i32*)*), i32* nonnull %stack_var_-16), !insn.addr !492
  %1 = icmp eq i32 %0, 0, !insn.addr !493
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !494
  br i1 %1, label %dec_label_pc_21bc, label %dec_label_pc_21d4, !insn.addr !494

dec_label_pc_21bc:                                ; preds = %dec_label_pc_2188
  %2 = load i32, i32* %stack_var_-12, align 4, !insn.addr !495
  %3 = bitcast i32* %stack_var_-20 to i32**, !insn.addr !496
  %4 = call i32 @pthread_join(i32 %2, i32** nonnull %3), !insn.addr !496
  %5 = load i32, i32* %stack_var_-20, align 4, !insn.addr !497
  %6 = inttoptr i32 %5 to i32*, !insn.addr !498
  %7 = load i32, i32* %6, align 4, !insn.addr !498
  call void @free(i32* %6), !insn.addr !499
  store i32 %7, i32* %r4.0.reg2mem, !insn.addr !499
  br label %dec_label_pc_21d4, !insn.addr !499

dec_label_pc_21d4:                                ; preds = %dec_label_pc_2188, %dec_label_pc_21bc
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !500

; uselistorder directives
  uselistorder i32* %stack_var_-12, { 1, 0 }
  uselistorder i32* %stack_var_-20, { 1, 0 }
  uselistorder i32* %r4.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_21d4, { 1, 0 }
}

define i32 @thread_sum(i32 %arg1) local_unnamed_addr {
dec_label_pc_21e8:
  %0 = add i32 %arg1, 8, !insn.addr !501
  %1 = inttoptr i32 %0 to i32*, !insn.addr !501
  store i32 0, i32* %1, align 4, !insn.addr !501
  %2 = add i32 %arg1, 4, !insn.addr !502
  %3 = inttoptr i32 %2 to i32*, !insn.addr !502
  %4 = load i32, i32* %3, align 4, !insn.addr !502
  %5 = icmp slt i32 %4, %arg1, !insn.addr !503
  br i1 %5, label %dec_label_pc_2234, label %dec_label_pc_2200, !insn.addr !503

dec_label_pc_2200:                                ; preds = %dec_label_pc_21e8
  %6 = sub i32 %4, %arg1, !insn.addr !504
  %7 = sub i32 0, %arg1
  %8 = sub i32 %7, 1
  %9 = add i32 %4, %8, !insn.addr !505
  %10 = zext i32 %9 to i64, !insn.addr !506
  %11 = zext i32 %6 to i64, !insn.addr !506
  %12 = mul nuw i64 %10, %11, !insn.addr !506
  %13 = trunc i64 %12 to i32, !insn.addr !506
  %14 = urem i64 %12, 4294967297
  %15 = icmp ne i64 %14, 0, !insn.addr !507
  %16 = zext i1 %15 to i32, !insn.addr !508
  %17 = and i64 %12, 4294967295, !insn.addr !508
  %18 = sub i32 33, %13, !insn.addr !508
  %19 = zext i32 %18 to i64, !insn.addr !508
  %20 = shl i64 %17, %19, !insn.addr !508
  %21 = sub i32 32, %13, !insn.addr !508
  %22 = shl i32 %16, %21, !insn.addr !508
  %23 = trunc i64 %20 to i32
  %24 = or i32 %22, %23, !insn.addr !508
  %25 = add i32 %arg1, 1, !insn.addr !509
  %26 = mul i32 %6, %25, !insn.addr !510
  %27 = add i32 %26, %arg1, !insn.addr !510
  %28 = add i32 %27, %24, !insn.addr !511
  store i32 %28, i32* %1, align 4, !insn.addr !512
  br label %dec_label_pc_2234, !insn.addr !512

dec_label_pc_2234:                                ; preds = %dec_label_pc_2200, %dec_label_pc_21e8
  ret i32 0, !insn.addr !513

; uselistorder directives
  uselistorder i32 %13, { 1, 0 }
  uselistorder i64 %12, { 1, 0, 2 }
  uselistorder i32 %arg1, { 1, 3, 0, 2, 4, 6, 5 }
}

define i32 @param_pthread_join() local_unnamed_addr {
dec_label_pc_2240:
  %r4.2.reg2mem = alloca i32, !insn.addr !514
  %r7.1.reg2mem = alloca i32, !insn.addr !514
  %r4.1.reg2mem = alloca i32, !insn.addr !514
  %r7.0.reg2mem = alloca i32, !insn.addr !514
  %r4.0.reg2mem = alloca i32, !insn.addr !514
  %stack_var_-64 = alloca i32, align 4
  %stack_var_-36 = alloca i32, align 4
  %stack_var_-72 = alloca i32, align 4
  %0 = ptrtoint i32* %stack_var_-72 to i32, !insn.addr !515
  %1 = call i32* @memset(i32* nonnull %stack_var_-72, i32 0, i32 36), !insn.addr !516
  store i32 1, i32* %stack_var_-72, align 4, !insn.addr !517
  %2 = ptrtoint i32* %stack_var_-36 to i32, !insn.addr !518
  store i32 %0, i32* %r4.0.reg2mem, !insn.addr !519
  store i32 0, i32* %r7.0.reg2mem, !insn.addr !519
  br label %dec_label_pc_229c, !insn.addr !519

dec_label_pc_229c:                                ; preds = %dec_label_pc_22b8, %dec_label_pc_2240
  %r7.0.reload = load i32, i32* %r7.0.reg2mem
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %3 = add i32 %r7.0.reload, %2, !insn.addr !520
  %4 = inttoptr i32 %3 to i32*, !insn.addr !521
  %5 = inttoptr i32 %r4.0.reload to i32*, !insn.addr !521
  %6 = call i32 @pthread_create(i32* %4, i32* null, i32* (i32*)* inttoptr (i32 8680 to i32* (i32*)*), i32* %5), !insn.addr !521
  %7 = icmp eq i32 %6, 0, !insn.addr !522
  store i32 -1, i32* %r4.2.reg2mem, !insn.addr !523
  br i1 %7, label %dec_label_pc_22b8, label %dec_label_pc_2314, !insn.addr !523

dec_label_pc_22b8:                                ; preds = %dec_label_pc_229c
  %8 = add i32 %r4.0.reload, 12, !insn.addr !524
  %9 = add nuw nsw i32 %r7.0.reload, 4, !insn.addr !525
  %10 = icmp eq i32 %9, 12, !insn.addr !526
  store i32 %8, i32* %r4.0.reg2mem, !insn.addr !527
  store i32 %9, i32* %r7.0.reg2mem, !insn.addr !527
  br i1 %10, label %dec_label_pc_22c8, label %dec_label_pc_229c, !insn.addr !527

dec_label_pc_22c8:                                ; preds = %dec_label_pc_22b8
  %11 = ptrtoint i32* %stack_var_-64 to i32, !insn.addr !528
  store i32 0, i32* %r4.1.reg2mem, !insn.addr !529
  store i32 0, i32* %r7.1.reg2mem, !insn.addr !529
  br label %dec_label_pc_22d8, !insn.addr !529

dec_label_pc_22d8:                                ; preds = %dec_label_pc_22ec, %dec_label_pc_22c8
  %r7.1.reload = load i32, i32* %r7.1.reg2mem
  %12 = add i32 %r7.1.reload, %2, !insn.addr !530
  %13 = inttoptr i32 %12 to i32*, !insn.addr !530
  %14 = load i32, i32* %13, align 4, !insn.addr !530
  %15 = call i32 @pthread_join(i32 %14, i32** null), !insn.addr !531
  %16 = icmp eq i32 %15, 0, !insn.addr !532
  store i32 -2, i32* %r4.2.reg2mem, !insn.addr !533
  br i1 %16, label %dec_label_pc_22ec, label %dec_label_pc_2314, !insn.addr !533

dec_label_pc_22ec:                                ; preds = %dec_label_pc_22d8
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %17 = mul nsw i32 %r7.1.reload, -3, !insn.addr !534
  %18 = add i32 %17, %11, !insn.addr !535
  %19 = inttoptr i32 %18 to i32*, !insn.addr !535
  %20 = load i32, i32* %19, align 4, !insn.addr !535
  %21 = add i32 %20, %r4.1.reload, !insn.addr !536
  %22 = add nsw i32 %r7.1.reload, -4, !insn.addr !537
  %23 = icmp eq i32 %r7.1.reload, -8, !insn.addr !538
  store i32 %21, i32* %r4.1.reg2mem, !insn.addr !539
  store i32 %22, i32* %r7.1.reg2mem, !insn.addr !539
  store i32 %21, i32* %r4.2.reg2mem, !insn.addr !539
  br i1 %23, label %dec_label_pc_2314, label %dec_label_pc_22d8, !insn.addr !539

dec_label_pc_2314:                                ; preds = %dec_label_pc_229c, %dec_label_pc_22d8, %dec_label_pc_22ec
  %r4.2.reload = load i32, i32* %r4.2.reg2mem
  ret i32 %r4.2.reload, !insn.addr !540

; uselistorder directives
  uselistorder i32 %r7.1.reload, { 1, 2, 0, 3 }
  uselistorder i32 %r4.0.reload, { 1, 0 }
  uselistorder i32* %stack_var_-72, { 1, 0, 2 }
  uselistorder i32* %r4.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r7.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r7.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.2.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_2314, { 2, 1, 0 }
}

define i32 @call_pthread_join() local_unnamed_addr {
dec_label_pc_2328:
  %r4.2.reg2mem = alloca i32, !insn.addr !541
  %r7.1.reg2mem = alloca i32, !insn.addr !541
  %r4.1.reg2mem = alloca i32, !insn.addr !541
  %r7.0.reg2mem = alloca i32, !insn.addr !541
  %r4.0.reg2mem = alloca i32, !insn.addr !541
  %stack_var_-64 = alloca i32, align 4
  %stack_var_-36 = alloca i32, align 4
  %stack_var_-72 = alloca i32, align 4
  %0 = ptrtoint i32* %stack_var_-72 to i32, !insn.addr !542
  %1 = call i32* @memset(i32* nonnull %stack_var_-72, i32 0, i32 36), !insn.addr !543
  store i32 1, i32* %stack_var_-72, align 4, !insn.addr !544
  %2 = ptrtoint i32* %stack_var_-36 to i32, !insn.addr !545
  store i32 %0, i32* %r4.0.reg2mem, !insn.addr !546
  store i32 0, i32* %r7.0.reg2mem, !insn.addr !546
  br label %dec_label_pc_2384, !insn.addr !546

dec_label_pc_2384:                                ; preds = %dec_label_pc_23a0, %dec_label_pc_2328
  %r7.0.reload = load i32, i32* %r7.0.reg2mem
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %3 = add i32 %r7.0.reload, %2, !insn.addr !547
  %4 = inttoptr i32 %3 to i32*, !insn.addr !548
  %5 = inttoptr i32 %r4.0.reload to i32*, !insn.addr !548
  %6 = call i32 @pthread_create(i32* %4, i32* null, i32* (i32*)* inttoptr (i32 8680 to i32* (i32*)*), i32* %5), !insn.addr !548
  %7 = icmp eq i32 %6, 0, !insn.addr !549
  store i32 -1, i32* %r4.2.reg2mem, !insn.addr !550
  br i1 %7, label %dec_label_pc_23a0, label %dec_label_pc_23fc, !insn.addr !550

dec_label_pc_23a0:                                ; preds = %dec_label_pc_2384
  %8 = add i32 %r4.0.reload, 12, !insn.addr !551
  %9 = add nuw nsw i32 %r7.0.reload, 4, !insn.addr !552
  %10 = icmp eq i32 %9, 12, !insn.addr !553
  store i32 %8, i32* %r4.0.reg2mem, !insn.addr !554
  store i32 %9, i32* %r7.0.reg2mem, !insn.addr !554
  br i1 %10, label %dec_label_pc_23b0, label %dec_label_pc_2384, !insn.addr !554

dec_label_pc_23b0:                                ; preds = %dec_label_pc_23a0
  %11 = ptrtoint i32* %stack_var_-64 to i32, !insn.addr !555
  store i32 0, i32* %r4.1.reg2mem, !insn.addr !556
  store i32 0, i32* %r7.1.reg2mem, !insn.addr !556
  br label %dec_label_pc_23c0, !insn.addr !556

dec_label_pc_23c0:                                ; preds = %dec_label_pc_23d4, %dec_label_pc_23b0
  %r7.1.reload = load i32, i32* %r7.1.reg2mem
  %12 = add i32 %r7.1.reload, %2, !insn.addr !557
  %13 = inttoptr i32 %12 to i32*, !insn.addr !557
  %14 = load i32, i32* %13, align 4, !insn.addr !557
  %15 = call i32 @pthread_join(i32 %14, i32** null), !insn.addr !558
  %16 = icmp eq i32 %15, 0, !insn.addr !559
  store i32 -2, i32* %r4.2.reg2mem, !insn.addr !560
  br i1 %16, label %dec_label_pc_23d4, label %dec_label_pc_23fc, !insn.addr !560

dec_label_pc_23d4:                                ; preds = %dec_label_pc_23c0
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %17 = mul nsw i32 %r7.1.reload, -3, !insn.addr !561
  %18 = add i32 %17, %11, !insn.addr !562
  %19 = inttoptr i32 %18 to i32*, !insn.addr !562
  %20 = load i32, i32* %19, align 4, !insn.addr !562
  %21 = add i32 %20, %r4.1.reload, !insn.addr !563
  %22 = add nsw i32 %r7.1.reload, -4, !insn.addr !564
  %23 = icmp eq i32 %r7.1.reload, -8, !insn.addr !565
  store i32 %21, i32* %r4.1.reg2mem, !insn.addr !566
  store i32 %22, i32* %r7.1.reg2mem, !insn.addr !566
  store i32 %21, i32* %r4.2.reg2mem, !insn.addr !566
  br i1 %23, label %dec_label_pc_23fc, label %dec_label_pc_23c0, !insn.addr !566

dec_label_pc_23fc:                                ; preds = %dec_label_pc_2384, %dec_label_pc_23c0, %dec_label_pc_23d4
  %r4.2.reload = load i32, i32* %r4.2.reg2mem
  ret i32 %r4.2.reload, !insn.addr !567

; uselistorder directives
  uselistorder i32 %r7.1.reload, { 1, 2, 0, 3 }
  uselistorder i32 %r4.0.reload, { 1, 0 }
  uselistorder i32* %stack_var_-72, { 1, 0, 2 }
  uselistorder i32* %r4.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r7.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r7.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.2.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_23fc, { 2, 1, 0 }
}

define i32 @thread_increment(i32 %arg1) local_unnamed_addr {
dec_label_pc_2410:
  %r5.0.reg2mem = alloca i32, !insn.addr !568
  %0 = icmp slt i32 %arg1, 1, !insn.addr !569
  store i32 %arg1, i32* %r5.0.reg2mem, !insn.addr !569
  br i1 %0, label %dec_label_pc_2460, label %dec_label_pc_2430, !insn.addr !569

dec_label_pc_2430:                                ; preds = %dec_label_pc_2410, %dec_label_pc_2430
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %1 = call i32 @pthread_mutex_lock(i32* nonnull @global_var_14140), !insn.addr !570
  %2 = load i32, i32* @global_var_14158, align 4, !insn.addr !571
  %3 = add i32 %2, 1, !insn.addr !572
  store i32 %3, i32* @global_var_14158, align 4, !insn.addr !573
  %4 = call i32 @pthread_mutex_unlock(i32* nonnull @global_var_14140), !insn.addr !574
  %5 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !575
  %6 = add i32 %r5.0.reload, -1, !insn.addr !576
  %7 = icmp eq i32 %r5.0.reload, 1, !insn.addr !576
  store i32 %6, i32* %r5.0.reg2mem, !insn.addr !577
  br i1 %7, label %dec_label_pc_2460, label %dec_label_pc_2430, !insn.addr !577

dec_label_pc_2460:                                ; preds = %dec_label_pc_2430, %dec_label_pc_2410
  ret i32 0, !insn.addr !578

; uselistorder directives
  uselistorder i32 %r5.0.reload, { 1, 0 }
  uselistorder i32* %r5.0.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i32)* @usleep, { 2, 1, 0, 3 }
  uselistorder label %dec_label_pc_2430, { 1, 0 }
}

define i32 @param_mutex_lock(i32 %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_2478:
  %r0.0.reg2mem = alloca i32, !insn.addr !579
  %r5.1.reg2mem = alloca i32, !insn.addr !579
  %r4.1.reg2mem = alloca i32, !insn.addr !579
  %r5.0.reg2mem = alloca i32, !insn.addr !579
  %r4.0.reg2mem = alloca i32, !insn.addr !579
  %0 = ptrtoint i32* %arg2 to i32
  %stack_var_-36 = alloca i32, align 4
  store i32 %0, i32* %stack_var_-36, align 4, !insn.addr !580
  %1 = mul i32 %arg1, 4, !insn.addr !581
  %2 = call i32* @malloc(i32 %1), !insn.addr !582
  %3 = icmp eq i32* %2, null, !insn.addr !583
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !584
  br i1 %3, label %dec_label_pc_2550, label %dec_label_pc_2498, !insn.addr !584

dec_label_pc_2498:                                ; preds = %dec_label_pc_2478
  %4 = ptrtoint i32* %2 to i32, !insn.addr !582
  store i32 0, i32* @global_var_14158, align 4, !insn.addr !585
  %5 = icmp slt i32 %arg1, 1, !insn.addr !586
  store i32 %arg1, i32* %r4.0.reg2mem, !insn.addr !586
  store i32 %4, i32* %r5.0.reg2mem, !insn.addr !586
  br i1 %5, label %dec_label_pc_2514, label %dec_label_pc_24c8, !insn.addr !586

dec_label_pc_24c8:                                ; preds = %dec_label_pc_2498, %dec_label_pc_24e4
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %6 = inttoptr i32 %r5.0.reload to i32*, !insn.addr !587
  %7 = call i32 @pthread_create(i32* %6, i32* null, i32* (i32*)* inttoptr (i32 9232 to i32* (i32*)*), i32* nonnull %stack_var_-36), !insn.addr !587
  %8 = icmp eq i32 %7, 0, !insn.addr !588
  br i1 %8, label %dec_label_pc_24e4, label %dec_label_pc_2544, !insn.addr !589

dec_label_pc_24e4:                                ; preds = %dec_label_pc_24c8
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %9 = add i32 %r5.0.reload, 4, !insn.addr !590
  %10 = add i32 %r4.0.reload, -1, !insn.addr !591
  %11 = icmp eq i32 %r4.0.reload, 1, !insn.addr !591
  store i32 %10, i32* %r4.0.reg2mem, !insn.addr !592
  store i32 %9, i32* %r5.0.reg2mem, !insn.addr !592
  store i32 %4, i32* %r4.1.reg2mem, !insn.addr !592
  store i32 %arg1, i32* %r5.1.reg2mem, !insn.addr !592
  br i1 %11, label %dec_label_pc_2500, label %dec_label_pc_24c8, !insn.addr !592

dec_label_pc_2500:                                ; preds = %dec_label_pc_24e4, %dec_label_pc_2500
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %12 = inttoptr i32 %r4.1.reload to i32*, !insn.addr !593
  %13 = load i32, i32* %12, align 4, !insn.addr !593
  %14 = add i32 %r4.1.reload, 4, !insn.addr !593
  %15 = call i32 @pthread_join(i32 %13, i32** null), !insn.addr !594
  %16 = add i32 %r5.1.reload, -1, !insn.addr !595
  %17 = icmp eq i32 %r5.1.reload, 1, !insn.addr !595
  store i32 %14, i32* %r4.1.reg2mem, !insn.addr !596
  store i32 %16, i32* %r5.1.reg2mem, !insn.addr !596
  br i1 %17, label %dec_label_pc_2514, label %dec_label_pc_2500, !insn.addr !596

dec_label_pc_2514:                                ; preds = %dec_label_pc_2500, %dec_label_pc_2498
  call void @free(i32* nonnull %2), !insn.addr !597
  %18 = load i32, i32* %stack_var_-36, align 4, !insn.addr !598
  %19 = mul i32 %18, %arg1, !insn.addr !599
  %20 = load i32, i32* @global_var_14158, align 4, !insn.addr !600
  %21 = icmp eq i32 %20, %19, !insn.addr !601
  %spec.store.select = select i1 %21, i32 42, i32 -3
  store i32 %spec.store.select, i32* %r0.0.reg2mem, !insn.addr !602
  br label %dec_label_pc_2550, !insn.addr !602

dec_label_pc_2544:                                ; preds = %dec_label_pc_24c8
  call void @free(i32* nonnull %2), !insn.addr !603
  store i32 -2, i32* %r0.0.reg2mem, !insn.addr !604
  br label %dec_label_pc_2550, !insn.addr !604

dec_label_pc_2550:                                ; preds = %dec_label_pc_2478, %dec_label_pc_2544, %dec_label_pc_2514
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !605

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
  uselistorder label %dec_label_pc_2550, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2500, { 1, 0 }
  uselistorder label %dec_label_pc_24c8, { 1, 0 }
}

define i32 @call_mutex_lock() local_unnamed_addr {
dec_label_pc_2568:
  %0 = call i32 @param_mutex_lock(i32 4, i32* nonnull @global_var_3e8), !insn.addr !606
  ret i32 %0, !insn.addr !607
}

define i32 @consumer_thread() local_unnamed_addr {
dec_label_pc_2580:
  %0 = call i32 @pthread_mutex_lock(i32* nonnull @global_var_1415c), !insn.addr !608
  %1 = load i8, i8* bitcast (i8** @global_var_14174 to i8*), align 4, !insn.addr !609
  %2 = icmp eq i8 %1, 0, !insn.addr !610
  br i1 %2, label %dec_label_pc_25b4, label %dec_label_pc_25cc, !insn.addr !611

dec_label_pc_25b4:                                ; preds = %dec_label_pc_2580, %dec_label_pc_25b4
  %3 = call i32 @pthread_cond_wait(i32* nonnull @global_var_14178, i32* nonnull @global_var_1415c), !insn.addr !612
  %4 = load i8, i8* bitcast (i8** @global_var_14174 to i8*), align 4, !insn.addr !613
  %5 = icmp eq i8 %4, 1, !insn.addr !614
  br i1 %5, label %dec_label_pc_25cc, label %dec_label_pc_25b4, !insn.addr !615

dec_label_pc_25cc:                                ; preds = %dec_label_pc_25b4, %dec_label_pc_2580
  %6 = load i8, i8* bitcast (i8** @global_var_141a8 to i8*), align 4, !insn.addr !616
  %7 = call i32 @pthread_mutex_unlock(i32* nonnull @global_var_1415c), !insn.addr !617
  %8 = icmp eq i8 %6, 0, !insn.addr !618
  %narrow = select i1 %8, i8 0, i8 42
  %spec.select = zext i8 %narrow to i32
  %9 = call i32* @malloc(i32 4), !insn.addr !619
  %10 = ptrtoint i32* %9 to i32, !insn.addr !619
  store i32 %spec.select, i32* %9, align 4, !insn.addr !620
  ret i32 %10, !insn.addr !621

; uselistorder directives
  uselistorder label %dec_label_pc_25b4, { 1, 0 }
}

define i32 @producer_thread() local_unnamed_addr {
dec_label_pc_2618:
  %0 = call i32 @sleep(i32 1), !insn.addr !622
  %1 = call i32 @pthread_mutex_lock(i32* nonnull @global_var_1415c), !insn.addr !623
  store i8 1, i8* bitcast (i8** @global_var_141a8 to i8*), align 4, !insn.addr !624
  store i8 1, i8* bitcast (i8** @global_var_14174 to i8*), align 4, !insn.addr !625
  %2 = call i32 @pthread_cond_signal(i32* nonnull @global_var_14178), !insn.addr !626
  %3 = call i32 @pthread_mutex_unlock(i32* nonnull @global_var_1415c), !insn.addr !627
  ret i32 0, !insn.addr !628

; uselistorder directives
  uselistorder i32 (i32*)* @pthread_mutex_unlock, { 2, 1, 0, 3 }
  uselistorder i32* @global_var_14178, { 1, 0 }
  uselistorder i32 (i32*)* @pthread_mutex_lock, { 2, 1, 0, 3 }
  uselistorder i32* @global_var_1415c, { 1, 2, 3, 0, 4 }
}

define i32 @param_condition_variable() local_unnamed_addr {
dec_label_pc_2680:
  %r4.0.reg2mem = alloca i32, !insn.addr !629
  %stack_var_-20 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  store i8 0, i8* bitcast (i8** @global_var_14174 to i8*), align 4, !insn.addr !630
  store i8 0, i8* bitcast (i8** @global_var_141a8 to i8*), align 4, !insn.addr !631
  %0 = call i32 @pthread_create(i32* nonnull %stack_var_-16, i32* null, i32* (i32*)* inttoptr (i32 9600 to i32* (i32*)*), i32* null), !insn.addr !632
  %1 = icmp eq i32 %0, 0, !insn.addr !633
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !634
  br i1 %1, label %dec_label_pc_26c8, label %dec_label_pc_271c, !insn.addr !634

dec_label_pc_26c8:                                ; preds = %dec_label_pc_2680
  %2 = call i32 @pthread_create(i32* nonnull %stack_var_-12, i32* null, i32* (i32*)* inttoptr (i32 9752 to i32* (i32*)*), i32* null), !insn.addr !635
  %3 = icmp eq i32 %2, 0, !insn.addr !636
  %4 = load i32, i32* %stack_var_-16, align 4
  br i1 %3, label %dec_label_pc_26f8, label %dec_label_pc_26e8, !insn.addr !637

dec_label_pc_26e8:                                ; preds = %dec_label_pc_26c8
  %5 = call i32 @pthread_cancel(i32 %4), !insn.addr !638
  store i32 -2, i32* %r4.0.reg2mem, !insn.addr !639
  br label %dec_label_pc_271c, !insn.addr !639

dec_label_pc_26f8:                                ; preds = %dec_label_pc_26c8
  %6 = bitcast i32* %stack_var_-20 to i32**, !insn.addr !640
  %7 = call i32 @pthread_join(i32 %4, i32** nonnull %6), !insn.addr !640
  %8 = load i32, i32* %stack_var_-12, align 4, !insn.addr !641
  %9 = call i32 @pthread_join(i32 %8, i32** null), !insn.addr !642
  %10 = load i32, i32* %stack_var_-20, align 4, !insn.addr !643
  %11 = inttoptr i32 %10 to i32*, !insn.addr !644
  %12 = load i32, i32* %11, align 4, !insn.addr !644
  call void @free(i32* %11), !insn.addr !645
  store i32 %12, i32* %r4.0.reg2mem, !insn.addr !645
  br label %dec_label_pc_271c, !insn.addr !645

dec_label_pc_271c:                                ; preds = %dec_label_pc_2680, %dec_label_pc_26f8, %dec_label_pc_26e8
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !646

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32* %stack_var_-16, { 1, 0 }
  uselistorder i32* %stack_var_-12, { 1, 0 }
  uselistorder i32* %stack_var_-20, { 1, 0 }
  uselistorder i32* %r4.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i8* bitcast (i8** @global_var_14174 to i8*), { 0, 1, 3, 2 }
  uselistorder i8 0, { 1, 2, 0, 3, 4, 5, 6, 7 }
  uselistorder label %dec_label_pc_271c, { 1, 2, 0 }
}

define i32 @call_condition_variable() local_unnamed_addr {
dec_label_pc_273c:
  %0 = call i32 @param_condition_variable(), !insn.addr !647
  ret i32 %0, !insn.addr !648
}

define i32 @thread_atomic_increment(i32 %arg1) local_unnamed_addr {
dec_label_pc_274c:
  %r7.0.reg2mem = alloca i32, !insn.addr !649
  %stack_var_-28 = alloca i32, align 4
  %0 = icmp slt i32 %arg1, 1, !insn.addr !650
  store i32 0, i32* %r7.0.reg2mem, !insn.addr !650
  br i1 %0, label %dec_label_pc_27ac, label %dec_label_pc_2774, !insn.addr !650

dec_label_pc_2774:                                ; preds = %dec_label_pc_274c, %dec_label_pc_2774
  %r7.0.reload = load i32, i32* %r7.0.reg2mem
  %1 = call i32 @__atomic_fetch_add_4(i32 ptrtoint (i32* @global_var_141ac to i32), i32 1, i32 5), !insn.addr !651
  store i32 %r7.0.reload, i32* %stack_var_-28, align 4, !insn.addr !652
  %2 = add i32 %r7.0.reload, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !653
  %3 = call i32 @__atomic_compare_exchange_4(i32 ptrtoint (i32* @global_var_141ac to i32), i32* nonnull %stack_var_-28, i32 %2, i32 5, i32 5, i32 %r7.0.reload), !insn.addr !654
  %4 = add nuw i32 %r7.0.reload, 1, !insn.addr !655
  %5 = icmp eq i32 %4, %arg1, !insn.addr !656
  store i32 %4, i32* %r7.0.reg2mem, !insn.addr !657
  br i1 %5, label %dec_label_pc_27ac, label %dec_label_pc_2774, !insn.addr !657

dec_label_pc_27ac:                                ; preds = %dec_label_pc_2774, %dec_label_pc_274c
  ret i32 0, !insn.addr !658

; uselistorder directives
  uselistorder i32* %r7.0.reg2mem, { 2, 0, 1 }
  uselistorder i32 ptrtoint (i32* @global_var_3e8 to i32), { 4, 1, 2, 3, 0 }
  uselistorder label %dec_label_pc_2774, { 1, 0 }
}

define i32 @thread_atomic_load_store() local_unnamed_addr {
dec_label_pc_27c0:
  %0 = call i32 @__atomic_load_4(i32 ptrtoint (i32* @global_var_141ac to i32), i32 5), !insn.addr !659
  %1 = add i32 %0, 100, !insn.addr !660
  %2 = call i32 @__atomic_store_4(i32 ptrtoint (i32* @global_var_141ac to i32), i32 %1, i32 5), !insn.addr !661
  ret i32 0, !insn.addr !662
}

define i32 @param_atomic_ops(i32 %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_27f8:
  %r0.0.reg2mem = alloca i32, !insn.addr !663
  %r6.0.reg2mem = alloca i32, !insn.addr !663
  %r4.1.reg2mem = alloca i32, !insn.addr !663
  %r5.0.reg2mem = alloca i32, !insn.addr !663
  %r4.0.reg2mem = alloca i32, !insn.addr !663
  %0 = ptrtoint i32* %arg2 to i32
  %stack_var_-36 = alloca i32, align 4
  %stack_var_-40 = alloca i32, align 4
  store i32 %0, i32* %stack_var_-36, align 4, !insn.addr !664
  %1 = mul i32 %arg1, 4, !insn.addr !665
  %2 = call i32* @malloc(i32 %1), !insn.addr !666
  %3 = icmp eq i32* %2, null, !insn.addr !667
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !668
  br i1 %3, label %dec_label_pc_2900, label %dec_label_pc_2818, !insn.addr !668

dec_label_pc_2818:                                ; preds = %dec_label_pc_27f8
  %4 = ptrtoint i32* %2 to i32, !insn.addr !666
  %5 = call i32 @__atomic_store_4(i32 ptrtoint (i32* @global_var_141ac to i32), i32 0, i32 5), !insn.addr !669
  %6 = icmp slt i32 %arg1, 1, !insn.addr !670
  store i32 %4, i32* %r4.0.reg2mem, !insn.addr !670
  store i32 %arg1, i32* %r5.0.reg2mem, !insn.addr !670
  br i1 %6, label %dec_label_pc_2874, label %dec_label_pc_284c, !insn.addr !670

dec_label_pc_284c:                                ; preds = %dec_label_pc_2818, %dec_label_pc_2868
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %7 = inttoptr i32 %r4.0.reload to i32*, !insn.addr !671
  %8 = call i32 @pthread_create(i32* %7, i32* null, i32* (i32*)* inttoptr (i32 10060 to i32* (i32*)*), i32* nonnull %stack_var_-36), !insn.addr !671
  %9 = icmp eq i32 %8, 0, !insn.addr !672
  br i1 %9, label %dec_label_pc_2868, label %dec_label_pc_28f4, !insn.addr !673

dec_label_pc_2868:                                ; preds = %dec_label_pc_284c
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %10 = add i32 %r4.0.reload, 4, !insn.addr !674
  %11 = add i32 %r5.0.reload, -1, !insn.addr !675
  %12 = icmp eq i32 %r5.0.reload, 1, !insn.addr !675
  store i32 %10, i32* %r4.0.reg2mem, !insn.addr !676
  store i32 %11, i32* %r5.0.reg2mem, !insn.addr !676
  br i1 %12, label %dec_label_pc_2874, label %dec_label_pc_284c, !insn.addr !676

dec_label_pc_2874:                                ; preds = %dec_label_pc_2868, %dec_label_pc_2818
  %13 = call i32 @pthread_create(i32* nonnull %stack_var_-40, i32* null, i32* (i32*)* inttoptr (i32 10176 to i32* (i32*)*), i32* null), !insn.addr !677
  %14 = icmp eq i32 %13, 0, !insn.addr !678
  br i1 %14, label %dec_label_pc_2894, label %dec_label_pc_28a0, !insn.addr !679

dec_label_pc_2894:                                ; preds = %dec_label_pc_2874
  %15 = load i32, i32* %stack_var_-40, align 4, !insn.addr !680
  %16 = call i32 @pthread_join(i32 %15, i32** null), !insn.addr !681
  br label %dec_label_pc_28a0, !insn.addr !681

dec_label_pc_28a0:                                ; preds = %dec_label_pc_2874, %dec_label_pc_2894
  store i32 %4, i32* %r4.1.reg2mem, !insn.addr !682
  store i32 %arg1, i32* %r6.0.reg2mem, !insn.addr !682
  br i1 %6, label %dec_label_pc_28c0, label %dec_label_pc_28ac, !insn.addr !682

dec_label_pc_28ac:                                ; preds = %dec_label_pc_28a0, %dec_label_pc_28ac
  %r6.0.reload = load i32, i32* %r6.0.reg2mem
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %17 = inttoptr i32 %r4.1.reload to i32*, !insn.addr !683
  %18 = load i32, i32* %17, align 4, !insn.addr !683
  %19 = add i32 %r4.1.reload, 4, !insn.addr !683
  %20 = call i32 @pthread_join(i32 %18, i32** null), !insn.addr !684
  %21 = add i32 %r6.0.reload, -1, !insn.addr !685
  %22 = icmp eq i32 %r6.0.reload, 1, !insn.addr !685
  store i32 %19, i32* %r4.1.reg2mem, !insn.addr !686
  store i32 %21, i32* %r6.0.reg2mem, !insn.addr !686
  br i1 %22, label %dec_label_pc_28c0, label %dec_label_pc_28ac, !insn.addr !686

dec_label_pc_28c0:                                ; preds = %dec_label_pc_28ac, %dec_label_pc_28a0
  %23 = call i32 @__atomic_load_4(i32 ptrtoint (i32* @global_var_141ac to i32), i32 5), !insn.addr !687
  call void @free(i32* nonnull %2), !insn.addr !688
  %24 = icmp sgt i32 %23, 0, !insn.addr !689
  %spec.select = select i1 %24, i32 42, i32 -3
  store i32 %spec.select, i32* %r0.0.reg2mem, !insn.addr !690
  br label %dec_label_pc_2900, !insn.addr !690

dec_label_pc_28f4:                                ; preds = %dec_label_pc_284c
  call void @free(i32* nonnull %2), !insn.addr !691
  store i32 -2, i32* %r0.0.reg2mem, !insn.addr !692
  br label %dec_label_pc_2900, !insn.addr !692

dec_label_pc_2900:                                ; preds = %dec_label_pc_27f8, %dec_label_pc_28f4, %dec_label_pc_28c0
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !693

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
  uselistorder i32 (i32, i32)* @__atomic_load_4, { 1, 0, 2 }
  uselistorder i32 (i32, i32, i32)* @__atomic_store_4, { 1, 0, 2 }
  uselistorder i32 5, { 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10 }
  uselistorder i32 ptrtoint (i32* @global_var_141ac to i32), { 2, 3, 4, 5, 1, 0 }
  uselistorder i32 %arg1, { 0, 1, 3, 2 }
  uselistorder label %dec_label_pc_2900, { 1, 2, 0 }
  uselistorder label %dec_label_pc_28ac, { 1, 0 }
  uselistorder label %dec_label_pc_28a0, { 1, 0 }
  uselistorder label %dec_label_pc_284c, { 1, 0 }
}

define i32 @call_atomic_ops() local_unnamed_addr {
dec_label_pc_291c:
  %0 = call i32 @param_atomic_ops(i32 4, i32* nonnull @global_var_1f4), !insn.addr !694
  ret i32 %0, !insn.addr !695
}

define i32 @thread_tls_test(i32 %arg1) local_unnamed_addr {
dec_label_pc_2934:
  %0 = call i32 @__aeabi_read_tp(), !insn.addr !696
  %1 = add i32 %0, 8, !insn.addr !697
  %2 = inttoptr i32 %1 to i32*, !insn.addr !697
  %3 = load i32, i32* %2, align 4, !insn.addr !697
  %4 = add i32 %3, 50, !insn.addr !698
  store i32 %4, i32* %2, align 4, !insn.addr !699
  %5 = add i32 %0, 12, !insn.addr !700
  %6 = inttoptr i32 %5 to i8*, !insn.addr !701
  %7 = inttoptr i32 %arg1 to i8*, !insn.addr !701
  %8 = call i8* @strncpy(i8* %6, i8* %7, i32 31), !insn.addr !701
  %9 = call i32* @malloc(i32 8), !insn.addr !702
  %10 = ptrtoint i32* %9 to i32, !insn.addr !702
  store i32 %3, i32* %9, align 4, !insn.addr !703
  %11 = add i32 %10, 4, !insn.addr !703
  %12 = inttoptr i32 %11 to i32*, !insn.addr !703
  store i32 %4, i32* %12, align 4, !insn.addr !703
  ret i32 %10, !insn.addr !704

; uselistorder directives
  uselistorder i32 %10, { 1, 0 }
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32 8, { 1, 0, 3, 2 }
}

define i32 @param_thread_local_storage(i32 %arg1) local_unnamed_addr {
dec_label_pc_297c:
  %r7.1.reg2mem = alloca i32, !insn.addr !705
  %r4.3.reg2mem = alloca i32, !insn.addr !705
  %r5.2.reg2mem = alloca i32, !insn.addr !705
  %sl.0.reg2mem = alloca i32, !insn.addr !705
  %r7.0.reg2mem = alloca i32, !insn.addr !705
  %r6.0.reg2mem = alloca i32, !insn.addr !705
  %r5.1.reg2mem = alloca i32, !insn.addr !705
  %r4.2.reg2mem = alloca i32, !insn.addr !705
  %r5.0.reg2mem = alloca i32, !insn.addr !705
  %r4.1.reg2mem = alloca i32, !insn.addr !705
  %r4.0.reg2mem = alloca i32, !insn.addr !705
  %r0.0.reg2mem = alloca i32, !insn.addr !705
  %stack_var_-40 = alloca i32, align 4
  %0 = mul i32 %arg1, 4, !insn.addr !706
  %1 = call i32* @malloc(i32 %0), !insn.addr !707
  %2 = call i32* @malloc(i32 %0), !insn.addr !708
  %3 = icmp eq i32* %1, null, !insn.addr !709
  %4 = icmp eq i32* %2, null
  %spec.select1 = or i1 %3, %4
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !710
  br i1 %spec.select1, label %dec_label_pc_29b4, label %dec_label_pc_29c0, !insn.addr !710

dec_label_pc_29b4:                                ; preds = %dec_label_pc_297c, %dec_label_pc_2ad4, %dec_label_pc_2ab4
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !711

dec_label_pc_29c0:                                ; preds = %dec_label_pc_297c
  %5 = ptrtoint i32* %1 to i32, !insn.addr !707
  %6 = ptrtoint i32* %2 to i32, !insn.addr !708
  %7 = icmp slt i32 %arg1, 1, !insn.addr !712
  store i32 0, i32* %r4.0.reg2mem, !insn.addr !712
  store i32 0, i32* %r4.3.reg2mem, !insn.addr !712
  store i32 0, i32* %r7.1.reg2mem, !insn.addr !712
  br i1 %7, label %dec_label_pc_2ad4, label %dec_label_pc_29d4, !insn.addr !712

dec_label_pc_29d4:                                ; preds = %dec_label_pc_29c0, %dec_label_pc_29d4
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %8 = call i32* @malloc(i32 16), !insn.addr !713
  %9 = ptrtoint i32* %8 to i32, !insn.addr !713
  %10 = mul i32 %r4.0.reload, 4, !insn.addr !714
  %11 = add i32 %10, %6, !insn.addr !714
  %12 = inttoptr i32 %11 to i32*, !insn.addr !714
  store i32 %9, i32* %12, align 4, !insn.addr !714
  %13 = bitcast i32* %8 to i8*, !insn.addr !715
  %14 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %13, i32 16, i8* inttoptr (i32 add (i32 ptrtoint ([16 x i8]* @global_var_6bb to i32), i32 10712) to i8*)), !insn.addr !715
  %15 = add nuw i32 %r4.0.reload, 1, !insn.addr !716
  %16 = icmp eq i32 %15, %arg1, !insn.addr !717
  store i32 %15, i32* %r4.0.reg2mem, !insn.addr !718
  store i32 %5, i32* %r4.1.reg2mem, !insn.addr !718
  store i32 0, i32* %r5.0.reg2mem, !insn.addr !718
  br i1 %16, label %dec_label_pc_2a14, label %dec_label_pc_29d4, !insn.addr !718

dec_label_pc_2a14:                                ; preds = %dec_label_pc_29d4, %dec_label_pc_2a30
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %17 = mul i32 %r5.0.reload, 4, !insn.addr !719
  %18 = add i32 %17, %6, !insn.addr !719
  %19 = inttoptr i32 %18 to i32*, !insn.addr !719
  %20 = load i32, i32* %19, align 4, !insn.addr !719
  %21 = inttoptr i32 %r4.1.reload to i32*, !insn.addr !720
  %22 = inttoptr i32 %20 to i32*, !insn.addr !720
  %23 = call i32 @pthread_create(i32* %21, i32* null, i32* (i32*)* inttoptr (i32 10548 to i32* (i32*)*), i32* %22), !insn.addr !720
  %24 = icmp eq i32 %23, 0, !insn.addr !721
  store i32 0, i32* %r5.2.reg2mem, !insn.addr !722
  br i1 %24, label %dec_label_pc_2a30, label %dec_label_pc_2aa0, !insn.addr !722

dec_label_pc_2a30:                                ; preds = %dec_label_pc_2a14
  %25 = add i32 %r4.1.reload, 4, !insn.addr !723
  %26 = add nuw i32 %r5.0.reload, 1, !insn.addr !724
  %27 = icmp eq i32 %26, %arg1, !insn.addr !725
  store i32 %25, i32* %r4.1.reg2mem, !insn.addr !726
  store i32 %26, i32* %r5.0.reg2mem, !insn.addr !726
  br i1 %27, label %dec_label_pc_2a60.preheader, label %dec_label_pc_2a14, !insn.addr !726

dec_label_pc_2a60.preheader:                      ; preds = %dec_label_pc_2a30
  %28 = bitcast i32* %stack_var_-40 to i32**, !insn.addr !727
  store i32 0, i32* %r4.2.reg2mem
  store i32 %5, i32* %r5.1.reg2mem
  store i32 %6, i32* %r6.0.reg2mem
  store i32 0, i32* %r7.0.reg2mem
  store i32 %arg1, i32* %sl.0.reg2mem
  br label %dec_label_pc_2a60

dec_label_pc_2a60:                                ; preds = %dec_label_pc_2a60.preheader, %dec_label_pc_2a60
  %sl.0.reload = load i32, i32* %sl.0.reg2mem
  %r7.0.reload = load i32, i32* %r7.0.reg2mem
  %r6.0.reload = load i32, i32* %r6.0.reg2mem
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %r4.2.reload = load i32, i32* %r4.2.reg2mem
  %29 = inttoptr i32 %r5.1.reload to i32*, !insn.addr !728
  %30 = load i32, i32* %29, align 4, !insn.addr !728
  %31 = add i32 %r5.1.reload, 4, !insn.addr !728
  %32 = call i32 @pthread_join(i32 %30, i32** nonnull %28), !insn.addr !727
  %33 = load i32, i32* %stack_var_-40, align 4, !insn.addr !729
  %34 = inttoptr i32 %33 to i32*, !insn.addr !730
  %35 = load i32, i32* %34, align 4, !insn.addr !730
  %36 = add i32 %33, 4, !insn.addr !731
  %37 = inttoptr i32 %36 to i32*, !insn.addr !731
  %38 = load i32, i32* %37, align 4, !insn.addr !731
  call void @free(i32* %34), !insn.addr !732
  %39 = inttoptr i32 %r6.0.reload to i32*, !insn.addr !733
  %40 = load i32, i32* %39, align 4, !insn.addr !733
  %41 = add i32 %r6.0.reload, 4, !insn.addr !733
  %42 = inttoptr i32 %40 to i32*, !insn.addr !734
  call void @free(i32* %42), !insn.addr !734
  %43 = add i32 %38, %r4.2.reload, !insn.addr !735
  %44 = add i32 %35, %r7.0.reload, !insn.addr !736
  %45 = add i32 %sl.0.reload, -1, !insn.addr !737
  %46 = icmp eq i32 %sl.0.reload, 1, !insn.addr !737
  store i32 %43, i32* %r4.2.reg2mem, !insn.addr !738
  store i32 %31, i32* %r5.1.reg2mem, !insn.addr !738
  store i32 %41, i32* %r6.0.reg2mem, !insn.addr !738
  store i32 %44, i32* %r7.0.reg2mem, !insn.addr !738
  store i32 %45, i32* %sl.0.reg2mem, !insn.addr !738
  store i32 %43, i32* %r4.3.reg2mem, !insn.addr !738
  store i32 %44, i32* %r7.1.reg2mem, !insn.addr !738
  br i1 %46, label %dec_label_pc_2ad4, label %dec_label_pc_2a60, !insn.addr !738

dec_label_pc_2aa0:                                ; preds = %dec_label_pc_2a14, %dec_label_pc_2aa0
  %r5.2.reload = load i32, i32* %r5.2.reg2mem
  %47 = mul i32 %r5.2.reload, 4, !insn.addr !739
  %48 = add i32 %47, %6, !insn.addr !739
  %49 = inttoptr i32 %48 to i32*, !insn.addr !739
  %50 = load i32, i32* %49, align 4, !insn.addr !739
  %51 = inttoptr i32 %50 to i32*, !insn.addr !740
  call void @free(i32* %51), !insn.addr !740
  %52 = add nuw i32 %r5.2.reload, 1, !insn.addr !741
  %53 = icmp eq i32 %r5.0.reload, %r5.2.reload, !insn.addr !742
  store i32 %52, i32* %r5.2.reg2mem, !insn.addr !743
  br i1 %53, label %dec_label_pc_2ab4, label %dec_label_pc_2aa0, !insn.addr !743

dec_label_pc_2ab4:                                ; preds = %dec_label_pc_2aa0
  call void @free(i32* %2), !insn.addr !744
  call void @free(i32* %1), !insn.addr !745
  store i32 -2, i32* %r0.0.reg2mem, !insn.addr !746
  br label %dec_label_pc_29b4, !insn.addr !746

dec_label_pc_2ad4:                                ; preds = %dec_label_pc_2a60, %dec_label_pc_29c0
  %r7.1.reload = load i32, i32* %r7.1.reg2mem
  %r4.3.reload = load i32, i32* %r4.3.reg2mem
  call void @free(i32* %2), !insn.addr !747
  call void @free(i32* %1), !insn.addr !748
  %54 = mul i32 %arg1, 150, !insn.addr !749
  %55 = mul i32 %arg1, 100, !insn.addr !750
  %56 = icmp eq i32 %r7.1.reload, %55
  %57 = icmp eq i32 %r4.3.reload, %54
  %58 = icmp eq i1 %57, %56, !insn.addr !751
  %spec.select = select i1 %58, i32 42, i32 -3
  store i32 %spec.select, i32* %r0.0.reg2mem, !insn.addr !752
  br label %dec_label_pc_29b4, !insn.addr !752

; uselistorder directives
  uselistorder i32 %r5.2.reload, { 1, 0, 2 }
  uselistorder i32 %33, { 1, 0 }
  uselistorder i32 %sl.0.reload, { 1, 0 }
  uselistorder i32 %r4.1.reload, { 1, 0 }
  uselistorder i32 %r5.0.reload, { 1, 0, 2 }
  uselistorder i32 %6, { 1, 0, 2, 3 }
  uselistorder i32* %2, { 0, 1, 3, 2 }
  uselistorder i32* %1, { 0, 1, 3, 2 }
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32* %stack_var_-40, { 1, 0 }
  uselistorder i32* %r0.0.reg2mem, { 2, 1, 0, 3 }
  uselistorder i32* %r4.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r6.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r7.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sl.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.2.reg2mem, { 2, 0, 1 }
  uselistorder i32 -3, { 5, 6, 7, 10, 11, 0, 1, 2, 8, 3, 9, 4 }
  uselistorder i32 42, { 2, 3, 4, 0, 5, 13, 6, 7, 1, 8, 9, 10, 14, 11, 12, 15 }
  uselistorder i32 -2, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13, 11 }
  uselistorder i32 -1, { 29, 0, 30, 31, 1, 2, 32, 33, 3, 34, 4, 5, 6, 7, 35, 36, 37, 22, 38, 8, 9, 10, 11, 16, 17, 12, 23, 24, 25, 39, 40, 26, 27, 41, 42, 43, 18, 44, 19, 13, 28, 20, 14, 21, 15 }
  uselistorder i32* (i32)* @malloc, { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 11 }
  uselistorder i32 %arg1, { 4, 5, 0, 2, 3, 6, 1 }
  uselistorder label %dec_label_pc_2aa0, { 1, 0 }
  uselistorder label %dec_label_pc_2a60, { 1, 0 }
  uselistorder label %dec_label_pc_2a14, { 1, 0 }
  uselistorder label %dec_label_pc_29d4, { 1, 0 }
  uselistorder label %dec_label_pc_29b4, { 1, 2, 0 }
}

define i32 @call_thread_local_storage() local_unnamed_addr {
dec_label_pc_2b18:
  %0 = call i32 @param_thread_local_storage(i32 4), !insn.addr !753
  ret i32 %0, !insn.addr !754
}

define i32 @test_thread_concurrency() local_unnamed_addr {
dec_label_pc_2b2c:
  %r7.1.reg2mem = alloca i32, !insn.addr !755
  %r7.0.reg2mem = alloca i32, !insn.addr !755
  %r5.0.reg2mem = alloca i32, !insn.addr !755
  %stack_var_-76 = alloca i32, align 4
  %stack_var_-72 = alloca i32, align 4
  %stack_var_-36 = alloca i32, align 4
  %0 = call i32 @puts(i8* inttoptr (i32 add (i32 ptrtoint ([28 x i8]* @global_var_645 to i32), i32 11072) to i8*)), !insn.addr !756
  store i32 7, i32* %stack_var_-36, align 4, !insn.addr !757
  %1 = call i32 @pthread_create(i32* nonnull %stack_var_-72, i32* null, i32* (i32*)* bitcast (i32* (i32*)** @global_var_210c to i32* (i32*)*), i32* nonnull %stack_var_-36), !insn.addr !758
  %2 = icmp eq i32 %1, 0, !insn.addr !759
  br i1 %2, label %dec_label_pc_2b78, label %dec_label_pc_2b90, !insn.addr !760

dec_label_pc_2b78:                                ; preds = %dec_label_pc_2b2c
  %3 = load i32, i32* %stack_var_-72, align 4, !insn.addr !761
  %4 = bitcast i32* %stack_var_-76 to i32**, !insn.addr !762
  %5 = call i32 @pthread_join(i32 %3, i32** nonnull %4), !insn.addr !762
  %6 = load i32, i32* %stack_var_-76, align 4, !insn.addr !763
  %7 = inttoptr i32 %6 to i32*, !insn.addr !764
  call void @free(i32* %7), !insn.addr !765
  br label %dec_label_pc_2b90, !insn.addr !765

dec_label_pc_2b90:                                ; preds = %dec_label_pc_2b2c, %dec_label_pc_2b78
  %8 = ptrtoint i32* %stack_var_-72 to i32, !insn.addr !766
  %9 = ptrtoint i32* %stack_var_-36 to i32, !insn.addr !767
  %10 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_501 to i32), i32 11164) to i8*)), !insn.addr !768
  %11 = call i32* @memset(i32* nonnull %stack_var_-72, i32 0, i32 36), !insn.addr !769
  store i32 1, i32* %stack_var_-72, align 4, !insn.addr !770
  store i32 %8, i32* %r5.0.reg2mem, !insn.addr !771
  store i32 0, i32* %r7.0.reg2mem, !insn.addr !771
  br label %dec_label_pc_2be8, !insn.addr !771

dec_label_pc_2be8:                                ; preds = %dec_label_pc_2c04, %dec_label_pc_2b90
  %r7.0.reload = load i32, i32* %r7.0.reg2mem
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %12 = add i32 %r7.0.reload, %9, !insn.addr !772
  %13 = inttoptr i32 %12 to i32*, !insn.addr !773
  %14 = inttoptr i32 %r5.0.reload to i32*, !insn.addr !773
  %15 = call i32 @pthread_create(i32* %13, i32* null, i32* (i32*)* inttoptr (i32 8680 to i32* (i32*)*), i32* %14), !insn.addr !773
  %16 = icmp eq i32 %15, 0, !insn.addr !774
  br i1 %16, label %dec_label_pc_2c04, label %dec_label_pc_2c60, !insn.addr !775

dec_label_pc_2c04:                                ; preds = %dec_label_pc_2be8
  %17 = add i32 %r5.0.reload, 12, !insn.addr !776
  %18 = add nuw nsw i32 %r7.0.reload, 4, !insn.addr !777
  %19 = icmp eq i32 %18, 12, !insn.addr !778
  store i32 %17, i32* %r5.0.reg2mem, !insn.addr !779
  store i32 %18, i32* %r7.0.reg2mem, !insn.addr !779
  store i32 0, i32* %r7.1.reg2mem, !insn.addr !779
  br i1 %19, label %dec_label_pc_2c24, label %dec_label_pc_2be8, !insn.addr !779

dec_label_pc_2c24:                                ; preds = %dec_label_pc_2c04, %dec_label_pc_2c38
  %r7.1.reload = load i32, i32* %r7.1.reg2mem
  %20 = add i32 %r7.1.reload, %9, !insn.addr !780
  %21 = inttoptr i32 %20 to i32*, !insn.addr !780
  %22 = load i32, i32* %21, align 4, !insn.addr !780
  %23 = call i32 @pthread_join(i32 %22, i32** null), !insn.addr !781
  %24 = icmp eq i32 %23, 0, !insn.addr !782
  br i1 %24, label %dec_label_pc_2c38, label %dec_label_pc_2c60, !insn.addr !783

dec_label_pc_2c38:                                ; preds = %dec_label_pc_2c24
  %25 = add nsw i32 %r7.1.reload, -4, !insn.addr !784
  %26 = icmp eq i32 %r7.1.reload, -8, !insn.addr !785
  store i32 %25, i32* %r7.1.reg2mem, !insn.addr !786
  br i1 %26, label %dec_label_pc_2c60, label %dec_label_pc_2c24, !insn.addr !786

dec_label_pc_2c60:                                ; preds = %dec_label_pc_2be8, %dec_label_pc_2c24, %dec_label_pc_2c38
  %27 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_44d to i32), i32 11372) to i8*)), !insn.addr !787
  %28 = call i32 @param_mutex_lock(i32 4, i32* nonnull @global_var_3e8), !insn.addr !788
  %29 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_44a to i32), i32 11404) to i8*)), !insn.addr !789
  %30 = call i32 @param_condition_variable(), !insn.addr !790
  %31 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_452 to i32), i32 11424) to i8*)), !insn.addr !791
  %32 = call i32 @param_atomic_ops(i32 4, i32* nonnull @global_var_1f4), !insn.addr !792
  %33 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_452 to i32), i32 11452) to i8*)), !insn.addr !793
  %34 = call i32 @param_thread_local_storage(i32 4), !insn.addr !794
  %35 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_456 to i32), i32 11476) to i8*)), !insn.addr !795
  ret i32 %35, !insn.addr !796

; uselistorder directives
  uselistorder i32 %r5.0.reload, { 1, 0 }
  uselistorder i32* %stack_var_-36, { 1, 0, 2 }
  uselistorder i32* %stack_var_-72, { 2, 0, 4, 3, 1 }
  uselistorder i32* %stack_var_-76, { 1, 0 }
  uselistorder i32* %r5.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r7.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r7.1.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i32)* @param_thread_local_storage, { 1, 0 }
  uselistorder i32 (i32, i32*)* @param_atomic_ops, { 1, 0 }
  uselistorder i32 ()* @param_condition_variable, { 1, 0 }
  uselistorder i32 (i32, i32*)* @param_mutex_lock, { 1, 0 }
  uselistorder i32 -4, { 3, 4, 5, 0, 2, 1 }
  uselistorder i32 4, { 13, 14, 15, 22, 16, 0, 23, 24, 25, 26, 1, 2, 3, 27, 17, 28, 29, 4, 18, 19, 30, 31, 5, 32, 33, 34, 20, 12, 6, 7, 8, 9, 10, 35, 11, 21 }
  uselistorder i32 12, { 7, 8, 1, 9, 10, 11, 12, 2, 3, 4, 5, 0, 6 }
  uselistorder i32* (i32*, i32, i32)* @memset, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder i32 (i8*, ...)* @printf, { 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 28 }
  uselistorder void (i32*)* @free, { 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 18 }
  uselistorder i32 (i32, i32**)* @pthread_join, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder i32 (i32*, i32*, i32* (i32*)*, i32*)* @pthread_create, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder i32* null, { 1, 2, 4, 0, 3, 6, 7, 8, 5, 9, 10, 11, 12, 14, 13, 15, 16, 17, 18, 19, 20, 21, 22 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
  uselistorder label %dec_label_pc_2c60, { 2, 1, 0 }
  uselistorder label %dec_label_pc_2c24, { 1, 0 }
  uselistorder label %dec_label_pc_2b90, { 1, 0 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_2d04:
  %0 = call i32 @test_standard_library_functions(), !insn.addr !797
  %1 = call i32 @test_system_calls(), !insn.addr !798
  %2 = call i32 @test_thread_concurrency(), !insn.addr !799
  ret i32 0, !insn.addr !800

; uselistorder directives
  uselistorder i32 0, { 26, 144, 0, 145, 1, 104, 146, 5, 6, 4, 147, 7, 2, 3, 8, 105, 148, 149, 106, 27, 28, 9, 150, 151, 29, 152, 107, 30, 153, 10, 11, 154, 12, 108, 155, 13, 14, 156, 15, 109, 31, 25, 110, 157, 158, 111, 159, 160, 161, 36, 162, 163, 112, 37, 164, 165, 113, 114, 115, 116, 166, 167, 168, 38, 39, 169, 170, 117, 118, 119, 120, 171, 172, 173, 40, 41, 35, 174, 175, 121, 176, 177, 178, 179, 122, 180, 181, 123, 124, 125, 182, 126, 16, 17, 18, 127, 19, 20, 21, 183, 128, 22, 23, 24, 184, 42, 43, 185, 44, 45, 129, 46, 47, 33, 34, 48, 49, 50, 51, 52, 53, 54, 55, 56, 186, 57, 187, 58, 188, 32, 59, 189, 190, 191, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143 }
}

define i32 @__aeabi_read_tp() local_unnamed_addr {
dec_label_pc_2d20:
  %0 = call i32 @function_ffff0fe0(), !insn.addr !801
  ret i32 %0, !insn.addr !801
}

define i32 @_fini(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_2d28:
  ret i32 %arg1, !insn.addr !802
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
  uselistorder i32 1, { 15, 97, 120, 119, 118, 18, 17, 16, 156, 157, 158, 159, 98, 121, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 160, 161, 99, 123, 122, 35, 34, 33, 32, 31, 162, 100, 101, 124, 36, 127, 126, 125, 37, 102, 163, 164, 103, 128, 42, 41, 40, 39, 38, 165, 166, 104, 43, 105, 131, 130, 129, 48, 47, 46, 45, 44, 106, 134, 133, 132, 53, 52, 51, 50, 49, 167, 82, 137, 136, 135, 54, 140, 139, 138, 55, 89, 168, 141, 14, 107, 169, 108, 170, 59, 58, 57, 56, 60, 90, 171, 91, 172, 109, 86, 110, 143, 142, 61, 145, 144, 62, 13, 146, 147, 63, 92, 173, 148, 12, 93, 174, 149, 11, 83, 94, 175, 64, 95, 176, 65, 150, 68, 67, 66, 151, 69, 10, 177, 178, 73, 72, 71, 70, 75, 74, 179, 78, 77, 76, 9, 111, 112, 152, 79, 180, 80, 8, 7, 154, 153, 81, 6, 84, 85, 87, 5, 4, 88, 3, 96, 2, 1, 0, 155, 113, 114, 115, 116, 117 }
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
!88 = !{i64 4320}
!89 = !{i64 4328}
!90 = !{i64 4360}
!91 = !{i64 4368}
!92 = !{i64 4380}
!93 = !{i64 4396}
!94 = !{i64 4400}
!95 = !{i64 4416}
!96 = !{i64 4428}
!97 = !{i64 4436}
!98 = !{i64 4444}
!99 = !{i64 4452}
!100 = !{i64 4460}
!101 = !{i64 4472}
!102 = !{i64 4484}
!103 = !{i64 4492}
!104 = !{i64 4500}
!105 = !{i64 4504}
!106 = !{i64 4520}
!107 = !{i64 4532}
!108 = !{i64 4564}
!109 = !{i64 4568}
!110 = !{i64 4588}
!111 = !{i64 4604}
!112 = !{i64 4608}
!113 = !{i64 4624}
!114 = !{i64 4628}
!115 = !{i64 4636}
!116 = !{i64 4668}
!117 = !{i64 4676}
!118 = !{i64 4708}
!119 = !{i64 4716}
!120 = !{i64 4728}
!121 = !{i64 4752}
!122 = !{i64 4768}
!123 = !{i64 4772}
!124 = !{i64 4760}
!125 = !{i64 4756}
!126 = !{i64 4788}
!127 = !{i64 4828}
!128 = !{i64 4844}
!129 = !{i64 4864}
!130 = !{i64 4876}
!131 = !{i64 4888}
!132 = !{i64 4892}
!133 = !{i64 4896}
!134 = !{i64 4904}
!135 = !{i64 4916}
!136 = !{i64 4920}
!137 = !{i64 4936}
!138 = !{i64 4964}
!139 = !{i64 4968}
!140 = !{i64 4980}
!141 = !{i64 4988}
!142 = !{i64 5000}
!143 = !{i64 5008}
!144 = !{i64 5012}
!145 = !{i64 5020}
!146 = !{i64 5032}
!147 = !{i64 5052}
!148 = !{i64 5056}
!149 = !{i64 5060}
!150 = !{i64 5088}
!151 = !{i64 5092}
!152 = !{i64 5096}
!153 = !{i64 5108}
!154 = !{i64 5112}
!155 = !{i64 5132}
!156 = !{i64 5144}
!157 = !{i64 5152}
!158 = !{i64 5160}
!159 = !{i64 5168}
!160 = !{i64 5172}
!161 = !{i64 5192}
!162 = !{i64 5204}
!163 = !{i64 5212}
!164 = !{i64 5228}
!165 = !{i64 5232}
!166 = !{i64 5244}
!167 = !{i64 5272}
!168 = !{i64 5280}
!169 = !{i64 5288}
!170 = !{i64 5296}
!171 = !{i64 5300}
!172 = !{i64 5304}
!173 = !{i64 5316}
!174 = !{i64 5320}
!175 = !{i64 5324}
!176 = !{i64 5340}
!177 = !{i64 5344}
!178 = !{i64 5348}
!179 = !{i64 5352}
!180 = !{i64 5360}
!181 = !{i64 5364}
!182 = !{i64 5368}
!183 = !{i64 5372}
!184 = !{i64 5380}
!185 = !{i64 5384}
!186 = !{i64 5392}
!187 = !{i64 5396}
!188 = !{i64 5408}
!189 = !{i64 5420}
!190 = !{i64 5424}
!191 = !{i64 5428}
!192 = !{i64 5432}
!193 = !{i64 5436}
!194 = !{i64 5440}
!195 = !{i64 5444}
!196 = !{i64 5448}
!197 = !{i64 5452}
!198 = !{i64 5460}
!199 = !{i64 5464}
!200 = !{i64 5488}
!201 = !{i64 5492}
!202 = !{i64 5496}
!203 = !{i64 5504}
!204 = !{i64 5508}
!205 = !{i64 5512}
!206 = !{i64 5516}
!207 = !{i64 5528}
!208 = !{i64 5532}
!209 = !{i64 5544}
!210 = !{i64 5548}
!211 = !{i64 5552}
!212 = !{i64 5556}
!213 = !{i64 5560}
!214 = !{i64 5564}
!215 = !{i64 5580}
!216 = !{i64 5584}
!217 = !{i64 5592}
!218 = !{i64 5604}
!219 = !{i64 5620}
!220 = !{i64 5624}
!221 = !{i64 5628}
!222 = !{i64 5644}
!223 = !{i64 5648}
!224 = !{i64 5652}
!225 = !{i64 5660}
!226 = !{i64 5668}
!227 = !{i64 5676}
!228 = !{i64 5680}
!229 = !{i64 5696}
!230 = !{i64 5720}
!231 = !{i64 5728}
!232 = !{i64 5744}
!233 = !{i64 5760}
!234 = !{i64 5776}
!235 = !{i64 5792}
!236 = !{i64 5820}
!237 = !{i64 5860}
!238 = !{i64 5896}
!239 = !{i64 5920}
!240 = !{i64 5936}
!241 = !{i64 5968}
!242 = !{i64 6004}
!243 = !{i64 6024}
!244 = !{i64 6028}
!245 = !{i64 6036}
!246 = !{i64 6044}
!247 = !{i64 6056}
!248 = !{i64 6068}
!249 = !{i64 6080}
!250 = !{i64 6092}
!251 = !{i64 6108}
!252 = !{i64 6116}
!253 = !{i64 6120}
!254 = !{i64 6124}
!255 = !{i64 6136}
!256 = !{i64 6140}
!257 = !{i64 6144}
!258 = !{i64 6148}
!259 = !{i64 6152}
!260 = !{i64 6164}
!261 = !{i64 6168}
!262 = !{i64 5956}
!263 = !{i64 6184}
!264 = !{i64 6192}
!265 = !{i64 6196}
!266 = !{i64 6200}
!267 = !{i64 6204}
!268 = !{i64 6208}
!269 = !{i64 6224}
!270 = !{i64 6248}
!271 = !{i64 6264}
!272 = !{i64 6276}
!273 = !{i64 6376}
!274 = !{i64 6392}
!275 = !{i64 6396}
!276 = !{i64 6400}
!277 = !{i64 6416}
!278 = !{i64 6420}
!279 = !{i64 6424}
!280 = !{i64 6428}
!281 = !{i64 6432}
!282 = !{i64 6444}
!283 = !{i64 6448}
!284 = !{i64 6468}
!285 = !{i64 6476}
!286 = !{i64 6492}
!287 = !{i64 6496}
!288 = !{i64 6500}
!289 = !{i64 6504}
!290 = !{i64 6516}
!291 = !{i64 6508}
!292 = !{i64 6520}
!293 = !{i64 6528}
!294 = !{i64 6548}
!295 = !{i64 6564}
!296 = !{i64 6568}
!297 = !{i64 6572}
!298 = !{i64 6588}
!299 = !{i64 6612}
!300 = !{i64 6628}
!301 = !{i64 6632}
!302 = !{i64 6636}
!303 = !{i64 6652}
!304 = !{i64 6660}
!305 = !{i64 6676}
!306 = !{i64 6680}
!307 = !{i64 6684}
!308 = !{i64 6688}
!309 = !{i64 6700}
!310 = !{i64 6704}
!311 = !{i64 6708}
!312 = !{i64 6716}
!313 = !{i64 6720}
!314 = !{i64 6728}
!315 = !{i64 6756}
!316 = !{i64 6776}
!317 = !{i64 6784}
!318 = !{i64 6796}
!319 = !{i64 6804}
!320 = !{i64 6812}
!321 = !{i64 6816}
!322 = !{i64 6828}
!323 = !{i64 6832}
!324 = !{i64 6836}
!325 = !{i64 6844}
!326 = !{i64 6848}
!327 = !{i64 6856}
!328 = !{i64 6888}
!329 = !{i64 6912}
!330 = !{i64 6920}
!331 = !{i64 6928}
!332 = !{i64 6936}
!333 = !{i64 6940}
!334 = !{i64 6944}
!335 = !{i64 6948}
!336 = !{i64 6952}
!337 = !{i64 6956}
!338 = !{i64 6960}
!339 = !{i64 6964}
!340 = !{i64 6972}
!341 = !{i64 6976}
!342 = !{i64 6980}
!343 = !{i64 6992}
!344 = !{i64 7004}
!345 = !{i64 7008}
!346 = !{i64 7012}
!347 = !{i64 7020}
!348 = !{i64 7032}
!349 = !{i64 7036}
!350 = !{i64 7060}
!351 = !{i64 7064}
!352 = !{i64 7068}
!353 = !{i64 7088}
!354 = !{i64 7096}
!355 = !{i64 7104}
!356 = !{i64 7116}
!357 = !{i64 7124}
!358 = !{i64 7128}
!359 = !{i64 7152}
!360 = !{i64 7156}
!361 = !{i64 7160}
!362 = !{i64 7168}
!363 = !{i64 7200}
!364 = !{i64 7204}
!365 = !{i64 7208}
!366 = !{i64 7228}
!367 = !{i64 7244}
!368 = !{i64 7248}
!369 = !{i64 7252}
!370 = !{i64 7264}
!371 = !{i64 7276}
!372 = !{i64 7284}
!373 = !{i64 7292}
!374 = !{i64 7308}
!375 = !{i64 7316}
!376 = !{i64 7324}
!377 = !{i64 7328}
!378 = !{i64 7340}
!379 = !{i64 7348}
!380 = !{i64 7356}
!381 = !{i64 7360}
!382 = !{i64 7384}
!383 = !{i64 7392}
!384 = !{i64 7396}
!385 = !{i64 7400}
!386 = !{i64 7416}
!387 = !{i64 7420}
!388 = !{i64 7424}
!389 = !{i64 7440}
!390 = !{i64 7444}
!391 = !{i64 7448}
!392 = !{i64 7464}
!393 = !{i64 7468}
!394 = !{i64 7472}
!395 = !{i64 7492}
!396 = !{i64 7500}
!397 = !{i64 7512}
!398 = !{i64 7528}
!399 = !{i64 7532}
!400 = !{i64 7556}
!401 = !{i64 7576}
!402 = !{i64 7588}
!403 = !{i64 7600}
!404 = !{i64 7604}
!405 = !{i64 7620}
!406 = !{i64 7624}
!407 = !{i64 7636}
!408 = !{i64 7652}
!409 = !{i64 7656}
!410 = !{i64 7668}
!411 = !{i64 7684}
!412 = !{i64 7692}
!413 = !{i64 7704}
!414 = !{i64 7708}
!415 = !{i64 7720}
!416 = !{i64 7732}
!417 = !{i64 7736}
!418 = !{i64 7740}
!419 = !{i64 7744}
!420 = !{i64 7780}
!421 = !{i64 7784}
!422 = !{i64 7788}
!423 = !{i64 7796}
!424 = !{i64 7804}
!425 = !{i64 7812}
!426 = !{i64 7816}
!427 = !{i64 7820}
!428 = !{i64 7832}
!429 = !{i64 7840}
!430 = !{i64 7844}
!431 = !{i64 7848}
!432 = !{i64 7852}
!433 = !{i64 7856}
!434 = !{i64 7868}
!435 = !{i64 7872}
!436 = !{i64 7884}
!437 = !{i64 7888}
!438 = !{i64 7876}
!439 = !{i64 7904}
!440 = !{i64 7916}
!441 = !{i64 7920}
!442 = !{i64 7988}
!443 = !{i64 8000}
!444 = !{i64 8004}
!445 = !{i64 8020}
!446 = !{i64 8028}
!447 = !{i64 8048}
!448 = !{i64 8068}
!449 = !{i64 8072}
!450 = !{i64 8076}
!451 = !{i64 8092}
!452 = !{i64 8096}
!453 = !{i64 8100}
!454 = !{i64 8108}
!455 = !{i64 8136}
!456 = !{i64 8152}
!457 = !{i64 8188}
!458 = !{i64 8192}
!459 = !{i64 8196}
!460 = !{i64 8204}
!461 = !{i64 8208}
!462 = !{i64 8220}
!463 = !{i64 8280}
!464 = !{i64 8284}
!465 = !{i64 8300}
!466 = !{i64 8304}
!467 = !{i64 8320}
!468 = !{i64 8324}
!469 = !{i64 8348}
!470 = !{i64 8352}
!471 = !{i64 8368}
!472 = !{i64 8380}
!473 = !{i64 8404}
!474 = !{i64 8412}
!475 = !{i64 8468}
!476 = !{i64 8476}
!477 = !{i64 8480}
!478 = !{i64 8488}
!479 = !{i64 8492}
!480 = !{i64 8500}
!481 = !{i64 8524}
!482 = !{i64 8532}
!483 = !{i64 8536}
!484 = !{i64 8540}
!485 = !{i64 8548}
!486 = !{i64 8552}
!487 = !{i64 8556}
!488 = !{i64 8560}
!489 = !{i64 8576}
!490 = !{i64 8584}
!491 = !{i64 8596}
!492 = !{i64 8620}
!493 = !{i64 8628}
!494 = !{i64 8632}
!495 = !{i64 8636}
!496 = !{i64 8644}
!497 = !{i64 8648}
!498 = !{i64 8652}
!499 = !{i64 8656}
!500 = !{i64 8672}
!501 = !{i64 8688}
!502 = !{i64 8692}
!503 = !{i64 8700}
!504 = !{i64 8704}
!505 = !{i64 8712}
!506 = !{i64 8716}
!507 = !{i64 8724}
!508 = !{i64 8728}
!509 = !{i64 8740}
!510 = !{i64 8744}
!511 = !{i64 8748}
!512 = !{i64 8752}
!513 = !{i64 8764}
!514 = !{i64 8768}
!515 = !{i64 8776}
!516 = !{i64 8796}
!517 = !{i64 8844}
!518 = !{i64 8848}
!519 = !{i64 8856}
!520 = !{i64 8860}
!521 = !{i64 8876}
!522 = !{i64 8880}
!523 = !{i64 8884}
!524 = !{i64 8888}
!525 = !{i64 8892}
!526 = !{i64 8896}
!527 = !{i64 8900}
!528 = !{i64 8908}
!529 = !{i64 8916}
!530 = !{i64 8920}
!531 = !{i64 8928}
!532 = !{i64 8932}
!533 = !{i64 8936}
!534 = !{i64 8940}
!535 = !{i64 8944}
!536 = !{i64 8948}
!537 = !{i64 8952}
!538 = !{i64 8956}
!539 = !{i64 8960}
!540 = !{i64 8992}
!541 = !{i64 9000}
!542 = !{i64 9008}
!543 = !{i64 9028}
!544 = !{i64 9076}
!545 = !{i64 9080}
!546 = !{i64 9088}
!547 = !{i64 9092}
!548 = !{i64 9108}
!549 = !{i64 9112}
!550 = !{i64 9116}
!551 = !{i64 9120}
!552 = !{i64 9124}
!553 = !{i64 9128}
!554 = !{i64 9132}
!555 = !{i64 9140}
!556 = !{i64 9148}
!557 = !{i64 9152}
!558 = !{i64 9160}
!559 = !{i64 9164}
!560 = !{i64 9168}
!561 = !{i64 9172}
!562 = !{i64 9176}
!563 = !{i64 9180}
!564 = !{i64 9184}
!565 = !{i64 9188}
!566 = !{i64 9192}
!567 = !{i64 9224}
!568 = !{i64 9232}
!569 = !{i64 9244}
!570 = !{i64 9268}
!571 = !{i64 9276}
!572 = !{i64 9280}
!573 = !{i64 9284}
!574 = !{i64 9292}
!575 = !{i64 9300}
!576 = !{i64 9304}
!577 = !{i64 9308}
!578 = !{i64 9320}
!579 = !{i64 9336}
!580 = !{i64 9348}
!581 = !{i64 9352}
!582 = !{i64 9356}
!583 = !{i64 9360}
!584 = !{i64 9364}
!585 = !{i64 9384}
!586 = !{i64 9392}
!587 = !{i64 9432}
!588 = !{i64 9436}
!589 = !{i64 9440}
!590 = !{i64 9444}
!591 = !{i64 9448}
!592 = !{i64 9452}
!593 = !{i64 9472}
!594 = !{i64 9480}
!595 = !{i64 9484}
!596 = !{i64 9488}
!597 = !{i64 9496}
!598 = !{i64 9500}
!599 = !{i64 9504}
!600 = !{i64 9516}
!601 = !{i64 9520}
!602 = !{i64 9528}
!603 = !{i64 9544}
!604 = !{i64 9548}
!605 = !{i64 9560}
!606 = !{i64 9588}
!607 = !{i64 9596}
!608 = !{i64 9612}
!609 = !{i64 9624}
!610 = !{i64 9628}
!611 = !{i64 9632}
!612 = !{i64 9660}
!613 = !{i64 9664}
!614 = !{i64 9668}
!615 = !{i64 9672}
!616 = !{i64 9684}
!617 = !{i64 9696}
!618 = !{i64 9700}
!619 = !{i64 9712}
!620 = !{i64 9716}
!621 = !{i64 9724}
!622 = !{i64 9764}
!623 = !{i64 9780}
!624 = !{i64 9792}
!625 = !{i64 9804}
!626 = !{i64 9816}
!627 = !{i64 9824}
!628 = !{i64 9836}
!629 = !{i64 9856}
!630 = !{i64 9876}
!631 = !{i64 9888}
!632 = !{i64 9912}
!633 = !{i64 9920}
!634 = !{i64 9924}
!635 = !{i64 9948}
!636 = !{i64 9952}
!637 = !{i64 9956}
!638 = !{i64 9964}
!639 = !{i64 9972}
!640 = !{i64 9984}
!641 = !{i64 9988}
!642 = !{i64 9996}
!643 = !{i64 10000}
!644 = !{i64 10004}
!645 = !{i64 10008}
!646 = !{i64 10024}
!647 = !{i64 10048}
!648 = !{i64 10056}
!649 = !{i64 10060}
!650 = !{i64 10076}
!651 = !{i64 10112}
!652 = !{i64 10116}
!653 = !{i64 10124}
!654 = !{i64 10140}
!655 = !{i64 10144}
!656 = !{i64 10148}
!657 = !{i64 10152}
!658 = !{i64 10168}
!659 = !{i64 10196}
!660 = !{i64 10200}
!661 = !{i64 10212}
!662 = !{i64 10224}
!663 = !{i64 10232}
!664 = !{i64 10244}
!665 = !{i64 10248}
!666 = !{i64 10252}
!667 = !{i64 10256}
!668 = !{i64 10260}
!669 = !{i64 10284}
!670 = !{i64 10292}
!671 = !{i64 10332}
!672 = !{i64 10336}
!673 = !{i64 10340}
!674 = !{i64 10344}
!675 = !{i64 10348}
!676 = !{i64 10352}
!677 = !{i64 10376}
!678 = !{i64 10380}
!679 = !{i64 10384}
!680 = !{i64 10388}
!681 = !{i64 10396}
!682 = !{i64 10404}
!683 = !{i64 10412}
!684 = !{i64 10420}
!685 = !{i64 10424}
!686 = !{i64 10428}
!687 = !{i64 10444}
!688 = !{i64 10456}
!689 = !{i64 10468}
!690 = !{i64 10472}
!691 = !{i64 10488}
!692 = !{i64 10492}
!693 = !{i64 10504}
!694 = !{i64 10536}
!695 = !{i64 10544}
!696 = !{i64 10560}
!697 = !{i64 10564}
!698 = !{i64 10568}
!699 = !{i64 10572}
!700 = !{i64 10580}
!701 = !{i64 10588}
!702 = !{i64 10596}
!703 = !{i64 10600}
!704 = !{i64 10608}
!705 = !{i64 10620}
!706 = !{i64 10632}
!707 = !{i64 10640}
!708 = !{i64 10652}
!709 = !{i64 10664}
!710 = !{i64 10672}
!711 = !{i64 10684}
!712 = !{i64 10692}
!713 = !{i64 10712}
!714 = !{i64 10716}
!715 = !{i64 10732}
!716 = !{i64 10736}
!717 = !{i64 10740}
!718 = !{i64 10744}
!719 = !{i64 10772}
!720 = !{i64 10788}
!721 = !{i64 10792}
!722 = !{i64 10796}
!723 = !{i64 10800}
!724 = !{i64 10804}
!725 = !{i64 10808}
!726 = !{i64 10812}
!727 = !{i64 10856}
!728 = !{i64 10848}
!729 = !{i64 10860}
!730 = !{i64 10864}
!731 = !{i64 10868}
!732 = !{i64 10872}
!733 = !{i64 10876}
!734 = !{i64 10880}
!735 = !{i64 10884}
!736 = !{i64 10888}
!737 = !{i64 10892}
!738 = !{i64 10896}
!739 = !{i64 10912}
!740 = !{i64 10916}
!741 = !{i64 10920}
!742 = !{i64 10924}
!743 = !{i64 10928}
!744 = !{i64 10936}
!745 = !{i64 10944}
!746 = !{i64 10952}
!747 = !{i64 10968}
!748 = !{i64 10976}
!749 = !{i64 10988}
!750 = !{i64 11000}
!751 = !{i64 11008}
!752 = !{i64 11020}
!753 = !{i64 11040}
!754 = !{i64 11048}
!755 = !{i64 11052}
!756 = !{i64 11068}
!757 = !{i64 11076}
!758 = !{i64 11112}
!759 = !{i64 11120}
!760 = !{i64 11124}
!761 = !{i64 11128}
!762 = !{i64 11136}
!763 = !{i64 11140}
!764 = !{i64 11144}
!765 = !{i64 11148}
!766 = !{i64 11080}
!767 = !{i64 11096}
!768 = !{i64 11164}
!769 = !{i64 11180}
!770 = !{i64 11228}
!771 = !{i64 11236}
!772 = !{i64 11240}
!773 = !{i64 11256}
!774 = !{i64 11260}
!775 = !{i64 11264}
!776 = !{i64 11268}
!777 = !{i64 11272}
!778 = !{i64 11276}
!779 = !{i64 11280}
!780 = !{i64 11300}
!781 = !{i64 11308}
!782 = !{i64 11312}
!783 = !{i64 11316}
!784 = !{i64 11332}
!785 = !{i64 11336}
!786 = !{i64 11340}
!787 = !{i64 11372}
!788 = !{i64 11384}
!789 = !{i64 11400}
!790 = !{i64 11404}
!791 = !{i64 11420}
!792 = !{i64 11432}
!793 = !{i64 11448}
!794 = !{i64 11456}
!795 = !{i64 11472}
!796 = !{i64 11484}
!797 = !{i64 11528}
!798 = !{i64 11532}
!799 = !{i64 11536}
!800 = !{i64 11548}
!801 = !{i64 11556}
!802 = !{i64 11564}
