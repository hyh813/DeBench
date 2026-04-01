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
@global_var_15020 = global i64 0
@global_var_15088 = global i64 0
@global_var_15058 = global i64 0
@global_var_14fe8 = local_unnamed_addr global i64 0
@global_var_3178 = local_unnamed_addr constant [9 x i8] c"HelloLib\00"
@global_var_3181 = local_unnamed_addr constant [4 x i8] c"def\00"
@global_var_3185 = local_unnamed_addr constant [4 x i8] c"abc\00"
@global_var_3189 = local_unnamed_addr constant [4 x i8] c"xyz\00"
@global_var_318d = local_unnamed_addr constant [4 x i8] c"aaa\00"
@global_var_3191 = local_unnamed_addr constant [4 x i8] c"bbb\00"
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
@global_var_31b0 = local_unnamed_addr constant [8 x i8] c"123,456\00"
@global_var_31ba = local_unnamed_addr constant [12 x i8] c"/etc/passwd\00"
@global_var_31c6 = constant [3 x i8] c"w+\00"
@global_var_31c9 = constant [19 x i8] c"BinBench Test Data\00"
@global_var_1fe0 = local_unnamed_addr constant i64 -1152920950245687264
@global_var_31dc = local_unnamed_addr constant [23 x i8] c"/tmp/binbench_test.tmp\00"
@global_var_31f3 = local_unnamed_addr constant [6 x i8] c"Bench\00"
@global_var_31f9 = local_unnamed_addr constant [20 x i8] c"Hello BinBench Test\00"
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
@global_var_15018 = local_unnamed_addr global i32 0
@global_var_1501c = local_unnamed_addr global i32 0
@global_var_15050 = local_unnamed_addr global i32 0
@global_var_15051 = global i32 0
@global_var_3e8 = global i32 0
@global_var_150b8 = local_unnamed_addr global i32 0
@global_var_150bc = local_unnamed_addr global i32 0
@global_var_150c0 = local_unnamed_addr global i32 0
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

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_17c0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @test_standard_library_functions(i64 %1), !insn.addr !64
  %3 = call i64 @test_system_calls(i64 ptrtoint (i32* @0 to i64)), !insn.addr !65
  %4 = call i64 @test_thread_concurrency(i64 ptrtoint (i32* @0 to i64)), !insn.addr !66
  ret i64 0, !insn.addr !67
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

define i64 @signal_handler() local_unnamed_addr {
dec_label_pc_1954:
  %0 = alloca i64
  %1 = load i64, i64* %0
  store i32 1, i32* @global_var_15018, align 4, !insn.addr !92
  %2 = trunc i64 %1 to i32, !insn.addr !93
  store i32 %2, i32* @global_var_1501c, align 4, !insn.addr !93
  ret i64 %1, !insn.addr !94

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @thread_sum() local_unnamed_addr {
dec_label_pc_196c:
  %0 = alloca i64
  %x1.01.reg2mem = alloca i64, !insn.addr !95
  %.reg2mem = alloca i32, !insn.addr !95
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = add i64 %1, 4, !insn.addr !95
  %4 = inttoptr i64 %3 to i32*, !insn.addr !95
  %5 = load i32, i32* %4, align 4, !insn.addr !95
  %6 = add i64 %1, 8, !insn.addr !96
  %7 = inttoptr i64 %6 to i32*, !insn.addr !96
  store i32 0, i32* %7, align 4, !insn.addr !96
  %8 = icmp ult i32 %5, %2, !insn.addr !97
  br i1 %8, label %dec_label_pc_197c, label %dec_label_pc_1984.lr.ph, !insn.addr !97

dec_label_pc_1984.lr.ph:                          ; preds = %dec_label_pc_196c
  %9 = zext i32 %5 to i64, !insn.addr !95
  %10 = and i64 %1, 4294967295, !insn.addr !95
  store i32 0, i32* %.reg2mem
  store i64 %10, i64* %x1.01.reg2mem
  br label %dec_label_pc_1984

dec_label_pc_197c.loopexit:                       ; preds = %dec_label_pc_1984
  store i32 %12, i32* %7, align 4
  br label %dec_label_pc_197c

dec_label_pc_197c:                                ; preds = %dec_label_pc_197c.loopexit, %dec_label_pc_196c
  ret i64 0, !insn.addr !98

dec_label_pc_1984:                                ; preds = %dec_label_pc_1984.lr.ph, %dec_label_pc_1984
  %x1.01.reload = load i64, i64* %x1.01.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %11 = trunc i64 %x1.01.reload to i32, !insn.addr !99
  %12 = add i32 %.reload, %11, !insn.addr !99
  %13 = add nuw nsw i64 %x1.01.reload, 1, !insn.addr !100
  %14 = and i64 %13, 4294967295, !insn.addr !100
  %15 = icmp ugt i64 %14, %9, !insn.addr !97
  store i32 %12, i32* %.reg2mem, !insn.addr !97
  store i64 %14, i64* %x1.01.reg2mem, !insn.addr !97
  br i1 %15, label %dec_label_pc_197c.loopexit, label %dec_label_pc_1984, !insn.addr !97

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i64 %1, { 3, 1, 0, 2 }
  uselistorder i32* %.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x1.01.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1984, { 1, 0 }
}

define i64 @thread_compute() local_unnamed_addr {
dec_label_pc_1998:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = call i64* @malloc(i32 4), !insn.addr !101
  %4 = ptrtoint i64* %3 to i64, !insn.addr !101
  %5 = mul i32 %2, %2, !insn.addr !102
  %6 = bitcast i64* %3 to i32*, !insn.addr !103
  store i32 %5, i32* %6, align 4, !insn.addr !103
  ret i64 %4, !insn.addr !104

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i64 @thread_increment() local_unnamed_addr {
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
  ret i64 0, !insn.addr !108

dec_label_pc_1a04:                                ; preds = %dec_label_pc_19c4, %dec_label_pc_1a04
  %x20.01.reload = load i64, i64* %x20.01.reg2mem
  %5 = call i32 @pthread_mutex_lock(i64* nonnull @global_var_15020), !insn.addr !109
  %6 = add nuw nsw i64 %x20.01.reload, 1, !insn.addr !110
  %7 = and i64 %6, 4294967295, !insn.addr !110
  store i32 ptrtoint (i32* @global_var_15051 to i32), i32* @global_var_15050, align 4, !insn.addr !111
  %8 = call i32 @pthread_mutex_unlock(i64* nonnull @global_var_15020), !insn.addr !112
  %9 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !113
  %10 = icmp ult i64 %7, %3, !insn.addr !107
  store i64 %7, i64* %x20.01.reg2mem, !insn.addr !107
  br i1 %10, label %dec_label_pc_1a04, label %dec_label_pc_19f0, !insn.addr !107

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %x20.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1a04, { 1, 0 }
}

define i64 @consumer_thread() local_unnamed_addr {
dec_label_pc_1a30:
  %0 = call i32 @pthread_mutex_lock(i64* nonnull @global_var_15058), !insn.addr !114
  %1 = load i32, i32* @global_var_150b8, align 4, !insn.addr !115
  %2 = icmp eq i32 %1, 0, !insn.addr !116
  br i1 %2, label %dec_label_pc_1a88, label %dec_label_pc_1a60, !insn.addr !116

dec_label_pc_1a60:                                ; preds = %dec_label_pc_1a88, %dec_label_pc_1a30
  %3 = load i32, i32* @global_var_150bc, align 4, !insn.addr !117
  %4 = call i32 @pthread_mutex_unlock(i64* nonnull @global_var_15058), !insn.addr !118
  %5 = call i64* @malloc(i32 4), !insn.addr !119
  %6 = ptrtoint i64* %5 to i64, !insn.addr !119
  %7 = bitcast i64* %5 to i32*, !insn.addr !120
  store i32 %3, i32* %7, align 4, !insn.addr !120
  ret i64 %6, !insn.addr !121

dec_label_pc_1a88:                                ; preds = %dec_label_pc_1a30, %dec_label_pc_1a88
  %8 = call i32 @pthread_cond_wait(i64* nonnull @global_var_15088, i64* nonnull @global_var_15058), !insn.addr !122
  %9 = load i32, i32* @global_var_150b8, align 4, !insn.addr !115
  %10 = icmp eq i32 %9, 0, !insn.addr !116
  br i1 %10, label %dec_label_pc_1a88, label %dec_label_pc_1a60, !insn.addr !116

; uselistorder directives
  uselistorder label %dec_label_pc_1a88, { 1, 0 }
}

define i64 @producer_thread() local_unnamed_addr {
dec_label_pc_1a98:
  %0 = call i32 @sleep(i32 1), !insn.addr !123
  %1 = call i32 @pthread_mutex_lock(i64* nonnull @global_var_15058), !insn.addr !124
  store i32 42, i32* @global_var_150bc, align 4, !insn.addr !125
  store i32 1, i32* @global_var_150b8, align 4, !insn.addr !126
  %2 = call i32 @pthread_cond_signal(i64* nonnull @global_var_15088), !insn.addr !127
  %3 = call i32 @pthread_mutex_unlock(i64* nonnull @global_var_15058), !insn.addr !128
  ret i64 0, !insn.addr !129

; uselistorder directives
  uselistorder i32 (i64*)* @pthread_mutex_unlock, { 2, 1, 0, 3 }
  uselistorder i64* @global_var_15088, { 1, 0 }
  uselistorder i32 (i64*)* @pthread_mutex_lock, { 2, 1, 0, 3 }
  uselistorder i64* @global_var_15058, { 2, 3, 0, 1, 4 }
}

define i64 @thread_atomic_increment() local_unnamed_addr {
dec_label_pc_1af0:
  %0 = alloca i64
  %x20.01.reg2mem = alloca i64, !insn.addr !130
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = and i64 %1, 4294967295, !insn.addr !131
  %4 = icmp eq i32 %2, 0, !insn.addr !132
  store i64 0, i64* %x20.01.reg2mem, !insn.addr !132
  br i1 %4, label %dec_label_pc_1b1c, label %dec_label_pc_1b30, !insn.addr !132

dec_label_pc_1b1c:                                ; preds = %dec_label_pc_1b30, %dec_label_pc_1af0
  ret i64 0, !insn.addr !133

dec_label_pc_1b30:                                ; preds = %dec_label_pc_1af0, %dec_label_pc_1b30
  %x20.01.reload = load i64, i64* %x20.01.reg2mem
  %5 = call i64 @__aarch64_ldadd4_acq_rel(), !insn.addr !134
  %6 = add nuw nsw i64 %x20.01.reload, 1, !insn.addr !135
  %7 = and i64 %6, 4294967295, !insn.addr !135
  %8 = call i64 @__aarch64_cas4_acq_rel(), !insn.addr !136
  %9 = icmp ult i64 %7, %3, !insn.addr !132
  store i64 %7, i64* %x20.01.reg2mem, !insn.addr !132
  br i1 %9, label %dec_label_pc_1b30, label %dec_label_pc_1b1c, !insn.addr !132

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %x20.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1b30, { 1, 0 }
}

define i64 @thread_atomic_load_store() local_unnamed_addr {
dec_label_pc_1b54:
  %0 = load i32, i32* @global_var_150c0, align 4
  %1 = add i32 %0, 100, !insn.addr !137
  %2 = sext i32 %0 to i64, !insn.addr !138
  call void @__asm_stlr(i32 %1, i64 %2), !insn.addr !138
  ret i64 0, !insn.addr !139
}

define i64 @thread_tls_test() local_unnamed_addr {
dec_label_pc_1b74:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = call i64 @__asm_mrs(i64 %2, i64 %1), !insn.addr !140
  %5 = add i64 %4, 16, !insn.addr !141
  %6 = inttoptr i64 %5 to i32*, !insn.addr !142
  %7 = load i32, i32* %6, align 4, !insn.addr !142
  %8 = add i64 %4, 20, !insn.addr !143
  %9 = add i32 %7, 50, !insn.addr !144
  store i32 %9, i32* %6, align 4, !insn.addr !145
  %10 = inttoptr i64 %8 to i8*, !insn.addr !146
  %11 = inttoptr i64 %3 to i8*, !insn.addr !146
  %12 = call i8* @strncpy(i8* %10, i8* %11, i32 31), !insn.addr !146
  %13 = call i64* @malloc(i32 8), !insn.addr !147
  %14 = ptrtoint i64* %13 to i64, !insn.addr !147
  %15 = bitcast i64* %13 to i32*, !insn.addr !148
  store i32 %7, i32* %15, align 4, !insn.addr !148
  %16 = add i64 %14, 4, !insn.addr !148
  %17 = inttoptr i64 %16 to i32*, !insn.addr !148
  store i32 %9, i32* %17, align 4, !insn.addr !148
  ret i64 %14, !insn.addr !149

; uselistorder directives
  uselistorder i64 %14, { 1, 0 }
  uselistorder i64* %0, { 2, 1, 0 }
}

define i64 @param_strcpy() local_unnamed_addr {
dec_label_pc_1bc4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %2 to i8*, !insn.addr !150
  %4 = inttoptr i64 %1 to i8*, !insn.addr !150
  %5 = call i8* @strcpy(i8* %3, i8* %4), !insn.addr !150
  %6 = call i32 @strlen(i8* %3), !insn.addr !151
  %7 = sext i32 %6 to i64, !insn.addr !151
  ret i64 %7, !insn.addr !152

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @call_strcpy() local_unnamed_addr {
dec_label_pc_1bec:
  %x0.0.reg2mem = alloca i64, !insn.addr !153
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !154
  %1 = inttoptr i64 %0 to i64*, !insn.addr !155
  %2 = load i64, i64* %1, align 8, !insn.addr !155
  %3 = call i64 @param_strcpy(), !insn.addr !156
  %4 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !157
  %5 = inttoptr i64 %4 to i64*, !insn.addr !158
  %6 = load i64, i64* %5, align 8, !insn.addr !158
  %7 = icmp eq i64 %2, %6, !insn.addr !159
  store i64 %3, i64* %x0.0.reg2mem, !insn.addr !160
  br i1 %7, label %dec_label_pc_1c38, label %dec_label_pc_1c34, !insn.addr !160

dec_label_pc_1c34:                                ; preds = %dec_label_pc_1bec
  call void @__stack_chk_fail(), !insn.addr !161
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.0.reg2mem, !insn.addr !161
  br label %dec_label_pc_1c38, !insn.addr !161

dec_label_pc_1c38:                                ; preds = %dec_label_pc_1c34, %dec_label_pc_1bec
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !162
}

define i64 @param_strcmp(i64 %arg1) local_unnamed_addr {
dec_label_pc_1c40:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %2 to i8*, !insn.addr !163
  %4 = inttoptr i64 %1 to i8*, !insn.addr !163
  %5 = call i32 @strcmp(i8* %3, i8* %4), !insn.addr !163
  %6 = icmp slt i32 %5, 1, !insn.addr !164
  %7 = icmp eq i32 %5, 0
  %8 = select i1 %7, i64 0, i64 4294967295
  %storemerge = select i1 %6, i64 %8, i64 1
  ret i64 %storemerge, !insn.addr !165

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @call_strcmp() local_unnamed_addr {
dec_label_pc_1c60:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @param_strcmp(i64 %1), !insn.addr !166
  %3 = call i64 @param_strcmp(i64 ptrtoint (i32* @0 to i64)), !insn.addr !167
  %4 = add i64 %3, %2, !insn.addr !168
  %5 = call i64 @param_strcmp(i64 ptrtoint (i32* @0 to i64)), !insn.addr !169
  %6 = add i64 %4, %5, !insn.addr !170
  %7 = and i64 %6, 4294967295, !insn.addr !170
  ret i64 %7, !insn.addr !171

; uselistorder directives
  uselistorder i64 (i64)* @param_strcmp, { 2, 1, 0 }
}

define i64 @param_strlen(i64 %arg1) local_unnamed_addr {
dec_label_pc_1cc0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i8*, !insn.addr !172
  %3 = call i32 @strlen(i8* %2), !insn.addr !172
  %4 = sext i32 %3 to i64, !insn.addr !172
  ret i64 %4, !insn.addr !173
}

define i64 @call_strlen() local_unnamed_addr {
dec_label_pc_1cd4:
  ret i64 12, !insn.addr !174
}

define i64 @param_memcpy(i64* %arg1, i64* %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1cdc:
  %0 = trunc i64 %arg3 to i32, !insn.addr !175
  %1 = call i64* @memcpy(i64* %arg1, i64* %arg2, i32 %0), !insn.addr !175
  %2 = and i64 %arg3, 4294967295, !insn.addr !176
  ret i64 %2, !insn.addr !177
}

define i64 @call_memcpy() local_unnamed_addr {
dec_label_pc_1d00:
  %x0.0.reg2mem = alloca i64, !insn.addr !178
  %stack_var_-24 = alloca i32, align 4
  %stack_var_-48 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !179
  %1 = inttoptr i64 %0 to i64*, !insn.addr !180
  %2 = load i64, i64* %1, align 8, !insn.addr !180
  store i32 0, i32* %stack_var_-24, align 4, !insn.addr !181
  store i64 85899345930, i64* %stack_var_-48, align 8, !insn.addr !182
  %3 = bitcast i32* %stack_var_-24 to i64*, !insn.addr !183
  %4 = call i64 @param_memcpy(i64* nonnull %3, i64* nonnull %stack_var_-48, i64 20), !insn.addr !183
  %5 = load i32, i32* %stack_var_-24, align 4, !insn.addr !184
  %6 = zext i32 %5 to i64, !insn.addr !185
  %7 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !186
  %8 = inttoptr i64 %7 to i64*, !insn.addr !187
  %9 = load i64, i64* %8, align 8, !insn.addr !187
  %10 = icmp eq i64 %2, %9, !insn.addr !188
  store i64 %6, i64* %x0.0.reg2mem, !insn.addr !189
  br i1 %10, label %dec_label_pc_1d80, label %dec_label_pc_1d7c, !insn.addr !189

dec_label_pc_1d7c:                                ; preds = %dec_label_pc_1d00
  call void @__stack_chk_fail(), !insn.addr !190
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.0.reg2mem, !insn.addr !190
  br label %dec_label_pc_1d80, !insn.addr !190

dec_label_pc_1d80:                                ; preds = %dec_label_pc_1d7c, %dec_label_pc_1d00
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !191

; uselistorder directives
  uselistorder i32* %stack_var_-24, { 1, 2, 0 }
  uselistorder i64 20, { 0, 2, 1 }
}

define i64 @param_memcmp(i64 %arg1) local_unnamed_addr {
dec_label_pc_1d88:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = inttoptr i64 %3 to i64*, !insn.addr !192
  %5 = inttoptr i64 %2 to i64*, !insn.addr !192
  %6 = trunc i64 %1 to i32, !insn.addr !192
  %7 = call i32 @memcmp(i64* %4, i64* %5, i32 %6), !insn.addr !192
  %8 = icmp slt i32 %7, 1, !insn.addr !193
  %9 = icmp eq i32 %7, 0
  %10 = select i1 %9, i64 0, i64 4294967295
  %storemerge = select i1 %8, i64 %10, i64 1
  ret i64 %storemerge, !insn.addr !194

; uselistorder directives
  uselistorder i32 %7, { 1, 0 }
  uselistorder i64* %0, { 2, 1, 0 }
}

define i64 @call_memcmp() local_unnamed_addr {
dec_label_pc_1da8:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !195
  %1 = load i64, i64* %0
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !196
  %3 = inttoptr i64 %2 to i64*, !insn.addr !197
  %4 = load i64, i64* %3, align 8, !insn.addr !197
  %5 = call i64 @param_memcmp(i64 %1), !insn.addr !198
  %6 = call i64 @param_memcmp(i64 ptrtoint (i32* @0 to i64)), !insn.addr !199
  %7 = add i64 %6, %5, !insn.addr !200
  %8 = and i64 %7, 4294967295, !insn.addr !200
  %9 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !201
  %10 = inttoptr i64 %9 to i64*, !insn.addr !202
  %11 = load i64, i64* %10, align 8, !insn.addr !202
  %12 = icmp eq i64 %4, %11, !insn.addr !203
  store i64 %8, i64* %x0.0.reg2mem, !insn.addr !204
  br i1 %12, label %dec_label_pc_1e4c, label %dec_label_pc_1e48, !insn.addr !204

dec_label_pc_1e48:                                ; preds = %dec_label_pc_1da8
  call void @__stack_chk_fail(), !insn.addr !205
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.0.reg2mem, !insn.addr !205
  br label %dec_label_pc_1e4c, !insn.addr !205

dec_label_pc_1e4c:                                ; preds = %dec_label_pc_1e48, %dec_label_pc_1da8
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !206

; uselistorder directives
  uselistorder i64 (i64)* @param_memcmp, { 1, 0 }
}

define i64 @param_printf(i64 %arg1, i8* %arg2) local_unnamed_addr {
dec_label_pc_1e5c:
  %0 = and i64 %arg1, 4294967295, !insn.addr !207
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_3195, i64 0, i64 0), i64 %0, i8* %arg2), !insn.addr !208
  %2 = sext i32 %1 to i64, !insn.addr !208
  ret i64 %2, !insn.addr !208
}

define i64 @call_printf(i64 %arg1) local_unnamed_addr {
dec_label_pc_1e74:
  %0 = call i64 @param_printf(i64 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_3208, i64 0, i64 0)), !insn.addr !209
  ret i64 %0, !insn.addr !209
}

define i64 @param_scanf() local_unnamed_addr {
dec_label_pc_1e84:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !210
  %1 = load i64, i64* %0
  %stack_var_-8 = alloca i64, align 8
  %stack_var_-4 = alloca i64, align 8
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !211
  %3 = inttoptr i64 %2 to i64*, !insn.addr !212
  %4 = load i64, i64* %3, align 8, !insn.addr !212
  %5 = inttoptr i64 %1 to i8*, !insn.addr !213
  %6 = call i32 (i8*, i8*, ...) @sscanf(i8* %5, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_31aa, i64 0, i64 0), i64* nonnull %stack_var_-8, i64* nonnull %stack_var_-4), !insn.addr !213
  %7 = icmp eq i32 %6, 2, !insn.addr !214
  br i1 %7, label %dec_label_pc_1ebc, label %dec_label_pc_1ee4, !insn.addr !214

dec_label_pc_1ebc:                                ; preds = %dec_label_pc_1e84
  %8 = load i64, i64* %stack_var_-8, align 8, !insn.addr !215
  %9 = load i64, i64* %stack_var_-4, align 8, !insn.addr !215
  %10 = add i64 %9, %8, !insn.addr !216
  %11 = and i64 %10, 4294967295, !insn.addr !216
  store i64 %11, i64* %storemerge.reg2mem, !insn.addr !216
  br label %dec_label_pc_1ec4, !insn.addr !216

dec_label_pc_1ec4:                                ; preds = %dec_label_pc_1ee4, %dec_label_pc_1ebc
  %12 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !217
  %13 = inttoptr i64 %12 to i64*, !insn.addr !218
  %14 = load i64, i64* %13, align 8, !insn.addr !218
  %15 = icmp eq i64 %4, %14, !insn.addr !219
  br i1 %15, label %dec_label_pc_1eec, label %dec_label_pc_1ee0, !insn.addr !220

dec_label_pc_1ee0:                                ; preds = %dec_label_pc_1ec4
  call void @__stack_chk_fail(), !insn.addr !221
  br label %dec_label_pc_1ee4, !insn.addr !221

dec_label_pc_1ee4:                                ; preds = %dec_label_pc_1e84, %dec_label_pc_1ee0
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !222
  br label %dec_label_pc_1ec4, !insn.addr !222

dec_label_pc_1eec:                                ; preds = %dec_label_pc_1ec4
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !223

; uselistorder directives
  uselistorder i64* %stack_var_-4, { 1, 0 }
  uselistorder i64* %stack_var_-8, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1ee4, { 1, 0 }
}

define i64 @call_scanf(i64 %arg1) local_unnamed_addr {
dec_label_pc_1ef4:
  %0 = call i64 @param_scanf(), !insn.addr !224
  ret i64 %0, !insn.addr !224
}

define i64 @param_fopen_fclose() local_unnamed_addr {
dec_label_pc_1f00:
  %0 = alloca i64
  %x19.0.reg2mem = alloca i64, !insn.addr !225
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i8*, !insn.addr !226
  %3 = call %_IO_FILE* @fopen(i8* %2, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_31b8, i64 0, i64 0)), !insn.addr !226
  %4 = icmp eq %_IO_FILE* %3, null, !insn.addr !227
  store i64 4294967295, i64* %x19.0.reg2mem, !insn.addr !227
  br i1 %4, label %dec_label_pc_1f30, label %dec_label_pc_1f1c, !insn.addr !227

dec_label_pc_1f1c:                                ; preds = %dec_label_pc_1f00
  %5 = call i32 @fileno(%_IO_FILE* nonnull %3), !insn.addr !228
  %6 = zext i32 %5 to i64, !insn.addr !229
  %7 = call i32 @fclose(%_IO_FILE* nonnull %3), !insn.addr !230
  store i64 %6, i64* %x19.0.reg2mem, !insn.addr !230
  br label %dec_label_pc_1f30, !insn.addr !230

dec_label_pc_1f30:                                ; preds = %dec_label_pc_1f00, %dec_label_pc_1f1c
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  ret i64 %x19.0.reload, !insn.addr !231

; uselistorder directives
  uselistorder i64* %x19.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1f30, { 1, 0 }
}

define i64 @call_fopen_fclose(i64 %arg1) local_unnamed_addr {
dec_label_pc_1f48:
  %0 = call i64 @param_fopen_fclose(), !insn.addr !232
  %1 = trunc i64 %0 to i32, !insn.addr !233
  %2 = icmp slt i32 %1, 0, !insn.addr !233
  %. = select i1 %2, i64 4294967295, i64 42
  ret i64 %., !insn.addr !234
}

define i64 @param_fread_fwrite() local_unnamed_addr {
dec_label_pc_1f70:
  %0 = alloca i64
  %x21.1.reg2mem = alloca i64, !insn.addr !235
  %x20.1.reg2mem = alloca i64, !insn.addr !235
  %x19.1.reg2mem = alloca i64, !insn.addr !235
  %x0.1.reg2mem = alloca i64, !insn.addr !235
  %x21.0.reg2mem = alloca i64, !insn.addr !235
  %x20.0.reg2mem = alloca i64, !insn.addr !235
  %x19.0.reg2mem = alloca i64, !insn.addr !235
  %x0.0.reg2mem = alloca i64, !insn.addr !235
  %1 = load i64, i64* %0
  %stack_var_-32 = alloca i64, align 8
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !236
  %3 = inttoptr i64 %2 to i64*, !insn.addr !237
  %4 = load i64, i64* %3, align 8, !insn.addr !237
  %5 = inttoptr i64 %1 to i8*, !insn.addr !238
  %6 = call %_IO_FILE* @fopen(i8* %5, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_31c6, i64 0, i64 0)), !insn.addr !238
  %7 = icmp eq %_IO_FILE* %6, null, !insn.addr !239
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !239
  br i1 %7, label %dec_label_pc_1fe4, label %dec_label_pc_1fac, !insn.addr !239

dec_label_pc_1fac:                                ; preds = %dec_label_pc_1f70
  %8 = ptrtoint %_IO_FILE* %6 to i64, !insn.addr !238
  %9 = call i32 @fwrite(i64* bitcast ([19 x i8]* @global_var_31c9 to i64*), i32 1, i32 18, %_IO_FILE* nonnull %6), !insn.addr !240
  %10 = icmp eq i32 %9, 18, !insn.addr !241
  store i64 %8, i64* %x0.1.reg2mem, !insn.addr !242
  store i64 %8, i64* %x19.1.reg2mem, !insn.addr !242
  store i64 ptrtoint ([19 x i8]* @global_var_31c9 to i64), i64* %x20.1.reg2mem, !insn.addr !242
  store i64 18, i64* %x21.1.reg2mem, !insn.addr !242
  br i1 %10, label %dec_label_pc_2004, label %dec_label_pc_1fdc, !insn.addr !242

dec_label_pc_1fdc:                                ; preds = %dec_label_pc_1fac
  %11 = sext i32 %9 to i64, !insn.addr !240
  %12 = call i32 @fclose(%_IO_FILE* nonnull %6), !insn.addr !243
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !244
  store i64 %8, i64* %x19.0.reg2mem, !insn.addr !244
  store i64 ptrtoint ([19 x i8]* @global_var_31c9 to i64), i64* %x20.0.reg2mem, !insn.addr !244
  store i64 %11, i64* %x21.0.reg2mem, !insn.addr !244
  br label %dec_label_pc_1fe4, !insn.addr !244

dec_label_pc_1fe4:                                ; preds = %dec_label_pc_2004, %dec_label_pc_1f70, %dec_label_pc_2040, %dec_label_pc_1fdc
  %13 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !245
  %14 = inttoptr i64 %13 to i64*, !insn.addr !246
  %15 = load i64, i64* %14, align 8, !insn.addr !246
  %16 = icmp eq i64 %4, %15, !insn.addr !247
  br i1 %16, label %dec_label_pc_2070, label %dec_label_pc_2000, !insn.addr !248

dec_label_pc_2000:                                ; preds = %dec_label_pc_1fe4
  %x21.0.reload = load i64, i64* %x21.0.reg2mem
  %x20.0.reload = load i64, i64* %x20.0.reg2mem
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  call void @__stack_chk_fail(), !insn.addr !249
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.1.reg2mem, !insn.addr !249
  store i64 %x19.0.reload, i64* %x19.1.reg2mem, !insn.addr !249
  store i64 %x20.0.reload, i64* %x20.1.reg2mem, !insn.addr !249
  store i64 %x21.0.reload, i64* %x21.1.reg2mem, !insn.addr !249
  br label %dec_label_pc_2004, !insn.addr !249

dec_label_pc_2004:                                ; preds = %dec_label_pc_2000, %dec_label_pc_1fac
  %x21.1.reload = load i64, i64* %x21.1.reg2mem
  %x20.1.reload = load i64, i64* %x20.1.reg2mem
  %x19.1.reload = load i64, i64* %x19.1.reg2mem
  %x0.1.reload = load i64, i64* %x0.1.reg2mem
  %17 = inttoptr i64 %x0.1.reload to %_IO_FILE*, !insn.addr !250
  call void @rewind(%_IO_FILE* %17), !insn.addr !250
  %18 = ptrtoint i64* %stack_var_-32 to i64, !insn.addr !251
  %19 = trunc i64 %x21.1.reload to i32, !insn.addr !252
  %20 = inttoptr i64 %x19.1.reload to %_IO_FILE*, !insn.addr !252
  %21 = call i32 @fread(i64* nonnull %stack_var_-32, i32 1, i32 %19, %_IO_FILE* %20), !insn.addr !252
  %22 = sext i32 %21 to i64, !insn.addr !252
  %23 = add i64 %22, %18, !insn.addr !253
  %24 = inttoptr i64 %23 to i8*, !insn.addr !253
  store i8 0, i8* %24, align 1, !insn.addr !253
  %25 = call i32 @fclose(%_IO_FILE* %20), !insn.addr !254
  %26 = call i32 @unlink(i8* %5), !insn.addr !255
  %27 = icmp eq i32 %21, 18, !insn.addr !256
  store i64 4294967293, i64* %x0.0.reg2mem, !insn.addr !256
  store i64 %x19.1.reload, i64* %x19.0.reg2mem, !insn.addr !256
  store i64 %x20.1.reload, i64* %x20.0.reg2mem, !insn.addr !256
  store i64 %22, i64* %x21.0.reg2mem, !insn.addr !256
  br i1 %27, label %dec_label_pc_2040, label %dec_label_pc_1fe4, !insn.addr !256

dec_label_pc_2040:                                ; preds = %dec_label_pc_2004
  %28 = bitcast i64* %stack_var_-32 to i8*, !insn.addr !257
  %29 = inttoptr i64 %x20.1.reload to i8*, !insn.addr !257
  %30 = call i32 @strcmp(i8* nonnull %28, i8* %29), !insn.addr !257
  %31 = icmp eq i32 %30, 0, !insn.addr !258
  %32 = select i1 %31, i64 42, i64 4294967293, !insn.addr !259
  store i64 %32, i64* %x0.0.reg2mem, !insn.addr !260
  store i64 %x19.1.reload, i64* %x19.0.reg2mem, !insn.addr !260
  store i64 %x20.1.reload, i64* %x20.0.reg2mem, !insn.addr !260
  store i64 18, i64* %x21.0.reg2mem, !insn.addr !260
  br label %dec_label_pc_1fe4, !insn.addr !260

dec_label_pc_2070:                                ; preds = %dec_label_pc_1fe4
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !261

; uselistorder directives
  uselistorder i64 %x19.1.reload, { 1, 2, 0 }
  uselistorder i64 %x20.1.reload, { 1, 0, 2 }
  uselistorder i32 %9, { 1, 0 }
  uselistorder i64 %8, { 2, 0, 1 }
  uselistorder %_IO_FILE* %6, { 0, 1, 3, 2 }
  uselistorder i64* %x0.0.reg2mem, { 0, 4, 1, 3, 2 }
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

define i64 @call_fread_fwrite(i64 %arg1) local_unnamed_addr {
dec_label_pc_2084:
  %0 = call i64 @param_fread_fwrite(), !insn.addr !262
  ret i64 %0, !insn.addr !262
}

define i64 @param_malloc_free() local_unnamed_addr {
dec_label_pc_2090:
  %0 = alloca i64
  %x1.01.reg2mem = alloca i64, !insn.addr !263
  %x19.0.reg2mem = alloca i64, !insn.addr !263
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 4, !insn.addr !264
  %3 = trunc i64 %2 to i32, !insn.addr !265
  %4 = call i64* @malloc(i32 %3), !insn.addr !265
  %5 = icmp eq i64* %4, null, !insn.addr !266
  store i64 4294967295, i64* %x19.0.reg2mem, !insn.addr !266
  br i1 %5, label %dec_label_pc_20d4, label %dec_label_pc_20b8.preheader, !insn.addr !266

dec_label_pc_20b8.preheader:                      ; preds = %dec_label_pc_2090
  %6 = ptrtoint i64* %4 to i64, !insn.addr !265
  %7 = icmp eq i64 %1, 0, !insn.addr !267
  store i64 0, i64* %x1.01.reg2mem, !insn.addr !267
  br i1 %7, label %dec_label_pc_20c0, label %dec_label_pc_20e4, !insn.addr !267

dec_label_pc_20c0:                                ; preds = %dec_label_pc_20e4, %dec_label_pc_20b8.preheader
  %8 = bitcast i64* %4 to i32*, !insn.addr !268
  %9 = load i32, i32* %8, align 4, !insn.addr !268
  %10 = add i64 %2, -4, !insn.addr !269
  %11 = add i64 %10, %6, !insn.addr !270
  %12 = inttoptr i64 %11 to i32*, !insn.addr !270
  %13 = load i32, i32* %12, align 4, !insn.addr !270
  %14 = add i32 %13, %9, !insn.addr !271
  %15 = zext i32 %14 to i64, !insn.addr !271
  call void @free(i64* nonnull %4), !insn.addr !272
  store i64 %15, i64* %x19.0.reg2mem, !insn.addr !272
  br label %dec_label_pc_20d4, !insn.addr !272

dec_label_pc_20d4:                                ; preds = %dec_label_pc_2090, %dec_label_pc_20c0
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  ret i64 %x19.0.reload, !insn.addr !273

dec_label_pc_20e4:                                ; preds = %dec_label_pc_20b8.preheader, %dec_label_pc_20e4
  %x1.01.reload = load i64, i64* %x1.01.reg2mem
  %16 = trunc i64 %x1.01.reload to i32, !insn.addr !274
  %17 = mul i32 %16, 10, !insn.addr !274
  %18 = mul i64 %x1.01.reload, 4, !insn.addr !275
  %19 = add i64 %18, %6, !insn.addr !275
  %20 = inttoptr i64 %19 to i32*, !insn.addr !275
  store i32 %17, i32* %20, align 4, !insn.addr !275
  %21 = add nuw i64 %x1.01.reload, 1, !insn.addr !276
  %22 = icmp eq i64 %21, %1, !insn.addr !267
  store i64 %21, i64* %x1.01.reg2mem, !insn.addr !267
  br i1 %22, label %dec_label_pc_20c0, label %dec_label_pc_20e4, !insn.addr !267

; uselistorder directives
  uselistorder i64 %x1.01.reload, { 0, 2, 1 }
  uselistorder i64* %4, { 0, 1, 3, 2 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %x19.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x1.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_20e4, { 1, 0 }
  uselistorder label %dec_label_pc_20d4, { 1, 0 }
}

define i64 @call_malloc_free(i64 %arg1) local_unnamed_addr {
dec_label_pc_20fc:
  %0 = call i64 @param_malloc_free(), !insn.addr !277
  ret i64 %0, !insn.addr !277
}

define i64 @param_memset() local_unnamed_addr {
dec_label_pc_2104:
  %0 = alloca i64
  %x1.01.reg2mem = alloca i64, !insn.addr !278
  %storemerge2.reg2mem = alloca i64, !insn.addr !278
  %storemerge.lcssa.reg2mem = alloca i64, !insn.addr !278
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %2 to i64*, !insn.addr !279
  %4 = trunc i64 %1 to i32, !insn.addr !279
  %5 = call i64* @memset(i64* %3, i32 0, i32 %4), !insn.addr !279
  %6 = icmp eq i64 %1, 0, !insn.addr !280
  store i64 0, i64* %storemerge.lcssa.reg2mem, !insn.addr !280
  store i64 0, i64* %storemerge2.reg2mem, !insn.addr !280
  store i64 0, i64* %x1.01.reg2mem, !insn.addr !280
  br i1 %6, label %dec_label_pc_2134, label %dec_label_pc_2140, !insn.addr !280

dec_label_pc_2134:                                ; preds = %dec_label_pc_2140, %dec_label_pc_2104
  %storemerge.lcssa.reload = load i64, i64* %storemerge.lcssa.reg2mem
  ret i64 %storemerge.lcssa.reload, !insn.addr !281

dec_label_pc_2140:                                ; preds = %dec_label_pc_2104, %dec_label_pc_2140
  %x1.01.reload = load i64, i64* %x1.01.reg2mem
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %7 = add i64 %x1.01.reload, %2, !insn.addr !282
  %8 = inttoptr i64 %7 to i8*, !insn.addr !282
  %9 = load i8, i8* %8, align 1, !insn.addr !282
  %10 = zext i8 %9 to i64, !insn.addr !282
  %11 = add nuw i64 %x1.01.reload, 1, !insn.addr !283
  %12 = add nuw nsw i64 %storemerge2.reload, %10, !insn.addr !284
  %13 = and i64 %12, 4294967295, !insn.addr !284
  %14 = icmp eq i64 %11, %1, !insn.addr !280
  store i64 %13, i64* %storemerge.lcssa.reg2mem, !insn.addr !280
  store i64 %13, i64* %storemerge2.reg2mem, !insn.addr !280
  store i64 %11, i64* %x1.01.reg2mem, !insn.addr !280
  br i1 %14, label %dec_label_pc_2134, label %dec_label_pc_2140, !insn.addr !280

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 1, 2, 0 }
  uselistorder i64* %storemerge.lcssa.reg2mem, { 1, 0, 2 }
  uselistorder i64* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x1.01.reg2mem, { 2, 0, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder label %dec_label_pc_2140, { 1, 0 }
}

define i64 @call_memset() local_unnamed_addr {
dec_label_pc_2150:
  %0 = alloca i32
  %x0.0.reg2mem = alloca i64, !insn.addr !285
  %x1.0.reg2mem = alloca i64, !insn.addr !285
  %1 = load i32, i32* %0
  %stack_var_-40 = alloca i32, align 4
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !286
  %3 = inttoptr i64 %2 to i64*, !insn.addr !287
  %4 = load i64, i64* %3, align 8, !insn.addr !287
  %5 = ptrtoint i32* %stack_var_-40 to i64, !insn.addr !288
  store i64 0, i64* %x1.0.reg2mem, !insn.addr !288
  br label %dec_label_pc_2174, !insn.addr !288

dec_label_pc_2174:                                ; preds = %dec_label_pc_2174, %dec_label_pc_2150
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %6 = mul i64 %x1.0.reload, 4, !insn.addr !289
  %7 = add i64 %6, %5, !insn.addr !289
  %8 = inttoptr i64 %7 to i32*, !insn.addr !289
  store i32 255, i32* %8, align 4, !insn.addr !289
  %9 = add nuw nsw i64 %x1.0.reload, 1, !insn.addr !290
  %10 = icmp eq i64 %9, 10, !insn.addr !291
  store i64 %9, i64* %x1.0.reg2mem, !insn.addr !291
  br i1 %10, label %dec_label_pc_2184, label %dec_label_pc_2174, !insn.addr !291

dec_label_pc_2184:                                ; preds = %dec_label_pc_2174
  %11 = call i64 @param_memset(), !insn.addr !292
  %12 = load i32, i32* %stack_var_-40, align 4, !insn.addr !293
  %13 = add i32 %12, %1, !insn.addr !294
  %14 = zext i32 %13 to i64, !insn.addr !294
  %15 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !295
  %16 = inttoptr i64 %15 to i64*, !insn.addr !296
  %17 = load i64, i64* %16, align 8, !insn.addr !296
  %18 = icmp eq i64 %4, %17, !insn.addr !297
  store i64 %14, i64* %x0.0.reg2mem, !insn.addr !298
  br i1 %18, label %dec_label_pc_21b8, label %dec_label_pc_21b4, !insn.addr !298

dec_label_pc_21b4:                                ; preds = %dec_label_pc_2184
  call void @__stack_chk_fail(), !insn.addr !299
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.0.reg2mem, !insn.addr !299
  br label %dec_label_pc_21b8, !insn.addr !299

dec_label_pc_21b8:                                ; preds = %dec_label_pc_21b4, %dec_label_pc_2184
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !300

; uselistorder directives
  uselistorder i32* %stack_var_-40, { 1, 0 }
  uselistorder i64* %x1.0.reg2mem, { 1, 0, 2 }
}

define i64 @param_strchr_strstr() local_unnamed_addr {
dec_label_pc_21c0:
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

define i64 @call_strchr_strstr(i64 %arg1) local_unnamed_addr {
dec_label_pc_221c:
  %0 = call i64 @param_strchr_strstr(), !insn.addr !312
  ret i64 %0, !insn.addr !312
}

define i64 @test_standard_library_functions(i64 %arg1) local_unnamed_addr {
dec_label_pc_2234:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_320d to i8*)), !insn.addr !313
  %1 = call i64 @call_strcpy(), !insn.addr !314
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3231 to i8*)), !insn.addr !315
  %3 = call i64 @call_strcmp(), !insn.addr !316
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_324c to i8*)), !insn.addr !317
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3267 to i8*)), !insn.addr !318
  %6 = call i64 @call_memcpy(), !insn.addr !319
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3283 to i8*)), !insn.addr !320
  %8 = call i64 @call_memcmp(), !insn.addr !321
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_329f to i8*)), !insn.addr !322
  %10 = sext i32 %9 to i64, !insn.addr !322
  %11 = call i64 @call_printf(i64 %10), !insn.addr !323
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_32bb to i8*)), !insn.addr !324
  %13 = sext i32 %12 to i64, !insn.addr !324
  %14 = call i64 @call_scanf(i64 %13), !insn.addr !325
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_32d7 to i8*)), !insn.addr !326
  %16 = call i64 @call_fopen_fclose(i64 ptrtoint (i32* @0 to i64)), !insn.addr !327
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_32f4 to i8*)), !insn.addr !328
  %18 = sext i32 %17 to i64, !insn.addr !328
  %19 = call i64 @call_fread_fwrite(i64 %18), !insn.addr !329
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3310 to i8*)), !insn.addr !330
  %21 = sext i32 %20 to i64, !insn.addr !330
  %22 = call i64 @call_malloc_free(i64 %21), !insn.addr !331
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_332c to i8*)), !insn.addr !332
  %24 = call i64 @call_memset(), !insn.addr !333
  %25 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3348 to i8*)), !insn.addr !334
  %26 = sext i32 %25 to i64, !insn.addr !334
  %27 = call i64 @call_strchr_strstr(i64 %26), !insn.addr !335
  %28 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3363 to i8*)), !insn.addr !336
  %29 = sext i32 %28 to i64, !insn.addr !336
  ret i64 %29, !insn.addr !336
}

define i64 @param_linux_syscall() local_unnamed_addr {
dec_label_pc_2368:
  %x19.0.in.reg2mem = alloca i32, !insn.addr !337
  %0 = call i32 (i32, ...) @syscall(i32 56), !insn.addr !338
  %1 = icmp sgt i32 %0, -1, !insn.addr !339
  br i1 %1, label %dec_label_pc_23a8, label %dec_label_pc_238c, !insn.addr !339

dec_label_pc_238c:                                ; preds = %dec_label_pc_2368
  %2 = call i32* @__errno_location(), !insn.addr !340
  %3 = load i32, i32* %2, align 4, !insn.addr !341
  %4 = sub i32 0, %3, !insn.addr !342
  store i32 %4, i32* %x19.0.in.reg2mem, !insn.addr !342
  br label %dec_label_pc_2398, !insn.addr !342

dec_label_pc_2398:                                ; preds = %dec_label_pc_23a8, %dec_label_pc_238c
  %x19.0.in.reload = load i32, i32* %x19.0.in.reg2mem
  %x19.0 = zext i32 %x19.0.in.reload to i64
  ret i64 %x19.0, !insn.addr !343

dec_label_pc_23a8:                                ; preds = %dec_label_pc_2368
  %5 = call i32 (i32, ...) @syscall(i32 57), !insn.addr !344
  store i32 %0, i32* %x19.0.in.reg2mem, !insn.addr !345
  br label %dec_label_pc_2398, !insn.addr !345

; uselistorder directives
  uselistorder i32* %x19.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i32, ...)* @syscall, { 1, 0, 2 }
}

define i64 @call_linux_syscall(i64 %arg1) local_unnamed_addr {
dec_label_pc_23bc:
  %0 = call i64 @param_linux_syscall(), !insn.addr !346
  %1 = trunc i64 %0 to i32, !insn.addr !347
  %2 = icmp slt i32 %1, 0, !insn.addr !347
  %. = select i1 %2, i64 4294967295, i64 42
  ret i64 %., !insn.addr !348
}

define i64 @param_win32_api() local_unnamed_addr {
dec_label_pc_23e4:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !349
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %stack_var_-128 = alloca i64, align 8
  %3 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !350
  %4 = inttoptr i64 %3 to i64*, !insn.addr !351
  %5 = load i64, i64* %4, align 8, !insn.addr !351
  %6 = inttoptr i64 %1 to i8*, !insn.addr !352
  %7 = bitcast i64* %stack_var_-128 to %stat*, !insn.addr !352
  %8 = call i32 @stat(i8* %6, %stat* nonnull %7), !insn.addr !352
  %9 = icmp slt i32 %8, 0, !insn.addr !353
  br i1 %9, label %dec_label_pc_2440, label %dec_label_pc_240c, !insn.addr !353

dec_label_pc_240c:                                ; preds = %dec_label_pc_23e4
  %10 = icmp slt i64 %2, 1
  %11 = select i1 %10, i64 4294967294, i64 42, !insn.addr !354
  store i64 %11, i64* %storemerge.reg2mem, !insn.addr !354
  br label %dec_label_pc_2420, !insn.addr !354

dec_label_pc_2420:                                ; preds = %dec_label_pc_2440, %dec_label_pc_240c
  %12 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !355
  %13 = inttoptr i64 %12 to i64*, !insn.addr !356
  %14 = load i64, i64* %13, align 8, !insn.addr !356
  %15 = icmp eq i64 %5, %14, !insn.addr !357
  br i1 %15, label %dec_label_pc_2448, label %dec_label_pc_243c, !insn.addr !358

dec_label_pc_243c:                                ; preds = %dec_label_pc_2420
  call void @__stack_chk_fail(), !insn.addr !359
  br label %dec_label_pc_2440, !insn.addr !359

dec_label_pc_2440:                                ; preds = %dec_label_pc_243c, %dec_label_pc_23e4
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !360
  br label %dec_label_pc_2420, !insn.addr !360

dec_label_pc_2448:                                ; preds = %dec_label_pc_2420
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !361

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @call_win32_api(i64 %arg1) local_unnamed_addr {
dec_label_pc_2450:
  %0 = call i64 @param_win32_api(), !insn.addr !362
  ret i64 %0, !insn.addr !362
}

define i64 @param_fork_exec() local_unnamed_addr {
dec_label_pc_245c:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !363
  %1 = load i64, i64* %0
  %stack_var_-4 = alloca i32, align 4
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !364
  %3 = inttoptr i64 %2 to i64*, !insn.addr !365
  %4 = load i64, i64* %3, align 8, !insn.addr !365
  %5 = call i32 @fork(), !insn.addr !366
  %6 = icmp slt i32 %5, 0, !insn.addr !367
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !368
  br i1 %6, label %dec_label_pc_24d4, label %dec_label_pc_2490, !insn.addr !368

dec_label_pc_2490:                                ; preds = %dec_label_pc_245c
  %7 = icmp eq i32 %5, 0, !insn.addr !367
  br i1 %7, label %dec_label_pc_2494, label %dec_label_pc_24b0, !insn.addr !369

dec_label_pc_2494:                                ; preds = %dec_label_pc_2490
  %8 = inttoptr i64 %1 to i8*, !insn.addr !370
  %9 = call i32 (i8*, i8*, ...) @execl(i8* %8, i8* %8), !insn.addr !370
  call void @_exit(i32 127), !insn.addr !371
  unreachable, !insn.addr !371

dec_label_pc_24b0:                                ; preds = %dec_label_pc_2490
  %10 = call i32 @waitpid(i32 %5, i32* nonnull %stack_var_-4, i32 0), !insn.addr !372
  %11 = icmp slt i32 %10, 0, !insn.addr !373
  br i1 %11, label %dec_label_pc_24f4, label %dec_label_pc_24c0, !insn.addr !373

dec_label_pc_24c0:                                ; preds = %dec_label_pc_24b0
  %12 = sext i32 %10 to i64, !insn.addr !372
  %13 = load i32, i32* %stack_var_-4, align 4, !insn.addr !374
  %14 = zext i32 %13 to i64, !insn.addr !374
  %15 = call i64 @__asm_ubfx(i64 %12, i64 %14, i64 8, i64 8), !insn.addr !375
  %16 = urem i64 %14, 128, !insn.addr !376
  %17 = icmp eq i64 %16, 0, !insn.addr !376
  %18 = and i64 %15, 4294967295
  %19 = select i1 %17, i64 %18, i64 4294967293, !insn.addr !377
  store i64 %19, i64* %x0.0.reg2mem, !insn.addr !377
  br label %dec_label_pc_24d4, !insn.addr !377

dec_label_pc_24d4:                                ; preds = %dec_label_pc_245c, %dec_label_pc_24f4, %dec_label_pc_24c0
  %20 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !378
  %21 = inttoptr i64 %20 to i64*, !insn.addr !379
  %22 = load i64, i64* %21, align 8, !insn.addr !379
  %23 = icmp eq i64 %4, %22, !insn.addr !380
  br i1 %23, label %dec_label_pc_2504, label %dec_label_pc_24f0, !insn.addr !381

dec_label_pc_24f0:                                ; preds = %dec_label_pc_24d4
  call void @__stack_chk_fail(), !insn.addr !382
  br label %dec_label_pc_24f4, !insn.addr !382

dec_label_pc_24f4:                                ; preds = %dec_label_pc_24f0, %dec_label_pc_24b0
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !383
  br label %dec_label_pc_24d4, !insn.addr !383

dec_label_pc_2504:                                ; preds = %dec_label_pc_24d4
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !384

; uselistorder directives
  uselistorder i32 %10, { 1, 0 }
  uselistorder i32 %5, { 0, 2, 1 }
  uselistorder i64* %x0.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_24d4, { 1, 2, 0 }
}

define i64 @call_fork_exec(i64 %arg1) local_unnamed_addr {
dec_label_pc_2510:
  %0 = call i64 @param_fork_exec(), !insn.addr !385
  %1 = trunc i64 %0 to i32, !insn.addr !386
  %2 = icmp eq i32 %1, 0, !insn.addr !386
  %. = select i1 %2, i64 42, i64 4294967295
  ret i64 %., !insn.addr !387
}

define i64 @param_pipe_communication() local_unnamed_addr {
dec_label_pc_253c:
  %0 = alloca i32
  %x0.0.reg2mem = alloca i64, !insn.addr !388
  %stack_var_-32 = alloca i64, align 8
  %1 = load i32, i32* %0
  %stack_var_-40 = alloca i32, align 4
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !389
  %3 = inttoptr i64 %2 to i64*, !insn.addr !390
  %4 = load i64, i64* %3, align 8, !insn.addr !390
  %5 = ptrtoint i32* %stack_var_-40 to i64, !insn.addr !391
  %6 = trunc i64 %5 to i32, !insn.addr !392
  %7 = insertvalue [2 x i32] undef, i32 %6, 0, !insn.addr !392
  %8 = call i32 @pipe([2 x i32] %7), !insn.addr !392
  %9 = icmp slt i32 %8, 0, !insn.addr !393
  br i1 %9, label %dec_label_pc_2608, label %dec_label_pc_2568, !insn.addr !393

dec_label_pc_2568:                                ; preds = %dec_label_pc_253c
  %10 = call i32 @fork(), !insn.addr !394
  %11 = icmp slt i32 %10, 0, !insn.addr !395
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !396
  br i1 %11, label %dec_label_pc_25e8, label %dec_label_pc_2574, !insn.addr !396

dec_label_pc_2574:                                ; preds = %dec_label_pc_2568
  %12 = icmp eq i32 %10, 0, !insn.addr !395
  br i1 %12, label %dec_label_pc_2578, label %dec_label_pc_25a4, !insn.addr !397

dec_label_pc_2578:                                ; preds = %dec_label_pc_2574
  %13 = load i32, i32* %stack_var_-40, align 4, !insn.addr !398
  %14 = call i32 @close(i32 %13), !insn.addr !399
  %15 = call i32 @write(i32 %1, i64* bitcast ([10 x i8]* @global_var_3389 to i64*), i32 9), !insn.addr !400
  %16 = call i32 @close(i32 %1), !insn.addr !401
  call void @_exit(i32 0), !insn.addr !402
  unreachable, !insn.addr !402

dec_label_pc_25a4:                                ; preds = %dec_label_pc_2574
  %17 = ptrtoint i64* %stack_var_-32 to i64, !insn.addr !403
  %18 = call i32 @close(i32 %1), !insn.addr !404
  %19 = load i32, i32* %stack_var_-40, align 4, !insn.addr !405
  %20 = call i32 @read(i32 %19, i64* nonnull %stack_var_-32, i32 31), !insn.addr !406
  %21 = sext i32 %20 to i64, !insn.addr !406
  %22 = add i64 %21, %17, !insn.addr !407
  %23 = inttoptr i64 %22 to i8*, !insn.addr !407
  store i8 0, i8* %23, align 1, !insn.addr !407
  %24 = load i32, i32* %stack_var_-40, align 4, !insn.addr !408
  %25 = call i32 @close(i32 %24), !insn.addr !409
  %26 = call i32 @wait(i64 0), !insn.addr !410
  %27 = icmp slt i32 %20, 1
  %28 = select i1 %27, i64 4294967293, i64 42, !insn.addr !411
  store i64 %28, i64* %x0.0.reg2mem, !insn.addr !411
  br label %dec_label_pc_25e8, !insn.addr !411

dec_label_pc_25e8:                                ; preds = %dec_label_pc_2568, %dec_label_pc_2608, %dec_label_pc_25a4
  %29 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !412
  %30 = inttoptr i64 %29 to i64*, !insn.addr !413
  %31 = load i64, i64* %30, align 8, !insn.addr !413
  %32 = icmp eq i64 %4, %31, !insn.addr !414
  br i1 %32, label %dec_label_pc_2618, label %dec_label_pc_2604, !insn.addr !415

dec_label_pc_2604:                                ; preds = %dec_label_pc_25e8
  call void @__stack_chk_fail(), !insn.addr !416
  br label %dec_label_pc_2608, !insn.addr !416

dec_label_pc_2608:                                ; preds = %dec_label_pc_2604, %dec_label_pc_253c
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !417
  br label %dec_label_pc_25e8, !insn.addr !417

dec_label_pc_2618:                                ; preds = %dec_label_pc_25e8
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !418

; uselistorder directives
  uselistorder i32 %10, { 1, 0 }
  uselistorder i32* %stack_var_-40, { 3, 2, 1, 0 }
  uselistorder i64* %x0.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder void (i32)* @_exit, { 1, 0, 2 }
  uselistorder i32 ()* @fork, { 1, 0, 2 }
  uselistorder label %dec_label_pc_25e8, { 1, 2, 0 }
}

define i64 @call_pipe_communication() local_unnamed_addr {
dec_label_pc_2624:
  %0 = call i64 @param_pipe_communication(), !insn.addr !419
  ret i64 %0, !insn.addr !419
}

define i64 @param_socket_create() local_unnamed_addr {
dec_label_pc_2628:
  %x19.1.reg2mem = alloca i64, !insn.addr !420
  %x19.0.reg2mem = alloca i64, !insn.addr !420
  %x0.0.reg2mem = alloca i64, !insn.addr !420
  %stack_var_-16 = alloca i64, align 8
  %stack_var_-20 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !421
  %1 = inttoptr i64 %0 to i64*, !insn.addr !422
  %2 = load i64, i64* %1, align 8, !insn.addr !422
  %3 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !423
  %4 = icmp slt i32 %3, 0, !insn.addr !424
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !424
  br i1 %4, label %dec_label_pc_2688, label %dec_label_pc_265c, !insn.addr !424

dec_label_pc_265c:                                ; preds = %dec_label_pc_2628
  %5 = zext i32 %3 to i64
  store i64 1, i64* %stack_var_-20, align 8, !insn.addr !425
  %6 = call i32 @setsockopt(i32 %3, i32 1, i32 2, i64* nonnull %stack_var_-20, i32 4), !insn.addr !426
  %7 = icmp sgt i32 %6, -1, !insn.addr !427
  store i64 %5, i64* %x19.1.reg2mem, !insn.addr !427
  br i1 %7, label %dec_label_pc_26a8, label %dec_label_pc_267c, !insn.addr !427

dec_label_pc_267c:                                ; preds = %dec_label_pc_265c
  %8 = call i32 @close(i32 %3), !insn.addr !428
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !429
  store i64 %5, i64* %x19.0.reg2mem, !insn.addr !429
  br label %dec_label_pc_2688, !insn.addr !429

dec_label_pc_2688:                                ; preds = %dec_label_pc_2628, %dec_label_pc_26d8, %dec_label_pc_26c8, %dec_label_pc_267c
  %9 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !430
  %10 = inttoptr i64 %9 to i64*, !insn.addr !431
  %11 = load i64, i64* %10, align 8, !insn.addr !431
  %12 = icmp eq i64 %2, %11, !insn.addr !432
  br i1 %12, label %dec_label_pc_2710, label %dec_label_pc_26a4, !insn.addr !433

dec_label_pc_26a4:                                ; preds = %dec_label_pc_2688
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  call void @__stack_chk_fail(), !insn.addr !434
  store i64 %x19.0.reload, i64* %x19.1.reg2mem, !insn.addr !434
  br label %dec_label_pc_26a8, !insn.addr !434

dec_label_pc_26a8:                                ; preds = %dec_label_pc_26a4, %dec_label_pc_265c
  %x19.1.reload = load i64, i64* %x19.1.reg2mem
  store i64 2, i64* %stack_var_-16, align 8, !insn.addr !435
  %13 = trunc i64 %x19.1.reload to i32, !insn.addr !436
  %14 = bitcast i64* %stack_var_-16 to %sockaddr*, !insn.addr !437
  %15 = call i32 @bind(i32 %13, %sockaddr* nonnull %14, i32 16), !insn.addr !437
  %16 = icmp sgt i32 %15, -1, !insn.addr !438
  br i1 %16, label %dec_label_pc_26d8, label %dec_label_pc_26c8, !insn.addr !438

dec_label_pc_26c8:                                ; preds = %dec_label_pc_26a8
  %17 = call i32 @close(i32 %13), !insn.addr !439
  store i64 4294967293, i64* %x0.0.reg2mem, !insn.addr !440
  store i64 %x19.1.reload, i64* %x19.0.reg2mem, !insn.addr !440
  br label %dec_label_pc_2688, !insn.addr !440

dec_label_pc_26d8:                                ; preds = %dec_label_pc_26a8
  %18 = call i32 @listen(i32 %13, i32 5), !insn.addr !441
  %19 = icmp sgt i32 %18, -1, !insn.addr !442
  %20 = call i32 @close(i32 %13)
  %. = select i1 %19, i64 42, i64 4294967292
  store i64 %., i64* %x0.0.reg2mem, !insn.addr !443
  store i64 %x19.1.reload, i64* %x19.0.reg2mem, !insn.addr !443
  br label %dec_label_pc_2688, !insn.addr !443

dec_label_pc_2710:                                ; preds = %dec_label_pc_2688
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !444

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
  %0 = call i64 @param_socket_create(), !insn.addr !445
  ret i64 %0, !insn.addr !445
}

define i64 @param_shmget_shmat() local_unnamed_addr {
dec_label_pc_2720:
  %x19.0.reg2mem = alloca i64, !insn.addr !446
  %0 = call i32 (i8*, i32, ...) @open(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_3393, i64 0, i64 0), i32 66), !insn.addr !447
  %1 = icmp sgt i32 %0, -1, !insn.addr !448
  store i64 4294967295, i64* %x19.0.reg2mem, !insn.addr !448
  br i1 %1, label %dec_label_pc_2764, label %dec_label_pc_2750, !insn.addr !448

dec_label_pc_2750:                                ; preds = %dec_label_pc_278c, %dec_label_pc_2778, %dec_label_pc_2720, %dec_label_pc_2764, %dec_label_pc_27a4
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  ret i64 %x19.0.reload, !insn.addr !449

dec_label_pc_2764:                                ; preds = %dec_label_pc_2720
  %2 = call i32 @close(i32 %0), !insn.addr !450
  %3 = call i32 @ftok(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_3393, i64 0, i64 0), i32 42), !insn.addr !451
  %4 = icmp slt i32 %3, 0, !insn.addr !452
  store i64 4294967295, i64* %x19.0.reg2mem, !insn.addr !452
  br i1 %4, label %dec_label_pc_2750, label %dec_label_pc_2778, !insn.addr !452

dec_label_pc_2778:                                ; preds = %dec_label_pc_2764
  %5 = call i32 @shmget(i32 %3, i32 ptrtoint (i64* (i64*)** @global_var_1000 to i32), i32 ptrtoint (i32* @global_var_3b6 to i32)), !insn.addr !453
  %6 = icmp slt i32 %5, 0, !insn.addr !454
  store i64 4294967294, i64* %x19.0.reg2mem, !insn.addr !454
  br i1 %6, label %dec_label_pc_2750, label %dec_label_pc_278c, !insn.addr !454

dec_label_pc_278c:                                ; preds = %dec_label_pc_2778
  %7 = call i64* @shmat(i32 %5, i64* null, i32 0), !insn.addr !455
  %8 = icmp eq i64* %7, inttoptr (i64 -1 to i64*), !insn.addr !456
  store i64 4294967293, i64* %x19.0.reg2mem, !insn.addr !457
  br i1 %8, label %dec_label_pc_2750, label %dec_label_pc_27a4, !insn.addr !457

dec_label_pc_27a4:                                ; preds = %dec_label_pc_278c
  %9 = bitcast i64* %7 to i8*, !insn.addr !458
  %10 = call i8* @strcpy(i8* %9, i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_33a5, i64 0, i64 0)), !insn.addr !458
  %11 = call i32 @strlen(i8* %9), !insn.addr !459
  %12 = zext i32 %11 to i64, !insn.addr !460
  %13 = call i32 @shmdt(i64* %7), !insn.addr !461
  %14 = call i32 @shmctl(i32 %5, i32 0, %shmid_ds* null), !insn.addr !462
  store i64 %12, i64* %x19.0.reg2mem, !insn.addr !463
  br label %dec_label_pc_2750, !insn.addr !463

; uselistorder directives
  uselistorder i64* %x19.0.reg2mem, { 5, 1, 2, 4, 0, 3 }
  uselistorder i32 (i8*)* @strlen, { 1, 2, 0, 3 }
  uselistorder i8* (i8*, i8*)* @strcpy, { 1, 0, 2 }
  uselistorder i32 (i32)* @close, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder label %dec_label_pc_2750, { 4, 0, 1, 3, 2 }
}

define i64 @call_shmget_shmat(i64 %arg1) local_unnamed_addr {
dec_label_pc_27e8:
  %0 = call i64 @param_shmget_shmat(), !insn.addr !464
  %1 = trunc i64 %0 to i32, !insn.addr !465
  %2 = icmp sgt i32 %1, 0, !insn.addr !465
  %. = select i1 %2, i64 42, i64 4294967295
  ret i64 %., !insn.addr !466
}

define i64 @param_signal_handling() local_unnamed_addr {
dec_label_pc_2808:
  %x20.16.reg2mem = alloca i64, !insn.addr !467
  %x20.08.reg2mem = alloca i64, !insn.addr !467
  %x0.0.reg2mem = alloca i64, !insn.addr !467
  %.lcssa.reg2mem = alloca i32, !insn.addr !467
  %.lcssa4.reg2mem = alloca i32, !insn.addr !467
  %0 = call void (i32)* @signal(i32 10, void (i32)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2388) to void (i32)*)), !insn.addr !468
  %1 = ptrtoint void (i32)* %0 to i64, !insn.addr !468
  %2 = icmp eq void (i32)* %0, inttoptr (i64 -1 to void (i32)*), !insn.addr !469
  store i64 %1, i64* %x0.0.reg2mem, !insn.addr !470
  br i1 %2, label %dec_label_pc_28d4, label %dec_label_pc_2830, !insn.addr !470

dec_label_pc_2830:                                ; preds = %dec_label_pc_2808
  %3 = call void (i32)* @signal(i32 14, void (i32)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2388) to void (i32)*)), !insn.addr !471
  %4 = icmp eq void (i32)* %3, inttoptr (i64 -1 to void (i32)*), !insn.addr !472
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !473
  br i1 %4, label %dec_label_pc_28d4, label %dec_label_pc_2844, !insn.addr !473

dec_label_pc_2844:                                ; preds = %dec_label_pc_2830
  store i32 0, i32* @global_var_15018, align 4, !insn.addr !474
  %5 = call i32 @raise(i32 10), !insn.addr !475
  %6 = load i32, i32* @global_var_15018, align 4, !insn.addr !476
  %7 = icmp ne i32 %6, 0, !insn.addr !477
  %or.cond7 = or i1 %7, icmp eq (i32 ptrtoint (i32* @global_var_3e9 to i32), i32 1)
  store i32 %6, i32* %.lcssa4.reg2mem, !insn.addr !477
  store i64 ptrtoint (i32* @global_var_3e9 to i64), i64* %x20.08.reg2mem, !insn.addr !477
  br i1 %or.cond7, label %dec_label_pc_2868, label %dec_label_pc_28e0, !insn.addr !477

dec_label_pc_2868:                                ; preds = %dec_label_pc_28e0, %dec_label_pc_2844
  %.lcssa4.reload = load i32, i32* %.lcssa4.reg2mem
  %8 = icmp eq i32 %.lcssa4.reload, 0, !insn.addr !478
  store i64 4294967293, i64* %x0.0.reg2mem, !insn.addr !478
  br i1 %8, label %dec_label_pc_28d4, label %dec_label_pc_2874, !insn.addr !478

dec_label_pc_2874:                                ; preds = %dec_label_pc_2868
  %9 = load i32, i32* @global_var_1501c, align 4, !insn.addr !479
  %10 = icmp eq i32 %9, 10, !insn.addr !480
  store i64 4294967292, i64* %x0.0.reg2mem, !insn.addr !480
  br i1 %10, label %dec_label_pc_2880, label %dec_label_pc_28d4, !insn.addr !480

dec_label_pc_2880:                                ; preds = %dec_label_pc_2874
  store i32 0, i32* @global_var_15018, align 4, !insn.addr !481
  %11 = call i32 @alarm(i32 1), !insn.addr !482
  %12 = load i32, i32* @global_var_15018, align 4, !insn.addr !483
  %13 = icmp ne i32 %12, 0, !insn.addr !484
  %or.cond35 = or i1 %13, icmp eq (i32 ptrtoint (i32* @global_var_7d1 to i32), i32 1)
  store i32 %12, i32* %.lcssa.reg2mem, !insn.addr !484
  store i64 ptrtoint (i32* @global_var_7d1 to i64), i64* %x20.16.reg2mem, !insn.addr !484
  br i1 %or.cond35, label %dec_label_pc_28a0, label %dec_label_pc_28ec, !insn.addr !484

dec_label_pc_28a0:                                ; preds = %dec_label_pc_28ec, %dec_label_pc_2880
  %.lcssa.reload = load i32, i32* %.lcssa.reg2mem
  %14 = icmp ne i32 %.lcssa.reload, 0, !insn.addr !485
  %15 = load i32, i32* @global_var_1501c, align 4, !insn.addr !486
  %16 = icmp eq i32 %15, 14, !insn.addr !487
  %or.cond13 = icmp eq i1 %14, %16
  store i64 4294967291, i64* %x0.0.reg2mem, !insn.addr !485
  br i1 %or.cond13, label %dec_label_pc_28b8, label %dec_label_pc_28d4, !insn.addr !485

dec_label_pc_28b8:                                ; preds = %dec_label_pc_28a0
  %17 = call void (i32)* @signal(i32 10, void (i32)* null), !insn.addr !488
  %18 = call void (i32)* @signal(i32 14, void (i32)* null), !insn.addr !489
  store i64 42, i64* %x0.0.reg2mem, !insn.addr !490
  br label %dec_label_pc_28d4, !insn.addr !490

dec_label_pc_28d4:                                ; preds = %dec_label_pc_28a0, %dec_label_pc_2874, %dec_label_pc_2868, %dec_label_pc_2830, %dec_label_pc_28b8, %dec_label_pc_2808
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !491

dec_label_pc_28e0:                                ; preds = %dec_label_pc_2844, %dec_label_pc_28e0
  %x20.08.reload = load i64, i64* %x20.08.reg2mem
  %19 = add i64 %x20.08.reload, 4294967295, !insn.addr !492
  %20 = and i64 %19, 4294967295, !insn.addr !492
  %21 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !493
  %22 = load i32, i32* @global_var_15018, align 4, !insn.addr !476
  %23 = icmp ne i32 %22, 0, !insn.addr !477
  %24 = trunc i64 %19 to i32, !insn.addr !494
  %25 = icmp eq i32 %24, 1, !insn.addr !494
  %or.cond = or i1 %23, %25
  store i32 %22, i32* %.lcssa4.reg2mem, !insn.addr !477
  store i64 %20, i64* %x20.08.reg2mem, !insn.addr !477
  br i1 %or.cond, label %dec_label_pc_2868, label %dec_label_pc_28e0, !insn.addr !477

dec_label_pc_28ec:                                ; preds = %dec_label_pc_2880, %dec_label_pc_28ec
  %x20.16.reload = load i64, i64* %x20.16.reg2mem
  %26 = add i64 %x20.16.reload, 4294967295, !insn.addr !495
  %27 = and i64 %26, 4294967295, !insn.addr !495
  %28 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !496
  %29 = load i32, i32* @global_var_15018, align 4, !insn.addr !483
  %30 = icmp ne i32 %29, 0, !insn.addr !484
  %31 = trunc i64 %26 to i32, !insn.addr !497
  %32 = icmp eq i32 %31, 1, !insn.addr !497
  %or.cond3 = or i1 %30, %32
  store i32 %29, i32* %.lcssa.reg2mem, !insn.addr !484
  store i64 %27, i64* %x20.16.reg2mem, !insn.addr !484
  br i1 %or.cond3, label %dec_label_pc_28a0, label %dec_label_pc_28ec, !insn.addr !484

; uselistorder directives
  uselistorder i32* %.lcssa4.reg2mem, { 1, 0, 2 }
  uselistorder i32* %.lcssa.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x0.0.reg2mem, { 0, 5, 1, 2, 3, 4, 6 }
  uselistorder i64* %x20.08.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x20.16.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i32)* @usleep, { 1, 0, 2, 3 }
  uselistorder i32 ptrtoint (i32* @global_var_3e8 to i32), { 1, 0, 2 }
  uselistorder i32* @global_var_7d1, { 1, 0 }
  uselistorder i32* @global_var_1501c, { 0, 2, 1 }
  uselistorder i32* @global_var_3e9, { 1, 0 }
  uselistorder i32* @global_var_15018, { 6, 4, 1, 5, 0, 3, 2 }
  uselistorder i32 14, { 1, 0, 2 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i32 10, { 1, 4, 2, 3, 0 }
  uselistorder label %dec_label_pc_28ec, { 1, 0 }
  uselistorder label %dec_label_pc_28e0, { 1, 0 }
  uselistorder label %dec_label_pc_28d4, { 4, 0, 1, 2, 3, 5 }
}

define i64 @call_signal_handling() local_unnamed_addr {
dec_label_pc_2918:
  %0 = call i64 @param_signal_handling(), !insn.addr !498
  ret i64 %0, !insn.addr !498
}

define i64 @test_system_calls(i64 %arg1) local_unnamed_addr {
dec_label_pc_291c:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_33b2 to i8*)), !insn.addr !499
  %1 = call i64 @call_linux_syscall(i64 ptrtoint (i32* @0 to i64)), !insn.addr !500
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_33cd to i8*)), !insn.addr !501
  %3 = sext i32 %2 to i64, !insn.addr !501
  %4 = call i64 @call_win32_api(i64 %3), !insn.addr !502
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_33e9 to i8*)), !insn.addr !503
  %6 = call i64 @call_fork_exec(i64 ptrtoint (i32* @0 to i64)), !insn.addr !504
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3405 to i8*)), !insn.addr !505
  %8 = call i64 @param_pipe_communication(), !insn.addr !506
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3421 to i8*)), !insn.addr !507
  %10 = call i64 @param_socket_create(), !insn.addr !508
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_343d to i8*)), !insn.addr !509
  %12 = call i64 @call_shmget_shmat(i64 ptrtoint (i32* @0 to i64)), !insn.addr !510
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3459 to i8*)), !insn.addr !511
  %14 = call i64 @param_signal_handling(), !insn.addr !512
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3475 to i8*)), !insn.addr !513
  %16 = sext i32 %15 to i64, !insn.addr !513
  ret i64 %16, !insn.addr !513

; uselistorder directives
  uselistorder i64 ptrtoint (i32* @0 to i64), { 5, 6, 7, 8, 0, 1, 2, 9, 3, 10, 11, 4, 12, 13, 14, 15 }
}

define i64 @param_pthread_create() local_unnamed_addr {
dec_label_pc_29dc:
  %0 = alloca i64
  %x19.0.reg2mem = alloca i64, !insn.addr !514
  %1 = load i64, i64* %0
  %stack_var_-8 = alloca i64, align 8
  %stack_var_-16 = alloca i32, align 4
  %stack_var_-20 = alloca i64, align 8
  %2 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !515
  %3 = inttoptr i64 %2 to i64*, !insn.addr !516
  %4 = load i64, i64* %3, align 8, !insn.addr !516
  %sext = mul i64 %1, 4294967296
  %5 = ashr exact i64 %sext, 32, !insn.addr !517
  store i64 %5, i64* %stack_var_-20, align 8, !insn.addr !517
  %6 = call i32 @pthread_create(i32* nonnull %stack_var_-16, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2456) to i64* (i64*)*), i64* nonnull %stack_var_-20), !insn.addr !518
  %7 = icmp eq i32 %6, 0, !insn.addr !519
  br i1 %7, label %dec_label_pc_2a1c, label %dec_label_pc_2a54, !insn.addr !519

dec_label_pc_2a1c:                                ; preds = %dec_label_pc_29dc
  %8 = load i32, i32* %stack_var_-16, align 4, !insn.addr !520
  %9 = bitcast i64* %stack_var_-8 to i64**, !insn.addr !521
  %10 = call i32 @pthread_join(i32 %8, i64** nonnull %9), !insn.addr !521
  %11 = load i64, i64* %stack_var_-8, align 8, !insn.addr !522
  %12 = inttoptr i64 %11 to i32*, !insn.addr !523
  %13 = load i32, i32* %12, align 4, !insn.addr !523
  %14 = zext i32 %13 to i64, !insn.addr !523
  %15 = inttoptr i64 %11 to i64*, !insn.addr !524
  call void @free(i64* %15), !insn.addr !524
  store i64 %14, i64* %x19.0.reg2mem, !insn.addr !524
  br label %dec_label_pc_2a34, !insn.addr !524

dec_label_pc_2a34:                                ; preds = %dec_label_pc_2a54, %dec_label_pc_2a1c
  %16 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !525
  %17 = inttoptr i64 %16 to i64*, !insn.addr !526
  %18 = load i64, i64* %17, align 8, !insn.addr !526
  %19 = icmp eq i64 %4, %18, !insn.addr !527
  br i1 %19, label %dec_label_pc_2a5c, label %dec_label_pc_2a50, !insn.addr !528

dec_label_pc_2a50:                                ; preds = %dec_label_pc_2a34
  call void @__stack_chk_fail(), !insn.addr !529
  br label %dec_label_pc_2a54, !insn.addr !529

dec_label_pc_2a54:                                ; preds = %dec_label_pc_29dc, %dec_label_pc_2a50
  store i64 4294967295, i64* %x19.0.reg2mem, !insn.addr !530
  br label %dec_label_pc_2a34, !insn.addr !530

dec_label_pc_2a5c:                                ; preds = %dec_label_pc_2a34
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  ret i64 %x19.0.reload, !insn.addr !531

; uselistorder directives
  uselistorder i64 %11, { 1, 0 }
  uselistorder i64* %stack_var_-8, { 1, 0 }
  uselistorder label %dec_label_pc_2a54, { 1, 0 }
}

define i64 @call_pthread_create(i64 %arg1) local_unnamed_addr {
dec_label_pc_2a6c:
  %0 = call i64 @param_pthread_create(), !insn.addr !532
  ret i64 %0, !insn.addr !532
}

define i64 @param_pthread_join() local_unnamed_addr {
dec_label_pc_2a74:
  %x20.1.reg2mem = alloca i64, !insn.addr !533
  %x20.1.ph.reg2mem = alloca i64, !insn.addr !533
  %x21.1.reg2mem = alloca i64, !insn.addr !533
  %x20.0.reg2mem = alloca i32, !insn.addr !533
  %x19.0.reg2mem = alloca i64, !insn.addr !533
  %x23.0.reg2mem = alloca i64, !insn.addr !533
  %x22.0.reg2mem = alloca i64, !insn.addr !533
  %x21.0.reg2mem = alloca i64, !insn.addr !533
  %stack_var_-64 = alloca i64, align 8
  %stack_var_-40 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !534
  %1 = ptrtoint i64* %stack_var_-40 to i64, !insn.addr !535
  %2 = ptrtoint i64* %stack_var_-64 to i64, !insn.addr !536
  %3 = inttoptr i64 %0 to i64*, !insn.addr !537
  %4 = load i64, i64* %3, align 8, !insn.addr !537
  store i64 4294967306, i64* %stack_var_-40, align 8, !insn.addr !538
  store i64 %2, i64* %x21.0.reg2mem, !insn.addr !538
  store i64 3, i64* %x22.0.reg2mem, !insn.addr !538
  store i64 %1, i64* %x23.0.reg2mem, !insn.addr !538
  br label %dec_label_pc_2ad8, !insn.addr !538

dec_label_pc_2ad8:                                ; preds = %dec_label_pc_2af4, %dec_label_pc_2a74
  %x23.0.reload = load i64, i64* %x23.0.reg2mem
  %x21.0.reload = load i64, i64* %x21.0.reg2mem
  %5 = inttoptr i64 %x21.0.reload to i32*, !insn.addr !539
  %6 = inttoptr i64 %x23.0.reload to i64*, !insn.addr !539
  %7 = call i32 @pthread_create(i32* %5, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2412) to i64* (i64*)*), i64* %6), !insn.addr !539
  %8 = icmp eq i32 %7, 0, !insn.addr !540
  br i1 %8, label %dec_label_pc_2af4, label %dec_label_pc_2b50, !insn.addr !540

dec_label_pc_2af4:                                ; preds = %dec_label_pc_2ad8
  %x22.0.reload = load i64, i64* %x22.0.reg2mem
  %9 = add i64 %x21.0.reload, 8, !insn.addr !541
  %10 = add i64 %x23.0.reload, 12, !insn.addr !542
  %11 = add nuw nsw i64 %x22.0.reload, 4294967295, !insn.addr !543
  %12 = and i64 %11, 4294967295, !insn.addr !543
  %13 = icmp eq i64 %x22.0.reload, 1, !insn.addr !544
  store i64 %9, i64* %x21.0.reg2mem, !insn.addr !544
  store i64 %12, i64* %x22.0.reg2mem, !insn.addr !544
  store i64 %10, i64* %x23.0.reg2mem, !insn.addr !544
  store i64 %1, i64* %x19.0.reg2mem, !insn.addr !544
  store i32 0, i32* %x20.0.reg2mem, !insn.addr !544
  store i64 0, i64* %x21.1.reg2mem, !insn.addr !544
  br i1 %13, label %dec_label_pc_2b08, label %dec_label_pc_2ad8, !insn.addr !544

dec_label_pc_2b08:                                ; preds = %dec_label_pc_2af4, %dec_label_pc_2b18
  %x21.1.reload = load i64, i64* %x21.1.reg2mem
  %14 = mul i64 %x21.1.reload, 8, !insn.addr !545
  %15 = add i64 %14, %2, !insn.addr !545
  %16 = inttoptr i64 %15 to i64*, !insn.addr !545
  %17 = load i64, i64* %16, align 8, !insn.addr !545
  %18 = trunc i64 %17 to i32, !insn.addr !546
  %19 = call i32 @pthread_join(i32 %18, i64** null), !insn.addr !546
  %20 = icmp eq i32 %19, 0, !insn.addr !547
  store i64 4294967294, i64* %x20.1.ph.reg2mem, !insn.addr !547
  br i1 %20, label %dec_label_pc_2b18, label %dec_label_pc_2b30.loopexit, !insn.addr !547

dec_label_pc_2b18:                                ; preds = %dec_label_pc_2b08
  %x20.0.reload = load i32, i32* %x20.0.reg2mem
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  %21 = add i64 %x19.0.reload, 8, !insn.addr !548
  %22 = inttoptr i64 %21 to i32*, !insn.addr !548
  %23 = load i32, i32* %22, align 4, !insn.addr !548
  %24 = add nuw nsw i64 %x21.1.reload, 1, !insn.addr !549
  %25 = add i64 %x19.0.reload, 12, !insn.addr !550
  %26 = add i32 %23, %x20.0.reload, !insn.addr !551
  %27 = icmp eq i64 %24, 3, !insn.addr !552
  store i64 %25, i64* %x19.0.reg2mem, !insn.addr !552
  store i32 %26, i32* %x20.0.reg2mem, !insn.addr !552
  store i64 %24, i64* %x21.1.reg2mem, !insn.addr !552
  br i1 %27, label %dec_label_pc_2b30.loopexit.split.loop.exit, label %dec_label_pc_2b08, !insn.addr !552

dec_label_pc_2b30.loopexit.split.loop.exit:       ; preds = %dec_label_pc_2b18
  %28 = zext i32 %26 to i64, !insn.addr !551
  store i64 %28, i64* %x20.1.ph.reg2mem
  br label %dec_label_pc_2b30.loopexit

dec_label_pc_2b30.loopexit:                       ; preds = %dec_label_pc_2b08, %dec_label_pc_2b30.loopexit.split.loop.exit
  %x20.1.ph.reload = load i64, i64* %x20.1.ph.reg2mem
  store i64 %x20.1.ph.reload, i64* %x20.1.reg2mem
  br label %dec_label_pc_2b30

dec_label_pc_2b30:                                ; preds = %dec_label_pc_2b30.loopexit, %dec_label_pc_2b50
  %29 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !553
  %30 = inttoptr i64 %29 to i64*, !insn.addr !554
  %31 = load i64, i64* %30, align 8, !insn.addr !554
  %32 = icmp eq i64 %4, %31, !insn.addr !555
  br i1 %32, label %dec_label_pc_2b60, label %dec_label_pc_2b4c, !insn.addr !556

dec_label_pc_2b4c:                                ; preds = %dec_label_pc_2b30
  call void @__stack_chk_fail(), !insn.addr !557
  br label %dec_label_pc_2b50, !insn.addr !557

dec_label_pc_2b50:                                ; preds = %dec_label_pc_2ad8, %dec_label_pc_2b4c
  store i64 4294967295, i64* %x20.1.reg2mem, !insn.addr !558
  br label %dec_label_pc_2b30, !insn.addr !558

dec_label_pc_2b60:                                ; preds = %dec_label_pc_2b30
  %x20.1.reload = load i64, i64* %x20.1.reg2mem
  ret i64 %x20.1.reload, !insn.addr !559

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
  uselistorder i64 12, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2b50, { 1, 0 }
  uselistorder label %dec_label_pc_2b30, { 1, 0 }
  uselistorder label %dec_label_pc_2b30.loopexit, { 1, 0 }
  uselistorder label %dec_label_pc_2b08, { 1, 0 }
}

define i64 @call_pthread_join() local_unnamed_addr {
dec_label_pc_2b7c:
  %0 = call i64 @param_pthread_join(), !insn.addr !560
  ret i64 %0, !insn.addr !560
}

define i64 @param_mutex_lock() local_unnamed_addr {
dec_label_pc_2b80:
  %0 = alloca i64
  %x22.11.reg2mem = alloca i64, !insn.addr !561
  %x0.0.reg2mem = alloca i64, !insn.addr !561
  %x22.0.reg2mem = alloca i64, !insn.addr !561
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %stack_var_4 = alloca i32, align 4
  %3 = call i64 @__asm_sbfiz(i64 %2, i64 %2, i64 3, i64 32), !insn.addr !562
  %4 = trunc i64 %1 to i32, !insn.addr !563
  store i32 %4, i32* %stack_var_4, align 4, !insn.addr !563
  %5 = trunc i64 %3 to i32, !insn.addr !564
  %6 = call i64* @malloc(i32 %5), !insn.addr !564
  %7 = icmp eq i64* %6, null, !insn.addr !565
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !565
  br i1 %7, label %dec_label_pc_2c30, label %dec_label_pc_2ba8, !insn.addr !565

dec_label_pc_2ba8:                                ; preds = %dec_label_pc_2b80
  %8 = and i64 %2, 4294967295, !insn.addr !566
  %9 = ptrtoint i64* %6 to i64, !insn.addr !564
  store i32 0, i32* @global_var_15050, align 4, !insn.addr !567
  %10 = bitcast i32* %stack_var_4 to i64*
  store i64 0, i64* %x22.0.reg2mem, !insn.addr !567
  br label %dec_label_pc_2bc8, !insn.addr !567

dec_label_pc_2bc8:                                ; preds = %dec_label_pc_2c08, %dec_label_pc_2ba8
  %x22.0.reload = load i64, i64* %x22.0.reg2mem
  %11 = icmp ugt i64 %8, %x22.0.reload, !insn.addr !568
  br i1 %11, label %dec_label_pc_2c08, label %dec_label_pc_2bd4.preheader, !insn.addr !568

dec_label_pc_2bd4.preheader:                      ; preds = %dec_label_pc_2bc8
  %12 = icmp eq i64 %8, 0, !insn.addr !569
  store i64 0, i64* %x22.11.reg2mem, !insn.addr !569
  br i1 %12, label %dec_label_pc_2bdc, label %dec_label_pc_2c44, !insn.addr !569

dec_label_pc_2bdc:                                ; preds = %dec_label_pc_2c44, %dec_label_pc_2bd4.preheader
  call void @free(i64* nonnull %6), !insn.addr !570
  %13 = load i32, i32* %stack_var_4, align 4, !insn.addr !571
  %14 = load i32, i32* @global_var_15050, align 4, !insn.addr !572
  %15 = trunc i64 %2 to i32, !insn.addr !573
  %16 = mul i32 %13, %15, !insn.addr !573
  %17 = icmp eq i32 %14, %16, !insn.addr !574
  %18 = select i1 %17, i64 42, i64 4294967293, !insn.addr !575
  store i64 %18, i64* %x0.0.reg2mem, !insn.addr !576
  br label %dec_label_pc_2c30, !insn.addr !576

dec_label_pc_2c08:                                ; preds = %dec_label_pc_2bc8
  %19 = mul i64 %x22.0.reload, 8, !insn.addr !577
  %20 = add i64 %19, %9, !insn.addr !577
  %21 = add nuw nsw i64 %x22.0.reload, 1, !insn.addr !578
  %22 = inttoptr i64 %20 to i32*, !insn.addr !579
  %23 = call i32 @pthread_create(i32* %22, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2500) to i64* (i64*)*), i64* nonnull %10), !insn.addr !579
  %24 = icmp eq i32 %23, 0, !insn.addr !580
  store i64 %21, i64* %x22.0.reg2mem, !insn.addr !580
  br i1 %24, label %dec_label_pc_2bc8, label %dec_label_pc_2c24, !insn.addr !580

dec_label_pc_2c24:                                ; preds = %dec_label_pc_2c08
  call void @free(i64* nonnull %6), !insn.addr !581
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !582
  br label %dec_label_pc_2c30, !insn.addr !582

dec_label_pc_2c30:                                ; preds = %dec_label_pc_2b80, %dec_label_pc_2c24, %dec_label_pc_2bdc
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !583

dec_label_pc_2c44:                                ; preds = %dec_label_pc_2bd4.preheader, %dec_label_pc_2c44
  %x22.11.reload = load i64, i64* %x22.11.reg2mem
  %25 = mul i64 %x22.11.reload, 8, !insn.addr !584
  %26 = add i64 %25, %9, !insn.addr !584
  %27 = inttoptr i64 %26 to i64*, !insn.addr !584
  %28 = load i64, i64* %27, align 8, !insn.addr !584
  %29 = add nuw nsw i64 %x22.11.reload, 1, !insn.addr !585
  %30 = trunc i64 %28 to i32, !insn.addr !586
  %31 = call i32 @pthread_join(i32 %30, i64** null), !insn.addr !586
  %exitcond = icmp eq i64 %29, %8
  store i64 %29, i64* %x22.11.reg2mem, !insn.addr !569
  br i1 %exitcond, label %dec_label_pc_2bdc, label %dec_label_pc_2c44, !insn.addr !569

; uselistorder directives
  uselistorder i64 %x22.0.reload, { 0, 2, 1 }
  uselistorder i64 %9, { 1, 0 }
  uselistorder i64* %6, { 0, 1, 3, 2 }
  uselistorder i32* %stack_var_4, { 1, 0, 2 }
  uselistorder i64 %2, { 3, 2, 0, 1 }
  uselistorder i64* %x22.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x0.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64* %x22.11.reg2mem, { 2, 0, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i32* @global_var_15050, { 2, 1, 0 }
  uselistorder label %dec_label_pc_2c44, { 1, 0 }
  uselistorder label %dec_label_pc_2c30, { 1, 2, 0 }
}

define i64 @call_mutex_lock(i64 %arg1) local_unnamed_addr {
dec_label_pc_2c60:
  %0 = call i64 @param_mutex_lock(), !insn.addr !587
  ret i64 %0, !insn.addr !587
}

define i64 @param_condition_variable() local_unnamed_addr {
dec_label_pc_2c6c:
  %x19.0.reg2mem = alloca i64, !insn.addr !588
  %stack_var_-8 = alloca i64, align 8
  %stack_var_-24 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  %0 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !589
  %1 = inttoptr i64 %0 to i64*, !insn.addr !590
  %2 = load i64, i64* %1, align 8, !insn.addr !590
  store i32 0, i32* @global_var_150b8, align 4, !insn.addr !591
  store i32 0, i32* @global_var_150bc, align 4, !insn.addr !591
  %3 = call i32 @pthread_create(i32* nonnull %stack_var_-16, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2608) to i64* (i64*)*), i64* null), !insn.addr !592
  %4 = icmp eq i32 %3, 0, !insn.addr !593
  store i64 4294967295, i64* %x19.0.reg2mem, !insn.addr !593
  br i1 %4, label %dec_label_pc_2cb0, label %dec_label_pc_2cd8, !insn.addr !593

dec_label_pc_2cb0:                                ; preds = %dec_label_pc_2c6c
  %5 = call i32 @pthread_create(i32* nonnull %stack_var_-24, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2712) to i64* (i64*)*), i64* null), !insn.addr !594
  %6 = icmp eq i32 %5, 0, !insn.addr !595
  br i1 %6, label %dec_label_pc_2cf8, label %dec_label_pc_2ccc, !insn.addr !595

dec_label_pc_2ccc:                                ; preds = %dec_label_pc_2cb0
  %7 = load i32, i32* %stack_var_-16, align 4, !insn.addr !596
  %8 = call i32 @pthread_cancel(i32 %7), !insn.addr !597
  store i64 4294967294, i64* %x19.0.reg2mem, !insn.addr !597
  br label %dec_label_pc_2cd8, !insn.addr !597

dec_label_pc_2cd8:                                ; preds = %dec_label_pc_2c6c, %dec_label_pc_2cf8, %dec_label_pc_2ccc
  %9 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !598
  %10 = inttoptr i64 %9 to i64*, !insn.addr !599
  %11 = load i64, i64* %10, align 8, !insn.addr !599
  %12 = icmp eq i64 %2, %11, !insn.addr !600
  br i1 %12, label %dec_label_pc_2d28, label %dec_label_pc_2cf4, !insn.addr !601

dec_label_pc_2cf4:                                ; preds = %dec_label_pc_2cd8
  call void @__stack_chk_fail(), !insn.addr !602
  br label %dec_label_pc_2cf8, !insn.addr !602

dec_label_pc_2cf8:                                ; preds = %dec_label_pc_2cf4, %dec_label_pc_2cb0
  %13 = load i32, i32* %stack_var_-16, align 4, !insn.addr !603
  %14 = bitcast i64* %stack_var_-8 to i64**, !insn.addr !604
  %15 = call i32 @pthread_join(i32 %13, i64** nonnull %14), !insn.addr !604
  %16 = load i32, i32* %stack_var_-24, align 4, !insn.addr !605
  %17 = call i32 @pthread_join(i32 %16, i64** null), !insn.addr !606
  %18 = load i64, i64* %stack_var_-8, align 8, !insn.addr !607
  %19 = inttoptr i64 %18 to i32*, !insn.addr !608
  %20 = load i32, i32* %19, align 4, !insn.addr !608
  %21 = zext i32 %20 to i64, !insn.addr !608
  %22 = inttoptr i64 %18 to i64*, !insn.addr !609
  call void @free(i64* %22), !insn.addr !609
  store i64 %21, i64* %x19.0.reg2mem, !insn.addr !610
  br label %dec_label_pc_2cd8, !insn.addr !610

dec_label_pc_2d28:                                ; preds = %dec_label_pc_2cd8
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  ret i64 %x19.0.reload, !insn.addr !611

; uselistorder directives
  uselistorder i64 %18, { 1, 0 }
  uselistorder i32* %stack_var_-16, { 1, 0, 2 }
  uselistorder i64* %stack_var_-8, { 1, 0 }
  uselistorder i64* %x19.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32* @global_var_150bc, { 2, 1, 0 }
  uselistorder i32* @global_var_150b8, { 3, 2, 1, 0 }
  uselistorder label %dec_label_pc_2cd8, { 1, 2, 0 }
}

define i64 @call_condition_variable() local_unnamed_addr {
dec_label_pc_2d38:
  %0 = call i64 @param_condition_variable(), !insn.addr !612
  ret i64 %0, !insn.addr !612
}

define i64 @param_atomic_ops() local_unnamed_addr {
dec_label_pc_2d3c:
  %0 = alloca i64
  %x22.3.reg2mem = alloca i64, !insn.addr !613
  %x20.2.reg2mem = alloca i64, !insn.addr !613
  %x19.2.reg2mem = alloca i64, !insn.addr !613
  %x22.2.reg2mem = alloca i64, !insn.addr !613
  %x20.1.reg2mem = alloca i64, !insn.addr !613
  %x19.1.reg2mem = alloca i64, !insn.addr !613
  %x0.0.reg2mem = alloca i64, !insn.addr !613
  %x22.1.reg2mem = alloca i64, !insn.addr !613
  %x20.0.reg2mem = alloca i64, !insn.addr !613
  %x19.0.reg2mem = alloca i64, !insn.addr !613
  %x22.0.reg2mem = alloca i64, !insn.addr !613
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %stack_var_-8 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %3 = and i64 %2, 4294967295, !insn.addr !614
  %4 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !615
  %5 = trunc i64 %1 to i32, !insn.addr !616
  store i32 %5, i32* %stack_var_-12, align 4, !insn.addr !616
  %6 = inttoptr i64 %4 to i64*, !insn.addr !617
  %7 = load i64, i64* %6, align 8, !insn.addr !617
  %8 = call i64 @__asm_sbfiz(i64 %4, i64 %3, i64 3, i64 32), !insn.addr !618
  %9 = trunc i64 %8 to i32, !insn.addr !619
  %10 = call i64* @malloc(i32 %9), !insn.addr !619
  %11 = icmp eq i64* %10, null, !insn.addr !620
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !620
  br i1 %11, label %dec_label_pc_2e28, label %dec_label_pc_2d78, !insn.addr !620

dec_label_pc_2d78:                                ; preds = %dec_label_pc_2d3c
  %12 = ptrtoint i64* %10 to i64, !insn.addr !619
  %13 = load i32, i32* @global_var_150c0, align 4, !insn.addr !621
  %14 = sext i32 %13 to i64, !insn.addr !621
  call void @__asm_stlr(i32 0, i64 %14), !insn.addr !621
  %15 = bitcast i32* %stack_var_-12 to i64*
  store i64 0, i64* %x22.0.reg2mem, !insn.addr !622
  br label %dec_label_pc_2d9c, !insn.addr !622

dec_label_pc_2d9c:                                ; preds = %dec_label_pc_2e00, %dec_label_pc_2d78
  %x22.0.reload = load i64, i64* %x22.0.reg2mem
  %16 = icmp ugt i64 %3, %x22.0.reload, !insn.addr !623
  br i1 %16, label %dec_label_pc_2e00, label %dec_label_pc_2da4, !insn.addr !623

dec_label_pc_2da4:                                ; preds = %dec_label_pc_2d9c
  %17 = call i32 @pthread_create(i32* nonnull %stack_var_-8, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2900) to i64* (i64*)*), i64* null), !insn.addr !624
  %18 = icmp eq i32 %17, 0, !insn.addr !625
  store i64 %12, i64* %x19.0.reg2mem, !insn.addr !625
  store i64 ptrtoint (i8** @global_var_15000 to i64), i64* %x20.0.reg2mem, !insn.addr !625
  store i64 0, i64* %x22.1.reg2mem, !insn.addr !625
  br i1 %18, label %dec_label_pc_2dc0, label %dec_label_pc_2dd0, !insn.addr !625

dec_label_pc_2dc0:                                ; preds = %dec_label_pc_2da4
  %19 = load i32, i32* %stack_var_-8, align 4, !insn.addr !626
  %20 = call i32 @pthread_join(i32 %19, i64** null), !insn.addr !627
  store i64 %12, i64* %x19.0.reg2mem, !insn.addr !627
  store i64 ptrtoint (i8** @global_var_15000 to i64), i64* %x20.0.reg2mem, !insn.addr !627
  store i64 0, i64* %x22.1.reg2mem, !insn.addr !627
  br label %dec_label_pc_2dd0, !insn.addr !627

dec_label_pc_2dd0:                                ; preds = %dec_label_pc_2dc0, %dec_label_pc_2da4, %dec_label_pc_2e48
  %x22.1.reload = load i64, i64* %x22.1.reg2mem
  %x20.0.reload = load i64, i64* %x20.0.reg2mem
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  %21 = icmp sgt i64 %3, %x22.1.reload, !insn.addr !628
  store i64 %x19.0.reload, i64* %x19.2.reg2mem, !insn.addr !628
  store i64 %x20.0.reload, i64* %x20.2.reg2mem, !insn.addr !628
  store i64 %x22.1.reload, i64* %x22.3.reg2mem, !insn.addr !628
  br i1 %21, label %dec_label_pc_2e48, label %dec_label_pc_2dd8, !insn.addr !628

dec_label_pc_2dd8:                                ; preds = %dec_label_pc_2dd0
  %22 = add i64 %x20.0.reload, 192, !insn.addr !629
  %23 = inttoptr i64 %22 to i32*, !insn.addr !630
  %24 = load i32, i32* %23, align 4, !insn.addr !630
  %25 = zext i32 %24 to i64, !insn.addr !630
  %26 = inttoptr i64 %x19.0.reload to i64*, !insn.addr !631
  call void @free(i64* %26), !insn.addr !631
  %27 = icmp slt i32 %24, 1
  %28 = select i1 %27, i64 4294967293, i64 42, !insn.addr !632
  store i64 %28, i64* %x0.0.reg2mem, !insn.addr !633
  store i64 %x19.0.reload, i64* %x19.1.reg2mem, !insn.addr !633
  store i64 %25, i64* %x20.1.reg2mem, !insn.addr !633
  store i64 %x22.1.reload, i64* %x22.2.reg2mem, !insn.addr !633
  br label %dec_label_pc_2e28, !insn.addr !633

dec_label_pc_2e00:                                ; preds = %dec_label_pc_2d9c
  %29 = mul i64 %x22.0.reload, 8, !insn.addr !634
  %30 = add i64 %29, %12, !insn.addr !634
  %31 = add nuw nsw i64 %x22.0.reload, 1, !insn.addr !635
  %32 = inttoptr i64 %30 to i32*, !insn.addr !636
  %33 = call i32 @pthread_create(i32* %32, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2800) to i64* (i64*)*), i64* nonnull %15), !insn.addr !636
  %34 = icmp eq i32 %33, 0, !insn.addr !637
  store i64 %31, i64* %x22.0.reg2mem, !insn.addr !637
  br i1 %34, label %dec_label_pc_2d9c, label %dec_label_pc_2e1c, !insn.addr !637

dec_label_pc_2e1c:                                ; preds = %dec_label_pc_2e00
  call void @free(i64* nonnull %10), !insn.addr !638
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !639
  store i64 %12, i64* %x19.1.reg2mem, !insn.addr !639
  store i64 ptrtoint (i8** @global_var_15000 to i64), i64* %x20.1.reg2mem, !insn.addr !639
  store i64 %31, i64* %x22.2.reg2mem, !insn.addr !639
  br label %dec_label_pc_2e28, !insn.addr !639

dec_label_pc_2e28:                                ; preds = %dec_label_pc_2d3c, %dec_label_pc_2e1c, %dec_label_pc_2dd8
  %35 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !640
  %36 = inttoptr i64 %35 to i64*, !insn.addr !641
  %37 = load i64, i64* %36, align 8, !insn.addr !641
  %38 = icmp eq i64 %7, %37, !insn.addr !642
  br i1 %38, label %dec_label_pc_2e64, label %dec_label_pc_2e44, !insn.addr !643

dec_label_pc_2e44:                                ; preds = %dec_label_pc_2e28
  %x22.2.reload = load i64, i64* %x22.2.reg2mem
  %x20.1.reload = load i64, i64* %x20.1.reg2mem
  %x19.1.reload = load i64, i64* %x19.1.reg2mem
  call void @__stack_chk_fail(), !insn.addr !644
  store i64 %x19.1.reload, i64* %x19.2.reg2mem, !insn.addr !644
  store i64 %x20.1.reload, i64* %x20.2.reg2mem, !insn.addr !644
  store i64 %x22.2.reload, i64* %x22.3.reg2mem, !insn.addr !644
  br label %dec_label_pc_2e48, !insn.addr !644

dec_label_pc_2e48:                                ; preds = %dec_label_pc_2e44, %dec_label_pc_2dd0
  %x22.3.reload = load i64, i64* %x22.3.reg2mem
  %x20.2.reload = load i64, i64* %x20.2.reg2mem
  %x19.2.reload = load i64, i64* %x19.2.reg2mem
  %39 = mul i64 %x22.3.reload, 8, !insn.addr !645
  %40 = add i64 %39, %x19.2.reload, !insn.addr !645
  %41 = inttoptr i64 %40 to i64*, !insn.addr !645
  %42 = load i64, i64* %41, align 8, !insn.addr !645
  %43 = add i64 %x22.3.reload, 1, !insn.addr !646
  %44 = trunc i64 %42 to i32, !insn.addr !647
  %45 = call i32 @pthread_join(i32 %44, i64** null), !insn.addr !647
  store i64 %x19.2.reload, i64* %x19.0.reg2mem, !insn.addr !648
  store i64 %x20.2.reload, i64* %x20.0.reg2mem, !insn.addr !648
  store i64 %43, i64* %x22.1.reg2mem, !insn.addr !648
  br label %dec_label_pc_2dd0, !insn.addr !648

dec_label_pc_2e64:                                ; preds = %dec_label_pc_2e28
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !649

; uselistorder directives
  uselistorder i64 %x19.2.reload, { 1, 0 }
  uselistorder i64 %x19.0.reload, { 1, 2, 0 }
  uselistorder i64 %x20.0.reload, { 1, 0 }
  uselistorder i64 %x22.1.reload, { 1, 0, 2 }
  uselistorder i64 %x22.0.reload, { 0, 2, 1 }
  uselistorder i64 %12, { 0, 3, 1, 2 }
  uselistorder i64* %10, { 0, 2, 1 }
  uselistorder i64 %4, { 1, 0 }
  uselistorder i64 %3, { 1, 0, 2 }
  uselistorder i64* %x22.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x19.0.reg2mem, { 3, 0, 1, 2 }
  uselistorder i64* %x20.0.reg2mem, { 3, 0, 1, 2 }
  uselistorder i64* %x22.1.reg2mem, { 3, 0, 1, 2 }
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i64* %x19.2.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x20.2.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x22.3.reg2mem, { 0, 2, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder void (i32, i64)* @__asm_stlr, { 1, 0 }
  uselistorder i32* @global_var_150c0, { 1, 0 }
  uselistorder label %dec_label_pc_2e28, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2dd0, { 2, 0, 1 }
}

define i64 @call_atomic_ops(i64 %arg1) local_unnamed_addr {
dec_label_pc_2e78:
  %0 = call i64 @param_atomic_ops(), !insn.addr !650
  ret i64 %0, !insn.addr !650
}

define i64 @param_thread_local_storage() local_unnamed_addr {
dec_label_pc_2e84:
  %0 = alloca i64
  %x24.2.reg2mem = alloca i64, !insn.addr !651
  %x23.2.reg2mem = alloca i64, !insn.addr !651
  %x22.4.reg2mem = alloca i64, !insn.addr !651
  %x20.2.reg2mem = alloca i64, !insn.addr !651
  %x19.3.reg2mem = alloca i64, !insn.addr !651
  %x24.1.reg2mem = alloca i64, !insn.addr !651
  %x23.1.reg2mem = alloca i64, !insn.addr !651
  %x22.3.reg2mem = alloca i64, !insn.addr !651
  %x20.1.reg2mem = alloca i64, !insn.addr !651
  %x19.2.reg2mem = alloca i64, !insn.addr !651
  %x0.0.reg2mem = alloca i64, !insn.addr !651
  %x19.1.reg2mem = alloca i64, !insn.addr !651
  %x22.05.reg2mem = alloca i64, !insn.addr !651
  %x24.0.reg2mem = alloca i64, !insn.addr !651
  %x23.0.reg2mem = alloca i64, !insn.addr !651
  %x22.2.reg2mem = alloca i64, !insn.addr !651
  %x20.0.reg2mem = alloca i64, !insn.addr !651
  %x19.0.reg2mem = alloca i64, !insn.addr !651
  %x22.1.reg2mem = alloca i64, !insn.addr !651
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %stack_var_-8 = alloca i64, align 8
  %3 = and i64 %2, 4294967295, !insn.addr !652
  %4 = call i64 @__asm_sbfiz(i64 %1, i64 %3, i64 3, i64 32), !insn.addr !653
  %5 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !654
  %6 = inttoptr i64 %5 to i64*, !insn.addr !655
  %7 = load i64, i64* %6, align 8, !insn.addr !655
  %8 = trunc i64 %4 to i32, !insn.addr !656
  %9 = call i64* @malloc(i32 %8), !insn.addr !656
  %10 = ptrtoint i64* %9 to i64, !insn.addr !656
  %11 = call i64* @malloc(i32 %8), !insn.addr !657
  %12 = icmp eq i64* %9, null, !insn.addr !658
  %13 = icmp eq i64* %11, null
  %storemerge1 = or i1 %12, %13
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !659
  store i64 %3, i64* %x19.2.reg2mem, !insn.addr !659
  store i64 %4, i64* %x20.1.reg2mem, !insn.addr !659
  br i1 %storemerge1, label %dec_label_pc_2fcc, label %dec_label_pc_2ee8.preheader, !insn.addr !659

dec_label_pc_2ee8.preheader:                      ; preds = %dec_label_pc_2e84
  %14 = ptrtoint i64* %11 to i64, !insn.addr !657
  %15 = icmp eq i64 %3, 0, !insn.addr !660
  store i64 0, i64* %x22.05.reg2mem, !insn.addr !660
  br i1 %15, label %dec_label_pc_2efc.preheader, label %dec_label_pc_2f58, !insn.addr !660

dec_label_pc_2efc.preheader:                      ; preds = %dec_label_pc_2f58, %dec_label_pc_2ee8.preheader
  store i64 0, i64* %x22.1.reg2mem
  br label %dec_label_pc_2efc

dec_label_pc_2efc:                                ; preds = %dec_label_pc_2efc.preheader, %dec_label_pc_2f84
  %x22.1.reload = load i64, i64* %x22.1.reg2mem
  %16 = icmp ugt i64 %3, %x22.1.reload, !insn.addr !661
  store i64 %3, i64* %x19.0.reg2mem, !insn.addr !661
  store i64 %14, i64* %x20.0.reg2mem, !insn.addr !661
  store i64 0, i64* %x22.2.reg2mem, !insn.addr !661
  store i64 0, i64* %x23.0.reg2mem, !insn.addr !661
  store i64 0, i64* %x24.0.reg2mem, !insn.addr !661
  br i1 %16, label %dec_label_pc_2f84, label %dec_label_pc_2f18, !insn.addr !661

dec_label_pc_2f18:                                ; preds = %dec_label_pc_2efc, %dec_label_pc_2fec
  %x24.0.reload = load i64, i64* %x24.0.reg2mem
  %x23.0.reload = load i64, i64* %x23.0.reg2mem
  %x22.2.reload = load i64, i64* %x22.2.reg2mem
  %x20.0.reload = load i64, i64* %x20.0.reg2mem
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  %17 = icmp sgt i64 %x19.0.reload, %x22.2.reload, !insn.addr !662
  store i64 %x19.0.reload, i64* %x19.3.reg2mem, !insn.addr !662
  store i64 %x20.0.reload, i64* %x20.2.reg2mem, !insn.addr !662
  store i64 %x22.2.reload, i64* %x22.4.reg2mem, !insn.addr !662
  store i64 %x23.0.reload, i64* %x23.2.reg2mem, !insn.addr !662
  store i64 %x24.0.reload, i64* %x24.2.reg2mem, !insn.addr !662
  br i1 %17, label %dec_label_pc_2fec, label %dec_label_pc_2f20, !insn.addr !662

dec_label_pc_2f20:                                ; preds = %dec_label_pc_2f18
  %18 = inttoptr i64 %x20.0.reload to i64*, !insn.addr !663
  call void @free(i64* %18), !insn.addr !663
  call void @free(i64* %9), !insn.addr !664
  %19 = trunc i64 %x19.0.reload to i32, !insn.addr !665
  %20 = mul i32 %19, 100, !insn.addr !665
  %21 = mul i64 %x19.0.reload, 150, !insn.addr !666
  %22 = and i64 %21, 4294967294, !insn.addr !666
  %23 = trunc i64 %x24.0.reload to i32, !insn.addr !667
  %24 = icmp eq i32 %20, %23, !insn.addr !667
  %25 = trunc i64 %x23.0.reload to i32
  %26 = trunc i64 %21 to i32
  %27 = icmp eq i32 %26, %25
  %storemerge = icmp eq i1 %27, %24
  %.v = select i1 %storemerge, i64 42, i64 4294967293
  store i64 %.v, i64* %x0.0.reg2mem, !insn.addr !668
  store i64 %22, i64* %x19.2.reg2mem, !insn.addr !668
  store i64 %x20.0.reload, i64* %x20.1.reg2mem, !insn.addr !668
  store i64 %x22.2.reload, i64* %x22.3.reg2mem, !insn.addr !668
  store i64 %x23.0.reload, i64* %x23.1.reg2mem, !insn.addr !668
  store i64 %x24.0.reload, i64* %x24.1.reg2mem, !insn.addr !668
  br label %dec_label_pc_2fcc, !insn.addr !668

dec_label_pc_2f58:                                ; preds = %dec_label_pc_2ee8.preheader, %dec_label_pc_2f58
  %x22.05.reload = load i64, i64* %x22.05.reg2mem
  %28 = call i64* @malloc(i32 16), !insn.addr !669
  %29 = ptrtoint i64* %28 to i64, !insn.addr !669
  %30 = mul i64 %x22.05.reload, 8, !insn.addr !670
  %31 = add i64 %30, %14, !insn.addr !670
  %32 = inttoptr i64 %31 to i64*, !insn.addr !670
  store i64 %29, i64* %32, align 8, !insn.addr !670
  %33 = add nuw nsw i64 %x22.05.reload, 1, !insn.addr !671
  %34 = bitcast i64* %28 to i8*, !insn.addr !672
  %35 = call i32 (i8*, i32, i32, i32, i8*, ...) @__snprintf_chk(i8* %34, i32 16, i32 1, i32 16, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_3491, i64 0, i64 0), i64 %x22.05.reload), !insn.addr !672
  %exitcond8 = icmp eq i64 %33, %3
  store i64 %33, i64* %x22.05.reg2mem, !insn.addr !660
  br i1 %exitcond8, label %dec_label_pc_2efc.preheader, label %dec_label_pc_2f58, !insn.addr !660

dec_label_pc_2f84:                                ; preds = %dec_label_pc_2efc
  %36 = mul i64 %x22.1.reload, 8, !insn.addr !673
  %37 = add i64 %36, %14, !insn.addr !673
  %38 = inttoptr i64 %37 to i64*, !insn.addr !673
  %39 = load i64, i64* %38, align 8, !insn.addr !673
  %40 = add i64 %36, %10, !insn.addr !674
  %41 = add nuw nsw i64 %x22.1.reload, 1
  %42 = inttoptr i64 %40 to i32*, !insn.addr !675
  %43 = inttoptr i64 %39 to i64*, !insn.addr !675
  %44 = call i32 @pthread_create(i32* %42, i64* null, i64* (i64*)* inttoptr (i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2932) to i64* (i64*)*), i64* %43), !insn.addr !675
  %45 = icmp eq i32 %44, 0, !insn.addr !676
  store i64 %41, i64* %x22.1.reg2mem, !insn.addr !676
  store i64 0, i64* %x19.1.reg2mem, !insn.addr !676
  br i1 %45, label %dec_label_pc_2efc, label %dec_label_pc_2fa4, !insn.addr !676

dec_label_pc_2fa4:                                ; preds = %dec_label_pc_2f84, %dec_label_pc_2fa4
  %x19.1.reload = load i64, i64* %x19.1.reg2mem
  %46 = mul i64 %x19.1.reload, 8, !insn.addr !677
  %47 = add i64 %46, %14, !insn.addr !677
  %48 = inttoptr i64 %47 to i64*, !insn.addr !677
  %49 = load i64, i64* %48, align 8, !insn.addr !677
  %50 = add nuw nsw i64 %x19.1.reload, 1, !insn.addr !678
  %51 = inttoptr i64 %49 to i64*, !insn.addr !679
  call void @free(i64* %51), !insn.addr !679
  %exitcond = icmp eq i64 %50, %41
  store i64 %50, i64* %x19.1.reg2mem, !insn.addr !680
  br i1 %exitcond, label %dec_label_pc_2fb8, label %dec_label_pc_2fa4, !insn.addr !680

dec_label_pc_2fb8:                                ; preds = %dec_label_pc_2fa4
  %52 = and i64 %x22.1.reload, 4294967295, !insn.addr !681
  call void @free(i64* %11), !insn.addr !682
  call void @free(i64* %9), !insn.addr !683
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !684
  store i64 %41, i64* %x19.2.reg2mem, !insn.addr !684
  store i64 %14, i64* %x20.1.reg2mem, !insn.addr !684
  store i64 %41, i64* %x22.3.reg2mem, !insn.addr !684
  store i64 add (i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), i64 2932), i64* %x23.1.reg2mem, !insn.addr !684
  store i64 %52, i64* %x24.1.reg2mem, !insn.addr !684
  br label %dec_label_pc_2fcc, !insn.addr !684

dec_label_pc_2fcc:                                ; preds = %dec_label_pc_2e84, %dec_label_pc_2fb8, %dec_label_pc_2f20
  %53 = load i64, i64* @global_var_14fe8, align 8, !insn.addr !685
  %54 = inttoptr i64 %53 to i64*, !insn.addr !686
  %55 = load i64, i64* %54, align 8, !insn.addr !686
  %56 = icmp eq i64 %7, %55, !insn.addr !687
  br i1 %56, label %dec_label_pc_3028, label %dec_label_pc_2fe8, !insn.addr !688

dec_label_pc_2fe8:                                ; preds = %dec_label_pc_2fcc
  %x24.1.reload = load i64, i64* %x24.1.reg2mem
  %x23.1.reload = load i64, i64* %x23.1.reg2mem
  %x22.3.reload = load i64, i64* %x22.3.reg2mem
  %x20.1.reload = load i64, i64* %x20.1.reg2mem
  %x19.2.reload = load i64, i64* %x19.2.reg2mem
  call void @__stack_chk_fail(), !insn.addr !689
  store i64 %x19.2.reload, i64* %x19.3.reg2mem, !insn.addr !689
  store i64 %x20.1.reload, i64* %x20.2.reg2mem, !insn.addr !689
  store i64 %x22.3.reload, i64* %x22.4.reg2mem, !insn.addr !689
  store i64 %x23.1.reload, i64* %x23.2.reg2mem, !insn.addr !689
  store i64 %x24.1.reload, i64* %x24.2.reg2mem, !insn.addr !689
  br label %dec_label_pc_2fec, !insn.addr !689

dec_label_pc_2fec:                                ; preds = %dec_label_pc_2fe8, %dec_label_pc_2f18
  %x24.2.reload = load i64, i64* %x24.2.reg2mem
  %x23.2.reload = load i64, i64* %x23.2.reg2mem
  %x22.4.reload = load i64, i64* %x22.4.reg2mem
  %x20.2.reload = load i64, i64* %x20.2.reg2mem
  %x19.3.reload = load i64, i64* %x19.3.reg2mem
  %57 = mul i64 %x22.4.reload, 8, !insn.addr !690
  %58 = add i64 %57, %10, !insn.addr !690
  %59 = inttoptr i64 %58 to i64*, !insn.addr !690
  %60 = load i64, i64* %59, align 8, !insn.addr !690
  %61 = trunc i64 %60 to i32, !insn.addr !691
  %62 = bitcast i64* %stack_var_-8 to i64**, !insn.addr !691
  %63 = call i32 @pthread_join(i32 %61, i64** nonnull %62), !insn.addr !691
  %64 = load i64, i64* %stack_var_-8, align 8, !insn.addr !692
  %65 = inttoptr i64 %64 to i32*, !insn.addr !693
  %66 = load i32, i32* %65, align 4, !insn.addr !693
  %67 = trunc i64 %x24.2.reload to i32, !insn.addr !694
  %68 = add i32 %66, %67, !insn.addr !694
  %69 = zext i32 %68 to i64, !insn.addr !694
  %70 = add i64 %64, 4, !insn.addr !695
  %71 = inttoptr i64 %70 to i32*, !insn.addr !695
  %72 = load i32, i32* %71, align 4, !insn.addr !695
  %73 = trunc i64 %x23.2.reload to i32, !insn.addr !696
  %74 = add i32 %72, %73, !insn.addr !696
  %75 = zext i32 %74 to i64, !insn.addr !696
  %76 = inttoptr i64 %64 to i64*, !insn.addr !697
  call void @free(i64* %76), !insn.addr !697
  %77 = add i64 %57, %x20.2.reload, !insn.addr !698
  %78 = inttoptr i64 %77 to i64*, !insn.addr !698
  %79 = load i64, i64* %78, align 8, !insn.addr !698
  %80 = add i64 %x22.4.reload, 1, !insn.addr !699
  %81 = inttoptr i64 %79 to i64*, !insn.addr !700
  call void @free(i64* %81), !insn.addr !700
  store i64 %x19.3.reload, i64* %x19.0.reg2mem, !insn.addr !701
  store i64 %x20.2.reload, i64* %x20.0.reg2mem, !insn.addr !701
  store i64 %80, i64* %x22.2.reg2mem, !insn.addr !701
  store i64 %75, i64* %x23.0.reg2mem, !insn.addr !701
  store i64 %69, i64* %x24.0.reg2mem, !insn.addr !701
  br label %dec_label_pc_2f18, !insn.addr !701

dec_label_pc_3028:                                ; preds = %dec_label_pc_2fcc
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !702

; uselistorder directives
  uselistorder i64 %64, { 2, 1, 0 }
  uselistorder i64 %57, { 1, 0 }
  uselistorder i64 %x20.2.reload, { 1, 0 }
  uselistorder i64 %41, { 0, 1, 3, 2 }
  uselistorder i64 %36, { 1, 0 }
  uselistorder i64 %x22.05.reload, { 1, 0, 2 }
  uselistorder i64 %x19.0.reload, { 2, 3, 0, 1 }
  uselistorder i64 %x20.0.reload, { 1, 2, 0 }
  uselistorder i64 %x22.2.reload, { 1, 0, 2 }
  uselistorder i64 %x23.0.reload, { 1, 2, 0 }
  uselistorder i64 %x24.0.reload, { 1, 2, 0 }
  uselistorder i64 %x22.1.reload, { 2, 1, 3, 0 }
  uselistorder i64 %14, { 0, 2, 3, 4, 1 }
  uselistorder i64* %11, { 0, 2, 1 }
  uselistorder i64 %3, { 2, 1, 4, 3, 0, 5 }
  uselistorder i64* %stack_var_-8, { 1, 0 }
  uselistorder i64* %x22.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x19.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x20.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x22.2.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x23.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x24.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x22.05.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x19.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i64* %x19.2.reg2mem, { 0, 2, 3, 1 }
  uselistorder i64* %x20.1.reg2mem, { 0, 2, 3, 1 }
  uselistorder i64* %x19.3.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x20.2.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x22.4.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x23.2.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x24.2.reg2mem, { 0, 2, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 4, { 5, 0, 1, 2, 3, 4 }
  uselistorder i32 (i32, i64**)* @pthread_join, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder void ()* @__stack_chk_fail, { 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 15 }
  uselistorder i32 (i32*, i64*, i64* (i64*)*, i64*)* @pthread_create, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder i64* (i64*)** @global_var_1000, { 1, 0 }
  uselistorder i64 ptrtoint (i64* (i64*)** @global_var_1000 to i64), { 0, 2, 1, 3, 4, 5, 6, 7, 8 }
  uselistorder i64 1, { 10, 11, 12, 13, 14, 15, 16, 17, 18, 1, 4, 5, 20, 19, 21, 2, 3, 6, 7, 8, 0, 9 }
  uselistorder i64 8, { 0, 1, 2, 3, 4, 5, 6, 7, 12, 8, 13, 14, 15, 10, 9, 11 }
  uselistorder i64 4294967293, { 4, 5, 6, 0, 1, 2, 7, 8, 9, 3 }
  uselistorder i64 42, { 2, 7, 8, 0, 3, 1, 9, 4, 10, 5, 11, 6, 12 }
  uselistorder i64 4294967294, { 0, 11, 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 10 }
  uselistorder void (i64*)* @free, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14 }
  uselistorder i64* null, { 2, 0, 1, 4, 5, 6, 3, 7, 8, 9, 10, 12, 11, 13, 14, 15, 16 }
  uselistorder i64* (i32)* @malloc, { 5, 4, 3, 2, 1, 0, 8, 7, 6, 9 }
  uselistorder i64 32, { 1, 2, 3, 0 }
  uselistorder i64 3, { 2, 3, 4, 1, 0 }
  uselistorder label %dec_label_pc_2fcc, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2fa4, { 1, 0 }
  uselistorder label %dec_label_pc_2f58, { 1, 0 }
  uselistorder label %dec_label_pc_2f18, { 1, 0 }
  uselistorder label %dec_label_pc_2efc, { 1, 0 }
}

define i64 @call_thread_local_storage(i64 %arg1) local_unnamed_addr {
dec_label_pc_3040:
  %0 = call i64 @param_thread_local_storage(), !insn.addr !703
  ret i64 %0, !insn.addr !703
}

define i64 @test_thread_concurrency(i64 %arg1) local_unnamed_addr {
dec_label_pc_3048:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_349b to i8*)), !insn.addr !704
  %1 = sext i32 %0 to i64, !insn.addr !704
  %2 = call i64 @call_pthread_create(i64 %1), !insn.addr !705
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_34b9 to i8*)), !insn.addr !706
  %4 = call i64 @param_pthread_join(), !insn.addr !707
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_34d5 to i8*)), !insn.addr !708
  %6 = sext i32 %5 to i64, !insn.addr !708
  %7 = call i64 @call_mutex_lock(i64 %6), !insn.addr !709
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_34f2 to i8*)), !insn.addr !710
  %9 = call i64 @param_condition_variable(), !insn.addr !711
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_350e to i8*)), !insn.addr !712
  %11 = sext i32 %10 to i64, !insn.addr !712
  %12 = call i64 @call_atomic_ops(i64 %11), !insn.addr !713
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_352a to i8*)), !insn.addr !714
  %14 = sext i32 %13 to i64, !insn.addr !714
  %15 = call i64 @call_thread_local_storage(i64 %14), !insn.addr !715
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3546 to i8*)), !insn.addr !716
  %17 = sext i32 %16 to i64, !insn.addr !716
  ret i64 %17, !insn.addr !716

; uselistorder directives
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12, 26 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
  uselistorder i64 0, { 0, 32, 33, 2, 3, 4, 5, 1, 28, 6, 7, 8, 9, 29, 10, 11, 92, 93, 94, 95, 106, 115, 12, 13, 14, 15, 30, 16, 31, 96, 97, 19, 20, 98, 99, 100, 101, 102, 103, 104, 105, 21, 22, 17, 23, 24, 18, 25, 114, 26, 116, 27, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 107, 108, 109, 110, 111, 112, 113 }
}

define i64 @__aarch64_cas4_acq_rel() local_unnamed_addr {
dec_label_pc_30f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  call void @__asm_hint(i64 34), !insn.addr !717
  %4 = load i8, i8* bitcast (i32* @global_var_150c4 to i8*), align 4, !insn.addr !718
  %5 = icmp eq i8 %4, 0, !insn.addr !719
  br i1 %5, label %dec_label_pc_3108, label %dec_label_pc_3100, !insn.addr !719

dec_label_pc_3100:                                ; preds = %dec_label_pc_30f0
  %6 = trunc i64 %3 to i32, !insn.addr !720
  %7 = trunc i64 %2 to i32, !insn.addr !720
  call void @__asm_casal(i32 %6, i32 %7, i64 %1), !insn.addr !720
  ret i64 %3, !insn.addr !721

dec_label_pc_3108:                                ; preds = %dec_label_pc_30f0
  %8 = and i64 %3, 4294967295, !insn.addr !722
  %9 = trunc i64 %2 to i32
  %10 = and i64 %1, 4294967295, !insn.addr !723
  %11 = icmp eq i64 %8, %10, !insn.addr !724
  br i1 %11, label %dec_label_pc_3118, label %dec_label_pc_3120, !insn.addr !724

dec_label_pc_3118:                                ; preds = %dec_label_pc_3108, %dec_label_pc_3118
  %12 = call i32 @__asm_stlxr(i32 %9, i64 %1), !insn.addr !725
  %13 = icmp eq i32 %12, 0, !insn.addr !726
  br i1 %13, label %dec_label_pc_3120, label %dec_label_pc_3118, !insn.addr !726

dec_label_pc_3120:                                ; preds = %dec_label_pc_3118, %dec_label_pc_3108
  ret i64 %10, !insn.addr !727

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
  call void @__asm_hint(i64 34), !insn.addr !728
  %3 = load i8, i8* bitcast (i32* @global_var_150c4 to i8*), align 4, !insn.addr !729
  %4 = icmp eq i8 %3, 0, !insn.addr !730
  br i1 %4, label %dec_label_pc_314c.preheader, label %dec_label_pc_3140, !insn.addr !730

dec_label_pc_314c.preheader:                      ; preds = %dec_label_pc_3130
  %5 = trunc i64 %1 to i32
  %6 = trunc i64 %2 to i32, !insn.addr !731
  %7 = add i32 %6, %5, !insn.addr !731
  br label %dec_label_pc_314c

dec_label_pc_3140:                                ; preds = %dec_label_pc_3130
  %8 = trunc i64 %2 to i32, !insn.addr !732
  call void @__asm_ldaddal(i32 %8, i32 %8, i64 %1), !insn.addr !732
  ret i64 %2, !insn.addr !733

dec_label_pc_314c:                                ; preds = %dec_label_pc_314c.preheader, %dec_label_pc_314c
  %9 = call i32 @__asm_stlxr(i32 %7, i64 %1), !insn.addr !734
  %10 = icmp eq i32 %9, 0, !insn.addr !735
  br i1 %10, label %dec_label_pc_315c, label %dec_label_pc_314c, !insn.addr !735

dec_label_pc_315c:                                ; preds = %dec_label_pc_314c
  %11 = and i64 %1, 4294967295, !insn.addr !736
  ret i64 %11, !insn.addr !737

; uselistorder directives
  uselistorder i64 %2, { 1, 0, 2 }
  uselistorder i64 %1, { 3, 2, 0, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 4294967295, { 16, 17, 26, 21, 0, 27, 1, 28, 2, 29, 3, 4, 30, 31, 5, 32, 33, 34, 35, 22, 7, 6, 8, 9, 23, 36, 10, 11, 24, 37, 38, 39, 40, 12, 13, 25, 14, 15, 41, 42, 43, 44, 45, 46, 47, 48, 18, 49, 19, 50, 20 }
  uselistorder i8 0, { 0, 1, 3, 4, 2 }
  uselistorder i32 0, { 32, 33, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 0, 47, 48, 50, 53, 49, 5, 51, 52, 4, 54, 31, 9, 10, 7, 8, 11, 12, 14, 55, 56, 13, 59, 15, 16, 57, 58, 17, 61, 60, 18, 62, 63, 64, 19, 65, 2, 34, 6, 3, 1, 35, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30 }
  uselistorder i8* bitcast (i32* @global_var_150c4 to i8*), { 1, 0 }
  uselistorder label %dec_label_pc_314c, { 1, 0 }
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_3160:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !738

; uselistorder directives
  uselistorder i32 1, { 28, 27, 26, 116, 117, 118, 119, 120, 121, 122, 163, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 25, 123, 164, 155, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 24, 156, 157, 165, 61, 166, 64, 63, 62, 23, 168, 167, 72, 71, 70, 69, 68, 67, 66, 65, 170, 158, 169, 73, 22, 124, 125, 126, 127, 128, 129, 130, 114, 115, 113, 131, 112, 78, 77, 76, 75, 74, 79, 132, 133, 172, 171, 82, 81, 80, 134, 159, 173, 83, 30, 160, 84, 21, 174, 85, 20, 86, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 19, 161, 88, 87, 29, 91, 90, 89, 18, 93, 92, 17, 147, 148, 175, 101, 100, 99, 98, 97, 96, 95, 94, 16, 102, 15, 177, 176, 103, 14, 149, 104, 13, 150, 12, 178, 162, 105, 11, 10, 151, 9, 106, 8, 7, 107, 6, 152, 153, 108, 5, 4, 110, 109, 3, 154, 2, 111, 179, 1, 0 }
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

declare i32 @__asm_ubfx.7(i32, i32, i64, i64) local_unnamed_addr

declare void @__asm_hint(i64) local_unnamed_addr

declare void @__asm_casal(i32, i32, i64) local_unnamed_addr

declare i32 @__asm_stlxr(i32, i64) local_unnamed_addr

declare void @__asm_ldaddal(i32, i32, i64) local_unnamed_addr

declare i64 @__asm_mrs(i64, i64) local_unnamed_addr

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
!110 = !{i64 6672}
!111 = !{i64 6680}
!112 = !{i64 6688}
!113 = !{i64 6696}
!114 = !{i64 6740}
!115 = !{i64 6744}
!116 = !{i64 6748}
!117 = !{i64 6752}
!118 = !{i64 6760}
!119 = !{i64 6768}
!120 = !{i64 6776}
!121 = !{i64 6788}
!122 = !{i64 6800}
!123 = !{i64 6832}
!124 = !{i64 6844}
!125 = !{i64 6852}
!126 = !{i64 6860}
!127 = !{i64 6868}
!128 = !{i64 6876}
!129 = !{i64 6892}
!130 = !{i64 6896}
!131 = !{i64 6924}
!132 = !{i64 6936}
!133 = !{i64 6956}
!134 = !{i64 6968}
!135 = !{i64 6984}
!136 = !{i64 6988}
!137 = !{i64 7012}
!138 = !{i64 7016}
!139 = !{i64 7024}
!140 = !{i64 7028}
!141 = !{i64 7040}
!142 = !{i64 7056}
!143 = !{i64 7064}
!144 = !{i64 7068}
!145 = !{i64 7072}
!146 = !{i64 7080}
!147 = !{i64 7088}
!148 = !{i64 7092}
!149 = !{i64 7104}
!150 = !{i64 7124}
!151 = !{i64 7132}
!152 = !{i64 7144}
!153 = !{i64 7148}
!154 = !{i64 7160}
!155 = !{i64 7164}
!156 = !{i64 7188}
!157 = !{i64 7196}
!158 = !{i64 7204}
!159 = !{i64 7208}
!160 = !{i64 7216}
!161 = !{i64 7220}
!162 = !{i64 7228}
!163 = !{i64 7240}
!164 = !{i64 7252}
!165 = !{i64 7260}
!166 = !{i64 7292}
!167 = !{i64 7312}
!168 = !{i64 7324}
!169 = !{i64 7340}
!170 = !{i64 7344}
!171 = !{i64 7356}
!172 = !{i64 7368}
!173 = !{i64 7376}
!174 = !{i64 7384}
!175 = !{i64 7404}
!176 = !{i64 7408}
!177 = !{i64 7420}
!178 = !{i64 7424}
!179 = !{i64 7436}
!180 = !{i64 7440}
!181 = !{i64 7464}
!182 = !{i64 7472}
!183 = !{i64 7496}
!184 = !{i64 7504}
!185 = !{i64 7516}
!186 = !{i64 7524}
!187 = !{i64 7532}
!188 = !{i64 7536}
!189 = !{i64 7544}
!190 = !{i64 7548}
!191 = !{i64 7556}
!192 = !{i64 7568}
!193 = !{i64 7580}
!194 = !{i64 7588}
!195 = !{i64 7592}
!196 = !{i64 7612}
!197 = !{i64 7636}
!198 = !{i64 7696}
!199 = !{i64 7716}
!200 = !{i64 7724}
!201 = !{i64 7728}
!202 = !{i64 7736}
!203 = !{i64 7740}
!204 = !{i64 7748}
!205 = !{i64 7752}
!206 = !{i64 7768}
!207 = !{i64 7776}
!208 = !{i64 7792}
!209 = !{i64 7808}
!210 = !{i64 7812}
!211 = !{i64 7824}
!212 = !{i64 7832}
!213 = !{i64 7856}
!214 = !{i64 7864}
!215 = !{i64 7868}
!216 = !{i64 7872}
!217 = !{i64 7880}
!218 = !{i64 7888}
!219 = !{i64 7892}
!220 = !{i64 7900}
!221 = !{i64 7904}
!222 = !{i64 7912}
!223 = !{i64 7920}
!224 = !{i64 7932}
!225 = !{i64 7936}
!226 = !{i64 7956}
!227 = !{i64 7960}
!228 = !{i64 7968}
!229 = !{i64 7972}
!230 = !{i64 7980}
!231 = !{i64 7996}
!232 = !{i64 8024}
!233 = !{i64 8028}
!234 = !{i64 8044}
!235 = !{i64 8048}
!236 = !{i64 8060}
!237 = !{i64 8080}
!238 = !{i64 8100}
!239 = !{i64 8104}
!240 = !{i64 8136}
!241 = !{i64 8148}
!242 = !{i64 8152}
!243 = !{i64 8156}
!244 = !{i64 8160}
!245 = !{i64 8168}
!246 = !{i64 8176}
!247 = !{i64 8180}
!248 = !{i64 8188}
!249 = !{i64 8192}
!250 = !{i64 8196}
!251 = !{i64 8200}
!252 = !{i64 8220}
!253 = !{i64 8228}
!254 = !{i64 8236}
!255 = !{i64 8244}
!256 = !{i64 8252}
!257 = !{i64 8264}
!258 = !{i64 8268}
!259 = !{i64 8280}
!260 = !{i64 8284}
!261 = !{i64 8320}
!262 = !{i64 8332}
!263 = !{i64 8336}
!264 = !{i64 8348}
!265 = !{i64 8360}
!266 = !{i64 8364}
!267 = !{i64 8380}
!268 = !{i64 8388}
!269 = !{i64 8384}
!270 = !{i64 8392}
!271 = !{i64 8396}
!272 = !{i64 8400}
!273 = !{i64 8416}
!274 = !{i64 8420}
!275 = !{i64 8424}
!276 = !{i64 8428}
!277 = !{i64 8448}
!278 = !{i64 8452}
!279 = !{i64 8480}
!280 = !{i64 8496}
!281 = !{i64 8508}
!282 = !{i64 8512}
!283 = !{i64 8516}
!284 = !{i64 8520}
!285 = !{i64 8528}
!286 = !{i64 8544}
!287 = !{i64 8548}
!288 = !{i64 8560}
!289 = !{i64 8564}
!290 = !{i64 8568}
!291 = !{i64 8576}
!292 = !{i64 8584}
!293 = !{i64 8592}
!294 = !{i64 8596}
!295 = !{i64 8604}
!296 = !{i64 8612}
!297 = !{i64 8616}
!298 = !{i64 8624}
!299 = !{i64 8628}
!300 = !{i64 8636}
!301 = !{i64 8644}
!302 = !{i64 8672}
!303 = !{i64 8676}
!304 = !{i64 8680}
!305 = !{i64 8684}
!306 = !{i64 8696}
!307 = !{i64 8700}
!308 = !{i64 8704}
!309 = !{i64 8708}
!310 = !{i64 8712}
!311 = !{i64 8728}
!312 = !{i64 8752}
!313 = !{i64 8772}
!314 = !{i64 8776}
!315 = !{i64 8796}
!316 = !{i64 8800}
!317 = !{i64 8820}
!318 = !{i64 8840}
!319 = !{i64 8844}
!320 = !{i64 8864}
!321 = !{i64 8868}
!322 = !{i64 8888}
!323 = !{i64 8892}
!324 = !{i64 8912}
!325 = !{i64 8916}
!326 = !{i64 8936}
!327 = !{i64 8940}
!328 = !{i64 8960}
!329 = !{i64 8964}
!330 = !{i64 8984}
!331 = !{i64 8988}
!332 = !{i64 9008}
!333 = !{i64 9012}
!334 = !{i64 9032}
!335 = !{i64 9036}
!336 = !{i64 9060}
!337 = !{i64 9064}
!338 = !{i64 9092}
!339 = !{i64 9096}
!340 = !{i64 9100}
!341 = !{i64 9104}
!342 = !{i64 9108}
!343 = !{i64 9124}
!344 = !{i64 9140}
!345 = !{i64 9144}
!346 = !{i64 9164}
!347 = !{i64 9168}
!348 = !{i64 9184}
!349 = !{i64 9188}
!350 = !{i64 9200}
!351 = !{i64 9204}
!352 = !{i64 9220}
!353 = !{i64 9224}
!354 = !{i64 9244}
!355 = !{i64 9252}
!356 = !{i64 9260}
!357 = !{i64 9264}
!358 = !{i64 9272}
!359 = !{i64 9276}
!360 = !{i64 9284}
!361 = !{i64 9292}
!362 = !{i64 9304}
!363 = !{i64 9308}
!364 = !{i64 9332}
!365 = !{i64 9336}
!366 = !{i64 9348}
!367 = !{i64 9352}
!368 = !{i64 9356}
!369 = !{i64 9360}
!370 = !{i64 9380}
!371 = !{i64 9388}
!372 = !{i64 9400}
!373 = !{i64 9404}
!374 = !{i64 9408}
!375 = !{i64 9412}
!376 = !{i64 9416}
!377 = !{i64 9424}
!378 = !{i64 9432}
!379 = !{i64 9440}
!380 = !{i64 9444}
!381 = !{i64 9452}
!382 = !{i64 9456}
!383 = !{i64 9464}
!384 = !{i64 9484}
!385 = !{i64 9508}
!386 = !{i64 9512}
!387 = !{i64 9528}
!388 = !{i64 9532}
!389 = !{i64 9544}
!390 = !{i64 9552}
!391 = !{i64 9564}
!392 = !{i64 9568}
!393 = !{i64 9572}
!394 = !{i64 9576}
!395 = !{i64 9580}
!396 = !{i64 9584}
!397 = !{i64 9588}
!398 = !{i64 9592}
!399 = !{i64 9596}
!400 = !{i64 9616}
!401 = !{i64 9624}
!402 = !{i64 9632}
!403 = !{i64 9640}
!404 = !{i64 9644}
!405 = !{i64 9648}
!406 = !{i64 9660}
!407 = !{i64 9668}
!408 = !{i64 9672}
!409 = !{i64 9676}
!410 = !{i64 9684}
!411 = !{i64 9700}
!412 = !{i64 9708}
!413 = !{i64 9716}
!414 = !{i64 9720}
!415 = !{i64 9728}
!416 = !{i64 9732}
!417 = !{i64 9740}
!418 = !{i64 9760}
!419 = !{i64 9764}
!420 = !{i64 9768}
!421 = !{i64 9784}
!422 = !{i64 9792}
!423 = !{i64 9812}
!424 = !{i64 9816}
!425 = !{i64 9840}
!426 = !{i64 9844}
!427 = !{i64 9848}
!428 = !{i64 9856}
!429 = !{i64 9860}
!430 = !{i64 9868}
!431 = !{i64 9876}
!432 = !{i64 9880}
!433 = !{i64 9888}
!434 = !{i64 9892}
!435 = !{i64 9912}
!436 = !{i64 9916}
!437 = !{i64 9920}
!438 = !{i64 9924}
!439 = !{i64 9932}
!440 = !{i64 9940}
!441 = !{i64 9952}
!442 = !{i64 9956}
!443 = !{i64 9988}
!444 = !{i64 10008}
!445 = !{i64 10012}
!446 = !{i64 10016}
!447 = !{i64 10052}
!448 = !{i64 10056}
!449 = !{i64 10080}
!450 = !{i64 10084}
!451 = !{i64 10096}
!452 = !{i64 10100}
!453 = !{i64 10112}
!454 = !{i64 10120}
!455 = !{i64 10132}
!456 = !{i64 10140}
!457 = !{i64 10144}
!458 = !{i64 10156}
!459 = !{i64 10164}
!460 = !{i64 10168}
!461 = !{i64 10176}
!462 = !{i64 10192}
!463 = !{i64 10196}
!464 = !{i64 10224}
!465 = !{i64 10240}
!466 = !{i64 10244}
!467 = !{i64 10248}
!468 = !{i64 10276}
!469 = !{i64 10280}
!470 = !{i64 10284}
!471 = !{i64 10296}
!472 = !{i64 10300}
!473 = !{i64 10304}
!474 = !{i64 10320}
!475 = !{i64 10324}
!476 = !{i64 10328}
!477 = !{i64 10332}
!478 = !{i64 10352}
!479 = !{i64 10356}
!480 = !{i64 10364}
!481 = !{i64 10372}
!482 = !{i64 10380}
!483 = !{i64 10384}
!484 = !{i64 10388}
!485 = !{i64 10408}
!486 = !{i64 10412}
!487 = !{i64 10420}
!488 = !{i64 10432}
!489 = !{i64 10444}
!490 = !{i64 10448}
!491 = !{i64 10460}
!492 = !{i64 10336}
!493 = !{i64 10468}
!494 = !{i64 10340}
!495 = !{i64 10392}
!496 = !{i64 10480}
!497 = !{i64 10396}
!498 = !{i64 10520}
!499 = !{i64 10540}
!500 = !{i64 10544}
!501 = !{i64 10564}
!502 = !{i64 10568}
!503 = !{i64 10588}
!504 = !{i64 10592}
!505 = !{i64 10612}
!506 = !{i64 10616}
!507 = !{i64 10636}
!508 = !{i64 10640}
!509 = !{i64 10660}
!510 = !{i64 10664}
!511 = !{i64 10684}
!512 = !{i64 10688}
!513 = !{i64 10712}
!514 = !{i64 10716}
!515 = !{i64 10728}
!516 = !{i64 10740}
!517 = !{i64 10764}
!518 = !{i64 10772}
!519 = !{i64 10776}
!520 = !{i64 10780}
!521 = !{i64 10788}
!522 = !{i64 10792}
!523 = !{i64 10796}
!524 = !{i64 10800}
!525 = !{i64 10808}
!526 = !{i64 10816}
!527 = !{i64 10820}
!528 = !{i64 10828}
!529 = !{i64 10832}
!530 = !{i64 10840}
!531 = !{i64 10856}
!532 = !{i64 10864}
!533 = !{i64 10868}
!534 = !{i64 10880}
!535 = !{i64 10888}
!536 = !{i64 10896}
!537 = !{i64 10928}
!538 = !{i64 10964}
!539 = !{i64 10984}
!540 = !{i64 10992}
!541 = !{i64 10996}
!542 = !{i64 11000}
!543 = !{i64 11004}
!544 = !{i64 11008}
!545 = !{i64 11016}
!546 = !{i64 11024}
!547 = !{i64 11028}
!548 = !{i64 11032}
!549 = !{i64 11036}
!550 = !{i64 11040}
!551 = !{i64 11044}
!552 = !{i64 11052}
!553 = !{i64 11060}
!554 = !{i64 11068}
!555 = !{i64 11072}
!556 = !{i64 11080}
!557 = !{i64 11084}
!558 = !{i64 11092}
!559 = !{i64 11128}
!560 = !{i64 11132}
!561 = !{i64 11136}
!562 = !{i64 11152}
!563 = !{i64 11164}
!564 = !{i64 11168}
!565 = !{i64 11172}
!566 = !{i64 11148}
!567 = !{i64 11204}
!568 = !{i64 11212}
!569 = !{i64 11224}
!570 = !{i64 11232}
!571 = !{i64 11236}
!572 = !{i64 11244}
!573 = !{i64 11248}
!574 = !{i64 11256}
!575 = !{i64 11264}
!576 = !{i64 11268}
!577 = !{i64 11272}
!578 = !{i64 11288}
!579 = !{i64 11292}
!580 = !{i64 11296}
!581 = !{i64 11304}
!582 = !{i64 11308}
!583 = !{i64 11328}
!584 = !{i64 11332}
!585 = !{i64 11340}
!586 = !{i64 11344}
!587 = !{i64 11368}
!588 = !{i64 11372}
!589 = !{i64 11388}
!590 = !{i64 11404}
!591 = !{i64 11424}
!592 = !{i64 11432}
!593 = !{i64 11436}
!594 = !{i64 11460}
!595 = !{i64 11464}
!596 = !{i64 11468}
!597 = !{i64 11476}
!598 = !{i64 11484}
!599 = !{i64 11492}
!600 = !{i64 11496}
!601 = !{i64 11504}
!602 = !{i64 11508}
!603 = !{i64 11512}
!604 = !{i64 11520}
!605 = !{i64 11524}
!606 = !{i64 11532}
!607 = !{i64 11536}
!608 = !{i64 11540}
!609 = !{i64 11544}
!610 = !{i64 11548}
!611 = !{i64 11572}
!612 = !{i64 11576}
!613 = !{i64 11580}
!614 = !{i64 11592}
!615 = !{i64 11604}
!616 = !{i64 11612}
!617 = !{i64 11616}
!618 = !{i64 11628}
!619 = !{i64 11632}
!620 = !{i64 11636}
!621 = !{i64 11656}
!622 = !{i64 11672}
!623 = !{i64 11680}
!624 = !{i64 11704}
!625 = !{i64 11708}
!626 = !{i64 11712}
!627 = !{i64 11720}
!628 = !{i64 11732}
!629 = !{i64 11740}
!630 = !{i64 11744}
!631 = !{i64 11752}
!632 = !{i64 11768}
!633 = !{i64 11772}
!634 = !{i64 11776}
!635 = !{i64 11792}
!636 = !{i64 11796}
!637 = !{i64 11800}
!638 = !{i64 11808}
!639 = !{i64 11812}
!640 = !{i64 11820}
!641 = !{i64 11828}
!642 = !{i64 11832}
!643 = !{i64 11840}
!644 = !{i64 11844}
!645 = !{i64 11848}
!646 = !{i64 11856}
!647 = !{i64 11860}
!648 = !{i64 11864}
!649 = !{i64 11892}
!650 = !{i64 11904}
!651 = !{i64 11908}
!652 = !{i64 11920}
!653 = !{i64 11932}
!654 = !{i64 11936}
!655 = !{i64 11948}
!656 = !{i64 11964}
!657 = !{i64 11976}
!658 = !{i64 11980}
!659 = !{i64 11988}
!660 = !{i64 12012}
!661 = !{i64 12036}
!662 = !{i64 12060}
!663 = !{i64 12068}
!664 = !{i64 12076}
!665 = !{i64 12088}
!666 = !{i64 12092}
!667 = !{i64 12100}
!668 = !{i64 12116}
!669 = !{i64 12124}
!670 = !{i64 12128}
!671 = !{i64 12152}
!672 = !{i64 12156}
!673 = !{i64 12164}
!674 = !{i64 12168}
!675 = !{i64 12184}
!676 = !{i64 12188}
!677 = !{i64 12196}
!678 = !{i64 12200}
!679 = !{i64 12204}
!680 = !{i64 12212}
!681 = !{i64 12028}
!682 = !{i64 12220}
!683 = !{i64 12228}
!684 = !{i64 12232}
!685 = !{i64 12240}
!686 = !{i64 12248}
!687 = !{i64 12252}
!688 = !{i64 12260}
!689 = !{i64 12264}
!690 = !{i64 12268}
!691 = !{i64 12276}
!692 = !{i64 12280}
!693 = !{i64 12284}
!694 = !{i64 12288}
!695 = !{i64 12292}
!696 = !{i64 12296}
!697 = !{i64 12300}
!698 = !{i64 12304}
!699 = !{i64 12308}
!700 = !{i64 12312}
!701 = !{i64 12316}
!702 = !{i64 12348}
!703 = !{i64 12356}
!704 = !{i64 12376}
!705 = !{i64 12380}
!706 = !{i64 12400}
!707 = !{i64 12404}
!708 = !{i64 12424}
!709 = !{i64 12428}
!710 = !{i64 12448}
!711 = !{i64 12452}
!712 = !{i64 12472}
!713 = !{i64 12476}
!714 = !{i64 12496}
!715 = !{i64 12500}
!716 = !{i64 12524}
!717 = !{i64 12528}
!718 = !{i64 12536}
!719 = !{i64 12540}
!720 = !{i64 12544}
!721 = !{i64 12548}
!722 = !{i64 12552}
!723 = !{i64 12556}
!724 = !{i64 12564}
!725 = !{i64 12568}
!726 = !{i64 12572}
!727 = !{i64 12576}
!728 = !{i64 12592}
!729 = !{i64 12600}
!730 = !{i64 12604}
!731 = !{i64 12624}
!732 = !{i64 12608}
!733 = !{i64 12612}
!734 = !{i64 12628}
!735 = !{i64 12632}
!736 = !{i64 12620}
!737 = !{i64 12636}
!738 = !{i64 12656}
