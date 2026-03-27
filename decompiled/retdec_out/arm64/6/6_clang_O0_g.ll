source_filename = "test"
target datalayout = "e-m:e-i64:64-i128:128-n32:64-S128"

%sockaddr = type { i64, [14 x i8] }
%_IO_FILE = type { i32 }
%stat = type { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }
%shmid_ds = type { %ipc_perm, i32, i64, i64, i64, i32, i32, i16, i16, i64*, i64* }
%ipc_perm = type { i32, i32, i32, i32, i32, i32, i16 }

@global_var_15000 = global i64 4832
@global_var_15008 = local_unnamed_addr global i64 4832
@global_var_15010 = local_unnamed_addr global i64 4832
@global_var_15018 = local_unnamed_addr global i64 4832
@global_var_15020 = local_unnamed_addr global i64 4832
@global_var_15028 = local_unnamed_addr global i64 4832
@global_var_15030 = local_unnamed_addr global i64 4832
@global_var_15038 = local_unnamed_addr global i64 4832
@global_var_15040 = local_unnamed_addr global i64 4832
@global_var_15048 = local_unnamed_addr global i64 4832
@global_var_15050 = local_unnamed_addr global i64 4832
@global_var_15058 = local_unnamed_addr global i64 4832
@global_var_15060 = local_unnamed_addr global i64 4832
@global_var_15068 = local_unnamed_addr global i64 4832
@global_var_15070 = local_unnamed_addr global i64 4832
@global_var_15078 = local_unnamed_addr global i64 4832
@global_var_15080 = local_unnamed_addr global i64 4832
@global_var_15088 = local_unnamed_addr global i64 4832
@global_var_15090 = local_unnamed_addr global i64 4832
@global_var_15098 = local_unnamed_addr global i64 4832
@global_var_150a0 = local_unnamed_addr global i64 4832
@global_var_150a8 = local_unnamed_addr global i64 4832
@global_var_150b0 = local_unnamed_addr global i64 4832
@global_var_150b8 = local_unnamed_addr global i64 4832
@global_var_150c0 = local_unnamed_addr global i64 4832
@global_var_150c8 = local_unnamed_addr global i64 4832
@global_var_150d0 = local_unnamed_addr global i64 4832
@global_var_150d8 = local_unnamed_addr global i64 4832
@global_var_150e0 = local_unnamed_addr global i64 4832
@global_var_150e8 = local_unnamed_addr global i64 4832
@global_var_150f0 = local_unnamed_addr global i64 4832
@global_var_150f8 = local_unnamed_addr global i64 4832
@global_var_15100 = local_unnamed_addr global i64 4832
@global_var_15108 = local_unnamed_addr global i64 4832
@global_var_15110 = local_unnamed_addr global i64 4832
@global_var_15118 = local_unnamed_addr global i64 4832
@global_var_15120 = local_unnamed_addr global i64 4832
@global_var_15128 = local_unnamed_addr global i64 4832
@global_var_15130 = local_unnamed_addr global i64 4832
@global_var_15138 = local_unnamed_addr global i64 4832
@global_var_15140 = local_unnamed_addr global i64 4832
@global_var_15148 = local_unnamed_addr global i64 4832
@global_var_15150 = local_unnamed_addr global i64 4832
@global_var_15158 = local_unnamed_addr global i64 4832
@global_var_15160 = local_unnamed_addr global i64 4832
@global_var_15168 = local_unnamed_addr global i64 4832
@global_var_15170 = local_unnamed_addr global i64 4832
@global_var_15178 = local_unnamed_addr global i64 4832
@global_var_15180 = local_unnamed_addr global i64 4832
@global_var_15188 = local_unnamed_addr global i64 4832
@global_var_15190 = local_unnamed_addr global i64 4832
@global_var_15198 = local_unnamed_addr global i64 4832
@global_var_151a0 = local_unnamed_addr global i64 4832
@global_var_151a8 = local_unnamed_addr global i64 4832
@global_var_151b0 = local_unnamed_addr global i64 4832
@global_var_151b8 = local_unnamed_addr global i64 4832
@global_var_151c0 = local_unnamed_addr global i64 4832
@global_var_151c8 = local_unnamed_addr global i64 4832
@global_var_151d0 = local_unnamed_addr global i64 4832
@global_var_151d8 = local_unnamed_addr global i64 4832
@global_var_151e0 = local_unnamed_addr global i64 4832
@global_var_14fd8 = local_unnamed_addr global i64 14412
@global_var_14fd0 = local_unnamed_addr global i64 0
@global_var_151f8 = global i64 0
@global_var_14fc0 = local_unnamed_addr global i64 0
@global_var_14fe0 = local_unnamed_addr global i64 0
@global_var_1834 = local_unnamed_addr constant i64 4109502088327725088
@global_var_3908 = constant [9 x i8] c"HelloLib\00"
@global_var_3911 = constant [4 x i8] c"abc\00"
@global_var_3915 = constant [4 x i8] c"def\00"
@global_var_3919 = constant [4 x i8] c"xyz\00"
@global_var_391d = constant [4 x i8] c"bbb\00"
@global_var_3921 = constant [4 x i8] c"aaa\00"
@global_var_3925 = constant [13 x i8] c"BinBench2025\00"
@global_var_3d14 = local_unnamed_addr constant i64 4294967346
@global_var_3d20 = local_unnamed_addr constant i64 4294967299
@global_var_3d24 = local_unnamed_addr constant i64 8589934593
@global_var_3d2c = local_unnamed_addr constant i64 4294967300
@global_var_3932 = constant [21 x i8] c"Value: %d, Name: %s\0A\00"
@global_var_399f = constant [5 x i8] c"Test\00"
@global_var_3947 = constant [6 x i8] c"%d,%d\00"
@global_var_394d = constant [8 x i8] c"123,456\00"
@global_var_3957 = constant [12 x i8] c"/etc/passwd\00"
@global_var_3963 = constant [19 x i8] c"BinBench Test Data\00"
@global_var_3976 = constant [3 x i8] c"w+\00"
@global_var_1dd0 = local_unnamed_addr constant i64 -5179205919820480472
@global_var_1e48 = local_unnamed_addr constant i64 1918278253378797576
@global_var_3979 = constant [23 x i8] c"/tmp/binbench_test.tmp\00"
@global_var_3990 = constant [20 x i8] c"Hello BinBench Test\00"
@global_var_39a4 = constant [6 x i8] c"Bench\00"
@global_var_22b8 = local_unnamed_addr constant i64 3035148971946278921
@global_var_2348 = local_unnamed_addr constant i64 6052838631226212360
@global_var_3b1d = constant [10 x i8] c"/bin/true\00"
@global_var_24c8 = local_unnamed_addr constant i64 6052838631226212360
@global_var_2518 = local_unnamed_addr constant i64 -7985835378596642808
@global_var_3b27 = constant [10 x i8] c"HelloPipe\00"
@global_var_2634 = local_unnamed_addr constant i64 6052838906104119304
@global_var_2648 = local_unnamed_addr constant i64 -5179205919820480472
@global_var_268c = local_unnamed_addr constant i64 6052838906104119304
@global_var_26a0 = local_unnamed_addr constant i64 -5179205919820480440
@global_var_26b8 = local_unnamed_addr constant i64 6052838906104119304
@global_var_26cc = local_unnamed_addr constant i64 -5179205919820480408
@global_var_3b31 = constant [18 x i8] c"/tmp/binbench_shm\00"
@global_var_3b43 = constant [13 x i8] c"SharedMemory\00"
@global_var_2cb4 = local_unnamed_addr constant i64 -5116071686201933784
@global_var_15208 = global i64 0
@global_var_2f1c = local_unnamed_addr constant i64 -5179205919820480472
@global_var_15240 = global i64 0
@global_var_15278 = global i64 0
@global_var_3148 = local_unnamed_addr constant i64 -5179205919820480472
@global_var_3374 = local_unnamed_addr constant i64 -5179205919820480472
@global_var_33ac = local_unnamed_addr constant i64 1441151885925941344
@global_var_3c30 = constant [10 x i8] c"Thread-%d\00"
@global_var_365c = local_unnamed_addr constant i64 -5179205919820480472
@0 = external global i32
@global_var_152b0 = local_unnamed_addr global i32 0
@global_var_3d04 = local_unnamed_addr constant fp128 0xL00000000000000003BF0400000028000
@global_var_3d18 = local_unnamed_addr constant i32 1
@global_var_3d30 = local_unnamed_addr constant i32 1
@1 = internal constant [2 x i8] c"r\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i64 0, i64 0)
@3 = internal constant [37 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\87\E5\87\86\E5\BA\93\E5\87\BD\E6\95\B0\E8\B0\83\E7\94\A8 ===\0A\00"
@global_var_39aa = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @3, i64 0, i64 0)
@4 = internal constant [27 x i8] c"LIB-L1-01: %d (\E6\9C\9F\E6\9C\9B: 8)\0A\00"
@global_var_39cf = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @4, i64 0, i64 0)
@5 = internal constant [27 x i8] c"LIB-L1-02: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_39ea = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @5, i64 0, i64 0)
@6 = internal constant [28 x i8] c"LIB-L1-03: %d (\E6\9C\9F\E6\9C\9B: 12)\0A\00"
@global_var_3a05 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @6, i64 0, i64 0)
@7 = internal constant [28 x i8] c"LIB-L1-04: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_3a21 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @7, i64 0, i64 0)
@8 = internal constant [28 x i8] c"LIB-L1-05: %d (\E6\9C\9F\E6\9C\9B: -1)\0A\00"
@global_var_3a3d = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i64 0, i64 0)
@9 = internal constant [28 x i8] c"LIB-L1-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_3a59 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i64 0, i64 0)
@10 = internal constant [29 x i8] c"LIB-L1-07: %d (\E6\9C\9F\E6\9C\9B: 579)\0A\00"
@global_var_3a75 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"LIB-L1-08: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3a92 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [28 x i8] c"LIB-L1-09: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3aae = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @12, i64 0, i64 0)
@13 = internal constant [28 x i8] c"LIB-L1-10: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_3aca = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @13, i64 0, i64 0)
@14 = internal constant [27 x i8] c"LIB-L1-11: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_3ae6 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @14, i64 0, i64 0)
@15 = internal constant [28 x i8] c"LIB-L1-12: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_3b01 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @15, i64 0, i64 0)
@global_var_1000 = global i32 1026
@global_var_3b6 = global i32 0
@global_var_15200 = local_unnamed_addr global i32 0
@global_var_3e8 = global i32 0
@global_var_15204 = local_unnamed_addr global i32 0
@global_var_7d0 = global i32 152
@16 = internal constant [28 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\B3\BB\E7\BB\9F\E8\B0\83\E7\94\A8 ===\0A\00"
@global_var_3b50 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @16, i64 0, i64 0)
@17 = internal constant [28 x i8] c"SYS-L3-01: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3b6c = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i64 0, i64 0)
@18 = internal constant [28 x i8] c"SYS-L3-02: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3b88 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @18, i64 0, i64 0)
@19 = internal constant [28 x i8] c"SYS-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3ba4 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @19, i64 0, i64 0)
@20 = internal constant [28 x i8] c"SYS-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3bc0 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @20, i64 0, i64 0)
@21 = internal constant [28 x i8] c"SYS-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3bdc = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @21, i64 0, i64 0)
@22 = internal constant [28 x i8] c"SYS-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3bf8 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @22, i64 0, i64 0)
@23 = internal constant [28 x i8] c"SYS-L3-07: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3c14 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @23, i64 0, i64 0)
@global_var_15238 = local_unnamed_addr global i32 0
@global_var_15239 = global i32 0
@global_var_15270 = local_unnamed_addr global i32 0
@global_var_152a8 = local_unnamed_addr global i32 0
@global_var_152ac = local_unnamed_addr global i32 0
@24 = internal constant [31 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\BA\BF\E7\A8\8B\E4\B8\8E\E5\B9\B6\E5\8F\91 ===\0A\00"
@global_var_3c3a = constant i8* getelementptr inbounds ([31 x i8], [31 x i8]* @24, i64 0, i64 0)
@25 = internal constant [28 x i8] c"THR-L3-01: %d (\E6\9C\9F\E6\9C\9B: 49)\0A\00"
@global_var_3c59 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @25, i64 0, i64 0)
@26 = internal constant [29 x i8] c"THR-L3-02: %d (\E6\9C\9F\E6\9C\9B: 465)\0A\00"
@global_var_3c75 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @26, i64 0, i64 0)
@27 = internal constant [28 x i8] c"THR-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3c92 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @27, i64 0, i64 0)
@28 = internal constant [28 x i8] c"THR-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3cae = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @28, i64 0, i64 0)
@29 = internal constant [28 x i8] c"THR-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3cca = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @29, i64 0, i64 0)
@30 = internal constant [28 x i8] c"THR-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3ce6 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @30, i64 0, i64 0)
@global_var_3955 = constant [2 x i8] c"r\00"

define i64 @_init(i64 %arg1) local_unnamed_addr {
dec_label_pc_12c8:
  %0 = call i64 @call_weak_fn(), !insn.addr !0
  ret i64 %0, !insn.addr !1
}

define i64* @function_1300(i64* %dest, i64* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1300:
  %0 = call i64* @memcpy(i64* %dest, i64* %src, i32 %n), !insn.addr !2
  ret i64* %0, !insn.addr !2
}

define void @function_1310(i32 %status) local_unnamed_addr {
dec_label_pc_1310:
  call void @_exit(i32 %status), !insn.addr !3
  ret void, !insn.addr !3
}

define i32 @function_1320(i8* %s) local_unnamed_addr {
dec_label_pc_1320:
  %0 = call i32 @strlen(i8* %s), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i32 @function_1330(i32 %sig) local_unnamed_addr {
dec_label_pc_1330:
  %0 = call i32 @raise(i32 %sig), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define i32 @function_1340(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_1340:
  %0 = call i32 @__libc_start_main(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i32 @function_1350(i8* %path, i8* %arg, ...) local_unnamed_addr {
dec_label_pc_1350:
  %0 = call i32 (i8*, i8*, ...) @execl(i8* %path, i8* %arg), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @function_1360(i32 %fd, i32 %n) local_unnamed_addr {
dec_label_pc_1360:
  %0 = call i32 @listen(i32 %fd, i32 %n), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i32 @function_1370(i64* %shmaddr) local_unnamed_addr {
dec_label_pc_1370:
  %0 = call i32 @shmdt(i64* %shmaddr), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @function_1380(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_1380:
  %0 = call i32 @bind(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i64 @function_1390(i64 %arg1) local_unnamed_addr {
dec_label_pc_1390:
  %0 = call i64 @__cxa_finalize.5(i64 %arg1), !insn.addr !11
  ret i64 %0, !insn.addr !11
}

define i32 @function_13a0([2 x i32] %pipedes) local_unnamed_addr {
dec_label_pc_13a0:
  %0 = call i32 @pipe([2 x i32] %pipedes), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define i32 @function_13b0() local_unnamed_addr {
dec_label_pc_13b0:
  %0 = call i32 @fork(), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define i32 @function_13c0(i8* %s, i32 %maxlen, i8* %format, ...) local_unnamed_addr {
dec_label_pc_13c0:
  %0 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %s, i32 %maxlen, i8* %format), !insn.addr !14
  ret i32 %0, !insn.addr !14
}

define i32 @function_13d0(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_13d0:
  %0 = call i32 @fileno(%_IO_FILE* %stream), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define void (i32)* @function_13e0(i32 %sig, void (i32)* %handler) local_unnamed_addr {
dec_label_pc_13e0:
  %0 = call void (i32)* @signal(i32 %sig, void (i32)* %handler), !insn.addr !16
  ret void (i32)* %0, !insn.addr !16
}

define i32 @function_13f0(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_13f0:
  %0 = call i32 @fclose(%_IO_FILE* %stream), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define %_IO_FILE* @function_1400(i8* %filename, i8* %modes) local_unnamed_addr {
dec_label_pc_1400:
  %0 = call %_IO_FILE* @fopen(i8* %filename, i8* %modes), !insn.addr !18
  ret %_IO_FILE* %0, !insn.addr !18
}

define i64* @function_1410(i32 %size) local_unnamed_addr {
dec_label_pc_1410:
  %0 = call i64* @malloc(i32 %size), !insn.addr !19
  ret i64* %0, !insn.addr !19
}

define i32 @function_1420(i32 %fd, i32 %level, i32 %optname, i64* %optval, i32 %optlen) local_unnamed_addr {
dec_label_pc_1420:
  %0 = call i32 @setsockopt(i32 %fd, i32 %level, i32 %optname, i64* %optval, i32 %optlen), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i32 @function_1430(i8* %file, i32 %oflag, ...) local_unnamed_addr {
dec_label_pc_1430:
  %0 = call i32 (i8*, i32, ...) @open(i8* %file, i32 %oflag), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define i32 @function_1440(i64* %cond) local_unnamed_addr {
dec_label_pc_1440:
  %0 = call i32 @pthread_cond_signal(i64* %cond), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define i64* @function_1450(i64* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_1450:
  %0 = call i64* @memset(i64* %s, i32 %c, i32 %n), !insn.addr !23
  ret i64* %0, !insn.addr !23
}

define i64* @function_1460(i32 %shmid, i64* %shmaddr, i32 %shmflg) local_unnamed_addr {
dec_label_pc_1460:
  %0 = call i64* @shmat(i32 %shmid, i64* %shmaddr, i32 %shmflg), !insn.addr !24
  ret i64* %0, !insn.addr !24
}

define i32 @function_1470(i32 %seconds) local_unnamed_addr {
dec_label_pc_1470:
  %0 = call i32 @sleep(i32 %seconds), !insn.addr !25
  ret i32 %0, !insn.addr !25
}

define i16 @function_1480(i16 %hostshort) local_unnamed_addr {
dec_label_pc_1480:
  %0 = call i16 @htons(i16 %hostshort), !insn.addr !26
  ret i16 %0, !insn.addr !26
}

define void @function_1490(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_1490:
  call void @rewind(%_IO_FILE* %stream), !insn.addr !27
  ret void, !insn.addr !27
}

define i32 @function_14a0(i32 %fd) local_unnamed_addr {
dec_label_pc_14a0:
  %0 = call i32 @close(i32 %fd), !insn.addr !28
  ret i32 %0, !insn.addr !28
}

define i64 @function_14b0(i64 %arg1) local_unnamed_addr {
dec_label_pc_14b0:
  %0 = call i64 @__gmon_start__.6(i64 %arg1), !insn.addr !29
  ret i64 %0, !insn.addr !29
}

define i32 @function_14c0(i8* %file, %stat* %buf) local_unnamed_addr {
dec_label_pc_14c0:
  %0 = call i32 @stat(i8* %file, %stat* %buf), !insn.addr !30
  ret i32 %0, !insn.addr !30
}

define i32 @function_14d0(i32 %fd, i64* %buf, i32 %n) local_unnamed_addr {
dec_label_pc_14d0:
  %0 = call i32 @write(i32 %fd, i64* %buf, i32 %n), !insn.addr !31
  ret i32 %0, !insn.addr !31
}

define i32 @function_14e0(i32 %type) local_unnamed_addr {
dec_label_pc_14e0:
  %0 = call i32 @__getauxval(i32 %type), !insn.addr !32
  ret i32 %0, !insn.addr !32
}

define void @function_14f0() local_unnamed_addr {
dec_label_pc_14f0:
  call void @abort(), !insn.addr !33
  ret void, !insn.addr !33
}

define i32 @function_1500(i64* %s1, i64* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_1500:
  %0 = call i32 @memcmp(i64* %s1, i64* %s2, i32 %n), !insn.addr !34
  ret i32 %0, !insn.addr !34
}

define i32 @function_1510(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_1510:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !35
  ret i32 %0, !insn.addr !35
}

define i32 @function_1520(i32 %shmid, i32 %cmd, %shmid_ds* %buf) local_unnamed_addr {
dec_label_pc_1520:
  %0 = call i32 @shmctl(i32 %shmid, i32 %cmd, %shmid_ds* %buf), !insn.addr !36
  ret i32 %0, !insn.addr !36
}

define i32 @function_1530(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_1530:
  %0 = call i32 @fread(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream), !insn.addr !37
  ret i32 %0, !insn.addr !37
}

define i32 @function_1540(i8* %pathname, i32 %proj_id) local_unnamed_addr {
dec_label_pc_1540:
  %0 = call i32 @ftok(i8* %pathname, i32 %proj_id), !insn.addr !38
  ret i32 %0, !insn.addr !38
}

define void @function_1550(i64* %ptr) local_unnamed_addr {
dec_label_pc_1550:
  call void @free(i64* %ptr), !insn.addr !39
  ret void, !insn.addr !39
}

define i32 @function_1560(i32 %key, i32 %size, i32 %shmflg) local_unnamed_addr {
dec_label_pc_1560:
  %0 = call i32 @shmget(i32 %key, i32 %size, i32 %shmflg), !insn.addr !40
  ret i32 %0, !insn.addr !40
}

define i32 @function_1570(i64* %cond, i64* %mutex) local_unnamed_addr {
dec_label_pc_1570:
  %0 = call i32 @pthread_cond_wait(i64* %cond, i64* %mutex), !insn.addr !41
  ret i32 %0, !insn.addr !41
}

define i8* @function_1580(i8* %s, i32 %c) local_unnamed_addr {
dec_label_pc_1580:
  %0 = call i8* @strchr(i8* %s, i32 %c), !insn.addr !42
  ret i8* %0, !insn.addr !42
}

define i32 @function_1590(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_1590:
  %0 = call i32 @fwrite(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !43
  ret i32 %0, !insn.addr !43
}

define i32 @function_15a0(i32* %newthread, i64* %attr, i64* (i64*)* %start_routine, i64* %arg) local_unnamed_addr {
dec_label_pc_15a0:
  %0 = call i32 @pthread_create(i32* %newthread, i64* %attr, i64* (i64*)* %start_routine, i64* %arg), !insn.addr !44
  ret i32 %0, !insn.addr !44
}

define i32 @function_15b0(i64 %stat_loc) local_unnamed_addr {
dec_label_pc_15b0:
  %0 = call i32 @wait(i64 %stat_loc), !insn.addr !45
  ret i32 %0, !insn.addr !45
}

define i32 @function_15c0(i32 %domain, i32 %type, i32 %protocol) local_unnamed_addr {
dec_label_pc_15c0:
  %0 = call i32 @socket(i32 %domain, i32 %type, i32 %protocol), !insn.addr !46
  ret i32 %0, !insn.addr !46
}

define i8* @function_15d0(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_15d0:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !47
  ret i8* %0, !insn.addr !47
}

define i32 @function_15e0(i32 %fd, i64* %buf, i32 %nbytes) local_unnamed_addr {
dec_label_pc_15e0:
  %0 = call i32 @read(i32 %fd, i64* %buf, i32 %nbytes), !insn.addr !48
  ret i32 %0, !insn.addr !48
}

define i8* @function_15f0(i8* %haystack, i8* %needle) local_unnamed_addr {
dec_label_pc_15f0:
  %0 = call i8* @strstr(i8* %haystack, i8* %needle), !insn.addr !49
  ret i8* %0, !insn.addr !49
}

define i32 @function_1600(i32 %useconds) local_unnamed_addr {
dec_label_pc_1600:
  %0 = call i32 @usleep(i32 %useconds), !insn.addr !50
  ret i32 %0, !insn.addr !50
}

define i32 @function_1610(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_1610:
  %0 = call i32 (i8*, i8*, ...) @sscanf(i8* %s, i8* %format), !insn.addr !51
  ret i32 %0, !insn.addr !51
}

define i8* @function_1620(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1620:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !52
  ret i8* %0, !insn.addr !52
}

define i32 @function_1630(i8* %format, ...) local_unnamed_addr {
dec_label_pc_1630:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !53
  ret i32 %0, !insn.addr !53
}

define i32* @function_1640() local_unnamed_addr {
dec_label_pc_1640:
  %0 = call i32* @__errno_location(), !insn.addr !54
  ret i32* %0, !insn.addr !54
}

define i32 @function_1650(i32 %th, i64** %thread_return) local_unnamed_addr {
dec_label_pc_1650:
  %0 = call i32 @pthread_join(i32 %th, i64** %thread_return), !insn.addr !55
  ret i32 %0, !insn.addr !55
}

define i32 @function_1660(i32 %seconds) local_unnamed_addr {
dec_label_pc_1660:
  %0 = call i32 @alarm(i32 %seconds), !insn.addr !56
  ret i32 %0, !insn.addr !56
}

define i32 @function_1670(i32 %th) local_unnamed_addr {
dec_label_pc_1670:
  %0 = call i32 @pthread_cancel(i32 %th), !insn.addr !57
  ret i32 %0, !insn.addr !57
}

define i32 @function_1680(i64* %mutex) local_unnamed_addr {
dec_label_pc_1680:
  %0 = call i32 @pthread_mutex_lock(i64* %mutex), !insn.addr !58
  ret i32 %0, !insn.addr !58
}

define i32 @function_1690(i32 %sysno, ...) local_unnamed_addr {
dec_label_pc_1690:
  %0 = call i32 (i32, ...) @syscall(i32 %sysno), !insn.addr !59
  ret i32 %0, !insn.addr !59
}

define i32 @function_16a0(i64* %mutex) local_unnamed_addr {
dec_label_pc_16a0:
  %0 = call i32 @pthread_mutex_unlock(i64* %mutex), !insn.addr !60
  ret i32 %0, !insn.addr !60
}

define i32 @function_16b0(i32 %pid, i32* %stat_loc, i32 %options) local_unnamed_addr {
dec_label_pc_16b0:
  %0 = call i32 @waitpid(i32 %pid, i32* %stat_loc, i32 %options), !insn.addr !61
  ret i32 %0, !insn.addr !61
}

define i32 @function_16c0(i8* %name) local_unnamed_addr {
dec_label_pc_16c0:
  %0 = call i32 @unlink(i8* %name), !insn.addr !62
  ret i32 %0, !insn.addr !62
}

define i64 @init_have_lse_atomics(i64 %arg1) local_unnamed_addr {
dec_label_pc_1700:
  %0 = call i32 @__getauxval(i32 16), !insn.addr !63
  %1 = call i32 @__asm_ubfx(i32 %0, i32 %0, i64 8, i64 1), !insn.addr !64
  %2 = sext i32 %1 to i64, !insn.addr !64
  %3 = trunc i32 %1 to i8, !insn.addr !65
  store i8 %3, i8* bitcast (i32* @global_var_152b0 to i8*), align 4, !insn.addr !65
  ret i64 %2, !insn.addr !66
}

define i64 @_start(i64 %arg1) local_unnamed_addr {
dec_label_pc_1740:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_8 = alloca i64, align 8
  %2 = load i64, i64* @global_var_14fd8, align 8, !insn.addr !67
  %3 = trunc i64 %arg1 to i32, !insn.addr !68
  %4 = bitcast i64* %stack_var_8 to i8**, !insn.addr !68
  %5 = inttoptr i64 %1 to void ()*, !insn.addr !68
  %6 = call i32 @__libc_start_main(i64 %2, i32 %3, i8** nonnull %4, void ()* null, void ()* null, void ()* %5), !insn.addr !68
  call void @abort(), !insn.addr !69
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !69
}

define i64 @call_weak_fn() local_unnamed_addr {
dec_label_pc_1774:
  %0 = load i64, i64* @global_var_14fd0, align 8, !insn.addr !70
  %1 = icmp eq i64 %0, 0, !insn.addr !71
  br i1 %1, label %dec_label_pc_1784, label %dec_label_pc_1780, !insn.addr !71

dec_label_pc_1780:                                ; preds = %dec_label_pc_1774
  %2 = call i64 @__gmon_start__.6(i64 %0), !insn.addr !72
  ret i64 %2, !insn.addr !72

dec_label_pc_1784:                                ; preds = %dec_label_pc_1774
  ret i64 0, !insn.addr !73
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1790:
  ret i64 ptrtoint (i64* @global_var_151f8 to i64), !insn.addr !74
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_17c0:
  ret i64 ptrtoint (i64* @global_var_151f8 to i64), !insn.addr !75
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1800:
  %x0.0.reg2mem = alloca i64, !insn.addr !76
  %0 = load i8, i8* bitcast (i64* @global_var_151f8 to i8*), align 8, !insn.addr !77
  %1 = zext i8 %0 to i64, !insn.addr !77
  %2 = icmp eq i8 %0, 0, !insn.addr !78
  store i64 %1, i64* %x0.0.reg2mem, !insn.addr !78
  br i1 %2, label %dec_label_pc_1818, label %dec_label_pc_183c, !insn.addr !78

dec_label_pc_1818:                                ; preds = %dec_label_pc_1800
  %3 = load i64, i64* inttoptr (i64 85960 to i64*), align 8, !insn.addr !79
  %4 = icmp eq i64 %3, 0, !insn.addr !80
  br i1 %4, label %dec_label_pc_1830, label %dec_label_pc_1824, !insn.addr !80

dec_label_pc_1824:                                ; preds = %dec_label_pc_1818
  %5 = load i64, i64* inttoptr (i64 add (i64 ptrtoint (i64* @global_var_15000 to i64), i64 496) to i64*), align 8, !insn.addr !81
  %6 = call i64 @__cxa_finalize.5(i64 %5), !insn.addr !82
  br label %dec_label_pc_1830, !insn.addr !82

dec_label_pc_1830:                                ; preds = %dec_label_pc_1824, %dec_label_pc_1818
  %7 = call i64 @deregister_tm_clones(), !insn.addr !83
  store i8 1, i8* bitcast (i64* @global_var_151f8 to i8*), align 8, !insn.addr !84
  store i64 1, i64* %x0.0.reg2mem, !insn.addr !84
  br label %dec_label_pc_183c, !insn.addr !84

dec_label_pc_183c:                                ; preds = %dec_label_pc_1800, %dec_label_pc_1830
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !85

; uselistorder directives
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_183c, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1850:
  %0 = call i64 @register_tm_clones(), !insn.addr !86
  ret i64 %0, !insn.addr !86
}

define i32 @param_strcpy(i8* %dst, i8* %src) local_unnamed_addr {
dec_label_pc_1854:
  %0 = call i8* @strcpy(i8* %dst, i8* %src), !insn.addr !87
  %1 = call i32 @strlen(i8* %dst), !insn.addr !88
  ret i32 %1, !insn.addr !89
}

define i32 @call_strcpy() local_unnamed_addr {
dec_label_pc_1888:
  %buffer_-48 = alloca [1 x i8], align 1
  %0 = getelementptr inbounds [1 x i8], [1 x i8]* %buffer_-48, i64 0, i64 0, !insn.addr !90
  %1 = call i32 @param_strcpy(i8* nonnull %0, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_3908, i64 0, i64 0)), !insn.addr !90
  ret i32 %1, !insn.addr !91
}

define i32 @param_strcmp(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_18b8:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !92
  %1 = icmp slt i32 %0, 1, !insn.addr !93
  %2 = icmp ne i32 %0, 0
  %. = sext i1 %2 to i32
  %storemerge = select i1 %1, i32 %., i32 1
  ret i32 %storemerge, !insn.addr !94
}

define i32 @call_strcmp() local_unnamed_addr {
dec_label_pc_1920:
  %0 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_3911, i64 0, i64 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_3915, i64 0, i64 0)), !insn.addr !95
  %1 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_3919, i64 0, i64 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_3919, i64 0, i64 0)), !insn.addr !96
  %2 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_391d, i64 0, i64 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_3921, i64 0, i64 0)), !insn.addr !97
  %3 = add i32 %1, %0, !insn.addr !98
  %4 = add i32 %3, %2, !insn.addr !99
  ret i32 %4, !insn.addr !100

; uselistorder directives
  uselistorder i32 (i8*, i8*)* @param_strcmp, { 2, 1, 0 }
}

define i32 @param_strlen(i8* %str) local_unnamed_addr {
dec_label_pc_1990:
  %0 = call i32 @strlen(i8* %str), !insn.addr !101
  ret i32 %0, !insn.addr !102
}

define i32 @call_strlen() local_unnamed_addr {
dec_label_pc_19c0:
  %0 = call i32 @param_strlen(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_3925, i64 0, i64 0)), !insn.addr !103
  ret i32 %0, !insn.addr !104
}

define i32 @param_memcpy(i8* %dst, i32* %src, i64 %n) local_unnamed_addr {
dec_label_pc_19ec:
  %0 = bitcast i8* %dst to i64*, !insn.addr !105
  %1 = bitcast i32* %src to i64*, !insn.addr !105
  %2 = trunc i64 %n to i32, !insn.addr !105
  %3 = call i64* @memcpy(i64* %0, i64* %1, i32 %2), !insn.addr !105
  ret i32 %2, !insn.addr !106
}

define i32 @call_memcpy() local_unnamed_addr {
dec_label_pc_1a28:
  %dst_-72 = alloca [1 x i32], align 4
  %src_-48 = alloca [1 x i32], align 4
  store [1 x i32] zeroinitializer, [1 x i32]* %src_-48, align 4, !insn.addr !107
  store [1 x i32] zeroinitializer, [1 x i32]* %dst_-72, align 4, !insn.addr !108
  %0 = bitcast [1 x i32]* %dst_-72 to i8*, !insn.addr !109
  %1 = getelementptr inbounds [1 x i32], [1 x i32]* %src_-48, i64 0, i64 0, !insn.addr !109
  %2 = call i32 @param_memcpy(i8* nonnull %0, i32* nonnull %1, i64 20), !insn.addr !109
  %3 = getelementptr inbounds [1 x i32], [1 x i32]* %dst_-72, i64 0, i64 0, !insn.addr !110
  %4 = load i32, i32* %3, align 4, !insn.addr !110
  ret i32 %4, !insn.addr !111
}

define i32 @param_memcmp(i32* %p1, i32* %p2, i64 %n) local_unnamed_addr {
dec_label_pc_1a88:
  %0 = bitcast i32* %p1 to i64*, !insn.addr !112
  %1 = bitcast i32* %p2 to i64*, !insn.addr !112
  %2 = trunc i64 %n to i32, !insn.addr !112
  %3 = call i32 @memcmp(i64* %0, i64* %1, i32 %2), !insn.addr !112
  %4 = icmp slt i32 %3, 1, !insn.addr !113
  %5 = icmp ne i32 %3, 0
  %. = sext i1 %5 to i32
  %storemerge = select i1 %4, i32 %., i32 1
  ret i32 %storemerge, !insn.addr !114
}

define i32 @call_memcmp() local_unnamed_addr {
dec_label_pc_1af8:
  %arr3_-64 = alloca [1 x i32], align 4
  %stack_var_-48 = alloca i64, align 8
  %arr2_-32 = alloca [1 x i32], align 4
  store [1 x i32] [i32 1], [1 x i32]* %arr2_-32, align 4, !insn.addr !115
  store i64 8589934593, i64* %stack_var_-48, align 8, !insn.addr !116
  %0 = getelementptr inbounds [1 x i32], [1 x i32]* %arr3_-64, i64 0, i64 0
  store [1 x i32] [i32 1], [1 x i32]* %arr3_-64, align 4, !insn.addr !117
  %1 = getelementptr inbounds [1 x i32], [1 x i32]* %arr2_-32, i64 0, i64 0, !insn.addr !118
  %2 = bitcast i64* %stack_var_-48 to i32*, !insn.addr !118
  %3 = call i32 @param_memcmp(i32* nonnull %1, i32* nonnull %2, i64 12), !insn.addr !118
  %4 = call i32 @param_memcmp(i32* nonnull %1, i32* nonnull %0, i64 12), !insn.addr !119
  %5 = add i32 %4, %3, !insn.addr !120
  ret i32 %5, !insn.addr !121

; uselistorder directives
  uselistorder [1 x i32]* %arr3_-64, { 1, 0 }
  uselistorder i32 (i32*, i32*, i64)* @param_memcmp, { 1, 0 }
}

define i32 @param_printf(i32 %x, i8* %name) local_unnamed_addr {
dec_label_pc_1ba0:
  %0 = zext i32 %x to i64, !insn.addr !122
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_3932, i64 0, i64 0), i64 %0, i8* %name), !insn.addr !123
  ret i32 %1, !insn.addr !124
}

define i32 @call_printf() local_unnamed_addr {
dec_label_pc_1bdc:
  %0 = call i32 @param_printf(i32 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_399f, i64 0, i64 0)), !insn.addr !125
  ret i32 %0, !insn.addr !126
}

define i32 @param_scanf(i8* %input_str) local_unnamed_addr {
dec_label_pc_1c0c:
  %storemerge.reg2mem = alloca i32, !insn.addr !127
  %b_-40 = alloca i32, align 4
  %a_-36 = alloca i32, align 4
  %0 = call i32 (i8*, i8*, ...) @sscanf(i8* %input_str, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_3947, i64 0, i64 0), i32* nonnull %a_-36, i32* nonnull %b_-40), !insn.addr !128
  %1 = icmp eq i32 %0, 2, !insn.addr !129
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !129
  br i1 %1, label %dec_label_pc_1c48, label %dec_label_pc_1c68, !insn.addr !129

dec_label_pc_1c48:                                ; preds = %dec_label_pc_1c0c
  %2 = load i32, i32* %a_-36, align 4, !insn.addr !130
  %3 = load i32, i32* %b_-40, align 4, !insn.addr !131
  %4 = add i32 %3, %2, !insn.addr !132
  store i32 %4, i32* %storemerge.reg2mem, !insn.addr !133
  br label %dec_label_pc_1c68, !insn.addr !133

dec_label_pc_1c68:                                ; preds = %dec_label_pc_1c0c, %dec_label_pc_1c48
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !134

; uselistorder directives
  uselistorder i32* %a_-36, { 1, 0 }
  uselistorder i32* %b_-40, { 1, 0 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1c68, { 1, 0 }
}

define i32 @call_scanf() local_unnamed_addr {
dec_label_pc_1c78:
  %0 = call i32 @param_scanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_394d, i64 0, i64 0)), !insn.addr !135
  ret i32 %0, !insn.addr !136
}

define i32 @param_fopen_fclose(i8* %filename) local_unnamed_addr {
dec_label_pc_1c94:
  %storemerge.reg2mem = alloca i32, !insn.addr !137
  %0 = call %_IO_FILE* @fopen(i8* %filename, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_3955, i64 0, i64 0)), !insn.addr !138
  %1 = icmp eq %_IO_FILE* %0, null, !insn.addr !139
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !139
  br i1 %1, label %dec_label_pc_1cf0, label %dec_label_pc_1cd0, !insn.addr !139

dec_label_pc_1cd0:                                ; preds = %dec_label_pc_1c94
  %2 = call i32 @fileno(%_IO_FILE* nonnull %0), !insn.addr !140
  %3 = call i32 @fclose(%_IO_FILE* nonnull %0), !insn.addr !141
  store i32 %2, i32* %storemerge.reg2mem, !insn.addr !142
  br label %dec_label_pc_1cf0, !insn.addr !142

dec_label_pc_1cf0:                                ; preds = %dec_label_pc_1c94, %dec_label_pc_1cd0
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !143

; uselistorder directives
  uselistorder %_IO_FILE* %0, { 1, 0, 2 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1cf0, { 1, 0 }
}

define i32 @call_fopen_fclose() local_unnamed_addr {
dec_label_pc_1d00:
  %0 = call i32 @param_fopen_fclose(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_3957, i64 0, i64 0)), !insn.addr !144
  %1 = icmp slt i32 %0, 0, !insn.addr !145
  %. = select i1 %1, i32 -1, i32 42
  ret i32 %., !insn.addr !146
}

define i32 @param_fread_fwrite(i8* %tmpfile) local_unnamed_addr {
dec_label_pc_1d38:
  %stack_var_-20.0.reg2mem = alloca i32, !insn.addr !147
  %read_buffer_-72 = alloca [1 x i8], align 1
  %0 = call %_IO_FILE* @fopen(i8* %tmpfile, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_3976, i64 0, i64 0)), !insn.addr !148
  %1 = icmp eq %_IO_FILE* %0, null, !insn.addr !149
  store i32 -1, i32* %stack_var_-20.0.reg2mem, !insn.addr !149
  br i1 %1, label %dec_label_pc_1e74, label %dec_label_pc_1d80, !insn.addr !149

dec_label_pc_1d80:                                ; preds = %dec_label_pc_1d38
  %2 = call i32 @strlen(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_3963, i64 0, i64 0)), !insn.addr !150
  %3 = call i32 @fwrite(i64* bitcast ([19 x i8]* @global_var_3963 to i64*), i32 1, i32 %2, %_IO_FILE* nonnull %0), !insn.addr !151
  %4 = call i32 @strlen(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_3963, i64 0, i64 0)), !insn.addr !152
  %5 = icmp eq i32 %3, %4, !insn.addr !153
  br i1 %5, label %dec_label_pc_1ddc, label %dec_label_pc_1dc8, !insn.addr !154

dec_label_pc_1dc8:                                ; preds = %dec_label_pc_1d80
  %6 = call i32 @fclose(%_IO_FILE* nonnull %0), !insn.addr !155
  store i32 -2, i32* %stack_var_-20.0.reg2mem, !insn.addr !156
  br label %dec_label_pc_1e74, !insn.addr !156

dec_label_pc_1ddc:                                ; preds = %dec_label_pc_1d80
  call void @rewind(%_IO_FILE* nonnull %0), !insn.addr !157
  %7 = ptrtoint [1 x i8]* %read_buffer_-72 to i64, !insn.addr !158
  %8 = bitcast [1 x i8]* %read_buffer_-72 to i64*, !insn.addr !159
  %9 = call i32 @fread(i64* nonnull %8, i32 1, i32 %3, %_IO_FILE* nonnull %0), !insn.addr !159
  %10 = sext i32 %9 to i64, !insn.addr !159
  %11 = add i64 %10, %7, !insn.addr !160
  %12 = inttoptr i64 %11 to i8*, !insn.addr !161
  store i8 0, i8* %12, align 1, !insn.addr !161
  %13 = call i32 @fclose(%_IO_FILE* nonnull %0), !insn.addr !162
  %14 = call i32 @unlink(i8* %tmpfile), !insn.addr !163
  %15 = icmp eq i32 %3, %9, !insn.addr !164
  store i32 -3, i32* %stack_var_-20.0.reg2mem, !insn.addr !164
  br i1 %15, label %dec_label_pc_1e3c, label %dec_label_pc_1e74, !insn.addr !164

dec_label_pc_1e3c:                                ; preds = %dec_label_pc_1ddc
  %16 = getelementptr inbounds [1 x i8], [1 x i8]* %read_buffer_-72, i64 0, i64 0, !insn.addr !165
  %17 = call i32 @strcmp(i8* nonnull %16, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_3963, i64 0, i64 0)), !insn.addr !165
  %18 = icmp eq i32 %17, 0, !insn.addr !166
  %phitmp = icmp eq i1 %18, false
  %phitmp2 = select i1 %phitmp, i32 -3, i32 42
  store i32 %phitmp2, i32* %stack_var_-20.0.reg2mem, !insn.addr !167
  br label %dec_label_pc_1e74, !insn.addr !167

dec_label_pc_1e74:                                ; preds = %dec_label_pc_1e3c, %dec_label_pc_1ddc, %dec_label_pc_1d38, %dec_label_pc_1dc8
  %stack_var_-20.0.reload = load i32, i32* %stack_var_-20.0.reg2mem
  ret i32 %stack_var_-20.0.reload, !insn.addr !168

; uselistorder directives
  uselistorder %_IO_FILE* %0, { 0, 3, 1, 2, 4, 5 }
  uselistorder i32* %stack_var_-20.0.reg2mem, { 0, 2, 1, 4, 3 }
  uselistorder i32 (i8*, i8*)* @strcmp, { 1, 0, 2 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 2, 1, 0, 3 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1e74, { 0, 1, 3, 2 }
}

define i32 @call_fread_fwrite() local_unnamed_addr {
dec_label_pc_1e84:
  %0 = call i32 @param_fread_fwrite(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_3979, i64 0, i64 0)), !insn.addr !169
  ret i32 %0, !insn.addr !170
}

define i32 @param_malloc_free(i64 %size) local_unnamed_addr {
dec_label_pc_1ea0:
  %storemerge1.reg2mem = alloca i32, !insn.addr !171
  %storemerge2.reg2mem = alloca i64, !insn.addr !171
  %size.tr = trunc i64 %size to i32
  %0 = mul i32 %size.tr, 4, !insn.addr !172
  %1 = call i64* @malloc(i32 %0), !insn.addr !172
  %2 = icmp eq i64* %1, null, !insn.addr !173
  store i32 -1, i32* %storemerge1.reg2mem, !insn.addr !173
  br i1 %2, label %dec_label_pc_1f58, label %dec_label_pc_1ee0.preheader, !insn.addr !173

dec_label_pc_1ee0.preheader:                      ; preds = %dec_label_pc_1ea0
  %3 = icmp eq i64 %size, 0, !insn.addr !174
  %.pre = ptrtoint i64* %1 to i64
  store i64 0, i64* %storemerge2.reg2mem, !insn.addr !175
  br i1 %3, label %dec_label_pc_1f20, label %dec_label_pc_1ef4, !insn.addr !175

dec_label_pc_1ef4:                                ; preds = %dec_label_pc_1ee0.preheader, %dec_label_pc_1ef4
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %4 = trunc i64 %storemerge2.reload to i32
  %5 = mul i32 %4, 10, !insn.addr !176
  %6 = mul i64 %storemerge2.reload, 4, !insn.addr !176
  %7 = add i64 %6, %.pre, !insn.addr !176
  %8 = inttoptr i64 %7 to i32*, !insn.addr !176
  store i32 %5, i32* %8, align 4, !insn.addr !176
  %9 = add nuw i64 %storemerge2.reload, 1, !insn.addr !177
  %exitcond = icmp eq i64 %9, %size
  store i64 %9, i64* %storemerge2.reg2mem, !insn.addr !175
  br i1 %exitcond, label %dec_label_pc_1f20, label %dec_label_pc_1ef4, !insn.addr !175

dec_label_pc_1f20:                                ; preds = %dec_label_pc_1ef4, %dec_label_pc_1ee0.preheader
  %10 = bitcast i64* %1 to i32*, !insn.addr !178
  %11 = load i32, i32* %10, align 4, !insn.addr !179
  %12 = mul i64 %size, 4, !insn.addr !180
  %13 = add i64 %12, -4, !insn.addr !181
  %14 = add i64 %13, %.pre, !insn.addr !181
  %15 = inttoptr i64 %14 to i32*, !insn.addr !181
  %16 = load i32, i32* %15, align 4, !insn.addr !181
  %17 = add i32 %16, %11, !insn.addr !182
  call void @free(i64* nonnull %1), !insn.addr !183
  store i32 %17, i32* %storemerge1.reg2mem, !insn.addr !184
  br label %dec_label_pc_1f58, !insn.addr !184

dec_label_pc_1f58:                                ; preds = %dec_label_pc_1ea0, %dec_label_pc_1f20
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  ret i32 %storemerge1.reload, !insn.addr !185

; uselistorder directives
  uselistorder i64 %storemerge2.reload, { 0, 2, 1 }
  uselistorder i64 %.pre, { 1, 0 }
  uselistorder i64* %1, { 1, 3, 0, 2 }
  uselistorder i64* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge1.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1f58, { 1, 0 }
  uselistorder label %dec_label_pc_1ef4, { 1, 0 }
}

define i32 @call_malloc_free() local_unnamed_addr {
dec_label_pc_1f68:
  %0 = call i32 @param_malloc_free(i64 10), !insn.addr !186
  ret i32 %0, !insn.addr !187
}

define i32 @param_memset(i8* %buffer, i64 %size) local_unnamed_addr {
dec_label_pc_1f80:
  %sum_-44.0.lcssa.reg2mem = alloca i32, !insn.addr !188
  %sum_-44.01.reg2mem = alloca i32, !insn.addr !188
  %storemerge2.reg2mem = alloca i64, !insn.addr !188
  %0 = bitcast i8* %buffer to i64*, !insn.addr !189
  %1 = trunc i64 %size to i32, !insn.addr !189
  %2 = call i64* @memset(i64* %0, i32 0, i32 %1), !insn.addr !189
  %3 = icmp eq i64 %size, 0, !insn.addr !190
  store i32 0, i32* %sum_-44.0.lcssa.reg2mem, !insn.addr !191
  br i1 %3, label %dec_label_pc_1ff8, label %dec_label_pc_1fcc.lr.ph, !insn.addr !191

dec_label_pc_1fcc.lr.ph:                          ; preds = %dec_label_pc_1f80
  %4 = ptrtoint i8* %buffer to i64, !insn.addr !192
  store i64 0, i64* %storemerge2.reg2mem
  store i32 0, i32* %sum_-44.01.reg2mem
  br label %dec_label_pc_1fcc

dec_label_pc_1fcc:                                ; preds = %dec_label_pc_1fcc, %dec_label_pc_1fcc.lr.ph
  %sum_-44.01.reload = load i32, i32* %sum_-44.01.reg2mem
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %5 = add i64 %storemerge2.reload, %4, !insn.addr !193
  %6 = inttoptr i64 %5 to i8*, !insn.addr !193
  %7 = load i8, i8* %6, align 1, !insn.addr !193
  %8 = zext i8 %7 to i32, !insn.addr !193
  %9 = add i32 %sum_-44.01.reload, %8, !insn.addr !194
  %10 = add nuw i64 %storemerge2.reload, 1, !insn.addr !195
  %exitcond = icmp eq i64 %10, %size
  store i64 %10, i64* %storemerge2.reg2mem, !insn.addr !191
  store i32 %9, i32* %sum_-44.01.reg2mem, !insn.addr !191
  store i32 %9, i32* %sum_-44.0.lcssa.reg2mem, !insn.addr !191
  br i1 %exitcond, label %dec_label_pc_1ff8, label %dec_label_pc_1fcc, !insn.addr !191

dec_label_pc_1ff8:                                ; preds = %dec_label_pc_1fcc, %dec_label_pc_1f80
  %sum_-44.0.lcssa.reload = load i32, i32* %sum_-44.0.lcssa.reg2mem
  ret i32 %sum_-44.0.lcssa.reload, !insn.addr !196

; uselistorder directives
  uselistorder i64* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-44.01.reg2mem, { 1, 0, 2 }
}

define i32 @call_memset() local_unnamed_addr {
dec_label_pc_2008:
  %0 = alloca i32
  %indvars.iv.reg2mem = alloca i64, !insn.addr !197
  %1 = load i32, i32* %0
  %buffer_-56 = alloca [1 x i32], align 4
  %2 = ptrtoint [1 x i32]* %buffer_-56 to i64, !insn.addr !198
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_202c

dec_label_pc_202c:                                ; preds = %dec_label_pc_2008, %dec_label_pc_202c
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %3 = mul i64 %indvars.iv.reload, 4, !insn.addr !199
  %4 = add i64 %3, %2, !insn.addr !199
  %5 = inttoptr i64 %4 to i32*, !insn.addr !199
  store i32 255, i32* %5, align 4, !insn.addr !199
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 10
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !200
  br i1 %exitcond, label %dec_label_pc_2050, label %dec_label_pc_202c, !insn.addr !200

dec_label_pc_2050:                                ; preds = %dec_label_pc_202c
  %6 = bitcast [1 x i32]* %buffer_-56 to i8*, !insn.addr !201
  %7 = call i32 @param_memset(i8* nonnull %6, i64 40), !insn.addr !201
  %8 = getelementptr inbounds [1 x i32], [1 x i32]* %buffer_-56, i64 0, i64 0, !insn.addr !202
  %9 = load i32, i32* %8, align 4, !insn.addr !202
  %10 = add i32 %9, %1, !insn.addr !203
  ret i32 %10, !insn.addr !204

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_202c, { 1, 0 }
}

define i32 @param_strchr_strstr(i8* %str, i8 %ch, i8* %substr) local_unnamed_addr {
dec_label_pc_2074:
  %0 = zext i8 %ch to i32
  %1 = call i8* @strchr(i8* %str, i32 %0), !insn.addr !205
  %2 = icmp eq i8* %1, null, !insn.addr !206
  %3 = ptrtoint i8* %1 to i64
  %4 = ptrtoint i8* %str to i64
  %5 = sub i64 %3, %4
  %6 = trunc i64 %5 to i32
  %storemerge5 = select i1 %2, i32 -1, i32 %6
  %7 = call i8* @strstr(i8* %str, i8* %substr), !insn.addr !207
  %8 = icmp eq i8* %7, null, !insn.addr !208
  %9 = ptrtoint i8* %7 to i64
  %10 = sub i64 %9, %4
  %11 = trunc i64 %10 to i32
  %storemerge = select i1 %8, i32 -1, i32 %11
  %12 = add i32 %storemerge, %storemerge5, !insn.addr !209
  ret i32 %12, !insn.addr !210

; uselistorder directives
  uselistorder i8* %str, { 1, 0, 2 }
}

define i32 @call_strchr_strstr() local_unnamed_addr {
dec_label_pc_212c:
  %0 = call i32 @param_strchr_strstr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_3990, i64 0, i64 0), i8 66, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_39a4, i64 0, i64 0)), !insn.addr !211
  ret i32 %0, !insn.addr !212
}

define void @test_standard_library_functions() local_unnamed_addr {
dec_label_pc_216c:
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_39aa to i8*)), !insn.addr !213
  %1 = call i32 @call_strcpy(), !insn.addr !214
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_39cf to i8*)), !insn.addr !215
  %3 = call i32 @call_strcmp(), !insn.addr !216
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_39ea to i8*)), !insn.addr !217
  %5 = call i32 @call_strlen(), !insn.addr !218
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3a05 to i8*)), !insn.addr !219
  %7 = call i32 @call_memcpy(), !insn.addr !220
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3a21 to i8*)), !insn.addr !221
  %9 = call i32 @call_memcmp(), !insn.addr !222
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3a3d to i8*)), !insn.addr !223
  %11 = call i32 @call_printf(), !insn.addr !224
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3a59 to i8*)), !insn.addr !225
  %13 = call i32 @call_scanf(), !insn.addr !226
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3a75 to i8*)), !insn.addr !227
  %15 = call i32 @call_fopen_fclose(), !insn.addr !228
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3a92 to i8*)), !insn.addr !229
  %17 = call i32 @call_fread_fwrite(), !insn.addr !230
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3aae to i8*)), !insn.addr !231
  %19 = call i32 @call_malloc_free(), !insn.addr !232
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3aca to i8*)), !insn.addr !233
  %21 = call i32 @call_memset(), !insn.addr !234
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3ae6 to i8*)), !insn.addr !235
  %23 = call i32 @call_strchr_strstr(), !insn.addr !236
  %24 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3b01 to i8*)), !insn.addr !237
  ret void, !insn.addr !238
}

define i32 @param_linux_syscall(i8* %pathname) local_unnamed_addr {
dec_label_pc_2278:
  %storemerge.reg2mem = alloca i32, !insn.addr !239
  %0 = call i32 (i32, ...) @syscall(i32 56), !insn.addr !240
  %1 = icmp slt i32 %0, 0, !insn.addr !241
  br i1 %1, label %dec_label_pc_22b4, label %dec_label_pc_22cc, !insn.addr !242

dec_label_pc_22b4:                                ; preds = %dec_label_pc_2278
  %2 = call i32* @__errno_location(), !insn.addr !243
  %3 = load i32, i32* %2, align 4, !insn.addr !244
  %4 = sub i32 0, %3, !insn.addr !245
  store i32 %4, i32* %storemerge.reg2mem, !insn.addr !246
  br label %dec_label_pc_22e4, !insn.addr !246

dec_label_pc_22cc:                                ; preds = %dec_label_pc_2278
  %5 = call i32 (i32, ...) @syscall(i32 57), !insn.addr !247
  store i32 %0, i32* %storemerge.reg2mem, !insn.addr !248
  br label %dec_label_pc_22e4, !insn.addr !248

dec_label_pc_22e4:                                ; preds = %dec_label_pc_22cc, %dec_label_pc_22b4
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !249

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 (i32, ...)* @syscall, { 1, 0, 2 }
}

define i32 @call_linux_syscall() local_unnamed_addr {
dec_label_pc_22f4:
  %0 = call i32 @param_linux_syscall(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_3957, i64 0, i64 0)), !insn.addr !250
  %1 = icmp slt i32 %0, 0, !insn.addr !251
  %. = select i1 %1, i32 -1, i32 42
  ret i32 %., !insn.addr !252
}

define i32 @param_win32_api(i8* %filename) local_unnamed_addr {
dec_label_pc_232c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_-160 = alloca i64, align 8
  %2 = bitcast i64* %stack_var_-160 to %stat*, !insn.addr !253
  %3 = call i32 @stat(i8* %filename, %stat* nonnull %2), !insn.addr !253
  %4 = icmp slt i32 %3, 0, !insn.addr !254
  %5 = icmp slt i64 %1, 1
  %6 = select i1 %5, i32 -2, i32 42
  %storemerge = select i1 %4, i32 -1, i32 %6
  ret i32 %storemerge, !insn.addr !255
}

define i32 @call_win32_api() local_unnamed_addr {
dec_label_pc_238c:
  %0 = call i32 @param_win32_api(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_3957, i64 0, i64 0)), !insn.addr !256
  ret i32 %0, !insn.addr !257
}

define i32 @param_fork_exec(i8* %prog, i8* %arg) local_unnamed_addr {
dec_label_pc_23a8:
  %stack_var_-20.0.reg2mem = alloca i32, !insn.addr !258
  %stack_var_-48 = alloca i32, align 4
  %0 = call i32 @fork(), !insn.addr !259
  %1 = icmp slt i32 %0, 0, !insn.addr !260
  store i32 -1, i32* %stack_var_-20.0.reg2mem, !insn.addr !261
  br i1 %1, label %dec_label_pc_2468, label %dec_label_pc_23e0, !insn.addr !261

dec_label_pc_23e0:                                ; preds = %dec_label_pc_23a8
  %2 = icmp eq i32 %0, 0, !insn.addr !262
  br i1 %2, label %dec_label_pc_23ec, label %dec_label_pc_2408, !insn.addr !262

dec_label_pc_23ec:                                ; preds = %dec_label_pc_23e0
  %3 = call i32 (i8*, i8*, ...) @execl(i8* %prog, i8* %prog), !insn.addr !263
  call void @_exit(i32 127), !insn.addr !264
  unreachable, !insn.addr !264

dec_label_pc_2408:                                ; preds = %dec_label_pc_23e0
  %4 = call i32 @waitpid(i32 %0, i32* nonnull %stack_var_-48, i32 0), !insn.addr !265
  %5 = icmp slt i32 %4, 0, !insn.addr !266
  store i32 -2, i32* %stack_var_-20.0.reg2mem, !insn.addr !267
  br i1 %5, label %dec_label_pc_2468, label %dec_label_pc_2438, !insn.addr !267

dec_label_pc_2438:                                ; preds = %dec_label_pc_2408
  %6 = load i32, i32* %stack_var_-48, align 4, !insn.addr !268
  %7 = urem i32 %6, 128, !insn.addr !269
  %8 = icmp eq i32 %7, 0, !insn.addr !270
  store i32 -3, i32* %stack_var_-20.0.reg2mem, !insn.addr !270
  br i1 %8, label %dec_label_pc_2448, label %dec_label_pc_2468, !insn.addr !270

dec_label_pc_2448:                                ; preds = %dec_label_pc_2438
  %9 = udiv i32 %6, 256, !insn.addr !271
  %10 = urem i32 %9, 256
  store i32 %10, i32* %stack_var_-20.0.reg2mem, !insn.addr !272
  br label %dec_label_pc_2468, !insn.addr !272

dec_label_pc_2468:                                ; preds = %dec_label_pc_2438, %dec_label_pc_2408, %dec_label_pc_23a8, %dec_label_pc_2448
  %stack_var_-20.0.reload = load i32, i32* %stack_var_-20.0.reg2mem
  ret i32 %stack_var_-20.0.reload, !insn.addr !273

; uselistorder directives
  uselistorder i32* %stack_var_-20.0.reg2mem, { 0, 4, 1, 2, 3 }
  uselistorder i32 256, { 1, 0 }
  uselistorder i8* %prog, { 1, 0 }
  uselistorder label %dec_label_pc_2468, { 3, 0, 1, 2 }
}

define i32 @call_fork_exec() local_unnamed_addr {
dec_label_pc_2478:
  %0 = call i32 @param_fork_exec(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_3b1d, i64 0, i64 0), i8* null), !insn.addr !274
  %1 = icmp eq i32 %0, 0, !insn.addr !275
  %. = select i1 %1, i32 42, i32 -1
  ret i32 %., !insn.addr !276
}

define i32 @param_pipe_communication() local_unnamed_addr {
dec_label_pc_24b4:
  %0 = alloca i32
  %stack_var_-20.0.reg2mem = alloca i32, !insn.addr !277
  %stack_var_-60 = alloca i64, align 8
  %1 = load i32, i32* %0
  %stack_var_-28 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-28 to i64, !insn.addr !278
  %3 = trunc i64 %2 to i32, !insn.addr !279
  %4 = insertvalue [2 x i32] undef, i32 %3, 0, !insn.addr !279
  %5 = call i32 @pipe([2 x i32] %4), !insn.addr !279
  %6 = icmp slt i32 %5, 0, !insn.addr !280
  store i32 -1, i32* %stack_var_-20.0.reg2mem, !insn.addr !281
  br i1 %6, label %dec_label_pc_25b8, label %dec_label_pc_24e0, !insn.addr !281

dec_label_pc_24e0:                                ; preds = %dec_label_pc_24b4
  %7 = call i32 @fork(), !insn.addr !282
  %8 = icmp slt i32 %7, 0, !insn.addr !283
  store i32 -2, i32* %stack_var_-20.0.reg2mem, !insn.addr !284
  br i1 %8, label %dec_label_pc_25b8, label %dec_label_pc_2504, !insn.addr !284

dec_label_pc_2504:                                ; preds = %dec_label_pc_24e0
  %9 = icmp eq i32 %7, 0, !insn.addr !285
  br i1 %9, label %dec_label_pc_2510, label %dec_label_pc_255c, !insn.addr !285

dec_label_pc_2510:                                ; preds = %dec_label_pc_2504
  %10 = load i32, i32* %stack_var_-28, align 4, !insn.addr !286
  %11 = call i32 @close(i32 %10), !insn.addr !287
  %12 = call i32 @strlen(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_3b27, i64 0, i64 0)), !insn.addr !288
  %13 = call i32 @write(i32 %1, i64* bitcast ([10 x i8]* @global_var_3b27 to i64*), i32 %12), !insn.addr !289
  %14 = call i32 @close(i32 %1), !insn.addr !290
  call void @_exit(i32 0), !insn.addr !291
  unreachable, !insn.addr !291

dec_label_pc_255c:                                ; preds = %dec_label_pc_2504
  %15 = call i32 @close(i32 %1), !insn.addr !292
  %16 = load i32, i32* %stack_var_-28, align 4, !insn.addr !293
  %17 = ptrtoint i64* %stack_var_-60 to i64, !insn.addr !294
  %18 = call i32 @read(i32 %16, i64* nonnull %stack_var_-60, i32 31), !insn.addr !295
  %19 = sext i32 %18 to i64, !insn.addr !295
  %20 = add i64 %19, %17, !insn.addr !296
  %21 = inttoptr i64 %20 to i8*, !insn.addr !297
  store i8 0, i8* %21, align 1, !insn.addr !297
  %22 = load i32, i32* %stack_var_-28, align 4, !insn.addr !298
  %23 = call i32 @close(i32 %22), !insn.addr !299
  %24 = call i32 @wait(i64 0), !insn.addr !300
  %25 = icmp slt i32 %18, 1
  %26 = select i1 %25, i32 -3, i32 42, !insn.addr !301
  store i32 %26, i32* %stack_var_-20.0.reg2mem, !insn.addr !302
  br label %dec_label_pc_25b8, !insn.addr !302

dec_label_pc_25b8:                                ; preds = %dec_label_pc_24e0, %dec_label_pc_24b4, %dec_label_pc_255c
  %stack_var_-20.0.reload = load i32, i32* %stack_var_-20.0.reg2mem
  ret i32 %stack_var_-20.0.reload, !insn.addr !303

; uselistorder directives
  uselistorder i32* %stack_var_-28, { 3, 2, 1, 0 }
  uselistorder i32* %stack_var_-20.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder void (i32)* @_exit, { 1, 0, 2 }
  uselistorder [10 x i8]* @global_var_3b27, { 1, 0 }
  uselistorder i32 ()* @fork, { 1, 0, 2 }
  uselistorder label %dec_label_pc_25b8, { 2, 0, 1 }
}

define i32 @call_pipe_communication() local_unnamed_addr {
dec_label_pc_25c8:
  %0 = call i32 @param_pipe_communication(), !insn.addr !304
  ret i32 %0, !insn.addr !305
}

define i32 @param_socket_create() local_unnamed_addr {
dec_label_pc_25dc:
  %stack_var_-20.0.reg2mem = alloca i32, !insn.addr !306
  %addr_-48 = alloca i64, align 8
  %stack_var_-28 = alloca i64, align 8
  %0 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !307
  %1 = icmp slt i32 %0, 0, !insn.addr !308
  store i32 -1, i32* %stack_var_-20.0.reg2mem, !insn.addr !309
  br i1 %1, label %dec_label_pc_26ec, label %dec_label_pc_2618, !insn.addr !309

dec_label_pc_2618:                                ; preds = %dec_label_pc_25dc
  store i64 1, i64* %stack_var_-28, align 8, !insn.addr !310
  %2 = call i32 @setsockopt(i32 %0, i32 1, i32 2, i64* nonnull %stack_var_-28, i32 4), !insn.addr !311
  %3 = icmp slt i32 %2, 0, !insn.addr !312
  br i1 %3, label %dec_label_pc_2640, label %dec_label_pc_2654, !insn.addr !313

dec_label_pc_2640:                                ; preds = %dec_label_pc_2618
  %4 = call i32 @close(i32 %0), !insn.addr !314
  store i32 -2, i32* %stack_var_-20.0.reg2mem, !insn.addr !315
  br label %dec_label_pc_26ec, !insn.addr !315

dec_label_pc_2654:                                ; preds = %dec_label_pc_2618
  store i64 2, i64* %addr_-48, align 8, !insn.addr !316
  %5 = call i16 @htons(i16 0), !insn.addr !317
  %6 = bitcast i64* %addr_-48 to %sockaddr*, !insn.addr !318
  %7 = call i32 @bind(i32 %0, %sockaddr* nonnull %6, i32 16), !insn.addr !318
  %8 = icmp slt i32 %7, 0, !insn.addr !319
  br i1 %8, label %dec_label_pc_2698, label %dec_label_pc_26ac, !insn.addr !320

dec_label_pc_2698:                                ; preds = %dec_label_pc_2654
  %9 = call i32 @close(i32 %0), !insn.addr !321
  store i32 -3, i32* %stack_var_-20.0.reg2mem, !insn.addr !322
  br label %dec_label_pc_26ec, !insn.addr !322

dec_label_pc_26ac:                                ; preds = %dec_label_pc_2654
  %10 = call i32 @listen(i32 %0, i32 5), !insn.addr !323
  %11 = icmp slt i32 %10, 0, !insn.addr !324
  %12 = call i32 @close(i32 %0)
  %. = select i1 %11, i32 -4, i32 42
  store i32 %., i32* %stack_var_-20.0.reg2mem, !insn.addr !325
  br label %dec_label_pc_26ec, !insn.addr !325

dec_label_pc_26ec:                                ; preds = %dec_label_pc_26ac, %dec_label_pc_25dc, %dec_label_pc_2698, %dec_label_pc_2640
  %stack_var_-20.0.reload = load i32, i32* %stack_var_-20.0.reg2mem
  ret i32 %stack_var_-20.0.reload, !insn.addr !326

; uselistorder directives
  uselistorder i32 %0, { 0, 2, 1, 3, 4, 5, 6 }
  uselistorder i32* %stack_var_-20.0.reg2mem, { 0, 1, 3, 4, 2 }
  uselistorder label %dec_label_pc_26ec, { 0, 2, 3, 1 }
}

define i32 @call_socket_create() local_unnamed_addr {
dec_label_pc_26fc:
  %0 = call i32 @param_socket_create(), !insn.addr !327
  ret i32 %0, !insn.addr !328
}

define i32 @param_shmget_shmat() local_unnamed_addr {
dec_label_pc_2710:
  %fd_-20.0.reg2mem = alloca i32, !insn.addr !329
  %0 = call i32 (i8*, i32, ...) @open(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_3b31, i64 0, i64 0), i32 66), !insn.addr !330
  %1 = icmp slt i32 %0, 0, !insn.addr !331
  store i32 -1, i32* %fd_-20.0.reg2mem, !insn.addr !332
  br i1 %1, label %dec_label_pc_2834, label %dec_label_pc_2758, !insn.addr !332

dec_label_pc_2758:                                ; preds = %dec_label_pc_2710
  %2 = call i32 @close(i32 %0), !insn.addr !333
  %3 = call i32 @ftok(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_3b31, i64 0, i64 0), i32 42), !insn.addr !334
  %4 = icmp slt i32 %3, 0, !insn.addr !335
  store i32 -1, i32* %fd_-20.0.reg2mem, !insn.addr !336
  br i1 %4, label %dec_label_pc_2834, label %dec_label_pc_2790, !insn.addr !336

dec_label_pc_2790:                                ; preds = %dec_label_pc_2758
  %5 = call i32 @shmget(i32 %3, i32 ptrtoint (i32* @global_var_1000 to i32), i32 ptrtoint (i32* @global_var_3b6 to i32)), !insn.addr !337
  %6 = icmp slt i32 %5, 0, !insn.addr !338
  store i32 -2, i32* %fd_-20.0.reg2mem, !insn.addr !339
  br i1 %6, label %dec_label_pc_2834, label %dec_label_pc_27c0, !insn.addr !339

dec_label_pc_27c0:                                ; preds = %dec_label_pc_2790
  %7 = call i64* @shmat(i32 %5, i64* null, i32 0), !insn.addr !340
  %8 = icmp eq i64* %7, inttoptr (i64 -1 to i64*), !insn.addr !341
  store i32 -3, i32* %fd_-20.0.reg2mem, !insn.addr !342
  br i1 %8, label %dec_label_pc_2834, label %dec_label_pc_27f0, !insn.addr !342

dec_label_pc_27f0:                                ; preds = %dec_label_pc_27c0
  %9 = bitcast i64* %7 to i8*, !insn.addr !343
  %10 = call i8* @strcpy(i8* %9, i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_3b43, i64 0, i64 0)), !insn.addr !344
  %11 = call i32 @strlen(i8* %9), !insn.addr !345
  %12 = call i32 @shmdt(i64* %7), !insn.addr !346
  %13 = call i32 @shmctl(i32 %5, i32 0, %shmid_ds* null), !insn.addr !347
  store i32 %11, i32* %fd_-20.0.reg2mem, !insn.addr !348
  br label %dec_label_pc_2834, !insn.addr !348

dec_label_pc_2834:                                ; preds = %dec_label_pc_27c0, %dec_label_pc_2790, %dec_label_pc_2758, %dec_label_pc_2710, %dec_label_pc_27f0
  %fd_-20.0.reload = load i32, i32* %fd_-20.0.reg2mem
  ret i32 %fd_-20.0.reload, !insn.addr !349

; uselistorder directives
  uselistorder i8* %9, { 1, 0 }
  uselistorder i64* %7, { 0, 2, 1 }
  uselistorder i32* %fd_-20.0.reg2mem, { 0, 5, 1, 2, 3, 4 }
  uselistorder i32 (i8*)* @strlen, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder i8* (i8*, i8*)* @strcpy, { 1, 0, 2 }
  uselistorder i32 (i32)* @close, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder label %dec_label_pc_2834, { 4, 0, 1, 2, 3 }
}

define i32 @call_shmget_shmat() local_unnamed_addr {
dec_label_pc_2844:
  %0 = call i32 @param_shmget_shmat(), !insn.addr !350
  %1 = icmp sgt i32 %0, 0, !insn.addr !351
  %. = select i1 %1, i32 42, i32 -1
  ret i32 %., !insn.addr !352
}

define i32 @param_signal_handling() local_unnamed_addr {
dec_label_pc_2874:
  %stack_var_-20.0.reg2mem = alloca i32, !insn.addr !353
  %.reg2mem = alloca i32, !insn.addr !353
  %attempts_-24.22.reg2mem = alloca i32, !insn.addr !353
  %attempts_-24.03.reg2mem = alloca i32, !insn.addr !353
  %0 = call void (i32)* @signal(i32 10, void (i32)* inttoptr (i64 10820 to void (i32)*)), !insn.addr !354
  %1 = icmp eq void (i32)* %0, inttoptr (i64 -1 to void (i32)*), !insn.addr !355
  store i32 -1, i32* %stack_var_-20.0.reg2mem, !insn.addr !356
  br i1 %1, label %dec_label_pc_2a34, label %dec_label_pc_28a8, !insn.addr !356

dec_label_pc_28a8:                                ; preds = %dec_label_pc_2874
  %2 = call void (i32)* @signal(i32 14, void (i32)* inttoptr (i64 10820 to void (i32)*)), !insn.addr !357
  %3 = icmp eq void (i32)* %2, inttoptr (i64 -1 to void (i32)*), !insn.addr !358
  store i32 -2, i32* %stack_var_-20.0.reg2mem, !insn.addr !359
  br i1 %3, label %dec_label_pc_2a34, label %dec_label_pc_28d0, !insn.addr !359

dec_label_pc_28d0:                                ; preds = %dec_label_pc_28a8
  store i32 0, i32* @global_var_15200, align 4, !insn.addr !360
  %4 = call i32 @raise(i32 10), !insn.addr !361
  %5 = load i32, i32* @global_var_15200, align 4
  %6 = icmp eq i32 %5, 0, !insn.addr !362
  store i32 ptrtoint (i32* @global_var_3e8 to i32), i32* %attempts_-24.03.reg2mem, !insn.addr !362
  br i1 %6, label %dec_label_pc_2920, label %dec_label_pc_2954, !insn.addr !362

dec_label_pc_2920:                                ; preds = %dec_label_pc_28d0, %dec_label_pc_292c
  %attempts_-24.03.reload = load i32, i32* %attempts_-24.03.reg2mem
  %7 = icmp slt i32 %attempts_-24.03.reload, 1
  %8 = icmp ne i1 %7, true, !insn.addr !363
  %9 = icmp eq i1 %8, false, !insn.addr !364
  store i32 -3, i32* %stack_var_-20.0.reg2mem, !insn.addr !364
  br i1 %9, label %dec_label_pc_2a34, label %dec_label_pc_292c, !insn.addr !364

dec_label_pc_292c:                                ; preds = %dec_label_pc_2920
  %10 = add i32 %attempts_-24.03.reload, -1, !insn.addr !365
  %11 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !366
  %12 = load i32, i32* @global_var_15200, align 4
  %13 = icmp eq i32 %12, 0, !insn.addr !362
  store i32 %10, i32* %attempts_-24.03.reg2mem, !insn.addr !362
  br i1 %13, label %dec_label_pc_2920, label %dec_label_pc_2954, !insn.addr !362

dec_label_pc_2954:                                ; preds = %dec_label_pc_292c, %dec_label_pc_28d0
  %14 = load i32, i32* @global_var_15204, align 4, !insn.addr !367
  %15 = icmp eq i32 %14, 10, !insn.addr !368
  store i32 -4, i32* %stack_var_-20.0.reg2mem, !insn.addr !369
  br i1 %15, label %dec_label_pc_2974, label %dec_label_pc_2a34, !insn.addr !369

dec_label_pc_2974:                                ; preds = %dec_label_pc_2954
  store i32 0, i32* @global_var_15200, align 4, !insn.addr !370
  %16 = call i32 @alarm(i32 1), !insn.addr !371
  %17 = load i32, i32* @global_var_15200, align 4, !insn.addr !372
  %18 = icmp eq i32 %17, 0, !insn.addr !373
  store i32 ptrtoint (i32* @global_var_7d0 to i32), i32* %attempts_-24.22.reg2mem, !insn.addr !373
  store i32 %17, i32* %.reg2mem, !insn.addr !373
  br i1 %18, label %dec_label_pc_29c4, label %dec_label_pc_29dc, !insn.addr !373

dec_label_pc_29c4:                                ; preds = %dec_label_pc_2974, %dec_label_pc_29d0
  %attempts_-24.22.reload = load i32, i32* %attempts_-24.22.reg2mem
  %19 = icmp slt i32 %attempts_-24.22.reload, 1
  %20 = icmp ne i1 %19, true, !insn.addr !374
  %21 = icmp eq i1 %20, false, !insn.addr !375
  store i32 -5, i32* %stack_var_-20.0.reg2mem, !insn.addr !375
  br i1 %21, label %dec_label_pc_2a34, label %dec_label_pc_29d0, !insn.addr !375

dec_label_pc_29d0:                                ; preds = %dec_label_pc_29c4
  %22 = add i32 %attempts_-24.22.reload, -1, !insn.addr !376
  %23 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !377
  %24 = load i32, i32* @global_var_15200, align 4, !insn.addr !372
  %25 = icmp eq i32 %24, 0, !insn.addr !373
  store i32 %22, i32* %attempts_-24.22.reg2mem, !insn.addr !373
  store i32 %24, i32* %.reg2mem, !insn.addr !373
  br i1 %25, label %dec_label_pc_29c4, label %dec_label_pc_29dc, !insn.addr !373

dec_label_pc_29dc:                                ; preds = %dec_label_pc_29d0, %dec_label_pc_2974
  %.reload = load i32, i32* %.reg2mem, !insn.addr !378
  %26 = icmp ne i32 %.reload, 0, !insn.addr !379
  %27 = load i32, i32* @global_var_15204, align 4, !insn.addr !380
  %28 = icmp eq i32 %27, 14, !insn.addr !381
  %or.cond = icmp eq i1 %26, %28
  store i32 -5, i32* %stack_var_-20.0.reg2mem, !insn.addr !379
  br i1 %or.cond, label %dec_label_pc_2a0c, label %dec_label_pc_2a34, !insn.addr !379

dec_label_pc_2a0c:                                ; preds = %dec_label_pc_29dc
  %29 = call void (i32)* @signal(i32 10, void (i32)* null), !insn.addr !382
  %30 = call void (i32)* @signal(i32 14, void (i32)* null), !insn.addr !383
  store i32 42, i32* %stack_var_-20.0.reg2mem, !insn.addr !384
  br label %dec_label_pc_2a34, !insn.addr !384

dec_label_pc_2a34:                                ; preds = %dec_label_pc_2920, %dec_label_pc_29c4, %dec_label_pc_29dc, %dec_label_pc_2954, %dec_label_pc_28a8, %dec_label_pc_2874, %dec_label_pc_2a0c
  %stack_var_-20.0.reload = load i32, i32* %stack_var_-20.0.reg2mem
  ret i32 %stack_var_-20.0.reload, !insn.addr !385

; uselistorder directives
  uselistorder i32* %attempts_-24.03.reg2mem, { 2, 0, 1 }
  uselistorder i32* %attempts_-24.22.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-20.0.reg2mem, { 0, 7, 3, 2, 4, 1, 5, 6 }
  uselistorder i32 -5, { 1, 0 }
  uselistorder i32 14, { 1, 0, 2 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i32 10, { 1, 0, 2, 3, 4 }
  uselistorder label %dec_label_pc_2a34, { 6, 2, 1, 3, 0, 4, 5 }
  uselistorder label %dec_label_pc_29c4, { 1, 0 }
  uselistorder label %dec_label_pc_2920, { 1, 0 }
}

define void @signal_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_2a44:
  store i32 1, i32* @global_var_15200, align 4, !insn.addr !386
  store i32 %sig, i32* @global_var_15204, align 4, !insn.addr !387
  ret void, !insn.addr !388

; uselistorder directives
  uselistorder i32* @global_var_15204, { 2, 0, 1 }
  uselistorder i32* @global_var_15200, { 6, 5, 1, 4, 3, 0, 2 }
}

define i32 @call_signal_handling() local_unnamed_addr {
dec_label_pc_2a6c:
  %0 = call i32 @param_signal_handling(), !insn.addr !389
  ret i32 %0, !insn.addr !390
}

define void @test_system_calls() local_unnamed_addr {
dec_label_pc_2a80:
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3b50 to i8*)), !insn.addr !391
  %1 = call i32 @call_linux_syscall(), !insn.addr !392
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3b6c to i8*)), !insn.addr !393
  %3 = call i32 @call_win32_api(), !insn.addr !394
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3b88 to i8*)), !insn.addr !395
  %5 = call i32 @call_fork_exec(), !insn.addr !396
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3ba4 to i8*)), !insn.addr !397
  %7 = call i32 @call_pipe_communication(), !insn.addr !398
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3bc0 to i8*)), !insn.addr !399
  %9 = call i32 @call_socket_create(), !insn.addr !400
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3bdc to i8*)), !insn.addr !401
  %11 = call i32 @call_shmget_shmat(), !insn.addr !402
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3bf8 to i8*)), !insn.addr !403
  %13 = call i32 @call_signal_handling(), !insn.addr !404
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3c14 to i8*)), !insn.addr !405
  ret void, !insn.addr !406
}

define i8* @thread_compute(i8* %arg) local_unnamed_addr {
dec_label_pc_2b28:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = mul i32 %2, %2, !insn.addr !407
  %4 = call i64* @malloc(i32 4), !insn.addr !408
  %5 = bitcast i64* %4 to i8*
  %6 = bitcast i64* %4 to i32*
  store i32 %3, i32* %6, align 4, !insn.addr !409
  ret i8* %5, !insn.addr !410

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i32 @param_pthread_create(i32 %x) local_unnamed_addr {
dec_label_pc_2b84:
  %storemerge.reg2mem = alloca i32, !insn.addr !411
  %thread_ret_-48 = alloca i8*, align 8
  %stack_var_-32 = alloca i32, align 4
  %stack_var_-36 = alloca i32, align 4
  store i32 %x, i32* %stack_var_-36, align 4, !insn.addr !412
  %0 = bitcast i32* %stack_var_-36 to i64*, !insn.addr !413
  %1 = call i32 @pthread_create(i32* nonnull %stack_var_-32, i64* null, i64* (i64*)* inttoptr (i64 11048 to i64* (i64*)*), i64* nonnull %0), !insn.addr !413
  %2 = icmp eq i32 %1, 0, !insn.addr !414
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !414
  br i1 %2, label %dec_label_pc_2bd0, label %dec_label_pc_2bfc, !insn.addr !414

dec_label_pc_2bd0:                                ; preds = %dec_label_pc_2b84
  %3 = load i32, i32* %stack_var_-32, align 4, !insn.addr !415
  %4 = bitcast i8** %thread_ret_-48 to i64**, !insn.addr !416
  %5 = call i32 @pthread_join(i32 %3, i64** nonnull %4), !insn.addr !416
  %6 = load i8*, i8** %thread_ret_-48, align 8
  %7 = bitcast i8* %6 to i32*, !insn.addr !417
  %8 = load i32, i32* %7, align 4, !insn.addr !417
  %9 = bitcast i8* %6 to i64*, !insn.addr !418
  call void @free(i64* %9), !insn.addr !418
  store i32 %8, i32* %storemerge.reg2mem, !insn.addr !419
  br label %dec_label_pc_2bfc, !insn.addr !419

dec_label_pc_2bfc:                                ; preds = %dec_label_pc_2b84, %dec_label_pc_2bd0
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !420

; uselistorder directives
  uselistorder i32* %stack_var_-36, { 1, 0 }
  uselistorder i8** %thread_ret_-48, { 1, 0 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2bfc, { 1, 0 }
}

define i32 @call_pthread_create() local_unnamed_addr {
dec_label_pc_2c0c:
  %0 = call i32 @param_pthread_create(i32 7), !insn.addr !421
  ret i32 %0, !insn.addr !422
}

define i8* @thread_sum(i8* %arg) local_unnamed_addr {
dec_label_pc_2c24:
  %storemerge1.reg2mem = alloca i32, !insn.addr !423
  %.reg2mem = alloca i32, !insn.addr !423
  %x0 = alloca i64, align 8
  %0 = ptrtoint i8* %arg to i64, !insn.addr !424
  %1 = add i64 %0, 8, !insn.addr !425
  %2 = inttoptr i64 %1 to i32*, !insn.addr !425
  store i32 0, i32* %2, align 4, !insn.addr !425
  %3 = bitcast i64* %x0 to i32*
  %4 = load i32, i32* %3, align 8, !insn.addr !426
  %5 = add i64 %0, 4, !insn.addr !427
  %6 = inttoptr i64 %5 to i32*, !insn.addr !427
  %7 = load i32, i32* %6, align 4, !insn.addr !427
  %8 = icmp ugt i32 %4, %7, !insn.addr !428
  store i32 0, i32* %.reg2mem, !insn.addr !428
  store i32 %4, i32* %storemerge1.reg2mem, !insn.addr !428
  br i1 %8, label %dec_label_pc_2c8c, label %dec_label_pc_2c64, !insn.addr !428

dec_label_pc_2c64:                                ; preds = %dec_label_pc_2c24, %dec_label_pc_2c64
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %.reload = load i32, i32* %.reg2mem, !insn.addr !429
  %9 = add i32 %storemerge1.reload, %.reload, !insn.addr !430
  store i32 %9, i32* %2, align 4, !insn.addr !431
  %10 = add i32 %storemerge1.reload, 1, !insn.addr !432
  %11 = load i32, i32* %6, align 4, !insn.addr !427
  %12 = icmp ugt i32 %10, %11, !insn.addr !428
  store i32 %9, i32* %.reg2mem, !insn.addr !428
  store i32 %10, i32* %storemerge1.reg2mem, !insn.addr !428
  br i1 %12, label %dec_label_pc_2c8c, label %dec_label_pc_2c64, !insn.addr !428

dec_label_pc_2c8c:                                ; preds = %dec_label_pc_2c64, %dec_label_pc_2c24
  ret i8* null, !insn.addr !433

; uselistorder directives
  uselistorder i32* %6, { 1, 0 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge1.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_2c64, { 1, 0 }
}

define i32 @param_pthread_join() local_unnamed_addr {
dec_label_pc_2c98:
  %stack_var_-20.0.reg2mem = alloca i32, !insn.addr !434
  %total_-92.04.reg2mem = alloca i32, !insn.addr !434
  %indvars.iv.reg2mem = alloca i64, !insn.addr !434
  %indvars.iv7.reg2mem = alloca i64, !insn.addr !434
  %stack_var_-48 = alloca i64, align 8
  %data_-84 = alloca i64, align 8
  %0 = call i64* @memset(i64* nonnull %data_-84, i32 0, i32 36), !insn.addr !435
  store i64 1, i64* %data_-84, align 8, !insn.addr !436
  %1 = ptrtoint i64* %stack_var_-48 to i64
  %2 = ptrtoint i64* %data_-84 to i64
  store i64 0, i64* %indvars.iv7.reg2mem
  br label %dec_label_pc_2cfc

dec_label_pc_2cec:                                ; preds = %dec_label_pc_2cfc
  %indvars.iv.next8 = add nuw nsw i64 %indvars.iv7.reload, 1
  %3 = icmp ugt i64 %indvars.iv7.reload, 1, !insn.addr !437
  store i64 %indvars.iv.next8, i64* %indvars.iv7.reg2mem, !insn.addr !437
  br i1 %3, label %dec_label_pc_2d60.preheader, label %dec_label_pc_2cfc, !insn.addr !437

dec_label_pc_2d60.preheader:                      ; preds = %dec_label_pc_2cec
  %4 = add i64 %2, 8
  store i64 0, i64* %indvars.iv.reg2mem
  store i32 0, i32* %total_-92.04.reg2mem
  br label %dec_label_pc_2d70

dec_label_pc_2cfc:                                ; preds = %dec_label_pc_2c98, %dec_label_pc_2cec
  %indvars.iv7.reload = load i64, i64* %indvars.iv7.reg2mem
  %5 = mul i64 %indvars.iv7.reload, 8, !insn.addr !438
  %6 = add i64 %5, %1, !insn.addr !438
  %7 = mul nuw nsw i64 %indvars.iv7.reload, 12, !insn.addr !439
  %8 = add i64 %7, %2, !insn.addr !440
  %9 = inttoptr i64 %6 to i32*, !insn.addr !441
  %10 = inttoptr i64 %8 to i64*, !insn.addr !441
  %11 = call i32 @pthread_create(i32* %9, i64* null, i64* (i64*)* inttoptr (i64 11300 to i64* (i64*)*), i64* %10), !insn.addr !441
  %12 = icmp eq i32 %11, 0, !insn.addr !442
  store i32 -1, i32* %stack_var_-20.0.reg2mem, !insn.addr !442
  br i1 %12, label %dec_label_pc_2cec, label %dec_label_pc_2ddc, !insn.addr !442

dec_label_pc_2d70:                                ; preds = %dec_label_pc_2d60.preheader, %dec_label_pc_2d98
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %13 = mul i64 %indvars.iv.reload, 8, !insn.addr !443
  %14 = add i64 %13, %1, !insn.addr !443
  %15 = inttoptr i64 %14 to i64*, !insn.addr !443
  %16 = load i64, i64* %15, align 8, !insn.addr !443
  %17 = trunc i64 %16 to i32, !insn.addr !444
  %18 = call i32 @pthread_join(i32 %17, i64** null), !insn.addr !444
  %19 = icmp eq i32 %18, 0, !insn.addr !445
  store i32 -2, i32* %stack_var_-20.0.reg2mem, !insn.addr !445
  br i1 %19, label %dec_label_pc_2d98, label %dec_label_pc_2ddc, !insn.addr !445

dec_label_pc_2d98:                                ; preds = %dec_label_pc_2d70
  %total_-92.04.reload = load i32, i32* %total_-92.04.reg2mem
  %20 = mul nuw nsw i64 %indvars.iv.reload, 12, !insn.addr !446
  %21 = add i64 %4, %20, !insn.addr !447
  %22 = inttoptr i64 %21 to i32*, !insn.addr !447
  %23 = load i32, i32* %22, align 4, !insn.addr !447
  %24 = add i32 %23, %total_-92.04.reload, !insn.addr !448
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %25 = icmp ugt i64 %indvars.iv.reload, 1, !insn.addr !449
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !449
  store i32 %24, i32* %total_-92.04.reg2mem, !insn.addr !449
  store i32 %24, i32* %stack_var_-20.0.reg2mem, !insn.addr !449
  br i1 %25, label %dec_label_pc_2ddc, label %dec_label_pc_2d70, !insn.addr !449

dec_label_pc_2ddc:                                ; preds = %dec_label_pc_2cfc, %dec_label_pc_2d98, %dec_label_pc_2d70
  %stack_var_-20.0.reload = load i32, i32* %stack_var_-20.0.reg2mem
  ret i32 %stack_var_-20.0.reload, !insn.addr !450

; uselistorder directives
  uselistorder i64 %indvars.iv.reload, { 2, 0, 1, 3 }
  uselistorder i64 %indvars.iv7.reload, { 1, 3, 0, 2 }
  uselistorder i64* %data_-84, { 1, 2, 0 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %total_-92.04.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-20.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i64* (i64*, i32, i32)* @memset, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2ddc, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2d70, { 1, 0 }
  uselistorder label %dec_label_pc_2cfc, { 1, 0 }
}

define i32 @call_pthread_join() local_unnamed_addr {
dec_label_pc_2dec:
  %0 = call i32 @param_pthread_join(), !insn.addr !451
  ret i32 %0, !insn.addr !452
}

define i8* @thread_increment(i8* %arg) local_unnamed_addr {
dec_label_pc_2e00:
  %0 = alloca i64
  %storemerge1.reg2mem = alloca i32, !insn.addr !453
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp eq i32 %2, 0, !insn.addr !454
  store i32 0, i32* %storemerge1.reg2mem, !insn.addr !454
  br i1 %3, label %dec_label_pc_2e7c, label %dec_label_pc_2e38, !insn.addr !454

dec_label_pc_2e38:                                ; preds = %dec_label_pc_2e00, %dec_label_pc_2e38
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %4 = call i32 @pthread_mutex_lock(i64* nonnull @global_var_15208), !insn.addr !455
  store i32 ptrtoint (i32* @global_var_15239 to i32), i32* @global_var_15238, align 4, !insn.addr !456
  %5 = call i32 @pthread_mutex_unlock(i64* nonnull @global_var_15208), !insn.addr !457
  %6 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !458
  %7 = add nuw i32 %storemerge1.reload, 1, !insn.addr !459
  %exitcond = icmp eq i32 %7, %2
  store i32 %7, i32* %storemerge1.reg2mem, !insn.addr !454
  br i1 %exitcond, label %dec_label_pc_2e7c, label %dec_label_pc_2e38, !insn.addr !454

dec_label_pc_2e7c:                                ; preds = %dec_label_pc_2e38, %dec_label_pc_2e00
  ret i8* null, !insn.addr !460

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32* %storemerge1.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i32)* @usleep, { 2, 1, 0, 3 }
  uselistorder label %dec_label_pc_2e38, { 1, 0 }
}

define i32 @param_mutex_lock(i32 %thread_count, i32 %iterations_per_thread) local_unnamed_addr {
dec_label_pc_2e8c:
  %stack_var_-20.0.reg2mem = alloca i32, !insn.addr !461
  %storemerge12.reg2mem = alloca i32, !insn.addr !461
  %storemerge3.reg2mem = alloca i32, !insn.addr !461
  %stack_var_-28 = alloca i32, align 4
  store i32 %iterations_per_thread, i32* %stack_var_-28, align 4, !insn.addr !462
  %0 = mul i32 %thread_count, 8, !insn.addr !463
  %1 = call i64* @malloc(i32 %0), !insn.addr !464
  %2 = icmp eq i64* %1, null, !insn.addr !465
  store i32 -1, i32* %stack_var_-20.0.reg2mem, !insn.addr !465
  br i1 %2, label %dec_label_pc_2fbc, label %dec_label_pc_2ec8, !insn.addr !465

dec_label_pc_2ec8:                                ; preds = %dec_label_pc_2e8c
  store i32 0, i32* @global_var_15238, align 4, !insn.addr !466
  %3 = icmp eq i32 %thread_count, 0
  br i1 %3, label %dec_label_pc_2f80, label %dec_label_pc_2eec.lr.ph, !insn.addr !467

dec_label_pc_2eec.lr.ph:                          ; preds = %dec_label_pc_2ec8
  %4 = ptrtoint i64* %1 to i64, !insn.addr !468
  %5 = bitcast i32* %stack_var_-28 to i64*, !insn.addr !469
  store i32 0, i32* %storemerge3.reg2mem
  br label %dec_label_pc_2eec

dec_label_pc_2ed8:                                ; preds = %dec_label_pc_2eec
  %6 = add nuw i32 %storemerge3.reload, 1, !insn.addr !470
  %7 = icmp ult i32 %6, %thread_count, !insn.addr !467
  store i32 %6, i32* %storemerge3.reg2mem, !insn.addr !467
  store i32 0, i32* %storemerge12.reg2mem, !insn.addr !467
  br i1 %7, label %dec_label_pc_2eec, label %dec_label_pc_2f58, !insn.addr !467

dec_label_pc_2eec:                                ; preds = %dec_label_pc_2eec.lr.ph, %dec_label_pc_2ed8
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %8 = sext i32 %storemerge3.reload to i64, !insn.addr !471
  %9 = mul i64 %8, 8, !insn.addr !472
  %10 = add i64 %9, %4, !insn.addr !472
  %11 = inttoptr i64 %10 to i32*, !insn.addr !469
  %12 = call i32 @pthread_create(i32* %11, i64* null, i64* (i64*)* inttoptr (i64 11776 to i64* (i64*)*), i64* nonnull %5), !insn.addr !469
  %13 = icmp eq i32 %12, 0, !insn.addr !473
  br i1 %13, label %dec_label_pc_2ed8, label %dec_label_pc_2f14, !insn.addr !473

dec_label_pc_2f14:                                ; preds = %dec_label_pc_2eec
  call void @free(i64* nonnull %1), !insn.addr !474
  store i32 -2, i32* %stack_var_-20.0.reg2mem, !insn.addr !475
  br label %dec_label_pc_2fbc, !insn.addr !475

dec_label_pc_2f58:                                ; preds = %dec_label_pc_2ed8, %dec_label_pc_2f58
  %storemerge12.reload = load i32, i32* %storemerge12.reg2mem
  %14 = sext i32 %storemerge12.reload to i64, !insn.addr !476
  %15 = mul i64 %14, 8, !insn.addr !477
  %16 = add i64 %15, %4, !insn.addr !477
  %17 = inttoptr i64 %16 to i64*, !insn.addr !477
  %18 = load i64, i64* %17, align 8, !insn.addr !477
  %19 = trunc i64 %18 to i32, !insn.addr !478
  %20 = call i32 @pthread_join(i32 %19, i64** null), !insn.addr !478
  %21 = add nuw i32 %storemerge12.reload, 1, !insn.addr !479
  %exitcond = icmp eq i32 %21, %thread_count
  store i32 %21, i32* %storemerge12.reg2mem, !insn.addr !480
  br i1 %exitcond, label %dec_label_pc_2f80, label %dec_label_pc_2f58, !insn.addr !480

dec_label_pc_2f80:                                ; preds = %dec_label_pc_2f58, %dec_label_pc_2ec8
  call void @free(i64* nonnull %1), !insn.addr !481
  %22 = load i32, i32* %stack_var_-28, align 4, !insn.addr !482
  %23 = mul i32 %22, %thread_count, !insn.addr !483
  %24 = load i32, i32* @global_var_15238, align 4, !insn.addr !484
  %25 = icmp eq i32 %24, %23, !insn.addr !485
  %26 = select i1 %25, i32 42, i32 -3, !insn.addr !486
  store i32 %26, i32* %stack_var_-20.0.reg2mem, !insn.addr !487
  br label %dec_label_pc_2fbc, !insn.addr !487

dec_label_pc_2fbc:                                ; preds = %dec_label_pc_2e8c, %dec_label_pc_2f80, %dec_label_pc_2f14
  %stack_var_-20.0.reload = load i32, i32* %stack_var_-20.0.reg2mem
  ret i32 %stack_var_-20.0.reload, !insn.addr !488

; uselistorder directives
  uselistorder i32 %storemerge3.reload, { 1, 0 }
  uselistorder i32* %stack_var_-28, { 1, 0, 2 }
  uselistorder i32* %storemerge12.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-20.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32* @global_var_15238, { 2, 1, 0 }
  uselistorder i32 %thread_count, { 1, 2, 4, 3, 0 }
  uselistorder label %dec_label_pc_2fbc, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2f58, { 1, 0 }
  uselistorder label %dec_label_pc_2eec, { 1, 0 }
}

define i32 @call_mutex_lock() local_unnamed_addr {
dec_label_pc_2fcc:
  %0 = call i32 @param_mutex_lock(i32 4, i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !489
  ret i32 %0, !insn.addr !490

; uselistorder directives
  uselistorder i32 ptrtoint (i32* @global_var_3e8 to i32), { 1, 2, 3, 4, 0 }
}

define i8* @consumer_thread(i8* %arg) local_unnamed_addr {
dec_label_pc_2fe8:
  %0 = call i32 @pthread_mutex_lock(i64* nonnull @global_var_15240), !insn.addr !491
  %1 = load i32, i32* @global_var_15270, align 4, !insn.addr !492
  %2 = icmp eq i32 %1, 0, !insn.addr !493
  br i1 %2, label %dec_label_pc_3018, label %dec_label_pc_3030, !insn.addr !493

dec_label_pc_3018:                                ; preds = %dec_label_pc_2fe8, %dec_label_pc_3018
  %3 = call i32 @pthread_cond_wait(i64* nonnull @global_var_15278, i64* nonnull @global_var_15240), !insn.addr !494
  %4 = load i32, i32* @global_var_15270, align 4, !insn.addr !492
  %5 = icmp eq i32 %4, 0, !insn.addr !493
  br i1 %5, label %dec_label_pc_3018, label %dec_label_pc_3030, !insn.addr !493

dec_label_pc_3030:                                ; preds = %dec_label_pc_3018, %dec_label_pc_2fe8
  %6 = load i32, i32* @global_var_152a8, align 4, !insn.addr !495
  %7 = call i32 @pthread_mutex_unlock(i64* nonnull @global_var_15240), !insn.addr !496
  %8 = call i64* @malloc(i32 4), !insn.addr !497
  %9 = bitcast i64* %8 to i32*, !insn.addr !498
  store i32 %6, i32* %9, align 4, !insn.addr !499
  %10 = bitcast i64* %8 to i8*, !insn.addr !500
  ret i8* %10, !insn.addr !500

; uselistorder directives
  uselistorder label %dec_label_pc_3018, { 1, 0 }
}

define i8* @producer_thread(i8* %arg) local_unnamed_addr {
dec_label_pc_3070:
  %0 = call i32 @sleep(i32 1), !insn.addr !501
  %1 = call i32 @pthread_mutex_lock(i64* nonnull @global_var_15240), !insn.addr !502
  store i32 42, i32* @global_var_152a8, align 4, !insn.addr !503
  store i32 1, i32* @global_var_15270, align 4, !insn.addr !504
  %2 = call i32 @pthread_cond_signal(i64* nonnull @global_var_15278), !insn.addr !505
  %3 = call i32 @pthread_mutex_unlock(i64* nonnull @global_var_15240), !insn.addr !506
  ret i8* null, !insn.addr !507

; uselistorder directives
  uselistorder i32 (i64*)* @pthread_mutex_unlock, { 2, 1, 0, 3 }
  uselistorder i32 (i64*)* @pthread_mutex_lock, { 2, 1, 0, 3 }
}

define i32 @param_condition_variable() local_unnamed_addr {
dec_label_pc_30d8:
  %stack_var_-20.0.reg2mem = alloca i32, !insn.addr !508
  %consumer_ret_-48 = alloca i8*, align 8
  %stack_var_-32 = alloca i32, align 4
  %consumer_-40 = alloca i64, align 8
  store i32 0, i32* @global_var_15270, align 4, !insn.addr !509
  store i32 0, i32* @global_var_152a8, align 4, !insn.addr !510
  %0 = bitcast i64* %consumer_-40 to i32*, !insn.addr !511
  %1 = call i32 @pthread_create(i32* nonnull %0, i64* null, i64* (i64*)* inttoptr (i64 12264 to i64* (i64*)*), i64* null), !insn.addr !511
  %2 = icmp eq i32 %1, 0, !insn.addr !512
  store i32 -1, i32* %stack_var_-20.0.reg2mem, !insn.addr !512
  br i1 %2, label %dec_label_pc_3120, label %dec_label_pc_318c, !insn.addr !512

dec_label_pc_3120:                                ; preds = %dec_label_pc_30d8
  %3 = call i32 @pthread_create(i32* nonnull %stack_var_-32, i64* null, i64* (i64*)* inttoptr (i64 12400 to i64* (i64*)*), i64* null), !insn.addr !513
  %4 = icmp eq i32 %3, 0, !insn.addr !514
  %5 = load i64, i64* %consumer_-40, align 8
  %6 = trunc i64 %5 to i32
  br i1 %4, label %dec_label_pc_3154, label %dec_label_pc_3140, !insn.addr !514

dec_label_pc_3140:                                ; preds = %dec_label_pc_3120
  %7 = call i32 @pthread_cancel(i32 %6), !insn.addr !515
  store i32 -2, i32* %stack_var_-20.0.reg2mem, !insn.addr !516
  br label %dec_label_pc_318c, !insn.addr !516

dec_label_pc_3154:                                ; preds = %dec_label_pc_3120
  %8 = bitcast i8** %consumer_ret_-48 to i64**, !insn.addr !517
  %9 = call i32 @pthread_join(i32 %6, i64** nonnull %8), !insn.addr !517
  %10 = load i32, i32* %stack_var_-32, align 4, !insn.addr !518
  %11 = call i32 @pthread_join(i32 %10, i64** null), !insn.addr !519
  %12 = load i8*, i8** %consumer_ret_-48, align 8
  %13 = bitcast i8* %12 to i32*, !insn.addr !520
  %14 = load i32, i32* %13, align 4, !insn.addr !520
  %15 = bitcast i8* %12 to i64*, !insn.addr !521
  call void @free(i64* %15), !insn.addr !521
  store i32 %14, i32* %stack_var_-20.0.reg2mem, !insn.addr !522
  br label %dec_label_pc_318c, !insn.addr !522

dec_label_pc_318c:                                ; preds = %dec_label_pc_30d8, %dec_label_pc_3154, %dec_label_pc_3140
  %stack_var_-20.0.reload = load i32, i32* %stack_var_-20.0.reg2mem
  ret i32 %stack_var_-20.0.reload, !insn.addr !523

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i64* %consumer_-40, { 1, 0 }
  uselistorder i8** %consumer_ret_-48, { 1, 0 }
  uselistorder i32* %stack_var_-20.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32* @global_var_152a8, { 2, 1, 0 }
  uselistorder i32* @global_var_15270, { 3, 2, 1, 0 }
  uselistorder label %dec_label_pc_318c, { 1, 2, 0 }
}

define i32 @call_condition_variable() local_unnamed_addr {
dec_label_pc_319c:
  %0 = call i32 @param_condition_variable(), !insn.addr !524
  ret i32 %0, !insn.addr !525
}

define i8* @thread_atomic_increment(i8* %arg) local_unnamed_addr {
dec_label_pc_31b0:
  %0 = alloca i64
  %storemerge2.reg2mem = alloca i32, !insn.addr !526
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp eq i32 %2, 0, !insn.addr !527
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !527
  br i1 %3, label %dec_label_pc_3288, label %dec_label_pc_31ec, !insn.addr !527

dec_label_pc_31ec:                                ; preds = %dec_label_pc_31b0, %dec_label_pc_31ec
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %4 = call i64 @__aarch64_ldadd4_acq_rel(), !insn.addr !528
  %5 = call i64 @__aarch64_cas4_acq_rel(), !insn.addr !529
  %6 = add nuw i32 %storemerge2.reload, 1, !insn.addr !530
  %exitcond = icmp eq i32 %6, %2
  store i32 %6, i32* %storemerge2.reg2mem, !insn.addr !527
  br i1 %exitcond, label %dec_label_pc_3288, label %dec_label_pc_31ec, !insn.addr !527

dec_label_pc_3288:                                ; preds = %dec_label_pc_31ec, %dec_label_pc_31b0
  ret i8* null, !insn.addr !531

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_31ec, { 1, 0 }
}

define i8* @thread_atomic_load_store(i8* %arg) local_unnamed_addr {
dec_label_pc_3298:
  %0 = load i32, i32* @global_var_152ac, align 4
  %1 = add i32 %0, 100, !insn.addr !532
  %2 = sext i32 %0 to i64, !insn.addr !533
  call void @__asm_stlr(i32 %1, i64 %2), !insn.addr !533
  ret i8* null, !insn.addr !534
}

define i32 @param_atomic_ops(i32 %thread_count, i32 %iterations) local_unnamed_addr {
dec_label_pc_32d8:
  %stack_var_-20.0.reg2mem = alloca i32, !insn.addr !535
  %storemerge12.reg2mem = alloca i32, !insn.addr !535
  %storemerge3.reg2mem = alloca i32, !insn.addr !535
  %load_store_tid_-56 = alloca i64, align 8
  %stack_var_-28 = alloca i32, align 4
  store i32 %iterations, i32* %stack_var_-28, align 4, !insn.addr !536
  %0 = mul i32 %thread_count, 8, !insn.addr !537
  %1 = call i64* @malloc(i32 %0), !insn.addr !538
  %2 = icmp eq i64* %1, null, !insn.addr !539
  store i32 -1, i32* %stack_var_-20.0.reg2mem, !insn.addr !539
  br i1 %2, label %dec_label_pc_3448, label %dec_label_pc_3314, !insn.addr !539

dec_label_pc_3314:                                ; preds = %dec_label_pc_32d8
  %3 = load i32, i32* @global_var_152ac, align 4, !insn.addr !540
  %4 = sext i32 %3 to i64, !insn.addr !540
  call void @__asm_stlr(i32 0, i64 %4), !insn.addr !540
  %5 = icmp eq i32 %thread_count, 0
  br i1 %5, label %dec_label_pc_3394, label %dec_label_pc_3344.lr.ph, !insn.addr !541

dec_label_pc_3344.lr.ph:                          ; preds = %dec_label_pc_3314
  %6 = ptrtoint i64* %1 to i64, !insn.addr !542
  %7 = bitcast i32* %stack_var_-28 to i64*, !insn.addr !543
  store i32 0, i32* %storemerge3.reg2mem
  br label %dec_label_pc_3344

dec_label_pc_3330:                                ; preds = %dec_label_pc_3344
  %8 = add nuw i32 %storemerge3.reload, 1, !insn.addr !544
  %9 = icmp ult i32 %8, %thread_count, !insn.addr !541
  store i32 %8, i32* %storemerge3.reg2mem, !insn.addr !541
  br i1 %9, label %dec_label_pc_3344, label %dec_label_pc_3394, !insn.addr !541

dec_label_pc_3344:                                ; preds = %dec_label_pc_3344.lr.ph, %dec_label_pc_3330
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %10 = sext i32 %storemerge3.reload to i64, !insn.addr !545
  %11 = mul i64 %10, 8, !insn.addr !546
  %12 = add i64 %11, %6, !insn.addr !546
  %13 = inttoptr i64 %12 to i32*, !insn.addr !543
  %14 = call i32 @pthread_create(i32* %13, i64* null, i64* (i64*)* inttoptr (i64 12720 to i64* (i64*)*), i64* nonnull %7), !insn.addr !543
  %15 = icmp eq i32 %14, 0, !insn.addr !547
  br i1 %15, label %dec_label_pc_3330, label %dec_label_pc_336c, !insn.addr !547

dec_label_pc_336c:                                ; preds = %dec_label_pc_3344
  call void @free(i64* nonnull %1), !insn.addr !548
  store i32 -2, i32* %stack_var_-20.0.reg2mem, !insn.addr !549
  br label %dec_label_pc_3448, !insn.addr !549

dec_label_pc_3394:                                ; preds = %dec_label_pc_3330, %dec_label_pc_3314
  %16 = bitcast i64* %load_store_tid_-56 to i32*, !insn.addr !550
  %17 = call i32 @pthread_create(i32* nonnull %16, i64* null, i64* (i64*)* inttoptr (i64 12952 to i64* (i64*)*), i64* null), !insn.addr !550
  %18 = icmp eq i32 %17, 0, !insn.addr !551
  br i1 %18, label %dec_label_pc_33b8, label %dec_label_pc_33c8, !insn.addr !551

dec_label_pc_33b8:                                ; preds = %dec_label_pc_3394
  %19 = load i64, i64* %load_store_tid_-56, align 8, !insn.addr !552
  %20 = trunc i64 %19 to i32, !insn.addr !553
  %21 = call i32 @pthread_join(i32 %20, i64** null), !insn.addr !553
  br label %dec_label_pc_33c8, !insn.addr !554

dec_label_pc_33c8:                                ; preds = %dec_label_pc_3394, %dec_label_pc_33b8
  br i1 %5, label %dec_label_pc_340c, label %dec_label_pc_33e4.lr.ph, !insn.addr !555

dec_label_pc_33e4.lr.ph:                          ; preds = %dec_label_pc_33c8
  %22 = ptrtoint i64* %1 to i64, !insn.addr !556
  store i32 0, i32* %storemerge12.reg2mem
  br label %dec_label_pc_33e4

dec_label_pc_33e4:                                ; preds = %dec_label_pc_33e4, %dec_label_pc_33e4.lr.ph
  %storemerge12.reload = load i32, i32* %storemerge12.reg2mem
  %23 = sext i32 %storemerge12.reload to i64, !insn.addr !557
  %24 = mul i64 %23, 8, !insn.addr !558
  %25 = add i64 %24, %22, !insn.addr !558
  %26 = inttoptr i64 %25 to i64*, !insn.addr !558
  %27 = load i64, i64* %26, align 8, !insn.addr !558
  %28 = trunc i64 %27 to i32, !insn.addr !559
  %29 = call i32 @pthread_join(i32 %28, i64** null), !insn.addr !559
  %30 = add nuw i32 %storemerge12.reload, 1, !insn.addr !560
  %exitcond = icmp eq i32 %30, %thread_count
  store i32 %30, i32* %storemerge12.reg2mem, !insn.addr !555
  br i1 %exitcond, label %dec_label_pc_340c, label %dec_label_pc_33e4, !insn.addr !555

dec_label_pc_340c:                                ; preds = %dec_label_pc_33e4, %dec_label_pc_33c8
  %31 = load i32, i32* @global_var_152ac, align 4, !insn.addr !561
  call void @free(i64* nonnull %1), !insn.addr !562
  %32 = icmp slt i32 %31, 1
  %33 = select i1 %32, i32 -3, i32 42, !insn.addr !563
  store i32 %33, i32* %stack_var_-20.0.reg2mem, !insn.addr !564
  br label %dec_label_pc_3448, !insn.addr !564

dec_label_pc_3448:                                ; preds = %dec_label_pc_32d8, %dec_label_pc_340c, %dec_label_pc_336c
  %stack_var_-20.0.reload = load i32, i32* %stack_var_-20.0.reg2mem
  ret i32 %stack_var_-20.0.reload, !insn.addr !565

; uselistorder directives
  uselistorder i32 %storemerge3.reload, { 1, 0 }
  uselistorder i64* %load_store_tid_-56, { 1, 0 }
  uselistorder i32* %storemerge12.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-20.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i64** null, { 1, 0, 2, 3, 4 }
  uselistorder i32* @global_var_152ac, { 1, 2, 0 }
  uselistorder i32 %thread_count, { 1, 3, 2, 0 }
  uselistorder label %dec_label_pc_3448, { 1, 2, 0 }
  uselistorder label %dec_label_pc_33c8, { 1, 0 }
  uselistorder label %dec_label_pc_3344, { 1, 0 }
}

define i32 @call_atomic_ops() local_unnamed_addr {
dec_label_pc_3458:
  %0 = call i32 @param_atomic_ops(i32 4, i32 500), !insn.addr !566
  ret i32 %0, !insn.addr !567
}

define i8* @thread_tls_test(i8* %arg) local_unnamed_addr {
dec_label_pc_3474:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i8* %arg to i64
  %3 = call i64 @__asm_mrs(i64 %2, i64 %1), !insn.addr !568
  %4 = add i64 %3, 16, !insn.addr !569
  %5 = inttoptr i64 %4 to i32*, !insn.addr !570
  %6 = load i32, i32* %5, align 4
  %7 = add i32 %6, 50, !insn.addr !571
  store i32 %7, i32* %5, align 4, !insn.addr !572
  %8 = add i64 %3, 20, !insn.addr !573
  %9 = inttoptr i64 %8 to i8*, !insn.addr !574
  %10 = call i8* @strncpy(i8* %9, i8* %arg, i32 31), !insn.addr !574
  %11 = call i64* @malloc(i32 8), !insn.addr !575
  %12 = bitcast i64* %11 to i32*, !insn.addr !576
  store i32 %6, i32* %12, align 4, !insn.addr !577
  %13 = load i32, i32* %5, align 4, !insn.addr !578
  %14 = ptrtoint i64* %11 to i64, !insn.addr !579
  %15 = add i64 %14, 4, !insn.addr !580
  %16 = inttoptr i64 %15 to i32*, !insn.addr !580
  store i32 %13, i32* %16, align 4, !insn.addr !580
  %17 = bitcast i64* %11 to i8*, !insn.addr !581
  ret i8* %17, !insn.addr !581

; uselistorder directives
  uselistorder i64* %11, { 1, 0, 2 }
  uselistorder i64 20, { 1, 0 }
}

define i32 @param_thread_local_storage(i32 %thread_count) local_unnamed_addr {
dec_label_pc_3504:
  %stack_var_-20.0.reg2mem = alloca i32, !insn.addr !582
  %total_final_-60.0.lcssa.reg2mem = alloca i32, !insn.addr !582
  %total_initial_-56.0.lcssa.reg2mem = alloca i32, !insn.addr !582
  %total_initial_-56.08.reg2mem = alloca i32, !insn.addr !582
  %total_final_-60.09.reg2mem = alloca i32, !insn.addr !582
  %storemerge310.reg2mem = alloca i32, !insn.addr !582
  %storemerge17.reg2mem = alloca i32, !insn.addr !582
  %storemerge212.reg2mem = alloca i32, !insn.addr !582
  %indvars.iv.reg2mem = alloca i64, !insn.addr !582
  %stack_var_-72 = alloca i64, align 8
  %0 = mul i32 %thread_count, 8, !insn.addr !583
  %1 = call i64* @malloc(i32 %0), !insn.addr !584
  %2 = call i64* @malloc(i32 %0), !insn.addr !585
  %3 = icmp eq i64* %1, null, !insn.addr !586
  %4 = icmp eq i64* %2, null, !insn.addr !587
  %or.cond = or i1 %3, %4
  store i32 -1, i32* %stack_var_-20.0.reg2mem, !insn.addr !586
  br i1 %or.cond, label %dec_label_pc_3790, label %dec_label_pc_3560.preheader, !insn.addr !586

dec_label_pc_3560.preheader:                      ; preds = %dec_label_pc_3504
  %5 = icmp eq i32 %thread_count, 0
  store i32 0, i32* %total_initial_-56.0.lcssa.reg2mem, !insn.addr !588
  store i32 0, i32* %total_final_-60.0.lcssa.reg2mem, !insn.addr !588
  br i1 %5, label %dec_label_pc_3710, label %dec_label_pc_3574.lr.ph, !insn.addr !588

dec_label_pc_3574.lr.ph:                          ; preds = %dec_label_pc_3560.preheader
  %6 = ptrtoint i64* %2 to i64
  %wide.trip.count = zext i32 %thread_count to i64
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_3574

dec_label_pc_35dc.lr.ph:                          ; preds = %dec_label_pc_3574
  %7 = ptrtoint i64* %1 to i64, !insn.addr !589
  store i32 0, i32* %storemerge212.reg2mem
  br label %dec_label_pc_35dc

dec_label_pc_3574:                                ; preds = %dec_label_pc_3574, %dec_label_pc_3574.lr.ph
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %8 = call i64* @malloc(i32 16), !insn.addr !590
  %9 = ptrtoint i64* %8 to i64, !insn.addr !590
  %sext = mul i64 %indvars.iv.reload, 4294967296
  %10 = ashr exact i64 %sext, 29, !insn.addr !591
  %11 = add i64 %10, %6, !insn.addr !591
  %12 = inttoptr i64 %11 to i64*, !insn.addr !591
  store i64 %9, i64* %12, align 8, !insn.addr !591
  %13 = bitcast i64* %8 to i8*, !insn.addr !592
  %14 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %13, i32 16, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_3c30, i64 0, i64 0), i64 %indvars.iv.reload), !insn.addr !592
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond17 = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !588
  br i1 %exitcond17, label %dec_label_pc_35dc.lr.ph, label %dec_label_pc_3574, !insn.addr !588

dec_label_pc_36a0.lr.ph:                          ; preds = %dec_label_pc_366c
  %15 = bitcast i64* %stack_var_-72 to i64**, !insn.addr !593
  store i32 0, i32* %storemerge310.reg2mem
  store i32 0, i32* %total_final_-60.09.reg2mem
  store i32 0, i32* %total_initial_-56.08.reg2mem
  br label %dec_label_pc_36a0

dec_label_pc_35dc:                                ; preds = %dec_label_pc_35dc.lr.ph, %dec_label_pc_366c
  %storemerge212.reload = load i32, i32* %storemerge212.reg2mem
  %16 = sext i32 %storemerge212.reload to i64, !insn.addr !594
  %17 = mul i64 %16, 8, !insn.addr !595
  %18 = add i64 %17, %7, !insn.addr !595
  %19 = add i64 %17, %6, !insn.addr !596
  %20 = inttoptr i64 %19 to i64*, !insn.addr !596
  %21 = load i64, i64* %20, align 8, !insn.addr !596
  %22 = inttoptr i64 %18 to i32*, !insn.addr !597
  %23 = inttoptr i64 %21 to i64*, !insn.addr !597
  %24 = call i32 @pthread_create(i32* %22, i64* null, i64* (i64*)* inttoptr (i64 13428 to i64* (i64*)*), i64* %23), !insn.addr !597
  %25 = icmp eq i32 %24, 0, !insn.addr !598
  store i32 0, i32* %storemerge17.reg2mem, !insn.addr !598
  br i1 %25, label %dec_label_pc_366c, label %dec_label_pc_3628, !insn.addr !598

dec_label_pc_3628:                                ; preds = %dec_label_pc_35dc, %dec_label_pc_3628
  %storemerge17.reload = load i32, i32* %storemerge17.reg2mem
  %26 = sext i32 %storemerge17.reload to i64, !insn.addr !599
  %27 = mul i64 %26, 8, !insn.addr !600
  %28 = add i64 %27, %6, !insn.addr !600
  %29 = inttoptr i64 %28 to i64*, !insn.addr !600
  %30 = load i64, i64* %29, align 8, !insn.addr !600
  %31 = inttoptr i64 %30 to i64*, !insn.addr !601
  call void @free(i64* %31), !insn.addr !601
  %32 = add nuw i32 %storemerge17.reload, 1, !insn.addr !602
  %exitcond16 = icmp eq i32 %storemerge17.reload, %storemerge212.reload
  store i32 %32, i32* %storemerge17.reg2mem, !insn.addr !603
  br i1 %exitcond16, label %dec_label_pc_364c, label %dec_label_pc_3628, !insn.addr !603

dec_label_pc_364c:                                ; preds = %dec_label_pc_3628
  call void @free(i64* %2), !insn.addr !604
  call void @free(i64* %1), !insn.addr !605
  store i32 -2, i32* %stack_var_-20.0.reg2mem, !insn.addr !606
  br label %dec_label_pc_3790, !insn.addr !606

dec_label_pc_366c:                                ; preds = %dec_label_pc_35dc
  %33 = add nuw i32 %storemerge212.reload, 1, !insn.addr !607
  %34 = icmp ult i32 %33, %thread_count, !insn.addr !608
  store i32 %33, i32* %storemerge212.reg2mem, !insn.addr !608
  br i1 %34, label %dec_label_pc_35dc, label %dec_label_pc_36a0.lr.ph, !insn.addr !608

dec_label_pc_36a0:                                ; preds = %dec_label_pc_36a0, %dec_label_pc_36a0.lr.ph
  %total_initial_-56.08.reload = load i32, i32* %total_initial_-56.08.reg2mem
  %total_final_-60.09.reload = load i32, i32* %total_final_-60.09.reg2mem
  %storemerge310.reload = load i32, i32* %storemerge310.reg2mem
  %35 = sext i32 %storemerge310.reload to i64, !insn.addr !609
  %36 = mul i64 %35, 8, !insn.addr !610
  %37 = add i64 %36, %7, !insn.addr !610
  %38 = inttoptr i64 %37 to i64*, !insn.addr !610
  %39 = load i64, i64* %38, align 8, !insn.addr !610
  %40 = trunc i64 %39 to i32, !insn.addr !593
  %41 = call i32 @pthread_join(i32 %40, i64** nonnull %15), !insn.addr !593
  %42 = load i64, i64* %stack_var_-72, align 8, !insn.addr !611
  %43 = inttoptr i64 %42 to i32*, !insn.addr !612
  %44 = load i32, i32* %43, align 4, !insn.addr !612
  %45 = add i32 %44, %total_initial_-56.08.reload, !insn.addr !613
  %46 = add i64 %42, 4, !insn.addr !614
  %47 = inttoptr i64 %46 to i32*, !insn.addr !614
  %48 = load i32, i32* %47, align 4, !insn.addr !614
  %49 = add i32 %48, %total_final_-60.09.reload, !insn.addr !615
  %50 = inttoptr i64 %42 to i64*, !insn.addr !616
  call void @free(i64* %50), !insn.addr !616
  %51 = add i64 %36, %6, !insn.addr !617
  %52 = inttoptr i64 %51 to i64*, !insn.addr !617
  %53 = load i64, i64* %52, align 8, !insn.addr !617
  %54 = inttoptr i64 %53 to i64*, !insn.addr !618
  call void @free(i64* %54), !insn.addr !618
  %55 = add nuw i32 %storemerge310.reload, 1, !insn.addr !619
  %exitcond = icmp eq i32 %55, %thread_count
  store i32 %55, i32* %storemerge310.reg2mem, !insn.addr !620
  store i32 %49, i32* %total_final_-60.09.reg2mem, !insn.addr !620
  store i32 %45, i32* %total_initial_-56.08.reg2mem, !insn.addr !620
  store i32 %45, i32* %total_initial_-56.0.lcssa.reg2mem, !insn.addr !620
  store i32 %49, i32* %total_final_-60.0.lcssa.reg2mem, !insn.addr !620
  br i1 %exitcond, label %dec_label_pc_3710, label %dec_label_pc_36a0, !insn.addr !620

dec_label_pc_3710:                                ; preds = %dec_label_pc_36a0, %dec_label_pc_3560.preheader
  %total_initial_-56.0.lcssa.reload = load i32, i32* %total_initial_-56.0.lcssa.reg2mem
  call void @free(i64* %2), !insn.addr !621
  call void @free(i64* %1), !insn.addr !622
  %56 = mul i32 %thread_count, 100
  %57 = icmp eq i32 %56, %total_initial_-56.0.lcssa.reload, !insn.addr !623
  store i32 -3, i32* %stack_var_-20.0.reg2mem, !insn.addr !623
  br i1 %57, label %dec_label_pc_375c, label %dec_label_pc_3790, !insn.addr !623

dec_label_pc_375c:                                ; preds = %dec_label_pc_3710
  %total_final_-60.0.lcssa.reload = load i32, i32* %total_final_-60.0.lcssa.reg2mem
  %58 = mul i32 %thread_count, 150, !insn.addr !624
  %59 = icmp eq i32 %total_final_-60.0.lcssa.reload, %58, !insn.addr !625
  %phitmp = icmp eq i1 %59, false
  %phitmp5 = select i1 %phitmp, i32 -3, i32 42
  store i32 %phitmp5, i32* %stack_var_-20.0.reg2mem, !insn.addr !626
  br label %dec_label_pc_3790, !insn.addr !626

dec_label_pc_3790:                                ; preds = %dec_label_pc_375c, %dec_label_pc_3710, %dec_label_pc_3504, %dec_label_pc_364c
  %stack_var_-20.0.reload = load i32, i32* %stack_var_-20.0.reg2mem
  ret i32 %stack_var_-20.0.reload, !insn.addr !627

; uselistorder directives
  uselistorder i64 %36, { 1, 0 }
  uselistorder i32 %storemerge17.reload, { 2, 0, 1 }
  uselistorder i64 %17, { 1, 0 }
  uselistorder i32 %storemerge212.reload, { 0, 2, 1 }
  uselistorder i64* %2, { 2, 1, 0, 3 }
  uselistorder i32 %0, { 1, 0 }
  uselistorder i64* %stack_var_-72, { 1, 0 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge212.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge17.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge310.reg2mem, { 1, 0, 2 }
  uselistorder i32* %total_final_-60.09.reg2mem, { 1, 0, 2 }
  uselistorder i32* %total_initial_-56.08.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-20.0.reg2mem, { 0, 2, 1, 4, 3 }
  uselistorder i32 42, { 2, 8, 9, 10, 0, 4, 11, 1, 12, 5, 13, 6, 3, 7, 14 }
  uselistorder i1 false, { 2, 1, 0, 3 }
  uselistorder i32 -3, { 6, 0, 8, 9, 1, 2, 3, 10, 4, 7, 5 }
  uselistorder i64 4, { 3, 4, 5, 0, 1, 2 }
  uselistorder i32 (i32, i64**)* @pthread_join, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder i32 -2, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 10 }
  uselistorder void (i64*)* @free, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14 }
  uselistorder i32 (i32*, i64*, i64* (i64*)*, i64*)* @pthread_create, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder i64 8, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 10 }
  uselistorder i64 1, { 3, 1, 5, 2, 4, 7, 8, 9, 6, 11, 12, 0, 10 }
  uselistorder i32 -1, { 0, 1, 2, 3, 4, 5, 23, 24, 6, 19, 7, 8, 9, 10, 20, 11, 16, 21, 17, 18, 12, 13, 22, 14, 15 }
  uselistorder i64* null, { 2, 0, 1, 4, 5, 6, 3, 7, 8, 9, 10, 12, 11, 13, 14, 15, 16 }
  uselistorder i64* (i32)* @malloc, { 8, 7, 6, 5, 4, 3, 2, 1, 0, 9 }
  uselistorder i32 8, { 0, 3, 1, 2 }
  uselistorder i32 %thread_count, { 5, 4, 2, 6, 1, 3, 0 }
  uselistorder label %dec_label_pc_3790, { 0, 1, 3, 2 }
  uselistorder label %dec_label_pc_3628, { 1, 0 }
  uselistorder label %dec_label_pc_35dc, { 1, 0 }
}

define i32 @call_thread_local_storage() local_unnamed_addr {
dec_label_pc_37a0:
  %0 = call i32 @param_thread_local_storage(i32 4), !insn.addr !628
  ret i32 %0, !insn.addr !629

; uselistorder directives
  uselistorder i32 4, { 1, 2, 3, 4, 5, 6, 0 }
}

define void @test_thread_concurrency() local_unnamed_addr {
dec_label_pc_37b8:
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3c3a to i8*)), !insn.addr !630
  %1 = call i32 @call_pthread_create(), !insn.addr !631
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3c59 to i8*)), !insn.addr !632
  %3 = call i32 @call_pthread_join(), !insn.addr !633
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3c75 to i8*)), !insn.addr !634
  %5 = call i32 @call_mutex_lock(), !insn.addr !635
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3c92 to i8*)), !insn.addr !636
  %7 = call i32 @call_condition_variable(), !insn.addr !637
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3cae to i8*)), !insn.addr !638
  %9 = call i32 @call_atomic_ops(), !insn.addr !639
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3cca to i8*)), !insn.addr !640
  %11 = call i32 @call_thread_local_storage(), !insn.addr !641
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3ce6 to i8*)), !insn.addr !642
  ret void, !insn.addr !643

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 29 }
  uselistorder i64 0, { 69, 70, 0, 1, 2, 71, 72, 73, 74, 127, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 3, 4, 9, 5, 10, 85, 86, 87, 88, 91, 92, 89, 90, 93, 94, 6, 7, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 125, 126, 123, 124, 135, 8, 136, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 128, 129, 130, 131, 132, 133, 134 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_384c:
  call void @test_standard_library_functions(), !insn.addr !644
  call void @test_system_calls(), !insn.addr !645
  call void @test_thread_concurrency(), !insn.addr !646
  ret i32 0, !insn.addr !647
}

define i64 @__aarch64_cas4_acq_rel() local_unnamed_addr {
dec_label_pc_3880:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  call void @__asm_hint(i64 34), !insn.addr !648
  %4 = load i8, i8* bitcast (i32* @global_var_152b0 to i8*), align 4, !insn.addr !649
  %5 = icmp eq i8 %4, 0, !insn.addr !650
  br i1 %5, label %dec_label_pc_3898, label %dec_label_pc_3890, !insn.addr !650

dec_label_pc_3890:                                ; preds = %dec_label_pc_3880
  %6 = trunc i64 %3 to i32, !insn.addr !651
  %7 = trunc i64 %2 to i32, !insn.addr !651
  call void @__asm_casal(i32 %6, i32 %7, i64 %1), !insn.addr !651
  ret i64 %3, !insn.addr !652

dec_label_pc_3898:                                ; preds = %dec_label_pc_3880
  %8 = and i64 %3, 4294967295, !insn.addr !653
  %9 = trunc i64 %2 to i32
  %10 = and i64 %1, 4294967295, !insn.addr !654
  %11 = icmp eq i64 %8, %10, !insn.addr !655
  br i1 %11, label %dec_label_pc_38a8, label %dec_label_pc_38b0, !insn.addr !655

dec_label_pc_38a8:                                ; preds = %dec_label_pc_3898, %dec_label_pc_38a8
  %12 = call i32 @__asm_stlxr(i32 %9, i64 %1), !insn.addr !656
  %13 = icmp eq i32 %12, 0, !insn.addr !657
  br i1 %13, label %dec_label_pc_38b0, label %dec_label_pc_38a8, !insn.addr !657

dec_label_pc_38b0:                                ; preds = %dec_label_pc_38a8, %dec_label_pc_3898
  ret i64 %10, !insn.addr !658

; uselistorder directives
  uselistorder i64 %10, { 1, 0 }
  uselistorder i64 %3, { 2, 1, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 1, 2, 0 }
  uselistorder i64* %0, { 2, 1, 0 }
  uselistorder label %dec_label_pc_38a8, { 1, 0 }
}

define i64 @__aarch64_ldadd4_acq_rel() local_unnamed_addr {
dec_label_pc_38c0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  call void @__asm_hint(i64 34), !insn.addr !659
  %3 = load i8, i8* bitcast (i32* @global_var_152b0 to i8*), align 4, !insn.addr !660
  %4 = icmp eq i8 %3, 0, !insn.addr !661
  br i1 %4, label %dec_label_pc_38dc.preheader, label %dec_label_pc_38d0, !insn.addr !661

dec_label_pc_38dc.preheader:                      ; preds = %dec_label_pc_38c0
  %5 = trunc i64 %1 to i32
  %6 = trunc i64 %2 to i32, !insn.addr !662
  %7 = add i32 %6, %5, !insn.addr !662
  br label %dec_label_pc_38dc

dec_label_pc_38d0:                                ; preds = %dec_label_pc_38c0
  %8 = trunc i64 %2 to i32, !insn.addr !663
  call void @__asm_ldaddal(i32 %8, i32 %8, i64 %1), !insn.addr !663
  ret i64 %2, !insn.addr !664

dec_label_pc_38dc:                                ; preds = %dec_label_pc_38dc.preheader, %dec_label_pc_38dc
  %9 = call i32 @__asm_stlxr(i32 %7, i64 %1), !insn.addr !665
  %10 = icmp eq i32 %9, 0, !insn.addr !666
  br i1 %10, label %dec_label_pc_38ec, label %dec_label_pc_38dc, !insn.addr !666

dec_label_pc_38ec:                                ; preds = %dec_label_pc_38dc
  %11 = and i64 %1, 4294967295, !insn.addr !667
  ret i64 %11, !insn.addr !668

; uselistorder directives
  uselistorder i64 %2, { 1, 0, 2 }
  uselistorder i64 %1, { 3, 2, 0, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i8 0, { 0, 1, 3, 4, 2 }
  uselistorder i32 0, { 51, 52, 17, 5, 48, 2, 3, 4, 6, 0, 1, 18, 7, 49, 50, 8, 19, 28, 9, 20, 53, 54, 55, 56, 57, 23, 58, 10, 11, 21, 59, 12, 22, 60, 61, 13, 29, 14, 62, 63, 64, 65, 25, 66, 67, 24, 68, 47, 30, 31, 69, 70, 71, 72, 73, 74, 75, 32, 33, 76, 77, 78, 79, 80, 81, 34, 82, 83, 84, 85, 35, 86, 16, 15, 36, 87, 88, 26, 27, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46 }
  uselistorder i8* bitcast (i32* @global_var_152b0 to i8*), { 2, 1, 0 }
  uselistorder label %dec_label_pc_38dc, { 1, 0 }
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_38f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !669

; uselistorder directives
  uselistorder i32 1, { 8, 7, 6, 103, 104, 105, 79, 19, 18, 17, 16, 15, 14, 13, 12, 11, 5, 57, 106, 107, 81, 80, 22, 21, 20, 108, 23, 4, 83, 72, 82, 24, 58, 59, 109, 110, 84, 27, 26, 25, 111, 28, 3, 86, 85, 32, 31, 30, 29, 112, 71, 34, 33, 74, 73, 87, 35, 2, 60, 61, 63, 62, 39, 38, 37, 36, 40, 64, 65, 89, 88, 41, 66, 75, 90, 42, 10, 76, 43, 91, 1, 44, 92, 45, 9, 48, 47, 46, 50, 49, 67, 68, 93, 51, 52, 95, 94, 53, 98, 97, 96, 55, 69, 100, 99, 56, 70, 101, 54, 102, 0, 77, 78 }
}

declare i64* @memcpy(i64*, i64*, i32) local_unnamed_addr

declare void @_exit(i32) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i32 @raise(i32) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @execl(i8*, i8*, ...) local_unnamed_addr

declare i32 @listen(i32, i32) local_unnamed_addr

declare i32 @shmdt(i64*) local_unnamed_addr

declare i32 @bind(i32, %sockaddr*, i32) local_unnamed_addr

declare i64 @__cxa_finalize.5(i64) local_unnamed_addr

declare i32 @pipe([2 x i32]) local_unnamed_addr

declare i32 @fork() local_unnamed_addr

declare i32 @snprintf(i8*, i32, i8*, ...) local_unnamed_addr

declare i32 @fileno(%_IO_FILE*) local_unnamed_addr

declare void (i32)* @signal(i32, void (i32)*) local_unnamed_addr

declare i32 @fclose(%_IO_FILE*) local_unnamed_addr

declare %_IO_FILE* @fopen(i8*, i8*) local_unnamed_addr

declare i64* @malloc(i32) local_unnamed_addr

declare i32 @setsockopt(i32, i32, i32, i64*, i32) local_unnamed_addr

declare i32 @open(i8*, i32, ...) local_unnamed_addr

declare i32 @pthread_cond_signal(i64*) local_unnamed_addr

declare i64* @memset(i64*, i32, i32) local_unnamed_addr

declare i64* @shmat(i32, i64*, i32) local_unnamed_addr

declare i32 @sleep(i32) local_unnamed_addr

declare i16 @htons(i16) local_unnamed_addr

declare void @rewind(%_IO_FILE*) local_unnamed_addr

declare i32 @close(i32) local_unnamed_addr

declare i64 @__gmon_start__.6(i64) local_unnamed_addr

declare i32 @stat(i8*, %stat*) local_unnamed_addr

declare i32 @write(i32, i64*, i32) local_unnamed_addr

declare i32 @__getauxval(i32) local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @memcmp(i64*, i64*, i32) local_unnamed_addr

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare i32 @shmctl(i32, i32, %shmid_ds*) local_unnamed_addr

declare i32 @fread(i64*, i32, i32, %_IO_FILE*) local_unnamed_addr

declare i32 @ftok(i8*, i32) local_unnamed_addr

declare void @free(i64*) local_unnamed_addr

declare i32 @shmget(i32, i32, i32) local_unnamed_addr

declare i32 @pthread_cond_wait(i64*, i64*) local_unnamed_addr

declare i8* @strchr(i8*, i32) local_unnamed_addr

declare i32 @fwrite(i64*, i32, i32, %_IO_FILE*) local_unnamed_addr

declare i32 @pthread_create(i32*, i64*, i64* (i64*)*, i64*) local_unnamed_addr

declare i32 @wait(i64) local_unnamed_addr

declare i32 @socket(i32, i32, i32) local_unnamed_addr

declare i8* @strcpy(i8*, i8*) local_unnamed_addr

declare i32 @read(i32, i64*, i32) local_unnamed_addr

declare i8* @strstr(i8*, i8*) local_unnamed_addr

declare i32 @usleep(i32) local_unnamed_addr

declare i32 @sscanf(i8*, i8*, ...) local_unnamed_addr

declare i8* @strncpy(i8*, i8*, i32) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32* @__errno_location() local_unnamed_addr

declare i32 @pthread_join(i32, i64**) local_unnamed_addr

declare i32 @alarm(i32) local_unnamed_addr

declare i32 @pthread_cancel(i32) local_unnamed_addr

declare i32 @pthread_mutex_lock(i64*) local_unnamed_addr

declare i32 @syscall(i32, ...) local_unnamed_addr

declare i32 @pthread_mutex_unlock(i64*) local_unnamed_addr

declare i32 @waitpid(i32, i32*, i32) local_unnamed_addr

declare i32 @unlink(i8*) local_unnamed_addr

declare void @__asm_hint(i64) local_unnamed_addr

declare void @__asm_casal(i32, i32, i64) local_unnamed_addr

declare i32 @__asm_stlxr(i32, i64) local_unnamed_addr

declare void @__asm_ldaddal(i32, i32, i64) local_unnamed_addr

declare void @__asm_stlr(i32, i64) local_unnamed_addr

declare i64 @__asm_mrs(i64, i64) local_unnamed_addr

declare i32 @__asm_ubfx(i32, i32, i64, i64) local_unnamed_addr

!0 = !{i64 4820}
!1 = !{i64 4828}
!2 = !{i64 4876}
!3 = !{i64 4892}
!4 = !{i64 4908}
!5 = !{i64 4924}
!6 = !{i64 4940}
!7 = !{i64 4956}
!8 = !{i64 4972}
!9 = !{i64 4988}
!10 = !{i64 5004}
!11 = !{i64 5020}
!12 = !{i64 5036}
!13 = !{i64 5052}
!14 = !{i64 5068}
!15 = !{i64 5084}
!16 = !{i64 5100}
!17 = !{i64 5116}
!18 = !{i64 5132}
!19 = !{i64 5148}
!20 = !{i64 5164}
!21 = !{i64 5180}
!22 = !{i64 5196}
!23 = !{i64 5212}
!24 = !{i64 5228}
!25 = !{i64 5244}
!26 = !{i64 5260}
!27 = !{i64 5276}
!28 = !{i64 5292}
!29 = !{i64 5308}
!30 = !{i64 5324}
!31 = !{i64 5340}
!32 = !{i64 5356}
!33 = !{i64 5372}
!34 = !{i64 5388}
!35 = !{i64 5404}
!36 = !{i64 5420}
!37 = !{i64 5436}
!38 = !{i64 5452}
!39 = !{i64 5468}
!40 = !{i64 5484}
!41 = !{i64 5500}
!42 = !{i64 5516}
!43 = !{i64 5532}
!44 = !{i64 5548}
!45 = !{i64 5564}
!46 = !{i64 5580}
!47 = !{i64 5596}
!48 = !{i64 5612}
!49 = !{i64 5628}
!50 = !{i64 5644}
!51 = !{i64 5660}
!52 = !{i64 5676}
!53 = !{i64 5692}
!54 = !{i64 5708}
!55 = !{i64 5724}
!56 = !{i64 5740}
!57 = !{i64 5756}
!58 = !{i64 5772}
!59 = !{i64 5788}
!60 = !{i64 5804}
!61 = !{i64 5820}
!62 = !{i64 5836}
!63 = !{i64 5900}
!64 = !{i64 5904}
!65 = !{i64 5916}
!66 = !{i64 5920}
!67 = !{i64 5984}
!68 = !{i64 5996}
!69 = !{i64 6000}
!70 = !{i64 6008}
!71 = !{i64 6012}
!72 = !{i64 6016}
!73 = !{i64 6020}
!74 = !{i64 6076}
!75 = !{i64 6136}
!76 = !{i64 6144}
!77 = !{i64 6160}
!78 = !{i64 6164}
!79 = !{i64 6172}
!80 = !{i64 6176}
!81 = !{i64 6184}
!82 = !{i64 6188}
!83 = !{i64 6192}
!84 = !{i64 6200}
!85 = !{i64 6212}
!86 = !{i64 6224}
!87 = !{i64 6256}
!88 = !{i64 6264}
!89 = !{i64 6276}
!90 = !{i64 6304}
!91 = !{i64 6324}
!92 = !{i64 6356}
!93 = !{i64 6372}
!94 = !{i64 6428}
!95 = !{i64 6460}
!96 = !{i64 6480}
!97 = !{i64 6504}
!98 = !{i64 6520}
!99 = !{i64 6528}
!100 = !{i64 6540}
!101 = !{i64 6564}
!102 = !{i64 6588}
!103 = !{i64 6620}
!104 = !{i64 6632}
!105 = !{i64 6672}
!106 = !{i64 6692}
!107 = !{i64 6724}
!108 = !{i64 6740}
!109 = !{i64 6756}
!110 = !{i64 6760}
!111 = !{i64 6788}
!112 = !{i64 6828}
!113 = !{i64 6844}
!114 = !{i64 6900}
!115 = !{i64 6936}
!116 = !{i64 6964}
!117 = !{i64 6996}
!118 = !{i64 7016}
!119 = !{i64 7040}
!120 = !{i64 7056}
!121 = !{i64 7068}
!122 = !{i64 7092}
!123 = !{i64 7108}
!124 = !{i64 7128}
!125 = !{i64 7156}
!126 = !{i64 7176}
!127 = !{i64 7180}
!128 = !{i64 7216}
!129 = !{i64 7232}
!130 = !{i64 7240}
!131 = !{i64 7244}
!132 = !{i64 7248}
!133 = !{i64 7256}
!134 = !{i64 7284}
!135 = !{i64 7304}
!136 = !{i64 7312}
!137 = !{i64 7316}
!138 = !{i64 7344}
!139 = !{i64 7356}
!140 = !{i64 7380}
!141 = !{i64 7392}
!142 = !{i64 7404}
!143 = !{i64 7420}
!144 = !{i64 7444}
!145 = !{i64 7460}
!146 = !{i64 7476}
!147 = !{i64 7480}
!148 = !{i64 7520}
!149 = !{i64 7532}
!150 = !{i64 7564}
!151 = !{i64 7584}
!152 = !{i64 7604}
!153 = !{i64 7612}
!154 = !{i64 7616}
!155 = !{i64 7628}
!156 = !{i64 7640}
!157 = !{i64 7648}
!158 = !{i64 7664}
!159 = !{i64 7672}
!160 = !{i64 7688}
!161 = !{i64 7692}
!162 = !{i64 7700}
!163 = !{i64 7708}
!164 = !{i64 7732}
!165 = !{i64 7748}
!166 = !{i64 7752}
!167 = !{i64 7764}
!168 = !{i64 7808}
!169 = !{i64 7828}
!170 = !{i64 7836}
!171 = !{i64 7840}
!172 = !{i64 7864}
!173 = !{i64 7876}
!174 = !{i64 7912}
!175 = !{i64 7916}
!176 = !{i64 7944}
!177 = !{i64 7956}
!178 = !{i64 7868}
!179 = !{i64 7972}
!180 = !{i64 7984}
!181 = !{i64 7988}
!182 = !{i64 7992}
!183 = !{i64 8004}
!184 = !{i64 8020}
!185 = !{i64 8036}
!186 = !{i64 8052}
!187 = !{i64 8060}
!188 = !{i64 8064}
!189 = !{i64 8096}
!190 = !{i64 8128}
!191 = !{i64 8132}
!192 = !{i64 8140}
!193 = !{i64 8148}
!194 = !{i64 8156}
!195 = !{i64 8172}
!196 = !{i64 8196}
!197 = !{i64 8200}
!198 = !{i64 8240}
!199 = !{i64 8248}
!200 = !{i64 8228}
!201 = !{i64 8280}
!202 = !{i64 8284}
!203 = !{i64 8292}
!204 = !{i64 8304}
!205 = !{i64 8340}
!206 = !{i64 8352}
!207 = !{i64 8408}
!208 = !{i64 8420}
!209 = !{i64 8476}
!210 = !{i64 8488}
!211 = !{i64 8532}
!212 = !{i64 8552}
!213 = !{i64 8572}
!214 = !{i64 8576}
!215 = !{i64 8592}
!216 = !{i64 8596}
!217 = !{i64 8612}
!218 = !{i64 8616}
!219 = !{i64 8632}
!220 = !{i64 8636}
!221 = !{i64 8652}
!222 = !{i64 8656}
!223 = !{i64 8672}
!224 = !{i64 8676}
!225 = !{i64 8692}
!226 = !{i64 8696}
!227 = !{i64 8712}
!228 = !{i64 8716}
!229 = !{i64 8732}
!230 = !{i64 8736}
!231 = !{i64 8752}
!232 = !{i64 8756}
!233 = !{i64 8772}
!234 = !{i64 8776}
!235 = !{i64 8792}
!236 = !{i64 8796}
!237 = !{i64 8812}
!238 = !{i64 8820}
!239 = !{i64 8824}
!240 = !{i64 8856}
!241 = !{i64 8872}
!242 = !{i64 8876}
!243 = !{i64 8884}
!244 = !{i64 8888}
!245 = !{i64 8896}
!246 = !{i64 8904}
!247 = !{i64 8916}
!248 = !{i64 8928}
!249 = !{i64 8944}
!250 = !{i64 8968}
!251 = !{i64 8984}
!252 = !{i64 9000}
!253 = !{i64 9028}
!254 = !{i64 9032}
!255 = !{i64 9096}
!256 = !{i64 9116}
!257 = !{i64 9124}
!258 = !{i64 9128}
!259 = !{i64 9148}
!260 = !{i64 9160}
!261 = !{i64 9164}
!262 = !{i64 9188}
!263 = !{i64 9212}
!264 = !{i64 9220}
!265 = !{i64 9236}
!266 = !{i64 9248}
!267 = !{i64 9252}
!268 = !{i64 9272}
!269 = !{i64 9276}
!270 = !{i64 9280}
!271 = !{i64 9292}
!272 = !{i64 9304}
!273 = !{i64 9332}
!274 = !{i64 9360}
!275 = !{i64 9376}
!276 = !{i64 9392}
!277 = !{i64 9396}
!278 = !{i64 9408}
!279 = !{i64 9412}
!280 = !{i64 9416}
!281 = !{i64 9420}
!282 = !{i64 9440}
!283 = !{i64 9452}
!284 = !{i64 9456}
!285 = !{i64 9480}
!286 = !{i64 9488}
!287 = !{i64 9492}
!288 = !{i64 9528}
!289 = !{i64 9544}
!290 = !{i64 9552}
!291 = !{i64 9560}
!292 = !{i64 9568}
!293 = !{i64 9572}
!294 = !{i64 9580}
!295 = !{i64 9588}
!296 = !{i64 9604}
!297 = !{i64 9608}
!298 = !{i64 9612}
!299 = !{i64 9616}
!300 = !{i64 9624}
!301 = !{i64 9644}
!302 = !{i64 9652}
!303 = !{i64 9668}
!304 = !{i64 9680}
!305 = !{i64 9688}
!306 = !{i64 9692}
!307 = !{i64 9716}
!308 = !{i64 9728}
!309 = !{i64 9732}
!310 = !{i64 9760}
!311 = !{i64 9776}
!312 = !{i64 9780}
!313 = !{i64 9784}
!314 = !{i64 9796}
!315 = !{i64 9808}
!316 = !{i64 9832}
!317 = !{i64 9840}
!318 = !{i64 9864}
!319 = !{i64 9868}
!320 = !{i64 9872}
!321 = !{i64 9884}
!322 = !{i64 9896}
!323 = !{i64 9908}
!324 = !{i64 9912}
!325 = !{i64 9940}
!326 = !{i64 9976}
!327 = !{i64 9988}
!328 = !{i64 9996}
!329 = !{i64 10000}
!330 = !{i64 10036}
!331 = !{i64 10048}
!332 = !{i64 10052}
!333 = !{i64 10076}
!334 = !{i64 10092}
!335 = !{i64 10104}
!336 = !{i64 10108}
!337 = !{i64 10140}
!338 = !{i64 10152}
!339 = !{i64 10156}
!340 = !{i64 10188}
!341 = !{i64 10200}
!342 = !{i64 10204}
!343 = !{i64 10192}
!344 = !{i64 10236}
!345 = !{i64 10244}
!346 = !{i64 10260}
!347 = !{i64 10276}
!348 = !{i64 10288}
!349 = !{i64 10304}
!350 = !{i64 10320}
!351 = !{i64 10340}
!352 = !{i64 10352}
!353 = !{i64 10356}
!354 = !{i64 10380}
!355 = !{i64 10384}
!356 = !{i64 10388}
!357 = !{i64 10420}
!358 = !{i64 10424}
!359 = !{i64 10428}
!360 = !{i64 10452}
!361 = !{i64 10460}
!362 = !{i64 10492}
!363 = !{i64 10516}
!364 = !{i64 10532}
!365 = !{i64 10504}
!366 = !{i64 10544}
!367 = !{i64 10584}
!368 = !{i64 10588}
!369 = !{i64 10592}
!370 = !{i64 10616}
!371 = !{i64 10624}
!372 = !{i64 10644}
!373 = !{i64 10656}
!374 = !{i64 10680}
!375 = !{i64 10696}
!376 = !{i64 10668}
!377 = !{i64 10708}
!378 = !{i64 10720}
!379 = !{i64 10724}
!380 = !{i64 10736}
!381 = !{i64 10740}
!382 = !{i64 10776}
!383 = !{i64 10788}
!384 = !{i64 10800}
!385 = !{i64 10816}
!386 = !{i64 10836}
!387 = !{i64 10848}
!388 = !{i64 10856}
!389 = !{i64 10868}
!390 = !{i64 10876}
!391 = !{i64 10896}
!392 = !{i64 10900}
!393 = !{i64 10916}
!394 = !{i64 10920}
!395 = !{i64 10936}
!396 = !{i64 10940}
!397 = !{i64 10956}
!398 = !{i64 10960}
!399 = !{i64 10976}
!400 = !{i64 10980}
!401 = !{i64 10996}
!402 = !{i64 11000}
!403 = !{i64 11016}
!404 = !{i64 11020}
!405 = !{i64 11036}
!406 = !{i64 11044}
!407 = !{i64 11092}
!408 = !{i64 11104}
!409 = !{i64 11120}
!410 = !{i64 11136}
!411 = !{i64 11140}
!412 = !{i64 11164}
!413 = !{i64 11184}
!414 = !{i64 11196}
!415 = !{i64 11216}
!416 = !{i64 11224}
!417 = !{i64 11232}
!418 = !{i64 11244}
!419 = !{i64 11256}
!420 = !{i64 11272}
!421 = !{i64 11288}
!422 = !{i64 11296}
!423 = !{i64 11300}
!424 = !{i64 11316}
!425 = !{i64 11320}
!426 = !{i64 11328}
!427 = !{i64 11348}
!428 = !{i64 11356}
!429 = !{i64 11372}
!430 = !{i64 11376}
!431 = !{i64 11380}
!432 = !{i64 11392}
!433 = !{i64 11412}
!434 = !{i64 11416}
!435 = !{i64 11440}
!436 = !{i64 11448}
!437 = !{i64 11508}
!438 = !{i64 11524}
!439 = !{i64 11536}
!440 = !{i64 11544}
!441 = !{i64 11560}
!442 = !{i64 11564}
!443 = !{i64 11640}
!444 = !{i64 11648}
!445 = !{i64 11652}
!446 = !{i64 11680}
!447 = !{i64 11692}
!448 = !{i64 11700}
!449 = !{i64 11624}
!450 = !{i64 11752}
!451 = !{i64 11764}
!452 = !{i64 11772}
!453 = !{i64 11776}
!454 = !{i64 11824}
!455 = !{i64 11844}
!456 = !{i64 11864}
!457 = !{i64 11868}
!458 = !{i64 11876}
!459 = !{i64 11888}
!460 = !{i64 11912}
!461 = !{i64 11916}
!462 = !{i64 11932}
!463 = !{i64 11940}
!464 = !{i64 11944}
!465 = !{i64 11956}
!466 = !{i64 11980}
!467 = !{i64 12004}
!468 = !{i64 12012}
!469 = !{i64 12040}
!470 = !{i64 12080}
!471 = !{i64 12016}
!472 = !{i64 12020}
!473 = !{i64 12044}
!474 = !{i64 12056}
!475 = !{i64 12068}
!476 = !{i64 12124}
!477 = !{i64 12128}
!478 = !{i64 12136}
!479 = !{i64 12148}
!480 = !{i64 12112}
!481 = !{i64 12164}
!482 = !{i64 12172}
!483 = !{i64 12176}
!484 = !{i64 12188}
!485 = !{i64 12204}
!486 = !{i64 12208}
!487 = !{i64 12216}
!488 = !{i64 12232}
!489 = !{i64 12252}
!490 = !{i64 12260}
!491 = !{i64 12288}
!492 = !{i64 12300}
!493 = !{i64 12304}
!494 = !{i64 12328}
!495 = !{i64 12340}
!496 = !{i64 12356}
!497 = !{i64 12364}
!498 = !{i64 12368}
!499 = !{i64 12380}
!500 = !{i64 12396}
!501 = !{i64 12424}
!502 = !{i64 12440}
!503 = !{i64 12456}
!504 = !{i64 12464}
!505 = !{i64 12476}
!506 = !{i64 12484}
!507 = !{i64 12500}
!508 = !{i64 12504}
!509 = !{i64 12520}
!510 = !{i64 12528}
!511 = !{i64 12552}
!512 = !{i64 12556}
!513 = !{i64 12596}
!514 = !{i64 12600}
!515 = !{i64 12612}
!516 = !{i64 12624}
!517 = !{i64 12636}
!518 = !{i64 12640}
!519 = !{i64 12648}
!520 = !{i64 12656}
!521 = !{i64 12668}
!522 = !{i64 12680}
!523 = !{i64 12696}
!524 = !{i64 12708}
!525 = !{i64 12716}
!526 = !{i64 12720}
!527 = !{i64 12772}
!528 = !{i64 12804}
!529 = !{i64 12856}
!530 = !{i64 12924}
!531 = !{i64 12948}
!532 = !{i64 12988}
!533 = !{i64 13000}
!534 = !{i64 13012}
!535 = !{i64 13016}
!536 = !{i64 13032}
!537 = !{i64 13040}
!538 = !{i64 13044}
!539 = !{i64 13056}
!540 = !{i64 13092}
!541 = !{i64 13116}
!542 = !{i64 13124}
!543 = !{i64 13152}
!544 = !{i64 13192}
!545 = !{i64 13128}
!546 = !{i64 13132}
!547 = !{i64 13156}
!548 = !{i64 13168}
!549 = !{i64 13180}
!550 = !{i64 13224}
!551 = !{i64 13228}
!552 = !{i64 13240}
!553 = !{i64 13248}
!554 = !{i64 13252}
!555 = !{i64 13276}
!556 = !{i64 13284}
!557 = !{i64 13288}
!558 = !{i64 13292}
!559 = !{i64 13300}
!560 = !{i64 13312}
!561 = !{i64 13332}
!562 = !{i64 13352}
!563 = !{i64 13372}
!564 = !{i64 13380}
!565 = !{i64 13396}
!566 = !{i64 13416}
!567 = !{i64 13424}
!568 = !{i64 13452}
!569 = !{i64 13460}
!570 = !{i64 13468}
!571 = !{i64 13480}
!572 = !{i64 13484}
!573 = !{i64 13496}
!574 = !{i64 13508}
!575 = !{i64 13520}
!576 = !{i64 13528}
!577 = !{i64 13540}
!578 = !{i64 13544}
!579 = !{i64 13548}
!580 = !{i64 13552}
!581 = !{i64 13568}
!582 = !{i64 13572}
!583 = !{i64 13592}
!584 = !{i64 13596}
!585 = !{i64 13612}
!586 = !{i64 13624}
!587 = !{i64 13636}
!588 = !{i64 13676}
!589 = !{i64 13788}
!590 = !{i64 13692}
!591 = !{i64 13708}
!592 = !{i64 13736}
!593 = !{i64 14000}
!594 = !{i64 13792}
!595 = !{i64 13796}
!596 = !{i64 13808}
!597 = !{i64 13824}
!598 = !{i64 13828}
!599 = !{i64 13868}
!600 = !{i64 13872}
!601 = !{i64 13876}
!602 = !{i64 13888}
!603 = !{i64 13856}
!604 = !{i64 13904}
!605 = !{i64 13912}
!606 = !{i64 13924}
!607 = !{i64 13936}
!608 = !{i64 13780}
!609 = !{i64 13988}
!610 = !{i64 13992}
!611 = !{i64 14004}
!612 = !{i64 14016}
!613 = !{i64 14024}
!614 = !{i64 14036}
!615 = !{i64 14044}
!616 = !{i64 14056}
!617 = !{i64 14068}
!618 = !{i64 14072}
!619 = !{i64 14084}
!620 = !{i64 13976}
!621 = !{i64 14100}
!622 = !{i64 14108}
!623 = !{i64 14164}
!624 = !{i64 14136}
!625 = !{i64 14180}
!626 = !{i64 14192}
!627 = !{i64 14236}
!628 = !{i64 14252}
!629 = !{i64 14260}
!630 = !{i64 14280}
!631 = !{i64 14284}
!632 = !{i64 14300}
!633 = !{i64 14304}
!634 = !{i64 14320}
!635 = !{i64 14324}
!636 = !{i64 14340}
!637 = !{i64 14344}
!638 = !{i64 14360}
!639 = !{i64 14364}
!640 = !{i64 14380}
!641 = !{i64 14384}
!642 = !{i64 14400}
!643 = !{i64 14408}
!644 = !{i64 14436}
!645 = !{i64 14440}
!646 = !{i64 14444}
!647 = !{i64 14460}
!648 = !{i64 14464}
!649 = !{i64 14472}
!650 = !{i64 14476}
!651 = !{i64 14480}
!652 = !{i64 14484}
!653 = !{i64 14488}
!654 = !{i64 14492}
!655 = !{i64 14500}
!656 = !{i64 14504}
!657 = !{i64 14508}
!658 = !{i64 14512}
!659 = !{i64 14528}
!660 = !{i64 14536}
!661 = !{i64 14540}
!662 = !{i64 14560}
!663 = !{i64 14544}
!664 = !{i64 14548}
!665 = !{i64 14564}
!666 = !{i64 14568}
!667 = !{i64 14556}
!668 = !{i64 14572}
!669 = !{i64 14592}
