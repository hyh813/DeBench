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
@global_var_14ff0 = local_unnamed_addr global i64 6080
@global_var_15010 = global i64 0
@global_var_14fd0 = local_unnamed_addr global i64 0
@global_var_14ff8 = local_unnamed_addr global i64 0
@global_var_1934 = local_unnamed_addr constant i64 4107355841630306336
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
@global_var_3ae0 = local_unnamed_addr constant i64 8589934593
@global_var_3ae8 = local_unnamed_addr constant i64 3
@global_var_3af8 = local_unnamed_addr constant i64 4
@global_var_3af0 = local_unnamed_addr constant i64 8589934593
@global_var_3680 = constant [21 x i8] c"Value: %d, Name: %s\0A\00"
@global_var_3698 = constant [5 x i8] c"Test\00"
@global_var_36a0 = constant [6 x i8] c"%d,%d\00"
@global_var_36a8 = constant [8 x i8] c"123,456\00"
@global_var_36b8 = constant [12 x i8] c"/etc/passwd\00"
@global_var_1fc0 = local_unnamed_addr constant [3 x i8] c"`\08\00"
@global_var_36d0 = constant [19 x i8] c"BinBench Test Data\00"
@global_var_20c0 = local_unnamed_addr constant i64 -6250622504361000928
@global_var_36e8 = constant [23 x i8] c"/tmp/binbench_test.tmp\00"
@global_var_38a8 = local_unnamed_addr constant [10 x i8] c"/bin/true\00"
@global_var_38b8 = constant [10 x i8] c"HelloPipe\00"
@global_var_290c = local_unnamed_addr constant i64 -486375621140676512
@global_var_2920 = local_unnamed_addr constant i64 -486375621140676576
@global_var_2934 = local_unnamed_addr constant i64 -486375621140676544
@global_var_38c8 = constant [18 x i8] c"/tmp/binbench_shm\00"
@global_var_38e0 = local_unnamed_addr constant [13 x i8] c"SharedMemory\00"
@global_var_38e5 = local_unnamed_addr constant [8 x i8] c"dMemory\00"
@global_var_3b10 = local_unnamed_addr constant i64 20
@global_var_2fa0 = local_unnamed_addr constant i64 -6250622504361000928
@global_var_2fe0 = local_unnamed_addr constant [3 x i8] c"Zc\00"
@global_var_39f0 = constant [10 x i8] c"Thread-%d\00"
@0 = external global i32
@global_var_150c8 = local_unnamed_addr global i32 0
@global_var_3e8 = global i32 0
@1 = internal constant [2 x i8] c"r\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i64 0, i64 0)
@3 = internal constant [3 x i8] c"w+\00"
@4 = constant i8* getelementptr inbounds ([3 x i8], [3 x i8]* @3, i64 0, i64 0)
@5 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\87\E5\87\86\E5\BA\93\E5\87\BD\E6\95\B0\E8\B0\83\E7\94\A8 ===\00"
@global_var_3700 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @5, i64 0, i64 0)
@6 = internal constant [27 x i8] c"LIB-L1-01: %d (\E6\9C\9F\E6\9C\9B: 8)\0A\00"
@global_var_3728 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @6, i64 0, i64 0)
@7 = internal constant [27 x i8] c"LIB-L1-02: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_3748 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @7, i64 0, i64 0)
@8 = internal constant [28 x i8] c"LIB-L1-03: %d (\E6\9C\9F\E6\9C\9B: 12)\0A\00"
@global_var_3768 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i64 0, i64 0)
@9 = internal constant [28 x i8] c"LIB-L1-04: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_3788 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"LIB-L1-05: %d (\E6\9C\9F\E6\9C\9B: -1)\0A\00"
@global_var_37a8 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"LIB-L1-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_37c8 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [29 x i8] c"LIB-L1-07: %d (\E6\9C\9F\E6\9C\9B: 579)\0A\00"
@global_var_37e8 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i64 0, i64 0)
@13 = internal constant [28 x i8] c"LIB-L1-08: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3808 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @13, i64 0, i64 0)
@14 = internal constant [28 x i8] c"LIB-L1-09: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3828 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @14, i64 0, i64 0)
@15 = internal constant [28 x i8] c"LIB-L1-10: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_3848 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @15, i64 0, i64 0)
@16 = internal constant [27 x i8] c"LIB-L1-11: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_3868 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @16, i64 0, i64 0)
@17 = internal constant [28 x i8] c"LIB-L1-12: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_3888 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i64 0, i64 0)
@global_var_3b6 = global i32 0
@global_var_1000 = global i64* (i64*)* inttoptr (i64 120259085314 to i64* (i64*)*)
@global_var_7d0 = global i32 185
@18 = internal constant [27 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\B3\BB\E7\BB\9F\E8\B0\83\E7\94\A8 ===\00"
@global_var_38f0 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @18, i64 0, i64 0)
@19 = internal constant [28 x i8] c"SYS-L3-01: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3910 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @19, i64 0, i64 0)
@20 = internal constant [28 x i8] c"SYS-L3-02: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3930 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @20, i64 0, i64 0)
@21 = internal constant [28 x i8] c"SYS-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3950 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @21, i64 0, i64 0)
@22 = internal constant [28 x i8] c"SYS-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3970 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @22, i64 0, i64 0)
@23 = internal constant [28 x i8] c"SYS-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3990 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @23, i64 0, i64 0)
@24 = internal constant [28 x i8] c"SYS-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_39b0 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @24, i64 0, i64 0)
@25 = internal constant [28 x i8] c"SYS-L3-07: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_39d0 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @25, i64 0, i64 0)
@global_var_3b00 = local_unnamed_addr constant fp128 0xL00000000000000003BED0000000A0000
@26 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\BA\BF\E7\A8\8B\E4\B8\8E\E5\B9\B6\E5\8F\91 ===\00"
@global_var_3a00 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @26, i64 0, i64 0)
@27 = internal constant [28 x i8] c"THR-L3-01: %d (\E6\9C\9F\E6\9C\9B: 49)\0A\00"
@global_var_3a20 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @27, i64 0, i64 0)
@28 = internal constant [29 x i8] c"THR-L3-02: %d (\E6\9C\9F\E6\9C\9B: 465)\0A\00"
@global_var_3a40 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @28, i64 0, i64 0)
@29 = internal constant [28 x i8] c"THR-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3a60 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @29, i64 0, i64 0)
@30 = internal constant [28 x i8] c"THR-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3a80 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @30, i64 0, i64 0)
@31 = internal constant [28 x i8] c"THR-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3aa0 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @31, i64 0, i64 0)
@32 = internal constant [28 x i8] c"THR-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3ac0 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @32, i64 0, i64 0)
@global_var_36b0 = constant [2 x i8] c"r\00"
@global_var_36c8 = constant [3 x i8] c"w+\00"

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

define i8* @function_1480(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_1480:
  %0 = call i8* @stpcpy(i8* %dest, i8* %src), !insn.addr !14
  ret i8* %0, !insn.addr !14
}

define i32 @function_1490(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_1490:
  %0 = call i32 @fileno(%_IO_FILE* %stream), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define void (i32)* @function_14a0(i32 %sig, void (i32)* %handler) local_unnamed_addr {
dec_label_pc_14a0:
  %0 = call void (i32)* @signal(i32 %sig, void (i32)* %handler), !insn.addr !16
  ret void (i32)* %0, !insn.addr !16
}

define i32 @function_14b0(i8* %s, i32 %n, i32 %flag, i32 %slen, i8* %format, ...) local_unnamed_addr {
dec_label_pc_14b0:
  %0 = call i32 (i8*, i32, i32, i32, i8*, ...) @__snprintf_chk(i8* %s, i32 %n, i32 %flag, i32 %slen, i8* %format), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i32 @function_14c0(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_14c0:
  %0 = call i32 @fclose(%_IO_FILE* %stream), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define %_IO_FILE* @function_14d0(i8* %filename, i8* %modes) local_unnamed_addr {
dec_label_pc_14d0:
  %0 = call %_IO_FILE* @fopen(i8* %filename, i8* %modes), !insn.addr !19
  ret %_IO_FILE* %0, !insn.addr !19
}

define i64* @function_14e0(i32 %size) local_unnamed_addr {
dec_label_pc_14e0:
  %0 = call i64* @malloc(i32 %size), !insn.addr !20
  ret i64* %0, !insn.addr !20
}

define i32 @function_14f0(i32 %fd, i32 %level, i32 %optname, i64* %optval, i32 %optlen) local_unnamed_addr {
dec_label_pc_14f0:
  %0 = call i32 @setsockopt(i32 %fd, i32 %level, i32 %optname, i64* %optval, i32 %optlen), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define i32 @function_1500(i8* %file, i32 %oflag, ...) local_unnamed_addr {
dec_label_pc_1500:
  %0 = call i32 (i8*, i32, ...) @open(i8* %file, i32 %oflag), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define i32 @function_1510(i64* %cond) local_unnamed_addr {
dec_label_pc_1510:
  %0 = call i32 @pthread_cond_signal(i64* %cond), !insn.addr !23
  ret i32 %0, !insn.addr !23
}

define i32 @function_1520(i32 %flag, i8* %format, ...) local_unnamed_addr {
dec_label_pc_1520:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 %flag, i8* %format), !insn.addr !24
  ret i32 %0, !insn.addr !24
}

define i64* @function_1530(i64* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_1530:
  %0 = call i64* @memset(i64* %s, i32 %c, i32 %n), !insn.addr !25
  ret i64* %0, !insn.addr !25
}

define i64* @function_1540(i32 %shmid, i64* %shmaddr, i32 %shmflg) local_unnamed_addr {
dec_label_pc_1540:
  %0 = call i64* @shmat(i32 %shmid, i64* %shmaddr, i32 %shmflg), !insn.addr !26
  ret i64* %0, !insn.addr !26
}

define i32 @function_1550(i32 %seconds) local_unnamed_addr {
dec_label_pc_1550:
  %0 = call i32 @sleep(i32 %seconds), !insn.addr !27
  ret i32 %0, !insn.addr !27
}

define void @function_1560(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_1560:
  call void @rewind(%_IO_FILE* %stream), !insn.addr !28
  ret void, !insn.addr !28
}

define void @function_1570() local_unnamed_addr {
dec_label_pc_1570:
  call void @__stack_chk_fail(), !insn.addr !29
  ret void, !insn.addr !29
}

define i32 @function_1580(i32 %fd) local_unnamed_addr {
dec_label_pc_1580:
  %0 = call i32 @close(i32 %fd), !insn.addr !30
  ret i32 %0, !insn.addr !30
}

define void @function_1590() local_unnamed_addr {
dec_label_pc_1590:
  call void @__gmon_start__(), !insn.addr !31
  ret void, !insn.addr !31
}

define i32 @function_15a0(i8* %file, %stat* %buf) local_unnamed_addr {
dec_label_pc_15a0:
  %0 = call i32 @stat(i8* %file, %stat* %buf), !insn.addr !32
  ret i32 %0, !insn.addr !32
}

define i32 @function_15b0(i32 %fd, i64* %buf, i32 %n) local_unnamed_addr {
dec_label_pc_15b0:
  %0 = call i32 @write(i32 %fd, i64* %buf, i32 %n), !insn.addr !33
  ret i32 %0, !insn.addr !33
}

define i32 @function_15c0(i32 %type) local_unnamed_addr {
dec_label_pc_15c0:
  %0 = call i32 @__getauxval(i32 %type), !insn.addr !34
  ret i32 %0, !insn.addr !34
}

define void @function_15d0() local_unnamed_addr {
dec_label_pc_15d0:
  call void @abort(), !insn.addr !35
  ret void, !insn.addr !35
}

define i32 @function_15e0(i8* %s) local_unnamed_addr {
dec_label_pc_15e0:
  %0 = call i32 @puts(i8* %s), !insn.addr !36
  ret i32 %0, !insn.addr !36
}

define i32 @function_15f0(i64* %s1, i64* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_15f0:
  %0 = call i32 @memcmp(i64* %s1, i64* %s2, i32 %n), !insn.addr !37
  ret i32 %0, !insn.addr !37
}

define i32 @function_1600(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_1600:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !38
  ret i32 %0, !insn.addr !38
}

define i32 @function_1610(i32 %shmid, i32 %cmd, %shmid_ds* %buf) local_unnamed_addr {
dec_label_pc_1610:
  %0 = call i32 @shmctl(i32 %shmid, i32 %cmd, %shmid_ds* %buf), !insn.addr !39
  ret i32 %0, !insn.addr !39
}

define i32 @function_1620(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_1620:
  %0 = call i32 @fread(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream), !insn.addr !40
  ret i32 %0, !insn.addr !40
}

define i32 @function_1630(i8* %pathname, i32 %proj_id) local_unnamed_addr {
dec_label_pc_1630:
  %0 = call i32 @ftok(i8* %pathname, i32 %proj_id), !insn.addr !41
  ret i32 %0, !insn.addr !41
}

define void @function_1640(i64* %ptr) local_unnamed_addr {
dec_label_pc_1640:
  call void @free(i64* %ptr), !insn.addr !42
  ret void, !insn.addr !42
}

define i32 @function_1650(i32 %key, i32 %size, i32 %shmflg) local_unnamed_addr {
dec_label_pc_1650:
  %0 = call i32 @shmget(i32 %key, i32 %size, i32 %shmflg), !insn.addr !43
  ret i32 %0, !insn.addr !43
}

define i32 @function_1660(i64* %cond, i64* %mutex) local_unnamed_addr {
dec_label_pc_1660:
  %0 = call i32 @pthread_cond_wait(i64* %cond, i64* %mutex), !insn.addr !44
  ret i32 %0, !insn.addr !44
}

define i8* @function_1670(i8* %s, i32 %c) local_unnamed_addr {
dec_label_pc_1670:
  %0 = call i8* @strchr(i8* %s, i32 %c), !insn.addr !45
  ret i8* %0, !insn.addr !45
}

define i32 @function_1680(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_1680:
  %0 = call i32 @fwrite(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !46
  ret i32 %0, !insn.addr !46
}

define i32 @function_1690(i32* %newthread, i64* %attr, i64* (i64*)* %start_routine, i64* %arg) local_unnamed_addr {
dec_label_pc_1690:
  %0 = call i32 @pthread_create(i32* %newthread, i64* %attr, i64* (i64*)* %start_routine, i64* %arg), !insn.addr !47
  ret i32 %0, !insn.addr !47
}

define i32 @function_16a0(i64 %stat_loc) local_unnamed_addr {
dec_label_pc_16a0:
  %0 = call i32 @wait(i64 %stat_loc), !insn.addr !48
  ret i32 %0, !insn.addr !48
}

define i32 @function_16b0(i32 %domain, i32 %type, i32 %protocol) local_unnamed_addr {
dec_label_pc_16b0:
  %0 = call i32 @socket(i32 %domain, i32 %type, i32 %protocol), !insn.addr !49
  ret i32 %0, !insn.addr !49
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

define i32 @main() local_unnamed_addr {
dec_label_pc_17c0:
  call void @test_standard_library_functions(), !insn.addr !64
  call void @test_system_calls(), !insn.addr !65
  call void @test_thread_concurrency(), !insn.addr !66
  ret i32 0, !insn.addr !67
}

define i64 @init_have_lse_atomics(i64 %arg1) local_unnamed_addr {
dec_label_pc_17e0:
  %0 = call i32 @__getauxval(i32 16), !insn.addr !68
  %1 = call i32 @__asm_ubfx.7(i32 %0, i32 %0, i64 8, i64 1), !insn.addr !69
  %2 = sext i32 %1 to i64, !insn.addr !69
  %3 = trunc i32 %1 to i8, !insn.addr !70
  store i8 %3, i8* bitcast (i32* @global_var_150c8 to i8*), align 4, !insn.addr !70
  ret i64 %2, !insn.addr !71
}

define i64 @_start(i64 %arg1) local_unnamed_addr {
dec_label_pc_1840:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_8 = alloca i64, align 8
  %2 = load i64, i64* @global_var_14ff0, align 8, !insn.addr !72
  %3 = trunc i64 %arg1 to i32, !insn.addr !73
  %4 = bitcast i64* %stack_var_8 to i8**, !insn.addr !73
  %5 = inttoptr i64 %1 to void ()*, !insn.addr !73
  %6 = call i32 @__libc_start_main(i64 %2, i32 %3, i8** nonnull %4, void ()* null, void ()* null, void ()* %5), !insn.addr !73
  call void @abort(), !insn.addr !74
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !74
}

define i64 @call_weak_fn() local_unnamed_addr {
dec_label_pc_1874:
  %0 = load i64, i64* inttoptr (i64 85984 to i64*), align 32, !insn.addr !75
  %1 = icmp eq i64 %0, 0, !insn.addr !76
  br i1 %1, label %dec_label_pc_1884, label %dec_label_pc_1880, !insn.addr !76

dec_label_pc_1880:                                ; preds = %dec_label_pc_1874
  call void @__gmon_start__(), !insn.addr !77
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !77

dec_label_pc_1884:                                ; preds = %dec_label_pc_1874
  ret i64 0, !insn.addr !78
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1890:
  ret i64 ptrtoint (i64* @global_var_15010 to i64), !insn.addr !79
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_18c0:
  ret i64 ptrtoint (i64* @global_var_15010 to i64), !insn.addr !80
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1900:
  %x0.0.reg2mem = alloca i64, !insn.addr !81
  %0 = load i8, i8* bitcast (i64* @global_var_15010 to i8*), align 8, !insn.addr !82
  %1 = zext i8 %0 to i64, !insn.addr !82
  %2 = icmp eq i8 %0, 0, !insn.addr !83
  store i64 %1, i64* %x0.0.reg2mem, !insn.addr !83
  br i1 %2, label %dec_label_pc_1918, label %dec_label_pc_193c, !insn.addr !83

dec_label_pc_1918:                                ; preds = %dec_label_pc_1900
  %3 = load i64, i64* inttoptr (i64 85976 to i64*), align 8, !insn.addr !84
  %4 = icmp eq i64 %3, 0, !insn.addr !85
  br i1 %4, label %dec_label_pc_1930, label %dec_label_pc_1924, !insn.addr !85

dec_label_pc_1924:                                ; preds = %dec_label_pc_1918
  %5 = load i64, i64* inttoptr (i64 add (i64 ptrtoint (i64* @global_var_15000 to i64), i64 8) to i64*), align 8, !insn.addr !86
  %6 = inttoptr i64 %5 to i64*, !insn.addr !87
  call void @__cxa_finalize(i64* %6), !insn.addr !87
  br label %dec_label_pc_1930, !insn.addr !87

dec_label_pc_1930:                                ; preds = %dec_label_pc_1924, %dec_label_pc_1918
  %7 = call i64 @deregister_tm_clones(), !insn.addr !88
  store i8 1, i8* bitcast (i64* @global_var_15010 to i8*), align 8, !insn.addr !89
  store i64 1, i64* %x0.0.reg2mem, !insn.addr !89
  br label %dec_label_pc_193c, !insn.addr !89

dec_label_pc_193c:                                ; preds = %dec_label_pc_1900, %dec_label_pc_1930
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !90

; uselistorder directives
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_193c, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1950:
  %0 = call i64 @register_tm_clones(), !insn.addr !91
  ret i64 %0, !insn.addr !91
}

define void @signal_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_1960:
  store i32 1, i32* @signal_received, align 4, !insn.addr !92
  store i32 %sig, i32* @signal_number, align 4, !insn.addr !93
  ret void, !insn.addr !94
}

define i8* @thread_sum(i8* %arg) local_unnamed_addr {
dec_label_pc_1980:
  %x2.0.reg2mem = alloca i64, !insn.addr !95
  %x1.0.in.reg2mem = alloca i64, !insn.addr !95
  %0 = ptrtoint i8* %arg to i64
  %1 = trunc i64 %0 to i32
  %2 = add i64 %0, 4, !insn.addr !95
  %3 = inttoptr i64 %2 to i32*, !insn.addr !95
  %4 = load i32, i32* %3, align 4, !insn.addr !95
  %5 = add i64 %0, 8, !insn.addr !96
  %6 = inttoptr i64 %5 to i32*, !insn.addr !96
  store i32 0, i32* %6, align 4, !insn.addr !96
  %7 = icmp ult i32 %4, %1, !insn.addr !97
  br i1 %7, label %dec_label_pc_19ac, label %dec_label_pc_1990, !insn.addr !97

dec_label_pc_1990:                                ; preds = %dec_label_pc_1980
  %8 = add i32 %4, 1
  store i64 %0, i64* %x1.0.in.reg2mem, !insn.addr !98
  store i64 0, i64* %x2.0.reg2mem, !insn.addr !98
  br label %dec_label_pc_1998, !insn.addr !98

dec_label_pc_1998:                                ; preds = %dec_label_pc_1998, %dec_label_pc_1990
  %x2.0.reload = load i64, i64* %x2.0.reg2mem
  %x1.0.in.reload = load i64, i64* %x1.0.in.reg2mem
  %x1.0 = and i64 %x1.0.in.reload, 4294967295
  %9 = add nuw nsw i64 %x2.0.reload, %x1.0, !insn.addr !99
  %10 = and i64 %9, 4294967295, !insn.addr !99
  %11 = add nuw nsw i64 %x1.0, 1, !insn.addr !100
  %12 = trunc i64 %11 to i32
  %13 = icmp eq i32 %8, %12, !insn.addr !101
  store i64 %11, i64* %x1.0.in.reg2mem, !insn.addr !101
  store i64 %10, i64* %x2.0.reg2mem, !insn.addr !101
  br i1 %13, label %dec_label_pc_19a8, label %dec_label_pc_1998, !insn.addr !101

dec_label_pc_19a8:                                ; preds = %dec_label_pc_1998
  %14 = trunc i64 %9 to i32, !insn.addr !102
  store i32 %14, i32* %6, align 4, !insn.addr !102
  br label %dec_label_pc_19ac, !insn.addr !102

dec_label_pc_19ac:                                ; preds = %dec_label_pc_19a8, %dec_label_pc_1980
  ret i8* null, !insn.addr !103

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i64 %0, { 0, 3, 2, 1 }
  uselistorder i64* %x1.0.in.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x2.0.reg2mem, { 1, 0, 2 }
}

define i8* @thread_compute(i8* %arg) local_unnamed_addr {
dec_label_pc_19b4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = call i64* @malloc(i32 4), !insn.addr !104
  %4 = mul i32 %2, %2, !insn.addr !105
  %5 = bitcast i64* %3 to i32*, !insn.addr !106
  store i32 %4, i32* %5, align 4, !insn.addr !106
  %6 = bitcast i64* %3 to i8*, !insn.addr !107
  ret i8* %6, !insn.addr !107

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i8* @thread_increment(i8* %arg) local_unnamed_addr {
dec_label_pc_19e4:
  %0 = alloca i64
  %x19.0.reg2mem = alloca i64, !insn.addr !108
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp slt i32 %2, 1, !insn.addr !109
  store i64 0, i64* %x19.0.reg2mem, !insn.addr !109
  br i1 %3, label %dec_label_pc_1a44, label %dec_label_pc_1a10, !insn.addr !109

dec_label_pc_1a10:                                ; preds = %dec_label_pc_19e4, %dec_label_pc_1a10
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  %4 = call i32 @pthread_mutex_lock(i64* bitcast (i32* @counter_mutex to i64*)), !insn.addr !110
  %5 = load i32, i32* @shared_counter, align 4, !insn.addr !111
  %6 = add nuw nsw i64 %x19.0.reload, 1, !insn.addr !112
  %7 = and i64 %6, 4294967295, !insn.addr !112
  %8 = add i32 %5, 1, !insn.addr !113
  store i32 %8, i32* @shared_counter, align 4, !insn.addr !114
  %9 = call i32 @pthread_mutex_unlock(i64* bitcast (i32* @counter_mutex to i64*)), !insn.addr !115
  %10 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !116
  %11 = trunc i64 %6 to i32
  %12 = icmp eq i32 %2, %11, !insn.addr !117
  store i64 %7, i64* %x19.0.reg2mem, !insn.addr !117
  br i1 %12, label %dec_label_pc_1a44, label %dec_label_pc_1a10, !insn.addr !117

dec_label_pc_1a44:                                ; preds = %dec_label_pc_1a10, %dec_label_pc_19e4
  ret i8* null, !insn.addr !118

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i64* %x19.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* bitcast (i32* @counter_mutex to i64*), { 1, 0 }
  uselistorder label %dec_label_pc_1a10, { 1, 0 }
}

define i8* @consumer_thread(i8* %arg) local_unnamed_addr {
dec_label_pc_1a54:
  %0 = call i32 @pthread_mutex_lock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !119
  %1 = load i32, i32* @ready, align 4, !insn.addr !120
  %2 = icmp eq i32 %1, 0, !insn.addr !121
  br i1 %2, label %dec_label_pc_1a88, label %dec_label_pc_1a9c, !insn.addr !121

dec_label_pc_1a88:                                ; preds = %dec_label_pc_1a54, %dec_label_pc_1a88
  %3 = call i32 @pthread_cond_wait(i64* bitcast (i32* @cond to i64*), i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !122
  %4 = load i32, i32* @ready, align 4, !insn.addr !123
  %5 = icmp eq i32 %4, 0, !insn.addr !124
  br i1 %5, label %dec_label_pc_1a88, label %dec_label_pc_1a9c, !insn.addr !124

dec_label_pc_1a9c:                                ; preds = %dec_label_pc_1a88, %dec_label_pc_1a54
  %6 = load i32, i32* @data, align 4, !insn.addr !125
  %7 = call i32 @pthread_mutex_unlock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !126
  %8 = call i64* @malloc(i32 4), !insn.addr !127
  %9 = bitcast i64* %8 to i32*, !insn.addr !128
  store i32 %6, i32* %9, align 4, !insn.addr !128
  %10 = bitcast i64* %8 to i8*, !insn.addr !129
  ret i8* %10, !insn.addr !129

; uselistorder directives
  uselistorder label %dec_label_pc_1a88, { 1, 0 }
}

define i8* @producer_thread(i8* %arg) local_unnamed_addr {
dec_label_pc_1ad0:
  %0 = call i32 @sleep(i32 1), !insn.addr !130
  %1 = call i32 @pthread_mutex_lock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !131
  store i32 1, i32* @ready, align 4, !insn.addr !132
  store i32 42, i32* @data, align 4, !insn.addr !133
  %2 = call i32 @pthread_cond_signal(i64* bitcast (i32* @cond to i64*)), !insn.addr !134
  %3 = call i32 @pthread_mutex_unlock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !135
  ret i8* null, !insn.addr !136

; uselistorder directives
  uselistorder i32 (i64*)* @pthread_mutex_unlock, { 2, 1, 0, 3 }
  uselistorder i64* bitcast (i32* @cond to i64*), { 1, 0 }
  uselistorder i32 (i64*)* @pthread_mutex_lock, { 2, 1, 0, 3 }
  uselistorder i64* bitcast (i32* @cond_mutex to i64*), { 1, 2, 3, 0, 4 }
}

define i8* @thread_atomic_increment(i8* %arg) local_unnamed_addr {
dec_label_pc_1b30:
  %0 = alloca i64
  %x19.0.reg2mem = alloca i64, !insn.addr !137
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp slt i32 %2, 1, !insn.addr !138
  store i64 0, i64* %x19.0.reg2mem, !insn.addr !138
  br i1 %3, label %dec_label_pc_1b8c, label %dec_label_pc_1b60, !insn.addr !138

dec_label_pc_1b60:                                ; preds = %dec_label_pc_1b30, %dec_label_pc_1b60
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  %4 = call i64 @__aarch64_ldadd4_acq_rel(), !insn.addr !139
  %5 = add nuw nsw i64 %x19.0.reload, 1, !insn.addr !140
  %6 = and i64 %5, 4294967295, !insn.addr !140
  %7 = call i64 @__aarch64_cas4_acq_rel(), !insn.addr !141
  %8 = trunc i64 %5 to i32
  %9 = icmp eq i32 %2, %8, !insn.addr !142
  store i64 %6, i64* %x19.0.reg2mem, !insn.addr !142
  br i1 %9, label %dec_label_pc_1b8c, label %dec_label_pc_1b60, !insn.addr !142

dec_label_pc_1b8c:                                ; preds = %dec_label_pc_1b60, %dec_label_pc_1b30
  ret i8* null, !insn.addr !143

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i64* %x19.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1b60, { 1, 0 }
}

define i8* @thread_atomic_load_store(i8* %arg) local_unnamed_addr {
dec_label_pc_1ba0:
  %0 = load i32, i32* @atomic_counter, align 4, !insn.addr !144
  %1 = add i32 %0, 100, !insn.addr !145
  %2 = load i64, i64* bitcast (i32* @atomic_counter to i64*), align 8, !insn.addr !146
  call void @__asm_stlr(i32 %1, i64 %2), !insn.addr !146
  ret i8* null, !insn.addr !147
}

define i8* @thread_tls_test(i8* %arg) local_unnamed_addr {
dec_label_pc_1bc0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = call i64 @__asm_mrs(i64 %2, i64 %1), !insn.addr !148
  %4 = add i64 %3, 16, !insn.addr !149
  %5 = inttoptr i64 %4 to i32*, !insn.addr !150
  %6 = load i32, i32* %5, align 4, !insn.addr !150
  %7 = add i64 %3, 24, !insn.addr !151
  %8 = add i32 %6, 50, !insn.addr !152
  store i32 %8, i32* %5, align 4, !insn.addr !153
  %9 = inttoptr i64 %7 to i8*, !insn.addr !154
  %10 = call i8* @strncpy(i8* %9, i8* %arg, i32 31), !insn.addr !154
  %11 = call i64* @malloc(i32 8), !insn.addr !155
  %12 = ptrtoint i64* %11 to i64, !insn.addr !155
  %13 = bitcast i64* %11 to i32*, !insn.addr !156
  store i32 %6, i32* %13, align 4, !insn.addr !156
  %14 = add i64 %12, 4, !insn.addr !156
  %15 = inttoptr i64 %14 to i32*, !insn.addr !156
  store i32 %8, i32* %15, align 4, !insn.addr !156
  %16 = bitcast i64* %11 to i8*, !insn.addr !157
  ret i8* %16, !insn.addr !157

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @param_strcpy() local_unnamed_addr {
dec_label_pc_1c10:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %2 to i8*, !insn.addr !158
  %4 = inttoptr i64 %1 to i8*, !insn.addr !158
  %5 = call i8* @stpcpy(i8* %3, i8* %4), !insn.addr !158
  %6 = ptrtoint i8* %5 to i64, !insn.addr !158
  %7 = sub i64 %6, %2, !insn.addr !159
  %8 = and i64 %7, 4294967295, !insn.addr !159
  ret i64 %8, !insn.addr !160

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @call_strcpy() local_unnamed_addr {
dec_label_pc_1c34:
  ret i64 8, !insn.addr !161
}

define i64 @param_strcmp(i64 %arg1) local_unnamed_addr {
dec_label_pc_1c40:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %2 to i8*, !insn.addr !162
  %4 = inttoptr i64 %1 to i8*, !insn.addr !162
  %5 = call i32 @strcmp(i8* %3, i8* %4), !insn.addr !162
  %6 = icmp slt i32 %5, 1, !insn.addr !163
  %7 = icmp eq i32 %5, 0
  %8 = select i1 %7, i64 0, i64 4294967295
  %storemerge = select i1 %6, i64 %8, i64 1
  ret i64 %storemerge, !insn.addr !164

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i32 @call_strcmp() local_unnamed_addr {
dec_label_pc_1c60:
  ret i32 0, !insn.addr !165
}

define i64 @param_strlen(i64 %arg1) local_unnamed_addr {
dec_label_pc_1c70:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i8*, !insn.addr !166
  %3 = call i32 @strlen(i8* %2), !insn.addr !166
  %4 = sext i32 %3 to i64, !insn.addr !166
  ret i64 %4, !insn.addr !167
}

define i64 @call_strlen() local_unnamed_addr {
dec_label_pc_1c84:
  ret i64 12, !insn.addr !168
}

define i64 @param_memcpy() local_unnamed_addr {
dec_label_pc_1c90:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = inttoptr i64 %3 to i64*, !insn.addr !169
  %5 = inttoptr i64 %2 to i64*, !insn.addr !169
  %6 = trunc i64 %1 to i32, !insn.addr !169
  %7 = call i64* @memcpy(i64* %4, i64* %5, i32 %6), !insn.addr !169
  %8 = and i64 %1, 4294967295, !insn.addr !170
  ret i64 %8, !insn.addr !171

; uselistorder directives
  uselistorder i64* %0, { 2, 1, 0 }
}

define i64 @call_memcpy() local_unnamed_addr {
dec_label_pc_1cb4:
  ret i64 90, !insn.addr !172
}

define i64 @param_memcmp(i64 %arg1) local_unnamed_addr {
dec_label_pc_1cc0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = inttoptr i64 %3 to i64*, !insn.addr !173
  %5 = inttoptr i64 %2 to i64*, !insn.addr !173
  %6 = trunc i64 %1 to i32, !insn.addr !173
  %7 = call i32 @memcmp(i64* %4, i64* %5, i32 %6), !insn.addr !173
  %8 = icmp slt i32 %7, 1, !insn.addr !174
  %9 = icmp eq i32 %7, 0
  %10 = select i1 %9, i64 0, i64 4294967295
  %storemerge = select i1 %8, i64 %10, i64 1
  ret i64 %storemerge, !insn.addr !175

; uselistorder directives
  uselistorder i32 %7, { 1, 0 }
  uselistorder i64* %0, { 2, 1, 0 }
}

define i32 @call_memcmp() local_unnamed_addr {
dec_label_pc_1ce0:
  %stack_var_-16 = alloca i64, align 8
  %stack_var_-48 = alloca i64, align 8
  %stack_var_-32 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !176
  %1 = inttoptr i64 %0 to i64*, !insn.addr !177
  %2 = load i64, i64* %1, align 8, !insn.addr !177
  store i64 8589934593, i64* %stack_var_-48, align 8, !insn.addr !178
  store i64 8589934593, i64* %stack_var_-32, align 8, !insn.addr !179
  store i64 8589934593, i64* %stack_var_-16, align 8, !insn.addr !180
  %3 = call i32 @memcmp(i64* nonnull %stack_var_-48, i64* nonnull %stack_var_-32, i32 12), !insn.addr !181
  %4 = call i32 @memcmp(i64* nonnull %stack_var_-48, i64* nonnull %stack_var_-16, i32 12), !insn.addr !182
  %5 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !183
  %6 = inttoptr i64 %5 to i64*, !insn.addr !184
  %7 = load i64, i64* %6, align 8, !insn.addr !184
  %8 = icmp eq i64 %2, %7, !insn.addr !185
  br i1 %8, label %dec_label_pc_1d98, label %dec_label_pc_1da8, !insn.addr !185

dec_label_pc_1d98:                                ; preds = %dec_label_pc_1ce0
  %9 = icmp slt i32 %4, 1
  %10 = icmp eq i32 %4, 0, !insn.addr !186
  %11 = icmp ne i1 %10, true, !insn.addr !187
  %12 = sext i1 %11 to i32, !insn.addr !187
  %13 = select i1 %9, i32 %12, i32 1, !insn.addr !188
  %14 = icmp slt i32 %3, 1
  %15 = icmp eq i32 %3, 0, !insn.addr !189
  %16 = icmp ne i1 %15, true, !insn.addr !190
  %17 = sext i1 %16 to i32, !insn.addr !190
  %18 = select i1 %14, i32 %17, i32 1, !insn.addr !191
  %19 = add nsw i32 %13, %18, !insn.addr !192
  ret i32 %19, !insn.addr !193

dec_label_pc_1da8:                                ; preds = %dec_label_pc_1ce0
  call void @__stack_chk_fail(), !insn.addr !194
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !195

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i1 true, { 1, 0 }
  uselistorder i32 (i64*, i64*, i32)* @memcmp, { 1, 0, 2, 3 }
  uselistorder i64 8589934593, { 1, 0, 2, 3, 4 }
}

define i64 @param_printf() local_unnamed_addr {
dec_label_pc_1db0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = and i64 %2, 4294967295, !insn.addr !196
  %4 = inttoptr i64 %1 to i8*, !insn.addr !197
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_3680, i64 0, i64 0), i64 %3, i8* %4), !insn.addr !197
  %6 = sext i32 %5 to i64, !insn.addr !197
  ret i64 %6, !insn.addr !197

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @call_printf() local_unnamed_addr {
dec_label_pc_1dd0:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_3680, i64 0, i64 0), i64 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_3698, i64 0, i64 0)), !insn.addr !198
  %1 = sext i32 %0 to i64, !insn.addr !198
  ret i64 %1, !insn.addr !198
}

define i64 @param_scanf() local_unnamed_addr {
dec_label_pc_1df0:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !199
  %1 = load i64, i64* %0
  %stack_var_-8 = alloca i64, align 8
  %stack_var_-4 = alloca i64, align 8
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !200
  %3 = inttoptr i64 %2 to i64*, !insn.addr !201
  %4 = load i64, i64* %3, align 8, !insn.addr !201
  %5 = inttoptr i64 %1 to i8*, !insn.addr !202
  %6 = call i32 (i8*, i8*, ...) @sscanf(i8* %5, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_36a0, i64 0, i64 0), i64* nonnull %stack_var_-8, i64* nonnull %stack_var_-4), !insn.addr !202
  %7 = icmp eq i32 %6, 2, !insn.addr !203
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !203
  br i1 %7, label %dec_label_pc_1e28, label %dec_label_pc_1e30, !insn.addr !203

dec_label_pc_1e28:                                ; preds = %dec_label_pc_1df0
  %8 = load i64, i64* %stack_var_-8, align 8, !insn.addr !204
  %9 = load i64, i64* %stack_var_-4, align 8, !insn.addr !204
  %10 = add i64 %9, %8, !insn.addr !205
  %11 = and i64 %10, 4294967295, !insn.addr !205
  store i64 %11, i64* %storemerge.reg2mem, !insn.addr !205
  br label %dec_label_pc_1e30, !insn.addr !205

dec_label_pc_1e30:                                ; preds = %dec_label_pc_1df0, %dec_label_pc_1e28
  %12 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !206
  %13 = inttoptr i64 %12 to i64*, !insn.addr !207
  %14 = load i64, i64* %13, align 8, !insn.addr !207
  %15 = icmp eq i64 %4, %14, !insn.addr !208
  br i1 %15, label %dec_label_pc_1e4c, label %dec_label_pc_1e5c, !insn.addr !208

dec_label_pc_1e4c:                                ; preds = %dec_label_pc_1e30
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !209

dec_label_pc_1e5c:                                ; preds = %dec_label_pc_1e30
  call void @__stack_chk_fail(), !insn.addr !210
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !210

; uselistorder directives
  uselistorder i64* %stack_var_-4, { 1, 0 }
  uselistorder i64* %stack_var_-8, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1e30, { 1, 0 }
}

define i64 @call_scanf() local_unnamed_addr {
dec_label_pc_1e60:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !211
  %4 = inttoptr i64 %3 to i64*, !insn.addr !212
  %5 = load i64, i64* %4, align 8, !insn.addr !212
  %6 = call i32 (i8*, i8*, ...) @sscanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_36a8, i64 0, i64 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_36a0, i64 0, i64 0)), !insn.addr !213
  %7 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !214
  %8 = inttoptr i64 %7 to i64*, !insn.addr !215
  %9 = load i64, i64* %8, align 8, !insn.addr !215
  %10 = icmp eq i64 %5, %9, !insn.addr !216
  br i1 %10, label %dec_label_pc_1ec4, label %dec_label_pc_1ed4, !insn.addr !216

dec_label_pc_1ec4:                                ; preds = %dec_label_pc_1e60
  %11 = icmp eq i32 %6, 2, !insn.addr !217
  %12 = add i32 %2, %1
  %narrow = select i1 %11, i32 %12, i32 -1
  %storemerge = zext i32 %narrow to i64
  ret i64 %storemerge, !insn.addr !218

dec_label_pc_1ed4:                                ; preds = %dec_label_pc_1e60
  call void @__stack_chk_fail(), !insn.addr !219
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !220

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i64 @param_fopen_fclose() local_unnamed_addr {
dec_label_pc_1ee0:
  %0 = alloca i64
  %x20.0.reg2mem = alloca i64, !insn.addr !221
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i8*, !insn.addr !222
  %3 = call %_IO_FILE* @fopen(i8* %2, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_36b0, i64 0, i64 0)), !insn.addr !222
  %4 = icmp eq %_IO_FILE* %3, null, !insn.addr !223
  store i64 4294967295, i64* %x20.0.reg2mem, !insn.addr !223
  br i1 %4, label %dec_label_pc_1f10, label %dec_label_pc_1efc, !insn.addr !223

dec_label_pc_1efc:                                ; preds = %dec_label_pc_1ee0
  %5 = call i32 @fileno(%_IO_FILE* nonnull %3), !insn.addr !224
  %6 = zext i32 %5 to i64, !insn.addr !225
  %7 = call i32 @fclose(%_IO_FILE* nonnull %3), !insn.addr !226
  store i64 %6, i64* %x20.0.reg2mem, !insn.addr !226
  br label %dec_label_pc_1f10, !insn.addr !226

dec_label_pc_1f10:                                ; preds = %dec_label_pc_1ee0, %dec_label_pc_1efc
  %x20.0.reload = load i64, i64* %x20.0.reg2mem
  ret i64 %x20.0.reload, !insn.addr !227

; uselistorder directives
  uselistorder i64* %x20.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1f10, { 1, 0 }
}

define i64 @call_fopen_fclose() local_unnamed_addr {
dec_label_pc_1f30:
  %x0.0.reg2mem = alloca i64, !insn.addr !228
  %0 = call %_IO_FILE* @fopen(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_36b8, i64 0, i64 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_36b0, i64 0, i64 0)), !insn.addr !229
  %1 = icmp eq %_IO_FILE* %0, null, !insn.addr !230
  br i1 %1, label %dec_label_pc_1f80, label %dec_label_pc_1f50, !insn.addr !230

dec_label_pc_1f50:                                ; preds = %dec_label_pc_1f30
  %2 = call i32 @fileno(%_IO_FILE* nonnull %0), !insn.addr !231
  %3 = call i32 @fclose(%_IO_FILE* nonnull %0), !insn.addr !232
  %4 = icmp slt i32 %2, 0, !insn.addr !233
  store i64 42, i64* %x0.0.reg2mem, !insn.addr !233
  br i1 %4, label %dec_label_pc_1f80, label %dec_label_pc_1f74, !insn.addr !233

dec_label_pc_1f74:                                ; preds = %dec_label_pc_1f50, %dec_label_pc_1f80
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !234

dec_label_pc_1f80:                                ; preds = %dec_label_pc_1f50, %dec_label_pc_1f30
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !235
  br label %dec_label_pc_1f74, !insn.addr !235

; uselistorder directives
  uselistorder i64* %x0.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1f74, { 1, 0 }
}

define i32 @param_fread_fwrite(i8* %tmpfile) local_unnamed_addr {
dec_label_pc_1f90:
  %0 = alloca i64
  %1 = alloca i32
  %x0.0.reg2mem = alloca i32, !insn.addr !236
  %2 = load i32, i32* %1
  %3 = load i32, i32* %1
  %4 = load i64, i64* %0
  %stack_var_-32 = alloca i64, align 8
  %5 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !237
  %6 = inttoptr i64 %5 to i64*, !insn.addr !238
  %7 = load i64, i64* %6, align 8, !insn.addr !238
  %8 = call %_IO_FILE* @fopen(i8* %tmpfile, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_36c8, i64 0, i64 0)), !insn.addr !239
  %9 = icmp eq %_IO_FILE* %8, null, !insn.addr !240
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !240
  br i1 %9, label %dec_label_pc_2054, label %dec_label_pc_1fc4, !insn.addr !240

dec_label_pc_1fc4:                                ; preds = %dec_label_pc_1f90
  %10 = call i32 @fwrite(i64* bitcast ([19 x i8]* @global_var_36d0 to i64*), i32 1, i32 18, %_IO_FILE* nonnull %8), !insn.addr !241
  %11 = icmp eq i32 %10, 18, !insn.addr !242
  br i1 %11, label %dec_label_pc_1ff4, label %dec_label_pc_20bc, !insn.addr !242

dec_label_pc_1ff4:                                ; preds = %dec_label_pc_1fc4
  call void @rewind(%_IO_FILE* nonnull %8), !insn.addr !243
  %12 = ptrtoint i64* %stack_var_-32 to i64, !insn.addr !244
  %13 = call i32 @fread(i64* nonnull %stack_var_-32, i32 1, i32 18, %_IO_FILE* nonnull %8), !insn.addr !245
  %14 = sext i32 %13 to i64, !insn.addr !245
  %15 = add i64 %14, %12, !insn.addr !246
  %16 = inttoptr i64 %15 to i8*, !insn.addr !246
  store i8 0, i8* %16, align 1, !insn.addr !246
  %17 = call i32 @fclose(%_IO_FILE* nonnull %8), !insn.addr !247
  %18 = call i32 @unlink(i8* %tmpfile), !insn.addr !248
  %19 = icmp eq i32 %13, 18, !insn.addr !249
  %20 = load i64, i64* %stack_var_-32, align 8, !insn.addr !250
  %21 = icmp eq i64 %20, 7521977183824144706, !insn.addr !251
  %or.cond = icmp eq i1 %19, %21
  %22 = icmp eq i64 %4, 7008762604619650080, !insn.addr !252
  %or.cond5 = icmp eq i1 %22, %or.cond
  %23 = urem i32 %3, 65536, !insn.addr !253
  %24 = icmp eq i32 %23, 24948, !insn.addr !254
  %or.cond7 = icmp eq i1 %24, %or.cond5
  %25 = urem i32 %2, 256, !insn.addr !255
  %26 = icmp eq i32 %25, 0, !insn.addr !256
  %or.cond9 = icmp eq i1 %26, %or.cond7
  %spec.select = select i1 %or.cond9, i32 42, i32 -3
  store i32 %spec.select, i32* %x0.0.reg2mem
  br label %dec_label_pc_2054

dec_label_pc_2054:                                ; preds = %dec_label_pc_1ff4, %dec_label_pc_1f90, %dec_label_pc_20bc
  %27 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !257
  %28 = inttoptr i64 %27 to i64*, !insn.addr !258
  %29 = load i64, i64* %28, align 8, !insn.addr !258
  %30 = icmp eq i64 %7, %29, !insn.addr !259
  br i1 %30, label %dec_label_pc_2070, label %dec_label_pc_20d4, !insn.addr !259

dec_label_pc_2070:                                ; preds = %dec_label_pc_2054
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !260

dec_label_pc_20bc:                                ; preds = %dec_label_pc_1fc4
  %31 = call i32 @fclose(%_IO_FILE* nonnull %8), !insn.addr !261
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !262
  br label %dec_label_pc_2054, !insn.addr !262

dec_label_pc_20d4:                                ; preds = %dec_label_pc_2054
  call void @__stack_chk_fail(), !insn.addr !263
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !264

; uselistorder directives
  uselistorder %_IO_FILE* %8, { 3, 0, 1, 2, 4, 5 }
  uselistorder i32* %x0.0.reg2mem, { 3, 0, 1, 2 }
  uselistorder i32* %1, { 1, 0 }
  uselistorder i32 18, { 1, 0, 2, 3 }
  uselistorder label %dec_label_pc_2054, { 2, 0, 1 }
}

define i64 @call_fread_fwrite() local_unnamed_addr {
dec_label_pc_20e0:
  %0 = call i32 @param_fread_fwrite(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_36e8, i64 0, i64 0)), !insn.addr !265
  %1 = sext i32 %0 to i64, !insn.addr !265
  ret i64 %1, !insn.addr !265
}

define i64 @param_malloc_free() local_unnamed_addr {
dec_label_pc_20f0:
  %0 = alloca i64
  %x19.0.reg2mem = alloca i64, !insn.addr !266
  %x2.0.reg2mem = alloca i64, !insn.addr !266
  %x1.0.reg2mem = alloca i64, !insn.addr !266
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 4, !insn.addr !267
  %3 = trunc i64 %2 to i32, !insn.addr !268
  %4 = call i64* @malloc(i32 %3), !insn.addr !268
  %5 = icmp eq i64* %4, null, !insn.addr !269
  store i64 4294967295, i64* %x19.0.reg2mem, !insn.addr !269
  br i1 %5, label %dec_label_pc_2140, label %dec_label_pc_2110, !insn.addr !269

dec_label_pc_2110:                                ; preds = %dec_label_pc_20f0
  %6 = ptrtoint i64* %4 to i64, !insn.addr !268
  %7 = add i64 %2, %6, !insn.addr !270
  %8 = icmp eq i64 %1, 0, !insn.addr !271
  store i64 0, i64* %x1.0.reg2mem, !insn.addr !271
  store i64 %6, i64* %x2.0.reg2mem, !insn.addr !271
  br i1 %8, label %dec_label_pc_2130, label %dec_label_pc_2120, !insn.addr !271

dec_label_pc_2120:                                ; preds = %dec_label_pc_2110, %dec_label_pc_2120
  %x2.0.reload = load i64, i64* %x2.0.reg2mem
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %9 = trunc i64 %x1.0.reload to i32, !insn.addr !272
  %10 = inttoptr i64 %x2.0.reload to i32*, !insn.addr !272
  store i32 %9, i32* %10, align 4, !insn.addr !272
  %11 = add i64 %x2.0.reload, 4, !insn.addr !272
  %12 = add nuw nsw i64 %x1.0.reload, 10, !insn.addr !273
  %13 = and i64 %12, 4294967295, !insn.addr !273
  %14 = icmp eq i64 %11, %7, !insn.addr !274
  store i64 %13, i64* %x1.0.reg2mem, !insn.addr !274
  store i64 %11, i64* %x2.0.reg2mem, !insn.addr !274
  br i1 %14, label %dec_label_pc_2130, label %dec_label_pc_2120, !insn.addr !274

dec_label_pc_2130:                                ; preds = %dec_label_pc_2120, %dec_label_pc_2110
  %15 = bitcast i64* %4 to i32*, !insn.addr !275
  %16 = load i32, i32* %15, align 4, !insn.addr !275
  %17 = add i64 %7, -4, !insn.addr !276
  %18 = inttoptr i64 %17 to i32*, !insn.addr !276
  %19 = load i32, i32* %18, align 4, !insn.addr !276
  %20 = add i32 %19, %16, !insn.addr !277
  %21 = zext i32 %20 to i64, !insn.addr !277
  call void @free(i64* nonnull %4), !insn.addr !278
  store i64 %21, i64* %x19.0.reg2mem, !insn.addr !278
  br label %dec_label_pc_2140, !insn.addr !278

dec_label_pc_2140:                                ; preds = %dec_label_pc_20f0, %dec_label_pc_2130
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  ret i64 %x19.0.reload, !insn.addr !279

; uselistorder directives
  uselistorder i64 %x1.0.reload, { 1, 0 }
  uselistorder i64 %7, { 1, 0 }
  uselistorder i64* %4, { 0, 1, 3, 2 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %x1.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x2.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x19.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2140, { 1, 0 }
  uselistorder label %dec_label_pc_2120, { 1, 0 }
}

define i64 @call_malloc_free() local_unnamed_addr {
dec_label_pc_2160:
  %x19.0.reg2mem = alloca i64, !insn.addr !280
  %x2.0.reg2mem = alloca i64, !insn.addr !280
  %x1.0.reg2mem = alloca i64, !insn.addr !280
  %0 = call i64* @malloc(i32 40), !insn.addr !281
  %1 = ptrtoint i64* %0 to i64, !insn.addr !281
  %2 = icmp eq i64* %0, null, !insn.addr !282
  store i64 0, i64* %x1.0.reg2mem, !insn.addr !282
  store i64 %1, i64* %x2.0.reg2mem, !insn.addr !282
  store i64 4294967295, i64* %x19.0.reg2mem, !insn.addr !282
  br i1 %2, label %dec_label_pc_21a0, label %dec_label_pc_2180, !insn.addr !282

dec_label_pc_2180:                                ; preds = %dec_label_pc_2160, %dec_label_pc_2180
  %x2.0.reload = load i64, i64* %x2.0.reg2mem
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %3 = trunc i64 %x1.0.reload to i32, !insn.addr !283
  %4 = inttoptr i64 %x2.0.reload to i32*, !insn.addr !283
  store i32 %3, i32* %4, align 4, !insn.addr !283
  %5 = add i64 %x2.0.reload, 4, !insn.addr !283
  %6 = add nuw nsw i64 %x1.0.reload, 10, !insn.addr !284
  %7 = and i64 %6, 4294967295, !insn.addr !284
  %8 = trunc i64 %6 to i32, !insn.addr !285
  %9 = icmp eq i32 %8, 100, !insn.addr !285
  store i64 %7, i64* %x1.0.reg2mem, !insn.addr !285
  store i64 %5, i64* %x2.0.reg2mem, !insn.addr !285
  br i1 %9, label %dec_label_pc_2190, label %dec_label_pc_2180, !insn.addr !285

dec_label_pc_2190:                                ; preds = %dec_label_pc_2180
  %10 = add i64 %1, 36, !insn.addr !286
  %11 = inttoptr i64 %10 to i32*, !insn.addr !286
  %12 = load i32, i32* %11, align 4, !insn.addr !286
  %13 = bitcast i64* %0 to i32*, !insn.addr !287
  %14 = load i32, i32* %13, align 4, !insn.addr !287
  %15 = add i32 %14, %12, !insn.addr !288
  %16 = zext i32 %15 to i64, !insn.addr !288
  call void @free(i64* nonnull %0), !insn.addr !289
  store i64 %16, i64* %x19.0.reg2mem, !insn.addr !289
  br label %dec_label_pc_21a0, !insn.addr !289

dec_label_pc_21a0:                                ; preds = %dec_label_pc_2160, %dec_label_pc_2190
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  ret i64 %x19.0.reload, !insn.addr !290

; uselistorder directives
  uselistorder i64 %x1.0.reload, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %x1.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x2.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x19.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_21a0, { 1, 0 }
  uselistorder label %dec_label_pc_2180, { 1, 0 }
}

define i64 @param_memset() local_unnamed_addr {
dec_label_pc_21c0:
  %0 = alloca i64
  %merge.reg2mem = alloca i64, !insn.addr !291
  %x3.0.reg2mem = alloca i64, !insn.addr !291
  %x0.0.reg2mem = alloca i64, !insn.addr !291
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %2 to i64*, !insn.addr !292
  %4 = trunc i64 %1 to i32, !insn.addr !292
  %5 = call i64* @memset(i64* %3, i32 0, i32 %4), !insn.addr !292
  %6 = icmp eq i64 %1, 0, !insn.addr !293
  store i64 0, i64* %merge.reg2mem, !insn.addr !293
  br i1 %6, label %dec_label_pc_2200, label %dec_label_pc_21e4, !insn.addr !293

dec_label_pc_21e4:                                ; preds = %dec_label_pc_21c0
  %7 = add i64 %2, %1, !insn.addr !294
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !295
  br label %dec_label_pc_21f0, !insn.addr !295

dec_label_pc_21f0:                                ; preds = %dec_label_pc_21f0, %dec_label_pc_21e4
  %x3.0.reload = load i64, i64* %x3.0.reg2mem
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %8 = inttoptr i64 %x3.0.reload to i8*, !insn.addr !296
  %9 = load i8, i8* %8, align 1, !insn.addr !296
  %10 = zext i8 %9 to i64, !insn.addr !296
  %11 = add i64 %x3.0.reload, 1, !insn.addr !296
  %12 = add nuw nsw i64 %x0.0.reload, %10, !insn.addr !297
  %13 = and i64 %12, 4294967295, !insn.addr !297
  %14 = icmp eq i64 %11, %7, !insn.addr !298
  store i64 %13, i64* %x0.0.reg2mem, !insn.addr !298
  store i64 %11, i64* %x3.0.reg2mem, !insn.addr !298
  store i64 %13, i64* %merge.reg2mem, !insn.addr !298
  br i1 %14, label %dec_label_pc_2200, label %dec_label_pc_21f0, !insn.addr !298

dec_label_pc_2200:                                ; preds = %dec_label_pc_21f0, %dec_label_pc_21c0
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !299

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 2, 0, 1 }
  uselistorder i64* %x0.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x3.0.reg2mem, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i32 @call_memset() local_unnamed_addr {
dec_label_pc_2220:
  ret i32 0, !insn.addr !300
}

define i64 @param_strchr_strstr() local_unnamed_addr {
dec_label_pc_2230:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = trunc i64 %2 to i32, !insn.addr !301
  %5 = urem i32 %4, 256, !insn.addr !301
  %6 = inttoptr i64 %3 to i8*, !insn.addr !302
  %7 = call i8* @strchr(i8* %6, i32 %5), !insn.addr !302
  %8 = ptrtoint i8* %7 to i64, !insn.addr !302
  %9 = icmp eq i8* %7, null, !insn.addr !303
  %10 = sub i64 %8, %3, !insn.addr !304
  %11 = select i1 %9, i64 4294967295, i64 %10, !insn.addr !305
  %12 = inttoptr i64 %1 to i8*, !insn.addr !306
  %13 = call i8* @strstr(i8* %6, i8* %12), !insn.addr !306
  %14 = ptrtoint i8* %13 to i64, !insn.addr !306
  %15 = sub i64 %14, %3, !insn.addr !307
  %16 = icmp eq i8* %13, null, !insn.addr !308
  %17 = select i1 %16, i64 4294967295, i64 %15, !insn.addr !309
  %18 = add i64 %17, %11, !insn.addr !310
  %19 = and i64 %18, 4294967295, !insn.addr !310
  ret i64 %19, !insn.addr !311

; uselistorder directives
  uselistorder i64 %3, { 1, 0, 2 }
  uselistorder i64* %0, { 2, 1, 0 }
}

define i64 @call_strchr_strstr() local_unnamed_addr {
dec_label_pc_2290:
  ret i64 15, !insn.addr !312
}

define void @test_standard_library_functions() local_unnamed_addr {
dec_label_pc_22a0:
  %x2.0.reg2mem = alloca i64, !insn.addr !313
  %x1.0.reg2mem = alloca i64, !insn.addr !313
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !314
  %1 = inttoptr i64 %0 to i64*, !insn.addr !315
  %2 = load i64, i64* %1, align 8, !insn.addr !315
  %3 = call i32 @puts(i8* bitcast (i8** @global_var_3700 to i8*)), !insn.addr !316
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3728 to i8*)), !insn.addr !317
  %5 = call i32 @call_strcmp(), !insn.addr !318
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3748 to i8*)), !insn.addr !319
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3768 to i8*)), !insn.addr !320
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3788 to i8*)), !insn.addr !321
  %9 = call i32 @call_memcmp(), !insn.addr !322
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_37a8 to i8*)), !insn.addr !323
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_3680, i64 0, i64 0), i64 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_3698, i64 0, i64 0)), !insn.addr !324
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_37c8 to i8*)), !insn.addr !325
  %13 = call i32 (i8*, i8*, ...) @sscanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_36a8, i64 0, i64 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_36a0, i64 0, i64 0)), !insn.addr !326
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_37e8 to i8*)), !insn.addr !327
  %15 = call %_IO_FILE* @fopen(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_36b8, i64 0, i64 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_36b0, i64 0, i64 0)), !insn.addr !328
  %16 = icmp eq %_IO_FILE* %15, null, !insn.addr !329
  br i1 %16, label %dec_label_pc_23d8, label %dec_label_pc_23c0, !insn.addr !329

dec_label_pc_23c0:                                ; preds = %dec_label_pc_22a0
  %17 = call i32 @fileno(%_IO_FILE* nonnull %15), !insn.addr !330
  %18 = call i32 @fclose(%_IO_FILE* nonnull %15), !insn.addr !331
  br label %dec_label_pc_23d8

dec_label_pc_23d8:                                ; preds = %dec_label_pc_23c0, %dec_label_pc_22a0
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3808 to i8*)), !insn.addr !332
  %20 = call i32 @param_fread_fwrite(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_36e8, i64 0, i64 0)), !insn.addr !333
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3828 to i8*)), !insn.addr !334
  %22 = call i64* @malloc(i32 40), !insn.addr !335
  %23 = icmp eq i64* %22, null, !insn.addr !336
  br i1 %23, label %dec_label_pc_24b8, label %dec_label_pc_2414, !insn.addr !336

dec_label_pc_2414:                                ; preds = %dec_label_pc_23d8
  %24 = ptrtoint i64* %22 to i64, !insn.addr !335
  store i64 0, i64* %x1.0.reg2mem, !insn.addr !337
  store i64 %24, i64* %x2.0.reg2mem, !insn.addr !337
  br label %dec_label_pc_2420, !insn.addr !337

dec_label_pc_2420:                                ; preds = %dec_label_pc_2420, %dec_label_pc_2414
  %x2.0.reload = load i64, i64* %x2.0.reg2mem
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %25 = trunc i64 %x1.0.reload to i32, !insn.addr !338
  %26 = inttoptr i64 %x2.0.reload to i32*, !insn.addr !338
  store i32 %25, i32* %26, align 4, !insn.addr !338
  %27 = add i64 %x2.0.reload, 4, !insn.addr !338
  %28 = add nuw nsw i64 %x1.0.reload, 10, !insn.addr !339
  %29 = and i64 %28, 4294967295, !insn.addr !339
  %30 = trunc i64 %28 to i32, !insn.addr !340
  %31 = icmp eq i32 %30, 100, !insn.addr !340
  store i64 %29, i64* %x1.0.reg2mem, !insn.addr !340
  store i64 %27, i64* %x2.0.reg2mem, !insn.addr !340
  br i1 %31, label %dec_label_pc_2430, label %dec_label_pc_2420, !insn.addr !340

dec_label_pc_2430:                                ; preds = %dec_label_pc_2420
  call void @free(i64* nonnull %22), !insn.addr !341
  br label %dec_label_pc_2440, !insn.addr !341

dec_label_pc_2440:                                ; preds = %dec_label_pc_24b8, %dec_label_pc_2430
  %32 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3848 to i8*)), !insn.addr !342
  %33 = call i32 @call_memset(), !insn.addr !343
  %34 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3868 to i8*)), !insn.addr !344
  %35 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !345
  %36 = inttoptr i64 %35 to i64*, !insn.addr !346
  %37 = load i64, i64* %36, align 8, !insn.addr !346
  %38 = icmp eq i64 %2, %37, !insn.addr !347
  br i1 %38, label %dec_label_pc_2488, label %dec_label_pc_24b4, !insn.addr !347

dec_label_pc_2488:                                ; preds = %dec_label_pc_2440
  %39 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3888 to i8*)), !insn.addr !348
  ret void, !insn.addr !348

dec_label_pc_24b4:                                ; preds = %dec_label_pc_2440
  call void @__stack_chk_fail(), !insn.addr !349
  br label %dec_label_pc_24b8, !insn.addr !349

dec_label_pc_24b8:                                ; preds = %dec_label_pc_24b4, %dec_label_pc_23d8
  br label %dec_label_pc_2440, !insn.addr !350

; uselistorder directives
  uselistorder i64 %x1.0.reload, { 1, 0 }
  uselistorder i64* %22, { 0, 2, 1 }
  uselistorder i64* %x1.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x2.0.reg2mem, { 1, 0, 2 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 0, 2, 1, 4, 3, 5 }
  uselistorder i32 (%_IO_FILE*)* @fileno, { 0, 2, 1, 3 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 0, 1, 3, 2, 4 }
  uselistorder i32 (i8*, i8*, ...)* @sscanf, { 0, 2, 1, 3 }
}

define i64 @param_linux_syscall() local_unnamed_addr {
dec_label_pc_24c0:
  %0 = call i32 (i32, ...) @syscall(i32 56), !insn.addr !351
  %1 = icmp slt i32 %0, 0, !insn.addr !352
  br i1 %1, label %dec_label_pc_2504, label %dec_label_pc_24e4, !insn.addr !352

dec_label_pc_24e4:                                ; preds = %dec_label_pc_24c0
  %2 = zext i32 %0 to i64
  %3 = call i32 (i32, ...) @syscall(i32 57), !insn.addr !353
  ret i64 %2, !insn.addr !354

dec_label_pc_2504:                                ; preds = %dec_label_pc_24c0
  %4 = call i32* @__errno_location(), !insn.addr !355
  %5 = load i32, i32* %4, align 4, !insn.addr !356
  %6 = sub i32 0, %5, !insn.addr !357
  %7 = zext i32 %6 to i64, !insn.addr !358
  ret i64 %7, !insn.addr !359
}

define i64 @call_linux_syscall(i64 %arg1) local_unnamed_addr {
dec_label_pc_2520:
  %0 = call i32 (i32, ...) @syscall(i32 56), !insn.addr !360
  %1 = icmp slt i32 %0, 0, !insn.addr !361
  br i1 %1, label %dec_label_pc_255c, label %dec_label_pc_2544, !insn.addr !361

dec_label_pc_2544:                                ; preds = %dec_label_pc_2520
  %2 = call i32 (i32, ...) @syscall(i32 57), !insn.addr !362
  ret i64 42, !insn.addr !363

dec_label_pc_255c:                                ; preds = %dec_label_pc_2520
  %3 = call i32* @__errno_location(), !insn.addr !364
  %4 = load i32, i32* %3, align 4, !insn.addr !365
  %5 = icmp slt i32 %4, 1, !insn.addr !366
  %. = select i1 %5, i64 42, i64 4294967295
  ret i64 %., !insn.addr !367
}

define i64 @param_win32_api() local_unnamed_addr {
dec_label_pc_2580:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %stack_var_-128 = alloca i64, align 8
  %3 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !368
  %4 = inttoptr i64 %3 to i64*, !insn.addr !369
  %5 = load i64, i64* %4, align 8, !insn.addr !369
  %6 = inttoptr i64 %1 to i8*, !insn.addr !370
  %7 = bitcast i64* %stack_var_-128 to %stat*, !insn.addr !370
  %8 = call i32 @stat(i8* %6, %stat* nonnull %7), !insn.addr !370
  %9 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !371
  %10 = inttoptr i64 %9 to i64*, !insn.addr !372
  %11 = load i64, i64* %10, align 8, !insn.addr !372
  %12 = icmp eq i64 %5, %11, !insn.addr !373
  br i1 %12, label %dec_label_pc_25d8, label %dec_label_pc_25e8, !insn.addr !373

dec_label_pc_25d8:                                ; preds = %dec_label_pc_2580
  %13 = icmp slt i32 %8, 0, !insn.addr !374
  %14 = icmp slt i64 %2, 1
  %15 = select i1 %14, i64 4294967294, i64 42
  %storemerge = select i1 %13, i64 4294967295, i64 %15
  ret i64 %storemerge, !insn.addr !375

dec_label_pc_25e8:                                ; preds = %dec_label_pc_2580
  call void @__stack_chk_fail(), !insn.addr !376
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !377

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @call_win32_api() local_unnamed_addr {
dec_label_pc_25f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_-128 = alloca i64, align 8
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !378
  %3 = inttoptr i64 %2 to i64*, !insn.addr !379
  %4 = load i64, i64* %3, align 8, !insn.addr !379
  %5 = bitcast i64* %stack_var_-128 to %stat*, !insn.addr !380
  %6 = call i32 @stat(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_36b8, i64 0, i64 0), %stat* nonnull %5), !insn.addr !380
  %7 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !381
  %8 = inttoptr i64 %7 to i64*, !insn.addr !382
  %9 = load i64, i64* %8, align 8, !insn.addr !382
  %10 = icmp eq i64 %4, %9, !insn.addr !383
  br i1 %10, label %dec_label_pc_2650, label %dec_label_pc_2660, !insn.addr !383

dec_label_pc_2650:                                ; preds = %dec_label_pc_25f0
  %11 = icmp slt i32 %6, 0, !insn.addr !384
  %12 = icmp slt i64 %1, 1
  %13 = select i1 %12, i64 4294967294, i64 42
  %storemerge = select i1 %11, i64 4294967295, i64 %13
  ret i64 %storemerge, !insn.addr !385

dec_label_pc_2660:                                ; preds = %dec_label_pc_25f0
  call void @__stack_chk_fail(), !insn.addr !386
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !386
}

define i64 @param_fork_exec() local_unnamed_addr {
dec_label_pc_2664:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !387
  %1 = load i64, i64* %0
  %stack_var_-4 = alloca i32, align 4
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !388
  %3 = inttoptr i64 %2 to i64*, !insn.addr !389
  %4 = load i64, i64* %3, align 8, !insn.addr !389
  %5 = call i32 @fork(), !insn.addr !390
  %6 = icmp slt i32 %5, 0, !insn.addr !391
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !392
  br i1 %6, label %dec_label_pc_26c8, label %dec_label_pc_2698, !insn.addr !392

dec_label_pc_2698:                                ; preds = %dec_label_pc_2664
  %7 = icmp eq i32 %5, 0, !insn.addr !391
  br i1 %7, label %dec_label_pc_26fc, label %dec_label_pc_269c, !insn.addr !393

dec_label_pc_269c:                                ; preds = %dec_label_pc_2698
  %8 = call i32 @waitpid(i32 %5, i32* nonnull %stack_var_-4, i32 0), !insn.addr !394
  %9 = icmp slt i32 %8, 0, !insn.addr !395
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !395
  br i1 %9, label %dec_label_pc_26c8, label %dec_label_pc_26b4, !insn.addr !395

dec_label_pc_26b4:                                ; preds = %dec_label_pc_269c
  %10 = load i32, i32* %stack_var_-4, align 4, !insn.addr !396
  %11 = zext i32 %10 to i64, !insn.addr !396
  %12 = urem i64 %11, 128, !insn.addr !397
  %13 = icmp eq i64 %12, 0, !insn.addr !397
  %14 = call i64 @__asm_ubfx(i64 %11, i64 %11, i64 8, i64 8), !insn.addr !398
  %15 = and i64 %14, 4294967295
  %16 = select i1 %13, i64 %15, i64 4294967293, !insn.addr !399
  store i64 %16, i64* %x0.0.reg2mem, !insn.addr !399
  br label %dec_label_pc_26c8, !insn.addr !399

dec_label_pc_26c8:                                ; preds = %dec_label_pc_2664, %dec_label_pc_26b4, %dec_label_pc_269c
  %17 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !400
  %18 = inttoptr i64 %17 to i64*, !insn.addr !401
  %19 = load i64, i64* %18, align 8, !insn.addr !401
  %20 = icmp eq i64 %4, %19, !insn.addr !402
  br i1 %20, label %dec_label_pc_26e4, label %dec_label_pc_26f8, !insn.addr !402

dec_label_pc_26e4:                                ; preds = %dec_label_pc_26c8
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !403

dec_label_pc_26f8:                                ; preds = %dec_label_pc_26c8
  call void @__stack_chk_fail(), !insn.addr !404
  br label %dec_label_pc_26fc, !insn.addr !404

dec_label_pc_26fc:                                ; preds = %dec_label_pc_26f8, %dec_label_pc_2698
  %21 = inttoptr i64 %1 to i8*, !insn.addr !405
  %22 = call i32 (i8*, i8*, ...) @execl(i8* %21, i8* %21), !insn.addr !405
  call void @_exit(i32 127), !insn.addr !406
  unreachable, !insn.addr !406

; uselistorder directives
  uselistorder i64 %11, { 2, 1, 0 }
  uselistorder i32 %5, { 0, 2, 1 }
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder label %dec_label_pc_26c8, { 1, 2, 0 }
}

define i64 @call_fork_exec(i64 %arg1) local_unnamed_addr {
dec_label_pc_2720:
  %0 = call i64 @param_fork_exec(), !insn.addr !407
  %1 = trunc i64 %0 to i32, !insn.addr !408
  %2 = icmp eq i32 %1, 0, !insn.addr !408
  %. = select i1 %2, i64 42, i64 4294967295
  ret i64 %., !insn.addr !409
}

define i64 @param_pipe_communication() local_unnamed_addr {
dec_label_pc_2750:
  %0 = alloca i32
  %x0.0.reg2mem = alloca i64, !insn.addr !410
  %stack_var_-32 = alloca i64, align 8
  %1 = load i32, i32* %0
  %buffer_-40 = alloca [32 x i8], align 4
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !411
  %3 = ptrtoint [32 x i8]* %buffer_-40 to i64, !insn.addr !412
  %4 = inttoptr i64 %2 to i64*, !insn.addr !413
  %5 = load i64, i64* %4, align 8, !insn.addr !413
  %6 = trunc i64 %3 to i32, !insn.addr !414
  %7 = insertvalue [2 x i32] undef, i32 %6, 0, !insn.addr !414
  %8 = call i32 @pipe([2 x i32] %7), !insn.addr !414
  %9 = icmp slt i32 %8, 0, !insn.addr !415
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !415
  br i1 %9, label %dec_label_pc_2800, label %dec_label_pc_2778, !insn.addr !415

dec_label_pc_2778:                                ; preds = %dec_label_pc_2750
  %10 = call i32 @fork(), !insn.addr !416
  %11 = icmp slt i32 %10, 0, !insn.addr !417
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !418
  br i1 %11, label %dec_label_pc_2800, label %dec_label_pc_2784, !insn.addr !418

dec_label_pc_2784:                                ; preds = %dec_label_pc_2778
  %12 = icmp eq i32 %10, 0, !insn.addr !417
  br i1 %12, label %dec_label_pc_278c, label %dec_label_pc_27b8, !insn.addr !419

dec_label_pc_278c:                                ; preds = %dec_label_pc_2784
  %13 = bitcast [32 x i8]* %buffer_-40 to i32*, !insn.addr !420
  %14 = load i32, i32* %13, align 4, !insn.addr !420
  %15 = call i32 @close(i32 %14), !insn.addr !421
  %16 = call i32 @write(i32 %1, i64* bitcast ([10 x i8]* @global_var_38b8 to i64*), i32 9), !insn.addr !422
  %17 = call i32 @close(i32 %1), !insn.addr !423
  call void @_exit(i32 0), !insn.addr !424
  unreachable, !insn.addr !424

dec_label_pc_27b8:                                ; preds = %dec_label_pc_2784
  %18 = ptrtoint i64* %stack_var_-32 to i64, !insn.addr !425
  %19 = call i32 @close(i32 %1), !insn.addr !426
  %20 = bitcast [32 x i8]* %buffer_-40 to i32*, !insn.addr !427
  %21 = load i32, i32* %20, align 4, !insn.addr !427
  %22 = call i32 @read(i32 %21, i64* nonnull %stack_var_-32, i32 31), !insn.addr !428
  %23 = sext i32 %22 to i64, !insn.addr !428
  %24 = add i64 %23, %18, !insn.addr !429
  %25 = inttoptr i64 %24 to i8*, !insn.addr !429
  store i8 0, i8* %25, align 1, !insn.addr !429
  %26 = load i32, i32* %20, align 4, !insn.addr !430
  %27 = call i32 @close(i32 %26), !insn.addr !431
  %28 = call i32 @wait(i64 0), !insn.addr !432
  %29 = icmp slt i32 %22, 1
  %30 = select i1 %29, i64 4294967293, i64 42, !insn.addr !433
  store i64 %30, i64* %x0.0.reg2mem, !insn.addr !433
  br label %dec_label_pc_2800, !insn.addr !433

dec_label_pc_2800:                                ; preds = %dec_label_pc_2778, %dec_label_pc_2750, %dec_label_pc_27b8
  %31 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !434
  %32 = inttoptr i64 %31 to i64*, !insn.addr !435
  %33 = load i64, i64* %32, align 8, !insn.addr !435
  %34 = icmp eq i64 %5, %33, !insn.addr !436
  br i1 %34, label %dec_label_pc_281c, label %dec_label_pc_2834, !insn.addr !436

dec_label_pc_281c:                                ; preds = %dec_label_pc_2800
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !437

dec_label_pc_2834:                                ; preds = %dec_label_pc_2800
  call void @__stack_chk_fail(), !insn.addr !438
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !439

; uselistorder directives
  uselistorder i32 %10, { 1, 0 }
  uselistorder i64* %x0.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder void (i32)* @_exit, { 1, 0, 2 }
  uselistorder i32 ()* @fork, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2800, { 2, 0, 1 }
}

define i64 @call_pipe_communication() local_unnamed_addr {
dec_label_pc_2840:
  %0 = call i64 @param_pipe_communication(), !insn.addr !440
  ret i64 %0, !insn.addr !440
}

define i64 @param_socket_create() local_unnamed_addr {
dec_label_pc_2844:
  %x0.0.reg2mem = alloca i64, !insn.addr !441
  %stack_var_-16 = alloca i64, align 8
  %stack_var_-20 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !442
  %1 = inttoptr i64 %0 to i64*, !insn.addr !443
  %2 = load i64, i64* %1, align 8, !insn.addr !443
  %3 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !444
  %4 = icmp slt i32 %3, 0, !insn.addr !445
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !445
  br i1 %4, label %dec_label_pc_28d8, label %dec_label_pc_2874, !insn.addr !445

dec_label_pc_2874:                                ; preds = %dec_label_pc_2844
  store i64 1, i64* %stack_var_-20, align 8, !insn.addr !446
  %5 = call i32 @setsockopt(i32 %3, i32 1, i32 2, i64* nonnull %stack_var_-20, i32 4), !insn.addr !447
  %6 = icmp slt i32 %5, 0, !insn.addr !448
  br i1 %6, label %dec_label_pc_2918, label %dec_label_pc_2898, !insn.addr !448

dec_label_pc_2898:                                ; preds = %dec_label_pc_2874
  store i64 2, i64* %stack_var_-16, align 8, !insn.addr !449
  %7 = bitcast i64* %stack_var_-16 to %sockaddr*, !insn.addr !450
  %8 = call i32 @bind(i32 %3, %sockaddr* nonnull %7, i32 16), !insn.addr !450
  %9 = icmp slt i32 %8, 0, !insn.addr !451
  br i1 %9, label %dec_label_pc_292c, label %dec_label_pc_28b8, !insn.addr !451

dec_label_pc_28b8:                                ; preds = %dec_label_pc_2898
  %10 = call i32 @listen(i32 %3, i32 5), !insn.addr !452
  %11 = icmp slt i32 %10, 0, !insn.addr !453
  %12 = call i32 @close(i32 %3)
  %. = select i1 %11, i64 4294967292, i64 42
  store i64 %., i64* %x0.0.reg2mem, !insn.addr !454
  br label %dec_label_pc_28d8, !insn.addr !454

dec_label_pc_28d8:                                ; preds = %dec_label_pc_2844, %dec_label_pc_28b8, %dec_label_pc_292c, %dec_label_pc_2918
  %13 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !455
  %14 = inttoptr i64 %13 to i64*, !insn.addr !456
  %15 = load i64, i64* %14, align 8, !insn.addr !456
  %16 = icmp eq i64 %2, %15, !insn.addr !457
  br i1 %16, label %dec_label_pc_28f4, label %dec_label_pc_2940, !insn.addr !457

dec_label_pc_28f4:                                ; preds = %dec_label_pc_28d8
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !458

dec_label_pc_2918:                                ; preds = %dec_label_pc_2874
  %17 = call i32 @close(i32 %3), !insn.addr !459
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !460
  br label %dec_label_pc_28d8, !insn.addr !460

dec_label_pc_292c:                                ; preds = %dec_label_pc_2898
  %18 = call i32 @close(i32 %3), !insn.addr !461
  store i64 4294967293, i64* %x0.0.reg2mem, !insn.addr !462
  br label %dec_label_pc_28d8, !insn.addr !462

dec_label_pc_2940:                                ; preds = %dec_label_pc_28d8
  call void @__stack_chk_fail(), !insn.addr !463
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !464

; uselistorder directives
  uselistorder i32 %3, { 3, 0, 1, 2, 4, 5, 6 }
  uselistorder i64* %x0.0.reg2mem, { 3, 4, 0, 2, 1 }
  uselistorder label %dec_label_pc_28d8, { 2, 3, 1, 0 }
}

define i64 @call_socket_create() local_unnamed_addr {
dec_label_pc_2950:
  %0 = call i64 @param_socket_create(), !insn.addr !465
  ret i64 %0, !insn.addr !465
}

define i32 @param_shmget_shmat() local_unnamed_addr {
dec_label_pc_2954:
  %x0.0.reg2mem = alloca i32, !insn.addr !466
  %0 = call i32 (i8*, i32, ...) @open(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_38c8, i64 0, i64 0), i32 66), !insn.addr !467
  %1 = icmp slt i32 %0, 0, !insn.addr !468
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !468
  br i1 %1, label %dec_label_pc_29e8, label %dec_label_pc_297c, !insn.addr !468

dec_label_pc_297c:                                ; preds = %dec_label_pc_2954
  %2 = call i32 @close(i32 %0), !insn.addr !469
  %3 = call i32 @ftok(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_38c8, i64 0, i64 0), i32 42), !insn.addr !470
  %4 = icmp slt i32 %3, 0, !insn.addr !471
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !471
  br i1 %4, label %dec_label_pc_29e8, label %dec_label_pc_2990, !insn.addr !471

dec_label_pc_2990:                                ; preds = %dec_label_pc_297c
  %5 = call i32 @shmget(i32 %3, i32 ptrtoint (i64* (i64*)** @global_var_1000 to i32), i32 ptrtoint (i32* @global_var_3b6 to i32)), !insn.addr !472
  %6 = icmp slt i32 %5, 0, !insn.addr !473
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !473
  br i1 %6, label %dec_label_pc_29e8, label %dec_label_pc_29a4, !insn.addr !473

dec_label_pc_29a4:                                ; preds = %dec_label_pc_2990
  %7 = call i64* @shmat(i32 %5, i64* null, i32 0), !insn.addr !474
  %8 = icmp eq i64* %7, inttoptr (i64 -1 to i64*), !insn.addr !475
  store i32 -3, i32* %x0.0.reg2mem, !insn.addr !476
  br i1 %8, label %dec_label_pc_29e8, label %dec_label_pc_29b8, !insn.addr !476

dec_label_pc_29b8:                                ; preds = %dec_label_pc_29a4
  %9 = ptrtoint i64* %7 to i64, !insn.addr !474
  store i64 7299600957910902867, i64* %7, align 8, !insn.addr !477
  %10 = add i64 %9, 5, !insn.addr !478
  %11 = inttoptr i64 %10 to i64*, !insn.addr !478
  store i64 34184295084281188, i64* %11, align 8, !insn.addr !478
  %12 = call i32 @shmdt(i64* %7), !insn.addr !479
  %13 = call i32 @shmctl(i32 %5, i32 0, %shmid_ds* null), !insn.addr !480
  store i32 12, i32* %x0.0.reg2mem, !insn.addr !481
  br label %dec_label_pc_29e8, !insn.addr !481

dec_label_pc_29e8:                                ; preds = %dec_label_pc_29a4, %dec_label_pc_2990, %dec_label_pc_2954, %dec_label_pc_297c, %dec_label_pc_29b8
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !482

; uselistorder directives
  uselistorder i64* %7, { 0, 1, 3, 2 }
  uselistorder i32* %x0.0.reg2mem, { 0, 5, 1, 2, 4, 3 }
  uselistorder i32 (i32)* @close, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder label %dec_label_pc_29e8, { 4, 0, 1, 3, 2 }
}

define i64 @call_shmget_shmat(i64 %arg1) local_unnamed_addr {
dec_label_pc_2a10:
  %0 = call i32 @param_shmget_shmat(), !insn.addr !483
  %1 = icmp sgt i32 %0, 0, !insn.addr !484
  %. = select i1 %1, i64 42, i64 4294967295
  ret i64 %., !insn.addr !485
}

define i64 @param_signal_handling() local_unnamed_addr {
dec_label_pc_2a30:
  %x0.0.reg2mem = alloca i64, !insn.addr !486
  %x19.1.reg2mem = alloca i32, !insn.addr !486
  %x19.0.reg2mem = alloca i32, !insn.addr !486
  %0 = call void (i32)* @signal(i32 10, void (i32)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2400) to void (i32)*)), !insn.addr !487
  %1 = ptrtoint void (i32)* %0 to i64, !insn.addr !487
  %2 = icmp eq void (i32)* %0, inttoptr (i64 -1 to void (i32)*), !insn.addr !488
  store i64 %1, i64* %x0.0.reg2mem, !insn.addr !489
  br i1 %2, label %dec_label_pc_2b24, label %dec_label_pc_2a58, !insn.addr !489

dec_label_pc_2a58:                                ; preds = %dec_label_pc_2a30
  %3 = call void (i32)* @signal(i32 14, void (i32)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2400) to void (i32)*)), !insn.addr !490
  %4 = icmp eq void (i32)* %3, inttoptr (i64 -1 to void (i32)*), !insn.addr !491
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !492
  br i1 %4, label %dec_label_pc_2b24, label %dec_label_pc_2a6c, !insn.addr !492

dec_label_pc_2a6c:                                ; preds = %dec_label_pc_2a58
  store i32 0, i32* @signal_received, align 4, !insn.addr !493
  %5 = call i32 @raise(i32 10), !insn.addr !494
  %6 = load i32, i32* @signal_received, align 4
  %7 = icmp eq i32 %6, 0, !insn.addr !495
  store i32 ptrtoint (i32* @global_var_3e8 to i32), i32* %x19.0.reg2mem, !insn.addr !495
  br i1 %7, label %dec_label_pc_2a90, label %dec_label_pc_2ab0, !insn.addr !495

dec_label_pc_2a90:                                ; preds = %dec_label_pc_2a6c, %dec_label_pc_2a90
  %x19.0.reload = load i32, i32* %x19.0.reg2mem
  %8 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !496
  %9 = load i32, i32* @signal_received, align 4
  %10 = add i32 %x19.0.reload, -1, !insn.addr !497
  %11 = icmp ne i32 %9, 0, !insn.addr !498
  %12 = icmp eq i32 %10, 0, !insn.addr !497
  %or.cond = or i1 %12, %11
  store i32 %10, i32* %x19.0.reg2mem, !insn.addr !498
  br i1 %or.cond, label %dec_label_pc_2aa4, label %dec_label_pc_2a90, !insn.addr !498

dec_label_pc_2aa4:                                ; preds = %dec_label_pc_2a90
  %13 = icmp eq i32 %9, 0, !insn.addr !499
  store i64 4294967293, i64* %x0.0.reg2mem, !insn.addr !499
  br i1 %13, label %dec_label_pc_2b24, label %dec_label_pc_2ab0, !insn.addr !499

dec_label_pc_2ab0:                                ; preds = %dec_label_pc_2a6c, %dec_label_pc_2aa4
  %14 = load i32, i32* @signal_number, align 4, !insn.addr !500
  %15 = icmp eq i32 %14, 10, !insn.addr !501
  store i64 4294967292, i64* %x0.0.reg2mem, !insn.addr !501
  br i1 %15, label %dec_label_pc_2abc, label %dec_label_pc_2b24, !insn.addr !501

dec_label_pc_2abc:                                ; preds = %dec_label_pc_2ab0
  store i32 0, i32* @signal_received, align 4, !insn.addr !502
  %16 = call i32 @alarm(i32 1), !insn.addr !503
  %17 = load i32, i32* @signal_received, align 4
  %18 = icmp eq i32 %17, 0, !insn.addr !504
  store i32 ptrtoint (i32* @global_var_7d0 to i32), i32* %x19.1.reg2mem, !insn.addr !504
  br i1 %18, label %dec_label_pc_2adc, label %dec_label_pc_2afc, !insn.addr !504

dec_label_pc_2adc:                                ; preds = %dec_label_pc_2abc, %dec_label_pc_2adc
  %x19.1.reload = load i32, i32* %x19.1.reg2mem
  %19 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !505
  %20 = load i32, i32* @signal_received, align 4
  %21 = add i32 %x19.1.reload, -1, !insn.addr !506
  %22 = icmp ne i32 %20, 0, !insn.addr !507
  %23 = icmp eq i32 %21, 0, !insn.addr !506
  %or.cond1 = or i1 %23, %22
  store i32 %21, i32* %x19.1.reg2mem, !insn.addr !507
  br i1 %or.cond1, label %dec_label_pc_2af0, label %dec_label_pc_2adc, !insn.addr !507

dec_label_pc_2af0:                                ; preds = %dec_label_pc_2adc
  %24 = icmp eq i32 %20, 0, !insn.addr !508
  store i64 4294967291, i64* %x0.0.reg2mem, !insn.addr !508
  br i1 %24, label %dec_label_pc_2b24, label %dec_label_pc_2afc, !insn.addr !508

dec_label_pc_2afc:                                ; preds = %dec_label_pc_2abc, %dec_label_pc_2af0
  %25 = load i32, i32* @signal_number, align 4, !insn.addr !509
  %26 = icmp eq i32 %25, 14, !insn.addr !510
  store i64 4294967291, i64* %x0.0.reg2mem, !insn.addr !510
  br i1 %26, label %dec_label_pc_2b08, label %dec_label_pc_2b24, !insn.addr !510

dec_label_pc_2b08:                                ; preds = %dec_label_pc_2afc
  %27 = call void (i32)* @signal(i32 10, void (i32)* null), !insn.addr !511
  %28 = call void (i32)* @signal(i32 14, void (i32)* null), !insn.addr !512
  store i64 42, i64* %x0.0.reg2mem, !insn.addr !513
  br label %dec_label_pc_2b24, !insn.addr !513

dec_label_pc_2b24:                                ; preds = %dec_label_pc_2a58, %dec_label_pc_2aa4, %dec_label_pc_2ab0, %dec_label_pc_2af0, %dec_label_pc_2afc, %dec_label_pc_2b08, %dec_label_pc_2a30
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !514

; uselistorder directives
  uselistorder i32* %x19.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %x19.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x0.0.reg2mem, { 0, 6, 5, 4, 3, 2, 1, 7 }
  uselistorder i64 42, { 0, 4, 3, 7, 5, 8, 9, 6, 2, 10, 1, 11 }
  uselistorder i64 4294967291, { 1, 0 }
  uselistorder i32 (i32)* @usleep, { 1, 0, 2, 3 }
  uselistorder i32 14, { 0, 2, 1 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i32 10, { 0, 3, 1, 2 }
  uselistorder label %dec_label_pc_2b24, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder label %dec_label_pc_2afc, { 1, 0 }
  uselistorder label %dec_label_pc_2adc, { 1, 0 }
  uselistorder label %dec_label_pc_2ab0, { 1, 0 }
  uselistorder label %dec_label_pc_2a90, { 1, 0 }
}

define i64 @call_signal_handling() local_unnamed_addr {
dec_label_pc_2b50:
  %0 = call i64 @param_signal_handling(), !insn.addr !515
  ret i64 %0, !insn.addr !515
}

define void @test_system_calls() local_unnamed_addr {
dec_label_pc_2b54:
  %stack_var_-128 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !516
  %1 = inttoptr i64 %0 to i64*, !insn.addr !517
  %2 = load i64, i64* %1, align 8, !insn.addr !517
  %3 = call i32 @puts(i8* bitcast (i8** @global_var_38f0 to i8*)), !insn.addr !518
  %4 = call i32 (i32, ...) @syscall(i32 56), !insn.addr !519
  %5 = icmp slt i32 %4, 0, !insn.addr !520
  br i1 %5, label %dec_label_pc_2ca8, label %dec_label_pc_2b9c, !insn.addr !520

dec_label_pc_2b9c:                                ; preds = %dec_label_pc_2b54
  %6 = call i32 (i32, ...) @syscall(i32 57), !insn.addr !521
  br label %dec_label_pc_2bac, !insn.addr !522

dec_label_pc_2bac:                                ; preds = %dec_label_pc_2ca8, %dec_label_pc_2b9c
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3910 to i8*)), !insn.addr !523
  %8 = bitcast i64* %stack_var_-128 to %stat*, !insn.addr !524
  %9 = call i32 @stat(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_36b8, i64 0, i64 0), %stat* nonnull %8), !insn.addr !524
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3930 to i8*)), !insn.addr !525
  %11 = call i64 @param_fork_exec(), !insn.addr !526
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3950 to i8*)), !insn.addr !527
  %13 = call i64 @param_pipe_communication(), !insn.addr !528
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3970 to i8*)), !insn.addr !529
  %15 = call i64 @param_socket_create(), !insn.addr !530
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3990 to i8*)), !insn.addr !531
  %17 = call i32 @param_shmget_shmat(), !insn.addr !532
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_39b0 to i8*)), !insn.addr !533
  %19 = call i64 @param_signal_handling(), !insn.addr !534
  %20 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !535
  %21 = inttoptr i64 %20 to i64*, !insn.addr !536
  %22 = load i64, i64* %21, align 8, !insn.addr !536
  %23 = icmp eq i64 %2, %22, !insn.addr !537
  br i1 %23, label %dec_label_pc_2c90, label %dec_label_pc_2cc8, !insn.addr !537

dec_label_pc_2c90:                                ; preds = %dec_label_pc_2bac
  %24 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_39d0 to i8*)), !insn.addr !538
  ret void, !insn.addr !538

dec_label_pc_2ca8:                                ; preds = %dec_label_pc_2b54
  %25 = call i32* @__errno_location(), !insn.addr !539
  br label %dec_label_pc_2bac, !insn.addr !540

dec_label_pc_2cc8:                                ; preds = %dec_label_pc_2bac
  call void @__stack_chk_fail(), !insn.addr !541
  ret void, !insn.addr !542

; uselistorder directives
  uselistorder i32* ()* @__errno_location, { 0, 2, 1, 3 }
  uselistorder i32 (i8*, %stat*)* @stat, { 0, 2, 1, 3 }
  uselistorder i32 (i32, ...)* @syscall, { 1, 0, 5, 4, 3, 2, 6 }
}

define i64 @param_pthread_create() local_unnamed_addr {
dec_label_pc_2cd0:
  %0 = alloca i64
  %x19.0.reg2mem = alloca i64, !insn.addr !543
  %1 = load i64, i64* %0
  %stack_var_-8 = alloca i64, align 8
  %stack_var_-16 = alloca i32, align 4
  %stack_var_-20 = alloca i64, align 8
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !544
  %3 = inttoptr i64 %2 to i64*, !insn.addr !545
  %4 = load i64, i64* %3, align 8, !insn.addr !545
  %sext = mul i64 %1, 4294967296
  %5 = ashr exact i64 %sext, 32, !insn.addr !546
  store i64 %5, i64* %stack_var_-20, align 8, !insn.addr !546
  %6 = call i32 @pthread_create(i32* nonnull %stack_var_-16, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2484) to i64* (i64*)*), i64* nonnull %stack_var_-20), !insn.addr !547
  %7 = icmp eq i32 %6, 0, !insn.addr !548
  store i64 4294967295, i64* %x19.0.reg2mem, !insn.addr !548
  br i1 %7, label %dec_label_pc_2d14, label %dec_label_pc_2d2c, !insn.addr !548

dec_label_pc_2d14:                                ; preds = %dec_label_pc_2cd0
  %8 = load i32, i32* %stack_var_-16, align 4, !insn.addr !549
  %9 = bitcast i64* %stack_var_-8 to i64**, !insn.addr !550
  %10 = call i32 @pthread_join(i32 %8, i64** nonnull %9), !insn.addr !550
  %11 = load i64, i64* %stack_var_-8, align 8, !insn.addr !551
  %12 = inttoptr i64 %11 to i32*, !insn.addr !552
  %13 = load i32, i32* %12, align 4, !insn.addr !552
  %14 = zext i32 %13 to i64, !insn.addr !552
  %15 = inttoptr i64 %11 to i64*, !insn.addr !553
  call void @free(i64* %15), !insn.addr !553
  store i64 %14, i64* %x19.0.reg2mem, !insn.addr !553
  br label %dec_label_pc_2d2c, !insn.addr !553

dec_label_pc_2d2c:                                ; preds = %dec_label_pc_2cd0, %dec_label_pc_2d14
  %16 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !554
  %17 = inttoptr i64 %16 to i64*, !insn.addr !555
  %18 = load i64, i64* %17, align 8, !insn.addr !555
  %19 = icmp eq i64 %4, %18, !insn.addr !556
  br i1 %19, label %dec_label_pc_2d48, label %dec_label_pc_2d60, !insn.addr !556

dec_label_pc_2d48:                                ; preds = %dec_label_pc_2d2c
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  ret i64 %x19.0.reload, !insn.addr !557

dec_label_pc_2d60:                                ; preds = %dec_label_pc_2d2c
  call void @__stack_chk_fail(), !insn.addr !558
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !558

; uselistorder directives
  uselistorder i64 %11, { 1, 0 }
  uselistorder i64* %stack_var_-8, { 1, 0 }
  uselistorder i64* %x19.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2d2c, { 1, 0 }
}

define i64 @call_pthread_create() local_unnamed_addr {
dec_label_pc_2d64:
  %x19.0.reg2mem = alloca i64, !insn.addr !559
  %stack_var_-8 = alloca i64, align 8
  %stack_var_-16 = alloca i32, align 4
  %stack_var_-20 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !560
  %1 = inttoptr i64 %0 to i64*, !insn.addr !561
  %2 = load i64, i64* %1, align 8, !insn.addr !561
  store i64 7, i64* %stack_var_-20, align 8, !insn.addr !562
  %3 = call i32 @pthread_create(i32* nonnull %stack_var_-16, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2484) to i64* (i64*)*), i64* nonnull %stack_var_-20), !insn.addr !563
  %4 = icmp eq i32 %3, 0, !insn.addr !564
  store i64 4294967295, i64* %x19.0.reg2mem, !insn.addr !564
  br i1 %4, label %dec_label_pc_2da8, label %dec_label_pc_2dc0, !insn.addr !564

dec_label_pc_2da8:                                ; preds = %dec_label_pc_2d64
  %5 = load i32, i32* %stack_var_-16, align 4, !insn.addr !565
  %6 = bitcast i64* %stack_var_-8 to i64**, !insn.addr !566
  %7 = call i32 @pthread_join(i32 %5, i64** nonnull %6), !insn.addr !566
  %8 = load i64, i64* %stack_var_-8, align 8, !insn.addr !567
  %9 = inttoptr i64 %8 to i32*, !insn.addr !568
  %10 = load i32, i32* %9, align 4, !insn.addr !568
  %11 = zext i32 %10 to i64, !insn.addr !568
  %12 = inttoptr i64 %8 to i64*, !insn.addr !569
  call void @free(i64* %12), !insn.addr !569
  store i64 %11, i64* %x19.0.reg2mem, !insn.addr !569
  br label %dec_label_pc_2dc0, !insn.addr !569

dec_label_pc_2dc0:                                ; preds = %dec_label_pc_2d64, %dec_label_pc_2da8
  %13 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !570
  %14 = inttoptr i64 %13 to i64*, !insn.addr !571
  %15 = load i64, i64* %14, align 8, !insn.addr !571
  %16 = icmp eq i64 %2, %15, !insn.addr !572
  br i1 %16, label %dec_label_pc_2ddc, label %dec_label_pc_2df4, !insn.addr !572

dec_label_pc_2ddc:                                ; preds = %dec_label_pc_2dc0
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  ret i64 %x19.0.reload, !insn.addr !573

dec_label_pc_2df4:                                ; preds = %dec_label_pc_2dc0
  call void @__stack_chk_fail(), !insn.addr !574
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !575

; uselistorder directives
  uselistorder i64 %8, { 1, 0 }
  uselistorder i64* %stack_var_-8, { 1, 0 }
  uselistorder i64* %x19.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2dc0, { 1, 0 }
}

define i64 @param_pthread_join() local_unnamed_addr {
dec_label_pc_2e00:
  %x19.1.reg2mem = alloca i64, !insn.addr !576
  %x22.0.reg2mem = alloca i64, !insn.addr !576
  %x20.1.reg2mem = alloca i64, !insn.addr !576
  %x19.0.reg2mem = alloca i32, !insn.addr !576
  %x23.0.reg2mem = alloca i64, !insn.addr !576
  %x21.0.reg2mem = alloca i64, !insn.addr !576
  %x20.0.reg2mem = alloca i64, !insn.addr !576
  %stack_var_-64 = alloca i64, align 8
  %stack_var_-40 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !577
  %1 = ptrtoint i64* %stack_var_-40 to i64, !insn.addr !578
  %2 = ptrtoint i64* %stack_var_-64 to i64, !insn.addr !579
  %3 = inttoptr i64 %0 to i64*, !insn.addr !580
  %4 = load i64, i64* %3, align 8, !insn.addr !580
  store i64 4294967306, i64* %stack_var_-40, align 8, !insn.addr !581
  store i64 %2, i64* %x20.0.reg2mem, !insn.addr !581
  store i64 %1, i64* %x21.0.reg2mem, !insn.addr !581
  store i64 3, i64* %x23.0.reg2mem, !insn.addr !581
  br label %dec_label_pc_2e64, !insn.addr !581

dec_label_pc_2e64:                                ; preds = %dec_label_pc_2e80, %dec_label_pc_2e00
  %x21.0.reload = load i64, i64* %x21.0.reg2mem
  %x20.0.reload = load i64, i64* %x20.0.reg2mem
  %5 = inttoptr i64 %x20.0.reload to i32*, !insn.addr !582
  %6 = inttoptr i64 %x21.0.reload to i64*, !insn.addr !582
  %7 = call i32 @pthread_create(i32* %5, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2432) to i64* (i64*)*), i64* %6), !insn.addr !582
  %8 = icmp eq i32 %7, 0, !insn.addr !583
  store i64 4294967295, i64* %x19.1.reg2mem, !insn.addr !583
  br i1 %8, label %dec_label_pc_2e80, label %dec_label_pc_2ec0, !insn.addr !583

dec_label_pc_2e80:                                ; preds = %dec_label_pc_2e64
  %x23.0.reload = load i64, i64* %x23.0.reg2mem
  %9 = add i64 %x20.0.reload, 8, !insn.addr !584
  %10 = add i64 %x21.0.reload, 12, !insn.addr !585
  %11 = add nuw nsw i64 %x23.0.reload, 4294967295, !insn.addr !586
  %12 = and i64 %11, 4294967295, !insn.addr !586
  %13 = icmp eq i64 %x23.0.reload, 1, !insn.addr !587
  store i64 %9, i64* %x20.0.reg2mem, !insn.addr !587
  store i64 %10, i64* %x21.0.reg2mem, !insn.addr !587
  store i64 %12, i64* %x23.0.reg2mem, !insn.addr !587
  br i1 %13, label %dec_label_pc_2e94.preheader, label %dec_label_pc_2e64, !insn.addr !587

dec_label_pc_2e94.preheader:                      ; preds = %dec_label_pc_2e80
  %14 = add i64 %1, 8
  store i32 0, i32* %x19.0.reg2mem
  store i64 0, i64* %x20.1.reg2mem
  store i64 %2, i64* %x22.0.reg2mem
  br label %dec_label_pc_2e94

dec_label_pc_2e94:                                ; preds = %dec_label_pc_2e94.preheader, %dec_label_pc_2ea4
  %x22.0.reload = load i64, i64* %x22.0.reg2mem
  %15 = inttoptr i64 %x22.0.reload to i64*, !insn.addr !588
  %16 = load i64, i64* %15, align 8, !insn.addr !588
  %17 = trunc i64 %16 to i32, !insn.addr !589
  %18 = call i32 @pthread_join(i32 %17, i64** null), !insn.addr !589
  %19 = icmp eq i32 %18, 0, !insn.addr !590
  store i64 4294967294, i64* %x19.1.reg2mem, !insn.addr !590
  br i1 %19, label %dec_label_pc_2ea4, label %dec_label_pc_2ec0, !insn.addr !590

dec_label_pc_2ea4:                                ; preds = %dec_label_pc_2e94
  %x20.1.reload = load i64, i64* %x20.1.reg2mem
  %x19.0.reload = load i32, i32* %x19.0.reg2mem
  %20 = add nuw nsw i64 %x20.1.reload, 12, !insn.addr !591
  %21 = add i64 %x22.0.reload, 8, !insn.addr !592
  %22 = add i64 %14, %x20.1.reload, !insn.addr !593
  %23 = inttoptr i64 %22 to i32*, !insn.addr !593
  %24 = load i32, i32* %23, align 4, !insn.addr !593
  %25 = add i32 %24, %x19.0.reload, !insn.addr !594
  %26 = icmp eq i64 %20, 36, !insn.addr !595
  store i32 %25, i32* %x19.0.reg2mem, !insn.addr !595
  store i64 %20, i64* %x20.1.reg2mem, !insn.addr !595
  store i64 %21, i64* %x22.0.reg2mem, !insn.addr !595
  br i1 %26, label %dec_label_pc_2ec0.loopexit.split.loop.exit, label %dec_label_pc_2e94, !insn.addr !595

dec_label_pc_2ec0.loopexit.split.loop.exit:       ; preds = %dec_label_pc_2ea4
  %27 = zext i32 %25 to i64, !insn.addr !594
  store i64 %27, i64* %x19.1.reg2mem
  br label %dec_label_pc_2ec0

dec_label_pc_2ec0:                                ; preds = %dec_label_pc_2e64, %dec_label_pc_2e94, %dec_label_pc_2ec0.loopexit.split.loop.exit
  %28 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !596
  %29 = inttoptr i64 %28 to i64*, !insn.addr !597
  %30 = load i64, i64* %29, align 8, !insn.addr !597
  %31 = icmp eq i64 %4, %30, !insn.addr !598
  br i1 %31, label %dec_label_pc_2edc, label %dec_label_pc_2f08, !insn.addr !598

dec_label_pc_2edc:                                ; preds = %dec_label_pc_2ec0
  %x19.1.reload = load i64, i64* %x19.1.reg2mem
  ret i64 %x19.1.reload, !insn.addr !599

dec_label_pc_2f08:                                ; preds = %dec_label_pc_2ec0
  call void @__stack_chk_fail(), !insn.addr !600
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !601

; uselistorder directives
  uselistorder i32 %25, { 1, 0 }
  uselistorder i64 %x20.1.reload, { 1, 0 }
  uselistorder i64 %x22.0.reload, { 1, 0 }
  uselistorder i64 %x23.0.reload, { 1, 0 }
  uselistorder i64 %x20.0.reload, { 1, 0 }
  uselistorder i64 %x21.0.reload, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %x20.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x21.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x23.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %x19.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x20.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x22.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x19.1.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64 12, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2ec0, { 2, 1, 0 }
  uselistorder label %dec_label_pc_2e94, { 1, 0 }
}

define i64 @call_pthread_join() local_unnamed_addr {
dec_label_pc_2f10:
  %0 = call i64 @param_pthread_join(), !insn.addr !602
  ret i64 %0, !insn.addr !602
}

define i32 @param_mutex_lock(i32 %thread_count, i32 %iterations_per_thread) local_unnamed_addr {
dec_label_pc_2f14:
  %storemerge.reg2mem = alloca i32, !insn.addr !603
  %x21.0.reg2mem = alloca i64, !insn.addr !603
  %x19.0.reg2mem = alloca i64, !insn.addr !603
  %0 = sext i32 %thread_count to i64
  %stack_var_4 = alloca i32, align 4
  %1 = call i64 @__asm_sbfiz(i64 %0, i64 %0, i64 3, i64 32), !insn.addr !604
  store i32 %iterations_per_thread, i32* %stack_var_4, align 4, !insn.addr !605
  %2 = trunc i64 %1 to i32, !insn.addr !606
  %3 = call i64* @malloc(i32 %2), !insn.addr !606
  %4 = icmp eq i64* %3, null, !insn.addr !607
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !607
  br i1 %4, label %dec_label_pc_3004, label %dec_label_pc_2f34, !insn.addr !607

dec_label_pc_2f34:                                ; preds = %dec_label_pc_2f14
  store i32 0, i32* @shared_counter, align 4, !insn.addr !608
  %5 = icmp slt i32 %thread_count, 1, !insn.addr !609
  br i1 %5, label %dec_label_pc_2fd8, label %dec_label_pc_2f50, !insn.addr !609

dec_label_pc_2f50:                                ; preds = %dec_label_pc_2f34
  %6 = zext i32 %thread_count to i64, !insn.addr !610
  %7 = ptrtoint i64* %3 to i64, !insn.addr !606
  %8 = mul i64 %6, 8, !insn.addr !611
  %9 = add i64 %8, %7, !insn.addr !611
  %10 = bitcast i32* %stack_var_4 to i64*, !insn.addr !612
  store i64 %7, i64* %x19.0.reg2mem, !insn.addr !613
  br label %dec_label_pc_2f7c, !insn.addr !613

dec_label_pc_2f74:                                ; preds = %dec_label_pc_2f7c
  %11 = add i64 %x19.0.reload, 8, !insn.addr !614
  %12 = icmp eq i64 %11, %9, !insn.addr !615
  store i64 %11, i64* %x19.0.reg2mem, !insn.addr !616
  store i64 %7, i64* %x21.0.reg2mem, !insn.addr !616
  br i1 %12, label %dec_label_pc_2fbc, label %dec_label_pc_2f7c, !insn.addr !616

dec_label_pc_2f7c:                                ; preds = %dec_label_pc_2f74, %dec_label_pc_2f50
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  %13 = inttoptr i64 %x19.0.reload to i32*, !insn.addr !612
  %14 = call i32 @pthread_create(i32* %13, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2532) to i64* (i64*)*), i64* nonnull %10), !insn.addr !612
  %15 = icmp eq i32 %14, 0, !insn.addr !617
  br i1 %15, label %dec_label_pc_2f74, label %dec_label_pc_2f98, !insn.addr !617

dec_label_pc_2f98:                                ; preds = %dec_label_pc_2f7c
  call void @free(i64* nonnull %3), !insn.addr !618
  ret i32 -2, !insn.addr !619

dec_label_pc_2fbc:                                ; preds = %dec_label_pc_2f74, %dec_label_pc_2fbc
  %x21.0.reload = load i64, i64* %x21.0.reg2mem
  %16 = inttoptr i64 %x21.0.reload to i64*, !insn.addr !620
  %17 = load i64, i64* %16, align 8, !insn.addr !620
  %18 = add i64 %x21.0.reload, 8, !insn.addr !620
  %19 = trunc i64 %17 to i32, !insn.addr !621
  %20 = call i32 @pthread_join(i32 %19, i64** null), !insn.addr !621
  %21 = icmp eq i64 %18, %9, !insn.addr !622
  store i64 %18, i64* %x21.0.reg2mem, !insn.addr !622
  br i1 %21, label %dec_label_pc_2fd8, label %dec_label_pc_2fbc, !insn.addr !622

dec_label_pc_2fd8:                                ; preds = %dec_label_pc_2fbc, %dec_label_pc_2f34
  call void @free(i64* nonnull %3), !insn.addr !623
  %22 = load i32, i32* %stack_var_4, align 4, !insn.addr !624
  %23 = load i32, i32* @shared_counter, align 4, !insn.addr !625
  %24 = mul i32 %22, %thread_count, !insn.addr !626
  %25 = icmp eq i32 %23, %24, !insn.addr !627
  %phitmp = select i1 %25, i32 42, i32 -3, !insn.addr !628
  store i32 %phitmp, i32* %storemerge.reg2mem, !insn.addr !628
  br label %dec_label_pc_3004, !insn.addr !628

dec_label_pc_3004:                                ; preds = %dec_label_pc_2f14, %dec_label_pc_2fd8
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !629

; uselistorder directives
  uselistorder i64 %x19.0.reload, { 1, 0 }
  uselistorder i64* %3, { 0, 1, 3, 2 }
  uselistorder i32* %stack_var_4, { 1, 0, 2 }
  uselistorder i64* %x21.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %thread_count, { 0, 2, 1, 3 }
  uselistorder label %dec_label_pc_3004, { 1, 0 }
  uselistorder label %dec_label_pc_2fbc, { 1, 0 }
}

define i64 @call_mutex_lock() local_unnamed_addr {
dec_label_pc_3020:
  %0 = call i32 @param_mutex_lock(i32 4, i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !630
  %1 = sext i32 %0 to i64, !insn.addr !630
  ret i64 %1, !insn.addr !630
}

define i64 @param_condition_variable() local_unnamed_addr {
dec_label_pc_3030:
  %x19.0.reg2mem = alloca i64, !insn.addr !631
  %stack_var_-8 = alloca i64, align 8
  %consumer_-24 = alloca i64, align 8
  %consumer_ret_-16 = alloca i8*, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !632
  %1 = inttoptr i64 %0 to i64*, !insn.addr !633
  %2 = load i64, i64* %1, align 8, !insn.addr !633
  store i32 0, i32* @ready, align 4, !insn.addr !634
  store i32 0, i32* @data, align 4, !insn.addr !635
  %3 = bitcast i8** %consumer_ret_-16 to i32*, !insn.addr !636
  %4 = call i32 @pthread_create(i32* nonnull %3, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2644) to i64* (i64*)*), i64* null), !insn.addr !636
  %5 = icmp eq i32 %4, 0, !insn.addr !637
  store i64 4294967295, i64* %x19.0.reg2mem, !insn.addr !637
  br i1 %5, label %dec_label_pc_307c, label %dec_label_pc_30bc, !insn.addr !637

dec_label_pc_307c:                                ; preds = %dec_label_pc_3030
  %6 = bitcast i64* %consumer_-24 to i32*, !insn.addr !638
  %7 = call i32 @pthread_create(i32* nonnull %6, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2768) to i64* (i64*)*), i64* null), !insn.addr !638
  %8 = icmp eq i32 %7, 0, !insn.addr !639
  %9 = load i8*, i8** %consumer_ret_-16, align 8
  %10 = ptrtoint i8* %9 to i64
  %11 = trunc i64 %10 to i32
  br i1 %8, label %dec_label_pc_3098, label %dec_label_pc_30f0, !insn.addr !639

dec_label_pc_3098:                                ; preds = %dec_label_pc_307c
  %12 = bitcast i64* %stack_var_-8 to i64**, !insn.addr !640
  %13 = call i32 @pthread_join(i32 %11, i64** nonnull %12), !insn.addr !640
  %14 = load i64, i64* %consumer_-24, align 8, !insn.addr !641
  %15 = trunc i64 %14 to i32, !insn.addr !642
  %16 = call i32 @pthread_join(i32 %15, i64** null), !insn.addr !642
  %17 = load i64, i64* %stack_var_-8, align 8, !insn.addr !643
  %18 = inttoptr i64 %17 to i32*, !insn.addr !644
  %19 = load i32, i32* %18, align 4, !insn.addr !644
  %20 = zext i32 %19 to i64, !insn.addr !644
  %21 = inttoptr i64 %17 to i64*, !insn.addr !645
  call void @free(i64* %21), !insn.addr !645
  store i64 %20, i64* %x19.0.reg2mem, !insn.addr !645
  br label %dec_label_pc_30bc, !insn.addr !645

dec_label_pc_30bc:                                ; preds = %dec_label_pc_3030, %dec_label_pc_30f0, %dec_label_pc_3098
  %22 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !646
  %23 = inttoptr i64 %22 to i64*, !insn.addr !647
  %24 = load i64, i64* %23, align 8, !insn.addr !647
  %25 = icmp eq i64 %2, %24, !insn.addr !648
  br i1 %25, label %dec_label_pc_30d8, label %dec_label_pc_3100, !insn.addr !648

dec_label_pc_30d8:                                ; preds = %dec_label_pc_30bc
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  ret i64 %x19.0.reload, !insn.addr !649

dec_label_pc_30f0:                                ; preds = %dec_label_pc_307c
  %26 = call i32 @pthread_cancel(i32 %11), !insn.addr !650
  store i64 4294967294, i64* %x19.0.reg2mem, !insn.addr !651
  br label %dec_label_pc_30bc, !insn.addr !651

dec_label_pc_3100:                                ; preds = %dec_label_pc_30bc
  call void @__stack_chk_fail(), !insn.addr !652
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !652

; uselistorder directives
  uselistorder i64 %17, { 1, 0 }
  uselistorder i8** %consumer_ret_-16, { 1, 0 }
  uselistorder i64* %consumer_-24, { 1, 0 }
  uselistorder i64* %stack_var_-8, { 1, 0 }
  uselistorder i64* %x19.0.reg2mem, { 2, 0, 3, 1 }
  uselistorder label %dec_label_pc_30bc, { 1, 2, 0 }
}

define i64 @call_condition_variable() local_unnamed_addr {
dec_label_pc_3104:
  %0 = call i64 @param_condition_variable(), !insn.addr !653
  ret i64 %0, !insn.addr !653
}

define i32 @param_atomic_ops(i32 %thread_count, i32 %iterations) local_unnamed_addr {
dec_label_pc_3110:
  %x19.1.reg2mem = alloca i64, !insn.addr !654
  %x0.0.reg2mem = alloca i32, !insn.addr !654
  %x19.0.reg2mem = alloca i64, !insn.addr !654
  %0 = sext i32 %thread_count to i64
  %stack_var_-8 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %1 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !655
  store i32 %iterations, i32* %stack_var_-12, align 4, !insn.addr !656
  %2 = call i64 @__asm_sbfiz(i64 %0, i64 %0, i64 3, i64 32), !insn.addr !657
  %3 = inttoptr i64 %1 to i64*, !insn.addr !658
  %4 = load i64, i64* %3, align 8, !insn.addr !658
  %5 = trunc i64 %2 to i32, !insn.addr !659
  %6 = call i64* @malloc(i32 %5), !insn.addr !659
  %7 = icmp eq i64* %6, null, !insn.addr !660
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !660
  br i1 %7, label %dec_label_pc_31c0, label %dec_label_pc_3144, !insn.addr !660

dec_label_pc_3144:                                ; preds = %dec_label_pc_3110
  %8 = load i64, i64* bitcast (i32* @atomic_counter to i64*), align 8, !insn.addr !661
  call void @__asm_stlr(i32 0, i64 %8), !insn.addr !661
  %9 = icmp slt i32 %thread_count, 1, !insn.addr !662
  br i1 %9, label %dec_label_pc_3264, label %dec_label_pc_3168, !insn.addr !662

dec_label_pc_3168:                                ; preds = %dec_label_pc_3144
  %10 = zext i32 %thread_count to i64, !insn.addr !663
  %11 = ptrtoint i64* %6 to i64, !insn.addr !659
  %12 = mul i64 %10, 8, !insn.addr !664
  %13 = add i64 %12, %11, !insn.addr !664
  %14 = bitcast i32* %stack_var_-12 to i64*, !insn.addr !665
  store i64 %11, i64* %x19.0.reg2mem, !insn.addr !666
  br label %dec_label_pc_3190, !insn.addr !666

dec_label_pc_3184:                                ; preds = %dec_label_pc_3190
  %15 = add i64 %x19.0.reload, 8, !insn.addr !667
  %16 = icmp eq i64 %15, %13, !insn.addr !668
  store i64 %15, i64* %x19.0.reg2mem, !insn.addr !669
  br i1 %16, label %dec_label_pc_31e8, label %dec_label_pc_3190, !insn.addr !669

dec_label_pc_3190:                                ; preds = %dec_label_pc_3184, %dec_label_pc_3168
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  %17 = inttoptr i64 %x19.0.reload to i32*, !insn.addr !665
  %18 = call i32 @pthread_create(i32* %17, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2864) to i64* (i64*)*), i64* nonnull %14), !insn.addr !665
  %19 = icmp eq i32 %18, 0, !insn.addr !670
  br i1 %19, label %dec_label_pc_3184, label %dec_label_pc_31a8, !insn.addr !670

dec_label_pc_31a8:                                ; preds = %dec_label_pc_3190
  call void @free(i64* nonnull %6), !insn.addr !671
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !672
  br label %dec_label_pc_31c0, !insn.addr !672

dec_label_pc_31c0:                                ; preds = %dec_label_pc_3110, %dec_label_pc_3224, %dec_label_pc_31a8
  %20 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !673
  %21 = inttoptr i64 %20 to i64*, !insn.addr !674
  %22 = load i64, i64* %21, align 8, !insn.addr !674
  %23 = icmp eq i64 %4, %22, !insn.addr !675
  br i1 %23, label %dec_label_pc_31dc, label %dec_label_pc_3298, !insn.addr !675

dec_label_pc_31dc:                                ; preds = %dec_label_pc_31c0
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !676

dec_label_pc_31e8:                                ; preds = %dec_label_pc_3184
  %24 = call i32 @pthread_create(i32* nonnull %stack_var_-8, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2976) to i64* (i64*)*), i64* null), !insn.addr !677
  %25 = icmp eq i32 %24, 0, !insn.addr !678
  br i1 %25, label %dec_label_pc_3254, label %dec_label_pc_3204, !insn.addr !678

dec_label_pc_3204:                                ; preds = %dec_label_pc_3254, %dec_label_pc_31e8
  store i64 0, i64* %x19.1.reg2mem, !insn.addr !679
  br label %dec_label_pc_3208, !insn.addr !679

dec_label_pc_3208:                                ; preds = %dec_label_pc_3208, %dec_label_pc_3204
  %x19.1.reload = load i64, i64* %x19.1.reg2mem
  %26 = mul i64 %x19.1.reload, 8, !insn.addr !680
  %27 = add i64 %26, %11, !insn.addr !680
  %28 = inttoptr i64 %27 to i64*, !insn.addr !680
  %29 = load i64, i64* %28, align 8, !insn.addr !680
  %30 = add nuw nsw i64 %x19.1.reload, 1, !insn.addr !681
  %31 = trunc i64 %29 to i32, !insn.addr !682
  %32 = call i32 @pthread_join(i32 %31, i64** null), !insn.addr !682
  %33 = icmp ult i64 %30, %10, !insn.addr !683
  store i64 %30, i64* %x19.1.reg2mem, !insn.addr !683
  br i1 %33, label %dec_label_pc_3208, label %dec_label_pc_3224, !insn.addr !683

dec_label_pc_3224:                                ; preds = %dec_label_pc_3208, %dec_label_pc_3264, %dec_label_pc_3280
  %34 = load i32, i32* @atomic_counter, align 4, !insn.addr !684
  call void @free(i64* nonnull %6), !insn.addr !685
  %35 = icmp slt i32 %34, 1
  %phitmp = select i1 %35, i32 -3, i32 42, !insn.addr !686
  store i32 %phitmp, i32* %x0.0.reg2mem, !insn.addr !687
  br label %dec_label_pc_31c0, !insn.addr !687

dec_label_pc_3254:                                ; preds = %dec_label_pc_31e8
  %36 = load i32, i32* %stack_var_-8, align 4, !insn.addr !688
  %37 = call i32 @pthread_join(i32 %36, i64** null), !insn.addr !689
  br label %dec_label_pc_3204, !insn.addr !690

dec_label_pc_3264:                                ; preds = %dec_label_pc_3144
  %38 = call i32 @pthread_create(i32* nonnull %stack_var_-8, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2976) to i64* (i64*)*), i64* null), !insn.addr !691
  %39 = icmp eq i32 %38, 0, !insn.addr !692
  br i1 %39, label %dec_label_pc_3280, label %dec_label_pc_3224, !insn.addr !692

dec_label_pc_3280:                                ; preds = %dec_label_pc_3264
  %40 = load i32, i32* %stack_var_-8, align 4, !insn.addr !693
  %41 = call i32 @pthread_join(i32 %40, i64** null), !insn.addr !694
  br label %dec_label_pc_3224, !insn.addr !695

dec_label_pc_3298:                                ; preds = %dec_label_pc_31c0
  call void @__stack_chk_fail(), !insn.addr !696
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !697

; uselistorder directives
  uselistorder i64 %11, { 2, 0, 1 }
  uselistorder i64 %10, { 1, 0 }
  uselistorder i64* %6, { 0, 1, 3, 2 }
  uselistorder i32* %stack_var_-8, { 1, 3, 0, 2 }
  uselistorder i32* %x0.0.reg2mem, { 3, 0, 2, 1 }
  uselistorder i64* %x19.1.reg2mem, { 1, 0, 2 }
  uselistorder void (i32, i64)* @__asm_stlr, { 1, 0 }
  uselistorder i32 %thread_count, { 1, 0, 2 }
  uselistorder label %dec_label_pc_3224, { 2, 1, 0 }
  uselistorder label %dec_label_pc_31c0, { 1, 2, 0 }
}

define i64 @call_atomic_ops() local_unnamed_addr {
dec_label_pc_32b0:
  %0 = call i32 @param_atomic_ops(i32 4, i32 500), !insn.addr !698
  %1 = sext i32 %0 to i64, !insn.addr !698
  ret i64 %1, !insn.addr !698
}

define i32 @param_thread_local_storage(i32 %thread_count) local_unnamed_addr {
dec_label_pc_32c0:
  %0 = alloca i64
  %x25.1.reg2mem = alloca i32, !insn.addr !699
  %x19.3.reg2mem = alloca i32, !insn.addr !699
  %x25.0.reg2mem = alloca i32, !insn.addr !699
  %x22.1.reg2mem = alloca i64, !insn.addr !699
  %x19.2.reg2mem = alloca i32, !insn.addr !699
  %x0.0.reg2mem = alloca i32, !insn.addr !699
  %x19.1.reg2mem = alloca i64, !insn.addr !699
  %x22.0.reg2mem = alloca i64, !insn.addr !699
  %x20.0.reg2mem = alloca i64, !insn.addr !699
  %x19.0.reg2mem = alloca i64, !insn.addr !699
  %1 = load i64, i64* %0
  %stack_var_-8 = alloca i64, align 8
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !700
  %3 = sext i32 %thread_count to i64, !insn.addr !701
  %4 = inttoptr i64 %2 to i64*, !insn.addr !702
  %5 = load i64, i64* %4, align 8, !insn.addr !702
  %6 = call i64 @__asm_sbfiz(i64 %1, i64 %3, i64 3, i64 32), !insn.addr !703
  %7 = trunc i64 %6 to i32, !insn.addr !704
  %8 = call i64* @malloc(i32 %7), !insn.addr !704
  %9 = call i64* @malloc(i32 %7), !insn.addr !705
  %10 = icmp eq i64* %8, null, !insn.addr !706
  %11 = icmp eq i64* %9, null
  %storemerge1 = or i1 %10, %11
  br i1 %storemerge1, label %dec_label_pc_349c, label %dec_label_pc_3310, !insn.addr !707

dec_label_pc_3310:                                ; preds = %dec_label_pc_32c0
  %12 = ptrtoint i64* %8 to i64, !insn.addr !704
  %13 = ptrtoint i64* %9 to i64, !insn.addr !705
  %14 = icmp slt i32 %thread_count, 1, !insn.addr !708
  store i64 0, i64* %x19.0.reg2mem, !insn.addr !708
  store i32 0, i32* %x19.3.reg2mem, !insn.addr !708
  store i32 0, i32* %x25.1.reg2mem, !insn.addr !708
  br i1 %14, label %dec_label_pc_344c, label %dec_label_pc_3330, !insn.addr !708

dec_label_pc_3330:                                ; preds = %dec_label_pc_3310, %dec_label_pc_3330
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  %15 = call i64* @malloc(i32 16), !insn.addr !709
  %16 = ptrtoint i64* %15 to i64, !insn.addr !709
  %17 = mul i64 %x19.0.reload, 8, !insn.addr !710
  %18 = add i64 %17, %13, !insn.addr !710
  %19 = inttoptr i64 %18 to i64*, !insn.addr !710
  store i64 %16, i64* %19, align 8, !insn.addr !710
  %20 = and i64 %x19.0.reload, 4294967295, !insn.addr !711
  %21 = add nuw i64 %x19.0.reload, 1, !insn.addr !712
  %22 = bitcast i64* %15 to i8*, !insn.addr !713
  %23 = call i32 (i8*, i32, i32, i32, i8*, ...) @__snprintf_chk(i8* %22, i32 16, i32 1, i32 16, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_39f0, i64 0, i64 0), i64 %20), !insn.addr !713
  %24 = icmp eq i64 %21, %3, !insn.addr !714
  store i64 %21, i64* %x19.0.reg2mem, !insn.addr !714
  store i64 0, i64* %x20.0.reg2mem, !insn.addr !714
  store i64 %12, i64* %x22.0.reg2mem, !insn.addr !714
  br i1 %24, label %dec_label_pc_3384, label %dec_label_pc_3330, !insn.addr !714

dec_label_pc_3374:                                ; preds = %dec_label_pc_3384
  %25 = add nuw i64 %x20.0.reload, 1, !insn.addr !715
  %26 = add i64 %x22.0.reload, 8, !insn.addr !716
  %27 = icmp eq i64 %25, %3, !insn.addr !717
  store i64 %25, i64* %x20.0.reg2mem, !insn.addr !718
  store i64 %26, i64* %x22.0.reg2mem, !insn.addr !718
  br i1 %27, label %dec_label_pc_3408, label %dec_label_pc_3384, !insn.addr !718

dec_label_pc_3384:                                ; preds = %dec_label_pc_3330, %dec_label_pc_3374
  %x22.0.reload = load i64, i64* %x22.0.reg2mem
  %x20.0.reload = load i64, i64* %x20.0.reg2mem
  %28 = mul i64 %x20.0.reload, 8, !insn.addr !719
  %29 = add i64 %28, %13
  %30 = inttoptr i64 %29 to i64*, !insn.addr !719
  %31 = load i64, i64* %30, align 8, !insn.addr !719
  %32 = inttoptr i64 %x22.0.reload to i32*, !insn.addr !720
  %33 = inttoptr i64 %31 to i64*, !insn.addr !720
  %34 = call i32 @pthread_create(i32* %32, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 3008) to i64* (i64*)*), i64* %33), !insn.addr !720
  %35 = icmp eq i32 %34, 0, !insn.addr !721
  store i64 %13, i64* %x19.1.reg2mem, !insn.addr !721
  br i1 %35, label %dec_label_pc_3374, label %dec_label_pc_33b0, !insn.addr !721

dec_label_pc_33b0:                                ; preds = %dec_label_pc_3384, %dec_label_pc_33b0
  %x19.1.reload = load i64, i64* %x19.1.reg2mem
  %36 = inttoptr i64 %x19.1.reload to i64*, !insn.addr !722
  %37 = load i64, i64* %36, align 8, !insn.addr !722
  %38 = add i64 %x19.1.reload, 8, !insn.addr !722
  %39 = inttoptr i64 %37 to i64*, !insn.addr !723
  call void @free(i64* %39), !insn.addr !723
  %40 = icmp eq i64 %29, %x19.1.reload, !insn.addr !724
  store i64 %38, i64* %x19.1.reg2mem, !insn.addr !724
  br i1 %40, label %dec_label_pc_33c0, label %dec_label_pc_33b0, !insn.addr !724

dec_label_pc_33c0:                                ; preds = %dec_label_pc_33b0
  call void @free(i64* %9), !insn.addr !725
  call void @free(i64* %8), !insn.addr !726
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !727
  br label %dec_label_pc_33d8, !insn.addr !727

dec_label_pc_33d8:                                ; preds = %69, %dec_label_pc_344c, %dec_label_pc_349c, %dec_label_pc_33c0
  %41 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !728
  %42 = inttoptr i64 %41 to i64*, !insn.addr !729
  %43 = load i64, i64* %42, align 8, !insn.addr !729
  %44 = icmp eq i64 %5, %43, !insn.addr !730
  br i1 %44, label %dec_label_pc_33f4, label %dec_label_pc_3494, !insn.addr !730

dec_label_pc_33f4:                                ; preds = %dec_label_pc_33d8
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !731

dec_label_pc_3408:                                ; preds = %dec_label_pc_3374
  %45 = mul i64 %3, 8, !insn.addr !732
  %46 = bitcast i64* %stack_var_-8 to i64**, !insn.addr !733
  store i32 0, i32* %x19.2.reg2mem, !insn.addr !734
  store i64 0, i64* %x22.1.reg2mem, !insn.addr !734
  store i32 0, i32* %x25.0.reg2mem, !insn.addr !734
  br label %dec_label_pc_3418, !insn.addr !734

dec_label_pc_3418:                                ; preds = %dec_label_pc_3418, %dec_label_pc_3408
  %x25.0.reload = load i32, i32* %x25.0.reg2mem
  %x22.1.reload = load i64, i64* %x22.1.reg2mem
  %x19.2.reload = load i32, i32* %x19.2.reg2mem
  %47 = add i64 %x22.1.reload, %12, !insn.addr !735
  %48 = inttoptr i64 %47 to i64*, !insn.addr !735
  %49 = load i64, i64* %48, align 8, !insn.addr !735
  %50 = trunc i64 %49 to i32, !insn.addr !733
  %51 = call i32 @pthread_join(i32 %50, i64** nonnull %46), !insn.addr !733
  %52 = load i64, i64* %stack_var_-8, align 8, !insn.addr !736
  %53 = inttoptr i64 %52 to i32*, !insn.addr !737
  %54 = load i32, i32* %53, align 4, !insn.addr !737
  %55 = add i64 %52, 4, !insn.addr !737
  %56 = inttoptr i64 %55 to i32*, !insn.addr !737
  %57 = load i32, i32* %56, align 4, !insn.addr !737
  %58 = add i32 %54, %x19.2.reload, !insn.addr !738
  %59 = add i32 %57, %x25.0.reload, !insn.addr !739
  %60 = inttoptr i64 %52 to i64*, !insn.addr !740
  call void @free(i64* %60), !insn.addr !740
  %61 = add i64 %x22.1.reload, %13, !insn.addr !741
  %62 = inttoptr i64 %61 to i64*, !insn.addr !741
  %63 = load i64, i64* %62, align 8, !insn.addr !741
  %64 = add i64 %x22.1.reload, 8, !insn.addr !742
  %65 = inttoptr i64 %63 to i64*, !insn.addr !743
  call void @free(i64* %65), !insn.addr !743
  %66 = icmp eq i64 %64, %45, !insn.addr !744
  store i32 %58, i32* %x19.2.reg2mem, !insn.addr !744
  store i64 %64, i64* %x22.1.reg2mem, !insn.addr !744
  store i32 %59, i32* %x25.0.reg2mem, !insn.addr !744
  store i32 %58, i32* %x19.3.reg2mem, !insn.addr !744
  store i32 %59, i32* %x25.1.reg2mem, !insn.addr !744
  br i1 %66, label %dec_label_pc_344c, label %dec_label_pc_3418, !insn.addr !744

dec_label_pc_344c:                                ; preds = %dec_label_pc_3418, %dec_label_pc_3310
  %x19.3.reload = load i32, i32* %x19.3.reg2mem
  call void @free(i64* %9), !insn.addr !745
  call void @free(i64* %8), !insn.addr !746
  %67 = mul i32 %thread_count, 100, !insn.addr !747
  %68 = icmp eq i32 %67, %x19.3.reload, !insn.addr !748
  store i32 -3, i32* %x0.0.reg2mem, !insn.addr !749
  br i1 %68, label %69, label %dec_label_pc_33d8, !insn.addr !749

; <label>:69:                                     ; preds = %dec_label_pc_344c
  %x25.1.reload = load i32, i32* %x25.1.reg2mem
  %70 = mul i32 %thread_count, 150, !insn.addr !750
  %71 = icmp eq i32 %70, %x25.1.reload, !insn.addr !749
  %phitmp = select i1 %71, i32 42, i32 -3
  store i32 %phitmp, i32* %x0.0.reg2mem, !insn.addr !749
  br label %dec_label_pc_33d8, !insn.addr !749

dec_label_pc_3494:                                ; preds = %dec_label_pc_33d8
  call void @__stack_chk_fail(), !insn.addr !751
  br label %dec_label_pc_349c, !insn.addr !751

dec_label_pc_349c:                                ; preds = %dec_label_pc_3494, %dec_label_pc_32c0
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !752
  br label %dec_label_pc_33d8, !insn.addr !752

; uselistorder directives
  uselistorder i64 %52, { 2, 1, 0 }
  uselistorder i64 %x22.1.reload, { 0, 2, 1 }
  uselistorder i64 %x19.1.reload, { 2, 0, 1 }
  uselistorder i64 %x20.0.reload, { 1, 0 }
  uselistorder i64 %13, { 1, 0, 2, 3 }
  uselistorder i64 %12, { 1, 0 }
  uselistorder i64* %9, { 0, 1, 3, 2 }
  uselistorder i64* %8, { 0, 1, 3, 2 }
  uselistorder i64* %stack_var_-8, { 1, 0 }
  uselistorder i64* %x19.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x20.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x22.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x19.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %x0.0.reg2mem, { 4, 2, 1, 0, 3 }
  uselistorder i32* %x19.2.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x22.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %x25.0.reg2mem, { 1, 0, 2 }
  uselistorder i32 -1, { 0, 1, 2, 7, 8, 4, 3, 5, 6 }
  uselistorder i32 42, { 1, 2, 3, 4, 0, 5 }
  uselistorder i32 -3, { 3, 0, 4, 5, 1, 2 }
  uselistorder i64 4, { 6, 7, 2, 3, 0, 4, 5, 1 }
  uselistorder i32 -2, { 0, 1, 4, 2, 3 }
  uselistorder i64 1, { 12, 13, 14, 1, 4, 5, 6, 10, 2, 3, 7, 8, 9, 0, 11 }
  uselistorder i64 8, { 11, 0, 13, 1, 12, 2, 3, 14, 4, 15, 16, 5, 17, 7, 18, 19, 20, 6, 10, 8, 9 }
  uselistorder i64* (i32)* @malloc, { 5, 4, 3, 2, 1, 0, 10, 9, 8, 7, 6, 11 }
  uselistorder i64 32, { 1, 2, 3, 0 }
  uselistorder i64 3, { 2, 3, 4, 0, 1 }
  uselistorder label %dec_label_pc_33d8, { 2, 0, 1, 3 }
  uselistorder label %dec_label_pc_33b0, { 1, 0 }
  uselistorder label %dec_label_pc_3384, { 1, 0 }
  uselistorder label %dec_label_pc_3330, { 1, 0 }
}

define i64 @call_thread_local_storage() local_unnamed_addr {
dec_label_pc_34a4:
  %0 = call i32 @param_thread_local_storage(i32 4), !insn.addr !753
  %1 = sext i32 %0 to i64, !insn.addr !753
  ret i64 %1, !insn.addr !753
}

define void @test_thread_concurrency() local_unnamed_addr {
dec_label_pc_34b0:
  %stack_var_-8 = alloca i64, align 8
  %stack_var_-16 = alloca i32, align 4
  %stack_var_-20 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !754
  %1 = inttoptr i64 %0 to i64*, !insn.addr !755
  %2 = load i64, i64* %1, align 8, !insn.addr !755
  %3 = call i32 @puts(i8* bitcast (i8** @global_var_3a00 to i8*)), !insn.addr !756
  store i64 7, i64* %stack_var_-20, align 8, !insn.addr !757
  %4 = call i32 @pthread_create(i32* nonnull %stack_var_-16, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2484) to i64* (i64*)*), i64* nonnull %stack_var_-20), !insn.addr !758
  %5 = icmp eq i32 %4, 0, !insn.addr !759
  br i1 %5, label %dec_label_pc_3500, label %dec_label_pc_3518, !insn.addr !759

dec_label_pc_3500:                                ; preds = %dec_label_pc_34b0
  %6 = load i32, i32* %stack_var_-16, align 4, !insn.addr !760
  %7 = bitcast i64* %stack_var_-8 to i64**, !insn.addr !761
  %8 = call i32 @pthread_join(i32 %6, i64** nonnull %7), !insn.addr !761
  %9 = load i64, i64* %stack_var_-8, align 8, !insn.addr !762
  %10 = inttoptr i64 %9 to i64*, !insn.addr !763
  call void @free(i64* %10), !insn.addr !763
  br label %dec_label_pc_3518, !insn.addr !763

dec_label_pc_3518:                                ; preds = %dec_label_pc_34b0, %dec_label_pc_3500
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3a20 to i8*)), !insn.addr !764
  %12 = call i64 @param_pthread_join(), !insn.addr !765
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3a40 to i8*)), !insn.addr !766
  %14 = call i32 @param_mutex_lock(i32 4, i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !767
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3a60 to i8*)), !insn.addr !768
  %16 = call i64 @param_condition_variable(), !insn.addr !769
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3a80 to i8*)), !insn.addr !770
  %18 = call i32 @param_atomic_ops(i32 4, i32 500), !insn.addr !771
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3aa0 to i8*)), !insn.addr !772
  %20 = call i32 @param_thread_local_storage(i32 4), !insn.addr !773
  %21 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !774
  %22 = inttoptr i64 %21 to i64*, !insn.addr !775
  %23 = load i64, i64* %22, align 8, !insn.addr !775
  %24 = icmp eq i64 %2, %23, !insn.addr !776
  br i1 %24, label %dec_label_pc_35c4, label %dec_label_pc_35e4, !insn.addr !776

dec_label_pc_35c4:                                ; preds = %dec_label_pc_3518
  %25 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3ac0 to i8*)), !insn.addr !777
  ret void, !insn.addr !777

dec_label_pc_35e4:                                ; preds = %dec_label_pc_3518
  call void @__stack_chk_fail(), !insn.addr !778
  ret void, !insn.addr !779

; uselistorder directives
  uselistorder i64* %stack_var_-8, { 1, 0 }
  uselistorder void ()* @__stack_chk_fail, { 6, 10, 9, 8, 7, 16, 15, 2, 5, 4, 3, 14, 13, 17, 1, 12, 11, 0, 18 }
  uselistorder i32 ptrtoint (i32* @global_var_3e8 to i32), { 1, 2, 3, 4, 0, 5 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 27, 26, 28 }
  uselistorder void (i64*)* @free, { 1, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 17, 16, 0, 15, 14, 18 }
  uselistorder i32 (i32, i64**)* @pthread_join, { 0, 8, 7, 6, 5, 4, 3, 2, 1, 10, 9, 11 }
  uselistorder i32 (i32*, i64*, i64* (i64*)*, i64*)* @pthread_create, { 0, 8, 7, 6, 5, 4, 3, 2, 1, 10, 9, 11 }
  uselistorder i64* (i64*)** @global_var_1000, { 1, 0 }
  uselistorder i64* null, { 0, 3, 1, 2, 5, 6, 7, 8, 9, 4, 10, 11, 12, 13, 15, 14, 16, 17, 18, 19, 20, 21, 22 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
  uselistorder i64 0, { 0, 1, 18, 19, 2, 3, 4, 80, 81, 96, 106, 5, 7, 6, 102, 8, 9, 103, 82, 83, 13, 14, 84, 85, 15, 16, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 10, 11, 12, 104, 17, 105, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 97, 98, 99, 100, 101 }
  uselistorder label %dec_label_pc_3518, { 1, 0 }
}

define i64 @__aarch64_cas4_acq_rel() local_unnamed_addr {
dec_label_pc_35f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  call void @__asm_hint(i64 34), !insn.addr !780
  %4 = load i8, i8* bitcast (i32* @global_var_150c8 to i8*), align 4, !insn.addr !781
  %5 = icmp eq i8 %4, 0, !insn.addr !782
  br i1 %5, label %dec_label_pc_3608, label %dec_label_pc_3600, !insn.addr !782

dec_label_pc_3600:                                ; preds = %dec_label_pc_35f0
  %6 = trunc i64 %3 to i32, !insn.addr !783
  %7 = trunc i64 %2 to i32, !insn.addr !783
  call void @__asm_casal(i32 %6, i32 %7, i64 %1), !insn.addr !783
  ret i64 %3, !insn.addr !784

dec_label_pc_3608:                                ; preds = %dec_label_pc_35f0
  %8 = and i64 %3, 4294967295, !insn.addr !785
  %9 = trunc i64 %2 to i32
  %10 = and i64 %1, 4294967295, !insn.addr !786
  %11 = icmp eq i64 %8, %10, !insn.addr !787
  br i1 %11, label %dec_label_pc_3618, label %dec_label_pc_3620, !insn.addr !787

dec_label_pc_3618:                                ; preds = %dec_label_pc_3608, %dec_label_pc_3618
  %12 = call i32 @__asm_stlxr(i32 %9, i64 %1), !insn.addr !788
  %13 = icmp eq i32 %12, 0, !insn.addr !789
  br i1 %13, label %dec_label_pc_3620, label %dec_label_pc_3618, !insn.addr !789

dec_label_pc_3620:                                ; preds = %dec_label_pc_3618, %dec_label_pc_3608
  ret i64 %10, !insn.addr !790

; uselistorder directives
  uselistorder i64 %10, { 1, 0 }
  uselistorder i64 %3, { 2, 1, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 1, 2, 0 }
  uselistorder i64* %0, { 2, 1, 0 }
  uselistorder label %dec_label_pc_3618, { 1, 0 }
}

define i64 @__aarch64_ldadd4_acq_rel() local_unnamed_addr {
dec_label_pc_3630:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  call void @__asm_hint(i64 34), !insn.addr !791
  %3 = load i8, i8* bitcast (i32* @global_var_150c8 to i8*), align 4, !insn.addr !792
  %4 = icmp eq i8 %3, 0, !insn.addr !793
  br i1 %4, label %dec_label_pc_364c.preheader, label %dec_label_pc_3640, !insn.addr !793

dec_label_pc_364c.preheader:                      ; preds = %dec_label_pc_3630
  %5 = trunc i64 %1 to i32
  %6 = trunc i64 %2 to i32, !insn.addr !794
  %7 = add i32 %6, %5, !insn.addr !794
  br label %dec_label_pc_364c

dec_label_pc_3640:                                ; preds = %dec_label_pc_3630
  %8 = trunc i64 %2 to i32, !insn.addr !795
  call void @__asm_ldaddal(i32 %8, i32 %8, i64 %1), !insn.addr !795
  ret i64 %2, !insn.addr !796

dec_label_pc_364c:                                ; preds = %dec_label_pc_364c.preheader, %dec_label_pc_364c
  %9 = call i32 @__asm_stlxr(i32 %7, i64 %1), !insn.addr !797
  %10 = icmp eq i32 %9, 0, !insn.addr !798
  br i1 %10, label %dec_label_pc_365c, label %dec_label_pc_364c, !insn.addr !798

dec_label_pc_365c:                                ; preds = %dec_label_pc_364c
  %11 = and i64 %1, 4294967295, !insn.addr !799
  ret i64 %11, !insn.addr !800

; uselistorder directives
  uselistorder i64 %2, { 1, 0, 2 }
  uselistorder i64 %1, { 3, 2, 0, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 4294967295, { 12, 13, 20, 21, 0, 22, 23, 1, 2, 3, 17, 4, 5, 18, 24, 6, 15, 16, 19, 25, 26, 27, 28, 29, 30, 7, 31, 8, 9, 10, 32, 11, 33, 34, 35, 36, 37, 38, 39, 40, 14 }
  uselistorder i8 0, { 0, 1, 3, 4, 2 }
  uselistorder i32 0, { 51, 52, 69, 2, 3, 56, 0, 1, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 4, 68, 45, 46, 11, 70, 8, 71, 72, 73, 74, 9, 75, 76, 77, 35, 15, 16, 12, 13, 14, 17, 18, 19, 20, 21, 23, 78, 79, 22, 47, 24, 25, 80, 81, 26, 27, 28, 48, 29, 5, 30, 10, 31, 83, 82, 49, 6, 50, 53, 54, 55, 7, 32, 33, 34, 36, 37, 38, 39, 40, 41, 42, 43, 44 }
  uselistorder i8* bitcast (i32* @global_var_150c8 to i8*), { 2, 1, 0 }
  uselistorder label %dec_label_pc_364c, { 1, 0 }
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_3660:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !801

; uselistorder directives
  uselistorder i32 1, { 24, 23, 22, 84, 85, 86, 87, 88, 89, 139, 133, 138, 91, 90, 140, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 21, 92, 93, 141, 134, 40, 39, 38, 144, 143, 142, 41, 94, 145, 44, 43, 42, 147, 146, 51, 50, 49, 48, 47, 46, 45, 149, 135, 148, 52, 151, 136, 150, 53, 20, 95, 96, 97, 98, 99, 100, 101, 152, 102, 56, 55, 54, 57, 103, 104, 154, 153, 58, 105, 156, 155, 59, 27, 137, 60, 19, 157, 18, 158, 17, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 62, 61, 16, 65, 64, 63, 15, 68, 67, 66, 71, 70, 69, 14, 120, 121, 159, 72, 26, 13, 73, 74, 12, 25, 161, 160, 75, 11, 122, 123, 10, 81, 125, 82, 124, 164, 163, 162, 126, 9, 8, 7, 127, 6, 5, 4, 128, 76, 3, 129, 130, 166, 131, 77, 2, 1, 83, 79, 78, 132, 80, 165, 0 }
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

declare i8* @stpcpy(i8*, i8*) local_unnamed_addr

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

declare i64 @__asm_ubfx(i64, i64, i64, i64) local_unnamed_addr

declare i64 @__asm_sbfiz(i64, i64, i64, i64) local_unnamed_addr

declare void @__asm_stlr(i32, i64) local_unnamed_addr

declare void @__asm_hint(i64) local_unnamed_addr

declare void @__asm_casal(i32, i32, i64) local_unnamed_addr

declare i32 @__asm_stlxr(i32, i64) local_unnamed_addr

declare void @__asm_ldaddal(i32, i32, i64) local_unnamed_addr

declare i64 @__asm_mrs(i64, i64) local_unnamed_addr

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
!64 = !{i64 6088}
!65 = !{i64 6092}
!66 = !{i64 6096}
!67 = !{i64 6108}
!68 = !{i64 6124}
!69 = !{i64 6128}
!70 = !{i64 6140}
!71 = !{i64 6144}
!72 = !{i64 6240}
!73 = !{i64 6252}
!74 = !{i64 6256}
!75 = !{i64 6264}
!76 = !{i64 6268}
!77 = !{i64 6272}
!78 = !{i64 6276}
!79 = !{i64 6332}
!80 = !{i64 6392}
!81 = !{i64 6400}
!82 = !{i64 6416}
!83 = !{i64 6420}
!84 = !{i64 6428}
!85 = !{i64 6432}
!86 = !{i64 6440}
!87 = !{i64 6444}
!88 = !{i64 6448}
!89 = !{i64 6456}
!90 = !{i64 6468}
!91 = !{i64 6480}
!92 = !{i64 6508}
!93 = !{i64 6512}
!94 = !{i64 6516}
!95 = !{i64 6528}
!96 = !{i64 6532}
!97 = !{i64 6540}
!98 = !{i64 6548}
!99 = !{i64 6552}
!100 = !{i64 6556}
!101 = !{i64 6564}
!102 = !{i64 6568}
!103 = !{i64 6576}
!104 = !{i64 6604}
!105 = !{i64 6608}
!106 = !{i64 6612}
!107 = !{i64 6624}
!108 = !{i64 6628}
!109 = !{i64 6648}
!110 = !{i64 6676}
!111 = !{i64 6680}
!112 = !{i64 6688}
!113 = !{i64 6692}
!114 = !{i64 6696}
!115 = !{i64 6700}
!116 = !{i64 6708}
!117 = !{i64 6716}
!118 = !{i64 6736}
!119 = !{i64 6772}
!120 = !{i64 6776}
!121 = !{i64 6780}
!122 = !{i64 6800}
!123 = !{i64 6804}
!124 = !{i64 6808}
!125 = !{i64 6820}
!126 = !{i64 6824}
!127 = !{i64 6832}
!128 = !{i64 6840}
!129 = !{i64 6852}
!130 = !{i64 6888}
!131 = !{i64 6900}
!132 = !{i64 6916}
!133 = !{i64 6920}
!134 = !{i64 6924}
!135 = !{i64 6932}
!136 = !{i64 6948}
!137 = !{i64 6960}
!138 = !{i64 6980}
!139 = !{i64 7016}
!140 = !{i64 7032}
!141 = !{i64 7036}
!142 = !{i64 7044}
!143 = !{i64 7064}
!144 = !{i64 7084}
!145 = !{i64 7088}
!146 = !{i64 7092}
!147 = !{i64 7100}
!148 = !{i64 7104}
!149 = !{i64 7116}
!150 = !{i64 7132}
!151 = !{i64 7144}
!152 = !{i64 7148}
!153 = !{i64 7152}
!154 = !{i64 7156}
!155 = !{i64 7164}
!156 = !{i64 7168}
!157 = !{i64 7180}
!158 = !{i64 7200}
!159 = !{i64 7204}
!160 = !{i64 7216}
!161 = !{i64 7224}
!162 = !{i64 7240}
!163 = !{i64 7252}
!164 = !{i64 7260}
!165 = !{i64 7268}
!166 = !{i64 7288}
!167 = !{i64 7296}
!168 = !{i64 7304}
!169 = !{i64 7328}
!170 = !{i64 7332}
!171 = !{i64 7344}
!172 = !{i64 7352}
!173 = !{i64 7368}
!174 = !{i64 7380}
!175 = !{i64 7388}
!176 = !{i64 7408}
!177 = !{i64 7444}
!178 = !{i64 7464}
!179 = !{i64 7488}
!180 = !{i64 7492}
!181 = !{i64 7500}
!182 = !{i64 7528}
!183 = !{i64 7548}
!184 = !{i64 7560}
!185 = !{i64 7572}
!186 = !{i64 7532}
!187 = !{i64 7540}
!188 = !{i64 7544}
!189 = !{i64 7504}
!190 = !{i64 7512}
!191 = !{i64 7520}
!192 = !{i64 7552}
!193 = !{i64 7588}
!194 = !{i64 7592}
!195 = !{i64 7596}
!196 = !{i64 7600}
!197 = !{i64 7620}
!198 = !{i64 7656}
!199 = !{i64 7664}
!200 = !{i64 7680}
!201 = !{i64 7696}
!202 = !{i64 7708}
!203 = !{i64 7716}
!204 = !{i64 7720}
!205 = !{i64 7724}
!206 = !{i64 7732}
!207 = !{i64 7740}
!208 = !{i64 7752}
!209 = !{i64 7760}
!210 = !{i64 7772}
!211 = !{i64 7792}
!212 = !{i64 7808}
!213 = !{i64 7828}
!214 = !{i64 7852}
!215 = !{i64 7860}
!216 = !{i64 7872}
!217 = !{i64 7836}
!218 = !{i64 7880}
!219 = !{i64 7892}
!220 = !{i64 7900}
!221 = !{i64 7904}
!222 = !{i64 7924}
!223 = !{i64 7928}
!224 = !{i64 7936}
!225 = !{i64 7940}
!226 = !{i64 7948}
!227 = !{i64 7964}
!228 = !{i64 7984}
!229 = !{i64 8008}
!230 = !{i64 8012}
!231 = !{i64 8024}
!232 = !{i64 8036}
!233 = !{i64 8044}
!234 = !{i64 8056}
!235 = !{i64 8068}
!236 = !{i64 8080}
!237 = !{i64 8096}
!238 = !{i64 8108}
!239 = !{i64 8124}
!240 = !{i64 8128}
!241 = !{i64 8160}
!242 = !{i64 8176}
!243 = !{i64 8180}
!244 = !{i64 8184}
!245 = !{i64 8204}
!246 = !{i64 8216}
!247 = !{i64 8220}
!248 = !{i64 8228}
!249 = !{i64 8236}
!250 = !{i64 8244}
!251 = !{i64 8260}
!252 = !{i64 8340}
!253 = !{i64 8344}
!254 = !{i64 8356}
!255 = !{i64 8360}
!256 = !{i64 8364}
!257 = !{i64 8280}
!258 = !{i64 8288}
!259 = !{i64 8300}
!260 = !{i64 8312}
!261 = !{i64 8380}
!262 = !{i64 8392}
!263 = !{i64 8408}
!264 = !{i64 8412}
!265 = !{i64 8424}
!266 = !{i64 8432}
!267 = !{i64 8444}
!268 = !{i64 8456}
!269 = !{i64 8460}
!270 = !{i64 8464}
!271 = !{i64 8476}
!272 = !{i64 8480}
!273 = !{i64 8484}
!274 = !{i64 8492}
!275 = !{i64 8496}
!276 = !{i64 8500}
!277 = !{i64 8504}
!278 = !{i64 8508}
!279 = !{i64 8524}
!280 = !{i64 8544}
!281 = !{i64 8560}
!282 = !{i64 8564}
!283 = !{i64 8576}
!284 = !{i64 8580}
!285 = !{i64 8588}
!286 = !{i64 8592}
!287 = !{i64 8596}
!288 = !{i64 8600}
!289 = !{i64 8604}
!290 = !{i64 8620}
!291 = !{i64 8640}
!292 = !{i64 8668}
!293 = !{i64 8672}
!294 = !{i64 8680}
!295 = !{i64 8684}
!296 = !{i64 8688}
!297 = !{i64 8692}
!298 = !{i64 8700}
!299 = !{i64 8712}
!300 = !{i64 8740}
!301 = !{i64 8756}
!302 = !{i64 8780}
!303 = !{i64 8784}
!304 = !{i64 8792}
!305 = !{i64 8804}
!306 = !{i64 8808}
!307 = !{i64 8812}
!308 = !{i64 8816}
!309 = !{i64 8820}
!310 = !{i64 8824}
!311 = !{i64 8840}
!312 = !{i64 8852}
!313 = !{i64 8864}
!314 = !{i64 8880}
!315 = !{i64 8892}
!316 = !{i64 8904}
!317 = !{i64 8924}
!318 = !{i64 8928}
!319 = !{i64 8948}
!320 = !{i64 8968}
!321 = !{i64 8988}
!322 = !{i64 8992}
!323 = !{i64 9012}
!324 = !{i64 9040}
!325 = !{i64 9060}
!326 = !{i64 9088}
!327 = !{i64 9120}
!328 = !{i64 9140}
!329 = !{i64 9148}
!330 = !{i64 9152}
!331 = !{i64 9164}
!332 = !{i64 9188}
!333 = !{i64 9200}
!334 = !{i64 9220}
!335 = !{i64 9228}
!336 = !{i64 9232}
!337 = !{i64 9244}
!338 = !{i64 9248}
!339 = !{i64 9252}
!340 = !{i64 9260}
!341 = !{i64 9276}
!342 = !{i64 9296}
!343 = !{i64 9300}
!344 = !{i64 9320}
!345 = !{i64 9328}
!346 = !{i64 9336}
!347 = !{i64 9348}
!348 = !{i64 9376}
!349 = !{i64 9396}
!350 = !{i64 9404}
!351 = !{i64 9436}
!352 = !{i64 9440}
!353 = !{i64 9456}
!354 = !{i64 9472}
!355 = !{i64 9476}
!356 = !{i64 9480}
!357 = !{i64 9484}
!358 = !{i64 9488}
!359 = !{i64 9500}
!360 = !{i64 9532}
!361 = !{i64 9536}
!362 = !{i64 9548}
!363 = !{i64 9560}
!364 = !{i64 9564}
!365 = !{i64 9568}
!366 = !{i64 9580}
!367 = !{i64 9588}
!368 = !{i64 9612}
!369 = !{i64 9620}
!370 = !{i64 9632}
!371 = !{i64 9664}
!372 = !{i64 9672}
!373 = !{i64 9684}
!374 = !{i64 9636}
!375 = !{i64 9692}
!376 = !{i64 9704}
!377 = !{i64 9708}
!378 = !{i64 9728}
!379 = !{i64 9740}
!380 = !{i64 9752}
!381 = !{i64 9784}
!382 = !{i64 9792}
!383 = !{i64 9804}
!384 = !{i64 9756}
!385 = !{i64 9812}
!386 = !{i64 9824}
!387 = !{i64 9828}
!388 = !{i64 9840}
!389 = !{i64 9852}
!390 = !{i64 9868}
!391 = !{i64 9872}
!392 = !{i64 9876}
!393 = !{i64 9880}
!394 = !{i64 9892}
!395 = !{i64 9904}
!396 = !{i64 9908}
!397 = !{i64 9916}
!398 = !{i64 9920}
!399 = !{i64 9924}
!400 = !{i64 9932}
!401 = !{i64 9940}
!402 = !{i64 9952}
!403 = !{i64 9964}
!404 = !{i64 9976}
!405 = !{i64 9996}
!406 = !{i64 10004}
!407 = !{i64 10036}
!408 = !{i64 10040}
!409 = !{i64 10056}
!410 = !{i64 10064}
!411 = !{i64 10076}
!412 = !{i64 10080}
!413 = !{i64 10084}
!414 = !{i64 10096}
!415 = !{i64 10100}
!416 = !{i64 10104}
!417 = !{i64 10108}
!418 = !{i64 10112}
!419 = !{i64 10120}
!420 = !{i64 10124}
!421 = !{i64 10128}
!422 = !{i64 10148}
!423 = !{i64 10156}
!424 = !{i64 10164}
!425 = !{i64 10172}
!426 = !{i64 10176}
!427 = !{i64 10180}
!428 = !{i64 10192}
!429 = !{i64 10200}
!430 = !{i64 10204}
!431 = !{i64 10208}
!432 = !{i64 10216}
!433 = !{i64 10236}
!434 = !{i64 10244}
!435 = !{i64 10252}
!436 = !{i64 10264}
!437 = !{i64 10272}
!438 = !{i64 10296}
!439 = !{i64 10300}
!440 = !{i64 10304}
!441 = !{i64 10308}
!442 = !{i64 10324}
!443 = !{i64 10336}
!444 = !{i64 10348}
!445 = !{i64 10352}
!446 = !{i64 10380}
!447 = !{i64 10384}
!448 = !{i64 10388}
!449 = !{i64 10412}
!450 = !{i64 10416}
!451 = !{i64 10420}
!452 = !{i64 10432}
!453 = !{i64 10436}
!454 = !{i64 10516}
!455 = !{i64 10460}
!456 = !{i64 10468}
!457 = !{i64 10480}
!458 = !{i64 10488}
!459 = !{i64 10524}
!460 = !{i64 10536}
!461 = !{i64 10544}
!462 = !{i64 10556}
!463 = !{i64 10564}
!464 = !{i64 10572}
!465 = !{i64 10576}
!466 = !{i64 10580}
!467 = !{i64 10612}
!468 = !{i64 10616}
!469 = !{i64 10620}
!470 = !{i64 10632}
!471 = !{i64 10636}
!472 = !{i64 10648}
!473 = !{i64 10656}
!474 = !{i64 10668}
!475 = !{i64 10672}
!476 = !{i64 10676}
!477 = !{i64 10692}
!478 = !{i64 10700}
!479 = !{i64 10704}
!480 = !{i64 10720}
!481 = !{i64 10724}
!482 = !{i64 10736}
!483 = !{i64 10776}
!484 = !{i64 10792}
!485 = !{i64 10796}
!486 = !{i64 10800}
!487 = !{i64 10828}
!488 = !{i64 10832}
!489 = !{i64 10836}
!490 = !{i64 10848}
!491 = !{i64 10852}
!492 = !{i64 10856}
!493 = !{i64 10868}
!494 = !{i64 10872}
!495 = !{i64 10880}
!496 = !{i64 10900}
!497 = !{i64 10908}
!498 = !{i64 10912}
!499 = !{i64 10924}
!500 = !{i64 10928}
!501 = !{i64 10936}
!502 = !{i64 10940}
!503 = !{i64 10948}
!504 = !{i64 10956}
!505 = !{i64 10976}
!506 = !{i64 10984}
!507 = !{i64 10988}
!508 = !{i64 11000}
!509 = !{i64 11004}
!510 = !{i64 11012}
!511 = !{i64 11024}
!512 = !{i64 11036}
!513 = !{i64 11040}
!514 = !{i64 11052}
!515 = !{i64 11088}
!516 = !{i64 11108}
!517 = !{i64 11120}
!518 = !{i64 11136}
!519 = !{i64 11156}
!520 = !{i64 11160}
!521 = !{i64 11172}
!522 = !{i64 11176}
!523 = !{i64 11192}
!524 = !{i64 11204}
!525 = !{i64 11244}
!526 = !{i64 11260}
!527 = !{i64 11292}
!528 = !{i64 11296}
!529 = !{i64 11316}
!530 = !{i64 11320}
!531 = !{i64 11340}
!532 = !{i64 11344}
!533 = !{i64 11368}
!534 = !{i64 11372}
!535 = !{i64 11384}
!536 = !{i64 11392}
!537 = !{i64 11404}
!538 = !{i64 11428}
!539 = !{i64 11432}
!540 = !{i64 11452}
!541 = !{i64 11464}
!542 = !{i64 11468}
!543 = !{i64 11472}
!544 = !{i64 11488}
!545 = !{i64 11504}
!546 = !{i64 11528}
!547 = !{i64 11532}
!548 = !{i64 11536}
!549 = !{i64 11540}
!550 = !{i64 11548}
!551 = !{i64 11552}
!552 = !{i64 11556}
!553 = !{i64 11560}
!554 = !{i64 11568}
!555 = !{i64 11576}
!556 = !{i64 11588}
!557 = !{i64 11604}
!558 = !{i64 11616}
!559 = !{i64 11620}
!560 = !{i64 11636}
!561 = !{i64 11652}
!562 = !{i64 11676}
!563 = !{i64 11680}
!564 = !{i64 11684}
!565 = !{i64 11688}
!566 = !{i64 11696}
!567 = !{i64 11700}
!568 = !{i64 11704}
!569 = !{i64 11708}
!570 = !{i64 11716}
!571 = !{i64 11724}
!572 = !{i64 11736}
!573 = !{i64 11752}
!574 = !{i64 11764}
!575 = !{i64 11772}
!576 = !{i64 11776}
!577 = !{i64 11800}
!578 = !{i64 11808}
!579 = !{i64 11824}
!580 = !{i64 11856}
!581 = !{i64 11872}
!582 = !{i64 11892}
!583 = !{i64 11900}
!584 = !{i64 11904}
!585 = !{i64 11908}
!586 = !{i64 11912}
!587 = !{i64 11916}
!588 = !{i64 11924}
!589 = !{i64 11932}
!590 = !{i64 11936}
!591 = !{i64 11944}
!592 = !{i64 11948}
!593 = !{i64 11952}
!594 = !{i64 11956}
!595 = !{i64 11964}
!596 = !{i64 11972}
!597 = !{i64 11980}
!598 = !{i64 11992}
!599 = !{i64 12020}
!600 = !{i64 12040}
!601 = !{i64 12044}
!602 = !{i64 12048}
!603 = !{i64 12052}
!604 = !{i64 12068}
!605 = !{i64 12072}
!606 = !{i64 12076}
!607 = !{i64 12080}
!608 = !{i64 12100}
!609 = !{i64 12108}
!610 = !{i64 12064}
!611 = !{i64 12120}
!612 = !{i64 12176}
!613 = !{i64 12144}
!614 = !{i64 12168}
!615 = !{i64 12148}
!616 = !{i64 12152}
!617 = !{i64 12180}
!618 = !{i64 12188}
!619 = !{i64 12216}
!620 = !{i64 12220}
!621 = !{i64 12228}
!622 = !{i64 12236}
!623 = !{i64 12252}
!624 = !{i64 12260}
!625 = !{i64 12276}
!626 = !{i64 12280}
!627 = !{i64 12284}
!628 = !{i64 12288}
!629 = !{i64 12300}
!630 = !{i64 12328}
!631 = !{i64 12336}
!632 = !{i64 12352}
!633 = !{i64 12368}
!634 = !{i64 12396}
!635 = !{i64 12400}
!636 = !{i64 12404}
!637 = !{i64 12408}
!638 = !{i64 12432}
!639 = !{i64 12436}
!640 = !{i64 12448}
!641 = !{i64 12452}
!642 = !{i64 12460}
!643 = !{i64 12464}
!644 = !{i64 12468}
!645 = !{i64 12472}
!646 = !{i64 12480}
!647 = !{i64 12488}
!648 = !{i64 12500}
!649 = !{i64 12516}
!650 = !{i64 12536}
!651 = !{i64 12540}
!652 = !{i64 12544}
!653 = !{i64 12548}
!654 = !{i64 12560}
!655 = !{i64 12572}
!656 = !{i64 12584}
!657 = !{i64 12588}
!658 = !{i64 12592}
!659 = !{i64 12604}
!660 = !{i64 12608}
!661 = !{i64 12636}
!662 = !{i64 12644}
!663 = !{i64 12580}
!664 = !{i64 12664}
!665 = !{i64 12704}
!666 = !{i64 12672}
!667 = !{i64 12676}
!668 = !{i64 12680}
!669 = !{i64 12684}
!670 = !{i64 12708}
!671 = !{i64 12716}
!672 = !{i64 12732}
!673 = !{i64 12740}
!674 = !{i64 12748}
!675 = !{i64 12760}
!676 = !{i64 12772}
!677 = !{i64 12796}
!678 = !{i64 12800}
!679 = !{i64 12804}
!680 = !{i64 12808}
!681 = !{i64 12816}
!682 = !{i64 12820}
!683 = !{i64 12828}
!684 = !{i64 12844}
!685 = !{i64 12852}
!686 = !{i64 12868}
!687 = !{i64 12880}
!688 = !{i64 12884}
!689 = !{i64 12892}
!690 = !{i64 12896}
!691 = !{i64 12920}
!692 = !{i64 12924}
!693 = !{i64 12928}
!694 = !{i64 12936}
!695 = !{i64 12940}
!696 = !{i64 12964}
!697 = !{i64 12972}
!698 = !{i64 12984}
!699 = !{i64 12992}
!700 = !{i64 13004}
!701 = !{i64 13020}
!702 = !{i64 13024}
!703 = !{i64 13036}
!704 = !{i64 13044}
!705 = !{i64 13056}
!706 = !{i64 13060}
!707 = !{i64 13068}
!708 = !{i64 13088}
!709 = !{i64 13108}
!710 = !{i64 13112}
!711 = !{i64 13116}
!712 = !{i64 13124}
!713 = !{i64 13140}
!714 = !{i64 13148}
!715 = !{i64 13172}
!716 = !{i64 13176}
!717 = !{i64 13180}
!718 = !{i64 13184}
!719 = !{i64 13188}
!720 = !{i64 13204}
!721 = !{i64 13212}
!722 = !{i64 13232}
!723 = !{i64 13236}
!724 = !{i64 13244}
!725 = !{i64 13252}
!726 = !{i64 13260}
!727 = !{i64 13268}
!728 = !{i64 13276}
!729 = !{i64 13284}
!730 = !{i64 13296}
!731 = !{i64 13316}
!732 = !{i64 13320}
!733 = !{i64 13344}
!734 = !{i64 13332}
!735 = !{i64 13336}
!736 = !{i64 13348}
!737 = !{i64 13352}
!738 = !{i64 13356}
!739 = !{i64 13360}
!740 = !{i64 13364}
!741 = !{i64 13368}
!742 = !{i64 13372}
!743 = !{i64 13376}
!744 = !{i64 13384}
!745 = !{i64 13392}
!746 = !{i64 13400}
!747 = !{i64 13420}
!748 = !{i64 13428}
!749 = !{i64 13432}
!750 = !{i64 13424}
!751 = !{i64 13464}
!752 = !{i64 13472}
!753 = !{i64 13480}
!754 = !{i64 13504}
!755 = !{i64 13516}
!756 = !{i64 13528}
!757 = !{i64 13556}
!758 = !{i64 13560}
!759 = !{i64 13564}
!760 = !{i64 13568}
!761 = !{i64 13576}
!762 = !{i64 13580}
!763 = !{i64 13588}
!764 = !{i64 13608}
!765 = !{i64 13612}
!766 = !{i64 13632}
!767 = !{i64 13644}
!768 = !{i64 13664}
!769 = !{i64 13668}
!770 = !{i64 13688}
!771 = !{i64 13700}
!772 = !{i64 13720}
!773 = !{i64 13728}
!774 = !{i64 13740}
!775 = !{i64 13748}
!776 = !{i64 13760}
!777 = !{i64 13784}
!778 = !{i64 13796}
!779 = !{i64 13804}
!780 = !{i64 13808}
!781 = !{i64 13816}
!782 = !{i64 13820}
!783 = !{i64 13824}
!784 = !{i64 13828}
!785 = !{i64 13832}
!786 = !{i64 13836}
!787 = !{i64 13844}
!788 = !{i64 13848}
!789 = !{i64 13852}
!790 = !{i64 13856}
!791 = !{i64 13872}
!792 = !{i64 13880}
!793 = !{i64 13884}
!794 = !{i64 13904}
!795 = !{i64 13888}
!796 = !{i64 13892}
!797 = !{i64 13908}
!798 = !{i64 13912}
!799 = !{i64 13900}
!800 = !{i64 13916}
!801 = !{i64 13936}
