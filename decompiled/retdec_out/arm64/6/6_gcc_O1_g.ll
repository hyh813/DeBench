source_filename = "test"
target datalayout = "e-m:e-i64:64-i128:128-n32:64-S128"

%sockaddr = type { i64, [14 x i8] }
%_IO_FILE = type { i32 }
%stat = type { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }
%shmid_ds = type { %ipc_perm, i32, i64, i64, i64, i32, i32, i16, i16, i64*, i64* }
%ipc_perm = type { i32, i32, i32, i32, i32, i32, i16 }

@global_var_14dd8 = local_unnamed_addr global i64 5024
@global_var_14de0 = local_unnamed_addr global i64 5024
@global_var_14de8 = local_unnamed_addr global i64 5024
@global_var_14df0 = local_unnamed_addr global i64 5024
@global_var_14df8 = local_unnamed_addr global i64 5024
@global_var_14e00 = local_unnamed_addr global i64 5024
@global_var_14e08 = local_unnamed_addr global i64 5024
@global_var_14e10 = local_unnamed_addr global i64 5024
@global_var_14e18 = local_unnamed_addr global i64 5024
@global_var_14e20 = local_unnamed_addr global i64 5024
@global_var_14e28 = local_unnamed_addr global i64 5024
@global_var_14e30 = local_unnamed_addr global i64 5024
@global_var_14e38 = local_unnamed_addr global i64 5024
@global_var_14e40 = local_unnamed_addr global i64 5024
@global_var_14e48 = local_unnamed_addr global i64 5024
@global_var_14e50 = local_unnamed_addr global i64 5024
@global_var_14e58 = local_unnamed_addr global i64 5024
@global_var_14e60 = local_unnamed_addr global i64 5024
@global_var_14e68 = local_unnamed_addr global i64 5024
@global_var_14e70 = local_unnamed_addr global i64 5024
@global_var_14e78 = local_unnamed_addr global i64 5024
@global_var_14e80 = local_unnamed_addr global i64 5024
@global_var_14e88 = local_unnamed_addr global i64 5024
@global_var_14e90 = local_unnamed_addr global i64 5024
@global_var_14e98 = local_unnamed_addr global i64 5024
@global_var_14ea0 = local_unnamed_addr global i64 5024
@global_var_14ea8 = local_unnamed_addr global i64 5024
@global_var_14eb0 = local_unnamed_addr global i64 5024
@global_var_14eb8 = local_unnamed_addr global i64 5024
@global_var_14ec0 = local_unnamed_addr global i64 5024
@global_var_14ec8 = local_unnamed_addr global i64 5024
@global_var_14ed0 = local_unnamed_addr global i64 5024
@global_var_14ed8 = local_unnamed_addr global i64 5024
@global_var_14ee0 = local_unnamed_addr global i64 5024
@global_var_14ee8 = local_unnamed_addr global i64 5024
@global_var_14ef0 = local_unnamed_addr global i64 5024
@global_var_14ef8 = local_unnamed_addr global i64 5024
@global_var_14f00 = local_unnamed_addr global i64 5024
@global_var_14f08 = local_unnamed_addr global i64 5024
@global_var_14f10 = local_unnamed_addr global i64 5024
@global_var_14f18 = local_unnamed_addr global i64 5024
@global_var_14f20 = local_unnamed_addr global i64 5024
@global_var_14f28 = local_unnamed_addr global i64 5024
@global_var_14f30 = local_unnamed_addr global i64 5024
@global_var_14f38 = local_unnamed_addr global i64 5024
@global_var_14f40 = local_unnamed_addr global i64 5024
@global_var_14f48 = local_unnamed_addr global i64 5024
@global_var_14f50 = local_unnamed_addr global i64 5024
@global_var_14f58 = local_unnamed_addr global i64 5024
@global_var_14f60 = local_unnamed_addr global i64 5024
@global_var_14f68 = local_unnamed_addr global i64 5024
@global_var_14f70 = local_unnamed_addr global i64 5024
@global_var_14f78 = local_unnamed_addr global i64 5024
@global_var_14f80 = local_unnamed_addr global i64 5024
@global_var_14f88 = local_unnamed_addr global i64 5024
@global_var_14f90 = local_unnamed_addr global i64 5024
@global_var_14f98 = local_unnamed_addr global i64 5024
@global_var_14fa0 = local_unnamed_addr global i64 5024
@global_var_14fa8 = local_unnamed_addr global i64 5024
@global_var_14fb0 = local_unnamed_addr global i64 5024
@global_var_14fb8 = local_unnamed_addr global i64 5024
@global_var_14fc0 = local_unnamed_addr global i64 5024
@global_var_15000 = global i64 0
@global_var_14ff0 = local_unnamed_addr global i64 13120
@global_var_15010 = global i64 0
@global_var_14fd0 = local_unnamed_addr global i64 0
@global_var_14ff8 = local_unnamed_addr global i64 0
@global_var_18f4 = local_unnamed_addr constant i64 4107355841630306336
@signal_received = local_unnamed_addr global i32 0
@signal_number = local_unnamed_addr global i32 0
@counter_mutex = global i32 0
@shared_counter = local_unnamed_addr global i32 0
@cond_mutex = global i32 0
@ready = local_unnamed_addr global i32 0
@cond = global i32 0
@data = local_unnamed_addr global i32 0
@atomic_counter = local_unnamed_addr global i32 0
@global_var_14fe8 = local_unnamed_addr global i64 0
@global_var_33f0 = constant [9 x i8] c"HelloLib\00"
@global_var_3400 = constant [4 x i8] c"def\00"
@global_var_3408 = constant [4 x i8] c"abc\00"
@global_var_3410 = constant [4 x i8] c"xyz\00"
@global_var_3418 = constant [4 x i8] c"aaa\00"
@global_var_3420 = constant [4 x i8] c"bbb\00"
@global_var_38a8 = local_unnamed_addr constant i64 85899345930
@global_var_38b0 = local_unnamed_addr constant i64 171798691870
@global_var_38b8 = local_unnamed_addr constant i64 50
@global_var_38c0 = local_unnamed_addr constant i64 8589934593
@global_var_38c8 = local_unnamed_addr constant i64 3
@global_var_38d0 = local_unnamed_addr constant i64 8589934593
@global_var_38d8 = local_unnamed_addr constant i64 4
@global_var_3428 = constant [21 x i8] c"Value: %d, Name: %s\0A\00"
@global_var_3440 = constant [5 x i8] c"Test\00"
@global_var_3448 = constant [6 x i8] c"%d,%d\00"
@global_var_3450 = constant [8 x i8] c"123,456\00"
@global_var_3460 = constant [12 x i8] c"/etc/passwd\00"
@global_var_3478 = constant [19 x i8] c"BinBench Test Data\00"
@global_var_2090 = local_unnamed_addr constant i64 -6250622504361000928
@global_var_3490 = constant [23 x i8] c"/tmp/binbench_test.tmp\00"
@global_var_34a8 = constant [6 x i8] c"Bench\00"
@global_var_34b0 = constant [20 x i8] c"Hello BinBench Test\00"
@global_var_3670 = constant [10 x i8] c"/bin/true\00"
@global_var_3680 = constant [10 x i8] c"HelloPipe\00"
@global_var_2778 = local_unnamed_addr constant i64 -486375621140676576
@global_var_278c = local_unnamed_addr constant i64 -486375621140676544
@global_var_27a0 = local_unnamed_addr constant i64 -486375621140676512
@global_var_3690 = constant [18 x i8] c"/tmp/binbench_shm\00"
@global_var_36a8 = local_unnamed_addr constant [13 x i8] c"SharedMemory\00"
@global_var_36ad = local_unnamed_addr constant [8 x i8] c"dMemory\00"
@global_var_38f0 = local_unnamed_addr constant i64 20
@global_var_2dc0 = local_unnamed_addr constant i64 -6250622504361000928
@global_var_2eb4 = local_unnamed_addr constant i64 1729382197091106867
@global_var_2f0c = local_unnamed_addr constant [3 x i8] c"@\08\00"
@global_var_3004 = local_unnamed_addr constant i64 -6250622504361000928
@global_var_37b8 = constant [10 x i8] c"Thread-%d\00"
@global_var_31a4 = local_unnamed_addr constant [3 x i8] c"s\22\00"
@global_var_324c = local_unnamed_addr constant i64 -6250332224701333472
@0 = external global i32
@global_var_150c8 = local_unnamed_addr global i32 0
@global_var_3e8 = global i32 0
@1 = internal constant [2 x i8] c"r\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i64 0, i64 0)
@3 = internal constant [3 x i8] c"w+\00"
@4 = constant i8* getelementptr inbounds ([3 x i8], [3 x i8]* @3, i64 0, i64 0)
@5 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\87\E5\87\86\E5\BA\93\E5\87\BD\E6\95\B0\E8\B0\83\E7\94\A8 ===\00"
@global_var_34c8 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @5, i64 0, i64 0)
@6 = internal constant [27 x i8] c"LIB-L1-01: %d (\E6\9C\9F\E6\9C\9B: 8)\0A\00"
@global_var_34f0 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @6, i64 0, i64 0)
@7 = internal constant [27 x i8] c"LIB-L1-02: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_3510 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @7, i64 0, i64 0)
@8 = internal constant [28 x i8] c"LIB-L1-03: %d (\E6\9C\9F\E6\9C\9B: 12)\0A\00"
@global_var_3530 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i64 0, i64 0)
@9 = internal constant [28 x i8] c"LIB-L1-04: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_3550 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"LIB-L1-05: %d (\E6\9C\9F\E6\9C\9B: -1)\0A\00"
@global_var_3570 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"LIB-L1-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_3590 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [29 x i8] c"LIB-L1-07: %d (\E6\9C\9F\E6\9C\9B: 579)\0A\00"
@global_var_35b0 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i64 0, i64 0)
@13 = internal constant [28 x i8] c"LIB-L1-08: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_35d0 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @13, i64 0, i64 0)
@14 = internal constant [28 x i8] c"LIB-L1-09: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_35f0 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @14, i64 0, i64 0)
@15 = internal constant [28 x i8] c"LIB-L1-10: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_3610 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @15, i64 0, i64 0)
@16 = internal constant [27 x i8] c"LIB-L1-11: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_3630 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @16, i64 0, i64 0)
@17 = internal constant [28 x i8] c"LIB-L1-12: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_3650 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i64 0, i64 0)
@global_var_3b6 = global i32 0
@global_var_1000 = global i64* (i64*)* inttoptr (i64 120259085314 to i64* (i64*)*)
@global_var_7d0 = global i32 198
@18 = internal constant [27 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\B3\BB\E7\BB\9F\E8\B0\83\E7\94\A8 ===\00"
@global_var_36b8 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @18, i64 0, i64 0)
@19 = internal constant [28 x i8] c"SYS-L3-01: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_36d8 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @19, i64 0, i64 0)
@20 = internal constant [28 x i8] c"SYS-L3-02: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_36f8 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @20, i64 0, i64 0)
@21 = internal constant [28 x i8] c"SYS-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3718 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @21, i64 0, i64 0)
@22 = internal constant [28 x i8] c"SYS-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3738 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @22, i64 0, i64 0)
@23 = internal constant [28 x i8] c"SYS-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3758 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @23, i64 0, i64 0)
@24 = internal constant [28 x i8] c"SYS-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3778 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @24, i64 0, i64 0)
@25 = internal constant [28 x i8] c"SYS-L3-07: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3798 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @25, i64 0, i64 0)
@global_var_38e0 = local_unnamed_addr constant fp128 0xL00000000000000003BED0000000A0000
@26 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\BA\BF\E7\A8\8B\E4\B8\8E\E5\B9\B6\E5\8F\91 ===\00"
@global_var_37c8 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @26, i64 0, i64 0)
@27 = internal constant [28 x i8] c"THR-L3-01: %d (\E6\9C\9F\E6\9C\9B: 49)\0A\00"
@global_var_37e8 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @27, i64 0, i64 0)
@28 = internal constant [29 x i8] c"THR-L3-02: %d (\E6\9C\9F\E6\9C\9B: 465)\0A\00"
@global_var_3808 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @28, i64 0, i64 0)
@29 = internal constant [28 x i8] c"THR-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3828 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @29, i64 0, i64 0)
@30 = internal constant [28 x i8] c"THR-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3848 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @30, i64 0, i64 0)
@31 = internal constant [28 x i8] c"THR-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3868 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @31, i64 0, i64 0)
@32 = internal constant [28 x i8] c"THR-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3888 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @32, i64 0, i64 0)
@global_var_3458 = constant [2 x i8] c"r\00"
@global_var_3470 = constant [3 x i8] c"w+\00"

define i64 @_init(i64 %arg1) local_unnamed_addr {
dec_label_pc_1388:
  %0 = call i64 @call_weak_fn(), !insn.addr !0
  ret i64 %0, !insn.addr !1
}

define i64* @function_13c0(i64* %dest, i64* %src, i32 %n) local_unnamed_addr {
dec_label_pc_13c0:
  %0 = call i64* @memcpy(i64* %dest, i64* %src, i32 %n), !insn.addr !2
  ret i64* %0, !insn.addr !2
}

define void @function_13d0(i32 %status) local_unnamed_addr {
dec_label_pc_13d0:
  call void @_exit(i32 %status), !insn.addr !3
  ret void, !insn.addr !3
}

define i32 @function_13e0(i8* %s) local_unnamed_addr {
dec_label_pc_13e0:
  %0 = call i32 @strlen(i8* %s), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i32 @function_13f0(i32 %sig) local_unnamed_addr {
dec_label_pc_13f0:
  %0 = call i32 @raise(i32 %sig), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define i32 @function_1400(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_1400:
  %0 = call i32 @__libc_start_main(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i32 @function_1410(i8* %path, i8* %arg, ...) local_unnamed_addr {
dec_label_pc_1410:
  %0 = call i32 (i8*, i8*, ...) @execl(i8* %path, i8* %arg), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @function_1420(i32 %fd, i32 %n) local_unnamed_addr {
dec_label_pc_1420:
  %0 = call i32 @listen(i32 %fd, i32 %n), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i32 @function_1430(i64* %shmaddr) local_unnamed_addr {
dec_label_pc_1430:
  %0 = call i32 @shmdt(i64* %shmaddr), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @function_1440(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_1440:
  %0 = call i32 @bind(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define void @function_1450(i64* %d) local_unnamed_addr {
dec_label_pc_1450:
  call void @__cxa_finalize(i64* %d), !insn.addr !11
  ret void, !insn.addr !11
}

define i32 @function_1460([2 x i32] %pipedes) local_unnamed_addr {
dec_label_pc_1460:
  %0 = call i32 @pipe([2 x i32] %pipedes), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define i32 @function_1470() local_unnamed_addr {
dec_label_pc_1470:
  %0 = call i32 @fork(), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define i32 @function_1480(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_1480:
  %0 = call i32 @fileno(%_IO_FILE* %stream), !insn.addr !14
  ret i32 %0, !insn.addr !14
}

define void (i32)* @function_1490(i32 %sig, void (i32)* %handler) local_unnamed_addr {
dec_label_pc_1490:
  %0 = call void (i32)* @signal(i32 %sig, void (i32)* %handler), !insn.addr !15
  ret void (i32)* %0, !insn.addr !15
}

define i32 @function_14a0(i8* %s, i32 %n, i32 %flag, i32 %slen, i8* %format, ...) local_unnamed_addr {
dec_label_pc_14a0:
  %0 = call i32 (i8*, i32, i32, i32, i8*, ...) @__snprintf_chk(i8* %s, i32 %n, i32 %flag, i32 %slen, i8* %format), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i32 @function_14b0(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_14b0:
  %0 = call i32 @fclose(%_IO_FILE* %stream), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define %_IO_FILE* @function_14c0(i8* %filename, i8* %modes) local_unnamed_addr {
dec_label_pc_14c0:
  %0 = call %_IO_FILE* @fopen(i8* %filename, i8* %modes), !insn.addr !18
  ret %_IO_FILE* %0, !insn.addr !18
}

define i64* @function_14d0(i32 %size) local_unnamed_addr {
dec_label_pc_14d0:
  %0 = call i64* @malloc(i32 %size), !insn.addr !19
  ret i64* %0, !insn.addr !19
}

define i32 @function_14e0(i32 %fd, i32 %level, i32 %optname, i64* %optval, i32 %optlen) local_unnamed_addr {
dec_label_pc_14e0:
  %0 = call i32 @setsockopt(i32 %fd, i32 %level, i32 %optname, i64* %optval, i32 %optlen), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i32 @function_14f0(i8* %file, i32 %oflag, ...) local_unnamed_addr {
dec_label_pc_14f0:
  %0 = call i32 (i8*, i32, ...) @open(i8* %file, i32 %oflag), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define i32 @function_1500(i64* %cond) local_unnamed_addr {
dec_label_pc_1500:
  %0 = call i32 @pthread_cond_signal(i64* %cond), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define i32 @function_1510(i32 %flag, i8* %format, ...) local_unnamed_addr {
dec_label_pc_1510:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 %flag, i8* %format), !insn.addr !23
  ret i32 %0, !insn.addr !23
}

define i64* @function_1520(i64* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_1520:
  %0 = call i64* @memset(i64* %s, i32 %c, i32 %n), !insn.addr !24
  ret i64* %0, !insn.addr !24
}

define i64* @function_1530(i32 %shmid, i64* %shmaddr, i32 %shmflg) local_unnamed_addr {
dec_label_pc_1530:
  %0 = call i64* @shmat(i32 %shmid, i64* %shmaddr, i32 %shmflg), !insn.addr !25
  ret i64* %0, !insn.addr !25
}

define i32 @function_1540(i32 %seconds) local_unnamed_addr {
dec_label_pc_1540:
  %0 = call i32 @sleep(i32 %seconds), !insn.addr !26
  ret i32 %0, !insn.addr !26
}

define void @function_1550(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_1550:
  call void @rewind(%_IO_FILE* %stream), !insn.addr !27
  ret void, !insn.addr !27
}

define void @function_1560() local_unnamed_addr {
dec_label_pc_1560:
  call void @__stack_chk_fail(), !insn.addr !28
  ret void, !insn.addr !28
}

define i32 @function_1570(i32 %fd) local_unnamed_addr {
dec_label_pc_1570:
  %0 = call i32 @close(i32 %fd), !insn.addr !29
  ret i32 %0, !insn.addr !29
}

define void @function_1580() local_unnamed_addr {
dec_label_pc_1580:
  call void @__gmon_start__(), !insn.addr !30
  ret void, !insn.addr !30
}

define i32 @function_1590(i8* %file, %stat* %buf) local_unnamed_addr {
dec_label_pc_1590:
  %0 = call i32 @stat(i8* %file, %stat* %buf), !insn.addr !31
  ret i32 %0, !insn.addr !31
}

define i32 @function_15a0(i32 %fd, i64* %buf, i32 %n) local_unnamed_addr {
dec_label_pc_15a0:
  %0 = call i32 @write(i32 %fd, i64* %buf, i32 %n), !insn.addr !32
  ret i32 %0, !insn.addr !32
}

define i32 @function_15b0(i32 %type) local_unnamed_addr {
dec_label_pc_15b0:
  %0 = call i32 @__getauxval(i32 %type), !insn.addr !33
  ret i32 %0, !insn.addr !33
}

define void @function_15c0() local_unnamed_addr {
dec_label_pc_15c0:
  call void @abort(), !insn.addr !34
  ret void, !insn.addr !34
}

define i32 @function_15d0(i8* %s) local_unnamed_addr {
dec_label_pc_15d0:
  %0 = call i32 @puts(i8* %s), !insn.addr !35
  ret i32 %0, !insn.addr !35
}

define i32 @function_15e0(i64* %s1, i64* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_15e0:
  %0 = call i32 @memcmp(i64* %s1, i64* %s2, i32 %n), !insn.addr !36
  ret i32 %0, !insn.addr !36
}

define i32 @function_15f0(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_15f0:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !37
  ret i32 %0, !insn.addr !37
}

define i32 @function_1600(i32 %shmid, i32 %cmd, %shmid_ds* %buf) local_unnamed_addr {
dec_label_pc_1600:
  %0 = call i32 @shmctl(i32 %shmid, i32 %cmd, %shmid_ds* %buf), !insn.addr !38
  ret i32 %0, !insn.addr !38
}

define i32 @function_1610(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_1610:
  %0 = call i32 @fread(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream), !insn.addr !39
  ret i32 %0, !insn.addr !39
}

define i32 @function_1620(i8* %pathname, i32 %proj_id) local_unnamed_addr {
dec_label_pc_1620:
  %0 = call i32 @ftok(i8* %pathname, i32 %proj_id), !insn.addr !40
  ret i32 %0, !insn.addr !40
}

define void @function_1630(i64* %ptr) local_unnamed_addr {
dec_label_pc_1630:
  call void @free(i64* %ptr), !insn.addr !41
  ret void, !insn.addr !41
}

define i32 @function_1640(i32 %key, i32 %size, i32 %shmflg) local_unnamed_addr {
dec_label_pc_1640:
  %0 = call i32 @shmget(i32 %key, i32 %size, i32 %shmflg), !insn.addr !42
  ret i32 %0, !insn.addr !42
}

define i32 @function_1650(i64* %cond, i64* %mutex) local_unnamed_addr {
dec_label_pc_1650:
  %0 = call i32 @pthread_cond_wait(i64* %cond, i64* %mutex), !insn.addr !43
  ret i32 %0, !insn.addr !43
}

define i8* @function_1660(i8* %s, i32 %c) local_unnamed_addr {
dec_label_pc_1660:
  %0 = call i8* @strchr(i8* %s, i32 %c), !insn.addr !44
  ret i8* %0, !insn.addr !44
}

define i32 @function_1670(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_1670:
  %0 = call i32 @fwrite(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !45
  ret i32 %0, !insn.addr !45
}

define i32 @function_1680(i32* %newthread, i64* %attr, i64* (i64*)* %start_routine, i64* %arg) local_unnamed_addr {
dec_label_pc_1680:
  %0 = call i32 @pthread_create(i32* %newthread, i64* %attr, i64* (i64*)* %start_routine, i64* %arg), !insn.addr !46
  ret i32 %0, !insn.addr !46
}

define i32 @function_1690(i64 %stat_loc) local_unnamed_addr {
dec_label_pc_1690:
  %0 = call i32 @wait(i64 %stat_loc), !insn.addr !47
  ret i32 %0, !insn.addr !47
}

define i32 @function_16a0(i32 %domain, i32 %type, i32 %protocol) local_unnamed_addr {
dec_label_pc_16a0:
  %0 = call i32 @socket(i32 %domain, i32 %type, i32 %protocol), !insn.addr !48
  ret i32 %0, !insn.addr !48
}

define i8* @function_16b0(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_16b0:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !49
  ret i8* %0, !insn.addr !49
}

define i32 @function_16c0(i32 %fd, i64* %buf, i32 %nbytes) local_unnamed_addr {
dec_label_pc_16c0:
  %0 = call i32 @read(i32 %fd, i64* %buf, i32 %nbytes), !insn.addr !50
  ret i32 %0, !insn.addr !50
}

define i8* @function_16d0(i8* %haystack, i8* %needle) local_unnamed_addr {
dec_label_pc_16d0:
  %0 = call i8* @strstr(i8* %haystack, i8* %needle), !insn.addr !51
  ret i8* %0, !insn.addr !51
}

define i32 @function_16e0(i32 %useconds) local_unnamed_addr {
dec_label_pc_16e0:
  %0 = call i32 @usleep(i32 %useconds), !insn.addr !52
  ret i32 %0, !insn.addr !52
}

define i32 @function_16f0(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_16f0:
  %0 = call i32 (i8*, i8*, ...) @sscanf(i8* %s, i8* %format), !insn.addr !53
  ret i32 %0, !insn.addr !53
}

define i8* @function_1700(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1700:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !54
  ret i8* %0, !insn.addr !54
}

define i32* @function_1710() local_unnamed_addr {
dec_label_pc_1710:
  %0 = call i32* @__errno_location(), !insn.addr !55
  ret i32* %0, !insn.addr !55
}

define i32 @function_1720(i32 %th, i64** %thread_return) local_unnamed_addr {
dec_label_pc_1720:
  %0 = call i32 @pthread_join(i32 %th, i64** %thread_return), !insn.addr !56
  ret i32 %0, !insn.addr !56
}

define i32 @function_1730(i32 %seconds) local_unnamed_addr {
dec_label_pc_1730:
  %0 = call i32 @alarm(i32 %seconds), !insn.addr !57
  ret i32 %0, !insn.addr !57
}

define i32 @function_1740(i32 %th) local_unnamed_addr {
dec_label_pc_1740:
  %0 = call i32 @pthread_cancel(i32 %th), !insn.addr !58
  ret i32 %0, !insn.addr !58
}

define i32 @function_1750(i64* %mutex) local_unnamed_addr {
dec_label_pc_1750:
  %0 = call i32 @pthread_mutex_lock(i64* %mutex), !insn.addr !59
  ret i32 %0, !insn.addr !59
}

define i32 @function_1760(i32 %sysno, ...) local_unnamed_addr {
dec_label_pc_1760:
  %0 = call i32 (i32, ...) @syscall(i32 %sysno), !insn.addr !60
  ret i32 %0, !insn.addr !60
}

define i32 @function_1770(i64* %mutex) local_unnamed_addr {
dec_label_pc_1770:
  %0 = call i32 @pthread_mutex_unlock(i64* %mutex), !insn.addr !61
  ret i32 %0, !insn.addr !61
}

define i32 @function_1780(i32 %pid, i32* %stat_loc, i32 %options) local_unnamed_addr {
dec_label_pc_1780:
  %0 = call i32 @waitpid(i32 %pid, i32* %stat_loc, i32 %options), !insn.addr !62
  ret i32 %0, !insn.addr !62
}

define i32 @function_1790(i8* %name) local_unnamed_addr {
dec_label_pc_1790:
  %0 = call i32 @unlink(i8* %name), !insn.addr !63
  ret i32 %0, !insn.addr !63
}

define i64 @init_have_lse_atomics(i64 %arg1) local_unnamed_addr {
dec_label_pc_17c0:
  %0 = call i32 @__getauxval(i32 16), !insn.addr !64
  %1 = call i32 @__asm_ubfx.7(i32 %0, i32 %0, i64 8, i64 1), !insn.addr !65
  %2 = sext i32 %1 to i64, !insn.addr !65
  %3 = trunc i32 %1 to i8, !insn.addr !66
  store i8 %3, i8* bitcast (i32* @global_var_150c8 to i8*), align 4, !insn.addr !66
  ret i64 %2, !insn.addr !67
}

define i64 @_start(i64 %arg1) local_unnamed_addr {
dec_label_pc_1800:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_8 = alloca i64, align 8
  %2 = load i64, i64* @global_var_14ff0, align 8, !insn.addr !68
  %3 = trunc i64 %arg1 to i32, !insn.addr !69
  %4 = bitcast i64* %stack_var_8 to i8**, !insn.addr !69
  %5 = inttoptr i64 %1 to void ()*, !insn.addr !69
  %6 = call i32 @__libc_start_main(i64 %2, i32 %3, i8** nonnull %4, void ()* null, void ()* null, void ()* %5), !insn.addr !69
  call void @abort(), !insn.addr !70
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !70
}

define i64 @call_weak_fn() local_unnamed_addr {
dec_label_pc_1834:
  %0 = load i64, i64* inttoptr (i64 85984 to i64*), align 32, !insn.addr !71
  %1 = icmp eq i64 %0, 0, !insn.addr !72
  br i1 %1, label %dec_label_pc_1844, label %dec_label_pc_1840, !insn.addr !72

dec_label_pc_1840:                                ; preds = %dec_label_pc_1834
  call void @__gmon_start__(), !insn.addr !73
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !73

dec_label_pc_1844:                                ; preds = %dec_label_pc_1834
  ret i64 0, !insn.addr !74
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1850:
  ret i64 ptrtoint (i64* @global_var_15010 to i64), !insn.addr !75
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1880:
  ret i64 ptrtoint (i64* @global_var_15010 to i64), !insn.addr !76
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_18c0:
  %x0.0.reg2mem = alloca i64, !insn.addr !77
  %0 = load i8, i8* bitcast (i64* @global_var_15010 to i8*), align 8, !insn.addr !78
  %1 = zext i8 %0 to i64, !insn.addr !78
  %2 = icmp eq i8 %0, 0, !insn.addr !79
  store i64 %1, i64* %x0.0.reg2mem, !insn.addr !79
  br i1 %2, label %dec_label_pc_18d8, label %dec_label_pc_18fc, !insn.addr !79

dec_label_pc_18d8:                                ; preds = %dec_label_pc_18c0
  %3 = load i64, i64* inttoptr (i64 85976 to i64*), align 8, !insn.addr !80
  %4 = icmp eq i64 %3, 0, !insn.addr !81
  br i1 %4, label %dec_label_pc_18f0, label %dec_label_pc_18e4, !insn.addr !81

dec_label_pc_18e4:                                ; preds = %dec_label_pc_18d8
  %5 = load i64, i64* inttoptr (i64 add (i64 ptrtoint (i64* @global_var_15000 to i64), i64 8) to i64*), align 8, !insn.addr !82
  %6 = inttoptr i64 %5 to i64*, !insn.addr !83
  call void @__cxa_finalize(i64* %6), !insn.addr !83
  br label %dec_label_pc_18f0, !insn.addr !83

dec_label_pc_18f0:                                ; preds = %dec_label_pc_18e4, %dec_label_pc_18d8
  %7 = call i64 @deregister_tm_clones(), !insn.addr !84
  store i8 1, i8* bitcast (i64* @global_var_15010 to i8*), align 8, !insn.addr !85
  store i64 1, i64* %x0.0.reg2mem, !insn.addr !85
  br label %dec_label_pc_18fc, !insn.addr !85

dec_label_pc_18fc:                                ; preds = %dec_label_pc_18c0, %dec_label_pc_18f0
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !86

; uselistorder directives
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_18fc, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1910:
  %0 = call i64 @register_tm_clones(), !insn.addr !87
  ret i64 %0, !insn.addr !87
}

define void @signal_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_1914:
  store i32 1, i32* @signal_received, align 4, !insn.addr !88
  store i32 %sig, i32* @signal_number, align 4, !insn.addr !89
  ret void, !insn.addr !90
}

define i8* @thread_sum(i8* %arg) local_unnamed_addr {
dec_label_pc_192c:
  %x2.0.reg2mem = alloca i64, !insn.addr !91
  %x1.0.reg2mem = alloca i64, !insn.addr !91
  %x0 = alloca i64, align 8
  %0 = ptrtoint i8* %arg to i64
  store i64 %0, i64* %x0, align 8
  %1 = add i64 %0, 8, !insn.addr !91
  %2 = inttoptr i64 %1 to i32*, !insn.addr !91
  store i32 0, i32* %2, align 4, !insn.addr !91
  %3 = bitcast i64* %x0 to i32*
  %4 = load i32, i32* %3, align 8, !insn.addr !92
  %5 = add i64 %0, 4, !insn.addr !93
  %6 = inttoptr i64 %5 to i32*, !insn.addr !93
  %7 = load i32, i32* %6, align 4, !insn.addr !93
  %8 = icmp ugt i32 %4, %7, !insn.addr !94
  br i1 %8, label %dec_label_pc_195c, label %dec_label_pc_1940, !insn.addr !94

dec_label_pc_1940:                                ; preds = %dec_label_pc_192c
  %9 = zext i32 %4 to i64, !insn.addr !92
  %10 = add i32 %7, 1
  store i64 %9, i64* %x1.0.reg2mem, !insn.addr !95
  store i64 0, i64* %x2.0.reg2mem, !insn.addr !95
  br label %dec_label_pc_1948, !insn.addr !95

dec_label_pc_1948:                                ; preds = %dec_label_pc_1948, %dec_label_pc_1940
  %x2.0.reload = load i64, i64* %x2.0.reg2mem
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %11 = add nuw nsw i64 %x2.0.reload, %x1.0.reload, !insn.addr !96
  %12 = and i64 %11, 4294967295, !insn.addr !96
  %13 = add nuw nsw i64 %x1.0.reload, 1, !insn.addr !97
  %14 = and i64 %13, 4294967295, !insn.addr !97
  %15 = trunc i64 %13 to i32
  %16 = icmp eq i32 %10, %15, !insn.addr !98
  store i64 %14, i64* %x1.0.reg2mem, !insn.addr !98
  store i64 %12, i64* %x2.0.reg2mem, !insn.addr !98
  br i1 %16, label %dec_label_pc_1958, label %dec_label_pc_1948, !insn.addr !98

dec_label_pc_1958:                                ; preds = %dec_label_pc_1948
  %17 = trunc i64 %11 to i32, !insn.addr !99
  %18 = load i64, i64* %x0, align 8, !insn.addr !99
  %19 = add i64 %18, 8, !insn.addr !99
  %20 = inttoptr i64 %19 to i32*, !insn.addr !99
  store i32 %17, i32* %20, align 4, !insn.addr !99
  br label %dec_label_pc_195c, !insn.addr !99

dec_label_pc_195c:                                ; preds = %dec_label_pc_1958, %dec_label_pc_192c
  ret i8* null, !insn.addr !100

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i64 %0, { 1, 0, 2 }
  uselistorder i64* %x1.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x2.0.reg2mem, { 1, 0, 2 }
}

define i8* @thread_compute(i8* %arg) local_unnamed_addr {
dec_label_pc_1964:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = call i64* @malloc(i32 4), !insn.addr !101
  %4 = mul i32 %2, %2, !insn.addr !102
  %5 = bitcast i64* %3 to i32*, !insn.addr !103
  store i32 %4, i32* %5, align 4, !insn.addr !103
  %6 = bitcast i64* %3 to i8*, !insn.addr !104
  ret i8* %6, !insn.addr !104

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i8* @thread_increment(i8* %arg) local_unnamed_addr {
dec_label_pc_1990:
  %0 = alloca i64
  %x19.0.reg2mem = alloca i64, !insn.addr !105
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp slt i32 %2, 1, !insn.addr !106
  store i64 0, i64* %x19.0.reg2mem, !insn.addr !106
  br i1 %3, label %dec_label_pc_19fc, label %dec_label_pc_19c4, !insn.addr !106

dec_label_pc_19c4:                                ; preds = %dec_label_pc_1990, %dec_label_pc_19c4
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  %4 = call i32 @pthread_mutex_lock(i64* bitcast (i32* @counter_mutex to i64*)), !insn.addr !107
  %5 = load i32, i32* @shared_counter, align 4, !insn.addr !108
  %6 = add i32 %5, 1, !insn.addr !109
  store i32 %6, i32* @shared_counter, align 4, !insn.addr !110
  %7 = call i32 @pthread_mutex_unlock(i64* bitcast (i32* @counter_mutex to i64*)), !insn.addr !111
  %8 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !112
  %9 = add nuw nsw i64 %x19.0.reload, 1, !insn.addr !113
  %10 = and i64 %9, 4294967295, !insn.addr !113
  %11 = trunc i64 %9 to i32
  %12 = icmp eq i32 %2, %11, !insn.addr !114
  store i64 %10, i64* %x19.0.reg2mem, !insn.addr !114
  br i1 %12, label %dec_label_pc_19fc, label %dec_label_pc_19c4, !insn.addr !114

dec_label_pc_19fc:                                ; preds = %dec_label_pc_19c4, %dec_label_pc_1990
  ret i8* null, !insn.addr !115

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i64* %x19.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* bitcast (i32* @counter_mutex to i64*), { 1, 0 }
  uselistorder label %dec_label_pc_19c4, { 1, 0 }
}

define i8* @consumer_thread(i8* %arg) local_unnamed_addr {
dec_label_pc_1a0c:
  %0 = call i32 @pthread_mutex_lock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !116
  %1 = load i32, i32* @ready, align 4, !insn.addr !117
  %2 = icmp eq i32 %1, 0, !insn.addr !118
  br i1 %2, label %dec_label_pc_1a44, label %dec_label_pc_1a5c, !insn.addr !118

dec_label_pc_1a44:                                ; preds = %dec_label_pc_1a0c, %dec_label_pc_1a44
  %3 = call i32 @pthread_cond_wait(i64* bitcast (i32* @cond to i64*), i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !119
  %4 = load i32, i32* @ready, align 4, !insn.addr !120
  %5 = icmp eq i32 %4, 0, !insn.addr !121
  br i1 %5, label %dec_label_pc_1a44, label %dec_label_pc_1a5c, !insn.addr !121

dec_label_pc_1a5c:                                ; preds = %dec_label_pc_1a44, %dec_label_pc_1a0c
  %6 = load i32, i32* @data, align 4, !insn.addr !122
  %7 = call i32 @pthread_mutex_unlock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !123
  %8 = call i64* @malloc(i32 4), !insn.addr !124
  %9 = bitcast i64* %8 to i32*, !insn.addr !125
  store i32 %6, i32* %9, align 4, !insn.addr !125
  %10 = bitcast i64* %8 to i8*, !insn.addr !126
  ret i8* %10, !insn.addr !126

; uselistorder directives
  uselistorder label %dec_label_pc_1a44, { 1, 0 }
}

define i8* @producer_thread(i8* %arg) local_unnamed_addr {
dec_label_pc_1a88:
  %0 = call i32 @sleep(i32 1), !insn.addr !127
  %1 = call i32 @pthread_mutex_lock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !128
  store i32 42, i32* @data, align 4, !insn.addr !129
  store i32 1, i32* @ready, align 4, !insn.addr !130
  %2 = call i32 @pthread_cond_signal(i64* bitcast (i32* @cond to i64*)), !insn.addr !131
  %3 = call i32 @pthread_mutex_unlock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !132
  ret i8* null, !insn.addr !133

; uselistorder directives
  uselistorder i32 (i64*)* @pthread_mutex_unlock, { 2, 1, 0, 3 }
  uselistorder i64* bitcast (i32* @cond to i64*), { 1, 0 }
  uselistorder i32 (i64*)* @pthread_mutex_lock, { 2, 1, 0, 3 }
  uselistorder i64* bitcast (i32* @cond_mutex to i64*), { 1, 2, 3, 0, 4 }
}

define i8* @thread_atomic_increment(i8* %arg) local_unnamed_addr {
dec_label_pc_1ae0:
  %0 = alloca i64
  %x19.0.reg2mem = alloca i64, !insn.addr !134
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp slt i32 %2, 1, !insn.addr !135
  store i64 0, i64* %x19.0.reg2mem, !insn.addr !135
  br i1 %3, label %dec_label_pc_1b3c, label %dec_label_pc_1b10, !insn.addr !135

dec_label_pc_1b10:                                ; preds = %dec_label_pc_1ae0, %dec_label_pc_1b10
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  %4 = call i64 @__aarch64_ldadd4_acq_rel(), !insn.addr !136
  %5 = call i64 @__aarch64_cas4_acq_rel(), !insn.addr !137
  %6 = add nuw nsw i64 %x19.0.reload, 1, !insn.addr !138
  %7 = and i64 %6, 4294967295, !insn.addr !138
  %8 = trunc i64 %6 to i32
  %9 = icmp eq i32 %2, %8, !insn.addr !139
  store i64 %7, i64* %x19.0.reg2mem, !insn.addr !139
  br i1 %9, label %dec_label_pc_1b3c, label %dec_label_pc_1b10, !insn.addr !139

dec_label_pc_1b3c:                                ; preds = %dec_label_pc_1b10, %dec_label_pc_1ae0
  ret i8* null, !insn.addr !140

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i64* %x19.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1b10, { 1, 0 }
}

define i8* @thread_atomic_load_store(i8* %arg) local_unnamed_addr {
dec_label_pc_1b4c:
  %0 = load i32, i32* @atomic_counter, align 4, !insn.addr !141
  %1 = add i32 %0, 100, !insn.addr !142
  %2 = load i64, i64* bitcast (i32* @atomic_counter to i64*), align 8, !insn.addr !143
  call void @__asm_stlr(i32 %1, i64 %2), !insn.addr !143
  ret i8* null, !insn.addr !144
}

define i8* @thread_tls_test(i8* %arg) local_unnamed_addr {
dec_label_pc_1b6c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = call i64 @__asm_mrs(i64 %2, i64 %1), !insn.addr !145
  %4 = add i64 %3, 16, !insn.addr !146
  %5 = inttoptr i64 %4 to i32*, !insn.addr !147
  %6 = load i32, i32* %5, align 4, !insn.addr !147
  %7 = add i32 %6, 50, !insn.addr !148
  store i32 %7, i32* %5, align 4, !insn.addr !149
  %8 = add i64 %3, 24, !insn.addr !150
  %9 = inttoptr i64 %8 to i8*, !insn.addr !151
  %10 = call i8* @strncpy(i8* %9, i8* %arg, i32 31), !insn.addr !151
  %11 = call i64* @malloc(i32 8), !insn.addr !152
  %12 = ptrtoint i64* %11 to i64, !insn.addr !152
  %13 = bitcast i64* %11 to i32*, !insn.addr !153
  store i32 %6, i32* %13, align 4, !insn.addr !153
  %14 = add i64 %12, 4, !insn.addr !154
  %15 = inttoptr i64 %14 to i32*, !insn.addr !154
  store i32 %7, i32* %15, align 4, !insn.addr !154
  %16 = bitcast i64* %11 to i8*, !insn.addr !155
  ret i8* %16, !insn.addr !155

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i32 @param_strcpy(i8* %dst, i8* %src) local_unnamed_addr {
dec_label_pc_1bc0:
  %0 = call i8* @strcpy(i8* %dst, i8* %src), !insn.addr !156
  %1 = call i32 @strlen(i8* %dst), !insn.addr !157
  ret i32 %1, !insn.addr !158
}

define i32 @call_strcpy() local_unnamed_addr {
dec_label_pc_1be8:
  %stack_var_-32 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !159
  %1 = inttoptr i64 %0 to i64*, !insn.addr !160
  %2 = load i64, i64* %1, align 8, !insn.addr !160
  %3 = bitcast i64* %stack_var_-32 to i8*, !insn.addr !161
  %4 = call i32 @param_strcpy(i8* nonnull %3, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_33f0, i64 0, i64 0)), !insn.addr !161
  %5 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !162
  %6 = inttoptr i64 %5 to i64*, !insn.addr !163
  %7 = load i64, i64* %6, align 8, !insn.addr !163
  %8 = icmp eq i64 %2, %7, !insn.addr !164
  br i1 %8, label %dec_label_pc_1c30, label %dec_label_pc_1c38, !insn.addr !164

dec_label_pc_1c30:                                ; preds = %dec_label_pc_1be8
  ret i32 %4, !insn.addr !165

dec_label_pc_1c38:                                ; preds = %dec_label_pc_1be8
  call void @__stack_chk_fail(), !insn.addr !166
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !166
}

define i32 @param_strcmp(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_1c3c:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !167
  %1 = icmp slt i32 %0, 1, !insn.addr !168
  %2 = ashr i32 %0, 31
  %storemerge = select i1 %1, i32 %2, i32 1
  ret i32 %storemerge, !insn.addr !169

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
}

define i32 @call_strcmp() local_unnamed_addr {
dec_label_pc_1c5c:
  %0 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_3408, i64 0, i64 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_3400, i64 0, i64 0)), !insn.addr !170
  %1 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_3410, i64 0, i64 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_3410, i64 0, i64 0)), !insn.addr !171
  %2 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_3420, i64 0, i64 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_3418, i64 0, i64 0)), !insn.addr !172
  %3 = add i32 %1, %0, !insn.addr !173
  %4 = add i32 %3, %2, !insn.addr !174
  ret i32 %4, !insn.addr !175

; uselistorder directives
  uselistorder i32 (i8*, i8*)* @param_strcmp, { 2, 1, 0 }
}

define i64 @param_strlen(i64 %arg1) local_unnamed_addr {
dec_label_pc_1cbc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i8*, !insn.addr !176
  %3 = call i32 @strlen(i8* %2), !insn.addr !176
  %4 = sext i32 %3 to i64, !insn.addr !176
  ret i64 %4, !insn.addr !177
}

define i32 @call_strlen() local_unnamed_addr {
dec_label_pc_1cd0:
  ret i32 12, !insn.addr !178
}

define i32 @param_memcpy(i8* %dst, i32* %src, i64 %n) local_unnamed_addr {
dec_label_pc_1cd8:
  %0 = bitcast i8* %dst to i64*, !insn.addr !179
  %1 = bitcast i32* %src to i64*, !insn.addr !179
  %2 = trunc i64 %n to i32, !insn.addr !179
  %3 = call i64* @memcpy(i64* %0, i64* %1, i32 %2), !insn.addr !179
  ret i32 %2, !insn.addr !180
}

define i32 @call_memcpy() local_unnamed_addr {
dec_label_pc_1cfc:
  %stack_var_-24 = alloca i32, align 4
  %stack_var_-48 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !181
  %1 = inttoptr i64 %0 to i64*, !insn.addr !182
  %2 = load i64, i64* %1, align 8, !insn.addr !182
  store i64 85899345930, i64* %stack_var_-48, align 8, !insn.addr !183
  store i32 0, i32* %stack_var_-24, align 4, !insn.addr !184
  %3 = bitcast i32* %stack_var_-24 to i8*, !insn.addr !185
  %4 = bitcast i64* %stack_var_-48 to i32*, !insn.addr !185
  %5 = call i32 @param_memcpy(i8* nonnull %3, i32* nonnull %4, i64 20), !insn.addr !185
  %6 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !186
  %7 = inttoptr i64 %6 to i64*, !insn.addr !187
  %8 = load i64, i64* %7, align 8, !insn.addr !187
  %9 = icmp eq i64 %2, %8, !insn.addr !188
  br i1 %9, label %dec_label_pc_1d78, label %dec_label_pc_1d80, !insn.addr !188

dec_label_pc_1d78:                                ; preds = %dec_label_pc_1cfc
  %10 = load i32, i32* %stack_var_-24, align 4, !insn.addr !189
  ret i32 %10, !insn.addr !190

dec_label_pc_1d80:                                ; preds = %dec_label_pc_1cfc
  call void @__stack_chk_fail(), !insn.addr !191
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !191

; uselistorder directives
  uselistorder i32* %stack_var_-24, { 1, 2, 0 }
}

define i32 @param_memcmp(i32* %p1, i32* %p2, i64 %n) local_unnamed_addr {
dec_label_pc_1d84:
  %0 = bitcast i32* %p1 to i64*, !insn.addr !192
  %1 = bitcast i32* %p2 to i64*, !insn.addr !192
  %2 = trunc i64 %n to i32, !insn.addr !192
  %3 = call i32 @memcmp(i64* %0, i64* %1, i32 %2), !insn.addr !192
  %4 = icmp slt i32 %3, 1, !insn.addr !193
  %5 = ashr i32 %3, 31
  %storemerge = select i1 %4, i32 %5, i32 1
  ret i32 %storemerge, !insn.addr !194

; uselistorder directives
  uselistorder i32 %3, { 1, 0 }
}

define i32 @call_memcmp() local_unnamed_addr {
dec_label_pc_1da4:
  %stack_var_-16 = alloca i64, align 8
  %stack_var_-32 = alloca i64, align 8
  %stack_var_-48 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !195
  %1 = inttoptr i64 %0 to i64*, !insn.addr !196
  %2 = load i64, i64* %1, align 8, !insn.addr !196
  store i64 8589934593, i64* %stack_var_-48, align 8, !insn.addr !197
  store i64 8589934593, i64* %stack_var_-32, align 8, !insn.addr !198
  store i64 8589934593, i64* %stack_var_-16, align 8, !insn.addr !199
  %3 = bitcast i64* %stack_var_-48 to i32*, !insn.addr !200
  %4 = bitcast i64* %stack_var_-32 to i32*, !insn.addr !200
  %5 = call i32 @param_memcmp(i32* nonnull %3, i32* nonnull %4, i64 12), !insn.addr !200
  %6 = bitcast i64* %stack_var_-16 to i32*, !insn.addr !201
  %7 = call i32 @param_memcmp(i32* nonnull %3, i32* nonnull %6, i64 12), !insn.addr !201
  %8 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !202
  %9 = inttoptr i64 %8 to i64*, !insn.addr !203
  %10 = load i64, i64* %9, align 8, !insn.addr !203
  %11 = icmp eq i64 %2, %10, !insn.addr !204
  br i1 %11, label %dec_label_pc_1e44, label %dec_label_pc_1e54, !insn.addr !204

dec_label_pc_1e44:                                ; preds = %dec_label_pc_1da4
  %12 = add i32 %7, %5, !insn.addr !205
  ret i32 %12, !insn.addr !206

dec_label_pc_1e54:                                ; preds = %dec_label_pc_1da4
  call void @__stack_chk_fail(), !insn.addr !207
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !207

; uselistorder directives
  uselistorder i32 (i32*, i32*, i64)* @param_memcmp, { 1, 0 }
  uselistorder i64 8589934593, { 1, 0, 2, 3, 4 }
}

define i32 @param_printf(i32 %x, i8* %name) local_unnamed_addr {
dec_label_pc_1e58:
  %0 = zext i32 %x to i64, !insn.addr !208
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_3428, i64 0, i64 0), i64 %0, i8* %name), !insn.addr !209
  ret i32 %1, !insn.addr !210
}

define i32 @call_printf() local_unnamed_addr {
dec_label_pc_1e80:
  %0 = call i32 @param_printf(i32 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_3440, i64 0, i64 0)), !insn.addr !211
  ret i32 %0, !insn.addr !212
}

define i32 @param_scanf(i8* %input_str) local_unnamed_addr {
dec_label_pc_1ea0:
  %storemerge.reg2mem = alloca i32, !insn.addr !213
  %stack_var_-8 = alloca i64, align 8
  %stack_var_-4 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !214
  %1 = inttoptr i64 %0 to i64*, !insn.addr !215
  %2 = load i64, i64* %1, align 8, !insn.addr !215
  %3 = call i32 (i8*, i8*, ...) @sscanf(i8* %input_str, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_3448, i64 0, i64 0), i64* nonnull %stack_var_-8, i64* nonnull %stack_var_-4), !insn.addr !216
  %4 = icmp eq i32 %3, 2, !insn.addr !217
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !217
  br i1 %4, label %dec_label_pc_1ed8, label %dec_label_pc_1ee4, !insn.addr !217

dec_label_pc_1ed8:                                ; preds = %dec_label_pc_1ea0
  %5 = load i64, i64* %stack_var_-8, align 8, !insn.addr !218
  %6 = load i64, i64* %stack_var_-4, align 8, !insn.addr !219
  %7 = add i64 %6, %5, !insn.addr !220
  %phitmp = trunc i64 %7 to i32
  store i32 %phitmp, i32* %storemerge.reg2mem, !insn.addr !220
  br label %dec_label_pc_1ee4, !insn.addr !220

dec_label_pc_1ee4:                                ; preds = %dec_label_pc_1ea0, %dec_label_pc_1ed8
  %8 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !221
  %9 = inttoptr i64 %8 to i64*, !insn.addr !222
  %10 = load i64, i64* %9, align 8, !insn.addr !222
  %11 = icmp eq i64 %2, %10, !insn.addr !223
  br i1 %11, label %dec_label_pc_1f00, label %dec_label_pc_1f10, !insn.addr !223

dec_label_pc_1f00:                                ; preds = %dec_label_pc_1ee4
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !224

dec_label_pc_1f10:                                ; preds = %dec_label_pc_1ee4
  call void @__stack_chk_fail(), !insn.addr !225
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !225

; uselistorder directives
  uselistorder i64* %stack_var_-4, { 1, 0 }
  uselistorder i64* %stack_var_-8, { 1, 0 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1ee4, { 1, 0 }
}

define i32 @call_scanf() local_unnamed_addr {
dec_label_pc_1f14:
  %0 = call i32 @param_scanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_3450, i64 0, i64 0)), !insn.addr !226
  ret i32 %0, !insn.addr !227
}

define i32 @param_fopen_fclose(i8* %filename) local_unnamed_addr {
dec_label_pc_1f30:
  %x20.0.reg2mem = alloca i32, !insn.addr !228
  %0 = call %_IO_FILE* @fopen(i8* %filename, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_3458, i64 0, i64 0)), !insn.addr !229
  %1 = icmp eq %_IO_FILE* %0, null, !insn.addr !230
  store i32 -1, i32* %x20.0.reg2mem, !insn.addr !230
  br i1 %1, label %dec_label_pc_1f60, label %dec_label_pc_1f4c, !insn.addr !230

dec_label_pc_1f4c:                                ; preds = %dec_label_pc_1f30
  %2 = call i32 @fileno(%_IO_FILE* nonnull %0), !insn.addr !231
  %3 = call i32 @fclose(%_IO_FILE* nonnull %0), !insn.addr !232
  store i32 %2, i32* %x20.0.reg2mem, !insn.addr !232
  br label %dec_label_pc_1f60, !insn.addr !232

dec_label_pc_1f60:                                ; preds = %dec_label_pc_1f30, %dec_label_pc_1f4c
  %x20.0.reload = load i32, i32* %x20.0.reg2mem
  ret i32 %x20.0.reload, !insn.addr !233

; uselistorder directives
  uselistorder i32* %x20.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1f60, { 1, 0 }
}

define i32 @call_fopen_fclose() local_unnamed_addr {
dec_label_pc_1f78:
  %0 = call i32 @param_fopen_fclose(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_3460, i64 0, i64 0)), !insn.addr !234
  %1 = icmp slt i32 %0, 0, !insn.addr !235
  %. = select i1 %1, i32 -1, i32 42
  ret i32 %., !insn.addr !236
}

define i32 @param_fread_fwrite(i8* %tmpfile) local_unnamed_addr {
dec_label_pc_1fa0:
  %x0.0.reg2mem = alloca i32, !insn.addr !237
  %stack_var_-32 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !238
  %1 = inttoptr i64 %0 to i64*, !insn.addr !239
  %2 = load i64, i64* %1, align 8, !insn.addr !239
  %3 = call %_IO_FILE* @fopen(i8* %tmpfile, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_3470, i64 0, i64 0)), !insn.addr !240
  %4 = icmp eq %_IO_FILE* %3, null, !insn.addr !241
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !241
  br i1 %4, label %dec_label_pc_2060, label %dec_label_pc_1fd4, !insn.addr !241

dec_label_pc_1fd4:                                ; preds = %dec_label_pc_1fa0
  %5 = call i32 @fwrite(i64* bitcast ([19 x i8]* @global_var_3478 to i64*), i32 1, i32 18, %_IO_FILE* nonnull %3), !insn.addr !242
  %6 = icmp eq i32 %5, 18, !insn.addr !243
  br i1 %6, label %dec_label_pc_1ffc, label %dec_label_pc_2088, !insn.addr !243

dec_label_pc_1ffc:                                ; preds = %dec_label_pc_1fd4
  call void @rewind(%_IO_FILE* nonnull %3), !insn.addr !244
  %7 = ptrtoint i64* %stack_var_-32 to i64, !insn.addr !245
  %8 = call i32 @fread(i64* nonnull %stack_var_-32, i32 1, i32 18, %_IO_FILE* nonnull %3), !insn.addr !246
  %9 = sext i32 %8 to i64, !insn.addr !246
  %10 = add i64 %9, %7, !insn.addr !247
  %11 = inttoptr i64 %10 to i8*, !insn.addr !247
  store i8 0, i8* %11, align 1, !insn.addr !247
  %12 = call i32 @fclose(%_IO_FILE* nonnull %3), !insn.addr !248
  %13 = call i32 @unlink(i8* %tmpfile), !insn.addr !249
  %14 = icmp eq i32 %8, 18, !insn.addr !250
  store i32 -3, i32* %x0.0.reg2mem, !insn.addr !250
  br i1 %14, label %dec_label_pc_203c, label %dec_label_pc_2060, !insn.addr !250

dec_label_pc_203c:                                ; preds = %dec_label_pc_1ffc
  %15 = bitcast i64* %stack_var_-32 to i8*, !insn.addr !251
  %16 = call i32 @strcmp(i8* nonnull %15, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_3478, i64 0, i64 0)), !insn.addr !251
  %17 = icmp eq i32 %16, 0, !insn.addr !252
  %phitmp = select i1 %17, i32 42, i32 -3, !insn.addr !253
  store i32 %phitmp, i32* %x0.0.reg2mem, !insn.addr !254
  br label %dec_label_pc_2060, !insn.addr !254

dec_label_pc_2060:                                ; preds = %dec_label_pc_1ffc, %dec_label_pc_1fa0, %dec_label_pc_2088, %dec_label_pc_203c
  %18 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !255
  %19 = inttoptr i64 %18 to i64*, !insn.addr !256
  %20 = load i64, i64* %19, align 8, !insn.addr !256
  %21 = icmp eq i64 %2, %20, !insn.addr !257
  br i1 %21, label %dec_label_pc_207c, label %dec_label_pc_20b0, !insn.addr !257

dec_label_pc_207c:                                ; preds = %dec_label_pc_2060
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !258

dec_label_pc_2088:                                ; preds = %dec_label_pc_1fd4
  %22 = call i32 @fclose(%_IO_FILE* nonnull %3), !insn.addr !259
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !260
  br label %dec_label_pc_2060, !insn.addr !260

dec_label_pc_20b0:                                ; preds = %dec_label_pc_2060
  call void @__stack_chk_fail(), !insn.addr !261
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !261

; uselistorder directives
  uselistorder %_IO_FILE* %3, { 2, 0, 1, 3, 4, 5 }
  uselistorder i32* %x0.0.reg2mem, { 3, 0, 4, 1, 2 }
  uselistorder i32 18, { 0, 2, 1, 3 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2060, { 2, 3, 0, 1 }
}

define i32 @call_fread_fwrite() local_unnamed_addr {
dec_label_pc_20b8:
  %0 = call i32 @param_fread_fwrite(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_3490, i64 0, i64 0)), !insn.addr !262
  ret i32 %0, !insn.addr !263
}

define i32 @param_malloc_free(i64 %size) local_unnamed_addr {
dec_label_pc_20d4:
  %x19.0.reg2mem = alloca i32, !insn.addr !264
  %x2.0.reg2mem = alloca i64, !insn.addr !264
  %x1.0.reg2mem = alloca i64, !insn.addr !264
  %0 = mul i64 %size, 4, !insn.addr !265
  %1 = trunc i64 %0 to i32, !insn.addr !266
  %2 = call i64* @malloc(i32 %1), !insn.addr !266
  %3 = icmp eq i64* %2, null, !insn.addr !267
  store i32 -1, i32* %x19.0.reg2mem, !insn.addr !267
  br i1 %3, label %dec_label_pc_2128, label %dec_label_pc_20f4, !insn.addr !267

dec_label_pc_20f4:                                ; preds = %dec_label_pc_20d4
  %4 = ptrtoint i64* %2 to i64, !insn.addr !266
  %5 = icmp eq i64 %size, 0, !insn.addr !268
  %.pre = add i64 %0, %4
  store i64 0, i64* %x1.0.reg2mem, !insn.addr !268
  store i64 %4, i64* %x2.0.reg2mem, !insn.addr !268
  br i1 %5, label %dec_label_pc_2114, label %dec_label_pc_2104, !insn.addr !268

dec_label_pc_2104:                                ; preds = %dec_label_pc_20f4, %dec_label_pc_2104
  %x2.0.reload = load i64, i64* %x2.0.reg2mem
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %6 = trunc i64 %x1.0.reload to i32, !insn.addr !269
  %7 = inttoptr i64 %x2.0.reload to i32*, !insn.addr !269
  store i32 %6, i32* %7, align 4, !insn.addr !269
  %8 = add i64 %x2.0.reload, 4, !insn.addr !269
  %9 = add nuw nsw i64 %x1.0.reload, 10, !insn.addr !270
  %10 = and i64 %9, 4294967295, !insn.addr !270
  %11 = icmp eq i64 %8, %.pre, !insn.addr !271
  store i64 %10, i64* %x1.0.reg2mem, !insn.addr !271
  store i64 %8, i64* %x2.0.reg2mem, !insn.addr !271
  br i1 %11, label %dec_label_pc_2114, label %dec_label_pc_2104, !insn.addr !271

dec_label_pc_2114:                                ; preds = %dec_label_pc_2104, %dec_label_pc_20f4
  %12 = add i64 %.pre, -4, !insn.addr !272
  %13 = inttoptr i64 %12 to i32*, !insn.addr !272
  %14 = load i32, i32* %13, align 4, !insn.addr !272
  %15 = bitcast i64* %2 to i32*, !insn.addr !273
  %16 = load i32, i32* %15, align 4, !insn.addr !273
  %17 = add i32 %16, %14, !insn.addr !274
  call void @free(i64* nonnull %2), !insn.addr !275
  store i32 %17, i32* %x19.0.reg2mem, !insn.addr !275
  br label %dec_label_pc_2128, !insn.addr !275

dec_label_pc_2128:                                ; preds = %dec_label_pc_20d4, %dec_label_pc_2114
  %x19.0.reload = load i32, i32* %x19.0.reg2mem
  ret i32 %x19.0.reload, !insn.addr !276

; uselistorder directives
  uselistorder i64 %x1.0.reload, { 1, 0 }
  uselistorder i64* %2, { 0, 1, 3, 2 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64* %x1.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x2.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %x19.0.reg2mem, { 0, 2, 1 }
  uselistorder i64 %size, { 1, 0 }
  uselistorder label %dec_label_pc_2128, { 1, 0 }
  uselistorder label %dec_label_pc_2104, { 1, 0 }
}

define i32 @call_malloc_free() local_unnamed_addr {
dec_label_pc_2140:
  %0 = call i32 @param_malloc_free(i64 10), !insn.addr !277
  ret i32 %0, !insn.addr !278

; uselistorder directives
  uselistorder i64 10, { 1, 0 }
}

define i32 @param_memset(i8* %buffer, i64 %size) local_unnamed_addr {
dec_label_pc_2158:
  %x0.1.reg2mem = alloca i32, !insn.addr !279
  %x3.0.reg2mem = alloca i64, !insn.addr !279
  %x0.0.reg2mem = alloca i64, !insn.addr !279
  %0 = bitcast i8* %buffer to i64*, !insn.addr !280
  %1 = trunc i64 %size to i32, !insn.addr !280
  %2 = call i64* @memset(i64* %0, i32 0, i32 %1), !insn.addr !280
  %3 = icmp eq i64 %size, 0, !insn.addr !281
  store i32 0, i32* %x0.1.reg2mem, !insn.addr !281
  br i1 %3, label %dec_label_pc_2198, label %dec_label_pc_217c, !insn.addr !281

dec_label_pc_217c:                                ; preds = %dec_label_pc_2158
  %4 = ptrtoint i8* %buffer to i64
  %5 = add i64 %4, %size, !insn.addr !282
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !283
  store i64 %4, i64* %x3.0.reg2mem, !insn.addr !283
  br label %dec_label_pc_2188, !insn.addr !283

dec_label_pc_2188:                                ; preds = %dec_label_pc_2188, %dec_label_pc_217c
  %x3.0.reload = load i64, i64* %x3.0.reg2mem
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %6 = inttoptr i64 %x3.0.reload to i8*, !insn.addr !284
  %7 = load i8, i8* %6, align 1, !insn.addr !284
  %8 = zext i8 %7 to i64, !insn.addr !284
  %9 = add i64 %x3.0.reload, 1, !insn.addr !284
  %10 = add nuw nsw i64 %x0.0.reload, %8, !insn.addr !285
  %11 = and i64 %10, 4294967295, !insn.addr !285
  %12 = icmp eq i64 %9, %5, !insn.addr !286
  store i64 %11, i64* %x0.0.reg2mem, !insn.addr !286
  store i64 %9, i64* %x3.0.reg2mem, !insn.addr !286
  br i1 %12, label %dec_label_pc_2198.loopexit, label %dec_label_pc_2188, !insn.addr !286

dec_label_pc_2198.loopexit:                       ; preds = %dec_label_pc_2188
  %phitmp = trunc i64 %10 to i32
  store i32 %phitmp, i32* %x0.1.reg2mem
  br label %dec_label_pc_2198

dec_label_pc_2198:                                ; preds = %dec_label_pc_2198.loopexit, %dec_label_pc_2158
  %x0.1.reload = load i32, i32* %x0.1.reg2mem
  ret i32 %x0.1.reload, !insn.addr !287

; uselistorder directives
  uselistorder i64* %x0.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x3.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 %size, { 0, 2, 1 }
  uselistorder i8* %buffer, { 1, 0 }
}

define i32 @call_memset() local_unnamed_addr {
dec_label_pc_21ac:
  %0 = alloca i32
  %x0.0.reg2mem = alloca i64, !insn.addr !288
  %1 = load i32, i32* %0
  %stack_var_-40 = alloca i32, align 4
  %stack_var_0 = alloca i64, align 8
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !289
  %3 = inttoptr i64 %2 to i64*, !insn.addr !290
  %4 = load i64, i64* %3, align 8, !insn.addr !290
  store i64 %4, i64* %stack_var_0, align 8, !insn.addr !291
  %5 = ptrtoint i32* %stack_var_-40 to i64, !insn.addr !292
  %6 = ptrtoint i64* %stack_var_0 to i64, !insn.addr !293
  store i64 %5, i64* %x0.0.reg2mem, !insn.addr !294
  br label %dec_label_pc_21d4, !insn.addr !294

dec_label_pc_21d4:                                ; preds = %dec_label_pc_21d4, %dec_label_pc_21ac
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %7 = inttoptr i64 %x0.0.reload to i32*, !insn.addr !295
  store i32 255, i32* %7, align 4, !insn.addr !295
  %8 = add i64 %x0.0.reload, 4, !insn.addr !295
  %9 = icmp eq i64 %8, %6, !insn.addr !296
  store i64 %8, i64* %x0.0.reg2mem, !insn.addr !296
  br i1 %9, label %dec_label_pc_21e0, label %dec_label_pc_21d4, !insn.addr !296

dec_label_pc_21e0:                                ; preds = %dec_label_pc_21d4
  %10 = bitcast i32* %stack_var_-40 to i8*, !insn.addr !297
  %11 = call i32 @param_memset(i8* nonnull %10, i64 40), !insn.addr !297
  %12 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !298
  %13 = load i64, i64* %stack_var_0, align 8, !insn.addr !299
  %14 = inttoptr i64 %12 to i64*, !insn.addr !300
  %15 = load i64, i64* %14, align 8, !insn.addr !300
  %16 = icmp eq i64 %13, %15, !insn.addr !301
  br i1 %16, label %dec_label_pc_2214, label %dec_label_pc_221c, !insn.addr !301

dec_label_pc_2214:                                ; preds = %dec_label_pc_21e0
  %17 = load i32, i32* %stack_var_-40, align 4, !insn.addr !302
  %18 = add i32 %17, %1, !insn.addr !303
  ret i32 %18, !insn.addr !304

dec_label_pc_221c:                                ; preds = %dec_label_pc_21e0
  call void @__stack_chk_fail(), !insn.addr !305
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !305

; uselistorder directives
  uselistorder i32* %stack_var_-40, { 1, 2, 0 }
  uselistorder i64* %x0.0.reg2mem, { 1, 0, 2 }
}

define i32 @param_strchr_strstr(i8* %str, i8 %ch, i8* %substr) local_unnamed_addr {
dec_label_pc_2220:
  %0 = ptrtoint i8* %str to i64
  %1 = zext i8 %ch to i32
  %2 = call i8* @strchr(i8* %str, i32 %1), !insn.addr !306
  %3 = icmp eq i8* %2, null, !insn.addr !307
  %4 = ptrtoint i8* %2 to i64
  %5 = sub i64 %4, %0
  %6 = call i8* @strstr(i8* %str, i8* %substr), !insn.addr !308
  %7 = icmp eq i8* %6, null, !insn.addr !309
  %8 = ptrtoint i8* %6 to i64
  %9 = sub i64 %8, %0
  %phitmp = trunc i64 %9 to i32
  %storemerge = select i1 %7, i32 -1, i32 %phitmp
  %10 = trunc i64 %5 to i32
  %11 = select i1 %3, i32 -1, i32 %10, !insn.addr !310
  %12 = add i32 %storemerge, %11, !insn.addr !310
  ret i32 %12, !insn.addr !311

; uselistorder directives
  uselistorder i8* %6, { 1, 0 }
  uselistorder i8* %2, { 1, 0 }
}

define i32 @call_strchr_strstr() local_unnamed_addr {
dec_label_pc_2278:
  %0 = call i32 @param_strchr_strstr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_34b0, i64 0, i64 0), i8 66, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_34a8, i64 0, i64 0)), !insn.addr !312
  ret i32 %0, !insn.addr !313
}

define void @test_standard_library_functions() local_unnamed_addr {
dec_label_pc_22a0:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_34c8 to i8*)), !insn.addr !314
  %1 = call i32 @call_strcpy(), !insn.addr !315
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_34f0 to i8*)), !insn.addr !316
  %3 = call i32 @call_strcmp(), !insn.addr !317
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3510 to i8*)), !insn.addr !318
  %5 = call i32 @call_strlen(), !insn.addr !319
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3530 to i8*)), !insn.addr !320
  %7 = call i32 @call_memcpy(), !insn.addr !321
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3550 to i8*)), !insn.addr !322
  %9 = call i32 @call_memcmp(), !insn.addr !323
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3570 to i8*)), !insn.addr !324
  %11 = call i32 @call_printf(), !insn.addr !325
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3590 to i8*)), !insn.addr !326
  %13 = call i32 @call_scanf(), !insn.addr !327
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_35b0 to i8*)), !insn.addr !328
  %15 = call i32 @call_fopen_fclose(), !insn.addr !329
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_35d0 to i8*)), !insn.addr !330
  %17 = call i32 @call_fread_fwrite(), !insn.addr !331
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_35f0 to i8*)), !insn.addr !332
  %19 = call i32 @call_malloc_free(), !insn.addr !333
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3610 to i8*)), !insn.addr !334
  %21 = call i32 @call_memset(), !insn.addr !335
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3630 to i8*)), !insn.addr !336
  %23 = call i32 @call_strchr_strstr(), !insn.addr !337
  %24 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3650 to i8*)), !insn.addr !338
  ret void, !insn.addr !339
}

define i32 @param_linux_syscall(i8* %pathname) local_unnamed_addr {
dec_label_pc_23dc:
  %x19.0.in.reg2mem = alloca i32, !insn.addr !340
  %0 = call i32 (i32, ...) @syscall(i32 56), !insn.addr !341
  %1 = icmp slt i32 %0, 0, !insn.addr !342
  br i1 %1, label %dec_label_pc_2420, label %dec_label_pc_2400, !insn.addr !342

dec_label_pc_2400:                                ; preds = %dec_label_pc_23dc
  %2 = call i32 (i32, ...) @syscall(i32 57), !insn.addr !343
  store i32 %0, i32* %x19.0.in.reg2mem, !insn.addr !343
  br label %dec_label_pc_2410, !insn.addr !343

dec_label_pc_2410:                                ; preds = %dec_label_pc_2420, %dec_label_pc_2400
  %x19.0.in.reload = load i32, i32* %x19.0.in.reg2mem
  ret i32 %x19.0.in.reload, !insn.addr !344

dec_label_pc_2420:                                ; preds = %dec_label_pc_23dc
  %3 = call i32* @__errno_location(), !insn.addr !345
  %4 = load i32, i32* %3, align 4, !insn.addr !346
  %5 = sub i32 0, %4, !insn.addr !347
  store i32 %5, i32* %x19.0.in.reg2mem, !insn.addr !348
  br label %dec_label_pc_2410, !insn.addr !348

; uselistorder directives
  uselistorder i32* %x19.0.in.reg2mem, { 2, 0, 1 }
}

define i32 @call_linux_syscall() local_unnamed_addr {
dec_label_pc_2430:
  %0 = call i32 @param_linux_syscall(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_3460, i64 0, i64 0)), !insn.addr !349
  %1 = icmp slt i32 %0, 0, !insn.addr !350
  %. = select i1 %1, i32 -1, i32 42
  ret i32 %., !insn.addr !351
}

define i32 @param_win32_api(i8* %filename) local_unnamed_addr {
dec_label_pc_2458:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_-128 = alloca i64, align 8
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !352
  %3 = inttoptr i64 %2 to i64*, !insn.addr !353
  %4 = load i64, i64* %3, align 8, !insn.addr !353
  %5 = bitcast i64* %stack_var_-128 to %stat*, !insn.addr !354
  %6 = call i32 @stat(i8* %filename, %stat* nonnull %5), !insn.addr !354
  %7 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !355
  %8 = inttoptr i64 %7 to i64*, !insn.addr !356
  %9 = load i64, i64* %8, align 8, !insn.addr !356
  %10 = icmp eq i64 %4, %9, !insn.addr !357
  br i1 %10, label %dec_label_pc_24b0, label %dec_label_pc_24c0, !insn.addr !357

dec_label_pc_24b0:                                ; preds = %dec_label_pc_2458
  %11 = icmp slt i32 %6, 0, !insn.addr !358
  %12 = icmp slt i64 %1, 1
  %13 = select i1 %12, i32 -2, i32 42
  %storemerge = select i1 %11, i32 -1, i32 %13
  ret i32 %storemerge, !insn.addr !359

dec_label_pc_24c0:                                ; preds = %dec_label_pc_2458
  call void @__stack_chk_fail(), !insn.addr !360
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !360
}

define i32 @call_win32_api() local_unnamed_addr {
dec_label_pc_24c4:
  %0 = call i32 @param_win32_api(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_3460, i64 0, i64 0)), !insn.addr !361
  ret i32 %0, !insn.addr !362
}

define i32 @param_fork_exec(i8* %prog, i8* %arg) local_unnamed_addr {
dec_label_pc_24e0:
  %x0.0.reg2mem = alloca i32, !insn.addr !363
  %stack_var_-4 = alloca i32, align 4
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !364
  %1 = inttoptr i64 %0 to i64*, !insn.addr !365
  %2 = load i64, i64* %1, align 8, !insn.addr !365
  %3 = call i32 @fork(), !insn.addr !366
  %4 = icmp slt i32 %3, 0, !insn.addr !367
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !367
  br i1 %4, label %dec_label_pc_2540, label %dec_label_pc_2510, !insn.addr !367

dec_label_pc_2510:                                ; preds = %dec_label_pc_24e0
  %5 = icmp eq i32 %3, 0, !insn.addr !368
  br i1 %5, label %dec_label_pc_2568, label %dec_label_pc_2514, !insn.addr !368

dec_label_pc_2514:                                ; preds = %dec_label_pc_2510
  %6 = call i32 @waitpid(i32 %3, i32* nonnull %stack_var_-4, i32 0), !insn.addr !369
  %7 = icmp slt i32 %6, 0, !insn.addr !370
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !370
  br i1 %7, label %dec_label_pc_2540, label %dec_label_pc_252c, !insn.addr !370

dec_label_pc_252c:                                ; preds = %dec_label_pc_2514
  %8 = load i32, i32* %stack_var_-4, align 4, !insn.addr !371
  %9 = zext i32 %8 to i64, !insn.addr !371
  %10 = call i64 @__asm_ubfx(i64 4294967294, i64 %9, i64 8, i64 8), !insn.addr !372
  %11 = urem i64 %9, 128, !insn.addr !373
  %12 = icmp eq i64 %11, 0, !insn.addr !373
  %13 = select i1 %12, i64 %10, i64 4294967293, !insn.addr !374
  %phitmp = trunc i64 %13 to i32
  store i32 %phitmp, i32* %x0.0.reg2mem, !insn.addr !374
  br label %dec_label_pc_2540, !insn.addr !374

dec_label_pc_2540:                                ; preds = %dec_label_pc_24e0, %dec_label_pc_252c, %dec_label_pc_2514
  %14 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !375
  %15 = inttoptr i64 %14 to i64*, !insn.addr !376
  %16 = load i64, i64* %15, align 8, !insn.addr !376
  %17 = icmp eq i64 %2, %16, !insn.addr !377
  br i1 %17, label %dec_label_pc_255c, label %dec_label_pc_258c, !insn.addr !377

dec_label_pc_255c:                                ; preds = %dec_label_pc_2540
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !378

dec_label_pc_2568:                                ; preds = %dec_label_pc_2510
  %18 = call i32 (i8*, i8*, ...) @execl(i8* %prog, i8* %prog), !insn.addr !379
  call void @_exit(i32 127), !insn.addr !380
  unreachable, !insn.addr !380

dec_label_pc_258c:                                ; preds = %dec_label_pc_2540
  call void @__stack_chk_fail(), !insn.addr !381
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !381

; uselistorder directives
  uselistorder i32* %x0.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder label %dec_label_pc_2540, { 1, 2, 0 }
}

define i32 @call_fork_exec() local_unnamed_addr {
dec_label_pc_2590:
  %0 = call i32 @param_fork_exec(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_3670, i64 0, i64 0), i8* null), !insn.addr !382
  %1 = icmp eq i32 %0, 0, !insn.addr !383
  %. = select i1 %1, i32 42, i32 -1
  ret i32 %., !insn.addr !384
}

define i32 @param_pipe_communication() local_unnamed_addr {
dec_label_pc_25bc:
  %0 = alloca i32
  %x0.0.reg2mem = alloca i32, !insn.addr !385
  %stack_var_-32 = alloca i64, align 8
  %1 = load i32, i32* %0
  %buffer_-40 = alloca [32 x i8], align 4
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !386
  %3 = inttoptr i64 %2 to i64*, !insn.addr !387
  %4 = load i64, i64* %3, align 8, !insn.addr !387
  %5 = ptrtoint [32 x i8]* %buffer_-40 to i64, !insn.addr !388
  %6 = trunc i64 %5 to i32, !insn.addr !389
  %7 = insertvalue [2 x i32] undef, i32 %6, 0, !insn.addr !389
  %8 = call i32 @pipe([2 x i32] %7), !insn.addr !389
  %9 = icmp slt i32 %8, 0, !insn.addr !390
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !390
  br i1 %9, label %dec_label_pc_2668, label %dec_label_pc_25e4, !insn.addr !390

dec_label_pc_25e4:                                ; preds = %dec_label_pc_25bc
  %10 = call i32 @fork(), !insn.addr !391
  %11 = icmp slt i32 %10, 0, !insn.addr !392
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !392
  br i1 %11, label %dec_label_pc_2668, label %dec_label_pc_25ec, !insn.addr !392

dec_label_pc_25ec:                                ; preds = %dec_label_pc_25e4
  %12 = icmp eq i32 %10, 0, !insn.addr !393
  br i1 %12, label %dec_label_pc_25f4, label %dec_label_pc_2620, !insn.addr !393

dec_label_pc_25f4:                                ; preds = %dec_label_pc_25ec
  %13 = bitcast [32 x i8]* %buffer_-40 to i32*, !insn.addr !394
  %14 = load i32, i32* %13, align 4, !insn.addr !394
  %15 = call i32 @close(i32 %14), !insn.addr !395
  %16 = call i32 @write(i32 %1, i64* bitcast ([10 x i8]* @global_var_3680 to i64*), i32 9), !insn.addr !396
  %17 = call i32 @close(i32 %1), !insn.addr !397
  call void @_exit(i32 0), !insn.addr !398
  unreachable, !insn.addr !398

dec_label_pc_2620:                                ; preds = %dec_label_pc_25ec
  %18 = call i32 @close(i32 %1), !insn.addr !399
  %19 = ptrtoint i64* %stack_var_-32 to i64, !insn.addr !400
  %20 = bitcast [32 x i8]* %buffer_-40 to i32*, !insn.addr !401
  %21 = load i32, i32* %20, align 4, !insn.addr !401
  %22 = call i32 @read(i32 %21, i64* nonnull %stack_var_-32, i32 31), !insn.addr !402
  %23 = sext i32 %22 to i64, !insn.addr !402
  %24 = add i64 %23, %19, !insn.addr !403
  %25 = inttoptr i64 %24 to i8*, !insn.addr !403
  store i8 0, i8* %25, align 1, !insn.addr !403
  %26 = load i32, i32* %20, align 4, !insn.addr !404
  %27 = call i32 @close(i32 %26), !insn.addr !405
  %28 = call i32 @wait(i64 0), !insn.addr !406
  %29 = icmp slt i32 %22, 1
  %phitmp = select i1 %29, i32 -3, i32 42, !insn.addr !407
  store i32 %phitmp, i32* %x0.0.reg2mem, !insn.addr !408
  br label %dec_label_pc_2668, !insn.addr !408

dec_label_pc_2668:                                ; preds = %dec_label_pc_25e4, %dec_label_pc_25bc, %dec_label_pc_2620
  %30 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !409
  %31 = inttoptr i64 %30 to i64*, !insn.addr !410
  %32 = load i64, i64* %31, align 8, !insn.addr !410
  %33 = icmp eq i64 %4, %32, !insn.addr !411
  br i1 %33, label %dec_label_pc_2684, label %dec_label_pc_269c, !insn.addr !411

dec_label_pc_2684:                                ; preds = %dec_label_pc_2668
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !412

dec_label_pc_269c:                                ; preds = %dec_label_pc_2668
  call void @__stack_chk_fail(), !insn.addr !413
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !413

; uselistorder directives
  uselistorder i32* %x0.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder i32 31, { 0, 2, 3, 1 }
  uselistorder i32 ()* @fork, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2668, { 2, 0, 1 }
}

define i64 @call_pipe_communication(i64 %arg1) local_unnamed_addr {
dec_label_pc_26a4:
  %0 = call i32 @param_pipe_communication(), !insn.addr !414
  %1 = sext i32 %0 to i64, !insn.addr !414
  ret i64 %1, !insn.addr !415
}

define i32 @param_socket_create() local_unnamed_addr {
dec_label_pc_26b8:
  %x0.0.reg2mem = alloca i32, !insn.addr !416
  %stack_var_-16 = alloca i64, align 8
  %stack_var_-20 = alloca i32, align 4
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !417
  %1 = inttoptr i64 %0 to i64*, !insn.addr !418
  %2 = load i64, i64* %1, align 8, !insn.addr !418
  %3 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !419
  %4 = icmp slt i32 %3, 0, !insn.addr !420
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !420
  br i1 %4, label %dec_label_pc_274c, label %dec_label_pc_26e8, !insn.addr !420

dec_label_pc_26e8:                                ; preds = %dec_label_pc_26b8
  store i32 1, i32* %stack_var_-20, align 4, !insn.addr !421
  %5 = bitcast i32* %stack_var_-20 to i64*, !insn.addr !422
  %6 = call i32 @setsockopt(i32 %3, i32 1, i32 2, i64* nonnull %5, i32 4), !insn.addr !422
  %7 = icmp slt i32 %6, 0, !insn.addr !423
  br i1 %7, label %dec_label_pc_2770, label %dec_label_pc_270c, !insn.addr !423

dec_label_pc_270c:                                ; preds = %dec_label_pc_26e8
  store i64 2, i64* %stack_var_-16, align 8, !insn.addr !424
  %8 = bitcast i64* %stack_var_-16 to %sockaddr*, !insn.addr !425
  %9 = call i32 @bind(i32 %3, %sockaddr* nonnull %8, i32 16), !insn.addr !425
  %10 = icmp slt i32 %9, 0, !insn.addr !426
  br i1 %10, label %dec_label_pc_2784, label %dec_label_pc_272c, !insn.addr !426

dec_label_pc_272c:                                ; preds = %dec_label_pc_270c
  %11 = call i32 @listen(i32 %3, i32 5), !insn.addr !427
  %12 = icmp slt i32 %11, 0, !insn.addr !428
  %13 = call i32 @close(i32 %3)
  %. = select i1 %12, i32 -4, i32 42
  store i32 %., i32* %x0.0.reg2mem, !insn.addr !429
  br label %dec_label_pc_274c, !insn.addr !429

dec_label_pc_274c:                                ; preds = %dec_label_pc_26b8, %dec_label_pc_272c, %dec_label_pc_2784, %dec_label_pc_2770
  %14 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !430
  %15 = inttoptr i64 %14 to i64*, !insn.addr !431
  %16 = load i64, i64* %15, align 8, !insn.addr !431
  %17 = icmp eq i64 %2, %16, !insn.addr !432
  br i1 %17, label %dec_label_pc_2768, label %dec_label_pc_27b4, !insn.addr !432

dec_label_pc_2768:                                ; preds = %dec_label_pc_274c
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !433

dec_label_pc_2770:                                ; preds = %dec_label_pc_26e8
  %18 = call i32 @close(i32 %3), !insn.addr !434
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !435
  br label %dec_label_pc_274c, !insn.addr !435

dec_label_pc_2784:                                ; preds = %dec_label_pc_270c
  %19 = call i32 @close(i32 %3), !insn.addr !436
  store i32 -3, i32* %x0.0.reg2mem, !insn.addr !437
  br label %dec_label_pc_274c, !insn.addr !437

dec_label_pc_27b4:                                ; preds = %dec_label_pc_274c
  call void @__stack_chk_fail(), !insn.addr !438
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !438

; uselistorder directives
  uselistorder i32 %3, { 3, 0, 1, 2, 4, 5, 6 }
  uselistorder i32* %x0.0.reg2mem, { 3, 4, 0, 2, 1 }
  uselistorder label %dec_label_pc_274c, { 2, 3, 1, 0 }
}

define i64 @call_socket_create(i64 %arg1) local_unnamed_addr {
dec_label_pc_27bc:
  %0 = call i32 @param_socket_create(), !insn.addr !439
  %1 = sext i32 %0 to i64, !insn.addr !439
  ret i64 %1, !insn.addr !440
}

define i32 @param_shmget_shmat() local_unnamed_addr {
dec_label_pc_27d0:
  %x21.0.reg2mem = alloca i32, !insn.addr !441
  %0 = call i32 (i8*, i32, ...) @open(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_3690, i64 0, i64 0), i32 66), !insn.addr !442
  %1 = icmp slt i32 %0, 0, !insn.addr !443
  store i32 -1, i32* %x21.0.reg2mem, !insn.addr !443
  br i1 %1, label %dec_label_pc_287c, label %dec_label_pc_27f4, !insn.addr !443

dec_label_pc_27f4:                                ; preds = %dec_label_pc_27d0
  %2 = call i32 @close(i32 %0), !insn.addr !444
  %3 = call i32 @ftok(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_3690, i64 0, i64 0), i32 42), !insn.addr !445
  %4 = icmp slt i32 %3, 0, !insn.addr !446
  store i32 -1, i32* %x21.0.reg2mem, !insn.addr !446
  br i1 %4, label %dec_label_pc_287c, label %dec_label_pc_280c, !insn.addr !446

dec_label_pc_280c:                                ; preds = %dec_label_pc_27f4
  %5 = call i32 @shmget(i32 %3, i32 ptrtoint (i64* (i64*)** @global_var_1000 to i32), i32 ptrtoint (i32* @global_var_3b6 to i32)), !insn.addr !447
  %6 = icmp slt i32 %5, 0, !insn.addr !448
  store i32 -2, i32* %x21.0.reg2mem, !insn.addr !448
  br i1 %6, label %dec_label_pc_287c, label %dec_label_pc_2824, !insn.addr !448

dec_label_pc_2824:                                ; preds = %dec_label_pc_280c
  %7 = call i64* @shmat(i32 %5, i64* null, i32 0), !insn.addr !449
  %8 = icmp eq i64* %7, inttoptr (i64 -1 to i64*), !insn.addr !450
  store i32 -3, i32* %x21.0.reg2mem, !insn.addr !451
  br i1 %8, label %dec_label_pc_287c, label %dec_label_pc_283c, !insn.addr !451

dec_label_pc_283c:                                ; preds = %dec_label_pc_2824
  %9 = ptrtoint i64* %7 to i64, !insn.addr !449
  store i64 7299600957910902867, i64* %7, align 8, !insn.addr !452
  %10 = add i64 %9, 5, !insn.addr !453
  %11 = inttoptr i64 %10 to i64*, !insn.addr !453
  store i64 34184295084281188, i64* %11, align 8, !insn.addr !453
  %12 = bitcast i64* %7 to i8*, !insn.addr !454
  %13 = call i32 @strlen(i8* %12), !insn.addr !454
  %14 = call i32 @shmdt(i64* %7), !insn.addr !455
  %15 = call i32 @shmctl(i32 %5, i32 0, %shmid_ds* null), !insn.addr !456
  store i32 %13, i32* %x21.0.reg2mem, !insn.addr !457
  br label %dec_label_pc_287c, !insn.addr !457

dec_label_pc_287c:                                ; preds = %dec_label_pc_2824, %dec_label_pc_280c, %dec_label_pc_27f4, %dec_label_pc_27d0, %dec_label_pc_283c
  %x21.0.reload = load i32, i32* %x21.0.reg2mem
  ret i32 %x21.0.reload, !insn.addr !458

; uselistorder directives
  uselistorder i64* %7, { 0, 1, 2, 4, 3 }
  uselistorder i32* %x21.0.reg2mem, { 0, 5, 1, 2, 3, 4 }
  uselistorder i32 (i8*)* @strlen, { 1, 0, 2, 3 }
  uselistorder i32 (i32)* @close, { 0, 2, 3, 1, 4, 5, 6, 7, 8 }
  uselistorder label %dec_label_pc_287c, { 4, 0, 1, 2, 3 }
}

define i32 @call_shmget_shmat() local_unnamed_addr {
dec_label_pc_28b4:
  %0 = call i32 @param_shmget_shmat(), !insn.addr !459
  %1 = icmp sgt i32 %0, 0, !insn.addr !460
  %. = select i1 %1, i32 42, i32 -1
  ret i32 %., !insn.addr !461
}

define i32 @param_signal_handling() local_unnamed_addr {
dec_label_pc_28d4:
  %x0.0.reg2mem = alloca i32, !insn.addr !462
  %.reg2mem = alloca i32, !insn.addr !462
  %x19.1.reg2mem = alloca i64, !insn.addr !462
  %x19.0.reg2mem = alloca i64, !insn.addr !462
  %0 = call void (i32)* @signal(i32 10, void (i32)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2324) to void (i32)*)), !insn.addr !463
  %1 = icmp eq void (i32)* %0, inttoptr (i64 -1 to void (i32)*), !insn.addr !464
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !465
  br i1 %1, label %dec_label_pc_29f0, label %dec_label_pc_28f4, !insn.addr !465

dec_label_pc_28f4:                                ; preds = %dec_label_pc_28d4
  %2 = call void (i32)* @signal(i32 14, void (i32)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2324) to void (i32)*)), !insn.addr !466
  %3 = icmp eq void (i32)* %2, inttoptr (i64 -1 to void (i32)*), !insn.addr !467
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !468
  br i1 %3, label %dec_label_pc_29f0, label %dec_label_pc_290c, !insn.addr !468

dec_label_pc_290c:                                ; preds = %dec_label_pc_28f4
  store i32 0, i32* @signal_received, align 4, !insn.addr !469
  %4 = call i32 @raise(i32 10), !insn.addr !470
  %5 = load i32, i32* @signal_received, align 4
  %6 = icmp eq i32 %5, 0, !insn.addr !471
  store i64 ptrtoint (i32* @global_var_3e8 to i64), i64* %x19.0.reg2mem, !insn.addr !471
  br i1 %6, label %dec_label_pc_2938, label %dec_label_pc_295c, !insn.addr !471

dec_label_pc_2938:                                ; preds = %dec_label_pc_290c, %dec_label_pc_2948
  %7 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !472
  %8 = load i32, i32* @signal_received, align 4
  %9 = icmp eq i32 %8, 0, !insn.addr !473
  br i1 %9, label %dec_label_pc_2948, label %dec_label_pc_295c, !insn.addr !473

dec_label_pc_2948:                                ; preds = %dec_label_pc_2938
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  %10 = add i64 %x19.0.reload, 4294967295, !insn.addr !474
  %11 = and i64 %10, 4294967295, !insn.addr !474
  %12 = trunc i64 %x19.0.reload to i32, !insn.addr !475
  %13 = icmp eq i32 %12, 1, !insn.addr !475
  store i64 %11, i64* %x19.0.reg2mem, !insn.addr !475
  store i32 -3, i32* %x0.0.reg2mem, !insn.addr !475
  br i1 %13, label %dec_label_pc_29f0, label %dec_label_pc_2938, !insn.addr !475

dec_label_pc_295c:                                ; preds = %dec_label_pc_2938, %dec_label_pc_290c
  %14 = load i32, i32* @signal_number, align 4, !insn.addr !476
  %15 = icmp eq i32 %14, 10, !insn.addr !477
  store i32 -4, i32* %x0.0.reg2mem, !insn.addr !477
  br i1 %15, label %dec_label_pc_2970, label %dec_label_pc_29f0, !insn.addr !477

dec_label_pc_2970:                                ; preds = %dec_label_pc_295c
  store i32 0, i32* @signal_received, align 4, !insn.addr !478
  %16 = call i32 @alarm(i32 1), !insn.addr !479
  %17 = load i32, i32* @signal_received, align 4, !insn.addr !480
  %18 = icmp eq i32 %17, 0, !insn.addr !481
  store i64 ptrtoint (i32* @global_var_7d0 to i64), i64* %x19.1.reg2mem, !insn.addr !481
  store i32 %17, i32* %.reg2mem, !insn.addr !481
  br i1 %18, label %dec_label_pc_2994, label %dec_label_pc_29ac, !insn.addr !481

dec_label_pc_2994:                                ; preds = %dec_label_pc_2970, %dec_label_pc_29a4
  %19 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !482
  %20 = load i32, i32* @signal_received, align 4, !insn.addr !483
  %21 = icmp eq i32 %20, 0, !insn.addr !484
  store i32 %20, i32* %.reg2mem, !insn.addr !484
  br i1 %21, label %dec_label_pc_29a4, label %dec_label_pc_29ac, !insn.addr !484

dec_label_pc_29a4:                                ; preds = %dec_label_pc_2994
  %x19.1.reload = load i64, i64* %x19.1.reg2mem
  %22 = add i64 %x19.1.reload, 4294967295, !insn.addr !485
  %23 = and i64 %22, 4294967295, !insn.addr !485
  %24 = trunc i64 %x19.1.reload to i32, !insn.addr !486
  %25 = icmp eq i32 %24, 1, !insn.addr !486
  store i64 %23, i64* %x19.1.reg2mem, !insn.addr !486
  store i32 -5, i32* %x0.0.reg2mem, !insn.addr !486
  br i1 %25, label %dec_label_pc_29f0, label %dec_label_pc_2994, !insn.addr !486

dec_label_pc_29ac:                                ; preds = %dec_label_pc_2994, %dec_label_pc_2970
  %.reload = load i32, i32* %.reg2mem, !insn.addr !487
  %26 = icmp ne i32 %.reload, 0, !insn.addr !488
  %27 = load i32, i32* @signal_number, align 4, !insn.addr !489
  %28 = icmp eq i32 %27, 14, !insn.addr !490
  %or.cond = icmp eq i1 %26, %28
  store i32 -5, i32* %x0.0.reg2mem, !insn.addr !488
  br i1 %or.cond, label %dec_label_pc_29cc, label %dec_label_pc_29f0, !insn.addr !488

dec_label_pc_29cc:                                ; preds = %dec_label_pc_29ac
  %29 = call void (i32)* @signal(i32 10, void (i32)* null), !insn.addr !491
  %30 = call void (i32)* @signal(i32 14, void (i32)* null), !insn.addr !492
  store i32 42, i32* %x0.0.reg2mem, !insn.addr !493
  br label %dec_label_pc_29f0, !insn.addr !493

dec_label_pc_29f0:                                ; preds = %dec_label_pc_2948, %dec_label_pc_29a4, %dec_label_pc_29ac, %dec_label_pc_295c, %dec_label_pc_28f4, %dec_label_pc_28d4, %dec_label_pc_29cc
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !494

; uselistorder directives
  uselistorder i64 %x19.1.reload, { 1, 0 }
  uselistorder i64 %x19.0.reload, { 1, 0 }
  uselistorder i64* %x19.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x19.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %x0.0.reg2mem, { 0, 7, 3, 2, 4, 1, 5, 6 }
  uselistorder i32 -5, { 1, 0 }
  uselistorder i32 (i32)* @usleep, { 2, 1, 0, 3 }
  uselistorder i32 14, { 1, 0, 2 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 0, 2, 3, 1, 4 }
  uselistorder i32 10, { 0, 3, 1, 2 }
  uselistorder label %dec_label_pc_29f0, { 6, 2, 1, 3, 0, 4, 5 }
  uselistorder label %dec_label_pc_2994, { 1, 0 }
  uselistorder label %dec_label_pc_2938, { 1, 0 }
}

define i64 @call_signal_handling(i64 %arg1) local_unnamed_addr {
dec_label_pc_2a48:
  %0 = call i32 @param_signal_handling(), !insn.addr !495
  %1 = sext i32 %0 to i64, !insn.addr !495
  ret i64 %1, !insn.addr !496
}

define void @test_system_calls() local_unnamed_addr {
dec_label_pc_2a5c:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_36b8 to i8*)), !insn.addr !497
  %1 = call i32 @call_linux_syscall(), !insn.addr !498
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_36d8 to i8*)), !insn.addr !499
  %3 = call i32 @call_win32_api(), !insn.addr !500
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_36f8 to i8*)), !insn.addr !501
  %5 = call i32 @call_fork_exec(), !insn.addr !502
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3718 to i8*)), !insn.addr !503
  %7 = call i32 @param_pipe_communication(), !insn.addr !504
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3738 to i8*)), !insn.addr !505
  %9 = call i32 @param_socket_create(), !insn.addr !506
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3758 to i8*)), !insn.addr !507
  %11 = call i32 @call_shmget_shmat(), !insn.addr !508
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3778 to i8*)), !insn.addr !509
  %13 = call i32 @param_signal_handling(), !insn.addr !510
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3798 to i8*)), !insn.addr !511
  ret void, !insn.addr !512
}

define i32 @param_pthread_create(i32 %x) local_unnamed_addr {
dec_label_pc_2b20:
  %x19.0.reg2mem = alloca i32, !insn.addr !513
  %stack_var_-8 = alloca i64, align 8
  %thread_ret_-16 = alloca i8*, align 8
  %stack_var_-20 = alloca i32, align 4
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !514
  %1 = inttoptr i64 %0 to i64*, !insn.addr !515
  %2 = load i64, i64* %1, align 8, !insn.addr !515
  store i32 %x, i32* %stack_var_-20, align 4, !insn.addr !516
  %3 = bitcast i8** %thread_ret_-16 to i32*, !insn.addr !517
  %4 = bitcast i32* %stack_var_-20 to i64*, !insn.addr !517
  %5 = call i32 @pthread_create(i32* nonnull %3, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2404) to i64* (i64*)*), i64* nonnull %4), !insn.addr !517
  %6 = icmp eq i32 %5, 0, !insn.addr !518
  store i32 -1, i32* %x19.0.reg2mem, !insn.addr !518
  br i1 %6, label %dec_label_pc_2b60, label %dec_label_pc_2b78, !insn.addr !518

dec_label_pc_2b60:                                ; preds = %dec_label_pc_2b20
  %7 = load i8*, i8** %thread_ret_-16, align 8, !insn.addr !519
  %8 = ptrtoint i8* %7 to i64, !insn.addr !519
  %9 = trunc i64 %8 to i32, !insn.addr !520
  %10 = bitcast i64* %stack_var_-8 to i64**, !insn.addr !520
  %11 = call i32 @pthread_join(i32 %9, i64** nonnull %10), !insn.addr !520
  %12 = load i64, i64* %stack_var_-8, align 8, !insn.addr !521
  %13 = inttoptr i64 %12 to i32*, !insn.addr !522
  %14 = load i32, i32* %13, align 4, !insn.addr !522
  %15 = inttoptr i64 %12 to i64*, !insn.addr !523
  call void @free(i64* %15), !insn.addr !523
  store i32 %14, i32* %x19.0.reg2mem, !insn.addr !523
  br label %dec_label_pc_2b78, !insn.addr !523

dec_label_pc_2b78:                                ; preds = %dec_label_pc_2b20, %dec_label_pc_2b60
  %16 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !524
  %17 = inttoptr i64 %16 to i64*, !insn.addr !525
  %18 = load i64, i64* %17, align 8, !insn.addr !525
  %19 = icmp eq i64 %2, %18, !insn.addr !526
  br i1 %19, label %dec_label_pc_2b94, label %dec_label_pc_2bac, !insn.addr !526

dec_label_pc_2b94:                                ; preds = %dec_label_pc_2b78
  %x19.0.reload = load i32, i32* %x19.0.reg2mem
  ret i32 %x19.0.reload, !insn.addr !527

dec_label_pc_2bac:                                ; preds = %dec_label_pc_2b78
  call void @__stack_chk_fail(), !insn.addr !528
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !528

; uselistorder directives
  uselistorder i64 %12, { 1, 0 }
  uselistorder i8** %thread_ret_-16, { 1, 0 }
  uselistorder i64* %stack_var_-8, { 1, 0 }
  uselistorder i32* %x19.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2b78, { 1, 0 }
}

define i32 @call_pthread_create() local_unnamed_addr {
dec_label_pc_2bb0:
  %0 = call i32 @param_pthread_create(i32 7), !insn.addr !529
  ret i32 %0, !insn.addr !530
}

define i32 @param_pthread_join() local_unnamed_addr {
dec_label_pc_2bc8:
  %x19.1.reg2mem = alloca i32, !insn.addr !531
  %x24.0.reg2mem = alloca i64, !insn.addr !531
  %x20.1.reg2mem = alloca i64, !insn.addr !531
  %x19.0.in.reg2mem = alloca i32, !insn.addr !531
  %x22.0.reg2mem = alloca i64, !insn.addr !531
  %x21.0.reg2mem = alloca i64, !insn.addr !531
  %x20.0.reg2mem = alloca i64, !insn.addr !531
  %stack_var_-64 = alloca i64, align 8
  %stack_var_-40 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !532
  %1 = inttoptr i64 %0 to i64*, !insn.addr !533
  %2 = load i64, i64* %1, align 8, !insn.addr !533
  %3 = ptrtoint i64* %stack_var_-40 to i64, !insn.addr !534
  store i64 4294967306, i64* %stack_var_-40, align 8, !insn.addr !535
  %4 = ptrtoint i64* %stack_var_-64 to i64, !insn.addr !536
  store i64 %3, i64* %x20.0.reg2mem, !insn.addr !537
  store i64 %4, i64* %x21.0.reg2mem, !insn.addr !537
  store i64 3, i64* %x22.0.reg2mem, !insn.addr !537
  br label %dec_label_pc_2c24, !insn.addr !537

dec_label_pc_2c24:                                ; preds = %dec_label_pc_2c40, %dec_label_pc_2bc8
  %x21.0.reload = load i64, i64* %x21.0.reg2mem
  %x20.0.reload = load i64, i64* %x20.0.reg2mem
  %5 = inttoptr i64 %x21.0.reload to i32*, !insn.addr !538
  %6 = inttoptr i64 %x20.0.reload to i64*, !insn.addr !538
  %7 = call i32 @pthread_create(i32* %5, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2348) to i64* (i64*)*), i64* %6), !insn.addr !538
  %8 = icmp eq i32 %7, 0, !insn.addr !539
  store i32 -1, i32* %x19.1.reg2mem, !insn.addr !539
  br i1 %8, label %dec_label_pc_2c40, label %dec_label_pc_2c84, !insn.addr !539

dec_label_pc_2c40:                                ; preds = %dec_label_pc_2c24
  %x22.0.reload = load i64, i64* %x22.0.reg2mem
  %9 = add i64 %x21.0.reload, 8, !insn.addr !540
  %10 = add i64 %x20.0.reload, 12, !insn.addr !541
  %11 = add nuw nsw i64 %x22.0.reload, 4294967295, !insn.addr !542
  %12 = and i64 %11, 4294967295, !insn.addr !542
  %13 = icmp eq i64 %x22.0.reload, 1, !insn.addr !543
  store i64 %10, i64* %x20.0.reg2mem, !insn.addr !543
  store i64 %9, i64* %x21.0.reg2mem, !insn.addr !543
  store i64 %12, i64* %x22.0.reg2mem, !insn.addr !543
  br i1 %13, label %dec_label_pc_2c58.preheader, label %dec_label_pc_2c24, !insn.addr !543

dec_label_pc_2c58.preheader:                      ; preds = %dec_label_pc_2c40
  %14 = add i64 %3, 8
  store i32 0, i32* %x19.0.in.reg2mem
  store i64 0, i64* %x20.1.reg2mem
  store i64 %4, i64* %x24.0.reg2mem
  br label %dec_label_pc_2c58

dec_label_pc_2c58:                                ; preds = %dec_label_pc_2c58.preheader, %dec_label_pc_2c68
  %x24.0.reload = load i64, i64* %x24.0.reg2mem
  %15 = inttoptr i64 %x24.0.reload to i64*, !insn.addr !544
  %16 = load i64, i64* %15, align 8, !insn.addr !544
  %17 = trunc i64 %16 to i32, !insn.addr !545
  %18 = call i32 @pthread_join(i32 %17, i64** null), !insn.addr !545
  %19 = icmp eq i32 %18, 0, !insn.addr !546
  store i32 -2, i32* %x19.1.reg2mem, !insn.addr !546
  br i1 %19, label %dec_label_pc_2c68, label %dec_label_pc_2c84, !insn.addr !546

dec_label_pc_2c68:                                ; preds = %dec_label_pc_2c58
  %x20.1.reload = load i64, i64* %x20.1.reg2mem
  %x19.0.in.reload = load i32, i32* %x19.0.in.reg2mem
  %20 = add i64 %14, %x20.1.reload, !insn.addr !547
  %21 = inttoptr i64 %20 to i32*, !insn.addr !547
  %22 = load i32, i32* %21, align 4, !insn.addr !547
  %23 = add i32 %22, %x19.0.in.reload, !insn.addr !548
  %24 = add i64 %x24.0.reload, 8, !insn.addr !549
  %25 = add nuw nsw i64 %x20.1.reload, 12, !insn.addr !550
  %26 = icmp eq i64 %25, 36, !insn.addr !551
  store i32 %23, i32* %x19.0.in.reg2mem, !insn.addr !551
  store i64 %25, i64* %x20.1.reg2mem, !insn.addr !551
  store i64 %24, i64* %x24.0.reg2mem, !insn.addr !551
  store i32 %23, i32* %x19.1.reg2mem, !insn.addr !551
  br i1 %26, label %dec_label_pc_2c84, label %dec_label_pc_2c58, !insn.addr !551

dec_label_pc_2c84:                                ; preds = %dec_label_pc_2c24, %dec_label_pc_2c58, %dec_label_pc_2c68
  %27 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !552
  %28 = inttoptr i64 %27 to i64*, !insn.addr !553
  %29 = load i64, i64* %28, align 8, !insn.addr !553
  %30 = icmp eq i64 %2, %29, !insn.addr !554
  br i1 %30, label %dec_label_pc_2ca0, label %dec_label_pc_2cc8, !insn.addr !554

dec_label_pc_2ca0:                                ; preds = %dec_label_pc_2c84
  %x19.1.reload = load i32, i32* %x19.1.reg2mem
  ret i32 %x19.1.reload, !insn.addr !555

dec_label_pc_2cc8:                                ; preds = %dec_label_pc_2c84
  call void @__stack_chk_fail(), !insn.addr !556
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !556

; uselistorder directives
  uselistorder i64 %x24.0.reload, { 1, 0 }
  uselistorder i64 %x22.0.reload, { 1, 0 }
  uselistorder i64 %x20.0.reload, { 1, 0 }
  uselistorder i64 %x21.0.reload, { 1, 0 }
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64* %x20.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x21.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x22.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %x19.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x20.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x24.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %x19.1.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64 12, { 2, 3, 0, 1 }
  uselistorder label %dec_label_pc_2c84, { 2, 1, 0 }
  uselistorder label %dec_label_pc_2c58, { 1, 0 }
}

define i64 @call_pthread_join(i64 %arg1) local_unnamed_addr {
dec_label_pc_2ccc:
  %0 = call i32 @param_pthread_join(), !insn.addr !557
  %1 = sext i32 %0 to i64, !insn.addr !557
  ret i64 %1, !insn.addr !558
}

define i32 @param_mutex_lock(i32 %thread_count, i32 %iterations_per_thread) local_unnamed_addr {
dec_label_pc_2ce0:
  %x0.0.reg2mem = alloca i32, !insn.addr !559
  %x21.0.reg2mem = alloca i64, !insn.addr !559
  %x19.0.reg2mem = alloca i64, !insn.addr !559
  %0 = sext i32 %thread_count to i64
  %stack_var_4 = alloca i32, align 4
  store i32 %iterations_per_thread, i32* %stack_var_4, align 4, !insn.addr !560
  %1 = call i64 @__asm_sbfiz(i64 %0, i64 %0, i64 3, i64 32), !insn.addr !561
  %2 = trunc i64 %1 to i32, !insn.addr !562
  %3 = call i64* @malloc(i32 %2), !insn.addr !562
  %4 = icmp eq i64* %3, null, !insn.addr !563
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !563
  br i1 %4, label %dec_label_pc_2dac, label %dec_label_pc_2d00, !insn.addr !563

dec_label_pc_2d00:                                ; preds = %dec_label_pc_2ce0
  store i32 0, i32* @shared_counter, align 4, !insn.addr !564
  %5 = icmp slt i32 %thread_count, 1, !insn.addr !565
  br i1 %5, label %dec_label_pc_2d7c, label %dec_label_pc_2d1c, !insn.addr !565

dec_label_pc_2d1c:                                ; preds = %dec_label_pc_2d00
  %6 = zext i32 %thread_count to i64, !insn.addr !566
  %7 = ptrtoint i64* %3 to i64, !insn.addr !562
  %8 = mul i64 %6, 8, !insn.addr !567
  %9 = add i64 %8, %7, !insn.addr !567
  %10 = bitcast i32* %stack_var_4 to i64*, !insn.addr !568
  store i64 %7, i64* %x19.0.reg2mem, !insn.addr !569
  br label %dec_label_pc_2d3c, !insn.addr !569

dec_label_pc_2d3c:                                ; preds = %dec_label_pc_2d54, %dec_label_pc_2d1c
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  %11 = inttoptr i64 %x19.0.reload to i32*, !insn.addr !568
  %12 = call i32 @pthread_create(i32* %11, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2448) to i64* (i64*)*), i64* nonnull %10), !insn.addr !568
  %13 = icmp eq i32 %12, 0, !insn.addr !570
  br i1 %13, label %dec_label_pc_2d54, label %dec_label_pc_2db8, !insn.addr !570

dec_label_pc_2d54:                                ; preds = %dec_label_pc_2d3c
  %14 = add i64 %x19.0.reload, 8, !insn.addr !571
  %15 = icmp eq i64 %14, %9, !insn.addr !572
  store i64 %14, i64* %x19.0.reg2mem, !insn.addr !572
  store i64 %7, i64* %x21.0.reg2mem, !insn.addr !572
  br i1 %15, label %dec_label_pc_2d60, label %dec_label_pc_2d3c, !insn.addr !572

dec_label_pc_2d60:                                ; preds = %dec_label_pc_2d54, %dec_label_pc_2d60
  %x21.0.reload = load i64, i64* %x21.0.reg2mem
  %16 = inttoptr i64 %x21.0.reload to i64*, !insn.addr !573
  %17 = load i64, i64* %16, align 8, !insn.addr !573
  %18 = add i64 %x21.0.reload, 8, !insn.addr !573
  %19 = trunc i64 %17 to i32, !insn.addr !574
  %20 = call i32 @pthread_join(i32 %19, i64** null), !insn.addr !574
  %21 = icmp eq i64 %18, %9, !insn.addr !575
  store i64 %18, i64* %x21.0.reg2mem, !insn.addr !575
  br i1 %21, label %dec_label_pc_2d7c, label %dec_label_pc_2d60, !insn.addr !575

dec_label_pc_2d7c:                                ; preds = %dec_label_pc_2d60, %dec_label_pc_2d00
  call void @free(i64* nonnull %3), !insn.addr !576
  %22 = load i32, i32* @shared_counter, align 4, !insn.addr !577
  %23 = load i32, i32* %stack_var_4, align 4, !insn.addr !578
  %24 = mul i32 %23, %thread_count, !insn.addr !579
  %25 = icmp eq i32 %22, %24, !insn.addr !580
  %phitmp = select i1 %25, i32 42, i32 -3, !insn.addr !581
  store i32 %phitmp, i32* %x0.0.reg2mem, !insn.addr !582
  br label %dec_label_pc_2dac, !insn.addr !582

dec_label_pc_2dac:                                ; preds = %dec_label_pc_2ce0, %dec_label_pc_2db8, %dec_label_pc_2d7c
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !583

dec_label_pc_2db8:                                ; preds = %dec_label_pc_2d3c
  call void @free(i64* nonnull %3), !insn.addr !584
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !585
  br label %dec_label_pc_2dac, !insn.addr !585

; uselistorder directives
  uselistorder i64 %x19.0.reload, { 1, 0 }
  uselistorder i64* %3, { 1, 0, 3, 2 }
  uselistorder i32* %stack_var_4, { 1, 0, 2 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64* %x19.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x21.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %x0.0.reg2mem, { 2, 0, 3, 1 }
  uselistorder i32 %thread_count, { 0, 2, 1, 3 }
  uselistorder label %dec_label_pc_2dac, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2d60, { 1, 0 }
}

define i32 @call_mutex_lock() local_unnamed_addr {
dec_label_pc_2ddc:
  %0 = call i32 @param_mutex_lock(i32 4, i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !586
  ret i32 %0, !insn.addr !587

; uselistorder directives
  uselistorder i32 ptrtoint (i32* @global_var_3e8 to i32), { 3, 1, 0, 2 }
}

define i32 @param_condition_variable() local_unnamed_addr {
dec_label_pc_2df8:
  %x19.0.reg2mem = alloca i32, !insn.addr !588
  %stack_var_-8 = alloca i64, align 8
  %consumer_-24 = alloca i64, align 8
  %consumer_ret_-16 = alloca i8*, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !589
  %1 = inttoptr i64 %0 to i64*, !insn.addr !590
  %2 = load i64, i64* %1, align 8, !insn.addr !590
  store i32 0, i32* @ready, align 4, !insn.addr !591
  store i32 0, i32* @data, align 4, !insn.addr !592
  %3 = bitcast i8** %consumer_ret_-16 to i32*, !insn.addr !593
  %4 = call i32 @pthread_create(i32* nonnull %3, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2572) to i64* (i64*)*), i64* null), !insn.addr !593
  %5 = icmp eq i32 %4, 0, !insn.addr !594
  store i32 -1, i32* %x19.0.reg2mem, !insn.addr !594
  br i1 %5, label %dec_label_pc_2e40, label %dec_label_pc_2e80, !insn.addr !594

dec_label_pc_2e40:                                ; preds = %dec_label_pc_2df8
  %6 = bitcast i64* %consumer_-24 to i32*, !insn.addr !595
  %7 = call i32 @pthread_create(i32* nonnull %6, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2696) to i64* (i64*)*), i64* null), !insn.addr !595
  %8 = icmp eq i32 %7, 0, !insn.addr !596
  %9 = load i8*, i8** %consumer_ret_-16, align 8
  %10 = ptrtoint i8* %9 to i64
  %11 = trunc i64 %10 to i32
  br i1 %8, label %dec_label_pc_2e5c, label %dec_label_pc_2eac, !insn.addr !596

dec_label_pc_2e5c:                                ; preds = %dec_label_pc_2e40
  %12 = bitcast i64* %stack_var_-8 to i64**, !insn.addr !597
  %13 = call i32 @pthread_join(i32 %11, i64** nonnull %12), !insn.addr !597
  %14 = load i64, i64* %consumer_-24, align 8, !insn.addr !598
  %15 = trunc i64 %14 to i32, !insn.addr !599
  %16 = call i32 @pthread_join(i32 %15, i64** null), !insn.addr !599
  %17 = load i64, i64* %stack_var_-8, align 8, !insn.addr !600
  %18 = inttoptr i64 %17 to i32*, !insn.addr !601
  %19 = load i32, i32* %18, align 4, !insn.addr !601
  %20 = inttoptr i64 %17 to i64*, !insn.addr !602
  call void @free(i64* %20), !insn.addr !602
  store i32 %19, i32* %x19.0.reg2mem, !insn.addr !602
  br label %dec_label_pc_2e80, !insn.addr !602

dec_label_pc_2e80:                                ; preds = %dec_label_pc_2df8, %dec_label_pc_2eac, %dec_label_pc_2e5c
  %21 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !603
  %22 = inttoptr i64 %21 to i64*, !insn.addr !604
  %23 = load i64, i64* %22, align 8, !insn.addr !604
  %24 = icmp eq i64 %2, %23, !insn.addr !605
  br i1 %24, label %dec_label_pc_2e9c, label %dec_label_pc_2ec4, !insn.addr !605

dec_label_pc_2e9c:                                ; preds = %dec_label_pc_2e80
  %x19.0.reload = load i32, i32* %x19.0.reg2mem
  ret i32 %x19.0.reload, !insn.addr !606

dec_label_pc_2eac:                                ; preds = %dec_label_pc_2e40
  %25 = call i32 @pthread_cancel(i32 %11), !insn.addr !607
  store i32 -2, i32* %x19.0.reg2mem, !insn.addr !608
  br label %dec_label_pc_2e80, !insn.addr !608

dec_label_pc_2ec4:                                ; preds = %dec_label_pc_2e80
  call void @__stack_chk_fail(), !insn.addr !609
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !609

; uselistorder directives
  uselistorder i64 %17, { 1, 0 }
  uselistorder i8** %consumer_ret_-16, { 1, 0 }
  uselistorder i64* %consumer_-24, { 1, 0 }
  uselistorder i64* %stack_var_-8, { 1, 0 }
  uselistorder i32* %x19.0.reg2mem, { 2, 0, 3, 1 }
  uselistorder label %dec_label_pc_2e80, { 1, 2, 0 }
}

define i64 @call_condition_variable(i64 %arg1) local_unnamed_addr {
dec_label_pc_2ec8:
  %0 = call i32 @param_condition_variable(), !insn.addr !610
  %1 = sext i32 %0 to i64, !insn.addr !610
  ret i64 %1, !insn.addr !611
}

define i32 @param_atomic_ops(i32 %thread_count, i32 %iterations) local_unnamed_addr {
dec_label_pc_2edc:
  %x0.0.reg2mem = alloca i32, !insn.addr !612
  %x19.1.reg2mem = alloca i64, !insn.addr !612
  %x19.0.reg2mem = alloca i64, !insn.addr !612
  %stack_var_-8 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %0 = zext i32 %thread_count to i64, !insn.addr !613
  store i32 %iterations, i32* %stack_var_-12, align 4, !insn.addr !614
  %1 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !615
  %2 = inttoptr i64 %1 to i64*, !insn.addr !616
  %3 = load i64, i64* %2, align 8, !insn.addr !616
  %4 = call i64 @__asm_sbfiz(i64 %1, i64 %0, i64 3, i64 32), !insn.addr !617
  %5 = trunc i64 %4 to i32, !insn.addr !618
  %6 = call i64* @malloc(i32 %5), !insn.addr !618
  %7 = icmp eq i64* %6, null, !insn.addr !619
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !619
  br i1 %7, label %dec_label_pc_2fd4, label %dec_label_pc_2f10, !insn.addr !619

dec_label_pc_2f10:                                ; preds = %dec_label_pc_2edc
  %8 = load i64, i64* bitcast (i32* @atomic_counter to i64*), align 8, !insn.addr !620
  call void @__asm_stlr(i32 0, i64 %8), !insn.addr !620
  %9 = icmp slt i32 %thread_count, 1, !insn.addr !621
  br i1 %9, label %dec_label_pc_301c, label %dec_label_pc_2f30, !insn.addr !621

dec_label_pc_2f30:                                ; preds = %dec_label_pc_2f10
  %10 = ptrtoint i64* %6 to i64, !insn.addr !618
  %11 = mul i64 %0, 8, !insn.addr !622
  %12 = add i64 %11, %10, !insn.addr !622
  %13 = bitcast i32* %stack_var_-12 to i64*, !insn.addr !623
  store i64 %10, i64* %x19.0.reg2mem, !insn.addr !624
  br label %dec_label_pc_2f48, !insn.addr !624

dec_label_pc_2f48:                                ; preds = %dec_label_pc_2f60, %dec_label_pc_2f30
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  %14 = inttoptr i64 %x19.0.reload to i32*, !insn.addr !623
  %15 = call i32 @pthread_create(i32* %14, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2784) to i64* (i64*)*), i64* nonnull %13), !insn.addr !623
  %16 = icmp eq i32 %15, 0, !insn.addr !625
  br i1 %16, label %dec_label_pc_2f60, label %dec_label_pc_2ffc, !insn.addr !625

dec_label_pc_2f60:                                ; preds = %dec_label_pc_2f48
  %17 = add i64 %x19.0.reload, 8, !insn.addr !626
  %18 = icmp eq i64 %17, %12, !insn.addr !627
  store i64 %17, i64* %x19.0.reg2mem, !insn.addr !627
  br i1 %18, label %dec_label_pc_2f6c, label %dec_label_pc_2f48, !insn.addr !627

dec_label_pc_2f6c:                                ; preds = %dec_label_pc_2f60
  %19 = call i32 @pthread_create(i32* nonnull %stack_var_-8, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2892) to i64* (i64*)*), i64* null), !insn.addr !628
  %20 = icmp eq i32 %19, 0, !insn.addr !629
  br i1 %20, label %dec_label_pc_3048, label %dec_label_pc_2f88, !insn.addr !629

dec_label_pc_2f88:                                ; preds = %dec_label_pc_3048, %dec_label_pc_2f6c
  store i64 0, i64* %x19.1.reg2mem, !insn.addr !630
  br label %dec_label_pc_2f8c, !insn.addr !630

dec_label_pc_2f8c:                                ; preds = %dec_label_pc_2f8c, %dec_label_pc_2f88
  %x19.1.reload = load i64, i64* %x19.1.reg2mem
  %21 = mul i64 %x19.1.reload, 8, !insn.addr !631
  %22 = add i64 %21, %10, !insn.addr !631
  %23 = inttoptr i64 %22 to i64*, !insn.addr !631
  %24 = load i64, i64* %23, align 8, !insn.addr !631
  %25 = trunc i64 %24 to i32, !insn.addr !632
  %26 = call i32 @pthread_join(i32 %25, i64** null), !insn.addr !632
  %27 = add nuw nsw i64 %x19.1.reload, 1, !insn.addr !633
  %28 = icmp ult i64 %27, %0, !insn.addr !634
  store i64 %27, i64* %x19.1.reg2mem, !insn.addr !634
  br i1 %28, label %dec_label_pc_2f8c, label %dec_label_pc_2fa8, !insn.addr !634

dec_label_pc_2fa8:                                ; preds = %dec_label_pc_2f8c, %dec_label_pc_301c, %dec_label_pc_3038
  %29 = load i32, i32* @atomic_counter, align 4, !insn.addr !635
  call void @free(i64* nonnull %6), !insn.addr !636
  %30 = icmp slt i32 %29, 1
  %phitmp = select i1 %30, i32 -3, i32 42, !insn.addr !637
  store i32 %phitmp, i32* %x0.0.reg2mem, !insn.addr !638
  br label %dec_label_pc_2fd4, !insn.addr !638

dec_label_pc_2fd4:                                ; preds = %dec_label_pc_2edc, %dec_label_pc_2ffc, %dec_label_pc_2fa8
  %31 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !639
  %32 = inttoptr i64 %31 to i64*, !insn.addr !640
  %33 = load i64, i64* %32, align 8, !insn.addr !640
  %34 = icmp eq i64 %3, %33, !insn.addr !641
  br i1 %34, label %dec_label_pc_2ff0, label %dec_label_pc_3058, !insn.addr !641

dec_label_pc_2ff0:                                ; preds = %dec_label_pc_2fd4
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !642

dec_label_pc_2ffc:                                ; preds = %dec_label_pc_2f48
  call void @free(i64* nonnull %6), !insn.addr !643
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !644
  br label %dec_label_pc_2fd4, !insn.addr !644

dec_label_pc_301c:                                ; preds = %dec_label_pc_2f10
  %35 = call i32 @pthread_create(i32* nonnull %stack_var_-8, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2892) to i64* (i64*)*), i64* null), !insn.addr !645
  %36 = icmp eq i32 %35, 0, !insn.addr !646
  br i1 %36, label %dec_label_pc_3038, label %dec_label_pc_2fa8, !insn.addr !646

dec_label_pc_3038:                                ; preds = %dec_label_pc_301c
  %37 = load i32, i32* %stack_var_-8, align 4, !insn.addr !647
  %38 = call i32 @pthread_join(i32 %37, i64** null), !insn.addr !648
  br label %dec_label_pc_2fa8, !insn.addr !649

dec_label_pc_3048:                                ; preds = %dec_label_pc_2f6c
  %39 = load i32, i32* %stack_var_-8, align 4, !insn.addr !650
  %40 = call i32 @pthread_join(i32 %39, i64** null), !insn.addr !651
  br label %dec_label_pc_2f88, !insn.addr !652

dec_label_pc_3058:                                ; preds = %dec_label_pc_2fd4
  call void @__stack_chk_fail(), !insn.addr !653
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !653

; uselistorder directives
  uselistorder i64 %x19.0.reload, { 1, 0 }
  uselistorder i64 %10, { 2, 0, 1 }
  uselistorder i64* %6, { 1, 0, 3, 2 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64 %0, { 1, 0, 2 }
  uselistorder i32* %stack_var_-8, { 1, 0, 3, 2 }
  uselistorder i64* %x19.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x19.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %x0.0.reg2mem, { 2, 0, 3, 1 }
  uselistorder i64** null, { 1, 0, 2, 3, 4, 5 }
  uselistorder label %dec_label_pc_2fd4, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2fa8, { 2, 1, 0 }
}

define i32 @call_atomic_ops() local_unnamed_addr {
dec_label_pc_3064:
  %0 = call i32 @param_atomic_ops(i32 4, i32 500), !insn.addr !654
  ret i32 %0, !insn.addr !655
}

define i32 @param_thread_local_storage(i32 %thread_count) local_unnamed_addr {
dec_label_pc_3080:
  %0 = alloca i64
  %x20.2.reg2mem = alloca i64, !insn.addr !656
  %x0.0.reg2mem = alloca i32, !insn.addr !656
  %x21.2.reg2mem = alloca i32, !insn.addr !656
  %x20.1.reg2mem = alloca i32, !insn.addr !656
  %x21.1.reg2mem = alloca i32, !insn.addr !656
  %x20.0.reg2mem = alloca i32, !insn.addr !656
  %x19.2.reg2mem = alloca i64, !insn.addr !656
  %x21.0.reg2mem = alloca i64, !insn.addr !656
  %x19.1.reg2mem = alloca i64, !insn.addr !656
  %x19.0.reg2mem = alloca i64, !insn.addr !656
  %1 = load i64, i64* %0
  %stack_var_-8 = alloca i64, align 8
  %2 = zext i32 %thread_count to i64, !insn.addr !657
  %3 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !658
  %4 = inttoptr i64 %3 to i64*, !insn.addr !659
  %5 = load i64, i64* %4, align 8, !insn.addr !659
  %6 = call i64 @__asm_sbfiz(i64 %1, i64 %2, i64 3, i64 32), !insn.addr !660
  %7 = trunc i64 %6 to i32, !insn.addr !661
  %8 = call i64* @malloc(i32 %7), !insn.addr !661
  %9 = call i64* @malloc(i32 %7), !insn.addr !662
  %10 = icmp eq i64* %8, null, !insn.addr !663
  %11 = icmp eq i64* %9, null
  %storemerge1 = or i1 %10, %11
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !664
  br i1 %storemerge1, label %dec_label_pc_31ec, label %dec_label_pc_30d0, !insn.addr !664

dec_label_pc_30d0:                                ; preds = %dec_label_pc_3080
  %12 = ptrtoint i64* %8 to i64, !insn.addr !661
  %13 = ptrtoint i64* %9 to i64, !insn.addr !662
  %14 = icmp slt i32 %thread_count, 1, !insn.addr !665
  store i64 0, i64* %x19.0.reg2mem, !insn.addr !665
  store i32 0, i32* %x20.1.reg2mem, !insn.addr !665
  store i32 0, i32* %x21.2.reg2mem, !insn.addr !665
  br i1 %14, label %dec_label_pc_31b4, label %dec_label_pc_30fc, !insn.addr !665

dec_label_pc_30fc:                                ; preds = %dec_label_pc_30d0, %dec_label_pc_30fc
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  %15 = call i64* @malloc(i32 16), !insn.addr !666
  %16 = ptrtoint i64* %15 to i64, !insn.addr !666
  %17 = mul i64 %x19.0.reload, 8, !insn.addr !667
  %18 = add i64 %17, %13, !insn.addr !667
  %19 = inttoptr i64 %18 to i64*, !insn.addr !667
  store i64 %16, i64* %19, align 8, !insn.addr !667
  %20 = and i64 %x19.0.reload, 4294967295, !insn.addr !668
  %21 = bitcast i64* %15 to i8*, !insn.addr !669
  %22 = call i32 (i8*, i32, i32, i32, i8*, ...) @__snprintf_chk(i8* %21, i32 16, i32 1, i32 16, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_37b8, i64 0, i64 0), i64 %20), !insn.addr !669
  %23 = add i64 %x19.0.reload, 1, !insn.addr !670
  %24 = icmp eq i64 %23, %2, !insn.addr !671
  store i64 %23, i64* %x19.0.reg2mem, !insn.addr !671
  store i64 0, i64* %x19.1.reg2mem, !insn.addr !671
  store i64 %12, i64* %x21.0.reg2mem, !insn.addr !671
  br i1 %24, label %dec_label_pc_313c, label %dec_label_pc_30fc, !insn.addr !671

dec_label_pc_313c:                                ; preds = %dec_label_pc_30fc, %dec_label_pc_3158
  %x21.0.reload = load i64, i64* %x21.0.reg2mem
  %x19.1.reload = load i64, i64* %x19.1.reg2mem
  %25 = mul i64 %x19.1.reload, 8, !insn.addr !672
  %26 = add i64 %25, %13, !insn.addr !672
  %27 = inttoptr i64 %26 to i64*, !insn.addr !672
  %28 = load i64, i64* %27, align 8, !insn.addr !672
  %29 = inttoptr i64 %x21.0.reload to i32*, !insn.addr !673
  %30 = inttoptr i64 %28 to i64*, !insn.addr !673
  %31 = call i32 @pthread_create(i32* %29, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2924) to i64* (i64*)*), i64* %30), !insn.addr !673
  %32 = icmp eq i32 %31, 0, !insn.addr !674
  br i1 %32, label %dec_label_pc_3158, label %dec_label_pc_321c, !insn.addr !674

dec_label_pc_3158:                                ; preds = %dec_label_pc_313c
  %33 = add i64 %x19.1.reload, 1, !insn.addr !675
  %34 = add i64 %x21.0.reload, 8, !insn.addr !676
  %35 = icmp eq i64 %33, %2, !insn.addr !677
  store i64 %33, i64* %x19.1.reg2mem, !insn.addr !677
  store i64 %34, i64* %x21.0.reg2mem, !insn.addr !677
  br i1 %35, label %dec_label_pc_3168, label %dec_label_pc_313c, !insn.addr !677

dec_label_pc_3168:                                ; preds = %dec_label_pc_3158
  %36 = mul i64 %2, 8, !insn.addr !678
  %37 = bitcast i64* %stack_var_-8 to i64**, !insn.addr !679
  store i64 0, i64* %x19.2.reg2mem, !insn.addr !680
  store i32 0, i32* %x20.0.reg2mem, !insn.addr !680
  store i32 0, i32* %x21.1.reg2mem, !insn.addr !680
  br label %dec_label_pc_3178, !insn.addr !680

dec_label_pc_3178:                                ; preds = %dec_label_pc_3178, %dec_label_pc_3168
  %x21.1.reload = load i32, i32* %x21.1.reg2mem
  %x20.0.reload = load i32, i32* %x20.0.reg2mem
  %x19.2.reload = load i64, i64* %x19.2.reg2mem
  %38 = add i64 %x19.2.reload, %12, !insn.addr !681
  %39 = inttoptr i64 %38 to i64*, !insn.addr !681
  %40 = load i64, i64* %39, align 8, !insn.addr !681
  %41 = trunc i64 %40 to i32, !insn.addr !679
  %42 = call i32 @pthread_join(i32 %41, i64** nonnull %37), !insn.addr !679
  %43 = load i64, i64* %stack_var_-8, align 8, !insn.addr !682
  %44 = inttoptr i64 %43 to i32*, !insn.addr !683
  %45 = load i32, i32* %44, align 4, !insn.addr !683
  %46 = add i32 %45, %x20.0.reload, !insn.addr !684
  %47 = add i64 %43, 4, !insn.addr !685
  %48 = inttoptr i64 %47 to i32*, !insn.addr !685
  %49 = load i32, i32* %48, align 4, !insn.addr !685
  %50 = add i32 %49, %x21.1.reload, !insn.addr !686
  %51 = inttoptr i64 %43 to i64*, !insn.addr !687
  call void @free(i64* %51), !insn.addr !687
  %52 = add i64 %x19.2.reload, %13, !insn.addr !688
  %53 = inttoptr i64 %52 to i64*, !insn.addr !688
  %54 = load i64, i64* %53, align 8, !insn.addr !688
  %55 = inttoptr i64 %54 to i64*, !insn.addr !689
  call void @free(i64* %55), !insn.addr !689
  %56 = add i64 %x19.2.reload, 8, !insn.addr !690
  %57 = icmp eq i64 %56, %36, !insn.addr !691
  store i64 %56, i64* %x19.2.reg2mem, !insn.addr !691
  store i32 %46, i32* %x20.0.reg2mem, !insn.addr !691
  store i32 %50, i32* %x21.1.reg2mem, !insn.addr !691
  store i32 %46, i32* %x20.1.reg2mem, !insn.addr !691
  store i32 %50, i32* %x21.2.reg2mem, !insn.addr !691
  br i1 %57, label %dec_label_pc_31b4, label %dec_label_pc_3178, !insn.addr !691

dec_label_pc_31b4:                                ; preds = %dec_label_pc_3178, %dec_label_pc_30d0
  %x20.1.reload = load i32, i32* %x20.1.reg2mem
  call void @free(i64* %9), !insn.addr !692
  call void @free(i64* %8), !insn.addr !693
  %58 = mul i32 %thread_count, 100, !insn.addr !694
  %59 = icmp eq i32 %58, %x20.1.reload, !insn.addr !695
  store i32 -3, i32* %x0.0.reg2mem, !insn.addr !696
  br i1 %59, label %60, label %dec_label_pc_31ec, !insn.addr !696

; <label>:60:                                     ; preds = %dec_label_pc_31b4
  %x21.2.reload = load i32, i32* %x21.2.reg2mem
  %61 = mul i32 %thread_count, 150, !insn.addr !697
  %62 = icmp eq i32 %61, %x21.2.reload, !insn.addr !696
  %phitmp = select i1 %62, i32 42, i32 -3
  store i32 %phitmp, i32* %x0.0.reg2mem, !insn.addr !696
  br label %dec_label_pc_31ec, !insn.addr !696

dec_label_pc_31ec:                                ; preds = %dec_label_pc_3080, %60, %dec_label_pc_31b4, %dec_label_pc_323c
  %63 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !698
  %64 = inttoptr i64 %63 to i64*, !insn.addr !699
  %65 = load i64, i64* %64, align 8, !insn.addr !699
  %66 = icmp eq i64 %5, %65, !insn.addr !700
  br i1 %66, label %dec_label_pc_3208, label %dec_label_pc_3270, !insn.addr !700

dec_label_pc_3208:                                ; preds = %dec_label_pc_31ec
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !701

dec_label_pc_321c:                                ; preds = %dec_label_pc_313c
  %67 = trunc i64 %x19.1.reload to i32
  %68 = icmp slt i32 %67, 0, !insn.addr !702
  br i1 %68, label %dec_label_pc_323c, label %dec_label_pc_3220, !insn.addr !702

dec_label_pc_3220:                                ; preds = %dec_label_pc_321c
  %69 = add i64 %13, 8, !insn.addr !703
  %70 = and i64 %25, 34359738360, !insn.addr !704
  %71 = add i64 %69, %70, !insn.addr !704
  store i64 %13, i64* %x20.2.reg2mem, !insn.addr !704
  br label %dec_label_pc_322c, !insn.addr !704

dec_label_pc_322c:                                ; preds = %dec_label_pc_322c, %dec_label_pc_3220
  %x20.2.reload = load i64, i64* %x20.2.reg2mem
  %72 = inttoptr i64 %x20.2.reload to i64*, !insn.addr !705
  %73 = load i64, i64* %72, align 8, !insn.addr !705
  %74 = add i64 %x20.2.reload, 8, !insn.addr !705
  %75 = inttoptr i64 %73 to i64*, !insn.addr !706
  call void @free(i64* %75), !insn.addr !706
  %76 = icmp eq i64 %74, %71, !insn.addr !707
  store i64 %74, i64* %x20.2.reg2mem, !insn.addr !707
  br i1 %76, label %dec_label_pc_323c, label %dec_label_pc_322c, !insn.addr !707

dec_label_pc_323c:                                ; preds = %dec_label_pc_322c, %dec_label_pc_321c
  call void @free(i64* %9), !insn.addr !708
  call void @free(i64* %8), !insn.addr !709
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !710
  br label %dec_label_pc_31ec, !insn.addr !710

dec_label_pc_3270:                                ; preds = %dec_label_pc_31ec
  call void @__stack_chk_fail(), !insn.addr !711
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !711

; uselistorder directives
  uselistorder i64 %43, { 2, 1, 0 }
  uselistorder i64 %x19.2.reload, { 0, 2, 1 }
  uselistorder i64 %25, { 1, 0 }
  uselistorder i64 %x19.1.reload, { 1, 0, 2 }
  uselistorder i64 %x21.0.reload, { 1, 0 }
  uselistorder i64 %x19.0.reload, { 1, 0, 2 }
  uselistorder i64 %13, { 0, 4, 1, 2, 3 }
  uselistorder i64 %12, { 1, 0 }
  uselistorder i64* %9, { 1, 0, 3, 2 }
  uselistorder i64* %8, { 1, 0, 3, 2 }
  uselistorder i64 %2, { 0, 2, 1, 3 }
  uselistorder i64* %stack_var_-8, { 1, 0 }
  uselistorder i64* %x19.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x19.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x21.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x19.2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %x20.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %x21.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %x0.0.reg2mem, { 4, 0, 3, 2, 1 }
  uselistorder i64* %x20.2.reg2mem, { 1, 0, 2 }
  uselistorder void ()* @__stack_chk_fail, { 3, 5, 6, 7, 9, 4, 8, 10, 11, 12, 13, 14, 0, 1, 2, 15 }
  uselistorder i32 -2, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 10 }
  uselistorder i32 42, { 2, 3, 4, 0, 8, 12, 1, 5, 9, 6, 10, 7, 11, 13, 14 }
  uselistorder i32 -3, { 5, 0, 6, 7, 1, 2, 3, 8, 9, 4 }
  uselistorder void (i64*)* @free, { 3, 4, 0, 1, 5, 6, 7, 8, 9, 2, 13, 10, 11, 12, 14 }
  uselistorder i64 4, { 2, 3, 4, 0, 5, 6, 1 }
  uselistorder i32 (i32, i64**)* @pthread_join, { 3, 8, 1, 7, 6, 5, 4, 2, 0, 9 }
  uselistorder i32 (i32*, i64*, i64* (i64*)*, i64*)* @pthread_create, { 7, 5, 6, 8, 3, 4, 1, 0, 2, 9 }
  uselistorder i64* (i64*)** @global_var_1000, { 1, 0 }
  uselistorder i64 1, { 7, 8, 9, 1, 2, 10, 3, 4, 5, 0, 6 }
  uselistorder i64 8, { 9, 10, 11, 0, 12, 1, 2, 3, 13, 4, 14, 15, 5, 16, 6, 17, 18, 19, 20, 21, 7, 8 }
  uselistorder i32 16, { 1, 0, 2, 3, 4 }
  uselistorder i32 -1, { 0, 1, 2, 3, 4, 5, 6, 18, 7, 8, 9, 10, 19, 11, 16, 20, 17, 21, 12, 13, 22, 14, 15 }
  uselistorder i64* null, { 2, 0, 1, 4, 5, 6, 7, 8, 3, 9, 10, 11, 12, 14, 13, 15, 16, 17, 18 }
  uselistorder i64* (i32)* @malloc, { 8, 7, 6, 5, 4, 3, 2, 1, 0, 9 }
  uselistorder i64 3, { 2, 3, 4, 0, 1 }
  uselistorder label %dec_label_pc_31ec, { 3, 1, 2, 0 }
  uselistorder label %dec_label_pc_313c, { 1, 0 }
  uselistorder label %dec_label_pc_30fc, { 1, 0 }
}

define i32 @call_thread_local_storage() local_unnamed_addr {
dec_label_pc_327c:
  %0 = call i32 @param_thread_local_storage(i32 4), !insn.addr !712
  ret i32 %0, !insn.addr !713
}

define void @test_thread_concurrency() local_unnamed_addr {
dec_label_pc_3294:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_37c8 to i8*)), !insn.addr !714
  %1 = call i32 @call_pthread_create(), !insn.addr !715
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_37e8 to i8*)), !insn.addr !716
  %3 = call i32 @param_pthread_join(), !insn.addr !717
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3808 to i8*)), !insn.addr !718
  %5 = call i32 @call_mutex_lock(), !insn.addr !719
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3828 to i8*)), !insn.addr !720
  %7 = call i32 @param_condition_variable(), !insn.addr !721
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3848 to i8*)), !insn.addr !722
  %9 = call i32 @call_atomic_ops(), !insn.addr !723
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3868 to i8*)), !insn.addr !724
  %11 = call i32 @call_thread_local_storage(), !insn.addr !725
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3888 to i8*)), !insn.addr !726
  ret void, !insn.addr !727

; uselistorder directives
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 16, 2, 5, 8, 7, 1, 15, 3, 11, 13, 12, 14, 10, 9, 4, 6, 20, 0, 21, 19, 22, 18, 17, 23, 24, 25, 26 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
  uselistorder i64 0, { 0, 1, 15, 16, 2, 3, 4, 77, 78, 111, 79, 80, 119, 81, 82, 83, 84, 5, 120, 6, 121, 85, 86, 87, 88, 10, 11, 89, 90, 12, 13, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 7, 8, 9, 117, 14, 118, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 112, 113, 114, 115, 116 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_3340:
  call void @test_standard_library_functions(), !insn.addr !728
  call void @test_system_calls(), !insn.addr !729
  call void @test_thread_concurrency(), !insn.addr !730
  ret i32 0, !insn.addr !731
}

define i64 @__aarch64_cas4_acq_rel() local_unnamed_addr {
dec_label_pc_3360:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  call void @__asm_hint(i64 34), !insn.addr !732
  %4 = load i8, i8* bitcast (i32* @global_var_150c8 to i8*), align 4, !insn.addr !733
  %5 = icmp eq i8 %4, 0, !insn.addr !734
  br i1 %5, label %dec_label_pc_3378, label %dec_label_pc_3370, !insn.addr !734

dec_label_pc_3370:                                ; preds = %dec_label_pc_3360
  %6 = trunc i64 %3 to i32, !insn.addr !735
  %7 = trunc i64 %2 to i32, !insn.addr !735
  call void @__asm_casal(i32 %6, i32 %7, i64 %1), !insn.addr !735
  ret i64 %3, !insn.addr !736

dec_label_pc_3378:                                ; preds = %dec_label_pc_3360
  %8 = and i64 %3, 4294967295, !insn.addr !737
  %9 = trunc i64 %2 to i32
  %10 = and i64 %1, 4294967295, !insn.addr !738
  %11 = icmp eq i64 %8, %10, !insn.addr !739
  br i1 %11, label %dec_label_pc_3388, label %dec_label_pc_3390, !insn.addr !739

dec_label_pc_3388:                                ; preds = %dec_label_pc_3378, %dec_label_pc_3388
  %12 = call i32 @__asm_stlxr(i32 %9, i64 %1), !insn.addr !740
  %13 = icmp eq i32 %12, 0, !insn.addr !741
  br i1 %13, label %dec_label_pc_3390, label %dec_label_pc_3388, !insn.addr !741

dec_label_pc_3390:                                ; preds = %dec_label_pc_3388, %dec_label_pc_3378
  ret i64 %10, !insn.addr !742

; uselistorder directives
  uselistorder i64 %10, { 1, 0 }
  uselistorder i64 %3, { 2, 1, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 1, 2, 0 }
  uselistorder i64* %0, { 2, 1, 0 }
  uselistorder label %dec_label_pc_3388, { 1, 0 }
}

define i64 @__aarch64_ldadd4_acq_rel() local_unnamed_addr {
dec_label_pc_33a0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  call void @__asm_hint(i64 34), !insn.addr !743
  %3 = load i8, i8* bitcast (i32* @global_var_150c8 to i8*), align 4, !insn.addr !744
  %4 = icmp eq i8 %3, 0, !insn.addr !745
  br i1 %4, label %dec_label_pc_33bc.preheader, label %dec_label_pc_33b0, !insn.addr !745

dec_label_pc_33bc.preheader:                      ; preds = %dec_label_pc_33a0
  %5 = trunc i64 %1 to i32
  %6 = trunc i64 %2 to i32, !insn.addr !746
  %7 = add i32 %6, %5, !insn.addr !746
  br label %dec_label_pc_33bc

dec_label_pc_33b0:                                ; preds = %dec_label_pc_33a0
  %8 = trunc i64 %2 to i32, !insn.addr !747
  call void @__asm_ldaddal(i32 %8, i32 %8, i64 %1), !insn.addr !747
  ret i64 %2, !insn.addr !748

dec_label_pc_33bc:                                ; preds = %dec_label_pc_33bc.preheader, %dec_label_pc_33bc
  %9 = call i32 @__asm_stlxr(i32 %7, i64 %1), !insn.addr !749
  %10 = icmp eq i32 %9, 0, !insn.addr !750
  br i1 %10, label %dec_label_pc_33cc, label %dec_label_pc_33bc, !insn.addr !750

dec_label_pc_33cc:                                ; preds = %dec_label_pc_33bc
  %11 = and i64 %1, 4294967295, !insn.addr !751
  ret i64 %11, !insn.addr !752

; uselistorder directives
  uselistorder i64 %2, { 1, 0, 2 }
  uselistorder i64 %1, { 3, 2, 0, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i8 0, { 0, 1, 3, 4, 2 }
  uselistorder i32 0, { 69, 70, 6, 7, 2, 3, 41, 0, 1, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 4, 53, 54, 55, 56, 57, 58, 59, 60, 61, 31, 11, 12, 8, 9, 10, 13, 14, 15, 16, 17, 20, 62, 18, 19, 63, 21, 23, 64, 22, 24, 65, 66, 25, 5, 26, 67, 68, 27, 71, 72, 73, 28, 29, 30, 32, 33, 34, 35, 36, 37, 38, 39, 40 }
  uselistorder i8* bitcast (i32* @global_var_150c8 to i8*), { 2, 1, 0 }
  uselistorder label %dec_label_pc_33bc, { 1, 0 }
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_33d0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !753

; uselistorder directives
  uselistorder i32 1, { 10, 9, 8, 66, 67, 68, 69, 70, 71, 62, 72, 117, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 7, 73, 74, 118, 111, 25, 24, 23, 121, 120, 119, 26, 75, 122, 29, 28, 27, 124, 123, 36, 35, 34, 33, 32, 31, 30, 127, 126, 125, 37, 76, 77, 78, 79, 80, 81, 82, 115, 83, 116, 41, 40, 39, 38, 42, 84, 85, 86, 129, 128, 43, 87, 131, 130, 44, 12, 112, 45, 132, 6, 46, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 133, 113, 47, 11, 50, 49, 48, 53, 52, 51, 100, 101, 134, 54, 55, 136, 135, 56, 102, 139, 138, 137, 64, 103, 140, 114, 5, 65, 104, 141, 4, 105, 57, 3, 106, 107, 143, 108, 58, 2, 1, 63, 110, 60, 59, 109, 61, 142, 0 }
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

declare i32 @fileno(%_IO_FILE*) local_unnamed_addr

declare void (i32)* @signal(i32, void (i32)*) local_unnamed_addr

declare i32 @__snprintf_chk(i8*, i32, i32, i32, i8*, ...) local_unnamed_addr

declare i32 @fclose(%_IO_FILE*) local_unnamed_addr

declare %_IO_FILE* @fopen(i8*, i8*) local_unnamed_addr

declare i64* @malloc(i32) local_unnamed_addr

declare i32 @setsockopt(i32, i32, i32, i64*, i32) local_unnamed_addr

declare i32 @open(i8*, i32, ...) local_unnamed_addr

declare i32 @pthread_cond_signal(i64*) local_unnamed_addr

declare i32 @__printf_chk(i32, i8*, ...) local_unnamed_addr

declare i64* @memset(i64*, i32, i32) local_unnamed_addr

declare i64* @shmat(i32, i64*, i32) local_unnamed_addr

declare i32 @sleep(i32) local_unnamed_addr

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

declare i64 @__asm_ubfx(i64, i64, i64, i64) local_unnamed_addr

declare i64 @__asm_sbfiz(i64, i64, i64, i64) local_unnamed_addr

declare i32 @__asm_ubfx.7(i32, i32, i64, i64) local_unnamed_addr

!0 = !{i64 5012}
!1 = !{i64 5020}
!2 = !{i64 5068}
!3 = !{i64 5084}
!4 = !{i64 5100}
!5 = !{i64 5116}
!6 = !{i64 5132}
!7 = !{i64 5148}
!8 = !{i64 5164}
!9 = !{i64 5180}
!10 = !{i64 5196}
!11 = !{i64 5212}
!12 = !{i64 5228}
!13 = !{i64 5244}
!14 = !{i64 5260}
!15 = !{i64 5276}
!16 = !{i64 5292}
!17 = !{i64 5308}
!18 = !{i64 5324}
!19 = !{i64 5340}
!20 = !{i64 5356}
!21 = !{i64 5372}
!22 = !{i64 5388}
!23 = !{i64 5404}
!24 = !{i64 5420}
!25 = !{i64 5436}
!26 = !{i64 5452}
!27 = !{i64 5468}
!28 = !{i64 5484}
!29 = !{i64 5500}
!30 = !{i64 5516}
!31 = !{i64 5532}
!32 = !{i64 5548}
!33 = !{i64 5564}
!34 = !{i64 5580}
!35 = !{i64 5596}
!36 = !{i64 5612}
!37 = !{i64 5628}
!38 = !{i64 5644}
!39 = !{i64 5660}
!40 = !{i64 5676}
!41 = !{i64 5692}
!42 = !{i64 5708}
!43 = !{i64 5724}
!44 = !{i64 5740}
!45 = !{i64 5756}
!46 = !{i64 5772}
!47 = !{i64 5788}
!48 = !{i64 5804}
!49 = !{i64 5820}
!50 = !{i64 5836}
!51 = !{i64 5852}
!52 = !{i64 5868}
!53 = !{i64 5884}
!54 = !{i64 5900}
!55 = !{i64 5916}
!56 = !{i64 5932}
!57 = !{i64 5948}
!58 = !{i64 5964}
!59 = !{i64 5980}
!60 = !{i64 5996}
!61 = !{i64 6012}
!62 = !{i64 6028}
!63 = !{i64 6044}
!64 = !{i64 6092}
!65 = !{i64 6096}
!66 = !{i64 6108}
!67 = !{i64 6112}
!68 = !{i64 6176}
!69 = !{i64 6188}
!70 = !{i64 6192}
!71 = !{i64 6200}
!72 = !{i64 6204}
!73 = !{i64 6208}
!74 = !{i64 6212}
!75 = !{i64 6268}
!76 = !{i64 6328}
!77 = !{i64 6336}
!78 = !{i64 6352}
!79 = !{i64 6356}
!80 = !{i64 6364}
!81 = !{i64 6368}
!82 = !{i64 6376}
!83 = !{i64 6380}
!84 = !{i64 6384}
!85 = !{i64 6392}
!86 = !{i64 6404}
!87 = !{i64 6416}
!88 = !{i64 6432}
!89 = !{i64 6436}
!90 = !{i64 6440}
!91 = !{i64 6444}
!92 = !{i64 6448}
!93 = !{i64 6452}
!94 = !{i64 6460}
!95 = !{i64 6468}
!96 = !{i64 6472}
!97 = !{i64 6476}
!98 = !{i64 6484}
!99 = !{i64 6488}
!100 = !{i64 6496}
!101 = !{i64 6520}
!102 = !{i64 6524}
!103 = !{i64 6528}
!104 = !{i64 6540}
!105 = !{i64 6544}
!106 = !{i64 6564}
!107 = !{i64 6600}
!108 = !{i64 6604}
!109 = !{i64 6608}
!110 = !{i64 6612}
!111 = !{i64 6620}
!112 = !{i64 6628}
!113 = !{i64 6632}
!114 = !{i64 6640}
!115 = !{i64 6664}
!116 = !{i64 6692}
!117 = !{i64 6696}
!118 = !{i64 6700}
!119 = !{i64 6732}
!120 = !{i64 6736}
!121 = !{i64 6740}
!122 = !{i64 6756}
!123 = !{i64 6764}
!124 = !{i64 6772}
!125 = !{i64 6776}
!126 = !{i64 6788}
!127 = !{i64 6808}
!128 = !{i64 6828}
!129 = !{i64 6836}
!130 = !{i64 6844}
!131 = !{i64 6852}
!132 = !{i64 6860}
!133 = !{i64 6876}
!134 = !{i64 6880}
!135 = !{i64 6900}
!136 = !{i64 6936}
!137 = !{i64 6952}
!138 = !{i64 6956}
!139 = !{i64 6964}
!140 = !{i64 6984}
!141 = !{i64 7000}
!142 = !{i64 7004}
!143 = !{i64 7008}
!144 = !{i64 7016}
!145 = !{i64 7032}
!146 = !{i64 7040}
!147 = !{i64 7044}
!148 = !{i64 7048}
!149 = !{i64 7052}
!150 = !{i64 7068}
!151 = !{i64 7072}
!152 = !{i64 7080}
!153 = !{i64 7084}
!154 = !{i64 7088}
!155 = !{i64 7100}
!156 = !{i64 7120}
!157 = !{i64 7128}
!158 = !{i64 7140}
!159 = !{i64 7156}
!160 = !{i64 7160}
!161 = !{i64 7184}
!162 = !{i64 7192}
!163 = !{i64 7200}
!164 = !{i64 7212}
!165 = !{i64 7220}
!166 = !{i64 7224}
!167 = !{i64 7236}
!168 = !{i64 7248}
!169 = !{i64 7256}
!170 = !{i64 7288}
!171 = !{i64 7308}
!172 = !{i64 7332}
!173 = !{i64 7336}
!174 = !{i64 7340}
!175 = !{i64 7352}
!176 = !{i64 7364}
!177 = !{i64 7372}
!178 = !{i64 7380}
!179 = !{i64 7400}
!180 = !{i64 7416}
!181 = !{i64 7432}
!182 = !{i64 7436}
!183 = !{i64 7464}
!184 = !{i64 7476}
!185 = !{i64 7492}
!186 = !{i64 7520}
!187 = !{i64 7528}
!188 = !{i64 7540}
!189 = !{i64 7496}
!190 = !{i64 7548}
!191 = !{i64 7552}
!192 = !{i64 7564}
!193 = !{i64 7576}
!194 = !{i64 7584}
!195 = !{i64 7608}
!196 = !{i64 7612}
!197 = !{i64 7640}
!198 = !{i64 7660}
!199 = !{i64 7676}
!200 = !{i64 7692}
!201 = !{i64 7712}
!202 = !{i64 7724}
!203 = !{i64 7732}
!204 = !{i64 7744}
!205 = !{i64 7716}
!206 = !{i64 7760}
!207 = !{i64 7764}
!208 = !{i64 7780}
!209 = !{i64 7796}
!210 = !{i64 7804}
!211 = !{i64 7828}
!212 = !{i64 7836}
!213 = !{i64 7840}
!214 = !{i64 7852}
!215 = !{i64 7856}
!216 = !{i64 7884}
!217 = !{i64 7892}
!218 = !{i64 7896}
!219 = !{i64 7900}
!220 = !{i64 7904}
!221 = !{i64 7912}
!222 = !{i64 7920}
!223 = !{i64 7932}
!224 = !{i64 7940}
!225 = !{i64 7952}
!226 = !{i64 7972}
!227 = !{i64 7980}
!228 = !{i64 7984}
!229 = !{i64 8004}
!230 = !{i64 8008}
!231 = !{i64 8016}
!232 = !{i64 8028}
!233 = !{i64 8044}
!234 = !{i64 8072}
!235 = !{i64 8076}
!236 = !{i64 8092}
!237 = !{i64 8096}
!238 = !{i64 8116}
!239 = !{i64 8120}
!240 = !{i64 8140}
!241 = !{i64 8144}
!242 = !{i64 8176}
!243 = !{i64 8184}
!244 = !{i64 8192}
!245 = !{i64 8196}
!246 = !{i64 8216}
!247 = !{i64 8224}
!248 = !{i64 8232}
!249 = !{i64 8240}
!250 = !{i64 8248}
!251 = !{i64 8264}
!252 = !{i64 8268}
!253 = !{i64 8280}
!254 = !{i64 8284}
!255 = !{i64 8292}
!256 = !{i64 8300}
!257 = !{i64 8312}
!258 = !{i64 8324}
!259 = !{i64 8332}
!260 = !{i64 8344}
!261 = !{i64 8372}
!262 = !{i64 8392}
!263 = !{i64 8400}
!264 = !{i64 8404}
!265 = !{i64 8420}
!266 = !{i64 8428}
!267 = !{i64 8432}
!268 = !{i64 8436}
!269 = !{i64 8452}
!270 = !{i64 8456}
!271 = !{i64 8464}
!272 = !{i64 8472}
!273 = !{i64 8476}
!274 = !{i64 8480}
!275 = !{i64 8484}
!276 = !{i64 8500}
!277 = !{i64 8524}
!278 = !{i64 8532}
!279 = !{i64 8536}
!280 = !{i64 8564}
!281 = !{i64 8568}
!282 = !{i64 8576}
!283 = !{i64 8580}
!284 = !{i64 8584}
!285 = !{i64 8588}
!286 = !{i64 8596}
!287 = !{i64 8608}
!288 = !{i64 8620}
!289 = !{i64 8632}
!290 = !{i64 8636}
!291 = !{i64 8640}
!292 = !{i64 8648}
!293 = !{i64 8664}
!294 = !{i64 8656}
!295 = !{i64 8660}
!296 = !{i64 8668}
!297 = !{i64 8680}
!298 = !{i64 8700}
!299 = !{i64 8704}
!300 = !{i64 8708}
!301 = !{i64 8720}
!302 = !{i64 8684}
!303 = !{i64 8692}
!304 = !{i64 8728}
!305 = !{i64 8732}
!306 = !{i64 8764}
!307 = !{i64 8772}
!308 = !{i64 8788}
!309 = !{i64 8796}
!310 = !{i64 8804}
!311 = !{i64 8820}
!312 = !{i64 8852}
!313 = !{i64 8860}
!314 = !{i64 8880}
!315 = !{i64 8884}
!316 = !{i64 8904}
!317 = !{i64 8908}
!318 = !{i64 8928}
!319 = !{i64 8932}
!320 = !{i64 8952}
!321 = !{i64 8956}
!322 = !{i64 8976}
!323 = !{i64 8980}
!324 = !{i64 9000}
!325 = !{i64 9004}
!326 = !{i64 9024}
!327 = !{i64 9028}
!328 = !{i64 9048}
!329 = !{i64 9052}
!330 = !{i64 9072}
!331 = !{i64 9076}
!332 = !{i64 9096}
!333 = !{i64 9100}
!334 = !{i64 9120}
!335 = !{i64 9124}
!336 = !{i64 9144}
!337 = !{i64 9148}
!338 = !{i64 9168}
!339 = !{i64 9176}
!340 = !{i64 9180}
!341 = !{i64 9208}
!342 = !{i64 9212}
!343 = !{i64 9228}
!344 = !{i64 9244}
!345 = !{i64 9248}
!346 = !{i64 9252}
!347 = !{i64 9256}
!348 = !{i64 9260}
!349 = !{i64 9280}
!350 = !{i64 9284}
!351 = !{i64 9300}
!352 = !{i64 9316}
!353 = !{i64 9320}
!354 = !{i64 9336}
!355 = !{i64 9368}
!356 = !{i64 9376}
!357 = !{i64 9388}
!358 = !{i64 9340}
!359 = !{i64 9396}
!360 = !{i64 9408}
!361 = !{i64 9428}
!362 = !{i64 9436}
!363 = !{i64 9440}
!364 = !{i64 9464}
!365 = !{i64 9468}
!366 = !{i64 9480}
!367 = !{i64 9484}
!368 = !{i64 9488}
!369 = !{i64 9500}
!370 = !{i64 9512}
!371 = !{i64 9516}
!372 = !{i64 9520}
!373 = !{i64 9524}
!374 = !{i64 9532}
!375 = !{i64 9540}
!376 = !{i64 9548}
!377 = !{i64 9560}
!378 = !{i64 9572}
!379 = !{i64 9592}
!380 = !{i64 9600}
!381 = !{i64 9612}
!382 = !{i64 9636}
!383 = !{i64 9640}
!384 = !{i64 9656}
!385 = !{i64 9660}
!386 = !{i64 9672}
!387 = !{i64 9676}
!388 = !{i64 9688}
!389 = !{i64 9692}
!390 = !{i64 9696}
!391 = !{i64 9700}
!392 = !{i64 9704}
!393 = !{i64 9712}
!394 = !{i64 9716}
!395 = !{i64 9720}
!396 = !{i64 9740}
!397 = !{i64 9748}
!398 = !{i64 9756}
!399 = !{i64 9764}
!400 = !{i64 9768}
!401 = !{i64 9780}
!402 = !{i64 9784}
!403 = !{i64 9792}
!404 = !{i64 9796}
!405 = !{i64 9800}
!406 = !{i64 9808}
!407 = !{i64 9824}
!408 = !{i64 9828}
!409 = !{i64 9836}
!410 = !{i64 9844}
!411 = !{i64 9856}
!412 = !{i64 9864}
!413 = !{i64 9888}
!414 = !{i64 9900}
!415 = !{i64 9908}
!416 = !{i64 9912}
!417 = !{i64 9924}
!418 = !{i64 9928}
!419 = !{i64 9952}
!420 = !{i64 9956}
!421 = !{i64 9972}
!422 = !{i64 9988}
!423 = !{i64 9992}
!424 = !{i64 10004}
!425 = !{i64 10020}
!426 = !{i64 10024}
!427 = !{i64 10036}
!428 = !{i64 10040}
!429 = !{i64 10152}
!430 = !{i64 10064}
!431 = !{i64 10072}
!432 = !{i64 10084}
!433 = !{i64 10092}
!434 = !{i64 10100}
!435 = !{i64 10112}
!436 = !{i64 10120}
!437 = !{i64 10132}
!438 = !{i64 10168}
!439 = !{i64 10180}
!440 = !{i64 10188}
!441 = !{i64 10192}
!442 = !{i64 10220}
!443 = !{i64 10224}
!444 = !{i64 10228}
!445 = !{i64 10244}
!446 = !{i64 10248}
!447 = !{i64 10264}
!448 = !{i64 10272}
!449 = !{i64 10284}
!450 = !{i64 10292}
!451 = !{i64 10296}
!452 = !{i64 10312}
!453 = !{i64 10320}
!454 = !{i64 10328}
!455 = !{i64 10340}
!456 = !{i64 10356}
!457 = !{i64 10360}
!458 = !{i64 10376}
!459 = !{i64 10428}
!460 = !{i64 10440}
!461 = !{i64 10448}
!462 = !{i64 10452}
!463 = !{i64 10472}
!464 = !{i64 10476}
!465 = !{i64 10480}
!466 = !{i64 10496}
!467 = !{i64 10500}
!468 = !{i64 10504}
!469 = !{i64 10520}
!470 = !{i64 10528}
!471 = !{i64 10536}
!472 = !{i64 10556}
!473 = !{i64 10564}
!474 = !{i64 10568}
!475 = !{i64 10572}
!476 = !{i64 10596}
!477 = !{i64 10604}
!478 = !{i64 10612}
!479 = !{i64 10620}
!480 = !{i64 10624}
!481 = !{i64 10628}
!482 = !{i64 10648}
!483 = !{i64 10652}
!484 = !{i64 10656}
!485 = !{i64 10660}
!486 = !{i64 10664}
!487 = !{i64 10672}
!488 = !{i64 10676}
!489 = !{i64 10688}
!490 = !{i64 10696}
!491 = !{i64 10708}
!492 = !{i64 10720}
!493 = !{i64 10732}
!494 = !{i64 10740}
!495 = !{i64 10832}
!496 = !{i64 10840}
!497 = !{i64 10860}
!498 = !{i64 10864}
!499 = !{i64 10884}
!500 = !{i64 10888}
!501 = !{i64 10908}
!502 = !{i64 10912}
!503 = !{i64 10932}
!504 = !{i64 10936}
!505 = !{i64 10956}
!506 = !{i64 10960}
!507 = !{i64 10980}
!508 = !{i64 10984}
!509 = !{i64 11004}
!510 = !{i64 11008}
!511 = !{i64 11028}
!512 = !{i64 11036}
!513 = !{i64 11040}
!514 = !{i64 11056}
!515 = !{i64 11060}
!516 = !{i64 11072}
!517 = !{i64 11096}
!518 = !{i64 11100}
!519 = !{i64 11108}
!520 = !{i64 11112}
!521 = !{i64 11116}
!522 = !{i64 11120}
!523 = !{i64 11124}
!524 = !{i64 11132}
!525 = !{i64 11140}
!526 = !{i64 11152}
!527 = !{i64 11168}
!528 = !{i64 11180}
!529 = !{i64 11196}
!530 = !{i64 11204}
!531 = !{i64 11208}
!532 = !{i64 11232}
!533 = !{i64 11236}
!534 = !{i64 11260}
!535 = !{i64 11268}
!536 = !{i64 11280}
!537 = !{i64 11296}
!538 = !{i64 11316}
!539 = !{i64 11324}
!540 = !{i64 11328}
!541 = !{i64 11332}
!542 = !{i64 11336}
!543 = !{i64 11340}
!544 = !{i64 11356}
!545 = !{i64 11360}
!546 = !{i64 11364}
!547 = !{i64 11372}
!548 = !{i64 11376}
!549 = !{i64 11380}
!550 = !{i64 11384}
!551 = !{i64 11392}
!552 = !{i64 11400}
!553 = !{i64 11408}
!554 = !{i64 11420}
!555 = !{i64 11444}
!556 = !{i64 11464}
!557 = !{i64 11476}
!558 = !{i64 11484}
!559 = !{i64 11488}
!560 = !{i64 11504}
!561 = !{i64 11508}
!562 = !{i64 11512}
!563 = !{i64 11516}
!564 = !{i64 11536}
!565 = !{i64 11544}
!566 = !{i64 11500}
!567 = !{i64 11560}
!568 = !{i64 11596}
!569 = !{i64 11576}
!570 = !{i64 11600}
!571 = !{i64 11604}
!572 = !{i64 11612}
!573 = !{i64 11620}
!574 = !{i64 11624}
!575 = !{i64 11632}
!576 = !{i64 11648}
!577 = !{i64 11660}
!578 = !{i64 11664}
!579 = !{i64 11668}
!580 = !{i64 11672}
!581 = !{i64 11684}
!582 = !{i64 11688}
!583 = !{i64 11700}
!584 = !{i64 11708}
!585 = !{i64 11728}
!586 = !{i64 11756}
!587 = !{i64 11764}
!588 = !{i64 11768}
!589 = !{i64 11784}
!590 = !{i64 11788}
!591 = !{i64 11808}
!592 = !{i64 11812}
!593 = !{i64 11832}
!594 = !{i64 11836}
!595 = !{i64 11860}
!596 = !{i64 11864}
!597 = !{i64 11876}
!598 = !{i64 11884}
!599 = !{i64 11888}
!600 = !{i64 11892}
!601 = !{i64 11896}
!602 = !{i64 11900}
!603 = !{i64 11908}
!604 = !{i64 11916}
!605 = !{i64 11928}
!606 = !{i64 11944}
!607 = !{i64 11952}
!608 = !{i64 11960}
!609 = !{i64 11972}
!610 = !{i64 11984}
!611 = !{i64 11992}
!612 = !{i64 11996}
!613 = !{i64 12008}
!614 = !{i64 12012}
!615 = !{i64 12020}
!616 = !{i64 12024}
!617 = !{i64 12036}
!618 = !{i64 12040}
!619 = !{i64 12044}
!620 = !{i64 12068}
!621 = !{i64 12076}
!622 = !{i64 12088}
!623 = !{i64 12120}
!624 = !{i64 12100}
!625 = !{i64 12124}
!626 = !{i64 12128}
!627 = !{i64 12136}
!628 = !{i64 12160}
!629 = !{i64 12164}
!630 = !{i64 12168}
!631 = !{i64 12176}
!632 = !{i64 12180}
!633 = !{i64 12184}
!634 = !{i64 12192}
!635 = !{i64 12212}
!636 = !{i64 12220}
!637 = !{i64 12236}
!638 = !{i64 12240}
!639 = !{i64 12248}
!640 = !{i64 12256}
!641 = !{i64 12268}
!642 = !{i64 12280}
!643 = !{i64 12288}
!644 = !{i64 12304}
!645 = !{i64 12336}
!646 = !{i64 12340}
!647 = !{i64 12348}
!648 = !{i64 12352}
!649 = !{i64 12356}
!650 = !{i64 12364}
!651 = !{i64 12368}
!652 = !{i64 12372}
!653 = !{i64 12384}
!654 = !{i64 12404}
!655 = !{i64 12412}
!656 = !{i64 12416}
!657 = !{i64 12436}
!658 = !{i64 12444}
!659 = !{i64 12448}
!660 = !{i64 12460}
!661 = !{i64 12468}
!662 = !{i64 12480}
!663 = !{i64 12484}
!664 = !{i64 12492}
!665 = !{i64 12508}
!666 = !{i64 12544}
!667 = !{i64 12548}
!668 = !{i64 12552}
!669 = !{i64 12572}
!670 = !{i64 12576}
!671 = !{i64 12584}
!672 = !{i64 12604}
!673 = !{i64 12620}
!674 = !{i64 12628}
!675 = !{i64 12632}
!676 = !{i64 12636}
!677 = !{i64 12644}
!678 = !{i64 12648}
!679 = !{i64 12672}
!680 = !{i64 12660}
!681 = !{i64 12668}
!682 = !{i64 12676}
!683 = !{i64 12680}
!684 = !{i64 12684}
!685 = !{i64 12688}
!686 = !{i64 12692}
!687 = !{i64 12696}
!688 = !{i64 12700}
!689 = !{i64 12704}
!690 = !{i64 12708}
!691 = !{i64 12716}
!692 = !{i64 12728}
!693 = !{i64 12736}
!694 = !{i64 12744}
!695 = !{i64 12756}
!696 = !{i64 12760}
!697 = !{i64 12752}
!698 = !{i64 12784}
!699 = !{i64 12792}
!700 = !{i64 12804}
!701 = !{i64 12824}
!702 = !{i64 12828}
!703 = !{i64 12836}
!704 = !{i64 12840}
!705 = !{i64 12844}
!706 = !{i64 12848}
!707 = !{i64 12856}
!708 = !{i64 12864}
!709 = !{i64 12872}
!710 = !{i64 12888}
!711 = !{i64 12920}
!712 = !{i64 12936}
!713 = !{i64 12944}
!714 = !{i64 12964}
!715 = !{i64 12968}
!716 = !{i64 12988}
!717 = !{i64 12992}
!718 = !{i64 13012}
!719 = !{i64 13016}
!720 = !{i64 13036}
!721 = !{i64 13040}
!722 = !{i64 13060}
!723 = !{i64 13064}
!724 = !{i64 13084}
!725 = !{i64 13088}
!726 = !{i64 13108}
!727 = !{i64 13116}
!728 = !{i64 13128}
!729 = !{i64 13132}
!730 = !{i64 13136}
!731 = !{i64 13148}
!732 = !{i64 13152}
!733 = !{i64 13160}
!734 = !{i64 13164}
!735 = !{i64 13168}
!736 = !{i64 13172}
!737 = !{i64 13176}
!738 = !{i64 13180}
!739 = !{i64 13188}
!740 = !{i64 13192}
!741 = !{i64 13196}
!742 = !{i64 13200}
!743 = !{i64 13216}
!744 = !{i64 13224}
!745 = !{i64 13228}
!746 = !{i64 13248}
!747 = !{i64 13232}
!748 = !{i64 13236}
!749 = !{i64 13252}
!750 = !{i64 13256}
!751 = !{i64 13244}
!752 = !{i64 13260}
!753 = !{i64 13280}
