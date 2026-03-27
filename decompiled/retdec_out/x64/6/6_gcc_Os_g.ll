source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%_IO_FILE = type { i32 }
%stat = type { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }
%sockaddr = type { i64, [14 x i8] }
%shmid_ds = type { %ipc_perm, i32, i64, i64, i64, i32, i32, i16, i16, i64*, i64* }
%ipc_perm = type { i32, i32, i32, i32, i32, i32, i16 }

@signal_received = local_unnamed_addr global i32 0
@signal_number = local_unnamed_addr global i32 0
@counter_mutex = global i32 0
@shared_counter = local_unnamed_addr global i32 0
@cond_mutex = global i32 0
@cond = global i32 0
@ready = local_unnamed_addr global i32 0
@data = local_unnamed_addr global i32 0
@atomic_counter = local_unnamed_addr global i32 0
@global_var_4004 = constant [9 x i8] c"HelloLib\00"
@global_var_400d = constant [4 x i8] c"def\00"
@global_var_4011 = constant [4 x i8] c"abc\00"
@global_var_4015 = constant [4 x i8] c"xyz\00"
@global_var_4019 = constant [4 x i8] c"aaa\00"
@global_var_401d = constant [4 x i8] c"bbb\00"
@global_var_4021 = constant [21 x i8] c"Value: %d, Name: %s\0A\00"
@global_var_4094 = constant [5 x i8] c"Test\00"
@global_var_4036 = constant [6 x i8] c"%d,%d\00"
@global_var_403c = constant [8 x i8] c"123,456\00"
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
@global_var_3e8 = global i32 2
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
@global_var_3b6 = global i32 531868285
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

define i32 @main() local_unnamed_addr {
dec_label_pc_2720:
  call void @test_standard_library_functions(), !insn.addr !62
  call void @test_system_calls(), !insn.addr !63
  call void @test_thread_concurrency(), !insn.addr !64
  ret i32 xor (i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !65
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

define void @signal_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_2829:
  store i32 1, i32* @signal_received, align 4, !insn.addr !81
  store i32 %sig, i32* @signal_number, align 4, !insn.addr !82
  ret void, !insn.addr !83
}

define i8* @thread_sum(i8* %arg) local_unnamed_addr {
dec_label_pc_283e:
  %rax.01.reg2mem = alloca i64, !insn.addr !84
  %.reg2mem = alloca i32, !insn.addr !84
  %0 = ptrtoint i8* %arg to i64
  %1 = trunc i64 %0 to i32
  %2 = add i64 %0, 4, !insn.addr !85
  %3 = inttoptr i64 %2 to i32*, !insn.addr !85
  %4 = load i32, i32* %3, align 4, !insn.addr !85
  %5 = add i64 %0, 8, !insn.addr !86
  %6 = inttoptr i64 %5 to i32*, !insn.addr !86
  store i32 0, i32* %6, align 4, !insn.addr !86
  %7 = icmp ult i32 %4, %1, !insn.addr !87
  br i1 %7, label %dec_label_pc_2859, label %dec_label_pc_2852.lr.ph, !insn.addr !87

dec_label_pc_2852.lr.ph:                          ; preds = %dec_label_pc_283e
  %8 = zext i32 %4 to i64, !insn.addr !85
  %9 = and i64 %0, 4294967295, !insn.addr !88
  store i32 0, i32* %.reg2mem
  store i64 %9, i64* %rax.01.reg2mem
  br label %dec_label_pc_2852

dec_label_pc_2852:                                ; preds = %dec_label_pc_2852.lr.ph, %dec_label_pc_2852
  %rax.01.reload = load i64, i64* %rax.01.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %10 = trunc i64 %rax.01.reload to i32, !insn.addr !89
  %11 = add i32 %.reload, %10, !insn.addr !89
  %12 = add nuw nsw i64 %rax.01.reload, 1, !insn.addr !90
  %13 = and i64 %12, 4294967295, !insn.addr !90
  %14 = icmp ugt i64 %13, %8, !insn.addr !87
  store i32 %11, i32* %.reg2mem, !insn.addr !87
  store i64 %13, i64* %rax.01.reg2mem, !insn.addr !87
  br i1 %14, label %dec_label_pc_2859.loopexit, label %dec_label_pc_2852, !insn.addr !87

dec_label_pc_2859.loopexit:                       ; preds = %dec_label_pc_2852
  store i32 %11, i32* %6, align 4
  br label %dec_label_pc_2859

dec_label_pc_2859:                                ; preds = %dec_label_pc_2859.loopexit, %dec_label_pc_283e
  ret i8* null, !insn.addr !91

; uselistorder directives
  uselistorder i32 %11, { 1, 0 }
  uselistorder i32 %4, { 1, 0 }
  uselistorder i64 %0, { 0, 3, 2, 1 }
  uselistorder i32* %.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.01.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2852, { 1, 0 }
}

define i8* @thread_compute(i8* %arg) local_unnamed_addr {
dec_label_pc_285c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = mul i32 %2, %2, !insn.addr !92
  %4 = call i64* @malloc(i32 4), !insn.addr !93
  %5 = bitcast i64* %4 to i32*, !insn.addr !94
  store i32 %3, i32* %5, align 4, !insn.addr !94
  %6 = bitcast i64* %4 to i8*, !insn.addr !95
  ret i8* %6, !insn.addr !95

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i8* @thread_increment(i8* %arg) local_unnamed_addr {
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
  %7 = call i32 @pthread_mutex_lock(i64* bitcast (i32* @counter_mutex to i64*)), !insn.addr !100
  %8 = load i32, i32* @shared_counter, align 4, !insn.addr !101
  %9 = add i32 %8, 1, !insn.addr !102
  store i32 %9, i32* @shared_counter, align 4, !insn.addr !103
  %10 = call i32 @pthread_mutex_unlock(i64* bitcast (i32* @counter_mutex to i64*)), !insn.addr !104
  %11 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !105
  %12 = icmp ult i64 %6, %3, !insn.addr !98
  store i64 %6, i64* %rbx.01.reg2mem, !insn.addr !98
  br i1 %12, label %dec_label_pc_288d, label %dec_label_pc_28b9, !insn.addr !98

dec_label_pc_28b9:                                ; preds = %dec_label_pc_288d, %dec_label_pc_2874
  ret i8* null, !insn.addr !106

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %rbx.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_288d, { 1, 0 }
}

define i8* @consumer_thread(i8* %arg) local_unnamed_addr {
dec_label_pc_28c0:
  %0 = call i32 @pthread_mutex_lock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !107
  %1 = load i32, i32* @ready, align 4, !insn.addr !108
  %2 = icmp eq i32 %1, 0, !insn.addr !108
  %3 = icmp eq i1 %2, false, !insn.addr !109
  br i1 %3, label %dec_label_pc_28f3, label %dec_label_pc_28e6, !insn.addr !109

dec_label_pc_28e6:                                ; preds = %dec_label_pc_28c0, %dec_label_pc_28e6
  %4 = call i32 @pthread_cond_wait(i64* bitcast (i32* @cond to i64*), i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !110
  %5 = load i32, i32* @ready, align 4, !insn.addr !108
  %6 = icmp eq i32 %5, 0, !insn.addr !108
  %7 = icmp eq i1 %6, false, !insn.addr !109
  br i1 %7, label %dec_label_pc_28f3, label %dec_label_pc_28e6, !insn.addr !109

dec_label_pc_28f3:                                ; preds = %dec_label_pc_28e6, %dec_label_pc_28c0
  %8 = load i32, i32* @data, align 4, !insn.addr !111
  %9 = call i32 @pthread_mutex_unlock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !112
  %10 = call i64* @malloc(i32 4), !insn.addr !113
  %11 = bitcast i64* %10 to i32*, !insn.addr !114
  store i32 %8, i32* %11, align 4, !insn.addr !114
  %12 = bitcast i64* %10 to i8*, !insn.addr !115
  ret i8* %12, !insn.addr !115

; uselistorder directives
  uselistorder label %dec_label_pc_28e6, { 1, 0 }
}

define i8* @producer_thread(i8* %arg) local_unnamed_addr {
dec_label_pc_2911:
  %0 = call i32 @sleep(i32 1), !insn.addr !116
  %1 = call i32 @pthread_mutex_lock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !117
  store i32 42, i32* @data, align 4, !insn.addr !118
  store i32 1, i32* @ready, align 4, !insn.addr !119
  %2 = call i32 @pthread_cond_signal(i64* bitcast (i32* @cond to i64*)), !insn.addr !120
  %3 = call i32 @pthread_mutex_unlock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !121
  ret i8* null, !insn.addr !122

; uselistorder directives
  uselistorder i32 (i64*)* @pthread_mutex_unlock, { 2, 1, 0, 3 }
  uselistorder i64* bitcast (i32* @cond to i64*), { 1, 0 }
  uselistorder i32 (i64*)* @pthread_mutex_lock, { 2, 1, 0, 3 }
  uselistorder i64* bitcast (i32* @cond_mutex to i64*), { 2, 3, 0, 1, 4 }
}

define i8* @thread_atomic_increment(i8* %arg) local_unnamed_addr {
dec_label_pc_295b:
  %0 = alloca i64
  %storemerge1.reg2mem = alloca i64, !insn.addr !123
  %.reg2mem = alloca i32, !insn.addr !123
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp eq i32 %2, 0, !insn.addr !124
  br i1 %3, label %dec_label_pc_2982, label %dec_label_pc_2967.lr.ph, !insn.addr !124

dec_label_pc_2967.lr.ph:                          ; preds = %dec_label_pc_295b
  %4 = and i64 %1, 4294967295, !insn.addr !125
  %atomic_counter.promoted = load i32, i32* @atomic_counter, align 4
  store i32 %atomic_counter.promoted, i32* %.reg2mem
  store i64 0, i64* %storemerge1.reg2mem
  br label %dec_label_pc_2967

dec_label_pc_2967:                                ; preds = %dec_label_pc_2967.lr.ph, %dec_label_pc_2967
  %storemerge1.reload = load i64, i64* %storemerge1.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %5 = add i32 %.reload, 1, !insn.addr !126
  %6 = trunc i64 %storemerge1.reload to i32
  %7 = add i32 %6, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !127
  %8 = icmp eq i32 %5, %6, !insn.addr !128
  %9 = select i1 %8, i32 %7, i32 %5, !insn.addr !128
  %10 = add nuw nsw i64 %storemerge1.reload, 1, !insn.addr !129
  %11 = and i64 %10, 4294967295, !insn.addr !129
  %12 = icmp ult i64 %11, %4, !insn.addr !124
  store i32 %9, i32* %.reg2mem, !insn.addr !124
  store i64 %11, i64* %storemerge1.reg2mem, !insn.addr !124
  br i1 %12, label %dec_label_pc_2967, label %dec_label_pc_2963.dec_label_pc_2982_crit_edge, !insn.addr !124

dec_label_pc_2963.dec_label_pc_2982_crit_edge:    ; preds = %dec_label_pc_2967
  store i32 %9, i32* @atomic_counter, align 4
  br label %dec_label_pc_2982

dec_label_pc_2982:                                ; preds = %dec_label_pc_295b, %dec_label_pc_2963.dec_label_pc_2982_crit_edge
  ret i8* null, !insn.addr !130

; uselistorder directives
  uselistorder i32 %9, { 1, 0 }
  uselistorder i32 %5, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i32* %.reg2mem, { 1, 0, 2 }
  uselistorder i64* %storemerge1.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2982, { 1, 0 }
  uselistorder label %dec_label_pc_2967, { 1, 0 }
}

define i8* @thread_atomic_load_store(i8* %arg) local_unnamed_addr {
dec_label_pc_2985:
  %0 = load i32, i32* @atomic_counter, align 4
  %1 = add i32 %0, 100, !insn.addr !131
  store i32 %1, i32* @atomic_counter, align 4, !insn.addr !132
  ret i8* null, !insn.addr !133
}

define i8* @thread_tls_test(i8* %arg) local_unnamed_addr {
dec_label_pc_299b:
  %0 = call i32 @__readfsdword(i64 -36), !insn.addr !134
  %1 = call i64 @__readfsqword(i64 0), !insn.addr !135
  %2 = add i32 %0, 50, !insn.addr !136
  call void @__writefsdword(i64 -36, i32 %2), !insn.addr !137
  %3 = add i64 %1, -32, !insn.addr !138
  %4 = inttoptr i64 %3 to i8*, !insn.addr !139
  %5 = call i8* @strncpy(i8* %4, i8* %arg, i32 31), !insn.addr !139
  %6 = call i64* @malloc(i32 8), !insn.addr !140
  %7 = ptrtoint i64* %6 to i64, !insn.addr !140
  %8 = bitcast i64* %6 to i32*, !insn.addr !141
  store i32 %0, i32* %8, align 4, !insn.addr !141
  %9 = add i64 %7, 4, !insn.addr !142
  %10 = inttoptr i64 %9 to i32*, !insn.addr !142
  store i32 %2, i32* %10, align 4, !insn.addr !142
  %11 = bitcast i64* %6 to i8*, !insn.addr !143
  ret i8* %11, !insn.addr !143
}

define i32 @param_strcpy(i8* %dst, i8* %src) local_unnamed_addr {
dec_label_pc_29e5:
  %0 = call i8* @strcpy(i8* %dst, i8* %src), !insn.addr !144
  %1 = call i32 @strlen(i8* %0), !insn.addr !145
  ret i32 %1, !insn.addr !146
}

define i32 @call_strcpy() local_unnamed_addr {
dec_label_pc_29f9:
  %rax.0.reg2mem = alloca i32, !insn.addr !147
  %stack_var_-48 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !148
  %1 = bitcast i64* %stack_var_-48 to i8*, !insn.addr !149
  %2 = call i32 @param_strcpy(i8* nonnull %1, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_4004, i64 0, i64 0)), !insn.addr !149
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !150
  %4 = icmp eq i64 %0, %3, !insn.addr !150
  store i32 %2, i32* %rax.0.reg2mem, !insn.addr !151
  br i1 %4, label %dec_label_pc_2a37, label %dec_label_pc_2a32, !insn.addr !151

dec_label_pc_2a32:                                ; preds = %dec_label_pc_29f9
  call void @__stack_chk_fail(), !insn.addr !152
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !152
  br label %dec_label_pc_2a37, !insn.addr !152

dec_label_pc_2a37:                                ; preds = %dec_label_pc_2a32, %dec_label_pc_29f9
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !153
}

define i32 @param_strcmp(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_2a3c:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !154
  %1 = icmp eq i32 %0, 0, !insn.addr !155
  %2 = icmp slt i32 %0, 0, !insn.addr !155
  %3 = icmp eq i1 %2, false, !insn.addr !156
  %4 = icmp eq i1 %1, false, !insn.addr !156
  %5 = icmp eq i1 %3, %4, !insn.addr !156
  %phitmp = sext i1 %4 to i32
  %spec.select = select i1 %5, i32 1, i32 %phitmp
  ret i32 %spec.select, !insn.addr !157

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
}

define i32 @call_strcmp() local_unnamed_addr {
dec_label_pc_2a5d:
  %0 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_4011, i64 0, i64 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_400d, i64 0, i64 0)), !insn.addr !158
  %1 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_4015, i64 0, i64 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_4015, i64 0, i64 0)), !insn.addr !159
  %2 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_401d, i64 0, i64 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_4019, i64 0, i64 0)), !insn.addr !160
  %3 = add i32 %1, %0, !insn.addr !161
  %4 = add i32 %3, %2, !insn.addr !162
  ret i32 %4, !insn.addr !163

; uselistorder directives
  uselistorder i32 (i8*, i8*)* @param_strcmp, { 2, 1, 0 }
}

define i64 @param_strlen() local_unnamed_addr {
dec_label_pc_2aa5:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i8*, !insn.addr !164
  %3 = call i32 @strlen(i8* %2), !insn.addr !164
  %4 = sext i32 %3 to i64, !insn.addr !164
  ret i64 %4, !insn.addr !165
}

define i64 @call_strlen() local_unnamed_addr {
dec_label_pc_2ab1:
  ret i64 12, !insn.addr !166
}

define i32 @param_memcpy(i8* %dst, i32* %src, i64 %n) local_unnamed_addr {
dec_label_pc_2abb:
  %0 = bitcast i32* %src to i8*, !insn.addr !167
  call void @__asm_rep_movsb_memcpy(i8* %dst, i8* %0, i64 %n), !insn.addr !167
  %1 = trunc i64 %n to i32, !insn.addr !168
  ret i32 %1, !insn.addr !168
}

define i32 @call_memcpy() local_unnamed_addr {
dec_label_pc_2ac8:
  %0 = alloca i32
  %rax.0.reg2mem = alloca i32, !insn.addr !169
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-36 = alloca i32, align 4
  %stack_var_-56 = alloca i64, align 8
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !170
  store i64 85899345930, i64* %stack_var_-56, align 8, !insn.addr !171
  %4 = bitcast i32* %stack_var_-36 to i8*, !insn.addr !172
  call void @__asm_rep_stosd_memset(i8* nonnull %4, i32 0, i64 5), !insn.addr !172
  %5 = bitcast i64* %stack_var_-56 to i32*, !insn.addr !173
  %6 = call i32 @param_memcpy(i8* nonnull %4, i32* nonnull %5, i64 20), !insn.addr !173
  %7 = load i32, i32* %stack_var_-36, align 4, !insn.addr !174
  %8 = add i32 %2, %1, !insn.addr !174
  %9 = add i32 %8, %7, !insn.addr !175
  %10 = call i64 @__readfsqword(i64 40), !insn.addr !176
  %11 = icmp eq i64 %3, %10, !insn.addr !176
  store i32 %9, i32* %rax.0.reg2mem, !insn.addr !177
  br i1 %11, label %dec_label_pc_2b44, label %dec_label_pc_2b3f, !insn.addr !177

dec_label_pc_2b3f:                                ; preds = %dec_label_pc_2ac8
  call void @__stack_chk_fail(), !insn.addr !178
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !178
  br label %dec_label_pc_2b44, !insn.addr !178

dec_label_pc_2b44:                                ; preds = %dec_label_pc_2b3f, %dec_label_pc_2ac8
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !179

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @param_memcmp(i32* %p1, i32* %p2, i64 %n) local_unnamed_addr {
dec_label_pc_2b49:
  %0 = bitcast i32* %p1 to i64*, !insn.addr !180
  %1 = bitcast i32* %p2 to i64*, !insn.addr !180
  %2 = trunc i64 %n to i32, !insn.addr !180
  %3 = call i32 @memcmp(i64* %0, i64* %1, i32 %2), !insn.addr !180
  %4 = icmp eq i32 %3, 0, !insn.addr !181
  %5 = icmp slt i32 %3, 0, !insn.addr !181
  %6 = icmp eq i1 %5, false, !insn.addr !182
  %7 = icmp eq i1 %4, false, !insn.addr !182
  %8 = icmp eq i1 %6, %7, !insn.addr !182
  %phitmp = sext i1 %7 to i32
  %spec.select = select i1 %8, i32 1, i32 %phitmp
  ret i32 %spec.select, !insn.addr !183

; uselistorder directives
  uselistorder i32 %3, { 1, 0 }
}

define i32 @call_memcmp() local_unnamed_addr {
dec_label_pc_2b6a:
  %rax.0.reg2mem = alloca i32, !insn.addr !184
  %stack_var_-44 = alloca i64, align 8
  %stack_var_-56 = alloca i64, align 8
  %stack_var_-68 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !185
  store i64 8589934593, i64* %stack_var_-68, align 8, !insn.addr !186
  store i64 8589934593, i64* %stack_var_-56, align 8, !insn.addr !187
  store i64 8589934593, i64* %stack_var_-44, align 8, !insn.addr !188
  %1 = bitcast i64* %stack_var_-68 to i32*, !insn.addr !189
  %2 = bitcast i64* %stack_var_-56 to i32*, !insn.addr !189
  %3 = call i32 @param_memcmp(i32* nonnull %1, i32* nonnull %2, i64 12), !insn.addr !189
  %4 = bitcast i64* %stack_var_-44 to i32*, !insn.addr !190
  %5 = call i32 @param_memcmp(i32* nonnull %1, i32* nonnull %4, i64 12), !insn.addr !190
  %6 = add i32 %5, %3, !insn.addr !191
  %7 = call i64 @__readfsqword(i64 40), !insn.addr !192
  %8 = icmp eq i64 %0, %7, !insn.addr !192
  store i32 %6, i32* %rax.0.reg2mem, !insn.addr !193
  br i1 %8, label %dec_label_pc_2bf5, label %dec_label_pc_2bf0, !insn.addr !193

dec_label_pc_2bf0:                                ; preds = %dec_label_pc_2b6a
  call void @__stack_chk_fail(), !insn.addr !194
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !194
  br label %dec_label_pc_2bf5, !insn.addr !194

dec_label_pc_2bf5:                                ; preds = %dec_label_pc_2bf0, %dec_label_pc_2b6a
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !195

; uselistorder directives
  uselistorder i32 (i32*, i32*, i64)* @param_memcmp, { 1, 0 }
  uselistorder i64 8589934593, { 2, 1, 0 }
}

define i32 @param_printf(i32 %x, i8* %name) local_unnamed_addr {
dec_label_pc_2bfc:
  %0 = zext i32 %x to i64, !insn.addr !196
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_4021, i64 0, i64 0), i64 %0, i8* %name), !insn.addr !197
  ret i32 %1, !insn.addr !197
}

define i32 @call_printf() local_unnamed_addr {
dec_label_pc_2c18:
  %0 = call i32 @param_printf(i32 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_4094, i64 0, i64 0)), !insn.addr !198
  ret i32 %0, !insn.addr !198
}

define i32 @param_scanf(i8* %input_str) local_unnamed_addr {
dec_label_pc_2c2a:
  %0 = alloca i32
  %rax.1.reg2mem = alloca i32, !insn.addr !199
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !200
  %4 = call i32 (i8*, i8*, ...) @sscanf(i8* %input_str, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_4036, i64 0, i64 0)), !insn.addr !201
  %5 = icmp eq i32 %4, 2, !insn.addr !202
  %6 = icmp eq i1 %5, false, !insn.addr !203
  %7 = add i32 %2, %1
  %spec.select = select i1 %6, i32 -1, i32 %7
  %8 = call i64 @__readfsqword(i64 40), !insn.addr !204
  %9 = icmp eq i64 %3, %8, !insn.addr !204
  store i32 %spec.select, i32* %rax.1.reg2mem, !insn.addr !205
  br i1 %9, label %dec_label_pc_2c7e, label %dec_label_pc_2c79, !insn.addr !205

dec_label_pc_2c79:                                ; preds = %dec_label_pc_2c2a
  call void @__stack_chk_fail(), !insn.addr !206
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.1.reg2mem, !insn.addr !206
  br label %dec_label_pc_2c7e, !insn.addr !206

dec_label_pc_2c7e:                                ; preds = %dec_label_pc_2c79, %dec_label_pc_2c2a
  %rax.1.reload = load i32, i32* %rax.1.reg2mem
  ret i32 %rax.1.reload, !insn.addr !207

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @call_scanf() local_unnamed_addr {
dec_label_pc_2c83:
  %0 = call i32 @param_scanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_403c, i64 0, i64 0)), !insn.addr !208
  ret i32 %0, !insn.addr !208
}

define i32 @param_fopen_fclose(i8* %filename) local_unnamed_addr {
dec_label_pc_2c90:
  %r12.0.reg2mem = alloca i32, !insn.addr !209
  %0 = call %_IO_FILE* @fopen(i8* %filename, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_4044, i64 0, i64 0)), !insn.addr !210
  %1 = icmp eq %_IO_FILE* %0, null, !insn.addr !211
  store i32 -1, i32* %r12.0.reg2mem, !insn.addr !212
  br i1 %1, label %dec_label_pc_2cc3, label %dec_label_pc_2cad, !insn.addr !212

dec_label_pc_2cad:                                ; preds = %dec_label_pc_2c90
  %2 = call i32 @fileno(%_IO_FILE* nonnull %0), !insn.addr !213
  %3 = call i32 @fclose(%_IO_FILE* nonnull %0), !insn.addr !214
  store i32 %2, i32* %r12.0.reg2mem, !insn.addr !214
  br label %dec_label_pc_2cc3, !insn.addr !214

dec_label_pc_2cc3:                                ; preds = %dec_label_pc_2cad, %dec_label_pc_2c90
  %r12.0.reload = load i32, i32* %r12.0.reg2mem
  ret i32 %r12.0.reload, !insn.addr !215
}

define i32 @call_fopen_fclose() local_unnamed_addr {
dec_label_pc_2ccb:
  %0 = call i32 @param_fopen_fclose(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_4046, i64 0, i64 0)), !insn.addr !216
  %1 = ashr i32 %0, 31, !insn.addr !217
  %2 = or i32 %1, 42, !insn.addr !218
  ret i32 %2, !insn.addr !219
}

define i32 @param_fread_fwrite(i8* %tmpfile) local_unnamed_addr {
dec_label_pc_2ce4:
  %rax.1.reg2mem = alloca i32, !insn.addr !220
  %rax.0.reg2mem = alloca i32, !insn.addr !220
  %stack_var_-80 = alloca i64, align 8
  %read_buffer_-88 = alloca [32 x i8], align 1
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !221
  %1 = call %_IO_FILE* @fopen(i8* %tmpfile, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_4052, i64 0, i64 0)), !insn.addr !222
  %2 = icmp eq %_IO_FILE* %1, null, !insn.addr !223
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !224
  br i1 %2, label %dec_label_pc_2dab, label %dec_label_pc_2d22, !insn.addr !224

dec_label_pc_2d22:                                ; preds = %dec_label_pc_2ce4
  %3 = call i32 @fwrite(i64* bitcast ([19 x i8]* @global_var_4055 to i64*), i32 1, i32 18, %_IO_FILE* nonnull %1), !insn.addr !225
  %4 = icmp eq i32 %3, 18, !insn.addr !226
  br i1 %4, label %dec_label_pc_2d53, label %dec_label_pc_2d47, !insn.addr !227

dec_label_pc_2d47:                                ; preds = %dec_label_pc_2d22
  %5 = call i32 @fclose(%_IO_FILE* nonnull %1), !insn.addr !228
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !229
  br label %dec_label_pc_2dab, !insn.addr !229

dec_label_pc_2d53:                                ; preds = %dec_label_pc_2d22
  %6 = ptrtoint [32 x i8]* %read_buffer_-88 to i64, !insn.addr !230
  call void @rewind(%_IO_FILE* nonnull %1), !insn.addr !231
  %7 = call i32 @fread(i64* nonnull %stack_var_-80, i32 1, i32 18, %_IO_FILE* nonnull %1), !insn.addr !232
  %8 = sext i32 %7 to i64, !insn.addr !232
  %9 = add i64 %6, 8, !insn.addr !233
  %10 = add i64 %9, %8, !insn.addr !233
  %11 = inttoptr i64 %10 to i8*, !insn.addr !233
  store i8 0, i8* %11, align 1, !insn.addr !233
  %12 = call i32 @fclose(%_IO_FILE* nonnull %1), !insn.addr !234
  %13 = call i32 @unlink(i8* %tmpfile), !insn.addr !235
  %14 = icmp eq i32 %7, 18, !insn.addr !236
  %15 = icmp eq i1 %14, false, !insn.addr !237
  store i32 -3, i32* %rax.0.reg2mem, !insn.addr !237
  br i1 %15, label %dec_label_pc_2dab, label %dec_label_pc_2d95, !insn.addr !237

dec_label_pc_2d95:                                ; preds = %dec_label_pc_2d53
  %16 = bitcast i64* %stack_var_-80 to i8*, !insn.addr !238
  %17 = call i32 @strcmp(i8* nonnull %16, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_4055, i64 0, i64 0)), !insn.addr !238
  %18 = icmp eq i32 %17, 0, !insn.addr !239
  %19 = select i1 %18, i32 42, i32 -3, !insn.addr !240
  store i32 %19, i32* %rax.0.reg2mem, !insn.addr !240
  br label %dec_label_pc_2dab, !insn.addr !240

dec_label_pc_2dab:                                ; preds = %dec_label_pc_2d95, %dec_label_pc_2d53, %dec_label_pc_2d47, %dec_label_pc_2ce4
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %20 = call i64 @__readfsqword(i64 40), !insn.addr !241
  %21 = icmp eq i64 %0, %20, !insn.addr !241
  store i32 %rax.0.reload, i32* %rax.1.reg2mem, !insn.addr !242
  br i1 %21, label %dec_label_pc_2dc0, label %dec_label_pc_2dbb, !insn.addr !242

dec_label_pc_2dbb:                                ; preds = %dec_label_pc_2dab
  call void @__stack_chk_fail(), !insn.addr !243
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.1.reg2mem, !insn.addr !243
  br label %dec_label_pc_2dc0, !insn.addr !243

dec_label_pc_2dc0:                                ; preds = %dec_label_pc_2dbb, %dec_label_pc_2dab
  %rax.1.reload = load i32, i32* %rax.1.reg2mem
  ret i32 %rax.1.reload, !insn.addr !244

; uselistorder directives
  uselistorder i32* %rax.0.reg2mem, { 0, 2, 3, 1, 4 }
  uselistorder i32 (i8*, i8*)* @strcmp, { 1, 0, 2 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 2, 1, 0, 3 }
  uselistorder i32 18, { 0, 2, 1, 3 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 1, 0, 2 }
}

define i32 @call_fread_fwrite() local_unnamed_addr {
dec_label_pc_2dcd:
  %0 = call i32 @param_fread_fwrite(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_4068, i64 0, i64 0)), !insn.addr !245
  ret i32 %0, !insn.addr !245
}

define i32 @param_malloc_free(i64 %size) local_unnamed_addr {
dec_label_pc_2ddd:
  %r12.0.reg2mem = alloca i32, !insn.addr !246
  %storemerge1.reg2mem = alloca i64, !insn.addr !246
  %0 = mul i64 %size, 4, !insn.addr !247
  %1 = trunc i64 %0 to i32, !insn.addr !248
  %2 = call i64* @malloc(i32 %1), !insn.addr !248
  %3 = icmp eq i64* %2, null, !insn.addr !249
  store i32 -1, i32* %r12.0.reg2mem, !insn.addr !250
  br i1 %3, label %dec_label_pc_2e23, label %dec_label_pc_2e06.preheader, !insn.addr !250

dec_label_pc_2e06.preheader:                      ; preds = %dec_label_pc_2ddd
  %4 = ptrtoint i64* %2 to i64, !insn.addr !248
  %5 = icmp eq i64 %size, 0, !insn.addr !251
  store i64 0, i64* %storemerge1.reg2mem, !insn.addr !252
  br i1 %5, label %dec_label_pc_2e16, label %dec_label_pc_2e0b, !insn.addr !252

dec_label_pc_2e0b:                                ; preds = %dec_label_pc_2e06.preheader, %dec_label_pc_2e0b
  %storemerge1.reload = load i64, i64* %storemerge1.reg2mem
  %6 = trunc i64 %storemerge1.reload to i32
  %7 = mul i32 %6, 10, !insn.addr !253
  %8 = mul i64 %storemerge1.reload, 4, !insn.addr !254
  %9 = add i64 %8, %4, !insn.addr !254
  %10 = inttoptr i64 %9 to i32*, !insn.addr !254
  store i32 %7, i32* %10, align 4, !insn.addr !254
  %11 = add nuw i64 %storemerge1.reload, 1, !insn.addr !255
  %12 = icmp eq i64 %11, %size, !insn.addr !251
  store i64 %11, i64* %storemerge1.reg2mem, !insn.addr !252
  br i1 %12, label %dec_label_pc_2e16, label %dec_label_pc_2e0b, !insn.addr !252

dec_label_pc_2e16:                                ; preds = %dec_label_pc_2e0b, %dec_label_pc_2e06.preheader
  %13 = bitcast i64* %2 to i32*, !insn.addr !256
  %14 = load i32, i32* %13, align 4, !insn.addr !256
  %15 = add i64 %0, -4, !insn.addr !257
  %16 = add i64 %15, %4, !insn.addr !257
  %17 = inttoptr i64 %16 to i32*, !insn.addr !257
  %18 = load i32, i32* %17, align 4, !insn.addr !257
  %19 = add i32 %18, %14, !insn.addr !257
  call void @free(i64* nonnull %2), !insn.addr !258
  store i32 %19, i32* %r12.0.reg2mem, !insn.addr !258
  br label %dec_label_pc_2e23, !insn.addr !258

dec_label_pc_2e23:                                ; preds = %dec_label_pc_2e16, %dec_label_pc_2ddd
  %r12.0.reload = load i32, i32* %r12.0.reg2mem
  ret i32 %r12.0.reload, !insn.addr !259

; uselistorder directives
  uselistorder i64 %storemerge1.reload, { 0, 2, 1 }
  uselistorder i64 %4, { 1, 0 }
  uselistorder i64* %2, { 0, 1, 3, 2 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64* %storemerge1.reg2mem, { 2, 0, 1 }
  uselistorder i64 %size, { 2, 1, 0 }
  uselistorder label %dec_label_pc_2e0b, { 1, 0 }
}

define i32 @call_malloc_free() local_unnamed_addr {
dec_label_pc_2e2b:
  %0 = call i32 @param_malloc_free(i64 10), !insn.addr !260
  ret i32 %0, !insn.addr !260
}

define i32 @param_memset(i8* %buffer, i64 %size) local_unnamed_addr {
dec_label_pc_2e36:
  %r8.0.lcssa.reg2mem = alloca i32, !insn.addr !261
  %rax.01.reg2mem = alloca i64, !insn.addr !261
  %r8.02.reg2mem = alloca i64, !insn.addr !261
  %0 = ptrtoint i8* %buffer to i64
  call void @__asm_rep_stosb_memset(i8* %buffer, i8 0, i64 %size), !insn.addr !262
  %1 = icmp eq i64 %size, 0, !insn.addr !263
  store i64 0, i64* %r8.02.reg2mem, !insn.addr !264
  store i64 0, i64* %rax.01.reg2mem, !insn.addr !264
  store i32 0, i32* %r8.0.lcssa.reg2mem, !insn.addr !264
  br i1 %1, label %dec_label_pc_2e5a, label %dec_label_pc_2e4e, !insn.addr !264

dec_label_pc_2e4e:                                ; preds = %dec_label_pc_2e36, %dec_label_pc_2e4e
  %rax.01.reload = load i64, i64* %rax.01.reg2mem
  %r8.02.reload = load i64, i64* %r8.02.reg2mem
  %2 = add i64 %rax.01.reload, %0, !insn.addr !265
  %3 = inttoptr i64 %2 to i8*, !insn.addr !265
  %4 = load i8, i8* %3, align 1, !insn.addr !265
  %5 = add nuw i64 %rax.01.reload, 1, !insn.addr !266
  %6 = zext i8 %4 to i64, !insn.addr !267
  %7 = add nuw nsw i64 %r8.02.reload, %6, !insn.addr !267
  %8 = and i64 %7, 4294967295, !insn.addr !267
  %9 = icmp eq i64 %5, %size, !insn.addr !263
  store i64 %8, i64* %r8.02.reg2mem, !insn.addr !264
  store i64 %5, i64* %rax.01.reg2mem, !insn.addr !264
  br i1 %9, label %dec_label_pc_2e49.dec_label_pc_2e5a_crit_edge, label %dec_label_pc_2e4e, !insn.addr !264

dec_label_pc_2e49.dec_label_pc_2e5a_crit_edge:    ; preds = %dec_label_pc_2e4e
  %phitmp = trunc i64 %7 to i32
  store i32 %phitmp, i32* %r8.0.lcssa.reg2mem
  br label %dec_label_pc_2e5a

dec_label_pc_2e5a:                                ; preds = %dec_label_pc_2e49.dec_label_pc_2e5a_crit_edge, %dec_label_pc_2e36
  %r8.0.lcssa.reload = load i32, i32* %r8.0.lcssa.reg2mem
  ret i32 %r8.0.lcssa.reload, !insn.addr !268

; uselistorder directives
  uselistorder i64* %r8.02.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.01.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r8.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i64 %size, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2e4e, { 1, 0 }
}

define i32 @call_memset() local_unnamed_addr {
dec_label_pc_2e5e:
  %0 = alloca i32
  %rax.1.reg2mem = alloca i32, !insn.addr !269
  %rax.0.reg2mem = alloca i64, !insn.addr !269
  %1 = load i32, i32* %0
  %stack_var_-56 = alloca i32, align 4
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !270
  %3 = ptrtoint i32* %stack_var_-56 to i64, !insn.addr !271
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !272
  br label %dec_label_pc_2e76, !insn.addr !272

dec_label_pc_2e76:                                ; preds = %dec_label_pc_2e76, %dec_label_pc_2e5e
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %4 = mul i64 %rax.0.reload, 4, !insn.addr !273
  %5 = add i64 %4, %3, !insn.addr !273
  %6 = inttoptr i64 %5 to i32*, !insn.addr !273
  store i32 255, i32* %6, align 4, !insn.addr !273
  %7 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !274
  %exitcond = icmp eq i64 %7, 10
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !275
  br i1 %exitcond, label %dec_label_pc_2e89, label %dec_label_pc_2e76, !insn.addr !275

dec_label_pc_2e89:                                ; preds = %dec_label_pc_2e76
  %8 = bitcast i32* %stack_var_-56 to i8*, !insn.addr !276
  %9 = call i32 @param_memset(i8* nonnull %8, i64 40), !insn.addr !276
  %10 = load i32, i32* %stack_var_-56, align 4, !insn.addr !277
  %11 = add i32 %10, %1, !insn.addr !277
  %12 = call i64 @__readfsqword(i64 40), !insn.addr !278
  %13 = icmp eq i64 %2, %12, !insn.addr !278
  store i32 %11, i32* %rax.1.reg2mem, !insn.addr !279
  br i1 %13, label %dec_label_pc_2eaf, label %dec_label_pc_2eaa, !insn.addr !279

dec_label_pc_2eaa:                                ; preds = %dec_label_pc_2e89
  call void @__stack_chk_fail(), !insn.addr !280
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.1.reg2mem, !insn.addr !280
  br label %dec_label_pc_2eaf, !insn.addr !280

dec_label_pc_2eaf:                                ; preds = %dec_label_pc_2eaa, %dec_label_pc_2e89
  %rax.1.reload = load i32, i32* %rax.1.reg2mem
  ret i32 %rax.1.reload, !insn.addr !281

; uselistorder directives
  uselistorder i32* %stack_var_-56, { 2, 0, 1 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
}

define i32 @param_strchr_strstr(i8* %str, i8 %ch, i8* %substr) local_unnamed_addr {
dec_label_pc_2eb4:
  %0 = ptrtoint i8* %str to i64
  %1 = sext i8 %ch to i32, !insn.addr !282
  %2 = call i8* @strchr(i8* %str, i32 %1), !insn.addr !282
  %3 = ptrtoint i8* %2 to i64, !insn.addr !282
  %4 = sub i64 %3, %0, !insn.addr !283
  %5 = icmp eq i8* %2, null, !insn.addr !284
  %6 = select i1 %5, i64 4294967295, i64 %4, !insn.addr !285
  %7 = call i8* @strstr(i8* %str, i8* %substr), !insn.addr !286
  %8 = ptrtoint i8* %7 to i64, !insn.addr !286
  %9 = sub i64 %8, %0, !insn.addr !287
  %10 = icmp eq i8* %7, null, !insn.addr !288
  %11 = icmp eq i1 %10, false, !insn.addr !289
  %12 = select i1 %11, i64 %9, i64 4294967295, !insn.addr !289
  %13 = add i64 %12, %6, !insn.addr !290
  %14 = trunc i64 %13 to i32, !insn.addr !290
  ret i32 %14, !insn.addr !291

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i32 @call_strchr_strstr() local_unnamed_addr {
dec_label_pc_2f04:
  %0 = call i32 @param_strchr_strstr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_4085, i64 0, i64 0), i8 66, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_407f, i64 0, i64 0)), !insn.addr !292
  ret i32 %0, !insn.addr !292
}

define void @test_standard_library_functions() local_unnamed_addr {
dec_label_pc_2f1d:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_4099 to i8*)), !insn.addr !293
  %1 = call i32 @call_strcpy(), !insn.addr !294
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_40bd to i8*)), !insn.addr !295
  %3 = call i32 @call_strcmp(), !insn.addr !296
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_40d8 to i8*)), !insn.addr !297
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_40f3 to i8*)), !insn.addr !298
  %6 = call i32 @call_memcpy(), !insn.addr !299
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_410f to i8*)), !insn.addr !300
  %8 = call i32 @call_memcmp(), !insn.addr !301
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_412b to i8*)), !insn.addr !302
  %10 = call i32 @call_printf(), !insn.addr !303
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_4147 to i8*)), !insn.addr !304
  %12 = call i32 @call_scanf(), !insn.addr !305
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_4163 to i8*)), !insn.addr !306
  %14 = call i32 @call_fopen_fclose(), !insn.addr !307
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_4180 to i8*)), !insn.addr !308
  %16 = call i32 @call_fread_fwrite(), !insn.addr !309
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_419c to i8*)), !insn.addr !310
  %18 = call i32 @call_malloc_free(), !insn.addr !311
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_41b8 to i8*)), !insn.addr !312
  %20 = call i32 @call_memset(), !insn.addr !313
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_41d4 to i8*)), !insn.addr !314
  %22 = call i32 @call_strchr_strstr(), !insn.addr !315
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_41ef to i8*)), !insn.addr !316
  ret void, !insn.addr !316
}

define i64 @param_linux_syscall(i8* %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_307b:
  %r12.0.in.reg2mem = alloca i32, !insn.addr !317
  %0 = call i32 (i32, ...) @syscall(i32 2), !insn.addr !318
  %1 = icmp slt i32 %0, 0, !insn.addr !319
  %2 = icmp eq i1 %1, false, !insn.addr !320
  br i1 %2, label %dec_label_pc_30a3, label %dec_label_pc_3096, !insn.addr !320

dec_label_pc_3096:                                ; preds = %dec_label_pc_307b
  %3 = call i32* @__errno_location(), !insn.addr !321
  %4 = load i32, i32* %3, align 4, !insn.addr !322
  %5 = sub i32 0, %4, !insn.addr !323
  store i32 %5, i32* %r12.0.in.reg2mem, !insn.addr !324
  br label %dec_label_pc_30b4, !insn.addr !324

dec_label_pc_30a3:                                ; preds = %dec_label_pc_307b
  %6 = call i32 (i32, ...) @syscall(i32 3), !insn.addr !325
  store i32 %0, i32* %r12.0.in.reg2mem, !insn.addr !325
  br label %dec_label_pc_30b4, !insn.addr !325

dec_label_pc_30b4:                                ; preds = %dec_label_pc_30a3, %dec_label_pc_3096
  %r12.0.in.reload = load i32, i32* %r12.0.in.reg2mem
  %r12.0 = zext i32 %r12.0.in.reload to i64
  ret i64 %r12.0, !insn.addr !326

; uselistorder directives
  uselistorder i32* %r12.0.in.reg2mem, { 0, 2, 1 }
  uselistorder i32 (i32, ...)* @syscall, { 1, 0, 2 }
}

define i32 @call_linux_syscall() local_unnamed_addr {
dec_label_pc_30ba:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = call i64 @param_linux_syscall(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_4046, i64 0, i64 0), i64 %1, i64 %2), !insn.addr !327
  %4 = trunc i64 %3 to i32, !insn.addr !328
  %5 = ashr i32 %4, 31, !insn.addr !328
  %6 = or i32 %5, 42, !insn.addr !329
  ret i32 %6, !insn.addr !330

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i32 @param_win32_api(i8* %filename) local_unnamed_addr {
dec_label_pc_30d3:
  %0 = alloca i64
  %rax.1.reg2mem = alloca i32, !insn.addr !331
  %1 = load i64, i64* %0
  %stack_var_-160 = alloca i64, align 8
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !332
  %3 = bitcast i64* %stack_var_-160 to %stat*, !insn.addr !333
  %4 = call i32 @stat(i8* %filename, %stat* nonnull %3), !insn.addr !333
  %5 = icmp slt i32 %4, 0, !insn.addr !334
  %6 = icmp slt i64 %1, 1
  %7 = select i1 %6, i32 -2, i32 42
  %rax.0 = select i1 %5, i32 -1, i32 %7
  %8 = call i64 @__readfsqword(i64 40), !insn.addr !335
  %9 = icmp eq i64 %2, %8, !insn.addr !335
  store i32 %rax.0, i32* %rax.1.reg2mem, !insn.addr !336
  br i1 %9, label %dec_label_pc_3131, label %dec_label_pc_312c, !insn.addr !336

dec_label_pc_312c:                                ; preds = %dec_label_pc_30d3
  call void @__stack_chk_fail(), !insn.addr !337
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.1.reg2mem, !insn.addr !337
  br label %dec_label_pc_3131, !insn.addr !337

dec_label_pc_3131:                                ; preds = %dec_label_pc_312c, %dec_label_pc_30d3
  %rax.1.reload = load i32, i32* %rax.1.reg2mem
  ret i32 %rax.1.reload, !insn.addr !338
}

define i32 @call_win32_api() local_unnamed_addr {
dec_label_pc_3139:
  %0 = call i32 @param_win32_api(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_4046, i64 0, i64 0)), !insn.addr !339
  ret i32 %0, !insn.addr !339
}

define i64 @param_fork_exec(i8* %arg1, i32 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_3146:
  %rax.1.reg2mem = alloca i64, !insn.addr !340
  %rax.0.reg2mem = alloca i64, !insn.addr !340
  %stack_var_-36 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !341
  %1 = call i32 @fork(), !insn.addr !342
  %2 = icmp slt i32 %1, 0, !insn.addr !343
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !344
  br i1 %2, label %dec_label_pc_31bf, label %dec_label_pc_3170, !insn.addr !344

dec_label_pc_3170:                                ; preds = %dec_label_pc_3146
  %3 = icmp eq i32 %1, 0, !insn.addr !343
  %4 = icmp eq i1 %3, false, !insn.addr !345
  br i1 %4, label %dec_label_pc_318e, label %dec_label_pc_3172, !insn.addr !345

dec_label_pc_3172:                                ; preds = %dec_label_pc_3170
  %5 = call i32 (i8*, i8*, ...) @execl(i8* %arg1, i8* %arg1), !insn.addr !346
  call void @_exit(i32 127), !insn.addr !347
  unreachable, !insn.addr !347

dec_label_pc_318e:                                ; preds = %dec_label_pc_3170
  %6 = call i32 @waitpid(i32 %1, i32* nonnull %stack_var_-36, i32 0), !insn.addr !348
  %7 = icmp slt i32 %6, 0, !insn.addr !349
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !350
  br i1 %7, label %dec_label_pc_31bf, label %dec_label_pc_31a9, !insn.addr !350

dec_label_pc_31a9:                                ; preds = %dec_label_pc_318e
  %8 = load i32, i32* %stack_var_-36, align 4, !insn.addr !351
  %9 = urem i32 %8, 128
  %10 = icmp eq i32 %9, 0, !insn.addr !352
  %11 = icmp eq i1 %10, false, !insn.addr !353
  store i64 4294967293, i64* %rax.0.reg2mem, !insn.addr !353
  br i1 %11, label %dec_label_pc_31bf, label %dec_label_pc_31b7, !insn.addr !353

dec_label_pc_31b7:                                ; preds = %dec_label_pc_31a9
  %12 = udiv i32 %8, 256
  %13 = urem i32 %12, 256
  %14 = zext i32 %13 to i64, !insn.addr !354
  store i64 %14, i64* %rax.0.reg2mem, !insn.addr !355
  br label %dec_label_pc_31bf, !insn.addr !355

dec_label_pc_31bf:                                ; preds = %dec_label_pc_3146, %dec_label_pc_31b7, %dec_label_pc_31a9, %dec_label_pc_318e
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %15 = call i64 @__readfsqword(i64 40), !insn.addr !356
  %16 = icmp eq i64 %0, %15, !insn.addr !356
  store i64 %rax.0.reload, i64* %rax.1.reg2mem, !insn.addr !357
  br i1 %16, label %dec_label_pc_31d4, label %dec_label_pc_31cf, !insn.addr !357

dec_label_pc_31cf:                                ; preds = %dec_label_pc_31bf
  call void @__stack_chk_fail(), !insn.addr !358
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.1.reg2mem, !insn.addr !358
  br label %dec_label_pc_31d4, !insn.addr !358

dec_label_pc_31d4:                                ; preds = %dec_label_pc_31cf, %dec_label_pc_31bf
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !359

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 3, 4, 1 }
  uselistorder i32 256, { 1, 0 }
  uselistorder label %dec_label_pc_31bf, { 1, 2, 3, 0 }
}

define i32 @call_fork_exec() local_unnamed_addr {
dec_label_pc_31dc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = call i64 @param_fork_exec(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_420b, i64 0, i64 0), i32 0, i64 %1, i64 %2), !insn.addr !360
  %4 = trunc i64 %3 to i32, !insn.addr !361
  %5 = icmp eq i32 %4, 0, !insn.addr !361
  %6 = select i1 %5, i32 42, i32 -1, !insn.addr !362
  ret i32 %6, !insn.addr !363

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i32 @param_pipe_communication() local_unnamed_addr {
dec_label_pc_31fb:
  %0 = alloca i32
  %rax.1.reg2mem = alloca i32, !insn.addr !364
  %rax.0.reg2mem = alloca i32, !insn.addr !364
  %stack_var_-48 = alloca i64, align 8
  %1 = load i32, i32* %0
  %buffer_-56 = alloca [32 x i8], align 4
  %2 = ptrtoint [32 x i8]* %buffer_-56 to i64, !insn.addr !365
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !366
  %4 = trunc i64 %2 to i32, !insn.addr !367
  %5 = insertvalue [2 x i32] undef, i32 %4, 0, !insn.addr !367
  %6 = call i32 @pipe([2 x i32] %5), !insn.addr !367
  %7 = icmp slt i32 %6, 0, !insn.addr !368
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !369
  br i1 %7, label %dec_label_pc_32a6, label %dec_label_pc_3220, !insn.addr !369

dec_label_pc_3220:                                ; preds = %dec_label_pc_31fb
  %8 = call i32 @fork(), !insn.addr !370
  %9 = icmp slt i32 %8, 0, !insn.addr !371
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !372
  br i1 %9, label %dec_label_pc_32a6, label %dec_label_pc_3229, !insn.addr !372

dec_label_pc_3229:                                ; preds = %dec_label_pc_3220
  %10 = icmp eq i32 %8, 0, !insn.addr !371
  %11 = icmp eq i1 %10, false, !insn.addr !373
  br i1 %11, label %dec_label_pc_3258, label %dec_label_pc_322b, !insn.addr !373

dec_label_pc_322b:                                ; preds = %dec_label_pc_3229
  %12 = bitcast [32 x i8]* %buffer_-56 to i32*, !insn.addr !374
  %13 = load i32, i32* %12, align 4, !insn.addr !374
  %14 = call i32 @close(i32 %13), !insn.addr !375
  %15 = call i32 @write(i32 %1, i64* bitcast ([10 x i8]* @global_var_4215 to i64*), i32 9), !insn.addr !376
  %16 = call i32 @close(i32 %1), !insn.addr !377
  call void @_exit(i32 0), !insn.addr !378
  unreachable, !insn.addr !378

dec_label_pc_3258:                                ; preds = %dec_label_pc_3229
  %17 = call i32 @close(i32 %1), !insn.addr !379
  %18 = bitcast [32 x i8]* %buffer_-56 to i32*, !insn.addr !380
  %19 = load i32, i32* %18, align 4, !insn.addr !380
  %20 = call i32 @read(i32 %19, i64* nonnull %stack_var_-48, i32 31), !insn.addr !381
  %21 = sext i32 %20 to i64, !insn.addr !381
  %22 = load i32, i32* %18, align 4, !insn.addr !382
  %23 = add i64 %2, 8, !insn.addr !383
  %24 = add i64 %23, %21, !insn.addr !383
  %25 = inttoptr i64 %24 to i8*, !insn.addr !383
  store i8 0, i8* %25, align 1, !insn.addr !383
  %26 = call i32 @close(i32 %22), !insn.addr !384
  %27 = call i32 @wait(i64 0), !insn.addr !385
  %28 = icmp slt i32 %20, 1
  %29 = select i1 %28, i32 -3, i32 42, !insn.addr !386
  store i32 %29, i32* %rax.0.reg2mem, !insn.addr !387
  br label %dec_label_pc_32a6, !insn.addr !387

dec_label_pc_32a6:                                ; preds = %dec_label_pc_3220, %dec_label_pc_31fb, %dec_label_pc_3258
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %30 = call i64 @__readfsqword(i64 40), !insn.addr !388
  %31 = icmp eq i64 %3, %30, !insn.addr !388
  store i32 %rax.0.reload, i32* %rax.1.reg2mem, !insn.addr !389
  br i1 %31, label %dec_label_pc_32bb, label %dec_label_pc_32b6, !insn.addr !389

dec_label_pc_32b6:                                ; preds = %dec_label_pc_32a6
  call void @__stack_chk_fail(), !insn.addr !390
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.1.reg2mem, !insn.addr !390
  br label %dec_label_pc_32bb, !insn.addr !390

dec_label_pc_32bb:                                ; preds = %dec_label_pc_32b6, %dec_label_pc_32a6
  %rax.1.reload = load i32, i32* %rax.1.reg2mem
  ret i32 %rax.1.reload, !insn.addr !391

; uselistorder directives
  uselistorder i32* %rax.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder i8 0, { 3, 0, 4, 2, 1 }
  uselistorder i32 31, { 0, 2, 3, 1 }
  uselistorder void (i32)* @_exit, { 1, 0, 2 }
  uselistorder i32 ()* @fork, { 1, 0, 2 }
  uselistorder label %dec_label_pc_32a6, { 2, 0, 1 }
}

define i64 @call_pipe_communication() local_unnamed_addr {
dec_label_pc_32c1:
  %0 = call i32 @param_pipe_communication(), !insn.addr !392
  %1 = sext i32 %0 to i64, !insn.addr !392
  ret i64 %1, !insn.addr !392
}

define i32 @param_socket_create() local_unnamed_addr {
dec_label_pc_32ca:
  %0 = alloca i128
  %rax.1.reg2mem = alloca i32, !insn.addr !393
  %rax.0.reg2mem = alloca i32, !insn.addr !393
  %1 = load i128, i128* %0
  %stack_var_-32 = alloca i128, align 8
  %2 = load i128, i128* %0
  %stack_var_-36 = alloca i64, align 8
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !394
  %4 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !395
  %5 = icmp slt i32 %4, 0, !insn.addr !396
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !397
  br i1 %5, label %dec_label_pc_339c, label %dec_label_pc_3300, !insn.addr !397

dec_label_pc_3300:                                ; preds = %dec_label_pc_32ca
  store i64 1, i64* %stack_var_-36, align 8, !insn.addr !398
  %6 = call i32 @setsockopt(i32 %4, i32 1, i32 2, i64* nonnull %stack_var_-36, i32 4), !insn.addr !399
  %7 = icmp slt i32 %6, 0, !insn.addr !400
  %8 = icmp eq i1 %7, false, !insn.addr !401
  br i1 %8, label %dec_label_pc_333a, label %dec_label_pc_332e, !insn.addr !401

dec_label_pc_332e:                                ; preds = %dec_label_pc_3300
  %9 = call i32 @close(i32 %4), !insn.addr !402
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !403
  br label %dec_label_pc_339c, !insn.addr !403

dec_label_pc_333a:                                ; preds = %dec_label_pc_3300
  %10 = call i128 @__asm_xorps(i128 %1, i128 %1), !insn.addr !404
  %11 = mul i128 %2, 18446744073709551615
  %12 = ashr exact i128 %11, 64, !insn.addr !405
  call void @__asm_movups(i128 %12, i128 %10), !insn.addr !405
  store i128 2, i128* %stack_var_-32, align 8, !insn.addr !406
  %13 = bitcast i128* %stack_var_-32 to %sockaddr*, !insn.addr !407
  %14 = call i32 @bind(i32 %4, %sockaddr* nonnull %13, i32 16), !insn.addr !407
  %15 = icmp slt i32 %14, 0, !insn.addr !408
  %16 = icmp eq i1 %15, false, !insn.addr !409
  br i1 %16, label %dec_label_pc_3370, label %dec_label_pc_3364, !insn.addr !409

dec_label_pc_3364:                                ; preds = %dec_label_pc_333a
  %17 = call i32 @close(i32 %4), !insn.addr !410
  store i32 -3, i32* %rax.0.reg2mem, !insn.addr !411
  br label %dec_label_pc_339c, !insn.addr !411

dec_label_pc_3370:                                ; preds = %dec_label_pc_333a
  %18 = call i32 @listen(i32 %4, i32 5), !insn.addr !412
  %19 = icmp slt i32 %18, 0, !insn.addr !413
  %20 = icmp eq i1 %19, false, !insn.addr !414
  %21 = call i32 @close(i32 %4)
  %. = select i1 %20, i32 42, i32 -4
  store i32 %., i32* %rax.0.reg2mem, !insn.addr !415
  br label %dec_label_pc_339c, !insn.addr !415

dec_label_pc_339c:                                ; preds = %dec_label_pc_3370, %dec_label_pc_3364, %dec_label_pc_332e, %dec_label_pc_32ca
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %22 = call i64 @__readfsqword(i64 40), !insn.addr !416
  %23 = icmp eq i64 %3, %22, !insn.addr !416
  store i32 %rax.0.reload, i32* %rax.1.reg2mem, !insn.addr !417
  br i1 %23, label %dec_label_pc_33b1, label %dec_label_pc_33ac, !insn.addr !417

dec_label_pc_33ac:                                ; preds = %dec_label_pc_339c
  call void @__stack_chk_fail(), !insn.addr !418
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.1.reg2mem, !insn.addr !418
  br label %dec_label_pc_33b1, !insn.addr !418

dec_label_pc_33b1:                                ; preds = %dec_label_pc_33ac, %dec_label_pc_339c
  %rax.1.reload = load i32, i32* %rax.1.reg2mem
  ret i32 %rax.1.reload, !insn.addr !419

; uselistorder directives
  uselistorder i32 %4, { 0, 2, 1, 3, 4, 5, 6 }
  uselistorder i128* %stack_var_-32, { 1, 0 }
  uselistorder i32* %rax.0.reg2mem, { 0, 1, 3, 2, 4 }
  uselistorder i128* %0, { 1, 0 }
}

define i64 @call_socket_create() local_unnamed_addr {
dec_label_pc_33b6:
  %0 = call i32 @param_socket_create(), !insn.addr !420
  %1 = sext i32 %0 to i64, !insn.addr !420
  ret i64 %1, !insn.addr !420
}

define i32 @param_shmget_shmat() local_unnamed_addr {
dec_label_pc_33bf:
  %r12.0.reg2mem = alloca i32, !insn.addr !421
  %0 = call i32 (i8*, i32, ...) @open(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_421f, i64 0, i64 0), i32 66), !insn.addr !422
  %1 = icmp slt i32 %0, 0, !insn.addr !423
  %2 = icmp eq i1 %1, false, !insn.addr !424
  store i32 -1, i32* %r12.0.reg2mem, !insn.addr !424
  br i1 %2, label %dec_label_pc_33ed, label %dec_label_pc_346b, !insn.addr !424

dec_label_pc_33ed:                                ; preds = %dec_label_pc_33bf
  %3 = call i32 @close(i32 %0), !insn.addr !425
  %4 = call i32 @ftok(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_421f, i64 0, i64 0), i32 42), !insn.addr !426
  %5 = icmp slt i32 %4, 0, !insn.addr !427
  store i32 -1, i32* %r12.0.reg2mem, !insn.addr !428
  br i1 %5, label %dec_label_pc_346b, label %dec_label_pc_3407, !insn.addr !428

dec_label_pc_3407:                                ; preds = %dec_label_pc_33ed
  %6 = call i32 @shmget(i32 %4, i32 ptrtoint (i32* @global_var_1000 to i32), i32 ptrtoint (i32* @global_var_3b6 to i32)), !insn.addr !429
  %7 = icmp slt i32 %6, 0, !insn.addr !430
  store i32 -2, i32* %r12.0.reg2mem, !insn.addr !431
  br i1 %7, label %dec_label_pc_346b, label %dec_label_pc_3423, !insn.addr !431

dec_label_pc_3423:                                ; preds = %dec_label_pc_3407
  %8 = call i64* @shmat(i32 %6, i64* null, i32 0), !insn.addr !432
  %9 = icmp eq i64* %8, inttoptr (i64 -1 to i64*), !insn.addr !433
  store i32 -3, i32* %r12.0.reg2mem, !insn.addr !434
  br i1 %9, label %dec_label_pc_346b, label %dec_label_pc_343d, !insn.addr !434

dec_label_pc_343d:                                ; preds = %dec_label_pc_3423
  %10 = bitcast i64* %8 to i8*, !insn.addr !435
  %11 = call i8* @strcpy(i8* %10, i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_4231, i64 0, i64 0)), !insn.addr !435
  %12 = call i32 @strlen(i8* %10), !insn.addr !436
  %13 = call i32 @shmdt(i64* %8), !insn.addr !437
  %14 = call i32 @shmctl(i32 %6, i32 xor (i32 ptrtoint ([13 x i8]* @global_var_4231 to i32), i32 ptrtoint ([13 x i8]* @global_var_4231 to i32)), %shmid_ds* null), !insn.addr !438
  store i32 %12, i32* %r12.0.reg2mem, !insn.addr !438
  br label %dec_label_pc_346b, !insn.addr !438

dec_label_pc_346b:                                ; preds = %dec_label_pc_33bf, %dec_label_pc_33ed, %dec_label_pc_343d, %dec_label_pc_3423, %dec_label_pc_3407
  %r12.0.reload = load i32, i32* %r12.0.reg2mem
  ret i32 %r12.0.reload, !insn.addr !439

; uselistorder directives
  uselistorder i32* %r12.0.reg2mem, { 0, 3, 4, 5, 2, 1 }
  uselistorder i32 (i8*)* @strlen, { 1, 2, 0, 3 }
  uselistorder i8* (i8*, i8*)* @strcpy, { 1, 0, 2 }
  uselistorder i32 (i32)* @close, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder label %dec_label_pc_346b, { 2, 3, 4, 1, 0 }
}

define i32 @call_shmget_shmat() local_unnamed_addr {
dec_label_pc_3474:
  %0 = call i32 @param_shmget_shmat(), !insn.addr !440
  %1 = icmp slt i32 %0, 1
  %2 = select i1 %1, i32 -1, i32 42, !insn.addr !441
  ret i32 %2, !insn.addr !442
}

define i64 @param_signal_handling(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_348f:
  %rax.0.reg2mem = alloca i64, !insn.addr !443
  %.reg2mem24 = alloca i32, !insn.addr !443
  %.reg2mem22 = alloca i32, !insn.addr !443
  %.reg2mem20 = alloca i32, !insn.addr !443
  %.reg2mem = alloca i32, !insn.addr !443
  %0 = call void (i32)* @signal(i32 10, void (i32)* inttoptr (i64 10281 to void (i32)*)), !insn.addr !444
  %1 = icmp eq void (i32)* %0, inttoptr (i64 -1 to void (i32)*), !insn.addr !445
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !446
  br i1 %1, label %dec_label_pc_3593, label %dec_label_pc_34b9, !insn.addr !446

dec_label_pc_34b9:                                ; preds = %dec_label_pc_348f
  %2 = call void (i32)* @signal(i32 14, void (i32)* inttoptr (i64 10281 to void (i32)*)), !insn.addr !447
  %3 = icmp eq void (i32)* %2, inttoptr (i64 -1 to void (i32)*), !insn.addr !448
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !449
  br i1 %3, label %dec_label_pc_3593, label %dec_label_pc_34d7, !insn.addr !449

dec_label_pc_34d7:                                ; preds = %dec_label_pc_34b9
  store i32 0, i32* @signal_received, align 4, !insn.addr !450
  %4 = call i32 @raise(i32 10), !insn.addr !451
  %5 = load i32, i32* @signal_received, align 4
  %6 = icmp eq i32 %5, 0, !insn.addr !452
  %7 = icmp eq i1 %6, false, !insn.addr !453
  %brmerge = or i1 %7, icmp eq (i32 add (i32 ptrtoint (i32* @global_var_3e9 to i32), i32 -1), i32 0)
  store i32 add (i32 ptrtoint (i32* @global_var_3e9 to i32), i32 -1), i32* %.reg2mem, !insn.addr !453
  store i32 %5, i32* %.reg2mem20, !insn.addr !453
  br i1 %brmerge, label %dec_label_pc_350a, label %dec_label_pc_34fe, !insn.addr !453

dec_label_pc_34fa:                                ; preds = %dec_label_pc_34fe
  %.reload = load i32, i32* %.reg2mem
  %8 = add i32 %.reload, -1, !insn.addr !454
  %9 = icmp eq i32 %8, 0, !insn.addr !454
  store i32 %8, i32* %.reg2mem, !insn.addr !455
  store i32 %11, i32* %.reg2mem20, !insn.addr !455
  br i1 %9, label %dec_label_pc_350a, label %dec_label_pc_34fe, !insn.addr !455

dec_label_pc_34fe:                                ; preds = %dec_label_pc_34d7, %dec_label_pc_34fa
  %10 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !456
  %11 = load i32, i32* @signal_received, align 4
  %12 = icmp eq i32 %11, 0, !insn.addr !452
  %13 = icmp eq i1 %12, false, !insn.addr !453
  store i32 %11, i32* %.reg2mem20, !insn.addr !453
  br i1 %13, label %dec_label_pc_350a, label %dec_label_pc_34fa, !insn.addr !453

dec_label_pc_350a:                                ; preds = %dec_label_pc_34d7, %dec_label_pc_34fa, %dec_label_pc_34fe
  %.reload21 = load i32, i32* %.reg2mem20, !insn.addr !457
  %14 = icmp eq i32 %.reload21, 0, !insn.addr !458
  store i64 4294967293, i64* %rax.0.reg2mem, !insn.addr !459
  br i1 %14, label %dec_label_pc_3593, label %dec_label_pc_3519, !insn.addr !459

dec_label_pc_3519:                                ; preds = %dec_label_pc_350a
  %15 = load i32, i32* @signal_number, align 4, !insn.addr !460
  %16 = icmp eq i32 %15, 10, !insn.addr !461
  %17 = icmp eq i1 %16, false, !insn.addr !462
  store i64 4294967292, i64* %rax.0.reg2mem, !insn.addr !462
  br i1 %17, label %dec_label_pc_3593, label %dec_label_pc_3529, !insn.addr !462

dec_label_pc_3529:                                ; preds = %dec_label_pc_3519
  store i32 0, i32* @signal_received, align 4, !insn.addr !463
  %18 = call i32 @alarm(i32 1), !insn.addr !464
  %19 = load i32, i32* @signal_received, align 4
  %20 = icmp eq i32 %19, 0, !insn.addr !465
  %21 = icmp eq i1 %20, false, !insn.addr !466
  %brmerge19 = or i1 %21, icmp eq (i32 add (i32 ptrtoint (i32* @global_var_7d1 to i32), i32 -1), i32 0)
  store i32 add (i32 ptrtoint (i32* @global_var_7d1 to i32), i32 -1), i32* %.reg2mem22, !insn.addr !466
  store i32 %19, i32* %.reg2mem24, !insn.addr !466
  br i1 %brmerge19, label %dec_label_pc_355c, label %dec_label_pc_3550, !insn.addr !466

dec_label_pc_354c:                                ; preds = %dec_label_pc_3550
  %.reload23 = load i32, i32* %.reg2mem22
  %22 = add i32 %.reload23, -1, !insn.addr !467
  %23 = icmp eq i32 %22, 0, !insn.addr !467
  store i32 %22, i32* %.reg2mem22, !insn.addr !468
  store i32 %25, i32* %.reg2mem24, !insn.addr !468
  br i1 %23, label %dec_label_pc_355c, label %dec_label_pc_3550, !insn.addr !468

dec_label_pc_3550:                                ; preds = %dec_label_pc_3529, %dec_label_pc_354c
  %24 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !469
  %25 = load i32, i32* @signal_received, align 4
  %26 = icmp eq i32 %25, 0, !insn.addr !465
  %27 = icmp eq i1 %26, false, !insn.addr !466
  store i32 %25, i32* %.reg2mem24, !insn.addr !466
  br i1 %27, label %dec_label_pc_355c, label %dec_label_pc_354c, !insn.addr !466

dec_label_pc_355c:                                ; preds = %dec_label_pc_3529, %dec_label_pc_354c, %dec_label_pc_3550
  %.reload25 = load i32, i32* %.reg2mem24, !insn.addr !470
  %28 = icmp eq i32 %.reload25, 0, !insn.addr !471
  store i64 4294967291, i64* %rax.0.reg2mem, !insn.addr !472
  br i1 %28, label %dec_label_pc_3593, label %dec_label_pc_356b, !insn.addr !472

dec_label_pc_356b:                                ; preds = %dec_label_pc_355c
  %29 = load i32, i32* @signal_number, align 4, !insn.addr !473
  %30 = icmp eq i32 %29, 14, !insn.addr !474
  %31 = icmp eq i1 %30, false, !insn.addr !475
  store i64 4294967291, i64* %rax.0.reg2mem, !insn.addr !475
  br i1 %31, label %dec_label_pc_3593, label %dec_label_pc_3576, !insn.addr !475

dec_label_pc_3576:                                ; preds = %dec_label_pc_356b
  %32 = call void (i32)* @signal(i32 10, void (i32)* null), !insn.addr !476
  %33 = call void (i32)* @signal(i32 14, void (i32)* null), !insn.addr !477
  store i64 42, i64* %rax.0.reg2mem, !insn.addr !478
  br label %dec_label_pc_3593, !insn.addr !478

dec_label_pc_3593:                                ; preds = %dec_label_pc_3576, %dec_label_pc_356b, %dec_label_pc_355c, %dec_label_pc_3519, %dec_label_pc_350a, %dec_label_pc_34b9, %dec_label_pc_348f
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !479

; uselistorder directives
  uselistorder i32 %25, { 0, 2, 1 }
  uselistorder i32 %11, { 0, 2, 1 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %.reg2mem22, { 2, 0, 1 }
  uselistorder i32 (i32)* @usleep, { 1, 0, 2, 3 }
  uselistorder i32* @signal_received, { 2, 1, 3, 4, 0, 5, 6 }
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
  %5 = call i64 @param_signal_handling(i64 %1, i64 %2, i64 %3, i64 %4), !insn.addr !480
  ret i64 %5, !insn.addr !480

; uselistorder directives
  uselistorder i64* %0, { 3, 2, 1, 0 }
}

define void @test_system_calls() local_unnamed_addr {
dec_label_pc_35a0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i32 @puts(i8* bitcast (i8** @global_var_423e to i8*)), !insn.addr !481
  %3 = call i32 @call_linux_syscall(), !insn.addr !482
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_4259 to i8*)), !insn.addr !483
  %5 = call i32 @call_win32_api(), !insn.addr !484
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_4275 to i8*)), !insn.addr !485
  %7 = call i32 @call_fork_exec(), !insn.addr !486
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_4291 to i8*)), !insn.addr !487
  %9 = call i32 @param_pipe_communication(), !insn.addr !488
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_42ad to i8*)), !insn.addr !489
  %11 = call i32 @param_socket_create(), !insn.addr !490
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_42c9 to i8*)), !insn.addr !491
  %13 = call i32 @call_shmget_shmat(), !insn.addr !492
  %14 = zext i32 %13 to i64, !insn.addr !493
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_42e5 to i8*)), !insn.addr !494
  %16 = call i64 @param_signal_handling(i64 1, i64 ptrtoint (i8** @global_var_42e5 to i64), i64 %14, i64 %1), !insn.addr !495
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_4301 to i8*)), !insn.addr !496
  ret void, !insn.addr !496

; uselistorder directives
  uselistorder i8** @global_var_42e5, { 1, 0 }
}

define i32 @param_pthread_create(i32 %x) local_unnamed_addr {
dec_label_pc_3670:
  %r12.0.reg2mem = alloca i32, !insn.addr !497
  %stack_var_-24 = alloca i64, align 8
  %thread_ret_-32 = alloca i8*, align 8
  %stack_var_-36 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !498
  store i32 %x, i32* %stack_var_-36, align 4, !insn.addr !499
  %1 = bitcast i8** %thread_ret_-32 to i32*, !insn.addr !500
  %2 = bitcast i32* %stack_var_-36 to i64*, !insn.addr !500
  %3 = call i32 @pthread_create(i32* nonnull %1, i64* null, i64* (i64*)* inttoptr (i64 10332 to i64* (i64*)*), i64* nonnull %2), !insn.addr !500
  %4 = icmp eq i32 %3, 0, !insn.addr !501
  %5 = icmp eq i1 %4, false, !insn.addr !502
  store i32 -1, i32* %r12.0.reg2mem, !insn.addr !502
  br i1 %5, label %dec_label_pc_36ca, label %dec_label_pc_36ae, !insn.addr !502

dec_label_pc_36ae:                                ; preds = %dec_label_pc_3670
  %6 = load i8*, i8** %thread_ret_-32, align 8, !insn.addr !503
  %7 = ptrtoint i8* %6 to i64, !insn.addr !503
  %8 = trunc i64 %7 to i32, !insn.addr !504
  %9 = bitcast i64* %stack_var_-24 to i64**, !insn.addr !504
  %10 = call i32 @pthread_join(i32 %8, i64** nonnull %9), !insn.addr !504
  %11 = load i64, i64* %stack_var_-24, align 8, !insn.addr !505
  %12 = inttoptr i64 %11 to i32*, !insn.addr !506
  %13 = load i32, i32* %12, align 4, !insn.addr !506
  %14 = inttoptr i64 %11 to i64*, !insn.addr !507
  call void @free(i64* %14), !insn.addr !507
  store i32 %13, i32* %r12.0.reg2mem, !insn.addr !507
  br label %dec_label_pc_36ca, !insn.addr !507

dec_label_pc_36ca:                                ; preds = %dec_label_pc_36ae, %dec_label_pc_3670
  %r12.0.reload = load i32, i32* %r12.0.reg2mem
  %15 = call i64 @__readfsqword(i64 40), !insn.addr !508
  %16 = icmp eq i64 %0, %15, !insn.addr !508
  br i1 %16, label %dec_label_pc_36df, label %dec_label_pc_36da, !insn.addr !509

dec_label_pc_36da:                                ; preds = %dec_label_pc_36ca
  call void @__stack_chk_fail(), !insn.addr !510
  br label %dec_label_pc_36df, !insn.addr !510

dec_label_pc_36df:                                ; preds = %dec_label_pc_36da, %dec_label_pc_36ca
  ret i32 %r12.0.reload, !insn.addr !511

; uselistorder directives
  uselistorder i64 %11, { 1, 0 }
  uselistorder i32* %stack_var_-36, { 1, 0 }
  uselistorder i8** %thread_ret_-32, { 1, 0 }
  uselistorder i64* %stack_var_-24, { 1, 0 }
}

define i32 @call_pthread_create() local_unnamed_addr {
dec_label_pc_36e9:
  %0 = call i32 @param_pthread_create(i32 7), !insn.addr !512
  ret i32 %0, !insn.addr !512
}

define i32 @param_pthread_join() local_unnamed_addr {
dec_label_pc_36f7:
  %r12.1.reg2mem = alloca i32, !insn.addr !513
  %r12.0.reg2mem = alloca i32, !insn.addr !513
  %rbx.1.reg2mem = alloca i64, !insn.addr !513
  %rbp.0.reg2mem = alloca i64, !insn.addr !513
  %rbx.0.reg2mem = alloca i64, !insn.addr !513
  %stack_var_-92 = alloca i64, align 8
  %stack_var_-104 = alloca i64, align 8
  %stack_var_-128 = alloca i64, align 8
  %stack_var_-100 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !514
  %1 = ptrtoint i64* %stack_var_-128 to i64, !insn.addr !515
  %2 = bitcast i64* %stack_var_-100 to i8*, !insn.addr !516
  call void @__asm_rep_movsd_memcpy(i8* nonnull %2, i8* bitcast (i8** @global_var_4400 to i8*), i64 9), !insn.addr !516
  %3 = ptrtoint i64* %stack_var_-100 to i64, !insn.addr !517
  %4 = ptrtoint i64* %stack_var_-104 to i64, !insn.addr !518
  store i64 %1, i64* %rbx.0.reg2mem, !insn.addr !519
  store i64 %3, i64* %rbp.0.reg2mem, !insn.addr !519
  br label %dec_label_pc_3745, !insn.addr !519

dec_label_pc_3745:                                ; preds = %dec_label_pc_375c, %dec_label_pc_36f7
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %5 = inttoptr i64 %rbx.0.reload to i32*, !insn.addr !520
  %6 = inttoptr i64 %rbp.0.reload to i64*, !insn.addr !520
  %7 = call i32 @pthread_create(i32* %5, i64* null, i64* (i64*)* inttoptr (i64 10302 to i64* (i64*)*), i64* %6), !insn.addr !520
  %8 = icmp eq i32 %7, 0, !insn.addr !521
  %9 = icmp eq i1 %8, false, !insn.addr !522
  store i32 -1, i32* %r12.1.reg2mem, !insn.addr !522
  br i1 %9, label %dec_label_pc_37a0, label %dec_label_pc_375c, !insn.addr !522

dec_label_pc_375c:                                ; preds = %dec_label_pc_3745
  %10 = add i64 %rbx.0.reload, 8, !insn.addr !523
  %11 = add i64 %rbp.0.reload, 12, !insn.addr !524
  %12 = icmp eq i64 %10, %4, !insn.addr !525
  %13 = icmp eq i1 %12, false, !insn.addr !526
  store i64 %10, i64* %rbx.0.reg2mem, !insn.addr !526
  store i64 %11, i64* %rbp.0.reg2mem, !insn.addr !526
  br i1 %13, label %dec_label_pc_3745, label %dec_label_pc_3769, !insn.addr !526

dec_label_pc_3769:                                ; preds = %dec_label_pc_375c
  %14 = ptrtoint i64* %stack_var_-92 to i64, !insn.addr !527
  store i64 0, i64* %rbx.1.reg2mem, !insn.addr !527
  store i32 %7, i32* %r12.0.reg2mem, !insn.addr !527
  br label %dec_label_pc_3770, !insn.addr !527

dec_label_pc_3770:                                ; preds = %dec_label_pc_3780, %dec_label_pc_3769
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %15 = mul i64 %rbx.1.reload, 8, !insn.addr !528
  %16 = add i64 %15, %1, !insn.addr !528
  %17 = inttoptr i64 %16 to i64*, !insn.addr !528
  %18 = load i64, i64* %17, align 8, !insn.addr !528
  %19 = trunc i64 %18 to i32, !insn.addr !529
  %20 = call i32 @pthread_join(i32 %19, i64** null), !insn.addr !529
  %21 = icmp eq i32 %20, 0, !insn.addr !530
  %22 = icmp eq i1 %21, false, !insn.addr !531
  store i32 -2, i32* %r12.1.reg2mem, !insn.addr !531
  br i1 %22, label %dec_label_pc_37a0, label %dec_label_pc_3780, !insn.addr !531

dec_label_pc_3780:                                ; preds = %dec_label_pc_3770
  %r12.0.reload = load i32, i32* %r12.0.reg2mem
  %23 = mul nuw nsw i64 %rbx.1.reload, 12, !insn.addr !532
  %24 = add nuw nsw i64 %rbx.1.reload, 1, !insn.addr !533
  %25 = add i64 %23, %14, !insn.addr !534
  %26 = inttoptr i64 %25 to i32*, !insn.addr !534
  %27 = load i32, i32* %26, align 4, !insn.addr !534
  %28 = add i32 %27, %r12.0.reload, !insn.addr !534
  %29 = icmp eq i64 %rbx.1.reload, 2, !insn.addr !535
  %30 = icmp eq i1 %29, false, !insn.addr !536
  store i64 %24, i64* %rbx.1.reg2mem, !insn.addr !536
  store i32 %28, i32* %r12.0.reg2mem, !insn.addr !536
  store i32 %28, i32* %r12.1.reg2mem, !insn.addr !536
  br i1 %30, label %dec_label_pc_3770, label %dec_label_pc_37a0, !insn.addr !536

dec_label_pc_37a0:                                ; preds = %dec_label_pc_3745, %dec_label_pc_3770, %dec_label_pc_3780
  %r12.1.reload = load i32, i32* %r12.1.reg2mem
  %31 = call i64 @__readfsqword(i64 40), !insn.addr !537
  %32 = icmp eq i64 %0, %31, !insn.addr !537
  br i1 %32, label %dec_label_pc_37b5, label %dec_label_pc_37b0, !insn.addr !538

dec_label_pc_37b0:                                ; preds = %dec_label_pc_37a0
  call void @__stack_chk_fail(), !insn.addr !539
  br label %dec_label_pc_37b5, !insn.addr !539

dec_label_pc_37b5:                                ; preds = %dec_label_pc_37b0, %dec_label_pc_37a0
  ret i32 %r12.1.reload, !insn.addr !540

; uselistorder directives
  uselistorder i64 %rbx.0.reload, { 1, 0 }
  uselistorder i64 %rbp.0.reload, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %stack_var_-100, { 1, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbp.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r12.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r12.1.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64 12, { 1, 4, 2, 3, 0 }
  uselistorder label %dec_label_pc_37a0, { 2, 1, 0 }
}

define i64 @call_pthread_join() local_unnamed_addr {
dec_label_pc_37c7:
  %0 = call i32 @param_pthread_join(), !insn.addr !541
  %1 = sext i32 %0 to i64, !insn.addr !541
  ret i64 %1, !insn.addr !541
}

define i32 @param_mutex_lock(i32 %thread_count, i32 %iterations_per_thread) local_unnamed_addr {
dec_label_pc_37d2:
  %rax.0.reg2mem = alloca i32, !insn.addr !542
  %r12.11.reg2mem = alloca i64, !insn.addr !542
  %r12.02.reg2mem = alloca i64, !insn.addr !542
  %r13.03.reg2mem = alloca i64, !insn.addr !542
  %stack_var_-44 = alloca i32, align 4
  %0 = mul i32 %thread_count, 8, !insn.addr !543
  store i32 %iterations_per_thread, i32* %stack_var_-44, align 4, !insn.addr !544
  %1 = call i64* @malloc(i32 %0), !insn.addr !545
  %2 = icmp eq i64* %1, null, !insn.addr !546
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !547
  br i1 %2, label %dec_label_pc_3889, label %dec_label_pc_3804, !insn.addr !547

dec_label_pc_3804:                                ; preds = %dec_label_pc_37d2
  store i32 0, i32* @shared_counter, align 4, !insn.addr !548
  %3 = icmp sgt i32 %thread_count, 0
  br i1 %3, label %dec_label_pc_3820.lr.ph, label %dec_label_pc_3867, !insn.addr !549

dec_label_pc_3820.lr.ph:                          ; preds = %dec_label_pc_3804
  %4 = sext i32 %thread_count to i64, !insn.addr !550
  %5 = ptrtoint i64* %1 to i64, !insn.addr !545
  %6 = bitcast i32* %stack_var_-44 to i64*, !insn.addr !551
  store i64 %5, i64* %r13.03.reg2mem
  store i64 0, i64* %r12.02.reg2mem
  br label %dec_label_pc_3820

dec_label_pc_3820:                                ; preds = %dec_label_pc_3820.lr.ph, %dec_label_pc_3849
  %r13.03.reload = load i64, i64* %r13.03.reg2mem
  %7 = inttoptr i64 %r13.03.reload to i32*, !insn.addr !551
  %8 = call i32 @pthread_create(i32* %7, i64* null, i64* (i64*)* inttoptr (i64 10356 to i64* (i64*)*), i64* nonnull %6), !insn.addr !551
  %9 = icmp eq i32 %8, 0, !insn.addr !552
  br i1 %9, label %dec_label_pc_3849, label %dec_label_pc_383a, !insn.addr !553

dec_label_pc_383a:                                ; preds = %dec_label_pc_3820
  call void @free(i64* nonnull %1), !insn.addr !554
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !555
  br label %dec_label_pc_3889, !insn.addr !555

dec_label_pc_3849:                                ; preds = %dec_label_pc_3820
  %r12.02.reload = load i64, i64* %r12.02.reg2mem
  %10 = add i64 %r13.03.reload, 8, !insn.addr !556
  %11 = add nuw nsw i64 %r12.02.reload, 1, !insn.addr !557
  %12 = and i64 %11, 4294967295, !insn.addr !557
  %13 = icmp slt i64 %12, %4, !insn.addr !549
  store i64 %10, i64* %r13.03.reg2mem, !insn.addr !549
  store i64 %12, i64* %r12.02.reg2mem, !insn.addr !549
  store i64 0, i64* %r12.11.reg2mem, !insn.addr !549
  br i1 %13, label %dec_label_pc_3820, label %dec_label_pc_3856, !insn.addr !549

dec_label_pc_3856:                                ; preds = %dec_label_pc_3849, %dec_label_pc_3856
  %r12.11.reload = load i64, i64* %r12.11.reg2mem
  %14 = mul i64 %r12.11.reload, 8, !insn.addr !558
  %15 = add i64 %14, %5, !insn.addr !558
  %16 = inttoptr i64 %15 to i64*, !insn.addr !558
  %17 = load i64, i64* %16, align 8, !insn.addr !558
  %18 = add nuw nsw i64 %r12.11.reload, 1, !insn.addr !559
  %19 = trunc i64 %17 to i32, !insn.addr !560
  %20 = call i32 @pthread_join(i32 %19, i64** null), !insn.addr !560
  %exitcond = icmp eq i64 %18, %4
  store i64 %18, i64* %r12.11.reg2mem, !insn.addr !561
  br i1 %exitcond, label %dec_label_pc_3867, label %dec_label_pc_3856, !insn.addr !561

dec_label_pc_3867:                                ; preds = %dec_label_pc_3856, %dec_label_pc_3804
  call void @free(i64* nonnull %1), !insn.addr !562
  %21 = load i32, i32* %stack_var_-44, align 4, !insn.addr !563
  %22 = mul i32 %21, %thread_count, !insn.addr !563
  %23 = load i32, i32* @shared_counter, align 4, !insn.addr !564
  %24 = icmp eq i32 %23, %22, !insn.addr !565
  %25 = icmp eq i1 %24, false, !insn.addr !566
  %phitmp = select i1 %25, i32 -3, i32 42, !insn.addr !566
  store i32 %phitmp, i32* %rax.0.reg2mem, !insn.addr !566
  br label %dec_label_pc_3889, !insn.addr !566

dec_label_pc_3889:                                ; preds = %dec_label_pc_3867, %dec_label_pc_383a, %dec_label_pc_37d2
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !567

; uselistorder directives
  uselistorder i64 %r13.03.reload, { 1, 0 }
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64* %1, { 1, 0, 3, 2 }
  uselistorder i32* %stack_var_-44, { 1, 0, 2 }
  uselistorder i64* %r13.03.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r12.02.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r12.11.reg2mem, { 2, 0, 1 }
  uselistorder i32 %thread_count, { 1, 3, 2, 0 }
  uselistorder label %dec_label_pc_3856, { 1, 0 }
  uselistorder label %dec_label_pc_3820, { 1, 0 }
}

define i32 @call_mutex_lock() local_unnamed_addr {
dec_label_pc_3896:
  %0 = call i32 @param_mutex_lock(i32 4, i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !568
  ret i32 %0, !insn.addr !568
}

define i32 @param_condition_variable() local_unnamed_addr {
dec_label_pc_38a9:
  %r12.0.reg2mem = alloca i32, !insn.addr !569
  %stack_var_-24 = alloca i64, align 8
  %consumer_ret_-32 = alloca i8*, align 8
  %consumer_-40 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !570
  store i32 0, i32* @ready, align 4, !insn.addr !571
  store i32 0, i32* @data, align 4, !insn.addr !572
  %1 = bitcast i8** %consumer_ret_-32 to i32*, !insn.addr !573
  %2 = call i32 @pthread_create(i32* nonnull %1, i64* null, i64* (i64*)* inttoptr (i64 10432 to i64* (i64*)*), i64* null), !insn.addr !573
  %3 = icmp eq i32 %2, 0, !insn.addr !574
  %4 = icmp eq i1 %3, false, !insn.addr !575
  store i32 -1, i32* %r12.0.reg2mem, !insn.addr !575
  br i1 %4, label %dec_label_pc_393f, label %dec_label_pc_38f4, !insn.addr !575

dec_label_pc_38f4:                                ; preds = %dec_label_pc_38a9
  %5 = bitcast i64* %consumer_-40 to i32*, !insn.addr !576
  %6 = call i32 @pthread_create(i32* nonnull %5, i64* null, i64* (i64*)* inttoptr (i64 10513 to i64* (i64*)*), i64* null), !insn.addr !576
  %7 = load i8*, i8** %consumer_ret_-32, align 8, !insn.addr !577
  %8 = ptrtoint i8* %7 to i64, !insn.addr !577
  %9 = icmp eq i32 %6, 0, !insn.addr !578
  %10 = trunc i64 %8 to i32
  br i1 %9, label %dec_label_pc_391d, label %dec_label_pc_3910, !insn.addr !579

dec_label_pc_3910:                                ; preds = %dec_label_pc_38f4
  %11 = call i32 @pthread_cancel(i32 %10), !insn.addr !580
  store i32 -2, i32* %r12.0.reg2mem, !insn.addr !581
  br label %dec_label_pc_393f, !insn.addr !581

dec_label_pc_391d:                                ; preds = %dec_label_pc_38f4
  %12 = bitcast i64* %stack_var_-24 to i64**, !insn.addr !582
  %13 = call i32 @pthread_join(i32 %10, i64** nonnull %12), !insn.addr !582
  %14 = load i64, i64* %consumer_-40, align 8, !insn.addr !583
  %15 = trunc i64 %14 to i32, !insn.addr !584
  %16 = call i32 @pthread_join(i32 %15, i64** null), !insn.addr !584
  %17 = load i64, i64* %stack_var_-24, align 8, !insn.addr !585
  %18 = inttoptr i64 %17 to i32*, !insn.addr !586
  %19 = load i32, i32* %18, align 4, !insn.addr !586
  %20 = inttoptr i64 %17 to i64*, !insn.addr !587
  call void @free(i64* %20), !insn.addr !587
  store i32 %19, i32* %r12.0.reg2mem, !insn.addr !587
  br label %dec_label_pc_393f, !insn.addr !587

dec_label_pc_393f:                                ; preds = %dec_label_pc_391d, %dec_label_pc_3910, %dec_label_pc_38a9
  %r12.0.reload = load i32, i32* %r12.0.reg2mem
  %21 = call i64 @__readfsqword(i64 40), !insn.addr !588
  %22 = icmp eq i64 %0, %21, !insn.addr !588
  br i1 %22, label %dec_label_pc_3954, label %dec_label_pc_394f, !insn.addr !589

dec_label_pc_394f:                                ; preds = %dec_label_pc_393f
  call void @__stack_chk_fail(), !insn.addr !590
  br label %dec_label_pc_3954, !insn.addr !590

dec_label_pc_3954:                                ; preds = %dec_label_pc_394f, %dec_label_pc_393f
  ret i32 %r12.0.reload, !insn.addr !591

; uselistorder directives
  uselistorder i64 %17, { 1, 0 }
  uselistorder i32 %10, { 1, 0 }
  uselistorder i64* %consumer_-40, { 1, 0 }
  uselistorder i8** %consumer_ret_-32, { 1, 0 }
  uselistorder i64* %stack_var_-24, { 1, 0 }
  uselistorder i32* %r12.0.reg2mem, { 0, 2, 1, 3 }
  uselistorder i32* @ready, { 1, 2, 3, 0 }
}

define i64 @call_condition_variable() local_unnamed_addr {
dec_label_pc_395e:
  %0 = call i32 @param_condition_variable(), !insn.addr !592
  %1 = sext i32 %0 to i64, !insn.addr !592
  ret i64 %1, !insn.addr !592
}

define i32 @param_atomic_ops(i32 %thread_count, i32 %iterations) local_unnamed_addr {
dec_label_pc_3969:
  %rax.1.reg2mem = alloca i32, !insn.addr !593
  %rax.0.reg2mem = alloca i32, !insn.addr !593
  %r12.12.reg2mem = alloca i64, !insn.addr !593
  %r12.03.reg2mem = alloca i64, !insn.addr !593
  %r13.04.reg2mem = alloca i64, !insn.addr !593
  %stack_var_-56 = alloca i32, align 4
  %stack_var_-60 = alloca i32, align 4
  %0 = mul i32 %thread_count, 8, !insn.addr !594
  store i32 %iterations, i32* %stack_var_-60, align 4, !insn.addr !595
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !596
  %2 = call i64* @malloc(i32 %0), !insn.addr !597
  %3 = icmp eq i64* %2, null, !insn.addr !598
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !599
  br i1 %3, label %dec_label_pc_3a4e, label %dec_label_pc_39ab, !insn.addr !599

dec_label_pc_39ab:                                ; preds = %dec_label_pc_3969
  %4 = sext i32 %thread_count to i64, !insn.addr !600
  %5 = ptrtoint i64* %2 to i64, !insn.addr !597
  store i32 0, i32* @atomic_counter, align 4, !insn.addr !601
  %6 = icmp sgt i32 %thread_count, 0
  br i1 %6, label %dec_label_pc_39c5.lr.ph, label %dec_label_pc_39f3, !insn.addr !602

dec_label_pc_39c5.lr.ph:                          ; preds = %dec_label_pc_39ab
  %7 = bitcast i32* %stack_var_-60 to i64*, !insn.addr !603
  store i64 %5, i64* %r13.04.reg2mem
  store i64 0, i64* %r12.03.reg2mem
  br label %dec_label_pc_39c5

dec_label_pc_39c5:                                ; preds = %dec_label_pc_39c5.lr.ph, %dec_label_pc_39ee
  %r13.04.reload = load i64, i64* %r13.04.reg2mem
  %8 = inttoptr i64 %r13.04.reload to i32*, !insn.addr !603
  %9 = call i32 @pthread_create(i32* %8, i64* null, i64* (i64*)* inttoptr (i64 10587 to i64* (i64*)*), i64* nonnull %7), !insn.addr !603
  %10 = icmp eq i32 %9, 0, !insn.addr !604
  br i1 %10, label %dec_label_pc_39ee, label %dec_label_pc_39df, !insn.addr !605

dec_label_pc_39df:                                ; preds = %dec_label_pc_39c5
  call void @free(i64* nonnull %2), !insn.addr !606
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !607
  br label %dec_label_pc_3a4e, !insn.addr !607

dec_label_pc_39ee:                                ; preds = %dec_label_pc_39c5
  %r12.03.reload = load i64, i64* %r12.03.reg2mem
  %11 = add i64 %r13.04.reload, 8, !insn.addr !608
  %12 = add nuw nsw i64 %r12.03.reload, 1, !insn.addr !609
  %13 = and i64 %12, 4294967295, !insn.addr !609
  %14 = icmp slt i64 %13, %4, !insn.addr !602
  store i64 %11, i64* %r13.04.reg2mem, !insn.addr !602
  store i64 %13, i64* %r12.03.reg2mem, !insn.addr !602
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
  store i64 0, i64* %r12.12.reg2mem, !insn.addr !615
  br i1 %6, label %dec_label_pc_3a20, label %dec_label_pc_3a31, !insn.addr !615

dec_label_pc_3a20:                                ; preds = %dec_label_pc_3a18, %dec_label_pc_3a20
  %r12.12.reload = load i64, i64* %r12.12.reg2mem
  %20 = mul i64 %r12.12.reload, 8, !insn.addr !616
  %21 = add i64 %20, %5, !insn.addr !616
  %22 = inttoptr i64 %21 to i64*, !insn.addr !616
  %23 = load i64, i64* %22, align 8, !insn.addr !616
  %24 = add nuw nsw i64 %r12.12.reload, 1, !insn.addr !617
  %25 = trunc i64 %23 to i32, !insn.addr !618
  %26 = call i32 @pthread_join(i32 %25, i64** null), !insn.addr !618
  %exitcond = icmp eq i64 %24, %4
  store i64 %24, i64* %r12.12.reg2mem, !insn.addr !615
  br i1 %exitcond, label %dec_label_pc_3a31, label %dec_label_pc_3a20, !insn.addr !615

dec_label_pc_3a31:                                ; preds = %dec_label_pc_3a20, %dec_label_pc_3a18
  %27 = load i32, i32* @atomic_counter, align 4, !insn.addr !619
  call void @free(i64* nonnull %2), !insn.addr !620
  %28 = icmp slt i32 %27, 1
  %29 = select i1 %28, i32 -3, i32 42, !insn.addr !621
  store i32 %29, i32* %rax.0.reg2mem, !insn.addr !621
  br label %dec_label_pc_3a4e, !insn.addr !621

dec_label_pc_3a4e:                                ; preds = %dec_label_pc_3a31, %dec_label_pc_39df, %dec_label_pc_3969
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %30 = call i64 @__readfsqword(i64 40), !insn.addr !622
  %31 = icmp eq i64 %1, %30, !insn.addr !622
  store i32 %rax.0.reload, i32* %rax.1.reg2mem, !insn.addr !623
  br i1 %31, label %dec_label_pc_3a63, label %dec_label_pc_3a5e, !insn.addr !623

dec_label_pc_3a5e:                                ; preds = %dec_label_pc_3a4e
  call void @__stack_chk_fail(), !insn.addr !624
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.1.reg2mem, !insn.addr !624
  br label %dec_label_pc_3a63, !insn.addr !624

dec_label_pc_3a63:                                ; preds = %dec_label_pc_3a5e, %dec_label_pc_3a4e
  %rax.1.reload = load i32, i32* %rax.1.reg2mem
  ret i32 %rax.1.reload, !insn.addr !625

; uselistorder directives
  uselistorder i64 %r13.04.reload, { 1, 0 }
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64* %2, { 1, 0, 3, 2 }
  uselistorder i64* %r13.04.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r12.03.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r12.12.reg2mem, { 2, 0, 1 }
  uselistorder i64 4294967295, { 5, 6, 0, 1, 7, 8, 9, 10, 2, 11, 3, 12, 4 }
  uselistorder i32* @atomic_counter, { 2, 3, 4, 5, 0, 1 }
  uselistorder i32 %thread_count, { 1, 2, 0 }
  uselistorder label %dec_label_pc_3a20, { 1, 0 }
  uselistorder label %dec_label_pc_39c5, { 1, 0 }
}

define i32 @call_atomic_ops() local_unnamed_addr {
dec_label_pc_3a70:
  %0 = call i32 @param_atomic_ops(i32 4, i32 500), !insn.addr !626
  ret i32 %0, !insn.addr !626
}

define i32 @param_thread_local_storage(i32 %thread_count) local_unnamed_addr {
dec_label_pc_3a83:
  %rax.1.reg2mem = alloca i32, !insn.addr !627
  %rax.0.reg2mem = alloca i32, !insn.addr !627
  %r15.0.lcssa.reg2mem = alloca i32, !insn.addr !627
  %r14.0.lcssa.reg2mem = alloca i32, !insn.addr !627
  %r13.24.reg2mem = alloca i64, !insn.addr !627
  %r14.05.reg2mem = alloca i32, !insn.addr !627
  %r15.06.reg2mem = alloca i32, !insn.addr !627
  %rbx.0.reg2mem = alloca i64, !insn.addr !627
  %r13.1.reg2mem = alloca i64, !insn.addr !627
  %r13.08.reg2mem = alloca i64, !insn.addr !627
  %stack_var_-72 = alloca i64, align 8
  %0 = mul i32 %thread_count, 8, !insn.addr !628
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !629
  %2 = call i64* @malloc(i32 %0), !insn.addr !630
  %3 = call i64* @malloc(i32 %0), !insn.addr !631
  %4 = icmp eq i64* %2, null, !insn.addr !632
  %5 = icmp eq i64* %3, null, !insn.addr !633
  %or.cond = or i1 %4, %5
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !634
  br i1 %or.cond, label %dec_label_pc_3bf5, label %dec_label_pc_3ae1.preheader, !insn.addr !634

dec_label_pc_3ae1.preheader:                      ; preds = %dec_label_pc_3a83
  %6 = sext i32 %thread_count to i64, !insn.addr !635
  %7 = ptrtoint i64* %3 to i64, !insn.addr !631
  %8 = icmp sgt i32 %thread_count, 0
  store i64 0, i64* %r13.08.reg2mem, !insn.addr !636
  br i1 %8, label %dec_label_pc_3ae6, label %dec_label_pc_3b23.preheader, !insn.addr !636

dec_label_pc_3b23.preheader:                      ; preds = %dec_label_pc_3ae6, %dec_label_pc_3ae1.preheader
  %9 = ptrtoint i64* %2 to i64, !insn.addr !630
  store i64 0, i64* %r13.1.reg2mem
  br label %dec_label_pc_3b23

dec_label_pc_3ae6:                                ; preds = %dec_label_pc_3ae1.preheader, %dec_label_pc_3ae6
  %r13.08.reload = load i64, i64* %r13.08.reg2mem
  %10 = call i64* @malloc(i32 16), !insn.addr !637
  %11 = ptrtoint i64* %10 to i64, !insn.addr !637
  %12 = mul i64 %r13.08.reload, 8, !insn.addr !638
  %13 = add i64 %12, %7, !insn.addr !638
  %14 = inttoptr i64 %13 to i64*, !insn.addr !638
  store i64 %11, i64* %14, align 8, !insn.addr !638
  %15 = add nuw nsw i64 %r13.08.reload, 1, !insn.addr !639
  %16 = bitcast i64* %10 to i8*, !insn.addr !640
  %17 = call i32 (i8*, i32, i32, i32, i8*, ...) @__snprintf_chk(i8* %16, i32 16, i32 1, i32 16, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_431d, i64 0, i64 0), i64 %r13.08.reload), !insn.addr !640
  %exitcond11 = icmp eq i64 %15, %6
  store i64 %15, i64* %r13.08.reg2mem, !insn.addr !636
  br i1 %exitcond11, label %dec_label_pc_3b23.preheader, label %dec_label_pc_3ae6, !insn.addr !636

dec_label_pc_3b23:                                ; preds = %dec_label_pc_3b23.preheader, %dec_label_pc_3b28
  %r13.1.reload = load i64, i64* %r13.1.reg2mem
  %18 = icmp slt i64 %r13.1.reload, %6, !insn.addr !641
  br i1 %18, label %dec_label_pc_3b28, label %dec_label_pc_3b88.preheader, !insn.addr !641

dec_label_pc_3b88.preheader:                      ; preds = %dec_label_pc_3b23
  store i32 0, i32* %r14.0.lcssa.reg2mem, !insn.addr !642
  store i32 0, i32* %r15.0.lcssa.reg2mem, !insn.addr !642
  br i1 %8, label %dec_label_pc_3b8d.lr.ph, label %dec_label_pc_3bc3, !insn.addr !642

dec_label_pc_3b8d.lr.ph:                          ; preds = %dec_label_pc_3b88.preheader
  %19 = bitcast i64* %stack_var_-72 to i64**, !insn.addr !643
  store i32 0, i32* %r15.06.reg2mem
  store i32 0, i32* %r14.05.reg2mem
  store i64 0, i64* %r13.24.reg2mem
  br label %dec_label_pc_3b8d

dec_label_pc_3b28:                                ; preds = %dec_label_pc_3b23
  %20 = mul i64 %r13.1.reload, 8, !insn.addr !644
  %21 = add i64 %20, %7
  %22 = inttoptr i64 %21 to i64*, !insn.addr !644
  %23 = load i64, i64* %22, align 8, !insn.addr !644
  %24 = add i64 %20, %9, !insn.addr !645
  %25 = add nuw nsw i64 %r13.1.reload, 1, !insn.addr !646
  %26 = inttoptr i64 %24 to i32*, !insn.addr !647
  %27 = inttoptr i64 %23 to i64*, !insn.addr !647
  %28 = call i32 @pthread_create(i32* %26, i64* null, i64* (i64*)* inttoptr (i64 10651 to i64* (i64*)*), i64* %27), !insn.addr !647
  %29 = icmp eq i32 %28, 0, !insn.addr !648
  store i64 %25, i64* %r13.1.reg2mem, !insn.addr !649
  store i64 %7, i64* %rbx.0.reg2mem, !insn.addr !649
  br i1 %29, label %dec_label_pc_3b23, label %dec_label_pc_3b52, !insn.addr !649

dec_label_pc_3b52:                                ; preds = %dec_label_pc_3b28, %dec_label_pc_3b52
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %30 = inttoptr i64 %rbx.0.reload to i64*, !insn.addr !650
  %31 = load i64, i64* %30, align 8, !insn.addr !650
  %32 = add i64 %rbx.0.reload, 8, !insn.addr !651
  %33 = inttoptr i64 %31 to i64*, !insn.addr !652
  call void @free(i64* %33), !insn.addr !652
  %34 = icmp eq i64 %rbx.0.reload, %21, !insn.addr !653
  %35 = icmp eq i1 %34, false, !insn.addr !654
  store i64 %32, i64* %rbx.0.reg2mem, !insn.addr !654
  br i1 %35, label %dec_label_pc_3b52, label %dec_label_pc_3b63, !insn.addr !654

dec_label_pc_3b63:                                ; preds = %dec_label_pc_3b52
  call void @free(i64* nonnull %3), !insn.addr !655
  call void @free(i64* nonnull %2), !insn.addr !656
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !657
  br label %dec_label_pc_3bf5, !insn.addr !657

dec_label_pc_3b8d:                                ; preds = %dec_label_pc_3b8d, %dec_label_pc_3b8d.lr.ph
  %r13.24.reload = load i64, i64* %r13.24.reg2mem
  %r14.05.reload = load i32, i32* %r14.05.reg2mem
  %r15.06.reload = load i32, i32* %r15.06.reg2mem
  %36 = mul i64 %r13.24.reload, 8, !insn.addr !658
  %37 = add i64 %36, %9, !insn.addr !658
  %38 = inttoptr i64 %37 to i64*, !insn.addr !658
  %39 = load i64, i64* %38, align 8, !insn.addr !658
  %40 = trunc i64 %39 to i32, !insn.addr !643
  %41 = call i32 @pthread_join(i32 %40, i64** nonnull %19), !insn.addr !643
  %42 = load i64, i64* %stack_var_-72, align 8, !insn.addr !659
  %43 = inttoptr i64 %42 to i32*, !insn.addr !660
  %44 = load i32, i32* %43, align 4, !insn.addr !660
  %45 = add i32 %44, %r15.06.reload, !insn.addr !660
  %46 = add i64 %42, 4, !insn.addr !661
  %47 = inttoptr i64 %46 to i32*, !insn.addr !661
  %48 = load i32, i32* %47, align 4, !insn.addr !661
  %49 = add i32 %48, %r14.05.reload, !insn.addr !661
  %50 = inttoptr i64 %42 to i64*, !insn.addr !662
  call void @free(i64* %50), !insn.addr !662
  %51 = add i64 %36, %7, !insn.addr !663
  %52 = inttoptr i64 %51 to i64*, !insn.addr !663
  %53 = load i64, i64* %52, align 8, !insn.addr !663
  %54 = add nuw nsw i64 %r13.24.reload, 1, !insn.addr !664
  %55 = inttoptr i64 %53 to i64*, !insn.addr !665
  call void @free(i64* %55), !insn.addr !665
  %exitcond = icmp eq i64 %54, %6
  store i32 %45, i32* %r15.06.reg2mem, !insn.addr !642
  store i32 %49, i32* %r14.05.reg2mem, !insn.addr !642
  store i64 %54, i64* %r13.24.reg2mem, !insn.addr !642
  store i32 %49, i32* %r14.0.lcssa.reg2mem, !insn.addr !642
  store i32 %45, i32* %r15.0.lcssa.reg2mem, !insn.addr !642
  br i1 %exitcond, label %dec_label_pc_3bc3, label %dec_label_pc_3b8d, !insn.addr !642

dec_label_pc_3bc3:                                ; preds = %dec_label_pc_3b8d, %dec_label_pc_3b88.preheader
  %r15.0.lcssa.reload = load i32, i32* %r15.0.lcssa.reg2mem
  %r14.0.lcssa.reload = load i32, i32* %r14.0.lcssa.reg2mem
  call void @free(i64* nonnull %3), !insn.addr !666
  call void @free(i64* nonnull %2), !insn.addr !667
  %56 = mul i32 %thread_count, 100, !insn.addr !668
  %57 = icmp eq i32 %56, %r15.0.lcssa.reload, !insn.addr !669
  %58 = mul i32 %thread_count, 150, !insn.addr !670
  %59 = icmp eq i32 %58, %r14.0.lcssa.reload, !insn.addr !671
  %or.cond3 = icmp eq i1 %59, %57
  %spec.select = select i1 %or.cond3, i32 42, i32 -3
  store i32 %spec.select, i32* %rax.0.reg2mem
  br label %dec_label_pc_3bf5

dec_label_pc_3bf5:                                ; preds = %dec_label_pc_3bc3, %dec_label_pc_3a83, %dec_label_pc_3b63
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %60 = call i64 @__readfsqword(i64 40), !insn.addr !672
  %61 = icmp eq i64 %1, %60, !insn.addr !672
  store i32 %rax.0.reload, i32* %rax.1.reg2mem, !insn.addr !673
  br i1 %61, label %dec_label_pc_3c0a, label %dec_label_pc_3c05, !insn.addr !673

dec_label_pc_3c05:                                ; preds = %dec_label_pc_3bf5
  call void @__stack_chk_fail(), !insn.addr !674
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.1.reg2mem, !insn.addr !674
  br label %dec_label_pc_3c0a, !insn.addr !674

dec_label_pc_3c0a:                                ; preds = %dec_label_pc_3c05, %dec_label_pc_3bf5
  %rax.1.reload = load i32, i32* %rax.1.reg2mem
  ret i32 %rax.1.reload, !insn.addr !675

; uselistorder directives
  uselistorder i64 %42, { 1, 2, 0 }
  uselistorder i64 %36, { 1, 0 }
  uselistorder i64 %rbx.0.reload, { 2, 0, 1 }
  uselistorder i64 %20, { 1, 0 }
  uselistorder i64 %r13.1.reload, { 0, 2, 1 }
  uselistorder i64 %r13.08.reload, { 1, 0, 2 }
  uselistorder i64 %9, { 1, 0 }
  uselistorder i64 %7, { 2, 0, 1, 3 }
  uselistorder i64 %6, { 1, 2, 0 }
  uselistorder i64* %3, { 2, 1, 3, 0 }
  uselistorder i64* %2, { 1, 0, 3, 2 }
  uselistorder i64* %stack_var_-72, { 1, 0 }
  uselistorder i64* %r13.08.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r13.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r15.06.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r14.05.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r13.24.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rax.0.reg2mem, { 0, 1, 3, 2 }
  uselistorder void ()* @__stack_chk_fail, { 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 15 }
  uselistorder i32 -3, { 3, 4, 5, 0, 1, 6, 7, 2 }
  uselistorder i32 42, { 0, 2, 3, 8, 9, 1, 4, 5, 6, 12, 7, 13, 10, 11 }
  uselistorder i64 4, { 5, 0, 1, 2, 3, 4 }
  uselistorder i32 (i32, i64**)* @pthread_join, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder i32 -2, { 0, 1, 2, 3, 4, 5, 6, 7, 9, 8 }
  uselistorder i1 false, { 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 1, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 3, 32, 4, 6, 2, 5 }
  uselistorder void (i64*)* @free, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14 }
  uselistorder i32 (i32*, i64*, i64* (i64*)*, i64*)* @pthread_create, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder i64 1, { 8, 9, 10, 11, 0, 12, 1, 13, 7, 2, 3, 15, 14, 16, 4, 5, 6 }
  uselistorder i64 8, { 0, 7, 1, 2, 3, 8, 4, 9, 5, 10, 11, 12, 6 }
  uselistorder i32 0, { 38, 2, 3, 0, 1, 8, 39, 40, 9, 16, 41, 42, 43, 44, 45, 10, 46, 47, 48, 49, 50, 52, 51, 7, 14, 53, 54, 56, 55, 6, 13, 57, 17, 58, 59, 60, 61, 62, 63, 64, 18, 19, 66, 65, 67, 20, 21, 22, 68, 23, 70, 69, 71, 72, 73, 4, 24, 74, 75, 25, 76, 77, 11, 36, 15, 12, 5, 37, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35 }
  uselistorder i32 -1, { 0, 1, 2, 3, 4, 5, 18, 13, 19, 14, 20, 7, 6, 8, 9, 17, 15, 10, 11, 12, 16 }
  uselistorder i64* null, { 1, 0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 }
  uselistorder i64* (i32)* @malloc, { 5, 4, 3, 2, 1, 0, 8, 7, 6, 9 }
  uselistorder i64 40, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30 }
  uselistorder i32 %thread_count, { 2, 3, 1, 4, 0 }
  uselistorder label %dec_label_pc_3bf5, { 0, 2, 1 }
  uselistorder label %dec_label_pc_3b52, { 1, 0 }
  uselistorder label %dec_label_pc_3b23, { 1, 0 }
  uselistorder label %dec_label_pc_3ae6, { 1, 0 }
}

define i32 @call_thread_local_storage() local_unnamed_addr {
dec_label_pc_3c19:
  %0 = call i32 @param_thread_local_storage(i32 4), !insn.addr !676
  ret i32 %0, !insn.addr !676
}

define void @test_thread_concurrency() local_unnamed_addr {
dec_label_pc_3c27:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_4327 to i8*)), !insn.addr !677
  %1 = call i32 @call_pthread_create(), !insn.addr !678
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_4345 to i8*)), !insn.addr !679
  %3 = call i32 @param_pthread_join(), !insn.addr !680
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_4361 to i8*)), !insn.addr !681
  %5 = call i32 @call_mutex_lock(), !insn.addr !682
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_437e to i8*)), !insn.addr !683
  %7 = call i32 @param_condition_variable(), !insn.addr !684
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_439a to i8*)), !insn.addr !685
  %9 = call i32 @call_atomic_ops(), !insn.addr !686
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_43b6 to i8*)), !insn.addr !687
  %11 = call i32 @call_thread_local_storage(), !insn.addr !688
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_43d2 to i8*)), !insn.addr !689
  ret void, !insn.addr !689

; uselistorder directives
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12, 26 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
  uselistorder i64 0, { 0, 20, 21, 1, 2, 3, 4, 5, 6, 7, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 8, 9, 10, 18, 11, 19, 95, 96, 22, 23, 97, 98, 99, 100, 15, 16, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 12, 13, 122, 17, 14, 123, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_3ce4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !690

; uselistorder directives
  uselistorder i32 1, { 11, 78, 79, 80, 81, 82, 83, 84, 120, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 85, 121, 114, 30, 29, 28, 27, 26, 124, 123, 122, 31, 125, 35, 34, 33, 32, 129, 128, 127, 126, 40, 39, 38, 37, 36, 115, 131, 130, 41, 86, 87, 88, 89, 90, 91, 92, 10, 9, 93, 46, 45, 44, 43, 42, 94, 47, 95, 96, 132, 116, 49, 48, 0, 97, 134, 133, 51, 50, 15, 8, 117, 53, 52, 135, 54, 7, 6, 55, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 118, 57, 56, 14, 60, 59, 58, 62, 61, 110, 111, 137, 136, 64, 63, 65, 66, 13, 112, 140, 139, 138, 67, 76, 141, 119, 68, 12, 5, 77, 142, 69, 144, 71, 70, 4, 145, 113, 146, 72, 3, 2, 74, 73, 147, 1, 143, 75 }
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
!101 = !{i64 10391}
!102 = !{i64 10400}
!103 = !{i64 10402}
!104 = !{i64 10408}
!105 = !{i64 10418}
!106 = !{i64 10431}
!107 = !{i64 10456}
!108 = !{i64 10461}
!109 = !{i64 10468}
!110 = !{i64 10476}
!111 = !{i64 10486}
!112 = !{i64 10492}
!113 = !{i64 10502}
!114 = !{i64 10507}
!115 = !{i64 10512}
!116 = !{i64 10530}
!117 = !{i64 10538}
!118 = !{i64 10550}
!119 = !{i64 10560}
!120 = !{i64 10570}
!121 = !{i64 10578}
!122 = !{i64 10586}
!123 = !{i64 10587}
!124 = !{i64 10597}
!125 = !{i64 10591}
!126 = !{i64 10599}
!127 = !{i64 10606}
!128 = !{i64 10614}
!129 = !{i64 10622}
!130 = !{i64 10628}
!131 = !{i64 10639}
!132 = !{i64 10642}
!133 = !{i64 10650}
!134 = !{i64 10666}
!135 = !{i64 10674}
!136 = !{i64 10683}
!137 = !{i64 10686}
!138 = !{i64 10694}
!139 = !{i64 10701}
!140 = !{i64 10711}
!141 = !{i64 10716}
!142 = !{i64 10718}
!143 = !{i64 10724}
!144 = !{i64 10730}
!145 = !{i64 10738}
!146 = !{i64 10744}
!147 = !{i64 10745}
!148 = !{i64 10760}
!149 = !{i64 10781}
!150 = !{i64 10791}
!151 = !{i64 10800}
!152 = !{i64 10802}
!153 = !{i64 10811}
!154 = !{i64 10817}
!155 = !{i64 10830}
!156 = !{i64 10833}
!157 = !{i64 10844}
!158 = !{i64 10866}
!159 = !{i64 10883}
!160 = !{i64 10904}
!161 = !{i64 10909}
!162 = !{i64 10912}
!163 = !{i64 10916}
!164 = !{i64 10922}
!165 = !{i64 10928}
!166 = !{i64 10938}
!167 = !{i64 10949}
!168 = !{i64 10951}
!169 = !{i64 10952}
!170 = !{i64 10970}
!171 = !{i64 11010}
!172 = !{i64 11031}
!173 = !{i64 11038}
!174 = !{i64 11047}
!175 = !{i64 11051}
!176 = !{i64 11060}
!177 = !{i64 11069}
!178 = !{i64 11071}
!179 = !{i64 11080}
!180 = !{i64 11086}
!181 = !{i64 11099}
!182 = !{i64 11102}
!183 = !{i64 11113}
!184 = !{i64 11114}
!185 = !{i64 11129}
!186 = !{i64 11190}
!187 = !{i64 11195}
!188 = !{i64 11200}
!189 = !{i64 11205}
!190 = !{i64 11225}
!191 = !{i64 11230}
!192 = !{i64 11237}
!193 = !{i64 11246}
!194 = !{i64 11248}
!195 = !{i64 11259}
!196 = !{i64 11264}
!197 = !{i64 11283}
!198 = !{i64 11304}
!199 = !{i64 11306}
!200 = !{i64 11321}
!201 = !{i64 11345}
!202 = !{i64 11356}
!203 = !{i64 11360}
!204 = !{i64 11374}
!205 = !{i64 11383}
!206 = !{i64 11385}
!207 = !{i64 11394}
!208 = !{i64 11406}
!209 = !{i64 11408}
!210 = !{i64 11427}
!211 = !{i64 11432}
!212 = !{i64 11435}
!213 = !{i64 11443}
!214 = !{i64 11454}
!215 = !{i64 11466}
!216 = !{i64 11479}
!217 = !{i64 11485}
!218 = !{i64 11488}
!219 = !{i64 11491}
!220 = !{i64 11492}
!221 = !{i64 11518}
!222 = !{i64 11534}
!223 = !{i64 11545}
!224 = !{i64 11548}
!225 = !{i64 11577}
!226 = !{i64 11585}
!227 = !{i64 11589}
!228 = !{i64 11591}
!229 = !{i64 11601}
!230 = !{i64 11514}
!231 = !{i64 11603}
!232 = !{i64 11629}
!233 = !{i64 11637}
!234 = !{i64 11645}
!235 = !{i64 11653}
!236 = !{i64 11663}
!237 = !{i64 11667}
!238 = !{i64 11675}
!239 = !{i64 11680}
!240 = !{i64 11688}
!241 = !{i64 11696}
!242 = !{i64 11705}
!243 = !{i64 11707}
!244 = !{i64 11724}
!245 = !{i64 11736}
!246 = !{i64 11741}
!247 = !{i64 11752}
!248 = !{i64 11767}
!249 = !{i64 11772}
!250 = !{i64 11775}
!251 = !{i64 11782}
!252 = !{i64 11785}
!253 = !{i64 11787}
!254 = !{i64 11790}
!255 = !{i64 11793}
!256 = !{i64 11798}
!257 = !{i64 11801}
!258 = !{i64 11806}
!259 = !{i64 11818}
!260 = !{i64 11828}
!261 = !{i64 11830}
!262 = !{i64 11845}
!263 = !{i64 11849}
!264 = !{i64 11852}
!265 = !{i64 11854}
!266 = !{i64 11858}
!267 = !{i64 11861}
!268 = !{i64 11869}
!269 = !{i64 11870}
!270 = !{i64 11878}
!271 = !{i64 11894}
!272 = !{i64 11892}
!273 = !{i64 11897}
!274 = !{i64 11904}
!275 = !{i64 11911}
!276 = !{i64 11918}
!277 = !{i64 11927}
!278 = !{i64 11935}
!279 = !{i64 11944}
!280 = !{i64 11946}
!281 = !{i64 11955}
!282 = !{i64 11981}
!283 = !{i64 11995}
!284 = !{i64 11998}
!285 = !{i64 12001}
!286 = !{i64 12005}
!287 = !{i64 12013}
!288 = !{i64 12016}
!289 = !{i64 12019}
!290 = !{i64 12025}
!291 = !{i64 12035}
!292 = !{i64 12059}
!293 = !{i64 12073}
!294 = !{i64 12080}
!295 = !{i64 12101}
!296 = !{i64 12108}
!297 = !{i64 12129}
!298 = !{i64 12153}
!299 = !{i64 12160}
!300 = !{i64 12181}
!301 = !{i64 12188}
!302 = !{i64 12209}
!303 = !{i64 12216}
!304 = !{i64 12237}
!305 = !{i64 12244}
!306 = !{i64 12265}
!307 = !{i64 12272}
!308 = !{i64 12293}
!309 = !{i64 12300}
!310 = !{i64 12321}
!311 = !{i64 12328}
!312 = !{i64 12349}
!313 = !{i64 12356}
!314 = !{i64 12377}
!315 = !{i64 12384}
!316 = !{i64 12406}
!317 = !{i64 12411}
!318 = !{i64 12429}
!319 = !{i64 12434}
!320 = !{i64 12436}
!321 = !{i64 12438}
!322 = !{i64 12443}
!323 = !{i64 12446}
!324 = !{i64 12449}
!325 = !{i64 12463}
!326 = !{i64 12473}
!327 = !{i64 12486}
!328 = !{i64 12492}
!329 = !{i64 12495}
!330 = !{i64 12498}
!331 = !{i64 12499}
!332 = !{i64 12510}
!333 = !{i64 12534}
!334 = !{i64 12545}
!335 = !{i64 12577}
!336 = !{i64 12586}
!337 = !{i64 12588}
!338 = !{i64 12600}
!339 = !{i64 12612}
!340 = !{i64 12614}
!341 = !{i64 12631}
!342 = !{i64 12647}
!343 = !{i64 12652}
!344 = !{i64 12654}
!345 = !{i64 12656}
!346 = !{i64 12671}
!347 = !{i64 12681}
!348 = !{i64 12695}
!349 = !{i64 12708}
!350 = !{i64 12711}
!351 = !{i64 12713}
!352 = !{i64 12722}
!353 = !{i64 12725}
!354 = !{i64 12727}
!355 = !{i64 12730}
!356 = !{i64 12740}
!357 = !{i64 12749}
!358 = !{i64 12751}
!359 = !{i64 12763}
!360 = !{i64 12778}
!361 = !{i64 12784}
!362 = !{i64 12792}
!363 = !{i64 12794}
!364 = !{i64 12795}
!365 = !{i64 12800}
!366 = !{i64 12804}
!367 = !{i64 12823}
!368 = !{i64 12828}
!369 = !{i64 12830}
!370 = !{i64 12832}
!371 = !{i64 12837}
!372 = !{i64 12839}
!373 = !{i64 12841}
!374 = !{i64 12843}
!375 = !{i64 12846}
!376 = !{i64 12867}
!377 = !{i64 12876}
!378 = !{i64 12883}
!379 = !{i64 12892}
!380 = !{i64 12897}
!381 = !{i64 12910}
!382 = !{i64 12915}
!383 = !{i64 12921}
!384 = !{i64 12926}
!385 = !{i64 12933}
!386 = !{i64 12951}
!387 = !{i64 12954}
!388 = !{i64 12971}
!389 = !{i64 12980}
!390 = !{i64 12982}
!391 = !{i64 12992}
!392 = !{i64 12997}
!393 = !{i64 13002}
!394 = !{i64 13022}
!395 = !{i64 13038}
!396 = !{i64 13048}
!397 = !{i64 13050}
!398 = !{i64 13081}
!399 = !{i64 13089}
!400 = !{i64 13098}
!401 = !{i64 13100}
!402 = !{i64 13102}
!403 = !{i64 13112}
!404 = !{i64 13114}
!405 = !{i64 13131}
!406 = !{i64 13136}
!407 = !{i64 13143}
!408 = !{i64 13152}
!409 = !{i64 13154}
!410 = !{i64 13156}
!411 = !{i64 13166}
!412 = !{i64 13177}
!413 = !{i64 13186}
!414 = !{i64 13188}
!415 = !{i64 13207}
!416 = !{i64 13217}
!417 = !{i64 13226}
!418 = !{i64 13228}
!419 = !{i64 13237}
!420 = !{i64 13242}
!421 = !{i64 13247}
!422 = !{i64 13278}
!423 = !{i64 13283}
!424 = !{i64 13285}
!425 = !{i64 13295}
!426 = !{i64 13308}
!427 = !{i64 13315}
!428 = !{i64 13317}
!429 = !{i64 13335}
!430 = !{i64 13343}
!431 = !{i64 13345}
!432 = !{i64 13359}
!433 = !{i64 13367}
!434 = !{i64 13371}
!435 = !{i64 13383}
!436 = !{i64 13391}
!437 = !{i64 13402}
!438 = !{i64 13414}
!439 = !{i64 13427}
!440 = !{i64 13433}
!441 = !{i64 13450}
!442 = !{i64 13454}
!443 = !{i64 13455}
!444 = !{i64 13477}
!445 = !{i64 13488}
!446 = !{i64 13491}
!447 = !{i64 13505}
!448 = !{i64 13518}
!449 = !{i64 13521}
!450 = !{i64 13537}
!451 = !{i64 13547}
!452 = !{i64 13558}
!453 = !{i64 13560}
!454 = !{i64 13562}
!455 = !{i64 13564}
!456 = !{i64 13571}
!457 = !{i64 13578}
!458 = !{i64 13589}
!459 = !{i64 13591}
!460 = !{i64 13593}
!461 = !{i64 13604}
!462 = !{i64 13607}
!463 = !{i64 13619}
!464 = !{i64 13629}
!465 = !{i64 13640}
!466 = !{i64 13642}
!467 = !{i64 13644}
!468 = !{i64 13646}
!469 = !{i64 13653}
!470 = !{i64 13660}
!471 = !{i64 13671}
!472 = !{i64 13673}
!473 = !{i64 13675}
!474 = !{i64 13681}
!475 = !{i64 13684}
!476 = !{i64 13693}
!477 = !{i64 13705}
!478 = !{i64 13710}
!479 = !{i64 13718}
!480 = !{i64 13723}
!481 = !{i64 13740}
!482 = !{i64 13747}
!483 = !{i64 13768}
!484 = !{i64 13775}
!485 = !{i64 13796}
!486 = !{i64 13803}
!487 = !{i64 13824}
!488 = !{i64 13829}
!489 = !{i64 13850}
!490 = !{i64 13855}
!491 = !{i64 13876}
!492 = !{i64 13883}
!493 = !{i64 13900}
!494 = !{i64 13904}
!495 = !{i64 13909}
!496 = !{i64 13931}
!497 = !{i64 13936}
!498 = !{i64 13959}
!499 = !{i64 13980}
!500 = !{i64 13989}
!501 = !{i64 13994}
!502 = !{i64 13996}
!503 = !{i64 13998}
!504 = !{i64 14008}
!505 = !{i64 14013}
!506 = !{i64 14018}
!507 = !{i64 14021}
!508 = !{i64 14031}
!509 = !{i64 14040}
!510 = !{i64 14042}
!511 = !{i64 14056}
!512 = !{i64 14066}
!513 = !{i64 14071}
!514 = !{i64 14108}
!515 = !{i64 14129}
!516 = !{i64 14134}
!517 = !{i64 14136}
!518 = !{i64 14141}
!519 = !{i64 14146}
!520 = !{i64 14160}
!521 = !{i64 14168}
!522 = !{i64 14170}
!523 = !{i64 14172}
!524 = !{i64 14176}
!525 = !{i64 14180}
!526 = !{i64 14183}
!527 = !{i64 14187}
!528 = !{i64 14192}
!529 = !{i64 14199}
!530 = !{i64 14204}
!531 = !{i64 14206}
!532 = !{i64 14208}
!533 = !{i64 14212}
!534 = !{i64 14215}
!535 = !{i64 14220}
!536 = !{i64 14224}
!537 = !{i64 14245}
!538 = !{i64 14254}
!539 = !{i64 14256}
!540 = !{i64 14278}
!541 = !{i64 14285}
!542 = !{i64 14290}
!543 = !{i64 14308}
!544 = !{i64 14316}
!545 = !{i64 14320}
!546 = !{i64 14331}
!547 = !{i64 14334}
!548 = !{i64 14340}
!549 = !{i64 14366}
!550 = !{i64 14296}
!551 = !{i64 14381}
!552 = !{i64 14390}
!553 = !{i64 14392}
!554 = !{i64 14397}
!555 = !{i64 14407}
!556 = !{i64 14386}
!557 = !{i64 14409}
!558 = !{i64 14422}
!559 = !{i64 14429}
!560 = !{i64 14432}
!561 = !{i64 14420}
!562 = !{i64 14442}
!563 = !{i64 14447}
!564 = !{i64 14452}
!565 = !{i64 14463}
!566 = !{i64 14470}
!567 = !{i64 14485}
!568 = !{i64 14500}
!569 = !{i64 14505}
!570 = !{i64 14530}
!571 = !{i64 14551}
!572 = !{i64 14561}
!573 = !{i64 14571}
!574 = !{i64 14576}
!575 = !{i64 14578}
!576 = !{i64 14594}
!577 = !{i64 14599}
!578 = !{i64 14604}
!579 = !{i64 14606}
!580 = !{i64 14608}
!581 = !{i64 14619}
!582 = !{i64 14626}
!583 = !{i64 14631}
!584 = !{i64 14637}
!585 = !{i64 14642}
!586 = !{i64 14647}
!587 = !{i64 14650}
!588 = !{i64 14660}
!589 = !{i64 14669}
!590 = !{i64 14671}
!591 = !{i64 14685}
!592 = !{i64 14692}
!593 = !{i64 14697}
!594 = !{i64 14715}
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
!628 = !{i64 14999}
!629 = !{i64 15010}
!630 = !{i64 15026}
!631 = !{i64 15037}
!632 = !{i64 15042}
!633 = !{i64 15064}
!634 = !{i64 15045}
!635 = !{i64 14992}
!636 = !{i64 15076}
!637 = !{i64 15083}
!638 = !{i64 15099}
!639 = !{i64 15119}
!640 = !{i64 15122}
!641 = !{i64 15142}
!642 = !{i64 15243}
!643 = !{i64 15257}
!644 = !{i64 15144}
!645 = !{i64 15162}
!646 = !{i64 15166}
!647 = !{i64 15169}
!648 = !{i64 15174}
!649 = !{i64 15176}
!650 = !{i64 15186}
!651 = !{i64 15189}
!652 = !{i64 15193}
!653 = !{i64 15198}
!654 = !{i64 15201}
!655 = !{i64 15206}
!656 = !{i64 15214}
!657 = !{i64 15224}
!658 = !{i64 15245}
!659 = !{i64 15262}
!660 = !{i64 15267}
!661 = !{i64 15270}
!662 = !{i64 15274}
!663 = !{i64 15279}
!664 = !{i64 15284}
!665 = !{i64 15287}
!666 = !{i64 15302}
!667 = !{i64 15310}
!668 = !{i64 15315}
!669 = !{i64 15318}
!670 = !{i64 15323}
!671 = !{i64 15334}
!672 = !{i64 15354}
!673 = !{i64 15363}
!674 = !{i64 15365}
!675 = !{i64 15384}
!676 = !{i64 15394}
!677 = !{i64 15411}
!678 = !{i64 15418}
!679 = !{i64 15439}
!680 = !{i64 15446}
!681 = !{i64 15467}
!682 = !{i64 15474}
!683 = !{i64 15495}
!684 = !{i64 15502}
!685 = !{i64 15523}
!686 = !{i64 15530}
!687 = !{i64 15551}
!688 = !{i64 15558}
!689 = !{i64 15580}
!690 = !{i64 15600}
