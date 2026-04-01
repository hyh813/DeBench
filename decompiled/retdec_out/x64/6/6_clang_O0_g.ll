source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%_IO_FILE = type { i32 }
%stat = type { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }
%sockaddr = type { i64, [14 x i8] }
%shmid_ds = type { %ipc_perm, i32, i64, i64, i64, i32, i32, i16, i16, i64*, i64* }
%ipc_perm = type { i32, i32, i32, i32, i32, i32, i16 }

@global_var_81e8 = global i64 0
@global_var_5004 = constant [9 x i8] c"HelloLib\00"
@global_var_500d = constant [4 x i8] c"abc\00"
@global_var_5011 = constant [4 x i8] c"def\00"
@global_var_5015 = constant [4 x i8] c"xyz\00"
@global_var_5019 = constant [4 x i8] c"bbb\00"
@global_var_501d = constant [4 x i8] c"aaa\00"
@global_var_5021 = constant [13 x i8] c"BinBench2025\00"
@global_var_5408 = local_unnamed_addr constant i64 171798691870
@global_var_5410 = local_unnamed_addr constant i64 4294967346
@global_var_541c = local_unnamed_addr constant i64 4294967299
@global_var_5428 = local_unnamed_addr constant i64 4294967300
@global_var_502e = constant [21 x i8] c"Value: %d, Name: %s\0A\00"
@global_var_509b = constant [5 x i8] c"Test\00"
@global_var_5043 = constant [6 x i8] c"%d,%d\00"
@global_var_5049 = constant [8 x i8] c"123,456\00"
@global_var_5053 = constant [12 x i8] c"/etc/passwd\00"
@global_var_505f = constant [19 x i8] c"BinBench Test Data\00"
@global_var_5072 = constant [3 x i8] c"w+\00"
@global_var_5075 = constant [23 x i8] c"/tmp/binbench_test.tmp\00"
@global_var_508c = constant [20 x i8] c"Hello BinBench Test\00"
@global_var_50a0 = constant [6 x i8] c"Bench\00"
@global_var_5219 = constant [10 x i8] c"/bin/true\00"
@global_var_5223 = constant [10 x i8] c"HelloPipe\00"
@global_var_522d = constant [18 x i8] c"/tmp/binbench_shm\00"
@global_var_523f = constant [13 x i8] c"SharedMemory\00"
@global_var_7d0 = global i64 0
@global_var_81f8 = global i64 0
@global_var_8228 = global i64 0
@global_var_8258 = global i64 0
@global_var_532c = constant [10 x i8] c"Thread-%d\00"
@0 = external global i32
@global_var_5400 = local_unnamed_addr constant i32 10
@global_var_5414 = local_unnamed_addr constant i32 1
@global_var_5420 = local_unnamed_addr constant i32 1
@global_var_542c = local_unnamed_addr constant i32 1
@1 = internal constant [2 x i8] c"r\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i64 0, i64 0)
@3 = internal constant [37 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\87\E5\87\86\E5\BA\93\E5\87\BD\E6\95\B0\E8\B0\83\E7\94\A8 ===\0A\00"
@global_var_50a6 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @3, i64 0, i64 0)
@4 = internal constant [27 x i8] c"LIB-L1-01: %d (\E6\9C\9F\E6\9C\9B: 8)\0A\00"
@global_var_50cb = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @4, i64 0, i64 0)
@5 = internal constant [27 x i8] c"LIB-L1-02: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_50e6 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @5, i64 0, i64 0)
@6 = internal constant [28 x i8] c"LIB-L1-03: %d (\E6\9C\9F\E6\9C\9B: 12)\0A\00"
@global_var_5101 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @6, i64 0, i64 0)
@7 = internal constant [28 x i8] c"LIB-L1-04: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_511d = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @7, i64 0, i64 0)
@8 = internal constant [28 x i8] c"LIB-L1-05: %d (\E6\9C\9F\E6\9C\9B: -1)\0A\00"
@global_var_5139 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i64 0, i64 0)
@9 = internal constant [28 x i8] c"LIB-L1-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_5155 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i64 0, i64 0)
@10 = internal constant [29 x i8] c"LIB-L1-07: %d (\E6\9C\9F\E6\9C\9B: 579)\0A\00"
@global_var_5171 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"LIB-L1-08: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_518e = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [28 x i8] c"LIB-L1-09: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_51aa = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @12, i64 0, i64 0)
@13 = internal constant [28 x i8] c"LIB-L1-10: %d (\E6\9C\9F\E6\9C\9B: 90)\0A\00"
@global_var_51c6 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @13, i64 0, i64 0)
@14 = internal constant [27 x i8] c"LIB-L1-11: %d (\E6\9C\9F\E6\9C\9B: 0)\0A\00"
@global_var_51e2 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @14, i64 0, i64 0)
@15 = internal constant [28 x i8] c"LIB-L1-12: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_51fd = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @15, i64 0, i64 0)
@global_var_1000 = global i32 7
@global_var_3b6 = global i32 1048576
@global_var_81f0 = local_unnamed_addr global i32 0
@global_var_3e8 = global i32 8454144
@global_var_81f4 = local_unnamed_addr global i32 0
@16 = internal constant [28 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\B3\BB\E7\BB\9F\E8\B0\83\E7\94\A8 ===\0A\00"
@global_var_524c = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @16, i64 0, i64 0)
@17 = internal constant [28 x i8] c"SYS-L3-01: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_5268 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i64 0, i64 0)
@18 = internal constant [28 x i8] c"SYS-L3-02: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_5284 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @18, i64 0, i64 0)
@19 = internal constant [28 x i8] c"SYS-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_52a0 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @19, i64 0, i64 0)
@20 = internal constant [28 x i8] c"SYS-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_52bc = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @20, i64 0, i64 0)
@21 = internal constant [28 x i8] c"SYS-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_52d8 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @21, i64 0, i64 0)
@22 = internal constant [28 x i8] c"SYS-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_52f4 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @22, i64 0, i64 0)
@23 = internal constant [28 x i8] c"SYS-L3-07: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_5310 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @23, i64 0, i64 0)
@global_var_8220 = local_unnamed_addr global i32 0
@global_var_8221 = global i32 0
@global_var_8250 = local_unnamed_addr global i32 0
@global_var_8288 = local_unnamed_addr global i32 0
@global_var_828c = local_unnamed_addr global i32 0
@24 = internal constant [31 x i8] c"=== \E6\B5\8B\E8\AF\95\E7\BA\BF\E7\A8\8B\E4\B8\8E\E5\B9\B6\E5\8F\91 ===\0A\00"
@global_var_5336 = constant i8* getelementptr inbounds ([31 x i8], [31 x i8]* @24, i64 0, i64 0)
@25 = internal constant [28 x i8] c"THR-L3-01: %d (\E6\9C\9F\E6\9C\9B: 49)\0A\00"
@global_var_5355 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @25, i64 0, i64 0)
@26 = internal constant [29 x i8] c"THR-L3-02: %d (\E6\9C\9F\E6\9C\9B: 465)\0A\00"
@global_var_5371 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @26, i64 0, i64 0)
@27 = internal constant [28 x i8] c"THR-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_538e = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @27, i64 0, i64 0)
@28 = internal constant [28 x i8] c"THR-L3-04: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_53aa = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @28, i64 0, i64 0)
@29 = internal constant [28 x i8] c"THR-L3-05: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_53c6 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @29, i64 0, i64 0)
@30 = internal constant [28 x i8] c"THR-L3-06: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_53e2 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @30, i64 0, i64 0)
@global_var_5051 = constant [2 x i8] c"r\00"

define i64 @_init() local_unnamed_addr {
dec_label_pc_2000:
  %rax.0.reg2mem = alloca i64, !insn.addr !0
  %0 = load i64, i64* inttoptr (i64 32736 to i64*), align 32, !insn.addr !1
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

define i32 @function_20a0(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_20a0:
  %0 = call i32 @fread(i64* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define i32 @function_20b0(i32 %fd, i32 %level, i32 %optname, i64* %optval, i32 %optlen) local_unnamed_addr {
dec_label_pc_20b0:
  %0 = call i32 @setsockopt(i32 %fd, i32 %level, i32 %optname, i64* %optval, i32 %optlen), !insn.addr !14
  ret i32 %0, !insn.addr !14
}

define i32 @function_20c0(i64* %shmaddr) local_unnamed_addr {
dec_label_pc_20c0:
  %0 = call i32 @shmdt(i64* %shmaddr), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define i32 @function_20d0(i32 %fd, i64* %buf, i32 %n) local_unnamed_addr {
dec_label_pc_20d0:
  %0 = call i32 @write(i32 %fd, i64* %buf, i32 %n), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i32 @function_20e0(i64* %cond, i64* %mutex) local_unnamed_addr {
dec_label_pc_20e0:
  %0 = call i32 @pthread_cond_wait(i64* %cond, i64* %mutex), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i32 @function_20f0(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_20f0:
  %0 = call i32 @fclose(%_IO_FILE* %stream), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define i32 @function_2100(i8* %s) local_unnamed_addr {
dec_label_pc_2100:
  %0 = call i32 @strlen(i8* %s), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i16 @function_2110(i16 %hostshort) local_unnamed_addr {
dec_label_pc_2110:
  %0 = call i16 @htons(i16 %hostshort), !insn.addr !20
  ret i16 %0, !insn.addr !20
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
  %3 = call i32 @__libc_start_main(i64 16736, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !63
  %4 = call i64 @__asm_hlt(), !insn.addr !64
  unreachable, !insn.addr !64
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_23f0:
  ret i64 ptrtoint (i64* @global_var_81e8 to i64), !insn.addr !65
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_2420:
  ret i64 0, !insn.addr !66
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_2460:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* bitcast (i64* @global_var_81e8 to i8*), align 8, !insn.addr !67
  %3 = icmp eq i8 %2, 0, !insn.addr !67
  %4 = icmp eq i1 %3, false, !insn.addr !68
  br i1 %4, label %dec_label_pc_2498, label %dec_label_pc_246d, !insn.addr !68

dec_label_pc_246d:                                ; preds = %dec_label_pc_2460
  %5 = load i64, i64* inttoptr (i64 32752 to i64*), align 16, !insn.addr !69
  %6 = icmp eq i64 %5, 0, !insn.addr !69
  br i1 %6, label %dec_label_pc_2487, label %dec_label_pc_247b, !insn.addr !70

dec_label_pc_247b:                                ; preds = %dec_label_pc_246d
  %7 = load i64, i64* inttoptr (i64 33248 to i64*), align 32, !insn.addr !71
  %8 = inttoptr i64 %7 to i64*, !insn.addr !72
  call void @__cxa_finalize(i64* %8), !insn.addr !72
  br label %dec_label_pc_2487, !insn.addr !72

dec_label_pc_2487:                                ; preds = %dec_label_pc_247b, %dec_label_pc_246d
  %9 = call i64 @deregister_tm_clones(), !insn.addr !73
  store i8 1, i8* bitcast (i64* @global_var_81e8 to i8*), align 8, !insn.addr !74
  ret i64 %9, !insn.addr !75

dec_label_pc_2498:                                ; preds = %dec_label_pc_2460
  ret i64 %1, !insn.addr !76
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_24a0:
  %0 = call i64 @register_tm_clones(), !insn.addr !77
  ret i64 %0, !insn.addr !77
}

define i32 @param_strcpy(i8* %dst, i8* %src) local_unnamed_addr {
dec_label_pc_24b0:
  %0 = call i8* @strcpy(i8* %dst, i8* %src), !insn.addr !78
  %1 = call i32 @strlen(i8* %dst), !insn.addr !79
  ret i32 %1, !insn.addr !80
}

define i32 @call_strcpy() local_unnamed_addr {
dec_label_pc_24e0:
  %buffer_-40 = alloca [1 x i8], align 1
  %0 = getelementptr inbounds [1 x i8], [1 x i8]* %buffer_-40, i64 0, i64 0, !insn.addr !81
  %1 = call i32 @param_strcpy(i8* nonnull %0, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_5004, i64 0, i64 0)), !insn.addr !81
  ret i32 %1, !insn.addr !82
}

define i32 @param_strcmp(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_2510:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !83
  %1 = icmp slt i32 %0, 1, !insn.addr !84
  %2 = icmp slt i32 %0, 0
  %3 = sext i1 %2 to i32
  %storemerge = select i1 %1, i32 %3, i32 1
  ret i32 %storemerge, !insn.addr !85
}

define i32 @call_strcmp() local_unnamed_addr {
dec_label_pc_2570:
  %0 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_500d, i64 0, i64 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_5011, i64 0, i64 0)), !insn.addr !86
  %1 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_5015, i64 0, i64 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_5015, i64 0, i64 0)), !insn.addr !87
  %2 = call i32 @param_strcmp(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_5019, i64 0, i64 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_501d, i64 0, i64 0)), !insn.addr !88
  %3 = add i32 %1, %0, !insn.addr !89
  %4 = add i32 %3, %2, !insn.addr !90
  ret i32 %4, !insn.addr !91

; uselistorder directives
  uselistorder i32 (i8*, i8*)* @param_strcmp, { 2, 1, 0 }
}

define i32 @param_strlen(i8* %str) local_unnamed_addr {
dec_label_pc_25d0:
  %0 = call i32 @strlen(i8* %str), !insn.addr !92
  ret i32 %0, !insn.addr !93
}

define i32 @call_strlen() local_unnamed_addr {
dec_label_pc_2600:
  %0 = call i32 @param_strlen(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_5021, i64 0, i64 0)), !insn.addr !94
  ret i32 %0, !insn.addr !95
}

define i32 @param_memcpy(i8* %dst, i32* %src, i64 %n) local_unnamed_addr {
dec_label_pc_2630:
  %0 = bitcast i8* %dst to i64*, !insn.addr !96
  %1 = bitcast i32* %src to i64*, !insn.addr !96
  %2 = trunc i64 %n to i32, !insn.addr !96
  %3 = call i64* @memcpy(i64* %0, i64* %1, i32 %2), !insn.addr !96
  ret i32 %2, !insn.addr !97
}

define i32 @call_memcpy() local_unnamed_addr {
dec_label_pc_2660:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %dst_-64 = alloca [1 x i32], align 4
  %src_-40 = alloca [1 x i32], align 4
  %stack_var_-72 = alloca i64, align 8
  store [1 x i32] [i32 10], [1 x i32]* %src_-40, align 4, !insn.addr !98
  %2 = call i64* @memset(i64* nonnull %stack_var_-72, i32 0, i32 20), !insn.addr !99
  %3 = bitcast i64* %stack_var_-72 to i8*, !insn.addr !100
  %4 = getelementptr inbounds [1 x i32], [1 x i32]* %src_-40, i64 0, i64 0, !insn.addr !100
  %5 = call i32 @param_memcpy(i8* nonnull %3, i32* nonnull %4, i64 20), !insn.addr !100
  %6 = load i64, i64* %stack_var_-72, align 8, !insn.addr !101
  %7 = trunc i64 %6 to i32, !insn.addr !101
  %8 = getelementptr inbounds [1 x i32], [1 x i32]* %dst_-64, i64 0, i64 0, !insn.addr !102
  %9 = load i32, i32* %8, align 4, !insn.addr !102
  %10 = add i32 %1, %7, !insn.addr !102
  %11 = add i32 %10, %9, !insn.addr !103
  ret i32 %11, !insn.addr !104

; uselistorder directives
  uselistorder i64* %stack_var_-72, { 2, 0, 1 }
}

define i32 @param_memcmp(i32* %p1, i32* %p2, i64 %n) local_unnamed_addr {
dec_label_pc_26c0:
  %0 = bitcast i32* %p1 to i64*, !insn.addr !105
  %1 = bitcast i32* %p2 to i64*, !insn.addr !105
  %2 = trunc i64 %n to i32, !insn.addr !105
  %3 = call i32 @memcmp(i64* %0, i64* %1, i32 %2), !insn.addr !105
  %4 = icmp slt i32 %3, 1, !insn.addr !106
  %5 = icmp slt i32 %3, 0
  %6 = sext i1 %5 to i32
  %storemerge = select i1 %4, i32 %6, i32 1
  ret i32 %storemerge, !insn.addr !107
}

define i32 @call_memcmp() local_unnamed_addr {
dec_label_pc_2720:
  %arr3_-44 = alloca [1 x i32], align 4
  %arr2_-32 = alloca [1 x i32], align 4
  %arr1_-20 = alloca [1 x i32], align 4
  store [1 x i32] [i32 1], [1 x i32]* %arr1_-20, align 4, !insn.addr !108
  store [1 x i32] [i32 1], [1 x i32]* %arr2_-32, align 4, !insn.addr !109
  store [1 x i32] [i32 1], [1 x i32]* %arr3_-44, align 4, !insn.addr !110
  %0 = getelementptr inbounds [1 x i32], [1 x i32]* %arr1_-20, i64 0, i64 0, !insn.addr !111
  %1 = getelementptr inbounds [1 x i32], [1 x i32]* %arr2_-32, i64 0, i64 0, !insn.addr !111
  %2 = call i32 @param_memcmp(i32* nonnull %0, i32* nonnull %1, i64 12), !insn.addr !111
  %3 = getelementptr inbounds [1 x i32], [1 x i32]* %arr3_-44, i64 0, i64 0, !insn.addr !112
  %4 = call i32 @param_memcmp(i32* nonnull %0, i32* nonnull %3, i64 12), !insn.addr !112
  %5 = add i32 %4, %2, !insn.addr !113
  ret i32 %5, !insn.addr !114

; uselistorder directives
  uselistorder i32 (i32*, i32*, i64)* @param_memcmp, { 1, 0 }
}

define i32 @param_printf(i32 %x, i8* %name) local_unnamed_addr {
dec_label_pc_27a0:
  %0 = zext i32 %x to i64, !insn.addr !115
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_502e, i64 0, i64 0), i64 %0, i8* %name), !insn.addr !116
  ret i32 %1, !insn.addr !117
}

define i32 @call_printf() local_unnamed_addr {
dec_label_pc_27d0:
  %0 = call i32 @param_printf(i32 42, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_509b, i64 0, i64 0)), !insn.addr !118
  ret i32 %0, !insn.addr !119
}

define i32 @param_scanf(i8* %input_str) local_unnamed_addr {
dec_label_pc_2800:
  %storemerge.reg2mem = alloca i32, !insn.addr !120
  %b_-32 = alloca i32, align 4
  %a_-28 = alloca i32, align 4
  %0 = call i32 (i8*, i8*, ...) @sscanf(i8* %input_str, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_5043, i64 0, i64 0), i32* nonnull %a_-28, i32* nonnull %b_-32), !insn.addr !121
  %1 = icmp eq i32 %0, 2, !insn.addr !122
  %2 = icmp eq i1 %1, false, !insn.addr !123
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !123
  br i1 %2, label %dec_label_pc_2848, label %dec_label_pc_2833, !insn.addr !123

dec_label_pc_2833:                                ; preds = %dec_label_pc_2800
  %3 = load i32, i32* %a_-28, align 4, !insn.addr !124
  %4 = load i32, i32* %b_-32, align 4, !insn.addr !125
  %5 = add i32 %4, %3, !insn.addr !125
  store i32 %5, i32* %storemerge.reg2mem, !insn.addr !126
  br label %dec_label_pc_2848, !insn.addr !126

dec_label_pc_2848:                                ; preds = %dec_label_pc_2800, %dec_label_pc_2833
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !127

; uselistorder directives
  uselistorder i32* %a_-28, { 1, 0 }
  uselistorder i32* %b_-32, { 1, 0 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2848, { 1, 0 }
}

define i32 @call_scanf() local_unnamed_addr {
dec_label_pc_2860:
  %0 = call i32 @param_scanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_5049, i64 0, i64 0)), !insn.addr !128
  ret i32 %0, !insn.addr !129
}

define i32 @param_fopen_fclose(i8* %filename) local_unnamed_addr {
dec_label_pc_2880:
  %storemerge.reg2mem = alloca i32, !insn.addr !130
  %0 = call %_IO_FILE* @fopen(i8* %filename, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_5051, i64 0, i64 0)), !insn.addr !131
  %1 = icmp eq %_IO_FILE* %0, null, !insn.addr !132
  %2 = icmp eq i1 %1, false, !insn.addr !133
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !133
  br i1 %2, label %dec_label_pc_28b7, label %dec_label_pc_28d2, !insn.addr !133

dec_label_pc_28b7:                                ; preds = %dec_label_pc_2880
  %3 = call i32 @fileno(%_IO_FILE* %0), !insn.addr !134
  %4 = call i32 @fclose(%_IO_FILE* %0), !insn.addr !135
  store i32 %3, i32* %storemerge.reg2mem, !insn.addr !136
  br label %dec_label_pc_28d2, !insn.addr !136

dec_label_pc_28d2:                                ; preds = %dec_label_pc_2880, %dec_label_pc_28b7
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !137

; uselistorder directives
  uselistorder %_IO_FILE* %0, { 1, 0, 2 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_28d2, { 1, 0 }
}

define i32 @call_fopen_fclose() local_unnamed_addr {
dec_label_pc_28e0:
  %0 = call i32 @param_fopen_fclose(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_5053, i64 0, i64 0)), !insn.addr !138
  %1 = icmp slt i32 %0, 0, !insn.addr !139
  %2 = icmp eq i1 %1, false, !insn.addr !140
  %3 = select i1 %2, i32 42, i32 -1, !insn.addr !140
  ret i32 %3, !insn.addr !141
}

define i32 @param_fread_fwrite(i8* %tmpfile) local_unnamed_addr {
dec_label_pc_2910:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !142
  %read_buffer_-72 = alloca [1 x i8], align 1
  %stack_var_-8 = alloca i64, align 8
  %0 = call %_IO_FILE* @fopen(i8* %tmpfile, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_5072, i64 0, i64 0)), !insn.addr !143
  %1 = icmp eq %_IO_FILE* %0, null, !insn.addr !144
  %2 = icmp eq i1 %1, false, !insn.addr !145
  store i32 -1, i32* %stack_var_-12.0.reg2mem, !insn.addr !145
  br i1 %2, label %dec_label_pc_2952, label %dec_label_pc_2a2f, !insn.addr !145

dec_label_pc_2952:                                ; preds = %dec_label_pc_2910
  %3 = call i32 @strlen(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_505f, i64 0, i64 0)), !insn.addr !146
  %4 = call i32 @fwrite(i64* bitcast ([19 x i8]* @global_var_505f to i64*), i32 1, i32 %3, %_IO_FILE* %0), !insn.addr !147
  %5 = call i32 @strlen(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_505f, i64 0, i64 0)), !insn.addr !148
  %6 = icmp eq i32 %4, %5, !insn.addr !149
  br i1 %6, label %dec_label_pc_29b2, label %dec_label_pc_299d, !insn.addr !150

dec_label_pc_299d:                                ; preds = %dec_label_pc_2952
  %7 = call i32 @fclose(%_IO_FILE* %0), !insn.addr !151
  store i32 -2, i32* %stack_var_-12.0.reg2mem, !insn.addr !152
  br label %dec_label_pc_2a2f, !insn.addr !152

dec_label_pc_29b2:                                ; preds = %dec_label_pc_2952
  %8 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !153
  call void @rewind(%_IO_FILE* %0), !insn.addr !154
  %9 = bitcast [1 x i8]* %read_buffer_-72 to i64*, !insn.addr !155
  %10 = call i32 @fread(i64* nonnull %9, i32 1, i32 %4, %_IO_FILE* %0), !insn.addr !155
  %11 = sext i32 %10 to i64, !insn.addr !155
  %12 = add i64 %8, -64, !insn.addr !156
  %13 = add i64 %12, %11, !insn.addr !156
  %14 = inttoptr i64 %13 to i8*, !insn.addr !156
  store i8 0, i8* %14, align 1, !insn.addr !156
  %15 = call i32 @fclose(%_IO_FILE* %0), !insn.addr !157
  %16 = call i32 @unlink(i8* %tmpfile), !insn.addr !158
  %17 = icmp eq i32 %4, %10, !insn.addr !159
  %18 = icmp eq i1 %17, false, !insn.addr !160
  store i32 -3, i32* %stack_var_-12.0.reg2mem, !insn.addr !160
  br i1 %18, label %dec_label_pc_2a2f, label %dec_label_pc_2a03, !insn.addr !160

dec_label_pc_2a03:                                ; preds = %dec_label_pc_29b2
  %19 = getelementptr inbounds [1 x i8], [1 x i8]* %read_buffer_-72, i64 0, i64 0, !insn.addr !161
  %20 = call i32 @strcmp(i8* nonnull %19, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_505f, i64 0, i64 0)), !insn.addr !161
  %21 = icmp eq i32 %20, 0, !insn.addr !162
  %phitmp = icmp eq i1 %21, false
  %phitmp1 = icmp eq i1 %phitmp, false
  %phitmp2 = select i1 %phitmp1, i32 42, i32 -3
  store i32 %phitmp2, i32* %stack_var_-12.0.reg2mem, !insn.addr !163
  br label %dec_label_pc_2a2f, !insn.addr !163

dec_label_pc_2a2f:                                ; preds = %dec_label_pc_29b2, %dec_label_pc_2a03, %dec_label_pc_2910, %dec_label_pc_299d
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !164

; uselistorder directives
  uselistorder %_IO_FILE* %0, { 0, 3, 1, 2, 4, 5 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 1, 2, 4, 3 }
  uselistorder i32 (i8*, i8*)* @strcmp, { 1, 0, 2 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 2, 1, 0, 3 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2a2f, { 1, 0, 3, 2 }
}

define i32 @call_fread_fwrite() local_unnamed_addr {
dec_label_pc_2a40:
  %0 = call i32 @param_fread_fwrite(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_5075, i64 0, i64 0)), !insn.addr !165
  ret i32 %0, !insn.addr !166
}

define i32 @param_malloc_free(i64 %size) local_unnamed_addr {
dec_label_pc_2a60:
  %storemerge2.reg2mem = alloca i32, !insn.addr !167
  %storemerge.off05.reg2mem = alloca i32, !insn.addr !167
  %storemerge.off036.reg2mem = alloca i64, !insn.addr !167
  %size.tr = trunc i64 %size to i32
  %0 = mul i32 %size.tr, 4, !insn.addr !168
  %1 = call i64* @malloc(i32 %0), !insn.addr !168
  %2 = icmp eq i64* %1, null, !insn.addr !169
  %3 = icmp eq i1 %2, false, !insn.addr !170
  store i32 -1, i32* %storemerge2.reg2mem, !insn.addr !170
  br i1 %3, label %dec_label_pc_2a9c.preheader, label %dec_label_pc_2afc, !insn.addr !170

dec_label_pc_2a9c.preheader:                      ; preds = %dec_label_pc_2a60
  %4 = icmp ne i64 %size, 0, !insn.addr !171
  %5 = icmp eq i1 %4, false, !insn.addr !172
  %.pre = ptrtoint i64* %1 to i64
  store i64 0, i64* %storemerge.off036.reg2mem, !insn.addr !172
  store i32 0, i32* %storemerge.off05.reg2mem, !insn.addr !172
  br i1 %5, label %dec_label_pc_2acd, label %dec_label_pc_2aaa, !insn.addr !172

dec_label_pc_2aaa:                                ; preds = %dec_label_pc_2a9c.preheader, %dec_label_pc_2aaa
  %storemerge.off05.reload = load i32, i32* %storemerge.off05.reg2mem
  %storemerge.off036.reload = load i64, i64* %storemerge.off036.reg2mem
  %6 = mul i32 %storemerge.off05.reload, 10, !insn.addr !173
  %7 = mul i64 %storemerge.off036.reload, 4, !insn.addr !174
  %8 = add i64 %7, %.pre, !insn.addr !174
  %9 = inttoptr i64 %8 to i32*, !insn.addr !174
  store i32 %6, i32* %9, align 4, !insn.addr !174
  %10 = add i64 %storemerge.off036.reload, 1, !insn.addr !175
  %extract.t = trunc i64 %10 to i32
  %11 = icmp ult i64 %10, %size, !insn.addr !171
  %12 = icmp eq i1 %11, false, !insn.addr !172
  store i64 %10, i64* %storemerge.off036.reg2mem, !insn.addr !172
  store i32 %extract.t, i32* %storemerge.off05.reg2mem, !insn.addr !172
  br i1 %12, label %dec_label_pc_2acd, label %dec_label_pc_2aaa, !insn.addr !172

dec_label_pc_2acd:                                ; preds = %dec_label_pc_2aaa, %dec_label_pc_2a9c.preheader
  %13 = bitcast i64* %1 to i32*, !insn.addr !176
  %14 = load i32, i32* %13, align 4, !insn.addr !177
  %15 = mul i64 %size, 4, !insn.addr !178
  %16 = add i64 %15, -4, !insn.addr !179
  %17 = add i64 %16, %.pre, !insn.addr !179
  %18 = inttoptr i64 %17 to i32*, !insn.addr !179
  %19 = load i32, i32* %18, align 4, !insn.addr !179
  %20 = add i32 %19, %14, !insn.addr !179
  call void @free(i64* %1), !insn.addr !180
  store i32 %20, i32* %storemerge2.reg2mem, !insn.addr !181
  br label %dec_label_pc_2afc, !insn.addr !181

dec_label_pc_2afc:                                ; preds = %dec_label_pc_2a60, %dec_label_pc_2acd
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  ret i32 %storemerge2.reload, !insn.addr !182

; uselistorder directives
  uselistorder i64 %.pre, { 1, 0 }
  uselistorder i64* %1, { 1, 3, 0, 2 }
  uselistorder i64* %storemerge.off036.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.off05.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge2.reg2mem, { 0, 2, 1 }
  uselistorder i64 %size, { 0, 2, 1, 3 }
  uselistorder label %dec_label_pc_2afc, { 1, 0 }
  uselistorder label %dec_label_pc_2aaa, { 1, 0 }
}

define i32 @call_malloc_free() local_unnamed_addr {
dec_label_pc_2b10:
  %0 = call i32 @param_malloc_free(i64 10), !insn.addr !183
  ret i32 %0, !insn.addr !184
}

define i32 @param_memset(i8* %buffer, i64 %size) local_unnamed_addr {
dec_label_pc_2b20:
  %sum_-36.0.lcssa.reg2mem = alloca i32, !insn.addr !185
  %sum_-36.01.reg2mem = alloca i32, !insn.addr !185
  %storemerge2.reg2mem = alloca i64, !insn.addr !185
  %0 = bitcast i8* %buffer to i64*, !insn.addr !186
  %1 = trunc i64 %size to i32, !insn.addr !186
  %2 = call i64* @memset(i64* %0, i32 0, i32 %1), !insn.addr !186
  %3 = icmp ne i64 %size, 0, !insn.addr !187
  %4 = icmp eq i1 %3, false, !insn.addr !188
  store i32 0, i32* %sum_-36.0.lcssa.reg2mem, !insn.addr !188
  br i1 %4, label %dec_label_pc_2b87, label %dec_label_pc_2b64.lr.ph, !insn.addr !188

dec_label_pc_2b64.lr.ph:                          ; preds = %dec_label_pc_2b20
  %5 = ptrtoint i8* %buffer to i64, !insn.addr !189
  store i64 0, i64* %storemerge2.reg2mem
  store i32 0, i32* %sum_-36.01.reg2mem
  br label %dec_label_pc_2b64

dec_label_pc_2b64:                                ; preds = %dec_label_pc_2b64.lr.ph, %dec_label_pc_2b64
  %sum_-36.01.reload = load i32, i32* %sum_-36.01.reg2mem
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %6 = add i64 %storemerge2.reload, %5, !insn.addr !190
  %7 = inttoptr i64 %6 to i8*, !insn.addr !190
  %8 = load i8, i8* %7, align 1, !insn.addr !190
  %9 = zext i8 %8 to i32, !insn.addr !191
  %10 = add i32 %sum_-36.01.reload, %9, !insn.addr !191
  %11 = add i64 %storemerge2.reload, 1, !insn.addr !192
  %12 = icmp ult i64 %11, %size, !insn.addr !187
  %13 = icmp eq i1 %12, false, !insn.addr !188
  store i64 %11, i64* %storemerge2.reg2mem, !insn.addr !188
  store i32 %10, i32* %sum_-36.01.reg2mem, !insn.addr !188
  store i32 %10, i32* %sum_-36.0.lcssa.reg2mem, !insn.addr !188
  br i1 %13, label %dec_label_pc_2b87, label %dec_label_pc_2b64, !insn.addr !188

dec_label_pc_2b87:                                ; preds = %dec_label_pc_2b64, %dec_label_pc_2b20
  %sum_-36.0.lcssa.reload = load i32, i32* %sum_-36.0.lcssa.reg2mem
  ret i32 %sum_-36.0.lcssa.reload, !insn.addr !193

; uselistorder directives
  uselistorder i64* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-36.01.reg2mem, { 1, 0, 2 }
  uselistorder i64 %size, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2b64, { 1, 0 }
}

define i32 @call_memset() local_unnamed_addr {
dec_label_pc_2b90:
  %0 = alloca i32
  %indvars.iv.reg2mem = alloca i64, !insn.addr !194
  %1 = load i32, i32* %0
  %buffer_-56 = alloca [1 x i32], align 4
  %stack_var_-8 = alloca i64, align 8
  %2 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !195
  %3 = add i64 %2, -48, !insn.addr !196
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_2ba9

dec_label_pc_2ba9:                                ; preds = %dec_label_pc_2b90, %dec_label_pc_2ba9
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %4 = mul i64 %indvars.iv.reload, 4, !insn.addr !196
  %5 = add i64 %3, %4, !insn.addr !196
  %6 = inttoptr i64 %5 to i32*, !insn.addr !196
  store i32 255, i32* %6, align 4, !insn.addr !196
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 10
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !197
  br i1 %exitcond, label %dec_label_pc_2bc3, label %dec_label_pc_2ba9, !insn.addr !197

dec_label_pc_2bc3:                                ; preds = %dec_label_pc_2ba9
  %7 = bitcast [1 x i32]* %buffer_-56 to i8*, !insn.addr !198
  %8 = call i32 @param_memset(i8* nonnull %7, i64 40), !insn.addr !198
  %9 = getelementptr inbounds [1 x i32], [1 x i32]* %buffer_-56, i64 0, i64 0, !insn.addr !199
  %10 = load i32, i32* %9, align 4, !insn.addr !199
  %11 = add i32 %10, %1, !insn.addr !200
  ret i32 %11, !insn.addr !201

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2ba9, { 1, 0 }
}

define i32 @param_strchr_strstr(i8* %str, i8 %ch, i8* %substr) local_unnamed_addr {
dec_label_pc_2be0:
  %0 = sext i8 %ch to i32, !insn.addr !202
  %1 = call i8* @strchr(i8* %str, i32 %0), !insn.addr !202
  %2 = icmp eq i8* %1, null, !insn.addr !203
  %3 = ptrtoint i8* %1 to i64
  %4 = ptrtoint i8* %str to i64
  %5 = sub i64 %3, %4
  %6 = trunc i64 %5 to i32
  %storemerge4 = select i1 %2, i32 -1, i32 %6
  %7 = call i8* @strstr(i8* %str, i8* %substr), !insn.addr !204
  %8 = icmp eq i8* %7, null, !insn.addr !205
  %9 = ptrtoint i8* %7 to i64
  %10 = sub i64 %9, %4
  %11 = trunc i64 %10 to i32
  %storemerge = select i1 %8, i32 -1, i32 %11
  %12 = add i32 %storemerge, %storemerge4, !insn.addr !206
  ret i32 %12, !insn.addr !207

; uselistorder directives
  uselistorder i8* %str, { 1, 0, 2 }
}

define i32 @call_strchr_strstr() local_unnamed_addr {
dec_label_pc_2c90:
  %0 = call i32 @param_strchr_strstr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_508c, i64 0, i64 0), i8 66, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_50a0, i64 0, i64 0)), !insn.addr !208
  ret i32 %0, !insn.addr !209
}

define void @test_standard_library_functions() local_unnamed_addr {
dec_label_pc_2cd0:
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_50a6 to i8*)), !insn.addr !210
  %1 = call i32 @call_strcpy(), !insn.addr !211
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_50cb to i8*)), !insn.addr !212
  %3 = call i32 @call_strcmp(), !insn.addr !213
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_50e6 to i8*)), !insn.addr !214
  %5 = call i32 @call_strlen(), !insn.addr !215
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5101 to i8*)), !insn.addr !216
  %7 = call i32 @call_memcpy(), !insn.addr !217
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_511d to i8*)), !insn.addr !218
  %9 = call i32 @call_memcmp(), !insn.addr !219
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5139 to i8*)), !insn.addr !220
  %11 = call i32 @call_printf(), !insn.addr !221
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5155 to i8*)), !insn.addr !222
  %13 = call i32 @call_scanf(), !insn.addr !223
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5171 to i8*)), !insn.addr !224
  %15 = call i32 @call_fopen_fclose(), !insn.addr !225
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_518e to i8*)), !insn.addr !226
  %17 = call i32 @call_fread_fwrite(), !insn.addr !227
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_51aa to i8*)), !insn.addr !228
  %19 = call i32 @call_malloc_free(), !insn.addr !229
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_51c6 to i8*)), !insn.addr !230
  %21 = call i32 @call_memset(), !insn.addr !231
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_51e2 to i8*)), !insn.addr !232
  %23 = call i32 @call_strchr_strstr(), !insn.addr !233
  %24 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_51fd to i8*)), !insn.addr !234
  ret void, !insn.addr !235
}

define i32 @param_linux_syscall(i8* %pathname) local_unnamed_addr {
dec_label_pc_2de0:
  %storemerge.reg2mem = alloca i32, !insn.addr !236
  %0 = call i32 (i32, ...) @syscall(i32 2), !insn.addr !237
  %1 = icmp slt i32 %0, 0, !insn.addr !238
  %2 = icmp eq i1 %1, false, !insn.addr !239
  br i1 %2, label %dec_label_pc_2e1f, label %dec_label_pc_2e0b, !insn.addr !239

dec_label_pc_2e0b:                                ; preds = %dec_label_pc_2de0
  %3 = call i32* @__errno_location(), !insn.addr !240
  %4 = load i32, i32* %3, align 4, !insn.addr !241
  %5 = sub i32 0, %4, !insn.addr !241
  store i32 %5, i32* %storemerge.reg2mem, !insn.addr !242
  br label %dec_label_pc_2e34, !insn.addr !242

dec_label_pc_2e1f:                                ; preds = %dec_label_pc_2de0
  %6 = call i32 (i32, ...) @syscall(i32 3), !insn.addr !243
  store i32 %0, i32* %storemerge.reg2mem, !insn.addr !244
  br label %dec_label_pc_2e34, !insn.addr !244

dec_label_pc_2e34:                                ; preds = %dec_label_pc_2e1f, %dec_label_pc_2e0b
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !245

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 (i32, ...)* @syscall, { 1, 0, 2 }
}

define i32 @call_linux_syscall() local_unnamed_addr {
dec_label_pc_2e40:
  %0 = call i32 @param_linux_syscall(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_5053, i64 0, i64 0)), !insn.addr !246
  %1 = icmp slt i32 %0, 0, !insn.addr !247
  %2 = icmp eq i1 %1, false, !insn.addr !248
  %3 = select i1 %2, i32 42, i32 -1, !insn.addr !248
  ret i32 %3, !insn.addr !249
}

define i32 @param_win32_api(i8* %filename) local_unnamed_addr {
dec_label_pc_2e70:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i32, !insn.addr !250
  %1 = load i64, i64* %0
  %stack_var_-168 = alloca i64, align 8
  %2 = bitcast i64* %stack_var_-168 to %stat*, !insn.addr !251
  %3 = call i32 @stat(i8* %filename, %stat* nonnull %2), !insn.addr !251
  %4 = icmp slt i32 %3, 0, !insn.addr !252
  %5 = icmp eq i1 %4, false, !insn.addr !253
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !253
  br i1 %5, label %dec_label_pc_2ea4, label %dec_label_pc_2ebc, !insn.addr !253

dec_label_pc_2ea4:                                ; preds = %dec_label_pc_2e70
  %6 = icmp eq i64 %1, 0, !insn.addr !254
  %7 = icmp slt i64 %1, 0, !insn.addr !254
  %8 = icmp eq i1 %7, false, !insn.addr !255
  %9 = icmp eq i1 %6, false, !insn.addr !255
  %10 = icmp eq i1 %8, %9, !insn.addr !255
  %11 = select i1 %10, i32 42, i32 -2, !insn.addr !255
  store i32 %11, i32* %storemerge.reg2mem, !insn.addr !256
  br label %dec_label_pc_2ebc, !insn.addr !256

dec_label_pc_2ebc:                                ; preds = %dec_label_pc_2e70, %dec_label_pc_2ea4
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !257

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2ebc, { 1, 0 }
}

define i32 @call_win32_api() local_unnamed_addr {
dec_label_pc_2ed0:
  %0 = call i32 @param_win32_api(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_5053, i64 0, i64 0)), !insn.addr !258
  ret i32 %0, !insn.addr !259
}

define i32 @param_fork_exec(i8* %prog, i8* %arg) local_unnamed_addr {
dec_label_pc_2ef0:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !260
  %stack_var_-40 = alloca i32, align 4
  %0 = call i32 @fork(), !insn.addr !261
  %1 = icmp slt i32 %0, 0, !insn.addr !262
  %2 = icmp eq i1 %1, false, !insn.addr !263
  store i32 -1, i32* %stack_var_-12.0.reg2mem, !insn.addr !263
  br i1 %2, label %dec_label_pc_2f1e, label %dec_label_pc_2f99, !insn.addr !263

dec_label_pc_2f1e:                                ; preds = %dec_label_pc_2ef0
  %3 = icmp eq i32 %0, 0, !insn.addr !264
  %4 = icmp eq i1 %3, false, !insn.addr !265
  br i1 %4, label %dec_label_pc_2f49, label %dec_label_pc_2f28, !insn.addr !265

dec_label_pc_2f28:                                ; preds = %dec_label_pc_2f1e
  %5 = call i32 (i8*, i8*, ...) @execl(i8* %prog, i8* %prog), !insn.addr !266
  call void @_exit(i32 127), !insn.addr !267
  unreachable, !insn.addr !267

dec_label_pc_2f49:                                ; preds = %dec_label_pc_2f1e
  %6 = call i32 @waitpid(i32 %0, i32* nonnull %stack_var_-40, i32 0), !insn.addr !268
  %7 = icmp slt i32 %6, 0, !insn.addr !269
  %8 = icmp eq i1 %7, false, !insn.addr !270
  store i32 -2, i32* %stack_var_-12.0.reg2mem, !insn.addr !270
  br i1 %8, label %dec_label_pc_2f70, label %dec_label_pc_2f99, !insn.addr !270

dec_label_pc_2f70:                                ; preds = %dec_label_pc_2f49
  %9 = load i32, i32* %stack_var_-40, align 4, !insn.addr !271
  %10 = urem i32 %9, 128, !insn.addr !272
  %11 = icmp eq i32 %10, 0, !insn.addr !273
  %12 = icmp eq i1 %11, false, !insn.addr !274
  store i32 -3, i32* %stack_var_-12.0.reg2mem, !insn.addr !274
  br i1 %12, label %dec_label_pc_2f99, label %dec_label_pc_2f7f, !insn.addr !274

dec_label_pc_2f7f:                                ; preds = %dec_label_pc_2f70
  %13 = udiv i32 %9, 256, !insn.addr !275
  %14 = urem i32 %13, 256
  store i32 %14, i32* %stack_var_-12.0.reg2mem, !insn.addr !276
  br label %dec_label_pc_2f99, !insn.addr !276

dec_label_pc_2f99:                                ; preds = %dec_label_pc_2f70, %dec_label_pc_2f49, %dec_label_pc_2ef0, %dec_label_pc_2f7f
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !277

; uselistorder directives
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 4, 1, 2, 3 }
  uselistorder i32 256, { 1, 0 }
  uselistorder i8* %prog, { 1, 0 }
  uselistorder label %dec_label_pc_2f99, { 3, 0, 1, 2 }
}

define i32 @call_fork_exec() local_unnamed_addr {
dec_label_pc_2fb0:
  %0 = call i32 @param_fork_exec(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_5219, i64 0, i64 0), i8* null), !insn.addr !278
  %1 = icmp eq i32 %0, 0, !insn.addr !279
  %2 = select i1 %1, i32 42, i32 -1, !insn.addr !280
  ret i32 %2, !insn.addr !281
}

define i32 @param_pipe_communication() local_unnamed_addr {
dec_label_pc_2ff0:
  %0 = alloca i32
  %buffer_-56 = alloca [1 x i8], align 1
  %1 = load i32, i32* %0
  %pipefd_-12 = alloca [1 x i32], align 4
  %pipefd_-20 = alloca [1 x i32], align 4
  %stack_var_-8 = alloca i64, align 8
  %2 = ptrtoint [1 x i32]* %pipefd_-20 to i64, !insn.addr !282
  %3 = trunc i64 %2 to i32, !insn.addr !283
  %4 = insertvalue [2 x i32] undef, i32 %3, 0, !insn.addr !283
  %5 = call i32 @pipe([2 x i32] %4), !insn.addr !283
  %6 = icmp slt i32 %5, 0, !insn.addr !284
  %7 = icmp eq i1 %6, false, !insn.addr !285
  br i1 %7, label %dec_label_pc_3016, label %dec_label_pc_300a, !insn.addr !285

dec_label_pc_300a:                                ; preds = %dec_label_pc_2ff0
  store [1 x i32] [i32 -1], [1 x i32]* %pipefd_-12, align 4, !insn.addr !286
  br label %dec_label_pc_30d5, !insn.addr !287

dec_label_pc_3016:                                ; preds = %dec_label_pc_2ff0
  %8 = call i32 @fork(), !insn.addr !288
  %9 = icmp slt i32 %8, 0, !insn.addr !289
  %10 = icmp eq i1 %9, false, !insn.addr !290
  br i1 %10, label %dec_label_pc_3034, label %dec_label_pc_3028, !insn.addr !290

dec_label_pc_3028:                                ; preds = %dec_label_pc_3016
  store [1 x i32] [i32 -2], [1 x i32]* %pipefd_-12, align 4, !insn.addr !291
  br label %dec_label_pc_30d5, !insn.addr !292

dec_label_pc_3034:                                ; preds = %dec_label_pc_3016
  %11 = icmp eq i32 %8, 0, !insn.addr !293
  %12 = icmp eq i1 %11, false, !insn.addr !294
  br i1 %12, label %dec_label_pc_3086, label %dec_label_pc_303e, !insn.addr !294

dec_label_pc_303e:                                ; preds = %dec_label_pc_3034
  %13 = getelementptr inbounds [1 x i32], [1 x i32]* %pipefd_-20, i64 0, i64 0, !insn.addr !295
  %14 = load i32, i32* %13, align 4, !insn.addr !295
  %15 = call i32 @close(i32 %14), !insn.addr !296
  %16 = call i32 @strlen(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_5223, i64 0, i64 0)), !insn.addr !297
  %17 = call i32 @write(i32 %1, i64* bitcast ([10 x i8]* @global_var_5223 to i64*), i32 %16), !insn.addr !298
  %18 = call i32 @close(i32 %1), !insn.addr !299
  call void @_exit(i32 0), !insn.addr !300
  unreachable, !insn.addr !300

dec_label_pc_3086:                                ; preds = %dec_label_pc_3034
  %19 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !301
  %20 = call i32 @close(i32 %1), !insn.addr !302
  %21 = getelementptr inbounds [1 x i32], [1 x i32]* %pipefd_-20, i64 0, i64 0, !insn.addr !303
  %22 = load i32, i32* %21, align 4, !insn.addr !303
  %23 = bitcast [1 x i8]* %buffer_-56 to i64*, !insn.addr !304
  %24 = call i32 @read(i32 %22, i64* nonnull %23, i32 31), !insn.addr !304
  %25 = sext i32 %24 to i64, !insn.addr !304
  %26 = add i64 %19, -48, !insn.addr !305
  %27 = add i64 %26, %25, !insn.addr !305
  %28 = inttoptr i64 %27 to i8*, !insn.addr !305
  store i8 0, i8* %28, align 1, !insn.addr !305
  %29 = load i32, i32* %21, align 4, !insn.addr !306
  %30 = call i32 @close(i32 %29), !insn.addr !307
  %31 = call i32 @wait(i64 0), !insn.addr !308
  %32 = icmp eq i32 %24, 0, !insn.addr !309
  %33 = icmp slt i32 %24, 0, !insn.addr !309
  %34 = icmp eq i1 %33, false, !insn.addr !310
  %35 = icmp eq i1 %32, false, !insn.addr !310
  %36 = icmp eq i1 %34, %35, !insn.addr !310
  %37 = select i1 %36, i32 42, i32 -3, !insn.addr !310
  %38 = insertvalue [1 x i32] undef, i32 %37, 0, !insn.addr !311
  store [1 x i32] %38, [1 x i32]* %pipefd_-12, align 4, !insn.addr !311
  br label %dec_label_pc_30d5, !insn.addr !311

dec_label_pc_30d5:                                ; preds = %dec_label_pc_3086, %dec_label_pc_3028, %dec_label_pc_300a
  %39 = getelementptr inbounds [1 x i32], [1 x i32]* %pipefd_-12, i64 0, i64 0, !insn.addr !312
  %40 = load i32, i32* %39, align 4, !insn.addr !312
  ret i32 %40, !insn.addr !313

; uselistorder directives
  uselistorder i8 0, { 1, 2, 0 }
  uselistorder void (i32)* @_exit, { 1, 0, 2 }
  uselistorder [10 x i8]* @global_var_5223, { 1, 0 }
  uselistorder i32 ()* @fork, { 1, 0, 2 }
}

define i32 @call_pipe_communication() local_unnamed_addr {
dec_label_pc_30e0:
  %0 = call i32 @param_pipe_communication(), !insn.addr !314
  ret i32 %0, !insn.addr !315
}

define i32 @param_socket_create() local_unnamed_addr {
dec_label_pc_30f0:
  %opt_-12.0.reg2mem = alloca i32, !insn.addr !316
  %opt_-20 = alloca i32, align 4
  %stack_var_-40 = alloca i64, align 8
  %0 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !317
  %1 = icmp slt i32 %0, 0, !insn.addr !318
  %2 = icmp eq i1 %1, false, !insn.addr !319
  store i32 -1, i32* %opt_-12.0.reg2mem, !insn.addr !319
  br i1 %2, label %dec_label_pc_3122, label %dec_label_pc_31f1, !insn.addr !319

dec_label_pc_3122:                                ; preds = %dec_label_pc_30f0
  store i32 1, i32* %opt_-20, align 4, !insn.addr !320
  %3 = bitcast i32* %opt_-20 to i64*, !insn.addr !321
  %4 = call i32 @setsockopt(i32 %0, i32 1, i32 2, i64* nonnull %3, i32 4), !insn.addr !321
  %5 = icmp slt i32 %4, 0, !insn.addr !322
  %6 = icmp eq i1 %5, false, !insn.addr !323
  br i1 %6, label %dec_label_pc_3162, label %dec_label_pc_314e, !insn.addr !323

dec_label_pc_314e:                                ; preds = %dec_label_pc_3122
  %7 = call i32 @close(i32 %0), !insn.addr !324
  store i32 -2, i32* %opt_-12.0.reg2mem, !insn.addr !325
  br label %dec_label_pc_31f1, !insn.addr !325

dec_label_pc_3162:                                ; preds = %dec_label_pc_3122
  %8 = call i64* @memset(i64* nonnull %stack_var_-40, i32 0, i32 16), !insn.addr !326
  store i64 2, i64* %stack_var_-40, align 8, !insn.addr !327
  %9 = call i16 @htons(i16 0), !insn.addr !328
  %10 = bitcast i64* %stack_var_-40 to %sockaddr*, !insn.addr !329
  %11 = call i32 @bind(i32 %0, %sockaddr* nonnull %10, i32 16), !insn.addr !329
  %12 = icmp slt i32 %11, 0, !insn.addr !330
  %13 = icmp eq i1 %12, false, !insn.addr !331
  br i1 %13, label %dec_label_pc_31b8, label %dec_label_pc_31a4, !insn.addr !331

dec_label_pc_31a4:                                ; preds = %dec_label_pc_3162
  %14 = call i32 @close(i32 %0), !insn.addr !332
  store i32 -3, i32* %opt_-12.0.reg2mem, !insn.addr !333
  br label %dec_label_pc_31f1, !insn.addr !333

dec_label_pc_31b8:                                ; preds = %dec_label_pc_3162
  %15 = call i32 @listen(i32 %0, i32 5), !insn.addr !334
  %16 = icmp slt i32 %15, 0, !insn.addr !335
  %17 = icmp eq i1 %16, false, !insn.addr !336
  %18 = call i32 @close(i32 %0)
  %. = select i1 %17, i32 42, i32 -4
  store i32 %., i32* %opt_-12.0.reg2mem, !insn.addr !337
  br label %dec_label_pc_31f1, !insn.addr !337

dec_label_pc_31f1:                                ; preds = %dec_label_pc_31b8, %dec_label_pc_30f0, %dec_label_pc_31a4, %dec_label_pc_314e
  %opt_-12.0.reload = load i32, i32* %opt_-12.0.reg2mem
  ret i32 %opt_-12.0.reload, !insn.addr !338

; uselistorder directives
  uselistorder i32 %0, { 1, 2, 3, 4, 0, 5, 6 }
  uselistorder i64* %stack_var_-40, { 0, 2, 1 }
  uselistorder i32* %opt_-12.0.reg2mem, { 0, 1, 4, 3, 2 }
  uselistorder label %dec_label_pc_31f1, { 0, 2, 3, 1 }
}

define i32 @call_socket_create() local_unnamed_addr {
dec_label_pc_3200:
  %0 = call i32 @param_socket_create(), !insn.addr !339
  ret i32 %0, !insn.addr !340
}

define i32 @param_shmget_shmat() local_unnamed_addr {
dec_label_pc_3210:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !341
  %0 = call i32 (i8*, i32, ...) @open(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_522d, i64 0, i64 0), i32 66), !insn.addr !342
  %1 = icmp slt i32 %0, 0, !insn.addr !343
  %2 = icmp eq i1 %1, false, !insn.addr !344
  store i32 -1, i32* %stack_var_-12.0.reg2mem, !insn.addr !344
  br i1 %2, label %dec_label_pc_3251, label %dec_label_pc_3316, !insn.addr !344

dec_label_pc_3251:                                ; preds = %dec_label_pc_3210
  %3 = call i32 @close(i32 %0), !insn.addr !345
  %4 = call i32 @ftok(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_522d, i64 0, i64 0), i32 42), !insn.addr !346
  %5 = icmp slt i32 %4, 0, !insn.addr !347
  %6 = icmp eq i1 %5, false, !insn.addr !348
  store i32 -1, i32* %stack_var_-12.0.reg2mem, !insn.addr !348
  br i1 %6, label %dec_label_pc_3283, label %dec_label_pc_3316, !insn.addr !348

dec_label_pc_3283:                                ; preds = %dec_label_pc_3251
  %7 = call i32 @shmget(i32 %4, i32 ptrtoint (i32* @global_var_1000 to i32), i32 ptrtoint (i32* @global_var_3b6 to i32)), !insn.addr !349
  %8 = icmp slt i32 %7, 0, !insn.addr !350
  %9 = icmp eq i1 %8, false, !insn.addr !351
  store i32 -2, i32* %stack_var_-12.0.reg2mem, !insn.addr !351
  br i1 %9, label %dec_label_pc_32ae, label %dec_label_pc_3316, !insn.addr !351

dec_label_pc_32ae:                                ; preds = %dec_label_pc_3283
  %10 = call i64* @shmat(i32 %7, i64* null, i32 0), !insn.addr !352
  %11 = icmp eq i64* %10, inttoptr (i64 -1 to i64*), !insn.addr !353
  %12 = icmp eq i1 %11, false, !insn.addr !354
  store i32 -3, i32* %stack_var_-12.0.reg2mem, !insn.addr !354
  br i1 %12, label %dec_label_pc_32dd, label %dec_label_pc_3316, !insn.addr !354

dec_label_pc_32dd:                                ; preds = %dec_label_pc_32ae
  %13 = bitcast i64* %10 to i8*, !insn.addr !355
  %14 = call i8* @strcpy(i8* %13, i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_523f, i64 0, i64 0)), !insn.addr !356
  %15 = call i32 @strlen(i8* %13), !insn.addr !357
  %16 = call i32 @shmdt(i64* %10), !insn.addr !358
  %17 = call i32 @shmctl(i32 %7, i32 xor (i32 ptrtoint ([13 x i8]* @global_var_523f to i32), i32 ptrtoint ([13 x i8]* @global_var_523f to i32)), %shmid_ds* null), !insn.addr !359
  store i32 %15, i32* %stack_var_-12.0.reg2mem, !insn.addr !360
  br label %dec_label_pc_3316, !insn.addr !360

dec_label_pc_3316:                                ; preds = %dec_label_pc_32ae, %dec_label_pc_3283, %dec_label_pc_3251, %dec_label_pc_3210, %dec_label_pc_32dd
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !361

; uselistorder directives
  uselistorder i8* %13, { 1, 0 }
  uselistorder i64* %10, { 0, 2, 1 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 5, 1, 2, 3, 4 }
  uselistorder i32 (i8*)* @strlen, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder i8* (i8*, i8*)* @strcpy, { 1, 0, 2 }
  uselistorder i32 (i32)* @close, { 2, 7, 6, 0, 1, 3, 4, 5, 8 }
  uselistorder label %dec_label_pc_3316, { 4, 0, 1, 2, 3 }
}

define i32 @call_shmget_shmat() local_unnamed_addr {
dec_label_pc_3320:
  %0 = call i32 @param_shmget_shmat(), !insn.addr !362
  %1 = icmp eq i32 %0, 0, !insn.addr !363
  %2 = icmp slt i32 %0, 0, !insn.addr !363
  %3 = icmp eq i1 %2, false, !insn.addr !364
  %4 = icmp eq i1 %1, false, !insn.addr !364
  %5 = icmp eq i1 %3, %4, !insn.addr !364
  %6 = select i1 %5, i32 42, i32 -1, !insn.addr !364
  ret i32 %6, !insn.addr !365

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
}

define i32 @param_signal_handling() local_unnamed_addr {
dec_label_pc_3350:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !366
  %.reg2mem15 = alloca i32, !insn.addr !366
  %attempts_-16.225.reg2mem = alloca i32, !insn.addr !366
  %.reg2mem = alloca i32, !insn.addr !366
  %attempts_-16.037.reg2mem = alloca i32, !insn.addr !366
  %0 = call void (i32)* @signal(i32 10, void (i32)* inttoptr (i64 13584 to void (i32)*)), !insn.addr !367
  %1 = icmp eq void (i32)* %0, inttoptr (i64 -1 to void (i32)*), !insn.addr !368
  %2 = icmp eq i1 %1, false, !insn.addr !369
  store i32 -1, i32* %stack_var_-12.0.reg2mem, !insn.addr !369
  br i1 %2, label %dec_label_pc_3385, label %dec_label_pc_34f9, !insn.addr !369

dec_label_pc_3385:                                ; preds = %dec_label_pc_3350
  %3 = call void (i32)* @signal(i32 14, void (i32)* inttoptr (i64 13584 to void (i32)*)), !insn.addr !370
  %4 = icmp eq void (i32)* %3, inttoptr (i64 -1 to void (i32)*), !insn.addr !371
  %5 = icmp eq i1 %4, false, !insn.addr !372
  store i32 -2, i32* %stack_var_-12.0.reg2mem, !insn.addr !372
  br i1 %5, label %dec_label_pc_33b2, label %dec_label_pc_34f9, !insn.addr !372

dec_label_pc_33b2:                                ; preds = %dec_label_pc_3385
  store i32 0, i32* @global_var_81f0, align 4, !insn.addr !373
  %6 = call i32 @raise(i32 10), !insn.addr !374
  %7 = load i32, i32* @global_var_81f0, align 4, !insn.addr !375
  %8 = icmp eq i32 %7, 0, !insn.addr !376
  %9 = icmp eq i1 %8, false, !insn.addr !377
  %brmerge = or i1 %9, xor (i1 icmp slt (i32 ptrtoint (i32* @global_var_3e8 to i32), i32 0), i1 icmp eq (i32 ptrtoint (i32* @global_var_3e8 to i32), i32 0))
  store i32 ptrtoint (i32* @global_var_3e8 to i32), i32* %attempts_-16.037.reg2mem, !insn.addr !377
  store i32 %7, i32* %.reg2mem, !insn.addr !377
  br i1 %brmerge, label %dec_label_pc_3414, label %dec_label_pc_3405, !insn.addr !377

dec_label_pc_33f5:                                ; preds = %dec_label_pc_3405
  %attempts_-16.037.reload = load i32, i32* %attempts_-16.037.reg2mem
  %10 = add i32 %attempts_-16.037.reload, -1, !insn.addr !378
  %11 = icmp eq i32 %10, 0, !insn.addr !379
  %12 = icmp slt i32 %10, 0, !insn.addr !379
  %13 = icmp eq i1 %12, false, !insn.addr !380
  %14 = icmp eq i1 %11, false, !insn.addr !380
  %15 = icmp eq i1 %13, %14, !insn.addr !380
  %16 = icmp eq i1 %15, false, !insn.addr !381
  %17 = icmp eq i1 %16, false, !insn.addr !382
  store i32 %10, i32* %attempts_-16.037.reg2mem, !insn.addr !382
  store i32 %19, i32* %.reg2mem, !insn.addr !382
  br i1 %17, label %dec_label_pc_3405, label %dec_label_pc_3414, !insn.addr !382

dec_label_pc_3405:                                ; preds = %dec_label_pc_33b2, %dec_label_pc_33f5
  %18 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !383
  %19 = load i32, i32* @global_var_81f0, align 4, !insn.addr !375
  %20 = icmp eq i32 %19, 0, !insn.addr !376
  %21 = icmp eq i1 %20, false, !insn.addr !377
  store i32 %19, i32* %.reg2mem, !insn.addr !377
  br i1 %21, label %dec_label_pc_3414, label %dec_label_pc_33f5, !insn.addr !377

dec_label_pc_3414:                                ; preds = %dec_label_pc_33b2, %dec_label_pc_3405, %dec_label_pc_33f5
  %.reload = load i32, i32* %.reg2mem, !insn.addr !384
  %22 = icmp eq i32 %.reload, 0, !insn.addr !385
  %23 = icmp eq i1 %22, false, !insn.addr !386
  store i32 -3, i32* %stack_var_-12.0.reg2mem, !insn.addr !386
  br i1 %23, label %dec_label_pc_342f, label %dec_label_pc_34f9, !insn.addr !386

dec_label_pc_342f:                                ; preds = %dec_label_pc_3414
  %24 = load i32, i32* @global_var_81f4, align 4, !insn.addr !387
  %25 = icmp eq i32 %24, 10, !insn.addr !388
  store i32 -4, i32* %stack_var_-12.0.reg2mem, !insn.addr !389
  br i1 %25, label %dec_label_pc_344a, label %dec_label_pc_34f9, !insn.addr !389

dec_label_pc_344a:                                ; preds = %dec_label_pc_342f
  store i32 0, i32* @global_var_81f0, align 4, !insn.addr !390
  %26 = call i32 @alarm(i32 1), !insn.addr !391
  %27 = load i32, i32* @global_var_81f0, align 4, !insn.addr !392
  %28 = icmp eq i32 %27, 0, !insn.addr !393
  %29 = icmp eq i1 %28, false, !insn.addr !394
  %brmerge14 = or i1 %29, xor (i1 icmp slt (i32 ptrtoint (i64* @global_var_7d0 to i32), i32 0), i1 icmp eq (i32 ptrtoint (i64* @global_var_7d0 to i32), i32 0))
  store i32 ptrtoint (i64* @global_var_7d0 to i32), i32* %attempts_-16.225.reg2mem, !insn.addr !394
  store i32 %27, i32* %.reg2mem15, !insn.addr !394
  br i1 %brmerge14, label %dec_label_pc_34ac, label %dec_label_pc_349d, !insn.addr !394

dec_label_pc_348d:                                ; preds = %dec_label_pc_349d
  %attempts_-16.225.reload = load i32, i32* %attempts_-16.225.reg2mem
  %30 = add i32 %attempts_-16.225.reload, -1, !insn.addr !395
  %31 = icmp eq i32 %30, 0, !insn.addr !396
  %32 = icmp slt i32 %30, 0, !insn.addr !396
  %33 = icmp eq i1 %32, false, !insn.addr !397
  %34 = icmp eq i1 %31, false, !insn.addr !397
  %35 = icmp eq i1 %33, %34, !insn.addr !397
  %36 = icmp eq i1 %35, false, !insn.addr !398
  %37 = icmp eq i1 %36, false, !insn.addr !399
  store i32 %30, i32* %attempts_-16.225.reg2mem, !insn.addr !399
  store i32 %39, i32* %.reg2mem15, !insn.addr !399
  br i1 %37, label %dec_label_pc_349d, label %dec_label_pc_34ac, !insn.addr !399

dec_label_pc_349d:                                ; preds = %dec_label_pc_344a, %dec_label_pc_348d
  %38 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !400
  %39 = load i32, i32* @global_var_81f0, align 4, !insn.addr !392
  %40 = icmp eq i32 %39, 0, !insn.addr !393
  %41 = icmp eq i1 %40, false, !insn.addr !394
  store i32 %39, i32* %.reg2mem15, !insn.addr !394
  br i1 %41, label %dec_label_pc_34ac, label %dec_label_pc_348d, !insn.addr !394

dec_label_pc_34ac:                                ; preds = %dec_label_pc_344a, %dec_label_pc_349d, %dec_label_pc_348d
  %.reload16 = load i32, i32* %.reg2mem15, !insn.addr !401
  %42 = icmp ne i32 %.reload16, 0, !insn.addr !402
  %43 = load i32, i32* @global_var_81f4, align 4, !insn.addr !403
  %44 = icmp eq i32 %43, 14, !insn.addr !404
  %or.cond = icmp eq i1 %42, %44
  store i32 -5, i32* %stack_var_-12.0.reg2mem, !insn.addr !405
  br i1 %or.cond, label %dec_label_pc_34d6, label %dec_label_pc_34f9, !insn.addr !405

dec_label_pc_34d6:                                ; preds = %dec_label_pc_34ac
  %45 = call void (i32)* @signal(i32 10, void (i32)* null), !insn.addr !406
  %46 = call void (i32)* @signal(i32 14, void (i32)* null), !insn.addr !407
  store i32 42, i32* %stack_var_-12.0.reg2mem, !insn.addr !408
  br label %dec_label_pc_34f9, !insn.addr !408

dec_label_pc_34f9:                                ; preds = %dec_label_pc_34ac, %dec_label_pc_342f, %dec_label_pc_3414, %dec_label_pc_3385, %dec_label_pc_3350, %dec_label_pc_34d6
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !409

; uselistorder directives
  uselistorder i32 %39, { 1, 2, 0 }
  uselistorder i32 %19, { 1, 2, 0 }
  uselistorder i32* %attempts_-16.037.reg2mem, { 2, 0, 1 }
  uselistorder i32* %.reg2mem, { 0, 2, 1, 3 }
  uselistorder i32* %attempts_-16.225.reg2mem, { 2, 0, 1 }
  uselistorder i32* %.reg2mem15, { 0, 2, 1, 3 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 6, 1, 2, 3, 4, 5 }
  uselistorder i32 ptrtoint (i64* @global_var_7d0 to i32), { 0, 2, 1 }
  uselistorder i32 14, { 1, 0, 2 }
  uselistorder i32 10, { 1, 0, 2, 3, 4, 5 }
  uselistorder label %dec_label_pc_34f9, { 5, 0, 1, 2, 3, 4 }
  uselistorder label %dec_label_pc_34ac, { 1, 2, 0 }
  uselistorder label %dec_label_pc_349d, { 1, 0 }
  uselistorder label %dec_label_pc_3414, { 1, 2, 0 }
  uselistorder label %dec_label_pc_3405, { 1, 0 }
}

define void @signal_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_3510:
  store i32 1, i32* @global_var_81f0, align 4, !insn.addr !410
  store i32 %sig, i32* @global_var_81f4, align 4, !insn.addr !411
  ret void, !insn.addr !412

; uselistorder directives
  uselistorder i32* @global_var_81f4, { 2, 0, 1 }
  uselistorder i32* @global_var_81f0, { 6, 5, 1, 4, 3, 0, 2 }
}

define i32 @call_signal_handling() local_unnamed_addr {
dec_label_pc_3530:
  %0 = call i32 @param_signal_handling(), !insn.addr !413
  ret i32 %0, !insn.addr !414
}

define void @test_system_calls() local_unnamed_addr {
dec_label_pc_3540:
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_524c to i8*)), !insn.addr !415
  %1 = call i32 @call_linux_syscall(), !insn.addr !416
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5268 to i8*)), !insn.addr !417
  %3 = call i32 @call_win32_api(), !insn.addr !418
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5284 to i8*)), !insn.addr !419
  %5 = call i32 @call_fork_exec(), !insn.addr !420
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_52a0 to i8*)), !insn.addr !421
  %7 = call i32 @call_pipe_communication(), !insn.addr !422
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_52bc to i8*)), !insn.addr !423
  %9 = call i32 @call_socket_create(), !insn.addr !424
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_52d8 to i8*)), !insn.addr !425
  %11 = call i32 @call_shmget_shmat(), !insn.addr !426
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_52f4 to i8*)), !insn.addr !427
  %13 = call i32 @call_signal_handling(), !insn.addr !428
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5310 to i8*)), !insn.addr !429
  ret void, !insn.addr !430
}

define i8* @thread_compute(i8* %arg) local_unnamed_addr {
dec_label_pc_35f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = mul i32 %2, %2, !insn.addr !431
  %4 = call i64* @malloc(i32 4), !insn.addr !432
  %5 = bitcast i64* %4 to i8*
  %6 = bitcast i64* %4 to i32*
  store i32 %3, i32* %6, align 4, !insn.addr !433
  ret i8* %5, !insn.addr !434

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i32 @param_pthread_create(i32 %x) local_unnamed_addr {
dec_label_pc_3640:
  %storemerge.reg2mem = alloca i32, !insn.addr !435
  %thread_ret_-40 = alloca i8*, align 8
  %tid_-24 = alloca i64, align 8
  %input_-28 = alloca i32, align 4
  store i32 %x, i32* %input_-28, align 4, !insn.addr !436
  %0 = bitcast i64* %tid_-24 to i32*, !insn.addr !437
  %1 = bitcast i32* %input_-28 to i64*, !insn.addr !437
  %2 = call i32 @pthread_create(i32* nonnull %0, i64* null, i64* (i64*)* inttoptr (i64 13808 to i64* (i64*)*), i64* nonnull %1), !insn.addr !437
  %3 = icmp eq i32 %2, 0, !insn.addr !438
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !439
  br i1 %3, label %dec_label_pc_3682, label %dec_label_pc_36a7, !insn.addr !439

dec_label_pc_3682:                                ; preds = %dec_label_pc_3640
  %4 = load i64, i64* %tid_-24, align 8, !insn.addr !440
  %5 = trunc i64 %4 to i32, !insn.addr !441
  %6 = bitcast i8** %thread_ret_-40 to i64**, !insn.addr !441
  %7 = call i32 @pthread_join(i32 %5, i64** nonnull %6), !insn.addr !441
  %8 = load i8*, i8** %thread_ret_-40, align 8
  %9 = bitcast i8* %8 to i32*, !insn.addr !442
  %10 = load i32, i32* %9, align 4, !insn.addr !442
  %11 = bitcast i8* %8 to i64*, !insn.addr !443
  call void @free(i64* %11), !insn.addr !443
  store i32 %10, i32* %storemerge.reg2mem, !insn.addr !444
  br label %dec_label_pc_36a7, !insn.addr !444

dec_label_pc_36a7:                                ; preds = %dec_label_pc_3640, %dec_label_pc_3682
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !445

; uselistorder directives
  uselistorder i64* %tid_-24, { 1, 0 }
  uselistorder i8** %thread_ret_-40, { 1, 0 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_36a7, { 1, 0 }
}

define i32 @call_pthread_create() local_unnamed_addr {
dec_label_pc_36b0:
  %0 = call i32 @param_pthread_create(i32 7), !insn.addr !446
  ret i32 %0, !insn.addr !447
}

define i8* @thread_sum(i8* %arg) local_unnamed_addr {
dec_label_pc_36c0:
  %storemerge1.reg2mem = alloca i32, !insn.addr !448
  %.reg2mem = alloca i32, !insn.addr !448
  %rdi = alloca i64, align 8
  %0 = ptrtoint i8* %arg to i64, !insn.addr !449
  %1 = add i64 %0, 8, !insn.addr !450
  %2 = inttoptr i64 %1 to i32*, !insn.addr !450
  store i32 0, i32* %2, align 4, !insn.addr !450
  %3 = bitcast i64* %rdi to i32*
  %4 = load i32, i32* %3, align 8, !insn.addr !451
  %5 = add i64 %0, 4, !insn.addr !452
  %6 = inttoptr i64 %5 to i32*, !insn.addr !452
  %7 = load i32, i32* %6, align 4, !insn.addr !452
  %8 = icmp sgt i32 %4, %7, !insn.addr !453
  store i32 0, i32* %.reg2mem, !insn.addr !453
  store i32 %4, i32* %storemerge1.reg2mem, !insn.addr !453
  br i1 %8, label %dec_label_pc_370f, label %dec_label_pc_36f4, !insn.addr !453

dec_label_pc_36f4:                                ; preds = %dec_label_pc_36c0, %dec_label_pc_36f4
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %.reload = load i32, i32* %.reg2mem, !insn.addr !454
  %9 = add i32 %storemerge1.reload, %.reload, !insn.addr !454
  store i32 %9, i32* %2, align 4, !insn.addr !455
  %10 = add i32 %storemerge1.reload, 1, !insn.addr !456
  %11 = load i32, i32* %6, align 4, !insn.addr !452
  %12 = icmp sgt i32 %10, %11, !insn.addr !453
  store i32 %9, i32* %.reg2mem, !insn.addr !453
  store i32 %10, i32* %storemerge1.reg2mem, !insn.addr !453
  br i1 %12, label %dec_label_pc_370f, label %dec_label_pc_36f4, !insn.addr !453

dec_label_pc_370f:                                ; preds = %dec_label_pc_36f4, %dec_label_pc_36c0
  ret i8* null, !insn.addr !457

; uselistorder directives
  uselistorder i32* %6, { 1, 0 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge1.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_36f4, { 1, 0 }
}

define i32 @param_pthread_join() local_unnamed_addr {
dec_label_pc_3720:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !458
  %total_-96.012.reg2mem = alloca i32, !insn.addr !458
  %indvars.iv.reg2mem = alloca i64, !insn.addr !458
  %indvars.iv17.reg2mem = alloca i64, !insn.addr !458
  %tids_-40 = alloca [1 x i64], align 8
  %data_-88 = alloca i64, align 8
  %stack_var_-8 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !459
  %1 = call i64* @memset(i64* nonnull %data_-88, i32 0, i32 36), !insn.addr !460
  store i64 1, i64* %data_-88, align 8, !insn.addr !461
  %2 = ptrtoint [1 x i64]* %tids_-40 to i64, !insn.addr !462
  %3 = ptrtoint i64* %data_-88 to i64
  store i64 0, i64* %indvars.iv17.reg2mem
  br label %dec_label_pc_3773

dec_label_pc_3769:                                ; preds = %dec_label_pc_3773
  %indvars.iv.next18 = add nuw nsw i64 %indvars.iv17.reload, 1
  %4 = icmp ugt i64 %indvars.iv17.reload, 1, !insn.addr !463
  store i64 %indvars.iv.next18, i64* %indvars.iv17.reg2mem, !insn.addr !463
  br i1 %4, label %dec_label_pc_37d7.preheader, label %dec_label_pc_3773, !insn.addr !463

dec_label_pc_37d7.preheader:                      ; preds = %dec_label_pc_3769
  %5 = add i64 %0, -32, !insn.addr !464
  %6 = add i64 %3, 8
  store i64 0, i64* %indvars.iv.reg2mem
  store i32 0, i32* %total_-96.012.reg2mem
  br label %dec_label_pc_37e1

dec_label_pc_3773:                                ; preds = %dec_label_pc_3720, %dec_label_pc_3769
  %indvars.iv17.reload = load i64, i64* %indvars.iv17.reg2mem
  %7 = mul i64 %indvars.iv17.reload, 8, !insn.addr !465
  %8 = add i64 %7, %2, !insn.addr !466
  %9 = mul nuw nsw i64 %indvars.iv17.reload, 12, !insn.addr !467
  %10 = add i64 %9, %3, !insn.addr !468
  %11 = inttoptr i64 %8 to i32*, !insn.addr !469
  %12 = inttoptr i64 %10 to i64*, !insn.addr !469
  %13 = call i32 @pthread_create(i32* %11, i64* null, i64* (i64*)* inttoptr (i64 14016 to i64* (i64*)*), i64* %12), !insn.addr !469
  %14 = icmp eq i32 %13, 0, !insn.addr !470
  store i32 -1, i32* %stack_var_-12.0.reg2mem, !insn.addr !471
  br i1 %14, label %dec_label_pc_3769, label %dec_label_pc_3834, !insn.addr !471

dec_label_pc_37e1:                                ; preds = %dec_label_pc_37d7.preheader, %dec_label_pc_3808
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %15 = mul i64 %indvars.iv.reload, 8, !insn.addr !464
  %16 = add i64 %5, %15, !insn.addr !464
  %17 = inttoptr i64 %16 to i64*, !insn.addr !464
  %18 = load i64, i64* %17, align 8, !insn.addr !464
  %19 = trunc i64 %18 to i32, !insn.addr !472
  %20 = call i32 @pthread_join(i32 %19, i64** null), !insn.addr !472
  %21 = icmp eq i32 %20, 0, !insn.addr !473
  store i32 -2, i32* %stack_var_-12.0.reg2mem, !insn.addr !474
  br i1 %21, label %dec_label_pc_3808, label %dec_label_pc_3834, !insn.addr !474

dec_label_pc_3808:                                ; preds = %dec_label_pc_37e1
  %total_-96.012.reload = load i32, i32* %total_-96.012.reg2mem
  %22 = mul nuw nsw i64 %indvars.iv.reload, 12, !insn.addr !475
  %23 = add i64 %6, %22, !insn.addr !476
  %24 = inttoptr i64 %23 to i32*, !insn.addr !476
  %25 = load i32, i32* %24, align 4, !insn.addr !476
  %26 = add i32 %25, %total_-96.012.reload, !insn.addr !477
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %27 = icmp ugt i64 %indvars.iv.reload, 1, !insn.addr !478
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !478
  store i32 %26, i32* %total_-96.012.reg2mem, !insn.addr !478
  store i32 %26, i32* %stack_var_-12.0.reg2mem, !insn.addr !478
  br i1 %27, label %dec_label_pc_3834, label %dec_label_pc_37e1, !insn.addr !478

dec_label_pc_3834:                                ; preds = %dec_label_pc_3773, %dec_label_pc_3808, %dec_label_pc_37e1
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !479

; uselistorder directives
  uselistorder i64 %indvars.iv.reload, { 2, 0, 1, 3 }
  uselistorder i64 %indvars.iv17.reload, { 1, 3, 0, 2 }
  uselistorder i64* %data_-88, { 1, 2, 0 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %total_-96.012.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i64* (i64*, i32, i32)* @memset, { 3, 2, 1, 0, 4 }
  uselistorder label %dec_label_pc_3834, { 1, 2, 0 }
  uselistorder label %dec_label_pc_37e1, { 1, 0 }
  uselistorder label %dec_label_pc_3773, { 1, 0 }
}

define i32 @call_pthread_join() local_unnamed_addr {
dec_label_pc_3840:
  %0 = call i32 @param_pthread_join(), !insn.addr !480
  ret i32 %0, !insn.addr !481
}

define i8* @thread_increment(i8* %arg) local_unnamed_addr {
dec_label_pc_3850:
  %0 = alloca i64
  %storemerge2.reg2mem = alloca i32, !insn.addr !482
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp sgt i32 %2, 0, !insn.addr !483
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !483
  br i1 %3, label %dec_label_pc_3878, label %dec_label_pc_38b7, !insn.addr !483

dec_label_pc_3878:                                ; preds = %dec_label_pc_3850, %dec_label_pc_3878
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %4 = call i32 @pthread_mutex_lock(i64* nonnull @global_var_81f8), !insn.addr !484
  store i32 ptrtoint (i32* @global_var_8221 to i32), i32* @global_var_8220, align 4, !insn.addr !485
  %5 = call i32 @pthread_mutex_unlock(i64* nonnull @global_var_81f8), !insn.addr !486
  %6 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !487
  %7 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !488
  %exitcond = icmp eq i32 %7, %2
  store i32 %7, i32* %storemerge2.reg2mem, !insn.addr !483
  br i1 %exitcond, label %dec_label_pc_38b7, label %dec_label_pc_3878, !insn.addr !483

dec_label_pc_38b7:                                ; preds = %dec_label_pc_3878, %dec_label_pc_3850
  ret i8* null, !insn.addr !489

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_3878, { 1, 0 }
}

define i32 @param_mutex_lock(i32 %thread_count, i32 %iterations_per_thread) local_unnamed_addr {
dec_label_pc_38c0:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !490
  %indvars.iv.reg2mem = alloca i64, !insn.addr !490
  %indvars.iv4.reg2mem = alloca i64, !insn.addr !490
  %stack_var_-20 = alloca i32, align 4
  store i32 %iterations_per_thread, i32* %stack_var_-20, align 4, !insn.addr !491
  %0 = mul i32 %thread_count, 8, !insn.addr !492
  %1 = call i64* @malloc(i32 %0), !insn.addr !493
  %2 = icmp eq i64* %1, null, !insn.addr !494
  %3 = icmp eq i1 %2, false, !insn.addr !495
  store i32 -1, i32* %stack_var_-12.0.reg2mem, !insn.addr !495
  br i1 %3, label %dec_label_pc_38f6, label %dec_label_pc_39cb, !insn.addr !495

dec_label_pc_38f6:                                ; preds = %dec_label_pc_38c0
  store i32 0, i32* @global_var_8220, align 4, !insn.addr !496
  %4 = icmp sgt i32 %thread_count, 0
  br i1 %4, label %dec_label_pc_3913.lr.ph, label %dec_label_pc_399d, !insn.addr !497

dec_label_pc_3913.lr.ph:                          ; preds = %dec_label_pc_38f6
  %5 = ptrtoint i64* %1 to i64, !insn.addr !498
  %6 = bitcast i32* %stack_var_-20 to i64*, !insn.addr !499
  %7 = sext i32 %thread_count to i64
  store i64 0, i64* %indvars.iv4.reg2mem
  br label %dec_label_pc_3913

dec_label_pc_3907:                                ; preds = %dec_label_pc_3913
  %indvars.iv.next5 = add nuw nsw i64 %indvars.iv4.reload, 1
  %8 = icmp slt i64 %indvars.iv.next5, %7, !insn.addr !497
  store i64 %indvars.iv.next5, i64* %indvars.iv4.reg2mem, !insn.addr !497
  br i1 %8, label %dec_label_pc_3913, label %dec_label_pc_397a.preheader, !insn.addr !497

dec_label_pc_397a.preheader:                      ; preds = %dec_label_pc_3907
  %wide.trip.count = zext i32 %thread_count to i64
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_397a

dec_label_pc_3913:                                ; preds = %dec_label_pc_3913.lr.ph, %dec_label_pc_3907
  %indvars.iv4.reload = load i64, i64* %indvars.iv4.reg2mem
  %9 = mul i64 %indvars.iv4.reload, 8, !insn.addr !500
  %10 = add i64 %9, %5, !insn.addr !501
  %11 = inttoptr i64 %10 to i32*, !insn.addr !499
  %12 = call i32 @pthread_create(i32* %11, i64* null, i64* (i64*)* inttoptr (i64 14416 to i64* (i64*)*), i64* nonnull %6), !insn.addr !499
  %13 = icmp eq i32 %12, 0, !insn.addr !502
  br i1 %13, label %dec_label_pc_3907, label %dec_label_pc_393f, !insn.addr !503

dec_label_pc_393f:                                ; preds = %dec_label_pc_3913
  call void @free(i64* %1), !insn.addr !504
  store i32 -2, i32* %stack_var_-12.0.reg2mem, !insn.addr !505
  br label %dec_label_pc_39cb, !insn.addr !505

dec_label_pc_397a:                                ; preds = %dec_label_pc_397a.preheader, %dec_label_pc_397a
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %14 = mul i64 %indvars.iv.reload, 8, !insn.addr !506
  %15 = add i64 %14, %5, !insn.addr !506
  %16 = inttoptr i64 %15 to i64*, !insn.addr !506
  %17 = load i64, i64* %16, align 8, !insn.addr !506
  %18 = trunc i64 %17 to i32, !insn.addr !507
  %19 = call i32 @pthread_join(i32 %18, i64** null), !insn.addr !507
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !508
  br i1 %exitcond, label %dec_label_pc_399d, label %dec_label_pc_397a, !insn.addr !508

dec_label_pc_399d:                                ; preds = %dec_label_pc_397a, %dec_label_pc_38f6
  call void @free(i64* %1), !insn.addr !509
  %20 = load i32, i32* %stack_var_-20, align 4, !insn.addr !510
  %21 = mul i32 %20, %thread_count, !insn.addr !510
  %22 = load i32, i32* @global_var_8220, align 4, !insn.addr !511
  %23 = icmp eq i32 %22, %21, !insn.addr !512
  %24 = select i1 %23, i32 42, i32 -3, !insn.addr !513
  store i32 %24, i32* %stack_var_-12.0.reg2mem, !insn.addr !514
  br label %dec_label_pc_39cb, !insn.addr !514

dec_label_pc_39cb:                                ; preds = %dec_label_pc_38c0, %dec_label_pc_399d, %dec_label_pc_393f
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !515

; uselistorder directives
  uselistorder i64 %indvars.iv4.reload, { 1, 0 }
  uselistorder i32* %stack_var_-20, { 1, 0, 2 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32* @global_var_8220, { 2, 1, 0 }
  uselistorder i32 %thread_count, { 1, 3, 2, 4, 0 }
  uselistorder label %dec_label_pc_39cb, { 1, 2, 0 }
  uselistorder label %dec_label_pc_397a, { 1, 0 }
  uselistorder label %dec_label_pc_3913, { 1, 0 }
}

define i32 @call_mutex_lock() local_unnamed_addr {
dec_label_pc_39e0:
  %0 = call i32 @param_mutex_lock(i32 4, i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !516
  ret i32 %0, !insn.addr !517
}

define i8* @consumer_thread(i8* %arg) local_unnamed_addr {
dec_label_pc_3a00:
  %0 = call i32 @pthread_mutex_lock(i64* nonnull @global_var_8228), !insn.addr !518
  %1 = load i32, i32* @global_var_8250, align 4, !insn.addr !519
  %2 = icmp eq i32 %1, 0, !insn.addr !519
  %3 = icmp eq i1 %2, false, !insn.addr !520
  %4 = icmp eq i1 %3, false, !insn.addr !521
  br i1 %4, label %dec_label_pc_3a31, label %dec_label_pc_3a49, !insn.addr !521

dec_label_pc_3a31:                                ; preds = %dec_label_pc_3a00, %dec_label_pc_3a31
  %5 = call i32 @pthread_cond_wait(i64* nonnull @global_var_8258, i64* nonnull @global_var_8228), !insn.addr !522
  %6 = load i32, i32* @global_var_8250, align 4, !insn.addr !519
  %7 = icmp eq i32 %6, 0, !insn.addr !519
  %8 = icmp eq i1 %7, false, !insn.addr !520
  %9 = icmp eq i1 %8, false, !insn.addr !521
  br i1 %9, label %dec_label_pc_3a31, label %dec_label_pc_3a49, !insn.addr !521

dec_label_pc_3a49:                                ; preds = %dec_label_pc_3a31, %dec_label_pc_3a00
  %10 = load i32, i32* @global_var_8288, align 4, !insn.addr !523
  %11 = call i32 @pthread_mutex_unlock(i64* nonnull @global_var_8228), !insn.addr !524
  %12 = call i64* @malloc(i32 4), !insn.addr !525
  %13 = bitcast i64* %12 to i32*, !insn.addr !526
  store i32 %10, i32* %13, align 4, !insn.addr !527
  %14 = bitcast i64* %12 to i8*, !insn.addr !528
  ret i8* %14, !insn.addr !528

; uselistorder directives
  uselistorder label %dec_label_pc_3a31, { 1, 0 }
}

define i8* @producer_thread(i8* %arg) local_unnamed_addr {
dec_label_pc_3a80:
  %0 = call i32 @sleep(i32 1), !insn.addr !529
  %1 = call i32 @pthread_mutex_lock(i64* nonnull @global_var_8228), !insn.addr !530
  store i32 42, i32* @global_var_8288, align 4, !insn.addr !531
  store i32 1, i32* @global_var_8250, align 4, !insn.addr !532
  %2 = call i32 @pthread_cond_signal(i64* nonnull @global_var_8258), !insn.addr !533
  %3 = call i32 @pthread_mutex_unlock(i64* nonnull @global_var_8228), !insn.addr !534
  ret i8* null, !insn.addr !535

; uselistorder directives
  uselistorder i64* @global_var_8228, { 0, 1, 3, 2, 4 }
}

define i32 @param_condition_variable() local_unnamed_addr {
dec_label_pc_3ae0:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !536
  %consumer_ret_-40 = alloca i8*, align 8
  %producer_-24 = alloca i64, align 8
  %consumer_-32 = alloca i64, align 8
  store i32 0, i32* @global_var_8250, align 4, !insn.addr !537
  store i32 0, i32* @global_var_8288, align 4, !insn.addr !538
  %0 = bitcast i64* %consumer_-32 to i32*, !insn.addr !539
  %1 = call i32 @pthread_create(i32* nonnull %0, i64* null, i64* (i64*)* inttoptr (i64 14848 to i64* (i64*)*), i64* null), !insn.addr !539
  %2 = icmp eq i32 %1, 0, !insn.addr !540
  store i32 -1, i32* %stack_var_-12.0.reg2mem, !insn.addr !541
  br i1 %2, label %dec_label_pc_3b28, label %dec_label_pc_3b8f, !insn.addr !541

dec_label_pc_3b28:                                ; preds = %dec_label_pc_3ae0
  %3 = bitcast i64* %producer_-24 to i32*, !insn.addr !542
  %4 = call i32 @pthread_create(i32* nonnull %3, i64* null, i64* (i64*)* inttoptr (i64 14976 to i64* (i64*)*), i64* null), !insn.addr !542
  %5 = icmp eq i32 %4, 0, !insn.addr !543
  %6 = load i64, i64* %consumer_-32, align 8
  %7 = trunc i64 %6 to i32
  br i1 %5, label %dec_label_pc_3b5d, label %dec_label_pc_3b48, !insn.addr !544

dec_label_pc_3b48:                                ; preds = %dec_label_pc_3b28
  %8 = call i32 @pthread_cancel(i32 %7), !insn.addr !545
  store i32 -2, i32* %stack_var_-12.0.reg2mem, !insn.addr !546
  br label %dec_label_pc_3b8f, !insn.addr !546

dec_label_pc_3b5d:                                ; preds = %dec_label_pc_3b28
  %9 = bitcast i8** %consumer_ret_-40 to i64**, !insn.addr !547
  %10 = call i32 @pthread_join(i32 %7, i64** nonnull %9), !insn.addr !547
  %11 = load i64, i64* %producer_-24, align 8, !insn.addr !548
  %12 = trunc i64 %11 to i32, !insn.addr !549
  %13 = call i32 @pthread_join(i32 %12, i64** null), !insn.addr !549
  %14 = load i8*, i8** %consumer_ret_-40, align 8
  %15 = bitcast i8* %14 to i32*, !insn.addr !550
  %16 = load i32, i32* %15, align 4, !insn.addr !550
  %17 = bitcast i8* %14 to i64*, !insn.addr !551
  call void @free(i64* %17), !insn.addr !551
  store i32 %16, i32* %stack_var_-12.0.reg2mem, !insn.addr !552
  br label %dec_label_pc_3b8f, !insn.addr !552

dec_label_pc_3b8f:                                ; preds = %dec_label_pc_3ae0, %dec_label_pc_3b5d, %dec_label_pc_3b48
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !553

; uselistorder directives
  uselistorder i32 %7, { 1, 0 }
  uselistorder i64* %consumer_-32, { 1, 0 }
  uselistorder i64* %producer_-24, { 1, 0 }
  uselistorder i8** %consumer_ret_-40, { 1, 0 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32* @global_var_8288, { 2, 1, 0 }
  uselistorder i32* @global_var_8250, { 3, 2, 1, 0 }
  uselistorder label %dec_label_pc_3b8f, { 1, 2, 0 }
}

define i32 @call_condition_variable() local_unnamed_addr {
dec_label_pc_3ba0:
  %0 = call i32 @param_condition_variable(), !insn.addr !554
  ret i32 %0, !insn.addr !555
}

define i8* @thread_atomic_increment(i8* %arg) local_unnamed_addr {
dec_label_pc_3bb0:
  %0 = alloca i64
  %storemerge1.reg2mem = alloca i32, !insn.addr !556
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp sgt i32 %2, 0, !insn.addr !557
  store i32 0, i32* %storemerge1.reg2mem, !insn.addr !557
  br i1 %3, label %dec_label_pc_3bd4, label %dec_label_pc_3c3d, !insn.addr !557

dec_label_pc_3bd4:                                ; preds = %dec_label_pc_3bb0, %dec_label_pc_3bd4
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %4 = load i32, i32* inttoptr (i64 33420 to i32*), align 4, !insn.addr !558
  %5 = add i32 %4, 1, !insn.addr !558
  %6 = add i32 %storemerge1.reload, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !559
  %7 = icmp eq i32 %storemerge1.reload, %5, !insn.addr !560
  %8 = select i1 %7, i32 %6, i32 %5, !insn.addr !560
  store i32 %8, i32* @global_var_828c, align 4, !insn.addr !560
  %9 = add nuw nsw i32 %storemerge1.reload, 1, !insn.addr !561
  %exitcond = icmp eq i32 %9, %2
  store i32 %9, i32* %storemerge1.reg2mem, !insn.addr !557
  br i1 %exitcond, label %dec_label_pc_3c3d, label %dec_label_pc_3bd4, !insn.addr !557

dec_label_pc_3c3d:                                ; preds = %dec_label_pc_3bd4, %dec_label_pc_3bb0
  ret i8* null, !insn.addr !562

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i32 %storemerge1.reload, { 0, 2, 1 }
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32* %storemerge1.reg2mem, { 2, 0, 1 }
  uselistorder i32 ptrtoint (i32* @global_var_3e8 to i32), { 7, 3, 4, 6, 5, 0, 2, 1 }
  uselistorder label %dec_label_pc_3bd4, { 1, 0 }
}

define i8* @thread_atomic_load_store(i8* %arg) local_unnamed_addr {
dec_label_pc_3c50:
  %0 = load i32, i32* @global_var_828c, align 4
  %1 = add i32 %0, 100, !insn.addr !563
  store i32 %1, i32* @global_var_828c, align 4, !insn.addr !564
  ret i8* null, !insn.addr !565
}

define i32 @param_atomic_ops(i32 %thread_count, i32 %iterations) local_unnamed_addr {
dec_label_pc_3c80:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !566
  %indvars.iv.reg2mem = alloca i64, !insn.addr !566
  %storemerge4.reg2mem = alloca i64, !insn.addr !566
  %load_store_tid_-48 = alloca i64, align 8
  %stack_var_-20 = alloca i32, align 4
  store i32 %iterations, i32* %stack_var_-20, align 4, !insn.addr !567
  %0 = mul i32 %thread_count, 8, !insn.addr !568
  %1 = call i64* @malloc(i32 %0), !insn.addr !569
  %2 = icmp eq i64* %1, null, !insn.addr !570
  %3 = icmp eq i1 %2, false, !insn.addr !571
  store i32 -1, i32* %stack_var_-12.0.reg2mem, !insn.addr !571
  br i1 %3, label %dec_label_pc_3cb6, label %dec_label_pc_3dc3, !insn.addr !571

dec_label_pc_3cb6:                                ; preds = %dec_label_pc_3c80
  store i32 0, i32* @global_var_828c, align 4, !insn.addr !572
  %4 = icmp sgt i32 %thread_count, 0
  br i1 %4, label %dec_label_pc_3cd9.lr.ph, label %dec_label_pc_3d2d, !insn.addr !573

dec_label_pc_3cd9.lr.ph:                          ; preds = %dec_label_pc_3cb6
  %5 = ptrtoint i64* %1 to i64, !insn.addr !574
  %6 = bitcast i32* %stack_var_-20 to i64*, !insn.addr !575
  store i64 0, i64* %storemerge4.reg2mem
  br label %dec_label_pc_3cd9

dec_label_pc_3cd9:                                ; preds = %dec_label_pc_3cd9.lr.ph, %dec_label_pc_3d1f
  %storemerge4.reload = load i64, i64* %storemerge4.reg2mem
  %7 = mul i64 %storemerge4.reload, 8, !insn.addr !576
  %8 = add i64 %7, %5, !insn.addr !577
  %9 = inttoptr i64 %8 to i32*, !insn.addr !575
  %10 = call i32 @pthread_create(i32* %9, i64* null, i64* (i64*)* inttoptr (i64 15280 to i64* (i64*)*), i64* nonnull %6), !insn.addr !575
  %11 = icmp eq i32 %10, 0, !insn.addr !578
  br i1 %11, label %dec_label_pc_3d1f, label %dec_label_pc_3d05, !insn.addr !579

dec_label_pc_3d05:                                ; preds = %dec_label_pc_3cd9
  call void @free(i64* %1), !insn.addr !580
  store i32 -2, i32* %stack_var_-12.0.reg2mem, !insn.addr !581
  br label %dec_label_pc_3dc3, !insn.addr !581

dec_label_pc_3d1f:                                ; preds = %dec_label_pc_3cd9
  %12 = mul i64 %storemerge4.reload, 4294967296, !insn.addr !582
  %sext1 = add i64 %12, 4294967296
  %13 = ashr exact i64 %sext1, 32, !insn.addr !583
  %14 = trunc i64 %13 to i32, !insn.addr !573
  %15 = icmp slt i32 %14, %thread_count, !insn.addr !573
  store i64 %13, i64* %storemerge4.reg2mem, !insn.addr !573
  br i1 %15, label %dec_label_pc_3cd9, label %dec_label_pc_3d2d, !insn.addr !573

dec_label_pc_3d2d:                                ; preds = %dec_label_pc_3d1f, %dec_label_pc_3cb6
  %16 = bitcast i64* %load_store_tid_-48 to i32*, !insn.addr !584
  %17 = call i32 @pthread_create(i32* nonnull %16, i64* null, i64* (i64*)* inttoptr (i64 15440 to i64* (i64*)*), i64* null), !insn.addr !584
  %18 = icmp eq i32 %17, 0, !insn.addr !585
  br i1 %18, label %dec_label_pc_3d52, label %dec_label_pc_3d5f, !insn.addr !586

dec_label_pc_3d52:                                ; preds = %dec_label_pc_3d2d
  %19 = load i64, i64* %load_store_tid_-48, align 8, !insn.addr !587
  %20 = trunc i64 %19 to i32, !insn.addr !588
  %21 = call i32 @pthread_join(i32 %20, i64** null), !insn.addr !588
  br label %dec_label_pc_3d5f, !insn.addr !588

dec_label_pc_3d5f:                                ; preds = %dec_label_pc_3d2d, %dec_label_pc_3d52
  br i1 %4, label %dec_label_pc_3d72.lr.ph, label %dec_label_pc_3d95, !insn.addr !589

dec_label_pc_3d72.lr.ph:                          ; preds = %dec_label_pc_3d5f
  %22 = ptrtoint i64* %1 to i64, !insn.addr !590
  %wide.trip.count = zext i32 %thread_count to i64
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_3d72

dec_label_pc_3d72:                                ; preds = %dec_label_pc_3d72, %dec_label_pc_3d72.lr.ph
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %23 = mul i64 %indvars.iv.reload, 8, !insn.addr !591
  %24 = add i64 %23, %22, !insn.addr !591
  %25 = inttoptr i64 %24 to i64*, !insn.addr !591
  %26 = load i64, i64* %25, align 8, !insn.addr !591
  %27 = trunc i64 %26 to i32, !insn.addr !592
  %28 = call i32 @pthread_join(i32 %27, i64** null), !insn.addr !592
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !589
  br i1 %exitcond, label %dec_label_pc_3d95, label %dec_label_pc_3d72, !insn.addr !589

dec_label_pc_3d95:                                ; preds = %dec_label_pc_3d72, %dec_label_pc_3d5f
  %29 = load i32, i32* @global_var_828c, align 4, !insn.addr !593
  call void @free(i64* %1), !insn.addr !594
  %30 = icmp eq i32 %29, 0, !insn.addr !595
  %31 = icmp slt i32 %29, 0, !insn.addr !595
  %32 = icmp eq i1 %31, false, !insn.addr !596
  %33 = icmp eq i1 %30, false, !insn.addr !596
  %34 = icmp eq i1 %32, %33, !insn.addr !596
  %35 = select i1 %34, i32 42, i32 -3, !insn.addr !596
  store i32 %35, i32* %stack_var_-12.0.reg2mem, !insn.addr !597
  br label %dec_label_pc_3dc3, !insn.addr !597

dec_label_pc_3dc3:                                ; preds = %dec_label_pc_3c80, %dec_label_pc_3d95, %dec_label_pc_3d05
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !598

; uselistorder directives
  uselistorder i32 %29, { 1, 0 }
  uselistorder i64 %storemerge4.reload, { 1, 0 }
  uselistorder i64* %load_store_tid_-48, { 1, 0 }
  uselistorder i64* %storemerge4.reg2mem, { 1, 0, 2 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i64** null, { 1, 0, 2, 3, 4 }
  uselistorder i32* @global_var_828c, { 4, 3, 2, 1, 0 }
  uselistorder i32 %thread_count, { 1, 3, 2, 0 }
  uselistorder label %dec_label_pc_3dc3, { 1, 2, 0 }
  uselistorder label %dec_label_pc_3d5f, { 1, 0 }
  uselistorder label %dec_label_pc_3cd9, { 1, 0 }
}

define i32 @call_atomic_ops() local_unnamed_addr {
dec_label_pc_3dd0:
  %0 = call i32 @param_atomic_ops(i32 4, i32 500), !insn.addr !599
  ret i32 %0, !insn.addr !600
}

define i8* @thread_tls_test(i8* %arg) local_unnamed_addr {
dec_label_pc_3df0:
  %0 = call i32 @__readfsdword(i64 -48), !insn.addr !601
  %1 = call i32 @__readfsdword(i64 -48), !insn.addr !602
  %2 = add i32 %1, 50, !insn.addr !603
  call void @__writefsdword(i64 -48, i32 %2), !insn.addr !604
  %3 = call i64 @__readfsqword(i64 0), !insn.addr !605
  %4 = add i64 %3, -32, !insn.addr !606
  %5 = inttoptr i64 %4 to i8*, !insn.addr !607
  %6 = call i8* @strncpy(i8* %5, i8* %arg, i32 31), !insn.addr !607
  %7 = call i64* @malloc(i32 8), !insn.addr !608
  %8 = bitcast i64* %7 to i8*
  %9 = bitcast i64* %7 to i32*
  store i32 %0, i32* %9, align 4, !insn.addr !609
  %10 = call i32 @__readfsdword(i64 -48), !insn.addr !610
  %11 = ptrtoint i64* %7 to i64, !insn.addr !611
  %12 = add i64 %11, 4, !insn.addr !612
  %13 = inttoptr i64 %12 to i32*, !insn.addr !612
  store i32 %10, i32* %13, align 4, !insn.addr !612
  ret i8* %8, !insn.addr !613
}

define i32 @param_thread_local_storage(i32 %thread_count) local_unnamed_addr {
dec_label_pc_3e70:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !614
  %total_final_-52.0.lcssa.reg2mem = alloca i32, !insn.addr !614
  %total_initial_-48.0.lcssa.reg2mem = alloca i32, !insn.addr !614
  %total_initial_-48.013.reg2mem = alloca i32, !insn.addr !614
  %total_final_-52.014.reg2mem = alloca i32, !insn.addr !614
  %indvars.iv.reg2mem = alloca i64, !insn.addr !614
  %indvars.iv21.reg2mem = alloca i64, !insn.addr !614
  %indvars.iv25.reg2mem = alloca i64, !insn.addr !614
  %indvars.iv27.reg2mem = alloca i64, !insn.addr !614
  %stack_var_-64 = alloca i64, align 8
  %0 = mul i32 %thread_count, 8, !insn.addr !615
  %1 = call i64* @malloc(i32 %0), !insn.addr !616
  %2 = call i64* @malloc(i32 %0), !insn.addr !617
  %3 = icmp ne i64* %1, null, !insn.addr !618
  %4 = icmp eq i64* %2, null, !insn.addr !619
  %5 = icmp eq i1 %4, false, !insn.addr !620
  %or.cond = icmp eq i1 %3, %5
  store i32 -1, i32* %stack_var_-12.0.reg2mem, !insn.addr !621
  br i1 %or.cond, label %dec_label_pc_3ec6.preheader, label %dec_label_pc_409a, !insn.addr !621

dec_label_pc_3ec6.preheader:                      ; preds = %dec_label_pc_3e70
  %6 = icmp sgt i32 %thread_count, 0
  store i32 0, i32* %total_initial_-48.0.lcssa.reg2mem, !insn.addr !622
  store i32 0, i32* %total_final_-52.0.lcssa.reg2mem, !insn.addr !622
  br i1 %6, label %dec_label_pc_3ed2.lr.ph, label %dec_label_pc_4044, !insn.addr !622

dec_label_pc_3ed2.lr.ph:                          ; preds = %dec_label_pc_3ec6.preheader
  %7 = ptrtoint i64* %2 to i64
  %wide.trip.count29 = zext i32 %thread_count to i64
  store i64 0, i64* %indvars.iv27.reg2mem
  br label %dec_label_pc_3ed2

dec_label_pc_3f2e.lr.ph:                          ; preds = %dec_label_pc_3ed2
  %8 = ptrtoint i64* %1 to i64, !insn.addr !623
  %9 = sext i32 %thread_count to i64
  store i64 0, i64* %indvars.iv25.reg2mem
  br label %dec_label_pc_3f2e

dec_label_pc_3ed2:                                ; preds = %dec_label_pc_3ed2, %dec_label_pc_3ed2.lr.ph
  %indvars.iv27.reload = load i64, i64* %indvars.iv27.reg2mem
  %10 = call i64* @malloc(i32 16), !insn.addr !624
  %11 = ptrtoint i64* %10 to i64, !insn.addr !624
  %12 = mul i64 %indvars.iv27.reload, 8, !insn.addr !625
  %13 = add i64 %12, %7, !insn.addr !625
  %14 = inttoptr i64 %13 to i64*, !insn.addr !625
  store i64 %11, i64* %14, align 8, !insn.addr !625
  %15 = bitcast i64* %10 to i8*, !insn.addr !626
  %16 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %15, i32 16, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_532c, i64 0, i64 0), i64 %indvars.iv27.reload), !insn.addr !626
  %indvars.iv.next28 = add nuw nsw i64 %indvars.iv27.reload, 1
  %exitcond30 = icmp eq i64 %indvars.iv.next28, %wide.trip.count29
  store i64 %indvars.iv.next28, i64* %indvars.iv27.reg2mem, !insn.addr !622
  br i1 %exitcond30, label %dec_label_pc_3f2e.lr.ph, label %dec_label_pc_3ed2, !insn.addr !622

dec_label_pc_3fe6.lr.ph:                          ; preds = %dec_label_pc_3fb7
  %17 = bitcast i64* %stack_var_-64 to i64**, !insn.addr !627
  store i64 0, i64* %indvars.iv.reg2mem
  store i32 0, i32* %total_final_-52.014.reg2mem
  store i32 0, i32* %total_initial_-48.013.reg2mem
  br label %dec_label_pc_3fe6

dec_label_pc_3f2e:                                ; preds = %dec_label_pc_3f2e.lr.ph, %dec_label_pc_3fb7
  %indvars.iv25.reload = load i64, i64* %indvars.iv25.reg2mem
  %18 = mul i64 %indvars.iv25.reload, 8, !insn.addr !628
  %19 = add i64 %18, %8, !insn.addr !629
  %20 = add i64 %18, %7, !insn.addr !630
  %21 = inttoptr i64 %20 to i64*, !insn.addr !630
  %22 = load i64, i64* %21, align 8, !insn.addr !630
  %23 = inttoptr i64 %19 to i32*, !insn.addr !631
  %24 = inttoptr i64 %22 to i64*, !insn.addr !631
  %25 = call i32 @pthread_create(i32* %23, i64* null, i64* (i64*)* inttoptr (i64 15856 to i64* (i64*)*), i64* %24), !insn.addr !631
  %26 = icmp eq i32 %25, 0, !insn.addr !632
  br i1 %26, label %dec_label_pc_3fb7, label %dec_label_pc_3f69.preheader, !insn.addr !633

dec_label_pc_3f69.preheader:                      ; preds = %dec_label_pc_3f2e
  %27 = trunc i64 %indvars.iv25.reload to i32
  %28 = icmp slt i32 %27, 0, !insn.addr !634
  br i1 %28, label %dec_label_pc_3f94, label %dec_label_pc_3f75.lr.ph, !insn.addr !634

dec_label_pc_3f75.lr.ph:                          ; preds = %dec_label_pc_3f69.preheader
  %29 = add nuw i64 %indvars.iv25.reload, 1
  %wide.trip.count23 = and i64 %29, 4294967295
  store i64 0, i64* %indvars.iv21.reg2mem
  br label %dec_label_pc_3f75

dec_label_pc_3f75:                                ; preds = %dec_label_pc_3f75.lr.ph, %dec_label_pc_3f75
  %indvars.iv21.reload = load i64, i64* %indvars.iv21.reg2mem
  %30 = mul i64 %indvars.iv21.reload, 8, !insn.addr !635
  %31 = add i64 %30, %7, !insn.addr !635
  %32 = inttoptr i64 %31 to i64*, !insn.addr !635
  %33 = load i64, i64* %32, align 8, !insn.addr !635
  %34 = inttoptr i64 %33 to i64*, !insn.addr !636
  call void @free(i64* %34), !insn.addr !636
  %indvars.iv.next22 = add nuw nsw i64 %indvars.iv21.reload, 1
  %exitcond24 = icmp eq i64 %indvars.iv.next22, %wide.trip.count23
  store i64 %indvars.iv.next22, i64* %indvars.iv21.reg2mem, !insn.addr !634
  br i1 %exitcond24, label %dec_label_pc_3f94, label %dec_label_pc_3f75, !insn.addr !634

dec_label_pc_3f94:                                ; preds = %dec_label_pc_3f75, %dec_label_pc_3f69.preheader
  call void @free(i64* %2), !insn.addr !637
  call void @free(i64* nonnull %1), !insn.addr !638
  store i32 -2, i32* %stack_var_-12.0.reg2mem, !insn.addr !639
  br label %dec_label_pc_409a, !insn.addr !639

dec_label_pc_3fb7:                                ; preds = %dec_label_pc_3f2e
  %indvars.iv.next26 = add nuw nsw i64 %indvars.iv25.reload, 1
  %35 = icmp slt i64 %indvars.iv.next26, %9, !insn.addr !640
  store i64 %indvars.iv.next26, i64* %indvars.iv25.reg2mem, !insn.addr !640
  br i1 %35, label %dec_label_pc_3f2e, label %dec_label_pc_3fe6.lr.ph, !insn.addr !640

dec_label_pc_3fe6:                                ; preds = %dec_label_pc_3fe6, %dec_label_pc_3fe6.lr.ph
  %total_initial_-48.013.reload = load i32, i32* %total_initial_-48.013.reg2mem
  %total_final_-52.014.reload = load i32, i32* %total_final_-52.014.reg2mem
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %36 = mul i64 %indvars.iv.reload, 8, !insn.addr !641
  %37 = add i64 %36, %8, !insn.addr !641
  %38 = inttoptr i64 %37 to i64*, !insn.addr !641
  %39 = load i64, i64* %38, align 8, !insn.addr !641
  %40 = trunc i64 %39 to i32, !insn.addr !627
  %41 = call i32 @pthread_join(i32 %40, i64** nonnull %17), !insn.addr !627
  %42 = load i64, i64* %stack_var_-64, align 8, !insn.addr !642
  %sext = mul i64 %42, 4294967296
  %43 = ashr exact i64 %sext, 32, !insn.addr !643
  %44 = inttoptr i64 %43 to i32*, !insn.addr !644
  %45 = load i32, i32* %44, align 4, !insn.addr !644
  %46 = add i32 %45, %total_initial_-48.013.reload, !insn.addr !645
  %47 = add nsw i64 %43, 4, !insn.addr !646
  %48 = inttoptr i64 %47 to i32*, !insn.addr !646
  %49 = load i32, i32* %48, align 4, !insn.addr !646
  %50 = add i32 %49, %total_final_-52.014.reload, !insn.addr !647
  %51 = inttoptr i64 %43 to i64*, !insn.addr !648
  call void @free(i64* %51), !insn.addr !648
  %52 = add i64 %36, %7, !insn.addr !649
  %53 = inttoptr i64 %52 to i64*, !insn.addr !649
  %54 = load i64, i64* %53, align 8, !insn.addr !649
  %55 = inttoptr i64 %54 to i64*, !insn.addr !650
  call void @free(i64* %55), !insn.addr !650
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count29
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !651
  store i32 %50, i32* %total_final_-52.014.reg2mem, !insn.addr !651
  store i32 %46, i32* %total_initial_-48.013.reg2mem, !insn.addr !651
  store i32 %46, i32* %total_initial_-48.0.lcssa.reg2mem, !insn.addr !651
  store i32 %50, i32* %total_final_-52.0.lcssa.reg2mem, !insn.addr !651
  br i1 %exitcond, label %dec_label_pc_4044, label %dec_label_pc_3fe6, !insn.addr !651

dec_label_pc_4044:                                ; preds = %dec_label_pc_3fe6, %dec_label_pc_3ec6.preheader
  %total_initial_-48.0.lcssa.reload = load i32, i32* %total_initial_-48.0.lcssa.reg2mem
  call void @free(i64* %2), !insn.addr !652
  call void @free(i64* nonnull %1), !insn.addr !653
  %56 = mul i32 %thread_count, 100
  %57 = icmp eq i32 %total_initial_-48.0.lcssa.reload, %56, !insn.addr !654
  %58 = icmp eq i1 %57, false, !insn.addr !655
  store i32 -3, i32* %stack_var_-12.0.reg2mem, !insn.addr !655
  br i1 %58, label %dec_label_pc_409a, label %dec_label_pc_4078, !insn.addr !655

dec_label_pc_4078:                                ; preds = %dec_label_pc_4044
  %total_final_-52.0.lcssa.reload = load i32, i32* %total_final_-52.0.lcssa.reg2mem
  %59 = mul i32 %thread_count, 150, !insn.addr !656
  %60 = icmp eq i32 %total_final_-52.0.lcssa.reload, %59, !insn.addr !657
  %phitmp = icmp eq i1 %60, false
  %phitmp8 = icmp eq i1 %phitmp, false
  %phitmp9 = select i1 %phitmp8, i32 42, i32 -3
  store i32 %phitmp9, i32* %stack_var_-12.0.reg2mem, !insn.addr !658
  br label %dec_label_pc_409a, !insn.addr !658

dec_label_pc_409a:                                ; preds = %dec_label_pc_4044, %dec_label_pc_4078, %dec_label_pc_3e70, %dec_label_pc_3f94
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !659

; uselistorder directives
  uselistorder i64 %36, { 1, 0 }
  uselistorder i64 %18, { 1, 0 }
  uselistorder i64 %indvars.iv25.reload, { 0, 2, 1, 3 }
  uselistorder i64* %2, { 3, 2, 1, 0 }
  uselistorder i32 %0, { 1, 0 }
  uselistorder i64* %stack_var_-64, { 1, 0 }
  uselistorder i64* %indvars.iv27.reg2mem, { 1, 0, 2 }
  uselistorder i64* %indvars.iv25.reg2mem, { 1, 0, 2 }
  uselistorder i64* %indvars.iv21.reg2mem, { 1, 0, 2 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %total_final_-52.014.reg2mem, { 1, 0, 2 }
  uselistorder i32* %total_initial_-48.013.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 1, 2, 4, 3 }
  uselistorder i32 42, { 2, 4, 14, 5, 0, 6, 7, 1, 8, 9, 10, 11, 3, 12, 13 }
  uselistorder i32 -3, { 6, 0, 8, 9, 1, 2, 3, 10, 4, 7, 5 }
  uselistorder i64 4, { 3, 4, 5, 0, 1, 2 }
  uselistorder i64 4294967296, { 0, 2, 1 }
  uselistorder i32 (i32, i64**)* @pthread_join, { 2, 3, 4, 5, 6, 7, 0, 1, 8 }
  uselistorder i32 -2, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 10, 9 }
  uselistorder i32 (i32*, i64*, i64* (i64*)*, i64*)* @pthread_create, { 6, 7, 4, 0, 3, 5, 2, 1, 8 }
  uselistorder i64 1, { 6, 4, 5, 0, 3, 7, 9, 8, 1, 11, 2, 10, 13, 12, 14, 15 }
  uselistorder i32 0, { 11, 43, 2, 3, 0, 1, 12, 44, 45, 46, 47, 13, 24, 4, 14, 48, 49, 50, 51, 52, 17, 53, 15, 54, 5, 16, 55, 56, 6, 25, 7, 57, 58, 59, 62, 60, 61, 21, 20, 19, 63, 64, 67, 65, 66, 23, 22, 18, 68, 69, 70, 26, 71, 72, 73, 74, 75, 27, 76, 77, 28, 29, 30, 31, 78, 79, 80, 81, 82, 83, 32, 84, 85, 86, 87, 33, 88, 9, 8, 34, 10, 89, 90, 91, 35, 92, 36, 37, 38, 39, 40, 41, 42 }
  uselistorder i32 -1, { 0, 1, 2, 3, 4, 5, 22, 23, 6, 18, 7, 8, 9, 19, 10, 11, 20, 16, 17, 12, 13, 21, 14, 15 }
  uselistorder i1 false, { 9, 10, 36, 8, 37, 13, 38, 39, 14, 0, 1, 40, 43, 41, 6, 42, 15, 3, 44, 47, 45, 7, 46, 16, 2, 48, 49, 50, 17, 51, 18, 19, 20, 21, 22, 23, 24, 52, 25, 53, 26, 27, 54, 28, 55, 29, 56, 30, 31, 32, 33, 57, 4, 58, 5, 59, 11, 12, 60, 61, 34, 62, 63, 35 }
  uselistorder i64* null, { 1, 0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 }
  uselistorder i64* (i32)* @malloc, { 8, 7, 6, 5, 4, 3, 2, 1, 0, 9 }
  uselistorder i32 8, { 0, 3, 1, 2 }
  uselistorder i32 %thread_count, { 4, 5, 2, 1, 3, 0 }
  uselistorder label %dec_label_pc_409a, { 1, 0, 3, 2 }
  uselistorder label %dec_label_pc_3f75, { 1, 0 }
  uselistorder label %dec_label_pc_3f2e, { 1, 0 }
}

define i32 @call_thread_local_storage() local_unnamed_addr {
dec_label_pc_40b0:
  %0 = call i32 @param_thread_local_storage(i32 4), !insn.addr !660
  ret i32 %0, !insn.addr !661

; uselistorder directives
  uselistorder i32 4, { 1, 2, 3, 4, 5, 6, 0 }
}

define void @test_thread_concurrency() local_unnamed_addr {
dec_label_pc_40c0:
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5336 to i8*)), !insn.addr !662
  %1 = call i32 @call_pthread_create(), !insn.addr !663
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5355 to i8*)), !insn.addr !664
  %3 = call i32 @call_pthread_join(), !insn.addr !665
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5371 to i8*)), !insn.addr !666
  %5 = call i32 @call_mutex_lock(), !insn.addr !667
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_538e to i8*)), !insn.addr !668
  %7 = call i32 @call_condition_variable(), !insn.addr !669
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_53aa to i8*)), !insn.addr !670
  %9 = call i32 @call_atomic_ops(), !insn.addr !671
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_53c6 to i8*)), !insn.addr !672
  %11 = call i32 @call_thread_local_storage(), !insn.addr !673
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_53e2 to i8*)), !insn.addr !674
  ret void, !insn.addr !675

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 29 }
  uselistorder i64 0, { 1, 0, 77, 78, 2, 3, 79, 4, 5, 6, 7, 8, 9, 80, 81, 82, 83, 89, 90, 84, 85, 86, 91, 92, 87, 88, 93, 94, 152, 153, 95, 96, 97, 98, 99, 100, 10, 11, 17, 12, 18, 101, 102, 103, 104, 107, 108, 105, 106, 109, 110, 14, 15, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 143, 144, 141, 142, 150, 16, 13, 151, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 145, 146, 147, 148, 149 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_4160:
  call void @test_standard_library_functions(), !insn.addr !676
  call void @test_system_calls(), !insn.addr !677
  call void @test_thread_concurrency(), !insn.addr !678
  ret i32 xor (i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !679
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_4188:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !680

; uselistorder directives
  uselistorder i32 1, { 5, 71, 17, 16, 15, 14, 13, 12, 11, 10, 9, 73, 72, 20, 19, 18, 106, 57, 21, 4, 76, 75, 74, 22, 107, 58, 77, 25, 24, 23, 108, 26, 3, 80, 79, 78, 30, 29, 28, 27, 109, 66, 32, 31, 83, 82, 81, 33, 2, 110, 59, 38, 37, 36, 35, 34, 39, 60, 84, 61, 86, 85, 40, 90, 89, 88, 87, 8, 67, 41, 91, 42, 1, 43, 93, 92, 44, 7, 47, 46, 45, 50, 49, 48, 62, 63, 95, 94, 51, 52, 97, 96, 53, 100, 99, 98, 55, 64, 103, 102, 101, 6, 56, 65, 104, 0, 105, 54, 68, 69, 70 }
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

declare i32 @fread(i64*, i32, i32, %_IO_FILE*) local_unnamed_addr

declare i32 @setsockopt(i32, i32, i32, i64*, i32) local_unnamed_addr

declare i32 @shmdt(i64*) local_unnamed_addr

declare i32 @write(i32, i64*, i32) local_unnamed_addr

declare i32 @pthread_cond_wait(i64*, i64*) local_unnamed_addr

declare i32 @fclose(%_IO_FILE*) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

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
!78 = !{i64 9416}
!79 = !{i64 9425}
!80 = !{i64 9435}
!81 = !{i64 9459}
!82 = !{i64 9475}
!83 = !{i64 9512}
!84 = !{i64 9524}
!85 = !{i64 9570}
!86 = !{i64 9606}
!87 = !{i64 9624}
!88 = !{i64 9646}
!89 = !{i64 9657}
!90 = !{i64 9660}
!91 = !{i64 9668}
!92 = !{i64 9696}
!93 = !{i64 9714}
!94 = !{i64 9751}
!95 = !{i64 9761}
!96 = !{i64 9808}
!97 = !{i64 9822}
!98 = !{i64 9839}
!99 = !{i64 9874}
!100 = !{i64 9892}
!101 = !{i64 9897}
!102 = !{i64 9900}
!103 = !{i64 9903}
!104 = !{i64 9911}
!105 = !{i64 9952}
!106 = !{i64 9964}
!107 = !{i64 10010}
!108 = !{i64 10031}
!109 = !{i64 10051}
!110 = !{i64 10071}
!111 = !{i64 10097}
!112 = !{i64 10118}
!113 = !{i64 10129}
!114 = !{i64 10137}
!115 = !{i64 10159}
!116 = !{i64 10175}
!117 = !{i64 10191}
!118 = !{i64 10212}
!119 = !{i64 10228}
!120 = !{i64 10240}
!121 = !{i64 10273}
!122 = !{i64 10281}
!123 = !{i64 10285}
!124 = !{i64 10291}
!125 = !{i64 10294}
!126 = !{i64 10300}
!127 = !{i64 10320}
!128 = !{i64 10347}
!129 = !{i64 10353}
!130 = !{i64 10368}
!131 = !{i64 10391}
!132 = !{i64 10400}
!133 = !{i64 10405}
!134 = !{i64 10427}
!135 = !{i64 10439}
!136 = !{i64 10447}
!137 = !{i64 10458}
!138 = !{i64 10479}
!139 = !{i64 10500}
!140 = !{i64 10503}
!141 = !{i64 10511}
!142 = !{i64 10512}
!143 = !{i64 10546}
!144 = !{i64 10555}
!145 = !{i64 10560}
!146 = !{i64 10590}
!147 = !{i64 10611}
!148 = !{i64 10632}
!149 = !{i64 10644}
!150 = !{i64 10647}
!151 = !{i64 10657}
!152 = !{i64 10669}
!153 = !{i64 10513}
!154 = !{i64 10678}
!155 = !{i64 10700}
!156 = !{i64 10713}
!157 = !{i64 10722}
!158 = !{i64 10731}
!159 = !{i64 10742}
!160 = !{i64 10749}
!161 = !{i64 10763}
!162 = !{i64 10768}
!163 = !{i64 10774}
!164 = !{i64 10807}
!165 = !{i64 10827}
!166 = !{i64 10833}
!167 = !{i64 10848}
!168 = !{i64 10868}
!169 = !{i64 10877}
!170 = !{i64 10882}
!171 = !{i64 10912}
!172 = !{i64 10916}
!173 = !{i64 10922}
!174 = !{i64 10937}
!175 = !{i64 10944}
!176 = !{i64 10873}
!177 = !{i64 10961}
!178 = !{i64 10971}
!179 = !{i64 10975}
!180 = !{i64 10985}
!181 = !{i64 11001}
!182 = !{i64 11012}
!183 = !{i64 11033}
!184 = !{i64 11039}
!185 = !{i64 11040}
!186 = !{i64 11066}
!187 = !{i64 11098}
!188 = !{i64 11102}
!189 = !{i64 11108}
!190 = !{i64 11116}
!191 = !{i64 11120}
!192 = !{i64 11130}
!193 = !{i64 11151}
!194 = !{i64 11152}
!195 = !{i64 11153}
!196 = !{i64 11181}
!197 = !{i64 11171}
!198 = !{i64 11212}
!199 = !{i64 11217}
!200 = !{i64 11220}
!201 = !{i64 11228}
!202 = !{i64 11262}
!203 = !{i64 11271}
!204 = !{i64 11333}
!205 = !{i64 11342}
!206 = !{i64 11399}
!207 = !{i64 11407}
!208 = !{i64 11443}
!209 = !{i64 11459}
!210 = !{i64 11485}
!211 = !{i64 11490}
!212 = !{i64 11506}
!213 = !{i64 11511}
!214 = !{i64 11527}
!215 = !{i64 11532}
!216 = !{i64 11548}
!217 = !{i64 11553}
!218 = !{i64 11569}
!219 = !{i64 11574}
!220 = !{i64 11590}
!221 = !{i64 11595}
!222 = !{i64 11611}
!223 = !{i64 11616}
!224 = !{i64 11632}
!225 = !{i64 11637}
!226 = !{i64 11653}
!227 = !{i64 11658}
!228 = !{i64 11674}
!229 = !{i64 11679}
!230 = !{i64 11695}
!231 = !{i64 11700}
!232 = !{i64 11716}
!233 = !{i64 11721}
!234 = !{i64 11737}
!235 = !{i64 11743}
!236 = !{i64 11744}
!237 = !{i64 11769}
!238 = !{i64 11777}
!239 = !{i64 11781}
!240 = !{i64 11787}
!241 = !{i64 11797}
!242 = !{i64 11802}
!243 = !{i64 11817}
!244 = !{i64 11825}
!245 = !{i64 11836}
!246 = !{i64 11855}
!247 = !{i64 11876}
!248 = !{i64 11879}
!249 = !{i64 11887}
!250 = !{i64 11888}
!251 = !{i64 11914}
!252 = !{i64 11919}
!253 = !{i64 11922}
!254 = !{i64 11954}
!255 = !{i64 11958}
!256 = !{i64 11961}
!257 = !{i64 11975}
!258 = !{i64 11995}
!259 = !{i64 12001}
!260 = !{i64 12016}
!261 = !{i64 12032}
!262 = !{i64 12040}
!263 = !{i64 12044}
!264 = !{i64 12062}
!265 = !{i64 12066}
!266 = !{i64 12090}
!267 = !{i64 12100}
!268 = !{i64 12114}
!269 = !{i64 12122}
!270 = !{i64 12126}
!271 = !{i64 12144}
!272 = !{i64 12147}
!273 = !{i64 12150}
!274 = !{i64 12153}
!275 = !{i64 12162}
!276 = !{i64 12173}
!277 = !{i64 12193}
!278 = !{i64 12227}
!279 = !{i64 12248}
!280 = !{i64 12251}
!281 = !{i64 12259}
!282 = !{i64 12280}
!283 = !{i64 12284}
!284 = !{i64 12289}
!285 = !{i64 12292}
!286 = !{i64 12298}
!287 = !{i64 12305}
!288 = !{i64 12310}
!289 = !{i64 12318}
!290 = !{i64 12322}
!291 = !{i64 12328}
!292 = !{i64 12335}
!293 = !{i64 12340}
!294 = !{i64 12344}
!295 = !{i64 12350}
!296 = !{i64 12353}
!297 = !{i64 12387}
!298 = !{i64 12402}
!299 = !{i64 12410}
!300 = !{i64 12417}
!301 = !{i64 12273}
!302 = !{i64 12425}
!303 = !{i64 12430}
!304 = !{i64 12442}
!305 = !{i64 12455}
!306 = !{i64 12460}
!307 = !{i64 12463}
!308 = !{i64 12472}
!309 = !{i64 12491}
!310 = !{i64 12495}
!311 = !{i64 12498}
!312 = !{i64 12501}
!313 = !{i64 12509}
!314 = !{i64 12516}
!315 = !{i64 12522}
!316 = !{i64 12528}
!317 = !{i64 12548}
!318 = !{i64 12556}
!319 = !{i64 12560}
!320 = !{i64 12578}
!321 = !{i64 12608}
!322 = !{i64 12613}
!323 = !{i64 12616}
!324 = !{i64 12625}
!325 = !{i64 12637}
!326 = !{i64 12653}
!327 = !{i64 12658}
!328 = !{i64 12666}
!329 = !{i64 12694}
!330 = !{i64 12699}
!331 = !{i64 12702}
!332 = !{i64 12711}
!333 = !{i64 12723}
!334 = !{i64 12736}
!335 = !{i64 12741}
!336 = !{i64 12744}
!337 = !{i64 12778}
!338 = !{i64 12793}
!339 = !{i64 12804}
!340 = !{i64 12810}
!341 = !{i64 12816}
!342 = !{i64 12851}
!343 = !{i64 12859}
!344 = !{i64 12863}
!345 = !{i64 12884}
!346 = !{i64 12901}
!347 = !{i64 12909}
!348 = !{i64 12913}
!349 = !{i64 12944}
!350 = !{i64 12952}
!351 = !{i64 12956}
!352 = !{i64 12983}
!353 = !{i64 12999}
!354 = !{i64 13003}
!355 = !{i64 12988}
!356 = !{i64 13032}
!357 = !{i64 13041}
!358 = !{i64 13053}
!359 = !{i64 13067}
!360 = !{i64 13075}
!361 = !{i64 13086}
!362 = !{i64 13096}
!363 = !{i64 13117}
!364 = !{i64 13120}
!365 = !{i64 13128}
!366 = !{i64 13136}
!367 = !{i64 13156}
!368 = !{i64 13168}
!369 = !{i64 13171}
!370 = !{i64 13201}
!371 = !{i64 13213}
!372 = !{i64 13216}
!373 = !{i64 13234}
!374 = !{i64 13249}
!375 = !{i64 13261}
!376 = !{i64 13269}
!377 = !{i64 13275}
!378 = !{i64 13286}
!379 = !{i64 13292}
!380 = !{i64 13295}
!381 = !{i64 13304}
!382 = !{i64 13306}
!383 = !{i64 13322}
!384 = !{i64 13332}
!385 = !{i64 13338}
!386 = !{i64 13341}
!387 = !{i64 13359}
!388 = !{i64 13365}
!389 = !{i64 13368}
!390 = !{i64 13386}
!391 = !{i64 13401}
!392 = !{i64 13413}
!393 = !{i64 13421}
!394 = !{i64 13427}
!395 = !{i64 13438}
!396 = !{i64 13444}
!397 = !{i64 13447}
!398 = !{i64 13456}
!399 = !{i64 13458}
!400 = !{i64 13474}
!401 = !{i64 13484}
!402 = !{i64 13490}
!403 = !{i64 13499}
!404 = !{i64 13505}
!405 = !{i64 13493}
!406 = !{i64 13535}
!407 = !{i64 13549}
!408 = !{i64 13554}
!409 = !{i64 13569}
!410 = !{i64 13591}
!411 = !{i64 13604}
!412 = !{i64 13611}
!413 = !{i64 13620}
!414 = !{i64 13626}
!415 = !{i64 13645}
!416 = !{i64 13650}
!417 = !{i64 13666}
!418 = !{i64 13671}
!419 = !{i64 13687}
!420 = !{i64 13692}
!421 = !{i64 13708}
!422 = !{i64 13713}
!423 = !{i64 13729}
!424 = !{i64 13734}
!425 = !{i64 13750}
!426 = !{i64 13755}
!427 = !{i64 13771}
!428 = !{i64 13776}
!429 = !{i64 13792}
!430 = !{i64 13798}
!431 = !{i64 13840}
!432 = !{i64 13852}
!433 = !{i64 13868}
!434 = !{i64 13879}
!435 = !{i64 13888}
!436 = !{i64 13902}
!437 = !{i64 13924}
!438 = !{i64 13932}
!439 = !{i64 13936}
!440 = !{i64 13954}
!441 = !{i64 13962}
!442 = !{i64 13971}
!443 = !{i64 13980}
!444 = !{i64 13988}
!445 = !{i64 13999}
!446 = !{i64 14009}
!447 = !{i64 14015}
!448 = !{i64 14016}
!449 = !{i64 14032}
!450 = !{i64 14036}
!451 = !{i64 14047}
!452 = !{i64 14059}
!453 = !{i64 14062}
!454 = !{i64 14075}
!455 = !{i64 14078}
!456 = !{i64 14084}
!457 = !{i64 14098}
!458 = !{i64 14112}
!459 = !{i64 14113}
!460 = !{i64 14131}
!461 = !{i64 14136}
!462 = !{i64 14199}
!463 = !{i64 14189}
!464 = !{i64 14309}
!465 = !{i64 14203}
!466 = !{i64 14207}
!467 = !{i64 14218}
!468 = !{i64 14222}
!469 = !{i64 14236}
!470 = !{i64 14241}
!471 = !{i64 14244}
!472 = !{i64 14318}
!473 = !{i64 14323}
!474 = !{i64 14326}
!475 = !{i64 14352}
!476 = !{i64 14359}
!477 = !{i64 14362}
!478 = !{i64 14299}
!479 = !{i64 14396}
!480 = !{i64 14404}
!481 = !{i64 14410}
!482 = !{i64 14416}
!483 = !{i64 14450}
!484 = !{i64 14463}
!485 = !{i64 14477}
!486 = !{i64 14490}
!487 = !{i64 14500}
!488 = !{i64 14508}
!489 = !{i64 14526}
!490 = !{i64 14528}
!491 = !{i64 14539}
!492 = !{i64 14546}
!493 = !{i64 14550}
!494 = !{i64 14559}
!495 = !{i64 14564}
!496 = !{i64 14582}
!497 = !{i64 14605}
!498 = !{i64 14611}
!499 = !{i64 14641}
!500 = !{i64 14619}
!501 = !{i64 14623}
!502 = !{i64 14646}
!503 = !{i64 14649}
!504 = !{i64 14659}
!505 = !{i64 14671}
!506 = !{i64 14722}
!507 = !{i64 14730}
!508 = !{i64 14708}
!509 = !{i64 14753}
!510 = !{i64 14761}
!511 = !{i64 14768}
!512 = !{i64 14787}
!513 = !{i64 14789}
!514 = !{i64 14792}
!515 = !{i64 14803}
!516 = !{i64 14830}
!517 = !{i64 14836}
!518 = !{i64 14867}
!519 = !{i64 14872}
!520 = !{i64 14884}
!521 = !{i64 14886}
!522 = !{i64 14911}
!523 = !{i64 14921}
!524 = !{i64 14937}
!525 = !{i64 14947}
!526 = !{i64 14952}
!527 = !{i64 14963}
!528 = !{i64 14974}
!529 = !{i64 14993}
!530 = !{i64 15005}
!531 = !{i64 15010}
!532 = !{i64 15020}
!533 = !{i64 15037}
!534 = !{i64 15049}
!535 = !{i64 15061}
!536 = !{i64 15072}
!537 = !{i64 15080}
!538 = !{i64 15090}
!539 = !{i64 15118}
!540 = !{i64 15123}
!541 = !{i64 15126}
!542 = !{i64 15162}
!543 = !{i64 15167}
!544 = !{i64 15170}
!545 = !{i64 15180}
!546 = !{i64 15192}
!547 = !{i64 15205}
!548 = !{i64 15210}
!549 = !{i64 15218}
!550 = !{i64 15227}
!551 = !{i64 15236}
!552 = !{i64 15244}
!553 = !{i64 15255}
!554 = !{i64 15268}
!555 = !{i64 15274}
!556 = !{i64 15280}
!557 = !{i64 15310}
!558 = !{i64 15326}
!559 = !{i64 15346}
!560 = !{i64 15366}
!561 = !{i64 15410}
!562 = !{i64 15424}
!563 = !{i64 15466}
!564 = !{i64 15475}
!565 = !{i64 15484}
!566 = !{i64 15488}
!567 = !{i64 15499}
!568 = !{i64 15506}
!569 = !{i64 15510}
!570 = !{i64 15519}
!571 = !{i64 15524}
!572 = !{i64 15552}
!573 = !{i64 15571}
!574 = !{i64 15577}
!575 = !{i64 15607}
!576 = !{i64 15585}
!577 = !{i64 15589}
!578 = !{i64 15612}
!579 = !{i64 15615}
!580 = !{i64 15625}
!581 = !{i64 15637}
!582 = !{i64 15650}
!583 = !{i64 15653}
!584 = !{i64 15679}
!585 = !{i64 15684}
!586 = !{i64 15687}
!587 = !{i64 15698}
!588 = !{i64 15706}
!589 = !{i64 15724}
!590 = !{i64 15730}
!591 = !{i64 15738}
!592 = !{i64 15746}
!593 = !{i64 15765}
!594 = !{i64 15784}
!595 = !{i64 15802}
!596 = !{i64 15805}
!597 = !{i64 15808}
!598 = !{i64 15819}
!599 = !{i64 15838}
!600 = !{i64 15844}
!601 = !{i64 15876}
!602 = !{i64 15887}
!603 = !{i64 15895}
!604 = !{i64 15898}
!605 = !{i64 15910}
!606 = !{i64 15919}
!607 = !{i64 15931}
!608 = !{i64 15941}
!609 = !{i64 15957}
!610 = !{i64 15959}
!611 = !{i64 15967}
!612 = !{i64 15971}
!613 = !{i64 15983}
!614 = !{i64 15984}
!615 = !{i64 15999}
!616 = !{i64 16003}
!617 = !{i64 16020}
!618 = !{i64 16029}
!619 = !{i64 16040}
!620 = !{i64 16045}
!621 = !{i64 16034}
!622 = !{i64 16076}
!623 = !{i64 16174}
!624 = !{i64 16087}
!625 = !{i64 16103}
!626 = !{i64 16136}
!627 = !{i64 16374}
!628 = !{i64 16182}
!629 = !{i64 16186}
!630 = !{i64 16197}
!631 = !{i64 16212}
!632 = !{i64 16217}
!633 = !{i64 16220}
!634 = !{i64 16239}
!635 = !{i64 16253}
!636 = !{i64 16257}
!637 = !{i64 16280}
!638 = !{i64 16289}
!639 = !{i64 16301}
!640 = !{i64 16168}
!641 = !{i64 16366}
!642 = !{i64 16379}
!643 = !{i64 16387}
!644 = !{i64 16391}
!645 = !{i64 16393}
!646 = !{i64 16403}
!647 = !{i64 16406}
!648 = !{i64 16416}
!649 = !{i64 16429}
!650 = !{i64 16433}
!651 = !{i64 16352}
!652 = !{i64 16456}
!653 = !{i64 16465}
!654 = !{i64 16492}
!655 = !{i64 16498}
!656 = !{i64 16484}
!657 = !{i64 16507}
!658 = !{i64 16513}
!659 = !{i64 16546}
!660 = !{i64 16569}
!661 = !{i64 16575}
!662 = !{i64 16589}
!663 = !{i64 16594}
!664 = !{i64 16610}
!665 = !{i64 16615}
!666 = !{i64 16631}
!667 = !{i64 16636}
!668 = !{i64 16652}
!669 = !{i64 16657}
!670 = !{i64 16673}
!671 = !{i64 16678}
!672 = !{i64 16694}
!673 = !{i64 16699}
!674 = !{i64 16715}
!675 = !{i64 16721}
!676 = !{i64 16751}
!677 = !{i64 16756}
!678 = !{i64 16761}
!679 = !{i64 16773}
!680 = !{i64 16788}
