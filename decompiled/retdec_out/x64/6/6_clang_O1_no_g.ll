source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%_IO_FILE = type { i32 }
%stat = type { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }
%sockaddr = type { i64, [14 x i8] }
%shmid_ds = type { %ipc_perm, i32, i64, i64, i64, i32, i32, i16, i16, i64*, i64* }
%ipc_perm = type { i32, i32, i32, i32, i32, i32, i16 }

@global_var_71e8 = global i64 0
@global_var_4054 = constant [21 x i8] c"Value: %d, Name: %s\0A\00"
@global_var_4069 = constant [5 x i8] c"Test\00"
@global_var_406e = constant [6 x i8] c"%d,%d\00"
@global_var_4074 = constant [8 x i8] c"123,456\00"
@global_var_407e = constant [12 x i8] c"/etc/passwd\00"
@global_var_409d = constant [3 x i8] c"w+\00"
@global_var_408a = constant [19 x i8] c"BinBench Test Data\00"
@global_var_4010 = local_unnamed_addr constant [16 x i8] c"Bench Test Data\00"
@global_var_4020 = local_unnamed_addr constant [25 x i8] c"BinBench Test DaHelloLib\00"
@global_var_40a0 = constant [23 x i8] c"/tmp/binbench_test.tmp\00"
@global_var_4205 = constant [10 x i8] c"/bin/true\00"
@global_var_420f = constant [10 x i8] c"HelloPipe\00"
@global_var_4219 = constant [18 x i8] c"/tmp/binbench_shm\00"
@global_var_71f8 = global i64 0
@global_var_7221 = global i64 0
@global_var_7228 = global i64 0
@global_var_7258 = global i64 0
@global_var_42fc = constant [10 x i8] c"Thread-%d\00"
@0 = external global i32
@1 = internal constant [2 x i8] c"r\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i64 0, i64 0)
@3 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\87\E5\87\86\E5\BA\93\E5\87\BD\E6\95\B0\E8\B0\83\E7\94\A8 ===\00"
@global_var_43af = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @3, i64 0, i64 0)
@4 = internal constant [27 x i8] c"LIB-L1-01: %d (\E6\9C\9F\E6\9C\9B: 8)\0A\00"
@global_var_40b7 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @4, i64 0, i64 0)
@5 = internal constant [27 x i8] c"LIB-L1-02: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_40d2 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @5, i64 0, i64 0)
@6 = internal constant [28 x i8] c"LIB-L1-03: %d (\E6\9C\9F\E6\9C\9B: 12)\0A\00"
@global_var_40ed = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @6, i64 0, i64 0)
@7 = internal constant [28 x i8] c"LIB-L1-04: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_4109 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @7, i64 0, i64 0)
@8 = internal constant [28 x i8] c"LIB-L1-05: %d (\E6\9C\9F\E6\9C\9B: -1)\0A\00"
@global_var_4125 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i64 0, i64 0)
@9 = internal constant [28 x i8] c"LIB-L1-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_4141 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i64 0, i64 0)
@10 = internal constant [29 x i8] c"LIB-L1-07: %d (\E6\9C\9F\E6\9C\9B: 579)\0A\00"
@global_var_415d = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"LIB-L1-08: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_417a = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [28 x i8] c"LIB-L1-09: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_4196 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @12, i64 0, i64 0)
@13 = internal constant [28 x i8] c"LIB-L1-10: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_41b2 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @13, i64 0, i64 0)
@14 = internal constant [27 x i8] c"LIB-L1-11: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_41ce = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @14, i64 0, i64 0)
@15 = internal constant [28 x i8] c"LIB-L1-12: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_41e9 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @15, i64 0, i64 0)
@global_var_1000 = global i32 7
@global_var_3b6 = global i32 1048576
@global_var_71f0 = local_unnamed_addr global i32 0
@global_var_3e8 = global i32 8454144
@global_var_71f4 = local_unnamed_addr global i32 0
@global_var_7d0 = global i32 0
@16 = internal constant [27 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\B3\BB\E7\BB\9F\E8\B0\83\E7\94\A8 ===\00"
@global_var_43d3 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @16, i64 0, i64 0)
@17 = internal constant [28 x i8] c"SYS-L3-01: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_4238 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i64 0, i64 0)
@18 = internal constant [28 x i8] c"SYS-L3-02: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_4254 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @18, i64 0, i64 0)
@19 = internal constant [28 x i8] c"SYS-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_4270 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @19, i64 0, i64 0)
@20 = internal constant [28 x i8] c"SYS-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_428c = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @20, i64 0, i64 0)
@21 = internal constant [28 x i8] c"SYS-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_42a8 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @21, i64 0, i64 0)
@22 = internal constant [28 x i8] c"SYS-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_42c4 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @22, i64 0, i64 0)
@23 = internal constant [28 x i8] c"SYS-L3-07: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_42e0 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @23, i64 0, i64 0)
@global_var_7220 = local_unnamed_addr global i32 0
@global_var_7250 = local_unnamed_addr global i8 0
@global_var_7288 = local_unnamed_addr global i8 0
@global_var_728c = local_unnamed_addr global i32 0
@24 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\BA\BF\E7\A8\8B\E4\B8\8E\E5\B9\B6\E5\8F\91 ===\00"
@global_var_43ee = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @24, i64 0, i64 0)
@25 = internal constant [28 x i8] c"THR-L3-01: %d (\E6\9C\9F\E6\9C\9B: 49)\0A\00"
@global_var_4306 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @25, i64 0, i64 0)
@26 = internal constant [29 x i8] c"THR-L3-02: %d (\E6\9C\9F\E6\9C\9B: 465)\0A\00"
@global_var_4322 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @26, i64 0, i64 0)
@27 = internal constant [28 x i8] c"THR-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_433f = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @27, i64 0, i64 0)
@28 = internal constant [28 x i8] c"THR-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_435b = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @28, i64 0, i64 0)
@29 = internal constant [28 x i8] c"THR-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_4377 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @29, i64 0, i64 0)
@30 = internal constant [28 x i8] c"THR-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_4393 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @30, i64 0, i64 0)
@global_var_407c = constant [2 x i8] c"r\00"

define i64 @_init() local_unnamed_addr {
dec_label_pc_2000:
  %rax.0.reg2mem = alloca i64, !insn.addr !0
  %0 = load i64, i64* inttoptr (i64 28640 to i64*), align 32, !insn.addr !1
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

define i32 @function_2030(i32 %sig) local_unnamed_addr {
dec_label_pc_2030:
  %0 = call i32 @raise(i32 %sig), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define void @function_2040(i64* %ptr) local_unnamed_addr {
dec_label_pc_2040:
  call void @free(i64* %ptr), !insn.addr !7
  ret void, !insn.addr !7
}

define i32* @function_2050() local_unnamed_addr {
dec_label_pc_2050:
  %0 = call i32* @__errno_location(), !insn.addr !8
  ret i32* %0, !insn.addr !8
}

define i32 @function_2060(i8* %name) local_unnamed_addr {
dec_label_pc_2060:
  %0 = call i32 @unlink(i8* %name), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i8* @function_2070(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_2070:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !10
  ret i8* %0, !insn.addr !10
}

define void @function_2080(i32 %status) local_unnamed_addr {
dec_label_pc_2080:
  call void @_exit(i32 %status), !insn.addr !11
  ret void, !insn.addr !11
}

define i8* @function_2090(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_2090:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !12
  ret i8* %0, !insn.addr !12
}

define i32 @function_20a0(i8* %s) local_unnamed_addr {
dec_label_pc_20a0:
  %0 = call i32 @puts(i8* %s), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define i32 @function_20b0(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_20b0:
  %0 = call i32 @fread(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream), !insn.addr !14
  ret i32 %0, !insn.addr !14
}

define i32 @function_20c0(i32 %fd, i32 %level, i32 %optname, i64* %optval, i32 %optlen) local_unnamed_addr {
dec_label_pc_20c0:
  %0 = call i32 @setsockopt(i32 %fd, i32 %level, i32 %optname, i64* %optval, i32 %optlen), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define i32 @function_20d0(i64* %shmaddr) local_unnamed_addr {
dec_label_pc_20d0:
  %0 = call i32 @shmdt(i64* %shmaddr), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i32 @function_20e0(i32 %fd, i64* %buf, i32 %n) local_unnamed_addr {
dec_label_pc_20e0:
  %0 = call i32 @write(i32 %fd, i64* %buf, i32 %n), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i32 @function_20f0(i64* %cond, i64* %mutex) local_unnamed_addr {
dec_label_pc_20f0:
  %0 = call i32 @pthread_cond_wait(i64* %cond, i64* %mutex), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define i32 @function_2100(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_2100:
  %0 = call i32 @fclose(%_IO_FILE* %stream), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @function_2110(i8* %s) local_unnamed_addr {
dec_label_pc_2110:
  %0 = call i32 @strlen(i8* %s), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i8* @function_2120(i8* %s, i32 %c) local_unnamed_addr {
dec_label_pc_2120:
  %0 = call i8* @strchr(i8* %s, i32 %c), !insn.addr !21
  ret i8* %0, !insn.addr !21
}

define i32 @function_2130(i8* %format, ...) local_unnamed_addr {
dec_label_pc_2130:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define void @function_2140(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_2140:
  call void @rewind(%_IO_FILE* %stream), !insn.addr !23
  ret void, !insn.addr !23
}

define i32 @function_2150(i8* %s, i32 %maxlen, i8* %format, ...) local_unnamed_addr {
dec_label_pc_2150:
  %0 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %s, i32 %maxlen, i8* %format), !insn.addr !24
  ret i32 %0, !insn.addr !24
}

define i64* @function_2160(i64* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_2160:
  %0 = call i64* @memset(i64* %s, i32 %c, i32 %n), !insn.addr !25
  ret i64* %0, !insn.addr !25
}

define i32 @function_2170(i32 %seconds) local_unnamed_addr {
dec_label_pc_2170:
  %0 = call i32 @alarm(i32 %seconds), !insn.addr !26
  ret i32 %0, !insn.addr !26
}

define i32 @function_2180(i32 %fd) local_unnamed_addr {
dec_label_pc_2180:
  %0 = call i32 @close(i32 %fd), !insn.addr !27
  ret i32 %0, !insn.addr !27
}

define i32 @function_2190([2 x i32] %pipedes) local_unnamed_addr {
dec_label_pc_2190:
  %0 = call i32 @pipe([2 x i32] %pipedes), !insn.addr !28
  ret i32 %0, !insn.addr !28
}

define i32 @function_21a0(i32 %fd, i64* %buf, i32 %nbytes) local_unnamed_addr {
dec_label_pc_21a0:
  %0 = call i32 @read(i32 %fd, i64* %buf, i32 %nbytes), !insn.addr !29
  ret i32 %0, !insn.addr !29
}

define i32 @function_21b0(i64* %s1, i64* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_21b0:
  %0 = call i32 @memcmp(i64* %s1, i64* %s2, i32 %n), !insn.addr !30
  ret i32 %0, !insn.addr !30
}

define i32 @function_21c0(i64* %cond) local_unnamed_addr {
dec_label_pc_21c0:
  %0 = call i32 @pthread_cond_signal(i64* %cond), !insn.addr !31
  ret i32 %0, !insn.addr !31
}

define i32 @function_21d0(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_21d0:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !32
  ret i32 %0, !insn.addr !32
}

define void (i32)* @function_21e0(i32 %sig, void (i32)* %handler) local_unnamed_addr {
dec_label_pc_21e0:
  %0 = call void (i32)* @signal(i32 %sig, void (i32)* %handler), !insn.addr !33
  ret void (i32)* %0, !insn.addr !33
}

define i32 @function_21f0(i32 %sysno, ...) local_unnamed_addr {
dec_label_pc_21f0:
  %0 = call i32 (i32, ...) @syscall(i32 %sysno), !insn.addr !34
  ret i32 %0, !insn.addr !34
}

define i32 @function_2200(i8* %file, %stat* %buf) local_unnamed_addr {
dec_label_pc_2200:
  %0 = call i32 @stat(i8* %file, %stat* %buf), !insn.addr !35
  ret i32 %0, !insn.addr !35
}

define i64* @function_2210(i64* %dest, i64* %src, i32 %n) local_unnamed_addr {
dec_label_pc_2210:
  %0 = call i64* @memcpy(i64* %dest, i64* %src, i32 %n), !insn.addr !36
  ret i64* %0, !insn.addr !36
}

define i32 @function_2220(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_2220:
  %0 = call i32 @fileno(%_IO_FILE* %stream), !insn.addr !37
  ret i32 %0, !insn.addr !37
}

define i32 @function_2230(i64* %mutex) local_unnamed_addr {
dec_label_pc_2230:
  %0 = call i32 @pthread_mutex_unlock(i64* %mutex), !insn.addr !38
  ret i32 %0, !insn.addr !38
}

define i64* @function_2240(i32 %size) local_unnamed_addr {
dec_label_pc_2240:
  %0 = call i64* @malloc(i32 %size), !insn.addr !39
  ret i64* %0, !insn.addr !39
}

define i32 @function_2250(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_2250:
  %0 = call i32 (i8*, i8*, ...) @sscanf(i8* %s, i8* %format), !insn.addr !40
  ret i32 %0, !insn.addr !40
}

define i32 @function_2260(i32 %fd, i32 %n) local_unnamed_addr {
dec_label_pc_2260:
  %0 = call i32 @listen(i32 %fd, i32 %n), !insn.addr !41
  ret i32 %0, !insn.addr !41
}

define i32 @function_2270(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_2270:
  %0 = call i32 @bind(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !42
  ret i32 %0, !insn.addr !42
}

define i32 @function_2280(i32* %newthread, i64* %attr, i64* (i64*)* %start_routine, i64* %arg) local_unnamed_addr {
dec_label_pc_2280:
  %0 = call i32 @pthread_create(i32* %newthread, i64* %attr, i64* (i64*)* %start_routine, i64* %arg), !insn.addr !43
  ret i32 %0, !insn.addr !43
}

define i32 @function_2290(i32 %pid, i32* %stat_loc, i32 %options) local_unnamed_addr {
dec_label_pc_2290:
  %0 = call i32 @waitpid(i32 %pid, i32* %stat_loc, i32 %options), !insn.addr !44
  ret i32 %0, !insn.addr !44
}

define i32 @function_22a0(i8* %file, i32 %oflag, ...) local_unnamed_addr {
dec_label_pc_22a0:
  %0 = call i32 (i8*, i32, ...) @open(i8* %file, i32 %oflag), !insn.addr !45
  ret i32 %0, !insn.addr !45
}

define i32 @function_22b0(i32 %shmid, i32 %cmd, %shmid_ds* %buf) local_unnamed_addr {
dec_label_pc_22b0:
  %0 = call i32 @shmctl(i32 %shmid, i32 %cmd, %shmid_ds* %buf), !insn.addr !46
  ret i32 %0, !insn.addr !46
}

define %_IO_FILE* @function_22c0(i8* %filename, i8* %modes) local_unnamed_addr {
dec_label_pc_22c0:
  %0 = call %_IO_FILE* @fopen(i8* %filename, i8* %modes), !insn.addr !47
  ret %_IO_FILE* %0, !insn.addr !47
}

define i64* @function_22d0(i32 %shmid, i64* %shmaddr, i32 %shmflg) local_unnamed_addr {
dec_label_pc_22d0:
  %0 = call i64* @shmat(i32 %shmid, i64* %shmaddr, i32 %shmflg), !insn.addr !48
  ret i64* %0, !insn.addr !48
}

define i32 @function_22e0(i32 %key, i32 %size, i32 %shmflg) local_unnamed_addr {
dec_label_pc_22e0:
  %0 = call i32 @shmget(i32 %key, i32 %size, i32 %shmflg), !insn.addr !49
  ret i32 %0, !insn.addr !49
}

define i32 @function_22f0(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_22f0:
  %0 = call i32 @fwrite(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !50
  ret i32 %0, !insn.addr !50
}

define i32 @function_2300(i8* %pathname, i32 %proj_id) local_unnamed_addr {
dec_label_pc_2300:
  %0 = call i32 @ftok(i8* %pathname, i32 %proj_id), !insn.addr !51
  ret i32 %0, !insn.addr !51
}

define i32 @function_2310(i32 %th, i64** %thread_return) local_unnamed_addr {
dec_label_pc_2310:
  %0 = call i32 @pthread_join(i32 %th, i64** %thread_return), !insn.addr !52
  ret i32 %0, !insn.addr !52
}

define i32 @function_2320(i8* %path, i8* %arg, ...) local_unnamed_addr {
dec_label_pc_2320:
  %0 = call i32 (i8*, i8*, ...) @execl(i8* %path, i8* %arg), !insn.addr !53
  ret i32 %0, !insn.addr !53
}

define i32 @function_2330(i32 %th) local_unnamed_addr {
dec_label_pc_2330:
  %0 = call i32 @pthread_cancel(i32 %th), !insn.addr !54
  ret i32 %0, !insn.addr !54
}

define i32 @function_2340(i32 %seconds) local_unnamed_addr {
dec_label_pc_2340:
  %0 = call i32 @sleep(i32 %seconds), !insn.addr !55
  ret i32 %0, !insn.addr !55
}

define i32 @function_2350(i64 %stat_loc) local_unnamed_addr {
dec_label_pc_2350:
  %0 = call i32 @wait(i64 %stat_loc), !insn.addr !56
  ret i32 %0, !insn.addr !56
}

define i32 @function_2360() local_unnamed_addr {
dec_label_pc_2360:
  %0 = call i32 @fork(), !insn.addr !57
  ret i32 %0, !insn.addr !57
}

define i8* @function_2370(i8* %haystack, i8* %needle) local_unnamed_addr {
dec_label_pc_2370:
  %0 = call i8* @strstr(i8* %haystack, i8* %needle), !insn.addr !58
  ret i8* %0, !insn.addr !58
}

define i32 @function_2380(i64* %mutex) local_unnamed_addr {
dec_label_pc_2380:
  %0 = call i32 @pthread_mutex_lock(i64* %mutex), !insn.addr !59
  ret i32 %0, !insn.addr !59
}

define i32 @function_2390(i32 %useconds) local_unnamed_addr {
dec_label_pc_2390:
  %0 = call i32 @usleep(i32 %useconds), !insn.addr !60
  ret i32 %0, !insn.addr !60
}

define i32 @function_23a0(i32 %domain, i32 %type, i32 %protocol) local_unnamed_addr {
dec_label_pc_23a0:
  %0 = call i32 @socket(i32 %domain, i32 %type, i32 %protocol), !insn.addr !61
  ret i32 %0, !insn.addr !61
}

define void @function_23b0(i64* %d) local_unnamed_addr {
dec_label_pc_23b0:
  call void @__cxa_finalize(i64* %d), !insn.addr !62
  ret void, !insn.addr !62
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_23c0:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !63
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !63
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !63
  %3 = call i32 @__libc_start_main(i64 15712, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !63
  %4 = call i64 @__asm_hlt(), !insn.addr !64
  unreachable, !insn.addr !64
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_23f0:
  ret i64 ptrtoint (i64* @global_var_71e8 to i64), !insn.addr !65
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_2420:
  ret i64 0, !insn.addr !66
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_2460:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* bitcast (i64* @global_var_71e8 to i8*), align 8, !insn.addr !67
  %3 = icmp eq i8 %2, 0, !insn.addr !67
  %4 = icmp eq i1 %3, false, !insn.addr !68
  br i1 %4, label %dec_label_pc_2498, label %dec_label_pc_246d, !insn.addr !68

dec_label_pc_246d:                                ; preds = %dec_label_pc_2460
  %5 = load i64, i64* inttoptr (i64 28656 to i64*), align 16, !insn.addr !69
  %6 = icmp eq i64 %5, 0, !insn.addr !69
  br i1 %6, label %dec_label_pc_2487, label %dec_label_pc_247b, !insn.addr !70

dec_label_pc_247b:                                ; preds = %dec_label_pc_246d
  %7 = load i64, i64* inttoptr (i64 29152 to i64*), align 32, !insn.addr !71
  %8 = inttoptr i64 %7 to i64*, !insn.addr !72
  call void @__cxa_finalize(i64* %8), !insn.addr !72
  br label %dec_label_pc_2487, !insn.addr !72

dec_label_pc_2487:                                ; preds = %dec_label_pc_247b, %dec_label_pc_246d
  %9 = call i64 @deregister_tm_clones(), !insn.addr !73
  store i8 1, i8* bitcast (i64* @global_var_71e8 to i8*), align 8, !insn.addr !74
  ret i64 %9, !insn.addr !75

dec_label_pc_2498:                                ; preds = %dec_label_pc_2460
  ret i64 %1, !insn.addr !76
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_24a0:
  %0 = call i64 @register_tm_clones(), !insn.addr !77
  ret i64 %0, !insn.addr !77
}

define i64 @param_strcpy(i64 %arg1) local_unnamed_addr {
dec_label_pc_24b0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %arg1 to i8*, !insn.addr !78
  %3 = inttoptr i64 %1 to i8*, !insn.addr !78
  %4 = call i8* @strcpy(i8* %2, i8* %3), !insn.addr !78
  %5 = call i32 @strlen(i8* %2), !insn.addr !79
  %6 = sext i32 %5 to i64, !insn.addr !79
  ret i64 %6, !insn.addr !80
}

define i64 @call_strcpy() local_unnamed_addr {
dec_label_pc_24d0:
  %stack_var_-40 = alloca i64, align 8
  store i64 7091283129715680584, i64* %stack_var_-40, align 8, !insn.addr !81
  %0 = bitcast i64* %stack_var_-40 to i8*, !insn.addr !82
  %1 = call i32 @strlen(i8* nonnull %0), !insn.addr !82
  %2 = sext i32 %1 to i64, !insn.addr !82
  ret i64 %2, !insn.addr !83
}

define i64 @param_strcmp(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_2500:
  %0 = inttoptr i64 %arg1 to i8*, !insn.addr !84
  %1 = inttoptr i64 %arg2 to i8*, !insn.addr !84
  %2 = call i32 @strcmp(i8* %0, i8* %1), !insn.addr !84
  %3 = icmp eq i32 %2, 0, !insn.addr !85
  %4 = icmp eq i1 %3, false, !insn.addr !86
  %5 = icmp slt i32 %2, 1
  %.op = select i1 %4, i64 4294967295, i64 0
  %6 = select i1 %5, i64 %.op, i64 1, !insn.addr !87
  ret i64 %6, !insn.addr !88
}

define i64 @call_strcmp() local_unnamed_addr {
dec_label_pc_2520:
  ret i64 0, !insn.addr !89
}

define i64 @param_strlen() local_unnamed_addr {
dec_label_pc_2530:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i8*, !insn.addr !90
  %3 = call i32 @strlen(i8* %2), !insn.addr !90
  %4 = sext i32 %3 to i64, !insn.addr !90
  ret i64 %4, !insn.addr !91
}

define i64 @call_strlen() local_unnamed_addr {
dec_label_pc_2540:
  ret i64 12, !insn.addr !92
}

define i64 @param_memcpy(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2550:
  %0 = inttoptr i64 %arg1 to i64*, !insn.addr !93
  %1 = inttoptr i64 %arg2 to i64*, !insn.addr !93
  %2 = trunc i64 %arg3 to i32, !insn.addr !93
  %3 = call i64* @memcpy(i64* %0, i64* %1, i32 %2), !insn.addr !93
  %4 = and i64 %arg3, 4294967295, !insn.addr !94
  ret i64 %4, !insn.addr !95
}

define i64 @call_memcpy() local_unnamed_addr {
dec_label_pc_2560:
  ret i64 90, !insn.addr !96
}

define i64 @param_memcmp(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_2570:
  %0 = inttoptr i64 %arg1 to i64*, !insn.addr !97
  %1 = inttoptr i64 %arg2 to i64*, !insn.addr !97
  %2 = trunc i64 %arg3 to i32, !insn.addr !97
  %3 = call i32 @memcmp(i64* %0, i64* %1, i32 %2), !insn.addr !97
  %4 = icmp eq i32 %3, 0, !insn.addr !98
  %5 = icmp eq i1 %4, false, !insn.addr !99
  %6 = icmp slt i32 %3, 1
  %.op = select i1 %5, i64 4294967295, i64 0
  %7 = select i1 %6, i64 %.op, i64 1, !insn.addr !100
  ret i64 %7, !insn.addr !101
}

define i64 @call_memcmp() local_unnamed_addr {
dec_label_pc_2590:
  ret i64 4294967295, !insn.addr !102
}

define i64 @param_printf(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_25a0:
  %0 = and i64 %arg1, 4294967295, !insn.addr !103
  %1 = inttoptr i64 %arg2 to i8*, !insn.addr !104
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_4054, i64 0, i64 0), i64 %0, i8* %1), !insn.addr !104
  %3 = sext i32 %2 to i64, !insn.addr !104
  ret i64 %3, !insn.addr !105
}

define i64 @call_printf() local_unnamed_addr {
dec_label_pc_25c0:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_4054, i64 0, i64 0), i64 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_4069, i64 0, i64 0)), !insn.addr !106
  %1 = sext i32 %0 to i64, !insn.addr !106
  ret i64 %1, !insn.addr !107
}

define i64 @param_scanf() local_unnamed_addr {
dec_label_pc_25e0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_-4 = alloca i64, align 8
  %stack_var_-8 = alloca i64, align 8
  %2 = inttoptr i64 %1 to i8*, !insn.addr !108
  %3 = call i32 (i8*, i8*, ...) @sscanf(i8* %2, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_406e, i64 0, i64 0), i64* nonnull %stack_var_-4, i64* nonnull %stack_var_-8), !insn.addr !108
  %4 = load i64, i64* %stack_var_-8, align 8, !insn.addr !109
  %5 = load i64, i64* %stack_var_-4, align 8, !insn.addr !110
  %6 = add i64 %5, %4, !insn.addr !110
  %7 = icmp eq i32 %3, 2, !insn.addr !111
  %.op = and i64 %6, 4294967295
  %8 = select i1 %7, i64 %.op, i64 4294967295, !insn.addr !112
  ret i64 %8, !insn.addr !113

; uselistorder directives
  uselistorder i64* %stack_var_-8, { 1, 0 }
  uselistorder i64* %stack_var_-4, { 1, 0 }
}

define i64 @call_scanf() local_unnamed_addr {
dec_label_pc_2610:
  %0 = alloca i64
  %1 = alloca i32
  %2 = load i64, i64* %0
  %3 = load i32, i32* %1
  %4 = trunc i64 %2 to i32, !insn.addr !114
  %5 = call i32 (i8*, i8*, ...) @sscanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_4074, i64 0, i64 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_406e, i64 0, i64 0)), !insn.addr !115
  %6 = add i32 %3, %4, !insn.addr !116
  %7 = icmp eq i32 %5, 2, !insn.addr !117
  %8 = select i1 %7, i32 %6, i32 -1, !insn.addr !118
  %9 = zext i32 %8 to i64, !insn.addr !118
  ret i64 %9, !insn.addr !119
}

define i64 @param_fopen_fclose() local_unnamed_addr {
dec_label_pc_2650:
  %0 = alloca i64
  %rbp.0.reg2mem = alloca i64, !insn.addr !120
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i8*, !insn.addr !121
  %3 = call %_IO_FILE* @fopen(i8* %2, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_407c, i64 0, i64 0)), !insn.addr !121
  %4 = icmp eq %_IO_FILE* %3, null, !insn.addr !122
  store i64 4294967295, i64* %rbp.0.reg2mem, !insn.addr !123
  br i1 %4, label %dec_label_pc_2680, label %dec_label_pc_2664, !insn.addr !123

dec_label_pc_2664:                                ; preds = %dec_label_pc_2650
  %5 = call i32 @fileno(%_IO_FILE* nonnull %3), !insn.addr !124
  %6 = zext i32 %5 to i64, !insn.addr !125
  %7 = call i32 @fclose(%_IO_FILE* nonnull %3), !insn.addr !126
  store i64 %6, i64* %rbp.0.reg2mem, !insn.addr !127
  br label %dec_label_pc_2680, !insn.addr !127

dec_label_pc_2680:                                ; preds = %dec_label_pc_2650, %dec_label_pc_2664
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  ret i64 %rbp.0.reload, !insn.addr !128

; uselistorder directives
  uselistorder i64* %rbp.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2680, { 1, 0 }
}

define i64 @call_fopen_fclose() local_unnamed_addr {
dec_label_pc_2690:
  %storemerge.reg2mem = alloca i64, !insn.addr !129
  %0 = call %_IO_FILE* @fopen(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_407e, i64 0, i64 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_407c, i64 0, i64 0)), !insn.addr !130
  %1 = icmp eq %_IO_FILE* %0, null, !insn.addr !131
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !132
  br i1 %1, label %dec_label_pc_26ce, label %dec_label_pc_26ac, !insn.addr !132

dec_label_pc_26ac:                                ; preds = %dec_label_pc_2690
  %2 = call i32 @fileno(%_IO_FILE* nonnull %0), !insn.addr !133
  %3 = call i32 @fclose(%_IO_FILE* nonnull %0), !insn.addr !134
  %4 = ashr i32 %2, 31, !insn.addr !135
  %5 = or i32 %4, 42, !insn.addr !136
  %6 = zext i32 %5 to i64, !insn.addr !136
  store i64 %6, i64* %storemerge.reg2mem, !insn.addr !137
  br label %dec_label_pc_26ce, !insn.addr !137

dec_label_pc_26ce:                                ; preds = %dec_label_pc_2690, %dec_label_pc_26ac
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !138

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_26ce, { 1, 0 }
}

define i64 @param_fread_fwrite(i8* %arg1) local_unnamed_addr {
dec_label_pc_26e0:
  %0 = alloca i128
  %rax.0.reg2mem = alloca i64, !insn.addr !139
  %1 = load i128, i128* %0
  %stack_var_-72 = alloca i64, align 8
  %2 = call %_IO_FILE* @fopen(i8* %arg1, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_409d, i64 0, i64 0)), !insn.addr !140
  %3 = icmp eq %_IO_FILE* %2, null, !insn.addr !141
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !142
  br i1 %3, label %dec_label_pc_27af, label %dec_label_pc_2703, !insn.addr !142

dec_label_pc_2703:                                ; preds = %dec_label_pc_26e0
  %4 = call i32 @fwrite(i64* bitcast ([19 x i8]* @global_var_408a to i64*), i32 1, i32 18, %_IO_FILE* nonnull %2), !insn.addr !143
  %5 = icmp eq i32 %4, 18, !insn.addr !144
  %6 = icmp eq i1 %5, false, !insn.addr !145
  br i1 %6, label %dec_label_pc_27a2, label %dec_label_pc_2725, !insn.addr !145

dec_label_pc_2725:                                ; preds = %dec_label_pc_2703
  %7 = ptrtoint i64* %stack_var_-72 to i64, !insn.addr !146
  call void @rewind(%_IO_FILE* nonnull %2), !insn.addr !147
  %8 = call i32 @fread(i64* nonnull %stack_var_-72, i32 1, i32 %4, %_IO_FILE* nonnull %2), !insn.addr !148
  %9 = sext i32 %8 to i64, !insn.addr !148
  %10 = add i64 %9, %7, !insn.addr !149
  %11 = inttoptr i64 %10 to i8*, !insn.addr !149
  store i8 0, i8* %11, align 1, !insn.addr !149
  %12 = call i32 @fclose(%_IO_FILE* nonnull %2), !insn.addr !150
  %13 = call i32 @unlink(i8* %arg1), !insn.addr !151
  %14 = icmp eq i32 %4, %8, !insn.addr !152
  %15 = icmp eq i1 %14, false, !insn.addr !153
  store i64 4294967293, i64* %rax.0.reg2mem, !insn.addr !153
  br i1 %15, label %dec_label_pc_27af, label %dec_label_pc_2764, !insn.addr !153

dec_label_pc_2764:                                ; preds = %dec_label_pc_2725
  %16 = load i64, i64* %stack_var_-72, align 8, !insn.addr !154
  %17 = sext i64 %16 to i128, !insn.addr !154
  %18 = call i128 @__asm_movdqa(i128 %17), !insn.addr !154
  %19 = call i128 @__asm_movdqu(i128 %1), !insn.addr !155
  %20 = call i128 @__asm_pcmpeqb(i128 %19, i128 506013261007881974645593289756927298), !insn.addr !156
  %21 = call i128 @__asm_pcmpeqb(i128 %18, i128 129288850040804651372364194803442673986), !insn.addr !157
  %22 = call i128 @__asm_pand(i128 %21, i128 %20), !insn.addr !158
  %23 = call i32 @__asm_pmovmskb(i128 %22), !insn.addr !159
  %24 = icmp eq i32 %23, 65535, !insn.addr !160
  %25 = select i1 %24, i64 42, i64 4294967293, !insn.addr !161
  store i64 %25, i64* %rax.0.reg2mem, !insn.addr !162
  br label %dec_label_pc_27af, !insn.addr !162

dec_label_pc_27a2:                                ; preds = %dec_label_pc_2703
  %26 = call i32 @fclose(%_IO_FILE* nonnull %2), !insn.addr !163
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !164
  br label %dec_label_pc_27af, !insn.addr !164

dec_label_pc_27af:                                ; preds = %dec_label_pc_26e0, %dec_label_pc_27a2, %dec_label_pc_2764, %dec_label_pc_2725
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !165

; uselistorder directives
  uselistorder i64* %stack_var_-72, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 0, 4, 2, 3, 1 }
  uselistorder label %dec_label_pc_27af, { 1, 2, 3, 0 }
}

define i64 @call_fread_fwrite() local_unnamed_addr {
dec_label_pc_27c0:
  %0 = call i64 @param_fread_fwrite(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_40a0, i64 0, i64 0)), !insn.addr !166
  ret i64 %0, !insn.addr !167
}

define i64 @param_malloc_free(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_27d0:
  %rbx.0.reg2mem = alloca i64, !insn.addr !168
  %rdx.0.reg2mem = alloca i64, !insn.addr !168
  %rcx.0.reg2mem = alloca i64, !insn.addr !168
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !169
  %1 = call i64* @malloc(i32 %0), !insn.addr !169
  %2 = icmp eq i64* %1, null, !insn.addr !170
  store i64 4294967295, i64* %rbx.0.reg2mem, !insn.addr !171
  br i1 %2, label %dec_label_pc_2814, label %dec_label_pc_27e6, !insn.addr !171

dec_label_pc_27e6:                                ; preds = %dec_label_pc_27d0
  %3 = ptrtoint i64* %1 to i64, !insn.addr !169
  %4 = icmp eq i64 %arg1, 0, !insn.addr !172
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !173
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !173
  br i1 %4, label %dec_label_pc_27ff, label %dec_label_pc_27f0, !insn.addr !173

dec_label_pc_27f0:                                ; preds = %dec_label_pc_27e6, %dec_label_pc_27f0
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %5 = trunc i64 %rcx.0.reload to i32, !insn.addr !174
  %6 = mul i64 %rdx.0.reload, 4, !insn.addr !174
  %7 = add i64 %6, %3, !insn.addr !174
  %8 = inttoptr i64 %7 to i32*, !insn.addr !174
  store i32 %5, i32* %8, align 4, !insn.addr !174
  %9 = add i64 %rdx.0.reload, 1, !insn.addr !175
  %10 = add nuw nsw i64 %rcx.0.reload, 10, !insn.addr !176
  %11 = and i64 %10, 4294967295, !insn.addr !176
  %12 = icmp eq i64 %9, %arg1, !insn.addr !177
  %13 = icmp eq i1 %12, false, !insn.addr !178
  store i64 %11, i64* %rcx.0.reg2mem, !insn.addr !178
  store i64 %9, i64* %rdx.0.reg2mem, !insn.addr !178
  br i1 %13, label %dec_label_pc_27f0, label %dec_label_pc_27ff, !insn.addr !178

dec_label_pc_27ff:                                ; preds = %dec_label_pc_27f0, %dec_label_pc_27e6
  %14 = mul i64 %arg1, 4, !insn.addr !179
  %15 = add i64 %14, -4, !insn.addr !179
  %16 = add i64 %15, %3, !insn.addr !179
  %17 = inttoptr i64 %16 to i32*, !insn.addr !179
  %18 = load i32, i32* %17, align 4, !insn.addr !179
  %19 = bitcast i64* %1 to i32*, !insn.addr !180
  %20 = load i32, i32* %19, align 4, !insn.addr !180
  %21 = add i32 %20, %18, !insn.addr !180
  %22 = zext i32 %21 to i64, !insn.addr !180
  call void @free(i64* nonnull %1), !insn.addr !181
  store i64 %22, i64* %rbx.0.reg2mem, !insn.addr !182
  br label %dec_label_pc_2814, !insn.addr !182

dec_label_pc_2814:                                ; preds = %dec_label_pc_27d0, %dec_label_pc_27ff
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  ret i64 %rbx.0.reload, !insn.addr !183

; uselistorder directives
  uselistorder i64 %rcx.0.reload, { 1, 0 }
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64* %1, { 0, 1, 3, 2 }
  uselistorder i64* %rcx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2814, { 1, 0 }
  uselistorder label %dec_label_pc_27f0, { 1, 0 }
}

define i64 @call_malloc_free(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_2820:
  %rbx.0.reg2mem = alloca i64, !insn.addr !184
  %rdx.0.reg2mem = alloca i64, !insn.addr !184
  %rcx.0.reg2mem = alloca i64, !insn.addr !184
  %0 = call i64* @malloc(i32 40), !insn.addr !185
  %1 = ptrtoint i64* %0 to i64, !insn.addr !185
  %2 = icmp eq i64* %0, null, !insn.addr !186
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !187
  store i64 %1, i64* %rdx.0.reg2mem, !insn.addr !187
  store i64 4294967295, i64* %rbx.0.reg2mem, !insn.addr !187
  br i1 %2, label %dec_label_pc_2864, label %dec_label_pc_2840, !insn.addr !187

dec_label_pc_2840:                                ; preds = %dec_label_pc_2820, %dec_label_pc_2840
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %3 = trunc i64 %rcx.0.reload to i32, !insn.addr !188
  %4 = inttoptr i64 %rdx.0.reload to i32*, !insn.addr !188
  store i32 %3, i32* %4, align 4, !insn.addr !188
  %5 = add nuw nsw i64 %rcx.0.reload, 10, !insn.addr !189
  %6 = add i64 %rdx.0.reload, 4, !insn.addr !190
  %7 = icmp eq i64 %rcx.0.reload, 90, !insn.addr !191
  %8 = icmp eq i1 %7, false, !insn.addr !192
  store i64 %5, i64* %rcx.0.reg2mem, !insn.addr !192
  store i64 %6, i64* %rdx.0.reg2mem, !insn.addr !192
  br i1 %8, label %dec_label_pc_2840, label %dec_label_pc_2850, !insn.addr !192

dec_label_pc_2850:                                ; preds = %dec_label_pc_2840
  %9 = add i64 %1, 36, !insn.addr !193
  %10 = inttoptr i64 %9 to i32*, !insn.addr !193
  %11 = load i32, i32* %10, align 4, !insn.addr !193
  %12 = bitcast i64* %0 to i32*, !insn.addr !194
  %13 = load i32, i32* %12, align 4, !insn.addr !194
  %14 = add i32 %13, %11, !insn.addr !194
  %15 = zext i32 %14 to i64, !insn.addr !194
  call void @free(i64* nonnull %0), !insn.addr !195
  store i64 %15, i64* %rbx.0.reg2mem, !insn.addr !196
  br label %dec_label_pc_2864, !insn.addr !196

dec_label_pc_2864:                                ; preds = %dec_label_pc_2820, %dec_label_pc_2850
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  ret i64 %rbx.0.reload, !insn.addr !197

; uselistorder directives
  uselistorder i64 %rcx.0.reload, { 1, 2, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %rcx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2864, { 1, 0 }
  uselistorder label %dec_label_pc_2840, { 1, 0 }
}

define i64 @param_memset(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2870:
  %rbp.1.reg2mem = alloca i64, !insn.addr !198
  %rbp.0.reg2mem = alloca i64, !insn.addr !198
  %rax.0.reg2mem = alloca i64, !insn.addr !198
  %0 = inttoptr i64 %arg1 to i64*, !insn.addr !199
  %1 = trunc i64 %arg2 to i32, !insn.addr !199
  %2 = call i64* @memset(i64* %0, i32 0, i32 %1), !insn.addr !199
  %3 = icmp eq i64 %arg2, 0, !insn.addr !200
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !201
  store i64 0, i64* %rbp.0.reg2mem, !insn.addr !201
  store i64 0, i64* %rbp.1.reg2mem, !insn.addr !201
  br i1 %3, label %dec_label_pc_28a0, label %dec_label_pc_2890, !insn.addr !201

dec_label_pc_2890:                                ; preds = %dec_label_pc_2870, %dec_label_pc_2890
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %4 = add i64 %rax.0.reload, %arg1, !insn.addr !202
  %5 = inttoptr i64 %4 to i8*, !insn.addr !202
  %6 = load i8, i8* %5, align 1, !insn.addr !202
  %7 = zext i8 %6 to i64, !insn.addr !203
  %8 = add nuw nsw i64 %rbp.0.reload, %7, !insn.addr !203
  %9 = and i64 %8, 4294967295, !insn.addr !203
  %10 = add i64 %rax.0.reload, 1, !insn.addr !204
  %11 = icmp eq i64 %10, %arg2, !insn.addr !205
  %12 = icmp eq i1 %11, false, !insn.addr !206
  store i64 %10, i64* %rax.0.reg2mem, !insn.addr !206
  store i64 %9, i64* %rbp.0.reg2mem, !insn.addr !206
  store i64 %9, i64* %rbp.1.reg2mem, !insn.addr !206
  br i1 %12, label %dec_label_pc_2890, label %dec_label_pc_28a0, !insn.addr !206

dec_label_pc_28a0:                                ; preds = %dec_label_pc_2890, %dec_label_pc_2870
  %rbp.1.reload = load i64, i64* %rbp.1.reg2mem
  ret i64 %rbp.1.reload, !insn.addr !207

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbp.0.reg2mem, { 2, 0, 1 }
  uselistorder i64 %arg2, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2890, { 1, 0 }
}

define i64 @call_memset() local_unnamed_addr {
dec_label_pc_28b0:
  %0 = alloca i128
  %1 = alloca i64
  %2 = alloca i32
  %rax.0.reg2mem = alloca i64, !insn.addr !208
  %3 = load i64, i64* %1
  %4 = load i128, i128* %0
  %5 = load i32, i32* %2
  %6 = add i64 %3, -40, !insn.addr !209
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !210
  br label %dec_label_pc_28c0, !insn.addr !210

dec_label_pc_28c0:                                ; preds = %dec_label_pc_28c0, %dec_label_pc_28b0
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %7 = mul i64 %rax.0.reload, 4, !insn.addr !209
  %8 = add i64 %6, %7, !insn.addr !209
  %9 = inttoptr i64 %8 to i32*, !insn.addr !209
  store i32 255, i32* %9, align 4, !insn.addr !209
  %10 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !211
  %exitcond = icmp eq i64 %10, 10
  store i64 %10, i64* %rax.0.reg2mem, !insn.addr !212
  br i1 %exitcond, label %dec_label_pc_28d2, label %dec_label_pc_28c0, !insn.addr !212

dec_label_pc_28d2:                                ; preds = %dec_label_pc_28c0
  %11 = call i128 @__asm_xorps(i128 %4, i128 %4), !insn.addr !213
  %12 = call i64 @__asm_movaps(i128 %11), !insn.addr !214
  %13 = trunc i64 %12 to i32, !insn.addr !215
  %14 = add i32 %5, %13, !insn.addr !215
  %15 = zext i32 %14 to i64, !insn.addr !215
  ret i64 %15, !insn.addr !216

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
}

define i64 @param_strchr_strstr(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_28f0:
  %0 = inttoptr i64 %arg1 to i8*, !insn.addr !217
  %1 = trunc i64 %arg2 to i32, !insn.addr !217
  %2 = call i8* @strchr(i8* %0, i32 %1), !insn.addr !217
  %3 = ptrtoint i8* %2 to i64, !insn.addr !217
  %4 = sub i64 %3, %arg1, !insn.addr !218
  %5 = icmp eq i8* %2, null, !insn.addr !219
  %6 = select i1 %5, i64 4294967295, i64 %4, !insn.addr !220
  %7 = inttoptr i64 %arg3 to i8*, !insn.addr !221
  %8 = call i8* @strstr(i8* %0, i8* %7), !insn.addr !221
  %9 = ptrtoint i8* %8 to i64, !insn.addr !221
  %10 = sub i64 %9, %arg1, !insn.addr !222
  %11 = icmp eq i8* %8, null, !insn.addr !223
  %12 = select i1 %11, i64 4294967295, i64 %10, !insn.addr !224
  %13 = add i64 %12, %6, !insn.addr !225
  %14 = and i64 %13, 4294967295, !insn.addr !225
  ret i64 %14, !insn.addr !226

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @call_strchr_strstr() local_unnamed_addr {
dec_label_pc_2930:
  ret i64 15, !insn.addr !227
}

define i64 @test_standard_library_functions() local_unnamed_addr {
dec_label_pc_2940:
  %0 = alloca i128
  %rbx.0.reg2mem = alloca i64, !insn.addr !228
  %rdx.0.reg2mem = alloca i64, !insn.addr !228
  %rcx.0.reg2mem = alloca i64, !insn.addr !228
  %1 = load i128, i128* %0
  %stack_var_-72 = alloca i64, align 8
  %stack_var_-88 = alloca i64, align 8
  %2 = call i32 @puts(i8* bitcast (i8** @global_var_43af to i8*)), !insn.addr !229
  store i64 7091283129715680584, i64* %stack_var_-72, align 8, !insn.addr !230
  %3 = bitcast i64* %stack_var_-72 to i8*, !insn.addr !231
  %4 = call i32 @strlen(i8* nonnull %3), !insn.addr !231
  %5 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_40b7 to i8*)), !insn.addr !232
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_40d2 to i8*)), !insn.addr !233
  %7 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_40ed to i8*)), !insn.addr !234
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4109 to i8*)), !insn.addr !235
  %9 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4125 to i8*)), !insn.addr !236
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_4054, i64 0, i64 0), i64 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_4069, i64 0, i64 0)), !insn.addr !237
  %11 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4141 to i8*)), !insn.addr !238
  %12 = call i32 (i8*, i8*, ...) @sscanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_4074, i64 0, i64 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_406e, i64 0, i64 0)), !insn.addr !239
  %13 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_415d to i8*)), !insn.addr !240
  %14 = call %_IO_FILE* @fopen(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_407e, i64 0, i64 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_407c, i64 0, i64 0)), !insn.addr !241
  %15 = icmp eq %_IO_FILE* %14, null, !insn.addr !242
  br i1 %15, label %dec_label_pc_2a6f, label %dec_label_pc_2a54, !insn.addr !243

dec_label_pc_2a54:                                ; preds = %dec_label_pc_2940
  %16 = call i32 @fileno(%_IO_FILE* nonnull %14), !insn.addr !244
  %17 = call i32 @fclose(%_IO_FILE* nonnull %14), !insn.addr !245
  br label %dec_label_pc_2a6f, !insn.addr !246

dec_label_pc_2a6f:                                ; preds = %dec_label_pc_2a54, %dec_label_pc_2940
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_417a to i8*)), !insn.addr !247
  %19 = call i64 @param_fread_fwrite(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_40a0, i64 0, i64 0)), !insn.addr !248
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4196 to i8*)), !insn.addr !249
  %21 = call i64* @malloc(i32 40), !insn.addr !250
  %22 = icmp eq i64* %21, null, !insn.addr !251
  br i1 %22, label %dec_label_pc_2acf, label %dec_label_pc_2aaa, !insn.addr !252

dec_label_pc_2aaa:                                ; preds = %dec_label_pc_2a6f
  %23 = ptrtoint i64* %21 to i64, !insn.addr !250
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !253
  store i64 %23, i64* %rdx.0.reg2mem, !insn.addr !253
  br label %dec_label_pc_2ab0, !insn.addr !253

dec_label_pc_2ab0:                                ; preds = %dec_label_pc_2ab0, %dec_label_pc_2aaa
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %24 = trunc i64 %rcx.0.reload to i32, !insn.addr !254
  %25 = inttoptr i64 %rdx.0.reload to i32*, !insn.addr !254
  store i32 %24, i32* %25, align 4, !insn.addr !254
  %26 = add nuw nsw i64 %rcx.0.reload, 10, !insn.addr !255
  %27 = add i64 %rdx.0.reload, 4, !insn.addr !256
  %28 = icmp eq i64 %rcx.0.reload, 90, !insn.addr !257
  %29 = icmp eq i1 %28, false, !insn.addr !258
  store i64 %26, i64* %rcx.0.reg2mem, !insn.addr !258
  store i64 %27, i64* %rdx.0.reg2mem, !insn.addr !258
  br i1 %29, label %dec_label_pc_2ab0, label %dec_label_pc_2ac0, !insn.addr !258

dec_label_pc_2ac0:                                ; preds = %dec_label_pc_2ab0
  call void @free(i64* nonnull %21), !insn.addr !259
  br label %dec_label_pc_2acf, !insn.addr !259

dec_label_pc_2acf:                                ; preds = %dec_label_pc_2ac0, %dec_label_pc_2a6f
  %30 = ptrtoint i64* %stack_var_-88 to i64, !insn.addr !260
  %31 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_41b2 to i8*)), !insn.addr !261
  %32 = add i64 %30, 16, !insn.addr !262
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !263
  br label %dec_label_pc_2af0, !insn.addr !263

dec_label_pc_2af0:                                ; preds = %dec_label_pc_2af0, %dec_label_pc_2acf
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %33 = mul i64 %rbx.0.reload, 4, !insn.addr !262
  %34 = add i64 %32, %33, !insn.addr !262
  %35 = inttoptr i64 %34 to i32*, !insn.addr !262
  store i32 255, i32* %35, align 4, !insn.addr !262
  %36 = add nuw nsw i64 %rbx.0.reload, 1, !insn.addr !264
  %exitcond = icmp eq i64 %36, 10
  store i64 %36, i64* %rbx.0.reg2mem, !insn.addr !265
  br i1 %exitcond, label %dec_label_pc_2b02, label %dec_label_pc_2af0, !insn.addr !265

dec_label_pc_2b02:                                ; preds = %dec_label_pc_2af0
  %37 = call i128 @__asm_xorps(i128 %1, i128 %1), !insn.addr !266
  %38 = call i64 @__asm_movaps(i128 %37), !insn.addr !267
  store i64 %38, i64* %stack_var_-72, align 8, !insn.addr !267
  %39 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_41ce to i8*)), !insn.addr !268
  %40 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_41e9 to i8*)), !insn.addr !269
  %41 = sext i32 %40 to i64, !insn.addr !269
  ret i64 %41, !insn.addr !270

; uselistorder directives
  uselistorder i64 %rcx.0.reload, { 1, 2, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64* %21, { 0, 2, 1 }
  uselistorder i64* %stack_var_-72, { 1, 0, 2 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 90, { 1, 2, 0 }
  uselistorder i64 10, { 0, 3, 1, 4, 2 }
  uselistorder i64 (i8*)* @param_fread_fwrite, { 1, 0 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 0, 3, 2, 1, 4, 5 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 3, 0, 2, 1, 4 }
  uselistorder i32 (i8*, i8*, ...)* @sscanf, { 0, 2, 1, 3 }
}

define i64 @param_linux_syscall(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2b50:
  %rbx.0.reg2mem = alloca i64, !insn.addr !271
  %0 = call i32 (i32, ...) @syscall(i32 2), !insn.addr !272
  %1 = icmp slt i32 %0, 0, !insn.addr !273
  br i1 %1, label %dec_label_pc_2b7d, label %dec_label_pc_2b6d, !insn.addr !274

dec_label_pc_2b6d:                                ; preds = %dec_label_pc_2b50
  %2 = sext i32 %0 to i64, !insn.addr !272
  %3 = call i32 (i32, ...) @syscall(i32 3), !insn.addr !275
  store i64 %2, i64* %rbx.0.reg2mem, !insn.addr !276
  br label %dec_label_pc_2b86, !insn.addr !276

dec_label_pc_2b7d:                                ; preds = %dec_label_pc_2b50
  %4 = call i32* @__errno_location(), !insn.addr !277
  %5 = load i32, i32* %4, align 4, !insn.addr !278
  %6 = sub i32 0, %5, !insn.addr !278
  %7 = zext i32 %6 to i64, !insn.addr !279
  store i64 %7, i64* %rbx.0.reg2mem, !insn.addr !279
  br label %dec_label_pc_2b86, !insn.addr !279

dec_label_pc_2b86:                                ; preds = %dec_label_pc_2b7d, %dec_label_pc_2b6d
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %8 = and i64 %rbx.0.reload, 4294967295, !insn.addr !280
  ret i64 %8, !insn.addr !281

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 0, 2, 1 }
}

define i64 @call_linux_syscall(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2b90:
  %rbx.0.reg2mem = alloca i32, !insn.addr !282
  %0 = call i32 (i32, ...) @syscall(i32 2), !insn.addr !283
  %1 = icmp slt i32 %0, 0, !insn.addr !284
  br i1 %1, label %dec_label_pc_2bc1, label %dec_label_pc_2bb1, !insn.addr !285

dec_label_pc_2bb1:                                ; preds = %dec_label_pc_2b90
  %2 = call i32 (i32, ...) @syscall(i32 3), !insn.addr !286
  store i32 %0, i32* %rbx.0.reg2mem, !insn.addr !287
  br label %dec_label_pc_2bca, !insn.addr !287

dec_label_pc_2bc1:                                ; preds = %dec_label_pc_2b90
  %3 = call i32* @__errno_location(), !insn.addr !288
  %4 = load i32, i32* %3, align 4, !insn.addr !289
  %5 = sub i32 0, %4, !insn.addr !289
  store i32 %5, i32* %rbx.0.reg2mem, !insn.addr !290
  br label %dec_label_pc_2bca, !insn.addr !290

dec_label_pc_2bca:                                ; preds = %dec_label_pc_2bc1, %dec_label_pc_2bb1
  %rbx.0.reload = load i32, i32* %rbx.0.reg2mem
  %6 = ashr i32 %rbx.0.reload, 31, !insn.addr !291
  %7 = or i32 %6, 42, !insn.addr !292
  %8 = zext i32 %7 to i64, !insn.addr !293
  ret i64 %8, !insn.addr !294

; uselistorder directives
  uselistorder i32* %rbx.0.reg2mem, { 0, 2, 1 }
}

define i64 @param_win32_api() local_unnamed_addr {
dec_label_pc_2be0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %stack_var_-144 = alloca i64, align 8
  %3 = inttoptr i64 %1 to i8*, !insn.addr !295
  %4 = bitcast i64* %stack_var_-144 to %stat*, !insn.addr !295
  %5 = call i32 @stat(i8* %3, %stat* nonnull %4), !insn.addr !295
  %6 = icmp eq i64 %2, 0, !insn.addr !296
  %7 = icmp slt i64 %2, 0, !insn.addr !296
  %8 = icmp eq i1 %7, false, !insn.addr !297
  %9 = icmp eq i1 %6, false, !insn.addr !297
  %10 = icmp eq i1 %8, %9, !insn.addr !297
  %11 = icmp slt i32 %5, 0, !insn.addr !298
  %12 = icmp eq i1 %11, false, !insn.addr !299
  %13 = select i1 %10, i64 42, i64 4294967294, !insn.addr !297
  %14 = select i1 %12, i64 %13, i64 4294967295, !insn.addr !299
  ret i64 %14, !insn.addr !300

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @call_win32_api() local_unnamed_addr {
dec_label_pc_2c20:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_-144 = alloca i64, align 8
  %2 = bitcast i64* %stack_var_-144 to %stat*, !insn.addr !301
  %3 = call i32 @stat(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_407e, i64 0, i64 0), %stat* nonnull %2), !insn.addr !301
  %4 = icmp eq i64 %1, 0, !insn.addr !302
  %5 = icmp slt i64 %1, 0, !insn.addr !302
  %6 = icmp eq i1 %5, false, !insn.addr !303
  %7 = icmp eq i1 %4, false, !insn.addr !303
  %8 = icmp eq i1 %6, %7, !insn.addr !303
  %9 = icmp slt i32 %3, 0, !insn.addr !304
  %10 = icmp eq i1 %9, false, !insn.addr !305
  %11 = select i1 %8, i64 42, i64 4294967294, !insn.addr !303
  %12 = select i1 %10, i64 %11, i64 4294967295, !insn.addr !305
  ret i64 %12, !insn.addr !306
}

define i64 @param_fork_exec(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_2c60:
  %rax.0.reg2mem = alloca i64, !insn.addr !307
  %stack_var_-20 = alloca i32, align 4
  %0 = call i32 @fork(), !insn.addr !308
  %1 = icmp slt i32 %0, 0, !insn.addr !309
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !310
  br i1 %1, label %dec_label_pc_2ca6, label %dec_label_pc_2c73, !insn.addr !310

dec_label_pc_2c73:                                ; preds = %dec_label_pc_2c60
  %2 = icmp eq i32 %0, 0, !insn.addr !309
  br i1 %2, label %dec_label_pc_2cae, label %dec_label_pc_2c75, !insn.addr !311

dec_label_pc_2c75:                                ; preds = %dec_label_pc_2c73
  %3 = call i32 @waitpid(i32 %0, i32* nonnull %stack_var_-20, i32 0), !insn.addr !312
  %4 = icmp slt i32 %3, 0, !insn.addr !313
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !314
  br i1 %4, label %dec_label_pc_2ca6, label %dec_label_pc_2c87, !insn.addr !314

dec_label_pc_2c87:                                ; preds = %dec_label_pc_2c75
  %5 = load i32, i32* %stack_var_-20, align 4, !insn.addr !315
  %6 = urem i32 %5, 128
  %7 = icmp eq i32 %6, 0, !insn.addr !316
  %8 = icmp eq i1 %7, false, !insn.addr !317
  store i64 4294967293, i64* %rax.0.reg2mem, !insn.addr !317
  br i1 %8, label %dec_label_pc_2ca6, label %dec_label_pc_2c95, !insn.addr !317

dec_label_pc_2c95:                                ; preds = %dec_label_pc_2c87
  %9 = udiv i32 %5, 256
  %10 = urem i32 %9, 256
  %11 = zext i32 %10 to i64, !insn.addr !318
  store i64 %11, i64* %rax.0.reg2mem, !insn.addr !319
  br label %dec_label_pc_2ca6, !insn.addr !319

dec_label_pc_2ca6:                                ; preds = %dec_label_pc_2c75, %dec_label_pc_2c60, %dec_label_pc_2c95, %dec_label_pc_2c87
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !320

dec_label_pc_2cae:                                ; preds = %dec_label_pc_2c73
  %12 = inttoptr i64 %arg1 to i8*, !insn.addr !321
  %13 = call i32 (i8*, i8*, ...) @execl(i8* %12, i8* %12), !insn.addr !321
  call void @_exit(i32 127), !insn.addr !322
  unreachable, !insn.addr !322

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 3, 4, 1, 2 }
  uselistorder i32 256, { 1, 0 }
  uselistorder label %dec_label_pc_2ca6, { 2, 3, 0, 1 }
}

define i64 @call_fork_exec(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_2cd0:
  %rax.0.reg2mem = alloca i64, !insn.addr !323
  %stack_var_-4 = alloca i32, align 4
  %0 = call i32 @fork(), !insn.addr !324
  %1 = icmp slt i32 %0, 0, !insn.addr !325
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !326
  br i1 %1, label %dec_label_pc_2d0d, label %dec_label_pc_2cda, !insn.addr !326

dec_label_pc_2cda:                                ; preds = %dec_label_pc_2cd0
  %2 = icmp eq i32 %0, 0, !insn.addr !325
  br i1 %2, label %dec_label_pc_2d16, label %dec_label_pc_2cdc, !insn.addr !327

dec_label_pc_2cdc:                                ; preds = %dec_label_pc_2cda
  %3 = call i32 @waitpid(i32 %0, i32* nonnull %stack_var_-4, i32 0), !insn.addr !328
  %4 = icmp slt i32 %3, 0, !insn.addr !329
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !330
  br i1 %4, label %dec_label_pc_2d0d, label %dec_label_pc_2cee, !insn.addr !330

dec_label_pc_2cee:                                ; preds = %dec_label_pc_2cdc
  %5 = load i32, i32* %stack_var_-4, align 4, !insn.addr !331
  %6 = urem i32 %5, 128
  %7 = icmp eq i32 %6, 0, !insn.addr !332
  %8 = icmp eq i1 %7, false, !insn.addr !333
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !333
  br i1 %8, label %dec_label_pc_2d0d, label %dec_label_pc_2cfc, !insn.addr !333

dec_label_pc_2cfc:                                ; preds = %dec_label_pc_2cee
  %9 = and i32 %5, 65280
  %phitmp = icmp eq i32 %9, 0
  %phitmp2 = select i1 %phitmp, i64 42, i64 4294967295
  store i64 %phitmp2, i64* %rax.0.reg2mem, !insn.addr !334
  br label %dec_label_pc_2d0d, !insn.addr !334

dec_label_pc_2d0d:                                ; preds = %dec_label_pc_2cdc, %dec_label_pc_2cd0, %dec_label_pc_2cfc, %dec_label_pc_2cee
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !335

dec_label_pc_2d16:                                ; preds = %dec_label_pc_2cda
  %10 = call i32 (i8*, i8*, ...) @execl(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_4205, i64 0, i64 0), i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_4205, i64 0, i64 0)), !insn.addr !336
  call void @_exit(i32 127), !insn.addr !337
  unreachable, !insn.addr !337

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 0, 3, 4, 1, 2 }
  uselistorder label %dec_label_pc_2d0d, { 2, 3, 0, 1 }
}

define i64 @param_pipe_communication() local_unnamed_addr {
dec_label_pc_2d40:
  %0 = alloca i32
  %rax.0.reg2mem = alloca i64, !insn.addr !338
  %stack_var_-40 = alloca i64, align 8
  %1 = load i32, i32* %0
  %stack_var_-48 = alloca i32, align 4
  %stack_var_-56 = alloca i64, align 8
  %2 = ptrtoint i32* %stack_var_-48 to i64, !insn.addr !339
  %3 = trunc i64 %2 to i32, !insn.addr !340
  %4 = insertvalue [2 x i32] undef, i32 %3, 0, !insn.addr !340
  %5 = call i32 @pipe([2 x i32] %4), !insn.addr !340
  %6 = icmp slt i32 %5, 0, !insn.addr !341
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !342
  br i1 %6, label %dec_label_pc_2db0, label %dec_label_pc_2d53, !insn.addr !342

dec_label_pc_2d53:                                ; preds = %dec_label_pc_2d40
  %7 = call i32 @fork(), !insn.addr !343
  %8 = icmp slt i32 %7, 0, !insn.addr !344
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !345
  br i1 %8, label %dec_label_pc_2db0, label %dec_label_pc_2d5c, !insn.addr !345

dec_label_pc_2d5c:                                ; preds = %dec_label_pc_2d53
  %9 = icmp eq i32 %7, 0, !insn.addr !344
  br i1 %9, label %dec_label_pc_2db6, label %dec_label_pc_2d5e, !insn.addr !346

dec_label_pc_2d5e:                                ; preds = %dec_label_pc_2d5c
  %10 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !347
  %11 = call i32 @close(i32 %1), !insn.addr !348
  %12 = load i32, i32* %stack_var_-48, align 4, !insn.addr !349
  %13 = call i32 @read(i32 %12, i64* nonnull %stack_var_-40, i32 31), !insn.addr !350
  %14 = sext i32 %13 to i64, !insn.addr !350
  %15 = add i64 %10, 16, !insn.addr !351
  %16 = add i64 %15, %14, !insn.addr !351
  %17 = inttoptr i64 %16 to i8*, !insn.addr !351
  store i8 0, i8* %17, align 1, !insn.addr !351
  %18 = load i32, i32* %stack_var_-48, align 4, !insn.addr !352
  %19 = call i32 @close(i32 %18), !insn.addr !353
  %20 = call i32 @wait(i64 0), !insn.addr !354
  %21 = icmp eq i32 %13, 0, !insn.addr !355
  %22 = icmp slt i32 %13, 0, !insn.addr !355
  %23 = icmp eq i1 %22, false, !insn.addr !356
  %24 = icmp eq i1 %21, false, !insn.addr !356
  %25 = icmp eq i1 %23, %24, !insn.addr !356
  %26 = select i1 %25, i64 42, i64 4294967293, !insn.addr !356
  store i64 %26, i64* %rax.0.reg2mem, !insn.addr !357
  br label %dec_label_pc_2db0, !insn.addr !357

dec_label_pc_2db0:                                ; preds = %dec_label_pc_2d53, %dec_label_pc_2d40, %dec_label_pc_2d5e
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !358

dec_label_pc_2db6:                                ; preds = %dec_label_pc_2d5c
  %27 = load i32, i32* %stack_var_-48, align 4, !insn.addr !359
  %28 = call i32 @close(i32 %27), !insn.addr !360
  %29 = call i32 @write(i32 %1, i64* bitcast ([10 x i8]* @global_var_420f to i64*), i32 9), !insn.addr !361
  %30 = call i32 @close(i32 %1), !insn.addr !362
  call void @_exit(i32 0), !insn.addr !363
  unreachable, !insn.addr !363

; uselistorder directives
  uselistorder i32* %stack_var_-48, { 3, 2, 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder label %dec_label_pc_2db0, { 2, 0, 1 }
}

define i64 @call_pipe_communication() local_unnamed_addr {
dec_label_pc_2df0:
  %0 = call i64 @param_pipe_communication(), !insn.addr !364
  ret i64 %0, !insn.addr !365
}

define i64 @param_socket_create(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2e00:
  %0 = alloca i128
  %rax.0.reg2mem = alloca i64, !insn.addr !366
  %1 = load i128, i128* %0
  %stack_var_-40 = alloca i128, align 8
  %stack_var_-44 = alloca i32, align 4
  %2 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !367
  %3 = icmp slt i32 %2, 0, !insn.addr !368
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !369
  br i1 %3, label %dec_label_pc_2eb2, label %dec_label_pc_2e1b, !insn.addr !369

dec_label_pc_2e1b:                                ; preds = %dec_label_pc_2e00
  store i32 1, i32* %stack_var_-44, align 4, !insn.addr !370
  %4 = bitcast i32* %stack_var_-44 to i64*, !insn.addr !371
  %5 = call i32 @setsockopt(i32 %2, i32 1, i32 2, i64* nonnull %4, i32 4), !insn.addr !371
  %6 = icmp slt i32 %5, 0, !insn.addr !372
  br i1 %6, label %dec_label_pc_2e98, label %dec_label_pc_2e45, !insn.addr !373

dec_label_pc_2e45:                                ; preds = %dec_label_pc_2e1b
  %7 = call i128 @__asm_xorps(i128 %1, i128 %1), !insn.addr !374
  %8 = call i64 @__asm_movaps(i128 %7), !insn.addr !375
  store i128 2, i128* %stack_var_-40, align 8, !insn.addr !376
  %9 = bitcast i128* %stack_var_-40 to %sockaddr*, !insn.addr !377
  %10 = call i32 @bind(i32 %2, %sockaddr* nonnull %9, i32 16), !insn.addr !377
  %11 = icmp slt i32 %10, 0, !insn.addr !378
  br i1 %11, label %dec_label_pc_2ea6, label %dec_label_pc_2e6b, !insn.addr !379

dec_label_pc_2e6b:                                ; preds = %dec_label_pc_2e45
  %12 = call i32 @listen(i32 %2, i32 5), !insn.addr !380
  %13 = call i32 @close(i32 %2), !insn.addr !381
  %14 = icmp slt i32 %12, 0, !insn.addr !382
  %15 = select i1 %14, i64 4294967292, i64 42, !insn.addr !383
  store i64 %15, i64* %rax.0.reg2mem, !insn.addr !384
  br label %dec_label_pc_2eb2, !insn.addr !384

dec_label_pc_2e98:                                ; preds = %dec_label_pc_2e1b
  %16 = call i32 @close(i32 %2), !insn.addr !385
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !386
  br label %dec_label_pc_2eb2, !insn.addr !386

dec_label_pc_2ea6:                                ; preds = %dec_label_pc_2e45
  %17 = call i32 @close(i32 %2), !insn.addr !387
  store i64 4294967293, i64* %rax.0.reg2mem, !insn.addr !388
  br label %dec_label_pc_2eb2, !insn.addr !388

dec_label_pc_2eb2:                                ; preds = %dec_label_pc_2e00, %dec_label_pc_2ea6, %dec_label_pc_2e98, %dec_label_pc_2e6b
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !389

; uselistorder directives
  uselistorder i32 %2, { 3, 0, 1, 2, 4, 5, 6 }
  uselistorder i64* %rax.0.reg2mem, { 0, 3, 4, 2, 1 }
  uselistorder label %dec_label_pc_2eb2, { 1, 2, 3, 0 }
}

define i64 @call_socket_create() local_unnamed_addr {
dec_label_pc_2ec0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = call i64 @param_socket_create(i64 %1, i64 %2, i64 %3), !insn.addr !390
  ret i64 %4, !insn.addr !391

; uselistorder directives
  uselistorder i64* %0, { 2, 1, 0 }
}

define i64 @param_shmget_shmat() local_unnamed_addr {
dec_label_pc_2ed0:
  %rbx.0.reg2mem = alloca i64, !insn.addr !392
  %0 = call i32 (i8*, i32, ...) @open(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_4219, i64 0, i64 0), i32 66), !insn.addr !393
  %1 = icmp slt i32 %0, 0, !insn.addr !394
  store i64 4294967295, i64* %rbx.0.reg2mem, !insn.addr !395
  br i1 %1, label %dec_label_pc_2f8a, label %dec_label_pc_2ef9, !insn.addr !395

dec_label_pc_2ef9:                                ; preds = %dec_label_pc_2ed0
  %2 = call i32 @close(i32 %0), !insn.addr !396
  %3 = call i32 @ftok(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_4219, i64 0, i64 0), i32 42), !insn.addr !397
  %4 = icmp slt i32 %3, 0, !insn.addr !398
  store i64 4294967295, i64* %rbx.0.reg2mem, !insn.addr !399
  br i1 %4, label %dec_label_pc_2f8a, label %dec_label_pc_2f15, !insn.addr !399

dec_label_pc_2f15:                                ; preds = %dec_label_pc_2ef9
  %5 = call i32 @shmget(i32 %3, i32 ptrtoint (i32* @global_var_1000 to i32), i32 ptrtoint (i32* @global_var_3b6 to i32)), !insn.addr !400
  %6 = icmp slt i32 %5, 0, !insn.addr !401
  store i64 4294967294, i64* %rbx.0.reg2mem, !insn.addr !402
  br i1 %6, label %dec_label_pc_2f8a, label %dec_label_pc_2f2a, !insn.addr !402

dec_label_pc_2f2a:                                ; preds = %dec_label_pc_2f15
  %7 = call i64* @shmat(i32 %5, i64* null, i32 0), !insn.addr !403
  %8 = icmp eq i64* %7, inttoptr (i64 -1 to i64*), !insn.addr !404
  store i64 4294967293, i64* %rbx.0.reg2mem, !insn.addr !405
  br i1 %8, label %dec_label_pc_2f8a, label %dec_label_pc_2f3e, !insn.addr !405

dec_label_pc_2f3e:                                ; preds = %dec_label_pc_2f2a
  %9 = ptrtoint i64* %7 to i64, !insn.addr !403
  %10 = add i64 %9, 5, !insn.addr !406
  %11 = inttoptr i64 %10 to i64*, !insn.addr !406
  store i64 34184295084281188, i64* %11, align 8, !insn.addr !406
  store i64 7299600957910902867, i64* %7, align 8, !insn.addr !407
  %12 = bitcast i64* %7 to i8*, !insn.addr !408
  %13 = call i32 @strlen(i8* %12), !insn.addr !408
  %14 = zext i32 %13 to i64
  %15 = call i32 @shmdt(i64* %7), !insn.addr !409
  %16 = call i32 @shmctl(i32 %5, i32 0, %shmid_ds* null), !insn.addr !410
  store i64 %14, i64* %rbx.0.reg2mem, !insn.addr !411
  br label %dec_label_pc_2f8a, !insn.addr !411

dec_label_pc_2f8a:                                ; preds = %dec_label_pc_2f2a, %dec_label_pc_2f15, %dec_label_pc_2f3e, %dec_label_pc_2ef9, %dec_label_pc_2ed0
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  ret i64 %rbx.0.reload, !insn.addr !412

; uselistorder directives
  uselistorder i64* %7, { 1, 0, 2, 4, 3 }
  uselistorder i64* %rbx.0.reg2mem, { 0, 3, 1, 2, 4, 5 }
  uselistorder i32 (i8*)* @strlen, { 0, 1, 4, 3, 2, 5 }
  uselistorder i32 (i32)* @close, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder label %dec_label_pc_2f8a, { 2, 0, 1, 3, 4 }
}

define i64 @call_shmget_shmat() local_unnamed_addr {
dec_label_pc_2fa0:
  %0 = call i64 @param_shmget_shmat(), !insn.addr !413
  %1 = trunc i64 %0 to i32, !insn.addr !414
  %2 = icmp eq i32 %1, 0, !insn.addr !414
  %3 = icmp slt i32 %1, 0, !insn.addr !414
  %4 = icmp eq i1 %3, false, !insn.addr !415
  %5 = icmp eq i1 %2, false, !insn.addr !415
  %6 = icmp eq i1 %4, %5, !insn.addr !415
  %7 = select i1 %6, i64 42, i64 4294967295, !insn.addr !415
  ret i64 %7, !insn.addr !416

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
}

define i64 @param_signal_handling() local_unnamed_addr {
dec_label_pc_2fc0:
  %rax.0.reg2mem = alloca i64, !insn.addr !417
  %.reg2mem10 = alloca i32, !insn.addr !417
  %rbx.1.reg2mem = alloca i64, !insn.addr !417
  %.reg2mem = alloca i32, !insn.addr !417
  %rbx.0.reg2mem = alloca i64, !insn.addr !417
  %0 = call void (i32)* @signal(i32 10, void (i32)* inttoptr (i64 12528 to void (i32)*)), !insn.addr !418
  %1 = icmp eq void (i32)* %0, inttoptr (i64 -1 to void (i32)*), !insn.addr !419
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !420
  br i1 %1, label %dec_label_pc_30d3, label %dec_label_pc_2fdc, !insn.addr !420

dec_label_pc_2fdc:                                ; preds = %dec_label_pc_2fc0
  %2 = call void (i32)* @signal(i32 14, void (i32)* inttoptr (i64 12528 to void (i32)*)), !insn.addr !421
  %3 = icmp eq void (i32)* %2, inttoptr (i64 -1 to void (i32)*), !insn.addr !422
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !423
  br i1 %3, label %dec_label_pc_30d3, label %dec_label_pc_2ff7, !insn.addr !423

dec_label_pc_2ff7:                                ; preds = %dec_label_pc_2fdc
  store i32 0, i32* @global_var_71f0, align 4, !insn.addr !424
  %4 = call i32 @raise(i32 10), !insn.addr !425
  %5 = load i32, i32* @global_var_71f0, align 4
  %6 = icmp eq i32 %5, 0, !insn.addr !426
  %7 = icmp eq i1 %6, false, !insn.addr !427
  store i64 ptrtoint (i32* @global_var_3e8 to i64), i64* %rbx.0.reg2mem, !insn.addr !427
  store i32 %5, i32* %.reg2mem, !insn.addr !427
  br i1 %7, label %dec_label_pc_303d, label %dec_label_pc_3020, !insn.addr !427

dec_label_pc_3020:                                ; preds = %dec_label_pc_2ff7, %dec_label_pc_3033
  %8 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !428
  %9 = load i32, i32* @global_var_71f0, align 4
  %10 = icmp eq i32 %9, 0, !insn.addr !429
  %11 = icmp eq i1 %10, false, !insn.addr !430
  store i32 %9, i32* %.reg2mem, !insn.addr !430
  br i1 %11, label %dec_label_pc_303d, label %dec_label_pc_3033, !insn.addr !430

dec_label_pc_3033:                                ; preds = %dec_label_pc_3020
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %12 = add i64 %rbx.0.reload, 4294967295, !insn.addr !431
  %13 = trunc i64 %rbx.0.reload to i32, !insn.addr !432
  %14 = and i64 %12, 4294967295, !insn.addr !433
  %15 = icmp ult i32 %13, 2
  store i64 %14, i64* %rbx.0.reg2mem, !insn.addr !434
  store i32 %9, i32* %.reg2mem, !insn.addr !434
  br i1 %15, label %dec_label_pc_303d, label %dec_label_pc_3020, !insn.addr !434

dec_label_pc_303d:                                ; preds = %dec_label_pc_3020, %dec_label_pc_3033, %dec_label_pc_2ff7
  %.reload = load i32, i32* %.reg2mem, !insn.addr !435
  %16 = icmp eq i32 %.reload, 0, !insn.addr !435
  store i64 4294967293, i64* %rax.0.reg2mem, !insn.addr !436
  br i1 %16, label %dec_label_pc_30d3, label %dec_label_pc_304a, !insn.addr !436

dec_label_pc_304a:                                ; preds = %dec_label_pc_303d
  %17 = load i32, i32* @global_var_71f4, align 4, !insn.addr !437
  %18 = icmp eq i32 %17, 10, !insn.addr !438
  %19 = icmp eq i1 %18, false, !insn.addr !439
  store i64 4294967292, i64* %rax.0.reg2mem, !insn.addr !439
  br i1 %19, label %dec_label_pc_30d3, label %dec_label_pc_305a, !insn.addr !439

dec_label_pc_305a:                                ; preds = %dec_label_pc_304a
  store i32 0, i32* @global_var_71f0, align 4, !insn.addr !440
  %20 = call i32 @alarm(i32 1), !insn.addr !441
  %21 = load i32, i32* @global_var_71f0, align 4
  %22 = icmp eq i32 %21, 0, !insn.addr !442
  %23 = icmp eq i1 %22, false, !insn.addr !443
  store i64 ptrtoint (i32* @global_var_7d0 to i64), i64* %rbx.1.reg2mem, !insn.addr !443
  store i32 %21, i32* %.reg2mem10, !insn.addr !443
  br i1 %23, label %dec_label_pc_309d, label %dec_label_pc_3080, !insn.addr !443

dec_label_pc_3080:                                ; preds = %dec_label_pc_305a, %dec_label_pc_3093
  %24 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !444
  %25 = load i32, i32* @global_var_71f0, align 4
  %26 = icmp eq i32 %25, 0, !insn.addr !445
  %27 = icmp eq i1 %26, false, !insn.addr !446
  store i32 %25, i32* %.reg2mem10, !insn.addr !446
  br i1 %27, label %dec_label_pc_309d, label %dec_label_pc_3093, !insn.addr !446

dec_label_pc_3093:                                ; preds = %dec_label_pc_3080
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %28 = add i64 %rbx.1.reload, 4294967295, !insn.addr !447
  %29 = trunc i64 %rbx.1.reload to i32, !insn.addr !448
  %30 = and i64 %28, 4294967295, !insn.addr !449
  %31 = icmp ult i32 %29, 2
  store i64 %30, i64* %rbx.1.reg2mem, !insn.addr !450
  store i32 %25, i32* %.reg2mem10, !insn.addr !450
  br i1 %31, label %dec_label_pc_309d, label %dec_label_pc_3080, !insn.addr !450

dec_label_pc_309d:                                ; preds = %dec_label_pc_3080, %dec_label_pc_3093, %dec_label_pc_305a
  %.reload11 = load i32, i32* %.reg2mem10, !insn.addr !451
  %32 = icmp eq i32 %.reload11, 0, !insn.addr !451
  store i64 4294967291, i64* %rax.0.reg2mem, !insn.addr !452
  br i1 %32, label %dec_label_pc_30d3, label %dec_label_pc_30ab, !insn.addr !452

dec_label_pc_30ab:                                ; preds = %dec_label_pc_309d
  %33 = load i32, i32* @global_var_71f4, align 4, !insn.addr !453
  %34 = icmp eq i32 %33, 14, !insn.addr !454
  %35 = icmp eq i1 %34, false, !insn.addr !455
  store i64 4294967291, i64* %rax.0.reg2mem, !insn.addr !455
  br i1 %35, label %dec_label_pc_30d3, label %dec_label_pc_30b6, !insn.addr !455

dec_label_pc_30b6:                                ; preds = %dec_label_pc_30ab
  %36 = call void (i32)* @signal(i32 10, void (i32)* null), !insn.addr !456
  %37 = call void (i32)* @signal(i32 14, void (i32)* null), !insn.addr !457
  store i64 42, i64* %rax.0.reg2mem, !insn.addr !458
  br label %dec_label_pc_30d3, !insn.addr !458

dec_label_pc_30d3:                                ; preds = %dec_label_pc_2fc0, %dec_label_pc_2fdc, %dec_label_pc_303d, %dec_label_pc_30b6, %dec_label_pc_30ab, %dec_label_pc_309d, %dec_label_pc_304a
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !459

; uselistorder directives
  uselistorder i64 %rbx.1.reload, { 1, 0 }
  uselistorder i32 %25, { 1, 0, 2 }
  uselistorder i64 %rbx.0.reload, { 1, 0 }
  uselistorder i32 %9, { 1, 0, 2 }
  uselistorder i64* %rbx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %.reg2mem, { 0, 2, 1, 3 }
  uselistorder i64* %rbx.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %.reg2mem10, { 0, 2, 1, 3 }
  uselistorder i64* %rax.0.reg2mem, { 0, 4, 5, 6, 7, 1, 2, 3 }
  uselistorder i32 14, { 1, 0, 2 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i32 10, { 1, 0, 2, 3 }
  uselistorder label %dec_label_pc_30d3, { 3, 4, 5, 6, 2, 1, 0 }
  uselistorder label %dec_label_pc_309d, { 1, 0, 2 }
  uselistorder label %dec_label_pc_3080, { 1, 0 }
  uselistorder label %dec_label_pc_303d, { 1, 0, 2 }
  uselistorder label %dec_label_pc_3020, { 1, 0 }
}

define i64 @signal_handler(i64 %arg1) local_unnamed_addr {
dec_label_pc_30f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  store i32 1, i32* @global_var_71f0, align 4, !insn.addr !460
  %2 = trunc i64 %arg1 to i32, !insn.addr !461
  store i32 %2, i32* @global_var_71f4, align 4, !insn.addr !461
  ret i64 %1, !insn.addr !462

; uselistorder directives
  uselistorder i32* @global_var_71f4, { 2, 1, 0 }
  uselistorder i32* @global_var_71f0, { 6, 5, 4, 3, 2, 1, 0 }
}

define i64 @call_signal_handling() local_unnamed_addr {
dec_label_pc_3110:
  %0 = call i64 @param_signal_handling(), !insn.addr !463
  ret i64 %0, !insn.addr !464
}

define i64 @test_system_calls(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_3120:
  %stack_var_-160 = alloca i32, align 4
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_43d3 to i8*)), !insn.addr !465
  %1 = call i32 (i32, ...) @syscall(i32 2), !insn.addr !466
  %2 = icmp slt i32 %1, 0, !insn.addr !467
  br i1 %2, label %dec_label_pc_3163, label %dec_label_pc_3153, !insn.addr !468

dec_label_pc_3153:                                ; preds = %dec_label_pc_3120
  %3 = call i32 (i32, ...) @syscall(i32 3), !insn.addr !469
  br label %dec_label_pc_316c, !insn.addr !470

dec_label_pc_3163:                                ; preds = %dec_label_pc_3120
  %4 = call i32* @__errno_location(), !insn.addr !471
  br label %dec_label_pc_316c, !insn.addr !472

dec_label_pc_316c:                                ; preds = %dec_label_pc_3163, %dec_label_pc_3153
  %5 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4238 to i8*)), !insn.addr !473
  %6 = bitcast i32* %stack_var_-160 to %stat*, !insn.addr !474
  %7 = call i32 @stat(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_407e, i64 0, i64 0), %stat* nonnull %6), !insn.addr !474
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4254 to i8*)), !insn.addr !475
  %9 = call i32 @fork(), !insn.addr !476
  %10 = icmp slt i32 %9, 0, !insn.addr !477
  br i1 %10, label %dec_label_pc_31fb, label %dec_label_pc_31cc, !insn.addr !478

dec_label_pc_31cc:                                ; preds = %dec_label_pc_316c
  %11 = icmp eq i32 %9, 0, !insn.addr !477
  br i1 %11, label %dec_label_pc_3273, label %dec_label_pc_31d2, !insn.addr !479

dec_label_pc_31d2:                                ; preds = %dec_label_pc_31cc
  %12 = call i32 @waitpid(i32 %9, i32* nonnull %stack_var_-160, i32 0), !insn.addr !480
  br label %dec_label_pc_31fb

dec_label_pc_31fb:                                ; preds = %dec_label_pc_31d2, %dec_label_pc_316c
  %13 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4270 to i8*)), !insn.addr !481
  %14 = call i64 @param_pipe_communication(), !insn.addr !482
  %15 = and i64 %14, 4294967295, !insn.addr !483
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_428c to i8*)), !insn.addr !484
  %17 = call i64 @param_socket_create(i64 ptrtoint (i8** @global_var_428c to i64), i64 %15, i64 0), !insn.addr !485
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_42a8 to i8*)), !insn.addr !486
  %19 = call i64 @param_shmget_shmat(), !insn.addr !487
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_42c4 to i8*)), !insn.addr !488
  %21 = call i64 @param_signal_handling(), !insn.addr !489
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_42e0 to i8*)), !insn.addr !490
  %23 = sext i32 %22 to i64, !insn.addr !490
  ret i64 %23, !insn.addr !491

dec_label_pc_3273:                                ; preds = %dec_label_pc_31cc
  %24 = call i32 (i8*, i8*, ...) @execl(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_4205, i64 0, i64 0), i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_4205, i64 0, i64 0)), !insn.addr !492
  call void @_exit(i32 127), !insn.addr !493
  unreachable, !insn.addr !493

; uselistorder directives
  uselistorder i32* %stack_var_-160, { 1, 0 }
  uselistorder void (i32)* @_exit, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i8*, i8*, ...)* @execl, { 2, 1, 0, 3 }
  uselistorder i64 ()* @param_signal_handling, { 1, 0 }
  uselistorder i64 ()* @param_shmget_shmat, { 1, 0 }
  uselistorder i64 (i64, i64, i64)* @param_socket_create, { 1, 0 }
  uselistorder i8** @global_var_428c, { 1, 0 }
  uselistorder i64 ()* @param_pipe_communication, { 1, 0 }
  uselistorder i32 (i32, i32*, i32)* @waitpid, { 2, 1, 0, 3 }
  uselistorder i32 ()* @fork, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i8*, %stat*)* @stat, { 2, 1, 0, 3 }
  uselistorder i32* ()* @__errno_location, { 2, 1, 0, 3 }
  uselistorder i32 (i32, ...)* @syscall, { 5, 4, 3, 2, 1, 0, 6 }
}

define i64 @thread_compute() local_unnamed_addr {
dec_label_pc_32a0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = mul i32 %2, %2, !insn.addr !494
  %4 = call i64* @malloc(i32 4), !insn.addr !495
  %5 = ptrtoint i64* %4 to i64, !insn.addr !495
  %6 = bitcast i64* %4 to i32*, !insn.addr !496
  store i32 %3, i32* %6, align 4, !insn.addr !496
  ret i64 %5, !insn.addr !497

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i64 @param_pthread_create(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_32c0:
  %rbx.0.reg2mem = alloca i64, !insn.addr !498
  %stack_var_-24 = alloca i64, align 8
  %stack_var_-16 = alloca i32, align 4
  %stack_var_-28 = alloca i64, align 8
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !499
  store i64 %0, i64* %stack_var_-28, align 8, !insn.addr !499
  %1 = call i32 @pthread_create(i32* nonnull %stack_var_-16, i64* null, i64* (i64*)* inttoptr (i64 12960 to i64* (i64*)*), i64* nonnull %stack_var_-28), !insn.addr !500
  %2 = icmp eq i32 %1, 0, !insn.addr !501
  %3 = icmp eq i1 %2, false, !insn.addr !502
  store i64 4294967295, i64* %rbx.0.reg2mem, !insn.addr !502
  br i1 %3, label %dec_label_pc_3305, label %dec_label_pc_32ea, !insn.addr !502

dec_label_pc_32ea:                                ; preds = %dec_label_pc_32c0
  %4 = load i32, i32* %stack_var_-16, align 4, !insn.addr !503
  %5 = bitcast i64* %stack_var_-24 to i64**, !insn.addr !504
  %6 = call i32 @pthread_join(i32 %4, i64** nonnull %5), !insn.addr !504
  %7 = load i64, i64* %stack_var_-24, align 8, !insn.addr !505
  %8 = inttoptr i64 %7 to i32*, !insn.addr !506
  %9 = load i32, i32* %8, align 4, !insn.addr !506
  %10 = zext i32 %9 to i64, !insn.addr !506
  %11 = inttoptr i64 %7 to i64*, !insn.addr !507
  call void @free(i64* %11), !insn.addr !507
  store i64 %10, i64* %rbx.0.reg2mem, !insn.addr !507
  br label %dec_label_pc_3305, !insn.addr !507

dec_label_pc_3305:                                ; preds = %dec_label_pc_32ea, %dec_label_pc_32c0
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  ret i64 %rbx.0.reload, !insn.addr !508

; uselistorder directives
  uselistorder i64 %7, { 1, 0 }
  uselistorder i64* %stack_var_-28, { 1, 0 }
  uselistorder i64* %stack_var_-24, { 1, 0 }
}

define i64 @call_pthread_create(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_3310:
  %rbx.0.reg2mem = alloca i64, !insn.addr !509
  %stack_var_-24 = alloca i64, align 8
  %stack_var_-16 = alloca i32, align 4
  %stack_var_-28 = alloca i32, align 4
  store i32 7, i32* %stack_var_-28, align 4, !insn.addr !510
  %0 = bitcast i32* %stack_var_-28 to i64*, !insn.addr !511
  %1 = call i32 @pthread_create(i32* nonnull %stack_var_-16, i64* null, i64* (i64*)* inttoptr (i64 12960 to i64* (i64*)*), i64* nonnull %0), !insn.addr !511
  %2 = icmp eq i32 %1, 0, !insn.addr !512
  %3 = icmp eq i1 %2, false, !insn.addr !513
  store i64 4294967295, i64* %rbx.0.reg2mem, !insn.addr !513
  br i1 %3, label %dec_label_pc_3359, label %dec_label_pc_333e, !insn.addr !513

dec_label_pc_333e:                                ; preds = %dec_label_pc_3310
  %4 = load i32, i32* %stack_var_-16, align 4, !insn.addr !514
  %5 = bitcast i64* %stack_var_-24 to i64**, !insn.addr !515
  %6 = call i32 @pthread_join(i32 %4, i64** nonnull %5), !insn.addr !515
  %7 = load i64, i64* %stack_var_-24, align 8, !insn.addr !516
  %8 = inttoptr i64 %7 to i32*, !insn.addr !517
  %9 = load i32, i32* %8, align 4, !insn.addr !517
  %10 = zext i32 %9 to i64, !insn.addr !517
  %11 = inttoptr i64 %7 to i64*, !insn.addr !518
  call void @free(i64* %11), !insn.addr !518
  store i64 %10, i64* %rbx.0.reg2mem, !insn.addr !518
  br label %dec_label_pc_3359, !insn.addr !518

dec_label_pc_3359:                                ; preds = %dec_label_pc_333e, %dec_label_pc_3310
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  ret i64 %rbx.0.reload, !insn.addr !519

; uselistorder directives
  uselistorder i64 %7, { 1, 0 }
  uselistorder i64* %stack_var_-24, { 1, 0 }
}

define i64 @thread_sum(i64 %arg1) local_unnamed_addr {
dec_label_pc_3370:
  %rdi = alloca i64, align 8
  store i64 %arg1, i64* %rdi, align 8
  %0 = add i64 %arg1, 8, !insn.addr !520
  %1 = inttoptr i64 %0 to i32*, !insn.addr !520
  store i32 0, i32* %1, align 4, !insn.addr !520
  %2 = bitcast i64* %rdi to i32*
  %3 = load i32, i32* %2, align 8, !insn.addr !521
  %4 = add i64 %arg1, 4, !insn.addr !522
  %5 = inttoptr i64 %4 to i32*, !insn.addr !522
  %6 = load i32, i32* %5, align 4, !insn.addr !522
  %7 = icmp ult i32 %6, %3, !insn.addr !523
  br i1 %7, label %dec_label_pc_33a2, label %dec_label_pc_3382, !insn.addr !523

dec_label_pc_3382:                                ; preds = %dec_label_pc_3370
  %8 = zext i32 %3 to i64, !insn.addr !521
  %9 = sub i32 %6, %3, !insn.addr !524
  %10 = zext i32 %9 to i64, !insn.addr !524
  %11 = zext i32 %6 to i64, !insn.addr !522
  %12 = xor i64 %8, 4294967295, !insn.addr !525
  %13 = add nuw nsw i64 %12, %11, !insn.addr !526
  %14 = and i64 %13, 4294967295, !insn.addr !526
  %15 = mul nuw i64 %14, %10, !insn.addr !527
  %16 = udiv i64 %15, 2, !insn.addr !528
  %17 = load i64, i64* %rdi, align 8, !insn.addr !529
  %18 = add i64 %17, 8, !insn.addr !529
  %19 = inttoptr i64 %18 to i32*, !insn.addr !529
  %20 = load i32, i32* %19, align 4, !insn.addr !529
  %21 = mul i64 %8, 4294967296, !insn.addr !530
  %sext = add i64 %21, 4294967296
  %22 = udiv i64 %sext, 4294967296
  %23 = trunc i64 %22 to i32
  %24 = mul i32 %9, %23, !insn.addr !531
  %25 = trunc i64 %16 to i32, !insn.addr !532
  %26 = add i32 %24, %3, !insn.addr !529
  %27 = add i32 %26, %25, !insn.addr !533
  %28 = add i32 %27, %20, !insn.addr !532
  store i32 %28, i32* %19, align 4, !insn.addr !534
  br label %dec_label_pc_33a2, !insn.addr !534

dec_label_pc_33a2:                                ; preds = %dec_label_pc_3382, %dec_label_pc_3370
  ret i64 0, !insn.addr !535

; uselistorder directives
  uselistorder i32 %6, { 2, 1, 0 }
  uselistorder i32 %3, { 0, 2, 3, 1 }
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @param_pthread_join() local_unnamed_addr {
dec_label_pc_33b0:
  %0 = alloca i128
  %r14.1.reg2mem = alloca i64, !insn.addr !536
  %r14.0.reg2mem = alloca i32, !insn.addr !536
  %rbp.1.reg2mem = alloca i64, !insn.addr !536
  %rbx.1.reg2mem = alloca i64, !insn.addr !536
  %rbp.0.reg2mem = alloca i64, !insn.addr !536
  %rbx.0.reg2mem = alloca i64, !insn.addr !536
  %1 = load i128, i128* %0
  %stack_var_-96 = alloca i64, align 8
  %stack_var_-104 = alloca i64, align 8
  %2 = ptrtoint i64* %stack_var_-104 to i64, !insn.addr !537
  %3 = call i128 @__asm_xorps(i128 %1, i128 %1), !insn.addr !538
  %4 = call i64 @__asm_movaps(i128 %3), !insn.addr !539
  store i64 %4, i64* %stack_var_-104, align 8, !insn.addr !539
  %5 = call i64 @__asm_movaps(i128 %3), !insn.addr !540
  store i64 42949672961, i64* %stack_var_-104, align 8, !insn.addr !541
  %6 = add i64 %2, 48
  store i64 %2, i64* %rbx.0.reg2mem, !insn.addr !542
  store i64 0, i64* %rbp.0.reg2mem, !insn.addr !542
  br label %dec_label_pc_3410, !insn.addr !542

dec_label_pc_3410:                                ; preds = %dec_label_pc_3429, %dec_label_pc_33b0
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %7 = add i64 %rbp.0.reload, %6, !insn.addr !543
  %8 = inttoptr i64 %7 to i32*, !insn.addr !544
  %9 = inttoptr i64 %rbx.0.reload to i64*, !insn.addr !544
  %10 = call i32 @pthread_create(i32* %8, i64* null, i64* (i64*)* inttoptr (i64 13168 to i64* (i64*)*), i64* %9), !insn.addr !544
  %11 = icmp eq i32 %10, 0, !insn.addr !545
  %12 = icmp eq i1 %11, false, !insn.addr !546
  store i64 4294967295, i64* %r14.1.reg2mem, !insn.addr !546
  br i1 %12, label %dec_label_pc_3481, label %dec_label_pc_3429, !insn.addr !546

dec_label_pc_3429:                                ; preds = %dec_label_pc_3410
  %13 = add i64 %rbx.0.reload, 12, !insn.addr !547
  %14 = add nuw nsw i64 %rbp.0.reload, 8, !insn.addr !548
  %15 = icmp eq i64 %rbp.0.reload, 16, !insn.addr !549
  %16 = icmp eq i1 %15, false, !insn.addr !550
  store i64 %13, i64* %rbx.0.reg2mem, !insn.addr !550
  store i64 %14, i64* %rbp.0.reg2mem, !insn.addr !550
  br i1 %16, label %dec_label_pc_3410, label %dec_label_pc_3437, !insn.addr !550

dec_label_pc_3437:                                ; preds = %dec_label_pc_3429
  %17 = ptrtoint i64* %stack_var_-96 to i64, !insn.addr !551
  store i64 %17, i64* %rbx.1.reg2mem, !insn.addr !552
  store i64 0, i64* %rbp.1.reg2mem, !insn.addr !552
  store i32 0, i32* %r14.0.reg2mem, !insn.addr !552
  br label %dec_label_pc_3450, !insn.addr !552

dec_label_pc_3450:                                ; preds = %dec_label_pc_3460, %dec_label_pc_3437
  %rbp.1.reload = load i64, i64* %rbp.1.reg2mem
  %18 = mul i64 %rbp.1.reload, 8, !insn.addr !553
  %19 = add i64 %18, %6, !insn.addr !553
  %20 = inttoptr i64 %19 to i64*, !insn.addr !553
  %21 = load i64, i64* %20, align 8, !insn.addr !553
  %22 = trunc i64 %21 to i32, !insn.addr !554
  %23 = call i32 @pthread_join(i32 %22, i64** null), !insn.addr !554
  %24 = icmp eq i32 %23, 0, !insn.addr !555
  %25 = icmp eq i1 %24, false, !insn.addr !556
  store i64 4294967294, i64* %r14.1.reg2mem, !insn.addr !556
  br i1 %25, label %dec_label_pc_3481, label %dec_label_pc_3460, !insn.addr !556

dec_label_pc_3460:                                ; preds = %dec_label_pc_3450
  %r14.0.reload = load i32, i32* %r14.0.reg2mem
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %26 = inttoptr i64 %rbx.1.reload to i32*, !insn.addr !557
  %27 = load i32, i32* %26, align 4, !insn.addr !557
  %28 = add i32 %27, %r14.0.reload, !insn.addr !557
  %29 = add nuw nsw i64 %rbp.1.reload, 1, !insn.addr !558
  %30 = add i64 %rbx.1.reload, 12, !insn.addr !559
  %31 = icmp eq i64 %rbp.1.reload, 2, !insn.addr !560
  %32 = icmp eq i1 %31, false, !insn.addr !561
  store i64 %30, i64* %rbx.1.reg2mem, !insn.addr !561
  store i64 %29, i64* %rbp.1.reg2mem, !insn.addr !561
  store i32 %28, i32* %r14.0.reg2mem, !insn.addr !561
  br i1 %32, label %dec_label_pc_3450, label %dec_label_pc_3481.loopexit.split.loop.exit, !insn.addr !561

dec_label_pc_3481.loopexit.split.loop.exit:       ; preds = %dec_label_pc_3460
  %33 = zext i32 %28 to i64, !insn.addr !557
  store i64 %33, i64* %r14.1.reg2mem
  br label %dec_label_pc_3481

dec_label_pc_3481:                                ; preds = %dec_label_pc_3410, %dec_label_pc_3450, %dec_label_pc_3481.loopexit.split.loop.exit
  %r14.1.reload = load i64, i64* %r14.1.reg2mem
  ret i64 %r14.1.reload, !insn.addr !562

; uselistorder directives
  uselistorder i32 %28, { 1, 0 }
  uselistorder i64 %rbx.1.reload, { 1, 0 }
  uselistorder i64 %rbx.0.reload, { 1, 0 }
  uselistorder i128 %3, { 1, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbp.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.1.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbp.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r14.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r14.1.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_3481, { 2, 1, 0 }
}

define i64 @call_pthread_join() local_unnamed_addr {
dec_label_pc_3490:
  %0 = alloca i128
  %r14.1.reg2mem = alloca i64, !insn.addr !563
  %r14.0.reg2mem = alloca i32, !insn.addr !563
  %rbp.1.reg2mem = alloca i64, !insn.addr !563
  %rbx.1.reg2mem = alloca i64, !insn.addr !563
  %rbp.0.reg2mem = alloca i64, !insn.addr !563
  %rbx.0.reg2mem = alloca i64, !insn.addr !563
  %1 = load i128, i128* %0
  %stack_var_-96 = alloca i64, align 8
  %stack_var_-104 = alloca i64, align 8
  %2 = ptrtoint i64* %stack_var_-104 to i64, !insn.addr !564
  %3 = call i128 @__asm_xorps(i128 %1, i128 %1), !insn.addr !565
  %4 = call i64 @__asm_movaps(i128 %3), !insn.addr !566
  store i64 %4, i64* %stack_var_-104, align 8, !insn.addr !566
  %5 = call i64 @__asm_movaps(i128 %3), !insn.addr !567
  store i64 42949672961, i64* %stack_var_-104, align 8, !insn.addr !568
  %6 = add i64 %2, 48
  store i64 %2, i64* %rbx.0.reg2mem, !insn.addr !569
  store i64 0, i64* %rbp.0.reg2mem, !insn.addr !569
  br label %dec_label_pc_34f0, !insn.addr !569

dec_label_pc_34f0:                                ; preds = %dec_label_pc_3509, %dec_label_pc_3490
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %7 = add i64 %rbp.0.reload, %6, !insn.addr !570
  %8 = inttoptr i64 %7 to i32*, !insn.addr !571
  %9 = inttoptr i64 %rbx.0.reload to i64*, !insn.addr !571
  %10 = call i32 @pthread_create(i32* %8, i64* null, i64* (i64*)* inttoptr (i64 13168 to i64* (i64*)*), i64* %9), !insn.addr !571
  %11 = icmp eq i32 %10, 0, !insn.addr !572
  %12 = icmp eq i1 %11, false, !insn.addr !573
  store i64 4294967295, i64* %r14.1.reg2mem, !insn.addr !573
  br i1 %12, label %dec_label_pc_3561, label %dec_label_pc_3509, !insn.addr !573

dec_label_pc_3509:                                ; preds = %dec_label_pc_34f0
  %13 = add nuw nsw i64 %rbp.0.reload, 8, !insn.addr !574
  %14 = add i64 %rbx.0.reload, 12, !insn.addr !575
  %15 = icmp eq i64 %rbp.0.reload, 16, !insn.addr !576
  %16 = icmp eq i1 %15, false, !insn.addr !577
  store i64 %14, i64* %rbx.0.reg2mem, !insn.addr !577
  store i64 %13, i64* %rbp.0.reg2mem, !insn.addr !577
  br i1 %16, label %dec_label_pc_34f0, label %dec_label_pc_3517, !insn.addr !577

dec_label_pc_3517:                                ; preds = %dec_label_pc_3509
  %17 = ptrtoint i64* %stack_var_-96 to i64, !insn.addr !578
  store i64 %17, i64* %rbx.1.reg2mem, !insn.addr !579
  store i64 0, i64* %rbp.1.reg2mem, !insn.addr !579
  store i32 0, i32* %r14.0.reg2mem, !insn.addr !579
  br label %dec_label_pc_3530, !insn.addr !579

dec_label_pc_3530:                                ; preds = %dec_label_pc_3540, %dec_label_pc_3517
  %rbp.1.reload = load i64, i64* %rbp.1.reg2mem
  %18 = mul i64 %rbp.1.reload, 8, !insn.addr !580
  %19 = add i64 %18, %6, !insn.addr !580
  %20 = inttoptr i64 %19 to i64*, !insn.addr !580
  %21 = load i64, i64* %20, align 8, !insn.addr !580
  %22 = trunc i64 %21 to i32, !insn.addr !581
  %23 = call i32 @pthread_join(i32 %22, i64** null), !insn.addr !581
  %24 = icmp eq i32 %23, 0, !insn.addr !582
  %25 = icmp eq i1 %24, false, !insn.addr !583
  store i64 4294967294, i64* %r14.1.reg2mem, !insn.addr !583
  br i1 %25, label %dec_label_pc_3561, label %dec_label_pc_3540, !insn.addr !583

dec_label_pc_3540:                                ; preds = %dec_label_pc_3530
  %r14.0.reload = load i32, i32* %r14.0.reg2mem
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %26 = inttoptr i64 %rbx.1.reload to i32*, !insn.addr !584
  %27 = load i32, i32* %26, align 4, !insn.addr !584
  %28 = add i32 %27, %r14.0.reload, !insn.addr !584
  %29 = add nuw nsw i64 %rbp.1.reload, 1, !insn.addr !585
  %30 = add i64 %rbx.1.reload, 12, !insn.addr !586
  %31 = icmp eq i64 %rbp.1.reload, 2, !insn.addr !587
  %32 = icmp eq i1 %31, false, !insn.addr !588
  store i64 %30, i64* %rbx.1.reg2mem, !insn.addr !588
  store i64 %29, i64* %rbp.1.reg2mem, !insn.addr !588
  store i32 %28, i32* %r14.0.reg2mem, !insn.addr !588
  br i1 %32, label %dec_label_pc_3530, label %dec_label_pc_3561.loopexit.split.loop.exit, !insn.addr !588

dec_label_pc_3561.loopexit.split.loop.exit:       ; preds = %dec_label_pc_3540
  %33 = zext i32 %28 to i64, !insn.addr !584
  store i64 %33, i64* %r14.1.reg2mem
  br label %dec_label_pc_3561

dec_label_pc_3561:                                ; preds = %dec_label_pc_34f0, %dec_label_pc_3530, %dec_label_pc_3561.loopexit.split.loop.exit
  %r14.1.reload = load i64, i64* %r14.1.reg2mem
  ret i64 %r14.1.reload, !insn.addr !589

; uselistorder directives
  uselistorder i32 %28, { 1, 0 }
  uselistorder i64 %rbx.1.reload, { 1, 0 }
  uselistorder i64 %rbx.0.reload, { 1, 0 }
  uselistorder i128 %3, { 1, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbp.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.1.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbp.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r14.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r14.1.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_3561, { 2, 1, 0 }
}

define i64 @thread_increment() local_unnamed_addr {
dec_label_pc_3570:
  %0 = alloca i64
  %rbp.0.in.reg2mem = alloca i32, !insn.addr !590
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp slt i32 %2, 1
  store i32 %2, i32* %rbp.0.in.reg2mem, !insn.addr !591
  br i1 %3, label %dec_label_pc_35a6, label %dec_label_pc_3580, !insn.addr !591

dec_label_pc_3580:                                ; preds = %dec_label_pc_3570, %dec_label_pc_3580
  %rbp.0.in.reload = load i32, i32* %rbp.0.in.reg2mem
  %4 = call i32 @pthread_mutex_lock(i64* nonnull @global_var_71f8), !insn.addr !592
  store i32 ptrtoint (i64* @global_var_7221 to i32), i32* @global_var_7220, align 4, !insn.addr !593
  %5 = call i32 @pthread_mutex_unlock(i64* nonnull @global_var_71f8), !insn.addr !594
  %6 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !595
  %7 = add i32 %rbp.0.in.reload, -1, !insn.addr !596
  %8 = icmp eq i32 %7, 0, !insn.addr !596
  %9 = icmp eq i1 %8, false, !insn.addr !597
  store i32 %7, i32* %rbp.0.in.reg2mem, !insn.addr !597
  br i1 %9, label %dec_label_pc_3580, label %dec_label_pc_35a6, !insn.addr !597

dec_label_pc_35a6:                                ; preds = %dec_label_pc_3580, %dec_label_pc_3570
  ret i64 0, !insn.addr !598

; uselistorder directives
  uselistorder i32* %rbp.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i32 -1, { 1, 0 }
  uselistorder i32 (i32)* @usleep, { 2, 1, 0, 3 }
  uselistorder i64* @global_var_71f8, { 1, 0 }
  uselistorder label %dec_label_pc_3580, { 1, 0 }
}

define i64 @param_mutex_lock(i64 %arg1, i64* %arg2) local_unnamed_addr {
dec_label_pc_35b0:
  %rax.0.reg2mem = alloca i64, !insn.addr !599
  %rbp.0.reg2mem = alloca i64, !insn.addr !599
  %r14.0.reg2mem = alloca i64, !insn.addr !599
  %0 = ptrtoint i64* %arg2 to i64
  %stack_var_-56 = alloca i64, align 8
  %sext = mul i64 %0, 4294967296
  %1 = ashr exact i64 %sext, 32, !insn.addr !600
  store i64 %1, i64* %stack_var_-56, align 8, !insn.addr !600
  %arg1.tr = trunc i64 %arg1 to i32
  %2 = mul i32 %arg1.tr, 8, !insn.addr !601
  %3 = call i64* @malloc(i32 %2), !insn.addr !601
  %4 = icmp eq i64* %3, null, !insn.addr !602
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !603
  br i1 %4, label %dec_label_pc_368d, label %dec_label_pc_35d5, !insn.addr !603

dec_label_pc_35d5:                                ; preds = %dec_label_pc_35b0
  store i32 0, i32* @global_var_7220, align 4, !insn.addr !604
  %5 = icmp slt i32 %arg1.tr, 1
  br i1 %5, label %dec_label_pc_3654, label %dec_label_pc_35ed, !insn.addr !605

dec_label_pc_35ed:                                ; preds = %dec_label_pc_35d5
  %6 = and i64 %arg1, 4294967295, !insn.addr !606
  %7 = ptrtoint i64* %3 to i64, !insn.addr !601
  %8 = mul i64 %6, 8, !insn.addr !607
  store i64 0, i64* %r14.0.reg2mem, !insn.addr !608
  br label %dec_label_pc_3610, !insn.addr !608

dec_label_pc_3610:                                ; preds = %dec_label_pc_3625, %dec_label_pc_35ed
  %r14.0.reload = load i64, i64* %r14.0.reg2mem
  %9 = add i64 %r14.0.reload, %7, !insn.addr !609
  %10 = inttoptr i64 %9 to i32*, !insn.addr !610
  %11 = call i32 @pthread_create(i32* %10, i64* null, i64* (i64*)* inttoptr (i64 13680 to i64* (i64*)*), i64* nonnull %stack_var_-56), !insn.addr !610
  %12 = icmp eq i32 %11, 0, !insn.addr !611
  %13 = icmp eq i1 %12, false, !insn.addr !612
  br i1 %13, label %dec_label_pc_3680, label %dec_label_pc_3625, !insn.addr !612

dec_label_pc_3625:                                ; preds = %dec_label_pc_3610
  %14 = add i64 %r14.0.reload, 8, !insn.addr !613
  %15 = icmp eq i64 %8, %14, !insn.addr !614
  %16 = icmp eq i1 %15, false, !insn.addr !615
  store i64 %14, i64* %r14.0.reg2mem, !insn.addr !615
  store i64 0, i64* %rbp.0.reg2mem, !insn.addr !615
  br i1 %16, label %dec_label_pc_3610, label %dec_label_pc_3640, !insn.addr !615

dec_label_pc_3640:                                ; preds = %dec_label_pc_3625, %dec_label_pc_3640
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %17 = mul i64 %rbp.0.reload, 8, !insn.addr !616
  %18 = add i64 %17, %7, !insn.addr !616
  %19 = inttoptr i64 %18 to i64*, !insn.addr !616
  %20 = load i64, i64* %19, align 8, !insn.addr !616
  %21 = trunc i64 %20 to i32, !insn.addr !617
  %22 = call i32 @pthread_join(i32 %21, i64** null), !insn.addr !617
  %23 = add i64 %rbp.0.reload, 1, !insn.addr !618
  %24 = icmp eq i64 %6, %23, !insn.addr !619
  %25 = icmp eq i1 %24, false, !insn.addr !620
  store i64 %23, i64* %rbp.0.reg2mem, !insn.addr !620
  br i1 %25, label %dec_label_pc_3640, label %dec_label_pc_3654, !insn.addr !620

dec_label_pc_3654:                                ; preds = %dec_label_pc_3640, %dec_label_pc_35d5
  %sext3 = mul i64 %arg1, 4294967296
  call void @free(i64* nonnull %3), !insn.addr !621
  %26 = load i64, i64* %stack_var_-56, align 8, !insn.addr !622
  %27 = ashr exact i64 %sext3, 32, !insn.addr !622
  %sext5 = mul i64 %26, 4294967296
  %28 = ashr exact i64 %sext5, 32, !insn.addr !622
  %29 = mul nsw i64 %28, %27, !insn.addr !622
  %30 = trunc i64 %29 to i32, !insn.addr !622
  %31 = load i32, i32* @global_var_7220, align 4, !insn.addr !623
  %32 = icmp eq i32 %31, %30, !insn.addr !624
  %33 = select i1 %32, i64 42, i64 4294967293, !insn.addr !625
  store i64 %33, i64* %rax.0.reg2mem, !insn.addr !626
  br label %dec_label_pc_368d, !insn.addr !626

dec_label_pc_3680:                                ; preds = %dec_label_pc_3610
  call void @free(i64* nonnull %3), !insn.addr !627
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !628
  br label %dec_label_pc_368d, !insn.addr !628

dec_label_pc_368d:                                ; preds = %dec_label_pc_35b0, %dec_label_pc_3680, %dec_label_pc_3654
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !629

; uselistorder directives
  uselistorder i64 %6, { 1, 0 }
  uselistorder i64* %3, { 0, 1, 3, 2 }
  uselistorder i32 %arg1.tr, { 1, 0 }
  uselistorder i64* %stack_var_-56, { 1, 0, 2 }
  uselistorder i64* %r14.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbp.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32* @global_var_7220, { 2, 1, 0 }
  uselistorder i64 %arg1, { 0, 2, 1 }
  uselistorder label %dec_label_pc_368d, { 1, 2, 0 }
  uselistorder label %dec_label_pc_3640, { 1, 0 }
}

define i64 @call_mutex_lock() local_unnamed_addr {
dec_label_pc_36a0:
  %0 = call i64 @param_mutex_lock(i64 4, i64* bitcast (i32* @global_var_3e8 to i64*)), !insn.addr !630
  ret i64 %0, !insn.addr !631
}

define i64 @consumer_thread() local_unnamed_addr {
dec_label_pc_36c0:
  %0 = call i32 @pthread_mutex_lock(i64* nonnull @global_var_7228), !insn.addr !632
  %1 = load i8, i8* @global_var_7250, align 1, !insn.addr !633
  %2 = icmp eq i8 %1, 0, !insn.addr !633
  %3 = icmp eq i1 %2, false, !insn.addr !634
  br i1 %3, label %dec_label_pc_3704, label %dec_label_pc_36f0, !insn.addr !634

dec_label_pc_36f0:                                ; preds = %dec_label_pc_36c0, %dec_label_pc_36f0
  %4 = call i32 @pthread_cond_wait(i64* nonnull @global_var_7258, i64* nonnull @global_var_7228), !insn.addr !635
  %5 = load i8, i8* @global_var_7250, align 1, !insn.addr !636
  %6 = icmp eq i8 %5, 1, !insn.addr !636
  %7 = icmp eq i1 %6, false, !insn.addr !637
  br i1 %7, label %dec_label_pc_36f0, label %dec_label_pc_3704, !insn.addr !637

dec_label_pc_3704:                                ; preds = %dec_label_pc_36f0, %dec_label_pc_36c0
  %8 = load i8, i8* @global_var_7288, align 1, !insn.addr !638
  %9 = icmp eq i8 %8, 0, !insn.addr !638
  %10 = select i1 %9, i32 0, i32 42, !insn.addr !639
  %11 = call i32 @pthread_mutex_unlock(i64* nonnull @global_var_7228), !insn.addr !640
  %12 = call i64* @malloc(i32 4), !insn.addr !641
  %13 = ptrtoint i64* %12 to i64, !insn.addr !641
  %14 = bitcast i64* %12 to i32*, !insn.addr !642
  store i32 %10, i32* %14, align 4, !insn.addr !642
  ret i64 %13, !insn.addr !643

; uselistorder directives
  uselistorder i32 4, { 1, 2, 3, 0 }
  uselistorder label %dec_label_pc_36f0, { 1, 0 }
}

define i64 @producer_thread() local_unnamed_addr {
dec_label_pc_3740:
  %0 = call i32 @sleep(i32 1), !insn.addr !644
  %1 = call i32 @pthread_mutex_lock(i64* nonnull @global_var_7228), !insn.addr !645
  store i8 1, i8* @global_var_7288, align 1, !insn.addr !646
  store i8 1, i8* @global_var_7250, align 1, !insn.addr !647
  %2 = call i32 @pthread_cond_signal(i64* nonnull @global_var_7258), !insn.addr !648
  %3 = call i32 @pthread_mutex_unlock(i64* nonnull @global_var_7228), !insn.addr !649
  ret i64 0, !insn.addr !650

; uselistorder directives
  uselistorder i32 (i64*)* @pthread_mutex_unlock, { 2, 1, 0, 3 }
  uselistorder i64* @global_var_7258, { 1, 0 }
  uselistorder i8 1, { 1, 2, 0, 3 }
  uselistorder i32 (i64*)* @pthread_mutex_lock, { 2, 1, 0, 3 }
  uselistorder i64* @global_var_7228, { 1, 2, 3, 0, 4 }
}

define i64 @param_condition_variable(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_3780:
  %rbx.0.reg2mem = alloca i64, !insn.addr !651
  %stack_var_-24 = alloca i64, align 8
  %stack_var_-16 = alloca i32, align 4
  %stack_var_-32 = alloca i32, align 4
  store i8 0, i8* @global_var_7250, align 1, !insn.addr !652
  store i8 0, i8* @global_var_7288, align 1, !insn.addr !653
  %0 = call i32 @pthread_create(i32* nonnull %stack_var_-32, i64* null, i64* (i64*)* inttoptr (i64 14016 to i64* (i64*)*), i64* null), !insn.addr !654
  %1 = icmp eq i32 %0, 0, !insn.addr !655
  %2 = icmp eq i1 %1, false, !insn.addr !656
  store i64 4294967295, i64* %rbx.0.reg2mem, !insn.addr !656
  br i1 %2, label %dec_label_pc_3802, label %dec_label_pc_37b1, !insn.addr !656

dec_label_pc_37b1:                                ; preds = %dec_label_pc_3780
  %3 = call i32 @pthread_create(i32* nonnull %stack_var_-16, i64* null, i64* (i64*)* inttoptr (i64 14144 to i64* (i64*)*), i64* null), !insn.addr !657
  %4 = icmp eq i32 %3, 0, !insn.addr !658
  %5 = load i32, i32* %stack_var_-32, align 4
  br i1 %4, label %dec_label_pc_37db, label %dec_label_pc_37ca, !insn.addr !659

dec_label_pc_37ca:                                ; preds = %dec_label_pc_37b1
  %6 = call i32 @pthread_cancel(i32 %5), !insn.addr !660
  store i64 4294967294, i64* %rbx.0.reg2mem, !insn.addr !661
  br label %dec_label_pc_3802, !insn.addr !661

dec_label_pc_37db:                                ; preds = %dec_label_pc_37b1
  %7 = bitcast i64* %stack_var_-24 to i64**, !insn.addr !662
  %8 = call i32 @pthread_join(i32 %5, i64** nonnull %7), !insn.addr !662
  %9 = load i32, i32* %stack_var_-16, align 4, !insn.addr !663
  %10 = call i32 @pthread_join(i32 %9, i64** null), !insn.addr !664
  %11 = load i64, i64* %stack_var_-24, align 8, !insn.addr !665
  %12 = inttoptr i64 %11 to i32*, !insn.addr !666
  %13 = load i32, i32* %12, align 4, !insn.addr !666
  %14 = zext i32 %13 to i64, !insn.addr !666
  %15 = inttoptr i64 %11 to i64*, !insn.addr !667
  call void @free(i64* %15), !insn.addr !667
  store i64 %14, i64* %rbx.0.reg2mem, !insn.addr !667
  br label %dec_label_pc_3802, !insn.addr !667

dec_label_pc_3802:                                ; preds = %dec_label_pc_37db, %dec_label_pc_37ca, %dec_label_pc_3780
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  ret i64 %rbx.0.reload, !insn.addr !668

; uselistorder directives
  uselistorder i64 %11, { 1, 0 }
  uselistorder i32 %5, { 1, 0 }
  uselistorder i64* %stack_var_-24, { 1, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 0, 2, 1, 3 }
  uselistorder i8* @global_var_7288, { 2, 1, 0 }
  uselistorder i8* @global_var_7250, { 3, 2, 1, 0 }
  uselistorder i8 0, { 2, 3, 4, 5, 6, 7, 8, 0, 1 }
}

define i64 @call_condition_variable() local_unnamed_addr {
dec_label_pc_3810:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = call i64 @param_condition_variable(i64 %1, i64 %2, i64 %3, i64 %4), !insn.addr !669
  ret i64 %5, !insn.addr !670

; uselistorder directives
  uselistorder i64* %0, { 3, 2, 1, 0 }
}

define i64 @thread_atomic_increment(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_3820:
  %0 = alloca i64
  %rcx.0.reg2mem = alloca i64, !insn.addr !671
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp slt i32 %2, 1
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !672
  br i1 %3, label %dec_label_pc_384f, label %dec_label_pc_3830, !insn.addr !672

dec_label_pc_3830:                                ; preds = %dec_label_pc_3820, %dec_label_pc_3830
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %4 = load i32, i32* inttoptr (i64 29324 to i32*), align 4, !insn.addr !673
  %5 = add i32 %4, 1, !insn.addr !673
  %6 = trunc i64 %rcx.0.reload to i32
  %7 = add i32 %6, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !674
  %8 = icmp eq i32 %5, %6, !insn.addr !675
  %9 = select i1 %8, i32 %7, i32 %5, !insn.addr !675
  store i32 %9, i32* @global_var_728c, align 4, !insn.addr !675
  %10 = add nuw nsw i64 %rcx.0.reload, 1, !insn.addr !676
  %11 = and i64 %10, 4294967295, !insn.addr !676
  %12 = trunc i64 %10 to i32, !insn.addr !677
  %13 = icmp eq i32 %2, %12, !insn.addr !677
  %14 = icmp eq i1 %13, false, !insn.addr !678
  store i64 %11, i64* %rcx.0.reg2mem, !insn.addr !678
  br i1 %14, label %dec_label_pc_3830, label %dec_label_pc_384f, !insn.addr !678

dec_label_pc_384f:                                ; preds = %dec_label_pc_3830, %dec_label_pc_3820
  ret i64 0, !insn.addr !679

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i64 %rcx.0.reload, { 1, 0 }
  uselistorder i32 %2, { 1, 0 }
  uselistorder i64* %rcx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_3830, { 1, 0 }
}

define i64 @thread_atomic_load_store() local_unnamed_addr {
dec_label_pc_3860:
  %0 = load i32, i32* @global_var_728c, align 4
  %1 = add i32 %0, 100, !insn.addr !680
  store i32 %1, i32* @global_var_728c, align 4, !insn.addr !681
  ret i64 0, !insn.addr !682
}

define i64 @param_atomic_ops(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_3880:
  %rax.0.reg2mem = alloca i64, !insn.addr !683
  %rbp.0.reg2mem = alloca i64, !insn.addr !683
  %r14.0.reg2mem = alloca i64, !insn.addr !683
  %stack_var_-56 = alloca i32, align 4
  %stack_var_-60 = alloca i64, align 8
  %sext = mul i64 %arg2, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !684
  store i64 %0, i64* %stack_var_-60, align 8, !insn.addr !684
  %arg1.tr = trunc i64 %arg1 to i32
  %1 = mul i32 %arg1.tr, 8, !insn.addr !685
  %2 = call i64* @malloc(i32 %1), !insn.addr !685
  %3 = icmp eq i64* %2, null, !insn.addr !686
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !687
  br i1 %3, label %dec_label_pc_3977, label %dec_label_pc_38a9, !insn.addr !687

dec_label_pc_38a9:                                ; preds = %dec_label_pc_3880
  %4 = and i64 %arg1, 4294967295, !insn.addr !688
  %5 = ptrtoint i64* %2 to i64, !insn.addr !685
  store i32 0, i32* @global_var_728c, align 4, !insn.addr !689
  %6 = icmp slt i32 %arg1.tr, 1
  br i1 %6, label %dec_label_pc_38fe, label %dec_label_pc_38bf, !insn.addr !690

dec_label_pc_38bf:                                ; preds = %dec_label_pc_38a9
  %7 = mul i64 %4, 8, !insn.addr !691
  store i64 0, i64* %r14.0.reg2mem, !insn.addr !692
  br label %dec_label_pc_38e0, !insn.addr !692

dec_label_pc_38e0:                                ; preds = %dec_label_pc_38f5, %dec_label_pc_38bf
  %r14.0.reload = load i64, i64* %r14.0.reg2mem
  %8 = add i64 %r14.0.reload, %5, !insn.addr !693
  %9 = inttoptr i64 %8 to i32*, !insn.addr !694
  %10 = call i32 @pthread_create(i32* %9, i64* null, i64* (i64*)* inttoptr (i64 14368 to i64* (i64*)*), i64* nonnull %stack_var_-60), !insn.addr !694
  %11 = icmp eq i32 %10, 0, !insn.addr !695
  %12 = icmp eq i1 %11, false, !insn.addr !696
  br i1 %12, label %dec_label_pc_396a, label %dec_label_pc_38f5, !insn.addr !696

dec_label_pc_38f5:                                ; preds = %dec_label_pc_38e0
  %13 = add i64 %r14.0.reload, 8, !insn.addr !697
  %14 = icmp eq i64 %7, %13, !insn.addr !698
  %15 = icmp eq i1 %14, false, !insn.addr !699
  store i64 %13, i64* %r14.0.reg2mem, !insn.addr !699
  br i1 %15, label %dec_label_pc_38e0, label %dec_label_pc_38fe, !insn.addr !699

dec_label_pc_38fe:                                ; preds = %dec_label_pc_38f5, %dec_label_pc_38a9
  %16 = call i32 @pthread_create(i32* nonnull %stack_var_-56, i64* null, i64* (i64*)* inttoptr (i64 14432 to i64* (i64*)*), i64* null), !insn.addr !700
  %17 = icmp eq i32 %16, 0, !insn.addr !701
  %18 = icmp eq i1 %17, false, !insn.addr !702
  br i1 %18, label %dec_label_pc_3923, label %dec_label_pc_3917, !insn.addr !702

dec_label_pc_3917:                                ; preds = %dec_label_pc_38fe
  %19 = load i32, i32* %stack_var_-56, align 4, !insn.addr !703
  %20 = call i32 @pthread_join(i32 %19, i64** null), !insn.addr !704
  br label %dec_label_pc_3923, !insn.addr !704

dec_label_pc_3923:                                ; preds = %dec_label_pc_3917, %dec_label_pc_38fe
  store i64 0, i64* %rbp.0.reg2mem, !insn.addr !705
  br i1 %6, label %dec_label_pc_3944, label %dec_label_pc_3930, !insn.addr !705

dec_label_pc_3930:                                ; preds = %dec_label_pc_3923, %dec_label_pc_3930
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %21 = mul i64 %rbp.0.reload, 8, !insn.addr !706
  %22 = add i64 %21, %5, !insn.addr !706
  %23 = inttoptr i64 %22 to i64*, !insn.addr !706
  %24 = load i64, i64* %23, align 8, !insn.addr !706
  %25 = trunc i64 %24 to i32, !insn.addr !707
  %26 = call i32 @pthread_join(i32 %25, i64** null), !insn.addr !707
  %27 = add i64 %rbp.0.reload, 1, !insn.addr !708
  %28 = icmp eq i64 %4, %27, !insn.addr !709
  %29 = icmp eq i1 %28, false, !insn.addr !710
  store i64 %27, i64* %rbp.0.reg2mem, !insn.addr !710
  br i1 %29, label %dec_label_pc_3930, label %dec_label_pc_3944, !insn.addr !710

dec_label_pc_3944:                                ; preds = %dec_label_pc_3930, %dec_label_pc_3923
  %30 = load i32, i32* @global_var_728c, align 4, !insn.addr !711
  call void @free(i64* nonnull %2), !insn.addr !712
  %31 = icmp eq i32 %30, 0, !insn.addr !713
  %32 = icmp slt i32 %30, 0, !insn.addr !713
  %33 = icmp eq i1 %32, false, !insn.addr !714
  %34 = icmp eq i1 %31, false, !insn.addr !714
  %35 = icmp eq i1 %33, %34, !insn.addr !714
  %36 = select i1 %35, i64 42, i64 4294967293, !insn.addr !714
  store i64 %36, i64* %rax.0.reg2mem, !insn.addr !715
  br label %dec_label_pc_3977, !insn.addr !715

dec_label_pc_396a:                                ; preds = %dec_label_pc_38e0
  call void @free(i64* nonnull %2), !insn.addr !716
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !717
  br label %dec_label_pc_3977, !insn.addr !717

dec_label_pc_3977:                                ; preds = %dec_label_pc_3880, %dec_label_pc_396a, %dec_label_pc_3944
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !718

; uselistorder directives
  uselistorder i32 %30, { 1, 0 }
  uselistorder i64 %4, { 1, 0 }
  uselistorder i64* %2, { 0, 1, 3, 2 }
  uselistorder i32 %arg1.tr, { 1, 0 }
  uselistorder i64* %stack_var_-60, { 1, 0 }
  uselistorder i64* %r14.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbp.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32* @global_var_728c, { 4, 3, 2, 1, 0 }
  uselistorder i64 4294967296, { 0, 1, 2, 3, 6, 7, 4, 5 }
  uselistorder i64 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_3977, { 1, 2, 0 }
  uselistorder label %dec_label_pc_3930, { 1, 0 }
}

define i64 @call_atomic_ops() local_unnamed_addr {
dec_label_pc_3990:
  %0 = call i64 @param_atomic_ops(i64 4, i64 500), !insn.addr !719
  ret i64 %0, !insn.addr !720
}

define i64 @thread_tls_test(i64 %arg1) local_unnamed_addr {
dec_label_pc_39b0:
  %0 = call i32 @__readfsdword(i64 -48), !insn.addr !721
  %1 = add i32 %0, 50, !insn.addr !722
  call void @__writefsdword(i64 -48, i32 %1), !insn.addr !723
  %2 = call i64 @__readfsqword(i64 0), !insn.addr !724
  %3 = add i64 %2, -32, !insn.addr !725
  %4 = inttoptr i64 %3 to i8*, !insn.addr !726
  %5 = inttoptr i64 %arg1 to i8*, !insn.addr !726
  %6 = call i8* @strncpy(i8* %4, i8* %5, i32 31), !insn.addr !726
  %7 = call i64* @malloc(i32 8), !insn.addr !727
  %8 = ptrtoint i64* %7 to i64, !insn.addr !727
  %9 = bitcast i64* %7 to i32*, !insn.addr !728
  store i32 %0, i32* %9, align 4, !insn.addr !728
  %10 = add i64 %8, 4, !insn.addr !729
  %11 = inttoptr i64 %10 to i32*, !insn.addr !729
  store i32 %1, i32* %11, align 4, !insn.addr !729
  ret i64 %8, !insn.addr !730

; uselistorder directives
  uselistorder i64 %8, { 1, 0 }
}

define i64 @param_thread_local_storage(i64 %arg1) local_unnamed_addr {
dec_label_pc_3a00:
  %rax.0.reg2mem = alloca i64, !insn.addr !731
  %r14.1.reg2mem = alloca i32, !insn.addr !731
  %rbx.4.reg2mem = alloca i32, !insn.addr !731
  %rbx.3.reg2mem = alloca i64, !insn.addr !731
  %r14.0.reg2mem = alloca i32, !insn.addr !731
  %rbp.1.reg2mem = alloca i64, !insn.addr !731
  %rbx.2.reg2mem = alloca i32, !insn.addr !731
  %rbp.0.reg2mem = alloca i64, !insn.addr !731
  %rbx.1.reg2mem = alloca i64, !insn.addr !731
  %rbx.0.reg2mem = alloca i64, !insn.addr !731
  %stack_var_-56 = alloca i64, align 8
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 8, !insn.addr !732
  %1 = call i64* @malloc(i32 %0), !insn.addr !732
  %2 = call i64* @malloc(i32 %0), !insn.addr !733
  %3 = icmp eq i64* %1, null, !insn.addr !734
  %4 = icmp eq i64* %2, null, !insn.addr !735
  %or.cond = or i1 %3, %4
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !736
  br i1 %or.cond, label %dec_label_pc_3b80, label %dec_label_pc_3a44, !insn.addr !736

dec_label_pc_3a44:                                ; preds = %dec_label_pc_3a00
  %5 = and i64 %arg1, 4294967295, !insn.addr !737
  %6 = ptrtoint i64* %1 to i64, !insn.addr !732
  %7 = ptrtoint i64* %2 to i64, !insn.addr !733
  %8 = icmp slt i32 %arg1.tr, 1
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !738
  store i32 0, i32* %rbx.4.reg2mem, !insn.addr !738
  store i32 0, i32* %r14.1.reg2mem, !insn.addr !738
  br i1 %8, label %dec_label_pc_3b4f, label %dec_label_pc_3a60, !insn.addr !738

dec_label_pc_3a60:                                ; preds = %dec_label_pc_3a44, %dec_label_pc_3a60
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %9 = call i64* @malloc(i32 16), !insn.addr !739
  %10 = ptrtoint i64* %9 to i64, !insn.addr !739
  %11 = mul i64 %rbx.0.reload, 8, !insn.addr !740
  %12 = add i64 %11, %7, !insn.addr !740
  %13 = inttoptr i64 %12 to i64*, !insn.addr !740
  store i64 %10, i64* %13, align 8, !insn.addr !740
  %14 = and i64 %rbx.0.reload, 4294967295, !insn.addr !741
  %15 = bitcast i64* %9 to i8*, !insn.addr !742
  %16 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %15, i32 16, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_42fc, i64 0, i64 0), i64 %14), !insn.addr !742
  %17 = add i64 %rbx.0.reload, 1, !insn.addr !743
  %18 = icmp eq i64 %5, %17, !insn.addr !744
  %19 = icmp eq i1 %18, false, !insn.addr !745
  store i64 %17, i64* %rbx.0.reg2mem, !insn.addr !745
  store i64 %6, i64* %rbx.1.reg2mem, !insn.addr !745
  store i64 0, i64* %rbp.0.reg2mem, !insn.addr !745
  br i1 %19, label %dec_label_pc_3a60, label %dec_label_pc_3aa0, !insn.addr !745

dec_label_pc_3aa0:                                ; preds = %dec_label_pc_3a60, %dec_label_pc_3ab5
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %20 = mul i64 %rbp.0.reload, 8, !insn.addr !746
  %21 = add i64 %20, %7, !insn.addr !746
  %22 = inttoptr i64 %21 to i64*, !insn.addr !746
  %23 = load i64, i64* %22, align 8, !insn.addr !746
  %24 = inttoptr i64 %rbx.1.reload to i32*, !insn.addr !747
  %25 = inttoptr i64 %23 to i64*, !insn.addr !747
  %26 = call i32 @pthread_create(i32* %24, i64* null, i64* (i64*)* inttoptr (i64 14768 to i64* (i64*)*), i64* %25), !insn.addr !747
  %27 = icmp eq i32 %26, 0, !insn.addr !748
  %28 = icmp eq i1 %27, false, !insn.addr !749
  br i1 %28, label %dec_label_pc_3b20.preheader, label %dec_label_pc_3ab5, !insn.addr !749

dec_label_pc_3b20.preheader:                      ; preds = %dec_label_pc_3aa0
  %29 = add i64 %7, 8, !insn.addr !750
  store i64 -1, i64* %rbx.3.reg2mem
  br label %dec_label_pc_3b20

dec_label_pc_3ab5:                                ; preds = %dec_label_pc_3aa0
  %30 = add i64 %rbp.0.reload, 1, !insn.addr !751
  %31 = add i64 %rbx.1.reload, 8, !insn.addr !752
  %32 = icmp eq i64 %5, %30, !insn.addr !753
  %33 = icmp eq i1 %32, false, !insn.addr !754
  store i64 %31, i64* %rbx.1.reg2mem, !insn.addr !754
  store i64 %30, i64* %rbp.0.reg2mem, !insn.addr !754
  br i1 %33, label %dec_label_pc_3aa0, label %dec_label_pc_3ae0.preheader, !insn.addr !754

dec_label_pc_3ae0.preheader:                      ; preds = %dec_label_pc_3ab5
  %34 = bitcast i64* %stack_var_-56 to i64**, !insn.addr !755
  store i32 0, i32* %rbx.2.reg2mem
  store i64 0, i64* %rbp.1.reg2mem
  store i32 0, i32* %r14.0.reg2mem
  br label %dec_label_pc_3ae0

dec_label_pc_3ae0:                                ; preds = %dec_label_pc_3ae0.preheader, %dec_label_pc_3ae0
  %r14.0.reload = load i32, i32* %r14.0.reg2mem
  %rbp.1.reload = load i64, i64* %rbp.1.reg2mem
  %rbx.2.reload = load i32, i32* %rbx.2.reg2mem
  %35 = mul i64 %rbp.1.reload, 8, !insn.addr !756
  %36 = add i64 %35, %6, !insn.addr !756
  %37 = inttoptr i64 %36 to i64*, !insn.addr !756
  %38 = load i64, i64* %37, align 8, !insn.addr !756
  %39 = trunc i64 %38 to i32, !insn.addr !755
  %40 = call i32 @pthread_join(i32 %39, i64** nonnull %34), !insn.addr !755
  %41 = load i64, i64* %stack_var_-56, align 8, !insn.addr !757
  %42 = inttoptr i64 %41 to i32*, !insn.addr !758
  %43 = load i32, i32* %42, align 4, !insn.addr !758
  %44 = add i32 %43, %r14.0.reload, !insn.addr !758
  %45 = add i64 %41, 4, !insn.addr !759
  %46 = inttoptr i64 %45 to i32*, !insn.addr !759
  %47 = load i32, i32* %46, align 4, !insn.addr !759
  %48 = add i32 %47, %rbx.2.reload, !insn.addr !759
  %49 = inttoptr i64 %41 to i64*, !insn.addr !760
  call void @free(i64* %49), !insn.addr !760
  %50 = add i64 %35, %7, !insn.addr !761
  %51 = inttoptr i64 %50 to i64*, !insn.addr !761
  %52 = load i64, i64* %51, align 8, !insn.addr !761
  %53 = inttoptr i64 %52 to i64*, !insn.addr !762
  call void @free(i64* %53), !insn.addr !762
  %54 = add i64 %rbp.1.reload, 1, !insn.addr !763
  %55 = icmp eq i64 %5, %54, !insn.addr !764
  %56 = icmp eq i1 %55, false, !insn.addr !765
  store i32 %48, i32* %rbx.2.reg2mem, !insn.addr !765
  store i64 %54, i64* %rbp.1.reg2mem, !insn.addr !765
  store i32 %44, i32* %r14.0.reg2mem, !insn.addr !765
  store i32 %48, i32* %rbx.4.reg2mem, !insn.addr !765
  store i32 %44, i32* %r14.1.reg2mem, !insn.addr !765
  br i1 %56, label %dec_label_pc_3ae0, label %dec_label_pc_3b4f, !insn.addr !765

dec_label_pc_3b20:                                ; preds = %dec_label_pc_3b20.preheader, %dec_label_pc_3b20
  %rbx.3.reload = load i64, i64* %rbx.3.reg2mem
  %57 = mul i64 %rbx.3.reload, 8, !insn.addr !750
  %58 = add i64 %29, %57, !insn.addr !750
  %59 = inttoptr i64 %58 to i64*, !insn.addr !750
  %60 = load i64, i64* %59, align 8, !insn.addr !750
  %61 = inttoptr i64 %60 to i64*, !insn.addr !766
  call void @free(i64* %61), !insn.addr !766
  %62 = add i64 %rbx.3.reload, 1, !insn.addr !767
  %63 = icmp eq i64 %rbp.0.reload, %62, !insn.addr !768
  %64 = icmp eq i1 %63, false, !insn.addr !769
  store i64 %62, i64* %rbx.3.reg2mem, !insn.addr !769
  br i1 %64, label %dec_label_pc_3b20, label %dec_label_pc_3b33, !insn.addr !769

dec_label_pc_3b33:                                ; preds = %dec_label_pc_3b20
  call void @free(i64* %2), !insn.addr !770
  call void @free(i64* %1), !insn.addr !771
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !772
  br label %dec_label_pc_3b80, !insn.addr !772

dec_label_pc_3b4f:                                ; preds = %dec_label_pc_3ae0, %dec_label_pc_3a44
  %r14.1.reload = load i32, i32* %r14.1.reg2mem
  %rbx.4.reload = load i32, i32* %rbx.4.reg2mem
  call void @free(i64* %2), !insn.addr !773
  call void @free(i64* %1), !insn.addr !774
  %65 = mul i32 %arg1.tr, 100, !insn.addr !775
  %66 = mul i32 %arg1.tr, 150, !insn.addr !776
  %67 = icmp eq i32 %66, %rbx.4.reload
  %68 = icmp eq i32 %65, %r14.1.reload
  %69 = icmp eq i1 %67, %68, !insn.addr !777
  %70 = select i1 %69, i64 42, i64 4294967293, !insn.addr !778
  store i64 %70, i64* %rax.0.reg2mem, !insn.addr !778
  br label %dec_label_pc_3b80, !insn.addr !778

dec_label_pc_3b80:                                ; preds = %dec_label_pc_3b4f, %dec_label_pc_3b33, %dec_label_pc_3a00
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !779

; uselistorder directives
  uselistorder i64 %41, { 2, 1, 0 }
  uselistorder i64 %35, { 1, 0 }
  uselistorder i64 %rbx.1.reload, { 1, 0 }
  uselistorder i64 %rbp.0.reload, { 1, 0, 2 }
  uselistorder i64 %7, { 0, 3, 1, 2 }
  uselistorder i64 %6, { 1, 0 }
  uselistorder i64* %2, { 1, 0, 3, 2 }
  uselistorder i64* %1, { 1, 0, 3, 2 }
  uselistorder i32 %arg1.tr, { 1, 2, 3, 0 }
  uselistorder i64* %stack_var_-56, { 1, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbp.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rbx.2.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbp.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r14.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.3.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1, 3 }
  uselistorder i64 4294967293, { 5, 6, 7, 0, 1, 2, 8, 3, 9, 4 }
  uselistorder i64 42, { 2, 3, 4, 0, 5, 6, 7, 1, 8, 9, 11, 10, 12 }
  uselistorder i64 4294967294, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13, 11 }
  uselistorder i64* (i32)* @malloc, { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 11 }
  uselistorder i32 8, { 0, 3, 1, 2 }
  uselistorder i64 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_3b20, { 1, 0 }
  uselistorder label %dec_label_pc_3ae0, { 1, 0 }
  uselistorder label %dec_label_pc_3aa0, { 1, 0 }
  uselistorder label %dec_label_pc_3a60, { 1, 0 }
}

define i64 @call_thread_local_storage() local_unnamed_addr {
dec_label_pc_3b90:
  %0 = call i64 @param_thread_local_storage(i64 4), !insn.addr !780
  ret i64 %0, !insn.addr !781
}

define i64 @test_thread_concurrency(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_3ba0:
  %0 = alloca i128
  %rbx.1.reg2mem = alloca i64, !insn.addr !782
  %rbp.0.reg2mem = alloca i64, !insn.addr !782
  %rbx.0.reg2mem = alloca i64, !insn.addr !782
  %1 = load i128, i128* %0
  %stack_var_-56 = alloca i64, align 8
  %stack_var_-104 = alloca i32, align 4
  %stack_var_-108 = alloca i32, align 4
  %stack_var_-120 = alloca i64, align 8
  %2 = call i32 @puts(i8* bitcast (i8** @global_var_43ee to i8*)), !insn.addr !783
  store i32 7, i32* %stack_var_-108, align 4, !insn.addr !784
  %3 = bitcast i32* %stack_var_-108 to i64*, !insn.addr !785
  %4 = call i32 @pthread_create(i32* nonnull %stack_var_-104, i64* null, i64* (i64*)* inttoptr (i64 12960 to i64* (i64*)*), i64* nonnull %3), !insn.addr !785
  %5 = icmp eq i32 %4, 0, !insn.addr !786
  %6 = icmp eq i1 %5, false, !insn.addr !787
  br i1 %6, label %dec_label_pc_3bfd, label %dec_label_pc_3be1, !insn.addr !787

dec_label_pc_3be1:                                ; preds = %dec_label_pc_3ba0
  %7 = load i32, i32* %stack_var_-104, align 4, !insn.addr !788
  %8 = bitcast i64* %stack_var_-56 to i64**, !insn.addr !789
  %9 = call i32 @pthread_join(i32 %7, i64** nonnull %8), !insn.addr !789
  %10 = load i64, i64* %stack_var_-56, align 8, !insn.addr !790
  %11 = inttoptr i64 %10 to i64*, !insn.addr !791
  call void @free(i64* %11), !insn.addr !791
  br label %dec_label_pc_3bfd, !insn.addr !791

dec_label_pc_3bfd:                                ; preds = %dec_label_pc_3be1, %dec_label_pc_3ba0
  %12 = ptrtoint i64* %stack_var_-120 to i64, !insn.addr !792
  %13 = ptrtoint i32* %stack_var_-104 to i64, !insn.addr !793
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4306 to i8*)), !insn.addr !794
  %15 = call i128 @__asm_xorps(i128 %1, i128 %1), !insn.addr !795
  %16 = call i64 @__asm_movaps(i128 %15), !insn.addr !796
  %17 = trunc i64 %16 to i32, !insn.addr !796
  store i32 %17, i32* %stack_var_-104, align 4, !insn.addr !796
  %18 = call i64 @__asm_movaps(i128 %15), !insn.addr !797
  store i32 1, i32* %stack_var_-104, align 4, !insn.addr !798
  %19 = add i64 %12, 64
  store i64 %13, i64* %rbx.0.reg2mem, !insn.addr !799
  store i64 0, i64* %rbp.0.reg2mem, !insn.addr !799
  br label %dec_label_pc_3c60, !insn.addr !799

dec_label_pc_3c60:                                ; preds = %dec_label_pc_3c79, %dec_label_pc_3bfd
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %20 = add i64 %rbp.0.reload, %19, !insn.addr !800
  %21 = inttoptr i64 %20 to i32*, !insn.addr !801
  %22 = inttoptr i64 %rbx.0.reload to i64*, !insn.addr !801
  %23 = call i32 @pthread_create(i32* %21, i64* null, i64* (i64*)* inttoptr (i64 13168 to i64* (i64*)*), i64* %22), !insn.addr !801
  %24 = icmp eq i32 %23, 0, !insn.addr !802
  %25 = icmp eq i1 %24, false, !insn.addr !803
  br i1 %25, label %dec_label_pc_3cd2, label %dec_label_pc_3c79, !insn.addr !803

dec_label_pc_3c79:                                ; preds = %dec_label_pc_3c60
  %26 = add nuw nsw i64 %rbp.0.reload, 8, !insn.addr !804
  %27 = add i64 %rbx.0.reload, 12, !insn.addr !805
  %28 = icmp eq i64 %rbp.0.reload, 16, !insn.addr !806
  %29 = icmp eq i1 %28, false, !insn.addr !807
  store i64 %27, i64* %rbx.0.reg2mem, !insn.addr !807
  store i64 %26, i64* %rbp.0.reg2mem, !insn.addr !807
  store i64 0, i64* %rbx.1.reg2mem, !insn.addr !807
  br i1 %29, label %dec_label_pc_3c60, label %dec_label_pc_3ca0, !insn.addr !807

dec_label_pc_3ca0:                                ; preds = %dec_label_pc_3c79, %dec_label_pc_3cb0
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %30 = mul i64 %rbx.1.reload, 8, !insn.addr !808
  %31 = add i64 %30, %19, !insn.addr !808
  %32 = inttoptr i64 %31 to i64*, !insn.addr !808
  %33 = load i64, i64* %32, align 8, !insn.addr !808
  %34 = trunc i64 %33 to i32, !insn.addr !809
  %35 = call i32 @pthread_join(i32 %34, i64** null), !insn.addr !809
  %36 = icmp eq i32 %35, 0, !insn.addr !810
  %37 = icmp eq i1 %36, false, !insn.addr !811
  br i1 %37, label %dec_label_pc_3cd2, label %dec_label_pc_3cb0, !insn.addr !811

dec_label_pc_3cb0:                                ; preds = %dec_label_pc_3ca0
  %38 = add nuw nsw i64 %rbx.1.reload, 1, !insn.addr !812
  %39 = icmp eq i64 %rbx.1.reload, 2, !insn.addr !813
  %40 = icmp eq i1 %39, false, !insn.addr !814
  store i64 %38, i64* %rbx.1.reg2mem, !insn.addr !814
  br i1 %40, label %dec_label_pc_3ca0, label %dec_label_pc_3cd2, !insn.addr !814

dec_label_pc_3cd2:                                ; preds = %dec_label_pc_3c60, %dec_label_pc_3ca0, %dec_label_pc_3cb0
  %41 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4322 to i8*)), !insn.addr !815
  %42 = call i64 @param_mutex_lock(i64 4, i64* bitcast (i32* @global_var_3e8 to i64*)), !insn.addr !816
  %43 = and i64 %42, 4294967295, !insn.addr !817
  %44 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_433f to i8*)), !insn.addr !818
  %45 = call i64 @param_condition_variable(i64 ptrtoint (i8** @global_var_433f to i64), i64 %43, i64 13168, i64 %rbx.0.reload), !insn.addr !819
  %46 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_435b to i8*)), !insn.addr !820
  %47 = call i64 @param_atomic_ops(i64 4, i64 500), !insn.addr !821
  %48 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4377 to i8*)), !insn.addr !822
  %49 = call i64 @param_thread_local_storage(i64 4), !insn.addr !823
  %50 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4393 to i8*)), !insn.addr !824
  %51 = sext i32 %50 to i64, !insn.addr !824
  ret i64 %51, !insn.addr !825

; uselistorder directives
  uselistorder i64 %rbx.0.reload, { 2, 1, 0 }
  uselistorder i128 %15, { 1, 0 }
  uselistorder i32* %stack_var_-104, { 3, 2, 0, 1, 4 }
  uselistorder i64* %stack_var_-56, { 1, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbp.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.1.reg2mem, { 2, 0, 1 }
  uselistorder i64 (i64)* @param_thread_local_storage, { 1, 0 }
  uselistorder i64 (i64, i64)* @param_atomic_ops, { 1, 0 }
  uselistorder i64 (i64, i64, i64, i64)* @param_condition_variable, { 1, 0 }
  uselistorder i8** @global_var_433f, { 1, 0 }
  uselistorder i64 4294967295, { 24, 25, 26, 0, 27, 1, 28, 2, 29, 3, 4, 5, 30, 31, 6, 7, 32, 33, 34, 35, 36, 8, 37, 9, 10, 11, 12, 23, 15, 13, 14, 16, 38, 39, 40, 43, 42, 41, 44, 17, 45, 18, 19, 20, 21, 46, 47, 48, 22, 49, 50, 51 }
  uselistorder i64 (i64, i64*)* @param_mutex_lock, { 1, 0 }
  uselistorder i64 4, { 4, 5, 6, 7, 10, 11, 8, 9, 12, 0, 13, 1, 14, 2, 3 }
  uselistorder i64 2, { 1, 2, 3, 0 }
  uselistorder i64 1, { 3, 4, 5, 6, 7, 8, 0, 9, 10, 11, 12, 13, 14, 15, 1, 2 }
  uselistorder i64 12, { 1, 2, 3, 4, 5, 0 }
  uselistorder i64 8, { 0, 11, 1, 2, 13, 12, 3, 4, 5, 14, 6, 7, 15, 8, 9, 16, 10, 17, 18, 19 }
  uselistorder i64 13168, { 1, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 26, 27, 2, 8, 23, 22, 25, 24, 7, 11, 16, 15, 21, 20, 19, 6, 9, 14, 10, 12, 0, 1, 13, 18, 17, 5, 4, 3, 28 }
  uselistorder void (i64*)* @free, { 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 18 }
  uselistorder i32 (i32, i64**)* @pthread_join, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder i1 false, { 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 2, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 3, 45, 4, 46, 47, 48, 49, 0, 50, 51, 1, 52, 53, 54, 55, 56, 57, 58, 59, 60 }
  uselistorder i32 0, { 28, 29, 30, 2, 3, 31, 0, 1, 32, 33, 34, 35, 9, 36, 37, 10, 38, 39, 40, 41, 4, 42, 43, 5, 44, 45, 46, 47, 11, 49, 48, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 12, 13, 61, 62, 63, 64, 65, 66, 67, 14, 15, 16, 17, 69, 68, 70, 6, 18, 71, 19, 73, 72, 20, 74, 21, 76, 75, 77, 78, 7, 79, 8, 80, 22, 81, 82, 23, 24, 25, 26, 27 }
  uselistorder i32 (i32*, i64*, i64* (i64*)*, i64*)* @pthread_create, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder i64* null, { 1, 2, 3, 0, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22 }
  uselistorder i32 7, { 1, 2, 0 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
  uselistorder label %dec_label_pc_3cd2, { 2, 1, 0 }
  uselistorder label %dec_label_pc_3ca0, { 1, 0 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_3d60:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i8** %argv to i64
  %3 = call i64 @test_standard_library_functions(), !insn.addr !826
  %4 = call i64 @test_system_calls(i64 %argc, i64 %2, i64 %1), !insn.addr !827
  %5 = call i64 @test_thread_concurrency(i64 %argc, i64 %2), !insn.addr !828
  ret i64 0, !insn.addr !829

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 0, { 24, 0, 1, 2, 3, 34, 35, 4, 95, 5, 6, 25, 26, 7, 27, 8, 9, 28, 10, 11, 12, 13, 29, 36, 96, 97, 98, 99, 100, 122, 123, 124, 125, 14, 15, 16, 17, 18, 19, 126, 20, 21, 22, 127, 101, 102, 103, 104, 105, 106, 30, 31, 107, 108, 109, 110, 111, 112, 113, 114, 115, 32, 116, 128, 33, 23, 129, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 117, 118, 119, 120, 121 }
  uselistorder i64 %argc, { 1, 0 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_3d74:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !830

; uselistorder directives
  uselistorder i32 1, { 23, 22, 92, 121, 120, 107, 119, 29, 28, 27, 6, 93, 122, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 94, 109, 108, 42, 41, 40, 146, 95, 43, 21, 20, 110, 111, 123, 44, 96, 97, 124, 47, 46, 45, 98, 48, 19, 126, 125, 54, 53, 52, 51, 50, 49, 5, 128, 127, 60, 59, 58, 57, 56, 55, 4, 106, 130, 112, 129, 61, 114, 113, 131, 62, 18, 115, 147, 17, 99, 67, 66, 65, 64, 63, 68, 16, 100, 133, 101, 134, 132, 69, 3, 136, 116, 135, 70, 26, 117, 71, 118, 72, 137, 15, 138, 14, 73, 74, 140, 139, 77, 76, 75, 2, 78, 25, 13, 1, 81, 80, 79, 84, 83, 82, 87, 86, 85, 102, 103, 141, 88, 0, 89, 90, 12, 24, 11, 143, 142, 10, 104, 9, 105, 144, 8, 7, 145, 91 }
}

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

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

declare i64 @__asm_hlt() local_unnamed_addr

declare i128 @__asm_movdqa(i128) local_unnamed_addr

declare i128 @__asm_movdqu(i128) local_unnamed_addr

declare i128 @__asm_pcmpeqb(i128, i128) local_unnamed_addr

declare i128 @__asm_pand(i128, i128) local_unnamed_addr

declare i32 @__asm_pmovmskb(i128) local_unnamed_addr

declare i128 @__asm_xorps(i128, i128) local_unnamed_addr

declare i64 @__asm_movaps(i128) local_unnamed_addr

declare i32 @__readfsdword(i64) local_unnamed_addr

declare void @__writefsdword(i64, i32) local_unnamed_addr

declare i64 @__readfsqword(i64) local_unnamed_addr

!0 = !{i64 8192}
!1 = !{i64 8200}
!2 = !{i64 8207}
!3 = !{i64 8210}
!4 = !{i64 8212}
!5 = !{i64 8218}
!6 = !{i64 8240}
!7 = !{i64 8256}
!8 = !{i64 8272}
!9 = !{i64 8288}
!10 = !{i64 8304}
!11 = !{i64 8320}
!12 = !{i64 8336}
!13 = !{i64 8352}
!14 = !{i64 8368}
!15 = !{i64 8384}
!16 = !{i64 8400}
!17 = !{i64 8416}
!18 = !{i64 8432}
!19 = !{i64 8448}
!20 = !{i64 8464}
!21 = !{i64 8480}
!22 = !{i64 8496}
!23 = !{i64 8512}
!24 = !{i64 8528}
!25 = !{i64 8544}
!26 = !{i64 8560}
!27 = !{i64 8576}
!28 = !{i64 8592}
!29 = !{i64 8608}
!30 = !{i64 8624}
!31 = !{i64 8640}
!32 = !{i64 8656}
!33 = !{i64 8672}
!34 = !{i64 8688}
!35 = !{i64 8704}
!36 = !{i64 8720}
!37 = !{i64 8736}
!38 = !{i64 8752}
!39 = !{i64 8768}
!40 = !{i64 8784}
!41 = !{i64 8800}
!42 = !{i64 8816}
!43 = !{i64 8832}
!44 = !{i64 8848}
!45 = !{i64 8864}
!46 = !{i64 8880}
!47 = !{i64 8896}
!48 = !{i64 8912}
!49 = !{i64 8928}
!50 = !{i64 8944}
!51 = !{i64 8960}
!52 = !{i64 8976}
!53 = !{i64 8992}
!54 = !{i64 9008}
!55 = !{i64 9024}
!56 = !{i64 9040}
!57 = !{i64 9056}
!58 = !{i64 9072}
!59 = !{i64 9088}
!60 = !{i64 9104}
!61 = !{i64 9120}
!62 = !{i64 9136}
!63 = !{i64 9183}
!64 = !{i64 9189}
!65 = !{i64 9240}
!66 = !{i64 9304}
!67 = !{i64 9316}
!68 = !{i64 9323}
!69 = !{i64 9326}
!70 = !{i64 9337}
!71 = !{i64 9339}
!72 = !{i64 9346}
!73 = !{i64 9351}
!74 = !{i64 9356}
!75 = !{i64 9364}
!76 = !{i64 9368}
!77 = !{i64 9380}
!78 = !{i64 9396}
!79 = !{i64 9404}
!80 = !{i64 9410}
!81 = !{i64 9438}
!82 = !{i64 9450}
!83 = !{i64 9459}
!84 = !{i64 9473}
!85 = !{i64 9480}
!86 = !{i64 9482}
!87 = !{i64 9494}
!88 = !{i64 9498}
!89 = !{i64 9506}
!90 = !{i64 9521}
!91 = !{i64 9527}
!92 = !{i64 9541}
!93 = !{i64 9556}
!94 = !{i64 9561}
!95 = !{i64 9564}
!96 = !{i64 9573}
!97 = !{i64 9585}
!98 = !{i64 9592}
!99 = !{i64 9594}
!100 = !{i64 9606}
!101 = !{i64 9610}
!102 = !{i64 9621}
!103 = !{i64 9636}
!104 = !{i64 9647}
!105 = !{i64 9653}
!106 = !{i64 9686}
!107 = !{i64 9692}
!108 = !{i64 9714}
!109 = !{i64 9719}
!110 = !{i64 9722}
!111 = !{i64 9726}
!112 = !{i64 9734}
!113 = !{i64 9738}
!114 = !{i64 9744}
!115 = !{i64 9769}
!116 = !{i64 9777}
!117 = !{i64 9781}
!118 = !{i64 9789}
!119 = !{i64 9793}
!120 = !{i64 9808}
!121 = !{i64 9818}
!122 = !{i64 9823}
!123 = !{i64 9826}
!124 = !{i64 9834}
!125 = !{i64 9839}
!126 = !{i64 9844}
!127 = !{i64 9849}
!128 = !{i64 9864}
!129 = !{i64 9872}
!130 = !{i64 9890}
!131 = !{i64 9895}
!132 = !{i64 9898}
!133 = !{i64 9906}
!134 = !{i64 9916}
!135 = !{i64 9921}
!136 = !{i64 9924}
!137 = !{i64 9927}
!138 = !{i64 9943}
!139 = !{i64 9952}
!140 = !{i64 9973}
!141 = !{i64 9978}
!142 = !{i64 9981}
!143 = !{i64 10010}
!144 = !{i64 10015}
!145 = !{i64 10019}
!146 = !{i64 9959}
!147 = !{i64 10027}
!148 = !{i64 10046}
!149 = !{i64 10054}
!150 = !{i64 10061}
!151 = !{i64 10069}
!152 = !{i64 10079}
!153 = !{i64 10082}
!154 = !{i64 10084}
!155 = !{i64 10089}
!156 = !{i64 10095}
!157 = !{i64 10103}
!158 = !{i64 10111}
!159 = !{i64 10115}
!160 = !{i64 10119}
!161 = !{i64 10134}
!162 = !{i64 10137}
!163 = !{i64 10149}
!164 = !{i64 10154}
!165 = !{i64 10170}
!166 = !{i64 10184}
!167 = !{i64 10190}
!168 = !{i64 10192}
!169 = !{i64 10204}
!170 = !{i64 10209}
!171 = !{i64 10212}
!172 = !{i64 10214}
!173 = !{i64 10217}
!174 = !{i64 10224}
!175 = !{i64 10227}
!176 = !{i64 10231}
!177 = !{i64 10234}
!178 = !{i64 10237}
!179 = !{i64 10239}
!180 = !{i64 10243}
!181 = !{i64 10248}
!182 = !{i64 10253}
!183 = !{i64 10263}
!184 = !{i64 10272}
!185 = !{i64 10278}
!186 = !{i64 10283}
!187 = !{i64 10286}
!188 = !{i64 10304}
!189 = !{i64 10306}
!190 = !{i64 10310}
!191 = !{i64 10314}
!192 = !{i64 10318}
!193 = !{i64 10320}
!194 = !{i64 10323}
!195 = !{i64 10328}
!196 = !{i64 10333}
!197 = !{i64 10343}
!198 = !{i64 10352}
!199 = !{i64 10369}
!200 = !{i64 10374}
!201 = !{i64 10377}
!202 = !{i64 10384}
!203 = !{i64 10389}
!204 = !{i64 10391}
!205 = !{i64 10395}
!206 = !{i64 10398}
!207 = !{i64 10406}
!208 = !{i64 10416}
!209 = !{i64 10432}
!210 = !{i64 10428}
!211 = !{i64 10440}
!212 = !{i64 10448}
!213 = !{i64 10450}
!214 = !{i64 10453}
!215 = !{i64 10471}
!216 = !{i64 10475}
!217 = !{i64 10490}
!218 = !{i64 10497}
!219 = !{i64 10499}
!220 = !{i64 10505}
!221 = !{i64 10513}
!222 = !{i64 10520}
!223 = !{i64 10522}
!224 = !{i64 10528}
!225 = !{i64 10530}
!226 = !{i64 10536}
!227 = !{i64 10549}
!228 = !{i64 10560}
!229 = !{i64 10575}
!230 = !{i64 10590}
!231 = !{i64 10605}
!232 = !{i64 10621}
!233 = !{i64 10637}
!234 = !{i64 10656}
!235 = !{i64 10675}
!236 = !{i64 10700}
!237 = !{i64 10726}
!238 = !{i64 10742}
!239 = !{i64 10773}
!240 = !{i64 10802}
!241 = !{i64 10821}
!242 = !{i64 10831}
!243 = !{i64 10834}
!244 = !{i64 10842}
!245 = !{i64 10852}
!246 = !{i64 10860}
!247 = !{i64 10874}
!248 = !{i64 10886}
!249 = !{i64 10902}
!250 = !{i64 10912}
!251 = !{i64 10917}
!252 = !{i64 10920}
!253 = !{i64 10927}
!254 = !{i64 10928}
!255 = !{i64 10930}
!256 = !{i64 10934}
!257 = !{i64 10938}
!258 = !{i64 10942}
!259 = !{i64 10954}
!260 = !{i64 10564}
!261 = !{i64 10973}
!262 = !{i64 10992}
!263 = !{i64 10988}
!264 = !{i64 11000}
!265 = !{i64 11008}
!266 = !{i64 11010}
!267 = !{i64 11013}
!268 = !{i64 11044}
!269 = !{i64 11063}
!270 = !{i64 11076}
!271 = !{i64 11088}
!272 = !{i64 11105}
!273 = !{i64 11113}
!274 = !{i64 11115}
!275 = !{i64 11126}
!276 = !{i64 11131}
!277 = !{i64 11133}
!278 = !{i64 11138}
!279 = !{i64 11140}
!280 = !{i64 11142}
!281 = !{i64 11150}
!282 = !{i64 11152}
!283 = !{i64 11173}
!284 = !{i64 11181}
!285 = !{i64 11183}
!286 = !{i64 11194}
!287 = !{i64 11199}
!288 = !{i64 11201}
!289 = !{i64 11206}
!290 = !{i64 11208}
!291 = !{i64 11210}
!292 = !{i64 11213}
!293 = !{i64 11216}
!294 = !{i64 11224}
!295 = !{i64 11244}
!296 = !{i64 11249}
!297 = !{i64 11265}
!298 = !{i64 11268}
!299 = !{i64 11275}
!300 = !{i64 11285}
!301 = !{i64 11315}
!302 = !{i64 11320}
!303 = !{i64 11336}
!304 = !{i64 11339}
!305 = !{i64 11346}
!306 = !{i64 11356}
!307 = !{i64 11360}
!308 = !{i64 11370}
!309 = !{i64 11375}
!310 = !{i64 11377}
!311 = !{i64 11379}
!312 = !{i64 11390}
!313 = !{i64 11395}
!314 = !{i64 11397}
!315 = !{i64 11399}
!316 = !{i64 11408}
!317 = !{i64 11411}
!318 = !{i64 11413}
!319 = !{i64 11416}
!320 = !{i64 11437}
!321 = !{i64 11451}
!322 = !{i64 11461}
!323 = !{i64 11472}
!324 = !{i64 11473}
!325 = !{i64 11478}
!326 = !{i64 11480}
!327 = !{i64 11482}
!328 = !{i64 11493}
!329 = !{i64 11498}
!330 = !{i64 11500}
!331 = !{i64 11502}
!332 = !{i64 11511}
!333 = !{i64 11514}
!334 = !{i64 11519}
!335 = !{i64 11541}
!336 = !{i64 11558}
!337 = !{i64 11568}
!338 = !{i64 11584}
!339 = !{i64 11589}
!340 = !{i64 11594}
!341 = !{i64 11599}
!342 = !{i64 11601}
!343 = !{i64 11603}
!344 = !{i64 11608}
!345 = !{i64 11610}
!346 = !{i64 11612}
!347 = !{i64 11585}
!348 = !{i64 11618}
!349 = !{i64 11623}
!350 = !{i64 11637}
!351 = !{i64 11645}
!352 = !{i64 11650}
!353 = !{i64 11654}
!354 = !{i64 11661}
!355 = !{i64 11666}
!356 = !{i64 11679}
!357 = !{i64 11682}
!358 = !{i64 11701}
!359 = !{i64 11702}
!360 = !{i64 11706}
!361 = !{i64 11727}
!362 = !{i64 11736}
!363 = !{i64 11743}
!364 = !{i64 11761}
!365 = !{i64 11767}
!366 = !{i64 11776}
!367 = !{i64 11794}
!368 = !{i64 11799}
!369 = !{i64 11801}
!370 = !{i64 11805}
!371 = !{i64 11836}
!372 = !{i64 11841}
!373 = !{i64 11843}
!374 = !{i64 11845}
!375 = !{i64 11848}
!376 = !{i64 11853}
!377 = !{i64 11874}
!378 = !{i64 11879}
!379 = !{i64 11881}
!380 = !{i64 11890}
!381 = !{i64 11899}
!382 = !{i64 11904}
!383 = !{i64 11916}
!384 = !{i64 11919}
!385 = !{i64 11930}
!386 = !{i64 11940}
!387 = !{i64 11944}
!388 = !{i64 11949}
!389 = !{i64 11960}
!390 = !{i64 11969}
!391 = !{i64 11975}
!392 = !{i64 11984}
!393 = !{i64 12007}
!394 = !{i64 12017}
!395 = !{i64 12019}
!396 = !{i64 12027}
!397 = !{i64 12044}
!398 = !{i64 12049}
!399 = !{i64 12051}
!400 = !{i64 12065}
!401 = !{i64 12070}
!402 = !{i64 12072}
!403 = !{i64 12083}
!404 = !{i64 12088}
!405 = !{i64 12092}
!406 = !{i64 12107}
!407 = !{i64 12121}
!408 = !{i64 12128}
!409 = !{i64 12139}
!410 = !{i64 12151}
!411 = !{i64 12156}
!412 = !{i64 12176}
!413 = !{i64 12193}
!414 = !{i64 12198}
!415 = !{i64 12210}
!416 = !{i64 12214}
!417 = !{i64 12224}
!418 = !{i64 12237}
!419 = !{i64 12242}
!420 = !{i64 12246}
!421 = !{i64 12264}
!422 = !{i64 12269}
!423 = !{i64 12273}
!424 = !{i64 12279}
!425 = !{i64 12294}
!426 = !{i64 12299}
!427 = !{i64 12306}
!428 = !{i64 12325}
!429 = !{i64 12330}
!430 = !{i64 12337}
!431 = !{i64 12339}
!432 = !{i64 12342}
!433 = !{i64 12345}
!434 = !{i64 12347}
!435 = !{i64 12349}
!436 = !{i64 12356}
!437 = !{i64 12362}
!438 = !{i64 12373}
!439 = !{i64 12376}
!440 = !{i64 12378}
!441 = !{i64 12393}
!442 = !{i64 12398}
!443 = !{i64 12405}
!444 = !{i64 12421}
!445 = !{i64 12426}
!446 = !{i64 12433}
!447 = !{i64 12435}
!448 = !{i64 12438}
!449 = !{i64 12441}
!450 = !{i64 12443}
!451 = !{i64 12450}
!452 = !{i64 12457}
!453 = !{i64 12459}
!454 = !{i64 12465}
!455 = !{i64 12468}
!456 = !{i64 12477}
!457 = !{i64 12489}
!458 = !{i64 12494}
!459 = !{i64 12500}
!460 = !{i64 12528}
!461 = !{i64 12538}
!462 = !{i64 12544}
!463 = !{i64 12561}
!464 = !{i64 12567}
!465 = !{i64 12592}
!466 = !{i64 12615}
!467 = !{i64 12623}
!468 = !{i64 12625}
!469 = !{i64 12636}
!470 = !{i64 12641}
!471 = !{i64 12643}
!472 = !{i64 12650}
!473 = !{i64 12669}
!474 = !{i64 12686}
!475 = !{i64 12729}
!476 = !{i64 12734}
!477 = !{i64 12744}
!478 = !{i64 12746}
!479 = !{i64 12748}
!480 = !{i64 12763}
!481 = !{i64 12811}
!482 = !{i64 12816}
!483 = !{i64 12828}
!484 = !{i64 12832}
!485 = !{i64 12837}
!486 = !{i64 12853}
!487 = !{i64 12858}
!488 = !{i64 12879}
!489 = !{i64 12884}
!490 = !{i64 12900}
!491 = !{i64 12914}
!492 = !{i64 12931}
!493 = !{i64 12941}
!494 = !{i64 12963}
!495 = !{i64 12971}
!496 = !{i64 12976}
!497 = !{i64 12979}
!498 = !{i64 12992}
!499 = !{i64 12997}
!500 = !{i64 13020}
!501 = !{i64 13030}
!502 = !{i64 13032}
!503 = !{i64 13034}
!504 = !{i64 13044}
!505 = !{i64 13049}
!506 = !{i64 13054}
!507 = !{i64 13056}
!508 = !{i64 13068}
!509 = !{i64 13072}
!510 = !{i64 13077}
!511 = !{i64 13104}
!512 = !{i64 13114}
!513 = !{i64 13116}
!514 = !{i64 13118}
!515 = !{i64 13128}
!516 = !{i64 13133}
!517 = !{i64 13138}
!518 = !{i64 13140}
!519 = !{i64 13152}
!520 = !{i64 13168}
!521 = !{i64 13175}
!522 = !{i64 13177}
!523 = !{i64 13184}
!524 = !{i64 13182}
!525 = !{i64 13188}
!526 = !{i64 13190}
!527 = !{i64 13195}
!528 = !{i64 13199}
!529 = !{i64 13205}
!530 = !{i64 13202}
!531 = !{i64 13208}
!532 = !{i64 13213}
!533 = !{i64 13211}
!534 = !{i64 13215}
!535 = !{i64 13220}
!536 = !{i64 13232}
!537 = !{i64 13236}
!538 = !{i64 13240}
!539 = !{i64 13243}
!540 = !{i64 13247}
!541 = !{i64 13270}
!542 = !{i64 13327}
!543 = !{i64 13332}
!544 = !{i64 13344}
!545 = !{i64 13349}
!546 = !{i64 13351}
!547 = !{i64 13353}
!548 = !{i64 13357}
!549 = !{i64 13361}
!550 = !{i64 13365}
!551 = !{i64 13367}
!552 = !{i64 13387}
!553 = !{i64 13392}
!554 = !{i64 13399}
!555 = !{i64 13404}
!556 = !{i64 13406}
!557 = !{i64 13408}
!558 = !{i64 13411}
!559 = !{i64 13415}
!560 = !{i64 13419}
!561 = !{i64 13423}
!562 = !{i64 13452}
!563 = !{i64 13456}
!564 = !{i64 13460}
!565 = !{i64 13464}
!566 = !{i64 13467}
!567 = !{i64 13471}
!568 = !{i64 13494}
!569 = !{i64 13551}
!570 = !{i64 13556}
!571 = !{i64 13568}
!572 = !{i64 13573}
!573 = !{i64 13575}
!574 = !{i64 13577}
!575 = !{i64 13581}
!576 = !{i64 13585}
!577 = !{i64 13589}
!578 = !{i64 13591}
!579 = !{i64 13611}
!580 = !{i64 13616}
!581 = !{i64 13623}
!582 = !{i64 13628}
!583 = !{i64 13630}
!584 = !{i64 13632}
!585 = !{i64 13635}
!586 = !{i64 13639}
!587 = !{i64 13643}
!588 = !{i64 13647}
!589 = !{i64 13676}
!590 = !{i64 13680}
!591 = !{i64 13687}
!592 = !{i64 13699}
!593 = !{i64 13704}
!594 = !{i64 13714}
!595 = !{i64 13724}
!596 = !{i64 13729}
!597 = !{i64 13732}
!598 = !{i64 13742}
!599 = !{i64 13744}
!600 = !{i64 13757}
!601 = !{i64 13767}
!602 = !{i64 13772}
!603 = !{i64 13775}
!604 = !{i64 13784}
!605 = !{i64 13803}
!606 = !{i64 13755}
!607 = !{i64 13805}
!608 = !{i64 13836}
!609 = !{i64 13840}
!610 = !{i64 13852}
!611 = !{i64 13857}
!612 = !{i64 13859}
!613 = !{i64 13861}
!614 = !{i64 13865}
!615 = !{i64 13868}
!616 = !{i64 13888}
!617 = !{i64 13894}
!618 = !{i64 13899}
!619 = !{i64 13903}
!620 = !{i64 13906}
!621 = !{i64 13911}
!622 = !{i64 13916}
!623 = !{i64 13921}
!624 = !{i64 13927}
!625 = !{i64 13940}
!626 = !{i64 13943}
!627 = !{i64 13955}
!628 = !{i64 13960}
!629 = !{i64 13979}
!630 = !{i64 13995}
!631 = !{i64 14001}
!632 = !{i64 14027}
!633 = !{i64 14032}
!634 = !{i64 14039}
!635 = !{i64 14070}
!636 = !{i64 14075}
!637 = !{i64 14082}
!638 = !{i64 14086}
!639 = !{i64 14098}
!640 = !{i64 14108}
!641 = !{i64 14118}
!642 = !{i64 14123}
!643 = !{i64 14132}
!644 = !{i64 14150}
!645 = !{i64 14165}
!646 = !{i64 14170}
!647 = !{i64 14177}
!648 = !{i64 14191}
!649 = !{i64 14199}
!650 = !{i64 14207}
!651 = !{i64 14208}
!652 = !{i64 14213}
!653 = !{i64 14220}
!654 = !{i64 14243}
!655 = !{i64 14253}
!656 = !{i64 14255}
!657 = !{i64 14273}
!658 = !{i64 14278}
!659 = !{i64 14280}
!660 = !{i64 14287}
!661 = !{i64 14297}
!662 = !{i64 14309}
!663 = !{i64 14314}
!664 = !{i64 14321}
!665 = !{i64 14326}
!666 = !{i64 14331}
!667 = !{i64 14333}
!668 = !{i64 14345}
!669 = !{i64 14353}
!670 = !{i64 14359}
!671 = !{i64 14368}
!672 = !{i64 14372}
!673 = !{i64 14384}
!674 = !{i64 14392}
!675 = !{i64 14400}
!676 = !{i64 14408}
!677 = !{i64 14411}
!678 = !{i64 14413}
!679 = !{i64 14417}
!680 = !{i64 14438}
!681 = !{i64 14441}
!682 = !{i64 14449}
!683 = !{i64 14464}
!684 = !{i64 14480}
!685 = !{i64 14491}
!686 = !{i64 14496}
!687 = !{i64 14499}
!688 = !{i64 14478}
!689 = !{i64 14510}
!690 = !{i64 14525}
!691 = !{i64 14527}
!692 = !{i64 14550}
!693 = !{i64 14560}
!694 = !{i64 14572}
!695 = !{i64 14577}
!696 = !{i64 14579}
!697 = !{i64 14581}
!698 = !{i64 14585}
!699 = !{i64 14588}
!700 = !{i64 14606}
!701 = !{i64 14611}
!702 = !{i64 14613}
!703 = !{i64 14615}
!704 = !{i64 14622}
!705 = !{i64 14632}
!706 = !{i64 14640}
!707 = !{i64 14646}
!708 = !{i64 14651}
!709 = !{i64 14655}
!710 = !{i64 14658}
!711 = !{i64 14660}
!712 = !{i64 14669}
!713 = !{i64 14674}
!714 = !{i64 14686}
!715 = !{i64 14689}
!716 = !{i64 14701}
!717 = !{i64 14706}
!718 = !{i64 14725}
!719 = !{i64 14747}
!720 = !{i64 14753}
!721 = !{i64 14774}
!722 = !{i64 14782}
!723 = !{i64 14785}
!724 = !{i64 14793}
!725 = !{i64 14802}
!726 = !{i64 14814}
!727 = !{i64 14824}
!728 = !{i64 14829}
!729 = !{i64 14831}
!730 = !{i64 14840}
!731 = !{i64 14848}
!732 = !{i64 14874}
!733 = !{i64 14885}
!734 = !{i64 14898}
!735 = !{i64 14907}
!736 = !{i64 14901}
!737 = !{i64 14862}
!738 = !{i64 14921}
!739 = !{i64 14949}
!740 = !{i64 14954}
!741 = !{i64 14969}
!742 = !{i64 14973}
!743 = !{i64 14978}
!744 = !{i64 14982}
!745 = !{i64 14985}
!746 = !{i64 15008}
!747 = !{i64 15020}
!748 = !{i64 15025}
!749 = !{i64 15027}
!750 = !{i64 15136}
!751 = !{i64 15029}
!752 = !{i64 15033}
!753 = !{i64 15037}
!754 = !{i64 15040}
!755 = !{i64 15081}
!756 = !{i64 15072}
!757 = !{i64 15086}
!758 = !{i64 15091}
!759 = !{i64 15094}
!760 = !{i64 15097}
!761 = !{i64 15102}
!762 = !{i64 15106}
!763 = !{i64 15111}
!764 = !{i64 15115}
!765 = !{i64 15118}
!766 = !{i64 15141}
!767 = !{i64 15146}
!768 = !{i64 15150}
!769 = !{i64 15153}
!770 = !{i64 15158}
!771 = !{i64 15166}
!772 = !{i64 15176}
!773 = !{i64 15186}
!774 = !{i64 15194}
!775 = !{i64 15203}
!776 = !{i64 15209}
!777 = !{i64 15217}
!778 = !{i64 15229}
!779 = !{i64 15246}
!780 = !{i64 15254}
!781 = !{i64 15260}
!782 = !{i64 15264}
!783 = !{i64 15279}
!784 = !{i64 15284}
!785 = !{i64 15314}
!786 = !{i64 15325}
!787 = !{i64 15327}
!788 = !{i64 15329}
!789 = !{i64 15339}
!790 = !{i64 15344}
!791 = !{i64 15352}
!792 = !{i64 15268}
!793 = !{i64 15299}
!794 = !{i64 15371}
!795 = !{i64 15376}
!796 = !{i64 15379}
!797 = !{i64 15384}
!798 = !{i64 15407}
!799 = !{i64 15450}
!800 = !{i64 15460}
!801 = !{i64 15472}
!802 = !{i64 15477}
!803 = !{i64 15479}
!804 = !{i64 15481}
!805 = !{i64 15485}
!806 = !{i64 15489}
!807 = !{i64 15493}
!808 = !{i64 15520}
!809 = !{i64 15527}
!810 = !{i64 15532}
!811 = !{i64 15534}
!812 = !{i64 15540}
!813 = !{i64 15548}
!814 = !{i64 15552}
!815 = !{i64 15582}
!816 = !{i64 15597}
!817 = !{i64 15609}
!818 = !{i64 15613}
!819 = !{i64 15618}
!820 = !{i64 15634}
!821 = !{i64 15649}
!822 = !{i64 15665}
!823 = !{i64 15675}
!824 = !{i64 15691}
!825 = !{i64 15704}
!826 = !{i64 15713}
!827 = !{i64 15718}
!828 = !{i64 15723}
!829 = !{i64 15731}
!830 = !{i64 15744}
