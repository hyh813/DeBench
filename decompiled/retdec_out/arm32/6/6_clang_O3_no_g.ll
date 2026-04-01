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
@global_var_1411c = local_unnamed_addr global i32 10784
@global_var_2a20 = constant i32 -382908416
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
@global_var_1210 = local_unnamed_addr constant i32 6476
@global_var_1214 = local_unnamed_addr constant i32 6460
@global_var_2b0c = constant i32 1
@global_var_2b00 = constant i32 1
@global_var_18ec = constant i32 -382908368
@global_var_1248 = local_unnamed_addr constant i32 6356
@global_var_124c = local_unnamed_addr constant i32 6373
@global_var_2b18 = constant [21 x i8] c"Value: %d, Name: %s\0A\00"
@global_var_2b2d = constant [5 x i8] c"Test\00"
@global_var_1290 = local_unnamed_addr constant i32 6342
@global_var_2b32 = constant [6 x i8] c"%d,%d\00"
@global_var_12dc = local_unnamed_addr constant i32 6276
@global_var_12e0 = local_unnamed_addr constant i32 6266
@global_var_2b38 = constant [8 x i8] c"123,456\00"
@global_var_1324 = local_unnamed_addr constant i32 6220
@global_var_1378 = local_unnamed_addr constant i32 6150
@global_var_137c = local_unnamed_addr constant i32 6144
@global_var_2b42 = constant [12 x i8] c"/etc/passwd\00"
@global_var_1464 = local_unnamed_addr constant i32 6089
@global_var_2b61 = constant [3 x i8] c"w+\00"
@global_var_2b4e = constant [19 x i8] c"BinBench Test Data\00"
@global_var_146c = local_unnamed_addr constant i32 5934
@global_var_147c = local_unnamed_addr constant i32 5864
@global_var_2b64 = constant [23 x i8] c"/tmp/binbench_test.tmp\00"
@global_var_1770 = local_unnamed_addr constant i32 6354
@global_var_1768 = local_unnamed_addr constant i32 1651068015
@global_var_176c = local_unnamed_addr constant i32 1819043144
@global_var_1774 = local_unnamed_addr constant i32 5559
@global_var_1778 = local_unnamed_addr constant i32 5570
@global_var_177c = local_unnamed_addr constant i32 5581
@global_var_1780 = local_unnamed_addr constant i32 5593
@global_var_1784 = local_unnamed_addr constant i32 5380
@global_var_1788 = local_unnamed_addr constant i32 5364
@global_var_178c = local_unnamed_addr constant i32 5517
@global_var_1790 = local_unnamed_addr constant i32 5288
@global_var_1794 = local_unnamed_addr constant i32 5305
@global_var_1798 = local_unnamed_addr constant i32 5505
@global_var_179c = local_unnamed_addr constant i32 5276
@global_var_17a0 = local_unnamed_addr constant i32 5266
@global_var_17a4 = local_unnamed_addr constant i32 5469
@global_var_17a8 = local_unnamed_addr constant i32 5230
@global_var_17ac = local_unnamed_addr constant i32 5224
@global_var_17b0 = local_unnamed_addr constant i32 5422
@global_var_17b4 = local_unnamed_addr constant i32 5192
@global_var_17b8 = local_unnamed_addr constant i32 5422
@global_var_17bc = local_unnamed_addr constant i32 5434
@global_var_17c0 = local_unnamed_addr constant i32 5446
@global_var_17c4 = local_unnamed_addr constant i32 5457
@global_var_186c = local_unnamed_addr constant i32 4882
@global_var_18e8 = local_unnamed_addr constant i32 4738
@global_var_1a04 = local_unnamed_addr constant i32 4817
@global_var_2cc9 = constant [10 x i8] c"/bin/true\00"
@global_var_1acc = local_unnamed_addr constant i32 4631
@global_var_2cd3 = constant [10 x i8] c"HelloPipe\00"
@global_var_1ca0 = local_unnamed_addr constant i32 4345
@global_var_1b6 = local_unnamed_addr global i32 1313275904
@global_var_2cdd = constant [18 x i8] c"/tmp/binbench_shm\00"
@global_var_1ca4 = local_unnamed_addr constant i32 4313
@global_var_3b6 = global i32 0
@global_var_1ca8 = local_unnamed_addr constant i32 3744
@global_var_2af0 = constant [13 x i8] c"SharedMemory\00"
@global_var_1df4 = local_unnamed_addr constant i32 288
@global_var_1df8 = local_unnamed_addr constant i32 256
@global_var_1dfc = local_unnamed_addr constant i32 74784
@global_var_14148 = local_unnamed_addr global i32 0
@global_var_3e8 = global i32 0
@global_var_7d0 = constant [5 x i8] c"eate\00"
@global_var_1e18 = local_unnamed_addr constant i32 74544
@global_var_1414c = local_unnamed_addr global i32 0
@global_var_1f98 = local_unnamed_addr constant i32 4182
@global_var_1f9c = local_unnamed_addr constant i32 3322
@global_var_1fa0 = local_unnamed_addr constant i32 3683
@global_var_1fa4 = local_unnamed_addr constant i32 3238
@global_var_1fa8 = local_unnamed_addr constant i32 3659
@global_var_1fac = local_unnamed_addr constant i32 3603
@global_var_1fb0 = local_unnamed_addr constant i32 3611
@global_var_1fb4 = local_unnamed_addr constant i32 3619
@global_var_1fb8 = local_unnamed_addr constant i32 3619
@global_var_1fbc = local_unnamed_addr constant i32 3627
@global_var_1fc0 = local_unnamed_addr constant i32 3389
@global_var_204c = local_unnamed_addr constant i32 -68
@global_var_20bc = local_unnamed_addr constant i32 -180
@global_var_2234 = local_unnamed_addr constant i32 -184
@global_var_2238 = local_unnamed_addr constant i32 -236
@global_var_223c = local_unnamed_addr constant i32 -268
@global_var_2298 = local_unnamed_addr constant i32 73440
@global_var_14154 = global i32 0
@global_var_14150 = local_unnamed_addr global i32 0
@global_var_238c = local_unnamed_addr constant i32 73324
@global_var_2390 = local_unnamed_addr constant i32 -172
@global_var_2408 = local_unnamed_addr constant i32 73104
@global_var_1416c = global i32 0
@global_var_14188 = global i32 0
@global_var_2454 = local_unnamed_addr constant i32 72984
@global_var_2518 = local_unnamed_addr constant i32 72908
@global_var_251c = local_unnamed_addr constant i32 -236
@global_var_2520 = local_unnamed_addr constant i32 -180
@global_var_2598 = local_unnamed_addr constant i32 72676
@global_var_14138 = global i32 0
@global_var_25d0 = local_unnamed_addr constant i32 72584
@global_var_26f8 = local_unnamed_addr constant i32 72492
@global_var_26fc = local_unnamed_addr constant i32 -260
@global_var_2700 = local_unnamed_addr constant i32 -204
@global_var_2704 = local_unnamed_addr constant i32 72332
@global_var_1f4 = global i32 0
@global_var_2754 = local_unnamed_addr constant i32 8
@global_var_2758 = local_unnamed_addr constant i32 12
@global_var_2908 = local_unnamed_addr constant i32 1531
@global_var_2904 = local_unnamed_addr constant i32 -228
@global_var_2a00 = local_unnamed_addr constant i32 1405
@global_var_2a04 = local_unnamed_addr constant i32 -2436
@global_var_2a08 = local_unnamed_addr constant i32 1089
@global_var_2a0c = local_unnamed_addr constant i32 1097
@global_var_2a10 = local_unnamed_addr constant i32 1098
@global_var_2a14 = local_unnamed_addr constant i32 1106
@global_var_2a18 = local_unnamed_addr constant i32 1106
@global_var_2a1c = local_unnamed_addr constant i32 1110
@0 = external global i32
@global_var_14130 = external local_unnamed_addr global i8*
@1 = internal constant [3 x i8] c"\EC\18\00"
@global_var_122c = constant i8* getelementptr inbounds ([3 x i8], [3 x i8]* @1, i32 0, i32 0)
@2 = internal constant [2 x i8] c"r\00"
@3 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @2, i32 0, i32 0)
@4 = internal constant [3 x i8] c"\92\17\00"
@global_var_1468 = constant i8* getelementptr inbounds ([3 x i8], [3 x i8]* @4, i32 0, i32 0)
@5 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\87\E5\87\86\E5\BA\93\E5\87\BD\E6\95\B0\E8\B0\83\E7\94\A8 ===\00"
@global_var_2e66 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @5, i32 0, i32 0)
@6 = internal constant [27 x i8] c"LIB-L1-01: %d (\E6\9C\9F\E6\9C\9B: 8)\0A\00"
@global_var_2b7b = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @6, i32 0, i32 0)
@7 = internal constant [27 x i8] c"LIB-L1-02: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_2b96 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @7, i32 0, i32 0)
@8 = internal constant [28 x i8] c"LIB-L1-03: %d (\E6\9C\9F\E6\9C\9B: 12)\0A\00"
@global_var_2bb1 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i32 0, i32 0)
@9 = internal constant [28 x i8] c"LIB-L1-04: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_2bcd = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i32 0, i32 0)
@10 = internal constant [28 x i8] c"LIB-L1-05: %d (\E6\9C\9F\E6\9C\9B: -1)\0A\00"
@global_var_2be9 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i32 0, i32 0)
@11 = internal constant [28 x i8] c"LIB-L1-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_2c05 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i32 0, i32 0)
@12 = internal constant [29 x i8] c"LIB-L1-07: %d (\E6\9C\9F\E6\9C\9B: 579)\0A\00"
@global_var_2c21 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i32 0, i32 0)
@13 = internal constant [28 x i8] c"LIB-L1-08: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2c3e = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @13, i32 0, i32 0)
@14 = internal constant [28 x i8] c"LIB-L1-09: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2c5a = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @14, i32 0, i32 0)
@15 = internal constant [28 x i8] c"LIB-L1-10: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_2c76 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @15, i32 0, i32 0)
@16 = internal constant [27 x i8] c"LIB-L1-11: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_2c92 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @16, i32 0, i32 0)
@17 = internal constant [28 x i8] c"LIB-L1-12: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_2cad = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i32 0, i32 0)
@global_var_14140 = external global i8*
@18 = internal constant [27 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\B3\BB\E7\BB\9F\E8\B0\83\E7\94\A8 ===\00"
@global_var_2e8a = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @18, i32 0, i32 0)
@19 = internal constant [28 x i8] c"SYS-L3-01: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2cef = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @19, i32 0, i32 0)
@20 = internal constant [28 x i8] c"SYS-L3-02: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2d0b = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @20, i32 0, i32 0)
@21 = internal constant [28 x i8] c"SYS-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2d27 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @21, i32 0, i32 0)
@22 = internal constant [28 x i8] c"SYS-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2d43 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @22, i32 0, i32 0)
@23 = internal constant [28 x i8] c"SYS-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2d5f = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @23, i32 0, i32 0)
@24 = internal constant [28 x i8] c"SYS-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2d7b = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @24, i32 0, i32 0)
@25 = internal constant [28 x i8] c"SYS-L3-07: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2d97 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @25, i32 0, i32 0)
@global_var_1fc4 = constant i32* (i32*)* inttoptr (i32 -382910448 to i32* (i32*)*)
@global_var_14144 = local_unnamed_addr global i8 0
@global_var_5fb = external global i8*
@global_var_57d = external global i8*
@global_var_441 = external global i8*
@global_var_449 = external global i8*
@global_var_44a = external global i8*
@global_var_452 = external global i8*
@global_var_456 = external global i8*
@global_var_2b40 = constant [2 x i8] c"r\00"

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
  %2 = call i32 @__libc_start_main(i32 ptrtoint (i32* @global_var_2a20 to i32), i32 %arg2, i8** nonnull %0, void ()* null, void ()* null, void ()* %1), !insn.addr !67
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
  %0 = call i32 @memcmp(i32* nonnull @global_var_2b0c, i32* nonnull @global_var_2b00, i32 12), !insn.addr !106
  %1 = icmp ne i32 %0, 0, !insn.addr !107
  %spec.select1 = sext i1 %1 to i32
  %2 = icmp sgt i32 %0, 0, !insn.addr !108
  %r5.1 = select i1 %2, i32 1, i32 %spec.select1
  %3 = call i32 @memcmp(i32* nonnull @global_var_2b0c, i32* nonnull @global_var_2b0c, i32 12), !insn.addr !109
  %4 = icmp ne i32 %3, 0, !insn.addr !110
  %spec.select = sext i1 %4 to i32
  %5 = icmp sgt i32 %3, 0, !insn.addr !111
  %spec.select2 = select i1 %5, i32 1, i32 %spec.select
  %6 = add nsw i32 %spec.select2, %r5.1, !insn.addr !112
  ret i32 %6, !insn.addr !113
}

define i32 @param_printf(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1218:
  %0 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_122c to i32), i32 ptrtoint (i32* @global_var_18ec to i32)) to i8*)), !insn.addr !114
  ret i32 %0, !insn.addr !114
}

define i32 @call_printf() local_unnamed_addr {
dec_label_pc_1230:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_2b18, i32 0, i32 0), i32 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_2b2d, i32 0, i32 0)), !insn.addr !115
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
  %3 = call i32 (i8*, i8*, ...) @sscanf(i8* %2, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_2b32, i32 0, i32 0), i32* nonnull %stack_var_-12, i32* nonnull %stack_var_-16), !insn.addr !117
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
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = call i32 (i8*, i8*, ...) @sscanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_2b38, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_2b32, i32 0, i32 0)), !insn.addr !123
  %4 = icmp eq i32 %3, 2, !insn.addr !124
  %5 = add i32 %2, %1
  %spec.select = select i1 %4, i32 %5, i32 -1
  ret i32 %spec.select, !insn.addr !125

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @param_fopen_fclose() local_unnamed_addr {
dec_label_pc_12e4:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i8*, !insn.addr !126
  %3 = call %_IO_FILE* @fopen(i8* %2, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_2b40, i32 0, i32 0)), !insn.addr !126
  %4 = ptrtoint %_IO_FILE* %3 to i32, !insn.addr !126
  %5 = icmp eq %_IO_FILE* %3, null, !insn.addr !127
  %spec.select = select i1 %5, i32 -1, i32 %4
  br i1 %5, label %6, label %dec_label_pc_1304, !insn.addr !128

; <label>:6:                                      ; preds = %dec_label_pc_12e4
  ret i32 %spec.select, !insn.addr !128

dec_label_pc_1304:                                ; preds = %dec_label_pc_12e4
  %7 = inttoptr i32 %spec.select to %_IO_FILE*, !insn.addr !129
  %8 = call i32 @fileno(%_IO_FILE* %7), !insn.addr !129
  %9 = call i32 @fclose(%_IO_FILE* %7), !insn.addr !130
  ret i32 %8, !insn.addr !131

; uselistorder directives
  uselistorder i1 %5, { 1, 0 }
}

define i32 @call_fopen_fclose() local_unnamed_addr {
dec_label_pc_1328:
  %0 = call %_IO_FILE* @fopen(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_2b42, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_2b40, i32 0, i32 0)), !insn.addr !132
  %1 = ptrtoint %_IO_FILE* %0 to i32, !insn.addr !132
  %2 = icmp eq %_IO_FILE* %0, null, !insn.addr !133
  %spec.select1 = select i1 %2, i32 -1, i32 %1
  br i1 %2, label %3, label %dec_label_pc_1350, !insn.addr !134

; <label>:3:                                      ; preds = %dec_label_pc_1328
  ret i32 %spec.select1, !insn.addr !134

dec_label_pc_1350:                                ; preds = %dec_label_pc_1328
  %4 = inttoptr i32 %spec.select1 to %_IO_FILE*, !insn.addr !135
  %5 = call i32 @fileno(%_IO_FILE* %4), !insn.addr !135
  %6 = call i32 @fclose(%_IO_FILE* %4), !insn.addr !136
  %7 = add i32 %5, 1, !insn.addr !137
  %8 = icmp sgt i32 %7, 0, !insn.addr !138
  %spec.select = select i1 %8, i32 42, i32 -1
  ret i32 %spec.select, !insn.addr !139

; uselistorder directives
  uselistorder i1 %2, { 1, 0 }
  uselistorder i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_2b40, i32 0, i32 0), { 1, 0 }
}

define i32 @param_fread_fwrite(i8* %arg1) local_unnamed_addr {
dec_label_pc_1380:
  %r0.0.reg2mem = alloca i32, !insn.addr !140
  %stack_var_-56 = alloca i32, align 4
  %0 = call %_IO_FILE* @fopen(i8* %arg1, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_2b61, i32 0, i32 0)), !insn.addr !141
  %1 = icmp eq %_IO_FILE* %0, null, !insn.addr !142
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !143
  br i1 %1, label %dec_label_pc_1430, label %dec_label_pc_13a0, !insn.addr !143

dec_label_pc_13a0:                                ; preds = %dec_label_pc_1380
  %2 = call i32 @fwrite(i32* bitcast ([19 x i8]* @global_var_2b4e to i32*), i32 1, i32 18, %_IO_FILE* nonnull %0), !insn.addr !144
  %3 = icmp eq i32 %2, 18, !insn.addr !145
  br i1 %3, label %dec_label_pc_13c4, label %dec_label_pc_144c, !insn.addr !146

dec_label_pc_13c4:                                ; preds = %dec_label_pc_13a0
  call void @rewind(%_IO_FILE* nonnull %0), !insn.addr !147
  %4 = ptrtoint i32* %stack_var_-56 to i32, !insn.addr !148
  %5 = call i32 @fread(i32* nonnull %stack_var_-56, i32 1, i32 18, %_IO_FILE* nonnull %0), !insn.addr !149
  %6 = add i32 %5, %4, !insn.addr !150
  %7 = inttoptr i32 %6 to i8*, !insn.addr !150
  store i8 0, i8* %7, align 1, !insn.addr !150
  %8 = call i32 @fclose(%_IO_FILE* nonnull %0), !insn.addr !151
  %9 = call i32 @unlink(i8* %arg1), !insn.addr !152
  %10 = icmp eq i32 %5, 18, !insn.addr !153
  store i32 -3, i32* %r0.0.reg2mem, !insn.addr !154
  br i1 %10, label %dec_label_pc_140c, label %dec_label_pc_1430, !insn.addr !154

dec_label_pc_140c:                                ; preds = %dec_label_pc_13c4
  %11 = call i32 @bcmp(i32* nonnull %stack_var_-56, i32* bitcast ([19 x i8]* @global_var_2b4e to i32*), i32 19), !insn.addr !155
  %12 = icmp eq i32 %11, 0, !insn.addr !156
  %spec.select = select i1 %12, i32 42, i32 -3
  store i32 %spec.select, i32* %r0.0.reg2mem, !insn.addr !157
  br label %dec_label_pc_1430, !insn.addr !157

dec_label_pc_1430:                                ; preds = %dec_label_pc_1380, %dec_label_pc_13c4, %dec_label_pc_140c
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !158

dec_label_pc_144c:                                ; preds = %dec_label_pc_13a0
  %13 = call i32 @fclose(%_IO_FILE* nonnull %0), !insn.addr !159
  ret i32 -2, !insn.addr !160

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder %_IO_FILE* %0, { 2, 0, 1, 3, 4, 5 }
  uselistorder i32* %r0.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32 18, { 2, 0, 3, 1 }
  uselistorder label %dec_label_pc_1430, { 2, 1, 0 }
}

define i32 @call_fread_fwrite() local_unnamed_addr {
dec_label_pc_1470:
  %0 = call i32 @param_fread_fwrite(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_2b64, i32 0, i32 0)), !insn.addr !161
  ret i32 %0, !insn.addr !161
}

define i32 @param_malloc_free(i32 %arg1) local_unnamed_addr {
dec_label_pc_1480:
  %0 = alloca i32
  %r5.1.reg2mem = alloca i32, !insn.addr !162
  %.pre-phi.reg2mem = alloca i32*, !insn.addr !162
  %r3.0.reg2mem = alloca i32, !insn.addr !162
  %r2.0.reg2mem = alloca i32, !insn.addr !162
  %r1.0.reg2mem = alloca i32, !insn.addr !162
  %1 = load i32, i32* %0
  %2 = mul i32 %arg1, 4, !insn.addr !163
  %3 = call i32* @malloc(i32 %2), !insn.addr !164
  %4 = ptrtoint i32* %3 to i32, !insn.addr !164
  %5 = icmp eq i32* %3, null, !insn.addr !165
  %spec.select = select i1 %5, i32 -1, i32 %4
  br i1 %5, label %6, label %dec_label_pc_14a0, !insn.addr !166

; <label>:6:                                      ; preds = %dec_label_pc_1480
  ret i32 %spec.select, !insn.addr !166

dec_label_pc_14a0:                                ; preds = %dec_label_pc_1480
  %r4.0 = select i1 %5, i32 %1, i32 %arg1
  %7 = icmp eq i32 %r4.0, 0, !insn.addr !167
  store i32 0, i32* %r1.0.reg2mem, !insn.addr !168
  store i32 %4, i32* %r2.0.reg2mem, !insn.addr !168
  store i32 %arg1, i32* %r3.0.reg2mem, !insn.addr !168
  br i1 %7, label %dec_label_pc_14a0.dec_label_pc_14cc_crit_edge, label %dec_label_pc_14b4, !insn.addr !168

dec_label_pc_14a0.dec_label_pc_14cc_crit_edge:    ; preds = %dec_label_pc_14a0
  %.pre = inttoptr i32 %spec.select to i32*, !insn.addr !169
  store i32* %.pre, i32** %.pre-phi.reg2mem
  br label %dec_label_pc_14cc

dec_label_pc_14b4:                                ; preds = %dec_label_pc_14a0, %dec_label_pc_14b4
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  %r2.0.reload = load i32, i32* %r2.0.reg2mem
  %r1.0.reload = load i32, i32* %r1.0.reg2mem
  %8 = inttoptr i32 %r2.0.reload to i32*, !insn.addr !170
  store i32 %r1.0.reload, i32* %8, align 4, !insn.addr !170
  %9 = add i32 %r2.0.reload, 4, !insn.addr !170
  %10 = add i32 %r1.0.reload, 10, !insn.addr !171
  %11 = add i32 %r3.0.reload, -1, !insn.addr !172
  %12 = icmp eq i32 %r3.0.reload, 1, !insn.addr !172
  store i32 %10, i32* %r1.0.reg2mem, !insn.addr !173
  store i32 %9, i32* %r2.0.reg2mem, !insn.addr !173
  store i32 %11, i32* %r3.0.reg2mem, !insn.addr !173
  br i1 %12, label %dec_label_pc_14c4, label %dec_label_pc_14b4, !insn.addr !173

dec_label_pc_14c4:                                ; preds = %dec_label_pc_14b4
  %13 = inttoptr i32 %spec.select to i32*
  %14 = load i32, i32* %13, align 4, !insn.addr !174
  store i32* %13, i32** %.pre-phi.reg2mem, !insn.addr !175
  store i32 %14, i32* %r5.1.reg2mem, !insn.addr !175
  br label %dec_label_pc_14cc, !insn.addr !175

dec_label_pc_14cc:                                ; preds = %dec_label_pc_14a0.dec_label_pc_14cc_crit_edge, %dec_label_pc_14c4
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %.pre-phi.reload = load i32*, i32** %.pre-phi.reg2mem
  %15 = mul i32 %r4.0, 4, !insn.addr !176
  %16 = add i32 %spec.select, -4, !insn.addr !176
  %17 = add i32 %16, %15, !insn.addr !177
  %18 = inttoptr i32 %17 to i32*, !insn.addr !177
  %19 = load i32, i32* %18, align 4, !insn.addr !177
  call void @free(i32* %.pre-phi.reload), !insn.addr !169
  %20 = add i32 %19, %r5.1.reload, !insn.addr !178
  ret i32 %20, !insn.addr !179

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
  uselistorder label %dec_label_pc_14cc, { 1, 0 }
  uselistorder label %dec_label_pc_14b4, { 1, 0 }
}

define i32 @call_malloc_free() local_unnamed_addr {
dec_label_pc_14e4:
  ret i32 90, !insn.addr !180
}

define i32 @param_memset(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_14ec:
  %r6.1.reg2mem = alloca i32, !insn.addr !181
  %r6.0.reg2mem = alloca i32, !insn.addr !181
  %r5.0.reg2mem = alloca i32, !insn.addr !181
  %r4.0.reg2mem = alloca i32, !insn.addr !181
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !182
  %1 = call i32* @memset(i32* %0, i32 0, i32 %arg2), !insn.addr !182
  %2 = icmp eq i32 %arg2, 0, !insn.addr !183
  store i32 %arg2, i32* %r4.0.reg2mem, !insn.addr !184
  store i32 %arg1, i32* %r5.0.reg2mem, !insn.addr !184
  store i32 0, i32* %r6.0.reg2mem, !insn.addr !184
  store i32 0, i32* %r6.1.reg2mem, !insn.addr !184
  br i1 %2, label %dec_label_pc_1524, label %dec_label_pc_1514, !insn.addr !184

dec_label_pc_1514:                                ; preds = %dec_label_pc_14ec, %dec_label_pc_1514
  %r6.0.reload = load i32, i32* %r6.0.reg2mem
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %3 = inttoptr i32 %r5.0.reload to i8*, !insn.addr !185
  %4 = load i8, i8* %3, align 1, !insn.addr !185
  %5 = zext i8 %4 to i32, !insn.addr !185
  %6 = add i32 %r5.0.reload, 1, !insn.addr !185
  %7 = add i32 %r4.0.reload, -1, !insn.addr !186
  %8 = icmp eq i32 %r4.0.reload, 1, !insn.addr !186
  %9 = add i32 %r6.0.reload, %5, !insn.addr !187
  store i32 %7, i32* %r4.0.reg2mem, !insn.addr !188
  store i32 %6, i32* %r5.0.reg2mem, !insn.addr !188
  store i32 %9, i32* %r6.0.reg2mem, !insn.addr !188
  store i32 %9, i32* %r6.1.reg2mem, !insn.addr !188
  br i1 %8, label %dec_label_pc_1524, label %dec_label_pc_1514, !insn.addr !188

dec_label_pc_1524:                                ; preds = %dec_label_pc_1514, %dec_label_pc_14ec
  %r6.1.reload = load i32, i32* %r6.1.reg2mem
  ret i32 %r6.1.reload, !insn.addr !189

; uselistorder directives
  uselistorder i32 %r4.0.reload, { 1, 0 }
  uselistorder i32* %r4.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r6.0.reg2mem, { 2, 0, 1 }
  uselistorder i32 %arg2, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1514, { 1, 0 }
}

define i32 @call_memset() local_unnamed_addr {
dec_label_pc_1530:
  ret i32 0, !insn.addr !190
}

define i32 @param_strchr_strstr(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1538:
  %0 = inttoptr i32 %arg1 to i8*, !insn.addr !191
  %1 = call i8* @strchr(i8* %0, i32 %arg2), !insn.addr !191
  %2 = ptrtoint i8* %1 to i32, !insn.addr !191
  %3 = sub i32 %2, %arg1, !insn.addr !192
  %4 = icmp eq i8* %1, null, !insn.addr !193
  %spec.select1 = select i1 %4, i32 -1, i32 %3
  %5 = inttoptr i32 %arg3 to i8*, !insn.addr !194
  %6 = call i8* @strstr(i8* %0, i8* %5), !insn.addr !194
  %7 = ptrtoint i8* %6 to i32, !insn.addr !194
  %8 = sub i32 %7, %arg1, !insn.addr !195
  %9 = icmp eq i8* %6, null, !insn.addr !196
  %spec.select = select i1 %9, i32 -1, i32 %8
  %10 = add i32 %spec.select, %spec.select1, !insn.addr !197
  ret i32 %10, !insn.addr !198
}

define i32 @call_strchr_strstr() local_unnamed_addr {
dec_label_pc_1578:
  ret i32 15, !insn.addr !199
}

define i32 @test_standard_library_functions() local_unnamed_addr {
dec_label_pc_1580:
  %stack_var_-52 = alloca i32, align 4
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_2e66 to i8*)), !insn.addr !200
  store i32 1819043144, i32* %stack_var_-52, align 4, !insn.addr !201
  %1 = bitcast i32* %stack_var_-52 to i8*, !insn.addr !202
  %2 = call i32 @strlen(i8* nonnull %1), !insn.addr !202
  %3 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2b7b to i8*)), !insn.addr !203
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2b96 to i8*)), !insn.addr !204
  %5 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2bb1 to i8*)), !insn.addr !205
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2bcd to i8*)), !insn.addr !206
  %7 = call i32 @memcmp(i32* nonnull @global_var_2b0c, i32* nonnull @global_var_2b00, i32 12), !insn.addr !207
  %8 = call i32 @memcmp(i32* nonnull @global_var_2b0c, i32* nonnull @global_var_2b0c, i32 12), !insn.addr !208
  %9 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2be9 to i8*)), !insn.addr !209
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_2b18, i32 0, i32 0), i32 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_2b2d, i32 0, i32 0)), !insn.addr !210
  %11 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2c05 to i8*)), !insn.addr !211
  %12 = call i32 (i8*, i8*, ...) @sscanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_2b38, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_2b32, i32 0, i32 0)), !insn.addr !212
  %13 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2c21 to i8*)), !insn.addr !213
  %14 = call %_IO_FILE* @fopen(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_2b42, i32 0, i32 0), i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_1468 to i32), i32 5848) to i8*)), !insn.addr !214
  %15 = icmp eq %_IO_FILE* %14, null, !insn.addr !215
  br i1 %15, label %dec_label_pc_1700, label %dec_label_pc_16e0, !insn.addr !216

dec_label_pc_16e0:                                ; preds = %dec_label_pc_1580
  %16 = call i32 @fileno(%_IO_FILE* nonnull %14), !insn.addr !217
  %17 = call i32 @fclose(%_IO_FILE* nonnull %14), !insn.addr !218
  br label %dec_label_pc_1700, !insn.addr !219

dec_label_pc_1700:                                ; preds = %dec_label_pc_16e0, %dec_label_pc_1580
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2c3e to i8*)), !insn.addr !220
  %19 = call i32 @param_fread_fwrite(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_2b64, i32 0, i32 0)), !insn.addr !221
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2c5a to i8*)), !insn.addr !222
  %21 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2c76 to i8*)), !insn.addr !223
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2c92 to i8*)), !insn.addr !224
  %23 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2cad to i8*)), !insn.addr !225
  ret i32 %23, !insn.addr !226

; uselistorder directives
  uselistorder i32 (i8*)* @param_fread_fwrite, { 1, 0 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 4, 3, 2, 1, 0, 5 }
  uselistorder i32 (%_IO_FILE*)* @fileno, { 2, 1, 0, 3 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i8*, i8*, ...)* @sscanf, { 2, 1, 0, 3 }
  uselistorder i32 (i32*, i32*, i32)* @memcmp, { 4, 3, 2, 1, 0, 5 }
  uselistorder i32* @global_var_2b0c, { 0, 1, 4, 2, 3, 5 }
}

define i32 @param_linux_syscall(i32 %arg1) local_unnamed_addr {
dec_label_pc_17c8:
  %0 = call i32 (i32, ...) @syscall(i32 5), !insn.addr !227
  %1 = add i32 %0, 1, !insn.addr !228
  %2 = icmp slt i32 %1, 1, !insn.addr !229
  br i1 %2, label %dec_label_pc_1800, label %dec_label_pc_17e4, !insn.addr !229

dec_label_pc_17e4:                                ; preds = %dec_label_pc_17c8
  %3 = call i32 (i32, ...) @syscall(i32 6), !insn.addr !230
  ret i32 %0, !insn.addr !231

dec_label_pc_1800:                                ; preds = %dec_label_pc_17c8
  %4 = call i32* @__errno_location(), !insn.addr !232
  %5 = load i32, i32* %4, align 4, !insn.addr !233
  %6 = sub i32 0, %5, !insn.addr !234
  ret i32 %6, !insn.addr !235
}

define i32 @call_linux_syscall() local_unnamed_addr {
dec_label_pc_1818:
  %.pre-phi.reg2mem = alloca i32, !insn.addr !236
  %0 = call i32 (i32, ...) @syscall(i32 5), !insn.addr !237
  %1 = add i32 %0, 1
  %2 = icmp slt i32 %1, 1, !insn.addr !238
  br i1 %2, label %dec_label_pc_184c, label %dec_label_pc_1838, !insn.addr !238

dec_label_pc_1838:                                ; preds = %dec_label_pc_1818
  %3 = call i32 (i32, ...) @syscall(i32 6), !insn.addr !239
  store i32 %1, i32* %.pre-phi.reg2mem, !insn.addr !240
  br label %dec_label_pc_1858, !insn.addr !240

dec_label_pc_184c:                                ; preds = %dec_label_pc_1818
  %4 = call i32* @__errno_location(), !insn.addr !241
  %5 = load i32, i32* %4, align 4, !insn.addr !242
  %.pre = sub i32 1, %5, !insn.addr !243
  store i32 %.pre, i32* %.pre-phi.reg2mem, !insn.addr !244
  br label %dec_label_pc_1858, !insn.addr !244

dec_label_pc_1858:                                ; preds = %dec_label_pc_184c, %dec_label_pc_1838
  %.pre-phi.reload = load i32, i32* %.pre-phi.reg2mem
  %6 = icmp sgt i32 %.pre-phi.reload, 0, !insn.addr !245
  %spec.store.select = select i1 %6, i32 42, i32 -1
  ret i32 %spec.store.select, !insn.addr !246

; uselistorder directives
  uselistorder i32* %.pre-phi.reg2mem, { 0, 2, 1 }
}

define i32 @param_win32_api() local_unnamed_addr {
dec_label_pc_1870:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-96 = alloca i32, align 4
  %3 = inttoptr i32 %1 to i8*, !insn.addr !247
  %4 = bitcast i32* %stack_var_-96 to %stat*, !insn.addr !247
  %5 = call i32 @stat(i8* %3, %stat* nonnull %4), !insn.addr !247
  %6 = icmp sgt i32 %2, 0, !insn.addr !248
  %spec.select = select i1 %6, i32 42, i32 -2
  %7 = add i32 %5, 1, !insn.addr !249
  %8 = icmp slt i32 %7, 1, !insn.addr !250
  %spec.store.select = select i1 %8, i32 -1, i32 %spec.select
  ret i32 %spec.store.select, !insn.addr !251

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @call_win32_api() local_unnamed_addr {
dec_label_pc_18a8:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-96 = alloca i32, align 4
  %2 = bitcast i32* %stack_var_-96 to %stat*, !insn.addr !252
  %3 = call i32 @stat(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_2b42, i32 0, i32 0), %stat* nonnull %2), !insn.addr !252
  %4 = icmp sgt i32 %1, 0, !insn.addr !253
  %spec.select = select i1 %4, i32 42, i32 -2
  %5 = add i32 %3, 1, !insn.addr !254
  %6 = icmp slt i32 %5, 1, !insn.addr !255
  %spec.store.select = select i1 %6, i32 -1, i32 %spec.select
  ret i32 %spec.store.select, !insn.addr !256
}

define i32 @param_fork_exec(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_18ec:
  %r0.1.reg2mem = alloca i32, !insn.addr !257
  %stack_var_-20 = alloca i32, align 4
  %0 = call i32 @fork(), !insn.addr !258
  %1 = icmp slt i32 %0, 0, !insn.addr !259
  store i32 -1, i32* %r0.1.reg2mem, !insn.addr !260
  br i1 %1, label %dec_label_pc_1940, label %dec_label_pc_1908, !insn.addr !260

dec_label_pc_1908:                                ; preds = %dec_label_pc_18ec
  %2 = icmp eq i32 %0, 0, !insn.addr !259
  br i1 %2, label %dec_label_pc_1960, label %dec_label_pc_190c, !insn.addr !261

dec_label_pc_190c:                                ; preds = %dec_label_pc_1908
  %3 = call i32 @waitpid(i32 %0, i32* nonnull %stack_var_-20, i32 0), !insn.addr !262
  %4 = icmp slt i32 %3, 0, !insn.addr !263
  store i32 -2, i32* %r0.1.reg2mem, !insn.addr !264
  br i1 %4, label %dec_label_pc_1940, label %dec_label_pc_1920, !insn.addr !264

dec_label_pc_1920:                                ; preds = %dec_label_pc_190c
  %5 = load i32, i32* %stack_var_-20, align 4, !insn.addr !265
  %6 = urem i32 %5, 128, !insn.addr !266
  %7 = icmp eq i32 %6, 0, !insn.addr !266
  store i32 -3, i32* %r0.1.reg2mem, !insn.addr !267
  br i1 %7, label %8, label %dec_label_pc_1940, !insn.addr !267

; <label>:8:                                      ; preds = %dec_label_pc_1920
  %9 = udiv i32 %5, 256, !insn.addr !267
  %10 = urem i32 %9, 256, !insn.addr !267
  store i32 %10, i32* %r0.1.reg2mem, !insn.addr !267
  br label %dec_label_pc_1940, !insn.addr !267

dec_label_pc_1940:                                ; preds = %dec_label_pc_18ec, %dec_label_pc_190c, %dec_label_pc_1920, %8
  %r0.1.reload = load i32, i32* %r0.1.reg2mem
  ret i32 %r0.1.reload, !insn.addr !268

dec_label_pc_1960:                                ; preds = %dec_label_pc_1908
  %11 = inttoptr i32 %arg1 to i8*, !insn.addr !269
  %12 = call i32 (i8*, i8*, ...) @execl(i8* %11, i8* %11), !insn.addr !269
  call void @_exit(i32 127), !insn.addr !270
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !270

; uselistorder directives
  uselistorder i32* %stack_var_-20, { 1, 0 }
  uselistorder i32* %r0.1.reg2mem, { 0, 4, 3, 1, 2 }
  uselistorder i32 256, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1940, { 3, 2, 1, 0 }
}

define i32 @call_fork_exec() local_unnamed_addr {
dec_label_pc_197c:
  %stack_var_-12 = alloca i32, align 4
  %0 = call i32 @fork(), !insn.addr !271
  %1 = icmp slt i32 %0, 0, !insn.addr !272
  br i1 %1, label %dec_label_pc_19b8, label %dec_label_pc_1994, !insn.addr !273

dec_label_pc_1994:                                ; preds = %dec_label_pc_197c
  %2 = icmp eq i32 %0, 0, !insn.addr !272
  br i1 %2, label %dec_label_pc_19e4, label %dec_label_pc_1998, !insn.addr !274

dec_label_pc_1998:                                ; preds = %dec_label_pc_1994
  %3 = call i32 @waitpid(i32 %0, i32* nonnull %stack_var_-12, i32 0), !insn.addr !275
  %4 = icmp slt i32 %3, 0, !insn.addr !276
  br i1 %4, label %dec_label_pc_19b8, label %dec_label_pc_19ac, !insn.addr !277

dec_label_pc_19ac:                                ; preds = %dec_label_pc_1998
  %5 = load i32, i32* %stack_var_-12, align 4, !insn.addr !278
  %6 = urem i32 %5, 128, !insn.addr !279
  %7 = icmp eq i32 %6, 0, !insn.addr !279
  br i1 %7, label %dec_label_pc_19c8, label %dec_label_pc_19b8, !insn.addr !280

dec_label_pc_19b8:                                ; preds = %dec_label_pc_19ac, %dec_label_pc_1998, %dec_label_pc_197c
  ret i32 -1, !insn.addr !281

dec_label_pc_19c8:                                ; preds = %dec_label_pc_19ac
  %8 = and i32 %5, 65280, !insn.addr !282
  %9 = icmp eq i32 %8, 0, !insn.addr !282
  %spec.store.select = select i1 %9, i32 42, i32 -1
  ret i32 %spec.store.select, !insn.addr !283

dec_label_pc_19e4:                                ; preds = %dec_label_pc_1994
  %10 = call i32 (i8*, i8*, ...) @execl(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_2cc9, i32 0, i32 0), i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_2cc9, i32 0, i32 0)), !insn.addr !284
  call void @_exit(i32 127), !insn.addr !285
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !285

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i32* %stack_var_-12, { 1, 0 }
}

define i32 @param_pipe_communication() local_unnamed_addr {
dec_label_pc_1a08:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !286
  %1 = load i32, i32* %0
  %stack_var_-24 = alloca i32, align 4
  %stack_var_-56 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-24 to i32, !insn.addr !287
  %3 = insertvalue [2 x i32] undef, i32 %2, 0, !insn.addr !288
  %4 = call i32 @pipe([2 x i32] %3), !insn.addr !288
  %5 = icmp slt i32 %4, 0, !insn.addr !289
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !290
  br i1 %5, label %dec_label_pc_1a80, label %dec_label_pc_1a20, !insn.addr !290

dec_label_pc_1a20:                                ; preds = %dec_label_pc_1a08
  %6 = call i32 @fork(), !insn.addr !291
  %7 = icmp slt i32 %6, 0, !insn.addr !292
  store i32 -2, i32* %storemerge.reg2mem, !insn.addr !293
  br i1 %7, label %dec_label_pc_1a80, label %dec_label_pc_1a2c, !insn.addr !293

dec_label_pc_1a2c:                                ; preds = %dec_label_pc_1a20
  %8 = icmp eq i32 %6, 0, !insn.addr !292
  br i1 %8, label %dec_label_pc_1aa0, label %dec_label_pc_1a30, !insn.addr !294

dec_label_pc_1a30:                                ; preds = %dec_label_pc_1a2c
  %9 = call i32 @close(i32 %1), !insn.addr !295
  %10 = load i32, i32* %stack_var_-24, align 4, !insn.addr !296
  %11 = ptrtoint i32* %stack_var_-56 to i32, !insn.addr !297
  %12 = call i32 @read(i32 %10, i32* nonnull %stack_var_-56, i32 31), !insn.addr !298
  %13 = add i32 %12, %11, !insn.addr !299
  %14 = inttoptr i32 %13 to i8*, !insn.addr !299
  store i8 0, i8* %14, align 1, !insn.addr !299
  %15 = load i32, i32* %stack_var_-24, align 4, !insn.addr !300
  %16 = call i32 @close(i32 %15), !insn.addr !301
  %17 = call i32 @wait(i32 0), !insn.addr !302
  %18 = icmp sgt i32 %12, 0, !insn.addr !303
  %spec.select = select i1 %18, i32 42, i32 -3
  ret i32 %spec.select

dec_label_pc_1a80:                                ; preds = %dec_label_pc_1a20, %dec_label_pc_1a08
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !304

dec_label_pc_1aa0:                                ; preds = %dec_label_pc_1a2c
  %19 = load i32, i32* %stack_var_-24, align 4, !insn.addr !305
  %20 = call i32 @close(i32 %19), !insn.addr !306
  %21 = call i32 @write(i32 %1, i32* bitcast ([10 x i8]* @global_var_2cd3 to i32*), i32 9), !insn.addr !307
  %22 = call i32 @close(i32 %1), !insn.addr !308
  call void @_exit(i32 0), !insn.addr !309
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !309

; uselistorder directives
  uselistorder i32 %12, { 1, 0 }
}

define i32 @call_pipe_communication() local_unnamed_addr {
dec_label_pc_1ad0:
  %0 = call i32 @param_pipe_communication(), !insn.addr !310
  ret i32 %0, !insn.addr !310
}

define i32 @param_socket_create() local_unnamed_addr {
dec_label_pc_1ad4:
  %stack_var_-36 = alloca i32, align 4
  %stack_var_-20 = alloca i32, align 4
  %0 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !311
  %1 = icmp slt i32 %0, 0, !insn.addr !312
  br i1 %1, label %dec_label_pc_1b84, label %dec_label_pc_1af8, !insn.addr !313

dec_label_pc_1af8:                                ; preds = %dec_label_pc_1ad4
  store i32 1, i32* %stack_var_-20, align 4, !insn.addr !314
  %2 = call i32 @setsockopt(i32 %0, i32 1, i32 2, i32* nonnull %stack_var_-20, i32 4), !insn.addr !315
  %3 = add i32 %2, 1, !insn.addr !316
  %4 = icmp slt i32 %3, 1, !insn.addr !317
  br i1 %4, label %dec_label_pc_1b94, label %dec_label_pc_1b28, !insn.addr !317

dec_label_pc_1b28:                                ; preds = %dec_label_pc_1af8
  store i32 2, i32* %stack_var_-36, align 4, !insn.addr !318
  %5 = bitcast i32* %stack_var_-36 to %sockaddr*, !insn.addr !319
  %6 = call i32 @bind(i32 %0, %sockaddr* nonnull %5, i32 16), !insn.addr !319
  %7 = add i32 %6, 1, !insn.addr !320
  %8 = icmp slt i32 %7, 1, !insn.addr !321
  br i1 %8, label %dec_label_pc_1bac, label %dec_label_pc_1b54, !insn.addr !321

dec_label_pc_1b54:                                ; preds = %dec_label_pc_1b28
  %9 = call i32 @listen(i32 %0, i32 5), !insn.addr !322
  %10 = call i32 @close(i32 %0), !insn.addr !323
  %11 = icmp slt i32 %9, 0, !insn.addr !324
  %spec.select = select i1 %11, i32 -4, i32 42
  ret i32 %spec.select, !insn.addr !325

dec_label_pc_1b84:                                ; preds = %dec_label_pc_1ad4
  ret i32 -1, !insn.addr !326

dec_label_pc_1b94:                                ; preds = %dec_label_pc_1af8
  %12 = call i32 @close(i32 %0), !insn.addr !327
  ret i32 -2, !insn.addr !328

dec_label_pc_1bac:                                ; preds = %dec_label_pc_1b28
  %13 = call i32 @close(i32 %0), !insn.addr !329
  ret i32 -3, !insn.addr !330

; uselistorder directives
  uselistorder i32 %0, { 0, 4, 1, 2, 3, 5, 6 }
}

define i32 @call_socket_create() local_unnamed_addr {
dec_label_pc_1bc4:
  %0 = call i32 @param_socket_create(), !insn.addr !331
  ret i32 %0, !insn.addr !331
}

define i32 @param_shmget_shmat() local_unnamed_addr {
dec_label_pc_1bc8:
  %r4.0.reg2mem = alloca i32, !insn.addr !332
  %0 = call i32 (i8*, i32, ...) @open(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_2cdd, i32 0, i32 0), i32 66), !insn.addr !333
  %1 = icmp slt i32 %0, 0, !insn.addr !334
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !335
  br i1 %1, label %dec_label_pc_1c84, label %dec_label_pc_1bf0, !insn.addr !335

dec_label_pc_1bf0:                                ; preds = %dec_label_pc_1bc8
  %2 = call i32 @close(i32 %0), !insn.addr !336
  %3 = call i32 @ftok(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_2cdd, i32 0, i32 0), i32 42), !insn.addr !337
  %4 = icmp slt i32 %3, 0, !insn.addr !338
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !339
  br i1 %4, label %dec_label_pc_1c84, label %dec_label_pc_1c0c, !insn.addr !339

dec_label_pc_1c0c:                                ; preds = %dec_label_pc_1bf0
  %5 = call i32 @shmget(i32 %3, i32 4096, i32 ptrtoint (i32* @global_var_3b6 to i32)), !insn.addr !340
  %6 = icmp slt i32 %5, 0, !insn.addr !341
  store i32 -2, i32* %r4.0.reg2mem, !insn.addr !342
  br i1 %6, label %dec_label_pc_1c84, label %dec_label_pc_1c24, !insn.addr !342

dec_label_pc_1c24:                                ; preds = %dec_label_pc_1c0c
  %7 = call i32* @shmat(i32 %5, i32* null, i32 0), !insn.addr !343
  %8 = icmp eq i32* %7, inttoptr (i32 -1 to i32*), !insn.addr !344
  store i32 -3, i32* %r4.0.reg2mem, !insn.addr !345
  br i1 %8, label %dec_label_pc_1c84, label %dec_label_pc_1c3c, !insn.addr !345

dec_label_pc_1c3c:                                ; preds = %dec_label_pc_1c24
  %9 = call i32* @memcpy(i32* %7, i32* bitcast ([13 x i8]* @global_var_2af0 to i32*), i32 13), !insn.addr !346
  %10 = bitcast i32* %7 to i8*, !insn.addr !347
  %11 = call i32 @strlen(i8* %10), !insn.addr !347
  %12 = call i32 @shmdt(i32* %7), !insn.addr !348
  %13 = call i32 @shmctl(i32 %5, i32 0, %shmid_ds* null), !insn.addr !349
  ret i32 %11, !insn.addr !350

dec_label_pc_1c84:                                ; preds = %dec_label_pc_1c24, %dec_label_pc_1c0c, %dec_label_pc_1bf0, %dec_label_pc_1bc8
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !351

; uselistorder directives
  uselistorder i32* %7, { 1, 0, 2, 3 }
  uselistorder i32 (i8*)* @strlen, { 4, 3, 2, 1, 0, 5 }
  uselistorder i32* (i32*, i32*, i32)* @memcpy, { 1, 0, 2 }
  uselistorder i32 (i32)* @close, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
}

define i32 @call_shmget_shmat() local_unnamed_addr {
dec_label_pc_1cac:
  %0 = call i32 @param_shmget_shmat(), !insn.addr !352
  %1 = icmp sgt i32 %0, 0, !insn.addr !353
  %spec.select = select i1 %1, i32 42, i32 -1
  ret i32 %spec.select, !insn.addr !354
}

define i32 @param_signal_handling(i32 %arg1) local_unnamed_addr {
dec_label_pc_1ccc:
  %r5.1.reg2mem = alloca i32, !insn.addr !355
  %r5.0.reg2mem = alloca i32, !insn.addr !355
  %merge.reg2mem = alloca i32, !insn.addr !355
  %0 = call void (i32)* @signal(i32 10, void (i32)* inttoptr (i32 7680 to void (i32)*)), !insn.addr !356
  %1 = ptrtoint void (i32)* %0 to i32, !insn.addr !356
  %2 = icmp eq void (i32)* %0, inttoptr (i32 -1 to void (i32)*), !insn.addr !357
  store i32 %1, i32* %merge.reg2mem, !insn.addr !358
  br i1 %2, label %dec_label_pc_1dec, label %dec_label_pc_1cf0, !insn.addr !358

dec_label_pc_1dec:                                ; preds = %dec_label_pc_1d4c, %dec_label_pc_1dac, %dec_label_pc_1dd0, %dec_label_pc_1d68, %dec_label_pc_1dc4, %dec_label_pc_1cf0, %dec_label_pc_1ccc
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !358

dec_label_pc_1cf0:                                ; preds = %dec_label_pc_1ccc
  %3 = call void (i32)* @signal(i32 14, void (i32)* inttoptr (i32 7680 to void (i32)*)), !insn.addr !359
  %4 = icmp eq void (i32)* %3, inttoptr (i32 -1 to void (i32)*), !insn.addr !360
  store i32 -2, i32* %merge.reg2mem, !insn.addr !361
  br i1 %4, label %dec_label_pc_1dec, label %dec_label_pc_1d10, !insn.addr !361

dec_label_pc_1d10:                                ; preds = %dec_label_pc_1cf0
  store i32 0, i32* @global_var_14148, align 4, !insn.addr !362
  %5 = call i32 @raise(i32 10), !insn.addr !363
  %6 = load i32, i32* @global_var_14148, align 4
  %7 = icmp eq i32 %6, 0, !insn.addr !364
  store i32 ptrtoint (i32* @global_var_3e8 to i32), i32* %r5.0.reg2mem, !insn.addr !365
  br i1 %7, label %dec_label_pc_1d38, label %dec_label_pc_1d68, !insn.addr !365

dec_label_pc_1d38:                                ; preds = %dec_label_pc_1d10, %dec_label_pc_1d4c
  %8 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !366
  %9 = load i32, i32* @global_var_14148, align 4
  %10 = icmp eq i32 %9, 0, !insn.addr !367
  br i1 %10, label %dec_label_pc_1d4c, label %dec_label_pc_1d68, !insn.addr !368

dec_label_pc_1d4c:                                ; preds = %dec_label_pc_1d38
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %11 = add i32 %r5.0.reload, -1, !insn.addr !369
  %12 = icmp eq i32 %r5.0.reload, 0, !insn.addr !369
  %13 = icmp ne i1 %12, true, !insn.addr !369
  %14 = icmp eq i32 %r5.0.reload, 1, !insn.addr !369
  %15 = icmp ne i1 %14, true, !insn.addr !370
  %16 = icmp eq i1 %13, %15, !insn.addr !370
  store i32 -3, i32* %merge.reg2mem, !insn.addr !370
  store i32 %11, i32* %r5.0.reg2mem, !insn.addr !370
  br i1 %16, label %dec_label_pc_1d38, label %dec_label_pc_1dec, !insn.addr !370

dec_label_pc_1d68:                                ; preds = %dec_label_pc_1d38, %dec_label_pc_1d10
  %17 = load i32, i32* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_14140 to i32), i32 12) to i32*), align 4, !insn.addr !371
  %18 = icmp eq i32 %17, 10, !insn.addr !372
  store i32 -4, i32* %merge.reg2mem, !insn.addr !373
  br i1 %18, label %dec_label_pc_1d78, label %dec_label_pc_1dec, !insn.addr !373

dec_label_pc_1d78:                                ; preds = %dec_label_pc_1d68
  store i32 0, i32* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_14140 to i32), i32 8) to i32*), align 4, !insn.addr !374
  %19 = call i32 @alarm(i32 1), !insn.addr !375
  %20 = load i32, i32* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_14140 to i32), i32 8) to i32*), align 4
  %21 = icmp eq i32 %20, 0, !insn.addr !376
  store i32 ptrtoint ([5 x i8]* @global_var_7d0 to i32), i32* %r5.1.reg2mem, !insn.addr !377
  br i1 %21, label %dec_label_pc_1d98, label %dec_label_pc_1dc4, !insn.addr !377

dec_label_pc_1d98:                                ; preds = %dec_label_pc_1d78, %dec_label_pc_1dac
  %22 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !378
  %23 = load i32, i32* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_14140 to i32), i32 8) to i32*), align 4
  %24 = icmp eq i32 %23, 0, !insn.addr !379
  br i1 %24, label %dec_label_pc_1dac, label %dec_label_pc_1dc4, !insn.addr !380

dec_label_pc_1dac:                                ; preds = %dec_label_pc_1d98
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %25 = add i32 %r5.1.reload, -1, !insn.addr !381
  %26 = icmp eq i32 %r5.1.reload, 0, !insn.addr !381
  %27 = icmp ne i1 %26, true, !insn.addr !381
  %28 = icmp eq i32 %r5.1.reload, 1, !insn.addr !381
  %29 = icmp ne i1 %28, true, !insn.addr !382
  %30 = icmp eq i1 %27, %29, !insn.addr !382
  store i32 -5, i32* %merge.reg2mem, !insn.addr !382
  store i32 %25, i32* %r5.1.reg2mem, !insn.addr !382
  br i1 %30, label %dec_label_pc_1d98, label %dec_label_pc_1dec, !insn.addr !382

dec_label_pc_1dc4:                                ; preds = %dec_label_pc_1d98, %dec_label_pc_1d78
  %31 = load i32, i32* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_14140 to i32), i32 12) to i32*), align 4, !insn.addr !383
  %32 = icmp eq i32 %31, 14, !insn.addr !384
  store i32 -5, i32* %merge.reg2mem, !insn.addr !385
  br i1 %32, label %dec_label_pc_1dd0, label %dec_label_pc_1dec, !insn.addr !385

dec_label_pc_1dd0:                                ; preds = %dec_label_pc_1dc4
  %33 = call void (i32)* @signal(i32 10, void (i32)* null), !insn.addr !386
  %34 = call void (i32)* @signal(i32 14, void (i32)* null), !insn.addr !387
  store i32 42, i32* %merge.reg2mem, !insn.addr !388
  br label %dec_label_pc_1dec, !insn.addr !388

; uselistorder directives
  uselistorder i32 %r5.1.reload, { 2, 0, 1 }
  uselistorder i32 %r5.0.reload, { 2, 0, 1 }
  uselistorder i32* %merge.reg2mem, { 5, 4, 2, 3, 1, 6, 0, 7 }
  uselistorder i32* %r5.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.1.reg2mem, { 2, 0, 1 }
  uselistorder i32 -5, { 1, 0 }
  uselistorder i32* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_14140 to i32), i32 8) to i32*), { 2, 1, 0 }
  uselistorder i32 -4, { 0, 2, 1 }
  uselistorder i32* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_14140 to i32), i32 12) to i32*), { 1, 0 }
  uselistorder i32 14, { 0, 2, 1 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i32 10, { 0, 3, 1, 2, 4 }
  uselistorder label %dec_label_pc_1d98, { 1, 0 }
  uselistorder label %dec_label_pc_1d38, { 1, 0 }
  uselistorder label %dec_label_pc_1dec, { 2, 4, 1, 3, 0, 5, 6 }
}

define i32 @signal_handler(i32 %arg1) local_unnamed_addr {
dec_label_pc_1e00:
  store i32 1, i32* @global_var_14148, align 4, !insn.addr !389
  store i32 %arg1, i32* @global_var_1414c, align 4, !insn.addr !390
  ret i32 %arg1, !insn.addr !391

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0 }
}

define i32 @call_signal_handling() local_unnamed_addr {
dec_label_pc_1e1c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @param_signal_handling(i32 %1), !insn.addr !392
  ret i32 %2, !insn.addr !392
}

define i32 @test_system_calls() local_unnamed_addr {
dec_label_pc_1e20:
  %stack_var_-104 = alloca i32, align 4
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_2e8a to i8*)), !insn.addr !393
  %1 = call i32 (i32, ...) @syscall(i32 5), !insn.addr !394
  %2 = add i32 %1, 1, !insn.addr !395
  %3 = icmp slt i32 %2, 1, !insn.addr !396
  br i1 %3, label %dec_label_pc_1e64, label %dec_label_pc_1e50, !insn.addr !396

dec_label_pc_1e50:                                ; preds = %dec_label_pc_1e20
  %4 = call i32 (i32, ...) @syscall(i32 6), !insn.addr !397
  br label %dec_label_pc_1e70, !insn.addr !398

dec_label_pc_1e64:                                ; preds = %dec_label_pc_1e20
  %5 = call i32* @__errno_location(), !insn.addr !399
  br label %dec_label_pc_1e70, !insn.addr !400

dec_label_pc_1e70:                                ; preds = %dec_label_pc_1e64, %dec_label_pc_1e50
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2cef to i8*)), !insn.addr !401
  %7 = bitcast i32* %stack_var_-104 to %stat*, !insn.addr !402
  %8 = call i32 @stat(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_2b42, i32 0, i32 0), %stat* nonnull %7), !insn.addr !402
  %9 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2d0b to i8*)), !insn.addr !403
  %10 = call i32 @fork(), !insn.addr !404
  %11 = icmp slt i32 %10, 0, !insn.addr !405
  br i1 %11, label %dec_label_pc_1f08, label %dec_label_pc_1ed0, !insn.addr !406

dec_label_pc_1ed0:                                ; preds = %dec_label_pc_1e70
  %12 = icmp eq i32 %10, 0, !insn.addr !405
  br i1 %12, label %dec_label_pc_1f78, label %dec_label_pc_1ed4, !insn.addr !407

dec_label_pc_1ed4:                                ; preds = %dec_label_pc_1ed0
  %13 = call i32 @waitpid(i32 %10, i32* nonnull %stack_var_-104, i32 0), !insn.addr !408
  br label %dec_label_pc_1f08

dec_label_pc_1f08:                                ; preds = %dec_label_pc_1ed4, %dec_label_pc_1e70
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2d27 to i8*)), !insn.addr !409
  %15 = call i32 @param_pipe_communication(), !insn.addr !410
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2d43 to i8*)), !insn.addr !411
  %17 = call i32 @param_socket_create(), !insn.addr !412
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2d5f to i8*)), !insn.addr !413
  %19 = call i32 @param_shmget_shmat(), !insn.addr !414
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2d7b to i8*)), !insn.addr !415
  %21 = call i32 @param_signal_handling(i32 %20), !insn.addr !416
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2d97 to i8*)), !insn.addr !417
  ret i32 %22, !insn.addr !418

dec_label_pc_1f78:                                ; preds = %dec_label_pc_1ed0
  %23 = call i32 (i8*, i8*, ...) @execl(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_2cc9, i32 0, i32 0), i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_2cc9, i32 0, i32 0)), !insn.addr !419
  call void @_exit(i32 127), !insn.addr !420
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !420

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
dec_label_pc_1fc4:
  %0 = mul i32 %arg1, %arg1, !insn.addr !421
  %1 = call i32* @malloc(i32 4), !insn.addr !422
  %2 = ptrtoint i32* %1 to i32, !insn.addr !422
  store i32 %0, i32* %1, align 4, !insn.addr !423
  ret i32 %2, !insn.addr !424

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0 }
}

define i32 @param_pthread_create(i32 %arg1) local_unnamed_addr {
dec_label_pc_1fe4:
  %stack_var_-20 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  store i32 %arg1, i32* %stack_var_-16, align 4, !insn.addr !425
  %0 = call i32 @pthread_create(i32* nonnull %stack_var_-12, i32* null, i32* (i32*)* bitcast (i32* (i32*)** @global_var_1fc4 to i32* (i32*)*), i32* nonnull %stack_var_-16), !insn.addr !426
  %1 = icmp eq i32 %0, 0, !insn.addr !427
  br i1 %1, label %dec_label_pc_2024, label %dec_label_pc_2014, !insn.addr !428

dec_label_pc_2014:                                ; preds = %dec_label_pc_1fe4
  ret i32 -1, !insn.addr !429

dec_label_pc_2024:                                ; preds = %dec_label_pc_1fe4
  %2 = load i32, i32* %stack_var_-12, align 4, !insn.addr !430
  %3 = bitcast i32* %stack_var_-20 to i32**, !insn.addr !431
  %4 = call i32 @pthread_join(i32 %2, i32** nonnull %3), !insn.addr !431
  %5 = load i32, i32* %stack_var_-20, align 4, !insn.addr !432
  %6 = inttoptr i32 %5 to i32*, !insn.addr !433
  %7 = load i32, i32* %6, align 4, !insn.addr !433
  call void @free(i32* %6), !insn.addr !434
  ret i32 %7, !insn.addr !435

; uselistorder directives
  uselistorder i32* %stack_var_-12, { 1, 0 }
  uselistorder i32* %stack_var_-20, { 1, 0 }
}

define i32 @call_pthread_create() local_unnamed_addr {
dec_label_pc_2050:
  %stack_var_-20 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  store i32 7, i32* %stack_var_-16, align 4, !insn.addr !436
  %0 = call i32 @pthread_create(i32* nonnull %stack_var_-12, i32* null, i32* (i32*)* bitcast (i32* (i32*)** @global_var_1fc4 to i32* (i32*)*), i32* nonnull %stack_var_-16), !insn.addr !437
  %1 = icmp eq i32 %0, 0, !insn.addr !438
  br i1 %1, label %dec_label_pc_2094, label %dec_label_pc_2084, !insn.addr !439

dec_label_pc_2084:                                ; preds = %dec_label_pc_2050
  ret i32 -1, !insn.addr !440

dec_label_pc_2094:                                ; preds = %dec_label_pc_2050
  %2 = load i32, i32* %stack_var_-12, align 4, !insn.addr !441
  %3 = bitcast i32* %stack_var_-20 to i32**, !insn.addr !442
  %4 = call i32 @pthread_join(i32 %2, i32** nonnull %3), !insn.addr !442
  %5 = load i32, i32* %stack_var_-20, align 4, !insn.addr !443
  %6 = inttoptr i32 %5 to i32*, !insn.addr !444
  %7 = load i32, i32* %6, align 4, !insn.addr !444
  call void @free(i32* %6), !insn.addr !445
  ret i32 %7, !insn.addr !446

; uselistorder directives
  uselistorder i32* %stack_var_-12, { 1, 0 }
  uselistorder i32* %stack_var_-20, { 1, 0 }
}

define i32 @thread_sum(i32 %arg1) local_unnamed_addr {
dec_label_pc_20c0:
  %0 = add i32 %arg1, 8, !insn.addr !447
  %1 = inttoptr i32 %0 to i32*, !insn.addr !447
  store i32 0, i32* %1, align 4, !insn.addr !447
  %2 = add i32 %arg1, 4, !insn.addr !448
  %3 = inttoptr i32 %2 to i32*, !insn.addr !448
  %4 = load i32, i32* %3, align 4, !insn.addr !448
  %5 = icmp slt i32 %4, %arg1, !insn.addr !449
  br i1 %5, label %dec_label_pc_2104, label %dec_label_pc_20d8, !insn.addr !449

dec_label_pc_20d8:                                ; preds = %dec_label_pc_20c0
  %6 = sub i32 0, %arg1
  %7 = sub i32 %6, 1
  %8 = sub i32 %4, %arg1, !insn.addr !450
  %9 = add i32 %4, %7, !insn.addr !451
  %10 = zext i32 %9 to i64, !insn.addr !452
  %11 = zext i32 %8 to i64, !insn.addr !452
  %12 = mul nuw i64 %10, %11, !insn.addr !452
  %13 = trunc i64 %12 to i32, !insn.addr !452
  %14 = add i32 %arg1, 1, !insn.addr !453
  %15 = urem i64 %12, 4294967297
  %16 = icmp ne i64 %15, 0, !insn.addr !454
  %17 = zext i1 %16 to i32, !insn.addr !455
  %18 = and i64 %12, 4294967295, !insn.addr !455
  %19 = sub i32 33, %13, !insn.addr !455
  %20 = zext i32 %19 to i64, !insn.addr !455
  %21 = shl i64 %18, %20, !insn.addr !455
  %22 = sub i32 32, %13, !insn.addr !455
  %23 = shl i32 %17, %22, !insn.addr !455
  %24 = trunc i64 %21 to i32
  %25 = or i32 %23, %24, !insn.addr !455
  %26 = mul i32 %8, %14, !insn.addr !456
  %27 = add i32 %26, %arg1, !insn.addr !456
  %28 = add i32 %27, %25, !insn.addr !457
  store i32 %28, i32* %1, align 4, !insn.addr !458
  br label %dec_label_pc_2104, !insn.addr !458

dec_label_pc_2104:                                ; preds = %dec_label_pc_20d8, %dec_label_pc_20c0
  ret i32 0, !insn.addr !459

; uselistorder directives
  uselistorder i32 %13, { 1, 0 }
  uselistorder i64 %12, { 1, 0, 2 }
  uselistorder i32 %arg1, { 1, 3, 2, 0, 4, 6, 5 }
}

define i32 @param_pthread_join() local_unnamed_addr {
dec_label_pc_2110:
  %r4.0.reg2mem = alloca i32, !insn.addr !460
  %stack_var_-20 = alloca i32, align 4
  %stack_var_-24 = alloca i32, align 4
  %stack_var_-52 = alloca i32, align 4
  %stack_var_-40 = alloca i32, align 4
  %stack_var_-28 = alloca i32, align 4
  %stack_var_-64 = alloca i32, align 4
  store i32 21, i32* %stack_var_-40, align 4, !insn.addr !461
  store i32 11, i32* %stack_var_-52, align 4, !insn.addr !462
  store i32 1, i32* %stack_var_-64, align 4, !insn.addr !463
  %0 = call i32 @pthread_create(i32* nonnull %stack_var_-28, i32* null, i32* (i32*)* inttoptr (i32 8384 to i32* (i32*)*), i32* nonnull %stack_var_-64), !insn.addr !464
  %1 = icmp eq i32 %0, 0, !insn.addr !465
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !466
  br i1 %1, label %dec_label_pc_2194, label %dec_label_pc_2184, !insn.addr !466

dec_label_pc_2184:                                ; preds = %dec_label_pc_2204, %dec_label_pc_21ec, %dec_label_pc_21d4, %dec_label_pc_21b4, %dec_label_pc_2194, %dec_label_pc_2110
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !467

dec_label_pc_2194:                                ; preds = %dec_label_pc_2110
  %2 = call i32 @pthread_create(i32* nonnull %stack_var_-24, i32* null, i32* (i32*)* inttoptr (i32 8384 to i32* (i32*)*), i32* nonnull %stack_var_-52), !insn.addr !468
  %3 = icmp eq i32 %2, 0, !insn.addr !469
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !470
  br i1 %3, label %dec_label_pc_21b4, label %dec_label_pc_2184, !insn.addr !470

dec_label_pc_21b4:                                ; preds = %dec_label_pc_2194
  %4 = call i32 @pthread_create(i32* nonnull %stack_var_-20, i32* null, i32* (i32*)* inttoptr (i32 8384 to i32* (i32*)*), i32* nonnull %stack_var_-40), !insn.addr !471
  %5 = icmp eq i32 %4, 0, !insn.addr !472
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !473
  br i1 %5, label %dec_label_pc_21d4, label %dec_label_pc_2184, !insn.addr !473

dec_label_pc_21d4:                                ; preds = %dec_label_pc_21b4
  %6 = load i32, i32* %stack_var_-28, align 4, !insn.addr !474
  %7 = call i32 @pthread_join(i32 %6, i32** null), !insn.addr !475
  %8 = icmp eq i32 %7, 0, !insn.addr !476
  store i32 -2, i32* %r4.0.reg2mem, !insn.addr !477
  br i1 %8, label %dec_label_pc_21ec, label %dec_label_pc_2184, !insn.addr !477

dec_label_pc_21ec:                                ; preds = %dec_label_pc_21d4
  %9 = load i32, i32* %stack_var_-24, align 4, !insn.addr !478
  %10 = call i32 @pthread_join(i32 %9, i32** null), !insn.addr !479
  %11 = icmp eq i32 %10, 0, !insn.addr !480
  store i32 -2, i32* %r4.0.reg2mem, !insn.addr !481
  br i1 %11, label %dec_label_pc_2204, label %dec_label_pc_2184, !insn.addr !481

dec_label_pc_2204:                                ; preds = %dec_label_pc_21ec
  %12 = load i32, i32* %stack_var_-20, align 4, !insn.addr !482
  %13 = call i32 @pthread_join(i32 %12, i32** null), !insn.addr !483
  %14 = icmp eq i32 %13, 0, !insn.addr !484
  %spec.select = select i1 %14, i32 0, i32 -2
  store i32 %spec.select, i32* %r4.0.reg2mem
  br label %dec_label_pc_2184

; uselistorder directives
  uselistorder i32* %stack_var_-28, { 1, 0 }
  uselistorder i32* %stack_var_-24, { 1, 0 }
  uselistorder i32* %stack_var_-20, { 1, 0 }
  uselistorder i32* %r4.0.reg2mem, { 1, 6, 5, 4, 3, 0, 2 }
}

define i32 @call_pthread_join() local_unnamed_addr {
dec_label_pc_2240:
  %0 = call i32 @param_pthread_join(), !insn.addr !485
  ret i32 %0, !insn.addr !485
}

define i32 @thread_increment(i32 %arg1) local_unnamed_addr {
dec_label_pc_2244:
  %r5.0.reg2mem = alloca i32, !insn.addr !486
  %0 = icmp slt i32 %arg1, 1, !insn.addr !487
  store i32 %arg1, i32* %r5.0.reg2mem, !insn.addr !487
  br i1 %0, label %dec_label_pc_228c, label %dec_label_pc_2260, !insn.addr !487

dec_label_pc_2260:                                ; preds = %dec_label_pc_2244, %dec_label_pc_2260
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %1 = call i32 @pthread_mutex_lock(i32* nonnull @global_var_14154), !insn.addr !488
  %2 = load i32, i32* @global_var_14150, align 4, !insn.addr !489
  %3 = add i32 %2, 1, !insn.addr !490
  store i32 %3, i32* @global_var_14150, align 4, !insn.addr !491
  %4 = call i32 @pthread_mutex_unlock(i32* nonnull @global_var_14154), !insn.addr !492
  %5 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !493
  %6 = add i32 %r5.0.reload, -1, !insn.addr !494
  %7 = icmp eq i32 %r5.0.reload, 1, !insn.addr !494
  store i32 %6, i32* %r5.0.reg2mem, !insn.addr !495
  br i1 %7, label %dec_label_pc_228c, label %dec_label_pc_2260, !insn.addr !495

dec_label_pc_228c:                                ; preds = %dec_label_pc_2260, %dec_label_pc_2244
  ret i32 0, !insn.addr !496

; uselistorder directives
  uselistorder i32 %r5.0.reload, { 1, 0 }
  uselistorder i32* %r5.0.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i32)* @usleep, { 2, 1, 0, 3 }
  uselistorder i32* @global_var_14154, { 1, 0 }
  uselistorder label %dec_label_pc_2260, { 1, 0 }
}

define i32 @param_mutex_lock(i32 %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_229c:
  %r5.1.reg2mem = alloca i32, !insn.addr !497
  %r4.1.reg2mem = alloca i32, !insn.addr !497
  %r5.0.reg2mem = alloca i32, !insn.addr !497
  %r4.0.reg2mem = alloca i32, !insn.addr !497
  %0 = ptrtoint i32* %arg2 to i32
  %stack_var_-36 = alloca i32, align 4
  %1 = mul i32 %arg1, 4, !insn.addr !498
  store i32 %0, i32* %stack_var_-36, align 4, !insn.addr !499
  %2 = call i32* @malloc(i32 %1), !insn.addr !500
  %3 = icmp eq i32* %2, null, !insn.addr !501
  br i1 %3, label %dec_label_pc_2364, label %dec_label_pc_22bc, !insn.addr !502

dec_label_pc_22bc:                                ; preds = %dec_label_pc_229c
  %4 = ptrtoint i32* %2 to i32, !insn.addr !500
  store i32 0, i32* @global_var_14150, align 4, !insn.addr !503
  %5 = icmp slt i32 %arg1, 1, !insn.addr !504
  store i32 %arg1, i32* %r4.0.reg2mem, !insn.addr !504
  store i32 %4, i32* %r5.0.reg2mem, !insn.addr !504
  br i1 %5, label %dec_label_pc_2338, label %dec_label_pc_22ec, !insn.addr !504

dec_label_pc_22ec:                                ; preds = %dec_label_pc_22bc, %dec_label_pc_2308
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %6 = inttoptr i32 %r5.0.reload to i32*, !insn.addr !505
  %7 = call i32 @pthread_create(i32* %6, i32* null, i32* (i32*)* inttoptr (i32 8772 to i32* (i32*)*), i32* nonnull %stack_var_-36), !insn.addr !505
  %8 = icmp eq i32 %7, 0, !insn.addr !506
  br i1 %8, label %dec_label_pc_2308, label %dec_label_pc_2374, !insn.addr !507

dec_label_pc_2308:                                ; preds = %dec_label_pc_22ec
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %9 = add i32 %r5.0.reload, 4, !insn.addr !508
  %10 = add i32 %r4.0.reload, -1, !insn.addr !509
  %11 = icmp eq i32 %r4.0.reload, 1, !insn.addr !509
  store i32 %10, i32* %r4.0.reg2mem, !insn.addr !510
  store i32 %9, i32* %r5.0.reg2mem, !insn.addr !510
  store i32 %4, i32* %r4.1.reg2mem, !insn.addr !510
  store i32 %arg1, i32* %r5.1.reg2mem, !insn.addr !510
  br i1 %11, label %dec_label_pc_2324, label %dec_label_pc_22ec, !insn.addr !510

dec_label_pc_2324:                                ; preds = %dec_label_pc_2308, %dec_label_pc_2324
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %12 = inttoptr i32 %r4.1.reload to i32*, !insn.addr !511
  %13 = load i32, i32* %12, align 4, !insn.addr !511
  %14 = add i32 %r4.1.reload, 4, !insn.addr !511
  %15 = call i32 @pthread_join(i32 %13, i32** null), !insn.addr !512
  %16 = add i32 %r5.1.reload, -1, !insn.addr !513
  %17 = icmp eq i32 %r5.1.reload, 1, !insn.addr !513
  store i32 %14, i32* %r4.1.reg2mem, !insn.addr !514
  store i32 %16, i32* %r5.1.reg2mem, !insn.addr !514
  br i1 %17, label %dec_label_pc_2338, label %dec_label_pc_2324, !insn.addr !514

dec_label_pc_2338:                                ; preds = %dec_label_pc_2324, %dec_label_pc_22bc
  call void @free(i32* nonnull %2), !insn.addr !515
  %18 = load i32, i32* %stack_var_-36, align 4, !insn.addr !516
  %19 = load i32, i32* @global_var_14150, align 4, !insn.addr !517
  %20 = mul i32 %18, %arg1, !insn.addr !518
  %21 = icmp eq i32 %19, %20, !insn.addr !519
  %spec.select = select i1 %21, i32 42, i32 -3
  ret i32 %spec.select, !insn.addr !520

dec_label_pc_2364:                                ; preds = %dec_label_pc_229c
  ret i32 -1, !insn.addr !521

dec_label_pc_2374:                                ; preds = %dec_label_pc_22ec
  call void @free(i32* nonnull %2), !insn.addr !522
  ret i32 -2, !insn.addr !523

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
  uselistorder i32 %arg1, { 3, 0, 1, 4, 2 }
  uselistorder label %dec_label_pc_2324, { 1, 0 }
  uselistorder label %dec_label_pc_22ec, { 1, 0 }
}

define i32 @call_mutex_lock() local_unnamed_addr {
dec_label_pc_2394:
  %0 = call i32 @param_mutex_lock(i32 4, i32* nonnull @global_var_3e8), !insn.addr !524
  ret i32 %0, !insn.addr !524
}

define i32 @consumer_thread() local_unnamed_addr {
dec_label_pc_23a0:
  %0 = call i32 @pthread_mutex_lock(i32* nonnull @global_var_1416c), !insn.addr !525
  %1 = load i8, i8* bitcast (i8** @global_var_14140 to i8*), align 4, !insn.addr !526
  %2 = icmp eq i8 %1, 0, !insn.addr !527
  br i1 %2, label %dec_label_pc_23c8, label %dec_label_pc_23e0, !insn.addr !528

dec_label_pc_23c8:                                ; preds = %dec_label_pc_23a0, %dec_label_pc_23c8
  %3 = call i32 @pthread_cond_wait(i32* nonnull @global_var_14188, i32* nonnull @global_var_1416c), !insn.addr !529
  %4 = load i8, i8* bitcast (i8** @global_var_14140 to i8*), align 4, !insn.addr !530
  %5 = icmp eq i8 %4, 1, !insn.addr !531
  br i1 %5, label %dec_label_pc_23e0, label %dec_label_pc_23c8, !insn.addr !532

dec_label_pc_23e0:                                ; preds = %dec_label_pc_23c8, %dec_label_pc_23a0
  %6 = load i8, i8* @global_var_14144, align 1, !insn.addr !533
  %7 = call i32 @pthread_mutex_unlock(i32* nonnull @global_var_1416c), !insn.addr !534
  %8 = icmp eq i8 %6, 0, !insn.addr !535
  %narrow = select i1 %8, i8 0, i8 42
  %spec.select = zext i8 %narrow to i32
  %9 = call i32* @malloc(i32 4), !insn.addr !536
  %10 = ptrtoint i32* %9 to i32, !insn.addr !536
  store i32 %spec.select, i32* %9, align 4, !insn.addr !537
  ret i32 %10, !insn.addr !538

; uselistorder directives
  uselistorder label %dec_label_pc_23c8, { 1, 0 }
}

define i32 @producer_thread() local_unnamed_addr {
dec_label_pc_240c:
  %0 = call i32 @sleep(i32 1), !insn.addr !539
  %1 = call i32 @pthread_mutex_lock(i32* nonnull @global_var_1416c), !insn.addr !540
  store i8 1, i8* @global_var_14144, align 1, !insn.addr !541
  store i8 1, i8* bitcast (i8** @global_var_14140 to i8*), align 4, !insn.addr !542
  %2 = call i32 @pthread_cond_signal(i32* nonnull @global_var_14188), !insn.addr !543
  %3 = call i32 @pthread_mutex_unlock(i32* nonnull @global_var_1416c), !insn.addr !544
  ret i32 0, !insn.addr !545

; uselistorder directives
  uselistorder i32 (i32*)* @pthread_mutex_unlock, { 2, 1, 0, 3 }
  uselistorder i32* @global_var_14188, { 1, 0 }
  uselistorder i32 (i32*)* @pthread_mutex_lock, { 2, 1, 0, 3 }
  uselistorder i32* @global_var_1416c, { 2, 3, 1, 0, 4 }
}

define i32 @param_condition_variable() local_unnamed_addr {
dec_label_pc_2458:
  %stack_var_-20 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  store i8 0, i8* @global_var_14144, align 1, !insn.addr !546
  store i8 0, i8* bitcast (i8** @global_var_14140 to i8*), align 4, !insn.addr !547
  %0 = call i32 @pthread_create(i32* nonnull %stack_var_-16, i32* null, i32* (i32*)* inttoptr (i32 9120 to i32* (i32*)*), i32* null), !insn.addr !548
  %1 = icmp eq i32 %0, 0, !insn.addr !549
  br i1 %1, label %dec_label_pc_24a8, label %dec_label_pc_2498, !insn.addr !550

dec_label_pc_2498:                                ; preds = %dec_label_pc_2458
  ret i32 -1, !insn.addr !551

dec_label_pc_24a8:                                ; preds = %dec_label_pc_2458
  %2 = call i32 @pthread_create(i32* nonnull %stack_var_-12, i32* null, i32* (i32*)* inttoptr (i32 9228 to i32* (i32*)*), i32* null), !insn.addr !552
  %3 = icmp eq i32 %2, 0, !insn.addr !553
  %4 = load i32, i32* %stack_var_-16, align 4
  br i1 %3, label %dec_label_pc_24e4, label %dec_label_pc_24c8, !insn.addr !554

dec_label_pc_24c8:                                ; preds = %dec_label_pc_24a8
  %5 = call i32 @pthread_cancel(i32 %4), !insn.addr !555
  ret i32 -2, !insn.addr !556

dec_label_pc_24e4:                                ; preds = %dec_label_pc_24a8
  %6 = bitcast i32* %stack_var_-20 to i32**, !insn.addr !557
  %7 = call i32 @pthread_join(i32 %4, i32** nonnull %6), !insn.addr !557
  %8 = load i32, i32* %stack_var_-12, align 4, !insn.addr !558
  %9 = call i32 @pthread_join(i32 %8, i32** null), !insn.addr !559
  %10 = load i32, i32* %stack_var_-20, align 4, !insn.addr !560
  %11 = inttoptr i32 %10 to i32*, !insn.addr !561
  %12 = load i32, i32* %11, align 4, !insn.addr !561
  call void @free(i32* %11), !insn.addr !562
  ret i32 %12, !insn.addr !563

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32* %stack_var_-16, { 1, 0 }
  uselistorder i32* %stack_var_-12, { 1, 0 }
  uselistorder i32* %stack_var_-20, { 1, 0 }
  uselistorder i8** @global_var_14140, { 1, 0 }
  uselistorder i8* bitcast (i8** @global_var_14140 to i8*), { 0, 1, 3, 2 }
  uselistorder i8* @global_var_14144, { 2, 1, 0 }
  uselistorder i8 0, { 1, 2, 0, 3, 4, 5, 6, 7, 8 }
}

define i32 @call_condition_variable() local_unnamed_addr {
dec_label_pc_2524:
  %0 = call i32 @param_condition_variable(), !insn.addr !564
  ret i32 %0, !insn.addr !564
}

define i32 @thread_atomic_increment(i32 %arg1) local_unnamed_addr {
dec_label_pc_2528:
  %r7.0.reg2mem = alloca i32, !insn.addr !565
  %stack_var_-28 = alloca i32, align 4
  %0 = icmp slt i32 %arg1, 1, !insn.addr !566
  store i32 0, i32* %r7.0.reg2mem, !insn.addr !566
  br i1 %0, label %dec_label_pc_2588, label %dec_label_pc_2550, !insn.addr !566

dec_label_pc_2550:                                ; preds = %dec_label_pc_2528, %dec_label_pc_2550
  %r7.0.reload = load i32, i32* %r7.0.reg2mem
  %1 = call i32 @__atomic_fetch_add_4(i32 ptrtoint (i32* @global_var_14138 to i32), i32 1, i32 5), !insn.addr !567
  %2 = add i32 %r7.0.reload, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !568
  store i32 %r7.0.reload, i32* %stack_var_-28, align 4, !insn.addr !569
  %3 = call i32 @__atomic_compare_exchange_4(i32 ptrtoint (i32* @global_var_14138 to i32), i32* nonnull %stack_var_-28, i32 %2, i32 5, i32 5, i32 %r7.0.reload), !insn.addr !570
  %4 = add nuw i32 %r7.0.reload, 1, !insn.addr !571
  %5 = icmp eq i32 %4, %arg1, !insn.addr !572
  store i32 %4, i32* %r7.0.reg2mem, !insn.addr !573
  br i1 %5, label %dec_label_pc_2588, label %dec_label_pc_2550, !insn.addr !573

dec_label_pc_2588:                                ; preds = %dec_label_pc_2550, %dec_label_pc_2528
  ret i32 0, !insn.addr !574

; uselistorder directives
  uselistorder i32* %r7.0.reg2mem, { 2, 0, 1 }
  uselistorder i32 ptrtoint (i32* @global_var_3e8 to i32), { 4, 1, 2, 3, 0 }
  uselistorder label %dec_label_pc_2550, { 1, 0 }
}

define i32 @thread_atomic_load_store() local_unnamed_addr {
dec_label_pc_259c:
  %0 = call i32 @__atomic_load_4(i32 ptrtoint (i32* @global_var_14138 to i32), i32 5), !insn.addr !575
  %1 = add i32 %0, 100, !insn.addr !576
  %2 = call i32 @__atomic_store_4(i32 ptrtoint (i32* @global_var_14138 to i32), i32 %1, i32 5), !insn.addr !577
  ret i32 0, !insn.addr !578
}

define i32 @param_atomic_ops(i32 %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_25d4:
  %r6.0.reg2mem = alloca i32, !insn.addr !579
  %r4.1.reg2mem = alloca i32, !insn.addr !579
  %r5.0.reg2mem = alloca i32, !insn.addr !579
  %r4.0.reg2mem = alloca i32, !insn.addr !579
  %0 = ptrtoint i32* %arg2 to i32
  %stack_var_-36 = alloca i32, align 4
  %stack_var_-40 = alloca i32, align 4
  %1 = mul i32 %arg1, 4, !insn.addr !580
  store i32 %0, i32* %stack_var_-36, align 4, !insn.addr !581
  %2 = call i32* @malloc(i32 %1), !insn.addr !582
  %3 = icmp eq i32* %2, null, !insn.addr !583
  br i1 %3, label %dec_label_pc_26d0, label %dec_label_pc_25f4, !insn.addr !584

dec_label_pc_25f4:                                ; preds = %dec_label_pc_25d4
  %4 = ptrtoint i32* %2 to i32, !insn.addr !582
  %5 = call i32 @__atomic_store_4(i32 ptrtoint (i32* @global_var_14138 to i32), i32 0, i32 5), !insn.addr !585
  %6 = icmp slt i32 %arg1, 1, !insn.addr !586
  store i32 %4, i32* %r4.0.reg2mem, !insn.addr !586
  store i32 %arg1, i32* %r5.0.reg2mem, !insn.addr !586
  br i1 %6, label %dec_label_pc_2650, label %dec_label_pc_2628, !insn.addr !586

dec_label_pc_2628:                                ; preds = %dec_label_pc_25f4, %dec_label_pc_2644
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %7 = inttoptr i32 %r4.0.reload to i32*, !insn.addr !587
  %8 = call i32 @pthread_create(i32* %7, i32* null, i32* (i32*)* inttoptr (i32 9512 to i32* (i32*)*), i32* nonnull %stack_var_-36), !insn.addr !587
  %9 = icmp eq i32 %8, 0, !insn.addr !588
  br i1 %9, label %dec_label_pc_2644, label %dec_label_pc_26e0, !insn.addr !589

dec_label_pc_2644:                                ; preds = %dec_label_pc_2628
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %10 = add i32 %r4.0.reload, 4, !insn.addr !590
  %11 = add i32 %r5.0.reload, -1, !insn.addr !591
  %12 = icmp eq i32 %r5.0.reload, 1, !insn.addr !591
  store i32 %10, i32* %r4.0.reg2mem, !insn.addr !592
  store i32 %11, i32* %r5.0.reg2mem, !insn.addr !592
  br i1 %12, label %dec_label_pc_2650, label %dec_label_pc_2628, !insn.addr !592

dec_label_pc_2650:                                ; preds = %dec_label_pc_2644, %dec_label_pc_25f4
  %13 = call i32 @pthread_create(i32* nonnull %stack_var_-40, i32* null, i32* (i32*)* inttoptr (i32 9628 to i32* (i32*)*), i32* null), !insn.addr !593
  %14 = icmp eq i32 %13, 0, !insn.addr !594
  br i1 %14, label %dec_label_pc_2670, label %dec_label_pc_267c, !insn.addr !595

dec_label_pc_2670:                                ; preds = %dec_label_pc_2650
  %15 = load i32, i32* %stack_var_-40, align 4, !insn.addr !596
  %16 = call i32 @pthread_join(i32 %15, i32** null), !insn.addr !597
  br label %dec_label_pc_267c, !insn.addr !597

dec_label_pc_267c:                                ; preds = %dec_label_pc_2650, %dec_label_pc_2670
  store i32 %4, i32* %r4.1.reg2mem, !insn.addr !598
  store i32 %arg1, i32* %r6.0.reg2mem, !insn.addr !598
  br i1 %6, label %dec_label_pc_269c, label %dec_label_pc_2688, !insn.addr !598

dec_label_pc_2688:                                ; preds = %dec_label_pc_267c, %dec_label_pc_2688
  %r6.0.reload = load i32, i32* %r6.0.reg2mem
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %17 = inttoptr i32 %r4.1.reload to i32*, !insn.addr !599
  %18 = load i32, i32* %17, align 4, !insn.addr !599
  %19 = add i32 %r4.1.reload, 4, !insn.addr !599
  %20 = call i32 @pthread_join(i32 %18, i32** null), !insn.addr !600
  %21 = add i32 %r6.0.reload, -1, !insn.addr !601
  %22 = icmp eq i32 %r6.0.reload, 1, !insn.addr !601
  store i32 %19, i32* %r4.1.reg2mem, !insn.addr !602
  store i32 %21, i32* %r6.0.reg2mem, !insn.addr !602
  br i1 %22, label %dec_label_pc_269c, label %dec_label_pc_2688, !insn.addr !602

dec_label_pc_269c:                                ; preds = %dec_label_pc_2688, %dec_label_pc_267c
  %23 = call i32 @__atomic_load_4(i32 ptrtoint (i32* @global_var_14138 to i32), i32 5), !insn.addr !603
  call void @free(i32* nonnull %2), !insn.addr !604
  %24 = icmp sgt i32 %23, 0, !insn.addr !605
  %spec.select = select i1 %24, i32 42, i32 -3
  ret i32 %spec.select, !insn.addr !606

dec_label_pc_26d0:                                ; preds = %dec_label_pc_25d4
  ret i32 -1, !insn.addr !607

dec_label_pc_26e0:                                ; preds = %dec_label_pc_2628
  call void @free(i32* nonnull %2), !insn.addr !608
  ret i32 -2, !insn.addr !609

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
  uselistorder i32 (i32, i32)* @__atomic_load_4, { 1, 0, 2 }
  uselistorder i32 (i32, i32, i32)* @__atomic_store_4, { 1, 0, 2 }
  uselistorder i32 5, { 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10 }
  uselistorder i32 ptrtoint (i32* @global_var_14138 to i32), { 2, 3, 4, 5, 1, 0 }
  uselistorder i32 %arg1, { 0, 1, 3, 2 }
  uselistorder label %dec_label_pc_2688, { 1, 0 }
  uselistorder label %dec_label_pc_267c, { 1, 0 }
  uselistorder label %dec_label_pc_2628, { 1, 0 }
}

define i32 @call_atomic_ops() local_unnamed_addr {
dec_label_pc_2708:
  %0 = call i32 @param_atomic_ops(i32 4, i32* nonnull @global_var_1f4), !insn.addr !610
  ret i32 %0, !insn.addr !610
}

define i32 @thread_tls_test(i32 %arg1) local_unnamed_addr {
dec_label_pc_2714:
  %0 = call i32 @__aeabi_read_tp(), !insn.addr !611
  %1 = add i32 %0, 8, !insn.addr !612
  %2 = inttoptr i32 %1 to i32*, !insn.addr !612
  %3 = load i32, i32* %2, align 4, !insn.addr !612
  %4 = add i32 %3, 50, !insn.addr !613
  store i32 %4, i32* %2, align 4, !insn.addr !614
  %5 = add i32 %0, 12, !insn.addr !615
  %6 = inttoptr i32 %5 to i8*, !insn.addr !616
  %7 = inttoptr i32 %arg1 to i8*, !insn.addr !616
  %8 = call i8* @strncpy(i8* %6, i8* %7, i32 31), !insn.addr !616
  %9 = call i32* @malloc(i32 8), !insn.addr !617
  %10 = ptrtoint i32* %9 to i32, !insn.addr !617
  store i32 %3, i32* %9, align 4, !insn.addr !618
  %11 = add i32 %10, 4, !insn.addr !618
  %12 = inttoptr i32 %11 to i32*, !insn.addr !618
  store i32 %4, i32* %12, align 4, !insn.addr !618
  ret i32 %10, !insn.addr !619

; uselistorder directives
  uselistorder i32 %10, { 1, 0 }
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32 12, { 4, 1, 2, 5, 3, 6, 0, 7 }
  uselistorder i32 8, { 2, 1, 4, 0, 3 }
}

define i32 @param_thread_local_storage(i32 %arg1) local_unnamed_addr {
dec_label_pc_275c:
  %r5.2.reg2mem = alloca i32, !insn.addr !620
  %sb.1.reg2mem = alloca i32, !insn.addr !620
  %r4.3.reg2mem = alloca i32, !insn.addr !620
  %sl.0.reg2mem = alloca i32, !insn.addr !620
  %sb.0.reg2mem = alloca i32, !insn.addr !620
  %r6.0.reg2mem = alloca i32, !insn.addr !620
  %r5.1.reg2mem = alloca i32, !insn.addr !620
  %r4.2.reg2mem = alloca i32, !insn.addr !620
  %r5.0.reg2mem = alloca i32, !insn.addr !620
  %r4.1.reg2mem = alloca i32, !insn.addr !620
  %r4.0.reg2mem = alloca i32, !insn.addr !620
  %stack_var_-40 = alloca i32, align 4
  %0 = mul i32 %arg1, 4, !insn.addr !621
  %1 = call i32* @malloc(i32 %0), !insn.addr !622
  %2 = call i32* @malloc(i32 %0), !insn.addr !623
  %3 = icmp eq i32* %1, null, !insn.addr !624
  %4 = icmp eq i32* %2, null
  %spec.select1 = or i1 %3, %4
  br i1 %spec.select1, label %dec_label_pc_2794, label %dec_label_pc_27a0, !insn.addr !625

dec_label_pc_2794:                                ; preds = %dec_label_pc_275c
  ret i32 -1, !insn.addr !626

dec_label_pc_27a0:                                ; preds = %dec_label_pc_275c
  %5 = ptrtoint i32* %1 to i32, !insn.addr !622
  %6 = ptrtoint i32* %2 to i32, !insn.addr !623
  %7 = icmp slt i32 %arg1, 1, !insn.addr !627
  store i32 0, i32* %r4.0.reg2mem, !insn.addr !627
  store i32 0, i32* %r4.3.reg2mem, !insn.addr !627
  store i32 0, i32* %sb.1.reg2mem, !insn.addr !627
  br i1 %7, label %dec_label_pc_2884, label %dec_label_pc_27b4, !insn.addr !627

dec_label_pc_27b4:                                ; preds = %dec_label_pc_27a0, %dec_label_pc_27b4
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %8 = call i32* @malloc(i32 16), !insn.addr !628
  %9 = ptrtoint i32* %8 to i32, !insn.addr !628
  %10 = mul i32 %r4.0.reload, 4, !insn.addr !629
  %11 = add i32 %10, %6, !insn.addr !629
  %12 = inttoptr i32 %11 to i32*, !insn.addr !629
  store i32 %9, i32* %12, align 4, !insn.addr !629
  %13 = bitcast i32* %8 to i8*, !insn.addr !630
  %14 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %13, i32 16, i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_5fb to i32), i32 10168) to i8*)), !insn.addr !630
  %15 = add nuw i32 %r4.0.reload, 1, !insn.addr !631
  %16 = icmp eq i32 %15, %arg1, !insn.addr !632
  store i32 %15, i32* %r4.0.reg2mem, !insn.addr !633
  store i32 %5, i32* %r4.1.reg2mem, !insn.addr !633
  store i32 0, i32* %r5.0.reg2mem, !insn.addr !633
  br i1 %16, label %dec_label_pc_27f4, label %dec_label_pc_27b4, !insn.addr !633

dec_label_pc_27f4:                                ; preds = %dec_label_pc_27b4, %dec_label_pc_2810
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %17 = mul i32 %r5.0.reload, 4, !insn.addr !634
  %18 = add i32 %17, %6, !insn.addr !634
  %19 = inttoptr i32 %18 to i32*, !insn.addr !634
  %20 = load i32, i32* %19, align 4, !insn.addr !634
  %21 = inttoptr i32 %r4.1.reload to i32*, !insn.addr !635
  %22 = inttoptr i32 %20 to i32*, !insn.addr !635
  %23 = call i32 @pthread_create(i32* %21, i32* null, i32* (i32*)* inttoptr (i32 10004 to i32* (i32*)*), i32* %22), !insn.addr !635
  %24 = icmp eq i32 %23, 0, !insn.addr !636
  %25 = add nuw i32 %r5.0.reload, 1
  store i32 0, i32* %r5.2.reg2mem, !insn.addr !637
  br i1 %24, label %dec_label_pc_2810, label %dec_label_pc_28d0, !insn.addr !637

dec_label_pc_2810:                                ; preds = %dec_label_pc_27f4
  %26 = add i32 %r4.1.reload, 4, !insn.addr !638
  %27 = icmp eq i32 %25, %arg1, !insn.addr !639
  store i32 %26, i32* %r4.1.reg2mem, !insn.addr !640
  store i32 %25, i32* %r5.0.reg2mem, !insn.addr !640
  br i1 %27, label %dec_label_pc_2840.preheader, label %dec_label_pc_27f4, !insn.addr !640

dec_label_pc_2840.preheader:                      ; preds = %dec_label_pc_2810
  %28 = bitcast i32* %stack_var_-40 to i32**, !insn.addr !641
  store i32 0, i32* %r4.2.reg2mem
  store i32 %5, i32* %r5.1.reg2mem
  store i32 %6, i32* %r6.0.reg2mem
  store i32 0, i32* %sb.0.reg2mem
  store i32 %arg1, i32* %sl.0.reg2mem
  br label %dec_label_pc_2840

dec_label_pc_2840:                                ; preds = %dec_label_pc_2840.preheader, %dec_label_pc_2840
  %sl.0.reload = load i32, i32* %sl.0.reg2mem
  %sb.0.reload = load i32, i32* %sb.0.reg2mem
  %r6.0.reload = load i32, i32* %r6.0.reg2mem
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %r4.2.reload = load i32, i32* %r4.2.reg2mem
  %29 = inttoptr i32 %r5.1.reload to i32*, !insn.addr !642
  %30 = load i32, i32* %29, align 4, !insn.addr !642
  %31 = add i32 %r5.1.reload, 4, !insn.addr !642
  %32 = call i32 @pthread_join(i32 %30, i32** nonnull %28), !insn.addr !641
  %33 = load i32, i32* %stack_var_-40, align 4, !insn.addr !643
  %34 = inttoptr i32 %33 to i32*, !insn.addr !644
  %35 = load i32, i32* %34, align 4, !insn.addr !644
  %36 = add i32 %33, 4, !insn.addr !644
  %37 = inttoptr i32 %36 to i32*, !insn.addr !644
  %38 = load i32, i32* %37, align 4, !insn.addr !644
  call void @free(i32* %34), !insn.addr !645
  %39 = inttoptr i32 %r6.0.reload to i32*, !insn.addr !646
  %40 = load i32, i32* %39, align 4, !insn.addr !646
  %41 = add i32 %r6.0.reload, 4, !insn.addr !646
  %42 = inttoptr i32 %40 to i32*, !insn.addr !647
  call void @free(i32* %42), !insn.addr !647
  %43 = add i32 %38, %sb.0.reload, !insn.addr !648
  %44 = add i32 %35, %r4.2.reload, !insn.addr !649
  %45 = add i32 %sl.0.reload, -1, !insn.addr !650
  %46 = icmp eq i32 %sl.0.reload, 1, !insn.addr !650
  store i32 %44, i32* %r4.2.reg2mem, !insn.addr !651
  store i32 %31, i32* %r5.1.reg2mem, !insn.addr !651
  store i32 %41, i32* %r6.0.reg2mem, !insn.addr !651
  store i32 %43, i32* %sb.0.reg2mem, !insn.addr !651
  store i32 %45, i32* %sl.0.reg2mem, !insn.addr !651
  store i32 %44, i32* %r4.3.reg2mem, !insn.addr !651
  store i32 %43, i32* %sb.1.reg2mem, !insn.addr !651
  br i1 %46, label %dec_label_pc_2884, label %dec_label_pc_2840, !insn.addr !651

dec_label_pc_2884:                                ; preds = %dec_label_pc_2840, %dec_label_pc_27a0
  %sb.1.reload = load i32, i32* %sb.1.reg2mem
  %r4.3.reload = load i32, i32* %r4.3.reg2mem
  call void @free(i32* %2), !insn.addr !652
  call void @free(i32* %1), !insn.addr !653
  %47 = mul i32 %arg1, 150, !insn.addr !654
  %48 = mul i32 %arg1, 100, !insn.addr !655
  %49 = icmp eq i32 %r4.3.reload, %48
  %50 = icmp eq i32 %sb.1.reload, %47
  %51 = icmp eq i1 %49, %50, !insn.addr !656
  %spec.select = select i1 %51, i32 42, i32 -3
  ret i32 %spec.select, !insn.addr !657

dec_label_pc_28d0:                                ; preds = %dec_label_pc_27f4, %dec_label_pc_28d0
  %r5.2.reload = load i32, i32* %r5.2.reg2mem
  %52 = mul i32 %r5.2.reload, 4, !insn.addr !658
  %53 = add i32 %52, %6, !insn.addr !658
  %54 = inttoptr i32 %53 to i32*, !insn.addr !658
  %55 = load i32, i32* %54, align 4, !insn.addr !658
  %56 = inttoptr i32 %55 to i32*, !insn.addr !659
  call void @free(i32* %56), !insn.addr !659
  %57 = add nuw i32 %r5.2.reload, 1, !insn.addr !660
  %58 = icmp eq i32 %25, %57, !insn.addr !661
  store i32 %57, i32* %r5.2.reg2mem, !insn.addr !662
  br i1 %58, label %dec_label_pc_28e4, label %dec_label_pc_28d0, !insn.addr !662

dec_label_pc_28e4:                                ; preds = %dec_label_pc_28d0
  call void @free(i32* %2), !insn.addr !663
  call void @free(i32* %1), !insn.addr !664
  ret i32 -2, !insn.addr !665

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
  uselistorder i32 -2, { 6, 7, 8, 9, 12, 1, 0, 2, 3, 10, 4, 5, 13, 14, 11 }
  uselistorder i32 -3, { 5, 6, 7, 0, 1, 4, 8, 2, 9, 3 }
  uselistorder i32 42, { 1, 2, 3, 0, 4, 13, 5, 6, 7, 8, 9, 10, 14, 11, 12, 15 }
  uselistorder i32 -1, { 29, 9, 10, 30, 31, 11, 12, 32, 33, 34, 2, 1, 0, 13, 14, 35, 36, 37, 22, 38, 3, 4, 15, 5, 23, 16, 6, 24, 25, 26, 27, 17, 39, 40, 18, 7, 28, 19, 20, 21, 8 }
  uselistorder i32* (i32)* @malloc, { 8, 7, 6, 5, 4, 3, 2, 1, 0, 9 }
  uselistorder i32 %arg1, { 5, 4, 0, 2, 3, 6, 1 }
  uselistorder label %dec_label_pc_28d0, { 1, 0 }
  uselistorder label %dec_label_pc_2840, { 1, 0 }
  uselistorder label %dec_label_pc_27f4, { 1, 0 }
  uselistorder label %dec_label_pc_27b4, { 1, 0 }
}

define i32 @call_thread_local_storage() local_unnamed_addr {
dec_label_pc_290c:
  %0 = call i32 @param_thread_local_storage(i32 4), !insn.addr !666
  ret i32 %0, !insn.addr !666
}

define i32 @test_thread_concurrency() local_unnamed_addr {
dec_label_pc_2914:
  %stack_var_-20 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  %0 = call i32 @puts(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_57d to i32), i32 10536) to i8*)), !insn.addr !667
  store i32 7, i32* %stack_var_-16, align 4, !insn.addr !668
  %1 = call i32 @pthread_create(i32* nonnull %stack_var_-12, i32* null, i32* (i32*)* bitcast (i32* (i32*)** @global_var_1fc4 to i32* (i32*)*), i32* nonnull %stack_var_-16), !insn.addr !669
  %2 = icmp eq i32 %1, 0, !insn.addr !670
  br i1 %2, label %dec_label_pc_2954, label %dec_label_pc_296c, !insn.addr !671

dec_label_pc_2954:                                ; preds = %dec_label_pc_2914
  %3 = load i32, i32* %stack_var_-12, align 4, !insn.addr !672
  %4 = bitcast i32* %stack_var_-20 to i32**, !insn.addr !673
  %5 = call i32 @pthread_join(i32 %3, i32** nonnull %4), !insn.addr !673
  %6 = load i32, i32* %stack_var_-20, align 4, !insn.addr !674
  %7 = inttoptr i32 %6 to i32*, !insn.addr !675
  call void @free(i32* %7), !insn.addr !675
  br label %dec_label_pc_296c, !insn.addr !675

dec_label_pc_296c:                                ; preds = %dec_label_pc_2914, %dec_label_pc_2954
  %8 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_441 to i32), i32 10620) to i8*)), !insn.addr !676
  %9 = call i32 @param_pthread_join(), !insn.addr !677
  %10 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_449 to i32), i32 10640) to i8*)), !insn.addr !678
  %11 = call i32 @param_mutex_lock(i32 4, i32* nonnull @global_var_3e8), !insn.addr !679
  %12 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_44a to i32), i32 10668) to i8*)), !insn.addr !680
  %13 = call i32 @param_condition_variable(), !insn.addr !681
  %14 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_452 to i32), i32 10688) to i8*)), !insn.addr !682
  %15 = call i32 @param_atomic_ops(i32 4, i32* nonnull @global_var_1f4), !insn.addr !683
  %16 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_452 to i32), i32 10716) to i8*)), !insn.addr !684
  %17 = call i32 @param_thread_local_storage(i32 4), !insn.addr !685
  %18 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_456 to i32), i32 10740) to i8*)), !insn.addr !686
  ret i32 %18, !insn.addr !687

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
  uselistorder i32 (i32, i32**)* @pthread_join, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder i32 (i32*, i32*, i32* (i32*)*, i32*)* @pthread_create, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder i32* null, { 1, 3, 0, 2, 5, 6, 7, 4, 8, 9, 10, 11, 13, 12, 14, 15, 16, 17, 18, 19, 20 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
  uselistorder label %dec_label_pc_296c, { 1, 0 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_2a20:
  %0 = call i32 @test_standard_library_functions(), !insn.addr !688
  %1 = call i32 @test_system_calls(), !insn.addr !689
  %2 = call i32 @test_thread_concurrency(), !insn.addr !690
  ret i32 0, !insn.addr !691

; uselistorder directives
  uselistorder i32 0, { 12, 130, 3, 4, 0, 131, 5, 1, 2, 6, 95, 132, 133, 96, 13, 14, 7, 134, 135, 15, 136, 97, 16, 22, 137, 138, 139, 140, 141, 142, 17, 11, 98, 143, 144, 99, 145, 146, 23, 147, 148, 100, 24, 149, 150, 101, 102, 103, 104, 151, 152, 153, 25, 26, 154, 155, 105, 106, 107, 108, 156, 157, 158, 27, 28, 159, 160, 161, 109, 162, 163, 164, 165, 110, 166, 167, 111, 112, 113, 168, 18, 8, 9, 169, 114, 10, 170, 29, 30, 171, 31, 32, 115, 33, 34, 20, 21, 35, 36, 37, 38, 39, 40, 41, 42, 43, 172, 44, 173, 45, 174, 19, 46, 175, 176, 177, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129 }
}

define i32 @__aeabi_read_tp() local_unnamed_addr {
dec_label_pc_2a40:
  %0 = call i32 @function_ffff0fe0(), !insn.addr !692
  ret i32 %0, !insn.addr !692
}

define i32 @_fini(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_2a48:
  ret i32 %arg1, !insn.addr !693
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
  uselistorder i32 1, { 14, 91, 90, 89, 126, 127, 128, 129, 70, 92, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 130, 131, 71, 94, 93, 29, 28, 27, 26, 132, 72, 73, 95, 30, 98, 97, 96, 74, 133, 134, 75, 99, 34, 33, 32, 31, 135, 136, 76, 35, 77, 105, 104, 103, 102, 101, 100, 36, 137, 55, 108, 107, 106, 111, 110, 109, 62, 138, 112, 13, 78, 139, 79, 140, 39, 38, 37, 40, 63, 141, 64, 142, 80, 59, 81, 114, 113, 116, 115, 41, 12, 117, 118, 42, 65, 143, 119, 11, 66, 144, 120, 10, 56, 67, 145, 43, 68, 146, 121, 147, 148, 47, 46, 45, 44, 149, 52, 51, 50, 49, 48, 9, 82, 83, 122, 53, 150, 8, 7, 124, 123, 54, 6, 57, 58, 60, 5, 4, 61, 3, 69, 2, 1, 0, 125, 84, 85, 86, 87, 88 }
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
!123 = !{i64 4788}
!124 = !{i64 4804}
!125 = !{i64 4824}
!126 = !{i64 4848}
!127 = !{i64 4852}
!128 = !{i64 4864}
!129 = !{i64 4872}
!130 = !{i64 4884}
!131 = !{i64 4896}
!132 = !{i64 4924}
!133 = !{i64 4928}
!134 = !{i64 4940}
!135 = !{i64 4948}
!136 = !{i64 4960}
!137 = !{i64 4968}
!138 = !{i64 4972}
!139 = !{i64 4980}
!140 = !{i64 4992}
!141 = !{i64 5012}
!142 = !{i64 5016}
!143 = !{i64 5020}
!144 = !{i64 5048}
!145 = !{i64 5052}
!146 = !{i64 5056}
!147 = !{i64 5064}
!148 = !{i64 5068}
!149 = !{i64 5088}
!150 = !{i64 5100}
!151 = !{i64 5108}
!152 = !{i64 5116}
!153 = !{i64 5124}
!154 = !{i64 5128}
!155 = !{i64 5148}
!156 = !{i64 5160}
!157 = !{i64 5164}
!158 = !{i64 5176}
!159 = !{i64 5200}
!160 = !{i64 5216}
!161 = !{i64 5240}
!162 = !{i64 5248}
!163 = !{i64 5256}
!164 = !{i64 5260}
!165 = !{i64 5264}
!166 = !{i64 5276}
!167 = !{i64 5280}
!168 = !{i64 5284}
!169 = !{i64 5332}
!170 = !{i64 5300}
!171 = !{i64 5304}
!172 = !{i64 5308}
!173 = !{i64 5312}
!174 = !{i64 5316}
!175 = !{i64 5320}
!176 = !{i64 5324}
!177 = !{i64 5328}
!178 = !{i64 5336}
!179 = !{i64 5344}
!180 = !{i64 5352}
!181 = !{i64 5356}
!182 = !{i64 5380}
!183 = !{i64 5384}
!184 = !{i64 5388}
!185 = !{i64 5396}
!186 = !{i64 5400}
!187 = !{i64 5404}
!188 = !{i64 5408}
!189 = !{i64 5420}
!190 = !{i64 5428}
!191 = !{i64 5444}
!192 = !{i64 5448}
!193 = !{i64 5452}
!194 = !{i64 5468}
!195 = !{i64 5472}
!196 = !{i64 5476}
!197 = !{i64 5484}
!198 = !{i64 5492}
!199 = !{i64 5500}
!200 = !{i64 5520}
!201 = !{i64 5544}
!202 = !{i64 5552}
!203 = !{i64 5568}
!204 = !{i64 5584}
!205 = !{i64 5600}
!206 = !{i64 5616}
!207 = !{i64 5644}
!208 = !{i64 5684}
!209 = !{i64 5720}
!210 = !{i64 5744}
!211 = !{i64 5760}
!212 = !{i64 5788}
!213 = !{i64 5824}
!214 = !{i64 5844}
!215 = !{i64 5848}
!216 = !{i64 5852}
!217 = !{i64 5860}
!218 = !{i64 5872}
!219 = !{i64 5884}
!220 = !{i64 5900}
!221 = !{i64 5912}
!222 = !{i64 5928}
!223 = !{i64 5944}
!224 = !{i64 5960}
!225 = !{i64 5976}
!226 = !{i64 5988}
!227 = !{i64 6104}
!228 = !{i64 6108}
!229 = !{i64 6112}
!230 = !{i64 6128}
!231 = !{i64 6140}
!232 = !{i64 6144}
!233 = !{i64 6148}
!234 = !{i64 6152}
!235 = !{i64 6164}
!236 = !{i64 6168}
!237 = !{i64 6188}
!238 = !{i64 6196}
!239 = !{i64 6212}
!240 = !{i64 6216}
!241 = !{i64 6220}
!242 = !{i64 6224}
!243 = !{i64 6236}
!244 = !{i64 6228}
!245 = !{i64 6240}
!246 = !{i64 6248}
!247 = !{i64 6268}
!248 = !{i64 6284}
!249 = !{i64 6288}
!250 = !{i64 6292}
!251 = !{i64 6308}
!252 = !{i64 6332}
!253 = !{i64 6348}
!254 = !{i64 6352}
!255 = !{i64 6356}
!256 = !{i64 6372}
!257 = !{i64 6380}
!258 = !{i64 6396}
!259 = !{i64 6400}
!260 = !{i64 6404}
!261 = !{i64 6408}
!262 = !{i64 6420}
!263 = !{i64 6424}
!264 = !{i64 6428}
!265 = !{i64 6432}
!266 = !{i64 6440}
!267 = !{i64 6448}
!268 = !{i64 6460}
!269 = !{i64 6512}
!270 = !{i64 6520}
!271 = !{i64 6532}
!272 = !{i64 6540}
!273 = !{i64 6544}
!274 = !{i64 6548}
!275 = !{i64 6560}
!276 = !{i64 6564}
!277 = !{i64 6568}
!278 = !{i64 6572}
!279 = !{i64 6576}
!280 = !{i64 6580}
!281 = !{i64 6596}
!282 = !{i64 6604}
!283 = !{i64 6624}
!284 = !{i64 6648}
!285 = !{i64 6656}
!286 = !{i64 6664}
!287 = !{i64 6672}
!288 = !{i64 6676}
!289 = !{i64 6680}
!290 = !{i64 6684}
!291 = !{i64 6688}
!292 = !{i64 6692}
!293 = !{i64 6696}
!294 = !{i64 6700}
!295 = !{i64 6708}
!296 = !{i64 6712}
!297 = !{i64 6716}
!298 = !{i64 6728}
!299 = !{i64 6740}
!300 = !{i64 6744}
!301 = !{i64 6748}
!302 = !{i64 6756}
!303 = !{i64 6768}
!304 = !{i64 6780}
!305 = !{i64 6816}
!306 = !{i64 6820}
!307 = !{i64 6840}
!308 = !{i64 6848}
!309 = !{i64 6856}
!310 = !{i64 6864}
!311 = !{i64 6892}
!312 = !{i64 6896}
!313 = !{i64 6900}
!314 = !{i64 6924}
!315 = !{i64 6940}
!316 = !{i64 6944}
!317 = !{i64 6948}
!318 = !{i64 6964}
!319 = !{i64 6984}
!320 = !{i64 6988}
!321 = !{i64 6992}
!322 = !{i64 7004}
!323 = !{i64 7016}
!324 = !{i64 7024}
!325 = !{i64 7040}
!326 = !{i64 7056}
!327 = !{i64 7064}
!328 = !{i64 7080}
!329 = !{i64 7088}
!330 = !{i64 7104}
!331 = !{i64 7108}
!332 = !{i64 7112}
!333 = !{i64 7136}
!334 = !{i64 7144}
!335 = !{i64 7148}
!336 = !{i64 7152}
!337 = !{i64 7168}
!338 = !{i64 7172}
!339 = !{i64 7176}
!340 = !{i64 7192}
!341 = !{i64 7196}
!342 = !{i64 7200}
!343 = !{i64 7216}
!344 = !{i64 7220}
!345 = !{i64 7224}
!346 = !{i64 7244}
!347 = !{i64 7252}
!348 = !{i64 7264}
!349 = !{i64 7280}
!350 = !{i64 7292}
!351 = !{i64 7308}
!352 = !{i64 7344}
!353 = !{i64 7356}
!354 = !{i64 7368}
!355 = !{i64 7372}
!356 = !{i64 7388}
!357 = !{i64 7392}
!358 = !{i64 7404}
!359 = !{i64 7420}
!360 = !{i64 7424}
!361 = !{i64 7436}
!362 = !{i64 7452}
!363 = !{i64 7460}
!364 = !{i64 7468}
!365 = !{i64 7472}
!366 = !{i64 7484}
!367 = !{i64 7492}
!368 = !{i64 7496}
!369 = !{i64 7500}
!370 = !{i64 7504}
!371 = !{i64 7528}
!372 = !{i64 7536}
!373 = !{i64 7540}
!374 = !{i64 7548}
!375 = !{i64 7556}
!376 = !{i64 7564}
!377 = !{i64 7568}
!378 = !{i64 7580}
!379 = !{i64 7588}
!380 = !{i64 7592}
!381 = !{i64 7596}
!382 = !{i64 7600}
!383 = !{i64 7620}
!384 = !{i64 7624}
!385 = !{i64 7628}
!386 = !{i64 7640}
!387 = !{i64 7652}
!388 = !{i64 7656}
!389 = !{i64 7692}
!390 = !{i64 7696}
!391 = !{i64 7700}
!392 = !{i64 7708}
!393 = !{i64 7728}
!394 = !{i64 7748}
!395 = !{i64 7752}
!396 = !{i64 7756}
!397 = !{i64 7772}
!398 = !{i64 7776}
!399 = !{i64 7780}
!400 = !{i64 7788}
!401 = !{i64 7816}
!402 = !{i64 7832}
!403 = !{i64 7868}
!404 = !{i64 7872}
!405 = !{i64 7876}
!406 = !{i64 7884}
!407 = !{i64 7888}
!408 = !{i64 7900}
!409 = !{i64 7952}
!410 = !{i64 7956}
!411 = !{i64 7972}
!412 = !{i64 7976}
!413 = !{i64 7992}
!414 = !{i64 7996}
!415 = !{i64 8020}
!416 = !{i64 8024}
!417 = !{i64 8040}
!418 = !{i64 8052}
!419 = !{i64 8076}
!420 = !{i64 8084}
!421 = !{i64 8140}
!422 = !{i64 8148}
!423 = !{i64 8152}
!424 = !{i64 8160}
!425 = !{i64 8172}
!426 = !{i64 8196}
!427 = !{i64 8204}
!428 = !{i64 8208}
!429 = !{i64 8224}
!430 = !{i64 8228}
!431 = !{i64 8236}
!432 = !{i64 8240}
!433 = !{i64 8244}
!434 = !{i64 8248}
!435 = !{i64 8264}
!436 = !{i64 8292}
!437 = !{i64 8308}
!438 = !{i64 8316}
!439 = !{i64 8320}
!440 = !{i64 8336}
!441 = !{i64 8340}
!442 = !{i64 8348}
!443 = !{i64 8352}
!444 = !{i64 8356}
!445 = !{i64 8360}
!446 = !{i64 8376}
!447 = !{i64 8392}
!448 = !{i64 8396}
!449 = !{i64 8404}
!450 = !{i64 8412}
!451 = !{i64 8416}
!452 = !{i64 8420}
!453 = !{i64 8428}
!454 = !{i64 8432}
!455 = !{i64 8436}
!456 = !{i64 8440}
!457 = !{i64 8444}
!458 = !{i64 8448}
!459 = !{i64 8460}
!460 = !{i64 8464}
!461 = !{i64 8516}
!462 = !{i64 8532}
!463 = !{i64 8548}
!464 = !{i64 8564}
!465 = !{i64 8572}
!466 = !{i64 8576}
!467 = !{i64 8592}
!468 = !{i64 8616}
!469 = !{i64 8620}
!470 = !{i64 8624}
!471 = !{i64 8648}
!472 = !{i64 8652}
!473 = !{i64 8656}
!474 = !{i64 8660}
!475 = !{i64 8668}
!476 = !{i64 8676}
!477 = !{i64 8680}
!478 = !{i64 8684}
!479 = !{i64 8696}
!480 = !{i64 8700}
!481 = !{i64 8704}
!482 = !{i64 8708}
!483 = !{i64 8720}
!484 = !{i64 8724}
!485 = !{i64 8768}
!486 = !{i64 8772}
!487 = !{i64 8784}
!488 = !{i64 8804}
!489 = !{i64 8808}
!490 = !{i64 8812}
!491 = !{i64 8816}
!492 = !{i64 8824}
!493 = !{i64 8832}
!494 = !{i64 8836}
!495 = !{i64 8840}
!496 = !{i64 8852}
!497 = !{i64 8860}
!498 = !{i64 8872}
!499 = !{i64 8876}
!500 = !{i64 8880}
!501 = !{i64 8884}
!502 = !{i64 8888}
!503 = !{i64 8912}
!504 = !{i64 8916}
!505 = !{i64 8956}
!506 = !{i64 8960}
!507 = !{i64 8964}
!508 = !{i64 8968}
!509 = !{i64 8972}
!510 = !{i64 8976}
!511 = !{i64 8996}
!512 = !{i64 9004}
!513 = !{i64 9008}
!514 = !{i64 9012}
!515 = !{i64 9020}
!516 = !{i64 9024}
!517 = !{i64 9028}
!518 = !{i64 9032}
!519 = !{i64 9040}
!520 = !{i64 9056}
!521 = !{i64 9072}
!522 = !{i64 9080}
!523 = !{i64 9096}
!524 = !{i64 9116}
!525 = !{i64 9140}
!526 = !{i64 9144}
!527 = !{i64 9148}
!528 = !{i64 9152}
!529 = !{i64 9168}
!530 = !{i64 9172}
!531 = !{i64 9176}
!532 = !{i64 9180}
!533 = !{i64 9184}
!534 = !{i64 9192}
!535 = !{i64 9196}
!536 = !{i64 9208}
!537 = !{i64 9212}
!538 = !{i64 9220}
!539 = !{i64 9240}
!540 = !{i64 9260}
!541 = !{i64 9268}
!542 = !{i64 9272}
!543 = !{i64 9276}
!544 = !{i64 9284}
!545 = !{i64 9296}
!546 = !{i64 9328}
!547 = !{i64 9332}
!548 = !{i64 9352}
!549 = !{i64 9360}
!550 = !{i64 9364}
!551 = !{i64 9380}
!552 = !{i64 9404}
!553 = !{i64 9408}
!554 = !{i64 9412}
!555 = !{i64 9420}
!556 = !{i64 9440}
!557 = !{i64 9452}
!558 = !{i64 9456}
!559 = !{i64 9464}
!560 = !{i64 9468}
!561 = !{i64 9472}
!562 = !{i64 9476}
!563 = !{i64 9492}
!564 = !{i64 9508}
!565 = !{i64 9512}
!566 = !{i64 9528}
!567 = !{i64 9564}
!568 = !{i64 9568}
!569 = !{i64 9584}
!570 = !{i64 9592}
!571 = !{i64 9596}
!572 = !{i64 9600}
!573 = !{i64 9604}
!574 = !{i64 9620}
!575 = !{i64 9648}
!576 = !{i64 9652}
!577 = !{i64 9664}
!578 = !{i64 9676}
!579 = !{i64 9684}
!580 = !{i64 9696}
!581 = !{i64 9700}
!582 = !{i64 9704}
!583 = !{i64 9708}
!584 = !{i64 9712}
!585 = !{i64 9736}
!586 = !{i64 9744}
!587 = !{i64 9784}
!588 = !{i64 9788}
!589 = !{i64 9792}
!590 = !{i64 9796}
!591 = !{i64 9800}
!592 = !{i64 9804}
!593 = !{i64 9828}
!594 = !{i64 9832}
!595 = !{i64 9836}
!596 = !{i64 9840}
!597 = !{i64 9848}
!598 = !{i64 9856}
!599 = !{i64 9864}
!600 = !{i64 9872}
!601 = !{i64 9876}
!602 = !{i64 9880}
!603 = !{i64 9896}
!604 = !{i64 9908}
!605 = !{i64 9920}
!606 = !{i64 9932}
!607 = !{i64 9948}
!608 = !{i64 9956}
!609 = !{i64 9972}
!610 = !{i64 10000}
!611 = !{i64 10016}
!612 = !{i64 10020}
!613 = !{i64 10024}
!614 = !{i64 10028}
!615 = !{i64 10036}
!616 = !{i64 10044}
!617 = !{i64 10052}
!618 = !{i64 10056}
!619 = !{i64 10064}
!620 = !{i64 10076}
!621 = !{i64 10084}
!622 = !{i64 10096}
!623 = !{i64 10108}
!624 = !{i64 10116}
!625 = !{i64 10128}
!626 = !{i64 10140}
!627 = !{i64 10148}
!628 = !{i64 10168}
!629 = !{i64 10184}
!630 = !{i64 10188}
!631 = !{i64 10192}
!632 = !{i64 10196}
!633 = !{i64 10200}
!634 = !{i64 10228}
!635 = !{i64 10244}
!636 = !{i64 10248}
!637 = !{i64 10252}
!638 = !{i64 10260}
!639 = !{i64 10264}
!640 = !{i64 10268}
!641 = !{i64 10312}
!642 = !{i64 10304}
!643 = !{i64 10316}
!644 = !{i64 10320}
!645 = !{i64 10324}
!646 = !{i64 10328}
!647 = !{i64 10332}
!648 = !{i64 10336}
!649 = !{i64 10340}
!650 = !{i64 10344}
!651 = !{i64 10348}
!652 = !{i64 10376}
!653 = !{i64 10384}
!654 = !{i64 10396}
!655 = !{i64 10408}
!656 = !{i64 10416}
!657 = !{i64 10436}
!658 = !{i64 10448}
!659 = !{i64 10452}
!660 = !{i64 10456}
!661 = !{i64 10460}
!662 = !{i64 10464}
!663 = !{i64 10472}
!664 = !{i64 10480}
!665 = !{i64 10496}
!666 = !{i64 10512}
!667 = !{i64 10532}
!668 = !{i64 10548}
!669 = !{i64 10564}
!670 = !{i64 10572}
!671 = !{i64 10576}
!672 = !{i64 10580}
!673 = !{i64 10588}
!674 = !{i64 10592}
!675 = !{i64 10600}
!676 = !{i64 10616}
!677 = !{i64 10620}
!678 = !{i64 10636}
!679 = !{i64 10648}
!680 = !{i64 10664}
!681 = !{i64 10668}
!682 = !{i64 10684}
!683 = !{i64 10696}
!684 = !{i64 10712}
!685 = !{i64 10720}
!686 = !{i64 10736}
!687 = !{i64 10748}
!688 = !{i64 10788}
!689 = !{i64 10792}
!690 = !{i64 10796}
!691 = !{i64 10808}
!692 = !{i64 10820}
!693 = !{i64 10828}
