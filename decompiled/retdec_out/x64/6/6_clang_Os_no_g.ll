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
  %3 = call i32 @__libc_start_main(i64 13988, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !63
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
dec_label_pc_24ac:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %arg1 to i8*, !insn.addr !78
  %3 = inttoptr i64 %1 to i8*, !insn.addr !78
  %4 = call i8* @strcpy(i8* %2, i8* %3), !insn.addr !78
  %5 = call i32 @strlen(i8* %2), !insn.addr !79
  %6 = sext i32 %5 to i64, !insn.addr !79
  ret i64 %6, !insn.addr !79
}

define i64 @call_strcpy() local_unnamed_addr {
dec_label_pc_24be:
  %stack_var_-40 = alloca i64, align 8
  store i64 7091283129715680584, i64* %stack_var_-40, align 8, !insn.addr !80
  %0 = bitcast i64* %stack_var_-40 to i8*, !insn.addr !81
  %1 = call i32 @strlen(i8* nonnull %0), !insn.addr !81
  %2 = sext i32 %1 to i64, !insn.addr !81
  ret i64 %2, !insn.addr !82
}

define i64 @param_strcmp(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_24e0:
  %0 = inttoptr i64 %arg1 to i8*, !insn.addr !83
  %1 = inttoptr i64 %arg2 to i8*, !insn.addr !83
  %2 = call i32 @strcmp(i8* %0, i8* %1), !insn.addr !83
  %3 = icmp eq i32 %2, 0, !insn.addr !84
  %4 = icmp eq i1 %3, false, !insn.addr !85
  %5 = icmp slt i32 %2, 1
  %.op = select i1 %4, i64 4294967295, i64 0
  %6 = select i1 %5, i64 %.op, i64 1, !insn.addr !86
  ret i64 %6, !insn.addr !87
}

define i64 @call_strcmp() local_unnamed_addr {
dec_label_pc_24fb:
  ret i64 0, !insn.addr !88
}

define i64 @param_strlen() local_unnamed_addr {
dec_label_pc_24fe:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i8*, !insn.addr !89
  %3 = call i32 @strlen(i8* %2), !insn.addr !89
  %4 = sext i32 %3 to i64, !insn.addr !89
  ret i64 %4, !insn.addr !89
}

define i64 @call_strlen() local_unnamed_addr {
dec_label_pc_2503:
  ret i64 12, !insn.addr !90
}

define i64 @param_memcpy(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2509:
  %0 = inttoptr i64 %arg1 to i64*, !insn.addr !91
  %1 = inttoptr i64 %arg2 to i64*, !insn.addr !91
  %2 = trunc i64 %arg3 to i32, !insn.addr !91
  %3 = call i64* @memcpy(i64* %0, i64* %1, i32 %2), !insn.addr !91
  %4 = and i64 %arg3, 4294967295, !insn.addr !92
  ret i64 %4, !insn.addr !93
}

define i64 @call_memcpy() local_unnamed_addr {
dec_label_pc_2516:
  ret i64 90, !insn.addr !94
}

define i64 @param_memcmp(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_251c:
  %0 = inttoptr i64 %arg1 to i64*, !insn.addr !95
  %1 = inttoptr i64 %arg2 to i64*, !insn.addr !95
  %2 = trunc i64 %arg3 to i32, !insn.addr !95
  %3 = call i32 @memcmp(i64* %0, i64* %1, i32 %2), !insn.addr !95
  %4 = icmp eq i32 %3, 0, !insn.addr !96
  %5 = icmp eq i1 %4, false, !insn.addr !97
  %6 = icmp slt i32 %3, 1
  %.op = select i1 %5, i64 4294967295, i64 0
  %7 = select i1 %6, i64 %.op, i64 1, !insn.addr !98
  ret i64 %7, !insn.addr !99
}

define i64 @call_memcmp() local_unnamed_addr {
dec_label_pc_2537:
  ret i64 4294967295, !insn.addr !100
}

define i64 @param_printf(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_253d:
  %0 = and i64 %arg1, 4294967295, !insn.addr !101
  %1 = inttoptr i64 %arg2 to i8*, !insn.addr !102
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_4054, i64 0, i64 0), i64 %0, i8* %1), !insn.addr !102
  %3 = sext i32 %2 to i64, !insn.addr !102
  ret i64 %3, !insn.addr !102
}

define i64 @call_printf() local_unnamed_addr {
dec_label_pc_2550:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_4054, i64 0, i64 0), i64 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_4069, i64 0, i64 0)), !insn.addr !103
  %1 = sext i32 %0 to i64, !insn.addr !103
  ret i64 %1, !insn.addr !103
}

define i64 @param_scanf() local_unnamed_addr {
dec_label_pc_256a:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_-20 = alloca i64, align 8
  %stack_var_-24 = alloca i64, align 8
  %2 = inttoptr i64 %1 to i8*, !insn.addr !104
  %3 = call i32 (i8*, i8*, ...) @sscanf(i8* %2, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_406e, i64 0, i64 0), i64* nonnull %stack_var_-20, i64* nonnull %stack_var_-24), !insn.addr !104
  %4 = load i64, i64* %stack_var_-24, align 8, !insn.addr !105
  %5 = load i64, i64* %stack_var_-20, align 8, !insn.addr !106
  %6 = add i64 %5, %4, !insn.addr !106
  %7 = icmp eq i32 %3, 2, !insn.addr !107
  %.op = and i64 %6, 4294967295
  %8 = select i1 %7, i64 %.op, i64 4294967295, !insn.addr !108
  ret i64 %8, !insn.addr !109

; uselistorder directives
  uselistorder i64* %stack_var_-24, { 1, 0 }
  uselistorder i64* %stack_var_-20, { 1, 0 }
}

define i64 @call_scanf() local_unnamed_addr {
dec_label_pc_25a2:
  %0 = alloca i64
  %1 = alloca i32
  %2 = load i64, i64* %0
  %3 = load i32, i32* %1
  %4 = trunc i64 %2 to i32, !insn.addr !110
  %5 = call i32 (i8*, i8*, ...) @sscanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_4074, i64 0, i64 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_406e, i64 0, i64 0)), !insn.addr !111
  %6 = add i32 %3, %4, !insn.addr !112
  %7 = icmp eq i32 %5, 2, !insn.addr !113
  %8 = select i1 %7, i32 %6, i32 -1, !insn.addr !114
  %9 = zext i32 %8 to i64, !insn.addr !114
  ret i64 %9, !insn.addr !115
}

define i64 @param_fopen_fclose() local_unnamed_addr {
dec_label_pc_25e1:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !116
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i8*, !insn.addr !117
  %3 = call %_IO_FILE* @fopen(i8* %2, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_407c, i64 0, i64 0)), !insn.addr !117
  %4 = icmp eq %_IO_FILE* %3, null, !insn.addr !118
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !119
  br i1 %4, label %dec_label_pc_2613, label %dec_label_pc_25f5, !insn.addr !119

dec_label_pc_25f5:                                ; preds = %dec_label_pc_25e1
  %5 = call i32 @fileno(%_IO_FILE* nonnull %3), !insn.addr !120
  %6 = call i32 @fclose(%_IO_FILE* nonnull %3), !insn.addr !121
  %7 = zext i32 %5 to i64, !insn.addr !122
  store i64 %7, i64* %storemerge.reg2mem, !insn.addr !123
  br label %dec_label_pc_2613, !insn.addr !123

dec_label_pc_2613:                                ; preds = %dec_label_pc_25e1, %dec_label_pc_25f5
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !124

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2613, { 1, 0 }
}

define i64 @call_fopen_fclose() local_unnamed_addr {
dec_label_pc_261a:
  %0 = call i64 @param_fopen_fclose(), !insn.addr !125
  %1 = trunc i64 %0 to i32, !insn.addr !126
  %2 = ashr i32 %1, 31, !insn.addr !126
  %3 = or i32 %2, 42, !insn.addr !127
  %4 = zext i32 %3 to i64, !insn.addr !127
  ret i64 %4, !insn.addr !128
}

define i64 @param_fread_fwrite(i8* %arg1) local_unnamed_addr {
dec_label_pc_262f:
  %0 = alloca i128
  %rax.0.reg2mem = alloca i64, !insn.addr !129
  %1 = load i128, i128* %0
  %stack_var_-56 = alloca i64, align 8
  %2 = call %_IO_FILE* @fopen(i8* %arg1, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_409d, i64 0, i64 0)), !insn.addr !130
  %3 = icmp eq %_IO_FILE* %2, null, !insn.addr !131
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !132
  br i1 %3, label %dec_label_pc_26fc, label %dec_label_pc_2650, !insn.addr !132

dec_label_pc_2650:                                ; preds = %dec_label_pc_262f
  %4 = call i32 @fwrite(i64* bitcast ([19 x i8]* @global_var_408a to i64*), i32 1, i32 18, %_IO_FILE* nonnull %2), !insn.addr !133
  %5 = icmp eq i32 %4, 18, !insn.addr !134
  %6 = icmp eq i1 %5, false, !insn.addr !135
  br i1 %6, label %dec_label_pc_26ef, label %dec_label_pc_2672, !insn.addr !135

dec_label_pc_2672:                                ; preds = %dec_label_pc_2650
  %7 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !136
  call void @rewind(%_IO_FILE* nonnull %2), !insn.addr !137
  %8 = call i32 @fread(i64* nonnull %stack_var_-56, i32 1, i32 18, %_IO_FILE* nonnull %2), !insn.addr !138
  %9 = sext i32 %8 to i64, !insn.addr !138
  %10 = add i64 %9, %7, !insn.addr !139
  %11 = inttoptr i64 %10 to i8*, !insn.addr !139
  store i8 0, i8* %11, align 1, !insn.addr !139
  %12 = call i32 @fclose(%_IO_FILE* nonnull %2), !insn.addr !140
  %13 = call i32 @unlink(i8* %arg1), !insn.addr !141
  %14 = icmp eq i32 %8, 18, !insn.addr !142
  %15 = icmp eq i1 %14, false, !insn.addr !143
  store i64 4294967293, i64* %rax.0.reg2mem, !insn.addr !143
  br i1 %15, label %dec_label_pc_26fc, label %dec_label_pc_26b1, !insn.addr !143

dec_label_pc_26b1:                                ; preds = %dec_label_pc_2672
  %16 = load i64, i64* %stack_var_-56, align 8, !insn.addr !144
  %17 = sext i64 %16 to i128, !insn.addr !144
  %18 = call i128 @__asm_movdqa(i128 %17), !insn.addr !144
  %19 = call i128 @__asm_movdqu(i128 %1), !insn.addr !145
  %20 = call i128 @__asm_pcmpeqb(i128 %19, i128 506013261007881974645593289756927298), !insn.addr !146
  %21 = call i128 @__asm_pcmpeqb(i128 %18, i128 129288850040804651372364194803442673986), !insn.addr !147
  %22 = call i128 @__asm_pand(i128 %21, i128 %20), !insn.addr !148
  %23 = call i32 @__asm_pmovmskb(i128 %22), !insn.addr !149
  %24 = icmp eq i32 %23, 65535, !insn.addr !150
  %25 = select i1 %24, i64 42, i64 4294967293, !insn.addr !151
  store i64 %25, i64* %rax.0.reg2mem, !insn.addr !152
  br label %dec_label_pc_26fc, !insn.addr !152

dec_label_pc_26ef:                                ; preds = %dec_label_pc_2650
  %26 = call i32 @fclose(%_IO_FILE* nonnull %2), !insn.addr !153
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !154
  br label %dec_label_pc_26fc, !insn.addr !154

dec_label_pc_26fc:                                ; preds = %dec_label_pc_262f, %dec_label_pc_26ef, %dec_label_pc_26b1, %dec_label_pc_2672
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !155

; uselistorder directives
  uselistorder %_IO_FILE* %2, { 3, 0, 1, 2, 4, 5 }
  uselistorder i64* %stack_var_-56, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 0, 4, 2, 3, 1 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 2, 1, 0, 3 }
  uselistorder i32 18, { 0, 2, 1, 3 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 1, 0, 2 }
  uselistorder label %dec_label_pc_26fc, { 1, 2, 3, 0 }
}

define i64 @call_fread_fwrite() local_unnamed_addr {
dec_label_pc_2706:
  %0 = call i64 @param_fread_fwrite(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_40a0, i64 0, i64 0)), !insn.addr !156
  ret i64 %0, !insn.addr !156
}

define i64 @param_malloc_free(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_2712:
  %rbp.1.reg2mem = alloca i64, !insn.addr !157
  %rbp.0.reg2mem = alloca i64, !insn.addr !157
  %rdx.0.reg2mem = alloca i64, !insn.addr !157
  %rcx.0.reg2mem = alloca i64, !insn.addr !157
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !158
  %1 = call i64* @malloc(i32 %0), !insn.addr !158
  %2 = icmp eq i64* %1, null, !insn.addr !159
  store i64 4294967295, i64* %rbp.1.reg2mem, !insn.addr !160
  br i1 %2, label %dec_label_pc_2758, label %dec_label_pc_272a, !insn.addr !160

dec_label_pc_272a:                                ; preds = %dec_label_pc_2712
  %3 = ptrtoint i64* %1 to i64, !insn.addr !158
  %4 = icmp eq i64 %arg1, 0, !insn.addr !161
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !162
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !162
  br i1 %4, label %dec_label_pc_274c, label %dec_label_pc_2733, !insn.addr !162

dec_label_pc_2733:                                ; preds = %dec_label_pc_272a, %dec_label_pc_2733
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %5 = trunc i64 %rcx.0.reload to i32, !insn.addr !163
  %6 = mul i64 %rdx.0.reload, 4, !insn.addr !163
  %7 = add i64 %6, %3, !insn.addr !163
  %8 = inttoptr i64 %7 to i32*, !insn.addr !163
  store i32 %5, i32* %8, align 4, !insn.addr !163
  %9 = add i64 %rdx.0.reload, 1, !insn.addr !164
  %10 = add nuw nsw i64 %rcx.0.reload, 10, !insn.addr !165
  %11 = and i64 %10, 4294967295, !insn.addr !165
  %12 = icmp eq i64 %9, %arg1, !insn.addr !166
  %13 = icmp eq i1 %12, false, !insn.addr !167
  store i64 %11, i64* %rcx.0.reg2mem, !insn.addr !167
  store i64 %9, i64* %rdx.0.reg2mem, !insn.addr !167
  br i1 %13, label %dec_label_pc_2733, label %dec_label_pc_2741, !insn.addr !167

dec_label_pc_2741:                                ; preds = %dec_label_pc_2733
  %14 = bitcast i64* %1 to i32*, !insn.addr !168
  %15 = load i32, i32* %14, align 4, !insn.addr !168
  %16 = zext i32 %15 to i64, !insn.addr !168
  store i64 %16, i64* %rbp.0.reg2mem, !insn.addr !169
  br label %dec_label_pc_274c, !insn.addr !169

dec_label_pc_274c:                                ; preds = %dec_label_pc_2741, %dec_label_pc_272a
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %17 = trunc i64 %rbp.0.reload to i32, !insn.addr !170
  %18 = mul i64 %arg1, 4, !insn.addr !170
  %19 = add i64 %18, -4, !insn.addr !170
  %20 = add i64 %19, %3, !insn.addr !170
  %21 = inttoptr i64 %20 to i32*, !insn.addr !170
  %22 = load i32, i32* %21, align 4, !insn.addr !170
  %23 = add i32 %22, %17, !insn.addr !170
  %24 = zext i32 %23 to i64, !insn.addr !170
  call void @free(i64* nonnull %1), !insn.addr !171
  store i64 %24, i64* %rbp.1.reg2mem, !insn.addr !171
  br label %dec_label_pc_2758, !insn.addr !171

dec_label_pc_2758:                                ; preds = %dec_label_pc_2712, %dec_label_pc_274c
  %rbp.1.reload = load i64, i64* %rbp.1.reg2mem
  ret i64 %rbp.1.reload, !insn.addr !172

; uselistorder directives
  uselistorder i64 %rcx.0.reload, { 1, 0 }
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64* %1, { 0, 1, 3, 2 }
  uselistorder i64* %rcx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbp.1.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2758, { 1, 0 }
  uselistorder label %dec_label_pc_2733, { 1, 0 }
}

define i64 @call_malloc_free() local_unnamed_addr {
dec_label_pc_2761:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = call i64 @param_malloc_free(i64 10, i64 %1, i64 %2, i64 %3), !insn.addr !173
  ret i64 %4, !insn.addr !173

; uselistorder directives
  uselistorder i64* %0, { 2, 1, 0 }
}

define i64 @param_memset(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_276b:
  %rbp.1.reg2mem = alloca i64, !insn.addr !174
  %rbp.0.reg2mem = alloca i64, !insn.addr !174
  %rax.0.reg2mem = alloca i64, !insn.addr !174
  %0 = inttoptr i64 %arg1 to i64*, !insn.addr !175
  %1 = trunc i64 %arg2 to i32, !insn.addr !175
  %2 = call i64* @memset(i64* %0, i32 0, i32 %1), !insn.addr !175
  %3 = icmp eq i64 %arg2, 0, !insn.addr !176
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !177
  store i64 0, i64* %rbp.0.reg2mem, !insn.addr !177
  store i64 0, i64* %rbp.1.reg2mem, !insn.addr !177
  br i1 %3, label %dec_label_pc_2799, label %dec_label_pc_278a, !insn.addr !177

dec_label_pc_278a:                                ; preds = %dec_label_pc_276b, %dec_label_pc_278a
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %4 = add i64 %rax.0.reload, %arg1, !insn.addr !178
  %5 = inttoptr i64 %4 to i8*, !insn.addr !178
  %6 = load i8, i8* %5, align 1, !insn.addr !178
  %7 = zext i8 %6 to i64, !insn.addr !179
  %8 = add nuw nsw i64 %rbp.0.reload, %7, !insn.addr !179
  %9 = and i64 %8, 4294967295, !insn.addr !179
  %10 = add i64 %rax.0.reload, 1, !insn.addr !180
  %11 = icmp eq i64 %10, %arg2, !insn.addr !181
  %12 = icmp eq i1 %11, false, !insn.addr !182
  store i64 %10, i64* %rax.0.reg2mem, !insn.addr !182
  store i64 %9, i64* %rbp.0.reg2mem, !insn.addr !182
  store i64 %9, i64* %rbp.1.reg2mem, !insn.addr !182
  br i1 %12, label %dec_label_pc_278a, label %dec_label_pc_2799, !insn.addr !182

dec_label_pc_2799:                                ; preds = %dec_label_pc_278a, %dec_label_pc_276b
  %rbp.1.reload = load i64, i64* %rbp.1.reg2mem
  ret i64 %rbp.1.reload, !insn.addr !183

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbp.0.reg2mem, { 2, 0, 1 }
  uselistorder i64 %arg2, { 0, 2, 1 }
  uselistorder label %dec_label_pc_278a, { 1, 0 }
}

define i64 @call_memset() local_unnamed_addr {
dec_label_pc_27a0:
  ret i64 0, !insn.addr !184
}

define i64 @param_strchr_strstr(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_27a3:
  %0 = inttoptr i64 %arg1 to i8*, !insn.addr !185
  %1 = trunc i64 %arg2 to i32, !insn.addr !185
  %2 = call i8* @strchr(i8* %0, i32 %1), !insn.addr !185
  %3 = ptrtoint i8* %2 to i64, !insn.addr !185
  %4 = sub i64 %3, %arg1, !insn.addr !186
  %5 = icmp eq i8* %2, null, !insn.addr !187
  %6 = select i1 %5, i64 4294967295, i64 %4, !insn.addr !188
  %7 = inttoptr i64 %arg3 to i8*, !insn.addr !189
  %8 = call i8* @strstr(i8* %0, i8* %7), !insn.addr !189
  %9 = ptrtoint i8* %8 to i64, !insn.addr !189
  %10 = sub i64 %9, %arg1, !insn.addr !190
  %11 = icmp eq i8* %8, null, !insn.addr !191
  %12 = select i1 %11, i64 4294967295, i64 %10, !insn.addr !192
  %13 = add i64 %12, %6, !insn.addr !193
  %14 = and i64 %13, 4294967295, !insn.addr !193
  ret i64 %14, !insn.addr !194

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @call_strchr_strstr() local_unnamed_addr {
dec_label_pc_27dc:
  ret i64 15, !insn.addr !195
}

define i64 @test_standard_library_functions() local_unnamed_addr {
dec_label_pc_27e2:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-56 = alloca i32, align 4
  %2 = call i32 @puts(i8* bitcast (i8** @global_var_43af to i8*)), !insn.addr !196
  store i32 1819043144, i32* %stack_var_-56, align 4, !insn.addr !197
  %3 = bitcast i32* %stack_var_-56 to i8*, !insn.addr !198
  %4 = call i32 @strlen(i8* nonnull %3), !insn.addr !198
  %5 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_40b7 to i8*)), !insn.addr !199
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_40d2 to i8*)), !insn.addr !200
  %7 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_40ed to i8*)), !insn.addr !201
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4109 to i8*)), !insn.addr !202
  %9 = call i64 @call_memcmp(), !insn.addr !203
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4125 to i8*)), !insn.addr !204
  %11 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_4054, i64 0, i64 0), i64 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_4069, i64 0, i64 0)), !insn.addr !205
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4141 to i8*)), !insn.addr !206
  %13 = ptrtoint i32* %stack_var_-56 to i64, !insn.addr !207
  %14 = call i32 (i8*, i8*, ...) @sscanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_4074, i64 0, i64 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_406e, i64 0, i64 0)), !insn.addr !208
  %15 = load i32, i32* %stack_var_-56, align 4, !insn.addr !209
  %16 = add i32 %15, %1, !insn.addr !209
  %17 = zext i32 %16 to i64, !insn.addr !209
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_415d to i8*)), !insn.addr !210
  %19 = call i64 @param_fopen_fclose(), !insn.addr !211
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_417a to i8*)), !insn.addr !212
  %21 = call i64 @param_fread_fwrite(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_40a0, i64 0, i64 0)), !insn.addr !213
  %22 = and i64 %21, 4294967295, !insn.addr !214
  %23 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4196 to i8*)), !insn.addr !215
  %24 = call i64 @param_malloc_free(i64 10, i64 %22, i64 %13, i64 %17), !insn.addr !216
  %25 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_41b2 to i8*)), !insn.addr !217
  %26 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_41ce to i8*)), !insn.addr !218
  %27 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_41e9 to i8*)), !insn.addr !219
  %28 = sext i32 %27 to i64, !insn.addr !219
  ret i64 %28, !insn.addr !220

; uselistorder directives
  uselistorder i32* %stack_var_-56, { 2, 1, 3, 0 }
  uselistorder i64 (i64, i64, i64, i64)* @param_malloc_free, { 1, 0 }
  uselistorder i64 10, { 1, 2, 0 }
  uselistorder i64 (i8*)* @param_fread_fwrite, { 1, 0 }
  uselistorder i64 ()* @param_fopen_fclose, { 1, 0 }
  uselistorder i32 (i8*, i8*, ...)* @sscanf, { 2, 1, 0, 3 }
}

define i64 @param_linux_syscall(i8* %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_295b:
  %rbx.0.reg2mem = alloca i64, !insn.addr !221
  %0 = call i32 (i32, ...) @syscall(i32 2), !insn.addr !222
  %1 = icmp slt i32 %0, 0, !insn.addr !223
  br i1 %1, label %dec_label_pc_2988, label %dec_label_pc_2978, !insn.addr !224

dec_label_pc_2978:                                ; preds = %dec_label_pc_295b
  %2 = sext i32 %0 to i64, !insn.addr !222
  %3 = call i32 (i32, ...) @syscall(i32 3), !insn.addr !225
  store i64 %2, i64* %rbx.0.reg2mem, !insn.addr !226
  br label %dec_label_pc_2991, !insn.addr !226

dec_label_pc_2988:                                ; preds = %dec_label_pc_295b
  %4 = call i32* @__errno_location(), !insn.addr !227
  %5 = load i32, i32* %4, align 4, !insn.addr !228
  %6 = sub i32 0, %5, !insn.addr !228
  %7 = zext i32 %6 to i64, !insn.addr !229
  store i64 %7, i64* %rbx.0.reg2mem, !insn.addr !229
  br label %dec_label_pc_2991, !insn.addr !229

dec_label_pc_2991:                                ; preds = %dec_label_pc_2988, %dec_label_pc_2978
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %8 = and i64 %rbx.0.reload, 4294967295, !insn.addr !230
  ret i64 %8, !insn.addr !231

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 (i32, ...)* @syscall, { 1, 0, 2 }
}

define i64 @call_linux_syscall() local_unnamed_addr {
dec_label_pc_299a:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = call i64 @param_linux_syscall(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_407e, i64 0, i64 0), i64 %1, i64 %2), !insn.addr !232
  %4 = trunc i64 %3 to i32, !insn.addr !233
  %5 = ashr i32 %4, 31, !insn.addr !233
  %6 = or i32 %5, 42, !insn.addr !234
  %7 = zext i32 %6 to i64, !insn.addr !234
  ret i64 %7, !insn.addr !235

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @param_win32_api() local_unnamed_addr {
dec_label_pc_29af:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %stack_var_-152 = alloca i64, align 8
  %3 = inttoptr i64 %1 to i8*, !insn.addr !236
  %4 = bitcast i64* %stack_var_-152 to %stat*, !insn.addr !236
  %5 = call i32 @stat(i8* %3, %stat* nonnull %4), !insn.addr !236
  %6 = icmp eq i64 %2, 0, !insn.addr !237
  %7 = icmp slt i64 %2, 0, !insn.addr !237
  %8 = icmp eq i1 %7, false, !insn.addr !238
  %9 = icmp eq i1 %6, false, !insn.addr !238
  %10 = icmp eq i1 %8, %9, !insn.addr !238
  %11 = icmp slt i32 %5, 0, !insn.addr !239
  %12 = icmp eq i1 %11, false, !insn.addr !240
  %13 = select i1 %10, i64 42, i64 4294967294, !insn.addr !238
  %14 = select i1 %12, i64 %13, i64 4294967295, !insn.addr !240
  ret i64 %14, !insn.addr !241

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @call_win32_api() local_unnamed_addr {
dec_label_pc_29e7:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_-152 = alloca i64, align 8
  %2 = bitcast i64* %stack_var_-152 to %stat*, !insn.addr !242
  %3 = call i32 @stat(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_407e, i64 0, i64 0), %stat* nonnull %2), !insn.addr !242
  %4 = icmp eq i64 %1, 0, !insn.addr !243
  %5 = icmp slt i64 %1, 0, !insn.addr !243
  %6 = icmp eq i1 %5, false, !insn.addr !244
  %7 = icmp eq i1 %4, false, !insn.addr !244
  %8 = icmp eq i1 %6, %7, !insn.addr !244
  %9 = icmp slt i32 %3, 0, !insn.addr !245
  %10 = icmp eq i1 %9, false, !insn.addr !246
  %11 = select i1 %8, i64 42, i64 4294967294, !insn.addr !244
  %12 = select i1 %10, i64 %11, i64 4294967295, !insn.addr !246
  ret i64 %12, !insn.addr !247
}

define i64 @param_fork_exec(i8* %arg1, i32 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_2a26:
  %rax.0.reg2mem = alloca i64, !insn.addr !248
  %stack_var_-20 = alloca i32, align 4
  %0 = call i32 @fork(), !insn.addr !249
  %1 = icmp slt i32 %0, 0, !insn.addr !250
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !251
  br i1 %1, label %dec_label_pc_2a6c, label %dec_label_pc_2a39, !insn.addr !251

dec_label_pc_2a39:                                ; preds = %dec_label_pc_2a26
  %2 = icmp eq i32 %0, 0, !insn.addr !250
  br i1 %2, label %dec_label_pc_2a74, label %dec_label_pc_2a3b, !insn.addr !252

dec_label_pc_2a3b:                                ; preds = %dec_label_pc_2a39
  %3 = call i32 @waitpid(i32 %0, i32* nonnull %stack_var_-20, i32 0), !insn.addr !253
  %4 = icmp slt i32 %3, 0, !insn.addr !254
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !255
  br i1 %4, label %dec_label_pc_2a6c, label %dec_label_pc_2a4d, !insn.addr !255

dec_label_pc_2a4d:                                ; preds = %dec_label_pc_2a3b
  %5 = load i32, i32* %stack_var_-20, align 4, !insn.addr !256
  %6 = urem i32 %5, 128
  %7 = icmp eq i32 %6, 0, !insn.addr !257
  %8 = icmp eq i1 %7, false, !insn.addr !258
  store i64 4294967293, i64* %rax.0.reg2mem, !insn.addr !258
  br i1 %8, label %dec_label_pc_2a6c, label %dec_label_pc_2a5b, !insn.addr !258

dec_label_pc_2a5b:                                ; preds = %dec_label_pc_2a4d
  %9 = udiv i32 %5, 256
  %10 = urem i32 %9, 256
  %11 = zext i32 %10 to i64, !insn.addr !259
  store i64 %11, i64* %rax.0.reg2mem, !insn.addr !260
  br label %dec_label_pc_2a6c, !insn.addr !260

dec_label_pc_2a6c:                                ; preds = %dec_label_pc_2a3b, %dec_label_pc_2a26, %dec_label_pc_2a5b, %dec_label_pc_2a4d
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !261

dec_label_pc_2a74:                                ; preds = %dec_label_pc_2a39
  %12 = call i32 (i8*, i8*, ...) @execl(i8* %arg1, i8* %arg1), !insn.addr !262
  call void @_exit(i32 127), !insn.addr !263
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !263

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 3, 4, 1, 2 }
  uselistorder i32 256, { 1, 0 }
  uselistorder label %dec_label_pc_2a6c, { 2, 3, 0, 1 }
}

define i64 @call_fork_exec(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2a90:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = call i64 @param_fork_exec(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_4205, i64 0, i64 0), i32 0, i64 %1, i64 %2), !insn.addr !264
  %4 = trunc i64 %3 to i32, !insn.addr !265
  %5 = icmp eq i32 %4, 0, !insn.addr !265
  %6 = select i1 %5, i64 42, i64 4294967295, !insn.addr !266
  ret i64 %6, !insn.addr !267

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @param_pipe_communication() local_unnamed_addr {
dec_label_pc_2aa8:
  %0 = alloca i32
  %rax.0.reg2mem = alloca i64, !insn.addr !268
  %stack_var_-40 = alloca i64, align 8
  %1 = load i32, i32* %0
  %stack_var_-48 = alloca i32, align 4
  %stack_var_-56 = alloca i64, align 8
  %2 = ptrtoint i32* %stack_var_-48 to i64, !insn.addr !269
  %3 = trunc i64 %2 to i32, !insn.addr !270
  %4 = insertvalue [2 x i32] undef, i32 %3, 0, !insn.addr !270
  %5 = call i32 @pipe([2 x i32] %4), !insn.addr !270
  %6 = icmp slt i32 %5, 0, !insn.addr !271
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !272
  br i1 %6, label %dec_label_pc_2b18, label %dec_label_pc_2abb, !insn.addr !272

dec_label_pc_2abb:                                ; preds = %dec_label_pc_2aa8
  %7 = call i32 @fork(), !insn.addr !273
  %8 = icmp slt i32 %7, 0, !insn.addr !274
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !275
  br i1 %8, label %dec_label_pc_2b18, label %dec_label_pc_2ac4, !insn.addr !275

dec_label_pc_2ac4:                                ; preds = %dec_label_pc_2abb
  %9 = icmp eq i32 %7, 0, !insn.addr !274
  br i1 %9, label %dec_label_pc_2b1e, label %dec_label_pc_2ac6, !insn.addr !276

dec_label_pc_2ac6:                                ; preds = %dec_label_pc_2ac4
  %10 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !277
  %11 = call i32 @close(i32 %1), !insn.addr !278
  %12 = load i32, i32* %stack_var_-48, align 4, !insn.addr !279
  %13 = call i32 @read(i32 %12, i64* nonnull %stack_var_-40, i32 31), !insn.addr !280
  %14 = sext i32 %13 to i64, !insn.addr !280
  %15 = add i64 %10, 16, !insn.addr !281
  %16 = add i64 %15, %14, !insn.addr !281
  %17 = inttoptr i64 %16 to i8*, !insn.addr !281
  store i8 0, i8* %17, align 1, !insn.addr !281
  %18 = load i32, i32* %stack_var_-48, align 4, !insn.addr !282
  %19 = call i32 @close(i32 %18), !insn.addr !283
  %20 = call i32 @wait(i64 0), !insn.addr !284
  %21 = icmp eq i32 %13, 0, !insn.addr !285
  %22 = icmp slt i32 %13, 0, !insn.addr !285
  %23 = icmp eq i1 %22, false, !insn.addr !286
  %24 = icmp eq i1 %21, false, !insn.addr !286
  %25 = icmp eq i1 %23, %24, !insn.addr !286
  %26 = select i1 %25, i64 42, i64 4294967293, !insn.addr !286
  store i64 %26, i64* %rax.0.reg2mem, !insn.addr !287
  br label %dec_label_pc_2b18, !insn.addr !287

dec_label_pc_2b18:                                ; preds = %dec_label_pc_2abb, %dec_label_pc_2aa8, %dec_label_pc_2ac6
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !288

dec_label_pc_2b1e:                                ; preds = %dec_label_pc_2ac4
  %27 = load i32, i32* %stack_var_-48, align 4, !insn.addr !289
  %28 = call i32 @close(i32 %27), !insn.addr !290
  %29 = call i32 @write(i32 %1, i64* bitcast ([10 x i8]* @global_var_420f to i64*), i32 9), !insn.addr !291
  %30 = call i32 @close(i32 %1), !insn.addr !292
  call void @_exit(i32 0), !insn.addr !293
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !293

; uselistorder directives
  uselistorder i32* %stack_var_-48, { 3, 2, 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder i64 ptrtoint (i32* @0 to i64), { 1, 2, 0 }
  uselistorder void (i32)* @_exit, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2b18, { 2, 0, 1 }
}

define i64 @call_pipe_communication() local_unnamed_addr {
dec_label_pc_2b4c:
  %0 = call i64 @param_pipe_communication(), !insn.addr !294
  ret i64 %0, !insn.addr !294
}

define i64 @param_socket_create(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2b51:
  %rax.0.reg2mem = alloca i64, !insn.addr !295
  %stack_var_-32 = alloca i64, align 8
  %stack_var_-36 = alloca i64, align 8
  %0 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !296
  %1 = icmp slt i32 %0, 0, !insn.addr !297
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !298
  br i1 %1, label %dec_label_pc_2bff, label %dec_label_pc_2b6c, !insn.addr !298

dec_label_pc_2b6c:                                ; preds = %dec_label_pc_2b51
  store i64 1, i64* %stack_var_-36, align 8, !insn.addr !299
  %2 = call i32 @setsockopt(i32 %0, i32 1, i32 2, i64* nonnull %stack_var_-36, i32 4), !insn.addr !300
  %3 = icmp slt i32 %2, 0, !insn.addr !301
  br i1 %3, label %dec_label_pc_2be5, label %dec_label_pc_2b94, !insn.addr !302

dec_label_pc_2b94:                                ; preds = %dec_label_pc_2b6c
  store i64 2, i64* %stack_var_-32, align 8, !insn.addr !303
  %4 = bitcast i64* %stack_var_-32 to %sockaddr*, !insn.addr !304
  %5 = call i32 @bind(i32 %0, %sockaddr* nonnull %4, i32 16), !insn.addr !304
  %6 = icmp slt i32 %5, 0, !insn.addr !305
  br i1 %6, label %dec_label_pc_2bf3, label %dec_label_pc_2bb8, !insn.addr !306

dec_label_pc_2bb8:                                ; preds = %dec_label_pc_2b94
  %7 = call i32 @listen(i32 %0, i32 5), !insn.addr !307
  %8 = call i32 @close(i32 %0), !insn.addr !308
  %9 = icmp slt i32 %7, 0, !insn.addr !309
  %10 = select i1 %9, i64 4294967292, i64 42, !insn.addr !310
  store i64 %10, i64* %rax.0.reg2mem, !insn.addr !311
  br label %dec_label_pc_2bff, !insn.addr !311

dec_label_pc_2be5:                                ; preds = %dec_label_pc_2b6c
  %11 = call i32 @close(i32 %0), !insn.addr !312
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !313
  br label %dec_label_pc_2bff, !insn.addr !313

dec_label_pc_2bf3:                                ; preds = %dec_label_pc_2b94
  %12 = call i32 @close(i32 %0), !insn.addr !314
  store i64 4294967293, i64* %rax.0.reg2mem, !insn.addr !315
  br label %dec_label_pc_2bff, !insn.addr !315

dec_label_pc_2bff:                                ; preds = %dec_label_pc_2b51, %dec_label_pc_2bf3, %dec_label_pc_2be5, %dec_label_pc_2bb8
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !316

; uselistorder directives
  uselistorder i32 %0, { 3, 0, 1, 2, 4, 5, 6 }
  uselistorder i64* %rax.0.reg2mem, { 0, 3, 4, 2, 1 }
  uselistorder label %dec_label_pc_2bff, { 1, 2, 3, 0 }
}

define i64 @call_socket_create() local_unnamed_addr {
dec_label_pc_2c06:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = call i64 @param_socket_create(i64 %1, i64 %2, i64 %3), !insn.addr !317
  ret i64 %4, !insn.addr !317

; uselistorder directives
  uselistorder i64* %0, { 2, 1, 0 }
}

define i64 @param_shmget_shmat() local_unnamed_addr {
dec_label_pc_2c0b:
  %rbx.0.reg2mem = alloca i64, !insn.addr !318
  %0 = call i32 (i8*, i32, ...) @open(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_4219, i64 0, i64 0), i32 66), !insn.addr !319
  %1 = icmp slt i32 %0, 0, !insn.addr !320
  store i64 4294967295, i64* %rbx.0.reg2mem, !insn.addr !321
  br i1 %1, label %dec_label_pc_2cc5, label %dec_label_pc_2c34, !insn.addr !321

dec_label_pc_2c34:                                ; preds = %dec_label_pc_2c0b
  %2 = call i32 @close(i32 %0), !insn.addr !322
  %3 = call i32 @ftok(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_4219, i64 0, i64 0), i32 42), !insn.addr !323
  %4 = icmp slt i32 %3, 0, !insn.addr !324
  store i64 4294967295, i64* %rbx.0.reg2mem, !insn.addr !325
  br i1 %4, label %dec_label_pc_2cc5, label %dec_label_pc_2c50, !insn.addr !325

dec_label_pc_2c50:                                ; preds = %dec_label_pc_2c34
  %5 = call i32 @shmget(i32 %3, i32 ptrtoint (i32* @global_var_1000 to i32), i32 ptrtoint (i32* @global_var_3b6 to i32)), !insn.addr !326
  %6 = icmp slt i32 %5, 0, !insn.addr !327
  store i64 4294967294, i64* %rbx.0.reg2mem, !insn.addr !328
  br i1 %6, label %dec_label_pc_2cc5, label %dec_label_pc_2c65, !insn.addr !328

dec_label_pc_2c65:                                ; preds = %dec_label_pc_2c50
  %7 = call i64* @shmat(i32 %5, i64* null, i32 0), !insn.addr !329
  %8 = icmp eq i64* %7, inttoptr (i64 -1 to i64*), !insn.addr !330
  store i64 4294967293, i64* %rbx.0.reg2mem, !insn.addr !331
  br i1 %8, label %dec_label_pc_2cc5, label %dec_label_pc_2c79, !insn.addr !331

dec_label_pc_2c79:                                ; preds = %dec_label_pc_2c65
  %9 = ptrtoint i64* %7 to i64, !insn.addr !329
  %10 = add i64 %9, 5, !insn.addr !332
  %11 = inttoptr i64 %10 to i64*, !insn.addr !332
  store i64 34184295084281188, i64* %11, align 8, !insn.addr !332
  store i64 7299600957910902867, i64* %7, align 8, !insn.addr !333
  %12 = bitcast i64* %7 to i8*, !insn.addr !334
  %13 = call i32 @strlen(i8* %12), !insn.addr !334
  %14 = zext i32 %13 to i64
  %15 = call i32 @shmdt(i64* %7), !insn.addr !335
  %16 = call i32 @shmctl(i32 %5, i32 0, %shmid_ds* null), !insn.addr !336
  store i64 %14, i64* %rbx.0.reg2mem, !insn.addr !337
  br label %dec_label_pc_2cc5, !insn.addr !337

dec_label_pc_2cc5:                                ; preds = %dec_label_pc_2c65, %dec_label_pc_2c50, %dec_label_pc_2c79, %dec_label_pc_2c34, %dec_label_pc_2c0b
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  ret i64 %rbx.0.reload, !insn.addr !338

; uselistorder directives
  uselistorder i64* %7, { 1, 0, 2, 4, 3 }
  uselistorder i64* %rbx.0.reg2mem, { 0, 3, 1, 2, 4, 5 }
  uselistorder i32 (i8*)* @strlen, { 4, 3, 2, 1, 0, 5 }
  uselistorder i32 (i32)* @close, { 1, 2, 3, 4, 5, 7, 6, 0, 8 }
  uselistorder label %dec_label_pc_2cc5, { 2, 0, 1, 3, 4 }
}

define i64 @call_shmget_shmat() local_unnamed_addr {
dec_label_pc_2ccc:
  %0 = call i64 @param_shmget_shmat(), !insn.addr !339
  %1 = trunc i64 %0 to i32, !insn.addr !340
  %2 = icmp eq i32 %1, 0, !insn.addr !340
  %3 = icmp slt i32 %1, 0, !insn.addr !340
  %4 = icmp eq i1 %3, false, !insn.addr !341
  %5 = icmp eq i1 %2, false, !insn.addr !341
  %6 = icmp eq i1 %4, %5, !insn.addr !341
  %7 = select i1 %6, i64 42, i64 4294967295, !insn.addr !341
  ret i64 %7, !insn.addr !342

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
}

define i64 @param_signal_handling() local_unnamed_addr {
dec_label_pc_2ce3:
  %rax.0.reg2mem = alloca i64, !insn.addr !343
  %.reg2mem10 = alloca i32, !insn.addr !343
  %rbx.1.reg2mem = alloca i64, !insn.addr !343
  %.reg2mem = alloca i32, !insn.addr !343
  %rbx.0.reg2mem = alloca i64, !insn.addr !343
  %0 = call void (i32)* @signal(i32 10, void (i32)* inttoptr (i64 11782 to void (i32)*)), !insn.addr !344
  %1 = icmp eq void (i32)* %0, inttoptr (i64 -1 to void (i32)*), !insn.addr !345
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !346
  br i1 %1, label %dec_label_pc_2e04, label %dec_label_pc_2cff, !insn.addr !346

dec_label_pc_2cff:                                ; preds = %dec_label_pc_2ce3
  %2 = call void (i32)* @signal(i32 14, void (i32)* inttoptr (i64 11782 to void (i32)*)), !insn.addr !347
  %3 = icmp eq void (i32)* %2, inttoptr (i64 -1 to void (i32)*), !insn.addr !348
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !349
  br i1 %3, label %dec_label_pc_2e04, label %dec_label_pc_2d1a, !insn.addr !349

dec_label_pc_2d1a:                                ; preds = %dec_label_pc_2cff
  store i32 0, i32* @global_var_71f0, align 4, !insn.addr !350
  %4 = call i32 @raise(i32 10), !insn.addr !351
  %5 = load i32, i32* @global_var_71f0, align 4
  %6 = icmp eq i32 %5, 0, !insn.addr !352
  %7 = icmp eq i1 %6, false, !insn.addr !353
  store i64 ptrtoint (i32* @global_var_3e8 to i64), i64* %rbx.0.reg2mem, !insn.addr !353
  store i32 %5, i32* %.reg2mem, !insn.addr !353
  br i1 %7, label %dec_label_pc_2d59, label %dec_label_pc_2d3c, !insn.addr !353

dec_label_pc_2d3c:                                ; preds = %dec_label_pc_2d1a, %dec_label_pc_2d4f
  %8 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !354
  %9 = load i32, i32* @global_var_71f0, align 4
  %10 = icmp eq i32 %9, 0, !insn.addr !355
  %11 = icmp eq i1 %10, false, !insn.addr !356
  store i32 %9, i32* %.reg2mem, !insn.addr !356
  br i1 %11, label %dec_label_pc_2d59, label %dec_label_pc_2d4f, !insn.addr !356

dec_label_pc_2d4f:                                ; preds = %dec_label_pc_2d3c
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %12 = add i64 %rbx.0.reload, 4294967295, !insn.addr !357
  %13 = trunc i64 %rbx.0.reload to i32, !insn.addr !358
  %14 = and i64 %12, 4294967295, !insn.addr !359
  %15 = icmp ult i32 %13, 2
  store i64 %14, i64* %rbx.0.reg2mem, !insn.addr !360
  store i32 %9, i32* %.reg2mem, !insn.addr !360
  br i1 %15, label %dec_label_pc_2d59, label %dec_label_pc_2d3c, !insn.addr !360

dec_label_pc_2d59:                                ; preds = %dec_label_pc_2d3c, %dec_label_pc_2d4f, %dec_label_pc_2d1a
  %.reload = load i32, i32* %.reg2mem, !insn.addr !361
  %16 = icmp eq i32 %.reload, 0, !insn.addr !361
  store i64 4294967293, i64* %rax.0.reg2mem, !insn.addr !362
  br i1 %16, label %dec_label_pc_2e04, label %dec_label_pc_2d66, !insn.addr !362

dec_label_pc_2d66:                                ; preds = %dec_label_pc_2d59
  %17 = load i32, i32* @global_var_71f4, align 4, !insn.addr !363
  %18 = icmp eq i32 %17, 10, !insn.addr !364
  %19 = icmp eq i1 %18, false, !insn.addr !365
  store i64 4294967292, i64* %rax.0.reg2mem, !insn.addr !365
  br i1 %19, label %dec_label_pc_2e04, label %dec_label_pc_2d7a, !insn.addr !365

dec_label_pc_2d7a:                                ; preds = %dec_label_pc_2d66
  store i32 0, i32* @global_var_71f0, align 4, !insn.addr !366
  %20 = call i32 @alarm(i32 1), !insn.addr !367
  %21 = load i32, i32* @global_var_71f0, align 4
  %22 = icmp eq i32 %21, 0, !insn.addr !368
  %23 = icmp eq i1 %22, false, !insn.addr !369
  store i64 ptrtoint (i32* @global_var_7d0 to i64), i64* %rbx.1.reg2mem, !insn.addr !369
  store i32 %21, i32* %.reg2mem10, !insn.addr !369
  br i1 %23, label %dec_label_pc_2db9, label %dec_label_pc_2d9c, !insn.addr !369

dec_label_pc_2d9c:                                ; preds = %dec_label_pc_2d7a, %dec_label_pc_2daf
  %24 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !370
  %25 = load i32, i32* @global_var_71f0, align 4
  %26 = icmp eq i32 %25, 0, !insn.addr !371
  %27 = icmp eq i1 %26, false, !insn.addr !372
  store i32 %25, i32* %.reg2mem10, !insn.addr !372
  br i1 %27, label %dec_label_pc_2db9, label %dec_label_pc_2daf, !insn.addr !372

dec_label_pc_2daf:                                ; preds = %dec_label_pc_2d9c
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %28 = add i64 %rbx.1.reload, 4294967295, !insn.addr !373
  %29 = trunc i64 %rbx.1.reload to i32, !insn.addr !374
  %30 = and i64 %28, 4294967295, !insn.addr !375
  %31 = icmp ult i32 %29, 2
  store i64 %30, i64* %rbx.1.reg2mem, !insn.addr !376
  store i32 %25, i32* %.reg2mem10, !insn.addr !376
  br i1 %31, label %dec_label_pc_2db9, label %dec_label_pc_2d9c, !insn.addr !376

dec_label_pc_2db9:                                ; preds = %dec_label_pc_2d9c, %dec_label_pc_2daf, %dec_label_pc_2d7a
  %.reload11 = load i32, i32* %.reg2mem10, !insn.addr !377
  %32 = icmp eq i32 %.reload11, 0, !insn.addr !377
  store i64 4294967291, i64* %rax.0.reg2mem, !insn.addr !378
  br i1 %32, label %dec_label_pc_2e04, label %dec_label_pc_2dc7, !insn.addr !378

dec_label_pc_2dc7:                                ; preds = %dec_label_pc_2db9
  %33 = load i32, i32* @global_var_71f4, align 4, !insn.addr !379
  %34 = icmp eq i32 %33, 14, !insn.addr !380
  %35 = icmp eq i1 %34, false, !insn.addr !381
  store i64 4294967291, i64* %rax.0.reg2mem, !insn.addr !381
  br i1 %35, label %dec_label_pc_2e04, label %dec_label_pc_2dd2, !insn.addr !381

dec_label_pc_2dd2:                                ; preds = %dec_label_pc_2dc7
  %36 = call void (i32)* @signal(i32 10, void (i32)* null), !insn.addr !382
  %37 = call void (i32)* @signal(i32 14, void (i32)* null), !insn.addr !383
  store i64 42, i64* %rax.0.reg2mem, !insn.addr !384
  br label %dec_label_pc_2e04, !insn.addr !384

dec_label_pc_2e04:                                ; preds = %dec_label_pc_2d59, %dec_label_pc_2cff, %dec_label_pc_2ce3, %dec_label_pc_2dd2, %dec_label_pc_2dc7, %dec_label_pc_2db9, %dec_label_pc_2d66
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !385

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
  uselistorder label %dec_label_pc_2e04, { 3, 4, 5, 6, 0, 1, 2 }
  uselistorder label %dec_label_pc_2db9, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2d9c, { 1, 0 }
  uselistorder label %dec_label_pc_2d59, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2d3c, { 1, 0 }
}

define i64 @signal_handler(i64 %arg1) local_unnamed_addr {
dec_label_pc_2e06:
  %0 = alloca i64
  %1 = load i64, i64* %0
  store i32 1, i32* @global_var_71f0, align 4, !insn.addr !386
  %2 = trunc i64 %arg1 to i32, !insn.addr !387
  store i32 %2, i32* @global_var_71f4, align 4, !insn.addr !387
  ret i64 %1, !insn.addr !388

; uselistorder directives
  uselistorder i32* @global_var_71f4, { 2, 1, 0 }
  uselistorder i32* @global_var_71f0, { 6, 5, 4, 3, 2, 1, 0 }
}

define i64 @call_signal_handling() local_unnamed_addr {
dec_label_pc_2e17:
  %0 = call i64 @param_signal_handling(), !insn.addr !389
  ret i64 %0, !insn.addr !389
}

define i64 @test_system_calls() local_unnamed_addr {
dec_label_pc_2e1c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %stack_var_-168 = alloca i64, align 8
  %4 = call i32 @puts(i8* bitcast (i8** @global_var_43d3 to i8*)), !insn.addr !390
  %5 = call i64 @param_linux_syscall(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_407e, i64 0, i64 0), i64 %1, i64 %2), !insn.addr !391
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4238 to i8*)), !insn.addr !392
  %7 = bitcast i64* %stack_var_-168 to %stat*, !insn.addr !393
  %8 = call i32 @stat(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_407e, i64 0, i64 0), %stat* nonnull %7), !insn.addr !393
  %9 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4254 to i8*)), !insn.addr !394
  %10 = call i64 @param_fork_exec(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_4205, i64 0, i64 0), i32 0, i64 %2, i64 %3), !insn.addr !395
  %11 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4270 to i8*)), !insn.addr !396
  %12 = call i64 @param_pipe_communication(), !insn.addr !397
  %13 = and i64 %12, 4294967295, !insn.addr !398
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_428c to i8*)), !insn.addr !399
  %15 = call i64 @param_socket_create(i64 ptrtoint (i8** @global_var_428c to i64), i64 %13, i64 %2), !insn.addr !400
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_42a8 to i8*)), !insn.addr !401
  %17 = call i64 @param_shmget_shmat(), !insn.addr !402
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_42c4 to i8*)), !insn.addr !403
  %19 = call i64 @param_signal_handling(), !insn.addr !404
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_42e0 to i8*)), !insn.addr !405
  %21 = sext i32 %20 to i64, !insn.addr !405
  ret i64 %21, !insn.addr !405

; uselistorder directives
  uselistorder i64 %2, { 2, 0, 1 }
  uselistorder i64* %0, { 2, 1, 0 }
  uselistorder i64 ()* @param_signal_handling, { 1, 0 }
  uselistorder i64 ()* @param_shmget_shmat, { 1, 0 }
  uselistorder i64 (i64, i64, i64)* @param_socket_create, { 1, 0 }
  uselistorder i8** @global_var_428c, { 1, 0 }
  uselistorder i64 ()* @param_pipe_communication, { 1, 0 }
  uselistorder i64 (i8*, i32, i64, i64)* @param_fork_exec, { 1, 0 }
  uselistorder i32 (i8*, %stat*)* @stat, { 0, 2, 1, 3 }
  uselistorder i64 (i8*, i64, i64)* @param_linux_syscall, { 1, 0 }
}

define i64 @thread_compute() local_unnamed_addr {
dec_label_pc_2f16:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = mul i32 %2, %2, !insn.addr !406
  %4 = call i64* @malloc(i32 4), !insn.addr !407
  %5 = ptrtoint i64* %4 to i64, !insn.addr !407
  %6 = bitcast i64* %4 to i32*, !insn.addr !408
  store i32 %3, i32* %6, align 4, !insn.addr !408
  ret i64 %5, !insn.addr !409

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i64 @param_pthread_create(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2f2a:
  %rbx.0.reg2mem = alloca i64, !insn.addr !410
  %stack_var_-16 = alloca i64, align 8
  %stack_var_-32 = alloca i32, align 4
  %stack_var_-20 = alloca i64, align 8
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !411
  store i64 %0, i64* %stack_var_-20, align 8, !insn.addr !411
  %1 = call i32 @pthread_create(i32* nonnull %stack_var_-32, i64* null, i64* (i64*)* inttoptr (i64 12054 to i64* (i64*)*), i64* nonnull %stack_var_-20), !insn.addr !412
  %2 = icmp eq i32 %1, 0, !insn.addr !413
  %3 = icmp eq i1 %2, false, !insn.addr !414
  store i64 4294967295, i64* %rbx.0.reg2mem, !insn.addr !414
  br i1 %3, label %dec_label_pc_2f6e, label %dec_label_pc_2f52, !insn.addr !414

dec_label_pc_2f52:                                ; preds = %dec_label_pc_2f2a
  %4 = load i32, i32* %stack_var_-32, align 4, !insn.addr !415
  %5 = bitcast i64* %stack_var_-16 to i64**, !insn.addr !416
  %6 = call i32 @pthread_join(i32 %4, i64** nonnull %5), !insn.addr !416
  %7 = load i64, i64* %stack_var_-16, align 8, !insn.addr !417
  %8 = inttoptr i64 %7 to i32*, !insn.addr !418
  %9 = load i32, i32* %8, align 4, !insn.addr !418
  %10 = zext i32 %9 to i64, !insn.addr !418
  %11 = inttoptr i64 %7 to i64*, !insn.addr !419
  call void @free(i64* %11), !insn.addr !419
  store i64 %10, i64* %rbx.0.reg2mem, !insn.addr !419
  br label %dec_label_pc_2f6e, !insn.addr !419

dec_label_pc_2f6e:                                ; preds = %dec_label_pc_2f52, %dec_label_pc_2f2a
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  ret i64 %rbx.0.reload, !insn.addr !420

; uselistorder directives
  uselistorder i64 %7, { 1, 0 }
  uselistorder i64* %stack_var_-16, { 1, 0 }
}

define i64 @call_pthread_create() local_unnamed_addr {
dec_label_pc_2f76:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @param_pthread_create(i64 7, i64 %1), !insn.addr !421
  ret i64 %2, !insn.addr !421
}

define i64 @thread_sum(i64 %arg1) local_unnamed_addr {
dec_label_pc_2f80:
  %rdi = alloca i64, align 8
  store i64 %arg1, i64* %rdi, align 8
  %0 = add i64 %arg1, 8, !insn.addr !422
  %1 = inttoptr i64 %0 to i32*, !insn.addr !422
  store i32 0, i32* %1, align 4, !insn.addr !422
  %2 = bitcast i64* %rdi to i32*
  %3 = load i32, i32* %2, align 8, !insn.addr !423
  %4 = add i64 %arg1, 4, !insn.addr !424
  %5 = inttoptr i64 %4 to i32*, !insn.addr !424
  %6 = load i32, i32* %5, align 4, !insn.addr !424
  %7 = icmp ult i32 %6, %3, !insn.addr !425
  br i1 %7, label %dec_label_pc_2fb1, label %dec_label_pc_2f94, !insn.addr !425

dec_label_pc_2f94:                                ; preds = %dec_label_pc_2f80
  %8 = zext i32 %3 to i64, !insn.addr !423
  %9 = sub i32 %6, %3, !insn.addr !426
  %10 = zext i32 %9 to i64, !insn.addr !426
  %11 = zext i32 %6 to i64, !insn.addr !424
  %12 = mul i64 %8, 4294967296, !insn.addr !427
  %sext = add i64 %12, 4294967296
  %13 = udiv i64 %sext, 4294967296
  %14 = trunc i64 %13 to i32
  %15 = mul i32 %9, %14, !insn.addr !428
  %16 = xor i64 %8, 4294967295, !insn.addr !429
  %17 = add nuw nsw i64 %16, %11, !insn.addr !430
  %18 = and i64 %17, 4294967295, !insn.addr !430
  %19 = mul nuw i64 %18, %10, !insn.addr !431
  %20 = udiv i64 %19, 2, !insn.addr !432
  %21 = add i32 %15, %3, !insn.addr !433
  %22 = trunc i64 %20 to i32, !insn.addr !434
  %23 = add i32 %21, %22, !insn.addr !434
  %24 = load i64, i64* %rdi, align 8, !insn.addr !435
  %25 = add i64 %24, 8, !insn.addr !435
  %26 = inttoptr i64 %25 to i32*, !insn.addr !435
  store i32 %23, i32* %26, align 4, !insn.addr !435
  br label %dec_label_pc_2fb1, !insn.addr !435

dec_label_pc_2fb1:                                ; preds = %dec_label_pc_2f94, %dec_label_pc_2f80
  ret i64 0, !insn.addr !436

; uselistorder directives
  uselistorder i64 %8, { 1, 0 }
  uselistorder i32 %6, { 2, 1, 0 }
  uselistorder i32 %3, { 0, 2, 3, 1 }
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @param_pthread_join() local_unnamed_addr {
dec_label_pc_2fb4:
  %0 = alloca i128
  %r14.1.reg2mem = alloca i64, !insn.addr !437
  %r14.0.reg2mem = alloca i32, !insn.addr !437
  %rbp.1.reg2mem = alloca i64, !insn.addr !437
  %rbx.1.reg2mem = alloca i64, !insn.addr !437
  %rbp.0.reg2mem = alloca i64, !insn.addr !437
  %rbx.0.reg2mem = alloca i64, !insn.addr !437
  %1 = load i128, i128* %0
  %stack_var_-64 = alloca i64, align 8
  %stack_var_-72 = alloca i64, align 8
  %stack_var_-104 = alloca i64, align 8
  %2 = ptrtoint i64* %stack_var_-104 to i64, !insn.addr !438
  %3 = call i128 @__asm_xorps(i128 %1, i128 %1), !insn.addr !439
  %4 = ptrtoint i64* %stack_var_-72 to i64, !insn.addr !440
  %5 = call i64 @__asm_movaps(i128 %3), !insn.addr !441
  store i64 %5, i64* %stack_var_-72, align 8, !insn.addr !441
  %6 = call i64 @__asm_movaps(i128 %3), !insn.addr !442
  store i64 42949672961, i64* %stack_var_-72, align 8, !insn.addr !443
  store i64 %4, i64* %rbx.0.reg2mem, !insn.addr !444
  store i64 0, i64* %rbp.0.reg2mem, !insn.addr !444
  br label %dec_label_pc_3004, !insn.addr !444

dec_label_pc_3004:                                ; preds = %dec_label_pc_3019, %dec_label_pc_2fb4
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %7 = add i64 %rbp.0.reload, %2, !insn.addr !445
  %8 = inttoptr i64 %7 to i32*, !insn.addr !446
  %9 = inttoptr i64 %rbx.0.reload to i64*, !insn.addr !446
  %10 = call i32 @pthread_create(i32* %8, i64* null, i64* (i64*)* inttoptr (i64 12160 to i64* (i64*)*), i64* %9), !insn.addr !446
  %11 = icmp eq i32 %10, 0, !insn.addr !447
  %12 = icmp eq i1 %11, false, !insn.addr !448
  store i64 4294967295, i64* %r14.1.reg2mem, !insn.addr !448
  br i1 %12, label %dec_label_pc_3060, label %dec_label_pc_3019, !insn.addr !448

dec_label_pc_3019:                                ; preds = %dec_label_pc_3004
  %13 = add i64 %rbx.0.reload, 12, !insn.addr !449
  %14 = add nuw nsw i64 %rbp.0.reload, 8, !insn.addr !450
  %15 = icmp eq i64 %rbp.0.reload, 16, !insn.addr !451
  %16 = icmp eq i1 %15, false, !insn.addr !452
  store i64 %13, i64* %rbx.0.reg2mem, !insn.addr !452
  store i64 %14, i64* %rbp.0.reg2mem, !insn.addr !452
  br i1 %16, label %dec_label_pc_3004, label %dec_label_pc_3027, !insn.addr !452

dec_label_pc_3027:                                ; preds = %dec_label_pc_3019
  %17 = ptrtoint i64* %stack_var_-64 to i64, !insn.addr !453
  store i64 %17, i64* %rbx.1.reg2mem, !insn.addr !454
  store i64 0, i64* %rbp.1.reg2mem, !insn.addr !454
  store i32 0, i32* %r14.0.reg2mem, !insn.addr !454
  br label %dec_label_pc_3031, !insn.addr !454

dec_label_pc_3031:                                ; preds = %dec_label_pc_3040, %dec_label_pc_3027
  %rbp.1.reload = load i64, i64* %rbp.1.reg2mem
  %18 = mul i64 %rbp.1.reload, 8, !insn.addr !455
  %19 = add i64 %18, %2, !insn.addr !455
  %20 = inttoptr i64 %19 to i64*, !insn.addr !455
  %21 = load i64, i64* %20, align 8, !insn.addr !455
  %22 = trunc i64 %21 to i32, !insn.addr !456
  %23 = call i32 @pthread_join(i32 %22, i64** null), !insn.addr !456
  %24 = icmp eq i32 %23, 0, !insn.addr !457
  %25 = icmp eq i1 %24, false, !insn.addr !458
  store i64 4294967294, i64* %r14.1.reg2mem, !insn.addr !458
  br i1 %25, label %dec_label_pc_3060, label %dec_label_pc_3040, !insn.addr !458

dec_label_pc_3040:                                ; preds = %dec_label_pc_3031
  %r14.0.reload = load i32, i32* %r14.0.reg2mem
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %26 = inttoptr i64 %rbx.1.reload to i32*, !insn.addr !459
  %27 = load i32, i32* %26, align 4, !insn.addr !459
  %28 = add i32 %27, %r14.0.reload, !insn.addr !459
  %29 = add nuw nsw i64 %rbp.1.reload, 1, !insn.addr !460
  %30 = add i64 %rbx.1.reload, 12, !insn.addr !461
  %31 = icmp eq i64 %rbp.1.reload, 2, !insn.addr !462
  %32 = icmp eq i1 %31, false, !insn.addr !463
  store i64 %30, i64* %rbx.1.reg2mem, !insn.addr !463
  store i64 %29, i64* %rbp.1.reg2mem, !insn.addr !463
  store i32 %28, i32* %r14.0.reg2mem, !insn.addr !463
  br i1 %32, label %dec_label_pc_3031, label %dec_label_pc_3060.loopexit.split.loop.exit, !insn.addr !463

dec_label_pc_3060.loopexit.split.loop.exit:       ; preds = %dec_label_pc_3040
  %33 = zext i32 %28 to i64, !insn.addr !459
  store i64 %33, i64* %r14.1.reg2mem
  br label %dec_label_pc_3060

dec_label_pc_3060:                                ; preds = %dec_label_pc_3004, %dec_label_pc_3031, %dec_label_pc_3060.loopexit.split.loop.exit
  %r14.1.reload = load i64, i64* %r14.1.reg2mem
  ret i64 %r14.1.reload, !insn.addr !464

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
  uselistorder i64 2, { 1, 0, 2 }
  uselistorder i64 12, { 1, 2, 0 }
  uselistorder label %dec_label_pc_3060, { 2, 1, 0 }
}

define i64 @call_pthread_join() local_unnamed_addr {
dec_label_pc_306c:
  %0 = call i64 @param_pthread_join(), !insn.addr !465
  ret i64 %0, !insn.addr !465
}

define i64 @thread_increment() local_unnamed_addr {
dec_label_pc_3071:
  %0 = alloca i64
  %rbp.0.in.reg2mem = alloca i32, !insn.addr !466
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp slt i32 %2, 1
  store i32 %2, i32* %rbp.0.in.reg2mem, !insn.addr !467
  br i1 %3, label %dec_label_pc_30a5, label %dec_label_pc_3081, !insn.addr !467

dec_label_pc_3081:                                ; preds = %dec_label_pc_3071, %dec_label_pc_3081
  %rbp.0.in.reload = load i32, i32* %rbp.0.in.reg2mem
  %4 = call i32 @pthread_mutex_lock(i64* nonnull @global_var_71f8), !insn.addr !468
  store i32 ptrtoint (i64* @global_var_7221 to i32), i32* @global_var_7220, align 4, !insn.addr !469
  %5 = call i32 @pthread_mutex_unlock(i64* nonnull @global_var_71f8), !insn.addr !470
  %6 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !471
  %7 = add i32 %rbp.0.in.reload, -1, !insn.addr !472
  %8 = icmp eq i32 %7, 0, !insn.addr !472
  %9 = icmp eq i1 %8, false, !insn.addr !473
  store i32 %7, i32* %rbp.0.in.reg2mem, !insn.addr !473
  br i1 %9, label %dec_label_pc_3081, label %dec_label_pc_30a5, !insn.addr !473

dec_label_pc_30a5:                                ; preds = %dec_label_pc_3081, %dec_label_pc_3071
  ret i64 0, !insn.addr !474

; uselistorder directives
  uselistorder i32* %rbp.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i32)* @usleep, { 2, 1, 0, 3 }
  uselistorder i64* @global_var_71f8, { 1, 0 }
  uselistorder label %dec_label_pc_3081, { 1, 0 }
}

define i64 @param_mutex_lock(i64 %arg1, i64* %arg2) local_unnamed_addr {
dec_label_pc_30ae:
  %rax.0.reg2mem = alloca i64, !insn.addr !475
  %r14.1.reg2mem = alloca i64, !insn.addr !475
  %rbp.0.reg2mem = alloca i64, !insn.addr !475
  %r14.0.reg2mem = alloca i64, !insn.addr !475
  %0 = ptrtoint i64* %arg2 to i64
  %stack_var_-56 = alloca i64, align 8
  %sext = mul i64 %0, 4294967296
  %1 = ashr exact i64 %sext, 32, !insn.addr !476
  store i64 %1, i64* %stack_var_-56, align 8, !insn.addr !476
  %arg1.tr = trunc i64 %arg1 to i32
  %2 = mul i32 %arg1.tr, 8, !insn.addr !477
  %3 = call i64* @malloc(i32 %2), !insn.addr !477
  %4 = icmp eq i64* %3, null, !insn.addr !478
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !479
  br i1 %4, label %dec_label_pc_3179, label %dec_label_pc_30d4, !insn.addr !479

dec_label_pc_30d4:                                ; preds = %dec_label_pc_30ae
  %5 = and i64 %arg1, 4294967295, !insn.addr !480
  store i32 0, i32* @global_var_7220, align 4, !insn.addr !481
  %6 = icmp slt i32 %arg1.tr, 1
  store i64 %5, i64* %r14.1.reg2mem, !insn.addr !482
  br i1 %6, label %dec_label_pc_3140, label %dec_label_pc_30e6, !insn.addr !482

dec_label_pc_30e6:                                ; preds = %dec_label_pc_30d4
  %7 = ptrtoint i64* %3 to i64, !insn.addr !477
  %sext3 = mul i64 %arg1, 4294967296
  %8 = ashr exact i64 %sext3, 32, !insn.addr !483
  %9 = mul i64 %5, 8, !insn.addr !484
  store i64 0, i64* %r14.0.reg2mem, !insn.addr !485
  br label %dec_label_pc_3103, !insn.addr !485

dec_label_pc_3103:                                ; preds = %dec_label_pc_3118, %dec_label_pc_30e6
  %r14.0.reload = load i64, i64* %r14.0.reg2mem
  %10 = add i64 %r14.0.reload, %7, !insn.addr !486
  %11 = inttoptr i64 %10 to i32*, !insn.addr !487
  %12 = call i32 @pthread_create(i32* %11, i64* null, i64* (i64*)* inttoptr (i64 12401 to i64* (i64*)*), i64* nonnull %stack_var_-56), !insn.addr !487
  %13 = icmp eq i32 %12, 0, !insn.addr !488
  %14 = icmp eq i1 %13, false, !insn.addr !489
  br i1 %14, label %dec_label_pc_316c, label %dec_label_pc_3118, !insn.addr !489

dec_label_pc_3118:                                ; preds = %dec_label_pc_3103
  %15 = add i64 %r14.0.reload, 8, !insn.addr !490
  %16 = icmp eq i64 %9, %15, !insn.addr !491
  %17 = icmp eq i1 %16, false, !insn.addr !492
  store i64 %15, i64* %r14.0.reg2mem, !insn.addr !492
  br i1 %17, label %dec_label_pc_3103, label %dec_label_pc_3121, !insn.addr !492

dec_label_pc_3121:                                ; preds = %dec_label_pc_3118
  %18 = and i64 %8, 4294967295, !insn.addr !493
  %19 = trunc i64 %8 to i32, !insn.addr !494
  %20 = icmp slt i32 %19, 1
  store i64 0, i64* %rbp.0.reg2mem, !insn.addr !495
  store i64 %18, i64* %r14.1.reg2mem, !insn.addr !495
  br i1 %20, label %dec_label_pc_3140, label %dec_label_pc_312d, !insn.addr !495

dec_label_pc_312d:                                ; preds = %dec_label_pc_3121, %dec_label_pc_312d
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %21 = mul i64 %rbp.0.reload, 8, !insn.addr !496
  %22 = add i64 %21, %7, !insn.addr !496
  %23 = inttoptr i64 %22 to i64*, !insn.addr !496
  %24 = load i64, i64* %23, align 8, !insn.addr !496
  %25 = trunc i64 %24 to i32, !insn.addr !497
  %26 = call i32 @pthread_join(i32 %25, i64** null), !insn.addr !497
  %27 = add i64 %rbp.0.reload, 1, !insn.addr !498
  %28 = icmp eq i64 %5, %27, !insn.addr !499
  %29 = icmp eq i1 %28, false, !insn.addr !500
  store i64 %27, i64* %rbp.0.reg2mem, !insn.addr !500
  store i64 %18, i64* %r14.1.reg2mem, !insn.addr !500
  br i1 %29, label %dec_label_pc_312d, label %dec_label_pc_3140, !insn.addr !500

dec_label_pc_3140:                                ; preds = %dec_label_pc_312d, %dec_label_pc_3121, %dec_label_pc_30d4
  %r14.1.reload = load i64, i64* %r14.1.reg2mem
  call void @free(i64* nonnull %3), !insn.addr !501
  %30 = load i64, i64* %stack_var_-56, align 8, !insn.addr !502
  %sext4 = mul i64 %r14.1.reload, 4294967296
  %31 = ashr exact i64 %sext4, 32, !insn.addr !502
  %sext5 = mul i64 %30, 4294967296
  %32 = ashr exact i64 %sext5, 32, !insn.addr !502
  %33 = mul nsw i64 %32, %31, !insn.addr !502
  %34 = trunc i64 %33 to i32, !insn.addr !502
  %35 = load i32, i32* @global_var_7220, align 4, !insn.addr !503
  %36 = icmp eq i32 %35, %34, !insn.addr !504
  %37 = select i1 %36, i64 42, i64 4294967293, !insn.addr !505
  store i64 %37, i64* %rax.0.reg2mem, !insn.addr !506
  br label %dec_label_pc_3179, !insn.addr !506

dec_label_pc_316c:                                ; preds = %dec_label_pc_3103
  call void @free(i64* nonnull %3), !insn.addr !507
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !508
  br label %dec_label_pc_3179, !insn.addr !508

dec_label_pc_3179:                                ; preds = %dec_label_pc_30ae, %dec_label_pc_316c, %dec_label_pc_3140
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !509

; uselistorder directives
  uselistorder i64 %8, { 1, 0 }
  uselistorder i64 %5, { 2, 1, 0 }
  uselistorder i64* %3, { 0, 1, 3, 2 }
  uselistorder i32 %arg1.tr, { 1, 0 }
  uselistorder i64* %stack_var_-56, { 1, 0, 2 }
  uselistorder i64* %r14.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbp.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32* @global_var_7220, { 2, 1, 0 }
  uselistorder i64 %arg1, { 0, 2, 1 }
  uselistorder label %dec_label_pc_3179, { 1, 2, 0 }
  uselistorder label %dec_label_pc_312d, { 1, 0 }
}

define i64 @call_mutex_lock() local_unnamed_addr {
dec_label_pc_3188:
  %0 = call i64 @param_mutex_lock(i64 4, i64* bitcast (i32* @global_var_3e8 to i64*)), !insn.addr !510
  ret i64 %0, !insn.addr !510
}

define i64 @consumer_thread() local_unnamed_addr {
dec_label_pc_3197:
  %0 = call i32 @pthread_mutex_lock(i64* nonnull @global_var_7228), !insn.addr !511
  %1 = load i8, i8* @global_var_7250, align 1, !insn.addr !512
  %2 = icmp eq i8 %1, 0, !insn.addr !512
  %3 = icmp eq i1 %2, false, !insn.addr !513
  br i1 %3, label %dec_label_pc_31d2, label %dec_label_pc_31be, !insn.addr !513

dec_label_pc_31be:                                ; preds = %dec_label_pc_3197, %dec_label_pc_31be
  %4 = call i32 @pthread_cond_wait(i64* nonnull @global_var_7258, i64* nonnull @global_var_7228), !insn.addr !514
  %5 = load i8, i8* @global_var_7250, align 1, !insn.addr !515
  %6 = icmp eq i8 %5, 1, !insn.addr !515
  %7 = icmp eq i1 %6, false, !insn.addr !516
  br i1 %7, label %dec_label_pc_31be, label %dec_label_pc_31d2, !insn.addr !516

dec_label_pc_31d2:                                ; preds = %dec_label_pc_31be, %dec_label_pc_3197
  %8 = load i8, i8* @global_var_7288, align 1, !insn.addr !517
  %9 = icmp eq i8 %8, 0, !insn.addr !517
  %10 = select i1 %9, i32 0, i32 42, !insn.addr !518
  %11 = call i32 @pthread_mutex_unlock(i64* nonnull @global_var_7228), !insn.addr !519
  %12 = call i64* @malloc(i32 4), !insn.addr !520
  %13 = ptrtoint i64* %12 to i64, !insn.addr !520
  %14 = bitcast i64* %12 to i32*, !insn.addr !521
  store i32 %10, i32* %14, align 4, !insn.addr !521
  ret i64 %13, !insn.addr !522

; uselistorder directives
  uselistorder i32 4, { 1, 2, 3, 0 }
  uselistorder label %dec_label_pc_31be, { 1, 0 }
}

define i64 @producer_thread() local_unnamed_addr {
dec_label_pc_3203:
  %0 = call i32 @sleep(i32 1), !insn.addr !523
  %1 = call i32 @pthread_mutex_lock(i64* nonnull @global_var_7228), !insn.addr !524
  store i8 1, i8* @global_var_7288, align 1, !insn.addr !525
  store i8 1, i8* @global_var_7250, align 1, !insn.addr !526
  %2 = call i32 @pthread_cond_signal(i64* nonnull @global_var_7258), !insn.addr !527
  %3 = call i32 @pthread_mutex_unlock(i64* nonnull @global_var_7228), !insn.addr !528
  ret i64 0, !insn.addr !529

; uselistorder directives
  uselistorder i32 (i64*)* @pthread_mutex_unlock, { 2, 1, 0, 3 }
  uselistorder i64* @global_var_7258, { 1, 0 }
  uselistorder i32 (i64*)* @pthread_mutex_lock, { 2, 1, 0, 3 }
  uselistorder i64* @global_var_7228, { 1, 2, 3, 0, 4 }
}

define i64 @param_condition_variable(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_3243:
  %rbx.0.reg2mem = alloca i64, !insn.addr !530
  %stack_var_-16 = alloca i64, align 8
  %stack_var_-24 = alloca i32, align 4
  %stack_var_-32 = alloca i32, align 4
  store i8 0, i8* @global_var_7250, align 1, !insn.addr !531
  store i8 0, i8* @global_var_7288, align 1, !insn.addr !532
  %0 = call i32 @pthread_create(i32* nonnull %stack_var_-32, i64* null, i64* (i64*)* inttoptr (i64 12695 to i64* (i64*)*), i64* null), !insn.addr !533
  %1 = icmp eq i32 %0, 0, !insn.addr !534
  %2 = icmp eq i1 %1, false, !insn.addr !535
  store i64 4294967295, i64* %rbx.0.reg2mem, !insn.addr !535
  br i1 %2, label %dec_label_pc_32c6, label %dec_label_pc_3274, !insn.addr !535

dec_label_pc_3274:                                ; preds = %dec_label_pc_3243
  %3 = call i32 @pthread_create(i32* nonnull %stack_var_-24, i64* null, i64* (i64*)* inttoptr (i64 12803 to i64* (i64*)*), i64* null), !insn.addr !536
  %4 = icmp eq i32 %3, 0, !insn.addr !537
  %5 = load i32, i32* %stack_var_-32, align 4
  br i1 %4, label %dec_label_pc_329e, label %dec_label_pc_328d, !insn.addr !538

dec_label_pc_328d:                                ; preds = %dec_label_pc_3274
  %6 = call i32 @pthread_cancel(i32 %5), !insn.addr !539
  store i64 4294967294, i64* %rbx.0.reg2mem, !insn.addr !540
  br label %dec_label_pc_32c6, !insn.addr !540

dec_label_pc_329e:                                ; preds = %dec_label_pc_3274
  %7 = bitcast i64* %stack_var_-16 to i64**, !insn.addr !541
  %8 = call i32 @pthread_join(i32 %5, i64** nonnull %7), !insn.addr !541
  %9 = load i32, i32* %stack_var_-24, align 4, !insn.addr !542
  %10 = call i32 @pthread_join(i32 %9, i64** null), !insn.addr !543
  %11 = load i64, i64* %stack_var_-16, align 8, !insn.addr !544
  %12 = inttoptr i64 %11 to i32*, !insn.addr !545
  %13 = load i32, i32* %12, align 4, !insn.addr !545
  %14 = zext i32 %13 to i64, !insn.addr !545
  %15 = inttoptr i64 %11 to i64*, !insn.addr !546
  call void @free(i64* %15), !insn.addr !546
  store i64 %14, i64* %rbx.0.reg2mem, !insn.addr !546
  br label %dec_label_pc_32c6, !insn.addr !546

dec_label_pc_32c6:                                ; preds = %dec_label_pc_329e, %dec_label_pc_328d, %dec_label_pc_3243
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  ret i64 %rbx.0.reload, !insn.addr !547

; uselistorder directives
  uselistorder i64 %11, { 1, 0 }
  uselistorder i32 %5, { 1, 0 }
  uselistorder i64* %stack_var_-16, { 1, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 0, 2, 1, 3 }
  uselistorder i8* @global_var_7288, { 2, 1, 0 }
  uselistorder i8* @global_var_7250, { 3, 2, 1, 0 }
  uselistorder i8 0, { 0, 1, 4, 5, 6, 7, 8, 2, 3 }
}

define i64 @call_condition_variable() local_unnamed_addr {
dec_label_pc_32ce:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = call i64 @param_condition_variable(i64 %1, i64 %2, i64 %3, i64 %4), !insn.addr !548
  ret i64 %5, !insn.addr !548

; uselistorder directives
  uselistorder i64* %0, { 3, 2, 1, 0 }
}

define i64 @thread_atomic_increment(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_32d3:
  %0 = alloca i64
  %rcx.0.reg2mem = alloca i64, !insn.addr !549
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp slt i32 %2, 1
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !550
  br i1 %3, label %dec_label_pc_32f8, label %dec_label_pc_32db, !insn.addr !550

dec_label_pc_32db:                                ; preds = %dec_label_pc_32d3, %dec_label_pc_32db
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %4 = load i32, i32* inttoptr (i64 29324 to i32*), align 4, !insn.addr !551
  %5 = add i32 %4, 1, !insn.addr !551
  %6 = trunc i64 %rcx.0.reload to i32
  %7 = add i32 %6, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !552
  %8 = icmp eq i32 %5, %6, !insn.addr !553
  %9 = select i1 %8, i32 %7, i32 %5, !insn.addr !553
  store i32 %9, i32* @global_var_728c, align 4, !insn.addr !553
  %10 = add nuw nsw i64 %rcx.0.reload, 1, !insn.addr !554
  %11 = and i64 %10, 4294967295, !insn.addr !554
  %12 = trunc i64 %10 to i32, !insn.addr !555
  %13 = icmp eq i32 %2, %12, !insn.addr !555
  %14 = icmp eq i1 %13, false, !insn.addr !556
  store i64 %11, i64* %rcx.0.reg2mem, !insn.addr !556
  br i1 %14, label %dec_label_pc_32db, label %dec_label_pc_32f8, !insn.addr !556

dec_label_pc_32f8:                                ; preds = %dec_label_pc_32db, %dec_label_pc_32d3
  ret i64 0, !insn.addr !557

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i64 %rcx.0.reload, { 1, 0 }
  uselistorder i32 %2, { 1, 0 }
  uselistorder i64* %rcx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_32db, { 1, 0 }
}

define i64 @thread_atomic_load_store() local_unnamed_addr {
dec_label_pc_32fb:
  %0 = load i32, i32* @global_var_728c, align 4
  %1 = add i32 %0, 100, !insn.addr !558
  store i32 %1, i32* @global_var_728c, align 4, !insn.addr !559
  ret i64 0, !insn.addr !560
}

define i64 @param_atomic_ops(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_330d:
  %rax.0.reg2mem = alloca i64, !insn.addr !561
  %rbp.0.reg2mem = alloca i64, !insn.addr !561
  %r14.0.reg2mem = alloca i64, !insn.addr !561
  %stack_var_-56 = alloca i32, align 4
  %stack_var_-60 = alloca i64, align 8
  %sext = mul i64 %arg2, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !562
  store i64 %0, i64* %stack_var_-60, align 8, !insn.addr !562
  %arg1.tr = trunc i64 %arg1 to i32
  %1 = mul i32 %arg1.tr, 8, !insn.addr !563
  %2 = call i64* @malloc(i32 %1), !insn.addr !563
  %3 = icmp eq i64* %2, null, !insn.addr !564
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !565
  br i1 %3, label %dec_label_pc_33f5, label %dec_label_pc_3336, !insn.addr !565

dec_label_pc_3336:                                ; preds = %dec_label_pc_330d
  %4 = and i64 %arg1, 4294967295, !insn.addr !566
  %5 = ptrtoint i64* %2 to i64, !insn.addr !563
  store i32 0, i32* @global_var_728c, align 4, !insn.addr !567
  %6 = icmp slt i32 %arg1.tr, 1
  br i1 %6, label %dec_label_pc_3381, label %dec_label_pc_334c, !insn.addr !568

dec_label_pc_334c:                                ; preds = %dec_label_pc_3336
  %7 = mul i64 %4, 8, !insn.addr !569
  store i64 0, i64* %r14.0.reg2mem, !insn.addr !570
  br label %dec_label_pc_3363, !insn.addr !570

dec_label_pc_3363:                                ; preds = %dec_label_pc_3378, %dec_label_pc_334c
  %r14.0.reload = load i64, i64* %r14.0.reg2mem
  %8 = add i64 %r14.0.reload, %5, !insn.addr !571
  %9 = inttoptr i64 %8 to i32*, !insn.addr !572
  %10 = call i32 @pthread_create(i32* %9, i64* null, i64* (i64*)* inttoptr (i64 13011 to i64* (i64*)*), i64* nonnull %stack_var_-60), !insn.addr !572
  %11 = icmp eq i32 %10, 0, !insn.addr !573
  %12 = icmp eq i1 %11, false, !insn.addr !574
  br i1 %12, label %dec_label_pc_33e8, label %dec_label_pc_3378, !insn.addr !574

dec_label_pc_3378:                                ; preds = %dec_label_pc_3363
  %13 = add i64 %r14.0.reload, 8, !insn.addr !575
  %14 = icmp eq i64 %7, %13, !insn.addr !576
  %15 = icmp eq i1 %14, false, !insn.addr !577
  store i64 %13, i64* %r14.0.reg2mem, !insn.addr !577
  br i1 %15, label %dec_label_pc_3363, label %dec_label_pc_3381, !insn.addr !577

dec_label_pc_3381:                                ; preds = %dec_label_pc_3378, %dec_label_pc_3336
  %16 = call i32 @pthread_create(i32* nonnull %stack_var_-56, i64* null, i64* (i64*)* inttoptr (i64 13051 to i64* (i64*)*), i64* null), !insn.addr !578
  %17 = icmp eq i32 %16, 0, !insn.addr !579
  %18 = icmp eq i1 %17, false, !insn.addr !580
  br i1 %18, label %dec_label_pc_33a6, label %dec_label_pc_339a, !insn.addr !580

dec_label_pc_339a:                                ; preds = %dec_label_pc_3381
  %19 = load i32, i32* %stack_var_-56, align 4, !insn.addr !581
  %20 = call i32 @pthread_join(i32 %19, i64** null), !insn.addr !582
  br label %dec_label_pc_33a6, !insn.addr !582

dec_label_pc_33a6:                                ; preds = %dec_label_pc_339a, %dec_label_pc_3381
  store i64 0, i64* %rbp.0.reg2mem, !insn.addr !583
  br i1 %6, label %dec_label_pc_33c2, label %dec_label_pc_33af, !insn.addr !583

dec_label_pc_33af:                                ; preds = %dec_label_pc_33a6, %dec_label_pc_33af
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %21 = mul i64 %rbp.0.reload, 8, !insn.addr !584
  %22 = add i64 %21, %5, !insn.addr !584
  %23 = inttoptr i64 %22 to i64*, !insn.addr !584
  %24 = load i64, i64* %23, align 8, !insn.addr !584
  %25 = trunc i64 %24 to i32, !insn.addr !585
  %26 = call i32 @pthread_join(i32 %25, i64** null), !insn.addr !585
  %27 = add i64 %rbp.0.reload, 1, !insn.addr !586
  %28 = icmp eq i64 %4, %27, !insn.addr !587
  %29 = icmp eq i1 %28, false, !insn.addr !588
  store i64 %27, i64* %rbp.0.reg2mem, !insn.addr !588
  br i1 %29, label %dec_label_pc_33af, label %dec_label_pc_33c2, !insn.addr !588

dec_label_pc_33c2:                                ; preds = %dec_label_pc_33af, %dec_label_pc_33a6
  %30 = load i32, i32* @global_var_728c, align 4, !insn.addr !589
  call void @free(i64* nonnull %2), !insn.addr !590
  %31 = icmp eq i32 %30, 0, !insn.addr !591
  %32 = icmp slt i32 %30, 0, !insn.addr !591
  %33 = icmp eq i1 %32, false, !insn.addr !592
  %34 = icmp eq i1 %31, false, !insn.addr !592
  %35 = icmp eq i1 %33, %34, !insn.addr !592
  %36 = select i1 %35, i64 42, i64 4294967293, !insn.addr !592
  store i64 %36, i64* %rax.0.reg2mem, !insn.addr !593
  br label %dec_label_pc_33f5, !insn.addr !593

dec_label_pc_33e8:                                ; preds = %dec_label_pc_3363
  call void @free(i64* nonnull %2), !insn.addr !594
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !595
  br label %dec_label_pc_33f5, !insn.addr !595

dec_label_pc_33f5:                                ; preds = %dec_label_pc_330d, %dec_label_pc_33e8, %dec_label_pc_33c2
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !596

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
  uselistorder i64 4294967296, { 0, 1, 2, 3, 4, 7, 8, 5, 6 }
  uselistorder i64 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_33f5, { 1, 2, 0 }
  uselistorder label %dec_label_pc_33af, { 1, 0 }
}

define i64 @call_atomic_ops() local_unnamed_addr {
dec_label_pc_3404:
  %0 = call i64 @param_atomic_ops(i64 4, i64 500), !insn.addr !597
  ret i64 %0, !insn.addr !597
}

define i64 @thread_tls_test(i64 %arg1) local_unnamed_addr {
dec_label_pc_3413:
  %0 = call i32 @__readfsdword(i64 -48), !insn.addr !598
  %1 = add i32 %0, 50, !insn.addr !599
  call void @__writefsdword(i64 -48, i32 %1), !insn.addr !600
  %2 = call i64 @__readfsqword(i64 0), !insn.addr !601
  %3 = add i64 %2, -32, !insn.addr !602
  %4 = inttoptr i64 %3 to i8*, !insn.addr !603
  %5 = inttoptr i64 %arg1 to i8*, !insn.addr !603
  %6 = call i8* @strncpy(i8* %4, i8* %5, i32 31), !insn.addr !603
  %7 = call i64* @malloc(i32 8), !insn.addr !604
  %8 = ptrtoint i64* %7 to i64, !insn.addr !604
  %9 = bitcast i64* %7 to i32*, !insn.addr !605
  store i32 %0, i32* %9, align 4, !insn.addr !605
  %10 = add i64 %8, 4, !insn.addr !606
  %11 = inttoptr i64 %10 to i32*, !insn.addr !606
  store i32 %1, i32* %11, align 4, !insn.addr !606
  ret i64 %8, !insn.addr !607

; uselistorder directives
  uselistorder i64 %8, { 1, 0 }
}

define i64 @param_thread_local_storage(i64 %arg1) local_unnamed_addr {
dec_label_pc_345c:
  %rax.0.reg2mem = alloca i64, !insn.addr !608
  %rbx.4.reg2mem = alloca i64, !insn.addr !608
  %r15.1.reg2mem = alloca i32, !insn.addr !608
  %rbx.3.reg2mem = alloca i32, !insn.addr !608
  %r15.0.reg2mem = alloca i32, !insn.addr !608
  %rbp.0.reg2mem = alloca i64, !insn.addr !608
  %rbx.2.reg2mem = alloca i32, !insn.addr !608
  %r14.0.reg2mem = alloca i64, !insn.addr !608
  %rbx.1.reg2mem = alloca i64, !insn.addr !608
  %rbx.0.reg2mem = alloca i64, !insn.addr !608
  %stack_var_-56 = alloca i64, align 8
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 8, !insn.addr !609
  %1 = call i64* @malloc(i32 %0), !insn.addr !609
  %2 = call i64* @malloc(i32 %0), !insn.addr !610
  %3 = icmp eq i64* %1, null, !insn.addr !611
  %4 = icmp eq i64* %2, null, !insn.addr !612
  %or.cond = or i1 %3, %4
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !613
  br i1 %or.cond, label %dec_label_pc_35d5, label %dec_label_pc_34a0, !insn.addr !613

dec_label_pc_34a0:                                ; preds = %dec_label_pc_345c
  %5 = and i64 %arg1, 4294967295, !insn.addr !614
  %6 = ptrtoint i64* %1 to i64, !insn.addr !609
  %7 = ptrtoint i64* %2 to i64, !insn.addr !610
  %8 = icmp slt i32 %arg1.tr, 1
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !615
  store i32 0, i32* %rbx.3.reg2mem, !insn.addr !615
  store i32 0, i32* %r15.1.reg2mem, !insn.addr !615
  br i1 %8, label %dec_label_pc_3572, label %dec_label_pc_34b4, !insn.addr !615

dec_label_pc_34b4:                                ; preds = %dec_label_pc_34a0, %dec_label_pc_34b4
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %9 = call i64* @malloc(i32 16), !insn.addr !616
  %10 = ptrtoint i64* %9 to i64, !insn.addr !616
  %11 = mul i64 %rbx.0.reload, 8, !insn.addr !617
  %12 = add i64 %11, %7, !insn.addr !617
  %13 = inttoptr i64 %12 to i64*, !insn.addr !617
  store i64 %10, i64* %13, align 8, !insn.addr !617
  %14 = and i64 %rbx.0.reload, 4294967295, !insn.addr !618
  %15 = bitcast i64* %9 to i8*, !insn.addr !619
  %16 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %15, i32 16, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_42fc, i64 0, i64 0), i64 %14), !insn.addr !619
  %17 = add i64 %rbx.0.reload, 1, !insn.addr !620
  %18 = icmp eq i64 %5, %17, !insn.addr !621
  %19 = icmp eq i1 %18, false, !insn.addr !622
  store i64 %17, i64* %rbx.0.reg2mem, !insn.addr !622
  store i64 %6, i64* %rbx.1.reg2mem, !insn.addr !622
  store i64 0, i64* %r14.0.reg2mem, !insn.addr !622
  br i1 %19, label %dec_label_pc_34b4, label %dec_label_pc_34f9, !insn.addr !622

dec_label_pc_34f9:                                ; preds = %dec_label_pc_34b4, %dec_label_pc_3513
  %r14.0.reload = load i64, i64* %r14.0.reg2mem
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %20 = mul i64 %r14.0.reload, 8, !insn.addr !623
  %21 = add i64 %20, %7, !insn.addr !623
  %22 = inttoptr i64 %21 to i64*, !insn.addr !623
  %23 = load i64, i64* %22, align 8, !insn.addr !623
  %24 = inttoptr i64 %rbx.1.reload to i32*, !insn.addr !624
  %25 = inttoptr i64 %23 to i64*, !insn.addr !624
  %26 = call i32 @pthread_create(i32* %24, i64* null, i64* (i64*)* inttoptr (i64 13331 to i64* (i64*)*), i64* %25), !insn.addr !624
  %27 = icmp eq i32 %26, 0, !insn.addr !625
  %28 = icmp eq i1 %27, false, !insn.addr !626
  br i1 %28, label %dec_label_pc_35ac.preheader, label %dec_label_pc_3513, !insn.addr !626

dec_label_pc_35ac.preheader:                      ; preds = %dec_label_pc_34f9
  %29 = add i64 %7, 8, !insn.addr !627
  store i64 -1, i64* %rbx.4.reg2mem
  br label %dec_label_pc_35ac

dec_label_pc_3513:                                ; preds = %dec_label_pc_34f9
  %30 = add i64 %r14.0.reload, 1, !insn.addr !628
  %31 = add i64 %rbx.1.reload, 8, !insn.addr !629
  %32 = icmp eq i64 %5, %30, !insn.addr !630
  %33 = icmp eq i1 %32, false, !insn.addr !631
  store i64 %31, i64* %rbx.1.reg2mem, !insn.addr !631
  store i64 %30, i64* %r14.0.reg2mem, !insn.addr !631
  br i1 %33, label %dec_label_pc_34f9, label %dec_label_pc_3537.preheader, !insn.addr !631

dec_label_pc_3537.preheader:                      ; preds = %dec_label_pc_3513
  %34 = bitcast i64* %stack_var_-56 to i64**, !insn.addr !632
  store i32 0, i32* %rbx.2.reg2mem
  store i64 0, i64* %rbp.0.reg2mem
  store i32 0, i32* %r15.0.reg2mem
  br label %dec_label_pc_3537

dec_label_pc_3537:                                ; preds = %dec_label_pc_3537.preheader, %dec_label_pc_3537
  %r15.0.reload = load i32, i32* %r15.0.reg2mem
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %rbx.2.reload = load i32, i32* %rbx.2.reg2mem
  %35 = mul i64 %rbp.0.reload, 8, !insn.addr !633
  %36 = add i64 %35, %6, !insn.addr !633
  %37 = inttoptr i64 %36 to i64*, !insn.addr !633
  %38 = load i64, i64* %37, align 8, !insn.addr !633
  %39 = trunc i64 %38 to i32, !insn.addr !632
  %40 = call i32 @pthread_join(i32 %39, i64** nonnull %34), !insn.addr !632
  %41 = load i64, i64* %stack_var_-56, align 8, !insn.addr !634
  %42 = inttoptr i64 %41 to i32*, !insn.addr !635
  %43 = load i32, i32* %42, align 4, !insn.addr !635
  %44 = add i32 %43, %rbx.2.reload, !insn.addr !635
  %45 = add i64 %41, 4, !insn.addr !636
  %46 = inttoptr i64 %45 to i32*, !insn.addr !636
  %47 = load i32, i32* %46, align 4, !insn.addr !636
  %48 = add i32 %47, %r15.0.reload, !insn.addr !636
  %49 = inttoptr i64 %41 to i64*, !insn.addr !637
  call void @free(i64* %49), !insn.addr !637
  %50 = add i64 %35, %7, !insn.addr !638
  %51 = inttoptr i64 %50 to i64*, !insn.addr !638
  %52 = load i64, i64* %51, align 8, !insn.addr !638
  %53 = inttoptr i64 %52 to i64*, !insn.addr !639
  call void @free(i64* %53), !insn.addr !639
  %54 = add i64 %rbp.0.reload, 1, !insn.addr !640
  %55 = icmp eq i64 %5, %54, !insn.addr !641
  %56 = icmp eq i1 %55, false, !insn.addr !642
  store i32 %44, i32* %rbx.2.reg2mem, !insn.addr !642
  store i64 %54, i64* %rbp.0.reg2mem, !insn.addr !642
  store i32 %48, i32* %r15.0.reg2mem, !insn.addr !642
  store i32 %44, i32* %rbx.3.reg2mem, !insn.addr !642
  store i32 %48, i32* %r15.1.reg2mem, !insn.addr !642
  br i1 %56, label %dec_label_pc_3537, label %dec_label_pc_3572, !insn.addr !642

dec_label_pc_3572:                                ; preds = %dec_label_pc_3537, %dec_label_pc_34a0
  %r15.1.reload = load i32, i32* %r15.1.reg2mem
  %rbx.3.reload = load i32, i32* %rbx.3.reg2mem
  call void @free(i64* %2), !insn.addr !643
  call void @free(i64* %1), !insn.addr !644
  %57 = mul i32 %arg1.tr, 100, !insn.addr !645
  %58 = mul i32 %arg1.tr, 150, !insn.addr !646
  %59 = icmp eq i32 %58, %r15.1.reload
  %60 = icmp eq i32 %57, %rbx.3.reload
  %61 = icmp eq i1 %60, %59, !insn.addr !647
  %62 = select i1 %61, i64 42, i64 4294967293, !insn.addr !648
  store i64 %62, i64* %rax.0.reg2mem, !insn.addr !649
  br label %dec_label_pc_35d5, !insn.addr !649

dec_label_pc_35ac:                                ; preds = %dec_label_pc_35ac.preheader, %dec_label_pc_35ac
  %rbx.4.reload = load i64, i64* %rbx.4.reg2mem
  %63 = mul i64 %rbx.4.reload, 8, !insn.addr !627
  %64 = add i64 %29, %63, !insn.addr !627
  %65 = inttoptr i64 %64 to i64*, !insn.addr !627
  %66 = load i64, i64* %65, align 8, !insn.addr !627
  %67 = inttoptr i64 %66 to i64*, !insn.addr !650
  call void @free(i64* %67), !insn.addr !650
  %68 = add i64 %rbx.4.reload, 1, !insn.addr !651
  %69 = icmp eq i64 %r14.0.reload, %68, !insn.addr !652
  %70 = icmp eq i1 %69, false, !insn.addr !653
  store i64 %68, i64* %rbx.4.reg2mem, !insn.addr !653
  br i1 %70, label %dec_label_pc_35ac, label %dec_label_pc_35be, !insn.addr !653

dec_label_pc_35be:                                ; preds = %dec_label_pc_35ac
  call void @free(i64* %2), !insn.addr !654
  call void @free(i64* %1), !insn.addr !655
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !656
  br label %dec_label_pc_35d5, !insn.addr !656

dec_label_pc_35d5:                                ; preds = %dec_label_pc_35be, %dec_label_pc_3572, %dec_label_pc_345c
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !657

; uselistorder directives
  uselistorder i64 %41, { 1, 2, 0 }
  uselistorder i64 %35, { 1, 0 }
  uselistorder i64 %rbx.1.reload, { 1, 0 }
  uselistorder i64 %r14.0.reload, { 1, 0, 2 }
  uselistorder i64 %rbx.0.reload, { 1, 0, 2 }
  uselistorder i64 %7, { 0, 3, 1, 2 }
  uselistorder i64 %6, { 1, 0 }
  uselistorder i64 %5, { 2, 1, 0 }
  uselistorder i64* %2, { 0, 1, 3, 2 }
  uselistorder i64* %1, { 0, 1, 3, 2 }
  uselistorder i32 %arg1.tr, { 2, 1, 3, 0 }
  uselistorder i64* %stack_var_-56, { 1, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r14.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rbx.2.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbp.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r15.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.4.reg2mem, { 2, 0, 1 }
  uselistorder i64 4294967294, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 10 }
  uselistorder i64 4294967293, { 5, 6, 7, 0, 1, 2, 8, 3, 9, 4 }
  uselistorder i64 42, { 1, 2, 3, 0, 4, 5, 6, 7, 8, 9, 11, 10, 12 }
  uselistorder void (i64*)* @free, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14 }
  uselistorder i32 (i32, i64**)* @pthread_join, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder i32 (i32*, i64*, i64* (i64*)*, i64*)* @pthread_create, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder i1 false, { 5, 6, 7, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 3, 35, 4, 36, 37, 38, 0, 39, 40, 1, 41, 42, 43, 44, 45, 46, 47 }
  uselistorder i64 1, { 4, 5, 6, 7, 8, 0, 9, 10, 1, 11, 12, 2, 3 }
  uselistorder i64 8, { 0, 1, 10, 9, 2, 3, 4, 11, 5, 6, 12, 7, 8, 13, 14, 15 }
  uselistorder i32 0, { 2, 3, 24, 0, 1, 25, 26, 27, 28, 6, 29, 30, 7, 31, 32, 33, 34, 4, 35, 36, 37, 8, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 9, 10, 48, 49, 50, 51, 52, 53, 54, 11, 12, 13, 14, 56, 55, 57, 58, 15, 16, 59, 17, 61, 60, 62, 63, 5, 64, 18, 65, 66, 19, 20, 21, 22, 23 }
  uselistorder i64* null, { 1, 0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 }
  uselistorder i64* (i32)* @malloc, { 8, 7, 6, 5, 4, 3, 2, 1, 0, 9 }
  uselistorder i32 8, { 0, 3, 1, 2 }
  uselistorder i64 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_35ac, { 1, 0 }
  uselistorder label %dec_label_pc_3537, { 1, 0 }
  uselistorder label %dec_label_pc_34f9, { 1, 0 }
  uselistorder label %dec_label_pc_34b4, { 1, 0 }
}

define i64 @call_thread_local_storage() local_unnamed_addr {
dec_label_pc_35f0:
  %0 = call i64 @param_thread_local_storage(i64 4), !insn.addr !658
  ret i64 %0, !insn.addr !658
}

define i64 @test_thread_concurrency() local_unnamed_addr {
dec_label_pc_35fa:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = call i32 @puts(i8* bitcast (i8** @global_var_43ee to i8*)), !insn.addr !659
  %5 = call i64 @param_pthread_create(i64 7, i64 %1), !insn.addr !660
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4306 to i8*)), !insn.addr !661
  %7 = call i64 @param_pthread_join(), !insn.addr !662
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4322 to i8*)), !insn.addr !663
  %9 = call i64 @param_mutex_lock(i64 4, i64* bitcast (i32* @global_var_3e8 to i64*)), !insn.addr !664
  %10 = and i64 %9, 4294967295, !insn.addr !665
  %11 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_433f to i8*)), !insn.addr !666
  %12 = call i64 @param_condition_variable(i64 ptrtoint (i8** @global_var_433f to i64), i64 %10, i64 %2, i64 %3), !insn.addr !667
  %13 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_435b to i8*)), !insn.addr !668
  %14 = call i64 @param_atomic_ops(i64 4, i64 500), !insn.addr !669
  %15 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4377 to i8*)), !insn.addr !670
  %16 = call i64 @param_thread_local_storage(i64 4), !insn.addr !671
  %17 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4393 to i8*)), !insn.addr !672
  %18 = sext i32 %17 to i64, !insn.addr !672
  ret i64 %18, !insn.addr !672

; uselistorder directives
  uselistorder i64* %0, { 2, 1, 0 }
  uselistorder i64 (i64)* @param_thread_local_storage, { 1, 0 }
  uselistorder i64 (i64, i64)* @param_atomic_ops, { 1, 0 }
  uselistorder i64 (i64, i64, i64, i64)* @param_condition_variable, { 1, 0 }
  uselistorder i8** @global_var_433f, { 1, 0 }
  uselistorder i64 4294967295, { 16, 17, 18, 0, 19, 1, 20, 2, 21, 22, 3, 4, 23, 24, 5, 25, 26, 27, 28, 29, 6, 30, 7, 8, 9, 10, 31, 11, 32, 33, 34, 35, 38, 37, 36, 39, 40, 12, 13, 14, 41, 42, 43, 15, 44, 45, 46 }
  uselistorder i64 (i64, i64*)* @param_mutex_lock, { 1, 0 }
  uselistorder i64 4, { 2, 3, 4, 5, 8, 9, 6, 7, 10, 0, 1 }
  uselistorder i64 ()* @param_pthread_join, { 1, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 28 }
  uselistorder i64 (i64, i64)* @param_pthread_create, { 1, 0 }
  uselistorder i32 (i8*)* @puts, { 2, 0, 1, 3 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_36a4:
  %0 = call i64 @test_standard_library_functions(), !insn.addr !673
  %1 = call i64 @test_system_calls(), !insn.addr !674
  %2 = call i64 @test_thread_concurrency(), !insn.addr !675
  ret i64 0, !insn.addr !676

; uselistorder directives
  uselistorder i64 0, { 16, 0, 1, 27, 28, 2, 87, 3, 4, 17, 18, 5, 19, 6, 7, 20, 8, 9, 21, 88, 89, 90, 91, 92, 114, 115, 116, 117, 93, 94, 22, 10, 11, 12, 118, 13, 14, 119, 95, 96, 97, 98, 23, 24, 99, 100, 101, 102, 103, 104, 105, 106, 107, 25, 108, 120, 26, 15, 121, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 109, 110, 111, 112, 113 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_36b8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !677

; uselistorder directives
  uselistorder i32 1, { 22, 21, 73, 96, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 74, 89, 88, 38, 37, 36, 116, 75, 39, 20, 19, 90, 91, 97, 40, 76, 77, 78, 98, 44, 43, 42, 41, 79, 45, 18, 101, 100, 99, 51, 50, 49, 48, 47, 46, 1, 87, 17, 103, 92, 102, 52, 16, 104, 15, 117, 14, 80, 57, 56, 55, 54, 53, 58, 13, 81, 82, 106, 105, 59, 108, 93, 107, 60, 25, 12, 94, 61, 109, 11, 110, 10, 9, 62, 95, 24, 65, 64, 63, 8, 69, 68, 67, 66, 83, 84, 111, 70, 0, 71, 7, 23, 6, 113, 112, 5, 85, 4, 86, 114, 3, 2, 115, 72 }
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
!78 = !{i64 9392}
!79 = !{i64 9401}
!80 = !{i64 9423}
!81 = !{i64 9430}
!82 = !{i64 9439}
!83 = !{i64 9441}
!84 = !{i64 9448}
!85 = !{i64 9450}
!86 = !{i64 9462}
!87 = !{i64 9466}
!88 = !{i64 9469}
!89 = !{i64 9470}
!90 = !{i64 9480}
!91 = !{i64 9485}
!92 = !{i64 9490}
!93 = !{i64 9493}
!94 = !{i64 9499}
!95 = !{i64 9501}
!96 = !{i64 9508}
!97 = !{i64 9510}
!98 = !{i64 9522}
!99 = !{i64 9526}
!100 = !{i64 9532}
!101 = !{i64 9536}
!102 = !{i64 9547}
!103 = !{i64 9573}
!104 = !{i64 9605}
!105 = !{i64 9610}
!106 = !{i64 9612}
!107 = !{i64 9615}
!108 = !{i64 9623}
!109 = !{i64 9633}
!110 = !{i64 9637}
!111 = !{i64 9668}
!112 = !{i64 9675}
!113 = !{i64 9678}
!114 = !{i64 9686}
!115 = !{i64 9696}
!116 = !{i64 9697}
!117 = !{i64 9707}
!118 = !{i64 9712}
!119 = !{i64 9715}
!120 = !{i64 9723}
!121 = !{i64 9733}
!122 = !{i64 9738}
!123 = !{i64 9740}
!124 = !{i64 9753}
!125 = !{i64 9762}
!126 = !{i64 9767}
!127 = !{i64 9770}
!128 = !{i64 9774}
!129 = !{i64 9775}
!130 = !{i64 9794}
!131 = !{i64 9799}
!132 = !{i64 9802}
!133 = !{i64 9831}
!134 = !{i64 9836}
!135 = !{i64 9840}
!136 = !{i64 9780}
!137 = !{i64 9845}
!138 = !{i64 9866}
!139 = !{i64 9874}
!140 = !{i64 9881}
!141 = !{i64 9889}
!142 = !{i64 9899}
!143 = !{i64 9903}
!144 = !{i64 9905}
!145 = !{i64 9910}
!146 = !{i64 9916}
!147 = !{i64 9924}
!148 = !{i64 9932}
!149 = !{i64 9936}
!150 = !{i64 9940}
!151 = !{i64 9955}
!152 = !{i64 9958}
!153 = !{i64 9970}
!154 = !{i64 9975}
!155 = !{i64 9989}
!156 = !{i64 9997}
!157 = !{i64 10002}
!158 = !{i64 10016}
!159 = !{i64 10021}
!160 = !{i64 10024}
!161 = !{i64 10026}
!162 = !{i64 10029}
!163 = !{i64 10035}
!164 = !{i64 10038}
!165 = !{i64 10041}
!166 = !{i64 10044}
!167 = !{i64 10047}
!168 = !{i64 10049}
!169 = !{i64 10051}
!170 = !{i64 10060}
!171 = !{i64 10067}
!172 = !{i64 10080}
!173 = !{i64 10086}
!174 = !{i64 10091}
!175 = !{i64 10108}
!176 = !{i64 10113}
!177 = !{i64 10116}
!178 = !{i64 10122}
!179 = !{i64 10127}
!180 = !{i64 10129}
!181 = !{i64 10132}
!182 = !{i64 10135}
!183 = !{i64 10143}
!184 = !{i64 10146}
!185 = !{i64 10157}
!186 = !{i64 10164}
!187 = !{i64 10166}
!188 = !{i64 10172}
!189 = !{i64 10180}
!190 = !{i64 10187}
!191 = !{i64 10189}
!192 = !{i64 10195}
!193 = !{i64 10197}
!194 = !{i64 10203}
!195 = !{i64 10209}
!196 = !{i64 10224}
!197 = !{i64 10244}
!198 = !{i64 10251}
!199 = !{i64 10267}
!200 = !{i64 10283}
!201 = !{i64 10302}
!202 = !{i64 10321}
!203 = !{i64 10326}
!204 = !{i64 10342}
!205 = !{i64 10368}
!206 = !{i64 10384}
!207 = !{i64 10413}
!208 = !{i64 10421}
!209 = !{i64 10428}
!210 = !{i64 10451}
!211 = !{i64 10463}
!212 = !{i64 10485}
!213 = !{i64 10497}
!214 = !{i64 10509}
!215 = !{i64 10513}
!216 = !{i64 10523}
!217 = !{i64 10539}
!218 = !{i64 10555}
!219 = !{i64 10574}
!220 = !{i64 10586}
!221 = !{i64 10587}
!222 = !{i64 10604}
!223 = !{i64 10612}
!224 = !{i64 10614}
!225 = !{i64 10625}
!226 = !{i64 10630}
!227 = !{i64 10632}
!228 = !{i64 10637}
!229 = !{i64 10639}
!230 = !{i64 10641}
!231 = !{i64 10649}
!232 = !{i64 10658}
!233 = !{i64 10663}
!234 = !{i64 10666}
!235 = !{i64 10670}
!236 = !{i64 10685}
!237 = !{i64 10690}
!238 = !{i64 10705}
!239 = !{i64 10708}
!240 = !{i64 10715}
!241 = !{i64 10726}
!242 = !{i64 10748}
!243 = !{i64 10753}
!244 = !{i64 10768}
!245 = !{i64 10771}
!246 = !{i64 10778}
!247 = !{i64 10789}
!248 = !{i64 10790}
!249 = !{i64 10800}
!250 = !{i64 10805}
!251 = !{i64 10807}
!252 = !{i64 10809}
!253 = !{i64 10820}
!254 = !{i64 10825}
!255 = !{i64 10827}
!256 = !{i64 10829}
!257 = !{i64 10838}
!258 = !{i64 10841}
!259 = !{i64 10843}
!260 = !{i64 10846}
!261 = !{i64 10867}
!262 = !{i64 10881}
!263 = !{i64 10891}
!264 = !{i64 10906}
!265 = !{i64 10911}
!266 = !{i64 10915}
!267 = !{i64 10919}
!268 = !{i64 10920}
!269 = !{i64 10925}
!270 = !{i64 10930}
!271 = !{i64 10935}
!272 = !{i64 10937}
!273 = !{i64 10939}
!274 = !{i64 10944}
!275 = !{i64 10946}
!276 = !{i64 10948}
!277 = !{i64 10921}
!278 = !{i64 10954}
!279 = !{i64 10959}
!280 = !{i64 10973}
!281 = !{i64 10981}
!282 = !{i64 10986}
!283 = !{i64 10990}
!284 = !{i64 10997}
!285 = !{i64 11002}
!286 = !{i64 11015}
!287 = !{i64 11018}
!288 = !{i64 11037}
!289 = !{i64 11038}
!290 = !{i64 11042}
!291 = !{i64 11063}
!292 = !{i64 11072}
!293 = !{i64 11079}
!294 = !{i64 11084}
!295 = !{i64 11089}
!296 = !{i64 11107}
!297 = !{i64 11112}
!298 = !{i64 11114}
!299 = !{i64 11123}
!300 = !{i64 11147}
!301 = !{i64 11152}
!302 = !{i64 11154}
!303 = !{i64 11169}
!304 = !{i64 11183}
!305 = !{i64 11188}
!306 = !{i64 11190}
!307 = !{i64 11199}
!308 = !{i64 11208}
!309 = !{i64 11213}
!310 = !{i64 11225}
!311 = !{i64 11228}
!312 = !{i64 11239}
!313 = !{i64 11249}
!314 = !{i64 11253}
!315 = !{i64 11258}
!316 = !{i64 11269}
!317 = !{i64 11270}
!318 = !{i64 11275}
!319 = !{i64 11298}
!320 = !{i64 11308}
!321 = !{i64 11310}
!322 = !{i64 11318}
!323 = !{i64 11335}
!324 = !{i64 11340}
!325 = !{i64 11342}
!326 = !{i64 11356}
!327 = !{i64 11361}
!328 = !{i64 11363}
!329 = !{i64 11374}
!330 = !{i64 11379}
!331 = !{i64 11383}
!332 = !{i64 11398}
!333 = !{i64 11412}
!334 = !{i64 11419}
!335 = !{i64 11430}
!336 = !{i64 11442}
!337 = !{i64 11447}
!338 = !{i64 11467}
!339 = !{i64 11469}
!340 = !{i64 11474}
!341 = !{i64 11486}
!342 = !{i64 11490}
!343 = !{i64 11491}
!344 = !{i64 11504}
!345 = !{i64 11509}
!346 = !{i64 11513}
!347 = !{i64 11531}
!348 = !{i64 11536}
!349 = !{i64 11540}
!350 = !{i64 11546}
!351 = !{i64 11561}
!352 = !{i64 11566}
!353 = !{i64 11573}
!354 = !{i64 11585}
!355 = !{i64 11590}
!356 = !{i64 11597}
!357 = !{i64 11599}
!358 = !{i64 11602}
!359 = !{i64 11605}
!360 = !{i64 11607}
!361 = !{i64 11609}
!362 = !{i64 11616}
!363 = !{i64 11622}
!364 = !{i64 11633}
!365 = !{i64 11636}
!366 = !{i64 11642}
!367 = !{i64 11657}
!368 = !{i64 11662}
!369 = !{i64 11669}
!370 = !{i64 11681}
!371 = !{i64 11686}
!372 = !{i64 11693}
!373 = !{i64 11695}
!374 = !{i64 11698}
!375 = !{i64 11701}
!376 = !{i64 11703}
!377 = !{i64 11710}
!378 = !{i64 11717}
!379 = !{i64 11719}
!380 = !{i64 11725}
!381 = !{i64 11728}
!382 = !{i64 11737}
!383 = !{i64 11749}
!384 = !{i64 11759}
!385 = !{i64 11781}
!386 = !{i64 11782}
!387 = !{i64 11792}
!388 = !{i64 11798}
!389 = !{i64 11799}
!390 = !{i64 11822}
!391 = !{i64 11837}
!392 = !{i64 11863}
!393 = !{i64 11877}
!394 = !{i64 11914}
!395 = !{i64 11928}
!396 = !{i64 11949}
!397 = !{i64 11954}
!398 = !{i64 11966}
!399 = !{i64 11970}
!400 = !{i64 11975}
!401 = !{i64 11991}
!402 = !{i64 11996}
!403 = !{i64 12017}
!404 = !{i64 12022}
!405 = !{i64 12049}
!406 = !{i64 12057}
!407 = !{i64 12065}
!408 = !{i64 12070}
!409 = !{i64 12073}
!410 = !{i64 12074}
!411 = !{i64 12084}
!412 = !{i64 12100}
!413 = !{i64 12110}
!414 = !{i64 12112}
!415 = !{i64 12114}
!416 = !{i64 12127}
!417 = !{i64 12132}
!418 = !{i64 12135}
!419 = !{i64 12137}
!420 = !{i64 12149}
!421 = !{i64 12155}
!422 = !{i64 12160}
!423 = !{i64 12167}
!424 = !{i64 12170}
!425 = !{i64 12178}
!426 = !{i64 12175}
!427 = !{i64 12180}
!428 = !{i64 12184}
!429 = !{i64 12190}
!430 = !{i64 12192}
!431 = !{i64 12194}
!432 = !{i64 12198}
!433 = !{i64 12201}
!434 = !{i64 12204}
!435 = !{i64 12206}
!436 = !{i64 12211}
!437 = !{i64 12212}
!438 = !{i64 12216}
!439 = !{i64 12220}
!440 = !{i64 12223}
!441 = !{i64 12228}
!442 = !{i64 12231}
!443 = !{i64 12252}
!444 = !{i64 12285}
!445 = !{i64 12292}
!446 = !{i64 12304}
!447 = !{i64 12309}
!448 = !{i64 12311}
!449 = !{i64 12313}
!450 = !{i64 12317}
!451 = !{i64 12321}
!452 = !{i64 12325}
!453 = !{i64 12327}
!454 = !{i64 12334}
!455 = !{i64 12337}
!456 = !{i64 12343}
!457 = !{i64 12348}
!458 = !{i64 12350}
!459 = !{i64 12352}
!460 = !{i64 12355}
!461 = !{i64 12358}
!462 = !{i64 12362}
!463 = !{i64 12366}
!464 = !{i64 12395}
!465 = !{i64 12396}
!466 = !{i64 12401}
!467 = !{i64 12408}
!468 = !{i64 12420}
!469 = !{i64 12425}
!470 = !{i64 12434}
!471 = !{i64 12444}
!472 = !{i64 12449}
!473 = !{i64 12451}
!474 = !{i64 12461}
!475 = !{i64 12462}
!476 = !{i64 12476}
!477 = !{i64 12486}
!478 = !{i64 12491}
!479 = !{i64 12494}
!480 = !{i64 12473}
!481 = !{i64 12503}
!482 = !{i64 12516}
!483 = !{i64 12518}
!484 = !{i64 12526}
!485 = !{i64 12544}
!486 = !{i64 12547}
!487 = !{i64 12559}
!488 = !{i64 12564}
!489 = !{i64 12566}
!490 = !{i64 12568}
!491 = !{i64 12572}
!492 = !{i64 12575}
!493 = !{i64 12577}
!494 = !{i64 12582}
!495 = !{i64 12585}
!496 = !{i64 12589}
!497 = !{i64 12595}
!498 = !{i64 12600}
!499 = !{i64 12603}
!500 = !{i64 12606}
!501 = !{i64 12611}
!502 = !{i64 12616}
!503 = !{i64 12621}
!504 = !{i64 12627}
!505 = !{i64 12640}
!506 = !{i64 12643}
!507 = !{i64 12655}
!508 = !{i64 12660}
!509 = !{i64 12679}
!510 = !{i64 12690}
!511 = !{i64 12706}
!512 = !{i64 12711}
!513 = !{i64 12718}
!514 = !{i64 12740}
!515 = !{i64 12745}
!516 = !{i64 12752}
!517 = !{i64 12756}
!518 = !{i64 12768}
!519 = !{i64 12778}
!520 = !{i64 12788}
!521 = !{i64 12793}
!522 = !{i64 12802}
!523 = !{i64 12809}
!524 = !{i64 12824}
!525 = !{i64 12831}
!526 = !{i64 12837}
!527 = !{i64 12850}
!528 = !{i64 12858}
!529 = !{i64 12866}
!530 = !{i64 12867}
!531 = !{i64 12874}
!532 = !{i64 12880}
!533 = !{i64 12902}
!534 = !{i64 12912}
!535 = !{i64 12914}
!536 = !{i64 12932}
!537 = !{i64 12937}
!538 = !{i64 12939}
!539 = !{i64 12946}
!540 = !{i64 12956}
!541 = !{i64 12971}
!542 = !{i64 12976}
!543 = !{i64 12983}
!544 = !{i64 12988}
!545 = !{i64 12991}
!546 = !{i64 12993}
!547 = !{i64 13005}
!548 = !{i64 13006}
!549 = !{i64 13011}
!550 = !{i64 13015}
!551 = !{i64 13019}
!552 = !{i64 13026}
!553 = !{i64 13034}
!554 = !{i64 13042}
!555 = !{i64 13044}
!556 = !{i64 13046}
!557 = !{i64 13050}
!558 = !{i64 13057}
!559 = !{i64 13060}
!560 = !{i64 13068}
!561 = !{i64 13069}
!562 = !{i64 13085}
!563 = !{i64 13096}
!564 = !{i64 13101}
!565 = !{i64 13104}
!566 = !{i64 13083}
!567 = !{i64 13115}
!568 = !{i64 13130}
!569 = !{i64 13132}
!570 = !{i64 13150}
!571 = !{i64 13155}
!572 = !{i64 13167}
!573 = !{i64 13172}
!574 = !{i64 13174}
!575 = !{i64 13176}
!576 = !{i64 13180}
!577 = !{i64 13183}
!578 = !{i64 13201}
!579 = !{i64 13206}
!580 = !{i64 13208}
!581 = !{i64 13210}
!582 = !{i64 13217}
!583 = !{i64 13227}
!584 = !{i64 13231}
!585 = !{i64 13237}
!586 = !{i64 13242}
!587 = !{i64 13245}
!588 = !{i64 13248}
!589 = !{i64 13250}
!590 = !{i64 13259}
!591 = !{i64 13264}
!592 = !{i64 13276}
!593 = !{i64 13279}
!594 = !{i64 13291}
!595 = !{i64 13296}
!596 = !{i64 13315}
!597 = !{i64 13326}
!598 = !{i64 13337}
!599 = !{i64 13345}
!600 = !{i64 13348}
!601 = !{i64 13356}
!602 = !{i64 13365}
!603 = !{i64 13377}
!604 = !{i64 13387}
!605 = !{i64 13392}
!606 = !{i64 13394}
!607 = !{i64 13403}
!608 = !{i64 13404}
!609 = !{i64 13430}
!610 = !{i64 13441}
!611 = !{i64 13454}
!612 = !{i64 13463}
!613 = !{i64 13457}
!614 = !{i64 13418}
!615 = !{i64 13474}
!616 = !{i64 13497}
!617 = !{i64 13502}
!618 = !{i64 13518}
!619 = !{i64 13522}
!620 = !{i64 13527}
!621 = !{i64 13530}
!622 = !{i64 13533}
!623 = !{i64 13561}
!624 = !{i64 13574}
!625 = !{i64 13579}
!626 = !{i64 13581}
!627 = !{i64 13740}
!628 = !{i64 13587}
!629 = !{i64 13590}
!630 = !{i64 13594}
!631 = !{i64 13597}
!632 = !{i64 13632}
!633 = !{i64 13623}
!634 = !{i64 13637}
!635 = !{i64 13642}
!636 = !{i64 13644}
!637 = !{i64 13648}
!638 = !{i64 13653}
!639 = !{i64 13658}
!640 = !{i64 13663}
!641 = !{i64 13666}
!642 = !{i64 13669}
!643 = !{i64 13685}
!644 = !{i64 13693}
!645 = !{i64 13702}
!646 = !{i64 13707}
!647 = !{i64 13716}
!648 = !{i64 13728}
!649 = !{i64 13731}
!650 = !{i64 13745}
!651 = !{i64 13750}
!652 = !{i64 13753}
!653 = !{i64 13756}
!654 = !{i64 13761}
!655 = !{i64 13771}
!656 = !{i64 13776}
!657 = !{i64 13795}
!658 = !{i64 13813}
!659 = !{i64 13826}
!660 = !{i64 13836}
!661 = !{i64 13852}
!662 = !{i64 13857}
!663 = !{i64 13873}
!664 = !{i64 13888}
!665 = !{i64 13900}
!666 = !{i64 13904}
!667 = !{i64 13909}
!668 = !{i64 13925}
!669 = !{i64 13940}
!670 = !{i64 13956}
!671 = !{i64 13966}
!672 = !{i64 13983}
!673 = !{i64 13989}
!674 = !{i64 13994}
!675 = !{i64 13999}
!676 = !{i64 14007}
!677 = !{i64 14020}
