source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%_IO_FILE = type { i32 }
%stat = type { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }
%sockaddr = type { i64, [14 x i8] }
%shmid_ds = type { %ipc_perm, i32, i64, i64, i64, i32, i32, i16, i16, i64*, i64* }
%ipc_perm = type { i32, i32, i32, i32, i32, i32, i16 }

@global_var_5008 = constant [9 x i8] c"HelloLib\00"
@global_var_5011 = constant [4 x i8] c"def\00"
@global_var_5015 = constant [4 x i8] c"abc\00"
@global_var_5019 = constant [4 x i8] c"xyz\00"
@global_var_501d = constant [4 x i8] c"aaa\00"
@global_var_5021 = constant [4 x i8] c"bbb\00"
@global_var_5025 = constant [13 x i8] c"BinBench2025\00"
@global_var_5032 = constant [21 x i8] c"Value: %d, Name: %s\0A\00"
@global_var_5047 = constant [5 x i8] c"Test\00"
@global_var_504c = constant [6 x i8] c"%d,%d\00"
@global_var_5052 = constant [8 x i8] c"123,456\00"
@global_var_505c = constant [12 x i8] c"/etc/passwd\00"
@global_var_507b = constant [3 x i8] c"w+\00"
@global_var_507e = constant [23 x i8] c"/tmp/binbench_test.tmp\00"
@global_var_5095 = constant [20 x i8] c"Hello BinBench Test\00"
@global_var_50a9 = constant [6 x i8] c"Bench\00"
@global_var_5222 = constant [10 x i8] c"/bin/true\00"
@global_var_522c = constant [10 x i8] c"HelloPipe\00"
@global_var_5236 = constant [18 x i8] c"/tmp/binbench_shm\00"
@signal_received = local_unnamed_addr global i32 0
@signal_number = local_unnamed_addr global i32 0
@global_var_7d0 = global i64 77309411713
@counter_mutex = global i32 0
@shared_counter = local_unnamed_addr global i32 0
@cond_mutex = global i32 0
@cond = global i32 0
@ready = local_unnamed_addr global i32 0
@data = local_unnamed_addr global i32 0
@atomic_counter = local_unnamed_addr global i32 0
@global_var_5327 = constant [10 x i8] c"Thread-%d\00"
@0 = external global i32
@global_var_8020 = local_unnamed_addr global i8 0
@1 = internal constant [2 x i8] c"r\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i64 0, i64 0)
@3 = constant i64 7521977183824144706
@4 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\87\E5\87\86\E5\BA\93\E5\87\BD\E6\95\B0\E8\B0\83\E7\94\A8 ===\00"
@global_var_50b0 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @4, i64 0, i64 0)
@5 = internal constant [27 x i8] c"LIB-L1-01: %d (\E6\9C\9F\E6\9C\9B: 8)\0A\00"
@global_var_50d4 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @5, i64 0, i64 0)
@6 = internal constant [27 x i8] c"LIB-L1-02: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_50ef = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @6, i64 0, i64 0)
@7 = internal constant [28 x i8] c"LIB-L1-03: %d (\E6\9C\9F\E6\9C\9B: 12)\0A\00"
@global_var_510a = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @7, i64 0, i64 0)
@8 = internal constant [28 x i8] c"LIB-L1-04: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_5126 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i64 0, i64 0)
@9 = internal constant [28 x i8] c"LIB-L1-05: %d (\E6\9C\9F\E6\9C\9B: -1)\0A\00"
@global_var_5142 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"LIB-L1-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_515e = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [29 x i8] c"LIB-L1-07: %d (\E6\9C\9F\E6\9C\9B: 579)\0A\00"
@global_var_517a = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @11, i64 0, i64 0)
@12 = internal constant [28 x i8] c"LIB-L1-08: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_5197 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @12, i64 0, i64 0)
@13 = internal constant [28 x i8] c"LIB-L1-09: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_51b3 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @13, i64 0, i64 0)
@14 = internal constant [28 x i8] c"LIB-L1-10: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_51cf = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @14, i64 0, i64 0)
@15 = internal constant [27 x i8] c"LIB-L1-11: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_51eb = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @15, i64 0, i64 0)
@16 = internal constant [28 x i8] c"LIB-L1-12: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_5206 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @16, i64 0, i64 0)
@global_var_3b6 = global i32 1278440828
@global_var_1000 = global i32 7
@global_var_3e8 = global i32 2
@17 = internal constant [27 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\B3\BB\E7\BB\9F\E8\B0\83\E7\94\A8 ===\00"
@global_var_5248 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @17, i64 0, i64 0)
@18 = internal constant [28 x i8] c"SYS-L3-01: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_5263 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @18, i64 0, i64 0)
@19 = internal constant [28 x i8] c"SYS-L3-02: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_527f = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @19, i64 0, i64 0)
@20 = internal constant [28 x i8] c"SYS-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_529b = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @20, i64 0, i64 0)
@21 = internal constant [28 x i8] c"SYS-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_52b7 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @21, i64 0, i64 0)
@22 = internal constant [28 x i8] c"SYS-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_52d3 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @22, i64 0, i64 0)
@23 = internal constant [28 x i8] c"SYS-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_52ef = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @23, i64 0, i64 0)
@24 = internal constant [28 x i8] c"SYS-L3-07: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_530b = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @24, i64 0, i64 0)
@25 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\BA\BF\E7\A8\8B\E4\B8\8E\E5\B9\B6\E5\8F\91 ===\00"
@global_var_5331 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @25, i64 0, i64 0)
@26 = internal constant [28 x i8] c"THR-L3-01: %d (\E6\9C\9F\E6\9C\9B: 49)\0A\00"
@global_var_534f = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @26, i64 0, i64 0)
@27 = internal constant [29 x i8] c"THR-L3-02: %d (\E6\9C\9F\E6\9C\9B: 465)\0A\00"
@global_var_536b = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @27, i64 0, i64 0)
@28 = internal constant [28 x i8] c"THR-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_5388 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @28, i64 0, i64 0)
@29 = internal constant [28 x i8] c"THR-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_53a4 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @29, i64 0, i64 0)
@30 = internal constant [28 x i8] c"THR-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_53c0 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @30, i64 0, i64 0)
@31 = internal constant [28 x i8] c"THR-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_53dc = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @31, i64 0, i64 0)
@global_var_505a = constant [2 x i8] c"r\00"
@global_var_5068 = constant [19 x i8] c"BinBench Test Data\00"

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

define void @function_23d0(i64* %d) local_unnamed_addr {
dec_label_pc_23d0:
  call void @__cxa_finalize(i64* %d), !insn.addr !6
  ret void, !insn.addr !6
}

define i32 @function_23e0(i32 %sig) local_unnamed_addr {
dec_label_pc_23e0:
  %0 = call i32 @raise(i32 %sig), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define void @function_23f0(i64* %ptr) local_unnamed_addr {
dec_label_pc_23f0:
  call void @free(i64* %ptr), !insn.addr !8
  ret void, !insn.addr !8
}

define i32* @function_2400() local_unnamed_addr {
dec_label_pc_2400:
  %0 = call i32* @__errno_location(), !insn.addr !9
  ret i32* %0, !insn.addr !9
}

define i32 @function_2410(i8* %name) local_unnamed_addr {
dec_label_pc_2410:
  %0 = call i32 @unlink(i8* %name), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i8* @function_2420(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_2420:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !11
  ret i8* %0, !insn.addr !11
}

define void @function_2430(i32 %status) local_unnamed_addr {
dec_label_pc_2430:
  call void @_exit(i32 %status), !insn.addr !12
  ret void, !insn.addr !12
}

define i8* @function_2440(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_2440:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !13
  ret i8* %0, !insn.addr !13
}

define i32 @function_2450(i8* %s) local_unnamed_addr {
dec_label_pc_2450:
  %0 = call i32 @puts(i8* %s), !insn.addr !14
  ret i32 %0, !insn.addr !14
}

define i32 @function_2460(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_2460:
  %0 = call i32 @fread(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define i32 @function_2470(i32 %fd, i32 %level, i32 %optname, i64* %optval, i32 %optlen) local_unnamed_addr {
dec_label_pc_2470:
  %0 = call i32 @setsockopt(i32 %fd, i32 %level, i32 %optname, i64* %optval, i32 %optlen), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i32 @function_2480(i64* %shmaddr) local_unnamed_addr {
dec_label_pc_2480:
  %0 = call i32 @shmdt(i64* %shmaddr), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i32 @function_2490(i32 %fd, i64* %buf, i32 %n) local_unnamed_addr {
dec_label_pc_2490:
  %0 = call i32 @write(i32 %fd, i64* %buf, i32 %n), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define i32 @function_24a0(i64* %cond, i64* %mutex) local_unnamed_addr {
dec_label_pc_24a0:
  %0 = call i32 @pthread_cond_wait(i64* %cond, i64* %mutex), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @function_24b0(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_24b0:
  %0 = call i32 @fclose(%_IO_FILE* %stream), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i32 @function_24c0(i8* %s) local_unnamed_addr {
dec_label_pc_24c0:
  %0 = call i32 @strlen(i8* %s), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define void @function_24d0() local_unnamed_addr {
dec_label_pc_24d0:
  call void @__stack_chk_fail(), !insn.addr !22
  ret void, !insn.addr !22
}

define i16 @function_24e0(i16 %hostshort) local_unnamed_addr {
dec_label_pc_24e0:
  %0 = call i16 @htons(i16 %hostshort), !insn.addr !23
  ret i16 %0, !insn.addr !23
}

define i8* @function_24f0(i8* %s, i32 %c) local_unnamed_addr {
dec_label_pc_24f0:
  %0 = call i8* @strchr(i8* %s, i32 %c), !insn.addr !24
  ret i8* %0, !insn.addr !24
}

define i32 @function_2500(i8* %format, ...) local_unnamed_addr {
dec_label_pc_2500:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !25
  ret i32 %0, !insn.addr !25
}

define void @function_2510(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_2510:
  call void @rewind(%_IO_FILE* %stream), !insn.addr !26
  ret void, !insn.addr !26
}

define i32 @function_2520(i8* %s, i32 %maxlen, i8* %format, ...) local_unnamed_addr {
dec_label_pc_2520:
  %0 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %s, i32 %maxlen, i8* %format), !insn.addr !27
  ret i32 %0, !insn.addr !27
}

define i64* @function_2530(i64* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_2530:
  %0 = call i64* @memset(i64* %s, i32 %c, i32 %n), !insn.addr !28
  ret i64* %0, !insn.addr !28
}

define i32 @function_2540(i32 %seconds) local_unnamed_addr {
dec_label_pc_2540:
  %0 = call i32 @alarm(i32 %seconds), !insn.addr !29
  ret i32 %0, !insn.addr !29
}

define i32 @function_2550(i32 %fd) local_unnamed_addr {
dec_label_pc_2550:
  %0 = call i32 @close(i32 %fd), !insn.addr !30
  ret i32 %0, !insn.addr !30
}

define i32 @function_2560([2 x i32] %pipedes) local_unnamed_addr {
dec_label_pc_2560:
  %0 = call i32 @pipe([2 x i32] %pipedes), !insn.addr !31
  ret i32 %0, !insn.addr !31
}

define i32 @function_2570(i32 %fd, i64* %buf, i32 %nbytes) local_unnamed_addr {
dec_label_pc_2570:
  %0 = call i32 @read(i32 %fd, i64* %buf, i32 %nbytes), !insn.addr !32
  ret i32 %0, !insn.addr !32
}

define i32 @function_2580(i64* %s1, i64* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_2580:
  %0 = call i32 @memcmp(i64* %s1, i64* %s2, i32 %n), !insn.addr !33
  ret i32 %0, !insn.addr !33
}

define i32 @function_2590(i64* %cond) local_unnamed_addr {
dec_label_pc_2590:
  %0 = call i32 @pthread_cond_signal(i64* %cond), !insn.addr !34
  ret i32 %0, !insn.addr !34
}

define i32 @function_25a0(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_25a0:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !35
  ret i32 %0, !insn.addr !35
}

define void (i32)* @function_25b0(i32 %sig, void (i32)* %handler) local_unnamed_addr {
dec_label_pc_25b0:
  %0 = call void (i32)* @signal(i32 %sig, void (i32)* %handler), !insn.addr !36
  ret void (i32)* %0, !insn.addr !36
}

define i32 @function_25c0(i32 %sysno, ...) local_unnamed_addr {
dec_label_pc_25c0:
  %0 = call i32 (i32, ...) @syscall(i32 %sysno), !insn.addr !37
  ret i32 %0, !insn.addr !37
}

define i32 @function_25d0(i8* %file, %stat* %buf) local_unnamed_addr {
dec_label_pc_25d0:
  %0 = call i32 @stat(i8* %file, %stat* %buf), !insn.addr !38
  ret i32 %0, !insn.addr !38
}

define i64* @function_25e0(i64* %dest, i64* %src, i32 %n) local_unnamed_addr {
dec_label_pc_25e0:
  %0 = call i64* @memcpy(i64* %dest, i64* %src, i32 %n), !insn.addr !39
  ret i64* %0, !insn.addr !39
}

define i32 @function_25f0(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_25f0:
  %0 = call i32 @fileno(%_IO_FILE* %stream), !insn.addr !40
  ret i32 %0, !insn.addr !40
}

define i32 @function_2600(i64* %mutex) local_unnamed_addr {
dec_label_pc_2600:
  %0 = call i32 @pthread_mutex_unlock(i64* %mutex), !insn.addr !41
  ret i32 %0, !insn.addr !41
}

define i64* @function_2610(i32 %size) local_unnamed_addr {
dec_label_pc_2610:
  %0 = call i64* @malloc(i32 %size), !insn.addr !42
  ret i64* %0, !insn.addr !42
}

define i32 @function_2620(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_2620:
  %0 = call i32 (i8*, i8*, ...) @sscanf(i8* %s, i8* %format), !insn.addr !43
  ret i32 %0, !insn.addr !43
}

define i32 @function_2630(i32 %fd, i32 %n) local_unnamed_addr {
dec_label_pc_2630:
  %0 = call i32 @listen(i32 %fd, i32 %n), !insn.addr !44
  ret i32 %0, !insn.addr !44
}

define i32 @function_2640(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_2640:
  %0 = call i32 @bind(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !45
  ret i32 %0, !insn.addr !45
}

define i32 @function_2650(i32* %newthread, i64* %attr, i64* (i64*)* %start_routine, i64* %arg) local_unnamed_addr {
dec_label_pc_2650:
  %0 = call i32 @pthread_create(i32* %newthread, i64* %attr, i64* (i64*)* %start_routine, i64* %arg), !insn.addr !46
  ret i32 %0, !insn.addr !46
}

define i32 @function_2660(i32 %pid, i32* %stat_loc, i32 %options) local_unnamed_addr {
dec_label_pc_2660:
  %0 = call i32 @waitpid(i32 %pid, i32* %stat_loc, i32 %options), !insn.addr !47
  ret i32 %0, !insn.addr !47
}

define i32 @function_2670(i8* %file, i32 %oflag, ...) local_unnamed_addr {
dec_label_pc_2670:
  %0 = call i32 (i8*, i32, ...) @open(i8* %file, i32 %oflag), !insn.addr !48
  ret i32 %0, !insn.addr !48
}

define i32 @function_2680(i32 %shmid, i32 %cmd, %shmid_ds* %buf) local_unnamed_addr {
dec_label_pc_2680:
  %0 = call i32 @shmctl(i32 %shmid, i32 %cmd, %shmid_ds* %buf), !insn.addr !49
  ret i32 %0, !insn.addr !49
}

define %_IO_FILE* @function_2690(i8* %filename, i8* %modes) local_unnamed_addr {
dec_label_pc_2690:
  %0 = call %_IO_FILE* @fopen(i8* %filename, i8* %modes), !insn.addr !50
  ret %_IO_FILE* %0, !insn.addr !50
}

define i64* @function_26a0(i32 %shmid, i64* %shmaddr, i32 %shmflg) local_unnamed_addr {
dec_label_pc_26a0:
  %0 = call i64* @shmat(i32 %shmid, i64* %shmaddr, i32 %shmflg), !insn.addr !51
  ret i64* %0, !insn.addr !51
}

define i32 @function_26b0(i32 %key, i32 %size, i32 %shmflg) local_unnamed_addr {
dec_label_pc_26b0:
  %0 = call i32 @shmget(i32 %key, i32 %size, i32 %shmflg), !insn.addr !52
  ret i32 %0, !insn.addr !52
}

define i32 @function_26c0(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_26c0:
  %0 = call i32 @fwrite(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !53
  ret i32 %0, !insn.addr !53
}

define i32 @function_26d0(i8* %pathname, i32 %proj_id) local_unnamed_addr {
dec_label_pc_26d0:
  %0 = call i32 @ftok(i8* %pathname, i32 %proj_id), !insn.addr !54
  ret i32 %0, !insn.addr !54
}

define i32 @function_26e0(i32 %th, i64** %thread_return) local_unnamed_addr {
dec_label_pc_26e0:
  %0 = call i32 @pthread_join(i32 %th, i64** %thread_return), !insn.addr !55
  ret i32 %0, !insn.addr !55
}

define i32 @function_26f0(i8* %path, i8* %arg, ...) local_unnamed_addr {
dec_label_pc_26f0:
  %0 = call i32 (i8*, i8*, ...) @execl(i8* %path, i8* %arg), !insn.addr !56
  ret i32 %0, !insn.addr !56
}

define i32 @function_2700(i32 %th) local_unnamed_addr {
dec_label_pc_2700:
  %0 = call i32 @pthread_cancel(i32 %th), !insn.addr !57
  ret i32 %0, !insn.addr !57
}

define i32 @function_2710(i32 %seconds) local_unnamed_addr {
dec_label_pc_2710:
  %0 = call i32 @sleep(i32 %seconds), !insn.addr !58
  ret i32 %0, !insn.addr !58
}

define i32 @function_2720(i64 %stat_loc) local_unnamed_addr {
dec_label_pc_2720:
  %0 = call i32 @wait(i64 %stat_loc), !insn.addr !59
  ret i32 %0, !insn.addr !59
}

define i32 @function_2730() local_unnamed_addr {
dec_label_pc_2730:
  %0 = call i32 @fork(), !insn.addr !60
  ret i32 %0, !insn.addr !60
}

define i8* @function_2740(i8* %haystack, i8* %needle) local_unnamed_addr {
dec_label_pc_2740:
  %0 = call i8* @strstr(i8* %haystack, i8* %needle), !insn.addr !61
  ret i8* %0, !insn.addr !61
}

define i32 @function_2750(i64* %mutex) local_unnamed_addr {
dec_label_pc_2750:
  %0 = call i32 @pthread_mutex_lock(i64* %mutex), !insn.addr !62
  ret i32 %0, !insn.addr !62
}

define i32 @function_2760(i32 %useconds) local_unnamed_addr {
dec_label_pc_2760:
  %0 = call i32 @usleep(i32 %useconds), !insn.addr !63
  ret i32 %0, !insn.addr !63
}

define i32 @function_2770(i32 %domain, i32 %type, i32 %protocol) local_unnamed_addr {
dec_label_pc_2770:
  %0 = call i32 @socket(i32 %domain, i32 %type, i32 %protocol), !insn.addr !64
  ret i32 %0, !insn.addr !64
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_2780:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !65
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !65
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !65
  %3 = call i32 @__libc_start_main(i64 17991, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !65
  %4 = call i64 @__asm_hlt(), !insn.addr !66
  unreachable, !insn.addr !66
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_27b0:
  ret i64 32784, !insn.addr !67
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_27e0:
  ret i64 0, !insn.addr !68
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_2820:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* @global_var_8020, align 1, !insn.addr !69
  %3 = icmp eq i8 %2, 0, !insn.addr !69
  %4 = icmp eq i1 %3, false, !insn.addr !70
  br i1 %4, label %dec_label_pc_2858, label %dec_label_pc_282d, !insn.addr !70

dec_label_pc_282d:                                ; preds = %dec_label_pc_2820
  %5 = load i64, i64* inttoptr (i64 32760 to i64*), align 8, !insn.addr !71
  %6 = icmp eq i64 %5, 0, !insn.addr !71
  br i1 %6, label %dec_label_pc_2847, label %dec_label_pc_283b, !insn.addr !72

dec_label_pc_283b:                                ; preds = %dec_label_pc_282d
  %7 = load i64, i64* inttoptr (i64 32776 to i64*), align 8, !insn.addr !73
  %8 = inttoptr i64 %7 to i64*, !insn.addr !74
  call void @__cxa_finalize(i64* %8), !insn.addr !74
  br label %dec_label_pc_2847, !insn.addr !74

dec_label_pc_2847:                                ; preds = %dec_label_pc_283b, %dec_label_pc_282d
  %9 = call i64 @deregister_tm_clones(), !insn.addr !75
  store i8 1, i8* @global_var_8020, align 1, !insn.addr !76
  ret i64 %9, !insn.addr !77

dec_label_pc_2858:                                ; preds = %dec_label_pc_2820
  ret i64 %1, !insn.addr !78

; uselistorder directives
  uselistorder i8* @global_var_8020, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_2860:
  %0 = call i64 @register_tm_clones(), !insn.addr !79
  ret i64 %0, !insn.addr !79
}

define i32 @param_strcpy(i8* %dst, i8* %src) local_unnamed_addr {
dec_label_pc_2869:
  %0 = call i8* @strcpy(i8* %dst, i8* %src), !insn.addr !80
  %1 = call i32 @strlen(i8* %dst), !insn.addr !81
  ret i32 %1, !insn.addr !82
}

define i32 @call_strcpy() local_unnamed_addr {
dec_label_pc_289e:
  %rax.0.reg2mem = alloca i32, !insn.addr !83
  %stack_var_-56 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !84
  %1 = bitcast i64* %stack_var_-56 to i8*, !insn.addr !85
  %2 = call i32 @param_strcpy(i8* nonnull %1, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_5008, i64 0, i64 0)), !insn.addr !85
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !86
  %4 = icmp eq i64 %0, %3, !insn.addr !86
  store i32 %2, i32* %rax.0.reg2mem, !insn.addr !87
  br i1 %4, label %dec_label_pc_28e9, label %dec_label_pc_28e4, !insn.addr !87

dec_label_pc_28e4:                                ; preds = %dec_label_pc_289e
  call void @__stack_chk_fail(), !insn.addr !88
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !88
  br label %dec_label_pc_28e9, !insn.addr !88

dec_label_pc_28e9:                                ; preds = %dec_label_pc_28e4, %dec_label_pc_289e
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !89
}

define i32 @param_strcmp(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_28eb:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !90
  %1 = icmp eq i32 %0, 0, !insn.addr !91
  %2 = icmp slt i32 %0, 0, !insn.addr !91
  %3 = icmp eq i1 %2, false, !insn.addr !92
  %4 = icmp eq i1 %1, false, !insn.addr !92
  %5 = icmp eq i1 %3, %4, !insn.addr !92
  %not. = icmp ne i1 %3, true
  %. = sext i1 %not. to i32
  %rax.0 = select i1 %5, i32 1, i32 %.
  ret i32 %rax.0, !insn.addr !93

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
}

define i32 @call_strcmp() local_unnamed_addr {
dec_label_pc_2936:
  %0 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_5015, i64 0, i64 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_5011, i64 0, i64 0)), !insn.addr !94
  %1 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_5019, i64 0, i64 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_5019, i64 0, i64 0)), !insn.addr !95
  %2 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_5021, i64 0, i64 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_501d, i64 0, i64 0)), !insn.addr !96
  %3 = add i32 %1, %0, !insn.addr !97
  %4 = add i32 %3, %2, !insn.addr !98
  ret i32 %4, !insn.addr !99

; uselistorder directives
  uselistorder i32 (i8*, i8*)* @param_strcmp, { 2, 1, 0 }
}

define i32 @param_strlen(i8* %str) local_unnamed_addr {
dec_label_pc_29a5:
  %0 = call i32 @strlen(i8* %str), !insn.addr !100
  ret i32 %0, !insn.addr !101
}

define i32 @call_strlen() local_unnamed_addr {
dec_label_pc_29cb:
  %0 = call i32 @param_strlen(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_5025, i64 0, i64 0)), !insn.addr !102
  ret i32 %0, !insn.addr !103
}

define i32 @param_memcpy(i8* %dst, i32* %src, i64 %n) local_unnamed_addr {
dec_label_pc_29f0:
  %0 = bitcast i8* %dst to i64*, !insn.addr !104
  %1 = bitcast i32* %src to i64*, !insn.addr !104
  %2 = trunc i64 %n to i32, !insn.addr !104
  %3 = call i64* @memcpy(i64* %0, i64* %1, i32 %2), !insn.addr !104
  ret i32 %2, !insn.addr !105
}

define i32 @call_memcpy() local_unnamed_addr {
dec_label_pc_2a25:
  %rax.0.reg2mem = alloca i32, !insn.addr !106
  %stack_var_-40 = alloca i32, align 4
  %stack_var_-72 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !107
  store i64 10, i64* %stack_var_-72, align 8, !insn.addr !108
  store i32 0, i32* %stack_var_-40, align 4, !insn.addr !109
  %1 = bitcast i32* %stack_var_-40 to i8*, !insn.addr !110
  %2 = bitcast i64* %stack_var_-72 to i32*, !insn.addr !110
  %3 = call i32 @param_memcpy(i8* nonnull %1, i32* nonnull %2, i64 20), !insn.addr !110
  %4 = load i32, i32* %stack_var_-40, align 4, !insn.addr !111
  %5 = call i64 @__readfsqword(i64 40), !insn.addr !112
  %6 = icmp eq i64 %0, %5, !insn.addr !112
  store i32 %4, i32* %rax.0.reg2mem, !insn.addr !113
  br i1 %6, label %dec_label_pc_2ab3, label %dec_label_pc_2aae, !insn.addr !113

dec_label_pc_2aae:                                ; preds = %dec_label_pc_2a25
  call void @__stack_chk_fail(), !insn.addr !114
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !114
  br label %dec_label_pc_2ab3, !insn.addr !114

dec_label_pc_2ab3:                                ; preds = %dec_label_pc_2aae, %dec_label_pc_2a25
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !115

; uselistorder directives
  uselistorder i32* %stack_var_-40, { 1, 2, 0 }
}

define i32 @param_memcmp(i32* %p1, i32* %p2, i64 %n) local_unnamed_addr {
dec_label_pc_2ab5:
  %0 = bitcast i32* %p1 to i64*, !insn.addr !116
  %1 = bitcast i32* %p2 to i64*, !insn.addr !116
  %2 = trunc i64 %n to i32, !insn.addr !116
  %3 = call i32 @memcmp(i64* %0, i64* %1, i32 %2), !insn.addr !116
  %4 = icmp eq i32 %3, 0, !insn.addr !117
  %5 = icmp slt i32 %3, 0, !insn.addr !117
  %6 = icmp eq i1 %5, false, !insn.addr !118
  %7 = icmp eq i1 %4, false, !insn.addr !118
  %8 = icmp eq i1 %6, %7, !insn.addr !118
  %not. = icmp ne i1 %6, true
  %. = sext i1 %not. to i32
  %rax.0 = select i1 %8, i32 1, i32 %.
  ret i32 %rax.0, !insn.addr !119

; uselistorder directives
  uselistorder i32 %3, { 1, 0 }
}

define i32 @call_memcmp() local_unnamed_addr {
dec_label_pc_2b08:
  %rax.0.reg2mem = alloca i32, !insn.addr !120
  %arr2_-56 = alloca [3 x i32], align 4
  %arr1_-60 = alloca [3 x i32], align 4
  %stack_var_-28 = alloca i32, align 4
  %stack_var_-40 = alloca i32, align 4
  %stack_var_-52 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !121
  store i32 1, i32* %stack_var_-52, align 4, !insn.addr !122
  store i32 1, i32* %stack_var_-40, align 4, !insn.addr !123
  store i32 1, i32* %stack_var_-28, align 4, !insn.addr !124
  %1 = call i32 @param_memcmp(i32* nonnull %stack_var_-52, i32* nonnull %stack_var_-40, i64 12), !insn.addr !125
  %2 = insertvalue [3 x i32] undef, i32 %1, 0, !insn.addr !126
  store [3 x i32] %2, [3 x i32]* %arr1_-60, align 4, !insn.addr !126
  %3 = call i32 @param_memcmp(i32* nonnull %stack_var_-52, i32* nonnull %stack_var_-28, i64 12), !insn.addr !127
  %4 = insertvalue [3 x i32] undef, i32 %3, 0, !insn.addr !128
  store [3 x i32] %4, [3 x i32]* %arr2_-56, align 4, !insn.addr !128
  %5 = getelementptr inbounds [3 x i32], [3 x i32]* %arr1_-60, i64 0, i64 0, !insn.addr !129
  %6 = load i32, i32* %5, align 4, !insn.addr !129
  %7 = getelementptr inbounds [3 x i32], [3 x i32]* %arr2_-56, i64 0, i64 0, !insn.addr !130
  %8 = load i32, i32* %7, align 4, !insn.addr !130
  %9 = add i32 %8, %6, !insn.addr !131
  %10 = call i64 @__readfsqword(i64 40), !insn.addr !132
  %11 = icmp eq i64 %0, %10, !insn.addr !132
  store i32 %9, i32* %rax.0.reg2mem, !insn.addr !133
  br i1 %11, label %dec_label_pc_2bb4, label %dec_label_pc_2baf, !insn.addr !133

dec_label_pc_2baf:                                ; preds = %dec_label_pc_2b08
  call void @__stack_chk_fail(), !insn.addr !134
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !134
  br label %dec_label_pc_2bb4, !insn.addr !134

dec_label_pc_2bb4:                                ; preds = %dec_label_pc_2baf, %dec_label_pc_2b08
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !135

; uselistorder directives
  uselistorder i32 (i32*, i32*, i64)* @param_memcmp, { 1, 0 }
}

define i32 @param_printf(i32 %x, i8* %name) local_unnamed_addr {
dec_label_pc_2bb6:
  %0 = zext i32 %x to i64, !insn.addr !136
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_5032, i64 0, i64 0), i64 %0, i8* %name), !insn.addr !137
  ret i32 %1, !insn.addr !138
}

define i32 @call_printf() local_unnamed_addr {
dec_label_pc_2bee:
  %0 = call i32 @param_printf(i32 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_5047, i64 0, i64 0)), !insn.addr !139
  ret i32 %0, !insn.addr !140
}

define i32 @param_scanf(i8* %input_str) local_unnamed_addr {
dec_label_pc_2c16:
  %rax.0.reg2mem = alloca i32, !insn.addr !141
  %storemerge.reg2mem = alloca i32, !insn.addr !141
  %ret_-28 = alloca i32, align 4
  %stack_var_-24 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !142
  %1 = call i32 (i8*, i8*, ...) @sscanf(i8* %input_str, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_504c, i64 0, i64 0), i32* nonnull %ret_-28, i64* nonnull %stack_var_-24), !insn.addr !143
  %2 = icmp eq i32 %1, 2, !insn.addr !144
  %3 = icmp eq i1 %2, false, !insn.addr !145
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !145
  br i1 %3, label %dec_label_pc_2c6d, label %dec_label_pc_2c5e, !insn.addr !145

dec_label_pc_2c5e:                                ; preds = %dec_label_pc_2c16
  %4 = load i32, i32* %ret_-28, align 4, !insn.addr !146
  %5 = load i64, i64* %stack_var_-24, align 8, !insn.addr !147
  %6 = trunc i64 %5 to i32, !insn.addr !147
  %7 = add i32 %4, %6, !insn.addr !148
  store i32 %7, i32* %storemerge.reg2mem, !insn.addr !149
  br label %dec_label_pc_2c6d, !insn.addr !149

dec_label_pc_2c6d:                                ; preds = %dec_label_pc_2c16, %dec_label_pc_2c5e
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %8 = call i64 @__readfsqword(i64 40), !insn.addr !150
  %9 = icmp eq i64 %0, %8, !insn.addr !150
  store i32 %storemerge.reload, i32* %rax.0.reg2mem, !insn.addr !151
  br i1 %9, label %dec_label_pc_2c81, label %dec_label_pc_2c7c, !insn.addr !151

dec_label_pc_2c7c:                                ; preds = %dec_label_pc_2c6d
  call void @__stack_chk_fail(), !insn.addr !152
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !152
  br label %dec_label_pc_2c81, !insn.addr !152

dec_label_pc_2c81:                                ; preds = %dec_label_pc_2c7c, %dec_label_pc_2c6d
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !153

; uselistorder directives
  uselistorder i64* %stack_var_-24, { 1, 0 }
  uselistorder i32* %ret_-28, { 1, 0 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2c6d, { 1, 0 }
}

define i32 @call_scanf() local_unnamed_addr {
dec_label_pc_2c83:
  %0 = call i32 @param_scanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_5052, i64 0, i64 0)), !insn.addr !154
  ret i32 %0, !insn.addr !155
}

define i32 @param_fopen_fclose(i8* %filename) local_unnamed_addr {
dec_label_pc_2c9c:
  %storemerge.reg2mem = alloca i32, !insn.addr !156
  %0 = call %_IO_FILE* @fopen(i8* %filename, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_505a, i64 0, i64 0)), !insn.addr !157
  %1 = icmp eq %_IO_FILE* %0, null, !insn.addr !158
  %2 = icmp eq i1 %1, false, !insn.addr !159
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !159
  br i1 %2, label %dec_label_pc_2cd4, label %dec_label_pc_2cf2, !insn.addr !159

dec_label_pc_2cd4:                                ; preds = %dec_label_pc_2c9c
  %3 = call i32 @fileno(%_IO_FILE* %0), !insn.addr !160
  %4 = call i32 @fclose(%_IO_FILE* %0), !insn.addr !161
  store i32 %3, i32* %storemerge.reg2mem, !insn.addr !162
  br label %dec_label_pc_2cf2, !insn.addr !162

dec_label_pc_2cf2:                                ; preds = %dec_label_pc_2c9c, %dec_label_pc_2cd4
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !163

; uselistorder directives
  uselistorder %_IO_FILE* %0, { 1, 0, 2 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2cf2, { 1, 0 }
}

define i32 @call_fopen_fclose() local_unnamed_addr {
dec_label_pc_2cf4:
  %0 = call i32 @param_fopen_fclose(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_505c, i64 0, i64 0)), !insn.addr !164
  %1 = icmp slt i32 %0, 0, !insn.addr !165
  %. = select i1 %1, i32 -1, i32 42
  ret i32 %., !insn.addr !166
}

define i32 @param_fread_fwrite(i8* %tmpfile) local_unnamed_addr {
dec_label_pc_2d26:
  %rax.1.reg2mem = alloca i32, !insn.addr !167
  %rax.0.reg2mem = alloca i32, !insn.addr !167
  %read_buffer_-64 = alloca [32 x i8], align 8
  %stack_var_-56 = alloca i64, align 8
  %read_buffer_-72 = alloca [32 x i8], align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !168
  %1 = call %_IO_FILE* @fopen(i8* %tmpfile, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_507b, i64 0, i64 0)), !insn.addr !169
  %2 = icmp eq %_IO_FILE* %1, null, !insn.addr !170
  %3 = icmp eq i1 %2, false, !insn.addr !171
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !171
  br i1 %3, label %dec_label_pc_2d7b, label %dec_label_pc_2e4a, !insn.addr !171

dec_label_pc_2d7b:                                ; preds = %dec_label_pc_2d26
  %4 = call i32 @strlen(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_5068, i64 0, i64 0)), !insn.addr !172
  %5 = call i32 @fwrite(i64* nonnull bitcast ([19 x i8]* @global_var_5068 to i64*), i32 1, i32 %4, %_IO_FILE* %1), !insn.addr !173
  %6 = trunc i32 %5 to i8, !insn.addr !174
  %7 = insertvalue [32 x i8] undef, i8 %6, 0, !insn.addr !174
  store [32 x i8] %7, [32 x i8]* %read_buffer_-72, align 8, !insn.addr !174
  %8 = call i32 @strlen(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_5068, i64 0, i64 0)), !insn.addr !175
  %9 = sext i32 %8 to i64, !insn.addr !175
  %10 = bitcast [32 x i8]* %read_buffer_-72 to i64*, !insn.addr !176
  %11 = load i64, i64* %10, align 8, !insn.addr !176
  %12 = icmp eq i64 %11, %9, !insn.addr !176
  br i1 %12, label %dec_label_pc_2dce, label %dec_label_pc_2dbb, !insn.addr !177

dec_label_pc_2dbb:                                ; preds = %dec_label_pc_2d7b
  %13 = call i32 @fclose(%_IO_FILE* %1), !insn.addr !178
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !179
  br label %dec_label_pc_2e4a, !insn.addr !179

dec_label_pc_2dce:                                ; preds = %dec_label_pc_2d7b
  call void @rewind(%_IO_FILE* %1), !insn.addr !180
  %14 = call i32 @fread(i64* nonnull %stack_var_-56, i32 1, i32 %8, %_IO_FILE* %1), !insn.addr !181
  %15 = trunc i32 %14 to i8, !insn.addr !182
  %16 = insertvalue [32 x i8] undef, i8 %15, 0, !insn.addr !182
  store [32 x i8] %16, [32 x i8]* %read_buffer_-64, align 8, !insn.addr !182
  %17 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !183
  %18 = bitcast [32 x i8]* %read_buffer_-64 to i64*, !insn.addr !184
  %19 = load i64, i64* %18, align 8, !insn.addr !184
  %20 = add i64 %19, %17, !insn.addr !185
  %21 = inttoptr i64 %20 to i8*, !insn.addr !186
  store i8 0, i8* %21, align 1, !insn.addr !186
  %22 = call i32 @fclose(%_IO_FILE* %1), !insn.addr !187
  %23 = call i32 @unlink(i8* %tmpfile), !insn.addr !188
  %24 = load i64, i64* %18, align 8, !insn.addr !189
  %25 = load i64, i64* %10, align 8, !insn.addr !190
  %26 = icmp eq i64 %24, %25, !insn.addr !190
  %27 = icmp eq i1 %26, false, !insn.addr !191
  br i1 %27, label %dec_label_pc_2e45, label %dec_label_pc_2e27, !insn.addr !191

dec_label_pc_2e27:                                ; preds = %dec_label_pc_2dce
  %28 = bitcast i64* %stack_var_-56 to i8*, !insn.addr !192
  %29 = call i32 @strcmp(i8* nonnull %28, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_5068, i64 0, i64 0)), !insn.addr !192
  %30 = icmp eq i32 %29, 0, !insn.addr !193
  %31 = icmp eq i1 %30, false, !insn.addr !194
  store i32 42, i32* %rax.0.reg2mem, !insn.addr !194
  br i1 %31, label %dec_label_pc_2e45, label %dec_label_pc_2e4a, !insn.addr !194

dec_label_pc_2e45:                                ; preds = %dec_label_pc_2e27, %dec_label_pc_2dce
  store i32 -3, i32* %rax.0.reg2mem, !insn.addr !195
  br label %dec_label_pc_2e4a, !insn.addr !195

dec_label_pc_2e4a:                                ; preds = %dec_label_pc_2e27, %dec_label_pc_2d26, %dec_label_pc_2e45, %dec_label_pc_2dbb
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %32 = call i64 @__readfsqword(i64 40), !insn.addr !196
  %33 = icmp eq i64 %0, %32, !insn.addr !196
  store i32 %rax.0.reload, i32* %rax.1.reg2mem, !insn.addr !197
  br i1 %33, label %dec_label_pc_2e5e, label %dec_label_pc_2e59, !insn.addr !197

dec_label_pc_2e59:                                ; preds = %dec_label_pc_2e4a
  call void @__stack_chk_fail(), !insn.addr !198
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.1.reg2mem, !insn.addr !198
  br label %dec_label_pc_2e5e, !insn.addr !198

dec_label_pc_2e5e:                                ; preds = %dec_label_pc_2e59, %dec_label_pc_2e4a
  %rax.1.reload = load i32, i32* %rax.1.reg2mem
  ret i32 %rax.1.reload, !insn.addr !199

; uselistorder directives
  uselistorder %_IO_FILE* %1, { 0, 1, 3, 2, 4, 5 }
  uselistorder i64* %stack_var_-56, { 0, 2, 1 }
  uselistorder i32* %rax.0.reg2mem, { 0, 4, 1, 3, 2 }
  uselistorder i32 (i8*, i8*)* @strcmp, { 1, 0, 2 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 2, 1, 0, 3 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2e4a, { 2, 0, 3, 1 }
}

define i32 @call_fread_fwrite() local_unnamed_addr {
dec_label_pc_2e60:
  %0 = call i32 @param_fread_fwrite(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_507e, i64 0, i64 0)), !insn.addr !200
  ret i32 %0, !insn.addr !201
}

define i32 @param_malloc_free(i64 %size) local_unnamed_addr {
dec_label_pc_2e79:
  %storemerge.reg2mem = alloca i32, !insn.addr !202
  %.reg2mem = alloca i64, !insn.addr !202
  %size.tr = trunc i64 %size to i32
  %0 = mul i32 %size.tr, 4, !insn.addr !203
  %1 = call i64* @malloc(i32 %0), !insn.addr !203
  %2 = icmp eq i64* %1, null, !insn.addr !204
  %3 = icmp eq i1 %2, false, !insn.addr !205
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !205
  br i1 %3, label %dec_label_pc_2ee0.preheader, label %dec_label_pc_2f21, !insn.addr !205

dec_label_pc_2ee0.preheader:                      ; preds = %dec_label_pc_2e79
  %4 = ptrtoint i64* %1 to i64, !insn.addr !203
  %5 = icmp eq i64 %size, 0, !insn.addr !206
  store i64 0, i64* %.reg2mem, !insn.addr !207
  br i1 %5, label %dec_label_pc_2eea, label %dec_label_pc_2eb5, !insn.addr !207

dec_label_pc_2eb5:                                ; preds = %dec_label_pc_2ee0.preheader, %dec_label_pc_2eb5
  %.reload = load i64, i64* %.reg2mem
  %6 = trunc i64 %.reload to i32
  %7 = mul i32 %6, 10, !insn.addr !208
  %8 = mul i64 %.reload, 4, !insn.addr !209
  %9 = add i64 %8, %4, !insn.addr !210
  %10 = inttoptr i64 %9 to i32*, !insn.addr !211
  store i32 %7, i32* %10, align 4, !insn.addr !211
  %11 = add nuw i64 %.reload, 1, !insn.addr !212
  %exitcond = icmp eq i64 %11, %size
  store i64 %11, i64* %.reg2mem, !insn.addr !207
  br i1 %exitcond, label %dec_label_pc_2eea, label %dec_label_pc_2eb5, !insn.addr !207

dec_label_pc_2eea:                                ; preds = %dec_label_pc_2eb5, %dec_label_pc_2ee0.preheader
  %12 = bitcast i64* %1 to i32*, !insn.addr !213
  %13 = load i32, i32* %12, align 4, !insn.addr !213
  %14 = mul i64 %size, 4, !insn.addr !214
  %15 = add i64 %14, -4, !insn.addr !215
  %16 = add i64 %15, %4, !insn.addr !216
  %17 = inttoptr i64 %16 to i32*, !insn.addr !217
  %18 = load i32, i32* %17, align 4, !insn.addr !217
  %19 = add i32 %18, %13, !insn.addr !218
  call void @free(i64* %1), !insn.addr !219
  store i32 %19, i32* %storemerge.reg2mem, !insn.addr !220
  br label %dec_label_pc_2f21, !insn.addr !220

dec_label_pc_2f21:                                ; preds = %dec_label_pc_2e79, %dec_label_pc_2eea
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !221

; uselistorder directives
  uselistorder i64 %.reload, { 0, 2, 1 }
  uselistorder i64 %4, { 1, 0 }
  uselistorder i64* %1, { 0, 1, 3, 2 }
  uselistorder i64* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2f21, { 1, 0 }
  uselistorder label %dec_label_pc_2eb5, { 1, 0 }
}

define i32 @call_malloc_free() local_unnamed_addr {
dec_label_pc_2f23:
  %0 = call i32 @param_malloc_free(i64 10), !insn.addr !222
  ret i32 %0, !insn.addr !223
}

define i32 @param_memset(i8* %buffer, i64 %size) local_unnamed_addr {
dec_label_pc_2f37:
  %stack_var_-28.0.lcssa.reg2mem = alloca i32, !insn.addr !224
  %stack_var_-28.02.reg2mem = alloca i32, !insn.addr !224
  %.reg2mem = alloca i64, !insn.addr !224
  %0 = bitcast i8* %buffer to i64*, !insn.addr !225
  %1 = trunc i64 %size to i32, !insn.addr !225
  %2 = call i64* @memset(i64* %0, i32 0, i32 %1), !insn.addr !225
  %3 = icmp eq i64 %size, 0, !insn.addr !226
  store i32 0, i32* %stack_var_-28.0.lcssa.reg2mem, !insn.addr !227
  br i1 %3, label %dec_label_pc_2f9c, label %dec_label_pc_2f79.lr.ph, !insn.addr !227

dec_label_pc_2f79.lr.ph:                          ; preds = %dec_label_pc_2f37
  %4 = ptrtoint i8* %buffer to i64, !insn.addr !228
  store i64 0, i64* %.reg2mem
  store i32 0, i32* %stack_var_-28.02.reg2mem
  br label %dec_label_pc_2f79

dec_label_pc_2f79:                                ; preds = %dec_label_pc_2f79, %dec_label_pc_2f79.lr.ph
  %stack_var_-28.02.reload = load i32, i32* %stack_var_-28.02.reg2mem
  %.reload = load i64, i64* %.reg2mem
  %5 = add i64 %.reload, %4, !insn.addr !229
  %6 = inttoptr i64 %5 to i8*, !insn.addr !230
  %7 = load i8, i8* %6, align 1, !insn.addr !230
  %8 = zext i8 %7 to i32, !insn.addr !231
  %9 = add i32 %stack_var_-28.02.reload, %8, !insn.addr !231
  %10 = add nuw i64 %.reload, 1, !insn.addr !232
  %exitcond = icmp eq i64 %10, %size
  store i64 %10, i64* %.reg2mem, !insn.addr !227
  store i32 %9, i32* %stack_var_-28.02.reg2mem, !insn.addr !227
  store i32 %9, i32* %stack_var_-28.0.lcssa.reg2mem, !insn.addr !227
  br i1 %exitcond, label %dec_label_pc_2f9c, label %dec_label_pc_2f79, !insn.addr !227

dec_label_pc_2f9c:                                ; preds = %dec_label_pc_2f79, %dec_label_pc_2f37
  %stack_var_-28.0.lcssa.reload = load i32, i32* %stack_var_-28.0.lcssa.reg2mem
  ret i32 %stack_var_-28.0.lcssa.reload, !insn.addr !233

; uselistorder directives
  uselistorder i64* %.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-28.02.reg2mem, { 1, 0, 2 }
}

define i32 @call_memset() local_unnamed_addr {
dec_label_pc_2fa1:
  %0 = alloca i32
  %rax.0.reg2mem = alloca i32, !insn.addr !234
  %indvars.iv.reg2mem = alloca i64, !insn.addr !234
  %1 = load i32, i32* %0
  %stack_var_-56 = alloca i32, align 4
  %stack_var_-8 = alloca i64, align 8
  %2 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !235
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !236
  %4 = add i64 %2, -48, !insn.addr !237
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_2fc5

dec_label_pc_2fc5:                                ; preds = %dec_label_pc_2fc5, %dec_label_pc_2fa1
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %5 = mul i64 %indvars.iv.reload, 4, !insn.addr !237
  %6 = add i64 %4, %5, !insn.addr !237
  %7 = inttoptr i64 %6 to i32*, !insn.addr !237
  store i32 255, i32* %7, align 4, !insn.addr !237
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 10
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !238
  br i1 %exitcond, label %dec_label_pc_2fdc, label %dec_label_pc_2fc5, !insn.addr !238

dec_label_pc_2fdc:                                ; preds = %dec_label_pc_2fc5
  %8 = bitcast i32* %stack_var_-56 to i8*, !insn.addr !239
  %9 = call i32 @param_memset(i8* nonnull %8, i64 40), !insn.addr !239
  %10 = load i32, i32* %stack_var_-56, align 4, !insn.addr !240
  %11 = add i32 %10, %1, !insn.addr !241
  %12 = call i64 @__readfsqword(i64 40), !insn.addr !242
  %13 = icmp eq i64 %3, %12, !insn.addr !242
  store i32 %11, i32* %rax.0.reg2mem, !insn.addr !243
  br i1 %13, label %dec_label_pc_3009, label %dec_label_pc_3004, !insn.addr !243

dec_label_pc_3004:                                ; preds = %dec_label_pc_2fdc
  call void @__stack_chk_fail(), !insn.addr !244
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !244
  br label %dec_label_pc_3009, !insn.addr !244

dec_label_pc_3009:                                ; preds = %dec_label_pc_3004, %dec_label_pc_2fdc
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !245

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i64 10, { 0, 2, 1 }
}

define i32 @param_strchr_strstr(i8* %str, i8 %ch, i8* %substr) local_unnamed_addr {
dec_label_pc_300b:
  %0 = ptrtoint i8* %str to i64
  %1 = trunc i64 %0 to i32, !insn.addr !246
  %2 = sext i8 %ch to i32, !insn.addr !247
  %3 = call i8* @strchr(i8* %str, i32 %2), !insn.addr !248
  %4 = icmp eq i8* %3, null, !insn.addr !249
  %5 = ptrtoint i8* %3 to i64
  %6 = sub i64 %5, %0
  %phitmp3 = and i64 %6, 4294967295
  %phitmp4 = inttoptr i64 %phitmp3 to i8*
  %storemerge2 = select i1 %4, i8* inttoptr (i64 4294967295 to i8*), i8* %phitmp4
  %sext = mul i64 %0, 4294967296
  %7 = ashr exact i64 %sext, 32, !insn.addr !250
  %8 = inttoptr i64 %7 to i8*, !insn.addr !251
  %9 = call i8* @strstr(i8* %8, i8* %substr), !insn.addr !251
  %10 = icmp eq i8* %9, null, !insn.addr !252
  %11 = ptrtoint i8* %9 to i64
  %12 = trunc i64 %11 to i32
  %phitmp = sub i32 %12, %1
  %storemerge = select i1 %10, i32 -1, i32 %phitmp
  %13 = ptrtoint i8* %storemerge2 to i64
  %14 = trunc i64 %13 to i32, !insn.addr !253
  %15 = add i32 %storemerge, %14, !insn.addr !254
  ret i32 %15, !insn.addr !255

; uselistorder directives
  uselistorder i8* %9, { 1, 0 }
}

define i32 @call_strchr_strstr() local_unnamed_addr {
dec_label_pc_308d:
  %0 = call i32 @param_strchr_strstr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_5095, i64 0, i64 0), i8 66, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_50a9, i64 0, i64 0)), !insn.addr !256
  ret i32 %0, !insn.addr !257
}

define void @test_standard_library_functions() local_unnamed_addr {
dec_label_pc_30c4:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_50b0 to i8*)), !insn.addr !258
  %1 = call i32 @call_strcpy(), !insn.addr !259
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_50d4 to i8*)), !insn.addr !260
  %3 = call i32 @call_strcmp(), !insn.addr !261
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_50ef to i8*)), !insn.addr !262
  %5 = call i32 @call_strlen(), !insn.addr !263
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_510a to i8*)), !insn.addr !264
  %7 = call i32 @call_memcpy(), !insn.addr !265
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5126 to i8*)), !insn.addr !266
  %9 = call i32 @call_memcmp(), !insn.addr !267
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5142 to i8*)), !insn.addr !268
  %11 = call i32 @call_printf(), !insn.addr !269
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_515e to i8*)), !insn.addr !270
  %13 = call i32 @call_scanf(), !insn.addr !271
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_517a to i8*)), !insn.addr !272
  %15 = call i32 @call_fopen_fclose(), !insn.addr !273
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5197 to i8*)), !insn.addr !274
  %17 = call i32 @call_fread_fwrite(), !insn.addr !275
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_51b3 to i8*)), !insn.addr !276
  %19 = call i32 @call_malloc_free(), !insn.addr !277
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_51cf to i8*)), !insn.addr !278
  %21 = call i32 @call_memset(), !insn.addr !279
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_51eb to i8*)), !insn.addr !280
  %23 = call i32 @call_strchr_strstr(), !insn.addr !281
  %24 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5206 to i8*)), !insn.addr !282
  ret void, !insn.addr !283
}

define i32 @param_linux_syscall(i8* %pathname) local_unnamed_addr {
dec_label_pc_325e:
  %storemerge.in.reg2mem = alloca i32, !insn.addr !284
  %0 = call i32 (i32, ...) @syscall(i32 2), !insn.addr !285
  %1 = icmp slt i32 %0, 0, !insn.addr !286
  %2 = icmp eq i1 %1, false, !insn.addr !287
  br i1 %2, label %dec_label_pc_329d, label %dec_label_pc_3292, !insn.addr !287

dec_label_pc_3292:                                ; preds = %dec_label_pc_325e
  %3 = call i32* @__errno_location(), !insn.addr !288
  %4 = load i32, i32* %3, align 4, !insn.addr !289
  %5 = sub i32 0, %4, !insn.addr !290
  store i32 %5, i32* %storemerge.in.reg2mem, !insn.addr !291
  br label %dec_label_pc_32b4, !insn.addr !291

dec_label_pc_329d:                                ; preds = %dec_label_pc_325e
  %6 = call i32 (i32, ...) @syscall(i32 3), !insn.addr !292
  store i32 %0, i32* %storemerge.in.reg2mem, !insn.addr !293
  br label %dec_label_pc_32b4, !insn.addr !293

dec_label_pc_32b4:                                ; preds = %dec_label_pc_329d, %dec_label_pc_3292
  %storemerge.in.reload = load i32, i32* %storemerge.in.reg2mem
  ret i32 %storemerge.in.reload, !insn.addr !294

; uselistorder directives
  uselistorder i32* %storemerge.in.reg2mem, { 0, 2, 1 }
  uselistorder i32 (i32, ...)* @syscall, { 1, 0, 2 }
}

define i32 @call_linux_syscall() local_unnamed_addr {
dec_label_pc_32b6:
  %0 = call i32 @param_linux_syscall(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_505c, i64 0, i64 0)), !insn.addr !295
  %1 = icmp slt i32 %0, 0, !insn.addr !296
  %. = select i1 %1, i32 -1, i32 42
  ret i32 %., !insn.addr !297
}

define i32 @param_win32_api(i8* %filename) local_unnamed_addr {
dec_label_pc_32e8:
  %0 = alloca i64
  %rax.1.reg2mem = alloca i32, !insn.addr !298
  %1 = load i64, i64* %0
  %stack_var_-168 = alloca i64, align 8
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !299
  %3 = bitcast i64* %stack_var_-168 to %stat*, !insn.addr !300
  %4 = call i32 @stat(i8* %filename, %stat* nonnull %3), !insn.addr !300
  %5 = icmp slt i32 %4, 0, !insn.addr !301
  %6 = icmp eq i1 %5, false, !insn.addr !302
  %7 = icmp slt i64 %1, 1
  %. = select i1 %7, i32 -2, i32 42
  %rax.0 = select i1 %6, i32 %., i32 -1
  %8 = call i64 @__readfsqword(i64 40), !insn.addr !303
  %9 = icmp eq i64 %2, %8, !insn.addr !303
  store i32 %rax.0, i32* %rax.1.reg2mem, !insn.addr !304
  br i1 %9, label %dec_label_pc_335a, label %dec_label_pc_3355, !insn.addr !304

dec_label_pc_3355:                                ; preds = %dec_label_pc_32e8
  call void @__stack_chk_fail(), !insn.addr !305
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.1.reg2mem, !insn.addr !305
  br label %dec_label_pc_335a, !insn.addr !305

dec_label_pc_335a:                                ; preds = %dec_label_pc_3355, %dec_label_pc_32e8
  %rax.1.reload = load i32, i32* %rax.1.reg2mem
  ret i32 %rax.1.reload, !insn.addr !306
}

define i32 @call_win32_api() local_unnamed_addr {
dec_label_pc_335c:
  %0 = call i32 @param_win32_api(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_505c, i64 0, i64 0)), !insn.addr !307
  ret i32 %0, !insn.addr !308
}

define i32 @param_fork_exec(i8* %prog, i8* %arg) local_unnamed_addr {
dec_label_pc_3375:
  %rax.1.reg2mem = alloca i32, !insn.addr !309
  %rax.0.reg2mem = alloca i32, !insn.addr !309
  %stack_var_-28 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !310
  %1 = call i32 @fork(), !insn.addr !311
  %2 = icmp slt i32 %1, 0, !insn.addr !312
  %3 = icmp eq i1 %2, false, !insn.addr !313
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !313
  br i1 %3, label %dec_label_pc_33ad, label %dec_label_pc_341b, !insn.addr !313

dec_label_pc_33ad:                                ; preds = %dec_label_pc_3375
  %4 = icmp eq i32 %1, 0, !insn.addr !314
  %5 = icmp eq i1 %4, false, !insn.addr !315
  br i1 %5, label %dec_label_pc_33db, label %dec_label_pc_33b3, !insn.addr !315

dec_label_pc_33b3:                                ; preds = %dec_label_pc_33ad
  %6 = call i32 (i8*, i8*, ...) @execl(i8* %prog, i8* %prog), !insn.addr !316
  call void @_exit(i32 127), !insn.addr !317
  unreachable, !insn.addr !317

dec_label_pc_33db:                                ; preds = %dec_label_pc_33ad
  %7 = call i32 @waitpid(i32 %1, i32* nonnull %stack_var_-28, i32 0), !insn.addr !318
  %8 = icmp slt i32 %7, 0, !insn.addr !319
  %9 = icmp eq i1 %8, false, !insn.addr !320
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !320
  br i1 %9, label %dec_label_pc_3401, label %dec_label_pc_341b, !insn.addr !320

dec_label_pc_3401:                                ; preds = %dec_label_pc_33db
  %10 = load i32, i32* %stack_var_-28, align 4, !insn.addr !321
  %11 = urem i32 %10, 128, !insn.addr !322
  %12 = icmp eq i32 %11, 0, !insn.addr !323
  %13 = icmp eq i1 %12, false, !insn.addr !324
  store i32 -3, i32* %rax.0.reg2mem, !insn.addr !324
  br i1 %13, label %dec_label_pc_341b, label %dec_label_pc_340b, !insn.addr !324

dec_label_pc_340b:                                ; preds = %dec_label_pc_3401
  %14 = udiv i32 %10, 256
  %15 = urem i32 %14, 256
  store i32 %15, i32* %rax.0.reg2mem, !insn.addr !325
  br label %dec_label_pc_341b, !insn.addr !325

dec_label_pc_341b:                                ; preds = %dec_label_pc_3401, %dec_label_pc_33db, %dec_label_pc_3375, %dec_label_pc_340b
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %16 = call i64 @__readfsqword(i64 40), !insn.addr !326
  %17 = icmp eq i64 %0, %16, !insn.addr !326
  store i32 %rax.0.reload, i32* %rax.1.reg2mem, !insn.addr !327
  br i1 %17, label %dec_label_pc_342f, label %dec_label_pc_342a, !insn.addr !327

dec_label_pc_342a:                                ; preds = %dec_label_pc_341b
  call void @__stack_chk_fail(), !insn.addr !328
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.1.reg2mem, !insn.addr !328
  br label %dec_label_pc_342f, !insn.addr !328

dec_label_pc_342f:                                ; preds = %dec_label_pc_342a, %dec_label_pc_341b
  %rax.1.reload = load i32, i32* %rax.1.reg2mem
  ret i32 %rax.1.reload, !insn.addr !329

; uselistorder directives
  uselistorder i32* %rax.0.reg2mem, { 0, 4, 1, 2, 3 }
  uselistorder i32 256, { 1, 0 }
  uselistorder label %dec_label_pc_341b, { 3, 0, 1, 2 }
}

define i32 @call_fork_exec() local_unnamed_addr {
dec_label_pc_3431:
  %0 = call i32 @param_fork_exec(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_5222, i64 0, i64 0), i8* null), !insn.addr !330
  %1 = icmp eq i32 %0, 0, !insn.addr !331
  %2 = icmp eq i1 %1, false, !insn.addr !332
  %. = select i1 %2, i32 -1, i32 42
  ret i32 %., !insn.addr !333
}

define i32 @param_pipe_communication() local_unnamed_addr {
dec_label_pc_3468:
  %0 = alloca i32
  %rax.1.reg2mem = alloca i32, !insn.addr !334
  %rax.0.reg2mem = alloca i32, !insn.addr !334
  %pipefd_-80 = alloca i64, align 8
  %tmpcast = bitcast i64* %pipefd_-80 to [2 x i32]*
  %stack_var_-56 = alloca i64, align 8
  %1 = load i32, i32* %0
  %buffer_-72 = alloca [32 x i8], align 8
  %buffer_-64 = alloca [32 x i8], align 4
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !335
  %3 = ptrtoint [32 x i8]* %buffer_-64 to i64, !insn.addr !336
  %4 = trunc i64 %3 to i32, !insn.addr !337
  %5 = insertvalue [2 x i32] undef, i32 %4, 0, !insn.addr !337
  %6 = call i32 @pipe([2 x i32] %5), !insn.addr !337
  %7 = icmp slt i32 %6, 0, !insn.addr !338
  %8 = icmp eq i1 %7, false, !insn.addr !339
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !339
  br i1 %8, label %dec_label_pc_349d, label %dec_label_pc_355d, !insn.addr !339

dec_label_pc_349d:                                ; preds = %dec_label_pc_3468
  %9 = call i32 @fork(), !insn.addr !340
  %10 = icmp slt i32 %9, 0, !insn.addr !341
  %11 = icmp eq i1 %10, false, !insn.addr !342
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !342
  br i1 %11, label %dec_label_pc_34b5, label %dec_label_pc_355d, !insn.addr !342

dec_label_pc_34b5:                                ; preds = %dec_label_pc_349d
  %12 = icmp eq i32 %9, 0, !insn.addr !343
  %13 = icmp eq i1 %12, false, !insn.addr !344
  br i1 %13, label %dec_label_pc_3504, label %dec_label_pc_34bb, !insn.addr !344

dec_label_pc_34bb:                                ; preds = %dec_label_pc_34b5
  %14 = bitcast [32 x i8]* %buffer_-64 to i32*, !insn.addr !345
  %15 = load i32, i32* %14, align 4, !insn.addr !345
  %16 = call i32 @close(i32 %15), !insn.addr !346
  store [32 x i8] [i8 ptrtoint ([10 x i8]* @global_var_522c to i8), i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef], [32 x i8]* %buffer_-72, align 8, !insn.addr !347
  %17 = bitcast [32 x i8]* %buffer_-72 to i64*, !insn.addr !348
  %18 = load i64, i64* %17, align 8
  %19 = inttoptr i64 %18 to i8*, !insn.addr !349
  %20 = call i32 @strlen(i8* %19), !insn.addr !349
  %21 = inttoptr i64 %18 to i64*, !insn.addr !350
  %22 = call i32 @write(i32 %1, i64* %21, i32 %20), !insn.addr !350
  %23 = call i32 @close(i32 %1), !insn.addr !351
  call void @_exit(i32 0), !insn.addr !352
  unreachable, !insn.addr !352

dec_label_pc_3504:                                ; preds = %dec_label_pc_34b5
  %24 = call i32 @close(i32 %1), !insn.addr !353
  %25 = bitcast [32 x i8]* %buffer_-64 to i32*, !insn.addr !354
  %26 = load i32, i32* %25, align 4, !insn.addr !354
  %27 = call i32 @read(i32 %26, i64* nonnull %stack_var_-56, i32 31), !insn.addr !355
  %28 = insertvalue [2 x i32] undef, i32 %27, 0, !insn.addr !356
  store [2 x i32] %28, [2 x i32]* %tmpcast, align 8, !insn.addr !356
  %29 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !357
  %30 = load i64, i64* %pipefd_-80, align 8, !insn.addr !358
  %31 = add i64 %30, %29, !insn.addr !359
  %32 = inttoptr i64 %31 to i8*, !insn.addr !360
  store i8 0, i8* %32, align 1, !insn.addr !360
  %33 = load i32, i32* %25, align 4, !insn.addr !361
  %34 = call i32 @close(i32 %33), !insn.addr !362
  %35 = call i32 @wait(i64 0), !insn.addr !363
  %36 = load i64, i64* %pipefd_-80, align 8, !insn.addr !364
  %37 = icmp slt i64 %36, 1, !insn.addr !365
  %. = select i1 %37, i32 -3, i32 42
  store i32 %., i32* %rax.0.reg2mem, !insn.addr !366
  br label %dec_label_pc_355d, !insn.addr !366

dec_label_pc_355d:                                ; preds = %dec_label_pc_3504, %dec_label_pc_349d, %dec_label_pc_3468
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %38 = call i64 @__readfsqword(i64 40), !insn.addr !367
  %39 = icmp eq i64 %2, %38, !insn.addr !367
  store i32 %rax.0.reload, i32* %rax.1.reg2mem, !insn.addr !368
  br i1 %39, label %dec_label_pc_3571, label %dec_label_pc_356c, !insn.addr !368

dec_label_pc_356c:                                ; preds = %dec_label_pc_355d
  call void @__stack_chk_fail(), !insn.addr !369
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.1.reg2mem, !insn.addr !369
  br label %dec_label_pc_3571, !insn.addr !369

dec_label_pc_3571:                                ; preds = %dec_label_pc_356c, %dec_label_pc_355d
  %rax.1.reload = load i32, i32* %rax.1.reg2mem
  ret i32 %rax.1.reload, !insn.addr !370

; uselistorder directives
  uselistorder i64* %stack_var_-56, { 1, 0 }
  uselistorder void (i32)* @_exit, { 1, 0, 2 }
  uselistorder [2 x i32] undef, { 1, 0 }
}

define i32 @call_pipe_communication() local_unnamed_addr {
dec_label_pc_3573:
  %0 = call i32 @param_pipe_communication(), !insn.addr !371
  ret i32 %0, !insn.addr !372
}

define i32 @param_socket_create() local_unnamed_addr {
dec_label_pc_3582:
  %rax.1.reg2mem = alloca i32, !insn.addr !373
  %rax.0.reg2mem = alloca i32, !insn.addr !373
  %stack_var_-40 = alloca i64, align 8
  %addr_-48 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !374
  %1 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !375
  %2 = icmp slt i32 %1, 0, !insn.addr !376
  %3 = icmp eq i1 %2, false, !insn.addr !377
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !377
  br i1 %3, label %dec_label_pc_35c4, label %dec_label_pc_3693, !insn.addr !377

dec_label_pc_35c4:                                ; preds = %dec_label_pc_3582
  store i64 1, i64* %addr_-48, align 8, !insn.addr !378
  %4 = call i32 @setsockopt(i32 %1, i32 1, i32 2, i64* nonnull %addr_-48, i32 4), !insn.addr !379
  %5 = icmp slt i32 %4, 0, !insn.addr !380
  %6 = icmp eq i1 %5, false, !insn.addr !381
  br i1 %6, label %dec_label_pc_3604, label %dec_label_pc_35f0, !insn.addr !381

dec_label_pc_35f0:                                ; preds = %dec_label_pc_35c4
  %7 = call i32 @close(i32 %1), !insn.addr !382
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !383
  br label %dec_label_pc_3693, !insn.addr !383

dec_label_pc_3604:                                ; preds = %dec_label_pc_35c4
  %8 = call i64* @memset(i64* nonnull %stack_var_-40, i32 0, i32 16), !insn.addr !384
  store i64 2, i64* %stack_var_-40, align 8, !insn.addr !385
  %9 = call i16 @htons(i16 0), !insn.addr !386
  %10 = bitcast i64* %stack_var_-40 to %sockaddr*, !insn.addr !387
  %11 = call i32 @bind(i32 %1, %sockaddr* nonnull %10, i32 16), !insn.addr !387
  %12 = icmp slt i32 %11, 0, !insn.addr !388
  %13 = icmp eq i1 %12, false, !insn.addr !389
  br i1 %13, label %dec_label_pc_3660, label %dec_label_pc_364f, !insn.addr !389

dec_label_pc_364f:                                ; preds = %dec_label_pc_3604
  %14 = call i32 @close(i32 %1), !insn.addr !390
  store i32 -3, i32* %rax.0.reg2mem, !insn.addr !391
  br label %dec_label_pc_3693, !insn.addr !391

dec_label_pc_3660:                                ; preds = %dec_label_pc_3604
  %15 = call i32 @listen(i32 %1, i32 5), !insn.addr !392
  %16 = icmp slt i32 %15, 0, !insn.addr !393
  %17 = icmp eq i1 %16, false, !insn.addr !394
  %18 = call i32 @close(i32 %1)
  %. = select i1 %17, i32 42, i32 -4
  store i32 %., i32* %rax.0.reg2mem, !insn.addr !395
  br label %dec_label_pc_3693, !insn.addr !395

dec_label_pc_3693:                                ; preds = %dec_label_pc_3660, %dec_label_pc_3582, %dec_label_pc_364f, %dec_label_pc_35f0
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %19 = call i64 @__readfsqword(i64 40), !insn.addr !396
  %20 = icmp eq i64 %0, %19, !insn.addr !396
  store i32 %rax.0.reload, i32* %rax.1.reg2mem, !insn.addr !397
  br i1 %20, label %dec_label_pc_36a7, label %dec_label_pc_36a2, !insn.addr !397

dec_label_pc_36a2:                                ; preds = %dec_label_pc_3693
  call void @__stack_chk_fail(), !insn.addr !398
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.1.reg2mem, !insn.addr !398
  br label %dec_label_pc_36a7, !insn.addr !398

dec_label_pc_36a7:                                ; preds = %dec_label_pc_36a2, %dec_label_pc_3693
  %rax.1.reload = load i32, i32* %rax.1.reg2mem
  ret i32 %rax.1.reload, !insn.addr !399

; uselistorder directives
  uselistorder i32 %1, { 1, 2, 3, 4, 0, 5, 6 }
  uselistorder i64* %stack_var_-40, { 0, 2, 1 }
  uselistorder i32* %rax.0.reg2mem, { 0, 1, 4, 3, 2 }
  uselistorder i64* (i64*, i32, i32)* @memset, { 1, 0, 2 }
  uselistorder label %dec_label_pc_3693, { 0, 2, 3, 1 }
}

define i32 @call_socket_create() local_unnamed_addr {
dec_label_pc_36a9:
  %0 = call i32 @param_socket_create(), !insn.addr !400
  ret i32 %0, !insn.addr !401
}

define i32 @param_shmget_shmat() local_unnamed_addr {
dec_label_pc_36b8:
  %rax.0.reg2mem = alloca i32, !insn.addr !402
  %0 = call i32 (i8*, i32, ...) @open(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_5236, i64 0, i64 0), i32 66), !insn.addr !403
  %1 = icmp slt i32 %0, 0, !insn.addr !404
  %2 = icmp eq i1 %1, false, !insn.addr !405
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !405
  br i1 %2, label %dec_label_pc_36fd, label %dec_label_pc_37c6, !insn.addr !405

dec_label_pc_36fd:                                ; preds = %dec_label_pc_36b8
  %3 = call i32 @close(i32 %0), !insn.addr !406
  %4 = call i32 @ftok(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_5236, i64 0, i64 0), i32 42), !insn.addr !407
  %5 = icmp slt i32 %4, 0, !insn.addr !408
  %6 = icmp eq i1 %5, false, !insn.addr !409
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !409
  br i1 %6, label %dec_label_pc_372e, label %dec_label_pc_37c6, !insn.addr !409

dec_label_pc_372e:                                ; preds = %dec_label_pc_36fd
  %7 = call i32 @shmget(i32 %4, i32 ptrtoint (i32* @global_var_1000 to i32), i32 ptrtoint (i32* @global_var_3b6 to i32)), !insn.addr !410
  %8 = icmp slt i32 %7, 0, !insn.addr !411
  %9 = icmp eq i1 %8, false, !insn.addr !412
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !412
  br i1 %9, label %dec_label_pc_3752, label %dec_label_pc_37c6, !insn.addr !412

dec_label_pc_3752:                                ; preds = %dec_label_pc_372e
  %10 = call i64* @shmat(i32 %7, i64* null, i32 0), !insn.addr !413
  %11 = icmp eq i64* %10, inttoptr (i64 -1 to i64*), !insn.addr !414
  %12 = icmp eq i1 %11, false, !insn.addr !415
  store i32 -3, i32* %rax.0.reg2mem, !insn.addr !415
  br i1 %12, label %dec_label_pc_3778, label %dec_label_pc_37c6, !insn.addr !415

dec_label_pc_3778:                                ; preds = %dec_label_pc_3752
  %13 = bitcast i64* %10 to i8*
  %14 = ptrtoint i64* %10 to i64, !insn.addr !416
  store i64 7299600957910902867, i64* %10, align 8, !insn.addr !417
  %15 = add i64 %14, 8, !insn.addr !418
  %16 = inttoptr i64 %15 to i32*, !insn.addr !418
  store i32 2037542765, i32* %16, align 4, !insn.addr !418
  %17 = add i64 %14, 12, !insn.addr !419
  %18 = inttoptr i64 %17 to i8*, !insn.addr !419
  store i8 0, i8* %18, align 1, !insn.addr !419
  %19 = call i32 @strlen(i8* %13), !insn.addr !420
  %20 = call i32 @shmdt(i64* %10), !insn.addr !421
  %21 = call i32 @shmctl(i32 %7, i32 0, %shmid_ds* null), !insn.addr !422
  store i32 %19, i32* %rax.0.reg2mem, !insn.addr !423
  br label %dec_label_pc_37c6, !insn.addr !423

dec_label_pc_37c6:                                ; preds = %dec_label_pc_3752, %dec_label_pc_372e, %dec_label_pc_36fd, %dec_label_pc_36b8, %dec_label_pc_3778
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !424

; uselistorder directives
  uselistorder i64 %14, { 1, 0 }
  uselistorder i64* %10, { 0, 2, 1, 4, 3 }
  uselistorder i32* %rax.0.reg2mem, { 0, 5, 1, 2, 3, 4 }
  uselistorder i32 (i8*)* @strlen, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder i8 0, { 2, 3, 4, 1, 0 }
  uselistorder i32 (i32)* @close, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder label %dec_label_pc_37c6, { 4, 0, 1, 2, 3 }
}

define i32 @call_shmget_shmat() local_unnamed_addr {
dec_label_pc_37c8:
  %0 = call i32 @param_shmget_shmat(), !insn.addr !425
  %1 = icmp slt i32 %0, 1, !insn.addr !426
  %. = select i1 %1, i32 -1, i32 42
  ret i32 %., !insn.addr !427
}

define void @signal_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_37f0:
  store i32 1, i32* @signal_received, align 4, !insn.addr !428
  store i32 %sig, i32* @signal_number, align 4, !insn.addr !429
  ret void, !insn.addr !430
}

define i32 @param_signal_handling() local_unnamed_addr {
dec_label_pc_3811:
  %rax.0.reg2mem = alloca i32, !insn.addr !431
  %.reg2mem15 = alloca i32, !insn.addr !431
  %stack_var_-12.125.reg2mem = alloca i32, !insn.addr !431
  %.reg2mem = alloca i32, !insn.addr !431
  %stack_var_-12.037.reg2mem = alloca i32, !insn.addr !431
  %0 = call void (i32)* @signal(i32 10, void (i32)* inttoptr (i64 14320 to void (i32)*)), !insn.addr !432
  %1 = icmp eq void (i32)* %0, inttoptr (i64 -1 to void (i32)*), !insn.addr !433
  %2 = icmp eq i1 %1, false, !insn.addr !434
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !434
  br i1 %2, label %dec_label_pc_3841, label %dec_label_pc_3946, !insn.addr !434

dec_label_pc_3841:                                ; preds = %dec_label_pc_3811
  %3 = call void (i32)* @signal(i32 14, void (i32)* inttoptr (i64 14320 to void (i32)*)), !insn.addr !435
  %4 = icmp eq void (i32)* %3, inttoptr (i64 -1 to void (i32)*), !insn.addr !436
  %5 = icmp eq i1 %4, false, !insn.addr !437
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !437
  br i1 %5, label %dec_label_pc_3865, label %dec_label_pc_3946, !insn.addr !437

dec_label_pc_3865:                                ; preds = %dec_label_pc_3841
  store i32 0, i32* @signal_received, align 4, !insn.addr !438
  %6 = call i32 @raise(i32 10), !insn.addr !439
  %7 = load i32, i32* @signal_received, align 4, !insn.addr !440
  %8 = icmp eq i32 %7, 0, !insn.addr !441
  %9 = icmp eq i1 %8, false, !insn.addr !442
  %brmerge = or i1 %9, xor (i1 icmp slt (i32 ptrtoint (i32* @global_var_3e8 to i32), i32 0), i1 icmp eq (i32 ptrtoint (i32* @global_var_3e8 to i32), i32 0))
  store i32 ptrtoint (i32* @global_var_3e8 to i32), i32* %stack_var_-12.037.reg2mem, !insn.addr !442
  store i32 %7, i32* %.reg2mem, !insn.addr !442
  br i1 %brmerge, label %dec_label_pc_38a3, label %dec_label_pc_3882, !insn.addr !442

dec_label_pc_3882:                                ; preds = %dec_label_pc_3865, %dec_label_pc_3896
  %10 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !443
  %11 = load i32, i32* @signal_received, align 4, !insn.addr !440
  %12 = icmp eq i32 %11, 0, !insn.addr !441
  %13 = icmp eq i1 %12, false, !insn.addr !442
  store i32 %11, i32* %.reg2mem, !insn.addr !442
  br i1 %13, label %dec_label_pc_38a3, label %dec_label_pc_3896, !insn.addr !442

dec_label_pc_3896:                                ; preds = %dec_label_pc_3882
  %stack_var_-12.037.reload = load i32, i32* %stack_var_-12.037.reg2mem
  %14 = add i32 %stack_var_-12.037.reload, -1, !insn.addr !444
  %15 = icmp eq i32 %14, 0, !insn.addr !445
  %16 = icmp slt i32 %14, 0, !insn.addr !445
  %17 = icmp eq i1 %16, false, !insn.addr !446
  %18 = icmp eq i1 %15, false, !insn.addr !446
  %19 = icmp eq i1 %17, %18, !insn.addr !446
  store i32 %14, i32* %stack_var_-12.037.reg2mem, !insn.addr !446
  store i32 %11, i32* %.reg2mem, !insn.addr !446
  br i1 %19, label %dec_label_pc_3882, label %dec_label_pc_38a3, !insn.addr !446

dec_label_pc_38a3:                                ; preds = %dec_label_pc_3865, %dec_label_pc_3896, %dec_label_pc_3882
  %.reload = load i32, i32* %.reg2mem, !insn.addr !447
  %20 = icmp eq i32 %.reload, 0, !insn.addr !448
  %21 = icmp eq i1 %20, false, !insn.addr !449
  store i32 -3, i32* %rax.0.reg2mem, !insn.addr !449
  br i1 %21, label %dec_label_pc_38b7, label %dec_label_pc_3946, !insn.addr !449

dec_label_pc_38b7:                                ; preds = %dec_label_pc_38a3
  %22 = load i32, i32* @signal_number, align 4, !insn.addr !450
  %23 = icmp eq i32 %22, 10, !insn.addr !451
  store i32 -4, i32* %rax.0.reg2mem, !insn.addr !452
  br i1 %23, label %dec_label_pc_38c9, label %dec_label_pc_3946, !insn.addr !452

dec_label_pc_38c9:                                ; preds = %dec_label_pc_38b7
  store i32 0, i32* @signal_received, align 4, !insn.addr !453
  %24 = call i32 @alarm(i32 1), !insn.addr !454
  %25 = load i32, i32* @signal_received, align 4, !insn.addr !455
  %26 = icmp eq i32 %25, 0, !insn.addr !456
  %27 = icmp eq i1 %26, false, !insn.addr !457
  %brmerge14 = or i1 %27, xor (i1 icmp slt (i32 ptrtoint (i64* @global_var_7d0 to i32), i32 0), i1 icmp eq (i32 ptrtoint (i64* @global_var_7d0 to i32), i32 0))
  store i32 ptrtoint (i64* @global_var_7d0 to i32), i32* %stack_var_-12.125.reg2mem, !insn.addr !457
  store i32 %25, i32* %.reg2mem15, !insn.addr !457
  br i1 %brmerge14, label %dec_label_pc_3907, label %dec_label_pc_38e6, !insn.addr !457

dec_label_pc_38e6:                                ; preds = %dec_label_pc_38c9, %dec_label_pc_38fa
  %28 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !458
  %29 = load i32, i32* @signal_received, align 4, !insn.addr !455
  %30 = icmp eq i32 %29, 0, !insn.addr !456
  %31 = icmp eq i1 %30, false, !insn.addr !457
  store i32 %29, i32* %.reg2mem15, !insn.addr !457
  br i1 %31, label %dec_label_pc_3907, label %dec_label_pc_38fa, !insn.addr !457

dec_label_pc_38fa:                                ; preds = %dec_label_pc_38e6
  %stack_var_-12.125.reload = load i32, i32* %stack_var_-12.125.reg2mem
  %32 = add i32 %stack_var_-12.125.reload, -1, !insn.addr !459
  %33 = icmp eq i32 %32, 0, !insn.addr !460
  %34 = icmp slt i32 %32, 0, !insn.addr !460
  %35 = icmp eq i1 %34, false, !insn.addr !461
  %36 = icmp eq i1 %33, false, !insn.addr !461
  %37 = icmp eq i1 %35, %36, !insn.addr !461
  store i32 %32, i32* %stack_var_-12.125.reg2mem, !insn.addr !461
  store i32 %29, i32* %.reg2mem15, !insn.addr !461
  br i1 %37, label %dec_label_pc_38e6, label %dec_label_pc_3907, !insn.addr !461

dec_label_pc_3907:                                ; preds = %dec_label_pc_38c9, %dec_label_pc_38fa, %dec_label_pc_38e6
  %.reload16 = load i32, i32* %.reg2mem15, !insn.addr !462
  %38 = icmp ne i32 %.reload16, 0, !insn.addr !463
  %39 = load i32, i32* @signal_number, align 4, !insn.addr !464
  %40 = icmp eq i32 %39, 14, !insn.addr !465
  %or.cond = icmp eq i1 %38, %40
  store i32 -5, i32* %rax.0.reg2mem, !insn.addr !466
  br i1 %or.cond, label %dec_label_pc_3923, label %dec_label_pc_3946, !insn.addr !466

dec_label_pc_3923:                                ; preds = %dec_label_pc_3907
  %41 = call void (i32)* @signal(i32 10, void (i32)* null), !insn.addr !467
  %42 = call void (i32)* @signal(i32 14, void (i32)* null), !insn.addr !468
  store i32 42, i32* %rax.0.reg2mem, !insn.addr !469
  br label %dec_label_pc_3946, !insn.addr !469

dec_label_pc_3946:                                ; preds = %dec_label_pc_3907, %dec_label_pc_38b7, %dec_label_pc_38a3, %dec_label_pc_3841, %dec_label_pc_3811, %dec_label_pc_3923
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !470

; uselistorder directives
  uselistorder i32 %29, { 1, 0, 2 }
  uselistorder i32 %11, { 1, 0, 2 }
  uselistorder i32* %stack_var_-12.037.reg2mem, { 2, 0, 1 }
  uselistorder i32* %.reg2mem, { 0, 2, 1, 3 }
  uselistorder i32* %stack_var_-12.125.reg2mem, { 2, 0, 1 }
  uselistorder i32* %.reg2mem15, { 0, 2, 1, 3 }
  uselistorder i32* %rax.0.reg2mem, { 0, 6, 1, 2, 3, 4, 5 }
  uselistorder i32 ptrtoint (i64* @global_var_7d0 to i32), { 0, 2, 1 }
  uselistorder i32* @signal_received, { 2, 1, 3, 4, 0, 5, 6 }
  uselistorder i32 14, { 1, 0, 2 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i32 10, { 2, 1, 3, 4, 0 }
  uselistorder label %dec_label_pc_3946, { 5, 0, 1, 2, 3, 4 }
  uselistorder label %dec_label_pc_3907, { 1, 2, 0 }
  uselistorder label %dec_label_pc_38e6, { 1, 0 }
  uselistorder label %dec_label_pc_38a3, { 1, 2, 0 }
  uselistorder label %dec_label_pc_3882, { 1, 0 }
}

define i32 @call_signal_handling() local_unnamed_addr {
dec_label_pc_3948:
  %0 = call i32 @param_signal_handling(), !insn.addr !471
  ret i32 %0, !insn.addr !472
}

define void @test_system_calls() local_unnamed_addr {
dec_label_pc_3957:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_5248 to i8*)), !insn.addr !473
  %1 = call i32 @call_linux_syscall(), !insn.addr !474
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5263 to i8*)), !insn.addr !475
  %3 = call i32 @call_win32_api(), !insn.addr !476
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_527f to i8*)), !insn.addr !477
  %5 = call i32 @call_fork_exec(), !insn.addr !478
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_529b to i8*)), !insn.addr !479
  %7 = call i32 @call_pipe_communication(), !insn.addr !480
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_52b7 to i8*)), !insn.addr !481
  %9 = call i32 @call_socket_create(), !insn.addr !482
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_52d3 to i8*)), !insn.addr !483
  %11 = call i32 @call_shmget_shmat(), !insn.addr !484
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_52ef to i8*)), !insn.addr !485
  %13 = call i32 @call_signal_handling(), !insn.addr !486
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_530b to i8*)), !insn.addr !487
  ret void, !insn.addr !488
}

define i8* @thread_compute(i8* %arg) local_unnamed_addr {
dec_label_pc_3a51:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = mul i32 %2, %2, !insn.addr !489
  %4 = call i64* @malloc(i32 4), !insn.addr !490
  %5 = bitcast i64* %4 to i32*, !insn.addr !491
  store i32 %3, i32* %5, align 4, !insn.addr !491
  %6 = bitcast i64* %4 to i8*, !insn.addr !492
  ret i8* %6, !insn.addr !492

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i32 @param_pthread_create(i32 %x) local_unnamed_addr {
dec_label_pc_3a98:
  %rax.0.reg2mem = alloca i32, !insn.addr !493
  %storemerge.reg2mem = alloca i32, !insn.addr !493
  %stack_var_-24 = alloca i64, align 8
  %thread_ret_-32 = alloca i8*, align 8
  %result_-44 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !494
  store i32 %x, i32* %result_-44, align 4, !insn.addr !495
  %1 = bitcast i8** %thread_ret_-32 to i32*, !insn.addr !496
  %2 = bitcast i32* %result_-44 to i64*, !insn.addr !496
  %3 = call i32 @pthread_create(i32* nonnull %1, i64* null, i64* (i64*)* inttoptr (i64 14929 to i64* (i64*)*), i64* nonnull %2), !insn.addr !496
  %4 = icmp eq i32 %3, 0, !insn.addr !497
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !498
  br i1 %4, label %dec_label_pc_3aeb, label %dec_label_pc_3b16, !insn.addr !498

dec_label_pc_3aeb:                                ; preds = %dec_label_pc_3a98
  %5 = load i8*, i8** %thread_ret_-32, align 8, !insn.addr !499
  %6 = ptrtoint i8* %5 to i64, !insn.addr !499
  %7 = trunc i64 %6 to i32, !insn.addr !500
  %8 = bitcast i64* %stack_var_-24 to i64**, !insn.addr !500
  %9 = call i32 @pthread_join(i32 %7, i64** nonnull %8), !insn.addr !500
  %10 = load i64, i64* %stack_var_-24, align 8
  %11 = inttoptr i64 %10 to i32*, !insn.addr !501
  %12 = load i32, i32* %11, align 4, !insn.addr !501
  %13 = inttoptr i64 %10 to i64*, !insn.addr !502
  call void @free(i64* %13), !insn.addr !502
  store i32 %12, i32* %storemerge.reg2mem, !insn.addr !503
  br label %dec_label_pc_3b16, !insn.addr !503

dec_label_pc_3b16:                                ; preds = %dec_label_pc_3a98, %dec_label_pc_3aeb
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %14 = call i64 @__readfsqword(i64 40), !insn.addr !504
  %15 = icmp eq i64 %0, %14, !insn.addr !504
  store i32 %storemerge.reload, i32* %rax.0.reg2mem, !insn.addr !505
  br i1 %15, label %dec_label_pc_3b2a, label %dec_label_pc_3b25, !insn.addr !505

dec_label_pc_3b25:                                ; preds = %dec_label_pc_3b16
  call void @__stack_chk_fail(), !insn.addr !506
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !506
  br label %dec_label_pc_3b2a, !insn.addr !506

dec_label_pc_3b2a:                                ; preds = %dec_label_pc_3b25, %dec_label_pc_3b16
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !507

; uselistorder directives
  uselistorder i8** %thread_ret_-32, { 1, 0 }
  uselistorder i64* %stack_var_-24, { 1, 0 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_3b16, { 1, 0 }
}

define i32 @call_pthread_create() local_unnamed_addr {
dec_label_pc_3b2c:
  %0 = call i32 @param_pthread_create(i32 7), !insn.addr !508
  ret i32 %0, !insn.addr !509
}

define i8* @thread_sum(i8* %arg) local_unnamed_addr {
dec_label_pc_3b40:
  %storemerge2.reg2mem = alloca i32, !insn.addr !510
  %.reg2mem = alloca i32, !insn.addr !510
  %rdi = alloca i64, align 8
  %0 = ptrtoint i8* %arg to i64, !insn.addr !511
  %1 = add i64 %0, 8, !insn.addr !512
  %2 = inttoptr i64 %1 to i32*, !insn.addr !512
  store i32 0, i32* %2, align 4, !insn.addr !512
  %3 = bitcast i64* %rdi to i32*
  %4 = load i32, i32* %3, align 8, !insn.addr !513
  %5 = add i64 %0, 4, !insn.addr !514
  %6 = inttoptr i64 %5 to i32*, !insn.addr !514
  %7 = load i32, i32* %6, align 4, !insn.addr !514
  %8 = zext i32 %7 to i64, !insn.addr !514
  %9 = sext i32 %4 to i64, !insn.addr !515
  %10 = icmp sgt i64 %9, %8, !insn.addr !515
  store i32 0, i32* %.reg2mem, !insn.addr !515
  store i32 %4, i32* %storemerge2.reg2mem, !insn.addr !515
  br i1 %10, label %dec_label_pc_3b8d, label %dec_label_pc_3b6a, !insn.addr !515

dec_label_pc_3b6a:                                ; preds = %dec_label_pc_3b40, %dec_label_pc_3b6a
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %.reload = load i32, i32* %.reg2mem, !insn.addr !516
  %11 = add i32 %storemerge2.reload, %.reload, !insn.addr !517
  store i32 %11, i32* %2, align 4, !insn.addr !518
  %12 = add i32 %storemerge2.reload, 1, !insn.addr !519
  %13 = load i32, i32* %6, align 4, !insn.addr !514
  %14 = zext i32 %13 to i64, !insn.addr !514
  %15 = sext i32 %12 to i64, !insn.addr !515
  %16 = icmp sgt i64 %15, %14, !insn.addr !515
  store i32 %11, i32* %.reg2mem, !insn.addr !515
  store i32 %12, i32* %storemerge2.reg2mem, !insn.addr !515
  br i1 %16, label %dec_label_pc_3b8d, label %dec_label_pc_3b6a, !insn.addr !515

dec_label_pc_3b8d:                                ; preds = %dec_label_pc_3b6a, %dec_label_pc_3b40
  ret i8* null, !insn.addr !520

; uselistorder directives
  uselistorder i32* %6, { 1, 0 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_3b6a, { 1, 0 }
}

define i32 @param_pthread_join() local_unnamed_addr {
dec_label_pc_3b94:
  %rax.1.reg2mem = alloca i32, !insn.addr !521
  %rax.0.reg2mem = alloca i32, !insn.addr !521
  %indvars.iv.reg2mem = alloca i64, !insn.addr !521
  %indvars.iv5.reg2mem = alloca i64, !insn.addr !521
  %tids_-96 = alloca [3 x i64], align 8
  %stack_var_-88 = alloca i64, align 8
  %stack_var_-56 = alloca i32, align 4
  %stack_var_-8 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !522
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !523
  store i32 1, i32* %stack_var_-56, align 4, !insn.addr !524
  %2 = ptrtoint i32* %stack_var_-56 to i64, !insn.addr !525
  %3 = ptrtoint i64* %stack_var_-88 to i64, !insn.addr !526
  store i64 0, i64* %indvars.iv5.reg2mem
  br label %dec_label_pc_3bf7

dec_label_pc_3bf7:                                ; preds = %dec_label_pc_3b94, %dec_label_pc_3c48
  %indvars.iv5.reload = load i64, i64* %indvars.iv5.reg2mem
  %4 = mul nuw nsw i64 %indvars.iv5.reload, 12, !insn.addr !527
  %5 = add i64 %4, %2, !insn.addr !528
  %6 = mul i64 %indvars.iv5.reload, 8, !insn.addr !529
  %7 = add i64 %6, %3, !insn.addr !530
  %8 = inttoptr i64 %7 to i32*, !insn.addr !531
  %9 = inttoptr i64 %5 to i64*, !insn.addr !531
  %10 = call i32 @pthread_create(i32* %8, i64* null, i64* (i64*)* inttoptr (i64 15168 to i64* (i64*)*), i64* %9), !insn.addr !531
  %11 = icmp eq i32 %10, 0, !insn.addr !532
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !533
  br i1 %11, label %dec_label_pc_3c48, label %dec_label_pc_3cac, !insn.addr !533

dec_label_pc_3c48:                                ; preds = %dec_label_pc_3bf7
  %indvars.iv.next6 = add nuw nsw i64 %indvars.iv5.reload, 1
  %12 = icmp ult i64 %indvars.iv.next6, 3, !insn.addr !534
  store i64 %indvars.iv.next6, i64* %indvars.iv5.reg2mem, !insn.addr !534
  br i1 %12, label %dec_label_pc_3bf7, label %dec_label_pc_3c4e, !insn.addr !534

dec_label_pc_3c4e:                                ; preds = %dec_label_pc_3c48
  store [3 x i64] [i64 0, i64 undef, i64 undef], [3 x i64]* %tids_-96, align 8, !insn.addr !535
  %13 = add i64 %0, -80, !insn.addr !536
  %14 = add i64 %0, -40
  %15 = bitcast [3 x i64]* %tids_-96 to i32*
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_3c5e

dec_label_pc_3c5e:                                ; preds = %dec_label_pc_3c4e, %dec_label_pc_3c80
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %16 = mul i64 %indvars.iv.reload, 8, !insn.addr !536
  %17 = add i64 %13, %16, !insn.addr !536
  %18 = inttoptr i64 %17 to i64*, !insn.addr !536
  %19 = load i64, i64* %18, align 8, !insn.addr !536
  %20 = trunc i64 %19 to i32, !insn.addr !537
  %21 = call i32 @pthread_join(i32 %20, i64** null), !insn.addr !537
  %22 = icmp eq i32 %21, 0, !insn.addr !538
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !539
  br i1 %22, label %dec_label_pc_3c80, label %dec_label_pc_3cac, !insn.addr !539

dec_label_pc_3c80:                                ; preds = %dec_label_pc_3c5e
  %23 = mul nuw nsw i64 %indvars.iv.reload, 12, !insn.addr !540
  %24 = add i64 %14, %23, !insn.addr !541
  %25 = inttoptr i64 %24 to i32*, !insn.addr !542
  %26 = load i32, i32* %25, align 4, !insn.addr !542
  %27 = load i32, i32* %15, align 8, !insn.addr !543
  %28 = add i32 %27, %26, !insn.addr !543
  %29 = sext i32 %28 to i64, !insn.addr !543
  %30 = insertvalue [3 x i64] undef, i64 %29, 0, !insn.addr !543
  store [3 x i64] %30, [3 x i64]* %tids_-96, align 8, !insn.addr !543
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %31 = icmp ult i64 %indvars.iv.next, 3, !insn.addr !544
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !544
  br i1 %31, label %dec_label_pc_3c5e, label %dec_label_pc_3ca9, !insn.addr !544

dec_label_pc_3ca9:                                ; preds = %dec_label_pc_3c80
  %32 = load i32, i32* %15, align 8, !insn.addr !545
  store i32 %32, i32* %rax.0.reg2mem, !insn.addr !545
  br label %dec_label_pc_3cac, !insn.addr !545

dec_label_pc_3cac:                                ; preds = %dec_label_pc_3bf7, %dec_label_pc_3c5e, %dec_label_pc_3ca9
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %33 = call i64 @__readfsqword(i64 40), !insn.addr !546
  %34 = icmp eq i64 %1, %33, !insn.addr !546
  store i32 %rax.0.reload, i32* %rax.1.reg2mem, !insn.addr !547
  br i1 %34, label %dec_label_pc_3cc0, label %dec_label_pc_3cbb, !insn.addr !547

dec_label_pc_3cbb:                                ; preds = %dec_label_pc_3cac
  call void @__stack_chk_fail(), !insn.addr !548
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.1.reg2mem, !insn.addr !548
  br label %dec_label_pc_3cc0, !insn.addr !548

dec_label_pc_3cc0:                                ; preds = %dec_label_pc_3cbb, %dec_label_pc_3cac
  %rax.1.reload = load i32, i32* %rax.1.reg2mem
  ret i32 %rax.1.reload, !insn.addr !549

; uselistorder directives
  uselistorder i64 %indvars.iv5.reload, { 0, 2, 1 }
  uselistorder i64* %indvars.iv5.reg2mem, { 1, 0, 2 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rax.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64 3, { 1, 0 }
  uselistorder i64 12, { 1, 0, 4, 2, 3 }
  uselistorder label %dec_label_pc_3cac, { 2, 1, 0 }
  uselistorder label %dec_label_pc_3c5e, { 1, 0 }
  uselistorder label %dec_label_pc_3bf7, { 1, 0 }
}

define i32 @call_pthread_join() local_unnamed_addr {
dec_label_pc_3cc2:
  %0 = call i32 @param_pthread_join(), !insn.addr !550
  ret i32 %0, !insn.addr !551
}

define i8* @thread_increment(i8* %arg) local_unnamed_addr {
dec_label_pc_3cd6:
  %0 = alloca i64
  %storemerge1.reg2mem = alloca i32, !insn.addr !552
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp sgt i32 %2, 0, !insn.addr !553
  store i32 0, i32* %storemerge1.reg2mem, !insn.addr !553
  br i1 %3, label %dec_label_pc_3cf8, label %dec_label_pc_3d3b, !insn.addr !553

dec_label_pc_3cf8:                                ; preds = %dec_label_pc_3cd6, %dec_label_pc_3cf8
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %4 = call i32 @pthread_mutex_lock(i64* bitcast (i32* @counter_mutex to i64*)), !insn.addr !554
  %5 = load i32, i32* @shared_counter, align 4, !insn.addr !555
  %6 = add i32 %5, 1, !insn.addr !556
  store i32 %6, i32* @shared_counter, align 4, !insn.addr !557
  %7 = call i32 @pthread_mutex_unlock(i64* bitcast (i32* @counter_mutex to i64*)), !insn.addr !558
  %8 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !559
  %9 = add nuw nsw i32 %storemerge1.reload, 1, !insn.addr !560
  %exitcond = icmp eq i32 %9, %2
  store i32 %9, i32* %storemerge1.reg2mem, !insn.addr !553
  br i1 %exitcond, label %dec_label_pc_3d3b, label %dec_label_pc_3cf8, !insn.addr !553

dec_label_pc_3d3b:                                ; preds = %dec_label_pc_3cf8, %dec_label_pc_3cd6
  ret i8* null, !insn.addr !561

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32* %storemerge1.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i32)* @usleep, { 2, 1, 0, 3 }
  uselistorder label %dec_label_pc_3cf8, { 1, 0 }
}

define i32 @param_mutex_lock(i32 %thread_count, i32 %iterations_per_thread) local_unnamed_addr {
dec_label_pc_3d42:
  %rax.0.reg2mem = alloca i32, !insn.addr !562
  %.reg2mem = alloca i64, !insn.addr !562
  %indvars.iv.reg2mem = alloca i64, !insn.addr !562
  %stack_var_-48 = alloca i32, align 4
  store i32 %iterations_per_thread, i32* %stack_var_-48, align 4, !insn.addr !563
  %0 = mul i32 %thread_count, 8, !insn.addr !564
  %1 = call i64* @malloc(i32 %0), !insn.addr !565
  %2 = icmp eq i64* %1, null, !insn.addr !566
  %3 = icmp eq i1 %2, false, !insn.addr !567
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !567
  br i1 %3, label %dec_label_pc_3d7a, label %dec_label_pc_3e48, !insn.addr !567

dec_label_pc_3d7a:                                ; preds = %dec_label_pc_3d42
  store i32 0, i32* @shared_counter, align 4, !insn.addr !568
  %4 = icmp sgt i32 %thread_count, 0
  br i1 %4, label %dec_label_pc_3d8d.lr.ph, label %dec_label_pc_3e19, !insn.addr !569

dec_label_pc_3d8d.lr.ph:                          ; preds = %dec_label_pc_3d7a
  %5 = ptrtoint i64* %1 to i64, !insn.addr !565
  %6 = bitcast i32* %stack_var_-48 to i64*, !insn.addr !570
  %7 = sext i32 %thread_count to i64
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_3d8d

dec_label_pc_3d8d:                                ; preds = %dec_label_pc_3d8d.lr.ph, %dec_label_pc_3dd8
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %8 = mul i64 %indvars.iv.reload, 8, !insn.addr !571
  %9 = add i64 %8, %5, !insn.addr !572
  %10 = inttoptr i64 %9 to i32*, !insn.addr !570
  %11 = call i32 @pthread_create(i32* %10, i64* null, i64* (i64*)* inttoptr (i64 15574 to i64* (i64*)*), i64* nonnull %6), !insn.addr !570
  %12 = icmp eq i32 %11, 0, !insn.addr !573
  br i1 %12, label %dec_label_pc_3dd8, label %dec_label_pc_3dc1, !insn.addr !574

dec_label_pc_3dc1:                                ; preds = %dec_label_pc_3d8d
  call void @free(i64* %1), !insn.addr !575
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !576
  br label %dec_label_pc_3e48, !insn.addr !576

dec_label_pc_3dd8:                                ; preds = %dec_label_pc_3d8d
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %13 = icmp slt i64 %indvars.iv.next, %7, !insn.addr !569
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !569
  store i64 0, i64* %.reg2mem, !insn.addr !569
  br i1 %13, label %dec_label_pc_3d8d, label %dec_label_pc_3de9, !insn.addr !569

dec_label_pc_3de9:                                ; preds = %dec_label_pc_3dd8, %dec_label_pc_3de9
  %.reload = load i64, i64* %.reg2mem
  %sext = mul i64 %.reload, 4294967296
  %14 = ashr exact i64 %sext, 29, !insn.addr !577
  %15 = add i64 %14, %5, !insn.addr !578
  %16 = inttoptr i64 %15 to i64*, !insn.addr !579
  %17 = load i64, i64* %16, align 8, !insn.addr !579
  %18 = trunc i64 %17 to i32, !insn.addr !580
  %19 = call i32 @pthread_join(i32 %18, i64** null), !insn.addr !580
  %20 = add nuw nsw i64 %.reload, 1, !insn.addr !581
  %21 = and i64 %20, 4294967295
  %22 = trunc i64 %20 to i32, !insn.addr !582
  %23 = icmp slt i32 %22, %thread_count, !insn.addr !583
  store i64 %21, i64* %.reg2mem, !insn.addr !583
  br i1 %23, label %dec_label_pc_3de9, label %dec_label_pc_3e19, !insn.addr !583

dec_label_pc_3e19:                                ; preds = %dec_label_pc_3de9, %dec_label_pc_3d7a
  call void @free(i64* %1), !insn.addr !584
  %24 = load i32, i32* %stack_var_-48, align 4, !insn.addr !585
  %25 = mul i32 %24, %thread_count, !insn.addr !586
  %26 = load i32, i32* @shared_counter, align 4, !insn.addr !587
  %27 = icmp eq i32 %25, %26, !insn.addr !588
  %28 = icmp eq i1 %27, false, !insn.addr !589
  %. = select i1 %28, i32 -3, i32 42
  store i32 %., i32* %rax.0.reg2mem, !insn.addr !590
  br label %dec_label_pc_3e48, !insn.addr !590

dec_label_pc_3e48:                                ; preds = %dec_label_pc_3e19, %dec_label_pc_3d42, %dec_label_pc_3dc1
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !591

; uselistorder directives
  uselistorder i64* %1, { 1, 0, 3, 2 }
  uselistorder i32* %stack_var_-48, { 1, 0, 2 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i64* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rax.0.reg2mem, { 0, 1, 3, 2 }
  uselistorder i32 %thread_count, { 1, 4, 2, 3, 0 }
  uselistorder label %dec_label_pc_3e48, { 0, 2, 1 }
  uselistorder label %dec_label_pc_3de9, { 1, 0 }
  uselistorder label %dec_label_pc_3d8d, { 1, 0 }
}

define i32 @call_mutex_lock() local_unnamed_addr {
dec_label_pc_3e4a:
  %0 = call i32 @param_mutex_lock(i32 4, i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !592
  ret i32 %0, !insn.addr !593
}

define i8* @consumer_thread(i8* %arg) local_unnamed_addr {
dec_label_pc_3e63:
  %0 = call i32 @pthread_mutex_lock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !594
  %1 = load i32, i32* @ready, align 4, !insn.addr !595
  %2 = icmp eq i32 %1, 0, !insn.addr !596
  br i1 %2, label %dec_label_pc_3e84, label %dec_label_pc_3ea7, !insn.addr !597

dec_label_pc_3e84:                                ; preds = %dec_label_pc_3e63, %dec_label_pc_3e84
  %3 = call i32 @pthread_cond_wait(i64* bitcast (i32* @cond to i64*), i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !598
  %4 = load i32, i32* @ready, align 4, !insn.addr !595
  %5 = icmp eq i32 %4, 0, !insn.addr !596
  br i1 %5, label %dec_label_pc_3e84, label %dec_label_pc_3ea7, !insn.addr !597

dec_label_pc_3ea7:                                ; preds = %dec_label_pc_3e84, %dec_label_pc_3e63
  %6 = load i32, i32* @data, align 4, !insn.addr !599
  %7 = call i32 @pthread_mutex_unlock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !600
  %8 = call i64* @malloc(i32 4), !insn.addr !601
  %9 = bitcast i64* %8 to i32*, !insn.addr !602
  store i32 %6, i32* %9, align 4, !insn.addr !602
  %10 = bitcast i64* %8 to i8*, !insn.addr !603
  ret i8* %10, !insn.addr !603

; uselistorder directives
  uselistorder label %dec_label_pc_3e84, { 1, 0 }
}

define i8* @producer_thread(i8* %arg) local_unnamed_addr {
dec_label_pc_3edc:
  %0 = call i32 @sleep(i32 1), !insn.addr !604
  %1 = call i32 @pthread_mutex_lock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !605
  store i32 42, i32* @data, align 4, !insn.addr !606
  store i32 1, i32* @ready, align 4, !insn.addr !607
  %2 = call i32 @pthread_cond_signal(i64* bitcast (i32* @cond to i64*)), !insn.addr !608
  %3 = call i32 @pthread_mutex_unlock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !609
  ret i8* null, !insn.addr !610

; uselistorder directives
  uselistorder i32 (i64*)* @pthread_mutex_unlock, { 2, 1, 0, 3 }
  uselistorder i32 (i64*)* @pthread_mutex_lock, { 2, 1, 0, 3 }
  uselistorder i64* bitcast (i32* @cond_mutex to i64*), { 0, 1, 3, 2, 4 }
}

define i32 @param_condition_variable() local_unnamed_addr {
dec_label_pc_3f3e:
  %rax.1.reg2mem = alloca i32, !insn.addr !611
  %rax.0.reg2mem = alloca i32, !insn.addr !611
  %stack_var_-24 = alloca i64, align 8
  %consumer_ret_-40 = alloca i8*, align 8
  %consumer_ret_-32 = alloca i8*, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !612
  store i32 0, i32* @ready, align 4, !insn.addr !613
  store i32 0, i32* @data, align 4, !insn.addr !614
  %1 = bitcast i8** %consumer_ret_-32 to i32*, !insn.addr !615
  %2 = call i32 @pthread_create(i32* nonnull %1, i64* null, i64* (i64*)* inttoptr (i64 15971 to i64* (i64*)*), i64* null), !insn.addr !615
  %3 = icmp eq i32 %2, 0, !insn.addr !616
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !617
  br i1 %3, label %dec_label_pc_3f95, label %dec_label_pc_4005, !insn.addr !617

dec_label_pc_3f95:                                ; preds = %dec_label_pc_3f3e
  %4 = bitcast i8** %consumer_ret_-40 to i32*, !insn.addr !618
  %5 = call i32 @pthread_create(i32* nonnull %4, i64* null, i64* (i64*)* inttoptr (i64 16092 to i64* (i64*)*), i64* null), !insn.addr !618
  %6 = icmp eq i32 %5, 0, !insn.addr !619
  %7 = load i8*, i8** %consumer_ret_-32, align 8
  %8 = ptrtoint i8* %7 to i64
  %9 = trunc i64 %8 to i32
  br i1 %6, label %dec_label_pc_3fc9, label %dec_label_pc_3fb6, !insn.addr !620

dec_label_pc_3fb6:                                ; preds = %dec_label_pc_3f95
  %10 = call i32 @pthread_cancel(i32 %9), !insn.addr !621
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !622
  br label %dec_label_pc_4005, !insn.addr !622

dec_label_pc_3fc9:                                ; preds = %dec_label_pc_3f95
  %11 = bitcast i64* %stack_var_-24 to i64**, !insn.addr !623
  %12 = call i32 @pthread_join(i32 %9, i64** nonnull %11), !insn.addr !623
  %13 = load i8*, i8** %consumer_ret_-40, align 8, !insn.addr !624
  %14 = ptrtoint i8* %13 to i64, !insn.addr !624
  %15 = trunc i64 %14 to i32, !insn.addr !625
  %16 = call i32 @pthread_join(i32 %15, i64** null), !insn.addr !625
  %17 = load i64, i64* %stack_var_-24, align 8
  %18 = inttoptr i64 %17 to i32*, !insn.addr !626
  %19 = load i32, i32* %18, align 4, !insn.addr !626
  %20 = inttoptr i64 %17 to i64*, !insn.addr !627
  call void @free(i64* %20), !insn.addr !627
  store i32 %19, i32* %rax.0.reg2mem, !insn.addr !628
  br label %dec_label_pc_4005, !insn.addr !628

dec_label_pc_4005:                                ; preds = %dec_label_pc_3f3e, %dec_label_pc_3fc9, %dec_label_pc_3fb6
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %21 = call i64 @__readfsqword(i64 40), !insn.addr !629
  %22 = icmp eq i64 %0, %21, !insn.addr !629
  store i32 %rax.0.reload, i32* %rax.1.reg2mem, !insn.addr !630
  br i1 %22, label %dec_label_pc_4019, label %dec_label_pc_4014, !insn.addr !630

dec_label_pc_4014:                                ; preds = %dec_label_pc_4005
  call void @__stack_chk_fail(), !insn.addr !631
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.1.reg2mem, !insn.addr !631
  br label %dec_label_pc_4019, !insn.addr !631

dec_label_pc_4019:                                ; preds = %dec_label_pc_4014, %dec_label_pc_4005
  %rax.1.reload = load i32, i32* %rax.1.reg2mem
  ret i32 %rax.1.reload, !insn.addr !632

; uselistorder directives
  uselistorder i32 %9, { 1, 0 }
  uselistorder i8** %consumer_ret_-32, { 1, 0 }
  uselistorder i8** %consumer_ret_-40, { 1, 0 }
  uselistorder i64* %stack_var_-24, { 1, 0 }
  uselistorder i32* %rax.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32* @ready, { 1, 2, 3, 0 }
  uselistorder label %dec_label_pc_4005, { 1, 2, 0 }
}

define i32 @call_condition_variable() local_unnamed_addr {
dec_label_pc_401b:
  %0 = call i32 @param_condition_variable(), !insn.addr !633
  ret i32 %0, !insn.addr !634
}

define i8* @thread_atomic_increment(i8* %arg) local_unnamed_addr {
dec_label_pc_402f:
  %0 = alloca i64
  %rax.0.reg2mem = alloca i8*, !insn.addr !635
  %storemerge1.reg2mem = alloca i32, !insn.addr !635
  %.reg2mem = alloca i32, !insn.addr !635
  %1 = load i64, i64* %0
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !636
  %3 = trunc i64 %1 to i32
  %4 = icmp sgt i32 %3, 0, !insn.addr !637
  br i1 %4, label %dec_label_pc_4060.lr.ph, label %dec_label_pc_409f, !insn.addr !637

dec_label_pc_4060.lr.ph:                          ; preds = %dec_label_pc_402f
  %atomic_counter.promoted = load i32, i32* @atomic_counter, align 4
  store i32 %atomic_counter.promoted, i32* %.reg2mem
  store i32 0, i32* %storemerge1.reg2mem
  br label %dec_label_pc_4060

dec_label_pc_4060:                                ; preds = %dec_label_pc_4060, %dec_label_pc_4060.lr.ph
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %5 = add i32 %.reload, 1, !insn.addr !638
  %6 = add i32 %storemerge1.reload, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !639
  %7 = icmp eq i32 %storemerge1.reload, %5, !insn.addr !640
  %8 = select i1 %7, i32 %6, i32 %5, !insn.addr !640
  %9 = add nuw nsw i32 %storemerge1.reload, 1, !insn.addr !641
  %exitcond = icmp eq i32 %9, %3
  store i32 %8, i32* %.reg2mem, !insn.addr !637
  store i32 %9, i32* %storemerge1.reg2mem, !insn.addr !637
  br i1 %exitcond, label %dec_label_pc_4097.dec_label_pc_409f_crit_edge, label %dec_label_pc_4060, !insn.addr !637

dec_label_pc_4097.dec_label_pc_409f_crit_edge:    ; preds = %dec_label_pc_4060
  store i32 %8, i32* @atomic_counter, align 4
  br label %dec_label_pc_409f

dec_label_pc_409f:                                ; preds = %dec_label_pc_4097.dec_label_pc_409f_crit_edge, %dec_label_pc_402f
  %10 = call i64 @__readfsqword(i64 40), !insn.addr !642
  %11 = icmp eq i64 %2, %10, !insn.addr !642
  store i8* null, i8** %rax.0.reg2mem, !insn.addr !643
  br i1 %11, label %dec_label_pc_40b8, label %dec_label_pc_40b3, !insn.addr !643

dec_label_pc_40b3:                                ; preds = %dec_label_pc_409f
  call void @__stack_chk_fail(), !insn.addr !644
  store i8* bitcast (i32* @0 to i8*), i8** %rax.0.reg2mem, !insn.addr !644
  br label %dec_label_pc_40b8, !insn.addr !644

dec_label_pc_40b8:                                ; preds = %dec_label_pc_40b3, %dec_label_pc_409f
  %rax.0.reload = load i8*, i8** %rax.0.reg2mem
  ret i8* %rax.0.reload, !insn.addr !645

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
  uselistorder i32 %5, { 1, 0 }
  uselistorder i32 %storemerge1.reload, { 0, 2, 1 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32* %.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge1.reg2mem, { 1, 0, 2 }
  uselistorder i32 ptrtoint (i32* @global_var_3e8 to i32), { 7, 3, 4, 6, 5, 0, 2, 1 }
}

define i8* @thread_atomic_load_store(i8* %arg) local_unnamed_addr {
dec_label_pc_40ba:
  %0 = load i32, i32* @atomic_counter, align 4, !insn.addr !646
  %1 = add i32 %0, 100, !insn.addr !647
  store i32 %1, i32* @atomic_counter, align 4, !insn.addr !648
  ret i8* null, !insn.addr !649

; uselistorder directives
  uselistorder i8* null, { 1, 0, 2, 3, 4, 5, 6, 7 }
}

define i32 @param_atomic_ops(i32 %thread_count, i32 %iterations) local_unnamed_addr {
dec_label_pc_40e2:
  %rax.1.reg2mem = alloca i32, !insn.addr !650
  %rax.0.reg2mem = alloca i32, !insn.addr !650
  %.reg2mem = alloca i64, !insn.addr !650
  %indvars.iv.reg2mem = alloca i64, !insn.addr !650
  %tids_-32 = alloca i64*, align 8
  %stack_var_-64 = alloca i32, align 4
  store i32 %iterations, i32* %stack_var_-64, align 4, !insn.addr !651
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !652
  %1 = mul i32 %thread_count, 8, !insn.addr !653
  %2 = call i64* @malloc(i32 %1), !insn.addr !654
  %3 = icmp eq i64* %2, null, !insn.addr !655
  %4 = icmp eq i1 %3, false, !insn.addr !656
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !656
  br i1 %4, label %dec_label_pc_4129, label %dec_label_pc_4225, !insn.addr !656

dec_label_pc_4129:                                ; preds = %dec_label_pc_40e2
  %5 = ptrtoint i64* %2 to i64, !insn.addr !654
  store i32 0, i32* @atomic_counter, align 4, !insn.addr !657
  %6 = icmp sgt i32 %thread_count, 0
  br i1 %6, label %dec_label_pc_413d.lr.ph, label %dec_label_pc_4193, !insn.addr !658

dec_label_pc_413d.lr.ph:                          ; preds = %dec_label_pc_4129
  %7 = bitcast i32* %stack_var_-64 to i64*, !insn.addr !659
  %8 = sext i32 %thread_count to i64
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_413d

dec_label_pc_413d:                                ; preds = %dec_label_pc_413d.lr.ph, %dec_label_pc_418b
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %9 = mul i64 %indvars.iv.reload, 8, !insn.addr !660
  %10 = add i64 %9, %5, !insn.addr !661
  %11 = inttoptr i64 %10 to i32*, !insn.addr !659
  %12 = call i32 @pthread_create(i32* %11, i64* null, i64* (i64*)* inttoptr (i64 16431 to i64* (i64*)*), i64* nonnull %7), !insn.addr !659
  %13 = icmp eq i32 %12, 0, !insn.addr !662
  br i1 %13, label %dec_label_pc_418b, label %dec_label_pc_4171, !insn.addr !663

dec_label_pc_4171:                                ; preds = %dec_label_pc_413d
  call void @free(i64* %2), !insn.addr !664
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !665
  br label %dec_label_pc_4225, !insn.addr !665

dec_label_pc_418b:                                ; preds = %dec_label_pc_413d
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %14 = icmp slt i64 %indvars.iv.next, %8, !insn.addr !658
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !658
  br i1 %14, label %dec_label_pc_413d, label %dec_label_pc_4193, !insn.addr !658

dec_label_pc_4193:                                ; preds = %dec_label_pc_418b, %dec_label_pc_4129
  %15 = bitcast i64** %tids_-32 to i32*, !insn.addr !666
  %16 = call i32 @pthread_create(i32* nonnull %15, i64* null, i64* (i64*)* inttoptr (i64 16570 to i64* (i64*)*), i64* null), !insn.addr !666
  %17 = icmp eq i32 %16, 0, !insn.addr !667
  %18 = icmp eq i1 %17, false, !insn.addr !668
  br i1 %18, label %dec_label_pc_41c5, label %dec_label_pc_41b4, !insn.addr !668

dec_label_pc_41b4:                                ; preds = %dec_label_pc_4193
  %19 = load i64*, i64** %tids_-32, align 8, !insn.addr !669
  %20 = ptrtoint i64* %19 to i64, !insn.addr !669
  %21 = trunc i64 %20 to i32, !insn.addr !670
  %22 = call i32 @pthread_join(i32 %21, i64** null), !insn.addr !670
  br label %dec_label_pc_41c5, !insn.addr !670

dec_label_pc_41c5:                                ; preds = %dec_label_pc_41b4, %dec_label_pc_4193
  store i64 0, i64* %.reg2mem, !insn.addr !671
  br i1 %6, label %dec_label_pc_41ce, label %dec_label_pc_41fe, !insn.addr !671

dec_label_pc_41ce:                                ; preds = %dec_label_pc_41c5, %dec_label_pc_41ce
  %.reload = load i64, i64* %.reg2mem
  %sext = mul i64 %.reload, 4294967296
  %23 = ashr exact i64 %sext, 29, !insn.addr !672
  %24 = add i64 %23, %5, !insn.addr !673
  %25 = inttoptr i64 %24 to i64*, !insn.addr !674
  %26 = load i64, i64* %25, align 8, !insn.addr !674
  %27 = trunc i64 %26 to i32, !insn.addr !675
  %28 = call i32 @pthread_join(i32 %27, i64** null), !insn.addr !675
  %29 = add nuw nsw i64 %.reload, 1, !insn.addr !676
  %30 = and i64 %29, 4294967295
  %31 = trunc i64 %29 to i32, !insn.addr !677
  %32 = icmp slt i32 %31, %thread_count, !insn.addr !671
  store i64 %30, i64* %.reg2mem, !insn.addr !671
  br i1 %32, label %dec_label_pc_41ce, label %dec_label_pc_41fe, !insn.addr !671

dec_label_pc_41fe:                                ; preds = %dec_label_pc_41ce, %dec_label_pc_41c5
  %33 = load i32, i32* @atomic_counter, align 4, !insn.addr !678
  call void @free(i64* %2), !insn.addr !679
  %34 = icmp slt i32 %33, 1, !insn.addr !680
  %. = select i1 %34, i32 -3, i32 42
  store i32 %., i32* %rax.0.reg2mem, !insn.addr !681
  br label %dec_label_pc_4225, !insn.addr !681

dec_label_pc_4225:                                ; preds = %dec_label_pc_41fe, %dec_label_pc_40e2, %dec_label_pc_4171
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %35 = call i64 @__readfsqword(i64 40), !insn.addr !682
  %36 = icmp eq i64 %0, %35, !insn.addr !682
  store i32 %rax.0.reload, i32* %rax.1.reg2mem, !insn.addr !683
  br i1 %36, label %dec_label_pc_4239, label %dec_label_pc_4234, !insn.addr !683

dec_label_pc_4234:                                ; preds = %dec_label_pc_4225
  call void @__stack_chk_fail(), !insn.addr !684
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.1.reg2mem, !insn.addr !684
  br label %dec_label_pc_4239, !insn.addr !684

dec_label_pc_4239:                                ; preds = %dec_label_pc_4234, %dec_label_pc_4225
  %rax.1.reload = load i32, i32* %rax.1.reg2mem
  ret i32 %rax.1.reload, !insn.addr !685

; uselistorder directives
  uselistorder i64* %2, { 1, 0, 3, 2 }
  uselistorder i64** %tids_-32, { 1, 0 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i64* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rax.0.reg2mem, { 0, 1, 3, 2 }
  uselistorder i32* @atomic_counter, { 2, 3, 4, 5, 0, 1 }
  uselistorder i32 %thread_count, { 3, 1, 2, 0 }
  uselistorder label %dec_label_pc_4225, { 0, 2, 1 }
  uselistorder label %dec_label_pc_41ce, { 1, 0 }
  uselistorder label %dec_label_pc_413d, { 1, 0 }
}

define i32 @call_atomic_ops() local_unnamed_addr {
dec_label_pc_423b:
  %0 = call i32 @param_atomic_ops(i32 4, i32 500), !insn.addr !686
  ret i32 %0, !insn.addr !687
}

define i8* @thread_tls_test(i8* %arg) local_unnamed_addr {
dec_label_pc_4254:
  %0 = call i32 @__readfsdword(i64 -36), !insn.addr !688
  %1 = call i32 @__readfsdword(i64 -36), !insn.addr !689
  %2 = add i32 %1, 50, !insn.addr !690
  call void @__writefsdword(i64 -36, i32 %2), !insn.addr !691
  %3 = call i64 @__readfsqword(i64 0), !insn.addr !692
  %4 = add i64 %3, -32, !insn.addr !693
  %5 = inttoptr i64 %4 to i8*, !insn.addr !694
  %6 = call i8* @strncpy(i8* %5, i8* %arg, i32 31), !insn.addr !694
  %7 = call i64* @malloc(i32 8), !insn.addr !695
  %8 = ptrtoint i64* %7 to i64, !insn.addr !695
  %9 = bitcast i64* %7 to i32*, !insn.addr !696
  store i32 %0, i32* %9, align 4, !insn.addr !696
  %10 = add i64 %8, 4, !insn.addr !697
  %11 = call i32 @__readfsdword(i64 -36), !insn.addr !698
  %12 = inttoptr i64 %10 to i32*, !insn.addr !699
  store i32 %11, i32* %12, align 4, !insn.addr !699
  %13 = bitcast i64* %7 to i8*, !insn.addr !700
  ret i8* %13, !insn.addr !700
}

define i32 @param_thread_local_storage(i32 %thread_count) local_unnamed_addr {
dec_label_pc_42dd:
  %rax.1.reg2mem = alloca i32, !insn.addr !701
  %rax.0.reg2mem = alloca i32, !insn.addr !701
  %expected_initial_-80.0.lcssa.reg2mem = alloca i32, !insn.addr !701
  %expected_final_-84.0.lcssa.reg2mem = alloca i32, !insn.addr !701
  %expected_final_-84.07.reg2mem = alloca i32, !insn.addr !701
  %expected_initial_-80.08.reg2mem = alloca i32, !insn.addr !701
  %indvars.iv.reg2mem = alloca i64, !insn.addr !701
  %indvars.iv15.reg2mem = alloca i64, !insn.addr !701
  %indvars.iv19.reg2mem = alloca i64, !insn.addr !701
  %indvars.iv21.reg2mem = alloca i64, !insn.addr !701
  %names_-64 = alloca i8**, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !702
  %1 = mul i32 %thread_count, 8, !insn.addr !703
  %2 = call i64* @malloc(i32 %1), !insn.addr !704
  %3 = call i64* @malloc(i32 %1), !insn.addr !705
  %4 = icmp ne i64* %2, null, !insn.addr !706
  %5 = icmp eq i64* %3, null, !insn.addr !707
  %6 = icmp eq i1 %5, false, !insn.addr !708
  %or.cond = icmp eq i1 %4, %6
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !709
  br i1 %or.cond, label %dec_label_pc_43a2.preheader, label %dec_label_pc_453f, !insn.addr !709

dec_label_pc_43a2.preheader:                      ; preds = %dec_label_pc_42dd
  %7 = icmp sgt i32 %thread_count, 0
  store i32 0, i32* %expected_final_-84.0.lcssa.reg2mem, !insn.addr !710
  store i32 0, i32* %expected_initial_-80.0.lcssa.reg2mem, !insn.addr !710
  br i1 %7, label %dec_label_pc_4347.preheader, label %dec_label_pc_44f6, !insn.addr !710

dec_label_pc_4347.preheader:                      ; preds = %dec_label_pc_43a2.preheader
  %8 = ptrtoint i64* %3 to i64, !insn.addr !705
  %wide.trip.count23 = zext i32 %thread_count to i64
  store i64 0, i64* %indvars.iv21.reg2mem
  br label %dec_label_pc_4347

dec_label_pc_4347:                                ; preds = %dec_label_pc_4347.preheader, %dec_label_pc_4347
  %indvars.iv21.reload = load i64, i64* %indvars.iv21.reg2mem
  %9 = mul i64 %indvars.iv21.reload, 8, !insn.addr !711
  %10 = add i64 %9, %8, !insn.addr !712
  %11 = call i64* @malloc(i32 16), !insn.addr !713
  %12 = ptrtoint i64* %11 to i64, !insn.addr !713
  %13 = inttoptr i64 %10 to i64*, !insn.addr !714
  store i64 %12, i64* %13, align 8, !insn.addr !714
  %14 = bitcast i64* %11 to i8*, !insn.addr !715
  %15 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %14, i32 16, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_5327, i64 0, i64 0), i64 %indvars.iv21.reload), !insn.addr !715
  %indvars.iv.next22 = add nuw nsw i64 %indvars.iv21.reload, 1
  %exitcond24 = icmp eq i64 %indvars.iv.next22, %wide.trip.count23
  store i64 %indvars.iv.next22, i64* %indvars.iv21.reg2mem, !insn.addr !710
  br i1 %exitcond24, label %dec_label_pc_43b6.lr.ph, label %dec_label_pc_4347, !insn.addr !710

dec_label_pc_43b6.lr.ph:                          ; preds = %dec_label_pc_4347
  %16 = ptrtoint i64* %2 to i64, !insn.addr !716
  %17 = sext i32 %thread_count to i64
  store i64 0, i64* %indvars.iv19.reg2mem
  br label %dec_label_pc_43b6

dec_label_pc_43b6:                                ; preds = %dec_label_pc_43b6.lr.ph, %dec_label_pc_4454
  %indvars.iv19.reload = load i64, i64* %indvars.iv19.reg2mem
  %18 = mul i64 %indvars.iv19.reload, 8, !insn.addr !717
  %19 = add i64 %18, %8, !insn.addr !718
  %20 = inttoptr i64 %19 to i64*, !insn.addr !719
  %21 = load i64, i64* %20, align 8, !insn.addr !719
  %22 = add i64 %18, %16, !insn.addr !720
  %23 = inttoptr i64 %22 to i32*, !insn.addr !721
  %24 = inttoptr i64 %21 to i64*, !insn.addr !721
  %25 = call i32 @pthread_create(i32* %23, i64* null, i64* (i64*)* inttoptr (i64 16980 to i64* (i64*)*), i64* %24), !insn.addr !721
  %26 = icmp eq i32 %25, 0, !insn.addr !722
  br i1 %26, label %dec_label_pc_4454, label %dec_label_pc_442a.preheader, !insn.addr !723

dec_label_pc_442a.preheader:                      ; preds = %dec_label_pc_43b6
  %27 = trunc i64 %indvars.iv19.reload to i32
  %28 = icmp slt i32 %27, 0, !insn.addr !724
  br i1 %28, label %dec_label_pc_4432, label %dec_label_pc_4407.lr.ph, !insn.addr !724

dec_label_pc_4407.lr.ph:                          ; preds = %dec_label_pc_442a.preheader
  %29 = add nuw i64 %indvars.iv19.reload, 1
  %wide.trip.count17 = and i64 %29, 4294967295
  store i64 0, i64* %indvars.iv15.reg2mem
  br label %dec_label_pc_4407

dec_label_pc_4407:                                ; preds = %dec_label_pc_4407.lr.ph, %dec_label_pc_4407
  %indvars.iv15.reload = load i64, i64* %indvars.iv15.reg2mem
  %30 = mul i64 %indvars.iv15.reload, 8, !insn.addr !725
  %31 = add i64 %30, %8, !insn.addr !726
  %32 = inttoptr i64 %31 to i64*, !insn.addr !727
  %33 = load i64, i64* %32, align 8, !insn.addr !727
  %34 = inttoptr i64 %33 to i64*, !insn.addr !728
  call void @free(i64* %34), !insn.addr !728
  %indvars.iv.next16 = add nuw nsw i64 %indvars.iv15.reload, 1
  %exitcond18 = icmp eq i64 %indvars.iv.next16, %wide.trip.count17
  store i64 %indvars.iv.next16, i64* %indvars.iv15.reg2mem, !insn.addr !724
  br i1 %exitcond18, label %dec_label_pc_4432, label %dec_label_pc_4407, !insn.addr !724

dec_label_pc_4432:                                ; preds = %dec_label_pc_4407, %dec_label_pc_442a.preheader
  call void @free(i64* %3), !insn.addr !729
  call void @free(i64* nonnull %2), !insn.addr !730
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !731
  br label %dec_label_pc_453f, !insn.addr !731

dec_label_pc_4454:                                ; preds = %dec_label_pc_43b6
  %indvars.iv.next20 = add nuw nsw i64 %indvars.iv19.reload, 1
  %35 = icmp slt i64 %indvars.iv.next20, %17, !insn.addr !732
  store i64 %indvars.iv.next20, i64* %indvars.iv19.reg2mem, !insn.addr !732
  br i1 %35, label %dec_label_pc_43b6, label %dec_label_pc_447b.lr.ph, !insn.addr !732

dec_label_pc_447b.lr.ph:                          ; preds = %dec_label_pc_4454
  %36 = bitcast i8*** %names_-64 to i64**, !insn.addr !733
  store i64 0, i64* %indvars.iv.reg2mem
  store i32 0, i32* %expected_initial_-80.08.reg2mem
  store i32 0, i32* %expected_final_-84.07.reg2mem
  br label %dec_label_pc_447b

dec_label_pc_447b:                                ; preds = %dec_label_pc_447b, %dec_label_pc_447b.lr.ph
  %expected_final_-84.07.reload = load i32, i32* %expected_final_-84.07.reg2mem
  %expected_initial_-80.08.reload = load i32, i32* %expected_initial_-80.08.reg2mem
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %37 = mul i64 %indvars.iv.reload, 8, !insn.addr !734
  %38 = add i64 %37, %16, !insn.addr !735
  %39 = inttoptr i64 %38 to i64*, !insn.addr !736
  %40 = load i64, i64* %39, align 8, !insn.addr !736
  %41 = trunc i64 %40 to i32, !insn.addr !733
  %42 = call i32 @pthread_join(i32 %41, i64** nonnull %36), !insn.addr !733
  %43 = load i8**, i8*** %names_-64, align 8, !insn.addr !737
  %44 = ptrtoint i8** %43 to i64, !insn.addr !737
  %45 = bitcast i8** %43 to i32*, !insn.addr !738
  %46 = load i32, i32* %45, align 4, !insn.addr !738
  %47 = add i32 %46, %expected_final_-84.07.reload, !insn.addr !739
  %48 = add i64 %44, 4, !insn.addr !740
  %49 = inttoptr i64 %48 to i32*, !insn.addr !741
  %50 = load i32, i32* %49, align 4, !insn.addr !741
  %51 = add i32 %50, %expected_initial_-80.08.reload, !insn.addr !742
  %52 = bitcast i8** %43 to i64*, !insn.addr !743
  call void @free(i64* %52), !insn.addr !743
  %53 = add i64 %37, %8, !insn.addr !744
  %54 = inttoptr i64 %53 to i64*, !insn.addr !745
  %55 = load i64, i64* %54, align 8, !insn.addr !745
  %56 = inttoptr i64 %55 to i64*, !insn.addr !746
  call void @free(i64* %56), !insn.addr !746
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count23
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !747
  store i32 %51, i32* %expected_initial_-80.08.reg2mem, !insn.addr !747
  store i32 %47, i32* %expected_final_-84.07.reg2mem, !insn.addr !747
  store i32 %47, i32* %expected_final_-84.0.lcssa.reg2mem, !insn.addr !747
  store i32 %51, i32* %expected_initial_-80.0.lcssa.reg2mem, !insn.addr !747
  br i1 %exitcond, label %dec_label_pc_44f6, label %dec_label_pc_447b, !insn.addr !747

dec_label_pc_44f6:                                ; preds = %dec_label_pc_447b, %dec_label_pc_43a2.preheader
  %expected_final_-84.0.lcssa.reload = load i32, i32* %expected_final_-84.0.lcssa.reg2mem
  call void @free(i64* %3), !insn.addr !748
  call void @free(i64* nonnull %2), !insn.addr !749
  %57 = mul i32 %thread_count, 100
  %58 = icmp eq i32 %expected_final_-84.0.lcssa.reload, %57, !insn.addr !750
  %59 = icmp eq i1 %58, false, !insn.addr !751
  br i1 %59, label %dec_label_pc_453a, label %dec_label_pc_452b, !insn.addr !751

dec_label_pc_452b:                                ; preds = %dec_label_pc_44f6
  %expected_initial_-80.0.lcssa.reload = load i32, i32* %expected_initial_-80.0.lcssa.reg2mem
  %60 = mul i32 %thread_count, 150, !insn.addr !752
  %61 = icmp eq i32 %expected_initial_-80.0.lcssa.reload, %60, !insn.addr !753
  %62 = icmp eq i1 %61, false, !insn.addr !754
  store i32 42, i32* %rax.0.reg2mem, !insn.addr !754
  br i1 %62, label %dec_label_pc_453a, label %dec_label_pc_453f, !insn.addr !754

dec_label_pc_453a:                                ; preds = %dec_label_pc_452b, %dec_label_pc_44f6
  store i32 -3, i32* %rax.0.reg2mem, !insn.addr !755
  br label %dec_label_pc_453f, !insn.addr !755

dec_label_pc_453f:                                ; preds = %dec_label_pc_452b, %dec_label_pc_42dd, %dec_label_pc_453a, %dec_label_pc_4432
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %63 = call i64 @__readfsqword(i64 40), !insn.addr !756
  %64 = icmp eq i64 %0, %63, !insn.addr !756
  store i32 %rax.0.reload, i32* %rax.1.reg2mem, !insn.addr !757
  br i1 %64, label %dec_label_pc_4553, label %dec_label_pc_454e, !insn.addr !757

dec_label_pc_454e:                                ; preds = %dec_label_pc_453f
  call void @__stack_chk_fail(), !insn.addr !758
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.1.reg2mem, !insn.addr !758
  br label %dec_label_pc_4553, !insn.addr !758

dec_label_pc_4553:                                ; preds = %dec_label_pc_454e, %dec_label_pc_453f
  %rax.1.reload = load i32, i32* %rax.1.reg2mem
  ret i32 %rax.1.reload, !insn.addr !759

; uselistorder directives
  uselistorder i64 %37, { 1, 0 }
  uselistorder i64 %18, { 1, 0 }
  uselistorder i64 %indvars.iv19.reload, { 0, 2, 1, 3 }
  uselistorder i64* %3, { 2, 1, 3, 0 }
  uselistorder i64* %2, { 2, 0, 1, 3 }
  uselistorder i32 %1, { 1, 0 }
  uselistorder i8*** %names_-64, { 1, 0 }
  uselistorder i64* %indvars.iv21.reg2mem, { 2, 0, 1 }
  uselistorder i64* %indvars.iv19.reg2mem, { 1, 0, 2 }
  uselistorder i64* %indvars.iv15.reg2mem, { 1, 0, 2 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %expected_initial_-80.08.reg2mem, { 1, 0, 2 }
  uselistorder i32* %expected_final_-84.07.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rax.0.reg2mem, { 0, 3, 1, 4, 2 }
  uselistorder void ()* @__stack_chk_fail, { 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 16 }
  uselistorder i32 -3, { 0, 6, 7, 1, 2, 3, 8, 4, 5 }
  uselistorder i32 42, { 0, 3, 14, 4, 1, 8, 12, 5, 6, 9, 7, 10, 2, 11, 13 }
  uselistorder i64 4, { 3, 4, 5, 0, 1, 2 }
  uselistorder i32 (i32, i64**)* @pthread_join, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder i32 -2, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 10 }
  uselistorder void (i64*)* @free, { 11, 10, 13, 12, 8, 7, 9, 6, 5, 4, 3, 2, 1, 0, 14 }
  uselistorder i32 (i32*, i64*, i64* (i64*)*, i64*)* @pthread_create, { 7, 5, 6, 4, 3, 2, 1, 0, 8 }
  uselistorder i64 1, { 4, 2, 3, 0, 1, 10, 5, 11, 6, 8, 7, 12, 13, 14, 9, 15, 16 }
  uselistorder i32 -1, { 0, 1, 2, 3, 4, 5, 22, 23, 6, 18, 7, 8, 9, 10, 19, 11, 16, 20, 17, 12, 13, 21, 14, 15 }
  uselistorder i1 false, { 8, 9, 2, 10, 11, 12, 13, 14, 5, 15, 1, 16, 17, 6, 18, 0, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 3, 46, 4, 7 }
  uselistorder i64* null, { 2, 0, 1, 5, 6, 4, 3, 7, 8, 9, 10, 12, 11, 13, 14, 15, 16 }
  uselistorder i64* (i32)* @malloc, { 8, 7, 6, 5, 4, 3, 2, 1, 0, 9 }
  uselistorder i32 8, { 0, 3, 1, 2 }
  uselistorder i64 40, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 0, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 }
  uselistorder i32 %thread_count, { 4, 5, 2, 1, 3, 0 }
  uselistorder label %dec_label_pc_453f, { 2, 0, 3, 1 }
  uselistorder label %dec_label_pc_4407, { 1, 0 }
  uselistorder label %dec_label_pc_43b6, { 1, 0 }
  uselistorder label %dec_label_pc_4347, { 1, 0 }
}

define i32 @call_thread_local_storage() local_unnamed_addr {
dec_label_pc_4559:
  %0 = call i32 @param_thread_local_storage(i32 4), !insn.addr !760
  ret i32 %0, !insn.addr !761

; uselistorder directives
  uselistorder i32 4, { 1, 2, 3, 4, 5, 6, 0 }
}

define void @test_thread_concurrency() local_unnamed_addr {
dec_label_pc_456d:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_5331 to i8*)), !insn.addr !762
  %1 = call i32 @call_pthread_create(), !insn.addr !763
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_534f to i8*)), !insn.addr !764
  %3 = call i32 @call_pthread_join(), !insn.addr !765
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_536b to i8*)), !insn.addr !766
  %5 = call i32 @call_mutex_lock(), !insn.addr !767
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5388 to i8*)), !insn.addr !768
  %7 = call i32 @call_condition_variable(), !insn.addr !769
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_53a4 to i8*)), !insn.addr !770
  %9 = call i32 @call_atomic_ops(), !insn.addr !771
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_53c0 to i8*)), !insn.addr !772
  %11 = call i32 @call_thread_local_storage(), !insn.addr !773
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_53dc to i8*)), !insn.addr !774
  ret void, !insn.addr !775

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 26 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
  uselistorder i64 0, { 0, 1, 2, 79, 80, 3, 81, 4, 5, 6, 7, 8, 82, 9, 83, 84, 123, 85, 86, 87, 88, 89, 90, 10, 11, 19, 12, 20, 91, 92, 14, 15, 93, 94, 95, 96, 16, 17, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 124, 18, 13, 125, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_4647:
  call void @test_standard_library_functions(), !insn.addr !776
  call void @test_system_calls(), !insn.addr !777
  call void @test_thread_concurrency(), !insn.addr !778
  ret i32 0, !insn.addr !779

; uselistorder directives
  uselistorder i32 0, { 9, 2, 3, 10, 41, 0, 1, 11, 43, 42, 12, 23, 4, 13, 44, 45, 46, 47, 48, 16, 49, 14, 50, 5, 15, 51, 52, 6, 53, 54, 55, 56, 57, 58, 20, 19, 18, 59, 60, 61, 62, 63, 22, 21, 17, 64, 24, 25, 65, 66, 67, 68, 69, 26, 70, 71, 27, 28, 72, 73, 74, 75, 76, 77, 29, 78, 79, 80, 81, 82, 83, 8, 7, 30, 84, 85, 86, 87, 31, 88, 89, 32, 33, 34, 35, 36, 37, 38, 39, 40 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_4674:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !780

; uselistorder directives
  uselistorder i32 1, { 5, 84, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 71, 86, 85, 21, 20, 19, 18, 122, 123, 24, 23, 22, 4, 89, 88, 87, 26, 25, 124, 72, 90, 29, 28, 27, 125, 126, 30, 3, 93, 95, 94, 92, 91, 34, 33, 32, 31, 127, 80, 36, 35, 98, 97, 96, 38, 37, 2, 73, 43, 42, 41, 40, 39, 128, 74, 44, 75, 76, 100, 99, 46, 45, 103, 102, 101, 77, 48, 47, 7, 81, 50, 49, 104, 51, 1, 52, 105, 82, 54, 53, 6, 57, 56, 55, 59, 58, 78, 79, 108, 107, 106, 61, 60, 62, 110, 109, 64, 63, 113, 115, 117, 118, 116, 114, 112, 111, 65, 69, 119, 83, 66, 70, 120, 67, 0, 121, 68 }
}

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

declare i16 @htons(i16) local_unnamed_addr

declare i8* @strchr(i8*, i32) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare void @rewind(%_IO_FILE*) local_unnamed_addr

declare i32 @snprintf(i8*, i32, i8*, ...) local_unnamed_addr

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

declare i64 @__readfsqword(i64) local_unnamed_addr

declare i32 @__readfsdword(i64) local_unnamed_addr

declare void @__writefsdword(i64, i32) local_unnamed_addr

!0 = !{i64 8192}
!1 = !{i64 8200}
!2 = !{i64 8207}
!3 = !{i64 8210}
!4 = !{i64 8212}
!5 = !{i64 8218}
!6 = !{i64 9172}
!7 = !{i64 9188}
!8 = !{i64 9204}
!9 = !{i64 9220}
!10 = !{i64 9236}
!11 = !{i64 9252}
!12 = !{i64 9268}
!13 = !{i64 9284}
!14 = !{i64 9300}
!15 = !{i64 9316}
!16 = !{i64 9332}
!17 = !{i64 9348}
!18 = !{i64 9364}
!19 = !{i64 9380}
!20 = !{i64 9396}
!21 = !{i64 9412}
!22 = !{i64 9428}
!23 = !{i64 9444}
!24 = !{i64 9460}
!25 = !{i64 9476}
!26 = !{i64 9492}
!27 = !{i64 9508}
!28 = !{i64 9524}
!29 = !{i64 9540}
!30 = !{i64 9556}
!31 = !{i64 9572}
!32 = !{i64 9588}
!33 = !{i64 9604}
!34 = !{i64 9620}
!35 = !{i64 9636}
!36 = !{i64 9652}
!37 = !{i64 9668}
!38 = !{i64 9684}
!39 = !{i64 9700}
!40 = !{i64 9716}
!41 = !{i64 9732}
!42 = !{i64 9748}
!43 = !{i64 9764}
!44 = !{i64 9780}
!45 = !{i64 9796}
!46 = !{i64 9812}
!47 = !{i64 9828}
!48 = !{i64 9844}
!49 = !{i64 9860}
!50 = !{i64 9876}
!51 = !{i64 9892}
!52 = !{i64 9908}
!53 = !{i64 9924}
!54 = !{i64 9940}
!55 = !{i64 9956}
!56 = !{i64 9972}
!57 = !{i64 9988}
!58 = !{i64 10004}
!59 = !{i64 10020}
!60 = !{i64 10036}
!61 = !{i64 10052}
!62 = !{i64 10068}
!63 = !{i64 10084}
!64 = !{i64 10100}
!65 = !{i64 10143}
!66 = !{i64 10149}
!67 = !{i64 10200}
!68 = !{i64 10264}
!69 = !{i64 10276}
!70 = !{i64 10283}
!71 = !{i64 10286}
!72 = !{i64 10297}
!73 = !{i64 10299}
!74 = !{i64 10306}
!75 = !{i64 10311}
!76 = !{i64 10316}
!77 = !{i64 10324}
!78 = !{i64 10328}
!79 = !{i64 10340}
!80 = !{i64 10379}
!81 = !{i64 10391}
!82 = !{i64 10397}
!83 = !{i64 10398}
!84 = !{i64 10410}
!85 = !{i64 10442}
!86 = !{i64 10457}
!87 = !{i64 10466}
!88 = !{i64 10468}
!89 = !{i64 10474}
!90 = !{i64 10509}
!91 = !{i64 10517}
!92 = !{i64 10521}
!93 = !{i64 10549}
!94 = !{i64 10582}
!95 = !{i64 10610}
!96 = !{i64 10638}
!97 = !{i64 10652}
!98 = !{i64 10657}
!99 = !{i64 10660}
!100 = !{i64 10684}
!101 = !{i64 10698}
!102 = !{i64 10729}
!103 = !{i64 10735}
!104 = !{i64 10778}
!105 = !{i64 10788}
!106 = !{i64 10789}
!107 = !{i64 10801}
!108 = !{i64 10816}
!109 = !{i64 10851}
!110 = !{i64 10893}
!111 = !{i64 10898}
!112 = !{i64 10915}
!113 = !{i64 10924}
!114 = !{i64 10926}
!115 = !{i64 10932}
!116 = !{i64 10975}
!117 = !{i64 10983}
!118 = !{i64 10987}
!119 = !{i64 11015}
!120 = !{i64 11016}
!121 = !{i64 11028}
!122 = !{i64 11043}
!123 = !{i64 11064}
!124 = !{i64 11085}
!125 = !{i64 11125}
!126 = !{i64 11130}
!127 = !{i64 11152}
!128 = !{i64 11157}
!129 = !{i64 11160}
!130 = !{i64 11163}
!131 = !{i64 11166}
!132 = !{i64 11172}
!133 = !{i64 11181}
!134 = !{i64 11183}
!135 = !{i64 11189}
!136 = !{i64 11216}
!137 = !{i64 11233}
!138 = !{i64 11245}
!139 = !{i64 11273}
!140 = !{i64 11285}
!141 = !{i64 11286}
!142 = !{i64 11302}
!143 = !{i64 11344}
!144 = !{i64 11352}
!145 = !{i64 11356}
!146 = !{i64 11358}
!147 = !{i64 11361}
!148 = !{i64 11364}
!149 = !{i64 11366}
!150 = !{i64 11377}
!151 = !{i64 11386}
!152 = !{i64 11388}
!153 = !{i64 11394}
!154 = !{i64 11413}
!155 = !{i64 11419}
!156 = !{i64 11420}
!157 = !{i64 11453}
!158 = !{i64 11462}
!159 = !{i64 11467}
!160 = !{i64 11483}
!161 = !{i64 11498}
!162 = !{i64 11503}
!163 = !{i64 11507}
!164 = !{i64 11530}
!165 = !{i64 11538}
!166 = !{i64 11557}
!167 = !{i64 11558}
!168 = !{i64 11574}
!169 = !{i64 11617}
!170 = !{i64 11626}
!171 = !{i64 11631}
!172 = !{i64 11650}
!173 = !{i64 11680}
!174 = !{i64 11685}
!175 = !{i64 11696}
!176 = !{i64 11701}
!177 = !{i64 11705}
!178 = !{i64 11714}
!179 = !{i64 11724}
!180 = !{i64 11733}
!181 = !{i64 11758}
!182 = !{i64 11763}
!183 = !{i64 11767}
!184 = !{i64 11771}
!185 = !{i64 11775}
!186 = !{i64 11778}
!187 = !{i64 11788}
!188 = !{i64 11800}
!189 = !{i64 11805}
!190 = !{i64 11809}
!191 = !{i64 11813}
!192 = !{i64 11829}
!193 = !{i64 11834}
!194 = !{i64 11836}
!195 = !{i64 11845}
!196 = !{i64 11854}
!197 = !{i64 11863}
!198 = !{i64 11865}
!199 = !{i64 11871}
!200 = !{i64 11890}
!201 = !{i64 11896}
!202 = !{i64 11897}
!203 = !{i64 11924}
!204 = !{i64 11933}
!205 = !{i64 11938}
!206 = !{i64 12004}
!207 = !{i64 12008}
!208 = !{i64 11970}
!209 = !{i64 11978}
!210 = !{i64 11990}
!211 = !{i64 11993}
!212 = !{i64 11995}
!213 = !{i64 12014}
!214 = !{i64 12020}
!215 = !{i64 12024}
!216 = !{i64 12032}
!217 = !{i64 12035}
!218 = !{i64 12037}
!219 = !{i64 12049}
!220 = !{i64 12062}
!221 = !{i64 12066}
!222 = !{i64 12080}
!223 = !{i64 12086}
!224 = !{i64 12087}
!225 = !{i64 12123}
!226 = !{i64 12182}
!227 = !{i64 12186}
!228 = !{i64 12153}
!229 = !{i64 12161}
!230 = !{i64 12164}
!231 = !{i64 12170}
!232 = !{i64 12173}
!233 = !{i64 12192}
!234 = !{i64 12193}
!235 = !{i64 12198}
!236 = !{i64 12205}
!237 = !{i64 12234}
!238 = !{i64 12250}
!239 = !{i64 12264}
!240 = !{i64 12269}
!241 = !{i64 12275}
!242 = !{i64 12281}
!243 = !{i64 12290}
!244 = !{i64 12292}
!245 = !{i64 12298}
!246 = !{i64 12311}
!247 = !{i64 12332}
!248 = !{i64 12337}
!249 = !{i64 12346}
!250 = !{i64 12375}
!251 = !{i64 12385}
!252 = !{i64 12394}
!253 = !{i64 12419}
!254 = !{i64 12425}
!255 = !{i64 12428}
!256 = !{i64 12471}
!257 = !{i64 12483}
!258 = !{i64 12502}
!259 = !{i64 12512}
!260 = !{i64 12534}
!261 = !{i64 12544}
!262 = !{i64 12566}
!263 = !{i64 12576}
!264 = !{i64 12598}
!265 = !{i64 12608}
!266 = !{i64 12630}
!267 = !{i64 12640}
!268 = !{i64 12662}
!269 = !{i64 12672}
!270 = !{i64 12694}
!271 = !{i64 12704}
!272 = !{i64 12726}
!273 = !{i64 12736}
!274 = !{i64 12758}
!275 = !{i64 12768}
!276 = !{i64 12790}
!277 = !{i64 12800}
!278 = !{i64 12822}
!279 = !{i64 12832}
!280 = !{i64 12854}
!281 = !{i64 12864}
!282 = !{i64 12886}
!283 = !{i64 12893}
!284 = !{i64 12894}
!285 = !{i64 12932}
!286 = !{i64 12940}
!287 = !{i64 12944}
!288 = !{i64 12946}
!289 = !{i64 12951}
!290 = !{i64 12953}
!291 = !{i64 12955}
!292 = !{i64 12972}
!293 = !{i64 12977}
!294 = !{i64 12981}
!295 = !{i64 13004}
!296 = !{i64 13012}
!297 = !{i64 13031}
!298 = !{i64 13032}
!299 = !{i64 13054}
!300 = !{i64 13089}
!301 = !{i64 13094}
!302 = !{i64 13096}
!303 = !{i64 13130}
!304 = !{i64 13139}
!305 = !{i64 13141}
!306 = !{i64 13147}
!307 = !{i64 13166}
!308 = !{i64 13172}
!309 = !{i64 13173}
!310 = !{i64 13193}
!311 = !{i64 13208}
!312 = !{i64 13216}
!313 = !{i64 13220}
!314 = !{i64 13229}
!315 = !{i64 13233}
!316 = !{i64 13260}
!317 = !{i64 13270}
!318 = !{i64 13292}
!319 = !{i64 13300}
!320 = !{i64 13304}
!321 = !{i64 13313}
!322 = !{i64 13316}
!323 = !{i64 13319}
!324 = !{i64 13321}
!325 = !{i64 13332}
!326 = !{i64 13343}
!327 = !{i64 13352}
!328 = !{i64 13354}
!329 = !{i64 13360}
!330 = !{i64 13388}
!331 = !{i64 13396}
!332 = !{i64 13400}
!333 = !{i64 13415}
!334 = !{i64 13416}
!335 = !{i64 13428}
!336 = !{i64 13447}
!337 = !{i64 13450}
!338 = !{i64 13455}
!339 = !{i64 13457}
!340 = !{i64 13469}
!341 = !{i64 13477}
!342 = !{i64 13481}
!343 = !{i64 13493}
!344 = !{i64 13497}
!345 = !{i64 13499}
!346 = !{i64 13504}
!347 = !{i64 13516}
!348 = !{i64 13520}
!349 = !{i64 13527}
!350 = !{i64 13547}
!351 = !{i64 13557}
!352 = !{i64 13567}
!353 = !{i64 13577}
!354 = !{i64 13582}
!355 = !{i64 13599}
!356 = !{i64 13604}
!357 = !{i64 13608}
!358 = !{i64 13612}
!359 = !{i64 13616}
!360 = !{i64 13619}
!361 = !{i64 13622}
!362 = !{i64 13627}
!363 = !{i64 13637}
!364 = !{i64 13642}
!365 = !{i64 13647}
!366 = !{i64 13656}
!367 = !{i64 13665}
!368 = !{i64 13674}
!369 = !{i64 13676}
!370 = !{i64 13682}
!371 = !{i64 13691}
!372 = !{i64 13697}
!373 = !{i64 13698}
!374 = !{i64 13710}
!375 = !{i64 13740}
!376 = !{i64 13748}
!377 = !{i64 13752}
!378 = !{i64 13764}
!379 = !{i64 13799}
!380 = !{i64 13804}
!381 = !{i64 13806}
!382 = !{i64 13813}
!383 = !{i64 13823}
!384 = !{i64 13845}
!385 = !{i64 13850}
!386 = !{i64 13861}
!387 = !{i64 13894}
!388 = !{i64 13899}
!389 = !{i64 13901}
!390 = !{i64 13908}
!391 = !{i64 13918}
!392 = !{i64 13930}
!393 = !{i64 13935}
!394 = !{i64 13937}
!395 = !{i64 13966}
!396 = !{i64 13975}
!397 = !{i64 13984}
!398 = !{i64 13986}
!399 = !{i64 13992}
!400 = !{i64 14001}
!401 = !{i64 14007}
!402 = !{i64 14008}
!403 = !{i64 14053}
!404 = !{i64 14061}
!405 = !{i64 14065}
!406 = !{i64 14082}
!407 = !{i64 14102}
!408 = !{i64 14110}
!409 = !{i64 14114}
!410 = !{i64 14141}
!411 = !{i64 14149}
!412 = !{i64 14153}
!413 = !{i64 14177}
!414 = !{i64 14186}
!415 = !{i64 14191}
!416 = !{i64 14200}
!417 = !{i64 14214}
!418 = !{i64 14217}
!419 = !{i64 14224}
!420 = !{i64 14235}
!421 = !{i64 14250}
!422 = !{i64 14270}
!423 = !{i64 14275}
!424 = !{i64 14279}
!425 = !{i64 14292}
!426 = !{i64 14304}
!427 = !{i64 14319}
!428 = !{i64 14331}
!429 = !{i64 14344}
!430 = !{i64 14352}
!431 = !{i64 14353}
!432 = !{i64 14380}
!433 = !{i64 14385}
!434 = !{i64 14389}
!435 = !{i64 14416}
!436 = !{i64 14421}
!437 = !{i64 14425}
!438 = !{i64 14437}
!439 = !{i64 14452}
!440 = !{i64 14476}
!441 = !{i64 14482}
!442 = !{i64 14484}
!443 = !{i64 14471}
!444 = !{i64 14489}
!445 = !{i64 14495}
!446 = !{i64 14497}
!447 = !{i64 14499}
!448 = !{i64 14505}
!449 = !{i64 14507}
!450 = !{i64 14519}
!451 = !{i64 14525}
!452 = !{i64 14528}
!453 = !{i64 14537}
!454 = !{i64 14552}
!455 = !{i64 14576}
!456 = !{i64 14582}
!457 = !{i64 14584}
!458 = !{i64 14571}
!459 = !{i64 14589}
!460 = !{i64 14595}
!461 = !{i64 14597}
!462 = !{i64 14599}
!463 = !{i64 14605}
!464 = !{i64 14609}
!465 = !{i64 14615}
!466 = !{i64 14607}
!467 = !{i64 14637}
!468 = !{i64 14652}
!469 = !{i64 14657}
!470 = !{i64 14663}
!471 = !{i64 14672}
!472 = !{i64 14678}
!473 = !{i64 14697}
!474 = !{i64 14707}
!475 = !{i64 14729}
!476 = !{i64 14739}
!477 = !{i64 14761}
!478 = !{i64 14771}
!479 = !{i64 14793}
!480 = !{i64 14803}
!481 = !{i64 14825}
!482 = !{i64 14835}
!483 = !{i64 14857}
!484 = !{i64 14867}
!485 = !{i64 14889}
!486 = !{i64 14899}
!487 = !{i64 14921}
!488 = !{i64 14928}
!489 = !{i64 14965}
!490 = !{i64 14976}
!491 = !{i64 14992}
!492 = !{i64 14999}
!493 = !{i64 15000}
!494 = !{i64 15015}
!495 = !{i64 15033}
!496 = !{i64 15062}
!497 = !{i64 15070}
!498 = !{i64 15074}
!499 = !{i64 15083}
!500 = !{i64 15097}
!501 = !{i64 15106}
!502 = !{i64 15118}
!503 = !{i64 15123}
!504 = !{i64 15130}
!505 = !{i64 15139}
!506 = !{i64 15141}
!507 = !{i64 15147}
!508 = !{i64 15161}
!509 = !{i64 15167}
!510 = !{i64 15168}
!511 = !{i64 15180}
!512 = !{i64 15192}
!513 = !{i64 15203}
!514 = !{i64 15237}
!515 = !{i64 15243}
!516 = !{i64 15214}
!517 = !{i64 15220}
!518 = !{i64 15226}
!519 = !{i64 15229}
!520 = !{i64 15251}
!521 = !{i64 15252}
!522 = !{i64 15257}
!523 = !{i64 15264}
!524 = !{i64 15279}
!525 = !{i64 15351}
!526 = !{i64 15378}
!527 = !{i64 15370}
!528 = !{i64 15374}
!529 = !{i64 15387}
!530 = !{i64 15391}
!531 = !{i64 15412}
!532 = !{i64 15417}
!533 = !{i64 15419}
!534 = !{i64 15436}
!535 = !{i64 15438}
!536 = !{i64 15459}
!537 = !{i64 15472}
!538 = !{i64 15477}
!539 = !{i64 15479}
!540 = !{i64 15503}
!541 = !{i64 15510}
!542 = !{i64 15514}
!543 = !{i64 15516}
!544 = !{i64 15527}
!545 = !{i64 15529}
!546 = !{i64 15536}
!547 = !{i64 15545}
!548 = !{i64 15547}
!549 = !{i64 15553}
!550 = !{i64 15567}
!551 = !{i64 15573}
!552 = !{i64 15574}
!553 = !{i64 15673}
!554 = !{i64 15618}
!555 = !{i64 15623}
!556 = !{i64 15629}
!557 = !{i64 15632}
!558 = !{i64 15648}
!559 = !{i64 15658}
!560 = !{i64 15663}
!561 = !{i64 15681}
!562 = !{i64 15682}
!563 = !{i64 15697}
!564 = !{i64 15705}
!565 = !{i64 15712}
!566 = !{i64 15721}
!567 = !{i64 15726}
!568 = !{i64 15738}
!569 = !{i64 15838}
!570 = !{i64 15800}
!571 = !{i64 15762}
!572 = !{i64 15774}
!573 = !{i64 15805}
!574 = !{i64 15807}
!575 = !{i64 15816}
!576 = !{i64 15826}
!577 = !{i64 15854}
!578 = !{i64 15866}
!579 = !{i64 15869}
!580 = !{i64 15880}
!581 = !{i64 15885}
!582 = !{i64 15889}
!583 = !{i64 15895}
!584 = !{i64 15904}
!585 = !{i64 15909}
!586 = !{i64 15915}
!587 = !{i64 15921}
!588 = !{i64 15927}
!589 = !{i64 15930}
!590 = !{i64 15939}
!591 = !{i64 15945}
!592 = !{i64 15964}
!593 = !{i64 15970}
!594 = !{i64 15997}
!595 = !{i64 16029}
!596 = !{i64 16035}
!597 = !{i64 16037}
!598 = !{i64 16024}
!599 = !{i64 16039}
!600 = !{i64 16058}
!601 = !{i64 16068}
!602 = !{i64 16084}
!603 = !{i64 16091}
!604 = !{i64 16113}
!605 = !{i64 16128}
!606 = !{i64 16133}
!607 = !{i64 16143}
!608 = !{i64 16163}
!609 = !{i64 16178}
!610 = !{i64 16189}
!611 = !{i64 16190}
!612 = !{i64 16202}
!613 = !{i64 16217}
!614 = !{i64 16227}
!615 = !{i64 16261}
!616 = !{i64 16266}
!617 = !{i64 16268}
!618 = !{i64 16301}
!619 = !{i64 16306}
!620 = !{i64 16308}
!621 = !{i64 16317}
!622 = !{i64 16327}
!623 = !{i64 16343}
!624 = !{i64 16348}
!625 = !{i64 16360}
!626 = !{i64 16369}
!627 = !{i64 16381}
!628 = !{i64 16386}
!629 = !{i64 16393}
!630 = !{i64 16402}
!631 = !{i64 16404}
!632 = !{i64 16410}
!633 = !{i64 16424}
!634 = !{i64 16430}
!635 = !{i64 16431}
!636 = !{i64 16447}
!637 = !{i64 16541}
!638 = !{i64 16480}
!639 = !{i64 16497}
!640 = !{i64 16514}
!641 = !{i64 16531}
!642 = !{i64 16552}
!643 = !{i64 16561}
!644 = !{i64 16563}
!645 = !{i64 16569}
!646 = !{i64 16582}
!647 = !{i64 16594}
!648 = !{i64 16597}
!649 = !{i64 16609}
!650 = !{i64 16610}
!651 = !{i64 16625}
!652 = !{i64 16628}
!653 = !{i64 16648}
!654 = !{i64 16655}
!655 = !{i64 16664}
!656 = !{i64 16669}
!657 = !{i64 16686}
!658 = !{i64 16785}
!659 = !{i64 16744}
!660 = !{i64 16706}
!661 = !{i64 16718}
!662 = !{i64 16749}
!663 = !{i64 16751}
!664 = !{i64 16760}
!665 = !{i64 16770}
!666 = !{i64 16811}
!667 = !{i64 16816}
!668 = !{i64 16818}
!669 = !{i64 16820}
!670 = !{i64 16832}
!671 = !{i64 16892}
!672 = !{i64 16851}
!673 = !{i64 16863}
!674 = !{i64 16866}
!675 = !{i64 16877}
!676 = !{i64 16882}
!677 = !{i64 16886}
!678 = !{i64 16894}
!679 = !{i64 16910}
!680 = !{i64 16919}
!681 = !{i64 16928}
!682 = !{i64 16937}
!683 = !{i64 16946}
!684 = !{i64 16948}
!685 = !{i64 16954}
!686 = !{i64 16973}
!687 = !{i64 16979}
!688 = !{i64 17004}
!689 = !{i64 17015}
!690 = !{i64 17023}
!691 = !{i64 17026}
!692 = !{i64 17038}
!693 = !{i64 17047}
!694 = !{i64 17065}
!695 = !{i64 17075}
!696 = !{i64 17091}
!697 = !{i64 17097}
!698 = !{i64 17101}
!699 = !{i64 17109}
!700 = !{i64 17116}
!701 = !{i64 17117}
!702 = !{i64 17133}
!703 = !{i64 17153}
!704 = !{i64 17160}
!705 = !{i64 17181}
!706 = !{i64 17190}
!707 = !{i64 17197}
!708 = !{i64 17202}
!709 = !{i64 17195}
!710 = !{i64 17320}
!711 = !{i64 17228}
!712 = !{i64 17240}
!713 = !{i64 17249}
!714 = !{i64 17254}
!715 = !{i64 17305}
!716 = !{i64 17371}
!717 = !{i64 17339}
!718 = !{i64 17351}
!719 = !{i64 17354}
!720 = !{i64 17375}
!721 = !{i64 17397}
!722 = !{i64 17402}
!723 = !{i64 17404}
!724 = !{i64 17456}
!725 = !{i64 17420}
!726 = !{i64 17432}
!727 = !{i64 17435}
!728 = !{i64 17441}
!729 = !{i64 17465}
!730 = !{i64 17477}
!731 = !{i64 17487}
!732 = !{i64 17502}
!733 = !{i64 17564}
!734 = !{i64 17536}
!735 = !{i64 17548}
!736 = !{i64 17551}
!737 = !{i64 17569}
!738 = !{i64 17581}
!739 = !{i64 17583}
!740 = !{i64 17590}
!741 = !{i64 17594}
!742 = !{i64 17596}
!743 = !{i64 17606}
!744 = !{i64 17628}
!745 = !{i64 17631}
!746 = !{i64 17637}
!747 = !{i64 17652}
!748 = !{i64 17661}
!749 = !{i64 17673}
!750 = !{i64 17702}
!751 = !{i64 17705}
!752 = !{i64 17690}
!753 = !{i64 17710}
!754 = !{i64 17713}
!755 = !{i64 17722}
!756 = !{i64 17731}
!757 = !{i64 17740}
!758 = !{i64 17742}
!759 = !{i64 17752}
!760 = !{i64 17766}
!761 = !{i64 17772}
!762 = !{i64 17791}
!763 = !{i64 17801}
!764 = !{i64 17823}
!765 = !{i64 17833}
!766 = !{i64 17855}
!767 = !{i64 17865}
!768 = !{i64 17887}
!769 = !{i64 17897}
!770 = !{i64 17919}
!771 = !{i64 17929}
!772 = !{i64 17951}
!773 = !{i64 17961}
!774 = !{i64 17983}
!775 = !{i64 17990}
!776 = !{i64 18004}
!777 = !{i64 18014}
!778 = !{i64 18024}
!779 = !{i64 18035}
!780 = !{i64 18048}
