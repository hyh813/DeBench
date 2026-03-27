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
@global_var_5004 = constant [9 x i8] c"HelloLib\00"
@global_var_500d = constant [4 x i8] c"def\00"
@global_var_5011 = constant [4 x i8] c"abc\00"
@global_var_5015 = constant [4 x i8] c"xyz\00"
@global_var_5019 = constant [4 x i8] c"aaa\00"
@global_var_501d = constant [4 x i8] c"bbb\00"
@global_var_5021 = constant [21 x i8] c"Value: %d, Name: %s\0A\00"
@global_var_5094 = constant [5 x i8] c"Test\00"
@global_var_5036 = constant [6 x i8] c"%d,%d\00"
@global_var_503c = constant [8 x i8] c"123,456\00"
@global_var_5046 = constant [12 x i8] c"/etc/passwd\00"
@global_var_5052 = constant [3 x i8] c"w+\00"
@global_var_5055 = constant [19 x i8] c"BinBench Test Data\00"
@global_var_5068 = constant [23 x i8] c"/tmp/binbench_test.tmp\00"
@global_var_507f = constant [6 x i8] c"Bench\00"
@global_var_5085 = constant [20 x i8] c"Hello BinBench Test\00"
@global_var_51e7 = constant [10 x i8] c"/bin/true\00"
@global_var_51f1 = constant [10 x i8] c"HelloPipe\00"
@global_var_51fb = constant [18 x i8] c"/tmp/binbench_shm\00"
@global_var_52ec = constant [10 x i8] c"Thread-%d\00"
@0 = external global i32
@global_var_8020 = local_unnamed_addr global i8 0
@global_var_3e8 = global i32 2
@1 = internal constant [2 x i8] c"r\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i64 0, i64 0)
@3 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\87\E5\87\86\E5\BA\93\E5\87\BD\E6\95\B0\E8\B0\83\E7\94\A8 ===\00"
@global_var_53c0 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @3, i64 0, i64 0)
@4 = internal constant [27 x i8] c"LIB-L1-01: %d (\E6\9C\9F\E6\9C\9B: 8)\0A\00"
@global_var_5099 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @4, i64 0, i64 0)
@5 = internal constant [27 x i8] c"LIB-L1-02: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_50b4 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @5, i64 0, i64 0)
@6 = internal constant [28 x i8] c"LIB-L1-03: %d (\E6\9C\9F\E6\9C\9B: 12)\0A\00"
@global_var_50cf = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @6, i64 0, i64 0)
@7 = internal constant [28 x i8] c"LIB-L1-04: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_50eb = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @7, i64 0, i64 0)
@8 = internal constant [28 x i8] c"LIB-L1-05: %d (\E6\9C\9F\E6\9C\9B: -1)\0A\00"
@global_var_5107 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i64 0, i64 0)
@9 = internal constant [28 x i8] c"LIB-L1-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_5123 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i64 0, i64 0)
@10 = internal constant [29 x i8] c"LIB-L1-07: %d (\E6\9C\9F\E6\9C\9B: 579)\0A\00"
@global_var_513f = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"LIB-L1-08: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_515c = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [28 x i8] c"LIB-L1-09: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_5178 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @12, i64 0, i64 0)
@13 = internal constant [28 x i8] c"LIB-L1-10: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_5194 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @13, i64 0, i64 0)
@14 = internal constant [27 x i8] c"LIB-L1-11: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_51b0 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @14, i64 0, i64 0)
@15 = internal constant [28 x i8] c"LIB-L1-12: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_51cb = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @15, i64 0, i64 0)
@global_var_3b6 = global i32 -108735504
@global_var_1000 = global i32 0
@global_var_7d0 = global i32 16
@16 = internal constant [27 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\B3\BB\E7\BB\9F\E8\B0\83\E7\94\A8 ===\00"
@global_var_520d = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @16, i64 0, i64 0)
@17 = internal constant [28 x i8] c"SYS-L3-01: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_5228 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i64 0, i64 0)
@18 = internal constant [28 x i8] c"SYS-L3-02: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_5244 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @18, i64 0, i64 0)
@19 = internal constant [28 x i8] c"SYS-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_5260 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @19, i64 0, i64 0)
@20 = internal constant [28 x i8] c"SYS-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_527c = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @20, i64 0, i64 0)
@21 = internal constant [28 x i8] c"SYS-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_5298 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @21, i64 0, i64 0)
@22 = internal constant [28 x i8] c"SYS-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_52b4 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @22, i64 0, i64 0)
@23 = internal constant [28 x i8] c"SYS-L3-07: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_52d0 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @23, i64 0, i64 0)
@24 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\BA\BF\E7\A8\8B\E4\B8\8E\E5\B9\B6\E5\8F\91 ===\00"
@global_var_52f6 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @24, i64 0, i64 0)
@25 = internal constant [28 x i8] c"THR-L3-01: %d (\E6\9C\9F\E6\9C\9B: 49)\0A\00"
@global_var_5314 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @25, i64 0, i64 0)
@26 = internal constant [29 x i8] c"THR-L3-02: %d (\E6\9C\9F\E6\9C\9B: 465)\0A\00"
@global_var_5330 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @26, i64 0, i64 0)
@27 = internal constant [28 x i8] c"THR-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_534d = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @27, i64 0, i64 0)
@28 = internal constant [28 x i8] c"THR-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_5369 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @28, i64 0, i64 0)
@29 = internal constant [28 x i8] c"THR-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_5385 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @29, i64 0, i64 0)
@30 = internal constant [28 x i8] c"THR-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_53a1 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @30, i64 0, i64 0)
@global_var_5044 = constant [2 x i8] c"r\00"

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

define i8* @function_2440(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_2440:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !14
  ret i8* %0, !insn.addr !14
}

define i32 @function_2450(i8* %s) local_unnamed_addr {
dec_label_pc_2450:
  %0 = call i32 @puts(i8* %s), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define i32 @function_2460(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_2460:
  %0 = call i32 @fread(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i32 @function_2470(i32 %fd, i32 %level, i32 %optname, i64* %optval, i32 %optlen) local_unnamed_addr {
dec_label_pc_2470:
  %0 = call i32 @setsockopt(i32 %fd, i32 %level, i32 %optname, i64* %optval, i32 %optlen), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i32 @function_2480(i64* %shmaddr) local_unnamed_addr {
dec_label_pc_2480:
  %0 = call i32 @shmdt(i64* %shmaddr), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define i32 @function_2490(i32 %fd, i64* %buf, i32 %n) local_unnamed_addr {
dec_label_pc_2490:
  %0 = call i32 @write(i32 %fd, i64* %buf, i32 %n), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @function_24a0(i64* %cond, i64* %mutex) local_unnamed_addr {
dec_label_pc_24a0:
  %0 = call i32 @pthread_cond_wait(i64* %cond, i64* %mutex), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i32 @function_24b0(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_24b0:
  %0 = call i32 @fclose(%_IO_FILE* %stream), !insn.addr !21
  ret i32 %0, !insn.addr !21
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

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_2760:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !64
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !64
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !64
  %3 = call i32 @__libc_start_main(i64 16509, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !64
  %4 = call i64 @__asm_hlt(), !insn.addr !65
  unreachable, !insn.addr !65
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_2790:
  ret i64 32784, !insn.addr !66
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_27c0:
  ret i64 0, !insn.addr !67
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_2800:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* @global_var_8020, align 1, !insn.addr !68
  %3 = icmp eq i8 %2, 0, !insn.addr !68
  %4 = icmp eq i1 %3, false, !insn.addr !69
  br i1 %4, label %dec_label_pc_2838, label %dec_label_pc_280d, !insn.addr !69

dec_label_pc_280d:                                ; preds = %dec_label_pc_2800
  %5 = load i64, i64* inttoptr (i64 32760 to i64*), align 8, !insn.addr !70
  %6 = icmp eq i64 %5, 0, !insn.addr !70
  br i1 %6, label %dec_label_pc_2827, label %dec_label_pc_281b, !insn.addr !71

dec_label_pc_281b:                                ; preds = %dec_label_pc_280d
  %7 = load i64, i64* inttoptr (i64 32776 to i64*), align 8, !insn.addr !72
  %8 = inttoptr i64 %7 to i64*, !insn.addr !73
  call void @__cxa_finalize(i64* %8), !insn.addr !73
  br label %dec_label_pc_2827, !insn.addr !73

dec_label_pc_2827:                                ; preds = %dec_label_pc_281b, %dec_label_pc_280d
  %9 = call i64 @deregister_tm_clones(), !insn.addr !74
  store i8 1, i8* @global_var_8020, align 1, !insn.addr !75
  ret i64 %9, !insn.addr !76

dec_label_pc_2838:                                ; preds = %dec_label_pc_2800
  ret i64 %1, !insn.addr !77

; uselistorder directives
  uselistorder i8* @global_var_8020, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_2840:
  %0 = call i64 @register_tm_clones(), !insn.addr !78
  ret i64 %0, !insn.addr !78
}

define void @signal_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_2849:
  store i32 1, i32* @signal_received, align 4, !insn.addr !79
  store i32 %sig, i32* @signal_number, align 4, !insn.addr !80
  ret void, !insn.addr !81
}

define i8* @thread_sum(i8* %arg) local_unnamed_addr {
dec_label_pc_285e:
  %rdx.0.reg2mem = alloca i64, !insn.addr !82
  %rax.0.reg2mem = alloca i64, !insn.addr !82
  %rdi = alloca i64, align 8
  %0 = ptrtoint i8* %arg to i64
  store i64 %0, i64* %rdi, align 8
  %1 = add i64 %0, 8, !insn.addr !83
  %2 = inttoptr i64 %1 to i32*, !insn.addr !83
  store i32 0, i32* %2, align 4, !insn.addr !83
  %3 = bitcast i64* %rdi to i32*
  %4 = load i32, i32* %3, align 8, !insn.addr !84
  %5 = add i64 %0, 4, !insn.addr !85
  %6 = inttoptr i64 %5 to i32*, !insn.addr !85
  %7 = load i32, i32* %6, align 4, !insn.addr !85
  %8 = icmp ugt i32 %4, %7, !insn.addr !86
  br i1 %8, label %dec_label_pc_2886, label %dec_label_pc_2872, !insn.addr !86

dec_label_pc_2872:                                ; preds = %dec_label_pc_285e
  %9 = zext i32 %4 to i64, !insn.addr !84
  %10 = add i32 %7, 1
  store i64 %9, i64* %rax.0.reg2mem, !insn.addr !87
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !87
  br label %dec_label_pc_287a, !insn.addr !87

dec_label_pc_287a:                                ; preds = %dec_label_pc_287a, %dec_label_pc_2872
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %11 = add nuw nsw i64 %rdx.0.reload, %rax.0.reload, !insn.addr !88
  %12 = and i64 %11, 4294967295, !insn.addr !88
  %13 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !89
  %14 = and i64 %13, 4294967295, !insn.addr !89
  %15 = trunc i64 %13 to i32, !insn.addr !90
  %16 = icmp eq i32 %10, %15, !insn.addr !90
  %17 = icmp eq i1 %16, false, !insn.addr !91
  store i64 %14, i64* %rax.0.reg2mem, !insn.addr !91
  store i64 %12, i64* %rdx.0.reg2mem, !insn.addr !91
  br i1 %17, label %dec_label_pc_287a, label %dec_label_pc_2883, !insn.addr !91

dec_label_pc_2883:                                ; preds = %dec_label_pc_287a
  %18 = trunc i64 %11 to i32, !insn.addr !92
  %19 = load i64, i64* %rdi, align 8, !insn.addr !92
  %20 = add i64 %19, 8, !insn.addr !92
  %21 = inttoptr i64 %20 to i32*, !insn.addr !92
  store i32 %18, i32* %21, align 4, !insn.addr !92
  br label %dec_label_pc_2886, !insn.addr !92

dec_label_pc_2886:                                ; preds = %dec_label_pc_2883, %dec_label_pc_285e
  ret i8* null, !insn.addr !93

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i64 %0, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
}

define i8* @thread_compute(i8* %arg) local_unnamed_addr {
dec_label_pc_288c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = call i64* @malloc(i32 4), !insn.addr !94
  %4 = mul i32 %2, %2, !insn.addr !95
  %5 = bitcast i64* %3 to i32*, !insn.addr !96
  store i32 %4, i32* %5, align 4, !insn.addr !96
  %6 = bitcast i64* %3 to i8*, !insn.addr !97
  ret i8* %6, !insn.addr !97

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i8* @thread_increment(i8* %arg) local_unnamed_addr {
dec_label_pc_28a4:
  %0 = alloca i64
  %rbx.0.reg2mem = alloca i64, !insn.addr !98
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp slt i32 %2, 1
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !99
  br i1 %3, label %dec_label_pc_28f1, label %dec_label_pc_28c0, !insn.addr !99

dec_label_pc_28c0:                                ; preds = %dec_label_pc_28a4, %dec_label_pc_28c0
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %4 = call i32 @pthread_mutex_lock(i64* bitcast (i32* @counter_mutex to i64*)), !insn.addr !100
  %5 = load i32, i32* @shared_counter, align 4, !insn.addr !101
  %6 = add i32 %5, 1, !insn.addr !102
  store i32 %6, i32* @shared_counter, align 4, !insn.addr !103
  %7 = call i32 @pthread_mutex_unlock(i64* bitcast (i32* @counter_mutex to i64*)), !insn.addr !104
  %8 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !105
  %9 = add nuw nsw i64 %rbx.0.reload, 1, !insn.addr !106
  %10 = and i64 %9, 4294967295, !insn.addr !106
  %11 = trunc i64 %9 to i32, !insn.addr !107
  %12 = icmp eq i32 %2, %11, !insn.addr !107
  %13 = icmp eq i1 %12, false, !insn.addr !108
  store i64 %10, i64* %rbx.0.reg2mem, !insn.addr !108
  br i1 %13, label %dec_label_pc_28c0, label %dec_label_pc_28f1, !insn.addr !108

dec_label_pc_28f1:                                ; preds = %dec_label_pc_28c0, %dec_label_pc_28a4
  ret i8* null, !insn.addr !109

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* bitcast (i32* @counter_mutex to i64*), { 1, 0 }
  uselistorder label %dec_label_pc_28c0, { 1, 0 }
}

define i8* @consumer_thread(i8* %arg) local_unnamed_addr {
dec_label_pc_28fb:
  %0 = call i32 @pthread_mutex_lock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !110
  %1 = load i32, i32* @ready, align 4, !insn.addr !111
  %2 = icmp eq i32 %1, 0, !insn.addr !111
  %3 = icmp eq i1 %2, false, !insn.addr !112
  br i1 %3, label %dec_label_pc_293c, label %dec_label_pc_2928, !insn.addr !112

dec_label_pc_2928:                                ; preds = %dec_label_pc_28fb, %dec_label_pc_2928
  %4 = call i32 @pthread_cond_wait(i64* bitcast (i32* @cond to i64*), i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !113
  %5 = load i32, i32* @ready, align 4, !insn.addr !114
  %6 = icmp eq i32 %5, 0, !insn.addr !114
  br i1 %6, label %dec_label_pc_2928, label %dec_label_pc_293c, !insn.addr !115

dec_label_pc_293c:                                ; preds = %dec_label_pc_2928, %dec_label_pc_28fb
  %7 = load i32, i32* @data, align 4, !insn.addr !116
  %8 = call i32 @pthread_mutex_unlock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !117
  %9 = call i64* @malloc(i32 4), !insn.addr !118
  %10 = bitcast i64* %9 to i32*, !insn.addr !119
  store i32 %7, i32* %10, align 4, !insn.addr !119
  %11 = bitcast i64* %9 to i8*, !insn.addr !120
  ret i8* %11, !insn.addr !120

; uselistorder directives
  uselistorder label %dec_label_pc_2928, { 1, 0 }
}

define i8* @producer_thread(i8* %arg) local_unnamed_addr {
dec_label_pc_2961:
  %0 = call i32 @sleep(i32 1), !insn.addr !121
  %1 = call i32 @pthread_mutex_lock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !122
  store i32 42, i32* @data, align 4, !insn.addr !123
  store i32 1, i32* @ready, align 4, !insn.addr !124
  %2 = call i32 @pthread_cond_signal(i64* bitcast (i32* @cond to i64*)), !insn.addr !125
  %3 = call i32 @pthread_mutex_unlock(i64* bitcast (i32* @cond_mutex to i64*)), !insn.addr !126
  ret i8* null, !insn.addr !127

; uselistorder directives
  uselistorder i32 (i64*)* @pthread_mutex_unlock, { 1, 0, 2, 3 }
  uselistorder i64* bitcast (i32* @cond to i64*), { 1, 0 }
  uselistorder i64* bitcast (i32* @cond_mutex to i64*), { 1, 2, 3, 0, 4 }
}

define i8* @thread_atomic_increment(i8* %arg) local_unnamed_addr {
dec_label_pc_29ae:
  %0 = alloca i64
  %rdx.0.reg2mem = alloca i64, !insn.addr !128
  %.reg2mem = alloca i32, !insn.addr !128
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp slt i32 %2, 1
  br i1 %3, label %dec_label_pc_29dc, label %dec_label_pc_29bd.preheader, !insn.addr !129

dec_label_pc_29bd.preheader:                      ; preds = %dec_label_pc_29ae
  %atomic_counter.promoted = load i32, i32* @atomic_counter, align 4
  store i32 %atomic_counter.promoted, i32* %.reg2mem
  store i64 0, i64* %rdx.0.reg2mem
  br label %dec_label_pc_29bd

dec_label_pc_29bd:                                ; preds = %dec_label_pc_29bd.preheader, %dec_label_pc_29bd
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %4 = add i32 %.reload, 1, !insn.addr !130
  %5 = trunc i64 %rdx.0.reload to i32
  %6 = add i32 %5, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !131
  %7 = icmp eq i32 %4, %5, !insn.addr !132
  %8 = select i1 %7, i32 %6, i32 %4, !insn.addr !132
  %9 = add nuw nsw i64 %rdx.0.reload, 1, !insn.addr !133
  %10 = and i64 %9, 4294967295, !insn.addr !133
  %11 = trunc i64 %9 to i32, !insn.addr !134
  %12 = icmp eq i32 %2, %11, !insn.addr !134
  %13 = icmp eq i1 %12, false, !insn.addr !135
  store i32 %8, i32* %.reg2mem, !insn.addr !135
  store i64 %10, i64* %rdx.0.reg2mem, !insn.addr !135
  br i1 %13, label %dec_label_pc_29bd, label %dec_label_pc_29dc.loopexit, !insn.addr !135

dec_label_pc_29dc.loopexit:                       ; preds = %dec_label_pc_29bd
  store i32 %8, i32* @atomic_counter, align 4
  br label %dec_label_pc_29dc

dec_label_pc_29dc:                                ; preds = %dec_label_pc_29dc.loopexit, %dec_label_pc_29ae
  ret i8* null, !insn.addr !136

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
  uselistorder i32 %4, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_29bd, { 1, 0 }
}

define i8* @thread_atomic_load_store(i8* %arg) local_unnamed_addr {
dec_label_pc_29e2:
  %0 = load i32, i32* @atomic_counter, align 4, !insn.addr !137
  %1 = add i32 %0, 100, !insn.addr !138
  store i32 %1, i32* @atomic_counter, align 4, !insn.addr !139
  ret i8* null, !insn.addr !140
}

define i8* @thread_tls_test(i8* %arg) local_unnamed_addr {
dec_label_pc_29fb:
  %0 = call i32 @__readfsdword(i64 -36), !insn.addr !141
  %1 = add i32 %0, 50, !insn.addr !142
  call void @__writefsdword(i64 -36, i32 %1), !insn.addr !143
  %2 = call i64 @__readfsqword(i64 0), !insn.addr !144
  %3 = add i64 %2, -32, !insn.addr !145
  %4 = inttoptr i64 %3 to i8*, !insn.addr !146
  %5 = call i8* @strncpy(i8* %4, i8* %arg, i32 31), !insn.addr !146
  %6 = call i64* @malloc(i32 8), !insn.addr !147
  %7 = ptrtoint i64* %6 to i64, !insn.addr !147
  %8 = bitcast i64* %6 to i32*, !insn.addr !148
  store i32 %0, i32* %8, align 4, !insn.addr !148
  %9 = add i64 %7, 4, !insn.addr !149
  %10 = inttoptr i64 %9 to i32*, !insn.addr !149
  store i32 %1, i32* %10, align 4, !insn.addr !149
  %11 = bitcast i64* %6 to i8*, !insn.addr !150
  ret i8* %11, !insn.addr !150
}

define i32 @param_strcpy(i8* %dst, i8* %src) local_unnamed_addr {
dec_label_pc_2a4b:
  %0 = call i8* @strcpy(i8* %dst, i8* %src), !insn.addr !151
  %1 = call i32 @strlen(i8* %dst), !insn.addr !152
  ret i32 %1, !insn.addr !153
}

define i32 @call_strcpy() local_unnamed_addr {
dec_label_pc_2a62:
  %stack_var_-56 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !154
  %1 = bitcast i64* %stack_var_-56 to i8*, !insn.addr !155
  %2 = call i32 @param_strcpy(i8* nonnull %1, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_5004, i64 0, i64 0)), !insn.addr !155
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !156
  %4 = icmp eq i64 %0, %3, !insn.addr !156
  %5 = icmp eq i1 %4, false, !insn.addr !157
  br i1 %5, label %dec_label_pc_2a9e, label %dec_label_pc_2a99, !insn.addr !157

dec_label_pc_2a99:                                ; preds = %dec_label_pc_2a62
  ret i32 %2, !insn.addr !158

dec_label_pc_2a9e:                                ; preds = %dec_label_pc_2a62
  call void @__stack_chk_fail(), !insn.addr !159
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !159
}

define i32 @param_strcmp(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_2aa3:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !160
  %1 = ashr i32 %0, 31, !insn.addr !161
  %2 = icmp slt i32 %0, 1
  %3 = select i1 %2, i32 %1, i32 1, !insn.addr !162
  ret i32 %3, !insn.addr !163
}

define i32 @call_strcmp() local_unnamed_addr {
dec_label_pc_2ac0:
  %0 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_5011, i64 0, i64 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_500d, i64 0, i64 0)), !insn.addr !164
  %1 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_5015, i64 0, i64 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_5015, i64 0, i64 0)), !insn.addr !165
  %2 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_501d, i64 0, i64 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_5019, i64 0, i64 0)), !insn.addr !166
  %3 = add i32 %1, %0, !insn.addr !167
  %4 = add i32 %3, %2, !insn.addr !168
  ret i32 %4, !insn.addr !169

; uselistorder directives
  uselistorder i32 (i8*, i8*)* @param_strcmp, { 2, 1, 0 }
}

define i64 @param_strlen() local_unnamed_addr {
dec_label_pc_2b0e:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i8*, !insn.addr !170
  %3 = call i32 @strlen(i8* %2), !insn.addr !170
  %4 = sext i32 %3 to i64, !insn.addr !170
  ret i64 %4, !insn.addr !171
}

define i32 @call_strlen() local_unnamed_addr {
dec_label_pc_2b20:
  ret i32 12, !insn.addr !172
}

define i32 @param_memcpy(i8* %dst, i32* %src, i64 %n) local_unnamed_addr {
dec_label_pc_2b2a:
  %0 = bitcast i8* %dst to i64*, !insn.addr !173
  %1 = bitcast i32* %src to i64*, !insn.addr !173
  %2 = trunc i64 %n to i32, !insn.addr !173
  %3 = call i64* @memcpy(i64* %0, i64* %1, i32 %2), !insn.addr !173
  ret i32 %2, !insn.addr !174
}

define i32 @call_memcpy() local_unnamed_addr {
dec_label_pc_2b3b:
  %stack_var_-40 = alloca i32, align 4
  %stack_var_-72 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !175
  store i64 10, i64* %stack_var_-72, align 8, !insn.addr !176
  store i32 0, i32* %stack_var_-40, align 4, !insn.addr !177
  %1 = bitcast i32* %stack_var_-40 to i8*, !insn.addr !178
  %2 = bitcast i64* %stack_var_-72 to i32*, !insn.addr !178
  %3 = call i32 @param_memcpy(i8* nonnull %1, i32* nonnull %2, i64 20), !insn.addr !178
  %4 = load i32, i32* %stack_var_-40, align 4, !insn.addr !179
  %5 = call i64 @__readfsqword(i64 40), !insn.addr !180
  %6 = icmp eq i64 %0, %5, !insn.addr !180
  %7 = icmp eq i1 %6, false, !insn.addr !181
  br i1 %7, label %dec_label_pc_2bc7, label %dec_label_pc_2bc2, !insn.addr !181

dec_label_pc_2bc2:                                ; preds = %dec_label_pc_2b3b
  ret i32 %4, !insn.addr !182

dec_label_pc_2bc7:                                ; preds = %dec_label_pc_2b3b
  call void @__stack_chk_fail(), !insn.addr !183
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !183

; uselistorder directives
  uselistorder i32* %stack_var_-40, { 1, 2, 0 }
}

define i32 @param_memcmp(i32* %p1, i32* %p2, i64 %n) local_unnamed_addr {
dec_label_pc_2bcc:
  %0 = bitcast i32* %p1 to i64*, !insn.addr !184
  %1 = bitcast i32* %p2 to i64*, !insn.addr !184
  %2 = trunc i64 %n to i32, !insn.addr !184
  %3 = call i32 @memcmp(i64* %0, i64* %1, i32 %2), !insn.addr !184
  %4 = ashr i32 %3, 31, !insn.addr !185
  %5 = icmp slt i32 %3, 1
  %6 = select i1 %5, i32 %4, i32 1, !insn.addr !186
  ret i32 %6, !insn.addr !187
}

define i32 @call_memcmp() local_unnamed_addr {
dec_label_pc_2be9:
  %stack_var_-44 = alloca i32, align 4
  %stack_var_-56 = alloca i32, align 4
  %stack_var_-68 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !188
  store i32 1, i32* %stack_var_-68, align 4, !insn.addr !189
  store i32 1, i32* %stack_var_-56, align 4, !insn.addr !190
  store i32 1, i32* %stack_var_-44, align 4, !insn.addr !191
  %1 = call i32 @param_memcmp(i32* nonnull %stack_var_-68, i32* nonnull %stack_var_-56, i64 12), !insn.addr !192
  %2 = call i32 @param_memcmp(i32* nonnull %stack_var_-68, i32* nonnull %stack_var_-44, i64 12), !insn.addr !193
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !194
  %4 = icmp eq i64 %0, %3, !insn.addr !194
  %5 = icmp eq i1 %4, false, !insn.addr !195
  br i1 %5, label %dec_label_pc_2c8f, label %dec_label_pc_2c88, !insn.addr !195

dec_label_pc_2c88:                                ; preds = %dec_label_pc_2be9
  %6 = add i32 %2, %1, !insn.addr !196
  ret i32 %6, !insn.addr !197

dec_label_pc_2c8f:                                ; preds = %dec_label_pc_2be9
  call void @__stack_chk_fail(), !insn.addr !198
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !198

; uselistorder directives
  uselistorder i32 (i32*, i32*, i64)* @param_memcmp, { 1, 0 }
}

define i32 @param_printf(i32 %x, i8* %name) local_unnamed_addr {
dec_label_pc_2c94:
  %0 = zext i32 %x to i64, !insn.addr !199
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_5021, i64 0, i64 0), i64 %0, i8* %name), !insn.addr !200
  ret i32 %1, !insn.addr !201
}

define i32 @call_printf() local_unnamed_addr {
dec_label_pc_2cbc:
  %0 = call i32 @param_printf(i32 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_5094, i64 0, i64 0)), !insn.addr !202
  ret i32 %0, !insn.addr !203
}

define i32 @param_scanf(i8* %input_str) local_unnamed_addr {
dec_label_pc_2cda:
  %storemerge.reg2mem = alloca i32, !insn.addr !204
  %stack_var_-20 = alloca i64, align 8
  %stack_var_-24 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !205
  %1 = call i32 (i8*, i8*, ...) @sscanf(i8* %input_str, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_5036, i64 0, i64 0), i64* nonnull %stack_var_-24, i64* nonnull %stack_var_-20), !insn.addr !206
  %2 = icmp eq i32 %1, 2, !insn.addr !207
  %3 = icmp eq i1 %2, false, !insn.addr !208
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !208
  br i1 %3, label %dec_label_pc_2d12, label %dec_label_pc_2d0b, !insn.addr !208

dec_label_pc_2d0b:                                ; preds = %dec_label_pc_2cda
  %4 = load i64, i64* %stack_var_-20, align 8, !insn.addr !209
  %5 = load i64, i64* %stack_var_-24, align 8, !insn.addr !210
  %6 = add i64 %5, %4, !insn.addr !210
  %phitmp = trunc i64 %6 to i32
  store i32 %phitmp, i32* %storemerge.reg2mem, !insn.addr !210
  br label %dec_label_pc_2d12, !insn.addr !210

dec_label_pc_2d12:                                ; preds = %dec_label_pc_2cda, %dec_label_pc_2d0b
  %7 = call i64 @__readfsqword(i64 40), !insn.addr !211
  %8 = icmp eq i64 %0, %7, !insn.addr !211
  %9 = icmp eq i1 %8, false, !insn.addr !212
  br i1 %9, label %dec_label_pc_2d2e, label %dec_label_pc_2d22, !insn.addr !212

dec_label_pc_2d22:                                ; preds = %dec_label_pc_2d12
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !213

dec_label_pc_2d2e:                                ; preds = %dec_label_pc_2d12
  call void @__stack_chk_fail(), !insn.addr !214
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !214

; uselistorder directives
  uselistorder i64* %stack_var_-24, { 1, 0 }
  uselistorder i64* %stack_var_-20, { 1, 0 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2d12, { 1, 0 }
}

define i32 @call_scanf() local_unnamed_addr {
dec_label_pc_2d33:
  %0 = call i32 @param_scanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_503c, i64 0, i64 0)), !insn.addr !215
  ret i32 %0, !insn.addr !216
}

define i32 @param_fopen_fclose(i8* %filename) local_unnamed_addr {
dec_label_pc_2d4c:
  %rbp.0.reg2mem = alloca i32, !insn.addr !217
  %0 = call %_IO_FILE* @fopen(i8* %filename, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_5044, i64 0, i64 0)), !insn.addr !218
  %1 = icmp eq %_IO_FILE* %0, null, !insn.addr !219
  store i32 -1, i32* %rbp.0.reg2mem, !insn.addr !220
  br i1 %1, label %dec_label_pc_2d7c, label %dec_label_pc_2d67, !insn.addr !220

dec_label_pc_2d67:                                ; preds = %dec_label_pc_2d4c
  %2 = call i32 @fileno(%_IO_FILE* nonnull %0), !insn.addr !221
  %3 = call i32 @fclose(%_IO_FILE* nonnull %0), !insn.addr !222
  store i32 %2, i32* %rbp.0.reg2mem, !insn.addr !222
  br label %dec_label_pc_2d7c, !insn.addr !222

dec_label_pc_2d7c:                                ; preds = %dec_label_pc_2d4c, %dec_label_pc_2d67
  %rbp.0.reload = load i32, i32* %rbp.0.reg2mem
  ret i32 %rbp.0.reload, !insn.addr !223

; uselistorder directives
  uselistorder i32* %rbp.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2d7c, { 1, 0 }
}

define i32 @call_fopen_fclose() local_unnamed_addr {
dec_label_pc_2d8c:
  %0 = call i32 @param_fopen_fclose(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_5046, i64 0, i64 0)), !insn.addr !224
  %1 = ashr i32 %0, 31, !insn.addr !225
  %2 = or i32 %1, 42, !insn.addr !226
  ret i32 %2, !insn.addr !227
}

define i32 @param_fread_fwrite(i8* %tmpfile) local_unnamed_addr {
dec_label_pc_2dab:
  %rax.0.reg2mem = alloca i32, !insn.addr !228
  %stack_var_-72 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !229
  %1 = call %_IO_FILE* @fopen(i8* %tmpfile, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_5052, i64 0, i64 0)), !insn.addr !230
  %2 = icmp eq %_IO_FILE* %1, null, !insn.addr !231
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !232
  br i1 %2, label %dec_label_pc_2e55, label %dec_label_pc_2ddf, !insn.addr !232

dec_label_pc_2ddf:                                ; preds = %dec_label_pc_2dab
  %3 = call i32 @fwrite(i64* bitcast ([19 x i8]* @global_var_5055 to i64*), i32 1, i32 18, %_IO_FILE* nonnull %1), !insn.addr !233
  %4 = icmp eq i32 %3, 18, !insn.addr !234
  %5 = icmp eq i1 %4, false, !insn.addr !235
  br i1 %5, label %dec_label_pc_2e6e, label %dec_label_pc_2e01, !insn.addr !235

dec_label_pc_2e01:                                ; preds = %dec_label_pc_2ddf
  %6 = ptrtoint i64* %stack_var_-72 to i64, !insn.addr !236
  call void @rewind(%_IO_FILE* nonnull %1), !insn.addr !237
  %7 = call i32 @fread(i64* nonnull %stack_var_-72, i32 1, i32 18, %_IO_FILE* nonnull %1), !insn.addr !238
  %8 = sext i32 %7 to i64, !insn.addr !238
  %9 = add i64 %8, %6, !insn.addr !239
  %10 = inttoptr i64 %9 to i8*, !insn.addr !239
  store i8 0, i8* %10, align 1, !insn.addr !239
  %11 = call i32 @fclose(%_IO_FILE* nonnull %1), !insn.addr !240
  %12 = call i32 @unlink(i8* %tmpfile), !insn.addr !241
  %13 = icmp eq i32 %7, 18, !insn.addr !242
  %14 = icmp eq i1 %13, false, !insn.addr !243
  store i32 -3, i32* %rax.0.reg2mem, !insn.addr !243
  br i1 %14, label %dec_label_pc_2e55, label %dec_label_pc_2e3b, !insn.addr !243

dec_label_pc_2e3b:                                ; preds = %dec_label_pc_2e01
  %15 = bitcast i64* %stack_var_-72 to i8*, !insn.addr !244
  %16 = call i32 @strcmp(i8* nonnull %15, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_5055, i64 0, i64 0)), !insn.addr !244
  %17 = icmp eq i32 %16, 0, !insn.addr !245
  %phitmp = select i1 %17, i32 42, i32 -3, !insn.addr !246
  store i32 %phitmp, i32* %rax.0.reg2mem, !insn.addr !246
  br label %dec_label_pc_2e55, !insn.addr !246

dec_label_pc_2e55:                                ; preds = %dec_label_pc_2e01, %dec_label_pc_2dab, %dec_label_pc_2e6e, %dec_label_pc_2e3b
  %18 = call i64 @__readfsqword(i64 40), !insn.addr !247
  %19 = icmp eq i64 %0, %18, !insn.addr !247
  %20 = icmp eq i1 %19, false, !insn.addr !248
  br i1 %20, label %dec_label_pc_2e8b, label %dec_label_pc_2e65, !insn.addr !248

dec_label_pc_2e65:                                ; preds = %dec_label_pc_2e55
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !249

dec_label_pc_2e6e:                                ; preds = %dec_label_pc_2ddf
  %21 = call i32 @fclose(%_IO_FILE* nonnull %1), !insn.addr !250
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !251
  br label %dec_label_pc_2e55, !insn.addr !251

dec_label_pc_2e8b:                                ; preds = %dec_label_pc_2e55
  call void @__stack_chk_fail(), !insn.addr !252
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !252

; uselistorder directives
  uselistorder %_IO_FILE* %1, { 3, 0, 1, 2, 4, 5 }
  uselistorder i32* %rax.0.reg2mem, { 4, 0, 3, 1, 2 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 1, 2, 0, 3 }
  uselistorder i32 18, { 0, 2, 1, 3 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2e55, { 2, 3, 0, 1 }
}

define i32 @call_fread_fwrite() local_unnamed_addr {
dec_label_pc_2e90:
  %0 = call i32 @param_fread_fwrite(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_5068, i64 0, i64 0)), !insn.addr !253
  ret i32 %0, !insn.addr !254
}

define i32 @param_malloc_free(i64 %size) local_unnamed_addr {
dec_label_pc_2ea9:
  %rbx.0.reg2mem = alloca i32, !insn.addr !255
  %rdx.0.reg2mem = alloca i64, !insn.addr !255
  %rcx.0.reg2mem = alloca i64, !insn.addr !255
  %0 = mul i64 %size, 4, !insn.addr !256
  %1 = trunc i64 %0 to i32, !insn.addr !257
  %2 = call i64* @malloc(i32 %1), !insn.addr !257
  %3 = icmp eq i64* %2, null, !insn.addr !258
  store i32 -1, i32* %rbx.0.reg2mem, !insn.addr !259
  br i1 %3, label %dec_label_pc_2efa, label %dec_label_pc_2ecb, !insn.addr !259

dec_label_pc_2ecb:                                ; preds = %dec_label_pc_2ea9
  %4 = ptrtoint i64* %2 to i64, !insn.addr !257
  %5 = icmp eq i64 %size, 0, !insn.addr !260
  %.pre = add i64 %0, %4
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !261
  store i64 %4, i64* %rdx.0.reg2mem, !insn.addr !261
  br i1 %5, label %dec_label_pc_2eed, label %dec_label_pc_2edf, !insn.addr !261

dec_label_pc_2edf:                                ; preds = %dec_label_pc_2ecb, %dec_label_pc_2edf
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %6 = trunc i64 %rcx.0.reload to i32, !insn.addr !262
  %7 = inttoptr i64 %rdx.0.reload to i32*, !insn.addr !262
  store i32 %6, i32* %7, align 4, !insn.addr !262
  %8 = add nuw nsw i64 %rcx.0.reload, 10, !insn.addr !263
  %9 = and i64 %8, 4294967295, !insn.addr !263
  %10 = add i64 %rdx.0.reload, 4, !insn.addr !264
  %11 = icmp eq i64 %10, %.pre, !insn.addr !265
  %12 = icmp eq i1 %11, false, !insn.addr !266
  store i64 %9, i64* %rcx.0.reg2mem, !insn.addr !266
  store i64 %10, i64* %rdx.0.reg2mem, !insn.addr !266
  br i1 %12, label %dec_label_pc_2edf, label %dec_label_pc_2eed, !insn.addr !266

dec_label_pc_2eed:                                ; preds = %dec_label_pc_2edf, %dec_label_pc_2ecb
  %13 = bitcast i64* %2 to i32*, !insn.addr !267
  %14 = load i32, i32* %13, align 4, !insn.addr !267
  %15 = add i64 %.pre, -4, !insn.addr !268
  %16 = inttoptr i64 %15 to i32*, !insn.addr !268
  %17 = load i32, i32* %16, align 4, !insn.addr !268
  %18 = add i32 %17, %14, !insn.addr !268
  call void @free(i64* nonnull %2), !insn.addr !269
  store i32 %18, i32* %rbx.0.reg2mem, !insn.addr !269
  br label %dec_label_pc_2efa, !insn.addr !269

dec_label_pc_2efa:                                ; preds = %dec_label_pc_2ea9, %dec_label_pc_2eed
  %rbx.0.reload = load i32, i32* %rbx.0.reg2mem
  ret i32 %rbx.0.reload, !insn.addr !270

; uselistorder directives
  uselistorder i64 %rcx.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64* %2, { 0, 1, 3, 2 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64* %rcx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rbx.0.reg2mem, { 0, 2, 1 }
  uselistorder i64 %size, { 1, 0 }
  uselistorder label %dec_label_pc_2efa, { 1, 0 }
  uselistorder label %dec_label_pc_2edf, { 1, 0 }
}

define i32 @call_malloc_free() local_unnamed_addr {
dec_label_pc_2f0a:
  %0 = call i32 @param_malloc_free(i64 10), !insn.addr !271
  ret i32 %0, !insn.addr !272

; uselistorder directives
  uselistorder i64 10, { 2, 0, 1 }
}

define i32 @param_memset(i8* %buffer, i64 %size) local_unnamed_addr {
dec_label_pc_2f21:
  %rdx.1.reg2mem = alloca i32, !insn.addr !273
  %rdx.0.reg2mem = alloca i64, !insn.addr !273
  %rax.0.reg2mem = alloca i64, !insn.addr !273
  %0 = bitcast i8* %buffer to i64*, !insn.addr !274
  %1 = trunc i64 %size to i32, !insn.addr !274
  %2 = call i64* @memset(i64* %0, i32 0, i32 %1), !insn.addr !274
  %3 = icmp eq i64 %size, 0, !insn.addr !275
  store i32 0, i32* %rdx.1.reg2mem, !insn.addr !276
  br i1 %3, label %dec_label_pc_2f5a, label %dec_label_pc_2f43, !insn.addr !276

dec_label_pc_2f43:                                ; preds = %dec_label_pc_2f21
  %4 = ptrtoint i64* %2 to i64, !insn.addr !274
  %5 = ptrtoint i8* %buffer to i64
  %6 = add i64 %5, %size, !insn.addr !277
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !278
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !278
  br label %dec_label_pc_2f4c, !insn.addr !278

dec_label_pc_2f4c:                                ; preds = %dec_label_pc_2f4c, %dec_label_pc_2f43
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %7 = inttoptr i64 %rax.0.reload to i8*, !insn.addr !279
  %8 = load i8, i8* %7, align 1, !insn.addr !279
  %9 = zext i8 %8 to i64, !insn.addr !280
  %10 = add nuw nsw i64 %rdx.0.reload, %9, !insn.addr !280
  %11 = and i64 %10, 4294967295, !insn.addr !280
  %12 = add i64 %rax.0.reload, 1, !insn.addr !281
  %13 = icmp eq i64 %12, %6, !insn.addr !282
  %14 = icmp eq i1 %13, false, !insn.addr !283
  store i64 %12, i64* %rax.0.reg2mem, !insn.addr !283
  store i64 %11, i64* %rdx.0.reg2mem, !insn.addr !283
  br i1 %14, label %dec_label_pc_2f4c, label %dec_label_pc_2f5a.loopexit, !insn.addr !283

dec_label_pc_2f5a.loopexit:                       ; preds = %dec_label_pc_2f4c
  %phitmp = trunc i64 %10 to i32
  store i32 %phitmp, i32* %rdx.1.reg2mem
  br label %dec_label_pc_2f5a

dec_label_pc_2f5a:                                ; preds = %dec_label_pc_2f5a.loopexit, %dec_label_pc_2f21
  %rdx.1.reload = load i32, i32* %rdx.1.reg2mem
  ret i32 %rdx.1.reload, !insn.addr !284

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 %size, { 0, 2, 1 }
  uselistorder i8* %buffer, { 1, 0 }
}

define i32 @call_memset() local_unnamed_addr {
dec_label_pc_2f6a:
  %0 = alloca i32
  %rax.0.reg2mem = alloca i64, !insn.addr !285
  %1 = load i32, i32* %0
  %stack_var_-16 = alloca i64, align 8
  %stack_var_-56 = alloca i32, align 4
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !286
  store i64 %2, i64* %stack_var_-16, align 8, !insn.addr !287
  %3 = ptrtoint i32* %stack_var_-56 to i64, !insn.addr !288
  %4 = ptrtoint i64* %stack_var_-16 to i64, !insn.addr !289
  store i64 %3, i64* %rax.0.reg2mem, !insn.addr !289
  br label %dec_label_pc_2f8a, !insn.addr !289

dec_label_pc_2f8a:                                ; preds = %dec_label_pc_2f8a, %dec_label_pc_2f6a
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %5 = inttoptr i64 %rax.0.reload to i32*, !insn.addr !290
  store i32 255, i32* %5, align 4, !insn.addr !290
  %6 = add i64 %rax.0.reload, 4, !insn.addr !291
  %7 = icmp eq i64 %6, %4, !insn.addr !292
  %8 = icmp eq i1 %7, false, !insn.addr !293
  store i64 %6, i64* %rax.0.reg2mem, !insn.addr !293
  br i1 %8, label %dec_label_pc_2f8a, label %dec_label_pc_2f99, !insn.addr !293

dec_label_pc_2f99:                                ; preds = %dec_label_pc_2f8a
  %9 = bitcast i32* %stack_var_-56 to i8*, !insn.addr !294
  %10 = call i32 @param_memset(i8* nonnull %9, i64 40), !insn.addr !294
  %11 = load i32, i32* %stack_var_-56, align 4, !insn.addr !295
  %12 = load i64, i64* %stack_var_-16, align 8, !insn.addr !296
  %13 = call i64 @__readfsqword(i64 40), !insn.addr !297
  %14 = icmp eq i64 %12, %13, !insn.addr !297
  %15 = icmp eq i1 %14, false, !insn.addr !298
  br i1 %15, label %dec_label_pc_2fc2, label %dec_label_pc_2fbd, !insn.addr !298

dec_label_pc_2fbd:                                ; preds = %dec_label_pc_2f99
  %16 = add i32 %11, %1, !insn.addr !295
  ret i32 %16, !insn.addr !299

dec_label_pc_2fc2:                                ; preds = %dec_label_pc_2f99
  call void @__stack_chk_fail(), !insn.addr !300
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !300

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i32* %stack_var_-56, { 1, 2, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
}

define i32 @param_strchr_strstr(i8* %str, i8 %ch, i8* %substr) local_unnamed_addr {
dec_label_pc_2fc7:
  %0 = ptrtoint i8* %str to i64
  %1 = sext i8 %ch to i32, !insn.addr !301
  %2 = call i8* @strchr(i8* %str, i32 %1), !insn.addr !301
  %3 = ptrtoint i8* %2 to i64, !insn.addr !301
  %4 = sub i64 %3, %0, !insn.addr !302
  %5 = icmp eq i8* %2, null, !insn.addr !303
  %6 = icmp eq i1 %5, false, !insn.addr !304
  %7 = trunc i64 %4 to i32, !insn.addr !304
  %8 = select i1 %6, i32 %7, i32 -1, !insn.addr !304
  %9 = call i8* @strstr(i8* %str, i8* %substr), !insn.addr !305
  %10 = ptrtoint i8* %9 to i64, !insn.addr !305
  %11 = sub i64 %10, %0, !insn.addr !306
  %12 = icmp eq i8* %9, null, !insn.addr !307
  %13 = icmp eq i1 %12, false, !insn.addr !308
  %14 = trunc i64 %11 to i32, !insn.addr !308
  %15 = select i1 %13, i32 %14, i32 -1, !insn.addr !308
  %16 = add i32 %15, %8, !insn.addr !309
  ret i32 %16, !insn.addr !310

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i32 @call_strchr_strstr() local_unnamed_addr {
dec_label_pc_3012:
  %0 = call i32 @param_strchr_strstr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_5085, i64 0, i64 0), i8 66, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_507f, i64 0, i64 0)), !insn.addr !311
  ret i32 %0, !insn.addr !312
}

define void @test_standard_library_functions() local_unnamed_addr {
dec_label_pc_3037:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_53c0 to i8*)), !insn.addr !313
  %1 = call i32 @call_strcpy(), !insn.addr !314
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_5099 to i8*)), !insn.addr !315
  %3 = call i32 @call_strcmp(), !insn.addr !316
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_50b4 to i8*)), !insn.addr !317
  %5 = call i32 @call_strlen(), !insn.addr !318
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_50cf to i8*)), !insn.addr !319
  %7 = call i32 @call_memcpy(), !insn.addr !320
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_50eb to i8*)), !insn.addr !321
  %9 = call i32 @call_memcmp(), !insn.addr !322
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_5107 to i8*)), !insn.addr !323
  %11 = call i32 @call_printf(), !insn.addr !324
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_5123 to i8*)), !insn.addr !325
  %13 = call i32 @call_scanf(), !insn.addr !326
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_513f to i8*)), !insn.addr !327
  %15 = call i32 @call_fopen_fclose(), !insn.addr !328
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_515c to i8*)), !insn.addr !329
  %17 = call i32 @call_fread_fwrite(), !insn.addr !330
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_5178 to i8*)), !insn.addr !331
  %19 = call i32 @call_malloc_free(), !insn.addr !332
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_5194 to i8*)), !insn.addr !333
  %21 = call i32 @call_memset(), !insn.addr !334
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_51b0 to i8*)), !insn.addr !335
  %23 = call i32 @call_strchr_strstr(), !insn.addr !336
  %24 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_51cb to i8*)), !insn.addr !337
  ret void, !insn.addr !338
}

define i32 @param_linux_syscall(i8* %pathname) local_unnamed_addr {
dec_label_pc_31e8:
  %rbx.0.in.reg2mem = alloca i32, !insn.addr !339
  %0 = call i32 (i32, ...) @syscall(i32 2), !insn.addr !340
  %1 = icmp slt i32 %0, 0, !insn.addr !341
  br i1 %1, label %dec_label_pc_321f, label %dec_label_pc_3208, !insn.addr !342

dec_label_pc_3208:                                ; preds = %dec_label_pc_31e8
  %2 = call i32 (i32, ...) @syscall(i32 3), !insn.addr !343
  store i32 %0, i32* %rbx.0.in.reg2mem, !insn.addr !343
  br label %dec_label_pc_321b, !insn.addr !343

dec_label_pc_321b:                                ; preds = %dec_label_pc_321f, %dec_label_pc_3208
  %rbx.0.in.reload = load i32, i32* %rbx.0.in.reg2mem
  ret i32 %rbx.0.in.reload, !insn.addr !344

dec_label_pc_321f:                                ; preds = %dec_label_pc_31e8
  %3 = call i32* @__errno_location(), !insn.addr !345
  %4 = load i32, i32* %3, align 4, !insn.addr !346
  %5 = sub i32 0, %4, !insn.addr !347
  store i32 %5, i32* %rbx.0.in.reg2mem, !insn.addr !348
  br label %dec_label_pc_321b, !insn.addr !348

; uselistorder directives
  uselistorder i32* %rbx.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i32, ...)* @syscall, { 1, 0, 2 }
}

define i32 @call_linux_syscall() local_unnamed_addr {
dec_label_pc_322a:
  %0 = call i32 @param_linux_syscall(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_5046, i64 0, i64 0)), !insn.addr !349
  %1 = ashr i32 %0, 31, !insn.addr !350
  %2 = or i32 %1, 42, !insn.addr !351
  ret i32 %2, !insn.addr !352
}

define i32 @param_win32_api(i8* %filename) local_unnamed_addr {
dec_label_pc_3249:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_-168 = alloca i64, align 8
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !353
  %3 = bitcast i64* %stack_var_-168 to %stat*, !insn.addr !354
  %4 = call i32 @stat(i8* %filename, %stat* nonnull %3), !insn.addr !354
  %5 = call i64 @__readfsqword(i64 40), !insn.addr !355
  %6 = icmp eq i64 %2, %5, !insn.addr !355
  %7 = icmp eq i1 %6, false, !insn.addr !356
  br i1 %7, label %dec_label_pc_32a8, label %dec_label_pc_3299, !insn.addr !356

dec_label_pc_3299:                                ; preds = %dec_label_pc_3249
  %8 = icmp slt i32 %4, 0, !insn.addr !357
  %9 = icmp slt i64 %1, 1
  %10 = select i1 %9, i32 -2, i32 42
  %storemerge = select i1 %8, i32 -1, i32 %10
  ret i32 %storemerge, !insn.addr !358

dec_label_pc_32a8:                                ; preds = %dec_label_pc_3249
  call void @__stack_chk_fail(), !insn.addr !359
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !359
}

define i32 @call_win32_api() local_unnamed_addr {
dec_label_pc_32ad:
  %0 = call i32 @param_win32_api(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_5046, i64 0, i64 0)), !insn.addr !360
  ret i32 %0, !insn.addr !361
}

define i32 @param_fork_exec(i8* %prog, i8* %arg) local_unnamed_addr {
dec_label_pc_32c6:
  %rax.0.reg2mem = alloca i32, !insn.addr !362
  %stack_var_-36 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !363
  %1 = call i32 @fork(), !insn.addr !364
  %2 = icmp slt i32 %1, 0, !insn.addr !365
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !366
  br i1 %2, label %dec_label_pc_331f, label %dec_label_pc_32ef, !insn.addr !366

dec_label_pc_32ef:                                ; preds = %dec_label_pc_32c6
  %3 = icmp eq i32 %1, 0, !insn.addr !365
  br i1 %3, label %dec_label_pc_3336, label %dec_label_pc_32f3, !insn.addr !367

dec_label_pc_32f3:                                ; preds = %dec_label_pc_32ef
  %4 = call i32 @waitpid(i32 %1, i32* nonnull %stack_var_-36, i32 0), !insn.addr !368
  %5 = icmp slt i32 %4, 0, !insn.addr !369
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !370
  br i1 %5, label %dec_label_pc_331f, label %dec_label_pc_330d, !insn.addr !370

dec_label_pc_330d:                                ; preds = %dec_label_pc_32f3
  %6 = load i32, i32* %stack_var_-36, align 4, !insn.addr !371
  %7 = udiv i32 %6, 256, !insn.addr !372
  %8 = urem i32 %6, 128
  %9 = icmp eq i32 %8, 0, !insn.addr !373
  %10 = icmp eq i1 %9, false, !insn.addr !374
  %11 = urem i32 %7, 256, !insn.addr !374
  %phitmp = select i1 %10, i32 -3, i32 %11, !insn.addr !374
  store i32 %phitmp, i32* %rax.0.reg2mem, !insn.addr !374
  br label %dec_label_pc_331f, !insn.addr !374

dec_label_pc_331f:                                ; preds = %dec_label_pc_32c6, %dec_label_pc_330d, %dec_label_pc_32f3
  %12 = call i64 @__readfsqword(i64 40), !insn.addr !375
  %13 = icmp eq i64 %0, %12, !insn.addr !375
  %14 = icmp eq i1 %13, false, !insn.addr !376
  br i1 %14, label %dec_label_pc_335f, label %dec_label_pc_332f, !insn.addr !376

dec_label_pc_332f:                                ; preds = %dec_label_pc_331f
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !377

dec_label_pc_3336:                                ; preds = %dec_label_pc_32ef
  %15 = call i32 (i8*, i8*, ...) @execl(i8* %prog, i8* %prog), !insn.addr !378
  call void @_exit(i32 127), !insn.addr !379
  unreachable, !insn.addr !379

dec_label_pc_335f:                                ; preds = %dec_label_pc_331f
  call void @__stack_chk_fail(), !insn.addr !380
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !380

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i32* %rax.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32 256, { 1, 0 }
  uselistorder label %dec_label_pc_331f, { 1, 2, 0 }
}

define i32 @call_fork_exec() local_unnamed_addr {
dec_label_pc_3364:
  %0 = call i32 @param_fork_exec(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_51e7, i64 0, i64 0), i8* null), !insn.addr !381
  %1 = icmp eq i32 %0, 0, !insn.addr !382
  %2 = select i1 %1, i32 42, i32 -1, !insn.addr !383
  ret i32 %2, !insn.addr !384
}

define i32 @param_pipe_communication() local_unnamed_addr {
dec_label_pc_338d:
  %0 = alloca i32
  %rax.0.reg2mem = alloca i32, !insn.addr !385
  %stack_var_-56 = alloca i64, align 8
  %1 = load i32, i32* %0
  %buffer_-64 = alloca [32 x i8], align 4
  %pipefd_-72 = alloca [2 x i32], align 4
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !386
  %3 = ptrtoint [32 x i8]* %buffer_-64 to i64, !insn.addr !387
  %4 = trunc i64 %3 to i32, !insn.addr !388
  %5 = insertvalue [2 x i32] undef, i32 %4, 0, !insn.addr !388
  %6 = call i32 @pipe([2 x i32] %5), !insn.addr !388
  %7 = icmp slt i32 %6, 0, !insn.addr !389
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !390
  br i1 %7, label %dec_label_pc_343f, label %dec_label_pc_33b8, !insn.addr !390

dec_label_pc_33b8:                                ; preds = %dec_label_pc_338d
  %8 = call i32 @fork(), !insn.addr !391
  %9 = icmp slt i32 %8, 0, !insn.addr !392
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !393
  br i1 %9, label %dec_label_pc_343f, label %dec_label_pc_33c5, !insn.addr !393

dec_label_pc_33c5:                                ; preds = %dec_label_pc_33b8
  %10 = icmp eq i32 %8, 0, !insn.addr !392
  %11 = icmp eq i1 %10, false, !insn.addr !394
  br i1 %11, label %dec_label_pc_33f8, label %dec_label_pc_33c7, !insn.addr !394

dec_label_pc_33c7:                                ; preds = %dec_label_pc_33c5
  %12 = bitcast [32 x i8]* %buffer_-64 to i32*, !insn.addr !395
  %13 = load i32, i32* %12, align 4, !insn.addr !395
  %14 = call i32 @close(i32 %13), !insn.addr !396
  %15 = call i32 @write(i32 %1, i64* bitcast ([10 x i8]* @global_var_51f1 to i64*), i32 9), !insn.addr !397
  %16 = call i32 @close(i32 %1), !insn.addr !398
  call void @_exit(i32 0), !insn.addr !399
  unreachable, !insn.addr !399

dec_label_pc_33f8:                                ; preds = %dec_label_pc_33c5
  %17 = ptrtoint [2 x i32]* %pipefd_-72 to i64, !insn.addr !400
  %18 = call i32 @close(i32 %1), !insn.addr !401
  %19 = bitcast [32 x i8]* %buffer_-64 to i32*, !insn.addr !402
  %20 = load i32, i32* %19, align 4, !insn.addr !402
  %21 = call i32 @read(i32 %20, i64* nonnull %stack_var_-56, i32 31), !insn.addr !403
  %22 = sext i32 %21 to i64, !insn.addr !403
  %23 = add i64 %17, 16, !insn.addr !404
  %24 = add i64 %23, %22, !insn.addr !404
  %25 = inttoptr i64 %24 to i8*, !insn.addr !404
  store i8 0, i8* %25, align 1, !insn.addr !404
  %26 = load i32, i32* %19, align 4, !insn.addr !405
  %27 = call i32 @close(i32 %26), !insn.addr !406
  %28 = call i32 @wait(i64 0), !insn.addr !407
  %29 = icmp slt i32 %21, 1
  %phitmp = select i1 %29, i32 -3, i32 42, !insn.addr !408
  store i32 %phitmp, i32* %rax.0.reg2mem, !insn.addr !408
  br label %dec_label_pc_343f, !insn.addr !408

dec_label_pc_343f:                                ; preds = %dec_label_pc_33b8, %dec_label_pc_338d, %dec_label_pc_33f8
  %30 = call i64 @__readfsqword(i64 40), !insn.addr !409
  %31 = icmp eq i64 %2, %30, !insn.addr !409
  %32 = icmp eq i1 %31, false, !insn.addr !410
  br i1 %32, label %dec_label_pc_3463, label %dec_label_pc_344f, !insn.addr !410

dec_label_pc_344f:                                ; preds = %dec_label_pc_343f
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !411

dec_label_pc_3463:                                ; preds = %dec_label_pc_343f
  call void @__stack_chk_fail(), !insn.addr !412
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !412

; uselistorder directives
  uselistorder i32* %rax.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder i32 31, { 0, 2, 3, 4, 5, 1 }
  uselistorder void (i32)* @_exit, { 1, 0, 2 }
  uselistorder i32 ()* @fork, { 1, 0, 2 }
  uselistorder label %dec_label_pc_343f, { 2, 0, 1 }
}

define i64 @call_pipe_communication() local_unnamed_addr {
dec_label_pc_3468:
  %0 = call i32 @param_pipe_communication(), !insn.addr !413
  %1 = sext i32 %0 to i64, !insn.addr !413
  ret i64 %1, !insn.addr !414
}

define i32 @param_socket_create() local_unnamed_addr {
dec_label_pc_347a:
  %rax.0.reg2mem = alloca i32, !insn.addr !415
  %stack_var_-40 = alloca i64, align 8
  %stack_var_-44 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !416
  %1 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !417
  %2 = icmp slt i32 %1, 0, !insn.addr !418
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !419
  br i1 %2, label %dec_label_pc_3523, label %dec_label_pc_34af, !insn.addr !419

dec_label_pc_34af:                                ; preds = %dec_label_pc_347a
  store i32 1, i32* %stack_var_-44, align 4, !insn.addr !420
  %3 = bitcast i32* %stack_var_-44 to i64*, !insn.addr !421
  %4 = call i32 @setsockopt(i32 %1, i32 1, i32 2, i64* nonnull %3, i32 4), !insn.addr !421
  %5 = icmp slt i32 %4, 0, !insn.addr !422
  br i1 %5, label %dec_label_pc_3539, label %dec_label_pc_34d9, !insn.addr !423

dec_label_pc_34d9:                                ; preds = %dec_label_pc_34af
  store i64 2, i64* %stack_var_-40, align 8, !insn.addr !424
  %6 = bitcast i64* %stack_var_-40 to %sockaddr*, !insn.addr !425
  %7 = call i32 @bind(i32 %1, %sockaddr* nonnull %6, i32 16), !insn.addr !425
  %8 = icmp slt i32 %7, 0, !insn.addr !426
  br i1 %8, label %dec_label_pc_3547, label %dec_label_pc_3507, !insn.addr !427

dec_label_pc_3507:                                ; preds = %dec_label_pc_34d9
  %9 = call i32 @listen(i32 %1, i32 5), !insn.addr !428
  %10 = icmp slt i32 %9, 0, !insn.addr !429
  %11 = call i32 @close(i32 %1)
  %. = select i1 %10, i32 -4, i32 42
  store i32 %., i32* %rax.0.reg2mem, !insn.addr !430
  br label %dec_label_pc_3523, !insn.addr !430

dec_label_pc_3523:                                ; preds = %dec_label_pc_347a, %dec_label_pc_3507, %dec_label_pc_3547, %dec_label_pc_3539
  %12 = call i64 @__readfsqword(i64 40), !insn.addr !431
  %13 = icmp eq i64 %0, %12, !insn.addr !431
  %14 = icmp eq i1 %13, false, !insn.addr !432
  br i1 %14, label %dec_label_pc_356a, label %dec_label_pc_3533, !insn.addr !432

dec_label_pc_3533:                                ; preds = %dec_label_pc_3523
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !433

dec_label_pc_3539:                                ; preds = %dec_label_pc_34af
  %15 = call i32 @close(i32 %1), !insn.addr !434
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !435
  br label %dec_label_pc_3523, !insn.addr !435

dec_label_pc_3547:                                ; preds = %dec_label_pc_34d9
  %16 = call i32 @close(i32 %1), !insn.addr !436
  store i32 -3, i32* %rax.0.reg2mem, !insn.addr !437
  br label %dec_label_pc_3523, !insn.addr !437

dec_label_pc_356a:                                ; preds = %dec_label_pc_3523
  call void @__stack_chk_fail(), !insn.addr !438
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !438

; uselistorder directives
  uselistorder i32 %1, { 3, 0, 1, 2, 4, 5, 6 }
  uselistorder i32* %rax.0.reg2mem, { 3, 4, 0, 2, 1 }
  uselistorder label %dec_label_pc_3523, { 2, 3, 1, 0 }
}

define i64 @call_socket_create() local_unnamed_addr {
dec_label_pc_356f:
  %0 = call i32 @param_socket_create(), !insn.addr !439
  %1 = sext i32 %0 to i64, !insn.addr !439
  ret i64 %1, !insn.addr !440
}

define i32 @param_shmget_shmat() local_unnamed_addr {
dec_label_pc_3581:
  %r12.0.reg2mem = alloca i32, !insn.addr !441
  %0 = call i32 (i8*, i32, ...) @open(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_51fb, i64 0, i64 0), i32 66), !insn.addr !442
  %1 = icmp slt i32 %0, 0, !insn.addr !443
  store i32 -1, i32* %r12.0.reg2mem, !insn.addr !444
  br i1 %1, label %dec_label_pc_3635, label %dec_label_pc_35ac, !insn.addr !444

dec_label_pc_35ac:                                ; preds = %dec_label_pc_3581
  %2 = call i32 @close(i32 %0), !insn.addr !445
  %3 = call i32 @ftok(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_51fb, i64 0, i64 0), i32 42), !insn.addr !446
  %4 = icmp slt i32 %3, 0, !insn.addr !447
  store i32 -1, i32* %r12.0.reg2mem, !insn.addr !448
  br i1 %4, label %dec_label_pc_3635, label %dec_label_pc_35ca, !insn.addr !448

dec_label_pc_35ca:                                ; preds = %dec_label_pc_35ac
  %5 = call i32 @shmget(i32 %3, i32 ptrtoint (i32* @global_var_1000 to i32), i32 ptrtoint (i32* @global_var_3b6 to i32)), !insn.addr !449
  %6 = icmp slt i32 %5, 0, !insn.addr !450
  store i32 -2, i32* %r12.0.reg2mem, !insn.addr !451
  br i1 %6, label %dec_label_pc_3635, label %dec_label_pc_35df, !insn.addr !451

dec_label_pc_35df:                                ; preds = %dec_label_pc_35ca
  %7 = call i64* @shmat(i32 %5, i64* null, i32 0), !insn.addr !452
  %8 = icmp eq i64* %7, inttoptr (i64 -1 to i64*), !insn.addr !453
  store i32 -3, i32* %r12.0.reg2mem, !insn.addr !454
  br i1 %8, label %dec_label_pc_3635, label %dec_label_pc_35f9, !insn.addr !454

dec_label_pc_35f9:                                ; preds = %dec_label_pc_35df
  %9 = ptrtoint i64* %7 to i64, !insn.addr !452
  store i64 7299600957910902867, i64* %7, align 8, !insn.addr !455
  %10 = add i64 %9, 8, !insn.addr !456
  %11 = inttoptr i64 %10 to i32*, !insn.addr !456
  store i32 2037542765, i32* %11, align 4, !insn.addr !456
  %12 = add i64 %9, 12, !insn.addr !457
  %13 = inttoptr i64 %12 to i8*, !insn.addr !457
  store i8 0, i8* %13, align 1, !insn.addr !457
  %14 = bitcast i64* %7 to i8*, !insn.addr !458
  %15 = call i32 @strlen(i8* %14), !insn.addr !458
  %16 = call i32 @shmdt(i64* %7), !insn.addr !459
  %17 = call i32 @shmctl(i32 %5, i32 0, %shmid_ds* null), !insn.addr !460
  store i32 %15, i32* %r12.0.reg2mem, !insn.addr !460
  br label %dec_label_pc_3635, !insn.addr !460

dec_label_pc_3635:                                ; preds = %dec_label_pc_35df, %dec_label_pc_35ca, %dec_label_pc_35ac, %dec_label_pc_3581, %dec_label_pc_35f9
  %r12.0.reload = load i32, i32* %r12.0.reg2mem
  ret i32 %r12.0.reload, !insn.addr !461

; uselistorder directives
  uselistorder i64* %7, { 0, 1, 2, 4, 3 }
  uselistorder i32* %r12.0.reg2mem, { 0, 5, 1, 2, 3, 4 }
  uselistorder i32 (i8*)* @strlen, { 1, 0, 2, 3 }
  uselistorder i8 0, { 2, 3, 4, 1, 0 }
  uselistorder i32 (i32)* @close, { 7, 5, 4, 6, 3, 2, 1, 0, 8 }
  uselistorder label %dec_label_pc_3635, { 4, 0, 1, 2, 3 }
}

define i32 @call_shmget_shmat() local_unnamed_addr {
dec_label_pc_365d:
  %0 = call i32 @param_shmget_shmat(), !insn.addr !462
  %1 = icmp slt i32 %0, 1
  %2 = select i1 %1, i32 -1, i32 42, !insn.addr !463
  ret i32 %2, !insn.addr !464
}

define i32 @param_signal_handling() local_unnamed_addr {
dec_label_pc_367e:
  %rax.0.reg2mem = alloca i32, !insn.addr !465
  %.reg2mem10 = alloca i32, !insn.addr !465
  %rbx.1.reg2mem = alloca i32, !insn.addr !465
  %.reg2mem = alloca i32, !insn.addr !465
  %rbx.0.reg2mem = alloca i32, !insn.addr !465
  %0 = call void (i32)* @signal(i32 10, void (i32)* inttoptr (i64 10313 to void (i32)*)), !insn.addr !466
  %1 = icmp eq void (i32)* %0, inttoptr (i64 -1 to void (i32)*), !insn.addr !467
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !468
  br i1 %1, label %dec_label_pc_3786, label %dec_label_pc_369e, !insn.addr !468

dec_label_pc_369e:                                ; preds = %dec_label_pc_367e
  %2 = call void (i32)* @signal(i32 14, void (i32)* inttoptr (i64 10313 to void (i32)*)), !insn.addr !469
  %3 = icmp eq void (i32)* %2, inttoptr (i64 -1 to void (i32)*), !insn.addr !470
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !471
  br i1 %3, label %dec_label_pc_3786, label %dec_label_pc_36b9, !insn.addr !471

dec_label_pc_36b9:                                ; preds = %dec_label_pc_369e
  store i32 0, i32* @signal_received, align 4, !insn.addr !472
  %4 = call i32 @raise(i32 10), !insn.addr !473
  %5 = load i32, i32* @signal_received, align 4
  %6 = icmp eq i32 %5, 0, !insn.addr !474
  %7 = icmp eq i1 %6, false, !insn.addr !475
  store i32 ptrtoint (i32* @global_var_3e8 to i32), i32* %rbx.0.reg2mem, !insn.addr !475
  store i32 %5, i32* %.reg2mem, !insn.addr !475
  br i1 %7, label %dec_label_pc_36f5, label %dec_label_pc_36dc, !insn.addr !475

dec_label_pc_36dc:                                ; preds = %dec_label_pc_36b9, %dec_label_pc_36f0
  %8 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !476
  %9 = load i32, i32* @signal_received, align 4
  %10 = icmp eq i32 %9, 0, !insn.addr !477
  %11 = icmp eq i1 %10, false, !insn.addr !478
  store i32 %9, i32* %.reg2mem, !insn.addr !478
  br i1 %11, label %dec_label_pc_36f5, label %dec_label_pc_36f0, !insn.addr !478

dec_label_pc_36f0:                                ; preds = %dec_label_pc_36dc
  %rbx.0.reload = load i32, i32* %rbx.0.reg2mem
  %12 = add i32 %rbx.0.reload, -1, !insn.addr !479
  %13 = icmp eq i32 %12, 0, !insn.addr !479
  %14 = icmp eq i1 %13, false, !insn.addr !480
  store i32 %12, i32* %rbx.0.reg2mem, !insn.addr !480
  store i32 %9, i32* %.reg2mem, !insn.addr !480
  br i1 %14, label %dec_label_pc_36dc, label %dec_label_pc_36f5, !insn.addr !480

dec_label_pc_36f5:                                ; preds = %dec_label_pc_36dc, %dec_label_pc_36f0, %dec_label_pc_36b9
  %.reload = load i32, i32* %.reg2mem, !insn.addr !481
  %15 = icmp eq i32 %.reload, 0, !insn.addr !482
  store i32 -3, i32* %rax.0.reg2mem, !insn.addr !483
  br i1 %15, label %dec_label_pc_3786, label %dec_label_pc_3703, !insn.addr !483

dec_label_pc_3703:                                ; preds = %dec_label_pc_36f5
  %16 = load i32, i32* @signal_number, align 4, !insn.addr !484
  %17 = icmp eq i32 %16, 10, !insn.addr !485
  %18 = icmp eq i1 %17, false, !insn.addr !486
  store i32 -4, i32* %rax.0.reg2mem, !insn.addr !486
  br i1 %18, label %dec_label_pc_3786, label %dec_label_pc_3712, !insn.addr !486

dec_label_pc_3712:                                ; preds = %dec_label_pc_3703
  store i32 0, i32* @signal_received, align 4, !insn.addr !487
  %19 = call i32 @alarm(i32 1), !insn.addr !488
  %20 = load i32, i32* @signal_received, align 4
  %21 = icmp eq i32 %20, 0, !insn.addr !489
  %22 = icmp eq i1 %21, false, !insn.addr !490
  store i32 ptrtoint (i32* @global_var_7d0 to i32), i32* %rbx.1.reg2mem, !insn.addr !490
  store i32 %20, i32* %.reg2mem10, !insn.addr !490
  br i1 %22, label %dec_label_pc_374e, label %dec_label_pc_3735, !insn.addr !490

dec_label_pc_3735:                                ; preds = %dec_label_pc_3712, %dec_label_pc_3749
  %23 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !491
  %24 = load i32, i32* @signal_received, align 4
  %25 = icmp eq i32 %24, 0, !insn.addr !492
  %26 = icmp eq i1 %25, false, !insn.addr !493
  store i32 %24, i32* %.reg2mem10, !insn.addr !493
  br i1 %26, label %dec_label_pc_374e, label %dec_label_pc_3749, !insn.addr !493

dec_label_pc_3749:                                ; preds = %dec_label_pc_3735
  %rbx.1.reload = load i32, i32* %rbx.1.reg2mem
  %27 = add i32 %rbx.1.reload, -1, !insn.addr !494
  %28 = icmp eq i32 %27, 0, !insn.addr !494
  %29 = icmp eq i1 %28, false, !insn.addr !495
  store i32 %27, i32* %rbx.1.reg2mem, !insn.addr !495
  store i32 %24, i32* %.reg2mem10, !insn.addr !495
  br i1 %29, label %dec_label_pc_3735, label %dec_label_pc_374e, !insn.addr !495

dec_label_pc_374e:                                ; preds = %dec_label_pc_3735, %dec_label_pc_3749, %dec_label_pc_3712
  %.reload11 = load i32, i32* %.reg2mem10, !insn.addr !496
  %30 = icmp eq i32 %.reload11, 0, !insn.addr !497
  store i32 -5, i32* %rax.0.reg2mem, !insn.addr !498
  br i1 %30, label %dec_label_pc_3786, label %dec_label_pc_3758, !insn.addr !498

dec_label_pc_3758:                                ; preds = %dec_label_pc_374e
  %31 = load i32, i32* @signal_number, align 4, !insn.addr !499
  %32 = icmp eq i32 %31, 14, !insn.addr !500
  %33 = icmp eq i1 %32, false, !insn.addr !501
  store i32 -5, i32* %rax.0.reg2mem, !insn.addr !501
  br i1 %33, label %dec_label_pc_3786, label %dec_label_pc_3763, !insn.addr !501

dec_label_pc_3763:                                ; preds = %dec_label_pc_3758
  %34 = call void (i32)* @signal(i32 10, void (i32)* null), !insn.addr !502
  %35 = call void (i32)* @signal(i32 14, void (i32)* null), !insn.addr !503
  store i32 42, i32* %rax.0.reg2mem, !insn.addr !504
  br label %dec_label_pc_3786, !insn.addr !504

dec_label_pc_3786:                                ; preds = %dec_label_pc_3758, %dec_label_pc_374e, %dec_label_pc_3703, %dec_label_pc_36f5, %dec_label_pc_369e, %dec_label_pc_367e, %dec_label_pc_3763
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !505

; uselistorder directives
  uselistorder i32 %24, { 1, 0, 2 }
  uselistorder i32 %9, { 1, 0, 2 }
  uselistorder i32* %rbx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %.reg2mem, { 0, 2, 1, 3 }
  uselistorder i32* %rbx.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %.reg2mem10, { 0, 2, 1, 3 }
  uselistorder i32* %rax.0.reg2mem, { 0, 7, 1, 2, 3, 4, 5, 6 }
  uselistorder i32 14, { 1, 0, 2 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i32 10, { 1, 0, 2, 3 }
  uselistorder label %dec_label_pc_3786, { 6, 0, 1, 2, 3, 4, 5 }
  uselistorder label %dec_label_pc_374e, { 1, 0, 2 }
  uselistorder label %dec_label_pc_3735, { 1, 0 }
  uselistorder label %dec_label_pc_36f5, { 1, 0, 2 }
  uselistorder label %dec_label_pc_36dc, { 1, 0 }
}

define i64 @call_signal_handling() local_unnamed_addr {
dec_label_pc_37b2:
  %0 = call i32 @param_signal_handling(), !insn.addr !506
  %1 = sext i32 %0 to i64, !insn.addr !506
  ret i64 %1, !insn.addr !507
}

define void @test_system_calls() local_unnamed_addr {
dec_label_pc_37c4:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_520d to i8*)), !insn.addr !508
  %1 = call i32 @call_linux_syscall(), !insn.addr !509
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_5228 to i8*)), !insn.addr !510
  %3 = call i32 @call_win32_api(), !insn.addr !511
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_5244 to i8*)), !insn.addr !512
  %5 = call i32 @call_fork_exec(), !insn.addr !513
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_5260 to i8*)), !insn.addr !514
  %7 = call i32 @param_pipe_communication(), !insn.addr !515
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_527c to i8*)), !insn.addr !516
  %9 = call i32 @param_socket_create(), !insn.addr !517
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_5298 to i8*)), !insn.addr !518
  %11 = call i32 @call_shmget_shmat(), !insn.addr !519
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_52b4 to i8*)), !insn.addr !520
  %13 = call i32 @param_signal_handling(), !insn.addr !521
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_52d0 to i8*)), !insn.addr !522
  ret void, !insn.addr !523
}

define i32 @param_pthread_create(i32 %x) local_unnamed_addr {
dec_label_pc_38bc:
  %rbx.0.reg2mem = alloca i32, !insn.addr !524
  %stack_var_-24 = alloca i64, align 8
  %thread_ret_-32 = alloca i8*, align 8
  %stack_var_-36 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !525
  store i32 %x, i32* %stack_var_-36, align 4, !insn.addr !526
  %1 = bitcast i8** %thread_ret_-32 to i32*, !insn.addr !527
  %2 = bitcast i32* %stack_var_-36 to i64*, !insn.addr !527
  %3 = call i32 @pthread_create(i32* nonnull %1, i64* null, i64* (i64*)* inttoptr (i64 10380 to i64* (i64*)*), i64* nonnull %2), !insn.addr !527
  %4 = icmp eq i32 %3, 0, !insn.addr !528
  %5 = icmp eq i1 %4, false, !insn.addr !529
  store i32 -1, i32* %rbx.0.reg2mem, !insn.addr !529
  br i1 %5, label %dec_label_pc_3913, label %dec_label_pc_38f8, !insn.addr !529

dec_label_pc_38f8:                                ; preds = %dec_label_pc_38bc
  %6 = load i8*, i8** %thread_ret_-32, align 8, !insn.addr !530
  %7 = ptrtoint i8* %6 to i64, !insn.addr !530
  %8 = trunc i64 %7 to i32, !insn.addr !531
  %9 = bitcast i64* %stack_var_-24 to i64**, !insn.addr !531
  %10 = call i32 @pthread_join(i32 %8, i64** nonnull %9), !insn.addr !531
  %11 = load i64, i64* %stack_var_-24, align 8, !insn.addr !532
  %12 = inttoptr i64 %11 to i32*, !insn.addr !533
  %13 = load i32, i32* %12, align 4, !insn.addr !533
  %14 = inttoptr i64 %11 to i64*, !insn.addr !534
  call void @free(i64* %14), !insn.addr !534
  store i32 %13, i32* %rbx.0.reg2mem, !insn.addr !534
  br label %dec_label_pc_3913, !insn.addr !534

dec_label_pc_3913:                                ; preds = %dec_label_pc_38bc, %dec_label_pc_38f8
  %15 = call i64 @__readfsqword(i64 40), !insn.addr !535
  %16 = icmp eq i64 %0, %15, !insn.addr !535
  %17 = icmp eq i1 %16, false, !insn.addr !536
  br i1 %17, label %dec_label_pc_3932, label %dec_label_pc_3923, !insn.addr !536

dec_label_pc_3923:                                ; preds = %dec_label_pc_3913
  %rbx.0.reload = load i32, i32* %rbx.0.reg2mem
  ret i32 %rbx.0.reload, !insn.addr !537

dec_label_pc_3932:                                ; preds = %dec_label_pc_3913
  call void @__stack_chk_fail(), !insn.addr !538
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !538

; uselistorder directives
  uselistorder i64 %11, { 1, 0 }
  uselistorder i8** %thread_ret_-32, { 1, 0 }
  uselistorder i64* %stack_var_-24, { 1, 0 }
  uselistorder i32* %rbx.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_3913, { 1, 0 }
}

define i32 @call_pthread_create() local_unnamed_addr {
dec_label_pc_3937:
  %0 = call i32 @param_pthread_create(i32 7), !insn.addr !539
  ret i32 %0, !insn.addr !540
}

define i32 @param_pthread_join() local_unnamed_addr {
dec_label_pc_394e:
  %rbx.1.reg2mem = alloca i32, !insn.addr !541
  %rbp.1.reg2mem = alloca i64, !insn.addr !541
  %rbx.0.reg2mem = alloca i32, !insn.addr !541
  %r12.0.reg2mem = alloca i64, !insn.addr !541
  %rbp.0.reg2mem = alloca i64, !insn.addr !541
  %stack_var_-52 = alloca i64, align 8
  %stack_var_-80 = alloca i32, align 4
  %stack_var_-88 = alloca i32, align 4
  %stack_var_-120 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-120 to i64, !insn.addr !542
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !543
  store i32 1, i32* %stack_var_-88, align 4, !insn.addr !544
  store i32 0, i32* %stack_var_-80, align 4, !insn.addr !545
  %2 = ptrtoint i32* %stack_var_-88 to i64, !insn.addr !546
  %3 = ptrtoint i64* %stack_var_-52 to i64, !insn.addr !547
  store i64 %2, i64* %rbp.0.reg2mem, !insn.addr !548
  store i64 %0, i64* %r12.0.reg2mem, !insn.addr !548
  br label %dec_label_pc_39ca, !insn.addr !548

dec_label_pc_39ca:                                ; preds = %dec_label_pc_39e3, %dec_label_pc_394e
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %4 = inttoptr i64 %r12.0.reload to i32*, !insn.addr !549
  %5 = inttoptr i64 %rbp.0.reload to i64*, !insn.addr !549
  %6 = call i32 @pthread_create(i32* %4, i64* null, i64* (i64*)* inttoptr (i64 10334 to i64* (i64*)*), i64* %5), !insn.addr !549
  %7 = icmp eq i32 %6, 0, !insn.addr !550
  %8 = icmp eq i1 %7, false, !insn.addr !551
  store i32 -1, i32* %rbx.1.reg2mem, !insn.addr !551
  br i1 %8, label %dec_label_pc_3a1f, label %dec_label_pc_39e3, !insn.addr !551

dec_label_pc_39e3:                                ; preds = %dec_label_pc_39ca
  %9 = add i64 %r12.0.reload, 8, !insn.addr !552
  %10 = add i64 %rbp.0.reload, 12, !insn.addr !553
  %11 = icmp eq i64 %10, %3, !insn.addr !554
  %12 = icmp eq i1 %11, false, !insn.addr !555
  store i64 %10, i64* %rbp.0.reg2mem, !insn.addr !555
  store i64 %9, i64* %r12.0.reg2mem, !insn.addr !555
  br i1 %12, label %dec_label_pc_39ca, label %dec_label_pc_39f0, !insn.addr !555

dec_label_pc_39f0:                                ; preds = %dec_label_pc_39e3
  %13 = ptrtoint i32* %stack_var_-80 to i64, !insn.addr !556
  store i32 %6, i32* %rbx.0.reg2mem, !insn.addr !556
  store i64 0, i64* %rbp.1.reg2mem, !insn.addr !556
  br label %dec_label_pc_39fa, !insn.addr !556

dec_label_pc_39fa:                                ; preds = %dec_label_pc_3a0c, %dec_label_pc_39f0
  %rbp.1.reload = load i64, i64* %rbp.1.reg2mem
  %14 = mul i64 %rbp.1.reload, 8, !insn.addr !557
  %15 = add i64 %14, %0, !insn.addr !557
  %16 = inttoptr i64 %15 to i64*, !insn.addr !557
  %17 = load i64, i64* %16, align 8, !insn.addr !557
  %18 = trunc i64 %17 to i32, !insn.addr !558
  %19 = call i32 @pthread_join(i32 %18, i64** null), !insn.addr !558
  %20 = icmp eq i32 %19, 0, !insn.addr !559
  %21 = icmp eq i1 %20, false, !insn.addr !560
  store i32 -2, i32* %rbx.1.reg2mem, !insn.addr !560
  br i1 %21, label %dec_label_pc_3a1f, label %dec_label_pc_3a0c, !insn.addr !560

dec_label_pc_3a0c:                                ; preds = %dec_label_pc_39fa
  %rbx.0.reload = load i32, i32* %rbx.0.reg2mem
  %22 = mul nuw nsw i64 %rbp.1.reload, 12, !insn.addr !561
  %23 = add i64 %22, %13, !insn.addr !561
  %24 = inttoptr i64 %23 to i32*, !insn.addr !561
  %25 = load i32, i32* %24, align 4, !insn.addr !561
  %26 = add i32 %25, %rbx.0.reload, !insn.addr !561
  %27 = add nuw nsw i64 %rbp.1.reload, 1, !insn.addr !562
  %28 = icmp eq i64 %rbp.1.reload, 2, !insn.addr !563
  %29 = icmp eq i1 %28, false, !insn.addr !564
  store i32 %26, i32* %rbx.0.reg2mem, !insn.addr !564
  store i64 %27, i64* %rbp.1.reg2mem, !insn.addr !564
  store i32 %26, i32* %rbx.1.reg2mem, !insn.addr !564
  br i1 %29, label %dec_label_pc_39fa, label %dec_label_pc_3a1f, !insn.addr !564

dec_label_pc_3a1f:                                ; preds = %dec_label_pc_39ca, %dec_label_pc_39fa, %dec_label_pc_3a0c
  %30 = call i64 @__readfsqword(i64 40), !insn.addr !565
  %31 = icmp eq i64 %1, %30, !insn.addr !565
  %32 = icmp eq i1 %31, false, !insn.addr !566
  br i1 %32, label %dec_label_pc_3a4c, label %dec_label_pc_3a2f, !insn.addr !566

dec_label_pc_3a2f:                                ; preds = %dec_label_pc_3a1f
  %rbx.1.reload = load i32, i32* %rbx.1.reg2mem
  ret i32 %rbx.1.reload, !insn.addr !567

dec_label_pc_3a4c:                                ; preds = %dec_label_pc_3a1f
  call void @__stack_chk_fail(), !insn.addr !568
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !568

; uselistorder directives
  uselistorder i64 %rbp.1.reload, { 1, 2, 0, 3 }
  uselistorder i64 %rbp.0.reload, { 1, 0 }
  uselistorder i64 %r12.0.reload, { 1, 0 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64* %rbp.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r12.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbp.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rbx.1.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64 12, { 0, 3, 4, 1, 2 }
  uselistorder label %dec_label_pc_3a1f, { 2, 1, 0 }
}

define i64 @call_pthread_join() local_unnamed_addr {
dec_label_pc_3a51:
  %0 = call i32 @param_pthread_join(), !insn.addr !569
  %1 = sext i32 %0 to i64, !insn.addr !569
  ret i64 %1, !insn.addr !570
}

define i32 @param_mutex_lock(i32 %thread_count, i32 %iterations_per_thread) local_unnamed_addr {
dec_label_pc_3a68:
  %rax.0.reg2mem = alloca i32, !insn.addr !571
  %rbp.0.reg2mem = alloca i64, !insn.addr !571
  %rbx.0.reg2mem = alloca i64, !insn.addr !571
  %stack_var_-60 = alloca i32, align 4
  store i32 %iterations_per_thread, i32* %stack_var_-60, align 4, !insn.addr !572
  %0 = mul i32 %thread_count, 8, !insn.addr !573
  %1 = call i64* @malloc(i32 %0), !insn.addr !574
  %2 = icmp eq i64* %1, null, !insn.addr !575
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !576
  br i1 %2, label %dec_label_pc_3b19, label %dec_label_pc_3a96, !insn.addr !576

dec_label_pc_3a96:                                ; preds = %dec_label_pc_3a68
  store i32 0, i32* @shared_counter, align 4, !insn.addr !577
  %3 = icmp slt i32 %thread_count, 1
  br i1 %3, label %dec_label_pc_3af5, label %dec_label_pc_3aa8, !insn.addr !578

dec_label_pc_3aa8:                                ; preds = %dec_label_pc_3a96
  %4 = zext i32 %thread_count to i64, !insn.addr !579
  %5 = ptrtoint i64* %1 to i64, !insn.addr !574
  %6 = mul i64 %4, 8, !insn.addr !580
  %7 = add i64 %6, %5, !insn.addr !581
  %8 = bitcast i32* %stack_var_-60 to i64*, !insn.addr !582
  store i64 %5, i64* %rbx.0.reg2mem, !insn.addr !583
  br label %dec_label_pc_3abc, !insn.addr !583

dec_label_pc_3abc:                                ; preds = %dec_label_pc_3ad5, %dec_label_pc_3aa8
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %9 = inttoptr i64 %rbx.0.reload to i32*, !insn.addr !582
  %10 = call i32 @pthread_create(i32* %9, i64* null, i64* (i64*)* inttoptr (i64 10404 to i64* (i64*)*), i64* nonnull %8), !insn.addr !582
  %11 = icmp eq i32 %10, 0, !insn.addr !584
  %12 = icmp eq i1 %11, false, !insn.addr !585
  br i1 %12, label %dec_label_pc_3b28, label %dec_label_pc_3ad5, !insn.addr !585

dec_label_pc_3ad5:                                ; preds = %dec_label_pc_3abc
  %13 = add i64 %rbx.0.reload, 8, !insn.addr !586
  %14 = icmp eq i64 %13, %7, !insn.addr !587
  %15 = icmp eq i1 %14, false, !insn.addr !588
  store i64 %13, i64* %rbx.0.reg2mem, !insn.addr !588
  store i64 %5, i64* %rbp.0.reg2mem, !insn.addr !588
  br i1 %15, label %dec_label_pc_3abc, label %dec_label_pc_3ade, !insn.addr !588

dec_label_pc_3ade:                                ; preds = %dec_label_pc_3ad5, %dec_label_pc_3ade
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %16 = inttoptr i64 %rbp.0.reload to i64*, !insn.addr !589
  %17 = load i64, i64* %16, align 8, !insn.addr !589
  %18 = trunc i64 %17 to i32, !insn.addr !590
  %19 = call i32 @pthread_join(i32 %18, i64** null), !insn.addr !590
  %20 = add i64 %rbp.0.reload, 8, !insn.addr !591
  %21 = icmp eq i64 %20, %7, !insn.addr !592
  %22 = icmp eq i1 %21, false, !insn.addr !593
  store i64 %20, i64* %rbp.0.reg2mem, !insn.addr !593
  br i1 %22, label %dec_label_pc_3ade, label %dec_label_pc_3af5, !insn.addr !593

dec_label_pc_3af5:                                ; preds = %dec_label_pc_3ade, %dec_label_pc_3a96
  call void @free(i64* nonnull %1), !insn.addr !594
  %23 = load i32, i32* @shared_counter, align 4, !insn.addr !595
  %24 = load i32, i32* %stack_var_-60, align 4, !insn.addr !596
  %25 = mul i32 %24, %thread_count, !insn.addr !596
  %26 = icmp eq i32 %23, %25, !insn.addr !597
  %27 = icmp eq i1 %26, false, !insn.addr !598
  %phitmp = select i1 %27, i32 -3, i32 42, !insn.addr !598
  store i32 %phitmp, i32* %rax.0.reg2mem, !insn.addr !598
  br label %dec_label_pc_3b19, !insn.addr !598

dec_label_pc_3b19:                                ; preds = %dec_label_pc_3a68, %dec_label_pc_3b28, %dec_label_pc_3af5
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !599

dec_label_pc_3b28:                                ; preds = %dec_label_pc_3abc
  call void @free(i64* nonnull %1), !insn.addr !600
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !601
  br label %dec_label_pc_3b19, !insn.addr !601

; uselistorder directives
  uselistorder i64 %rbx.0.reload, { 1, 0 }
  uselistorder i64* %1, { 0, 1, 3, 2 }
  uselistorder i32* %stack_var_-60, { 1, 0, 2 }
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbp.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rax.0.reg2mem, { 2, 0, 3, 1 }
  uselistorder i32 %thread_count, { 1, 3, 2, 0 }
  uselistorder label %dec_label_pc_3b19, { 1, 2, 0 }
  uselistorder label %dec_label_pc_3ade, { 1, 0 }
}

define i32 @call_mutex_lock() local_unnamed_addr {
dec_label_pc_3b3e:
  %0 = call i32 @param_mutex_lock(i32 4, i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !602
  ret i32 %0, !insn.addr !603

; uselistorder directives
  uselistorder i32 ptrtoint (i32* @global_var_3e8 to i32), { 1, 2, 3, 0, 4, 5 }
}

define i32 @param_condition_variable() local_unnamed_addr {
dec_label_pc_3b5a:
  %rbx.0.reg2mem = alloca i32, !insn.addr !604
  %stack_var_-24 = alloca i64, align 8
  %consumer_ret_-32 = alloca i8*, align 8
  %consumer_-40 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !605
  store i32 0, i32* @ready, align 4, !insn.addr !606
  store i32 0, i32* @data, align 4, !insn.addr !607
  %1 = bitcast i8** %consumer_ret_-32 to i32*, !insn.addr !608
  %2 = call i32 @pthread_create(i32* nonnull %1, i64* null, i64* (i64*)* inttoptr (i64 10491 to i64* (i64*)*), i64* null), !insn.addr !608
  %3 = icmp eq i32 %2, 0, !insn.addr !609
  %4 = icmp eq i1 %3, false, !insn.addr !610
  store i32 -1, i32* %rbx.0.reg2mem, !insn.addr !610
  br i1 %4, label %dec_label_pc_3bec, label %dec_label_pc_3ba6, !insn.addr !610

dec_label_pc_3ba6:                                ; preds = %dec_label_pc_3b5a
  %5 = bitcast i64* %consumer_-40 to i32*, !insn.addr !611
  %6 = call i32 @pthread_create(i32* nonnull %5, i64* null, i64* (i64*)* inttoptr (i64 10593 to i64* (i64*)*), i64* null), !insn.addr !611
  %7 = icmp eq i32 %6, 0, !insn.addr !612
  %8 = icmp eq i1 %7, false, !insn.addr !613
  %9 = load i8*, i8** %consumer_ret_-32, align 8
  %10 = ptrtoint i8* %9 to i64
  %11 = trunc i64 %10 to i32
  br i1 %8, label %dec_label_pc_3c04, label %dec_label_pc_3bc3, !insn.addr !613

dec_label_pc_3bc3:                                ; preds = %dec_label_pc_3ba6
  %12 = bitcast i64* %stack_var_-24 to i64**, !insn.addr !614
  %13 = call i32 @pthread_join(i32 %11, i64** nonnull %12), !insn.addr !614
  %14 = load i64, i64* %consumer_-40, align 8, !insn.addr !615
  %15 = trunc i64 %14 to i32, !insn.addr !616
  %16 = call i32 @pthread_join(i32 %15, i64** null), !insn.addr !616
  %17 = load i64, i64* %stack_var_-24, align 8, !insn.addr !617
  %18 = inttoptr i64 %17 to i32*, !insn.addr !618
  %19 = load i32, i32* %18, align 4, !insn.addr !618
  %20 = inttoptr i64 %17 to i64*, !insn.addr !619
  call void @free(i64* %20), !insn.addr !619
  store i32 %19, i32* %rbx.0.reg2mem, !insn.addr !619
  br label %dec_label_pc_3bec, !insn.addr !619

dec_label_pc_3bec:                                ; preds = %dec_label_pc_3b5a, %dec_label_pc_3c04, %dec_label_pc_3bc3
  %21 = call i64 @__readfsqword(i64 40), !insn.addr !620
  %22 = icmp eq i64 %0, %21, !insn.addr !620
  %23 = icmp eq i1 %22, false, !insn.addr !621
  br i1 %23, label %dec_label_pc_3c1c, label %dec_label_pc_3bfc, !insn.addr !621

dec_label_pc_3bfc:                                ; preds = %dec_label_pc_3bec
  %rbx.0.reload = load i32, i32* %rbx.0.reg2mem
  ret i32 %rbx.0.reload, !insn.addr !622

dec_label_pc_3c04:                                ; preds = %dec_label_pc_3ba6
  %24 = call i32 @pthread_cancel(i32 %11), !insn.addr !623
  store i32 -2, i32* %rbx.0.reg2mem, !insn.addr !624
  br label %dec_label_pc_3bec, !insn.addr !624

dec_label_pc_3c1c:                                ; preds = %dec_label_pc_3bec
  call void @__stack_chk_fail(), !insn.addr !625
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !625

; uselistorder directives
  uselistorder i64 %17, { 1, 0 }
  uselistorder i32 %11, { 1, 0 }
  uselistorder i64* %consumer_-40, { 1, 0 }
  uselistorder i8** %consumer_ret_-32, { 1, 0 }
  uselistorder i64* %stack_var_-24, { 1, 0 }
  uselistorder i32* %rbx.0.reg2mem, { 3, 0, 2, 1 }
  uselistorder label %dec_label_pc_3bec, { 1, 2, 0 }
}

define i64 @call_condition_variable() local_unnamed_addr {
dec_label_pc_3c21:
  %0 = call i32 @param_condition_variable(), !insn.addr !626
  %1 = sext i32 %0 to i64, !insn.addr !626
  ret i64 %1, !insn.addr !627
}

define i32 @param_atomic_ops(i32 %thread_count, i32 %iterations) local_unnamed_addr {
dec_label_pc_3c38:
  %rax.0.reg2mem = alloca i32, !insn.addr !628
  %rbx.1.reg2mem = alloca i64, !insn.addr !628
  %rbx.0.reg2mem = alloca i64, !insn.addr !628
  %stack_var_-56 = alloca i32, align 4
  %stack_var_-60 = alloca i32, align 4
  store i32 %iterations, i32* %stack_var_-60, align 4, !insn.addr !629
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !630
  %1 = mul i32 %thread_count, 8, !insn.addr !631
  %2 = call i64* @malloc(i32 %1), !insn.addr !632
  %3 = icmp eq i64* %2, null, !insn.addr !633
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !634
  br i1 %3, label %dec_label_pc_3d20, label %dec_label_pc_3c74, !insn.addr !634

dec_label_pc_3c74:                                ; preds = %dec_label_pc_3c38
  store i32 0, i32* @atomic_counter, align 4, !insn.addr !635
  %4 = icmp slt i32 %thread_count, 1
  br i1 %4, label %dec_label_pc_3d53, label %dec_label_pc_3c8b, !insn.addr !636

dec_label_pc_3c8b:                                ; preds = %dec_label_pc_3c74
  %5 = zext i32 %thread_count to i64, !insn.addr !637
  %6 = ptrtoint i64* %2 to i64, !insn.addr !632
  %7 = mul i64 %5, 8, !insn.addr !638
  %8 = add i64 %7, %6, !insn.addr !639
  %9 = bitcast i32* %stack_var_-60 to i64*, !insn.addr !640
  store i64 %6, i64* %rbx.0.reg2mem, !insn.addr !641
  br label %dec_label_pc_3c9d, !insn.addr !641

dec_label_pc_3c9d:                                ; preds = %dec_label_pc_3cba, %dec_label_pc_3c8b
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %10 = inttoptr i64 %rbx.0.reload to i32*, !insn.addr !640
  %11 = call i32 @pthread_create(i32* %10, i64* null, i64* (i64*)* inttoptr (i64 10670 to i64* (i64*)*), i64* nonnull %9), !insn.addr !640
  %12 = icmp eq i32 %11, 0, !insn.addr !642
  %13 = icmp eq i1 %12, false, !insn.addr !643
  br i1 %13, label %dec_label_pc_3d3d, label %dec_label_pc_3cba, !insn.addr !643

dec_label_pc_3cba:                                ; preds = %dec_label_pc_3c9d
  %14 = add i64 %rbx.0.reload, 8, !insn.addr !644
  %15 = icmp eq i64 %14, %8, !insn.addr !645
  %16 = icmp eq i1 %15, false, !insn.addr !646
  store i64 %14, i64* %rbx.0.reg2mem, !insn.addr !646
  br i1 %16, label %dec_label_pc_3c9d, label %dec_label_pc_3cc3, !insn.addr !646

dec_label_pc_3cc3:                                ; preds = %dec_label_pc_3cba
  %17 = call i32 @pthread_create(i32* nonnull %stack_var_-56, i64* null, i64* (i64*)* inttoptr (i64 10722 to i64* (i64*)*), i64* null), !insn.addr !647
  %18 = icmp eq i32 %17, 0, !insn.addr !648
  br i1 %18, label %dec_label_pc_3d83, label %dec_label_pc_3ce6, !insn.addr !649

dec_label_pc_3ce6:                                ; preds = %dec_label_pc_3d83, %dec_label_pc_3cc3
  store i64 0, i64* %rbx.1.reg2mem, !insn.addr !650
  br label %dec_label_pc_3ceb, !insn.addr !650

dec_label_pc_3ceb:                                ; preds = %dec_label_pc_3ceb, %dec_label_pc_3ce6
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %19 = mul i64 %rbx.1.reload, 8, !insn.addr !651
  %20 = add i64 %19, %6, !insn.addr !651
  %21 = inttoptr i64 %20 to i64*, !insn.addr !651
  %22 = load i64, i64* %21, align 8, !insn.addr !651
  %23 = trunc i64 %22 to i32, !insn.addr !652
  %24 = call i32 @pthread_join(i32 %23, i64** null), !insn.addr !652
  %25 = add nuw nsw i64 %rbx.1.reload, 1, !insn.addr !653
  %26 = icmp ult i64 %25, %5, !insn.addr !654
  store i64 %25, i64* %rbx.1.reg2mem, !insn.addr !654
  br i1 %26, label %dec_label_pc_3ceb, label %dec_label_pc_3d03, !insn.addr !654

dec_label_pc_3d03:                                ; preds = %dec_label_pc_3ceb, %dec_label_pc_3d72, %dec_label_pc_3d53
  %27 = load i32, i32* @atomic_counter, align 4, !insn.addr !655
  call void @free(i64* nonnull %2), !insn.addr !656
  %28 = icmp slt i32 %27, 1
  %phitmp = select i1 %28, i32 -3, i32 42, !insn.addr !657
  store i32 %phitmp, i32* %rax.0.reg2mem, !insn.addr !657
  br label %dec_label_pc_3d20, !insn.addr !657

dec_label_pc_3d20:                                ; preds = %dec_label_pc_3c38, %dec_label_pc_3d3d, %dec_label_pc_3d03
  %29 = call i64 @__readfsqword(i64 40), !insn.addr !658
  %30 = icmp eq i64 %0, %29, !insn.addr !658
  %31 = icmp eq i1 %30, false, !insn.addr !659
  br i1 %31, label %dec_label_pc_3d97, label %dec_label_pc_3d30, !insn.addr !659

dec_label_pc_3d30:                                ; preds = %dec_label_pc_3d20
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !660

dec_label_pc_3d3d:                                ; preds = %dec_label_pc_3c9d
  call void @free(i64* nonnull %2), !insn.addr !661
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !662
  br label %dec_label_pc_3d20, !insn.addr !662

dec_label_pc_3d53:                                ; preds = %dec_label_pc_3c74
  %32 = call i32 @pthread_create(i32* nonnull %stack_var_-56, i64* null, i64* (i64*)* inttoptr (i64 10722 to i64* (i64*)*), i64* null), !insn.addr !663
  %33 = icmp eq i32 %32, 0, !insn.addr !664
  %34 = icmp eq i1 %33, false, !insn.addr !665
  br i1 %34, label %dec_label_pc_3d03, label %dec_label_pc_3d72, !insn.addr !665

dec_label_pc_3d72:                                ; preds = %dec_label_pc_3d53
  %35 = load i32, i32* %stack_var_-56, align 4, !insn.addr !666
  %36 = call i32 @pthread_join(i32 %35, i64** null), !insn.addr !667
  br label %dec_label_pc_3d03, !insn.addr !668

dec_label_pc_3d83:                                ; preds = %dec_label_pc_3cc3
  %37 = load i32, i32* %stack_var_-56, align 4, !insn.addr !669
  %38 = call i32 @pthread_join(i32 %37, i64** null), !insn.addr !670
  br label %dec_label_pc_3ce6, !insn.addr !671

dec_label_pc_3d97:                                ; preds = %dec_label_pc_3d20
  call void @__stack_chk_fail(), !insn.addr !672
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !672

; uselistorder directives
  uselistorder i64 %rbx.0.reload, { 1, 0 }
  uselistorder i64 %6, { 2, 0, 1 }
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64* %2, { 0, 1, 3, 2 }
  uselistorder i32* %stack_var_-56, { 1, 0, 3, 2 }
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rax.0.reg2mem, { 2, 0, 3, 1 }
  uselistorder i64** null, { 1, 0, 2, 3, 4, 5 }
  uselistorder i32* @atomic_counter, { 2, 3, 4, 5, 0, 1 }
  uselistorder i32 %thread_count, { 2, 1, 0 }
  uselistorder label %dec_label_pc_3d20, { 1, 2, 0 }
  uselistorder label %dec_label_pc_3d03, { 1, 2, 0 }
}

define i32 @call_atomic_ops() local_unnamed_addr {
dec_label_pc_3d9c:
  %0 = call i32 @param_atomic_ops(i32 4, i32 500), !insn.addr !673
  ret i32 %0, !insn.addr !674
}

define i32 @param_thread_local_storage(i32 %thread_count) local_unnamed_addr {
dec_label_pc_3db8:
  %rbp.2.reg2mem = alloca i64, !insn.addr !675
  %rax.0.reg2mem = alloca i32, !insn.addr !675
  %r13.2.reg2mem = alloca i32, !insn.addr !675
  %rbp.1.reg2mem = alloca i32, !insn.addr !675
  %r13.1.reg2mem = alloca i32, !insn.addr !675
  %rbp.0.reg2mem = alloca i32, !insn.addr !675
  %rbx.2.reg2mem = alloca i64, !insn.addr !675
  %r13.0.reg2mem = alloca i64, !insn.addr !675
  %rbx.1.reg2mem = alloca i64, !insn.addr !675
  %rbx.0.reg2mem = alloca i64, !insn.addr !675
  %stack_var_-72 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !676
  %1 = mul i32 %thread_count, 8, !insn.addr !677
  %2 = call i64* @malloc(i32 %1), !insn.addr !678
  %3 = call i64* @malloc(i32 %1), !insn.addr !679
  %4 = icmp eq i64* %2, null, !insn.addr !680
  %5 = icmp eq i64* %3, null, !insn.addr !681
  %or.cond = or i1 %4, %5
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !682
  br i1 %or.cond, label %dec_label_pc_3f06, label %dec_label_pc_3e10, !insn.addr !682

dec_label_pc_3e10:                                ; preds = %dec_label_pc_3db8
  %6 = zext i32 %thread_count to i64, !insn.addr !683
  %7 = ptrtoint i64* %2 to i64, !insn.addr !678
  %8 = ptrtoint i64* %3 to i64, !insn.addr !679
  %9 = icmp slt i32 %thread_count, 1
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !684
  store i32 0, i32* %rbp.1.reg2mem, !insn.addr !684
  store i32 0, i32* %r13.2.reg2mem, !insn.addr !684
  br i1 %9, label %dec_label_pc_3edb, label %dec_label_pc_3e28, !insn.addr !684

dec_label_pc_3e28:                                ; preds = %dec_label_pc_3e10, %dec_label_pc_3e28
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %10 = call i64* @malloc(i32 16), !insn.addr !685
  %11 = ptrtoint i64* %10 to i64, !insn.addr !685
  %12 = mul i64 %rbx.0.reload, 8, !insn.addr !686
  %13 = add i64 %12, %8, !insn.addr !686
  %14 = inttoptr i64 %13 to i64*, !insn.addr !686
  store i64 %11, i64* %14, align 8, !insn.addr !686
  %15 = and i64 %rbx.0.reload, 4294967295, !insn.addr !687
  %16 = bitcast i64* %10 to i8*, !insn.addr !688
  %17 = call i32 (i8*, i32, i32, i32, i8*, ...) @__snprintf_chk(i8* %16, i32 16, i32 1, i32 16, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_52ec, i64 0, i64 0), i64 %15), !insn.addr !688
  %18 = add i64 %rbx.0.reload, 1, !insn.addr !689
  %19 = icmp eq i64 %18, %6, !insn.addr !690
  %20 = icmp eq i1 %19, false, !insn.addr !691
  store i64 %18, i64* %rbx.0.reg2mem, !insn.addr !691
  store i64 0, i64* %rbx.1.reg2mem, !insn.addr !691
  store i64 %7, i64* %r13.0.reg2mem, !insn.addr !691
  br i1 %20, label %dec_label_pc_3e28, label %dec_label_pc_3e69, !insn.addr !691

dec_label_pc_3e69:                                ; preds = %dec_label_pc_3e28, %dec_label_pc_3e8e
  %r13.0.reload = load i64, i64* %r13.0.reg2mem
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %21 = mul i64 %rbx.1.reload, 8, !insn.addr !692
  %22 = add i64 %21, %8, !insn.addr !692
  %23 = inttoptr i64 %22 to i64*, !insn.addr !692
  %24 = load i64, i64* %23, align 8, !insn.addr !692
  %25 = inttoptr i64 %r13.0.reload to i32*, !insn.addr !693
  %26 = inttoptr i64 %24 to i64*, !insn.addr !693
  %27 = call i32 @pthread_create(i32* %25, i64* null, i64* (i64*)* inttoptr (i64 10747 to i64* (i64*)*), i64* %26), !insn.addr !693
  %28 = icmp eq i32 %27, 0, !insn.addr !694
  %29 = icmp eq i1 %28, false, !insn.addr !695
  br i1 %29, label %dec_label_pc_3f25, label %dec_label_pc_3e8e, !insn.addr !695

dec_label_pc_3e8e:                                ; preds = %dec_label_pc_3e69
  %30 = add i64 %rbx.1.reload, 1, !insn.addr !696
  %31 = add i64 %r13.0.reload, 8, !insn.addr !697
  %32 = icmp eq i64 %30, %6, !insn.addr !698
  %33 = icmp eq i1 %32, false, !insn.addr !699
  store i64 %30, i64* %rbx.1.reg2mem, !insn.addr !699
  store i64 %31, i64* %r13.0.reg2mem, !insn.addr !699
  br i1 %33, label %dec_label_pc_3e69, label %dec_label_pc_3e9b, !insn.addr !699

dec_label_pc_3e9b:                                ; preds = %dec_label_pc_3e8e
  %34 = bitcast i64* %stack_var_-72 to i64**
  store i64 0, i64* %rbx.2.reg2mem, !insn.addr !700
  store i32 %27, i32* %rbp.0.reg2mem, !insn.addr !700
  store i32 %27, i32* %r13.1.reg2mem, !insn.addr !700
  br label %dec_label_pc_3eac, !insn.addr !700

dec_label_pc_3eac:                                ; preds = %dec_label_pc_3eac, %dec_label_pc_3e9b
  %r13.1.reload = load i32, i32* %r13.1.reg2mem
  %rbp.0.reload = load i32, i32* %rbp.0.reg2mem
  %rbx.2.reload = load i64, i64* %rbx.2.reg2mem
  %35 = mul i64 %rbx.2.reload, 8, !insn.addr !701
  %36 = add i64 %35, %7, !insn.addr !701
  %37 = inttoptr i64 %36 to i64*, !insn.addr !701
  %38 = load i64, i64* %37, align 8, !insn.addr !701
  %39 = trunc i64 %38 to i32, !insn.addr !702
  %40 = call i32 @pthread_join(i32 %39, i64** nonnull %34), !insn.addr !702
  %41 = load i64, i64* %stack_var_-72, align 8, !insn.addr !703
  %42 = inttoptr i64 %41 to i32*, !insn.addr !704
  %43 = load i32, i32* %42, align 4, !insn.addr !704
  %44 = add i32 %43, %rbp.0.reload, !insn.addr !704
  %45 = add i64 %41, 4, !insn.addr !705
  %46 = inttoptr i64 %45 to i32*, !insn.addr !705
  %47 = load i32, i32* %46, align 4, !insn.addr !705
  %48 = add i32 %47, %r13.1.reload, !insn.addr !705
  %49 = inttoptr i64 %41 to i64*, !insn.addr !706
  call void @free(i64* %49), !insn.addr !706
  %50 = add i64 %35, %8, !insn.addr !707
  %51 = inttoptr i64 %50 to i64*, !insn.addr !707
  %52 = load i64, i64* %51, align 8, !insn.addr !707
  %53 = inttoptr i64 %52 to i64*, !insn.addr !708
  call void @free(i64* %53), !insn.addr !708
  %54 = add i64 %rbx.2.reload, 1, !insn.addr !709
  %55 = icmp eq i64 %54, %6, !insn.addr !710
  %56 = icmp eq i1 %55, false, !insn.addr !711
  store i64 %54, i64* %rbx.2.reg2mem, !insn.addr !711
  store i32 %44, i32* %rbp.0.reg2mem, !insn.addr !711
  store i32 %48, i32* %r13.1.reg2mem, !insn.addr !711
  store i32 %44, i32* %rbp.1.reg2mem, !insn.addr !711
  store i32 %48, i32* %r13.2.reg2mem, !insn.addr !711
  br i1 %56, label %dec_label_pc_3eac, label %dec_label_pc_3edb, !insn.addr !711

dec_label_pc_3edb:                                ; preds = %dec_label_pc_3eac, %dec_label_pc_3e10
  %rbp.1.reload = load i32, i32* %rbp.1.reg2mem
  call void @free(i64* nonnull %3), !insn.addr !712
  call void @free(i64* nonnull %2), !insn.addr !713
  %57 = mul i32 %thread_count, 100, !insn.addr !714
  %58 = icmp eq i32 %57, %rbp.1.reload, !insn.addr !715
  %59 = icmp eq i1 %58, false, !insn.addr !716
  br i1 %59, label %dec_label_pc_3f6e, label %dec_label_pc_3ef6, !insn.addr !716

dec_label_pc_3ef6:                                ; preds = %dec_label_pc_3edb
  %r13.2.reload = load i32, i32* %r13.2.reg2mem
  %60 = mul i32 %thread_count, 150, !insn.addr !717
  %61 = icmp eq i32 %60, %r13.2.reload, !insn.addr !718
  %62 = icmp eq i1 %61, false, !insn.addr !719
  store i32 42, i32* %rax.0.reg2mem, !insn.addr !719
  br i1 %62, label %dec_label_pc_3f6e, label %dec_label_pc_3f06, !insn.addr !719

dec_label_pc_3f06:                                ; preds = %dec_label_pc_3db8, %dec_label_pc_3ef6, %dec_label_pc_3f6e, %dec_label_pc_3f47
  %63 = call i64 @__readfsqword(i64 40), !insn.addr !720
  %64 = icmp eq i64 %0, %63, !insn.addr !720
  %65 = icmp eq i1 %64, false, !insn.addr !721
  br i1 %65, label %dec_label_pc_3f7c, label %dec_label_pc_3f16, !insn.addr !721

dec_label_pc_3f16:                                ; preds = %dec_label_pc_3f06
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !722

dec_label_pc_3f25:                                ; preds = %dec_label_pc_3e69
  %66 = trunc i64 %rbx.1.reload to i32, !insn.addr !723
  %67 = icmp slt i32 %66, 0, !insn.addr !723
  br i1 %67, label %dec_label_pc_3f47, label %dec_label_pc_3f2b, !insn.addr !724

dec_label_pc_3f2b:                                ; preds = %dec_label_pc_3f25
  %68 = and i64 %21, 34359738360, !insn.addr !725
  %69 = add i64 %8, 8, !insn.addr !725
  %70 = add i64 %69, %68, !insn.addr !725
  store i64 %8, i64* %rbp.2.reg2mem, !insn.addr !725
  br label %dec_label_pc_3f35, !insn.addr !725

dec_label_pc_3f35:                                ; preds = %dec_label_pc_3f35, %dec_label_pc_3f2b
  %rbp.2.reload = load i64, i64* %rbp.2.reg2mem
  %71 = inttoptr i64 %rbp.2.reload to i64*, !insn.addr !726
  %72 = load i64, i64* %71, align 8, !insn.addr !726
  %73 = inttoptr i64 %72 to i64*, !insn.addr !727
  call void @free(i64* %73), !insn.addr !727
  %74 = add i64 %rbp.2.reload, 8, !insn.addr !728
  %75 = icmp eq i64 %74, %70, !insn.addr !729
  %76 = icmp eq i1 %75, false, !insn.addr !730
  store i64 %74, i64* %rbp.2.reg2mem, !insn.addr !730
  br i1 %76, label %dec_label_pc_3f35, label %dec_label_pc_3f47, !insn.addr !730

dec_label_pc_3f47:                                ; preds = %dec_label_pc_3f35, %dec_label_pc_3f25
  call void @free(i64* nonnull %3), !insn.addr !731
  call void @free(i64* nonnull %2), !insn.addr !732
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !733
  br label %dec_label_pc_3f06, !insn.addr !733

dec_label_pc_3f6e:                                ; preds = %dec_label_pc_3ef6, %dec_label_pc_3edb
  store i32 -3, i32* %rax.0.reg2mem, !insn.addr !734
  br label %dec_label_pc_3f06, !insn.addr !734

dec_label_pc_3f7c:                                ; preds = %dec_label_pc_3f06
  call void @__stack_chk_fail(), !insn.addr !735
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !735

; uselistorder directives
  uselistorder i64 %41, { 2, 1, 0 }
  uselistorder i64 %35, { 1, 0 }
  uselistorder i64 %21, { 1, 0 }
  uselistorder i64 %rbx.1.reload, { 1, 0, 2 }
  uselistorder i64 %r13.0.reload, { 1, 0 }
  uselistorder i64 %8, { 0, 4, 1, 2, 3 }
  uselistorder i64 %7, { 1, 0 }
  uselistorder i64 %6, { 2, 1, 0 }
  uselistorder i64* %3, { 1, 2, 3, 0 }
  uselistorder i64* %2, { 0, 1, 3, 2 }
  uselistorder i64* %stack_var_-72, { 1, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r13.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rbp.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r13.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rax.0.reg2mem, { 4, 3, 0, 2, 1 }
  uselistorder i64* %rbp.2.reg2mem, { 1, 0, 2 }
  uselistorder void ()* @__stack_chk_fail, { 1, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 0, 2, 3, 4, 15 }
  uselistorder i32 -3, { 0, 5, 6, 1, 2, 3, 7, 8, 9, 4 }
  uselistorder i32 -2, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 10 }
  uselistorder i32 42, { 0, 3, 4, 1, 8, 9, 2, 5, 10, 6, 12, 7, 13, 11, 14 }
  uselistorder void (i64*)* @free, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14 }
  uselistorder i64 4, { 1, 2, 3, 0, 4, 5 }
  uselistorder i32 (i32, i64**)* @pthread_join, { 8, 7, 6, 5, 3, 2, 4, 1, 0, 9 }
  uselistorder i32 (i32*, i64*, i64* (i64*)*, i64*)* @pthread_create, { 1, 0, 2, 8, 4, 7, 6, 5, 3, 9 }
  uselistorder i1 false, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 0 }
  uselistorder i64 1, { 4, 5, 6, 7, 8, 0, 9, 1, 2, 3 }
  uselistorder i64 8, { 7, 8, 0, 9, 1, 2, 3, 10, 4, 11, 12, 5, 6, 13, 14, 15, 16 }
  uselistorder i32 -1, { 0, 1, 2, 3, 4, 5, 17, 18, 6, 19, 7, 8, 9, 10, 20, 11, 16, 21, 22, 12, 13, 14, 15 }
  uselistorder i64* null, { 2, 0, 1, 4, 5, 6, 7, 8, 3, 9, 10, 11, 12, 14, 13, 15, 16, 17, 18 }
  uselistorder i64* (i32)* @malloc, { 2, 3, 4, 5, 6, 7, 8, 0, 1, 9 }
  uselistorder i64 40, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30 }
  uselistorder i32 %thread_count, { 1, 3, 2, 4, 0 }
  uselistorder label %dec_label_pc_3f06, { 2, 3, 1, 0 }
  uselistorder label %dec_label_pc_3e69, { 1, 0 }
  uselistorder label %dec_label_pc_3e28, { 1, 0 }
}

define i32 @call_thread_local_storage() local_unnamed_addr {
dec_label_pc_3f81:
  %0 = call i32 @param_thread_local_storage(i32 4), !insn.addr !736
  ret i32 %0, !insn.addr !737
}

define void @test_thread_concurrency() local_unnamed_addr {
dec_label_pc_3f98:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_52f6 to i8*)), !insn.addr !738
  %1 = call i32 @call_pthread_create(), !insn.addr !739
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_5314 to i8*)), !insn.addr !740
  %3 = call i32 @param_pthread_join(), !insn.addr !741
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_5330 to i8*)), !insn.addr !742
  %5 = call i32 @call_mutex_lock(), !insn.addr !743
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_534d to i8*)), !insn.addr !744
  %7 = call i32 @param_condition_variable(), !insn.addr !745
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_5369 to i8*)), !insn.addr !746
  %9 = call i32 @call_atomic_ops(), !insn.addr !747
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_5385 to i8*)), !insn.addr !748
  %11 = call i32 @call_thread_local_storage(), !insn.addr !749
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_53a1 to i8*)), !insn.addr !750
  ret void, !insn.addr !751

; uselistorder directives
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 2, 3, 4, 5, 6, 7, 8, 1, 0, 26 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
  uselistorder i64 0, { 0, 1, 14, 15, 2, 3, 4, 74, 75, 111, 76, 77, 78, 79, 80, 81, 5, 114, 6, 115, 82, 83, 84, 85, 86, 87, 88, 89, 11, 12, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 7, 8, 9, 112, 13, 10, 113, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_407d:
  call void @test_standard_library_functions(), !insn.addr !752
  call void @test_system_calls(), !insn.addr !753
  call void @test_thread_concurrency(), !insn.addr !754
  ret i32 0, !insn.addr !755

; uselistorder directives
  uselistorder i32 0, { 3, 26, 27, 0, 1, 28, 29, 30, 4, 31, 32, 33, 34, 35, 36, 37, 38, 25, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 5, 6, 50, 51, 52, 53, 54, 55, 56, 7, 8, 58, 57, 59, 9, 10, 60, 11, 62, 61, 63, 64, 65, 2, 12, 13, 14, 66, 67, 68, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_40b0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !756

; uselistorder directives
  uselistorder i32 1, { 6, 59, 60, 61, 62, 63, 64, 66, 65, 109, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 67, 68, 110, 105, 21, 20, 19, 113, 112, 111, 22, 69, 114, 25, 24, 23, 117, 119, 118, 116, 115, 30, 29, 28, 27, 26, 122, 121, 120, 31, 70, 71, 72, 73, 74, 75, 76, 77, 36, 35, 34, 33, 32, 78, 37, 79, 124, 80, 125, 123, 38, 81, 128, 127, 126, 39, 8, 106, 40, 129, 5, 41, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 107, 130, 42, 7, 45, 44, 43, 48, 47, 46, 94, 95, 131, 49, 50, 133, 132, 51, 96, 134, 136, 138, 139, 137, 135, 98, 97, 140, 108, 4, 100, 99, 141, 143, 101, 53, 52, 3, 144, 102, 145, 103, 54, 2, 1, 58, 104, 56, 55, 146, 0, 142, 57 }
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

declare i32 @__readfsdword(i64) local_unnamed_addr

declare void @__writefsdword(i64, i32) local_unnamed_addr

declare i64 @__readfsqword(i64) local_unnamed_addr

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
!64 = !{i64 10111}
!65 = !{i64 10117}
!66 = !{i64 10168}
!67 = !{i64 10232}
!68 = !{i64 10244}
!69 = !{i64 10251}
!70 = !{i64 10254}
!71 = !{i64 10265}
!72 = !{i64 10267}
!73 = !{i64 10274}
!74 = !{i64 10279}
!75 = !{i64 10284}
!76 = !{i64 10292}
!77 = !{i64 10296}
!78 = !{i64 10308}
!79 = !{i64 10317}
!80 = !{i64 10327}
!81 = !{i64 10333}
!82 = !{i64 10334}
!83 = !{i64 10338}
!84 = !{i64 10345}
!85 = !{i64 10347}
!86 = !{i64 10352}
!87 = !{i64 10357}
!88 = !{i64 10362}
!89 = !{i64 10364}
!90 = !{i64 10367}
!91 = !{i64 10369}
!92 = !{i64 10371}
!93 = !{i64 10379}
!94 = !{i64 10392}
!95 = !{i64 10397}
!96 = !{i64 10400}
!97 = !{i64 10403}
!98 = !{i64 10404}
!99 = !{i64 10418}
!100 = !{i64 10435}
!101 = !{i64 10440}
!102 = !{i64 10446}
!103 = !{i64 10449}
!104 = !{i64 10458}
!105 = !{i64 10468}
!106 = !{i64 10473}
!107 = !{i64 10476}
!108 = !{i64 10479}
!109 = !{i64 10490}
!110 = !{i64 10508}
!111 = !{i64 10513}
!112 = !{i64 10520}
!113 = !{i64 10542}
!114 = !{i64 10547}
!115 = !{i64 10554}
!116 = !{i64 10556}
!117 = !{i64 10569}
!118 = !{i64 10579}
!119 = !{i64 10584}
!120 = !{i64 10592}
!121 = !{i64 10603}
!122 = !{i64 10618}
!123 = !{i64 10623}
!124 = !{i64 10633}
!125 = !{i64 10650}
!126 = !{i64 10658}
!127 = !{i64 10669}
!128 = !{i64 10670}
!129 = !{i64 10678}
!130 = !{i64 10685}
!131 = !{i64 10693}
!132 = !{i64 10701}
!133 = !{i64 10709}
!134 = !{i64 10712}
!135 = !{i64 10714}
!136 = !{i64 10721}
!137 = !{i64 10726}
!138 = !{i64 10732}
!139 = !{i64 10735}
!140 = !{i64 10746}
!141 = !{i64 10760}
!142 = !{i64 10768}
!143 = !{i64 10771}
!144 = !{i64 10779}
!145 = !{i64 10788}
!146 = !{i64 10800}
!147 = !{i64 10810}
!148 = !{i64 10815}
!149 = !{i64 10817}
!150 = !{i64 10826}
!151 = !{i64 10835}
!152 = !{i64 10843}
!153 = !{i64 10849}
!154 = !{i64 10858}
!155 = !{i64 10884}
!156 = !{i64 10894}
!157 = !{i64 10903}
!158 = !{i64 10909}
!159 = !{i64 10910}
!160 = !{i64 10923}
!161 = !{i64 10928}
!162 = !{i64 10936}
!163 = !{i64 10943}
!164 = !{i64 10968}
!165 = !{i64 10985}
!166 = !{i64 11006}
!167 = !{i64 11011}
!168 = !{i64 11013}
!169 = !{i64 11021}
!170 = !{i64 11030}
!171 = !{i64 11039}
!172 = !{i64 11049}
!173 = !{i64 11058}
!174 = !{i64 11066}
!175 = !{i64 11075}
!176 = !{i64 11091}
!177 = !{i64 11130}
!178 = !{i64 11169}
!179 = !{i64 11178}
!180 = !{i64 11191}
!181 = !{i64 11200}
!182 = !{i64 11206}
!183 = !{i64 11207}
!184 = !{i64 11220}
!185 = !{i64 11225}
!186 = !{i64 11233}
!187 = !{i64 11240}
!188 = !{i64 11251}
!189 = !{i64 11267}
!190 = !{i64 11291}
!191 = !{i64 11315}
!192 = !{i64 11357}
!193 = !{i64 11377}
!194 = !{i64 11389}
!195 = !{i64 11398}
!196 = !{i64 11382}
!197 = !{i64 11406}
!198 = !{i64 11407}
!199 = !{i64 11420}
!200 = !{i64 11442}
!201 = !{i64 11451}
!202 = !{i64 11472}
!203 = !{i64 11481}
!204 = !{i64 11482}
!205 = !{i64 11490}
!206 = !{i64 11521}
!207 = !{i64 11526}
!208 = !{i64 11529}
!209 = !{i64 11531}
!210 = !{i64 11535}
!211 = !{i64 11543}
!212 = !{i64 11552}
!213 = !{i64 11558}
!214 = !{i64 11566}
!215 = !{i64 11586}
!216 = !{i64 11595}
!217 = !{i64 11596}
!218 = !{i64 11613}
!219 = !{i64 11618}
!220 = !{i64 11621}
!221 = !{i64 11629}
!222 = !{i64 11639}
!223 = !{i64 11652}
!224 = !{i64 11675}
!225 = !{i64 11680}
!226 = !{i64 11683}
!227 = !{i64 11690}
!228 = !{i64 11691}
!229 = !{i64 11706}
!230 = !{i64 11729}
!231 = !{i64 11734}
!232 = !{i64 11737}
!233 = !{i64 11766}
!234 = !{i64 11771}
!235 = !{i64 11775}
!236 = !{i64 11699}
!237 = !{i64 11780}
!238 = !{i64 11801}
!239 = !{i64 11809}
!240 = !{i64 11816}
!241 = !{i64 11824}
!242 = !{i64 11829}
!243 = !{i64 11833}
!244 = !{i64 11845}
!245 = !{i64 11850}
!246 = !{i64 11858}
!247 = !{i64 11866}
!248 = !{i64 11875}
!249 = !{i64 11885}
!250 = !{i64 11889}
!251 = !{i64 11899}
!252 = !{i64 11915}
!253 = !{i64 11935}
!254 = !{i64 11944}
!255 = !{i64 11945}
!256 = !{i64 11958}
!257 = !{i64 11969}
!258 = !{i64 11974}
!259 = !{i64 11977}
!260 = !{i64 11982}
!261 = !{i64 11985}
!262 = !{i64 11999}
!263 = !{i64 12001}
!264 = !{i64 12004}
!265 = !{i64 12008}
!266 = !{i64 12011}
!267 = !{i64 12013}
!268 = !{i64 12015}
!269 = !{i64 12021}
!270 = !{i64 12034}
!271 = !{i64 12055}
!272 = !{i64 12064}
!273 = !{i64 12065}
!274 = !{i64 12089}
!275 = !{i64 12094}
!276 = !{i64 12097}
!277 = !{i64 12099}
!278 = !{i64 12103}
!279 = !{i64 12108}
!280 = !{i64 12111}
!281 = !{i64 12113}
!282 = !{i64 12117}
!283 = !{i64 12120}
!284 = !{i64 12130}
!285 = !{i64 12138}
!286 = !{i64 12146}
!287 = !{i64 12155}
!288 = !{i64 12162}
!289 = !{i64 12165}
!290 = !{i64 12170}
!291 = !{i64 12176}
!292 = !{i64 12180}
!293 = !{i64 12183}
!294 = !{i64 12193}
!295 = !{i64 12202}
!296 = !{i64 12205}
!297 = !{i64 12210}
!298 = !{i64 12219}
!299 = !{i64 12225}
!300 = !{i64 12226}
!301 = !{i64 12249}
!302 = !{i64 12257}
!303 = !{i64 12260}
!304 = !{i64 12268}
!305 = !{i64 12277}
!306 = !{i64 12285}
!307 = !{i64 12288}
!308 = !{i64 12296}
!309 = !{i64 12299}
!310 = !{i64 12305}
!311 = !{i64 12333}
!312 = !{i64 12342}
!313 = !{i64 12358}
!314 = !{i64 12368}
!315 = !{i64 12392}
!316 = !{i64 12402}
!317 = !{i64 12426}
!318 = !{i64 12436}
!319 = !{i64 12460}
!320 = !{i64 12470}
!321 = !{i64 12494}
!322 = !{i64 12504}
!323 = !{i64 12528}
!324 = !{i64 12538}
!325 = !{i64 12562}
!326 = !{i64 12572}
!327 = !{i64 12596}
!328 = !{i64 12606}
!329 = !{i64 12630}
!330 = !{i64 12640}
!331 = !{i64 12664}
!332 = !{i64 12674}
!333 = !{i64 12698}
!334 = !{i64 12708}
!335 = !{i64 12732}
!336 = !{i64 12742}
!337 = !{i64 12766}
!338 = !{i64 12775}
!339 = !{i64 12776}
!340 = !{i64 12799}
!341 = !{i64 12804}
!342 = !{i64 12806}
!343 = !{i64 12822}
!344 = !{i64 12830}
!345 = !{i64 12831}
!346 = !{i64 12836}
!347 = !{i64 12838}
!348 = !{i64 12840}
!349 = !{i64 12857}
!350 = !{i64 12862}
!351 = !{i64 12865}
!352 = !{i64 12872}
!353 = !{i64 12884}
!354 = !{i64 12906}
!355 = !{i64 12942}
!356 = !{i64 12951}
!357 = !{i64 12911}
!358 = !{i64 12960}
!359 = !{i64 12968}
!360 = !{i64 12988}
!361 = !{i64 12997}
!362 = !{i64 12998}
!363 = !{i64 13014}
!364 = !{i64 13030}
!365 = !{i64 13035}
!366 = !{i64 13037}
!367 = !{i64 13041}
!368 = !{i64 13053}
!369 = !{i64 13065}
!370 = !{i64 13067}
!371 = !{i64 13069}
!372 = !{i64 13073}
!373 = !{i64 13076}
!374 = !{i64 13084}
!375 = !{i64 13092}
!376 = !{i64 13101}
!377 = !{i64 13109}
!378 = !{i64 13129}
!379 = !{i64 13139}
!380 = !{i64 13151}
!381 = !{i64 13176}
!382 = !{i64 13181}
!383 = !{i64 13189}
!384 = !{i64 13196}
!385 = !{i64 13197}
!386 = !{i64 13206}
!387 = !{i64 13222}
!388 = !{i64 13227}
!389 = !{i64 13232}
!390 = !{i64 13234}
!391 = !{i64 13240}
!392 = !{i64 13245}
!393 = !{i64 13247}
!394 = !{i64 13253}
!395 = !{i64 13255}
!396 = !{i64 13259}
!397 = !{i64 13280}
!398 = !{i64 13289}
!399 = !{i64 13299}
!400 = !{i64 13202}
!401 = !{i64 13308}
!402 = !{i64 13323}
!403 = !{i64 13327}
!404 = !{i64 13335}
!405 = !{i64 13340}
!406 = !{i64 13344}
!407 = !{i64 13354}
!408 = !{i64 13372}
!409 = !{i64 13380}
!410 = !{i64 13389}
!411 = !{i64 13396}
!412 = !{i64 13411}
!413 = !{i64 13424}
!414 = !{i64 13433}
!415 = !{i64 13434}
!416 = !{i64 13443}
!417 = !{i64 13474}
!418 = !{i64 13479}
!419 = !{i64 13481}
!420 = !{i64 13489}
!421 = !{i64 13520}
!422 = !{i64 13525}
!423 = !{i64 13527}
!424 = !{i64 13552}
!425 = !{i64 13566}
!426 = !{i64 13571}
!427 = !{i64 13573}
!428 = !{i64 13582}
!429 = !{i64 13587}
!430 = !{i64 13665}
!431 = !{i64 13608}
!432 = !{i64 13617}
!433 = !{i64 13624}
!434 = !{i64 13627}
!435 = !{i64 13637}
!436 = !{i64 13641}
!437 = !{i64 13651}
!438 = !{i64 13674}
!439 = !{i64 13687}
!440 = !{i64 13696}
!441 = !{i64 13697}
!442 = !{i64 13727}
!443 = !{i64 13732}
!444 = !{i64 13734}
!445 = !{i64 13742}
!446 = !{i64 13759}
!447 = !{i64 13766}
!448 = !{i64 13768}
!449 = !{i64 13780}
!450 = !{i64 13787}
!451 = !{i64 13789}
!452 = !{i64 13803}
!453 = !{i64 13811}
!454 = !{i64 13815}
!455 = !{i64 13827}
!456 = !{i64 13830}
!457 = !{i64 13837}
!458 = !{i64 13844}
!459 = !{i64 13855}
!460 = !{i64 13872}
!461 = !{i64 13884}
!462 = !{i64 13925}
!463 = !{i64 13942}
!464 = !{i64 13949}
!465 = !{i64 13950}
!466 = !{i64 13967}
!467 = !{i64 13972}
!468 = !{i64 13976}
!469 = !{i64 13994}
!470 = !{i64 13999}
!471 = !{i64 14003}
!472 = !{i64 14009}
!473 = !{i64 14024}
!474 = !{i64 14035}
!475 = !{i64 14037}
!476 = !{i64 14049}
!477 = !{i64 14060}
!478 = !{i64 14062}
!479 = !{i64 14064}
!480 = !{i64 14067}
!481 = !{i64 14069}
!482 = !{i64 14075}
!483 = !{i64 14077}
!484 = !{i64 14083}
!485 = !{i64 14089}
!486 = !{i64 14092}
!487 = !{i64 14098}
!488 = !{i64 14113}
!489 = !{i64 14124}
!490 = !{i64 14126}
!491 = !{i64 14138}
!492 = !{i64 14149}
!493 = !{i64 14151}
!494 = !{i64 14153}
!495 = !{i64 14156}
!496 = !{i64 14158}
!497 = !{i64 14164}
!498 = !{i64 14166}
!499 = !{i64 14168}
!500 = !{i64 14174}
!501 = !{i64 14177}
!502 = !{i64 14189}
!503 = !{i64 14204}
!504 = !{i64 14209}
!505 = !{i64 14215}
!506 = !{i64 14266}
!507 = !{i64 14275}
!508 = !{i64 14291}
!509 = !{i64 14301}
!510 = !{i64 14325}
!511 = !{i64 14335}
!512 = !{i64 14359}
!513 = !{i64 14369}
!514 = !{i64 14393}
!515 = !{i64 14398}
!516 = !{i64 14422}
!517 = !{i64 14427}
!518 = !{i64 14451}
!519 = !{i64 14461}
!520 = !{i64 14485}
!521 = !{i64 14490}
!522 = !{i64 14514}
!523 = !{i64 14523}
!524 = !{i64 14524}
!525 = !{i64 14533}
!526 = !{i64 14549}
!527 = !{i64 14575}
!528 = !{i64 14580}
!529 = !{i64 14582}
!530 = !{i64 14589}
!531 = !{i64 14594}
!532 = !{i64 14599}
!533 = !{i64 14604}
!534 = !{i64 14606}
!535 = !{i64 14616}
!536 = !{i64 14625}
!537 = !{i64 14634}
!538 = !{i64 14642}
!539 = !{i64 14660}
!540 = !{i64 14669}
!541 = !{i64 14670}
!542 = !{i64 14682}
!543 = !{i64 14686}
!544 = !{i64 14702}
!545 = !{i64 14718}
!546 = !{i64 14777}
!547 = !{i64 14782}
!548 = !{i64 14787}
!549 = !{i64 14808}
!550 = !{i64 14815}
!551 = !{i64 14817}
!552 = !{i64 14819}
!553 = !{i64 14823}
!554 = !{i64 14827}
!555 = !{i64 14830}
!556 = !{i64 14837}
!557 = !{i64 14842}
!558 = !{i64 14851}
!559 = !{i64 14856}
!560 = !{i64 14858}
!561 = !{i64 14865}
!562 = !{i64 14869}
!563 = !{i64 14873}
!564 = !{i64 14877}
!565 = !{i64 14884}
!566 = !{i64 14893}
!567 = !{i64 14909}
!568 = !{i64 14924}
!569 = !{i64 14942}
!570 = !{i64 14951}
!571 = !{i64 14952}
!572 = !{i64 14973}
!573 = !{i64 14980}
!574 = !{i64 14984}
!575 = !{i64 14989}
!576 = !{i64 14992}
!577 = !{i64 15001}
!578 = !{i64 15014}
!579 = !{i64 14970}
!580 = !{i64 15019}
!581 = !{i64 15022}
!582 = !{i64 15052}
!583 = !{i64 15029}
!584 = !{i64 15057}
!585 = !{i64 15059}
!586 = !{i64 15061}
!587 = !{i64 15065}
!588 = !{i64 15068}
!589 = !{i64 15075}
!590 = !{i64 15079}
!591 = !{i64 15084}
!592 = !{i64 15088}
!593 = !{i64 15091}
!594 = !{i64 15096}
!595 = !{i64 15101}
!596 = !{i64 15107}
!597 = !{i64 15113}
!598 = !{i64 15126}
!599 = !{i64 15143}
!600 = !{i64 15147}
!601 = !{i64 15157}
!602 = !{i64 15184}
!603 = !{i64 15193}
!604 = !{i64 15194}
!605 = !{i64 15203}
!606 = !{i64 15219}
!607 = !{i64 15229}
!608 = !{i64 15261}
!609 = !{i64 15266}
!610 = !{i64 15268}
!611 = !{i64 15290}
!612 = !{i64 15295}
!613 = !{i64 15297}
!614 = !{i64 15309}
!615 = !{i64 15319}
!616 = !{i64 15323}
!617 = !{i64 15328}
!618 = !{i64 15333}
!619 = !{i64 15335}
!620 = !{i64 15345}
!621 = !{i64 15354}
!622 = !{i64 15363}
!623 = !{i64 15369}
!624 = !{i64 15379}
!625 = !{i64 15388}
!626 = !{i64 15406}
!627 = !{i64 15415}
!628 = !{i64 15416}
!629 = !{i64 15435}
!630 = !{i64 15439}
!631 = !{i64 15458}
!632 = !{i64 15462}
!633 = !{i64 15467}
!634 = !{i64 15470}
!635 = !{i64 15484}
!636 = !{i64 15493}
!637 = !{i64 15432}
!638 = !{i64 15502}
!639 = !{i64 15505}
!640 = !{i64 15533}
!641 = !{i64 15510}
!642 = !{i64 15538}
!643 = !{i64 15540}
!644 = !{i64 15546}
!645 = !{i64 15550}
!646 = !{i64 15553}
!647 = !{i64 15577}
!648 = !{i64 15582}
!649 = !{i64 15584}
!650 = !{i64 15590}
!651 = !{i64 15595}
!652 = !{i64 15605}
!653 = !{i64 15610}
!654 = !{i64 15617}
!655 = !{i64 15619}
!656 = !{i64 15628}
!657 = !{i64 15645}
!658 = !{i64 15653}
!659 = !{i64 15662}
!660 = !{i64 15676}
!661 = !{i64 15680}
!662 = !{i64 15690}
!663 = !{i64 15721}
!664 = !{i64 15726}
!665 = !{i64 15728}
!666 = !{i64 15735}
!667 = !{i64 15740}
!668 = !{i64 15745}
!669 = !{i64 15752}
!670 = !{i64 15757}
!671 = !{i64 15762}
!672 = !{i64 15767}
!673 = !{i64 15790}
!674 = !{i64 15799}
!675 = !{i64 15800}
!676 = !{i64 15825}
!677 = !{i64 15844}
!678 = !{i64 15851}
!679 = !{i64 15862}
!680 = !{i64 15867}
!681 = !{i64 15879}
!682 = !{i64 15870}
!683 = !{i64 15818}
!684 = !{i64 15891}
!685 = !{i64 15917}
!686 = !{i64 15925}
!687 = !{i64 15929}
!688 = !{i64 15955}
!689 = !{i64 15960}
!690 = !{i64 15964}
!691 = !{i64 15967}
!692 = !{i64 15980}
!693 = !{i64 15999}
!694 = !{i64 16006}
!695 = !{i64 16008}
!696 = !{i64 16014}
!697 = !{i64 16018}
!698 = !{i64 16022}
!699 = !{i64 16025}
!700 = !{i64 16040}
!701 = !{i64 16044}
!702 = !{i64 16052}
!703 = !{i64 16057}
!704 = !{i64 16062}
!705 = !{i64 16064}
!706 = !{i64 16068}
!707 = !{i64 16073}
!708 = !{i64 16077}
!709 = !{i64 16082}
!710 = !{i64 16086}
!711 = !{i64 16089}
!712 = !{i64 16094}
!713 = !{i64 16102}
!714 = !{i64 16111}
!715 = !{i64 16114}
!716 = !{i64 16116}
!717 = !{i64 16118}
!718 = !{i64 16124}
!719 = !{i64 16127}
!720 = !{i64 16139}
!721 = !{i64 16148}
!722 = !{i64 16164}
!723 = !{i64 16165}
!724 = !{i64 16169}
!725 = !{i64 16176}
!726 = !{i64 16181}
!727 = !{i64 16185}
!728 = !{i64 16190}
!729 = !{i64 16194}
!730 = !{i64 16197}
!731 = !{i64 16202}
!732 = !{i64 16210}
!733 = !{i64 16220}
!734 = !{i64 16243}
!735 = !{i64 16252}
!736 = !{i64 16270}
!737 = !{i64 16279}
!738 = !{i64 16295}
!739 = !{i64 16305}
!740 = !{i64 16329}
!741 = !{i64 16339}
!742 = !{i64 16363}
!743 = !{i64 16373}
!744 = !{i64 16397}
!745 = !{i64 16407}
!746 = !{i64 16431}
!747 = !{i64 16441}
!748 = !{i64 16465}
!749 = !{i64 16475}
!750 = !{i64 16499}
!751 = !{i64 16508}
!752 = !{i64 16522}
!753 = !{i64 16532}
!754 = !{i64 16542}
!755 = !{i64 16556}
!756 = !{i64 16572}
