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
@ready = local_unnamed_addr global i32 0
@cond = global i32 0
@data = local_unnamed_addr global i32 0
@atomic_counter = local_unnamed_addr global i32 0
@global_var_5004 = constant [21 x i8] c"Value: %d, Name: %s\0A\00"
@global_var_5019 = constant [5 x i8] c"Test\00"
@global_var_501e = constant [6 x i8] c"%d,%d\00"
@global_var_5024 = constant [8 x i8] c"123,456\00"
@global_var_502e = constant [12 x i8] c"/etc/passwd\00"
@global_var_503a = constant [3 x i8] c"w+\00"
@global_var_503d = constant [19 x i8] c"BinBench Test Data\00"
@global_var_5050 = constant [23 x i8] c"/tmp/binbench_test.tmp\00"
@global_var_51b5 = constant [10 x i8] c"/bin/true\00"
@global_var_51bf = constant [10 x i8] c"HelloPipe\00"
@global_var_51c9 = constant [18 x i8] c"/tmp/binbench_shm\00"
@global_var_52ba = constant [10 x i8] c"Thread-%d\00"
@0 = external global i32
@global_var_8020 = local_unnamed_addr global i8 0
@global_var_3e8 = global i32 2
@1 = internal constant [2 x i8] c"r\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i64 0, i64 0)
@3 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\87\E5\87\86\E5\BA\93\E5\87\BD\E6\95\B0\E8\B0\83\E7\94\A8 ===\00"
@global_var_5390 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @3, i64 0, i64 0)
@4 = internal constant [27 x i8] c"LIB-L1-01: %d (\E6\9C\9F\E6\9C\9B: 8)\0A\00"
@global_var_5067 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @4, i64 0, i64 0)
@5 = internal constant [27 x i8] c"LIB-L1-02: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_5082 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @5, i64 0, i64 0)
@6 = internal constant [28 x i8] c"LIB-L1-03: %d (\E6\9C\9F\E6\9C\9B: 12)\0A\00"
@global_var_509d = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @6, i64 0, i64 0)
@7 = internal constant [28 x i8] c"LIB-L1-04: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_50b9 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @7, i64 0, i64 0)
@8 = internal constant [28 x i8] c"LIB-L1-05: %d (\E6\9C\9F\E6\9C\9B: -1)\0A\00"
@global_var_50d5 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i64 0, i64 0)
@9 = internal constant [28 x i8] c"LIB-L1-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_50f1 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i64 0, i64 0)
@10 = internal constant [29 x i8] c"LIB-L1-07: %d (\E6\9C\9F\E6\9C\9B: 579)\0A\00"
@global_var_510d = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"LIB-L1-08: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_512a = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [28 x i8] c"LIB-L1-09: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_5146 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @12, i64 0, i64 0)
@13 = internal constant [28 x i8] c"LIB-L1-10: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_5162 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @13, i64 0, i64 0)
@14 = internal constant [27 x i8] c"LIB-L1-11: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_517e = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @14, i64 0, i64 0)
@15 = internal constant [28 x i8] c"LIB-L1-12: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_5199 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @15, i64 0, i64 0)
@global_var_3b6 = global i32 909442336
@global_var_1000 = global i32 0
@global_var_7d0 = global i32 16
@16 = internal constant [27 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\B3\BB\E7\BB\9F\E8\B0\83\E7\94\A8 ===\00"
@global_var_51db = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @16, i64 0, i64 0)
@17 = internal constant [28 x i8] c"SYS-L3-01: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_51f6 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i64 0, i64 0)
@18 = internal constant [28 x i8] c"SYS-L3-02: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_5212 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @18, i64 0, i64 0)
@19 = internal constant [28 x i8] c"SYS-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_522e = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @19, i64 0, i64 0)
@20 = internal constant [28 x i8] c"SYS-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_524a = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @20, i64 0, i64 0)
@21 = internal constant [28 x i8] c"SYS-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_5266 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @21, i64 0, i64 0)
@22 = internal constant [28 x i8] c"SYS-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_5282 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @22, i64 0, i64 0)
@23 = internal constant [28 x i8] c"SYS-L3-07: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_529e = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @23, i64 0, i64 0)
@24 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\BA\BF\E7\A8\8B\E4\B8\8E\E5\B9\B6\E5\8F\91 ===\00"
@global_var_52c4 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @24, i64 0, i64 0)
@25 = internal constant [28 x i8] c"THR-L3-01: %d (\E6\9C\9F\E6\9C\9B: 49)\0A\00"
@global_var_52e2 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @25, i64 0, i64 0)
@26 = internal constant [29 x i8] c"THR-L3-02: %d (\E6\9C\9F\E6\9C\9B: 465)\0A\00"
@global_var_52fe = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @26, i64 0, i64 0)
@27 = internal constant [28 x i8] c"THR-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_531b = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @27, i64 0, i64 0)
@28 = internal constant [28 x i8] c"THR-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_5337 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @28, i64 0, i64 0)
@29 = internal constant [28 x i8] c"THR-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_5353 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @29, i64 0, i64 0)
@30 = internal constant [28 x i8] c"THR-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_536f = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @30, i64 0, i64 0)
@global_var_502c = constant [2 x i8] c"r\00"

define i64 @_init() local_unnamed_addr {
dec_label_pc_2000:
  %rax.0.reg2mem = alloca i64, !insn.addr !0
  %0 = load i64, i64* inttoptr (i64 32744 to i64*), align 8, !insn.addr !1
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

define void @function_23c0(i64* %d) local_unnamed_addr {
dec_label_pc_23c0:
  call void @__cxa_finalize(i64* %d), !insn.addr !6
  ret void, !insn.addr !6
}

define i32 @function_23d0(i8* %s, i32 %n, i32 %flag, i32 %slen, i8* %format, ...) local_unnamed_addr {
dec_label_pc_23d0:
  %0 = call i32 (i8*, i32, i32, i32, i8*, ...) @__snprintf_chk(i8* %s, i32 %n, i32 %flag, i32 %slen, i8* %format), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @function_23e0(i32 %sig) local_unnamed_addr {
dec_label_pc_23e0:
  %0 = call i32 @raise(i32 %sig), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define void @function_23f0(i64* %ptr) local_unnamed_addr {
dec_label_pc_23f0:
  call void @free(i64* %ptr), !insn.addr !9
  ret void, !insn.addr !9
}

define i32* @function_2400() local_unnamed_addr {
dec_label_pc_2400:
  %0 = call i32* @__errno_location(), !insn.addr !10
  ret i32* %0, !insn.addr !10
}

define i32 @function_2410(i8* %name) local_unnamed_addr {
dec_label_pc_2410:
  %0 = call i32 @unlink(i8* %name), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i8* @function_2420(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_2420:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !12
  ret i8* %0, !insn.addr !12
}

define void @function_2430(i32 %status) local_unnamed_addr {
dec_label_pc_2430:
  call void @_exit(i32 %status), !insn.addr !13
  ret void, !insn.addr !13
}

define i32 @function_2440(i8* %s) local_unnamed_addr {
dec_label_pc_2440:
  %0 = call i32 @puts(i8* %s), !insn.addr !14
  ret i32 %0, !insn.addr !14
}

define i32 @function_2450(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_2450:
  %0 = call i32 @fread(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define i32 @function_2460(i32 %fd, i32 %level, i32 %optname, i64* %optval, i32 %optlen) local_unnamed_addr {
dec_label_pc_2460:
  %0 = call i32 @setsockopt(i32 %fd, i32 %level, i32 %optname, i64* %optval, i32 %optlen), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i32 @function_2470(i64* %shmaddr) local_unnamed_addr {
dec_label_pc_2470:
  %0 = call i32 @shmdt(i64* %shmaddr), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i32 @function_2480(i32 %fd, i64* %buf, i32 %n) local_unnamed_addr {
dec_label_pc_2480:
  %0 = call i32 @write(i32 %fd, i64* %buf, i32 %n), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define i32 @function_2490(i64* %cond, i64* %mutex) local_unnamed_addr {
dec_label_pc_2490:
  %0 = call i32 @pthread_cond_wait(i64* %cond, i64* %mutex), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @function_24a0(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_24a0:
  %0 = call i32 @fclose(%_IO_FILE* %stream), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i8* @function_24b0(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_24b0:
  %0 = call i8* @stpcpy(i8* %dest, i8* %src), !insn.addr !21
  ret i8* %0, !insn.addr !21
}

define i32 @function_24c0(i8* %s) local_unnamed_addr {
dec_label_pc_24c0:
  %0 = call i32 @strlen(i8* %s), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define void @function_24d0() local_unnamed_addr {
dec_label_pc_24d0:
  call void @__stack_chk_fail(), !insn.addr !23
  ret void, !insn.addr !23
}

define i8* @function_24e0(i8* %s, i32 %c) local_unnamed_addr {
dec_label_pc_24e0:
  %0 = call i8* @strchr(i8* %s, i32 %c), !insn.addr !24
  ret i8* %0, !insn.addr !24
}

define void @function_24f0(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_24f0:
  call void @rewind(%_IO_FILE* %stream), !insn.addr !25
  ret void, !insn.addr !25
}

define i64* @function_2500(i64* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_2500:
  %0 = call i64* @memset(i64* %s, i32 %c, i32 %n), !insn.addr !26
  ret i64* %0, !insn.addr !26
}

define i32 @function_2510(i32 %seconds) local_unnamed_addr {
dec_label_pc_2510:
  %0 = call i32 @alarm(i32 %seconds), !insn.addr !27
  ret i32 %0, !insn.addr !27
}

define i32 @function_2520(i32 %fd) local_unnamed_addr {
dec_label_pc_2520:
  %0 = call i32 @close(i32 %fd), !insn.addr !28
  ret i32 %0, !insn.addr !28
}

define i32 @function_2530([2 x i32] %pipedes) local_unnamed_addr {
dec_label_pc_2530:
  %0 = call i32 @pipe([2 x i32] %pipedes), !insn.addr !29
  ret i32 %0, !insn.addr !29
}

define i32 @function_2540(i32 %fd, i64* %buf, i32 %nbytes) local_unnamed_addr {
dec_label_pc_2540:
  %0 = call i32 @read(i32 %fd, i64* %buf, i32 %nbytes), !insn.addr !30
  ret i32 %0, !insn.addr !30
}

define i32 @function_2550(i64* %s1, i64* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_2550:
  %0 = call i32 @memcmp(i64* %s1, i64* %s2, i32 %n), !insn.addr !31
  ret i32 %0, !insn.addr !31
}

define i32 @function_2560(i64* %cond) local_unnamed_addr {
dec_label_pc_2560:
  %0 = call i32 @pthread_cond_signal(i64* %cond), !insn.addr !32
  ret i32 %0, !insn.addr !32
}

define i32 @function_2570(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_2570:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !33
  ret i32 %0, !insn.addr !33
}

define void (i32)* @function_2580(i32 %sig, void (i32)* %handler) local_unnamed_addr {
dec_label_pc_2580:
  %0 = call void (i32)* @signal(i32 %sig, void (i32)* %handler), !insn.addr !34
  ret void (i32)* %0, !insn.addr !34
}

define i32 @function_2590(i32 %sysno, ...) local_unnamed_addr {
dec_label_pc_2590:
  %0 = call i32 (i32, ...) @syscall(i32 %sysno), !insn.addr !35
  ret i32 %0, !insn.addr !35
}

define i32 @function_25a0(i8* %file, %stat* %buf) local_unnamed_addr {
dec_label_pc_25a0:
  %0 = call i32 @stat(i8* %file, %stat* %buf), !insn.addr !36
  ret i32 %0, !insn.addr !36
}

define i64* @function_25b0(i64* %dest, i64* %src, i32 %n) local_unnamed_addr {
dec_label_pc_25b0:
  %0 = call i64* @memcpy(i64* %dest, i64* %src, i32 %n), !insn.addr !37
  ret i64* %0, !insn.addr !37
}

define i32 @function_25c0(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_25c0:
  %0 = call i32 @fileno(%_IO_FILE* %stream), !insn.addr !38
  ret i32 %0, !insn.addr !38
}

define i32 @function_25d0(i64* %mutex) local_unnamed_addr {
dec_label_pc_25d0:
  %0 = call i32 @pthread_mutex_unlock(i64* %mutex), !insn.addr !39
  ret i32 %0, !insn.addr !39
}

define i64* @function_25e0(i32 %size) local_unnamed_addr {
dec_label_pc_25e0:
  %0 = call i64* @malloc(i32 %size), !insn.addr !40
  ret i64* %0, !insn.addr !40
}

define i32 @function_25f0(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_25f0:
  %0 = call i32 (i8*, i8*, ...) @sscanf(i8* %s, i8* %format), !insn.addr !41
  ret i32 %0, !insn.addr !41
}

define i32 @function_2600(i32 %fd, i32 %n) local_unnamed_addr {
dec_label_pc_2600:
  %0 = call i32 @listen(i32 %fd, i32 %n), !insn.addr !42
  ret i32 %0, !insn.addr !42
}

define i32 @function_2610(i32 %flag, i8* %format, ...) local_unnamed_addr {
dec_label_pc_2610:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 %flag, i8* %format), !insn.addr !43
  ret i32 %0, !insn.addr !43
}

define i32 @function_2620(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_2620:
  %0 = call i32 @bind(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !44
  ret i32 %0, !insn.addr !44
}

define i32 @function_2630(i32* %newthread, i64* %attr, i64* (i64*)* %start_routine, i64* %arg) local_unnamed_addr {
dec_label_pc_2630:
  %0 = call i32 @pthread_create(i32* %newthread, i64* %attr, i64* (i64*)* %start_routine, i64* %arg), !insn.addr !45
  ret i32 %0, !insn.addr !45
}

define i32 @function_2640(i32 %pid, i32* %stat_loc, i32 %options) local_unnamed_addr {
dec_label_pc_2640:
  %0 = call i32 @waitpid(i32 %pid, i32* %stat_loc, i32 %options), !insn.addr !46
  ret i32 %0, !insn.addr !46
}

define i32 @function_2650(i8* %file, i32 %oflag, ...) local_unnamed_addr {
dec_label_pc_2650:
  %0 = call i32 (i8*, i32, ...) @open(i8* %file, i32 %oflag), !insn.addr !47
  ret i32 %0, !insn.addr !47
}

define i32 @function_2660(i32 %shmid, i32 %cmd, %shmid_ds* %buf) local_unnamed_addr {
dec_label_pc_2660:
  %0 = call i32 @shmctl(i32 %shmid, i32 %cmd, %shmid_ds* %buf), !insn.addr !48
  ret i32 %0, !insn.addr !48
}

define %_IO_FILE* @function_2670(i8* %filename, i8* %modes) local_unnamed_addr {
dec_label_pc_2670:
  %0 = call %_IO_FILE* @fopen(i8* %filename, i8* %modes), !insn.addr !49
  ret %_IO_FILE* %0, !insn.addr !49
}

define i64* @function_2680(i32 %shmid, i64* %shmaddr, i32 %shmflg) local_unnamed_addr {
dec_label_pc_2680:
  %0 = call i64* @shmat(i32 %shmid, i64* %shmaddr, i32 %shmflg), !insn.addr !50
  ret i64* %0, !insn.addr !50
}

define i32 @function_2690(i32 %key, i32 %size, i32 %shmflg) local_unnamed_addr {
dec_label_pc_2690:
  %0 = call i32 @shmget(i32 %key, i32 %size, i32 %shmflg), !insn.addr !51
  ret i32 %0, !insn.addr !51
}

define i32 @function_26a0(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_26a0:
  %0 = call i32 @fwrite(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !52
  ret i32 %0, !insn.addr !52
}

define i32 @function_26b0(i8* %pathname, i32 %proj_id) local_unnamed_addr {
dec_label_pc_26b0:
  %0 = call i32 @ftok(i8* %pathname, i32 %proj_id), !insn.addr !53
  ret i32 %0, !insn.addr !53
}

define i32 @function_26c0(i32 %th, i64** %thread_return) local_unnamed_addr {
dec_label_pc_26c0:
  %0 = call i32 @pthread_join(i32 %th, i64** %thread_return), !insn.addr !54
  ret i32 %0, !insn.addr !54
}

define i32 @function_26d0(i8* %path, i8* %arg, ...) local_unnamed_addr {
dec_label_pc_26d0:
  %0 = call i32 (i8*, i8*, ...) @execl(i8* %path, i8* %arg), !insn.addr !55
  ret i32 %0, !insn.addr !55
}

define i32 @function_26e0(i32 %th) local_unnamed_addr {
dec_label_pc_26e0:
  %0 = call i32 @pthread_cancel(i32 %th), !insn.addr !56
  ret i32 %0, !insn.addr !56
}

define i32 @function_26f0(i32 %seconds) local_unnamed_addr {
dec_label_pc_26f0:
  %0 = call i32 @sleep(i32 %seconds), !insn.addr !57
  ret i32 %0, !insn.addr !57
}

define i32 @function_2700(i64 %stat_loc) local_unnamed_addr {
dec_label_pc_2700:
  %0 = call i32 @wait(i64 %stat_loc), !insn.addr !58
  ret i32 %0, !insn.addr !58
}

define i32 @function_2710() local_unnamed_addr {
dec_label_pc_2710:
  %0 = call i32 @fork(), !insn.addr !59
  ret i32 %0, !insn.addr !59
}

define i8* @function_2720(i8* %haystack, i8* %needle) local_unnamed_addr {
dec_label_pc_2720:
  %0 = call i8* @strstr(i8* %haystack, i8* %needle), !insn.addr !60
  ret i8* %0, !insn.addr !60
}

define i32 @function_2730(i64* %mutex) local_unnamed_addr {
dec_label_pc_2730:
  %0 = call i32 @pthread_mutex_lock(i64* %mutex), !insn.addr !61
  ret i32 %0, !insn.addr !61
}

define i32 @function_2740(i32 %useconds) local_unnamed_addr {
dec_label_pc_2740:
  %0 = call i32 @usleep(i32 %useconds), !insn.addr !62
  ret i32 %0, !insn.addr !62
}

define i32 @function_2750(i32 %domain, i32 %type, i32 %protocol) local_unnamed_addr {
dec_label_pc_2750:
  %0 = call i32 @socket(i32 %domain, i32 %type, i32 %protocol), !insn.addr !63
  ret i32 %0, !insn.addr !63
}

define i32 @main() local_unnamed_addr {
dec_label_pc_2760:
  call void @test_standard_library_functions(), !insn.addr !64
  call void @test_system_calls(), !insn.addr !65
  call void @test_thread_concurrency(), !insn.addr !66
  ret i32 xor (i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !67
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_2790:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !68
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !68
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !68
  %3 = call i32 @__libc_start_main(i64 10080, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !68
  %4 = call i64 @__asm_hlt(), !insn.addr !69
  unreachable, !insn.addr !69
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_27c0:
  ret i64 32784, !insn.addr !70
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_27f0:
  ret i64 0, !insn.addr !71
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_2830:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* @global_var_8020, align 1, !insn.addr !72
  %3 = icmp eq i8 %2, 0, !insn.addr !72
  %4 = icmp eq i1 %3, false, !insn.addr !73
  br i1 %4, label %dec_label_pc_2868, label %dec_label_pc_283d, !insn.addr !73

dec_label_pc_283d:                                ; preds = %dec_label_pc_2830
  %5 = load i64, i64* inttoptr (i64 32760 to i64*), align 8, !insn.addr !74
  %6 = icmp eq i64 %5, 0, !insn.addr !74
  br i1 %6, label %dec_label_pc_2857, label %dec_label_pc_284b, !insn.addr !75

dec_label_pc_284b:                                ; preds = %dec_label_pc_283d
  %7 = load i64, i64* inttoptr (i64 32776 to i64*), align 8, !insn.addr !76
  %8 = inttoptr i64 %7 to i64*, !insn.addr !77
  call void @__cxa_finalize(i64* %8), !insn.addr !77
  br label %dec_label_pc_2857, !insn.addr !77

dec_label_pc_2857:                                ; preds = %dec_label_pc_284b, %dec_label_pc_283d
  %9 = call i64 @deregister_tm_clones(), !insn.addr !78
  store i8 1, i8* @global_var_8020, align 1, !insn.addr !79
  ret i64 %9, !insn.addr !80

dec_label_pc_2868:                                ; preds = %dec_label_pc_2830
  ret i64 %1, !insn.addr !81

; uselistorder directives
  uselistorder i8* @global_var_8020, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_2870:
  %0 = call i64 @register_tm_clones(), !insn.addr !82
  ret i64 %0, !insn.addr !82
}

define void @signal_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_2880:
  store i32 1, i32* @signal_received, align 4, !insn.addr !83
  store i32 %sig, i32* @signal_number, align 4, !insn.addr !84
  ret void, !insn.addr !85
}

define i8* @thread_sum(i8* %arg) local_unnamed_addr {
dec_label_pc_28a0:
  %rdx.0.reg2mem = alloca i64, !insn.addr !86
  %rax.0.in.reg2mem = alloca i64, !insn.addr !86
  %0 = ptrtoint i8* %arg to i64
  %1 = trunc i64 %0 to i32
  %2 = add i64 %0, 4, !insn.addr !87
  %3 = inttoptr i64 %2 to i32*, !insn.addr !87
  %4 = load i32, i32* %3, align 4, !insn.addr !87
  %5 = add i64 %0, 8, !insn.addr !88
  %6 = inttoptr i64 %5 to i32*, !insn.addr !88
  store i32 0, i32* %6, align 4, !insn.addr !88
  %7 = icmp ult i32 %4, %1, !insn.addr !89
  br i1 %7, label %dec_label_pc_28cc, label %dec_label_pc_28b4, !insn.addr !89

dec_label_pc_28b4:                                ; preds = %dec_label_pc_28a0
  %8 = add i32 %4, 1
  store i64 %0, i64* %rax.0.in.reg2mem, !insn.addr !90
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !90
  br label %dec_label_pc_28c0, !insn.addr !90

dec_label_pc_28c0:                                ; preds = %dec_label_pc_28c0, %dec_label_pc_28b4
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.in.reload = load i64, i64* %rax.0.in.reg2mem
  %rax.0 = and i64 %rax.0.in.reload, 4294967295
  %9 = add nuw nsw i64 %rdx.0.reload, %rax.0, !insn.addr !91
  %10 = and i64 %9, 4294967295, !insn.addr !91
  %11 = add nuw nsw i64 %rax.0, 1, !insn.addr !92
  %12 = trunc i64 %11 to i32, !insn.addr !93
  %13 = icmp eq i32 %8, %12, !insn.addr !93
  %14 = icmp eq i1 %13, false, !insn.addr !94
  store i64 %11, i64* %rax.0.in.reg2mem, !insn.addr !94
  store i64 %10, i64* %rdx.0.reg2mem, !insn.addr !94
  br i1 %14, label %dec_label_pc_28c0, label %dec_label_pc_28c9, !insn.addr !94

dec_label_pc_28c9:                                ; preds = %dec_label_pc_28c0
  %15 = trunc i64 %9 to i32, !insn.addr !95
  store i32 %15, i32* %6, align 4, !insn.addr !95
  br label %dec_label_pc_28cc, !insn.addr !95

dec_label_pc_28cc:                                ; preds = %dec_label_pc_28c9, %dec_label_pc_28a0
  ret i8* null, !insn.addr !96

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i64 %0, { 0, 3, 2, 1 }
  uselistorder i64* %rax.0.in.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
}

define i8* @thread_compute(i8* %arg) local_unnamed_addr {
dec_label_pc_28d0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = mul i32 %2, %2, !insn.addr !97
  %4 = call i64* @malloc(i32 4), !insn.addr !98
  %5 = bitcast i64* %4 to i32*, !insn.addr !99
  store i32 %3, i32* %5, align 4, !insn.addr !99
  %6 = bitcast i64* %4 to i8*, !insn.addr !100
  ret i8* %6, !insn.addr !100

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i8* @thread_increment(i8* %arg) local_unnamed_addr {
dec_label_pc_28f0:
  %0 = alloca i64
  %rbx.0.reg2mem = alloca i64, !insn.addr !101
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp slt i32 %2, 1
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !102
  br i1 %3, label %dec_label_pc_2941, label %dec_label_pc_2910, !insn.addr !102

dec_label_pc_2910:                                ; preds = %dec_label_pc_28f0, %dec_label_pc_2910
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %4 = add nuw nsw i64 %rbx.0.reload, 1, !insn.addr !103
  %5 = and i64 %4, 4294967295, !insn.addr !103
  %6 = call i32 @pthread_mutex_lock(i64* bitcast (i32* @counter_mutex to i64*)), !insn.addr !104
  %7 = load i32, i32* @shared_counter, align 4, !insn.addr !105
  %8 = add i32 %7, 1, !insn.addr !106
  store i32 %8, i32* @shared_counter, align 4, !insn.addr !107
  %9 = call i32 @pthread_mutex_unlock(i64* bitcast (i32* @counter_mutex to i64*)), !insn.addr !108
  %10 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !109
  %11 = trunc i64 %4 to i32, !insn.addr !110
  %12 = icmp eq i32 %2, %11, !insn.addr !110
  %13 = icmp eq i1 %12, false, !insn.addr !111
  store i64 %5, i64* %rbx.0.reg2mem, !insn.addr !111
  br i1 %13, label %dec_label_pc_2910, label %dec_label_pc_2941, !insn.addr !111

dec_label_pc_2941:                                ; preds = %dec_label_pc_2910, %dec_label_pc_28f0
  ret i8* null, !insn.addr !112

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_2910, { 1, 0 }
}

define i8* @consumer_thread(i8* %arg) local_unnamed_addr {
dec_label_pc_2950:
  %0 = call i32 @pthread_mutex_lock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !113
  %1 = load i32, i32* @ready, align 4, !insn.addr !114
  %2 = icmp eq i32 %1, 0, !insn.addr !115
  %3 = icmp eq i1 %2, false, !insn.addr !116
  br i1 %3, label %dec_label_pc_2995, label %dec_label_pc_2980, !insn.addr !116

dec_label_pc_2980:                                ; preds = %dec_label_pc_2950, %dec_label_pc_2980
  %4 = call i32 @pthread_cond_wait(i64* bitcast (i32* @cond to i64*), i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !117
  %5 = load i32, i32* @ready, align 4, !insn.addr !118
  %6 = icmp eq i32 %5, 0, !insn.addr !119
  br i1 %6, label %dec_label_pc_2980, label %dec_label_pc_2995, !insn.addr !120

dec_label_pc_2995:                                ; preds = %dec_label_pc_2980, %dec_label_pc_2950
  %7 = load i32, i32* @data, align 4, !insn.addr !121
  %8 = call i32 @pthread_mutex_unlock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !122
  %9 = call i64* @malloc(i32 4), !insn.addr !123
  %10 = bitcast i64* %9 to i32*, !insn.addr !124
  store i32 %7, i32* %10, align 4, !insn.addr !124
  %11 = bitcast i64* %9 to i8*, !insn.addr !125
  ret i8* %11, !insn.addr !125

; uselistorder directives
  uselistorder label %dec_label_pc_2980, { 1, 0 }
}

define i8* @producer_thread(i8* %arg) local_unnamed_addr {
dec_label_pc_29c0:
  %0 = call i32 @sleep(i32 1), !insn.addr !126
  %1 = call i32 @pthread_mutex_lock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !127
  store i32 42, i32* @data, align 4, !insn.addr !128
  store i32 1, i32* @ready, align 4, !insn.addr !129
  %2 = call i32 @pthread_cond_signal(i64* bitcast (i32* @cond to i64*)), !insn.addr !130
  %3 = call i32 @pthread_mutex_unlock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !131
  ret i8* null, !insn.addr !132

; uselistorder directives
  uselistorder i32 (i64*)* @pthread_mutex_unlock, { 2, 1, 0, 3 }
  uselistorder i64* bitcast (i32* @cond to i64*), { 1, 0 }
  uselistorder i32 (i64*)* @pthread_mutex_lock, { 2, 1, 0, 3 }
  uselistorder i64* bitcast (i32* @cond_mutex to i64*), { 2, 3, 0, 1, 4 }
}

define i8* @thread_atomic_increment(i8* %arg) local_unnamed_addr {
dec_label_pc_2a10:
  %0 = alloca i64
  %rdx.0.reg2mem = alloca i64, !insn.addr !133
  %.reg2mem = alloca i32, !insn.addr !133
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp slt i32 %2, 1
  br i1 %3, label %dec_label_pc_2a3f, label %dec_label_pc_2a20.preheader, !insn.addr !134

dec_label_pc_2a20.preheader:                      ; preds = %dec_label_pc_2a10
  %atomic_counter.promoted = load i32, i32* @atomic_counter, align 4
  store i32 %atomic_counter.promoted, i32* %.reg2mem
  store i64 0, i64* %rdx.0.reg2mem
  br label %dec_label_pc_2a20

dec_label_pc_2a20:                                ; preds = %dec_label_pc_2a20.preheader, %dec_label_pc_2a20
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %4 = add i32 %.reload, 1, !insn.addr !135
  %5 = trunc i64 %rdx.0.reload to i32
  %6 = add i32 %5, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !136
  %7 = icmp eq i32 %4, %5, !insn.addr !137
  %8 = select i1 %7, i32 %6, i32 %4, !insn.addr !137
  %9 = add nuw nsw i64 %rdx.0.reload, 1, !insn.addr !138
  %10 = and i64 %9, 4294967295, !insn.addr !138
  %11 = trunc i64 %9 to i32, !insn.addr !139
  %12 = icmp eq i32 %2, %11, !insn.addr !139
  %13 = icmp eq i1 %12, false, !insn.addr !140
  store i32 %8, i32* %.reg2mem, !insn.addr !140
  store i64 %10, i64* %rdx.0.reg2mem, !insn.addr !140
  br i1 %13, label %dec_label_pc_2a20, label %dec_label_pc_2a3f.loopexit, !insn.addr !140

dec_label_pc_2a3f.loopexit:                       ; preds = %dec_label_pc_2a20
  store i32 %8, i32* @atomic_counter, align 4
  br label %dec_label_pc_2a3f

dec_label_pc_2a3f:                                ; preds = %dec_label_pc_2a3f.loopexit, %dec_label_pc_2a10
  ret i8* null, !insn.addr !141

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
  uselistorder i32 %4, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_2a20, { 1, 0 }
}

define i8* @thread_atomic_load_store(i8* %arg) local_unnamed_addr {
dec_label_pc_2a50:
  %0 = load i32, i32* @atomic_counter, align 4
  %1 = add i32 %0, 100, !insn.addr !142
  store i32 %1, i32* @atomic_counter, align 4, !insn.addr !143
  ret i8* null, !insn.addr !144
}

define i8* @thread_tls_test(i8* %arg) local_unnamed_addr {
dec_label_pc_2a70:
  %0 = call i32 @__readfsdword(i64 -36), !insn.addr !145
  %1 = call i64 @__readfsqword(i64 0), !insn.addr !146
  %2 = add i32 %0, 50, !insn.addr !147
  %3 = add i64 %1, -32, !insn.addr !148
  call void @__writefsdword(i64 -36, i32 %2), !insn.addr !149
  %4 = inttoptr i64 %3 to i8*, !insn.addr !150
  %5 = call i8* @strncpy(i8* %4, i8* %arg, i32 31), !insn.addr !150
  %6 = call i64* @malloc(i32 8), !insn.addr !151
  %7 = ptrtoint i64* %6 to i64, !insn.addr !151
  %8 = bitcast i64* %6 to i32*, !insn.addr !152
  store i32 %0, i32* %8, align 4, !insn.addr !152
  %9 = add i64 %7, 4, !insn.addr !153
  %10 = inttoptr i64 %9 to i32*, !insn.addr !153
  store i32 %2, i32* %10, align 4, !insn.addr !153
  %11 = bitcast i64* %6 to i8*, !insn.addr !154
  ret i8* %11, !insn.addr !154
}

define i64 @param_strcpy(i64 %arg1) local_unnamed_addr {
dec_label_pc_2ac0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %arg1 to i8*, !insn.addr !155
  %3 = inttoptr i64 %1 to i8*, !insn.addr !155
  %4 = call i8* @stpcpy(i8* %2, i8* %3), !insn.addr !155
  %5 = ptrtoint i8* %4 to i64, !insn.addr !155
  %6 = sub i64 %5, %arg1, !insn.addr !156
  %7 = and i64 %6, 4294967295, !insn.addr !156
  ret i64 %7, !insn.addr !157
}

define i64 @call_strcpy() local_unnamed_addr {
dec_label_pc_2ae0:
  ret i64 8, !insn.addr !158
}

define i64 @param_strcmp() local_unnamed_addr {
dec_label_pc_2af0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %1 to i8*, !insn.addr !159
  %4 = inttoptr i64 %2 to i8*, !insn.addr !159
  %5 = call i32 @strcmp(i8* %3, i8* %4), !insn.addr !159
  %6 = icmp eq i32 %5, 0, !insn.addr !160
  %7 = icmp eq i1 %6, false, !insn.addr !161
  %8 = icmp slt i32 %5, 0, !insn.addr !162
  %9 = icmp eq i1 %8, false, !insn.addr !163
  %10 = icmp eq i1 %9, %7, !insn.addr !163
  %11 = select i1 %7, i64 4294967295, i64 0
  %12 = select i1 %10, i64 1, i64 %11, !insn.addr !163
  ret i64 %12, !insn.addr !164

; uselistorder directives
  uselistorder i1 %7, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i32 @call_strcmp() local_unnamed_addr {
dec_label_pc_2b20:
  ret i32 0, !insn.addr !165
}

define i64 @param_strlen() local_unnamed_addr {
dec_label_pc_2b30:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i8*, !insn.addr !166
  %3 = call i32 @strlen(i8* %2), !insn.addr !166
  %4 = sext i32 %3 to i64, !insn.addr !166
  ret i64 %4, !insn.addr !167
}

define i64 @call_strlen() local_unnamed_addr {
dec_label_pc_2b50:
  ret i64 12, !insn.addr !168
}

define i64 @param_memcpy(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2b60:
  %0 = inttoptr i64 %arg1 to i64*, !insn.addr !169
  %1 = inttoptr i64 %arg2 to i64*, !insn.addr !169
  %2 = trunc i64 %arg3 to i32, !insn.addr !169
  %3 = call i64* @memcpy(i64* %0, i64* %1, i32 %2), !insn.addr !169
  %4 = and i64 %arg3, 4294967295, !insn.addr !170
  ret i64 %4, !insn.addr !171
}

define i64 @call_memcpy() local_unnamed_addr {
dec_label_pc_2b80:
  ret i64 90, !insn.addr !172
}

define i64 @param_memcmp() local_unnamed_addr {
dec_label_pc_2b90:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = inttoptr i64 %1 to i64*, !insn.addr !173
  %5 = inttoptr i64 %2 to i64*, !insn.addr !173
  %6 = trunc i64 %3 to i32, !insn.addr !173
  %7 = call i32 @memcmp(i64* %4, i64* %5, i32 %6), !insn.addr !173
  %8 = icmp eq i32 %7, 0, !insn.addr !174
  %9 = icmp eq i1 %8, false, !insn.addr !175
  %10 = icmp slt i32 %7, 0, !insn.addr !176
  %11 = icmp eq i1 %10, false, !insn.addr !177
  %12 = icmp eq i1 %11, %9, !insn.addr !177
  %13 = select i1 %9, i64 4294967295, i64 0
  %14 = select i1 %12, i64 1, i64 %13, !insn.addr !177
  ret i64 %14, !insn.addr !178

; uselistorder directives
  uselistorder i1 %9, { 1, 0 }
  uselistorder i64* %0, { 2, 1, 0 }
}

define i32 @call_memcmp() local_unnamed_addr {
dec_label_pc_2bc0:
  %stack_var_-44 = alloca i64, align 8
  %stack_var_-56 = alloca i64, align 8
  %stack_var_-68 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !179
  store i64 8589934593, i64* %stack_var_-68, align 8, !insn.addr !180
  store i64 8589934593, i64* %stack_var_-56, align 8, !insn.addr !181
  store i64 8589934593, i64* %stack_var_-44, align 8, !insn.addr !182
  %1 = call i32 @memcmp(i64* nonnull %stack_var_-68, i64* nonnull %stack_var_-56, i32 12), !insn.addr !183
  %2 = call i32 @memcmp(i64* nonnull %stack_var_-68, i64* nonnull %stack_var_-44, i32 12), !insn.addr !184
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !185
  %4 = icmp eq i64 %0, %3, !insn.addr !185
  %5 = icmp eq i1 %4, false, !insn.addr !186
  br i1 %5, label %dec_label_pc_2c76, label %dec_label_pc_2c6f, !insn.addr !186

dec_label_pc_2c6f:                                ; preds = %dec_label_pc_2bc0
  %6 = icmp eq i32 %1, 0, !insn.addr !187
  %7 = icmp eq i1 %6, false, !insn.addr !188
  %8 = icmp eq i32 %2, 0, !insn.addr !189
  %9 = icmp eq i1 %8, false, !insn.addr !190
  %10 = icmp slt i32 %2, 0, !insn.addr !191
  %11 = icmp eq i1 %10, false, !insn.addr !192
  %12 = icmp eq i1 %11, %9, !insn.addr !192
  %13 = sext i1 %9 to i32, !insn.addr !193
  %14 = select i1 %12, i32 1, i32 %13, !insn.addr !192
  %15 = icmp slt i32 %1, 0, !insn.addr !194
  %16 = icmp eq i1 %15, false, !insn.addr !195
  %17 = icmp eq i1 %16, %7, !insn.addr !195
  %18 = sext i1 %7 to i32, !insn.addr !196
  %19 = select i1 %17, i32 1, i32 %18, !insn.addr !195
  %20 = add nsw i32 %14, %19, !insn.addr !197
  ret i32 %20, !insn.addr !198

dec_label_pc_2c76:                                ; preds = %dec_label_pc_2bc0
  call void @__stack_chk_fail(), !insn.addr !199
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !200

; uselistorder directives
  uselistorder i32 (i64*, i64*, i32)* @memcmp, { 1, 0, 2, 3 }
  uselistorder i64 8589934593, { 2, 1, 0 }
}

define i64 @param_printf(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2c80:
  %0 = and i64 %arg1, 4294967295, !insn.addr !201
  %1 = inttoptr i64 %arg2 to i8*, !insn.addr !202
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_5004, i64 0, i64 0), i64 %0, i8* %1), !insn.addr !202
  %3 = sext i32 %2 to i64, !insn.addr !202
  ret i64 %3, !insn.addr !202
}

define i64 @call_printf() local_unnamed_addr {
dec_label_pc_2ca0:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_5004, i64 0, i64 0), i64 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_5019, i64 0, i64 0)), !insn.addr !203
  %1 = sext i32 %0 to i64, !insn.addr !203
  ret i64 %1, !insn.addr !203
}

define i64 @param_scanf() local_unnamed_addr {
dec_label_pc_2cd0:
  %0 = alloca i64
  %1 = alloca i32
  %2 = load i64, i64* %0
  %3 = load i32, i32* %1
  %4 = load i32, i32* %1
  %5 = call i64 @__readfsqword(i64 40), !insn.addr !204
  %6 = inttoptr i64 %2 to i8*, !insn.addr !205
  %7 = call i32 (i8*, i8*, ...) @sscanf(i8* %6, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_501e, i64 0, i64 0)), !insn.addr !205
  %8 = call i64 @__readfsqword(i64 40), !insn.addr !206
  %9 = icmp eq i64 %5, %8, !insn.addr !206
  %10 = icmp eq i1 %9, false, !insn.addr !207
  br i1 %10, label %dec_label_pc_2d27, label %dec_label_pc_2d18, !insn.addr !207

dec_label_pc_2d18:                                ; preds = %dec_label_pc_2cd0
  %11 = icmp eq i32 %7, 2, !insn.addr !208
  %12 = icmp eq i1 %11, false, !insn.addr !209
  %13 = add i32 %4, %3
  %14 = zext i32 %13 to i64
  %storemerge = select i1 %12, i64 4294967295, i64 %14
  ret i64 %storemerge, !insn.addr !210

dec_label_pc_2d27:                                ; preds = %dec_label_pc_2cd0
  call void @__stack_chk_fail(), !insn.addr !211
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !212

; uselistorder directives
  uselistorder i32* %1, { 1, 0 }
}

define i64 @call_scanf() local_unnamed_addr {
dec_label_pc_2d30:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !213
  %4 = call i32 (i8*, i8*, ...) @sscanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_5024, i64 0, i64 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_501e, i64 0, i64 0)), !insn.addr !214
  %5 = call i64 @__readfsqword(i64 40), !insn.addr !215
  %6 = icmp eq i64 %3, %5, !insn.addr !215
  %7 = icmp eq i1 %6, false, !insn.addr !216
  br i1 %7, label %dec_label_pc_2d8f, label %dec_label_pc_2d7f, !insn.addr !216

dec_label_pc_2d7f:                                ; preds = %dec_label_pc_2d30
  %8 = icmp eq i32 %4, 2, !insn.addr !217
  %9 = icmp eq i1 %8, false, !insn.addr !218
  %10 = add i32 %2, %1
  %11 = zext i32 %10 to i64
  %storemerge = select i1 %9, i64 4294967295, i64 %11
  ret i64 %storemerge, !insn.addr !219

dec_label_pc_2d8f:                                ; preds = %dec_label_pc_2d30
  call void @__stack_chk_fail(), !insn.addr !220
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !221

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i64 @param_fopen_fclose() local_unnamed_addr {
dec_label_pc_2da0:
  %0 = alloca i64
  %r12.0.reg2mem = alloca i64, !insn.addr !222
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i8*, !insn.addr !223
  %3 = call %_IO_FILE* @fopen(i8* %2, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_502c, i64 0, i64 0)), !insn.addr !223
  %4 = icmp eq %_IO_FILE* %3, null, !insn.addr !224
  store i64 4294967295, i64* %r12.0.reg2mem, !insn.addr !225
  br i1 %4, label %dec_label_pc_2dd2, label %dec_label_pc_2dbc, !insn.addr !225

dec_label_pc_2dbc:                                ; preds = %dec_label_pc_2da0
  %5 = call i32 @fileno(%_IO_FILE* nonnull %3), !insn.addr !226
  %6 = zext i32 %5 to i64, !insn.addr !227
  %7 = call i32 @fclose(%_IO_FILE* nonnull %3), !insn.addr !228
  store i64 %6, i64* %r12.0.reg2mem, !insn.addr !228
  br label %dec_label_pc_2dd2, !insn.addr !228

dec_label_pc_2dd2:                                ; preds = %dec_label_pc_2da0, %dec_label_pc_2dbc
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  ret i64 %r12.0.reload, !insn.addr !229

; uselistorder directives
  uselistorder i64* %r12.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2dd2, { 1, 0 }
}

define i64 @call_fopen_fclose() local_unnamed_addr {
dec_label_pc_2df0:
  %storemerge.reg2mem = alloca i64, !insn.addr !230
  %0 = call %_IO_FILE* @fopen(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_502e, i64 0, i64 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_502c, i64 0, i64 0)), !insn.addr !231
  %1 = icmp eq %_IO_FILE* %0, null, !insn.addr !232
  br i1 %1, label %dec_label_pc_2e40, label %dec_label_pc_2e12, !insn.addr !233

dec_label_pc_2e12:                                ; preds = %dec_label_pc_2df0
  %2 = call i32 @fileno(%_IO_FILE* nonnull %0), !insn.addr !234
  %3 = call i32 @fclose(%_IO_FILE* nonnull %0), !insn.addr !235
  %4 = icmp slt i32 %2, 0, !insn.addr !236
  store i64 42, i64* %storemerge.reg2mem, !insn.addr !237
  br i1 %4, label %dec_label_pc_2e40, label %dec_label_pc_2e30, !insn.addr !237

dec_label_pc_2e30:                                ; preds = %dec_label_pc_2e40, %dec_label_pc_2e12
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !238

dec_label_pc_2e40:                                ; preds = %dec_label_pc_2e12, %dec_label_pc_2df0
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !239
  br label %dec_label_pc_2e30, !insn.addr !239

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 2, 0, 1 }
}

define i32 @param_fread_fwrite(i8* %tmpfile) local_unnamed_addr {
dec_label_pc_2e50:
  %0 = alloca i64
  %1 = alloca i16
  %2 = alloca i8
  %rax.0.reg2mem = alloca i32, !insn.addr !240
  %3 = load i8, i8* %2
  %4 = load i16, i16* %1
  %5 = load i64, i64* %0
  %stack_var_-72 = alloca i64, align 8
  %6 = call i64 @__readfsqword(i64 40), !insn.addr !241
  %7 = call %_IO_FILE* @fopen(i8* %tmpfile, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_503a, i64 0, i64 0)), !insn.addr !242
  %8 = icmp eq %_IO_FILE* %7, null, !insn.addr !243
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !244
  br i1 %8, label %dec_label_pc_2f0b, label %dec_label_pc_2e84, !insn.addr !244

dec_label_pc_2e84:                                ; preds = %dec_label_pc_2e50
  %9 = call i32 @fwrite(i64* bitcast ([19 x i8]* @global_var_503d to i64*), i32 1, i32 18, %_IO_FILE* nonnull %7), !insn.addr !245
  %10 = icmp eq i32 %9, 18, !insn.addr !246
  %11 = icmp eq i1 %10, false, !insn.addr !247
  br i1 %11, label %dec_label_pc_2f40, label %dec_label_pc_2ead, !insn.addr !247

dec_label_pc_2ead:                                ; preds = %dec_label_pc_2e84
  %12 = ptrtoint i64* %stack_var_-72 to i64, !insn.addr !248
  call void @rewind(%_IO_FILE* nonnull %7), !insn.addr !249
  %13 = call i32 @fread(i64* nonnull %stack_var_-72, i32 1, i32 18, %_IO_FILE* nonnull %7), !insn.addr !250
  %14 = sext i32 %13 to i64, !insn.addr !250
  %15 = add i64 %14, %12, !insn.addr !251
  %16 = inttoptr i64 %15 to i8*, !insn.addr !251
  store i8 0, i8* %16, align 1, !insn.addr !251
  %17 = call i32 @fclose(%_IO_FILE* nonnull %7), !insn.addr !252
  %18 = call i32 @unlink(i8* %tmpfile), !insn.addr !253
  %19 = icmp eq i32 %13, 18, !insn.addr !254
  %20 = icmp eq i1 %19, false, !insn.addr !255
  br i1 %20, label %dec_label_pc_2f06, label %dec_label_pc_2ee4, !insn.addr !255

dec_label_pc_2ee4:                                ; preds = %dec_label_pc_2ead
  %21 = load i64, i64* %stack_var_-72, align 8, !insn.addr !256
  %22 = icmp ne i64 %5, 7008762604619650080
  %23 = icmp ne i64 %21, 7521977183824144706
  %.not = or i1 %22, %23
  %24 = icmp eq i16 %4, 24948, !insn.addr !257
  %25 = icmp eq i1 %24, false, !insn.addr !258
  %or.cond = or i1 %25, %.not
  %or.cond.not = icmp ne i1 %or.cond, true
  %26 = icmp eq i8 %3, 0, !insn.addr !259
  %or.cond2 = icmp eq i1 %26, %or.cond.not
  store i32 42, i32* %rax.0.reg2mem, !insn.addr !260
  br i1 %or.cond2, label %dec_label_pc_2f0b, label %dec_label_pc_2f06, !insn.addr !260

dec_label_pc_2f06:                                ; preds = %dec_label_pc_2ee4, %dec_label_pc_2ead
  store i32 -3, i32* %rax.0.reg2mem, !insn.addr !261
  br label %dec_label_pc_2f0b, !insn.addr !261

dec_label_pc_2f0b:                                ; preds = %dec_label_pc_2e50, %dec_label_pc_2ee4, %dec_label_pc_2f40, %dec_label_pc_2f06
  %27 = call i64 @__readfsqword(i64 40), !insn.addr !262
  %28 = icmp eq i64 %6, %27, !insn.addr !262
  %29 = icmp eq i1 %28, false, !insn.addr !263
  br i1 %29, label %dec_label_pc_2f51, label %dec_label_pc_2f1b, !insn.addr !263

dec_label_pc_2f1b:                                ; preds = %dec_label_pc_2f0b
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !264

dec_label_pc_2f40:                                ; preds = %dec_label_pc_2e84
  %30 = call i32 @fclose(%_IO_FILE* nonnull %7), !insn.addr !265
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !266
  br label %dec_label_pc_2f0b, !insn.addr !266

dec_label_pc_2f51:                                ; preds = %dec_label_pc_2f0b
  call void @__stack_chk_fail(), !insn.addr !267
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !268

; uselistorder directives
  uselistorder %_IO_FILE* %7, { 2, 0, 1, 3, 4, 5 }
  uselistorder i64* %stack_var_-72, { 1, 0, 2 }
  uselistorder i32* %rax.0.reg2mem, { 4, 0, 3, 2, 1 }
  uselistorder i32 18, { 0, 2, 1, 3 }
  uselistorder label %dec_label_pc_2f0b, { 2, 3, 1, 0 }
}

define i64 @call_fread_fwrite() local_unnamed_addr {
dec_label_pc_2f60:
  %0 = call i32 @param_fread_fwrite(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_5050, i64 0, i64 0)), !insn.addr !269
  %1 = sext i32 %0 to i64, !insn.addr !269
  ret i64 %1, !insn.addr !269
}

define i64 @param_malloc_free(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_2f70:
  %r12.0.reg2mem = alloca i64, !insn.addr !270
  %rdx.0.reg2mem = alloca i64, !insn.addr !270
  %rcx.0.reg2mem = alloca i64, !insn.addr !270
  %0 = mul i64 %arg1, 4, !insn.addr !271
  %1 = trunc i64 %0 to i32, !insn.addr !272
  %2 = call i64* @malloc(i32 %1), !insn.addr !272
  %3 = icmp eq i64* %2, null, !insn.addr !273
  store i64 4294967295, i64* %r12.0.reg2mem, !insn.addr !274
  br i1 %3, label %dec_label_pc_2fc3, label %dec_label_pc_2f90, !insn.addr !274

dec_label_pc_2f90:                                ; preds = %dec_label_pc_2f70
  %4 = ptrtoint i64* %2 to i64, !insn.addr !272
  %5 = icmp eq i64 %arg1, 0, !insn.addr !275
  %.pre = add i64 %0, %4
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !276
  store i64 %4, i64* %rdx.0.reg2mem, !insn.addr !276
  br i1 %5, label %dec_label_pc_2fb6, label %dec_label_pc_2fa8, !insn.addr !276

dec_label_pc_2fa8:                                ; preds = %dec_label_pc_2f90, %dec_label_pc_2fa8
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %6 = trunc i64 %rcx.0.reload to i32, !insn.addr !277
  %7 = inttoptr i64 %rdx.0.reload to i32*, !insn.addr !277
  store i32 %6, i32* %7, align 4, !insn.addr !277
  %8 = add i64 %rdx.0.reload, 4, !insn.addr !278
  %9 = add nuw nsw i64 %rcx.0.reload, 10, !insn.addr !279
  %10 = and i64 %9, 4294967295, !insn.addr !279
  %11 = icmp eq i64 %8, %.pre, !insn.addr !280
  %12 = icmp eq i1 %11, false, !insn.addr !281
  store i64 %10, i64* %rcx.0.reg2mem, !insn.addr !281
  store i64 %8, i64* %rdx.0.reg2mem, !insn.addr !281
  br i1 %12, label %dec_label_pc_2fa8, label %dec_label_pc_2fb6, !insn.addr !281

dec_label_pc_2fb6:                                ; preds = %dec_label_pc_2fa8, %dec_label_pc_2f90
  %13 = bitcast i64* %2 to i32*, !insn.addr !282
  %14 = load i32, i32* %13, align 4, !insn.addr !282
  %15 = add i64 %.pre, -4, !insn.addr !283
  %16 = inttoptr i64 %15 to i32*, !insn.addr !283
  %17 = load i32, i32* %16, align 4, !insn.addr !283
  %18 = add i32 %17, %14, !insn.addr !283
  %19 = zext i32 %18 to i64, !insn.addr !283
  call void @free(i64* nonnull %2), !insn.addr !284
  store i64 %19, i64* %r12.0.reg2mem, !insn.addr !284
  br label %dec_label_pc_2fc3, !insn.addr !284

dec_label_pc_2fc3:                                ; preds = %dec_label_pc_2f70, %dec_label_pc_2fb6
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  ret i64 %r12.0.reload, !insn.addr !285

; uselistorder directives
  uselistorder i64 %rcx.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64* %2, { 0, 1, 3, 2 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64* %rcx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r12.0.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_2fc3, { 1, 0 }
  uselistorder label %dec_label_pc_2fa8, { 1, 0 }
}

define i64 @call_malloc_free(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2fe0:
  %r12.0.reg2mem = alloca i64, !insn.addr !286
  %rdx.0.reg2mem = alloca i64, !insn.addr !286
  %rcx.0.reg2mem = alloca i64, !insn.addr !286
  %0 = call i64* @malloc(i32 40), !insn.addr !287
  %1 = ptrtoint i64* %0 to i64, !insn.addr !287
  %2 = icmp eq i64* %0, null, !insn.addr !288
  store i64 %1, i64* %rcx.0.reg2mem, !insn.addr !289
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !289
  store i64 4294967295, i64* %r12.0.reg2mem, !insn.addr !289
  br i1 %2, label %dec_label_pc_301a, label %dec_label_pc_3000, !insn.addr !289

dec_label_pc_3000:                                ; preds = %dec_label_pc_2fe0, %dec_label_pc_3000
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %3 = trunc i64 %rdx.0.reload to i32, !insn.addr !290
  %4 = inttoptr i64 %rcx.0.reload to i32*, !insn.addr !290
  store i32 %3, i32* %4, align 4, !insn.addr !290
  %5 = add nuw nsw i64 %rdx.0.reload, 10, !insn.addr !291
  %6 = and i64 %5, 4294967295, !insn.addr !291
  %7 = add i64 %rcx.0.reload, 4, !insn.addr !292
  %8 = trunc i64 %5 to i32, !insn.addr !293
  %9 = icmp eq i32 %8, 100, !insn.addr !293
  %10 = icmp eq i1 %9, false, !insn.addr !294
  store i64 %7, i64* %rcx.0.reg2mem, !insn.addr !294
  store i64 %6, i64* %rdx.0.reg2mem, !insn.addr !294
  br i1 %10, label %dec_label_pc_3000, label %dec_label_pc_300e, !insn.addr !294

dec_label_pc_300e:                                ; preds = %dec_label_pc_3000
  %11 = add i64 %1, 36, !insn.addr !295
  %12 = inttoptr i64 %11 to i32*, !insn.addr !295
  %13 = load i32, i32* %12, align 4, !insn.addr !295
  %14 = bitcast i64* %0 to i32*, !insn.addr !296
  %15 = load i32, i32* %14, align 4, !insn.addr !296
  %16 = add i32 %15, %13, !insn.addr !296
  %17 = zext i32 %16 to i64, !insn.addr !296
  call void @free(i64* nonnull %0), !insn.addr !297
  store i64 %17, i64* %r12.0.reg2mem, !insn.addr !297
  br label %dec_label_pc_301a, !insn.addr !297

dec_label_pc_301a:                                ; preds = %dec_label_pc_2fe0, %dec_label_pc_300e
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  ret i64 %r12.0.reload, !insn.addr !298

; uselistorder directives
  uselistorder i64 %rcx.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %rcx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r12.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_301a, { 1, 0 }
  uselistorder label %dec_label_pc_3000, { 1, 0 }
}

define i64 @param_memset(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_3030:
  %merge.reg2mem = alloca i64, !insn.addr !299
  %rdi.0.reg2mem = alloca i64, !insn.addr !299
  %rax.0.reg2mem = alloca i64, !insn.addr !299
  %0 = inttoptr i64 %arg1 to i64*, !insn.addr !300
  %1 = trunc i64 %arg2 to i32, !insn.addr !300
  %2 = call i64* @memset(i64* %0, i32 0, i32 %1), !insn.addr !300
  %3 = icmp eq i64 %arg2, 0, !insn.addr !301
  store i64 0, i64* %merge.reg2mem, !insn.addr !302
  br i1 %3, label %dec_label_pc_305e, label %dec_label_pc_3047, !insn.addr !302

dec_label_pc_3047:                                ; preds = %dec_label_pc_3030
  %4 = ptrtoint i64* %2 to i64, !insn.addr !300
  %5 = add i64 %4, %arg2, !insn.addr !303
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !304
  store i64 %4, i64* %rdi.0.reg2mem, !insn.addr !304
  br label %dec_label_pc_3050, !insn.addr !304

dec_label_pc_3050:                                ; preds = %dec_label_pc_3050, %dec_label_pc_3047
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %6 = inttoptr i64 %rdi.0.reload to i8*, !insn.addr !305
  %7 = load i8, i8* %6, align 1, !insn.addr !305
  %8 = add i64 %rdi.0.reload, 1, !insn.addr !306
  %9 = zext i8 %7 to i64, !insn.addr !307
  %10 = add nuw nsw i64 %rax.0.reload, %9, !insn.addr !307
  %11 = and i64 %10, 4294967295, !insn.addr !307
  %12 = icmp eq i64 %8, %5, !insn.addr !308
  %13 = icmp eq i1 %12, false, !insn.addr !309
  store i64 %11, i64* %rax.0.reg2mem, !insn.addr !309
  store i64 %8, i64* %rdi.0.reg2mem, !insn.addr !309
  store i64 %11, i64* %merge.reg2mem, !insn.addr !309
  br i1 %13, label %dec_label_pc_3050, label %dec_label_pc_305e, !insn.addr !309

dec_label_pc_305e:                                ; preds = %dec_label_pc_3050, %dec_label_pc_3030
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !310

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdi.0.reg2mem, { 1, 0, 2 }
}

define i32 @call_memset() local_unnamed_addr {
dec_label_pc_3070:
  ret i32 0, !insn.addr !311
}

define i64 @param_strchr_strstr(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_3080:
  %0 = trunc i64 %arg2 to i32, !insn.addr !312
  %1 = inttoptr i64 %arg1 to i8*, !insn.addr !313
  %sext = mul i32 %0, 16777216
  %2 = ashr exact i32 %sext, 24, !insn.addr !313
  %3 = call i8* @strchr(i8* %1, i32 %2), !insn.addr !313
  %4 = ptrtoint i8* %3 to i64, !insn.addr !313
  %5 = sub i64 %4, %arg1, !insn.addr !314
  %6 = icmp eq i8* %3, null, !insn.addr !315
  %7 = select i1 %6, i64 4294967295, i64 %5, !insn.addr !316
  %8 = inttoptr i64 %arg3 to i8*, !insn.addr !317
  %9 = call i8* @strstr(i8* %1, i8* %8), !insn.addr !317
  %10 = ptrtoint i8* %9 to i64, !insn.addr !317
  %11 = sub i64 %10, %arg1, !insn.addr !318
  %12 = icmp eq i8* %9, null, !insn.addr !319
  %13 = icmp eq i1 %12, false, !insn.addr !320
  %14 = select i1 %13, i64 %11, i64 4294967295, !insn.addr !320
  %15 = add i64 %14, %7, !insn.addr !321
  %16 = and i64 %15, 4294967295, !insn.addr !321
  ret i64 %16, !insn.addr !322

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @call_strchr_strstr() local_unnamed_addr {
dec_label_pc_30e0:
  ret i64 15, !insn.addr !323
}

define void @test_standard_library_functions() local_unnamed_addr {
dec_label_pc_30f0:
  %rdx.0.reg2mem = alloca i64, !insn.addr !324
  %rcx.0.reg2mem = alloca i64, !insn.addr !324
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !325
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_5390 to i8*)), !insn.addr !326
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_5067 to i8*)), !insn.addr !327
  %3 = call i32 @call_strcmp(), !insn.addr !328
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_5082 to i8*)), !insn.addr !329
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_509d to i8*)), !insn.addr !330
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_50b9 to i8*)), !insn.addr !331
  %7 = call i32 @call_memcmp(), !insn.addr !332
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_50d5 to i8*)), !insn.addr !333
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_5004, i64 0, i64 0), i64 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_5019, i64 0, i64 0)), !insn.addr !334
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_50f1 to i8*)), !insn.addr !335
  %11 = call i32 (i8*, i8*, ...) @sscanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_5024, i64 0, i64 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_501e, i64 0, i64 0)), !insn.addr !336
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_510d to i8*)), !insn.addr !337
  %13 = call %_IO_FILE* @fopen(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_502e, i64 0, i64 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_502c, i64 0, i64 0)), !insn.addr !338
  %14 = icmp eq %_IO_FILE* %13, null, !insn.addr !339
  br i1 %14, label %dec_label_pc_324b, label %dec_label_pc_322a, !insn.addr !340

dec_label_pc_322a:                                ; preds = %dec_label_pc_30f0
  %15 = call i32 @fileno(%_IO_FILE* nonnull %13), !insn.addr !341
  %16 = call i32 @fclose(%_IO_FILE* nonnull %13), !insn.addr !342
  br label %dec_label_pc_324b

dec_label_pc_324b:                                ; preds = %dec_label_pc_322a, %dec_label_pc_30f0
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_512a to i8*)), !insn.addr !343
  %18 = call i32 @param_fread_fwrite(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_5050, i64 0, i64 0)), !insn.addr !344
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_5146 to i8*)), !insn.addr !345
  %20 = call i64* @malloc(i32 40), !insn.addr !346
  %21 = icmp eq i64* %20, null, !insn.addr !347
  br i1 %21, label %dec_label_pc_3334, label %dec_label_pc_3295, !insn.addr !348

dec_label_pc_3295:                                ; preds = %dec_label_pc_324b
  %22 = ptrtoint i64* %20 to i64, !insn.addr !346
  store i64 %22, i64* %rcx.0.reg2mem, !insn.addr !349
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !349
  br label %dec_label_pc_32a0, !insn.addr !349

dec_label_pc_32a0:                                ; preds = %dec_label_pc_32a0, %dec_label_pc_3295
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %23 = trunc i64 %rdx.0.reload to i32, !insn.addr !350
  %24 = inttoptr i64 %rcx.0.reload to i32*, !insn.addr !350
  store i32 %23, i32* %24, align 4, !insn.addr !350
  %25 = add nuw nsw i64 %rdx.0.reload, 10, !insn.addr !351
  %26 = and i64 %25, 4294967295, !insn.addr !351
  %27 = add i64 %rcx.0.reload, 4, !insn.addr !352
  %28 = trunc i64 %25 to i32, !insn.addr !353
  %29 = icmp eq i32 %28, 100, !insn.addr !353
  %30 = icmp eq i1 %29, false, !insn.addr !354
  store i64 %27, i64* %rcx.0.reg2mem, !insn.addr !354
  store i64 %26, i64* %rdx.0.reg2mem, !insn.addr !354
  br i1 %30, label %dec_label_pc_32a0, label %dec_label_pc_32ae, !insn.addr !354

dec_label_pc_32ae:                                ; preds = %dec_label_pc_32a0
  call void @free(i64* nonnull %20), !insn.addr !355
  br label %dec_label_pc_32ba, !insn.addr !355

dec_label_pc_32ba:                                ; preds = %dec_label_pc_3334, %dec_label_pc_32ae
  %31 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_5162 to i8*)), !insn.addr !356
  %32 = call i32 @call_memset(), !insn.addr !357
  %33 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_517e to i8*)), !insn.addr !358
  %34 = call i64 @__readfsqword(i64 40), !insn.addr !359
  %35 = icmp eq i64 %0, %34, !insn.addr !359
  %36 = icmp eq i1 %35, false, !insn.addr !360
  br i1 %36, label %dec_label_pc_332f, label %dec_label_pc_32fc, !insn.addr !360

dec_label_pc_32fc:                                ; preds = %dec_label_pc_32ba
  %37 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_5199 to i8*)), !insn.addr !361
  ret void, !insn.addr !361

dec_label_pc_332f:                                ; preds = %dec_label_pc_32ba
  call void @__stack_chk_fail(), !insn.addr !362
  br label %dec_label_pc_3334, !insn.addr !362

dec_label_pc_3334:                                ; preds = %dec_label_pc_332f, %dec_label_pc_324b
  br label %dec_label_pc_32ba, !insn.addr !363

; uselistorder directives
  uselistorder i64 %rcx.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64* %20, { 0, 2, 1 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 0, 2, 1, 4, 3, 5 }
  uselistorder i32 (%_IO_FILE*)* @fileno, { 0, 2, 1, 3 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 0, 1, 3, 2, 4 }
  uselistorder i32 (i8*, i8*, ...)* @sscanf, { 0, 2, 1, 3 }
}

define i64 @param_linux_syscall(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_3340:
  %0 = call i32 (i32, ...) @syscall(i32 2), !insn.addr !364
  %1 = icmp slt i32 %0, 0, !insn.addr !365
  br i1 %1, label %dec_label_pc_3378, label %dec_label_pc_335b, !insn.addr !366

dec_label_pc_335b:                                ; preds = %dec_label_pc_3340
  %2 = zext i32 %0 to i64
  %3 = call i32 (i32, ...) @syscall(i32 3), !insn.addr !367
  ret i64 %2, !insn.addr !368

dec_label_pc_3378:                                ; preds = %dec_label_pc_3340
  %4 = call i32* @__errno_location(), !insn.addr !369
  %5 = load i32, i32* %4, align 4, !insn.addr !370
  %6 = sub i32 0, %5, !insn.addr !371
  %7 = zext i32 %6 to i64, !insn.addr !372
  ret i64 %7, !insn.addr !373
}

define i64 @call_linux_syscall(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_3390:
  %0 = call i32 (i32, ...) @syscall(i32 2), !insn.addr !374
  %1 = icmp slt i32 %0, 0, !insn.addr !375
  br i1 %1, label %dec_label_pc_33d0, label %dec_label_pc_33b1, !insn.addr !376

dec_label_pc_33b1:                                ; preds = %dec_label_pc_3390
  %2 = call i32 (i32, ...) @syscall(i32 3), !insn.addr !377
  ret i64 42, !insn.addr !378

dec_label_pc_33d0:                                ; preds = %dec_label_pc_3390
  %3 = call i32* @__errno_location(), !insn.addr !379
  %4 = load i32, i32* %3, align 4, !insn.addr !380
  %5 = icmp eq i32 %4, 0, !insn.addr !381
  %6 = icmp slt i32 %4, 0, !insn.addr !381
  %7 = icmp eq i1 %6, false, !insn.addr !382
  %8 = icmp eq i1 %5, false, !insn.addr !382
  %9 = icmp eq i1 %7, %8, !insn.addr !382
  %10 = select i1 %9, i64 4294967295, i64 42, !insn.addr !382
  ret i64 %10, !insn.addr !383

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
}

define i64 @param_win32_api() local_unnamed_addr {
dec_label_pc_33f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %stack_var_-168 = alloca i64, align 8
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !384
  %4 = inttoptr i64 %1 to i8*, !insn.addr !385
  %5 = bitcast i64* %stack_var_-168 to %stat*, !insn.addr !385
  %6 = call i32 @stat(i8* %4, %stat* nonnull %5), !insn.addr !385
  %7 = call i64 @__readfsqword(i64 40), !insn.addr !386
  %8 = icmp eq i64 %3, %7, !insn.addr !386
  %9 = icmp eq i1 %8, false, !insn.addr !387
  br i1 %9, label %dec_label_pc_344f, label %dec_label_pc_3440, !insn.addr !387

dec_label_pc_3440:                                ; preds = %dec_label_pc_33f0
  %10 = icmp slt i32 %6, 0, !insn.addr !388
  %11 = icmp slt i64 %2, 1
  %12 = select i1 %11, i64 4294967294, i64 42
  %storemerge = select i1 %10, i64 4294967295, i64 %12
  ret i64 %storemerge, !insn.addr !389

dec_label_pc_344f:                                ; preds = %dec_label_pc_33f0
  call void @__stack_chk_fail(), !insn.addr !390
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !391

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @call_win32_api() local_unnamed_addr {
dec_label_pc_3460:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_-168 = alloca i64, align 8
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !392
  %3 = bitcast i64* %stack_var_-168 to %stat*, !insn.addr !393
  %4 = call i32 @stat(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_502e, i64 0, i64 0), %stat* nonnull %3), !insn.addr !393
  %5 = call i64 @__readfsqword(i64 40), !insn.addr !394
  %6 = icmp eq i64 %2, %5, !insn.addr !394
  %7 = icmp eq i1 %6, false, !insn.addr !395
  br i1 %7, label %dec_label_pc_34c6, label %dec_label_pc_34b7, !insn.addr !395

dec_label_pc_34b7:                                ; preds = %dec_label_pc_3460
  %8 = icmp slt i32 %4, 0, !insn.addr !396
  %9 = icmp slt i64 %1, 1
  %10 = select i1 %9, i64 4294967294, i64 42
  %storemerge = select i1 %8, i64 4294967295, i64 %10
  ret i64 %storemerge, !insn.addr !397

dec_label_pc_34c6:                                ; preds = %dec_label_pc_3460
  call void @__stack_chk_fail(), !insn.addr !398
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !399
}

define i64 @param_fork_exec(i8* %arg1, i32 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_34d0:
  %rax.0.reg2mem = alloca i64, !insn.addr !400
  %stack_var_-36 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !401
  %1 = call i32 @fork(), !insn.addr !402
  %2 = icmp slt i32 %1, 0, !insn.addr !403
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !404
  br i1 %2, label %dec_label_pc_3529, label %dec_label_pc_34fa, !insn.addr !404

dec_label_pc_34fa:                                ; preds = %dec_label_pc_34d0
  %3 = icmp eq i32 %1, 0, !insn.addr !403
  br i1 %3, label %dec_label_pc_354d, label %dec_label_pc_34fc, !insn.addr !405

dec_label_pc_34fc:                                ; preds = %dec_label_pc_34fa
  %4 = call i32 @waitpid(i32 %1, i32* nonnull %stack_var_-36, i32 0), !insn.addr !406
  %5 = icmp slt i32 %4, 0, !insn.addr !407
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !408
  br i1 %5, label %dec_label_pc_3529, label %dec_label_pc_3517, !insn.addr !408

dec_label_pc_3517:                                ; preds = %dec_label_pc_34fc
  %6 = load i32, i32* %stack_var_-36, align 4, !insn.addr !409
  %7 = udiv i32 %6, 256, !insn.addr !410
  %8 = urem i32 %6, 128, !insn.addr !411
  %9 = icmp eq i32 %8, 0, !insn.addr !411
  %10 = icmp eq i1 %9, false, !insn.addr !412
  %11 = urem i32 %7, 256, !insn.addr !412
  %12 = zext i32 %11 to i64
  %13 = select i1 %10, i64 4294967293, i64 %12, !insn.addr !412
  store i64 %13, i64* %rax.0.reg2mem, !insn.addr !412
  br label %dec_label_pc_3529, !insn.addr !412

dec_label_pc_3529:                                ; preds = %dec_label_pc_34d0, %dec_label_pc_3517, %dec_label_pc_34fc
  %14 = call i64 @__readfsqword(i64 40), !insn.addr !413
  %15 = icmp eq i64 %0, %14, !insn.addr !413
  %16 = icmp eq i1 %15, false, !insn.addr !414
  br i1 %16, label %dec_label_pc_3548, label %dec_label_pc_3539, !insn.addr !414

dec_label_pc_3539:                                ; preds = %dec_label_pc_3529
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !415

dec_label_pc_3548:                                ; preds = %dec_label_pc_3529
  call void @__stack_chk_fail(), !insn.addr !416
  br label %dec_label_pc_354d, !insn.addr !416

dec_label_pc_354d:                                ; preds = %dec_label_pc_3548, %dec_label_pc_34fa
  %17 = call i32 (i8*, i8*, ...) @execl(i8* %arg1, i8* %arg1), !insn.addr !417
  call void @_exit(i32 127), !insn.addr !418
  unreachable, !insn.addr !418

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32 256, { 1, 0 }
  uselistorder label %dec_label_pc_3529, { 1, 2, 0 }
}

define i64 @call_fork_exec(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_3570:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = call i64 @param_fork_exec(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_51b5, i64 0, i64 0), i32 0, i64 %1, i64 %2), !insn.addr !419
  %4 = trunc i64 %3 to i32, !insn.addr !420
  %5 = icmp eq i32 %4, 0, !insn.addr !420
  %6 = select i1 %5, i64 42, i64 4294967295, !insn.addr !421
  ret i64 %6, !insn.addr !422

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i32 @param_pipe_communication() local_unnamed_addr {
dec_label_pc_35a0:
  %0 = alloca i32
  %rax.0.reg2mem = alloca i32, !insn.addr !423
  %stack_var_-56 = alloca i64, align 8
  %1 = load i32, i32* %0
  %buffer_-64 = alloca [32 x i8], align 4
  %pipefd_-72 = alloca [2 x i32], align 4
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !424
  %3 = ptrtoint [32 x i8]* %buffer_-64 to i64, !insn.addr !425
  %4 = trunc i64 %3 to i32, !insn.addr !426
  %5 = insertvalue [2 x i32] undef, i32 %4, 0, !insn.addr !426
  %6 = call i32 @pipe([2 x i32] %5), !insn.addr !426
  %7 = icmp slt i32 %6, 0, !insn.addr !427
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !428
  br i1 %7, label %dec_label_pc_3654, label %dec_label_pc_35cb, !insn.addr !428

dec_label_pc_35cb:                                ; preds = %dec_label_pc_35a0
  %8 = call i32 @fork(), !insn.addr !429
  %9 = icmp slt i32 %8, 0, !insn.addr !430
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !431
  br i1 %9, label %dec_label_pc_3654, label %dec_label_pc_35d8, !insn.addr !431

dec_label_pc_35d8:                                ; preds = %dec_label_pc_35cb
  %10 = icmp eq i32 %8, 0, !insn.addr !430
  %11 = icmp eq i1 %10, false, !insn.addr !432
  br i1 %11, label %dec_label_pc_3610, label %dec_label_pc_35da, !insn.addr !432

dec_label_pc_35da:                                ; preds = %dec_label_pc_35d8
  %12 = bitcast [32 x i8]* %buffer_-64 to i32*, !insn.addr !433
  %13 = load i32, i32* %12, align 4, !insn.addr !433
  %14 = call i32 @close(i32 %13), !insn.addr !434
  %15 = call i32 @write(i32 %1, i64* bitcast ([10 x i8]* @global_var_51bf to i64*), i32 9), !insn.addr !435
  %16 = call i32 @close(i32 %1), !insn.addr !436
  call void @_exit(i32 0), !insn.addr !437
  unreachable, !insn.addr !437

dec_label_pc_3610:                                ; preds = %dec_label_pc_35d8
  %17 = ptrtoint [2 x i32]* %pipefd_-72 to i64, !insn.addr !438
  %18 = call i32 @close(i32 %1), !insn.addr !439
  %19 = bitcast [32 x i8]* %buffer_-64 to i32*, !insn.addr !440
  %20 = load i32, i32* %19, align 4, !insn.addr !440
  %21 = call i32 @read(i32 %20, i64* nonnull %stack_var_-56, i32 31), !insn.addr !441
  %22 = sext i32 %21 to i64, !insn.addr !441
  %23 = load i32, i32* %19, align 4, !insn.addr !442
  %24 = add i64 %17, 16, !insn.addr !443
  %25 = add i64 %24, %22, !insn.addr !443
  %26 = inttoptr i64 %25 to i8*, !insn.addr !443
  store i8 0, i8* %26, align 1, !insn.addr !443
  %27 = call i32 @close(i32 %23), !insn.addr !444
  %28 = call i32 @wait(i64 0), !insn.addr !445
  %29 = icmp slt i32 %21, 1
  %phitmp = select i1 %29, i32 -3, i32 42, !insn.addr !446
  store i32 %phitmp, i32* %rax.0.reg2mem, !insn.addr !446
  br label %dec_label_pc_3654, !insn.addr !446

dec_label_pc_3654:                                ; preds = %dec_label_pc_35cb, %dec_label_pc_35a0, %dec_label_pc_3610
  %30 = call i64 @__readfsqword(i64 40), !insn.addr !447
  %31 = icmp eq i64 %2, %30, !insn.addr !447
  %32 = icmp eq i1 %31, false, !insn.addr !448
  br i1 %32, label %dec_label_pc_367e, label %dec_label_pc_3664, !insn.addr !448

dec_label_pc_3664:                                ; preds = %dec_label_pc_3654
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !449

dec_label_pc_367e:                                ; preds = %dec_label_pc_3654
  call void @__stack_chk_fail(), !insn.addr !450
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !451

; uselistorder directives
  uselistorder i32* %rax.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder void (i32)* @_exit, { 1, 0, 2 }
  uselistorder i32 ()* @fork, { 1, 0, 2 }
  uselistorder label %dec_label_pc_3654, { 2, 0, 1 }
}

define i64 @call_pipe_communication() local_unnamed_addr {
dec_label_pc_3690:
  %0 = call i32 @param_pipe_communication(), !insn.addr !452
  %1 = sext i32 %0 to i64, !insn.addr !452
  ret i64 %1, !insn.addr !452
}

define i32 @param_socket_create() local_unnamed_addr {
dec_label_pc_36a0:
  %0 = alloca i128
  %rax.0.reg2mem = alloca i32, !insn.addr !453
  %1 = load i128, i128* %0
  %stack_var_-40 = alloca i64, align 8
  %stack_var_-44 = alloca i64, align 8
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !454
  %3 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !455
  %4 = icmp slt i32 %3, 0, !insn.addr !456
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !457
  br i1 %4, label %dec_label_pc_3744, label %dec_label_pc_36d2, !insn.addr !457

dec_label_pc_36d2:                                ; preds = %dec_label_pc_36a0
  store i64 1, i64* %stack_var_-44, align 8, !insn.addr !458
  %5 = call i32 @setsockopt(i32 %3, i32 1, i32 2, i64* nonnull %stack_var_-44, i32 4), !insn.addr !459
  %6 = icmp slt i32 %5, 0, !insn.addr !460
  br i1 %6, label %dec_label_pc_377c, label %dec_label_pc_3700, !insn.addr !461

dec_label_pc_3700:                                ; preds = %dec_label_pc_36d2
  %7 = call i128 @__asm_pxor(i128 %1, i128 %1), !insn.addr !462
  %8 = call i64 @__asm_movaps(i128 %7), !insn.addr !463
  store i64 2, i64* %stack_var_-40, align 8, !insn.addr !464
  %9 = bitcast i64* %stack_var_-40 to %sockaddr*, !insn.addr !465
  %10 = call i32 @bind(i32 %3, %sockaddr* nonnull %9, i32 16), !insn.addr !465
  %11 = icmp slt i32 %10, 0, !insn.addr !466
  br i1 %11, label %dec_label_pc_378a, label %dec_label_pc_3728, !insn.addr !467

dec_label_pc_3728:                                ; preds = %dec_label_pc_3700
  %12 = call i32 @listen(i32 %3, i32 5), !insn.addr !468
  %13 = icmp slt i32 %12, 0, !insn.addr !469
  %14 = call i32 @close(i32 %3)
  %. = select i1 %13, i32 -4, i32 42
  store i32 %., i32* %rax.0.reg2mem, !insn.addr !470
  br label %dec_label_pc_3744, !insn.addr !470

dec_label_pc_3744:                                ; preds = %dec_label_pc_36a0, %dec_label_pc_3728, %dec_label_pc_378a, %dec_label_pc_377c
  %15 = call i64 @__readfsqword(i64 40), !insn.addr !471
  %16 = icmp eq i64 %2, %15, !insn.addr !471
  %17 = icmp eq i1 %16, false, !insn.addr !472
  br i1 %17, label %dec_label_pc_3798, label %dec_label_pc_3754, !insn.addr !472

dec_label_pc_3754:                                ; preds = %dec_label_pc_3744
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !473

dec_label_pc_377c:                                ; preds = %dec_label_pc_36d2
  %18 = call i32 @close(i32 %3), !insn.addr !474
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !475
  br label %dec_label_pc_3744, !insn.addr !475

dec_label_pc_378a:                                ; preds = %dec_label_pc_3700
  %19 = call i32 @close(i32 %3), !insn.addr !476
  store i32 -3, i32* %rax.0.reg2mem, !insn.addr !477
  br label %dec_label_pc_3744, !insn.addr !477

dec_label_pc_3798:                                ; preds = %dec_label_pc_3744
  call void @__stack_chk_fail(), !insn.addr !478
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !479

; uselistorder directives
  uselistorder i32 %3, { 3, 0, 1, 2, 4, 5, 6 }
  uselistorder i32* %rax.0.reg2mem, { 3, 4, 0, 2, 1 }
  uselistorder label %dec_label_pc_3744, { 2, 3, 1, 0 }
}

define i64 @call_socket_create() local_unnamed_addr {
dec_label_pc_37a0:
  %0 = call i32 @param_socket_create(), !insn.addr !480
  %1 = sext i32 %0 to i64, !insn.addr !480
  ret i64 %1, !insn.addr !480
}

define i32 @param_shmget_shmat() local_unnamed_addr {
dec_label_pc_37b0:
  %merge.reg2mem = alloca i32, !insn.addr !481
  %0 = call i32 (i8*, i32, ...) @open(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_51c9, i64 0, i64 0), i32 66), !insn.addr !482
  %1 = icmp slt i32 %0, 0, !insn.addr !483
  store i32 -1, i32* %merge.reg2mem, !insn.addr !484
  br i1 %1, label %dec_label_pc_3850, label %dec_label_pc_37d4, !insn.addr !484

dec_label_pc_37d4:                                ; preds = %dec_label_pc_37b0
  %2 = call i32 @close(i32 %0), !insn.addr !485
  %3 = call i32 @ftok(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_51c9, i64 0, i64 0), i32 42), !insn.addr !486
  %4 = icmp slt i32 %3, 0, !insn.addr !487
  store i32 -1, i32* %merge.reg2mem, !insn.addr !488
  br i1 %4, label %dec_label_pc_3850, label %dec_label_pc_37ee, !insn.addr !488

dec_label_pc_37ee:                                ; preds = %dec_label_pc_37d4
  %5 = call i32 @shmget(i32 %3, i32 ptrtoint (i32* @global_var_1000 to i32), i32 ptrtoint (i32* @global_var_3b6 to i32)), !insn.addr !489
  %6 = icmp slt i32 %5, 0, !insn.addr !490
  store i32 -2, i32* %merge.reg2mem, !insn.addr !491
  br i1 %6, label %dec_label_pc_3850, label %dec_label_pc_3803, !insn.addr !491

dec_label_pc_3803:                                ; preds = %dec_label_pc_37ee
  %7 = call i64* @shmat(i32 %5, i64* null, i32 0), !insn.addr !492
  %8 = icmp eq i64* %7, inttoptr (i64 -1 to i64*), !insn.addr !493
  store i32 -3, i32* %merge.reg2mem, !insn.addr !494
  br i1 %8, label %dec_label_pc_3850, label %dec_label_pc_3817, !insn.addr !494

dec_label_pc_3817:                                ; preds = %dec_label_pc_3803
  %9 = ptrtoint i64* %7 to i64, !insn.addr !492
  %10 = add i64 %9, 8, !insn.addr !495
  %11 = inttoptr i64 %10 to i32*, !insn.addr !495
  store i32 2037542765, i32* %11, align 4, !insn.addr !495
  store i64 7299600957910902867, i64* %7, align 8, !insn.addr !496
  %12 = add i64 %9, 12, !insn.addr !497
  %13 = inttoptr i64 %12 to i8*, !insn.addr !497
  store i8 0, i8* %13, align 1, !insn.addr !497
  %14 = call i32 @shmdt(i64* %7), !insn.addr !498
  %15 = call i32 @shmctl(i32 %5, i32 0, %shmid_ds* null), !insn.addr !499
  ret i32 12, !insn.addr !500

dec_label_pc_3850:                                ; preds = %dec_label_pc_3803, %dec_label_pc_37ee, %dec_label_pc_37d4, %dec_label_pc_37b0
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !501

; uselistorder directives
  uselistorder i64* %7, { 0, 1, 3, 2 }
  uselistorder i32* %merge.reg2mem, { 0, 1, 2, 4, 3 }
  uselistorder i8 0, { 3, 4, 0, 5, 2, 1 }
  uselistorder i32 (i32)* @close, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
}

define i64 @call_shmget_shmat() local_unnamed_addr {
dec_label_pc_3870:
  %0 = call i32 @param_shmget_shmat(), !insn.addr !502
  %1 = icmp slt i32 %0, 1
  %2 = select i1 %1, i64 4294967295, i64 42, !insn.addr !503
  ret i64 %2, !insn.addr !504
}

define i64 @param_signal_handling() local_unnamed_addr {
dec_label_pc_38a0:
  %rax.0.reg2mem = alloca i64, !insn.addr !505
  %rbx.1.reg2mem = alloca i32, !insn.addr !505
  %rbx.0.reg2mem = alloca i32, !insn.addr !505
  %0 = call void (i32)* @signal(i32 10, void (i32)* inttoptr (i64 10368 to void (i32)*)), !insn.addr !506
  %1 = icmp eq void (i32)* %0, inttoptr (i64 -1 to void (i32)*), !insn.addr !507
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !508
  br i1 %1, label %dec_label_pc_39ab, label %dec_label_pc_38c8, !insn.addr !508

dec_label_pc_38c8:                                ; preds = %dec_label_pc_38a0
  %2 = call void (i32)* @signal(i32 14, void (i32)* inttoptr (i64 10368 to void (i32)*)), !insn.addr !509
  %3 = icmp eq void (i32)* %2, inttoptr (i64 -1 to void (i32)*), !insn.addr !510
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !511
  br i1 %3, label %dec_label_pc_39ab, label %dec_label_pc_38df, !insn.addr !511

dec_label_pc_38df:                                ; preds = %dec_label_pc_38c8
  store i32 0, i32* @signal_received, align 4, !insn.addr !512
  %4 = call i32 @raise(i32 10), !insn.addr !513
  %5 = load i32, i32* @signal_received, align 4
  %6 = icmp eq i32 %5, 0, !insn.addr !514
  %7 = icmp eq i1 %6, false, !insn.addr !515
  store i32 ptrtoint (i32* @global_var_3e8 to i32), i32* %rbx.0.reg2mem, !insn.addr !515
  br i1 %7, label %dec_label_pc_392f, label %dec_label_pc_390d, !insn.addr !515

dec_label_pc_3908:                                ; preds = %dec_label_pc_390d
  %rbx.0.reload = load i32, i32* %rbx.0.reg2mem
  %8 = add i32 %rbx.0.reload, -1, !insn.addr !516
  %9 = icmp eq i32 %8, 0, !insn.addr !516
  store i32 %8, i32* %rbx.0.reg2mem, !insn.addr !517
  store i64 4294967293, i64* %rax.0.reg2mem, !insn.addr !517
  br i1 %9, label %dec_label_pc_39ab, label %dec_label_pc_390d, !insn.addr !517

dec_label_pc_390d:                                ; preds = %dec_label_pc_38df, %dec_label_pc_3908
  %10 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !518
  %11 = load i32, i32* @signal_received, align 4
  %12 = icmp eq i32 %11, 0, !insn.addr !519
  br i1 %12, label %dec_label_pc_3908, label %dec_label_pc_392f, !insn.addr !520

dec_label_pc_392f:                                ; preds = %dec_label_pc_390d, %dec_label_pc_38df
  %13 = load i32, i32* @signal_number, align 4, !insn.addr !521
  %14 = icmp eq i32 %13, 10, !insn.addr !522
  %15 = icmp eq i1 %14, false, !insn.addr !523
  store i64 4294967292, i64* %rax.0.reg2mem, !insn.addr !523
  br i1 %15, label %dec_label_pc_39ab, label %dec_label_pc_393a, !insn.addr !523

dec_label_pc_393a:                                ; preds = %dec_label_pc_392f
  store i32 0, i32* @signal_received, align 4, !insn.addr !524
  %16 = call i32 @alarm(i32 1), !insn.addr !525
  %17 = load i32, i32* @signal_received, align 4
  %18 = icmp eq i32 %17, 0, !insn.addr !526
  %19 = icmp eq i1 %18, false, !insn.addr !527
  store i32 ptrtoint (i32* @global_var_7d0 to i32), i32* %rbx.1.reg2mem, !insn.addr !527
  br i1 %19, label %dec_label_pc_3983, label %dec_label_pc_3965, !insn.addr !527

dec_label_pc_3960:                                ; preds = %dec_label_pc_3965
  %rbx.1.reload = load i32, i32* %rbx.1.reg2mem
  %20 = add i32 %rbx.1.reload, -1, !insn.addr !528
  %21 = icmp eq i32 %20, 0, !insn.addr !528
  store i32 %20, i32* %rbx.1.reg2mem, !insn.addr !529
  store i64 4294967291, i64* %rax.0.reg2mem, !insn.addr !529
  br i1 %21, label %dec_label_pc_39ab, label %dec_label_pc_3965, !insn.addr !529

dec_label_pc_3965:                                ; preds = %dec_label_pc_393a, %dec_label_pc_3960
  %22 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !530
  %23 = load i32, i32* @signal_received, align 4
  %24 = icmp eq i32 %23, 0, !insn.addr !531
  br i1 %24, label %dec_label_pc_3960, label %dec_label_pc_3983, !insn.addr !532

dec_label_pc_3983:                                ; preds = %dec_label_pc_3965, %dec_label_pc_393a
  %25 = load i32, i32* @signal_number, align 4, !insn.addr !533
  %26 = icmp eq i32 %25, 14, !insn.addr !534
  %27 = icmp eq i1 %26, false, !insn.addr !535
  store i64 4294967291, i64* %rax.0.reg2mem, !insn.addr !535
  br i1 %27, label %dec_label_pc_39ab, label %dec_label_pc_398e, !insn.addr !535

dec_label_pc_398e:                                ; preds = %dec_label_pc_3983
  %28 = call void (i32)* @signal(i32 10, void (i32)* null), !insn.addr !536
  %29 = call void (i32)* @signal(i32 14, void (i32)* null), !insn.addr !537
  store i64 42, i64* %rax.0.reg2mem, !insn.addr !538
  br label %dec_label_pc_39ab, !insn.addr !538

dec_label_pc_39ab:                                ; preds = %dec_label_pc_3908, %dec_label_pc_3960, %dec_label_pc_38a0, %dec_label_pc_38c8, %dec_label_pc_392f, %dec_label_pc_3983, %dec_label_pc_398e
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !539

; uselistorder directives
  uselistorder i32* %rbx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rbx.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.0.reg2mem, { 0, 7, 6, 2, 5, 1, 4, 3 }
  uselistorder i64 4294967291, { 1, 0 }
  uselistorder i32 (i32)* @usleep, { 1, 0, 2, 3 }
  uselistorder i32 14, { 1, 0, 2 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i32 10, { 1, 0, 2, 3 }
  uselistorder label %dec_label_pc_39ab, { 6, 5, 1, 4, 0, 3, 2 }
  uselistorder label %dec_label_pc_3965, { 1, 0 }
  uselistorder label %dec_label_pc_390d, { 1, 0 }
}

define i64 @call_signal_handling() local_unnamed_addr {
dec_label_pc_39e0:
  %0 = call i64 @param_signal_handling(), !insn.addr !540
  ret i64 %0, !insn.addr !540
}

define void @test_system_calls() local_unnamed_addr {
dec_label_pc_39f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %stack_var_-168 = alloca i64, align 8
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !541
  %4 = call i32 @puts(i8* bitcast (i8** @global_var_51db to i8*)), !insn.addr !542
  %5 = call i32 (i32, ...) @syscall(i32 2), !insn.addr !543
  %6 = icmp slt i32 %5, 0, !insn.addr !544
  br i1 %6, label %dec_label_pc_3b60, label %dec_label_pc_3a3b, !insn.addr !545

dec_label_pc_3a3b:                                ; preds = %dec_label_pc_39f0
  %7 = call i32 (i32, ...) @syscall(i32 3), !insn.addr !546
  br label %dec_label_pc_3a4e, !insn.addr !547

dec_label_pc_3a4e:                                ; preds = %dec_label_pc_3b60, %dec_label_pc_3a3b
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_51f6 to i8*)), !insn.addr !548
  %9 = bitcast i64* %stack_var_-168 to %stat*, !insn.addr !549
  %10 = call i32 @stat(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_502e, i64 0, i64 0), %stat* nonnull %9), !insn.addr !549
  %11 = icmp slt i32 %10, 0, !insn.addr !550
  %12 = icmp slt i64 %2, 1
  %13 = select i1 %12, i64 4294967294, i64 42
  %storemerge = select i1 %11, i64 4294967295, i64 %13
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_5212 to i8*)), !insn.addr !551
  %15 = call i64 @param_fork_exec(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_51b5, i64 0, i64 0), i32 xor (i32 ptrtoint (i8** @global_var_5212 to i32), i32 ptrtoint (i8** @global_var_5212 to i32)), i64 %storemerge, i64 %1), !insn.addr !552
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_522e to i8*)), !insn.addr !553
  %17 = call i32 @param_pipe_communication(), !insn.addr !554
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_524a to i8*)), !insn.addr !555
  %19 = call i32 @param_socket_create(), !insn.addr !556
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_5266 to i8*)), !insn.addr !557
  %21 = call i32 @param_shmget_shmat(), !insn.addr !558
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_5282 to i8*)), !insn.addr !559
  %23 = call i64 @param_signal_handling(), !insn.addr !560
  %24 = call i64 @__readfsqword(i64 40), !insn.addr !561
  %25 = icmp eq i64 %3, %24, !insn.addr !561
  %26 = icmp eq i1 %25, false, !insn.addr !562
  br i1 %26, label %dec_label_pc_3b85, label %dec_label_pc_3b3b, !insn.addr !562

dec_label_pc_3b3b:                                ; preds = %dec_label_pc_3a4e
  %27 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_529e to i8*)), !insn.addr !563
  ret void, !insn.addr !563

dec_label_pc_3b60:                                ; preds = %dec_label_pc_39f0
  %28 = call i32* @__errno_location(), !insn.addr !564
  br label %dec_label_pc_3a4e, !insn.addr !565

dec_label_pc_3b85:                                ; preds = %dec_label_pc_3a4e
  call void @__stack_chk_fail(), !insn.addr !566
  ret void, !insn.addr !567

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
  uselistorder i32* ()* @__errno_location, { 0, 2, 1, 3 }
  uselistorder i64 42, { 3, 0, 4, 5, 6, 7, 8, 2, 9, 1, 10 }
  uselistorder i64 4294967294, { 2, 0, 1, 3, 4 }
  uselistorder i32 (i8*, %stat*)* @stat, { 0, 2, 1, 3 }
  uselistorder i32 (i32, ...)* @syscall, { 1, 0, 5, 4, 3, 2, 6 }
}

define i64 @param_pthread_create(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_3b90:
  %r12.0.reg2mem = alloca i64, !insn.addr !568
  %stack_var_-24 = alloca i64, align 8
  %stack_var_-32 = alloca i32, align 4
  %stack_var_-36 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !569
  %sext = mul i64 %arg1, 4294967296
  %1 = ashr exact i64 %sext, 32, !insn.addr !570
  store i64 %1, i64* %stack_var_-36, align 8, !insn.addr !570
  %2 = call i32 @pthread_create(i32* nonnull %stack_var_-32, i64* null, i64* (i64*)* inttoptr (i64 10448 to i64* (i64*)*), i64* nonnull %stack_var_-36), !insn.addr !571
  %3 = icmp eq i32 %2, 0, !insn.addr !572
  %4 = icmp eq i1 %3, false, !insn.addr !573
  store i64 4294967295, i64* %r12.0.reg2mem, !insn.addr !573
  br i1 %4, label %dec_label_pc_3be6, label %dec_label_pc_3bca, !insn.addr !573

dec_label_pc_3bca:                                ; preds = %dec_label_pc_3b90
  %5 = load i32, i32* %stack_var_-32, align 4, !insn.addr !574
  %6 = bitcast i64* %stack_var_-24 to i64**, !insn.addr !575
  %7 = call i32 @pthread_join(i32 %5, i64** nonnull %6), !insn.addr !575
  %8 = load i64, i64* %stack_var_-24, align 8, !insn.addr !576
  %9 = inttoptr i64 %8 to i32*, !insn.addr !577
  %10 = load i32, i32* %9, align 4, !insn.addr !577
  %11 = zext i32 %10 to i64, !insn.addr !577
  %12 = inttoptr i64 %8 to i64*, !insn.addr !578
  call void @free(i64* %12), !insn.addr !578
  store i64 %11, i64* %r12.0.reg2mem, !insn.addr !578
  br label %dec_label_pc_3be6, !insn.addr !578

dec_label_pc_3be6:                                ; preds = %dec_label_pc_3b90, %dec_label_pc_3bca
  %13 = call i64 @__readfsqword(i64 40), !insn.addr !579
  %14 = icmp eq i64 %0, %13, !insn.addr !579
  %15 = icmp eq i1 %14, false, !insn.addr !580
  br i1 %15, label %dec_label_pc_3c08, label %dec_label_pc_3bf6, !insn.addr !580

dec_label_pc_3bf6:                                ; preds = %dec_label_pc_3be6
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  ret i64 %r12.0.reload, !insn.addr !581

dec_label_pc_3c08:                                ; preds = %dec_label_pc_3be6
  call void @__stack_chk_fail(), !insn.addr !582
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !583

; uselistorder directives
  uselistorder i64 %8, { 1, 0 }
  uselistorder i64* %stack_var_-24, { 1, 0 }
  uselistorder i64* %r12.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_3be6, { 1, 0 }
}

define i64 @call_pthread_create(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_3c10:
  %r12.0.reg2mem = alloca i64, !insn.addr !584
  %stack_var_-24 = alloca i64, align 8
  %stack_var_-32 = alloca i32, align 4
  %stack_var_-36 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !585
  store i64 7, i64* %stack_var_-36, align 8, !insn.addr !586
  %1 = call i32 @pthread_create(i32* nonnull %stack_var_-32, i64* null, i64* (i64*)* inttoptr (i64 10448 to i64* (i64*)*), i64* nonnull %stack_var_-36), !insn.addr !587
  %2 = icmp eq i32 %1, 0, !insn.addr !588
  %3 = icmp eq i1 %2, false, !insn.addr !589
  store i64 4294967295, i64* %r12.0.reg2mem, !insn.addr !589
  br i1 %3, label %dec_label_pc_3c6a, label %dec_label_pc_3c4e, !insn.addr !589

dec_label_pc_3c4e:                                ; preds = %dec_label_pc_3c10
  %4 = load i32, i32* %stack_var_-32, align 4, !insn.addr !590
  %5 = bitcast i64* %stack_var_-24 to i64**, !insn.addr !591
  %6 = call i32 @pthread_join(i32 %4, i64** nonnull %5), !insn.addr !591
  %7 = load i64, i64* %stack_var_-24, align 8, !insn.addr !592
  %8 = inttoptr i64 %7 to i32*, !insn.addr !593
  %9 = load i32, i32* %8, align 4, !insn.addr !593
  %10 = zext i32 %9 to i64, !insn.addr !593
  %11 = inttoptr i64 %7 to i64*, !insn.addr !594
  call void @free(i64* %11), !insn.addr !594
  store i64 %10, i64* %r12.0.reg2mem, !insn.addr !594
  br label %dec_label_pc_3c6a, !insn.addr !594

dec_label_pc_3c6a:                                ; preds = %dec_label_pc_3c10, %dec_label_pc_3c4e
  %12 = call i64 @__readfsqword(i64 40), !insn.addr !595
  %13 = icmp eq i64 %0, %12, !insn.addr !595
  %14 = icmp eq i1 %13, false, !insn.addr !596
  br i1 %14, label %dec_label_pc_3c90, label %dec_label_pc_3c7a, !insn.addr !596

dec_label_pc_3c7a:                                ; preds = %dec_label_pc_3c6a
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  ret i64 %r12.0.reload, !insn.addr !597

dec_label_pc_3c90:                                ; preds = %dec_label_pc_3c6a
  call void @__stack_chk_fail(), !insn.addr !598
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !599

; uselistorder directives
  uselistorder i64 %7, { 1, 0 }
  uselistorder i64* %stack_var_-24, { 1, 0 }
  uselistorder i64* %r12.0.reg2mem, { 0, 2, 1 }
  uselistorder i64 ptrtoint (i32* @0 to i64), { 1, 2, 3, 4, 5, 6, 0 }
  uselistorder label %dec_label_pc_3c6a, { 1, 0 }
}

define i32 @param_pthread_join() local_unnamed_addr {
dec_label_pc_3ca0:
  %r12.1.reg2mem = alloca i32, !insn.addr !600
  %r12.0.reg2mem = alloca i32, !insn.addr !600
  %rbx.1.reg2mem = alloca i64, !insn.addr !600
  %rbp.0.reg2mem = alloca i64, !insn.addr !600
  %rbx.0.reg2mem = alloca i64, !insn.addr !600
  %stack_var_-96 = alloca i64, align 8
  %stack_var_-68 = alloca i64, align 8
  %stack_var_-104 = alloca i64, align 8
  %stack_var_-136 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !601
  %1 = ptrtoint i64* %stack_var_-136 to i64, !insn.addr !602
  %2 = ptrtoint i64* %stack_var_-104 to i64, !insn.addr !603
  %3 = ptrtoint i64* %stack_var_-68 to i64, !insn.addr !604
  store i64 42949672961, i64* %stack_var_-104, align 8, !insn.addr !605
  store i64 47244640256, i64* %stack_var_-96, align 8, !insn.addr !606
  store i64 %2, i64* %rbx.0.reg2mem, !insn.addr !607
  store i64 %1, i64* %rbp.0.reg2mem, !insn.addr !607
  br label %dec_label_pc_3d15, !insn.addr !607

dec_label_pc_3d15:                                ; preds = %dec_label_pc_3d2c, %dec_label_pc_3ca0
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %4 = inttoptr i64 %rbp.0.reload to i32*, !insn.addr !608
  %5 = inttoptr i64 %rbx.0.reload to i64*, !insn.addr !608
  %6 = call i32 @pthread_create(i32* %4, i64* null, i64* (i64*)* inttoptr (i64 10400 to i64* (i64*)*), i64* %5), !insn.addr !608
  %7 = icmp eq i32 %6, 0, !insn.addr !609
  %8 = icmp eq i1 %7, false, !insn.addr !610
  store i32 -1, i32* %r12.1.reg2mem, !insn.addr !610
  br i1 %8, label %dec_label_pc_3d63, label %dec_label_pc_3d2c, !insn.addr !610

dec_label_pc_3d2c:                                ; preds = %dec_label_pc_3d15
  %9 = add i64 %rbx.0.reload, 12, !insn.addr !611
  %10 = add i64 %rbp.0.reload, 8, !insn.addr !612
  %11 = icmp eq i64 %9, %3, !insn.addr !613
  %12 = icmp eq i1 %11, false, !insn.addr !614
  store i64 %9, i64* %rbx.0.reg2mem, !insn.addr !614
  store i64 %10, i64* %rbp.0.reg2mem, !insn.addr !614
  br i1 %12, label %dec_label_pc_3d15, label %dec_label_pc_3d39, !insn.addr !614

dec_label_pc_3d39:                                ; preds = %dec_label_pc_3d2c
  %13 = ptrtoint i64* %stack_var_-96 to i64, !insn.addr !615
  store i64 0, i64* %rbx.1.reg2mem, !insn.addr !615
  store i32 %6, i32* %r12.0.reg2mem, !insn.addr !615
  br label %dec_label_pc_3d40, !insn.addr !615

dec_label_pc_3d40:                                ; preds = %dec_label_pc_3d50, %dec_label_pc_3d39
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %14 = mul i64 %rbx.1.reload, 8, !insn.addr !616
  %15 = add i64 %14, %1, !insn.addr !616
  %16 = inttoptr i64 %15 to i64*, !insn.addr !616
  %17 = load i64, i64* %16, align 8, !insn.addr !616
  %18 = trunc i64 %17 to i32, !insn.addr !617
  %19 = call i32 @pthread_join(i32 %18, i64** null), !insn.addr !617
  %20 = icmp eq i32 %19, 0, !insn.addr !618
  %21 = icmp eq i1 %20, false, !insn.addr !619
  store i32 -2, i32* %r12.1.reg2mem, !insn.addr !619
  br i1 %21, label %dec_label_pc_3d63, label %dec_label_pc_3d50, !insn.addr !619

dec_label_pc_3d50:                                ; preds = %dec_label_pc_3d40
  %r12.0.reload = load i32, i32* %r12.0.reg2mem
  %22 = add nuw nsw i64 %rbx.1.reload, 1, !insn.addr !620
  %23 = mul nuw nsw i64 %rbx.1.reload, 12, !insn.addr !621
  %24 = add i64 %23, %13, !insn.addr !621
  %25 = inttoptr i64 %24 to i32*, !insn.addr !621
  %26 = load i32, i32* %25, align 4, !insn.addr !621
  %27 = add i32 %26, %r12.0.reload, !insn.addr !621
  %28 = icmp eq i64 %rbx.1.reload, 2, !insn.addr !622
  %29 = icmp eq i1 %28, false, !insn.addr !623
  store i64 %22, i64* %rbx.1.reg2mem, !insn.addr !623
  store i32 %27, i32* %r12.0.reg2mem, !insn.addr !623
  store i32 %27, i32* %r12.1.reg2mem, !insn.addr !623
  br i1 %29, label %dec_label_pc_3d40, label %dec_label_pc_3d63, !insn.addr !623

dec_label_pc_3d63:                                ; preds = %dec_label_pc_3d15, %dec_label_pc_3d40, %dec_label_pc_3d50
  %30 = call i64 @__readfsqword(i64 40), !insn.addr !624
  %31 = icmp eq i64 %0, %30, !insn.addr !624
  %32 = icmp eq i1 %31, false, !insn.addr !625
  br i1 %32, label %dec_label_pc_3d98, label %dec_label_pc_3d73, !insn.addr !625

dec_label_pc_3d73:                                ; preds = %dec_label_pc_3d63
  %r12.1.reload = load i32, i32* %r12.1.reg2mem
  ret i32 %r12.1.reload, !insn.addr !626

dec_label_pc_3d98:                                ; preds = %dec_label_pc_3d63
  call void @__stack_chk_fail(), !insn.addr !627
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !628

; uselistorder directives
  uselistorder i64 %rbx.0.reload, { 1, 0 }
  uselistorder i64 %rbp.0.reload, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbp.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r12.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r12.1.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64 12, { 1, 2, 3, 0 }
  uselistorder label %dec_label_pc_3d63, { 2, 1, 0 }
}

define i64 @call_pthread_join() local_unnamed_addr {
dec_label_pc_3da0:
  %0 = call i32 @param_pthread_join(), !insn.addr !629
  %1 = sext i32 %0 to i64, !insn.addr !629
  ret i64 %1, !insn.addr !629
}

define i32 @param_mutex_lock(i32 %thread_count, i32 %iterations_per_thread) local_unnamed_addr {
dec_label_pc_3db0:
  %storemerge.reg2mem = alloca i32, !insn.addr !630
  %rbx.0.reg2mem = alloca i64, !insn.addr !630
  %r15.0.reg2mem = alloca i64, !insn.addr !630
  %stack_var_-60 = alloca i32, align 4
  %0 = mul i32 %thread_count, 8, !insn.addr !631
  store i32 %iterations_per_thread, i32* %stack_var_-60, align 4, !insn.addr !632
  %1 = call i64* @malloc(i32 %0), !insn.addr !633
  %2 = icmp eq i64* %1, null, !insn.addr !634
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !635
  br i1 %2, label %dec_label_pc_3e8c, label %dec_label_pc_3de2, !insn.addr !635

dec_label_pc_3de2:                                ; preds = %dec_label_pc_3db0
  store i32 0, i32* @shared_counter, align 4, !insn.addr !636
  %3 = icmp slt i32 %thread_count, 1
  br i1 %3, label %dec_label_pc_3e63, label %dec_label_pc_3df5, !insn.addr !637

dec_label_pc_3df5:                                ; preds = %dec_label_pc_3de2
  %4 = zext i32 %thread_count to i64
  %5 = ptrtoint i64* %1 to i64, !insn.addr !633
  %6 = mul i64 %4, 8, !insn.addr !638
  %7 = add i64 %6, %5, !insn.addr !638
  %8 = bitcast i32* %stack_var_-60 to i64*, !insn.addr !639
  store i64 %5, i64* %r15.0.reg2mem, !insn.addr !640
  br label %dec_label_pc_3e19, !insn.addr !640

dec_label_pc_3e10:                                ; preds = %dec_label_pc_3e19
  %9 = add i64 %r15.0.reload, 8, !insn.addr !641
  %10 = icmp eq i64 %9, %7, !insn.addr !642
  store i64 %9, i64* %r15.0.reg2mem, !insn.addr !643
  store i64 %5, i64* %rbx.0.reg2mem, !insn.addr !643
  br i1 %10, label %dec_label_pc_3e50, label %dec_label_pc_3e19, !insn.addr !643

dec_label_pc_3e19:                                ; preds = %dec_label_pc_3e10, %dec_label_pc_3df5
  %r15.0.reload = load i64, i64* %r15.0.reg2mem
  %11 = inttoptr i64 %r15.0.reload to i32*, !insn.addr !639
  %12 = call i32 @pthread_create(i32* %11, i64* null, i64* (i64*)* inttoptr (i64 10480 to i64* (i64*)*), i64* nonnull %8), !insn.addr !639
  %13 = icmp eq i32 %12, 0, !insn.addr !644
  br i1 %13, label %dec_label_pc_3e10, label %dec_label_pc_3e2d, !insn.addr !645

dec_label_pc_3e2d:                                ; preds = %dec_label_pc_3e19
  call void @free(i64* nonnull %1), !insn.addr !646
  ret i32 -2, !insn.addr !647

dec_label_pc_3e50:                                ; preds = %dec_label_pc_3e10, %dec_label_pc_3e50
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %14 = inttoptr i64 %rbx.0.reload to i64*, !insn.addr !648
  %15 = load i64, i64* %14, align 8, !insn.addr !648
  %16 = add i64 %rbx.0.reload, 8, !insn.addr !649
  %17 = trunc i64 %15 to i32, !insn.addr !650
  %18 = call i32 @pthread_join(i32 %17, i64** null), !insn.addr !650
  %19 = icmp eq i64 %16, %7, !insn.addr !651
  %20 = icmp eq i1 %19, false, !insn.addr !652
  store i64 %16, i64* %rbx.0.reg2mem, !insn.addr !652
  br i1 %20, label %dec_label_pc_3e50, label %dec_label_pc_3e63, !insn.addr !652

dec_label_pc_3e63:                                ; preds = %dec_label_pc_3e50, %dec_label_pc_3de2
  call void @free(i64* nonnull %1), !insn.addr !653
  %21 = load i32, i32* %stack_var_-60, align 4, !insn.addr !654
  %22 = mul i32 %21, %thread_count, !insn.addr !654
  %23 = load i32, i32* @shared_counter, align 4, !insn.addr !655
  %24 = icmp eq i32 %23, %22, !insn.addr !656
  %25 = icmp eq i1 %24, false, !insn.addr !657
  %phitmp = select i1 %25, i32 -3, i32 42, !insn.addr !657
  store i32 %phitmp, i32* %storemerge.reg2mem, !insn.addr !657
  br label %dec_label_pc_3e8c, !insn.addr !657

dec_label_pc_3e8c:                                ; preds = %dec_label_pc_3db0, %dec_label_pc_3e63
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !658

; uselistorder directives
  uselistorder i64* %1, { 0, 1, 3, 2 }
  uselistorder i32* %stack_var_-60, { 1, 0, 2 }
  uselistorder i64* %rbx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %thread_count, { 1, 2, 3, 0 }
  uselistorder label %dec_label_pc_3e8c, { 1, 0 }
  uselistorder label %dec_label_pc_3e50, { 1, 0 }
}

define i64 @call_mutex_lock() local_unnamed_addr {
dec_label_pc_3ea0:
  %0 = call i32 @param_mutex_lock(i32 4, i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !659
  %1 = sext i32 %0 to i64, !insn.addr !659
  ret i64 %1, !insn.addr !659
}

define i32 @param_condition_variable() local_unnamed_addr {
dec_label_pc_3ec0:
  %r12.0.reg2mem = alloca i32, !insn.addr !660
  %stack_var_-24 = alloca i64, align 8
  %consumer_ret_-32 = alloca i8*, align 8
  %consumer_-40 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !661
  store i32 0, i32* @ready, align 4, !insn.addr !662
  store i32 0, i32* @data, align 4, !insn.addr !663
  %1 = bitcast i8** %consumer_ret_-32 to i32*, !insn.addr !664
  %2 = call i32 @pthread_create(i32* nonnull %1, i64* null, i64* (i64*)* inttoptr (i64 10576 to i64* (i64*)*), i64* null), !insn.addr !664
  %3 = icmp eq i32 %2, 0, !insn.addr !665
  %4 = icmp eq i1 %3, false, !insn.addr !666
  store i32 -1, i32* %r12.0.reg2mem, !insn.addr !666
  br i1 %4, label %dec_label_pc_3f45, label %dec_label_pc_3f07, !insn.addr !666

dec_label_pc_3f07:                                ; preds = %dec_label_pc_3ec0
  %5 = bitcast i64* %consumer_-40 to i32*, !insn.addr !667
  %6 = call i32 @pthread_create(i32* nonnull %5, i64* null, i64* (i64*)* inttoptr (i64 10688 to i64* (i64*)*), i64* null), !insn.addr !667
  %7 = icmp eq i32 %6, 0, !insn.addr !668
  %8 = icmp eq i1 %7, false, !insn.addr !669
  %9 = load i8*, i8** %consumer_ret_-32, align 8
  %10 = ptrtoint i8* %9 to i64
  %11 = trunc i64 %10 to i32
  br i1 %8, label %dec_label_pc_3f70, label %dec_label_pc_3f1e, !insn.addr !669

dec_label_pc_3f1e:                                ; preds = %dec_label_pc_3f07
  %12 = bitcast i64* %stack_var_-24 to i64**, !insn.addr !670
  %13 = call i32 @pthread_join(i32 %11, i64** nonnull %12), !insn.addr !670
  %14 = load i64, i64* %consumer_-40, align 8, !insn.addr !671
  %15 = trunc i64 %14 to i32, !insn.addr !672
  %16 = call i32 @pthread_join(i32 %15, i64** null), !insn.addr !672
  %17 = load i64, i64* %stack_var_-24, align 8, !insn.addr !673
  %18 = inttoptr i64 %17 to i32*, !insn.addr !674
  %19 = load i32, i32* %18, align 4, !insn.addr !674
  %20 = inttoptr i64 %17 to i64*, !insn.addr !675
  call void @free(i64* %20), !insn.addr !675
  store i32 %19, i32* %r12.0.reg2mem, !insn.addr !675
  br label %dec_label_pc_3f45, !insn.addr !675

dec_label_pc_3f45:                                ; preds = %dec_label_pc_3ec0, %dec_label_pc_3f70, %dec_label_pc_3f1e
  %21 = call i64 @__readfsqword(i64 40), !insn.addr !676
  %22 = icmp eq i64 %0, %21, !insn.addr !676
  %23 = icmp eq i1 %22, false, !insn.addr !677
  br i1 %23, label %dec_label_pc_3f82, label %dec_label_pc_3f55, !insn.addr !677

dec_label_pc_3f55:                                ; preds = %dec_label_pc_3f45
  %r12.0.reload = load i32, i32* %r12.0.reg2mem
  ret i32 %r12.0.reload, !insn.addr !678

dec_label_pc_3f70:                                ; preds = %dec_label_pc_3f07
  %24 = call i32 @pthread_cancel(i32 %11), !insn.addr !679
  store i32 -2, i32* %r12.0.reg2mem, !insn.addr !680
  br label %dec_label_pc_3f45, !insn.addr !680

dec_label_pc_3f82:                                ; preds = %dec_label_pc_3f45
  call void @__stack_chk_fail(), !insn.addr !681
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !682

; uselistorder directives
  uselistorder i64 %17, { 1, 0 }
  uselistorder i32 %11, { 1, 0 }
  uselistorder i64* %consumer_-40, { 1, 0 }
  uselistorder i8** %consumer_ret_-32, { 1, 0 }
  uselistorder i64* %stack_var_-24, { 1, 0 }
  uselistorder i32* %r12.0.reg2mem, { 3, 0, 2, 1 }
  uselistorder label %dec_label_pc_3f45, { 1, 2, 0 }
}

define i64 @call_condition_variable() local_unnamed_addr {
dec_label_pc_3f90:
  %0 = call i32 @param_condition_variable(), !insn.addr !683
  %1 = sext i32 %0 to i64, !insn.addr !683
  ret i64 %1, !insn.addr !683
}

define i32 @param_atomic_ops(i32 %thread_count, i32 %iterations) local_unnamed_addr {
dec_label_pc_3fa0:
  %rbx.1.reg2mem = alloca i64, !insn.addr !684
  %rax.0.reg2mem = alloca i32, !insn.addr !684
  %rbx.0.reg2mem = alloca i64, !insn.addr !684
  %stack_var_-72 = alloca i32, align 4
  %stack_var_-76 = alloca i32, align 4
  %0 = mul i32 %thread_count, 8, !insn.addr !685
  store i32 %iterations, i32* %stack_var_-76, align 4, !insn.addr !686
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !687
  %2 = call i64* @malloc(i32 %0), !insn.addr !688
  %3 = icmp eq i64* %2, null, !insn.addr !689
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !690
  br i1 %3, label %dec_label_pc_403a, label %dec_label_pc_3fde, !insn.addr !690

dec_label_pc_3fde:                                ; preds = %dec_label_pc_3fa0
  store i32 0, i32* @atomic_counter, align 4, !insn.addr !691
  %4 = icmp slt i32 %thread_count, 1
  br i1 %4, label %dec_label_pc_40c6, label %dec_label_pc_3ff2, !insn.addr !692

dec_label_pc_3ff2:                                ; preds = %dec_label_pc_3fde
  %5 = sext i32 %thread_count to i64, !insn.addr !693
  %6 = ptrtoint i64* %2 to i64, !insn.addr !688
  %7 = mul i64 %5, 8, !insn.addr !694
  %8 = and i64 %7, 34359738360, !insn.addr !695
  %9 = add i64 %8, %6, !insn.addr !695
  %10 = bitcast i32* %stack_var_-76 to i64*, !insn.addr !696
  store i64 %6, i64* %rbx.0.reg2mem, !insn.addr !697
  br label %dec_label_pc_4019, !insn.addr !697

dec_label_pc_4010:                                ; preds = %dec_label_pc_4019
  %11 = add i64 %rbx.0.reload, 8, !insn.addr !698
  %12 = icmp eq i64 %11, %9, !insn.addr !699
  store i64 %11, i64* %rbx.0.reg2mem, !insn.addr !700
  br i1 %12, label %dec_label_pc_4060, label %dec_label_pc_4019, !insn.addr !700

dec_label_pc_4019:                                ; preds = %dec_label_pc_4010, %dec_label_pc_3ff2
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %13 = inttoptr i64 %rbx.0.reload to i32*, !insn.addr !696
  %14 = call i32 @pthread_create(i32* %13, i64* null, i64* (i64*)* inttoptr (i64 10768 to i64* (i64*)*), i64* nonnull %10), !insn.addr !696
  %15 = icmp eq i32 %14, 0, !insn.addr !701
  br i1 %15, label %dec_label_pc_4010, label %dec_label_pc_402d, !insn.addr !702

dec_label_pc_402d:                                ; preds = %dec_label_pc_4019
  call void @free(i64* nonnull %2), !insn.addr !703
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !704
  br label %dec_label_pc_403a, !insn.addr !704

dec_label_pc_403a:                                ; preds = %dec_label_pc_3fa0, %dec_label_pc_4095, %dec_label_pc_402d
  %16 = call i64 @__readfsqword(i64 40), !insn.addr !705
  %17 = icmp eq i64 %1, %16, !insn.addr !705
  %18 = icmp eq i1 %17, false, !insn.addr !706
  br i1 %18, label %dec_label_pc_40f5, label %dec_label_pc_404e, !insn.addr !706

dec_label_pc_404e:                                ; preds = %dec_label_pc_403a
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !707

dec_label_pc_4060:                                ; preds = %dec_label_pc_4010
  %19 = call i32 @pthread_create(i32* nonnull %stack_var_-72, i64* null, i64* (i64*)* inttoptr (i64 10832 to i64* (i64*)*), i64* null), !insn.addr !708
  %20 = icmp eq i32 %19, 0, !insn.addr !709
  br i1 %20, label %dec_label_pc_40b8, label %dec_label_pc_4079, !insn.addr !710

dec_label_pc_4079:                                ; preds = %dec_label_pc_40b8, %dec_label_pc_4060
  store i64 0, i64* %rbx.1.reg2mem, !insn.addr !711
  br label %dec_label_pc_4080, !insn.addr !711

dec_label_pc_4080:                                ; preds = %dec_label_pc_4080, %dec_label_pc_4079
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %21 = mul i64 %rbx.1.reload, 8, !insn.addr !712
  %22 = add i64 %21, %6, !insn.addr !712
  %23 = inttoptr i64 %22 to i64*, !insn.addr !712
  %24 = load i64, i64* %23, align 8, !insn.addr !712
  %25 = add nuw nsw i64 %rbx.1.reload, 1, !insn.addr !713
  %26 = trunc i64 %24 to i32, !insn.addr !714
  %27 = call i32 @pthread_join(i32 %26, i64** null), !insn.addr !714
  %28 = icmp slt i64 %25, %5, !insn.addr !715
  store i64 %25, i64* %rbx.1.reg2mem, !insn.addr !715
  br i1 %28, label %dec_label_pc_4080, label %dec_label_pc_4095, !insn.addr !715

dec_label_pc_4095:                                ; preds = %dec_label_pc_4080, %dec_label_pc_40df, %dec_label_pc_40c6
  %29 = load i32, i32* @atomic_counter, align 4, !insn.addr !716
  call void @free(i64* nonnull %2), !insn.addr !717
  %30 = icmp slt i32 %29, 1
  %phitmp = select i1 %30, i32 -3, i32 42, !insn.addr !718
  store i32 %phitmp, i32* %rax.0.reg2mem, !insn.addr !719
  br label %dec_label_pc_403a, !insn.addr !719

dec_label_pc_40b8:                                ; preds = %dec_label_pc_4060
  %31 = load i32, i32* %stack_var_-72, align 4, !insn.addr !720
  %32 = call i32 @pthread_join(i32 %31, i64** null), !insn.addr !721
  br label %dec_label_pc_4079, !insn.addr !722

dec_label_pc_40c6:                                ; preds = %dec_label_pc_3fde
  %33 = call i32 @pthread_create(i32* nonnull %stack_var_-72, i64* null, i64* (i64*)* inttoptr (i64 10832 to i64* (i64*)*), i64* null), !insn.addr !723
  %34 = icmp eq i32 %33, 0, !insn.addr !724
  %35 = icmp eq i1 %34, false, !insn.addr !725
  br i1 %35, label %dec_label_pc_4095, label %dec_label_pc_40df, !insn.addr !725

dec_label_pc_40df:                                ; preds = %dec_label_pc_40c6
  %36 = load i32, i32* %stack_var_-72, align 4, !insn.addr !726
  %37 = call i32 @pthread_join(i32 %36, i64** null), !insn.addr !727
  br label %dec_label_pc_4095, !insn.addr !728

dec_label_pc_40f5:                                ; preds = %dec_label_pc_403a
  call void @__stack_chk_fail(), !insn.addr !729
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !730

; uselistorder directives
  uselistorder i64 %6, { 2, 0, 1 }
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64* %2, { 0, 1, 3, 2 }
  uselistorder i32* %stack_var_-72, { 1, 3, 0, 2 }
  uselistorder i32* %rax.0.reg2mem, { 3, 0, 2, 1 }
  uselistorder i64* %rbx.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* @atomic_counter, { 2, 3, 4, 5, 0, 1 }
  uselistorder i32 %thread_count, { 2, 1, 0 }
  uselistorder label %dec_label_pc_4095, { 1, 2, 0 }
  uselistorder label %dec_label_pc_403a, { 1, 2, 0 }
}

define i64 @call_atomic_ops() local_unnamed_addr {
dec_label_pc_4100:
  %0 = call i32 @param_atomic_ops(i32 4, i32 500), !insn.addr !731
  %1 = sext i32 %0 to i64, !insn.addr !731
  ret i64 %1, !insn.addr !731
}

define i32 @param_thread_local_storage(i32 %thread_count) local_unnamed_addr {
dec_label_pc_4120:
  %r14.1.reg2mem = alloca i32, !insn.addr !732
  %r13.2.reg2mem = alloca i32, !insn.addr !732
  %r15.1.reg2mem = alloca i64, !insn.addr !732
  %r14.0.reg2mem = alloca i32, !insn.addr !732
  %r13.1.reg2mem = alloca i32, !insn.addr !732
  %rax.0.reg2mem = alloca i32, !insn.addr !732
  %rbx.0.reg2mem = alloca i64, !insn.addr !732
  %r15.0.reg2mem = alloca i64, !insn.addr !732
  %r12.0.reg2mem = alloca i64, !insn.addr !732
  %r13.0.reg2mem = alloca i64, !insn.addr !732
  %stack_var_-72 = alloca i64, align 8
  %0 = mul i32 %thread_count, 8, !insn.addr !733
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !734
  %2 = call i64* @malloc(i32 %0), !insn.addr !735
  %3 = call i64* @malloc(i32 %0), !insn.addr !736
  %4 = icmp eq i64* %2, null, !insn.addr !737
  %5 = icmp eq i64* %3, null, !insn.addr !738
  %or.cond = or i1 %4, %5
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !739
  br i1 %or.cond, label %dec_label_pc_4237, label %dec_label_pc_417d, !insn.addr !739

dec_label_pc_417d:                                ; preds = %dec_label_pc_4120
  %6 = sext i32 %thread_count to i64, !insn.addr !740
  %7 = ptrtoint i64* %3 to i64, !insn.addr !736
  %8 = icmp slt i32 %thread_count, 1
  store i64 0, i64* %r13.0.reg2mem, !insn.addr !741
  store i32 0, i32* %r13.2.reg2mem, !insn.addr !741
  store i32 0, i32* %r14.1.reg2mem, !insn.addr !741
  br i1 %8, label %dec_label_pc_42a4, label %dec_label_pc_4190, !insn.addr !741

dec_label_pc_4190:                                ; preds = %dec_label_pc_417d, %dec_label_pc_4190
  %r13.0.reload = load i64, i64* %r13.0.reg2mem
  %9 = call i64* @malloc(i32 16), !insn.addr !742
  %10 = ptrtoint i64* %9 to i64, !insn.addr !742
  %11 = and i64 %r13.0.reload, 4294967295, !insn.addr !743
  %12 = mul i64 %r13.0.reload, 8, !insn.addr !744
  %13 = add i64 %12, %7, !insn.addr !744
  %14 = inttoptr i64 %13 to i64*, !insn.addr !744
  store i64 %10, i64* %14, align 8, !insn.addr !744
  %15 = add i64 %r13.0.reload, 1, !insn.addr !745
  %16 = bitcast i64* %9 to i8*, !insn.addr !746
  %17 = call i32 (i8*, i32, i32, i32, i8*, ...) @__snprintf_chk(i8* %16, i32 16, i32 1, i32 16, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_52ba, i64 0, i64 0), i64 %11), !insn.addr !746
  %18 = icmp eq i64 %15, %6, !insn.addr !747
  %19 = icmp eq i1 %18, false, !insn.addr !748
  store i64 %15, i64* %r13.0.reg2mem, !insn.addr !748
  br i1 %19, label %dec_label_pc_4190, label %dec_label_pc_41c7, !insn.addr !748

dec_label_pc_41c7:                                ; preds = %dec_label_pc_4190
  %20 = ptrtoint i64* %2 to i64, !insn.addr !749
  store i64 0, i64* %r12.0.reg2mem, !insn.addr !750
  store i64 %20, i64* %r15.0.reg2mem, !insn.addr !750
  br label %dec_label_pc_41ed, !insn.addr !750

dec_label_pc_41e0:                                ; preds = %dec_label_pc_41ed
  %21 = add nuw i64 %r12.0.reload, 1, !insn.addr !751
  %22 = add i64 %r15.0.reload, 8, !insn.addr !752
  %23 = icmp eq i64 %21, %6, !insn.addr !753
  store i64 %21, i64* %r12.0.reg2mem, !insn.addr !754
  store i64 %22, i64* %r15.0.reg2mem, !insn.addr !754
  br i1 %23, label %dec_label_pc_4270.preheader, label %dec_label_pc_41ed, !insn.addr !754

dec_label_pc_4270.preheader:                      ; preds = %dec_label_pc_41e0
  %24 = bitcast i64* %stack_var_-72 to i64**, !insn.addr !755
  store i32 0, i32* %r13.1.reg2mem
  store i32 0, i32* %r14.0.reg2mem
  store i64 0, i64* %r15.1.reg2mem
  br label %dec_label_pc_4270

dec_label_pc_41ed:                                ; preds = %dec_label_pc_41e0, %dec_label_pc_41c7
  %r15.0.reload = load i64, i64* %r15.0.reg2mem
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  %25 = mul i64 %r12.0.reload, 8, !insn.addr !756
  %26 = add i64 %25, %7
  %27 = inttoptr i64 %26 to i64*, !insn.addr !756
  %28 = load i64, i64* %27, align 8, !insn.addr !756
  %29 = inttoptr i64 %r15.0.reload to i32*, !insn.addr !757
  %30 = inttoptr i64 %28 to i64*, !insn.addr !757
  %31 = call i32 @pthread_create(i32* %29, i64* null, i64* (i64*)* inttoptr (i64 10864 to i64* (i64*)*), i64* %30), !insn.addr !757
  %32 = icmp eq i32 %31, 0, !insn.addr !758
  store i64 %7, i64* %rbx.0.reg2mem, !insn.addr !759
  br i1 %32, label %dec_label_pc_41e0, label %dec_label_pc_4210, !insn.addr !759

dec_label_pc_4210:                                ; preds = %dec_label_pc_41ed, %dec_label_pc_4210
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %33 = inttoptr i64 %rbx.0.reload to i64*, !insn.addr !760
  %34 = load i64, i64* %33, align 8, !insn.addr !760
  %35 = add i64 %rbx.0.reload, 8, !insn.addr !761
  %36 = inttoptr i64 %34 to i64*, !insn.addr !762
  call void @free(i64* %36), !insn.addr !762
  %37 = icmp eq i64 %26, %rbx.0.reload, !insn.addr !763
  %38 = icmp eq i1 %37, false, !insn.addr !764
  store i64 %35, i64* %rbx.0.reg2mem, !insn.addr !764
  br i1 %38, label %dec_label_pc_4210, label %dec_label_pc_4221, !insn.addr !764

dec_label_pc_4221:                                ; preds = %dec_label_pc_4210
  call void @free(i64* nonnull %3), !insn.addr !765
  call void @free(i64* nonnull %2), !insn.addr !766
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !767
  br label %dec_label_pc_4237, !insn.addr !767

dec_label_pc_4237:                                ; preds = %dec_label_pc_4120, %dec_label_pc_42c1, %dec_label_pc_42e8, %dec_label_pc_4221
  %39 = call i64 @__readfsqword(i64 40), !insn.addr !768
  %40 = icmp eq i64 %1, %39, !insn.addr !768
  %41 = icmp eq i1 %40, false, !insn.addr !769
  br i1 %41, label %dec_label_pc_42fa, label %dec_label_pc_424b, !insn.addr !769

dec_label_pc_424b:                                ; preds = %dec_label_pc_4237
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !770

dec_label_pc_4270:                                ; preds = %dec_label_pc_4270.preheader, %dec_label_pc_4270
  %r15.1.reload = load i64, i64* %r15.1.reg2mem
  %r14.0.reload = load i32, i32* %r14.0.reg2mem
  %r13.1.reload = load i32, i32* %r13.1.reg2mem
  %42 = mul i64 %r15.1.reload, 8, !insn.addr !771
  %43 = add i64 %42, %20, !insn.addr !771
  %44 = inttoptr i64 %43 to i64*, !insn.addr !771
  %45 = load i64, i64* %44, align 8, !insn.addr !771
  %46 = trunc i64 %45 to i32, !insn.addr !755
  %47 = call i32 @pthread_join(i32 %46, i64** nonnull %24), !insn.addr !755
  %48 = load i64, i64* %stack_var_-72, align 8, !insn.addr !772
  %49 = inttoptr i64 %48 to i32*, !insn.addr !773
  %50 = load i32, i32* %49, align 4, !insn.addr !773
  %51 = add i32 %50, %r14.0.reload, !insn.addr !773
  %52 = add i64 %48, 4, !insn.addr !774
  %53 = inttoptr i64 %52 to i32*, !insn.addr !774
  %54 = load i32, i32* %53, align 4, !insn.addr !774
  %55 = add i32 %54, %r13.1.reload, !insn.addr !774
  %56 = inttoptr i64 %48 to i64*, !insn.addr !775
  call void @free(i64* %56), !insn.addr !775
  %57 = add i64 %42, %7, !insn.addr !776
  %58 = inttoptr i64 %57 to i64*, !insn.addr !776
  %59 = load i64, i64* %58, align 8, !insn.addr !776
  %60 = add i64 %r15.1.reload, 1, !insn.addr !777
  %61 = inttoptr i64 %59 to i64*, !insn.addr !778
  call void @free(i64* %61), !insn.addr !778
  %62 = icmp eq i64 %60, %6, !insn.addr !779
  %63 = icmp eq i1 %62, false, !insn.addr !780
  store i32 %55, i32* %r13.1.reg2mem, !insn.addr !780
  store i32 %51, i32* %r14.0.reg2mem, !insn.addr !780
  store i64 %60, i64* %r15.1.reg2mem, !insn.addr !780
  store i32 %55, i32* %r13.2.reg2mem, !insn.addr !780
  store i32 %51, i32* %r14.1.reg2mem, !insn.addr !780
  br i1 %63, label %dec_label_pc_4270, label %dec_label_pc_42a4, !insn.addr !780

dec_label_pc_42a4:                                ; preds = %dec_label_pc_4270, %dec_label_pc_417d
  %r14.1.reload = load i32, i32* %r14.1.reg2mem
  call void @free(i64* nonnull %3), !insn.addr !781
  call void @free(i64* nonnull %2), !insn.addr !782
  %64 = mul i32 %thread_count, 100, !insn.addr !783
  %65 = icmp eq i32 %64, %r14.1.reload, !insn.addr !784
  %66 = icmp eq i1 %65, false, !insn.addr !785
  br i1 %66, label %dec_label_pc_42e8, label %dec_label_pc_42c1, !insn.addr !785

dec_label_pc_42c1:                                ; preds = %dec_label_pc_42a4
  %r13.2.reload = load i32, i32* %r13.2.reg2mem
  %67 = mul i32 %thread_count, 150, !insn.addr !786
  %68 = icmp eq i32 %67, %r13.2.reload, !insn.addr !787
  %69 = icmp eq i1 %68, false, !insn.addr !788
  store i32 42, i32* %rax.0.reg2mem, !insn.addr !788
  br i1 %69, label %dec_label_pc_42e8, label %dec_label_pc_4237, !insn.addr !788

dec_label_pc_42e8:                                ; preds = %dec_label_pc_42c1, %dec_label_pc_42a4
  store i32 -3, i32* %rax.0.reg2mem, !insn.addr !789
  br label %dec_label_pc_4237, !insn.addr !789

dec_label_pc_42fa:                                ; preds = %dec_label_pc_4237
  call void @__stack_chk_fail(), !insn.addr !790
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !791

; uselistorder directives
  uselistorder i64 %48, { 1, 2, 0 }
  uselistorder i64 %42, { 1, 0 }
  uselistorder i64 %rbx.0.reload, { 2, 0, 1 }
  uselistorder i64 %r12.0.reload, { 1, 0 }
  uselistorder i64 %20, { 1, 0 }
  uselistorder i64 %r13.0.reload, { 1, 2, 0 }
  uselistorder i64 %7, { 1, 0, 2, 3 }
  uselistorder i64* %3, { 1, 2, 3, 0 }
  uselistorder i64* %stack_var_-72, { 1, 0 }
  uselistorder i64* %r13.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rax.0.reg2mem, { 4, 2, 0, 3, 1 }
  uselistorder i32* %r13.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r14.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r15.1.reg2mem, { 2, 0, 1 }
  uselistorder i32 -3, { 0, 4, 5, 1, 2, 6, 3 }
  uselistorder i32 42, { 0, 3, 4, 6, 2, 5, 1, 7 }
  uselistorder i64 4, { 5, 6, 1, 2, 0, 3, 4 }
  uselistorder i32 -2, { 0, 1, 2, 8, 3, 4, 5, 6, 7 }
  uselistorder i64 1, { 10, 11, 12, 13, 14, 0, 1, 2, 3, 9, 4, 5, 6, 7, 8 }
  uselistorder i64 8, { 0, 10, 1, 9, 2, 3, 11, 4, 12, 13, 5, 6, 14, 15, 7, 8 }
  uselistorder i64 4294967295, { 14, 0, 1, 9, 2, 15, 16, 3, 10, 11, 17, 18, 19, 20, 21, 22, 23, 4, 24, 5, 6, 7, 12, 13, 25, 26, 27, 28, 29, 30, 31, 32, 8 }
  uselistorder i32 -1, { 0, 1, 2, 3, 4, 11, 10, 6, 5, 7, 8, 9 }
  uselistorder i64* (i32)* @malloc, { 5, 4, 3, 2, 1, 0, 10, 9, 8, 7, 6, 11 }
  uselistorder i32 %thread_count, { 3, 2, 1, 4, 0 }
  uselistorder label %dec_label_pc_4270, { 1, 0 }
  uselistorder label %dec_label_pc_4237, { 2, 1, 3, 0 }
  uselistorder label %dec_label_pc_4210, { 1, 0 }
  uselistorder label %dec_label_pc_4190, { 1, 0 }
}

define i64 @call_thread_local_storage() local_unnamed_addr {
dec_label_pc_4300:
  %0 = call i32 @param_thread_local_storage(i32 4), !insn.addr !792
  %1 = sext i32 %0 to i64, !insn.addr !792
  ret i64 %1, !insn.addr !792
}

define void @test_thread_concurrency() local_unnamed_addr {
dec_label_pc_4310:
  %stack_var_-24 = alloca i64, align 8
  %stack_var_-32 = alloca i32, align 4
  %stack_var_-36 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !793
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_52c4 to i8*)), !insn.addr !794
  store i64 7, i64* %stack_var_-36, align 8, !insn.addr !795
  %2 = call i32 @pthread_create(i32* nonnull %stack_var_-32, i64* null, i64* (i64*)* inttoptr (i64 10448 to i64* (i64*)*), i64* nonnull %stack_var_-36), !insn.addr !796
  %3 = icmp eq i32 %2, 0, !insn.addr !797
  %4 = icmp eq i1 %3, false, !insn.addr !798
  br i1 %4, label %dec_label_pc_437a, label %dec_label_pc_435e, !insn.addr !798

dec_label_pc_435e:                                ; preds = %dec_label_pc_4310
  %5 = load i32, i32* %stack_var_-32, align 4, !insn.addr !799
  %6 = bitcast i64* %stack_var_-24 to i64**, !insn.addr !800
  %7 = call i32 @pthread_join(i32 %5, i64** nonnull %6), !insn.addr !800
  %8 = load i64, i64* %stack_var_-24, align 8, !insn.addr !801
  %9 = inttoptr i64 %8 to i64*, !insn.addr !802
  call void @free(i64* %9), !insn.addr !802
  br label %dec_label_pc_437a, !insn.addr !802

dec_label_pc_437a:                                ; preds = %dec_label_pc_4310, %dec_label_pc_435e
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_52e2 to i8*)), !insn.addr !803
  %11 = call i32 @param_pthread_join(), !insn.addr !804
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_52fe to i8*)), !insn.addr !805
  %13 = call i32 @param_mutex_lock(i32 4, i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !806
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_531b to i8*)), !insn.addr !807
  %15 = call i32 @param_condition_variable(), !insn.addr !808
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_5337 to i8*)), !insn.addr !809
  %17 = call i32 @param_atomic_ops(i32 4, i32 500), !insn.addr !810
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_5353 to i8*)), !insn.addr !811
  %19 = call i32 @param_thread_local_storage(i32 4), !insn.addr !812
  %20 = call i64 @__readfsqword(i64 40), !insn.addr !813
  %21 = icmp eq i64 %0, %20, !insn.addr !813
  %22 = icmp eq i1 %21, false, !insn.addr !814
  br i1 %22, label %dec_label_pc_4453, label %dec_label_pc_442c, !insn.addr !814

dec_label_pc_442c:                                ; preds = %dec_label_pc_437a
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_536f to i8*)), !insn.addr !815
  ret void, !insn.addr !815

dec_label_pc_4453:                                ; preds = %dec_label_pc_437a
  call void @__stack_chk_fail(), !insn.addr !816
  ret void, !insn.addr !816

; uselistorder directives
  uselistorder i64* %stack_var_-24, { 1, 0 }
  uselistorder void ()* @__stack_chk_fail, { 7, 11, 10, 9, 8, 17, 16, 3, 6, 5, 4, 15, 14, 0, 2, 13, 12, 1, 18 }
  uselistorder i32 ptrtoint (i32* @global_var_3e8 to i32), { 1, 2, 3, 4, 0, 5, 6 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 27, 26, 28 }
  uselistorder void (i64*)* @free, { 1, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 17, 16, 0, 15, 14, 18 }
  uselistorder i32 (i32, i64**)* @pthread_join, { 0, 8, 7, 6, 5, 4, 3, 2, 1, 10, 9, 11 }
  uselistorder i1 false, { 46, 47, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 6, 7, 8, 9, 57, 48, 49, 50, 51, 52, 53, 54, 55, 56, 10, 11, 12, 1, 64, 65, 13, 14, 15, 16, 58, 0, 59, 60, 18, 17, 20, 19, 3, 2, 62, 63, 61, 4, 21, 5, 22, 24, 25, 26, 27, 23 }
  uselistorder i32 0, { 54, 42, 2, 3, 0, 1, 43, 44, 45, 6, 46, 47, 48, 49, 50, 51, 52, 53, 25, 26, 77, 78, 56, 55, 58, 59, 60, 57, 61, 62, 7, 8, 63, 64, 65, 66, 67, 68, 69, 9, 10, 71, 70, 72, 11, 12, 73, 74, 13, 76, 75, 27, 28, 29, 30, 31, 32, 33, 4, 14, 34, 81, 79, 80, 82, 35, 36, 5, 37, 38, 39, 40, 41, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24 }
  uselistorder i32 (i32*, i64*, i64* (i64*)*, i64*)* @pthread_create, { 0, 8, 7, 6, 5, 4, 3, 2, 1, 10, 9, 11 }
  uselistorder i64* null, { 1, 2, 0, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
  uselistorder i64 0, { 0, 1, 17, 18, 2, 3, 4, 77, 78, 79, 80, 81, 5, 7, 6, 99, 8, 9, 100, 82, 83, 84, 85, 86, 87, 14, 15, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 10, 11, 12, 101, 16, 13, 102, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76 }
  uselistorder label %dec_label_pc_437a, { 1, 0 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_4458:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !817

; uselistorder directives
  uselistorder i32 1, { 16, 76, 77, 78, 79, 80, 81, 125, 119, 124, 83, 82, 126, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 84, 85, 127, 120, 34, 33, 32, 130, 129, 128, 35, 86, 131, 38, 37, 36, 135, 134, 133, 132, 43, 42, 41, 40, 39, 137, 121, 136, 44, 139, 122, 138, 45, 87, 88, 89, 90, 91, 92, 93, 140, 15, 94, 48, 47, 46, 95, 49, 96, 97, 142, 141, 50, 0, 98, 145, 144, 143, 51, 19, 14, 123, 52, 146, 13, 147, 12, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 54, 53, 57, 56, 55, 60, 59, 58, 63, 62, 61, 112, 113, 148, 64, 21, 20, 11, 65, 66, 10, 18, 17, 9, 114, 115, 73, 74, 151, 150, 149, 8, 7, 6, 5, 153, 116, 68, 67, 4, 154, 117, 155, 118, 69, 3, 2, 75, 71, 70, 156, 1, 152, 72 }
}

declare i32 @__snprintf_chk(i8*, i32, i32, i32, i8*, ...) local_unnamed_addr

declare i32 @raise(i32) local_unnamed_addr

declare void @free(i64*) local_unnamed_addr

declare i32* @__errno_location() local_unnamed_addr

declare i32 @unlink(i8*) local_unnamed_addr

declare i8* @strncpy(i8*, i8*, i32) local_unnamed_addr

declare void @_exit(i32) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @fread(i64*, i32, i32, %_IO_FILE*) local_unnamed_addr

declare i32 @setsockopt(i32, i32, i32, i64*, i32) local_unnamed_addr

declare i32 @shmdt(i64*) local_unnamed_addr

declare i32 @write(i32, i64*, i32) local_unnamed_addr

declare i32 @pthread_cond_wait(i64*, i64*) local_unnamed_addr

declare i32 @fclose(%_IO_FILE*) local_unnamed_addr

declare i8* @stpcpy(i8*, i8*) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i8* @strchr(i8*, i32) local_unnamed_addr

declare void @rewind(%_IO_FILE*) local_unnamed_addr

declare i64* @memset(i64*, i32, i32) local_unnamed_addr

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

declare i64* @memcpy(i64*, i64*, i32) local_unnamed_addr

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

declare i128 @__asm_pxor(i128, i128) local_unnamed_addr

declare i64 @__asm_movaps(i128) local_unnamed_addr

declare i32 @__readfsdword(i64) local_unnamed_addr

declare i64 @__readfsqword(i64) local_unnamed_addr

declare void @__writefsdword(i64, i32) local_unnamed_addr

!0 = !{i64 8192}
!1 = !{i64 8200}
!2 = !{i64 8207}
!3 = !{i64 8210}
!4 = !{i64 8212}
!5 = !{i64 8218}
!6 = !{i64 9156}
!7 = !{i64 9172}
!8 = !{i64 9188}
!9 = !{i64 9204}
!10 = !{i64 9220}
!11 = !{i64 9236}
!12 = !{i64 9252}
!13 = !{i64 9268}
!14 = !{i64 9284}
!15 = !{i64 9300}
!16 = !{i64 9316}
!17 = !{i64 9332}
!18 = !{i64 9348}
!19 = !{i64 9364}
!20 = !{i64 9380}
!21 = !{i64 9396}
!22 = !{i64 9412}
!23 = !{i64 9428}
!24 = !{i64 9444}
!25 = !{i64 9460}
!26 = !{i64 9476}
!27 = !{i64 9492}
!28 = !{i64 9508}
!29 = !{i64 9524}
!30 = !{i64 9540}
!31 = !{i64 9556}
!32 = !{i64 9572}
!33 = !{i64 9588}
!34 = !{i64 9604}
!35 = !{i64 9620}
!36 = !{i64 9636}
!37 = !{i64 9652}
!38 = !{i64 9668}
!39 = !{i64 9684}
!40 = !{i64 9700}
!41 = !{i64 9716}
!42 = !{i64 9732}
!43 = !{i64 9748}
!44 = !{i64 9764}
!45 = !{i64 9780}
!46 = !{i64 9796}
!47 = !{i64 9812}
!48 = !{i64 9828}
!49 = !{i64 9844}
!50 = !{i64 9860}
!51 = !{i64 9876}
!52 = !{i64 9892}
!53 = !{i64 9908}
!54 = !{i64 9924}
!55 = !{i64 9940}
!56 = !{i64 9956}
!57 = !{i64 9972}
!58 = !{i64 9988}
!59 = !{i64 10004}
!60 = !{i64 10020}
!61 = !{i64 10036}
!62 = !{i64 10052}
!63 = !{i64 10068}
!64 = !{i64 10090}
!65 = !{i64 10097}
!66 = !{i64 10104}
!67 = !{i64 10115}
!68 = !{i64 10159}
!69 = !{i64 10165}
!70 = !{i64 10216}
!71 = !{i64 10280}
!72 = !{i64 10292}
!73 = !{i64 10299}
!74 = !{i64 10302}
!75 = !{i64 10313}
!76 = !{i64 10315}
!77 = !{i64 10322}
!78 = !{i64 10327}
!79 = !{i64 10332}
!80 = !{i64 10340}
!81 = !{i64 10344}
!82 = !{i64 10356}
!83 = !{i64 10372}
!84 = !{i64 10382}
!85 = !{i64 10388}
!86 = !{i64 10400}
!87 = !{i64 10406}
!88 = !{i64 10409}
!89 = !{i64 10418}
!90 = !{i64 10425}
!91 = !{i64 10432}
!92 = !{i64 10434}
!93 = !{i64 10437}
!94 = !{i64 10439}
!95 = !{i64 10441}
!96 = !{i64 10446}
!97 = !{i64 10460}
!98 = !{i64 10463}
!99 = !{i64 10468}
!100 = !{i64 10471}
!101 = !{i64 10480}
!102 = !{i64 10494}
!103 = !{i64 10515}
!104 = !{i64 10518}
!105 = !{i64 10523}
!106 = !{i64 10532}
!107 = !{i64 10535}
!108 = !{i64 10541}
!109 = !{i64 10551}
!110 = !{i64 10556}
!111 = !{i64 10559}
!112 = !{i64 10567}
!113 = !{i64 10596}
!114 = !{i64 10601}
!115 = !{i64 10607}
!116 = !{i64 10609}
!117 = !{i64 10630}
!118 = !{i64 10635}
!119 = !{i64 10641}
!120 = !{i64 10643}
!121 = !{i64 10648}
!122 = !{i64 10654}
!123 = !{i64 10664}
!124 = !{i64 10669}
!125 = !{i64 10677}
!126 = !{i64 10705}
!127 = !{i64 10713}
!128 = !{i64 10725}
!129 = !{i64 10735}
!130 = !{i64 10745}
!131 = !{i64 10753}
!132 = !{i64 10761}
!133 = !{i64 10768}
!134 = !{i64 10776}
!135 = !{i64 10784}
!136 = !{i64 10792}
!137 = !{i64 10800}
!138 = !{i64 10808}
!139 = !{i64 10811}
!140 = !{i64 10813}
!141 = !{i64 10817}
!142 = !{i64 10842}
!143 = !{i64 10845}
!144 = !{i64 10853}
!145 = !{i64 10882}
!146 = !{i64 10890}
!147 = !{i64 10899}
!148 = !{i64 10902}
!149 = !{i64 10909}
!150 = !{i64 10917}
!151 = !{i64 10927}
!152 = !{i64 10932}
!153 = !{i64 10934}
!154 = !{i64 10943}
!155 = !{i64 10952}
!156 = !{i64 10957}
!157 = !{i64 10960}
!158 = !{i64 10985}
!159 = !{i64 11000}
!160 = !{i64 11015}
!161 = !{i64 11018}
!162 = !{i64 11023}
!163 = !{i64 11026}
!164 = !{i64 11033}
!165 = !{i64 11046}
!166 = !{i64 11064}
!167 = !{i64 11073}
!168 = !{i64 11097}
!169 = !{i64 11112}
!170 = !{i64 11117}
!171 = !{i64 11120}
!172 = !{i64 11145}
!173 = !{i64 11160}
!174 = !{i64 11175}
!175 = !{i64 11178}
!176 = !{i64 11183}
!177 = !{i64 11186}
!178 = !{i64 11193}
!179 = !{i64 11217}
!180 = !{i64 11278}
!181 = !{i64 11283}
!182 = !{i64 11288}
!183 = !{i64 11293}
!184 = !{i64 11328}
!185 = !{i64 11364}
!186 = !{i64 11373}
!187 = !{i64 11311}
!188 = !{i64 11313}
!189 = !{i64 11338}
!190 = !{i64 11343}
!191 = !{i64 11351}
!192 = !{i64 11354}
!193 = !{i64 11349}
!194 = !{i64 11318}
!195 = !{i64 11325}
!196 = !{i64 11316}
!197 = !{i64 11357}
!198 = !{i64 11381}
!199 = !{i64 11382}
!200 = !{i64 11387}
!201 = !{i64 11396}
!202 = !{i64 11415}
!203 = !{i64 11454}
!204 = !{i64 11487}
!205 = !{i64 11511}
!206 = !{i64 11533}
!207 = !{i64 11542}
!208 = !{i64 11516}
!209 = !{i64 11519}
!210 = !{i64 11548}
!211 = !{i64 11559}
!212 = !{i64 11564}
!213 = !{i64 11590}
!214 = !{i64 11614}
!215 = !{i64 11636}
!216 = !{i64 11645}
!217 = !{i64 11619}
!218 = !{i64 11622}
!219 = !{i64 11651}
!220 = !{i64 11663}
!221 = !{i64 11679}
!222 = !{i64 11680}
!223 = !{i64 11698}
!224 = !{i64 11703}
!225 = !{i64 11706}
!226 = !{i64 11714}
!227 = !{i64 11722}
!228 = !{i64 11725}
!229 = !{i64 11740}
!230 = !{i64 11760}
!231 = !{i64 11784}
!232 = !{i64 11789}
!233 = !{i64 11792}
!234 = !{i64 11800}
!235 = !{i64 11810}
!236 = !{i64 11820}
!237 = !{i64 11822}
!238 = !{i64 11830}
!239 = !{i64 11845}
!240 = !{i64 11856}
!241 = !{i64 11878}
!242 = !{i64 11894}
!243 = !{i64 11899}
!244 = !{i64 11902}
!245 = !{i64 11931}
!246 = !{i64 11939}
!247 = !{i64 11943}
!248 = !{i64 11874}
!249 = !{i64 11949}
!250 = !{i64 11970}
!251 = !{i64 11981}
!252 = !{i64 11985}
!253 = !{i64 11993}
!254 = !{i64 11998}
!255 = !{i64 12002}
!256 = !{i64 12029}
!257 = !{i64 12072}
!258 = !{i64 12079}
!259 = !{i64 12081}
!260 = !{i64 12036}
!261 = !{i64 12038}
!262 = !{i64 12048}
!263 = !{i64 12057}
!264 = !{i64 12067}
!265 = !{i64 12096}
!266 = !{i64 12106}
!267 = !{i64 12113}
!268 = !{i64 12118}
!269 = !{i64 12139}
!270 = !{i64 12144}
!271 = !{i64 12151}
!272 = !{i64 12166}
!273 = !{i64 12171}
!274 = !{i64 12174}
!275 = !{i64 12179}
!276 = !{i64 12182}
!277 = !{i64 12200}
!278 = !{i64 12202}
!279 = !{i64 12206}
!280 = !{i64 12209}
!281 = !{i64 12212}
!282 = !{i64 12214}
!283 = !{i64 12217}
!284 = !{i64 12222}
!285 = !{i64 12234}
!286 = !{i64 12256}
!287 = !{i64 12267}
!288 = !{i64 12272}
!289 = !{i64 12275}
!290 = !{i64 12288}
!291 = !{i64 12290}
!292 = !{i64 12293}
!293 = !{i64 12297}
!294 = !{i64 12300}
!295 = !{i64 12302}
!296 = !{i64 12306}
!297 = !{i64 12309}
!298 = !{i64 12319}
!299 = !{i64 12336}
!300 = !{i64 12349}
!301 = !{i64 12354}
!302 = !{i64 12357}
!303 = !{i64 12362}
!304 = !{i64 12366}
!305 = !{i64 12368}
!306 = !{i64 12371}
!307 = !{i64 12375}
!308 = !{i64 12377}
!309 = !{i64 12380}
!310 = !{i64 12383}
!311 = !{i64 12406}
!312 = !{i64 12422}
!313 = !{i64 12446}
!314 = !{i64 12460}
!315 = !{i64 12463}
!316 = !{i64 12466}
!317 = !{i64 12470}
!318 = !{i64 12478}
!319 = !{i64 12481}
!320 = !{i64 12484}
!321 = !{i64 12493}
!322 = !{i64 12503}
!323 = !{i64 12521}
!324 = !{i64 12528}
!325 = !{i64 12546}
!326 = !{i64 12562}
!327 = !{i64 12586}
!328 = !{i64 12605}
!329 = !{i64 12614}
!330 = !{i64 12638}
!331 = !{i64 12662}
!332 = !{i64 12669}
!333 = !{i64 12690}
!334 = !{i64 12721}
!335 = !{i64 12742}
!336 = !{i64 12771}
!337 = !{i64 12806}
!338 = !{i64 12825}
!339 = !{i64 12833}
!340 = !{i64 12836}
!341 = !{i64 12845}
!342 = !{i64 12856}
!343 = !{i64 12889}
!344 = !{i64 12901}
!345 = !{i64 12922}
!346 = !{i64 12932}
!347 = !{i64 12940}
!348 = !{i64 12943}
!349 = !{i64 12954}
!350 = !{i64 12960}
!351 = !{i64 12962}
!352 = !{i64 12965}
!353 = !{i64 12969}
!354 = !{i64 12972}
!355 = !{i64 12981}
!356 = !{i64 13003}
!357 = !{i64 13022}
!358 = !{i64 13031}
!359 = !{i64 13041}
!360 = !{i64 13050}
!361 = !{i64 13078}
!362 = !{i64 13103}
!363 = !{i64 13112}
!364 = !{i64 13138}
!365 = !{i64 13143}
!366 = !{i64 13145}
!367 = !{i64 13159}
!368 = !{i64 13169}
!369 = !{i64 13176}
!370 = !{i64 13181}
!371 = !{i64 13184}
!372 = !{i64 13187}
!373 = !{i64 13192}
!374 = !{i64 13224}
!375 = !{i64 13229}
!376 = !{i64 13231}
!377 = !{i64 13242}
!378 = !{i64 13256}
!379 = !{i64 13264}
!380 = !{i64 13274}
!381 = !{i64 13276}
!382 = !{i64 13283}
!383 = !{i64 13290}
!384 = !{i64 13307}
!385 = !{i64 13329}
!386 = !{i64 13365}
!387 = !{i64 13374}
!388 = !{i64 13334}
!389 = !{i64 13383}
!390 = !{i64 13391}
!391 = !{i64 13407}
!392 = !{i64 13426}
!393 = !{i64 13448}
!394 = !{i64 13484}
!395 = !{i64 13493}
!396 = !{i64 13453}
!397 = !{i64 13502}
!398 = !{i64 13510}
!399 = !{i64 13515}
!400 = !{i64 13520}
!401 = !{i64 13537}
!402 = !{i64 13553}
!403 = !{i64 13558}
!404 = !{i64 13560}
!405 = !{i64 13562}
!406 = !{i64 13573}
!407 = !{i64 13586}
!408 = !{i64 13589}
!409 = !{i64 13591}
!410 = !{i64 13595}
!411 = !{i64 13598}
!412 = !{i64 13606}
!413 = !{i64 13614}
!414 = !{i64 13623}
!415 = !{i64 13632}
!416 = !{i64 13640}
!417 = !{i64 13658}
!418 = !{i64 13668}
!419 = !{i64 13697}
!420 = !{i64 13702}
!421 = !{i64 13714}
!422 = !{i64 13717}
!423 = !{i64 13728}
!424 = !{i64 13737}
!425 = !{i64 13753}
!426 = !{i64 13758}
!427 = !{i64 13763}
!428 = !{i64 13765}
!429 = !{i64 13771}
!430 = !{i64 13776}
!431 = !{i64 13778}
!432 = !{i64 13784}
!433 = !{i64 13786}
!434 = !{i64 13790}
!435 = !{i64 13811}
!436 = !{i64 13820}
!437 = !{i64 13827}
!438 = !{i64 13733}
!439 = !{i64 13844}
!440 = !{i64 13849}
!441 = !{i64 13863}
!442 = !{i64 13868}
!443 = !{i64 13875}
!444 = !{i64 13880}
!445 = !{i64 13887}
!446 = !{i64 13905}
!447 = !{i64 13913}
!448 = !{i64 13922}
!449 = !{i64 13929}
!450 = !{i64 13950}
!451 = !{i64 13966}
!452 = !{i64 13972}
!453 = !{i64 13984}
!454 = !{i64 14005}
!455 = !{i64 14021}
!456 = !{i64 14026}
!457 = !{i64 14028}
!458 = !{i64 14059}
!459 = !{i64 14067}
!460 = !{i64 14072}
!461 = !{i64 14074}
!462 = !{i64 14080}
!463 = !{i64 14101}
!464 = !{i64 14106}
!465 = !{i64 14111}
!466 = !{i64 14116}
!467 = !{i64 14118}
!468 = !{i64 14127}
!469 = !{i64 14134}
!470 = !{i64 14202}
!471 = !{i64 14153}
!472 = !{i64 14162}
!473 = !{i64 14169}
!474 = !{i64 14206}
!475 = !{i64 14216}
!476 = !{i64 14220}
!477 = !{i64 14230}
!478 = !{i64 14232}
!479 = !{i64 14237}
!480 = !{i64 14244}
!481 = !{i64 14256}
!482 = !{i64 14283}
!483 = !{i64 14288}
!484 = !{i64 14290}
!485 = !{i64 14294}
!486 = !{i64 14307}
!487 = !{i64 14314}
!488 = !{i64 14316}
!489 = !{i64 14328}
!490 = !{i64 14335}
!491 = !{i64 14337}
!492 = !{i64 14345}
!493 = !{i64 14353}
!494 = !{i64 14357}
!495 = !{i64 14369}
!496 = !{i64 14376}
!497 = !{i64 14379}
!498 = !{i64 14383}
!499 = !{i64 14394}
!500 = !{i64 14405}
!501 = !{i64 14422}
!502 = !{i64 14456}
!503 = !{i64 14473}
!504 = !{i64 14480}
!505 = !{i64 14496}
!506 = !{i64 14521}
!507 = !{i64 14526}
!508 = !{i64 14530}
!509 = !{i64 14544}
!510 = !{i64 14549}
!511 = !{i64 14553}
!512 = !{i64 14559}
!513 = !{i64 14574}
!514 = !{i64 14585}
!515 = !{i64 14587}
!516 = !{i64 14600}
!517 = !{i64 14603}
!518 = !{i64 14610}
!519 = !{i64 14621}
!520 = !{i64 14623}
!521 = !{i64 14639}
!522 = !{i64 14645}
!523 = !{i64 14648}
!524 = !{i64 14650}
!525 = !{i64 14665}
!526 = !{i64 14676}
!527 = !{i64 14678}
!528 = !{i64 14688}
!529 = !{i64 14691}
!530 = !{i64 14698}
!531 = !{i64 14709}
!532 = !{i64 14711}
!533 = !{i64 14723}
!534 = !{i64 14729}
!535 = !{i64 14732}
!536 = !{i64 14741}
!537 = !{i64 14753}
!538 = !{i64 14758}
!539 = !{i64 14769}
!540 = !{i64 14820}
!541 = !{i64 14858}
!542 = !{i64 14877}
!543 = !{i64 14894}
!544 = !{i64 14899}
!545 = !{i64 14901}
!546 = !{i64 14916}
!547 = !{i64 14921}
!548 = !{i64 14940}
!549 = !{i64 14951}
!550 = !{i64 14956}
!551 = !{i64 14997}
!552 = !{i64 15011}
!553 = !{i64 15041}
!554 = !{i64 15046}
!555 = !{i64 15067}
!556 = !{i64 15072}
!557 = !{i64 15093}
!558 = !{i64 15098}
!559 = !{i64 15132}
!560 = !{i64 15137}
!561 = !{i64 15152}
!562 = !{i64 15161}
!563 = !{i64 15185}
!564 = !{i64 15200}
!565 = !{i64 15222}
!566 = !{i64 15237}
!567 = !{i64 15242}
!568 = !{i64 15248}
!569 = !{i64 15267}
!570 = !{i64 15288}
!571 = !{i64 15297}
!572 = !{i64 15302}
!573 = !{i64 15304}
!574 = !{i64 15306}
!575 = !{i64 15316}
!576 = !{i64 15321}
!577 = !{i64 15326}
!578 = !{i64 15329}
!579 = !{i64 15339}
!580 = !{i64 15348}
!581 = !{i64 15359}
!582 = !{i64 15368}
!583 = !{i64 15373}
!584 = !{i64 15376}
!585 = !{i64 15395}
!586 = !{i64 15421}
!587 = !{i64 15429}
!588 = !{i64 15434}
!589 = !{i64 15436}
!590 = !{i64 15438}
!591 = !{i64 15448}
!592 = !{i64 15453}
!593 = !{i64 15458}
!594 = !{i64 15461}
!595 = !{i64 15471}
!596 = !{i64 15480}
!597 = !{i64 15491}
!598 = !{i64 15504}
!599 = !{i64 15509}
!600 = !{i64 15520}
!601 = !{i64 15545}
!602 = !{i64 15569}
!603 = !{i64 15572}
!604 = !{i64 15577}
!605 = !{i64 15602}
!606 = !{i64 15617}
!607 = !{i64 15632}
!608 = !{i64 15648}
!609 = !{i64 15656}
!610 = !{i64 15658}
!611 = !{i64 15660}
!612 = !{i64 15664}
!613 = !{i64 15668}
!614 = !{i64 15671}
!615 = !{i64 15675}
!616 = !{i64 15680}
!617 = !{i64 15687}
!618 = !{i64 15692}
!619 = !{i64 15694}
!620 = !{i64 15700}
!621 = !{i64 15704}
!622 = !{i64 15709}
!623 = !{i64 15713}
!624 = !{i64 15720}
!625 = !{i64 15729}
!626 = !{i64 15748}
!627 = !{i64 15768}
!628 = !{i64 15773}
!629 = !{i64 15782}
!630 = !{i64 15792}
!631 = !{i64 15820}
!632 = !{i64 15824}
!633 = !{i64 15828}
!634 = !{i64 15833}
!635 = !{i64 15836}
!636 = !{i64 15842}
!637 = !{i64 15859}
!638 = !{i64 15864}
!639 = !{i64 15908}
!640 = !{i64 15883}
!641 = !{i64 15888}
!642 = !{i64 15892}
!643 = !{i64 15895}
!644 = !{i64 15913}
!645 = !{i64 15915}
!646 = !{i64 15920}
!647 = !{i64 15944}
!648 = !{i64 15952}
!649 = !{i64 15957}
!650 = !{i64 15961}
!651 = !{i64 15966}
!652 = !{i64 15969}
!653 = !{i64 15974}
!654 = !{i64 15984}
!655 = !{i64 15995}
!656 = !{i64 16001}
!657 = !{i64 16009}
!658 = !{i64 16026}
!659 = !{i64 16046}
!660 = !{i64 16064}
!661 = !{i64 16085}
!662 = !{i64 16106}
!663 = !{i64 16116}
!664 = !{i64 16126}
!665 = !{i64 16131}
!666 = !{i64 16133}
!667 = !{i64 16149}
!668 = !{i64 16154}
!669 = !{i64 16156}
!670 = !{i64 16168}
!671 = !{i64 16173}
!672 = !{i64 16179}
!673 = !{i64 16184}
!674 = !{i64 16189}
!675 = !{i64 16192}
!676 = !{i64 16202}
!677 = !{i64 16211}
!678 = !{i64 16222}
!679 = !{i64 16251}
!680 = !{i64 16256}
!681 = !{i64 16258}
!682 = !{i64 16263}
!683 = !{i64 16278}
!684 = !{i64 16288}
!685 = !{i64 16306}
!686 = !{i64 16316}
!687 = !{i64 16320}
!688 = !{i64 16336}
!689 = !{i64 16341}
!690 = !{i64 16344}
!691 = !{i64 16355}
!692 = !{i64 16364}
!693 = !{i64 16294}
!694 = !{i64 16370}
!695 = !{i64 16381}
!696 = !{i64 16420}
!697 = !{i64 16393}
!698 = !{i64 16400}
!699 = !{i64 16404}
!700 = !{i64 16407}
!701 = !{i64 16425}
!702 = !{i64 16427}
!703 = !{i64 16432}
!704 = !{i64 16437}
!705 = !{i64 16447}
!706 = !{i64 16456}
!707 = !{i64 16476}
!708 = !{i64 16496}
!709 = !{i64 16501}
!710 = !{i64 16503}
!711 = !{i64 16507}
!712 = !{i64 16512}
!713 = !{i64 16519}
!714 = !{i64 16523}
!715 = !{i64 16531}
!716 = !{i64 16536}
!717 = !{i64 16542}
!718 = !{i64 16559}
!719 = !{i64 16562}
!720 = !{i64 16568}
!721 = !{i64 16575}
!722 = !{i64 16580}
!723 = !{i64 16598}
!724 = !{i64 16603}
!725 = !{i64 16605}
!726 = !{i64 16607}
!727 = !{i64 16614}
!728 = !{i64 16619}
!729 = !{i64 16629}
!730 = !{i64 16634}
!731 = !{i64 16654}
!732 = !{i64 16672}
!733 = !{i64 16689}
!734 = !{i64 16708}
!735 = !{i64 16724}
!736 = !{i64 16739}
!737 = !{i64 16744}
!738 = !{i64 16756}
!739 = !{i64 16747}
!740 = !{i64 16686}
!741 = !{i64 16767}
!742 = !{i64 16789}
!743 = !{i64 16794}
!744 = !{i64 16805}
!745 = !{i64 16825}
!746 = !{i64 16829}
!747 = !{i64 16834}
!748 = !{i64 16837}
!749 = !{i64 16839}
!750 = !{i64 16853}
!751 = !{i64 16864}
!752 = !{i64 16868}
!753 = !{i64 16872}
!754 = !{i64 16875}
!755 = !{i64 17019}
!756 = !{i64 16877}
!757 = !{i64 16890}
!758 = !{i64 16898}
!759 = !{i64 16900}
!760 = !{i64 16912}
!761 = !{i64 16915}
!762 = !{i64 16919}
!763 = !{i64 16924}
!764 = !{i64 16927}
!765 = !{i64 16932}
!766 = !{i64 16941}
!767 = !{i64 16946}
!768 = !{i64 16956}
!769 = !{i64 16965}
!770 = !{i64 16985}
!771 = !{i64 17015}
!772 = !{i64 17024}
!773 = !{i64 17029}
!774 = !{i64 17032}
!775 = !{i64 17036}
!776 = !{i64 17041}
!777 = !{i64 17046}
!778 = !{i64 17050}
!779 = !{i64 17055}
!780 = !{i64 17058}
!781 = !{i64 17063}
!782 = !{i64 17072}
!783 = !{i64 17081}
!784 = !{i64 17084}
!785 = !{i64 17087}
!786 = !{i64 17089}
!787 = !{i64 17096}
!788 = !{i64 17099}
!789 = !{i64 17133}
!790 = !{i64 17146}
!791 = !{i64 17151}
!792 = !{i64 17161}
!793 = !{i64 17185}
!794 = !{i64 17201}
!795 = !{i64 17225}
!796 = !{i64 17233}
!797 = !{i64 17238}
!798 = !{i64 17240}
!799 = !{i64 17246}
!800 = !{i64 17256}
!801 = !{i64 17261}
!802 = !{i64 17269}
!803 = !{i64 17291}
!804 = !{i64 17298}
!805 = !{i64 17319}
!806 = !{i64 17334}
!807 = !{i64 17355}
!808 = !{i64 17362}
!809 = !{i64 17383}
!810 = !{i64 17398}
!811 = !{i64 17419}
!812 = !{i64 17429}
!813 = !{i64 17441}
!814 = !{i64 17450}
!815 = !{i64 17472}
!816 = !{i64 17491}
!817 = !{i64 17508}
