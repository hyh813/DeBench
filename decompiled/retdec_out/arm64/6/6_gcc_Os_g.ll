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
@global_var_14ff0 = local_unnamed_addr global i64 6080
@global_var_15010 = global i64 0
@global_var_14fd0 = local_unnamed_addr global i64 0
@global_var_14ff8 = local_unnamed_addr global i64 0
@global_var_1934 = local_unnamed_addr constant i64 4107355841630306336
@signal_received = local_unnamed_addr global i32 0
@signal_number = local_unnamed_addr global i32 0
@counter_mutex = global i32 0
@shared_counter = local_unnamed_addr global i32 0
@cond = global i32 0
@cond_mutex = global i32 0
@ready = local_unnamed_addr global i32 0
@data = local_unnamed_addr global i32 0
@atomic_counter = local_unnamed_addr global i32 0
@global_var_14fe8 = local_unnamed_addr global i64 0
@global_var_3178 = constant [9 x i8] c"HelloLib\00"
@global_var_3181 = constant [4 x i8] c"def\00"
@global_var_3185 = constant [4 x i8] c"abc\00"
@global_var_3189 = constant [4 x i8] c"xyz\00"
@global_var_318d = constant [4 x i8] c"aaa\00"
@global_var_3191 = constant [4 x i8] c"bbb\00"
@global_var_3564 = local_unnamed_addr constant i64 85899345930
@global_var_356c = local_unnamed_addr constant i64 171798691870
@global_var_3574 = local_unnamed_addr constant i64 4294967346
@global_var_3578 = local_unnamed_addr constant i64 8589934593
@global_var_3584 = local_unnamed_addr constant i64 8589934593
@global_var_3580 = local_unnamed_addr constant i64 4294967299
@global_var_358c = local_unnamed_addr constant i64 4294967300
@global_var_3195 = constant [21 x i8] c"Value: %d, Name: %s\0A\00"
@global_var_3208 = constant [5 x i8] c"Test\00"
@global_var_31aa = constant [6 x i8] c"%d,%d\00"
@global_var_31b0 = constant [8 x i8] c"123,456\00"
@global_var_31ba = constant [12 x i8] c"/etc/passwd\00"
@global_var_31c6 = constant [3 x i8] c"w+\00"
@global_var_31c9 = constant [19 x i8] c"BinBench Test Data\00"
@global_var_1fe0 = local_unnamed_addr constant i64 -1152920950245687264
@global_var_31dc = constant [23 x i8] c"/tmp/binbench_test.tmp\00"
@global_var_31f3 = constant [6 x i8] c"Bench\00"
@global_var_31f9 = constant [20 x i8] c"Hello BinBench Test\00"
@global_var_24f4 = local_unnamed_addr constant i64 1729382218565943328
@global_var_337f = local_unnamed_addr constant [10 x i8] c"/bin/true\00"
@global_var_3389 = constant [10 x i8] c"HelloPipe\00"
@global_var_2684 = local_unnamed_addr constant i64 -3458763959459381216
@global_var_26a8 = local_unnamed_addr constant i64 -6268166259280445376
@global_var_26d0 = local_unnamed_addr constant i64 1729382175616270400
@global_var_26f0 = local_unnamed_addr constant i64 1729382141256532064
@global_var_3393 = constant [18 x i8] c"/tmp/binbench_shm\00"
@global_var_33a5 = constant [13 x i8] c"SharedMemory\00"
@global_var_35a0 = local_unnamed_addr constant i64 20
@global_var_2c2c = local_unnamed_addr constant i64 -6250622504361000928
@global_var_2e24 = local_unnamed_addr constant i64 -3458763959459381216
@global_var_3491 = constant [10 x i8] c"Thread-%d\00"
@global_var_2fc8 = local_unnamed_addr constant i64 -3458763959459381216
@0 = external global i32
@global_var_15000 = external global i8*
@global_var_150c4 = local_unnamed_addr global i32 0
@global_var_3e8 = global i32 0
@1 = internal constant [2 x i8] c"r\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i64 0, i64 0)
@3 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\87\E5\87\86\E5\BA\93\E5\87\BD\E6\95\B0\E8\B0\83\E7\94\A8 ===\00"
@global_var_320d = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @3, i64 0, i64 0)
@4 = internal constant [27 x i8] c"LIB-L1-01: %d (\E6\9C\9F\E6\9C\9B: 8)\0A\00"
@global_var_3231 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @4, i64 0, i64 0)
@5 = internal constant [27 x i8] c"LIB-L1-02: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_324c = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @5, i64 0, i64 0)
@6 = internal constant [28 x i8] c"LIB-L1-03: %d (\E6\9C\9F\E6\9C\9B: 12)\0A\00"
@global_var_3267 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @6, i64 0, i64 0)
@7 = internal constant [28 x i8] c"LIB-L1-04: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_3283 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @7, i64 0, i64 0)
@8 = internal constant [28 x i8] c"LIB-L1-05: %d (\E6\9C\9F\E6\9C\9B: -1)\0A\00"
@global_var_329f = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i64 0, i64 0)
@9 = internal constant [28 x i8] c"LIB-L1-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_32bb = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i64 0, i64 0)
@10 = internal constant [29 x i8] c"LIB-L1-07: %d (\E6\9C\9F\E6\9C\9B: 579)\0A\00"
@global_var_32d7 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"LIB-L1-08: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_32f4 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [28 x i8] c"LIB-L1-09: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3310 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @12, i64 0, i64 0)
@13 = internal constant [28 x i8] c"LIB-L1-10: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_332c = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @13, i64 0, i64 0)
@14 = internal constant [27 x i8] c"LIB-L1-11: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_3348 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @14, i64 0, i64 0)
@15 = internal constant [28 x i8] c"LIB-L1-12: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_3363 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @15, i64 0, i64 0)
@global_var_3b6 = global i32 0
@global_var_1000 = global i64* (i64*)* inttoptr (i64 120259085314 to i64* (i64*)*)
@global_var_3e9 = global i32 0
@global_var_7d1 = global i32 301989888
@16 = internal constant [27 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\B3\BB\E7\BB\9F\E8\B0\83\E7\94\A8 ===\00"
@global_var_33b2 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @16, i64 0, i64 0)
@17 = internal constant [28 x i8] c"SYS-L3-01: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_33cd = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i64 0, i64 0)
@18 = internal constant [28 x i8] c"SYS-L3-02: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_33e9 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @18, i64 0, i64 0)
@19 = internal constant [28 x i8] c"SYS-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3405 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @19, i64 0, i64 0)
@20 = internal constant [28 x i8] c"SYS-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3421 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @20, i64 0, i64 0)
@21 = internal constant [28 x i8] c"SYS-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_343d = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @21, i64 0, i64 0)
@22 = internal constant [28 x i8] c"SYS-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3459 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @22, i64 0, i64 0)
@23 = internal constant [28 x i8] c"SYS-L3-07: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3475 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @23, i64 0, i64 0)
@global_var_3590 = local_unnamed_addr constant fp128 0xL00000000000000003BED0000000A0000
@24 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\BA\BF\E7\A8\8B\E4\B8\8E\E5\B9\B6\E5\8F\91 ===\00"
@global_var_349b = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @24, i64 0, i64 0)
@25 = internal constant [28 x i8] c"THR-L3-01: %d (\E6\9C\9F\E6\9C\9B: 49)\0A\00"
@global_var_34b9 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @25, i64 0, i64 0)
@26 = internal constant [29 x i8] c"THR-L3-02: %d (\E6\9C\9F\E6\9C\9B: 465)\0A\00"
@global_var_34d5 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @26, i64 0, i64 0)
@27 = internal constant [28 x i8] c"THR-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_34f2 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @27, i64 0, i64 0)
@28 = internal constant [28 x i8] c"THR-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_350e = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @28, i64 0, i64 0)
@29 = internal constant [28 x i8] c"THR-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_352a = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @29, i64 0, i64 0)
@30 = internal constant [28 x i8] c"THR-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3546 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @30, i64 0, i64 0)
@global_var_31b8 = constant [2 x i8] c"r\00"

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
  store i8 %3, i8* inttoptr (i64 add (i64 ptrtoint (i8** @global_var_15000 to i64), i64 196) to i8*), align 4, !insn.addr !70
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
  %5 = load i64, i64* inttoptr (i64 add (i64 ptrtoint (i8** @global_var_15000 to i64), i64 8) to i64*), align 8, !insn.addr !86
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
dec_label_pc_1954:
  store i32 1, i32* @signal_received, align 4, !insn.addr !92
  store i32 %sig, i32* @signal_number, align 4, !insn.addr !93
  ret void, !insn.addr !94
}

define i8* @thread_sum(i8* %arg) local_unnamed_addr {
dec_label_pc_196c:
  %x1.01.reg2mem = alloca i64, !insn.addr !95
  %.reg2mem = alloca i32, !insn.addr !95
  %0 = ptrtoint i8* %arg to i64
  %1 = trunc i64 %0 to i32
  %2 = add i64 %0, 4, !insn.addr !95
  %3 = inttoptr i64 %2 to i32*, !insn.addr !95
  %4 = load i32, i32* %3, align 4, !insn.addr !95
  %5 = add i64 %0, 8, !insn.addr !96
  %6 = inttoptr i64 %5 to i32*, !insn.addr !96
  store i32 0, i32* %6, align 4, !insn.addr !96
  %7 = icmp ult i32 %4, %1, !insn.addr !97
  br i1 %7, label %dec_label_pc_197c, label %dec_label_pc_1984.lr.ph, !insn.addr !97

dec_label_pc_1984.lr.ph:                          ; preds = %dec_label_pc_196c
  %8 = zext i32 %4 to i64, !insn.addr !95
  %9 = and i64 %0, 4294967295, !insn.addr !95
  store i32 0, i32* %.reg2mem
  store i64 %9, i64* %x1.01.reg2mem
  br label %dec_label_pc_1984

dec_label_pc_197c.loopexit:                       ; preds = %dec_label_pc_1984
  store i32 %11, i32* %6, align 4
  br label %dec_label_pc_197c

dec_label_pc_197c:                                ; preds = %dec_label_pc_197c.loopexit, %dec_label_pc_196c
  ret i8* null, !insn.addr !98

dec_label_pc_1984:                                ; preds = %dec_label_pc_1984.lr.ph, %dec_label_pc_1984
  %x1.01.reload = load i64, i64* %x1.01.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %10 = trunc i64 %x1.01.reload to i32, !insn.addr !99
  %11 = add i32 %.reload, %10, !insn.addr !99
  %12 = add nuw nsw i64 %x1.01.reload, 1, !insn.addr !100
  %13 = and i64 %12, 4294967295, !insn.addr !100
  %14 = icmp ugt i64 %13, %8, !insn.addr !97
  store i32 %11, i32* %.reg2mem, !insn.addr !97
  store i64 %13, i64* %x1.01.reg2mem, !insn.addr !97
  br i1 %14, label %dec_label_pc_197c.loopexit, label %dec_label_pc_1984, !insn.addr !97

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i64 %0, { 0, 3, 2, 1 }
  uselistorder i32* %.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x1.01.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1984, { 1, 0 }
}

define i8* @thread_compute(i8* %arg) local_unnamed_addr {
dec_label_pc_1998:
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
dec_label_pc_19c4:
  %0 = alloca i64
  %x20.01.reg2mem = alloca i64, !insn.addr !105
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = and i64 %1, 4294967295, !insn.addr !106
  %4 = icmp eq i32 %2, 0, !insn.addr !107
  store i64 0, i64* %x20.01.reg2mem, !insn.addr !107
  br i1 %4, label %dec_label_pc_19f0, label %dec_label_pc_1a04, !insn.addr !107

dec_label_pc_19f0:                                ; preds = %dec_label_pc_1a04, %dec_label_pc_19c4
  ret i8* null, !insn.addr !108

dec_label_pc_1a04:                                ; preds = %dec_label_pc_19c4, %dec_label_pc_1a04
  %x20.01.reload = load i64, i64* %x20.01.reg2mem
  %5 = call i32 @pthread_mutex_lock(i64* bitcast (i32* @counter_mutex to i64*)), !insn.addr !109
  %6 = load i32, i32* @shared_counter, align 4, !insn.addr !110
  %7 = add nuw nsw i64 %x20.01.reload, 1, !insn.addr !111
  %8 = and i64 %7, 4294967295, !insn.addr !111
  %9 = add i32 %6, 1, !insn.addr !112
  store i32 %9, i32* @shared_counter, align 4, !insn.addr !113
  %10 = call i32 @pthread_mutex_unlock(i64* bitcast (i32* @counter_mutex to i64*)), !insn.addr !114
  %11 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !115
  %12 = icmp ult i64 %8, %3, !insn.addr !107
  store i64 %8, i64* %x20.01.reg2mem, !insn.addr !107
  br i1 %12, label %dec_label_pc_1a04, label %dec_label_pc_19f0, !insn.addr !107

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %x20.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1a04, { 1, 0 }
}

define i8* @consumer_thread(i8* %arg) local_unnamed_addr {
dec_label_pc_1a30:
  %0 = call i32 @pthread_mutex_lock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !116
  %1 = load i32, i32* @ready, align 4, !insn.addr !117
  %2 = icmp eq i32 %1, 0, !insn.addr !118
  br i1 %2, label %dec_label_pc_1a88, label %dec_label_pc_1a60, !insn.addr !118

dec_label_pc_1a60:                                ; preds = %dec_label_pc_1a88, %dec_label_pc_1a30
  %3 = load i32, i32* @data, align 4, !insn.addr !119
  %4 = call i32 @pthread_mutex_unlock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !120
  %5 = call i64* @malloc(i32 4), !insn.addr !121
  %6 = bitcast i64* %5 to i32*, !insn.addr !122
  store i32 %3, i32* %6, align 4, !insn.addr !122
  %7 = bitcast i64* %5 to i8*, !insn.addr !123
  ret i8* %7, !insn.addr !123

dec_label_pc_1a88:                                ; preds = %dec_label_pc_1a30, %dec_label_pc_1a88
  %8 = call i32 @pthread_cond_wait(i64* bitcast (i32* @cond to i64*), i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !124
  %9 = load i32, i32* @ready, align 4, !insn.addr !117
  %10 = icmp eq i32 %9, 0, !insn.addr !118
  br i1 %10, label %dec_label_pc_1a88, label %dec_label_pc_1a60, !insn.addr !118

; uselistorder directives
  uselistorder label %dec_label_pc_1a88, { 1, 0 }
}

define i8* @producer_thread(i8* %arg) local_unnamed_addr {
dec_label_pc_1a98:
  %0 = call i32 @sleep(i32 1), !insn.addr !125
  %1 = call i32 @pthread_mutex_lock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !126
  store i32 42, i32* @data, align 4, !insn.addr !127
  store i32 1, i32* @ready, align 4, !insn.addr !128
  %2 = call i32 @pthread_cond_signal(i64* bitcast (i32* @cond to i64*)), !insn.addr !129
  %3 = call i32 @pthread_mutex_unlock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !130
  ret i8* null, !insn.addr !131

; uselistorder directives
  uselistorder i32 (i64*)* @pthread_mutex_unlock, { 2, 1, 0, 3 }
  uselistorder i64* bitcast (i32* @cond to i64*), { 1, 0 }
  uselistorder i32 (i64*)* @pthread_mutex_lock, { 2, 1, 0, 3 }
  uselistorder i64* bitcast (i32* @cond_mutex to i64*), { 2, 3, 0, 1, 4 }
}

define i8* @thread_atomic_increment(i8* %arg) local_unnamed_addr {
dec_label_pc_1af0:
  %0 = alloca i64
  %x20.01.reg2mem = alloca i64, !insn.addr !132
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = and i64 %1, 4294967295, !insn.addr !133
  %4 = icmp eq i32 %2, 0, !insn.addr !134
  store i64 0, i64* %x20.01.reg2mem, !insn.addr !134
  br i1 %4, label %dec_label_pc_1b1c, label %dec_label_pc_1b30, !insn.addr !134

dec_label_pc_1b1c:                                ; preds = %dec_label_pc_1b30, %dec_label_pc_1af0
  ret i8* null, !insn.addr !135

dec_label_pc_1b30:                                ; preds = %dec_label_pc_1af0, %dec_label_pc_1b30
  %x20.01.reload = load i64, i64* %x20.01.reg2mem
  %5 = call i64 @__aarch64_ldadd4_acq_rel(), !insn.addr !136
  %6 = add nuw nsw i64 %x20.01.reload, 1, !insn.addr !137
  %7 = and i64 %6, 4294967295, !insn.addr !137
  %8 = call i64 @__aarch64_cas4_acq_rel(), !insn.addr !138
  %9 = icmp ult i64 %7, %3, !insn.addr !134
  store i64 %7, i64* %x20.01.reg2mem, !insn.addr !134
  br i1 %9, label %dec_label_pc_1b30, label %dec_label_pc_1b1c, !insn.addr !134

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %x20.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1b30, { 1, 0 }
}

define i8* @thread_atomic_load_store(i8* %arg) local_unnamed_addr {
dec_label_pc_1b54:
  %0 = load i32, i32* @atomic_counter, align 4, !insn.addr !139
  %1 = add i32 %0, 100, !insn.addr !140
  %2 = load i64, i64* bitcast (i32* @atomic_counter to i64*), align 8, !insn.addr !141
  call void @__asm_stlr(i32 %1, i64 %2), !insn.addr !141
  ret i8* null, !insn.addr !142
}

define i8* @thread_tls_test(i8* %arg) local_unnamed_addr {
dec_label_pc_1b74:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = call i64 @__asm_mrs(i64 %2, i64 %1), !insn.addr !143
  %4 = add i64 %3, 16, !insn.addr !144
  %5 = inttoptr i64 %4 to i32*, !insn.addr !145
  %6 = load i32, i32* %5, align 4, !insn.addr !145
  %7 = add i64 %3, 20, !insn.addr !146
  %8 = add i32 %6, 50, !insn.addr !147
  store i32 %8, i32* %5, align 4, !insn.addr !148
  %9 = inttoptr i64 %7 to i8*, !insn.addr !149
  %10 = call i8* @strncpy(i8* %9, i8* %arg, i32 31), !insn.addr !149
  %11 = call i64* @malloc(i32 8), !insn.addr !150
  %12 = ptrtoint i64* %11 to i64, !insn.addr !150
  %13 = bitcast i64* %11 to i32*, !insn.addr !151
  store i32 %6, i32* %13, align 4, !insn.addr !151
  %14 = add i64 %12, 4, !insn.addr !151
  %15 = inttoptr i64 %14 to i32*, !insn.addr !151
  store i32 %8, i32* %15, align 4, !insn.addr !151
  %16 = bitcast i64* %11 to i8*, !insn.addr !152
  ret i8* %16, !insn.addr !152

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i32 @param_strcpy(i8* %dst, i8* %src) local_unnamed_addr {
dec_label_pc_1bc4:
  %0 = call i8* @strcpy(i8* %dst, i8* %src), !insn.addr !153
  %1 = call i32 @strlen(i8* %dst), !insn.addr !154
  ret i32 %1, !insn.addr !155
}

define i32 @call_strcpy() local_unnamed_addr {
dec_label_pc_1bec:
  %x0.0.reg2mem = alloca i32, !insn.addr !156
  %stack_var_-32 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !157
  %1 = inttoptr i64 %0 to i64*, !insn.addr !158
  %2 = load i64, i64* %1, align 8, !insn.addr !158
  %3 = bitcast i64* %stack_var_-32 to i8*, !insn.addr !159
  %4 = call i32 @param_strcpy(i8* nonnull %3, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_3178, i64 0, i64 0)), !insn.addr !159
  %5 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !160
  %6 = inttoptr i64 %5 to i64*, !insn.addr !161
  %7 = load i64, i64* %6, align 8, !insn.addr !161
  %8 = icmp eq i64 %2, %7, !insn.addr !162
  store i32 %4, i32* %x0.0.reg2mem, !insn.addr !163
  br i1 %8, label %dec_label_pc_1c38, label %dec_label_pc_1c34, !insn.addr !163

dec_label_pc_1c34:                                ; preds = %dec_label_pc_1bec
  call void @__stack_chk_fail(), !insn.addr !164
  store i32 ptrtoint (i32* @0 to i32), i32* %x0.0.reg2mem, !insn.addr !164
  br label %dec_label_pc_1c38, !insn.addr !164

dec_label_pc_1c38:                                ; preds = %dec_label_pc_1c34, %dec_label_pc_1bec
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !165
}

define i32 @param_strcmp(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_1c40:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !166
  %1 = icmp slt i32 %0, 1, !insn.addr !167
  %2 = icmp ne i32 %0, 0
  %phitmp = sext i1 %2 to i32
  %storemerge = select i1 %1, i32 %phitmp, i32 1
  ret i32 %storemerge, !insn.addr !168

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
}

define i32 @call_strcmp() local_unnamed_addr {
dec_label_pc_1c60:
  %0 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_3185, i64 0, i64 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_3181, i64 0, i64 0)), !insn.addr !169
  %1 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_3189, i64 0, i64 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_3189, i64 0, i64 0)), !insn.addr !170
  %2 = add i32 %1, %0, !insn.addr !171
  %3 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_3191, i64 0, i64 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_318d, i64 0, i64 0)), !insn.addr !172
  %4 = add i32 %2, %3, !insn.addr !173
  ret i32 %4, !insn.addr !174

; uselistorder directives
  uselistorder i32 (i8*, i8*)* @param_strcmp, { 2, 1, 0 }
}

define i64 @param_strlen(i64 %arg1) local_unnamed_addr {
dec_label_pc_1cc0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i8*, !insn.addr !175
  %3 = call i32 @strlen(i8* %2), !insn.addr !175
  %4 = sext i32 %3 to i64, !insn.addr !175
  ret i64 %4, !insn.addr !176
}

define i64 @call_strlen() local_unnamed_addr {
dec_label_pc_1cd4:
  ret i64 12, !insn.addr !177
}

define i32 @param_memcpy(i8* %dst, i32* %src, i64 %n) local_unnamed_addr {
dec_label_pc_1cdc:
  %0 = bitcast i8* %dst to i64*, !insn.addr !178
  %1 = bitcast i32* %src to i64*, !insn.addr !178
  %2 = trunc i64 %n to i32, !insn.addr !178
  %3 = call i64* @memcpy(i64* %0, i64* %1, i32 %2), !insn.addr !178
  ret i32 %2, !insn.addr !179
}

define i32 @call_memcpy() local_unnamed_addr {
dec_label_pc_1d00:
  %x0.0.reg2mem = alloca i32, !insn.addr !180
  %stack_var_-24 = alloca i32, align 4
  %stack_var_-48 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !181
  %1 = inttoptr i64 %0 to i64*, !insn.addr !182
  %2 = load i64, i64* %1, align 8, !insn.addr !182
  store i32 0, i32* %stack_var_-24, align 4, !insn.addr !183
  store i64 85899345930, i64* %stack_var_-48, align 8, !insn.addr !184
  %3 = bitcast i32* %stack_var_-24 to i8*, !insn.addr !185
  %4 = bitcast i64* %stack_var_-48 to i32*, !insn.addr !185
  %5 = call i32 @param_memcpy(i8* nonnull %3, i32* nonnull %4, i64 20), !insn.addr !185
  %6 = load i32, i32* %stack_var_-24, align 4, !insn.addr !186
  %7 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !187
  %8 = inttoptr i64 %7 to i64*, !insn.addr !188
  %9 = load i64, i64* %8, align 8, !insn.addr !188
  %10 = icmp eq i64 %2, %9, !insn.addr !189
  store i32 %6, i32* %x0.0.reg2mem, !insn.addr !190
  br i1 %10, label %dec_label_pc_1d80, label %dec_label_pc_1d7c, !insn.addr !190

dec_label_pc_1d7c:                                ; preds = %dec_label_pc_1d00
  call void @__stack_chk_fail(), !insn.addr !191
  store i32 ptrtoint (i32* @0 to i32), i32* %x0.0.reg2mem, !insn.addr !191
  br label %dec_label_pc_1d80, !insn.addr !191

dec_label_pc_1d80:                                ; preds = %dec_label_pc_1d7c, %dec_label_pc_1d00
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !192

; uselistorder directives
  uselistorder i32* %stack_var_-24, { 1, 2, 0 }
  uselistorder i64 20, { 0, 2, 1 }
}

define i32 @param_memcmp(i32* %p1, i32* %p2, i64 %n) local_unnamed_addr {
dec_label_pc_1d88:
  %0 = bitcast i32* %p1 to i64*, !insn.addr !193
  %1 = bitcast i32* %p2 to i64*, !insn.addr !193
  %2 = trunc i64 %n to i32, !insn.addr !193
  %3 = call i32 @memcmp(i64* %0, i64* %1, i32 %2), !insn.addr !193
  %4 = icmp slt i32 %3, 1, !insn.addr !194
  %5 = icmp ne i32 %3, 0
  %phitmp = sext i1 %5 to i32
  %storemerge = select i1 %4, i32 %phitmp, i32 1
  ret i32 %storemerge, !insn.addr !195

; uselistorder directives
  uselistorder i32 %3, { 1, 0 }
}

define i32 @call_memcmp() local_unnamed_addr {
dec_label_pc_1da8:
  %x0.0.reg2mem = alloca i32, !insn.addr !196
  %stack_var_-32 = alloca i64, align 8
  %stack_var_-16 = alloca i64, align 8
  %stack_var_-48 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !197
  %1 = inttoptr i64 %0 to i64*, !insn.addr !198
  %2 = load i64, i64* %1, align 8, !insn.addr !198
  store i64 8589934593, i64* %stack_var_-48, align 8, !insn.addr !199
  store i64 8589934593, i64* %stack_var_-32, align 8, !insn.addr !200
  store i64 8589934593, i64* %stack_var_-16, align 8, !insn.addr !201
  %3 = bitcast i64* %stack_var_-48 to i32*, !insn.addr !202
  %4 = bitcast i64* %stack_var_-32 to i32*, !insn.addr !202
  %5 = call i32 @param_memcmp(i32* nonnull %3, i32* nonnull %4, i64 12), !insn.addr !202
  %6 = bitcast i64* %stack_var_-16 to i32*, !insn.addr !203
  %7 = call i32 @param_memcmp(i32* nonnull %3, i32* nonnull %6, i64 12), !insn.addr !203
  %8 = add i32 %7, %5, !insn.addr !204
  %9 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !205
  %10 = inttoptr i64 %9 to i64*, !insn.addr !206
  %11 = load i64, i64* %10, align 8, !insn.addr !206
  %12 = icmp eq i64 %2, %11, !insn.addr !207
  store i32 %8, i32* %x0.0.reg2mem, !insn.addr !208
  br i1 %12, label %dec_label_pc_1e4c, label %dec_label_pc_1e48, !insn.addr !208

dec_label_pc_1e48:                                ; preds = %dec_label_pc_1da8
  call void @__stack_chk_fail(), !insn.addr !209
  store i32 ptrtoint (i32* @0 to i32), i32* %x0.0.reg2mem, !insn.addr !209
  br label %dec_label_pc_1e4c, !insn.addr !209

dec_label_pc_1e4c:                                ; preds = %dec_label_pc_1e48, %dec_label_pc_1da8
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !210

; uselistorder directives
  uselistorder i32 (i32*, i32*, i64)* @param_memcmp, { 1, 0 }
  uselistorder i64 8589934593, { 1, 0, 2, 3, 4 }
}

define i32 @param_printf(i32 %x, i8* %name) local_unnamed_addr {
dec_label_pc_1e5c:
  %0 = zext i32 %x to i64, !insn.addr !211
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_3195, i64 0, i64 0), i64 %0, i8* %name), !insn.addr !212
  ret i32 %1, !insn.addr !212
}

define i32 @call_printf() local_unnamed_addr {
dec_label_pc_1e74:
  %0 = call i32 @param_printf(i32 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_3208, i64 0, i64 0)), !insn.addr !213
  ret i32 %0, !insn.addr !213
}

define i32 @param_scanf(i8* %input_str) local_unnamed_addr {
dec_label_pc_1e84:
  %storemerge.reg2mem = alloca i32, !insn.addr !214
  %stack_var_-8 = alloca i64, align 8
  %stack_var_-4 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !215
  %1 = inttoptr i64 %0 to i64*, !insn.addr !216
  %2 = load i64, i64* %1, align 8, !insn.addr !216
  %3 = call i32 (i8*, i8*, ...) @sscanf(i8* %input_str, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_31aa, i64 0, i64 0), i64* nonnull %stack_var_-8, i64* nonnull %stack_var_-4), !insn.addr !217
  %4 = icmp eq i32 %3, 2, !insn.addr !218
  br i1 %4, label %dec_label_pc_1ebc, label %dec_label_pc_1ee4, !insn.addr !218

dec_label_pc_1ebc:                                ; preds = %dec_label_pc_1e84
  %5 = load i64, i64* %stack_var_-8, align 8, !insn.addr !219
  %6 = load i64, i64* %stack_var_-4, align 8, !insn.addr !219
  %7 = add i64 %6, %5, !insn.addr !220
  %phitmp = trunc i64 %7 to i32
  store i32 %phitmp, i32* %storemerge.reg2mem, !insn.addr !220
  br label %dec_label_pc_1ec4, !insn.addr !220

dec_label_pc_1ec4:                                ; preds = %dec_label_pc_1ee4, %dec_label_pc_1ebc
  %8 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !221
  %9 = inttoptr i64 %8 to i64*, !insn.addr !222
  %10 = load i64, i64* %9, align 8, !insn.addr !222
  %11 = icmp eq i64 %2, %10, !insn.addr !223
  br i1 %11, label %dec_label_pc_1eec, label %dec_label_pc_1ee0, !insn.addr !224

dec_label_pc_1ee0:                                ; preds = %dec_label_pc_1ec4
  call void @__stack_chk_fail(), !insn.addr !225
  br label %dec_label_pc_1ee4, !insn.addr !225

dec_label_pc_1ee4:                                ; preds = %dec_label_pc_1e84, %dec_label_pc_1ee0
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !226
  br label %dec_label_pc_1ec4, !insn.addr !226

dec_label_pc_1eec:                                ; preds = %dec_label_pc_1ec4
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !227

; uselistorder directives
  uselistorder i64* %stack_var_-4, { 1, 0 }
  uselistorder i64* %stack_var_-8, { 1, 0 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1ee4, { 1, 0 }
}

define i32 @call_scanf() local_unnamed_addr {
dec_label_pc_1ef4:
  %0 = call i32 @param_scanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_31b0, i64 0, i64 0)), !insn.addr !228
  ret i32 %0, !insn.addr !228
}

define i32 @param_fopen_fclose(i8* %filename) local_unnamed_addr {
dec_label_pc_1f00:
  %x19.0.reg2mem = alloca i32, !insn.addr !229
  %0 = call %_IO_FILE* @fopen(i8* %filename, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_31b8, i64 0, i64 0)), !insn.addr !230
  %1 = icmp eq %_IO_FILE* %0, null, !insn.addr !231
  store i32 -1, i32* %x19.0.reg2mem, !insn.addr !231
  br i1 %1, label %dec_label_pc_1f30, label %dec_label_pc_1f1c, !insn.addr !231

dec_label_pc_1f1c:                                ; preds = %dec_label_pc_1f00
  %2 = call i32 @fileno(%_IO_FILE* nonnull %0), !insn.addr !232
  %3 = call i32 @fclose(%_IO_FILE* nonnull %0), !insn.addr !233
  store i32 %2, i32* %x19.0.reg2mem, !insn.addr !233
  br label %dec_label_pc_1f30, !insn.addr !233

dec_label_pc_1f30:                                ; preds = %dec_label_pc_1f00, %dec_label_pc_1f1c
  %x19.0.reload = load i32, i32* %x19.0.reg2mem
  ret i32 %x19.0.reload, !insn.addr !234

; uselistorder directives
  uselistorder i32* %x19.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1f30, { 1, 0 }
}

define i32 @call_fopen_fclose() local_unnamed_addr {
dec_label_pc_1f48:
  %0 = call i32 @param_fopen_fclose(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_31ba, i64 0, i64 0)), !insn.addr !235
  %1 = icmp slt i32 %0, 0, !insn.addr !236
  %. = select i1 %1, i32 -1, i32 42
  ret i32 %., !insn.addr !237
}

define i32 @param_fread_fwrite(i8* %tmpfile) local_unnamed_addr {
dec_label_pc_1f70:
  %x21.1.reg2mem = alloca i64, !insn.addr !238
  %x20.1.reg2mem = alloca i64, !insn.addr !238
  %x19.1.reg2mem = alloca i64, !insn.addr !238
  %x0.1.reg2mem = alloca i64, !insn.addr !238
  %x21.0.reg2mem = alloca i64, !insn.addr !238
  %x20.0.reg2mem = alloca i64, !insn.addr !238
  %x19.0.reg2mem = alloca i64, !insn.addr !238
  %x0.0.reg2mem = alloca i32, !insn.addr !238
  %stack_var_-32 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !239
  %1 = inttoptr i64 %0 to i64*, !insn.addr !240
  %2 = load i64, i64* %1, align 8, !insn.addr !240
  %3 = call %_IO_FILE* @fopen(i8* %tmpfile, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_31c6, i64 0, i64 0)), !insn.addr !241
  %4 = icmp eq %_IO_FILE* %3, null, !insn.addr !242
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !242
  br i1 %4, label %dec_label_pc_1fe4, label %dec_label_pc_1fac, !insn.addr !242

dec_label_pc_1fac:                                ; preds = %dec_label_pc_1f70
  %5 = ptrtoint %_IO_FILE* %3 to i64, !insn.addr !241
  %6 = call i32 @fwrite(i64* bitcast ([19 x i8]* @global_var_31c9 to i64*), i32 1, i32 18, %_IO_FILE* nonnull %3), !insn.addr !243
  %7 = icmp eq i32 %6, 18, !insn.addr !244
  store i64 %5, i64* %x0.1.reg2mem, !insn.addr !245
  store i64 %5, i64* %x19.1.reg2mem, !insn.addr !245
  store i64 ptrtoint ([19 x i8]* @global_var_31c9 to i64), i64* %x20.1.reg2mem, !insn.addr !245
  store i64 18, i64* %x21.1.reg2mem, !insn.addr !245
  br i1 %7, label %dec_label_pc_2004, label %dec_label_pc_1fdc, !insn.addr !245

dec_label_pc_1fdc:                                ; preds = %dec_label_pc_1fac
  %8 = sext i32 %6 to i64, !insn.addr !243
  %9 = call i32 @fclose(%_IO_FILE* nonnull %3), !insn.addr !246
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !247
  store i64 %5, i64* %x19.0.reg2mem, !insn.addr !247
  store i64 ptrtoint ([19 x i8]* @global_var_31c9 to i64), i64* %x20.0.reg2mem, !insn.addr !247
  store i64 %8, i64* %x21.0.reg2mem, !insn.addr !247
  br label %dec_label_pc_1fe4, !insn.addr !247

dec_label_pc_1fe4:                                ; preds = %dec_label_pc_2004, %dec_label_pc_1f70, %dec_label_pc_2040, %dec_label_pc_1fdc
  %10 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !248
  %11 = inttoptr i64 %10 to i64*, !insn.addr !249
  %12 = load i64, i64* %11, align 8, !insn.addr !249
  %13 = icmp eq i64 %2, %12, !insn.addr !250
  br i1 %13, label %dec_label_pc_2070, label %dec_label_pc_2000, !insn.addr !251

dec_label_pc_2000:                                ; preds = %dec_label_pc_1fe4
  %x21.0.reload = load i64, i64* %x21.0.reg2mem
  %x20.0.reload = load i64, i64* %x20.0.reg2mem
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  call void @__stack_chk_fail(), !insn.addr !252
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.1.reg2mem, !insn.addr !252
  store i64 %x19.0.reload, i64* %x19.1.reg2mem, !insn.addr !252
  store i64 %x20.0.reload, i64* %x20.1.reg2mem, !insn.addr !252
  store i64 %x21.0.reload, i64* %x21.1.reg2mem, !insn.addr !252
  br label %dec_label_pc_2004, !insn.addr !252

dec_label_pc_2004:                                ; preds = %dec_label_pc_2000, %dec_label_pc_1fac
  %x21.1.reload = load i64, i64* %x21.1.reg2mem
  %x20.1.reload = load i64, i64* %x20.1.reg2mem
  %x19.1.reload = load i64, i64* %x19.1.reg2mem
  %x0.1.reload = load i64, i64* %x0.1.reg2mem
  %14 = inttoptr i64 %x0.1.reload to %_IO_FILE*, !insn.addr !253
  call void @rewind(%_IO_FILE* %14), !insn.addr !253
  %15 = ptrtoint i64* %stack_var_-32 to i64, !insn.addr !254
  %16 = trunc i64 %x21.1.reload to i32, !insn.addr !255
  %17 = inttoptr i64 %x19.1.reload to %_IO_FILE*, !insn.addr !255
  %18 = call i32 @fread(i64* nonnull %stack_var_-32, i32 1, i32 %16, %_IO_FILE* %17), !insn.addr !255
  %19 = sext i32 %18 to i64, !insn.addr !255
  %20 = add i64 %19, %15, !insn.addr !256
  %21 = inttoptr i64 %20 to i8*, !insn.addr !256
  store i8 0, i8* %21, align 1, !insn.addr !256
  %22 = call i32 @fclose(%_IO_FILE* %17), !insn.addr !257
  %23 = call i32 @unlink(i8* %tmpfile), !insn.addr !258
  %24 = icmp eq i32 %18, 18, !insn.addr !259
  store i32 -3, i32* %x0.0.reg2mem, !insn.addr !259
  store i64 %x19.1.reload, i64* %x19.0.reg2mem, !insn.addr !259
  store i64 %x20.1.reload, i64* %x20.0.reg2mem, !insn.addr !259
  store i64 %19, i64* %x21.0.reg2mem, !insn.addr !259
  br i1 %24, label %dec_label_pc_2040, label %dec_label_pc_1fe4, !insn.addr !259

dec_label_pc_2040:                                ; preds = %dec_label_pc_2004
  %25 = bitcast i64* %stack_var_-32 to i8*, !insn.addr !260
  %26 = inttoptr i64 %x20.1.reload to i8*, !insn.addr !260
  %27 = call i32 @strcmp(i8* nonnull %25, i8* %26), !insn.addr !260
  %28 = icmp eq i32 %27, 0, !insn.addr !261
  %phitmp = select i1 %28, i32 42, i32 -3, !insn.addr !262
  store i32 %phitmp, i32* %x0.0.reg2mem, !insn.addr !263
  store i64 %x19.1.reload, i64* %x19.0.reg2mem, !insn.addr !263
  store i64 %x20.1.reload, i64* %x20.0.reg2mem, !insn.addr !263
  store i64 18, i64* %x21.0.reg2mem, !insn.addr !263
  br label %dec_label_pc_1fe4, !insn.addr !263

dec_label_pc_2070:                                ; preds = %dec_label_pc_1fe4
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !264

; uselistorder directives
  uselistorder i64 %x19.1.reload, { 1, 2, 0 }
  uselistorder i64 %x20.1.reload, { 1, 0, 2 }
  uselistorder i32 %6, { 1, 0 }
  uselistorder i64 %5, { 2, 0, 1 }
  uselistorder %_IO_FILE* %3, { 0, 1, 3, 2 }
  uselistorder i32* %x0.0.reg2mem, { 0, 4, 1, 3, 2 }
  uselistorder i64* %x19.0.reg2mem, { 3, 1, 0, 2 }
  uselistorder i64* %x20.0.reg2mem, { 3, 1, 0, 2 }
  uselistorder i64* %x21.0.reg2mem, { 3, 1, 0, 2 }
  uselistorder i64* %x0.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x19.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x20.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x21.1.reg2mem, { 0, 2, 1 }
  uselistorder i32 (i8*, i8*)* @strcmp, { 1, 0, 2 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 2, 1, 0, 3 }
  uselistorder i64 18, { 1, 0 }
  uselistorder i64 ptrtoint ([19 x i8]* @global_var_31c9 to i64), { 1, 0 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1fe4, { 2, 0, 3, 1 }
}

define i32 @call_fread_fwrite() local_unnamed_addr {
dec_label_pc_2084:
  %0 = call i32 @param_fread_fwrite(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_31dc, i64 0, i64 0)), !insn.addr !265
  ret i32 %0, !insn.addr !265
}

define i32 @param_malloc_free(i64 %size) local_unnamed_addr {
dec_label_pc_2090:
  %x1.01.reg2mem = alloca i64, !insn.addr !266
  %x19.0.reg2mem = alloca i32, !insn.addr !266
  %0 = mul i64 %size, 4, !insn.addr !267
  %1 = trunc i64 %0 to i32, !insn.addr !268
  %2 = call i64* @malloc(i32 %1), !insn.addr !268
  %3 = icmp eq i64* %2, null, !insn.addr !269
  store i32 -1, i32* %x19.0.reg2mem, !insn.addr !269
  br i1 %3, label %dec_label_pc_20d4, label %dec_label_pc_20b8.preheader, !insn.addr !269

dec_label_pc_20b8.preheader:                      ; preds = %dec_label_pc_2090
  %4 = ptrtoint i64* %2 to i64, !insn.addr !268
  %5 = icmp eq i64 %size, 0, !insn.addr !270
  store i64 0, i64* %x1.01.reg2mem, !insn.addr !270
  br i1 %5, label %dec_label_pc_20c0, label %dec_label_pc_20e4, !insn.addr !270

dec_label_pc_20c0:                                ; preds = %dec_label_pc_20e4, %dec_label_pc_20b8.preheader
  %6 = bitcast i64* %2 to i32*, !insn.addr !271
  %7 = load i32, i32* %6, align 4, !insn.addr !271
  %8 = add i64 %0, -4, !insn.addr !272
  %9 = add i64 %8, %4, !insn.addr !273
  %10 = inttoptr i64 %9 to i32*, !insn.addr !273
  %11 = load i32, i32* %10, align 4, !insn.addr !273
  %12 = add i32 %11, %7, !insn.addr !274
  call void @free(i64* nonnull %2), !insn.addr !275
  store i32 %12, i32* %x19.0.reg2mem, !insn.addr !275
  br label %dec_label_pc_20d4, !insn.addr !275

dec_label_pc_20d4:                                ; preds = %dec_label_pc_2090, %dec_label_pc_20c0
  %x19.0.reload = load i32, i32* %x19.0.reg2mem
  ret i32 %x19.0.reload, !insn.addr !276

dec_label_pc_20e4:                                ; preds = %dec_label_pc_20b8.preheader, %dec_label_pc_20e4
  %x1.01.reload = load i64, i64* %x1.01.reg2mem
  %13 = trunc i64 %x1.01.reload to i32, !insn.addr !277
  %14 = mul i32 %13, 10, !insn.addr !277
  %15 = mul i64 %x1.01.reload, 4, !insn.addr !278
  %16 = add i64 %15, %4, !insn.addr !278
  %17 = inttoptr i64 %16 to i32*, !insn.addr !278
  store i32 %14, i32* %17, align 4, !insn.addr !278
  %18 = add nuw i64 %x1.01.reload, 1, !insn.addr !279
  %19 = icmp eq i64 %18, %size, !insn.addr !270
  store i64 %18, i64* %x1.01.reg2mem, !insn.addr !270
  br i1 %19, label %dec_label_pc_20c0, label %dec_label_pc_20e4, !insn.addr !270

; uselistorder directives
  uselistorder i64 %x1.01.reload, { 0, 2, 1 }
  uselistorder i64* %2, { 0, 1, 3, 2 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i32* %x19.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x1.01.reg2mem, { 2, 0, 1 }
  uselistorder i64 %size, { 2, 1, 0 }
  uselistorder label %dec_label_pc_20e4, { 1, 0 }
  uselistorder label %dec_label_pc_20d4, { 1, 0 }
}

define i32 @call_malloc_free() local_unnamed_addr {
dec_label_pc_20fc:
  %0 = call i32 @param_malloc_free(i64 10), !insn.addr !280
  ret i32 %0, !insn.addr !280
}

define i32 @param_memset(i8* %buffer, i64 %size) local_unnamed_addr {
dec_label_pc_2104:
  %x1.01.reg2mem = alloca i64, !insn.addr !281
  %storemerge2.reg2mem = alloca i64, !insn.addr !281
  %storemerge.lcssa.reg2mem = alloca i32, !insn.addr !281
  %0 = ptrtoint i8* %buffer to i64
  %1 = bitcast i8* %buffer to i64*, !insn.addr !282
  %2 = trunc i64 %size to i32, !insn.addr !282
  %3 = call i64* @memset(i64* %1, i32 0, i32 %2), !insn.addr !282
  %4 = icmp eq i64 %size, 0, !insn.addr !283
  store i32 0, i32* %storemerge.lcssa.reg2mem, !insn.addr !283
  store i64 0, i64* %storemerge2.reg2mem, !insn.addr !283
  store i64 0, i64* %x1.01.reg2mem, !insn.addr !283
  br i1 %4, label %dec_label_pc_2134, label %dec_label_pc_2140, !insn.addr !283

dec_label_pc_212c.dec_label_pc_2134_crit_edge:    ; preds = %dec_label_pc_2140
  %phitmp = trunc i64 %10 to i32
  store i32 %phitmp, i32* %storemerge.lcssa.reg2mem
  br label %dec_label_pc_2134

dec_label_pc_2134:                                ; preds = %dec_label_pc_212c.dec_label_pc_2134_crit_edge, %dec_label_pc_2104
  %storemerge.lcssa.reload = load i32, i32* %storemerge.lcssa.reg2mem
  ret i32 %storemerge.lcssa.reload, !insn.addr !284

dec_label_pc_2140:                                ; preds = %dec_label_pc_2104, %dec_label_pc_2140
  %x1.01.reload = load i64, i64* %x1.01.reg2mem
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %5 = add i64 %x1.01.reload, %0, !insn.addr !285
  %6 = inttoptr i64 %5 to i8*, !insn.addr !285
  %7 = load i8, i8* %6, align 1, !insn.addr !285
  %8 = zext i8 %7 to i64, !insn.addr !285
  %9 = add nuw i64 %x1.01.reload, 1, !insn.addr !286
  %10 = add nuw nsw i64 %storemerge2.reload, %8, !insn.addr !287
  %11 = and i64 %10, 4294967295, !insn.addr !287
  %12 = icmp eq i64 %9, %size, !insn.addr !283
  store i64 %11, i64* %storemerge2.reg2mem, !insn.addr !283
  store i64 %9, i64* %x1.01.reg2mem, !insn.addr !283
  br i1 %12, label %dec_label_pc_212c.dec_label_pc_2134_crit_edge, label %dec_label_pc_2140, !insn.addr !283

; uselistorder directives
  uselistorder i64 %10, { 1, 0 }
  uselistorder i32* %storemerge.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x1.01.reg2mem, { 2, 0, 1 }
  uselistorder i64 %size, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2140, { 1, 0 }
}

define i32 @call_memset() local_unnamed_addr {
dec_label_pc_2150:
  %0 = alloca i32
  %x0.0.reg2mem = alloca i32, !insn.addr !288
  %x1.0.reg2mem = alloca i64, !insn.addr !288
  %1 = load i32, i32* %0
  %stack_var_-40 = alloca i32, align 4
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !289
  %3 = inttoptr i64 %2 to i64*, !insn.addr !290
  %4 = load i64, i64* %3, align 8, !insn.addr !290
  %5 = ptrtoint i32* %stack_var_-40 to i64, !insn.addr !291
  store i64 0, i64* %x1.0.reg2mem, !insn.addr !291
  br label %dec_label_pc_2174, !insn.addr !291

dec_label_pc_2174:                                ; preds = %dec_label_pc_2174, %dec_label_pc_2150
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %6 = mul i64 %x1.0.reload, 4, !insn.addr !292
  %7 = add i64 %6, %5, !insn.addr !292
  %8 = inttoptr i64 %7 to i32*, !insn.addr !292
  store i32 255, i32* %8, align 4, !insn.addr !292
  %9 = add nuw nsw i64 %x1.0.reload, 1, !insn.addr !293
  %10 = icmp eq i64 %9, 10, !insn.addr !294
  store i64 %9, i64* %x1.0.reg2mem, !insn.addr !294
  br i1 %10, label %dec_label_pc_2184, label %dec_label_pc_2174, !insn.addr !294

dec_label_pc_2184:                                ; preds = %dec_label_pc_2174
  %11 = bitcast i32* %stack_var_-40 to i8*, !insn.addr !295
  %12 = call i32 @param_memset(i8* nonnull %11, i64 40), !insn.addr !295
  %13 = load i32, i32* %stack_var_-40, align 4, !insn.addr !296
  %14 = add i32 %13, %1, !insn.addr !297
  %15 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !298
  %16 = inttoptr i64 %15 to i64*, !insn.addr !299
  %17 = load i64, i64* %16, align 8, !insn.addr !299
  %18 = icmp eq i64 %4, %17, !insn.addr !300
  store i32 %14, i32* %x0.0.reg2mem, !insn.addr !301
  br i1 %18, label %dec_label_pc_21b8, label %dec_label_pc_21b4, !insn.addr !301

dec_label_pc_21b4:                                ; preds = %dec_label_pc_2184
  call void @__stack_chk_fail(), !insn.addr !302
  store i32 ptrtoint (i32* @0 to i32), i32* %x0.0.reg2mem, !insn.addr !302
  br label %dec_label_pc_21b8, !insn.addr !302

dec_label_pc_21b8:                                ; preds = %dec_label_pc_21b4, %dec_label_pc_2184
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !303

; uselistorder directives
  uselistorder i32* %stack_var_-40, { 2, 0, 1 }
  uselistorder i64* %x1.0.reg2mem, { 1, 0, 2 }
}

define i32 @param_strchr_strstr(i8* %str, i8 %ch, i8* %substr) local_unnamed_addr {
dec_label_pc_21c0:
  %0 = ptrtoint i8* %str to i64
  %1 = zext i8 %ch to i32
  %2 = call i8* @strchr(i8* %str, i32 %1), !insn.addr !304
  %3 = ptrtoint i8* %2 to i64, !insn.addr !304
  %4 = icmp eq i8* %2, null, !insn.addr !305
  %5 = sub i64 %3, %0, !insn.addr !306
  %6 = trunc i64 %5 to i32, !insn.addr !307
  %7 = select i1 %4, i32 -1, i32 %6, !insn.addr !307
  %8 = call i8* @strstr(i8* %str, i8* %substr), !insn.addr !308
  %9 = ptrtoint i8* %8 to i64, !insn.addr !308
  %10 = sub i64 %9, %0, !insn.addr !309
  %11 = icmp eq i8* %8, null, !insn.addr !310
  %12 = trunc i64 %10 to i32, !insn.addr !311
  %13 = select i1 %11, i32 -1, i32 %12, !insn.addr !311
  %14 = add i32 %13, %7, !insn.addr !312
  ret i32 %14, !insn.addr !313

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i32 @call_strchr_strstr() local_unnamed_addr {
dec_label_pc_221c:
  %0 = call i32 @param_strchr_strstr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_31f9, i64 0, i64 0), i8 66, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_31f3, i64 0, i64 0)), !insn.addr !314
  ret i32 %0, !insn.addr !314
}

define void @test_standard_library_functions() local_unnamed_addr {
dec_label_pc_2234:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_320d to i8*)), !insn.addr !315
  %1 = call i32 @call_strcpy(), !insn.addr !316
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3231 to i8*)), !insn.addr !317
  %3 = call i32 @call_strcmp(), !insn.addr !318
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_324c to i8*)), !insn.addr !319
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3267 to i8*)), !insn.addr !320
  %6 = call i32 @call_memcpy(), !insn.addr !321
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3283 to i8*)), !insn.addr !322
  %8 = call i32 @call_memcmp(), !insn.addr !323
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_329f to i8*)), !insn.addr !324
  %10 = call i32 @call_printf(), !insn.addr !325
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_32bb to i8*)), !insn.addr !326
  %12 = call i32 @call_scanf(), !insn.addr !327
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_32d7 to i8*)), !insn.addr !328
  %14 = call i32 @call_fopen_fclose(), !insn.addr !329
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_32f4 to i8*)), !insn.addr !330
  %16 = call i32 @call_fread_fwrite(), !insn.addr !331
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3310 to i8*)), !insn.addr !332
  %18 = call i32 @call_malloc_free(), !insn.addr !333
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_332c to i8*)), !insn.addr !334
  %20 = call i32 @call_memset(), !insn.addr !335
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3348 to i8*)), !insn.addr !336
  %22 = call i32 @call_strchr_strstr(), !insn.addr !337
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3363 to i8*)), !insn.addr !338
  ret void, !insn.addr !338
}

define i64 @param_linux_syscall() local_unnamed_addr {
dec_label_pc_2368:
  %x19.0.in.reg2mem = alloca i32, !insn.addr !339
  %0 = call i32 (i32, ...) @syscall(i32 56), !insn.addr !340
  %1 = icmp sgt i32 %0, -1, !insn.addr !341
  br i1 %1, label %dec_label_pc_23a8, label %dec_label_pc_238c, !insn.addr !341

dec_label_pc_238c:                                ; preds = %dec_label_pc_2368
  %2 = call i32* @__errno_location(), !insn.addr !342
  %3 = load i32, i32* %2, align 4, !insn.addr !343
  %4 = sub i32 0, %3, !insn.addr !344
  store i32 %4, i32* %x19.0.in.reg2mem, !insn.addr !344
  br label %dec_label_pc_2398, !insn.addr !344

dec_label_pc_2398:                                ; preds = %dec_label_pc_23a8, %dec_label_pc_238c
  %x19.0.in.reload = load i32, i32* %x19.0.in.reg2mem
  %x19.0 = zext i32 %x19.0.in.reload to i64
  ret i64 %x19.0, !insn.addr !345

dec_label_pc_23a8:                                ; preds = %dec_label_pc_2368
  %5 = call i32 (i32, ...) @syscall(i32 57), !insn.addr !346
  store i32 %0, i32* %x19.0.in.reg2mem, !insn.addr !347
  br label %dec_label_pc_2398, !insn.addr !347

; uselistorder directives
  uselistorder i32* %x19.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i32, ...)* @syscall, { 1, 0, 2 }
}

define i32 @call_linux_syscall() local_unnamed_addr {
dec_label_pc_23bc:
  %0 = call i64 @param_linux_syscall(), !insn.addr !348
  %1 = trunc i64 %0 to i32, !insn.addr !349
  %2 = icmp slt i32 %1, 0, !insn.addr !349
  %. = select i1 %2, i32 -1, i32 42
  ret i32 %., !insn.addr !350
}

define i32 @param_win32_api(i8* %filename) local_unnamed_addr {
dec_label_pc_23e4:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i32, !insn.addr !351
  %1 = load i64, i64* %0
  %stack_var_-128 = alloca i64, align 8
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !352
  %3 = inttoptr i64 %2 to i64*, !insn.addr !353
  %4 = load i64, i64* %3, align 8, !insn.addr !353
  %5 = bitcast i64* %stack_var_-128 to %stat*, !insn.addr !354
  %6 = call i32 @stat(i8* %filename, %stat* nonnull %5), !insn.addr !354
  %7 = icmp slt i32 %6, 0, !insn.addr !355
  br i1 %7, label %dec_label_pc_2440, label %dec_label_pc_240c, !insn.addr !355

dec_label_pc_240c:                                ; preds = %dec_label_pc_23e4
  %8 = icmp slt i64 %1, 1
  %9 = select i1 %8, i32 -2, i32 42, !insn.addr !356
  store i32 %9, i32* %storemerge.reg2mem, !insn.addr !356
  br label %dec_label_pc_2420, !insn.addr !356

dec_label_pc_2420:                                ; preds = %dec_label_pc_2440, %dec_label_pc_240c
  %10 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !357
  %11 = inttoptr i64 %10 to i64*, !insn.addr !358
  %12 = load i64, i64* %11, align 8, !insn.addr !358
  %13 = icmp eq i64 %4, %12, !insn.addr !359
  br i1 %13, label %dec_label_pc_2448, label %dec_label_pc_243c, !insn.addr !360

dec_label_pc_243c:                                ; preds = %dec_label_pc_2420
  call void @__stack_chk_fail(), !insn.addr !361
  br label %dec_label_pc_2440, !insn.addr !361

dec_label_pc_2440:                                ; preds = %dec_label_pc_243c, %dec_label_pc_23e4
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !362
  br label %dec_label_pc_2420, !insn.addr !362

dec_label_pc_2448:                                ; preds = %dec_label_pc_2420
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !363

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
}

define i32 @call_win32_api() local_unnamed_addr {
dec_label_pc_2450:
  %0 = call i32 @param_win32_api(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_31ba, i64 0, i64 0)), !insn.addr !364
  ret i32 %0, !insn.addr !364
}

define i64 @param_fork_exec() local_unnamed_addr {
dec_label_pc_245c:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !365
  %1 = load i64, i64* %0
  %stack_var_-4 = alloca i32, align 4
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !366
  %3 = inttoptr i64 %2 to i64*, !insn.addr !367
  %4 = load i64, i64* %3, align 8, !insn.addr !367
  %5 = call i32 @fork(), !insn.addr !368
  %6 = icmp slt i32 %5, 0, !insn.addr !369
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !370
  br i1 %6, label %dec_label_pc_24d4, label %dec_label_pc_2490, !insn.addr !370

dec_label_pc_2490:                                ; preds = %dec_label_pc_245c
  %7 = icmp eq i32 %5, 0, !insn.addr !369
  br i1 %7, label %dec_label_pc_2494, label %dec_label_pc_24b0, !insn.addr !371

dec_label_pc_2494:                                ; preds = %dec_label_pc_2490
  %8 = inttoptr i64 %1 to i8*, !insn.addr !372
  %9 = call i32 (i8*, i8*, ...) @execl(i8* %8, i8* %8), !insn.addr !372
  call void @_exit(i32 127), !insn.addr !373
  unreachable, !insn.addr !373

dec_label_pc_24b0:                                ; preds = %dec_label_pc_2490
  %10 = call i32 @waitpid(i32 %5, i32* nonnull %stack_var_-4, i32 0), !insn.addr !374
  %11 = icmp slt i32 %10, 0, !insn.addr !375
  br i1 %11, label %dec_label_pc_24f4, label %dec_label_pc_24c0, !insn.addr !375

dec_label_pc_24c0:                                ; preds = %dec_label_pc_24b0
  %12 = sext i32 %10 to i64, !insn.addr !374
  %13 = load i32, i32* %stack_var_-4, align 4, !insn.addr !376
  %14 = zext i32 %13 to i64, !insn.addr !376
  %15 = call i64 @__asm_ubfx(i64 %12, i64 %14, i64 8, i64 8), !insn.addr !377
  %16 = urem i64 %14, 128, !insn.addr !378
  %17 = icmp eq i64 %16, 0, !insn.addr !378
  %18 = and i64 %15, 4294967295
  %19 = select i1 %17, i64 %18, i64 4294967293, !insn.addr !379
  store i64 %19, i64* %x0.0.reg2mem, !insn.addr !379
  br label %dec_label_pc_24d4, !insn.addr !379

dec_label_pc_24d4:                                ; preds = %dec_label_pc_245c, %dec_label_pc_24f4, %dec_label_pc_24c0
  %20 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !380
  %21 = inttoptr i64 %20 to i64*, !insn.addr !381
  %22 = load i64, i64* %21, align 8, !insn.addr !381
  %23 = icmp eq i64 %4, %22, !insn.addr !382
  br i1 %23, label %dec_label_pc_2504, label %dec_label_pc_24f0, !insn.addr !383

dec_label_pc_24f0:                                ; preds = %dec_label_pc_24d4
  call void @__stack_chk_fail(), !insn.addr !384
  br label %dec_label_pc_24f4, !insn.addr !384

dec_label_pc_24f4:                                ; preds = %dec_label_pc_24f0, %dec_label_pc_24b0
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !385
  br label %dec_label_pc_24d4, !insn.addr !385

dec_label_pc_2504:                                ; preds = %dec_label_pc_24d4
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !386

; uselistorder directives
  uselistorder i32 %10, { 1, 0 }
  uselistorder i32 %5, { 0, 2, 1 }
  uselistorder i64* %x0.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_24d4, { 1, 2, 0 }
}

define i32 @call_fork_exec() local_unnamed_addr {
dec_label_pc_2510:
  %0 = call i64 @param_fork_exec(), !insn.addr !387
  %1 = trunc i64 %0 to i32, !insn.addr !388
  %2 = icmp eq i32 %1, 0, !insn.addr !388
  %. = select i1 %2, i32 42, i32 -1
  ret i32 %., !insn.addr !389
}

define i64 @param_pipe_communication() local_unnamed_addr {
dec_label_pc_253c:
  %0 = alloca i32
  %x0.0.reg2mem = alloca i64, !insn.addr !390
  %stack_var_-32 = alloca i64, align 8
  %1 = load i32, i32* %0
  %buffer_-40 = alloca [32 x i8], align 4
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !391
  %3 = inttoptr i64 %2 to i64*, !insn.addr !392
  %4 = load i64, i64* %3, align 8, !insn.addr !392
  %5 = ptrtoint [32 x i8]* %buffer_-40 to i64, !insn.addr !393
  %6 = trunc i64 %5 to i32, !insn.addr !394
  %7 = insertvalue [2 x i32] undef, i32 %6, 0, !insn.addr !394
  %8 = call i32 @pipe([2 x i32] %7), !insn.addr !394
  %9 = icmp slt i32 %8, 0, !insn.addr !395
  br i1 %9, label %dec_label_pc_2608, label %dec_label_pc_2568, !insn.addr !395

dec_label_pc_2568:                                ; preds = %dec_label_pc_253c
  %10 = call i32 @fork(), !insn.addr !396
  %11 = icmp slt i32 %10, 0, !insn.addr !397
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !398
  br i1 %11, label %dec_label_pc_25e8, label %dec_label_pc_2574, !insn.addr !398

dec_label_pc_2574:                                ; preds = %dec_label_pc_2568
  %12 = icmp eq i32 %10, 0, !insn.addr !397
  br i1 %12, label %dec_label_pc_2578, label %dec_label_pc_25a4, !insn.addr !399

dec_label_pc_2578:                                ; preds = %dec_label_pc_2574
  %13 = bitcast [32 x i8]* %buffer_-40 to i32*, !insn.addr !400
  %14 = load i32, i32* %13, align 4, !insn.addr !400
  %15 = call i32 @close(i32 %14), !insn.addr !401
  %16 = call i32 @write(i32 %1, i64* bitcast ([10 x i8]* @global_var_3389 to i64*), i32 9), !insn.addr !402
  %17 = call i32 @close(i32 %1), !insn.addr !403
  call void @_exit(i32 0), !insn.addr !404
  unreachable, !insn.addr !404

dec_label_pc_25a4:                                ; preds = %dec_label_pc_2574
  %18 = ptrtoint i64* %stack_var_-32 to i64, !insn.addr !405
  %19 = call i32 @close(i32 %1), !insn.addr !406
  %20 = bitcast [32 x i8]* %buffer_-40 to i32*, !insn.addr !407
  %21 = load i32, i32* %20, align 4, !insn.addr !407
  %22 = call i32 @read(i32 %21, i64* nonnull %stack_var_-32, i32 31), !insn.addr !408
  %23 = sext i32 %22 to i64, !insn.addr !408
  %24 = add i64 %23, %18, !insn.addr !409
  %25 = inttoptr i64 %24 to i8*, !insn.addr !409
  store i8 0, i8* %25, align 1, !insn.addr !409
  %26 = load i32, i32* %20, align 4, !insn.addr !410
  %27 = call i32 @close(i32 %26), !insn.addr !411
  %28 = call i32 @wait(i64 0), !insn.addr !412
  %29 = icmp slt i32 %22, 1
  %30 = select i1 %29, i64 4294967293, i64 42, !insn.addr !413
  store i64 %30, i64* %x0.0.reg2mem, !insn.addr !413
  br label %dec_label_pc_25e8, !insn.addr !413

dec_label_pc_25e8:                                ; preds = %dec_label_pc_2568, %dec_label_pc_2608, %dec_label_pc_25a4
  %31 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !414
  %32 = inttoptr i64 %31 to i64*, !insn.addr !415
  %33 = load i64, i64* %32, align 8, !insn.addr !415
  %34 = icmp eq i64 %4, %33, !insn.addr !416
  br i1 %34, label %dec_label_pc_2618, label %dec_label_pc_2604, !insn.addr !417

dec_label_pc_2604:                                ; preds = %dec_label_pc_25e8
  call void @__stack_chk_fail(), !insn.addr !418
  br label %dec_label_pc_2608, !insn.addr !418

dec_label_pc_2608:                                ; preds = %dec_label_pc_2604, %dec_label_pc_253c
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !419
  br label %dec_label_pc_25e8, !insn.addr !419

dec_label_pc_2618:                                ; preds = %dec_label_pc_25e8
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !420

; uselistorder directives
  uselistorder i32 %10, { 1, 0 }
  uselistorder i64* %x0.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder void (i32)* @_exit, { 1, 0, 2 }
  uselistorder i32 ()* @fork, { 1, 0, 2 }
  uselistorder label %dec_label_pc_25e8, { 1, 2, 0 }
}

define i64 @call_pipe_communication() local_unnamed_addr {
dec_label_pc_2624:
  %0 = call i64 @param_pipe_communication(), !insn.addr !421
  ret i64 %0, !insn.addr !421
}

define i64 @param_socket_create() local_unnamed_addr {
dec_label_pc_2628:
  %x19.1.reg2mem = alloca i64, !insn.addr !422
  %x19.0.reg2mem = alloca i64, !insn.addr !422
  %x0.0.reg2mem = alloca i64, !insn.addr !422
  %stack_var_-16 = alloca i64, align 8
  %stack_var_-20 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !423
  %1 = inttoptr i64 %0 to i64*, !insn.addr !424
  %2 = load i64, i64* %1, align 8, !insn.addr !424
  %3 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !425
  %4 = icmp slt i32 %3, 0, !insn.addr !426
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !426
  br i1 %4, label %dec_label_pc_2688, label %dec_label_pc_265c, !insn.addr !426

dec_label_pc_265c:                                ; preds = %dec_label_pc_2628
  %5 = zext i32 %3 to i64
  store i64 1, i64* %stack_var_-20, align 8, !insn.addr !427
  %6 = call i32 @setsockopt(i32 %3, i32 1, i32 2, i64* nonnull %stack_var_-20, i32 4), !insn.addr !428
  %7 = icmp sgt i32 %6, -1, !insn.addr !429
  store i64 %5, i64* %x19.1.reg2mem, !insn.addr !429
  br i1 %7, label %dec_label_pc_26a8, label %dec_label_pc_267c, !insn.addr !429

dec_label_pc_267c:                                ; preds = %dec_label_pc_265c
  %8 = call i32 @close(i32 %3), !insn.addr !430
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !431
  store i64 %5, i64* %x19.0.reg2mem, !insn.addr !431
  br label %dec_label_pc_2688, !insn.addr !431

dec_label_pc_2688:                                ; preds = %dec_label_pc_2628, %dec_label_pc_26d8, %dec_label_pc_26c8, %dec_label_pc_267c
  %9 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !432
  %10 = inttoptr i64 %9 to i64*, !insn.addr !433
  %11 = load i64, i64* %10, align 8, !insn.addr !433
  %12 = icmp eq i64 %2, %11, !insn.addr !434
  br i1 %12, label %dec_label_pc_2710, label %dec_label_pc_26a4, !insn.addr !435

dec_label_pc_26a4:                                ; preds = %dec_label_pc_2688
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  call void @__stack_chk_fail(), !insn.addr !436
  store i64 %x19.0.reload, i64* %x19.1.reg2mem, !insn.addr !436
  br label %dec_label_pc_26a8, !insn.addr !436

dec_label_pc_26a8:                                ; preds = %dec_label_pc_26a4, %dec_label_pc_265c
  %x19.1.reload = load i64, i64* %x19.1.reg2mem
  store i64 2, i64* %stack_var_-16, align 8, !insn.addr !437
  %13 = trunc i64 %x19.1.reload to i32, !insn.addr !438
  %14 = bitcast i64* %stack_var_-16 to %sockaddr*, !insn.addr !439
  %15 = call i32 @bind(i32 %13, %sockaddr* nonnull %14, i32 16), !insn.addr !439
  %16 = icmp sgt i32 %15, -1, !insn.addr !440
  br i1 %16, label %dec_label_pc_26d8, label %dec_label_pc_26c8, !insn.addr !440

dec_label_pc_26c8:                                ; preds = %dec_label_pc_26a8
  %17 = call i32 @close(i32 %13), !insn.addr !441
  store i64 4294967293, i64* %x0.0.reg2mem, !insn.addr !442
  store i64 %x19.1.reload, i64* %x19.0.reg2mem, !insn.addr !442
  br label %dec_label_pc_2688, !insn.addr !442

dec_label_pc_26d8:                                ; preds = %dec_label_pc_26a8
  %18 = call i32 @listen(i32 %13, i32 5), !insn.addr !443
  %19 = icmp sgt i32 %18, -1, !insn.addr !444
  %20 = call i32 @close(i32 %13)
  %. = select i1 %19, i64 42, i64 4294967292
  store i64 %., i64* %x0.0.reg2mem, !insn.addr !445
  store i64 %x19.1.reload, i64* %x19.0.reg2mem, !insn.addr !445
  br label %dec_label_pc_2688, !insn.addr !445

dec_label_pc_2710:                                ; preds = %dec_label_pc_2688
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !446

; uselistorder directives
  uselistorder i64 %x19.1.reload, { 2, 1, 0 }
  uselistorder i64 %5, { 1, 0 }
  uselistorder i32 %3, { 0, 2, 1, 3 }
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 4, 3, 1 }
  uselistorder i64* %x19.0.reg2mem, { 1, 3, 0, 2 }
  uselistorder i64* %x19.1.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2688, { 1, 2, 3, 0 }
}

define i64 @call_socket_create() local_unnamed_addr {
dec_label_pc_271c:
  %0 = call i64 @param_socket_create(), !insn.addr !447
  ret i64 %0, !insn.addr !447
}

define i32 @param_shmget_shmat() local_unnamed_addr {
dec_label_pc_2720:
  %x19.0.reg2mem = alloca i32, !insn.addr !448
  %0 = call i32 (i8*, i32, ...) @open(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_3393, i64 0, i64 0), i32 66), !insn.addr !449
  %1 = icmp sgt i32 %0, -1, !insn.addr !450
  store i32 -1, i32* %x19.0.reg2mem, !insn.addr !450
  br i1 %1, label %dec_label_pc_2764, label %dec_label_pc_2750, !insn.addr !450

dec_label_pc_2750:                                ; preds = %dec_label_pc_278c, %dec_label_pc_2778, %dec_label_pc_2720, %dec_label_pc_2764, %dec_label_pc_27a4
  %x19.0.reload = load i32, i32* %x19.0.reg2mem
  ret i32 %x19.0.reload, !insn.addr !451

dec_label_pc_2764:                                ; preds = %dec_label_pc_2720
  %2 = call i32 @close(i32 %0), !insn.addr !452
  %3 = call i32 @ftok(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_3393, i64 0, i64 0), i32 42), !insn.addr !453
  %4 = icmp slt i32 %3, 0, !insn.addr !454
  store i32 -1, i32* %x19.0.reg2mem, !insn.addr !454
  br i1 %4, label %dec_label_pc_2750, label %dec_label_pc_2778, !insn.addr !454

dec_label_pc_2778:                                ; preds = %dec_label_pc_2764
  %5 = call i32 @shmget(i32 %3, i32 ptrtoint (i64* (i64*)** @global_var_1000 to i32), i32 ptrtoint (i32* @global_var_3b6 to i32)), !insn.addr !455
  %6 = icmp slt i32 %5, 0, !insn.addr !456
  store i32 -2, i32* %x19.0.reg2mem, !insn.addr !456
  br i1 %6, label %dec_label_pc_2750, label %dec_label_pc_278c, !insn.addr !456

dec_label_pc_278c:                                ; preds = %dec_label_pc_2778
  %7 = call i64* @shmat(i32 %5, i64* null, i32 0), !insn.addr !457
  %8 = icmp eq i64* %7, inttoptr (i64 -1 to i64*), !insn.addr !458
  store i32 -3, i32* %x19.0.reg2mem, !insn.addr !459
  br i1 %8, label %dec_label_pc_2750, label %dec_label_pc_27a4, !insn.addr !459

dec_label_pc_27a4:                                ; preds = %dec_label_pc_278c
  %9 = bitcast i64* %7 to i8*, !insn.addr !460
  %10 = call i8* @strcpy(i8* %9, i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_33a5, i64 0, i64 0)), !insn.addr !460
  %11 = call i32 @strlen(i8* %9), !insn.addr !461
  %12 = call i32 @shmdt(i64* %7), !insn.addr !462
  %13 = call i32 @shmctl(i32 %5, i32 0, %shmid_ds* null), !insn.addr !463
  store i32 %11, i32* %x19.0.reg2mem, !insn.addr !464
  br label %dec_label_pc_2750, !insn.addr !464

; uselistorder directives
  uselistorder i32* %x19.0.reg2mem, { 5, 1, 2, 4, 0, 3 }
  uselistorder i32 (i8*)* @strlen, { 1, 2, 0, 3 }
  uselistorder i8* (i8*, i8*)* @strcpy, { 1, 0, 2 }
  uselistorder i32 (i32)* @close, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder label %dec_label_pc_2750, { 4, 0, 1, 3, 2 }
}

define i32 @call_shmget_shmat() local_unnamed_addr {
dec_label_pc_27e8:
  %0 = call i32 @param_shmget_shmat(), !insn.addr !465
  %1 = icmp sgt i32 %0, 0, !insn.addr !466
  %. = select i1 %1, i32 42, i32 -1
  ret i32 %., !insn.addr !467
}

define i64 @param_signal_handling() local_unnamed_addr {
dec_label_pc_2808:
  %x20.16.reg2mem = alloca i64, !insn.addr !468
  %x20.08.reg2mem = alloca i64, !insn.addr !468
  %x0.0.reg2mem = alloca i64, !insn.addr !468
  %.lcssa.reg2mem = alloca i32, !insn.addr !468
  %.lcssa4.reg2mem = alloca i32, !insn.addr !468
  %0 = call void (i32)* @signal(i32 10, void (i32)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2388) to void (i32)*)), !insn.addr !469
  %1 = ptrtoint void (i32)* %0 to i64, !insn.addr !469
  %2 = icmp eq void (i32)* %0, inttoptr (i64 -1 to void (i32)*), !insn.addr !470
  store i64 %1, i64* %x0.0.reg2mem, !insn.addr !471
  br i1 %2, label %dec_label_pc_28d4, label %dec_label_pc_2830, !insn.addr !471

dec_label_pc_2830:                                ; preds = %dec_label_pc_2808
  %3 = call void (i32)* @signal(i32 14, void (i32)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2388) to void (i32)*)), !insn.addr !472
  %4 = icmp eq void (i32)* %3, inttoptr (i64 -1 to void (i32)*), !insn.addr !473
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !474
  br i1 %4, label %dec_label_pc_28d4, label %dec_label_pc_2844, !insn.addr !474

dec_label_pc_2844:                                ; preds = %dec_label_pc_2830
  store i32 0, i32* @signal_received, align 4, !insn.addr !475
  %5 = call i32 @raise(i32 10), !insn.addr !476
  %6 = load i32, i32* @signal_received, align 4, !insn.addr !477
  %7 = icmp ne i32 %6, 0, !insn.addr !478
  %or.cond7 = or i1 %7, icmp eq (i32 ptrtoint (i32* @global_var_3e9 to i32), i32 1)
  store i32 %6, i32* %.lcssa4.reg2mem, !insn.addr !478
  store i64 ptrtoint (i32* @global_var_3e9 to i64), i64* %x20.08.reg2mem, !insn.addr !478
  br i1 %or.cond7, label %dec_label_pc_2868, label %dec_label_pc_28e0, !insn.addr !478

dec_label_pc_2868:                                ; preds = %dec_label_pc_28e0, %dec_label_pc_2844
  %.lcssa4.reload = load i32, i32* %.lcssa4.reg2mem
  %8 = icmp eq i32 %.lcssa4.reload, 0, !insn.addr !479
  store i64 4294967293, i64* %x0.0.reg2mem, !insn.addr !479
  br i1 %8, label %dec_label_pc_28d4, label %dec_label_pc_2874, !insn.addr !479

dec_label_pc_2874:                                ; preds = %dec_label_pc_2868
  %9 = load i32, i32* @signal_number, align 4, !insn.addr !480
  %10 = icmp eq i32 %9, 10, !insn.addr !481
  store i64 4294967292, i64* %x0.0.reg2mem, !insn.addr !481
  br i1 %10, label %dec_label_pc_2880, label %dec_label_pc_28d4, !insn.addr !481

dec_label_pc_2880:                                ; preds = %dec_label_pc_2874
  store i32 0, i32* @signal_received, align 4, !insn.addr !482
  %11 = call i32 @alarm(i32 1), !insn.addr !483
  %12 = load i32, i32* @signal_received, align 4, !insn.addr !484
  %13 = icmp ne i32 %12, 0, !insn.addr !485
  %or.cond35 = or i1 %13, icmp eq (i32 ptrtoint (i32* @global_var_7d1 to i32), i32 1)
  store i32 %12, i32* %.lcssa.reg2mem, !insn.addr !485
  store i64 ptrtoint (i32* @global_var_7d1 to i64), i64* %x20.16.reg2mem, !insn.addr !485
  br i1 %or.cond35, label %dec_label_pc_28a0, label %dec_label_pc_28ec, !insn.addr !485

dec_label_pc_28a0:                                ; preds = %dec_label_pc_28ec, %dec_label_pc_2880
  %.lcssa.reload = load i32, i32* %.lcssa.reg2mem
  %14 = icmp ne i32 %.lcssa.reload, 0, !insn.addr !486
  %15 = load i32, i32* @signal_number, align 4, !insn.addr !487
  %16 = icmp eq i32 %15, 14, !insn.addr !488
  %or.cond13 = icmp eq i1 %14, %16
  store i64 4294967291, i64* %x0.0.reg2mem, !insn.addr !486
  br i1 %or.cond13, label %dec_label_pc_28b8, label %dec_label_pc_28d4, !insn.addr !486

dec_label_pc_28b8:                                ; preds = %dec_label_pc_28a0
  %17 = call void (i32)* @signal(i32 10, void (i32)* null), !insn.addr !489
  %18 = call void (i32)* @signal(i32 14, void (i32)* null), !insn.addr !490
  store i64 42, i64* %x0.0.reg2mem, !insn.addr !491
  br label %dec_label_pc_28d4, !insn.addr !491

dec_label_pc_28d4:                                ; preds = %dec_label_pc_28a0, %dec_label_pc_2874, %dec_label_pc_2868, %dec_label_pc_2830, %dec_label_pc_28b8, %dec_label_pc_2808
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !492

dec_label_pc_28e0:                                ; preds = %dec_label_pc_2844, %dec_label_pc_28e0
  %x20.08.reload = load i64, i64* %x20.08.reg2mem
  %19 = add i64 %x20.08.reload, 4294967295, !insn.addr !493
  %20 = and i64 %19, 4294967295, !insn.addr !493
  %21 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !494
  %22 = load i32, i32* @signal_received, align 4, !insn.addr !477
  %23 = icmp ne i32 %22, 0, !insn.addr !478
  %24 = trunc i64 %19 to i32, !insn.addr !495
  %25 = icmp eq i32 %24, 1, !insn.addr !495
  %or.cond = or i1 %23, %25
  store i32 %22, i32* %.lcssa4.reg2mem, !insn.addr !478
  store i64 %20, i64* %x20.08.reg2mem, !insn.addr !478
  br i1 %or.cond, label %dec_label_pc_2868, label %dec_label_pc_28e0, !insn.addr !478

dec_label_pc_28ec:                                ; preds = %dec_label_pc_2880, %dec_label_pc_28ec
  %x20.16.reload = load i64, i64* %x20.16.reg2mem
  %26 = add i64 %x20.16.reload, 4294967295, !insn.addr !496
  %27 = and i64 %26, 4294967295, !insn.addr !496
  %28 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !497
  %29 = load i32, i32* @signal_received, align 4, !insn.addr !484
  %30 = icmp ne i32 %29, 0, !insn.addr !485
  %31 = trunc i64 %26 to i32, !insn.addr !498
  %32 = icmp eq i32 %31, 1, !insn.addr !498
  %or.cond3 = or i1 %30, %32
  store i32 %29, i32* %.lcssa.reg2mem, !insn.addr !485
  store i64 %27, i64* %x20.16.reg2mem, !insn.addr !485
  br i1 %or.cond3, label %dec_label_pc_28a0, label %dec_label_pc_28ec, !insn.addr !485

; uselistorder directives
  uselistorder i32* %.lcssa4.reg2mem, { 1, 0, 2 }
  uselistorder i32* %.lcssa.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x0.0.reg2mem, { 0, 5, 1, 2, 3, 4, 6 }
  uselistorder i64* %x20.08.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x20.16.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i32)* @usleep, { 1, 0, 2, 3 }
  uselistorder i32* @global_var_7d1, { 1, 0 }
  uselistorder i32* @global_var_3e9, { 1, 0 }
  uselistorder i32* @signal_received, { 2, 4, 1, 3, 0, 5, 6 }
  uselistorder i32 14, { 1, 0, 2 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i32 10, { 1, 4, 2, 3, 0 }
  uselistorder label %dec_label_pc_28ec, { 1, 0 }
  uselistorder label %dec_label_pc_28e0, { 1, 0 }
  uselistorder label %dec_label_pc_28d4, { 4, 0, 1, 2, 3, 5 }
}

define i64 @call_signal_handling() local_unnamed_addr {
dec_label_pc_2918:
  %0 = call i64 @param_signal_handling(), !insn.addr !499
  ret i64 %0, !insn.addr !499
}

define void @test_system_calls() local_unnamed_addr {
dec_label_pc_291c:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_33b2 to i8*)), !insn.addr !500
  %1 = call i32 @call_linux_syscall(), !insn.addr !501
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_33cd to i8*)), !insn.addr !502
  %3 = call i32 @call_win32_api(), !insn.addr !503
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_33e9 to i8*)), !insn.addr !504
  %5 = call i32 @call_fork_exec(), !insn.addr !505
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3405 to i8*)), !insn.addr !506
  %7 = call i64 @param_pipe_communication(), !insn.addr !507
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3421 to i8*)), !insn.addr !508
  %9 = call i64 @param_socket_create(), !insn.addr !509
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_343d to i8*)), !insn.addr !510
  %11 = call i32 @call_shmget_shmat(), !insn.addr !511
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3459 to i8*)), !insn.addr !512
  %13 = call i64 @param_signal_handling(), !insn.addr !513
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3475 to i8*)), !insn.addr !514
  ret void, !insn.addr !514
}

define i32 @param_pthread_create(i32 %x) local_unnamed_addr {
dec_label_pc_29dc:
  %x19.0.reg2mem = alloca i32, !insn.addr !515
  %stack_var_-8 = alloca i64, align 8
  %thread_ret_-16 = alloca i8*, align 8
  %stack_var_-20 = alloca i32, align 4
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !516
  %1 = inttoptr i64 %0 to i64*, !insn.addr !517
  %2 = load i64, i64* %1, align 8, !insn.addr !517
  store i32 %x, i32* %stack_var_-20, align 4, !insn.addr !518
  %3 = bitcast i8** %thread_ret_-16 to i32*, !insn.addr !519
  %4 = bitcast i32* %stack_var_-20 to i64*, !insn.addr !519
  %5 = call i32 @pthread_create(i32* nonnull %3, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2456) to i64* (i64*)*), i64* nonnull %4), !insn.addr !519
  %6 = icmp eq i32 %5, 0, !insn.addr !520
  br i1 %6, label %dec_label_pc_2a1c, label %dec_label_pc_2a54, !insn.addr !520

dec_label_pc_2a1c:                                ; preds = %dec_label_pc_29dc
  %7 = load i8*, i8** %thread_ret_-16, align 8, !insn.addr !521
  %8 = ptrtoint i8* %7 to i64, !insn.addr !521
  %9 = trunc i64 %8 to i32, !insn.addr !522
  %10 = bitcast i64* %stack_var_-8 to i64**, !insn.addr !522
  %11 = call i32 @pthread_join(i32 %9, i64** nonnull %10), !insn.addr !522
  %12 = load i64, i64* %stack_var_-8, align 8, !insn.addr !523
  %13 = inttoptr i64 %12 to i32*, !insn.addr !524
  %14 = load i32, i32* %13, align 4, !insn.addr !524
  %15 = inttoptr i64 %12 to i64*, !insn.addr !525
  call void @free(i64* %15), !insn.addr !525
  store i32 %14, i32* %x19.0.reg2mem, !insn.addr !525
  br label %dec_label_pc_2a34, !insn.addr !525

dec_label_pc_2a34:                                ; preds = %dec_label_pc_2a54, %dec_label_pc_2a1c
  %16 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !526
  %17 = inttoptr i64 %16 to i64*, !insn.addr !527
  %18 = load i64, i64* %17, align 8, !insn.addr !527
  %19 = icmp eq i64 %2, %18, !insn.addr !528
  br i1 %19, label %dec_label_pc_2a5c, label %dec_label_pc_2a50, !insn.addr !529

dec_label_pc_2a50:                                ; preds = %dec_label_pc_2a34
  call void @__stack_chk_fail(), !insn.addr !530
  br label %dec_label_pc_2a54, !insn.addr !530

dec_label_pc_2a54:                                ; preds = %dec_label_pc_29dc, %dec_label_pc_2a50
  store i32 -1, i32* %x19.0.reg2mem, !insn.addr !531
  br label %dec_label_pc_2a34, !insn.addr !531

dec_label_pc_2a5c:                                ; preds = %dec_label_pc_2a34
  %x19.0.reload = load i32, i32* %x19.0.reg2mem
  ret i32 %x19.0.reload, !insn.addr !532

; uselistorder directives
  uselistorder i64 %12, { 1, 0 }
  uselistorder i32* %stack_var_-20, { 1, 0 }
  uselistorder i8** %thread_ret_-16, { 1, 0 }
  uselistorder i64* %stack_var_-8, { 1, 0 }
  uselistorder label %dec_label_pc_2a54, { 1, 0 }
}

define i32 @call_pthread_create() local_unnamed_addr {
dec_label_pc_2a6c:
  %0 = call i32 @param_pthread_create(i32 7), !insn.addr !533
  ret i32 %0, !insn.addr !533
}

define i64 @param_pthread_join() local_unnamed_addr {
dec_label_pc_2a74:
  %x20.1.reg2mem = alloca i64, !insn.addr !534
  %x20.1.ph.reg2mem = alloca i64, !insn.addr !534
  %x21.1.reg2mem = alloca i64, !insn.addr !534
  %x20.0.reg2mem = alloca i32, !insn.addr !534
  %x19.0.reg2mem = alloca i64, !insn.addr !534
  %x23.0.reg2mem = alloca i64, !insn.addr !534
  %x22.0.reg2mem = alloca i64, !insn.addr !534
  %x21.0.reg2mem = alloca i64, !insn.addr !534
  %stack_var_-64 = alloca i64, align 8
  %stack_var_-40 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !535
  %1 = ptrtoint i64* %stack_var_-40 to i64, !insn.addr !536
  %2 = ptrtoint i64* %stack_var_-64 to i64, !insn.addr !537
  %3 = inttoptr i64 %0 to i64*, !insn.addr !538
  %4 = load i64, i64* %3, align 8, !insn.addr !538
  store i64 4294967306, i64* %stack_var_-40, align 8, !insn.addr !539
  store i64 %2, i64* %x21.0.reg2mem, !insn.addr !539
  store i64 3, i64* %x22.0.reg2mem, !insn.addr !539
  store i64 %1, i64* %x23.0.reg2mem, !insn.addr !539
  br label %dec_label_pc_2ad8, !insn.addr !539

dec_label_pc_2ad8:                                ; preds = %dec_label_pc_2af4, %dec_label_pc_2a74
  %x23.0.reload = load i64, i64* %x23.0.reg2mem
  %x21.0.reload = load i64, i64* %x21.0.reg2mem
  %5 = inttoptr i64 %x21.0.reload to i32*, !insn.addr !540
  %6 = inttoptr i64 %x23.0.reload to i64*, !insn.addr !540
  %7 = call i32 @pthread_create(i32* %5, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2412) to i64* (i64*)*), i64* %6), !insn.addr !540
  %8 = icmp eq i32 %7, 0, !insn.addr !541
  br i1 %8, label %dec_label_pc_2af4, label %dec_label_pc_2b50, !insn.addr !541

dec_label_pc_2af4:                                ; preds = %dec_label_pc_2ad8
  %x22.0.reload = load i64, i64* %x22.0.reg2mem
  %9 = add i64 %x21.0.reload, 8, !insn.addr !542
  %10 = add i64 %x23.0.reload, 12, !insn.addr !543
  %11 = add nuw nsw i64 %x22.0.reload, 4294967295, !insn.addr !544
  %12 = and i64 %11, 4294967295, !insn.addr !544
  %13 = icmp eq i64 %x22.0.reload, 1, !insn.addr !545
  store i64 %9, i64* %x21.0.reg2mem, !insn.addr !545
  store i64 %12, i64* %x22.0.reg2mem, !insn.addr !545
  store i64 %10, i64* %x23.0.reg2mem, !insn.addr !545
  store i64 %1, i64* %x19.0.reg2mem, !insn.addr !545
  store i32 0, i32* %x20.0.reg2mem, !insn.addr !545
  store i64 0, i64* %x21.1.reg2mem, !insn.addr !545
  br i1 %13, label %dec_label_pc_2b08, label %dec_label_pc_2ad8, !insn.addr !545

dec_label_pc_2b08:                                ; preds = %dec_label_pc_2af4, %dec_label_pc_2b18
  %x21.1.reload = load i64, i64* %x21.1.reg2mem
  %14 = mul i64 %x21.1.reload, 8, !insn.addr !546
  %15 = add i64 %14, %2, !insn.addr !546
  %16 = inttoptr i64 %15 to i64*, !insn.addr !546
  %17 = load i64, i64* %16, align 8, !insn.addr !546
  %18 = trunc i64 %17 to i32, !insn.addr !547
  %19 = call i32 @pthread_join(i32 %18, i64** null), !insn.addr !547
  %20 = icmp eq i32 %19, 0, !insn.addr !548
  store i64 4294967294, i64* %x20.1.ph.reg2mem, !insn.addr !548
  br i1 %20, label %dec_label_pc_2b18, label %dec_label_pc_2b30.loopexit, !insn.addr !548

dec_label_pc_2b18:                                ; preds = %dec_label_pc_2b08
  %x20.0.reload = load i32, i32* %x20.0.reg2mem
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  %21 = add i64 %x19.0.reload, 8, !insn.addr !549
  %22 = inttoptr i64 %21 to i32*, !insn.addr !549
  %23 = load i32, i32* %22, align 4, !insn.addr !549
  %24 = add nuw nsw i64 %x21.1.reload, 1, !insn.addr !550
  %25 = add i64 %x19.0.reload, 12, !insn.addr !551
  %26 = add i32 %23, %x20.0.reload, !insn.addr !552
  %27 = icmp eq i64 %24, 3, !insn.addr !553
  store i64 %25, i64* %x19.0.reg2mem, !insn.addr !553
  store i32 %26, i32* %x20.0.reg2mem, !insn.addr !553
  store i64 %24, i64* %x21.1.reg2mem, !insn.addr !553
  br i1 %27, label %dec_label_pc_2b30.loopexit.split.loop.exit, label %dec_label_pc_2b08, !insn.addr !553

dec_label_pc_2b30.loopexit.split.loop.exit:       ; preds = %dec_label_pc_2b18
  %28 = zext i32 %26 to i64, !insn.addr !552
  store i64 %28, i64* %x20.1.ph.reg2mem
  br label %dec_label_pc_2b30.loopexit

dec_label_pc_2b30.loopexit:                       ; preds = %dec_label_pc_2b08, %dec_label_pc_2b30.loopexit.split.loop.exit
  %x20.1.ph.reload = load i64, i64* %x20.1.ph.reg2mem
  store i64 %x20.1.ph.reload, i64* %x20.1.reg2mem
  br label %dec_label_pc_2b30

dec_label_pc_2b30:                                ; preds = %dec_label_pc_2b30.loopexit, %dec_label_pc_2b50
  %29 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !554
  %30 = inttoptr i64 %29 to i64*, !insn.addr !555
  %31 = load i64, i64* %30, align 8, !insn.addr !555
  %32 = icmp eq i64 %4, %31, !insn.addr !556
  br i1 %32, label %dec_label_pc_2b60, label %dec_label_pc_2b4c, !insn.addr !557

dec_label_pc_2b4c:                                ; preds = %dec_label_pc_2b30
  call void @__stack_chk_fail(), !insn.addr !558
  br label %dec_label_pc_2b50, !insn.addr !558

dec_label_pc_2b50:                                ; preds = %dec_label_pc_2ad8, %dec_label_pc_2b4c
  store i64 4294967295, i64* %x20.1.reg2mem, !insn.addr !559
  br label %dec_label_pc_2b30, !insn.addr !559

dec_label_pc_2b60:                                ; preds = %dec_label_pc_2b30
  %x20.1.reload = load i64, i64* %x20.1.reg2mem
  ret i64 %x20.1.reload, !insn.addr !560

; uselistorder directives
  uselistorder i32 %26, { 1, 0 }
  uselistorder i64 %x19.0.reload, { 1, 0 }
  uselistorder i64 %x22.0.reload, { 1, 0 }
  uselistorder i64 %x21.0.reload, { 1, 0 }
  uselistorder i64 %x23.0.reload, { 1, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %x21.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x22.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x23.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x19.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %x20.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x21.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x20.1.ph.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x20.1.reg2mem, { 0, 2, 1 }
  uselistorder i64 12, { 3, 4, 1, 2, 0 }
  uselistorder label %dec_label_pc_2b50, { 1, 0 }
  uselistorder label %dec_label_pc_2b30, { 1, 0 }
  uselistorder label %dec_label_pc_2b30.loopexit, { 1, 0 }
  uselistorder label %dec_label_pc_2b08, { 1, 0 }
}

define i64 @call_pthread_join() local_unnamed_addr {
dec_label_pc_2b7c:
  %0 = call i64 @param_pthread_join(), !insn.addr !561
  ret i64 %0, !insn.addr !561
}

define i32 @param_mutex_lock(i32 %thread_count, i32 %iterations_per_thread) local_unnamed_addr {
dec_label_pc_2b80:
  %x22.11.reg2mem = alloca i64, !insn.addr !562
  %x0.0.reg2mem = alloca i32, !insn.addr !562
  %x22.0.reg2mem = alloca i64, !insn.addr !562
  %0 = sext i32 %thread_count to i64
  %stack_var_4 = alloca i32, align 4
  %1 = call i64 @__asm_sbfiz(i64 %0, i64 %0, i64 3, i64 32), !insn.addr !563
  store i32 %iterations_per_thread, i32* %stack_var_4, align 4, !insn.addr !564
  %2 = trunc i64 %1 to i32, !insn.addr !565
  %3 = call i64* @malloc(i32 %2), !insn.addr !565
  %4 = icmp eq i64* %3, null, !insn.addr !566
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !566
  br i1 %4, label %dec_label_pc_2c30, label %dec_label_pc_2ba8, !insn.addr !566

dec_label_pc_2ba8:                                ; preds = %dec_label_pc_2b80
  %5 = zext i32 %thread_count to i64, !insn.addr !567
  %6 = ptrtoint i64* %3 to i64, !insn.addr !565
  store i32 0, i32* @shared_counter, align 4, !insn.addr !568
  %7 = bitcast i32* %stack_var_4 to i64*
  store i64 0, i64* %x22.0.reg2mem, !insn.addr !568
  br label %dec_label_pc_2bc8, !insn.addr !568

dec_label_pc_2bc8:                                ; preds = %dec_label_pc_2c08, %dec_label_pc_2ba8
  %x22.0.reload = load i64, i64* %x22.0.reg2mem
  %8 = icmp ult i64 %x22.0.reload, %5, !insn.addr !569
  br i1 %8, label %dec_label_pc_2c08, label %dec_label_pc_2bd4.preheader, !insn.addr !569

dec_label_pc_2bd4.preheader:                      ; preds = %dec_label_pc_2bc8
  %9 = icmp eq i32 %thread_count, 0, !insn.addr !570
  store i64 0, i64* %x22.11.reg2mem, !insn.addr !570
  br i1 %9, label %dec_label_pc_2bdc, label %dec_label_pc_2c44, !insn.addr !570

dec_label_pc_2bdc:                                ; preds = %dec_label_pc_2c44, %dec_label_pc_2bd4.preheader
  call void @free(i64* nonnull %3), !insn.addr !571
  %10 = load i32, i32* %stack_var_4, align 4, !insn.addr !572
  %11 = load i32, i32* @shared_counter, align 4, !insn.addr !573
  %12 = mul i32 %10, %thread_count, !insn.addr !574
  %13 = icmp eq i32 %11, %12, !insn.addr !575
  %phitmp = select i1 %13, i32 42, i32 -3, !insn.addr !576
  store i32 %phitmp, i32* %x0.0.reg2mem, !insn.addr !577
  br label %dec_label_pc_2c30, !insn.addr !577

dec_label_pc_2c08:                                ; preds = %dec_label_pc_2bc8
  %14 = mul i64 %x22.0.reload, 8, !insn.addr !578
  %15 = add i64 %14, %6, !insn.addr !578
  %16 = add nuw nsw i64 %x22.0.reload, 1, !insn.addr !579
  %17 = inttoptr i64 %15 to i32*, !insn.addr !580
  %18 = call i32 @pthread_create(i32* %17, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2500) to i64* (i64*)*), i64* nonnull %7), !insn.addr !580
  %19 = icmp eq i32 %18, 0, !insn.addr !581
  store i64 %16, i64* %x22.0.reg2mem, !insn.addr !581
  br i1 %19, label %dec_label_pc_2bc8, label %dec_label_pc_2c24, !insn.addr !581

dec_label_pc_2c24:                                ; preds = %dec_label_pc_2c08
  call void @free(i64* nonnull %3), !insn.addr !582
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !583
  br label %dec_label_pc_2c30, !insn.addr !583

dec_label_pc_2c30:                                ; preds = %dec_label_pc_2b80, %dec_label_pc_2c24, %dec_label_pc_2bdc
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !584

dec_label_pc_2c44:                                ; preds = %dec_label_pc_2bd4.preheader, %dec_label_pc_2c44
  %x22.11.reload = load i64, i64* %x22.11.reg2mem
  %20 = mul i64 %x22.11.reload, 8, !insn.addr !585
  %21 = add i64 %20, %6, !insn.addr !585
  %22 = inttoptr i64 %21 to i64*, !insn.addr !585
  %23 = load i64, i64* %22, align 8, !insn.addr !585
  %24 = add nuw nsw i64 %x22.11.reload, 1, !insn.addr !586
  %25 = trunc i64 %23 to i32, !insn.addr !587
  %26 = call i32 @pthread_join(i32 %25, i64** null), !insn.addr !587
  %exitcond = icmp eq i64 %24, %5
  store i64 %24, i64* %x22.11.reg2mem, !insn.addr !570
  br i1 %exitcond, label %dec_label_pc_2bdc, label %dec_label_pc_2c44, !insn.addr !570

; uselistorder directives
  uselistorder i64 %x22.0.reload, { 0, 2, 1 }
  uselistorder i64 %6, { 1, 0 }
  uselistorder i64* %3, { 0, 1, 3, 2 }
  uselistorder i32* %stack_var_4, { 1, 0, 2 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64* %x22.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %x0.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64* %x22.11.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_2c44, { 1, 0 }
  uselistorder label %dec_label_pc_2c30, { 1, 2, 0 }
}

define i32 @call_mutex_lock() local_unnamed_addr {
dec_label_pc_2c60:
  %0 = call i32 @param_mutex_lock(i32 4, i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !588
  ret i32 %0, !insn.addr !588

; uselistorder directives
  uselistorder i32 ptrtoint (i32* @global_var_3e8 to i32), { 0, 2, 1, 3 }
}

define i64 @param_condition_variable() local_unnamed_addr {
dec_label_pc_2c6c:
  %x19.0.reg2mem = alloca i64, !insn.addr !589
  %stack_var_-8 = alloca i64, align 8
  %consumer_-24 = alloca i64, align 8
  %consumer_ret_-16 = alloca i8*, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !590
  %1 = inttoptr i64 %0 to i64*, !insn.addr !591
  %2 = load i64, i64* %1, align 8, !insn.addr !591
  store i32 0, i32* @ready, align 4, !insn.addr !592
  store i32 0, i32* @data, align 4, !insn.addr !592
  %3 = bitcast i8** %consumer_ret_-16 to i32*, !insn.addr !593
  %4 = call i32 @pthread_create(i32* nonnull %3, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2608) to i64* (i64*)*), i64* null), !insn.addr !593
  %5 = icmp eq i32 %4, 0, !insn.addr !594
  store i64 4294967295, i64* %x19.0.reg2mem, !insn.addr !594
  br i1 %5, label %dec_label_pc_2cb0, label %dec_label_pc_2cd8, !insn.addr !594

dec_label_pc_2cb0:                                ; preds = %dec_label_pc_2c6c
  %6 = bitcast i64* %consumer_-24 to i32*, !insn.addr !595
  %7 = call i32 @pthread_create(i32* nonnull %6, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2712) to i64* (i64*)*), i64* null), !insn.addr !595
  %8 = icmp eq i32 %7, 0, !insn.addr !596
  br i1 %8, label %dec_label_pc_2cf8, label %dec_label_pc_2ccc, !insn.addr !596

dec_label_pc_2ccc:                                ; preds = %dec_label_pc_2cb0
  %9 = load i8*, i8** %consumer_ret_-16, align 8, !insn.addr !597
  %10 = ptrtoint i8* %9 to i64, !insn.addr !597
  %11 = trunc i64 %10 to i32, !insn.addr !598
  %12 = call i32 @pthread_cancel(i32 %11), !insn.addr !598
  store i64 4294967294, i64* %x19.0.reg2mem, !insn.addr !598
  br label %dec_label_pc_2cd8, !insn.addr !598

dec_label_pc_2cd8:                                ; preds = %dec_label_pc_2c6c, %dec_label_pc_2cf8, %dec_label_pc_2ccc
  %13 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !599
  %14 = inttoptr i64 %13 to i64*, !insn.addr !600
  %15 = load i64, i64* %14, align 8, !insn.addr !600
  %16 = icmp eq i64 %2, %15, !insn.addr !601
  br i1 %16, label %dec_label_pc_2d28, label %dec_label_pc_2cf4, !insn.addr !602

dec_label_pc_2cf4:                                ; preds = %dec_label_pc_2cd8
  call void @__stack_chk_fail(), !insn.addr !603
  br label %dec_label_pc_2cf8, !insn.addr !603

dec_label_pc_2cf8:                                ; preds = %dec_label_pc_2cf4, %dec_label_pc_2cb0
  %17 = load i8*, i8** %consumer_ret_-16, align 8, !insn.addr !604
  %18 = ptrtoint i8* %17 to i64, !insn.addr !604
  %19 = trunc i64 %18 to i32, !insn.addr !605
  %20 = bitcast i64* %stack_var_-8 to i64**, !insn.addr !605
  %21 = call i32 @pthread_join(i32 %19, i64** nonnull %20), !insn.addr !605
  %22 = load i64, i64* %consumer_-24, align 8, !insn.addr !606
  %23 = trunc i64 %22 to i32, !insn.addr !607
  %24 = call i32 @pthread_join(i32 %23, i64** null), !insn.addr !607
  %25 = load i64, i64* %stack_var_-8, align 8, !insn.addr !608
  %26 = inttoptr i64 %25 to i32*, !insn.addr !609
  %27 = load i32, i32* %26, align 4, !insn.addr !609
  %28 = zext i32 %27 to i64, !insn.addr !609
  %29 = inttoptr i64 %25 to i64*, !insn.addr !610
  call void @free(i64* %29), !insn.addr !610
  store i64 %28, i64* %x19.0.reg2mem, !insn.addr !611
  br label %dec_label_pc_2cd8, !insn.addr !611

dec_label_pc_2d28:                                ; preds = %dec_label_pc_2cd8
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  ret i64 %x19.0.reload, !insn.addr !612

; uselistorder directives
  uselistorder i64 %25, { 1, 0 }
  uselistorder i8** %consumer_ret_-16, { 1, 2, 0 }
  uselistorder i64* %consumer_-24, { 1, 0 }
  uselistorder i64* %stack_var_-8, { 1, 0 }
  uselistorder i64* %x19.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32* @ready, { 1, 2, 3, 0 }
  uselistorder label %dec_label_pc_2cd8, { 1, 2, 0 }
}

define i64 @call_condition_variable() local_unnamed_addr {
dec_label_pc_2d38:
  %0 = call i64 @param_condition_variable(), !insn.addr !613
  ret i64 %0, !insn.addr !613
}

define i32 @param_atomic_ops(i32 %thread_count, i32 %iterations) local_unnamed_addr {
dec_label_pc_2d3c:
  %x22.3.reg2mem = alloca i64, !insn.addr !614
  %x20.2.reg2mem = alloca i64, !insn.addr !614
  %x19.2.reg2mem = alloca i64, !insn.addr !614
  %x22.2.reg2mem = alloca i64, !insn.addr !614
  %x20.1.reg2mem = alloca i64, !insn.addr !614
  %x19.1.reg2mem = alloca i64, !insn.addr !614
  %x0.0.reg2mem = alloca i32, !insn.addr !614
  %x22.1.reg2mem = alloca i64, !insn.addr !614
  %x20.0.reg2mem = alloca i64, !insn.addr !614
  %x19.0.reg2mem = alloca i64, !insn.addr !614
  %x22.0.reg2mem = alloca i64, !insn.addr !614
  %stack_var_-8 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %0 = zext i32 %thread_count to i64, !insn.addr !615
  %1 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !616
  store i32 %iterations, i32* %stack_var_-12, align 4, !insn.addr !617
  %2 = inttoptr i64 %1 to i64*, !insn.addr !618
  %3 = load i64, i64* %2, align 8, !insn.addr !618
  %4 = call i64 @__asm_sbfiz(i64 %1, i64 %0, i64 3, i64 32), !insn.addr !619
  %5 = trunc i64 %4 to i32, !insn.addr !620
  %6 = call i64* @malloc(i32 %5), !insn.addr !620
  %7 = icmp eq i64* %6, null, !insn.addr !621
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !621
  br i1 %7, label %dec_label_pc_2e28, label %dec_label_pc_2d78, !insn.addr !621

dec_label_pc_2d78:                                ; preds = %dec_label_pc_2d3c
  %8 = ptrtoint i64* %6 to i64, !insn.addr !620
  %9 = load i64, i64* bitcast (i32* @atomic_counter to i64*), align 8, !insn.addr !622
  call void @__asm_stlr(i32 0, i64 %9), !insn.addr !622
  %10 = bitcast i32* %stack_var_-12 to i64*
  store i64 0, i64* %x22.0.reg2mem, !insn.addr !623
  br label %dec_label_pc_2d9c, !insn.addr !623

dec_label_pc_2d9c:                                ; preds = %dec_label_pc_2e00, %dec_label_pc_2d78
  %x22.0.reload = load i64, i64* %x22.0.reg2mem
  %11 = icmp ult i64 %x22.0.reload, %0, !insn.addr !624
  br i1 %11, label %dec_label_pc_2e00, label %dec_label_pc_2da4, !insn.addr !624

dec_label_pc_2da4:                                ; preds = %dec_label_pc_2d9c
  %12 = call i32 @pthread_create(i32* nonnull %stack_var_-8, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2900) to i64* (i64*)*), i64* null), !insn.addr !625
  %13 = icmp eq i32 %12, 0, !insn.addr !626
  store i64 %8, i64* %x19.0.reg2mem, !insn.addr !626
  store i64 ptrtoint (i8** @global_var_15000 to i64), i64* %x20.0.reg2mem, !insn.addr !626
  store i64 0, i64* %x22.1.reg2mem, !insn.addr !626
  br i1 %13, label %dec_label_pc_2dc0, label %dec_label_pc_2dd0, !insn.addr !626

dec_label_pc_2dc0:                                ; preds = %dec_label_pc_2da4
  %14 = load i32, i32* %stack_var_-8, align 4, !insn.addr !627
  %15 = call i32 @pthread_join(i32 %14, i64** null), !insn.addr !628
  store i64 %8, i64* %x19.0.reg2mem, !insn.addr !628
  store i64 ptrtoint (i8** @global_var_15000 to i64), i64* %x20.0.reg2mem, !insn.addr !628
  store i64 0, i64* %x22.1.reg2mem, !insn.addr !628
  br label %dec_label_pc_2dd0, !insn.addr !628

dec_label_pc_2dd0:                                ; preds = %dec_label_pc_2dc0, %dec_label_pc_2da4, %dec_label_pc_2e48
  %x22.1.reload = load i64, i64* %x22.1.reg2mem
  %x20.0.reload = load i64, i64* %x20.0.reg2mem
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  %16 = icmp slt i64 %x22.1.reload, %0, !insn.addr !629
  store i64 %x19.0.reload, i64* %x19.2.reg2mem, !insn.addr !629
  store i64 %x20.0.reload, i64* %x20.2.reg2mem, !insn.addr !629
  store i64 %x22.1.reload, i64* %x22.3.reg2mem, !insn.addr !629
  br i1 %16, label %dec_label_pc_2e48, label %dec_label_pc_2dd8, !insn.addr !629

dec_label_pc_2dd8:                                ; preds = %dec_label_pc_2dd0
  %17 = add i64 %x20.0.reload, 192, !insn.addr !630
  %18 = inttoptr i64 %17 to i32*, !insn.addr !631
  %19 = load i32, i32* %18, align 4, !insn.addr !631
  %20 = zext i32 %19 to i64, !insn.addr !631
  %21 = inttoptr i64 %x19.0.reload to i64*, !insn.addr !632
  call void @free(i64* %21), !insn.addr !632
  %22 = icmp slt i32 %19, 1
  %phitmp = select i1 %22, i32 -3, i32 42, !insn.addr !633
  store i32 %phitmp, i32* %x0.0.reg2mem, !insn.addr !634
  store i64 %x19.0.reload, i64* %x19.1.reg2mem, !insn.addr !634
  store i64 %20, i64* %x20.1.reg2mem, !insn.addr !634
  store i64 %x22.1.reload, i64* %x22.2.reg2mem, !insn.addr !634
  br label %dec_label_pc_2e28, !insn.addr !634

dec_label_pc_2e00:                                ; preds = %dec_label_pc_2d9c
  %23 = mul i64 %x22.0.reload, 8, !insn.addr !635
  %24 = add i64 %23, %8, !insn.addr !635
  %25 = add nuw nsw i64 %x22.0.reload, 1, !insn.addr !636
  %26 = inttoptr i64 %24 to i32*, !insn.addr !637
  %27 = call i32 @pthread_create(i32* %26, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2800) to i64* (i64*)*), i64* nonnull %10), !insn.addr !637
  %28 = icmp eq i32 %27, 0, !insn.addr !638
  store i64 %25, i64* %x22.0.reg2mem, !insn.addr !638
  br i1 %28, label %dec_label_pc_2d9c, label %dec_label_pc_2e1c, !insn.addr !638

dec_label_pc_2e1c:                                ; preds = %dec_label_pc_2e00
  call void @free(i64* nonnull %6), !insn.addr !639
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !640
  store i64 %8, i64* %x19.1.reg2mem, !insn.addr !640
  store i64 ptrtoint (i8** @global_var_15000 to i64), i64* %x20.1.reg2mem, !insn.addr !640
  store i64 %25, i64* %x22.2.reg2mem, !insn.addr !640
  br label %dec_label_pc_2e28, !insn.addr !640

dec_label_pc_2e28:                                ; preds = %dec_label_pc_2d3c, %dec_label_pc_2e1c, %dec_label_pc_2dd8
  %29 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !641
  %30 = inttoptr i64 %29 to i64*, !insn.addr !642
  %31 = load i64, i64* %30, align 8, !insn.addr !642
  %32 = icmp eq i64 %3, %31, !insn.addr !643
  br i1 %32, label %dec_label_pc_2e64, label %dec_label_pc_2e44, !insn.addr !644

dec_label_pc_2e44:                                ; preds = %dec_label_pc_2e28
  %x22.2.reload = load i64, i64* %x22.2.reg2mem
  %x20.1.reload = load i64, i64* %x20.1.reg2mem
  %x19.1.reload = load i64, i64* %x19.1.reg2mem
  call void @__stack_chk_fail(), !insn.addr !645
  store i64 %x19.1.reload, i64* %x19.2.reg2mem, !insn.addr !645
  store i64 %x20.1.reload, i64* %x20.2.reg2mem, !insn.addr !645
  store i64 %x22.2.reload, i64* %x22.3.reg2mem, !insn.addr !645
  br label %dec_label_pc_2e48, !insn.addr !645

dec_label_pc_2e48:                                ; preds = %dec_label_pc_2e44, %dec_label_pc_2dd0
  %x22.3.reload = load i64, i64* %x22.3.reg2mem
  %x20.2.reload = load i64, i64* %x20.2.reg2mem
  %x19.2.reload = load i64, i64* %x19.2.reg2mem
  %33 = mul i64 %x22.3.reload, 8, !insn.addr !646
  %34 = add i64 %33, %x19.2.reload, !insn.addr !646
  %35 = inttoptr i64 %34 to i64*, !insn.addr !646
  %36 = load i64, i64* %35, align 8, !insn.addr !646
  %37 = add i64 %x22.3.reload, 1, !insn.addr !647
  %38 = trunc i64 %36 to i32, !insn.addr !648
  %39 = call i32 @pthread_join(i32 %38, i64** null), !insn.addr !648
  store i64 %x19.2.reload, i64* %x19.0.reg2mem, !insn.addr !649
  store i64 %x20.2.reload, i64* %x20.0.reg2mem, !insn.addr !649
  store i64 %37, i64* %x22.1.reg2mem, !insn.addr !649
  br label %dec_label_pc_2dd0, !insn.addr !649

dec_label_pc_2e64:                                ; preds = %dec_label_pc_2e28
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !650

; uselistorder directives
  uselistorder i64 %x19.2.reload, { 1, 0 }
  uselistorder i64 %x19.0.reload, { 1, 2, 0 }
  uselistorder i64 %x20.0.reload, { 1, 0 }
  uselistorder i64 %x22.1.reload, { 1, 0, 2 }
  uselistorder i64 %x22.0.reload, { 0, 2, 1 }
  uselistorder i64 %8, { 0, 3, 1, 2 }
  uselistorder i64* %6, { 0, 2, 1 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %x22.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x19.0.reg2mem, { 3, 0, 1, 2 }
  uselistorder i64* %x20.0.reg2mem, { 3, 0, 1, 2 }
  uselistorder i64* %x22.1.reg2mem, { 3, 0, 1, 2 }
  uselistorder i32* %x0.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i64* %x19.2.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x20.2.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x22.3.reg2mem, { 0, 2, 1 }
  uselistorder void (i32, i64)* @__asm_stlr, { 1, 0 }
  uselistorder label %dec_label_pc_2e28, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2dd0, { 2, 0, 1 }
}

define i32 @call_atomic_ops() local_unnamed_addr {
dec_label_pc_2e78:
  %0 = call i32 @param_atomic_ops(i32 4, i32 500), !insn.addr !651
  ret i32 %0, !insn.addr !651
}

define i32 @param_thread_local_storage(i32 %thread_count) local_unnamed_addr {
dec_label_pc_2e84:
  %0 = alloca i64
  %x24.2.reg2mem = alloca i64, !insn.addr !652
  %x23.2.reg2mem = alloca i64, !insn.addr !652
  %x22.4.reg2mem = alloca i64, !insn.addr !652
  %x20.2.reg2mem = alloca i64, !insn.addr !652
  %x19.3.reg2mem = alloca i64, !insn.addr !652
  %x24.1.reg2mem = alloca i64, !insn.addr !652
  %x23.1.reg2mem = alloca i64, !insn.addr !652
  %x22.3.reg2mem = alloca i64, !insn.addr !652
  %x20.1.reg2mem = alloca i64, !insn.addr !652
  %x19.2.reg2mem = alloca i64, !insn.addr !652
  %x0.0.reg2mem = alloca i32, !insn.addr !652
  %x19.1.reg2mem = alloca i64, !insn.addr !652
  %x22.05.reg2mem = alloca i64, !insn.addr !652
  %x24.0.reg2mem = alloca i64, !insn.addr !652
  %x23.0.reg2mem = alloca i64, !insn.addr !652
  %x22.2.reg2mem = alloca i64, !insn.addr !652
  %x20.0.reg2mem = alloca i64, !insn.addr !652
  %x19.0.reg2mem = alloca i64, !insn.addr !652
  %x22.1.reg2mem = alloca i64, !insn.addr !652
  %1 = load i64, i64* %0
  %stack_var_-8 = alloca i64, align 8
  %2 = zext i32 %thread_count to i64, !insn.addr !653
  %3 = call i64 @__asm_sbfiz(i64 %1, i64 %2, i64 3, i64 32), !insn.addr !654
  %4 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !655
  %5 = inttoptr i64 %4 to i64*, !insn.addr !656
  %6 = load i64, i64* %5, align 8, !insn.addr !656
  %7 = trunc i64 %3 to i32, !insn.addr !657
  %8 = call i64* @malloc(i32 %7), !insn.addr !657
  %9 = ptrtoint i64* %8 to i64, !insn.addr !657
  %10 = call i64* @malloc(i32 %7), !insn.addr !658
  %11 = icmp eq i64* %8, null, !insn.addr !659
  %12 = icmp eq i64* %10, null
  %storemerge1 = or i1 %11, %12
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !660
  store i64 %2, i64* %x19.2.reg2mem, !insn.addr !660
  store i64 %3, i64* %x20.1.reg2mem, !insn.addr !660
  br i1 %storemerge1, label %dec_label_pc_2fcc, label %dec_label_pc_2ee8.preheader, !insn.addr !660

dec_label_pc_2ee8.preheader:                      ; preds = %dec_label_pc_2e84
  %13 = ptrtoint i64* %10 to i64, !insn.addr !658
  %14 = icmp eq i32 %thread_count, 0, !insn.addr !661
  store i64 0, i64* %x22.05.reg2mem, !insn.addr !661
  br i1 %14, label %dec_label_pc_2efc.preheader, label %dec_label_pc_2f58, !insn.addr !661

dec_label_pc_2efc.preheader:                      ; preds = %dec_label_pc_2f58, %dec_label_pc_2ee8.preheader
  store i64 0, i64* %x22.1.reg2mem
  br label %dec_label_pc_2efc

dec_label_pc_2efc:                                ; preds = %dec_label_pc_2efc.preheader, %dec_label_pc_2f84
  %x22.1.reload = load i64, i64* %x22.1.reg2mem
  %15 = icmp ult i64 %x22.1.reload, %2, !insn.addr !662
  store i64 %2, i64* %x19.0.reg2mem, !insn.addr !662
  store i64 %13, i64* %x20.0.reg2mem, !insn.addr !662
  store i64 0, i64* %x22.2.reg2mem, !insn.addr !662
  store i64 0, i64* %x23.0.reg2mem, !insn.addr !662
  store i64 0, i64* %x24.0.reg2mem, !insn.addr !662
  br i1 %15, label %dec_label_pc_2f84, label %dec_label_pc_2f18, !insn.addr !662

dec_label_pc_2f18:                                ; preds = %dec_label_pc_2efc, %dec_label_pc_2fec
  %x24.0.reload = load i64, i64* %x24.0.reg2mem
  %x23.0.reload = load i64, i64* %x23.0.reg2mem
  %x22.2.reload = load i64, i64* %x22.2.reg2mem
  %x20.0.reload = load i64, i64* %x20.0.reg2mem
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  %16 = icmp sgt i64 %x19.0.reload, %x22.2.reload, !insn.addr !663
  store i64 %x19.0.reload, i64* %x19.3.reg2mem, !insn.addr !663
  store i64 %x20.0.reload, i64* %x20.2.reg2mem, !insn.addr !663
  store i64 %x22.2.reload, i64* %x22.4.reg2mem, !insn.addr !663
  store i64 %x23.0.reload, i64* %x23.2.reg2mem, !insn.addr !663
  store i64 %x24.0.reload, i64* %x24.2.reg2mem, !insn.addr !663
  br i1 %16, label %dec_label_pc_2fec, label %dec_label_pc_2f20, !insn.addr !663

dec_label_pc_2f20:                                ; preds = %dec_label_pc_2f18
  %17 = inttoptr i64 %x20.0.reload to i64*, !insn.addr !664
  call void @free(i64* %17), !insn.addr !664
  call void @free(i64* %8), !insn.addr !665
  %18 = trunc i64 %x19.0.reload to i32, !insn.addr !666
  %19 = mul i32 %18, 100, !insn.addr !666
  %20 = mul i64 %x19.0.reload, 150, !insn.addr !667
  %21 = and i64 %20, 4294967294, !insn.addr !667
  %22 = trunc i64 %x24.0.reload to i32, !insn.addr !668
  %23 = icmp eq i32 %19, %22, !insn.addr !668
  %24 = trunc i64 %x23.0.reload to i32
  %25 = trunc i64 %20 to i32
  %26 = icmp eq i32 %25, %24
  %storemerge = icmp eq i1 %26, %23
  %phitmp = select i1 %storemerge, i32 42, i32 -3
  store i32 %phitmp, i32* %x0.0.reg2mem, !insn.addr !669
  store i64 %21, i64* %x19.2.reg2mem, !insn.addr !669
  store i64 %x20.0.reload, i64* %x20.1.reg2mem, !insn.addr !669
  store i64 %x22.2.reload, i64* %x22.3.reg2mem, !insn.addr !669
  store i64 %x23.0.reload, i64* %x23.1.reg2mem, !insn.addr !669
  store i64 %x24.0.reload, i64* %x24.1.reg2mem, !insn.addr !669
  br label %dec_label_pc_2fcc, !insn.addr !669

dec_label_pc_2f58:                                ; preds = %dec_label_pc_2ee8.preheader, %dec_label_pc_2f58
  %x22.05.reload = load i64, i64* %x22.05.reg2mem
  %27 = call i64* @malloc(i32 16), !insn.addr !670
  %28 = ptrtoint i64* %27 to i64, !insn.addr !670
  %29 = mul i64 %x22.05.reload, 8, !insn.addr !671
  %30 = add i64 %29, %13, !insn.addr !671
  %31 = inttoptr i64 %30 to i64*, !insn.addr !671
  store i64 %28, i64* %31, align 8, !insn.addr !671
  %32 = add nuw nsw i64 %x22.05.reload, 1, !insn.addr !672
  %33 = bitcast i64* %27 to i8*, !insn.addr !673
  %34 = call i32 (i8*, i32, i32, i32, i8*, ...) @__snprintf_chk(i8* %33, i32 16, i32 1, i32 16, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_3491, i64 0, i64 0), i64 %x22.05.reload), !insn.addr !673
  %exitcond8 = icmp eq i64 %32, %2
  store i64 %32, i64* %x22.05.reg2mem, !insn.addr !661
  br i1 %exitcond8, label %dec_label_pc_2efc.preheader, label %dec_label_pc_2f58, !insn.addr !661

dec_label_pc_2f84:                                ; preds = %dec_label_pc_2efc
  %35 = mul i64 %x22.1.reload, 8, !insn.addr !674
  %36 = add i64 %35, %13, !insn.addr !674
  %37 = inttoptr i64 %36 to i64*, !insn.addr !674
  %38 = load i64, i64* %37, align 8, !insn.addr !674
  %39 = add i64 %35, %9, !insn.addr !675
  %40 = add nuw nsw i64 %x22.1.reload, 1
  %41 = inttoptr i64 %39 to i32*, !insn.addr !676
  %42 = inttoptr i64 %38 to i64*, !insn.addr !676
  %43 = call i32 @pthread_create(i32* %41, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2932) to i64* (i64*)*), i64* %42), !insn.addr !676
  %44 = icmp eq i32 %43, 0, !insn.addr !677
  store i64 %40, i64* %x22.1.reg2mem, !insn.addr !677
  store i64 0, i64* %x19.1.reg2mem, !insn.addr !677
  br i1 %44, label %dec_label_pc_2efc, label %dec_label_pc_2fa4, !insn.addr !677

dec_label_pc_2fa4:                                ; preds = %dec_label_pc_2f84, %dec_label_pc_2fa4
  %x19.1.reload = load i64, i64* %x19.1.reg2mem
  %45 = mul i64 %x19.1.reload, 8, !insn.addr !678
  %46 = add i64 %45, %13, !insn.addr !678
  %47 = inttoptr i64 %46 to i64*, !insn.addr !678
  %48 = load i64, i64* %47, align 8, !insn.addr !678
  %49 = add nuw nsw i64 %x19.1.reload, 1, !insn.addr !679
  %50 = inttoptr i64 %48 to i64*, !insn.addr !680
  call void @free(i64* %50), !insn.addr !680
  %exitcond = icmp eq i64 %49, %40
  store i64 %49, i64* %x19.1.reg2mem, !insn.addr !681
  br i1 %exitcond, label %dec_label_pc_2fb8, label %dec_label_pc_2fa4, !insn.addr !681

dec_label_pc_2fb8:                                ; preds = %dec_label_pc_2fa4
  %51 = and i64 %x22.1.reload, 4294967295, !insn.addr !682
  call void @free(i64* %10), !insn.addr !683
  call void @free(i64* %8), !insn.addr !684
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !685
  store i64 %40, i64* %x19.2.reg2mem, !insn.addr !685
  store i64 %13, i64* %x20.1.reg2mem, !insn.addr !685
  store i64 %40, i64* %x22.3.reg2mem, !insn.addr !685
  store i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2932), i64* %x23.1.reg2mem, !insn.addr !685
  store i64 %51, i64* %x24.1.reg2mem, !insn.addr !685
  br label %dec_label_pc_2fcc, !insn.addr !685

dec_label_pc_2fcc:                                ; preds = %dec_label_pc_2e84, %dec_label_pc_2fb8, %dec_label_pc_2f20
  %52 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !686
  %53 = inttoptr i64 %52 to i64*, !insn.addr !687
  %54 = load i64, i64* %53, align 8, !insn.addr !687
  %55 = icmp eq i64 %6, %54, !insn.addr !688
  br i1 %55, label %dec_label_pc_3028, label %dec_label_pc_2fe8, !insn.addr !689

dec_label_pc_2fe8:                                ; preds = %dec_label_pc_2fcc
  %x24.1.reload = load i64, i64* %x24.1.reg2mem
  %x23.1.reload = load i64, i64* %x23.1.reg2mem
  %x22.3.reload = load i64, i64* %x22.3.reg2mem
  %x20.1.reload = load i64, i64* %x20.1.reg2mem
  %x19.2.reload = load i64, i64* %x19.2.reg2mem
  call void @__stack_chk_fail(), !insn.addr !690
  store i64 %x19.2.reload, i64* %x19.3.reg2mem, !insn.addr !690
  store i64 %x20.1.reload, i64* %x20.2.reg2mem, !insn.addr !690
  store i64 %x22.3.reload, i64* %x22.4.reg2mem, !insn.addr !690
  store i64 %x23.1.reload, i64* %x23.2.reg2mem, !insn.addr !690
  store i64 %x24.1.reload, i64* %x24.2.reg2mem, !insn.addr !690
  br label %dec_label_pc_2fec, !insn.addr !690

dec_label_pc_2fec:                                ; preds = %dec_label_pc_2fe8, %dec_label_pc_2f18
  %x24.2.reload = load i64, i64* %x24.2.reg2mem
  %x23.2.reload = load i64, i64* %x23.2.reg2mem
  %x22.4.reload = load i64, i64* %x22.4.reg2mem
  %x20.2.reload = load i64, i64* %x20.2.reg2mem
  %x19.3.reload = load i64, i64* %x19.3.reg2mem
  %56 = mul i64 %x22.4.reload, 8, !insn.addr !691
  %57 = add i64 %56, %9, !insn.addr !691
  %58 = inttoptr i64 %57 to i64*, !insn.addr !691
  %59 = load i64, i64* %58, align 8, !insn.addr !691
  %60 = trunc i64 %59 to i32, !insn.addr !692
  %61 = bitcast i64* %stack_var_-8 to i64**, !insn.addr !692
  %62 = call i32 @pthread_join(i32 %60, i64** nonnull %61), !insn.addr !692
  %63 = load i64, i64* %stack_var_-8, align 8, !insn.addr !693
  %64 = inttoptr i64 %63 to i32*, !insn.addr !694
  %65 = load i32, i32* %64, align 4, !insn.addr !694
  %66 = trunc i64 %x24.2.reload to i32, !insn.addr !695
  %67 = add i32 %65, %66, !insn.addr !695
  %68 = zext i32 %67 to i64, !insn.addr !695
  %69 = add i64 %63, 4, !insn.addr !696
  %70 = inttoptr i64 %69 to i32*, !insn.addr !696
  %71 = load i32, i32* %70, align 4, !insn.addr !696
  %72 = trunc i64 %x23.2.reload to i32, !insn.addr !697
  %73 = add i32 %71, %72, !insn.addr !697
  %74 = zext i32 %73 to i64, !insn.addr !697
  %75 = inttoptr i64 %63 to i64*, !insn.addr !698
  call void @free(i64* %75), !insn.addr !698
  %76 = add i64 %56, %x20.2.reload, !insn.addr !699
  %77 = inttoptr i64 %76 to i64*, !insn.addr !699
  %78 = load i64, i64* %77, align 8, !insn.addr !699
  %79 = add i64 %x22.4.reload, 1, !insn.addr !700
  %80 = inttoptr i64 %78 to i64*, !insn.addr !701
  call void @free(i64* %80), !insn.addr !701
  store i64 %x19.3.reload, i64* %x19.0.reg2mem, !insn.addr !702
  store i64 %x20.2.reload, i64* %x20.0.reg2mem, !insn.addr !702
  store i64 %79, i64* %x22.2.reg2mem, !insn.addr !702
  store i64 %74, i64* %x23.0.reg2mem, !insn.addr !702
  store i64 %68, i64* %x24.0.reg2mem, !insn.addr !702
  br label %dec_label_pc_2f18, !insn.addr !702

dec_label_pc_3028:                                ; preds = %dec_label_pc_2fcc
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !703

; uselistorder directives
  uselistorder i64 %63, { 2, 1, 0 }
  uselistorder i64 %56, { 1, 0 }
  uselistorder i64 %x20.2.reload, { 1, 0 }
  uselistorder i64 %40, { 0, 1, 3, 2 }
  uselistorder i64 %35, { 1, 0 }
  uselistorder i64 %x22.05.reload, { 1, 0, 2 }
  uselistorder i64 %x19.0.reload, { 2, 3, 0, 1 }
  uselistorder i64 %x20.0.reload, { 1, 2, 0 }
  uselistorder i64 %x22.2.reload, { 1, 0, 2 }
  uselistorder i64 %x23.0.reload, { 1, 2, 0 }
  uselistorder i64 %x24.0.reload, { 1, 2, 0 }
  uselistorder i64 %x22.1.reload, { 2, 0, 3, 1 }
  uselistorder i64 %13, { 0, 2, 3, 4, 1 }
  uselistorder i64* %10, { 0, 2, 1 }
  uselistorder i64 %2, { 2, 1, 3, 0, 4 }
  uselistorder i64* %stack_var_-8, { 1, 0 }
  uselistorder i64* %x22.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x19.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x20.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x22.2.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x23.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x24.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x22.05.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x19.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %x0.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i64* %x19.2.reg2mem, { 0, 2, 3, 1 }
  uselistorder i64* %x20.1.reg2mem, { 0, 2, 3, 1 }
  uselistorder i64* %x19.3.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x20.2.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x22.4.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x23.2.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x24.2.reg2mem, { 0, 2, 1 }
  uselistorder i64 4, { 5, 0, 1, 2, 3, 4 }
  uselistorder i32 (i32, i64**)* @pthread_join, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder void ()* @__stack_chk_fail, { 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 0, 1, 2, 15 }
  uselistorder i32 -2, { 0, 1, 2, 3, 5, 4 }
  uselistorder i32 (i32*, i64*, i64* (i64*)*, i64*)* @pthread_create, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder i64* (i64*)** @global_var_1000, { 1, 0 }
  uselistorder i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), { 0, 2, 1, 3, 4, 5, 6, 7, 8 }
  uselistorder i64 1, { 8, 9, 10, 11, 12, 13, 14, 15, 16, 1, 2, 3, 18, 17, 19, 4, 5, 6, 0, 7 }
  uselistorder i64 8, { 0, 1, 2, 3, 4, 5, 6, 7, 12, 8, 13, 14, 15, 11, 9, 10 }
  uselistorder i32 -3, { 2, 3, 4, 0, 5, 1 }
  uselistorder i32 42, { 0, 1, 2, 5, 9, 6, 3, 7, 4, 8, 10, 11 }
  uselistorder i64 4294967294, { 6, 0, 1, 2, 3, 4, 5 }
  uselistorder void (i64*)* @free, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14 }
  uselistorder i32 -1, { 0, 1, 2, 3, 11, 5, 4, 15, 16, 17, 18, 12, 6, 13, 19, 20, 21, 7, 8, 14, 9, 10 }
  uselistorder i64* null, { 2, 0, 1, 4, 5, 6, 3, 7, 8, 9, 10, 12, 11, 13, 14, 15, 16 }
  uselistorder i64* (i32)* @malloc, { 5, 4, 3, 2, 1, 0, 8, 7, 6, 9 }
  uselistorder i64 3, { 2, 3, 4, 1, 0 }
  uselistorder label %dec_label_pc_2fcc, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2fa4, { 1, 0 }
  uselistorder label %dec_label_pc_2f58, { 1, 0 }
  uselistorder label %dec_label_pc_2f18, { 1, 0 }
  uselistorder label %dec_label_pc_2efc, { 1, 0 }
}

define i32 @call_thread_local_storage() local_unnamed_addr {
dec_label_pc_3040:
  %0 = call i32 @param_thread_local_storage(i32 4), !insn.addr !704
  ret i32 %0, !insn.addr !704
}

define void @test_thread_concurrency() local_unnamed_addr {
dec_label_pc_3048:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_349b to i8*)), !insn.addr !705
  %1 = call i32 @call_pthread_create(), !insn.addr !706
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_34b9 to i8*)), !insn.addr !707
  %3 = call i64 @param_pthread_join(), !insn.addr !708
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_34d5 to i8*)), !insn.addr !709
  %5 = call i32 @call_mutex_lock(), !insn.addr !710
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_34f2 to i8*)), !insn.addr !711
  %7 = call i64 @param_condition_variable(), !insn.addr !712
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_350e to i8*)), !insn.addr !713
  %9 = call i32 @call_atomic_ops(), !insn.addr !714
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_352a to i8*)), !insn.addr !715
  %11 = call i32 @call_thread_local_storage(), !insn.addr !716
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3546 to i8*)), !insn.addr !717
  ret void, !insn.addr !717

; uselistorder directives
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12, 26 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
  uselistorder i64 0, { 0, 23, 24, 2, 3, 4, 5, 1, 6, 7, 8, 9, 10, 11, 83, 84, 85, 86, 117, 124, 87, 88, 89, 90, 12, 13, 14, 21, 15, 22, 91, 92, 93, 94, 95, 96, 18, 19, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 16, 17, 122, 20, 123, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 118, 119, 120, 121 }
}

define i64 @__aarch64_cas4_acq_rel() local_unnamed_addr {
dec_label_pc_30f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  call void @__asm_hint(i64 34), !insn.addr !718
  %4 = load i8, i8* bitcast (i32* @global_var_150c4 to i8*), align 4, !insn.addr !719
  %5 = icmp eq i8 %4, 0, !insn.addr !720
  br i1 %5, label %dec_label_pc_3108, label %dec_label_pc_3100, !insn.addr !720

dec_label_pc_3100:                                ; preds = %dec_label_pc_30f0
  %6 = trunc i64 %3 to i32, !insn.addr !721
  %7 = trunc i64 %2 to i32, !insn.addr !721
  call void @__asm_casal(i32 %6, i32 %7, i64 %1), !insn.addr !721
  ret i64 %3, !insn.addr !722

dec_label_pc_3108:                                ; preds = %dec_label_pc_30f0
  %8 = and i64 %3, 4294967295, !insn.addr !723
  %9 = trunc i64 %2 to i32
  %10 = and i64 %1, 4294967295, !insn.addr !724
  %11 = icmp eq i64 %8, %10, !insn.addr !725
  br i1 %11, label %dec_label_pc_3118, label %dec_label_pc_3120, !insn.addr !725

dec_label_pc_3118:                                ; preds = %dec_label_pc_3108, %dec_label_pc_3118
  %12 = call i32 @__asm_stlxr(i32 %9, i64 %1), !insn.addr !726
  %13 = icmp eq i32 %12, 0, !insn.addr !727
  br i1 %13, label %dec_label_pc_3120, label %dec_label_pc_3118, !insn.addr !727

dec_label_pc_3120:                                ; preds = %dec_label_pc_3118, %dec_label_pc_3108
  ret i64 %10, !insn.addr !728

; uselistorder directives
  uselistorder i64 %10, { 1, 0 }
  uselistorder i64 %3, { 2, 1, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 1, 2, 0 }
  uselistorder i64* %0, { 2, 1, 0 }
  uselistorder label %dec_label_pc_3118, { 1, 0 }
}

define i64 @__aarch64_ldadd4_acq_rel() local_unnamed_addr {
dec_label_pc_3130:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  call void @__asm_hint(i64 34), !insn.addr !729
  %3 = load i8, i8* bitcast (i32* @global_var_150c4 to i8*), align 4, !insn.addr !730
  %4 = icmp eq i8 %3, 0, !insn.addr !731
  br i1 %4, label %dec_label_pc_314c.preheader, label %dec_label_pc_3140, !insn.addr !731

dec_label_pc_314c.preheader:                      ; preds = %dec_label_pc_3130
  %5 = trunc i64 %1 to i32
  %6 = trunc i64 %2 to i32, !insn.addr !732
  %7 = add i32 %6, %5, !insn.addr !732
  br label %dec_label_pc_314c

dec_label_pc_3140:                                ; preds = %dec_label_pc_3130
  %8 = trunc i64 %2 to i32, !insn.addr !733
  call void @__asm_ldaddal(i32 %8, i32 %8, i64 %1), !insn.addr !733
  ret i64 %2, !insn.addr !734

dec_label_pc_314c:                                ; preds = %dec_label_pc_314c.preheader, %dec_label_pc_314c
  %9 = call i32 @__asm_stlxr(i32 %7, i64 %1), !insn.addr !735
  %10 = icmp eq i32 %9, 0, !insn.addr !736
  br i1 %10, label %dec_label_pc_315c, label %dec_label_pc_314c, !insn.addr !736

dec_label_pc_315c:                                ; preds = %dec_label_pc_314c
  %11 = and i64 %1, 4294967295, !insn.addr !737
  ret i64 %11, !insn.addr !738

; uselistorder directives
  uselistorder i64 %2, { 1, 0, 2 }
  uselistorder i64 %1, { 3, 2, 0, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 4294967295, { 5, 6, 11, 10, 0, 1, 12, 13, 14, 15, 16, 17, 2, 3, 18, 4, 19, 20, 7, 21, 8, 22, 9 }
  uselistorder i8 0, { 0, 1, 3, 4, 2 }
  uselistorder i32 0, { 38, 39, 42, 4, 43, 44, 45, 46, 47, 48, 49, 50, 5, 51, 52, 0, 53, 54, 56, 59, 55, 9, 57, 58, 8, 60, 28, 13, 14, 11, 12, 15, 16, 18, 61, 62, 17, 65, 19, 20, 63, 64, 21, 67, 66, 1, 22, 68, 69, 70, 23, 71, 6, 40, 10, 7, 2, 41, 3, 24, 25, 26, 27, 29, 30, 31, 32, 33, 34, 35, 36, 37 }
  uselistorder i8* bitcast (i32* @global_var_150c4 to i8*), { 1, 0 }
  uselistorder label %dec_label_pc_314c, { 1, 0 }
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_3160:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !739

; uselistorder directives
  uselistorder i32 1, { 11, 10, 9, 101, 102, 103, 104, 105, 106, 107, 145, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 8, 108, 146, 140, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 149, 148, 147, 44, 150, 47, 46, 45, 152, 151, 55, 54, 53, 52, 51, 50, 49, 48, 141, 154, 153, 56, 109, 110, 111, 112, 113, 114, 115, 97, 98, 96, 116, 95, 61, 60, 59, 58, 57, 62, 117, 118, 156, 155, 65, 64, 63, 119, 158, 157, 66, 13, 142, 67, 7, 159, 68, 6, 69, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 143, 71, 70, 12, 74, 73, 72, 76, 75, 132, 133, 160, 84, 83, 82, 81, 80, 79, 78, 77, 85, 162, 161, 86, 134, 165, 164, 163, 87, 99, 135, 166, 144, 88, 5, 100, 136, 167, 89, 4, 90, 3, 137, 138, 169, 91, 2, 1, 93, 92, 139, 94, 168, 0 }
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
!92 = !{i64 6496}
!93 = !{i64 6500}
!94 = !{i64 6504}
!95 = !{i64 6508}
!96 = !{i64 6512}
!97 = !{i64 6520}
!98 = !{i64 6528}
!99 = !{i64 6536}
!100 = !{i64 6540}
!101 = !{i64 6572}
!102 = !{i64 6576}
!103 = !{i64 6580}
!104 = !{i64 6592}
!105 = !{i64 6596}
!106 = !{i64 6624}
!107 = !{i64 6636}
!108 = !{i64 6656}
!109 = !{i64 6664}
!110 = !{i64 6668}
!111 = !{i64 6672}
!112 = !{i64 6676}
!113 = !{i64 6680}
!114 = !{i64 6688}
!115 = !{i64 6696}
!116 = !{i64 6740}
!117 = !{i64 6744}
!118 = !{i64 6748}
!119 = !{i64 6752}
!120 = !{i64 6760}
!121 = !{i64 6768}
!122 = !{i64 6776}
!123 = !{i64 6788}
!124 = !{i64 6800}
!125 = !{i64 6832}
!126 = !{i64 6844}
!127 = !{i64 6852}
!128 = !{i64 6860}
!129 = !{i64 6868}
!130 = !{i64 6876}
!131 = !{i64 6892}
!132 = !{i64 6896}
!133 = !{i64 6924}
!134 = !{i64 6936}
!135 = !{i64 6956}
!136 = !{i64 6968}
!137 = !{i64 6984}
!138 = !{i64 6988}
!139 = !{i64 7008}
!140 = !{i64 7012}
!141 = !{i64 7016}
!142 = !{i64 7024}
!143 = !{i64 7028}
!144 = !{i64 7040}
!145 = !{i64 7056}
!146 = !{i64 7064}
!147 = !{i64 7068}
!148 = !{i64 7072}
!149 = !{i64 7080}
!150 = !{i64 7088}
!151 = !{i64 7092}
!152 = !{i64 7104}
!153 = !{i64 7124}
!154 = !{i64 7132}
!155 = !{i64 7144}
!156 = !{i64 7148}
!157 = !{i64 7160}
!158 = !{i64 7164}
!159 = !{i64 7188}
!160 = !{i64 7196}
!161 = !{i64 7204}
!162 = !{i64 7208}
!163 = !{i64 7216}
!164 = !{i64 7220}
!165 = !{i64 7228}
!166 = !{i64 7240}
!167 = !{i64 7252}
!168 = !{i64 7260}
!169 = !{i64 7292}
!170 = !{i64 7312}
!171 = !{i64 7324}
!172 = !{i64 7340}
!173 = !{i64 7344}
!174 = !{i64 7356}
!175 = !{i64 7368}
!176 = !{i64 7376}
!177 = !{i64 7384}
!178 = !{i64 7404}
!179 = !{i64 7420}
!180 = !{i64 7424}
!181 = !{i64 7436}
!182 = !{i64 7440}
!183 = !{i64 7464}
!184 = !{i64 7472}
!185 = !{i64 7496}
!186 = !{i64 7504}
!187 = !{i64 7524}
!188 = !{i64 7532}
!189 = !{i64 7536}
!190 = !{i64 7544}
!191 = !{i64 7548}
!192 = !{i64 7556}
!193 = !{i64 7568}
!194 = !{i64 7580}
!195 = !{i64 7588}
!196 = !{i64 7592}
!197 = !{i64 7612}
!198 = !{i64 7636}
!199 = !{i64 7672}
!200 = !{i64 7680}
!201 = !{i64 7684}
!202 = !{i64 7696}
!203 = !{i64 7716}
!204 = !{i64 7724}
!205 = !{i64 7728}
!206 = !{i64 7736}
!207 = !{i64 7740}
!208 = !{i64 7748}
!209 = !{i64 7752}
!210 = !{i64 7768}
!211 = !{i64 7776}
!212 = !{i64 7792}
!213 = !{i64 7808}
!214 = !{i64 7812}
!215 = !{i64 7824}
!216 = !{i64 7832}
!217 = !{i64 7856}
!218 = !{i64 7864}
!219 = !{i64 7868}
!220 = !{i64 7872}
!221 = !{i64 7880}
!222 = !{i64 7888}
!223 = !{i64 7892}
!224 = !{i64 7900}
!225 = !{i64 7904}
!226 = !{i64 7912}
!227 = !{i64 7920}
!228 = !{i64 7932}
!229 = !{i64 7936}
!230 = !{i64 7956}
!231 = !{i64 7960}
!232 = !{i64 7968}
!233 = !{i64 7980}
!234 = !{i64 7996}
!235 = !{i64 8024}
!236 = !{i64 8028}
!237 = !{i64 8044}
!238 = !{i64 8048}
!239 = !{i64 8060}
!240 = !{i64 8080}
!241 = !{i64 8100}
!242 = !{i64 8104}
!243 = !{i64 8136}
!244 = !{i64 8148}
!245 = !{i64 8152}
!246 = !{i64 8156}
!247 = !{i64 8160}
!248 = !{i64 8168}
!249 = !{i64 8176}
!250 = !{i64 8180}
!251 = !{i64 8188}
!252 = !{i64 8192}
!253 = !{i64 8196}
!254 = !{i64 8200}
!255 = !{i64 8220}
!256 = !{i64 8228}
!257 = !{i64 8236}
!258 = !{i64 8244}
!259 = !{i64 8252}
!260 = !{i64 8264}
!261 = !{i64 8268}
!262 = !{i64 8280}
!263 = !{i64 8284}
!264 = !{i64 8320}
!265 = !{i64 8332}
!266 = !{i64 8336}
!267 = !{i64 8348}
!268 = !{i64 8360}
!269 = !{i64 8364}
!270 = !{i64 8380}
!271 = !{i64 8388}
!272 = !{i64 8384}
!273 = !{i64 8392}
!274 = !{i64 8396}
!275 = !{i64 8400}
!276 = !{i64 8416}
!277 = !{i64 8420}
!278 = !{i64 8424}
!279 = !{i64 8428}
!280 = !{i64 8448}
!281 = !{i64 8452}
!282 = !{i64 8480}
!283 = !{i64 8496}
!284 = !{i64 8508}
!285 = !{i64 8512}
!286 = !{i64 8516}
!287 = !{i64 8520}
!288 = !{i64 8528}
!289 = !{i64 8544}
!290 = !{i64 8548}
!291 = !{i64 8560}
!292 = !{i64 8564}
!293 = !{i64 8568}
!294 = !{i64 8576}
!295 = !{i64 8584}
!296 = !{i64 8592}
!297 = !{i64 8596}
!298 = !{i64 8604}
!299 = !{i64 8612}
!300 = !{i64 8616}
!301 = !{i64 8624}
!302 = !{i64 8628}
!303 = !{i64 8636}
!304 = !{i64 8672}
!305 = !{i64 8676}
!306 = !{i64 8680}
!307 = !{i64 8684}
!308 = !{i64 8696}
!309 = !{i64 8700}
!310 = !{i64 8704}
!311 = !{i64 8708}
!312 = !{i64 8712}
!313 = !{i64 8728}
!314 = !{i64 8752}
!315 = !{i64 8772}
!316 = !{i64 8776}
!317 = !{i64 8796}
!318 = !{i64 8800}
!319 = !{i64 8820}
!320 = !{i64 8840}
!321 = !{i64 8844}
!322 = !{i64 8864}
!323 = !{i64 8868}
!324 = !{i64 8888}
!325 = !{i64 8892}
!326 = !{i64 8912}
!327 = !{i64 8916}
!328 = !{i64 8936}
!329 = !{i64 8940}
!330 = !{i64 8960}
!331 = !{i64 8964}
!332 = !{i64 8984}
!333 = !{i64 8988}
!334 = !{i64 9008}
!335 = !{i64 9012}
!336 = !{i64 9032}
!337 = !{i64 9036}
!338 = !{i64 9060}
!339 = !{i64 9064}
!340 = !{i64 9092}
!341 = !{i64 9096}
!342 = !{i64 9100}
!343 = !{i64 9104}
!344 = !{i64 9108}
!345 = !{i64 9124}
!346 = !{i64 9140}
!347 = !{i64 9144}
!348 = !{i64 9164}
!349 = !{i64 9168}
!350 = !{i64 9184}
!351 = !{i64 9188}
!352 = !{i64 9200}
!353 = !{i64 9204}
!354 = !{i64 9220}
!355 = !{i64 9224}
!356 = !{i64 9244}
!357 = !{i64 9252}
!358 = !{i64 9260}
!359 = !{i64 9264}
!360 = !{i64 9272}
!361 = !{i64 9276}
!362 = !{i64 9284}
!363 = !{i64 9292}
!364 = !{i64 9304}
!365 = !{i64 9308}
!366 = !{i64 9332}
!367 = !{i64 9336}
!368 = !{i64 9348}
!369 = !{i64 9352}
!370 = !{i64 9356}
!371 = !{i64 9360}
!372 = !{i64 9380}
!373 = !{i64 9388}
!374 = !{i64 9400}
!375 = !{i64 9404}
!376 = !{i64 9408}
!377 = !{i64 9412}
!378 = !{i64 9416}
!379 = !{i64 9424}
!380 = !{i64 9432}
!381 = !{i64 9440}
!382 = !{i64 9444}
!383 = !{i64 9452}
!384 = !{i64 9456}
!385 = !{i64 9464}
!386 = !{i64 9484}
!387 = !{i64 9508}
!388 = !{i64 9512}
!389 = !{i64 9528}
!390 = !{i64 9532}
!391 = !{i64 9544}
!392 = !{i64 9552}
!393 = !{i64 9564}
!394 = !{i64 9568}
!395 = !{i64 9572}
!396 = !{i64 9576}
!397 = !{i64 9580}
!398 = !{i64 9584}
!399 = !{i64 9588}
!400 = !{i64 9592}
!401 = !{i64 9596}
!402 = !{i64 9616}
!403 = !{i64 9624}
!404 = !{i64 9632}
!405 = !{i64 9640}
!406 = !{i64 9644}
!407 = !{i64 9648}
!408 = !{i64 9660}
!409 = !{i64 9668}
!410 = !{i64 9672}
!411 = !{i64 9676}
!412 = !{i64 9684}
!413 = !{i64 9700}
!414 = !{i64 9708}
!415 = !{i64 9716}
!416 = !{i64 9720}
!417 = !{i64 9728}
!418 = !{i64 9732}
!419 = !{i64 9740}
!420 = !{i64 9760}
!421 = !{i64 9764}
!422 = !{i64 9768}
!423 = !{i64 9784}
!424 = !{i64 9792}
!425 = !{i64 9812}
!426 = !{i64 9816}
!427 = !{i64 9840}
!428 = !{i64 9844}
!429 = !{i64 9848}
!430 = !{i64 9856}
!431 = !{i64 9860}
!432 = !{i64 9868}
!433 = !{i64 9876}
!434 = !{i64 9880}
!435 = !{i64 9888}
!436 = !{i64 9892}
!437 = !{i64 9912}
!438 = !{i64 9916}
!439 = !{i64 9920}
!440 = !{i64 9924}
!441 = !{i64 9932}
!442 = !{i64 9940}
!443 = !{i64 9952}
!444 = !{i64 9956}
!445 = !{i64 9988}
!446 = !{i64 10008}
!447 = !{i64 10012}
!448 = !{i64 10016}
!449 = !{i64 10052}
!450 = !{i64 10056}
!451 = !{i64 10080}
!452 = !{i64 10084}
!453 = !{i64 10096}
!454 = !{i64 10100}
!455 = !{i64 10112}
!456 = !{i64 10120}
!457 = !{i64 10132}
!458 = !{i64 10140}
!459 = !{i64 10144}
!460 = !{i64 10156}
!461 = !{i64 10164}
!462 = !{i64 10176}
!463 = !{i64 10192}
!464 = !{i64 10196}
!465 = !{i64 10224}
!466 = !{i64 10240}
!467 = !{i64 10244}
!468 = !{i64 10248}
!469 = !{i64 10276}
!470 = !{i64 10280}
!471 = !{i64 10284}
!472 = !{i64 10296}
!473 = !{i64 10300}
!474 = !{i64 10304}
!475 = !{i64 10320}
!476 = !{i64 10324}
!477 = !{i64 10328}
!478 = !{i64 10332}
!479 = !{i64 10352}
!480 = !{i64 10356}
!481 = !{i64 10364}
!482 = !{i64 10372}
!483 = !{i64 10380}
!484 = !{i64 10384}
!485 = !{i64 10388}
!486 = !{i64 10408}
!487 = !{i64 10412}
!488 = !{i64 10420}
!489 = !{i64 10432}
!490 = !{i64 10444}
!491 = !{i64 10448}
!492 = !{i64 10460}
!493 = !{i64 10336}
!494 = !{i64 10468}
!495 = !{i64 10340}
!496 = !{i64 10392}
!497 = !{i64 10480}
!498 = !{i64 10396}
!499 = !{i64 10520}
!500 = !{i64 10540}
!501 = !{i64 10544}
!502 = !{i64 10564}
!503 = !{i64 10568}
!504 = !{i64 10588}
!505 = !{i64 10592}
!506 = !{i64 10612}
!507 = !{i64 10616}
!508 = !{i64 10636}
!509 = !{i64 10640}
!510 = !{i64 10660}
!511 = !{i64 10664}
!512 = !{i64 10684}
!513 = !{i64 10688}
!514 = !{i64 10712}
!515 = !{i64 10716}
!516 = !{i64 10728}
!517 = !{i64 10740}
!518 = !{i64 10764}
!519 = !{i64 10772}
!520 = !{i64 10776}
!521 = !{i64 10780}
!522 = !{i64 10788}
!523 = !{i64 10792}
!524 = !{i64 10796}
!525 = !{i64 10800}
!526 = !{i64 10808}
!527 = !{i64 10816}
!528 = !{i64 10820}
!529 = !{i64 10828}
!530 = !{i64 10832}
!531 = !{i64 10840}
!532 = !{i64 10856}
!533 = !{i64 10864}
!534 = !{i64 10868}
!535 = !{i64 10880}
!536 = !{i64 10888}
!537 = !{i64 10896}
!538 = !{i64 10928}
!539 = !{i64 10964}
!540 = !{i64 10984}
!541 = !{i64 10992}
!542 = !{i64 10996}
!543 = !{i64 11000}
!544 = !{i64 11004}
!545 = !{i64 11008}
!546 = !{i64 11016}
!547 = !{i64 11024}
!548 = !{i64 11028}
!549 = !{i64 11032}
!550 = !{i64 11036}
!551 = !{i64 11040}
!552 = !{i64 11044}
!553 = !{i64 11052}
!554 = !{i64 11060}
!555 = !{i64 11068}
!556 = !{i64 11072}
!557 = !{i64 11080}
!558 = !{i64 11084}
!559 = !{i64 11092}
!560 = !{i64 11128}
!561 = !{i64 11132}
!562 = !{i64 11136}
!563 = !{i64 11152}
!564 = !{i64 11164}
!565 = !{i64 11168}
!566 = !{i64 11172}
!567 = !{i64 11148}
!568 = !{i64 11204}
!569 = !{i64 11212}
!570 = !{i64 11224}
!571 = !{i64 11232}
!572 = !{i64 11236}
!573 = !{i64 11244}
!574 = !{i64 11248}
!575 = !{i64 11256}
!576 = !{i64 11264}
!577 = !{i64 11268}
!578 = !{i64 11272}
!579 = !{i64 11288}
!580 = !{i64 11292}
!581 = !{i64 11296}
!582 = !{i64 11304}
!583 = !{i64 11308}
!584 = !{i64 11328}
!585 = !{i64 11332}
!586 = !{i64 11340}
!587 = !{i64 11344}
!588 = !{i64 11368}
!589 = !{i64 11372}
!590 = !{i64 11388}
!591 = !{i64 11404}
!592 = !{i64 11424}
!593 = !{i64 11432}
!594 = !{i64 11436}
!595 = !{i64 11460}
!596 = !{i64 11464}
!597 = !{i64 11468}
!598 = !{i64 11476}
!599 = !{i64 11484}
!600 = !{i64 11492}
!601 = !{i64 11496}
!602 = !{i64 11504}
!603 = !{i64 11508}
!604 = !{i64 11512}
!605 = !{i64 11520}
!606 = !{i64 11524}
!607 = !{i64 11532}
!608 = !{i64 11536}
!609 = !{i64 11540}
!610 = !{i64 11544}
!611 = !{i64 11548}
!612 = !{i64 11572}
!613 = !{i64 11576}
!614 = !{i64 11580}
!615 = !{i64 11592}
!616 = !{i64 11604}
!617 = !{i64 11612}
!618 = !{i64 11616}
!619 = !{i64 11628}
!620 = !{i64 11632}
!621 = !{i64 11636}
!622 = !{i64 11656}
!623 = !{i64 11672}
!624 = !{i64 11680}
!625 = !{i64 11704}
!626 = !{i64 11708}
!627 = !{i64 11712}
!628 = !{i64 11720}
!629 = !{i64 11732}
!630 = !{i64 11740}
!631 = !{i64 11744}
!632 = !{i64 11752}
!633 = !{i64 11768}
!634 = !{i64 11772}
!635 = !{i64 11776}
!636 = !{i64 11792}
!637 = !{i64 11796}
!638 = !{i64 11800}
!639 = !{i64 11808}
!640 = !{i64 11812}
!641 = !{i64 11820}
!642 = !{i64 11828}
!643 = !{i64 11832}
!644 = !{i64 11840}
!645 = !{i64 11844}
!646 = !{i64 11848}
!647 = !{i64 11856}
!648 = !{i64 11860}
!649 = !{i64 11864}
!650 = !{i64 11892}
!651 = !{i64 11904}
!652 = !{i64 11908}
!653 = !{i64 11920}
!654 = !{i64 11932}
!655 = !{i64 11936}
!656 = !{i64 11948}
!657 = !{i64 11964}
!658 = !{i64 11976}
!659 = !{i64 11980}
!660 = !{i64 11988}
!661 = !{i64 12012}
!662 = !{i64 12036}
!663 = !{i64 12060}
!664 = !{i64 12068}
!665 = !{i64 12076}
!666 = !{i64 12088}
!667 = !{i64 12092}
!668 = !{i64 12100}
!669 = !{i64 12116}
!670 = !{i64 12124}
!671 = !{i64 12128}
!672 = !{i64 12152}
!673 = !{i64 12156}
!674 = !{i64 12164}
!675 = !{i64 12168}
!676 = !{i64 12184}
!677 = !{i64 12188}
!678 = !{i64 12196}
!679 = !{i64 12200}
!680 = !{i64 12204}
!681 = !{i64 12212}
!682 = !{i64 12028}
!683 = !{i64 12220}
!684 = !{i64 12228}
!685 = !{i64 12232}
!686 = !{i64 12240}
!687 = !{i64 12248}
!688 = !{i64 12252}
!689 = !{i64 12260}
!690 = !{i64 12264}
!691 = !{i64 12268}
!692 = !{i64 12276}
!693 = !{i64 12280}
!694 = !{i64 12284}
!695 = !{i64 12288}
!696 = !{i64 12292}
!697 = !{i64 12296}
!698 = !{i64 12300}
!699 = !{i64 12304}
!700 = !{i64 12308}
!701 = !{i64 12312}
!702 = !{i64 12316}
!703 = !{i64 12348}
!704 = !{i64 12356}
!705 = !{i64 12376}
!706 = !{i64 12380}
!707 = !{i64 12400}
!708 = !{i64 12404}
!709 = !{i64 12424}
!710 = !{i64 12428}
!711 = !{i64 12448}
!712 = !{i64 12452}
!713 = !{i64 12472}
!714 = !{i64 12476}
!715 = !{i64 12496}
!716 = !{i64 12500}
!717 = !{i64 12524}
!718 = !{i64 12528}
!719 = !{i64 12536}
!720 = !{i64 12540}
!721 = !{i64 12544}
!722 = !{i64 12548}
!723 = !{i64 12552}
!724 = !{i64 12556}
!725 = !{i64 12564}
!726 = !{i64 12568}
!727 = !{i64 12572}
!728 = !{i64 12576}
!729 = !{i64 12592}
!730 = !{i64 12600}
!731 = !{i64 12604}
!732 = !{i64 12624}
!733 = !{i64 12608}
!734 = !{i64 12612}
!735 = !{i64 12628}
!736 = !{i64 12632}
!737 = !{i64 12620}
!738 = !{i64 12636}
!739 = !{i64 12656}
