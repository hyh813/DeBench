source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

%_IO_FILE = type { i32 }
%shmid_ds = type { %ipc_perm, i32, i32, i32, i32, i32, i32, i16, i16, i32*, i32* }
%ipc_perm = type { i32, i32, i32, i32, i32, i32, i16 }
%stat = type { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }
%sockaddr = type { i32, [14 x i8] }

@global_var_287d = local_unnamed_addr constant [4 x i8] c"$$\0B\00"
@global_var_5735 = constant i32 68043016
@global_var_56d4 = constant i32 239544334
@global_var_55f7 = constant i32 239142926
@global_var_55c4 = local_unnamed_addr constant i32 83
@global_var_54f8 = local_unnamed_addr constant i32 140
@global_var_5424 = local_unnamed_addr constant i32 135151872
@global_var_53b4 = constant i32 -10404
@global_var_51b8 = local_unnamed_addr constant i32 537805092
@global_var_5168 = local_unnamed_addr constant i32 1092882013
@global_var_5107 = local_unnamed_addr constant i32 25169473
@global_var_50b7 = constant i32 1879984129
@global_var_5067 = local_unnamed_addr constant i32 1208057870
@global_var_4fe8 = constant i32 20
@global_var_4f76 = constant i32 1093406274
@global_var_4e97 = local_unnamed_addr constant i32 940459824
@global_var_4e75 = local_unnamed_addr constant i32 239483918
@global_var_4d87 = local_unnamed_addr constant i32 8206
@global_var_4d64 = constant i32 470696216
@global_var_1b6 = local_unnamed_addr constant [17 x i8] c"ib/ld-linux.so.2\00"
@global_var_3b6 = global i32 1179648
@global_var_4c77 = local_unnamed_addr constant i32 269371424
@global_var_4c46 = constant i32 4457486
@global_var_3e8 = global i32 18
@global_var_7d0 = constant [4 x i8] c"cmp\00"
@global_var_4aeb = constant i32 604914946
@global_var_4ab7 = local_unnamed_addr constant i32 -3078144
@global_var_4a94 = constant i32 240193550
@global_var_4908 = local_unnamed_addr constant i32 -2029746656
@global_var_48d6 = constant i32 672022820
@global_var_4866 = constant i32 336480528
@global_var_47b4 = constant i32 470696984
@global_var_4697 = local_unnamed_addr constant i32 38912
@global_var_4675 = constant i32 1091046977
@global_var_4604 = constant i32 0
@global_var_4517 = local_unnamed_addr constant i32 -2192384
@global_var_44e5 = constant i32 1543503880
@global_var_4468 = constant i32 -11284
@global_var_4406 = constant i32 -779354112
@global_var_4357 = local_unnamed_addr constant i32 540685872
@global_var_4338 = constant i32 808268620
@global_var_3e9 = global i32 -352321536
@global_var_3ea = global i32 15400960
@global_var_3eb = global i32 60160
@global_var_425b = constant i32 983276774
@global_var_4234 = constant i32 540685104
@global_var_4127 = local_unnamed_addr constant i32 -1662638048
@global_var_1f4 = local_unnamed_addr global i32 1
@global_var_40f8 = local_unnamed_addr constant [6 x i8] c" -1)\0A\00"
@global_var_4094 = constant i32 842018097
@global_var_1192 = local_unnamed_addr constant i32 96
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
  %storemerge.reg2mem = alloca i32, !insn.addr !154
  %1 = load i32, i32* %0
  %2 = add i32 %1, 10174, !insn.addr !155
  %3 = inttoptr i32 %arg2 to i8*, !insn.addr !156
  %4 = inttoptr i32 %2 to i8*, !insn.addr !156
  %5 = call %_IO_FILE* @fopen(i8* %3, i8* %4), !insn.addr !156
  %6 = icmp eq %_IO_FILE* %5, null, !insn.addr !157
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !158
  br i1 %6, label %dec_label_pc_18b9, label %dec_label_pc_189c, !insn.addr !158

dec_label_pc_189c:                                ; preds = %dec_label_pc_1870
  %7 = call i32 @fileno(%_IO_FILE* nonnull %5), !insn.addr !159
  %8 = call i32 @fclose(%_IO_FILE* nonnull %5), !insn.addr !160
  store i32 %7, i32* %storemerge.reg2mem, !insn.addr !161
  br label %dec_label_pc_18b9, !insn.addr !161

dec_label_pc_18b9:                                ; preds = %dec_label_pc_1870, %dec_label_pc_189c
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !162

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_18b9, { 1, 0 }
}

define i32 @call_fopen_fclose(i32 %arg1) local_unnamed_addr {
dec_label_pc_18c0:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !163
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5735 to i32), i32 -12231), !insn.addr !164
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5735 to i32), i32 -12229), !insn.addr !165
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
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_190f, { 1, 0 }
}

define i32 @param_fread_fwrite(i32 %arg1) local_unnamed_addr {
dec_label_pc_1920:
  %0 = alloca %_IO_FILE*
  %eax.0.reg2mem = alloca i32, !insn.addr !175
  %stack_var_-44 = alloca i32, align 4
  %stack_var_-56 = alloca i32, align 4
  %1 = load %_IO_FILE*, %_IO_FILE** %0
  %2 = ptrtoint %_IO_FILE* %1 to i32, !insn.addr !176
  %3 = add i32 %2, add (i32 ptrtoint (i32* @global_var_56d4 to i32), i32 -12198), !insn.addr !177
  %4 = inttoptr i32 %3 to i8*, !insn.addr !178
  %5 = inttoptr i32 %arg1 to i8*, !insn.addr !179
  %6 = call %_IO_FILE* @fopen(i8* %5, i8* %4), !insn.addr !179
  %7 = icmp eq %_IO_FILE* %6, null, !insn.addr !180
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !181
  br i1 %7, label %dec_label_pc_19ec, label %dec_label_pc_1951, !insn.addr !181

dec_label_pc_1951:                                ; preds = %dec_label_pc_1920
  %8 = add i32 %2, add (i32 ptrtoint (i32* @global_var_56d4 to i32), i32 -12217), !insn.addr !182
  %9 = inttoptr i32 %8 to i32*, !insn.addr !183
  %10 = call i32 @fwrite(i32* %9, i32 1, i32 18, %_IO_FILE* nonnull %6), !insn.addr !183
  %11 = icmp eq i32 %10, 18, !insn.addr !184
  %12 = icmp eq i1 %11, false, !insn.addr !185
  br i1 %12, label %dec_label_pc_19de, label %dec_label_pc_196f, !insn.addr !185

dec_label_pc_196f:                                ; preds = %dec_label_pc_1951
  call void @rewind(%_IO_FILE* nonnull %6), !insn.addr !186
  %13 = call i32 @fread(i32* nonnull %stack_var_-44, i32 1, i32 18, %_IO_FILE* nonnull %6), !insn.addr !187
  %14 = ptrtoint i32* %stack_var_-56 to i32, !insn.addr !188
  %15 = add i32 %14, 12, !insn.addr !189
  %16 = add i32 %15, %13, !insn.addr !189
  %17 = inttoptr i32 %16 to i8*, !insn.addr !189
  store i8 0, i8* %17, align 1, !insn.addr !189
  %18 = call i32 @fclose(%_IO_FILE* nonnull %6), !insn.addr !190
  %19 = call i32 @unlink(i8* %5), !insn.addr !191
  %20 = icmp eq i32 %13, 18, !insn.addr !192
  %21 = icmp eq i1 %20, false, !insn.addr !193
  store i32 -3, i32* %eax.0.reg2mem, !insn.addr !193
  br i1 %21, label %dec_label_pc_19ec, label %dec_label_pc_19b3, !insn.addr !193

dec_label_pc_19b3:                                ; preds = %dec_label_pc_196f
  %22 = call i32 @bcmp(i32* nonnull %stack_var_-44, i32* %9, i32 19), !insn.addr !194
  %23 = icmp eq i32 %22, 0, !insn.addr !195
  %24 = select i1 %23, i32 42, i32 -3, !insn.addr !196
  store i32 %24, i32* %eax.0.reg2mem, !insn.addr !197
  br label %dec_label_pc_19ec, !insn.addr !197

dec_label_pc_19de:                                ; preds = %dec_label_pc_1951
  %25 = call i32 @fclose(%_IO_FILE* nonnull %6), !insn.addr !198
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !199
  br label %dec_label_pc_19ec, !insn.addr !199

dec_label_pc_19ec:                                ; preds = %dec_label_pc_1920, %dec_label_pc_19de, %dec_label_pc_19b3, %dec_label_pc_196f
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !200

; uselistorder directives
  uselistorder %_IO_FILE* %6, { 3, 0, 1, 2, 4, 5 }
  uselistorder i32* %eax.0.reg2mem, { 0, 4, 2, 3, 1 }
  uselistorder label %dec_label_pc_19ec, { 1, 2, 3, 0 }
}

define i32 @call_fread_fwrite(i32 %arg1) local_unnamed_addr {
dec_label_pc_1a00:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_55f7 to i32), i32 -12195), !insn.addr !201
  %3 = call i32 @param_fread_fwrite(i32 %2), !insn.addr !202
  ret i32 %3, !insn.addr !203
}

define i32 @param_malloc_free(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1a30:
  %esi.1.reg2mem = alloca i32, !insn.addr !204
  %esi.0.reg2mem = alloca i32, !insn.addr !204
  %ebp.1.reg2mem = alloca i32, !insn.addr !204
  %edx.2.reg2mem = alloca i32, !insn.addr !204
  %edx.1.reg2mem = alloca i32, !insn.addr !204
  %ebp.0.reg2mem = alloca i32, !insn.addr !204
  %edx.0.reg2mem = alloca i32, !insn.addr !204
  %0 = mul i32 %arg2, 4, !insn.addr !205
  %1 = call i32* @malloc(i32 %0), !insn.addr !206
  %2 = icmp eq i32* %1, null, !insn.addr !207
  store i32 -1, i32* %esi.1.reg2mem, !insn.addr !208
  br i1 %2, label %dec_label_pc_1ad8, label %dec_label_pc_1a5a, !insn.addr !208

dec_label_pc_1a5a:                                ; preds = %dec_label_pc_1a30
  %3 = ptrtoint i32* %1 to i32, !insn.addr !206
  %4 = icmp eq i32 %arg2, 0, !insn.addr !209
  br i1 %4, label %dec_label_pc_1acc, label %dec_label_pc_1a5e, !insn.addr !210

dec_label_pc_1a5e:                                ; preds = %dec_label_pc_1a5a
  %5 = add i32 %arg2, -1, !insn.addr !211
  %6 = icmp ult i32 %5, 3, !insn.addr !212
  store i32 0, i32* %edx.1.reg2mem, !insn.addr !213
  br i1 %6, label %dec_label_pc_1aa2, label %dec_label_pc_1a6d, !insn.addr !213

dec_label_pc_1a6d:                                ; preds = %dec_label_pc_1a5e
  %7 = and i32 %arg2, -4, !insn.addr !214
  store i32 0, i32* %edx.0.reg2mem, !insn.addr !215
  store i32 20, i32* %ebp.0.reg2mem, !insn.addr !215
  br label %dec_label_pc_1a80, !insn.addr !215

dec_label_pc_1a80:                                ; preds = %dec_label_pc_1a80, %dec_label_pc_1a6d
  %ebp.0.reload = load i32, i32* %ebp.0.reg2mem
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %8 = add i32 %ebp.0.reload, -20, !insn.addr !216
  %9 = mul i32 %edx.0.reload, 4, !insn.addr !217
  %10 = add i32 %9, %3
  %11 = inttoptr i32 %10 to i32*, !insn.addr !217
  store i32 %8, i32* %11, align 4, !insn.addr !217
  %12 = add i32 %ebp.0.reload, -10, !insn.addr !218
  %13 = add i32 %10, 4, !insn.addr !219
  %14 = inttoptr i32 %13 to i32*, !insn.addr !219
  store i32 %12, i32* %14, align 4, !insn.addr !219
  %15 = add i32 %10, 8, !insn.addr !220
  %16 = inttoptr i32 %15 to i32*, !insn.addr !220
  store i32 %ebp.0.reload, i32* %16, align 4, !insn.addr !220
  %17 = add i32 %ebp.0.reload, 10, !insn.addr !221
  %18 = add i32 %10, 12, !insn.addr !222
  %19 = inttoptr i32 %18 to i32*, !insn.addr !222
  store i32 %17, i32* %19, align 4, !insn.addr !222
  %20 = add i32 %edx.0.reload, 4, !insn.addr !223
  %21 = add i32 %ebp.0.reload, 40, !insn.addr !224
  %22 = icmp eq i32 %7, %20, !insn.addr !225
  %23 = icmp eq i1 %22, false, !insn.addr !226
  store i32 %20, i32* %edx.0.reg2mem, !insn.addr !226
  store i32 %21, i32* %ebp.0.reg2mem, !insn.addr !226
  store i32 %20, i32* %edx.1.reg2mem, !insn.addr !226
  br i1 %23, label %dec_label_pc_1a80, label %dec_label_pc_1aa2, !insn.addr !226

dec_label_pc_1aa2:                                ; preds = %dec_label_pc_1a80, %dec_label_pc_1a5e
  %24 = urem i32 %arg2, 4, !insn.addr !227
  %25 = icmp eq i32 %24, 0, !insn.addr !228
  br i1 %25, label %dec_label_pc_1abd, label %dec_label_pc_1aa6, !insn.addr !229

dec_label_pc_1aa6:                                ; preds = %dec_label_pc_1aa2
  %edx.1.reload = load i32, i32* %edx.1.reg2mem
  %26 = mul i32 %edx.1.reload, 10, !insn.addr !230
  store i32 %26, i32* %edx.2.reg2mem, !insn.addr !231
  store i32 0, i32* %ebp.1.reg2mem, !insn.addr !231
  br label %dec_label_pc_1ab0, !insn.addr !231

dec_label_pc_1ab0:                                ; preds = %dec_label_pc_1ab0, %dec_label_pc_1aa6
  %ebp.1.reload = load i32, i32* %ebp.1.reg2mem
  %edx.2.reload = load i32, i32* %edx.2.reg2mem
  %reass.add = add i32 %ebp.1.reload, %edx.1.reload
  %reass.mul = mul i32 %reass.add, 4
  %27 = add i32 %reass.mul, %3, !insn.addr !232
  %28 = inttoptr i32 %27 to i32*, !insn.addr !232
  store i32 %edx.2.reload, i32* %28, align 4, !insn.addr !232
  %29 = add i32 %ebp.1.reload, 1, !insn.addr !233
  %30 = add i32 %edx.2.reload, 10, !insn.addr !234
  %31 = icmp eq i32 %24, %29, !insn.addr !235
  %32 = icmp eq i1 %31, false, !insn.addr !236
  store i32 %30, i32* %edx.2.reg2mem, !insn.addr !236
  store i32 %29, i32* %ebp.1.reg2mem, !insn.addr !236
  br i1 %32, label %dec_label_pc_1ab0, label %dec_label_pc_1abd, !insn.addr !236

dec_label_pc_1abd:                                ; preds = %dec_label_pc_1ab0, %dec_label_pc_1aa2
  %33 = load i32, i32* %1, align 4, !insn.addr !237
  store i32 %33, i32* %esi.0.reg2mem, !insn.addr !238
  br label %dec_label_pc_1acc, !insn.addr !238

dec_label_pc_1acc:                                ; preds = %dec_label_pc_1abd, %dec_label_pc_1a5a
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %34 = add i32 %0, -4, !insn.addr !239
  %35 = add i32 %34, %3, !insn.addr !239
  %36 = inttoptr i32 %35 to i32*, !insn.addr !239
  %37 = load i32, i32* %36, align 4, !insn.addr !239
  %38 = add i32 %37, %esi.0.reload, !insn.addr !239
  call void @free(i32* nonnull %1), !insn.addr !240
  store i32 %38, i32* %esi.1.reg2mem, !insn.addr !240
  br label %dec_label_pc_1ad8, !insn.addr !240

dec_label_pc_1ad8:                                ; preds = %dec_label_pc_1a30, %dec_label_pc_1acc
  %esi.1.reload = load i32, i32* %esi.1.reg2mem
  ret i32 %esi.1.reload, !insn.addr !241

; uselistorder directives
  uselistorder i32 %edx.2.reload, { 1, 0 }
  uselistorder i32 %edx.1.reload, { 1, 0 }
  uselistorder i32 %24, { 1, 0 }
  uselistorder i32 %ebp.0.reload, { 4, 3, 2, 1, 0 }
  uselistorder i32 %3, { 2, 0, 1 }
  uselistorder i32* %1, { 0, 1, 3, 2 }
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ebp.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ebp.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.1.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg2, { 1, 4, 3, 2, 0 }
  uselistorder label %dec_label_pc_1ad8, { 1, 0 }
}

define i32 @call_malloc_free() local_unnamed_addr {
dec_label_pc_1af0:
  ret i32 90, !insn.addr !242
}

define i32 @param_memset(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1b00:
  %eax.3.reg2mem = alloca i32, !insn.addr !243
  %edx.2.reg2mem = alloca i32, !insn.addr !243
  %eax.2.reg2mem = alloca i32, !insn.addr !243
  %edx.1.reg2mem = alloca i32, !insn.addr !243
  %eax.1.reg2mem = alloca i32, !insn.addr !243
  %edx.0.reg2mem = alloca i32, !insn.addr !243
  %eax.0.reg2mem = alloca i32, !insn.addr !243
  %0 = inttoptr i32 %arg2 to i32*, !insn.addr !244
  %1 = call i32* @memset(i32* %0, i32 0, i32 %arg3), !insn.addr !244
  %2 = icmp eq i32 %arg3, 0, !insn.addr !245
  store i32 0, i32* %eax.3.reg2mem, !insn.addr !246
  br i1 %2, label %dec_label_pc_1bad, label %dec_label_pc_1b2a, !insn.addr !246

dec_label_pc_1b2a:                                ; preds = %dec_label_pc_1b00
  %3 = add i32 %arg3, -1, !insn.addr !247
  %4 = icmp ult i32 %3, 7, !insn.addr !248
  %5 = icmp eq i1 %4, false, !insn.addr !249
  store i32 0, i32* %eax.1.reg2mem, !insn.addr !249
  store i32 0, i32* %edx.1.reg2mem, !insn.addr !249
  br i1 %5, label %dec_label_pc_1b41, label %dec_label_pc_1b8e, !insn.addr !249

dec_label_pc_1b41:                                ; preds = %dec_label_pc_1b2a
  %6 = and i32 %arg3, -8, !insn.addr !250
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !251
  store i32 0, i32* %edx.0.reg2mem, !insn.addr !251
  br label %dec_label_pc_1b50, !insn.addr !251

dec_label_pc_1b50:                                ; preds = %dec_label_pc_1b50, %dec_label_pc_1b41
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %7 = add i32 %edx.0.reload, %arg2
  %8 = inttoptr i32 %7 to i8*, !insn.addr !252
  %9 = load i8, i8* %8, align 1, !insn.addr !252
  %10 = zext i8 %9 to i32, !insn.addr !252
  %11 = add i32 %eax.0.reload, %10, !insn.addr !253
  %12 = add i32 %7, 1, !insn.addr !254
  %13 = inttoptr i32 %12 to i8*, !insn.addr !254
  %14 = load i8, i8* %13, align 1, !insn.addr !254
  %15 = zext i8 %14 to i32, !insn.addr !254
  %16 = add i32 %11, %15, !insn.addr !255
  %17 = add i32 %7, 2, !insn.addr !256
  %18 = inttoptr i32 %17 to i8*, !insn.addr !256
  %19 = load i8, i8* %18, align 1, !insn.addr !256
  %20 = zext i8 %19 to i32, !insn.addr !256
  %21 = add i32 %16, %20, !insn.addr !257
  %22 = add i32 %7, 3, !insn.addr !258
  %23 = inttoptr i32 %22 to i8*, !insn.addr !258
  %24 = load i8, i8* %23, align 1, !insn.addr !258
  %25 = zext i8 %24 to i32, !insn.addr !258
  %26 = add i32 %21, %25, !insn.addr !259
  %27 = add i32 %7, 4, !insn.addr !260
  %28 = inttoptr i32 %27 to i8*, !insn.addr !260
  %29 = load i8, i8* %28, align 1, !insn.addr !260
  %30 = zext i8 %29 to i32, !insn.addr !260
  %31 = add i32 %26, %30, !insn.addr !261
  %32 = add i32 %7, 5, !insn.addr !262
  %33 = inttoptr i32 %32 to i8*, !insn.addr !262
  %34 = load i8, i8* %33, align 1, !insn.addr !262
  %35 = zext i8 %34 to i32, !insn.addr !262
  %36 = add i32 %31, %35, !insn.addr !263
  %37 = add i32 %7, 6, !insn.addr !264
  %38 = inttoptr i32 %37 to i8*, !insn.addr !264
  %39 = load i8, i8* %38, align 1, !insn.addr !264
  %40 = zext i8 %39 to i32, !insn.addr !264
  %41 = add i32 %36, %40, !insn.addr !265
  %42 = add i32 %7, 7, !insn.addr !266
  %43 = inttoptr i32 %42 to i8*, !insn.addr !266
  %44 = load i8, i8* %43, align 1, !insn.addr !266
  %45 = zext i8 %44 to i32, !insn.addr !266
  %46 = add i32 %41, %45, !insn.addr !267
  %47 = add i32 %edx.0.reload, 8, !insn.addr !268
  %48 = icmp eq i32 %6, %47, !insn.addr !269
  %49 = icmp eq i1 %48, false, !insn.addr !270
  store i32 %46, i32* %eax.0.reg2mem, !insn.addr !270
  store i32 %47, i32* %edx.0.reg2mem, !insn.addr !270
  store i32 %46, i32* %eax.1.reg2mem, !insn.addr !270
  store i32 %47, i32* %edx.1.reg2mem, !insn.addr !270
  br i1 %49, label %dec_label_pc_1b50, label %dec_label_pc_1b8e, !insn.addr !270

dec_label_pc_1b8e:                                ; preds = %dec_label_pc_1b50, %dec_label_pc_1b2a
  %50 = urem i32 %arg3, 8, !insn.addr !271
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  %51 = icmp eq i32 %50, 0, !insn.addr !272
  store i32 %eax.1.reload, i32* %eax.3.reg2mem, !insn.addr !273
  br i1 %51, label %dec_label_pc_1bad, label %dec_label_pc_1b92, !insn.addr !273

dec_label_pc_1b92:                                ; preds = %dec_label_pc_1b8e
  %edx.1.reload = load i32, i32* %edx.1.reg2mem
  %52 = add i32 %edx.1.reload, %arg2, !insn.addr !274
  store i32 %eax.1.reload, i32* %eax.2.reg2mem, !insn.addr !275
  store i32 0, i32* %edx.2.reg2mem, !insn.addr !275
  br label %dec_label_pc_1ba0, !insn.addr !275

dec_label_pc_1ba0:                                ; preds = %dec_label_pc_1ba0, %dec_label_pc_1b92
  %edx.2.reload = load i32, i32* %edx.2.reg2mem
  %eax.2.reload = load i32, i32* %eax.2.reg2mem
  %53 = add i32 %52, %edx.2.reload, !insn.addr !276
  %54 = inttoptr i32 %53 to i8*, !insn.addr !276
  %55 = load i8, i8* %54, align 1, !insn.addr !276
  %56 = zext i8 %55 to i32, !insn.addr !276
  %57 = add i32 %eax.2.reload, %56, !insn.addr !277
  %58 = add i32 %edx.2.reload, 1, !insn.addr !278
  %59 = icmp eq i32 %50, %58, !insn.addr !279
  %60 = icmp eq i1 %59, false, !insn.addr !280
  store i32 %57, i32* %eax.2.reg2mem, !insn.addr !280
  store i32 %58, i32* %edx.2.reg2mem, !insn.addr !280
  store i32 %57, i32* %eax.3.reg2mem, !insn.addr !280
  br i1 %60, label %dec_label_pc_1ba0, label %dec_label_pc_1bad, !insn.addr !280

dec_label_pc_1bad:                                ; preds = %dec_label_pc_1ba0, %dec_label_pc_1b00, %dec_label_pc_1b8e
  %eax.3.reload = load i32, i32* %eax.3.reg2mem
  ret i32 %eax.3.reload, !insn.addr !281

; uselistorder directives
  uselistorder i32 %edx.2.reload, { 1, 0 }
  uselistorder i32 %eax.1.reload, { 1, 0 }
  uselistorder i32 %50, { 1, 0 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.3.reg2mem, { 0, 1, 3, 2 }
  uselistorder i32 %arg3, { 0, 1, 2, 4, 3 }
  uselistorder label %dec_label_pc_1bad, { 0, 2, 1 }
}

define i32 @call_memset() local_unnamed_addr {
dec_label_pc_1bc0:
  ret i32 0, !insn.addr !282
}

define i32 @param_strchr_strstr(i32 %arg1, i32 %arg2, i8 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1bd0:
  %0 = inttoptr i32 %arg2 to i8*, !insn.addr !283
  %1 = sext i8 %arg3 to i32, !insn.addr !283
  %2 = call i8* @strchr(i8* %0, i32 %1), !insn.addr !283
  %3 = ptrtoint i8* %2 to i32, !insn.addr !283
  %4 = sub i32 %3, %arg2, !insn.addr !284
  %5 = icmp eq i8* %2, null, !insn.addr !285
  %6 = select i1 %5, i32 -1, i32 %4, !insn.addr !286
  %sext = mul i32 %arg4, 16777216
  %7 = ashr exact i32 %sext, 24, !insn.addr !287
  %8 = inttoptr i32 %7 to i8*, !insn.addr !287
  %9 = call i8* @strstr(i8* %0, i8* %8), !insn.addr !287
  %10 = ptrtoint i8* %9 to i32, !insn.addr !287
  %11 = sub i32 %10, %arg2, !insn.addr !288
  %12 = icmp eq i8* %9, null, !insn.addr !289
  %13 = select i1 %12, i32 -1, i32 %11, !insn.addr !290
  %14 = add i32 %13, %6, !insn.addr !291
  ret i32 %14, !insn.addr !292

; uselistorder directives
  uselistorder i32 %arg2, { 2, 1, 0 }
}

define i32 @call_strchr_strstr() local_unnamed_addr {
dec_label_pc_1c30:
  ret i32 15, !insn.addr !293
}

define i32 @test_standard_library_functions(i32 %arg1) local_unnamed_addr {
dec_label_pc_1c40:
  %0 = alloca i32
  %stack_var_-44 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_53b4 to i32), i32 -11412), !insn.addr !294
  %3 = inttoptr i32 %2 to i8*
  %4 = call i32 @puts(i8* %3), !insn.addr !295
  store i32 1819043144, i32* %stack_var_-44, align 4, !insn.addr !296
  %5 = bitcast i32* %stack_var_-44 to i8*
  %6 = call i32 @strlen(i8* nonnull %5), !insn.addr !297
  %7 = add i32 %1, add (i32 ptrtoint (i32* @global_var_53b4 to i32), i32 -12172), !insn.addr !298
  %8 = inttoptr i32 %7 to i8*
  %9 = call i32 (i8*, ...) @printf(i8* %8), !insn.addr !299
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_53b4 to i32), i32 -12145), !insn.addr !300
  %11 = inttoptr i32 %10 to i8*
  %12 = call i32 (i8*, ...) @printf(i8* %11), !insn.addr !301
  %13 = add i32 %1, add (i32 ptrtoint (i32* @global_var_53b4 to i32), i32 -12118), !insn.addr !302
  %14 = inttoptr i32 %13 to i8*
  %15 = call i32 (i8*, ...) @printf(i8* %14), !insn.addr !303
  %16 = add i32 %1, add (i32 ptrtoint (i32* @global_var_53b4 to i32), i32 -12090), !insn.addr !304
  %17 = inttoptr i32 %16 to i8*
  %18 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !305
  %19 = add i32 %1, add (i32 ptrtoint (i32* @global_var_53b4 to i32), i32 -11316), !insn.addr !306
  %20 = add i32 %1, add (i32 ptrtoint (i32* @global_var_53b4 to i32), i32 -11304), !insn.addr !307
  %21 = inttoptr i32 %20 to %_IO_FILE*, !insn.addr !308
  %22 = getelementptr inbounds %_IO_FILE, %_IO_FILE* %21, i32 0, i32 0
  %23 = inttoptr i32 %19 to i32*
  %24 = call i32 @memcmp(i32* %22, i32* %23, i32 12), !insn.addr !309
  %25 = inttoptr i32 %20 to i32*
  %26 = call i32 @memcmp(i32* %22, i32* %25, i32 12), !insn.addr !310
  %27 = add i32 %1, add (i32 ptrtoint (i32* @global_var_53b4 to i32), i32 -12062), !insn.addr !311
  %28 = inttoptr i32 %27 to i8*
  %29 = call i32 (i8*, ...) @printf(i8* %28), !insn.addr !312
  %30 = add i32 %1, add (i32 ptrtoint (i32* @global_var_53b4 to i32), i32 -12271), !insn.addr !313
  %31 = inttoptr i32 %30 to i8*
  %32 = call i32 (i8*, ...) @printf(i8* %31), !insn.addr !314
  %33 = add i32 %1, add (i32 ptrtoint (i32* @global_var_53b4 to i32), i32 -12034), !insn.addr !315
  %34 = inttoptr i32 %33 to i8*
  %35 = call i32 (i8*, ...) @printf(i8* %34), !insn.addr !316
  %36 = add i32 %1, add (i32 ptrtoint (i32* @global_var_53b4 to i32), i32 -12245), !insn.addr !317
  %37 = add i32 %1, add (i32 ptrtoint (i32* @global_var_53b4 to i32), i32 -12239), !insn.addr !318
  %38 = inttoptr i32 %36 to i8*, !insn.addr !319
  %39 = inttoptr i32 %37 to i8*
  %40 = call i32 (i8*, i8*, ...) @sscanf(i8* %39, i8* %38), !insn.addr !320
  %41 = add i32 %1, add (i32 ptrtoint (i32* @global_var_53b4 to i32), i32 -12006), !insn.addr !321
  %42 = inttoptr i32 %41 to i8*
  %43 = call i32 (i8*, ...) @printf(i8* %42), !insn.addr !322
  %44 = add i32 %1, add (i32 ptrtoint (i32* @global_var_53b4 to i32), i32 -12231), !insn.addr !323
  %45 = add i32 %1, add (i32 ptrtoint (i32* @global_var_53b4 to i32), i32 -12229), !insn.addr !324
  %46 = inttoptr i32 %44 to i8*, !insn.addr !325
  %47 = inttoptr i32 %45 to i8*
  %48 = call %_IO_FILE* @fopen(i8* %47, i8* %46), !insn.addr !326
  %49 = icmp eq %_IO_FILE* %48, null, !insn.addr !327
  br i1 %49, label %dec_label_pc_1dd2, label %dec_label_pc_1db0, !insn.addr !328

dec_label_pc_1db0:                                ; preds = %dec_label_pc_1c40
  %50 = call i32 @fileno(%_IO_FILE* nonnull %48), !insn.addr !329
  %51 = call i32 @fclose(%_IO_FILE* nonnull %48), !insn.addr !330
  br label %dec_label_pc_1dd2, !insn.addr !331

dec_label_pc_1dd2:                                ; preds = %dec_label_pc_1db0, %dec_label_pc_1c40
  %52 = add i32 %1, add (i32 ptrtoint (i32* @global_var_53b4 to i32), i32 -11977), !insn.addr !332
  %53 = inttoptr i32 %52 to i8*
  %54 = call i32 (i8*, ...) @printf(i8* %53), !insn.addr !333
  %55 = add i32 %1, add (i32 ptrtoint (i32* @global_var_53b4 to i32), i32 -12195), !insn.addr !334
  %56 = call i32 @param_fread_fwrite(i32 %55), !insn.addr !335
  %57 = add i32 %1, add (i32 ptrtoint (i32* @global_var_53b4 to i32), i32 -11949), !insn.addr !336
  %58 = inttoptr i32 %57 to i8*
  %59 = call i32 (i8*, ...) @printf(i8* %58), !insn.addr !337
  %60 = add i32 %1, add (i32 ptrtoint (i32* @global_var_53b4 to i32), i32 -11921), !insn.addr !338
  %61 = inttoptr i32 %60 to i8*
  %62 = call i32 (i8*, ...) @printf(i8* %61), !insn.addr !339
  %63 = add i32 %1, add (i32 ptrtoint (i32* @global_var_53b4 to i32), i32 -11893), !insn.addr !340
  %64 = inttoptr i32 %63 to i8*
  %65 = call i32 (i8*, ...) @printf(i8* %64), !insn.addr !341
  %66 = add i32 %1, add (i32 ptrtoint (i32* @global_var_53b4 to i32), i32 -11866), !insn.addr !342
  %67 = inttoptr i32 %66 to i8*
  %68 = call i32 (i8*, ...) @printf(i8* %67), !insn.addr !343
  ret i32 %68, !insn.addr !344

; uselistorder directives
  uselistorder i32 %1, { 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 (i32)* @param_fread_fwrite, { 1, 0 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 4, 3, 2, 1, 0, 5 }
  uselistorder i32 (%_IO_FILE*)* @fileno, { 2, 1, 0, 3 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i8*, i8*, ...)* @sscanf, { 2, 1, 0, 3 }
  uselistorder i32 (i32*, i32*, i32)* @memcmp, { 4, 3, 2, 1, 0, 5 }
}

define i32 @param_linux_syscall(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1e40:
  %esi.0.reg2mem = alloca i32, !insn.addr !345
  %0 = call i32 (i32, ...) @syscall(i32 5), !insn.addr !346
  %1 = icmp slt i32 %0, 0, !insn.addr !347
  br i1 %1, label %dec_label_pc_1e78, label %dec_label_pc_1e66, !insn.addr !348

dec_label_pc_1e66:                                ; preds = %dec_label_pc_1e40
  %2 = call i32 (i32, ...) @syscall(i32 6), !insn.addr !349
  store i32 %0, i32* %esi.0.reg2mem, !insn.addr !350
  br label %dec_label_pc_1e81, !insn.addr !350

dec_label_pc_1e78:                                ; preds = %dec_label_pc_1e40
  %3 = call i32* @__errno_location(), !insn.addr !351
  %4 = load i32, i32* %3, align 4, !insn.addr !352
  %5 = sub i32 0, %4, !insn.addr !352
  store i32 %5, i32* %esi.0.reg2mem, !insn.addr !352
  br label %dec_label_pc_1e81, !insn.addr !352

dec_label_pc_1e81:                                ; preds = %dec_label_pc_1e78, %dec_label_pc_1e66
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  ret i32 %esi.0.reload, !insn.addr !353

; uselistorder directives
  uselistorder i32* %esi.0.reg2mem, { 0, 2, 1 }
}

define i32 @call_linux_syscall(i32 %arg1) local_unnamed_addr {
dec_label_pc_1e90:
  %esi.0.reg2mem = alloca i32, !insn.addr !354
  %0 = call i32 (i32, ...) @syscall(i32 5), !insn.addr !355
  %1 = icmp slt i32 %0, 0, !insn.addr !356
  br i1 %1, label %dec_label_pc_1ecb, label %dec_label_pc_1eb9, !insn.addr !357

dec_label_pc_1eb9:                                ; preds = %dec_label_pc_1e90
  %2 = call i32 (i32, ...) @syscall(i32 6), !insn.addr !358
  store i32 %0, i32* %esi.0.reg2mem, !insn.addr !359
  br label %dec_label_pc_1ed4, !insn.addr !359

dec_label_pc_1ecb:                                ; preds = %dec_label_pc_1e90
  %3 = call i32* @__errno_location(), !insn.addr !360
  %4 = load i32, i32* %3, align 4, !insn.addr !361
  %5 = sub i32 0, %4, !insn.addr !361
  store i32 %5, i32* %esi.0.reg2mem, !insn.addr !361
  br label %dec_label_pc_1ed4, !insn.addr !361

dec_label_pc_1ed4:                                ; preds = %dec_label_pc_1ecb, %dec_label_pc_1eb9
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %6 = ashr i32 %esi.0.reload, 31, !insn.addr !362
  %7 = or i32 %6, 42, !insn.addr !363
  ret i32 %7, !insn.addr !364

; uselistorder directives
  uselistorder i32* %esi.0.reg2mem, { 0, 2, 1 }
}

define i32 @param_win32_api(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1ef0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-88 = alloca i32, align 4
  %2 = bitcast i32* %stack_var_-88 to %stat*
  %3 = inttoptr i32 %arg2 to i8*, !insn.addr !365
  %4 = call i32 @stat(i8* %3, %stat* nonnull %2), !insn.addr !365
  %5 = icmp eq i32 %1, 0, !insn.addr !366
  %6 = icmp slt i32 %1, 0, !insn.addr !366
  %7 = icmp eq i1 %6, false, !insn.addr !367
  %8 = icmp eq i1 %5, false, !insn.addr !367
  %9 = icmp eq i1 %7, %8, !insn.addr !367
  %10 = select i1 %9, i32 42, i32 -2, !insn.addr !367
  %11 = icmp slt i32 %4, 0, !insn.addr !368
  %12 = icmp eq i1 %11, false, !insn.addr !369
  %13 = select i1 %12, i32 %10, i32 -1, !insn.addr !369
  ret i32 %13, !insn.addr !370
}

define i32 @call_win32_api(i32 %arg1) local_unnamed_addr {
dec_label_pc_1f40:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-88 = alloca i32, align 4
  %2 = load i32, i32* %0
  %3 = add i32 %2, add (i32 ptrtoint (i32* @global_var_50b7 to i32), i32 -12229), !insn.addr !371
  %4 = bitcast i32* %stack_var_-88 to %stat*
  %5 = inttoptr i32 %3 to i8*, !insn.addr !372
  %6 = call i32 @stat(i8* %5, %stat* nonnull %4), !insn.addr !373
  %7 = icmp eq i32 %1, 0, !insn.addr !374
  %8 = icmp slt i32 %1, 0, !insn.addr !374
  %9 = icmp eq i1 %8, false, !insn.addr !375
  %10 = icmp eq i1 %7, false, !insn.addr !375
  %11 = icmp eq i1 %9, %10, !insn.addr !375
  %12 = select i1 %11, i32 42, i32 -2, !insn.addr !375
  %13 = icmp slt i32 %6, 0, !insn.addr !376
  %14 = icmp eq i1 %13, false, !insn.addr !377
  %15 = select i1 %14, i32 %12, i32 -1, !insn.addr !377
  ret i32 %15, !insn.addr !378

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @param_fork_exec(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1f90:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !379
  %1 = load i32, i32* %0
  %stack_var_-4 = alloca i8, align 1
  %2 = trunc i32 %1 to i8, !insn.addr !379
  store i8 %2, i8* %stack_var_-4, align 1, !insn.addr !379
  %3 = call i32 @fork(), !insn.addr !380
  %4 = icmp slt i32 %3, 0, !insn.addr !381
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !382
  br i1 %4, label %dec_label_pc_1fe1, label %dec_label_pc_1fa9, !insn.addr !382

dec_label_pc_1fa9:                                ; preds = %dec_label_pc_1f90
  %5 = icmp eq i32 %3, 0, !insn.addr !381
  br i1 %5, label %dec_label_pc_1fe6, label %dec_label_pc_1fab, !insn.addr !383

dec_label_pc_1fab:                                ; preds = %dec_label_pc_1fa9
  %6 = bitcast i8* %stack_var_-4 to i32*, !insn.addr !384
  %7 = call i32 @waitpid(i32 %3, i32* nonnull %6, i32 0), !insn.addr !384
  %8 = icmp slt i32 %7, 0, !insn.addr !385
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !386
  br i1 %8, label %dec_label_pc_1fe1, label %dec_label_pc_1fc2, !insn.addr !386

dec_label_pc_1fc2:                                ; preds = %dec_label_pc_1fab
  %9 = load i8, i8* %stack_var_-4, align 1, !insn.addr !387
  %10 = urem i8 %9, -128
  %11 = icmp eq i8 %10, 0, !insn.addr !388
  %12 = icmp eq i1 %11, false, !insn.addr !389
  store i32 -3, i32* %eax.0.reg2mem, !insn.addr !389
  br i1 %12, label %dec_label_pc_1fe1, label %dec_label_pc_1fd0, !insn.addr !389

dec_label_pc_1fd0:                                ; preds = %dec_label_pc_1fc2
  %13 = sext i8 %9 to i32, !insn.addr !387
  %14 = udiv i32 %13, 256, !insn.addr !390
  %15 = urem i32 %14, 256, !insn.addr !390
  store i32 %15, i32* %eax.0.reg2mem, !insn.addr !391
  br label %dec_label_pc_1fe1, !insn.addr !391

dec_label_pc_1fe1:                                ; preds = %dec_label_pc_1fab, %dec_label_pc_1f90, %dec_label_pc_1fd0, %dec_label_pc_1fc2
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !392

dec_label_pc_1fe6:                                ; preds = %dec_label_pc_1fa9
  %16 = inttoptr i32 %arg2 to i8*, !insn.addr !393
  %17 = call i32 (i8*, i8*, ...) @execl(i8* %16, i8* %16), !insn.addr !393
  call void @_exit(i32 127), !insn.addr !394
  unreachable, !insn.addr !394

; uselistorder directives
  uselistorder i8 %9, { 1, 0 }
  uselistorder i32 %3, { 0, 2, 1 }
  uselistorder i8* %stack_var_-4, { 2, 0, 1 }
  uselistorder i32* %eax.0.reg2mem, { 0, 3, 4, 1, 2 }
  uselistorder i32 256, { 1, 0 }
  uselistorder label %dec_label_pc_1fe1, { 2, 3, 0, 1 }
}

define i32 @call_fork_exec(i32 %arg1) local_unnamed_addr {
dec_label_pc_2010:
  %0 = alloca i32
  %esi.0.reg2mem = alloca i32, !insn.addr !395
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-8 = alloca i8, align 1
  %3 = trunc i32 %1 to i8, !insn.addr !396
  store i8 %3, i8* %stack_var_-8, align 1, !insn.addr !396
  %4 = call i32 @fork(), !insn.addr !397
  %5 = icmp slt i32 %4, 0, !insn.addr !398
  store i32 -1, i32* %esi.0.reg2mem, !insn.addr !399
  br i1 %5, label %dec_label_pc_2059, label %dec_label_pc_202d, !insn.addr !399

dec_label_pc_202d:                                ; preds = %dec_label_pc_2010
  %6 = icmp eq i32 %4, 0, !insn.addr !398
  br i1 %6, label %dec_label_pc_2061, label %dec_label_pc_202f, !insn.addr !400

dec_label_pc_202f:                                ; preds = %dec_label_pc_202d
  %7 = bitcast i8* %stack_var_-8 to i32*
  %8 = call i32 @waitpid(i32 %4, i32* nonnull %7, i32 0), !insn.addr !401
  %9 = icmp slt i32 %8, 0, !insn.addr !402
  store i32 -1, i32* %esi.0.reg2mem, !insn.addr !403
  br i1 %9, label %dec_label_pc_2059, label %dec_label_pc_2046, !insn.addr !403

dec_label_pc_2046:                                ; preds = %dec_label_pc_202f
  %10 = load i8, i8* %stack_var_-8, align 1, !insn.addr !404
  %11 = urem i8 %10, -128
  %12 = icmp eq i8 %11, 0, !insn.addr !405
  %13 = icmp eq i1 %12, false, !insn.addr !406
  store i32 -1, i32* %esi.0.reg2mem, !insn.addr !406
  br i1 %13, label %dec_label_pc_2059, label %dec_label_pc_204d, !insn.addr !406

dec_label_pc_204d:                                ; preds = %dec_label_pc_2046
  %14 = sext i8 %10 to i32, !insn.addr !404
  %15 = and i32 %14, 65280, !insn.addr !407
  %16 = icmp eq i32 %15, 0, !insn.addr !408
  %17 = select i1 %16, i32 42, i32 -1, !insn.addr !409
  store i32 %17, i32* %esi.0.reg2mem, !insn.addr !409
  br label %dec_label_pc_2059, !insn.addr !409

dec_label_pc_2059:                                ; preds = %dec_label_pc_204d, %dec_label_pc_2046, %dec_label_pc_202f, %dec_label_pc_2010
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  ret i32 %esi.0.reload, !insn.addr !410

dec_label_pc_2061:                                ; preds = %dec_label_pc_202d
  %18 = add i32 %2, add (i32 ptrtoint (i32* @global_var_4fe8 to i32), i32 -11838), !insn.addr !411
  %19 = inttoptr i32 %18 to i8*, !insn.addr !412
  %20 = call i32 (i8*, i8*, ...) @execl(i8* %19, i8* %19), !insn.addr !413
  call void @_exit(i32 127), !insn.addr !414
  unreachable, !insn.addr !414

; uselistorder directives
  uselistorder i8* %19, { 1, 0 }
  uselistorder i8 %10, { 1, 0 }
  uselistorder i32 %4, { 0, 2, 1 }
  uselistorder i8* %stack_var_-8, { 2, 0, 1 }
  uselistorder i32* %0, { 1, 0 }
}

define i32 @param_pipe_communication(i32 %arg1) local_unnamed_addr {
dec_label_pc_2080:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !415
  %stack_var_-36 = alloca i32, align 4
  %1 = load i32, i32* %0
  %stack_var_-44 = alloca i32, align 4
  %stack_var_-56 = alloca i32, align 4
  %2 = load i32, i32* %0
  %3 = ptrtoint i32* %stack_var_-44 to i32, !insn.addr !416
  store i32 %3, i32* %stack_var_-56, align 4, !insn.addr !416
  %4 = insertvalue [2 x i32] undef, i32 %3, 0, !insn.addr !417
  %5 = call i32 @pipe([2 x i32] %4), !insn.addr !417
  %6 = icmp slt i32 %5, 0, !insn.addr !418
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !419
  br i1 %6, label %dec_label_pc_2110, label %dec_label_pc_20a1, !insn.addr !419

dec_label_pc_20a1:                                ; preds = %dec_label_pc_2080
  %7 = call i32 @fork(), !insn.addr !420
  %8 = icmp slt i32 %7, 0, !insn.addr !421
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !422
  br i1 %8, label %dec_label_pc_2110, label %dec_label_pc_20aa, !insn.addr !422

dec_label_pc_20aa:                                ; preds = %dec_label_pc_20a1
  %9 = icmp eq i32 %7, 0, !insn.addr !421
  br i1 %9, label %dec_label_pc_2116, label %dec_label_pc_20ac, !insn.addr !423

dec_label_pc_20ac:                                ; preds = %dec_label_pc_20aa
  %10 = ptrtoint i32* %stack_var_-56 to i32, !insn.addr !424
  %11 = call i32 @close(i32 %1), !insn.addr !425
  %12 = load i32, i32* %stack_var_-44, align 4, !insn.addr !426
  store i32 %12, i32* %stack_var_-56, align 4, !insn.addr !427
  %13 = call i32 @read(i32 %12, i32* nonnull %stack_var_-36, i32 31), !insn.addr !428
  %14 = add i32 %10, 20, !insn.addr !429
  %15 = add i32 %14, %13, !insn.addr !429
  %16 = inttoptr i32 %15 to i8*, !insn.addr !429
  store i8 0, i8* %16, align 1, !insn.addr !429
  %17 = load i32, i32* %stack_var_-44, align 4, !insn.addr !430
  store i32 %17, i32* %stack_var_-56, align 4, !insn.addr !431
  %18 = call i32 @close(i32 %17), !insn.addr !432
  store i32 0, i32* %stack_var_-56, align 4, !insn.addr !433
  %19 = call i32 @wait(i32 0), !insn.addr !434
  %20 = icmp eq i32 %13, 0, !insn.addr !435
  %21 = icmp slt i32 %13, 0, !insn.addr !435
  %22 = icmp eq i1 %21, false, !insn.addr !436
  %23 = icmp eq i1 %20, false, !insn.addr !436
  %24 = icmp eq i1 %22, %23, !insn.addr !436
  %25 = select i1 %24, i32 42, i32 -3, !insn.addr !436
  store i32 %25, i32* %eax.0.reg2mem, !insn.addr !437
  br label %dec_label_pc_2110, !insn.addr !437

dec_label_pc_2110:                                ; preds = %dec_label_pc_20a1, %dec_label_pc_2080, %dec_label_pc_20ac
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !438

dec_label_pc_2116:                                ; preds = %dec_label_pc_20aa
  %26 = load i32, i32* %stack_var_-44, align 4, !insn.addr !439
  store i32 %26, i32* %stack_var_-56, align 4, !insn.addr !440
  %27 = call i32 @close(i32 %26), !insn.addr !441
  %28 = add i32 %2, add (i32 ptrtoint (i32* @global_var_4f76 to i32), i32 -11828), !insn.addr !442
  %29 = inttoptr i32 %28 to i32*, !insn.addr !443
  %30 = call i32 @write(i32 %1, i32* %29, i32 9), !insn.addr !443
  %31 = call i32 @close(i32 %1), !insn.addr !444
  store i32 0, i32* %stack_var_-56, align 4, !insn.addr !445
  call void @_exit(i32 0), !insn.addr !446
  unreachable, !insn.addr !446

; uselistorder directives
  uselistorder i32 %13, { 1, 2, 0 }
  uselistorder i32 %7, { 1, 0 }
  uselistorder i32* %stack_var_-56, { 0, 1, 2, 3, 4, 6, 5 }
  uselistorder i32* %eax.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder i32 20, { 2, 0, 1 }
  uselistorder label %dec_label_pc_2110, { 2, 0, 1 }
}

define i32 @call_pipe_communication(i32 %arg1) local_unnamed_addr {
dec_label_pc_2160:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @param_pipe_communication(i32 %1), !insn.addr !447
  ret i32 %2, !insn.addr !448
}

define i32 @param_socket_create() local_unnamed_addr {
dec_label_pc_2180:
  %eax.0.reg2mem = alloca i32, !insn.addr !449
  %stack_var_-24 = alloca i32, align 4
  %stack_var_-28 = alloca i32, align 4
  %0 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !450
  %1 = icmp slt i32 %0, 0, !insn.addr !451
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !452
  br i1 %1, label %dec_label_pc_225f, label %dec_label_pc_21ab, !insn.addr !452

dec_label_pc_21ab:                                ; preds = %dec_label_pc_2180
  store i32 1, i32* %stack_var_-28, align 4, !insn.addr !453
  %2 = call i32 @setsockopt(i32 %0, i32 1, i32 2, i32* nonnull %stack_var_-28, i32 4), !insn.addr !454
  %3 = icmp slt i32 %2, 0, !insn.addr !455
  br i1 %3, label %dec_label_pc_223b, label %dec_label_pc_21d0, !insn.addr !456

dec_label_pc_21d0:                                ; preds = %dec_label_pc_21ab
  store i32 2, i32* %stack_var_-24, align 4, !insn.addr !457
  %4 = bitcast i32* %stack_var_-24 to %sockaddr*
  %5 = call i32 @bind(i32 %0, %sockaddr* nonnull %4, i32 16), !insn.addr !458
  %6 = icmp slt i32 %5, 0, !insn.addr !459
  br i1 %6, label %dec_label_pc_224e, label %dec_label_pc_2207, !insn.addr !460

dec_label_pc_2207:                                ; preds = %dec_label_pc_21d0
  %7 = call i32 @listen(i32 %0, i32 5), !insn.addr !461
  %8 = call i32 @close(i32 %0), !insn.addr !462
  %9 = icmp slt i32 %7, 0, !insn.addr !463
  %10 = select i1 %9, i32 -4, i32 42, !insn.addr !464
  store i32 %10, i32* %eax.0.reg2mem, !insn.addr !465
  br label %dec_label_pc_225f, !insn.addr !465

dec_label_pc_223b:                                ; preds = %dec_label_pc_21ab
  %11 = call i32 @close(i32 %0), !insn.addr !466
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !467
  br label %dec_label_pc_225f, !insn.addr !467

dec_label_pc_224e:                                ; preds = %dec_label_pc_21d0
  %12 = call i32 @close(i32 %0), !insn.addr !468
  store i32 -3, i32* %eax.0.reg2mem, !insn.addr !469
  br label %dec_label_pc_225f, !insn.addr !469

dec_label_pc_225f:                                ; preds = %dec_label_pc_2180, %dec_label_pc_224e, %dec_label_pc_223b, %dec_label_pc_2207
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !470

; uselistorder directives
  uselistorder i32 %0, { 0, 4, 1, 2, 3, 5, 6 }
  uselistorder i32* %eax.0.reg2mem, { 0, 3, 4, 2, 1 }
  uselistorder label %dec_label_pc_225f, { 1, 2, 3, 0 }
}

define i32 @call_socket_create(i32 %arg1) local_unnamed_addr {
dec_label_pc_2270:
  %0 = call i32 @param_socket_create(), !insn.addr !471
  ret i32 %0, !insn.addr !472
}

define i32 @param_shmget_shmat() local_unnamed_addr {
dec_label_pc_2290:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !473
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4d64 to i32), i32 -11818), !insn.addr !474
  %3 = inttoptr i32 %2 to i8*, !insn.addr !475
  %4 = call i32 (i8*, i32, ...) @open(i8* %3, i32 66), !insn.addr !476
  %5 = icmp slt i32 %4, 0, !insn.addr !477
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !478
  br i1 %5, label %dec_label_pc_236c, label %dec_label_pc_22c9, !insn.addr !478

dec_label_pc_22c9:                                ; preds = %dec_label_pc_2290
  %6 = call i32 @close(i32 %4), !insn.addr !479
  %7 = call i32 @ftok(i8* %3, i32 42), !insn.addr !480
  %8 = icmp slt i32 %7, 0, !insn.addr !481
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !482
  br i1 %8, label %dec_label_pc_236c, label %dec_label_pc_22e8, !insn.addr !482

dec_label_pc_22e8:                                ; preds = %dec_label_pc_22c9
  %9 = call i32 @shmget(i32 %7, i32 4096, i32 ptrtoint (i32* @global_var_3b6 to i32)), !insn.addr !483
  %10 = icmp slt i32 %9, 0, !insn.addr !484
  store i32 -2, i32* %storemerge.reg2mem, !insn.addr !485
  br i1 %10, label %dec_label_pc_236c, label %dec_label_pc_2302, !insn.addr !485

dec_label_pc_2302:                                ; preds = %dec_label_pc_22e8
  %11 = call i32* @shmat(i32 %9, i32* null, i32 0), !insn.addr !486
  %12 = icmp eq i32* %11, inttoptr (i32 -1 to i32*), !insn.addr !487
  store i32 -3, i32* %storemerge.reg2mem, !insn.addr !488
  br i1 %12, label %dec_label_pc_236c, label %dec_label_pc_2319, !insn.addr !488

dec_label_pc_2319:                                ; preds = %dec_label_pc_2302
  %13 = ptrtoint i32* %11 to i32, !insn.addr !486
  %14 = add i32 %13, 12, !insn.addr !489
  %15 = inttoptr i32 %14 to i8*, !insn.addr !489
  store i8 0, i8* %15, align 1, !insn.addr !489
  %16 = add i32 %13, 8, !insn.addr !490
  %17 = inttoptr i32 %16 to i32*, !insn.addr !490
  store i32 2037542765, i32* %17, align 4, !insn.addr !490
  %18 = add i32 %13, 4, !insn.addr !491
  %19 = inttoptr i32 %18 to i32*, !insn.addr !491
  store i32 1699570789, i32* %19, align 4, !insn.addr !491
  store i32 1918986323, i32* %11, align 4, !insn.addr !492
  %20 = bitcast i32* %11 to i8*, !insn.addr !493
  %21 = call i32 @strlen(i8* %20), !insn.addr !494
  %22 = call i32 @shmdt(i32* %11), !insn.addr !495
  %23 = call i32 @shmctl(i32 %9, i32 0, %shmid_ds* null), !insn.addr !496
  store i32 %21, i32* %storemerge.reg2mem, !insn.addr !497
  br label %dec_label_pc_236c, !insn.addr !497

dec_label_pc_236c:                                ; preds = %dec_label_pc_2290, %dec_label_pc_22c9, %dec_label_pc_22e8, %dec_label_pc_2302, %dec_label_pc_2319
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !498

; uselistorder directives
  uselistorder i32* %11, { 2, 0, 1, 4, 3 }
  uselistorder i32* %storemerge.reg2mem, { 0, 5, 1, 2, 3, 4 }
  uselistorder i32 (i8*)* @strlen, { 4, 3, 2, 1, 0, 5 }
  uselistorder i32 12, { 6, 2, 3, 1, 7, 4, 5, 0 }
  uselistorder i32 (i32)* @close, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder label %dec_label_pc_236c, { 4, 3, 2, 1, 0 }
}

define i32 @call_shmget_shmat(i32 %arg1) local_unnamed_addr {
dec_label_pc_2380:
  %0 = call i32 @param_shmget_shmat(), !insn.addr !499
  %1 = icmp eq i32 %0, 0, !insn.addr !500
  %2 = icmp slt i32 %0, 0, !insn.addr !500
  %3 = icmp eq i1 %2, false, !insn.addr !501
  %4 = icmp eq i1 %1, false, !insn.addr !501
  %5 = icmp eq i1 %3, %4, !insn.addr !501
  %6 = select i1 %5, i32 42, i32 -1, !insn.addr !501
  ret i32 %6, !insn.addr !502
}

define i32 @param_signal_handling(i32 %arg1) local_unnamed_addr {
dec_label_pc_23b0:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !503
  %.reg2mem10 = alloca i32, !insn.addr !503
  %esi.1.reg2mem = alloca i32, !insn.addr !503
  %.reg2mem = alloca i32, !insn.addr !503
  %esi.0.reg2mem = alloca i32, !insn.addr !503
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4c46 to i32), i32 -19184), !insn.addr !504
  %3 = inttoptr i32 %2 to void (i32)*, !insn.addr !505
  %4 = call void (i32)* @signal(i32 10, void (i32)* %3), !insn.addr !505
  %5 = icmp eq void (i32)* %4, inttoptr (i32 -1 to void (i32)*), !insn.addr !506
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !507
  br i1 %5, label %dec_label_pc_250a, label %dec_label_pc_23e0, !insn.addr !507

dec_label_pc_23e0:                                ; preds = %dec_label_pc_23b0
  %6 = call void (i32)* @signal(i32 14, void (i32)* %3), !insn.addr !508
  %7 = icmp eq void (i32)* %6, inttoptr (i32 -1 to void (i32)*), !insn.addr !509
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !510
  br i1 %7, label %dec_label_pc_250a, label %dec_label_pc_23f9, !insn.addr !510

dec_label_pc_23f9:                                ; preds = %dec_label_pc_23e0
  %8 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4c46 to i32), i32 260), !insn.addr !511
  %9 = inttoptr i32 %8 to i32*, !insn.addr !511
  store i32 0, i32* %9, align 4, !insn.addr !511
  %10 = call i32 @raise(i32 10), !insn.addr !512
  %11 = load i32, i32* %9, align 4
  %12 = icmp eq i32 %11, 0, !insn.addr !513
  %13 = icmp eq i1 %12, false, !insn.addr !514
  store i32 ptrtoint (i32* @global_var_3e8 to i32), i32* %esi.0.reg2mem, !insn.addr !514
  store i32 %11, i32* %.reg2mem, !insn.addr !514
  br i1 %13, label %dec_label_pc_243f, label %dec_label_pc_2420, !insn.addr !514

dec_label_pc_2420:                                ; preds = %dec_label_pc_23f9, %dec_label_pc_2435
  %14 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !515
  %15 = load i32, i32* %9, align 4
  %16 = icmp eq i32 %15, 0, !insn.addr !516
  %17 = icmp eq i1 %16, false, !insn.addr !517
  store i32 %15, i32* %.reg2mem, !insn.addr !517
  br i1 %17, label %dec_label_pc_243f, label %dec_label_pc_2435, !insn.addr !517

dec_label_pc_2435:                                ; preds = %dec_label_pc_2420
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %18 = add i32 %esi.0.reload, -1, !insn.addr !518
  %19 = icmp ult i32 %esi.0.reload, 2
  store i32 %18, i32* %esi.0.reg2mem, !insn.addr !519
  store i32 %15, i32* %.reg2mem, !insn.addr !519
  br i1 %19, label %dec_label_pc_243f, label %dec_label_pc_2420, !insn.addr !519

dec_label_pc_243f:                                ; preds = %dec_label_pc_2420, %dec_label_pc_2435, %dec_label_pc_23f9
  %.reload = load i32, i32* %.reg2mem, !insn.addr !520
  %20 = icmp eq i32 %.reload, 0, !insn.addr !520
  store i32 -3, i32* %eax.0.reg2mem, !insn.addr !521
  br i1 %20, label %dec_label_pc_250a, label %dec_label_pc_244c, !insn.addr !521

dec_label_pc_244c:                                ; preds = %dec_label_pc_243f
  %21 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4c46 to i32), i32 264), !insn.addr !522
  %22 = inttoptr i32 %21 to i32*, !insn.addr !522
  %23 = load i32, i32* %22, align 4, !insn.addr !522
  %24 = icmp eq i32 %23, 10, !insn.addr !523
  %25 = icmp eq i1 %24, false, !insn.addr !524
  store i32 -4, i32* %eax.0.reg2mem, !insn.addr !524
  br i1 %25, label %dec_label_pc_250a, label %dec_label_pc_2460, !insn.addr !524

dec_label_pc_2460:                                ; preds = %dec_label_pc_244c
  store i32 0, i32* %9, align 4, !insn.addr !525
  %26 = call i32 @alarm(i32 1), !insn.addr !526
  %27 = load i32, i32* %9, align 4
  %28 = icmp eq i32 %27, 0, !insn.addr !527
  %29 = icmp eq i1 %28, false, !insn.addr !528
  store i32 ptrtoint ([4 x i8]* @global_var_7d0 to i32), i32* %esi.1.reg2mem, !insn.addr !528
  store i32 %27, i32* %.reg2mem10, !insn.addr !528
  br i1 %29, label %dec_label_pc_24af, label %dec_label_pc_2490, !insn.addr !528

dec_label_pc_2490:                                ; preds = %dec_label_pc_2460, %dec_label_pc_24a5
  %30 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !529
  %31 = load i32, i32* %9, align 4
  %32 = icmp eq i32 %31, 0, !insn.addr !530
  %33 = icmp eq i1 %32, false, !insn.addr !531
  store i32 %31, i32* %.reg2mem10, !insn.addr !531
  br i1 %33, label %dec_label_pc_24af, label %dec_label_pc_24a5, !insn.addr !531

dec_label_pc_24a5:                                ; preds = %dec_label_pc_2490
  %esi.1.reload = load i32, i32* %esi.1.reg2mem
  %34 = add i32 %esi.1.reload, -1, !insn.addr !532
  %35 = icmp ult i32 %esi.1.reload, 2
  store i32 %34, i32* %esi.1.reg2mem, !insn.addr !533
  store i32 %31, i32* %.reg2mem10, !insn.addr !533
  br i1 %35, label %dec_label_pc_24af, label %dec_label_pc_2490, !insn.addr !533

dec_label_pc_24af:                                ; preds = %dec_label_pc_2490, %dec_label_pc_24a5, %dec_label_pc_2460
  %.reload11 = load i32, i32* %.reg2mem10, !insn.addr !534
  %36 = icmp eq i32 %.reload11, 0, !insn.addr !534
  store i32 -5, i32* %eax.0.reg2mem, !insn.addr !535
  br i1 %36, label %dec_label_pc_250a, label %dec_label_pc_24bd, !insn.addr !535

dec_label_pc_24bd:                                ; preds = %dec_label_pc_24af
  %37 = load i32, i32* %22, align 4, !insn.addr !536
  %38 = icmp eq i32 %37, 14, !insn.addr !537
  %39 = icmp eq i1 %38, false, !insn.addr !538
  store i32 -5, i32* %eax.0.reg2mem, !insn.addr !538
  br i1 %39, label %dec_label_pc_250a, label %dec_label_pc_24c8, !insn.addr !538

dec_label_pc_24c8:                                ; preds = %dec_label_pc_24bd
  %40 = call void (i32)* @signal(i32 10, void (i32)* null), !insn.addr !539
  %41 = call void (i32)* @signal(i32 14, void (i32)* null), !insn.addr !540
  store i32 42, i32* %eax.0.reg2mem, !insn.addr !541
  br label %dec_label_pc_250a, !insn.addr !541

dec_label_pc_250a:                                ; preds = %dec_label_pc_243f, %dec_label_pc_23e0, %dec_label_pc_23b0, %dec_label_pc_24c8, %dec_label_pc_24bd, %dec_label_pc_24af, %dec_label_pc_244c
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !542

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
  uselistorder i32 10, { 0, 1, 2, 3, 5, 4, 6 }
  uselistorder label %dec_label_pc_250a, { 3, 4, 5, 6, 0, 1, 2 }
  uselistorder label %dec_label_pc_24af, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2490, { 1, 0 }
  uselistorder label %dec_label_pc_243f, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2420, { 1, 0 }
}

define i32 @signal_handler(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2510:
  %0 = add i32 %arg1, ptrtoint (i32* @global_var_4aeb to i32), !insn.addr !543
  %1 = add i32 %arg1, add (i32 ptrtoint (i32* @global_var_4aeb to i32), i32 260), !insn.addr !544
  %2 = inttoptr i32 %1 to i32*, !insn.addr !544
  store i32 1, i32* %2, align 4, !insn.addr !544
  %3 = add i32 %arg1, add (i32 ptrtoint (i32* @global_var_4aeb to i32), i32 264), !insn.addr !545
  %4 = inttoptr i32 %3 to i32*, !insn.addr !545
  store i32 %arg2, i32* %4, align 4, !insn.addr !545
  ret i32 %0, !insn.addr !546

; uselistorder directives
  uselistorder i32 264, { 1, 0 }
  uselistorder i32 260, { 1, 0 }
}

define i32 @call_signal_handling(i32 %arg1) local_unnamed_addr {
dec_label_pc_2540:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @param_signal_handling(i32 %1), !insn.addr !547
  ret i32 %2, !insn.addr !548
}

define i32 @test_system_calls(i32 %arg1) local_unnamed_addr {
dec_label_pc_2560:
  %0 = alloca i32
  %stack_var_-104 = alloca i8, align 1
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4a94 to i32), i32 -11376), !insn.addr !549
  %3 = inttoptr i32 %2 to i8*, !insn.addr !550
  %4 = call i32 @puts(i8* %3), !insn.addr !551
  %5 = call i32 (i32, ...) @syscall(i32 5), !insn.addr !552
  %6 = icmp slt i32 %5, 0, !insn.addr !553
  br i1 %6, label %dec_label_pc_25ae, label %dec_label_pc_259c, !insn.addr !554

dec_label_pc_259c:                                ; preds = %dec_label_pc_2560
  %7 = call i32 (i32, ...) @syscall(i32 6), !insn.addr !555
  br label %dec_label_pc_25b7, !insn.addr !556

dec_label_pc_25ae:                                ; preds = %dec_label_pc_2560
  %8 = call i32* @__errno_location(), !insn.addr !557
  br label %dec_label_pc_25b7, !insn.addr !558

dec_label_pc_25b7:                                ; preds = %dec_label_pc_25ae, %dec_label_pc_259c
  %9 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4a94 to i32), i32 -12229), !insn.addr !559
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4a94 to i32), i32 -11787), !insn.addr !560
  %11 = inttoptr i32 %10 to i8*, !insn.addr !561
  %12 = call i32 (i8*, ...) @printf(i8* %11), !insn.addr !562
  %13 = bitcast i8* %stack_var_-104 to %stat*
  %14 = inttoptr i32 %9 to i8*, !insn.addr !563
  %15 = call i32 @stat(i8* %14, %stat* nonnull %13), !insn.addr !564
  %16 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4a94 to i32), i32 -11759), !insn.addr !565
  %17 = inttoptr i32 %16 to i8*, !insn.addr !566
  %18 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !567
  %19 = call i32 @fork(), !insn.addr !568
  %20 = icmp slt i32 %19, 0, !insn.addr !569
  br i1 %20, label %dec_label_pc_264e, label %dec_label_pc_261b, !insn.addr !570

dec_label_pc_261b:                                ; preds = %dec_label_pc_25b7
  %21 = icmp eq i32 %19, 0, !insn.addr !569
  br i1 %21, label %dec_label_pc_26cb, label %dec_label_pc_2621, !insn.addr !571

dec_label_pc_2621:                                ; preds = %dec_label_pc_261b
  %22 = bitcast i8* %stack_var_-104 to i32*
  %23 = call i32 @waitpid(i32 %19, i32* nonnull %22, i32 0), !insn.addr !572
  br label %dec_label_pc_264e

dec_label_pc_264e:                                ; preds = %dec_label_pc_2621, %dec_label_pc_25b7
  %24 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4a94 to i32), i32 -11731), !insn.addr !573
  %25 = inttoptr i32 %24 to i8*, !insn.addr !574
  %26 = call i32 (i8*, ...) @printf(i8* %25), !insn.addr !575
  %27 = call i32 @param_pipe_communication(i32 ptrtoint (i32* @0 to i32)), !insn.addr !576
  %28 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4a94 to i32), i32 -11703), !insn.addr !577
  %29 = inttoptr i32 %28 to i8*, !insn.addr !578
  %30 = call i32 (i8*, ...) @printf(i8* %29), !insn.addr !579
  %31 = call i32 @param_socket_create(), !insn.addr !580
  %32 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4a94 to i32), i32 -11675), !insn.addr !581
  %33 = inttoptr i32 %32 to i8*, !insn.addr !582
  %34 = call i32 (i8*, ...) @printf(i8* %33), !insn.addr !583
  %35 = call i32 @param_shmget_shmat(), !insn.addr !584
  %36 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4a94 to i32), i32 -11647), !insn.addr !585
  %37 = inttoptr i32 %36 to i8*, !insn.addr !586
  %38 = call i32 (i8*, ...) @printf(i8* %37), !insn.addr !587
  %39 = call i32 @param_signal_handling(i32 ptrtoint (i32* @0 to i32)), !insn.addr !588
  %40 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4a94 to i32), i32 -11619), !insn.addr !589
  %41 = inttoptr i32 %40 to i8*, !insn.addr !590
  %42 = call i32 (i8*, ...) @printf(i8* %41), !insn.addr !591
  ret i32 %42, !insn.addr !592

dec_label_pc_26cb:                                ; preds = %dec_label_pc_261b
  %43 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4a94 to i32), i32 -11838), !insn.addr !593
  %44 = inttoptr i32 %43 to i8*, !insn.addr !594
  %45 = call i32 (i8*, i8*, ...) @execl(i8* %44, i8* %44), !insn.addr !595
  call void @_exit(i32 127), !insn.addr !596
  unreachable, !insn.addr !596

; uselistorder directives
  uselistorder i32 %19, { 0, 2, 1 }
  uselistorder i32 %1, { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder void (i32)* @_exit, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i8*, i8*, ...)* @execl, { 2, 1, 0, 3 }
  uselistorder i32 (i32)* @param_signal_handling, { 1, 0 }
  uselistorder i32 ()* @param_shmget_shmat, { 1, 0 }
  uselistorder i32 ()* @param_socket_create, { 1, 0 }
  uselistorder i32 (i32)* @param_pipe_communication, { 1, 0 }
  uselistorder i32 (i32, i32*, i32)* @waitpid, { 2, 1, 0, 3 }
  uselistorder i32 ()* @fork, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i8*, %stat*)* @stat, { 2, 1, 0, 3 }
  uselistorder i32* ()* @__errno_location, { 2, 1, 0, 3 }
  uselistorder i32 6, { 1, 2, 3, 0 }
  uselistorder i32 (i32, ...)* @syscall, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder i32 5, { 1, 2, 3, 4, 0 }
}

define i32 @thread_compute(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_26f0:
  %0 = inttoptr i32 %arg2 to i32*, !insn.addr !597
  %1 = load i32, i32* %0, align 4, !insn.addr !597
  %2 = mul i32 %1, %1, !insn.addr !598
  %3 = call i32* @malloc(i32 4), !insn.addr !599
  %4 = ptrtoint i32* %3 to i32, !insn.addr !599
  store i32 %2, i32* %3, align 4, !insn.addr !600
  ret i32 %4, !insn.addr !601
}

define i32 @param_pthread_create(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2720:
  %0 = alloca i32
  %esi.0.reg2mem = alloca i32, !insn.addr !602
  %stack_var_-16 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %1 = load i32, i32* %0
  %stack_var_-8 = alloca i32, align 4
  store i32 %arg2, i32* %stack_var_-12, align 4, !insn.addr !603
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_48d6 to i32), i32 -18704), !insn.addr !604
  %3 = inttoptr i32 %2 to i32* (i32*)*, !insn.addr !605
  %4 = call i32 @pthread_create(i32* nonnull %stack_var_-8, i32* null, i32* (i32*)* %3, i32* nonnull %stack_var_-12), !insn.addr !606
  %5 = icmp eq i32 %4, 0, !insn.addr !607
  %6 = icmp eq i1 %5, false, !insn.addr !608
  store i32 -1, i32* %esi.0.reg2mem, !insn.addr !608
  br i1 %6, label %dec_label_pc_2783, label %dec_label_pc_275d, !insn.addr !608

dec_label_pc_275d:                                ; preds = %dec_label_pc_2720
  %7 = load i32, i32* %stack_var_-8, align 4, !insn.addr !609
  %8 = bitcast i32* %stack_var_-16 to i32**, !insn.addr !610
  %9 = call i32 @pthread_join(i32 %7, i32** nonnull %8), !insn.addr !610
  %10 = load i32, i32* %stack_var_-16, align 4, !insn.addr !611
  %11 = inttoptr i32 %10 to i32*, !insn.addr !612
  %12 = load i32, i32* %11, align 4, !insn.addr !612
  call void @free(i32* %11), !insn.addr !613
  store i32 %12, i32* %esi.0.reg2mem, !insn.addr !614
  br label %dec_label_pc_2783, !insn.addr !614

dec_label_pc_2783:                                ; preds = %dec_label_pc_275d, %dec_label_pc_2720
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  ret i32 %esi.0.reload, !insn.addr !615

; uselistorder directives
  uselistorder i32* %stack_var_-8, { 1, 0 }
  uselistorder i32* %stack_var_-16, { 1, 0 }
}

define i32 @call_pthread_create(i32 %arg1) local_unnamed_addr {
dec_label_pc_2790:
  %0 = alloca i32
  %esi.0.reg2mem = alloca i32, !insn.addr !616
  %stack_var_-16 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %1 = load i32, i32* %0
  %stack_var_-8 = alloca i32, align 4
  store i32 7, i32* %stack_var_-12, align 4, !insn.addr !617
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4866 to i32), i32 -18704), !insn.addr !618
  %3 = inttoptr i32 %2 to i32* (i32*)*, !insn.addr !619
  %4 = call i32 @pthread_create(i32* nonnull %stack_var_-8, i32* null, i32* (i32*)* %3, i32* nonnull %stack_var_-12), !insn.addr !620
  %5 = icmp eq i32 %4, 0, !insn.addr !621
  %6 = icmp eq i1 %5, false, !insn.addr !622
  store i32 -1, i32* %esi.0.reg2mem, !insn.addr !622
  br i1 %6, label %dec_label_pc_27f3, label %dec_label_pc_27cd, !insn.addr !622

dec_label_pc_27cd:                                ; preds = %dec_label_pc_2790
  %7 = load i32, i32* %stack_var_-8, align 4, !insn.addr !623
  %8 = bitcast i32* %stack_var_-16 to i32**, !insn.addr !624
  %9 = call i32 @pthread_join(i32 %7, i32** nonnull %8), !insn.addr !624
  %10 = load i32, i32* %stack_var_-16, align 4, !insn.addr !625
  %11 = inttoptr i32 %10 to i32*, !insn.addr !626
  %12 = load i32, i32* %11, align 4, !insn.addr !626
  call void @free(i32* %11), !insn.addr !627
  store i32 %12, i32* %esi.0.reg2mem, !insn.addr !628
  br label %dec_label_pc_27f3, !insn.addr !628

dec_label_pc_27f3:                                ; preds = %dec_label_pc_27cd, %dec_label_pc_2790
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  ret i32 %esi.0.reload, !insn.addr !629

; uselistorder directives
  uselistorder i32* %stack_var_-8, { 1, 0 }
  uselistorder i32* %stack_var_-16, { 1, 0 }
}

define i32 @thread_sum(i32 %arg1) local_unnamed_addr {
dec_label_pc_2800:
  %0 = add i32 %arg1, 8, !insn.addr !630
  %1 = inttoptr i32 %0 to i32*, !insn.addr !630
  store i32 0, i32* %1, align 4, !insn.addr !630
  %2 = inttoptr i32 %arg1 to i32*, !insn.addr !631
  %3 = load i32, i32* %2, align 4, !insn.addr !631
  %4 = add i32 %arg1, 4, !insn.addr !632
  %5 = inttoptr i32 %4 to i32*, !insn.addr !632
  %6 = load i32, i32* %5, align 4, !insn.addr !632
  %7 = icmp slt i32 %6, %3, !insn.addr !633
  br i1 %7, label %dec_label_pc_2832, label %dec_label_pc_2819, !insn.addr !633

dec_label_pc_2819:                                ; preds = %dec_label_pc_2800
  %8 = sub i32 %6, %3, !insn.addr !634
  %9 = sub i32 0, %3
  %10 = sub i32 %9, 1
  %11 = add i32 %6, %10, !insn.addr !635
  %12 = zext i32 %8 to i64, !insn.addr !636
  %13 = zext i32 %11 to i64, !insn.addr !636
  %14 = mul nuw i64 %12, %13, !insn.addr !636
  %15 = trunc i64 %14 to i32, !insn.addr !636
  %16 = add i32 %3, 1, !insn.addr !637
  %17 = udiv i64 %14, 2
  %18 = trunc i64 %17 to i32
  %19 = and i32 %18, -2147483648, !insn.addr !638
  %20 = udiv i32 %15, 2, !insn.addr !638
  %21 = or i32 %19, %20, !insn.addr !638
  %22 = mul i32 %8, %16, !insn.addr !639
  %23 = add i32 %22, %3, !insn.addr !640
  %24 = add i32 %23, %21, !insn.addr !641
  store i32 %24, i32* %1, align 4, !insn.addr !642
  br label %dec_label_pc_2832, !insn.addr !642

dec_label_pc_2832:                                ; preds = %dec_label_pc_2819, %dec_label_pc_2800
  ret i32 0, !insn.addr !643

; uselistorder directives
  uselistorder i32 %6, { 0, 2, 1 }
  uselistorder i32 %3, { 1, 2, 0, 4, 3 }
  uselistorder i32 %arg1, { 2, 1, 0 }
}

define i32 @param_pthread_join() local_unnamed_addr {
dec_label_pc_2840:
  %0 = alloca i32
  %esi.0.reg2mem = alloca i32, !insn.addr !644
  %stack_var_-52 = alloca i32, align 4
  %stack_var_-56 = alloca i32, align 4
  %stack_var_-60 = alloca i32, align 4
  %stack_var_-24 = alloca i32, align 4
  %stack_var_-36 = alloca i32, align 4
  %stack_var_-48 = alloca i32, align 4
  %1 = load i32, i32* %0
  store i32 1, i32* %stack_var_-48, align 4, !insn.addr !645
  store i32 11, i32* %stack_var_-36, align 4, !insn.addr !646
  store i32 21, i32* %stack_var_-24, align 4, !insn.addr !647
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_47b4 to i32), i32 -18432), !insn.addr !648
  %3 = inttoptr i32 %2 to i32* (i32*)*, !insn.addr !649
  %4 = call i32 @pthread_create(i32* nonnull %stack_var_-60, i32* null, i32* (i32*)* %3, i32* nonnull %stack_var_-48), !insn.addr !650
  %5 = icmp eq i32 %4, 0, !insn.addr !651
  %6 = icmp eq i1 %5, false, !insn.addr !652
  store i32 -1, i32* %esi.0.reg2mem, !insn.addr !652
  br i1 %6, label %dec_label_pc_2949, label %dec_label_pc_28c3, !insn.addr !652

dec_label_pc_28c3:                                ; preds = %dec_label_pc_2840
  %7 = call i32 @pthread_create(i32* nonnull %stack_var_-56, i32* null, i32* (i32*)* %3, i32* nonnull %stack_var_-36), !insn.addr !653
  %8 = icmp eq i32 %7, 0, !insn.addr !654
  %9 = icmp eq i1 %8, false, !insn.addr !655
  store i32 -1, i32* %esi.0.reg2mem, !insn.addr !655
  br i1 %9, label %dec_label_pc_2949, label %dec_label_pc_28dc, !insn.addr !655

dec_label_pc_28dc:                                ; preds = %dec_label_pc_28c3
  %10 = call i32 @pthread_create(i32* nonnull %stack_var_-52, i32* null, i32* (i32*)* %3, i32* nonnull %stack_var_-24), !insn.addr !656
  %11 = icmp eq i32 %10, 0, !insn.addr !657
  %12 = icmp eq i1 %11, false, !insn.addr !658
  store i32 -1, i32* %esi.0.reg2mem, !insn.addr !658
  br i1 %12, label %dec_label_pc_2949, label %dec_label_pc_28f5, !insn.addr !658

dec_label_pc_28f5:                                ; preds = %dec_label_pc_28dc
  %13 = load i32, i32* %stack_var_-60, align 4, !insn.addr !659
  %14 = call i32 @pthread_join(i32 %13, i32** null), !insn.addr !660
  %15 = icmp eq i32 %14, 0, !insn.addr !661
  %16 = icmp eq i1 %15, false, !insn.addr !662
  store i32 -2, i32* %esi.0.reg2mem, !insn.addr !662
  br i1 %16, label %dec_label_pc_2949, label %dec_label_pc_290f, !insn.addr !662

dec_label_pc_290f:                                ; preds = %dec_label_pc_28f5
  %17 = load i32, i32* %stack_var_-56, align 4, !insn.addr !663
  %18 = call i32 @pthread_join(i32 %17, i32** null), !insn.addr !664
  %19 = icmp eq i32 %18, 0, !insn.addr !665
  %20 = icmp eq i1 %19, false, !insn.addr !666
  store i32 -2, i32* %esi.0.reg2mem, !insn.addr !666
  br i1 %20, label %dec_label_pc_2949, label %dec_label_pc_2928, !insn.addr !666

dec_label_pc_2928:                                ; preds = %dec_label_pc_290f
  %21 = load i32, i32* %stack_var_-52, align 4, !insn.addr !667
  %22 = call i32 @pthread_join(i32 %21, i32** null), !insn.addr !668
  %23 = icmp eq i32 %22, 0, !insn.addr !669
  %24 = icmp eq i1 %23, false, !insn.addr !670
  %spec.select = select i1 %24, i32 -2, i32 0
  ret i32 %spec.select

dec_label_pc_2949:                                ; preds = %dec_label_pc_290f, %dec_label_pc_28f5, %dec_label_pc_28dc, %dec_label_pc_28c3, %dec_label_pc_2840
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  ret i32 %esi.0.reload, !insn.addr !671

; uselistorder directives
  uselistorder i32* %stack_var_-60, { 1, 0 }
  uselistorder i32* %stack_var_-56, { 1, 0 }
  uselistorder i32* %stack_var_-52, { 1, 0 }
}

define i32 @call_pthread_join(i32 %arg1) local_unnamed_addr {
dec_label_pc_2960:
  %0 = call i32 @param_pthread_join(), !insn.addr !672
  ret i32 %0, !insn.addr !673
}

define i32 @thread_increment(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2980:
  %0 = alloca i32
  %esi.0.reg2mem = alloca i32, !insn.addr !674
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %arg2 to i32*, !insn.addr !675
  %3 = load i32, i32* %2, align 4, !insn.addr !675
  %4 = icmp slt i32 %3, 1
  br i1 %4, label %dec_label_pc_29d8, label %dec_label_pc_299c, !insn.addr !676

dec_label_pc_299c:                                ; preds = %dec_label_pc_2980
  %5 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4675 to i32), i32 332), !insn.addr !677
  %6 = inttoptr i32 %5 to i32*, !insn.addr !678
  %7 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4675 to i32), i32 268)
  %8 = inttoptr i32 %7 to i32*
  store i32 %3, i32* %esi.0.reg2mem, !insn.addr !679
  br label %dec_label_pc_29b0, !insn.addr !679

dec_label_pc_29b0:                                ; preds = %dec_label_pc_29b0, %dec_label_pc_299c
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %9 = call i32 @pthread_mutex_lock(i32* %6), !insn.addr !678
  %10 = load i32, i32* %8, align 4, !insn.addr !680
  %11 = add i32 %10, 1, !insn.addr !680
  store i32 %11, i32* %8, align 4, !insn.addr !680
  %12 = call i32 @pthread_mutex_unlock(i32* %6), !insn.addr !681
  %13 = call i32 @usleep(i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !682
  %14 = add i32 %esi.0.reload, -1, !insn.addr !683
  %15 = icmp eq i32 %14, 0, !insn.addr !683
  %16 = icmp eq i1 %15, false, !insn.addr !684
  store i32 %14, i32* %esi.0.reg2mem, !insn.addr !684
  br i1 %16, label %dec_label_pc_29b0, label %dec_label_pc_29d8, !insn.addr !684

dec_label_pc_29d8:                                ; preds = %dec_label_pc_29b0, %dec_label_pc_2980
  ret i32 0, !insn.addr !685

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32* %esi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32 (i32)* @usleep, { 2, 1, 0, 3 }
}

define i32 @param_mutex_lock(i32 %arg1) local_unnamed_addr {
dec_label_pc_29f0:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !686
  %edi.1.reg2mem = alloca i32, !insn.addr !686
  %ebp.0.reg2mem = alloca i32, !insn.addr !686
  %.pre-phi7.reg2mem = alloca i32*, !insn.addr !686
  %.pre-phi9.reg2mem = alloca i32, !insn.addr !686
  %esi.1.reg2mem = alloca i32, !insn.addr !686
  %edi.0.reg2mem = alloca i32, !insn.addr !686
  %esi.0.reg2mem = alloca i32, !insn.addr !686
  %stack_var_-24 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = mul i32 %arg1, 4, !insn.addr !687
  %3 = call i32* @malloc(i32 %2), !insn.addr !688
  %4 = icmp eq i32* %3, null, !insn.addr !689
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !690
  br i1 %4, label %dec_label_pc_2acb, label %dec_label_pc_2a22, !insn.addr !690

dec_label_pc_2a22:                                ; preds = %dec_label_pc_29f0
  %5 = ptrtoint i32* %3 to i32, !insn.addr !688
  %6 = ptrtoint i32* %stack_var_-24 to i32, !insn.addr !691
  %7 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4604 to i32), i32 268), !insn.addr !692
  %8 = inttoptr i32 %7 to i32*, !insn.addr !692
  store i32 0, i32* %8, align 4, !insn.addr !692
  %9 = icmp slt i32 %arg1, 1
  br i1 %9, label %dec_label_pc_2a22.dec_label_pc_2a88_crit_edge, label %dec_label_pc_2a32, !insn.addr !693

dec_label_pc_2a22.dec_label_pc_2a88_crit_edge:    ; preds = %dec_label_pc_2a22
  %.pre = add i32 %6, -16, !insn.addr !694
  %.pre6 = inttoptr i32 %.pre to i32*, !insn.addr !694
  %.pre8 = add i32 %6, 36, !insn.addr !695
  store i32 %.pre8, i32* %.pre-phi9.reg2mem
  store i32* %.pre6, i32** %.pre-phi7.reg2mem
  store i32 %5, i32* %ebp.0.reg2mem
  store i32 %arg1, i32* %edi.1.reg2mem
  br label %dec_label_pc_2a88

dec_label_pc_2a32:                                ; preds = %dec_label_pc_2a22
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4604 to i32), i32 -18048), !insn.addr !696
  %11 = add i32 %6, 36
  %12 = add i32 %6, -4, !insn.addr !697
  %13 = inttoptr i32 %12 to i32*, !insn.addr !697
  %14 = add i32 %6, -8, !insn.addr !698
  %15 = inttoptr i32 %14 to i32*, !insn.addr !698
  %16 = add i32 %6, -12, !insn.addr !699
  %17 = inttoptr i32 %16 to i32*
  %18 = add i32 %6, -16
  %19 = inttoptr i32 %18 to i32*
  store i32 %5, i32* %esi.0.reg2mem, !insn.addr !700
  store i32 %arg1, i32* %edi.0.reg2mem, !insn.addr !700
  br label %dec_label_pc_2a40, !insn.addr !700

dec_label_pc_2a40:                                ; preds = %dec_label_pc_2a55, %dec_label_pc_2a32
  %edi.0.reload = load i32, i32* %edi.0.reg2mem
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  store i32 %11, i32* %13, align 4, !insn.addr !697
  store i32 %10, i32* %15, align 4, !insn.addr !698
  store i32 0, i32* %17, align 4, !insn.addr !699
  store i32 %esi.0.reload, i32* %19, align 4, !insn.addr !701
  %20 = call i32 @pthread_create(i32* nonnull @0, i32* nonnull @0, i32* (i32*)* bitcast (i32* @0 to i32* (i32*)*), i32* nonnull @0), !insn.addr !702
  %21 = icmp eq i32 %20, 0, !insn.addr !703
  %22 = icmp eq i1 %21, false, !insn.addr !704
  br i1 %22, label %dec_label_pc_2ab7, label %dec_label_pc_2a55, !insn.addr !704

dec_label_pc_2a55:                                ; preds = %dec_label_pc_2a40
  %23 = add i32 %esi.0.reload, 4, !insn.addr !705
  %24 = add i32 %edi.0.reload, -1, !insn.addr !706
  %25 = icmp eq i32 %24, 0, !insn.addr !706
  %26 = icmp eq i1 %25, false, !insn.addr !707
  store i32 %23, i32* %esi.0.reg2mem, !insn.addr !707
  store i32 %24, i32* %edi.0.reg2mem, !insn.addr !707
  br i1 %26, label %dec_label_pc_2a40, label %dec_label_pc_2a5d, !insn.addr !707

dec_label_pc_2a5d:                                ; preds = %dec_label_pc_2a55
  %27 = add i32 %6, 32, !insn.addr !708
  %28 = inttoptr i32 %27 to i32*, !insn.addr !708
  %29 = load i32, i32* %28, align 4, !insn.addr !708
  %30 = add i32 %6, 8, !insn.addr !709
  %31 = inttoptr i32 %30 to i32*, !insn.addr !709
  %32 = load i32, i32* %31, align 4, !insn.addr !709
  %33 = icmp slt i32 %29, 1
  store i32 0, i32* %esi.1.reg2mem, !insn.addr !710
  store i32 %11, i32* %.pre-phi9.reg2mem, !insn.addr !710
  store i32* %19, i32** %.pre-phi7.reg2mem, !insn.addr !710
  store i32 %32, i32* %ebp.0.reg2mem, !insn.addr !710
  store i32 %29, i32* %edi.1.reg2mem, !insn.addr !710
  br i1 %33, label %dec_label_pc_2a88, label %dec_label_pc_2a70, !insn.addr !710

dec_label_pc_2a70:                                ; preds = %dec_label_pc_2a5d, %dec_label_pc_2a70
  %esi.1.reload = load i32, i32* %esi.1.reg2mem
  store i32 0, i32* %17, align 4, !insn.addr !711
  %34 = mul i32 %esi.1.reload, 4, !insn.addr !712
  %35 = add i32 %34, %32, !insn.addr !712
  %36 = inttoptr i32 %35 to i32*, !insn.addr !712
  %37 = load i32, i32* %36, align 4, !insn.addr !712
  store i32 %37, i32* %19, align 4, !insn.addr !712
  %38 = call i32 @pthread_join(i32 ptrtoint (i32* @0 to i32), i32** bitcast (i32* @0 to i32**)), !insn.addr !713
  %39 = add i32 %esi.1.reload, 1, !insn.addr !714
  %40 = icmp eq i32 %29, %39, !insn.addr !715
  %41 = icmp eq i1 %40, false, !insn.addr !716
  store i32 %39, i32* %esi.1.reg2mem, !insn.addr !716
  store i32 %11, i32* %.pre-phi9.reg2mem, !insn.addr !716
  store i32* %19, i32** %.pre-phi7.reg2mem, !insn.addr !716
  store i32 %32, i32* %ebp.0.reg2mem, !insn.addr !716
  store i32 %29, i32* %edi.1.reg2mem, !insn.addr !716
  br i1 %41, label %dec_label_pc_2a70, label %dec_label_pc_2a88, !insn.addr !716

dec_label_pc_2a88:                                ; preds = %dec_label_pc_2a70, %dec_label_pc_2a22.dec_label_pc_2a88_crit_edge, %dec_label_pc_2a5d
  %edi.1.reload = load i32, i32* %edi.1.reg2mem
  %ebp.0.reload = load i32, i32* %ebp.0.reg2mem
  %.pre-phi7.reload = load i32*, i32** %.pre-phi7.reg2mem
  %.pre-phi9.reload = load i32, i32* %.pre-phi9.reg2mem
  store i32 %ebp.0.reload, i32* %.pre-phi7.reload, align 4, !insn.addr !694
  call void @free(i32* nonnull @0), !insn.addr !717
  %42 = inttoptr i32 %.pre-phi9.reload to i32*, !insn.addr !695
  %43 = load i32, i32* %42, align 4, !insn.addr !695
  %44 = mul i32 %43, %edi.1.reload, !insn.addr !695
  %45 = load i32, i32* %8, align 4, !insn.addr !718
  %46 = icmp eq i32 %45, %44, !insn.addr !719
  %47 = select i1 %46, i32 42, i32 -3, !insn.addr !720
  store i32 %47, i32* %eax.0.reg2mem, !insn.addr !721
  br label %dec_label_pc_2acb, !insn.addr !721

dec_label_pc_2ab7:                                ; preds = %dec_label_pc_2a40
  %48 = add i32 %6, 8, !insn.addr !722
  %49 = inttoptr i32 %48 to i32*, !insn.addr !722
  %50 = load i32, i32* %49, align 4, !insn.addr !722
  store i32 %50, i32* %19, align 4, !insn.addr !722
  call void @free(i32* nonnull @0), !insn.addr !723
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !724
  br label %dec_label_pc_2acb, !insn.addr !724

dec_label_pc_2acb:                                ; preds = %dec_label_pc_29f0, %dec_label_pc_2ab7, %dec_label_pc_2a88
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !725

; uselistorder directives
  uselistorder i32 %32, { 0, 2, 1 }
  uselistorder i32 %29, { 0, 2, 1, 3 }
  uselistorder i32 %esi.0.reload, { 1, 0 }
  uselistorder i32* %19, { 2, 0, 3, 1, 4 }
  uselistorder i32 %6, { 2, 8, 9, 3, 4, 5, 6, 7, 0, 1 }
  uselistorder i32 %5, { 1, 0 }
  uselistorder i32* %3, { 1, 0 }
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32* %esi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32 %arg1, { 1, 0, 3, 2 }
  uselistorder label %dec_label_pc_2acb, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2a88, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2a70, { 1, 0 }
}

define i32 @call_mutex_lock(i32 %arg1) local_unnamed_addr {
dec_label_pc_2ae0:
  %0 = call i32 @param_mutex_lock(i32 4), !insn.addr !726
  ret i32 %0, !insn.addr !727
}

define i32 @consumer_thread(i32 %arg1) local_unnamed_addr {
dec_label_pc_2b10:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_44e5 to i32), i32 356), !insn.addr !728
  %3 = inttoptr i32 %2 to i32*, !insn.addr !729
  %4 = call i32 @pthread_mutex_lock(i32* %3), !insn.addr !729
  %5 = add i32 %1, add (i32 ptrtoint (i32* @global_var_44e5 to i32), i32 272), !insn.addr !730
  %6 = inttoptr i32 %5 to i8*, !insn.addr !730
  %7 = load i8, i8* %6, align 1, !insn.addr !730
  %8 = icmp eq i8 %7, 0, !insn.addr !730
  %9 = icmp eq i1 %8, false, !insn.addr !731
  br i1 %9, label %dec_label_pc_2b55, label %dec_label_pc_2b39, !insn.addr !731

dec_label_pc_2b39:                                ; preds = %dec_label_pc_2b10
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_44e5 to i32), i32 276), !insn.addr !732
  %11 = inttoptr i32 %10 to i32*, !insn.addr !733
  br label %dec_label_pc_2b40, !insn.addr !734

dec_label_pc_2b40:                                ; preds = %dec_label_pc_2b40, %dec_label_pc_2b39
  %12 = call i32 @pthread_cond_wait(i32* %11, i32* %3), !insn.addr !733
  %13 = load i8, i8* %6, align 1, !insn.addr !735
  %14 = icmp eq i8 %13, 1, !insn.addr !735
  %15 = icmp eq i1 %14, false, !insn.addr !736
  br i1 %15, label %dec_label_pc_2b40, label %dec_label_pc_2b55, !insn.addr !736

dec_label_pc_2b55:                                ; preds = %dec_label_pc_2b40, %dec_label_pc_2b10
  %16 = add i32 %1, add (i32 ptrtoint (i32* @global_var_44e5 to i32), i32 324), !insn.addr !737
  %17 = inttoptr i32 %16 to i8*, !insn.addr !737
  %18 = load i8, i8* %17, align 1, !insn.addr !737
  %19 = icmp eq i8 %18, 0, !insn.addr !737
  %20 = select i1 %19, i32 0, i32 42, !insn.addr !738
  %21 = call i32 @pthread_mutex_unlock(i32* %3), !insn.addr !739
  %22 = call i32* @malloc(i32 4), !insn.addr !740
  %23 = ptrtoint i32* %22 to i32, !insn.addr !740
  store i32 %20, i32* %22, align 4, !insn.addr !741
  ret i32 %23, !insn.addr !742

; uselistorder directives
  uselistorder i32* %3, { 1, 0, 2 }
  uselistorder i32 %1, { 3, 2, 1, 0 }
}

define i32 @producer_thread(i32 %arg1) local_unnamed_addr {
dec_label_pc_2b90:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @sleep(i32 1), !insn.addr !743
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4468 to i32), i32 356), !insn.addr !744
  %4 = inttoptr i32 %3 to i32*, !insn.addr !745
  %5 = call i32 @pthread_mutex_lock(i32* %4), !insn.addr !745
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4468 to i32), i32 324), !insn.addr !746
  %7 = inttoptr i32 %6 to i8*, !insn.addr !746
  store i8 1, i8* %7, align 1, !insn.addr !746
  %8 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4468 to i32), i32 272), !insn.addr !747
  %9 = inttoptr i32 %8 to i8*, !insn.addr !747
  store i8 1, i8* %9, align 1, !insn.addr !747
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4468 to i32), i32 276), !insn.addr !748
  %11 = inttoptr i32 %10 to i32*, !insn.addr !749
  %12 = call i32 @pthread_cond_signal(i32* %11), !insn.addr !749
  %13 = call i32 @pthread_mutex_unlock(i32* %4), !insn.addr !750
  ret i32 0, !insn.addr !751

; uselistorder directives
  uselistorder i32 (i32*)* @pthread_mutex_unlock, { 2, 1, 0, 3 }
  uselistorder i32 276, { 1, 0 }
  uselistorder i8 1, { 1, 2, 0, 3 }
  uselistorder i32 (i32*)* @pthread_mutex_lock, { 2, 1, 0, 3 }
}

define i32 @param_condition_variable(i32 %arg1) local_unnamed_addr {
dec_label_pc_2bf0:
  %0 = alloca i32
  %esi.0.reg2mem = alloca i32, !insn.addr !752
  %stack_var_-12 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  %1 = load i32, i32* %0
  %stack_var_-8 = alloca i32, align 4
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4406 to i32), i32 272), !insn.addr !753
  %3 = inttoptr i32 %2 to i8*, !insn.addr !753
  store i8 0, i8* %3, align 1, !insn.addr !753
  %4 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4406 to i32), i32 324), !insn.addr !754
  %5 = inttoptr i32 %4 to i8*, !insn.addr !754
  store i8 0, i8* %5, align 1, !insn.addr !754
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4406 to i32), i32 -17648), !insn.addr !755
  %7 = inttoptr i32 %6 to i32* (i32*)*, !insn.addr !756
  %8 = call i32 @pthread_create(i32* nonnull %stack_var_-16, i32* null, i32* (i32*)* %7, i32* null), !insn.addr !757
  %9 = icmp eq i32 %8, 0, !insn.addr !758
  %10 = icmp eq i1 %9, false, !insn.addr !759
  store i32 -1, i32* %esi.0.reg2mem, !insn.addr !759
  br i1 %10, label %dec_label_pc_2c96, label %dec_label_pc_2c30, !insn.addr !759

dec_label_pc_2c30:                                ; preds = %dec_label_pc_2bf0
  %11 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4406 to i32), i32 -17520), !insn.addr !760
  %12 = inttoptr i32 %11 to i32* (i32*)*, !insn.addr !761
  %13 = call i32 @pthread_create(i32* nonnull %stack_var_-8, i32* null, i32* (i32*)* %12, i32* null), !insn.addr !762
  %14 = icmp eq i32 %13, 0, !insn.addr !763
  %15 = load i32, i32* %stack_var_-16, align 4
  br i1 %14, label %dec_label_pc_2c62, label %dec_label_pc_2c4c, !insn.addr !764

dec_label_pc_2c4c:                                ; preds = %dec_label_pc_2c30
  %16 = call i32 @pthread_cancel(i32 %15), !insn.addr !765
  store i32 -2, i32* %esi.0.reg2mem, !insn.addr !766
  br label %dec_label_pc_2c96, !insn.addr !766

dec_label_pc_2c62:                                ; preds = %dec_label_pc_2c30
  %17 = bitcast i32* %stack_var_-12 to i32**, !insn.addr !767
  %18 = call i32 @pthread_join(i32 %15, i32** nonnull %17), !insn.addr !767
  %19 = load i32, i32* %stack_var_-8, align 4, !insn.addr !768
  %20 = call i32 @pthread_join(i32 %19, i32** null), !insn.addr !769
  %21 = load i32, i32* %stack_var_-12, align 4, !insn.addr !770
  %22 = inttoptr i32 %21 to i32*, !insn.addr !771
  %23 = load i32, i32* %22, align 4, !insn.addr !771
  call void @free(i32* %22), !insn.addr !772
  store i32 %23, i32* %esi.0.reg2mem, !insn.addr !773
  br label %dec_label_pc_2c96, !insn.addr !773

dec_label_pc_2c96:                                ; preds = %dec_label_pc_2c62, %dec_label_pc_2c4c, %dec_label_pc_2bf0
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  ret i32 %esi.0.reload, !insn.addr !774

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
dec_label_pc_2ca0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @param_condition_variable(i32 %1), !insn.addr !775
  ret i32 %2, !insn.addr !776
}

define i32 @thread_atomic_increment(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2cc0:
  %0 = alloca i32
  %esi.0.reg2mem = alloca i32, !insn.addr !777
  %ecx.2.reg2mem = alloca i32, !insn.addr !777
  %.reg2mem10 = alloca i32, !insn.addr !777
  %ecx.1.reg2mem = alloca i32, !insn.addr !777
  %ecx.0.reg2mem = alloca i32, !insn.addr !777
  %.reg2mem = alloca i32, !insn.addr !777
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %arg2 to i32*, !insn.addr !778
  %3 = load i32, i32* %2, align 4, !insn.addr !778
  %4 = icmp slt i32 %3, 1
  br i1 %4, label %dec_label_pc_2d90, label %dec_label_pc_2cdd, !insn.addr !779

dec_label_pc_2cdd:                                ; preds = %dec_label_pc_2cc0
  %5 = add i32 %3, -1, !insn.addr !780
  %6 = icmp ult i32 %5, 3, !insn.addr !781
  store i32 0, i32* %ecx.1.reg2mem, !insn.addr !782
  br i1 %6, label %dec_label_pc_2d6a, label %dec_label_pc_2cec, !insn.addr !782

dec_label_pc_2cec:                                ; preds = %dec_label_pc_2cdd
  %7 = and i32 %3, -4, !insn.addr !783
  %8 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4338 to i32), i32 328), !insn.addr !784
  %9 = inttoptr i32 %8 to i32*, !insn.addr !784
  %.promoted2 = load i32, i32* %9, align 4
  store i32 %.promoted2, i32* %.reg2mem, !insn.addr !785
  store i32 0, i32* %ecx.0.reg2mem, !insn.addr !785
  br label %dec_label_pc_2d00, !insn.addr !785

dec_label_pc_2d00:                                ; preds = %dec_label_pc_2d00, %dec_label_pc_2cec
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %10 = add i32 %.reload, 1, !insn.addr !784
  %11 = add i32 %ecx.0.reload, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !786
  %12 = icmp eq i32 %ecx.0.reload, %10, !insn.addr !787
  %13 = select i1 %12, i32 %11, i32 %10, !insn.addr !787
  %14 = add i32 %13, 1, !insn.addr !788
  %15 = or i32 %ecx.0.reload, 1, !insn.addr !789
  %16 = add i32 %ecx.0.reload, ptrtoint (i32* @global_var_3e9 to i32), !insn.addr !790
  %17 = icmp eq i32 %15, %14, !insn.addr !791
  %18 = select i1 %17, i32 %16, i32 %14, !insn.addr !791
  %19 = add i32 %18, 1, !insn.addr !792
  %20 = or i32 %ecx.0.reload, 2, !insn.addr !793
  %21 = add i32 %ecx.0.reload, ptrtoint (i32* @global_var_3ea to i32), !insn.addr !794
  %22 = icmp eq i32 %20, %19, !insn.addr !795
  %23 = select i1 %22, i32 %21, i32 %19, !insn.addr !795
  %24 = add i32 %23, 1, !insn.addr !796
  %25 = or i32 %ecx.0.reload, 3, !insn.addr !797
  %26 = add i32 %ecx.0.reload, ptrtoint (i32* @global_var_3eb to i32), !insn.addr !798
  %27 = icmp eq i32 %25, %24, !insn.addr !799
  %28 = select i1 %27, i32 %26, i32 %24, !insn.addr !799
  %29 = add i32 %ecx.0.reload, 4, !insn.addr !800
  %30 = icmp eq i32 %29, %7, !insn.addr !801
  %31 = icmp eq i1 %30, false, !insn.addr !802
  store i32 %28, i32* %.reg2mem, !insn.addr !802
  store i32 %29, i32* %ecx.0.reg2mem, !insn.addr !802
  br i1 %31, label %dec_label_pc_2d00, label %dec_label_pc_2d6a.loopexit, !insn.addr !802

dec_label_pc_2d6a.loopexit:                       ; preds = %dec_label_pc_2d00
  store i32 %28, i32* %9, align 4
  store i32 %29, i32* %ecx.1.reg2mem
  br label %dec_label_pc_2d6a

dec_label_pc_2d6a:                                ; preds = %dec_label_pc_2d6a.loopexit, %dec_label_pc_2cdd
  %32 = urem i32 %3, 4, !insn.addr !803
  %33 = icmp eq i32 %32, 0, !insn.addr !804
  br i1 %33, label %dec_label_pc_2d90, label %dec_label_pc_2d70.preheader, !insn.addr !805

dec_label_pc_2d70.preheader:                      ; preds = %dec_label_pc_2d6a
  %ecx.1.reload = load i32, i32* %ecx.1.reg2mem
  %34 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4338 to i32), i32 328), !insn.addr !806
  %35 = inttoptr i32 %34 to i32*, !insn.addr !806
  %.promoted = load i32, i32* %35, align 4
  store i32 %.promoted, i32* %.reg2mem10
  store i32 %ecx.1.reload, i32* %ecx.2.reg2mem
  store i32 %32, i32* %esi.0.reg2mem
  br label %dec_label_pc_2d70

dec_label_pc_2d70:                                ; preds = %dec_label_pc_2d70.preheader, %dec_label_pc_2d70
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %ecx.2.reload = load i32, i32* %ecx.2.reg2mem
  %.reload11 = load i32, i32* %.reg2mem10
  %36 = add i32 %.reload11, 1, !insn.addr !806
  %37 = add i32 %ecx.2.reload, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !807
  %38 = icmp eq i32 %ecx.2.reload, %36, !insn.addr !808
  %39 = select i1 %38, i32 %37, i32 %36, !insn.addr !808
  %40 = add i32 %ecx.2.reload, 1, !insn.addr !809
  %41 = add i32 %esi.0.reload, -1, !insn.addr !810
  %42 = icmp eq i32 %41, 0, !insn.addr !810
  %43 = icmp eq i1 %42, false, !insn.addr !811
  store i32 %39, i32* %.reg2mem10, !insn.addr !811
  store i32 %40, i32* %ecx.2.reg2mem, !insn.addr !811
  store i32 %41, i32* %esi.0.reg2mem, !insn.addr !811
  br i1 %43, label %dec_label_pc_2d70, label %dec_label_pc_2d90.loopexit, !insn.addr !811

dec_label_pc_2d90.loopexit:                       ; preds = %dec_label_pc_2d70
  store i32 %39, i32* %35, align 4
  br label %dec_label_pc_2d90

dec_label_pc_2d90:                                ; preds = %dec_label_pc_2d90.loopexit, %dec_label_pc_2d6a, %dec_label_pc_2cc0
  ret i32 0, !insn.addr !812

; uselistorder directives
  uselistorder i32 %39, { 1, 0 }
  uselistorder i32 %ecx.2.reload, { 2, 0, 1 }
  uselistorder i32 %28, { 1, 0 }
  uselistorder i32 %ecx.0.reload, { 5, 4, 8, 3, 7, 2, 6, 0, 1 }
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32* %.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ecx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %.reg2mem10, { 2, 0, 1 }
  uselistorder i32* %ecx.2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %esi.0.reg2mem, { 2, 0, 1 }
  uselistorder i32 2, { 2, 0, 3, 4, 9, 5, 6, 1, 7, 8 }
  uselistorder i32 ptrtoint (i32* @global_var_3e8 to i32), { 4, 5, 1, 2, 3, 0 }
  uselistorder i32 3, { 1, 2, 0, 3 }
  uselistorder label %dec_label_pc_2d70, { 1, 0 }
}

define i32 @thread_atomic_load_store(i32 %arg1) local_unnamed_addr {
dec_label_pc_2da0:
  %0 = add i32 %arg1, add (i32 ptrtoint (i32* @global_var_425b to i32), i32 328), !insn.addr !813
  %1 = inttoptr i32 %0 to i32*, !insn.addr !813
  %2 = load i32, i32* %1, align 4, !insn.addr !813
  %3 = add i32 %2, 100, !insn.addr !814
  store i32 %3, i32* %1, align 4, !insn.addr !815
  ret i32 0, !insn.addr !816
}

define i32 @param_atomic_ops(i32 %arg1) local_unnamed_addr {
dec_label_pc_2dc0:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !817
  %esi.1.reg2mem = alloca i32, !insn.addr !817
  %.pre-phi4.reg2mem = alloca i32*, !insn.addr !817
  %.pre-phi8.reg2mem = alloca i32*, !insn.addr !817
  %.pre-phi12.reg2mem = alloca i32*, !insn.addr !817
  %.pre-phi16.reg2mem = alloca i32*, !insn.addr !817
  %esi.0.reg2mem = alloca i32, !insn.addr !817
  %ebp.0.reg2mem = alloca i32, !insn.addr !817
  %stack_var_-24 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = mul i32 %arg1, 4, !insn.addr !818
  %3 = call i32* @malloc(i32 %2), !insn.addr !819
  %4 = icmp eq i32* %3, null, !insn.addr !820
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !821
  br i1 %4, label %dec_label_pc_2ec6, label %dec_label_pc_2df2, !insn.addr !821

dec_label_pc_2df2:                                ; preds = %dec_label_pc_2dc0
  %5 = ptrtoint i32* %stack_var_-24 to i32, !insn.addr !822
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4234 to i32), i32 328), !insn.addr !823
  %7 = inttoptr i32 %6 to i32*, !insn.addr !823
  store i32 0, i32* %7, align 4, !insn.addr !823
  %8 = icmp slt i32 %arg1, 1
  br i1 %8, label %dec_label_pc_2df2.dec_label_pc_2e31_crit_edge, label %dec_label_pc_2e02, !insn.addr !824

dec_label_pc_2df2.dec_label_pc_2e31_crit_edge:    ; preds = %dec_label_pc_2df2
  %.pre = add i32 %5, -4, !insn.addr !825
  %.pre3 = inttoptr i32 %.pre to i32*, !insn.addr !825
  %.pre5 = add i32 %5, -8, !insn.addr !826
  %.pre7 = inttoptr i32 %.pre5 to i32*, !insn.addr !826
  %.pre9 = add i32 %5, -12, !insn.addr !827
  %.pre11 = inttoptr i32 %.pre9 to i32*, !insn.addr !827
  %.pre13 = add i32 %5, -16, !insn.addr !828
  %.pre15 = inttoptr i32 %.pre13 to i32*, !insn.addr !828
  store i32* %.pre15, i32** %.pre-phi16.reg2mem
  store i32* %.pre11, i32** %.pre-phi12.reg2mem
  store i32* %.pre7, i32** %.pre-phi8.reg2mem
  store i32* %.pre3, i32** %.pre-phi4.reg2mem
  br label %dec_label_pc_2e31

dec_label_pc_2e02:                                ; preds = %dec_label_pc_2df2
  %9 = ptrtoint i32* %3 to i32, !insn.addr !819
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4234 to i32), i32 -17216), !insn.addr !829
  %11 = add i32 %5, 36, !insn.addr !830
  %12 = add i32 %5, -4
  %13 = inttoptr i32 %12 to i32*
  %14 = add i32 %5, -8
  %15 = inttoptr i32 %14 to i32*
  %16 = add i32 %5, -12
  %17 = inttoptr i32 %16 to i32*
  %18 = add i32 %5, -16
  %19 = inttoptr i32 %18 to i32*
  store i32 %arg1, i32* %ebp.0.reg2mem, !insn.addr !831
  store i32 %9, i32* %esi.0.reg2mem, !insn.addr !831
  br label %dec_label_pc_2e10, !insn.addr !831

dec_label_pc_2e10:                                ; preds = %dec_label_pc_2e29, %dec_label_pc_2e02
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %ebp.0.reload = load i32, i32* %ebp.0.reg2mem
  store i32 %11, i32* %13, align 4, !insn.addr !832
  store i32 %10, i32* %15, align 4, !insn.addr !833
  store i32 0, i32* %17, align 4, !insn.addr !834
  store i32 %esi.0.reload, i32* %19, align 4, !insn.addr !835
  %20 = call i32 @pthread_create(i32* nonnull @0, i32* nonnull @0, i32* (i32*)* bitcast (i32* @0 to i32* (i32*)*), i32* nonnull @0), !insn.addr !836
  %21 = icmp eq i32 %20, 0, !insn.addr !837
  %22 = icmp eq i1 %21, false, !insn.addr !838
  br i1 %22, label %dec_label_pc_2eb2, label %dec_label_pc_2e29, !insn.addr !838

dec_label_pc_2e29:                                ; preds = %dec_label_pc_2e10
  %23 = add i32 %esi.0.reload, 4, !insn.addr !839
  %24 = add i32 %ebp.0.reload, -1, !insn.addr !840
  %25 = icmp eq i32 %24, 0, !insn.addr !840
  %26 = icmp eq i1 %25, false, !insn.addr !841
  store i32 %24, i32* %ebp.0.reg2mem, !insn.addr !841
  store i32 %23, i32* %esi.0.reg2mem, !insn.addr !841
  store i32* %19, i32** %.pre-phi16.reg2mem, !insn.addr !841
  store i32* %17, i32** %.pre-phi12.reg2mem, !insn.addr !841
  store i32* %15, i32** %.pre-phi8.reg2mem, !insn.addr !841
  store i32* %13, i32** %.pre-phi4.reg2mem, !insn.addr !841
  br i1 %26, label %dec_label_pc_2e10, label %dec_label_pc_2e31, !insn.addr !841

dec_label_pc_2e31:                                ; preds = %dec_label_pc_2e29, %dec_label_pc_2df2.dec_label_pc_2e31_crit_edge
  %.pre-phi4.reload = load i32*, i32** %.pre-phi4.reg2mem
  %.pre-phi8.reload = load i32*, i32** %.pre-phi8.reg2mem
  %.pre-phi12.reload = load i32*, i32** %.pre-phi12.reg2mem
  %.pre-phi16.reload = load i32*, i32** %.pre-phi16.reg2mem
  %27 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4234 to i32), i32 -16992), !insn.addr !842
  %28 = add i32 %5, 8, !insn.addr !843
  store i32 0, i32* %.pre-phi4.reload, align 4, !insn.addr !825
  store i32 %27, i32* %.pre-phi8.reload, align 4, !insn.addr !826
  store i32 0, i32* %.pre-phi12.reload, align 4, !insn.addr !827
  store i32 %28, i32* %.pre-phi16.reload, align 4, !insn.addr !828
  %29 = call i32 @pthread_create(i32* nonnull @0, i32* nonnull @0, i32* (i32*)* bitcast (i32* @0 to i32* (i32*)*), i32* nonnull @0), !insn.addr !844
  %30 = icmp eq i32 %29, 0, !insn.addr !845
  %31 = icmp eq i1 %30, false, !insn.addr !846
  br i1 %31, label %dec_label_pc_2e5e, label %dec_label_pc_2e4d, !insn.addr !846

dec_label_pc_2e4d:                                ; preds = %dec_label_pc_2e31
  store i32 0, i32* %.pre-phi12.reload, align 4, !insn.addr !847
  %32 = inttoptr i32 %28 to i32*, !insn.addr !848
  %33 = load i32, i32* %32, align 4, !insn.addr !848
  store i32 %33, i32* %.pre-phi16.reload, align 4, !insn.addr !848
  %34 = call i32 @pthread_join(i32 ptrtoint (i32* @0 to i32), i32** bitcast (i32* @0 to i32**)), !insn.addr !849
  br label %dec_label_pc_2e5e, !insn.addr !850

dec_label_pc_2e5e:                                ; preds = %dec_label_pc_2e4d, %dec_label_pc_2e31
  %35 = add i32 %5, 32, !insn.addr !851
  %36 = inttoptr i32 %35 to i32*, !insn.addr !851
  %37 = load i32, i32* %36, align 4, !insn.addr !851
  %38 = add i32 %5, 4, !insn.addr !852
  %39 = inttoptr i32 %38 to i32*, !insn.addr !852
  %40 = load i32, i32* %39, align 4, !insn.addr !852
  %41 = icmp slt i32 %37, 1
  store i32 0, i32* %esi.1.reg2mem, !insn.addr !853
  br i1 %41, label %dec_label_pc_2e88, label %dec_label_pc_2e70, !insn.addr !853

dec_label_pc_2e70:                                ; preds = %dec_label_pc_2e5e, %dec_label_pc_2e70
  %esi.1.reload = load i32, i32* %esi.1.reg2mem
  store i32 0, i32* %.pre-phi12.reload, align 4, !insn.addr !854
  %42 = mul i32 %esi.1.reload, 4, !insn.addr !855
  %43 = add i32 %42, %40, !insn.addr !855
  %44 = inttoptr i32 %43 to i32*, !insn.addr !855
  %45 = load i32, i32* %44, align 4, !insn.addr !855
  store i32 %45, i32* %.pre-phi16.reload, align 4, !insn.addr !855
  %46 = call i32 @pthread_join(i32 ptrtoint (i32* @0 to i32), i32** bitcast (i32* @0 to i32**)), !insn.addr !856
  %47 = add i32 %esi.1.reload, 1, !insn.addr !857
  %48 = icmp eq i32 %37, %47, !insn.addr !858
  %49 = icmp eq i1 %48, false, !insn.addr !859
  store i32 %47, i32* %esi.1.reg2mem, !insn.addr !859
  br i1 %49, label %dec_label_pc_2e70, label %dec_label_pc_2e88, !insn.addr !859

dec_label_pc_2e88:                                ; preds = %dec_label_pc_2e70, %dec_label_pc_2e5e
  %50 = load i32, i32* %7, align 4, !insn.addr !860
  store i32 %40, i32* %.pre-phi16.reload, align 4, !insn.addr !861
  call void @free(i32* nonnull @0), !insn.addr !862
  %51 = icmp eq i32 %50, 0, !insn.addr !863
  %52 = icmp slt i32 %50, 0, !insn.addr !863
  %53 = icmp eq i1 %52, false, !insn.addr !864
  %54 = icmp eq i1 %51, false, !insn.addr !864
  %55 = icmp eq i1 %53, %54, !insn.addr !864
  %56 = select i1 %55, i32 42, i32 -3, !insn.addr !864
  store i32 %56, i32* %eax.0.reg2mem, !insn.addr !865
  br label %dec_label_pc_2ec6, !insn.addr !865

dec_label_pc_2eb2:                                ; preds = %dec_label_pc_2e10
  %57 = add i32 %5, 4, !insn.addr !866
  %58 = inttoptr i32 %57 to i32*, !insn.addr !866
  %59 = load i32, i32* %58, align 4, !insn.addr !866
  store i32 %59, i32* %19, align 4, !insn.addr !866
  call void @free(i32* nonnull @0), !insn.addr !867
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !868
  br label %dec_label_pc_2ec6, !insn.addr !868

dec_label_pc_2ec6:                                ; preds = %dec_label_pc_2dc0, %dec_label_pc_2eb2, %dec_label_pc_2e88
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !869

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
  uselistorder i32 36, { 1, 2, 0 }
  uselistorder i32 -16, { 2, 0, 3, 1 }
  uselistorder i32 -12, { 1, 0, 2 }
  uselistorder i32 -8, { 1, 0, 2, 3 }
  uselistorder i32 328, { 0, 2, 1 }
  uselistorder i32 %arg1, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2ec6, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2e70, { 1, 0 }
}

define i32 @call_atomic_ops(i32 %arg1) local_unnamed_addr {
dec_label_pc_2ed0:
  %0 = call i32 @param_atomic_ops(i32 4), !insn.addr !870
  ret i32 %0, !insn.addr !871
}

define i32 @thread_tls_test(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2f00:
  %0 = call i32 @__readgsdword(i32 -36), !insn.addr !872
  %1 = add i32 %0, 50, !insn.addr !873
  call void @__writegsdword(i32 -36, i32 %1), !insn.addr !874
  %2 = call i32 @__readgsdword(i32 0), !insn.addr !875
  %3 = add i32 %2, -32, !insn.addr !876
  %4 = inttoptr i32 %3 to i8*, !insn.addr !877
  %5 = inttoptr i32 %arg2 to i8*, !insn.addr !878
  %6 = call i8* @strncpy(i8* %4, i8* %5, i32 31), !insn.addr !878
  %7 = call i32* @malloc(i32 8), !insn.addr !879
  %8 = ptrtoint i32* %7 to i32, !insn.addr !879
  store i32 %0, i32* %7, align 4, !insn.addr !880
  %9 = add i32 %8, 4, !insn.addr !881
  %10 = inttoptr i32 %9 to i32*, !insn.addr !881
  store i32 %1, i32* %10, align 4, !insn.addr !881
  ret i32 %8, !insn.addr !882

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32 8, { 2, 4, 3, 5, 6, 7, 0, 8, 1 }
}

define i32 @param_thread_local_storage(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2f60:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !883
  %edi.1.reg2mem = alloca i32, !insn.addr !883
  %ebp.2.reg2mem = alloca i32, !insn.addr !883
  %edi.0.reg2mem = alloca i32, !insn.addr !883
  %ebp.1.reg2mem = alloca i32, !insn.addr !883
  %esi.1.reg2mem = alloca i32, !insn.addr !883
  %ebp.0.reg2mem = alloca i32, !insn.addr !883
  %esi.0.reg2mem = alloca i32, !insn.addr !883
  %1 = load i32, i32* %0
  %stack_var_-16 = alloca i32, align 4
  %2 = mul i32 %arg2, 4, !insn.addr !884
  %3 = call i32* @malloc(i32 %2), !insn.addr !885
  %4 = call i32* @malloc(i32 %2), !insn.addr !886
  %5 = icmp eq i32* %3, null, !insn.addr !887
  %6 = icmp eq i32* %4, null, !insn.addr !888
  %or.cond = or i1 %5, %6
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !889
  br i1 %or.cond, label %dec_label_pc_311c, label %dec_label_pc_2fa7, !insn.addr !889

dec_label_pc_2fa7:                                ; preds = %dec_label_pc_2f60
  %7 = icmp slt i32 %arg2, 1
  store i32 0, i32* %ebp.2.reg2mem, !insn.addr !890
  br i1 %7, label %dec_label_pc_30a6, label %dec_label_pc_2fb7, !insn.addr !890

dec_label_pc_2fb7:                                ; preds = %dec_label_pc_2fa7
  %8 = ptrtoint i32* %4 to i32, !insn.addr !886
  %9 = ptrtoint i32* %3 to i32
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4094 to i32), i32 -11591), !insn.addr !891
  %11 = inttoptr i32 %10 to i8*
  store i32 0, i32* %esi.0.reg2mem, !insn.addr !892
  br label %dec_label_pc_2fd0, !insn.addr !892

dec_label_pc_2fd0:                                ; preds = %dec_label_pc_2fd0, %dec_label_pc_2fb7
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %12 = call i32* @malloc(i32 16), !insn.addr !893
  %13 = ptrtoint i32* %12 to i32, !insn.addr !893
  %14 = mul i32 %esi.0.reload, 4, !insn.addr !894
  %15 = add i32 %14, %8, !insn.addr !894
  %16 = inttoptr i32 %15 to i32*, !insn.addr !894
  store i32 %13, i32* %16, align 4, !insn.addr !894
  %17 = bitcast i32* %12 to i8*
  %18 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %17, i32 16, i8* %11), !insn.addr !895
  %19 = add i32 %esi.0.reload, 1, !insn.addr !896
  %20 = icmp eq i32 %19, %arg2, !insn.addr !897
  %21 = icmp eq i1 %20, false, !insn.addr !898
  store i32 %19, i32* %esi.0.reg2mem, !insn.addr !898
  br i1 %21, label %dec_label_pc_2fd0, label %dec_label_pc_300c, !insn.addr !898

dec_label_pc_300c:                                ; preds = %dec_label_pc_2fd0
  %22 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4094 to i32), i32 -16640), !insn.addr !899
  %23 = inttoptr i32 %22 to i32* (i32*)*, !insn.addr !900
  store i32 %9, i32* %ebp.0.reg2mem, !insn.addr !901
  store i32 0, i32* %esi.1.reg2mem, !insn.addr !901
  br label %dec_label_pc_3020, !insn.addr !901

dec_label_pc_3020:                                ; preds = %dec_label_pc_3047, %dec_label_pc_300c
  %esi.1.reload = load i32, i32* %esi.1.reg2mem
  %ebp.0.reload = load i32, i32* %ebp.0.reg2mem
  %24 = mul i32 %esi.1.reload, 4, !insn.addr !902
  %25 = add i32 %24, %8, !insn.addr !902
  %26 = inttoptr i32 %25 to i32*, !insn.addr !902
  %27 = load i32, i32* %26, align 4, !insn.addr !902
  %28 = inttoptr i32 %ebp.0.reload to i32*
  %29 = inttoptr i32 %27 to i32*, !insn.addr !900
  %30 = call i32 @pthread_create(i32* %28, i32* null, i32* (i32*)* %23, i32* %29), !insn.addr !900
  %31 = icmp eq i32 %30, 0, !insn.addr !903
  %32 = icmp eq i1 %31, false, !insn.addr !904
  br i1 %32, label %dec_label_pc_30f0.preheader, label %dec_label_pc_3047, !insn.addr !904

dec_label_pc_30f0.preheader:                      ; preds = %dec_label_pc_3020
  %33 = add i32 %8, 4, !insn.addr !905
  store i32 -1, i32* %edi.1.reg2mem
  br label %dec_label_pc_30f0

dec_label_pc_3047:                                ; preds = %dec_label_pc_3020
  %34 = add i32 %esi.1.reload, 1, !insn.addr !906
  %35 = add i32 %ebp.0.reload, 4, !insn.addr !907
  %36 = icmp eq i32 %34, %arg2, !insn.addr !908
  %37 = icmp eq i1 %36, false, !insn.addr !909
  store i32 %35, i32* %ebp.0.reg2mem, !insn.addr !909
  store i32 %34, i32* %esi.1.reg2mem, !insn.addr !909
  br i1 %37, label %dec_label_pc_3020, label %dec_label_pc_3060.preheader, !insn.addr !909

dec_label_pc_3060.preheader:                      ; preds = %dec_label_pc_3047
  %38 = bitcast i32* %stack_var_-16 to i32**, !insn.addr !910
  store i32 0, i32* %ebp.1.reg2mem
  store i32 0, i32* %edi.0.reg2mem
  br label %dec_label_pc_3060

dec_label_pc_3060:                                ; preds = %dec_label_pc_3060.preheader, %dec_label_pc_3060
  %edi.0.reload = load i32, i32* %edi.0.reg2mem
  %ebp.1.reload = load i32, i32* %ebp.1.reg2mem
  %39 = mul i32 %edi.0.reload, 4, !insn.addr !911
  %40 = add i32 %39, %9, !insn.addr !911
  %41 = inttoptr i32 %40 to i32*, !insn.addr !911
  %42 = load i32, i32* %41, align 4, !insn.addr !911
  %43 = call i32 @pthread_join(i32 %42, i32** nonnull %38), !insn.addr !910
  %44 = load i32, i32* %stack_var_-16, align 4, !insn.addr !912
  %45 = add i32 %44, 4, !insn.addr !913
  %46 = inttoptr i32 %45 to i32*, !insn.addr !913
  %47 = load i32, i32* %46, align 4, !insn.addr !913
  %48 = add i32 %47, %ebp.1.reload, !insn.addr !913
  %49 = inttoptr i32 %44 to i32*
  call void @free(i32* %49), !insn.addr !914
  %50 = add i32 %39, %8, !insn.addr !915
  %51 = inttoptr i32 %50 to i32*, !insn.addr !915
  %52 = load i32, i32* %51, align 4, !insn.addr !915
  %53 = inttoptr i32 %52 to i32*
  call void @free(i32* %53), !insn.addr !916
  %54 = add i32 %edi.0.reload, 1, !insn.addr !917
  %55 = icmp eq i32 %54, %arg2, !insn.addr !918
  %56 = icmp eq i1 %55, false, !insn.addr !919
  store i32 %48, i32* %ebp.1.reg2mem, !insn.addr !919
  store i32 %54, i32* %edi.0.reg2mem, !insn.addr !919
  store i32 %48, i32* %ebp.2.reg2mem, !insn.addr !919
  br i1 %56, label %dec_label_pc_3060, label %dec_label_pc_30a6, !insn.addr !919

dec_label_pc_30a6:                                ; preds = %dec_label_pc_3060, %dec_label_pc_2fa7
  %ebp.2.reload = load i32, i32* %ebp.2.reg2mem
  call void @free(i32* %4), !insn.addr !920
  call void @free(i32* %3), !insn.addr !921
  %57 = mul i32 %arg2, 100, !insn.addr !922
  %58 = mul i32 %arg2, 150, !insn.addr !923
  %59 = icmp eq i32 %58, %ebp.2.reload
  %60 = icmp eq i32 %57, 0
  %61 = icmp eq i1 %60, %59, !insn.addr !924
  %62 = select i1 %61, i32 42, i32 -3, !insn.addr !925
  store i32 %62, i32* %eax.0.reg2mem, !insn.addr !926
  br label %dec_label_pc_311c, !insn.addr !926

dec_label_pc_30f0:                                ; preds = %dec_label_pc_30f0.preheader, %dec_label_pc_30f0
  %edi.1.reload = load i32, i32* %edi.1.reg2mem
  %63 = mul i32 %edi.1.reload, 4, !insn.addr !905
  %64 = add i32 %33, %63, !insn.addr !905
  %65 = inttoptr i32 %64 to i32*, !insn.addr !905
  %66 = load i32, i32* %65, align 4, !insn.addr !905
  %67 = inttoptr i32 %66 to i32*
  call void @free(i32* %67), !insn.addr !927
  %68 = add i32 %edi.1.reload, 1, !insn.addr !928
  %69 = icmp eq i32 %esi.1.reload, %68, !insn.addr !929
  %70 = icmp eq i1 %69, false, !insn.addr !930
  store i32 %68, i32* %edi.1.reg2mem, !insn.addr !930
  br i1 %70, label %dec_label_pc_30f0, label %dec_label_pc_3103, !insn.addr !930

dec_label_pc_3103:                                ; preds = %dec_label_pc_30f0
  call void @free(i32* %4), !insn.addr !931
  call void @free(i32* %3), !insn.addr !932
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !933
  br label %dec_label_pc_311c, !insn.addr !933

dec_label_pc_311c:                                ; preds = %dec_label_pc_3103, %dec_label_pc_30a6, %dec_label_pc_2f60
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !934

; uselistorder directives
  uselistorder i32 %39, { 1, 0 }
  uselistorder i32 %ebp.0.reload, { 1, 0 }
  uselistorder i32 %esi.1.reload, { 1, 0, 2 }
  uselistorder i32 %9, { 1, 0 }
  uselistorder i32 %8, { 0, 3, 1, 2 }
  uselistorder i32* %4, { 0, 1, 3, 2 }
  uselistorder i32* %3, { 1, 0, 2, 3 }
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32* %stack_var_-16, { 1, 0 }
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32* %esi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ebp.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ebp.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edi.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edi.1.reg2mem, { 2, 0, 1 }
  uselistorder i32 -2, { 0, 1, 2, 3, 12, 4, 5, 6, 7, 8, 9, 10, 13, 14, 11 }
  uselistorder i32 -3, { 5, 6, 7, 0, 1, 2, 8, 3, 9, 4 }
  uselistorder i32 42, { 3, 4, 5, 6, 0, 7, 1, 8, 9, 2, 10, 11, 13, 12, 14 }
  uselistorder i32 16, { 2, 0, 1 }
  uselistorder i32* (i32)* @malloc, { 8, 7, 6, 5, 4, 3, 2, 1, 0, 9 }
  uselistorder i32 %arg2, { 6, 5, 1, 2, 3, 4, 0 }
  uselistorder label %dec_label_pc_30f0, { 1, 0 }
  uselistorder label %dec_label_pc_3060, { 1, 0 }
}

define i32 @call_thread_local_storage(i32 %arg1) local_unnamed_addr {
dec_label_pc_3130:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @param_thread_local_storage(i32 4, i32 %1), !insn.addr !935
  ret i32 %2, !insn.addr !936
}

define i32 @test_thread_concurrency(i32 %arg1) local_unnamed_addr {
dec_label_pc_3160:
  %0 = alloca i32
  %stack_var_-16 = alloca i8*, align 4
  %stack_var_-12 = alloca i32, align 4
  %1 = load i32, i32* %0
  %stack_var_-8 = alloca i32, align 4
  %2 = add i32 %1, 4673, !insn.addr !937
  %3 = inttoptr i32 %2 to i8*, !insn.addr !938
  %4 = call i32 @puts(i8* %3), !insn.addr !939
  store i32 7, i32* %stack_var_-12, align 4, !insn.addr !940
  %5 = add i32 %1, -2682, !insn.addr !941
  %6 = inttoptr i32 %5 to i32* (i32*)*, !insn.addr !942
  %7 = call i32 @pthread_create(i32* nonnull %stack_var_-8, i32* null, i32* (i32*)* %6, i32* nonnull %stack_var_-12), !insn.addr !943
  %8 = icmp eq i32 %7, 0, !insn.addr !944
  %9 = icmp eq i1 %8, false, !insn.addr !945
  br i1 %9, label %dec_label_pc_31d5, label %dec_label_pc_31af, !insn.addr !945

dec_label_pc_31af:                                ; preds = %dec_label_pc_3160
  %10 = load i32, i32* %stack_var_-8, align 4, !insn.addr !946
  %11 = bitcast i8** %stack_var_-16 to i32**, !insn.addr !947
  %12 = call i32 @pthread_join(i32 %10, i32** nonnull %11), !insn.addr !947
  %13 = load i8*, i8** %stack_var_-16, align 4, !insn.addr !948
  %14 = bitcast i8* %13 to i32*
  call void @free(i32* %14), !insn.addr !949
  br label %dec_label_pc_31d5, !insn.addr !950

dec_label_pc_31d5:                                ; preds = %dec_label_pc_31af, %dec_label_pc_3160
  %15 = add i32 %1, 4441, !insn.addr !951
  %16 = inttoptr i32 %15 to i8*, !insn.addr !952
  %17 = call i32 (i8*, ...) @printf(i8* %16), !insn.addr !953
  %18 = call i32 @param_pthread_join(), !insn.addr !954
  %19 = add i32 %1, 4469, !insn.addr !955
  %20 = inttoptr i32 %19 to i8*, !insn.addr !956
  %21 = call i32 (i8*, ...) @printf(i8* %20), !insn.addr !957
  %22 = call i32 @param_mutex_lock(i32 4), !insn.addr !958
  %23 = add i32 %1, 4498, !insn.addr !959
  %24 = inttoptr i32 %23 to i8*, !insn.addr !960
  %25 = call i32 (i8*, ...) @printf(i8* %24), !insn.addr !961
  %26 = call i32 @param_condition_variable(i32 ptrtoint (i32* @0 to i32)), !insn.addr !962
  %27 = add i32 %1, 4526, !insn.addr !963
  %28 = inttoptr i32 %27 to i8*, !insn.addr !964
  %29 = call i32 (i8*, ...) @printf(i8* %28), !insn.addr !965
  %30 = call i32 @param_atomic_ops(i32 4), !insn.addr !966
  %31 = add i32 %1, 4554, !insn.addr !967
  %32 = inttoptr i32 %31 to i8*, !insn.addr !968
  %33 = call i32 (i8*, ...) @printf(i8* %32), !insn.addr !969
  %34 = call i32 @param_thread_local_storage(i32 4, i32 ptrtoint (i32* @0 to i32)), !insn.addr !970
  %35 = add i32 %1, 4582, !insn.addr !971
  %36 = inttoptr i32 %35 to i8*, !insn.addr !972
  %37 = call i32 (i8*, ...) @printf(i8* %36), !insn.addr !973
  ret i32 %37, !insn.addr !974

; uselistorder directives
  uselistorder i32* %stack_var_-8, { 1, 0 }
  uselistorder i32 %1, { 7, 6, 5, 4, 3, 2, 0, 1 }
  uselistorder i8** %stack_var_-16, { 1, 0 }
  uselistorder i32 (i32, i32)* @param_thread_local_storage, { 1, 0 }
  uselistorder i32 (i32)* @param_atomic_ops, { 1, 0 }
  uselistorder i32 (i32)* @param_condition_variable, { 1, 0 }
  uselistorder i32 (i32)* @param_mutex_lock, { 1, 0 }
  uselistorder i32 4, { 16, 17, 18, 19, 0, 27, 1, 28, 26, 2, 3, 4, 29, 20, 21, 5, 30, 31, 6, 12, 32, 22, 23, 7, 33, 8, 34, 24, 35, 25, 14, 9, 13, 36, 15, 10, 11 }
  uselistorder i32 ()* @param_pthread_join, { 1, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 28 }
  uselistorder void (i32*)* @free, { 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 16 }
  uselistorder i32 (i32, i32**)* @pthread_join, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder i32 (i32*, i32*, i32* (i32*)*, i32*)* @pthread_create, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder i32* null, { 1, 3, 0, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 }
  uselistorder i32 7, { 1, 2, 0, 3 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_3280:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @test_standard_library_functions(i32 %1), !insn.addr !975
  %3 = call i32 @test_system_calls(i32 ptrtoint (i32* @0 to i32)), !insn.addr !976
  %4 = call i32 @test_thread_concurrency(i32 ptrtoint (i32* @0 to i32)), !insn.addr !977
  ret i32 0, !insn.addr !978

; uselistorder directives
  uselistorder i32 0, { 19, 49, 28, 1, 2, 50, 3, 4, 0, 30, 51, 52, 53, 5, 54, 55, 56, 57, 58, 59, 60, 42, 20, 21, 61, 62, 7, 6, 63, 64, 22, 43, 65, 8, 66, 67, 68, 69, 23, 70, 29, 71, 72, 73, 74, 75, 76, 24, 18, 77, 78, 79, 31, 81, 80, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 32, 33, 93, 94, 95, 96, 97, 98, 99, 34, 35, 47, 100, 101, 36, 48, 103, 102, 104, 105, 106, 37, 108, 107, 109, 38, 111, 110, 112, 113, 114, 115, 116, 117, 44, 118, 45, 119, 39, 40, 25, 10, 120, 13, 14, 11, 12, 9, 121, 41, 15, 122, 17, 16, 123, 124, 125, 126, 127, 128, 129, 26, 130, 131, 27, 46 }
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_32b0:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !979
  %ebx.0.reg2mem = alloca i32, !insn.addr !979
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !980
  %3 = add i32 %1, 15443, !insn.addr !981
  %4 = inttoptr i32 %3 to i32*, !insn.addr !981
  %5 = load i32, i32* %4, align 4, !insn.addr !981
  %6 = icmp eq i32 %5, -1, !insn.addr !982
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !983
  store i32 -1, i32* %merge.reg2mem, !insn.addr !983
  br i1 %6, label %dec_label_pc_32ed, label %dec_label_pc_32e0, !insn.addr !983

dec_label_pc_32e0:                                ; preds = %dec_label_pc_32b0, %dec_label_pc_32e0
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !984
  %8 = inttoptr i32 %7 to i32*, !insn.addr !984
  %9 = load i32, i32* %8, align 4, !insn.addr !984
  %10 = icmp eq i32 %9, -1, !insn.addr !985
  %11 = icmp eq i1 %10, false, !insn.addr !986
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !986
  store i32 %9, i32* %merge.reg2mem, !insn.addr !986
  br i1 %11, label %dec_label_pc_32e0, label %dec_label_pc_32ed, !insn.addr !986

dec_label_pc_32ed:                                ; preds = %dec_label_pc_32e0, %dec_label_pc_32b0
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !987

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 61, 7, 8, 9, 10, 11, 12, 13, 2, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 3, 42, 4, 43, 44, 45, 46, 0, 47, 48, 1, 49, 50, 51, 52, 53, 54, 55, 5, 56, 6, 57, 58, 59, 60 }
  uselistorder i32 -4, { 8, 2, 1, 5, 3, 0, 4, 6, 7 }
  uselistorder i32 -1, { 24, 0, 25, 2, 1, 36, 3, 37, 38, 4, 39, 5, 40, 6, 7, 8, 9, 10, 41, 42, 11, 26, 31, 27, 12, 13, 14, 15, 28, 16, 17, 18, 19, 32, 33, 29, 30, 43, 44, 20, 21, 22, 23, 34, 35 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder i32* @0, { 16, 15, 10, 11, 12, 7, 8, 9, 14, 13, 0, 4, 5, 6, 1, 3, 2 }
  uselistorder label %dec_label_pc_32e0, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_32fc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !988
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !989
  ret i32 %3, !insn.addr !990

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 1, 0 }
  uselistorder i32 1, { 44, 47, 46, 43, 42, 141, 140, 131, 41, 40, 174, 175, 176, 177, 116, 142, 55, 54, 53, 52, 51, 50, 49, 48, 39, 178, 117, 118, 143, 63, 62, 61, 60, 59, 58, 57, 56, 38, 179, 180, 181, 182, 115, 183, 184, 119, 69, 68, 67, 66, 65, 64, 37, 36, 146, 145, 144, 70, 35, 120, 34, 33, 185, 121, 122, 147, 78, 77, 76, 75, 74, 73, 72, 71, 32, 186, 123, 79, 31, 153, 154, 152, 151, 150, 149, 148, 80, 30, 187, 113, 157, 156, 155, 81, 29, 160, 159, 158, 82, 28, 132, 27, 26, 188, 124, 87, 86, 85, 84, 83, 25, 88, 24, 125, 162, 126, 163, 161, 89, 23, 166, 165, 164, 90, 22, 133, 91, 21, 134, 92, 20, 167, 19, 168, 18, 93, 94, 169, 17, 189, 114, 101, 100, 99, 98, 97, 96, 95, 190, 108, 107, 106, 105, 104, 103, 102, 16, 127, 128, 171, 170, 109, 45, 110, 15, 111, 14, 13, 12, 11, 10, 136, 135, 9, 137, 129, 138, 130, 172, 8, 7, 112, 6, 5, 4, 3, 173, 2, 1, 0, 139 }
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
!161 = !{i64 6322}
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
!184 = !{i64 6506}
!185 = !{i64 6509}
!186 = !{i64 6512}
!187 = !{i64 6530}
!188 = !{i64 6535}
!189 = !{i64 6540}
!190 = !{i64 6549}
!191 = !{i64 6561}
!192 = !{i64 6574}
!193 = !{i64 6577}
!194 = !{i64 6590}
!195 = !{i64 6598}
!196 = !{i64 6610}
!197 = !{i64 6613}
!198 = !{i64 6623}
!199 = !{i64 6631}
!200 = !{i64 6643}
!201 = !{i64 6672}
!202 = !{i64 6681}
!203 = !{i64 6690}
!204 = !{i64 6704}
!205 = !{i64 6727}
!206 = !{i64 6737}
!207 = !{i64 6742}
!208 = !{i64 6744}
!209 = !{i64 6746}
!210 = !{i64 6748}
!211 = !{i64 6750}
!212 = !{i64 6760}
!213 = !{i64 6763}
!214 = !{i64 6769}
!215 = !{i64 6783}
!216 = !{i64 6784}
!217 = !{i64 6787}
!218 = !{i64 6790}
!219 = !{i64 6793}
!220 = !{i64 6797}
!221 = !{i64 6801}
!222 = !{i64 6804}
!223 = !{i64 6808}
!224 = !{i64 6811}
!225 = !{i64 6814}
!226 = !{i64 6816}
!227 = !{i64 6755}
!228 = !{i64 6818}
!229 = !{i64 6820}
!230 = !{i64 6827}
!231 = !{i64 6830}
!232 = !{i64 6832}
!233 = !{i64 6835}
!234 = !{i64 6838}
!235 = !{i64 6841}
!236 = !{i64 6843}
!237 = !{i64 6845}
!238 = !{i64 6851}
!239 = !{i64 6860}
!240 = !{i64 6867}
!241 = !{i64 6881}
!242 = !{i64 6901}
!243 = !{i64 6912}
!244 = !{i64 6942}
!245 = !{i64 6950}
!246 = !{i64 6952}
!247 = !{i64 6954}
!248 = !{i64 6962}
!249 = !{i64 6965}
!250 = !{i64 6977}
!251 = !{i64 6991}
!252 = !{i64 6992}
!253 = !{i64 6996}
!254 = !{i64 6998}
!255 = !{i64 7003}
!256 = !{i64 7005}
!257 = !{i64 7010}
!258 = !{i64 7012}
!259 = !{i64 7017}
!260 = !{i64 7019}
!261 = !{i64 7024}
!262 = !{i64 7026}
!263 = !{i64 7031}
!264 = !{i64 7033}
!265 = !{i64 7038}
!266 = !{i64 7040}
!267 = !{i64 7045}
!268 = !{i64 7047}
!269 = !{i64 7050}
!270 = !{i64 7052}
!271 = !{i64 6959}
!272 = !{i64 7054}
!273 = !{i64 7056}
!274 = !{i64 7058}
!275 = !{i64 7071}
!276 = !{i64 7072}
!277 = !{i64 7076}
!278 = !{i64 7078}
!279 = !{i64 7081}
!280 = !{i64 7083}
!281 = !{i64 7088}
!282 = !{i64 7106}
!283 = !{i64 7157}
!284 = !{i64 7167}
!285 = !{i64 7169}
!286 = !{i64 7174}
!287 = !{i64 7181}
!288 = !{i64 7191}
!289 = !{i64 7193}
!290 = !{i64 7198}
!291 = !{i64 7200}
!292 = !{i64 7209}
!293 = !{i64 7221}
!294 = !{i64 7254}
!295 = !{i64 7261}
!296 = !{i64 7282}
!297 = !{i64 7298}
!298 = !{i64 7306}
!299 = !{i64 7314}
!300 = !{i64 7322}
!301 = !{i64 7331}
!302 = !{i64 7339}
!303 = !{i64 7348}
!304 = !{i64 7356}
!305 = !{i64 7365}
!306 = !{i64 7373}
!307 = !{i64 7379}
!308 = !{i64 7388}
!309 = !{i64 7389}
!310 = !{i64 7406}
!311 = !{i64 7452}
!312 = !{i64 7460}
!313 = !{i64 7474}
!314 = !{i64 7484}
!315 = !{i64 7492}
!316 = !{i64 7500}
!317 = !{i64 7512}
!318 = !{i64 7518}
!319 = !{i64 7526}
!320 = !{i64 7528}
!321 = !{i64 7558}
!322 = !{i64 7566}
!323 = !{i64 7574}
!324 = !{i64 7580}
!325 = !{i64 7586}
!326 = !{i64 7588}
!327 = !{i64 7596}
!328 = !{i64 7598}
!329 = !{i64 7606}
!330 = !{i64 7620}
!331 = !{i64 7631}
!332 = !{i64 7637}
!333 = !{i64 7645}
!334 = !{i64 7653}
!335 = !{i64 7660}
!336 = !{i64 7668}
!337 = !{i64 7676}
!338 = !{i64 7684}
!339 = !{i64 7693}
!340 = !{i64 7701}
!341 = !{i64 7710}
!342 = !{i64 7718}
!343 = !{i64 7727}
!344 = !{i64 7739}
!345 = !{i64 7744}
!346 = !{i64 7770}
!347 = !{i64 7778}
!348 = !{i64 7780}
!349 = !{i64 7790}
!350 = !{i64 7798}
!351 = !{i64 7800}
!352 = !{i64 7807}
!353 = !{i64 7816}
!354 = !{i64 7824}
!355 = !{i64 7853}
!356 = !{i64 7861}
!357 = !{i64 7863}
!358 = !{i64 7873}
!359 = !{i64 7881}
!360 = !{i64 7883}
!361 = !{i64 7890}
!362 = !{i64 7892}
!363 = !{i64 7895}
!364 = !{i64 7905}
!365 = !{i64 7948}
!366 = !{i64 7956}
!367 = !{i64 7971}
!368 = !{i64 7974}
!369 = !{i64 7981}
!370 = !{i64 7988}
!371 = !{i64 8023}
!372 = !{i64 8030}
!373 = !{i64 8031}
!374 = !{i64 8039}
!375 = !{i64 8054}
!376 = !{i64 8057}
!377 = !{i64 8064}
!378 = !{i64 8071}
!379 = !{i64 8080}
!380 = !{i64 8096}
!381 = !{i64 8101}
!382 = !{i64 8103}
!383 = !{i64 8105}
!384 = !{i64 8118}
!385 = !{i64 8126}
!386 = !{i64 8128}
!387 = !{i64 8130}
!388 = !{i64 8139}
!389 = !{i64 8142}
!390 = !{i64 8144}
!391 = !{i64 8147}
!392 = !{i64 8165}
!393 = !{i64 8178}
!394 = !{i64 8188}
!395 = !{i64 8208}
!396 = !{i64 8209}
!397 = !{i64 8223}
!398 = !{i64 8233}
!399 = !{i64 8235}
!400 = !{i64 8237}
!401 = !{i64 8250}
!402 = !{i64 8258}
!403 = !{i64 8260}
!404 = !{i64 8262}
!405 = !{i64 8265}
!406 = !{i64 8267}
!407 = !{i64 8269}
!408 = !{i64 8274}
!409 = !{i64 8278}
!410 = !{i64 8288}
!411 = !{i64 8289}
!412 = !{i64 8299}
!413 = !{i64 8301}
!414 = !{i64 8311}
!415 = !{i64 8320}
!416 = !{i64 8341}
!417 = !{i64 8344}
!418 = !{i64 8349}
!419 = !{i64 8351}
!420 = !{i64 8353}
!421 = !{i64 8358}
!422 = !{i64 8360}
!423 = !{i64 8362}
!424 = !{i64 8330}
!425 = !{i64 8371}
!426 = !{i64 8376}
!427 = !{i64 8388}
!428 = !{i64 8399}
!429 = !{i64 8406}
!430 = !{i64 8411}
!431 = !{i64 8415}
!432 = !{i64 8418}
!433 = !{i64 8423}
!434 = !{i64 8430}
!435 = !{i64 8435}
!436 = !{i64 8447}
!437 = !{i64 8450}
!438 = !{i64 8469}
!439 = !{i64 8470}
!440 = !{i64 8474}
!441 = !{i64 8477}
!442 = !{i64 8486}
!443 = !{i64 8507}
!444 = !{i64 8519}
!445 = !{i64 8524}
!446 = !{i64 8531}
!447 = !{i64 8560}
!448 = !{i64 8569}
!449 = !{i64 8576}
!450 = !{i64 8603}
!451 = !{i64 8611}
!452 = !{i64 8613}
!453 = !{i64 8621}
!454 = !{i64 8644}
!455 = !{i64 8652}
!456 = !{i64 8654}
!457 = !{i64 8672}
!458 = !{i64 8699}
!459 = !{i64 8707}
!460 = !{i64 8709}
!461 = !{i64 8717}
!462 = !{i64 8731}
!463 = !{i64 8739}
!464 = !{i64 8751}
!465 = !{i64 8754}
!466 = !{i64 8767}
!467 = !{i64 8780}
!468 = !{i64 8786}
!469 = !{i64 8794}
!470 = !{i64 8805}
!471 = !{i64 8832}
!472 = !{i64 8841}
!473 = !{i64 8848}
!474 = !{i64 8870}
!475 = !{i64 8883}
!476 = !{i64 8884}
!477 = !{i64 8897}
!478 = !{i64 8899}
!479 = !{i64 8909}
!480 = !{i64 8920}
!481 = !{i64 8928}
!482 = !{i64 8930}
!483 = !{i64 8950}
!484 = !{i64 8958}
!485 = !{i64 8960}
!486 = !{i64 8972}
!487 = !{i64 8980}
!488 = !{i64 8983}
!489 = !{i64 8987}
!490 = !{i64 8991}
!491 = !{i64 8998}
!492 = !{i64 9005}
!493 = !{i64 9014}
!494 = !{i64 9015}
!495 = !{i64 9029}
!496 = !{i64 9042}
!497 = !{i64 9052}
!498 = !{i64 9075}
!499 = !{i64 9104}
!500 = !{i64 9109}
!501 = !{i64 9121}
!502 = !{i64 9128}
!503 = !{i64 9136}
!504 = !{i64 9153}
!505 = !{i64 9170}
!506 = !{i64 9175}
!507 = !{i64 9178}
!508 = !{i64 9195}
!509 = !{i64 9200}
!510 = !{i64 9203}
!511 = !{i64 9209}
!512 = !{i64 9226}
!513 = !{i64 9231}
!514 = !{i64 9238}
!515 = !{i64 9255}
!516 = !{i64 9260}
!517 = !{i64 9267}
!518 = !{i64 9269}
!519 = !{i64 9277}
!520 = !{i64 9279}
!521 = !{i64 9286}
!522 = !{i64 9292}
!523 = !{i64 9303}
!524 = !{i64 9306}
!525 = !{i64 9312}
!526 = !{i64 9329}
!527 = !{i64 9334}
!528 = !{i64 9341}
!529 = !{i64 9367}
!530 = !{i64 9372}
!531 = !{i64 9379}
!532 = !{i64 9381}
!533 = !{i64 9389}
!534 = !{i64 9396}
!535 = !{i64 9403}
!536 = !{i64 9405}
!537 = !{i64 9411}
!538 = !{i64 9414}
!539 = !{i64 9431}
!540 = !{i64 9451}
!541 = !{i64 9461}
!542 = !{i64 9487}
!543 = !{i64 9494}
!544 = !{i64 9504}
!545 = !{i64 9514}
!546 = !{i64 9520}
!547 = !{i64 9552}
!548 = !{i64 9561}
!549 = !{i64 9590}
!550 = !{i64 9596}
!551 = !{i64 9597}
!552 = !{i64 9616}
!553 = !{i64 9624}
!554 = !{i64 9626}
!555 = !{i64 9636}
!556 = !{i64 9644}
!557 = !{i64 9646}
!558 = !{i64 9653}
!559 = !{i64 9605}
!560 = !{i64 9664}
!561 = !{i64 9671}
!562 = !{i64 9672}
!563 = !{i64 9685}
!564 = !{i64 9686}
!565 = !{i64 9725}
!566 = !{i64 9732}
!567 = !{i64 9733}
!568 = !{i64 9741}
!569 = !{i64 9751}
!570 = !{i64 9753}
!571 = !{i64 9755}
!572 = !{i64 9768}
!573 = !{i64 9809}
!574 = !{i64 9816}
!575 = !{i64 9817}
!576 = !{i64 9825}
!577 = !{i64 9833}
!578 = !{i64 9840}
!579 = !{i64 9841}
!580 = !{i64 9849}
!581 = !{i64 9857}
!582 = !{i64 9864}
!583 = !{i64 9865}
!584 = !{i64 9873}
!585 = !{i64 9886}
!586 = !{i64 9893}
!587 = !{i64 9894}
!588 = !{i64 9902}
!589 = !{i64 9910}
!590 = !{i64 9917}
!591 = !{i64 9918}
!592 = !{i64 9930}
!593 = !{i64 9931}
!594 = !{i64 9942}
!595 = !{i64 9943}
!596 = !{i64 9953}
!597 = !{i64 9987}
!598 = !{i64 9989}
!599 = !{i64 9999}
!600 = !{i64 10004}
!601 = !{i64 10011}
!602 = !{i64 10016}
!603 = !{i64 10037}
!604 = !{i64 10045}
!605 = !{i64 10056}
!606 = !{i64 10060}
!607 = !{i64 10073}
!608 = !{i64 10075}
!609 = !{i64 10085}
!610 = !{i64 10089}
!611 = !{i64 10097}
!612 = !{i64 10101}
!613 = !{i64 10107}
!614 = !{i64 10112}
!615 = !{i64 10122}
!616 = !{i64 10128}
!617 = !{i64 10145}
!618 = !{i64 10157}
!619 = !{i64 10168}
!620 = !{i64 10172}
!621 = !{i64 10185}
!622 = !{i64 10187}
!623 = !{i64 10197}
!624 = !{i64 10201}
!625 = !{i64 10209}
!626 = !{i64 10213}
!627 = !{i64 10219}
!628 = !{i64 10224}
!629 = !{i64 10234}
!630 = !{i64 10247}
!631 = !{i64 10254}
!632 = !{i64 10256}
!633 = !{i64 10263}
!634 = !{i64 10261}
!635 = !{i64 10269}
!636 = !{i64 10271}
!637 = !{i64 10273}
!638 = !{i64 10276}
!639 = !{i64 10280}
!640 = !{i64 10283}
!641 = !{i64 10285}
!642 = !{i64 10287}
!643 = !{i64 10295}
!644 = !{i64 10304}
!645 = !{i64 10347}
!646 = !{i64 10363}
!647 = !{i64 10379}
!648 = !{i64 10399}
!649 = !{i64 10410}
!650 = !{i64 10414}
!651 = !{i64 10427}
!652 = !{i64 10429}
!653 = !{i64 10448}
!654 = !{i64 10456}
!655 = !{i64 10458}
!656 = !{i64 10473}
!657 = !{i64 10481}
!658 = !{i64 10483}
!659 = !{i64 10490}
!660 = !{i64 10494}
!661 = !{i64 10507}
!662 = !{i64 10509}
!663 = !{i64 10520}
!664 = !{i64 10524}
!665 = !{i64 10532}
!666 = !{i64 10534}
!667 = !{i64 10545}
!668 = !{i64 10549}
!669 = !{i64 10557}
!670 = !{i64 10559}
!671 = !{i64 10578}
!672 = !{i64 10608}
!673 = !{i64 10617}
!674 = !{i64 10624}
!675 = !{i64 10646}
!676 = !{i64 10650}
!677 = !{i64 10652}
!678 = !{i64 10675}
!679 = !{i64 10671}
!680 = !{i64 10680}
!681 = !{i64 10690}
!682 = !{i64 10702}
!683 = !{i64 10707}
!684 = !{i64 10710}
!685 = !{i64 10720}
!686 = !{i64 10736}
!687 = !{i64 10759}
!688 = !{i64 10770}
!689 = !{i64 10778}
!690 = !{i64 10780}
!691 = !{i64 10775}
!692 = !{i64 10788}
!693 = !{i64 10800}
!694 = !{i64 10891}
!695 = !{i64 10900}
!696 = !{i64 10804}
!697 = !{i64 10820}
!698 = !{i64 10821}
!699 = !{i64 10822}
!700 = !{i64 10815}
!701 = !{i64 10824}
!702 = !{i64 10825}
!703 = !{i64 10833}
!704 = !{i64 10835}
!705 = !{i64 10837}
!706 = !{i64 10840}
!707 = !{i64 10843}
!708 = !{i64 10845}
!709 = !{i64 10851}
!710 = !{i64 10855}
!711 = !{i64 10867}
!712 = !{i64 10869}
!713 = !{i64 10873}
!714 = !{i64 10881}
!715 = !{i64 10884}
!716 = !{i64 10886}
!717 = !{i64 10892}
!718 = !{i64 10905}
!719 = !{i64 10911}
!720 = !{i64 10923}
!721 = !{i64 10926}
!722 = !{i64 10938}
!723 = !{i64 10942}
!724 = !{i64 10950}
!725 = !{i64 10962}
!726 = !{i64 11002}
!727 = !{i64 11011}
!728 = !{i64 11042}
!729 = !{i64 11051}
!730 = !{i64 11056}
!731 = !{i64 11063}
!732 = !{i64 11065}
!733 = !{i64 11079}
!734 = !{i64 11071}
!735 = !{i64 11084}
!736 = !{i64 11091}
!737 = !{i64 11095}
!738 = !{i64 11107}
!739 = !{i64 11113}
!740 = !{i64 11125}
!741 = !{i64 11130}
!742 = !{i64 11138}
!743 = !{i64 11174}
!744 = !{i64 11179}
!745 = !{i64 11188}
!746 = !{i64 11193}
!747 = !{i64 11200}
!748 = !{i64 11207}
!749 = !{i64 11216}
!750 = !{i64 11224}
!751 = !{i64 11236}
!752 = !{i64 11248}
!753 = !{i64 11265}
!754 = !{i64 11272}
!755 = !{i64 11279}
!756 = !{i64 11291}
!757 = !{i64 11295}
!758 = !{i64 11308}
!759 = !{i64 11310}
!760 = !{i64 11312}
!761 = !{i64 11324}
!762 = !{i64 11328}
!763 = !{i64 11336}
!764 = !{i64 11338}
!765 = !{i64 11347}
!766 = !{i64 11360}
!767 = !{i64 11374}
!768 = !{i64 11384}
!769 = !{i64 11388}
!770 = !{i64 11396}
!771 = !{i64 11400}
!772 = !{i64 11406}
!773 = !{i64 11411}
!774 = !{i64 11421}
!775 = !{i64 11440}
!776 = !{i64 11449}
!777 = !{i64 11456}
!778 = !{i64 11475}
!779 = !{i64 11479}
!780 = !{i64 11485}
!781 = !{i64 11495}
!782 = !{i64 11498}
!783 = !{i64 11500}
!784 = !{i64 11520}
!785 = !{i64 11519}
!786 = !{i64 11528}
!787 = !{i64 11536}
!788 = !{i64 11544}
!789 = !{i64 11552}
!790 = !{i64 11555}
!791 = !{i64 11561}
!792 = !{i64 11569}
!793 = !{i64 11577}
!794 = !{i64 11580}
!795 = !{i64 11586}
!796 = !{i64 11594}
!797 = !{i64 11602}
!798 = !{i64 11605}
!799 = !{i64 11611}
!800 = !{i64 11619}
!801 = !{i64 11622}
!802 = !{i64 11624}
!803 = !{i64 11490}
!804 = !{i64 11626}
!805 = !{i64 11628}
!806 = !{i64 11632}
!807 = !{i64 11640}
!808 = !{i64 11648}
!809 = !{i64 11656}
!810 = !{i64 11659}
!811 = !{i64 11662}
!812 = !{i64 11669}
!813 = !{i64 11692}
!814 = !{i64 11698}
!815 = !{i64 11701}
!816 = !{i64 11709}
!817 = !{i64 11712}
!818 = !{i64 11735}
!819 = !{i64 11746}
!820 = !{i64 11754}
!821 = !{i64 11756}
!822 = !{i64 11751}
!823 = !{i64 11768}
!824 = !{i64 11776}
!825 = !{i64 11835}
!826 = !{i64 11837}
!827 = !{i64 11838}
!828 = !{i64 11840}
!829 = !{i64 11778}
!830 = !{i64 11792}
!831 = !{i64 11788}
!832 = !{i64 11796}
!833 = !{i64 11797}
!834 = !{i64 11798}
!835 = !{i64 11800}
!836 = !{i64 11801}
!837 = !{i64 11809}
!838 = !{i64 11811}
!839 = !{i64 11817}
!840 = !{i64 11820}
!841 = !{i64 11823}
!842 = !{i64 11825}
!843 = !{i64 11831}
!844 = !{i64 11841}
!845 = !{i64 11849}
!846 = !{i64 11851}
!847 = !{i64 11856}
!848 = !{i64 11858}
!849 = !{i64 11862}
!850 = !{i64 11867}
!851 = !{i64 11870}
!852 = !{i64 11876}
!853 = !{i64 11880}
!854 = !{i64 11891}
!855 = !{i64 11893}
!856 = !{i64 11897}
!857 = !{i64 11905}
!858 = !{i64 11908}
!859 = !{i64 11910}
!860 = !{i64 11912}
!861 = !{i64 11921}
!862 = !{i64 11922}
!863 = !{i64 11930}
!864 = !{i64 11942}
!865 = !{i64 11945}
!866 = !{i64 11957}
!867 = !{i64 11961}
!868 = !{i64 11969}
!869 = !{i64 11981}
!870 = !{i64 12010}
!871 = !{i64 12019}
!872 = !{i64 12051}
!873 = !{i64 12058}
!874 = !{i64 12061}
!875 = !{i64 12071}
!876 = !{i64 12078}
!877 = !{i64 12087}
!878 = !{i64 12088}
!879 = !{i64 12098}
!880 = !{i64 12106}
!881 = !{i64 12108}
!882 = !{i64 12114}
!883 = !{i64 12128}
!884 = !{i64 12151}
!885 = !{i64 12161}
!886 = !{i64 12171}
!887 = !{i64 12183}
!888 = !{i64 12191}
!889 = !{i64 12185}
!890 = !{i64 12209}
!891 = !{i64 12217}
!892 = !{i64 12239}
!893 = !{i64 12247}
!894 = !{i64 12252}
!895 = !{i64 12275}
!896 = !{i64 12280}
!897 = !{i64 12283}
!898 = !{i64 12287}
!899 = !{i64 12302}
!900 = !{i64 12346}
!901 = !{i64 12319}
!902 = !{i64 12324}
!903 = !{i64 12351}
!904 = !{i64 12353}
!905 = !{i64 12528}
!906 = !{i64 12359}
!907 = !{i64 12362}
!908 = !{i64 12365}
!909 = !{i64 12369}
!910 = !{i64 12402}
!911 = !{i64 12388}
!912 = !{i64 12407}
!913 = !{i64 12413}
!914 = !{i64 12419}
!915 = !{i64 12428}
!916 = !{i64 12434}
!917 = !{i64 12439}
!918 = !{i64 12442}
!919 = !{i64 12446}
!920 = !{i64 12461}
!921 = !{i64 12473}
!922 = !{i64 12482}
!923 = !{i64 12487}
!924 = !{i64 12495}
!925 = !{i64 12507}
!926 = !{i64 12510}
!927 = !{i64 12535}
!928 = !{i64 12540}
!929 = !{i64 12543}
!930 = !{i64 12545}
!931 = !{i64 12550}
!932 = !{i64 12562}
!933 = !{i64 12567}
!934 = !{i64 12579}
!935 = !{i64 12615}
!936 = !{i64 12624}
!937 = !{i64 12660}
!938 = !{i64 12666}
!939 = !{i64 12667}
!940 = !{i64 12675}
!941 = !{i64 12687}
!942 = !{i64 12698}
!943 = !{i64 12702}
!944 = !{i64 12715}
!945 = !{i64 12717}
!946 = !{i64 12727}
!947 = !{i64 12731}
!948 = !{i64 12739}
!949 = !{i64 12749}
!950 = !{i64 12754}
!951 = !{i64 12760}
!952 = !{i64 12767}
!953 = !{i64 12768}
!954 = !{i64 12776}
!955 = !{i64 12784}
!956 = !{i64 12791}
!957 = !{i64 12792}
!958 = !{i64 12807}
!959 = !{i64 12815}
!960 = !{i64 12822}
!961 = !{i64 12823}
!962 = !{i64 12831}
!963 = !{i64 12839}
!964 = !{i64 12846}
!965 = !{i64 12847}
!966 = !{i64 12862}
!967 = !{i64 12870}
!968 = !{i64 12877}
!969 = !{i64 12878}
!970 = !{i64 12888}
!971 = !{i64 12896}
!972 = !{i64 12903}
!973 = !{i64 12904}
!974 = !{i64 12914}
!975 = !{i64 12944}
!976 = !{i64 12949}
!977 = !{i64 12954}
!978 = !{i64 12965}
!979 = !{i64 12976}
!980 = !{i64 12980}
!981 = !{i64 12991}
!982 = !{i64 12997}
!983 = !{i64 13000}
!984 = !{i64 13026}
!985 = !{i64 13032}
!986 = !{i64 13035}
!987 = !{i64 13041}
!988 = !{i64 13060}
!989 = !{i64 13071}
!990 = !{i64 13080}
