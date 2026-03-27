source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%_IO_FILE = type { i32 }
%shmid_ds = type { %ipc_perm, i32, i32, i32, i32, i32, i32, i16, i16, i32*, i32* }
%ipc_perm = type { i32, i32, i32, i32, i32, i32, i16 }
%stat = type { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }
%sockaddr = type { i32, [14 x i8] }

@global_var_1300c = local_unnamed_addr global i32 3144
@global_var_13010 = local_unnamed_addr global i32 3144
@global_var_13014 = local_unnamed_addr global i32 3144
@global_var_13018 = local_unnamed_addr global i32 3144
@global_var_1301c = local_unnamed_addr global i32 3144
@global_var_13020 = local_unnamed_addr global i32 3144
@global_var_13024 = local_unnamed_addr global i32 3144
@global_var_13028 = local_unnamed_addr global i32 3144
@global_var_1302c = local_unnamed_addr global i32 3144
@global_var_13030 = local_unnamed_addr global i32 3144
@global_var_13034 = local_unnamed_addr global i32 3144
@global_var_13038 = local_unnamed_addr global i32 3144
@global_var_1303c = local_unnamed_addr global i32 3144
@global_var_13040 = local_unnamed_addr global i32 3144
@global_var_13044 = local_unnamed_addr global i32 3144
@global_var_13048 = local_unnamed_addr global i32 3144
@global_var_1304c = local_unnamed_addr global i32 3144
@global_var_13050 = local_unnamed_addr global i32 3144
@global_var_13054 = local_unnamed_addr global i32 3144
@global_var_13058 = local_unnamed_addr global i32 3144
@global_var_1305c = local_unnamed_addr global i32 3144
@global_var_13060 = local_unnamed_addr global i32 3144
@global_var_13064 = local_unnamed_addr global i32 3144
@global_var_13068 = local_unnamed_addr global i32 3144
@global_var_1306c = local_unnamed_addr global i32 3144
@global_var_13070 = local_unnamed_addr global i32 3144
@global_var_13074 = local_unnamed_addr global i32 3144
@global_var_13078 = local_unnamed_addr global i32 3144
@global_var_1307c = local_unnamed_addr global i32 3144
@global_var_13080 = local_unnamed_addr global i32 3144
@global_var_13084 = local_unnamed_addr global i32 3144
@global_var_13088 = local_unnamed_addr global i32 3144
@global_var_1308c = local_unnamed_addr global i32 3144
@global_var_13090 = local_unnamed_addr global i32 3144
@global_var_13094 = local_unnamed_addr global i32 3144
@global_var_13098 = local_unnamed_addr global i32 3144
@global_var_1309c = local_unnamed_addr global i32 3144
@global_var_130a0 = local_unnamed_addr global i32 3144
@global_var_130a4 = local_unnamed_addr global i32 3144
@global_var_130a8 = local_unnamed_addr global i32 3144
@global_var_130ac = local_unnamed_addr global i32 3144
@global_var_130b0 = local_unnamed_addr global i32 3144
@global_var_130b4 = local_unnamed_addr global i32 3144
@global_var_130b8 = local_unnamed_addr global i32 3144
@global_var_130bc = local_unnamed_addr global i32 3144
@global_var_130c0 = local_unnamed_addr global i32 3144
@global_var_130c4 = local_unnamed_addr global i32 3144
@global_var_130c8 = local_unnamed_addr global i32 3144
@global_var_130cc = local_unnamed_addr global i32 3144
@global_var_130d0 = local_unnamed_addr global i32 3144
@global_var_130d4 = local_unnamed_addr global i32 3144
@global_var_130d8 = local_unnamed_addr global i32 3144
@global_var_130dc = local_unnamed_addr global i32 3144
@global_var_130e0 = local_unnamed_addr global i32 3144
@global_var_130e4 = local_unnamed_addr global i32 3144
@global_var_130e8 = local_unnamed_addr global i32 3144
@global_var_12f04 = local_unnamed_addr global i32 4204
@global_var_130ec = local_unnamed_addr global i32 3144
@global_var_12f10 = local_unnamed_addr global i32 1
@global_var_130f0 = local_unnamed_addr global i32 3144
@global_var_12f1c = local_unnamed_addr global i32 3132
@global_var_130f4 = local_unnamed_addr global i32 3144
@global_var_12f28 = local_unnamed_addr global i32 25
@global_var_130f8 = local_unnamed_addr global i32 3144
@global_var_12f34 = local_unnamed_addr global i32 4
@global_var_130fc = local_unnamed_addr global i32 3144
@global_var_12f40 = local_unnamed_addr global i32 28
@global_var_13100 = local_unnamed_addr global i32 3144
@global_var_1cc = global i32 1
@global_var_12f4c = local_unnamed_addr global i32* @global_var_1cc
@global_var_13104 = local_unnamed_addr global i32 3144
@global_var_12f58 = local_unnamed_addr global i32 6
@global_var_13108 = local_unnamed_addr global i32 3144
@global_var_2b3 = global i32 126720
@global_var_12f64 = local_unnamed_addr global i32* @global_var_2b3
@global_var_1310c = local_unnamed_addr global i32 3144
@global_var_fac = local_unnamed_addr constant i32 73812
@global_var_12f08 = global i32 1
@global_var_13000 = local_unnamed_addr global i32* @global_var_12f08
@global_var_fb0 = local_unnamed_addr constant i32 284
@global_var_1311c = local_unnamed_addr global i32 10088
@global_var_2768 = constant i32 -382908416
@global_var_fd0 = local_unnamed_addr constant i32 73788
@global_var_fd4 = local_unnamed_addr constant i32 280
@global_var_13118 = local_unnamed_addr global i32 0
@global_var_100c = local_unnamed_addr constant i32 74052
@global_var_1010 = local_unnamed_addr constant i32 74048
@global_var_1014 = local_unnamed_addr constant i32 73736
@global_var_1018 = local_unnamed_addr constant i32 276
@global_var_13114 = local_unnamed_addr global i32 0
@global_var_105c = local_unnamed_addr constant i32 73984
@global_var_1060 = local_unnamed_addr constant i32 73980
@global_var_1064 = local_unnamed_addr constant i32 73656
@global_var_1068 = local_unnamed_addr constant i32 288
@global_var_13120 = local_unnamed_addr global i32 0
@global_var_10c0 = local_unnamed_addr constant i32 73908
@global_var_10c4 = local_unnamed_addr constant i32 73596
@global_var_10c8 = local_unnamed_addr constant i32 272
@global_var_13110 = local_unnamed_addr global i32 0
@global_var_10cc = local_unnamed_addr constant i32 73856
@global_var_10d0 = local_unnamed_addr constant i32 73844
@global_var_1120 = local_unnamed_addr constant i32 5936
@global_var_2834 = local_unnamed_addr constant [9 x i8] c"HelloLib\00"
@global_var_2838 = local_unnamed_addr constant [5 x i8] c"oLib\00"
@global_var_1210 = local_unnamed_addr constant i32 5788
@global_var_1214 = local_unnamed_addr constant i32 5772
@global_var_285c = constant i32 1
@global_var_2850 = constant i32 1
@global_var_122c = local_unnamed_addr constant i32 5692
@global_var_2868 = constant [21 x i8] c"Value: %d, Name: %s\0A\00"
@global_var_1248 = local_unnamed_addr constant i32 5668
@global_var_287d = constant [5 x i8] c"Test\00"
@global_var_1290 = local_unnamed_addr constant i32 5654
@global_var_2882 = constant [6 x i8] c"%d,%d\00"
@global_var_12dc = local_unnamed_addr constant i32 5588
@global_var_12e0 = local_unnamed_addr constant i32 5578
@global_var_2888 = constant [8 x i8] c"123,456\00"
@global_var_1324 = local_unnamed_addr constant i32 5532
@global_var_1350 = local_unnamed_addr constant i32 5466
@global_var_2892 = constant [12 x i8] c"/etc/passwd\00"
@global_var_1428 = local_unnamed_addr constant i32 5445
@global_var_28b1 = constant [3 x i8] c"w+\00"
@global_var_142c = local_unnamed_addr constant i32 5390
@global_var_289e = constant [19 x i8] c"BinBench Test Data\00"
@global_var_1430 = local_unnamed_addr constant i32 5290
@global_var_1440 = local_unnamed_addr constant i32 5236
@global_var_28b4 = constant [23 x i8] c"/tmp/binbench_test.tmp\00"
@global_var_16bc = local_unnamed_addr constant i32 5726
@global_var_16c0 = local_unnamed_addr constant i32 4808
@global_var_16c4 = local_unnamed_addr constant i32 4927
@global_var_16c8 = local_unnamed_addr constant i32 4938
@global_var_16cc = local_unnamed_addr constant i32 4949
@global_var_16d0 = local_unnamed_addr constant i32 4961
@global_var_16d4 = local_unnamed_addr constant i32 4969
@global_var_16d8 = local_unnamed_addr constant i32 4740
@global_var_16dc = local_unnamed_addr constant i32 4757
@global_var_16e0 = local_unnamed_addr constant i32 4957
@global_var_16e4 = local_unnamed_addr constant i32 4728
@global_var_16e8 = local_unnamed_addr constant i32 4718
@global_var_16ec = local_unnamed_addr constant i32 4921
@global_var_16f0 = local_unnamed_addr constant i32 4686
@global_var_16f4 = local_unnamed_addr constant i32 4914
@global_var_16f8 = local_unnamed_addr constant i32 4684
@global_var_16fc = local_unnamed_addr constant i32 4914
@global_var_1700 = local_unnamed_addr constant i32 4918
@global_var_1704 = local_unnamed_addr constant i32 4930
@global_var_1708 = local_unnamed_addr constant i32 4941
@global_var_177c = local_unnamed_addr constant i32 4398
@global_var_17f8 = local_unnamed_addr constant i32 4290
@global_var_18a8 = local_unnamed_addr constant i32 4489
@global_var_2a19 = constant [10 x i8] c"/bin/true\00"
@global_var_1960 = local_unnamed_addr constant i32 4307
@global_var_2a23 = constant [10 x i8] c"HelloPipe\00"
@global_var_1b10 = local_unnamed_addr constant i32 4045
@global_var_1b6 = local_unnamed_addr global i32 1313275904
@global_var_2a2d = constant [18 x i8] c"/tmp/binbench_shm\00"
@global_var_1b14 = local_unnamed_addr constant i32 4013
@global_var_3b6 = global i32 0
@global_var_1b18 = local_unnamed_addr constant i32 3444
@global_var_2840 = constant [13 x i8] c"SharedMemory\00"
@global_var_1c84 = local_unnamed_addr constant i32 352
@global_var_1c88 = local_unnamed_addr constant i32 328
@global_var_1c8c = local_unnamed_addr constant i32 71096
@global_var_13138 = local_unnamed_addr global i32 0
@global_var_1c90 = local_unnamed_addr constant i32 71076
@global_var_3e8 = global i32 0
@global_var_1c94 = local_unnamed_addr constant i32 71048
@global_var_1c98 = local_unnamed_addr constant i32 71024
@global_var_1c9c = local_unnamed_addr constant i32 71008
@global_var_1313c = local_unnamed_addr global i32 0
@global_var_1ca0 = local_unnamed_addr constant i32 70972
@global_var_7d0 = constant [5 x i8] c"eate\00"
@global_var_1ca4 = local_unnamed_addr constant i32 70944
@global_var_1ca8 = local_unnamed_addr constant i32 70916
@global_var_1cac = local_unnamed_addr constant i32 70904
@global_var_1cd0 = local_unnamed_addr constant i32 70776
@global_var_1cd4 = local_unnamed_addr constant i32 70768
@global_var_1dd4 = local_unnamed_addr constant i32 3818
@global_var_1dd8 = local_unnamed_addr constant i32 2966
@global_var_1ddc = local_unnamed_addr constant i32 3363
@global_var_1de0 = local_unnamed_addr constant i32 3343
@global_var_1de4 = local_unnamed_addr constant i32 3261
@global_var_1de8 = local_unnamed_addr constant i32 3331
@global_var_1dec = local_unnamed_addr constant i32 3339
@global_var_1df0 = local_unnamed_addr constant i32 3347
@global_var_1df4 = local_unnamed_addr constant i32 3347
@global_var_1df8 = local_unnamed_addr constant i32 3355
@global_var_1e74 = local_unnamed_addr constant i32 -68
@global_var_1fb4 = local_unnamed_addr constant i32 -176
@global_var_2018 = local_unnamed_addr constant i32 69988
@global_var_201c = local_unnamed_addr constant i32 70008
@global_var_13140 = global i32 0
@global_var_13158 = local_unnamed_addr global i32 0
@global_var_2020 = local_unnamed_addr constant i32 69992
@global_var_2108 = local_unnamed_addr constant i32 69884
@global_var_210c = local_unnamed_addr constant i32 -188
@global_var_2110 = local_unnamed_addr constant i32 69760
@global_var_21a0 = local_unnamed_addr constant i32 69676
@global_var_1315c = global i32 0
@global_var_21a4 = local_unnamed_addr constant i32 69688
@global_var_21a8 = local_unnamed_addr constant i32 69668
@global_var_21ac = local_unnamed_addr constant i32 69636
@global_var_13178 = global i32 0
@global_var_21b0 = local_unnamed_addr constant i32 69680
@global_var_21b4 = local_unnamed_addr constant i32 69592
@global_var_2210 = local_unnamed_addr constant i32 69512
@global_var_2214 = local_unnamed_addr constant i32 69572
@global_var_2218 = local_unnamed_addr constant i32 69508
@global_var_221c = local_unnamed_addr constant i32 69500
@global_var_22cc = local_unnamed_addr constant i32 69432
@global_var_22d0 = local_unnamed_addr constant i32 69472
@global_var_22d4 = local_unnamed_addr constant i32 -316
@global_var_22d8 = local_unnamed_addr constant i32 -200
@global_var_2350 = local_unnamed_addr constant i32 69280
@global_var_131ac = global i32 0
@global_var_2388 = local_unnamed_addr constant i32 69188
@global_var_24a0 = local_unnamed_addr constant i32 69096
@global_var_24a4 = local_unnamed_addr constant i32 -260
@global_var_24a8 = local_unnamed_addr constant i32 -204
@global_var_24ac = local_unnamed_addr constant i32 68936
@global_var_1f4 = global i32 0
@global_var_24fc = local_unnamed_addr constant i32 8
@global_var_2500 = local_unnamed_addr constant i32 12
@global_var_269c = local_unnamed_addr constant i32 1455
@global_var_2698 = local_unnamed_addr constant i32 -216
@global_var_274c = local_unnamed_addr constant i32 1341
@global_var_2750 = local_unnamed_addr constant i32 1085
@global_var_2754 = local_unnamed_addr constant i32 1093
@global_var_2758 = local_unnamed_addr constant i32 1094
@global_var_275c = local_unnamed_addr constant i32 1102
@global_var_2760 = local_unnamed_addr constant i32 1102
@global_var_2764 = local_unnamed_addr constant i32 1106
@global_var_2748 = constant i32 -352323240
@0 = external global i32
@global_var_13130 = external local_unnamed_addr global i8*
@global_var_283c = local_unnamed_addr constant i8 0
@1 = internal constant [3 x i8] c"5\16\00"
@global_var_124c = constant i8* getelementptr inbounds ([3 x i8], [3 x i8]* @1, i32 0, i32 0)
@2 = internal constant [2 x i8] c"r\00"
@3 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @2, i32 0, i32 0)
@4 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\87\E5\87\86\E5\BA\93\E5\87\BD\E6\95\B0\E8\B0\83\E7\94\A8 ===\00"
@global_var_2bb6 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @4, i32 0, i32 0)
@5 = internal constant [27 x i8] c"LIB-L1-01: %d (\E6\9C\9F\E6\9C\9B: 8)\0A\00"
@global_var_28cb = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @5, i32 0, i32 0)
@6 = internal constant [27 x i8] c"LIB-L1-02: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_28e6 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @6, i32 0, i32 0)
@7 = internal constant [28 x i8] c"LIB-L1-03: %d (\E6\9C\9F\E6\9C\9B: 12)\0A\00"
@global_var_2901 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @7, i32 0, i32 0)
@8 = internal constant [28 x i8] c"LIB-L1-04: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_291d = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i32 0, i32 0)
@9 = internal constant [28 x i8] c"LIB-L1-05: %d (\E6\9C\9F\E6\9C\9B: -1)\0A\00"
@global_var_2939 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i32 0, i32 0)
@10 = internal constant [28 x i8] c"LIB-L1-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_2955 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i32 0, i32 0)
@11 = internal constant [29 x i8] c"LIB-L1-07: %d (\E6\9C\9F\E6\9C\9B: 579)\0A\00"
@global_var_2971 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @11, i32 0, i32 0)
@12 = internal constant [28 x i8] c"LIB-L1-08: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_298e = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @12, i32 0, i32 0)
@13 = internal constant [28 x i8] c"LIB-L1-09: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_29aa = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @13, i32 0, i32 0)
@14 = internal constant [28 x i8] c"LIB-L1-10: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_29c6 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @14, i32 0, i32 0)
@15 = internal constant [27 x i8] c"LIB-L1-11: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_29e2 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @15, i32 0, i32 0)
@16 = internal constant [28 x i8] c"LIB-L1-12: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_29fd = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @16, i32 0, i32 0)
@17 = internal constant [27 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\B3\BB\E7\BB\9F\E8\B0\83\E7\94\A8 ===\00"
@global_var_2bda = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @17, i32 0, i32 0)
@18 = internal constant [2 x i8] c"\01\00"
@global_var_b96 = global i8* getelementptr inbounds ([2 x i8], [2 x i8]* @18, i32 0, i32 0)
@19 = internal constant [28 x i8] c"SYS-L3-01: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2a3f = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @19, i32 0, i32 0)
@20 = internal constant [28 x i8] c"SYS-L3-02: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2a5b = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @20, i32 0, i32 0)
@21 = internal constant [28 x i8] c"SYS-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2a77 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @21, i32 0, i32 0)
@22 = internal constant [28 x i8] c"SYS-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2a93 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @22, i32 0, i32 0)
@23 = internal constant [28 x i8] c"SYS-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2aaf = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @23, i32 0, i32 0)
@24 = internal constant [28 x i8] c"SYS-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2acb = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @24, i32 0, i32 0)
@25 = internal constant [28 x i8] c"SYS-L3-07: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2ae7 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @25, i32 0, i32 0)
@global_var_1dfc = constant i32* (i32*)* inttoptr (i32 -382910448 to i32* (i32*)*)
@global_var_13174 = external local_unnamed_addr global i8*
@global_var_131a8 = external local_unnamed_addr global i8*
@global_var_5af = external global i8*
@global_var_53d = external global i8*
@global_var_43d = external global i8*
@global_var_445 = external global i8*
@global_var_446 = external global i8*
@global_var_44e = external global i8*
@global_var_452 = external global i8*
@global_var_2890 = constant [2 x i8] c"r\00"

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
  %2 = call i32 @__libc_start_main(i32 ptrtoint (i32* @global_var_2768 to i32), i32 %arg2, i8** nonnull %0, void ()* null, void ()* null, void ()* %1), !insn.addr !67
  call void @abort(), !insn.addr !68
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !68
}

define i32 @call_weak_fn() local_unnamed_addr {
dec_label_pc_fb4:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* @global_var_13118, align 4, !insn.addr !69
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
  ret i32 78124, !insn.addr !73
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_101c:
  ret i32 78124, !insn.addr !74
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_106c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i8, i8* bitcast (i8** @global_var_13130 to i8*), align 4, !insn.addr !75
  %3 = icmp eq i8 %2, 0, !insn.addr !76
  br i1 %3, label %dec_label_pc_1088, label %4, !insn.addr !77

; <label>:4:                                      ; preds = %dec_label_pc_106c
  ret i32 %1, !insn.addr !77

dec_label_pc_1088:                                ; preds = %dec_label_pc_106c
  %5 = load i32, i32* @global_var_13110, align 4, !insn.addr !78
  %6 = icmp eq i32 %5, 0, !insn.addr !79
  br i1 %6, label %dec_label_pc_10a8, label %dec_label_pc_109c, !insn.addr !80

dec_label_pc_109c:                                ; preds = %dec_label_pc_1088
  %7 = load i32, i32* inttoptr (i32 78120 to i32*), align 8, !insn.addr !81
  %8 = inttoptr i32 %7 to i32*, !insn.addr !82
  call void @__cxa_finalize(i32* %8), !insn.addr !82
  br label %dec_label_pc_10a8, !insn.addr !82

dec_label_pc_10a8:                                ; preds = %dec_label_pc_109c, %dec_label_pc_1088
  %9 = call i32 @deregister_tm_clones(), !insn.addr !83
  store i8 1, i8* bitcast (i8** @global_var_13130 to i8*), align 4, !insn.addr !84
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
  %0 = call i32 @memcmp(i32* nonnull @global_var_285c, i32* nonnull @global_var_2850, i32 12), !insn.addr !106
  %1 = icmp ne i32 %0, 0, !insn.addr !107
  %spec.select1 = sext i1 %1 to i32
  %2 = icmp sgt i32 %0, 0, !insn.addr !108
  %r5.1 = select i1 %2, i32 1, i32 %spec.select1
  %3 = call i32 @memcmp(i32* nonnull @global_var_285c, i32* nonnull @global_var_285c, i32 12), !insn.addr !109
  %4 = icmp ne i32 %3, 0, !insn.addr !110
  %spec.select = sext i1 %4 to i32
  %5 = icmp sgt i32 %3, 0, !insn.addr !111
  %spec.select2 = select i1 %5, i32 1, i32 %spec.select
  %6 = add nsw i32 %spec.select2, %r5.1, !insn.addr !112
  ret i32 %6, !insn.addr !113

; uselistorder directives
  uselistorder i32 (i32*, i32*, i32)* @memcmp, { 2, 1, 0, 3 }
}

define i32 @param_printf(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1218:
  %0 = inttoptr i32 %arg2 to i8*, !insn.addr !114
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_2868, i32 0, i32 0), i32 %arg1, i8* %0), !insn.addr !114
  ret i32 %1, !insn.addr !114
}

define i32 @call_printf() local_unnamed_addr {
dec_label_pc_1230:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_2868, i32 0, i32 0), i32 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_287d, i32 0, i32 0)), !insn.addr !115
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
  %3 = call i32 (i8*, i8*, ...) @sscanf(i8* %2, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_2882, i32 0, i32 0), i32* nonnull %stack_var_-12, i32* nonnull %stack_var_-16), !insn.addr !117
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
  %3 = call i32 (i8*, i8*, ...) @sscanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_2888, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_2882, i32 0, i32 0)), !insn.addr !123
  %4 = icmp eq i32 %3, 2, !insn.addr !124
  %5 = add i32 %2, %1
  %spec.select = select i1 %4, i32 %5, i32 -1
  ret i32 %spec.select, !insn.addr !125

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @param_fopen_fclose(i8* %arg1) local_unnamed_addr {
dec_label_pc_12e4:
  %0 = call %_IO_FILE* @fopen(i8* %arg1, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_2890, i32 0, i32 0)), !insn.addr !126
  %1 = ptrtoint %_IO_FILE* %0 to i32, !insn.addr !126
  %2 = icmp eq %_IO_FILE* %0, null, !insn.addr !127
  %spec.select = select i1 %2, i32 -1, i32 %1
  br i1 %2, label %3, label %dec_label_pc_1304, !insn.addr !128

; <label>:3:                                      ; preds = %dec_label_pc_12e4
  ret i32 %spec.select, !insn.addr !128

dec_label_pc_1304:                                ; preds = %dec_label_pc_12e4
  %4 = inttoptr i32 %spec.select to %_IO_FILE*, !insn.addr !129
  %5 = call i32 @fileno(%_IO_FILE* %4), !insn.addr !129
  %6 = call i32 @fclose(%_IO_FILE* %4), !insn.addr !130
  ret i32 %5, !insn.addr !131

; uselistorder directives
  uselistorder i1 %2, { 1, 0 }
}

define i32 @call_fopen_fclose() local_unnamed_addr {
dec_label_pc_1328:
  %0 = call i32 @param_fopen_fclose(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_2892, i32 0, i32 0)), !insn.addr !132
  %1 = add i32 %0, 1, !insn.addr !133
  %2 = icmp sgt i32 %1, 0, !insn.addr !134
  %spec.select = select i1 %2, i32 42, i32 -1
  ret i32 %spec.select, !insn.addr !135
}

define i32 @param_fread_fwrite(i8* %arg1) local_unnamed_addr {
dec_label_pc_1354:
  %r0.0.reg2mem = alloca i32, !insn.addr !136
  %stack_var_-56 = alloca i32, align 4
  %0 = call %_IO_FILE* @fopen(i8* %arg1, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_28b1, i32 0, i32 0)), !insn.addr !137
  %1 = icmp eq %_IO_FILE* %0, null, !insn.addr !138
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !139
  br i1 %1, label %dec_label_pc_141c, label %dec_label_pc_1374, !insn.addr !139

dec_label_pc_1374:                                ; preds = %dec_label_pc_1354
  %2 = call i32 @fwrite(i32* bitcast ([19 x i8]* @global_var_289e to i32*), i32 1, i32 18, %_IO_FILE* nonnull %0), !insn.addr !140
  %3 = icmp eq i32 %2, 18, !insn.addr !141
  br i1 %3, label %dec_label_pc_1398, label %dec_label_pc_1410, !insn.addr !142

dec_label_pc_1398:                                ; preds = %dec_label_pc_1374
  call void @rewind(%_IO_FILE* nonnull %0), !insn.addr !143
  %4 = ptrtoint i32* %stack_var_-56 to i32, !insn.addr !144
  %5 = call i32 @fread(i32* nonnull %stack_var_-56, i32 1, i32 18, %_IO_FILE* nonnull %0), !insn.addr !145
  %6 = add i32 %5, %4, !insn.addr !146
  %7 = inttoptr i32 %6 to i8*, !insn.addr !146
  store i8 0, i8* %7, align 1, !insn.addr !146
  %8 = call i32 @fclose(%_IO_FILE* nonnull %0), !insn.addr !147
  %9 = call i32 @unlink(i8* %arg1), !insn.addr !148
  %10 = icmp eq i32 %5, 18, !insn.addr !149
  store i32 -3, i32* %r0.0.reg2mem, !insn.addr !150
  br i1 %10, label %dec_label_pc_13e0, label %dec_label_pc_141c, !insn.addr !150

dec_label_pc_13e0:                                ; preds = %dec_label_pc_1398
  %11 = call i32 @bcmp(i32* nonnull %stack_var_-56, i32* bitcast ([19 x i8]* @global_var_289e to i32*), i32 19), !insn.addr !151
  %12 = icmp eq i32 %11, 0, !insn.addr !152
  %spec.select = select i1 %12, i32 42, i32 -3
  store i32 %spec.select, i32* %r0.0.reg2mem, !insn.addr !153
  br label %dec_label_pc_141c, !insn.addr !153

dec_label_pc_1410:                                ; preds = %dec_label_pc_1374
  %13 = call i32 @fclose(%_IO_FILE* nonnull %0), !insn.addr !154
  store i32 -2, i32* %r0.0.reg2mem, !insn.addr !155
  br label %dec_label_pc_141c, !insn.addr !155

dec_label_pc_141c:                                ; preds = %dec_label_pc_1354, %dec_label_pc_1398, %dec_label_pc_1410, %dec_label_pc_13e0
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !156

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder %_IO_FILE* %0, { 2, 0, 1, 3, 4, 5 }
  uselistorder i32* %r0.0.reg2mem, { 0, 2, 4, 3, 1 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 2, 1, 0, 3 }
  uselistorder i32 18, { 2, 0, 3, 1 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 1, 0, 2 }
  uselistorder label %dec_label_pc_141c, { 2, 3, 1, 0 }
}

define i32 @call_fread_fwrite() local_unnamed_addr {
dec_label_pc_1434:
  %0 = call i32 @param_fread_fwrite(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_28b4, i32 0, i32 0)), !insn.addr !157
  ret i32 %0, !insn.addr !157
}

define i32 @param_malloc_free(i32 %arg1) local_unnamed_addr {
dec_label_pc_1444:
  %storemerge.reg2mem = alloca i32, !insn.addr !158
  %r5.0.reg2mem = alloca i32, !insn.addr !158
  %r3.0.reg2mem = alloca i32, !insn.addr !158
  %r2.0.reg2mem = alloca i32, !insn.addr !158
  %r1.0.reg2mem = alloca i32, !insn.addr !158
  %0 = mul i32 %arg1, 4, !insn.addr !159
  %1 = call i32* @malloc(i32 %0), !insn.addr !160
  %2 = icmp eq i32* %1, null, !insn.addr !161
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !162
  br i1 %2, label %dec_label_pc_14a0, label %dec_label_pc_145c, !insn.addr !162

dec_label_pc_145c:                                ; preds = %dec_label_pc_1444
  %3 = ptrtoint i32* %1 to i32, !insn.addr !160
  %4 = icmp eq i32 %arg1, 0, !insn.addr !163
  store i32 0, i32* %r1.0.reg2mem, !insn.addr !164
  store i32 %3, i32* %r2.0.reg2mem, !insn.addr !164
  store i32 %arg1, i32* %r3.0.reg2mem, !insn.addr !164
  br i1 %4, label %dec_label_pc_1490, label %dec_label_pc_1470, !insn.addr !164

dec_label_pc_1470:                                ; preds = %dec_label_pc_145c, %dec_label_pc_1470
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  %r2.0.reload = load i32, i32* %r2.0.reg2mem
  %r1.0.reload = load i32, i32* %r1.0.reg2mem
  %5 = inttoptr i32 %r2.0.reload to i32*, !insn.addr !165
  store i32 %r1.0.reload, i32* %5, align 4, !insn.addr !165
  %6 = add i32 %r2.0.reload, 4, !insn.addr !165
  %7 = add i32 %r1.0.reload, 10, !insn.addr !166
  %8 = add i32 %r3.0.reload, -1, !insn.addr !167
  %9 = icmp eq i32 %r3.0.reload, 1, !insn.addr !167
  store i32 %7, i32* %r1.0.reg2mem, !insn.addr !168
  store i32 %6, i32* %r2.0.reg2mem, !insn.addr !168
  store i32 %8, i32* %r3.0.reg2mem, !insn.addr !168
  br i1 %9, label %dec_label_pc_1480, label %dec_label_pc_1470, !insn.addr !168

dec_label_pc_1480:                                ; preds = %dec_label_pc_1470
  %10 = load i32, i32* %1, align 4, !insn.addr !169
  store i32 %10, i32* %r5.0.reg2mem, !insn.addr !170
  br label %dec_label_pc_1490, !insn.addr !170

dec_label_pc_1490:                                ; preds = %dec_label_pc_1480, %dec_label_pc_145c
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %11 = add i32 %0, -4, !insn.addr !171
  %12 = add i32 %11, %3, !insn.addr !172
  %13 = inttoptr i32 %12 to i32*, !insn.addr !172
  %14 = load i32, i32* %13, align 4, !insn.addr !172
  call void @free(i32* nonnull %1), !insn.addr !173
  %15 = add i32 %14, %r5.0.reload, !insn.addr !174
  store i32 %15, i32* %storemerge.reg2mem, !insn.addr !174
  br label %dec_label_pc_14a0, !insn.addr !174

dec_label_pc_14a0:                                ; preds = %dec_label_pc_1444, %dec_label_pc_1490
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !175

; uselistorder directives
  uselistorder i32 %r1.0.reload, { 1, 0 }
  uselistorder i32 %r2.0.reload, { 1, 0 }
  uselistorder i32 %r3.0.reload, { 1, 0 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32* %1, { 0, 1, 3, 2 }
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32* %r1.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r2.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r3.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg1, { 0, 2, 1 }
  uselistorder label %dec_label_pc_14a0, { 1, 0 }
  uselistorder label %dec_label_pc_1470, { 1, 0 }
}

define i32 @call_malloc_free() local_unnamed_addr {
dec_label_pc_14a8:
  %0 = call i32 @param_malloc_free(i32 10), !insn.addr !176
  ret i32 %0, !insn.addr !176
}

define i32 @param_memset(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_14b0:
  %r6.1.reg2mem = alloca i32, !insn.addr !177
  %r6.0.reg2mem = alloca i32, !insn.addr !177
  %r5.0.reg2mem = alloca i32, !insn.addr !177
  %r4.0.reg2mem = alloca i32, !insn.addr !177
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !178
  %1 = call i32* @memset(i32* %0, i32 0, i32 %arg2), !insn.addr !178
  %2 = icmp eq i32 %arg2, 0, !insn.addr !179
  store i32 %arg2, i32* %r4.0.reg2mem, !insn.addr !180
  store i32 %arg1, i32* %r5.0.reg2mem, !insn.addr !180
  store i32 0, i32* %r6.0.reg2mem, !insn.addr !180
  store i32 0, i32* %r6.1.reg2mem, !insn.addr !180
  br i1 %2, label %dec_label_pc_14e8, label %dec_label_pc_14d8, !insn.addr !180

dec_label_pc_14d8:                                ; preds = %dec_label_pc_14b0, %dec_label_pc_14d8
  %r6.0.reload = load i32, i32* %r6.0.reg2mem
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %3 = inttoptr i32 %r5.0.reload to i8*, !insn.addr !181
  %4 = load i8, i8* %3, align 1, !insn.addr !181
  %5 = zext i8 %4 to i32, !insn.addr !181
  %6 = add i32 %r5.0.reload, 1, !insn.addr !181
  %7 = add i32 %r4.0.reload, -1, !insn.addr !182
  %8 = icmp eq i32 %r4.0.reload, 1, !insn.addr !182
  %9 = add i32 %r6.0.reload, %5, !insn.addr !183
  store i32 %7, i32* %r4.0.reg2mem, !insn.addr !184
  store i32 %6, i32* %r5.0.reg2mem, !insn.addr !184
  store i32 %9, i32* %r6.0.reg2mem, !insn.addr !184
  store i32 %9, i32* %r6.1.reg2mem, !insn.addr !184
  br i1 %8, label %dec_label_pc_14e8, label %dec_label_pc_14d8, !insn.addr !184

dec_label_pc_14e8:                                ; preds = %dec_label_pc_14d8, %dec_label_pc_14b0
  %r6.1.reload = load i32, i32* %r6.1.reg2mem
  ret i32 %r6.1.reload, !insn.addr !185

; uselistorder directives
  uselistorder i32 %r4.0.reload, { 1, 0 }
  uselistorder i32* %r4.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r6.0.reg2mem, { 2, 0, 1 }
  uselistorder i32 %arg2, { 0, 2, 1 }
  uselistorder label %dec_label_pc_14d8, { 1, 0 }
}

define i32 @call_memset() local_unnamed_addr {
dec_label_pc_14f4:
  ret i32 0, !insn.addr !186
}

define i32 @param_strchr_strstr(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_14fc:
  %0 = inttoptr i32 %arg1 to i8*, !insn.addr !187
  %1 = call i8* @strchr(i8* %0, i32 %arg2), !insn.addr !187
  %2 = ptrtoint i8* %1 to i32, !insn.addr !187
  %3 = sub i32 %2, %arg1, !insn.addr !188
  %4 = icmp eq i8* %1, null, !insn.addr !189
  %spec.select1 = select i1 %4, i32 -1, i32 %3
  %5 = inttoptr i32 %arg3 to i8*, !insn.addr !190
  %6 = call i8* @strstr(i8* %0, i8* %5), !insn.addr !190
  %7 = ptrtoint i8* %6 to i32, !insn.addr !190
  %8 = sub i32 %7, %arg1, !insn.addr !191
  %9 = icmp eq i8* %6, null, !insn.addr !192
  %spec.select = select i1 %9, i32 -1, i32 %8
  %10 = add i32 %spec.select, %spec.select1, !insn.addr !193
  ret i32 %10, !insn.addr !194
}

define i32 @call_strchr_strstr() local_unnamed_addr {
dec_label_pc_153c:
  ret i32 15, !insn.addr !195
}

define i32 @test_standard_library_functions() local_unnamed_addr {
dec_label_pc_1544:
  %stack_var_-44 = alloca i8*, align 4
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_2bb6 to i8*)), !insn.addr !196
  store i8* inttoptr (i32 1819043144 to i8*), i8** %stack_var_-44, align 4, !insn.addr !197
  %1 = bitcast i8** %stack_var_-44 to i8*, !insn.addr !198
  %2 = call i32 @strlen(i8* nonnull %1), !insn.addr !198
  %3 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_28cb to i8*)), !insn.addr !199
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_28e6 to i8*)), !insn.addr !200
  %5 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2901 to i8*)), !insn.addr !201
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_291d to i8*)), !insn.addr !202
  %7 = call i32 @call_memcmp(), !insn.addr !203
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2939 to i8*)), !insn.addr !204
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_2868, i32 0, i32 0), i32 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_287d, i32 0, i32 0)), !insn.addr !205
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2955 to i8*)), !insn.addr !206
  %11 = call i32 (i8*, i8*, ...) @sscanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_2888, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_2882, i32 0, i32 0)), !insn.addr !207
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2971 to i8*)), !insn.addr !208
  %13 = call i32 @param_fopen_fclose(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_2892, i32 0, i32 0)), !insn.addr !209
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_298e to i8*)), !insn.addr !210
  %15 = call i32 @param_fread_fwrite(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_124c to i32), i32 5736) to i8*)), !insn.addr !211
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_29aa to i8*)), !insn.addr !212
  %17 = call i32 @param_malloc_free(i32 10), !insn.addr !213
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_29c6 to i8*)), !insn.addr !214
  %19 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_29e2 to i8*)), !insn.addr !215
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_29fd to i8*)), !insn.addr !216
  ret i32 %20, !insn.addr !217

; uselistorder directives
  uselistorder i8** %stack_var_-44, { 1, 0 }
  uselistorder i32 (i32)* @param_malloc_free, { 1, 0 }
  uselistorder i32 (i8*)* @param_fread_fwrite, { 1, 0 }
  uselistorder i32 (i8*)* @param_fopen_fclose, { 1, 0 }
  uselistorder i32 (i8*, i8*, ...)* @sscanf, { 2, 1, 0, 3 }
}

define i32 @param_linux_syscall(i8* %arg1) local_unnamed_addr {
dec_label_pc_170c:
  %r4.0.reg2mem = alloca i32, !insn.addr !218
  %0 = call i32 (i32, ...) @syscall(i32 5), !insn.addr !219
  %1 = add i32 %0, 1, !insn.addr !220
  %2 = icmp slt i32 %1, 1, !insn.addr !221
  br i1 %2, label %dec_label_pc_173c, label %dec_label_pc_1728, !insn.addr !221

dec_label_pc_1728:                                ; preds = %dec_label_pc_170c
  %3 = call i32 (i32, ...) @syscall(i32 6), !insn.addr !222
  store i32 %0, i32* %r4.0.reg2mem, !insn.addr !223
  br label %dec_label_pc_1748, !insn.addr !223

dec_label_pc_173c:                                ; preds = %dec_label_pc_170c
  %4 = call i32* @__errno_location(), !insn.addr !224
  %5 = load i32, i32* %4, align 4, !insn.addr !225
  %6 = sub i32 0, %5, !insn.addr !226
  store i32 %6, i32* %r4.0.reg2mem, !insn.addr !226
  br label %dec_label_pc_1748, !insn.addr !226

dec_label_pc_1748:                                ; preds = %dec_label_pc_173c, %dec_label_pc_1728
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !227

; uselistorder directives
  uselistorder i32* %r4.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 (i32, ...)* @syscall, { 1, 0, 2 }
}

define i32 @call_linux_syscall() local_unnamed_addr {
dec_label_pc_1754:
  %0 = call i32 @param_linux_syscall(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_2892, i32 0, i32 0)), !insn.addr !228
  %1 = add i32 %0, 1, !insn.addr !229
  %2 = icmp sgt i32 %1, 0, !insn.addr !230
  %spec.select = select i1 %2, i32 42, i32 -1
  ret i32 %spec.select, !insn.addr !231
}

define i32 @param_win32_api() local_unnamed_addr {
dec_label_pc_1780:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-96 = alloca i32, align 4
  %3 = inttoptr i32 %1 to i8*, !insn.addr !232
  %4 = bitcast i32* %stack_var_-96 to %stat*, !insn.addr !232
  %5 = call i32 @stat(i8* %3, %stat* nonnull %4), !insn.addr !232
  %6 = icmp sgt i32 %2, 0, !insn.addr !233
  %spec.select = select i1 %6, i32 42, i32 -2
  %7 = add i32 %5, 1, !insn.addr !234
  %8 = icmp slt i32 %7, 1, !insn.addr !235
  %spec.store.select = select i1 %8, i32 -1, i32 %spec.select
  ret i32 %spec.store.select, !insn.addr !236

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @call_win32_api() local_unnamed_addr {
dec_label_pc_17b8:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-96 = alloca i32, align 4
  %2 = bitcast i32* %stack_var_-96 to %stat*, !insn.addr !237
  %3 = call i32 @stat(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_2892, i32 0, i32 0), %stat* nonnull %2), !insn.addr !237
  %4 = icmp sgt i32 %1, 0, !insn.addr !238
  %spec.select = select i1 %4, i32 42, i32 -2
  %5 = add i32 %3, 1, !insn.addr !239
  %6 = icmp slt i32 %5, 1, !insn.addr !240
  %spec.store.select = select i1 %6, i32 -1, i32 %spec.select
  ret i32 %spec.store.select, !insn.addr !241
}

define i32 @param_fork_exec(i8* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_17fc:
  %r0.1.reg2mem = alloca i32, !insn.addr !242
  %stack_var_-20 = alloca i32, align 4
  %0 = call i32 @fork(), !insn.addr !243
  %1 = icmp slt i32 %0, 0, !insn.addr !244
  store i32 -1, i32* %r0.1.reg2mem, !insn.addr !245
  br i1 %1, label %dec_label_pc_1854, label %dec_label_pc_1818, !insn.addr !245

dec_label_pc_1818:                                ; preds = %dec_label_pc_17fc
  %2 = icmp eq i32 %0, 0, !insn.addr !244
  br i1 %2, label %dec_label_pc_1860, label %dec_label_pc_181c, !insn.addr !246

dec_label_pc_181c:                                ; preds = %dec_label_pc_1818
  %3 = call i32 @waitpid(i32 %0, i32* nonnull %stack_var_-20, i32 0), !insn.addr !247
  %4 = icmp slt i32 %3, 0, !insn.addr !248
  store i32 -2, i32* %r0.1.reg2mem, !insn.addr !249
  br i1 %4, label %dec_label_pc_1854, label %dec_label_pc_1830, !insn.addr !249

dec_label_pc_1830:                                ; preds = %dec_label_pc_181c
  %5 = load i32, i32* %stack_var_-20, align 4, !insn.addr !250
  %6 = urem i32 %5, 128, !insn.addr !251
  %7 = icmp eq i32 %6, 0, !insn.addr !251
  store i32 -3, i32* %r0.1.reg2mem, !insn.addr !252
  br i1 %7, label %8, label %dec_label_pc_1854, !insn.addr !252

; <label>:8:                                      ; preds = %dec_label_pc_1830
  %9 = udiv i32 %5, 256, !insn.addr !252
  %10 = urem i32 %9, 256, !insn.addr !252
  store i32 %10, i32* %r0.1.reg2mem, !insn.addr !252
  br label %dec_label_pc_1854, !insn.addr !252

dec_label_pc_1854:                                ; preds = %dec_label_pc_181c, %dec_label_pc_17fc, %8, %dec_label_pc_1830
  %r0.1.reload = load i32, i32* %r0.1.reg2mem
  ret i32 %r0.1.reload, !insn.addr !253

dec_label_pc_1860:                                ; preds = %dec_label_pc_1818
  %11 = call i32 (i8*, i8*, ...) @execl(i8* %arg1, i8* %arg1), !insn.addr !254
  call void @_exit(i32 127), !insn.addr !255
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !255

; uselistorder directives
  uselistorder i32* %stack_var_-20, { 1, 0 }
  uselistorder i32* %r0.1.reg2mem, { 0, 4, 3, 1, 2 }
  uselistorder i32 256, { 1, 0 }
  uselistorder label %dec_label_pc_1854, { 2, 3, 0, 1 }
}

define i32 @call_fork_exec() local_unnamed_addr {
dec_label_pc_187c:
  %0 = call i32 @param_fork_exec(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_2a19, i32 0, i32 0), i32 0), !insn.addr !256
  %1 = icmp eq i32 %0, 0, !insn.addr !257
  %spec.select = select i1 %1, i32 42, i32 -1
  ret i32 %spec.select, !insn.addr !258
}

define i32 @param_pipe_communication() local_unnamed_addr {
dec_label_pc_18ac:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !259
  %1 = load i32, i32* %0
  %stack_var_-24 = alloca i32, align 4
  %stack_var_-56 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-24 to i32, !insn.addr !260
  %3 = insertvalue [2 x i32] undef, i32 %2, 0, !insn.addr !261
  %4 = call i32 @pipe([2 x i32] %3), !insn.addr !261
  %5 = icmp slt i32 %4, 0, !insn.addr !262
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !263
  br i1 %5, label %dec_label_pc_1928, label %dec_label_pc_18c4, !insn.addr !263

dec_label_pc_18c4:                                ; preds = %dec_label_pc_18ac
  %6 = call i32 @fork(), !insn.addr !264
  %7 = icmp slt i32 %6, 0, !insn.addr !265
  store i32 -2, i32* %r0.0.reg2mem, !insn.addr !266
  br i1 %7, label %dec_label_pc_1928, label %dec_label_pc_18d0, !insn.addr !266

dec_label_pc_18d0:                                ; preds = %dec_label_pc_18c4
  %8 = icmp eq i32 %6, 0, !insn.addr !265
  br i1 %8, label %dec_label_pc_1934, label %dec_label_pc_18d4, !insn.addr !267

dec_label_pc_18d4:                                ; preds = %dec_label_pc_18d0
  %9 = call i32 @close(i32 %1), !insn.addr !268
  %10 = load i32, i32* %stack_var_-24, align 4, !insn.addr !269
  %11 = ptrtoint i32* %stack_var_-56 to i32, !insn.addr !270
  %12 = call i32 @read(i32 %10, i32* nonnull %stack_var_-56, i32 31), !insn.addr !271
  %13 = add i32 %12, %11, !insn.addr !272
  %14 = inttoptr i32 %13 to i8*, !insn.addr !272
  store i8 0, i8* %14, align 1, !insn.addr !272
  %15 = load i32, i32* %stack_var_-24, align 4, !insn.addr !273
  %16 = call i32 @close(i32 %15), !insn.addr !274
  %17 = call i32 @wait(i32 0), !insn.addr !275
  %18 = icmp sgt i32 %12, 0, !insn.addr !276
  %spec.select = select i1 %18, i32 42, i32 -3
  store i32 %spec.select, i32* %r0.0.reg2mem, !insn.addr !277
  br label %dec_label_pc_1928, !insn.addr !277

dec_label_pc_1928:                                ; preds = %dec_label_pc_18c4, %dec_label_pc_18ac, %dec_label_pc_18d4
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !278

dec_label_pc_1934:                                ; preds = %dec_label_pc_18d0
  %19 = load i32, i32* %stack_var_-24, align 4, !insn.addr !279
  %20 = call i32 @close(i32 %19), !insn.addr !280
  %21 = call i32 @write(i32 %1, i32* bitcast ([10 x i8]* @global_var_2a23 to i32*), i32 9), !insn.addr !281
  %22 = call i32 @close(i32 %1), !insn.addr !282
  call void @_exit(i32 0), !insn.addr !283
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !283

; uselistorder directives
  uselistorder i32 %12, { 1, 0 }
  uselistorder i32* %r0.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder void (i32)* @_exit, { 1, 0, 2 }
  uselistorder i32 ()* @fork, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1928, { 2, 0, 1 }
}

define i32 @call_pipe_communication() local_unnamed_addr {
dec_label_pc_1964:
  %0 = call i32 @param_pipe_communication(), !insn.addr !284
  ret i32 %0, !insn.addr !284
}

define i32 @param_socket_create() local_unnamed_addr {
dec_label_pc_1968:
  %r0.0.reg2mem = alloca i32, !insn.addr !285
  %stack_var_-36 = alloca i32, align 4
  %stack_var_-20 = alloca i32, align 4
  %0 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !286
  %1 = icmp slt i32 %0, 0, !insn.addr !287
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !288
  br i1 %1, label %dec_label_pc_1a34, label %dec_label_pc_198c, !insn.addr !288

dec_label_pc_198c:                                ; preds = %dec_label_pc_1968
  store i32 1, i32* %stack_var_-20, align 4, !insn.addr !289
  %2 = call i32 @setsockopt(i32 %0, i32 1, i32 2, i32* nonnull %stack_var_-20, i32 4), !insn.addr !290
  %3 = add i32 %2, 1, !insn.addr !291
  %4 = icmp slt i32 %3, 1, !insn.addr !292
  br i1 %4, label %dec_label_pc_1a18, label %dec_label_pc_19bc, !insn.addr !292

dec_label_pc_19bc:                                ; preds = %dec_label_pc_198c
  store i32 2, i32* %stack_var_-36, align 4, !insn.addr !293
  %5 = bitcast i32* %stack_var_-36 to %sockaddr*, !insn.addr !294
  %6 = call i32 @bind(i32 %0, %sockaddr* nonnull %5, i32 16), !insn.addr !294
  %7 = add i32 %6, 1, !insn.addr !295
  %8 = icmp slt i32 %7, 1, !insn.addr !296
  br i1 %8, label %dec_label_pc_1a28, label %dec_label_pc_19e8, !insn.addr !296

dec_label_pc_19e8:                                ; preds = %dec_label_pc_19bc
  %9 = call i32 @listen(i32 %0, i32 5), !insn.addr !297
  %10 = call i32 @close(i32 %0), !insn.addr !298
  %11 = icmp slt i32 %9, 0, !insn.addr !299
  %spec.select = select i1 %11, i32 -4, i32 42
  store i32 %spec.select, i32* %r0.0.reg2mem, !insn.addr !300
  br label %dec_label_pc_1a34, !insn.addr !300

dec_label_pc_1a18:                                ; preds = %dec_label_pc_198c
  %12 = call i32 @close(i32 %0), !insn.addr !301
  store i32 -2, i32* %r0.0.reg2mem, !insn.addr !302
  br label %dec_label_pc_1a34, !insn.addr !302

dec_label_pc_1a28:                                ; preds = %dec_label_pc_19bc
  %13 = call i32 @close(i32 %0), !insn.addr !303
  store i32 -3, i32* %r0.0.reg2mem, !insn.addr !304
  br label %dec_label_pc_1a34, !insn.addr !304

dec_label_pc_1a34:                                ; preds = %dec_label_pc_1968, %dec_label_pc_1a28, %dec_label_pc_1a18, %dec_label_pc_19e8
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !305

; uselistorder directives
  uselistorder i32 %0, { 0, 4, 1, 2, 3, 5, 6 }
  uselistorder i32* %r0.0.reg2mem, { 0, 3, 4, 2, 1 }
  uselistorder label %dec_label_pc_1a34, { 1, 2, 3, 0 }
}

define i32 @call_socket_create() local_unnamed_addr {
dec_label_pc_1a40:
  %0 = call i32 @param_socket_create(), !insn.addr !306
  ret i32 %0, !insn.addr !306
}

define i32 @param_shmget_shmat() local_unnamed_addr {
dec_label_pc_1a44:
  %storemerge.reg2mem = alloca i32, !insn.addr !307
  %0 = call i32 (i8*, i32, ...) @open(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_2a2d, i32 0, i32 0), i32 66), !insn.addr !308
  %1 = icmp slt i32 %0, 0, !insn.addr !309
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !310
  br i1 %1, label %dec_label_pc_1b08, label %dec_label_pc_1a6c, !insn.addr !310

dec_label_pc_1a6c:                                ; preds = %dec_label_pc_1a44
  %2 = call i32 @close(i32 %0), !insn.addr !311
  %3 = call i32 @ftok(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_2a2d, i32 0, i32 0), i32 42), !insn.addr !312
  %4 = icmp slt i32 %3, 0, !insn.addr !313
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !314
  br i1 %4, label %dec_label_pc_1b08, label %dec_label_pc_1a88, !insn.addr !314

dec_label_pc_1a88:                                ; preds = %dec_label_pc_1a6c
  %5 = call i32 @shmget(i32 %3, i32 4096, i32 ptrtoint (i32* @global_var_3b6 to i32)), !insn.addr !315
  %6 = icmp slt i32 %5, 0, !insn.addr !316
  store i32 -2, i32* %storemerge.reg2mem, !insn.addr !317
  br i1 %6, label %dec_label_pc_1b08, label %dec_label_pc_1aa0, !insn.addr !317

dec_label_pc_1aa0:                                ; preds = %dec_label_pc_1a88
  %7 = call i32* @shmat(i32 %5, i32* null, i32 0), !insn.addr !318
  %8 = icmp eq i32* %7, inttoptr (i32 -1 to i32*), !insn.addr !319
  store i32 -3, i32* %storemerge.reg2mem, !insn.addr !320
  br i1 %8, label %dec_label_pc_1b08, label %dec_label_pc_1ab8, !insn.addr !320

dec_label_pc_1ab8:                                ; preds = %dec_label_pc_1aa0
  %9 = call i32* @memcpy(i32* %7, i32* bitcast ([13 x i8]* @global_var_2840 to i32*), i32 13), !insn.addr !321
  %10 = bitcast i32* %7 to i8*, !insn.addr !322
  %11 = call i32 @strlen(i8* %10), !insn.addr !322
  %12 = call i32 @shmdt(i32* %7), !insn.addr !323
  %13 = call i32 @shmctl(i32 %5, i32 0, %shmid_ds* null), !insn.addr !324
  store i32 %11, i32* %storemerge.reg2mem, !insn.addr !325
  br label %dec_label_pc_1b08, !insn.addr !325

dec_label_pc_1b08:                                ; preds = %dec_label_pc_1a44, %dec_label_pc_1a6c, %dec_label_pc_1a88, %dec_label_pc_1aa0, %dec_label_pc_1ab8
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !326

; uselistorder directives
  uselistorder i32* %7, { 1, 0, 2, 3 }
  uselistorder i32* %storemerge.reg2mem, { 0, 5, 1, 2, 3, 4 }
  uselistorder i32 (i8*)* @strlen, { 4, 3, 2, 1, 0, 5 }
  uselistorder i32* (i32*, i32*, i32)* @memcpy, { 1, 0, 2 }
  uselistorder i32 (i32)* @close, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder label %dec_label_pc_1b08, { 4, 3, 2, 1, 0 }
}

define i32 @call_shmget_shmat() local_unnamed_addr {
dec_label_pc_1b1c:
  %0 = call i32 @param_shmget_shmat(), !insn.addr !327
  %1 = icmp sgt i32 %0, 0, !insn.addr !328
  %spec.select = select i1 %1, i32 42, i32 -1
  ret i32 %spec.select, !insn.addr !329
}

define i32 @param_signal_handling() local_unnamed_addr {
dec_label_pc_1b3c:
  %r0.0.reg2mem = alloca i32, !insn.addr !330
  %.reg2mem = alloca i32, !insn.addr !330
  %r4.0.reg2mem = alloca i32, !insn.addr !330
  %r5.0.reg2mem = alloca i32, !insn.addr !330
  %0 = call void (i32)* @signal(i32 10, void (i32)* inttoptr (i32 7344 to void (i32)*)), !insn.addr !331
  %1 = icmp eq void (i32)* %0, inttoptr (i32 -1 to void (i32)*), !insn.addr !332
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !333
  br i1 %1, label %dec_label_pc_1c7c, label %dec_label_pc_1b58, !insn.addr !333

dec_label_pc_1b58:                                ; preds = %dec_label_pc_1b3c
  %2 = call void (i32)* @signal(i32 14, void (i32)* inttoptr (i32 7344 to void (i32)*)), !insn.addr !334
  %3 = icmp eq void (i32)* %2, inttoptr (i32 -1 to void (i32)*), !insn.addr !335
  store i32 -2, i32* %r0.0.reg2mem, !insn.addr !336
  br i1 %3, label %dec_label_pc_1c7c, label %dec_label_pc_1b70, !insn.addr !336

dec_label_pc_1b70:                                ; preds = %dec_label_pc_1b58
  store i32 0, i32* @global_var_13138, align 4, !insn.addr !337
  %4 = call i32 @raise(i32 10), !insn.addr !338
  %5 = load i32, i32* @global_var_13138, align 4
  %6 = icmp eq i32 %5, 0, !insn.addr !339
  store i32 ptrtoint (i32* @global_var_3e8 to i32), i32* %r5.0.reg2mem, !insn.addr !340
  br i1 %6, label %dec_label_pc_1b9c, label %dec_label_pc_1bcc, !insn.addr !340

dec_label_pc_1b9c:                                ; preds = %dec_label_pc_1b70, %dec_label_pc_1bb4
  %7 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !341
  %8 = load i32, i32* @global_var_13138, align 4
  %9 = icmp eq i32 %8, 0, !insn.addr !342
  br i1 %9, label %dec_label_pc_1bb4, label %dec_label_pc_1bcc, !insn.addr !343

dec_label_pc_1bb4:                                ; preds = %dec_label_pc_1b9c
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %10 = add i32 %r5.0.reload, -1, !insn.addr !344
  %11 = icmp eq i32 %r5.0.reload, 0, !insn.addr !344
  %12 = icmp ne i1 %11, true, !insn.addr !344
  %13 = icmp eq i32 %r5.0.reload, 1, !insn.addr !344
  %14 = icmp ne i1 %13, true, !insn.addr !345
  %15 = icmp eq i1 %12, %14, !insn.addr !345
  store i32 %10, i32* %r5.0.reg2mem, !insn.addr !345
  store i32 -3, i32* %r0.0.reg2mem, !insn.addr !345
  br i1 %15, label %dec_label_pc_1b9c, label %dec_label_pc_1c7c, !insn.addr !345

dec_label_pc_1bcc:                                ; preds = %dec_label_pc_1b9c, %dec_label_pc_1b70
  %16 = load i32, i32* @global_var_1313c, align 4, !insn.addr !346
  %17 = icmp eq i32 %16, 10, !insn.addr !347
  store i32 -4, i32* %r0.0.reg2mem, !insn.addr !348
  br i1 %17, label %dec_label_pc_1be0, label %dec_label_pc_1c7c, !insn.addr !348

dec_label_pc_1be0:                                ; preds = %dec_label_pc_1bcc
  store i32 0, i32* @global_var_13138, align 4, !insn.addr !349
  %18 = call i32 @alarm(i32 1), !insn.addr !350
  %19 = load i32, i32* @global_var_13138, align 4, !insn.addr !351
  %20 = icmp eq i32 %19, 0, !insn.addr !352
  store i32 ptrtoint ([5 x i8]* @global_var_7d0 to i32), i32* %r4.0.reg2mem, !insn.addr !353
  store i32 %19, i32* %.reg2mem, !insn.addr !353
  br i1 %20, label %dec_label_pc_1c04, label %dec_label_pc_1c24, !insn.addr !353

dec_label_pc_1c04:                                ; preds = %dec_label_pc_1be0, %dec_label_pc_1c1c
  %21 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !354
  %22 = load i32, i32* @global_var_13138, align 4, !insn.addr !355
  %23 = icmp eq i32 %22, 0, !insn.addr !356
  store i32 %22, i32* %.reg2mem, !insn.addr !357
  br i1 %23, label %dec_label_pc_1c1c, label %dec_label_pc_1c24, !insn.addr !357

dec_label_pc_1c1c:                                ; preds = %dec_label_pc_1c04
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %24 = add i32 %r4.0.reload, -1, !insn.addr !358
  %25 = icmp eq i32 %r4.0.reload, 0, !insn.addr !358
  %26 = icmp ne i1 %25, true, !insn.addr !358
  %27 = icmp eq i32 %r4.0.reload, 1, !insn.addr !358
  %28 = icmp ne i1 %27, true, !insn.addr !359
  %29 = icmp eq i1 %26, %28, !insn.addr !359
  store i32 %24, i32* %r4.0.reg2mem, !insn.addr !359
  store i32 -5, i32* %r0.0.reg2mem, !insn.addr !359
  br i1 %29, label %dec_label_pc_1c04, label %dec_label_pc_1c7c, !insn.addr !359

dec_label_pc_1c24:                                ; preds = %dec_label_pc_1c04, %dec_label_pc_1be0
  %.reload = load i32, i32* %.reg2mem, !insn.addr !360
  %30 = icmp ne i32 %.reload, 0, !insn.addr !361
  %31 = load i32, i32* @global_var_1313c, align 4, !insn.addr !362
  %32 = icmp eq i32 %31, 14, !insn.addr !363
  %or.cond = icmp eq i1 %30, %32
  store i32 -5, i32* %r0.0.reg2mem, !insn.addr !364
  br i1 %or.cond, label %dec_label_pc_1c48, label %dec_label_pc_1c7c, !insn.addr !364

dec_label_pc_1c48:                                ; preds = %dec_label_pc_1c24
  %33 = call void (i32)* @signal(i32 10, void (i32)* null), !insn.addr !365
  %34 = call void (i32)* @signal(i32 14, void (i32)* null), !insn.addr !366
  store i32 42, i32* %r0.0.reg2mem, !insn.addr !367
  br label %dec_label_pc_1c7c, !insn.addr !367

dec_label_pc_1c7c:                                ; preds = %dec_label_pc_1bb4, %dec_label_pc_1c1c, %dec_label_pc_1b58, %dec_label_pc_1b3c, %dec_label_pc_1c24, %dec_label_pc_1bcc, %dec_label_pc_1c48
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !368

; uselistorder directives
  uselistorder i32 %r4.0.reload, { 2, 0, 1 }
  uselistorder i32 %r5.0.reload, { 2, 0, 1 }
  uselistorder i32* %r5.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r0.0.reg2mem, { 0, 7, 6, 2, 5, 1, 3, 4 }
  uselistorder i32 -5, { 1, 0 }
  uselistorder i32 14, { 1, 0, 2 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i32 10, { 0, 5, 1, 2, 3, 4, 6 }
  uselistorder label %dec_label_pc_1c7c, { 6, 4, 1, 5, 0, 2, 3 }
  uselistorder label %dec_label_pc_1c04, { 1, 0 }
  uselistorder label %dec_label_pc_1b9c, { 1, 0 }
}

define i32 @signal_handler(i32 %arg1) local_unnamed_addr {
dec_label_pc_1cb0:
  store i32 1, i32* @global_var_13138, align 4, !insn.addr !369
  store i32 %arg1, i32* @global_var_1313c, align 4, !insn.addr !370
  ret i32 %arg1, !insn.addr !371

; uselistorder directives
  uselistorder i32* @global_var_1313c, { 1, 0, 2 }
  uselistorder i32* @global_var_13138, { 1, 3, 4, 0, 5, 6, 2 }
  uselistorder i32 %arg1, { 1, 0 }
}

define i32 @call_signal_handling() local_unnamed_addr {
dec_label_pc_1cd8:
  %0 = call i32 @param_signal_handling(), !insn.addr !372
  ret i32 %0, !insn.addr !372
}

define i32 @test_system_calls() local_unnamed_addr {
dec_label_pc_1cdc:
  %stack_var_-104 = alloca i32, align 4
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_2bda to i8*)), !insn.addr !373
  %1 = call i32 @param_linux_syscall(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_b96 to i32), i32 7420) to i8*)), !insn.addr !374
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2a3f to i8*)), !insn.addr !375
  %3 = bitcast i32* %stack_var_-104 to %stat*, !insn.addr !376
  %4 = call i32 @stat(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_b96 to i32), i32 7420) to i8*), %stat* nonnull %3), !insn.addr !376
  %5 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2a5b to i8*)), !insn.addr !377
  %6 = call i32 @param_fork_exec(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_2a19, i32 0, i32 0), i32 0), !insn.addr !378
  %7 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2a77 to i8*)), !insn.addr !379
  %8 = call i32 @param_pipe_communication(), !insn.addr !380
  %9 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2a93 to i8*)), !insn.addr !381
  %10 = call i32 @param_socket_create(), !insn.addr !382
  %11 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2aaf to i8*)), !insn.addr !383
  %12 = call i32 @param_shmget_shmat(), !insn.addr !384
  %13 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2acb to i8*)), !insn.addr !385
  %14 = call i32 @param_signal_handling(), !insn.addr !386
  %15 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2ae7 to i8*)), !insn.addr !387
  ret i32 %15, !insn.addr !387

; uselistorder directives
  uselistorder i32 ()* @param_signal_handling, { 1, 0 }
  uselistorder i32 ()* @param_shmget_shmat, { 1, 0 }
  uselistorder i32 ()* @param_socket_create, { 1, 0 }
  uselistorder i32 ()* @param_pipe_communication, { 1, 0 }
  uselistorder i32 (i8*, i32)* @param_fork_exec, { 1, 0 }
  uselistorder i32 (i8*, %stat*)* @stat, { 2, 1, 0, 3 }
  uselistorder i32 (i8*)* @param_linux_syscall, { 1, 0 }
}

define i32 @thread_compute(i32 %arg1) local_unnamed_addr {
dec_label_pc_1dfc:
  %0 = mul i32 %arg1, %arg1, !insn.addr !388
  %1 = call i32* @malloc(i32 4), !insn.addr !389
  %2 = ptrtoint i32* %1 to i32, !insn.addr !389
  store i32 %0, i32* %1, align 4, !insn.addr !390
  ret i32 %2, !insn.addr !391

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0 }
}

define i32 @param_pthread_create(i32 %arg1) local_unnamed_addr {
dec_label_pc_1e1c:
  %r4.0.reg2mem = alloca i32, !insn.addr !392
  %stack_var_-20 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  store i32 %arg1, i32* %stack_var_-16, align 4, !insn.addr !393
  %0 = call i32 @pthread_create(i32* nonnull %stack_var_-12, i32* null, i32* (i32*)* bitcast (i32* (i32*)** @global_var_1dfc to i32* (i32*)*), i32* nonnull %stack_var_-16), !insn.addr !394
  %1 = icmp eq i32 %0, 0, !insn.addr !395
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !396
  br i1 %1, label %dec_label_pc_1e4c, label %dec_label_pc_1e64, !insn.addr !396

dec_label_pc_1e4c:                                ; preds = %dec_label_pc_1e1c
  %2 = load i32, i32* %stack_var_-12, align 4, !insn.addr !397
  %3 = bitcast i32* %stack_var_-20 to i32**, !insn.addr !398
  %4 = call i32 @pthread_join(i32 %2, i32** nonnull %3), !insn.addr !398
  %5 = load i32, i32* %stack_var_-20, align 4, !insn.addr !399
  %6 = inttoptr i32 %5 to i32*, !insn.addr !400
  %7 = load i32, i32* %6, align 4, !insn.addr !400
  call void @free(i32* %6), !insn.addr !401
  store i32 %7, i32* %r4.0.reg2mem, !insn.addr !401
  br label %dec_label_pc_1e64, !insn.addr !401

dec_label_pc_1e64:                                ; preds = %dec_label_pc_1e1c, %dec_label_pc_1e4c
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !402

; uselistorder directives
  uselistorder i32* %stack_var_-12, { 1, 0 }
  uselistorder i32* %stack_var_-20, { 1, 0 }
  uselistorder i32* %r4.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1e64, { 1, 0 }
}

define i32 @call_pthread_create() local_unnamed_addr {
dec_label_pc_1e78:
  %0 = call i32 @param_pthread_create(i32 7), !insn.addr !403
  ret i32 %0, !insn.addr !403
}

define i32 @thread_sum(i32 %arg1) local_unnamed_addr {
dec_label_pc_1e80:
  %0 = add i32 %arg1, 8, !insn.addr !404
  %1 = inttoptr i32 %0 to i32*, !insn.addr !404
  store i32 0, i32* %1, align 4, !insn.addr !404
  %2 = add i32 %arg1, 4, !insn.addr !405
  %3 = inttoptr i32 %2 to i32*, !insn.addr !405
  %4 = load i32, i32* %3, align 4, !insn.addr !405
  %5 = icmp slt i32 %4, %arg1, !insn.addr !406
  br i1 %5, label %dec_label_pc_1ec4, label %dec_label_pc_1e98, !insn.addr !406

dec_label_pc_1e98:                                ; preds = %dec_label_pc_1e80
  %6 = sub i32 0, %arg1
  %7 = sub i32 %6, 1
  %8 = sub i32 %4, %arg1, !insn.addr !407
  %9 = add i32 %4, %7, !insn.addr !408
  %10 = zext i32 %9 to i64, !insn.addr !409
  %11 = zext i32 %8 to i64, !insn.addr !409
  %12 = mul nuw i64 %10, %11, !insn.addr !409
  %13 = trunc i64 %12 to i32, !insn.addr !409
  %14 = add i32 %arg1, 1, !insn.addr !410
  %15 = urem i64 %12, 4294967297
  %16 = icmp ne i64 %15, 0, !insn.addr !411
  %17 = zext i1 %16 to i32, !insn.addr !412
  %18 = and i64 %12, 4294967295, !insn.addr !412
  %19 = sub i32 33, %13, !insn.addr !412
  %20 = zext i32 %19 to i64, !insn.addr !412
  %21 = shl i64 %18, %20, !insn.addr !412
  %22 = sub i32 32, %13, !insn.addr !412
  %23 = shl i32 %17, %22, !insn.addr !412
  %24 = trunc i64 %21 to i32
  %25 = or i32 %23, %24, !insn.addr !412
  %26 = mul i32 %8, %14, !insn.addr !413
  %27 = add i32 %26, %arg1, !insn.addr !413
  %28 = add i32 %27, %25, !insn.addr !414
  store i32 %28, i32* %1, align 4, !insn.addr !415
  br label %dec_label_pc_1ec4, !insn.addr !415

dec_label_pc_1ec4:                                ; preds = %dec_label_pc_1e98, %dec_label_pc_1e80
  ret i32 0, !insn.addr !416

; uselistorder directives
  uselistorder i32 %13, { 1, 0 }
  uselistorder i64 %12, { 1, 0, 2 }
  uselistorder i32 %arg1, { 1, 3, 2, 0, 4, 6, 5 }
}

define i32 @param_pthread_join() local_unnamed_addr {
dec_label_pc_1ed0:
  %r4.2.reg2mem = alloca i32, !insn.addr !417
  %r7.1.reg2mem = alloca i32, !insn.addr !417
  %r4.1.reg2mem = alloca i32, !insn.addr !417
  %r7.0.reg2mem = alloca i32, !insn.addr !417
  %r4.0.reg2mem = alloca i32, !insn.addr !417
  %stack_var_-36 = alloca i32, align 4
  %stack_var_-64 = alloca i32, align 4
  %stack_var_-72 = alloca i32, align 4
  %0 = ptrtoint i32* %stack_var_-72 to i32, !insn.addr !418
  %1 = call i32* @memset(i32* nonnull %stack_var_-64, i32 0, i32 28), !insn.addr !419
  %2 = ptrtoint i32* %stack_var_-36 to i32, !insn.addr !420
  store i32 1, i32* %stack_var_-72, align 4, !insn.addr !421
  store i32 %0, i32* %r4.0.reg2mem, !insn.addr !422
  store i32 0, i32* %r7.0.reg2mem, !insn.addr !422
  br label %dec_label_pc_1f2c, !insn.addr !422

dec_label_pc_1f2c:                                ; preds = %dec_label_pc_1f48, %dec_label_pc_1ed0
  %r7.0.reload = load i32, i32* %r7.0.reg2mem
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %3 = add i32 %r7.0.reload, %2, !insn.addr !423
  %4 = inttoptr i32 %3 to i32*, !insn.addr !424
  %5 = inttoptr i32 %r4.0.reload to i32*, !insn.addr !424
  %6 = call i32 @pthread_create(i32* %4, i32* null, i32* (i32*)* inttoptr (i32 7808 to i32* (i32*)*), i32* %5), !insn.addr !424
  %7 = icmp eq i32 %6, 0, !insn.addr !425
  store i32 -1, i32* %r4.2.reg2mem, !insn.addr !426
  br i1 %7, label %dec_label_pc_1f48, label %dec_label_pc_1fa4, !insn.addr !426

dec_label_pc_1f48:                                ; preds = %dec_label_pc_1f2c
  %8 = add nuw nsw i32 %r7.0.reload, 4, !insn.addr !427
  %9 = add i32 %r4.0.reload, 12, !insn.addr !428
  %10 = icmp eq i32 %8, 12, !insn.addr !429
  store i32 %9, i32* %r4.0.reg2mem, !insn.addr !430
  store i32 %8, i32* %r7.0.reg2mem, !insn.addr !430
  br i1 %10, label %dec_label_pc_1f58, label %dec_label_pc_1f2c, !insn.addr !430

dec_label_pc_1f58:                                ; preds = %dec_label_pc_1f48
  %11 = ptrtoint i32* %stack_var_-64 to i32, !insn.addr !431
  store i32 0, i32* %r4.1.reg2mem, !insn.addr !431
  store i32 0, i32* %r7.1.reg2mem, !insn.addr !431
  br label %dec_label_pc_1f68, !insn.addr !431

dec_label_pc_1f68:                                ; preds = %dec_label_pc_1f7c, %dec_label_pc_1f58
  %r7.1.reload = load i32, i32* %r7.1.reg2mem
  %12 = add i32 %r7.1.reload, %2, !insn.addr !432
  %13 = inttoptr i32 %12 to i32*, !insn.addr !432
  %14 = load i32, i32* %13, align 4, !insn.addr !432
  %15 = call i32 @pthread_join(i32 %14, i32** null), !insn.addr !433
  %16 = icmp eq i32 %15, 0, !insn.addr !434
  store i32 -2, i32* %r4.2.reg2mem, !insn.addr !435
  br i1 %16, label %dec_label_pc_1f7c, label %dec_label_pc_1fa4, !insn.addr !435

dec_label_pc_1f7c:                                ; preds = %dec_label_pc_1f68
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %17 = mul nsw i32 %r7.1.reload, -3, !insn.addr !436
  %18 = add nsw i32 %r7.1.reload, -4, !insn.addr !437
  %19 = add i32 %17, %11, !insn.addr !438
  %20 = inttoptr i32 %19 to i32*, !insn.addr !438
  %21 = load i32, i32* %20, align 4, !insn.addr !438
  %22 = icmp eq i32 %r7.1.reload, -8, !insn.addr !439
  %23 = add i32 %21, %r4.1.reload, !insn.addr !440
  store i32 %23, i32* %r4.1.reg2mem, !insn.addr !441
  store i32 %18, i32* %r7.1.reg2mem, !insn.addr !441
  store i32 %23, i32* %r4.2.reg2mem, !insn.addr !441
  br i1 %22, label %dec_label_pc_1fa4, label %dec_label_pc_1f68, !insn.addr !441

dec_label_pc_1fa4:                                ; preds = %dec_label_pc_1f2c, %dec_label_pc_1f68, %dec_label_pc_1f7c
  %r4.2.reload = load i32, i32* %r4.2.reg2mem
  ret i32 %r4.2.reload, !insn.addr !442

; uselistorder directives
  uselistorder i32 %r4.0.reload, { 1, 0 }
  uselistorder i32* %stack_var_-64, { 1, 0 }
  uselistorder i32* %r4.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r7.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r7.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.2.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32 -4, { 3, 0, 2, 1 }
  uselistorder i32* (i32*, i32, i32)* @memset, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1fa4, { 2, 1, 0 }
}

define i32 @call_pthread_join() local_unnamed_addr {
dec_label_pc_1fb8:
  %0 = call i32 @param_pthread_join(), !insn.addr !443
  ret i32 %0, !insn.addr !443
}

define i32 @thread_increment(i32 %arg1) local_unnamed_addr {
dec_label_pc_1fbc:
  %r5.0.reg2mem = alloca i32, !insn.addr !444
  %0 = icmp slt i32 %arg1, 1, !insn.addr !445
  store i32 %arg1, i32* %r5.0.reg2mem, !insn.addr !445
  br i1 %0, label %dec_label_pc_200c, label %dec_label_pc_1fdc, !insn.addr !445

dec_label_pc_1fdc:                                ; preds = %dec_label_pc_1fbc, %dec_label_pc_1fdc
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %1 = call i32 @pthread_mutex_lock(i32* nonnull @global_var_13140), !insn.addr !446
  %2 = load i32, i32* @global_var_13158, align 4, !insn.addr !447
  %3 = add i32 %2, 1, !insn.addr !448
  store i32 %3, i32* @global_var_13158, align 4, !insn.addr !449
  %4 = call i32 @pthread_mutex_unlock(i32* nonnull @global_var_13140), !insn.addr !450
  %5 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !451
  %6 = add i32 %r5.0.reload, -1, !insn.addr !452
  %7 = icmp eq i32 %r5.0.reload, 1, !insn.addr !452
  store i32 %6, i32* %r5.0.reg2mem, !insn.addr !453
  br i1 %7, label %dec_label_pc_200c, label %dec_label_pc_1fdc, !insn.addr !453

dec_label_pc_200c:                                ; preds = %dec_label_pc_1fdc, %dec_label_pc_1fbc
  ret i32 0, !insn.addr !454

; uselistorder directives
  uselistorder i32 %r5.0.reload, { 1, 0 }
  uselistorder i32* %r5.0.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i32)* @usleep, { 2, 1, 0, 3 }
  uselistorder label %dec_label_pc_1fdc, { 1, 0 }
}

define i32 @param_mutex_lock(i32 %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_2024:
  %r0.0.reg2mem = alloca i32, !insn.addr !455
  %r5.1.reg2mem = alloca i32, !insn.addr !455
  %r4.1.reg2mem = alloca i32, !insn.addr !455
  %r5.0.reg2mem = alloca i32, !insn.addr !455
  %r4.0.reg2mem = alloca i32, !insn.addr !455
  %0 = ptrtoint i32* %arg2 to i32
  %stack_var_-36 = alloca i32, align 4
  %1 = mul i32 %arg1, 4, !insn.addr !456
  store i32 %0, i32* %stack_var_-36, align 4, !insn.addr !457
  %2 = call i32* @malloc(i32 %1), !insn.addr !458
  %3 = icmp eq i32* %2, null, !insn.addr !459
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !460
  br i1 %3, label %dec_label_pc_20fc, label %dec_label_pc_2044, !insn.addr !460

dec_label_pc_2044:                                ; preds = %dec_label_pc_2024
  %4 = ptrtoint i32* %2 to i32, !insn.addr !458
  store i32 0, i32* @global_var_13158, align 4, !insn.addr !461
  %5 = icmp slt i32 %arg1, 1, !insn.addr !462
  store i32 %arg1, i32* %r4.0.reg2mem, !insn.addr !462
  store i32 %4, i32* %r5.0.reg2mem, !insn.addr !462
  br i1 %5, label %dec_label_pc_20c0, label %dec_label_pc_2074, !insn.addr !462

dec_label_pc_2074:                                ; preds = %dec_label_pc_2044, %dec_label_pc_2090
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %6 = inttoptr i32 %r5.0.reload to i32*, !insn.addr !463
  %7 = call i32 @pthread_create(i32* %6, i32* null, i32* (i32*)* inttoptr (i32 8124 to i32* (i32*)*), i32* nonnull %stack_var_-36), !insn.addr !463
  %8 = icmp eq i32 %7, 0, !insn.addr !464
  br i1 %8, label %dec_label_pc_2090, label %dec_label_pc_20f0, !insn.addr !465

dec_label_pc_2090:                                ; preds = %dec_label_pc_2074
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %9 = add i32 %r5.0.reload, 4, !insn.addr !466
  %10 = add i32 %r4.0.reload, -1, !insn.addr !467
  %11 = icmp eq i32 %r4.0.reload, 1, !insn.addr !467
  store i32 %10, i32* %r4.0.reg2mem, !insn.addr !468
  store i32 %9, i32* %r5.0.reg2mem, !insn.addr !468
  store i32 %4, i32* %r4.1.reg2mem, !insn.addr !468
  store i32 %arg1, i32* %r5.1.reg2mem, !insn.addr !468
  br i1 %11, label %dec_label_pc_20ac, label %dec_label_pc_2074, !insn.addr !468

dec_label_pc_20ac:                                ; preds = %dec_label_pc_2090, %dec_label_pc_20ac
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %12 = inttoptr i32 %r4.1.reload to i32*, !insn.addr !469
  %13 = load i32, i32* %12, align 4, !insn.addr !469
  %14 = add i32 %r4.1.reload, 4, !insn.addr !469
  %15 = call i32 @pthread_join(i32 %13, i32** null), !insn.addr !470
  %16 = add i32 %r5.1.reload, -1, !insn.addr !471
  %17 = icmp eq i32 %r5.1.reload, 1, !insn.addr !471
  store i32 %14, i32* %r4.1.reg2mem, !insn.addr !472
  store i32 %16, i32* %r5.1.reg2mem, !insn.addr !472
  br i1 %17, label %dec_label_pc_20c0, label %dec_label_pc_20ac, !insn.addr !472

dec_label_pc_20c0:                                ; preds = %dec_label_pc_20ac, %dec_label_pc_2044
  call void @free(i32* nonnull %2), !insn.addr !473
  %18 = load i32, i32* %stack_var_-36, align 4, !insn.addr !474
  %19 = load i32, i32* @global_var_13158, align 4, !insn.addr !475
  %20 = mul i32 %18, %arg1, !insn.addr !476
  %21 = icmp eq i32 %19, %20, !insn.addr !477
  %spec.select = select i1 %21, i32 42, i32 -3
  store i32 %spec.select, i32* %r0.0.reg2mem, !insn.addr !478
  br label %dec_label_pc_20fc, !insn.addr !478

dec_label_pc_20f0:                                ; preds = %dec_label_pc_2074
  call void @free(i32* nonnull %2), !insn.addr !479
  store i32 -2, i32* %r0.0.reg2mem, !insn.addr !480
  br label %dec_label_pc_20fc, !insn.addr !480

dec_label_pc_20fc:                                ; preds = %dec_label_pc_2024, %dec_label_pc_20f0, %dec_label_pc_20c0
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !481

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
  uselistorder i32* @global_var_13158, { 2, 1, 0, 3 }
  uselistorder i32 %arg1, { 3, 0, 1, 4, 2 }
  uselistorder label %dec_label_pc_20fc, { 1, 2, 0 }
  uselistorder label %dec_label_pc_20ac, { 1, 0 }
  uselistorder label %dec_label_pc_2074, { 1, 0 }
}

define i32 @call_mutex_lock() local_unnamed_addr {
dec_label_pc_2114:
  %0 = call i32 @param_mutex_lock(i32 4, i32* nonnull @global_var_3e8), !insn.addr !482
  ret i32 %0, !insn.addr !482
}

define i32 @consumer_thread() local_unnamed_addr {
dec_label_pc_2120:
  %0 = call i32 @pthread_mutex_lock(i32* nonnull @global_var_1315c), !insn.addr !483
  %1 = load i8, i8* bitcast (i8** @global_var_13174 to i8*), align 4, !insn.addr !484
  %2 = icmp eq i8 %1, 0, !insn.addr !485
  br i1 %2, label %dec_label_pc_2154, label %dec_label_pc_216c, !insn.addr !486

dec_label_pc_2154:                                ; preds = %dec_label_pc_2120, %dec_label_pc_2154
  %3 = call i32 @pthread_cond_wait(i32* nonnull @global_var_13178, i32* nonnull @global_var_1315c), !insn.addr !487
  %4 = load i8, i8* bitcast (i8** @global_var_13174 to i8*), align 4, !insn.addr !488
  %5 = icmp eq i8 %4, 1, !insn.addr !489
  br i1 %5, label %dec_label_pc_216c, label %dec_label_pc_2154, !insn.addr !490

dec_label_pc_216c:                                ; preds = %dec_label_pc_2154, %dec_label_pc_2120
  %6 = load i8, i8* bitcast (i8** @global_var_131a8 to i8*), align 4, !insn.addr !491
  %7 = call i32 @pthread_mutex_unlock(i32* nonnull @global_var_1315c), !insn.addr !492
  %8 = icmp eq i8 %6, 0, !insn.addr !493
  %narrow = select i1 %8, i8 0, i8 42
  %spec.select = zext i8 %narrow to i32
  %9 = call i32* @malloc(i32 4), !insn.addr !494
  %10 = ptrtoint i32* %9 to i32, !insn.addr !494
  store i32 %spec.select, i32* %9, align 4, !insn.addr !495
  ret i32 %10, !insn.addr !496

; uselistorder directives
  uselistorder label %dec_label_pc_2154, { 1, 0 }
}

define i32 @producer_thread() local_unnamed_addr {
dec_label_pc_21b8:
  %0 = call i32 @sleep(i32 1), !insn.addr !497
  %1 = call i32 @pthread_mutex_lock(i32* nonnull @global_var_1315c), !insn.addr !498
  store i8 1, i8* bitcast (i8** @global_var_131a8 to i8*), align 4, !insn.addr !499
  store i8 1, i8* bitcast (i8** @global_var_13174 to i8*), align 4, !insn.addr !500
  %2 = call i32 @pthread_cond_signal(i32* nonnull @global_var_13178), !insn.addr !501
  %3 = call i32 @pthread_mutex_unlock(i32* nonnull @global_var_1315c), !insn.addr !502
  ret i32 0, !insn.addr !503

; uselistorder directives
  uselistorder i32 (i32*)* @pthread_mutex_unlock, { 2, 1, 0, 3 }
  uselistorder i32* @global_var_13178, { 1, 0 }
  uselistorder i32 (i32*)* @pthread_mutex_lock, { 2, 1, 0, 3 }
  uselistorder i32* @global_var_1315c, { 1, 2, 3, 0, 4 }
}

define i32 @param_condition_variable() local_unnamed_addr {
dec_label_pc_2220:
  %r4.0.reg2mem = alloca i32, !insn.addr !504
  %stack_var_-20 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  store i8 0, i8* bitcast (i8** @global_var_13174 to i8*), align 4, !insn.addr !505
  store i8 0, i8* bitcast (i8** @global_var_131a8 to i8*), align 4, !insn.addr !506
  %0 = call i32 @pthread_create(i32* nonnull %stack_var_-16, i32* null, i32* (i32*)* inttoptr (i32 8480 to i32* (i32*)*), i32* null), !insn.addr !507
  %1 = icmp eq i32 %0, 0, !insn.addr !508
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !509
  br i1 %1, label %dec_label_pc_2268, label %dec_label_pc_22bc, !insn.addr !509

dec_label_pc_2268:                                ; preds = %dec_label_pc_2220
  %2 = call i32 @pthread_create(i32* nonnull %stack_var_-12, i32* null, i32* (i32*)* inttoptr (i32 8632 to i32* (i32*)*), i32* null), !insn.addr !510
  %3 = icmp eq i32 %2, 0, !insn.addr !511
  %4 = load i32, i32* %stack_var_-16, align 4
  br i1 %3, label %dec_label_pc_2298, label %dec_label_pc_2288, !insn.addr !512

dec_label_pc_2288:                                ; preds = %dec_label_pc_2268
  %5 = call i32 @pthread_cancel(i32 %4), !insn.addr !513
  store i32 -2, i32* %r4.0.reg2mem, !insn.addr !514
  br label %dec_label_pc_22bc, !insn.addr !514

dec_label_pc_2298:                                ; preds = %dec_label_pc_2268
  %6 = bitcast i32* %stack_var_-20 to i32**, !insn.addr !515
  %7 = call i32 @pthread_join(i32 %4, i32** nonnull %6), !insn.addr !515
  %8 = load i32, i32* %stack_var_-12, align 4, !insn.addr !516
  %9 = call i32 @pthread_join(i32 %8, i32** null), !insn.addr !517
  %10 = load i32, i32* %stack_var_-20, align 4, !insn.addr !518
  %11 = inttoptr i32 %10 to i32*, !insn.addr !519
  %12 = load i32, i32* %11, align 4, !insn.addr !519
  call void @free(i32* %11), !insn.addr !520
  store i32 %12, i32* %r4.0.reg2mem, !insn.addr !520
  br label %dec_label_pc_22bc, !insn.addr !520

dec_label_pc_22bc:                                ; preds = %dec_label_pc_2220, %dec_label_pc_2298, %dec_label_pc_2288
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !521

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32* %stack_var_-16, { 1, 0 }
  uselistorder i32* %stack_var_-12, { 1, 0 }
  uselistorder i32* %stack_var_-20, { 1, 0 }
  uselistorder i32* %r4.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i8* bitcast (i8** @global_var_13174 to i8*), { 0, 1, 3, 2 }
  uselistorder i8 0, { 1, 2, 0, 3, 4, 5, 6, 7, 8 }
  uselistorder label %dec_label_pc_22bc, { 1, 2, 0 }
}

define i32 @call_condition_variable() local_unnamed_addr {
dec_label_pc_22dc:
  %0 = call i32 @param_condition_variable(), !insn.addr !522
  ret i32 %0, !insn.addr !522
}

define i32 @thread_atomic_increment(i32 %arg1) local_unnamed_addr {
dec_label_pc_22e0:
  %r7.0.reg2mem = alloca i32, !insn.addr !523
  %stack_var_-28 = alloca i32, align 4
  %0 = icmp slt i32 %arg1, 1, !insn.addr !524
  store i32 0, i32* %r7.0.reg2mem, !insn.addr !524
  br i1 %0, label %dec_label_pc_2340, label %dec_label_pc_2308, !insn.addr !524

dec_label_pc_2308:                                ; preds = %dec_label_pc_22e0, %dec_label_pc_2308
  %r7.0.reload = load i32, i32* %r7.0.reg2mem
  %1 = call i32 @__atomic_fetch_add_4(i32 ptrtoint (i32* @global_var_131ac to i32), i32 1, i32 5), !insn.addr !525
  %2 = add i32 %r7.0.reload, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !526
  store i32 %r7.0.reload, i32* %stack_var_-28, align 4, !insn.addr !527
  %3 = call i32 @__atomic_compare_exchange_4(i32 ptrtoint (i32* @global_var_131ac to i32), i32* nonnull %stack_var_-28, i32 %2, i32 5, i32 5, i32 %r7.0.reload), !insn.addr !528
  %4 = add nuw i32 %r7.0.reload, 1, !insn.addr !529
  %5 = icmp eq i32 %4, %arg1, !insn.addr !530
  store i32 %4, i32* %r7.0.reg2mem, !insn.addr !531
  br i1 %5, label %dec_label_pc_2340, label %dec_label_pc_2308, !insn.addr !531

dec_label_pc_2340:                                ; preds = %dec_label_pc_2308, %dec_label_pc_22e0
  ret i32 0, !insn.addr !532

; uselistorder directives
  uselistorder i32* %r7.0.reg2mem, { 2, 0, 1 }
  uselistorder i32 ptrtoint (i32* @global_var_3e8 to i32), { 4, 1, 2, 3, 0 }
  uselistorder label %dec_label_pc_2308, { 1, 0 }
}

define i32 @thread_atomic_load_store() local_unnamed_addr {
dec_label_pc_2354:
  %0 = call i32 @__atomic_load_4(i32 ptrtoint (i32* @global_var_131ac to i32), i32 5), !insn.addr !533
  %1 = add i32 %0, 100, !insn.addr !534
  %2 = call i32 @__atomic_store_4(i32 ptrtoint (i32* @global_var_131ac to i32), i32 %1, i32 5), !insn.addr !535
  ret i32 0, !insn.addr !536
}

define i32 @param_atomic_ops(i32 %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_238c:
  %r0.0.reg2mem = alloca i32, !insn.addr !537
  %r6.0.reg2mem = alloca i32, !insn.addr !537
  %r4.1.reg2mem = alloca i32, !insn.addr !537
  %r5.0.reg2mem = alloca i32, !insn.addr !537
  %r4.0.reg2mem = alloca i32, !insn.addr !537
  %0 = ptrtoint i32* %arg2 to i32
  %stack_var_-36 = alloca i32, align 4
  %stack_var_-40 = alloca i32, align 4
  %1 = mul i32 %arg1, 4, !insn.addr !538
  store i32 %0, i32* %stack_var_-36, align 4, !insn.addr !539
  %2 = call i32* @malloc(i32 %1), !insn.addr !540
  %3 = icmp eq i32* %2, null, !insn.addr !541
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !542
  br i1 %3, label %dec_label_pc_2494, label %dec_label_pc_23ac, !insn.addr !542

dec_label_pc_23ac:                                ; preds = %dec_label_pc_238c
  %4 = ptrtoint i32* %2 to i32, !insn.addr !540
  %5 = call i32 @__atomic_store_4(i32 ptrtoint (i32* @global_var_131ac to i32), i32 0, i32 5), !insn.addr !543
  %6 = icmp slt i32 %arg1, 1, !insn.addr !544
  store i32 %4, i32* %r4.0.reg2mem, !insn.addr !544
  store i32 %arg1, i32* %r5.0.reg2mem, !insn.addr !544
  br i1 %6, label %dec_label_pc_2408, label %dec_label_pc_23e0, !insn.addr !544

dec_label_pc_23e0:                                ; preds = %dec_label_pc_23ac, %dec_label_pc_23fc
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %7 = inttoptr i32 %r4.0.reload to i32*, !insn.addr !545
  %8 = call i32 @pthread_create(i32* %7, i32* null, i32* (i32*)* inttoptr (i32 8928 to i32* (i32*)*), i32* nonnull %stack_var_-36), !insn.addr !545
  %9 = icmp eq i32 %8, 0, !insn.addr !546
  br i1 %9, label %dec_label_pc_23fc, label %dec_label_pc_2488, !insn.addr !547

dec_label_pc_23fc:                                ; preds = %dec_label_pc_23e0
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %10 = add i32 %r4.0.reload, 4, !insn.addr !548
  %11 = add i32 %r5.0.reload, -1, !insn.addr !549
  %12 = icmp eq i32 %r5.0.reload, 1, !insn.addr !549
  store i32 %10, i32* %r4.0.reg2mem, !insn.addr !550
  store i32 %11, i32* %r5.0.reg2mem, !insn.addr !550
  br i1 %12, label %dec_label_pc_2408, label %dec_label_pc_23e0, !insn.addr !550

dec_label_pc_2408:                                ; preds = %dec_label_pc_23fc, %dec_label_pc_23ac
  %13 = call i32 @pthread_create(i32* nonnull %stack_var_-40, i32* null, i32* (i32*)* inttoptr (i32 9044 to i32* (i32*)*), i32* null), !insn.addr !551
  %14 = icmp eq i32 %13, 0, !insn.addr !552
  br i1 %14, label %dec_label_pc_2428, label %dec_label_pc_2434, !insn.addr !553

dec_label_pc_2428:                                ; preds = %dec_label_pc_2408
  %15 = load i32, i32* %stack_var_-40, align 4, !insn.addr !554
  %16 = call i32 @pthread_join(i32 %15, i32** null), !insn.addr !555
  br label %dec_label_pc_2434, !insn.addr !555

dec_label_pc_2434:                                ; preds = %dec_label_pc_2408, %dec_label_pc_2428
  store i32 %4, i32* %r4.1.reg2mem, !insn.addr !556
  store i32 %arg1, i32* %r6.0.reg2mem, !insn.addr !556
  br i1 %6, label %dec_label_pc_2454, label %dec_label_pc_2440, !insn.addr !556

dec_label_pc_2440:                                ; preds = %dec_label_pc_2434, %dec_label_pc_2440
  %r6.0.reload = load i32, i32* %r6.0.reg2mem
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %17 = inttoptr i32 %r4.1.reload to i32*, !insn.addr !557
  %18 = load i32, i32* %17, align 4, !insn.addr !557
  %19 = add i32 %r4.1.reload, 4, !insn.addr !557
  %20 = call i32 @pthread_join(i32 %18, i32** null), !insn.addr !558
  %21 = add i32 %r6.0.reload, -1, !insn.addr !559
  %22 = icmp eq i32 %r6.0.reload, 1, !insn.addr !559
  store i32 %19, i32* %r4.1.reg2mem, !insn.addr !560
  store i32 %21, i32* %r6.0.reg2mem, !insn.addr !560
  br i1 %22, label %dec_label_pc_2454, label %dec_label_pc_2440, !insn.addr !560

dec_label_pc_2454:                                ; preds = %dec_label_pc_2440, %dec_label_pc_2434
  %23 = call i32 @__atomic_load_4(i32 ptrtoint (i32* @global_var_131ac to i32), i32 5), !insn.addr !561
  call void @free(i32* nonnull %2), !insn.addr !562
  %24 = icmp sgt i32 %23, 0, !insn.addr !563
  %spec.select = select i1 %24, i32 42, i32 -3
  store i32 %spec.select, i32* %r0.0.reg2mem, !insn.addr !564
  br label %dec_label_pc_2494, !insn.addr !564

dec_label_pc_2488:                                ; preds = %dec_label_pc_23e0
  call void @free(i32* nonnull %2), !insn.addr !565
  store i32 -2, i32* %r0.0.reg2mem, !insn.addr !566
  br label %dec_label_pc_2494, !insn.addr !566

dec_label_pc_2494:                                ; preds = %dec_label_pc_238c, %dec_label_pc_2488, %dec_label_pc_2454
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !567

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
  uselistorder i32 5, { 1, 2, 3, 4, 0, 5, 6, 7, 8 }
  uselistorder i32 ptrtoint (i32* @global_var_131ac to i32), { 2, 3, 4, 5, 1, 0 }
  uselistorder i32 %arg1, { 0, 1, 3, 2 }
  uselistorder label %dec_label_pc_2494, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2440, { 1, 0 }
  uselistorder label %dec_label_pc_2434, { 1, 0 }
  uselistorder label %dec_label_pc_23e0, { 1, 0 }
}

define i32 @call_atomic_ops() local_unnamed_addr {
dec_label_pc_24b0:
  %0 = call i32 @param_atomic_ops(i32 4, i32* nonnull @global_var_1f4), !insn.addr !568
  ret i32 %0, !insn.addr !568
}

define i32 @thread_tls_test(i32 %arg1) local_unnamed_addr {
dec_label_pc_24bc:
  %0 = call i32 @__aeabi_read_tp(), !insn.addr !569
  %1 = add i32 %0, 8, !insn.addr !570
  %2 = inttoptr i32 %1 to i32*, !insn.addr !570
  %3 = load i32, i32* %2, align 4, !insn.addr !570
  %4 = add i32 %3, 50, !insn.addr !571
  store i32 %4, i32* %2, align 4, !insn.addr !572
  %5 = add i32 %0, 12, !insn.addr !573
  %6 = inttoptr i32 %5 to i8*, !insn.addr !574
  %7 = inttoptr i32 %arg1 to i8*, !insn.addr !574
  %8 = call i8* @strncpy(i8* %6, i8* %7, i32 31), !insn.addr !574
  %9 = call i32* @malloc(i32 8), !insn.addr !575
  %10 = ptrtoint i32* %9 to i32, !insn.addr !575
  store i32 %3, i32* %9, align 4, !insn.addr !576
  %11 = add i32 %10, 4, !insn.addr !576
  %12 = inttoptr i32 %11 to i32*, !insn.addr !576
  store i32 %4, i32* %12, align 4, !insn.addr !576
  ret i32 %10, !insn.addr !577

; uselistorder directives
  uselistorder i32 %10, { 1, 0 }
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32 12, { 2, 5, 6, 1, 3, 0, 4 }
  uselistorder i32 8, { 1, 0, 3, 2 }
}

define i32 @param_thread_local_storage(i32 %arg1) local_unnamed_addr {
dec_label_pc_2504:
  %r0.0.reg2mem = alloca i32, !insn.addr !578
  %r5.2.reg2mem = alloca i32, !insn.addr !578
  %sb.1.reg2mem = alloca i32, !insn.addr !578
  %r4.3.reg2mem = alloca i32, !insn.addr !578
  %sl.0.reg2mem = alloca i32, !insn.addr !578
  %sb.0.reg2mem = alloca i32, !insn.addr !578
  %r6.0.reg2mem = alloca i32, !insn.addr !578
  %r5.1.reg2mem = alloca i32, !insn.addr !578
  %r4.2.reg2mem = alloca i32, !insn.addr !578
  %r5.0.reg2mem = alloca i32, !insn.addr !578
  %r4.1.reg2mem = alloca i32, !insn.addr !578
  %r4.0.reg2mem = alloca i32, !insn.addr !578
  %stack_var_-40 = alloca i32, align 4
  %0 = mul i32 %arg1, 4, !insn.addr !579
  %1 = call i32* @malloc(i32 %0), !insn.addr !580
  %2 = call i32* @malloc(i32 %0), !insn.addr !581
  %3 = icmp eq i32* %1, null, !insn.addr !582
  %4 = icmp eq i32* %2, null
  %spec.select1 = or i1 %3, %4
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !583
  br i1 %spec.select1, label %dec_label_pc_268c, label %dec_label_pc_253c, !insn.addr !583

dec_label_pc_253c:                                ; preds = %dec_label_pc_2504
  %5 = ptrtoint i32* %1 to i32, !insn.addr !580
  %6 = ptrtoint i32* %2 to i32, !insn.addr !581
  %7 = icmp slt i32 %arg1, 1, !insn.addr !584
  store i32 0, i32* %r4.0.reg2mem, !insn.addr !584
  store i32 0, i32* %r4.3.reg2mem, !insn.addr !584
  store i32 0, i32* %sb.1.reg2mem, !insn.addr !584
  br i1 %7, label %dec_label_pc_2620, label %dec_label_pc_2550, !insn.addr !584

dec_label_pc_2550:                                ; preds = %dec_label_pc_253c, %dec_label_pc_2550
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %8 = call i32* @malloc(i32 16), !insn.addr !585
  %9 = ptrtoint i32* %8 to i32, !insn.addr !585
  %10 = mul i32 %r4.0.reload, 4, !insn.addr !586
  %11 = add i32 %10, %6, !insn.addr !586
  %12 = inttoptr i32 %11 to i32*, !insn.addr !586
  store i32 %9, i32* %12, align 4, !insn.addr !586
  %13 = bitcast i32* %8 to i8*, !insn.addr !587
  %14 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %13, i32 16, i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_5af to i32), i32 9556) to i8*)), !insn.addr !587
  %15 = add nuw i32 %r4.0.reload, 1, !insn.addr !588
  %16 = icmp eq i32 %15, %arg1, !insn.addr !589
  store i32 %15, i32* %r4.0.reg2mem, !insn.addr !590
  store i32 %5, i32* %r4.1.reg2mem, !insn.addr !590
  store i32 0, i32* %r5.0.reg2mem, !insn.addr !590
  br i1 %16, label %dec_label_pc_2590, label %dec_label_pc_2550, !insn.addr !590

dec_label_pc_2590:                                ; preds = %dec_label_pc_2550, %dec_label_pc_25ac
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %17 = mul i32 %r5.0.reload, 4, !insn.addr !591
  %18 = add i32 %17, %6, !insn.addr !591
  %19 = inttoptr i32 %18 to i32*, !insn.addr !591
  %20 = load i32, i32* %19, align 4, !insn.addr !591
  %21 = inttoptr i32 %r4.1.reload to i32*, !insn.addr !592
  %22 = inttoptr i32 %20 to i32*, !insn.addr !592
  %23 = call i32 @pthread_create(i32* %21, i32* null, i32* (i32*)* inttoptr (i32 9404 to i32* (i32*)*), i32* %22), !insn.addr !592
  %24 = icmp eq i32 %23, 0, !insn.addr !593
  %25 = add nuw i32 %r5.0.reload, 1
  store i32 0, i32* %r5.2.reg2mem, !insn.addr !594
  br i1 %24, label %dec_label_pc_25ac, label %dec_label_pc_2664, !insn.addr !594

dec_label_pc_25ac:                                ; preds = %dec_label_pc_2590
  %26 = add i32 %r4.1.reload, 4, !insn.addr !595
  %27 = icmp eq i32 %25, %arg1, !insn.addr !596
  store i32 %26, i32* %r4.1.reg2mem, !insn.addr !597
  store i32 %25, i32* %r5.0.reg2mem, !insn.addr !597
  br i1 %27, label %dec_label_pc_25dc.preheader, label %dec_label_pc_2590, !insn.addr !597

dec_label_pc_25dc.preheader:                      ; preds = %dec_label_pc_25ac
  %28 = bitcast i32* %stack_var_-40 to i32**, !insn.addr !598
  store i32 0, i32* %r4.2.reg2mem
  store i32 %5, i32* %r5.1.reg2mem
  store i32 %6, i32* %r6.0.reg2mem
  store i32 0, i32* %sb.0.reg2mem
  store i32 %arg1, i32* %sl.0.reg2mem
  br label %dec_label_pc_25dc

dec_label_pc_25dc:                                ; preds = %dec_label_pc_25dc.preheader, %dec_label_pc_25dc
  %sl.0.reload = load i32, i32* %sl.0.reg2mem
  %sb.0.reload = load i32, i32* %sb.0.reg2mem
  %r6.0.reload = load i32, i32* %r6.0.reg2mem
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %r4.2.reload = load i32, i32* %r4.2.reg2mem
  %29 = inttoptr i32 %r5.1.reload to i32*, !insn.addr !599
  %30 = load i32, i32* %29, align 4, !insn.addr !599
  %31 = add i32 %r5.1.reload, 4, !insn.addr !599
  %32 = call i32 @pthread_join(i32 %30, i32** nonnull %28), !insn.addr !598
  %33 = load i32, i32* %stack_var_-40, align 4, !insn.addr !600
  %34 = inttoptr i32 %33 to i32*, !insn.addr !601
  %35 = load i32, i32* %34, align 4, !insn.addr !601
  %36 = add i32 %33, 4, !insn.addr !601
  %37 = inttoptr i32 %36 to i32*, !insn.addr !601
  %38 = load i32, i32* %37, align 4, !insn.addr !601
  call void @free(i32* %34), !insn.addr !602
  %39 = inttoptr i32 %r6.0.reload to i32*, !insn.addr !603
  %40 = load i32, i32* %39, align 4, !insn.addr !603
  %41 = add i32 %r6.0.reload, 4, !insn.addr !603
  %42 = inttoptr i32 %40 to i32*, !insn.addr !604
  call void @free(i32* %42), !insn.addr !604
  %43 = add i32 %38, %sb.0.reload, !insn.addr !605
  %44 = add i32 %35, %r4.2.reload, !insn.addr !606
  %45 = add i32 %sl.0.reload, -1, !insn.addr !607
  %46 = icmp eq i32 %sl.0.reload, 1, !insn.addr !607
  store i32 %44, i32* %r4.2.reg2mem, !insn.addr !608
  store i32 %31, i32* %r5.1.reg2mem, !insn.addr !608
  store i32 %41, i32* %r6.0.reg2mem, !insn.addr !608
  store i32 %43, i32* %sb.0.reg2mem, !insn.addr !608
  store i32 %45, i32* %sl.0.reg2mem, !insn.addr !608
  store i32 %44, i32* %r4.3.reg2mem, !insn.addr !608
  store i32 %43, i32* %sb.1.reg2mem, !insn.addr !608
  br i1 %46, label %dec_label_pc_2620, label %dec_label_pc_25dc, !insn.addr !608

dec_label_pc_2620:                                ; preds = %dec_label_pc_25dc, %dec_label_pc_253c
  %sb.1.reload = load i32, i32* %sb.1.reg2mem
  %r4.3.reload = load i32, i32* %r4.3.reg2mem
  call void @free(i32* %2), !insn.addr !609
  call void @free(i32* %1), !insn.addr !610
  %47 = mul i32 %arg1, 150, !insn.addr !611
  %48 = mul i32 %arg1, 100, !insn.addr !612
  %49 = icmp eq i32 %r4.3.reload, %48
  %50 = icmp eq i32 %sb.1.reload, %47
  %51 = icmp eq i1 %49, %50, !insn.addr !613
  %spec.select = select i1 %51, i32 42, i32 -3
  store i32 %spec.select, i32* %r0.0.reg2mem, !insn.addr !614
  br label %dec_label_pc_268c, !insn.addr !614

dec_label_pc_2664:                                ; preds = %dec_label_pc_2590, %dec_label_pc_2664
  %r5.2.reload = load i32, i32* %r5.2.reg2mem
  %52 = mul i32 %r5.2.reload, 4, !insn.addr !615
  %53 = add i32 %52, %6, !insn.addr !615
  %54 = inttoptr i32 %53 to i32*, !insn.addr !615
  %55 = load i32, i32* %54, align 4, !insn.addr !615
  %56 = inttoptr i32 %55 to i32*, !insn.addr !616
  call void @free(i32* %56), !insn.addr !616
  %57 = add nuw i32 %r5.2.reload, 1, !insn.addr !617
  %58 = icmp eq i32 %25, %57, !insn.addr !618
  store i32 %57, i32* %r5.2.reg2mem, !insn.addr !619
  br i1 %58, label %dec_label_pc_2678, label %dec_label_pc_2664, !insn.addr !619

dec_label_pc_2678:                                ; preds = %dec_label_pc_2664
  call void @free(i32* %2), !insn.addr !620
  call void @free(i32* %1), !insn.addr !621
  store i32 -2, i32* %r0.0.reg2mem, !insn.addr !622
  br label %dec_label_pc_268c, !insn.addr !622

dec_label_pc_268c:                                ; preds = %dec_label_pc_2678, %dec_label_pc_2620, %dec_label_pc_2504
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !623

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
  uselistorder i32 -2, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 10 }
  uselistorder i32 -3, { 5, 6, 7, 10, 0, 1, 2, 8, 3, 9, 4 }
  uselistorder i32 42, { 1, 2, 3, 0, 4, 13, 5, 6, 7, 8, 9, 10, 14, 11, 12, 15 }
  uselistorder void (i32*)* @free, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14 }
  uselistorder i32 (i32, i32**)* @pthread_join, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder i32 (i32*, i32*, i32* (i32*)*, i32*)* @pthread_create, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder i32 -1, { 25, 0, 26, 27, 1, 2, 28, 29, 3, 30, 4, 5, 31, 32, 6, 33, 18, 34, 7, 8, 9, 10, 19, 11, 20, 21, 22, 23, 15, 35, 36, 12, 13, 24, 16, 17, 14 }
  uselistorder i32* null, { 2, 0, 1, 4, 5, 6, 3, 7, 8, 9, 10, 12, 11, 13, 14, 15, 16 }
  uselistorder i32* (i32)* @malloc, { 8, 7, 6, 5, 4, 3, 2, 1, 0, 9 }
  uselistorder i32 %arg1, { 5, 4, 0, 2, 3, 6, 1 }
  uselistorder label %dec_label_pc_2664, { 1, 0 }
  uselistorder label %dec_label_pc_25dc, { 1, 0 }
  uselistorder label %dec_label_pc_2590, { 1, 0 }
  uselistorder label %dec_label_pc_2550, { 1, 0 }
}

define i32 @call_thread_local_storage() local_unnamed_addr {
dec_label_pc_26a0:
  %0 = call i32 @param_thread_local_storage(i32 4), !insn.addr !624
  ret i32 %0, !insn.addr !624
}

define i32 @test_thread_concurrency() local_unnamed_addr {
dec_label_pc_26a8:
  %0 = call i32 @puts(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_53d to i32), i32 9912) to i8*)), !insn.addr !625
  %1 = call i32 @param_pthread_create(i32 7), !insn.addr !626
  %2 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_43d to i32), i32 9936) to i8*)), !insn.addr !627
  %3 = call i32 @param_pthread_join(), !insn.addr !628
  %4 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_445 to i32), i32 9956) to i8*)), !insn.addr !629
  %5 = call i32 @param_mutex_lock(i32 4, i32* nonnull @global_var_3e8), !insn.addr !630
  %6 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_446 to i32), i32 9984) to i8*)), !insn.addr !631
  %7 = call i32 @param_condition_variable(), !insn.addr !632
  %8 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_44e to i32), i32 10004) to i8*)), !insn.addr !633
  %9 = call i32 @param_atomic_ops(i32 4, i32* nonnull @global_var_1f4), !insn.addr !634
  %10 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_44e to i32), i32 10032) to i8*)), !insn.addr !635
  %11 = call i32 @param_thread_local_storage(i32 4), !insn.addr !636
  %12 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 add (i32 ptrtoint (i32* @global_var_2748 to i32), i32 ptrtoint (i8** @global_var_452 to i32)) to i8*)), !insn.addr !637
  ret i32 %12, !insn.addr !637

; uselistorder directives
  uselistorder i32 (i32)* @param_thread_local_storage, { 1, 0 }
  uselistorder i32 (i32, i32*)* @param_atomic_ops, { 1, 0 }
  uselistorder i32 ()* @param_condition_variable, { 1, 0 }
  uselistorder i32 (i32, i32*)* @param_mutex_lock, { 1, 0 }
  uselistorder i32 4, { 9, 10, 11, 12, 0, 17, 18, 19, 20, 1, 2, 3, 21, 13, 22, 23, 4, 7, 14, 24, 25, 5, 26, 27, 15, 8, 28, 6, 16 }
  uselistorder i32 ()* @param_pthread_join, { 1, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 28 }
  uselistorder i32 (i32)* @param_pthread_create, { 1, 0 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_2768:
  %0 = call i32 @test_standard_library_functions(), !insn.addr !638
  %1 = call i32 @test_system_calls(), !insn.addr !639
  %2 = call i32 @test_thread_concurrency(), !insn.addr !640
  ret i32 0, !insn.addr !641

; uselistorder directives
  uselistorder i32 0, { 15, 3, 4, 0, 133, 5, 1, 2, 6, 97, 134, 135, 98, 16, 17, 7, 136, 137, 18, 138, 99, 19, 139, 8, 9, 140, 10, 100, 20, 14, 101, 141, 102, 142, 25, 143, 144, 103, 26, 145, 146, 104, 105, 106, 107, 147, 148, 149, 27, 28, 150, 151, 108, 109, 110, 111, 152, 153, 154, 155, 112, 29, 30, 156, 157, 113, 158, 159, 114, 115, 116, 160, 21, 11, 12, 161, 117, 13, 162, 31, 32, 163, 33, 34, 118, 35, 36, 23, 24, 37, 38, 39, 40, 41, 42, 43, 44, 45, 164, 46, 165, 47, 166, 22, 48, 167, 168, 169, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132 }
}

define i32 @__aeabi_read_tp() local_unnamed_addr {
dec_label_pc_2790:
  %0 = call i32 @function_ffff0fe0(), !insn.addr !642
  ret i32 %0, !insn.addr !642
}

define i32 @_fini(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_2798:
  ret i32 %arg1, !insn.addr !643
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
  uselistorder i32 1, { 11, 121, 122, 123, 124, 76, 95, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 125, 126, 77, 97, 96, 28, 27, 26, 25, 24, 127, 78, 79, 98, 29, 101, 100, 99, 30, 80, 128, 129, 81, 102, 35, 34, 33, 32, 31, 130, 131, 82, 36, 83, 105, 104, 103, 41, 40, 39, 38, 37, 132, 63, 108, 107, 106, 42, 109, 84, 133, 85, 134, 46, 45, 44, 43, 47, 69, 135, 70, 136, 86, 66, 87, 111, 110, 48, 113, 112, 49, 10, 114, 50, 71, 137, 115, 9, 72, 138, 116, 8, 139, 73, 140, 51, 74, 141, 142, 55, 54, 53, 52, 143, 60, 59, 58, 57, 56, 88, 89, 117, 61, 144, 7, 119, 118, 62, 6, 64, 65, 67, 5, 4, 68, 3, 75, 2, 1, 0, 120, 90, 91, 92, 93, 94 }
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
!90 = !{i64 4368}
!91 = !{i64 4380}
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
!132 = !{i64 4916}
!133 = !{i64 4924}
!134 = !{i64 4928}
!135 = !{i64 4940}
!136 = !{i64 4948}
!137 = !{i64 4968}
!138 = !{i64 4972}
!139 = !{i64 4976}
!140 = !{i64 5004}
!141 = !{i64 5008}
!142 = !{i64 5012}
!143 = !{i64 5020}
!144 = !{i64 5024}
!145 = !{i64 5044}
!146 = !{i64 5056}
!147 = !{i64 5064}
!148 = !{i64 5072}
!149 = !{i64 5080}
!150 = !{i64 5084}
!151 = !{i64 5104}
!152 = !{i64 5116}
!153 = !{i64 5124}
!154 = !{i64 5140}
!155 = !{i64 5144}
!156 = !{i64 5156}
!157 = !{i64 5180}
!158 = !{i64 5188}
!159 = !{i64 5196}
!160 = !{i64 5200}
!161 = !{i64 5204}
!162 = !{i64 5208}
!163 = !{i64 5212}
!164 = !{i64 5216}
!165 = !{i64 5232}
!166 = !{i64 5236}
!167 = !{i64 5240}
!168 = !{i64 5244}
!169 = !{i64 5248}
!170 = !{i64 5252}
!171 = !{i64 5264}
!172 = !{i64 5268}
!173 = !{i64 5272}
!174 = !{i64 5276}
!175 = !{i64 5284}
!176 = !{i64 5292}
!177 = !{i64 5296}
!178 = !{i64 5320}
!179 = !{i64 5324}
!180 = !{i64 5328}
!181 = !{i64 5336}
!182 = !{i64 5340}
!183 = !{i64 5344}
!184 = !{i64 5348}
!185 = !{i64 5360}
!186 = !{i64 5368}
!187 = !{i64 5384}
!188 = !{i64 5388}
!189 = !{i64 5392}
!190 = !{i64 5408}
!191 = !{i64 5412}
!192 = !{i64 5416}
!193 = !{i64 5424}
!194 = !{i64 5432}
!195 = !{i64 5440}
!196 = !{i64 5460}
!197 = !{i64 5488}
!198 = !{i64 5496}
!199 = !{i64 5512}
!200 = !{i64 5528}
!201 = !{i64 5544}
!202 = !{i64 5560}
!203 = !{i64 5564}
!204 = !{i64 5580}
!205 = !{i64 5604}
!206 = !{i64 5620}
!207 = !{i64 5648}
!208 = !{i64 5684}
!209 = !{i64 5696}
!210 = !{i64 5720}
!211 = !{i64 5732}
!212 = !{i64 5748}
!213 = !{i64 5756}
!214 = !{i64 5772}
!215 = !{i64 5788}
!216 = !{i64 5804}
!217 = !{i64 5816}
!218 = !{i64 5900}
!219 = !{i64 5916}
!220 = !{i64 5920}
!221 = !{i64 5924}
!222 = !{i64 5940}
!223 = !{i64 5944}
!224 = !{i64 5948}
!225 = !{i64 5952}
!226 = !{i64 5956}
!227 = !{i64 5968}
!228 = !{i64 5984}
!229 = !{i64 5992}
!230 = !{i64 5996}
!231 = !{i64 6008}
!232 = !{i64 6028}
!233 = !{i64 6044}
!234 = !{i64 6048}
!235 = !{i64 6052}
!236 = !{i64 6068}
!237 = !{i64 6092}
!238 = !{i64 6108}
!239 = !{i64 6112}
!240 = !{i64 6116}
!241 = !{i64 6132}
!242 = !{i64 6140}
!243 = !{i64 6156}
!244 = !{i64 6160}
!245 = !{i64 6164}
!246 = !{i64 6168}
!247 = !{i64 6180}
!248 = !{i64 6184}
!249 = !{i64 6188}
!250 = !{i64 6192}
!251 = !{i64 6200}
!252 = !{i64 6208}
!253 = !{i64 6236}
!254 = !{i64 6256}
!255 = !{i64 6264}
!256 = !{i64 6284}
!257 = !{i64 6292}
!258 = !{i64 6308}
!259 = !{i64 6316}
!260 = !{i64 6324}
!261 = !{i64 6328}
!262 = !{i64 6332}
!263 = !{i64 6336}
!264 = !{i64 6340}
!265 = !{i64 6344}
!266 = !{i64 6348}
!267 = !{i64 6352}
!268 = !{i64 6360}
!269 = !{i64 6364}
!270 = !{i64 6368}
!271 = !{i64 6380}
!272 = !{i64 6392}
!273 = !{i64 6396}
!274 = !{i64 6400}
!275 = !{i64 6408}
!276 = !{i64 6420}
!277 = !{i64 6424}
!278 = !{i64 6448}
!279 = !{i64 6452}
!280 = !{i64 6456}
!281 = !{i64 6476}
!282 = !{i64 6484}
!283 = !{i64 6492}
!284 = !{i64 6500}
!285 = !{i64 6504}
!286 = !{i64 6528}
!287 = !{i64 6532}
!288 = !{i64 6536}
!289 = !{i64 6560}
!290 = !{i64 6576}
!291 = !{i64 6580}
!292 = !{i64 6584}
!293 = !{i64 6600}
!294 = !{i64 6620}
!295 = !{i64 6624}
!296 = !{i64 6628}
!297 = !{i64 6640}
!298 = !{i64 6652}
!299 = !{i64 6660}
!300 = !{i64 6668}
!301 = !{i64 6684}
!302 = !{i64 6692}
!303 = !{i64 6700}
!304 = !{i64 6704}
!305 = !{i64 6716}
!306 = !{i64 6720}
!307 = !{i64 6724}
!308 = !{i64 6748}
!309 = !{i64 6756}
!310 = !{i64 6760}
!311 = !{i64 6764}
!312 = !{i64 6780}
!313 = !{i64 6784}
!314 = !{i64 6788}
!315 = !{i64 6804}
!316 = !{i64 6808}
!317 = !{i64 6812}
!318 = !{i64 6828}
!319 = !{i64 6832}
!320 = !{i64 6836}
!321 = !{i64 6856}
!322 = !{i64 6864}
!323 = !{i64 6876}
!324 = !{i64 6892}
!325 = !{i64 6900}
!326 = !{i64 6924}
!327 = !{i64 6944}
!328 = !{i64 6956}
!329 = !{i64 6968}
!330 = !{i64 6972}
!331 = !{i64 6988}
!332 = !{i64 6992}
!333 = !{i64 6996}
!334 = !{i64 7012}
!335 = !{i64 7016}
!336 = !{i64 7020}
!337 = !{i64 7036}
!338 = !{i64 7044}
!339 = !{i64 7056}
!340 = !{i64 7060}
!341 = !{i64 7072}
!342 = !{i64 7084}
!343 = !{i64 7088}
!344 = !{i64 7092}
!345 = !{i64 7096}
!346 = !{i64 7124}
!347 = !{i64 7128}
!348 = !{i64 7132}
!349 = !{i64 7140}
!350 = !{i64 7148}
!351 = !{i64 7156}
!352 = !{i64 7160}
!353 = !{i64 7164}
!354 = !{i64 7176}
!355 = !{i64 7184}
!356 = !{i64 7188}
!357 = !{i64 7192}
!358 = !{i64 7196}
!359 = !{i64 7200}
!360 = !{i64 7212}
!361 = !{i64 7216}
!362 = !{i64 7228}
!363 = !{i64 7232}
!364 = !{i64 7220}
!365 = !{i64 7248}
!366 = !{i64 7260}
!367 = !{i64 7268}
!368 = !{i64 7296}
!369 = !{i64 7356}
!370 = !{i64 7368}
!371 = !{i64 7372}
!372 = !{i64 7384}
!373 = !{i64 7404}
!374 = !{i64 7420}
!375 = !{i64 7448}
!376 = !{i64 7460}
!377 = !{i64 7496}
!378 = !{i64 7512}
!379 = !{i64 7536}
!380 = !{i64 7540}
!381 = !{i64 7556}
!382 = !{i64 7560}
!383 = !{i64 7576}
!384 = !{i64 7580}
!385 = !{i64 7604}
!386 = !{i64 7608}
!387 = !{i64 7632}
!388 = !{i64 7684}
!389 = !{i64 7692}
!390 = !{i64 7696}
!391 = !{i64 7704}
!392 = !{i64 7708}
!393 = !{i64 7716}
!394 = !{i64 7740}
!395 = !{i64 7748}
!396 = !{i64 7752}
!397 = !{i64 7756}
!398 = !{i64 7764}
!399 = !{i64 7768}
!400 = !{i64 7772}
!401 = !{i64 7776}
!402 = !{i64 7792}
!403 = !{i64 7804}
!404 = !{i64 7816}
!405 = !{i64 7820}
!406 = !{i64 7828}
!407 = !{i64 7836}
!408 = !{i64 7840}
!409 = !{i64 7844}
!410 = !{i64 7852}
!411 = !{i64 7856}
!412 = !{i64 7860}
!413 = !{i64 7864}
!414 = !{i64 7868}
!415 = !{i64 7872}
!416 = !{i64 7884}
!417 = !{i64 7888}
!418 = !{i64 7896}
!419 = !{i64 7916}
!420 = !{i64 7924}
!421 = !{i64 7968}
!422 = !{i64 7976}
!423 = !{i64 7980}
!424 = !{i64 7996}
!425 = !{i64 8000}
!426 = !{i64 8004}
!427 = !{i64 8008}
!428 = !{i64 8012}
!429 = !{i64 8016}
!430 = !{i64 8020}
!431 = !{i64 8036}
!432 = !{i64 8040}
!433 = !{i64 8048}
!434 = !{i64 8052}
!435 = !{i64 8056}
!436 = !{i64 8060}
!437 = !{i64 8064}
!438 = !{i64 8068}
!439 = !{i64 8072}
!440 = !{i64 8076}
!441 = !{i64 8080}
!442 = !{i64 8112}
!443 = !{i64 8120}
!444 = !{i64 8124}
!445 = !{i64 8136}
!446 = !{i64 8160}
!447 = !{i64 8168}
!448 = !{i64 8172}
!449 = !{i64 8176}
!450 = !{i64 8184}
!451 = !{i64 8192}
!452 = !{i64 8196}
!453 = !{i64 8200}
!454 = !{i64 8212}
!455 = !{i64 8228}
!456 = !{i64 8240}
!457 = !{i64 8244}
!458 = !{i64 8248}
!459 = !{i64 8252}
!460 = !{i64 8256}
!461 = !{i64 8280}
!462 = !{i64 8284}
!463 = !{i64 8324}
!464 = !{i64 8328}
!465 = !{i64 8332}
!466 = !{i64 8336}
!467 = !{i64 8340}
!468 = !{i64 8344}
!469 = !{i64 8364}
!470 = !{i64 8372}
!471 = !{i64 8376}
!472 = !{i64 8380}
!473 = !{i64 8388}
!474 = !{i64 8392}
!475 = !{i64 8400}
!476 = !{i64 8404}
!477 = !{i64 8412}
!478 = !{i64 8420}
!479 = !{i64 8436}
!480 = !{i64 8440}
!481 = !{i64 8452}
!482 = !{i64 8476}
!483 = !{i64 8492}
!484 = !{i64 8504}
!485 = !{i64 8508}
!486 = !{i64 8512}
!487 = !{i64 8540}
!488 = !{i64 8544}
!489 = !{i64 8548}
!490 = !{i64 8552}
!491 = !{i64 8564}
!492 = !{i64 8576}
!493 = !{i64 8580}
!494 = !{i64 8592}
!495 = !{i64 8596}
!496 = !{i64 8604}
!497 = !{i64 8644}
!498 = !{i64 8660}
!499 = !{i64 8672}
!500 = !{i64 8684}
!501 = !{i64 8696}
!502 = !{i64 8704}
!503 = !{i64 8716}
!504 = !{i64 8736}
!505 = !{i64 8760}
!506 = !{i64 8772}
!507 = !{i64 8792}
!508 = !{i64 8800}
!509 = !{i64 8804}
!510 = !{i64 8828}
!511 = !{i64 8832}
!512 = !{i64 8836}
!513 = !{i64 8844}
!514 = !{i64 8852}
!515 = !{i64 8864}
!516 = !{i64 8868}
!517 = !{i64 8876}
!518 = !{i64 8880}
!519 = !{i64 8884}
!520 = !{i64 8888}
!521 = !{i64 8904}
!522 = !{i64 8924}
!523 = !{i64 8928}
!524 = !{i64 8944}
!525 = !{i64 8980}
!526 = !{i64 8984}
!527 = !{i64 9000}
!528 = !{i64 9008}
!529 = !{i64 9012}
!530 = !{i64 9016}
!531 = !{i64 9020}
!532 = !{i64 9036}
!533 = !{i64 9064}
!534 = !{i64 9068}
!535 = !{i64 9080}
!536 = !{i64 9092}
!537 = !{i64 9100}
!538 = !{i64 9112}
!539 = !{i64 9116}
!540 = !{i64 9120}
!541 = !{i64 9124}
!542 = !{i64 9128}
!543 = !{i64 9152}
!544 = !{i64 9160}
!545 = !{i64 9200}
!546 = !{i64 9204}
!547 = !{i64 9208}
!548 = !{i64 9212}
!549 = !{i64 9216}
!550 = !{i64 9220}
!551 = !{i64 9244}
!552 = !{i64 9248}
!553 = !{i64 9252}
!554 = !{i64 9256}
!555 = !{i64 9264}
!556 = !{i64 9272}
!557 = !{i64 9280}
!558 = !{i64 9288}
!559 = !{i64 9292}
!560 = !{i64 9296}
!561 = !{i64 9312}
!562 = !{i64 9324}
!563 = !{i64 9336}
!564 = !{i64 9340}
!565 = !{i64 9356}
!566 = !{i64 9360}
!567 = !{i64 9372}
!568 = !{i64 9400}
!569 = !{i64 9416}
!570 = !{i64 9420}
!571 = !{i64 9424}
!572 = !{i64 9428}
!573 = !{i64 9436}
!574 = !{i64 9444}
!575 = !{i64 9452}
!576 = !{i64 9456}
!577 = !{i64 9464}
!578 = !{i64 9476}
!579 = !{i64 9484}
!580 = !{i64 9496}
!581 = !{i64 9508}
!582 = !{i64 9516}
!583 = !{i64 9528}
!584 = !{i64 9536}
!585 = !{i64 9556}
!586 = !{i64 9572}
!587 = !{i64 9576}
!588 = !{i64 9580}
!589 = !{i64 9584}
!590 = !{i64 9588}
!591 = !{i64 9616}
!592 = !{i64 9632}
!593 = !{i64 9636}
!594 = !{i64 9640}
!595 = !{i64 9648}
!596 = !{i64 9652}
!597 = !{i64 9656}
!598 = !{i64 9700}
!599 = !{i64 9692}
!600 = !{i64 9704}
!601 = !{i64 9708}
!602 = !{i64 9712}
!603 = !{i64 9716}
!604 = !{i64 9720}
!605 = !{i64 9724}
!606 = !{i64 9728}
!607 = !{i64 9732}
!608 = !{i64 9736}
!609 = !{i64 9764}
!610 = !{i64 9772}
!611 = !{i64 9784}
!612 = !{i64 9796}
!613 = !{i64 9804}
!614 = !{i64 9816}
!615 = !{i64 9828}
!616 = !{i64 9832}
!617 = !{i64 9836}
!618 = !{i64 9840}
!619 = !{i64 9844}
!620 = !{i64 9852}
!621 = !{i64 9860}
!622 = !{i64 9864}
!623 = !{i64 9876}
!624 = !{i64 9892}
!625 = !{i64 9908}
!626 = !{i64 9916}
!627 = !{i64 9932}
!628 = !{i64 9936}
!629 = !{i64 9952}
!630 = !{i64 9964}
!631 = !{i64 9980}
!632 = !{i64 9984}
!633 = !{i64 10000}
!634 = !{i64 10012}
!635 = !{i64 10028}
!636 = !{i64 10036}
!637 = !{i64 10056}
!638 = !{i64 10092}
!639 = !{i64 10096}
!640 = !{i64 10100}
!641 = !{i64 10112}
!642 = !{i64 10132}
!643 = !{i64 10140}
