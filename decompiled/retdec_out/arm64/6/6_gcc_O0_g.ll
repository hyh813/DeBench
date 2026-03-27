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
@global_var_3a60 = constant [9 x i8] c"HelloLib\00"
@global_var_3a70 = constant [4 x i8] c"def\00"
@global_var_3a78 = constant [4 x i8] c"abc\00"
@global_var_3a80 = constant [4 x i8] c"xyz\00"
@global_var_3a88 = constant [4 x i8] c"aaa\00"
@global_var_3a90 = constant [4 x i8] c"bbb\00"
@global_var_3a98 = constant [13 x i8] c"BinBench2025\00"
@global_var_3aa8 = local_unnamed_addr constant i64 85899345930
@global_var_3ab0 = local_unnamed_addr constant i64 171798691870
@global_var_3ab8 = local_unnamed_addr constant i64 50
@global_var_3ac0 = local_unnamed_addr constant i64 8589934593
@global_var_3ac8 = local_unnamed_addr constant i64 3
@global_var_3ad0 = local_unnamed_addr constant i64 8589934593
@global_var_3ad8 = local_unnamed_addr constant i64 4
@global_var_3ae0 = constant [21 x i8] c"Value: %d, Name: %s\0A\00"
@global_var_3af8 = constant [5 x i8] c"Test\00"
@global_var_3b00 = constant [6 x i8] c"%d,%d\00"
@global_var_3b08 = constant [8 x i8] c"123,456\00"
@global_var_3b18 = constant [12 x i8] c"/etc/passwd\00"
@global_var_3b28 = constant [19 x i8] c"BinBench Test Data\00"
@global_var_1f14 = local_unnamed_addr constant i64 1441152001328021536
@global_var_3b48 = constant [23 x i8] c"/tmp/binbench_test.tmp\00"
@global_var_3b60 = constant [20 x i8] c"Hello BinBench Test\00"
@global_var_3b78 = constant [6 x i8] c"Bench\00"
@global_var_3d28 = constant [10 x i8] c"/bin/true\00"
@global_var_3d38 = constant [10 x i8] c"HelloPipe\00"
@global_var_27ac = local_unnamed_addr constant i64 1441152031392792608
@global_var_27c4 = local_unnamed_addr constant i64 8719025917139091520
@global_var_2804 = local_unnamed_addr constant i64 1441151936903512128
@global_var_2828 = local_unnamed_addr constant i64 1441151898248806496
@global_var_3d48 = constant [18 x i8] c"/tmp/binbench_shm\00"
@global_var_3d60 = local_unnamed_addr constant [13 x i8] c"SharedMemory\00"
@global_var_3d65 = local_unnamed_addr constant [8 x i8] c"dMemory\00"
@signal_received = local_unnamed_addr global i32 0
@signal_number = local_unnamed_addr global i32 0
@global_var_3e80 = local_unnamed_addr constant i64 20
@global_var_3e90 = local_unnamed_addr constant i64 0
@counter_mutex = global i32 0
@shared_counter = local_unnamed_addr global i32 0
@global_var_301c = local_unnamed_addr constant i64 1441152048572661792
@cond_mutex = global i32 0
@cond = global i32 0
@ready = local_unnamed_addr global i32 0
@data = local_unnamed_addr global i32 0
@global_var_3254 = local_unnamed_addr constant i64 1441151936903512096
@atomic_counter = local_unnamed_addr global i32 0
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

define i32 @param_strcpy(i8* %dst, i8* %src) local_unnamed_addr {
dec_label_pc_1954:
  %0 = call i8* @strcpy(i8* %dst, i8* %src), !insn.addr !89
  %1 = call i32 @strlen(i8* %dst), !insn.addr !90
  ret i32 %1, !insn.addr !91
}

define i32 @call_strcpy() local_unnamed_addr {
dec_label_pc_1980:
  %stack_var_-32 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !92
  %1 = inttoptr i64 %0 to i64*, !insn.addr !93
  %2 = load i64, i64* %1, align 8, !insn.addr !93
  %3 = bitcast i64* %stack_var_-32 to i8*, !insn.addr !94
  %4 = call i32 @param_strcpy(i8* nonnull %3, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_3a60, i64 0, i64 0)), !insn.addr !94
  %5 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !95
  %6 = inttoptr i64 %5 to i64*, !insn.addr !96
  %7 = load i64, i64* %6, align 8, !insn.addr !96
  %8 = icmp eq i64 %2, %7, !insn.addr !97
  br i1 %8, label %dec_label_pc_19dc, label %dec_label_pc_19d8, !insn.addr !98

dec_label_pc_19d8:                                ; preds = %dec_label_pc_1980
  call void @__stack_chk_fail(), !insn.addr !99
  br label %dec_label_pc_19dc, !insn.addr !99

dec_label_pc_19dc:                                ; preds = %dec_label_pc_19d8, %dec_label_pc_1980
  ret i32 %4, !insn.addr !100
}

define i32 @param_strcmp(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_19e8:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !101
  %1 = icmp sgt i32 %0, 0, !insn.addr !102
  %2 = icmp slt i32 %0, 0
  %. = sext i1 %2 to i32
  %x0.0 = select i1 %1, i32 1, i32 %.
  ret i32 %x0.0, !insn.addr !103
}

define i32 @call_strcmp() local_unnamed_addr {
dec_label_pc_1a3c:
  %0 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_3a78, i64 0, i64 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_3a70, i64 0, i64 0)), !insn.addr !104
  %1 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_3a80, i64 0, i64 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_3a80, i64 0, i64 0)), !insn.addr !105
  %2 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_3a90, i64 0, i64 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_3a88, i64 0, i64 0)), !insn.addr !106
  %3 = add i32 %1, %0, !insn.addr !107
  %4 = add i32 %3, %2, !insn.addr !108
  ret i32 %4, !insn.addr !109

; uselistorder directives
  uselistorder i32 (i8*, i8*)* @param_strcmp, { 2, 1, 0 }
}

define i32 @param_strlen(i8* %str) local_unnamed_addr {
dec_label_pc_1aa8:
  %0 = call i32 @strlen(i8* %str), !insn.addr !110
  ret i32 %0, !insn.addr !111
}

define i32 @call_strlen() local_unnamed_addr {
dec_label_pc_1acc:
  %0 = call i32 @param_strlen(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_3a98, i64 0, i64 0)), !insn.addr !112
  ret i32 %0, !insn.addr !113
}

define i32 @param_memcpy(i8* %dst, i32* %src, i64 %n) local_unnamed_addr {
dec_label_pc_1af0:
  %0 = bitcast i8* %dst to i64*, !insn.addr !114
  %1 = bitcast i32* %src to i64*, !insn.addr !114
  %2 = trunc i64 %n to i32, !insn.addr !114
  %3 = call i64* @memcpy(i64* %0, i64* %1, i32 %2), !insn.addr !114
  ret i32 %2, !insn.addr !115
}

define i32 @call_memcpy() local_unnamed_addr {
dec_label_pc_1b20:
  %stack_var_-24 = alloca i32, align 4
  %stack_var_-48 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !116
  %1 = inttoptr i64 %0 to i64*, !insn.addr !117
  %2 = load i64, i64* %1, align 8, !insn.addr !117
  store i64 85899345930, i64* %stack_var_-48, align 8, !insn.addr !118
  store i32 0, i32* %stack_var_-24, align 4, !insn.addr !119
  %3 = bitcast i32* %stack_var_-24 to i8*, !insn.addr !120
  %4 = bitcast i64* %stack_var_-48 to i32*, !insn.addr !120
  %5 = call i32 @param_memcpy(i8* nonnull %3, i32* nonnull %4, i64 20), !insn.addr !120
  %6 = load i32, i32* %stack_var_-24, align 4, !insn.addr !121
  %7 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !122
  %8 = inttoptr i64 %7 to i64*, !insn.addr !123
  %9 = load i64, i64* %8, align 8, !insn.addr !123
  %10 = icmp eq i64 %2, %9, !insn.addr !124
  br i1 %10, label %dec_label_pc_1bac, label %dec_label_pc_1ba8, !insn.addr !125

dec_label_pc_1ba8:                                ; preds = %dec_label_pc_1b20
  call void @__stack_chk_fail(), !insn.addr !126
  br label %dec_label_pc_1bac, !insn.addr !126

dec_label_pc_1bac:                                ; preds = %dec_label_pc_1ba8, %dec_label_pc_1b20
  ret i32 %6, !insn.addr !127

; uselistorder directives
  uselistorder i32* %stack_var_-24, { 1, 2, 0 }
}

define i32 @param_memcmp(i32* %p1, i32* %p2, i64 %n) local_unnamed_addr {
dec_label_pc_1bb8:
  %0 = bitcast i32* %p1 to i64*, !insn.addr !128
  %1 = bitcast i32* %p2 to i64*, !insn.addr !128
  %2 = trunc i64 %n to i32, !insn.addr !128
  %3 = call i32 @memcmp(i64* %0, i64* %1, i32 %2), !insn.addr !128
  %4 = icmp sgt i32 %3, 0, !insn.addr !129
  %5 = icmp slt i32 %3, 0
  %. = sext i1 %5 to i32
  %x0.0 = select i1 %4, i32 1, i32 %.
  ret i32 %x0.0, !insn.addr !130
}

define i32 @call_memcmp() local_unnamed_addr {
dec_label_pc_1c14:
  %arr1_-56 = alloca [3 x i32], align 4
  %stack_var_-16 = alloca i64, align 8
  %stack_var_-32 = alloca i64, align 8
  %stack_var_-48 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !131
  %1 = inttoptr i64 %0 to i64*, !insn.addr !132
  %2 = load i64, i64* %1, align 8, !insn.addr !132
  store i64 8589934593, i64* %stack_var_-48, align 8, !insn.addr !133
  store i64 8589934593, i64* %stack_var_-32, align 8, !insn.addr !134
  store i64 8589934593, i64* %stack_var_-16, align 8, !insn.addr !135
  %3 = bitcast i64* %stack_var_-48 to i32*, !insn.addr !136
  %4 = bitcast i64* %stack_var_-32 to i32*, !insn.addr !136
  %5 = call i32 @param_memcmp(i32* nonnull %3, i32* nonnull %4, i64 12), !insn.addr !136
  %6 = insertvalue [3 x i32] undef, i32 %5, 0, !insn.addr !137
  store [3 x i32] %6, [3 x i32]* %arr1_-56, align 4, !insn.addr !137
  %7 = bitcast i64* %stack_var_-16 to i32*, !insn.addr !138
  %8 = call i32 @param_memcmp(i32* nonnull %3, i32* nonnull %7, i64 12), !insn.addr !138
  %9 = getelementptr inbounds [3 x i32], [3 x i32]* %arr1_-56, i64 0, i64 0, !insn.addr !139
  %10 = load i32, i32* %9, align 4, !insn.addr !139
  %11 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !140
  %12 = inttoptr i64 %11 to i64*, !insn.addr !141
  %13 = load i64, i64* %12, align 8, !insn.addr !141
  %14 = icmp eq i64 %2, %13, !insn.addr !142
  br i1 %14, label %dec_label_pc_1cdc, label %dec_label_pc_1cd8, !insn.addr !143

dec_label_pc_1cd8:                                ; preds = %dec_label_pc_1c14
  call void @__stack_chk_fail(), !insn.addr !144
  br label %dec_label_pc_1cdc, !insn.addr !144

dec_label_pc_1cdc:                                ; preds = %dec_label_pc_1cd8, %dec_label_pc_1c14
  %15 = add i32 %10, %8, !insn.addr !145
  ret i32 %15, !insn.addr !146

; uselistorder directives
  uselistorder i32 (i32*, i32*, i64)* @param_memcmp, { 1, 0 }
}

define i32 @param_printf(i32 %x, i8* %name) local_unnamed_addr {
dec_label_pc_1ce8:
  %0 = zext i32 %x to i64, !insn.addr !147
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_3ae0, i64 0, i64 0), i64 %0, i8* %name), !insn.addr !148
  ret i32 %1, !insn.addr !149
}

define i32 @call_printf() local_unnamed_addr {
dec_label_pc_1d1c:
  %0 = call i32 @param_printf(i32 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_3af8, i64 0, i64 0)), !insn.addr !150
  ret i32 %0, !insn.addr !151
}

define i32 @param_scanf(i8* %input_str) local_unnamed_addr {
dec_label_pc_1d44:
  %storemerge.reg2mem = alloca i32, !insn.addr !152
  %ret_-12 = alloca i32, align 4
  %stack_var_-8 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !153
  %1 = inttoptr i64 %0 to i64*, !insn.addr !154
  %2 = load i64, i64* %1, align 8, !insn.addr !154
  %3 = call i32 (i8*, i8*, ...) @sscanf(i8* %input_str, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_3b00, i64 0, i64 0), i32* nonnull %ret_-12, i64* nonnull %stack_var_-8), !insn.addr !155
  %4 = icmp eq i32 %3, 2, !insn.addr !156
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !156
  br i1 %4, label %dec_label_pc_1d94, label %dec_label_pc_1da8, !insn.addr !156

dec_label_pc_1d94:                                ; preds = %dec_label_pc_1d44
  %5 = load i32, i32* %ret_-12, align 4, !insn.addr !157
  %6 = load i64, i64* %stack_var_-8, align 8, !insn.addr !158
  %7 = trunc i64 %6 to i32, !insn.addr !158
  %8 = add i32 %5, %7, !insn.addr !159
  store i32 %8, i32* %storemerge.reg2mem, !insn.addr !160
  br label %dec_label_pc_1da8, !insn.addr !160

dec_label_pc_1da8:                                ; preds = %dec_label_pc_1d44, %dec_label_pc_1d94
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %9 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !161
  %10 = inttoptr i64 %9 to i64*, !insn.addr !162
  %11 = load i64, i64* %10, align 8, !insn.addr !162
  %12 = icmp eq i64 %2, %11, !insn.addr !163
  br i1 %12, label %dec_label_pc_1dcc, label %dec_label_pc_1dc8, !insn.addr !164

dec_label_pc_1dc8:                                ; preds = %dec_label_pc_1da8
  call void @__stack_chk_fail(), !insn.addr !165
  br label %dec_label_pc_1dcc, !insn.addr !165

dec_label_pc_1dcc:                                ; preds = %dec_label_pc_1dc8, %dec_label_pc_1da8
  ret i32 %storemerge.reload, !insn.addr !166

; uselistorder directives
  uselistorder i64* %stack_var_-8, { 1, 0 }
  uselistorder i32* %ret_-12, { 1, 0 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1da8, { 1, 0 }
}

define i32 @call_scanf() local_unnamed_addr {
dec_label_pc_1dd8:
  %0 = call i32 @param_scanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_3b08, i64 0, i64 0)), !insn.addr !167
  ret i32 %0, !insn.addr !168
}

define i32 @param_fopen_fclose(i8* %filename) local_unnamed_addr {
dec_label_pc_1df4:
  %storemerge.reg2mem = alloca i32, !insn.addr !169
  %0 = call %_IO_FILE* @fopen(i8* %filename, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_3b10, i64 0, i64 0)), !insn.addr !170
  %1 = icmp eq %_IO_FILE* %0, null, !insn.addr !171
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !172
  br i1 %1, label %dec_label_pc_1e40, label %dec_label_pc_1e28, !insn.addr !172

dec_label_pc_1e28:                                ; preds = %dec_label_pc_1df4
  %2 = call i32 @fileno(%_IO_FILE* nonnull %0), !insn.addr !173
  %3 = call i32 @fclose(%_IO_FILE* nonnull %0), !insn.addr !174
  store i32 %2, i32* %storemerge.reg2mem, !insn.addr !175
  br label %dec_label_pc_1e40, !insn.addr !175

dec_label_pc_1e40:                                ; preds = %dec_label_pc_1df4, %dec_label_pc_1e28
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !176

; uselistorder directives
  uselistorder %_IO_FILE* %0, { 1, 0, 2 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1e40, { 1, 0 }
}

define i32 @call_fopen_fclose() local_unnamed_addr {
dec_label_pc_1e48:
  %0 = call i32 @param_fopen_fclose(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_3b18, i64 0, i64 0)), !insn.addr !177
  %1 = icmp slt i32 %0, 0, !insn.addr !178
  %. = select i1 %1, i32 -1, i32 42
  ret i32 %., !insn.addr !179
}

define i32 @param_fread_fwrite(i8* %tmpfile) local_unnamed_addr {
dec_label_pc_1e80:
  %x0.0.reg2mem = alloca i32, !insn.addr !180
  %read_buffer_-40 = alloca [32 x i8], align 8
  %stack_var_-32 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !181
  %1 = inttoptr i64 %0 to i64*, !insn.addr !182
  %2 = load i64, i64* %1, align 8, !insn.addr !182
  %3 = call %_IO_FILE* @fopen(i8* %tmpfile, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_3b40, i64 0, i64 0)), !insn.addr !183
  %4 = icmp eq %_IO_FILE* %3, null, !insn.addr !184
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !185
  br i1 %4, label %dec_label_pc_1f88, label %dec_label_pc_1ed4, !insn.addr !185

dec_label_pc_1ed4:                                ; preds = %dec_label_pc_1e80
  %5 = call i32 @strlen(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_3b28, i64 0, i64 0)), !insn.addr !186
  %6 = call i32 @fwrite(i64* bitcast ([19 x i8]* @global_var_3b28 to i64*), i32 1, i32 %5, %_IO_FILE* nonnull %3), !insn.addr !187
  %7 = call i32 @strlen(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_3b28, i64 0, i64 0)), !insn.addr !188
  %8 = icmp eq i32 %6, %7, !insn.addr !189
  br i1 %8, label %dec_label_pc_1f1c, label %dec_label_pc_1f0c, !insn.addr !190

dec_label_pc_1f0c:                                ; preds = %dec_label_pc_1ed4
  %9 = call i32 @fclose(%_IO_FILE* nonnull %3), !insn.addr !191
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !192
  br label %dec_label_pc_1f88, !insn.addr !192

dec_label_pc_1f1c:                                ; preds = %dec_label_pc_1ed4
  %10 = sext i32 %6 to i64, !insn.addr !187
  call void @rewind(%_IO_FILE* nonnull %3), !insn.addr !193
  %11 = call i32 @fread(i64* nonnull %stack_var_-32, i32 1, i32 %6, %_IO_FILE* nonnull %3), !insn.addr !194
  %12 = trunc i32 %11 to i8, !insn.addr !195
  %13 = insertvalue [32 x i8] undef, i8 %12, 0, !insn.addr !195
  store [32 x i8] %13, [32 x i8]* %read_buffer_-40, align 8, !insn.addr !195
  %14 = bitcast [32 x i8]* %read_buffer_-40 to i64*, !insn.addr !196
  %15 = load i64, i64* %14, align 8, !insn.addr !196
  %16 = ptrtoint i64* %stack_var_-32 to i64, !insn.addr !197
  %17 = add i64 %15, %16, !insn.addr !198
  %18 = inttoptr i64 %17 to i8*, !insn.addr !198
  store i8 0, i8* %18, align 1, !insn.addr !198
  %19 = call i32 @fclose(%_IO_FILE* nonnull %3), !insn.addr !199
  %20 = call i32 @unlink(i8* %tmpfile), !insn.addr !200
  %21 = load i64, i64* %14, align 8, !insn.addr !201
  %22 = icmp eq i64 %21, %10, !insn.addr !202
  br i1 %22, label %dec_label_pc_1f68, label %dec_label_pc_1f84, !insn.addr !202

dec_label_pc_1f68:                                ; preds = %dec_label_pc_1f1c
  %23 = bitcast i64* %stack_var_-32 to i8*, !insn.addr !203
  %24 = call i32 @strcmp(i8* nonnull %23, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_3b28, i64 0, i64 0)), !insn.addr !203
  %25 = icmp eq i32 %24, 0, !insn.addr !204
  store i32 42, i32* %x0.0.reg2mem, !insn.addr !205
  br i1 %25, label %dec_label_pc_1f88, label %dec_label_pc_1f84, !insn.addr !205

dec_label_pc_1f84:                                ; preds = %dec_label_pc_1f68, %dec_label_pc_1f1c
  store i32 -3, i32* %x0.0.reg2mem, !insn.addr !206
  br label %dec_label_pc_1f88, !insn.addr !206

dec_label_pc_1f88:                                ; preds = %dec_label_pc_1f68, %dec_label_pc_1e80, %dec_label_pc_1f84, %dec_label_pc_1f0c
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  %26 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !207
  %27 = inttoptr i64 %26 to i64*, !insn.addr !208
  %28 = load i64, i64* %27, align 8, !insn.addr !208
  %29 = icmp eq i64 %2, %28, !insn.addr !209
  br i1 %29, label %dec_label_pc_1fac, label %dec_label_pc_1fa8, !insn.addr !210

dec_label_pc_1fa8:                                ; preds = %dec_label_pc_1f88
  call void @__stack_chk_fail(), !insn.addr !211
  br label %dec_label_pc_1fac, !insn.addr !211

dec_label_pc_1fac:                                ; preds = %dec_label_pc_1fa8, %dec_label_pc_1f88
  ret i32 %x0.0.reload, !insn.addr !212

; uselistorder directives
  uselistorder i32 %6, { 0, 2, 1 }
  uselistorder %_IO_FILE* %3, { 0, 1, 3, 2, 4, 5 }
  uselistorder i64* %stack_var_-32, { 0, 2, 1 }
  uselistorder i32* %x0.0.reg2mem, { 0, 4, 1, 3, 2 }
  uselistorder i32 (i8*, i8*)* @strcmp, { 1, 0, 2 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 2, 1, 0, 3 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1f88, { 2, 0, 3, 1 }
}

define i32 @call_fread_fwrite() local_unnamed_addr {
dec_label_pc_1fb8:
  %0 = call i32 @param_fread_fwrite(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_3b48, i64 0, i64 0)), !insn.addr !213
  ret i32 %0, !insn.addr !214
}

define i32 @param_malloc_free(i64 %size) local_unnamed_addr {
dec_label_pc_1fd4:
  %storemerge.reg2mem = alloca i32, !insn.addr !215
  %.reg2mem = alloca i64, !insn.addr !215
  %size.tr = trunc i64 %size to i32
  %0 = mul i32 %size.tr, 4, !insn.addr !216
  %1 = call i64* @malloc(i32 %0), !insn.addr !216
  %2 = icmp eq i64* %1, null, !insn.addr !217
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !218
  br i1 %2, label %dec_label_pc_2094, label %dec_label_pc_204c.preheader, !insn.addr !218

dec_label_pc_204c.preheader:                      ; preds = %dec_label_pc_1fd4
  %3 = ptrtoint i64* %1 to i64, !insn.addr !216
  %4 = icmp eq i64 %size, 0, !insn.addr !219
  store i64 0, i64* %.reg2mem, !insn.addr !220
  br i1 %4, label %dec_label_pc_205c, label %dec_label_pc_200c, !insn.addr !220

dec_label_pc_200c:                                ; preds = %dec_label_pc_204c.preheader, %dec_label_pc_200c
  %.reload = load i64, i64* %.reg2mem
  %5 = trunc i64 %.reload to i32, !insn.addr !221
  %6 = mul i32 %5, 10, !insn.addr !222
  %7 = mul i64 %.reload, 4, !insn.addr !223
  %8 = add i64 %7, %3, !insn.addr !224
  %9 = inttoptr i64 %8 to i32*, !insn.addr !225
  store i32 %6, i32* %9, align 4, !insn.addr !225
  %10 = add nuw i64 %.reload, 1, !insn.addr !226
  %exitcond = icmp eq i64 %10, %size
  store i64 %10, i64* %.reg2mem, !insn.addr !220
  br i1 %exitcond, label %dec_label_pc_205c, label %dec_label_pc_200c, !insn.addr !220

dec_label_pc_205c:                                ; preds = %dec_label_pc_200c, %dec_label_pc_204c.preheader
  %11 = bitcast i64* %1 to i32*, !insn.addr !227
  %12 = load i32, i32* %11, align 4, !insn.addr !227
  %13 = mul i64 %size, 4, !insn.addr !228
  %14 = add i64 %13, -4, !insn.addr !229
  %15 = add i64 %14, %3, !insn.addr !230
  %16 = inttoptr i64 %15 to i32*, !insn.addr !231
  %17 = load i32, i32* %16, align 4, !insn.addr !231
  %18 = add i32 %17, %12, !insn.addr !232
  call void @free(i64* nonnull %1), !insn.addr !233
  store i32 %18, i32* %storemerge.reg2mem, !insn.addr !234
  br label %dec_label_pc_2094, !insn.addr !234

dec_label_pc_2094:                                ; preds = %dec_label_pc_1fd4, %dec_label_pc_205c
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !235

; uselistorder directives
  uselistorder i64 %.reload, { 0, 2, 1 }
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64* %1, { 0, 1, 3, 2 }
  uselistorder i64* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2094, { 1, 0 }
  uselistorder label %dec_label_pc_200c, { 1, 0 }
}

define i32 @call_malloc_free() local_unnamed_addr {
dec_label_pc_209c:
  %0 = call i32 @param_malloc_free(i64 10), !insn.addr !236
  ret i32 %0, !insn.addr !237
}

define i32 @param_memset(i8* %buffer, i64 %size) local_unnamed_addr {
dec_label_pc_20b4:
  %stack_var_-12.0.lcssa.reg2mem = alloca i32, !insn.addr !238
  %stack_var_-12.02.reg2mem = alloca i32, !insn.addr !238
  %.reg2mem = alloca i64, !insn.addr !238
  %0 = bitcast i8* %buffer to i64*, !insn.addr !239
  %1 = trunc i64 %size to i32, !insn.addr !239
  %2 = call i64* @memset(i64* %0, i32 0, i32 %1), !insn.addr !239
  %3 = icmp eq i64 %size, 0, !insn.addr !240
  store i32 0, i32* %stack_var_-12.0.lcssa.reg2mem, !insn.addr !241
  br i1 %3, label %dec_label_pc_2124, label %dec_label_pc_20e8.lr.ph, !insn.addr !241

dec_label_pc_20e8.lr.ph:                          ; preds = %dec_label_pc_20b4
  %4 = ptrtoint i8* %buffer to i64, !insn.addr !242
  store i64 0, i64* %.reg2mem
  store i32 0, i32* %stack_var_-12.02.reg2mem
  br label %dec_label_pc_20e8

dec_label_pc_20e8:                                ; preds = %dec_label_pc_20e8, %dec_label_pc_20e8.lr.ph
  %stack_var_-12.02.reload = load i32, i32* %stack_var_-12.02.reg2mem
  %.reload = load i64, i64* %.reg2mem
  %5 = add i64 %.reload, %4, !insn.addr !243
  %6 = inttoptr i64 %5 to i8*, !insn.addr !244
  %7 = load i8, i8* %6, align 1, !insn.addr !244
  %8 = zext i8 %7 to i32, !insn.addr !244
  %9 = add i32 %stack_var_-12.02.reload, %8, !insn.addr !245
  %10 = add nuw i64 %.reload, 1, !insn.addr !246
  %exitcond = icmp eq i64 %10, %size
  store i64 %10, i64* %.reg2mem, !insn.addr !241
  store i32 %9, i32* %stack_var_-12.02.reg2mem, !insn.addr !241
  store i32 %9, i32* %stack_var_-12.0.lcssa.reg2mem, !insn.addr !241
  br i1 %exitcond, label %dec_label_pc_2124, label %dec_label_pc_20e8, !insn.addr !241

dec_label_pc_2124:                                ; preds = %dec_label_pc_20e8, %dec_label_pc_20b4
  %stack_var_-12.0.lcssa.reload = load i32, i32* %stack_var_-12.0.lcssa.reg2mem
  ret i32 %stack_var_-12.0.lcssa.reload, !insn.addr !247

; uselistorder directives
  uselistorder i64* %.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-12.02.reg2mem, { 1, 0, 2 }
}

define i32 @call_memset() local_unnamed_addr {
dec_label_pc_2130:
  %0 = alloca i32
  %indvars.iv.reg2mem = alloca i64, !insn.addr !248
  %1 = load i32, i32* %0
  %stack_var_-40 = alloca i32, align 4
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !249
  %3 = inttoptr i64 %2 to i64*, !insn.addr !250
  %4 = load i64, i64* %3, align 8, !insn.addr !250
  %5 = ptrtoint i32* %stack_var_-40 to i64, !insn.addr !251
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_2154

dec_label_pc_2154:                                ; preds = %dec_label_pc_2154, %dec_label_pc_2130
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %6 = mul i64 %indvars.iv.reload, 4, !insn.addr !252
  %7 = add i64 %6, %5, !insn.addr !253
  %8 = inttoptr i64 %7 to i32*, !insn.addr !253
  store i32 255, i32* %8, align 4, !insn.addr !253
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 10
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !254
  br i1 %exitcond, label %dec_label_pc_2180, label %dec_label_pc_2154, !insn.addr !254

dec_label_pc_2180:                                ; preds = %dec_label_pc_2154
  %9 = bitcast i32* %stack_var_-40 to i8*, !insn.addr !255
  %10 = call i32 @param_memset(i8* nonnull %9, i64 40), !insn.addr !255
  %11 = load i32, i32* %stack_var_-40, align 4, !insn.addr !256
  %12 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !257
  %13 = inttoptr i64 %12 to i64*, !insn.addr !258
  %14 = load i64, i64* %13, align 8, !insn.addr !258
  %15 = icmp eq i64 %4, %14, !insn.addr !259
  br i1 %15, label %dec_label_pc_21bc, label %dec_label_pc_21b8, !insn.addr !260

dec_label_pc_21b8:                                ; preds = %dec_label_pc_2180
  call void @__stack_chk_fail(), !insn.addr !261
  br label %dec_label_pc_21bc, !insn.addr !261

dec_label_pc_21bc:                                ; preds = %dec_label_pc_21b8, %dec_label_pc_2180
  %16 = add i32 %11, %1, !insn.addr !262
  ret i32 %16, !insn.addr !263

; uselistorder directives
  uselistorder i32* %stack_var_-40, { 1, 2, 0 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
}

define i32 @param_strchr_strstr(i8* %str, i8 %ch, i8* %substr) local_unnamed_addr {
dec_label_pc_21c8:
  %0 = zext i8 %ch to i32
  %1 = call i8* @strchr(i8* %str, i32 %0), !insn.addr !264
  %2 = icmp eq i8* %1, null, !insn.addr !265
  %3 = ptrtoint i8* %1 to i64
  %4 = ptrtoint i8* %str to i64
  %5 = sub i64 %3, %4
  %phitmp4 = and i64 %5, 4294967295
  %phitmp5 = inttoptr i64 %phitmp4 to i8*
  %storemerge3 = select i1 %2, i8* inttoptr (i64 4294967295 to i8*), i8* %phitmp5
  %6 = call i8* @strstr(i8* %str, i8* %substr), !insn.addr !266
  %7 = icmp eq i8* %6, null, !insn.addr !267
  %8 = ptrtoint i8* %6 to i64
  %9 = sub i64 %8, %4
  %phitmp = trunc i64 %9 to i32
  %storemerge = select i1 %7, i32 -1, i32 %phitmp
  %10 = ptrtoint i8* %storemerge3 to i64
  %11 = trunc i64 %10 to i32, !insn.addr !268
  %12 = add i32 %storemerge, %11, !insn.addr !269
  ret i32 %12, !insn.addr !270

; uselistorder directives
  uselistorder i8* %6, { 1, 0 }
  uselistorder i8* %str, { 1, 0, 2 }
}

define i32 @call_strchr_strstr() local_unnamed_addr {
dec_label_pc_225c:
  %0 = call i32 @param_strchr_strstr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_3b60, i64 0, i64 0), i8 66, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_3b78, i64 0, i64 0)), !insn.addr !271
  ret i32 %0, !insn.addr !272
}

define void @test_standard_library_functions() local_unnamed_addr {
dec_label_pc_2294:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3b80 to i8*)), !insn.addr !273
  %1 = call i32 @call_strcpy(), !insn.addr !274
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3ba8 to i8*)), !insn.addr !275
  %3 = call i32 @call_strcmp(), !insn.addr !276
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3bc8 to i8*)), !insn.addr !277
  %5 = call i32 @call_strlen(), !insn.addr !278
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3be8 to i8*)), !insn.addr !279
  %7 = call i32 @call_memcpy(), !insn.addr !280
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3c08 to i8*)), !insn.addr !281
  %9 = call i32 @call_memcmp(), !insn.addr !282
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3c28 to i8*)), !insn.addr !283
  %11 = call i32 @call_printf(), !insn.addr !284
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3c48 to i8*)), !insn.addr !285
  %13 = call i32 @call_scanf(), !insn.addr !286
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3c68 to i8*)), !insn.addr !287
  %15 = call i32 @call_fopen_fclose(), !insn.addr !288
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3c88 to i8*)), !insn.addr !289
  %17 = call i32 @call_fread_fwrite(), !insn.addr !290
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3ca8 to i8*)), !insn.addr !291
  %19 = call i32 @call_malloc_free(), !insn.addr !292
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3cc8 to i8*)), !insn.addr !293
  %21 = call i32 @call_memset(), !insn.addr !294
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3ce8 to i8*)), !insn.addr !295
  %23 = call i32 @call_strchr_strstr(), !insn.addr !296
  %24 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3d08 to i8*)), !insn.addr !297
  ret void, !insn.addr !298
}

define i32 @param_linux_syscall(i8* %pathname) local_unnamed_addr {
dec_label_pc_23a4:
  %storemerge.in.reg2mem = alloca i32, !insn.addr !299
  %0 = call i32 (i32, ...) @syscall(i32 56), !insn.addr !300
  %1 = icmp slt i32 %0, 0, !insn.addr !301
  br i1 %1, label %dec_label_pc_23d4, label %dec_label_pc_23e4, !insn.addr !302

dec_label_pc_23d4:                                ; preds = %dec_label_pc_23a4
  %2 = call i32* @__errno_location(), !insn.addr !303
  %3 = load i32, i32* %2, align 4, !insn.addr !304
  %4 = sub i32 0, %3, !insn.addr !305
  store i32 %4, i32* %storemerge.in.reg2mem, !insn.addr !306
  br label %dec_label_pc_23f4, !insn.addr !306

dec_label_pc_23e4:                                ; preds = %dec_label_pc_23a4
  %5 = call i32 (i32, ...) @syscall(i32 57), !insn.addr !307
  store i32 %0, i32* %storemerge.in.reg2mem, !insn.addr !308
  br label %dec_label_pc_23f4, !insn.addr !308

dec_label_pc_23f4:                                ; preds = %dec_label_pc_23e4, %dec_label_pc_23d4
  %storemerge.in.reload = load i32, i32* %storemerge.in.reg2mem
  ret i32 %storemerge.in.reload, !insn.addr !309

; uselistorder directives
  uselistorder i32* %storemerge.in.reg2mem, { 0, 2, 1 }
  uselistorder i32 (i32, ...)* @syscall, { 1, 0, 2 }
}

define i32 @call_linux_syscall() local_unnamed_addr {
dec_label_pc_23fc:
  %0 = call i32 @param_linux_syscall(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_3b18, i64 0, i64 0)), !insn.addr !310
  %1 = icmp slt i32 %0, 0, !insn.addr !311
  %. = select i1 %1, i32 -1, i32 42
  ret i32 %., !insn.addr !312
}

define i32 @param_win32_api(i8* %filename) local_unnamed_addr {
dec_label_pc_2434:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_-128 = alloca i64, align 8
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !313
  %3 = inttoptr i64 %2 to i64*, !insn.addr !314
  %4 = load i64, i64* %3, align 8, !insn.addr !314
  %5 = bitcast i64* %stack_var_-128 to %stat*, !insn.addr !315
  %6 = call i32 @stat(i8* %filename, %stat* nonnull %5), !insn.addr !315
  %7 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !316
  %8 = inttoptr i64 %7 to i64*, !insn.addr !317
  %9 = load i64, i64* %8, align 8, !insn.addr !317
  %10 = icmp eq i64 %4, %9, !insn.addr !318
  br i1 %10, label %dec_label_pc_24b0, label %dec_label_pc_24ac, !insn.addr !319

dec_label_pc_24ac:                                ; preds = %dec_label_pc_2434
  call void @__stack_chk_fail(), !insn.addr !320
  br label %dec_label_pc_24b0, !insn.addr !320

dec_label_pc_24b0:                                ; preds = %dec_label_pc_24ac, %dec_label_pc_2434
  %11 = icmp slt i32 %6, 0, !insn.addr !321
  %12 = icmp slt i64 %1, 1
  %. = select i1 %12, i32 -2, i32 42
  %x0.0 = select i1 %11, i32 -1, i32 %.
  ret i32 %x0.0, !insn.addr !322
}

define i32 @call_win32_api() local_unnamed_addr {
dec_label_pc_24bc:
  %0 = call i32 @param_win32_api(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_3b18, i64 0, i64 0)), !insn.addr !323
  ret i32 %0, !insn.addr !324
}

define i32 @param_fork_exec(i8* %prog, i8* %arg) local_unnamed_addr {
dec_label_pc_24d8:
  %x0.0.reg2mem = alloca i32, !insn.addr !325
  %stack_var_-12 = alloca i32, align 4
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !326
  %1 = inttoptr i64 %0 to i64*, !insn.addr !327
  %2 = load i64, i64* %1, align 8, !insn.addr !327
  %3 = call i32 @fork(), !insn.addr !328
  %4 = icmp slt i32 %3, 0, !insn.addr !329
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !330
  br i1 %4, label %dec_label_pc_2590, label %dec_label_pc_2518, !insn.addr !330

dec_label_pc_2518:                                ; preds = %dec_label_pc_24d8
  %5 = icmp eq i32 %3, 0, !insn.addr !331
  br i1 %5, label %dec_label_pc_2524, label %dec_label_pc_2540, !insn.addr !332

dec_label_pc_2524:                                ; preds = %dec_label_pc_2518
  %6 = call i32 (i8*, i8*, ...) @execl(i8* %prog, i8* %prog), !insn.addr !333
  call void @_exit(i32 127), !insn.addr !334
  unreachable, !insn.addr !334

dec_label_pc_2540:                                ; preds = %dec_label_pc_2518
  %7 = call i32 @waitpid(i32 %3, i32* nonnull %stack_var_-12, i32 0), !insn.addr !335
  %8 = icmp slt i32 %7, 0, !insn.addr !336
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !337
  br i1 %8, label %dec_label_pc_2590, label %dec_label_pc_256c, !insn.addr !337

dec_label_pc_256c:                                ; preds = %dec_label_pc_2540
  %9 = load i32, i32* %stack_var_-12, align 4, !insn.addr !338
  %10 = urem i32 %9, 128, !insn.addr !339
  %11 = icmp eq i32 %10, 0, !insn.addr !340
  store i32 -3, i32* %x0.0.reg2mem, !insn.addr !341
  br i1 %11, label %dec_label_pc_257c, label %dec_label_pc_2590, !insn.addr !341

dec_label_pc_257c:                                ; preds = %dec_label_pc_256c
  %12 = udiv i32 %9, 256
  %13 = urem i32 %12, 256, !insn.addr !342
  store i32 %13, i32* %x0.0.reg2mem, !insn.addr !343
  br label %dec_label_pc_2590, !insn.addr !343

dec_label_pc_2590:                                ; preds = %dec_label_pc_256c, %dec_label_pc_2540, %dec_label_pc_24d8, %dec_label_pc_257c
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  %14 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !344
  %15 = inttoptr i64 %14 to i64*, !insn.addr !345
  %16 = load i64, i64* %15, align 8, !insn.addr !345
  %17 = icmp eq i64 %2, %16, !insn.addr !346
  br i1 %17, label %dec_label_pc_25b4, label %dec_label_pc_25b0, !insn.addr !347

dec_label_pc_25b0:                                ; preds = %dec_label_pc_2590
  call void @__stack_chk_fail(), !insn.addr !348
  br label %dec_label_pc_25b4, !insn.addr !348

dec_label_pc_25b4:                                ; preds = %dec_label_pc_25b0, %dec_label_pc_2590
  ret i32 %x0.0.reload, !insn.addr !349

; uselistorder directives
  uselistorder i32* %x0.0.reg2mem, { 0, 4, 1, 2, 3 }
  uselistorder i32 256, { 1, 0 }
  uselistorder label %dec_label_pc_2590, { 3, 0, 1, 2 }
}

define i32 @call_fork_exec() local_unnamed_addr {
dec_label_pc_25c0:
  %0 = call i32 @param_fork_exec(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_3d28, i64 0, i64 0), i8* null), !insn.addr !350
  %1 = icmp eq i32 %0, 0, !insn.addr !351
  %. = select i1 %1, i32 42, i32 -1
  ret i32 %., !insn.addr !352
}

define i32 @param_pipe_communication() local_unnamed_addr {
dec_label_pc_25fc:
  %0 = alloca i32
  %x0.0.reg2mem = alloca i32, !insn.addr !353
  %stack_var_-32 = alloca i64, align 8
  %1 = load i32, i32* %0
  %pipefd_-48 = alloca i64, align 8
  %tmpcast = bitcast i64* %pipefd_-48 to [2 x i32]*
  %buffer_-40 = alloca [32 x i8], align 4
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !354
  %3 = inttoptr i64 %2 to i64*, !insn.addr !355
  %4 = load i64, i64* %3, align 8, !insn.addr !355
  %5 = ptrtoint [32 x i8]* %buffer_-40 to i64, !insn.addr !356
  %6 = trunc i64 %5 to i32, !insn.addr !357
  %7 = insertvalue [2 x i32] undef, i32 %6, 0, !insn.addr !357
  %8 = call i32 @pipe([2 x i32] %7), !insn.addr !357
  %9 = icmp slt i32 %8, 0, !insn.addr !358
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !359
  br i1 %9, label %dec_label_pc_26ec, label %dec_label_pc_2634, !insn.addr !359

dec_label_pc_2634:                                ; preds = %dec_label_pc_25fc
  %10 = call i32 @fork(), !insn.addr !360
  %11 = icmp slt i32 %10, 0, !insn.addr !361
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !362
  br i1 %11, label %dec_label_pc_26ec, label %dec_label_pc_2650, !insn.addr !362

dec_label_pc_2650:                                ; preds = %dec_label_pc_2634
  %12 = icmp eq i32 %10, 0, !insn.addr !363
  br i1 %12, label %dec_label_pc_265c, label %dec_label_pc_269c, !insn.addr !364

dec_label_pc_265c:                                ; preds = %dec_label_pc_2650
  %13 = bitcast [32 x i8]* %buffer_-40 to i32*, !insn.addr !365
  %14 = load i32, i32* %13, align 4, !insn.addr !365
  %15 = call i32 @close(i32 %14), !insn.addr !366
  store [2 x i32] [i32 ptrtoint ([10 x i8]* @global_var_3d38 to i32), i32 undef], [2 x i32]* %tmpcast, align 8, !insn.addr !367
  %16 = load i64, i64* %pipefd_-48, align 8
  %17 = inttoptr i64 %16 to i8*, !insn.addr !368
  %18 = call i32 @strlen(i8* %17), !insn.addr !368
  %19 = inttoptr i64 %16 to i64*, !insn.addr !369
  %20 = call i32 @write(i32 %1, i64* %19, i32 %18), !insn.addr !369
  %21 = call i32 @close(i32 %1), !insn.addr !370
  call void @_exit(i32 0), !insn.addr !371
  unreachable, !insn.addr !371

dec_label_pc_269c:                                ; preds = %dec_label_pc_2650
  %22 = call i32 @close(i32 %1), !insn.addr !372
  %23 = bitcast [32 x i8]* %buffer_-40 to i32*, !insn.addr !373
  %24 = load i32, i32* %23, align 4, !insn.addr !373
  %25 = call i32 @read(i32 %24, i64* nonnull %stack_var_-32, i32 31), !insn.addr !374
  %26 = sext i32 %25 to i64, !insn.addr !374
  %27 = ptrtoint i64* %stack_var_-32 to i64, !insn.addr !375
  %28 = add i64 %26, %27, !insn.addr !376
  %29 = inttoptr i64 %28 to i8*, !insn.addr !376
  store i8 0, i8* %29, align 1, !insn.addr !376
  %30 = load i32, i32* %23, align 4, !insn.addr !377
  %31 = call i32 @close(i32 %30), !insn.addr !378
  %32 = call i32 @wait(i64 0), !insn.addr !379
  %33 = icmp slt i32 %25, 1, !insn.addr !380
  %. = select i1 %33, i32 -3, i32 42
  store i32 %., i32* %x0.0.reg2mem, !insn.addr !381
  br label %dec_label_pc_26ec, !insn.addr !381

dec_label_pc_26ec:                                ; preds = %dec_label_pc_269c, %dec_label_pc_2634, %dec_label_pc_25fc
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  %34 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !382
  %35 = inttoptr i64 %34 to i64*, !insn.addr !383
  %36 = load i64, i64* %35, align 8, !insn.addr !383
  %37 = icmp eq i64 %4, %36, !insn.addr !384
  br i1 %37, label %dec_label_pc_2710, label %dec_label_pc_270c, !insn.addr !385

dec_label_pc_270c:                                ; preds = %dec_label_pc_26ec
  call void @__stack_chk_fail(), !insn.addr !386
  br label %dec_label_pc_2710, !insn.addr !386

dec_label_pc_2710:                                ; preds = %dec_label_pc_270c, %dec_label_pc_26ec
  ret i32 %x0.0.reload, !insn.addr !387

; uselistorder directives
  uselistorder i64* %stack_var_-32, { 1, 0 }
  uselistorder void (i32)* @_exit, { 1, 0, 2 }
  uselistorder i32 ()* @fork, { 1, 0, 2 }
}

define i32 @call_pipe_communication() local_unnamed_addr {
dec_label_pc_2720:
  %0 = call i32 @param_pipe_communication(), !insn.addr !388
  ret i32 %0, !insn.addr !389
}

define i32 @param_socket_create() local_unnamed_addr {
dec_label_pc_2734:
  %x0.0.reg2mem = alloca i32, !insn.addr !390
  %stack_var_-16 = alloca i64, align 8
  %addr_-24 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !391
  %1 = inttoptr i64 %0 to i64*, !insn.addr !392
  %2 = load i64, i64* %1, align 8, !insn.addr !392
  %3 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !393
  %4 = icmp slt i32 %3, 0, !insn.addr !394
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !395
  br i1 %4, label %dec_label_pc_283c, label %dec_label_pc_2778, !insn.addr !395

dec_label_pc_2778:                                ; preds = %dec_label_pc_2734
  store i64 1, i64* %addr_-24, align 8, !insn.addr !396
  %5 = call i32 @setsockopt(i32 %3, i32 1, i32 2, i64* nonnull %addr_-24, i32 4), !insn.addr !397
  %6 = icmp slt i32 %5, 0, !insn.addr !398
  br i1 %6, label %dec_label_pc_27a4, label %dec_label_pc_27b4, !insn.addr !399

dec_label_pc_27a4:                                ; preds = %dec_label_pc_2778
  %7 = call i32 @close(i32 %3), !insn.addr !400
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !401
  br label %dec_label_pc_283c, !insn.addr !401

dec_label_pc_27b4:                                ; preds = %dec_label_pc_2778
  %8 = call i64* @memset(i64* nonnull %stack_var_-16, i32 0, i32 16), !insn.addr !402
  store i64 2, i64* %stack_var_-16, align 8, !insn.addr !403
  %9 = call i16 @htons(i16 0), !insn.addr !404
  %10 = bitcast i64* %stack_var_-16 to %sockaddr*, !insn.addr !405
  %11 = call i32 @bind(i32 %3, %sockaddr* nonnull %10, i32 16), !insn.addr !405
  %12 = icmp slt i32 %11, 0, !insn.addr !406
  br i1 %12, label %dec_label_pc_27fc, label %dec_label_pc_280c, !insn.addr !407

dec_label_pc_27fc:                                ; preds = %dec_label_pc_27b4
  %13 = call i32 @close(i32 %3), !insn.addr !408
  store i32 -3, i32* %x0.0.reg2mem, !insn.addr !409
  br label %dec_label_pc_283c, !insn.addr !409

dec_label_pc_280c:                                ; preds = %dec_label_pc_27b4
  %14 = call i32 @listen(i32 %3, i32 5), !insn.addr !410
  %15 = icmp slt i32 %14, 0, !insn.addr !411
  %16 = call i32 @close(i32 %3)
  %. = select i1 %15, i32 -4, i32 42
  store i32 %., i32* %x0.0.reg2mem, !insn.addr !412
  br label %dec_label_pc_283c, !insn.addr !412

dec_label_pc_283c:                                ; preds = %dec_label_pc_280c, %dec_label_pc_2734, %dec_label_pc_27fc, %dec_label_pc_27a4
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  %17 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !413
  %18 = inttoptr i64 %17 to i64*, !insn.addr !414
  %19 = load i64, i64* %18, align 8, !insn.addr !414
  %20 = icmp eq i64 %2, %19, !insn.addr !415
  br i1 %20, label %dec_label_pc_2860, label %dec_label_pc_285c, !insn.addr !416

dec_label_pc_285c:                                ; preds = %dec_label_pc_283c
  call void @__stack_chk_fail(), !insn.addr !417
  br label %dec_label_pc_2860, !insn.addr !417

dec_label_pc_2860:                                ; preds = %dec_label_pc_285c, %dec_label_pc_283c
  ret i32 %x0.0.reload, !insn.addr !418

; uselistorder directives
  uselistorder i32 %3, { 0, 2, 1, 3, 4, 5, 6 }
  uselistorder i64* %stack_var_-16, { 0, 2, 1 }
  uselistorder i32* %x0.0.reg2mem, { 0, 1, 3, 4, 2 }
  uselistorder i64* (i64*, i32, i32)* @memset, { 1, 0, 2 }
  uselistorder label %dec_label_pc_283c, { 0, 2, 3, 1 }
}

define i32 @call_socket_create() local_unnamed_addr {
dec_label_pc_286c:
  %0 = call i32 @param_socket_create(), !insn.addr !419
  ret i32 %0, !insn.addr !420
}

define i32 @param_shmget_shmat() local_unnamed_addr {
dec_label_pc_2880:
  %x0.0.reg2mem = alloca i32, !insn.addr !421
  %0 = call i32 (i8*, i32, ...) @open(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_3d48, i64 0, i64 0), i32 66), !insn.addr !422
  %1 = icmp slt i32 %0, 0, !insn.addr !423
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !424
  br i1 %1, label %dec_label_pc_2984, label %dec_label_pc_28bc, !insn.addr !424

dec_label_pc_28bc:                                ; preds = %dec_label_pc_2880
  %2 = call i32 @close(i32 %0), !insn.addr !425
  %3 = call i32 @ftok(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_3d48, i64 0, i64 0), i32 42), !insn.addr !426
  %4 = icmp slt i32 %3, 0, !insn.addr !427
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !428
  br i1 %4, label %dec_label_pc_2984, label %dec_label_pc_28ec, !insn.addr !428

dec_label_pc_28ec:                                ; preds = %dec_label_pc_28bc
  %5 = call i32 @shmget(i32 %3, i32 ptrtoint (i32* @global_var_1000 to i32), i32 ptrtoint (i32* @global_var_3b6 to i32)), !insn.addr !429
  %6 = icmp slt i32 %5, 0, !insn.addr !430
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !431
  br i1 %6, label %dec_label_pc_2984, label %dec_label_pc_2914, !insn.addr !431

dec_label_pc_2914:                                ; preds = %dec_label_pc_28ec
  %7 = call i64* @shmat(i32 %5, i64* null, i32 0), !insn.addr !432
  %8 = icmp eq i64* %7, inttoptr (i64 -1 to i64*), !insn.addr !433
  store i32 -3, i32* %x0.0.reg2mem, !insn.addr !434
  br i1 %8, label %dec_label_pc_2984, label %dec_label_pc_293c, !insn.addr !434

dec_label_pc_293c:                                ; preds = %dec_label_pc_2914
  %9 = bitcast i64* %7 to i8*
  %10 = ptrtoint i64* %7 to i64, !insn.addr !435
  store i64 7299600957910902867, i64* %7, align 8, !insn.addr !436
  %11 = add i64 %10, 5, !insn.addr !437
  %12 = inttoptr i64 %11 to i64*, !insn.addr !437
  store i64 34184295084281188, i64* %12, align 8, !insn.addr !437
  %13 = call i32 @strlen(i8* %9), !insn.addr !438
  %14 = call i32 @shmdt(i64* %7), !insn.addr !439
  %15 = call i32 @shmctl(i32 %5, i32 0, %shmid_ds* null), !insn.addr !440
  store i32 %13, i32* %x0.0.reg2mem, !insn.addr !441
  br label %dec_label_pc_2984, !insn.addr !441

dec_label_pc_2984:                                ; preds = %dec_label_pc_2914, %dec_label_pc_28ec, %dec_label_pc_28bc, %dec_label_pc_2880, %dec_label_pc_293c
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !442

; uselistorder directives
  uselistorder i64* %7, { 0, 2, 1, 4, 3 }
  uselistorder i32* %x0.0.reg2mem, { 0, 5, 1, 2, 3, 4 }
  uselistorder i32 (i8*)* @strlen, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder i32 (i32)* @close, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder label %dec_label_pc_2984, { 4, 0, 1, 2, 3 }
}

define i32 @call_shmget_shmat() local_unnamed_addr {
dec_label_pc_298c:
  %0 = call i32 @param_shmget_shmat(), !insn.addr !443
  %1 = icmp slt i32 %0, 1, !insn.addr !444
  %. = select i1 %1, i32 -1, i32 42
  ret i32 %., !insn.addr !445
}

define void @signal_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_29bc:
  store i32 1, i32* @signal_received, align 4, !insn.addr !446
  store i32 %sig, i32* @signal_number, align 4, !insn.addr !447
  ret void, !insn.addr !448
}

define i32 @param_signal_handling() local_unnamed_addr {
dec_label_pc_29f0:
  %x0.0.reg2mem = alloca i32, !insn.addr !449
  %.lcssa.reg2mem = alloca i32, !insn.addr !449
  %stack_var_4.16.reg2mem = alloca i32, !insn.addr !449
  %.lcssa4.reg2mem = alloca i1, !insn.addr !449
  %stack_var_4.08.reg2mem = alloca i32, !insn.addr !449
  %0 = call void (i32)* @signal(i32 10, void (i32)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_2000 to i64), i64 2492) to void (i32)*)), !insn.addr !450
  %1 = icmp eq void (i32)* %0, inttoptr (i64 -1 to void (i32)*), !insn.addr !451
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !452
  br i1 %1, label %dec_label_pc_2b5c, label %dec_label_pc_2a18, !insn.addr !452

dec_label_pc_2a18:                                ; preds = %dec_label_pc_29f0
  %2 = call void (i32)* @signal(i32 14, void (i32)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_2000 to i64), i64 2492) to void (i32)*)), !insn.addr !453
  %3 = icmp eq void (i32)* %2, inttoptr (i64 -1 to void (i32)*), !insn.addr !454
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !455
  br i1 %3, label %dec_label_pc_2b5c, label %dec_label_pc_2a38, !insn.addr !455

dec_label_pc_2a38:                                ; preds = %dec_label_pc_2a18
  store i32 0, i32* @signal_received, align 4, !insn.addr !456
  %4 = call i32 @raise(i32 10), !insn.addr !457
  %5 = load i32, i32* @signal_received, align 4, !insn.addr !458
  %6 = icmp eq i32 %5, 0, !insn.addr !459
  %or.cond27 = icmp eq i1 %6, icmp sgt (i32 ptrtoint (i32* @global_var_3e8 to i32), i32 0)
  store i32 ptrtoint (i32* @global_var_3e8 to i32), i32* %stack_var_4.08.reg2mem, !insn.addr !460
  store i1 %6, i1* %.lcssa4.reg2mem, !insn.addr !460
  br i1 %or.cond27, label %dec_label_pc_2a58, label %dec_label_pc_2a88, !insn.addr !460

dec_label_pc_2a58:                                ; preds = %dec_label_pc_2a38, %dec_label_pc_2a58
  %stack_var_4.08.reload = load i32, i32* %stack_var_4.08.reg2mem
  %7 = add i32 %stack_var_4.08.reload, -1, !insn.addr !461
  %8 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !462
  %9 = load i32, i32* @signal_received, align 4, !insn.addr !458
  %10 = icmp eq i32 %9, 0, !insn.addr !459
  %11 = icmp sgt i32 %7, 0, !insn.addr !463
  %or.cond2 = icmp eq i1 %11, %10
  store i32 %7, i32* %stack_var_4.08.reg2mem, !insn.addr !460
  store i1 %10, i1* %.lcssa4.reg2mem, !insn.addr !460
  br i1 %or.cond2, label %dec_label_pc_2a58, label %dec_label_pc_2a88, !insn.addr !460

dec_label_pc_2a88:                                ; preds = %dec_label_pc_2a58, %dec_label_pc_2a38
  %.lcssa4.reload = load i1, i1* %.lcssa4.reg2mem
  store i32 -3, i32* %x0.0.reg2mem, !insn.addr !464
  br i1 %.lcssa4.reload, label %dec_label_pc_2b5c, label %dec_label_pc_2aa4, !insn.addr !464

dec_label_pc_2aa4:                                ; preds = %dec_label_pc_2a88
  %12 = load i32, i32* @signal_number, align 4, !insn.addr !465
  %13 = icmp eq i32 %12, 10, !insn.addr !466
  store i32 -4, i32* %x0.0.reg2mem, !insn.addr !467
  br i1 %13, label %dec_label_pc_2ac0, label %dec_label_pc_2b5c, !insn.addr !467

dec_label_pc_2ac0:                                ; preds = %dec_label_pc_2aa4
  store i32 0, i32* @signal_received, align 4, !insn.addr !468
  %14 = call i32 @alarm(i32 1), !insn.addr !469
  %15 = load i32, i32* @signal_received, align 4, !insn.addr !470
  %16 = icmp eq i32 %15, 0, !insn.addr !471
  %or.cond35 = icmp eq i1 %16, icmp sgt (i32 ptrtoint (i32* @global_var_7d0 to i32), i32 0)
  store i32 ptrtoint (i32* @global_var_7d0 to i32), i32* %stack_var_4.16.reg2mem, !insn.addr !472
  store i32 %15, i32* %.lcssa.reg2mem, !insn.addr !472
  br i1 %or.cond35, label %dec_label_pc_2ae0, label %dec_label_pc_2b10, !insn.addr !472

dec_label_pc_2ae0:                                ; preds = %dec_label_pc_2ac0, %dec_label_pc_2ae0
  %stack_var_4.16.reload = load i32, i32* %stack_var_4.16.reg2mem
  %17 = add i32 %stack_var_4.16.reload, -1, !insn.addr !473
  %18 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !474
  %19 = load i32, i32* @signal_received, align 4, !insn.addr !470
  %20 = icmp eq i32 %19, 0, !insn.addr !471
  %21 = icmp sgt i32 %17, 0, !insn.addr !475
  %or.cond3 = icmp eq i1 %21, %20
  store i32 %17, i32* %stack_var_4.16.reg2mem, !insn.addr !472
  store i32 %19, i32* %.lcssa.reg2mem, !insn.addr !472
  br i1 %or.cond3, label %dec_label_pc_2ae0, label %dec_label_pc_2b10, !insn.addr !472

dec_label_pc_2b10:                                ; preds = %dec_label_pc_2ae0, %dec_label_pc_2ac0
  %.lcssa.reload = load i32, i32* %.lcssa.reg2mem
  %22 = icmp ne i32 %.lcssa.reload, 0, !insn.addr !476
  %23 = load i32, i32* @signal_number, align 4, !insn.addr !477
  %24 = icmp eq i32 %23, 14, !insn.addr !478
  %or.cond = icmp eq i1 %22, %24
  store i32 -5, i32* %x0.0.reg2mem, !insn.addr !479
  br i1 %or.cond, label %dec_label_pc_2b40, label %dec_label_pc_2b5c, !insn.addr !479

dec_label_pc_2b40:                                ; preds = %dec_label_pc_2b10
  %25 = call void (i32)* @signal(i32 10, void (i32)* null), !insn.addr !480
  %26 = call void (i32)* @signal(i32 14, void (i32)* null), !insn.addr !481
  store i32 42, i32* %x0.0.reg2mem, !insn.addr !482
  br label %dec_label_pc_2b5c, !insn.addr !482

dec_label_pc_2b5c:                                ; preds = %dec_label_pc_2b10, %dec_label_pc_2aa4, %dec_label_pc_2a88, %dec_label_pc_2a18, %dec_label_pc_29f0, %dec_label_pc_2b40
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !483

; uselistorder directives
  uselistorder i32* %stack_var_4.08.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_4.16.reg2mem, { 2, 0, 1 }
  uselistorder i32* %x0.0.reg2mem, { 0, 6, 1, 2, 3, 4, 5 }
  uselistorder i32* @signal_number, { 0, 2, 1 }
  uselistorder i32* @signal_received, { 5, 1, 2, 6, 0, 3, 4 }
  uselistorder i32 14, { 1, 0, 2 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i32 10, { 2, 1, 3, 4, 0 }
  uselistorder label %dec_label_pc_2b5c, { 5, 0, 1, 2, 3, 4 }
  uselistorder label %dec_label_pc_2ae0, { 1, 0 }
  uselistorder label %dec_label_pc_2a58, { 1, 0 }
}

define i32 @call_signal_handling() local_unnamed_addr {
dec_label_pc_2b64:
  %0 = call i32 @param_signal_handling(), !insn.addr !484
  ret i32 %0, !insn.addr !485
}

define void @test_system_calls() local_unnamed_addr {
dec_label_pc_2b78:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3d70 to i8*)), !insn.addr !486
  %1 = call i32 @call_linux_syscall(), !insn.addr !487
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3d90 to i8*)), !insn.addr !488
  %3 = call i32 @call_win32_api(), !insn.addr !489
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3db0 to i8*)), !insn.addr !490
  %5 = call i32 @call_fork_exec(), !insn.addr !491
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3dd0 to i8*)), !insn.addr !492
  %7 = call i32 @call_pipe_communication(), !insn.addr !493
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3df0 to i8*)), !insn.addr !494
  %9 = call i32 @call_socket_create(), !insn.addr !495
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3e10 to i8*)), !insn.addr !496
  %11 = call i32 @call_shmget_shmat(), !insn.addr !497
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3e30 to i8*)), !insn.addr !498
  %13 = call i32 @call_signal_handling(), !insn.addr !499
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3e50 to i8*)), !insn.addr !500
  ret void, !insn.addr !501
}

define i8* @thread_compute(i8* %arg) local_unnamed_addr {
dec_label_pc_2c24:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = mul i32 %2, %2, !insn.addr !502
  %4 = call i64* @malloc(i32 4), !insn.addr !503
  %5 = bitcast i64* %4 to i32*, !insn.addr !504
  store i32 %3, i32* %5, align 4, !insn.addr !504
  %6 = bitcast i64* %4 to i8*, !insn.addr !505
  ret i8* %6, !insn.addr !505

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i32 @param_pthread_create(i32 %x) local_unnamed_addr {
dec_label_pc_2c74:
  %storemerge.reg2mem = alloca i32, !insn.addr !506
  %stack_var_-8 = alloca i64, align 8
  %thread_ret_-16 = alloca i8*, align 8
  %result_-28 = alloca i32, align 4
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !507
  %1 = inttoptr i64 %0 to i64*, !insn.addr !508
  %2 = load i64, i64* %1, align 8, !insn.addr !508
  store i32 %x, i32* %result_-28, align 4, !insn.addr !509
  %3 = bitcast i8** %thread_ret_-16 to i32*, !insn.addr !510
  %4 = bitcast i32* %result_-28 to i64*, !insn.addr !510
  %5 = call i32 @pthread_create(i32* nonnull %3, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_2000 to i64), i64 3108) to i64* (i64*)*), i64* nonnull %4), !insn.addr !510
  %6 = icmp eq i32 %5, 0, !insn.addr !511
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !512
  br i1 %6, label %dec_label_pc_2cd4, label %dec_label_pc_2cf8, !insn.addr !512

dec_label_pc_2cd4:                                ; preds = %dec_label_pc_2c74
  %7 = load i8*, i8** %thread_ret_-16, align 8, !insn.addr !513
  %8 = ptrtoint i8* %7 to i64, !insn.addr !513
  %9 = trunc i64 %8 to i32, !insn.addr !514
  %10 = bitcast i64* %stack_var_-8 to i64**, !insn.addr !514
  %11 = call i32 @pthread_join(i32 %9, i64** nonnull %10), !insn.addr !514
  %12 = load i64, i64* %stack_var_-8, align 8
  %13 = inttoptr i64 %12 to i32*, !insn.addr !515
  %14 = load i32, i32* %13, align 4, !insn.addr !515
  %15 = inttoptr i64 %12 to i64*, !insn.addr !516
  call void @free(i64* %15), !insn.addr !516
  store i32 %14, i32* %storemerge.reg2mem, !insn.addr !517
  br label %dec_label_pc_2cf8, !insn.addr !517

dec_label_pc_2cf8:                                ; preds = %dec_label_pc_2c74, %dec_label_pc_2cd4
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %16 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !518
  %17 = inttoptr i64 %16 to i64*, !insn.addr !519
  %18 = load i64, i64* %17, align 8, !insn.addr !519
  %19 = icmp eq i64 %2, %18, !insn.addr !520
  br i1 %19, label %dec_label_pc_2d1c, label %dec_label_pc_2d18, !insn.addr !521

dec_label_pc_2d18:                                ; preds = %dec_label_pc_2cf8
  call void @__stack_chk_fail(), !insn.addr !522
  br label %dec_label_pc_2d1c, !insn.addr !522

dec_label_pc_2d1c:                                ; preds = %dec_label_pc_2d18, %dec_label_pc_2cf8
  ret i32 %storemerge.reload, !insn.addr !523

; uselistorder directives
  uselistorder i8** %thread_ret_-16, { 1, 0 }
  uselistorder i64* %stack_var_-8, { 1, 0 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2cf8, { 1, 0 }
}

define i32 @call_pthread_create() local_unnamed_addr {
dec_label_pc_2d28:
  %0 = call i32 @param_pthread_create(i32 7), !insn.addr !524
  ret i32 %0, !insn.addr !525
}

define i8* @thread_sum(i8* %arg) local_unnamed_addr {
dec_label_pc_2d40:
  %storemerge1.reg2mem = alloca i32, !insn.addr !526
  %.reg2mem = alloca i32, !insn.addr !526
  %x0 = alloca i64, align 8
  %0 = ptrtoint i8* %arg to i64, !insn.addr !527
  %1 = add i64 %0, 8, !insn.addr !528
  %2 = inttoptr i64 %1 to i32*, !insn.addr !528
  store i32 0, i32* %2, align 4, !insn.addr !528
  %3 = bitcast i64* %x0 to i32*
  %4 = load i32, i32* %3, align 8, !insn.addr !529
  %5 = add i64 %0, 4, !insn.addr !530
  %6 = inttoptr i64 %5 to i32*, !insn.addr !530
  %7 = load i32, i32* %6, align 4, !insn.addr !530
  %8 = icmp ugt i32 %4, %7, !insn.addr !531
  store i32 0, i32* %.reg2mem, !insn.addr !531
  store i32 %4, i32* %storemerge1.reg2mem, !insn.addr !531
  br i1 %8, label %dec_label_pc_2da0, label %dec_label_pc_2d68, !insn.addr !531

dec_label_pc_2d68:                                ; preds = %dec_label_pc_2d40, %dec_label_pc_2d68
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %.reload = load i32, i32* %.reg2mem, !insn.addr !532
  %9 = add i32 %storemerge1.reload, %.reload, !insn.addr !533
  store i32 %9, i32* %2, align 4, !insn.addr !534
  %10 = add i32 %storemerge1.reload, 1, !insn.addr !535
  %11 = load i32, i32* %6, align 4, !insn.addr !530
  %12 = icmp ugt i32 %10, %11, !insn.addr !531
  store i32 %9, i32* %.reg2mem, !insn.addr !531
  store i32 %10, i32* %storemerge1.reg2mem, !insn.addr !531
  br i1 %12, label %dec_label_pc_2da0, label %dec_label_pc_2d68, !insn.addr !531

dec_label_pc_2da0:                                ; preds = %dec_label_pc_2d68, %dec_label_pc_2d40
  ret i8* null, !insn.addr !536

; uselistorder directives
  uselistorder i32* %6, { 1, 0 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge1.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_2d68, { 1, 0 }
}

define i32 @param_pthread_join() local_unnamed_addr {
dec_label_pc_2dac:
  %x0.0.reg2mem = alloca i32, !insn.addr !537
  %indvars.iv.reg2mem = alloca i64, !insn.addr !537
  %indvars.iv5.reg2mem = alloca i64, !insn.addr !537
  %stack_var_-32 = alloca i64, align 8
  %tids_-72 = alloca [3 x i64], align 8
  %stack_var_-64 = alloca i64, align 8
  %stack_var_-40 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !538
  %1 = inttoptr i64 %0 to i64*, !insn.addr !539
  %2 = load i64, i64* %1, align 8, !insn.addr !539
  store i64 4294967306, i64* %stack_var_-40, align 8, !insn.addr !540
  %3 = ptrtoint i64* %stack_var_-64 to i64
  %4 = ptrtoint i64* %stack_var_-40 to i64, !insn.addr !541
  store i64 0, i64* %indvars.iv5.reg2mem
  br label %dec_label_pc_2dec

dec_label_pc_2dec:                                ; preds = %dec_label_pc_2dac, %dec_label_pc_2e4c
  %indvars.iv5.reload = load i64, i64* %indvars.iv5.reg2mem
  %5 = mul i64 %indvars.iv5.reload, 8, !insn.addr !542
  %6 = add i64 %5, %3, !insn.addr !543
  %7 = mul nuw nsw i64 %indvars.iv5.reload, 12, !insn.addr !544
  %8 = add i64 %7, %4, !insn.addr !545
  %9 = inttoptr i64 %6 to i32*, !insn.addr !546
  %10 = inttoptr i64 %8 to i64*, !insn.addr !546
  %11 = call i32 @pthread_create(i32* %9, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_2000 to i64), i64 3392) to i64* (i64*)*), i64* %10), !insn.addr !546
  %12 = icmp eq i32 %11, 0, !insn.addr !547
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !548
  br i1 %12, label %dec_label_pc_2e4c, label %dec_label_pc_2ed0, !insn.addr !548

dec_label_pc_2e4c:                                ; preds = %dec_label_pc_2dec
  %indvars.iv.next6 = add nuw nsw i64 %indvars.iv5.reload, 1
  %13 = icmp ult i64 %indvars.iv.next6, 3, !insn.addr !549
  store i64 %indvars.iv.next6, i64* %indvars.iv5.reg2mem, !insn.addr !549
  br i1 %13, label %dec_label_pc_2dec, label %dec_label_pc_2e58, !insn.addr !549

dec_label_pc_2e58:                                ; preds = %dec_label_pc_2e4c
  store [3 x i64] [i64 0, i64 undef, i64 undef], [3 x i64]* %tids_-72, align 8, !insn.addr !550
  %14 = ptrtoint i64* %stack_var_-32 to i64
  %15 = bitcast [3 x i64]* %tids_-72 to i32*
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_2e64

dec_label_pc_2e64:                                ; preds = %dec_label_pc_2e58, %dec_label_pc_2e8c
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %16 = mul i64 %indvars.iv.reload, 8, !insn.addr !551
  %17 = add i64 %16, %3, !insn.addr !552
  %18 = inttoptr i64 %17 to i64*, !insn.addr !552
  %19 = load i64, i64* %18, align 8, !insn.addr !552
  %20 = trunc i64 %19 to i32, !insn.addr !553
  %21 = call i32 @pthread_join(i32 %20, i64** null), !insn.addr !553
  %22 = icmp eq i32 %21, 0, !insn.addr !554
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !555
  br i1 %22, label %dec_label_pc_2e8c, label %dec_label_pc_2ed0, !insn.addr !555

dec_label_pc_2e8c:                                ; preds = %dec_label_pc_2e64
  %23 = mul nuw nsw i64 %indvars.iv.reload, 12, !insn.addr !556
  %24 = add i64 %23, %14, !insn.addr !557
  %25 = inttoptr i64 %24 to i32*, !insn.addr !557
  %26 = load i32, i32* %25, align 4, !insn.addr !557
  %27 = load i32, i32* %15, align 8, !insn.addr !558
  %28 = add i32 %27, %26, !insn.addr !559
  %29 = sext i32 %28 to i64, !insn.addr !560
  %30 = insertvalue [3 x i64] undef, i64 %29, 0, !insn.addr !560
  store [3 x i64] %30, [3 x i64]* %tids_-72, align 8, !insn.addr !560
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %31 = icmp ult i64 %indvars.iv.next, 3, !insn.addr !561
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !561
  br i1 %31, label %dec_label_pc_2e64, label %dec_label_pc_2ecc, !insn.addr !561

dec_label_pc_2ecc:                                ; preds = %dec_label_pc_2e8c
  %32 = load i32, i32* %15, align 8, !insn.addr !562
  store i32 %32, i32* %x0.0.reg2mem, !insn.addr !562
  br label %dec_label_pc_2ed0, !insn.addr !562

dec_label_pc_2ed0:                                ; preds = %dec_label_pc_2dec, %dec_label_pc_2e64, %dec_label_pc_2ecc
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  %33 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !563
  %34 = inttoptr i64 %33 to i64*, !insn.addr !564
  %35 = load i64, i64* %34, align 8, !insn.addr !564
  %36 = icmp eq i64 %2, %35, !insn.addr !565
  br i1 %36, label %dec_label_pc_2ef4, label %dec_label_pc_2ef0, !insn.addr !566

dec_label_pc_2ef0:                                ; preds = %dec_label_pc_2ed0
  call void @__stack_chk_fail(), !insn.addr !567
  br label %dec_label_pc_2ef4, !insn.addr !567

dec_label_pc_2ef4:                                ; preds = %dec_label_pc_2ef0, %dec_label_pc_2ed0
  ret i32 %x0.0.reload, !insn.addr !568

; uselistorder directives
  uselistorder i64* %indvars.iv5.reg2mem, { 1, 0, 2 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %x0.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64 3, { 1, 0, 2 }
  uselistorder i64 12, { 1, 0, 2, 3 }
  uselistorder label %dec_label_pc_2ed0, { 2, 1, 0 }
  uselistorder label %dec_label_pc_2e64, { 1, 0 }
  uselistorder label %dec_label_pc_2dec, { 1, 0 }
}

define i32 @call_pthread_join() local_unnamed_addr {
dec_label_pc_2f00:
  %0 = call i32 @param_pthread_join(), !insn.addr !569
  ret i32 %0, !insn.addr !570
}

define i8* @thread_increment(i8* %arg) local_unnamed_addr {
dec_label_pc_2f14:
  %0 = alloca i64
  %storemerge1.reg2mem = alloca i32, !insn.addr !571
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp eq i32 %2, 0, !insn.addr !572
  store i32 0, i32* %storemerge1.reg2mem, !insn.addr !572
  br i1 %3, label %dec_label_pc_2f8c, label %dec_label_pc_2f34, !insn.addr !572

dec_label_pc_2f34:                                ; preds = %dec_label_pc_2f14, %dec_label_pc_2f34
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %4 = call i32 @pthread_mutex_lock(i64* bitcast (i32* @counter_mutex to i64*)), !insn.addr !573
  %5 = load i32, i32* @shared_counter, align 4, !insn.addr !574
  %6 = add i32 %5, 1, !insn.addr !575
  store i32 %6, i32* @shared_counter, align 4, !insn.addr !576
  %7 = call i32 @pthread_mutex_unlock(i64* bitcast (i32* @counter_mutex to i64*)), !insn.addr !577
  %8 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !578
  %9 = add nuw i32 %storemerge1.reload, 1, !insn.addr !579
  %exitcond = icmp eq i32 %9, %2
  store i32 %9, i32* %storemerge1.reg2mem, !insn.addr !572
  br i1 %exitcond, label %dec_label_pc_2f8c, label %dec_label_pc_2f34, !insn.addr !572

dec_label_pc_2f8c:                                ; preds = %dec_label_pc_2f34, %dec_label_pc_2f14
  ret i8* null, !insn.addr !580

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32* %storemerge1.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i32)* @usleep, { 2, 1, 0, 3 }
  uselistorder label %dec_label_pc_2f34, { 1, 0 }
}

define i32 @param_mutex_lock(i32 %thread_count, i32 %iterations_per_thread) local_unnamed_addr {
dec_label_pc_2f98:
  %x0.0.reg2mem = alloca i32, !insn.addr !581
  %.reg2mem = alloca i64, !insn.addr !581
  %storemerge12.reg2mem = alloca i32, !insn.addr !581
  %stack_var_-32 = alloca i32, align 4
  store i32 %iterations_per_thread, i32* %stack_var_-32, align 4, !insn.addr !582
  %0 = mul i32 %thread_count, 8, !insn.addr !583
  %1 = call i64* @malloc(i32 %0), !insn.addr !584
  %2 = icmp eq i64* %1, null, !insn.addr !585
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !586
  br i1 %2, label %dec_label_pc_30bc, label %dec_label_pc_2fcc, !insn.addr !586

dec_label_pc_2fcc:                                ; preds = %dec_label_pc_2f98
  store i32 0, i32* @shared_counter, align 4, !insn.addr !587
  %3 = icmp eq i32 %thread_count, 0
  br i1 %3, label %dec_label_pc_3080, label %dec_label_pc_2fe0.lr.ph, !insn.addr !588

dec_label_pc_2fe0.lr.ph:                          ; preds = %dec_label_pc_2fcc
  %4 = ptrtoint i64* %1 to i64, !insn.addr !584
  %5 = bitcast i32* %stack_var_-32 to i64*, !insn.addr !589
  store i32 0, i32* %storemerge12.reg2mem
  br label %dec_label_pc_2fe0

dec_label_pc_2fe0:                                ; preds = %dec_label_pc_2fe0.lr.ph, %dec_label_pc_3030
  %storemerge12.reload = load i32, i32* %storemerge12.reg2mem
  %6 = sext i32 %storemerge12.reload to i64, !insn.addr !590
  %7 = mul i64 %6, 8, !insn.addr !591
  %8 = add i64 %7, %4, !insn.addr !592
  %9 = inttoptr i64 %8 to i32*, !insn.addr !589
  %10 = call i32 @pthread_create(i32* %9, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_2000 to i64), i64 3860) to i64* (i64*)*), i64* nonnull %5), !insn.addr !589
  %11 = icmp eq i32 %10, 0, !insn.addr !593
  br i1 %11, label %dec_label_pc_3030, label %dec_label_pc_3014, !insn.addr !594

dec_label_pc_3014:                                ; preds = %dec_label_pc_2fe0
  call void @free(i64* nonnull %1), !insn.addr !595
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !596
  br label %dec_label_pc_30bc, !insn.addr !596

dec_label_pc_3030:                                ; preds = %dec_label_pc_2fe0
  %12 = add nuw i32 %storemerge12.reload, 1, !insn.addr !597
  %13 = icmp ult i32 %12, %thread_count, !insn.addr !588
  store i32 %12, i32* %storemerge12.reg2mem, !insn.addr !588
  br i1 %13, label %dec_label_pc_2fe0, label %dec_label_pc_3048.lr.ph, !insn.addr !588

dec_label_pc_3048.lr.ph:                          ; preds = %dec_label_pc_3030
  %14 = zext i32 %thread_count to i64, !insn.addr !598
  store i64 0, i64* %.reg2mem
  br label %dec_label_pc_3048

dec_label_pc_3048:                                ; preds = %dec_label_pc_3048.lr.ph, %dec_label_pc_3048
  %.reload = load i64, i64* %.reg2mem
  %sext = mul i64 %.reload, 4294967296
  %15 = ashr exact i64 %sext, 29, !insn.addr !599
  %16 = add i64 %15, %4, !insn.addr !600
  %17 = inttoptr i64 %16 to i64*, !insn.addr !601
  %18 = load i64, i64* %17, align 8, !insn.addr !601
  %19 = trunc i64 %18 to i32, !insn.addr !602
  %20 = call i32 @pthread_join(i32 %19, i64** null), !insn.addr !602
  %21 = add nuw nsw i64 %.reload, 1, !insn.addr !603
  %22 = and i64 %21, 4294967295
  %23 = icmp ult i64 %22, %14, !insn.addr !604
  store i64 %22, i64* %.reg2mem, !insn.addr !604
  br i1 %23, label %dec_label_pc_3048, label %dec_label_pc_3080, !insn.addr !604

dec_label_pc_3080:                                ; preds = %dec_label_pc_3048, %dec_label_pc_2fcc
  call void @free(i64* nonnull %1), !insn.addr !605
  %24 = load i32, i32* %stack_var_-32, align 4, !insn.addr !606
  %25 = mul i32 %24, %thread_count, !insn.addr !607
  %26 = load i32, i32* @shared_counter, align 4, !insn.addr !608
  %27 = icmp eq i32 %25, %26, !insn.addr !609
  %. = select i1 %27, i32 42, i32 -3
  store i32 %., i32* %x0.0.reg2mem, !insn.addr !610
  br label %dec_label_pc_30bc, !insn.addr !610

dec_label_pc_30bc:                                ; preds = %dec_label_pc_3080, %dec_label_pc_2f98, %dec_label_pc_3014
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !611

; uselistorder directives
  uselistorder i64* %1, { 1, 0, 3, 2 }
  uselistorder i32* %stack_var_-32, { 1, 0, 2 }
  uselistorder i32* %storemerge12.reg2mem, { 1, 0, 2 }
  uselistorder i64* %.reg2mem, { 1, 0, 2 }
  uselistorder i32* %x0.0.reg2mem, { 0, 1, 3, 2 }
  uselistorder i32* @shared_counter, { 2, 0, 1, 3 }
  uselistorder i32 %thread_count, { 1, 3, 4, 2, 0 }
  uselistorder label %dec_label_pc_30bc, { 0, 2, 1 }
  uselistorder label %dec_label_pc_3048, { 1, 0 }
  uselistorder label %dec_label_pc_2fe0, { 1, 0 }
}

define i32 @call_mutex_lock() local_unnamed_addr {
dec_label_pc_30c4:
  %0 = call i32 @param_mutex_lock(i32 4, i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !612
  ret i32 %0, !insn.addr !613

; uselistorder directives
  uselistorder i32 ptrtoint (i32* @global_var_3e8 to i32), { 2, 3, 5, 4, 0, 1 }
}

define i8* @consumer_thread(i8* %arg) local_unnamed_addr {
dec_label_pc_30e0:
  %0 = call i32 @pthread_mutex_lock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !614
  %1 = load i32, i32* @ready, align 4, !insn.addr !615
  %2 = icmp eq i32 %1, 0, !insn.addr !616
  br i1 %2, label %dec_label_pc_30fc, label %dec_label_pc_3124, !insn.addr !617

dec_label_pc_30fc:                                ; preds = %dec_label_pc_30e0, %dec_label_pc_30fc
  %3 = call i32 @pthread_cond_wait(i64* bitcast (i32* @cond to i64*), i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !618
  %4 = load i32, i32* @ready, align 4, !insn.addr !615
  %5 = icmp eq i32 %4, 0, !insn.addr !616
  br i1 %5, label %dec_label_pc_30fc, label %dec_label_pc_3124, !insn.addr !617

dec_label_pc_3124:                                ; preds = %dec_label_pc_30fc, %dec_label_pc_30e0
  %6 = load i32, i32* @data, align 4, !insn.addr !619
  %7 = call i32 @pthread_mutex_unlock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !620
  %8 = call i64* @malloc(i32 4), !insn.addr !621
  %9 = bitcast i64* %8 to i32*, !insn.addr !622
  store i32 %6, i32* %9, align 4, !insn.addr !622
  %10 = bitcast i64* %8 to i8*, !insn.addr !623
  ret i8* %10, !insn.addr !623

; uselistorder directives
  uselistorder label %dec_label_pc_30fc, { 1, 0 }
}

define i8* @producer_thread(i8* %arg) local_unnamed_addr {
dec_label_pc_3164:
  %0 = call i32 @sleep(i32 1), !insn.addr !624
  %1 = call i32 @pthread_mutex_lock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !625
  store i32 42, i32* @data, align 4, !insn.addr !626
  store i32 1, i32* @ready, align 4, !insn.addr !627
  %2 = call i32 @pthread_cond_signal(i64* bitcast (i32* @cond to i64*)), !insn.addr !628
  %3 = call i32 @pthread_mutex_unlock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !629
  ret i8* null, !insn.addr !630

; uselistorder directives
  uselistorder i32 (i64*)* @pthread_mutex_unlock, { 2, 1, 0, 3 }
  uselistorder i32 (i64*)* @pthread_mutex_lock, { 2, 0, 1, 3 }
  uselistorder i64* bitcast (i32* @cond_mutex to i64*), { 0, 1, 3, 2, 4 }
}

define i32 @param_condition_variable() local_unnamed_addr {
dec_label_pc_31c8:
  %x0.0.reg2mem = alloca i32, !insn.addr !631
  %stack_var_-8 = alloca i64, align 8
  %consumer_-24 = alloca i64, align 8
  %consumer_ret_-16 = alloca i8*, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !632
  %1 = inttoptr i64 %0 to i64*, !insn.addr !633
  %2 = load i64, i64* %1, align 8, !insn.addr !633
  store i32 0, i32* @ready, align 4, !insn.addr !634
  store i32 0, i32* @data, align 4, !insn.addr !635
  %3 = bitcast i8** %consumer_ret_-16 to i32*, !insn.addr !636
  %4 = call i32 @pthread_create(i32* nonnull %3, i64* null, i64* (i64*)* inttoptr (i64 12512 to i64* (i64*)*), i64* null), !insn.addr !636
  %5 = icmp eq i32 %4, 0, !insn.addr !637
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !638
  br i1 %5, label %dec_label_pc_3228, label %dec_label_pc_328c, !insn.addr !638

dec_label_pc_3228:                                ; preds = %dec_label_pc_31c8
  %6 = bitcast i64* %consumer_-24 to i32*, !insn.addr !639
  %7 = call i32 @pthread_create(i32* nonnull %6, i64* null, i64* (i64*)* inttoptr (i64 12644 to i64* (i64*)*), i64* null), !insn.addr !639
  %8 = icmp eq i32 %7, 0, !insn.addr !640
  %9 = load i8*, i8** %consumer_ret_-16, align 8
  %10 = ptrtoint i8* %9 to i64
  %11 = trunc i64 %10 to i32
  br i1 %8, label %dec_label_pc_325c, label %dec_label_pc_324c, !insn.addr !641

dec_label_pc_324c:                                ; preds = %dec_label_pc_3228
  %12 = call i32 @pthread_cancel(i32 %11), !insn.addr !642
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !643
  br label %dec_label_pc_328c, !insn.addr !643

dec_label_pc_325c:                                ; preds = %dec_label_pc_3228
  %13 = bitcast i64* %stack_var_-8 to i64**, !insn.addr !644
  %14 = call i32 @pthread_join(i32 %11, i64** nonnull %13), !insn.addr !644
  %15 = load i64, i64* %consumer_-24, align 8, !insn.addr !645
  %16 = trunc i64 %15 to i32, !insn.addr !646
  %17 = call i32 @pthread_join(i32 %16, i64** null), !insn.addr !646
  %18 = load i64, i64* %stack_var_-8, align 8
  %19 = inttoptr i64 %18 to i32*, !insn.addr !647
  %20 = load i32, i32* %19, align 4, !insn.addr !647
  %21 = inttoptr i64 %18 to i64*, !insn.addr !648
  call void @free(i64* %21), !insn.addr !648
  store i32 %20, i32* %x0.0.reg2mem, !insn.addr !649
  br label %dec_label_pc_328c, !insn.addr !649

dec_label_pc_328c:                                ; preds = %dec_label_pc_31c8, %dec_label_pc_325c, %dec_label_pc_324c
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  %22 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !650
  %23 = inttoptr i64 %22 to i64*, !insn.addr !651
  %24 = load i64, i64* %23, align 8, !insn.addr !651
  %25 = icmp eq i64 %2, %24, !insn.addr !652
  br i1 %25, label %dec_label_pc_32b0, label %dec_label_pc_32ac, !insn.addr !653

dec_label_pc_32ac:                                ; preds = %dec_label_pc_328c
  call void @__stack_chk_fail(), !insn.addr !654
  br label %dec_label_pc_32b0, !insn.addr !654

dec_label_pc_32b0:                                ; preds = %dec_label_pc_32ac, %dec_label_pc_328c
  ret i32 %x0.0.reload, !insn.addr !655

; uselistorder directives
  uselistorder i32 %11, { 1, 0 }
  uselistorder i8** %consumer_ret_-16, { 1, 0 }
  uselistorder i64* %consumer_-24, { 1, 0 }
  uselistorder i64* %stack_var_-8, { 1, 0 }
  uselistorder i32* %x0.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32* @ready, { 1, 2, 3, 0 }
  uselistorder label %dec_label_pc_328c, { 1, 2, 0 }
}

define i32 @call_condition_variable() local_unnamed_addr {
dec_label_pc_32bc:
  %0 = call i32 @param_condition_variable(), !insn.addr !656
  ret i32 %0, !insn.addr !657
}

define i8* @thread_atomic_increment(i8* %arg) local_unnamed_addr {
dec_label_pc_32d0:
  %0 = alloca i64
  %storemerge1.reg2mem = alloca i32, !insn.addr !658
  %1 = load i64, i64* %0
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !659
  %3 = inttoptr i64 %2 to i64*
  %4 = load i64, i64* %3, align 8, !insn.addr !660
  %5 = trunc i64 %1 to i32
  %6 = icmp eq i32 %5, 0, !insn.addr !661
  store i32 0, i32* %storemerge1.reg2mem, !insn.addr !661
  br i1 %6, label %dec_label_pc_33ac, label %dec_label_pc_3308, !insn.addr !661

dec_label_pc_3308:                                ; preds = %dec_label_pc_32d0, %dec_label_pc_3308
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %7 = call i64 @__aarch64_ldadd4_acq_rel(), !insn.addr !662
  %8 = call i64 @__aarch64_cas4_acq_rel(), !insn.addr !663
  %9 = add nuw i32 %storemerge1.reload, 1, !insn.addr !664
  %exitcond = icmp eq i32 %9, %5
  store i32 %9, i32* %storemerge1.reg2mem, !insn.addr !661
  br i1 %exitcond, label %dec_label_pc_3384, label %dec_label_pc_3308, !insn.addr !661

dec_label_pc_3384:                                ; preds = %dec_label_pc_3308
  %.pre = load i64, i64* @global_var_14fe8, align 8
  %.phi.trans.insert = inttoptr i64 %.pre to i64*
  %.pre2 = load i64, i64* %.phi.trans.insert, align 8
  %10 = icmp eq i64 %4, %.pre2, !insn.addr !665
  br i1 %10, label %dec_label_pc_33ac, label %dec_label_pc_33a8, !insn.addr !666

dec_label_pc_33a8:                                ; preds = %dec_label_pc_3384
  call void @__stack_chk_fail(), !insn.addr !667
  br label %dec_label_pc_33ac, !insn.addr !667

dec_label_pc_33ac:                                ; preds = %dec_label_pc_32d0, %dec_label_pc_33a8, %dec_label_pc_3384
  ret i8* null, !insn.addr !668

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i32* %storemerge1.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_33ac, { 1, 2, 0 }
  uselistorder label %dec_label_pc_3308, { 1, 0 }
}

define i8* @thread_atomic_load_store(i8* %arg) local_unnamed_addr {
dec_label_pc_33bc:
  %0 = load i32, i32* @atomic_counter, align 4, !insn.addr !669
  %1 = add i32 %0, 100, !insn.addr !670
  %2 = load i64, i64* bitcast (i32* @atomic_counter to i64*), align 8, !insn.addr !671
  call void @__asm_stlr(i32 %1, i64 %2), !insn.addr !671
  ret i8* null, !insn.addr !672

; uselistorder directives
  uselistorder i8* null, { 1, 0, 2, 3, 4, 5, 6, 7 }
}

define i32 @param_atomic_ops(i32 %thread_count, i32 %iterations) local_unnamed_addr {
dec_label_pc_33f8:
  %x0.0.reg2mem = alloca i32, !insn.addr !673
  %storemerge3.reg2mem = alloca i64, !insn.addr !673
  %storemerge24.reg2mem = alloca i32, !insn.addr !673
  %tids_-16 = alloca i64*, align 8
  %stack_var_-48 = alloca i32, align 4
  store i32 %iterations, i32* %stack_var_-48, align 4, !insn.addr !674
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !675
  %1 = inttoptr i64 %0 to i64*, !insn.addr !676
  %2 = load i64, i64* %1, align 8, !insn.addr !676
  %3 = mul i32 %thread_count, 8, !insn.addr !677
  %4 = call i64* @malloc(i32 %3), !insn.addr !678
  %5 = icmp eq i64* %4, null, !insn.addr !679
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !680
  br i1 %5, label %dec_label_pc_3554, label %dec_label_pc_3440, !insn.addr !680

dec_label_pc_3440:                                ; preds = %dec_label_pc_33f8
  %6 = ptrtoint i64* %4 to i64, !insn.addr !678
  %7 = load i64, i64* bitcast (i32* @atomic_counter to i64*), align 8, !insn.addr !681
  call void @__asm_stlr(i32 0, i64 %7), !insn.addr !681
  %8 = icmp eq i32 %thread_count, 0
  br i1 %8, label %dec_label_pc_34b4, label %dec_label_pc_3454.lr.ph, !insn.addr !682

dec_label_pc_3454.lr.ph:                          ; preds = %dec_label_pc_3440
  %9 = bitcast i32* %stack_var_-48 to i64*, !insn.addr !683
  store i32 0, i32* %storemerge24.reg2mem
  br label %dec_label_pc_3454

dec_label_pc_3454:                                ; preds = %dec_label_pc_3454.lr.ph, %dec_label_pc_34a4
  %storemerge24.reload = load i32, i32* %storemerge24.reg2mem
  %10 = sext i32 %storemerge24.reload to i64, !insn.addr !684
  %11 = mul i64 %10, 8, !insn.addr !685
  %12 = add i64 %11, %6, !insn.addr !686
  %13 = inttoptr i64 %12 to i32*, !insn.addr !683
  %14 = call i32 @pthread_create(i32* %13, i64* null, i64* (i64*)* inttoptr (i64 13008 to i64* (i64*)*), i64* nonnull %9), !insn.addr !683
  %15 = icmp eq i32 %14, 0, !insn.addr !687
  br i1 %15, label %dec_label_pc_34a4, label %dec_label_pc_3488, !insn.addr !688

dec_label_pc_3488:                                ; preds = %dec_label_pc_3454
  call void @free(i64* nonnull %4), !insn.addr !689
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !690
  br label %dec_label_pc_3554, !insn.addr !690

dec_label_pc_34a4:                                ; preds = %dec_label_pc_3454
  %16 = add nuw i32 %storemerge24.reload, 1, !insn.addr !691
  %17 = icmp ult i32 %16, %thread_count, !insn.addr !682
  store i32 %16, i32* %storemerge24.reg2mem, !insn.addr !682
  br i1 %17, label %dec_label_pc_3454, label %dec_label_pc_34b4, !insn.addr !682

dec_label_pc_34b4:                                ; preds = %dec_label_pc_34a4, %dec_label_pc_3440
  %18 = bitcast i64** %tids_-16 to i32*, !insn.addr !692
  %19 = call i32 @pthread_create(i32* nonnull %18, i64* null, i64* (i64*)* inttoptr (i64 13244 to i64* (i64*)*), i64* null), !insn.addr !692
  %20 = icmp eq i32 %19, 0, !insn.addr !693
  br i1 %20, label %dec_label_pc_34d8, label %dec_label_pc_34e4, !insn.addr !694

dec_label_pc_34d8:                                ; preds = %dec_label_pc_34b4
  %21 = load i64*, i64** %tids_-16, align 8, !insn.addr !695
  %22 = ptrtoint i64* %21 to i64, !insn.addr !695
  %23 = trunc i64 %22 to i32, !insn.addr !696
  %24 = call i32 @pthread_join(i32 %23, i64** null), !insn.addr !696
  br label %dec_label_pc_34e4, !insn.addr !696

dec_label_pc_34e4:                                ; preds = %dec_label_pc_34b4, %dec_label_pc_34d8
  %25 = zext i32 %thread_count to i64, !insn.addr !697
  store i64 0, i64* %storemerge3.reg2mem, !insn.addr !698
  br i1 %8, label %dec_label_pc_3524, label %dec_label_pc_34ec, !insn.addr !698

dec_label_pc_34ec:                                ; preds = %dec_label_pc_34e4, %dec_label_pc_34ec
  %storemerge3.reload = load i64, i64* %storemerge3.reg2mem
  %26 = mul i64 %storemerge3.reload, 8, !insn.addr !699
  %27 = add i64 %26, %6, !insn.addr !700
  %28 = inttoptr i64 %27 to i64*, !insn.addr !701
  %29 = load i64, i64* %28, align 8, !insn.addr !701
  %30 = trunc i64 %29 to i32, !insn.addr !702
  %31 = call i32 @pthread_join(i32 %30, i64** null), !insn.addr !702
  %32 = mul i64 %storemerge3.reload, 4294967296, !insn.addr !703
  %sext1 = add i64 %32, 4294967296
  %33 = ashr exact i64 %sext1, 32, !insn.addr !704
  %34 = and i64 %33, 4294967295, !insn.addr !705
  %35 = icmp ult i64 %34, %25, !insn.addr !698
  store i64 %33, i64* %storemerge3.reg2mem, !insn.addr !698
  br i1 %35, label %dec_label_pc_34ec, label %dec_label_pc_3524, !insn.addr !698

dec_label_pc_3524:                                ; preds = %dec_label_pc_34ec, %dec_label_pc_34e4
  %36 = load i32, i32* @atomic_counter, align 4, !insn.addr !706
  call void @free(i64* nonnull %4), !insn.addr !707
  %37 = icmp slt i32 %36, 1, !insn.addr !708
  %. = select i1 %37, i32 -3, i32 42
  store i32 %., i32* %x0.0.reg2mem, !insn.addr !709
  br label %dec_label_pc_3554, !insn.addr !709

dec_label_pc_3554:                                ; preds = %dec_label_pc_3524, %dec_label_pc_33f8, %dec_label_pc_3488
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  %38 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !710
  %39 = inttoptr i64 %38 to i64*, !insn.addr !711
  %40 = load i64, i64* %39, align 8, !insn.addr !711
  %41 = icmp eq i64 %2, %40, !insn.addr !712
  br i1 %41, label %dec_label_pc_3578, label %dec_label_pc_3574, !insn.addr !713

dec_label_pc_3574:                                ; preds = %dec_label_pc_3554
  call void @__stack_chk_fail(), !insn.addr !714
  br label %dec_label_pc_3578, !insn.addr !714

dec_label_pc_3578:                                ; preds = %dec_label_pc_3574, %dec_label_pc_3554
  ret i32 %x0.0.reload, !insn.addr !715

; uselistorder directives
  uselistorder i64 %storemerge3.reload, { 1, 0 }
  uselistorder i64* %4, { 1, 0, 3, 2 }
  uselistorder i64** %tids_-16, { 1, 0 }
  uselistorder i32* %storemerge24.reg2mem, { 1, 0, 2 }
  uselistorder i64* %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder i32* %x0.0.reg2mem, { 0, 1, 3, 2 }
  uselistorder i32 %thread_count, { 2, 3, 1, 0 }
  uselistorder label %dec_label_pc_3554, { 0, 2, 1 }
  uselistorder label %dec_label_pc_34ec, { 1, 0 }
  uselistorder label %dec_label_pc_34e4, { 1, 0 }
  uselistorder label %dec_label_pc_3454, { 1, 0 }
}

define i32 @call_atomic_ops() local_unnamed_addr {
dec_label_pc_3584:
  %0 = call i32 @param_atomic_ops(i32 4, i32 500), !insn.addr !716
  ret i32 %0, !insn.addr !717
}

define i8* @thread_tls_test(i8* %arg) local_unnamed_addr {
dec_label_pc_35a0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i8* %arg to i64
  %3 = call i64 @__asm_mrs(i64 %2, i64 %1), !insn.addr !718
  %4 = add i64 %3, 16, !insn.addr !719
  %5 = inttoptr i64 %4 to i32*, !insn.addr !720
  %6 = load i32, i32* %5, align 4, !insn.addr !720
  %7 = zext i32 %6 to i64, !insn.addr !720
  %8 = call i64 @__asm_mrs(i64 %7, i64 %3), !insn.addr !721
  %9 = add i64 %8, 16, !insn.addr !722
  %10 = inttoptr i64 %9 to i32*, !insn.addr !723
  %11 = load i32, i32* %10, align 4, !insn.addr !723
  %12 = zext i32 %11 to i64, !insn.addr !723
  %13 = add i32 %11, 50, !insn.addr !724
  %14 = call i64 @__asm_mrs(i64 %12, i64 %8), !insn.addr !725
  %15 = add i64 %14, 16, !insn.addr !726
  %16 = inttoptr i64 %15 to i32*, !insn.addr !727
  store i32 %13, i32* %16, align 4, !insn.addr !727
  %17 = call i64 @__asm_mrs(i64 %15, i64 %14), !insn.addr !728
  %18 = add i64 %17, 24, !insn.addr !729
  %19 = inttoptr i64 %18 to i8*, !insn.addr !730
  %20 = call i8* @strncpy(i8* %19, i8* %arg, i32 31), !insn.addr !730
  %21 = call i64* @malloc(i32 8), !insn.addr !731
  %22 = ptrtoint i64* %21 to i64, !insn.addr !731
  %23 = bitcast i64* %21 to i32*, !insn.addr !732
  store i32 %6, i32* %23, align 4, !insn.addr !732
  %24 = add i64 %22, 4, !insn.addr !733
  %25 = call i64 @__asm_mrs(i64 %7, i64 %17), !insn.addr !734
  %26 = add i64 %25, 16, !insn.addr !735
  %27 = inttoptr i64 %26 to i32*, !insn.addr !736
  %28 = load i32, i32* %27, align 4, !insn.addr !736
  %29 = inttoptr i64 %24 to i32*, !insn.addr !737
  store i32 %28, i32* %29, align 4, !insn.addr !737
  %30 = bitcast i64* %21 to i8*, !insn.addr !738
  ret i8* %30, !insn.addr !738

; uselistorder directives
  uselistorder i64 %17, { 1, 0 }
  uselistorder i64 %15, { 1, 0 }
  uselistorder i64 %14, { 1, 0 }
  uselistorder i64 %8, { 1, 0 }
  uselistorder i64 %3, { 1, 0 }
}

define i32 @param_thread_local_storage(i32 %thread_count) local_unnamed_addr {
dec_label_pc_3644:
  %x0.0.reg2mem = alloca i32, !insn.addr !739
  %expected_initial_-48.0.lcssa.reg2mem = alloca i32, !insn.addr !739
  %stack_var_-52.0.lcssa.reg2mem = alloca i32, !insn.addr !739
  %stack_var_-52.09.reg2mem = alloca i32, !insn.addr !739
  %expected_initial_-48.010.reg2mem = alloca i32, !insn.addr !739
  %storemerge11.reg2mem = alloca i32, !insn.addr !739
  %storemerge18.reg2mem = alloca i32, !insn.addr !739
  %storemerge213.reg2mem = alloca i32, !insn.addr !739
  %indvars.iv.reg2mem = alloca i64, !insn.addr !739
  %tids_-32 = alloca i64*, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !740
  %1 = inttoptr i64 %0 to i64*, !insn.addr !741
  %2 = load i64, i64* %1, align 8, !insn.addr !741
  %3 = mul i32 %thread_count, 8, !insn.addr !742
  %4 = call i64* @malloc(i32 %3), !insn.addr !743
  %5 = call i64* @malloc(i32 %3), !insn.addr !744
  %6 = icmp eq i64* %4, null, !insn.addr !745
  %7 = icmp eq i64* %5, null, !insn.addr !746
  %or.cond = or i1 %6, %7
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !747
  br i1 %or.cond, label %dec_label_pc_38c8, label %dec_label_pc_3704.preheader, !insn.addr !747

dec_label_pc_3704.preheader:                      ; preds = %dec_label_pc_3644
  %8 = icmp eq i32 %thread_count, 0
  store i32 0, i32* %stack_var_-52.0.lcssa.reg2mem, !insn.addr !748
  store i32 0, i32* %expected_initial_-48.0.lcssa.reg2mem, !insn.addr !748
  br i1 %8, label %dec_label_pc_386c, label %dec_label_pc_36b0.preheader, !insn.addr !748

dec_label_pc_36b0.preheader:                      ; preds = %dec_label_pc_3704.preheader
  %9 = ptrtoint i64* %5 to i64, !insn.addr !744
  %wide.trip.count = zext i32 %thread_count to i64
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_36b0

dec_label_pc_36b0:                                ; preds = %dec_label_pc_36b0.preheader, %dec_label_pc_36b0
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %sext = mul i64 %indvars.iv.reload, 4294967296
  %10 = ashr exact i64 %sext, 29, !insn.addr !749
  %11 = add i64 %10, %9, !insn.addr !750
  %12 = call i64* @malloc(i32 16), !insn.addr !751
  %13 = ptrtoint i64* %12 to i64, !insn.addr !751
  %14 = inttoptr i64 %11 to i64*, !insn.addr !752
  store i64 %13, i64* %14, align 8, !insn.addr !752
  %15 = bitcast i64* %12 to i8*, !insn.addr !753
  %16 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %15, i32 16, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_3e98, i64 0, i64 0), i64 %indvars.iv.reload), !insn.addr !753
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond18 = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !748
  br i1 %exitcond18, label %dec_label_pc_371c.lr.ph, label %dec_label_pc_36b0, !insn.addr !748

dec_label_pc_371c.lr.ph:                          ; preds = %dec_label_pc_36b0
  %17 = ptrtoint i64* %4 to i64, !insn.addr !754
  store i32 0, i32* %storemerge213.reg2mem
  br label %dec_label_pc_371c

dec_label_pc_371c:                                ; preds = %dec_label_pc_371c.lr.ph, %dec_label_pc_37b4
  %storemerge213.reload = load i32, i32* %storemerge213.reg2mem
  %18 = sext i32 %storemerge213.reload to i64, !insn.addr !755
  %19 = mul i64 %18, 8, !insn.addr !756
  %20 = add i64 %19, %17, !insn.addr !757
  %21 = add i64 %19, %9, !insn.addr !758
  %22 = inttoptr i64 %21 to i64*, !insn.addr !759
  %23 = load i64, i64* %22, align 8, !insn.addr !759
  %24 = inttoptr i64 %20 to i32*, !insn.addr !760
  %25 = inttoptr i64 %23 to i64*, !insn.addr !760
  %26 = call i32 @pthread_create(i32* %24, i64* null, i64* (i64*)* inttoptr (i64 13728 to i64* (i64*)*), i64* %25), !insn.addr !760
  %27 = icmp eq i32 %26, 0, !insn.addr !761
  store i32 0, i32* %storemerge18.reg2mem, !insn.addr !762
  br i1 %27, label %dec_label_pc_37b4, label %dec_label_pc_3768, !insn.addr !762

dec_label_pc_3768:                                ; preds = %dec_label_pc_371c, %dec_label_pc_3768
  %storemerge18.reload = load i32, i32* %storemerge18.reg2mem
  %28 = sext i32 %storemerge18.reload to i64, !insn.addr !763
  %29 = mul i64 %28, 8, !insn.addr !764
  %30 = add i64 %29, %9, !insn.addr !765
  %31 = inttoptr i64 %30 to i64*, !insn.addr !766
  %32 = load i64, i64* %31, align 8, !insn.addr !766
  %33 = inttoptr i64 %32 to i64*, !insn.addr !767
  call void @free(i64* %33), !insn.addr !767
  %34 = add nuw i32 %storemerge18.reload, 1, !insn.addr !768
  %exitcond17 = icmp eq i32 %storemerge18.reload, %storemerge213.reload
  store i32 %34, i32* %storemerge18.reg2mem, !insn.addr !769
  br i1 %exitcond17, label %dec_label_pc_379c, label %dec_label_pc_3768, !insn.addr !769

dec_label_pc_379c:                                ; preds = %dec_label_pc_3768
  call void @free(i64* %5), !insn.addr !770
  call void @free(i64* %4), !insn.addr !771
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !772
  br label %dec_label_pc_38c8, !insn.addr !772

dec_label_pc_37b4:                                ; preds = %dec_label_pc_371c
  %35 = add nuw i32 %storemerge213.reload, 1, !insn.addr !773
  %36 = icmp ult i32 %35, %thread_count, !insn.addr !774
  store i32 %35, i32* %storemerge213.reg2mem, !insn.addr !774
  store i32 0, i32* %storemerge11.reg2mem, !insn.addr !774
  store i32 0, i32* %expected_initial_-48.010.reg2mem, !insn.addr !774
  store i32 0, i32* %stack_var_-52.09.reg2mem, !insn.addr !774
  br i1 %36, label %dec_label_pc_371c, label %dec_label_pc_37e0, !insn.addr !774

dec_label_pc_37e0:                                ; preds = %dec_label_pc_37b4, %dec_label_pc_37e0
  %stack_var_-52.09.reload = load i32, i32* %stack_var_-52.09.reg2mem
  %expected_initial_-48.010.reload = load i32, i32* %expected_initial_-48.010.reg2mem
  %storemerge11.reload = load i32, i32* %storemerge11.reg2mem
  %37 = sext i32 %storemerge11.reload to i64, !insn.addr !775
  %38 = mul i64 %37, 8, !insn.addr !776
  %39 = add i64 %38, %17, !insn.addr !777
  %40 = inttoptr i64 %39 to i64*, !insn.addr !778
  %41 = load i64, i64* %40, align 8, !insn.addr !778
  %42 = trunc i64 %41 to i32, !insn.addr !779
  %43 = call i32 @pthread_join(i32 %42, i64** nonnull %tids_-32), !insn.addr !779
  %44 = load i64*, i64** %tids_-32, align 8, !insn.addr !780
  %45 = ptrtoint i64* %44 to i64, !insn.addr !780
  %46 = bitcast i64* %44 to i32*, !insn.addr !781
  %47 = load i32, i32* %46, align 4, !insn.addr !781
  %48 = add i32 %47, %stack_var_-52.09.reload, !insn.addr !782
  %49 = add i64 %45, 4, !insn.addr !783
  %50 = inttoptr i64 %49 to i32*, !insn.addr !784
  %51 = load i32, i32* %50, align 4, !insn.addr !784
  %52 = add i32 %51, %expected_initial_-48.010.reload, !insn.addr !785
  call void @free(i64* %44), !insn.addr !786
  %53 = add i64 %38, %9, !insn.addr !787
  %54 = inttoptr i64 %53 to i64*, !insn.addr !788
  %55 = load i64, i64* %54, align 8, !insn.addr !788
  %56 = inttoptr i64 %55 to i64*, !insn.addr !789
  call void @free(i64* %56), !insn.addr !789
  %57 = add nuw i32 %storemerge11.reload, 1, !insn.addr !790
  %exitcond = icmp eq i32 %57, %thread_count
  store i32 %57, i32* %storemerge11.reg2mem, !insn.addr !791
  store i32 %52, i32* %expected_initial_-48.010.reg2mem, !insn.addr !791
  store i32 %48, i32* %stack_var_-52.09.reg2mem, !insn.addr !791
  store i32 %48, i32* %stack_var_-52.0.lcssa.reg2mem, !insn.addr !791
  store i32 %52, i32* %expected_initial_-48.0.lcssa.reg2mem, !insn.addr !791
  br i1 %exitcond, label %dec_label_pc_386c, label %dec_label_pc_37e0, !insn.addr !791

dec_label_pc_386c:                                ; preds = %dec_label_pc_37e0, %dec_label_pc_3704.preheader
  %expected_initial_-48.0.lcssa.reload = load i32, i32* %expected_initial_-48.0.lcssa.reg2mem
  %stack_var_-52.0.lcssa.reload = load i32, i32* %stack_var_-52.0.lcssa.reg2mem
  call void @free(i64* %5), !insn.addr !792
  call void @free(i64* %4), !insn.addr !793
  %58 = mul i32 %thread_count, 100, !insn.addr !794
  %59 = icmp eq i32 %stack_var_-52.0.lcssa.reload, %58, !insn.addr !795
  %60 = mul i32 %thread_count, 150, !insn.addr !796
  %61 = icmp eq i32 %expected_initial_-48.0.lcssa.reload, %60, !insn.addr !797
  %or.cond6 = icmp eq i1 %59, %61
  %spec.select = select i1 %or.cond6, i32 42, i32 -3
  store i32 %spec.select, i32* %x0.0.reg2mem
  br label %dec_label_pc_38c8

dec_label_pc_38c8:                                ; preds = %dec_label_pc_386c, %dec_label_pc_3644, %dec_label_pc_379c
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  %62 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !798
  %63 = inttoptr i64 %62 to i64*, !insn.addr !799
  %64 = load i64, i64* %63, align 8, !insn.addr !799
  %65 = icmp eq i64 %2, %64, !insn.addr !800
  br i1 %65, label %dec_label_pc_38ec, label %dec_label_pc_38e8, !insn.addr !801

dec_label_pc_38e8:                                ; preds = %dec_label_pc_38c8
  call void @__stack_chk_fail(), !insn.addr !802
  br label %dec_label_pc_38ec, !insn.addr !802

dec_label_pc_38ec:                                ; preds = %dec_label_pc_38e8, %dec_label_pc_38c8
  ret i32 %x0.0.reload, !insn.addr !803

; uselistorder directives
  uselistorder i64 %38, { 1, 0 }
  uselistorder i32 %storemerge18.reload, { 2, 0, 1 }
  uselistorder i64 %19, { 1, 0 }
  uselistorder i32 %storemerge213.reload, { 0, 2, 1 }
  uselistorder i64* %5, { 1, 0, 3, 2 }
  uselistorder i64* %4, { 2, 0, 1, 3 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i64** %tids_-32, { 1, 0 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge213.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge18.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge11.reg2mem, { 2, 0, 1 }
  uselistorder i32* %expected_initial_-48.010.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-52.09.reg2mem, { 2, 0, 1 }
  uselistorder i32* %x0.0.reg2mem, { 0, 1, 3, 2 }
  uselistorder void ()* @__stack_chk_fail, { 14, 13, 12, 11, 15, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 16 }
  uselistorder i32 -3, { 5, 6, 7, 0, 1, 2, 8, 3, 4 }
  uselistorder i32 42, { 2, 3, 12, 4, 0, 8, 13, 5, 6, 9, 7, 10, 1, 11, 14 }
  uselistorder i64 4, { 4, 5, 6, 0, 1, 2, 3 }
  uselistorder i32 (i32, i64**)* @pthread_join, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder i32 -2, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 10 }
  uselistorder void (i64*)* @free, { 11, 10, 13, 12, 8, 7, 9, 6, 5, 4, 3, 2, 1, 0, 14 }
  uselistorder i32 (i32*, i64*, i64* (i64*)*, i64*)* @pthread_create, { 7, 5, 6, 4, 3, 2, 1, 0, 8 }
  uselistorder i64 8, { 0, 1, 2, 3, 4, 5, 6, 7, 10, 8, 9 }
  uselistorder i64 1, { 1, 5, 3, 2, 6, 7, 4, 9, 10, 0, 8 }
  uselistorder i64 4294967296, { 0, 3, 1, 2 }
  uselistorder i32 -1, { 0, 1, 2, 3, 4, 5, 22, 23, 6, 18, 7, 8, 9, 10, 19, 11, 16, 20, 17, 12, 13, 21, 14, 15 }
  uselistorder i64* null, { 2, 0, 1, 5, 6, 4, 3, 7, 8, 9, 10, 12, 11, 13, 14, 15, 16 }
  uselistorder i64* (i32)* @malloc, { 8, 7, 6, 5, 4, 3, 2, 1, 0, 9 }
  uselistorder i32 8, { 0, 3, 1, 2 }
  uselistorder i64* @global_var_14fe8, { 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31 }
  uselistorder i32 %thread_count, { 4, 5, 2, 6, 1, 3, 0 }
  uselistorder label %dec_label_pc_38c8, { 0, 2, 1 }
  uselistorder label %dec_label_pc_37e0, { 1, 0 }
  uselistorder label %dec_label_pc_3768, { 1, 0 }
  uselistorder label %dec_label_pc_371c, { 1, 0 }
  uselistorder label %dec_label_pc_36b0, { 1, 0 }
}

define i32 @call_thread_local_storage() local_unnamed_addr {
dec_label_pc_38fc:
  %0 = call i32 @param_thread_local_storage(i32 4), !insn.addr !804
  ret i32 %0, !insn.addr !805

; uselistorder directives
  uselistorder i32 4, { 1, 2, 3, 4, 5, 6, 0 }
}

define void @test_thread_concurrency() local_unnamed_addr {
dec_label_pc_3914:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3ea8 to i8*)), !insn.addr !806
  %1 = call i32 @call_pthread_create(), !insn.addr !807
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3ec8 to i8*)), !insn.addr !808
  %3 = call i32 @call_pthread_join(), !insn.addr !809
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3ee8 to i8*)), !insn.addr !810
  %5 = call i32 @call_mutex_lock(), !insn.addr !811
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3f08 to i8*)), !insn.addr !812
  %7 = call i32 @call_condition_variable(), !insn.addr !813
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3f28 to i8*)), !insn.addr !814
  %9 = call i32 @call_atomic_ops(), !insn.addr !815
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3f48 to i8*)), !insn.addr !816
  %11 = call i32 @call_thread_local_storage(), !insn.addr !817
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3f68 to i8*)), !insn.addr !818
  ret void, !insn.addr !819

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 26 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
  uselistorder i64 0, { 77, 78, 0, 1, 2, 3, 79, 4, 80, 81, 116, 82, 83, 84, 85, 86, 87, 5, 6, 13, 7, 14, 88, 89, 15, 16, 8, 9, 90, 91, 10, 11, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 122, 12, 123, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 117, 118, 119, 120, 121 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_39ac:
  call void @test_standard_library_functions(), !insn.addr !820
  call void @test_system_calls(), !insn.addr !821
  call void @test_thread_concurrency(), !insn.addr !822
  ret i32 0, !insn.addr !823
}

define i64 @__aarch64_cas4_acq_rel() local_unnamed_addr {
dec_label_pc_39d0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  call void @__asm_hint(i64 34), !insn.addr !824
  %4 = load i8, i8* bitcast (i32* @global_var_150c4 to i8*), align 4, !insn.addr !825
  %5 = icmp eq i8 %4, 0, !insn.addr !826
  br i1 %5, label %dec_label_pc_39e8, label %dec_label_pc_39e0, !insn.addr !826

dec_label_pc_39e0:                                ; preds = %dec_label_pc_39d0
  %6 = trunc i64 %3 to i32, !insn.addr !827
  %7 = trunc i64 %2 to i32, !insn.addr !827
  call void @__asm_casal(i32 %6, i32 %7, i64 %1), !insn.addr !827
  ret i64 %3, !insn.addr !828

dec_label_pc_39e8:                                ; preds = %dec_label_pc_39d0
  %8 = and i64 %3, 4294967295, !insn.addr !829
  %9 = trunc i64 %2 to i32
  %10 = and i64 %1, 4294967295, !insn.addr !830
  %11 = icmp eq i64 %8, %10, !insn.addr !831
  br i1 %11, label %dec_label_pc_39f8, label %dec_label_pc_3a00, !insn.addr !831

dec_label_pc_39f8:                                ; preds = %dec_label_pc_39e8, %dec_label_pc_39f8
  %12 = call i32 @__asm_stlxr(i32 %9, i64 %1), !insn.addr !832
  %13 = icmp eq i32 %12, 0, !insn.addr !833
  br i1 %13, label %dec_label_pc_3a00, label %dec_label_pc_39f8, !insn.addr !833

dec_label_pc_3a00:                                ; preds = %dec_label_pc_39f8, %dec_label_pc_39e8
  ret i64 %10, !insn.addr !834

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
  call void @__asm_hint(i64 34), !insn.addr !835
  %3 = load i8, i8* bitcast (i32* @global_var_150c4 to i8*), align 4, !insn.addr !836
  %4 = icmp eq i8 %3, 0, !insn.addr !837
  br i1 %4, label %dec_label_pc_3a2c.preheader, label %dec_label_pc_3a20, !insn.addr !837

dec_label_pc_3a2c.preheader:                      ; preds = %dec_label_pc_3a10
  %5 = trunc i64 %1 to i32
  %6 = trunc i64 %2 to i32, !insn.addr !838
  %7 = add i32 %6, %5, !insn.addr !838
  br label %dec_label_pc_3a2c

dec_label_pc_3a20:                                ; preds = %dec_label_pc_3a10
  %8 = trunc i64 %2 to i32, !insn.addr !839
  call void @__asm_ldaddal(i32 %8, i32 %8, i64 %1), !insn.addr !839
  ret i64 %2, !insn.addr !840

dec_label_pc_3a2c:                                ; preds = %dec_label_pc_3a2c.preheader, %dec_label_pc_3a2c
  %9 = call i32 @__asm_stlxr(i32 %7, i64 %1), !insn.addr !841
  %10 = icmp eq i32 %9, 0, !insn.addr !842
  br i1 %10, label %dec_label_pc_3a3c, label %dec_label_pc_3a2c, !insn.addr !842

dec_label_pc_3a3c:                                ; preds = %dec_label_pc_3a2c
  %11 = and i64 %1, 4294967295, !insn.addr !843
  ret i64 %11, !insn.addr !844

; uselistorder directives
  uselistorder i64 %2, { 1, 0, 2 }
  uselistorder i64 %1, { 3, 2, 0, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i8 0, { 0, 1, 3, 4, 2 }
  uselistorder i32 0, { 54, 55, 14, 2, 3, 4, 5, 50, 6, 0, 1, 15, 52, 51, 7, 16, 53, 8, 17, 56, 57, 58, 59, 60, 20, 61, 9, 18, 62, 10, 19, 63, 64, 11, 65, 66, 67, 23, 68, 26, 22, 69, 24, 70, 25, 21, 71, 27, 28, 72, 73, 74, 75, 76, 29, 77, 78, 30, 31, 79, 80, 81, 82, 83, 84, 32, 85, 86, 87, 88, 89, 90, 13, 12, 33, 91, 92, 93, 39, 34, 94, 40, 35, 36, 37, 38, 41, 42, 43, 44, 45, 46, 47, 48, 49 }
  uselistorder i8* bitcast (i32* @global_var_150c4 to i8*), { 1, 0 }
  uselistorder label %dec_label_pc_3a2c, { 1, 0 }
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_3a40:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !845

; uselistorder directives
  uselistorder i32 1, { 8, 7, 6, 103, 104, 105, 73, 19, 18, 17, 16, 15, 14, 13, 12, 11, 5, 57, 106, 75, 74, 22, 21, 20, 107, 23, 4, 78, 77, 76, 24, 58, 59, 108, 79, 27, 26, 25, 109, 110, 28, 3, 83, 82, 81, 80, 31, 30, 29, 111, 69, 33, 32, 86, 85, 84, 34, 2, 60, 39, 38, 37, 36, 35, 61, 62, 40, 63, 64, 88, 87, 41, 65, 90, 66, 89, 42, 10, 70, 43, 91, 1, 44, 71, 45, 9, 48, 47, 46, 50, 49, 67, 68, 93, 92, 51, 52, 95, 94, 53, 99, 98, 97, 96, 55, 100, 72, 56, 101, 54, 102, 0 }
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

declare void @__asm_hint(i64) local_unnamed_addr

declare void @__asm_casal(i32, i32, i64) local_unnamed_addr

declare i32 @__asm_stlxr(i32, i64) local_unnamed_addr

declare void @__asm_ldaddal(i32, i32, i64) local_unnamed_addr

declare void @__asm_stlr(i32, i64) local_unnamed_addr

declare i64 @__asm_mrs(i64, i64) local_unnamed_addr

declare i32 @__asm_ubfx(i32, i32, i64, i64) local_unnamed_addr

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
!100 = !{i64 6628}
!101 = !{i64 6656}
!102 = !{i64 6672}
!103 = !{i64 6712}
!104 = !{i64 6740}
!105 = !{i64 6764}
!106 = !{i64 6788}
!107 = !{i64 6804}
!108 = !{i64 6812}
!109 = !{i64 6820}
!110 = !{i64 6840}
!111 = !{i64 6856}
!112 = !{i64 6884}
!113 = !{i64 6892}
!114 = !{i64 6928}
!115 = !{i64 6940}
!116 = !{i64 6956}
!117 = !{i64 6960}
!118 = !{i64 6992}
!119 = !{i64 7004}
!120 = !{i64 7024}
!121 = !{i64 7028}
!122 = !{i64 7056}
!123 = !{i64 7064}
!124 = !{i64 7068}
!125 = !{i64 7076}
!126 = !{i64 7080}
!127 = !{i64 7092}
!128 = !{i64 7128}
!129 = !{i64 7144}
!130 = !{i64 7184}
!131 = !{i64 7200}
!132 = !{i64 7204}
!133 = !{i64 7232}
!134 = !{i64 7260}
!135 = !{i64 7288}
!136 = !{i64 7312}
!137 = !{i64 7316}
!138 = !{i64 7332}
!139 = !{i64 7340}
!140 = !{i64 7360}
!141 = !{i64 7368}
!142 = !{i64 7372}
!143 = !{i64 7380}
!144 = !{i64 7384}
!145 = !{i64 7348}
!146 = !{i64 7396}
!147 = !{i64 7420}
!148 = !{i64 7432}
!149 = !{i64 7448}
!150 = !{i64 7472}
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
!178 = !{i64 7780}
!179 = !{i64 7804}
!180 = !{i64 7808}
!181 = !{i64 7824}
!182 = !{i64 7828}
!183 = !{i64 7864}
!184 = !{i64 7876}
!185 = !{i64 7880}
!186 = !{i64 7896}
!187 = !{i64 7916}
!188 = !{i64 7928}
!189 = !{i64 7940}
!190 = !{i64 7944}
!191 = !{i64 7952}
!192 = !{i64 7960}
!193 = !{i64 7968}
!194 = !{i64 7988}
!195 = !{i64 7992}
!196 = !{i64 7996}
!197 = !{i64 8000}
!198 = !{i64 8004}
!199 = !{i64 8012}
!200 = !{i64 8020}
!201 = !{i64 8024}
!202 = !{i64 8036}
!203 = !{i64 8048}
!204 = !{i64 8052}
!205 = !{i64 8056}
!206 = !{i64 8068}
!207 = !{i64 8080}
!208 = !{i64 8088}
!209 = !{i64 8092}
!210 = !{i64 8100}
!211 = !{i64 8104}
!212 = !{i64 8116}
!213 = !{i64 8136}
!214 = !{i64 8144}
!215 = !{i64 8148}
!216 = !{i64 8168}
!217 = !{i64 8180}
!218 = !{i64 8184}
!219 = !{i64 8276}
!220 = !{i64 8280}
!221 = !{i64 8212}
!222 = !{i64 8224}
!223 = !{i64 8236}
!224 = !{i64 8244}
!225 = !{i64 8252}
!226 = !{i64 8260}
!227 = !{i64 8288}
!228 = !{i64 8296}
!229 = !{i64 8300}
!230 = !{i64 8308}
!231 = !{i64 8312}
!232 = !{i64 8316}
!233 = !{i64 8328}
!234 = !{i64 8336}
!235 = !{i64 8344}
!236 = !{i64 8360}
!237 = !{i64 8368}
!238 = !{i64 8372}
!239 = !{i64 8400}
!240 = !{i64 8476}
!241 = !{i64 8480}
!242 = !{i64 8424}
!243 = !{i64 8432}
!244 = !{i64 8436}
!245 = !{i64 8448}
!246 = !{i64 8460}
!247 = !{i64 8492}
!248 = !{i64 8496}
!249 = !{i64 8508}
!250 = !{i64 8512}
!251 = !{i64 8540}
!252 = !{i64 8536}
!253 = !{i64 8548}
!254 = !{i64 8572}
!255 = !{i64 8584}
!256 = !{i64 8588}
!257 = !{i64 8608}
!258 = !{i64 8616}
!259 = !{i64 8620}
!260 = !{i64 8628}
!261 = !{i64 8632}
!262 = !{i64 8596}
!263 = !{i64 8644}
!264 = !{i64 8680}
!265 = !{i64 8692}
!266 = !{i64 8732}
!267 = !{i64 8744}
!268 = !{i64 8776}
!269 = !{i64 8784}
!270 = !{i64 8792}
!271 = !{i64 8832}
!272 = !{i64 8848}
!273 = !{i64 8868}
!274 = !{i64 8872}
!275 = !{i64 8888}
!276 = !{i64 8892}
!277 = !{i64 8908}
!278 = !{i64 8912}
!279 = !{i64 8928}
!280 = !{i64 8932}
!281 = !{i64 8948}
!282 = !{i64 8952}
!283 = !{i64 8968}
!284 = !{i64 8972}
!285 = !{i64 8988}
!286 = !{i64 8992}
!287 = !{i64 9008}
!288 = !{i64 9012}
!289 = !{i64 9028}
!290 = !{i64 9032}
!291 = !{i64 9048}
!292 = !{i64 9052}
!293 = !{i64 9068}
!294 = !{i64 9072}
!295 = !{i64 9088}
!296 = !{i64 9092}
!297 = !{i64 9108}
!298 = !{i64 9120}
!299 = !{i64 9124}
!300 = !{i64 9152}
!301 = !{i64 9164}
!302 = !{i64 9168}
!303 = !{i64 9172}
!304 = !{i64 9176}
!305 = !{i64 9180}
!306 = !{i64 9184}
!307 = !{i64 9196}
!308 = !{i64 9200}
!309 = !{i64 9208}
!310 = !{i64 9228}
!311 = !{i64 9240}
!312 = !{i64 9264}
!313 = !{i64 9284}
!314 = !{i64 9288}
!315 = !{i64 9312}
!316 = !{i64 9364}
!317 = !{i64 9372}
!318 = !{i64 9376}
!319 = !{i64 9384}
!320 = !{i64 9388}
!321 = !{i64 9316}
!322 = !{i64 9400}
!323 = !{i64 9420}
!324 = !{i64 9428}
!325 = !{i64 9432}
!326 = !{i64 9452}
!327 = !{i64 9456}
!328 = !{i64 9468}
!329 = !{i64 9480}
!330 = !{i64 9484}
!331 = !{i64 9500}
!332 = !{i64 9504}
!333 = !{i64 9524}
!334 = !{i64 9532}
!335 = !{i64 9552}
!336 = !{i64 9564}
!337 = !{i64 9568}
!338 = !{i64 9580}
!339 = !{i64 9584}
!340 = !{i64 9588}
!341 = !{i64 9592}
!342 = !{i64 9604}
!343 = !{i64 9608}
!344 = !{i64 9624}
!345 = !{i64 9632}
!346 = !{i64 9636}
!347 = !{i64 9644}
!348 = !{i64 9648}
!349 = !{i64 9660}
!350 = !{i64 9684}
!351 = !{i64 9696}
!352 = !{i64 9720}
!353 = !{i64 9724}
!354 = !{i64 9740}
!355 = !{i64 9744}
!356 = !{i64 9756}
!357 = !{i64 9760}
!358 = !{i64 9764}
!359 = !{i64 9768}
!360 = !{i64 9780}
!361 = !{i64 9792}
!362 = !{i64 9796}
!363 = !{i64 9812}
!364 = !{i64 9816}
!365 = !{i64 9820}
!366 = !{i64 9824}
!367 = !{i64 9836}
!368 = !{i64 9848}
!369 = !{i64 9864}
!370 = !{i64 9872}
!371 = !{i64 9880}
!372 = !{i64 9888}
!373 = !{i64 9892}
!374 = !{i64 9904}
!375 = !{i64 9916}
!376 = !{i64 9920}
!377 = !{i64 9924}
!378 = !{i64 9928}
!379 = !{i64 9936}
!380 = !{i64 9948}
!381 = !{i64 9960}
!382 = !{i64 9972}
!383 = !{i64 9980}
!384 = !{i64 9984}
!385 = !{i64 9992}
!386 = !{i64 9996}
!387 = !{i64 10012}
!388 = !{i64 10024}
!389 = !{i64 10032}
!390 = !{i64 10036}
!391 = !{i64 10048}
!392 = !{i64 10052}
!393 = !{i64 10076}
!394 = !{i64 10088}
!395 = !{i64 10092}
!396 = !{i64 10108}
!397 = !{i64 10136}
!398 = !{i64 10140}
!399 = !{i64 10144}
!400 = !{i64 10152}
!401 = !{i64 10160}
!402 = !{i64 10176}
!403 = !{i64 10184}
!404 = !{i64 10192}
!405 = !{i64 10224}
!406 = !{i64 10228}
!407 = !{i64 10232}
!408 = !{i64 10240}
!409 = !{i64 10248}
!410 = !{i64 10260}
!411 = !{i64 10264}
!412 = !{i64 10284}
!413 = !{i64 10308}
!414 = !{i64 10316}
!415 = !{i64 10320}
!416 = !{i64 10328}
!417 = !{i64 10332}
!418 = !{i64 10344}
!419 = !{i64 10356}
!420 = !{i64 10364}
!421 = !{i64 10368}
!422 = !{i64 10400}
!423 = !{i64 10412}
!424 = !{i64 10416}
!425 = !{i64 10432}
!426 = !{i64 10448}
!427 = !{i64 10460}
!428 = !{i64 10464}
!429 = !{i64 10488}
!430 = !{i64 10500}
!431 = !{i64 10504}
!432 = !{i64 10528}
!433 = !{i64 10540}
!434 = !{i64 10544}
!435 = !{i64 10556}
!436 = !{i64 10576}
!437 = !{i64 10584}
!438 = !{i64 10592}
!439 = !{i64 10604}
!440 = !{i64 10620}
!441 = !{i64 10624}
!442 = !{i64 10632}
!443 = !{i64 10644}
!444 = !{i64 10660}
!445 = !{i64 10680}
!446 = !{i64 10704}
!447 = !{i64 10720}
!448 = !{i64 10732}
!449 = !{i64 10736}
!450 = !{i64 10756}
!451 = !{i64 10760}
!452 = !{i64 10764}
!453 = !{i64 10788}
!454 = !{i64 10792}
!455 = !{i64 10796}
!456 = !{i64 10816}
!457 = !{i64 10824}
!458 = !{i64 10856}
!459 = !{i64 10860}
!460 = !{i64 10864}
!461 = !{i64 10872}
!462 = !{i64 10844}
!463 = !{i64 10884}
!464 = !{i64 10904}
!465 = !{i64 10924}
!466 = !{i64 10928}
!467 = !{i64 10932}
!468 = !{i64 10952}
!469 = !{i64 10960}
!470 = !{i64 10992}
!471 = !{i64 10996}
!472 = !{i64 11000}
!473 = !{i64 11008}
!474 = !{i64 10980}
!475 = !{i64 11020}
!476 = !{i64 11036}
!477 = !{i64 11052}
!478 = !{i64 11056}
!479 = !{i64 11040}
!480 = !{i64 11080}
!481 = !{i64 11092}
!482 = !{i64 11096}
!483 = !{i64 11104}
!484 = !{i64 11116}
!485 = !{i64 11124}
!486 = !{i64 11144}
!487 = !{i64 11148}
!488 = !{i64 11164}
!489 = !{i64 11168}
!490 = !{i64 11184}
!491 = !{i64 11188}
!492 = !{i64 11204}
!493 = !{i64 11208}
!494 = !{i64 11224}
!495 = !{i64 11228}
!496 = !{i64 11244}
!497 = !{i64 11248}
!498 = !{i64 11264}
!499 = !{i64 11268}
!500 = !{i64 11284}
!501 = !{i64 11296}
!502 = !{i64 11336}
!503 = !{i64 11348}
!504 = !{i64 11364}
!505 = !{i64 11376}
!506 = !{i64 11380}
!507 = !{i64 11396}
!508 = !{i64 11400}
!509 = !{i64 11416}
!510 = !{i64 11448}
!511 = !{i64 11460}
!512 = !{i64 11464}
!513 = !{i64 11476}
!514 = !{i64 11484}
!515 = !{i64 11492}
!516 = !{i64 11504}
!517 = !{i64 11508}
!518 = !{i64 11520}
!519 = !{i64 11528}
!520 = !{i64 11532}
!521 = !{i64 11540}
!522 = !{i64 11544}
!523 = !{i64 11556}
!524 = !{i64 11572}
!525 = !{i64 11580}
!526 = !{i64 11584}
!527 = !{i64 11600}
!528 = !{i64 11604}
!529 = !{i64 11612}
!530 = !{i64 11664}
!531 = !{i64 11676}
!532 = !{i64 11628}
!533 = !{i64 11636}
!534 = !{i64 11644}
!535 = !{i64 11652}
!536 = !{i64 11688}
!537 = !{i64 11692}
!538 = !{i64 11704}
!539 = !{i64 11708}
!540 = !{i64 11736}
!541 = !{i64 11772}
!542 = !{i64 11764}
!543 = !{i64 11768}
!544 = !{i64 11792}
!545 = !{i64 11796}
!546 = !{i64 11820}
!547 = !{i64 11824}
!548 = !{i64 11828}
!549 = !{i64 11860}
!550 = !{i64 11864}
!551 = !{i64 11880}
!552 = !{i64 11888}
!553 = !{i64 11896}
!554 = !{i64 11900}
!555 = !{i64 11904}
!556 = !{i64 11932}
!557 = !{i64 11940}
!558 = !{i64 11944}
!559 = !{i64 11948}
!560 = !{i64 11952}
!561 = !{i64 11976}
!562 = !{i64 11980}
!563 = !{i64 11992}
!564 = !{i64 12000}
!565 = !{i64 12004}
!566 = !{i64 12012}
!567 = !{i64 12016}
!568 = !{i64 12028}
!569 = !{i64 12040}
!570 = !{i64 12048}
!571 = !{i64 12052}
!572 = !{i64 12168}
!573 = !{i64 12092}
!574 = !{i64 12104}
!575 = !{i64 12108}
!576 = !{i64 12120}
!577 = !{i64 12132}
!578 = !{i64 12140}
!579 = !{i64 12148}
!580 = !{i64 12180}
!581 = !{i64 12184}
!582 = !{i64 12196}
!583 = !{i64 12204}
!584 = !{i64 12208}
!585 = !{i64 12220}
!586 = !{i64 12224}
!587 = !{i64 12244}
!588 = !{i64 12348}
!589 = !{i64 12296}
!590 = !{i64 12256}
!591 = !{i64 12260}
!592 = !{i64 12268}
!593 = !{i64 12300}
!594 = !{i64 12304}
!595 = !{i64 12312}
!596 = !{i64 12320}
!597 = !{i64 12328}
!598 = !{i64 12404}
!599 = !{i64 12364}
!600 = !{i64 12372}
!601 = !{i64 12376}
!602 = !{i64 12384}
!603 = !{i64 12392}
!604 = !{i64 12412}
!605 = !{i64 12420}
!606 = !{i64 12424}
!607 = !{i64 12432}
!608 = !{i64 12448}
!609 = !{i64 12460}
!610 = !{i64 12468}
!611 = !{i64 12480}
!612 = !{i64 12500}
!613 = !{i64 12508}
!614 = !{i64 12532}
!615 = !{i64 12568}
!616 = !{i64 12572}
!617 = !{i64 12576}
!618 = !{i64 12556}
!619 = !{i64 12588}
!620 = !{i64 12604}
!621 = !{i64 12612}
!622 = !{i64 12628}
!623 = !{i64 12640}
!624 = !{i64 12660}
!625 = !{i64 12672}
!626 = !{i64 12688}
!627 = !{i64 12704}
!628 = !{i64 12716}
!629 = !{i64 12728}
!630 = !{i64 12740}
!631 = !{i64 12744}
!632 = !{i64 12756}
!633 = !{i64 12760}
!634 = !{i64 12780}
!635 = !{i64 12792}
!636 = !{i64 12820}
!637 = !{i64 12824}
!638 = !{i64 12828}
!639 = !{i64 12864}
!640 = !{i64 12868}
!641 = !{i64 12872}
!642 = !{i64 12880}
!643 = !{i64 12888}
!644 = !{i64 12900}
!645 = !{i64 12904}
!646 = !{i64 12912}
!647 = !{i64 12920}
!648 = !{i64 12932}
!649 = !{i64 12936}
!650 = !{i64 12948}
!651 = !{i64 12956}
!652 = !{i64 12960}
!653 = !{i64 12968}
!654 = !{i64 12972}
!655 = !{i64 12984}
!656 = !{i64 12996}
!657 = !{i64 13004}
!658 = !{i64 13008}
!659 = !{i64 13028}
!660 = !{i64 13032}
!661 = !{i64 13184}
!662 = !{i64 13080}
!663 = !{i64 13132}
!664 = !{i64 13164}
!665 = !{i64 13212}
!666 = !{i64 13220}
!667 = !{i64 13224}
!668 = !{i64 13240}
!669 = !{i64 13260}
!670 = !{i64 13272}
!671 = !{i64 13288}
!672 = !{i64 13300}
!673 = !{i64 13304}
!674 = !{i64 13316}
!675 = !{i64 13324}
!676 = !{i64 13328}
!677 = !{i64 13344}
!678 = !{i64 13348}
!679 = !{i64 13360}
!680 = !{i64 13364}
!681 = !{i64 13384}
!682 = !{i64 13488}
!683 = !{i64 13436}
!684 = !{i64 13396}
!685 = !{i64 13400}
!686 = !{i64 13408}
!687 = !{i64 13440}
!688 = !{i64 13444}
!689 = !{i64 13452}
!690 = !{i64 13460}
!691 = !{i64 13468}
!692 = !{i64 13516}
!693 = !{i64 13520}
!694 = !{i64 13524}
!695 = !{i64 13528}
!696 = !{i64 13536}
!697 = !{i64 13592}
!698 = !{i64 13600}
!699 = !{i64 13552}
!700 = !{i64 13560}
!701 = !{i64 13564}
!702 = !{i64 13572}
!703 = !{i64 13580}
!704 = !{i64 13584}
!705 = !{i64 13588}
!706 = !{i64 13612}
!707 = !{i64 13624}
!708 = !{i64 13636}
!709 = !{i64 13648}
!710 = !{i64 13660}
!711 = !{i64 13668}
!712 = !{i64 13672}
!713 = !{i64 13680}
!714 = !{i64 13684}
!715 = !{i64 13696}
!716 = !{i64 13716}
!717 = !{i64 13724}
!718 = !{i64 13748}
!719 = !{i64 13756}
!720 = !{i64 13760}
!721 = !{i64 13768}
!722 = !{i64 13776}
!723 = !{i64 13780}
!724 = !{i64 13784}
!725 = !{i64 13788}
!726 = !{i64 13796}
!727 = !{i64 13800}
!728 = !{i64 13804}
!729 = !{i64 13812}
!730 = !{i64 13824}
!731 = !{i64 13832}
!732 = !{i64 13848}
!733 = !{i64 13856}
!734 = !{i64 13860}
!735 = !{i64 13868}
!736 = !{i64 13872}
!737 = !{i64 13876}
!738 = !{i64 13888}
!739 = !{i64 13892}
!740 = !{i64 13912}
!741 = !{i64 13916}
!742 = !{i64 13932}
!743 = !{i64 13936}
!744 = !{i64 13952}
!745 = !{i64 13964}
!746 = !{i64 13976}
!747 = !{i64 13968}
!748 = !{i64 14096}
!749 = !{i64 14004}
!750 = !{i64 14012}
!751 = !{i64 14020}
!752 = !{i64 14024}
!753 = !{i64 14068}
!754 = !{i64 14116}
!755 = !{i64 14108}
!756 = !{i64 14112}
!757 = !{i64 14120}
!758 = !{i64 14136}
!759 = !{i64 14140}
!760 = !{i64 14164}
!761 = !{i64 14168}
!762 = !{i64 14172}
!763 = !{i64 14184}
!764 = !{i64 14188}
!765 = !{i64 14196}
!766 = !{i64 14200}
!767 = !{i64 14204}
!768 = !{i64 14212}
!769 = !{i64 14232}
!770 = !{i64 14240}
!771 = !{i64 14248}
!772 = !{i64 14256}
!773 = !{i64 14264}
!774 = !{i64 14284}
!775 = !{i64 14304}
!776 = !{i64 14308}
!777 = !{i64 14316}
!778 = !{i64 14320}
!779 = !{i64 14328}
!780 = !{i64 14332}
!781 = !{i64 14344}
!782 = !{i64 14352}
!783 = !{i64 14364}
!784 = !{i64 14368}
!785 = !{i64 14376}
!786 = !{i64 14388}
!787 = !{i64 14404}
!788 = !{i64 14408}
!789 = !{i64 14412}
!790 = !{i64 14420}
!791 = !{i64 14440}
!792 = !{i64 14448}
!793 = !{i64 14456}
!794 = !{i64 14468}
!795 = !{i64 14504}
!796 = !{i64 14484}
!797 = !{i64 14520}
!798 = !{i64 14544}
!799 = !{i64 14552}
!800 = !{i64 14556}
!801 = !{i64 14564}
!802 = !{i64 14568}
!803 = !{i64 14584}
!804 = !{i64 14600}
!805 = !{i64 14608}
!806 = !{i64 14628}
!807 = !{i64 14632}
!808 = !{i64 14648}
!809 = !{i64 14652}
!810 = !{i64 14668}
!811 = !{i64 14672}
!812 = !{i64 14688}
!813 = !{i64 14692}
!814 = !{i64 14708}
!815 = !{i64 14712}
!816 = !{i64 14728}
!817 = !{i64 14732}
!818 = !{i64 14748}
!819 = !{i64 14760}
!820 = !{i64 14772}
!821 = !{i64 14776}
!822 = !{i64 14780}
!823 = !{i64 14792}
!824 = !{i64 14800}
!825 = !{i64 14808}
!826 = !{i64 14812}
!827 = !{i64 14816}
!828 = !{i64 14820}
!829 = !{i64 14824}
!830 = !{i64 14828}
!831 = !{i64 14836}
!832 = !{i64 14840}
!833 = !{i64 14844}
!834 = !{i64 14848}
!835 = !{i64 14864}
!836 = !{i64 14872}
!837 = !{i64 14876}
!838 = !{i64 14896}
!839 = !{i64 14880}
!840 = !{i64 14884}
!841 = !{i64 14900}
!842 = !{i64 14904}
!843 = !{i64 14892}
!844 = !{i64 14908}
!845 = !{i64 14928}
