source_filename = "test"
target datalayout = "e-m:e-i64:64-i128:128-n32:64-S128"

%sockaddr = type { i64, [14 x i8] }
%_IO_FILE = type { i32 }
%stat = type { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }
%shmid_ds = type { %ipc_perm, i32, i64, i64, i64, i32, i32, i16, i16, i64*, i64* }
%ipc_perm = type { i32, i32, i32, i32, i32, i32, i16 }

@global_var_14dd0 = local_unnamed_addr global i64 5072
@global_var_14dd8 = local_unnamed_addr global i64 5072
@global_var_14de0 = local_unnamed_addr global i64 5072
@global_var_14de8 = local_unnamed_addr global i64 5072
@global_var_14df0 = local_unnamed_addr global i64 5072
@global_var_14df8 = local_unnamed_addr global i64 5072
@global_var_14e00 = local_unnamed_addr global i64 5072
@global_var_14e08 = local_unnamed_addr global i64 5072
@global_var_14e10 = local_unnamed_addr global i64 5072
@global_var_14e18 = local_unnamed_addr global i64 5072
@global_var_14e20 = local_unnamed_addr global i64 5072
@global_var_14e28 = local_unnamed_addr global i64 5072
@global_var_14e30 = local_unnamed_addr global i64 5072
@global_var_14e38 = local_unnamed_addr global i64 5072
@global_var_14e40 = local_unnamed_addr global i64 5072
@global_var_14e48 = local_unnamed_addr global i64 5072
@global_var_14e50 = local_unnamed_addr global i64 5072
@global_var_14e58 = local_unnamed_addr global i64 5072
@global_var_14e60 = local_unnamed_addr global i64 5072
@global_var_14e68 = local_unnamed_addr global i64 5072
@global_var_14e70 = local_unnamed_addr global i64 5072
@global_var_14e78 = local_unnamed_addr global i64 5072
@global_var_14e80 = local_unnamed_addr global i64 5072
@global_var_14e88 = local_unnamed_addr global i64 5072
@global_var_14e90 = local_unnamed_addr global i64 5072
@global_var_14e98 = local_unnamed_addr global i64 5072
@global_var_14ea0 = local_unnamed_addr global i64 5072
@global_var_14ea8 = local_unnamed_addr global i64 5072
@global_var_14eb0 = local_unnamed_addr global i64 5072
@global_var_14eb8 = local_unnamed_addr global i64 5072
@global_var_14ec0 = local_unnamed_addr global i64 5072
@global_var_14ec8 = local_unnamed_addr global i64 5072
@global_var_14ed0 = local_unnamed_addr global i64 5072
@global_var_14ed8 = local_unnamed_addr global i64 5072
@global_var_14ee0 = local_unnamed_addr global i64 5072
@global_var_14ee8 = local_unnamed_addr global i64 5072
@global_var_14ef0 = local_unnamed_addr global i64 5072
@global_var_14ef8 = local_unnamed_addr global i64 5072
@global_var_14f00 = local_unnamed_addr global i64 5072
@global_var_14f08 = local_unnamed_addr global i64 5072
@global_var_14f10 = local_unnamed_addr global i64 5072
@global_var_14f18 = local_unnamed_addr global i64 5072
@global_var_14f20 = local_unnamed_addr global i64 5072
@global_var_14f28 = local_unnamed_addr global i64 5072
@global_var_14f30 = local_unnamed_addr global i64 5072
@global_var_14f38 = local_unnamed_addr global i64 5072
@global_var_14f40 = local_unnamed_addr global i64 5072
@global_var_14f48 = local_unnamed_addr global i64 5072
@global_var_14f50 = local_unnamed_addr global i64 5072
@global_var_14f58 = local_unnamed_addr global i64 5072
@global_var_14f60 = local_unnamed_addr global i64 5072
@global_var_14f68 = local_unnamed_addr global i64 5072
@global_var_14f70 = local_unnamed_addr global i64 5072
@global_var_14f78 = local_unnamed_addr global i64 5072
@global_var_14f80 = local_unnamed_addr global i64 5072
@global_var_14f88 = local_unnamed_addr global i64 5072
@global_var_14f90 = local_unnamed_addr global i64 5072
@global_var_14f98 = local_unnamed_addr global i64 5072
@global_var_14fa0 = local_unnamed_addr global i64 5072
@global_var_14fa8 = local_unnamed_addr global i64 5072
@global_var_14fb0 = local_unnamed_addr global i64 5072
@global_var_14fb8 = local_unnamed_addr global i64 5072
@global_var_14fc0 = local_unnamed_addr global i64 5072
@global_var_14ff0 = local_unnamed_addr global i64 14764
@global_var_15010 = global i64 0
@global_var_14fd0 = local_unnamed_addr global i64 0
@global_var_14ff8 = local_unnamed_addr global i64 0
@global_var_1934 = local_unnamed_addr constant i64 4107355841630306336
@global_var_14fe8 = local_unnamed_addr global i64 0
@global_var_3a60 = local_unnamed_addr constant [9 x i8] c"HelloLib\00"
@global_var_3a70 = local_unnamed_addr constant [4 x i8] c"def\00"
@global_var_3a78 = local_unnamed_addr constant [4 x i8] c"abc\00"
@global_var_3a80 = local_unnamed_addr constant [4 x i8] c"xyz\00"
@global_var_3a88 = local_unnamed_addr constant [4 x i8] c"aaa\00"
@global_var_3a90 = local_unnamed_addr constant [4 x i8] c"bbb\00"
@global_var_3a98 = constant [13 x i8] c"BinBench2025\00"
@global_var_3aa8 = constant i64 85899345930
@global_var_3ab0 = local_unnamed_addr constant i64 171798691870
@global_var_3ab8 = local_unnamed_addr constant i64 50
@global_var_3ac0 = local_unnamed_addr constant i64 8589934593
@global_var_3ac8 = local_unnamed_addr constant i64 3
@global_var_3ad0 = local_unnamed_addr constant i64 8589934593
@global_var_3ad8 = local_unnamed_addr constant i64 4
@global_var_3ae0 = constant [21 x i8] c"Value: %d, Name: %s\0A\00"
@global_var_3af8 = constant [5 x i8] c"Test\00"
@global_var_3b00 = constant [6 x i8] c"%d,%d\00"
@global_var_3b08 = local_unnamed_addr constant [8 x i8] c"123,456\00"
@global_var_3b18 = local_unnamed_addr constant [12 x i8] c"/etc/passwd\00"
@global_var_3b28 = constant [19 x i8] c"BinBench Test Data\00"
@global_var_1f14 = local_unnamed_addr constant i64 1441152001328021536
@global_var_3b48 = local_unnamed_addr constant [23 x i8] c"/tmp/binbench_test.tmp\00"
@global_var_3b60 = local_unnamed_addr constant [20 x i8] c"Hello BinBench Test\00"
@global_var_3b78 = local_unnamed_addr constant [6 x i8] c"Bench\00"
@global_var_3d28 = local_unnamed_addr constant [10 x i8] c"/bin/true\00"
@global_var_3d38 = constant [10 x i8] c"HelloPipe\00"
@global_var_27ac = local_unnamed_addr constant i64 1441152031392792608
@global_var_27c4 = local_unnamed_addr constant i64 8719025917139091520
@global_var_2804 = local_unnamed_addr constant i64 1441151936903512128
@global_var_2828 = local_unnamed_addr constant i64 1441151898248806496
@global_var_3d48 = constant [18 x i8] c"/tmp/binbench_shm\00"
@global_var_3d60 = local_unnamed_addr constant [13 x i8] c"SharedMemory\00"
@global_var_3d65 = local_unnamed_addr constant [8 x i8] c"dMemory\00"
@global_var_3e80 = local_unnamed_addr constant i64 20
@global_var_3e90 = local_unnamed_addr constant i64 0
@global_var_15028 = global i64 0
@global_var_301c = local_unnamed_addr constant i64 1441152048572661792
@global_var_15058 = global i64 0
@global_var_15088 = global i64 0
@global_var_3254 = local_unnamed_addr constant i64 1441151936903512096
@global_var_3490 = local_unnamed_addr constant i64 1441152087227367456
@global_var_3e98 = constant [10 x i8] c"Thread-%d\00"
@global_var_37ac = local_unnamed_addr constant i64 1441152181716647968
@0 = external global i32
@global_var_15000 = external global i8*
@global_var_150c4 = local_unnamed_addr global i32 0
@1 = internal constant [2 x i8] c"r\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i64 0, i64 0)
@3 = internal constant [3 x i8] c"w+\00"
@4 = constant i8* getelementptr inbounds ([3 x i8], [3 x i8]* @3, i64 0, i64 0)
@5 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\87\E5\87\86\E5\BA\93\E5\87\BD\E6\95\B0\E8\B0\83\E7\94\A8 ===\00"
@global_var_3b80 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @5, i64 0, i64 0)
@6 = internal constant [27 x i8] c"LIB-L1-01: %d (\E6\9C\9F\E6\9C\9B: 8)\0A\00"
@global_var_3ba8 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @6, i64 0, i64 0)
@7 = internal constant [27 x i8] c"LIB-L1-02: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_3bc8 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @7, i64 0, i64 0)
@8 = internal constant [28 x i8] c"LIB-L1-03: %d (\E6\9C\9F\E6\9C\9B: 12)\0A\00"
@global_var_3be8 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i64 0, i64 0)
@9 = internal constant [28 x i8] c"LIB-L1-04: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_3c08 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"LIB-L1-05: %d (\E6\9C\9F\E6\9C\9B: -1)\0A\00"
@global_var_3c28 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"LIB-L1-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_3c48 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [29 x i8] c"LIB-L1-07: %d (\E6\9C\9F\E6\9C\9B: 579)\0A\00"
@global_var_3c68 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i64 0, i64 0)
@13 = internal constant [28 x i8] c"LIB-L1-08: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3c88 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @13, i64 0, i64 0)
@14 = internal constant [28 x i8] c"LIB-L1-09: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3ca8 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @14, i64 0, i64 0)
@15 = internal constant [28 x i8] c"LIB-L1-10: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_3cc8 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @15, i64 0, i64 0)
@16 = internal constant [27 x i8] c"LIB-L1-11: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_3ce8 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @16, i64 0, i64 0)
@17 = internal constant [28 x i8] c"LIB-L1-12: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_3d08 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i64 0, i64 0)
@global_var_3b6 = global i32 0
@global_var_1000 = global i32 0
@global_var_15018 = local_unnamed_addr global i32* null
@global_var_1501c = global i32* null
@global_var_2000 = constant i64* (i64*)* inttoptr (i64 -504372375899340763 to i64* (i64*)*)
@global_var_3e8 = global i32 0
@global_var_7d0 = global i32 185
@18 = internal constant [27 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\B3\BB\E7\BB\9F\E8\B0\83\E7\94\A8 ===\00"
@global_var_3d70 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @18, i64 0, i64 0)
@19 = internal constant [28 x i8] c"SYS-L3-01: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3d90 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @19, i64 0, i64 0)
@20 = internal constant [28 x i8] c"SYS-L3-02: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3db0 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @20, i64 0, i64 0)
@21 = internal constant [28 x i8] c"SYS-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3dd0 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @21, i64 0, i64 0)
@22 = internal constant [28 x i8] c"SYS-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3df0 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @22, i64 0, i64 0)
@23 = internal constant [28 x i8] c"SYS-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3e10 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @23, i64 0, i64 0)
@24 = internal constant [28 x i8] c"SYS-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3e30 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @24, i64 0, i64 0)
@25 = internal constant [28 x i8] c"SYS-L3-07: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3e50 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @25, i64 0, i64 0)
@global_var_3e70 = local_unnamed_addr constant fp128 0xL00000000000000003BED0000000A0000
@global_var_15020 = local_unnamed_addr global i32* null
@global_var_15021 = global i32 0
@global_var_150b8 = local_unnamed_addr global i32* null
@global_var_150bc = local_unnamed_addr global i32* null
@global_var_150c0 = local_unnamed_addr global i32 0
@26 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\BA\BF\E7\A8\8B\E4\B8\8E\E5\B9\B6\E5\8F\91 ===\00"
@global_var_3ea8 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @26, i64 0, i64 0)
@27 = internal constant [28 x i8] c"THR-L3-01: %d (\E6\9C\9F\E6\9C\9B: 49)\0A\00"
@global_var_3ec8 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @27, i64 0, i64 0)
@28 = internal constant [29 x i8] c"THR-L3-02: %d (\E6\9C\9F\E6\9C\9B: 465)\0A\00"
@global_var_3ee8 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @28, i64 0, i64 0)
@29 = internal constant [28 x i8] c"THR-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3f08 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @29, i64 0, i64 0)
@30 = internal constant [28 x i8] c"THR-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3f28 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @30, i64 0, i64 0)
@31 = internal constant [28 x i8] c"THR-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3f48 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @31, i64 0, i64 0)
@32 = internal constant [28 x i8] c"THR-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3f68 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @32, i64 0, i64 0)
@global_var_3b10 = constant [2 x i8] c"r\00"
@global_var_3b40 = constant [3 x i8] c"w+\00"

define i64 @_init(i64 %arg1) local_unnamed_addr {
dec_label_pc_13b0:
  %0 = call i64 @call_weak_fn(), !insn.addr !0
  ret i64 %0, !insn.addr !1
}

define i64* @function_13f0(i64* %dest, i64* %src, i32 %n) local_unnamed_addr {
dec_label_pc_13f0:
  %0 = call i64* @memcpy(i64* %dest, i64* %src, i32 %n), !insn.addr !2
  ret i64* %0, !insn.addr !2
}

define void @function_1400(i32 %status) local_unnamed_addr {
dec_label_pc_1400:
  call void @_exit(i32 %status), !insn.addr !3
  ret void, !insn.addr !3
}

define i32 @function_1410(i8* %s) local_unnamed_addr {
dec_label_pc_1410:
  %0 = call i32 @strlen(i8* %s), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i32 @function_1420(i32 %sig) local_unnamed_addr {
dec_label_pc_1420:
  %0 = call i32 @raise(i32 %sig), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define i32 @function_1430(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_1430:
  %0 = call i32 @__libc_start_main(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i32 @function_1440(i8* %path, i8* %arg, ...) local_unnamed_addr {
dec_label_pc_1440:
  %0 = call i32 (i8*, i8*, ...) @execl(i8* %path, i8* %arg), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @function_1450(i32 %fd, i32 %n) local_unnamed_addr {
dec_label_pc_1450:
  %0 = call i32 @listen(i32 %fd, i32 %n), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i32 @function_1460(i64* %shmaddr) local_unnamed_addr {
dec_label_pc_1460:
  %0 = call i32 @shmdt(i64* %shmaddr), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @function_1470(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_1470:
  %0 = call i32 @bind(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define void @function_1480(i64* %d) local_unnamed_addr {
dec_label_pc_1480:
  call void @__cxa_finalize(i64* %d), !insn.addr !11
  ret void, !insn.addr !11
}

define i32 @function_1490([2 x i32] %pipedes) local_unnamed_addr {
dec_label_pc_1490:
  %0 = call i32 @pipe([2 x i32] %pipedes), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define i32 @function_14a0() local_unnamed_addr {
dec_label_pc_14a0:
  %0 = call i32 @fork(), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define i32 @function_14b0(i8* %s, i32 %maxlen, i8* %format, ...) local_unnamed_addr {
dec_label_pc_14b0:
  %0 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %s, i32 %maxlen, i8* %format), !insn.addr !14
  ret i32 %0, !insn.addr !14
}

define i32 @function_14c0(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_14c0:
  %0 = call i32 @fileno(%_IO_FILE* %stream), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define void (i32)* @function_14d0(i32 %sig, void (i32)* %handler) local_unnamed_addr {
dec_label_pc_14d0:
  %0 = call void (i32)* @signal(i32 %sig, void (i32)* %handler), !insn.addr !16
  ret void (i32)* %0, !insn.addr !16
}

define i32 @function_14e0(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_14e0:
  %0 = call i32 @fclose(%_IO_FILE* %stream), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define %_IO_FILE* @function_14f0(i8* %filename, i8* %modes) local_unnamed_addr {
dec_label_pc_14f0:
  %0 = call %_IO_FILE* @fopen(i8* %filename, i8* %modes), !insn.addr !18
  ret %_IO_FILE* %0, !insn.addr !18
}

define i64* @function_1500(i32 %size) local_unnamed_addr {
dec_label_pc_1500:
  %0 = call i64* @malloc(i32 %size), !insn.addr !19
  ret i64* %0, !insn.addr !19
}

define i32 @function_1510(i32 %fd, i32 %level, i32 %optname, i64* %optval, i32 %optlen) local_unnamed_addr {
dec_label_pc_1510:
  %0 = call i32 @setsockopt(i32 %fd, i32 %level, i32 %optname, i64* %optval, i32 %optlen), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i32 @function_1520(i8* %file, i32 %oflag, ...) local_unnamed_addr {
dec_label_pc_1520:
  %0 = call i32 (i8*, i32, ...) @open(i8* %file, i32 %oflag), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define i32 @function_1530(i64* %cond) local_unnamed_addr {
dec_label_pc_1530:
  %0 = call i32 @pthread_cond_signal(i64* %cond), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define i64* @function_1540(i64* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_1540:
  %0 = call i64* @memset(i64* %s, i32 %c, i32 %n), !insn.addr !23
  ret i64* %0, !insn.addr !23
}

define i64* @function_1550(i32 %shmid, i64* %shmaddr, i32 %shmflg) local_unnamed_addr {
dec_label_pc_1550:
  %0 = call i64* @shmat(i32 %shmid, i64* %shmaddr, i32 %shmflg), !insn.addr !24
  ret i64* %0, !insn.addr !24
}

define i32 @function_1560(i32 %seconds) local_unnamed_addr {
dec_label_pc_1560:
  %0 = call i32 @sleep(i32 %seconds), !insn.addr !25
  ret i32 %0, !insn.addr !25
}

define i16 @function_1570(i16 %hostshort) local_unnamed_addr {
dec_label_pc_1570:
  %0 = call i16 @htons(i16 %hostshort), !insn.addr !26
  ret i16 %0, !insn.addr !26
}

define void @function_1580(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_1580:
  call void @rewind(%_IO_FILE* %stream), !insn.addr !27
  ret void, !insn.addr !27
}

define void @function_1590() local_unnamed_addr {
dec_label_pc_1590:
  call void @__stack_chk_fail(), !insn.addr !28
  ret void, !insn.addr !28
}

define i32 @function_15a0(i32 %fd) local_unnamed_addr {
dec_label_pc_15a0:
  %0 = call i32 @close(i32 %fd), !insn.addr !29
  ret i32 %0, !insn.addr !29
}

define void @function_15b0() local_unnamed_addr {
dec_label_pc_15b0:
  call void @__gmon_start__(), !insn.addr !30
  ret void, !insn.addr !30
}

define i32 @function_15c0(i8* %file, %stat* %buf) local_unnamed_addr {
dec_label_pc_15c0:
  %0 = call i32 @stat(i8* %file, %stat* %buf), !insn.addr !31
  ret i32 %0, !insn.addr !31
}

define i32 @function_15d0(i32 %fd, i64* %buf, i32 %n) local_unnamed_addr {
dec_label_pc_15d0:
  %0 = call i32 @write(i32 %fd, i64* %buf, i32 %n), !insn.addr !32
  ret i32 %0, !insn.addr !32
}

define i32 @function_15e0(i32 %type) local_unnamed_addr {
dec_label_pc_15e0:
  %0 = call i32 @__getauxval(i32 %type), !insn.addr !33
  ret i32 %0, !insn.addr !33
}

define void @function_15f0() local_unnamed_addr {
dec_label_pc_15f0:
  call void @abort(), !insn.addr !34
  ret void, !insn.addr !34
}

define i32 @function_1600(i8* %s) local_unnamed_addr {
dec_label_pc_1600:
  %0 = call i32 @puts(i8* %s), !insn.addr !35
  ret i32 %0, !insn.addr !35
}

define i32 @function_1610(i64* %s1, i64* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_1610:
  %0 = call i32 @memcmp(i64* %s1, i64* %s2, i32 %n), !insn.addr !36
  ret i32 %0, !insn.addr !36
}

define i32 @function_1620(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_1620:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !37
  ret i32 %0, !insn.addr !37
}

define i32 @function_1630(i32 %shmid, i32 %cmd, %shmid_ds* %buf) local_unnamed_addr {
dec_label_pc_1630:
  %0 = call i32 @shmctl(i32 %shmid, i32 %cmd, %shmid_ds* %buf), !insn.addr !38
  ret i32 %0, !insn.addr !38
}

define i32 @function_1640(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_1640:
  %0 = call i32 @fread(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream), !insn.addr !39
  ret i32 %0, !insn.addr !39
}

define i32 @function_1650(i8* %pathname, i32 %proj_id) local_unnamed_addr {
dec_label_pc_1650:
  %0 = call i32 @ftok(i8* %pathname, i32 %proj_id), !insn.addr !40
  ret i32 %0, !insn.addr !40
}

define void @function_1660(i64* %ptr) local_unnamed_addr {
dec_label_pc_1660:
  call void @free(i64* %ptr), !insn.addr !41
  ret void, !insn.addr !41
}

define i32 @function_1670(i32 %key, i32 %size, i32 %shmflg) local_unnamed_addr {
dec_label_pc_1670:
  %0 = call i32 @shmget(i32 %key, i32 %size, i32 %shmflg), !insn.addr !42
  ret i32 %0, !insn.addr !42
}

define i32 @function_1680(i64* %cond, i64* %mutex) local_unnamed_addr {
dec_label_pc_1680:
  %0 = call i32 @pthread_cond_wait(i64* %cond, i64* %mutex), !insn.addr !43
  ret i32 %0, !insn.addr !43
}

define i8* @function_1690(i8* %s, i32 %c) local_unnamed_addr {
dec_label_pc_1690:
  %0 = call i8* @strchr(i8* %s, i32 %c), !insn.addr !44
  ret i8* %0, !insn.addr !44
}

define i32 @function_16a0(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_16a0:
  %0 = call i32 @fwrite(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !45
  ret i32 %0, !insn.addr !45
}

define i32 @function_16b0(i32* %newthread, i64* %attr, i64* (i64*)* %start_routine, i64* %arg) local_unnamed_addr {
dec_label_pc_16b0:
  %0 = call i32 @pthread_create(i32* %newthread, i64* %attr, i64* (i64*)* %start_routine, i64* %arg), !insn.addr !46
  ret i32 %0, !insn.addr !46
}

define i32 @function_16c0(i64 %stat_loc) local_unnamed_addr {
dec_label_pc_16c0:
  %0 = call i32 @wait(i64 %stat_loc), !insn.addr !47
  ret i32 %0, !insn.addr !47
}

define i32 @function_16d0(i32 %domain, i32 %type, i32 %protocol) local_unnamed_addr {
dec_label_pc_16d0:
  %0 = call i32 @socket(i32 %domain, i32 %type, i32 %protocol), !insn.addr !48
  ret i32 %0, !insn.addr !48
}

define i8* @function_16e0(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_16e0:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !49
  ret i8* %0, !insn.addr !49
}

define i32 @function_16f0(i32 %fd, i64* %buf, i32 %nbytes) local_unnamed_addr {
dec_label_pc_16f0:
  %0 = call i32 @read(i32 %fd, i64* %buf, i32 %nbytes), !insn.addr !50
  ret i32 %0, !insn.addr !50
}

define i8* @function_1700(i8* %haystack, i8* %needle) local_unnamed_addr {
dec_label_pc_1700:
  %0 = call i8* @strstr(i8* %haystack, i8* %needle), !insn.addr !51
  ret i8* %0, !insn.addr !51
}

define i32 @function_1710(i32 %useconds) local_unnamed_addr {
dec_label_pc_1710:
  %0 = call i32 @usleep(i32 %useconds), !insn.addr !52
  ret i32 %0, !insn.addr !52
}

define i32 @function_1720(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_1720:
  %0 = call i32 (i8*, i8*, ...) @sscanf(i8* %s, i8* %format), !insn.addr !53
  ret i32 %0, !insn.addr !53
}

define i8* @function_1730(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1730:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !54
  ret i8* %0, !insn.addr !54
}

define i32 @function_1740(i8* %format, ...) local_unnamed_addr {
dec_label_pc_1740:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !55
  ret i32 %0, !insn.addr !55
}

define i32* @function_1750() local_unnamed_addr {
dec_label_pc_1750:
  %0 = call i32* @__errno_location(), !insn.addr !56
  ret i32* %0, !insn.addr !56
}

define i32 @function_1760(i32 %th, i64** %thread_return) local_unnamed_addr {
dec_label_pc_1760:
  %0 = call i32 @pthread_join(i32 %th, i64** %thread_return), !insn.addr !57
  ret i32 %0, !insn.addr !57
}

define i32 @function_1770(i32 %seconds) local_unnamed_addr {
dec_label_pc_1770:
  %0 = call i32 @alarm(i32 %seconds), !insn.addr !58
  ret i32 %0, !insn.addr !58
}

define i32 @function_1780(i32 %th) local_unnamed_addr {
dec_label_pc_1780:
  %0 = call i32 @pthread_cancel(i32 %th), !insn.addr !59
  ret i32 %0, !insn.addr !59
}

define i32 @function_1790(i64* %mutex) local_unnamed_addr {
dec_label_pc_1790:
  %0 = call i32 @pthread_mutex_lock(i64* %mutex), !insn.addr !60
  ret i32 %0, !insn.addr !60
}

define i32 @function_17a0(i32 %sysno, ...) local_unnamed_addr {
dec_label_pc_17a0:
  %0 = call i32 (i32, ...) @syscall(i32 %sysno), !insn.addr !61
  ret i32 %0, !insn.addr !61
}

define i32 @function_17b0(i64* %mutex) local_unnamed_addr {
dec_label_pc_17b0:
  %0 = call i32 @pthread_mutex_unlock(i64* %mutex), !insn.addr !62
  ret i32 %0, !insn.addr !62
}

define i32 @function_17c0(i32 %pid, i32* %stat_loc, i32 %options) local_unnamed_addr {
dec_label_pc_17c0:
  %0 = call i32 @waitpid(i32 %pid, i32* %stat_loc, i32 %options), !insn.addr !63
  ret i32 %0, !insn.addr !63
}

define i32 @function_17d0(i8* %name) local_unnamed_addr {
dec_label_pc_17d0:
  %0 = call i32 @unlink(i8* %name), !insn.addr !64
  ret i32 %0, !insn.addr !64
}

define i64 @init_have_lse_atomics(i64 %arg1) local_unnamed_addr {
dec_label_pc_1800:
  %0 = call i32 @__getauxval(i32 16), !insn.addr !65
  %1 = call i32 @__asm_ubfx(i32 %0, i32 %0, i64 8, i64 1), !insn.addr !66
  %2 = sext i32 %1 to i64, !insn.addr !66
  %3 = trunc i32 %1 to i8, !insn.addr !67
  store i8 %3, i8* inttoptr (i64 add (i64 ptrtoint (i8** @global_var_15000 to i64), i64 196) to i8*), align 4, !insn.addr !67
  ret i64 %2, !insn.addr !68
}

define i64 @_start(i64 %arg1) local_unnamed_addr {
dec_label_pc_1840:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_8 = alloca i64, align 8
  %2 = load i64, i64* @global_var_14ff0, align 8, !insn.addr !69
  %3 = trunc i64 %arg1 to i32, !insn.addr !70
  %4 = bitcast i64* %stack_var_8 to i8**, !insn.addr !70
  %5 = inttoptr i64 %1 to void ()*, !insn.addr !70
  %6 = call i32 @__libc_start_main(i64 %2, i32 %3, i8** nonnull %4, void ()* null, void ()* null, void ()* %5), !insn.addr !70
  call void @abort(), !insn.addr !71
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !71
}

define i64 @call_weak_fn() local_unnamed_addr {
dec_label_pc_1874:
  %0 = load i64, i64* inttoptr (i64 85984 to i64*), align 32, !insn.addr !72
  %1 = icmp eq i64 %0, 0, !insn.addr !73
  br i1 %1, label %dec_label_pc_1884, label %dec_label_pc_1880, !insn.addr !73

dec_label_pc_1880:                                ; preds = %dec_label_pc_1874
  call void @__gmon_start__(), !insn.addr !74
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !74

dec_label_pc_1884:                                ; preds = %dec_label_pc_1874
  ret i64 0, !insn.addr !75
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1890:
  ret i64 ptrtoint (i64* @global_var_15010 to i64), !insn.addr !76
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_18c0:
  ret i64 ptrtoint (i64* @global_var_15010 to i64), !insn.addr !77
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1900:
  %x0.0.reg2mem = alloca i64, !insn.addr !78
  %0 = load i8, i8* bitcast (i64* @global_var_15010 to i8*), align 8, !insn.addr !79
  %1 = zext i8 %0 to i64, !insn.addr !79
  %2 = icmp eq i8 %0, 0, !insn.addr !80
  store i64 %1, i64* %x0.0.reg2mem, !insn.addr !80
  br i1 %2, label %dec_label_pc_1918, label %dec_label_pc_193c, !insn.addr !80

dec_label_pc_1918:                                ; preds = %dec_label_pc_1900
  %3 = load i64, i64* inttoptr (i64 85976 to i64*), align 8, !insn.addr !81
  %4 = icmp eq i64 %3, 0, !insn.addr !82
  br i1 %4, label %dec_label_pc_1930, label %dec_label_pc_1924, !insn.addr !82

dec_label_pc_1924:                                ; preds = %dec_label_pc_1918
  %5 = load i64, i64* inttoptr (i64 add (i64 ptrtoint (i8** @global_var_15000 to i64), i64 8) to i64*), align 8, !insn.addr !83
  %6 = inttoptr i64 %5 to i64*, !insn.addr !84
  call void @__cxa_finalize(i64* %6), !insn.addr !84
  br label %dec_label_pc_1930, !insn.addr !84

dec_label_pc_1930:                                ; preds = %dec_label_pc_1924, %dec_label_pc_1918
  %7 = call i64 @deregister_tm_clones(), !insn.addr !85
  store i8 1, i8* bitcast (i64* @global_var_15010 to i8*), align 8, !insn.addr !86
  store i64 1, i64* %x0.0.reg2mem, !insn.addr !86
  br label %dec_label_pc_193c, !insn.addr !86

dec_label_pc_193c:                                ; preds = %dec_label_pc_1900, %dec_label_pc_1930
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !87

; uselistorder directives
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_193c, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1950:
  %0 = call i64 @register_tm_clones(), !insn.addr !88
  ret i64 %0, !insn.addr !88
}

define i64 @param_strcpy() local_unnamed_addr {
dec_label_pc_1954:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %2 to i8*, !insn.addr !89
  %4 = inttoptr i64 %1 to i8*, !insn.addr !89
  %5 = call i8* @strcpy(i8* %3, i8* %4), !insn.addr !89
  %6 = call i32 @strlen(i8* %3), !insn.addr !90
  %7 = sext i32 %6 to i64, !insn.addr !90
  ret i64 %7, !insn.addr !91

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @call_strcpy() local_unnamed_addr {
dec_label_pc_1980:
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !92
  %1 = inttoptr i64 %0 to i64*, !insn.addr !93
  %2 = load i64, i64* %1, align 8, !insn.addr !93
  %3 = call i64 @param_strcpy(), !insn.addr !94
  %4 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !95
  %5 = inttoptr i64 %4 to i64*, !insn.addr !96
  %6 = load i64, i64* %5, align 8, !insn.addr !96
  %7 = icmp eq i64 %2, %6, !insn.addr !97
  br i1 %7, label %dec_label_pc_19dc, label %dec_label_pc_19d8, !insn.addr !98

dec_label_pc_19d8:                                ; preds = %dec_label_pc_1980
  call void @__stack_chk_fail(), !insn.addr !99
  br label %dec_label_pc_19dc, !insn.addr !99

dec_label_pc_19dc:                                ; preds = %dec_label_pc_19d8, %dec_label_pc_1980
  %8 = and i64 %3, 4294967295, !insn.addr !100
  ret i64 %8, !insn.addr !101
}

define i64 @param_strcmp() local_unnamed_addr {
dec_label_pc_19e8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %2 to i8*, !insn.addr !102
  %4 = inttoptr i64 %1 to i8*, !insn.addr !102
  %5 = call i32 @strcmp(i8* %3, i8* %4), !insn.addr !102
  %6 = icmp sgt i32 %5, 0, !insn.addr !103
  %7 = icmp slt i32 %5, 0
  %. = select i1 %7, i64 4294967295, i64 0
  %x0.0 = select i1 %6, i64 1, i64 %.
  ret i64 %x0.0, !insn.addr !104

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @call_strcmp() local_unnamed_addr {
dec_label_pc_1a3c:
  %0 = call i64 @param_strcmp(), !insn.addr !105
  %1 = call i64 @param_strcmp(), !insn.addr !106
  %2 = call i64 @param_strcmp(), !insn.addr !107
  %3 = add i64 %1, %0, !insn.addr !108
  %4 = add i64 %3, %2, !insn.addr !109
  %5 = and i64 %4, 4294967295, !insn.addr !109
  ret i64 %5, !insn.addr !110

; uselistorder directives
  uselistorder i64 ()* @param_strcmp, { 2, 1, 0 }
}

define i64 @param_strlen(i64 %arg1) local_unnamed_addr {
dec_label_pc_1aa8:
  %0 = inttoptr i64 %arg1 to i8*, !insn.addr !111
  %1 = call i32 @strlen(i8* %0), !insn.addr !111
  %2 = sext i32 %1 to i64, !insn.addr !111
  ret i64 %2, !insn.addr !112
}

define i64 @call_strlen(i64 %arg1) local_unnamed_addr {
dec_label_pc_1acc:
  %0 = call i64 @param_strlen(i64 ptrtoint ([13 x i8]* @global_var_3a98 to i64)), !insn.addr !113
  ret i64 %0, !insn.addr !114
}

define i64 @param_memcpy(i64* %arg1, i64* %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1af0:
  %0 = trunc i64 %arg3 to i32, !insn.addr !115
  %1 = call i64* @memcpy(i64* %arg1, i64* %arg2, i32 %0), !insn.addr !115
  ret i64 %arg3, !insn.addr !116
}

define i64 @call_memcpy() local_unnamed_addr {
dec_label_pc_1b20:
  %stack_var_-24 = alloca i32, align 4
  %stack_var_-48 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !117
  %1 = inttoptr i64 %0 to i64*, !insn.addr !118
  %2 = load i64, i64* %1, align 8, !insn.addr !118
  store i64 85899345930, i64* %stack_var_-48, align 8, !insn.addr !119
  store i32 0, i32* %stack_var_-24, align 4, !insn.addr !120
  %3 = bitcast i32* %stack_var_-24 to i64*, !insn.addr !121
  %4 = call i64 @param_memcpy(i64* nonnull %3, i64* nonnull %stack_var_-48, i64 20, i64 ptrtoint (i64* @global_var_3aa8 to i64)), !insn.addr !121
  %5 = load i32, i32* %stack_var_-24, align 4, !insn.addr !122
  %6 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !123
  %7 = inttoptr i64 %6 to i64*, !insn.addr !124
  %8 = load i64, i64* %7, align 8, !insn.addr !124
  %9 = icmp eq i64 %2, %8, !insn.addr !125
  br i1 %9, label %dec_label_pc_1bac, label %dec_label_pc_1ba8, !insn.addr !126

dec_label_pc_1ba8:                                ; preds = %dec_label_pc_1b20
  call void @__stack_chk_fail(), !insn.addr !127
  br label %dec_label_pc_1bac, !insn.addr !127

dec_label_pc_1bac:                                ; preds = %dec_label_pc_1ba8, %dec_label_pc_1b20
  %10 = zext i32 %5 to i64, !insn.addr !128
  ret i64 %10, !insn.addr !129

; uselistorder directives
  uselistorder i32* %stack_var_-24, { 1, 2, 0 }
}

define i64 @param_memcmp() local_unnamed_addr {
dec_label_pc_1bb8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = inttoptr i64 %3 to i64*, !insn.addr !130
  %5 = inttoptr i64 %2 to i64*, !insn.addr !130
  %6 = trunc i64 %1 to i32, !insn.addr !130
  %7 = call i32 @memcmp(i64* %4, i64* %5, i32 %6), !insn.addr !130
  %8 = icmp sgt i32 %7, 0, !insn.addr !131
  %9 = icmp slt i32 %7, 0
  %. = select i1 %9, i64 4294967295, i64 0
  %x0.0 = select i1 %8, i64 1, i64 %.
  ret i64 %x0.0, !insn.addr !132

; uselistorder directives
  uselistorder i64* %0, { 2, 1, 0 }
}

define i64 @call_memcmp() local_unnamed_addr {
dec_label_pc_1c14:
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !133
  %1 = inttoptr i64 %0 to i64*, !insn.addr !134
  %2 = load i64, i64* %1, align 8, !insn.addr !134
  %3 = call i64 @param_memcmp(), !insn.addr !135
  %4 = call i64 @param_memcmp(), !insn.addr !136
  %5 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !137
  %6 = inttoptr i64 %5 to i64*, !insn.addr !138
  %7 = load i64, i64* %6, align 8, !insn.addr !138
  %8 = icmp eq i64 %2, %7, !insn.addr !139
  br i1 %8, label %dec_label_pc_1cdc, label %dec_label_pc_1cd8, !insn.addr !140

dec_label_pc_1cd8:                                ; preds = %dec_label_pc_1c14
  call void @__stack_chk_fail(), !insn.addr !141
  br label %dec_label_pc_1cdc, !insn.addr !141

dec_label_pc_1cdc:                                ; preds = %dec_label_pc_1cd8, %dec_label_pc_1c14
  %9 = add i64 %4, %3, !insn.addr !142
  %10 = and i64 %9, 4294967295, !insn.addr !143
  ret i64 %10, !insn.addr !144

; uselistorder directives
  uselistorder i64 ()* @param_memcmp, { 1, 0 }
}

define i64 @param_printf(i64 %arg1, i8* %arg2) local_unnamed_addr {
dec_label_pc_1ce8:
  %0 = and i64 %arg1, 4294967295, !insn.addr !145
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_3ae0, i64 0, i64 0), i64 %0, i8* %arg2), !insn.addr !146
  %2 = zext i32 %1 to i64, !insn.addr !147
  ret i64 %2, !insn.addr !148
}

define i64 @call_printf(i64 %arg1) local_unnamed_addr {
dec_label_pc_1d1c:
  %0 = call i64 @param_printf(i64 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_3af8, i64 0, i64 0)), !insn.addr !149
  %1 = and i64 %0, 4294967295, !insn.addr !150
  ret i64 %1, !insn.addr !151
}

define i64 @param_scanf() local_unnamed_addr {
dec_label_pc_1d44:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !152
  %1 = load i64, i64* %0
  %stack_var_-12 = alloca i64, align 8
  %stack_var_-8 = alloca i64, align 8
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !153
  %3 = inttoptr i64 %2 to i64*, !insn.addr !154
  %4 = load i64, i64* %3, align 8, !insn.addr !154
  %5 = inttoptr i64 %1 to i8*, !insn.addr !155
  %6 = call i32 (i8*, i8*, ...) @sscanf(i8* %5, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_3b00, i64 0, i64 0), i64* nonnull %stack_var_-12, i64* nonnull %stack_var_-8), !insn.addr !155
  %7 = icmp eq i32 %6, 2, !insn.addr !156
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !156
  br i1 %7, label %dec_label_pc_1d94, label %dec_label_pc_1da8, !insn.addr !156

dec_label_pc_1d94:                                ; preds = %dec_label_pc_1d44
  %8 = load i64, i64* %stack_var_-12, align 8, !insn.addr !157
  %9 = load i64, i64* %stack_var_-8, align 8, !insn.addr !158
  %10 = add i64 %9, %8, !insn.addr !159
  %11 = and i64 %10, 4294967295, !insn.addr !159
  store i64 %11, i64* %storemerge.reg2mem, !insn.addr !160
  br label %dec_label_pc_1da8, !insn.addr !160

dec_label_pc_1da8:                                ; preds = %dec_label_pc_1d44, %dec_label_pc_1d94
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %12 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !161
  %13 = inttoptr i64 %12 to i64*, !insn.addr !162
  %14 = load i64, i64* %13, align 8, !insn.addr !162
  %15 = icmp eq i64 %4, %14, !insn.addr !163
  br i1 %15, label %dec_label_pc_1dcc, label %dec_label_pc_1dc8, !insn.addr !164

dec_label_pc_1dc8:                                ; preds = %dec_label_pc_1da8
  call void @__stack_chk_fail(), !insn.addr !165
  br label %dec_label_pc_1dcc, !insn.addr !165

dec_label_pc_1dcc:                                ; preds = %dec_label_pc_1dc8, %dec_label_pc_1da8
  ret i64 %storemerge.reload, !insn.addr !166

; uselistorder directives
  uselistorder i64* %stack_var_-8, { 1, 0 }
  uselistorder i64* %stack_var_-12, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1da8, { 1, 0 }
}

define i64 @call_scanf(i64 %arg1) local_unnamed_addr {
dec_label_pc_1dd8:
  %0 = call i64 @param_scanf(), !insn.addr !167
  ret i64 %0, !insn.addr !168
}

define i64 @param_fopen_fclose() local_unnamed_addr {
dec_label_pc_1df4:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !169
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i8*, !insn.addr !170
  %3 = call %_IO_FILE* @fopen(i8* %2, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_3b10, i64 0, i64 0)), !insn.addr !170
  %4 = icmp eq %_IO_FILE* %3, null, !insn.addr !171
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !172
  br i1 %4, label %dec_label_pc_1e40, label %dec_label_pc_1e28, !insn.addr !172

dec_label_pc_1e28:                                ; preds = %dec_label_pc_1df4
  %5 = call i32 @fileno(%_IO_FILE* nonnull %3), !insn.addr !173
  %6 = call i32 @fclose(%_IO_FILE* nonnull %3), !insn.addr !174
  %7 = zext i32 %5 to i64, !insn.addr !175
  store i64 %7, i64* %storemerge.reg2mem, !insn.addr !175
  br label %dec_label_pc_1e40, !insn.addr !175

dec_label_pc_1e40:                                ; preds = %dec_label_pc_1df4, %dec_label_pc_1e28
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !176

; uselistorder directives
  uselistorder %_IO_FILE* %3, { 1, 0, 2 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1e40, { 1, 0 }
}

define i64 @call_fopen_fclose() local_unnamed_addr {
dec_label_pc_1e48:
  %0 = call i64 @param_fopen_fclose(), !insn.addr !177
  %1 = trunc i64 %0 to i32, !insn.addr !178
  %2 = icmp slt i32 %1, 0, !insn.addr !179
  %. = select i1 %2, i64 4294967295, i64 42
  ret i64 %., !insn.addr !180
}

define i64 @param_fread_fwrite() local_unnamed_addr {
dec_label_pc_1e80:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !181
  %1 = load i64, i64* %0
  %stack_var_-32 = alloca i64, align 8
  %2 = inttoptr i64 %1 to i8*, !insn.addr !182
  %3 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !183
  %4 = inttoptr i64 %3 to i64*, !insn.addr !184
  %5 = load i64, i64* %4, align 8, !insn.addr !184
  %6 = call %_IO_FILE* @fopen(i8* %2, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_3b40, i64 0, i64 0)), !insn.addr !185
  %7 = icmp eq %_IO_FILE* %6, null, !insn.addr !186
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !187
  br i1 %7, label %dec_label_pc_1f88, label %dec_label_pc_1ed4, !insn.addr !187

dec_label_pc_1ed4:                                ; preds = %dec_label_pc_1e80
  %8 = call i32 @strlen(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_3b28, i64 0, i64 0)), !insn.addr !188
  %9 = call i32 @fwrite(i64* bitcast ([19 x i8]* @global_var_3b28 to i64*), i32 1, i32 %8, %_IO_FILE* nonnull %6), !insn.addr !189
  %10 = call i32 @strlen(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_3b28, i64 0, i64 0)), !insn.addr !190
  %11 = icmp eq i32 %9, %10, !insn.addr !191
  br i1 %11, label %dec_label_pc_1f1c, label %dec_label_pc_1f0c, !insn.addr !192

dec_label_pc_1f0c:                                ; preds = %dec_label_pc_1ed4
  %12 = call i32 @fclose(%_IO_FILE* nonnull %6), !insn.addr !193
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !194
  br label %dec_label_pc_1f88, !insn.addr !194

dec_label_pc_1f1c:                                ; preds = %dec_label_pc_1ed4
  call void @rewind(%_IO_FILE* nonnull %6), !insn.addr !195
  %13 = call i32 @fread(i64* nonnull %stack_var_-32, i32 1, i32 %9, %_IO_FILE* nonnull %6), !insn.addr !196
  %14 = sext i32 %13 to i64, !insn.addr !196
  %15 = ptrtoint i64* %stack_var_-32 to i64, !insn.addr !197
  %16 = add i64 %14, %15, !insn.addr !198
  %17 = inttoptr i64 %16 to i8*, !insn.addr !198
  store i8 0, i8* %17, align 1, !insn.addr !198
  %18 = call i32 @fclose(%_IO_FILE* nonnull %6), !insn.addr !199
  %19 = call i32 @unlink(i8* %2), !insn.addr !200
  %20 = icmp eq i32 %13, %9, !insn.addr !201
  br i1 %20, label %dec_label_pc_1f68, label %dec_label_pc_1f84, !insn.addr !201

dec_label_pc_1f68:                                ; preds = %dec_label_pc_1f1c
  %21 = bitcast i64* %stack_var_-32 to i8*, !insn.addr !202
  %22 = call i32 @strcmp(i8* nonnull %21, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_3b28, i64 0, i64 0)), !insn.addr !202
  %23 = icmp eq i32 %22, 0, !insn.addr !203
  store i64 42, i64* %x0.0.reg2mem, !insn.addr !204
  br i1 %23, label %dec_label_pc_1f88, label %dec_label_pc_1f84, !insn.addr !204

dec_label_pc_1f84:                                ; preds = %dec_label_pc_1f68, %dec_label_pc_1f1c
  store i64 4294967293, i64* %x0.0.reg2mem, !insn.addr !205
  br label %dec_label_pc_1f88, !insn.addr !205

dec_label_pc_1f88:                                ; preds = %dec_label_pc_1f68, %dec_label_pc_1e80, %dec_label_pc_1f84, %dec_label_pc_1f0c
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %24 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !206
  %25 = inttoptr i64 %24 to i64*, !insn.addr !207
  %26 = load i64, i64* %25, align 8, !insn.addr !207
  %27 = icmp eq i64 %5, %26, !insn.addr !208
  br i1 %27, label %dec_label_pc_1fac, label %dec_label_pc_1fa8, !insn.addr !209

dec_label_pc_1fa8:                                ; preds = %dec_label_pc_1f88
  call void @__stack_chk_fail(), !insn.addr !210
  br label %dec_label_pc_1fac, !insn.addr !210

dec_label_pc_1fac:                                ; preds = %dec_label_pc_1fa8, %dec_label_pc_1f88
  ret i64 %x0.0.reload, !insn.addr !211

; uselistorder directives
  uselistorder %_IO_FILE* %6, { 0, 2, 1, 3, 4, 5 }
  uselistorder i64* %stack_var_-32, { 0, 2, 1 }
  uselistorder i64* %x0.0.reg2mem, { 0, 4, 1, 3, 2 }
  uselistorder i32 (i8*, i8*)* @strcmp, { 1, 0, 2 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 2, 1, 0, 3 }
  uselistorder i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_3b28, i64 0, i64 0), { 0, 2, 1 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1f88, { 2, 0, 3, 1 }
}

define i64 @call_fread_fwrite(i64 %arg1) local_unnamed_addr {
dec_label_pc_1fb8:
  %0 = call i64 @param_fread_fwrite(), !insn.addr !212
  ret i64 %0, !insn.addr !213
}

define i64 @param_malloc_free() local_unnamed_addr {
dec_label_pc_1fd4:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !214
  %storemerge23.reg2mem = alloca i32, !insn.addr !214
  %.reg2mem = alloca i64, !insn.addr !214
  %1 = load i64, i64* %0
  %.tr = trunc i64 %1 to i32
  %2 = mul i32 %.tr, 4, !insn.addr !215
  %3 = call i64* @malloc(i32 %2), !insn.addr !215
  %4 = icmp eq i64* %3, null, !insn.addr !216
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !217
  br i1 %4, label %dec_label_pc_2094, label %dec_label_pc_204c.preheader, !insn.addr !217

dec_label_pc_204c.preheader:                      ; preds = %dec_label_pc_1fd4
  %5 = ptrtoint i64* %3 to i64, !insn.addr !215
  %6 = icmp eq i64 %1, 0, !insn.addr !218
  store i64 0, i64* %.reg2mem, !insn.addr !219
  store i32 0, i32* %storemerge23.reg2mem, !insn.addr !219
  br i1 %6, label %dec_label_pc_205c, label %dec_label_pc_200c, !insn.addr !219

dec_label_pc_200c:                                ; preds = %dec_label_pc_204c.preheader, %dec_label_pc_200c
  %storemerge23.reload = load i32, i32* %storemerge23.reg2mem
  %.reload = load i64, i64* %.reg2mem
  %7 = mul i32 %storemerge23.reload, 10, !insn.addr !220
  %8 = mul i64 %.reload, 4, !insn.addr !221
  %9 = add i64 %8, %5, !insn.addr !222
  %10 = inttoptr i64 %9 to i32*, !insn.addr !223
  store i32 %7, i32* %10, align 4, !insn.addr !223
  %11 = add i32 %storemerge23.reload, 1, !insn.addr !224
  %12 = sext i32 %11 to i64, !insn.addr !225
  %13 = icmp ugt i64 %1, %12, !insn.addr !218
  store i64 %12, i64* %.reg2mem, !insn.addr !219
  store i32 %11, i32* %storemerge23.reg2mem, !insn.addr !219
  br i1 %13, label %dec_label_pc_200c, label %dec_label_pc_205c, !insn.addr !219

dec_label_pc_205c:                                ; preds = %dec_label_pc_200c, %dec_label_pc_204c.preheader
  %14 = bitcast i64* %3 to i32*, !insn.addr !226
  %15 = load i32, i32* %14, align 4, !insn.addr !226
  %16 = mul i64 %1, 4, !insn.addr !227
  %17 = add i64 %16, -4, !insn.addr !228
  %18 = add i64 %17, %5, !insn.addr !229
  %19 = inttoptr i64 %18 to i32*, !insn.addr !230
  %20 = load i32, i32* %19, align 4, !insn.addr !230
  %21 = add i32 %20, %15, !insn.addr !231
  call void @free(i64* nonnull %3), !insn.addr !232
  %22 = zext i32 %21 to i64, !insn.addr !233
  store i64 %22, i64* %storemerge.reg2mem, !insn.addr !233
  br label %dec_label_pc_2094, !insn.addr !233

dec_label_pc_2094:                                ; preds = %dec_label_pc_1fd4, %dec_label_pc_205c
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !234

; uselistorder directives
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64* %3, { 0, 1, 3, 2 }
  uselistorder i64 %1, { 3, 1, 2, 0 }
  uselistorder i64* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge23.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2094, { 1, 0 }
  uselistorder label %dec_label_pc_200c, { 1, 0 }
}

define i64 @call_malloc_free(i64 %arg1) local_unnamed_addr {
dec_label_pc_209c:
  %0 = call i64 @param_malloc_free(), !insn.addr !235
  ret i64 %0, !insn.addr !236
}

define i64 @param_memset() local_unnamed_addr {
dec_label_pc_20b4:
  %0 = alloca i64
  %stack_var_-12.0.lcssa.reg2mem = alloca i64, !insn.addr !237
  %stack_var_-12.01.reg2mem = alloca i32, !insn.addr !237
  %storemerge2.reg2mem = alloca i64, !insn.addr !237
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %2 to i64*, !insn.addr !238
  %4 = trunc i64 %1 to i32, !insn.addr !238
  %5 = call i64* @memset(i64* %3, i32 0, i32 %4), !insn.addr !238
  %6 = icmp eq i64 %1, 0, !insn.addr !239
  store i64 0, i64* %storemerge2.reg2mem, !insn.addr !240
  store i32 0, i32* %stack_var_-12.01.reg2mem, !insn.addr !240
  store i64 0, i64* %stack_var_-12.0.lcssa.reg2mem, !insn.addr !240
  br i1 %6, label %dec_label_pc_2124, label %dec_label_pc_20e8, !insn.addr !240

dec_label_pc_20e8:                                ; preds = %dec_label_pc_20b4, %dec_label_pc_20e8
  %stack_var_-12.01.reload = load i32, i32* %stack_var_-12.01.reg2mem
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %7 = add i64 %storemerge2.reload, %2, !insn.addr !241
  %8 = inttoptr i64 %7 to i8*, !insn.addr !242
  %9 = load i8, i8* %8, align 1, !insn.addr !242
  %10 = zext i8 %9 to i32, !insn.addr !242
  %11 = add i32 %stack_var_-12.01.reload, %10, !insn.addr !243
  %12 = add nuw i64 %storemerge2.reload, 1, !insn.addr !244
  %exitcond = icmp eq i64 %12, %1
  store i64 %12, i64* %storemerge2.reg2mem, !insn.addr !240
  store i32 %11, i32* %stack_var_-12.01.reg2mem, !insn.addr !240
  br i1 %exitcond, label %dec_label_pc_2114.dec_label_pc_2124_crit_edge, label %dec_label_pc_20e8, !insn.addr !240

dec_label_pc_2114.dec_label_pc_2124_crit_edge:    ; preds = %dec_label_pc_20e8
  %phitmp = zext i32 %11 to i64
  store i64 %phitmp, i64* %stack_var_-12.0.lcssa.reg2mem
  br label %dec_label_pc_2124

dec_label_pc_2124:                                ; preds = %dec_label_pc_20b4, %dec_label_pc_2114.dec_label_pc_2124_crit_edge
  %stack_var_-12.0.lcssa.reload = load i64, i64* %stack_var_-12.0.lcssa.reg2mem
  ret i64 %stack_var_-12.0.lcssa.reload, !insn.addr !245

; uselistorder directives
  uselistorder i32 %11, { 1, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 2, 1, 0 }
  uselistorder i64* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-12.01.reg2mem, { 2, 0, 1 }
  uselistorder i64* %stack_var_-12.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder label %dec_label_pc_2124, { 1, 0 }
  uselistorder label %dec_label_pc_20e8, { 1, 0 }
}

define i64 @call_memset() local_unnamed_addr {
dec_label_pc_2130:
  %0 = alloca i32
  %indvars.iv.reg2mem = alloca i64, !insn.addr !246
  %1 = load i32, i32* %0
  %stack_var_-40 = alloca i32, align 4
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !247
  %3 = inttoptr i64 %2 to i64*, !insn.addr !248
  %4 = load i64, i64* %3, align 8, !insn.addr !248
  %5 = ptrtoint i32* %stack_var_-40 to i64, !insn.addr !249
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_2154

dec_label_pc_2154:                                ; preds = %dec_label_pc_2154, %dec_label_pc_2130
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %6 = mul i64 %indvars.iv.reload, 4, !insn.addr !250
  %7 = add i64 %6, %5, !insn.addr !251
  %8 = inttoptr i64 %7 to i32*, !insn.addr !251
  store i32 255, i32* %8, align 4, !insn.addr !251
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 10
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !252
  br i1 %exitcond, label %dec_label_pc_2180, label %dec_label_pc_2154, !insn.addr !252

dec_label_pc_2180:                                ; preds = %dec_label_pc_2154
  %9 = call i64 @param_memset(), !insn.addr !253
  %10 = load i32, i32* %stack_var_-40, align 4, !insn.addr !254
  %11 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !255
  %12 = inttoptr i64 %11 to i64*, !insn.addr !256
  %13 = load i64, i64* %12, align 8, !insn.addr !256
  %14 = icmp eq i64 %4, %13, !insn.addr !257
  br i1 %14, label %dec_label_pc_21bc, label %dec_label_pc_21b8, !insn.addr !258

dec_label_pc_21b8:                                ; preds = %dec_label_pc_2180
  call void @__stack_chk_fail(), !insn.addr !259
  br label %dec_label_pc_21bc, !insn.addr !259

dec_label_pc_21bc:                                ; preds = %dec_label_pc_21b8, %dec_label_pc_2180
  %15 = add i32 %10, %1, !insn.addr !260
  %16 = zext i32 %15 to i64, !insn.addr !261
  ret i64 %16, !insn.addr !262

; uselistorder directives
  uselistorder i32* %stack_var_-40, { 1, 0 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
}

define i64 @param_strchr_strstr() local_unnamed_addr {
dec_label_pc_21c8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = inttoptr i64 %3 to i8*, !insn.addr !263
  %5 = trunc i64 %2 to i32, !insn.addr !264
  %6 = inttoptr i64 %1 to i8*, !insn.addr !265
  %7 = urem i32 %5, 256, !insn.addr !266
  %8 = call i8* @strchr(i8* %4, i32 %7), !insn.addr !267
  %9 = icmp eq i8* %8, null, !insn.addr !268
  %10 = ptrtoint i8* %8 to i64
  %11 = sub i64 %10, %3
  %storemerge3 = select i1 %9, i64 4294967295, i64 %11
  %12 = call i8* @strstr(i8* %4, i8* %6), !insn.addr !269
  %13 = icmp eq i8* %12, null, !insn.addr !270
  %14 = ptrtoint i8* %12 to i64
  %15 = sub i64 %14, %3
  %storemerge = select i1 %13, i64 4294967295, i64 %15
  %16 = add i64 %storemerge, %storemerge3, !insn.addr !271
  %17 = and i64 %16, 4294967295, !insn.addr !271
  ret i64 %17, !insn.addr !272

; uselistorder directives
  uselistorder i8* %12, { 1, 0 }
  uselistorder i8* %8, { 1, 0 }
  uselistorder i64 %3, { 2, 1, 0 }
  uselistorder i64* %0, { 2, 1, 0 }
}

define i64 @call_strchr_strstr(i64 %arg1) local_unnamed_addr {
dec_label_pc_225c:
  %0 = call i64 @param_strchr_strstr(), !insn.addr !273
  %1 = and i64 %0, 4294967295, !insn.addr !274
  ret i64 %1, !insn.addr !275
}

define i64 @test_standard_library_functions(i64 %arg1) local_unnamed_addr {
dec_label_pc_2294:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3b80 to i8*)), !insn.addr !276
  %1 = call i64 @call_strcpy(), !insn.addr !277
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3ba8 to i8*)), !insn.addr !278
  %3 = call i64 @call_strcmp(), !insn.addr !279
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3bc8 to i8*)), !insn.addr !280
  %5 = sext i32 %4 to i64, !insn.addr !280
  %6 = call i64 @call_strlen(i64 %5), !insn.addr !281
  %7 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3be8 to i8*)), !insn.addr !282
  %8 = call i64 @call_memcpy(), !insn.addr !283
  %9 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3c08 to i8*)), !insn.addr !284
  %10 = call i64 @call_memcmp(), !insn.addr !285
  %11 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3c28 to i8*)), !insn.addr !286
  %12 = sext i32 %11 to i64, !insn.addr !286
  %13 = call i64 @call_printf(i64 %12), !insn.addr !287
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3c48 to i8*)), !insn.addr !288
  %15 = call i64 @call_scanf(i64 ptrtoint (i32* @0 to i64)), !insn.addr !289
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3c68 to i8*)), !insn.addr !290
  %17 = call i64 @call_fopen_fclose(), !insn.addr !291
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3c88 to i8*)), !insn.addr !292
  %19 = call i64 @call_fread_fwrite(i64 ptrtoint (i32* @0 to i64)), !insn.addr !293
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3ca8 to i8*)), !insn.addr !294
  %21 = call i64 @call_malloc_free(i64 ptrtoint (i32* @0 to i64)), !insn.addr !295
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3cc8 to i8*)), !insn.addr !296
  %23 = call i64 @call_memset(), !insn.addr !297
  %24 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3ce8 to i8*)), !insn.addr !298
  %25 = sext i32 %24 to i64, !insn.addr !298
  %26 = call i64 @call_strchr_strstr(i64 %25), !insn.addr !299
  %27 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3d08 to i8*)), !insn.addr !300
  %28 = sext i32 %27 to i64, !insn.addr !300
  ret i64 %28, !insn.addr !301
}

define i64 @param_linux_syscall() local_unnamed_addr {
dec_label_pc_23a4:
  %storemerge.in.reg2mem = alloca i32, !insn.addr !302
  %0 = call i32 (i32, ...) @syscall(i32 56), !insn.addr !303
  %1 = icmp slt i32 %0, 0, !insn.addr !304
  br i1 %1, label %dec_label_pc_23d4, label %dec_label_pc_23e4, !insn.addr !305

dec_label_pc_23d4:                                ; preds = %dec_label_pc_23a4
  %2 = call i32* @__errno_location(), !insn.addr !306
  %3 = load i32, i32* %2, align 4, !insn.addr !307
  %4 = sub i32 0, %3, !insn.addr !308
  store i32 %4, i32* %storemerge.in.reg2mem, !insn.addr !309
  br label %dec_label_pc_23f4, !insn.addr !309

dec_label_pc_23e4:                                ; preds = %dec_label_pc_23a4
  %5 = call i32 (i32, ...) @syscall(i32 57), !insn.addr !310
  store i32 %0, i32* %storemerge.in.reg2mem, !insn.addr !311
  br label %dec_label_pc_23f4, !insn.addr !311

dec_label_pc_23f4:                                ; preds = %dec_label_pc_23e4, %dec_label_pc_23d4
  %storemerge.in.reload = load i32, i32* %storemerge.in.reg2mem
  %storemerge = zext i32 %storemerge.in.reload to i64
  ret i64 %storemerge, !insn.addr !312

; uselistorder directives
  uselistorder i32* %storemerge.in.reg2mem, { 0, 2, 1 }
  uselistorder i32 (i32, ...)* @syscall, { 1, 0, 2 }
}

define i64 @call_linux_syscall() local_unnamed_addr {
dec_label_pc_23fc:
  %0 = call i64 @param_linux_syscall(), !insn.addr !313
  %1 = trunc i64 %0 to i32, !insn.addr !314
  %2 = icmp slt i32 %1, 0, !insn.addr !315
  %. = select i1 %2, i64 4294967295, i64 42
  ret i64 %., !insn.addr !316
}

define i64 @param_win32_api() local_unnamed_addr {
dec_label_pc_2434:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %stack_var_-128 = alloca i64, align 8
  %3 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !317
  %4 = inttoptr i64 %3 to i64*, !insn.addr !318
  %5 = load i64, i64* %4, align 8, !insn.addr !318
  %6 = inttoptr i64 %1 to i8*, !insn.addr !319
  %7 = bitcast i64* %stack_var_-128 to %stat*, !insn.addr !319
  %8 = call i32 @stat(i8* %6, %stat* nonnull %7), !insn.addr !319
  %9 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !320
  %10 = inttoptr i64 %9 to i64*, !insn.addr !321
  %11 = load i64, i64* %10, align 8, !insn.addr !321
  %12 = icmp eq i64 %5, %11, !insn.addr !322
  br i1 %12, label %dec_label_pc_24b0, label %dec_label_pc_24ac, !insn.addr !323

dec_label_pc_24ac:                                ; preds = %dec_label_pc_2434
  call void @__stack_chk_fail(), !insn.addr !324
  br label %dec_label_pc_24b0, !insn.addr !324

dec_label_pc_24b0:                                ; preds = %dec_label_pc_24ac, %dec_label_pc_2434
  %13 = icmp slt i32 %8, 0, !insn.addr !325
  %14 = icmp slt i64 %2, 1
  %. = select i1 %14, i64 4294967294, i64 42
  %x0.0 = select i1 %13, i64 4294967295, i64 %.
  ret i64 %x0.0, !insn.addr !326

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @call_win32_api(i64 %arg1) local_unnamed_addr {
dec_label_pc_24bc:
  %0 = call i64 @param_win32_api(), !insn.addr !327
  ret i64 %0, !insn.addr !328
}

define i64 @param_fork_exec() local_unnamed_addr {
dec_label_pc_24d8:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !329
  %1 = load i64, i64* %0
  %stack_var_-12 = alloca i32, align 4
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !330
  %3 = inttoptr i64 %2 to i64*, !insn.addr !331
  %4 = load i64, i64* %3, align 8, !insn.addr !331
  %5 = call i32 @fork(), !insn.addr !332
  %6 = icmp slt i32 %5, 0, !insn.addr !333
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !334
  br i1 %6, label %dec_label_pc_2590, label %dec_label_pc_2518, !insn.addr !334

dec_label_pc_2518:                                ; preds = %dec_label_pc_24d8
  %7 = icmp eq i32 %5, 0, !insn.addr !335
  br i1 %7, label %dec_label_pc_2524, label %dec_label_pc_2540, !insn.addr !336

dec_label_pc_2524:                                ; preds = %dec_label_pc_2518
  %8 = inttoptr i64 %1 to i8*, !insn.addr !337
  %9 = call i32 (i8*, i8*, ...) @execl(i8* %8, i8* %8), !insn.addr !338
  call void @_exit(i32 127), !insn.addr !339
  unreachable, !insn.addr !339

dec_label_pc_2540:                                ; preds = %dec_label_pc_2518
  %10 = call i32 @waitpid(i32 %5, i32* nonnull %stack_var_-12, i32 0), !insn.addr !340
  %11 = icmp slt i32 %10, 0, !insn.addr !341
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !342
  br i1 %11, label %dec_label_pc_2590, label %dec_label_pc_256c, !insn.addr !342

dec_label_pc_256c:                                ; preds = %dec_label_pc_2540
  %12 = load i32, i32* %stack_var_-12, align 4, !insn.addr !343
  %13 = urem i32 %12, 128, !insn.addr !344
  %14 = icmp eq i32 %13, 0, !insn.addr !345
  store i64 4294967293, i64* %x0.0.reg2mem, !insn.addr !346
  br i1 %14, label %dec_label_pc_257c, label %dec_label_pc_2590, !insn.addr !346

dec_label_pc_257c:                                ; preds = %dec_label_pc_256c
  %15 = udiv i32 %12, 256
  %16 = urem i32 %15, 256, !insn.addr !347
  %17 = zext i32 %16 to i64, !insn.addr !347
  store i64 %17, i64* %x0.0.reg2mem, !insn.addr !348
  br label %dec_label_pc_2590, !insn.addr !348

dec_label_pc_2590:                                ; preds = %dec_label_pc_256c, %dec_label_pc_2540, %dec_label_pc_24d8, %dec_label_pc_257c
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %18 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !349
  %19 = inttoptr i64 %18 to i64*, !insn.addr !350
  %20 = load i64, i64* %19, align 8, !insn.addr !350
  %21 = icmp eq i64 %4, %20, !insn.addr !351
  br i1 %21, label %dec_label_pc_25b4, label %dec_label_pc_25b0, !insn.addr !352

dec_label_pc_25b0:                                ; preds = %dec_label_pc_2590
  call void @__stack_chk_fail(), !insn.addr !353
  br label %dec_label_pc_25b4, !insn.addr !353

dec_label_pc_25b4:                                ; preds = %dec_label_pc_25b0, %dec_label_pc_2590
  ret i64 %x0.0.reload, !insn.addr !354

; uselistorder directives
  uselistorder i64* %x0.0.reg2mem, { 0, 4, 1, 2, 3 }
  uselistorder i32 256, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2590, { 3, 0, 1, 2 }
}

define i64 @call_fork_exec() local_unnamed_addr {
dec_label_pc_25c0:
  %0 = call i64 @param_fork_exec(), !insn.addr !355
  %1 = trunc i64 %0 to i32, !insn.addr !356
  %2 = icmp eq i32 %1, 0, !insn.addr !357
  %. = select i1 %2, i64 42, i64 4294967295
  ret i64 %., !insn.addr !358
}

define i64 @param_pipe_communication() local_unnamed_addr {
dec_label_pc_25fc:
  %0 = alloca i32
  %x0.0.reg2mem = alloca i64, !insn.addr !359
  %stack_var_-32 = alloca i64, align 8
  %1 = load i32, i32* %0
  %stack_var_-40 = alloca i32, align 4
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !360
  %3 = inttoptr i64 %2 to i64*, !insn.addr !361
  %4 = load i64, i64* %3, align 8, !insn.addr !361
  %5 = ptrtoint i32* %stack_var_-40 to i64, !insn.addr !362
  %6 = trunc i64 %5 to i32, !insn.addr !363
  %7 = insertvalue [2 x i32] undef, i32 %6, 0, !insn.addr !363
  %8 = call i32 @pipe([2 x i32] %7), !insn.addr !363
  %9 = icmp slt i32 %8, 0, !insn.addr !364
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !365
  br i1 %9, label %dec_label_pc_26ec, label %dec_label_pc_2634, !insn.addr !365

dec_label_pc_2634:                                ; preds = %dec_label_pc_25fc
  %10 = call i32 @fork(), !insn.addr !366
  %11 = icmp slt i32 %10, 0, !insn.addr !367
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !368
  br i1 %11, label %dec_label_pc_26ec, label %dec_label_pc_2650, !insn.addr !368

dec_label_pc_2650:                                ; preds = %dec_label_pc_2634
  %12 = icmp eq i32 %10, 0, !insn.addr !369
  br i1 %12, label %dec_label_pc_265c, label %dec_label_pc_269c, !insn.addr !370

dec_label_pc_265c:                                ; preds = %dec_label_pc_2650
  %13 = load i32, i32* %stack_var_-40, align 4, !insn.addr !371
  %14 = call i32 @close(i32 %13), !insn.addr !372
  %15 = call i32 @strlen(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_3d38, i64 0, i64 0)), !insn.addr !373
  %16 = call i32 @write(i32 %1, i64* bitcast ([10 x i8]* @global_var_3d38 to i64*), i32 %15), !insn.addr !374
  %17 = call i32 @close(i32 %1), !insn.addr !375
  call void @_exit(i32 0), !insn.addr !376
  unreachable, !insn.addr !376

dec_label_pc_269c:                                ; preds = %dec_label_pc_2650
  %18 = call i32 @close(i32 %1), !insn.addr !377
  %19 = load i32, i32* %stack_var_-40, align 4, !insn.addr !378
  %20 = call i32 @read(i32 %19, i64* nonnull %stack_var_-32, i32 31), !insn.addr !379
  %21 = sext i32 %20 to i64, !insn.addr !379
  %22 = ptrtoint i64* %stack_var_-32 to i64, !insn.addr !380
  %23 = add i64 %21, %22, !insn.addr !381
  %24 = inttoptr i64 %23 to i8*, !insn.addr !381
  store i8 0, i8* %24, align 1, !insn.addr !381
  %25 = load i32, i32* %stack_var_-40, align 4, !insn.addr !382
  %26 = call i32 @close(i32 %25), !insn.addr !383
  %27 = call i32 @wait(i64 0), !insn.addr !384
  %28 = icmp slt i32 %20, 1, !insn.addr !385
  %. = select i1 %28, i64 4294967293, i64 42
  store i64 %., i64* %x0.0.reg2mem, !insn.addr !386
  br label %dec_label_pc_26ec, !insn.addr !386

dec_label_pc_26ec:                                ; preds = %dec_label_pc_269c, %dec_label_pc_2634, %dec_label_pc_25fc
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %29 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !387
  %30 = inttoptr i64 %29 to i64*, !insn.addr !388
  %31 = load i64, i64* %30, align 8, !insn.addr !388
  %32 = icmp eq i64 %4, %31, !insn.addr !389
  br i1 %32, label %dec_label_pc_2710, label %dec_label_pc_270c, !insn.addr !390

dec_label_pc_270c:                                ; preds = %dec_label_pc_26ec
  call void @__stack_chk_fail(), !insn.addr !391
  br label %dec_label_pc_2710, !insn.addr !391

dec_label_pc_2710:                                ; preds = %dec_label_pc_270c, %dec_label_pc_26ec
  ret i64 %x0.0.reload, !insn.addr !392

; uselistorder directives
  uselistorder i32* %stack_var_-40, { 3, 2, 1, 0 }
  uselistorder i64* %stack_var_-32, { 1, 0 }
  uselistorder void (i32)* @_exit, { 1, 0, 2 }
  uselistorder [10 x i8]* @global_var_3d38, { 1, 0 }
  uselistorder i32 ()* @fork, { 1, 0, 2 }
}

define i64 @call_pipe_communication(i64 %arg1) local_unnamed_addr {
dec_label_pc_2720:
  %0 = call i64 @param_pipe_communication(), !insn.addr !393
  ret i64 %0, !insn.addr !394
}

define i64 @param_socket_create() local_unnamed_addr {
dec_label_pc_2734:
  %x0.0.reg2mem = alloca i64, !insn.addr !395
  %stack_var_-16 = alloca i64, align 8
  %stack_var_-24 = alloca i32, align 4
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !396
  %1 = inttoptr i64 %0 to i64*, !insn.addr !397
  %2 = load i64, i64* %1, align 8, !insn.addr !397
  %3 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !398
  %4 = icmp slt i32 %3, 0, !insn.addr !399
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !400
  br i1 %4, label %dec_label_pc_283c, label %dec_label_pc_2778, !insn.addr !400

dec_label_pc_2778:                                ; preds = %dec_label_pc_2734
  store i32 1, i32* %stack_var_-24, align 4, !insn.addr !401
  %5 = bitcast i32* %stack_var_-24 to i64*, !insn.addr !402
  %6 = call i32 @setsockopt(i32 %3, i32 1, i32 2, i64* nonnull %5, i32 4), !insn.addr !402
  %7 = icmp slt i32 %6, 0, !insn.addr !403
  br i1 %7, label %dec_label_pc_27a4, label %dec_label_pc_27b4, !insn.addr !404

dec_label_pc_27a4:                                ; preds = %dec_label_pc_2778
  %8 = call i32 @close(i32 %3), !insn.addr !405
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !406
  br label %dec_label_pc_283c, !insn.addr !406

dec_label_pc_27b4:                                ; preds = %dec_label_pc_2778
  %9 = call i64* @memset(i64* nonnull %stack_var_-16, i32 0, i32 16), !insn.addr !407
  store i64 2, i64* %stack_var_-16, align 8, !insn.addr !408
  %10 = call i16 @htons(i16 0), !insn.addr !409
  %11 = bitcast i64* %stack_var_-16 to %sockaddr*, !insn.addr !410
  %12 = call i32 @bind(i32 %3, %sockaddr* nonnull %11, i32 16), !insn.addr !410
  %13 = icmp slt i32 %12, 0, !insn.addr !411
  br i1 %13, label %dec_label_pc_27fc, label %dec_label_pc_280c, !insn.addr !412

dec_label_pc_27fc:                                ; preds = %dec_label_pc_27b4
  %14 = call i32 @close(i32 %3), !insn.addr !413
  store i64 4294967293, i64* %x0.0.reg2mem, !insn.addr !414
  br label %dec_label_pc_283c, !insn.addr !414

dec_label_pc_280c:                                ; preds = %dec_label_pc_27b4
  %15 = call i32 @listen(i32 %3, i32 5), !insn.addr !415
  %16 = icmp slt i32 %15, 0, !insn.addr !416
  %17 = call i32 @close(i32 %3)
  %. = select i1 %16, i64 4294967292, i64 42
  store i64 %., i64* %x0.0.reg2mem, !insn.addr !417
  br label %dec_label_pc_283c, !insn.addr !417

dec_label_pc_283c:                                ; preds = %dec_label_pc_280c, %dec_label_pc_2734, %dec_label_pc_27fc, %dec_label_pc_27a4
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %18 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !418
  %19 = inttoptr i64 %18 to i64*, !insn.addr !419
  %20 = load i64, i64* %19, align 8, !insn.addr !419
  %21 = icmp eq i64 %2, %20, !insn.addr !420
  br i1 %21, label %dec_label_pc_2860, label %dec_label_pc_285c, !insn.addr !421

dec_label_pc_285c:                                ; preds = %dec_label_pc_283c
  call void @__stack_chk_fail(), !insn.addr !422
  br label %dec_label_pc_2860, !insn.addr !422

dec_label_pc_2860:                                ; preds = %dec_label_pc_285c, %dec_label_pc_283c
  ret i64 %x0.0.reload, !insn.addr !423

; uselistorder directives
  uselistorder i32 %3, { 0, 2, 1, 3, 4, 5, 6 }
  uselistorder i64* %stack_var_-16, { 0, 2, 1 }
  uselistorder i64* %x0.0.reg2mem, { 0, 1, 3, 4, 2 }
  uselistorder i64* (i64*, i32, i32)* @memset, { 1, 0, 2 }
  uselistorder label %dec_label_pc_283c, { 0, 2, 3, 1 }
}

define i64 @call_socket_create(i64 %arg1) local_unnamed_addr {
dec_label_pc_286c:
  %0 = call i64 @param_socket_create(), !insn.addr !424
  ret i64 %0, !insn.addr !425
}

define i64 @param_shmget_shmat() local_unnamed_addr {
dec_label_pc_2880:
  %x0.0.reg2mem = alloca i64, !insn.addr !426
  %0 = call i32 (i8*, i32, ...) @open(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_3d48, i64 0, i64 0), i32 66), !insn.addr !427
  %1 = icmp slt i32 %0, 0, !insn.addr !428
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !429
  br i1 %1, label %dec_label_pc_2984, label %dec_label_pc_28bc, !insn.addr !429

dec_label_pc_28bc:                                ; preds = %dec_label_pc_2880
  %2 = call i32 @close(i32 %0), !insn.addr !430
  %3 = call i32 @ftok(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_3d48, i64 0, i64 0), i32 42), !insn.addr !431
  %4 = icmp slt i32 %3, 0, !insn.addr !432
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !433
  br i1 %4, label %dec_label_pc_2984, label %dec_label_pc_28ec, !insn.addr !433

dec_label_pc_28ec:                                ; preds = %dec_label_pc_28bc
  %5 = call i32 @shmget(i32 %3, i32 ptrtoint (i32* @global_var_1000 to i32), i32 ptrtoint (i32* @global_var_3b6 to i32)), !insn.addr !434
  %6 = icmp slt i32 %5, 0, !insn.addr !435
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !436
  br i1 %6, label %dec_label_pc_2984, label %dec_label_pc_2914, !insn.addr !436

dec_label_pc_2914:                                ; preds = %dec_label_pc_28ec
  %7 = call i64* @shmat(i32 %5, i64* null, i32 0), !insn.addr !437
  %8 = icmp eq i64* %7, inttoptr (i64 -1 to i64*), !insn.addr !438
  store i64 4294967293, i64* %x0.0.reg2mem, !insn.addr !439
  br i1 %8, label %dec_label_pc_2984, label %dec_label_pc_293c, !insn.addr !439

dec_label_pc_293c:                                ; preds = %dec_label_pc_2914
  %9 = bitcast i64* %7 to i8*
  %10 = ptrtoint i64* %7 to i64, !insn.addr !440
  store i64 7299600957910902867, i64* %7, align 8, !insn.addr !441
  %11 = add i64 %10, 5, !insn.addr !442
  %12 = inttoptr i64 %11 to i64*, !insn.addr !442
  store i64 34184295084281188, i64* %12, align 8, !insn.addr !442
  %13 = call i32 @strlen(i8* %9), !insn.addr !443
  %14 = call i32 @shmdt(i64* %7), !insn.addr !444
  %15 = call i32 @shmctl(i32 %5, i32 0, %shmid_ds* null), !insn.addr !445
  %16 = zext i32 %13 to i64, !insn.addr !446
  store i64 %16, i64* %x0.0.reg2mem, !insn.addr !446
  br label %dec_label_pc_2984, !insn.addr !446

dec_label_pc_2984:                                ; preds = %dec_label_pc_2914, %dec_label_pc_28ec, %dec_label_pc_28bc, %dec_label_pc_2880, %dec_label_pc_293c
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !447

; uselistorder directives
  uselistorder i64* %7, { 0, 2, 1, 4, 3 }
  uselistorder i64* %x0.0.reg2mem, { 0, 5, 1, 2, 3, 4 }
  uselistorder i32 (i8*)* @strlen, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder i32 (i32)* @close, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder label %dec_label_pc_2984, { 4, 0, 1, 2, 3 }
}

define i64 @call_shmget_shmat() local_unnamed_addr {
dec_label_pc_298c:
  %0 = call i64 @param_shmget_shmat(), !insn.addr !448
  %1 = trunc i64 %0 to i32, !insn.addr !449
  %2 = icmp slt i32 %1, 1, !insn.addr !450
  %. = select i1 %2, i64 4294967295, i64 42
  ret i64 %., !insn.addr !451
}

define i64 @signal_handler() local_unnamed_addr {
dec_label_pc_29bc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !452
  store i32 1, i32* bitcast (i32** @global_var_15018 to i32*), align 8, !insn.addr !453
  store i32 %2, i32* bitcast (i32** @global_var_1501c to i32*), align 8, !insn.addr !454
  ret i64 ptrtoint (i32** @global_var_1501c to i64), !insn.addr !455
}

define i64 @param_signal_handling() local_unnamed_addr {
dec_label_pc_29f0:
  %x0.0.reg2mem = alloca i64, !insn.addr !456
  %.lcssa.reg2mem = alloca i32, !insn.addr !456
  %stack_var_4.16.reg2mem = alloca i32, !insn.addr !456
  %.lcssa4.reg2mem = alloca i1, !insn.addr !456
  %stack_var_4.08.reg2mem = alloca i32, !insn.addr !456
  %0 = call void (i32)* @signal(i32 10, void (i32)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_2000 to i64), i64 2492) to void (i32)*)), !insn.addr !457
  %1 = icmp eq void (i32)* %0, inttoptr (i64 -1 to void (i32)*), !insn.addr !458
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !459
  br i1 %1, label %dec_label_pc_2b5c, label %dec_label_pc_2a18, !insn.addr !459

dec_label_pc_2a18:                                ; preds = %dec_label_pc_29f0
  %2 = call void (i32)* @signal(i32 14, void (i32)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_2000 to i64), i64 2492) to void (i32)*)), !insn.addr !460
  %3 = icmp eq void (i32)* %2, inttoptr (i64 -1 to void (i32)*), !insn.addr !461
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !462
  br i1 %3, label %dec_label_pc_2b5c, label %dec_label_pc_2a38, !insn.addr !462

dec_label_pc_2a38:                                ; preds = %dec_label_pc_2a18
  store i32 0, i32* bitcast (i32** @global_var_15018 to i32*), align 8, !insn.addr !463
  %4 = call i32 @raise(i32 10), !insn.addr !464
  %5 = load i32, i32* bitcast (i32** @global_var_15018 to i32*), align 8, !insn.addr !465
  %6 = icmp eq i32 %5, 0, !insn.addr !466
  %or.cond27 = icmp eq i1 %6, icmp sgt (i32 ptrtoint (i32* @global_var_3e8 to i32), i32 0)
  store i32 ptrtoint (i32* @global_var_3e8 to i32), i32* %stack_var_4.08.reg2mem, !insn.addr !467
  store i1 %6, i1* %.lcssa4.reg2mem, !insn.addr !467
  br i1 %or.cond27, label %dec_label_pc_2a58, label %dec_label_pc_2a88, !insn.addr !467

dec_label_pc_2a58:                                ; preds = %dec_label_pc_2a38, %dec_label_pc_2a58
  %stack_var_4.08.reload = load i32, i32* %stack_var_4.08.reg2mem
  %7 = add i32 %stack_var_4.08.reload, -1, !insn.addr !468
  %8 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !469
  %9 = load i32, i32* bitcast (i32** @global_var_15018 to i32*), align 8, !insn.addr !465
  %10 = icmp eq i32 %9, 0, !insn.addr !466
  %11 = icmp sgt i32 %7, 0, !insn.addr !470
  %or.cond2 = icmp eq i1 %11, %10
  store i32 %7, i32* %stack_var_4.08.reg2mem, !insn.addr !467
  store i1 %10, i1* %.lcssa4.reg2mem, !insn.addr !467
  br i1 %or.cond2, label %dec_label_pc_2a58, label %dec_label_pc_2a88, !insn.addr !467

dec_label_pc_2a88:                                ; preds = %dec_label_pc_2a58, %dec_label_pc_2a38
  %.lcssa4.reload = load i1, i1* %.lcssa4.reg2mem
  store i64 4294967293, i64* %x0.0.reg2mem, !insn.addr !471
  br i1 %.lcssa4.reload, label %dec_label_pc_2b5c, label %dec_label_pc_2aa4, !insn.addr !471

dec_label_pc_2aa4:                                ; preds = %dec_label_pc_2a88
  %12 = load i32, i32* bitcast (i32** @global_var_1501c to i32*), align 8, !insn.addr !472
  %13 = icmp eq i32 %12, 10, !insn.addr !473
  store i64 4294967292, i64* %x0.0.reg2mem, !insn.addr !474
  br i1 %13, label %dec_label_pc_2ac0, label %dec_label_pc_2b5c, !insn.addr !474

dec_label_pc_2ac0:                                ; preds = %dec_label_pc_2aa4
  store i32 0, i32* bitcast (i32** @global_var_15018 to i32*), align 8, !insn.addr !475
  %14 = call i32 @alarm(i32 1), !insn.addr !476
  %15 = load i32, i32* bitcast (i32** @global_var_15018 to i32*), align 8, !insn.addr !477
  %16 = icmp eq i32 %15, 0, !insn.addr !478
  %or.cond35 = icmp eq i1 %16, icmp sgt (i32 ptrtoint (i32* @global_var_7d0 to i32), i32 0)
  store i32 ptrtoint (i32* @global_var_7d0 to i32), i32* %stack_var_4.16.reg2mem, !insn.addr !479
  store i32 %15, i32* %.lcssa.reg2mem, !insn.addr !479
  br i1 %or.cond35, label %dec_label_pc_2ae0, label %dec_label_pc_2b10, !insn.addr !479

dec_label_pc_2ae0:                                ; preds = %dec_label_pc_2ac0, %dec_label_pc_2ae0
  %stack_var_4.16.reload = load i32, i32* %stack_var_4.16.reg2mem
  %17 = add i32 %stack_var_4.16.reload, -1, !insn.addr !480
  %18 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !481
  %19 = load i32, i32* bitcast (i32** @global_var_15018 to i32*), align 8, !insn.addr !477
  %20 = icmp eq i32 %19, 0, !insn.addr !478
  %21 = icmp sgt i32 %17, 0, !insn.addr !482
  %or.cond3 = icmp eq i1 %21, %20
  store i32 %17, i32* %stack_var_4.16.reg2mem, !insn.addr !479
  store i32 %19, i32* %.lcssa.reg2mem, !insn.addr !479
  br i1 %or.cond3, label %dec_label_pc_2ae0, label %dec_label_pc_2b10, !insn.addr !479

dec_label_pc_2b10:                                ; preds = %dec_label_pc_2ae0, %dec_label_pc_2ac0
  %.lcssa.reload = load i32, i32* %.lcssa.reg2mem
  %22 = icmp ne i32 %.lcssa.reload, 0, !insn.addr !483
  %23 = load i32, i32* bitcast (i32** @global_var_1501c to i32*), align 8, !insn.addr !484
  %24 = icmp eq i32 %23, 14, !insn.addr !485
  %or.cond = icmp eq i1 %22, %24
  store i64 4294967291, i64* %x0.0.reg2mem, !insn.addr !486
  br i1 %or.cond, label %dec_label_pc_2b40, label %dec_label_pc_2b5c, !insn.addr !486

dec_label_pc_2b40:                                ; preds = %dec_label_pc_2b10
  %25 = call void (i32)* @signal(i32 10, void (i32)* null), !insn.addr !487
  %26 = call void (i32)* @signal(i32 14, void (i32)* null), !insn.addr !488
  store i64 42, i64* %x0.0.reg2mem, !insn.addr !489
  br label %dec_label_pc_2b5c, !insn.addr !489

dec_label_pc_2b5c:                                ; preds = %dec_label_pc_2b10, %dec_label_pc_2aa4, %dec_label_pc_2a88, %dec_label_pc_2a18, %dec_label_pc_29f0, %dec_label_pc_2b40
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !490

; uselistorder directives
  uselistorder i32* %stack_var_4.08.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_4.16.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x0.0.reg2mem, { 0, 6, 1, 2, 3, 4, 5 }
  uselistorder i32* bitcast (i32** @global_var_1501c to i32*), { 0, 2, 1 }
  uselistorder i32* bitcast (i32** @global_var_15018 to i32*), { 6, 1, 2, 5, 0, 3, 4 }
  uselistorder i32 14, { 1, 0, 2 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i32 10, { 1, 0, 2, 3, 4 }
  uselistorder label %dec_label_pc_2b5c, { 5, 0, 1, 2, 3, 4 }
  uselistorder label %dec_label_pc_2ae0, { 1, 0 }
  uselistorder label %dec_label_pc_2a58, { 1, 0 }
}

define i64 @call_signal_handling(i64 %arg1) local_unnamed_addr {
dec_label_pc_2b64:
  %0 = call i64 @param_signal_handling(), !insn.addr !491
  ret i64 %0, !insn.addr !492
}

define i64 @test_system_calls(i64 %arg1) local_unnamed_addr {
dec_label_pc_2b78:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3d70 to i8*)), !insn.addr !493
  %1 = call i64 @call_linux_syscall(), !insn.addr !494
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3d90 to i8*)), !insn.addr !495
  %3 = call i64 @call_win32_api(i64 ptrtoint (i32* @0 to i64)), !insn.addr !496
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3db0 to i8*)), !insn.addr !497
  %5 = call i64 @call_fork_exec(), !insn.addr !498
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3dd0 to i8*)), !insn.addr !499
  %7 = call i64 @call_pipe_communication(i64 ptrtoint (i32* @0 to i64)), !insn.addr !500
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3df0 to i8*)), !insn.addr !501
  %9 = call i64 @call_socket_create(i64 ptrtoint (i32* @0 to i64)), !insn.addr !502
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3e10 to i8*)), !insn.addr !503
  %11 = call i64 @call_shmget_shmat(), !insn.addr !504
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3e30 to i8*)), !insn.addr !505
  %13 = call i64 @call_signal_handling(i64 ptrtoint (i32* @0 to i64)), !insn.addr !506
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3e50 to i8*)), !insn.addr !507
  %15 = sext i32 %14 to i64, !insn.addr !507
  ret i64 %15, !insn.addr !508
}

define i64 @thread_compute() local_unnamed_addr {
dec_label_pc_2c24:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = mul i32 %2, %2, !insn.addr !509
  %4 = call i64* @malloc(i32 4), !insn.addr !510
  %5 = ptrtoint i64* %4 to i64, !insn.addr !510
  %6 = bitcast i64* %4 to i32*, !insn.addr !511
  store i32 %3, i32* %6, align 4, !insn.addr !511
  ret i64 %5, !insn.addr !512

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i64 @param_pthread_create() local_unnamed_addr {
dec_label_pc_2c74:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !513
  %1 = load i64, i64* %0
  %stack_var_-8 = alloca i64, align 8
  %stack_var_-16 = alloca i32, align 4
  %stack_var_-28 = alloca i32, align 4
  %2 = trunc i64 %1 to i32, !insn.addr !514
  %3 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !515
  %4 = inttoptr i64 %3 to i64*, !insn.addr !516
  %5 = load i64, i64* %4, align 8, !insn.addr !516
  store i32 %2, i32* %stack_var_-28, align 4, !insn.addr !517
  %6 = bitcast i32* %stack_var_-28 to i64*, !insn.addr !518
  %7 = call i32 @pthread_create(i32* nonnull %stack_var_-16, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_2000 to i64), i64 3108) to i64* (i64*)*), i64* nonnull %6), !insn.addr !518
  %8 = icmp eq i32 %7, 0, !insn.addr !519
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !520
  br i1 %8, label %dec_label_pc_2cd4, label %dec_label_pc_2cf8, !insn.addr !520

dec_label_pc_2cd4:                                ; preds = %dec_label_pc_2c74
  %9 = load i32, i32* %stack_var_-16, align 4, !insn.addr !521
  %10 = bitcast i64* %stack_var_-8 to i64**, !insn.addr !522
  %11 = call i32 @pthread_join(i32 %9, i64** nonnull %10), !insn.addr !522
  %12 = load i64, i64* %stack_var_-8, align 8
  %13 = inttoptr i64 %12 to i32*, !insn.addr !523
  %14 = load i32, i32* %13, align 4, !insn.addr !523
  %15 = inttoptr i64 %12 to i64*, !insn.addr !524
  call void @free(i64* %15), !insn.addr !524
  %16 = zext i32 %14 to i64, !insn.addr !525
  store i64 %16, i64* %storemerge.reg2mem, !insn.addr !525
  br label %dec_label_pc_2cf8, !insn.addr !525

dec_label_pc_2cf8:                                ; preds = %dec_label_pc_2c74, %dec_label_pc_2cd4
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %17 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !526
  %18 = inttoptr i64 %17 to i64*, !insn.addr !527
  %19 = load i64, i64* %18, align 8, !insn.addr !527
  %20 = icmp eq i64 %5, %19, !insn.addr !528
  br i1 %20, label %dec_label_pc_2d1c, label %dec_label_pc_2d18, !insn.addr !529

dec_label_pc_2d18:                                ; preds = %dec_label_pc_2cf8
  call void @__stack_chk_fail(), !insn.addr !530
  br label %dec_label_pc_2d1c, !insn.addr !530

dec_label_pc_2d1c:                                ; preds = %dec_label_pc_2d18, %dec_label_pc_2cf8
  ret i64 %storemerge.reload, !insn.addr !531

; uselistorder directives
  uselistorder i64* %stack_var_-8, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2cf8, { 1, 0 }
}

define i64 @call_pthread_create(i64 %arg1) local_unnamed_addr {
dec_label_pc_2d28:
  %0 = call i64 @param_pthread_create(), !insn.addr !532
  ret i64 %0, !insn.addr !533
}

define i64 @thread_sum() local_unnamed_addr {
dec_label_pc_2d40:
  %0 = alloca i64
  %storemerge1.reg2mem = alloca i32, !insn.addr !534
  %.reg2mem = alloca i32, !insn.addr !534
  %x0 = alloca i64, align 8
  %1 = load i64, i64* %0
  %2 = add i64 %1, 8, !insn.addr !535
  %3 = inttoptr i64 %2 to i32*, !insn.addr !535
  store i32 0, i32* %3, align 4, !insn.addr !535
  %4 = bitcast i64* %x0 to i32*
  %5 = load i32, i32* %4, align 8, !insn.addr !536
  %6 = add i64 %1, 4, !insn.addr !537
  %7 = inttoptr i64 %6 to i32*, !insn.addr !537
  %8 = load i32, i32* %7, align 4, !insn.addr !537
  %9 = icmp ugt i32 %5, %8, !insn.addr !538
  store i32 0, i32* %.reg2mem, !insn.addr !538
  store i32 %5, i32* %storemerge1.reg2mem, !insn.addr !538
  br i1 %9, label %dec_label_pc_2da0, label %dec_label_pc_2d68, !insn.addr !538

dec_label_pc_2d68:                                ; preds = %dec_label_pc_2d40, %dec_label_pc_2d68
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %.reload = load i32, i32* %.reg2mem, !insn.addr !539
  %10 = add i32 %storemerge1.reload, %.reload, !insn.addr !540
  store i32 %10, i32* %3, align 4, !insn.addr !541
  %11 = add i32 %storemerge1.reload, 1, !insn.addr !542
  %12 = load i32, i32* %7, align 4, !insn.addr !537
  %13 = icmp ugt i32 %11, %12, !insn.addr !538
  store i32 %10, i32* %.reg2mem, !insn.addr !538
  store i32 %11, i32* %storemerge1.reg2mem, !insn.addr !538
  br i1 %13, label %dec_label_pc_2da0, label %dec_label_pc_2d68, !insn.addr !538

dec_label_pc_2da0:                                ; preds = %dec_label_pc_2d68, %dec_label_pc_2d40
  ret i64 0, !insn.addr !543

; uselistorder directives
  uselistorder i32* %7, { 1, 0 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge1.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_2d68, { 1, 0 }
}

define i64 @param_pthread_join() local_unnamed_addr {
dec_label_pc_2dac:
  %x0.0.reg2mem = alloca i64, !insn.addr !544
  %stack_var_-72.04.reg2mem = alloca i32, !insn.addr !544
  %indvars.iv.reg2mem = alloca i64, !insn.addr !544
  %indvars.iv7.reg2mem = alloca i64, !insn.addr !544
  %stack_var_-32 = alloca i64, align 8
  %stack_var_-64 = alloca i64, align 8
  %stack_var_-40 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !545
  %1 = inttoptr i64 %0 to i64*, !insn.addr !546
  %2 = load i64, i64* %1, align 8, !insn.addr !546
  store i64 4294967306, i64* %stack_var_-40, align 8, !insn.addr !547
  %3 = ptrtoint i64* %stack_var_-64 to i64
  %4 = ptrtoint i64* %stack_var_-40 to i64, !insn.addr !548
  store i64 0, i64* %indvars.iv7.reg2mem
  br label %dec_label_pc_2dec

dec_label_pc_2dec:                                ; preds = %dec_label_pc_2dac, %dec_label_pc_2e4c
  %indvars.iv7.reload = load i64, i64* %indvars.iv7.reg2mem
  %5 = mul i64 %indvars.iv7.reload, 8, !insn.addr !549
  %6 = add i64 %5, %3, !insn.addr !550
  %7 = mul nuw nsw i64 %indvars.iv7.reload, 12, !insn.addr !551
  %8 = add i64 %7, %4, !insn.addr !552
  %9 = inttoptr i64 %6 to i32*, !insn.addr !553
  %10 = inttoptr i64 %8 to i64*, !insn.addr !553
  %11 = call i32 @pthread_create(i32* %9, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_2000 to i64), i64 3392) to i64* (i64*)*), i64* %10), !insn.addr !553
  %12 = icmp eq i32 %11, 0, !insn.addr !554
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !555
  br i1 %12, label %dec_label_pc_2e4c, label %dec_label_pc_2ed0, !insn.addr !555

dec_label_pc_2e4c:                                ; preds = %dec_label_pc_2dec
  %indvars.iv.next8 = add nuw nsw i64 %indvars.iv7.reload, 1
  %13 = icmp ult i64 %indvars.iv.next8, 3, !insn.addr !556
  store i64 %indvars.iv.next8, i64* %indvars.iv7.reg2mem, !insn.addr !556
  br i1 %13, label %dec_label_pc_2dec, label %dec_label_pc_2ec0.preheader, !insn.addr !556

dec_label_pc_2ec0.preheader:                      ; preds = %dec_label_pc_2e4c
  %14 = ptrtoint i64* %stack_var_-32 to i64
  store i64 0, i64* %indvars.iv.reg2mem
  store i32 0, i32* %stack_var_-72.04.reg2mem
  br label %dec_label_pc_2e64

dec_label_pc_2e64:                                ; preds = %dec_label_pc_2ec0.preheader, %dec_label_pc_2e8c
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %15 = mul i64 %indvars.iv.reload, 8, !insn.addr !557
  %16 = add i64 %15, %3, !insn.addr !558
  %17 = inttoptr i64 %16 to i64*, !insn.addr !558
  %18 = load i64, i64* %17, align 8, !insn.addr !558
  %19 = trunc i64 %18 to i32, !insn.addr !559
  %20 = call i32 @pthread_join(i32 %19, i64** null), !insn.addr !559
  %21 = icmp eq i32 %20, 0, !insn.addr !560
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !561
  br i1 %21, label %dec_label_pc_2e8c, label %dec_label_pc_2ed0, !insn.addr !561

dec_label_pc_2e8c:                                ; preds = %dec_label_pc_2e64
  %stack_var_-72.04.reload = load i32, i32* %stack_var_-72.04.reg2mem
  %22 = mul nuw nsw i64 %indvars.iv.reload, 12, !insn.addr !562
  %23 = add i64 %22, %14, !insn.addr !563
  %24 = inttoptr i64 %23 to i32*, !insn.addr !563
  %25 = load i32, i32* %24, align 4, !insn.addr !563
  %26 = add i32 %25, %stack_var_-72.04.reload, !insn.addr !564
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %27 = icmp ult i64 %indvars.iv.next, 3, !insn.addr !565
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !565
  store i32 %26, i32* %stack_var_-72.04.reg2mem, !insn.addr !565
  br i1 %27, label %dec_label_pc_2e64, label %dec_label_pc_2ecc, !insn.addr !565

dec_label_pc_2ecc:                                ; preds = %dec_label_pc_2e8c
  %28 = zext i32 %26 to i64, !insn.addr !566
  store i64 %28, i64* %x0.0.reg2mem, !insn.addr !566
  br label %dec_label_pc_2ed0, !insn.addr !566

dec_label_pc_2ed0:                                ; preds = %dec_label_pc_2dec, %dec_label_pc_2e64, %dec_label_pc_2ecc
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %29 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !567
  %30 = inttoptr i64 %29 to i64*, !insn.addr !568
  %31 = load i64, i64* %30, align 8, !insn.addr !568
  %32 = icmp eq i64 %2, %31, !insn.addr !569
  br i1 %32, label %dec_label_pc_2ef4, label %dec_label_pc_2ef0, !insn.addr !570

dec_label_pc_2ef0:                                ; preds = %dec_label_pc_2ed0
  call void @__stack_chk_fail(), !insn.addr !571
  br label %dec_label_pc_2ef4, !insn.addr !571

dec_label_pc_2ef4:                                ; preds = %dec_label_pc_2ef0, %dec_label_pc_2ed0
  ret i64 %x0.0.reload, !insn.addr !572

; uselistorder directives
  uselistorder i32 %26, { 1, 0 }
  uselistorder i64* %indvars.iv7.reg2mem, { 1, 0, 2 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-72.04.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x0.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64 3, { 1, 0, 2 }
  uselistorder i64 12, { 1, 0 }
  uselistorder label %dec_label_pc_2ed0, { 2, 1, 0 }
  uselistorder label %dec_label_pc_2e64, { 1, 0 }
  uselistorder label %dec_label_pc_2dec, { 1, 0 }
}

define i64 @call_pthread_join(i64 %arg1) local_unnamed_addr {
dec_label_pc_2f00:
  %0 = call i64 @param_pthread_join(), !insn.addr !573
  ret i64 %0, !insn.addr !574
}

define i64 @thread_increment() local_unnamed_addr {
dec_label_pc_2f14:
  %0 = alloca i64
  %storemerge1.reg2mem = alloca i32, !insn.addr !575
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp eq i32 %2, 0, !insn.addr !576
  store i32 0, i32* %storemerge1.reg2mem, !insn.addr !576
  br i1 %3, label %dec_label_pc_2f8c, label %dec_label_pc_2f34, !insn.addr !576

dec_label_pc_2f34:                                ; preds = %dec_label_pc_2f14, %dec_label_pc_2f34
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %4 = call i32 @pthread_mutex_lock(i64* nonnull @global_var_15028), !insn.addr !577
  store i32 ptrtoint (i32* @global_var_15021 to i32), i32* bitcast (i32** @global_var_15020 to i32*), align 8, !insn.addr !578
  %5 = call i32 @pthread_mutex_unlock(i64* nonnull @global_var_15028), !insn.addr !579
  %6 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !580
  %7 = add nuw i32 %storemerge1.reload, 1, !insn.addr !581
  %exitcond = icmp eq i32 %7, %2
  store i32 %7, i32* %storemerge1.reg2mem, !insn.addr !576
  br i1 %exitcond, label %dec_label_pc_2f8c, label %dec_label_pc_2f34, !insn.addr !576

dec_label_pc_2f8c:                                ; preds = %dec_label_pc_2f34, %dec_label_pc_2f14
  ret i64 0, !insn.addr !582

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32* %storemerge1.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i32)* @usleep, { 2, 1, 0, 3 }
  uselistorder i32 ptrtoint (i32* @global_var_3e8 to i32), { 2, 4, 3, 0, 1 }
  uselistorder label %dec_label_pc_2f34, { 1, 0 }
}

define i64 @param_mutex_lock() local_unnamed_addr {
dec_label_pc_2f98:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !583
  %storemerge2.reg2mem = alloca i32, !insn.addr !583
  %storemerge13.reg2mem = alloca i32, !insn.addr !583
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %stack_var_-32 = alloca i32, align 4
  %3 = trunc i64 %2 to i32, !insn.addr !584
  %4 = trunc i64 %1 to i32, !insn.addr !585
  store i32 %4, i32* %stack_var_-32, align 4, !insn.addr !585
  %5 = mul i32 %3, 8, !insn.addr !586
  %6 = call i64* @malloc(i32 %5), !insn.addr !586
  %7 = icmp eq i64* %6, null, !insn.addr !587
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !588
  br i1 %7, label %dec_label_pc_30bc, label %dec_label_pc_2fcc, !insn.addr !588

dec_label_pc_2fcc:                                ; preds = %dec_label_pc_2f98
  store i32 0, i32* bitcast (i32** @global_var_15020 to i32*), align 8, !insn.addr !589
  %8 = icmp eq i32 %3, 0
  br i1 %8, label %dec_label_pc_3080, label %dec_label_pc_2fe0.lr.ph, !insn.addr !590

dec_label_pc_2fe0.lr.ph:                          ; preds = %dec_label_pc_2fcc
  %9 = ptrtoint i64* %6 to i64, !insn.addr !586
  %10 = bitcast i32* %stack_var_-32 to i64*, !insn.addr !591
  store i32 0, i32* %storemerge13.reg2mem
  br label %dec_label_pc_2fe0

dec_label_pc_2fe0:                                ; preds = %dec_label_pc_2fe0.lr.ph, %dec_label_pc_3030
  %storemerge13.reload = load i32, i32* %storemerge13.reg2mem
  %11 = sext i32 %storemerge13.reload to i64, !insn.addr !592
  %12 = mul i64 %11, 8, !insn.addr !593
  %13 = add i64 %12, %9, !insn.addr !594
  %14 = inttoptr i64 %13 to i32*, !insn.addr !591
  %15 = call i32 @pthread_create(i32* %14, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_2000 to i64), i64 3860) to i64* (i64*)*), i64* nonnull %10), !insn.addr !591
  %16 = icmp eq i32 %15, 0, !insn.addr !595
  br i1 %16, label %dec_label_pc_3030, label %dec_label_pc_3014, !insn.addr !596

dec_label_pc_3014:                                ; preds = %dec_label_pc_2fe0
  call void @free(i64* nonnull %6), !insn.addr !597
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !598
  br label %dec_label_pc_30bc, !insn.addr !598

dec_label_pc_3030:                                ; preds = %dec_label_pc_2fe0
  %17 = add nuw i32 %storemerge13.reload, 1, !insn.addr !599
  %18 = icmp ult i32 %17, %3, !insn.addr !590
  store i32 %17, i32* %storemerge13.reg2mem, !insn.addr !590
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !590
  br i1 %18, label %dec_label_pc_2fe0, label %dec_label_pc_3048, !insn.addr !590

dec_label_pc_3048:                                ; preds = %dec_label_pc_3030, %dec_label_pc_3048
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %19 = sext i32 %storemerge2.reload to i64, !insn.addr !600
  %20 = mul i64 %19, 8, !insn.addr !601
  %21 = add i64 %20, %9, !insn.addr !602
  %22 = inttoptr i64 %21 to i64*, !insn.addr !603
  %23 = load i64, i64* %22, align 8, !insn.addr !603
  %24 = trunc i64 %23 to i32, !insn.addr !604
  %25 = call i32 @pthread_join(i32 %24, i64** null), !insn.addr !604
  %26 = add nuw i32 %storemerge2.reload, 1, !insn.addr !605
  %exitcond = icmp eq i32 %26, %3
  store i32 %26, i32* %storemerge2.reg2mem, !insn.addr !606
  br i1 %exitcond, label %dec_label_pc_3080, label %dec_label_pc_3048, !insn.addr !606

dec_label_pc_3080:                                ; preds = %dec_label_pc_3048, %dec_label_pc_2fcc
  call void @free(i64* nonnull %6), !insn.addr !607
  %27 = load i32, i32* %stack_var_-32, align 4, !insn.addr !608
  %28 = mul i32 %27, %3, !insn.addr !609
  %29 = load i32, i32* bitcast (i32** @global_var_15020 to i32*), align 8, !insn.addr !610
  %30 = icmp eq i32 %28, %29, !insn.addr !611
  %. = select i1 %30, i64 42, i64 4294967293
  store i64 %., i64* %x0.0.reg2mem, !insn.addr !612
  br label %dec_label_pc_30bc, !insn.addr !612

dec_label_pc_30bc:                                ; preds = %dec_label_pc_3080, %dec_label_pc_2f98, %dec_label_pc_3014
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !613

; uselistorder directives
  uselistorder i64* %6, { 1, 0, 3, 2 }
  uselistorder i32 %3, { 1, 2, 4, 3, 0 }
  uselistorder i32* %stack_var_-32, { 1, 0, 2 }
  uselistorder i32* %storemerge13.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x0.0.reg2mem, { 0, 1, 3, 2 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i32* bitcast (i32** @global_var_15020 to i32*), { 2, 0, 1 }
  uselistorder label %dec_label_pc_30bc, { 0, 2, 1 }
  uselistorder label %dec_label_pc_3048, { 1, 0 }
  uselistorder label %dec_label_pc_2fe0, { 1, 0 }
}

define i64 @call_mutex_lock(i64 %arg1) local_unnamed_addr {
dec_label_pc_30c4:
  %0 = call i64 @param_mutex_lock(), !insn.addr !614
  ret i64 %0, !insn.addr !615
}

define i64 @consumer_thread() local_unnamed_addr {
dec_label_pc_30e0:
  %0 = call i32 @pthread_mutex_lock(i64* nonnull @global_var_15058), !insn.addr !616
  %1 = load i32, i32* bitcast (i32** @global_var_150b8 to i32*), align 8, !insn.addr !617
  %2 = icmp eq i32 %1, 0, !insn.addr !618
  br i1 %2, label %dec_label_pc_30fc, label %dec_label_pc_3124, !insn.addr !619

dec_label_pc_30fc:                                ; preds = %dec_label_pc_30e0, %dec_label_pc_30fc
  %3 = call i32 @pthread_cond_wait(i64* nonnull @global_var_15088, i64* nonnull @global_var_15058), !insn.addr !620
  %4 = load i32, i32* bitcast (i32** @global_var_150b8 to i32*), align 8, !insn.addr !617
  %5 = icmp eq i32 %4, 0, !insn.addr !618
  br i1 %5, label %dec_label_pc_30fc, label %dec_label_pc_3124, !insn.addr !619

dec_label_pc_3124:                                ; preds = %dec_label_pc_30fc, %dec_label_pc_30e0
  %6 = load i32, i32* bitcast (i32** @global_var_150bc to i32*), align 8, !insn.addr !621
  %7 = call i32 @pthread_mutex_unlock(i64* nonnull @global_var_15058), !insn.addr !622
  %8 = call i64* @malloc(i32 4), !insn.addr !623
  %9 = ptrtoint i64* %8 to i64, !insn.addr !623
  %10 = bitcast i64* %8 to i32*, !insn.addr !624
  store i32 %6, i32* %10, align 4, !insn.addr !624
  ret i64 %9, !insn.addr !625

; uselistorder directives
  uselistorder i32 4, { 1, 2, 3, 0 }
  uselistorder label %dec_label_pc_30fc, { 1, 0 }
}

define i64 @producer_thread() local_unnamed_addr {
dec_label_pc_3164:
  %0 = call i32 @sleep(i32 1), !insn.addr !626
  %1 = call i32 @pthread_mutex_lock(i64* nonnull @global_var_15058), !insn.addr !627
  store i32 42, i32* bitcast (i32** @global_var_150bc to i32*), align 8, !insn.addr !628
  store i32 1, i32* bitcast (i32** @global_var_150b8 to i32*), align 8, !insn.addr !629
  %2 = call i32 @pthread_cond_signal(i64* nonnull @global_var_15088), !insn.addr !630
  %3 = call i32 @pthread_mutex_unlock(i64* nonnull @global_var_15058), !insn.addr !631
  ret i64 0, !insn.addr !632

; uselistorder directives
  uselistorder i32 (i64*)* @pthread_mutex_unlock, { 2, 1, 0, 3 }
  uselistorder i32 (i64*)* @pthread_mutex_lock, { 2, 1, 0, 3 }
  uselistorder i64* @global_var_15058, { 0, 1, 3, 2, 4 }
}

define i64 @param_condition_variable() local_unnamed_addr {
dec_label_pc_31c8:
  %x0.0.reg2mem = alloca i64, !insn.addr !633
  %stack_var_-8 = alloca i64, align 8
  %stack_var_-24 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !634
  %1 = inttoptr i64 %0 to i64*, !insn.addr !635
  %2 = load i64, i64* %1, align 8, !insn.addr !635
  store i32 0, i32* bitcast (i32** @global_var_150b8 to i32*), align 8, !insn.addr !636
  store i32 0, i32* bitcast (i32** @global_var_150bc to i32*), align 8, !insn.addr !637
  %3 = call i32 @pthread_create(i32* nonnull %stack_var_-16, i64* null, i64* (i64*)* inttoptr (i64 12512 to i64* (i64*)*), i64* null), !insn.addr !638
  %4 = icmp eq i32 %3, 0, !insn.addr !639
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !640
  br i1 %4, label %dec_label_pc_3228, label %dec_label_pc_328c, !insn.addr !640

dec_label_pc_3228:                                ; preds = %dec_label_pc_31c8
  %5 = call i32 @pthread_create(i32* nonnull %stack_var_-24, i64* null, i64* (i64*)* inttoptr (i64 12644 to i64* (i64*)*), i64* null), !insn.addr !641
  %6 = icmp eq i32 %5, 0, !insn.addr !642
  %7 = load i32, i32* %stack_var_-16, align 4
  br i1 %6, label %dec_label_pc_325c, label %dec_label_pc_324c, !insn.addr !643

dec_label_pc_324c:                                ; preds = %dec_label_pc_3228
  %8 = call i32 @pthread_cancel(i32 %7), !insn.addr !644
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !645
  br label %dec_label_pc_328c, !insn.addr !645

dec_label_pc_325c:                                ; preds = %dec_label_pc_3228
  %9 = bitcast i64* %stack_var_-8 to i64**, !insn.addr !646
  %10 = call i32 @pthread_join(i32 %7, i64** nonnull %9), !insn.addr !646
  %11 = load i32, i32* %stack_var_-24, align 4, !insn.addr !647
  %12 = call i32 @pthread_join(i32 %11, i64** null), !insn.addr !648
  %13 = load i64, i64* %stack_var_-8, align 8
  %14 = inttoptr i64 %13 to i32*, !insn.addr !649
  %15 = load i32, i32* %14, align 4, !insn.addr !649
  %16 = inttoptr i64 %13 to i64*, !insn.addr !650
  call void @free(i64* %16), !insn.addr !650
  %17 = zext i32 %15 to i64, !insn.addr !651
  store i64 %17, i64* %x0.0.reg2mem, !insn.addr !651
  br label %dec_label_pc_328c, !insn.addr !651

dec_label_pc_328c:                                ; preds = %dec_label_pc_31c8, %dec_label_pc_325c, %dec_label_pc_324c
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %18 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !652
  %19 = inttoptr i64 %18 to i64*, !insn.addr !653
  %20 = load i64, i64* %19, align 8, !insn.addr !653
  %21 = icmp eq i64 %2, %20, !insn.addr !654
  br i1 %21, label %dec_label_pc_32b0, label %dec_label_pc_32ac, !insn.addr !655

dec_label_pc_32ac:                                ; preds = %dec_label_pc_328c
  call void @__stack_chk_fail(), !insn.addr !656
  br label %dec_label_pc_32b0, !insn.addr !656

dec_label_pc_32b0:                                ; preds = %dec_label_pc_32ac, %dec_label_pc_328c
  ret i64 %x0.0.reload, !insn.addr !657

; uselistorder directives
  uselistorder i32 %7, { 1, 0 }
  uselistorder i64* %stack_var_-8, { 1, 0 }
  uselistorder i64* %x0.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32* bitcast (i32** @global_var_150b8 to i32*), { 1, 2, 3, 0 }
  uselistorder label %dec_label_pc_328c, { 1, 2, 0 }
}

define i64 @call_condition_variable(i64 %arg1) local_unnamed_addr {
dec_label_pc_32bc:
  %0 = call i64 @param_condition_variable(), !insn.addr !658
  ret i64 %0, !insn.addr !659
}

define i64 @thread_atomic_increment() local_unnamed_addr {
dec_label_pc_32d0:
  %0 = alloca i64
  %storemerge1.reg2mem = alloca i32, !insn.addr !660
  %1 = load i64, i64* %0
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !661
  %3 = inttoptr i64 %2 to i64*
  %4 = load i64, i64* %3, align 8, !insn.addr !662
  %5 = trunc i64 %1 to i32
  %6 = icmp eq i32 %5, 0, !insn.addr !663
  store i32 0, i32* %storemerge1.reg2mem, !insn.addr !663
  br i1 %6, label %dec_label_pc_33ac, label %dec_label_pc_3308, !insn.addr !663

dec_label_pc_3308:                                ; preds = %dec_label_pc_32d0, %dec_label_pc_3308
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %7 = call i64 @__aarch64_ldadd4_acq_rel(), !insn.addr !664
  %8 = call i64 @__aarch64_cas4_acq_rel(), !insn.addr !665
  %9 = add nuw i32 %storemerge1.reload, 1, !insn.addr !666
  %exitcond = icmp eq i32 %9, %5
  store i32 %9, i32* %storemerge1.reg2mem, !insn.addr !663
  br i1 %exitcond, label %dec_label_pc_3384, label %dec_label_pc_3308, !insn.addr !663

dec_label_pc_3384:                                ; preds = %dec_label_pc_3308
  %.pre = load i64, i64* @global_var_14fe8, align 8
  %.phi.trans.insert = inttoptr i64 %.pre to i64*
  %.pre2 = load i64, i64* %.phi.trans.insert, align 8
  %10 = icmp eq i64 %4, %.pre2, !insn.addr !667
  br i1 %10, label %dec_label_pc_33ac, label %dec_label_pc_33a8, !insn.addr !668

dec_label_pc_33a8:                                ; preds = %dec_label_pc_3384
  call void @__stack_chk_fail(), !insn.addr !669
  br label %dec_label_pc_33ac, !insn.addr !669

dec_label_pc_33ac:                                ; preds = %dec_label_pc_32d0, %dec_label_pc_33a8, %dec_label_pc_3384
  ret i64 0, !insn.addr !670

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i32* %storemerge1.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_33ac, { 1, 2, 0 }
  uselistorder label %dec_label_pc_3308, { 1, 0 }
}

define i64 @thread_atomic_load_store() local_unnamed_addr {
dec_label_pc_33bc:
  %0 = load i32, i32* @global_var_150c0, align 4
  %1 = add i32 %0, 100, !insn.addr !671
  %2 = sext i32 %0 to i64, !insn.addr !672
  call void @__asm_stlr(i32 %1, i64 %2), !insn.addr !672
  ret i64 0, !insn.addr !673
}

define i64 @param_atomic_ops() local_unnamed_addr {
dec_label_pc_33f8:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !674
  %storemerge3.reg2mem = alloca i32, !insn.addr !674
  %storemerge24.reg2mem = alloca i32, !insn.addr !674
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %stack_var_-16 = alloca i32, align 4
  %stack_var_-48 = alloca i32, align 4
  %3 = trunc i64 %2 to i32, !insn.addr !675
  %4 = trunc i64 %1 to i32, !insn.addr !676
  store i32 %4, i32* %stack_var_-48, align 4, !insn.addr !676
  %5 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !677
  %6 = inttoptr i64 %5 to i64*, !insn.addr !678
  %7 = load i64, i64* %6, align 8, !insn.addr !678
  %8 = mul i32 %3, 8, !insn.addr !679
  %9 = call i64* @malloc(i32 %8), !insn.addr !679
  %10 = icmp eq i64* %9, null, !insn.addr !680
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !681
  br i1 %10, label %dec_label_pc_3554, label %dec_label_pc_3440, !insn.addr !681

dec_label_pc_3440:                                ; preds = %dec_label_pc_33f8
  %11 = ptrtoint i64* %9 to i64, !insn.addr !679
  %12 = load i32, i32* @global_var_150c0, align 4, !insn.addr !682
  %13 = sext i32 %12 to i64, !insn.addr !682
  call void @__asm_stlr(i32 0, i64 %13), !insn.addr !682
  %14 = icmp eq i32 %3, 0
  br i1 %14, label %dec_label_pc_34b4, label %dec_label_pc_3454.lr.ph, !insn.addr !683

dec_label_pc_3454.lr.ph:                          ; preds = %dec_label_pc_3440
  %15 = bitcast i32* %stack_var_-48 to i64*, !insn.addr !684
  store i32 0, i32* %storemerge24.reg2mem
  br label %dec_label_pc_3454

dec_label_pc_3454:                                ; preds = %dec_label_pc_3454.lr.ph, %dec_label_pc_34a4
  %storemerge24.reload = load i32, i32* %storemerge24.reg2mem
  %16 = sext i32 %storemerge24.reload to i64, !insn.addr !685
  %17 = mul i64 %16, 8, !insn.addr !686
  %18 = add i64 %17, %11, !insn.addr !687
  %19 = inttoptr i64 %18 to i32*, !insn.addr !684
  %20 = call i32 @pthread_create(i32* %19, i64* null, i64* (i64*)* inttoptr (i64 13008 to i64* (i64*)*), i64* nonnull %15), !insn.addr !684
  %21 = icmp eq i32 %20, 0, !insn.addr !688
  br i1 %21, label %dec_label_pc_34a4, label %dec_label_pc_3488, !insn.addr !689

dec_label_pc_3488:                                ; preds = %dec_label_pc_3454
  call void @free(i64* nonnull %9), !insn.addr !690
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !691
  br label %dec_label_pc_3554, !insn.addr !691

dec_label_pc_34a4:                                ; preds = %dec_label_pc_3454
  %22 = add nuw i32 %storemerge24.reload, 1, !insn.addr !692
  %23 = icmp ult i32 %22, %3, !insn.addr !683
  store i32 %22, i32* %storemerge24.reg2mem, !insn.addr !683
  br i1 %23, label %dec_label_pc_3454, label %dec_label_pc_34b4, !insn.addr !683

dec_label_pc_34b4:                                ; preds = %dec_label_pc_34a4, %dec_label_pc_3440
  %24 = call i32 @pthread_create(i32* nonnull %stack_var_-16, i64* null, i64* (i64*)* inttoptr (i64 13244 to i64* (i64*)*), i64* null), !insn.addr !693
  %25 = icmp eq i32 %24, 0, !insn.addr !694
  br i1 %25, label %dec_label_pc_34d8, label %dec_label_pc_34e4, !insn.addr !695

dec_label_pc_34d8:                                ; preds = %dec_label_pc_34b4
  %26 = load i32, i32* %stack_var_-16, align 4, !insn.addr !696
  %27 = call i32 @pthread_join(i32 %26, i64** null), !insn.addr !697
  br label %dec_label_pc_34e4, !insn.addr !697

dec_label_pc_34e4:                                ; preds = %dec_label_pc_34b4, %dec_label_pc_34d8
  store i32 0, i32* %storemerge3.reg2mem, !insn.addr !698
  br i1 %14, label %dec_label_pc_3524, label %dec_label_pc_34ec, !insn.addr !698

dec_label_pc_34ec:                                ; preds = %dec_label_pc_34e4, %dec_label_pc_34ec
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %28 = sext i32 %storemerge3.reload to i64, !insn.addr !699
  %29 = mul i64 %28, 8, !insn.addr !700
  %30 = add i64 %29, %11, !insn.addr !701
  %31 = inttoptr i64 %30 to i64*, !insn.addr !702
  %32 = load i64, i64* %31, align 8, !insn.addr !702
  %33 = trunc i64 %32 to i32, !insn.addr !703
  %34 = call i32 @pthread_join(i32 %33, i64** null), !insn.addr !703
  %35 = add nuw i32 %storemerge3.reload, 1, !insn.addr !704
  %exitcond = icmp eq i32 %35, %3
  store i32 %35, i32* %storemerge3.reg2mem, !insn.addr !698
  br i1 %exitcond, label %dec_label_pc_3524, label %dec_label_pc_34ec, !insn.addr !698

dec_label_pc_3524:                                ; preds = %dec_label_pc_34ec, %dec_label_pc_34e4
  %36 = load i32, i32* @global_var_150c0, align 4, !insn.addr !705
  call void @free(i64* nonnull %9), !insn.addr !706
  %37 = icmp slt i32 %36, 1, !insn.addr !707
  %. = select i1 %37, i64 4294967293, i64 42
  store i64 %., i64* %x0.0.reg2mem, !insn.addr !708
  br label %dec_label_pc_3554, !insn.addr !708

dec_label_pc_3554:                                ; preds = %dec_label_pc_3524, %dec_label_pc_33f8, %dec_label_pc_3488
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %38 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !709
  %39 = inttoptr i64 %38 to i64*, !insn.addr !710
  %40 = load i64, i64* %39, align 8, !insn.addr !710
  %41 = icmp eq i64 %7, %40, !insn.addr !711
  br i1 %41, label %dec_label_pc_3578, label %dec_label_pc_3574, !insn.addr !712

dec_label_pc_3574:                                ; preds = %dec_label_pc_3554
  call void @__stack_chk_fail(), !insn.addr !713
  br label %dec_label_pc_3578, !insn.addr !713

dec_label_pc_3578:                                ; preds = %dec_label_pc_3574, %dec_label_pc_3554
  ret i64 %x0.0.reload, !insn.addr !714

; uselistorder directives
  uselistorder i64* %9, { 1, 0, 3, 2 }
  uselistorder i32 %3, { 1, 3, 2, 0 }
  uselistorder i32* %storemerge24.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x0.0.reg2mem, { 0, 1, 3, 2 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i32* @global_var_150c0, { 1, 2, 0 }
  uselistorder label %dec_label_pc_3554, { 0, 2, 1 }
  uselistorder label %dec_label_pc_34ec, { 1, 0 }
  uselistorder label %dec_label_pc_34e4, { 1, 0 }
  uselistorder label %dec_label_pc_3454, { 1, 0 }
}

define i64 @call_atomic_ops(i64 %arg1) local_unnamed_addr {
dec_label_pc_3584:
  %0 = call i64 @param_atomic_ops(), !insn.addr !715
  ret i64 %0, !insn.addr !716
}

define i64 @thread_tls_test() local_unnamed_addr {
dec_label_pc_35a0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = call i64 @__asm_mrs(i64 %2, i64 %1), !insn.addr !717
  %4 = add i64 %3, 16, !insn.addr !718
  %5 = inttoptr i64 %4 to i32*, !insn.addr !719
  %6 = load i32, i32* %5, align 4, !insn.addr !719
  %7 = zext i32 %6 to i64, !insn.addr !719
  %8 = call i64 @__asm_mrs(i64 %7, i64 %3), !insn.addr !720
  %9 = add i64 %8, 16, !insn.addr !721
  %10 = inttoptr i64 %9 to i32*, !insn.addr !722
  %11 = load i32, i32* %10, align 4, !insn.addr !722
  %12 = zext i32 %11 to i64, !insn.addr !722
  %13 = add i32 %11, 50, !insn.addr !723
  %14 = call i64 @__asm_mrs(i64 %12, i64 %8), !insn.addr !724
  %15 = add i64 %14, 16, !insn.addr !725
  %16 = inttoptr i64 %15 to i32*, !insn.addr !726
  store i32 %13, i32* %16, align 4, !insn.addr !726
  %17 = call i64 @__asm_mrs(i64 %15, i64 %14), !insn.addr !727
  %18 = add i64 %17, 24, !insn.addr !728
  %19 = inttoptr i64 %18 to i8*, !insn.addr !729
  %20 = inttoptr i64 %2 to i8*, !insn.addr !729
  %21 = call i8* @strncpy(i8* %19, i8* %20, i32 31), !insn.addr !729
  %22 = call i64* @malloc(i32 8), !insn.addr !730
  %23 = ptrtoint i64* %22 to i64, !insn.addr !730
  %24 = bitcast i64* %22 to i32*, !insn.addr !731
  store i32 %6, i32* %24, align 4, !insn.addr !731
  %25 = add i64 %23, 4, !insn.addr !732
  %26 = call i64 @__asm_mrs(i64 %7, i64 %17), !insn.addr !733
  %27 = add i64 %26, 16, !insn.addr !734
  %28 = inttoptr i64 %27 to i32*, !insn.addr !735
  %29 = load i32, i32* %28, align 4, !insn.addr !735
  %30 = inttoptr i64 %25 to i32*, !insn.addr !736
  store i32 %29, i32* %30, align 4, !insn.addr !736
  ret i64 %23, !insn.addr !737

; uselistorder directives
  uselistorder i64 %17, { 1, 0 }
  uselistorder i64 %15, { 1, 0 }
  uselistorder i64 %14, { 1, 0 }
  uselistorder i64 %8, { 1, 0 }
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @param_thread_local_storage() local_unnamed_addr {
dec_label_pc_3644:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !738
  %stack_var_-48.0.lcssa.reg2mem = alloca i32, !insn.addr !738
  %stack_var_-52.0.lcssa.reg2mem = alloca i32, !insn.addr !738
  %stack_var_-52.011.reg2mem = alloca i32, !insn.addr !738
  %stack_var_-48.012.reg2mem = alloca i32, !insn.addr !738
  %storemerge13.reg2mem = alloca i32, !insn.addr !738
  %storemerge210.reg2mem = alloca i32, !insn.addr !738
  %storemerge315.reg2mem = alloca i32, !insn.addr !738
  %indvars.iv.reg2mem = alloca i64, !insn.addr !738
  %1 = load i64, i64* %0
  %stack_var_-32 = alloca i64, align 8
  %2 = trunc i64 %1 to i32, !insn.addr !739
  %3 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !740
  %4 = inttoptr i64 %3 to i64*, !insn.addr !741
  %5 = load i64, i64* %4, align 8, !insn.addr !741
  %6 = mul i32 %2, 8, !insn.addr !742
  %7 = call i64* @malloc(i32 %6), !insn.addr !742
  %8 = call i64* @malloc(i32 %6), !insn.addr !743
  %9 = icmp eq i64* %7, null, !insn.addr !744
  %10 = icmp eq i64* %8, null, !insn.addr !745
  %or.cond = or i1 %9, %10
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !746
  br i1 %or.cond, label %dec_label_pc_38c8, label %dec_label_pc_3704.preheader, !insn.addr !746

dec_label_pc_3704.preheader:                      ; preds = %dec_label_pc_3644
  %11 = icmp eq i32 %2, 0
  store i32 0, i32* %stack_var_-52.0.lcssa.reg2mem, !insn.addr !747
  store i32 0, i32* %stack_var_-48.0.lcssa.reg2mem, !insn.addr !747
  br i1 %11, label %dec_label_pc_386c, label %dec_label_pc_36b0.preheader, !insn.addr !747

dec_label_pc_36b0.preheader:                      ; preds = %dec_label_pc_3704.preheader
  %12 = ptrtoint i64* %7 to i64, !insn.addr !742
  %13 = ptrtoint i64* %8 to i64, !insn.addr !743
  %wide.trip.count = and i64 %1, 4294967295
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_36b0

dec_label_pc_36b0:                                ; preds = %dec_label_pc_36b0.preheader, %dec_label_pc_36b0
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %sext = mul i64 %indvars.iv.reload, 4294967296
  %14 = ashr exact i64 %sext, 29, !insn.addr !748
  %15 = add i64 %14, %13, !insn.addr !749
  %16 = call i64* @malloc(i32 16), !insn.addr !750
  %17 = ptrtoint i64* %16 to i64, !insn.addr !750
  %18 = inttoptr i64 %15 to i64*, !insn.addr !751
  store i64 %17, i64* %18, align 8, !insn.addr !751
  %19 = bitcast i64* %16 to i8*, !insn.addr !752
  %20 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %19, i32 16, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_3e98, i64 0, i64 0), i64 %indvars.iv.reload), !insn.addr !752
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond20 = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !747
  store i32 0, i32* %storemerge315.reg2mem, !insn.addr !747
  br i1 %exitcond20, label %dec_label_pc_371c, label %dec_label_pc_36b0, !insn.addr !747

dec_label_pc_371c:                                ; preds = %dec_label_pc_36b0, %dec_label_pc_37b4
  %storemerge315.reload = load i32, i32* %storemerge315.reg2mem
  %21 = sext i32 %storemerge315.reload to i64, !insn.addr !753
  %22 = mul i64 %21, 8, !insn.addr !754
  %23 = add i64 %22, %12, !insn.addr !755
  %24 = add i64 %22, %13, !insn.addr !756
  %25 = inttoptr i64 %24 to i64*, !insn.addr !757
  %26 = load i64, i64* %25, align 8, !insn.addr !757
  %27 = inttoptr i64 %23 to i32*, !insn.addr !758
  %28 = inttoptr i64 %26 to i64*, !insn.addr !758
  %29 = call i32 @pthread_create(i32* %27, i64* null, i64* (i64*)* inttoptr (i64 13728 to i64* (i64*)*), i64* %28), !insn.addr !758
  %30 = icmp eq i32 %29, 0, !insn.addr !759
  store i32 0, i32* %storemerge210.reg2mem, !insn.addr !760
  br i1 %30, label %dec_label_pc_37b4, label %dec_label_pc_3768, !insn.addr !760

dec_label_pc_3768:                                ; preds = %dec_label_pc_371c, %dec_label_pc_3768
  %storemerge210.reload = load i32, i32* %storemerge210.reg2mem
  %31 = sext i32 %storemerge210.reload to i64, !insn.addr !761
  %32 = mul i64 %31, 8, !insn.addr !762
  %33 = add i64 %32, %13, !insn.addr !763
  %34 = inttoptr i64 %33 to i64*, !insn.addr !764
  %35 = load i64, i64* %34, align 8, !insn.addr !764
  %36 = inttoptr i64 %35 to i64*, !insn.addr !765
  call void @free(i64* %36), !insn.addr !765
  %37 = add nuw i32 %storemerge210.reload, 1, !insn.addr !766
  %exitcond19 = icmp eq i32 %storemerge210.reload, %storemerge315.reload
  store i32 %37, i32* %storemerge210.reg2mem, !insn.addr !767
  br i1 %exitcond19, label %dec_label_pc_379c, label %dec_label_pc_3768, !insn.addr !767

dec_label_pc_379c:                                ; preds = %dec_label_pc_3768
  call void @free(i64* %8), !insn.addr !768
  call void @free(i64* %7), !insn.addr !769
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !770
  br label %dec_label_pc_38c8, !insn.addr !770

dec_label_pc_37b4:                                ; preds = %dec_label_pc_371c
  %38 = add nuw i32 %storemerge315.reload, 1, !insn.addr !771
  %39 = icmp ult i32 %38, %2, !insn.addr !772
  store i32 %38, i32* %storemerge315.reg2mem, !insn.addr !772
  br i1 %39, label %dec_label_pc_371c, label %dec_label_pc_37e0.lr.ph, !insn.addr !772

dec_label_pc_37e0.lr.ph:                          ; preds = %dec_label_pc_37b4
  %40 = bitcast i64* %stack_var_-32 to i64**, !insn.addr !773
  store i32 0, i32* %storemerge13.reg2mem
  store i32 0, i32* %stack_var_-48.012.reg2mem
  store i32 0, i32* %stack_var_-52.011.reg2mem
  br label %dec_label_pc_37e0

dec_label_pc_37e0:                                ; preds = %dec_label_pc_37e0, %dec_label_pc_37e0.lr.ph
  %stack_var_-52.011.reload = load i32, i32* %stack_var_-52.011.reg2mem
  %stack_var_-48.012.reload = load i32, i32* %stack_var_-48.012.reg2mem
  %storemerge13.reload = load i32, i32* %storemerge13.reg2mem
  %41 = sext i32 %storemerge13.reload to i64, !insn.addr !774
  %42 = mul i64 %41, 8, !insn.addr !775
  %43 = add i64 %42, %12, !insn.addr !776
  %44 = inttoptr i64 %43 to i64*, !insn.addr !777
  %45 = load i64, i64* %44, align 8, !insn.addr !777
  %46 = trunc i64 %45 to i32, !insn.addr !773
  %47 = call i32 @pthread_join(i32 %46, i64** nonnull %40), !insn.addr !773
  %48 = load i64, i64* %stack_var_-32, align 8, !insn.addr !778
  %49 = inttoptr i64 %48 to i32*, !insn.addr !779
  %50 = load i32, i32* %49, align 4, !insn.addr !779
  %51 = add i32 %50, %stack_var_-52.011.reload, !insn.addr !780
  %52 = add i64 %48, 4, !insn.addr !781
  %53 = inttoptr i64 %52 to i32*, !insn.addr !782
  %54 = load i32, i32* %53, align 4, !insn.addr !782
  %55 = add i32 %54, %stack_var_-48.012.reload, !insn.addr !783
  %56 = inttoptr i64 %48 to i64*, !insn.addr !784
  call void @free(i64* %56), !insn.addr !784
  %57 = add i64 %42, %13, !insn.addr !785
  %58 = inttoptr i64 %57 to i64*, !insn.addr !786
  %59 = load i64, i64* %58, align 8, !insn.addr !786
  %60 = inttoptr i64 %59 to i64*, !insn.addr !787
  call void @free(i64* %60), !insn.addr !787
  %61 = add nuw i32 %storemerge13.reload, 1, !insn.addr !788
  %exitcond = icmp eq i32 %61, %2
  store i32 %61, i32* %storemerge13.reg2mem, !insn.addr !789
  store i32 %55, i32* %stack_var_-48.012.reg2mem, !insn.addr !789
  store i32 %51, i32* %stack_var_-52.011.reg2mem, !insn.addr !789
  store i32 %51, i32* %stack_var_-52.0.lcssa.reg2mem, !insn.addr !789
  store i32 %55, i32* %stack_var_-48.0.lcssa.reg2mem, !insn.addr !789
  br i1 %exitcond, label %dec_label_pc_386c, label %dec_label_pc_37e0, !insn.addr !789

dec_label_pc_386c:                                ; preds = %dec_label_pc_37e0, %dec_label_pc_3704.preheader
  %stack_var_-48.0.lcssa.reload = load i32, i32* %stack_var_-48.0.lcssa.reg2mem
  %stack_var_-52.0.lcssa.reload = load i32, i32* %stack_var_-52.0.lcssa.reg2mem
  call void @free(i64* %8), !insn.addr !790
  call void @free(i64* %7), !insn.addr !791
  %62 = mul i32 %2, 100, !insn.addr !792
  %63 = icmp eq i32 %stack_var_-52.0.lcssa.reload, %62, !insn.addr !793
  %64 = mul i32 %2, 150, !insn.addr !794
  %65 = icmp eq i32 %stack_var_-48.0.lcssa.reload, %64, !insn.addr !795
  %or.cond8 = icmp eq i1 %63, %65
  %spec.select = select i1 %or.cond8, i64 42, i64 4294967293
  store i64 %spec.select, i64* %x0.0.reg2mem
  br label %dec_label_pc_38c8

dec_label_pc_38c8:                                ; preds = %dec_label_pc_386c, %dec_label_pc_3644, %dec_label_pc_379c
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %66 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !796
  %67 = inttoptr i64 %66 to i64*, !insn.addr !797
  %68 = load i64, i64* %67, align 8, !insn.addr !797
  %69 = icmp eq i64 %5, %68, !insn.addr !798
  br i1 %69, label %dec_label_pc_38ec, label %dec_label_pc_38e8, !insn.addr !799

dec_label_pc_38e8:                                ; preds = %dec_label_pc_38c8
  call void @__stack_chk_fail(), !insn.addr !800
  br label %dec_label_pc_38ec, !insn.addr !800

dec_label_pc_38ec:                                ; preds = %dec_label_pc_38e8, %dec_label_pc_38c8
  ret i64 %x0.0.reload, !insn.addr !801

; uselistorder directives
  uselistorder i64 %42, { 1, 0 }
  uselistorder i32 %storemerge210.reload, { 2, 0, 1 }
  uselistorder i64 %22, { 1, 0 }
  uselistorder i32 %storemerge315.reload, { 0, 2, 1 }
  uselistorder i64* %8, { 1, 0, 3, 2 }
  uselistorder i64* %7, { 1, 0, 3, 2 }
  uselistorder i32 %6, { 1, 0 }
  uselistorder i32 %2, { 3, 4, 1, 5, 2, 0 }
  uselistorder i64* %stack_var_-32, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge315.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge210.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge13.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-48.012.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-52.011.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x0.0.reg2mem, { 0, 1, 3, 2 }
  uselistorder void ()* @__stack_chk_fail, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 15, 14, 16 }
  uselistorder i64 4294967293, { 5, 6, 7, 0, 1, 2, 8, 3, 4 }
  uselistorder i64 42, { 2, 3, 4, 0, 8, 5, 6, 9, 7, 10, 1, 11, 12 }
  uselistorder i64 4, { 4, 5, 6, 0, 1, 2, 3 }
  uselistorder i32 (i32, i64**)* @pthread_join, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder i64 4294967294, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 10 }
  uselistorder void (i64*)* @free, { 11, 10, 13, 12, 8, 7, 9, 6, 5, 4, 3, 2, 1, 0, 14 }
  uselistorder i32 (i32*, i64*, i64* (i64*)*, i64*)* @pthread_create, { 7, 5, 6, 4, 3, 2, 1, 0, 8 }
  uselistorder i64 8, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 10, 9, 11 }
  uselistorder i64 1, { 1, 3, 2, 7, 4, 8, 5, 6, 0, 9 }
  uselistorder i64* null, { 2, 0, 1, 5, 6, 4, 3, 7, 8, 9, 10, 12, 11, 13, 14, 15, 16 }
  uselistorder i64* (i32)* @malloc, { 8, 7, 6, 5, 4, 3, 2, 1, 0, 9 }
  uselistorder i32 8, { 0, 3, 1, 2 }
  uselistorder i64* @global_var_14fe8, { 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31 }
  uselistorder label %dec_label_pc_38c8, { 0, 2, 1 }
  uselistorder label %dec_label_pc_3768, { 1, 0 }
  uselistorder label %dec_label_pc_371c, { 1, 0 }
  uselistorder label %dec_label_pc_36b0, { 1, 0 }
}

define i64 @call_thread_local_storage(i64 %arg1) local_unnamed_addr {
dec_label_pc_38fc:
  %0 = call i64 @param_thread_local_storage(), !insn.addr !802
  ret i64 %0, !insn.addr !803
}

define i64 @test_thread_concurrency(i64 %arg1) local_unnamed_addr {
dec_label_pc_3914:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3ea8 to i8*)), !insn.addr !804
  %1 = call i64 @call_pthread_create(i64 ptrtoint (i32* @0 to i64)), !insn.addr !805
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3ec8 to i8*)), !insn.addr !806
  %3 = call i64 @call_pthread_join(i64 ptrtoint (i32* @0 to i64)), !insn.addr !807
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3ee8 to i8*)), !insn.addr !808
  %5 = call i64 @call_mutex_lock(i64 ptrtoint (i32* @0 to i64)), !insn.addr !809
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3f08 to i8*)), !insn.addr !810
  %7 = call i64 @call_condition_variable(i64 ptrtoint (i32* @0 to i64)), !insn.addr !811
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3f28 to i8*)), !insn.addr !812
  %9 = call i64 @call_atomic_ops(i64 ptrtoint (i32* @0 to i64)), !insn.addr !813
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3f48 to i8*)), !insn.addr !814
  %11 = call i64 @call_thread_local_storage(i64 ptrtoint (i32* @0 to i64)), !insn.addr !815
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3f68 to i8*)), !insn.addr !816
  %13 = sext i32 %12 to i64, !insn.addr !816
  ret i64 %13, !insn.addr !817

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 26 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_39ac:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @test_standard_library_functions(i64 %1), !insn.addr !818
  %3 = call i64 @test_system_calls(i64 ptrtoint (i32* @0 to i64)), !insn.addr !819
  %4 = call i64 @test_thread_concurrency(i64 ptrtoint (i32* @0 to i64)), !insn.addr !820
  ret i64 0, !insn.addr !821

; uselistorder directives
  uselistorder i64 0, { 7, 82, 83, 0, 8, 9, 10, 11, 1, 2, 12, 84, 85, 96, 86, 87, 3, 4, 5, 18, 6, 19, 88, 89, 13, 14, 15, 16, 90, 91, 92, 93, 94, 95, 20, 21, 105, 17, 106, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 97, 98, 99, 100, 101, 102, 103, 104 }
}

define i64 @__aarch64_cas4_acq_rel() local_unnamed_addr {
dec_label_pc_39d0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  call void @__asm_hint(i64 34), !insn.addr !822
  %4 = load i8, i8* bitcast (i32* @global_var_150c4 to i8*), align 4, !insn.addr !823
  %5 = icmp eq i8 %4, 0, !insn.addr !824
  br i1 %5, label %dec_label_pc_39e8, label %dec_label_pc_39e0, !insn.addr !824

dec_label_pc_39e0:                                ; preds = %dec_label_pc_39d0
  %6 = trunc i64 %3 to i32, !insn.addr !825
  %7 = trunc i64 %2 to i32, !insn.addr !825
  call void @__asm_casal(i32 %6, i32 %7, i64 %1), !insn.addr !825
  ret i64 %3, !insn.addr !826

dec_label_pc_39e8:                                ; preds = %dec_label_pc_39d0
  %8 = and i64 %3, 4294967295, !insn.addr !827
  %9 = trunc i64 %2 to i32
  %10 = and i64 %1, 4294967295, !insn.addr !828
  %11 = icmp eq i64 %8, %10, !insn.addr !829
  br i1 %11, label %dec_label_pc_39f8, label %dec_label_pc_3a00, !insn.addr !829

dec_label_pc_39f8:                                ; preds = %dec_label_pc_39e8, %dec_label_pc_39f8
  %12 = call i32 @__asm_stlxr(i32 %9, i64 %1), !insn.addr !830
  %13 = icmp eq i32 %12, 0, !insn.addr !831
  br i1 %13, label %dec_label_pc_3a00, label %dec_label_pc_39f8, !insn.addr !831

dec_label_pc_3a00:                                ; preds = %dec_label_pc_39f8, %dec_label_pc_39e8
  ret i64 %10, !insn.addr !832

; uselistorder directives
  uselistorder i64 %10, { 1, 0 }
  uselistorder i64 %3, { 2, 1, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 1, 2, 0 }
  uselistorder i64* %0, { 2, 1, 0 }
  uselistorder label %dec_label_pc_39f8, { 1, 0 }
}

define i64 @__aarch64_ldadd4_acq_rel() local_unnamed_addr {
dec_label_pc_3a10:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  call void @__asm_hint(i64 34), !insn.addr !833
  %3 = load i8, i8* bitcast (i32* @global_var_150c4 to i8*), align 4, !insn.addr !834
  %4 = icmp eq i8 %3, 0, !insn.addr !835
  br i1 %4, label %dec_label_pc_3a2c.preheader, label %dec_label_pc_3a20, !insn.addr !835

dec_label_pc_3a2c.preheader:                      ; preds = %dec_label_pc_3a10
  %5 = trunc i64 %1 to i32
  %6 = trunc i64 %2 to i32, !insn.addr !836
  %7 = add i32 %6, %5, !insn.addr !836
  br label %dec_label_pc_3a2c

dec_label_pc_3a20:                                ; preds = %dec_label_pc_3a10
  %8 = trunc i64 %2 to i32, !insn.addr !837
  call void @__asm_ldaddal(i32 %8, i32 %8, i64 %1), !insn.addr !837
  ret i64 %2, !insn.addr !838

dec_label_pc_3a2c:                                ; preds = %dec_label_pc_3a2c.preheader, %dec_label_pc_3a2c
  %9 = call i32 @__asm_stlxr(i32 %7, i64 %1), !insn.addr !839
  %10 = icmp eq i32 %9, 0, !insn.addr !840
  br i1 %10, label %dec_label_pc_3a3c, label %dec_label_pc_3a2c, !insn.addr !840

dec_label_pc_3a3c:                                ; preds = %dec_label_pc_3a2c
  %11 = and i64 %1, 4294967295, !insn.addr !841
  ret i64 %11, !insn.addr !842

; uselistorder directives
  uselistorder i64 %2, { 1, 0, 2 }
  uselistorder i64 %1, { 3, 2, 0, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 4294967295, { 16, 17, 29, 18, 0, 1, 2, 3, 4, 5, 6, 25, 7, 8, 9, 10, 26, 11, 19, 27, 30, 24, 20, 21, 12, 13, 28, 14, 31, 15, 32, 33, 34, 22, 35, 23, 36 }
  uselistorder i8 0, { 0, 1, 3, 4, 2 }
  uselistorder i32 0, { 49, 50, 2, 3, 4, 5, 45, 6, 0, 1, 17, 7, 47, 46, 8, 18, 48, 9, 19, 51, 52, 53, 54, 55, 22, 10, 56, 11, 20, 57, 12, 21, 58, 13, 59, 14, 60, 61, 62, 25, 63, 28, 24, 64, 26, 65, 27, 23, 66, 29, 30, 67, 68, 69, 70, 71, 31, 72, 73, 32, 33, 74, 75, 76, 77, 78, 79, 34, 80, 81, 82, 83, 84, 85, 15, 35, 16, 86, 87, 88, 43, 36, 89, 44, 37, 38, 39, 40, 41, 42 }
  uselistorder i8* bitcast (i32* @global_var_150c4 to i8*), { 1, 0 }
  uselistorder label %dec_label_pc_3a2c, { 1, 0 }
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_3a40:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !843

; uselistorder directives
  uselistorder i32 1, { 25, 24, 23, 22, 114, 115, 116, 96, 36, 35, 34, 33, 32, 31, 30, 29, 28, 21, 20, 74, 117, 118, 97, 88, 39, 38, 37, 19, 119, 40, 18, 89, 90, 98, 41, 75, 76, 120, 121, 99, 44, 43, 42, 17, 122, 45, 16, 102, 101, 100, 49, 48, 47, 46, 123, 87, 51, 50, 15, 104, 91, 103, 52, 14, 13, 77, 57, 56, 55, 54, 53, 78, 12, 79, 58, 80, 81, 82, 106, 105, 59, 83, 92, 107, 60, 27, 93, 61, 11, 108, 10, 62, 9, 94, 63, 26, 66, 65, 64, 8, 84, 69, 68, 67, 7, 85, 86, 109, 70, 6, 71, 5, 111, 110, 72, 4, 3, 112, 95, 2, 1, 73, 113, 0 }
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

declare void @__cxa_finalize(i64*) local_unnamed_addr

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

declare void @__stack_chk_fail() local_unnamed_addr

declare i32 @close(i32) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare i32 @stat(i8*, %stat*) local_unnamed_addr

declare i32 @write(i32, i64*, i32) local_unnamed_addr

declare i32 @__getauxval(i32) local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

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

declare i32 @__asm_ubfx(i32, i32, i64, i64) local_unnamed_addr

declare void @__asm_hint(i64) local_unnamed_addr

declare void @__asm_casal(i32, i32, i64) local_unnamed_addr

declare i32 @__asm_stlxr(i32, i64) local_unnamed_addr

declare void @__asm_ldaddal(i32, i32, i64) local_unnamed_addr

declare void @__asm_stlr(i32, i64) local_unnamed_addr

declare i64 @__asm_mrs(i64, i64) local_unnamed_addr

!0 = !{i64 5052}
!1 = !{i64 5060}
!2 = !{i64 5116}
!3 = !{i64 5132}
!4 = !{i64 5148}
!5 = !{i64 5164}
!6 = !{i64 5180}
!7 = !{i64 5196}
!8 = !{i64 5212}
!9 = !{i64 5228}
!10 = !{i64 5244}
!11 = !{i64 5260}
!12 = !{i64 5276}
!13 = !{i64 5292}
!14 = !{i64 5308}
!15 = !{i64 5324}
!16 = !{i64 5340}
!17 = !{i64 5356}
!18 = !{i64 5372}
!19 = !{i64 5388}
!20 = !{i64 5404}
!21 = !{i64 5420}
!22 = !{i64 5436}
!23 = !{i64 5452}
!24 = !{i64 5468}
!25 = !{i64 5484}
!26 = !{i64 5500}
!27 = !{i64 5516}
!28 = !{i64 5532}
!29 = !{i64 5548}
!30 = !{i64 5564}
!31 = !{i64 5580}
!32 = !{i64 5596}
!33 = !{i64 5612}
!34 = !{i64 5628}
!35 = !{i64 5644}
!36 = !{i64 5660}
!37 = !{i64 5676}
!38 = !{i64 5692}
!39 = !{i64 5708}
!40 = !{i64 5724}
!41 = !{i64 5740}
!42 = !{i64 5756}
!43 = !{i64 5772}
!44 = !{i64 5788}
!45 = !{i64 5804}
!46 = !{i64 5820}
!47 = !{i64 5836}
!48 = !{i64 5852}
!49 = !{i64 5868}
!50 = !{i64 5884}
!51 = !{i64 5900}
!52 = !{i64 5916}
!53 = !{i64 5932}
!54 = !{i64 5948}
!55 = !{i64 5964}
!56 = !{i64 5980}
!57 = !{i64 5996}
!58 = !{i64 6012}
!59 = !{i64 6028}
!60 = !{i64 6044}
!61 = !{i64 6060}
!62 = !{i64 6076}
!63 = !{i64 6092}
!64 = !{i64 6108}
!65 = !{i64 6156}
!66 = !{i64 6160}
!67 = !{i64 6172}
!68 = !{i64 6176}
!69 = !{i64 6240}
!70 = !{i64 6252}
!71 = !{i64 6256}
!72 = !{i64 6264}
!73 = !{i64 6268}
!74 = !{i64 6272}
!75 = !{i64 6276}
!76 = !{i64 6332}
!77 = !{i64 6392}
!78 = !{i64 6400}
!79 = !{i64 6416}
!80 = !{i64 6420}
!81 = !{i64 6428}
!82 = !{i64 6432}
!83 = !{i64 6440}
!84 = !{i64 6444}
!85 = !{i64 6448}
!86 = !{i64 6456}
!87 = !{i64 6468}
!88 = !{i64 6480}
!89 = !{i64 6508}
!90 = !{i64 6516}
!91 = !{i64 6524}
!92 = !{i64 6540}
!93 = !{i64 6544}
!94 = !{i64 6572}
!95 = !{i64 6592}
!96 = !{i64 6600}
!97 = !{i64 6604}
!98 = !{i64 6612}
!99 = !{i64 6616}
!100 = !{i64 6584}
!101 = !{i64 6628}
!102 = !{i64 6656}
!103 = !{i64 6672}
!104 = !{i64 6712}
!105 = !{i64 6740}
!106 = !{i64 6764}
!107 = !{i64 6788}
!108 = !{i64 6804}
!109 = !{i64 6812}
!110 = !{i64 6820}
!111 = !{i64 6840}
!112 = !{i64 6856}
!113 = !{i64 6884}
!114 = !{i64 6892}
!115 = !{i64 6928}
!116 = !{i64 6940}
!117 = !{i64 6956}
!118 = !{i64 6960}
!119 = !{i64 6992}
!120 = !{i64 7004}
!121 = !{i64 7024}
!122 = !{i64 7028}
!123 = !{i64 7056}
!124 = !{i64 7064}
!125 = !{i64 7068}
!126 = !{i64 7076}
!127 = !{i64 7080}
!128 = !{i64 7048}
!129 = !{i64 7092}
!130 = !{i64 7128}
!131 = !{i64 7144}
!132 = !{i64 7184}
!133 = !{i64 7200}
!134 = !{i64 7204}
!135 = !{i64 7312}
!136 = !{i64 7332}
!137 = !{i64 7360}
!138 = !{i64 7368}
!139 = !{i64 7372}
!140 = !{i64 7380}
!141 = !{i64 7384}
!142 = !{i64 7348}
!143 = !{i64 7352}
!144 = !{i64 7396}
!145 = !{i64 7420}
!146 = !{i64 7432}
!147 = !{i64 7440}
!148 = !{i64 7448}
!149 = !{i64 7472}
!150 = !{i64 7480}
!151 = !{i64 7488}
!152 = !{i64 7492}
!153 = !{i64 7508}
!154 = !{i64 7512}
!155 = !{i64 7552}
!156 = !{i64 7568}
!157 = !{i64 7572}
!158 = !{i64 7576}
!159 = !{i64 7580}
!160 = !{i64 7584}
!161 = !{i64 7600}
!162 = !{i64 7608}
!163 = !{i64 7612}
!164 = !{i64 7620}
!165 = !{i64 7624}
!166 = !{i64 7636}
!167 = !{i64 7656}
!168 = !{i64 7664}
!169 = !{i64 7668}
!170 = !{i64 7692}
!171 = !{i64 7704}
!172 = !{i64 7708}
!173 = !{i64 7724}
!174 = !{i64 7736}
!175 = !{i64 7740}
!176 = !{i64 7748}
!177 = !{i64 7768}
!178 = !{i64 7772}
!179 = !{i64 7780}
!180 = !{i64 7804}
!181 = !{i64 7808}
!182 = !{i64 7816}
!183 = !{i64 7824}
!184 = !{i64 7828}
!185 = !{i64 7864}
!186 = !{i64 7876}
!187 = !{i64 7880}
!188 = !{i64 7896}
!189 = !{i64 7916}
!190 = !{i64 7928}
!191 = !{i64 7940}
!192 = !{i64 7944}
!193 = !{i64 7952}
!194 = !{i64 7960}
!195 = !{i64 7968}
!196 = !{i64 7988}
!197 = !{i64 8000}
!198 = !{i64 8004}
!199 = !{i64 8012}
!200 = !{i64 8020}
!201 = !{i64 8036}
!202 = !{i64 8048}
!203 = !{i64 8052}
!204 = !{i64 8056}
!205 = !{i64 8068}
!206 = !{i64 8080}
!207 = !{i64 8088}
!208 = !{i64 8092}
!209 = !{i64 8100}
!210 = !{i64 8104}
!211 = !{i64 8116}
!212 = !{i64 8136}
!213 = !{i64 8144}
!214 = !{i64 8148}
!215 = !{i64 8168}
!216 = !{i64 8180}
!217 = !{i64 8184}
!218 = !{i64 8276}
!219 = !{i64 8280}
!220 = !{i64 8224}
!221 = !{i64 8236}
!222 = !{i64 8244}
!223 = !{i64 8252}
!224 = !{i64 8260}
!225 = !{i64 8268}
!226 = !{i64 8288}
!227 = !{i64 8296}
!228 = !{i64 8300}
!229 = !{i64 8308}
!230 = !{i64 8312}
!231 = !{i64 8316}
!232 = !{i64 8328}
!233 = !{i64 8336}
!234 = !{i64 8344}
!235 = !{i64 8360}
!236 = !{i64 8368}
!237 = !{i64 8372}
!238 = !{i64 8400}
!239 = !{i64 8476}
!240 = !{i64 8480}
!241 = !{i64 8432}
!242 = !{i64 8436}
!243 = !{i64 8448}
!244 = !{i64 8460}
!245 = !{i64 8492}
!246 = !{i64 8496}
!247 = !{i64 8508}
!248 = !{i64 8512}
!249 = !{i64 8540}
!250 = !{i64 8536}
!251 = !{i64 8548}
!252 = !{i64 8572}
!253 = !{i64 8584}
!254 = !{i64 8588}
!255 = !{i64 8608}
!256 = !{i64 8616}
!257 = !{i64 8620}
!258 = !{i64 8628}
!259 = !{i64 8632}
!260 = !{i64 8596}
!261 = !{i64 8600}
!262 = !{i64 8644}
!263 = !{i64 8656}
!264 = !{i64 8660}
!265 = !{i64 8664}
!266 = !{i64 8668}
!267 = !{i64 8680}
!268 = !{i64 8692}
!269 = !{i64 8732}
!270 = !{i64 8744}
!271 = !{i64 8784}
!272 = !{i64 8792}
!273 = !{i64 8832}
!274 = !{i64 8840}
!275 = !{i64 8848}
!276 = !{i64 8868}
!277 = !{i64 8872}
!278 = !{i64 8888}
!279 = !{i64 8892}
!280 = !{i64 8908}
!281 = !{i64 8912}
!282 = !{i64 8928}
!283 = !{i64 8932}
!284 = !{i64 8948}
!285 = !{i64 8952}
!286 = !{i64 8968}
!287 = !{i64 8972}
!288 = !{i64 8988}
!289 = !{i64 8992}
!290 = !{i64 9008}
!291 = !{i64 9012}
!292 = !{i64 9028}
!293 = !{i64 9032}
!294 = !{i64 9048}
!295 = !{i64 9052}
!296 = !{i64 9068}
!297 = !{i64 9072}
!298 = !{i64 9088}
!299 = !{i64 9092}
!300 = !{i64 9108}
!301 = !{i64 9120}
!302 = !{i64 9124}
!303 = !{i64 9152}
!304 = !{i64 9164}
!305 = !{i64 9168}
!306 = !{i64 9172}
!307 = !{i64 9176}
!308 = !{i64 9180}
!309 = !{i64 9184}
!310 = !{i64 9196}
!311 = !{i64 9200}
!312 = !{i64 9208}
!313 = !{i64 9228}
!314 = !{i64 9232}
!315 = !{i64 9240}
!316 = !{i64 9264}
!317 = !{i64 9284}
!318 = !{i64 9288}
!319 = !{i64 9312}
!320 = !{i64 9364}
!321 = !{i64 9372}
!322 = !{i64 9376}
!323 = !{i64 9384}
!324 = !{i64 9388}
!325 = !{i64 9316}
!326 = !{i64 9400}
!327 = !{i64 9420}
!328 = !{i64 9428}
!329 = !{i64 9432}
!330 = !{i64 9452}
!331 = !{i64 9456}
!332 = !{i64 9468}
!333 = !{i64 9480}
!334 = !{i64 9484}
!335 = !{i64 9500}
!336 = !{i64 9504}
!337 = !{i64 9440}
!338 = !{i64 9524}
!339 = !{i64 9532}
!340 = !{i64 9552}
!341 = !{i64 9564}
!342 = !{i64 9568}
!343 = !{i64 9580}
!344 = !{i64 9584}
!345 = !{i64 9588}
!346 = !{i64 9592}
!347 = !{i64 9604}
!348 = !{i64 9608}
!349 = !{i64 9624}
!350 = !{i64 9632}
!351 = !{i64 9636}
!352 = !{i64 9644}
!353 = !{i64 9648}
!354 = !{i64 9660}
!355 = !{i64 9684}
!356 = !{i64 9688}
!357 = !{i64 9696}
!358 = !{i64 9720}
!359 = !{i64 9724}
!360 = !{i64 9740}
!361 = !{i64 9744}
!362 = !{i64 9756}
!363 = !{i64 9760}
!364 = !{i64 9764}
!365 = !{i64 9768}
!366 = !{i64 9780}
!367 = !{i64 9792}
!368 = !{i64 9796}
!369 = !{i64 9812}
!370 = !{i64 9816}
!371 = !{i64 9820}
!372 = !{i64 9824}
!373 = !{i64 9848}
!374 = !{i64 9864}
!375 = !{i64 9872}
!376 = !{i64 9880}
!377 = !{i64 9888}
!378 = !{i64 9892}
!379 = !{i64 9904}
!380 = !{i64 9916}
!381 = !{i64 9920}
!382 = !{i64 9924}
!383 = !{i64 9928}
!384 = !{i64 9936}
!385 = !{i64 9948}
!386 = !{i64 9960}
!387 = !{i64 9972}
!388 = !{i64 9980}
!389 = !{i64 9984}
!390 = !{i64 9992}
!391 = !{i64 9996}
!392 = !{i64 10012}
!393 = !{i64 10024}
!394 = !{i64 10032}
!395 = !{i64 10036}
!396 = !{i64 10048}
!397 = !{i64 10052}
!398 = !{i64 10076}
!399 = !{i64 10088}
!400 = !{i64 10092}
!401 = !{i64 10108}
!402 = !{i64 10136}
!403 = !{i64 10140}
!404 = !{i64 10144}
!405 = !{i64 10152}
!406 = !{i64 10160}
!407 = !{i64 10176}
!408 = !{i64 10184}
!409 = !{i64 10192}
!410 = !{i64 10224}
!411 = !{i64 10228}
!412 = !{i64 10232}
!413 = !{i64 10240}
!414 = !{i64 10248}
!415 = !{i64 10260}
!416 = !{i64 10264}
!417 = !{i64 10284}
!418 = !{i64 10308}
!419 = !{i64 10316}
!420 = !{i64 10320}
!421 = !{i64 10328}
!422 = !{i64 10332}
!423 = !{i64 10344}
!424 = !{i64 10356}
!425 = !{i64 10364}
!426 = !{i64 10368}
!427 = !{i64 10400}
!428 = !{i64 10412}
!429 = !{i64 10416}
!430 = !{i64 10432}
!431 = !{i64 10448}
!432 = !{i64 10460}
!433 = !{i64 10464}
!434 = !{i64 10488}
!435 = !{i64 10500}
!436 = !{i64 10504}
!437 = !{i64 10528}
!438 = !{i64 10540}
!439 = !{i64 10544}
!440 = !{i64 10556}
!441 = !{i64 10576}
!442 = !{i64 10584}
!443 = !{i64 10592}
!444 = !{i64 10604}
!445 = !{i64 10620}
!446 = !{i64 10624}
!447 = !{i64 10632}
!448 = !{i64 10644}
!449 = !{i64 10648}
!450 = !{i64 10660}
!451 = !{i64 10680}
!452 = !{i64 10688}
!453 = !{i64 10704}
!454 = !{i64 10720}
!455 = !{i64 10732}
!456 = !{i64 10736}
!457 = !{i64 10756}
!458 = !{i64 10760}
!459 = !{i64 10764}
!460 = !{i64 10788}
!461 = !{i64 10792}
!462 = !{i64 10796}
!463 = !{i64 10816}
!464 = !{i64 10824}
!465 = !{i64 10856}
!466 = !{i64 10860}
!467 = !{i64 10864}
!468 = !{i64 10872}
!469 = !{i64 10844}
!470 = !{i64 10884}
!471 = !{i64 10904}
!472 = !{i64 10924}
!473 = !{i64 10928}
!474 = !{i64 10932}
!475 = !{i64 10952}
!476 = !{i64 10960}
!477 = !{i64 10992}
!478 = !{i64 10996}
!479 = !{i64 11000}
!480 = !{i64 11008}
!481 = !{i64 10980}
!482 = !{i64 11020}
!483 = !{i64 11036}
!484 = !{i64 11052}
!485 = !{i64 11056}
!486 = !{i64 11040}
!487 = !{i64 11080}
!488 = !{i64 11092}
!489 = !{i64 11096}
!490 = !{i64 11104}
!491 = !{i64 11116}
!492 = !{i64 11124}
!493 = !{i64 11144}
!494 = !{i64 11148}
!495 = !{i64 11164}
!496 = !{i64 11168}
!497 = !{i64 11184}
!498 = !{i64 11188}
!499 = !{i64 11204}
!500 = !{i64 11208}
!501 = !{i64 11224}
!502 = !{i64 11228}
!503 = !{i64 11244}
!504 = !{i64 11248}
!505 = !{i64 11264}
!506 = !{i64 11268}
!507 = !{i64 11284}
!508 = !{i64 11296}
!509 = !{i64 11336}
!510 = !{i64 11348}
!511 = !{i64 11364}
!512 = !{i64 11376}
!513 = !{i64 11380}
!514 = !{i64 11388}
!515 = !{i64 11396}
!516 = !{i64 11400}
!517 = !{i64 11416}
!518 = !{i64 11448}
!519 = !{i64 11460}
!520 = !{i64 11464}
!521 = !{i64 11476}
!522 = !{i64 11484}
!523 = !{i64 11492}
!524 = !{i64 11504}
!525 = !{i64 11508}
!526 = !{i64 11520}
!527 = !{i64 11528}
!528 = !{i64 11532}
!529 = !{i64 11540}
!530 = !{i64 11544}
!531 = !{i64 11556}
!532 = !{i64 11572}
!533 = !{i64 11580}
!534 = !{i64 11584}
!535 = !{i64 11604}
!536 = !{i64 11612}
!537 = !{i64 11664}
!538 = !{i64 11676}
!539 = !{i64 11628}
!540 = !{i64 11636}
!541 = !{i64 11644}
!542 = !{i64 11652}
!543 = !{i64 11688}
!544 = !{i64 11692}
!545 = !{i64 11704}
!546 = !{i64 11708}
!547 = !{i64 11736}
!548 = !{i64 11772}
!549 = !{i64 11764}
!550 = !{i64 11768}
!551 = !{i64 11792}
!552 = !{i64 11796}
!553 = !{i64 11820}
!554 = !{i64 11824}
!555 = !{i64 11828}
!556 = !{i64 11860}
!557 = !{i64 11880}
!558 = !{i64 11888}
!559 = !{i64 11896}
!560 = !{i64 11900}
!561 = !{i64 11904}
!562 = !{i64 11932}
!563 = !{i64 11940}
!564 = !{i64 11948}
!565 = !{i64 11976}
!566 = !{i64 11980}
!567 = !{i64 11992}
!568 = !{i64 12000}
!569 = !{i64 12004}
!570 = !{i64 12012}
!571 = !{i64 12016}
!572 = !{i64 12028}
!573 = !{i64 12040}
!574 = !{i64 12048}
!575 = !{i64 12052}
!576 = !{i64 12168}
!577 = !{i64 12092}
!578 = !{i64 12120}
!579 = !{i64 12132}
!580 = !{i64 12140}
!581 = !{i64 12148}
!582 = !{i64 12180}
!583 = !{i64 12184}
!584 = !{i64 12192}
!585 = !{i64 12196}
!586 = !{i64 12208}
!587 = !{i64 12220}
!588 = !{i64 12224}
!589 = !{i64 12244}
!590 = !{i64 12348}
!591 = !{i64 12296}
!592 = !{i64 12256}
!593 = !{i64 12260}
!594 = !{i64 12268}
!595 = !{i64 12300}
!596 = !{i64 12304}
!597 = !{i64 12312}
!598 = !{i64 12320}
!599 = !{i64 12328}
!600 = !{i64 12360}
!601 = !{i64 12364}
!602 = !{i64 12372}
!603 = !{i64 12376}
!604 = !{i64 12384}
!605 = !{i64 12392}
!606 = !{i64 12412}
!607 = !{i64 12420}
!608 = !{i64 12424}
!609 = !{i64 12432}
!610 = !{i64 12448}
!611 = !{i64 12460}
!612 = !{i64 12468}
!613 = !{i64 12480}
!614 = !{i64 12500}
!615 = !{i64 12508}
!616 = !{i64 12532}
!617 = !{i64 12568}
!618 = !{i64 12572}
!619 = !{i64 12576}
!620 = !{i64 12556}
!621 = !{i64 12588}
!622 = !{i64 12604}
!623 = !{i64 12612}
!624 = !{i64 12628}
!625 = !{i64 12640}
!626 = !{i64 12660}
!627 = !{i64 12672}
!628 = !{i64 12688}
!629 = !{i64 12704}
!630 = !{i64 12716}
!631 = !{i64 12728}
!632 = !{i64 12740}
!633 = !{i64 12744}
!634 = !{i64 12756}
!635 = !{i64 12760}
!636 = !{i64 12780}
!637 = !{i64 12792}
!638 = !{i64 12820}
!639 = !{i64 12824}
!640 = !{i64 12828}
!641 = !{i64 12864}
!642 = !{i64 12868}
!643 = !{i64 12872}
!644 = !{i64 12880}
!645 = !{i64 12888}
!646 = !{i64 12900}
!647 = !{i64 12904}
!648 = !{i64 12912}
!649 = !{i64 12920}
!650 = !{i64 12932}
!651 = !{i64 12936}
!652 = !{i64 12948}
!653 = !{i64 12956}
!654 = !{i64 12960}
!655 = !{i64 12968}
!656 = !{i64 12972}
!657 = !{i64 12984}
!658 = !{i64 12996}
!659 = !{i64 13004}
!660 = !{i64 13008}
!661 = !{i64 13028}
!662 = !{i64 13032}
!663 = !{i64 13184}
!664 = !{i64 13080}
!665 = !{i64 13132}
!666 = !{i64 13164}
!667 = !{i64 13212}
!668 = !{i64 13220}
!669 = !{i64 13224}
!670 = !{i64 13240}
!671 = !{i64 13272}
!672 = !{i64 13288}
!673 = !{i64 13300}
!674 = !{i64 13304}
!675 = !{i64 13312}
!676 = !{i64 13316}
!677 = !{i64 13324}
!678 = !{i64 13328}
!679 = !{i64 13348}
!680 = !{i64 13360}
!681 = !{i64 13364}
!682 = !{i64 13384}
!683 = !{i64 13488}
!684 = !{i64 13436}
!685 = !{i64 13396}
!686 = !{i64 13400}
!687 = !{i64 13408}
!688 = !{i64 13440}
!689 = !{i64 13444}
!690 = !{i64 13452}
!691 = !{i64 13460}
!692 = !{i64 13468}
!693 = !{i64 13516}
!694 = !{i64 13520}
!695 = !{i64 13524}
!696 = !{i64 13528}
!697 = !{i64 13536}
!698 = !{i64 13600}
!699 = !{i64 13548}
!700 = !{i64 13552}
!701 = !{i64 13560}
!702 = !{i64 13564}
!703 = !{i64 13572}
!704 = !{i64 13580}
!705 = !{i64 13612}
!706 = !{i64 13624}
!707 = !{i64 13636}
!708 = !{i64 13648}
!709 = !{i64 13660}
!710 = !{i64 13668}
!711 = !{i64 13672}
!712 = !{i64 13680}
!713 = !{i64 13684}
!714 = !{i64 13696}
!715 = !{i64 13716}
!716 = !{i64 13724}
!717 = !{i64 13748}
!718 = !{i64 13756}
!719 = !{i64 13760}
!720 = !{i64 13768}
!721 = !{i64 13776}
!722 = !{i64 13780}
!723 = !{i64 13784}
!724 = !{i64 13788}
!725 = !{i64 13796}
!726 = !{i64 13800}
!727 = !{i64 13804}
!728 = !{i64 13812}
!729 = !{i64 13824}
!730 = !{i64 13832}
!731 = !{i64 13848}
!732 = !{i64 13856}
!733 = !{i64 13860}
!734 = !{i64 13868}
!735 = !{i64 13872}
!736 = !{i64 13876}
!737 = !{i64 13888}
!738 = !{i64 13892}
!739 = !{i64 13904}
!740 = !{i64 13912}
!741 = !{i64 13916}
!742 = !{i64 13936}
!743 = !{i64 13952}
!744 = !{i64 13964}
!745 = !{i64 13976}
!746 = !{i64 13968}
!747 = !{i64 14096}
!748 = !{i64 14004}
!749 = !{i64 14012}
!750 = !{i64 14020}
!751 = !{i64 14024}
!752 = !{i64 14068}
!753 = !{i64 14108}
!754 = !{i64 14112}
!755 = !{i64 14120}
!756 = !{i64 14136}
!757 = !{i64 14140}
!758 = !{i64 14164}
!759 = !{i64 14168}
!760 = !{i64 14172}
!761 = !{i64 14184}
!762 = !{i64 14188}
!763 = !{i64 14196}
!764 = !{i64 14200}
!765 = !{i64 14204}
!766 = !{i64 14212}
!767 = !{i64 14232}
!768 = !{i64 14240}
!769 = !{i64 14248}
!770 = !{i64 14256}
!771 = !{i64 14264}
!772 = !{i64 14284}
!773 = !{i64 14328}
!774 = !{i64 14304}
!775 = !{i64 14308}
!776 = !{i64 14316}
!777 = !{i64 14320}
!778 = !{i64 14332}
!779 = !{i64 14344}
!780 = !{i64 14352}
!781 = !{i64 14364}
!782 = !{i64 14368}
!783 = !{i64 14376}
!784 = !{i64 14388}
!785 = !{i64 14404}
!786 = !{i64 14408}
!787 = !{i64 14412}
!788 = !{i64 14420}
!789 = !{i64 14440}
!790 = !{i64 14448}
!791 = !{i64 14456}
!792 = !{i64 14468}
!793 = !{i64 14504}
!794 = !{i64 14484}
!795 = !{i64 14520}
!796 = !{i64 14544}
!797 = !{i64 14552}
!798 = !{i64 14556}
!799 = !{i64 14564}
!800 = !{i64 14568}
!801 = !{i64 14584}
!802 = !{i64 14600}
!803 = !{i64 14608}
!804 = !{i64 14628}
!805 = !{i64 14632}
!806 = !{i64 14648}
!807 = !{i64 14652}
!808 = !{i64 14668}
!809 = !{i64 14672}
!810 = !{i64 14688}
!811 = !{i64 14692}
!812 = !{i64 14708}
!813 = !{i64 14712}
!814 = !{i64 14728}
!815 = !{i64 14732}
!816 = !{i64 14748}
!817 = !{i64 14760}
!818 = !{i64 14772}
!819 = !{i64 14776}
!820 = !{i64 14780}
!821 = !{i64 14792}
!822 = !{i64 14800}
!823 = !{i64 14808}
!824 = !{i64 14812}
!825 = !{i64 14816}
!826 = !{i64 14820}
!827 = !{i64 14824}
!828 = !{i64 14828}
!829 = !{i64 14836}
!830 = !{i64 14840}
!831 = !{i64 14844}
!832 = !{i64 14848}
!833 = !{i64 14864}
!834 = !{i64 14872}
!835 = !{i64 14876}
!836 = !{i64 14896}
!837 = !{i64 14880}
!838 = !{i64 14884}
!839 = !{i64 14900}
!840 = !{i64 14904}
!841 = !{i64 14892}
!842 = !{i64 14908}
!843 = !{i64 14928}
