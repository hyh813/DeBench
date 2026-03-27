source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%_IO_FILE = type { i32 }
%stat = type { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }
%sockaddr = type { i64, [14 x i8] }
%shmid_ds = type { %ipc_perm, i32, i64, i64, i64, i32, i32, i16, i16, i64*, i64* }
%ipc_perm = type { i32, i32, i32, i32, i32, i32, i16 }

@global_var_70e0 = global i64 0
@global_var_70a0 = global i64 0
@global_var_7060 = global i64 0
@global_var_7041 = global i64 0
@global_var_4004 = local_unnamed_addr constant [9 x i8] c"HelloLib\00"
@global_var_400d = constant [4 x i8] c"def\00"
@global_var_4011 = constant [4 x i8] c"abc\00"
@global_var_4015 = constant [4 x i8] c"xyz\00"
@global_var_4019 = constant [4 x i8] c"aaa\00"
@global_var_401d = constant [4 x i8] c"bbb\00"
@global_var_4021 = constant [21 x i8] c"Value: %d, Name: %s\0A\00"
@global_var_4094 = constant [5 x i8] c"Test\00"
@global_var_4036 = constant [6 x i8] c"%d,%d\00"
@global_var_403c = local_unnamed_addr constant [8 x i8] c"123,456\00"
@global_var_4046 = constant [12 x i8] c"/etc/passwd\00"
@global_var_4052 = constant [3 x i8] c"w+\00"
@global_var_4055 = constant [19 x i8] c"BinBench Test Data\00"
@global_var_4068 = constant [23 x i8] c"/tmp/binbench_test.tmp\00"
@global_var_407f = constant [6 x i8] c"Bench\00"
@global_var_4085 = constant [20 x i8] c"Hello BinBench Test\00"
@global_var_420b = constant [10 x i8] c"/bin/true\00"
@global_var_4215 = constant [10 x i8] c"HelloPipe\00"
@global_var_421f = constant [18 x i8] c"/tmp/binbench_shm\00"
@global_var_4231 = constant [13 x i8] c"SharedMemory\00"
@global_var_431d = constant [10 x i8] c"Thread-%d\00"
@0 = external global i32
@global_var_7020 = local_unnamed_addr global i8 0
@global_var_7110 = local_unnamed_addr global i32 0
@global_var_710c = local_unnamed_addr global i32 0
@global_var_7108 = local_unnamed_addr global i32 0
@global_var_7109 = global i32 0
@global_var_3e8 = global i32 2
@global_var_7048 = local_unnamed_addr global i32 0
@global_var_7044 = local_unnamed_addr global i32 0
@global_var_7040 = local_unnamed_addr global i32 0
@global_var_70a4 = global i32 0
@1 = internal constant [2 x i8] c"r\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i64 0, i64 0)
@3 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\87\E5\87\86\E5\BA\93\E5\87\BD\E6\95\B0\E8\B0\83\E7\94\A8 ===\00"
@global_var_4099 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @3, i64 0, i64 0)
@4 = internal constant [27 x i8] c"LIB-L1-01: %d (\E6\9C\9F\E6\9C\9B: 8)\0A\00"
@global_var_40bd = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @4, i64 0, i64 0)
@5 = internal constant [27 x i8] c"LIB-L1-02: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_40d8 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @5, i64 0, i64 0)
@6 = internal constant [28 x i8] c"LIB-L1-03: %d (\E6\9C\9F\E6\9C\9B: 12)\0A\00"
@global_var_40f3 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @6, i64 0, i64 0)
@7 = internal constant [28 x i8] c"LIB-L1-04: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_410f = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @7, i64 0, i64 0)
@8 = internal constant [28 x i8] c"LIB-L1-05: %d (\E6\9C\9F\E6\9C\9B: -1)\0A\00"
@global_var_412b = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i64 0, i64 0)
@9 = internal constant [28 x i8] c"LIB-L1-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_4147 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i64 0, i64 0)
@10 = internal constant [29 x i8] c"LIB-L1-07: %d (\E6\9C\9F\E6\9C\9B: 579)\0A\00"
@global_var_4163 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"LIB-L1-08: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_4180 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [28 x i8] c"LIB-L1-09: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_419c = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @12, i64 0, i64 0)
@13 = internal constant [28 x i8] c"LIB-L1-10: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_41b8 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @13, i64 0, i64 0)
@14 = internal constant [27 x i8] c"LIB-L1-11: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_41d4 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @14, i64 0, i64 0)
@15 = internal constant [28 x i8] c"LIB-L1-12: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_41ef = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @15, i64 0, i64 0)
@global_var_3b6 = global i32 -1361602374
@global_var_1000 = global i32 0
@global_var_3e9 = global i32 1006632960
@global_var_7d1 = global i32 301989888
@16 = internal constant [27 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\B3\BB\E7\BB\9F\E8\B0\83\E7\94\A8 ===\00"
@global_var_423e = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @16, i64 0, i64 0)
@17 = internal constant [28 x i8] c"SYS-L3-01: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_4259 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i64 0, i64 0)
@18 = internal constant [28 x i8] c"SYS-L3-02: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_4275 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @18, i64 0, i64 0)
@19 = internal constant [28 x i8] c"SYS-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_4291 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @19, i64 0, i64 0)
@20 = internal constant [28 x i8] c"SYS-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_42ad = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @20, i64 0, i64 0)
@21 = internal constant [28 x i8] c"SYS-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_42c9 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @21, i64 0, i64 0)
@22 = internal constant [28 x i8] c"SYS-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_42e5 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @22, i64 0, i64 0)
@23 = internal constant [28 x i8] c"SYS-L3-07: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_4301 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @23, i64 0, i64 0)
@24 = internal constant [2 x i8] c"\01\00"
@global_var_4400 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @24, i64 0, i64 0)
@25 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\BA\BF\E7\A8\8B\E4\B8\8E\E5\B9\B6\E5\8F\91 ===\00"
@global_var_4327 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @25, i64 0, i64 0)
@26 = internal constant [28 x i8] c"THR-L3-01: %d (\E6\9C\9F\E6\9C\9B: 49)\0A\00"
@global_var_4345 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @26, i64 0, i64 0)
@27 = internal constant [29 x i8] c"THR-L3-02: %d (\E6\9C\9F\E6\9C\9B: 465)\0A\00"
@global_var_4361 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @27, i64 0, i64 0)
@28 = internal constant [28 x i8] c"THR-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_437e = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @28, i64 0, i64 0)
@29 = internal constant [28 x i8] c"THR-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_439a = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @29, i64 0, i64 0)
@30 = internal constant [28 x i8] c"THR-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_43b6 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @30, i64 0, i64 0)
@31 = internal constant [28 x i8] c"THR-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_43d2 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @31, i64 0, i64 0)
@global_var_4044 = constant [2 x i8] c"r\00"

define i64 @_init() local_unnamed_addr {
dec_label_pc_2000:
  %rax.0.reg2mem = alloca i64, !insn.addr !0
  %0 = load i64, i64* inttoptr (i64 28648 to i64*), align 8, !insn.addr !1
  %1 = icmp eq i64 %0, 0, !insn.addr !2
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !3
  br i1 %1, label %dec_label_pc_2016, label %dec_label_pc_2014, !insn.addr !3

dec_label_pc_2014:                                ; preds = %dec_label_pc_2000
  call void @__gmon_start__(), !insn.addr !4
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !4
  br label %dec_label_pc_2016, !insn.addr !4

dec_label_pc_2016:                                ; preds = %dec_label_pc_2014, %dec_label_pc_2000
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !5
}

define void @function_23a0(i64* %d) local_unnamed_addr {
dec_label_pc_23a0:
  call void @__cxa_finalize(i64* %d), !insn.addr !6
  ret void, !insn.addr !6
}

define i32 @function_23b0(i8* %s, i32 %n, i32 %flag, i32 %slen, i8* %format, ...) local_unnamed_addr {
dec_label_pc_23b0:
  %0 = call i32 (i8*, i32, i32, i32, i8*, ...) @__snprintf_chk(i8* %s, i32 %n, i32 %flag, i32 %slen, i8* %format), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @function_23c0(i32 %sig) local_unnamed_addr {
dec_label_pc_23c0:
  %0 = call i32 @raise(i32 %sig), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define void @function_23d0(i64* %ptr) local_unnamed_addr {
dec_label_pc_23d0:
  call void @free(i64* %ptr), !insn.addr !9
  ret void, !insn.addr !9
}

define i32* @function_23e0() local_unnamed_addr {
dec_label_pc_23e0:
  %0 = call i32* @__errno_location(), !insn.addr !10
  ret i32* %0, !insn.addr !10
}

define i32 @function_23f0(i8* %name) local_unnamed_addr {
dec_label_pc_23f0:
  %0 = call i32 @unlink(i8* %name), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i8* @function_2400(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_2400:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !12
  ret i8* %0, !insn.addr !12
}

define void @function_2410(i32 %status) local_unnamed_addr {
dec_label_pc_2410:
  call void @_exit(i32 %status), !insn.addr !13
  ret void, !insn.addr !13
}

define i8* @function_2420(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_2420:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !14
  ret i8* %0, !insn.addr !14
}

define i32 @function_2430(i8* %s) local_unnamed_addr {
dec_label_pc_2430:
  %0 = call i32 @puts(i8* %s), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define i32 @function_2440(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_2440:
  %0 = call i32 @fread(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i32 @function_2450(i32 %fd, i32 %level, i32 %optname, i64* %optval, i32 %optlen) local_unnamed_addr {
dec_label_pc_2450:
  %0 = call i32 @setsockopt(i32 %fd, i32 %level, i32 %optname, i64* %optval, i32 %optlen), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i32 @function_2460(i64* %shmaddr) local_unnamed_addr {
dec_label_pc_2460:
  %0 = call i32 @shmdt(i64* %shmaddr), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define i32 @function_2470(i32 %fd, i64* %buf, i32 %n) local_unnamed_addr {
dec_label_pc_2470:
  %0 = call i32 @write(i32 %fd, i64* %buf, i32 %n), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @function_2480(i64* %cond, i64* %mutex) local_unnamed_addr {
dec_label_pc_2480:
  %0 = call i32 @pthread_cond_wait(i64* %cond, i64* %mutex), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i32 @function_2490(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_2490:
  %0 = call i32 @fclose(%_IO_FILE* %stream), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define i32 @function_24a0(i8* %s) local_unnamed_addr {
dec_label_pc_24a0:
  %0 = call i32 @strlen(i8* %s), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define void @function_24b0() local_unnamed_addr {
dec_label_pc_24b0:
  call void @__stack_chk_fail(), !insn.addr !23
  ret void, !insn.addr !23
}

define i8* @function_24c0(i8* %s, i32 %c) local_unnamed_addr {
dec_label_pc_24c0:
  %0 = call i8* @strchr(i8* %s, i32 %c), !insn.addr !24
  ret i8* %0, !insn.addr !24
}

define void @function_24d0(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_24d0:
  call void @rewind(%_IO_FILE* %stream), !insn.addr !25
  ret void, !insn.addr !25
}

define i32 @function_24e0(i32 %seconds) local_unnamed_addr {
dec_label_pc_24e0:
  %0 = call i32 @alarm(i32 %seconds), !insn.addr !26
  ret i32 %0, !insn.addr !26
}

define i32 @function_24f0(i32 %fd) local_unnamed_addr {
dec_label_pc_24f0:
  %0 = call i32 @close(i32 %fd), !insn.addr !27
  ret i32 %0, !insn.addr !27
}

define i32 @function_2500([2 x i32] %pipedes) local_unnamed_addr {
dec_label_pc_2500:
  %0 = call i32 @pipe([2 x i32] %pipedes), !insn.addr !28
  ret i32 %0, !insn.addr !28
}

define i32 @function_2510(i32 %fd, i64* %buf, i32 %nbytes) local_unnamed_addr {
dec_label_pc_2510:
  %0 = call i32 @read(i32 %fd, i64* %buf, i32 %nbytes), !insn.addr !29
  ret i32 %0, !insn.addr !29
}

define i32 @function_2520(i64* %s1, i64* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_2520:
  %0 = call i32 @memcmp(i64* %s1, i64* %s2, i32 %n), !insn.addr !30
  ret i32 %0, !insn.addr !30
}

define i32 @function_2530(i64* %cond) local_unnamed_addr {
dec_label_pc_2530:
  %0 = call i32 @pthread_cond_signal(i64* %cond), !insn.addr !31
  ret i32 %0, !insn.addr !31
}

define i32 @function_2540(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_2540:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !32
  ret i32 %0, !insn.addr !32
}

define void (i32)* @function_2550(i32 %sig, void (i32)* %handler) local_unnamed_addr {
dec_label_pc_2550:
  %0 = call void (i32)* @signal(i32 %sig, void (i32)* %handler), !insn.addr !33
  ret void (i32)* %0, !insn.addr !33
}

define i32 @function_2560(i32 %sysno, ...) local_unnamed_addr {
dec_label_pc_2560:
  %0 = call i32 (i32, ...) @syscall(i32 %sysno), !insn.addr !34
  ret i32 %0, !insn.addr !34
}

define i32 @function_2570(i8* %file, %stat* %buf) local_unnamed_addr {
dec_label_pc_2570:
  %0 = call i32 @stat(i8* %file, %stat* %buf), !insn.addr !35
  ret i32 %0, !insn.addr !35
}

define i32 @function_2580(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_2580:
  %0 = call i32 @fileno(%_IO_FILE* %stream), !insn.addr !36
  ret i32 %0, !insn.addr !36
}

define i32 @function_2590(i64* %mutex) local_unnamed_addr {
dec_label_pc_2590:
  %0 = call i32 @pthread_mutex_unlock(i64* %mutex), !insn.addr !37
  ret i32 %0, !insn.addr !37
}

define i64* @function_25a0(i32 %size) local_unnamed_addr {
dec_label_pc_25a0:
  %0 = call i64* @malloc(i32 %size), !insn.addr !38
  ret i64* %0, !insn.addr !38
}

define i32 @function_25b0(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_25b0:
  %0 = call i32 (i8*, i8*, ...) @sscanf(i8* %s, i8* %format), !insn.addr !39
  ret i32 %0, !insn.addr !39
}

define i32 @function_25c0(i32 %fd, i32 %n) local_unnamed_addr {
dec_label_pc_25c0:
  %0 = call i32 @listen(i32 %fd, i32 %n), !insn.addr !40
  ret i32 %0, !insn.addr !40
}

define i32 @function_25d0(i32 %flag, i8* %format, ...) local_unnamed_addr {
dec_label_pc_25d0:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 %flag, i8* %format), !insn.addr !41
  ret i32 %0, !insn.addr !41
}

define i32 @function_25e0(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_25e0:
  %0 = call i32 @bind(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !42
  ret i32 %0, !insn.addr !42
}

define i32 @function_25f0(i32* %newthread, i64* %attr, i64* (i64*)* %start_routine, i64* %arg) local_unnamed_addr {
dec_label_pc_25f0:
  %0 = call i32 @pthread_create(i32* %newthread, i64* %attr, i64* (i64*)* %start_routine, i64* %arg), !insn.addr !43
  ret i32 %0, !insn.addr !43
}

define i32 @function_2600(i32 %pid, i32* %stat_loc, i32 %options) local_unnamed_addr {
dec_label_pc_2600:
  %0 = call i32 @waitpid(i32 %pid, i32* %stat_loc, i32 %options), !insn.addr !44
  ret i32 %0, !insn.addr !44
}

define i32 @function_2610(i8* %file, i32 %oflag, ...) local_unnamed_addr {
dec_label_pc_2610:
  %0 = call i32 (i8*, i32, ...) @open(i8* %file, i32 %oflag), !insn.addr !45
  ret i32 %0, !insn.addr !45
}

define i32 @function_2620(i32 %shmid, i32 %cmd, %shmid_ds* %buf) local_unnamed_addr {
dec_label_pc_2620:
  %0 = call i32 @shmctl(i32 %shmid, i32 %cmd, %shmid_ds* %buf), !insn.addr !46
  ret i32 %0, !insn.addr !46
}

define %_IO_FILE* @function_2630(i8* %filename, i8* %modes) local_unnamed_addr {
dec_label_pc_2630:
  %0 = call %_IO_FILE* @fopen(i8* %filename, i8* %modes), !insn.addr !47
  ret %_IO_FILE* %0, !insn.addr !47
}

define i64* @function_2640(i32 %shmid, i64* %shmaddr, i32 %shmflg) local_unnamed_addr {
dec_label_pc_2640:
  %0 = call i64* @shmat(i32 %shmid, i64* %shmaddr, i32 %shmflg), !insn.addr !48
  ret i64* %0, !insn.addr !48
}

define i32 @function_2650(i32 %key, i32 %size, i32 %shmflg) local_unnamed_addr {
dec_label_pc_2650:
  %0 = call i32 @shmget(i32 %key, i32 %size, i32 %shmflg), !insn.addr !49
  ret i32 %0, !insn.addr !49
}

define i32 @function_2660(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_2660:
  %0 = call i32 @fwrite(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !50
  ret i32 %0, !insn.addr !50
}

define i32 @function_2670(i8* %pathname, i32 %proj_id) local_unnamed_addr {
dec_label_pc_2670:
  %0 = call i32 @ftok(i8* %pathname, i32 %proj_id), !insn.addr !51
  ret i32 %0, !insn.addr !51
}

define i32 @function_2680(i32 %th, i64** %thread_return) local_unnamed_addr {
dec_label_pc_2680:
  %0 = call i32 @pthread_join(i32 %th, i64** %thread_return), !insn.addr !52
  ret i32 %0, !insn.addr !52
}

define i32 @function_2690(i8* %path, i8* %arg, ...) local_unnamed_addr {
dec_label_pc_2690:
  %0 = call i32 (i8*, i8*, ...) @execl(i8* %path, i8* %arg), !insn.addr !53
  ret i32 %0, !insn.addr !53
}

define i32 @function_26a0(i32 %th) local_unnamed_addr {
dec_label_pc_26a0:
  %0 = call i32 @pthread_cancel(i32 %th), !insn.addr !54
  ret i32 %0, !insn.addr !54
}

define i32 @function_26b0(i32 %seconds) local_unnamed_addr {
dec_label_pc_26b0:
  %0 = call i32 @sleep(i32 %seconds), !insn.addr !55
  ret i32 %0, !insn.addr !55
}

define i32 @function_26c0(i64 %stat_loc) local_unnamed_addr {
dec_label_pc_26c0:
  %0 = call i32 @wait(i64 %stat_loc), !insn.addr !56
  ret i32 %0, !insn.addr !56
}

define i32 @function_26d0() local_unnamed_addr {
dec_label_pc_26d0:
  %0 = call i32 @fork(), !insn.addr !57
  ret i32 %0, !insn.addr !57
}

define i8* @function_26e0(i8* %haystack, i8* %needle) local_unnamed_addr {
dec_label_pc_26e0:
  %0 = call i8* @strstr(i8* %haystack, i8* %needle), !insn.addr !58
  ret i8* %0, !insn.addr !58
}

define i32 @function_26f0(i64* %mutex) local_unnamed_addr {
dec_label_pc_26f0:
  %0 = call i32 @pthread_mutex_lock(i64* %mutex), !insn.addr !59
  ret i32 %0, !insn.addr !59
}

define i32 @function_2700(i32 %useconds) local_unnamed_addr {
dec_label_pc_2700:
  %0 = call i32 @usleep(i32 %useconds), !insn.addr !60
  ret i32 %0, !insn.addr !60
}

define i32 @function_2710(i32 %domain, i32 %type, i32 %protocol) local_unnamed_addr {
dec_label_pc_2710:
  %0 = call i32 @socket(i32 %domain, i32 %type, i32 %protocol), !insn.addr !61
  ret i32 %0, !insn.addr !61
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_2720:
  %0 = call i64 @test_standard_library_functions(), !insn.addr !62
  %1 = call i64 @test_system_calls(), !insn.addr !63
  %2 = call i64 @test_thread_concurrency(), !insn.addr !64
  ret i64 0, !insn.addr !65
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_2740:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !66
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !66
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !66
  %3 = call i32 @__libc_start_main(i64 10016, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !66
  %4 = call i64 @__asm_hlt(), !insn.addr !67
  unreachable, !insn.addr !67
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_2770:
  ret i64 28688, !insn.addr !68
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_27a0:
  ret i64 0, !insn.addr !69
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_27e0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* @global_var_7020, align 1, !insn.addr !70
  %3 = icmp eq i8 %2, 0, !insn.addr !70
  %4 = icmp eq i1 %3, false, !insn.addr !71
  br i1 %4, label %dec_label_pc_2818, label %dec_label_pc_27ed, !insn.addr !71

dec_label_pc_27ed:                                ; preds = %dec_label_pc_27e0
  %5 = load i64, i64* inttoptr (i64 28664 to i64*), align 8, !insn.addr !72
  %6 = icmp eq i64 %5, 0, !insn.addr !72
  br i1 %6, label %dec_label_pc_2807, label %dec_label_pc_27fb, !insn.addr !73

dec_label_pc_27fb:                                ; preds = %dec_label_pc_27ed
  %7 = load i64, i64* inttoptr (i64 28680 to i64*), align 8, !insn.addr !74
  %8 = inttoptr i64 %7 to i64*, !insn.addr !75
  call void @__cxa_finalize(i64* %8), !insn.addr !75
  br label %dec_label_pc_2807, !insn.addr !75

dec_label_pc_2807:                                ; preds = %dec_label_pc_27fb, %dec_label_pc_27ed
  %9 = call i64 @deregister_tm_clones(), !insn.addr !76
  store i8 1, i8* @global_var_7020, align 1, !insn.addr !77
  ret i64 %9, !insn.addr !78

dec_label_pc_2818:                                ; preds = %dec_label_pc_27e0
  ret i64 %1, !insn.addr !79

; uselistorder directives
  uselistorder i8* @global_var_7020, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_2820:
  %0 = call i64 @register_tm_clones(), !insn.addr !80
  ret i64 %0, !insn.addr !80
}

define i64 @signal_handler(i64 %arg1) local_unnamed_addr {
dec_label_pc_2829:
  %0 = alloca i64
  %1 = load i64, i64* %0
  store i32 1, i32* @global_var_7110, align 4, !insn.addr !81
  %2 = trunc i64 %arg1 to i32, !insn.addr !82
  store i32 %2, i32* @global_var_710c, align 4, !insn.addr !82
  ret i64 %1, !insn.addr !83
}

define i64 @thread_sum(i64 %arg1) local_unnamed_addr {
dec_label_pc_283e:
  %rax.01.reg2mem = alloca i64, !insn.addr !84
  %.reg2mem = alloca i32, !insn.addr !84
  %0 = trunc i64 %arg1 to i32
  %1 = add i64 %arg1, 4, !insn.addr !85
  %2 = inttoptr i64 %1 to i32*, !insn.addr !85
  %3 = load i32, i32* %2, align 4, !insn.addr !85
  %4 = add i64 %arg1, 8, !insn.addr !86
  %5 = inttoptr i64 %4 to i32*, !insn.addr !86
  store i32 0, i32* %5, align 4, !insn.addr !86
  %6 = icmp ult i32 %3, %0, !insn.addr !87
  br i1 %6, label %dec_label_pc_2859, label %dec_label_pc_2852.lr.ph, !insn.addr !87

dec_label_pc_2852.lr.ph:                          ; preds = %dec_label_pc_283e
  %7 = zext i32 %3 to i64, !insn.addr !85
  %8 = and i64 %arg1, 4294967295, !insn.addr !88
  store i32 0, i32* %.reg2mem
  store i64 %8, i64* %rax.01.reg2mem
  br label %dec_label_pc_2852

dec_label_pc_2852:                                ; preds = %dec_label_pc_2852.lr.ph, %dec_label_pc_2852
  %rax.01.reload = load i64, i64* %rax.01.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %9 = trunc i64 %rax.01.reload to i32, !insn.addr !89
  %10 = add i32 %.reload, %9, !insn.addr !89
  %11 = add nuw nsw i64 %rax.01.reload, 1, !insn.addr !90
  %12 = and i64 %11, 4294967295, !insn.addr !90
  %13 = icmp ugt i64 %12, %7, !insn.addr !87
  store i32 %10, i32* %.reg2mem, !insn.addr !87
  store i64 %12, i64* %rax.01.reg2mem, !insn.addr !87
  br i1 %13, label %dec_label_pc_2859.loopexit, label %dec_label_pc_2852, !insn.addr !87

dec_label_pc_2859.loopexit:                       ; preds = %dec_label_pc_2852
  store i32 %10, i32* %5, align 4
  br label %dec_label_pc_2859

dec_label_pc_2859:                                ; preds = %dec_label_pc_2859.loopexit, %dec_label_pc_283e
  ret i64 0, !insn.addr !91

; uselistorder directives
  uselistorder i32 %10, { 1, 0 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32* %.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.01.reg2mem, { 1, 0, 2 }
  uselistorder i64 %arg1, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_2852, { 1, 0 }
}

define i64 @thread_compute() local_unnamed_addr {
dec_label_pc_285c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = mul i32 %2, %2, !insn.addr !92
  %4 = call i64* @malloc(i32 4), !insn.addr !93
  %5 = ptrtoint i64* %4 to i64, !insn.addr !93
  %6 = bitcast i64* %4 to i32*, !insn.addr !94
  store i32 %3, i32* %6, align 4, !insn.addr !94
  ret i64 %5, !insn.addr !95

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i64 @thread_increment() local_unnamed_addr {
dec_label_pc_2874:
  %0 = alloca i64
  %rbx.01.reg2mem = alloca i64, !insn.addr !96
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = and i64 %1, 4294967295, !insn.addr !97
  %4 = icmp eq i32 %2, 0, !insn.addr !98
  store i64 0, i64* %rbx.01.reg2mem, !insn.addr !98
  br i1 %4, label %dec_label_pc_28b9, label %dec_label_pc_288d, !insn.addr !98

dec_label_pc_288d:                                ; preds = %dec_label_pc_2874, %dec_label_pc_288d
  %rbx.01.reload = load i64, i64* %rbx.01.reg2mem
  %5 = add nuw nsw i64 %rbx.01.reload, 1, !insn.addr !99
  %6 = and i64 %5, 4294967295, !insn.addr !99
  %7 = call i32 @pthread_mutex_lock(i64* nonnull @global_var_70e0), !insn.addr !100
  store i32 ptrtoint (i32* @global_var_7109 to i32), i32* @global_var_7108, align 4, !insn.addr !101
  %8 = call i32 @pthread_mutex_unlock(i64* nonnull @global_var_70e0), !insn.addr !102
  %9 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !103
  %10 = icmp ult i64 %6, %3, !insn.addr !98
  store i64 %6, i64* %rbx.01.reg2mem, !insn.addr !98
  br i1 %10, label %dec_label_pc_288d, label %dec_label_pc_28b9, !insn.addr !98

dec_label_pc_28b9:                                ; preds = %dec_label_pc_288d, %dec_label_pc_2874
  ret i64 0, !insn.addr !104

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %rbx.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_288d, { 1, 0 }
}

define i64 @consumer_thread(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_28c0:
  %0 = call i32 @pthread_mutex_lock(i64* nonnull @global_var_70a0), !insn.addr !105
  %1 = load i32, i32* @global_var_7048, align 4, !insn.addr !106
  %2 = icmp eq i32 %1, 0, !insn.addr !106
  %3 = icmp eq i1 %2, false, !insn.addr !107
  br i1 %3, label %dec_label_pc_28f3, label %dec_label_pc_28e6, !insn.addr !107

dec_label_pc_28e6:                                ; preds = %dec_label_pc_28c0, %dec_label_pc_28e6
  %4 = call i32 @pthread_cond_wait(i64* nonnull @global_var_7060, i64* nonnull @global_var_70a0), !insn.addr !108
  %5 = load i32, i32* @global_var_7048, align 4, !insn.addr !106
  %6 = icmp eq i32 %5, 0, !insn.addr !106
  %7 = icmp eq i1 %6, false, !insn.addr !107
  br i1 %7, label %dec_label_pc_28f3, label %dec_label_pc_28e6, !insn.addr !107

dec_label_pc_28f3:                                ; preds = %dec_label_pc_28e6, %dec_label_pc_28c0
  %8 = load i32, i32* @global_var_7044, align 4, !insn.addr !109
  %9 = call i32 @pthread_mutex_unlock(i64* nonnull @global_var_70a0), !insn.addr !110
  %10 = call i64* @malloc(i32 4), !insn.addr !111
  %11 = ptrtoint i64* %10 to i64, !insn.addr !111
  %12 = bitcast i64* %10 to i32*, !insn.addr !112
  store i32 %8, i32* %12, align 4, !insn.addr !112
  ret i64 %11, !insn.addr !113

; uselistorder directives
  uselistorder label %dec_label_pc_28e6, { 1, 0 }
}

define i64 @producer_thread() local_unnamed_addr {
dec_label_pc_2911:
  %0 = call i32 @sleep(i32 1), !insn.addr !114
  %1 = call i32 @pthread_mutex_lock(i64* nonnull @global_var_70a0), !insn.addr !115
  store i32 42, i32* @global_var_7044, align 4, !insn.addr !116
  store i32 1, i32* @global_var_7048, align 4, !insn.addr !117
  %2 = call i32 @pthread_cond_signal(i64* nonnull @global_var_7060), !insn.addr !118
  %3 = call i32 @pthread_mutex_unlock(i64* nonnull @global_var_70a0), !insn.addr !119
  ret i64 0, !insn.addr !120

; uselistorder directives
  uselistorder i32 (i64*)* @pthread_mutex_unlock, { 2, 1, 0, 3 }
  uselistorder i64* @global_var_7060, { 1, 0 }
  uselistorder i32 (i64*)* @pthread_mutex_lock, { 2, 1, 0, 3 }
  uselistorder i64* @global_var_70a0, { 2, 3, 0, 1, 4 }
}

define i64 @thread_atomic_increment(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_295b:
  %0 = alloca i64
  %storemerge1.reg2mem = alloca i64, !insn.addr !121
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = and i64 %1, 4294967295, !insn.addr !122
  %4 = icmp eq i32 %2, 0, !insn.addr !123
  store i64 0, i64* %storemerge1.reg2mem, !insn.addr !123
  br i1 %4, label %dec_label_pc_2982, label %dec_label_pc_2967, !insn.addr !123

dec_label_pc_2967:                                ; preds = %dec_label_pc_295b, %dec_label_pc_2967
  %storemerge1.reload = load i64, i64* %storemerge1.reg2mem
  %5 = add nuw nsw i64 %storemerge1.reload, 1, !insn.addr !124
  %6 = and i64 %5, 4294967295, !insn.addr !124
  %7 = icmp ult i64 %6, %3, !insn.addr !123
  store i64 %6, i64* %storemerge1.reg2mem, !insn.addr !123
  br i1 %7, label %dec_label_pc_2967, label %dec_label_pc_2963.dec_label_pc_2982_crit_edge, !insn.addr !123

dec_label_pc_2963.dec_label_pc_2982_crit_edge:    ; preds = %dec_label_pc_2967
  %8 = trunc i64 %storemerge1.reload to i32
  %9 = icmp eq i32 %8, ptrtoint (i64* @global_var_7041 to i32), !insn.addr !125
  %10 = add i32 %8, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !126
  %11 = select i1 %9, i32 %10, i32 ptrtoint (i64* @global_var_7041 to i32), !insn.addr !125
  store i32 %11, i32* @global_var_7040, align 4
  br label %dec_label_pc_2982

dec_label_pc_2982:                                ; preds = %dec_label_pc_295b, %dec_label_pc_2963.dec_label_pc_2982_crit_edge
  ret i64 0, !insn.addr !127

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
  uselistorder i64 %storemerge1.reload, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %storemerge1.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_2982, { 1, 0 }
  uselistorder label %dec_label_pc_2967, { 1, 0 }
}

define i64 @thread_atomic_load_store() local_unnamed_addr {
dec_label_pc_2985:
  store i32 ptrtoint (i32* @global_var_70a4 to i32), i32* @global_var_7040, align 4, !insn.addr !128
  ret i64 0, !insn.addr !129
}

define i64 @thread_tls_test(i64 %arg1) local_unnamed_addr {
dec_label_pc_299b:
  %0 = call i32 @__readfsdword(i64 -36), !insn.addr !130
  %1 = call i64 @__readfsqword(i64 0), !insn.addr !131
  %2 = add i32 %0, 50, !insn.addr !132
  call void @__writefsdword(i64 -36, i32 %2), !insn.addr !133
  %3 = add i64 %1, -32, !insn.addr !134
  %4 = inttoptr i64 %3 to i8*, !insn.addr !135
  %5 = inttoptr i64 %arg1 to i8*, !insn.addr !135
  %6 = call i8* @strncpy(i8* %4, i8* %5, i32 31), !insn.addr !135
  %7 = call i64* @malloc(i32 8), !insn.addr !136
  %8 = ptrtoint i64* %7 to i64, !insn.addr !136
  %9 = bitcast i64* %7 to i32*, !insn.addr !137
  store i32 %0, i32* %9, align 4, !insn.addr !137
  %10 = add i64 %8, 4, !insn.addr !138
  %11 = inttoptr i64 %10 to i32*, !insn.addr !138
  store i32 %2, i32* %11, align 4, !insn.addr !138
  ret i64 %8, !insn.addr !139

; uselistorder directives
  uselistorder i64 %8, { 1, 0 }
}

define i64 @param_strcpy() local_unnamed_addr {
dec_label_pc_29e5:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %1 to i8*, !insn.addr !140
  %4 = inttoptr i64 %2 to i8*, !insn.addr !140
  %5 = call i8* @strcpy(i8* %3, i8* %4), !insn.addr !140
  %6 = call i32 @strlen(i8* %5), !insn.addr !141
  %7 = sext i32 %6 to i64, !insn.addr !141
  ret i64 %7, !insn.addr !142

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @call_strcpy() local_unnamed_addr {
dec_label_pc_29f9:
  %rax.0.reg2mem = alloca i64, !insn.addr !143
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !144
  %1 = call i64 @param_strcpy(), !insn.addr !145
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !146
  %3 = icmp eq i64 %0, %2, !insn.addr !146
  store i64 %1, i64* %rax.0.reg2mem, !insn.addr !147
  br i1 %3, label %dec_label_pc_2a37, label %dec_label_pc_2a32, !insn.addr !147

dec_label_pc_2a32:                                ; preds = %dec_label_pc_29f9
  call void @__stack_chk_fail(), !insn.addr !148
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !148
  br label %dec_label_pc_2a37, !insn.addr !148

dec_label_pc_2a37:                                ; preds = %dec_label_pc_2a32, %dec_label_pc_29f9
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !149
}

define i64 @param_strcmp(i8* %arg1, i8* %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_2a3c:
  %0 = call i32 @strcmp(i8* %arg1, i8* %arg2), !insn.addr !150
  %1 = icmp eq i32 %0, 0, !insn.addr !151
  %2 = icmp slt i32 %0, 0, !insn.addr !151
  %3 = icmp eq i1 %2, false, !insn.addr !152
  %4 = icmp eq i1 %1, false, !insn.addr !152
  %5 = icmp eq i1 %3, %4, !insn.addr !152
  %6 = select i1 %4, i64 4294967295, i64 0
  %spec.select = select i1 %5, i64 1, i64 %6
  ret i64 %spec.select, !insn.addr !153

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
}

define i64 @call_strcmp() local_unnamed_addr {
dec_label_pc_2a5d:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = call i64 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_4011, i64 0, i64 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_400d, i64 0, i64 0), i64 %1, i64 %2), !insn.addr !154
  %4 = call i64 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_4015, i64 0, i64 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_4015, i64 0, i64 0), i64 %1, i64 %2), !insn.addr !155
  %5 = call i64 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_401d, i64 0, i64 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_4019, i64 0, i64 0), i64 %1, i64 %2), !insn.addr !156
  %6 = add i64 %4, %3, !insn.addr !157
  %7 = add i64 %6, %5, !insn.addr !158
  %8 = and i64 %7, 4294967295, !insn.addr !158
  ret i64 %8, !insn.addr !159

; uselistorder directives
  uselistorder i64 %2, { 1, 2, 0 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 (i8*, i8*, i64, i64)* @param_strcmp, { 2, 1, 0 }
}

define i64 @param_strlen() local_unnamed_addr {
dec_label_pc_2aa5:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i8*, !insn.addr !160
  %3 = call i32 @strlen(i8* %2), !insn.addr !160
  %4 = sext i32 %3 to i64, !insn.addr !160
  ret i64 %4, !insn.addr !161
}

define i64 @call_strlen() local_unnamed_addr {
dec_label_pc_2ab1:
  ret i64 12, !insn.addr !162
}

define i64 @param_memcpy(i64* %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2abb:
  %0 = inttoptr i64 %arg2 to i8*, !insn.addr !163
  %1 = bitcast i64* %arg1 to i8*, !insn.addr !163
  call void @__asm_rep_movsb_memcpy(i8* %1, i8* %0, i64 %arg3), !insn.addr !163
  ret i64 %arg3, !insn.addr !164
}

define i64 @call_memcpy() local_unnamed_addr {
dec_label_pc_2ac8:
  %0 = alloca i32
  %rax.0.reg2mem = alloca i64, !insn.addr !165
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-36 = alloca i32, align 4
  %stack_var_-56 = alloca i64, align 8
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !166
  %4 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !167
  store i64 85899345930, i64* %stack_var_-56, align 8, !insn.addr !168
  %5 = bitcast i32* %stack_var_-36 to i8*, !insn.addr !169
  call void @__asm_rep_stosd_memset(i8* nonnull %5, i32 0, i64 5), !insn.addr !169
  %6 = bitcast i32* %stack_var_-36 to i64*, !insn.addr !170
  %7 = call i64 @param_memcpy(i64* nonnull %6, i64 %4, i64 20), !insn.addr !170
  %8 = load i32, i32* %stack_var_-36, align 4, !insn.addr !171
  %9 = add i32 %2, %1, !insn.addr !171
  %10 = add i32 %9, %8, !insn.addr !172
  %11 = zext i32 %10 to i64, !insn.addr !172
  %12 = call i64 @__readfsqword(i64 40), !insn.addr !173
  %13 = icmp eq i64 %3, %12, !insn.addr !173
  store i64 %11, i64* %rax.0.reg2mem, !insn.addr !174
  br i1 %13, label %dec_label_pc_2b44, label %dec_label_pc_2b3f, !insn.addr !174

dec_label_pc_2b3f:                                ; preds = %dec_label_pc_2ac8
  call void @__stack_chk_fail(), !insn.addr !175
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !175
  br label %dec_label_pc_2b44, !insn.addr !175

dec_label_pc_2b44:                                ; preds = %dec_label_pc_2b3f, %dec_label_pc_2ac8
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !176

; uselistorder directives
  uselistorder i32* %stack_var_-36, { 0, 2, 1 }
  uselistorder i32* %0, { 1, 0 }
}

define i64 @param_memcmp(i64* %arg1, i64* %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_2b49:
  %0 = trunc i64 %arg3 to i32, !insn.addr !177
  %1 = call i32 @memcmp(i64* %arg1, i64* %arg2, i32 %0), !insn.addr !177
  %2 = icmp eq i32 %1, 0, !insn.addr !178
  %3 = icmp slt i32 %1, 0, !insn.addr !178
  %4 = icmp eq i1 %3, false, !insn.addr !179
  %5 = icmp eq i1 %2, false, !insn.addr !179
  %6 = icmp eq i1 %4, %5, !insn.addr !179
  %7 = select i1 %5, i64 4294967295, i64 0
  %spec.select = select i1 %6, i64 1, i64 %7
  ret i64 %spec.select, !insn.addr !180

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
}

define i64 @call_memcmp() local_unnamed_addr {
dec_label_pc_2b6a:
  %0 = alloca i64
  %rax.0.reg2mem = alloca i64, !insn.addr !181
  %1 = load i64, i64* %0
  %stack_var_-44 = alloca i64, align 8
  %stack_var_-56 = alloca i64, align 8
  %stack_var_-68 = alloca i64, align 8
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !182
  store i64 8589934593, i64* %stack_var_-68, align 8, !insn.addr !183
  store i64 8589934593, i64* %stack_var_-56, align 8, !insn.addr !184
  store i64 8589934593, i64* %stack_var_-44, align 8, !insn.addr !185
  %3 = call i64 @param_memcmp(i64* nonnull %stack_var_-68, i64* nonnull %stack_var_-56, i64 12, i64 %1), !insn.addr !186
  %4 = call i64 @param_memcmp(i64* nonnull %stack_var_-68, i64* nonnull %stack_var_-44, i64 12, i64 %1), !insn.addr !187
  %5 = add i64 %4, %3, !insn.addr !188
  %6 = and i64 %5, 4294967295, !insn.addr !188
  %7 = call i64 @__readfsqword(i64 40), !insn.addr !189
  %8 = icmp eq i64 %2, %7, !insn.addr !189
  store i64 %6, i64* %rax.0.reg2mem, !insn.addr !190
  br i1 %8, label %dec_label_pc_2bf5, label %dec_label_pc_2bf0, !insn.addr !190

dec_label_pc_2bf0:                                ; preds = %dec_label_pc_2b6a
  call void @__stack_chk_fail(), !insn.addr !191
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !191
  br label %dec_label_pc_2bf5, !insn.addr !191

dec_label_pc_2bf5:                                ; preds = %dec_label_pc_2bf0, %dec_label_pc_2b6a
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !192

; uselistorder directives
  uselistorder i64 (i64*, i64*, i64, i64)* @param_memcmp, { 1, 0 }
  uselistorder i64 8589934593, { 2, 1, 0 }
}

define i64 @param_printf(i64 %arg1, i8* %arg2) local_unnamed_addr {
dec_label_pc_2bfc:
  %0 = and i64 %arg1, 4294967295, !insn.addr !193
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_4021, i64 0, i64 0), i64 %0, i8* %arg2), !insn.addr !194
  %2 = sext i32 %1 to i64, !insn.addr !194
  ret i64 %2, !insn.addr !194
}

define i64 @call_printf() local_unnamed_addr {
dec_label_pc_2c18:
  %0 = call i64 @param_printf(i64 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_4094, i64 0, i64 0)), !insn.addr !195
  ret i64 %0, !insn.addr !195
}

define i64 @param_scanf() local_unnamed_addr {
dec_label_pc_2c2a:
  %0 = alloca i64
  %1 = alloca i32
  %rax.1.reg2mem = alloca i64, !insn.addr !196
  %2 = load i64, i64* %0
  %3 = load i32, i32* %1
  %4 = load i32, i32* %1
  %5 = call i64 @__readfsqword(i64 40), !insn.addr !197
  %6 = inttoptr i64 %2 to i8*, !insn.addr !198
  %7 = call i32 (i8*, i8*, ...) @sscanf(i8* %6, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_4036, i64 0, i64 0)), !insn.addr !198
  %8 = icmp eq i32 %7, 2, !insn.addr !199
  %9 = icmp eq i1 %8, false, !insn.addr !200
  %10 = add i32 %4, %3
  %11 = zext i32 %10 to i64
  %rax.0 = select i1 %9, i64 4294967295, i64 %11
  %12 = call i64 @__readfsqword(i64 40), !insn.addr !201
  %13 = icmp eq i64 %5, %12, !insn.addr !201
  store i64 %rax.0, i64* %rax.1.reg2mem, !insn.addr !202
  br i1 %13, label %dec_label_pc_2c7e, label %dec_label_pc_2c79, !insn.addr !202

dec_label_pc_2c79:                                ; preds = %dec_label_pc_2c2a
  call void @__stack_chk_fail(), !insn.addr !203
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.1.reg2mem, !insn.addr !203
  br label %dec_label_pc_2c7e, !insn.addr !203

dec_label_pc_2c7e:                                ; preds = %dec_label_pc_2c79, %dec_label_pc_2c2a
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !204

; uselistorder directives
  uselistorder i32* %1, { 1, 0 }
}

define i64 @call_scanf() local_unnamed_addr {
dec_label_pc_2c83:
  %0 = call i64 @param_scanf(), !insn.addr !205
  ret i64 %0, !insn.addr !205
}

define i64 @param_fopen_fclose(i8* %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_2c90:
  %r12.0.reg2mem = alloca i64, !insn.addr !206
  %0 = call %_IO_FILE* @fopen(i8* %arg1, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_4044, i64 0, i64 0)), !insn.addr !207
  %1 = icmp eq %_IO_FILE* %0, null, !insn.addr !208
  store i64 4294967295, i64* %r12.0.reg2mem, !insn.addr !209
  br i1 %1, label %dec_label_pc_2cc3, label %dec_label_pc_2cad, !insn.addr !209

dec_label_pc_2cad:                                ; preds = %dec_label_pc_2c90
  %2 = call i32 @fileno(%_IO_FILE* nonnull %0), !insn.addr !210
  %3 = zext i32 %2 to i64, !insn.addr !211
  %4 = call i32 @fclose(%_IO_FILE* nonnull %0), !insn.addr !212
  store i64 %3, i64* %r12.0.reg2mem, !insn.addr !212
  br label %dec_label_pc_2cc3, !insn.addr !212

dec_label_pc_2cc3:                                ; preds = %dec_label_pc_2cad, %dec_label_pc_2c90
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  ret i64 %r12.0.reload, !insn.addr !213
}

define i64 @call_fopen_fclose() local_unnamed_addr {
dec_label_pc_2ccb:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = call i64 @param_fopen_fclose(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_4046, i64 0, i64 0), i64 %1, i64 %2, i64 %3), !insn.addr !214
  %5 = trunc i64 %4 to i32, !insn.addr !215
  %6 = ashr i32 %5, 31, !insn.addr !215
  %7 = or i32 %6, 42, !insn.addr !216
  %8 = zext i32 %7 to i64, !insn.addr !216
  ret i64 %8, !insn.addr !217

; uselistorder directives
  uselistorder i64* %0, { 2, 1, 0 }
}

define i64 @param_fread_fwrite(i8* %arg1) local_unnamed_addr {
dec_label_pc_2ce4:
  %rax.1.reg2mem = alloca i64, !insn.addr !218
  %rax.0.reg2mem = alloca i64, !insn.addr !218
  %stack_var_-80 = alloca i64, align 8
  %stack_var_-88 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !219
  %1 = call %_IO_FILE* @fopen(i8* %arg1, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_4052, i64 0, i64 0)), !insn.addr !220
  %2 = icmp eq %_IO_FILE* %1, null, !insn.addr !221
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !222
  br i1 %2, label %dec_label_pc_2dab, label %dec_label_pc_2d22, !insn.addr !222

dec_label_pc_2d22:                                ; preds = %dec_label_pc_2ce4
  %3 = call i32 @fwrite(i64* bitcast ([19 x i8]* @global_var_4055 to i64*), i32 1, i32 18, %_IO_FILE* nonnull %1), !insn.addr !223
  %4 = icmp eq i32 %3, 18, !insn.addr !224
  br i1 %4, label %dec_label_pc_2d53, label %dec_label_pc_2d47, !insn.addr !225

dec_label_pc_2d47:                                ; preds = %dec_label_pc_2d22
  %5 = call i32 @fclose(%_IO_FILE* nonnull %1), !insn.addr !226
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !227
  br label %dec_label_pc_2dab, !insn.addr !227

dec_label_pc_2d53:                                ; preds = %dec_label_pc_2d22
  %6 = ptrtoint i64* %stack_var_-88 to i64, !insn.addr !228
  call void @rewind(%_IO_FILE* nonnull %1), !insn.addr !229
  %7 = call i32 @fread(i64* nonnull %stack_var_-80, i32 1, i32 18, %_IO_FILE* nonnull %1), !insn.addr !230
  %8 = sext i32 %7 to i64, !insn.addr !230
  %9 = add i64 %6, 8, !insn.addr !231
  %10 = add i64 %9, %8, !insn.addr !231
  %11 = inttoptr i64 %10 to i8*, !insn.addr !231
  store i8 0, i8* %11, align 1, !insn.addr !231
  %12 = call i32 @fclose(%_IO_FILE* nonnull %1), !insn.addr !232
  %13 = call i32 @unlink(i8* %arg1), !insn.addr !233
  %14 = icmp eq i32 %7, 18, !insn.addr !234
  %15 = icmp eq i1 %14, false, !insn.addr !235
  store i64 4294967293, i64* %rax.0.reg2mem, !insn.addr !235
  br i1 %15, label %dec_label_pc_2dab, label %dec_label_pc_2d95, !insn.addr !235

dec_label_pc_2d95:                                ; preds = %dec_label_pc_2d53
  %16 = bitcast i64* %stack_var_-80 to i8*, !insn.addr !236
  %17 = call i32 @strcmp(i8* nonnull %16, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_4055, i64 0, i64 0)), !insn.addr !236
  %18 = icmp eq i32 %17, 0, !insn.addr !237
  %19 = select i1 %18, i64 42, i64 4294967293, !insn.addr !238
  store i64 %19, i64* %rax.0.reg2mem, !insn.addr !238
  br label %dec_label_pc_2dab, !insn.addr !238

dec_label_pc_2dab:                                ; preds = %dec_label_pc_2d95, %dec_label_pc_2d53, %dec_label_pc_2d47, %dec_label_pc_2ce4
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %20 = call i64 @__readfsqword(i64 40), !insn.addr !239
  %21 = icmp eq i64 %0, %20, !insn.addr !239
  store i64 %rax.0.reload, i64* %rax.1.reg2mem, !insn.addr !240
  br i1 %21, label %dec_label_pc_2dc0, label %dec_label_pc_2dbb, !insn.addr !240

dec_label_pc_2dbb:                                ; preds = %dec_label_pc_2dab
  call void @__stack_chk_fail(), !insn.addr !241
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.1.reg2mem, !insn.addr !241
  br label %dec_label_pc_2dc0, !insn.addr !241

dec_label_pc_2dc0:                                ; preds = %dec_label_pc_2dbb, %dec_label_pc_2dab
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !242

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 3, 1, 4 }
  uselistorder i32 (i8*, i8*)* @strcmp, { 1, 0, 2 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 2, 1, 0, 3 }
  uselistorder i32 18, { 0, 2, 1, 3 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 1, 0, 2 }
}

define i64 @call_fread_fwrite() local_unnamed_addr {
dec_label_pc_2dcd:
  %0 = call i64 @param_fread_fwrite(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_4068, i64 0, i64 0)), !insn.addr !243
  ret i64 %0, !insn.addr !243
}

define i64 @param_malloc_free(i64 %arg1) local_unnamed_addr {
dec_label_pc_2ddd:
  %r12.0.reg2mem = alloca i64, !insn.addr !244
  %storemerge1.reg2mem = alloca i64, !insn.addr !244
  %0 = mul i64 %arg1, 4, !insn.addr !245
  %1 = trunc i64 %0 to i32, !insn.addr !246
  %2 = call i64* @malloc(i32 %1), !insn.addr !246
  %3 = icmp eq i64* %2, null, !insn.addr !247
  store i64 4294967295, i64* %r12.0.reg2mem, !insn.addr !248
  br i1 %3, label %dec_label_pc_2e23, label %dec_label_pc_2e06.preheader, !insn.addr !248

dec_label_pc_2e06.preheader:                      ; preds = %dec_label_pc_2ddd
  %4 = ptrtoint i64* %2 to i64, !insn.addr !246
  %5 = icmp eq i64 %arg1, 0, !insn.addr !249
  store i64 0, i64* %storemerge1.reg2mem, !insn.addr !250
  br i1 %5, label %dec_label_pc_2e16, label %dec_label_pc_2e0b, !insn.addr !250

dec_label_pc_2e0b:                                ; preds = %dec_label_pc_2e06.preheader, %dec_label_pc_2e0b
  %storemerge1.reload = load i64, i64* %storemerge1.reg2mem
  %6 = trunc i64 %storemerge1.reload to i32
  %7 = mul i32 %6, 10, !insn.addr !251
  %8 = mul i64 %storemerge1.reload, 4, !insn.addr !252
  %9 = add i64 %8, %4, !insn.addr !252
  %10 = inttoptr i64 %9 to i32*, !insn.addr !252
  store i32 %7, i32* %10, align 4, !insn.addr !252
  %11 = add nuw i64 %storemerge1.reload, 1, !insn.addr !253
  %12 = icmp eq i64 %11, %arg1, !insn.addr !249
  store i64 %11, i64* %storemerge1.reg2mem, !insn.addr !250
  br i1 %12, label %dec_label_pc_2e16, label %dec_label_pc_2e0b, !insn.addr !250

dec_label_pc_2e16:                                ; preds = %dec_label_pc_2e0b, %dec_label_pc_2e06.preheader
  %13 = bitcast i64* %2 to i32*, !insn.addr !254
  %14 = load i32, i32* %13, align 4, !insn.addr !254
  %15 = add i64 %0, -4, !insn.addr !255
  %16 = add i64 %15, %4, !insn.addr !255
  %17 = inttoptr i64 %16 to i32*, !insn.addr !255
  %18 = load i32, i32* %17, align 4, !insn.addr !255
  %19 = add i32 %18, %14, !insn.addr !255
  %20 = zext i32 %19 to i64, !insn.addr !255
  call void @free(i64* nonnull %2), !insn.addr !256
  store i64 %20, i64* %r12.0.reg2mem, !insn.addr !256
  br label %dec_label_pc_2e23, !insn.addr !256

dec_label_pc_2e23:                                ; preds = %dec_label_pc_2e16, %dec_label_pc_2ddd
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  ret i64 %r12.0.reload, !insn.addr !257

; uselistorder directives
  uselistorder i64 %storemerge1.reload, { 0, 2, 1 }
  uselistorder i64 %4, { 1, 0 }
  uselistorder i64* %2, { 0, 1, 3, 2 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64* %storemerge1.reg2mem, { 2, 0, 1 }
  uselistorder i64 %arg1, { 2, 1, 0 }
  uselistorder label %dec_label_pc_2e0b, { 1, 0 }
}

define i64 @call_malloc_free() local_unnamed_addr {
dec_label_pc_2e2b:
  %0 = call i64 @param_malloc_free(i64 10), !insn.addr !258
  ret i64 %0, !insn.addr !258
}

define i64 @param_memset(i64* %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_2e36:
  %r8.0.lcssa.reg2mem = alloca i64, !insn.addr !259
  %rax.01.reg2mem = alloca i64, !insn.addr !259
  %r8.02.reg2mem = alloca i64, !insn.addr !259
  %0 = ptrtoint i64* %arg1 to i64
  %1 = bitcast i64* %arg1 to i8*, !insn.addr !260
  call void @__asm_rep_stosb_memset(i8* %1, i8 0, i64 %arg2), !insn.addr !260
  %2 = icmp eq i64 %arg2, 0, !insn.addr !261
  store i64 0, i64* %r8.02.reg2mem, !insn.addr !262
  store i64 0, i64* %rax.01.reg2mem, !insn.addr !262
  store i64 0, i64* %r8.0.lcssa.reg2mem, !insn.addr !262
  br i1 %2, label %dec_label_pc_2e5a, label %dec_label_pc_2e4e, !insn.addr !262

dec_label_pc_2e4e:                                ; preds = %dec_label_pc_2e36, %dec_label_pc_2e4e
  %rax.01.reload = load i64, i64* %rax.01.reg2mem
  %r8.02.reload = load i64, i64* %r8.02.reg2mem
  %3 = add i64 %rax.01.reload, %0, !insn.addr !263
  %4 = inttoptr i64 %3 to i8*, !insn.addr !263
  %5 = load i8, i8* %4, align 1, !insn.addr !263
  %6 = add nuw i64 %rax.01.reload, 1, !insn.addr !264
  %7 = zext i8 %5 to i64, !insn.addr !265
  %8 = add nuw nsw i64 %r8.02.reload, %7, !insn.addr !265
  %9 = and i64 %8, 4294967295, !insn.addr !265
  %10 = icmp eq i64 %6, %arg2, !insn.addr !261
  store i64 %9, i64* %r8.02.reg2mem, !insn.addr !262
  store i64 %6, i64* %rax.01.reg2mem, !insn.addr !262
  store i64 %9, i64* %r8.0.lcssa.reg2mem, !insn.addr !262
  br i1 %10, label %dec_label_pc_2e5a, label %dec_label_pc_2e4e, !insn.addr !262

dec_label_pc_2e5a:                                ; preds = %dec_label_pc_2e4e, %dec_label_pc_2e36
  %r8.0.lcssa.reload = load i64, i64* %r8.0.lcssa.reg2mem
  ret i64 %r8.0.lcssa.reload, !insn.addr !266

; uselistorder directives
  uselistorder i64* %r8.02.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.01.reg2mem, { 2, 0, 1 }
  uselistorder i64 %arg2, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2e4e, { 1, 0 }
}

define i64 @call_memset() local_unnamed_addr {
dec_label_pc_2e5e:
  %0 = alloca i64
  %1 = alloca i32
  %rax.1.reg2mem = alloca i64, !insn.addr !267
  %rax.0.reg2mem = alloca i64, !insn.addr !267
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = load i32, i32* %1
  %stack_var_-56 = alloca i32, align 4
  %6 = call i64 @__readfsqword(i64 40), !insn.addr !268
  %7 = ptrtoint i32* %stack_var_-56 to i64, !insn.addr !269
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !270
  br label %dec_label_pc_2e76, !insn.addr !270

dec_label_pc_2e76:                                ; preds = %dec_label_pc_2e76, %dec_label_pc_2e5e
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %8 = mul i64 %rax.0.reload, 4, !insn.addr !271
  %9 = add i64 %8, %7, !insn.addr !271
  %10 = inttoptr i64 %9 to i32*, !insn.addr !271
  store i32 255, i32* %10, align 4, !insn.addr !271
  %11 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !272
  %exitcond = icmp eq i64 %11, 10
  store i64 %11, i64* %rax.0.reg2mem, !insn.addr !273
  br i1 %exitcond, label %dec_label_pc_2e89, label %dec_label_pc_2e76, !insn.addr !273

dec_label_pc_2e89:                                ; preds = %dec_label_pc_2e76
  %12 = bitcast i32* %stack_var_-56 to i64*, !insn.addr !274
  %13 = call i64 @param_memset(i64* nonnull %12, i64 40, i64 %3, i64 %4, i64 %2), !insn.addr !274
  %14 = load i32, i32* %stack_var_-56, align 4, !insn.addr !275
  %15 = add i32 %14, %5, !insn.addr !275
  %16 = zext i32 %15 to i64, !insn.addr !275
  %17 = call i64 @__readfsqword(i64 40), !insn.addr !276
  %18 = icmp eq i64 %6, %17, !insn.addr !276
  store i64 %16, i64* %rax.1.reg2mem, !insn.addr !277
  br i1 %18, label %dec_label_pc_2eaf, label %dec_label_pc_2eaa, !insn.addr !277

dec_label_pc_2eaa:                                ; preds = %dec_label_pc_2e89
  call void @__stack_chk_fail(), !insn.addr !278
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.1.reg2mem, !insn.addr !278
  br label %dec_label_pc_2eaf, !insn.addr !278

dec_label_pc_2eaf:                                ; preds = %dec_label_pc_2eaa, %dec_label_pc_2e89
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !279

; uselistorder directives
  uselistorder i32* %stack_var_-56, { 2, 0, 1 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %0, { 2, 1, 0 }
}

define i64 @param_strchr_strstr(i8* %arg1, i64 %arg2, i8* %arg3) local_unnamed_addr {
dec_label_pc_2eb4:
  %0 = ptrtoint i8* %arg1 to i64
  %1 = trunc i64 %arg2 to i32, !insn.addr !280
  %sext = mul i32 %1, 16777216
  %2 = ashr exact i32 %sext, 24, !insn.addr !281
  %3 = call i8* @strchr(i8* %arg1, i32 %2), !insn.addr !281
  %4 = ptrtoint i8* %3 to i64, !insn.addr !281
  %5 = sub i64 %4, %0, !insn.addr !282
  %6 = icmp eq i8* %3, null, !insn.addr !283
  %7 = select i1 %6, i64 4294967295, i64 %5, !insn.addr !284
  %8 = call i8* @strstr(i8* %arg1, i8* %arg3), !insn.addr !285
  %9 = ptrtoint i8* %8 to i64, !insn.addr !285
  %10 = sub i64 %9, %0, !insn.addr !286
  %11 = icmp eq i8* %8, null, !insn.addr !287
  %12 = icmp eq i1 %11, false, !insn.addr !288
  %13 = select i1 %12, i64 %10, i64 4294967295, !insn.addr !288
  %14 = add i64 %13, %7, !insn.addr !289
  %15 = and i64 %14, 4294967295, !insn.addr !289
  ret i64 %15, !insn.addr !290

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i64 @call_strchr_strstr() local_unnamed_addr {
dec_label_pc_2f04:
  %0 = call i64 @param_strchr_strstr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_4085, i64 0, i64 0), i64 66, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_407f, i64 0, i64 0)), !insn.addr !291
  ret i64 %0, !insn.addr !291
}

define i64 @test_standard_library_functions() local_unnamed_addr {
dec_label_pc_2f1d:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_4099 to i8*)), !insn.addr !292
  %1 = call i64 @call_strcpy(), !insn.addr !293
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_40bd to i8*)), !insn.addr !294
  %3 = call i64 @call_strcmp(), !insn.addr !295
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_40d8 to i8*)), !insn.addr !296
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_40f3 to i8*)), !insn.addr !297
  %6 = call i64 @call_memcpy(), !insn.addr !298
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_410f to i8*)), !insn.addr !299
  %8 = call i64 @call_memcmp(), !insn.addr !300
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_412b to i8*)), !insn.addr !301
  %10 = call i64 @call_printf(), !insn.addr !302
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_4147 to i8*)), !insn.addr !303
  %12 = call i64 @call_scanf(), !insn.addr !304
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_4163 to i8*)), !insn.addr !305
  %14 = call i64 @call_fopen_fclose(), !insn.addr !306
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_4180 to i8*)), !insn.addr !307
  %16 = call i64 @call_fread_fwrite(), !insn.addr !308
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_419c to i8*)), !insn.addr !309
  %18 = call i64 @call_malloc_free(), !insn.addr !310
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_41b8 to i8*)), !insn.addr !311
  %20 = call i64 @call_memset(), !insn.addr !312
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_41d4 to i8*)), !insn.addr !313
  %22 = call i64 @call_strchr_strstr(), !insn.addr !314
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_41ef to i8*)), !insn.addr !315
  %24 = sext i32 %23 to i64, !insn.addr !315
  ret i64 %24, !insn.addr !315
}

define i64 @param_linux_syscall(i8* %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_307b:
  %r12.0.in.reg2mem = alloca i32, !insn.addr !316
  %0 = call i32 (i32, ...) @syscall(i32 2), !insn.addr !317
  %1 = icmp slt i32 %0, 0, !insn.addr !318
  %2 = icmp eq i1 %1, false, !insn.addr !319
  br i1 %2, label %dec_label_pc_30a3, label %dec_label_pc_3096, !insn.addr !319

dec_label_pc_3096:                                ; preds = %dec_label_pc_307b
  %3 = call i32* @__errno_location(), !insn.addr !320
  %4 = load i32, i32* %3, align 4, !insn.addr !321
  %5 = sub i32 0, %4, !insn.addr !322
  store i32 %5, i32* %r12.0.in.reg2mem, !insn.addr !323
  br label %dec_label_pc_30b4, !insn.addr !323

dec_label_pc_30a3:                                ; preds = %dec_label_pc_307b
  %6 = call i32 (i32, ...) @syscall(i32 3), !insn.addr !324
  store i32 %0, i32* %r12.0.in.reg2mem, !insn.addr !324
  br label %dec_label_pc_30b4, !insn.addr !324

dec_label_pc_30b4:                                ; preds = %dec_label_pc_30a3, %dec_label_pc_3096
  %r12.0.in.reload = load i32, i32* %r12.0.in.reg2mem
  %r12.0 = zext i32 %r12.0.in.reload to i64
  ret i64 %r12.0, !insn.addr !325

; uselistorder directives
  uselistorder i32* %r12.0.in.reg2mem, { 0, 2, 1 }
  uselistorder i32 (i32, ...)* @syscall, { 1, 0, 2 }
}

define i64 @call_linux_syscall() local_unnamed_addr {
dec_label_pc_30ba:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = call i64 @param_linux_syscall(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_4046, i64 0, i64 0), i64 %1, i64 %2), !insn.addr !326
  %4 = trunc i64 %3 to i32, !insn.addr !327
  %5 = ashr i32 %4, 31, !insn.addr !327
  %6 = or i32 %5, 42, !insn.addr !328
  %7 = zext i32 %6 to i64, !insn.addr !328
  ret i64 %7, !insn.addr !329

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @param_win32_api() local_unnamed_addr {
dec_label_pc_30d3:
  %0 = alloca i64
  %rax.1.reg2mem = alloca i64, !insn.addr !330
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %stack_var_-160 = alloca i64, align 8
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !331
  %4 = inttoptr i64 %1 to i8*, !insn.addr !332
  %5 = bitcast i64* %stack_var_-160 to %stat*, !insn.addr !332
  %6 = call i32 @stat(i8* %4, %stat* nonnull %5), !insn.addr !332
  %7 = icmp slt i32 %6, 0, !insn.addr !333
  %8 = icmp slt i64 %2, 1
  %9 = select i1 %8, i64 4294967294, i64 42
  %rax.0 = select i1 %7, i64 4294967295, i64 %9
  %10 = call i64 @__readfsqword(i64 40), !insn.addr !334
  %11 = icmp eq i64 %3, %10, !insn.addr !334
  store i64 %rax.0, i64* %rax.1.reg2mem, !insn.addr !335
  br i1 %11, label %dec_label_pc_3131, label %dec_label_pc_312c, !insn.addr !335

dec_label_pc_312c:                                ; preds = %dec_label_pc_30d3
  call void @__stack_chk_fail(), !insn.addr !336
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.1.reg2mem, !insn.addr !336
  br label %dec_label_pc_3131, !insn.addr !336

dec_label_pc_3131:                                ; preds = %dec_label_pc_312c, %dec_label_pc_30d3
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !337

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @call_win32_api() local_unnamed_addr {
dec_label_pc_3139:
  %0 = call i64 @param_win32_api(), !insn.addr !338
  ret i64 %0, !insn.addr !338
}

define i64 @param_fork_exec(i8* %arg1, i32 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_3146:
  %rax.1.reg2mem = alloca i64, !insn.addr !339
  %rax.0.reg2mem = alloca i64, !insn.addr !339
  %stack_var_-36 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !340
  %1 = call i32 @fork(), !insn.addr !341
  %2 = icmp slt i32 %1, 0, !insn.addr !342
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !343
  br i1 %2, label %dec_label_pc_31bf, label %dec_label_pc_3170, !insn.addr !343

dec_label_pc_3170:                                ; preds = %dec_label_pc_3146
  %3 = icmp eq i32 %1, 0, !insn.addr !342
  %4 = icmp eq i1 %3, false, !insn.addr !344
  br i1 %4, label %dec_label_pc_318e, label %dec_label_pc_3172, !insn.addr !344

dec_label_pc_3172:                                ; preds = %dec_label_pc_3170
  %5 = call i32 (i8*, i8*, ...) @execl(i8* %arg1, i8* %arg1), !insn.addr !345
  call void @_exit(i32 127), !insn.addr !346
  unreachable, !insn.addr !346

dec_label_pc_318e:                                ; preds = %dec_label_pc_3170
  %6 = call i32 @waitpid(i32 %1, i32* nonnull %stack_var_-36, i32 0), !insn.addr !347
  %7 = icmp slt i32 %6, 0, !insn.addr !348
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !349
  br i1 %7, label %dec_label_pc_31bf, label %dec_label_pc_31a9, !insn.addr !349

dec_label_pc_31a9:                                ; preds = %dec_label_pc_318e
  %8 = load i32, i32* %stack_var_-36, align 4, !insn.addr !350
  %9 = urem i32 %8, 128
  %10 = icmp eq i32 %9, 0, !insn.addr !351
  %11 = icmp eq i1 %10, false, !insn.addr !352
  store i64 4294967293, i64* %rax.0.reg2mem, !insn.addr !352
  br i1 %11, label %dec_label_pc_31bf, label %dec_label_pc_31b7, !insn.addr !352

dec_label_pc_31b7:                                ; preds = %dec_label_pc_31a9
  %12 = udiv i32 %8, 256
  %13 = urem i32 %12, 256
  %14 = zext i32 %13 to i64, !insn.addr !353
  store i64 %14, i64* %rax.0.reg2mem, !insn.addr !354
  br label %dec_label_pc_31bf, !insn.addr !354

dec_label_pc_31bf:                                ; preds = %dec_label_pc_3146, %dec_label_pc_31b7, %dec_label_pc_31a9, %dec_label_pc_318e
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %15 = call i64 @__readfsqword(i64 40), !insn.addr !355
  %16 = icmp eq i64 %0, %15, !insn.addr !355
  store i64 %rax.0.reload, i64* %rax.1.reg2mem, !insn.addr !356
  br i1 %16, label %dec_label_pc_31d4, label %dec_label_pc_31cf, !insn.addr !356

dec_label_pc_31cf:                                ; preds = %dec_label_pc_31bf
  call void @__stack_chk_fail(), !insn.addr !357
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.1.reg2mem, !insn.addr !357
  br label %dec_label_pc_31d4, !insn.addr !357

dec_label_pc_31d4:                                ; preds = %dec_label_pc_31cf, %dec_label_pc_31bf
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !358

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 3, 4, 1 }
  uselistorder i32 256, { 1, 0 }
  uselistorder label %dec_label_pc_31bf, { 1, 2, 3, 0 }
}

define i64 @call_fork_exec(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_31dc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = call i64 @param_fork_exec(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_420b, i64 0, i64 0), i32 0, i64 %1, i64 %2), !insn.addr !359
  %4 = trunc i64 %3 to i32, !insn.addr !360
  %5 = icmp eq i32 %4, 0, !insn.addr !360
  %6 = select i1 %5, i64 42, i64 4294967295, !insn.addr !361
  ret i64 %6, !insn.addr !362

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @param_pipe_communication() local_unnamed_addr {
dec_label_pc_31fb:
  %0 = alloca i32
  %rax.1.reg2mem = alloca i64, !insn.addr !363
  %rax.0.reg2mem = alloca i64, !insn.addr !363
  %stack_var_-48 = alloca i64, align 8
  %1 = load i32, i32* %0
  %stack_var_-56 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-56 to i64, !insn.addr !364
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !365
  %4 = trunc i64 %2 to i32, !insn.addr !366
  %5 = insertvalue [2 x i32] undef, i32 %4, 0, !insn.addr !366
  %6 = call i32 @pipe([2 x i32] %5), !insn.addr !366
  %7 = icmp slt i32 %6, 0, !insn.addr !367
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !368
  br i1 %7, label %dec_label_pc_32a6, label %dec_label_pc_3220, !insn.addr !368

dec_label_pc_3220:                                ; preds = %dec_label_pc_31fb
  %8 = call i32 @fork(), !insn.addr !369
  %9 = icmp slt i32 %8, 0, !insn.addr !370
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !371
  br i1 %9, label %dec_label_pc_32a6, label %dec_label_pc_3229, !insn.addr !371

dec_label_pc_3229:                                ; preds = %dec_label_pc_3220
  %10 = icmp eq i32 %8, 0, !insn.addr !370
  %11 = icmp eq i1 %10, false, !insn.addr !372
  br i1 %11, label %dec_label_pc_3258, label %dec_label_pc_322b, !insn.addr !372

dec_label_pc_322b:                                ; preds = %dec_label_pc_3229
  %12 = load i32, i32* %stack_var_-56, align 4, !insn.addr !373
  %13 = call i32 @close(i32 %12), !insn.addr !374
  %14 = call i32 @write(i32 %1, i64* bitcast ([10 x i8]* @global_var_4215 to i64*), i32 9), !insn.addr !375
  %15 = call i32 @close(i32 %1), !insn.addr !376
  call void @_exit(i32 0), !insn.addr !377
  unreachable, !insn.addr !377

dec_label_pc_3258:                                ; preds = %dec_label_pc_3229
  %16 = call i32 @close(i32 %1), !insn.addr !378
  %17 = load i32, i32* %stack_var_-56, align 4, !insn.addr !379
  %18 = call i32 @read(i32 %17, i64* nonnull %stack_var_-48, i32 31), !insn.addr !380
  %19 = sext i32 %18 to i64, !insn.addr !380
  %20 = load i32, i32* %stack_var_-56, align 4, !insn.addr !381
  %21 = add i64 %2, 8, !insn.addr !382
  %22 = add i64 %21, %19, !insn.addr !382
  %23 = inttoptr i64 %22 to i8*, !insn.addr !382
  store i8 0, i8* %23, align 1, !insn.addr !382
  %24 = call i32 @close(i32 %20), !insn.addr !383
  %25 = call i32 @wait(i64 0), !insn.addr !384
  %26 = icmp slt i32 %18, 1
  %27 = select i1 %26, i64 4294967293, i64 42, !insn.addr !385
  store i64 %27, i64* %rax.0.reg2mem, !insn.addr !386
  br label %dec_label_pc_32a6, !insn.addr !386

dec_label_pc_32a6:                                ; preds = %dec_label_pc_3220, %dec_label_pc_31fb, %dec_label_pc_3258
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %28 = call i64 @__readfsqword(i64 40), !insn.addr !387
  %29 = icmp eq i64 %3, %28, !insn.addr !387
  store i64 %rax.0.reload, i64* %rax.1.reg2mem, !insn.addr !388
  br i1 %29, label %dec_label_pc_32bb, label %dec_label_pc_32b6, !insn.addr !388

dec_label_pc_32b6:                                ; preds = %dec_label_pc_32a6
  call void @__stack_chk_fail(), !insn.addr !389
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.1.reg2mem, !insn.addr !389
  br label %dec_label_pc_32bb, !insn.addr !389

dec_label_pc_32bb:                                ; preds = %dec_label_pc_32b6, %dec_label_pc_32a6
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !390

; uselistorder directives
  uselistorder i32* %stack_var_-56, { 3, 2, 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder i8 0, { 3, 0, 4, 2, 1 }
  uselistorder i32 31, { 0, 2, 3, 1 }
  uselistorder void (i32)* @_exit, { 1, 0, 2 }
  uselistorder i32 ()* @fork, { 1, 0, 2 }
  uselistorder label %dec_label_pc_32a6, { 2, 0, 1 }
}

define i64 @call_pipe_communication() local_unnamed_addr {
dec_label_pc_32c1:
  %0 = call i64 @param_pipe_communication(), !insn.addr !391
  ret i64 %0, !insn.addr !391
}

define i64 @param_socket_create(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_32ca:
  %0 = alloca i128
  %rax.1.reg2mem = alloca i64, !insn.addr !392
  %rax.0.reg2mem = alloca i64, !insn.addr !392
  %1 = load i128, i128* %0
  %stack_var_-32 = alloca i128, align 8
  %2 = load i128, i128* %0
  %stack_var_-36 = alloca i64, align 8
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !393
  %4 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !394
  %5 = icmp slt i32 %4, 0, !insn.addr !395
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !396
  br i1 %5, label %dec_label_pc_339c, label %dec_label_pc_3300, !insn.addr !396

dec_label_pc_3300:                                ; preds = %dec_label_pc_32ca
  store i64 1, i64* %stack_var_-36, align 8, !insn.addr !397
  %6 = call i32 @setsockopt(i32 %4, i32 1, i32 2, i64* nonnull %stack_var_-36, i32 4), !insn.addr !398
  %7 = icmp slt i32 %6, 0, !insn.addr !399
  %8 = icmp eq i1 %7, false, !insn.addr !400
  br i1 %8, label %dec_label_pc_333a, label %dec_label_pc_332e, !insn.addr !400

dec_label_pc_332e:                                ; preds = %dec_label_pc_3300
  %9 = call i32 @close(i32 %4), !insn.addr !401
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !402
  br label %dec_label_pc_339c, !insn.addr !402

dec_label_pc_333a:                                ; preds = %dec_label_pc_3300
  %10 = call i128 @__asm_xorps(i128 %1, i128 %1), !insn.addr !403
  %11 = mul i128 %2, 18446744073709551615
  %12 = ashr exact i128 %11, 64, !insn.addr !404
  call void @__asm_movups(i128 %12, i128 %10), !insn.addr !404
  store i128 2, i128* %stack_var_-32, align 8, !insn.addr !405
  %13 = bitcast i128* %stack_var_-32 to %sockaddr*, !insn.addr !406
  %14 = call i32 @bind(i32 %4, %sockaddr* nonnull %13, i32 16), !insn.addr !406
  %15 = icmp slt i32 %14, 0, !insn.addr !407
  %16 = icmp eq i1 %15, false, !insn.addr !408
  br i1 %16, label %dec_label_pc_3370, label %dec_label_pc_3364, !insn.addr !408

dec_label_pc_3364:                                ; preds = %dec_label_pc_333a
  %17 = call i32 @close(i32 %4), !insn.addr !409
  store i64 4294967293, i64* %rax.0.reg2mem, !insn.addr !410
  br label %dec_label_pc_339c, !insn.addr !410

dec_label_pc_3370:                                ; preds = %dec_label_pc_333a
  %18 = call i32 @listen(i32 %4, i32 5), !insn.addr !411
  %19 = icmp slt i32 %18, 0, !insn.addr !412
  %20 = icmp eq i1 %19, false, !insn.addr !413
  %21 = call i32 @close(i32 %4)
  %. = select i1 %20, i64 42, i64 4294967292
  store i64 %., i64* %rax.0.reg2mem, !insn.addr !414
  br label %dec_label_pc_339c, !insn.addr !414

dec_label_pc_339c:                                ; preds = %dec_label_pc_3370, %dec_label_pc_3364, %dec_label_pc_332e, %dec_label_pc_32ca
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %22 = call i64 @__readfsqword(i64 40), !insn.addr !415
  %23 = icmp eq i64 %3, %22, !insn.addr !415
  store i64 %rax.0.reload, i64* %rax.1.reg2mem, !insn.addr !416
  br i1 %23, label %dec_label_pc_33b1, label %dec_label_pc_33ac, !insn.addr !416

dec_label_pc_33ac:                                ; preds = %dec_label_pc_339c
  call void @__stack_chk_fail(), !insn.addr !417
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.1.reg2mem, !insn.addr !417
  br label %dec_label_pc_33b1, !insn.addr !417

dec_label_pc_33b1:                                ; preds = %dec_label_pc_33ac, %dec_label_pc_339c
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !418

; uselistorder directives
  uselistorder i32 %4, { 0, 2, 1, 3, 4, 5, 6 }
  uselistorder i128* %stack_var_-32, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 0, 1, 3, 2, 4 }
  uselistorder i128* %0, { 1, 0 }
}

define i64 @call_socket_create() local_unnamed_addr {
dec_label_pc_33b6:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = call i64 @param_socket_create(i64 %1, i64 %2, i64 %3), !insn.addr !419
  ret i64 %4, !insn.addr !419

; uselistorder directives
  uselistorder i64* %0, { 2, 1, 0 }
}

define i64 @param_shmget_shmat() local_unnamed_addr {
dec_label_pc_33bf:
  %r12.0.reg2mem = alloca i64, !insn.addr !420
  %0 = call i32 (i8*, i32, ...) @open(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_421f, i64 0, i64 0), i32 66), !insn.addr !421
  %1 = icmp slt i32 %0, 0, !insn.addr !422
  %2 = icmp eq i1 %1, false, !insn.addr !423
  store i64 4294967295, i64* %r12.0.reg2mem, !insn.addr !423
  br i1 %2, label %dec_label_pc_33ed, label %dec_label_pc_346b, !insn.addr !423

dec_label_pc_33ed:                                ; preds = %dec_label_pc_33bf
  %3 = call i32 @close(i32 %0), !insn.addr !424
  %4 = call i32 @ftok(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_421f, i64 0, i64 0), i32 42), !insn.addr !425
  %5 = icmp slt i32 %4, 0, !insn.addr !426
  store i64 4294967295, i64* %r12.0.reg2mem, !insn.addr !427
  br i1 %5, label %dec_label_pc_346b, label %dec_label_pc_3407, !insn.addr !427

dec_label_pc_3407:                                ; preds = %dec_label_pc_33ed
  %6 = call i32 @shmget(i32 %4, i32 ptrtoint (i32* @global_var_1000 to i32), i32 ptrtoint (i32* @global_var_3b6 to i32)), !insn.addr !428
  %7 = icmp slt i32 %6, 0, !insn.addr !429
  store i64 4294967294, i64* %r12.0.reg2mem, !insn.addr !430
  br i1 %7, label %dec_label_pc_346b, label %dec_label_pc_3423, !insn.addr !430

dec_label_pc_3423:                                ; preds = %dec_label_pc_3407
  %8 = call i64* @shmat(i32 %6, i64* null, i32 0), !insn.addr !431
  %9 = icmp eq i64* %8, inttoptr (i64 -1 to i64*), !insn.addr !432
  store i64 4294967293, i64* %r12.0.reg2mem, !insn.addr !433
  br i1 %9, label %dec_label_pc_346b, label %dec_label_pc_343d, !insn.addr !433

dec_label_pc_343d:                                ; preds = %dec_label_pc_3423
  %10 = bitcast i64* %8 to i8*, !insn.addr !434
  %11 = call i8* @strcpy(i8* %10, i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_4231, i64 0, i64 0)), !insn.addr !434
  %12 = call i32 @strlen(i8* %10), !insn.addr !435
  %13 = zext i32 %12 to i64, !insn.addr !436
  %14 = call i32 @shmdt(i64* %8), !insn.addr !437
  %15 = call i32 @shmctl(i32 %6, i32 xor (i32 ptrtoint ([13 x i8]* @global_var_4231 to i32), i32 ptrtoint ([13 x i8]* @global_var_4231 to i32)), %shmid_ds* null), !insn.addr !438
  store i64 %13, i64* %r12.0.reg2mem, !insn.addr !438
  br label %dec_label_pc_346b, !insn.addr !438

dec_label_pc_346b:                                ; preds = %dec_label_pc_33bf, %dec_label_pc_33ed, %dec_label_pc_343d, %dec_label_pc_3423, %dec_label_pc_3407
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  ret i64 %r12.0.reload, !insn.addr !439

; uselistorder directives
  uselistorder i64* %r12.0.reg2mem, { 0, 3, 4, 5, 2, 1 }
  uselistorder i32 (i8*)* @strlen, { 1, 2, 0, 3 }
  uselistorder i8* (i8*, i8*)* @strcpy, { 1, 0, 2 }
  uselistorder i32 42, { 0, 2, 3, 1 }
  uselistorder i32 (i32)* @close, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder label %dec_label_pc_346b, { 2, 3, 4, 1, 0 }
}

define i64 @call_shmget_shmat() local_unnamed_addr {
dec_label_pc_3474:
  %0 = call i64 @param_shmget_shmat(), !insn.addr !440
  %1 = trunc i64 %0 to i32, !insn.addr !441
  %2 = icmp slt i32 %1, 1
  %3 = select i1 %2, i64 4294967295, i64 42, !insn.addr !442
  ret i64 %3, !insn.addr !443
}

define i64 @param_signal_handling(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_348f:
  %rax.0.reg2mem = alloca i64, !insn.addr !444
  %.reg2mem24 = alloca i32, !insn.addr !444
  %.reg2mem22 = alloca i32, !insn.addr !444
  %.reg2mem20 = alloca i32, !insn.addr !444
  %.reg2mem = alloca i32, !insn.addr !444
  %0 = call void (i32)* @signal(i32 10, void (i32)* inttoptr (i64 10281 to void (i32)*)), !insn.addr !445
  %1 = icmp eq void (i32)* %0, inttoptr (i64 -1 to void (i32)*), !insn.addr !446
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !447
  br i1 %1, label %dec_label_pc_3593, label %dec_label_pc_34b9, !insn.addr !447

dec_label_pc_34b9:                                ; preds = %dec_label_pc_348f
  %2 = call void (i32)* @signal(i32 14, void (i32)* inttoptr (i64 10281 to void (i32)*)), !insn.addr !448
  %3 = icmp eq void (i32)* %2, inttoptr (i64 -1 to void (i32)*), !insn.addr !449
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !450
  br i1 %3, label %dec_label_pc_3593, label %dec_label_pc_34d7, !insn.addr !450

dec_label_pc_34d7:                                ; preds = %dec_label_pc_34b9
  store i32 0, i32* @global_var_7110, align 4, !insn.addr !451
  %4 = call i32 @raise(i32 10), !insn.addr !452
  %5 = load i32, i32* @global_var_7110, align 4
  %6 = icmp eq i32 %5, 0, !insn.addr !453
  %7 = icmp eq i1 %6, false, !insn.addr !454
  %brmerge = or i1 %7, icmp eq (i32 add (i32 ptrtoint (i32* @global_var_3e9 to i32), i32 -1), i32 0)
  store i32 add (i32 ptrtoint (i32* @global_var_3e9 to i32), i32 -1), i32* %.reg2mem, !insn.addr !454
  store i32 %5, i32* %.reg2mem20, !insn.addr !454
  br i1 %brmerge, label %dec_label_pc_350a, label %dec_label_pc_34fe, !insn.addr !454

dec_label_pc_34fa:                                ; preds = %dec_label_pc_34fe
  %.reload = load i32, i32* %.reg2mem
  %8 = add i32 %.reload, -1, !insn.addr !455
  %9 = icmp eq i32 %8, 0, !insn.addr !455
  store i32 %8, i32* %.reg2mem, !insn.addr !456
  store i32 %11, i32* %.reg2mem20, !insn.addr !456
  br i1 %9, label %dec_label_pc_350a, label %dec_label_pc_34fe, !insn.addr !456

dec_label_pc_34fe:                                ; preds = %dec_label_pc_34d7, %dec_label_pc_34fa
  %10 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !457
  %11 = load i32, i32* @global_var_7110, align 4
  %12 = icmp eq i32 %11, 0, !insn.addr !453
  %13 = icmp eq i1 %12, false, !insn.addr !454
  store i32 %11, i32* %.reg2mem20, !insn.addr !454
  br i1 %13, label %dec_label_pc_350a, label %dec_label_pc_34fa, !insn.addr !454

dec_label_pc_350a:                                ; preds = %dec_label_pc_34d7, %dec_label_pc_34fa, %dec_label_pc_34fe
  %.reload21 = load i32, i32* %.reg2mem20, !insn.addr !458
  %14 = icmp eq i32 %.reload21, 0, !insn.addr !459
  store i64 4294967293, i64* %rax.0.reg2mem, !insn.addr !460
  br i1 %14, label %dec_label_pc_3593, label %dec_label_pc_3519, !insn.addr !460

dec_label_pc_3519:                                ; preds = %dec_label_pc_350a
  %15 = load i32, i32* @global_var_710c, align 4, !insn.addr !461
  %16 = icmp eq i32 %15, 10, !insn.addr !462
  %17 = icmp eq i1 %16, false, !insn.addr !463
  store i64 4294967292, i64* %rax.0.reg2mem, !insn.addr !463
  br i1 %17, label %dec_label_pc_3593, label %dec_label_pc_3529, !insn.addr !463

dec_label_pc_3529:                                ; preds = %dec_label_pc_3519
  store i32 0, i32* @global_var_7110, align 4, !insn.addr !464
  %18 = call i32 @alarm(i32 1), !insn.addr !465
  %19 = load i32, i32* @global_var_7110, align 4
  %20 = icmp eq i32 %19, 0, !insn.addr !466
  %21 = icmp eq i1 %20, false, !insn.addr !467
  %brmerge19 = or i1 %21, icmp eq (i32 add (i32 ptrtoint (i32* @global_var_7d1 to i32), i32 -1), i32 0)
  store i32 add (i32 ptrtoint (i32* @global_var_7d1 to i32), i32 -1), i32* %.reg2mem22, !insn.addr !467
  store i32 %19, i32* %.reg2mem24, !insn.addr !467
  br i1 %brmerge19, label %dec_label_pc_355c, label %dec_label_pc_3550, !insn.addr !467

dec_label_pc_354c:                                ; preds = %dec_label_pc_3550
  %.reload23 = load i32, i32* %.reg2mem22
  %22 = add i32 %.reload23, -1, !insn.addr !468
  %23 = icmp eq i32 %22, 0, !insn.addr !468
  store i32 %22, i32* %.reg2mem22, !insn.addr !469
  store i32 %25, i32* %.reg2mem24, !insn.addr !469
  br i1 %23, label %dec_label_pc_355c, label %dec_label_pc_3550, !insn.addr !469

dec_label_pc_3550:                                ; preds = %dec_label_pc_3529, %dec_label_pc_354c
  %24 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !470
  %25 = load i32, i32* @global_var_7110, align 4
  %26 = icmp eq i32 %25, 0, !insn.addr !466
  %27 = icmp eq i1 %26, false, !insn.addr !467
  store i32 %25, i32* %.reg2mem24, !insn.addr !467
  br i1 %27, label %dec_label_pc_355c, label %dec_label_pc_354c, !insn.addr !467

dec_label_pc_355c:                                ; preds = %dec_label_pc_3529, %dec_label_pc_354c, %dec_label_pc_3550
  %.reload25 = load i32, i32* %.reg2mem24, !insn.addr !471
  %28 = icmp eq i32 %.reload25, 0, !insn.addr !472
  store i64 4294967291, i64* %rax.0.reg2mem, !insn.addr !473
  br i1 %28, label %dec_label_pc_3593, label %dec_label_pc_356b, !insn.addr !473

dec_label_pc_356b:                                ; preds = %dec_label_pc_355c
  %29 = load i32, i32* @global_var_710c, align 4, !insn.addr !474
  %30 = icmp eq i32 %29, 14, !insn.addr !475
  %31 = icmp eq i1 %30, false, !insn.addr !476
  store i64 4294967291, i64* %rax.0.reg2mem, !insn.addr !476
  br i1 %31, label %dec_label_pc_3593, label %dec_label_pc_3576, !insn.addr !476

dec_label_pc_3576:                                ; preds = %dec_label_pc_356b
  %32 = call void (i32)* @signal(i32 10, void (i32)* null), !insn.addr !477
  %33 = call void (i32)* @signal(i32 14, void (i32)* null), !insn.addr !478
  store i64 42, i64* %rax.0.reg2mem, !insn.addr !479
  br label %dec_label_pc_3593, !insn.addr !479

dec_label_pc_3593:                                ; preds = %dec_label_pc_3576, %dec_label_pc_356b, %dec_label_pc_355c, %dec_label_pc_3519, %dec_label_pc_350a, %dec_label_pc_34b9, %dec_label_pc_348f
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !480

; uselistorder directives
  uselistorder i32 %25, { 0, 2, 1 }
  uselistorder i32 %11, { 0, 2, 1 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %.reg2mem22, { 2, 0, 1 }
  uselistorder i32* @global_var_710c, { 2, 1, 0 }
  uselistorder i32 (i32)* @usleep, { 1, 0, 2, 3 }
  uselistorder i32 -1, { 2, 0, 3, 1 }
  uselistorder i32* @global_var_7110, { 6, 1, 5, 4, 0, 3, 2 }
  uselistorder i32 14, { 1, 0, 2 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i32 10, { 1, 0, 2, 3, 4 }
  uselistorder label %dec_label_pc_355c, { 2, 1, 0 }
  uselistorder label %dec_label_pc_3550, { 1, 0 }
  uselistorder label %dec_label_pc_350a, { 2, 1, 0 }
  uselistorder label %dec_label_pc_34fe, { 1, 0 }
}

define i64 @call_signal_handling() local_unnamed_addr {
dec_label_pc_3597:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = call i64 @param_signal_handling(i64 %1, i64 %2, i64 %3, i64 %4), !insn.addr !481
  ret i64 %5, !insn.addr !481

; uselistorder directives
  uselistorder i64* %0, { 3, 2, 1, 0 }
}

define i64 @test_system_calls() local_unnamed_addr {
dec_label_pc_35a0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i32 @puts(i8* bitcast (i8** @global_var_423e to i8*)), !insn.addr !482
  %3 = call i64 @call_linux_syscall(), !insn.addr !483
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_4259 to i8*)), !insn.addr !484
  %5 = call i64 @call_win32_api(), !insn.addr !485
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_4275 to i8*)), !insn.addr !486
  %7 = call i64 @call_fork_exec(i64 1, i64 ptrtoint (i8** @global_var_4275 to i64)), !insn.addr !487
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_4291 to i8*)), !insn.addr !488
  %9 = call i64 @param_pipe_communication(), !insn.addr !489
  %10 = and i64 %9, 4294967295, !insn.addr !490
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_42ad to i8*)), !insn.addr !491
  %12 = call i64 @param_socket_create(i64 1, i64 ptrtoint (i8** @global_var_42ad to i64), i64 %10), !insn.addr !492
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_42c9 to i8*)), !insn.addr !493
  %14 = call i64 @call_shmget_shmat(), !insn.addr !494
  %15 = and i64 %14, 4294967295, !insn.addr !495
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_42e5 to i8*)), !insn.addr !496
  %17 = call i64 @param_signal_handling(i64 1, i64 ptrtoint (i8** @global_var_42e5 to i64), i64 %15, i64 %1), !insn.addr !497
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_4301 to i8*)), !insn.addr !498
  %19 = sext i32 %18 to i64, !insn.addr !498
  ret i64 %19, !insn.addr !498

; uselistorder directives
  uselistorder i8** @global_var_42e5, { 1, 0 }
  uselistorder i8** @global_var_42ad, { 1, 0 }
  uselistorder i8** @global_var_4275, { 1, 0 }
}

define i64 @param_pthread_create(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_3670:
  %r12.0.reg2mem = alloca i64, !insn.addr !499
  %stack_var_-24 = alloca i64, align 8
  %stack_var_-32 = alloca i32, align 4
  %stack_var_-36 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !500
  %sext = mul i64 %arg1, 4294967296
  %1 = ashr exact i64 %sext, 32, !insn.addr !501
  store i64 %1, i64* %stack_var_-36, align 8, !insn.addr !501
  %2 = call i32 @pthread_create(i32* nonnull %stack_var_-32, i64* null, i64* (i64*)* inttoptr (i64 10332 to i64* (i64*)*), i64* nonnull %stack_var_-36), !insn.addr !502
  %3 = icmp eq i32 %2, 0, !insn.addr !503
  %4 = icmp eq i1 %3, false, !insn.addr !504
  store i64 4294967295, i64* %r12.0.reg2mem, !insn.addr !504
  br i1 %4, label %dec_label_pc_36ca, label %dec_label_pc_36ae, !insn.addr !504

dec_label_pc_36ae:                                ; preds = %dec_label_pc_3670
  %5 = load i32, i32* %stack_var_-32, align 4, !insn.addr !505
  %6 = bitcast i64* %stack_var_-24 to i64**, !insn.addr !506
  %7 = call i32 @pthread_join(i32 %5, i64** nonnull %6), !insn.addr !506
  %8 = load i64, i64* %stack_var_-24, align 8, !insn.addr !507
  %9 = inttoptr i64 %8 to i32*, !insn.addr !508
  %10 = load i32, i32* %9, align 4, !insn.addr !508
  %11 = zext i32 %10 to i64, !insn.addr !508
  %12 = inttoptr i64 %8 to i64*, !insn.addr !509
  call void @free(i64* %12), !insn.addr !509
  store i64 %11, i64* %r12.0.reg2mem, !insn.addr !509
  br label %dec_label_pc_36ca, !insn.addr !509

dec_label_pc_36ca:                                ; preds = %dec_label_pc_36ae, %dec_label_pc_3670
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  %13 = call i64 @__readfsqword(i64 40), !insn.addr !510
  %14 = icmp eq i64 %0, %13, !insn.addr !510
  br i1 %14, label %dec_label_pc_36df, label %dec_label_pc_36da, !insn.addr !511

dec_label_pc_36da:                                ; preds = %dec_label_pc_36ca
  call void @__stack_chk_fail(), !insn.addr !512
  br label %dec_label_pc_36df, !insn.addr !512

dec_label_pc_36df:                                ; preds = %dec_label_pc_36da, %dec_label_pc_36ca
  ret i64 %r12.0.reload, !insn.addr !513

; uselistorder directives
  uselistorder i64 %8, { 1, 0 }
  uselistorder i64* %stack_var_-24, { 1, 0 }
}

define i64 @call_pthread_create() local_unnamed_addr {
dec_label_pc_36e9:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @param_pthread_create(i64 7, i64 %1), !insn.addr !514
  ret i64 %2, !insn.addr !514
}

define i64 @param_pthread_join() local_unnamed_addr {
dec_label_pc_36f7:
  %r12.1.reg2mem = alloca i64, !insn.addr !515
  %r12.0.reg2mem = alloca i32, !insn.addr !515
  %rbx.1.reg2mem = alloca i64, !insn.addr !515
  %rbp.0.reg2mem = alloca i64, !insn.addr !515
  %rbx.0.reg2mem = alloca i64, !insn.addr !515
  %stack_var_-92 = alloca i64, align 8
  %stack_var_-104 = alloca i64, align 8
  %stack_var_-128 = alloca i64, align 8
  %stack_var_-100 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !516
  %1 = ptrtoint i64* %stack_var_-128 to i64, !insn.addr !517
  %2 = bitcast i64* %stack_var_-100 to i8*, !insn.addr !518
  call void @__asm_rep_movsd_memcpy(i8* nonnull %2, i8* bitcast (i8** @global_var_4400 to i8*), i64 9), !insn.addr !518
  %3 = ptrtoint i64* %stack_var_-100 to i64, !insn.addr !519
  %4 = ptrtoint i64* %stack_var_-104 to i64, !insn.addr !520
  store i64 %1, i64* %rbx.0.reg2mem, !insn.addr !521
  store i64 %3, i64* %rbp.0.reg2mem, !insn.addr !521
  br label %dec_label_pc_3745, !insn.addr !521

dec_label_pc_3745:                                ; preds = %dec_label_pc_375c, %dec_label_pc_36f7
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %5 = inttoptr i64 %rbx.0.reload to i32*, !insn.addr !522
  %6 = inttoptr i64 %rbp.0.reload to i64*, !insn.addr !522
  %7 = call i32 @pthread_create(i32* %5, i64* null, i64* (i64*)* inttoptr (i64 10302 to i64* (i64*)*), i64* %6), !insn.addr !522
  %8 = icmp eq i32 %7, 0, !insn.addr !523
  %9 = icmp eq i1 %8, false, !insn.addr !524
  store i64 4294967295, i64* %r12.1.reg2mem, !insn.addr !524
  br i1 %9, label %dec_label_pc_37a0, label %dec_label_pc_375c, !insn.addr !524

dec_label_pc_375c:                                ; preds = %dec_label_pc_3745
  %10 = add i64 %rbx.0.reload, 8, !insn.addr !525
  %11 = add i64 %rbp.0.reload, 12, !insn.addr !526
  %12 = icmp eq i64 %10, %4, !insn.addr !527
  %13 = icmp eq i1 %12, false, !insn.addr !528
  store i64 %10, i64* %rbx.0.reg2mem, !insn.addr !528
  store i64 %11, i64* %rbp.0.reg2mem, !insn.addr !528
  br i1 %13, label %dec_label_pc_3745, label %dec_label_pc_3769, !insn.addr !528

dec_label_pc_3769:                                ; preds = %dec_label_pc_375c
  %14 = ptrtoint i64* %stack_var_-92 to i64, !insn.addr !529
  store i64 0, i64* %rbx.1.reg2mem, !insn.addr !529
  store i32 %7, i32* %r12.0.reg2mem, !insn.addr !529
  br label %dec_label_pc_3770, !insn.addr !529

dec_label_pc_3770:                                ; preds = %dec_label_pc_3780, %dec_label_pc_3769
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %15 = mul i64 %rbx.1.reload, 8, !insn.addr !530
  %16 = add i64 %15, %1, !insn.addr !530
  %17 = inttoptr i64 %16 to i64*, !insn.addr !530
  %18 = load i64, i64* %17, align 8, !insn.addr !530
  %19 = trunc i64 %18 to i32, !insn.addr !531
  %20 = call i32 @pthread_join(i32 %19, i64** null), !insn.addr !531
  %21 = icmp eq i32 %20, 0, !insn.addr !532
  %22 = icmp eq i1 %21, false, !insn.addr !533
  store i64 4294967294, i64* %r12.1.reg2mem, !insn.addr !533
  br i1 %22, label %dec_label_pc_37a0, label %dec_label_pc_3780, !insn.addr !533

dec_label_pc_3780:                                ; preds = %dec_label_pc_3770
  %r12.0.reload = load i32, i32* %r12.0.reg2mem
  %23 = mul nuw nsw i64 %rbx.1.reload, 12, !insn.addr !534
  %24 = add nuw nsw i64 %rbx.1.reload, 1, !insn.addr !535
  %25 = add i64 %23, %14, !insn.addr !536
  %26 = inttoptr i64 %25 to i32*, !insn.addr !536
  %27 = load i32, i32* %26, align 4, !insn.addr !536
  %28 = add i32 %27, %r12.0.reload, !insn.addr !536
  %29 = icmp eq i64 %rbx.1.reload, 2, !insn.addr !537
  %30 = icmp eq i1 %29, false, !insn.addr !538
  store i64 %24, i64* %rbx.1.reg2mem, !insn.addr !538
  store i32 %28, i32* %r12.0.reg2mem, !insn.addr !538
  br i1 %30, label %dec_label_pc_3770, label %dec_label_pc_37a0.loopexit.split.loop.exit, !insn.addr !538

dec_label_pc_37a0.loopexit.split.loop.exit:       ; preds = %dec_label_pc_3780
  %31 = zext i32 %28 to i64, !insn.addr !536
  store i64 %31, i64* %r12.1.reg2mem
  br label %dec_label_pc_37a0

dec_label_pc_37a0:                                ; preds = %dec_label_pc_3745, %dec_label_pc_3770, %dec_label_pc_37a0.loopexit.split.loop.exit
  %r12.1.reload = load i64, i64* %r12.1.reg2mem
  %32 = call i64 @__readfsqword(i64 40), !insn.addr !539
  %33 = icmp eq i64 %0, %32, !insn.addr !539
  br i1 %33, label %dec_label_pc_37b5, label %dec_label_pc_37b0, !insn.addr !540

dec_label_pc_37b0:                                ; preds = %dec_label_pc_37a0
  call void @__stack_chk_fail(), !insn.addr !541
  br label %dec_label_pc_37b5, !insn.addr !541

dec_label_pc_37b5:                                ; preds = %dec_label_pc_37b0, %dec_label_pc_37a0
  ret i64 %r12.1.reload, !insn.addr !542

; uselistorder directives
  uselistorder i32 %28, { 1, 0 }
  uselistorder i64 %rbx.0.reload, { 1, 0 }
  uselistorder i64 %rbp.0.reload, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %stack_var_-100, { 1, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbp.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r12.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r12.1.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64 12, { 1, 4, 2, 3, 0 }
  uselistorder label %dec_label_pc_37a0, { 2, 1, 0 }
}

define i64 @call_pthread_join() local_unnamed_addr {
dec_label_pc_37c7:
  %0 = call i64 @param_pthread_join(), !insn.addr !543
  ret i64 %0, !insn.addr !543
}

define i64 @param_mutex_lock(i64 %arg1, i64* %arg2) local_unnamed_addr {
dec_label_pc_37d2:
  %rax.0.reg2mem = alloca i64, !insn.addr !544
  %r12.14.reg2mem = alloca i64, !insn.addr !544
  %r12.05.reg2mem = alloca i64, !insn.addr !544
  %r13.06.reg2mem = alloca i64, !insn.addr !544
  %stack_var_-44 = alloca i64*, align 8
  store i64* %arg2, i64** %stack_var_-44, align 8, !insn.addr !545
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 8, !insn.addr !546
  %1 = call i64* @malloc(i32 %0), !insn.addr !546
  %2 = icmp eq i64* %1, null, !insn.addr !547
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !548
  br i1 %2, label %dec_label_pc_3889, label %dec_label_pc_3804, !insn.addr !548

dec_label_pc_3804:                                ; preds = %dec_label_pc_37d2
  %sext = mul i64 %arg1, 4294967296
  %3 = ashr exact i64 %sext, 32, !insn.addr !549
  store i32 0, i32* @global_var_7108, align 4, !insn.addr !550
  %4 = icmp sgt i64 %sext, 0
  br i1 %4, label %dec_label_pc_3820.lr.ph, label %dec_label_pc_3867, !insn.addr !551

dec_label_pc_3820.lr.ph:                          ; preds = %dec_label_pc_3804
  %5 = ptrtoint i64* %1 to i64, !insn.addr !546
  %6 = bitcast i64** %stack_var_-44 to i64*, !insn.addr !552
  store i64 %5, i64* %r13.06.reg2mem
  store i64 0, i64* %r12.05.reg2mem
  br label %dec_label_pc_3820

dec_label_pc_3820:                                ; preds = %dec_label_pc_3820.lr.ph, %dec_label_pc_3849
  %r13.06.reload = load i64, i64* %r13.06.reg2mem
  %7 = inttoptr i64 %r13.06.reload to i32*, !insn.addr !552
  %8 = call i32 @pthread_create(i32* %7, i64* null, i64* (i64*)* inttoptr (i64 10356 to i64* (i64*)*), i64* nonnull %6), !insn.addr !552
  %9 = icmp eq i32 %8, 0, !insn.addr !553
  br i1 %9, label %dec_label_pc_3849, label %dec_label_pc_383a, !insn.addr !554

dec_label_pc_383a:                                ; preds = %dec_label_pc_3820
  call void @free(i64* nonnull %1), !insn.addr !555
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !556
  br label %dec_label_pc_3889, !insn.addr !556

dec_label_pc_3849:                                ; preds = %dec_label_pc_3820
  %r12.05.reload = load i64, i64* %r12.05.reg2mem
  %10 = add i64 %r13.06.reload, 8, !insn.addr !557
  %11 = add nuw nsw i64 %r12.05.reload, 1, !insn.addr !558
  %12 = and i64 %11, 4294967295, !insn.addr !558
  %13 = icmp slt i64 %12, %3, !insn.addr !551
  store i64 %10, i64* %r13.06.reg2mem, !insn.addr !551
  store i64 %12, i64* %r12.05.reg2mem, !insn.addr !551
  store i64 0, i64* %r12.14.reg2mem, !insn.addr !551
  br i1 %13, label %dec_label_pc_3820, label %dec_label_pc_3856, !insn.addr !551

dec_label_pc_3856:                                ; preds = %dec_label_pc_3849, %dec_label_pc_3856
  %r12.14.reload = load i64, i64* %r12.14.reg2mem
  %14 = mul i64 %r12.14.reload, 8, !insn.addr !559
  %15 = add i64 %14, %5, !insn.addr !559
  %16 = inttoptr i64 %15 to i64*, !insn.addr !559
  %17 = load i64, i64* %16, align 8, !insn.addr !559
  %18 = add nuw nsw i64 %r12.14.reload, 1, !insn.addr !560
  %19 = trunc i64 %17 to i32, !insn.addr !561
  %20 = call i32 @pthread_join(i32 %19, i64** null), !insn.addr !561
  %21 = icmp sgt i64 %3, %18, !insn.addr !562
  store i64 %18, i64* %r12.14.reg2mem, !insn.addr !562
  br i1 %21, label %dec_label_pc_3856, label %dec_label_pc_3867, !insn.addr !562

dec_label_pc_3867:                                ; preds = %dec_label_pc_3856, %dec_label_pc_3804
  call void @free(i64* nonnull %1), !insn.addr !563
  %22 = load i64*, i64** %stack_var_-44, align 8, !insn.addr !564
  %23 = ptrtoint i64* %22 to i64
  %sext3 = mul i64 %23, 4294967296
  %24 = ashr exact i64 %sext3, 32, !insn.addr !564
  %25 = mul nsw i64 %24, %3, !insn.addr !564
  %26 = trunc i64 %25 to i32, !insn.addr !564
  %27 = load i32, i32* @global_var_7108, align 4, !insn.addr !565
  %28 = icmp eq i32 %27, %26, !insn.addr !566
  %29 = icmp eq i1 %28, false, !insn.addr !567
  %30 = select i1 %29, i64 4294967293, i64 42, !insn.addr !567
  store i64 %30, i64* %rax.0.reg2mem, !insn.addr !567
  br label %dec_label_pc_3889, !insn.addr !567

dec_label_pc_3889:                                ; preds = %dec_label_pc_3867, %dec_label_pc_383a, %dec_label_pc_37d2
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !568

; uselistorder directives
  uselistorder i64 %r13.06.reload, { 1, 0 }
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64 %sext, { 1, 0 }
  uselistorder i64* %1, { 1, 0, 3, 2 }
  uselistorder i64** %stack_var_-44, { 1, 2, 0 }
  uselistorder i64* %r13.06.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r12.05.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r12.14.reg2mem, { 2, 0, 1 }
  uselistorder i32* @global_var_7108, { 2, 1, 0 }
  uselistorder label %dec_label_pc_3856, { 1, 0 }
  uselistorder label %dec_label_pc_3820, { 1, 0 }
}

define i64 @call_mutex_lock() local_unnamed_addr {
dec_label_pc_3896:
  %0 = call i64 @param_mutex_lock(i64 4, i64* bitcast (i32* @global_var_3e8 to i64*)), !insn.addr !569
  ret i64 %0, !insn.addr !569
}

define i64 @param_condition_variable(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_38a9:
  %r12.0.reg2mem = alloca i64, !insn.addr !570
  %stack_var_-24 = alloca i64, align 8
  %stack_var_-32 = alloca i32, align 4
  %stack_var_-40 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !571
  store i32 0, i32* @global_var_7048, align 4, !insn.addr !572
  store i32 0, i32* @global_var_7044, align 4, !insn.addr !573
  %1 = call i32 @pthread_create(i32* nonnull %stack_var_-32, i64* null, i64* (i64*)* inttoptr (i64 10432 to i64* (i64*)*), i64* null), !insn.addr !574
  %2 = icmp eq i32 %1, 0, !insn.addr !575
  %3 = icmp eq i1 %2, false, !insn.addr !576
  store i64 4294967295, i64* %r12.0.reg2mem, !insn.addr !576
  br i1 %3, label %dec_label_pc_393f, label %dec_label_pc_38f4, !insn.addr !576

dec_label_pc_38f4:                                ; preds = %dec_label_pc_38a9
  %4 = call i32 @pthread_create(i32* nonnull %stack_var_-40, i64* null, i64* (i64*)* inttoptr (i64 10513 to i64* (i64*)*), i64* null), !insn.addr !577
  %5 = load i32, i32* %stack_var_-32, align 4, !insn.addr !578
  %6 = icmp eq i32 %4, 0, !insn.addr !579
  br i1 %6, label %dec_label_pc_391d, label %dec_label_pc_3910, !insn.addr !580

dec_label_pc_3910:                                ; preds = %dec_label_pc_38f4
  %7 = call i32 @pthread_cancel(i32 %5), !insn.addr !581
  store i64 4294967294, i64* %r12.0.reg2mem, !insn.addr !582
  br label %dec_label_pc_393f, !insn.addr !582

dec_label_pc_391d:                                ; preds = %dec_label_pc_38f4
  %8 = bitcast i64* %stack_var_-24 to i64**, !insn.addr !583
  %9 = call i32 @pthread_join(i32 %5, i64** nonnull %8), !insn.addr !583
  %10 = load i32, i32* %stack_var_-40, align 4, !insn.addr !584
  %11 = call i32 @pthread_join(i32 %10, i64** null), !insn.addr !585
  %12 = load i64, i64* %stack_var_-24, align 8, !insn.addr !586
  %13 = inttoptr i64 %12 to i32*, !insn.addr !587
  %14 = load i32, i32* %13, align 4, !insn.addr !587
  %15 = zext i32 %14 to i64, !insn.addr !587
  %16 = inttoptr i64 %12 to i64*, !insn.addr !588
  call void @free(i64* %16), !insn.addr !588
  store i64 %15, i64* %r12.0.reg2mem, !insn.addr !588
  br label %dec_label_pc_393f, !insn.addr !588

dec_label_pc_393f:                                ; preds = %dec_label_pc_391d, %dec_label_pc_3910, %dec_label_pc_38a9
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  %17 = call i64 @__readfsqword(i64 40), !insn.addr !589
  %18 = icmp eq i64 %0, %17, !insn.addr !589
  br i1 %18, label %dec_label_pc_3954, label %dec_label_pc_394f, !insn.addr !590

dec_label_pc_394f:                                ; preds = %dec_label_pc_393f
  call void @__stack_chk_fail(), !insn.addr !591
  br label %dec_label_pc_3954, !insn.addr !591

dec_label_pc_3954:                                ; preds = %dec_label_pc_394f, %dec_label_pc_393f
  ret i64 %r12.0.reload, !insn.addr !592

; uselistorder directives
  uselistorder i64 %12, { 1, 0 }
  uselistorder i64* %stack_var_-24, { 1, 0 }
  uselistorder i64* %r12.0.reg2mem, { 0, 2, 1, 3 }
  uselistorder i32* @global_var_7044, { 2, 1, 0 }
  uselistorder i32* @global_var_7048, { 3, 2, 1, 0 }
}

define i64 @call_condition_variable() local_unnamed_addr {
dec_label_pc_395e:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = call i64 @param_condition_variable(i64 %1, i64 %2, i64 %3, i64 %4), !insn.addr !593
  ret i64 %5, !insn.addr !593

; uselistorder directives
  uselistorder i64* %0, { 3, 2, 1, 0 }
}

define i64 @param_atomic_ops(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_3969:
  %rax.1.reg2mem = alloca i64, !insn.addr !594
  %rax.0.reg2mem = alloca i64, !insn.addr !594
  %r12.14.reg2mem = alloca i64, !insn.addr !594
  %r12.05.reg2mem = alloca i64, !insn.addr !594
  %r13.06.reg2mem = alloca i64, !insn.addr !594
  %stack_var_-56 = alloca i32, align 4
  %stack_var_-60 = alloca i64, align 8
  %sext3 = mul i64 %arg2, 4294967296
  %0 = ashr exact i64 %sext3, 32, !insn.addr !595
  store i64 %0, i64* %stack_var_-60, align 8, !insn.addr !595
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !596
  %arg1.tr = trunc i64 %arg1 to i32
  %2 = mul i32 %arg1.tr, 8, !insn.addr !597
  %3 = call i64* @malloc(i32 %2), !insn.addr !597
  %4 = icmp eq i64* %3, null, !insn.addr !598
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !599
  br i1 %4, label %dec_label_pc_3a4e, label %dec_label_pc_39ab, !insn.addr !599

dec_label_pc_39ab:                                ; preds = %dec_label_pc_3969
  %sext = mul i64 %arg1, 4294967296
  %5 = ashr exact i64 %sext, 32, !insn.addr !600
  %6 = ptrtoint i64* %3 to i64, !insn.addr !597
  store i32 0, i32* @global_var_7040, align 4, !insn.addr !601
  %7 = icmp sgt i64 %sext, 0
  store i64 %6, i64* %r13.06.reg2mem, !insn.addr !602
  store i64 0, i64* %r12.05.reg2mem, !insn.addr !602
  br i1 %7, label %dec_label_pc_39c5, label %dec_label_pc_39f3, !insn.addr !602

dec_label_pc_39c5:                                ; preds = %dec_label_pc_39ab, %dec_label_pc_39ee
  %r13.06.reload = load i64, i64* %r13.06.reg2mem
  %8 = inttoptr i64 %r13.06.reload to i32*, !insn.addr !603
  %9 = call i32 @pthread_create(i32* %8, i64* null, i64* (i64*)* inttoptr (i64 10587 to i64* (i64*)*), i64* nonnull %stack_var_-60), !insn.addr !603
  %10 = icmp eq i32 %9, 0, !insn.addr !604
  br i1 %10, label %dec_label_pc_39ee, label %dec_label_pc_39df, !insn.addr !605

dec_label_pc_39df:                                ; preds = %dec_label_pc_39c5
  call void @free(i64* nonnull %3), !insn.addr !606
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !607
  br label %dec_label_pc_3a4e, !insn.addr !607

dec_label_pc_39ee:                                ; preds = %dec_label_pc_39c5
  %r12.05.reload = load i64, i64* %r12.05.reg2mem
  %11 = add i64 %r13.06.reload, 8, !insn.addr !608
  %12 = add nuw nsw i64 %r12.05.reload, 1, !insn.addr !609
  %13 = and i64 %12, 4294967295, !insn.addr !609
  %14 = icmp slt i64 %13, %5, !insn.addr !602
  store i64 %11, i64* %r13.06.reg2mem, !insn.addr !602
  store i64 %13, i64* %r12.05.reg2mem, !insn.addr !602
  br i1 %14, label %dec_label_pc_39c5, label %dec_label_pc_39f3, !insn.addr !602

dec_label_pc_39f3:                                ; preds = %dec_label_pc_39ee, %dec_label_pc_39ab
  %15 = call i32 @pthread_create(i32* nonnull %stack_var_-56, i64* null, i64* (i64*)* inttoptr (i64 10629 to i64* (i64*)*), i64* null), !insn.addr !610
  %16 = icmp eq i32 %15, 0, !insn.addr !611
  %17 = icmp eq i1 %16, false, !insn.addr !612
  br i1 %17, label %dec_label_pc_3a18, label %dec_label_pc_3a0c, !insn.addr !612

dec_label_pc_3a0c:                                ; preds = %dec_label_pc_39f3
  %18 = load i32, i32* %stack_var_-56, align 4, !insn.addr !613
  %19 = call i32 @pthread_join(i32 %18, i64** null), !insn.addr !614
  br label %dec_label_pc_3a18, !insn.addr !614

dec_label_pc_3a18:                                ; preds = %dec_label_pc_3a0c, %dec_label_pc_39f3
  store i64 0, i64* %r12.14.reg2mem, !insn.addr !615
  br i1 %7, label %dec_label_pc_3a20, label %dec_label_pc_3a31, !insn.addr !615

dec_label_pc_3a20:                                ; preds = %dec_label_pc_3a18, %dec_label_pc_3a20
  %r12.14.reload = load i64, i64* %r12.14.reg2mem
  %20 = mul i64 %r12.14.reload, 8, !insn.addr !616
  %21 = add i64 %20, %6, !insn.addr !616
  %22 = inttoptr i64 %21 to i64*, !insn.addr !616
  %23 = load i64, i64* %22, align 8, !insn.addr !616
  %24 = add nuw nsw i64 %r12.14.reload, 1, !insn.addr !617
  %25 = trunc i64 %23 to i32, !insn.addr !618
  %26 = call i32 @pthread_join(i32 %25, i64** null), !insn.addr !618
  %27 = icmp sgt i64 %5, %24, !insn.addr !615
  store i64 %24, i64* %r12.14.reg2mem, !insn.addr !615
  br i1 %27, label %dec_label_pc_3a20, label %dec_label_pc_3a31, !insn.addr !615

dec_label_pc_3a31:                                ; preds = %dec_label_pc_3a20, %dec_label_pc_3a18
  %28 = load i32, i32* @global_var_7040, align 4, !insn.addr !619
  call void @free(i64* nonnull %3), !insn.addr !620
  %29 = icmp slt i32 %28, 1
  %30 = select i1 %29, i64 4294967293, i64 42, !insn.addr !621
  store i64 %30, i64* %rax.0.reg2mem, !insn.addr !621
  br label %dec_label_pc_3a4e, !insn.addr !621

dec_label_pc_3a4e:                                ; preds = %dec_label_pc_3a31, %dec_label_pc_39df, %dec_label_pc_3969
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %31 = call i64 @__readfsqword(i64 40), !insn.addr !622
  %32 = icmp eq i64 %1, %31, !insn.addr !622
  store i64 %rax.0.reload, i64* %rax.1.reg2mem, !insn.addr !623
  br i1 %32, label %dec_label_pc_3a63, label %dec_label_pc_3a5e, !insn.addr !623

dec_label_pc_3a5e:                                ; preds = %dec_label_pc_3a4e
  call void @__stack_chk_fail(), !insn.addr !624
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.1.reg2mem, !insn.addr !624
  br label %dec_label_pc_3a63, !insn.addr !624

dec_label_pc_3a63:                                ; preds = %dec_label_pc_3a5e, %dec_label_pc_3a4e
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !625

; uselistorder directives
  uselistorder i64 %r13.06.reload, { 1, 0 }
  uselistorder i64 %6, { 1, 0 }
  uselistorder i64 %sext, { 1, 0 }
  uselistorder i64* %3, { 1, 0, 3, 2 }
  uselistorder i64* %stack_var_-60, { 1, 0 }
  uselistorder i64* %r13.06.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r12.05.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r12.14.reg2mem, { 2, 0, 1 }
  uselistorder i32* @global_var_7040, { 3, 2, 1, 0 }
  uselistorder label %dec_label_pc_3a20, { 1, 0 }
  uselistorder label %dec_label_pc_39c5, { 1, 0 }
}

define i64 @call_atomic_ops() local_unnamed_addr {
dec_label_pc_3a70:
  %0 = call i64 @param_atomic_ops(i64 4, i64 500), !insn.addr !626
  ret i64 %0, !insn.addr !626
}

define i64 @param_thread_local_storage(i64 %arg1) local_unnamed_addr {
dec_label_pc_3a83:
  %rax.1.reg2mem = alloca i64, !insn.addr !627
  %rax.0.reg2mem = alloca i64, !insn.addr !627
  %r15.0.lcssa.reg2mem = alloca i32, !insn.addr !627
  %r14.0.lcssa.reg2mem = alloca i32, !insn.addr !627
  %r13.25.reg2mem = alloca i64, !insn.addr !627
  %r14.06.reg2mem = alloca i32, !insn.addr !627
  %r15.07.reg2mem = alloca i32, !insn.addr !627
  %rbx.0.reg2mem = alloca i64, !insn.addr !627
  %r13.1.reg2mem = alloca i64, !insn.addr !627
  %r13.09.reg2mem = alloca i64, !insn.addr !627
  %stack_var_-72 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !628
  %arg1.tr = trunc i64 %arg1 to i32
  %1 = mul i32 %arg1.tr, 8, !insn.addr !629
  %2 = call i64* @malloc(i32 %1), !insn.addr !629
  %3 = call i64* @malloc(i32 %1), !insn.addr !630
  %4 = icmp eq i64* %2, null, !insn.addr !631
  %5 = icmp eq i64* %3, null, !insn.addr !632
  %or.cond = or i1 %4, %5
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !633
  br i1 %or.cond, label %dec_label_pc_3bf5, label %dec_label_pc_3ae1.preheader, !insn.addr !633

dec_label_pc_3ae1.preheader:                      ; preds = %dec_label_pc_3a83
  %sext = mul i64 %arg1, 4294967296
  %6 = ashr exact i64 %sext, 32, !insn.addr !634
  %7 = ptrtoint i64* %3 to i64, !insn.addr !630
  %8 = icmp sgt i64 %sext, 0
  store i64 0, i64* %r13.09.reg2mem, !insn.addr !635
  br i1 %8, label %dec_label_pc_3ae6, label %dec_label_pc_3b23.preheader, !insn.addr !635

dec_label_pc_3b23.preheader:                      ; preds = %dec_label_pc_3ae6, %dec_label_pc_3ae1.preheader
  %9 = ptrtoint i64* %2 to i64, !insn.addr !629
  store i64 0, i64* %r13.1.reg2mem
  br label %dec_label_pc_3b23

dec_label_pc_3ae6:                                ; preds = %dec_label_pc_3ae1.preheader, %dec_label_pc_3ae6
  %r13.09.reload = load i64, i64* %r13.09.reg2mem
  %10 = call i64* @malloc(i32 16), !insn.addr !636
  %11 = ptrtoint i64* %10 to i64, !insn.addr !636
  %12 = mul i64 %r13.09.reload, 8, !insn.addr !637
  %13 = add i64 %12, %7, !insn.addr !637
  %14 = inttoptr i64 %13 to i64*, !insn.addr !637
  store i64 %11, i64* %14, align 8, !insn.addr !637
  %15 = add nuw nsw i64 %r13.09.reload, 1, !insn.addr !638
  %16 = bitcast i64* %10 to i8*, !insn.addr !639
  %17 = call i32 (i8*, i32, i32, i32, i8*, ...) @__snprintf_chk(i8* %16, i32 16, i32 1, i32 16, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_431d, i64 0, i64 0), i64 %r13.09.reload), !insn.addr !639
  %18 = icmp sgt i64 %6, %15, !insn.addr !635
  store i64 %15, i64* %r13.09.reg2mem, !insn.addr !635
  br i1 %18, label %dec_label_pc_3ae6, label %dec_label_pc_3b23.preheader, !insn.addr !635

dec_label_pc_3b23:                                ; preds = %dec_label_pc_3b23.preheader, %dec_label_pc_3b28
  %r13.1.reload = load i64, i64* %r13.1.reg2mem
  %19 = icmp sgt i64 %6, %r13.1.reload, !insn.addr !640
  br i1 %19, label %dec_label_pc_3b28, label %dec_label_pc_3b88.preheader, !insn.addr !640

dec_label_pc_3b88.preheader:                      ; preds = %dec_label_pc_3b23
  store i32 0, i32* %r14.0.lcssa.reg2mem, !insn.addr !641
  store i32 0, i32* %r15.0.lcssa.reg2mem, !insn.addr !641
  br i1 %8, label %dec_label_pc_3b8d.lr.ph, label %dec_label_pc_3bc3, !insn.addr !641

dec_label_pc_3b8d.lr.ph:                          ; preds = %dec_label_pc_3b88.preheader
  %20 = bitcast i64* %stack_var_-72 to i64**, !insn.addr !642
  store i32 0, i32* %r15.07.reg2mem
  store i32 0, i32* %r14.06.reg2mem
  store i64 0, i64* %r13.25.reg2mem
  br label %dec_label_pc_3b8d

dec_label_pc_3b28:                                ; preds = %dec_label_pc_3b23
  %21 = mul i64 %r13.1.reload, 8, !insn.addr !643
  %22 = add i64 %21, %7
  %23 = inttoptr i64 %22 to i64*, !insn.addr !643
  %24 = load i64, i64* %23, align 8, !insn.addr !643
  %25 = add i64 %21, %9, !insn.addr !644
  %26 = add nuw nsw i64 %r13.1.reload, 1, !insn.addr !645
  %27 = inttoptr i64 %25 to i32*, !insn.addr !646
  %28 = inttoptr i64 %24 to i64*, !insn.addr !646
  %29 = call i32 @pthread_create(i32* %27, i64* null, i64* (i64*)* inttoptr (i64 10651 to i64* (i64*)*), i64* %28), !insn.addr !646
  %30 = icmp eq i32 %29, 0, !insn.addr !647
  store i64 %26, i64* %r13.1.reg2mem, !insn.addr !648
  store i64 %7, i64* %rbx.0.reg2mem, !insn.addr !648
  br i1 %30, label %dec_label_pc_3b23, label %dec_label_pc_3b52, !insn.addr !648

dec_label_pc_3b52:                                ; preds = %dec_label_pc_3b28, %dec_label_pc_3b52
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %31 = inttoptr i64 %rbx.0.reload to i64*, !insn.addr !649
  %32 = load i64, i64* %31, align 8, !insn.addr !649
  %33 = add i64 %rbx.0.reload, 8, !insn.addr !650
  %34 = inttoptr i64 %32 to i64*, !insn.addr !651
  call void @free(i64* %34), !insn.addr !651
  %35 = icmp eq i64 %rbx.0.reload, %22, !insn.addr !652
  %36 = icmp eq i1 %35, false, !insn.addr !653
  store i64 %33, i64* %rbx.0.reg2mem, !insn.addr !653
  br i1 %36, label %dec_label_pc_3b52, label %dec_label_pc_3b63, !insn.addr !653

dec_label_pc_3b63:                                ; preds = %dec_label_pc_3b52
  call void @free(i64* nonnull %3), !insn.addr !654
  call void @free(i64* nonnull %2), !insn.addr !655
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !656
  br label %dec_label_pc_3bf5, !insn.addr !656

dec_label_pc_3b8d:                                ; preds = %dec_label_pc_3b8d.lr.ph, %dec_label_pc_3b8d
  %r13.25.reload = load i64, i64* %r13.25.reg2mem
  %r14.06.reload = load i32, i32* %r14.06.reg2mem
  %r15.07.reload = load i32, i32* %r15.07.reg2mem
  %37 = mul i64 %r13.25.reload, 8, !insn.addr !657
  %38 = add i64 %37, %9, !insn.addr !657
  %39 = inttoptr i64 %38 to i64*, !insn.addr !657
  %40 = load i64, i64* %39, align 8, !insn.addr !657
  %41 = trunc i64 %40 to i32, !insn.addr !642
  %42 = call i32 @pthread_join(i32 %41, i64** nonnull %20), !insn.addr !642
  %43 = load i64, i64* %stack_var_-72, align 8, !insn.addr !658
  %44 = inttoptr i64 %43 to i32*, !insn.addr !659
  %45 = load i32, i32* %44, align 4, !insn.addr !659
  %46 = add i32 %45, %r15.07.reload, !insn.addr !659
  %47 = add i64 %43, 4, !insn.addr !660
  %48 = inttoptr i64 %47 to i32*, !insn.addr !660
  %49 = load i32, i32* %48, align 4, !insn.addr !660
  %50 = add i32 %49, %r14.06.reload, !insn.addr !660
  %51 = inttoptr i64 %43 to i64*, !insn.addr !661
  call void @free(i64* %51), !insn.addr !661
  %52 = add i64 %37, %7, !insn.addr !662
  %53 = inttoptr i64 %52 to i64*, !insn.addr !662
  %54 = load i64, i64* %53, align 8, !insn.addr !662
  %55 = add nuw nsw i64 %r13.25.reload, 1, !insn.addr !663
  %56 = inttoptr i64 %54 to i64*, !insn.addr !664
  call void @free(i64* %56), !insn.addr !664
  %57 = icmp sgt i64 %6, %55, !insn.addr !641
  store i32 %46, i32* %r15.07.reg2mem, !insn.addr !641
  store i32 %50, i32* %r14.06.reg2mem, !insn.addr !641
  store i64 %55, i64* %r13.25.reg2mem, !insn.addr !641
  store i32 %50, i32* %r14.0.lcssa.reg2mem, !insn.addr !641
  store i32 %46, i32* %r15.0.lcssa.reg2mem, !insn.addr !641
  br i1 %57, label %dec_label_pc_3b8d, label %dec_label_pc_3bc3, !insn.addr !641

dec_label_pc_3bc3:                                ; preds = %dec_label_pc_3b8d, %dec_label_pc_3b88.preheader
  %r15.0.lcssa.reload = load i32, i32* %r15.0.lcssa.reg2mem
  %r14.0.lcssa.reload = load i32, i32* %r14.0.lcssa.reg2mem
  call void @free(i64* nonnull %3), !insn.addr !665
  call void @free(i64* nonnull %2), !insn.addr !666
  %58 = trunc i64 %6 to i32
  %59 = mul i32 %58, 100, !insn.addr !667
  %60 = icmp eq i32 %59, %r15.0.lcssa.reload, !insn.addr !668
  %61 = mul i32 %58, 150, !insn.addr !669
  %62 = icmp eq i32 %61, %r14.0.lcssa.reload, !insn.addr !670
  %or.cond4 = icmp eq i1 %62, %60
  %spec.select = select i1 %or.cond4, i64 42, i64 4294967293
  store i64 %spec.select, i64* %rax.0.reg2mem
  br label %dec_label_pc_3bf5

dec_label_pc_3bf5:                                ; preds = %dec_label_pc_3bc3, %dec_label_pc_3a83, %dec_label_pc_3b63
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %63 = call i64 @__readfsqword(i64 40), !insn.addr !671
  %64 = icmp eq i64 %0, %63, !insn.addr !671
  store i64 %rax.0.reload, i64* %rax.1.reg2mem, !insn.addr !672
  br i1 %64, label %dec_label_pc_3c0a, label %dec_label_pc_3c05, !insn.addr !672

dec_label_pc_3c05:                                ; preds = %dec_label_pc_3bf5
  call void @__stack_chk_fail(), !insn.addr !673
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.1.reg2mem, !insn.addr !673
  br label %dec_label_pc_3c0a, !insn.addr !673

dec_label_pc_3c0a:                                ; preds = %dec_label_pc_3c05, %dec_label_pc_3bf5
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !674

; uselistorder directives
  uselistorder i64 %43, { 2, 1, 0 }
  uselistorder i64 %37, { 1, 0 }
  uselistorder i64 %rbx.0.reload, { 2, 0, 1 }
  uselistorder i64 %21, { 1, 0 }
  uselistorder i64 %r13.1.reload, { 1, 2, 0 }
  uselistorder i64 %r13.09.reload, { 1, 0, 2 }
  uselistorder i64 %9, { 1, 0 }
  uselistorder i64 %7, { 2, 0, 1, 3 }
  uselistorder i64 %sext, { 1, 0 }
  uselistorder i64* %3, { 2, 1, 3, 0 }
  uselistorder i64* %2, { 1, 0, 3, 2 }
  uselistorder i64* %stack_var_-72, { 1, 0 }
  uselistorder i64* %r13.09.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r13.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r15.07.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r14.06.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r13.25.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 0, 1, 3, 2 }
  uselistorder void ()* @__stack_chk_fail, { 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 15 }
  uselistorder i64 4294967293, { 5, 6, 7, 0, 1, 2, 8, 3, 9, 4 }
  uselistorder i64 42, { 1, 3, 4, 0, 5, 2, 6, 7, 8, 9, 10 }
  uselistorder i32 (i32, i64**)* @pthread_join, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder i64 4294967294, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 10 }
  uselistorder i1 false, { 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 1, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 3, 32, 4, 5, 2, 6 }
  uselistorder void (i64*)* @free, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14 }
  uselistorder i32 (i32*, i64*, i64* (i64*)*, i64*)* @pthread_create, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder i32 0, { 33, 2, 3, 0, 1, 34, 35, 12, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 47, 46, 6, 10, 48, 49, 51, 50, 5, 9, 52, 13, 53, 54, 55, 56, 57, 58, 59, 14, 15, 61, 60, 62, 16, 17, 18, 63, 19, 65, 64, 66, 67, 68, 20, 69, 70, 21, 71, 72, 7, 31, 11, 8, 4, 32, 22, 23, 24, 25, 26, 27, 28, 29, 30 }
  uselistorder i64 8, { 0, 7, 1, 2, 3, 8, 4, 9, 5, 10, 11, 12, 6 }
  uselistorder i64 32, { 0, 2, 1, 3, 4, 5 }
  uselistorder i64 4294967296, { 0, 2, 1, 3, 4, 5 }
  uselistorder i64* null, { 1, 0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 }
  uselistorder i64* (i32)* @malloc, { 5, 4, 3, 2, 1, 0, 8, 7, 6, 9 }
  uselistorder i64 40, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30 }
  uselistorder label %dec_label_pc_3bf5, { 0, 2, 1 }
  uselistorder label %dec_label_pc_3b8d, { 1, 0 }
  uselistorder label %dec_label_pc_3b52, { 1, 0 }
  uselistorder label %dec_label_pc_3b23, { 1, 0 }
  uselistorder label %dec_label_pc_3ae6, { 1, 0 }
}

define i64 @call_thread_local_storage() local_unnamed_addr {
dec_label_pc_3c19:
  %0 = call i64 @param_thread_local_storage(i64 4), !insn.addr !675
  ret i64 %0, !insn.addr !675

; uselistorder directives
  uselistorder i64 4, { 3, 8, 4, 5, 0, 1, 2, 6, 7 }
}

define i64 @test_thread_concurrency() local_unnamed_addr {
dec_label_pc_3c27:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i32 @puts(i8* bitcast (i8** @global_var_4327 to i8*)), !insn.addr !676
  %3 = call i64 @call_pthread_create(), !insn.addr !677
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_4345 to i8*)), !insn.addr !678
  %5 = call i64 @param_pthread_join(), !insn.addr !679
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_4361 to i8*)), !insn.addr !680
  %7 = call i64 @call_mutex_lock(), !insn.addr !681
  %8 = and i64 %7, 4294967295, !insn.addr !682
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_437e to i8*)), !insn.addr !683
  %10 = call i64 @param_condition_variable(i64 1, i64 ptrtoint (i8** @global_var_437e to i64), i64 %8, i64 %1), !insn.addr !684
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_439a to i8*)), !insn.addr !685
  %12 = call i64 @call_atomic_ops(), !insn.addr !686
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_43b6 to i8*)), !insn.addr !687
  %14 = call i64 @call_thread_local_storage(), !insn.addr !688
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_43d2 to i8*)), !insn.addr !689
  %16 = sext i32 %15 to i64, !insn.addr !689
  ret i64 %16, !insn.addr !689

; uselistorder directives
  uselistorder i64 1, { 9, 13, 14, 15, 16, 2, 17, 3, 18, 10, 11, 12, 4, 5, 20, 19, 21, 0, 1, 6, 7, 8 }
  uselistorder i8** @global_var_437e, { 1, 0 }
  uselistorder i64 4294967295, { 20, 0, 21, 1, 2, 22, 3, 4, 5, 23, 24, 6, 25, 8, 7, 9, 10, 26, 11, 18, 27, 28, 29, 30, 12, 13, 14, 19, 31, 32, 33, 34, 35, 36, 15, 37, 16, 38, 17 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12, 26 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
  uselistorder i64 0, { 0, 30, 31, 1, 2, 25, 3, 4, 26, 5, 6, 27, 7, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 8, 9, 10, 11, 28, 12, 29, 105, 106, 32, 33, 107, 108, 109, 110, 16, 17, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 18, 19, 13, 20, 21, 14, 22, 134, 23, 24, 15, 135, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 130, 131, 132, 133 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_3ce4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !690

; uselistorder directives
  uselistorder i32 1, { 22, 86, 87, 88, 89, 90, 91, 21, 92, 133, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 93, 123, 122, 41, 40, 39, 38, 37, 20, 124, 125, 134, 42, 126, 46, 45, 44, 43, 138, 137, 136, 135, 51, 50, 49, 48, 47, 19, 140, 127, 139, 52, 94, 95, 96, 97, 98, 99, 100, 18, 17, 101, 57, 56, 55, 54, 53, 102, 58, 16, 103, 104, 141, 128, 60, 59, 0, 105, 129, 142, 62, 61, 26, 15, 130, 64, 63, 143, 65, 14, 13, 66, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 131, 68, 67, 25, 12, 71, 70, 69, 73, 72, 118, 119, 145, 144, 75, 74, 11, 76, 77, 24, 10, 120, 148, 147, 146, 78, 9, 149, 132, 79, 23, 8, 7, 80, 6, 81, 5, 151, 121, 82, 4, 3, 84, 83, 152, 2, 1, 150, 85 }
}

declare i32 @__snprintf_chk(i8*, i32, i32, i32, i8*, ...) local_unnamed_addr

declare i32 @raise(i32) local_unnamed_addr

declare void @free(i64*) local_unnamed_addr

declare i32* @__errno_location() local_unnamed_addr

declare i32 @unlink(i8*) local_unnamed_addr

declare i8* @strncpy(i8*, i8*, i32) local_unnamed_addr

declare void @_exit(i32) local_unnamed_addr

declare i8* @strcpy(i8*, i8*) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @fread(i64*, i32, i32, %_IO_FILE*) local_unnamed_addr

declare i32 @setsockopt(i32, i32, i32, i64*, i32) local_unnamed_addr

declare i32 @shmdt(i64*) local_unnamed_addr

declare i32 @write(i32, i64*, i32) local_unnamed_addr

declare i32 @pthread_cond_wait(i64*, i64*) local_unnamed_addr

declare i32 @fclose(%_IO_FILE*) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i8* @strchr(i8*, i32) local_unnamed_addr

declare void @rewind(%_IO_FILE*) local_unnamed_addr

declare i32 @alarm(i32) local_unnamed_addr

declare i32 @close(i32) local_unnamed_addr

declare i32 @pipe([2 x i32]) local_unnamed_addr

declare i32 @read(i32, i64*, i32) local_unnamed_addr

declare i32 @memcmp(i64*, i64*, i32) local_unnamed_addr

declare i32 @pthread_cond_signal(i64*) local_unnamed_addr

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare void (i32)* @signal(i32, void (i32)*) local_unnamed_addr

declare i32 @syscall(i32, ...) local_unnamed_addr

declare i32 @stat(i8*, %stat*) local_unnamed_addr

declare i32 @fileno(%_IO_FILE*) local_unnamed_addr

declare i32 @pthread_mutex_unlock(i64*) local_unnamed_addr

declare i64* @malloc(i32) local_unnamed_addr

declare i32 @sscanf(i8*, i8*, ...) local_unnamed_addr

declare i32 @listen(i32, i32) local_unnamed_addr

declare i32 @__printf_chk(i32, i8*, ...) local_unnamed_addr

declare i32 @bind(i32, %sockaddr*, i32) local_unnamed_addr

declare i32 @pthread_create(i32*, i64*, i64* (i64*)*, i64*) local_unnamed_addr

declare i32 @waitpid(i32, i32*, i32) local_unnamed_addr

declare i32 @open(i8*, i32, ...) local_unnamed_addr

declare i32 @shmctl(i32, i32, %shmid_ds*) local_unnamed_addr

declare %_IO_FILE* @fopen(i8*, i8*) local_unnamed_addr

declare i64* @shmat(i32, i64*, i32) local_unnamed_addr

declare i32 @shmget(i32, i32, i32) local_unnamed_addr

declare i32 @fwrite(i64*, i32, i32, %_IO_FILE*) local_unnamed_addr

declare i32 @ftok(i8*, i32) local_unnamed_addr

declare i32 @pthread_join(i32, i64**) local_unnamed_addr

declare i32 @execl(i8*, i8*, ...) local_unnamed_addr

declare i32 @pthread_cancel(i32) local_unnamed_addr

declare i32 @sleep(i32) local_unnamed_addr

declare i32 @wait(i64) local_unnamed_addr

declare i32 @fork() local_unnamed_addr

declare i8* @strstr(i8*, i8*) local_unnamed_addr

declare i32 @pthread_mutex_lock(i64*) local_unnamed_addr

declare i32 @usleep(i32) local_unnamed_addr

declare i32 @socket(i32, i32, i32) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

declare void @__asm_rep_stosd_memset(i8*, i32, i64) local_unnamed_addr

declare void @__asm_rep_movsb_memcpy(i8*, i8*, i64) local_unnamed_addr

declare void @__asm_rep_stosb_memset(i8*, i8, i64) local_unnamed_addr

declare i128 @__asm_xorps(i128, i128) local_unnamed_addr

declare void @__asm_movups(i128, i128) local_unnamed_addr

declare void @__asm_rep_movsd_memcpy(i8*, i8*, i64) local_unnamed_addr

declare i32 @__readfsdword(i64) local_unnamed_addr

declare i64 @__readfsqword(i64) local_unnamed_addr

declare void @__writefsdword(i64, i32) local_unnamed_addr

!0 = !{i64 8192}
!1 = !{i64 8200}
!2 = !{i64 8207}
!3 = !{i64 8210}
!4 = !{i64 8212}
!5 = !{i64 8218}
!6 = !{i64 9124}
!7 = !{i64 9140}
!8 = !{i64 9156}
!9 = !{i64 9172}
!10 = !{i64 9188}
!11 = !{i64 9204}
!12 = !{i64 9220}
!13 = !{i64 9236}
!14 = !{i64 9252}
!15 = !{i64 9268}
!16 = !{i64 9284}
!17 = !{i64 9300}
!18 = !{i64 9316}
!19 = !{i64 9332}
!20 = !{i64 9348}
!21 = !{i64 9364}
!22 = !{i64 9380}
!23 = !{i64 9396}
!24 = !{i64 9412}
!25 = !{i64 9428}
!26 = !{i64 9444}
!27 = !{i64 9460}
!28 = !{i64 9476}
!29 = !{i64 9492}
!30 = !{i64 9508}
!31 = !{i64 9524}
!32 = !{i64 9540}
!33 = !{i64 9556}
!34 = !{i64 9572}
!35 = !{i64 9588}
!36 = !{i64 9604}
!37 = !{i64 9620}
!38 = !{i64 9636}
!39 = !{i64 9652}
!40 = !{i64 9668}
!41 = !{i64 9684}
!42 = !{i64 9700}
!43 = !{i64 9716}
!44 = !{i64 9732}
!45 = !{i64 9748}
!46 = !{i64 9764}
!47 = !{i64 9780}
!48 = !{i64 9796}
!49 = !{i64 9812}
!50 = !{i64 9828}
!51 = !{i64 9844}
!52 = !{i64 9860}
!53 = !{i64 9876}
!54 = !{i64 9892}
!55 = !{i64 9908}
!56 = !{i64 9924}
!57 = !{i64 9940}
!58 = !{i64 9956}
!59 = !{i64 9972}
!60 = !{i64 9988}
!61 = !{i64 10004}
!62 = !{i64 10023}
!63 = !{i64 10030}
!64 = !{i64 10037}
!65 = !{i64 10045}
!66 = !{i64 10079}
!67 = !{i64 10085}
!68 = !{i64 10136}
!69 = !{i64 10200}
!70 = !{i64 10212}
!71 = !{i64 10219}
!72 = !{i64 10222}
!73 = !{i64 10233}
!74 = !{i64 10235}
!75 = !{i64 10242}
!76 = !{i64 10247}
!77 = !{i64 10252}
!78 = !{i64 10260}
!79 = !{i64 10264}
!80 = !{i64 10276}
!81 = !{i64 10285}
!82 = !{i64 10295}
!83 = !{i64 10301}
!84 = !{i64 10302}
!85 = !{i64 10308}
!86 = !{i64 10311}
!87 = !{i64 10320}
!88 = !{i64 10306}
!89 = !{i64 10322}
!90 = !{i64 10325}
!91 = !{i64 10331}
!92 = !{i64 10344}
!93 = !{i64 10347}
!94 = !{i64 10352}
!95 = !{i64 10355}
!96 = !{i64 10356}
!97 = !{i64 10371}
!98 = !{i64 10379}
!99 = !{i64 10384}
!100 = !{i64 10386}
!101 = !{i64 10402}
!102 = !{i64 10408}
!103 = !{i64 10418}
!104 = !{i64 10431}
!105 = !{i64 10456}
!106 = !{i64 10461}
!107 = !{i64 10468}
!108 = !{i64 10476}
!109 = !{i64 10486}
!110 = !{i64 10492}
!111 = !{i64 10502}
!112 = !{i64 10507}
!113 = !{i64 10512}
!114 = !{i64 10530}
!115 = !{i64 10538}
!116 = !{i64 10550}
!117 = !{i64 10560}
!118 = !{i64 10570}
!119 = !{i64 10578}
!120 = !{i64 10586}
!121 = !{i64 10587}
!122 = !{i64 10591}
!123 = !{i64 10597}
!124 = !{i64 10622}
!125 = !{i64 10614}
!126 = !{i64 10606}
!127 = !{i64 10628}
!128 = !{i64 10642}
!129 = !{i64 10650}
!130 = !{i64 10666}
!131 = !{i64 10674}
!132 = !{i64 10683}
!133 = !{i64 10686}
!134 = !{i64 10694}
!135 = !{i64 10701}
!136 = !{i64 10711}
!137 = !{i64 10716}
!138 = !{i64 10718}
!139 = !{i64 10724}
!140 = !{i64 10730}
!141 = !{i64 10738}
!142 = !{i64 10744}
!143 = !{i64 10745}
!144 = !{i64 10760}
!145 = !{i64 10781}
!146 = !{i64 10791}
!147 = !{i64 10800}
!148 = !{i64 10802}
!149 = !{i64 10811}
!150 = !{i64 10817}
!151 = !{i64 10830}
!152 = !{i64 10833}
!153 = !{i64 10844}
!154 = !{i64 10866}
!155 = !{i64 10883}
!156 = !{i64 10904}
!157 = !{i64 10909}
!158 = !{i64 10912}
!159 = !{i64 10916}
!160 = !{i64 10922}
!161 = !{i64 10928}
!162 = !{i64 10938}
!163 = !{i64 10949}
!164 = !{i64 10951}
!165 = !{i64 10952}
!166 = !{i64 10970}
!167 = !{i64 10999}
!168 = !{i64 11010}
!169 = !{i64 11031}
!170 = !{i64 11038}
!171 = !{i64 11047}
!172 = !{i64 11051}
!173 = !{i64 11060}
!174 = !{i64 11069}
!175 = !{i64 11071}
!176 = !{i64 11080}
!177 = !{i64 11086}
!178 = !{i64 11099}
!179 = !{i64 11102}
!180 = !{i64 11113}
!181 = !{i64 11114}
!182 = !{i64 11129}
!183 = !{i64 11190}
!184 = !{i64 11195}
!185 = !{i64 11200}
!186 = !{i64 11205}
!187 = !{i64 11225}
!188 = !{i64 11230}
!189 = !{i64 11237}
!190 = !{i64 11246}
!191 = !{i64 11248}
!192 = !{i64 11259}
!193 = !{i64 11264}
!194 = !{i64 11283}
!195 = !{i64 11304}
!196 = !{i64 11306}
!197 = !{i64 11321}
!198 = !{i64 11345}
!199 = !{i64 11356}
!200 = !{i64 11360}
!201 = !{i64 11374}
!202 = !{i64 11383}
!203 = !{i64 11385}
!204 = !{i64 11394}
!205 = !{i64 11406}
!206 = !{i64 11408}
!207 = !{i64 11427}
!208 = !{i64 11432}
!209 = !{i64 11435}
!210 = !{i64 11443}
!211 = !{i64 11451}
!212 = !{i64 11454}
!213 = !{i64 11466}
!214 = !{i64 11479}
!215 = !{i64 11485}
!216 = !{i64 11488}
!217 = !{i64 11491}
!218 = !{i64 11492}
!219 = !{i64 11518}
!220 = !{i64 11534}
!221 = !{i64 11545}
!222 = !{i64 11548}
!223 = !{i64 11577}
!224 = !{i64 11585}
!225 = !{i64 11589}
!226 = !{i64 11591}
!227 = !{i64 11601}
!228 = !{i64 11514}
!229 = !{i64 11603}
!230 = !{i64 11629}
!231 = !{i64 11637}
!232 = !{i64 11645}
!233 = !{i64 11653}
!234 = !{i64 11663}
!235 = !{i64 11667}
!236 = !{i64 11675}
!237 = !{i64 11680}
!238 = !{i64 11688}
!239 = !{i64 11696}
!240 = !{i64 11705}
!241 = !{i64 11707}
!242 = !{i64 11724}
!243 = !{i64 11736}
!244 = !{i64 11741}
!245 = !{i64 11752}
!246 = !{i64 11767}
!247 = !{i64 11772}
!248 = !{i64 11775}
!249 = !{i64 11782}
!250 = !{i64 11785}
!251 = !{i64 11787}
!252 = !{i64 11790}
!253 = !{i64 11793}
!254 = !{i64 11798}
!255 = !{i64 11801}
!256 = !{i64 11806}
!257 = !{i64 11818}
!258 = !{i64 11828}
!259 = !{i64 11830}
!260 = !{i64 11845}
!261 = !{i64 11849}
!262 = !{i64 11852}
!263 = !{i64 11854}
!264 = !{i64 11858}
!265 = !{i64 11861}
!266 = !{i64 11869}
!267 = !{i64 11870}
!268 = !{i64 11878}
!269 = !{i64 11894}
!270 = !{i64 11892}
!271 = !{i64 11897}
!272 = !{i64 11904}
!273 = !{i64 11911}
!274 = !{i64 11918}
!275 = !{i64 11927}
!276 = !{i64 11935}
!277 = !{i64 11944}
!278 = !{i64 11946}
!279 = !{i64 11955}
!280 = !{i64 11962}
!281 = !{i64 11981}
!282 = !{i64 11995}
!283 = !{i64 11998}
!284 = !{i64 12001}
!285 = !{i64 12005}
!286 = !{i64 12013}
!287 = !{i64 12016}
!288 = !{i64 12019}
!289 = !{i64 12025}
!290 = !{i64 12035}
!291 = !{i64 12059}
!292 = !{i64 12073}
!293 = !{i64 12080}
!294 = !{i64 12101}
!295 = !{i64 12108}
!296 = !{i64 12129}
!297 = !{i64 12153}
!298 = !{i64 12160}
!299 = !{i64 12181}
!300 = !{i64 12188}
!301 = !{i64 12209}
!302 = !{i64 12216}
!303 = !{i64 12237}
!304 = !{i64 12244}
!305 = !{i64 12265}
!306 = !{i64 12272}
!307 = !{i64 12293}
!308 = !{i64 12300}
!309 = !{i64 12321}
!310 = !{i64 12328}
!311 = !{i64 12349}
!312 = !{i64 12356}
!313 = !{i64 12377}
!314 = !{i64 12384}
!315 = !{i64 12406}
!316 = !{i64 12411}
!317 = !{i64 12429}
!318 = !{i64 12434}
!319 = !{i64 12436}
!320 = !{i64 12438}
!321 = !{i64 12443}
!322 = !{i64 12446}
!323 = !{i64 12449}
!324 = !{i64 12463}
!325 = !{i64 12473}
!326 = !{i64 12486}
!327 = !{i64 12492}
!328 = !{i64 12495}
!329 = !{i64 12498}
!330 = !{i64 12499}
!331 = !{i64 12510}
!332 = !{i64 12534}
!333 = !{i64 12545}
!334 = !{i64 12577}
!335 = !{i64 12586}
!336 = !{i64 12588}
!337 = !{i64 12600}
!338 = !{i64 12612}
!339 = !{i64 12614}
!340 = !{i64 12631}
!341 = !{i64 12647}
!342 = !{i64 12652}
!343 = !{i64 12654}
!344 = !{i64 12656}
!345 = !{i64 12671}
!346 = !{i64 12681}
!347 = !{i64 12695}
!348 = !{i64 12708}
!349 = !{i64 12711}
!350 = !{i64 12713}
!351 = !{i64 12722}
!352 = !{i64 12725}
!353 = !{i64 12727}
!354 = !{i64 12730}
!355 = !{i64 12740}
!356 = !{i64 12749}
!357 = !{i64 12751}
!358 = !{i64 12763}
!359 = !{i64 12778}
!360 = !{i64 12784}
!361 = !{i64 12792}
!362 = !{i64 12794}
!363 = !{i64 12795}
!364 = !{i64 12800}
!365 = !{i64 12804}
!366 = !{i64 12823}
!367 = !{i64 12828}
!368 = !{i64 12830}
!369 = !{i64 12832}
!370 = !{i64 12837}
!371 = !{i64 12839}
!372 = !{i64 12841}
!373 = !{i64 12843}
!374 = !{i64 12846}
!375 = !{i64 12867}
!376 = !{i64 12876}
!377 = !{i64 12883}
!378 = !{i64 12892}
!379 = !{i64 12897}
!380 = !{i64 12910}
!381 = !{i64 12915}
!382 = !{i64 12921}
!383 = !{i64 12926}
!384 = !{i64 12933}
!385 = !{i64 12951}
!386 = !{i64 12954}
!387 = !{i64 12971}
!388 = !{i64 12980}
!389 = !{i64 12982}
!390 = !{i64 12992}
!391 = !{i64 12997}
!392 = !{i64 13002}
!393 = !{i64 13022}
!394 = !{i64 13038}
!395 = !{i64 13048}
!396 = !{i64 13050}
!397 = !{i64 13081}
!398 = !{i64 13089}
!399 = !{i64 13098}
!400 = !{i64 13100}
!401 = !{i64 13102}
!402 = !{i64 13112}
!403 = !{i64 13114}
!404 = !{i64 13131}
!405 = !{i64 13136}
!406 = !{i64 13143}
!407 = !{i64 13152}
!408 = !{i64 13154}
!409 = !{i64 13156}
!410 = !{i64 13166}
!411 = !{i64 13177}
!412 = !{i64 13186}
!413 = !{i64 13188}
!414 = !{i64 13207}
!415 = !{i64 13217}
!416 = !{i64 13226}
!417 = !{i64 13228}
!418 = !{i64 13237}
!419 = !{i64 13242}
!420 = !{i64 13247}
!421 = !{i64 13278}
!422 = !{i64 13283}
!423 = !{i64 13285}
!424 = !{i64 13295}
!425 = !{i64 13308}
!426 = !{i64 13315}
!427 = !{i64 13317}
!428 = !{i64 13335}
!429 = !{i64 13343}
!430 = !{i64 13345}
!431 = !{i64 13359}
!432 = !{i64 13367}
!433 = !{i64 13371}
!434 = !{i64 13383}
!435 = !{i64 13391}
!436 = !{i64 13399}
!437 = !{i64 13402}
!438 = !{i64 13414}
!439 = !{i64 13427}
!440 = !{i64 13433}
!441 = !{i64 13443}
!442 = !{i64 13450}
!443 = !{i64 13454}
!444 = !{i64 13455}
!445 = !{i64 13477}
!446 = !{i64 13488}
!447 = !{i64 13491}
!448 = !{i64 13505}
!449 = !{i64 13518}
!450 = !{i64 13521}
!451 = !{i64 13537}
!452 = !{i64 13547}
!453 = !{i64 13558}
!454 = !{i64 13560}
!455 = !{i64 13562}
!456 = !{i64 13564}
!457 = !{i64 13571}
!458 = !{i64 13578}
!459 = !{i64 13589}
!460 = !{i64 13591}
!461 = !{i64 13593}
!462 = !{i64 13604}
!463 = !{i64 13607}
!464 = !{i64 13619}
!465 = !{i64 13629}
!466 = !{i64 13640}
!467 = !{i64 13642}
!468 = !{i64 13644}
!469 = !{i64 13646}
!470 = !{i64 13653}
!471 = !{i64 13660}
!472 = !{i64 13671}
!473 = !{i64 13673}
!474 = !{i64 13675}
!475 = !{i64 13681}
!476 = !{i64 13684}
!477 = !{i64 13693}
!478 = !{i64 13705}
!479 = !{i64 13710}
!480 = !{i64 13718}
!481 = !{i64 13723}
!482 = !{i64 13740}
!483 = !{i64 13747}
!484 = !{i64 13768}
!485 = !{i64 13775}
!486 = !{i64 13796}
!487 = !{i64 13803}
!488 = !{i64 13824}
!489 = !{i64 13829}
!490 = !{i64 13846}
!491 = !{i64 13850}
!492 = !{i64 13855}
!493 = !{i64 13876}
!494 = !{i64 13883}
!495 = !{i64 13900}
!496 = !{i64 13904}
!497 = !{i64 13909}
!498 = !{i64 13931}
!499 = !{i64 13936}
!500 = !{i64 13959}
!501 = !{i64 13980}
!502 = !{i64 13989}
!503 = !{i64 13994}
!504 = !{i64 13996}
!505 = !{i64 13998}
!506 = !{i64 14008}
!507 = !{i64 14013}
!508 = !{i64 14018}
!509 = !{i64 14021}
!510 = !{i64 14031}
!511 = !{i64 14040}
!512 = !{i64 14042}
!513 = !{i64 14056}
!514 = !{i64 14066}
!515 = !{i64 14071}
!516 = !{i64 14108}
!517 = !{i64 14129}
!518 = !{i64 14134}
!519 = !{i64 14136}
!520 = !{i64 14141}
!521 = !{i64 14146}
!522 = !{i64 14160}
!523 = !{i64 14168}
!524 = !{i64 14170}
!525 = !{i64 14172}
!526 = !{i64 14176}
!527 = !{i64 14180}
!528 = !{i64 14183}
!529 = !{i64 14187}
!530 = !{i64 14192}
!531 = !{i64 14199}
!532 = !{i64 14204}
!533 = !{i64 14206}
!534 = !{i64 14208}
!535 = !{i64 14212}
!536 = !{i64 14215}
!537 = !{i64 14220}
!538 = !{i64 14224}
!539 = !{i64 14245}
!540 = !{i64 14254}
!541 = !{i64 14256}
!542 = !{i64 14278}
!543 = !{i64 14285}
!544 = !{i64 14290}
!545 = !{i64 14316}
!546 = !{i64 14320}
!547 = !{i64 14331}
!548 = !{i64 14334}
!549 = !{i64 14296}
!550 = !{i64 14340}
!551 = !{i64 14366}
!552 = !{i64 14381}
!553 = !{i64 14390}
!554 = !{i64 14392}
!555 = !{i64 14397}
!556 = !{i64 14407}
!557 = !{i64 14386}
!558 = !{i64 14409}
!559 = !{i64 14422}
!560 = !{i64 14429}
!561 = !{i64 14432}
!562 = !{i64 14420}
!563 = !{i64 14442}
!564 = !{i64 14447}
!565 = !{i64 14452}
!566 = !{i64 14463}
!567 = !{i64 14470}
!568 = !{i64 14485}
!569 = !{i64 14500}
!570 = !{i64 14505}
!571 = !{i64 14530}
!572 = !{i64 14551}
!573 = !{i64 14561}
!574 = !{i64 14571}
!575 = !{i64 14576}
!576 = !{i64 14578}
!577 = !{i64 14594}
!578 = !{i64 14599}
!579 = !{i64 14604}
!580 = !{i64 14606}
!581 = !{i64 14608}
!582 = !{i64 14619}
!583 = !{i64 14626}
!584 = !{i64 14631}
!585 = !{i64 14637}
!586 = !{i64 14642}
!587 = !{i64 14647}
!588 = !{i64 14650}
!589 = !{i64 14660}
!590 = !{i64 14669}
!591 = !{i64 14671}
!592 = !{i64 14685}
!593 = !{i64 14692}
!594 = !{i64 14697}
!595 = !{i64 14723}
!596 = !{i64 14727}
!597 = !{i64 14743}
!598 = !{i64 14754}
!599 = !{i64 14757}
!600 = !{i64 14703}
!601 = !{i64 14765}
!602 = !{i64 14787}
!603 = !{i64 14802}
!604 = !{i64 14811}
!605 = !{i64 14813}
!606 = !{i64 14818}
!607 = !{i64 14828}
!608 = !{i64 14807}
!609 = !{i64 14830}
!610 = !{i64 14851}
!611 = !{i64 14856}
!612 = !{i64 14858}
!613 = !{i64 14860}
!614 = !{i64 14867}
!615 = !{i64 14878}
!616 = !{i64 14880}
!617 = !{i64 14887}
!618 = !{i64 14890}
!619 = !{i64 14900}
!620 = !{i64 14906}
!621 = !{i64 14923}
!622 = !{i64 14931}
!623 = !{i64 14940}
!624 = !{i64 14942}
!625 = !{i64 14959}
!626 = !{i64 14974}
!627 = !{i64 14979}
!628 = !{i64 15010}
!629 = !{i64 15026}
!630 = !{i64 15037}
!631 = !{i64 15042}
!632 = !{i64 15064}
!633 = !{i64 15045}
!634 = !{i64 14992}
!635 = !{i64 15076}
!636 = !{i64 15083}
!637 = !{i64 15099}
!638 = !{i64 15119}
!639 = !{i64 15122}
!640 = !{i64 15142}
!641 = !{i64 15243}
!642 = !{i64 15257}
!643 = !{i64 15144}
!644 = !{i64 15162}
!645 = !{i64 15166}
!646 = !{i64 15169}
!647 = !{i64 15174}
!648 = !{i64 15176}
!649 = !{i64 15186}
!650 = !{i64 15189}
!651 = !{i64 15193}
!652 = !{i64 15198}
!653 = !{i64 15201}
!654 = !{i64 15206}
!655 = !{i64 15214}
!656 = !{i64 15224}
!657 = !{i64 15245}
!658 = !{i64 15262}
!659 = !{i64 15267}
!660 = !{i64 15270}
!661 = !{i64 15274}
!662 = !{i64 15279}
!663 = !{i64 15284}
!664 = !{i64 15287}
!665 = !{i64 15302}
!666 = !{i64 15310}
!667 = !{i64 15315}
!668 = !{i64 15318}
!669 = !{i64 15323}
!670 = !{i64 15334}
!671 = !{i64 15354}
!672 = !{i64 15363}
!673 = !{i64 15365}
!674 = !{i64 15384}
!675 = !{i64 15394}
!676 = !{i64 15411}
!677 = !{i64 15418}
!678 = !{i64 15439}
!679 = !{i64 15446}
!680 = !{i64 15467}
!681 = !{i64 15474}
!682 = !{i64 15491}
!683 = !{i64 15495}
!684 = !{i64 15502}
!685 = !{i64 15523}
!686 = !{i64 15530}
!687 = !{i64 15551}
!688 = !{i64 15558}
!689 = !{i64 15580}
!690 = !{i64 15600}
