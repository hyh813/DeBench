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
@global_var_5068 = constant [19 x i8] c"BinBench Test Data\00"
@global_var_507b = constant [3 x i8] c"w+\00"
@global_var_507e = constant [23 x i8] c"/tmp/binbench_test.tmp\00"
@global_var_5095 = constant [20 x i8] c"Hello BinBench Test\00"
@global_var_50a9 = constant [6 x i8] c"Bench\00"
@global_var_5222 = constant [10 x i8] c"/bin/true\00"
@global_var_522c = constant [10 x i8] c"HelloPipe\00"
@global_var_5236 = constant [18 x i8] c"/tmp/binbench_shm\00"
@global_var_7d0 = global i64 77309411713
@global_var_8060 = global i64 0
@global_var_80a0 = global i64 0
@global_var_80e0 = global i64 0
@global_var_8119 = external global i64
@global_var_5327 = constant [10 x i8] c"Thread-%d\00"
@0 = external global i32
@global_var_8020 = local_unnamed_addr global i8 0
@1 = internal constant [2 x i8] c"r\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i64 0, i64 0)
@3 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\87\E5\87\86\E5\BA\93\E5\87\BD\E6\95\B0\E8\B0\83\E7\94\A8 ===\00"
@global_var_50b0 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @3, i64 0, i64 0)
@4 = internal constant [27 x i8] c"LIB-L1-01: %d (\E6\9C\9F\E6\9C\9B: 8)\0A\00"
@global_var_50d4 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @4, i64 0, i64 0)
@5 = internal constant [27 x i8] c"LIB-L1-02: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_50ef = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @5, i64 0, i64 0)
@6 = internal constant [28 x i8] c"LIB-L1-03: %d (\E6\9C\9F\E6\9C\9B: 12)\0A\00"
@global_var_510a = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @6, i64 0, i64 0)
@7 = internal constant [28 x i8] c"LIB-L1-04: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_5126 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @7, i64 0, i64 0)
@8 = internal constant [28 x i8] c"LIB-L1-05: %d (\E6\9C\9F\E6\9C\9B: -1)\0A\00"
@global_var_5142 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i64 0, i64 0)
@9 = internal constant [28 x i8] c"LIB-L1-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_515e = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i64 0, i64 0)
@10 = internal constant [29 x i8] c"LIB-L1-07: %d (\E6\9C\9F\E6\9C\9B: 579)\0A\00"
@global_var_517a = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"LIB-L1-08: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_5197 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [28 x i8] c"LIB-L1-09: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_51b3 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @12, i64 0, i64 0)
@13 = internal constant [28 x i8] c"LIB-L1-10: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_51cf = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @13, i64 0, i64 0)
@14 = internal constant [27 x i8] c"LIB-L1-11: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_51eb = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @14, i64 0, i64 0)
@15 = internal constant [28 x i8] c"LIB-L1-12: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_5206 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @15, i64 0, i64 0)
@global_var_3b6 = global i32 -594281187
@global_var_1000 = global i32 7
@global_var_8040 = local_unnamed_addr global i32 0
@global_var_8044 = local_unnamed_addr global i32 0
@global_var_3e8 = global i32 2
@16 = internal constant [27 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\B3\BB\E7\BB\9F\E8\B0\83\E7\94\A8 ===\00"
@global_var_5248 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @16, i64 0, i64 0)
@17 = internal constant [28 x i8] c"SYS-L3-01: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_5263 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i64 0, i64 0)
@18 = internal constant [28 x i8] c"SYS-L3-02: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_527f = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @18, i64 0, i64 0)
@19 = internal constant [28 x i8] c"SYS-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_529b = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @19, i64 0, i64 0)
@20 = internal constant [28 x i8] c"SYS-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_52b7 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @20, i64 0, i64 0)
@21 = internal constant [28 x i8] c"SYS-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_52d3 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @21, i64 0, i64 0)
@22 = internal constant [28 x i8] c"SYS-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_52ef = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @22, i64 0, i64 0)
@23 = internal constant [28 x i8] c"SYS-L3-07: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_530b = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @23, i64 0, i64 0)
@global_var_8048 = local_unnamed_addr global i32 0
@global_var_8049 = global i32 0
@global_var_8110 = local_unnamed_addr global i32 0
@global_var_8114 = local_unnamed_addr global i32 0
@global_var_8118 = local_unnamed_addr global i32 0
@24 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\BA\BF\E7\A8\8B\E4\B8\8E\E5\B9\B6\E5\8F\91 ===\00"
@global_var_5331 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @24, i64 0, i64 0)
@25 = internal constant [28 x i8] c"THR-L3-01: %d (\E6\9C\9F\E6\9C\9B: 49)\0A\00"
@global_var_534f = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @25, i64 0, i64 0)
@26 = internal constant [29 x i8] c"THR-L3-02: %d (\E6\9C\9F\E6\9C\9B: 465)\0A\00"
@global_var_536b = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @26, i64 0, i64 0)
@27 = internal constant [28 x i8] c"THR-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_5388 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @27, i64 0, i64 0)
@28 = internal constant [28 x i8] c"THR-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_53a4 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @28, i64 0, i64 0)
@29 = internal constant [28 x i8] c"THR-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_53c0 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @29, i64 0, i64 0)
@30 = internal constant [28 x i8] c"THR-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_53dc = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @30, i64 0, i64 0)
@global_var_505a = constant [2 x i8] c"r\00"

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

define i64 @param_strcpy(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2869:
  %0 = bitcast i64* %arg1 to i8*, !insn.addr !80
  %1 = inttoptr i64 %arg2 to i8*, !insn.addr !80
  %2 = call i8* @strcpy(i8* %0, i8* %1), !insn.addr !80
  %3 = call i32 @strlen(i8* %0), !insn.addr !81
  %4 = sext i32 %3 to i64, !insn.addr !81
  ret i64 %4, !insn.addr !82
}

define i64 @call_strcpy() local_unnamed_addr {
dec_label_pc_289e:
  %rax.0.reg2mem = alloca i64, !insn.addr !83
  %stack_var_-56 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !84
  %1 = call i64 @param_strcpy(i64* nonnull %stack_var_-56, i64 ptrtoint ([9 x i8]* @global_var_5008 to i64)), !insn.addr !85
  %2 = and i64 %1, 4294967295, !insn.addr !86
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !87
  %4 = icmp eq i64 %0, %3, !insn.addr !87
  store i64 %2, i64* %rax.0.reg2mem, !insn.addr !88
  br i1 %4, label %dec_label_pc_28e9, label %dec_label_pc_28e4, !insn.addr !88

dec_label_pc_28e4:                                ; preds = %dec_label_pc_289e
  call void @__stack_chk_fail(), !insn.addr !89
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !89
  br label %dec_label_pc_28e9, !insn.addr !89

dec_label_pc_28e9:                                ; preds = %dec_label_pc_28e4, %dec_label_pc_289e
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !90
}

define i64 @param_strcmp(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_28eb:
  %0 = inttoptr i64 %arg1 to i8*, !insn.addr !91
  %1 = inttoptr i64 %arg2 to i8*, !insn.addr !91
  %2 = call i32 @strcmp(i8* %0, i8* %1), !insn.addr !91
  %3 = icmp eq i32 %2, 0, !insn.addr !92
  %4 = icmp slt i32 %2, 0, !insn.addr !92
  %5 = icmp eq i1 %4, false, !insn.addr !93
  %6 = icmp eq i1 %3, false, !insn.addr !93
  %7 = icmp eq i1 %5, %6, !insn.addr !93
  %. = select i1 %5, i64 0, i64 4294967295
  %rax.0 = select i1 %7, i64 1, i64 %.
  ret i64 %rax.0, !insn.addr !94

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i64 @call_strcmp() local_unnamed_addr {
dec_label_pc_2936:
  %0 = call i64 @param_strcmp(i64 ptrtoint ([4 x i8]* @global_var_5015 to i64), i64 ptrtoint ([4 x i8]* @global_var_5011 to i64)), !insn.addr !95
  %1 = call i64 @param_strcmp(i64 ptrtoint ([4 x i8]* @global_var_5019 to i64), i64 ptrtoint ([4 x i8]* @global_var_5019 to i64)), !insn.addr !96
  %2 = call i64 @param_strcmp(i64 ptrtoint ([4 x i8]* @global_var_5021 to i64), i64 ptrtoint ([4 x i8]* @global_var_501d to i64)), !insn.addr !97
  %3 = add i64 %1, %0, !insn.addr !98
  %4 = add i64 %3, %2, !insn.addr !99
  %5 = and i64 %4, 4294967295, !insn.addr !99
  ret i64 %5, !insn.addr !100

; uselistorder directives
  uselistorder i64 ptrtoint ([4 x i8]* @global_var_5019 to i64), { 1, 0 }
  uselistorder i64 (i64, i64)* @param_strcmp, { 2, 1, 0 }
}

define i64 @param_strlen(i64 %arg1) local_unnamed_addr {
dec_label_pc_29a5:
  %0 = inttoptr i64 %arg1 to i8*, !insn.addr !101
  %1 = call i32 @strlen(i8* %0), !insn.addr !101
  %2 = sext i32 %1 to i64, !insn.addr !101
  ret i64 %2, !insn.addr !102
}

define i64 @call_strlen() local_unnamed_addr {
dec_label_pc_29cb:
  %0 = call i64 @param_strlen(i64 ptrtoint ([13 x i8]* @global_var_5025 to i64)), !insn.addr !103
  ret i64 %0, !insn.addr !104
}

define i64 @param_memcpy(i64* %arg1, i64* %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_29f0:
  %0 = trunc i64 %arg3 to i32, !insn.addr !105
  %1 = call i64* @memcpy(i64* %arg1, i64* %arg2, i32 %0), !insn.addr !105
  ret i64 %arg3, !insn.addr !106
}

define i64 @call_memcpy() local_unnamed_addr {
dec_label_pc_2a25:
  %rax.0.reg2mem = alloca i64, !insn.addr !107
  %stack_var_-40 = alloca i32, align 4
  %stack_var_-72 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !108
  store i64 10, i64* %stack_var_-72, align 8, !insn.addr !109
  store i32 0, i32* %stack_var_-40, align 4, !insn.addr !110
  %1 = bitcast i32* %stack_var_-40 to i64*, !insn.addr !111
  %2 = call i64 @param_memcpy(i64* nonnull %1, i64* nonnull %stack_var_-72, i64 20), !insn.addr !111
  %3 = load i32, i32* %stack_var_-40, align 4, !insn.addr !112
  %4 = zext i32 %3 to i64, !insn.addr !113
  %5 = call i64 @__readfsqword(i64 40), !insn.addr !114
  %6 = icmp eq i64 %0, %5, !insn.addr !114
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !115
  br i1 %6, label %dec_label_pc_2ab3, label %dec_label_pc_2aae, !insn.addr !115

dec_label_pc_2aae:                                ; preds = %dec_label_pc_2a25
  call void @__stack_chk_fail(), !insn.addr !116
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !116
  br label %dec_label_pc_2ab3, !insn.addr !116

dec_label_pc_2ab3:                                ; preds = %dec_label_pc_2aae, %dec_label_pc_2a25
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !117

; uselistorder directives
  uselistorder i32* %stack_var_-40, { 1, 2, 0 }
}

define i64 @param_memcmp(i32* %arg1, i32* %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2ab5:
  %0 = bitcast i32* %arg1 to i64*, !insn.addr !118
  %1 = bitcast i32* %arg2 to i64*, !insn.addr !118
  %2 = trunc i64 %arg3 to i32, !insn.addr !118
  %3 = call i32 @memcmp(i64* %0, i64* %1, i32 %2), !insn.addr !118
  %4 = icmp eq i32 %3, 0, !insn.addr !119
  %5 = icmp slt i32 %3, 0, !insn.addr !119
  %6 = icmp eq i1 %5, false, !insn.addr !120
  %7 = icmp eq i1 %4, false, !insn.addr !120
  %8 = icmp eq i1 %6, %7, !insn.addr !120
  %. = select i1 %6, i64 0, i64 4294967295
  %rax.0 = select i1 %8, i64 1, i64 %.
  ret i64 %rax.0, !insn.addr !121

; uselistorder directives
  uselistorder i32 %3, { 1, 0 }
}

define i64 @call_memcmp() local_unnamed_addr {
dec_label_pc_2b08:
  %rax.0.reg2mem = alloca i64, !insn.addr !122
  %stack_var_-28 = alloca i32, align 4
  %stack_var_-40 = alloca i32, align 4
  %stack_var_-52 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !123
  store i32 1, i32* %stack_var_-52, align 4, !insn.addr !124
  store i32 1, i32* %stack_var_-40, align 4, !insn.addr !125
  store i32 1, i32* %stack_var_-28, align 4, !insn.addr !126
  %1 = call i64 @param_memcmp(i32* nonnull %stack_var_-52, i32* nonnull %stack_var_-40, i64 12), !insn.addr !127
  %2 = call i64 @param_memcmp(i32* nonnull %stack_var_-52, i32* nonnull %stack_var_-28, i64 12), !insn.addr !128
  %3 = add i64 %2, %1, !insn.addr !129
  %4 = and i64 %3, 4294967295, !insn.addr !129
  %5 = call i64 @__readfsqword(i64 40), !insn.addr !130
  %6 = icmp eq i64 %0, %5, !insn.addr !130
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !131
  br i1 %6, label %dec_label_pc_2bb4, label %dec_label_pc_2baf, !insn.addr !131

dec_label_pc_2baf:                                ; preds = %dec_label_pc_2b08
  call void @__stack_chk_fail(), !insn.addr !132
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !132
  br label %dec_label_pc_2bb4, !insn.addr !132

dec_label_pc_2bb4:                                ; preds = %dec_label_pc_2baf, %dec_label_pc_2b08
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !133

; uselistorder directives
  uselistorder i64 (i32*, i32*, i64)* @param_memcmp, { 1, 0 }
}

define i64 @param_printf(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2bb6:
  %0 = and i64 %arg1, 4294967295, !insn.addr !134
  %1 = inttoptr i64 %arg2 to i8*, !insn.addr !135
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_5032, i64 0, i64 0), i64 %0, i8* %1), !insn.addr !135
  %3 = zext i32 %2 to i64, !insn.addr !136
  ret i64 %3, !insn.addr !137
}

define i64 @call_printf() local_unnamed_addr {
dec_label_pc_2bee:
  %0 = call i64 @param_printf(i64 42, i64 ptrtoint ([5 x i8]* @global_var_5047 to i64)), !insn.addr !138
  %1 = and i64 %0, 4294967295, !insn.addr !139
  ret i64 %1, !insn.addr !140
}

define i64 @param_scanf(i64 %arg1) local_unnamed_addr {
dec_label_pc_2c16:
  %rax.0.reg2mem = alloca i64, !insn.addr !141
  %storemerge.reg2mem = alloca i64, !insn.addr !141
  %stack_var_-28 = alloca i64, align 8
  %stack_var_-24 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !142
  %1 = inttoptr i64 %arg1 to i8*, !insn.addr !143
  %2 = call i32 (i8*, i8*, ...) @sscanf(i8* %1, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_504c, i64 0, i64 0), i64* nonnull %stack_var_-28, i64* nonnull %stack_var_-24), !insn.addr !143
  %3 = icmp eq i32 %2, 2, !insn.addr !144
  %4 = icmp eq i1 %3, false, !insn.addr !145
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !145
  br i1 %4, label %dec_label_pc_2c6d, label %dec_label_pc_2c5e, !insn.addr !145

dec_label_pc_2c5e:                                ; preds = %dec_label_pc_2c16
  %5 = load i64, i64* %stack_var_-28, align 8, !insn.addr !146
  %6 = load i64, i64* %stack_var_-24, align 8, !insn.addr !147
  %7 = add i64 %6, %5, !insn.addr !148
  %8 = and i64 %7, 4294967295, !insn.addr !148
  store i64 %8, i64* %storemerge.reg2mem, !insn.addr !149
  br label %dec_label_pc_2c6d, !insn.addr !149

dec_label_pc_2c6d:                                ; preds = %dec_label_pc_2c16, %dec_label_pc_2c5e
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %9 = call i64 @__readfsqword(i64 40), !insn.addr !150
  %10 = icmp eq i64 %0, %9, !insn.addr !150
  store i64 %storemerge.reload, i64* %rax.0.reg2mem, !insn.addr !151
  br i1 %10, label %dec_label_pc_2c81, label %dec_label_pc_2c7c, !insn.addr !151

dec_label_pc_2c7c:                                ; preds = %dec_label_pc_2c6d
  call void @__stack_chk_fail(), !insn.addr !152
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !152
  br label %dec_label_pc_2c81, !insn.addr !152

dec_label_pc_2c81:                                ; preds = %dec_label_pc_2c7c, %dec_label_pc_2c6d
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !153

; uselistorder directives
  uselistorder i64* %stack_var_-24, { 1, 0 }
  uselistorder i64* %stack_var_-28, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2c6d, { 1, 0 }
}

define i64 @call_scanf() local_unnamed_addr {
dec_label_pc_2c83:
  %0 = call i64 @param_scanf(i64 ptrtoint ([8 x i8]* @global_var_5052 to i64)), !insn.addr !154
  ret i64 %0, !insn.addr !155
}

define i64 @param_fopen_fclose(i64 %arg1) local_unnamed_addr {
dec_label_pc_2c9c:
  %storemerge.reg2mem = alloca i64, !insn.addr !156
  %0 = inttoptr i64 %arg1 to i8*, !insn.addr !157
  %1 = call %_IO_FILE* @fopen(i8* %0, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_505a, i64 0, i64 0)), !insn.addr !157
  %2 = icmp eq %_IO_FILE* %1, null, !insn.addr !158
  %3 = icmp eq i1 %2, false, !insn.addr !159
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !159
  br i1 %3, label %dec_label_pc_2cd4, label %dec_label_pc_2cf2, !insn.addr !159

dec_label_pc_2cd4:                                ; preds = %dec_label_pc_2c9c
  %4 = call i32 @fileno(%_IO_FILE* %1), !insn.addr !160
  %5 = call i32 @fclose(%_IO_FILE* %1), !insn.addr !161
  %6 = zext i32 %4 to i64, !insn.addr !162
  store i64 %6, i64* %storemerge.reg2mem, !insn.addr !162
  br label %dec_label_pc_2cf2, !insn.addr !162

dec_label_pc_2cf2:                                ; preds = %dec_label_pc_2c9c, %dec_label_pc_2cd4
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !163

; uselistorder directives
  uselistorder %_IO_FILE* %1, { 1, 0, 2 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2cf2, { 1, 0 }
}

define i64 @call_fopen_fclose() local_unnamed_addr {
dec_label_pc_2cf4:
  %0 = call i64 @param_fopen_fclose(i64 ptrtoint ([12 x i8]* @global_var_505c to i64)), !insn.addr !164
  %1 = trunc i64 %0 to i32, !insn.addr !165
  %2 = icmp slt i32 %1, 0, !insn.addr !166
  %. = select i1 %2, i64 4294967295, i64 42
  ret i64 %., !insn.addr !167
}

define i64 @param_fread_fwrite(i64 %arg1) local_unnamed_addr {
dec_label_pc_2d26:
  %rax.1.reg2mem = alloca i64, !insn.addr !168
  %rax.0.reg2mem = alloca i64, !insn.addr !168
  %stack_var_-56 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !169
  %1 = inttoptr i64 %arg1 to i8*, !insn.addr !170
  %2 = call %_IO_FILE* @fopen(i8* %1, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_507b, i64 0, i64 0)), !insn.addr !170
  %3 = icmp eq %_IO_FILE* %2, null, !insn.addr !171
  %4 = icmp eq i1 %3, false, !insn.addr !172
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !172
  br i1 %4, label %dec_label_pc_2d7b, label %dec_label_pc_2e4a, !insn.addr !172

dec_label_pc_2d7b:                                ; preds = %dec_label_pc_2d26
  %5 = call i32 @strlen(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_5068, i64 0, i64 0)), !insn.addr !173
  %6 = call i32 @fwrite(i64* bitcast ([19 x i8]* @global_var_5068 to i64*), i32 1, i32 %5, %_IO_FILE* %2), !insn.addr !174
  %7 = call i32 @strlen(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_5068, i64 0, i64 0)), !insn.addr !175
  %8 = icmp eq i32 %6, %7, !insn.addr !176
  br i1 %8, label %dec_label_pc_2dce, label %dec_label_pc_2dbb, !insn.addr !177

dec_label_pc_2dbb:                                ; preds = %dec_label_pc_2d7b
  %9 = call i32 @fclose(%_IO_FILE* %2), !insn.addr !178
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !179
  br label %dec_label_pc_2e4a, !insn.addr !179

dec_label_pc_2dce:                                ; preds = %dec_label_pc_2d7b
  call void @rewind(%_IO_FILE* %2), !insn.addr !180
  %10 = call i32 @fread(i64* nonnull %stack_var_-56, i32 1, i32 %6, %_IO_FILE* %2), !insn.addr !181
  %11 = sext i32 %10 to i64, !insn.addr !181
  %12 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !182
  %13 = add i64 %11, %12, !insn.addr !183
  %14 = inttoptr i64 %13 to i8*, !insn.addr !184
  store i8 0, i8* %14, align 1, !insn.addr !184
  %15 = call i32 @fclose(%_IO_FILE* %2), !insn.addr !185
  %16 = call i32 @unlink(i8* %1), !insn.addr !186
  %17 = icmp eq i32 %10, %6, !insn.addr !187
  %18 = icmp eq i1 %17, false, !insn.addr !188
  br i1 %18, label %dec_label_pc_2e45, label %dec_label_pc_2e27, !insn.addr !188

dec_label_pc_2e27:                                ; preds = %dec_label_pc_2dce
  %19 = bitcast i64* %stack_var_-56 to i8*, !insn.addr !189
  %20 = call i32 @strcmp(i8* nonnull %19, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_5068, i64 0, i64 0)), !insn.addr !189
  %21 = icmp eq i32 %20, 0, !insn.addr !190
  %22 = icmp eq i1 %21, false, !insn.addr !191
  store i64 42, i64* %rax.0.reg2mem, !insn.addr !191
  br i1 %22, label %dec_label_pc_2e45, label %dec_label_pc_2e4a, !insn.addr !191

dec_label_pc_2e45:                                ; preds = %dec_label_pc_2e27, %dec_label_pc_2dce
  store i64 4294967293, i64* %rax.0.reg2mem, !insn.addr !192
  br label %dec_label_pc_2e4a, !insn.addr !192

dec_label_pc_2e4a:                                ; preds = %dec_label_pc_2e27, %dec_label_pc_2d26, %dec_label_pc_2e45, %dec_label_pc_2dbb
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %23 = call i64 @__readfsqword(i64 40), !insn.addr !193
  %24 = icmp eq i64 %0, %23, !insn.addr !193
  store i64 %rax.0.reload, i64* %rax.1.reg2mem, !insn.addr !194
  br i1 %24, label %dec_label_pc_2e5e, label %dec_label_pc_2e59, !insn.addr !194

dec_label_pc_2e59:                                ; preds = %dec_label_pc_2e4a
  call void @__stack_chk_fail(), !insn.addr !195
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.1.reg2mem, !insn.addr !195
  br label %dec_label_pc_2e5e, !insn.addr !195

dec_label_pc_2e5e:                                ; preds = %dec_label_pc_2e59, %dec_label_pc_2e4a
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !196

; uselistorder directives
  uselistorder %_IO_FILE* %2, { 0, 2, 1, 3, 4, 5 }
  uselistorder i64* %stack_var_-56, { 0, 2, 1 }
  uselistorder i64* %rax.0.reg2mem, { 0, 4, 1, 3, 2 }
  uselistorder i32 (i8*, i8*)* @strcmp, { 1, 0, 2 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 2, 1, 0, 3 }
  uselistorder i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_5068, i64 0, i64 0), { 0, 2, 1 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2e4a, { 2, 0, 3, 1 }
}

define i64 @call_fread_fwrite() local_unnamed_addr {
dec_label_pc_2e60:
  %0 = call i64 @param_fread_fwrite(i64 ptrtoint ([23 x i8]* @global_var_507e to i64)), !insn.addr !197
  ret i64 %0, !insn.addr !198
}

define i64 @param_malloc_free(i64 %arg1) local_unnamed_addr {
dec_label_pc_2e79:
  %storemerge.reg2mem = alloca i64, !insn.addr !199
  %storemerge23.reg2mem = alloca i32, !insn.addr !199
  %.reg2mem = alloca i64, !insn.addr !199
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !200
  %1 = call i64* @malloc(i32 %0), !insn.addr !200
  %2 = icmp eq i64* %1, null, !insn.addr !201
  %3 = icmp eq i1 %2, false, !insn.addr !202
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !202
  br i1 %3, label %dec_label_pc_2ee0.preheader, label %dec_label_pc_2f21, !insn.addr !202

dec_label_pc_2ee0.preheader:                      ; preds = %dec_label_pc_2e79
  %4 = ptrtoint i64* %1 to i64, !insn.addr !200
  %5 = icmp eq i64 %arg1, 0, !insn.addr !203
  store i64 0, i64* %.reg2mem, !insn.addr !204
  store i32 0, i32* %storemerge23.reg2mem, !insn.addr !204
  br i1 %5, label %dec_label_pc_2eea, label %dec_label_pc_2eb5, !insn.addr !204

dec_label_pc_2eb5:                                ; preds = %dec_label_pc_2ee0.preheader, %dec_label_pc_2eb5
  %storemerge23.reload = load i32, i32* %storemerge23.reg2mem
  %.reload = load i64, i64* %.reg2mem
  %6 = mul i32 %storemerge23.reload, 10, !insn.addr !205
  %7 = mul i64 %.reload, 4, !insn.addr !206
  %8 = add i64 %7, %4, !insn.addr !207
  %9 = inttoptr i64 %8 to i32*, !insn.addr !208
  store i32 %6, i32* %9, align 4, !insn.addr !208
  %10 = add i32 %storemerge23.reload, 1, !insn.addr !209
  %11 = sext i32 %10 to i64, !insn.addr !210
  %12 = icmp ult i64 %11, %arg1, !insn.addr !203
  store i64 %11, i64* %.reg2mem, !insn.addr !204
  store i32 %10, i32* %storemerge23.reg2mem, !insn.addr !204
  br i1 %12, label %dec_label_pc_2eb5, label %dec_label_pc_2eea, !insn.addr !204

dec_label_pc_2eea:                                ; preds = %dec_label_pc_2eb5, %dec_label_pc_2ee0.preheader
  %13 = bitcast i64* %1 to i32*, !insn.addr !211
  %14 = load i32, i32* %13, align 4, !insn.addr !211
  %15 = mul i64 %arg1, 4, !insn.addr !212
  %16 = add i64 %15, -4, !insn.addr !213
  %17 = add i64 %16, %4, !insn.addr !214
  %18 = inttoptr i64 %17 to i32*, !insn.addr !215
  %19 = load i32, i32* %18, align 4, !insn.addr !215
  %20 = add i32 %19, %14, !insn.addr !216
  call void @free(i64* %1), !insn.addr !217
  %21 = zext i32 %20 to i64, !insn.addr !218
  store i64 %21, i64* %storemerge.reg2mem, !insn.addr !218
  br label %dec_label_pc_2f21, !insn.addr !218

dec_label_pc_2f21:                                ; preds = %dec_label_pc_2e79, %dec_label_pc_2eea
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !219

; uselistorder directives
  uselistorder i64 %4, { 1, 0 }
  uselistorder i64* %1, { 0, 1, 3, 2 }
  uselistorder i64* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge23.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 0, 2, 1, 3 }
  uselistorder label %dec_label_pc_2f21, { 1, 0 }
  uselistorder label %dec_label_pc_2eb5, { 1, 0 }
}

define i64 @call_malloc_free() local_unnamed_addr {
dec_label_pc_2f23:
  %0 = call i64 @param_malloc_free(i64 10), !insn.addr !220
  ret i64 %0, !insn.addr !221
}

define i64 @param_memset(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2f37:
  %stack_var_-28.0.lcssa.reg2mem = alloca i64, !insn.addr !222
  %stack_var_-28.01.reg2mem = alloca i32, !insn.addr !222
  %storemerge2.reg2mem = alloca i64, !insn.addr !222
  %0 = ptrtoint i64* %arg1 to i64
  %1 = trunc i64 %arg2 to i32, !insn.addr !223
  %2 = call i64* @memset(i64* %arg1, i32 0, i32 %1), !insn.addr !223
  %3 = icmp eq i64 %arg2, 0, !insn.addr !224
  store i64 0, i64* %storemerge2.reg2mem, !insn.addr !225
  store i32 0, i32* %stack_var_-28.01.reg2mem, !insn.addr !225
  store i64 0, i64* %stack_var_-28.0.lcssa.reg2mem, !insn.addr !225
  br i1 %3, label %dec_label_pc_2f9c, label %dec_label_pc_2f79, !insn.addr !225

dec_label_pc_2f79:                                ; preds = %dec_label_pc_2f37, %dec_label_pc_2f79
  %stack_var_-28.01.reload = load i32, i32* %stack_var_-28.01.reg2mem
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %4 = add i64 %storemerge2.reload, %0, !insn.addr !226
  %5 = inttoptr i64 %4 to i8*, !insn.addr !227
  %6 = load i8, i8* %5, align 1, !insn.addr !227
  %7 = zext i8 %6 to i32, !insn.addr !228
  %8 = add i32 %stack_var_-28.01.reload, %7, !insn.addr !228
  %9 = add nuw i64 %storemerge2.reload, 1, !insn.addr !229
  %exitcond = icmp eq i64 %9, %arg2
  store i64 %9, i64* %storemerge2.reg2mem, !insn.addr !225
  store i32 %8, i32* %stack_var_-28.01.reg2mem, !insn.addr !225
  br i1 %exitcond, label %dec_label_pc_2f92.dec_label_pc_2f9c_crit_edge, label %dec_label_pc_2f79, !insn.addr !225

dec_label_pc_2f92.dec_label_pc_2f9c_crit_edge:    ; preds = %dec_label_pc_2f79
  %phitmp = zext i32 %8 to i64
  store i64 %phitmp, i64* %stack_var_-28.0.lcssa.reg2mem
  br label %dec_label_pc_2f9c

dec_label_pc_2f9c:                                ; preds = %dec_label_pc_2f37, %dec_label_pc_2f92.dec_label_pc_2f9c_crit_edge
  %stack_var_-28.0.lcssa.reload = load i64, i64* %stack_var_-28.0.lcssa.reg2mem
  ret i64 %stack_var_-28.0.lcssa.reload, !insn.addr !230

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
  uselistorder i64* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-28.01.reg2mem, { 2, 0, 1 }
  uselistorder i64* %stack_var_-28.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2f9c, { 1, 0 }
  uselistorder label %dec_label_pc_2f79, { 1, 0 }
}

define i64 @call_memset() local_unnamed_addr {
dec_label_pc_2fa1:
  %0 = alloca i32
  %rax.0.reg2mem = alloca i64, !insn.addr !231
  %indvars.iv.reg2mem = alloca i64, !insn.addr !231
  %1 = load i32, i32* %0
  %stack_var_-56 = alloca i32, align 4
  %stack_var_-8 = alloca i64, align 8
  %2 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !232
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !233
  %4 = add i64 %2, -48, !insn.addr !234
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_2fc5

dec_label_pc_2fc5:                                ; preds = %dec_label_pc_2fc5, %dec_label_pc_2fa1
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %5 = mul i64 %indvars.iv.reload, 4, !insn.addr !234
  %6 = add i64 %4, %5, !insn.addr !234
  %7 = inttoptr i64 %6 to i32*, !insn.addr !234
  store i32 255, i32* %7, align 4, !insn.addr !234
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 10
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !235
  br i1 %exitcond, label %dec_label_pc_2fdc, label %dec_label_pc_2fc5, !insn.addr !235

dec_label_pc_2fdc:                                ; preds = %dec_label_pc_2fc5
  %8 = bitcast i32* %stack_var_-56 to i64*, !insn.addr !236
  %9 = call i64 @param_memset(i64* nonnull %8, i64 40), !insn.addr !236
  %10 = load i32, i32* %stack_var_-56, align 4, !insn.addr !237
  %11 = add i32 %10, %1, !insn.addr !238
  %12 = zext i32 %11 to i64, !insn.addr !238
  %13 = call i64 @__readfsqword(i64 40), !insn.addr !239
  %14 = icmp eq i64 %3, %13, !insn.addr !239
  store i64 %12, i64* %rax.0.reg2mem, !insn.addr !240
  br i1 %14, label %dec_label_pc_3009, label %dec_label_pc_3004, !insn.addr !240

dec_label_pc_3004:                                ; preds = %dec_label_pc_2fdc
  call void @__stack_chk_fail(), !insn.addr !241
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !241
  br label %dec_label_pc_3009, !insn.addr !241

dec_label_pc_3009:                                ; preds = %dec_label_pc_3004, %dec_label_pc_2fdc
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !242

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i64 10, { 0, 2, 1 }
}

define i64 @param_strchr_strstr(i64 %arg1, i64 %arg2, i8* %arg3) local_unnamed_addr {
dec_label_pc_300b:
  %0 = trunc i64 %arg2 to i32, !insn.addr !243
  %sext = mul i32 %0, 16777216
  %1 = ashr exact i32 %sext, 24, !insn.addr !244
  %2 = inttoptr i64 %arg1 to i8*, !insn.addr !245
  %3 = call i8* @strchr(i8* %2, i32 %1), !insn.addr !245
  %4 = icmp eq i8* %3, null, !insn.addr !246
  %5 = ptrtoint i8* %3 to i64
  %6 = sub i64 %5, %arg1
  %storemerge2 = select i1 %4, i64 4294967295, i64 %6
  %7 = call i8* @strstr(i8* %2, i8* %arg3), !insn.addr !247
  %8 = icmp eq i8* %7, null, !insn.addr !248
  %9 = ptrtoint i8* %7 to i64
  %10 = sub i64 %9, %arg1
  %storemerge = select i1 %8, i64 4294967295, i64 %10
  %11 = add i64 %storemerge, %storemerge2, !insn.addr !249
  %12 = and i64 %11, 4294967295, !insn.addr !249
  ret i64 %12, !insn.addr !250

; uselistorder directives
  uselistorder i8* %7, { 1, 0 }
  uselistorder i8* %3, { 1, 0 }
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @call_strchr_strstr() local_unnamed_addr {
dec_label_pc_308d:
  %0 = call i64 @param_strchr_strstr(i64 ptrtoint ([20 x i8]* @global_var_5095 to i64), i64 66, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_50a9, i64 0, i64 0)), !insn.addr !251
  %1 = and i64 %0, 4294967295, !insn.addr !252
  ret i64 %1, !insn.addr !253
}

define i64 @test_standard_library_functions() local_unnamed_addr {
dec_label_pc_30c4:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_50b0 to i8*)), !insn.addr !254
  %1 = call i64 @call_strcpy(), !insn.addr !255
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_50d4 to i8*)), !insn.addr !256
  %3 = call i64 @call_strcmp(), !insn.addr !257
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_50ef to i8*)), !insn.addr !258
  %5 = call i64 @call_strlen(), !insn.addr !259
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_510a to i8*)), !insn.addr !260
  %7 = call i64 @call_memcpy(), !insn.addr !261
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5126 to i8*)), !insn.addr !262
  %9 = call i64 @call_memcmp(), !insn.addr !263
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5142 to i8*)), !insn.addr !264
  %11 = call i64 @call_printf(), !insn.addr !265
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_515e to i8*)), !insn.addr !266
  %13 = call i64 @call_scanf(), !insn.addr !267
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_517a to i8*)), !insn.addr !268
  %15 = call i64 @call_fopen_fclose(), !insn.addr !269
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5197 to i8*)), !insn.addr !270
  %17 = call i64 @call_fread_fwrite(), !insn.addr !271
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_51b3 to i8*)), !insn.addr !272
  %19 = call i64 @call_malloc_free(), !insn.addr !273
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_51cf to i8*)), !insn.addr !274
  %21 = call i64 @call_memset(), !insn.addr !275
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_51eb to i8*)), !insn.addr !276
  %23 = call i64 @call_strchr_strstr(), !insn.addr !277
  %24 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5206 to i8*)), !insn.addr !278
  %25 = sext i32 %24 to i64, !insn.addr !278
  ret i64 %25, !insn.addr !279
}

define i64 @param_linux_syscall(i64 %arg1) local_unnamed_addr {
dec_label_pc_325e:
  %storemerge.in.reg2mem = alloca i32, !insn.addr !280
  %0 = call i32 (i32, ...) @syscall(i32 2), !insn.addr !281
  %1 = icmp slt i32 %0, 0, !insn.addr !282
  %2 = icmp eq i1 %1, false, !insn.addr !283
  br i1 %2, label %dec_label_pc_329d, label %dec_label_pc_3292, !insn.addr !283

dec_label_pc_3292:                                ; preds = %dec_label_pc_325e
  %3 = call i32* @__errno_location(), !insn.addr !284
  %4 = load i32, i32* %3, align 4, !insn.addr !285
  %5 = sub i32 0, %4, !insn.addr !286
  store i32 %5, i32* %storemerge.in.reg2mem, !insn.addr !287
  br label %dec_label_pc_32b4, !insn.addr !287

dec_label_pc_329d:                                ; preds = %dec_label_pc_325e
  %6 = call i32 (i32, ...) @syscall(i32 3), !insn.addr !288
  store i32 %0, i32* %storemerge.in.reg2mem, !insn.addr !289
  br label %dec_label_pc_32b4, !insn.addr !289

dec_label_pc_32b4:                                ; preds = %dec_label_pc_329d, %dec_label_pc_3292
  %storemerge.in.reload = load i32, i32* %storemerge.in.reg2mem
  %storemerge = zext i32 %storemerge.in.reload to i64
  ret i64 %storemerge, !insn.addr !290

; uselistorder directives
  uselistorder i32* %storemerge.in.reg2mem, { 0, 2, 1 }
  uselistorder i32 (i32, ...)* @syscall, { 1, 0, 2 }
}

define i64 @call_linux_syscall() local_unnamed_addr {
dec_label_pc_32b6:
  %0 = call i64 @param_linux_syscall(i64 ptrtoint ([12 x i8]* @global_var_505c to i64)), !insn.addr !291
  %1 = trunc i64 %0 to i32, !insn.addr !292
  %2 = icmp slt i32 %1, 0, !insn.addr !293
  %. = select i1 %2, i64 4294967295, i64 42
  ret i64 %., !insn.addr !294
}

define i64 @param_win32_api(i64 %arg1) local_unnamed_addr {
dec_label_pc_32e8:
  %0 = alloca i64
  %rax.1.reg2mem = alloca i64, !insn.addr !295
  %1 = load i64, i64* %0
  %stack_var_-168 = alloca i64, align 8
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !296
  %3 = inttoptr i64 %arg1 to i8*, !insn.addr !297
  %4 = bitcast i64* %stack_var_-168 to %stat*, !insn.addr !297
  %5 = call i32 @stat(i8* %3, %stat* nonnull %4), !insn.addr !297
  %6 = icmp slt i32 %5, 0, !insn.addr !298
  %7 = icmp eq i1 %6, false, !insn.addr !299
  %8 = icmp slt i64 %1, 1
  %. = select i1 %8, i64 4294967294, i64 42
  %rax.0 = select i1 %7, i64 %., i64 4294967295
  %9 = call i64 @__readfsqword(i64 40), !insn.addr !300
  %10 = icmp eq i64 %2, %9, !insn.addr !300
  store i64 %rax.0, i64* %rax.1.reg2mem, !insn.addr !301
  br i1 %10, label %dec_label_pc_335a, label %dec_label_pc_3355, !insn.addr !301

dec_label_pc_3355:                                ; preds = %dec_label_pc_32e8
  call void @__stack_chk_fail(), !insn.addr !302
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.1.reg2mem, !insn.addr !302
  br label %dec_label_pc_335a, !insn.addr !302

dec_label_pc_335a:                                ; preds = %dec_label_pc_3355, %dec_label_pc_32e8
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !303
}

define i64 @call_win32_api() local_unnamed_addr {
dec_label_pc_335c:
  %0 = call i64 @param_win32_api(i64 ptrtoint ([12 x i8]* @global_var_505c to i64)), !insn.addr !304
  ret i64 %0, !insn.addr !305
}

define i64 @param_fork_exec(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_3375:
  %rax.1.reg2mem = alloca i64, !insn.addr !306
  %rax.0.reg2mem = alloca i64, !insn.addr !306
  %stack_var_-28 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !307
  %1 = call i32 @fork(), !insn.addr !308
  %2 = icmp slt i32 %1, 0, !insn.addr !309
  %3 = icmp eq i1 %2, false, !insn.addr !310
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !310
  br i1 %3, label %dec_label_pc_33ad, label %dec_label_pc_341b, !insn.addr !310

dec_label_pc_33ad:                                ; preds = %dec_label_pc_3375
  %4 = icmp eq i32 %1, 0, !insn.addr !311
  %5 = icmp eq i1 %4, false, !insn.addr !312
  br i1 %5, label %dec_label_pc_33db, label %dec_label_pc_33b3, !insn.addr !312

dec_label_pc_33b3:                                ; preds = %dec_label_pc_33ad
  %6 = inttoptr i64 %arg1 to i8*, !insn.addr !313
  %7 = call i32 (i8*, i8*, ...) @execl(i8* %6, i8* %6), !insn.addr !313
  call void @_exit(i32 127), !insn.addr !314
  unreachable, !insn.addr !314

dec_label_pc_33db:                                ; preds = %dec_label_pc_33ad
  %8 = call i32 @waitpid(i32 %1, i32* nonnull %stack_var_-28, i32 0), !insn.addr !315
  %9 = icmp slt i32 %8, 0, !insn.addr !316
  %10 = icmp eq i1 %9, false, !insn.addr !317
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !317
  br i1 %10, label %dec_label_pc_3401, label %dec_label_pc_341b, !insn.addr !317

dec_label_pc_3401:                                ; preds = %dec_label_pc_33db
  %11 = load i32, i32* %stack_var_-28, align 4, !insn.addr !318
  %12 = urem i32 %11, 128, !insn.addr !319
  %13 = icmp eq i32 %12, 0, !insn.addr !320
  %14 = icmp eq i1 %13, false, !insn.addr !321
  store i64 4294967293, i64* %rax.0.reg2mem, !insn.addr !321
  br i1 %14, label %dec_label_pc_341b, label %dec_label_pc_340b, !insn.addr !321

dec_label_pc_340b:                                ; preds = %dec_label_pc_3401
  %15 = udiv i32 %11, 256
  %16 = urem i32 %15, 256
  %17 = zext i32 %16 to i64, !insn.addr !322
  store i64 %17, i64* %rax.0.reg2mem, !insn.addr !323
  br label %dec_label_pc_341b, !insn.addr !323

dec_label_pc_341b:                                ; preds = %dec_label_pc_3401, %dec_label_pc_33db, %dec_label_pc_3375, %dec_label_pc_340b
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %18 = call i64 @__readfsqword(i64 40), !insn.addr !324
  %19 = icmp eq i64 %0, %18, !insn.addr !324
  store i64 %rax.0.reload, i64* %rax.1.reg2mem, !insn.addr !325
  br i1 %19, label %dec_label_pc_342f, label %dec_label_pc_342a, !insn.addr !325

dec_label_pc_342a:                                ; preds = %dec_label_pc_341b
  call void @__stack_chk_fail(), !insn.addr !326
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.1.reg2mem, !insn.addr !326
  br label %dec_label_pc_342f, !insn.addr !326

dec_label_pc_342f:                                ; preds = %dec_label_pc_342a, %dec_label_pc_341b
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !327

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 4, 1, 2, 3 }
  uselistorder i32 256, { 1, 0 }
  uselistorder label %dec_label_pc_341b, { 3, 0, 1, 2 }
}

define i64 @call_fork_exec() local_unnamed_addr {
dec_label_pc_3431:
  %0 = call i64 @param_fork_exec(i64 ptrtoint ([10 x i8]* @global_var_5222 to i64), i64 0), !insn.addr !328
  %1 = trunc i64 %0 to i32, !insn.addr !329
  %2 = icmp eq i32 %1, 0, !insn.addr !330
  %3 = icmp eq i1 %2, false, !insn.addr !331
  %. = select i1 %3, i64 4294967295, i64 42
  ret i64 %., !insn.addr !332
}

define i64 @param_pipe_communication() local_unnamed_addr {
dec_label_pc_3468:
  %0 = alloca i32
  %rax.1.reg2mem = alloca i64, !insn.addr !333
  %rax.0.reg2mem = alloca i64, !insn.addr !333
  %stack_var_-56 = alloca i64, align 8
  %1 = load i32, i32* %0
  %stack_var_-64 = alloca i32, align 4
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !334
  %3 = ptrtoint i32* %stack_var_-64 to i64, !insn.addr !335
  %4 = trunc i64 %3 to i32, !insn.addr !336
  %5 = insertvalue [2 x i32] undef, i32 %4, 0, !insn.addr !336
  %6 = call i32 @pipe([2 x i32] %5), !insn.addr !336
  %7 = icmp slt i32 %6, 0, !insn.addr !337
  %8 = icmp eq i1 %7, false, !insn.addr !338
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !338
  br i1 %8, label %dec_label_pc_349d, label %dec_label_pc_355d, !insn.addr !338

dec_label_pc_349d:                                ; preds = %dec_label_pc_3468
  %9 = call i32 @fork(), !insn.addr !339
  %10 = icmp slt i32 %9, 0, !insn.addr !340
  %11 = icmp eq i1 %10, false, !insn.addr !341
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !341
  br i1 %11, label %dec_label_pc_34b5, label %dec_label_pc_355d, !insn.addr !341

dec_label_pc_34b5:                                ; preds = %dec_label_pc_349d
  %12 = icmp eq i32 %9, 0, !insn.addr !342
  %13 = icmp eq i1 %12, false, !insn.addr !343
  br i1 %13, label %dec_label_pc_3504, label %dec_label_pc_34bb, !insn.addr !343

dec_label_pc_34bb:                                ; preds = %dec_label_pc_34b5
  %14 = load i32, i32* %stack_var_-64, align 4, !insn.addr !344
  %15 = call i32 @close(i32 %14), !insn.addr !345
  %16 = call i32 @strlen(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_522c, i64 0, i64 0)), !insn.addr !346
  %17 = call i32 @write(i32 %1, i64* bitcast ([10 x i8]* @global_var_522c to i64*), i32 %16), !insn.addr !347
  %18 = call i32 @close(i32 %1), !insn.addr !348
  call void @_exit(i32 0), !insn.addr !349
  unreachable, !insn.addr !349

dec_label_pc_3504:                                ; preds = %dec_label_pc_34b5
  %19 = call i32 @close(i32 %1), !insn.addr !350
  %20 = load i32, i32* %stack_var_-64, align 4, !insn.addr !351
  %21 = call i32 @read(i32 %20, i64* nonnull %stack_var_-56, i32 31), !insn.addr !352
  %22 = sext i32 %21 to i64, !insn.addr !352
  %23 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !353
  %24 = add i64 %22, %23, !insn.addr !354
  %25 = inttoptr i64 %24 to i8*, !insn.addr !355
  store i8 0, i8* %25, align 1, !insn.addr !355
  %26 = load i32, i32* %stack_var_-64, align 4, !insn.addr !356
  %27 = call i32 @close(i32 %26), !insn.addr !357
  %28 = call i32 @wait(i64 0), !insn.addr !358
  %29 = icmp slt i32 %21, 1, !insn.addr !359
  %. = select i1 %29, i64 4294967293, i64 42
  store i64 %., i64* %rax.0.reg2mem, !insn.addr !360
  br label %dec_label_pc_355d, !insn.addr !360

dec_label_pc_355d:                                ; preds = %dec_label_pc_3504, %dec_label_pc_349d, %dec_label_pc_3468
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %30 = call i64 @__readfsqword(i64 40), !insn.addr !361
  %31 = icmp eq i64 %2, %30, !insn.addr !361
  store i64 %rax.0.reload, i64* %rax.1.reg2mem, !insn.addr !362
  br i1 %31, label %dec_label_pc_3571, label %dec_label_pc_356c, !insn.addr !362

dec_label_pc_356c:                                ; preds = %dec_label_pc_355d
  call void @__stack_chk_fail(), !insn.addr !363
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.1.reg2mem, !insn.addr !363
  br label %dec_label_pc_3571, !insn.addr !363

dec_label_pc_3571:                                ; preds = %dec_label_pc_356c, %dec_label_pc_355d
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !364

; uselistorder directives
  uselistorder i32* %stack_var_-64, { 3, 2, 1, 0 }
  uselistorder i64* %stack_var_-56, { 1, 0 }
  uselistorder void (i32)* @_exit, { 1, 0, 2 }
  uselistorder [10 x i8]* @global_var_522c, { 1, 0 }
  uselistorder i32 ()* @fork, { 1, 0, 2 }
}

define i64 @call_pipe_communication() local_unnamed_addr {
dec_label_pc_3573:
  %0 = call i64 @param_pipe_communication(), !insn.addr !365
  ret i64 %0, !insn.addr !366
}

define i64 @param_socket_create() local_unnamed_addr {
dec_label_pc_3582:
  %rax.1.reg2mem = alloca i64, !insn.addr !367
  %rax.0.reg2mem = alloca i64, !insn.addr !367
  %stack_var_-40 = alloca i64, align 8
  %stack_var_-48 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !368
  %1 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !369
  %2 = icmp slt i32 %1, 0, !insn.addr !370
  %3 = icmp eq i1 %2, false, !insn.addr !371
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !371
  br i1 %3, label %dec_label_pc_35c4, label %dec_label_pc_3693, !insn.addr !371

dec_label_pc_35c4:                                ; preds = %dec_label_pc_3582
  store i32 1, i32* %stack_var_-48, align 4, !insn.addr !372
  %4 = bitcast i32* %stack_var_-48 to i64*, !insn.addr !373
  %5 = call i32 @setsockopt(i32 %1, i32 1, i32 2, i64* nonnull %4, i32 4), !insn.addr !373
  %6 = icmp slt i32 %5, 0, !insn.addr !374
  %7 = icmp eq i1 %6, false, !insn.addr !375
  br i1 %7, label %dec_label_pc_3604, label %dec_label_pc_35f0, !insn.addr !375

dec_label_pc_35f0:                                ; preds = %dec_label_pc_35c4
  %8 = call i32 @close(i32 %1), !insn.addr !376
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !377
  br label %dec_label_pc_3693, !insn.addr !377

dec_label_pc_3604:                                ; preds = %dec_label_pc_35c4
  %9 = call i64* @memset(i64* nonnull %stack_var_-40, i32 0, i32 16), !insn.addr !378
  store i64 2, i64* %stack_var_-40, align 8, !insn.addr !379
  %10 = call i16 @htons(i16 0), !insn.addr !380
  %11 = bitcast i64* %stack_var_-40 to %sockaddr*, !insn.addr !381
  %12 = call i32 @bind(i32 %1, %sockaddr* nonnull %11, i32 16), !insn.addr !381
  %13 = icmp slt i32 %12, 0, !insn.addr !382
  %14 = icmp eq i1 %13, false, !insn.addr !383
  br i1 %14, label %dec_label_pc_3660, label %dec_label_pc_364f, !insn.addr !383

dec_label_pc_364f:                                ; preds = %dec_label_pc_3604
  %15 = call i32 @close(i32 %1), !insn.addr !384
  store i64 4294967293, i64* %rax.0.reg2mem, !insn.addr !385
  br label %dec_label_pc_3693, !insn.addr !385

dec_label_pc_3660:                                ; preds = %dec_label_pc_3604
  %16 = call i32 @listen(i32 %1, i32 5), !insn.addr !386
  %17 = icmp slt i32 %16, 0, !insn.addr !387
  %18 = icmp eq i1 %17, false, !insn.addr !388
  %19 = call i32 @close(i32 %1)
  %. = select i1 %18, i64 42, i64 4294967292
  store i64 %., i64* %rax.0.reg2mem, !insn.addr !389
  br label %dec_label_pc_3693, !insn.addr !389

dec_label_pc_3693:                                ; preds = %dec_label_pc_3660, %dec_label_pc_3582, %dec_label_pc_364f, %dec_label_pc_35f0
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %20 = call i64 @__readfsqword(i64 40), !insn.addr !390
  %21 = icmp eq i64 %0, %20, !insn.addr !390
  store i64 %rax.0.reload, i64* %rax.1.reg2mem, !insn.addr !391
  br i1 %21, label %dec_label_pc_36a7, label %dec_label_pc_36a2, !insn.addr !391

dec_label_pc_36a2:                                ; preds = %dec_label_pc_3693
  call void @__stack_chk_fail(), !insn.addr !392
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.1.reg2mem, !insn.addr !392
  br label %dec_label_pc_36a7, !insn.addr !392

dec_label_pc_36a7:                                ; preds = %dec_label_pc_36a2, %dec_label_pc_3693
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !393

; uselistorder directives
  uselistorder i32 %1, { 1, 2, 3, 4, 0, 5, 6 }
  uselistorder i64* %stack_var_-40, { 0, 2, 1 }
  uselistorder i64* %rax.0.reg2mem, { 0, 1, 4, 3, 2 }
  uselistorder i64* (i64*, i32, i32)* @memset, { 1, 0, 2 }
  uselistorder label %dec_label_pc_3693, { 0, 2, 3, 1 }
}

define i64 @call_socket_create() local_unnamed_addr {
dec_label_pc_36a9:
  %0 = call i64 @param_socket_create(), !insn.addr !394
  ret i64 %0, !insn.addr !395
}

define i64 @param_shmget_shmat() local_unnamed_addr {
dec_label_pc_36b8:
  %rax.0.reg2mem = alloca i64, !insn.addr !396
  %0 = call i32 (i8*, i32, ...) @open(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_5236, i64 0, i64 0), i32 66), !insn.addr !397
  %1 = icmp slt i32 %0, 0, !insn.addr !398
  %2 = icmp eq i1 %1, false, !insn.addr !399
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !399
  br i1 %2, label %dec_label_pc_36fd, label %dec_label_pc_37c6, !insn.addr !399

dec_label_pc_36fd:                                ; preds = %dec_label_pc_36b8
  %3 = call i32 @close(i32 %0), !insn.addr !400
  %4 = call i32 @ftok(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_5236, i64 0, i64 0), i32 42), !insn.addr !401
  %5 = icmp slt i32 %4, 0, !insn.addr !402
  %6 = icmp eq i1 %5, false, !insn.addr !403
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !403
  br i1 %6, label %dec_label_pc_372e, label %dec_label_pc_37c6, !insn.addr !403

dec_label_pc_372e:                                ; preds = %dec_label_pc_36fd
  %7 = call i32 @shmget(i32 %4, i32 ptrtoint (i32* @global_var_1000 to i32), i32 ptrtoint (i32* @global_var_3b6 to i32)), !insn.addr !404
  %8 = icmp slt i32 %7, 0, !insn.addr !405
  %9 = icmp eq i1 %8, false, !insn.addr !406
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !406
  br i1 %9, label %dec_label_pc_3752, label %dec_label_pc_37c6, !insn.addr !406

dec_label_pc_3752:                                ; preds = %dec_label_pc_372e
  %10 = call i64* @shmat(i32 %7, i64* null, i32 0), !insn.addr !407
  %11 = icmp eq i64* %10, inttoptr (i64 -1 to i64*), !insn.addr !408
  %12 = icmp eq i1 %11, false, !insn.addr !409
  store i64 4294967293, i64* %rax.0.reg2mem, !insn.addr !409
  br i1 %12, label %dec_label_pc_3778, label %dec_label_pc_37c6, !insn.addr !409

dec_label_pc_3778:                                ; preds = %dec_label_pc_3752
  %13 = bitcast i64* %10 to i8*
  %14 = ptrtoint i64* %10 to i64, !insn.addr !410
  store i64 7299600957910902867, i64* %10, align 8, !insn.addr !411
  %15 = add i64 %14, 8, !insn.addr !412
  %16 = inttoptr i64 %15 to i32*, !insn.addr !412
  store i32 2037542765, i32* %16, align 4, !insn.addr !412
  %17 = add i64 %14, 12, !insn.addr !413
  %18 = inttoptr i64 %17 to i8*, !insn.addr !413
  store i8 0, i8* %18, align 1, !insn.addr !413
  %19 = call i32 @strlen(i8* %13), !insn.addr !414
  %20 = call i32 @shmdt(i64* %10), !insn.addr !415
  %21 = call i32 @shmctl(i32 %7, i32 0, %shmid_ds* null), !insn.addr !416
  %22 = zext i32 %19 to i64, !insn.addr !417
  store i64 %22, i64* %rax.0.reg2mem, !insn.addr !417
  br label %dec_label_pc_37c6, !insn.addr !417

dec_label_pc_37c6:                                ; preds = %dec_label_pc_3752, %dec_label_pc_372e, %dec_label_pc_36fd, %dec_label_pc_36b8, %dec_label_pc_3778
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !418

; uselistorder directives
  uselistorder i64 %14, { 1, 0 }
  uselistorder i64* %10, { 0, 2, 1, 4, 3 }
  uselistorder i64* %rax.0.reg2mem, { 0, 5, 1, 2, 3, 4 }
  uselistorder i32 (i8*)* @strlen, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder i8 0, { 1, 2, 3, 4, 0 }
  uselistorder i32 (i32)* @close, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder label %dec_label_pc_37c6, { 4, 0, 1, 2, 3 }
}

define i64 @call_shmget_shmat() local_unnamed_addr {
dec_label_pc_37c8:
  %0 = call i64 @param_shmget_shmat(), !insn.addr !419
  %1 = trunc i64 %0 to i32, !insn.addr !420
  %2 = icmp slt i32 %1, 1, !insn.addr !421
  %. = select i1 %2, i64 4294967295, i64 42
  ret i64 %., !insn.addr !422
}

define i64 @signal_handler(i64 %arg1) local_unnamed_addr {
dec_label_pc_37f0:
  store i32 1, i32* @global_var_8040, align 4, !insn.addr !423
  %0 = and i64 %arg1, 4294967295, !insn.addr !424
  %1 = trunc i64 %arg1 to i32, !insn.addr !425
  store i32 %1, i32* @global_var_8044, align 4, !insn.addr !425
  ret i64 %0, !insn.addr !426
}

define i64 @param_signal_handling() local_unnamed_addr {
dec_label_pc_3811:
  %rax.0.reg2mem = alloca i64, !insn.addr !427
  %.reg2mem15 = alloca i32, !insn.addr !427
  %stack_var_-12.125.reg2mem = alloca i32, !insn.addr !427
  %.reg2mem = alloca i32, !insn.addr !427
  %stack_var_-12.037.reg2mem = alloca i32, !insn.addr !427
  %0 = call void (i32)* @signal(i32 10, void (i32)* inttoptr (i64 14320 to void (i32)*)), !insn.addr !428
  %1 = icmp eq void (i32)* %0, inttoptr (i64 -1 to void (i32)*), !insn.addr !429
  %2 = icmp eq i1 %1, false, !insn.addr !430
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !430
  br i1 %2, label %dec_label_pc_3841, label %dec_label_pc_3946, !insn.addr !430

dec_label_pc_3841:                                ; preds = %dec_label_pc_3811
  %3 = call void (i32)* @signal(i32 14, void (i32)* inttoptr (i64 14320 to void (i32)*)), !insn.addr !431
  %4 = icmp eq void (i32)* %3, inttoptr (i64 -1 to void (i32)*), !insn.addr !432
  %5 = icmp eq i1 %4, false, !insn.addr !433
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !433
  br i1 %5, label %dec_label_pc_3865, label %dec_label_pc_3946, !insn.addr !433

dec_label_pc_3865:                                ; preds = %dec_label_pc_3841
  store i32 0, i32* @global_var_8040, align 4, !insn.addr !434
  %6 = call i32 @raise(i32 10), !insn.addr !435
  %7 = load i32, i32* @global_var_8040, align 4, !insn.addr !436
  %8 = icmp eq i32 %7, 0, !insn.addr !437
  %9 = icmp eq i1 %8, false, !insn.addr !438
  %brmerge = or i1 %9, xor (i1 icmp slt (i32 ptrtoint (i32* @global_var_3e8 to i32), i32 0), i1 icmp eq (i32 ptrtoint (i32* @global_var_3e8 to i32), i32 0))
  store i32 ptrtoint (i32* @global_var_3e8 to i32), i32* %stack_var_-12.037.reg2mem, !insn.addr !438
  store i32 %7, i32* %.reg2mem, !insn.addr !438
  br i1 %brmerge, label %dec_label_pc_38a3, label %dec_label_pc_3882, !insn.addr !438

dec_label_pc_3882:                                ; preds = %dec_label_pc_3865, %dec_label_pc_3896
  %10 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !439
  %11 = load i32, i32* @global_var_8040, align 4, !insn.addr !436
  %12 = icmp eq i32 %11, 0, !insn.addr !437
  %13 = icmp eq i1 %12, false, !insn.addr !438
  store i32 %11, i32* %.reg2mem, !insn.addr !438
  br i1 %13, label %dec_label_pc_38a3, label %dec_label_pc_3896, !insn.addr !438

dec_label_pc_3896:                                ; preds = %dec_label_pc_3882
  %stack_var_-12.037.reload = load i32, i32* %stack_var_-12.037.reg2mem
  %14 = add i32 %stack_var_-12.037.reload, -1, !insn.addr !440
  %15 = icmp eq i32 %14, 0, !insn.addr !441
  %16 = icmp slt i32 %14, 0, !insn.addr !441
  %17 = icmp eq i1 %16, false, !insn.addr !442
  %18 = icmp eq i1 %15, false, !insn.addr !442
  %19 = icmp eq i1 %17, %18, !insn.addr !442
  store i32 %14, i32* %stack_var_-12.037.reg2mem, !insn.addr !442
  store i32 %11, i32* %.reg2mem, !insn.addr !442
  br i1 %19, label %dec_label_pc_3882, label %dec_label_pc_38a3, !insn.addr !442

dec_label_pc_38a3:                                ; preds = %dec_label_pc_3865, %dec_label_pc_3896, %dec_label_pc_3882
  %.reload = load i32, i32* %.reg2mem, !insn.addr !443
  %20 = icmp eq i32 %.reload, 0, !insn.addr !444
  %21 = icmp eq i1 %20, false, !insn.addr !445
  store i64 4294967293, i64* %rax.0.reg2mem, !insn.addr !445
  br i1 %21, label %dec_label_pc_38b7, label %dec_label_pc_3946, !insn.addr !445

dec_label_pc_38b7:                                ; preds = %dec_label_pc_38a3
  %22 = load i32, i32* @global_var_8044, align 4, !insn.addr !446
  %23 = icmp eq i32 %22, 10, !insn.addr !447
  store i64 4294967292, i64* %rax.0.reg2mem, !insn.addr !448
  br i1 %23, label %dec_label_pc_38c9, label %dec_label_pc_3946, !insn.addr !448

dec_label_pc_38c9:                                ; preds = %dec_label_pc_38b7
  store i32 0, i32* @global_var_8040, align 4, !insn.addr !449
  %24 = call i32 @alarm(i32 1), !insn.addr !450
  %25 = load i32, i32* @global_var_8040, align 4, !insn.addr !451
  %26 = icmp eq i32 %25, 0, !insn.addr !452
  %27 = icmp eq i1 %26, false, !insn.addr !453
  %brmerge14 = or i1 %27, xor (i1 icmp slt (i32 ptrtoint (i64* @global_var_7d0 to i32), i32 0), i1 icmp eq (i32 ptrtoint (i64* @global_var_7d0 to i32), i32 0))
  store i32 ptrtoint (i64* @global_var_7d0 to i32), i32* %stack_var_-12.125.reg2mem, !insn.addr !453
  store i32 %25, i32* %.reg2mem15, !insn.addr !453
  br i1 %brmerge14, label %dec_label_pc_3907, label %dec_label_pc_38e6, !insn.addr !453

dec_label_pc_38e6:                                ; preds = %dec_label_pc_38c9, %dec_label_pc_38fa
  %28 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !454
  %29 = load i32, i32* @global_var_8040, align 4, !insn.addr !451
  %30 = icmp eq i32 %29, 0, !insn.addr !452
  %31 = icmp eq i1 %30, false, !insn.addr !453
  store i32 %29, i32* %.reg2mem15, !insn.addr !453
  br i1 %31, label %dec_label_pc_3907, label %dec_label_pc_38fa, !insn.addr !453

dec_label_pc_38fa:                                ; preds = %dec_label_pc_38e6
  %stack_var_-12.125.reload = load i32, i32* %stack_var_-12.125.reg2mem
  %32 = add i32 %stack_var_-12.125.reload, -1, !insn.addr !455
  %33 = icmp eq i32 %32, 0, !insn.addr !456
  %34 = icmp slt i32 %32, 0, !insn.addr !456
  %35 = icmp eq i1 %34, false, !insn.addr !457
  %36 = icmp eq i1 %33, false, !insn.addr !457
  %37 = icmp eq i1 %35, %36, !insn.addr !457
  store i32 %32, i32* %stack_var_-12.125.reg2mem, !insn.addr !457
  store i32 %29, i32* %.reg2mem15, !insn.addr !457
  br i1 %37, label %dec_label_pc_38e6, label %dec_label_pc_3907, !insn.addr !457

dec_label_pc_3907:                                ; preds = %dec_label_pc_38c9, %dec_label_pc_38fa, %dec_label_pc_38e6
  %.reload16 = load i32, i32* %.reg2mem15, !insn.addr !458
  %38 = icmp ne i32 %.reload16, 0, !insn.addr !459
  %39 = load i32, i32* @global_var_8044, align 4, !insn.addr !460
  %40 = icmp eq i32 %39, 14, !insn.addr !461
  %or.cond = icmp eq i1 %38, %40
  store i64 4294967291, i64* %rax.0.reg2mem, !insn.addr !462
  br i1 %or.cond, label %dec_label_pc_3923, label %dec_label_pc_3946, !insn.addr !462

dec_label_pc_3923:                                ; preds = %dec_label_pc_3907
  %41 = call void (i32)* @signal(i32 10, void (i32)* null), !insn.addr !463
  %42 = call void (i32)* @signal(i32 14, void (i32)* null), !insn.addr !464
  store i64 42, i64* %rax.0.reg2mem, !insn.addr !465
  br label %dec_label_pc_3946, !insn.addr !465

dec_label_pc_3946:                                ; preds = %dec_label_pc_3907, %dec_label_pc_38b7, %dec_label_pc_38a3, %dec_label_pc_3841, %dec_label_pc_3811, %dec_label_pc_3923
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !466

; uselistorder directives
  uselistorder i32 %29, { 1, 0, 2 }
  uselistorder i32 %11, { 1, 0, 2 }
  uselistorder i32* %stack_var_-12.037.reg2mem, { 2, 0, 1 }
  uselistorder i32* %.reg2mem, { 0, 2, 1, 3 }
  uselistorder i32* %stack_var_-12.125.reg2mem, { 2, 0, 1 }
  uselistorder i32* %.reg2mem15, { 0, 2, 1, 3 }
  uselistorder i64* %rax.0.reg2mem, { 0, 6, 1, 2, 3, 4, 5 }
  uselistorder i32 ptrtoint (i64* @global_var_7d0 to i32), { 0, 2, 1 }
  uselistorder i32* @global_var_8044, { 0, 2, 1 }
  uselistorder i32* @global_var_8040, { 6, 1, 5, 4, 0, 3, 2 }
  uselistorder i32 14, { 1, 0, 2 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i32 10, { 1, 0, 2, 3, 4 }
  uselistorder label %dec_label_pc_3946, { 5, 0, 1, 2, 3, 4 }
  uselistorder label %dec_label_pc_3907, { 1, 2, 0 }
  uselistorder label %dec_label_pc_38e6, { 1, 0 }
  uselistorder label %dec_label_pc_38a3, { 1, 2, 0 }
  uselistorder label %dec_label_pc_3882, { 1, 0 }
}

define i64 @call_signal_handling() local_unnamed_addr {
dec_label_pc_3948:
  %0 = call i64 @param_signal_handling(), !insn.addr !467
  ret i64 %0, !insn.addr !468
}

define i64 @test_system_calls() local_unnamed_addr {
dec_label_pc_3957:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_5248 to i8*)), !insn.addr !469
  %1 = call i64 @call_linux_syscall(), !insn.addr !470
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5263 to i8*)), !insn.addr !471
  %3 = call i64 @call_win32_api(), !insn.addr !472
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_527f to i8*)), !insn.addr !473
  %5 = call i64 @call_fork_exec(), !insn.addr !474
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_529b to i8*)), !insn.addr !475
  %7 = call i64 @call_pipe_communication(), !insn.addr !476
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_52b7 to i8*)), !insn.addr !477
  %9 = call i64 @call_socket_create(), !insn.addr !478
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_52d3 to i8*)), !insn.addr !479
  %11 = call i64 @call_shmget_shmat(), !insn.addr !480
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_52ef to i8*)), !insn.addr !481
  %13 = call i64 @call_signal_handling(), !insn.addr !482
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_530b to i8*)), !insn.addr !483
  %15 = sext i32 %14 to i64, !insn.addr !483
  ret i64 %15, !insn.addr !484
}

define i64 @thread_compute(i64 %arg1) local_unnamed_addr {
dec_label_pc_3a51:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = mul i32 %2, %2, !insn.addr !485
  %4 = call i64* @malloc(i32 4), !insn.addr !486
  %5 = ptrtoint i64* %4 to i64, !insn.addr !486
  %6 = bitcast i64* %4 to i32*, !insn.addr !487
  store i32 %3, i32* %6, align 4, !insn.addr !487
  ret i64 %5, !insn.addr !488

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i64 @param_pthread_create(i64 %arg1) local_unnamed_addr {
dec_label_pc_3a98:
  %rax.0.reg2mem = alloca i64, !insn.addr !489
  %storemerge.reg2mem = alloca i64, !insn.addr !489
  %stack_var_-24 = alloca i64, align 8
  %stack_var_-32 = alloca i32, align 4
  %stack_var_-44 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !490
  %sext = mul i64 %arg1, 4294967296
  %1 = ashr exact i64 %sext, 32, !insn.addr !491
  store i64 %1, i64* %stack_var_-44, align 8, !insn.addr !491
  %2 = call i32 @pthread_create(i32* nonnull %stack_var_-32, i64* null, i64* (i64*)* inttoptr (i64 14929 to i64* (i64*)*), i64* nonnull %stack_var_-44), !insn.addr !492
  %3 = icmp eq i32 %2, 0, !insn.addr !493
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !494
  br i1 %3, label %dec_label_pc_3aeb, label %dec_label_pc_3b16, !insn.addr !494

dec_label_pc_3aeb:                                ; preds = %dec_label_pc_3a98
  %4 = load i32, i32* %stack_var_-32, align 4, !insn.addr !495
  %5 = bitcast i64* %stack_var_-24 to i64**, !insn.addr !496
  %6 = call i32 @pthread_join(i32 %4, i64** nonnull %5), !insn.addr !496
  %7 = load i64, i64* %stack_var_-24, align 8
  %8 = inttoptr i64 %7 to i32*, !insn.addr !497
  %9 = load i32, i32* %8, align 4, !insn.addr !497
  %10 = inttoptr i64 %7 to i64*, !insn.addr !498
  call void @free(i64* %10), !insn.addr !498
  %11 = zext i32 %9 to i64, !insn.addr !499
  store i64 %11, i64* %storemerge.reg2mem, !insn.addr !499
  br label %dec_label_pc_3b16, !insn.addr !499

dec_label_pc_3b16:                                ; preds = %dec_label_pc_3a98, %dec_label_pc_3aeb
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %12 = call i64 @__readfsqword(i64 40), !insn.addr !500
  %13 = icmp eq i64 %0, %12, !insn.addr !500
  store i64 %storemerge.reload, i64* %rax.0.reg2mem, !insn.addr !501
  br i1 %13, label %dec_label_pc_3b2a, label %dec_label_pc_3b25, !insn.addr !501

dec_label_pc_3b25:                                ; preds = %dec_label_pc_3b16
  call void @__stack_chk_fail(), !insn.addr !502
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !502
  br label %dec_label_pc_3b2a, !insn.addr !502

dec_label_pc_3b2a:                                ; preds = %dec_label_pc_3b25, %dec_label_pc_3b16
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !503

; uselistorder directives
  uselistorder i64* %stack_var_-44, { 1, 0 }
  uselistorder i64* %stack_var_-24, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_3b16, { 1, 0 }
}

define i64 @call_pthread_create() local_unnamed_addr {
dec_label_pc_3b2c:
  %0 = call i64 @param_pthread_create(i64 7), !insn.addr !504
  ret i64 %0, !insn.addr !505
}

define i64 @thread_sum(i64 %arg1) local_unnamed_addr {
dec_label_pc_3b40:
  %storemerge1.reg2mem = alloca i32, !insn.addr !506
  %.reg2mem = alloca i32, !insn.addr !506
  %rdi = alloca i64, align 8
  %0 = add i64 %arg1, 8, !insn.addr !507
  %1 = inttoptr i64 %0 to i32*, !insn.addr !507
  store i32 0, i32* %1, align 4, !insn.addr !507
  %2 = bitcast i64* %rdi to i32*
  %3 = load i32, i32* %2, align 8, !insn.addr !508
  %4 = add i64 %arg1, 4, !insn.addr !509
  %5 = inttoptr i64 %4 to i32*, !insn.addr !509
  %6 = load i32, i32* %5, align 4, !insn.addr !509
  %7 = zext i32 %6 to i64, !insn.addr !509
  %8 = sext i32 %3 to i64, !insn.addr !510
  %9 = icmp sgt i64 %8, %7, !insn.addr !510
  store i32 0, i32* %.reg2mem, !insn.addr !510
  store i32 %3, i32* %storemerge1.reg2mem, !insn.addr !510
  br i1 %9, label %dec_label_pc_3b8d, label %dec_label_pc_3b6a, !insn.addr !510

dec_label_pc_3b6a:                                ; preds = %dec_label_pc_3b40, %dec_label_pc_3b6a
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %.reload = load i32, i32* %.reg2mem, !insn.addr !511
  %10 = add i32 %storemerge1.reload, %.reload, !insn.addr !512
  store i32 %10, i32* %1, align 4, !insn.addr !513
  %11 = add i32 %storemerge1.reload, 1, !insn.addr !514
  %12 = load i32, i32* %5, align 4, !insn.addr !509
  %13 = zext i32 %12 to i64, !insn.addr !509
  %14 = sext i32 %11 to i64, !insn.addr !510
  %15 = icmp sgt i64 %14, %13, !insn.addr !510
  store i32 %10, i32* %.reg2mem, !insn.addr !510
  store i32 %11, i32* %storemerge1.reg2mem, !insn.addr !510
  br i1 %15, label %dec_label_pc_3b8d, label %dec_label_pc_3b6a, !insn.addr !510

dec_label_pc_3b8d:                                ; preds = %dec_label_pc_3b6a, %dec_label_pc_3b40
  ret i64 0, !insn.addr !515

; uselistorder directives
  uselistorder i32* %5, { 1, 0 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge1.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_3b6a, { 1, 0 }
}

define i64 @param_pthread_join() local_unnamed_addr {
dec_label_pc_3b94:
  %rax.1.reg2mem = alloca i64, !insn.addr !516
  %rax.0.reg2mem = alloca i64, !insn.addr !516
  %stack_var_-96.04.reg2mem = alloca i32, !insn.addr !516
  %indvars.iv.reg2mem = alloca i64, !insn.addr !516
  %indvars.iv7.reg2mem = alloca i64, !insn.addr !516
  %stack_var_-88 = alloca i64, align 8
  %stack_var_-56 = alloca i32, align 4
  %stack_var_-8 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !517
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !518
  store i32 1, i32* %stack_var_-56, align 4, !insn.addr !519
  %2 = ptrtoint i32* %stack_var_-56 to i64, !insn.addr !520
  %3 = ptrtoint i64* %stack_var_-88 to i64, !insn.addr !521
  store i64 0, i64* %indvars.iv7.reg2mem
  br label %dec_label_pc_3bf7

dec_label_pc_3bf7:                                ; preds = %dec_label_pc_3b94, %dec_label_pc_3c48
  %indvars.iv7.reload = load i64, i64* %indvars.iv7.reg2mem
  %4 = mul nuw nsw i64 %indvars.iv7.reload, 12, !insn.addr !522
  %5 = add i64 %4, %2, !insn.addr !523
  %6 = mul i64 %indvars.iv7.reload, 8, !insn.addr !524
  %7 = add i64 %6, %3, !insn.addr !525
  %8 = inttoptr i64 %7 to i32*, !insn.addr !526
  %9 = inttoptr i64 %5 to i64*, !insn.addr !526
  %10 = call i32 @pthread_create(i32* %8, i64* null, i64* (i64*)* inttoptr (i64 15168 to i64* (i64*)*), i64* %9), !insn.addr !526
  %11 = icmp eq i32 %10, 0, !insn.addr !527
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !528
  br i1 %11, label %dec_label_pc_3c48, label %dec_label_pc_3cac, !insn.addr !528

dec_label_pc_3c48:                                ; preds = %dec_label_pc_3bf7
  %indvars.iv.next8 = add nuw nsw i64 %indvars.iv7.reload, 1
  %12 = icmp ult i64 %indvars.iv.next8, 3, !insn.addr !529
  store i64 %indvars.iv.next8, i64* %indvars.iv7.reg2mem, !insn.addr !529
  br i1 %12, label %dec_label_pc_3bf7, label %dec_label_pc_3ca3.preheader, !insn.addr !529

dec_label_pc_3ca3.preheader:                      ; preds = %dec_label_pc_3c48
  %13 = add i64 %0, -80, !insn.addr !530
  %14 = add i64 %0, -40
  store i64 0, i64* %indvars.iv.reg2mem
  store i32 0, i32* %stack_var_-96.04.reg2mem
  br label %dec_label_pc_3c5e

dec_label_pc_3c5e:                                ; preds = %dec_label_pc_3ca3.preheader, %dec_label_pc_3c80
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %15 = mul i64 %indvars.iv.reload, 8, !insn.addr !530
  %16 = add i64 %13, %15, !insn.addr !530
  %17 = inttoptr i64 %16 to i64*, !insn.addr !530
  %18 = load i64, i64* %17, align 8, !insn.addr !530
  %19 = trunc i64 %18 to i32, !insn.addr !531
  %20 = call i32 @pthread_join(i32 %19, i64** null), !insn.addr !531
  %21 = icmp eq i32 %20, 0, !insn.addr !532
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !533
  br i1 %21, label %dec_label_pc_3c80, label %dec_label_pc_3cac, !insn.addr !533

dec_label_pc_3c80:                                ; preds = %dec_label_pc_3c5e
  %stack_var_-96.04.reload = load i32, i32* %stack_var_-96.04.reg2mem
  %22 = mul nuw nsw i64 %indvars.iv.reload, 12, !insn.addr !534
  %23 = add i64 %14, %22, !insn.addr !535
  %24 = inttoptr i64 %23 to i32*, !insn.addr !536
  %25 = load i32, i32* %24, align 4, !insn.addr !536
  %26 = add i32 %25, %stack_var_-96.04.reload, !insn.addr !537
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %27 = icmp ult i64 %indvars.iv.next, 3, !insn.addr !538
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !538
  store i32 %26, i32* %stack_var_-96.04.reg2mem, !insn.addr !538
  br i1 %27, label %dec_label_pc_3c5e, label %dec_label_pc_3ca9, !insn.addr !538

dec_label_pc_3ca9:                                ; preds = %dec_label_pc_3c80
  %28 = zext i32 %26 to i64, !insn.addr !539
  store i64 %28, i64* %rax.0.reg2mem, !insn.addr !539
  br label %dec_label_pc_3cac, !insn.addr !539

dec_label_pc_3cac:                                ; preds = %dec_label_pc_3bf7, %dec_label_pc_3c5e, %dec_label_pc_3ca9
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %29 = call i64 @__readfsqword(i64 40), !insn.addr !540
  %30 = icmp eq i64 %1, %29, !insn.addr !540
  store i64 %rax.0.reload, i64* %rax.1.reg2mem, !insn.addr !541
  br i1 %30, label %dec_label_pc_3cc0, label %dec_label_pc_3cbb, !insn.addr !541

dec_label_pc_3cbb:                                ; preds = %dec_label_pc_3cac
  call void @__stack_chk_fail(), !insn.addr !542
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.1.reg2mem, !insn.addr !542
  br label %dec_label_pc_3cc0, !insn.addr !542

dec_label_pc_3cc0:                                ; preds = %dec_label_pc_3cbb, %dec_label_pc_3cac
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !543

; uselistorder directives
  uselistorder i32 %26, { 1, 0 }
  uselistorder i64 %indvars.iv7.reload, { 0, 2, 1 }
  uselistorder i64* %indvars.iv7.reg2mem, { 1, 0, 2 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-96.04.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64 3, { 1, 0 }
  uselistorder i64 12, { 1, 0, 4, 2, 3 }
  uselistorder label %dec_label_pc_3cac, { 2, 1, 0 }
  uselistorder label %dec_label_pc_3c5e, { 1, 0 }
  uselistorder label %dec_label_pc_3bf7, { 1, 0 }
}

define i64 @call_pthread_join() local_unnamed_addr {
dec_label_pc_3cc2:
  %0 = call i64 @param_pthread_join(), !insn.addr !544
  ret i64 %0, !insn.addr !545
}

define i64 @thread_increment(i64 %arg1) local_unnamed_addr {
dec_label_pc_3cd6:
  %0 = alloca i64
  %storemerge1.reg2mem = alloca i32, !insn.addr !546
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp sgt i32 %2, 0, !insn.addr !547
  store i32 0, i32* %storemerge1.reg2mem, !insn.addr !547
  br i1 %3, label %dec_label_pc_3cf8, label %dec_label_pc_3d3b, !insn.addr !547

dec_label_pc_3cf8:                                ; preds = %dec_label_pc_3cd6, %dec_label_pc_3cf8
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %4 = call i32 @pthread_mutex_lock(i64* nonnull @global_var_8060), !insn.addr !548
  store i32 ptrtoint (i32* @global_var_8049 to i32), i32* @global_var_8048, align 4, !insn.addr !549
  %5 = call i32 @pthread_mutex_unlock(i64* nonnull @global_var_8060), !insn.addr !550
  %6 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !551
  %7 = add nuw nsw i32 %storemerge1.reload, 1, !insn.addr !552
  %exitcond = icmp eq i32 %7, %2
  store i32 %7, i32* %storemerge1.reg2mem, !insn.addr !547
  br i1 %exitcond, label %dec_label_pc_3d3b, label %dec_label_pc_3cf8, !insn.addr !547

dec_label_pc_3d3b:                                ; preds = %dec_label_pc_3cf8, %dec_label_pc_3cd6
  ret i64 0, !insn.addr !553

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32* %storemerge1.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i32)* @usleep, { 2, 1, 0, 3 }
  uselistorder label %dec_label_pc_3cf8, { 1, 0 }
}

define i64 @param_mutex_lock(i64 %arg1, i64* %arg2) local_unnamed_addr {
dec_label_pc_3d42:
  %rax.0.reg2mem = alloca i64, !insn.addr !554
  %indvars.iv.reg2mem = alloca i64, !insn.addr !554
  %indvars.iv10.reg2mem = alloca i64, !insn.addr !554
  %stack_var_-48 = alloca i64*, align 8
  store i64* %arg2, i64** %stack_var_-48, align 8, !insn.addr !555
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 8, !insn.addr !556
  %1 = call i64* @malloc(i32 %0), !insn.addr !556
  %2 = icmp eq i64* %1, null, !insn.addr !557
  %3 = icmp eq i1 %2, false, !insn.addr !558
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !558
  br i1 %3, label %dec_label_pc_3d7a, label %dec_label_pc_3e48, !insn.addr !558

dec_label_pc_3d7a:                                ; preds = %dec_label_pc_3d42
  %sext = mul i64 %arg1, 4294967296
  %4 = ashr exact i64 %sext, 32, !insn.addr !559
  store i32 0, i32* @global_var_8048, align 4, !insn.addr !560
  %5 = trunc i64 %4 to i32, !insn.addr !561
  %6 = icmp sgt i32 %5, 0
  br i1 %6, label %dec_label_pc_3d8d.lr.ph, label %dec_label_pc_3e19, !insn.addr !562

dec_label_pc_3d8d.lr.ph:                          ; preds = %dec_label_pc_3d7a
  %7 = ptrtoint i64* %1 to i64, !insn.addr !556
  %8 = bitcast i64** %stack_var_-48 to i64*, !insn.addr !563
  store i64 0, i64* %indvars.iv10.reg2mem
  br label %dec_label_pc_3d8d

dec_label_pc_3d8d:                                ; preds = %dec_label_pc_3d8d.lr.ph, %dec_label_pc_3dd8
  %indvars.iv10.reload = load i64, i64* %indvars.iv10.reg2mem
  %9 = mul i64 %indvars.iv10.reload, 8, !insn.addr !564
  %10 = add i64 %9, %7, !insn.addr !565
  %11 = inttoptr i64 %10 to i32*, !insn.addr !563
  %12 = call i32 @pthread_create(i32* %11, i64* null, i64* (i64*)* inttoptr (i64 15574 to i64* (i64*)*), i64* nonnull %8), !insn.addr !563
  %13 = icmp eq i32 %12, 0, !insn.addr !566
  br i1 %13, label %dec_label_pc_3dd8, label %dec_label_pc_3dc1, !insn.addr !567

dec_label_pc_3dc1:                                ; preds = %dec_label_pc_3d8d
  call void @free(i64* %1), !insn.addr !568
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !569
  br label %dec_label_pc_3e48, !insn.addr !569

dec_label_pc_3dd8:                                ; preds = %dec_label_pc_3d8d
  %indvars.iv.next11 = add nuw nsw i64 %indvars.iv10.reload, 1
  %14 = icmp slt i64 %indvars.iv.next11, %4, !insn.addr !562
  store i64 %indvars.iv.next11, i64* %indvars.iv10.reg2mem, !insn.addr !562
  br i1 %14, label %dec_label_pc_3d8d, label %dec_label_pc_3de9.preheader, !insn.addr !562

dec_label_pc_3de9.preheader:                      ; preds = %dec_label_pc_3dd8
  %wide.trip.count = and i64 %4, 4294967295
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_3de9

dec_label_pc_3de9:                                ; preds = %dec_label_pc_3de9.preheader, %dec_label_pc_3de9
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %15 = mul i64 %indvars.iv.reload, 8, !insn.addr !570
  %16 = add i64 %15, %7, !insn.addr !571
  %17 = inttoptr i64 %16 to i64*, !insn.addr !572
  %18 = load i64, i64* %17, align 8, !insn.addr !572
  %19 = trunc i64 %18 to i32, !insn.addr !573
  %20 = call i32 @pthread_join(i32 %19, i64** null), !insn.addr !573
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !574
  br i1 %exitcond, label %dec_label_pc_3e19, label %dec_label_pc_3de9, !insn.addr !574

dec_label_pc_3e19:                                ; preds = %dec_label_pc_3de9, %dec_label_pc_3d7a
  call void @free(i64* %1), !insn.addr !575
  %21 = load i64*, i64** %stack_var_-48, align 8, !insn.addr !576
  %22 = ptrtoint i64* %21 to i64
  %sext4 = mul i64 %22, 4294967296
  %23 = ashr exact i64 %sext4, 32, !insn.addr !577
  %24 = mul nsw i64 %23, %4, !insn.addr !577
  %25 = trunc i64 %24 to i32, !insn.addr !577
  %26 = load i32, i32* @global_var_8048, align 4, !insn.addr !578
  %27 = icmp eq i32 %26, %25, !insn.addr !579
  %28 = icmp eq i1 %27, false, !insn.addr !580
  %. = select i1 %28, i64 4294967293, i64 42
  store i64 %., i64* %rax.0.reg2mem, !insn.addr !581
  br label %dec_label_pc_3e48, !insn.addr !581

dec_label_pc_3e48:                                ; preds = %dec_label_pc_3e19, %dec_label_pc_3d42, %dec_label_pc_3dc1
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !582

; uselistorder directives
  uselistorder i64 %4, { 0, 2, 1, 3 }
  uselistorder i64* %1, { 1, 0, 3, 2 }
  uselistorder i64** %stack_var_-48, { 1, 2, 0 }
  uselistorder i64* %indvars.iv10.reg2mem, { 1, 0, 2 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.0.reg2mem, { 0, 1, 3, 2 }
  uselistorder i32* @global_var_8048, { 2, 1, 0 }
  uselistorder label %dec_label_pc_3e48, { 0, 2, 1 }
  uselistorder label %dec_label_pc_3de9, { 1, 0 }
  uselistorder label %dec_label_pc_3d8d, { 1, 0 }
}

define i64 @call_mutex_lock() local_unnamed_addr {
dec_label_pc_3e4a:
  %0 = call i64 @param_mutex_lock(i64 4, i64* bitcast (i32* @global_var_3e8 to i64*)), !insn.addr !583
  ret i64 %0, !insn.addr !584
}

define i64 @consumer_thread(i64 %arg1) local_unnamed_addr {
dec_label_pc_3e63:
  %0 = call i32 @pthread_mutex_lock(i64* nonnull @global_var_80a0), !insn.addr !585
  %1 = load i32, i32* @global_var_8110, align 4, !insn.addr !586
  %2 = icmp eq i32 %1, 0, !insn.addr !587
  br i1 %2, label %dec_label_pc_3e84, label %dec_label_pc_3ea7, !insn.addr !588

dec_label_pc_3e84:                                ; preds = %dec_label_pc_3e63, %dec_label_pc_3e84
  %3 = call i32 @pthread_cond_wait(i64* nonnull @global_var_80e0, i64* nonnull @global_var_80a0), !insn.addr !589
  %4 = load i32, i32* @global_var_8110, align 4, !insn.addr !586
  %5 = icmp eq i32 %4, 0, !insn.addr !587
  br i1 %5, label %dec_label_pc_3e84, label %dec_label_pc_3ea7, !insn.addr !588

dec_label_pc_3ea7:                                ; preds = %dec_label_pc_3e84, %dec_label_pc_3e63
  %6 = load i32, i32* @global_var_8114, align 4, !insn.addr !590
  %7 = call i32 @pthread_mutex_unlock(i64* nonnull @global_var_80a0), !insn.addr !591
  %8 = call i64* @malloc(i32 4), !insn.addr !592
  %9 = ptrtoint i64* %8 to i64, !insn.addr !592
  %10 = bitcast i64* %8 to i32*, !insn.addr !593
  store i32 %6, i32* %10, align 4, !insn.addr !593
  ret i64 %9, !insn.addr !594

; uselistorder directives
  uselistorder i32 4, { 1, 2, 3, 0 }
  uselistorder label %dec_label_pc_3e84, { 1, 0 }
}

define i64 @producer_thread(i64 %arg1) local_unnamed_addr {
dec_label_pc_3edc:
  %0 = call i32 @sleep(i32 1), !insn.addr !595
  %1 = call i32 @pthread_mutex_lock(i64* nonnull @global_var_80a0), !insn.addr !596
  store i32 42, i32* @global_var_8114, align 4, !insn.addr !597
  store i32 1, i32* @global_var_8110, align 4, !insn.addr !598
  %2 = call i32 @pthread_cond_signal(i64* nonnull @global_var_80e0), !insn.addr !599
  %3 = call i32 @pthread_mutex_unlock(i64* nonnull @global_var_80a0), !insn.addr !600
  ret i64 0, !insn.addr !601

; uselistorder directives
  uselistorder i32 (i64*)* @pthread_mutex_unlock, { 2, 1, 0, 3 }
  uselistorder i32 42, { 1, 0 }
  uselistorder i32 (i64*)* @pthread_mutex_lock, { 2, 1, 0, 3 }
  uselistorder i64* @global_var_80a0, { 0, 1, 3, 2, 4 }
}

define i64 @param_condition_variable() local_unnamed_addr {
dec_label_pc_3f3e:
  %rax.1.reg2mem = alloca i64, !insn.addr !602
  %rax.0.reg2mem = alloca i64, !insn.addr !602
  %stack_var_-24 = alloca i64, align 8
  %stack_var_-40 = alloca i32, align 4
  %stack_var_-32 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !603
  store i32 0, i32* @global_var_8110, align 4, !insn.addr !604
  store i32 0, i32* @global_var_8114, align 4, !insn.addr !605
  %1 = call i32 @pthread_create(i32* nonnull %stack_var_-32, i64* null, i64* (i64*)* inttoptr (i64 15971 to i64* (i64*)*), i64* null), !insn.addr !606
  %2 = icmp eq i32 %1, 0, !insn.addr !607
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !608
  br i1 %2, label %dec_label_pc_3f95, label %dec_label_pc_4005, !insn.addr !608

dec_label_pc_3f95:                                ; preds = %dec_label_pc_3f3e
  %3 = call i32 @pthread_create(i32* nonnull %stack_var_-40, i64* null, i64* (i64*)* inttoptr (i64 16092 to i64* (i64*)*), i64* null), !insn.addr !609
  %4 = icmp eq i32 %3, 0, !insn.addr !610
  %5 = load i32, i32* %stack_var_-32, align 4
  br i1 %4, label %dec_label_pc_3fc9, label %dec_label_pc_3fb6, !insn.addr !611

dec_label_pc_3fb6:                                ; preds = %dec_label_pc_3f95
  %6 = call i32 @pthread_cancel(i32 %5), !insn.addr !612
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !613
  br label %dec_label_pc_4005, !insn.addr !613

dec_label_pc_3fc9:                                ; preds = %dec_label_pc_3f95
  %7 = bitcast i64* %stack_var_-24 to i64**, !insn.addr !614
  %8 = call i32 @pthread_join(i32 %5, i64** nonnull %7), !insn.addr !614
  %9 = load i32, i32* %stack_var_-40, align 4, !insn.addr !615
  %10 = call i32 @pthread_join(i32 %9, i64** null), !insn.addr !616
  %11 = load i64, i64* %stack_var_-24, align 8
  %12 = inttoptr i64 %11 to i32*, !insn.addr !617
  %13 = load i32, i32* %12, align 4, !insn.addr !617
  %14 = inttoptr i64 %11 to i64*, !insn.addr !618
  call void @free(i64* %14), !insn.addr !618
  %15 = zext i32 %13 to i64, !insn.addr !619
  store i64 %15, i64* %rax.0.reg2mem, !insn.addr !619
  br label %dec_label_pc_4005, !insn.addr !619

dec_label_pc_4005:                                ; preds = %dec_label_pc_3f3e, %dec_label_pc_3fc9, %dec_label_pc_3fb6
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %16 = call i64 @__readfsqword(i64 40), !insn.addr !620
  %17 = icmp eq i64 %0, %16, !insn.addr !620
  store i64 %rax.0.reload, i64* %rax.1.reg2mem, !insn.addr !621
  br i1 %17, label %dec_label_pc_4019, label %dec_label_pc_4014, !insn.addr !621

dec_label_pc_4014:                                ; preds = %dec_label_pc_4005
  call void @__stack_chk_fail(), !insn.addr !622
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.1.reg2mem, !insn.addr !622
  br label %dec_label_pc_4019, !insn.addr !622

dec_label_pc_4019:                                ; preds = %dec_label_pc_4014, %dec_label_pc_4005
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !623

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i64* %stack_var_-24, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32* @global_var_8114, { 2, 1, 0 }
  uselistorder i32* @global_var_8110, { 3, 2, 1, 0 }
  uselistorder label %dec_label_pc_4005, { 1, 2, 0 }
}

define i64 @call_condition_variable() local_unnamed_addr {
dec_label_pc_401b:
  %0 = call i64 @param_condition_variable(), !insn.addr !624
  ret i64 %0, !insn.addr !625
}

define i64 @thread_atomic_increment(i64 %arg1) local_unnamed_addr {
dec_label_pc_402f:
  %0 = alloca i64
  %rax.0.reg2mem = alloca i64, !insn.addr !626
  %1 = load i64, i64* %0
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !627
  %3 = trunc i64 %1 to i32
  %4 = icmp sgt i32 %3, 0, !insn.addr !628
  br i1 %4, label %dec_label_pc_4060.lr.ph, label %dec_label_pc_409f, !insn.addr !628

dec_label_pc_4060.lr.ph:                          ; preds = %dec_label_pc_402f
  %5 = add i32 %3, -1
  %6 = icmp eq i32 %5, ptrtoint (i64* @global_var_8119 to i32), !insn.addr !629
  %7 = add i32 %3, add (i32 ptrtoint (i32* @global_var_3e8 to i32), i32 -1), !insn.addr !630
  %8 = select i1 %6, i32 %7, i32 ptrtoint (i64* @global_var_8119 to i32), !insn.addr !629
  store i32 %8, i32* @global_var_8118, align 4
  br label %dec_label_pc_409f

dec_label_pc_409f:                                ; preds = %dec_label_pc_4060.lr.ph, %dec_label_pc_402f
  %9 = call i64 @__readfsqword(i64 40), !insn.addr !631
  %10 = icmp eq i64 %2, %9, !insn.addr !631
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !632
  br i1 %10, label %dec_label_pc_40b8, label %dec_label_pc_40b3, !insn.addr !632

dec_label_pc_40b3:                                ; preds = %dec_label_pc_409f
  call void @__stack_chk_fail(), !insn.addr !633
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !633
  br label %dec_label_pc_40b8, !insn.addr !633

dec_label_pc_40b8:                                ; preds = %dec_label_pc_40b3, %dec_label_pc_409f
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !634

; uselistorder directives
  uselistorder i32 %3, { 0, 2, 1 }
  uselistorder i32 ptrtoint (i32* @global_var_3e8 to i32), { 1, 4, 6, 5, 0, 3, 2 }
  uselistorder i32 ptrtoint (i64* @global_var_8119 to i32), { 1, 0 }
}

define i64 @thread_atomic_load_store(i64 %arg1) local_unnamed_addr {
dec_label_pc_40ba:
  %0 = load i32, i32* @global_var_8118, align 4, !insn.addr !635
  %1 = add i32 %0, 100, !insn.addr !636
  store i32 %1, i32* @global_var_8118, align 4, !insn.addr !637
  ret i64 0, !insn.addr !638
}

define i64 @param_atomic_ops(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_40e2:
  %rax.1.reg2mem = alloca i64, !insn.addr !639
  %rax.0.reg2mem = alloca i64, !insn.addr !639
  %indvars.iv.reg2mem = alloca i64, !insn.addr !639
  %indvars.iv10.reg2mem = alloca i64, !insn.addr !639
  %stack_var_-32 = alloca i32, align 4
  %stack_var_-64 = alloca i64, align 8
  %sext4 = mul i64 %arg2, 4294967296
  %0 = ashr exact i64 %sext4, 32, !insn.addr !640
  store i64 %0, i64* %stack_var_-64, align 8, !insn.addr !640
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !641
  %arg1.tr = trunc i64 %arg1 to i32
  %2 = mul i32 %arg1.tr, 8, !insn.addr !642
  %3 = call i64* @malloc(i32 %2), !insn.addr !642
  %4 = icmp eq i64* %3, null, !insn.addr !643
  %5 = icmp eq i1 %4, false, !insn.addr !644
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !644
  br i1 %5, label %dec_label_pc_4129, label %dec_label_pc_4225, !insn.addr !644

dec_label_pc_4129:                                ; preds = %dec_label_pc_40e2
  %6 = ptrtoint i64* %3 to i64, !insn.addr !642
  store i32 0, i32* @global_var_8118, align 4, !insn.addr !645
  %7 = icmp sgt i32 %arg1.tr, 0
  br i1 %7, label %dec_label_pc_413d.lr.ph, label %dec_label_pc_4193, !insn.addr !646

dec_label_pc_413d.lr.ph:                          ; preds = %dec_label_pc_4129
  %sext = mul i64 %arg1, 4294967296
  %8 = ashr exact i64 %sext, 32
  store i64 0, i64* %indvars.iv10.reg2mem
  br label %dec_label_pc_413d

dec_label_pc_413d:                                ; preds = %dec_label_pc_413d.lr.ph, %dec_label_pc_418b
  %indvars.iv10.reload = load i64, i64* %indvars.iv10.reg2mem
  %9 = mul i64 %indvars.iv10.reload, 8, !insn.addr !647
  %10 = add i64 %9, %6, !insn.addr !648
  %11 = inttoptr i64 %10 to i32*, !insn.addr !649
  %12 = call i32 @pthread_create(i32* %11, i64* null, i64* (i64*)* inttoptr (i64 16431 to i64* (i64*)*), i64* nonnull %stack_var_-64), !insn.addr !649
  %13 = icmp eq i32 %12, 0, !insn.addr !650
  br i1 %13, label %dec_label_pc_418b, label %dec_label_pc_4171, !insn.addr !651

dec_label_pc_4171:                                ; preds = %dec_label_pc_413d
  call void @free(i64* %3), !insn.addr !652
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !653
  br label %dec_label_pc_4225, !insn.addr !653

dec_label_pc_418b:                                ; preds = %dec_label_pc_413d
  %indvars.iv.next11 = add nuw nsw i64 %indvars.iv10.reload, 1
  %14 = icmp slt i64 %indvars.iv.next11, %8, !insn.addr !646
  store i64 %indvars.iv.next11, i64* %indvars.iv10.reg2mem, !insn.addr !646
  br i1 %14, label %dec_label_pc_413d, label %dec_label_pc_4193, !insn.addr !646

dec_label_pc_4193:                                ; preds = %dec_label_pc_418b, %dec_label_pc_4129
  %15 = call i32 @pthread_create(i32* nonnull %stack_var_-32, i64* null, i64* (i64*)* inttoptr (i64 16570 to i64* (i64*)*), i64* null), !insn.addr !654
  %16 = icmp eq i32 %15, 0, !insn.addr !655
  %17 = icmp eq i1 %16, false, !insn.addr !656
  br i1 %17, label %dec_label_pc_41c5, label %dec_label_pc_41b4, !insn.addr !656

dec_label_pc_41b4:                                ; preds = %dec_label_pc_4193
  %18 = load i32, i32* %stack_var_-32, align 4, !insn.addr !657
  %19 = call i32 @pthread_join(i32 %18, i64** null), !insn.addr !658
  br label %dec_label_pc_41c5, !insn.addr !658

dec_label_pc_41c5:                                ; preds = %dec_label_pc_41b4, %dec_label_pc_4193
  br i1 %7, label %dec_label_pc_41ce.preheader, label %dec_label_pc_41fe, !insn.addr !659

dec_label_pc_41ce.preheader:                      ; preds = %dec_label_pc_41c5
  %wide.trip.count = and i64 %arg1, 4294967295
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_41ce

dec_label_pc_41ce:                                ; preds = %dec_label_pc_41ce.preheader, %dec_label_pc_41ce
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %20 = mul i64 %indvars.iv.reload, 8, !insn.addr !660
  %21 = add i64 %20, %6, !insn.addr !661
  %22 = inttoptr i64 %21 to i64*, !insn.addr !662
  %23 = load i64, i64* %22, align 8, !insn.addr !662
  %24 = trunc i64 %23 to i32, !insn.addr !663
  %25 = call i32 @pthread_join(i32 %24, i64** null), !insn.addr !663
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !659
  br i1 %exitcond, label %dec_label_pc_41fe, label %dec_label_pc_41ce, !insn.addr !659

dec_label_pc_41fe:                                ; preds = %dec_label_pc_41ce, %dec_label_pc_41c5
  %26 = load i32, i32* @global_var_8118, align 4, !insn.addr !664
  call void @free(i64* %3), !insn.addr !665
  %27 = icmp slt i32 %26, 1, !insn.addr !666
  %. = select i1 %27, i64 4294967293, i64 42
  store i64 %., i64* %rax.0.reg2mem, !insn.addr !667
  br label %dec_label_pc_4225, !insn.addr !667

dec_label_pc_4225:                                ; preds = %dec_label_pc_41fe, %dec_label_pc_40e2, %dec_label_pc_4171
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %28 = call i64 @__readfsqword(i64 40), !insn.addr !668
  %29 = icmp eq i64 %1, %28, !insn.addr !668
  store i64 %rax.0.reload, i64* %rax.1.reg2mem, !insn.addr !669
  br i1 %29, label %dec_label_pc_4239, label %dec_label_pc_4234, !insn.addr !669

dec_label_pc_4234:                                ; preds = %dec_label_pc_4225
  call void @__stack_chk_fail(), !insn.addr !670
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.1.reg2mem, !insn.addr !670
  br label %dec_label_pc_4239, !insn.addr !670

dec_label_pc_4239:                                ; preds = %dec_label_pc_4234, %dec_label_pc_4225
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !671

; uselistorder directives
  uselistorder i64* %3, { 1, 0, 3, 2 }
  uselistorder i32 %arg1.tr, { 1, 0 }
  uselistorder i64* %stack_var_-64, { 1, 0 }
  uselistorder i64* %indvars.iv10.reg2mem, { 1, 0, 2 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.0.reg2mem, { 0, 1, 3, 2 }
  uselistorder i32* @global_var_8118, { 4, 3, 2, 1, 0 }
  uselistorder i64 %arg1, { 1, 0, 2 }
  uselistorder label %dec_label_pc_4225, { 0, 2, 1 }
  uselistorder label %dec_label_pc_41ce, { 1, 0 }
  uselistorder label %dec_label_pc_413d, { 1, 0 }
}

define i64 @call_atomic_ops() local_unnamed_addr {
dec_label_pc_423b:
  %0 = call i64 @param_atomic_ops(i64 4, i64 500), !insn.addr !672
  ret i64 %0, !insn.addr !673
}

define i64 @thread_tls_test(i64 %arg1) local_unnamed_addr {
dec_label_pc_4254:
  %0 = call i32 @__readfsdword(i64 -36), !insn.addr !674
  %1 = call i32 @__readfsdword(i64 -36), !insn.addr !675
  %2 = add i32 %1, 50, !insn.addr !676
  call void @__writefsdword(i64 -36, i32 %2), !insn.addr !677
  %3 = call i64 @__readfsqword(i64 0), !insn.addr !678
  %4 = add i64 %3, -32, !insn.addr !679
  %5 = inttoptr i64 %4 to i8*, !insn.addr !680
  %6 = inttoptr i64 %arg1 to i8*, !insn.addr !680
  %7 = call i8* @strncpy(i8* %5, i8* %6, i32 31), !insn.addr !680
  %8 = call i64* @malloc(i32 8), !insn.addr !681
  %9 = ptrtoint i64* %8 to i64, !insn.addr !681
  %10 = bitcast i64* %8 to i32*, !insn.addr !682
  store i32 %0, i32* %10, align 4, !insn.addr !682
  %11 = add i64 %9, 4, !insn.addr !683
  %12 = call i32 @__readfsdword(i64 -36), !insn.addr !684
  %13 = inttoptr i64 %11 to i32*, !insn.addr !685
  store i32 %12, i32* %13, align 4, !insn.addr !685
  ret i64 %9, !insn.addr !686
}

define i64 @param_thread_local_storage(i64 %arg1) local_unnamed_addr {
dec_label_pc_42dd:
  %rax.1.reg2mem = alloca i64, !insn.addr !687
  %rax.0.reg2mem = alloca i64, !insn.addr !687
  %stack_var_-80.0.lcssa.reg2mem = alloca i32, !insn.addr !687
  %stack_var_-84.0.lcssa.reg2mem = alloca i32, !insn.addr !687
  %stack_var_-84.013.reg2mem = alloca i32, !insn.addr !687
  %stack_var_-80.014.reg2mem = alloca i32, !insn.addr !687
  %indvars.iv.reg2mem = alloca i64, !insn.addr !687
  %indvars.iv22.reg2mem = alloca i64, !insn.addr !687
  %indvars.iv26.reg2mem = alloca i64, !insn.addr !687
  %indvars.iv28.reg2mem = alloca i64, !insn.addr !687
  %stack_var_-64 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !688
  %arg1.tr = trunc i64 %arg1 to i32
  %1 = mul i32 %arg1.tr, 8, !insn.addr !689
  %2 = call i64* @malloc(i32 %1), !insn.addr !689
  %3 = call i64* @malloc(i32 %1), !insn.addr !690
  %4 = icmp ne i64* %2, null, !insn.addr !691
  %5 = icmp eq i64* %3, null, !insn.addr !692
  %6 = icmp eq i1 %5, false, !insn.addr !693
  %or.cond = icmp eq i1 %4, %6
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !694
  br i1 %or.cond, label %dec_label_pc_43a2.preheader, label %dec_label_pc_453f, !insn.addr !694

dec_label_pc_43a2.preheader:                      ; preds = %dec_label_pc_42dd
  %7 = icmp sgt i32 %arg1.tr, 0
  store i32 0, i32* %stack_var_-84.0.lcssa.reg2mem, !insn.addr !695
  store i32 0, i32* %stack_var_-80.0.lcssa.reg2mem, !insn.addr !695
  br i1 %7, label %dec_label_pc_4347.preheader, label %dec_label_pc_44f6, !insn.addr !695

dec_label_pc_4347.preheader:                      ; preds = %dec_label_pc_43a2.preheader
  %8 = ptrtoint i64* %2 to i64, !insn.addr !689
  %9 = ptrtoint i64* %3 to i64, !insn.addr !690
  %wide.trip.count30 = and i64 %arg1, 4294967295
  store i64 0, i64* %indvars.iv28.reg2mem
  br label %dec_label_pc_4347

dec_label_pc_4347:                                ; preds = %dec_label_pc_4347.preheader, %dec_label_pc_4347
  %indvars.iv28.reload = load i64, i64* %indvars.iv28.reg2mem
  %10 = mul i64 %indvars.iv28.reload, 8, !insn.addr !696
  %11 = add i64 %10, %9, !insn.addr !697
  %12 = call i64* @malloc(i32 16), !insn.addr !698
  %13 = ptrtoint i64* %12 to i64, !insn.addr !698
  %14 = inttoptr i64 %11 to i64*, !insn.addr !699
  store i64 %13, i64* %14, align 8, !insn.addr !699
  %15 = bitcast i64* %12 to i8*, !insn.addr !700
  %16 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %15, i32 16, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_5327, i64 0, i64 0), i64 %indvars.iv28.reload), !insn.addr !700
  %indvars.iv.next29 = add nuw nsw i64 %indvars.iv28.reload, 1
  %exitcond31 = icmp eq i64 %indvars.iv.next29, %wide.trip.count30
  store i64 %indvars.iv.next29, i64* %indvars.iv28.reg2mem, !insn.addr !695
  br i1 %exitcond31, label %dec_label_pc_43b6.lr.ph, label %dec_label_pc_4347, !insn.addr !695

dec_label_pc_43b6.lr.ph:                          ; preds = %dec_label_pc_4347
  %sext = mul i64 %arg1, 4294967296
  %17 = ashr exact i64 %sext, 32
  store i64 0, i64* %indvars.iv26.reg2mem
  br label %dec_label_pc_43b6

dec_label_pc_43b6:                                ; preds = %dec_label_pc_43b6.lr.ph, %dec_label_pc_4454
  %indvars.iv26.reload = load i64, i64* %indvars.iv26.reg2mem
  %18 = mul i64 %indvars.iv26.reload, 8, !insn.addr !701
  %19 = add i64 %18, %9, !insn.addr !702
  %20 = inttoptr i64 %19 to i64*, !insn.addr !703
  %21 = load i64, i64* %20, align 8, !insn.addr !703
  %22 = add i64 %18, %8, !insn.addr !704
  %23 = inttoptr i64 %22 to i32*, !insn.addr !705
  %24 = inttoptr i64 %21 to i64*, !insn.addr !705
  %25 = call i32 @pthread_create(i32* %23, i64* null, i64* (i64*)* inttoptr (i64 16980 to i64* (i64*)*), i64* %24), !insn.addr !705
  %26 = icmp eq i32 %25, 0, !insn.addr !706
  br i1 %26, label %dec_label_pc_4454, label %dec_label_pc_442a.preheader, !insn.addr !707

dec_label_pc_442a.preheader:                      ; preds = %dec_label_pc_43b6
  %27 = trunc i64 %indvars.iv26.reload to i32
  %28 = icmp slt i32 %27, 0, !insn.addr !708
  br i1 %28, label %dec_label_pc_4432, label %dec_label_pc_4407.lr.ph, !insn.addr !708

dec_label_pc_4407.lr.ph:                          ; preds = %dec_label_pc_442a.preheader
  %29 = add nuw i64 %indvars.iv26.reload, 1
  %wide.trip.count24 = and i64 %29, 4294967295
  store i64 0, i64* %indvars.iv22.reg2mem
  br label %dec_label_pc_4407

dec_label_pc_4407:                                ; preds = %dec_label_pc_4407.lr.ph, %dec_label_pc_4407
  %indvars.iv22.reload = load i64, i64* %indvars.iv22.reg2mem
  %30 = mul i64 %indvars.iv22.reload, 8, !insn.addr !709
  %31 = add i64 %30, %9, !insn.addr !710
  %32 = inttoptr i64 %31 to i64*, !insn.addr !711
  %33 = load i64, i64* %32, align 8, !insn.addr !711
  %34 = inttoptr i64 %33 to i64*, !insn.addr !712
  call void @free(i64* %34), !insn.addr !712
  %indvars.iv.next23 = add nuw nsw i64 %indvars.iv22.reload, 1
  %exitcond25 = icmp eq i64 %indvars.iv.next23, %wide.trip.count24
  store i64 %indvars.iv.next23, i64* %indvars.iv22.reg2mem, !insn.addr !708
  br i1 %exitcond25, label %dec_label_pc_4432, label %dec_label_pc_4407, !insn.addr !708

dec_label_pc_4432:                                ; preds = %dec_label_pc_4407, %dec_label_pc_442a.preheader
  call void @free(i64* %3), !insn.addr !713
  call void @free(i64* nonnull %2), !insn.addr !714
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !715
  br label %dec_label_pc_453f, !insn.addr !715

dec_label_pc_4454:                                ; preds = %dec_label_pc_43b6
  %indvars.iv.next27 = add nuw nsw i64 %indvars.iv26.reload, 1
  %35 = icmp slt i64 %indvars.iv.next27, %17, !insn.addr !716
  store i64 %indvars.iv.next27, i64* %indvars.iv26.reg2mem, !insn.addr !716
  br i1 %35, label %dec_label_pc_43b6, label %dec_label_pc_447b.lr.ph, !insn.addr !716

dec_label_pc_447b.lr.ph:                          ; preds = %dec_label_pc_4454
  %36 = bitcast i64* %stack_var_-64 to i64**, !insn.addr !717
  store i64 0, i64* %indvars.iv.reg2mem
  store i32 0, i32* %stack_var_-80.014.reg2mem
  store i32 0, i32* %stack_var_-84.013.reg2mem
  br label %dec_label_pc_447b

dec_label_pc_447b:                                ; preds = %dec_label_pc_447b, %dec_label_pc_447b.lr.ph
  %stack_var_-84.013.reload = load i32, i32* %stack_var_-84.013.reg2mem
  %stack_var_-80.014.reload = load i32, i32* %stack_var_-80.014.reg2mem
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %37 = mul i64 %indvars.iv.reload, 8, !insn.addr !718
  %38 = add i64 %37, %8, !insn.addr !719
  %39 = inttoptr i64 %38 to i64*, !insn.addr !720
  %40 = load i64, i64* %39, align 8, !insn.addr !720
  %41 = trunc i64 %40 to i32, !insn.addr !717
  %42 = call i32 @pthread_join(i32 %41, i64** nonnull %36), !insn.addr !717
  %43 = load i64, i64* %stack_var_-64, align 8, !insn.addr !721
  %44 = inttoptr i64 %43 to i32*, !insn.addr !722
  %45 = load i32, i32* %44, align 4, !insn.addr !722
  %46 = add i32 %45, %stack_var_-84.013.reload, !insn.addr !723
  %47 = add i64 %43, 4, !insn.addr !724
  %48 = inttoptr i64 %47 to i32*, !insn.addr !725
  %49 = load i32, i32* %48, align 4, !insn.addr !725
  %50 = add i32 %49, %stack_var_-80.014.reload, !insn.addr !726
  %51 = inttoptr i64 %43 to i64*, !insn.addr !727
  call void @free(i64* %51), !insn.addr !727
  %52 = add i64 %37, %9, !insn.addr !728
  %53 = inttoptr i64 %52 to i64*, !insn.addr !729
  %54 = load i64, i64* %53, align 8, !insn.addr !729
  %55 = inttoptr i64 %54 to i64*, !insn.addr !730
  call void @free(i64* %55), !insn.addr !730
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count30
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !731
  store i32 %50, i32* %stack_var_-80.014.reg2mem, !insn.addr !731
  store i32 %46, i32* %stack_var_-84.013.reg2mem, !insn.addr !731
  store i32 %46, i32* %stack_var_-84.0.lcssa.reg2mem, !insn.addr !731
  store i32 %50, i32* %stack_var_-80.0.lcssa.reg2mem, !insn.addr !731
  br i1 %exitcond, label %dec_label_pc_44f6, label %dec_label_pc_447b, !insn.addr !731

dec_label_pc_44f6:                                ; preds = %dec_label_pc_447b, %dec_label_pc_43a2.preheader
  %stack_var_-84.0.lcssa.reload = load i32, i32* %stack_var_-84.0.lcssa.reg2mem
  call void @free(i64* %3), !insn.addr !732
  call void @free(i64* nonnull %2), !insn.addr !733
  %56 = mul i32 %arg1.tr, 100
  %57 = icmp eq i32 %stack_var_-84.0.lcssa.reload, %56, !insn.addr !734
  %58 = icmp eq i1 %57, false, !insn.addr !735
  br i1 %58, label %dec_label_pc_453a, label %dec_label_pc_452b, !insn.addr !735

dec_label_pc_452b:                                ; preds = %dec_label_pc_44f6
  %stack_var_-80.0.lcssa.reload = load i32, i32* %stack_var_-80.0.lcssa.reg2mem
  %59 = mul i32 %arg1.tr, 150, !insn.addr !736
  %60 = icmp eq i32 %stack_var_-80.0.lcssa.reload, %59, !insn.addr !737
  %61 = icmp eq i1 %60, false, !insn.addr !738
  store i64 42, i64* %rax.0.reg2mem, !insn.addr !738
  br i1 %61, label %dec_label_pc_453a, label %dec_label_pc_453f, !insn.addr !738

dec_label_pc_453a:                                ; preds = %dec_label_pc_452b, %dec_label_pc_44f6
  store i64 4294967293, i64* %rax.0.reg2mem, !insn.addr !739
  br label %dec_label_pc_453f, !insn.addr !739

dec_label_pc_453f:                                ; preds = %dec_label_pc_452b, %dec_label_pc_42dd, %dec_label_pc_453a, %dec_label_pc_4432
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %62 = call i64 @__readfsqword(i64 40), !insn.addr !740
  %63 = icmp eq i64 %0, %62, !insn.addr !740
  store i64 %rax.0.reload, i64* %rax.1.reg2mem, !insn.addr !741
  br i1 %63, label %dec_label_pc_4553, label %dec_label_pc_454e, !insn.addr !741

dec_label_pc_454e:                                ; preds = %dec_label_pc_453f
  call void @__stack_chk_fail(), !insn.addr !742
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.1.reg2mem, !insn.addr !742
  br label %dec_label_pc_4553, !insn.addr !742

dec_label_pc_4553:                                ; preds = %dec_label_pc_454e, %dec_label_pc_453f
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !743

; uselistorder directives
  uselistorder i64 %37, { 1, 0 }
  uselistorder i64 %18, { 1, 0 }
  uselistorder i64 %indvars.iv26.reload, { 0, 2, 1, 3 }
  uselistorder i64* %3, { 2, 1, 3, 0 }
  uselistorder i64* %2, { 1, 0, 3, 2 }
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32 %arg1.tr, { 2, 3, 1, 0 }
  uselistorder i64* %stack_var_-64, { 1, 0 }
  uselistorder i64* %indvars.iv28.reg2mem, { 2, 0, 1 }
  uselistorder i64* %indvars.iv26.reg2mem, { 1, 0, 2 }
  uselistorder i64* %indvars.iv22.reg2mem, { 1, 0, 2 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-80.014.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-84.013.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 0, 3, 1, 4, 2 }
  uselistorder void ()* @__stack_chk_fail, { 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 13, 14, 15, 1, 0, 16 }
  uselistorder i64 4294967293, { 0, 6, 7, 1, 2, 3, 8, 4, 5 }
  uselistorder i64 42, { 0, 3, 4, 1, 8, 5, 6, 9, 7, 10, 2, 11, 12 }
  uselistorder i32 (i32, i64**)* @pthread_join, { 0, 4, 3, 2, 1, 7, 6, 5, 8 }
  uselistorder i64 4294967294, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 10 }
  uselistorder void (i64*)* @free, { 11, 10, 13, 12, 8, 7, 9, 6, 5, 4, 3, 2, 1, 0, 14 }
  uselistorder i32 (i32*, i64*, i64* (i64*)*, i64*)* @pthread_create, { 7, 5, 6, 4, 3, 2, 1, 0, 8 }
  uselistorder i64 1, { 4, 2, 3, 0, 1, 6, 5, 8, 7, 10, 9, 14, 11, 15, 12, 13 }
  uselistorder i32 0, { 2, 3, 9, 38, 0, 1, 10, 40, 39, 11, 22, 12, 41, 42, 43, 44, 45, 15, 46, 13, 47, 4, 14, 48, 5, 49, 6, 50, 51, 52, 53, 54, 55, 19, 18, 17, 56, 57, 58, 59, 60, 21, 20, 16, 61, 23, 24, 62, 63, 64, 65, 66, 25, 67, 68, 26, 27, 69, 70, 71, 72, 73, 74, 28, 75, 76, 77, 78, 79, 80, 7, 29, 8, 81, 82, 83, 84, 30, 85, 86, 31, 32, 33, 34, 35, 36, 37 }
  uselistorder i64 4294967295, { 17, 16, 0, 18, 1, 2, 19, 3, 4, 5, 6, 30, 26, 7, 8, 9, 10, 27, 11, 20, 28, 31, 25, 21, 22, 12, 13, 29, 14, 32, 15, 33, 34, 35, 23, 36, 24, 37 }
  uselistorder i1 false, { 7, 8, 2, 9, 10, 11, 12, 13, 5, 14, 1, 15, 16, 6, 17, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 3, 45, 4, 46 }
  uselistorder i64* null, { 2, 0, 1, 5, 6, 4, 3, 7, 8, 9, 10, 12, 11, 13, 14, 15, 16 }
  uselistorder i64* (i32)* @malloc, { 8, 7, 6, 5, 4, 3, 2, 1, 0, 9 }
  uselistorder i32 8, { 0, 3, 1, 2 }
  uselistorder i64 40, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 0, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 }
  uselistorder label %dec_label_pc_453f, { 2, 0, 3, 1 }
  uselistorder label %dec_label_pc_4407, { 1, 0 }
  uselistorder label %dec_label_pc_43b6, { 1, 0 }
  uselistorder label %dec_label_pc_4347, { 1, 0 }
}

define i64 @call_thread_local_storage() local_unnamed_addr {
dec_label_pc_4559:
  %0 = call i64 @param_thread_local_storage(i64 4), !insn.addr !744
  ret i64 %0, !insn.addr !745

; uselistorder directives
  uselistorder i64 4, { 3, 6, 7, 4, 5, 8, 0, 1, 2 }
}

define i64 @test_thread_concurrency() local_unnamed_addr {
dec_label_pc_456d:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_5331 to i8*)), !insn.addr !746
  %1 = call i64 @call_pthread_create(), !insn.addr !747
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_534f to i8*)), !insn.addr !748
  %3 = call i64 @call_pthread_join(), !insn.addr !749
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_536b to i8*)), !insn.addr !750
  %5 = call i64 @call_mutex_lock(), !insn.addr !751
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5388 to i8*)), !insn.addr !752
  %7 = call i64 @call_condition_variable(), !insn.addr !753
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_53a4 to i8*)), !insn.addr !754
  %9 = call i64 @call_atomic_ops(), !insn.addr !755
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_53c0 to i8*)), !insn.addr !756
  %11 = call i64 @call_thread_local_storage(), !insn.addr !757
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_53dc to i8*)), !insn.addr !758
  %13 = sext i32 %12 to i64, !insn.addr !758
  ret i64 %13, !insn.addr !759

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 12, 18, 17, 16, 15, 14, 13, 23, 22, 21, 20, 19, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 25, 24, 26 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_4647:
  %0 = call i64 @test_standard_library_functions(), !insn.addr !760
  %1 = call i64 @test_system_calls(), !insn.addr !761
  %2 = call i64 @test_thread_concurrency(), !insn.addr !762
  ret i64 0, !insn.addr !763

; uselistorder directives
  uselistorder i64 0, { 16, 0, 1, 2, 86, 87, 3, 88, 4, 5, 17, 6, 18, 7, 8, 19, 9, 10, 20, 89, 90, 103, 91, 92, 104, 93, 94, 11, 12, 13, 24, 14, 25, 97, 98, 95, 96, 21, 22, 99, 100, 101, 102, 26, 27, 108, 23, 15, 109, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 105, 106, 107 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_4674:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !764

; uselistorder directives
  uselistorder i32 1, { 5, 91, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 69, 81, 80, 21, 20, 19, 18, 22, 4, 82, 83, 92, 24, 23, 116, 70, 84, 27, 26, 25, 117, 28, 3, 94, 96, 95, 93, 33, 32, 31, 30, 29, 118, 79, 35, 34, 86, 85, 97, 37, 36, 2, 71, 42, 41, 40, 39, 38, 119, 72, 43, 73, 99, 74, 100, 98, 45, 44, 75, 87, 101, 47, 46, 7, 88, 49, 48, 102, 50, 1, 51, 103, 89, 53, 52, 6, 56, 55, 54, 76, 59, 58, 57, 77, 78, 104, 61, 60, 62, 106, 105, 64, 63, 107, 109, 111, 112, 110, 108, 65, 113, 90, 66, 114, 67, 0, 115, 68 }
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
!86 = !{i64 10450}
!87 = !{i64 10457}
!88 = !{i64 10466}
!89 = !{i64 10468}
!90 = !{i64 10474}
!91 = !{i64 10509}
!92 = !{i64 10517}
!93 = !{i64 10521}
!94 = !{i64 10549}
!95 = !{i64 10582}
!96 = !{i64 10610}
!97 = !{i64 10638}
!98 = !{i64 10652}
!99 = !{i64 10657}
!100 = !{i64 10660}
!101 = !{i64 10684}
!102 = !{i64 10698}
!103 = !{i64 10729}
!104 = !{i64 10735}
!105 = !{i64 10778}
!106 = !{i64 10788}
!107 = !{i64 10789}
!108 = !{i64 10801}
!109 = !{i64 10816}
!110 = !{i64 10851}
!111 = !{i64 10893}
!112 = !{i64 10898}
!113 = !{i64 10909}
!114 = !{i64 10915}
!115 = !{i64 10924}
!116 = !{i64 10926}
!117 = !{i64 10932}
!118 = !{i64 10975}
!119 = !{i64 10983}
!120 = !{i64 10987}
!121 = !{i64 11015}
!122 = !{i64 11016}
!123 = !{i64 11028}
!124 = !{i64 11043}
!125 = !{i64 11064}
!126 = !{i64 11085}
!127 = !{i64 11125}
!128 = !{i64 11152}
!129 = !{i64 11166}
!130 = !{i64 11172}
!131 = !{i64 11181}
!132 = !{i64 11183}
!133 = !{i64 11189}
!134 = !{i64 11216}
!135 = !{i64 11233}
!136 = !{i64 11241}
!137 = !{i64 11245}
!138 = !{i64 11273}
!139 = !{i64 11281}
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
!165 = !{i64 11535}
!166 = !{i64 11538}
!167 = !{i64 11557}
!168 = !{i64 11558}
!169 = !{i64 11574}
!170 = !{i64 11617}
!171 = !{i64 11626}
!172 = !{i64 11631}
!173 = !{i64 11650}
!174 = !{i64 11680}
!175 = !{i64 11696}
!176 = !{i64 11701}
!177 = !{i64 11705}
!178 = !{i64 11714}
!179 = !{i64 11724}
!180 = !{i64 11733}
!181 = !{i64 11758}
!182 = !{i64 11767}
!183 = !{i64 11775}
!184 = !{i64 11778}
!185 = !{i64 11788}
!186 = !{i64 11800}
!187 = !{i64 11809}
!188 = !{i64 11813}
!189 = !{i64 11829}
!190 = !{i64 11834}
!191 = !{i64 11836}
!192 = !{i64 11845}
!193 = !{i64 11854}
!194 = !{i64 11863}
!195 = !{i64 11865}
!196 = !{i64 11871}
!197 = !{i64 11890}
!198 = !{i64 11896}
!199 = !{i64 11897}
!200 = !{i64 11924}
!201 = !{i64 11933}
!202 = !{i64 11938}
!203 = !{i64 12004}
!204 = !{i64 12008}
!205 = !{i64 11970}
!206 = !{i64 11978}
!207 = !{i64 11990}
!208 = !{i64 11993}
!209 = !{i64 11995}
!210 = !{i64 12000}
!211 = !{i64 12014}
!212 = !{i64 12020}
!213 = !{i64 12024}
!214 = !{i64 12032}
!215 = !{i64 12035}
!216 = !{i64 12037}
!217 = !{i64 12049}
!218 = !{i64 12062}
!219 = !{i64 12066}
!220 = !{i64 12080}
!221 = !{i64 12086}
!222 = !{i64 12087}
!223 = !{i64 12123}
!224 = !{i64 12182}
!225 = !{i64 12186}
!226 = !{i64 12161}
!227 = !{i64 12164}
!228 = !{i64 12170}
!229 = !{i64 12173}
!230 = !{i64 12192}
!231 = !{i64 12193}
!232 = !{i64 12198}
!233 = !{i64 12205}
!234 = !{i64 12234}
!235 = !{i64 12250}
!236 = !{i64 12264}
!237 = !{i64 12269}
!238 = !{i64 12275}
!239 = !{i64 12281}
!240 = !{i64 12290}
!241 = !{i64 12292}
!242 = !{i64 12298}
!243 = !{i64 12321}
!244 = !{i64 12332}
!245 = !{i64 12337}
!246 = !{i64 12346}
!247 = !{i64 12385}
!248 = !{i64 12394}
!249 = !{i64 12425}
!250 = !{i64 12428}
!251 = !{i64 12471}
!252 = !{i64 12479}
!253 = !{i64 12483}
!254 = !{i64 12502}
!255 = !{i64 12512}
!256 = !{i64 12534}
!257 = !{i64 12544}
!258 = !{i64 12566}
!259 = !{i64 12576}
!260 = !{i64 12598}
!261 = !{i64 12608}
!262 = !{i64 12630}
!263 = !{i64 12640}
!264 = !{i64 12662}
!265 = !{i64 12672}
!266 = !{i64 12694}
!267 = !{i64 12704}
!268 = !{i64 12726}
!269 = !{i64 12736}
!270 = !{i64 12758}
!271 = !{i64 12768}
!272 = !{i64 12790}
!273 = !{i64 12800}
!274 = !{i64 12822}
!275 = !{i64 12832}
!276 = !{i64 12854}
!277 = !{i64 12864}
!278 = !{i64 12886}
!279 = !{i64 12893}
!280 = !{i64 12894}
!281 = !{i64 12932}
!282 = !{i64 12940}
!283 = !{i64 12944}
!284 = !{i64 12946}
!285 = !{i64 12951}
!286 = !{i64 12953}
!287 = !{i64 12955}
!288 = !{i64 12972}
!289 = !{i64 12977}
!290 = !{i64 12981}
!291 = !{i64 13004}
!292 = !{i64 13009}
!293 = !{i64 13012}
!294 = !{i64 13031}
!295 = !{i64 13032}
!296 = !{i64 13054}
!297 = !{i64 13089}
!298 = !{i64 13094}
!299 = !{i64 13096}
!300 = !{i64 13130}
!301 = !{i64 13139}
!302 = !{i64 13141}
!303 = !{i64 13147}
!304 = !{i64 13166}
!305 = !{i64 13172}
!306 = !{i64 13173}
!307 = !{i64 13193}
!308 = !{i64 13208}
!309 = !{i64 13216}
!310 = !{i64 13220}
!311 = !{i64 13229}
!312 = !{i64 13233}
!313 = !{i64 13260}
!314 = !{i64 13270}
!315 = !{i64 13292}
!316 = !{i64 13300}
!317 = !{i64 13304}
!318 = !{i64 13313}
!319 = !{i64 13316}
!320 = !{i64 13319}
!321 = !{i64 13321}
!322 = !{i64 13329}
!323 = !{i64 13332}
!324 = !{i64 13343}
!325 = !{i64 13352}
!326 = !{i64 13354}
!327 = !{i64 13360}
!328 = !{i64 13388}
!329 = !{i64 13393}
!330 = !{i64 13396}
!331 = !{i64 13400}
!332 = !{i64 13415}
!333 = !{i64 13416}
!334 = !{i64 13428}
!335 = !{i64 13447}
!336 = !{i64 13450}
!337 = !{i64 13455}
!338 = !{i64 13457}
!339 = !{i64 13469}
!340 = !{i64 13477}
!341 = !{i64 13481}
!342 = !{i64 13493}
!343 = !{i64 13497}
!344 = !{i64 13499}
!345 = !{i64 13504}
!346 = !{i64 13527}
!347 = !{i64 13547}
!348 = !{i64 13557}
!349 = !{i64 13567}
!350 = !{i64 13577}
!351 = !{i64 13582}
!352 = !{i64 13599}
!353 = !{i64 13608}
!354 = !{i64 13616}
!355 = !{i64 13619}
!356 = !{i64 13622}
!357 = !{i64 13627}
!358 = !{i64 13637}
!359 = !{i64 13647}
!360 = !{i64 13656}
!361 = !{i64 13665}
!362 = !{i64 13674}
!363 = !{i64 13676}
!364 = !{i64 13682}
!365 = !{i64 13691}
!366 = !{i64 13697}
!367 = !{i64 13698}
!368 = !{i64 13710}
!369 = !{i64 13740}
!370 = !{i64 13748}
!371 = !{i64 13752}
!372 = !{i64 13764}
!373 = !{i64 13799}
!374 = !{i64 13804}
!375 = !{i64 13806}
!376 = !{i64 13813}
!377 = !{i64 13823}
!378 = !{i64 13845}
!379 = !{i64 13850}
!380 = !{i64 13861}
!381 = !{i64 13894}
!382 = !{i64 13899}
!383 = !{i64 13901}
!384 = !{i64 13908}
!385 = !{i64 13918}
!386 = !{i64 13930}
!387 = !{i64 13935}
!388 = !{i64 13937}
!389 = !{i64 13966}
!390 = !{i64 13975}
!391 = !{i64 13984}
!392 = !{i64 13986}
!393 = !{i64 13992}
!394 = !{i64 14001}
!395 = !{i64 14007}
!396 = !{i64 14008}
!397 = !{i64 14053}
!398 = !{i64 14061}
!399 = !{i64 14065}
!400 = !{i64 14082}
!401 = !{i64 14102}
!402 = !{i64 14110}
!403 = !{i64 14114}
!404 = !{i64 14141}
!405 = !{i64 14149}
!406 = !{i64 14153}
!407 = !{i64 14177}
!408 = !{i64 14186}
!409 = !{i64 14191}
!410 = !{i64 14200}
!411 = !{i64 14214}
!412 = !{i64 14217}
!413 = !{i64 14224}
!414 = !{i64 14235}
!415 = !{i64 14250}
!416 = !{i64 14270}
!417 = !{i64 14275}
!418 = !{i64 14279}
!419 = !{i64 14292}
!420 = !{i64 14297}
!421 = !{i64 14304}
!422 = !{i64 14319}
!423 = !{i64 14331}
!424 = !{i64 14341}
!425 = !{i64 14344}
!426 = !{i64 14352}
!427 = !{i64 14353}
!428 = !{i64 14380}
!429 = !{i64 14385}
!430 = !{i64 14389}
!431 = !{i64 14416}
!432 = !{i64 14421}
!433 = !{i64 14425}
!434 = !{i64 14437}
!435 = !{i64 14452}
!436 = !{i64 14476}
!437 = !{i64 14482}
!438 = !{i64 14484}
!439 = !{i64 14471}
!440 = !{i64 14489}
!441 = !{i64 14495}
!442 = !{i64 14497}
!443 = !{i64 14499}
!444 = !{i64 14505}
!445 = !{i64 14507}
!446 = !{i64 14519}
!447 = !{i64 14525}
!448 = !{i64 14528}
!449 = !{i64 14537}
!450 = !{i64 14552}
!451 = !{i64 14576}
!452 = !{i64 14582}
!453 = !{i64 14584}
!454 = !{i64 14571}
!455 = !{i64 14589}
!456 = !{i64 14595}
!457 = !{i64 14597}
!458 = !{i64 14599}
!459 = !{i64 14605}
!460 = !{i64 14609}
!461 = !{i64 14615}
!462 = !{i64 14607}
!463 = !{i64 14637}
!464 = !{i64 14652}
!465 = !{i64 14657}
!466 = !{i64 14663}
!467 = !{i64 14672}
!468 = !{i64 14678}
!469 = !{i64 14697}
!470 = !{i64 14707}
!471 = !{i64 14729}
!472 = !{i64 14739}
!473 = !{i64 14761}
!474 = !{i64 14771}
!475 = !{i64 14793}
!476 = !{i64 14803}
!477 = !{i64 14825}
!478 = !{i64 14835}
!479 = !{i64 14857}
!480 = !{i64 14867}
!481 = !{i64 14889}
!482 = !{i64 14899}
!483 = !{i64 14921}
!484 = !{i64 14928}
!485 = !{i64 14965}
!486 = !{i64 14976}
!487 = !{i64 14992}
!488 = !{i64 14999}
!489 = !{i64 15000}
!490 = !{i64 15015}
!491 = !{i64 15033}
!492 = !{i64 15062}
!493 = !{i64 15070}
!494 = !{i64 15074}
!495 = !{i64 15083}
!496 = !{i64 15097}
!497 = !{i64 15106}
!498 = !{i64 15118}
!499 = !{i64 15123}
!500 = !{i64 15130}
!501 = !{i64 15139}
!502 = !{i64 15141}
!503 = !{i64 15147}
!504 = !{i64 15161}
!505 = !{i64 15167}
!506 = !{i64 15168}
!507 = !{i64 15192}
!508 = !{i64 15203}
!509 = !{i64 15237}
!510 = !{i64 15243}
!511 = !{i64 15214}
!512 = !{i64 15220}
!513 = !{i64 15226}
!514 = !{i64 15229}
!515 = !{i64 15251}
!516 = !{i64 15252}
!517 = !{i64 15257}
!518 = !{i64 15264}
!519 = !{i64 15279}
!520 = !{i64 15351}
!521 = !{i64 15378}
!522 = !{i64 15370}
!523 = !{i64 15374}
!524 = !{i64 15387}
!525 = !{i64 15391}
!526 = !{i64 15412}
!527 = !{i64 15417}
!528 = !{i64 15419}
!529 = !{i64 15436}
!530 = !{i64 15459}
!531 = !{i64 15472}
!532 = !{i64 15477}
!533 = !{i64 15479}
!534 = !{i64 15503}
!535 = !{i64 15510}
!536 = !{i64 15514}
!537 = !{i64 15516}
!538 = !{i64 15527}
!539 = !{i64 15529}
!540 = !{i64 15536}
!541 = !{i64 15545}
!542 = !{i64 15547}
!543 = !{i64 15553}
!544 = !{i64 15567}
!545 = !{i64 15573}
!546 = !{i64 15574}
!547 = !{i64 15673}
!548 = !{i64 15618}
!549 = !{i64 15632}
!550 = !{i64 15648}
!551 = !{i64 15658}
!552 = !{i64 15663}
!553 = !{i64 15681}
!554 = !{i64 15682}
!555 = !{i64 15697}
!556 = !{i64 15712}
!557 = !{i64 15721}
!558 = !{i64 15726}
!559 = !{i64 15694}
!560 = !{i64 15738}
!561 = !{i64 15835}
!562 = !{i64 15838}
!563 = !{i64 15800}
!564 = !{i64 15762}
!565 = !{i64 15774}
!566 = !{i64 15805}
!567 = !{i64 15807}
!568 = !{i64 15816}
!569 = !{i64 15826}
!570 = !{i64 15854}
!571 = !{i64 15866}
!572 = !{i64 15869}
!573 = !{i64 15880}
!574 = !{i64 15895}
!575 = !{i64 15904}
!576 = !{i64 15909}
!577 = !{i64 15915}
!578 = !{i64 15921}
!579 = !{i64 15927}
!580 = !{i64 15930}
!581 = !{i64 15939}
!582 = !{i64 15945}
!583 = !{i64 15964}
!584 = !{i64 15970}
!585 = !{i64 15997}
!586 = !{i64 16029}
!587 = !{i64 16035}
!588 = !{i64 16037}
!589 = !{i64 16024}
!590 = !{i64 16039}
!591 = !{i64 16058}
!592 = !{i64 16068}
!593 = !{i64 16084}
!594 = !{i64 16091}
!595 = !{i64 16113}
!596 = !{i64 16128}
!597 = !{i64 16133}
!598 = !{i64 16143}
!599 = !{i64 16163}
!600 = !{i64 16178}
!601 = !{i64 16189}
!602 = !{i64 16190}
!603 = !{i64 16202}
!604 = !{i64 16217}
!605 = !{i64 16227}
!606 = !{i64 16261}
!607 = !{i64 16266}
!608 = !{i64 16268}
!609 = !{i64 16301}
!610 = !{i64 16306}
!611 = !{i64 16308}
!612 = !{i64 16317}
!613 = !{i64 16327}
!614 = !{i64 16343}
!615 = !{i64 16348}
!616 = !{i64 16360}
!617 = !{i64 16369}
!618 = !{i64 16381}
!619 = !{i64 16386}
!620 = !{i64 16393}
!621 = !{i64 16402}
!622 = !{i64 16404}
!623 = !{i64 16410}
!624 = !{i64 16424}
!625 = !{i64 16430}
!626 = !{i64 16431}
!627 = !{i64 16447}
!628 = !{i64 16541}
!629 = !{i64 16514}
!630 = !{i64 16497}
!631 = !{i64 16552}
!632 = !{i64 16561}
!633 = !{i64 16563}
!634 = !{i64 16569}
!635 = !{i64 16582}
!636 = !{i64 16594}
!637 = !{i64 16597}
!638 = !{i64 16609}
!639 = !{i64 16610}
!640 = !{i64 16625}
!641 = !{i64 16628}
!642 = !{i64 16655}
!643 = !{i64 16664}
!644 = !{i64 16669}
!645 = !{i64 16686}
!646 = !{i64 16785}
!647 = !{i64 16706}
!648 = !{i64 16718}
!649 = !{i64 16744}
!650 = !{i64 16749}
!651 = !{i64 16751}
!652 = !{i64 16760}
!653 = !{i64 16770}
!654 = !{i64 16811}
!655 = !{i64 16816}
!656 = !{i64 16818}
!657 = !{i64 16820}
!658 = !{i64 16832}
!659 = !{i64 16892}
!660 = !{i64 16851}
!661 = !{i64 16863}
!662 = !{i64 16866}
!663 = !{i64 16877}
!664 = !{i64 16894}
!665 = !{i64 16910}
!666 = !{i64 16919}
!667 = !{i64 16928}
!668 = !{i64 16937}
!669 = !{i64 16946}
!670 = !{i64 16948}
!671 = !{i64 16954}
!672 = !{i64 16973}
!673 = !{i64 16979}
!674 = !{i64 17004}
!675 = !{i64 17015}
!676 = !{i64 17023}
!677 = !{i64 17026}
!678 = !{i64 17038}
!679 = !{i64 17047}
!680 = !{i64 17065}
!681 = !{i64 17075}
!682 = !{i64 17091}
!683 = !{i64 17097}
!684 = !{i64 17101}
!685 = !{i64 17109}
!686 = !{i64 17116}
!687 = !{i64 17117}
!688 = !{i64 17133}
!689 = !{i64 17160}
!690 = !{i64 17181}
!691 = !{i64 17190}
!692 = !{i64 17197}
!693 = !{i64 17202}
!694 = !{i64 17195}
!695 = !{i64 17320}
!696 = !{i64 17228}
!697 = !{i64 17240}
!698 = !{i64 17249}
!699 = !{i64 17254}
!700 = !{i64 17305}
!701 = !{i64 17339}
!702 = !{i64 17351}
!703 = !{i64 17354}
!704 = !{i64 17375}
!705 = !{i64 17397}
!706 = !{i64 17402}
!707 = !{i64 17404}
!708 = !{i64 17456}
!709 = !{i64 17420}
!710 = !{i64 17432}
!711 = !{i64 17435}
!712 = !{i64 17441}
!713 = !{i64 17465}
!714 = !{i64 17477}
!715 = !{i64 17487}
!716 = !{i64 17502}
!717 = !{i64 17564}
!718 = !{i64 17536}
!719 = !{i64 17548}
!720 = !{i64 17551}
!721 = !{i64 17569}
!722 = !{i64 17581}
!723 = !{i64 17583}
!724 = !{i64 17590}
!725 = !{i64 17594}
!726 = !{i64 17596}
!727 = !{i64 17606}
!728 = !{i64 17628}
!729 = !{i64 17631}
!730 = !{i64 17637}
!731 = !{i64 17652}
!732 = !{i64 17661}
!733 = !{i64 17673}
!734 = !{i64 17702}
!735 = !{i64 17705}
!736 = !{i64 17690}
!737 = !{i64 17710}
!738 = !{i64 17713}
!739 = !{i64 17722}
!740 = !{i64 17731}
!741 = !{i64 17740}
!742 = !{i64 17742}
!743 = !{i64 17752}
!744 = !{i64 17766}
!745 = !{i64 17772}
!746 = !{i64 17791}
!747 = !{i64 17801}
!748 = !{i64 17823}
!749 = !{i64 17833}
!750 = !{i64 17855}
!751 = !{i64 17865}
!752 = !{i64 17887}
!753 = !{i64 17897}
!754 = !{i64 17919}
!755 = !{i64 17929}
!756 = !{i64 17951}
!757 = !{i64 17961}
!758 = !{i64 17983}
!759 = !{i64 17990}
!760 = !{i64 18004}
!761 = !{i64 18014}
!762 = !{i64 18024}
!763 = !{i64 18035}
!764 = !{i64 18048}
