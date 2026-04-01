source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

%_IO_FILE = type { i32 }
%shmid_ds = type { %ipc_perm, i32, i32, i32, i32, i32, i32, i16, i16, i32*, i32* }
%ipc_perm = type { i32, i32, i32, i32, i32, i32, i16 }
%stat = type { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }
%sockaddr = type { i32, [14 x i8] }

@global_var_55f7 = constant i32 1343113312
@global_var_55c8 = local_unnamed_addr constant i32 239882254
@global_var_5568 = local_unnamed_addr constant i32 33
@global_var_5508 = local_unnamed_addr constant i32 239607822
@global_var_5484 = local_unnamed_addr constant i32 739135520
@global_var_5414 = constant i32 265793
@global_var_5198 = local_unnamed_addr constant i32 4
@global_var_5148 = local_unnamed_addr constant i32 -10456
@global_var_50e7 = local_unnamed_addr constant i32 239150094
@global_var_5097 = constant i32 604921120
@global_var_5047 = local_unnamed_addr constant i32 673792
@global_var_4fc7 = constant i32 25169473
@global_var_4f46 = constant i32 1157792528
@global_var_4e67 = local_unnamed_addr constant i32 1109921352
@global_var_4e45 = local_unnamed_addr constant i32 -2096855291
@global_var_4d57 = local_unnamed_addr constant i32 269370120
@global_var_4d34 = constant i32 202278914
@global_var_1b6 = local_unnamed_addr constant [17 x i8] c"ib/ld-linux.so.2\00"
@global_var_3b6 = global i32 1179648
@global_var_4c47 = local_unnamed_addr constant i32 411648
@global_var_4c16 = constant i32 -755499008
@global_var_3e8 = global i32 18
@global_var_7d0 = constant [4 x i8] c"cmp\00"
@global_var_4abb = constant i32 5120
@global_var_4a64 = constant i32 59117582
@global_var_48d8 = local_unnamed_addr constant i32 239151118
@global_var_48a6 = constant i32 269371424
@global_var_4836 = constant i32 1142427210
@global_var_4784 = constant i32 -12500
@global_var_46a4 = constant i32 135151872
@global_var_45c5 = constant i32 201326608
@global_var_4554 = constant [3 x i8] c"`\0C\00"
@global_var_4457 = local_unnamed_addr constant i32 -2913280
@global_var_4425 = constant i32 1543503875
@global_var_43a8 = constant [3 x i8] c"==\00"
@global_var_4346 = constant i32 983276774
@global_var_4297 = local_unnamed_addr constant [6 x i8] c" 42)\0A\00"
@global_var_4279 = constant i32 874527387
@global_var_422b = constant i32 1498611722
@global_var_4204 = constant i32 -425747226
@global_var_40f7 = local_unnamed_addr constant [7 x i8] c": -1)\0A\00"
@global_var_1f4 = global i32 1
@global_var_40c8 = local_unnamed_addr constant i32 827075906
@global_var_4064 = constant [16 x i8] c"nbench_test.tmp\00"
@global_var_1137 = local_unnamed_addr constant i32 120
@0 = external global i32

define i32 @_init() local_unnamed_addr {
dec_label_pc_1000:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !0
  %3 = call i32 @frame_dummy(), !insn.addr !1
  %4 = call i32 @__do_global_ctors_aux(), !insn.addr !2
  ret i32 %4, !insn.addr !3
}

define i32 @function_1040(i32 %fd, i32 %level, i32 %optname, i32* %optval, i32 %optlen) local_unnamed_addr {
dec_label_pc_1040:
  %0 = call i32 @setsockopt(i32 %fd, i32 %level, i32 %optname, i32* %optval, i32 %optlen), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i32 @function_1050(i32* %mutex) local_unnamed_addr {
dec_label_pc_1050:
  %0 = call i32 @pthread_mutex_unlock(i32* %mutex), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define i32 @function_1060(i32 %sig) local_unnamed_addr {
dec_label_pc_1060:
  %0 = call i32 @raise(i32 %sig), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i8* @function_1070(i8* %haystack, i8* %needle) local_unnamed_addr {
dec_label_pc_1070:
  %0 = call i8* @strstr(i8* %haystack, i8* %needle), !insn.addr !7
  ret i8* %0, !insn.addr !7
}

define i32 @function_1080(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_1080:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i32 @function_1090(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_1090:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @function_10a0(i32 %fd, i32* %buf, i32 %nbytes) local_unnamed_addr {
dec_label_pc_10a0:
  %0 = call i32 @read(i32 %fd, i32* %buf, i32 %nbytes), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i32 @function_10b0(i8* %format, ...) local_unnamed_addr {
dec_label_pc_10b0:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define void @function_10c0(i32 %status) local_unnamed_addr {
dec_label_pc_10c0:
  call void @_exit(i32 %status), !insn.addr !12
  ret void, !insn.addr !12
}

define void @function_10d0(i32* %ptr) local_unnamed_addr {
dec_label_pc_10d0:
  call void @free(i32* %ptr), !insn.addr !13
  ret void, !insn.addr !13
}

define i32* @function_10e0(i32* %dest, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_10e0:
  %0 = call i32* @memcpy(i32* %dest, i32* %src, i32 %n), !insn.addr !14
  ret i32* %0, !insn.addr !14
}

define i32 @function_10f0(i32 %key, i32 %size, i32 %shmflg) local_unnamed_addr {
dec_label_pc_10f0:
  %0 = call i32 @shmget(i32 %key, i32 %size, i32 %shmflg), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define i32 @function_1100(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_1100:
  %0 = call i32 @fclose(%_IO_FILE* %stream), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i32 @function_1110(i32* %cond, i32* %mutex) local_unnamed_addr {
dec_label_pc_1110:
  %0 = call i32 @pthread_cond_wait(i32* %cond, i32* %mutex), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define void (i32)* @function_1120(i32 %sig, void (i32)* %handler) local_unnamed_addr {
dec_label_pc_1120:
  %0 = call void (i32)* @signal(i32 %sig, void (i32)* %handler), !insn.addr !18
  ret void (i32)* %0, !insn.addr !18
}

define i32 @function_1130(i32* %s1, i32* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_1130:
  %0 = call i32 @memcmp(i32* %s1, i32* %s2, i32 %n), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @function_1140(i32 %seconds) local_unnamed_addr {
dec_label_pc_1140:
  %0 = call i32 @sleep(i32 %seconds), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i32 @function_1150(i32 %seconds) local_unnamed_addr {
dec_label_pc_1150:
  %0 = call i32 @alarm(i32 %seconds), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define void @function_1160(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_1160:
  call void @rewind(%_IO_FILE* %stream), !insn.addr !22
  ret void, !insn.addr !22
}

define i32 @function_1170(i32 %stat_loc) local_unnamed_addr {
dec_label_pc_1170:
  %0 = call i32 @wait(i32 %stat_loc), !insn.addr !23
  ret i32 %0, !insn.addr !23
}

define i32* @function_1180(i32 %shmid, i32* %shmaddr, i32 %shmflg) local_unnamed_addr {
dec_label_pc_1180:
  %0 = call i32* @shmat(i32 %shmid, i32* %shmaddr, i32 %shmflg), !insn.addr !24
  ret i32* %0, !insn.addr !24
}

define i32 @function_1190(i32* %mutex) local_unnamed_addr {
dec_label_pc_1190:
  %0 = call i32 @pthread_mutex_lock(i32* %mutex), !insn.addr !25
  ret i32 %0, !insn.addr !25
}

define i32 @function_11a0(i8* %name) local_unnamed_addr {
dec_label_pc_11a0:
  %0 = call i32 @unlink(i8* %name), !insn.addr !26
  ret i32 %0, !insn.addr !26
}

define i32 @function_11b0(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_11b0:
  %0 = call i32 @fwrite(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !27
  ret i32 %0, !insn.addr !27
}

define i32 @function_11c0(i32 %pid, i32* %stat_loc, i32 %options) local_unnamed_addr {
dec_label_pc_11c0:
  %0 = call i32 @waitpid(i32 %pid, i32* %stat_loc, i32 %options), !insn.addr !28
  ret i32 %0, !insn.addr !28
}

define i32 @function_11d0(i32 %useconds) local_unnamed_addr {
dec_label_pc_11d0:
  %0 = call i32 @usleep(i32 %useconds), !insn.addr !29
  ret i32 %0, !insn.addr !29
}

define i32 @function_11e0(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_11e0:
  %0 = call i32 @fread(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream), !insn.addr !30
  ret i32 %0, !insn.addr !30
}

define i8* @function_11f0(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_11f0:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !31
  ret i8* %0, !insn.addr !31
}

define i32 @function_1200(i32 %shmid, i32 %cmd, %shmid_ds* %buf) local_unnamed_addr {
dec_label_pc_1200:
  %0 = call i32 @shmctl(i32 %shmid, i32 %cmd, %shmid_ds* %buf), !insn.addr !32
  ret i32 %0, !insn.addr !32
}

define i32 @function_1210(i32* %cond) local_unnamed_addr {
dec_label_pc_1210:
  %0 = call i32 @pthread_cond_signal(i32* %cond), !insn.addr !33
  ret i32 %0, !insn.addr !33
}

define i32* @function_1220(i32 %size) local_unnamed_addr {
dec_label_pc_1220:
  %0 = call i32* @malloc(i32 %size), !insn.addr !34
  ret i32* %0, !insn.addr !34
}

define i32 @function_1230(i8* %s) local_unnamed_addr {
dec_label_pc_1230:
  %0 = call i32 @puts(i8* %s), !insn.addr !35
  ret i32 %0, !insn.addr !35
}

define i32 @function_1240(i8* %file, %stat* %buf) local_unnamed_addr {
dec_label_pc_1240:
  %0 = call i32 @stat(i8* %file, %stat* %buf), !insn.addr !36
  ret i32 %0, !insn.addr !36
}

define i32 @function_1250(i8* %file, i32 %oflag, ...) local_unnamed_addr {
dec_label_pc_1250:
  %0 = call i32 (i8*, i32, ...) @open(i8* %file, i32 %oflag), !insn.addr !37
  ret i32 %0, !insn.addr !37
}

define i8* @function_1260(i8* %s, i32 %c) local_unnamed_addr {
dec_label_pc_1260:
  %0 = call i8* @strchr(i8* %s, i32 %c), !insn.addr !38
  ret i8* %0, !insn.addr !38
}

define i32 @function_1270(i8* %s) local_unnamed_addr {
dec_label_pc_1270:
  %0 = call i32 @strlen(i8* %s), !insn.addr !39
  ret i32 %0, !insn.addr !39
}

define i32 @function_1280(i32* %s1, i32* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_1280:
  %0 = call i32 @bcmp(i32* %s1, i32* %s2, i32 %n), !insn.addr !40
  ret i32 %0, !insn.addr !40
}

define i32 @function_1290(i32 %fd, i32* %buf, i32 %n) local_unnamed_addr {
dec_label_pc_1290:
  %0 = call i32 @write(i32 %fd, i32* %buf, i32 %n), !insn.addr !41
  ret i32 %0, !insn.addr !41
}

define i32 @function_12a0(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_12a0:
  %0 = call i32 @bind(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !42
  ret i32 %0, !insn.addr !42
}

define i32 @function_12b0(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_12b0:
  %0 = call i32 (i8*, i8*, ...) @sscanf(i8* %s, i8* %format), !insn.addr !43
  ret i32 %0, !insn.addr !43
}

define %_IO_FILE* @function_12c0(i8* %filename, i8* %modes) local_unnamed_addr {
dec_label_pc_12c0:
  %0 = call %_IO_FILE* @fopen(i8* %filename, i8* %modes), !insn.addr !44
  ret %_IO_FILE* %0, !insn.addr !44
}

define i32* @function_12d0(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_12d0:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !45
  ret i32* %0, !insn.addr !45
}

define i32 @function_12e0(i8* %s, i32 %maxlen, i8* %format, ...) local_unnamed_addr {
dec_label_pc_12e0:
  %0 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %s, i32 %maxlen, i8* %format), !insn.addr !46
  ret i32 %0, !insn.addr !46
}

define i32* @function_12f0() local_unnamed_addr {
dec_label_pc_12f0:
  %0 = call i32* @__errno_location(), !insn.addr !47
  ret i32* %0, !insn.addr !47
}

define i8* @function_1300(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1300:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !48
  ret i8* %0, !insn.addr !48
}

define i32 @function_1310(i32 %sysno, ...) local_unnamed_addr {
dec_label_pc_1310:
  %0 = call i32 (i32, ...) @syscall(i32 %sysno), !insn.addr !49
  ret i32 %0, !insn.addr !49
}

define i32 @function_1320(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_1320:
  %0 = call i32 @fileno(%_IO_FILE* %stream), !insn.addr !50
  ret i32 %0, !insn.addr !50
}

define i32 @function_1330(i8* %path, i8* %arg, ...) local_unnamed_addr {
dec_label_pc_1330:
  %0 = call i32 (i8*, i8*, ...) @execl(i8* %path, i8* %arg), !insn.addr !51
  ret i32 %0, !insn.addr !51
}

define i32 @function_1340([2 x i32] %pipedes) local_unnamed_addr {
dec_label_pc_1340:
  %0 = call i32 @pipe([2 x i32] %pipedes), !insn.addr !52
  ret i32 %0, !insn.addr !52
}

define i32 @function_1350(i32* %shmaddr) local_unnamed_addr {
dec_label_pc_1350:
  %0 = call i32 @shmdt(i32* %shmaddr), !insn.addr !53
  ret i32 %0, !insn.addr !53
}

define i32 @function_1360(i32* %newthread, i32* %attr, i32* (i32*)* %start_routine, i32* %arg) local_unnamed_addr {
dec_label_pc_1360:
  %0 = call i32 @pthread_create(i32* %newthread, i32* %attr, i32* (i32*)* %start_routine, i32* %arg), !insn.addr !54
  ret i32 %0, !insn.addr !54
}

define i32 @function_1370() local_unnamed_addr {
dec_label_pc_1370:
  %0 = call i32 @fork(), !insn.addr !55
  ret i32 %0, !insn.addr !55
}

define i32 @function_1380(i32 %fd, i32 %n) local_unnamed_addr {
dec_label_pc_1380:
  %0 = call i32 @listen(i32 %fd, i32 %n), !insn.addr !56
  ret i32 %0, !insn.addr !56
}

define i32 @function_1390(i8* %pathname, i32 %proj_id) local_unnamed_addr {
dec_label_pc_1390:
  %0 = call i32 @ftok(i8* %pathname, i32 %proj_id), !insn.addr !57
  ret i32 %0, !insn.addr !57
}

define i32 @function_13a0(i32 %domain, i32 %type, i32 %protocol) local_unnamed_addr {
dec_label_pc_13a0:
  %0 = call i32 @socket(i32 %domain, i32 %type, i32 %protocol), !insn.addr !58
  ret i32 %0, !insn.addr !58
}

define i32 @function_13b0(i32 %th, i32** %thread_return) local_unnamed_addr {
dec_label_pc_13b0:
  %0 = call i32 @pthread_join(i32 %th, i32** %thread_return), !insn.addr !59
  ret i32 %0, !insn.addr !59
}

define i32 @function_13c0(i32 %th) local_unnamed_addr {
dec_label_pc_13c0:
  %0 = call i32 @pthread_cancel(i32 %th), !insn.addr !60
  ret i32 %0, !insn.addr !60
}

define i32 @function_13d0(i32 %fd) local_unnamed_addr {
dec_label_pc_13d0:
  %0 = call i32 @close(i32 %fd), !insn.addr !61
  ret i32 %0, !insn.addr !61
}

define i32 @function_13e0() local_unnamed_addr {
dec_label_pc_13e0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !62
}

define i32 @_start(i32 %arg1) local_unnamed_addr {
dec_label_pc_13f0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_4 = alloca i32, align 4
  %3 = call i32 @function_141c(i32 %2), !insn.addr !63
  %4 = bitcast i32* %stack_var_4 to i8**
  %5 = add i32 %1, 23540, !insn.addr !64
  %6 = inttoptr i32 %5 to i32*, !insn.addr !64
  %7 = load i32, i32* %6, align 4, !insn.addr !64
  %8 = call i32 @__libc_start_main(i32 %7, i32 %arg1, i8** nonnull %4, void ()* null, void ()* null, void ()* bitcast (i32* @0 to void ()*)), !insn.addr !65
  %9 = call i32 @__asm_hlt(), !insn.addr !66
  unreachable, !insn.addr !66

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @function_141c(i32 %arg1) local_unnamed_addr {
dec_label_pc_141c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !67
}

define i32 @__x86.get_pc_thunk.bx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1420:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !68
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1430:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !69
  %3 = add i32 %1, 23751, !insn.addr !70
  ret i32 %3, !insn.addr !71
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1470:
  %0 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !72
  ret i32 0, !insn.addr !73
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_14c0:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !74
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.di(i32 %1), !insn.addr !75
  %3 = add i32 %1, 23599, !insn.addr !76
  %4 = inttoptr i32 %3 to i8*, !insn.addr !76
  %5 = load i8, i8* %4, align 1, !insn.addr !76
  %6 = icmp eq i8 %5, 0, !insn.addr !76
  %7 = icmp eq i1 %6, false, !insn.addr !77
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !77
  br i1 %7, label %dec_label_pc_1542, label %dec_label_pc_14e1, !insn.addr !77

dec_label_pc_14e1:                                ; preds = %dec_label_pc_14c0
  %8 = add i32 %1, 23331, !insn.addr !78
  %9 = inttoptr i32 %8 to i32*, !insn.addr !78
  %10 = load i32, i32* %9, align 4, !insn.addr !78
  %11 = icmp eq i32 %10, 0, !insn.addr !79
  br i1 %11, label %dec_label_pc_14fe, label %dec_label_pc_14eb, !insn.addr !80

dec_label_pc_14eb:                                ; preds = %dec_label_pc_14e1
  %12 = call i32 @function_13e0(), !insn.addr !81
  br label %dec_label_pc_14fe, !insn.addr !82

dec_label_pc_14fe:                                ; preds = %dec_label_pc_14eb, %dec_label_pc_14e1
  %13 = call i32 @deregister_tm_clones(), !insn.addr !83
  store i8 1, i8* %4, align 1, !insn.addr !84
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !84
  br label %dec_label_pc_1542, !insn.addr !84

dec_label_pc_1542:                                ; preds = %dec_label_pc_14fe, %dec_label_pc_14c0
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !85

; uselistorder directives
  uselistorder i32 %1, { 2, 0, 1 }
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_1550:
  %0 = call i32 @register_tm_clones(), !insn.addr !86
  ret i32 %0, !insn.addr !86
}

define i32 @__x86.get_pc_thunk.dx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1559:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !87
}

define i32 @__x86.get_pc_thunk.di(i32 %arg1) local_unnamed_addr {
dec_label_pc_155d:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !88
}

define i32 @param_strcpy(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1570:
  %0 = inttoptr i32 %arg2 to i8*, !insn.addr !89
  %1 = inttoptr i32 %arg3 to i8*, !insn.addr !89
  %2 = call i8* @strcpy(i8* %0, i8* %1), !insn.addr !89
  %3 = call i32 @strlen(i8* %0), !insn.addr !90
  ret i32 %3, !insn.addr !91
}

define i32 @call_strcpy(i32 %arg1) local_unnamed_addr {
dec_label_pc_15b0:
  %stack_var_-32 = alloca i32, align 4
  store i32 1819043144, i32* %stack_var_-32, align 4, !insn.addr !92
  %0 = bitcast i32* %stack_var_-32 to i8*
  %1 = call i32 @strlen(i8* nonnull %0), !insn.addr !93
  ret i32 %1, !insn.addr !94
}

define i32 @param_strcmp(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_15f0:
  %0 = inttoptr i32 %arg2 to i8*, !insn.addr !95
  %1 = inttoptr i32 %arg3 to i8*, !insn.addr !95
  %2 = call i32 @strcmp(i8* %0, i8* %1), !insn.addr !95
  %3 = icmp eq i32 %2, 0, !insn.addr !96
  %4 = icmp eq i1 %3, false, !insn.addr !97
  %5 = sext i1 %4 to i32, !insn.addr !98
  %6 = icmp slt i32 %2, 1
  %7 = select i1 %6, i32 %5, i32 1, !insn.addr !99
  ret i32 %7, !insn.addr !100
}

define i32 @call_strcmp() local_unnamed_addr {
dec_label_pc_1630:
  ret i32 0, !insn.addr !101
}

define i32 @param_strlen(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1640:
  %0 = inttoptr i32 %arg2 to i8*, !insn.addr !102
  %1 = call i32 @strlen(i8* %0), !insn.addr !102
  ret i32 %1, !insn.addr !103
}

define i32 @call_strlen() local_unnamed_addr {
dec_label_pc_1670:
  ret i32 12, !insn.addr !104
}

define i32 @param_memcpy(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1680:
  %0 = inttoptr i32 %arg2 to i32*, !insn.addr !105
  %1 = inttoptr i32 %arg3 to i32*, !insn.addr !105
  %2 = call i32* @memcpy(i32* %0, i32* %1, i32 %arg4), !insn.addr !105
  ret i32 %arg4, !insn.addr !106

; uselistorder directives
  uselistorder i32 %arg4, { 1, 0 }
}

define i32 @call_memcpy() local_unnamed_addr {
dec_label_pc_16b0:
  ret i32 90, !insn.addr !107
}

define i32 @param_memcmp(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_16c0:
  %0 = inttoptr i32 %arg2 to i32*, !insn.addr !108
  %1 = inttoptr i32 %arg3 to i32*, !insn.addr !108
  %2 = call i32 @memcmp(i32* %0, i32* %1, i32 %arg4), !insn.addr !108
  %3 = icmp eq i32 %2, 0, !insn.addr !109
  %4 = icmp eq i1 %3, false, !insn.addr !110
  %5 = sext i1 %4 to i32, !insn.addr !111
  %6 = icmp slt i32 %2, 1
  %7 = select i1 %6, i32 %5, i32 1, !insn.addr !112
  ret i32 %7, !insn.addr !113
}

define i32 @call_memcmp(i32 %arg1) local_unnamed_addr {
dec_label_pc_1700:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 11460, !insn.addr !114
  %3 = add i32 %1, 11472, !insn.addr !115
  %4 = inttoptr i32 %3 to i32*, !insn.addr !116
  %5 = inttoptr i32 %2 to i32*, !insn.addr !116
  %6 = call i32 @memcmp(i32* %4, i32* %5, i32 12), !insn.addr !116
  %7 = call i32 @memcmp(i32* %4, i32* %4, i32 12), !insn.addr !117
  %8 = icmp eq i32 %7, 0, !insn.addr !118
  %9 = icmp eq i1 %8, false, !insn.addr !119
  %10 = sext i1 %9 to i32, !insn.addr !120
  %11 = icmp slt i32 %7, 0, !insn.addr !121
  %12 = icmp eq i1 %11, false, !insn.addr !122
  %13 = icmp eq i1 %12, %9, !insn.addr !122
  %14 = select i1 %13, i32 1, i32 %10, !insn.addr !122
  %15 = icmp eq i32 %6, 0, !insn.addr !123
  %16 = icmp eq i1 %15, false, !insn.addr !124
  %17 = sext i1 %16 to i32, !insn.addr !125
  %18 = icmp slt i32 %6, 0, !insn.addr !126
  %19 = icmp eq i1 %18, false, !insn.addr !127
  %20 = icmp eq i1 %19, %16, !insn.addr !127
  %21 = select i1 %20, i32 1, i32 %17, !insn.addr !127
  %22 = add nsw i32 %14, %21, !insn.addr !128
  ret i32 %22, !insn.addr !129

; uselistorder directives
  uselistorder i32 %7, { 1, 0 }
  uselistorder i32 %6, { 1, 0 }
  uselistorder i32 %1, { 1, 0 }
}

define i32 @param_printf(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1770:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 10392, !insn.addr !130
  %3 = inttoptr i32 %2 to i8*, !insn.addr !131
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !132
  ret i32 %4, !insn.addr !133
}

define i32 @call_printf(i32 %arg1) local_unnamed_addr {
dec_label_pc_17a0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 10344, !insn.addr !134
  %3 = inttoptr i32 %2 to i8*, !insn.addr !135
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !136
  ret i32 %4, !insn.addr !137
}

define i32 @param_scanf(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_17d0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = add i32 %3, 10322, !insn.addr !138
  %5 = inttoptr i32 %4 to i8*, !insn.addr !139
  %6 = inttoptr i32 %arg2 to i8*, !insn.addr !140
  %7 = call i32 (i8*, i8*, ...) @sscanf(i8* %6, i8* %5), !insn.addr !140
  %8 = add i32 %2, %1, !insn.addr !141
  %9 = icmp eq i32 %7, 2, !insn.addr !142
  %10 = select i1 %9, i32 %8, i32 -1, !insn.addr !143
  ret i32 %10, !insn.addr !144

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
}

define i32 @call_scanf(i32 %arg1) local_unnamed_addr {
dec_label_pc_1820:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = add i32 %3, 10241, !insn.addr !145
  %5 = add i32 %3, 10247, !insn.addr !146
  %6 = inttoptr i32 %4 to i8*, !insn.addr !147
  %7 = inttoptr i32 %5 to i8*, !insn.addr !148
  %8 = call i32 (i8*, i8*, ...) @sscanf(i8* %7, i8* %6), !insn.addr !149
  %9 = add i32 %2, %1, !insn.addr !150
  %10 = icmp eq i32 %8, 2, !insn.addr !151
  %11 = select i1 %10, i32 %9, i32 -1, !insn.addr !152
  ret i32 %11, !insn.addr !153

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
}

define i32 @param_fopen_fclose(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1870:
  %0 = alloca i32
  %edi.0.reg2mem = alloca i32, !insn.addr !154
  %1 = load i32, i32* %0
  %2 = add i32 %1, 10174, !insn.addr !155
  %3 = inttoptr i32 %arg2 to i8*, !insn.addr !156
  %4 = inttoptr i32 %2 to i8*, !insn.addr !156
  %5 = call %_IO_FILE* @fopen(i8* %3, i8* %4), !insn.addr !156
  %6 = icmp eq %_IO_FILE* %5, null, !insn.addr !157
  store i32 -1, i32* %edi.0.reg2mem, !insn.addr !158
  br i1 %6, label %dec_label_pc_18b7, label %dec_label_pc_189c, !insn.addr !158

dec_label_pc_189c:                                ; preds = %dec_label_pc_1870
  %7 = call i32 @fileno(%_IO_FILE* nonnull %5), !insn.addr !159
  %8 = call i32 @fclose(%_IO_FILE* nonnull %5), !insn.addr !160
  store i32 %7, i32* %edi.0.reg2mem, !insn.addr !161
  br label %dec_label_pc_18b7, !insn.addr !161

dec_label_pc_18b7:                                ; preds = %dec_label_pc_1870, %dec_label_pc_189c
  %edi.0.reload = load i32, i32* %edi.0.reg2mem
  ret i32 %edi.0.reload, !insn.addr !162

; uselistorder directives
  uselistorder i32* %edi.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_18b7, { 1, 0 }
}

define i32 @call_fopen_fclose(i32 %arg1) local_unnamed_addr {
dec_label_pc_18c0:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !163
  %1 = load i32, i32* %0
  %2 = add i32 %1, 10094, !insn.addr !164
  %3 = add i32 %1, 10096, !insn.addr !165
  %4 = inttoptr i32 %3 to i8*
  %5 = inttoptr i32 %2 to i8*, !insn.addr !166
  %6 = call %_IO_FILE* @fopen(i8* %4, i8* %5), !insn.addr !166
  %7 = icmp eq %_IO_FILE* %6, null, !insn.addr !167
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !168
  br i1 %7, label %dec_label_pc_190f, label %dec_label_pc_18ee, !insn.addr !168

dec_label_pc_18ee:                                ; preds = %dec_label_pc_18c0
  %8 = call i32 @fileno(%_IO_FILE* nonnull %6), !insn.addr !169
  %9 = call i32 @fclose(%_IO_FILE* nonnull %6), !insn.addr !170
  %10 = ashr i32 %8, 31, !insn.addr !171
  %11 = or i32 %10, 42, !insn.addr !172
  store i32 %11, i32* %storemerge.reg2mem, !insn.addr !173
  br label %dec_label_pc_190f, !insn.addr !173

dec_label_pc_190f:                                ; preds = %dec_label_pc_18c0, %dec_label_pc_18ee
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !174

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_190f, { 1, 0 }
}

define i32 @param_fread_fwrite(i32 %arg1) local_unnamed_addr {
dec_label_pc_1920:
  %0 = alloca %_IO_FILE*
  %eax.0.reg2mem = alloca i32, !insn.addr !175
  %stack_var_-44 = alloca i32, align 4
  %stack_var_-48 = alloca i8*, align 4
  %stack_var_-56 = alloca i32, align 4
  %1 = load %_IO_FILE*, %_IO_FILE** %0
  %2 = ptrtoint %_IO_FILE* %1 to i32, !insn.addr !176
  %3 = add i32 %2, 10030, !insn.addr !177
  %4 = inttoptr i32 %3 to i8*, !insn.addr !178
  %5 = inttoptr i32 %arg1 to i8*, !insn.addr !179
  %6 = call %_IO_FILE* @fopen(i8* %5, i8* %4), !insn.addr !179
  %7 = icmp eq %_IO_FILE* %6, null, !insn.addr !180
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !181
  br i1 %7, label %dec_label_pc_19f6, label %dec_label_pc_1951, !insn.addr !181

dec_label_pc_1951:                                ; preds = %dec_label_pc_1920
  %8 = add i32 %2, 10011, !insn.addr !182
  %9 = inttoptr i32 %8 to i32*, !insn.addr !183
  %10 = call i32 @fwrite(i32* %9, i32 1, i32 18, %_IO_FILE* nonnull %6), !insn.addr !183
  %11 = icmp eq i32 %10, 18, !insn.addr !184
  %12 = icmp eq i1 %11, false, !insn.addr !185
  br i1 %12, label %dec_label_pc_19e5, label %dec_label_pc_196c, !insn.addr !185

dec_label_pc_196c:                                ; preds = %dec_label_pc_1951
  %13 = inttoptr i32 %8 to i8*, !insn.addr !186
  store i8* %13, i8** %stack_var_-48, align 4, !insn.addr !186
  call void @rewind(%_IO_FILE* nonnull %6), !insn.addr !187
  %14 = call i32 @fread(i32* nonnull %stack_var_-44, i32 1, i32 %10, %_IO_FILE* nonnull %6), !insn.addr !188
  %15 = ptrtoint i32* %stack_var_-56 to i32, !insn.addr !189
  %16 = add i32 %15, 12, !insn.addr !190
  %17 = add i32 %16, %14, !insn.addr !190
  %18 = inttoptr i32 %17 to i8*, !insn.addr !190
  store i8 0, i8* %18, align 1, !insn.addr !190
  %19 = call i32 @fclose(%_IO_FILE* nonnull %6), !insn.addr !191
  %20 = call i32 @unlink(i8* %5), !insn.addr !192
  %21 = icmp eq i32 %14, %10, !insn.addr !193
  %22 = icmp eq i1 %21, false, !insn.addr !194
  store i32 -3, i32* %eax.0.reg2mem, !insn.addr !194
  br i1 %22, label %dec_label_pc_19f6, label %dec_label_pc_19b7, !insn.addr !194

dec_label_pc_19b7:                                ; preds = %dec_label_pc_196c
  %23 = load i8*, i8** %stack_var_-48, align 4
  %24 = bitcast i8* %23 to i32*
  %25 = call i32 @bcmp(i32* nonnull %stack_var_-44, i32* %24, i32 19), !insn.addr !195
  %26 = icmp eq i32 %25, 0, !insn.addr !196
  %27 = select i1 %26, i32 42, i32 -3, !insn.addr !197
  store i32 %27, i32* %eax.0.reg2mem, !insn.addr !198
  br label %dec_label_pc_19f6, !insn.addr !198

dec_label_pc_19e5:                                ; preds = %dec_label_pc_1951
  %28 = call i32 @fclose(%_IO_FILE* nonnull %6), !insn.addr !199
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !200
  br label %dec_label_pc_19f6, !insn.addr !200

dec_label_pc_19f6:                                ; preds = %dec_label_pc_1920, %dec_label_pc_19e5, %dec_label_pc_19b7, %dec_label_pc_196c
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !201

; uselistorder directives
  uselistorder i32 %10, { 1, 0, 2 }
  uselistorder i32* %eax.0.reg2mem, { 0, 4, 2, 3, 1 }
  uselistorder label %dec_label_pc_19f6, { 1, 2, 3, 0 }
}

define i32 @call_fread_fwrite(i32 %arg1) local_unnamed_addr {
dec_label_pc_1a00:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_55f7 to i32), i32 -12195), !insn.addr !202
  %3 = call i32 @param_fread_fwrite(i32 %2), !insn.addr !203
  ret i32 %3, !insn.addr !204
}

define i32 @param_malloc_free(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1a30:
  %esi.0.reg2mem = alloca i32, !insn.addr !205
  %edx.0.reg2mem = alloca i32, !insn.addr !205
  %ecx.0.reg2mem = alloca i32, !insn.addr !205
  %0 = mul i32 %arg2, 4, !insn.addr !206
  %1 = call i32* @malloc(i32 %0), !insn.addr !207
  %2 = icmp eq i32* %1, null, !insn.addr !208
  store i32 -1, i32* %esi.0.reg2mem, !insn.addr !209
  br i1 %2, label %dec_label_pc_1a82, label %dec_label_pc_1a56, !insn.addr !209

dec_label_pc_1a56:                                ; preds = %dec_label_pc_1a30
  %3 = ptrtoint i32* %1 to i32, !insn.addr !207
  %4 = icmp eq i32 %arg2, 0, !insn.addr !210
  store i32 0, i32* %ecx.0.reg2mem, !insn.addr !211
  store i32 0, i32* %edx.0.reg2mem, !insn.addr !211
  br i1 %4, label %dec_label_pc_1a6d, label %dec_label_pc_1a60, !insn.addr !211

dec_label_pc_1a60:                                ; preds = %dec_label_pc_1a56, %dec_label_pc_1a60
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %5 = mul i32 %edx.0.reload, 4, !insn.addr !212
  %6 = add i32 %5, %3, !insn.addr !212
  %7 = inttoptr i32 %6 to i32*, !insn.addr !212
  store i32 %ecx.0.reload, i32* %7, align 4, !insn.addr !212
  %8 = add i32 %edx.0.reload, 1, !insn.addr !213
  %9 = add i32 %ecx.0.reload, 10, !insn.addr !214
  %10 = icmp eq i32 %8, %arg2, !insn.addr !215
  %11 = icmp eq i1 %10, false, !insn.addr !216
  store i32 %9, i32* %ecx.0.reg2mem, !insn.addr !216
  store i32 %8, i32* %edx.0.reg2mem, !insn.addr !216
  br i1 %11, label %dec_label_pc_1a60, label %dec_label_pc_1a6d, !insn.addr !216

dec_label_pc_1a6d:                                ; preds = %dec_label_pc_1a60, %dec_label_pc_1a56
  %12 = add i32 %0, -4, !insn.addr !217
  %13 = add i32 %12, %3, !insn.addr !217
  %14 = inttoptr i32 %13 to i32*, !insn.addr !217
  %15 = load i32, i32* %14, align 4, !insn.addr !217
  %16 = load i32, i32* %1, align 4, !insn.addr !218
  %17 = add i32 %16, %15, !insn.addr !218
  call void @free(i32* nonnull %1), !insn.addr !219
  store i32 %17, i32* %esi.0.reg2mem, !insn.addr !220
  br label %dec_label_pc_1a82, !insn.addr !220

dec_label_pc_1a82:                                ; preds = %dec_label_pc_1a30, %dec_label_pc_1a6d
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  ret i32 %esi.0.reload, !insn.addr !221

; uselistorder directives
  uselistorder i32 %ecx.0.reload, { 1, 0 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32* %1, { 0, 1, 3, 2 }
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32* %ecx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %esi.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg2, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1a82, { 1, 0 }
  uselistorder label %dec_label_pc_1a60, { 1, 0 }
}

define i32 @call_malloc_free(i32 %arg1) local_unnamed_addr {
dec_label_pc_1a90:
  %esi.0.reg2mem = alloca i32, !insn.addr !222
  %edx.0.reg2mem = alloca i32, !insn.addr !222
  %ecx.0.reg2mem = alloca i32, !insn.addr !222
  %0 = call i32* @malloc(i32 40), !insn.addr !223
  %1 = ptrtoint i32* %0 to i32, !insn.addr !223
  %2 = icmp eq i32* %0, null, !insn.addr !224
  store i32 0, i32* %ecx.0.reg2mem, !insn.addr !225
  store i32 %1, i32* %edx.0.reg2mem, !insn.addr !225
  store i32 -1, i32* %esi.0.reg2mem, !insn.addr !225
  br i1 %2, label %dec_label_pc_1ae1, label %dec_label_pc_1ac0, !insn.addr !225

dec_label_pc_1ac0:                                ; preds = %dec_label_pc_1a90, %dec_label_pc_1ac0
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %3 = inttoptr i32 %edx.0.reload to i32*, !insn.addr !226
  store i32 %ecx.0.reload, i32* %3, align 4, !insn.addr !226
  %4 = add nuw nsw i32 %ecx.0.reload, 10, !insn.addr !227
  %5 = add i32 %edx.0.reload, 4, !insn.addr !228
  %6 = icmp eq i32 %ecx.0.reload, 90, !insn.addr !229
  %7 = icmp eq i1 %6, false, !insn.addr !230
  store i32 %4, i32* %ecx.0.reg2mem, !insn.addr !230
  store i32 %5, i32* %edx.0.reg2mem, !insn.addr !230
  br i1 %7, label %dec_label_pc_1ac0, label %dec_label_pc_1acd, !insn.addr !230

dec_label_pc_1acd:                                ; preds = %dec_label_pc_1ac0
  %8 = add i32 %1, 36, !insn.addr !231
  %9 = inttoptr i32 %8 to i32*, !insn.addr !231
  %10 = load i32, i32* %9, align 4, !insn.addr !231
  %11 = load i32, i32* %0, align 4, !insn.addr !232
  %12 = add i32 %11, %10, !insn.addr !232
  call void @free(i32* nonnull %0), !insn.addr !233
  store i32 %12, i32* %esi.0.reg2mem, !insn.addr !234
  br label %dec_label_pc_1ae1, !insn.addr !234

dec_label_pc_1ae1:                                ; preds = %dec_label_pc_1a90, %dec_label_pc_1acd
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  ret i32 %esi.0.reload, !insn.addr !235

; uselistorder directives
  uselistorder i32 %ecx.0.reload, { 1, 2, 0 }
  uselistorder i32 %edx.0.reload, { 1, 0 }
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32* %ecx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %esi.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1ae1, { 1, 0 }
  uselistorder label %dec_label_pc_1ac0, { 1, 0 }
}

define i32 @param_memset(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1af0:
  %eax.1.reg2mem = alloca i32, !insn.addr !236
  %ecx.0.reg2mem = alloca i32, !insn.addr !236
  %eax.0.reg2mem = alloca i32, !insn.addr !236
  %0 = inttoptr i32 %arg2 to i32*, !insn.addr !237
  %1 = call i32* @memset(i32* %0, i32 0, i32 %arg3), !insn.addr !237
  %2 = icmp eq i32 %arg3, 0, !insn.addr !238
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !239
  store i32 0, i32* %ecx.0.reg2mem, !insn.addr !239
  store i32 0, i32* %eax.1.reg2mem, !insn.addr !239
  br i1 %2, label %dec_label_pc_1b31, label %dec_label_pc_1b20, !insn.addr !239

dec_label_pc_1b20:                                ; preds = %dec_label_pc_1af0, %dec_label_pc_1b20
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %3 = add i32 %ecx.0.reload, %arg2, !insn.addr !240
  %4 = inttoptr i32 %3 to i8*, !insn.addr !240
  %5 = load i8, i8* %4, align 1, !insn.addr !240
  %6 = zext i8 %5 to i32, !insn.addr !240
  %7 = add i32 %eax.0.reload, %6, !insn.addr !241
  %8 = add i32 %ecx.0.reload, 1, !insn.addr !242
  %9 = icmp eq i32 %8, %arg3, !insn.addr !243
  %10 = icmp eq i1 %9, false, !insn.addr !244
  store i32 %7, i32* %eax.0.reg2mem, !insn.addr !244
  store i32 %8, i32* %ecx.0.reg2mem, !insn.addr !244
  store i32 %7, i32* %eax.1.reg2mem, !insn.addr !244
  br i1 %10, label %dec_label_pc_1b20, label %dec_label_pc_1b31, !insn.addr !244

dec_label_pc_1b31:                                ; preds = %dec_label_pc_1b20, %dec_label_pc_1af0
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !245

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %ecx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32 %arg3, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1b20, { 1, 0 }
}

define i32 @call_memset() local_unnamed_addr {
dec_label_pc_1b40:
  %eax.0.reg2mem = alloca i32, !insn.addr !246
  %stack_var_-40 = alloca i32, align 4
  %0 = ptrtoint i32* %stack_var_-40 to i32, !insn.addr !246
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !247
  br label %dec_label_pc_1b50, !insn.addr !247

dec_label_pc_1b50:                                ; preds = %dec_label_pc_1b50, %dec_label_pc_1b40
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %1 = mul i32 %eax.0.reload, 4, !insn.addr !248
  %2 = add i32 %1, %0, !insn.addr !248
  %3 = inttoptr i32 %2 to i32*, !insn.addr !248
  store i32 255, i32* %3, align 4, !insn.addr !248
  %4 = add nuw nsw i32 %eax.0.reload, 1, !insn.addr !249
  %exitcond = icmp eq i32 %4, 10
  store i32 %4, i32* %eax.0.reg2mem, !insn.addr !250
  br i1 %exitcond, label %dec_label_pc_1b5f, label %dec_label_pc_1b50, !insn.addr !250

dec_label_pc_1b5f:                                ; preds = %dec_label_pc_1b50
  ret i32 0, !insn.addr !251

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
}

define i32 @param_strchr_strstr(i32 %arg1, i32 %arg2, i8 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1b70:
  %0 = inttoptr i32 %arg2 to i8*, !insn.addr !252
  %1 = sext i8 %arg3 to i32, !insn.addr !252
  %2 = call i8* @strchr(i8* %0, i32 %1), !insn.addr !252
  %3 = ptrtoint i8* %2 to i32, !insn.addr !252
  %4 = sub i32 %3, %arg2, !insn.addr !253
  %5 = icmp eq i8* %2, null, !insn.addr !254
  %6 = select i1 %5, i32 -1, i32 %4, !insn.addr !255
  %sext = mul i32 %arg4, 16777216
  %7 = ashr exact i32 %sext, 24, !insn.addr !256
  %8 = inttoptr i32 %7 to i8*, !insn.addr !256
  %9 = call i8* @strstr(i8* %0, i8* %8), !insn.addr !256
  %10 = ptrtoint i8* %9 to i32, !insn.addr !256
  %11 = sub i32 %10, %arg2, !insn.addr !257
  %12 = icmp eq i8* %9, null, !insn.addr !258
  %13 = select i1 %12, i32 -1, i32 %11, !insn.addr !259
  %14 = add i32 %13, %6, !insn.addr !260
  ret i32 %14, !insn.addr !261

; uselistorder directives
  uselistorder i32 %arg2, { 2, 1, 0 }
}

define i32 @call_strchr_strstr() local_unnamed_addr {
dec_label_pc_1bd0:
  ret i32 15, !insn.addr !262
}

define i32 @test_standard_library_functions(i32 %arg1) local_unnamed_addr {
dec_label_pc_1be0:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !263
  %edx.0.reg2mem = alloca i32, !insn.addr !263
  %ecx.0.reg2mem = alloca i32, !insn.addr !263
  %stack_var_-52 = alloca i32, align 4
  %stack_var_-72 = alloca %_IO_FILE*, align 4
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5414 to i32), i32 -11412), !insn.addr !264
  %3 = inttoptr i32 %2 to %_IO_FILE*, !insn.addr !265
  store %_IO_FILE* %3, %_IO_FILE** %stack_var_-72, align 4, !insn.addr !265
  %4 = inttoptr i32 %2 to i8*
  %5 = call i32 @puts(i8* %4), !insn.addr !266
  store i32 1819043144, i32* %stack_var_-52, align 4, !insn.addr !267
  %6 = bitcast i32* %stack_var_-52 to %_IO_FILE*
  store %_IO_FILE* %6, %_IO_FILE** %stack_var_-72, align 4, !insn.addr !268
  %7 = bitcast i32* %stack_var_-52 to i8*
  %8 = call i32 @strlen(i8* nonnull %7), !insn.addr !269
  %9 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5414 to i32), i32 -12172), !insn.addr !270
  %10 = inttoptr i32 %9 to %_IO_FILE*, !insn.addr !271
  store %_IO_FILE* %10, %_IO_FILE** %stack_var_-72, align 4, !insn.addr !271
  %11 = inttoptr i32 %9 to i8*
  %12 = call i32 (i8*, ...) @printf(i8* %11), !insn.addr !272
  %13 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5414 to i32), i32 -12145), !insn.addr !273
  %14 = inttoptr i32 %13 to %_IO_FILE*, !insn.addr !274
  store %_IO_FILE* %14, %_IO_FILE** %stack_var_-72, align 4, !insn.addr !274
  %15 = inttoptr i32 %13 to i8*
  %16 = call i32 (i8*, ...) @printf(i8* %15), !insn.addr !275
  %17 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5414 to i32), i32 -12118), !insn.addr !276
  %18 = inttoptr i32 %17 to %_IO_FILE*, !insn.addr !277
  store %_IO_FILE* %18, %_IO_FILE** %stack_var_-72, align 4, !insn.addr !277
  %19 = inttoptr i32 %17 to i8*
  %20 = call i32 (i8*, ...) @printf(i8* %19), !insn.addr !278
  %21 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5414 to i32), i32 -12090), !insn.addr !279
  %22 = inttoptr i32 %21 to %_IO_FILE*, !insn.addr !280
  store %_IO_FILE* %22, %_IO_FILE** %stack_var_-72, align 4, !insn.addr !280
  %23 = inttoptr i32 %21 to i8*
  %24 = call i32 (i8*, ...) @printf(i8* %23), !insn.addr !281
  %25 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5414 to i32), i32 -11316), !insn.addr !282
  %26 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5414 to i32), i32 -11304), !insn.addr !283
  %27 = inttoptr i32 %26 to %_IO_FILE*, !insn.addr !284
  store %_IO_FILE* %27, %_IO_FILE** %stack_var_-72, align 4, !insn.addr !284
  %28 = getelementptr inbounds %_IO_FILE, %_IO_FILE* %27, i32 0, i32 0
  %29 = inttoptr i32 %25 to i32*, !insn.addr !285
  %30 = call i32 @memcmp(i32* %28, i32* %29, i32 12), !insn.addr !285
  store %_IO_FILE* %27, %_IO_FILE** %stack_var_-72, align 4, !insn.addr !286
  %31 = inttoptr i32 %26 to i32*, !insn.addr !287
  %32 = call i32 @memcmp(i32* %28, i32* %31, i32 12), !insn.addr !287
  %33 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5414 to i32), i32 -12062), !insn.addr !288
  %34 = inttoptr i32 %33 to %_IO_FILE*, !insn.addr !289
  store %_IO_FILE* %34, %_IO_FILE** %stack_var_-72, align 4, !insn.addr !289
  %35 = inttoptr i32 %33 to i8*
  %36 = call i32 (i8*, ...) @printf(i8* %35), !insn.addr !290
  %37 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5414 to i32), i32 -12271), !insn.addr !291
  %38 = inttoptr i32 %37 to %_IO_FILE*, !insn.addr !292
  store %_IO_FILE* %38, %_IO_FILE** %stack_var_-72, align 4, !insn.addr !292
  %39 = inttoptr i32 %37 to i8*
  %40 = call i32 (i8*, ...) @printf(i8* %39), !insn.addr !293
  %41 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5414 to i32), i32 -12034), !insn.addr !294
  %42 = inttoptr i32 %41 to %_IO_FILE*, !insn.addr !295
  store %_IO_FILE* %42, %_IO_FILE** %stack_var_-72, align 4, !insn.addr !295
  %43 = inttoptr i32 %41 to i8*
  %44 = call i32 (i8*, ...) @printf(i8* %43), !insn.addr !296
  %45 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5414 to i32), i32 -12245), !insn.addr !297
  %46 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5414 to i32), i32 -12239), !insn.addr !298
  %47 = inttoptr i32 %46 to %_IO_FILE*, !insn.addr !299
  store %_IO_FILE* %47, %_IO_FILE** %stack_var_-72, align 4, !insn.addr !299
  %48 = inttoptr i32 %46 to i8*
  %49 = inttoptr i32 %45 to i8*, !insn.addr !300
  %50 = call i32 (i8*, i8*, ...) @sscanf(i8* %48, i8* %49), !insn.addr !300
  %51 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5414 to i32), i32 -12006), !insn.addr !301
  %52 = inttoptr i32 %51 to %_IO_FILE*, !insn.addr !302
  store %_IO_FILE* %52, %_IO_FILE** %stack_var_-72, align 4, !insn.addr !302
  %53 = inttoptr i32 %51 to i8*
  %54 = call i32 (i8*, ...) @printf(i8* %53), !insn.addr !303
  %55 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5414 to i32), i32 -12231), !insn.addr !304
  %56 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5414 to i32), i32 -12229), !insn.addr !305
  %57 = inttoptr i32 %56 to %_IO_FILE*, !insn.addr !306
  store %_IO_FILE* %57, %_IO_FILE** %stack_var_-72, align 4, !insn.addr !306
  %58 = inttoptr i32 %56 to i8*
  %59 = inttoptr i32 %55 to i8*, !insn.addr !307
  %60 = call %_IO_FILE* @fopen(i8* %58, i8* %59), !insn.addr !307
  %61 = icmp eq %_IO_FILE* %60, null, !insn.addr !308
  br i1 %61, label %dec_label_pc_1d97, label %dec_label_pc_1d7d, !insn.addr !309

dec_label_pc_1d7d:                                ; preds = %dec_label_pc_1be0
  store %_IO_FILE* %60, %_IO_FILE** %stack_var_-72, align 4, !insn.addr !310
  %62 = call i32 @fileno(%_IO_FILE* nonnull %60), !insn.addr !311
  store %_IO_FILE* %60, %_IO_FILE** %stack_var_-72, align 4, !insn.addr !312
  %63 = call i32 @fclose(%_IO_FILE* nonnull %60), !insn.addr !313
  br label %dec_label_pc_1d97, !insn.addr !314

dec_label_pc_1d97:                                ; preds = %dec_label_pc_1d7d, %dec_label_pc_1be0
  %64 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5414 to i32), i32 -11977), !insn.addr !315
  %65 = inttoptr i32 %64 to %_IO_FILE*, !insn.addr !316
  store %_IO_FILE* %65, %_IO_FILE** %stack_var_-72, align 4, !insn.addr !316
  %66 = inttoptr i32 %64 to i8*
  %67 = call i32 (i8*, ...) @printf(i8* %66), !insn.addr !317
  %68 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5414 to i32), i32 -12195), !insn.addr !318
  %69 = inttoptr i32 %68 to %_IO_FILE*, !insn.addr !319
  store %_IO_FILE* %69, %_IO_FILE** %stack_var_-72, align 4, !insn.addr !319
  %70 = call i32 @param_fread_fwrite(i32 %68), !insn.addr !320
  %71 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5414 to i32), i32 -11949), !insn.addr !321
  %72 = inttoptr i32 %71 to %_IO_FILE*, !insn.addr !322
  store %_IO_FILE* %72, %_IO_FILE** %stack_var_-72, align 4, !insn.addr !322
  %73 = inttoptr i32 %71 to i8*
  %74 = call i32 (i8*, ...) @printf(i8* %73), !insn.addr !323
  store %_IO_FILE* inttoptr (i32 40 to %_IO_FILE*), %_IO_FILE** %stack_var_-72, align 4, !insn.addr !324
  %75 = call i32* @malloc(i32 40), !insn.addr !325
  %76 = icmp eq i32* %75, null, !insn.addr !326
  br i1 %76, label %dec_label_pc_1dfa, label %dec_label_pc_1dd9, !insn.addr !327

dec_label_pc_1dd9:                                ; preds = %dec_label_pc_1d97
  %77 = ptrtoint i32* %75 to i32, !insn.addr !325
  store i32 0, i32* %ecx.0.reg2mem, !insn.addr !328
  store i32 %77, i32* %edx.0.reg2mem, !insn.addr !328
  br label %dec_label_pc_1de0, !insn.addr !328

dec_label_pc_1de0:                                ; preds = %dec_label_pc_1de0, %dec_label_pc_1dd9
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %78 = inttoptr i32 %edx.0.reload to i32*, !insn.addr !329
  store i32 %ecx.0.reload, i32* %78, align 4, !insn.addr !329
  %79 = add nuw nsw i32 %ecx.0.reload, 10, !insn.addr !330
  %80 = add i32 %edx.0.reload, 4, !insn.addr !331
  %81 = icmp eq i32 %ecx.0.reload, 90, !insn.addr !332
  %82 = icmp eq i1 %81, false, !insn.addr !333
  store i32 %79, i32* %ecx.0.reg2mem, !insn.addr !333
  store i32 %80, i32* %edx.0.reg2mem, !insn.addr !333
  br i1 %82, label %dec_label_pc_1de0, label %dec_label_pc_1ded, !insn.addr !333

dec_label_pc_1ded:                                ; preds = %dec_label_pc_1de0
  %83 = bitcast i32* %75 to %_IO_FILE*, !insn.addr !334
  store %_IO_FILE* %83, %_IO_FILE** %stack_var_-72, align 4, !insn.addr !334
  call void @free(i32* nonnull %75), !insn.addr !335
  br label %dec_label_pc_1dfa, !insn.addr !335

dec_label_pc_1dfa:                                ; preds = %dec_label_pc_1ded, %dec_label_pc_1d97
  %84 = ptrtoint %_IO_FILE** %stack_var_-72 to i32, !insn.addr !336
  %85 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5414 to i32), i32 -11921), !insn.addr !337
  %86 = inttoptr i32 %85 to %_IO_FILE*, !insn.addr !338
  store %_IO_FILE* %86, %_IO_FILE** %stack_var_-72, align 4, !insn.addr !338
  %87 = inttoptr i32 %85 to i8*
  %88 = call i32 (i8*, ...) @printf(i8* %87), !insn.addr !339
  %89 = add i32 %84, 20, !insn.addr !340
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !341
  br label %dec_label_pc_1e10, !insn.addr !341

dec_label_pc_1e10:                                ; preds = %dec_label_pc_1e10, %dec_label_pc_1dfa
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %90 = mul i32 %eax.0.reload, 4, !insn.addr !340
  %91 = add i32 %89, %90, !insn.addr !340
  %92 = inttoptr i32 %91 to i32*, !insn.addr !340
  store i32 255, i32* %92, align 4, !insn.addr !340
  %93 = add nuw nsw i32 %eax.0.reload, 1, !insn.addr !342
  %exitcond = icmp eq i32 %93, 10
  store i32 %93, i32* %eax.0.reg2mem, !insn.addr !343
  br i1 %exitcond, label %dec_label_pc_1e20, label %dec_label_pc_1e10, !insn.addr !343

dec_label_pc_1e20:                                ; preds = %dec_label_pc_1e10
  %94 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5414 to i32), i32 -11893), !insn.addr !344
  %95 = inttoptr i32 %94 to %_IO_FILE*, !insn.addr !345
  store %_IO_FILE* %95, %_IO_FILE** %stack_var_-72, align 4, !insn.addr !345
  %96 = inttoptr i32 %94 to i8*
  %97 = call i32 (i8*, ...) @printf(i8* %96), !insn.addr !346
  %98 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5414 to i32), i32 -11866), !insn.addr !347
  %99 = inttoptr i32 %98 to %_IO_FILE*, !insn.addr !348
  store %_IO_FILE* %99, %_IO_FILE** %stack_var_-72, align 4, !insn.addr !348
  %100 = inttoptr i32 %98 to i8*
  %101 = call i32 (i8*, ...) @printf(i8* %100), !insn.addr !349
  ret i32 %101, !insn.addr !350

; uselistorder directives
  uselistorder i32 %ecx.0.reload, { 1, 2, 0 }
  uselistorder i32 %edx.0.reload, { 1, 0 }
  uselistorder i32* %75, { 0, 1, 3, 2 }
  uselistorder %_IO_FILE* %60, { 1, 0, 3, 2, 4 }
  uselistorder i32 %26, { 1, 0 }
  uselistorder i32 %1, { 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder %_IO_FILE** %stack_var_-72, { 24, 23, 22, 0, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 }
  uselistorder i32* %ecx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32 90, { 1, 2, 0 }
  uselistorder i32 (i32)* @param_fread_fwrite, { 1, 0 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 4, 3, 2, 1, 0, 5 }
  uselistorder i32 (%_IO_FILE*)* @fileno, { 2, 1, 0, 3 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i8*, i8*, ...)* @sscanf, { 2, 1, 0, 3 }
  uselistorder i32 (i32*, i32*, i32)* @memcmp, { 4, 3, 2, 1, 0, 5 }
}

define i32 @param_linux_syscall(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1e60:
  %esi.0.reg2mem = alloca i32, !insn.addr !351
  %0 = call i32 (i32, ...) @syscall(i32 5), !insn.addr !352
  %1 = icmp slt i32 %0, 0, !insn.addr !353
  br i1 %1, label %dec_label_pc_1e98, label %dec_label_pc_1e86, !insn.addr !354

dec_label_pc_1e86:                                ; preds = %dec_label_pc_1e60
  %2 = call i32 (i32, ...) @syscall(i32 6), !insn.addr !355
  store i32 %0, i32* %esi.0.reg2mem, !insn.addr !356
  br label %dec_label_pc_1ea1, !insn.addr !356

dec_label_pc_1e98:                                ; preds = %dec_label_pc_1e60
  %3 = call i32* @__errno_location(), !insn.addr !357
  %4 = load i32, i32* %3, align 4, !insn.addr !358
  %5 = sub i32 0, %4, !insn.addr !358
  store i32 %5, i32* %esi.0.reg2mem, !insn.addr !358
  br label %dec_label_pc_1ea1, !insn.addr !358

dec_label_pc_1ea1:                                ; preds = %dec_label_pc_1e98, %dec_label_pc_1e86
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  ret i32 %esi.0.reload, !insn.addr !359

; uselistorder directives
  uselistorder i32* %esi.0.reg2mem, { 0, 2, 1 }
}

define i32 @call_linux_syscall(i32 %arg1) local_unnamed_addr {
dec_label_pc_1eb0:
  %esi.0.reg2mem = alloca i32, !insn.addr !360
  %0 = call i32 (i32, ...) @syscall(i32 5), !insn.addr !361
  %1 = icmp slt i32 %0, 0, !insn.addr !362
  br i1 %1, label %dec_label_pc_1eeb, label %dec_label_pc_1ed9, !insn.addr !363

dec_label_pc_1ed9:                                ; preds = %dec_label_pc_1eb0
  %2 = call i32 (i32, ...) @syscall(i32 6), !insn.addr !364
  store i32 %0, i32* %esi.0.reg2mem, !insn.addr !365
  br label %dec_label_pc_1ef4, !insn.addr !365

dec_label_pc_1eeb:                                ; preds = %dec_label_pc_1eb0
  %3 = call i32* @__errno_location(), !insn.addr !366
  %4 = load i32, i32* %3, align 4, !insn.addr !367
  %5 = sub i32 0, %4, !insn.addr !367
  store i32 %5, i32* %esi.0.reg2mem, !insn.addr !367
  br label %dec_label_pc_1ef4, !insn.addr !367

dec_label_pc_1ef4:                                ; preds = %dec_label_pc_1eeb, %dec_label_pc_1ed9
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %6 = ashr i32 %esi.0.reload, 31, !insn.addr !368
  %7 = or i32 %6, 42, !insn.addr !369
  ret i32 %7, !insn.addr !370

; uselistorder directives
  uselistorder i32* %esi.0.reg2mem, { 0, 2, 1 }
}

define i32 @param_win32_api(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1f10:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-88 = alloca i32, align 4
  %2 = bitcast i32* %stack_var_-88 to %stat*
  %3 = inttoptr i32 %arg2 to i8*, !insn.addr !371
  %4 = call i32 @stat(i8* %3, %stat* nonnull %2), !insn.addr !371
  %5 = icmp eq i32 %1, 0, !insn.addr !372
  %6 = icmp slt i32 %1, 0, !insn.addr !372
  %7 = icmp eq i1 %6, false, !insn.addr !373
  %8 = icmp eq i1 %5, false, !insn.addr !373
  %9 = icmp eq i1 %7, %8, !insn.addr !373
  %10 = select i1 %9, i32 42, i32 -2, !insn.addr !373
  %11 = icmp slt i32 %4, 0, !insn.addr !374
  %12 = icmp eq i1 %11, false, !insn.addr !375
  %13 = select i1 %12, i32 %10, i32 -1, !insn.addr !375
  ret i32 %13, !insn.addr !376
}

define i32 @call_win32_api(i32 %arg1) local_unnamed_addr {
dec_label_pc_1f60:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-88 = alloca i32, align 4
  %2 = load i32, i32* %0
  %3 = add i32 %2, add (i32 ptrtoint (i32* @global_var_5097 to i32), i32 -12229), !insn.addr !377
  %4 = bitcast i32* %stack_var_-88 to %stat*
  %5 = inttoptr i32 %3 to i8*, !insn.addr !378
  %6 = call i32 @stat(i8* %5, %stat* nonnull %4), !insn.addr !379
  %7 = icmp eq i32 %1, 0, !insn.addr !380
  %8 = icmp slt i32 %1, 0, !insn.addr !380
  %9 = icmp eq i1 %8, false, !insn.addr !381
  %10 = icmp eq i1 %7, false, !insn.addr !381
  %11 = icmp eq i1 %9, %10, !insn.addr !381
  %12 = select i1 %11, i32 42, i32 -2, !insn.addr !381
  %13 = icmp slt i32 %6, 0, !insn.addr !382
  %14 = icmp eq i1 %13, false, !insn.addr !383
  %15 = select i1 %14, i32 %12, i32 -1, !insn.addr !383
  ret i32 %15, !insn.addr !384

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @param_fork_exec(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1fb0:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !385
  %1 = load i32, i32* %0
  %stack_var_-4 = alloca i8, align 1
  %2 = trunc i32 %1 to i8, !insn.addr !385
  store i8 %2, i8* %stack_var_-4, align 1, !insn.addr !385
  %3 = call i32 @fork(), !insn.addr !386
  %4 = icmp slt i32 %3, 0, !insn.addr !387
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !388
  br i1 %4, label %dec_label_pc_2001, label %dec_label_pc_1fc9, !insn.addr !388

dec_label_pc_1fc9:                                ; preds = %dec_label_pc_1fb0
  %5 = icmp eq i32 %3, 0, !insn.addr !387
  br i1 %5, label %dec_label_pc_2006, label %dec_label_pc_1fcb, !insn.addr !389

dec_label_pc_1fcb:                                ; preds = %dec_label_pc_1fc9
  %6 = bitcast i8* %stack_var_-4 to i32*, !insn.addr !390
  %7 = call i32 @waitpid(i32 %3, i32* nonnull %6, i32 0), !insn.addr !390
  %8 = icmp slt i32 %7, 0, !insn.addr !391
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !392
  br i1 %8, label %dec_label_pc_2001, label %dec_label_pc_1fe2, !insn.addr !392

dec_label_pc_1fe2:                                ; preds = %dec_label_pc_1fcb
  %9 = load i8, i8* %stack_var_-4, align 1, !insn.addr !393
  %10 = urem i8 %9, -128
  %11 = icmp eq i8 %10, 0, !insn.addr !394
  %12 = icmp eq i1 %11, false, !insn.addr !395
  store i32 -3, i32* %eax.0.reg2mem, !insn.addr !395
  br i1 %12, label %dec_label_pc_2001, label %dec_label_pc_1ff0, !insn.addr !395

dec_label_pc_1ff0:                                ; preds = %dec_label_pc_1fe2
  %13 = sext i8 %9 to i32, !insn.addr !393
  %14 = udiv i32 %13, 256, !insn.addr !396
  %15 = urem i32 %14, 256, !insn.addr !396
  store i32 %15, i32* %eax.0.reg2mem, !insn.addr !397
  br label %dec_label_pc_2001, !insn.addr !397

dec_label_pc_2001:                                ; preds = %dec_label_pc_1fcb, %dec_label_pc_1fb0, %dec_label_pc_1ff0, %dec_label_pc_1fe2
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !398

dec_label_pc_2006:                                ; preds = %dec_label_pc_1fc9
  %16 = inttoptr i32 %arg2 to i8*, !insn.addr !399
  %17 = call i32 (i8*, i8*, ...) @execl(i8* %16, i8* %16), !insn.addr !399
  call void @_exit(i32 127), !insn.addr !400
  unreachable, !insn.addr !400

; uselistorder directives
  uselistorder i8 %9, { 1, 0 }
  uselistorder i32 %3, { 0, 2, 1 }
  uselistorder i8* %stack_var_-4, { 2, 0, 1 }
  uselistorder i32* %eax.0.reg2mem, { 0, 3, 4, 1, 2 }
  uselistorder i32 256, { 1, 0 }
  uselistorder label %dec_label_pc_2001, { 2, 3, 0, 1 }
}

define i32 @call_fork_exec(i32 %arg1) local_unnamed_addr {
dec_label_pc_2030:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !401
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-4 = alloca i8, align 1
  %3 = trunc i32 %1 to i8, !insn.addr !401
  store i8 %3, i8* %stack_var_-4, align 1, !insn.addr !401
  %4 = call i32 @fork(), !insn.addr !402
  %5 = icmp slt i32 %4, 0, !insn.addr !403
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !404
  br i1 %5, label %dec_label_pc_2081, label %dec_label_pc_2049, !insn.addr !404

dec_label_pc_2049:                                ; preds = %dec_label_pc_2030
  %6 = icmp eq i32 %4, 0, !insn.addr !403
  br i1 %6, label %dec_label_pc_208d, label %dec_label_pc_204b, !insn.addr !405

dec_label_pc_204b:                                ; preds = %dec_label_pc_2049
  %7 = bitcast i8* %stack_var_-4 to i32*
  %8 = call i32 @waitpid(i32 %4, i32* nonnull %7, i32 0), !insn.addr !406
  %9 = icmp slt i32 %8, 0, !insn.addr !407
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !408
  br i1 %9, label %dec_label_pc_2081, label %dec_label_pc_2062, !insn.addr !408

dec_label_pc_2062:                                ; preds = %dec_label_pc_204b
  %10 = load i8, i8* %stack_var_-4, align 1, !insn.addr !409
  %11 = urem i8 %10, -128
  %12 = icmp eq i8 %11, 0, !insn.addr !410
  %13 = icmp eq i1 %12, false, !insn.addr !411
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !411
  br i1 %13, label %dec_label_pc_2081, label %dec_label_pc_2070, !insn.addr !411

dec_label_pc_2070:                                ; preds = %dec_label_pc_2062
  %14 = sext i8 %10 to i32, !insn.addr !409
  %15 = and i32 %14, 65280, !insn.addr !412
  %phitmp = icmp eq i32 %15, 0
  %phitmp4 = select i1 %phitmp, i32 42, i32 -1
  store i32 %phitmp4, i32* %eax.0.reg2mem, !insn.addr !413
  br label %dec_label_pc_2081, !insn.addr !413

dec_label_pc_2081:                                ; preds = %dec_label_pc_204b, %dec_label_pc_2030, %dec_label_pc_2070, %dec_label_pc_2062
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !414

dec_label_pc_208d:                                ; preds = %dec_label_pc_2049
  %16 = add i32 %2, add (i32 ptrtoint (i32* @global_var_4fc7 to i32), i32 -11838), !insn.addr !415
  %17 = inttoptr i32 %16 to i8*, !insn.addr !416
  %18 = call i32 (i8*, i8*, ...) @execl(i8* %17, i8* %17), !insn.addr !417
  call void @_exit(i32 127), !insn.addr !418
  unreachable, !insn.addr !418

; uselistorder directives
  uselistorder i8* %17, { 1, 0 }
  uselistorder i8 %10, { 1, 0 }
  uselistorder i32 %4, { 0, 2, 1 }
  uselistorder i8* %stack_var_-4, { 2, 0, 1 }
  uselistorder i32* %eax.0.reg2mem, { 0, 3, 4, 1, 2 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder label %dec_label_pc_2081, { 2, 3, 0, 1 }
}

define i32 @param_pipe_communication(i32 %arg1) local_unnamed_addr {
dec_label_pc_20b0:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !419
  %stack_var_-36 = alloca i32, align 4
  %1 = load i32, i32* %0
  %stack_var_-44 = alloca i32, align 4
  %stack_var_-56 = alloca i32, align 4
  %2 = load i32, i32* %0
  %3 = ptrtoint i32* %stack_var_-44 to i32, !insn.addr !420
  store i32 %3, i32* %stack_var_-56, align 4, !insn.addr !420
  %4 = insertvalue [2 x i32] undef, i32 %3, 0, !insn.addr !421
  %5 = call i32 @pipe([2 x i32] %4), !insn.addr !421
  %6 = icmp slt i32 %5, 0, !insn.addr !422
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !423
  br i1 %6, label %dec_label_pc_2140, label %dec_label_pc_20d1, !insn.addr !423

dec_label_pc_20d1:                                ; preds = %dec_label_pc_20b0
  %7 = call i32 @fork(), !insn.addr !424
  %8 = icmp slt i32 %7, 0, !insn.addr !425
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !426
  br i1 %8, label %dec_label_pc_2140, label %dec_label_pc_20da, !insn.addr !426

dec_label_pc_20da:                                ; preds = %dec_label_pc_20d1
  %9 = icmp eq i32 %7, 0, !insn.addr !425
  br i1 %9, label %dec_label_pc_2146, label %dec_label_pc_20dc, !insn.addr !427

dec_label_pc_20dc:                                ; preds = %dec_label_pc_20da
  %10 = ptrtoint i32* %stack_var_-56 to i32, !insn.addr !428
  %11 = call i32 @close(i32 %1), !insn.addr !429
  %12 = load i32, i32* %stack_var_-44, align 4, !insn.addr !430
  store i32 %12, i32* %stack_var_-56, align 4, !insn.addr !431
  %13 = call i32 @read(i32 %12, i32* nonnull %stack_var_-36, i32 31), !insn.addr !432
  %14 = add i32 %10, 20, !insn.addr !433
  %15 = add i32 %14, %13, !insn.addr !433
  %16 = inttoptr i32 %15 to i8*, !insn.addr !433
  store i8 0, i8* %16, align 1, !insn.addr !433
  %17 = load i32, i32* %stack_var_-44, align 4, !insn.addr !434
  store i32 %17, i32* %stack_var_-56, align 4, !insn.addr !435
  %18 = call i32 @close(i32 %17), !insn.addr !436
  store i32 0, i32* %stack_var_-56, align 4, !insn.addr !437
  %19 = call i32 @wait(i32 0), !insn.addr !438
  %20 = icmp eq i32 %13, 0, !insn.addr !439
  %21 = icmp slt i32 %13, 0, !insn.addr !439
  %22 = icmp eq i1 %21, false, !insn.addr !440
  %23 = icmp eq i1 %20, false, !insn.addr !440
  %24 = icmp eq i1 %22, %23, !insn.addr !440
  %25 = select i1 %24, i32 42, i32 -3, !insn.addr !440
  store i32 %25, i32* %eax.0.reg2mem, !insn.addr !441
  br label %dec_label_pc_2140, !insn.addr !441

dec_label_pc_2140:                                ; preds = %dec_label_pc_20d1, %dec_label_pc_20b0, %dec_label_pc_20dc
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !442

dec_label_pc_2146:                                ; preds = %dec_label_pc_20da
  %26 = load i32, i32* %stack_var_-44, align 4, !insn.addr !443
  store i32 %26, i32* %stack_var_-56, align 4, !insn.addr !444
  %27 = call i32 @close(i32 %26), !insn.addr !445
  %28 = add i32 %2, add (i32 ptrtoint (i32* @global_var_4f46 to i32), i32 -11828), !insn.addr !446
  %29 = inttoptr i32 %28 to i32*, !insn.addr !447
  %30 = call i32 @write(i32 %1, i32* %29, i32 9), !insn.addr !447
  %31 = call i32 @close(i32 %1), !insn.addr !448
  store i32 0, i32* %stack_var_-56, align 4, !insn.addr !449
  call void @_exit(i32 0), !insn.addr !450
  unreachable, !insn.addr !450

; uselistorder directives
  uselistorder i32 %13, { 1, 2, 0 }
  uselistorder i32 %7, { 1, 0 }
  uselistorder i32* %stack_var_-56, { 0, 1, 2, 3, 4, 6, 5 }
  uselistorder i32* %eax.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder label %dec_label_pc_2140, { 2, 0, 1 }
}

define i32 @call_pipe_communication(i32 %arg1) local_unnamed_addr {
dec_label_pc_2190:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @param_pipe_communication(i32 %1), !insn.addr !451
  ret i32 %2, !insn.addr !452
}

define i32 @param_socket_create() local_unnamed_addr {
dec_label_pc_21b0:
  %eax.0.reg2mem = alloca i32, !insn.addr !453
  %stack_var_-24 = alloca i32, align 4
  %stack_var_-28 = alloca i32, align 4
  %0 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !454
  %1 = icmp slt i32 %0, 0, !insn.addr !455
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !456
  br i1 %1, label %dec_label_pc_228f, label %dec_label_pc_21db, !insn.addr !456

dec_label_pc_21db:                                ; preds = %dec_label_pc_21b0
  store i32 1, i32* %stack_var_-28, align 4, !insn.addr !457
  %2 = call i32 @setsockopt(i32 %0, i32 1, i32 2, i32* nonnull %stack_var_-28, i32 4), !insn.addr !458
  %3 = icmp slt i32 %2, 0, !insn.addr !459
  br i1 %3, label %dec_label_pc_226b, label %dec_label_pc_2200, !insn.addr !460

dec_label_pc_2200:                                ; preds = %dec_label_pc_21db
  store i32 2, i32* %stack_var_-24, align 4, !insn.addr !461
  %4 = bitcast i32* %stack_var_-24 to %sockaddr*
  %5 = call i32 @bind(i32 %0, %sockaddr* nonnull %4, i32 16), !insn.addr !462
  %6 = icmp slt i32 %5, 0, !insn.addr !463
  br i1 %6, label %dec_label_pc_227e, label %dec_label_pc_2237, !insn.addr !464

dec_label_pc_2237:                                ; preds = %dec_label_pc_2200
  %7 = call i32 @listen(i32 %0, i32 5), !insn.addr !465
  %8 = call i32 @close(i32 %0), !insn.addr !466
  %9 = icmp slt i32 %7, 0, !insn.addr !467
  %10 = select i1 %9, i32 -4, i32 42, !insn.addr !468
  store i32 %10, i32* %eax.0.reg2mem, !insn.addr !469
  br label %dec_label_pc_228f, !insn.addr !469

dec_label_pc_226b:                                ; preds = %dec_label_pc_21db
  %11 = call i32 @close(i32 %0), !insn.addr !470
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !471
  br label %dec_label_pc_228f, !insn.addr !471

dec_label_pc_227e:                                ; preds = %dec_label_pc_2200
  %12 = call i32 @close(i32 %0), !insn.addr !472
  store i32 -3, i32* %eax.0.reg2mem, !insn.addr !473
  br label %dec_label_pc_228f, !insn.addr !473

dec_label_pc_228f:                                ; preds = %dec_label_pc_21b0, %dec_label_pc_227e, %dec_label_pc_226b, %dec_label_pc_2237
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !474

; uselistorder directives
  uselistorder i32 %0, { 0, 4, 1, 2, 3, 5, 6 }
  uselistorder i32* %eax.0.reg2mem, { 0, 3, 4, 2, 1 }
  uselistorder label %dec_label_pc_228f, { 1, 2, 3, 0 }
}

define i32 @call_socket_create(i32 %arg1) local_unnamed_addr {
dec_label_pc_22a0:
  %0 = call i32 @param_socket_create(), !insn.addr !475
  ret i32 %0, !insn.addr !476
}

define i32 @param_shmget_shmat() local_unnamed_addr {
dec_label_pc_22c0:
  %0 = alloca i32
  %esi.0.reg2mem = alloca i32, !insn.addr !477
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4d34 to i32), i32 -11818), !insn.addr !478
  %3 = inttoptr i32 %2 to i8*, !insn.addr !479
  %4 = call i32 (i8*, i32, ...) @open(i8* %3, i32 66), !insn.addr !480
  %5 = icmp slt i32 %4, 0, !insn.addr !481
  store i32 -1, i32* %esi.0.reg2mem, !insn.addr !482
  br i1 %5, label %dec_label_pc_2398, label %dec_label_pc_22f9, !insn.addr !482

dec_label_pc_22f9:                                ; preds = %dec_label_pc_22c0
  %6 = call i32 @close(i32 %4), !insn.addr !483
  %7 = call i32 @ftok(i8* %3, i32 42), !insn.addr !484
  %8 = icmp slt i32 %7, 0, !insn.addr !485
  store i32 -1, i32* %esi.0.reg2mem, !insn.addr !486
  br i1 %8, label %dec_label_pc_2398, label %dec_label_pc_2318, !insn.addr !486

dec_label_pc_2318:                                ; preds = %dec_label_pc_22f9
  %9 = call i32 @shmget(i32 %7, i32 4096, i32 ptrtoint (i32* @global_var_3b6 to i32)), !insn.addr !487
  %10 = icmp slt i32 %9, 0, !insn.addr !488
  store i32 -2, i32* %esi.0.reg2mem, !insn.addr !489
  br i1 %10, label %dec_label_pc_2398, label %dec_label_pc_2332, !insn.addr !489

dec_label_pc_2332:                                ; preds = %dec_label_pc_2318
  %11 = call i32* @shmat(i32 %9, i32* null, i32 0), !insn.addr !490
  %12 = icmp eq i32* %11, inttoptr (i32 -1 to i32*), !insn.addr !491
  store i32 -3, i32* %esi.0.reg2mem, !insn.addr !492
  br i1 %12, label %dec_label_pc_2398, label %dec_label_pc_2349, !insn.addr !492

dec_label_pc_2349:                                ; preds = %dec_label_pc_2332
  %13 = ptrtoint i32* %11 to i32, !insn.addr !490
  %14 = add i32 %13, 12, !insn.addr !493
  %15 = inttoptr i32 %14 to i8*, !insn.addr !493
  store i8 0, i8* %15, align 1, !insn.addr !493
  %16 = add i32 %13, 8, !insn.addr !494
  %17 = inttoptr i32 %16 to i32*, !insn.addr !494
  store i32 2037542765, i32* %17, align 4, !insn.addr !494
  %18 = add i32 %13, 4, !insn.addr !495
  %19 = inttoptr i32 %18 to i32*, !insn.addr !495
  store i32 1699570789, i32* %19, align 4, !insn.addr !495
  store i32 1918986323, i32* %11, align 4, !insn.addr !496
  %20 = bitcast i32* %11 to i8*, !insn.addr !497
  %21 = call i32 @strlen(i8* %20), !insn.addr !498
  %22 = call i32 @shmdt(i32* %11), !insn.addr !499
  %23 = call i32 @shmctl(i32 %9, i32 0, %shmid_ds* null), !insn.addr !500
  store i32 %21, i32* %esi.0.reg2mem, !insn.addr !501
  br label %dec_label_pc_2398, !insn.addr !501

dec_label_pc_2398:                                ; preds = %dec_label_pc_2332, %dec_label_pc_2318, %dec_label_pc_2349, %dec_label_pc_22f9, %dec_label_pc_22c0
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  ret i32 %esi.0.reload, !insn.addr !502

; uselistorder directives
  uselistorder i32* %11, { 2, 0, 1, 4, 3 }
  uselistorder i32* %esi.0.reg2mem, { 0, 3, 1, 2, 4, 5 }
  uselistorder i32 (i8*)* @strlen, { 4, 3, 2, 1, 0, 5 }
  uselistorder i32 (i32)* @close, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder label %dec_label_pc_2398, { 2, 0, 1, 3, 4 }
}

define i32 @call_shmget_shmat(i32 %arg1) local_unnamed_addr {
dec_label_pc_23b0:
  %0 = call i32 @param_shmget_shmat(), !insn.addr !503
  %1 = icmp eq i32 %0, 0, !insn.addr !504
  %2 = icmp slt i32 %0, 0, !insn.addr !504
  %3 = icmp eq i1 %2, false, !insn.addr !505
  %4 = icmp eq i1 %1, false, !insn.addr !505
  %5 = icmp eq i1 %3, %4, !insn.addr !505
  %6 = select i1 %5, i32 42, i32 -1, !insn.addr !505
  ret i32 %6, !insn.addr !506
}

define i32 @param_signal_handling(i32 %arg1) local_unnamed_addr {
dec_label_pc_23e0:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !507
  %.reg2mem10 = alloca i32, !insn.addr !507
  %esi.1.reg2mem = alloca i32, !insn.addr !507
  %.reg2mem = alloca i32, !insn.addr !507
  %esi.0.reg2mem = alloca i32, !insn.addr !507
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4c16 to i32), i32 -19136), !insn.addr !508
  %3 = inttoptr i32 %2 to void (i32)*, !insn.addr !509
  %4 = call void (i32)* @signal(i32 10, void (i32)* %3), !insn.addr !509
  %5 = icmp eq void (i32)* %4, inttoptr (i32 -1 to void (i32)*), !insn.addr !510
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !511
  br i1 %5, label %dec_label_pc_253a, label %dec_label_pc_2410, !insn.addr !511

dec_label_pc_2410:                                ; preds = %dec_label_pc_23e0
  %6 = call void (i32)* @signal(i32 14, void (i32)* %3), !insn.addr !512
  %7 = icmp eq void (i32)* %6, inttoptr (i32 -1 to void (i32)*), !insn.addr !513
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !514
  br i1 %7, label %dec_label_pc_253a, label %dec_label_pc_2429, !insn.addr !514

dec_label_pc_2429:                                ; preds = %dec_label_pc_2410
  %8 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4c16 to i32), i32 260), !insn.addr !515
  %9 = inttoptr i32 %8 to i32*, !insn.addr !515
  store i32 0, i32* %9, align 4, !insn.addr !515
  %10 = call i32 @raise(i32 10), !insn.addr !516
  %11 = load i32, i32* %9, align 4
  %12 = icmp eq i32 %11, 0, !insn.addr !517
  %13 = icmp eq i1 %12, false, !insn.addr !518
  store i32 ptrtoint (i32* @global_var_3e8 to i32), i32* %esi.0.reg2mem, !insn.addr !518
  store i32 %11, i32* %.reg2mem, !insn.addr !518
  br i1 %13, label %dec_label_pc_246f, label %dec_label_pc_2450, !insn.addr !518

dec_label_pc_2450:                                ; preds = %dec_label_pc_2429, %dec_label_pc_2465
  %14 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !519
  %15 = load i32, i32* %9, align 4
  %16 = icmp eq i32 %15, 0, !insn.addr !520
  %17 = icmp eq i1 %16, false, !insn.addr !521
  store i32 %15, i32* %.reg2mem, !insn.addr !521
  br i1 %17, label %dec_label_pc_246f, label %dec_label_pc_2465, !insn.addr !521

dec_label_pc_2465:                                ; preds = %dec_label_pc_2450
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %18 = add i32 %esi.0.reload, -1, !insn.addr !522
  %19 = icmp ult i32 %esi.0.reload, 2
  store i32 %18, i32* %esi.0.reg2mem, !insn.addr !523
  store i32 %15, i32* %.reg2mem, !insn.addr !523
  br i1 %19, label %dec_label_pc_246f, label %dec_label_pc_2450, !insn.addr !523

dec_label_pc_246f:                                ; preds = %dec_label_pc_2450, %dec_label_pc_2465, %dec_label_pc_2429
  %.reload = load i32, i32* %.reg2mem, !insn.addr !524
  %20 = icmp eq i32 %.reload, 0, !insn.addr !524
  store i32 -3, i32* %eax.0.reg2mem, !insn.addr !525
  br i1 %20, label %dec_label_pc_253a, label %dec_label_pc_247c, !insn.addr !525

dec_label_pc_247c:                                ; preds = %dec_label_pc_246f
  %21 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4c16 to i32), i32 264), !insn.addr !526
  %22 = inttoptr i32 %21 to i32*, !insn.addr !526
  %23 = load i32, i32* %22, align 4, !insn.addr !526
  %24 = icmp eq i32 %23, 10, !insn.addr !527
  %25 = icmp eq i1 %24, false, !insn.addr !528
  store i32 -4, i32* %eax.0.reg2mem, !insn.addr !528
  br i1 %25, label %dec_label_pc_253a, label %dec_label_pc_2490, !insn.addr !528

dec_label_pc_2490:                                ; preds = %dec_label_pc_247c
  store i32 0, i32* %9, align 4, !insn.addr !529
  %26 = call i32 @alarm(i32 1), !insn.addr !530
  %27 = load i32, i32* %9, align 4
  %28 = icmp eq i32 %27, 0, !insn.addr !531
  %29 = icmp eq i1 %28, false, !insn.addr !532
  store i32 ptrtoint ([4 x i8]* @global_var_7d0 to i32), i32* %esi.1.reg2mem, !insn.addr !532
  store i32 %27, i32* %.reg2mem10, !insn.addr !532
  br i1 %29, label %dec_label_pc_24df, label %dec_label_pc_24c0, !insn.addr !532

dec_label_pc_24c0:                                ; preds = %dec_label_pc_2490, %dec_label_pc_24d5
  %30 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !533
  %31 = load i32, i32* %9, align 4
  %32 = icmp eq i32 %31, 0, !insn.addr !534
  %33 = icmp eq i1 %32, false, !insn.addr !535
  store i32 %31, i32* %.reg2mem10, !insn.addr !535
  br i1 %33, label %dec_label_pc_24df, label %dec_label_pc_24d5, !insn.addr !535

dec_label_pc_24d5:                                ; preds = %dec_label_pc_24c0
  %esi.1.reload = load i32, i32* %esi.1.reg2mem
  %34 = add i32 %esi.1.reload, -1, !insn.addr !536
  %35 = icmp ult i32 %esi.1.reload, 2
  store i32 %34, i32* %esi.1.reg2mem, !insn.addr !537
  store i32 %31, i32* %.reg2mem10, !insn.addr !537
  br i1 %35, label %dec_label_pc_24df, label %dec_label_pc_24c0, !insn.addr !537

dec_label_pc_24df:                                ; preds = %dec_label_pc_24c0, %dec_label_pc_24d5, %dec_label_pc_2490
  %.reload11 = load i32, i32* %.reg2mem10, !insn.addr !538
  %36 = icmp eq i32 %.reload11, 0, !insn.addr !538
  store i32 -5, i32* %eax.0.reg2mem, !insn.addr !539
  br i1 %36, label %dec_label_pc_253a, label %dec_label_pc_24ed, !insn.addr !539

dec_label_pc_24ed:                                ; preds = %dec_label_pc_24df
  %37 = load i32, i32* %22, align 4, !insn.addr !540
  %38 = icmp eq i32 %37, 14, !insn.addr !541
  %39 = icmp eq i1 %38, false, !insn.addr !542
  store i32 -5, i32* %eax.0.reg2mem, !insn.addr !542
  br i1 %39, label %dec_label_pc_253a, label %dec_label_pc_24f8, !insn.addr !542

dec_label_pc_24f8:                                ; preds = %dec_label_pc_24ed
  %40 = call void (i32)* @signal(i32 10, void (i32)* null), !insn.addr !543
  %41 = call void (i32)* @signal(i32 14, void (i32)* null), !insn.addr !544
  store i32 42, i32* %eax.0.reg2mem, !insn.addr !545
  br label %dec_label_pc_253a, !insn.addr !545

dec_label_pc_253a:                                ; preds = %dec_label_pc_246f, %dec_label_pc_2410, %dec_label_pc_23e0, %dec_label_pc_24f8, %dec_label_pc_24ed, %dec_label_pc_24df, %dec_label_pc_247c
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !546

; uselistorder directives
  uselistorder i32 %31, { 1, 0, 2 }
  uselistorder i32 %15, { 1, 0, 2 }
  uselistorder i32* %9, { 1, 2, 3, 0, 4, 5 }
  uselistorder i32 %1, { 2, 1, 0 }
  uselistorder i32* %esi.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %.reg2mem, { 0, 2, 1, 3 }
  uselistorder i32* %esi.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %.reg2mem10, { 0, 2, 1, 3 }
  uselistorder i32* %eax.0.reg2mem, { 0, 4, 5, 6, 7, 1, 2, 3 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i32 10, { 2, 3, 4, 5, 0, 6, 1, 7, 8 }
  uselistorder label %dec_label_pc_253a, { 3, 4, 5, 6, 0, 1, 2 }
  uselistorder label %dec_label_pc_24df, { 1, 0, 2 }
  uselistorder label %dec_label_pc_24c0, { 1, 0 }
  uselistorder label %dec_label_pc_246f, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2450, { 1, 0 }
}

define i32 @signal_handler(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2540:
  %0 = add i32 %arg1, ptrtoint (i32* @global_var_4abb to i32), !insn.addr !547
  %1 = add i32 %arg1, add (i32 ptrtoint (i32* @global_var_4abb to i32), i32 260), !insn.addr !548
  %2 = inttoptr i32 %1 to i32*, !insn.addr !548
  store i32 1, i32* %2, align 4, !insn.addr !548
  %3 = add i32 %arg1, add (i32 ptrtoint (i32* @global_var_4abb to i32), i32 264), !insn.addr !549
  %4 = inttoptr i32 %3 to i32*, !insn.addr !549
  store i32 %arg2, i32* %4, align 4, !insn.addr !549
  ret i32 %0, !insn.addr !550

; uselistorder directives
  uselistorder i32 264, { 1, 0 }
  uselistorder i32 260, { 1, 0 }
}

define i32 @call_signal_handling(i32 %arg1) local_unnamed_addr {
dec_label_pc_2570:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @param_signal_handling(i32 %1), !insn.addr !551
  ret i32 %2, !insn.addr !552
}

define i32 @test_system_calls(i32 %arg1) local_unnamed_addr {
dec_label_pc_2590:
  %0 = alloca i32
  %stack_var_-104 = alloca i8, align 1
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4a64 to i32), i32 -11376), !insn.addr !553
  %3 = inttoptr i32 %2 to i8*, !insn.addr !554
  %4 = call i32 @puts(i8* %3), !insn.addr !555
  %5 = call i32 (i32, ...) @syscall(i32 5), !insn.addr !556
  %6 = icmp slt i32 %5, 0, !insn.addr !557
  br i1 %6, label %dec_label_pc_25de, label %dec_label_pc_25cc, !insn.addr !558

dec_label_pc_25cc:                                ; preds = %dec_label_pc_2590
  %7 = call i32 (i32, ...) @syscall(i32 6), !insn.addr !559
  br label %dec_label_pc_25e7, !insn.addr !560

dec_label_pc_25de:                                ; preds = %dec_label_pc_2590
  %8 = call i32* @__errno_location(), !insn.addr !561
  br label %dec_label_pc_25e7, !insn.addr !562

dec_label_pc_25e7:                                ; preds = %dec_label_pc_25de, %dec_label_pc_25cc
  %9 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4a64 to i32), i32 -12229), !insn.addr !563
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4a64 to i32), i32 -11787), !insn.addr !564
  %11 = inttoptr i32 %10 to i8*, !insn.addr !565
  %12 = call i32 (i8*, ...) @printf(i8* %11), !insn.addr !566
  %13 = bitcast i8* %stack_var_-104 to %stat*
  %14 = inttoptr i32 %9 to i8*, !insn.addr !567
  %15 = call i32 @stat(i8* %14, %stat* nonnull %13), !insn.addr !568
  %16 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4a64 to i32), i32 -11759), !insn.addr !569
  %17 = inttoptr i32 %16 to i8*, !insn.addr !570
  %18 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !571
  %19 = call i32 @fork(), !insn.addr !572
  %20 = icmp slt i32 %19, 0, !insn.addr !573
  br i1 %20, label %dec_label_pc_267a, label %dec_label_pc_264b, !insn.addr !574

dec_label_pc_264b:                                ; preds = %dec_label_pc_25e7
  %21 = icmp eq i32 %19, 0, !insn.addr !573
  br i1 %21, label %dec_label_pc_26fe, label %dec_label_pc_2651, !insn.addr !575

dec_label_pc_2651:                                ; preds = %dec_label_pc_264b
  %22 = bitcast i8* %stack_var_-104 to i32*
  %23 = call i32 @waitpid(i32 %19, i32* nonnull %22, i32 0), !insn.addr !576
  br label %dec_label_pc_267a

dec_label_pc_267a:                                ; preds = %dec_label_pc_2651, %dec_label_pc_25e7
  %24 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4a64 to i32), i32 -11731), !insn.addr !577
  %25 = inttoptr i32 %24 to i8*, !insn.addr !578
  %26 = call i32 (i8*, ...) @printf(i8* %25), !insn.addr !579
  %27 = call i32 @param_pipe_communication(i32 ptrtoint (i32* @0 to i32)), !insn.addr !580
  %28 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4a64 to i32), i32 -11703), !insn.addr !581
  %29 = inttoptr i32 %28 to i8*, !insn.addr !582
  %30 = call i32 (i8*, ...) @printf(i8* %29), !insn.addr !583
  %31 = call i32 @param_socket_create(), !insn.addr !584
  %32 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4a64 to i32), i32 -11675), !insn.addr !585
  %33 = inttoptr i32 %32 to i8*, !insn.addr !586
  %34 = call i32 (i8*, ...) @printf(i8* %33), !insn.addr !587
  %35 = call i32 @param_shmget_shmat(), !insn.addr !588
  %36 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4a64 to i32), i32 -11647), !insn.addr !589
  %37 = inttoptr i32 %36 to i8*, !insn.addr !590
  %38 = call i32 (i8*, ...) @printf(i8* %37), !insn.addr !591
  %39 = call i32 @param_signal_handling(i32 ptrtoint (i32* @0 to i32)), !insn.addr !592
  %40 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4a64 to i32), i32 -11619), !insn.addr !593
  %41 = inttoptr i32 %40 to i8*, !insn.addr !594
  %42 = call i32 (i8*, ...) @printf(i8* %41), !insn.addr !595
  ret i32 %42, !insn.addr !596

dec_label_pc_26fe:                                ; preds = %dec_label_pc_264b
  %43 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4a64 to i32), i32 -11838), !insn.addr !597
  %44 = inttoptr i32 %43 to i8*, !insn.addr !598
  %45 = call i32 (i8*, i8*, ...) @execl(i8* %44, i8* %44), !insn.addr !599
  call void @_exit(i32 127), !insn.addr !600
  unreachable, !insn.addr !600

; uselistorder directives
  uselistorder i32 %19, { 0, 2, 1 }
  uselistorder i32 %1, { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder void (i32)* @_exit, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i8*, i8*, ...)* @execl, { 2, 1, 0, 3 }
  uselistorder i32 (i32)* @param_signal_handling, { 1, 0 }
  uselistorder i32 ()* @param_shmget_shmat, { 1, 0 }
  uselistorder i32 ()* @param_socket_create, { 1, 0 }
  uselistorder i32 (i32)* @param_pipe_communication, { 1, 0 }
  uselistorder i32 (i32, i32*, i32)* @waitpid, { 1, 2, 0, 3 }
  uselistorder i32 ()* @fork, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i8*, %stat*)* @stat, { 2, 1, 0, 3 }
  uselistorder i32* ()* @__errno_location, { 2, 1, 0, 3 }
  uselistorder i32 (i32, ...)* @syscall, { 2, 1, 0, 5, 4, 3, 6 }
}

define i32 @thread_compute(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2720:
  %0 = inttoptr i32 %arg2 to i32*, !insn.addr !601
  %1 = load i32, i32* %0, align 4, !insn.addr !601
  %2 = mul i32 %1, %1, !insn.addr !602
  %3 = call i32* @malloc(i32 4), !insn.addr !603
  %4 = ptrtoint i32* %3 to i32, !insn.addr !603
  store i32 %2, i32* %3, align 4, !insn.addr !604
  ret i32 %4, !insn.addr !605
}

define i32 @param_pthread_create(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2750:
  %0 = alloca i32
  %esi.0.reg2mem = alloca i32, !insn.addr !606
  %stack_var_-16 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %1 = load i32, i32* %0
  %stack_var_-8 = alloca i32, align 4
  store i32 %arg2, i32* %stack_var_-12, align 4, !insn.addr !607
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_48a6 to i32), i32 -18656), !insn.addr !608
  %3 = inttoptr i32 %2 to i32* (i32*)*, !insn.addr !609
  %4 = call i32 @pthread_create(i32* nonnull %stack_var_-8, i32* null, i32* (i32*)* %3, i32* nonnull %stack_var_-12), !insn.addr !610
  %5 = icmp eq i32 %4, 0, !insn.addr !611
  %6 = icmp eq i1 %5, false, !insn.addr !612
  store i32 -1, i32* %esi.0.reg2mem, !insn.addr !612
  br i1 %6, label %dec_label_pc_27b3, label %dec_label_pc_278d, !insn.addr !612

dec_label_pc_278d:                                ; preds = %dec_label_pc_2750
  %7 = load i32, i32* %stack_var_-8, align 4, !insn.addr !613
  %8 = bitcast i32* %stack_var_-16 to i32**, !insn.addr !614
  %9 = call i32 @pthread_join(i32 %7, i32** nonnull %8), !insn.addr !614
  %10 = load i32, i32* %stack_var_-16, align 4, !insn.addr !615
  %11 = inttoptr i32 %10 to i32*, !insn.addr !616
  %12 = load i32, i32* %11, align 4, !insn.addr !616
  call void @free(i32* %11), !insn.addr !617
  store i32 %12, i32* %esi.0.reg2mem, !insn.addr !618
  br label %dec_label_pc_27b3, !insn.addr !618

dec_label_pc_27b3:                                ; preds = %dec_label_pc_278d, %dec_label_pc_2750
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  ret i32 %esi.0.reload, !insn.addr !619

; uselistorder directives
  uselistorder i32* %stack_var_-8, { 1, 0 }
  uselistorder i32* %stack_var_-16, { 1, 0 }
}

define i32 @call_pthread_create(i32 %arg1) local_unnamed_addr {
dec_label_pc_27c0:
  %0 = alloca i32
  %esi.0.reg2mem = alloca i32, !insn.addr !620
  %stack_var_-16 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %1 = load i32, i32* %0
  %stack_var_-8 = alloca i32, align 4
  store i32 7, i32* %stack_var_-12, align 4, !insn.addr !621
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4836 to i32), i32 -18656), !insn.addr !622
  %3 = inttoptr i32 %2 to i32* (i32*)*, !insn.addr !623
  %4 = call i32 @pthread_create(i32* nonnull %stack_var_-8, i32* null, i32* (i32*)* %3, i32* nonnull %stack_var_-12), !insn.addr !624
  %5 = icmp eq i32 %4, 0, !insn.addr !625
  %6 = icmp eq i1 %5, false, !insn.addr !626
  store i32 -1, i32* %esi.0.reg2mem, !insn.addr !626
  br i1 %6, label %dec_label_pc_2823, label %dec_label_pc_27fd, !insn.addr !626

dec_label_pc_27fd:                                ; preds = %dec_label_pc_27c0
  %7 = load i32, i32* %stack_var_-8, align 4, !insn.addr !627
  %8 = bitcast i32* %stack_var_-16 to i32**, !insn.addr !628
  %9 = call i32 @pthread_join(i32 %7, i32** nonnull %8), !insn.addr !628
  %10 = load i32, i32* %stack_var_-16, align 4, !insn.addr !629
  %11 = inttoptr i32 %10 to i32*, !insn.addr !630
  %12 = load i32, i32* %11, align 4, !insn.addr !630
  call void @free(i32* %11), !insn.addr !631
  store i32 %12, i32* %esi.0.reg2mem, !insn.addr !632
  br label %dec_label_pc_2823, !insn.addr !632

dec_label_pc_2823:                                ; preds = %dec_label_pc_27fd, %dec_label_pc_27c0
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  ret i32 %esi.0.reload, !insn.addr !633

; uselistorder directives
  uselistorder i32* %stack_var_-8, { 1, 0 }
  uselistorder i32* %stack_var_-16, { 1, 0 }
}

define i32 @thread_sum(i32 %arg1) local_unnamed_addr {
dec_label_pc_2830:
  %0 = add i32 %arg1, 8, !insn.addr !634
  %1 = inttoptr i32 %0 to i32*, !insn.addr !634
  store i32 0, i32* %1, align 4, !insn.addr !634
  %2 = inttoptr i32 %arg1 to i32*, !insn.addr !635
  %3 = load i32, i32* %2, align 4, !insn.addr !635
  %4 = add i32 %arg1, 4, !insn.addr !636
  %5 = inttoptr i32 %4 to i32*, !insn.addr !636
  %6 = load i32, i32* %5, align 4, !insn.addr !636
  %7 = icmp slt i32 %6, %3, !insn.addr !637
  br i1 %7, label %dec_label_pc_2864, label %dec_label_pc_2848, !insn.addr !637

dec_label_pc_2848:                                ; preds = %dec_label_pc_2830
  %8 = sub i32 %6, %3, !insn.addr !638
  %9 = sub i32 0, %3
  %10 = sub i32 %9, 1
  %11 = add i32 %6, %10, !insn.addr !639
  %12 = zext i32 %8 to i64, !insn.addr !640
  %13 = zext i32 %11 to i64, !insn.addr !640
  %14 = mul nuw i64 %12, %13, !insn.addr !640
  %15 = trunc i64 %14 to i32, !insn.addr !640
  %16 = udiv i64 %14, 2
  %17 = trunc i64 %16 to i32
  %18 = and i32 %17, -2147483648, !insn.addr !641
  %19 = udiv i32 %15, 2, !insn.addr !641
  %20 = or i32 %18, %19, !insn.addr !641
  %21 = add i32 %3, 1, !insn.addr !642
  %22 = mul i32 %8, %21, !insn.addr !643
  %23 = add i32 %22, %3, !insn.addr !644
  %24 = add i32 %23, %20, !insn.addr !645
  store i32 %24, i32* %1, align 4, !insn.addr !646
  br label %dec_label_pc_2864, !insn.addr !646

dec_label_pc_2864:                                ; preds = %dec_label_pc_2848, %dec_label_pc_2830
  ret i32 0, !insn.addr !647

; uselistorder directives
  uselistorder i32 %6, { 0, 2, 1 }
  uselistorder i32 %3, { 1, 2, 0, 4, 3 }
  uselistorder i32 %arg1, { 1, 2, 0 }
}

define i32 @param_pthread_join() local_unnamed_addr {
dec_label_pc_2870:
  %0 = alloca i32
  %esi.2.reg2mem = alloca i32, !insn.addr !648
  %edi.1.reg2mem = alloca i32, !insn.addr !648
  %esi.1.reg2mem = alloca i32, !insn.addr !648
  %ebp.0.reg2mem = alloca i32, !insn.addr !648
  %edi.0.reg2mem = alloca i32, !insn.addr !648
  %esi.0.reg2mem = alloca i32, !insn.addr !648
  %stack_var_-64 = alloca i32, align 4
  %stack_var_-72 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = ptrtoint i32* %stack_var_-72 to i32, !insn.addr !649
  store i32 1, i32* %stack_var_-64, align 4, !insn.addr !650
  %3 = ptrtoint i32* %stack_var_-64 to i32, !insn.addr !651
  %4 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4784 to i32), i32 -18384), !insn.addr !652
  %5 = add i32 %2, 48
  %6 = add i32 %2, -4, !insn.addr !653
  %7 = inttoptr i32 %6 to i32*, !insn.addr !653
  %8 = add i32 %2, -8, !insn.addr !654
  %9 = inttoptr i32 %8 to i32*, !insn.addr !654
  %10 = add i32 %2, -12, !insn.addr !655
  %11 = inttoptr i32 %10 to i32*
  %12 = add i32 %2, -16, !insn.addr !656
  %13 = inttoptr i32 %12 to i32*
  store i32 0, i32* %esi.0.reg2mem, !insn.addr !657
  store i32 %3, i32* %edi.0.reg2mem, !insn.addr !657
  br label %dec_label_pc_28e0, !insn.addr !657

dec_label_pc_28e0:                                ; preds = %dec_label_pc_28f7, %dec_label_pc_2870
  %edi.0.reload = load i32, i32* %edi.0.reg2mem
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %14 = add i32 %esi.0.reload, %5, !insn.addr !658
  store i32 %edi.0.reload, i32* %7, align 4, !insn.addr !653
  store i32 %4, i32* %9, align 4, !insn.addr !654
  store i32 0, i32* %11, align 4, !insn.addr !655
  store i32 %14, i32* %13, align 4, !insn.addr !656
  %15 = call i32 @pthread_create(i32* nonnull @0, i32* nonnull @0, i32* (i32*)* bitcast (i32* @0 to i32* (i32*)*), i32* nonnull @0), !insn.addr !659
  %16 = icmp eq i32 %15, 0, !insn.addr !660
  %17 = icmp eq i1 %16, false, !insn.addr !661
  store i32 -1, i32* %esi.2.reg2mem, !insn.addr !661
  br i1 %17, label %dec_label_pc_2940, label %dec_label_pc_28f7, !insn.addr !661

dec_label_pc_28f7:                                ; preds = %dec_label_pc_28e0
  %18 = add nuw nsw i32 %esi.0.reload, 4, !insn.addr !662
  %19 = add i32 %edi.0.reload, 12, !insn.addr !663
  %20 = icmp eq i32 %esi.0.reload, 8, !insn.addr !664
  %21 = icmp eq i1 %20, false, !insn.addr !665
  store i32 %18, i32* %esi.0.reg2mem, !insn.addr !665
  store i32 %19, i32* %edi.0.reg2mem, !insn.addr !665
  br i1 %21, label %dec_label_pc_28e0, label %dec_label_pc_2902, !insn.addr !665

dec_label_pc_2902:                                ; preds = %dec_label_pc_28f7
  %22 = add i32 %2, 16, !insn.addr !666
  store i32 0, i32* %ebp.0.reg2mem, !insn.addr !667
  store i32 0, i32* %esi.1.reg2mem, !insn.addr !667
  store i32 %22, i32* %edi.1.reg2mem, !insn.addr !667
  br label %dec_label_pc_2910, !insn.addr !667

dec_label_pc_2910:                                ; preds = %dec_label_pc_2925, %dec_label_pc_2902
  %edi.1.reload = load i32, i32* %edi.1.reg2mem
  %esi.1.reload = load i32, i32* %esi.1.reg2mem
  %ebp.0.reload = load i32, i32* %ebp.0.reg2mem
  store i32 0, i32* %11, align 4, !insn.addr !668
  %23 = mul i32 %ebp.0.reload, 4, !insn.addr !669
  %24 = add i32 %23, %5, !insn.addr !669
  %25 = inttoptr i32 %24 to i32*, !insn.addr !669
  %26 = load i32, i32* %25, align 4, !insn.addr !669
  store i32 %26, i32* %13, align 4, !insn.addr !669
  %27 = call i32 @pthread_join(i32 ptrtoint (i32* @0 to i32), i32** bitcast (i32* @0 to i32**)), !insn.addr !670
  %28 = icmp eq i32 %27, 0, !insn.addr !671
  %29 = icmp eq i1 %28, false, !insn.addr !672
  store i32 -2, i32* %esi.2.reg2mem, !insn.addr !672
  br i1 %29, label %dec_label_pc_2940, label %dec_label_pc_2925, !insn.addr !672

dec_label_pc_2925:                                ; preds = %dec_label_pc_2910
  %30 = inttoptr i32 %edi.1.reload to i32*, !insn.addr !673
  %31 = load i32, i32* %30, align 4, !insn.addr !673
  %32 = add i32 %31, %esi.1.reload, !insn.addr !673
  %33 = add nuw nsw i32 %ebp.0.reload, 1, !insn.addr !674
  %34 = add i32 %edi.1.reload, 12, !insn.addr !675
  %35 = icmp eq i32 %ebp.0.reload, 2, !insn.addr !676
  %36 = icmp eq i1 %35, false, !insn.addr !677
  store i32 %33, i32* %ebp.0.reg2mem, !insn.addr !677
  store i32 %32, i32* %esi.1.reg2mem, !insn.addr !677
  store i32 %34, i32* %edi.1.reg2mem, !insn.addr !677
  store i32 %32, i32* %esi.2.reg2mem, !insn.addr !677
  br i1 %36, label %dec_label_pc_2910, label %dec_label_pc_2940, !insn.addr !677

dec_label_pc_2940:                                ; preds = %dec_label_pc_28e0, %dec_label_pc_2910, %dec_label_pc_2925
  %esi.2.reload = load i32, i32* %esi.2.reg2mem
  ret i32 %esi.2.reload, !insn.addr !678

; uselistorder directives
  uselistorder i32 %edi.1.reload, { 1, 0 }
  uselistorder i32 %edi.0.reload, { 1, 0 }
  uselistorder i32 %2, { 5, 1, 2, 3, 4, 0 }
  uselistorder i32* %esi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ebp.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edi.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.2.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_2940, { 2, 1, 0 }
}

define i32 @call_pthread_join() local_unnamed_addr {
dec_label_pc_2950:
  %0 = alloca i32
  %esi.2.reg2mem = alloca i32, !insn.addr !679
  %edi.1.reg2mem = alloca i32, !insn.addr !679
  %esi.1.reg2mem = alloca i32, !insn.addr !679
  %ebp.0.reg2mem = alloca i32, !insn.addr !679
  %edi.0.reg2mem = alloca i32, !insn.addr !679
  %esi.0.reg2mem = alloca i32, !insn.addr !679
  %stack_var_-64 = alloca i32, align 4
  %stack_var_-72 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = ptrtoint i32* %stack_var_-72 to i32, !insn.addr !680
  store i32 1, i32* %stack_var_-64, align 4, !insn.addr !681
  %3 = ptrtoint i32* %stack_var_-64 to i32, !insn.addr !682
  %4 = add i32 %1, add (i32 ptrtoint (i32* @global_var_46a4 to i32), i32 -18384), !insn.addr !683
  %5 = add i32 %2, 48
  %6 = add i32 %2, -4, !insn.addr !684
  %7 = inttoptr i32 %6 to i32*, !insn.addr !684
  %8 = add i32 %2, -8, !insn.addr !685
  %9 = inttoptr i32 %8 to i32*, !insn.addr !685
  %10 = add i32 %2, -12, !insn.addr !686
  %11 = inttoptr i32 %10 to i32*
  %12 = add i32 %2, -16, !insn.addr !687
  %13 = inttoptr i32 %12 to i32*
  store i32 0, i32* %esi.0.reg2mem, !insn.addr !688
  store i32 %3, i32* %edi.0.reg2mem, !insn.addr !688
  br label %dec_label_pc_29c0, !insn.addr !688

dec_label_pc_29c0:                                ; preds = %dec_label_pc_29d7, %dec_label_pc_2950
  %edi.0.reload = load i32, i32* %edi.0.reg2mem
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %14 = add i32 %esi.0.reload, %5, !insn.addr !689
  store i32 %edi.0.reload, i32* %7, align 4, !insn.addr !684
  store i32 %4, i32* %9, align 4, !insn.addr !685
  store i32 0, i32* %11, align 4, !insn.addr !686
  store i32 %14, i32* %13, align 4, !insn.addr !687
  %15 = call i32 @pthread_create(i32* nonnull @0, i32* nonnull @0, i32* (i32*)* bitcast (i32* @0 to i32* (i32*)*), i32* nonnull @0), !insn.addr !690
  %16 = icmp eq i32 %15, 0, !insn.addr !691
  %17 = icmp eq i1 %16, false, !insn.addr !692
  store i32 -1, i32* %esi.2.reg2mem, !insn.addr !692
  br i1 %17, label %dec_label_pc_2a20, label %dec_label_pc_29d7, !insn.addr !692

dec_label_pc_29d7:                                ; preds = %dec_label_pc_29c0
  %18 = add nuw nsw i32 %esi.0.reload, 4, !insn.addr !693
  %19 = add i32 %edi.0.reload, 12, !insn.addr !694
  %20 = icmp eq i32 %esi.0.reload, 8, !insn.addr !695
  %21 = icmp eq i1 %20, false, !insn.addr !696
  store i32 %18, i32* %esi.0.reg2mem, !insn.addr !696
  store i32 %19, i32* %edi.0.reg2mem, !insn.addr !696
  br i1 %21, label %dec_label_pc_29c0, label %dec_label_pc_29e2, !insn.addr !696

dec_label_pc_29e2:                                ; preds = %dec_label_pc_29d7
  %22 = add i32 %2, 16, !insn.addr !697
  store i32 0, i32* %ebp.0.reg2mem, !insn.addr !698
  store i32 0, i32* %esi.1.reg2mem, !insn.addr !698
  store i32 %22, i32* %edi.1.reg2mem, !insn.addr !698
  br label %dec_label_pc_29f0, !insn.addr !698

dec_label_pc_29f0:                                ; preds = %dec_label_pc_2a05, %dec_label_pc_29e2
  %edi.1.reload = load i32, i32* %edi.1.reg2mem
  %esi.1.reload = load i32, i32* %esi.1.reg2mem
  %ebp.0.reload = load i32, i32* %ebp.0.reg2mem
  store i32 0, i32* %11, align 4, !insn.addr !699
  %23 = mul i32 %ebp.0.reload, 4, !insn.addr !700
  %24 = add i32 %23, %5, !insn.addr !700
  %25 = inttoptr i32 %24 to i32*, !insn.addr !700
  %26 = load i32, i32* %25, align 4, !insn.addr !700
  store i32 %26, i32* %13, align 4, !insn.addr !700
  %27 = call i32 @pthread_join(i32 ptrtoint (i32* @0 to i32), i32** bitcast (i32* @0 to i32**)), !insn.addr !701
  %28 = icmp eq i32 %27, 0, !insn.addr !702
  %29 = icmp eq i1 %28, false, !insn.addr !703
  store i32 -2, i32* %esi.2.reg2mem, !insn.addr !703
  br i1 %29, label %dec_label_pc_2a20, label %dec_label_pc_2a05, !insn.addr !703

dec_label_pc_2a05:                                ; preds = %dec_label_pc_29f0
  %30 = inttoptr i32 %edi.1.reload to i32*, !insn.addr !704
  %31 = load i32, i32* %30, align 4, !insn.addr !704
  %32 = add i32 %31, %esi.1.reload, !insn.addr !704
  %33 = add nuw nsw i32 %ebp.0.reload, 1, !insn.addr !705
  %34 = add i32 %edi.1.reload, 12, !insn.addr !706
  %35 = icmp eq i32 %ebp.0.reload, 2, !insn.addr !707
  %36 = icmp eq i1 %35, false, !insn.addr !708
  store i32 %33, i32* %ebp.0.reg2mem, !insn.addr !708
  store i32 %32, i32* %esi.1.reg2mem, !insn.addr !708
  store i32 %34, i32* %edi.1.reg2mem, !insn.addr !708
  store i32 %32, i32* %esi.2.reg2mem, !insn.addr !708
  br i1 %36, label %dec_label_pc_29f0, label %dec_label_pc_2a20, !insn.addr !708

dec_label_pc_2a20:                                ; preds = %dec_label_pc_29c0, %dec_label_pc_29f0, %dec_label_pc_2a05
  %esi.2.reload = load i32, i32* %esi.2.reg2mem
  ret i32 %esi.2.reload, !insn.addr !709

; uselistorder directives
  uselistorder i32 %edi.1.reload, { 1, 0 }
  uselistorder i32 %edi.0.reload, { 1, 0 }
  uselistorder i32 %2, { 5, 1, 2, 3, 4, 0 }
  uselistorder i32* %esi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ebp.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edi.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.2.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_2a20, { 2, 1, 0 }
}

define i32 @thread_increment(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2a30:
  %0 = alloca i32
  %esi.0.reg2mem = alloca i32, !insn.addr !710
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %arg2 to i32*, !insn.addr !711
  %3 = load i32, i32* %2, align 4, !insn.addr !711
  %4 = icmp slt i32 %3, 1
  br i1 %4, label %dec_label_pc_2a88, label %dec_label_pc_2a4c, !insn.addr !712

dec_label_pc_2a4c:                                ; preds = %dec_label_pc_2a30
  %5 = add i32 %1, add (i32 ptrtoint (i32* @global_var_45c5 to i32), i32 332), !insn.addr !713
  %6 = inttoptr i32 %5 to i32*, !insn.addr !714
  %7 = add i32 %1, add (i32 ptrtoint (i32* @global_var_45c5 to i32), i32 268)
  %8 = inttoptr i32 %7 to i32*
  store i32 %3, i32* %esi.0.reg2mem, !insn.addr !715
  br label %dec_label_pc_2a60, !insn.addr !715

dec_label_pc_2a60:                                ; preds = %dec_label_pc_2a60, %dec_label_pc_2a4c
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %9 = call i32 @pthread_mutex_lock(i32* %6), !insn.addr !714
  %10 = load i32, i32* %8, align 4, !insn.addr !716
  %11 = add i32 %10, 1, !insn.addr !716
  store i32 %11, i32* %8, align 4, !insn.addr !716
  %12 = call i32 @pthread_mutex_unlock(i32* %6), !insn.addr !717
  %13 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !718
  %14 = add i32 %esi.0.reload, -1, !insn.addr !719
  %15 = icmp eq i32 %14, 0, !insn.addr !719
  %16 = icmp eq i1 %15, false, !insn.addr !720
  store i32 %14, i32* %esi.0.reg2mem, !insn.addr !720
  br i1 %16, label %dec_label_pc_2a60, label %dec_label_pc_2a88, !insn.addr !720

dec_label_pc_2a88:                                ; preds = %dec_label_pc_2a60, %dec_label_pc_2a30
  ret i32 0, !insn.addr !721

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32* %esi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32 (i32)* @usleep, { 2, 1, 0, 3 }
}

define i32 @param_mutex_lock(i32 %arg1) local_unnamed_addr {
dec_label_pc_2aa0:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !722
  %.reg2mem = alloca i32, !insn.addr !722
  %.pre-phi4.reg2mem = alloca i32*, !insn.addr !722
  %.pre-phi6.reg2mem = alloca i32, !insn.addr !722
  %esi.1.reg2mem = alloca i32, !insn.addr !722
  %edi.0.reg2mem = alloca i32, !insn.addr !722
  %esi.0.reg2mem = alloca i32, !insn.addr !722
  %stack_var_-24 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = mul i32 %arg1, 4, !insn.addr !723
  %3 = call i32* @malloc(i32 %2), !insn.addr !724
  %4 = icmp eq i32* %3, null, !insn.addr !725
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !726
  br i1 %4, label %dec_label_pc_2b8a, label %dec_label_pc_2ad2, !insn.addr !726

dec_label_pc_2ad2:                                ; preds = %dec_label_pc_2aa0
  %5 = ptrtoint i32* %stack_var_-24 to i32, !insn.addr !727
  %6 = add i32 %1, add (i32 ptrtoint ([3 x i8]* @global_var_4554 to i32), i32 268), !insn.addr !728
  %7 = inttoptr i32 %6 to i32*, !insn.addr !728
  store i32 0, i32* %7, align 4, !insn.addr !728
  %8 = icmp slt i32 %arg1, 1
  br i1 %8, label %dec_label_pc_2b20.thread, label %dec_label_pc_2b00.preheader, !insn.addr !729

dec_label_pc_2b00.preheader:                      ; preds = %dec_label_pc_2ad2
  %9 = ptrtoint i32* %3 to i32, !insn.addr !724
  %10 = add i32 %5, 36
  %11 = add i32 %5, -4, !insn.addr !730
  %12 = inttoptr i32 %11 to i32*, !insn.addr !730
  %13 = add i32 %5, 8, !insn.addr !731
  %14 = inttoptr i32 %13 to i32*, !insn.addr !731
  %15 = add i32 %5, -8, !insn.addr !731
  %16 = inttoptr i32 %15 to i32*, !insn.addr !731
  %17 = add i32 %5, -12
  %18 = inttoptr i32 %17 to i32*
  %19 = add i32 %5, -16
  %20 = inttoptr i32 %19 to i32*
  store i32 %9, i32* %esi.0.reg2mem
  store i32 %arg1, i32* %edi.0.reg2mem
  br label %dec_label_pc_2b00

dec_label_pc_2b20.thread:                         ; preds = %dec_label_pc_2ad2
  %21 = add i32 %5, 4, !insn.addr !732
  %22 = inttoptr i32 %21 to i32*, !insn.addr !732
  %23 = load i32, i32* %22, align 4, !insn.addr !732
  %.pre = add i32 %5, -16, !insn.addr !733
  %.pre3 = inttoptr i32 %.pre to i32*, !insn.addr !733
  %.pre5 = add i32 %5, 36, !insn.addr !734
  store i32 %.pre5, i32* %.pre-phi6.reg2mem
  store i32* %.pre3, i32** %.pre-phi4.reg2mem
  store i32 %23, i32* %.reg2mem
  br label %dec_label_pc_2b47

dec_label_pc_2b00:                                ; preds = %dec_label_pc_2b00.preheader, %dec_label_pc_2b18
  %edi.0.reload = load i32, i32* %edi.0.reg2mem
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  store i32 %10, i32* %12, align 4, !insn.addr !730
  %24 = load i32, i32* %14, align 4, !insn.addr !731
  store i32 %24, i32* %16, align 4, !insn.addr !731
  store i32 0, i32* %18, align 4, !insn.addr !735
  store i32 %esi.0.reload, i32* %20, align 4, !insn.addr !736
  %25 = call i32 @pthread_create(i32* nonnull @0, i32* nonnull @0, i32* (i32*)* bitcast (i32* @0 to i32* (i32*)*), i32* nonnull @0), !insn.addr !737
  %26 = icmp eq i32 %25, 0, !insn.addr !738
  %27 = icmp eq i1 %26, false, !insn.addr !739
  br i1 %27, label %dec_label_pc_2b76, label %dec_label_pc_2b18, !insn.addr !739

dec_label_pc_2b18:                                ; preds = %dec_label_pc_2b00
  %28 = add i32 %esi.0.reload, 4, !insn.addr !740
  %29 = add i32 %edi.0.reload, -1, !insn.addr !741
  %30 = icmp eq i32 %29, 0, !insn.addr !741
  %31 = icmp eq i1 %30, false, !insn.addr !742
  store i32 %28, i32* %esi.0.reg2mem, !insn.addr !742
  store i32 %29, i32* %edi.0.reg2mem, !insn.addr !742
  br i1 %31, label %dec_label_pc_2b00, label %dec_label_pc_2b30.preheader, !insn.addr !742

dec_label_pc_2b30.preheader:                      ; preds = %dec_label_pc_2b18
  %32 = add i32 %5, 4, !insn.addr !732
  %33 = inttoptr i32 %32 to i32*, !insn.addr !732
  %34 = load i32, i32* %33, align 4, !insn.addr !732
  store i32 0, i32* %esi.1.reg2mem
  br label %dec_label_pc_2b30

dec_label_pc_2b30:                                ; preds = %dec_label_pc_2b30.preheader, %dec_label_pc_2b30
  %esi.1.reload = load i32, i32* %esi.1.reg2mem
  store i32 0, i32* %18, align 4, !insn.addr !743
  %35 = mul i32 %esi.1.reload, 4, !insn.addr !744
  %36 = add i32 %35, %34, !insn.addr !744
  %37 = inttoptr i32 %36 to i32*, !insn.addr !744
  %38 = load i32, i32* %37, align 4, !insn.addr !744
  store i32 %38, i32* %20, align 4, !insn.addr !744
  %39 = call i32 @pthread_join(i32 ptrtoint (i32* @0 to i32), i32** bitcast (i32* @0 to i32**)), !insn.addr !745
  %40 = add i32 %esi.1.reload, 1, !insn.addr !746
  %41 = icmp eq i32 %40, %arg1, !insn.addr !747
  %42 = icmp eq i1 %41, false, !insn.addr !748
  store i32 %40, i32* %esi.1.reg2mem, !insn.addr !748
  store i32 %10, i32* %.pre-phi6.reg2mem, !insn.addr !748
  store i32* %20, i32** %.pre-phi4.reg2mem, !insn.addr !748
  store i32 %34, i32* %.reg2mem, !insn.addr !748
  br i1 %42, label %dec_label_pc_2b30, label %dec_label_pc_2b47, !insn.addr !748

dec_label_pc_2b47:                                ; preds = %dec_label_pc_2b30, %dec_label_pc_2b20.thread
  %.reload = load i32, i32* %.reg2mem
  %.pre-phi4.reload = load i32*, i32** %.pre-phi4.reg2mem
  %.pre-phi6.reload = load i32, i32* %.pre-phi6.reg2mem
  store i32 %.reload, i32* %.pre-phi4.reload, align 4, !insn.addr !733
  call void @free(i32* nonnull @0), !insn.addr !749
  %43 = inttoptr i32 %.pre-phi6.reload to i32*, !insn.addr !734
  %44 = load i32, i32* %43, align 4, !insn.addr !734
  %45 = mul i32 %44, %arg1, !insn.addr !734
  %46 = load i32, i32* %7, align 4, !insn.addr !750
  %47 = icmp eq i32 %46, %45, !insn.addr !751
  %48 = select i1 %47, i32 42, i32 -3, !insn.addr !752
  store i32 %48, i32* %eax.0.reg2mem, !insn.addr !753
  br label %dec_label_pc_2b8a, !insn.addr !753

dec_label_pc_2b76:                                ; preds = %dec_label_pc_2b00
  %49 = add i32 %5, 4, !insn.addr !754
  %50 = inttoptr i32 %49 to i32*, !insn.addr !754
  %51 = load i32, i32* %50, align 4, !insn.addr !754
  store i32 %51, i32* %20, align 4, !insn.addr !754
  call void @free(i32* nonnull @0), !insn.addr !755
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !756
  br label %dec_label_pc_2b8a, !insn.addr !756

dec_label_pc_2b8a:                                ; preds = %dec_label_pc_2aa0, %dec_label_pc_2b76, %dec_label_pc_2b47
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !757

; uselistorder directives
  uselistorder i32 %esi.0.reload, { 1, 0 }
  uselistorder i32* %20, { 1, 0, 2, 3 }
  uselistorder i32 %5, { 4, 3, 0, 1, 2, 5, 6, 7, 8, 9, 10 }
  uselistorder i32* %3, { 1, 0 }
  uselistorder i32* %esi.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edi.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %esi.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32 %arg1, { 2, 3, 0, 4, 1 }
  uselistorder label %dec_label_pc_2b8a, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2b30, { 1, 0 }
  uselistorder label %dec_label_pc_2b00, { 1, 0 }
}

define i32 @call_mutex_lock(i32 %arg1) local_unnamed_addr {
dec_label_pc_2ba0:
  %0 = call i32 @param_mutex_lock(i32 4), !insn.addr !758
  ret i32 %0, !insn.addr !759
}

define i32 @consumer_thread(i32 %arg1) local_unnamed_addr {
dec_label_pc_2bd0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4425 to i32), i32 356), !insn.addr !760
  %3 = inttoptr i32 %2 to i32*, !insn.addr !761
  %4 = call i32 @pthread_mutex_lock(i32* %3), !insn.addr !761
  %5 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4425 to i32), i32 272), !insn.addr !762
  %6 = inttoptr i32 %5 to i8*, !insn.addr !762
  %7 = load i8, i8* %6, align 1, !insn.addr !762
  %8 = icmp eq i8 %7, 0, !insn.addr !762
  %9 = icmp eq i1 %8, false, !insn.addr !763
  br i1 %9, label %dec_label_pc_2c15, label %dec_label_pc_2bf9, !insn.addr !763

dec_label_pc_2bf9:                                ; preds = %dec_label_pc_2bd0
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4425 to i32), i32 276), !insn.addr !764
  %11 = inttoptr i32 %10 to i32*, !insn.addr !765
  br label %dec_label_pc_2c00, !insn.addr !766

dec_label_pc_2c00:                                ; preds = %dec_label_pc_2c00, %dec_label_pc_2bf9
  %12 = call i32 @pthread_cond_wait(i32* %11, i32* %3), !insn.addr !765
  %13 = load i8, i8* %6, align 1, !insn.addr !767
  %14 = icmp eq i8 %13, 1, !insn.addr !767
  %15 = icmp eq i1 %14, false, !insn.addr !768
  br i1 %15, label %dec_label_pc_2c00, label %dec_label_pc_2c15, !insn.addr !768

dec_label_pc_2c15:                                ; preds = %dec_label_pc_2c00, %dec_label_pc_2bd0
  %16 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4425 to i32), i32 324), !insn.addr !769
  %17 = inttoptr i32 %16 to i8*, !insn.addr !769
  %18 = load i8, i8* %17, align 1, !insn.addr !769
  %19 = icmp eq i8 %18, 0, !insn.addr !769
  %20 = select i1 %19, i32 0, i32 42, !insn.addr !770
  %21 = call i32 @pthread_mutex_unlock(i32* %3), !insn.addr !771
  %22 = call i32* @malloc(i32 4), !insn.addr !772
  %23 = ptrtoint i32* %22 to i32, !insn.addr !772
  store i32 %20, i32* %22, align 4, !insn.addr !773
  ret i32 %23, !insn.addr !774

; uselistorder directives
  uselistorder i32* %3, { 1, 0, 2 }
  uselistorder i32 %1, { 3, 2, 1, 0 }
}

define i32 @producer_thread(i32 %arg1) local_unnamed_addr {
dec_label_pc_2c50:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @sleep(i32 1), !insn.addr !775
  %3 = add i32 %1, add (i32 ptrtoint ([3 x i8]* @global_var_43a8 to i32), i32 356), !insn.addr !776
  %4 = inttoptr i32 %3 to i32*, !insn.addr !777
  %5 = call i32 @pthread_mutex_lock(i32* %4), !insn.addr !777
  %6 = add i32 %1, add (i32 ptrtoint ([3 x i8]* @global_var_43a8 to i32), i32 324), !insn.addr !778
  %7 = inttoptr i32 %6 to i8*, !insn.addr !778
  store i8 1, i8* %7, align 1, !insn.addr !778
  %8 = add i32 %1, add (i32 ptrtoint ([3 x i8]* @global_var_43a8 to i32), i32 272), !insn.addr !779
  %9 = inttoptr i32 %8 to i8*, !insn.addr !779
  store i8 1, i8* %9, align 1, !insn.addr !779
  %10 = add i32 %1, add (i32 ptrtoint ([3 x i8]* @global_var_43a8 to i32), i32 276), !insn.addr !780
  %11 = inttoptr i32 %10 to i32*, !insn.addr !781
  %12 = call i32 @pthread_cond_signal(i32* %11), !insn.addr !781
  %13 = call i32 @pthread_mutex_unlock(i32* %4), !insn.addr !782
  ret i32 0, !insn.addr !783

; uselistorder directives
  uselistorder i32 (i32*)* @pthread_mutex_unlock, { 2, 1, 0, 3 }
  uselistorder i32 276, { 1, 0 }
  uselistorder i8 1, { 1, 2, 0, 3 }
  uselistorder i32 (i32*)* @pthread_mutex_lock, { 0, 2, 1, 3 }
}

define i32 @param_condition_variable(i32 %arg1) local_unnamed_addr {
dec_label_pc_2cb0:
  %0 = alloca i32
  %esi.0.reg2mem = alloca i32, !insn.addr !784
  %stack_var_-12 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  %1 = load i32, i32* %0
  %stack_var_-8 = alloca i32, align 4
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4346 to i32), i32 272), !insn.addr !785
  %3 = inttoptr i32 %2 to i8*, !insn.addr !785
  store i8 0, i8* %3, align 1, !insn.addr !785
  %4 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4346 to i32), i32 324), !insn.addr !786
  %5 = inttoptr i32 %4 to i8*, !insn.addr !786
  store i8 0, i8* %5, align 1, !insn.addr !786
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4346 to i32), i32 -17456), !insn.addr !787
  %7 = inttoptr i32 %6 to i32* (i32*)*, !insn.addr !788
  %8 = call i32 @pthread_create(i32* nonnull %stack_var_-16, i32* null, i32* (i32*)* %7, i32* null), !insn.addr !789
  %9 = icmp eq i32 %8, 0, !insn.addr !790
  %10 = icmp eq i1 %9, false, !insn.addr !791
  store i32 -1, i32* %esi.0.reg2mem, !insn.addr !791
  br i1 %10, label %dec_label_pc_2d56, label %dec_label_pc_2cf0, !insn.addr !791

dec_label_pc_2cf0:                                ; preds = %dec_label_pc_2cb0
  %11 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4346 to i32), i32 -17328), !insn.addr !792
  %12 = inttoptr i32 %11 to i32* (i32*)*, !insn.addr !793
  %13 = call i32 @pthread_create(i32* nonnull %stack_var_-8, i32* null, i32* (i32*)* %12, i32* null), !insn.addr !794
  %14 = icmp eq i32 %13, 0, !insn.addr !795
  %15 = load i32, i32* %stack_var_-16, align 4
  br i1 %14, label %dec_label_pc_2d22, label %dec_label_pc_2d0c, !insn.addr !796

dec_label_pc_2d0c:                                ; preds = %dec_label_pc_2cf0
  %16 = call i32 @pthread_cancel(i32 %15), !insn.addr !797
  store i32 -2, i32* %esi.0.reg2mem, !insn.addr !798
  br label %dec_label_pc_2d56, !insn.addr !798

dec_label_pc_2d22:                                ; preds = %dec_label_pc_2cf0
  %17 = bitcast i32* %stack_var_-12 to i32**, !insn.addr !799
  %18 = call i32 @pthread_join(i32 %15, i32** nonnull %17), !insn.addr !799
  %19 = load i32, i32* %stack_var_-8, align 4, !insn.addr !800
  %20 = call i32 @pthread_join(i32 %19, i32** null), !insn.addr !801
  %21 = load i32, i32* %stack_var_-12, align 4, !insn.addr !802
  %22 = inttoptr i32 %21 to i32*, !insn.addr !803
  %23 = load i32, i32* %22, align 4, !insn.addr !803
  call void @free(i32* %22), !insn.addr !804
  store i32 %23, i32* %esi.0.reg2mem, !insn.addr !805
  br label %dec_label_pc_2d56, !insn.addr !805

dec_label_pc_2d56:                                ; preds = %dec_label_pc_2d22, %dec_label_pc_2d0c, %dec_label_pc_2cb0
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  ret i32 %esi.0.reload, !insn.addr !806

; uselistorder directives
  uselistorder i32 %15, { 1, 0 }
  uselistorder i32* %stack_var_-8, { 1, 0 }
  uselistorder i32 %1, { 3, 0, 1, 2 }
  uselistorder i32* %stack_var_-16, { 1, 0 }
  uselistorder i32* %stack_var_-12, { 1, 0 }
  uselistorder i32* %esi.0.reg2mem, { 0, 2, 1, 3 }
  uselistorder i32 324, { 1, 2, 0 }
}

define i32 @call_condition_variable(i32 %arg1) local_unnamed_addr {
dec_label_pc_2d60:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @param_condition_variable(i32 %1), !insn.addr !807
  ret i32 %2, !insn.addr !808
}

define i32 @thread_atomic_increment(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2d80:
  %0 = alloca i32
  %ecx.0.reg2mem = alloca i32, !insn.addr !809
  %.reg2mem = alloca i32, !insn.addr !809
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %arg2 to i32*, !insn.addr !810
  %3 = load i32, i32* %2, align 4, !insn.addr !810
  %4 = icmp slt i32 %3, 1
  br i1 %4, label %dec_label_pc_2dbf, label %dec_label_pc_2da0.preheader, !insn.addr !811

dec_label_pc_2da0.preheader:                      ; preds = %dec_label_pc_2d80
  %5 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4279 to i32), i32 328), !insn.addr !812
  %6 = inttoptr i32 %5 to i32*, !insn.addr !812
  %.promoted = load i32, i32* %6, align 4
  store i32 %.promoted, i32* %.reg2mem
  store i32 0, i32* %ecx.0.reg2mem
  br label %dec_label_pc_2da0

dec_label_pc_2da0:                                ; preds = %dec_label_pc_2da0.preheader, %dec_label_pc_2da0
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %7 = add i32 %.reload, 1, !insn.addr !812
  %8 = add i32 %ecx.0.reload, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !813
  %9 = icmp eq i32 %ecx.0.reload, %7, !insn.addr !814
  %10 = select i1 %9, i32 %8, i32 %7, !insn.addr !814
  %11 = add i32 %ecx.0.reload, 1, !insn.addr !815
  %12 = icmp eq i32 %11, %3, !insn.addr !816
  %13 = icmp eq i1 %12, false, !insn.addr !817
  store i32 %10, i32* %.reg2mem, !insn.addr !817
  store i32 %11, i32* %ecx.0.reg2mem, !insn.addr !817
  br i1 %13, label %dec_label_pc_2da0, label %dec_label_pc_2dbf.loopexit, !insn.addr !817

dec_label_pc_2dbf.loopexit:                       ; preds = %dec_label_pc_2da0
  store i32 %10, i32* %6, align 4
  br label %dec_label_pc_2dbf

dec_label_pc_2dbf:                                ; preds = %dec_label_pc_2dbf.loopexit, %dec_label_pc_2d80
  ret i32 0, !insn.addr !818

; uselistorder directives
  uselistorder i32 %10, { 1, 0 }
  uselistorder i32 %ecx.0.reload, { 2, 0, 1 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %ecx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_2da0, { 1, 0 }
}

define i32 @thread_atomic_load_store(i32 %arg1) local_unnamed_addr {
dec_label_pc_2dd0:
  %0 = add i32 %arg1, add (i32 ptrtoint (i32* @global_var_422b to i32), i32 328), !insn.addr !819
  %1 = inttoptr i32 %0 to i32*, !insn.addr !819
  %2 = load i32, i32* %1, align 4, !insn.addr !819
  %3 = add i32 %2, 100, !insn.addr !820
  store i32 %3, i32* %1, align 4, !insn.addr !821
  ret i32 0, !insn.addr !822
}

define i32 @param_atomic_ops(i32 %arg1) local_unnamed_addr {
dec_label_pc_2df0:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !823
  %esi.1.reg2mem = alloca i32, !insn.addr !823
  %.pre-phi4.reg2mem = alloca i32*, !insn.addr !823
  %.pre-phi8.reg2mem = alloca i32*, !insn.addr !823
  %.pre-phi12.reg2mem = alloca i32*, !insn.addr !823
  %.pre-phi16.reg2mem = alloca i32*, !insn.addr !823
  %esi.0.reg2mem = alloca i32, !insn.addr !823
  %ebp.0.reg2mem = alloca i32, !insn.addr !823
  %stack_var_-24 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = mul i32 %arg1, 4, !insn.addr !824
  %3 = call i32* @malloc(i32 %2), !insn.addr !825
  %4 = icmp eq i32* %3, null, !insn.addr !826
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !827
  br i1 %4, label %dec_label_pc_2ef6, label %dec_label_pc_2e22, !insn.addr !827

dec_label_pc_2e22:                                ; preds = %dec_label_pc_2df0
  %5 = ptrtoint i32* %stack_var_-24 to i32, !insn.addr !828
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4204 to i32), i32 328), !insn.addr !829
  %7 = inttoptr i32 %6 to i32*, !insn.addr !829
  store i32 0, i32* %7, align 4, !insn.addr !829
  %8 = icmp slt i32 %arg1, 1
  br i1 %8, label %dec_label_pc_2e22.dec_label_pc_2e61_crit_edge, label %dec_label_pc_2e32, !insn.addr !830

dec_label_pc_2e22.dec_label_pc_2e61_crit_edge:    ; preds = %dec_label_pc_2e22
  %.pre = add i32 %5, -4, !insn.addr !831
  %.pre3 = inttoptr i32 %.pre to i32*, !insn.addr !831
  %.pre5 = add i32 %5, -8, !insn.addr !832
  %.pre7 = inttoptr i32 %.pre5 to i32*, !insn.addr !832
  %.pre9 = add i32 %5, -12, !insn.addr !833
  %.pre11 = inttoptr i32 %.pre9 to i32*, !insn.addr !833
  %.pre13 = add i32 %5, -16, !insn.addr !834
  %.pre15 = inttoptr i32 %.pre13 to i32*, !insn.addr !834
  store i32* %.pre15, i32** %.pre-phi16.reg2mem
  store i32* %.pre11, i32** %.pre-phi12.reg2mem
  store i32* %.pre7, i32** %.pre-phi8.reg2mem
  store i32* %.pre3, i32** %.pre-phi4.reg2mem
  br label %dec_label_pc_2e61

dec_label_pc_2e32:                                ; preds = %dec_label_pc_2e22
  %9 = ptrtoint i32* %3 to i32, !insn.addr !825
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4204 to i32), i32 -17024), !insn.addr !835
  %11 = add i32 %5, 36, !insn.addr !836
  %12 = add i32 %5, -4
  %13 = inttoptr i32 %12 to i32*
  %14 = add i32 %5, -8
  %15 = inttoptr i32 %14 to i32*
  %16 = add i32 %5, -12
  %17 = inttoptr i32 %16 to i32*
  %18 = add i32 %5, -16
  %19 = inttoptr i32 %18 to i32*
  store i32 %arg1, i32* %ebp.0.reg2mem, !insn.addr !837
  store i32 %9, i32* %esi.0.reg2mem, !insn.addr !837
  br label %dec_label_pc_2e40, !insn.addr !837

dec_label_pc_2e40:                                ; preds = %dec_label_pc_2e59, %dec_label_pc_2e32
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %ebp.0.reload = load i32, i32* %ebp.0.reg2mem
  store i32 %11, i32* %13, align 4, !insn.addr !838
  store i32 %10, i32* %15, align 4, !insn.addr !839
  store i32 0, i32* %17, align 4, !insn.addr !840
  store i32 %esi.0.reload, i32* %19, align 4, !insn.addr !841
  %20 = call i32 @pthread_create(i32* nonnull @0, i32* nonnull @0, i32* (i32*)* bitcast (i32* @0 to i32* (i32*)*), i32* nonnull @0), !insn.addr !842
  %21 = icmp eq i32 %20, 0, !insn.addr !843
  %22 = icmp eq i1 %21, false, !insn.addr !844
  br i1 %22, label %dec_label_pc_2ee2, label %dec_label_pc_2e59, !insn.addr !844

dec_label_pc_2e59:                                ; preds = %dec_label_pc_2e40
  %23 = add i32 %esi.0.reload, 4, !insn.addr !845
  %24 = add i32 %ebp.0.reload, -1, !insn.addr !846
  %25 = icmp eq i32 %24, 0, !insn.addr !846
  %26 = icmp eq i1 %25, false, !insn.addr !847
  store i32 %24, i32* %ebp.0.reg2mem, !insn.addr !847
  store i32 %23, i32* %esi.0.reg2mem, !insn.addr !847
  store i32* %19, i32** %.pre-phi16.reg2mem, !insn.addr !847
  store i32* %17, i32** %.pre-phi12.reg2mem, !insn.addr !847
  store i32* %15, i32** %.pre-phi8.reg2mem, !insn.addr !847
  store i32* %13, i32** %.pre-phi4.reg2mem, !insn.addr !847
  br i1 %26, label %dec_label_pc_2e40, label %dec_label_pc_2e61, !insn.addr !847

dec_label_pc_2e61:                                ; preds = %dec_label_pc_2e59, %dec_label_pc_2e22.dec_label_pc_2e61_crit_edge
  %.pre-phi4.reload = load i32*, i32** %.pre-phi4.reg2mem
  %.pre-phi8.reload = load i32*, i32** %.pre-phi8.reg2mem
  %.pre-phi12.reload = load i32*, i32** %.pre-phi12.reg2mem
  %.pre-phi16.reload = load i32*, i32** %.pre-phi16.reg2mem
  %27 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4204 to i32), i32 -16944), !insn.addr !848
  %28 = add i32 %5, 8, !insn.addr !849
  store i32 0, i32* %.pre-phi4.reload, align 4, !insn.addr !831
  store i32 %27, i32* %.pre-phi8.reload, align 4, !insn.addr !832
  store i32 0, i32* %.pre-phi12.reload, align 4, !insn.addr !833
  store i32 %28, i32* %.pre-phi16.reload, align 4, !insn.addr !834
  %29 = call i32 @pthread_create(i32* nonnull @0, i32* nonnull @0, i32* (i32*)* bitcast (i32* @0 to i32* (i32*)*), i32* nonnull @0), !insn.addr !850
  %30 = icmp eq i32 %29, 0, !insn.addr !851
  %31 = icmp eq i1 %30, false, !insn.addr !852
  br i1 %31, label %dec_label_pc_2e8e, label %dec_label_pc_2e7d, !insn.addr !852

dec_label_pc_2e7d:                                ; preds = %dec_label_pc_2e61
  store i32 0, i32* %.pre-phi12.reload, align 4, !insn.addr !853
  %32 = inttoptr i32 %28 to i32*, !insn.addr !854
  %33 = load i32, i32* %32, align 4, !insn.addr !854
  store i32 %33, i32* %.pre-phi16.reload, align 4, !insn.addr !854
  %34 = call i32 @pthread_join(i32 ptrtoint (i32* @0 to i32), i32** bitcast (i32* @0 to i32**)), !insn.addr !855
  br label %dec_label_pc_2e8e, !insn.addr !856

dec_label_pc_2e8e:                                ; preds = %dec_label_pc_2e7d, %dec_label_pc_2e61
  %35 = add i32 %5, 32, !insn.addr !857
  %36 = inttoptr i32 %35 to i32*, !insn.addr !857
  %37 = load i32, i32* %36, align 4, !insn.addr !857
  %38 = add i32 %5, 4, !insn.addr !858
  %39 = inttoptr i32 %38 to i32*, !insn.addr !858
  %40 = load i32, i32* %39, align 4, !insn.addr !858
  %41 = icmp slt i32 %37, 1
  store i32 0, i32* %esi.1.reg2mem, !insn.addr !859
  br i1 %41, label %dec_label_pc_2eb8, label %dec_label_pc_2ea0, !insn.addr !859

dec_label_pc_2ea0:                                ; preds = %dec_label_pc_2e8e, %dec_label_pc_2ea0
  %esi.1.reload = load i32, i32* %esi.1.reg2mem
  store i32 0, i32* %.pre-phi12.reload, align 4, !insn.addr !860
  %42 = mul i32 %esi.1.reload, 4, !insn.addr !861
  %43 = add i32 %42, %40, !insn.addr !861
  %44 = inttoptr i32 %43 to i32*, !insn.addr !861
  %45 = load i32, i32* %44, align 4, !insn.addr !861
  store i32 %45, i32* %.pre-phi16.reload, align 4, !insn.addr !861
  %46 = call i32 @pthread_join(i32 ptrtoint (i32* @0 to i32), i32** bitcast (i32* @0 to i32**)), !insn.addr !862
  %47 = add i32 %esi.1.reload, 1, !insn.addr !863
  %48 = icmp eq i32 %37, %47, !insn.addr !864
  %49 = icmp eq i1 %48, false, !insn.addr !865
  store i32 %47, i32* %esi.1.reg2mem, !insn.addr !865
  br i1 %49, label %dec_label_pc_2ea0, label %dec_label_pc_2eb8, !insn.addr !865

dec_label_pc_2eb8:                                ; preds = %dec_label_pc_2ea0, %dec_label_pc_2e8e
  %50 = load i32, i32* %7, align 4, !insn.addr !866
  store i32 %40, i32* %.pre-phi16.reload, align 4, !insn.addr !867
  call void @free(i32* nonnull @0), !insn.addr !868
  %51 = icmp eq i32 %50, 0, !insn.addr !869
  %52 = icmp slt i32 %50, 0, !insn.addr !869
  %53 = icmp eq i1 %52, false, !insn.addr !870
  %54 = icmp eq i1 %51, false, !insn.addr !870
  %55 = icmp eq i1 %53, %54, !insn.addr !870
  %56 = select i1 %55, i32 42, i32 -3, !insn.addr !870
  store i32 %56, i32* %eax.0.reg2mem, !insn.addr !871
  br label %dec_label_pc_2ef6, !insn.addr !871

dec_label_pc_2ee2:                                ; preds = %dec_label_pc_2e40
  %57 = add i32 %5, 4, !insn.addr !872
  %58 = inttoptr i32 %57 to i32*, !insn.addr !872
  %59 = load i32, i32* %58, align 4, !insn.addr !872
  store i32 %59, i32* %19, align 4, !insn.addr !872
  call void @free(i32* nonnull @0), !insn.addr !873
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !874
  br label %dec_label_pc_2ef6, !insn.addr !874

dec_label_pc_2ef6:                                ; preds = %dec_label_pc_2df0, %dec_label_pc_2ee2, %dec_label_pc_2eb8
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !875

; uselistorder directives
  uselistorder i32 %40, { 1, 0 }
  uselistorder i32* %.pre-phi16.reload, { 1, 0, 2, 3 }
  uselistorder i32 %esi.0.reload, { 1, 0 }
  uselistorder i32* %19, { 1, 0, 2 }
  uselistorder i32 %5, { 7, 4, 5, 6, 8, 9, 10, 11, 12, 0, 1, 2, 3 }
  uselistorder i32* %3, { 1, 0 }
  uselistorder i32 %1, { 2, 1, 0 }
  uselistorder i32* %ebp.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32 36, { 1, 0, 2, 3 }
  uselistorder i32 328, { 0, 2, 1 }
  uselistorder i32 %arg1, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2ef6, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2ea0, { 1, 0 }
}

define i32 @call_atomic_ops(i32 %arg1) local_unnamed_addr {
dec_label_pc_2f00:
  %0 = call i32 @param_atomic_ops(i32 4), !insn.addr !876
  ret i32 %0, !insn.addr !877
}

define i32 @thread_tls_test(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2f30:
  %0 = call i32 @__readgsdword(i32 -36), !insn.addr !878
  %1 = add i32 %0, 50, !insn.addr !879
  call void @__writegsdword(i32 -36, i32 %1), !insn.addr !880
  %2 = call i32 @__readgsdword(i32 0), !insn.addr !881
  %3 = add i32 %2, -32, !insn.addr !882
  %4 = inttoptr i32 %3 to i8*, !insn.addr !883
  %5 = inttoptr i32 %arg2 to i8*, !insn.addr !884
  %6 = call i8* @strncpy(i8* %4, i8* %5, i32 31), !insn.addr !884
  %7 = call i32* @malloc(i32 8), !insn.addr !885
  %8 = ptrtoint i32* %7 to i32, !insn.addr !885
  store i32 %0, i32* %7, align 4, !insn.addr !886
  %9 = add i32 %8, 4, !insn.addr !887
  %10 = inttoptr i32 %9 to i32*, !insn.addr !887
  store i32 %1, i32* %10, align 4, !insn.addr !887
  ret i32 %8, !insn.addr !888

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32 %0, { 1, 0 }
}

define i32 @param_thread_local_storage(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2f90:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !889
  %esi.3.reg2mem = alloca i32, !insn.addr !889
  %ebp.2.reg2mem = alloca i32, !insn.addr !889
  %edi.1.reg2mem = alloca i32, !insn.addr !889
  %edi.0.reg2mem = alloca i32, !insn.addr !889
  %esi.2.reg2mem = alloca i32, !insn.addr !889
  %ebp.1.reg2mem = alloca i32, !insn.addr !889
  %esi.1.reg2mem = alloca i32, !insn.addr !889
  %ebp.0.reg2mem = alloca i32, !insn.addr !889
  %esi.0.reg2mem = alloca i32, !insn.addr !889
  %1 = load i32, i32* %0
  %stack_var_-16 = alloca i32, align 4
  %2 = mul i32 %arg2, 4, !insn.addr !890
  %3 = call i32* @malloc(i32 %2), !insn.addr !891
  %4 = call i32* @malloc(i32 %2), !insn.addr !892
  %5 = icmp eq i32* %3, null, !insn.addr !893
  %6 = icmp eq i32* %4, null, !insn.addr !894
  %or.cond = or i1 %5, %6
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !895
  br i1 %or.cond, label %dec_label_pc_313a, label %dec_label_pc_2fdb, !insn.addr !895

dec_label_pc_2fdb:                                ; preds = %dec_label_pc_2f90
  %7 = icmp slt i32 %arg2, 1
  store i32 0, i32* %ebp.2.reg2mem, !insn.addr !896
  store i32 0, i32* %esi.3.reg2mem, !insn.addr !896
  br i1 %7, label %dec_label_pc_3102, label %dec_label_pc_2fe3, !insn.addr !896

dec_label_pc_2fe3:                                ; preds = %dec_label_pc_2fdb
  %8 = ptrtoint i32* %4 to i32, !insn.addr !892
  %9 = ptrtoint i32* %3 to i32
  %10 = add i32 %1, add (i32 ptrtoint ([16 x i8]* @global_var_4064 to i32), i32 -11591), !insn.addr !897
  %11 = inttoptr i32 %10 to i8*
  store i32 0, i32* %esi.0.reg2mem, !insn.addr !898
  br label %dec_label_pc_2ff0, !insn.addr !898

dec_label_pc_2ff0:                                ; preds = %dec_label_pc_2ff0, %dec_label_pc_2fe3
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %12 = call i32* @malloc(i32 16), !insn.addr !899
  %13 = ptrtoint i32* %12 to i32, !insn.addr !899
  %14 = mul i32 %esi.0.reload, 4, !insn.addr !900
  %15 = add i32 %14, %8, !insn.addr !900
  %16 = inttoptr i32 %15 to i32*, !insn.addr !900
  store i32 %13, i32* %16, align 4, !insn.addr !900
  %17 = bitcast i32* %12 to i8*
  %18 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %17, i32 16, i8* %11), !insn.addr !901
  %19 = add i32 %esi.0.reload, 1, !insn.addr !902
  %20 = icmp eq i32 %19, %arg2, !insn.addr !903
  %21 = icmp eq i1 %20, false, !insn.addr !904
  store i32 %19, i32* %esi.0.reg2mem, !insn.addr !904
  br i1 %21, label %dec_label_pc_2ff0, label %dec_label_pc_3026, !insn.addr !904

dec_label_pc_3026:                                ; preds = %dec_label_pc_2ff0
  %22 = add i32 %1, add (i32 ptrtoint ([16 x i8]* @global_var_4064 to i32), i32 -16592), !insn.addr !905
  %23 = inttoptr i32 %22 to i32* (i32*)*, !insn.addr !906
  store i32 %9, i32* %ebp.0.reg2mem, !insn.addr !907
  store i32 0, i32* %esi.1.reg2mem, !insn.addr !907
  br label %dec_label_pc_3040, !insn.addr !907

dec_label_pc_3040:                                ; preds = %dec_label_pc_3063, %dec_label_pc_3026
  %esi.1.reload = load i32, i32* %esi.1.reg2mem
  %ebp.0.reload = load i32, i32* %ebp.0.reg2mem
  %24 = mul i32 %esi.1.reload, 4, !insn.addr !908
  %25 = add i32 %24, %8, !insn.addr !908
  %26 = inttoptr i32 %25 to i32*, !insn.addr !908
  %27 = load i32, i32* %26, align 4, !insn.addr !908
  %28 = inttoptr i32 %ebp.0.reload to i32*
  %29 = inttoptr i32 %27 to i32*, !insn.addr !906
  %30 = call i32 @pthread_create(i32* %28, i32* null, i32* (i32*)* %23, i32* %29), !insn.addr !906
  %31 = icmp eq i32 %30, 0, !insn.addr !909
  %32 = icmp eq i1 %31, false, !insn.addr !910
  br i1 %32, label %dec_label_pc_30d0.preheader, label %dec_label_pc_3063, !insn.addr !910

dec_label_pc_30d0.preheader:                      ; preds = %dec_label_pc_3040
  %33 = add i32 %8, 4, !insn.addr !911
  store i32 -1, i32* %edi.1.reg2mem
  br label %dec_label_pc_30d0

dec_label_pc_3063:                                ; preds = %dec_label_pc_3040
  %34 = add i32 %esi.1.reload, 1, !insn.addr !912
  %35 = add i32 %ebp.0.reload, 4, !insn.addr !913
  %36 = icmp eq i32 %34, %arg2, !insn.addr !914
  %37 = icmp eq i1 %36, false, !insn.addr !915
  store i32 %35, i32* %ebp.0.reg2mem, !insn.addr !915
  store i32 %34, i32* %esi.1.reg2mem, !insn.addr !915
  br i1 %37, label %dec_label_pc_3040, label %dec_label_pc_3080.preheader, !insn.addr !915

dec_label_pc_3080.preheader:                      ; preds = %dec_label_pc_3063
  %38 = bitcast i32* %stack_var_-16 to i32**, !insn.addr !916
  store i32 0, i32* %ebp.1.reg2mem
  store i32 0, i32* %esi.2.reg2mem
  store i32 0, i32* %edi.0.reg2mem
  br label %dec_label_pc_3080

dec_label_pc_3080:                                ; preds = %dec_label_pc_3080.preheader, %dec_label_pc_3080
  %edi.0.reload = load i32, i32* %edi.0.reg2mem
  %esi.2.reload = load i32, i32* %esi.2.reg2mem
  %ebp.1.reload = load i32, i32* %ebp.1.reg2mem
  %39 = mul i32 %edi.0.reload, 4, !insn.addr !917
  %40 = add i32 %39, %9, !insn.addr !917
  %41 = inttoptr i32 %40 to i32*, !insn.addr !917
  %42 = load i32, i32* %41, align 4, !insn.addr !917
  %43 = call i32 @pthread_join(i32 %42, i32** nonnull %38), !insn.addr !916
  %44 = load i32, i32* %stack_var_-16, align 4, !insn.addr !918
  %45 = add i32 %esi.2.reload, %ebp.1.reload, !insn.addr !919
  %46 = add i32 %44, 4, !insn.addr !920
  %47 = inttoptr i32 %46 to i32*, !insn.addr !920
  %48 = load i32, i32* %47, align 4, !insn.addr !920
  %49 = add i32 %48, %esi.2.reload, !insn.addr !920
  %50 = inttoptr i32 %44 to i32*
  call void @free(i32* %50), !insn.addr !921
  %51 = add i32 %39, %8, !insn.addr !922
  %52 = inttoptr i32 %51 to i32*, !insn.addr !922
  %53 = load i32, i32* %52, align 4, !insn.addr !922
  %54 = inttoptr i32 %53 to i32*
  call void @free(i32* %54), !insn.addr !923
  %55 = add i32 %edi.0.reload, 1, !insn.addr !924
  %56 = icmp eq i32 %55, %arg2, !insn.addr !925
  %57 = icmp eq i1 %56, false, !insn.addr !926
  store i32 %45, i32* %ebp.1.reg2mem, !insn.addr !926
  store i32 %49, i32* %esi.2.reg2mem, !insn.addr !926
  store i32 %55, i32* %edi.0.reg2mem, !insn.addr !926
  store i32 %45, i32* %ebp.2.reg2mem, !insn.addr !926
  store i32 %49, i32* %esi.3.reg2mem, !insn.addr !926
  br i1 %57, label %dec_label_pc_3080, label %dec_label_pc_3102, !insn.addr !926

dec_label_pc_30d0:                                ; preds = %dec_label_pc_30d0.preheader, %dec_label_pc_30d0
  %edi.1.reload = load i32, i32* %edi.1.reg2mem
  %58 = mul i32 %edi.1.reload, 4, !insn.addr !911
  %59 = add i32 %33, %58, !insn.addr !911
  %60 = inttoptr i32 %59 to i32*, !insn.addr !911
  %61 = load i32, i32* %60, align 4, !insn.addr !911
  %62 = inttoptr i32 %61 to i32*
  call void @free(i32* %62), !insn.addr !927
  %63 = add i32 %edi.1.reload, 1, !insn.addr !928
  %64 = icmp eq i32 %esi.1.reload, %63, !insn.addr !929
  %65 = icmp eq i1 %64, false, !insn.addr !930
  store i32 %63, i32* %edi.1.reg2mem, !insn.addr !930
  br i1 %65, label %dec_label_pc_30d0, label %dec_label_pc_30e3, !insn.addr !930

dec_label_pc_30e3:                                ; preds = %dec_label_pc_30d0
  call void @free(i32* nonnull %4), !insn.addr !931
  call void @free(i32* %3), !insn.addr !932
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !933
  br label %dec_label_pc_313a, !insn.addr !933

dec_label_pc_3102:                                ; preds = %dec_label_pc_3080, %dec_label_pc_2fdb
  %esi.3.reload = load i32, i32* %esi.3.reg2mem
  %ebp.2.reload = load i32, i32* %ebp.2.reg2mem
  call void @free(i32* nonnull %4), !insn.addr !934
  call void @free(i32* %3), !insn.addr !935
  %66 = mul i32 %arg2, 100, !insn.addr !936
  %67 = mul i32 %arg2, 150, !insn.addr !937
  %68 = icmp eq i32 %67, %esi.3.reload
  %69 = icmp eq i32 %66, %ebp.2.reload
  %70 = icmp eq i1 %69, %68, !insn.addr !938
  %71 = select i1 %70, i32 42, i32 -3, !insn.addr !939
  store i32 %71, i32* %eax.0.reg2mem, !insn.addr !939
  br label %dec_label_pc_313a, !insn.addr !939

dec_label_pc_313a:                                ; preds = %dec_label_pc_3102, %dec_label_pc_30e3, %dec_label_pc_2f90
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !940

; uselistorder directives
  uselistorder i32 %39, { 1, 0 }
  uselistorder i32 %esi.2.reload, { 1, 0 }
  uselistorder i32 %ebp.0.reload, { 1, 0 }
  uselistorder i32 %esi.1.reload, { 1, 0, 2 }
  uselistorder i32 %9, { 1, 0 }
  uselistorder i32 %8, { 0, 3, 1, 2 }
  uselistorder i32* %4, { 2, 1, 3, 0 }
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32* %stack_var_-16, { 1, 0 }
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32* %esi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ebp.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ebp.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %esi.2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edi.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edi.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.0.reg2mem, { 0, 2, 1, 3 }
  uselistorder i32 -3, { 5, 6, 7, 0, 1, 2, 8, 3, 9, 4 }
  uselistorder i32 42, { 3, 4, 5, 6, 0, 7, 2, 8, 9, 1, 10, 11, 13, 12, 14 }
  uselistorder i32* (i32)* @malloc, { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 11 }
  uselistorder i32 %arg2, { 6, 5, 1, 2, 3, 4, 0 }
  uselistorder label %dec_label_pc_30d0, { 1, 0 }
  uselistorder label %dec_label_pc_3080, { 1, 0 }
}

define i32 @call_thread_local_storage(i32 %arg1) local_unnamed_addr {
dec_label_pc_3150:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @param_thread_local_storage(i32 4, i32 %1), !insn.addr !941
  ret i32 %2, !insn.addr !942
}

define i32 @test_thread_concurrency() local_unnamed_addr {
dec_label_pc_3180:
  %0 = alloca i32
  %esi.2.reg2mem = alloca i32, !insn.addr !943
  %edi.1.reg2mem = alloca i32, !insn.addr !943
  %esi.1.reg2mem = alloca i32, !insn.addr !943
  %ebp.0.reg2mem = alloca i32, !insn.addr !943
  %edi.0.reg2mem = alloca i32, !insn.addr !943
  %esi.0.reg2mem = alloca i32, !insn.addr !943
  %stack_var_-68 = alloca i8*, align 4
  %stack_var_-64 = alloca i32, align 4
  %stack_var_-24 = alloca i32, align 4
  %stack_var_-72 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = add i32 %1, 4639, !insn.addr !944
  %3 = inttoptr i32 %2 to i8*, !insn.addr !945
  %4 = call i32 @puts(i8* %3), !insn.addr !946
  store i32 7, i32* %stack_var_-24, align 4, !insn.addr !947
  %5 = add i32 %1, -2668, !insn.addr !948
  %6 = inttoptr i32 %5 to i32* (i32*)*, !insn.addr !949
  %7 = call i32 @pthread_create(i32* nonnull %stack_var_-64, i32* null, i32* (i32*)* %6, i32* nonnull %stack_var_-24), !insn.addr !950
  %8 = icmp eq i32 %7, 0, !insn.addr !951
  %9 = icmp eq i1 %8, false, !insn.addr !952
  br i1 %9, label %dec_label_pc_31f7, label %dec_label_pc_31d1, !insn.addr !952

dec_label_pc_31d1:                                ; preds = %dec_label_pc_3180
  %10 = load i32, i32* %stack_var_-64, align 4, !insn.addr !953
  %11 = bitcast i8** %stack_var_-68 to i32**, !insn.addr !954
  %12 = call i32 @pthread_join(i32 %10, i32** nonnull %11), !insn.addr !954
  %13 = load i8*, i8** %stack_var_-68, align 4, !insn.addr !955
  %14 = bitcast i8* %13 to i32*
  call void @free(i32* %14), !insn.addr !956
  br label %dec_label_pc_31f7, !insn.addr !957

dec_label_pc_31f7:                                ; preds = %dec_label_pc_31d1, %dec_label_pc_3180
  %15 = ptrtoint i32* %stack_var_-64 to i32, !insn.addr !958
  %16 = ptrtoint i32* %stack_var_-72 to i32, !insn.addr !959
  %17 = add i32 %1, 4407, !insn.addr !960
  %18 = inttoptr i32 %17 to i8*, !insn.addr !961
  %19 = call i32 (i8*, ...) @printf(i8* %18), !insn.addr !962
  store i32 1, i32* %stack_var_-64, align 4, !insn.addr !963
  %20 = add i32 %1, -2396, !insn.addr !964
  %21 = add i32 %16, 48
  %22 = add i32 %16, -4, !insn.addr !965
  %23 = inttoptr i32 %22 to i32*, !insn.addr !965
  %24 = add i32 %16, -8, !insn.addr !966
  %25 = inttoptr i32 %24 to i32*, !insn.addr !966
  %26 = add i32 %16, -12, !insn.addr !967
  %27 = inttoptr i32 %26 to i32*
  %28 = add i32 %16, -16, !insn.addr !968
  %29 = inttoptr i32 %28 to i32*
  store i32 %15, i32* %esi.0.reg2mem, !insn.addr !969
  store i32 0, i32* %edi.0.reg2mem, !insn.addr !969
  br label %dec_label_pc_3260, !insn.addr !969

dec_label_pc_3260:                                ; preds = %dec_label_pc_3277, %dec_label_pc_31f7
  %edi.0.reload = load i32, i32* %edi.0.reg2mem
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %30 = add i32 %edi.0.reload, %21, !insn.addr !970
  store i32 %esi.0.reload, i32* %23, align 4, !insn.addr !965
  store i32 %20, i32* %25, align 4, !insn.addr !966
  store i32 0, i32* %27, align 4, !insn.addr !967
  store i32 %30, i32* %29, align 4, !insn.addr !968
  %31 = call i32 @pthread_create(i32* nonnull @0, i32* nonnull @0, i32* (i32*)* bitcast (i32* @0 to i32* (i32*)*), i32* nonnull @0), !insn.addr !971
  %32 = icmp eq i32 %31, 0, !insn.addr !972
  %33 = icmp eq i1 %32, false, !insn.addr !973
  store i32 -1, i32* %esi.2.reg2mem, !insn.addr !973
  br i1 %33, label %dec_label_pc_32c0, label %dec_label_pc_3277, !insn.addr !973

dec_label_pc_3277:                                ; preds = %dec_label_pc_3260
  %34 = add nuw nsw i32 %edi.0.reload, 4, !insn.addr !974
  %35 = add i32 %esi.0.reload, 12, !insn.addr !975
  %36 = icmp eq i32 %edi.0.reload, 8, !insn.addr !976
  %37 = icmp eq i1 %36, false, !insn.addr !977
  store i32 %35, i32* %esi.0.reg2mem, !insn.addr !977
  store i32 %34, i32* %edi.0.reg2mem, !insn.addr !977
  br i1 %37, label %dec_label_pc_3260, label %dec_label_pc_3282, !insn.addr !977

dec_label_pc_3282:                                ; preds = %dec_label_pc_3277
  %38 = add i32 %16, 16, !insn.addr !978
  store i32 0, i32* %ebp.0.reg2mem, !insn.addr !979
  store i32 0, i32* %esi.1.reg2mem, !insn.addr !979
  store i32 %38, i32* %edi.1.reg2mem, !insn.addr !979
  br label %dec_label_pc_3290, !insn.addr !979

dec_label_pc_3290:                                ; preds = %dec_label_pc_32a5, %dec_label_pc_3282
  %edi.1.reload = load i32, i32* %edi.1.reg2mem
  %esi.1.reload = load i32, i32* %esi.1.reg2mem
  %ebp.0.reload = load i32, i32* %ebp.0.reg2mem
  store i32 0, i32* %27, align 4, !insn.addr !980
  %39 = mul i32 %ebp.0.reload, 4, !insn.addr !981
  %40 = add i32 %39, %21, !insn.addr !981
  %41 = inttoptr i32 %40 to i32*, !insn.addr !981
  %42 = load i32, i32* %41, align 4, !insn.addr !981
  store i32 %42, i32* %29, align 4, !insn.addr !981
  %43 = call i32 @pthread_join(i32 ptrtoint (i32* @0 to i32), i32** bitcast (i32* @0 to i32**)), !insn.addr !982
  %44 = icmp eq i32 %43, 0, !insn.addr !983
  %45 = icmp eq i1 %44, false, !insn.addr !984
  store i32 -2, i32* %esi.2.reg2mem, !insn.addr !984
  br i1 %45, label %dec_label_pc_32c0, label %dec_label_pc_32a5, !insn.addr !984

dec_label_pc_32a5:                                ; preds = %dec_label_pc_3290
  %46 = inttoptr i32 %edi.1.reload to i32*, !insn.addr !985
  %47 = load i32, i32* %46, align 4, !insn.addr !985
  %48 = add i32 %47, %esi.1.reload, !insn.addr !985
  %49 = add nuw nsw i32 %ebp.0.reload, 1, !insn.addr !986
  %50 = add i32 %edi.1.reload, 12, !insn.addr !987
  %51 = icmp eq i32 %ebp.0.reload, 2, !insn.addr !988
  %52 = icmp eq i1 %51, false, !insn.addr !989
  store i32 %49, i32* %ebp.0.reg2mem, !insn.addr !989
  store i32 %48, i32* %esi.1.reg2mem, !insn.addr !989
  store i32 %50, i32* %edi.1.reg2mem, !insn.addr !989
  store i32 %48, i32* %esi.2.reg2mem, !insn.addr !989
  br i1 %52, label %dec_label_pc_3290, label %dec_label_pc_32c0, !insn.addr !989

dec_label_pc_32c0:                                ; preds = %dec_label_pc_3260, %dec_label_pc_3290, %dec_label_pc_32a5
  %esi.2.reload = load i32, i32* %esi.2.reg2mem
  %53 = add i32 %1, 4435, !insn.addr !990
  store i32 %esi.2.reload, i32* %27, align 4, !insn.addr !991
  store i32 %53, i32* %29, align 4, !insn.addr !992
  %54 = call i32 (i8*, ...) @printf(i8* bitcast (i32* @0 to i8*)), !insn.addr !993
  store i32 ptrtoint (i32* @global_var_3e8 to i32), i32* %27, align 4, !insn.addr !994
  store i32 4, i32* %29, align 4, !insn.addr !995
  %55 = call i32 @param_mutex_lock(i32 ptrtoint (i32* @0 to i32)), !insn.addr !996
  %56 = add i32 %1, 4464, !insn.addr !997
  store i32 %55, i32* %27, align 4, !insn.addr !998
  store i32 %56, i32* %29, align 4, !insn.addr !999
  %57 = call i32 (i8*, ...) @printf(i8* bitcast (i32* @0 to i8*)), !insn.addr !1000
  %58 = call i32 @param_condition_variable(i32 ptrtoint (i32* @0 to i32)), !insn.addr !1001
  %59 = add i32 %1, 4492, !insn.addr !1002
  store i32 %58, i32* %27, align 4, !insn.addr !1003
  store i32 %59, i32* %29, align 4, !insn.addr !1004
  %60 = call i32 (i8*, ...) @printf(i8* bitcast (i32* @0 to i8*)), !insn.addr !1005
  store i32 ptrtoint (i32* @global_var_1f4 to i32), i32* %27, align 4, !insn.addr !1006
  store i32 4, i32* %29, align 4, !insn.addr !1007
  %61 = call i32 @param_atomic_ops(i32 ptrtoint (i32* @0 to i32)), !insn.addr !1008
  %62 = add i32 %1, 4520, !insn.addr !1009
  store i32 %61, i32* %27, align 4, !insn.addr !1010
  store i32 %62, i32* %29, align 4, !insn.addr !1011
  %63 = call i32 (i8*, ...) @printf(i8* bitcast (i32* @0 to i8*)), !insn.addr !1012
  store i32 4, i32* %29, align 4, !insn.addr !1013
  %64 = call i32 @param_thread_local_storage(i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !1014
  %65 = add i32 %1, 4548, !insn.addr !1015
  store i32 %64, i32* %27, align 4, !insn.addr !1016
  store i32 %65, i32* %29, align 4, !insn.addr !1017
  %66 = call i32 (i8*, ...) @printf(i8* bitcast (i32* @0 to i8*)), !insn.addr !1018
  ret i32 %66, !insn.addr !1019

; uselistorder directives
  uselistorder i32 %edi.1.reload, { 1, 0 }
  uselistorder i32 %esi.0.reload, { 1, 0 }
  uselistorder i32* %29, { 7, 6, 5, 4, 3, 2, 1, 0, 8, 9 }
  uselistorder i32* %27, { 6, 5, 4, 3, 2, 1, 0, 7, 8 }
  uselistorder i32 %16, { 5, 1, 2, 3, 4, 0 }
  uselistorder i32 %1, { 8, 7, 6, 5, 4, 3, 2, 0, 1 }
  uselistorder i32* %stack_var_-64, { 1, 3, 2, 0 }
  uselistorder i8** %stack_var_-68, { 1, 0 }
  uselistorder i32* %esi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ebp.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edi.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.2.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32 (i32, i32)* @param_thread_local_storage, { 1, 0 }
  uselistorder i32 (i32)* @param_atomic_ops, { 1, 0 }
  uselistorder i32 (i32)* @param_condition_variable, { 1, 0 }
  uselistorder i32 (i32)* @param_mutex_lock, { 1, 0 }
  uselistorder i32 ptrtoint (i32* @global_var_3e8 to i32), { 4, 5, 1, 2, 3, 0 }
  uselistorder i32 2, { 1, 2, 3, 0, 4, 5, 10, 6, 7, 8, 9 }
  uselistorder i32 -2, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 14, 12 }
  uselistorder i32 16, { 3, 2, 0, 4, 5, 1 }
  uselistorder i32 8, { 0, 1, 5, 2, 3, 4, 6, 7 }
  uselistorder i32 12, { 5, 6, 7, 8, 9, 10, 11, 3, 4, 12, 1, 2, 0 }
  uselistorder i32 4, { 26, 27, 28, 0, 29, 17, 1, 31, 2, 32, 30, 3, 4, 5, 33, 18, 19, 6, 34, 35, 7, 20, 21, 22, 8, 36, 37, 16, 9, 10, 38, 11, 39, 40, 23, 41, 24, 12, 42, 13, 43, 14, 15, 25 }
  uselistorder i32 -16, { 2, 3, 0, 1, 4, 5, 6 }
  uselistorder i32 -12, { 1, 2, 0, 3, 4, 5 }
  uselistorder i32 -8, { 1, 2, 0, 3, 4, 5 }
  uselistorder i32 (i8*, ...)* @printf, { 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 28 }
  uselistorder void (i32*)* @free, { 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 18 }
  uselistorder i32 (i32, i32**)* @pthread_join, { 0, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 12 }
  uselistorder i32 (i32*, i32*, i32* (i32*)*, i32*)* @pthread_create, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder i32* null, { 1, 3, 0, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
  uselistorder label %dec_label_pc_32c0, { 2, 1, 0 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_3350:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @test_standard_library_functions(i32 %1), !insn.addr !1020
  %3 = call i32 @test_system_calls(i32 ptrtoint (i32* @0 to i32)), !insn.addr !1021
  %4 = call i32 @test_thread_concurrency(), !insn.addr !1022
  ret i32 0, !insn.addr !1023

; uselistorder directives
  uselistorder i32 0, { 29, 57, 58, 0, 1, 59, 60, 2, 61, 5, 6, 7, 62, 8, 9, 3, 4, 39, 63, 64, 65, 10, 66, 67, 68, 69, 70, 71, 72, 51, 30, 31, 11, 73, 74, 32, 52, 75, 12, 76, 77, 78, 79, 33, 80, 81, 82, 13, 14, 83, 84, 15, 85, 86, 16, 17, 87, 88, 18, 34, 28, 89, 90, 91, 40, 93, 92, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 41, 42, 105, 106, 107, 108, 109, 110, 111, 43, 44, 55, 112, 113, 45, 56, 115, 114, 116, 38, 117, 46, 119, 118, 120, 47, 122, 121, 123, 124, 125, 126, 127, 128, 53, 129, 54, 130, 19, 20, 48, 49, 35, 21, 22, 23, 24, 131, 50, 25, 26, 27, 132, 133, 134, 135, 136, 137, 138, 36, 139, 140, 37 }
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_3380:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !1024
  %ebx.0.reg2mem = alloca i32, !insn.addr !1024
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !1025
  %3 = add i32 %1, 15235, !insn.addr !1026
  %4 = inttoptr i32 %3 to i32*, !insn.addr !1026
  %5 = load i32, i32* %4, align 4, !insn.addr !1026
  %6 = icmp eq i32 %5, -1, !insn.addr !1027
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !1028
  store i32 -1, i32* %merge.reg2mem, !insn.addr !1028
  br i1 %6, label %dec_label_pc_33bd, label %dec_label_pc_33b0, !insn.addr !1028

dec_label_pc_33b0:                                ; preds = %dec_label_pc_3380, %dec_label_pc_33b0
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !1029
  %8 = inttoptr i32 %7 to i32*, !insn.addr !1029
  %9 = load i32, i32* %8, align 4, !insn.addr !1029
  %10 = icmp eq i32 %9, -1, !insn.addr !1030
  %11 = icmp eq i1 %10, false, !insn.addr !1031
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !1031
  store i32 %9, i32* %merge.reg2mem, !insn.addr !1031
  br i1 %11, label %dec_label_pc_33b0, label %dec_label_pc_33bd, !insn.addr !1031

dec_label_pc_33bd:                                ; preds = %dec_label_pc_33b0, %dec_label_pc_3380
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !1032

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 65, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 2, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 3, 47, 4, 48, 49, 50, 51, 0, 52, 53, 1, 54, 55, 56, 57, 58, 59, 5, 60, 6, 61, 62, 63, 64 }
  uselistorder i32 -4, { 9, 2, 3, 1, 4, 5, 6, 0, 7, 8 }
  uselistorder i32 -1, { 26, 0, 27, 1, 3, 2, 37, 4, 5, 38, 6, 39, 7, 8, 9, 10, 40, 41, 11, 28, 32, 29, 12, 13, 14, 15, 25, 18, 16, 17, 19, 33, 34, 30, 31, 20, 21, 22, 23, 24, 35, 36 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder i32* @0, { 0, 24, 25, 26, 8, 7, 21, 22, 23, 18, 19, 20, 6, 5, 15, 16, 17, 12, 13, 14, 1, 9, 10, 11, 2, 4, 3 }
  uselistorder label %dec_label_pc_33b0, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_33cc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !1033
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !1034
  ret i32 %3, !insn.addr !1035

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 1, 0 }
  uselistorder i32 1, { 46, 48, 47, 45, 44, 189, 153, 156, 155, 154, 142, 54, 53, 52, 51, 50, 49, 43, 42, 190, 191, 192, 193, 128, 157, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 41, 194, 129, 130, 158, 72, 71, 70, 69, 68, 67, 66, 65, 40, 195, 196, 131, 74, 73, 39, 38, 161, 160, 159, 75, 37, 132, 36, 35, 197, 133, 162, 82, 81, 80, 79, 78, 77, 76, 34, 198, 134, 83, 33, 199, 163, 165, 164, 89, 88, 87, 86, 85, 84, 32, 200, 166, 168, 167, 95, 94, 93, 92, 91, 90, 31, 201, 127, 171, 170, 169, 96, 30, 174, 173, 172, 97, 29, 143, 28, 27, 202, 135, 102, 101, 100, 99, 98, 26, 103, 25, 136, 176, 137, 177, 175, 104, 24, 180, 179, 178, 105, 23, 144, 106, 22, 145, 107, 21, 181, 20, 182, 19, 108, 109, 203, 146, 183, 112, 111, 110, 18, 204, 184, 113, 205, 116, 115, 114, 119, 118, 117, 206, 122, 121, 120, 17, 138, 139, 186, 147, 185, 123, 0, 124, 16, 125, 15, 14, 13, 12, 11, 149, 148, 10, 150, 140, 151, 141, 187, 9, 8, 126, 7, 6, 5, 4, 188, 3, 2, 1, 152 }
}

declare i32 @setsockopt(i32, i32, i32, i32*, i32) local_unnamed_addr

declare i32 @pthread_mutex_unlock(i32*) local_unnamed_addr

declare i32 @raise(i32) local_unnamed_addr

declare i8* @strstr(i8*, i8*) local_unnamed_addr

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @read(i32, i32*, i32) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare void @_exit(i32) local_unnamed_addr

declare void @free(i32*) local_unnamed_addr

declare i32* @memcpy(i32*, i32*, i32) local_unnamed_addr

declare i32 @shmget(i32, i32, i32) local_unnamed_addr

declare i32 @fclose(%_IO_FILE*) local_unnamed_addr

declare i32 @pthread_cond_wait(i32*, i32*) local_unnamed_addr

declare void (i32)* @signal(i32, void (i32)*) local_unnamed_addr

declare i32 @memcmp(i32*, i32*, i32) local_unnamed_addr

declare i32 @sleep(i32) local_unnamed_addr

declare i32 @alarm(i32) local_unnamed_addr

declare void @rewind(%_IO_FILE*) local_unnamed_addr

declare i32 @wait(i32) local_unnamed_addr

declare i32* @shmat(i32, i32*, i32) local_unnamed_addr

declare i32 @pthread_mutex_lock(i32*) local_unnamed_addr

declare i32 @unlink(i8*) local_unnamed_addr

declare i32 @fwrite(i32*, i32, i32, %_IO_FILE*) local_unnamed_addr

declare i32 @waitpid(i32, i32*, i32) local_unnamed_addr

declare i32 @usleep(i32) local_unnamed_addr

declare i32 @fread(i32*, i32, i32, %_IO_FILE*) local_unnamed_addr

declare i8* @strcpy(i8*, i8*) local_unnamed_addr

declare i32 @shmctl(i32, i32, %shmid_ds*) local_unnamed_addr

declare i32 @pthread_cond_signal(i32*) local_unnamed_addr

declare i32* @malloc(i32) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @stat(i8*, %stat*) local_unnamed_addr

declare i32 @open(i8*, i32, ...) local_unnamed_addr

declare i8* @strchr(i8*, i32) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i32 @bcmp(i32*, i32*, i32) local_unnamed_addr

declare i32 @write(i32, i32*, i32) local_unnamed_addr

declare i32 @bind(i32, %sockaddr*, i32) local_unnamed_addr

declare i32 @sscanf(i8*, i8*, ...) local_unnamed_addr

declare %_IO_FILE* @fopen(i8*, i8*) local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

declare i32 @snprintf(i8*, i32, i8*, ...) local_unnamed_addr

declare i32* @__errno_location() local_unnamed_addr

declare i8* @strncpy(i8*, i8*, i32) local_unnamed_addr

declare i32 @syscall(i32, ...) local_unnamed_addr

declare i32 @fileno(%_IO_FILE*) local_unnamed_addr

declare i32 @execl(i8*, i8*, ...) local_unnamed_addr

declare i32 @pipe([2 x i32]) local_unnamed_addr

declare i32 @shmdt(i32*) local_unnamed_addr

declare i32 @pthread_create(i32*, i32*, i32* (i32*)*, i32*) local_unnamed_addr

declare i32 @fork() local_unnamed_addr

declare i32 @listen(i32, i32) local_unnamed_addr

declare i32 @ftok(i8*, i32) local_unnamed_addr

declare i32 @socket(i32, i32, i32) local_unnamed_addr

declare i32 @pthread_join(i32, i32**) local_unnamed_addr

declare i32 @pthread_cancel(i32) local_unnamed_addr

declare i32 @close(i32) local_unnamed_addr

declare i32 @__asm_hlt() local_unnamed_addr

declare i32 @__readgsdword(i32) local_unnamed_addr

declare void @__writegsdword(i32, i32) local_unnamed_addr

!0 = !{i64 4104}
!1 = !{i64 4127}
!2 = !{i64 4132}
!3 = !{i64 4141}
!4 = !{i64 4160}
!5 = !{i64 4176}
!6 = !{i64 4192}
!7 = !{i64 4208}
!8 = !{i64 4224}
!9 = !{i64 4240}
!10 = !{i64 4256}
!11 = !{i64 4272}
!12 = !{i64 4288}
!13 = !{i64 4304}
!14 = !{i64 4320}
!15 = !{i64 4336}
!16 = !{i64 4352}
!17 = !{i64 4368}
!18 = !{i64 4384}
!19 = !{i64 4400}
!20 = !{i64 4416}
!21 = !{i64 4432}
!22 = !{i64 4448}
!23 = !{i64 4464}
!24 = !{i64 4480}
!25 = !{i64 4496}
!26 = !{i64 4512}
!27 = !{i64 4528}
!28 = !{i64 4544}
!29 = !{i64 4560}
!30 = !{i64 4576}
!31 = !{i64 4592}
!32 = !{i64 4608}
!33 = !{i64 4624}
!34 = !{i64 4640}
!35 = !{i64 4656}
!36 = !{i64 4672}
!37 = !{i64 4688}
!38 = !{i64 4704}
!39 = !{i64 4720}
!40 = !{i64 4736}
!41 = !{i64 4752}
!42 = !{i64 4768}
!43 = !{i64 4784}
!44 = !{i64 4800}
!45 = !{i64 4816}
!46 = !{i64 4832}
!47 = !{i64 4848}
!48 = !{i64 4864}
!49 = !{i64 4880}
!50 = !{i64 4896}
!51 = !{i64 4912}
!52 = !{i64 4928}
!53 = !{i64 4944}
!54 = !{i64 4960}
!55 = !{i64 4976}
!56 = !{i64 4992}
!57 = !{i64 5008}
!58 = !{i64 5024}
!59 = !{i64 5040}
!60 = !{i64 5056}
!61 = !{i64 5072}
!62 = !{i64 5088}
!63 = !{i64 5119}
!64 = !{i64 5136}
!65 = !{i64 5142}
!66 = !{i64 5147}
!67 = !{i64 5151}
!68 = !{i64 5155}
!69 = !{i64 5168}
!70 = !{i64 5185}
!71 = !{i64 5224}
!72 = !{i64 5232}
!73 = !{i64 5302}
!74 = !{i64 5312}
!75 = !{i64 5320}
!76 = !{i64 5336}
!77 = !{i64 5343}
!78 = !{i64 5345}
!79 = !{i64 5351}
!80 = !{i64 5353}
!81 = !{i64 5366}
!82 = !{i64 5371}
!83 = !{i64 5430}
!84 = !{i64 5435}
!85 = !{i64 5449}
!86 = !{i64 5460}
!87 = !{i64 5468}
!88 = !{i64 5472}
!89 = !{i64 5520}
!90 = !{i64 5528}
!91 = !{i64 5538}
!92 = !{i64 5581}
!93 = !{i64 5596}
!94 = !{i64 5605}
!95 = !{i64 5643}
!96 = !{i64 5653}
!97 = !{i64 5655}
!98 = !{i64 5658}
!99 = !{i64 5667}
!100 = !{i64 5674}
!101 = !{i64 5682}
!102 = !{i64 5719}
!103 = !{i64 5728}
!104 = !{i64 5749}
!105 = !{i64 5791}
!106 = !{i64 5806}
!107 = !{i64 5813}
!108 = !{i64 5855}
!109 = !{i64 5865}
!110 = !{i64 5867}
!111 = !{i64 5870}
!112 = !{i64 5879}
!113 = !{i64 5886}
!114 = !{i64 5906}
!115 = !{i64 5912}
!116 = !{i64 5922}
!117 = !{i64 5939}
!118 = !{i64 5949}
!119 = !{i64 5951}
!120 = !{i64 5954}
!121 = !{i64 5956}
!122 = !{i64 5963}
!123 = !{i64 5968}
!124 = !{i64 5970}
!125 = !{i64 5973}
!126 = !{i64 5975}
!127 = !{i64 5977}
!128 = !{i64 5980}
!129 = !{i64 5985}
!130 = !{i64 6019}
!131 = !{i64 6033}
!132 = !{i64 6034}
!133 = !{i64 6043}
!134 = !{i64 6073}
!135 = !{i64 6082}
!136 = !{i64 6083}
!137 = !{i64 6092}
!138 = !{i64 6118}
!139 = !{i64 6126}
!140 = !{i64 6131}
!141 = !{i64 6142}
!142 = !{i64 6146}
!143 = !{i64 6154}
!144 = !{i64 6161}
!145 = !{i64 6201}
!146 = !{i64 6207}
!147 = !{i64 6215}
!148 = !{i64 6216}
!149 = !{i64 6217}
!150 = !{i64 6229}
!151 = !{i64 6233}
!152 = !{i64 6241}
!153 = !{i64 6249}
!154 = !{i64 6256}
!155 = !{i64 6278}
!156 = !{i64 6291}
!157 = !{i64 6296}
!158 = !{i64 6298}
!159 = !{i64 6305}
!160 = !{i64 6315}
!161 = !{i64 6320}
!162 = !{i64 6335}
!163 = !{i64 6336}
!164 = !{i64 6354}
!165 = !{i64 6364}
!166 = !{i64 6373}
!167 = !{i64 6378}
!168 = !{i64 6380}
!169 = !{i64 6387}
!170 = !{i64 6397}
!171 = !{i64 6402}
!172 = !{i64 6405}
!173 = !{i64 6408}
!174 = !{i64 6423}
!175 = !{i64 6432}
!176 = !{i64 6444}
!177 = !{i64 6454}
!178 = !{i64 6460}
!179 = !{i64 6465}
!180 = !{i64 6473}
!181 = !{i64 6475}
!182 = !{i64 6483}
!183 = !{i64 6495}
!184 = !{i64 6503}
!185 = !{i64 6506}
!186 = !{i64 6510}
!187 = !{i64 6518}
!188 = !{i64 6535}
!189 = !{i64 6540}
!190 = !{i64 6545}
!191 = !{i64 6554}
!192 = !{i64 6566}
!193 = !{i64 6579}
!194 = !{i64 6581}
!195 = !{i64 6597}
!196 = !{i64 6605}
!197 = !{i64 6617}
!198 = !{i64 6620}
!199 = !{i64 6633}
!200 = !{i64 6641}
!201 = !{i64 6653}
!202 = !{i64 6672}
!203 = !{i64 6681}
!204 = !{i64 6690}
!205 = !{i64 6704}
!206 = !{i64 6723}
!207 = !{i64 6733}
!208 = !{i64 6738}
!209 = !{i64 6740}
!210 = !{i64 6742}
!211 = !{i64 6744}
!212 = !{i64 6752}
!213 = !{i64 6755}
!214 = !{i64 6758}
!215 = !{i64 6761}
!216 = !{i64 6763}
!217 = !{i64 6765}
!218 = !{i64 6769}
!219 = !{i64 6774}
!220 = !{i64 6779}
!221 = !{i64 6793}
!222 = !{i64 6800}
!223 = !{i64 6822}
!224 = !{i64 6827}
!225 = !{i64 6829}
!226 = !{i64 6848}
!227 = !{i64 6850}
!228 = !{i64 6853}
!229 = !{i64 6856}
!230 = !{i64 6859}
!231 = !{i64 6861}
!232 = !{i64 6864}
!233 = !{i64 6869}
!234 = !{i64 6874}
!235 = !{i64 6888}
!236 = !{i64 6896}
!237 = !{i64 6926}
!238 = !{i64 6934}
!239 = !{i64 6936}
!240 = !{i64 6944}
!241 = !{i64 6948}
!242 = !{i64 6950}
!243 = !{i64 6953}
!244 = !{i64 6955}
!245 = !{i64 6964}
!246 = !{i64 6976}
!247 = !{i64 6991}
!248 = !{i64 6992}
!249 = !{i64 6999}
!250 = !{i64 7005}
!251 = !{i64 7012}
!252 = !{i64 7061}
!253 = !{i64 7071}
!254 = !{i64 7073}
!255 = !{i64 7078}
!256 = !{i64 7085}
!257 = !{i64 7095}
!258 = !{i64 7097}
!259 = !{i64 7102}
!260 = !{i64 7104}
!261 = !{i64 7113}
!262 = !{i64 7125}
!263 = !{i64 7136}
!264 = !{i64 7155}
!265 = !{i64 7161}
!266 = !{i64 7164}
!267 = !{i64 7182}
!268 = !{i64 7194}
!269 = !{i64 7197}
!270 = !{i64 7206}
!271 = !{i64 7212}
!272 = !{i64 7215}
!273 = !{i64 7220}
!274 = !{i64 7226}
!275 = !{i64 7237}
!276 = !{i64 7242}
!277 = !{i64 7248}
!278 = !{i64 7259}
!279 = !{i64 7264}
!280 = !{i64 7270}
!281 = !{i64 7281}
!282 = !{i64 7286}
!283 = !{i64 7296}
!284 = !{i64 7302}
!285 = !{i64 7313}
!286 = !{i64 7324}
!287 = !{i64 7335}
!288 = !{i64 7375}
!289 = !{i64 7381}
!290 = !{i64 7388}
!291 = !{i64 7403}
!292 = !{i64 7409}
!293 = !{i64 7420}
!294 = !{i64 7429}
!295 = !{i64 7435}
!296 = !{i64 7438}
!297 = !{i64 7455}
!298 = !{i64 7465}
!299 = !{i64 7471}
!300 = !{i64 7474}
!301 = !{i64 7502}
!302 = !{i64 7508}
!303 = !{i64 7511}
!304 = !{i64 7516}
!305 = !{i64 7526}
!306 = !{i64 7532}
!307 = !{i64 7535}
!308 = !{i64 7545}
!309 = !{i64 7547}
!310 = !{i64 7551}
!311 = !{i64 7554}
!312 = !{i64 7561}
!313 = !{i64 7564}
!314 = !{i64 7572}
!315 = !{i64 7579}
!316 = !{i64 7585}
!317 = !{i64 7588}
!318 = !{i64 7593}
!319 = !{i64 7599}
!320 = !{i64 7602}
!321 = !{i64 7611}
!322 = !{i64 7617}
!323 = !{i64 7620}
!324 = !{i64 7625}
!325 = !{i64 7632}
!326 = !{i64 7637}
!327 = !{i64 7639}
!328 = !{i64 7647}
!329 = !{i64 7648}
!330 = !{i64 7650}
!331 = !{i64 7653}
!332 = !{i64 7656}
!333 = !{i64 7659}
!334 = !{i64 7666}
!335 = !{i64 7669}
!336 = !{i64 7148}
!337 = !{i64 7678}
!338 = !{i64 7684}
!339 = !{i64 7687}
!340 = !{i64 7696}
!341 = !{i64 7695}
!342 = !{i64 7704}
!343 = !{i64 7710}
!344 = !{i64 7712}
!345 = !{i64 7718}
!346 = !{i64 7729}
!347 = !{i64 7734}
!348 = !{i64 7740}
!349 = !{i64 7751}
!350 = !{i64 7763}
!351 = !{i64 7776}
!352 = !{i64 7802}
!353 = !{i64 7810}
!354 = !{i64 7812}
!355 = !{i64 7822}
!356 = !{i64 7830}
!357 = !{i64 7832}
!358 = !{i64 7839}
!359 = !{i64 7848}
!360 = !{i64 7856}
!361 = !{i64 7885}
!362 = !{i64 7893}
!363 = !{i64 7895}
!364 = !{i64 7905}
!365 = !{i64 7913}
!366 = !{i64 7915}
!367 = !{i64 7922}
!368 = !{i64 7924}
!369 = !{i64 7927}
!370 = !{i64 7937}
!371 = !{i64 7980}
!372 = !{i64 7988}
!373 = !{i64 8003}
!374 = !{i64 8006}
!375 = !{i64 8013}
!376 = !{i64 8020}
!377 = !{i64 8055}
!378 = !{i64 8062}
!379 = !{i64 8063}
!380 = !{i64 8071}
!381 = !{i64 8086}
!382 = !{i64 8089}
!383 = !{i64 8096}
!384 = !{i64 8103}
!385 = !{i64 8112}
!386 = !{i64 8128}
!387 = !{i64 8133}
!388 = !{i64 8135}
!389 = !{i64 8137}
!390 = !{i64 8150}
!391 = !{i64 8158}
!392 = !{i64 8160}
!393 = !{i64 8162}
!394 = !{i64 8171}
!395 = !{i64 8174}
!396 = !{i64 8176}
!397 = !{i64 8179}
!398 = !{i64 8197}
!399 = !{i64 8210}
!400 = !{i64 8220}
!401 = !{i64 8240}
!402 = !{i64 8256}
!403 = !{i64 8261}
!404 = !{i64 8263}
!405 = !{i64 8265}
!406 = !{i64 8278}
!407 = !{i64 8286}
!408 = !{i64 8288}
!409 = !{i64 8290}
!410 = !{i64 8299}
!411 = !{i64 8302}
!412 = !{i64 8304}
!413 = !{i64 8307}
!414 = !{i64 8332}
!415 = !{i64 8333}
!416 = !{i64 8343}
!417 = !{i64 8345}
!418 = !{i64 8355}
!419 = !{i64 8368}
!420 = !{i64 8389}
!421 = !{i64 8392}
!422 = !{i64 8397}
!423 = !{i64 8399}
!424 = !{i64 8401}
!425 = !{i64 8406}
!426 = !{i64 8408}
!427 = !{i64 8410}
!428 = !{i64 8378}
!429 = !{i64 8419}
!430 = !{i64 8424}
!431 = !{i64 8436}
!432 = !{i64 8447}
!433 = !{i64 8454}
!434 = !{i64 8459}
!435 = !{i64 8463}
!436 = !{i64 8466}
!437 = !{i64 8471}
!438 = !{i64 8478}
!439 = !{i64 8483}
!440 = !{i64 8495}
!441 = !{i64 8498}
!442 = !{i64 8517}
!443 = !{i64 8518}
!444 = !{i64 8522}
!445 = !{i64 8525}
!446 = !{i64 8534}
!447 = !{i64 8555}
!448 = !{i64 8567}
!449 = !{i64 8572}
!450 = !{i64 8579}
!451 = !{i64 8608}
!452 = !{i64 8617}
!453 = !{i64 8624}
!454 = !{i64 8651}
!455 = !{i64 8659}
!456 = !{i64 8661}
!457 = !{i64 8669}
!458 = !{i64 8692}
!459 = !{i64 8700}
!460 = !{i64 8702}
!461 = !{i64 8728}
!462 = !{i64 8747}
!463 = !{i64 8755}
!464 = !{i64 8757}
!465 = !{i64 8765}
!466 = !{i64 8779}
!467 = !{i64 8787}
!468 = !{i64 8799}
!469 = !{i64 8802}
!470 = !{i64 8815}
!471 = !{i64 8828}
!472 = !{i64 8834}
!473 = !{i64 8842}
!474 = !{i64 8853}
!475 = !{i64 8880}
!476 = !{i64 8889}
!477 = !{i64 8896}
!478 = !{i64 8918}
!479 = !{i64 8931}
!480 = !{i64 8932}
!481 = !{i64 8945}
!482 = !{i64 8947}
!483 = !{i64 8957}
!484 = !{i64 8968}
!485 = !{i64 8976}
!486 = !{i64 8978}
!487 = !{i64 8998}
!488 = !{i64 9006}
!489 = !{i64 9008}
!490 = !{i64 9020}
!491 = !{i64 9028}
!492 = !{i64 9031}
!493 = !{i64 9035}
!494 = !{i64 9039}
!495 = !{i64 9046}
!496 = !{i64 9053}
!497 = !{i64 9062}
!498 = !{i64 9063}
!499 = !{i64 9077}
!500 = !{i64 9090}
!501 = !{i64 9098}
!502 = !{i64 9121}
!503 = !{i64 9152}
!504 = !{i64 9157}
!505 = !{i64 9169}
!506 = !{i64 9176}
!507 = !{i64 9184}
!508 = !{i64 9201}
!509 = !{i64 9218}
!510 = !{i64 9223}
!511 = !{i64 9226}
!512 = !{i64 9243}
!513 = !{i64 9248}
!514 = !{i64 9251}
!515 = !{i64 9257}
!516 = !{i64 9274}
!517 = !{i64 9279}
!518 = !{i64 9286}
!519 = !{i64 9303}
!520 = !{i64 9308}
!521 = !{i64 9315}
!522 = !{i64 9317}
!523 = !{i64 9325}
!524 = !{i64 9327}
!525 = !{i64 9334}
!526 = !{i64 9340}
!527 = !{i64 9351}
!528 = !{i64 9354}
!529 = !{i64 9360}
!530 = !{i64 9377}
!531 = !{i64 9382}
!532 = !{i64 9389}
!533 = !{i64 9415}
!534 = !{i64 9420}
!535 = !{i64 9427}
!536 = !{i64 9429}
!537 = !{i64 9437}
!538 = !{i64 9444}
!539 = !{i64 9451}
!540 = !{i64 9453}
!541 = !{i64 9459}
!542 = !{i64 9462}
!543 = !{i64 9479}
!544 = !{i64 9499}
!545 = !{i64 9509}
!546 = !{i64 9535}
!547 = !{i64 9542}
!548 = !{i64 9552}
!549 = !{i64 9562}
!550 = !{i64 9568}
!551 = !{i64 9600}
!552 = !{i64 9609}
!553 = !{i64 9638}
!554 = !{i64 9644}
!555 = !{i64 9645}
!556 = !{i64 9664}
!557 = !{i64 9672}
!558 = !{i64 9674}
!559 = !{i64 9684}
!560 = !{i64 9692}
!561 = !{i64 9694}
!562 = !{i64 9701}
!563 = !{i64 9653}
!564 = !{i64 9712}
!565 = !{i64 9719}
!566 = !{i64 9720}
!567 = !{i64 9733}
!568 = !{i64 9734}
!569 = !{i64 9773}
!570 = !{i64 9780}
!571 = !{i64 9781}
!572 = !{i64 9789}
!573 = !{i64 9799}
!574 = !{i64 9801}
!575 = !{i64 9803}
!576 = !{i64 9816}
!577 = !{i64 9860}
!578 = !{i64 9867}
!579 = !{i64 9868}
!580 = !{i64 9876}
!581 = !{i64 9884}
!582 = !{i64 9891}
!583 = !{i64 9892}
!584 = !{i64 9900}
!585 = !{i64 9908}
!586 = !{i64 9915}
!587 = !{i64 9916}
!588 = !{i64 9924}
!589 = !{i64 9937}
!590 = !{i64 9944}
!591 = !{i64 9945}
!592 = !{i64 9953}
!593 = !{i64 9961}
!594 = !{i64 9968}
!595 = !{i64 9969}
!596 = !{i64 9981}
!597 = !{i64 9982}
!598 = !{i64 9993}
!599 = !{i64 9994}
!600 = !{i64 10004}
!601 = !{i64 10035}
!602 = !{i64 10037}
!603 = !{i64 10047}
!604 = !{i64 10052}
!605 = !{i64 10059}
!606 = !{i64 10064}
!607 = !{i64 10085}
!608 = !{i64 10093}
!609 = !{i64 10104}
!610 = !{i64 10108}
!611 = !{i64 10121}
!612 = !{i64 10123}
!613 = !{i64 10133}
!614 = !{i64 10137}
!615 = !{i64 10145}
!616 = !{i64 10149}
!617 = !{i64 10155}
!618 = !{i64 10160}
!619 = !{i64 10170}
!620 = !{i64 10176}
!621 = !{i64 10193}
!622 = !{i64 10205}
!623 = !{i64 10216}
!624 = !{i64 10220}
!625 = !{i64 10233}
!626 = !{i64 10235}
!627 = !{i64 10245}
!628 = !{i64 10249}
!629 = !{i64 10257}
!630 = !{i64 10261}
!631 = !{i64 10267}
!632 = !{i64 10272}
!633 = !{i64 10282}
!634 = !{i64 10294}
!635 = !{i64 10301}
!636 = !{i64 10303}
!637 = !{i64 10310}
!638 = !{i64 10308}
!639 = !{i64 10316}
!640 = !{i64 10318}
!641 = !{i64 10320}
!642 = !{i64 10324}
!643 = !{i64 10330}
!644 = !{i64 10333}
!645 = !{i64 10335}
!646 = !{i64 10337}
!647 = !{i64 10344}
!648 = !{i64 10352}
!649 = !{i64 10364}
!650 = !{i64 10395}
!651 = !{i64 10445}
!652 = !{i64 10449}
!653 = !{i64 10470}
!654 = !{i64 10471}
!655 = !{i64 10472}
!656 = !{i64 10474}
!657 = !{i64 10463}
!658 = !{i64 10467}
!659 = !{i64 10475}
!660 = !{i64 10483}
!661 = !{i64 10485}
!662 = !{i64 10487}
!663 = !{i64 10490}
!664 = !{i64 10493}
!665 = !{i64 10496}
!666 = !{i64 10498}
!667 = !{i64 10511}
!668 = !{i64 10515}
!669 = !{i64 10517}
!670 = !{i64 10521}
!671 = !{i64 10529}
!672 = !{i64 10531}
!673 = !{i64 10533}
!674 = !{i64 10535}
!675 = !{i64 10538}
!676 = !{i64 10541}
!677 = !{i64 10544}
!678 = !{i64 10569}
!679 = !{i64 10576}
!680 = !{i64 10588}
!681 = !{i64 10619}
!682 = !{i64 10669}
!683 = !{i64 10673}
!684 = !{i64 10694}
!685 = !{i64 10695}
!686 = !{i64 10696}
!687 = !{i64 10698}
!688 = !{i64 10687}
!689 = !{i64 10691}
!690 = !{i64 10699}
!691 = !{i64 10707}
!692 = !{i64 10709}
!693 = !{i64 10711}
!694 = !{i64 10714}
!695 = !{i64 10717}
!696 = !{i64 10720}
!697 = !{i64 10722}
!698 = !{i64 10735}
!699 = !{i64 10739}
!700 = !{i64 10741}
!701 = !{i64 10745}
!702 = !{i64 10753}
!703 = !{i64 10755}
!704 = !{i64 10757}
!705 = !{i64 10759}
!706 = !{i64 10762}
!707 = !{i64 10765}
!708 = !{i64 10768}
!709 = !{i64 10793}
!710 = !{i64 10800}
!711 = !{i64 10822}
!712 = !{i64 10826}
!713 = !{i64 10828}
!714 = !{i64 10851}
!715 = !{i64 10847}
!716 = !{i64 10856}
!717 = !{i64 10866}
!718 = !{i64 10878}
!719 = !{i64 10883}
!720 = !{i64 10886}
!721 = !{i64 10896}
!722 = !{i64 10912}
!723 = !{i64 10935}
!724 = !{i64 10946}
!725 = !{i64 10954}
!726 = !{i64 10956}
!727 = !{i64 10951}
!728 = !{i64 10966}
!729 = !{i64 10978}
!730 = !{i64 11012}
!731 = !{i64 11013}
!732 = !{i64 11042}
!733 = !{i64 11082}
!734 = !{i64 11091}
!735 = !{i64 11017}
!736 = !{i64 11019}
!737 = !{i64 11020}
!738 = !{i64 11028}
!739 = !{i64 11030}
!740 = !{i64 11032}
!741 = !{i64 11035}
!742 = !{i64 11038}
!743 = !{i64 11059}
!744 = !{i64 11061}
!745 = !{i64 11064}
!746 = !{i64 11072}
!747 = !{i64 11075}
!748 = !{i64 11077}
!749 = !{i64 11083}
!750 = !{i64 11096}
!751 = !{i64 11102}
!752 = !{i64 11114}
!753 = !{i64 11117}
!754 = !{i64 11129}
!755 = !{i64 11133}
!756 = !{i64 11141}
!757 = !{i64 11153}
!758 = !{i64 11194}
!759 = !{i64 11203}
!760 = !{i64 11234}
!761 = !{i64 11243}
!762 = !{i64 11248}
!763 = !{i64 11255}
!764 = !{i64 11257}
!765 = !{i64 11271}
!766 = !{i64 11263}
!767 = !{i64 11276}
!768 = !{i64 11283}
!769 = !{i64 11287}
!770 = !{i64 11299}
!771 = !{i64 11305}
!772 = !{i64 11317}
!773 = !{i64 11322}
!774 = !{i64 11330}
!775 = !{i64 11366}
!776 = !{i64 11371}
!777 = !{i64 11380}
!778 = !{i64 11385}
!779 = !{i64 11392}
!780 = !{i64 11399}
!781 = !{i64 11408}
!782 = !{i64 11416}
!783 = !{i64 11428}
!784 = !{i64 11440}
!785 = !{i64 11457}
!786 = !{i64 11464}
!787 = !{i64 11471}
!788 = !{i64 11483}
!789 = !{i64 11487}
!790 = !{i64 11500}
!791 = !{i64 11502}
!792 = !{i64 11504}
!793 = !{i64 11516}
!794 = !{i64 11520}
!795 = !{i64 11528}
!796 = !{i64 11530}
!797 = !{i64 11539}
!798 = !{i64 11552}
!799 = !{i64 11566}
!800 = !{i64 11576}
!801 = !{i64 11580}
!802 = !{i64 11588}
!803 = !{i64 11592}
!804 = !{i64 11598}
!805 = !{i64 11603}
!806 = !{i64 11613}
!807 = !{i64 11632}
!808 = !{i64 11641}
!809 = !{i64 11648}
!810 = !{i64 11666}
!811 = !{i64 11670}
!812 = !{i64 11680}
!813 = !{i64 11688}
!814 = !{i64 11696}
!815 = !{i64 11704}
!816 = !{i64 11707}
!817 = !{i64 11709}
!818 = !{i64 11715}
!819 = !{i64 11740}
!820 = !{i64 11746}
!821 = !{i64 11749}
!822 = !{i64 11757}
!823 = !{i64 11760}
!824 = !{i64 11783}
!825 = !{i64 11794}
!826 = !{i64 11802}
!827 = !{i64 11804}
!828 = !{i64 11799}
!829 = !{i64 11816}
!830 = !{i64 11824}
!831 = !{i64 11883}
!832 = !{i64 11885}
!833 = !{i64 11886}
!834 = !{i64 11888}
!835 = !{i64 11826}
!836 = !{i64 11840}
!837 = !{i64 11836}
!838 = !{i64 11844}
!839 = !{i64 11845}
!840 = !{i64 11846}
!841 = !{i64 11848}
!842 = !{i64 11849}
!843 = !{i64 11857}
!844 = !{i64 11859}
!845 = !{i64 11865}
!846 = !{i64 11868}
!847 = !{i64 11871}
!848 = !{i64 11873}
!849 = !{i64 11879}
!850 = !{i64 11889}
!851 = !{i64 11897}
!852 = !{i64 11899}
!853 = !{i64 11904}
!854 = !{i64 11906}
!855 = !{i64 11910}
!856 = !{i64 11915}
!857 = !{i64 11918}
!858 = !{i64 11924}
!859 = !{i64 11928}
!860 = !{i64 11939}
!861 = !{i64 11941}
!862 = !{i64 11945}
!863 = !{i64 11953}
!864 = !{i64 11956}
!865 = !{i64 11958}
!866 = !{i64 11960}
!867 = !{i64 11969}
!868 = !{i64 11970}
!869 = !{i64 11978}
!870 = !{i64 11990}
!871 = !{i64 11993}
!872 = !{i64 12005}
!873 = !{i64 12009}
!874 = !{i64 12017}
!875 = !{i64 12029}
!876 = !{i64 12058}
!877 = !{i64 12067}
!878 = !{i64 12099}
!879 = !{i64 12106}
!880 = !{i64 12109}
!881 = !{i64 12119}
!882 = !{i64 12126}
!883 = !{i64 12135}
!884 = !{i64 12136}
!885 = !{i64 12146}
!886 = !{i64 12154}
!887 = !{i64 12156}
!888 = !{i64 12162}
!889 = !{i64 12176}
!890 = !{i64 12199}
!891 = !{i64 12209}
!892 = !{i64 12219}
!893 = !{i64 12231}
!894 = !{i64 12243}
!895 = !{i64 12233}
!896 = !{i64 12257}
!897 = !{i64 12261}
!898 = !{i64 12271}
!899 = !{i64 12279}
!900 = !{i64 12288}
!901 = !{i64 12310}
!902 = !{i64 12315}
!903 = !{i64 12318}
!904 = !{i64 12320}
!905 = !{i64 12328}
!906 = !{i64 12378}
!907 = !{i64 12351}
!908 = !{i64 12356}
!909 = !{i64 12383}
!910 = !{i64 12385}
!911 = !{i64 12496}
!912 = !{i64 12387}
!913 = !{i64 12390}
!914 = !{i64 12393}
!915 = !{i64 12397}
!916 = !{i64 12434}
!917 = !{i64 12420}
!918 = !{i64 12439}
!919 = !{i64 12443}
!920 = !{i64 12445}
!921 = !{i64 12451}
!922 = !{i64 12460}
!923 = !{i64 12466}
!924 = !{i64 12471}
!925 = !{i64 12474}
!926 = !{i64 12478}
!927 = !{i64 12503}
!928 = !{i64 12508}
!929 = !{i64 12511}
!930 = !{i64 12513}
!931 = !{i64 12518}
!932 = !{i64 12530}
!933 = !{i64 12540}
!934 = !{i64 12553}
!935 = !{i64 12565}
!936 = !{i64 12574}
!937 = !{i64 12579}
!938 = !{i64 12587}
!939 = !{i64 12599}
!940 = !{i64 12609}
!941 = !{i64 12647}
!942 = !{i64 12656}
!943 = !{i64 12672}
!944 = !{i64 12694}
!945 = !{i64 12700}
!946 = !{i64 12701}
!947 = !{i64 12709}
!948 = !{i64 12721}
!949 = !{i64 12732}
!950 = !{i64 12736}
!951 = !{i64 12749}
!952 = !{i64 12751}
!953 = !{i64 12761}
!954 = !{i64 12765}
!955 = !{i64 12773}
!956 = !{i64 12783}
!957 = !{i64 12788}
!958 = !{i64 12727}
!959 = !{i64 12741}
!960 = !{i64 12794}
!961 = !{i64 12801}
!962 = !{i64 12802}
!963 = !{i64 12834}
!964 = !{i64 12884}
!965 = !{i64 12902}
!966 = !{i64 12903}
!967 = !{i64 12904}
!968 = !{i64 12906}
!969 = !{i64 12895}
!970 = !{i64 12899}
!971 = !{i64 12907}
!972 = !{i64 12915}
!973 = !{i64 12917}
!974 = !{i64 12919}
!975 = !{i64 12922}
!976 = !{i64 12925}
!977 = !{i64 12928}
!978 = !{i64 12930}
!979 = !{i64 12943}
!980 = !{i64 12947}
!981 = !{i64 12949}
!982 = !{i64 12953}
!983 = !{i64 12961}
!984 = !{i64 12963}
!985 = !{i64 12965}
!986 = !{i64 12967}
!987 = !{i64 12970}
!988 = !{i64 12973}
!989 = !{i64 12976}
!990 = !{i64 12995}
!991 = !{i64 13001}
!992 = !{i64 13002}
!993 = !{i64 13003}
!994 = !{i64 13011}
!995 = !{i64 13016}
!996 = !{i64 13018}
!997 = !{i64 13026}
!998 = !{i64 13032}
!999 = !{i64 13033}
!1000 = !{i64 13034}
!1001 = !{i64 13042}
!1002 = !{i64 13050}
!1003 = !{i64 13056}
!1004 = !{i64 13057}
!1005 = !{i64 13058}
!1006 = !{i64 13066}
!1007 = !{i64 13071}
!1008 = !{i64 13073}
!1009 = !{i64 13081}
!1010 = !{i64 13087}
!1011 = !{i64 13088}
!1012 = !{i64 13089}
!1013 = !{i64 13097}
!1014 = !{i64 13099}
!1015 = !{i64 13107}
!1016 = !{i64 13113}
!1017 = !{i64 13114}
!1018 = !{i64 13115}
!1019 = !{i64 13127}
!1020 = !{i64 13152}
!1021 = !{i64 13157}
!1022 = !{i64 13162}
!1023 = !{i64 13173}
!1024 = !{i64 13184}
!1025 = !{i64 13188}
!1026 = !{i64 13199}
!1027 = !{i64 13205}
!1028 = !{i64 13208}
!1029 = !{i64 13234}
!1030 = !{i64 13240}
!1031 = !{i64 13243}
!1032 = !{i64 13249}
!1033 = !{i64 13268}
!1034 = !{i64 13279}
!1035 = !{i64 13288}
