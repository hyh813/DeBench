source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

%shmid_ds = type { %ipc_perm, i32, i32, i32, i32, i32, i32, i16, i16, i32*, i32* }
%ipc_perm = type { i32, i32, i32, i32, i32, i32, i16 }
%_IO_FILE = type { i32 }
%stat = type { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }
%sockaddr = type { i32, [14 x i8] }

@global_var_4eaa = local_unnamed_addr constant i32 -985545151
@global_var_4e86 = local_unnamed_addr constant i32 2621444
@global_var_4e22 = local_unnamed_addr constant i32 133693440
@global_var_4db8 = local_unnamed_addr constant i32 263180
@global_var_4d3a = constant i32 2686975
@global_var_4cfd = constant i32 84754946
@global_var_4baf = local_unnamed_addr constant i32 263180
@global_var_4b5c = constant i32 282
@global_var_4b1e = local_unnamed_addr constant i32 42272782
@global_var_4ab0 = constant i32 -9626
@global_var_4a87 = local_unnamed_addr constant i32 285696
@global_var_49cf = constant i32 -982252275
@global_var_498f = constant i32 67374277
@global_var_486c = local_unnamed_addr constant i32 -10999
@global_var_4850 = local_unnamed_addr constant i32 135152896
@global_var_4721 = local_unnamed_addr constant i32 84754946
@global_var_4705 = constant i32 214156611
@global_var_45ec = local_unnamed_addr constant i32 -4139
@global_var_45bf = constant i32 621823
@global_var_4594 = constant i32 -5613
@global_var_3e8 = global i32 122
@global_var_7d0 = global i32 1953497189
@global_var_443e = local_unnamed_addr constant i32 51707903
@global_var_4422 = constant i32 -718733312
@global_var_434c = local_unnamed_addr constant [3 x i8] c"==\00"
@global_var_42fd = constant i32 -1617107416
@global_var_426b = local_unnamed_addr constant i32 622869041
@global_var_4248 = local_unnamed_addr constant i32 540884285
@global_var_41f2 = constant i32 540684593
@global_var_40da = local_unnamed_addr constant i32 976302125
@global_var_40be = constant i32 -1159362937
@global_var_403e = constant [9 x i8] c"ame: %s\0A\00"
@global_var_4084 = local_unnamed_addr constant [17 x i8] c"inbench_test.tmp\00"
@global_var_40a0 = local_unnamed_addr constant [9 x i8] c"nch Test\00"
@global_var_40d0 = local_unnamed_addr constant [4 x i8] c"===\00"
@global_var_40d4 = local_unnamed_addr constant i32 759318860
@global_var_404c = local_unnamed_addr constant [6 x i8] c"%d,%d\00"
@global_var_4048 = local_unnamed_addr constant [4 x i8] c"est\00"
@global_var_4018 = local_unnamed_addr constant i32 2054780928
@global_var_1f4 = constant [4 x i8] c"GNU\00"
@global_var_c33 = local_unnamed_addr global i32 4130560
@0 = external global i32
@global_var_3b6 = global %shmid_ds* inttoptr (i32 27459584 to %shmid_ds*)

define i32 @_init() local_unnamed_addr {
dec_label_pc_1000:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !0
  %3 = call i32 @frame_dummy(), !insn.addr !1
  %4 = call i32 @__do_global_ctors_aux(), !insn.addr !2
  ret i32 %4, !insn.addr !3
}

define void @function_13f0(i32* %d) local_unnamed_addr {
dec_label_pc_13f0:
  call void @__cxa_finalize(i32* %d), !insn.addr !4
  ret void, !insn.addr !4
}

define i32 @function_1400(i32 %fd, i32 %level, i32 %optname, i32* %optval, i32 %optlen) local_unnamed_addr {
dec_label_pc_1400:
  %0 = call i32 @setsockopt(i32 %fd, i32 %level, i32 %optname, i32* %optval, i32 %optlen), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define i32 @function_1410(i32* %mutex) local_unnamed_addr {
dec_label_pc_1410:
  %0 = call i32 @pthread_mutex_unlock(i32* %mutex), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i32 @function_1420(i32 %sig) local_unnamed_addr {
dec_label_pc_1420:
  %0 = call i32 @raise(i32 %sig), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i8* @function_1430(i8* %haystack, i8* %needle) local_unnamed_addr {
dec_label_pc_1430:
  %0 = call i8* @strstr(i8* %haystack, i8* %needle), !insn.addr !8
  ret i8* %0, !insn.addr !8
}

define i32 @function_1440(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_1440:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @function_1450(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_1450:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i32 @function_1460(i32 %fd, i32* %buf, i32 %nbytes) local_unnamed_addr {
dec_label_pc_1460:
  %0 = call i32 @read(i32 %fd, i32* %buf, i32 %nbytes), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i32 @function_1470(i8* %format, ...) local_unnamed_addr {
dec_label_pc_1470:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define void @function_1480(i32 %status) local_unnamed_addr {
dec_label_pc_1480:
  call void @_exit(i32 %status), !insn.addr !13
  ret void, !insn.addr !13
}

define void @function_1490(i32* %ptr) local_unnamed_addr {
dec_label_pc_1490:
  call void @free(i32* %ptr), !insn.addr !14
  ret void, !insn.addr !14
}

define i32* @function_14a0(i32* %dest, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_14a0:
  %0 = call i32* @memcpy(i32* %dest, i32* %src, i32 %n), !insn.addr !15
  ret i32* %0, !insn.addr !15
}

define i32 @function_14b0(i32 %key, i32 %size, i32 %shmflg) local_unnamed_addr {
dec_label_pc_14b0:
  %0 = call i32 @shmget(i32 %key, i32 %size, i32 %shmflg), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i32 @function_14c0(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_14c0:
  %0 = call i32 @fclose(%_IO_FILE* %stream), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i32 @function_14d0(i32* %cond, i32* %mutex) local_unnamed_addr {
dec_label_pc_14d0:
  %0 = call i32 @pthread_cond_wait(i32* %cond, i32* %mutex), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define void (i32)* @function_14e0(i32 %sig, void (i32)* %handler) local_unnamed_addr {
dec_label_pc_14e0:
  %0 = call void (i32)* @signal(i32 %sig, void (i32)* %handler), !insn.addr !19
  ret void (i32)* %0, !insn.addr !19
}

define i32 @function_14f0(i32* %s1, i32* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_14f0:
  %0 = call i32 @memcmp(i32* %s1, i32* %s2, i32 %n), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i32 @function_1500(i32 %seconds) local_unnamed_addr {
dec_label_pc_1500:
  %0 = call i32 @sleep(i32 %seconds), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define i32 @function_1510(i32 %seconds) local_unnamed_addr {
dec_label_pc_1510:
  %0 = call i32 @alarm(i32 %seconds), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define void @function_1520() local_unnamed_addr {
dec_label_pc_1520:
  call void @__stack_chk_fail(), !insn.addr !23
  ret void, !insn.addr !23
}

define void @function_1530(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_1530:
  call void @rewind(%_IO_FILE* %stream), !insn.addr !24
  ret void, !insn.addr !24
}

define i32 @function_1540(i32 %stat_loc) local_unnamed_addr {
dec_label_pc_1540:
  %0 = call i32 @wait(i32 %stat_loc), !insn.addr !25
  ret i32 %0, !insn.addr !25
}

define i16 @function_1550(i16 %hostshort) local_unnamed_addr {
dec_label_pc_1550:
  %0 = call i16 @htons(i16 %hostshort), !insn.addr !26
  ret i16 %0, !insn.addr !26
}

define i32* @function_1560(i32 %shmid, i32* %shmaddr, i32 %shmflg) local_unnamed_addr {
dec_label_pc_1560:
  %0 = call i32* @shmat(i32 %shmid, i32* %shmaddr, i32 %shmflg), !insn.addr !27
  ret i32* %0, !insn.addr !27
}

define i32 @function_1570(i32* %mutex) local_unnamed_addr {
dec_label_pc_1570:
  %0 = call i32 @pthread_mutex_lock(i32* %mutex), !insn.addr !28
  ret i32 %0, !insn.addr !28
}

define i32 @function_1580(i8* %name) local_unnamed_addr {
dec_label_pc_1580:
  %0 = call i32 @unlink(i8* %name), !insn.addr !29
  ret i32 %0, !insn.addr !29
}

define i32 @function_1590(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_1590:
  %0 = call i32 @fwrite(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !30
  ret i32 %0, !insn.addr !30
}

define i32 @function_15a0(i32 %pid, i32* %stat_loc, i32 %options) local_unnamed_addr {
dec_label_pc_15a0:
  %0 = call i32 @waitpid(i32 %pid, i32* %stat_loc, i32 %options), !insn.addr !31
  ret i32 %0, !insn.addr !31
}

define i32 @function_15b0(i32 %useconds) local_unnamed_addr {
dec_label_pc_15b0:
  %0 = call i32 @usleep(i32 %useconds), !insn.addr !32
  ret i32 %0, !insn.addr !32
}

define i32 @function_15c0(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_15c0:
  %0 = call i32 @fread(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream), !insn.addr !33
  ret i32 %0, !insn.addr !33
}

define i8* @function_15d0(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_15d0:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !34
  ret i8* %0, !insn.addr !34
}

define i32 @function_15e0(i32 %shmid, i32 %cmd, %shmid_ds* %buf) local_unnamed_addr {
dec_label_pc_15e0:
  %0 = call i32 @shmctl(i32 %shmid, i32 %cmd, %shmid_ds* %buf), !insn.addr !35
  ret i32 %0, !insn.addr !35
}

define i32 @function_15f0(i32* %cond) local_unnamed_addr {
dec_label_pc_15f0:
  %0 = call i32 @pthread_cond_signal(i32* %cond), !insn.addr !36
  ret i32 %0, !insn.addr !36
}

define i32* @function_1600(i32 %size) local_unnamed_addr {
dec_label_pc_1600:
  %0 = call i32* @malloc(i32 %size), !insn.addr !37
  ret i32* %0, !insn.addr !37
}

define i32 @function_1610(i8* %s) local_unnamed_addr {
dec_label_pc_1610:
  %0 = call i32 @puts(i8* %s), !insn.addr !38
  ret i32 %0, !insn.addr !38
}

define i32 @function_1620(i8* %file, %stat* %buf) local_unnamed_addr {
dec_label_pc_1620:
  %0 = call i32 @stat(i8* %file, %stat* %buf), !insn.addr !39
  ret i32 %0, !insn.addr !39
}

define i32 @function_1630(i8* %file, i32 %oflag, ...) local_unnamed_addr {
dec_label_pc_1630:
  %0 = call i32 (i8*, i32, ...) @open(i8* %file, i32 %oflag), !insn.addr !40
  ret i32 %0, !insn.addr !40
}

define i8* @function_1640(i8* %s, i32 %c) local_unnamed_addr {
dec_label_pc_1640:
  %0 = call i8* @strchr(i8* %s, i32 %c), !insn.addr !41
  ret i8* %0, !insn.addr !41
}

define i32 @function_1650(i8* %s) local_unnamed_addr {
dec_label_pc_1650:
  %0 = call i32 @strlen(i8* %s), !insn.addr !42
  ret i32 %0, !insn.addr !42
}

define i32 @function_1660(i32 %fd, i32* %buf, i32 %n) local_unnamed_addr {
dec_label_pc_1660:
  %0 = call i32 @write(i32 %fd, i32* %buf, i32 %n), !insn.addr !43
  ret i32 %0, !insn.addr !43
}

define i32 @function_1670(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_1670:
  %0 = call i32 @bind(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !44
  ret i32 %0, !insn.addr !44
}

define i32 @function_1680(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_1680:
  %0 = call i32 (i8*, i8*, ...) @sscanf(i8* %s, i8* %format), !insn.addr !45
  ret i32 %0, !insn.addr !45
}

define %_IO_FILE* @function_1690(i8* %filename, i8* %modes) local_unnamed_addr {
dec_label_pc_1690:
  %0 = call %_IO_FILE* @fopen(i8* %filename, i8* %modes), !insn.addr !46
  ret %_IO_FILE* %0, !insn.addr !46
}

define i32* @function_16a0(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_16a0:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !47
  ret i32* %0, !insn.addr !47
}

define i32 @function_16b0(i8* %s, i32 %maxlen, i8* %format, ...) local_unnamed_addr {
dec_label_pc_16b0:
  %0 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %s, i32 %maxlen, i8* %format), !insn.addr !48
  ret i32 %0, !insn.addr !48
}

define i32* @function_16c0() local_unnamed_addr {
dec_label_pc_16c0:
  %0 = call i32* @__errno_location(), !insn.addr !49
  ret i32* %0, !insn.addr !49
}

define i8* @function_16d0(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_16d0:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !50
  ret i8* %0, !insn.addr !50
}

define i32 @function_16e0(i32 %sysno, ...) local_unnamed_addr {
dec_label_pc_16e0:
  %0 = call i32 (i32, ...) @syscall(i32 %sysno), !insn.addr !51
  ret i32 %0, !insn.addr !51
}

define i32 @function_16f0(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_16f0:
  %0 = call i32 @fileno(%_IO_FILE* %stream), !insn.addr !52
  ret i32 %0, !insn.addr !52
}

define i32 @function_1700(i8* %path, i8* %arg, ...) local_unnamed_addr {
dec_label_pc_1700:
  %0 = call i32 (i8*, i8*, ...) @execl(i8* %path, i8* %arg), !insn.addr !53
  ret i32 %0, !insn.addr !53
}

define i32 @function_1710([2 x i32] %pipedes) local_unnamed_addr {
dec_label_pc_1710:
  %0 = call i32 @pipe([2 x i32] %pipedes), !insn.addr !54
  ret i32 %0, !insn.addr !54
}

define i32 @function_1720(i32* %shmaddr) local_unnamed_addr {
dec_label_pc_1720:
  %0 = call i32 @shmdt(i32* %shmaddr), !insn.addr !55
  ret i32 %0, !insn.addr !55
}

define i32 @function_1730(i32* %newthread, i32* %attr, i32* (i32*)* %start_routine, i32* %arg) local_unnamed_addr {
dec_label_pc_1730:
  %0 = call i32 @pthread_create(i32* %newthread, i32* %attr, i32* (i32*)* %start_routine, i32* %arg), !insn.addr !56
  ret i32 %0, !insn.addr !56
}

define i32 @function_1740() local_unnamed_addr {
dec_label_pc_1740:
  %0 = call i32 @fork(), !insn.addr !57
  ret i32 %0, !insn.addr !57
}

define i32 @function_1750(i32 %fd, i32 %n) local_unnamed_addr {
dec_label_pc_1750:
  %0 = call i32 @listen(i32 %fd, i32 %n), !insn.addr !58
  ret i32 %0, !insn.addr !58
}

define i32 @function_1760(i8* %pathname, i32 %proj_id) local_unnamed_addr {
dec_label_pc_1760:
  %0 = call i32 @ftok(i8* %pathname, i32 %proj_id), !insn.addr !59
  ret i32 %0, !insn.addr !59
}

define i32 @function_1770(i32 %domain, i32 %type, i32 %protocol) local_unnamed_addr {
dec_label_pc_1770:
  %0 = call i32 @socket(i32 %domain, i32 %type, i32 %protocol), !insn.addr !60
  ret i32 %0, !insn.addr !60
}

define i32 @function_1780(i32 %th, i32** %thread_return) local_unnamed_addr {
dec_label_pc_1780:
  %0 = call i32 @pthread_join(i32 %th, i32** %thread_return), !insn.addr !61
  ret i32 %0, !insn.addr !61
}

define i32 @function_1790(i32 %th) local_unnamed_addr {
dec_label_pc_1790:
  %0 = call i32 @pthread_cancel(i32 %th), !insn.addr !62
  ret i32 %0, !insn.addr !62
}

define i32 @function_17a0(i32 %fd) local_unnamed_addr {
dec_label_pc_17a0:
  %0 = call i32 @close(i32 %fd), !insn.addr !63
  ret i32 %0, !insn.addr !63
}

define i32 @_start(i32 %arg1) local_unnamed_addr {
dec_label_pc_17b0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_4 = alloca i32, align 4
  %3 = call i32 @function_17dc(i32 %2), !insn.addr !64
  %4 = bitcast i32* %stack_var_4 to i8**
  %5 = add i32 %1, 22580, !insn.addr !65
  %6 = inttoptr i32 %5 to i32*, !insn.addr !65
  %7 = load i32, i32* %6, align 4, !insn.addr !65
  %8 = call i32 @__libc_start_main(i32 %7, i32 %arg1, i8** nonnull %4, void ()* null, void ()* null, void ()* bitcast (i32* @0 to void ()*)), !insn.addr !66
  %9 = call i32 @__asm_hlt(), !insn.addr !67
  unreachable, !insn.addr !67

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @function_17dc(i32 %arg1) local_unnamed_addr {
dec_label_pc_17dc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !68
}

define i32 @__x86.get_pc_thunk.bx(i32 %arg1) local_unnamed_addr {
dec_label_pc_17e0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !69
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_17f0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !70
  %3 = add i32 %1, 22547, !insn.addr !71
  ret i32 %3, !insn.addr !72
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1830:
  %0 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !73
  ret i32 0, !insn.addr !74
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1880:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !75
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.di(i32 %1), !insn.addr !76
  %3 = add i32 %1, 22419, !insn.addr !77
  %4 = inttoptr i32 %3 to i8*, !insn.addr !77
  %5 = load i8, i8* %4, align 1, !insn.addr !77
  %6 = icmp eq i8 %5, 0, !insn.addr !77
  %7 = icmp eq i1 %6, false, !insn.addr !78
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !78
  br i1 %7, label %dec_label_pc_1902, label %dec_label_pc_18a1, !insn.addr !78

dec_label_pc_18a1:                                ; preds = %dec_label_pc_1880
  %8 = add i32 %1, 22371, !insn.addr !79
  %9 = inttoptr i32 %8 to i32*, !insn.addr !79
  %10 = load i32, i32* %9, align 4, !insn.addr !79
  %11 = icmp eq i32 %10, 0, !insn.addr !80
  br i1 %11, label %dec_label_pc_18be, label %dec_label_pc_18ab, !insn.addr !81

dec_label_pc_18ab:                                ; preds = %dec_label_pc_18a1
  %12 = add i32 %1, 22391, !insn.addr !82
  %13 = inttoptr i32 %12 to i32*, !insn.addr !82
  %14 = load i32, i32* %13, align 4, !insn.addr !82
  %15 = inttoptr i32 %14 to i32*, !insn.addr !83
  call void @__cxa_finalize(i32* %15), !insn.addr !83
  br label %dec_label_pc_18be, !insn.addr !84

dec_label_pc_18be:                                ; preds = %dec_label_pc_18ab, %dec_label_pc_18a1
  %16 = call i32 @deregister_tm_clones(), !insn.addr !85
  store i8 1, i8* %4, align 1, !insn.addr !86
  store i32 %16, i32* %eax.0.reg2mem, !insn.addr !86
  br label %dec_label_pc_1902, !insn.addr !86

dec_label_pc_1902:                                ; preds = %dec_label_pc_18be, %dec_label_pc_1880
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !87

; uselistorder directives
  uselistorder i32 %1, { 3, 2, 0, 1 }
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_1910:
  %0 = call i32 @register_tm_clones(), !insn.addr !88
  ret i32 %0, !insn.addr !88
}

define i32 @__x86.get_pc_thunk.dx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1919:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !89
}

define i32 @__x86.get_pc_thunk.di(i32 %arg1) local_unnamed_addr {
dec_label_pc_191d:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !90
}

define i32 @param_strcpy(i8* %dst, i8* %src) local_unnamed_addr {
dec_label_pc_1921:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !91
  %3 = call i8* @strcpy(i8* %dst, i8* %src), !insn.addr !92
  %4 = call i32 @strlen(i8* %dst), !insn.addr !93
  ret i32 %4, !insn.addr !94
}

define i32 @call_strcpy() local_unnamed_addr {
dec_label_pc_195b:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !95
  %1 = load i32, i32* %0
  %buffer_-52 = alloca [32 x i8], align 4
  %stack_var_-48 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !96
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !97
  %4 = add i32 %2, 9886, !insn.addr !98
  %5 = inttoptr i32 %4 to i8*, !insn.addr !99
  %6 = bitcast i32* %stack_var_-48 to i8*
  %7 = call i32 @param_strcpy(i8* nonnull %6, i8* %5), !insn.addr !100
  %8 = trunc i32 %7 to i8, !insn.addr !101
  %9 = insertvalue [32 x i8] undef, i8 %8, 0, !insn.addr !101
  store [32 x i8] %9, [32 x i8]* %buffer_-52, align 4, !insn.addr !101
  %10 = bitcast [32 x i8]* %buffer_-52 to i32*, !insn.addr !102
  %11 = load i32, i32* %10, align 4, !insn.addr !102
  %12 = call i32 @__readgsdword(i32 20), !insn.addr !103
  %13 = icmp eq i32 %3, %12, !insn.addr !103
  store i32 %11, i32* %eax.0.reg2mem, !insn.addr !104
  br i1 %13, label %dec_label_pc_19a8, label %dec_label_pc_19a3, !insn.addr !104

dec_label_pc_19a3:                                ; preds = %dec_label_pc_195b
  %14 = call i32 @__stack_chk_fail_local(), !insn.addr !105
  store i32 %14, i32* %eax.0.reg2mem, !insn.addr !105
  br label %dec_label_pc_19a8, !insn.addr !105

dec_label_pc_19a8:                                ; preds = %dec_label_pc_19a3, %dec_label_pc_195b
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !106
}

define i32 @param_strcmp(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_19aa:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !107
  %3 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !108
  %4 = icmp eq i32 %3, 0, !insn.addr !109
  %5 = icmp slt i32 %3, 0, !insn.addr !109
  %6 = icmp eq i1 %5, false, !insn.addr !110
  %7 = icmp eq i1 %4, false, !insn.addr !110
  %8 = icmp eq i1 %6, %7, !insn.addr !110
  %not. = icmp ne i1 %6, true
  %. = sext i1 %not. to i32
  %eax.0 = select i1 %8, i32 1, i32 %.
  ret i32 %eax.0, !insn.addr !111

; uselistorder directives
  uselistorder i32 %3, { 1, 0 }
}

define i32 @call_strcmp() local_unnamed_addr {
dec_label_pc_19f9:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !112
  %3 = add i32 %1, 9736, !insn.addr !113
  %4 = inttoptr i32 %3 to i8*, !insn.addr !114
  %5 = add i32 %1, 9740, !insn.addr !115
  %6 = inttoptr i32 %5 to i8*, !insn.addr !116
  %7 = call i32 @param_strcmp(i8* %6, i8* %4), !insn.addr !117
  %8 = add i32 %1, 9744, !insn.addr !118
  %9 = inttoptr i32 %8 to i8*, !insn.addr !119
  %10 = call i32 @param_strcmp(i8* %9, i8* %9), !insn.addr !120
  %11 = add i32 %1, 9748, !insn.addr !121
  %12 = inttoptr i32 %11 to i8*, !insn.addr !122
  %13 = add i32 %1, 9752, !insn.addr !123
  %14 = inttoptr i32 %13 to i8*, !insn.addr !124
  %15 = call i32 @param_strcmp(i8* %14, i8* %12), !insn.addr !125
  %16 = add i32 %10, %7, !insn.addr !126
  %17 = add i32 %16, %15, !insn.addr !127
  ret i32 %17, !insn.addr !128

; uselistorder directives
  uselistorder i8* %9, { 1, 0 }
  uselistorder i32 %1, { 4, 3, 2, 1, 0, 5 }
  uselistorder i32 (i8*, i8*)* @param_strcmp, { 2, 1, 0 }
}

define i32 @param_strlen(i8* %str) local_unnamed_addr {
dec_label_pc_1a75:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !129
  %3 = call i32 @strlen(i8* %str), !insn.addr !130
  ret i32 %3, !insn.addr !131
}

define i32 @call_strlen() local_unnamed_addr {
dec_label_pc_1aa5:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !132
  %3 = add i32 %2, 9585, !insn.addr !133
  %4 = inttoptr i32 %3 to i8*, !insn.addr !134
  %5 = call i32 @param_strlen(i8* %4), !insn.addr !135
  ret i32 %5, !insn.addr !136
}

define i32 @param_memcpy(i8* %dst, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1ad2:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !137
  %3 = bitcast i8* %dst to i32*
  %4 = call i32* @memcpy(i32* %3, i32* %src, i32 %n), !insn.addr !138
  ret i32 %n, !insn.addr !139

; uselistorder directives
  uselistorder i32 %n, { 1, 0 }
}

define i32 @call_memcpy() local_unnamed_addr {
dec_label_pc_1b05:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !140
  %1 = load i32, i32* %0
  %stack_var_-36 = alloca i32, align 4
  %stack_var_-56 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !141
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !142
  store i32 10, i32* %stack_var_-56, align 4, !insn.addr !143
  store i32 0, i32* %stack_var_-36, align 4, !insn.addr !144
  %4 = bitcast i32* %stack_var_-36 to i8*
  %5 = call i32 @param_memcpy(i8* nonnull %4, i32* nonnull %stack_var_-56, i32 20), !insn.addr !145
  %6 = load i32, i32* %stack_var_-36, align 4, !insn.addr !146
  %7 = call i32 @__readgsdword(i32 20), !insn.addr !147
  %8 = icmp eq i32 %3, %7, !insn.addr !147
  store i32 %6, i32* %eax.0.reg2mem, !insn.addr !148
  br i1 %8, label %dec_label_pc_1b9d, label %dec_label_pc_1b98, !insn.addr !148

dec_label_pc_1b98:                                ; preds = %dec_label_pc_1b05
  %9 = call i32 @__stack_chk_fail_local(), !insn.addr !149
  store i32 %9, i32* %eax.0.reg2mem, !insn.addr !149
  br label %dec_label_pc_1b9d, !insn.addr !149

dec_label_pc_1b9d:                                ; preds = %dec_label_pc_1b98, %dec_label_pc_1b05
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !150

; uselistorder directives
  uselistorder i32* %stack_var_-36, { 1, 0, 2 }
}

define i32 @param_memcmp(i32* %p1, i32* %p2, i32 %n) local_unnamed_addr {
dec_label_pc_1b9f:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !151
  %3 = call i32 @memcmp(i32* %p1, i32* %p2, i32 %n), !insn.addr !152
  %4 = icmp eq i32 %3, 0, !insn.addr !153
  %5 = icmp slt i32 %3, 0, !insn.addr !153
  %6 = icmp eq i1 %5, false, !insn.addr !154
  %7 = icmp eq i1 %4, false, !insn.addr !154
  %8 = icmp eq i1 %6, %7, !insn.addr !154
  %not. = icmp ne i1 %6, true
  %. = sext i1 %not. to i32
  %eax.0 = select i1 %8, i32 1, i32 %.
  ret i32 %eax.0, !insn.addr !155

; uselistorder directives
  uselistorder i32 %3, { 1, 0 }
}

define i32 @call_memcmp() local_unnamed_addr {
dec_label_pc_1bf1:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !156
  %1 = load i32, i32* %0
  %arr1_-56 = alloca [3 x i32], align 4
  %stack_var_-28 = alloca i32, align 4
  %stack_var_-40 = alloca i32, align 4
  %stack_var_-52 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !157
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !158
  store i32 1, i32* %stack_var_-52, align 4, !insn.addr !159
  store i32 1, i32* %stack_var_-40, align 4, !insn.addr !160
  store i32 1, i32* %stack_var_-28, align 4, !insn.addr !161
  %4 = call i32 @param_memcmp(i32* nonnull %stack_var_-52, i32* nonnull %stack_var_-40, i32 12), !insn.addr !162
  %5 = call i32 @param_memcmp(i32* nonnull %stack_var_-52, i32* nonnull %stack_var_-28, i32 12), !insn.addr !163
  %6 = insertvalue [3 x i32] undef, i32 %5, 0, !insn.addr !164
  store [3 x i32] %6, [3 x i32]* %arr1_-56, align 4, !insn.addr !164
  %7 = getelementptr inbounds [3 x i32], [3 x i32]* %arr1_-56, i32 0, i32 0, !insn.addr !165
  %8 = load i32, i32* %7, align 4, !insn.addr !165
  %9 = add i32 %8, %4, !insn.addr !166
  %10 = call i32 @__readgsdword(i32 20), !insn.addr !167
  %11 = icmp eq i32 %3, %10, !insn.addr !167
  store i32 %9, i32* %eax.0.reg2mem, !insn.addr !168
  br i1 %11, label %dec_label_pc_1c98, label %dec_label_pc_1c93, !insn.addr !168

dec_label_pc_1c93:                                ; preds = %dec_label_pc_1bf1
  %12 = call i32 @__stack_chk_fail_local(), !insn.addr !169
  store i32 %12, i32* %eax.0.reg2mem, !insn.addr !169
  br label %dec_label_pc_1c98, !insn.addr !169

dec_label_pc_1c98:                                ; preds = %dec_label_pc_1c93, %dec_label_pc_1bf1
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !170

; uselistorder directives
  uselistorder i32 (i32*, i32*, i32)* @param_memcmp, { 1, 0 }
}

define i32 @param_printf(i32 %x, i8* %name) local_unnamed_addr {
dec_label_pc_1c9a:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !171
  %3 = add i32 %2, 9096, !insn.addr !172
  %4 = inttoptr i32 %3 to i8*, !insn.addr !173
  %5 = call i32 (i8*, ...) @printf(i8* %4), !insn.addr !174
  ret i32 %5, !insn.addr !175
}

define i32 @call_printf() local_unnamed_addr {
dec_label_pc_1cd4:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !176
  %3 = add i32 %2, 9060, !insn.addr !177
  %4 = inttoptr i32 %3 to i8*, !insn.addr !178
  %5 = call i32 @param_printf(i32 42, i8* %4), !insn.addr !179
  ret i32 %5, !insn.addr !180
}

define i32 @param_scanf(i8* %input_str) local_unnamed_addr {
dec_label_pc_1d04:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !181
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !182
  %5 = call i32 @__readgsdword(i32 20), !insn.addr !183
  %6 = add i32 %4, 9016, !insn.addr !184
  %7 = inttoptr i32 %6 to i8*, !insn.addr !185
  %8 = call i32 (i8*, i8*, ...) @sscanf(i8* %input_str, i8* %7), !insn.addr !186
  %9 = icmp eq i32 %8, 2, !insn.addr !187
  %10 = icmp eq i1 %9, false, !insn.addr !188
  %11 = add i32 %3, %2
  %spec.select = select i1 %10, i32 -1, i32 %11
  %12 = call i32 @__readgsdword(i32 20), !insn.addr !189
  %13 = icmp eq i32 %5, %12, !insn.addr !189
  store i32 %spec.select, i32* %eax.0.reg2mem, !insn.addr !190
  br i1 %13, label %dec_label_pc_1d70, label %dec_label_pc_1d6b, !insn.addr !190

dec_label_pc_1d6b:                                ; preds = %dec_label_pc_1d04
  %14 = call i32 @__stack_chk_fail_local(), !insn.addr !191
  store i32 %14, i32* %eax.0.reg2mem, !insn.addr !191
  br label %dec_label_pc_1d70, !insn.addr !191

dec_label_pc_1d70:                                ; preds = %dec_label_pc_1d6b, %dec_label_pc_1d04
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !192

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
}

define i32 @call_scanf() local_unnamed_addr {
dec_label_pc_1d75:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !193
  %3 = add i32 %2, 8910, !insn.addr !194
  %4 = inttoptr i32 %3 to i8*, !insn.addr !195
  %5 = call i32 @param_scanf(i8* %4), !insn.addr !196
  ret i32 %5, !insn.addr !197
}

define i32 @param_fopen_fclose(i8* %filename) local_unnamed_addr {
dec_label_pc_1d9d:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !198
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !199
  %3 = add i32 %1, 8877, !insn.addr !200
  %4 = inttoptr i32 %3 to i8*, !insn.addr !201
  %5 = call %_IO_FILE* @fopen(i8* %filename, i8* %4), !insn.addr !202
  %6 = icmp eq %_IO_FILE* %5, null, !insn.addr !203
  %7 = icmp eq i1 %6, false, !insn.addr !204
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !204
  br i1 %7, label %dec_label_pc_1dd8, label %dec_label_pc_1dfa, !insn.addr !204

dec_label_pc_1dd8:                                ; preds = %dec_label_pc_1d9d
  %8 = call i32 @fileno(%_IO_FILE* %5), !insn.addr !205
  %9 = call i32 @fclose(%_IO_FILE* %5), !insn.addr !206
  store i32 %8, i32* %storemerge.reg2mem, !insn.addr !207
  br label %dec_label_pc_1dfa, !insn.addr !207

dec_label_pc_1dfa:                                ; preds = %dec_label_pc_1d9d, %dec_label_pc_1dd8
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !208

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1dfa, { 1, 0 }
}

define i32 @call_fopen_fclose() local_unnamed_addr {
dec_label_pc_1dff:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !209
  %3 = add i32 %2, 8782, !insn.addr !210
  %4 = inttoptr i32 %3 to i8*, !insn.addr !211
  %5 = call i32 @param_fopen_fclose(i8* %4), !insn.addr !212
  %6 = icmp slt i32 %5, 0, !insn.addr !213
  %. = select i1 %6, i32 -1, i32 42
  ret i32 %., !insn.addr !214
}

define i32 @param_fread_fwrite(i8* %tmpfile) local_unnamed_addr {
dec_label_pc_1e3c:
  %0 = alloca i32
  %eax.1.reg2mem = alloca i32, !insn.addr !215
  %eax.0.reg2mem = alloca i32, !insn.addr !215
  %1 = load i32, i32* %0
  %read_buffer_-52 = alloca [32 x i8], align 4
  %stack_var_-48 = alloca i32, align 4
  %read_buffer_-56 = alloca [32 x i8], align 4
  %stack_var_-80 = alloca i8*, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !216
  store i8* %tmpfile, i8** %stack_var_-80, align 4, !insn.addr !217
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !218
  %4 = add i32 %1, 8751, !insn.addr !219
  %5 = inttoptr i32 %4 to i8*, !insn.addr !220
  %6 = call %_IO_FILE* @fopen(i8* %tmpfile, i8* %5), !insn.addr !221
  %7 = icmp eq %_IO_FILE* %6, null, !insn.addr !222
  %8 = icmp eq i1 %7, false, !insn.addr !223
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !223
  br i1 %8, label %dec_label_pc_1e94, label %dec_label_pc_1f54, !insn.addr !223

dec_label_pc_1e94:                                ; preds = %dec_label_pc_1e3c
  %9 = add i32 %1, 8732, !insn.addr !224
  %10 = inttoptr i32 %9 to i8*, !insn.addr !225
  %11 = call i32 @strlen(i8* %10), !insn.addr !226
  %12 = inttoptr i32 %9 to i32*
  %13 = call i32 @fwrite(i32* %12, i32 1, i32 %11, %_IO_FILE* %6), !insn.addr !227
  %14 = trunc i32 %13 to i8, !insn.addr !228
  %15 = insertvalue [32 x i8] undef, i8 %14, 0, !insn.addr !228
  store [32 x i8] %15, [32 x i8]* %read_buffer_-56, align 4, !insn.addr !228
  %16 = call i32 @strlen(i8* %10), !insn.addr !229
  %17 = bitcast [32 x i8]* %read_buffer_-56 to i32*, !insn.addr !230
  %18 = load i32, i32* %17, align 4, !insn.addr !230
  %19 = icmp eq i32 %18, %16, !insn.addr !230
  br i1 %19, label %dec_label_pc_1ede, label %dec_label_pc_1ec9, !insn.addr !231

dec_label_pc_1ec9:                                ; preds = %dec_label_pc_1e94
  %20 = call i32 @fclose(%_IO_FILE* %6), !insn.addr !232
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !233
  br label %dec_label_pc_1f54, !insn.addr !233

dec_label_pc_1ede:                                ; preds = %dec_label_pc_1e94
  call void @rewind(%_IO_FILE* %6), !insn.addr !234
  %21 = call i32 @fread(i32* nonnull %stack_var_-48, i32 1, i32 %16, %_IO_FILE* %6), !insn.addr !235
  %22 = trunc i32 %21 to i8, !insn.addr !236
  %23 = insertvalue [32 x i8] undef, i8 %22, 0, !insn.addr !236
  store [32 x i8] %23, [32 x i8]* %read_buffer_-52, align 4, !insn.addr !236
  %24 = ptrtoint i32* %stack_var_-48 to i32, !insn.addr !237
  %25 = bitcast [32 x i8]* %read_buffer_-52 to i32*, !insn.addr !238
  %26 = load i32, i32* %25, align 4, !insn.addr !238
  %27 = add i32 %26, %24, !insn.addr !239
  %28 = inttoptr i32 %27 to i8*, !insn.addr !240
  store i8 0, i8* %28, align 1, !insn.addr !240
  %29 = call i32 @fclose(%_IO_FILE* %6), !insn.addr !241
  %30 = load i8*, i8** %stack_var_-80, align 4
  %31 = call i32 @unlink(i8* %30), !insn.addr !242
  %32 = load i32, i32* %25, align 4, !insn.addr !243
  %33 = load i32, i32* %17, align 4, !insn.addr !244
  %34 = icmp eq i32 %32, %33, !insn.addr !244
  %35 = icmp eq i1 %34, false, !insn.addr !245
  br i1 %35, label %dec_label_pc_1f4f, label %dec_label_pc_1f32, !insn.addr !245

dec_label_pc_1f32:                                ; preds = %dec_label_pc_1ede
  %36 = bitcast i32* %stack_var_-48 to i8*
  %37 = call i32 @strcmp(i8* nonnull %36, i8* %10), !insn.addr !246
  %38 = icmp eq i32 %37, 0, !insn.addr !247
  %39 = icmp eq i1 %38, false, !insn.addr !248
  store i32 42, i32* %eax.0.reg2mem, !insn.addr !248
  br i1 %39, label %dec_label_pc_1f4f, label %dec_label_pc_1f54, !insn.addr !248

dec_label_pc_1f4f:                                ; preds = %dec_label_pc_1f32, %dec_label_pc_1ede
  store i32 -3, i32* %eax.0.reg2mem, !insn.addr !249
  br label %dec_label_pc_1f54, !insn.addr !249

dec_label_pc_1f54:                                ; preds = %dec_label_pc_1f32, %dec_label_pc_1e3c, %dec_label_pc_1f4f, %dec_label_pc_1ec9
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %40 = call i32 @__readgsdword(i32 20), !insn.addr !250
  %41 = icmp eq i32 %3, %40, !insn.addr !250
  store i32 %eax.0.reload, i32* %eax.1.reg2mem, !insn.addr !251
  br i1 %41, label %dec_label_pc_1f65, label %dec_label_pc_1f60, !insn.addr !251

dec_label_pc_1f60:                                ; preds = %dec_label_pc_1f54
  %42 = call i32 @__stack_chk_fail_local(), !insn.addr !252
  store i32 %42, i32* %eax.1.reg2mem, !insn.addr !252
  br label %dec_label_pc_1f65, !insn.addr !252

dec_label_pc_1f65:                                ; preds = %dec_label_pc_1f60, %dec_label_pc_1f54
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !253

; uselistorder directives
  uselistorder i32 %9, { 1, 0 }
  uselistorder %_IO_FILE* %6, { 0, 1, 3, 2, 4, 5 }
  uselistorder i32* %stack_var_-48, { 1, 2, 0 }
  uselistorder i32* %eax.0.reg2mem, { 0, 4, 1, 3, 2 }
  uselistorder i32 (i8*, i8*)* @strcmp, { 1, 0, 2 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 2, 1, 0, 3 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1f54, { 2, 0, 3, 1 }
}

define i32 @call_fread_fwrite() local_unnamed_addr {
dec_label_pc_1f6a:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !254
  %3 = add i32 %2, 8453, !insn.addr !255
  %4 = inttoptr i32 %3 to i8*, !insn.addr !256
  %5 = call i32 @param_fread_fwrite(i8* %4), !insn.addr !257
  ret i32 %5, !insn.addr !258
}

define i32 @param_malloc_free(i32 %size) local_unnamed_addr {
dec_label_pc_1f92:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !259
  %storemerge12.reg2mem = alloca i32, !insn.addr !259
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !260
  %3 = mul i32 %size, 4, !insn.addr !261
  %4 = call i32* @malloc(i32 %3), !insn.addr !262
  %5 = icmp eq i32* %4, null, !insn.addr !263
  %6 = icmp eq i1 %5, false, !insn.addr !264
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !264
  br i1 %6, label %dec_label_pc_1ff6.preheader, label %dec_label_pc_2036, !insn.addr !264

dec_label_pc_1ff6.preheader:                      ; preds = %dec_label_pc_1f92
  %7 = ptrtoint i32* %4 to i32, !insn.addr !262
  %8 = icmp eq i32 %size, 0, !insn.addr !265
  store i32 0, i32* %storemerge12.reg2mem, !insn.addr !266
  br i1 %8, label %dec_label_pc_1ffe, label %dec_label_pc_1fd3, !insn.addr !266

dec_label_pc_1fd3:                                ; preds = %dec_label_pc_1ff6.preheader, %dec_label_pc_1fd3
  %storemerge12.reload = load i32, i32* %storemerge12.reg2mem
  %9 = mul i32 %storemerge12.reload, 10, !insn.addr !267
  %10 = mul i32 %storemerge12.reload, 4, !insn.addr !268
  %11 = add i32 %10, %7, !insn.addr !269
  %12 = inttoptr i32 %11 to i32*, !insn.addr !270
  store i32 %9, i32* %12, align 4, !insn.addr !270
  %13 = add nuw i32 %storemerge12.reload, 1, !insn.addr !271
  %exitcond = icmp eq i32 %13, %size
  store i32 %13, i32* %storemerge12.reg2mem, !insn.addr !266
  br i1 %exitcond, label %dec_label_pc_1ffe, label %dec_label_pc_1fd3, !insn.addr !266

dec_label_pc_1ffe:                                ; preds = %dec_label_pc_1fd3, %dec_label_pc_1ff6.preheader
  %14 = load i32, i32* %4, align 4, !insn.addr !272
  %15 = add i32 %3, -4, !insn.addr !273
  %16 = add i32 %15, %7, !insn.addr !274
  %17 = inttoptr i32 %16 to i32*, !insn.addr !275
  %18 = load i32, i32* %17, align 4, !insn.addr !275
  %19 = add i32 %18, %14, !insn.addr !276
  call void @free(i32* %4), !insn.addr !277
  store i32 %19, i32* %storemerge.reg2mem, !insn.addr !278
  br label %dec_label_pc_2036, !insn.addr !278

dec_label_pc_2036:                                ; preds = %dec_label_pc_1f92, %dec_label_pc_1ffe
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !279

; uselistorder directives
  uselistorder i32 %storemerge12.reload, { 0, 2, 1 }
  uselistorder i32 %7, { 1, 0 }
  uselistorder i32* %4, { 0, 1, 3, 2 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32* %storemerge12.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %size, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2036, { 1, 0 }
  uselistorder label %dec_label_pc_1fd3, { 1, 0 }
}

define i32 @call_malloc_free() local_unnamed_addr {
dec_label_pc_203b:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !280
  %3 = call i32 @param_malloc_free(i32 10), !insn.addr !281
  ret i32 %3, !insn.addr !282
}

define i32 @param_memset(i8* %buffer, i32 %size) local_unnamed_addr {
dec_label_pc_205e:
  %0 = alloca i32
  %bytes_-24.0.lcssa.reg2mem = alloca i32, !insn.addr !283
  %bytes_-24.03.reg2mem = alloca i32, !insn.addr !283
  %.reg2mem = alloca i32, !insn.addr !283
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !284
  %3 = bitcast i8* %buffer to i32*
  %4 = call i32* @memset(i32* %3, i32 0, i32 %size), !insn.addr !285
  %5 = icmp eq i32 %size, 0, !insn.addr !286
  store i32 0, i32* %bytes_-24.0.lcssa.reg2mem, !insn.addr !287
  br i1 %5, label %dec_label_pc_20bb, label %dec_label_pc_209e.lr.ph, !insn.addr !287

dec_label_pc_209e.lr.ph:                          ; preds = %dec_label_pc_205e
  %6 = ptrtoint i8* %buffer to i32, !insn.addr !288
  store i32 0, i32* %.reg2mem
  store i32 0, i32* %bytes_-24.03.reg2mem
  br label %dec_label_pc_209e

dec_label_pc_209e:                                ; preds = %dec_label_pc_209e, %dec_label_pc_209e.lr.ph
  %bytes_-24.03.reload = load i32, i32* %bytes_-24.03.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %7 = add i32 %.reload, %6, !insn.addr !289
  %8 = inttoptr i32 %7 to i8*, !insn.addr !290
  %9 = load i8, i8* %8, align 1, !insn.addr !290
  %10 = zext i8 %9 to i32, !insn.addr !290
  %11 = add i32 %bytes_-24.03.reload, %10, !insn.addr !291
  %12 = add nuw i32 %.reload, 1, !insn.addr !292
  %exitcond = icmp eq i32 %12, %size
  store i32 %12, i32* %.reg2mem, !insn.addr !287
  store i32 %11, i32* %bytes_-24.03.reg2mem, !insn.addr !287
  store i32 %11, i32* %bytes_-24.0.lcssa.reg2mem, !insn.addr !287
  br i1 %exitcond, label %dec_label_pc_20bb, label %dec_label_pc_209e, !insn.addr !287

dec_label_pc_20bb:                                ; preds = %dec_label_pc_209e, %dec_label_pc_205e
  %bytes_-24.0.lcssa.reload = load i32, i32* %bytes_-24.0.lcssa.reg2mem
  ret i32 %bytes_-24.0.lcssa.reload, !insn.addr !293

; uselistorder directives
  uselistorder i32* %.reg2mem, { 1, 0, 2 }
  uselistorder i32* %bytes_-24.03.reg2mem, { 1, 0, 2 }
}

define i32 @call_memset() local_unnamed_addr {
dec_label_pc_20c3:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !294
  %.reg2mem = alloca i32, !insn.addr !294
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-56 = alloca i32, align 4
  %buffer_-60 = alloca [10 x i32], align 4
  %stack_var_-4 = alloca i32, align 4
  %3 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !295
  %4 = call i32 @__readgsdword(i32 20), !insn.addr !296
  store [10 x i32] [i32 0, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], [10 x i32]* %buffer_-60, align 4
  %5 = getelementptr inbounds [10 x i32], [10 x i32]* %buffer_-60, i32 0, i32 0, !insn.addr !297
  %6 = load i32, i32* %5, align 4, !insn.addr !297
  %7 = icmp slt i32 %6, 10, !insn.addr !298
  br i1 %7, label %dec_label_pc_20eb.lr.ph, label %dec_label_pc_2100, !insn.addr !298

dec_label_pc_20eb.lr.ph:                          ; preds = %dec_label_pc_20c3
  %8 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !299
  %9 = add i32 %8, -52, !insn.addr !300
  store i32 %6, i32* %.reg2mem
  br label %dec_label_pc_20eb

dec_label_pc_20eb:                                ; preds = %dec_label_pc_20eb.lr.ph, %dec_label_pc_20eb
  %.reload = load i32, i32* %.reg2mem
  %10 = mul i32 %.reload, 4, !insn.addr !300
  %11 = add i32 %9, %10, !insn.addr !300
  %12 = inttoptr i32 %11 to i32*, !insn.addr !300
  store i32 255, i32* %12, align 4, !insn.addr !300
  %13 = load i32, i32* %5, align 4, !insn.addr !301
  %14 = add i32 %13, 1, !insn.addr !301
  %15 = insertvalue [10 x i32] undef, i32 %14, 0, !insn.addr !301
  store [10 x i32] %15, [10 x i32]* %buffer_-60, align 4
  %16 = load i32, i32* %5, align 4, !insn.addr !297
  %17 = icmp slt i32 %16, 10, !insn.addr !298
  store i32 %16, i32* %.reg2mem, !insn.addr !298
  br i1 %17, label %dec_label_pc_20eb, label %dec_label_pc_2100, !insn.addr !298

dec_label_pc_2100:                                ; preds = %dec_label_pc_20eb, %dec_label_pc_20c3
  %18 = bitcast i32* %stack_var_-56 to i8*
  %19 = call i32 @param_memset(i8* nonnull %18, i32 40), !insn.addr !302
  %20 = load i32, i32* %stack_var_-56, align 4, !insn.addr !303
  %21 = add i32 %20, %2, !insn.addr !304
  %22 = call i32 @__readgsdword(i32 20), !insn.addr !305
  %23 = icmp eq i32 %4, %22, !insn.addr !305
  store i32 %21, i32* %eax.0.reg2mem, !insn.addr !306
  br i1 %23, label %dec_label_pc_212a, label %dec_label_pc_2125, !insn.addr !306

dec_label_pc_2125:                                ; preds = %dec_label_pc_2100
  %24 = call i32 @__stack_chk_fail_local(), !insn.addr !307
  store i32 %24, i32* %eax.0.reg2mem, !insn.addr !307
  br label %dec_label_pc_212a, !insn.addr !307

dec_label_pc_212a:                                ; preds = %dec_label_pc_2125, %dec_label_pc_2100
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !308

; uselistorder directives
  uselistorder i32* %5, { 2, 1, 0 }
  uselistorder [10 x i32]* %buffer_-60, { 1, 2, 0 }
  uselistorder i32* %stack_var_-56, { 1, 0 }
  uselistorder i32* %.reg2mem, { 1, 0, 2 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder label %dec_label_pc_20eb, { 1, 0 }
}

define i32 @param_strchr_strstr(i8* %str, i8 %ch, i8* %substr) local_unnamed_addr {
dec_label_pc_212c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !309
  %3 = sext i8 %ch to i32, !insn.addr !310
  %4 = call i8* @strchr(i8* %str, i32 %3), !insn.addr !310
  %5 = icmp eq i8* %4, null, !insn.addr !311
  %6 = ptrtoint i8* %4 to i32
  %7 = ptrtoint i8* %str to i32
  %8 = sub i32 %6, %7
  %storemerge5 = select i1 %5, i32 -1, i32 %8
  %9 = ptrtoint i8* %substr to i32, !insn.addr !312
  %sext = mul i32 %9, 16777216
  %10 = ashr exact i32 %sext, 24, !insn.addr !313
  %11 = inttoptr i32 %10 to i8*, !insn.addr !313
  %12 = call i8* @strstr(i8* %str, i8* %11), !insn.addr !313
  %13 = icmp eq i8* %12, null, !insn.addr !314
  %14 = ptrtoint i8* %12 to i32
  %15 = sub i32 %14, %7
  %storemerge = select i1 %13, i32 -1, i32 %15
  %16 = add i32 %storemerge, %storemerge5, !insn.addr !315
  ret i32 %16, !insn.addr !316

; uselistorder directives
  uselistorder i8* %12, { 1, 0 }
  uselistorder i8* %str, { 1, 0, 2 }
}

define i32 @call_strchr_strstr() local_unnamed_addr {
dec_label_pc_21ab:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !317
  %3 = add i32 %2, add (i32 ptrtoint (i32* @global_var_4d3a to i32), i32 -11871), !insn.addr !318
  %4 = add i32 %2, add (i32 ptrtoint (i32* @global_var_4d3a to i32), i32 -11851), !insn.addr !319
  %5 = inttoptr i32 %4 to i8*, !insn.addr !320
  %6 = inttoptr i32 %3 to i8*, !insn.addr !321
  %7 = call i32 @param_strchr_strstr(i8* %6, i8 66, i8* %5), !insn.addr !322
  ret i32 %7, !insn.addr !323
}

define void @test_standard_library_functions() local_unnamed_addr {
dec_label_pc_21e7:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !324
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4cfd to i32), i32 -11844), !insn.addr !325
  %4 = inttoptr i32 %3 to i8*, !insn.addr !326
  %5 = call i32 @puts(i8* %4), !insn.addr !327
  %6 = call i32 @call_strcpy(), !insn.addr !328
  %7 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4cfd to i32), i32 -11808), !insn.addr !329
  %8 = inttoptr i32 %7 to i8*, !insn.addr !330
  %9 = call i32 (i8*, ...) @printf(i8* %8), !insn.addr !331
  %10 = call i32 @call_strcmp(), !insn.addr !332
  %11 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4cfd to i32), i32 -11781), !insn.addr !333
  %12 = inttoptr i32 %11 to i8*, !insn.addr !334
  %13 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !335
  %14 = call i32 @call_strlen(), !insn.addr !336
  %15 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4cfd to i32), i32 -11754), !insn.addr !337
  %16 = inttoptr i32 %15 to i8*, !insn.addr !338
  %17 = call i32 (i8*, ...) @printf(i8* %16), !insn.addr !339
  %18 = call i32 @call_memcpy(), !insn.addr !340
  %19 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4cfd to i32), i32 -11726), !insn.addr !341
  %20 = inttoptr i32 %19 to i8*, !insn.addr !342
  %21 = call i32 (i8*, ...) @printf(i8* %20), !insn.addr !343
  %22 = call i32 @call_memcmp(), !insn.addr !344
  %23 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4cfd to i32), i32 -11698), !insn.addr !345
  %24 = inttoptr i32 %23 to i8*, !insn.addr !346
  %25 = call i32 (i8*, ...) @printf(i8* %24), !insn.addr !347
  %26 = call i32 @call_printf(), !insn.addr !348
  %27 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4cfd to i32), i32 -11670), !insn.addr !349
  %28 = inttoptr i32 %27 to i8*, !insn.addr !350
  %29 = call i32 (i8*, ...) @printf(i8* %28), !insn.addr !351
  %30 = call i32 @call_scanf(), !insn.addr !352
  %31 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4cfd to i32), i32 -11642), !insn.addr !353
  %32 = inttoptr i32 %31 to i8*, !insn.addr !354
  %33 = call i32 (i8*, ...) @printf(i8* %32), !insn.addr !355
  %34 = call i32 @call_fopen_fclose(), !insn.addr !356
  %35 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4cfd to i32), i32 -11613), !insn.addr !357
  %36 = inttoptr i32 %35 to i8*, !insn.addr !358
  %37 = call i32 (i8*, ...) @printf(i8* %36), !insn.addr !359
  %38 = call i32 @call_fread_fwrite(), !insn.addr !360
  %39 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4cfd to i32), i32 -11585), !insn.addr !361
  %40 = inttoptr i32 %39 to i8*, !insn.addr !362
  %41 = call i32 (i8*, ...) @printf(i8* %40), !insn.addr !363
  %42 = call i32 @call_malloc_free(), !insn.addr !364
  %43 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4cfd to i32), i32 -11557), !insn.addr !365
  %44 = inttoptr i32 %43 to i8*, !insn.addr !366
  %45 = call i32 (i8*, ...) @printf(i8* %44), !insn.addr !367
  %46 = call i32 @call_memset(), !insn.addr !368
  %47 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4cfd to i32), i32 -11529), !insn.addr !369
  %48 = inttoptr i32 %47 to i8*, !insn.addr !370
  %49 = call i32 (i8*, ...) @printf(i8* %48), !insn.addr !371
  %50 = call i32 @call_strchr_strstr(), !insn.addr !372
  %51 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4cfd to i32), i32 -11502), !insn.addr !373
  %52 = inttoptr i32 %51 to i8*, !insn.addr !374
  %53 = call i32 (i8*, ...) @printf(i8* %52), !insn.addr !375
  ret void, !insn.addr !376
}

define i32 @param_linux_syscall(i8* %pathname) local_unnamed_addr {
dec_label_pc_2335:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !377
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !378
  %3 = call i32 (i32, ...) @syscall(i32 5), !insn.addr !379
  %4 = icmp slt i32 %3, 0, !insn.addr !380
  %5 = icmp eq i1 %4, false, !insn.addr !381
  br i1 %5, label %dec_label_pc_2371, label %dec_label_pc_2366, !insn.addr !381

dec_label_pc_2366:                                ; preds = %dec_label_pc_2335
  %6 = call i32* @__errno_location(), !insn.addr !382
  %7 = load i32, i32* %6, align 4, !insn.addr !383
  %8 = sub i32 0, %7, !insn.addr !384
  store i32 %8, i32* %storemerge.reg2mem, !insn.addr !385
  br label %dec_label_pc_2384, !insn.addr !385

dec_label_pc_2371:                                ; preds = %dec_label_pc_2335
  %9 = call i32 (i32, ...) @syscall(i32 6), !insn.addr !386
  store i32 %3, i32* %storemerge.reg2mem, !insn.addr !387
  br label %dec_label_pc_2384, !insn.addr !387

dec_label_pc_2384:                                ; preds = %dec_label_pc_2371, %dec_label_pc_2366
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !388

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 (i32, ...)* @syscall, { 1, 0, 2 }
}

define i32 @call_linux_syscall() local_unnamed_addr {
dec_label_pc_2389:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !389
  %3 = add i32 %2, add (i32 ptrtoint (i32* @global_var_4b5c to i32), i32 -11928), !insn.addr !390
  %4 = inttoptr i32 %3 to i8*, !insn.addr !391
  %5 = call i32 @param_linux_syscall(i8* %4), !insn.addr !392
  %6 = icmp slt i32 %5, 0, !insn.addr !393
  %. = select i1 %6, i32 -1, i32 42
  ret i32 %., !insn.addr !394
}

define i32 @param_win32_api(i8* %filename) local_unnamed_addr {
dec_label_pc_23c6:
  %0 = alloca i32
  %eax.1.reg2mem = alloca i32, !insn.addr !395
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-104 = alloca i32, align 4
  %3 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !396
  %4 = call i32 @__readgsdword(i32 20), !insn.addr !397
  %5 = bitcast i32* %stack_var_-104 to %stat*
  %6 = call i32 @stat(i8* %filename, %stat* nonnull %5), !insn.addr !398
  %7 = icmp slt i32 %6, 0, !insn.addr !399
  %8 = icmp eq i1 %7, false, !insn.addr !400
  %9 = icmp slt i32 %2, 1
  %. = select i1 %9, i32 -2, i32 42
  %eax.0 = select i1 %8, i32 %., i32 -1
  %10 = call i32 @__readgsdword(i32 20), !insn.addr !401
  %11 = icmp eq i32 %4, %10, !insn.addr !401
  store i32 %eax.0, i32* %eax.1.reg2mem, !insn.addr !402
  br i1 %11, label %dec_label_pc_2430, label %dec_label_pc_242b, !insn.addr !402

dec_label_pc_242b:                                ; preds = %dec_label_pc_23c6
  %12 = call i32 @__stack_chk_fail_local(), !insn.addr !403
  store i32 %12, i32* %eax.1.reg2mem, !insn.addr !403
  br label %dec_label_pc_2430, !insn.addr !403

dec_label_pc_2430:                                ; preds = %dec_label_pc_242b, %dec_label_pc_23c6
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !404

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @call_win32_api() local_unnamed_addr {
dec_label_pc_2435:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !405
  %3 = add i32 %2, add (i32 ptrtoint (i32* @global_var_4ab0 to i32), i32 -11928), !insn.addr !406
  %4 = inttoptr i32 %3 to i8*, !insn.addr !407
  %5 = call i32 @param_win32_api(i8* %4), !insn.addr !408
  ret i32 %5, !insn.addr !409
}

define i32 @param_fork_exec(i8* %prog, i8* %arg) local_unnamed_addr {
dec_label_pc_245d:
  %0 = alloca i32
  %eax.1.reg2mem = alloca i32, !insn.addr !410
  %eax.0.reg2mem = alloca i32, !insn.addr !410
  %1 = load i32, i32* %0
  %pid_-28 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !411
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !412
  %4 = call i32 @fork(), !insn.addr !413
  %5 = icmp slt i32 %4, 0, !insn.addr !414
  %6 = icmp eq i1 %5, false, !insn.addr !415
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !415
  br i1 %6, label %dec_label_pc_249f, label %dec_label_pc_2500, !insn.addr !415

dec_label_pc_249f:                                ; preds = %dec_label_pc_245d
  %7 = icmp eq i32 %4, 0, !insn.addr !416
  %8 = icmp eq i1 %7, false, !insn.addr !417
  br i1 %8, label %dec_label_pc_24c2, label %dec_label_pc_24a5, !insn.addr !417

dec_label_pc_24a5:                                ; preds = %dec_label_pc_249f
  %9 = call i32 (i8*, i8*, ...) @execl(i8* %prog, i8* %prog), !insn.addr !418
  call void @_exit(i32 127), !insn.addr !419
  unreachable, !insn.addr !419

dec_label_pc_24c2:                                ; preds = %dec_label_pc_249f
  %10 = call i32 @waitpid(i32 %4, i32* nonnull %pid_-28, i32 0), !insn.addr !420
  %11 = icmp slt i32 %10, 0, !insn.addr !421
  %12 = icmp eq i1 %11, false, !insn.addr !422
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !422
  br i1 %12, label %dec_label_pc_24e6, label %dec_label_pc_2500, !insn.addr !422

dec_label_pc_24e6:                                ; preds = %dec_label_pc_24c2
  %13 = load i32, i32* %pid_-28, align 4, !insn.addr !423
  %14 = urem i32 %13, 128, !insn.addr !424
  %15 = icmp eq i32 %14, 0, !insn.addr !425
  %16 = icmp eq i1 %15, false, !insn.addr !426
  store i32 -3, i32* %eax.0.reg2mem, !insn.addr !426
  br i1 %16, label %dec_label_pc_2500, label %dec_label_pc_24f0, !insn.addr !426

dec_label_pc_24f0:                                ; preds = %dec_label_pc_24e6
  %17 = udiv i32 %13, 256
  %18 = urem i32 %17, 256, !insn.addr !427
  store i32 %18, i32* %eax.0.reg2mem, !insn.addr !428
  br label %dec_label_pc_2500, !insn.addr !428

dec_label_pc_2500:                                ; preds = %dec_label_pc_24e6, %dec_label_pc_24c2, %dec_label_pc_245d, %dec_label_pc_24f0
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %19 = call i32 @__readgsdword(i32 20), !insn.addr !429
  %20 = icmp eq i32 %3, %19, !insn.addr !429
  store i32 %eax.0.reload, i32* %eax.1.reg2mem, !insn.addr !430
  br i1 %20, label %dec_label_pc_2511, label %dec_label_pc_250c, !insn.addr !430

dec_label_pc_250c:                                ; preds = %dec_label_pc_2500
  %21 = call i32 @__stack_chk_fail_local(), !insn.addr !431
  store i32 %21, i32* %eax.1.reg2mem, !insn.addr !431
  br label %dec_label_pc_2511, !insn.addr !431

dec_label_pc_2511:                                ; preds = %dec_label_pc_250c, %dec_label_pc_2500
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !432

; uselistorder directives
  uselistorder i32* %pid_-28, { 1, 0 }
  uselistorder i32* %eax.0.reg2mem, { 0, 4, 1, 2, 3 }
  uselistorder i32 256, { 1, 0 }
  uselistorder i8* %prog, { 1, 0 }
  uselistorder label %dec_label_pc_2500, { 3, 0, 1, 2 }
}

define i32 @call_fork_exec() local_unnamed_addr {
dec_label_pc_2516:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !433
  %3 = add i32 %2, add (i32 ptrtoint (i32* @global_var_49cf to i32), i32 -11474), !insn.addr !434
  %4 = inttoptr i32 %3 to i8*, !insn.addr !435
  %5 = call i32 @param_fork_exec(i8* %4, i8* null), !insn.addr !436
  %6 = icmp eq i32 %5, 0, !insn.addr !437
  %7 = icmp eq i1 %6, false, !insn.addr !438
  %. = select i1 %7, i32 -1, i32 42
  ret i32 %., !insn.addr !439
}

define i32 @param_pipe_communication() local_unnamed_addr {
dec_label_pc_2555:
  %0 = alloca i32
  %eax.1.reg2mem = alloca i32, !insn.addr !440
  %eax.0.reg2mem = alloca i32, !insn.addr !440
  %1 = load i32, i32* %0
  %pipefd_-64 = alloca [2 x i32], align 4
  %stack_var_-48 = alloca i32, align 4
  %buffer_-52 = alloca [32 x i8], align 4
  %pipefd_-60 = alloca [2 x i32], align 4
  %buffer_-56 = alloca [32 x i8], align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !441
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !442
  %4 = ptrtoint [32 x i8]* %buffer_-56 to i32, !insn.addr !443
  %5 = insertvalue [2 x i32] undef, i32 %4, 0, !insn.addr !443
  %6 = call i32 @pipe([2 x i32] %5), !insn.addr !443
  %7 = icmp slt i32 %6, 0, !insn.addr !444
  %8 = icmp eq i1 %7, false, !insn.addr !445
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !445
  br i1 %8, label %dec_label_pc_2593, label %dec_label_pc_2663, !insn.addr !445

dec_label_pc_2593:                                ; preds = %dec_label_pc_2555
  %9 = call i32 @fork(), !insn.addr !446
  %10 = icmp slt i32 %9, 0, !insn.addr !447
  %11 = icmp eq i1 %10, false, !insn.addr !448
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !448
  br i1 %11, label %dec_label_pc_25ab, label %dec_label_pc_2663, !insn.addr !448

dec_label_pc_25ab:                                ; preds = %dec_label_pc_2593
  %12 = icmp eq i32 %9, 0, !insn.addr !449
  %13 = icmp eq i1 %12, false, !insn.addr !450
  br i1 %13, label %dec_label_pc_2603, label %dec_label_pc_25b1, !insn.addr !450

dec_label_pc_25b1:                                ; preds = %dec_label_pc_25ab
  %14 = bitcast [32 x i8]* %buffer_-56 to i32*, !insn.addr !451
  %15 = load i32, i32* %14, align 4, !insn.addr !451
  %16 = call i32 @close(i32 %15), !insn.addr !452
  %17 = add i32 %1, add (i32 ptrtoint (i32* @global_var_498f to i32), i32 -11464), !insn.addr !453
  %18 = insertvalue [2 x i32] undef, i32 %17, 0, !insn.addr !454
  store [2 x i32] %18, [2 x i32]* %pipefd_-60, align 4, !insn.addr !454
  %19 = getelementptr inbounds [2 x i32], [2 x i32]* %pipefd_-60, i32 0, i32 0, !insn.addr !455
  %20 = load i32, i32* %19, align 4
  %21 = inttoptr i32 %20 to i8*, !insn.addr !455
  %22 = call i32 @strlen(i8* %21), !insn.addr !456
  %23 = bitcast [32 x i8]* %buffer_-52 to i32*, !insn.addr !457
  %24 = load i32, i32* %23, align 4
  %25 = inttoptr i32 %20 to i32*, !insn.addr !458
  %26 = call i32 @write(i32 %24, i32* %25, i32 %22), !insn.addr !458
  %27 = call i32 @close(i32 %24), !insn.addr !459
  call void @_exit(i32 0), !insn.addr !460
  unreachable, !insn.addr !460

dec_label_pc_2603:                                ; preds = %dec_label_pc_25ab
  %28 = bitcast [32 x i8]* %buffer_-52 to i32*, !insn.addr !461
  %29 = load i32, i32* %28, align 4, !insn.addr !461
  %30 = call i32 @close(i32 %29), !insn.addr !462
  %31 = bitcast [32 x i8]* %buffer_-56 to i32*, !insn.addr !463
  %32 = load i32, i32* %31, align 4, !insn.addr !463
  %33 = call i32 @read(i32 %32, i32* nonnull %stack_var_-48, i32 31), !insn.addr !464
  %34 = insertvalue [2 x i32] undef, i32 %33, 0, !insn.addr !465
  store [2 x i32] %34, [2 x i32]* %pipefd_-64, align 4, !insn.addr !465
  %35 = ptrtoint i32* %stack_var_-48 to i32, !insn.addr !466
  %36 = getelementptr inbounds [2 x i32], [2 x i32]* %pipefd_-64, i32 0, i32 0, !insn.addr !467
  %37 = load i32, i32* %36, align 4, !insn.addr !467
  %38 = add i32 %37, %35, !insn.addr !468
  %39 = inttoptr i32 %38 to i8*, !insn.addr !469
  store i8 0, i8* %39, align 1, !insn.addr !469
  %40 = load i32, i32* %31, align 4, !insn.addr !470
  %41 = call i32 @close(i32 %40), !insn.addr !471
  %42 = call i32 @wait(i32 0), !insn.addr !472
  %43 = load i32, i32* %36, align 4, !insn.addr !473
  %44 = icmp slt i32 %43, 1, !insn.addr !474
  %. = select i1 %44, i32 -3, i32 42
  store i32 %., i32* %eax.0.reg2mem, !insn.addr !475
  br label %dec_label_pc_2663, !insn.addr !475

dec_label_pc_2663:                                ; preds = %dec_label_pc_2603, %dec_label_pc_2593, %dec_label_pc_2555
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %45 = call i32 @__readgsdword(i32 20), !insn.addr !476
  %46 = icmp eq i32 %3, %45, !insn.addr !476
  store i32 %eax.0.reload, i32* %eax.1.reg2mem, !insn.addr !477
  br i1 %46, label %dec_label_pc_2674, label %dec_label_pc_266f, !insn.addr !477

dec_label_pc_266f:                                ; preds = %dec_label_pc_2663
  %47 = call i32 @__stack_chk_fail_local(), !insn.addr !478
  store i32 %47, i32* %eax.1.reg2mem, !insn.addr !478
  br label %dec_label_pc_2674, !insn.addr !478

dec_label_pc_2674:                                ; preds = %dec_label_pc_266f, %dec_label_pc_2663
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !479

; uselistorder directives
  uselistorder [32 x i8]* %buffer_-56, { 1, 2, 0 }
  uselistorder i32* %stack_var_-48, { 1, 0 }
  uselistorder i32 %1, { 1, 0 }
  uselistorder void (i32)* @_exit, { 1, 0, 2 }
  uselistorder i32 ()* @fork, { 1, 0, 2 }
  uselistorder [2 x i32] undef, { 1, 2, 0 }
}

define i32 @call_pipe_communication() local_unnamed_addr {
dec_label_pc_2679:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !480
  %3 = call i32 @param_pipe_communication(), !insn.addr !481
  ret i32 %3, !insn.addr !482
}

define i32 @param_socket_create() local_unnamed_addr {
dec_label_pc_2694:
  %0 = alloca i32
  %eax.1.reg2mem = alloca i32, !insn.addr !483
  %eax.0.reg2mem = alloca i32, !insn.addr !483
  %1 = load i32, i32* %0
  %stack_var_-32 = alloca i32, align 4
  %addr_-40 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !484
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !485
  %4 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !486
  %5 = icmp slt i32 %4, 0, !insn.addr !487
  %6 = icmp eq i1 %5, false, !insn.addr !488
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !488
  br i1 %6, label %dec_label_pc_26d9, label %dec_label_pc_27ae, !insn.addr !488

dec_label_pc_26d9:                                ; preds = %dec_label_pc_2694
  store i32 1, i32* %addr_-40, align 4, !insn.addr !489
  %7 = call i32 @setsockopt(i32 %4, i32 1, i32 2, i32* nonnull %addr_-40, i32 4), !insn.addr !490
  %8 = icmp slt i32 %7, 0, !insn.addr !491
  %9 = icmp eq i1 %8, false, !insn.addr !492
  br i1 %9, label %dec_label_pc_2714, label %dec_label_pc_26fc, !insn.addr !492

dec_label_pc_26fc:                                ; preds = %dec_label_pc_26d9
  %10 = call i32 @close(i32 %4), !insn.addr !493
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !494
  br label %dec_label_pc_27ae, !insn.addr !494

dec_label_pc_2714:                                ; preds = %dec_label_pc_26d9
  %11 = call i32* @memset(i32* nonnull %stack_var_-32, i32 0, i32 16), !insn.addr !495
  store i32 2, i32* %stack_var_-32, align 4, !insn.addr !496
  %12 = call i16 @htons(i16 0), !insn.addr !497
  %13 = bitcast i32* %stack_var_-32 to %sockaddr*
  %14 = call i32 @bind(i32 %4, %sockaddr* nonnull %13, i32 16), !insn.addr !498
  %15 = icmp slt i32 %14, 0, !insn.addr !499
  %16 = icmp eq i1 %15, false, !insn.addr !500
  br i1 %16, label %dec_label_pc_2772, label %dec_label_pc_275d, !insn.addr !500

dec_label_pc_275d:                                ; preds = %dec_label_pc_2714
  %17 = call i32 @close(i32 %4), !insn.addr !501
  store i32 -3, i32* %eax.0.reg2mem, !insn.addr !502
  br label %dec_label_pc_27ae, !insn.addr !502

dec_label_pc_2772:                                ; preds = %dec_label_pc_2714
  %18 = call i32 @listen(i32 %4, i32 5), !insn.addr !503
  %19 = icmp slt i32 %18, 0, !insn.addr !504
  %20 = icmp eq i1 %19, false, !insn.addr !505
  %21 = call i32 @close(i32 %4)
  %. = select i1 %20, i32 42, i32 -4
  store i32 %., i32* %eax.0.reg2mem, !insn.addr !506
  br label %dec_label_pc_27ae, !insn.addr !506

dec_label_pc_27ae:                                ; preds = %dec_label_pc_2772, %dec_label_pc_2694, %dec_label_pc_275d, %dec_label_pc_26fc
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %22 = call i32 @__readgsdword(i32 20), !insn.addr !507
  %23 = icmp eq i32 %3, %22, !insn.addr !507
  store i32 %eax.0.reload, i32* %eax.1.reg2mem, !insn.addr !508
  br i1 %23, label %dec_label_pc_27bf, label %dec_label_pc_27ba, !insn.addr !508

dec_label_pc_27ba:                                ; preds = %dec_label_pc_27ae
  %24 = call i32 @__stack_chk_fail_local(), !insn.addr !509
  store i32 %24, i32* %eax.1.reg2mem, !insn.addr !509
  br label %dec_label_pc_27bf, !insn.addr !509

dec_label_pc_27bf:                                ; preds = %dec_label_pc_27ba, %dec_label_pc_27ae
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !510

; uselistorder directives
  uselistorder i32 %4, { 1, 2, 3, 4, 0, 5, 6 }
  uselistorder i32* %stack_var_-32, { 1, 2, 0 }
  uselistorder i32* %eax.0.reg2mem, { 0, 1, 4, 3, 2 }
  uselistorder i32* (i32*, i32, i32)* @memset, { 1, 0, 2 }
  uselistorder i32 2, { 2, 0, 1, 3 }
  uselistorder label %dec_label_pc_27ae, { 0, 2, 3, 1 }
}

define i32 @call_socket_create() local_unnamed_addr {
dec_label_pc_27c4:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !511
  %3 = call i32 @param_socket_create(), !insn.addr !512
  ret i32 %3, !insn.addr !513
}

define i32 @param_shmget_shmat() local_unnamed_addr {
dec_label_pc_27df:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !514
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !515
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4705 to i32), i32 -11454), !insn.addr !516
  %4 = inttoptr i32 %3 to i8*, !insn.addr !517
  %5 = call i32 (i8*, i32, ...) @open(i8* %4, i32 66), !insn.addr !517
  %6 = icmp slt i32 %5, 0, !insn.addr !518
  %7 = icmp eq i1 %6, false, !insn.addr !519
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !519
  br i1 %7, label %dec_label_pc_2826, label %dec_label_pc_28f4, !insn.addr !519

dec_label_pc_2826:                                ; preds = %dec_label_pc_27df
  %8 = call i32 @close(i32 %5), !insn.addr !520
  %9 = call i32 @ftok(i8* %4, i32 42), !insn.addr !521
  %10 = icmp slt i32 %9, 0, !insn.addr !522
  %11 = icmp eq i1 %10, false, !insn.addr !523
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !523
  br i1 %11, label %dec_label_pc_285b, label %dec_label_pc_28f4, !insn.addr !523

dec_label_pc_285b:                                ; preds = %dec_label_pc_2826
  %12 = call i32 @shmget(i32 %9, i32 4096, i32 ptrtoint (%shmid_ds** @global_var_3b6 to i32)), !insn.addr !524
  %13 = icmp slt i32 %12, 0, !insn.addr !525
  %14 = icmp eq i1 %13, false, !insn.addr !526
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !526
  br i1 %14, label %dec_label_pc_2883, label %dec_label_pc_28f4, !insn.addr !526

dec_label_pc_2883:                                ; preds = %dec_label_pc_285b
  %15 = call i32* @shmat(i32 %12, i32* null, i32 0), !insn.addr !527
  %16 = icmp eq i32* %15, inttoptr (i32 -1 to i32*), !insn.addr !528
  %17 = icmp eq i1 %16, false, !insn.addr !529
  store i32 -3, i32* %eax.0.reg2mem, !insn.addr !529
  br i1 %17, label %dec_label_pc_28a5, label %dec_label_pc_28f4, !insn.addr !529

dec_label_pc_28a5:                                ; preds = %dec_label_pc_2883
  %18 = ptrtoint i32* %15 to i32, !insn.addr !527
  store i32 1918986323, i32* %15, align 4, !insn.addr !530
  %19 = add i32 %18, 4, !insn.addr !531
  %20 = inttoptr i32 %19 to i32*, !insn.addr !531
  store i32 1699570789, i32* %20, align 4, !insn.addr !531
  %21 = add i32 %18, 8, !insn.addr !532
  %22 = inttoptr i32 %21 to i32*, !insn.addr !532
  store i32 2037542765, i32* %22, align 4, !insn.addr !532
  %23 = add i32 %18, 12, !insn.addr !533
  %24 = inttoptr i32 %23 to i8*, !insn.addr !533
  store i8 0, i8* %24, align 1, !insn.addr !533
  %25 = bitcast i32* %15 to i8*, !insn.addr !534
  %26 = call i32 @strlen(i8* %25), !insn.addr !534
  %27 = call i32 @shmdt(i32* %15), !insn.addr !535
  %28 = call i32 @shmctl(i32 %12, i32 0, %shmid_ds* null), !insn.addr !536
  store i32 %26, i32* %eax.0.reg2mem, !insn.addr !537
  br label %dec_label_pc_28f4, !insn.addr !537

dec_label_pc_28f4:                                ; preds = %dec_label_pc_2883, %dec_label_pc_285b, %dec_label_pc_2826, %dec_label_pc_27df, %dec_label_pc_28a5
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !538

; uselistorder directives
  uselistorder i32 %18, { 2, 0, 1 }
  uselistorder i32* %15, { 0, 1, 2, 4, 3 }
  uselistorder i32* %eax.0.reg2mem, { 0, 5, 1, 2, 3, 4 }
  uselistorder i32 (i8*)* @strlen, { 5, 3, 4, 0, 1, 2, 6 }
  uselistorder i8 0, { 1, 2, 3, 0 }
  uselistorder i32 (i32)* @close, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder label %dec_label_pc_28f4, { 4, 0, 1, 2, 3 }
}

define i32 @call_shmget_shmat() local_unnamed_addr {
dec_label_pc_28f9:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !539
  %3 = call i32 @param_shmget_shmat(), !insn.addr !540
  %4 = icmp slt i32 %3, 1, !insn.addr !541
  %. = select i1 %4, i32 -1, i32 42
  ret i32 %., !insn.addr !542
}

define void @signal_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_2929:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !543
  %3 = add i32 %2, add (i32 ptrtoint (i32* @global_var_45bf to i32), i32 332), !insn.addr !544
  %4 = inttoptr i32 %3 to i32*, !insn.addr !544
  store i32 1, i32* %4, align 4, !insn.addr !544
  %5 = add i32 %2, add (i32 ptrtoint (i32* @global_var_45bf to i32), i32 336), !insn.addr !545
  %6 = inttoptr i32 %5 to i32*, !insn.addr !545
  store i32 %sig, i32* %6, align 4, !insn.addr !545
  ret void, !insn.addr !546
}

define i32 @param_signal_handling() local_unnamed_addr {
dec_label_pc_2950:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !547
  %.reg2mem18 = alloca i32, !insn.addr !547
  %.reg2mem16 = alloca i32, !insn.addr !547
  %.reg2mem14 = alloca i32, !insn.addr !547
  %.reg2mem = alloca i32, !insn.addr !547
  %1 = load i32, i32* %0
  %stack_var_-28 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !548
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4594 to i32), i32 -17867), !insn.addr !549
  %4 = inttoptr i32 %3 to void (i32)*, !insn.addr !550
  %5 = call void (i32)* @signal(i32 10, void (i32)* %4), !insn.addr !551
  %6 = icmp eq void (i32)* %5, inttoptr (i32 -1 to void (i32)*), !insn.addr !552
  %7 = icmp eq i1 %6, false, !insn.addr !553
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !553
  br i1 %7, label %dec_label_pc_2989, label %dec_label_pc_2aa2, !insn.addr !553

dec_label_pc_2989:                                ; preds = %dec_label_pc_2950
  %8 = call void (i32)* @signal(i32 14, void (i32)* %4), !insn.addr !554
  %9 = icmp eq void (i32)* %8, inttoptr (i32 -1 to void (i32)*), !insn.addr !555
  %10 = icmp eq i1 %9, false, !insn.addr !556
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !556
  br i1 %10, label %dec_label_pc_29ac, label %dec_label_pc_2aa2, !insn.addr !556

dec_label_pc_29ac:                                ; preds = %dec_label_pc_2989
  %11 = ptrtoint i32* %stack_var_-28 to i32, !insn.addr !557
  %12 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4594 to i32), i32 332), !insn.addr !558
  %13 = inttoptr i32 %12 to i32*, !insn.addr !558
  store i32 0, i32* %13, align 4, !insn.addr !558
  %14 = call i32 @raise(i32 10), !insn.addr !559
  %15 = load i32, i32* %13, align 4, !insn.addr !560
  %16 = icmp eq i32 %15, 0, !insn.addr !561
  %17 = icmp eq i1 %16, false, !insn.addr !562
  store i32 %15, i32* %.reg2mem14, !insn.addr !562
  br i1 %17, label %dec_label_pc_29f3, label %dec_label_pc_29e6.lr.ph, !insn.addr !562

dec_label_pc_29e6.lr.ph:                          ; preds = %dec_label_pc_29ac
  %18 = add i32 %11, -16
  %19 = inttoptr i32 %18 to i32*
  store i32 add (i32 ptrtoint (i32* @global_var_3e8 to i32), i32 -1), i32* %.reg2mem, !insn.addr !563
  store i32 %15, i32* %.reg2mem14, !insn.addr !563
  br i1 icmp sge (i32* @global_var_3e8, i32* null), label %dec_label_pc_29cc, label %dec_label_pc_29f3, !insn.addr !563

dec_label_pc_29cc:                                ; preds = %dec_label_pc_29e6.lr.ph, %dec_label_pc_29e6
  %.reload = load i32, i32* %.reg2mem
  store i32 ptrtoint (i32* @global_var_3e8 to i32), i32* %19, align 4, !insn.addr !564
  %20 = call i32 @usleep(i32 %.reload), !insn.addr !565
  %21 = load i32, i32* %13, align 4, !insn.addr !560
  %22 = icmp eq i32 %21, 0, !insn.addr !561
  %23 = icmp eq i1 %22, false, !insn.addr !562
  store i32 %21, i32* %.reg2mem14, !insn.addr !562
  br i1 %23, label %dec_label_pc_29f3, label %dec_label_pc_29e6, !insn.addr !562

dec_label_pc_29e6:                                ; preds = %dec_label_pc_29cc
  %24 = add i32 %.reload, -1, !insn.addr !566
  %25 = icmp eq i32 %.reload, 0, !insn.addr !567
  %26 = icmp slt i32 %.reload, 0, !insn.addr !567
  %27 = icmp eq i1 %26, false, !insn.addr !563
  %28 = icmp eq i1 %25, false, !insn.addr !563
  %29 = icmp eq i1 %27, %28, !insn.addr !563
  store i32 %24, i32* %.reg2mem, !insn.addr !563
  store i32 %21, i32* %.reg2mem14, !insn.addr !563
  br i1 %29, label %dec_label_pc_29cc, label %dec_label_pc_29f3, !insn.addr !563

dec_label_pc_29f3:                                ; preds = %dec_label_pc_29e6.lr.ph, %dec_label_pc_29e6, %dec_label_pc_29cc, %dec_label_pc_29ac
  %.reload15 = load i32, i32* %.reg2mem14, !insn.addr !568
  %30 = icmp eq i32 %.reload15, 0, !insn.addr !569
  %31 = icmp eq i1 %30, false, !insn.addr !570
  store i32 -3, i32* %eax.0.reg2mem, !insn.addr !570
  br i1 %31, label %dec_label_pc_2a07, label %dec_label_pc_2aa2, !insn.addr !570

dec_label_pc_2a07:                                ; preds = %dec_label_pc_29f3
  %32 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4594 to i32), i32 336), !insn.addr !571
  %33 = inttoptr i32 %32 to i32*, !insn.addr !571
  %34 = load i32, i32* %33, align 4, !insn.addr !571
  %35 = icmp eq i32 %34, 10, !insn.addr !572
  store i32 -4, i32* %eax.0.reg2mem, !insn.addr !573
  br i1 %35, label %dec_label_pc_2a1c, label %dec_label_pc_2aa2, !insn.addr !573

dec_label_pc_2a1c:                                ; preds = %dec_label_pc_2a07
  store i32 0, i32* %13, align 4, !insn.addr !574
  %36 = add i32 %11, -16, !insn.addr !575
  %37 = inttoptr i32 %36 to i32*, !insn.addr !575
  store i32 1, i32* %37, align 4, !insn.addr !575
  %38 = call i32 @alarm(i32 ptrtoint (i32* @0 to i32)), !insn.addr !576
  %39 = load i32, i32* %13, align 4
  %40 = icmp eq i32 %39, 0, !insn.addr !577
  %41 = icmp eq i1 %40, false, !insn.addr !578
  %brmerge = or i1 %41, icmp slt (i32* @global_var_7d0, i32* null)
  store i32 add (i32 ptrtoint (i32* @global_var_7d0 to i32), i32 -1), i32* %.reg2mem16, !insn.addr !578
  store i32 %39, i32* %.reg2mem18, !insn.addr !578
  br i1 %brmerge, label %dec_label_pc_2a63, label %dec_label_pc_2a3c, !insn.addr !578

dec_label_pc_2a3c:                                ; preds = %dec_label_pc_2a1c, %dec_label_pc_2a56
  %.reload17 = load i32, i32* %.reg2mem16
  store i32 ptrtoint (i32* @global_var_3e8 to i32), i32* %37, align 4, !insn.addr !579
  %42 = call i32 @usleep(i32 %.reload17), !insn.addr !580
  %43 = load i32, i32* %13, align 4
  %44 = icmp eq i32 %43, 0, !insn.addr !577
  %45 = icmp eq i1 %44, false, !insn.addr !578
  store i32 %43, i32* %.reg2mem18, !insn.addr !578
  br i1 %45, label %dec_label_pc_2a63, label %dec_label_pc_2a56, !insn.addr !578

dec_label_pc_2a56:                                ; preds = %dec_label_pc_2a3c
  %46 = add i32 %.reload17, -1, !insn.addr !581
  %47 = icmp eq i32 %.reload17, 0, !insn.addr !582
  %48 = icmp slt i32 %.reload17, 0, !insn.addr !582
  %49 = icmp eq i1 %48, false, !insn.addr !583
  %50 = icmp eq i1 %47, false, !insn.addr !583
  %51 = icmp eq i1 %49, %50, !insn.addr !583
  store i32 %46, i32* %.reg2mem16, !insn.addr !583
  store i32 %43, i32* %.reg2mem18, !insn.addr !583
  br i1 %51, label %dec_label_pc_2a3c, label %dec_label_pc_2a63, !insn.addr !583

dec_label_pc_2a63:                                ; preds = %dec_label_pc_2a1c, %dec_label_pc_2a56, %dec_label_pc_2a3c
  %.reload19 = load i32, i32* %.reg2mem18, !insn.addr !584
  %52 = icmp eq i32 %.reload19, 0, !insn.addr !585
  store i32 -5, i32* %eax.0.reg2mem, !insn.addr !586
  br i1 %52, label %dec_label_pc_2aa2, label %dec_label_pc_2a6d, !insn.addr !586

dec_label_pc_2a6d:                                ; preds = %dec_label_pc_2a63
  %53 = load i32, i32* %33, align 4, !insn.addr !587
  %54 = icmp eq i32 %53, 14, !insn.addr !588
  store i32 -5, i32* %eax.0.reg2mem, !insn.addr !589
  br i1 %54, label %dec_label_pc_2a7f, label %dec_label_pc_2aa2, !insn.addr !589

dec_label_pc_2a7f:                                ; preds = %dec_label_pc_2a6d
  %55 = add i32 %11, -12, !insn.addr !590
  %56 = inttoptr i32 %55 to i32*, !insn.addr !590
  store i32 0, i32* %56, align 4, !insn.addr !590
  store i32 10, i32* %37, align 4, !insn.addr !591
  %57 = call void (i32)* @signal(i32 ptrtoint (i32* @0 to i32), void (i32)* bitcast (i32* @0 to void (i32)*)), !insn.addr !592
  store i32 0, i32* %56, align 4, !insn.addr !593
  store i32 14, i32* %37, align 4, !insn.addr !594
  %58 = call void (i32)* @signal(i32 ptrtoint (i32* @0 to i32), void (i32)* bitcast (i32* @0 to void (i32)*)), !insn.addr !595
  store i32 42, i32* %eax.0.reg2mem, !insn.addr !596
  br label %dec_label_pc_2aa2, !insn.addr !596

dec_label_pc_2aa2:                                ; preds = %dec_label_pc_2a63, %dec_label_pc_2a6d, %dec_label_pc_2a07, %dec_label_pc_29f3, %dec_label_pc_2989, %dec_label_pc_2950, %dec_label_pc_2a7f
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !597

; uselistorder directives
  uselistorder i32 %43, { 1, 0, 2 }
  uselistorder i32 %.reload17, { 2, 3, 1, 0 }
  uselistorder i32* %37, { 2, 1, 0, 3 }
  uselistorder i32 %21, { 1, 0, 2 }
  uselistorder i32 %.reload, { 2, 3, 1, 0 }
  uselistorder i32* %13, { 2, 1, 3, 4, 0, 5 }
  uselistorder i32 %1, { 3, 2, 0, 1 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %.reg2mem14, { 0, 2, 1, 3, 4 }
  uselistorder i32* %.reg2mem16, { 2, 0, 1 }
  uselistorder i32* %.reg2mem18, { 0, 2, 1, 3 }
  uselistorder i32* %eax.0.reg2mem, { 0, 7, 2, 1, 3, 4, 5, 6 }
  uselistorder i32 -5, { 1, 0 }
  uselistorder i32* @global_var_7d0, { 1, 0 }
  uselistorder i32 14, { 2, 0, 1 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i32 10, { 8, 1, 2, 3, 4, 0, 5, 6, 7 }
  uselistorder label %dec_label_pc_2aa2, { 6, 1, 0, 2, 3, 4, 5 }
  uselistorder label %dec_label_pc_2a63, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2a3c, { 1, 0 }
  uselistorder label %dec_label_pc_29f3, { 1, 2, 0, 3 }
  uselistorder label %dec_label_pc_29cc, { 1, 0 }
}

define i32 @call_signal_handling() local_unnamed_addr {
dec_label_pc_2aa7:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !598
  %3 = call i32 @param_signal_handling(), !insn.addr !599
  ret i32 %3, !insn.addr !600
}

define void @test_system_calls() local_unnamed_addr {
dec_label_pc_2ac2:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !601
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4422 to i32), i32 -11436), !insn.addr !602
  %4 = inttoptr i32 %3 to i8*, !insn.addr !603
  %5 = call i32 @puts(i8* %4), !insn.addr !604
  %6 = call i32 @call_linux_syscall(), !insn.addr !605
  %7 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4422 to i32), i32 -11409), !insn.addr !606
  %8 = inttoptr i32 %7 to i8*, !insn.addr !607
  %9 = call i32 (i8*, ...) @printf(i8* %8), !insn.addr !608
  %10 = call i32 @call_win32_api(), !insn.addr !609
  %11 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4422 to i32), i32 -11381), !insn.addr !610
  %12 = inttoptr i32 %11 to i8*, !insn.addr !611
  %13 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !612
  %14 = call i32 @call_fork_exec(), !insn.addr !613
  %15 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4422 to i32), i32 -11353), !insn.addr !614
  %16 = inttoptr i32 %15 to i8*, !insn.addr !615
  %17 = call i32 (i8*, ...) @printf(i8* %16), !insn.addr !616
  %18 = call i32 @call_pipe_communication(), !insn.addr !617
  %19 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4422 to i32), i32 -11325), !insn.addr !618
  %20 = inttoptr i32 %19 to i8*, !insn.addr !619
  %21 = call i32 (i8*, ...) @printf(i8* %20), !insn.addr !620
  %22 = call i32 @call_socket_create(), !insn.addr !621
  %23 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4422 to i32), i32 -11297), !insn.addr !622
  %24 = inttoptr i32 %23 to i8*, !insn.addr !623
  %25 = call i32 (i8*, ...) @printf(i8* %24), !insn.addr !624
  %26 = call i32 @call_shmget_shmat(), !insn.addr !625
  %27 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4422 to i32), i32 -11269), !insn.addr !626
  %28 = inttoptr i32 %27 to i8*, !insn.addr !627
  %29 = call i32 (i8*, ...) @printf(i8* %28), !insn.addr !628
  %30 = call i32 @call_signal_handling(), !insn.addr !629
  %31 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4422 to i32), i32 -11241), !insn.addr !630
  %32 = inttoptr i32 %31 to i8*, !insn.addr !631
  %33 = call i32 (i8*, ...) @printf(i8* %32), !insn.addr !632
  ret void, !insn.addr !633
}

define i8* @thread_compute(i8* %arg) local_unnamed_addr {
dec_label_pc_2b98:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 %1), !insn.addr !634
  %3 = bitcast i8* %arg to i32*, !insn.addr !635
  %4 = load i32, i32* %3, align 4, !insn.addr !635
  %5 = mul i32 %4, %4, !insn.addr !636
  %6 = call i32* @malloc(i32 4), !insn.addr !637
  store i32 %5, i32* %6, align 4, !insn.addr !638
  %7 = bitcast i32* %6 to i8*, !insn.addr !639
  ret i8* %7, !insn.addr !639
}

define i32 @param_pthread_create(i32 %x) local_unnamed_addr {
dec_label_pc_2be7:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !640
  %storemerge.reg2mem = alloca i32, !insn.addr !640
  %1 = load i32, i32* %0
  %result_-28 = alloca i32, align 4
  %thread_ret_-36 = alloca i8*, align 4
  %ret_-32 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !641
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !642
  store i32 %x, i32* %ret_-32, align 4, !insn.addr !643
  %4 = add i32 %1, add (i32 ptrtoint (i32* @global_var_42fd to i32), i32 -17244), !insn.addr !644
  %5 = inttoptr i32 %4 to i32* (i32*)*, !insn.addr !645
  %6 = bitcast i8** %thread_ret_-36 to i32*, !insn.addr !646
  %7 = call i32 @pthread_create(i32* nonnull %6, i32* null, i32* (i32*)* %5, i32* nonnull %ret_-32), !insn.addr !646
  %8 = icmp eq i32 %7, 0, !insn.addr !647
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !648
  br i1 %8, label %dec_label_pc_2c37, label %dec_label_pc_2c64, !insn.addr !648

dec_label_pc_2c37:                                ; preds = %dec_label_pc_2be7
  %9 = load i8*, i8** %thread_ret_-36, align 4, !insn.addr !649
  %10 = ptrtoint i8* %9 to i32, !insn.addr !649
  %11 = bitcast i32* %result_-28 to i32**, !insn.addr !650
  %12 = call i32 @pthread_join(i32 %10, i32** nonnull %11), !insn.addr !650
  %13 = load i32, i32* %result_-28, align 4
  %14 = inttoptr i32 %13 to i32*, !insn.addr !651
  %15 = load i32, i32* %14, align 4, !insn.addr !651
  call void @free(i32* %14), !insn.addr !652
  store i32 %15, i32* %storemerge.reg2mem, !insn.addr !653
  br label %dec_label_pc_2c64, !insn.addr !653

dec_label_pc_2c64:                                ; preds = %dec_label_pc_2be7, %dec_label_pc_2c37
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %16 = call i32 @__readgsdword(i32 20), !insn.addr !654
  %17 = icmp eq i32 %3, %16, !insn.addr !654
  store i32 %storemerge.reload, i32* %eax.0.reg2mem, !insn.addr !655
  br i1 %17, label %dec_label_pc_2c75, label %dec_label_pc_2c70, !insn.addr !655

dec_label_pc_2c70:                                ; preds = %dec_label_pc_2c64
  %18 = call i32 @__stack_chk_fail_local(), !insn.addr !656
  store i32 %18, i32* %eax.0.reg2mem, !insn.addr !656
  br label %dec_label_pc_2c75, !insn.addr !656

dec_label_pc_2c75:                                ; preds = %dec_label_pc_2c70, %dec_label_pc_2c64
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !657

; uselistorder directives
  uselistorder i8** %thread_ret_-36, { 1, 0 }
  uselistorder i32* %result_-28, { 1, 0 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2c64, { 1, 0 }
}

define i32 @call_pthread_create() local_unnamed_addr {
dec_label_pc_2c7a:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !658
  %3 = call i32 @param_pthread_create(i32 7), !insn.addr !659
  ret i32 %3, !insn.addr !660
}

define i8* @thread_sum(i8* %arg) local_unnamed_addr {
dec_label_pc_2c9d:
  %0 = alloca i32
  %storemerge.in2.reg2mem = alloca i32, !insn.addr !661
  %.reg2mem = alloca i32, !insn.addr !661
  %1 = load i32, i32* %0
  %2 = ptrtoint i8* %arg to i32
  %3 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !662
  %4 = add i32 %2, 8, !insn.addr !663
  %5 = inttoptr i32 %4 to i32*, !insn.addr !663
  store i32 0, i32* %5, align 4, !insn.addr !663
  %6 = bitcast i8* %arg to i32*, !insn.addr !664
  %7 = load i32, i32* %6, align 4, !insn.addr !664
  %8 = add i32 %2, 4, !insn.addr !665
  %9 = inttoptr i32 %8 to i32*, !insn.addr !665
  %10 = load i32, i32* %9, align 4, !insn.addr !665
  %11 = icmp slt i32 %10, %7, !insn.addr !666
  store i32 0, i32* %.reg2mem, !insn.addr !666
  store i32 %7, i32* %storemerge.in2.reg2mem, !insn.addr !666
  br i1 %11, label %dec_label_pc_2ceb, label %dec_label_pc_2ccb, !insn.addr !666

dec_label_pc_2ccb:                                ; preds = %dec_label_pc_2c9d, %dec_label_pc_2ccb
  %storemerge.in2.reload = load i32, i32* %storemerge.in2.reg2mem
  %.reload = load i32, i32* %.reg2mem, !insn.addr !667
  %12 = add i32 %storemerge.in2.reload, %.reload, !insn.addr !668
  store i32 %12, i32* %5, align 4, !insn.addr !669
  %13 = add i32 %storemerge.in2.reload, 1, !insn.addr !670
  %14 = load i32, i32* %9, align 4, !insn.addr !665
  %15 = icmp slt i32 %14, %13, !insn.addr !666
  store i32 %12, i32* %.reg2mem, !insn.addr !666
  store i32 %13, i32* %storemerge.in2.reg2mem, !insn.addr !666
  br i1 %15, label %dec_label_pc_2ceb, label %dec_label_pc_2ccb, !insn.addr !666

dec_label_pc_2ceb:                                ; preds = %dec_label_pc_2ccb, %dec_label_pc_2c9d
  ret i8* null, !insn.addr !671

; uselistorder directives
  uselistorder i32* %9, { 1, 0 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.in2.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_2ccb, { 1, 0 }
}

define i32 @param_pthread_join() local_unnamed_addr {
dec_label_pc_2cf2:
  %0 = alloca i32
  %eax.1.reg2mem = alloca i32, !insn.addr !672
  %eax.0.reg2mem = alloca i32, !insn.addr !672
  %.reg2mem = alloca i32, !insn.addr !672
  %storemerge13.reg2mem = alloca i32, !insn.addr !672
  %1 = load i32, i32* %0
  %tids_-68 = alloca [3 x i32], align 4
  %tids_-72 = alloca [3 x i32], align 4
  %stack_var_-64 = alloca i32, align 4
  %stack_var_-52 = alloca i32, align 4
  %total_-76 = alloca i32, align 4
  %stack_var_-4 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !673
  %3 = ptrtoint i32* %total_-76 to i32, !insn.addr !674
  %4 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !675
  %5 = call i32 @__readgsdword(i32 20), !insn.addr !676
  store i32 1, i32* %stack_var_-52, align 4, !insn.addr !677
  store i32 0, i32* %total_-76, align 4
  %6 = ptrtoint i32* %stack_var_-52 to i32, !insn.addr !678
  %7 = ptrtoint i32* %stack_var_-64 to i32, !insn.addr !679
  %8 = add i32 %3, -4, !insn.addr !680
  %9 = inttoptr i32 %8 to i32*, !insn.addr !680
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_41f2 to i32), i32 -16983), !insn.addr !681
  %11 = add i32 %3, -8, !insn.addr !682
  %12 = inttoptr i32 %11 to i32*, !insn.addr !682
  %13 = add i32 %3, -12
  %14 = inttoptr i32 %13 to i32*
  %15 = add i32 %3, -16
  %16 = inttoptr i32 %15 to i32*
  store i32 0, i32* %storemerge13.reg2mem
  br label %dec_label_pc_2d5b

dec_label_pc_2d5b:                                ; preds = %dec_label_pc_2cf2, %dec_label_pc_2d95
  %storemerge13.reload = load i32, i32* %storemerge13.reg2mem
  %17 = mul i32 %storemerge13.reload, 12, !insn.addr !683
  %18 = add i32 %17, %6, !insn.addr !684
  %19 = mul i32 %storemerge13.reload, 4, !insn.addr !685
  %20 = add i32 %19, %7, !insn.addr !686
  store i32 %18, i32* %9, align 4, !insn.addr !680
  store i32 %10, i32* %12, align 4, !insn.addr !682
  store i32 0, i32* %14, align 4, !insn.addr !687
  store i32 %20, i32* %16, align 4, !insn.addr !688
  %21 = load i32, i32* %total_-76, align 4, !insn.addr !689
  %22 = inttoptr i32 %21 to i32*, !insn.addr !689
  %23 = call i32 @pthread_create(i32* %22, i32* nonnull @0, i32* (i32*)* bitcast (i32* @0 to i32* (i32*)*), i32* nonnull @0), !insn.addr !689
  %24 = icmp eq i32 %23, 0, !insn.addr !690
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !691
  br i1 %24, label %dec_label_pc_2d95, label %dec_label_pc_2df5, !insn.addr !691

dec_label_pc_2d95:                                ; preds = %dec_label_pc_2d5b
  %25 = load i32, i32* %total_-76, align 4, !insn.addr !692
  %26 = add i32 %25, 1, !insn.addr !692
  store i32 %26, i32* %total_-76, align 4
  %27 = icmp slt i32 %26, 3, !insn.addr !693
  store i32 %26, i32* %storemerge13.reg2mem, !insn.addr !693
  br i1 %27, label %dec_label_pc_2d5b, label %dec_label_pc_2d9f, !insn.addr !693

dec_label_pc_2d9f:                                ; preds = %dec_label_pc_2d95
  store [3 x i32] [i32 0, i32 undef, i32 undef], [3 x i32]* %tids_-72, align 4, !insn.addr !694
  store [3 x i32] [i32 0, i32 undef, i32 undef], [3 x i32]* %tids_-68, align 4
  %28 = getelementptr inbounds [3 x i32], [3 x i32]* %tids_-68, i32 0, i32 0, !insn.addr !695
  %29 = load i32, i32* %28, align 4, !insn.addr !695
  %30 = icmp slt i32 %29, 3, !insn.addr !696
  br i1 %30, label %dec_label_pc_2daf.lr.ph, label %dec_label_pc_2df2, !insn.addr !696

dec_label_pc_2daf.lr.ph:                          ; preds = %dec_label_pc_2d9f
  %31 = add i32 %2, -60, !insn.addr !697
  %32 = getelementptr inbounds [3 x i32], [3 x i32]* %tids_-72, i32 0, i32 0, !insn.addr !698
  %33 = bitcast [3 x i32]* %tids_-68 to i32***, !insn.addr !698
  %34 = add i32 %2, -40
  store i32 %29, i32* %.reg2mem
  br label %dec_label_pc_2daf

dec_label_pc_2daf:                                ; preds = %dec_label_pc_2daf.lr.ph, %dec_label_pc_2dcf
  %.reload = load i32, i32* %.reg2mem
  %35 = mul i32 %.reload, 4, !insn.addr !697
  %36 = add i32 %31, %35, !insn.addr !697
  %37 = inttoptr i32 %36 to i32*, !insn.addr !697
  %38 = load i32, i32* %37, align 4, !insn.addr !697
  store i32 0, i32* %14, align 4, !insn.addr !699
  store i32 %38, i32* %16, align 4, !insn.addr !700
  %39 = load i32, i32* %32, align 4, !insn.addr !698
  %40 = load i32**, i32*** %33, align 4, !insn.addr !698
  %41 = call i32 @pthread_join(i32 %39, i32** %40), !insn.addr !698
  %42 = icmp eq i32 %41, 0, !insn.addr !701
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !702
  br i1 %42, label %dec_label_pc_2dcf, label %dec_label_pc_2df5, !insn.addr !702

dec_label_pc_2dcf:                                ; preds = %dec_label_pc_2daf
  %43 = ptrtoint i32** %40 to i32
  %44 = mul i32 %43, 12, !insn.addr !703
  %45 = add i32 %34, %44, !insn.addr !704
  %46 = inttoptr i32 %45 to i32*, !insn.addr !705
  %47 = load i32, i32* %46, align 4, !insn.addr !705
  %48 = add i32 %47, %39, !insn.addr !706
  %49 = insertvalue [3 x i32] undef, i32 %48, 0, !insn.addr !706
  store [3 x i32] %49, [3 x i32]* %tids_-72, align 4, !insn.addr !706
  %50 = add i32 %43, 1, !insn.addr !707
  %51 = insertvalue [3 x i32] undef, i32 %50, 0, !insn.addr !707
  store [3 x i32] %51, [3 x i32]* %tids_-68, align 4
  %52 = load i32, i32* %28, align 4, !insn.addr !695
  %53 = icmp slt i32 %52, 3, !insn.addr !696
  store i32 %52, i32* %.reg2mem, !insn.addr !696
  br i1 %53, label %dec_label_pc_2daf, label %dec_label_pc_2df2, !insn.addr !696

dec_label_pc_2df2:                                ; preds = %dec_label_pc_2dcf, %dec_label_pc_2d9f
  %54 = getelementptr inbounds [3 x i32], [3 x i32]* %tids_-72, i32 0, i32 0, !insn.addr !708
  %55 = load i32, i32* %54, align 4, !insn.addr !708
  store i32 %55, i32* %eax.0.reg2mem, !insn.addr !708
  br label %dec_label_pc_2df5, !insn.addr !708

dec_label_pc_2df5:                                ; preds = %dec_label_pc_2d5b, %dec_label_pc_2daf, %dec_label_pc_2df2
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %56 = call i32 @__readgsdword(i32 20), !insn.addr !709
  %57 = icmp eq i32 %5, %56, !insn.addr !709
  store i32 %eax.0.reload, i32* %eax.1.reg2mem, !insn.addr !710
  br i1 %57, label %dec_label_pc_2e06, label %dec_label_pc_2e01, !insn.addr !710

dec_label_pc_2e01:                                ; preds = %dec_label_pc_2df5
  %58 = call i32 @__stack_chk_fail_local(), !insn.addr !711
  store i32 %58, i32* %eax.1.reg2mem, !insn.addr !711
  br label %dec_label_pc_2e06, !insn.addr !711

dec_label_pc_2e06:                                ; preds = %dec_label_pc_2e01, %dec_label_pc_2df5
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !712

; uselistorder directives
  uselistorder i32* %28, { 1, 0 }
  uselistorder i32 %26, { 0, 2, 1 }
  uselistorder i32 %storemerge13.reload, { 1, 0 }
  uselistorder i32* %total_-76, { 1, 3, 2, 0, 4 }
  uselistorder [3 x i32]* %tids_-72, { 1, 2, 0, 3 }
  uselistorder [3 x i32]* %tids_-68, { 1, 3, 2, 0 }
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32* %storemerge13.reg2mem, { 1, 0, 2 }
  uselistorder i32* %.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32 3, { 1, 0, 2 }
  uselistorder i32 12, { 1, 0, 4, 2, 3 }
  uselistorder label %dec_label_pc_2df5, { 2, 1, 0 }
  uselistorder label %dec_label_pc_2daf, { 1, 0 }
  uselistorder label %dec_label_pc_2d5b, { 1, 0 }
}

define i32 @call_pthread_join() local_unnamed_addr {
dec_label_pc_2e0b:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !713
  %3 = call i32 @param_pthread_join(), !insn.addr !714
  ret i32 %3, !insn.addr !715
}

define i8* @thread_increment(i8* %arg) local_unnamed_addr {
dec_label_pc_2e26:
  %0 = alloca i32
  %storemerge1.reg2mem = alloca i32, !insn.addr !716
  %1 = load i32, i32* %0
  %stack_var_-28 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !717
  %3 = bitcast i8* %arg to i32*, !insn.addr !718
  %4 = load i32, i32* %3, align 4, !insn.addr !718
  %5 = icmp sgt i32 %4, 0, !insn.addr !719
  br i1 %5, label %dec_label_pc_2e4d.lr.ph, label %dec_label_pc_2e9c, !insn.addr !719

dec_label_pc_2e4d.lr.ph:                          ; preds = %dec_label_pc_2e26
  %6 = ptrtoint i32* %stack_var_-28 to i32, !insn.addr !720
  %7 = add i32 %1, add (i32 ptrtoint (i32* @global_var_40be to i32), i32 344), !insn.addr !721
  %8 = add i32 %6, -16, !insn.addr !722
  %9 = inttoptr i32 %8 to i32*, !insn.addr !722
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_40be to i32), i32 340)
  %11 = inttoptr i32 %10 to i32*
  store i32 0, i32* %storemerge1.reg2mem
  br label %dec_label_pc_2e4d

dec_label_pc_2e4d:                                ; preds = %dec_label_pc_2e4d, %dec_label_pc_2e4d.lr.ph
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  store i32 %7, i32* %9, align 4, !insn.addr !722
  %12 = inttoptr i32 %storemerge1.reload to i32*, !insn.addr !723
  %13 = call i32 @pthread_mutex_lock(i32* %12), !insn.addr !723
  %14 = load i32, i32* %11, align 4, !insn.addr !724
  %15 = add i32 %14, 1, !insn.addr !725
  store i32 %15, i32* %11, align 4, !insn.addr !726
  store i32 %7, i32* %9, align 4, !insn.addr !727
  %16 = call i32 @pthread_mutex_unlock(i32* nonnull @0), !insn.addr !728
  store i32 ptrtoint (i32* @global_var_3e8 to i32), i32* %9, align 4, !insn.addr !729
  %17 = call i32 @usleep(i32 ptrtoint (i32* @0 to i32)), !insn.addr !730
  %18 = add nuw nsw i32 %storemerge1.reload, 1, !insn.addr !731
  %exitcond = icmp eq i32 %18, %4
  store i32 %18, i32* %storemerge1.reg2mem, !insn.addr !719
  br i1 %exitcond, label %dec_label_pc_2e9c, label %dec_label_pc_2e4d, !insn.addr !719

dec_label_pc_2e9c:                                ; preds = %dec_label_pc_2e4d, %dec_label_pc_2e26
  ret i8* null, !insn.addr !732

; uselistorder directives
  uselistorder i32 %1, { 2, 1, 0 }
  uselistorder i32* %storemerge1.reg2mem, { 1, 0, 2 }
  uselistorder i32 (i32)* @usleep, { 2, 1, 0, 3 }
}

define i32 @param_mutex_lock(i32 %thread_count, i32 %iterations_per_thread) local_unnamed_addr {
dec_label_pc_2ea6:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !733
  %storemerge.lcssa.reg2mem = alloca i32*, !insn.addr !733
  %.pre-phi6.reg2mem = alloca i32*, !insn.addr !733
  %storemerge2.reg2mem = alloca i32, !insn.addr !733
  %storemerge13.reg2mem = alloca i32, !insn.addr !733
  %1 = load i32, i32* %0
  %stack_var_8 = alloca i32, align 4
  store i32 %iterations_per_thread, i32* %stack_var_8, align 4
  %stack_var_-28 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !734
  %3 = mul i32 %thread_count, 4, !insn.addr !735
  %4 = call i32* @malloc(i32 %3), !insn.addr !736
  %5 = icmp eq i32* %4, null, !insn.addr !737
  %6 = icmp eq i1 %5, false, !insn.addr !738
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !738
  br i1 %6, label %dec_label_pc_2ee1, label %dec_label_pc_2fa3, !insn.addr !738

dec_label_pc_2ee1:                                ; preds = %dec_label_pc_2ea6
  %7 = ptrtoint i32* %4 to i32, !insn.addr !736
  %8 = ptrtoint i32* %stack_var_-28 to i32, !insn.addr !739
  %9 = add i32 %1, add (i32 ptrtoint ([9 x i8]* @global_var_403e to i32), i32 340), !insn.addr !740
  %10 = inttoptr i32 %9 to i32*, !insn.addr !740
  store i32 0, i32* %10, align 4, !insn.addr !740
  store i32 0, i32* %stack_var_-28, align 4
  %11 = icmp sgt i32 %thread_count, 0
  br i1 %11, label %dec_label_pc_2ef4.lr.ph, label %dec_label_pc_2f6a.preheader.dec_label_pc_2f72_crit_edge, !insn.addr !741

dec_label_pc_2ef4.lr.ph:                          ; preds = %dec_label_pc_2ee1
  %12 = add i32 %8, -4, !insn.addr !742
  %13 = inttoptr i32 %12 to i32*, !insn.addr !742
  %14 = ptrtoint i32* %stack_var_8 to i32, !insn.addr !742
  %15 = add i32 %1, add (i32 ptrtoint ([9 x i8]* @global_var_403e to i32), i32 -16590), !insn.addr !743
  %16 = add i32 %8, -8, !insn.addr !744
  %17 = inttoptr i32 %16 to i32*, !insn.addr !744
  %18 = add i32 %8, -12, !insn.addr !745
  %19 = inttoptr i32 %18 to i32*, !insn.addr !745
  %20 = add i32 %8, -16, !insn.addr !746
  %21 = inttoptr i32 %20 to i32*
  store i32 0, i32* %storemerge13.reg2mem
  br label %dec_label_pc_2ef4

dec_label_pc_2ef4:                                ; preds = %dec_label_pc_2ef4.lr.ph, %dec_label_pc_2f32
  %storemerge13.reload = load i32, i32* %storemerge13.reg2mem
  %22 = mul i32 %storemerge13.reload, 4, !insn.addr !747
  %23 = add i32 %22, %7, !insn.addr !748
  store i32 %14, i32* %13, align 4, !insn.addr !742
  store i32 %15, i32* %17, align 4, !insn.addr !744
  store i32 0, i32* %19, align 4, !insn.addr !745
  store i32 %23, i32* %21, align 4, !insn.addr !746
  %24 = load i32, i32* %stack_var_-28, align 4, !insn.addr !749
  %25 = inttoptr i32 %24 to i32*, !insn.addr !749
  %26 = call i32 @pthread_create(i32* %25, i32* nonnull @0, i32* (i32*)* bitcast (i32* @0 to i32* (i32*)*), i32* nonnull @0), !insn.addr !749
  %27 = icmp eq i32 %26, 0, !insn.addr !750
  br i1 %27, label %dec_label_pc_2f32, label %dec_label_pc_2f1d, !insn.addr !751

dec_label_pc_2f1d:                                ; preds = %dec_label_pc_2ef4
  store i32 %7, i32* %21, align 4, !insn.addr !752
  call void @free(i32* nonnull @0), !insn.addr !753
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !754
  br label %dec_label_pc_2fa3, !insn.addr !754

dec_label_pc_2f32:                                ; preds = %dec_label_pc_2ef4
  %28 = load i32, i32* %stack_var_-28, align 4, !insn.addr !755
  %29 = add i32 %28, 1, !insn.addr !755
  store i32 %29, i32* %stack_var_-28, align 4
  %30 = icmp slt i32 %29, %thread_count, !insn.addr !741
  store i32 %29, i32* %storemerge13.reg2mem, !insn.addr !741
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !741
  br i1 %30, label %dec_label_pc_2ef4, label %dec_label_pc_2f47, !insn.addr !741

dec_label_pc_2f6a.preheader.dec_label_pc_2f72_crit_edge: ; preds = %dec_label_pc_2ee1
  %.pre = add i32 %8, -16, !insn.addr !756
  %.pre5 = inttoptr i32 %.pre to i32*, !insn.addr !756
  store i32* %.pre5, i32** %.pre-phi6.reg2mem
  store i32* null, i32** %storemerge.lcssa.reg2mem
  br label %dec_label_pc_2f72

dec_label_pc_2f47:                                ; preds = %dec_label_pc_2f32, %dec_label_pc_2f47
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %31 = mul i32 %storemerge2.reload, 4, !insn.addr !757
  %32 = add i32 %31, %7, !insn.addr !758
  %33 = inttoptr i32 %32 to i32*, !insn.addr !759
  %34 = load i32, i32* %33, align 4, !insn.addr !759
  store i32 0, i32* %19, align 4, !insn.addr !760
  store i32 %34, i32* %21, align 4, !insn.addr !761
  %35 = call i32 @pthread_join(i32 %storemerge2.reload, i32** bitcast (i32* @0 to i32**)), !insn.addr !762
  %36 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !763
  %exitcond = icmp eq i32 %36, %thread_count
  store i32 %36, i32* %storemerge2.reg2mem, !insn.addr !764
  br i1 %exitcond, label %dec_label_pc_2f6a.dec_label_pc_2f72_crit_edge, label %dec_label_pc_2f47, !insn.addr !764

dec_label_pc_2f6a.dec_label_pc_2f72_crit_edge:    ; preds = %dec_label_pc_2f47
  %phitmp = inttoptr i32 %thread_count to i32*
  store i32* %21, i32** %.pre-phi6.reg2mem
  store i32* %phitmp, i32** %storemerge.lcssa.reg2mem
  br label %dec_label_pc_2f72

dec_label_pc_2f72:                                ; preds = %dec_label_pc_2f6a.preheader.dec_label_pc_2f72_crit_edge, %dec_label_pc_2f6a.dec_label_pc_2f72_crit_edge
  %storemerge.lcssa.reload = load i32*, i32** %storemerge.lcssa.reg2mem
  %.pre-phi6.reload = load i32*, i32** %.pre-phi6.reg2mem
  store i32 %7, i32* %.pre-phi6.reload, align 4, !insn.addr !756
  call void @free(i32* %storemerge.lcssa.reload), !insn.addr !765
  %37 = load i32, i32* %stack_var_8, align 4, !insn.addr !766
  %38 = mul i32 %37, %thread_count, !insn.addr !767
  %39 = load i32, i32* %10, align 4, !insn.addr !768
  %40 = icmp eq i32 %38, %39, !insn.addr !769
  %41 = icmp eq i1 %40, false, !insn.addr !770
  %. = select i1 %41, i32 -3, i32 42
  store i32 %., i32* %eax.0.reg2mem, !insn.addr !771
  br label %dec_label_pc_2fa3, !insn.addr !771

dec_label_pc_2fa3:                                ; preds = %dec_label_pc_2f72, %dec_label_pc_2ea6, %dec_label_pc_2f1d
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !772

; uselistorder directives
  uselistorder i32 %storemerge2.reload, { 1, 0, 2 }
  uselistorder i32 %29, { 0, 2, 1 }
  uselistorder i32 %7, { 2, 0, 3, 1 }
  uselistorder i32* %4, { 1, 0 }
  uselistorder i32* %stack_var_-28, { 1, 3, 2, 0, 4 }
  uselistorder i32* %stack_var_8, { 1, 2, 0 }
  uselistorder i32 %1, { 2, 1, 0 }
  uselistorder i32* %storemerge13.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.0.reg2mem, { 0, 1, 3, 2 }
  uselistorder i32 %thread_count, { 1, 2, 3, 5, 4, 0 }
  uselistorder label %dec_label_pc_2fa3, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2f72, { 1, 0 }
  uselistorder label %dec_label_pc_2f47, { 1, 0 }
  uselistorder label %dec_label_pc_2ef4, { 1, 0 }
}

define i32 @call_mutex_lock() local_unnamed_addr {
dec_label_pc_2fa8:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !773
  %3 = call i32 @param_mutex_lock(i32 4, i32 ptrtoint (i32* @global_var_3e8 to i32)), !insn.addr !774
  ret i32 %3, !insn.addr !775
}

define i8* @consumer_thread(i8* %arg) local_unnamed_addr {
dec_label_pc_2fd0:
  %0 = alloca i32
  %.pre-phi2.reg2mem = alloca i32*, !insn.addr !776
  %1 = load i32, i32* %0
  %stack_var_-28 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !777
  %3 = add i32 %1, 16516, !insn.addr !778
  %4 = inttoptr i32 %3 to i32*, !insn.addr !779
  %5 = call i32 @pthread_mutex_lock(i32* %4), !insn.addr !779
  %6 = ptrtoint i32* %stack_var_-28 to i32, !insn.addr !780
  %7 = add i32 %1, 16592, !insn.addr !781
  %8 = inttoptr i32 %7 to i32*, !insn.addr !781
  %9 = load i32, i32* %8, align 4, !insn.addr !781
  %10 = icmp eq i32 %9, 0, !insn.addr !782
  br i1 %10, label %dec_label_pc_2ffa.lr.ph, label %dec_label_pc_2fd0.dec_label_pc_301d_crit_edge, !insn.addr !783

dec_label_pc_2fd0.dec_label_pc_301d_crit_edge:    ; preds = %dec_label_pc_2fd0
  %.pre = add i32 %6, -16, !insn.addr !784
  %.pre1 = inttoptr i32 %.pre to i32*, !insn.addr !784
  store i32* %.pre1, i32** %.pre-phi2.reg2mem
  br label %dec_label_pc_301d

dec_label_pc_2ffa.lr.ph:                          ; preds = %dec_label_pc_2fd0
  %11 = add i32 %6, -12, !insn.addr !785
  %12 = inttoptr i32 %11 to i32*, !insn.addr !785
  %13 = add i32 %1, 16544, !insn.addr !786
  %14 = add i32 %6, -16
  %15 = inttoptr i32 %14 to i32*
  br label %dec_label_pc_2ffa

dec_label_pc_2ffa:                                ; preds = %dec_label_pc_2ffa.lr.ph, %dec_label_pc_2ffa
  store i32 %3, i32* %12, align 4, !insn.addr !785
  store i32 %13, i32* %15, align 4, !insn.addr !787
  %16 = call i32 @pthread_cond_wait(i32* nonnull @0, i32* nonnull @0), !insn.addr !788
  %17 = load i32, i32* %8, align 4, !insn.addr !781
  %18 = icmp eq i32 %17, 0, !insn.addr !782
  store i32* %15, i32** %.pre-phi2.reg2mem, !insn.addr !783
  br i1 %18, label %dec_label_pc_2ffa, label %dec_label_pc_301d, !insn.addr !783

dec_label_pc_301d:                                ; preds = %dec_label_pc_2ffa, %dec_label_pc_2fd0.dec_label_pc_301d_crit_edge
  %.pre-phi2.reload = load i32*, i32** %.pre-phi2.reg2mem
  %19 = add i32 %1, 16596, !insn.addr !789
  %20 = inttoptr i32 %19 to i32*, !insn.addr !789
  %21 = load i32, i32* %20, align 4, !insn.addr !789
  %22 = inttoptr i32 %21 to i32*, !insn.addr !790
  store i32 %3, i32* %.pre-phi2.reload, align 4, !insn.addr !784
  %23 = call i32 @pthread_mutex_unlock(i32* %22), !insn.addr !791
  store i32 4, i32* %.pre-phi2.reload, align 4, !insn.addr !792
  %24 = call i32* @malloc(i32 ptrtoint (i32* @0 to i32)), !insn.addr !793
  store i32 %21, i32* %24, align 4, !insn.addr !794
  %25 = bitcast i32* %24 to i8*, !insn.addr !795
  ret i8* %25, !insn.addr !795

; uselistorder directives
  uselistorder i32* %8, { 1, 0 }
  uselistorder i32 %6, { 1, 2, 0 }
  uselistorder i32 %1, { 3, 4, 2, 0, 1 }
  uselistorder label %dec_label_pc_2ffa, { 1, 0 }
}

define i8* @producer_thread(i8* %arg) local_unnamed_addr {
dec_label_pc_3058:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !796
  %3 = call i32 @sleep(i32 1), !insn.addr !797
  %4 = add i32 %1, 16380, !insn.addr !798
  %5 = inttoptr i32 %4 to i32*, !insn.addr !799
  %6 = call i32 @pthread_mutex_lock(i32* %5), !insn.addr !799
  %7 = add i32 %1, 16460, !insn.addr !800
  %8 = inttoptr i32 %7 to i32*, !insn.addr !800
  store i32 42, i32* %8, align 4, !insn.addr !800
  %9 = add i32 %1, 16456, !insn.addr !801
  %10 = inttoptr i32 %9 to i32*, !insn.addr !801
  store i32 1, i32* %10, align 4, !insn.addr !801
  %11 = add i32 %1, 16408, !insn.addr !802
  %12 = inttoptr i32 %11 to i32*, !insn.addr !803
  %13 = call i32 @pthread_cond_signal(i32* %12), !insn.addr !803
  %14 = call i32 @pthread_mutex_unlock(i32* %5), !insn.addr !804
  ret i8* null, !insn.addr !805

; uselistorder directives
  uselistorder i32 %1, { 1, 2, 3, 4, 0 }
  uselistorder i32 (i32*)* @pthread_mutex_unlock, { 2, 1, 0, 3 }
  uselistorder i32 (i32*)* @pthread_mutex_lock, { 2, 1, 0, 3 }
}

define i32 @param_condition_variable() local_unnamed_addr {
dec_label_pc_30cf:
  %0 = alloca i32
  %eax.1.reg2mem = alloca i32, !insn.addr !806
  %eax.0.reg2mem = alloca i32, !insn.addr !806
  %1 = load i32, i32* %0
  %result_-24 = alloca i32, align 4
  %consumer_ret_-32 = alloca i8*, align 4
  %result_-28 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !807
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !808
  %4 = add i32 %1, 16337, !insn.addr !809
  %5 = inttoptr i32 %4 to i32*, !insn.addr !809
  store i32 0, i32* %5, align 4, !insn.addr !809
  %6 = add i32 %1, 16341, !insn.addr !810
  %7 = inttoptr i32 %6 to i32*, !insn.addr !810
  store i32 0, i32* %7, align 4, !insn.addr !810
  %8 = add i32 %1, -271, !insn.addr !811
  %9 = inttoptr i32 %8 to i32* (i32*)*, !insn.addr !812
  %10 = call i32 @pthread_create(i32* nonnull %result_-28, i32* null, i32* (i32*)* %9, i32* null), !insn.addr !813
  %11 = icmp eq i32 %10, 0, !insn.addr !814
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !815
  br i1 %11, label %dec_label_pc_3126, label %dec_label_pc_3195, !insn.addr !815

dec_label_pc_3126:                                ; preds = %dec_label_pc_30cf
  %12 = add i32 %1, -135, !insn.addr !816
  %13 = inttoptr i32 %12 to i32* (i32*)*, !insn.addr !817
  %14 = bitcast i8** %consumer_ret_-32 to i32*, !insn.addr !818
  %15 = call i32 @pthread_create(i32* nonnull %14, i32* null, i32* (i32*)* %13, i32* null), !insn.addr !818
  %16 = icmp eq i32 %15, 0, !insn.addr !819
  %17 = load i32, i32* %result_-28, align 4
  br i1 %16, label %dec_label_pc_3157, label %dec_label_pc_3141, !insn.addr !820

dec_label_pc_3141:                                ; preds = %dec_label_pc_3126
  %18 = call i32 @pthread_cancel(i32 %17), !insn.addr !821
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !822
  br label %dec_label_pc_3195, !insn.addr !822

dec_label_pc_3157:                                ; preds = %dec_label_pc_3126
  %19 = bitcast i32* %result_-24 to i32**, !insn.addr !823
  %20 = call i32 @pthread_join(i32 %17, i32** nonnull %19), !insn.addr !823
  %21 = load i8*, i8** %consumer_ret_-32, align 4, !insn.addr !824
  %22 = ptrtoint i8* %21 to i32, !insn.addr !824
  %23 = call i32 @pthread_join(i32 %22, i32** null), !insn.addr !825
  %24 = load i32, i32* %result_-24, align 4
  %25 = inttoptr i32 %24 to i32*, !insn.addr !826
  %26 = load i32, i32* %25, align 4, !insn.addr !826
  call void @free(i32* %25), !insn.addr !827
  store i32 %26, i32* %eax.0.reg2mem, !insn.addr !828
  br label %dec_label_pc_3195, !insn.addr !828

dec_label_pc_3195:                                ; preds = %dec_label_pc_30cf, %dec_label_pc_3157, %dec_label_pc_3141
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %27 = call i32 @__readgsdword(i32 20), !insn.addr !829
  %28 = icmp eq i32 %3, %27, !insn.addr !829
  store i32 %eax.0.reload, i32* %eax.1.reg2mem, !insn.addr !830
  br i1 %28, label %dec_label_pc_31a6, label %dec_label_pc_31a1, !insn.addr !830

dec_label_pc_31a1:                                ; preds = %dec_label_pc_3195
  %29 = call i32 @__stack_chk_fail_local(), !insn.addr !831
  store i32 %29, i32* %eax.1.reg2mem, !insn.addr !831
  br label %dec_label_pc_31a6, !insn.addr !831

dec_label_pc_31a6:                                ; preds = %dec_label_pc_31a1, %dec_label_pc_3195
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !832

; uselistorder directives
  uselistorder i32 %17, { 1, 0 }
  uselistorder i32* %result_-28, { 1, 0 }
  uselistorder i8** %consumer_ret_-32, { 1, 0 }
  uselistorder i32* %result_-24, { 1, 0 }
  uselistorder i32 %1, { 4, 2, 1, 0, 3 }
  uselistorder i32* %eax.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_3195, { 1, 2, 0 }
}

define i32 @call_condition_variable() local_unnamed_addr {
dec_label_pc_31ab:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !833
  %3 = call i32 @param_condition_variable(), !insn.addr !834
  ret i32 %3, !insn.addr !835
}

define i8* @thread_atomic_increment(i8* %arg) local_unnamed_addr {
dec_label_pc_31c6:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i8*, !insn.addr !836
  %storemerge1.reg2mem = alloca i32, !insn.addr !836
  %.reg2mem = alloca i32, !insn.addr !836
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = call i32 @__x86.get_pc_thunk.dx(i32 %1), !insn.addr !837
  %4 = call i32 @__readgsdword(i32 20), !insn.addr !838
  %5 = bitcast i8* %arg to i32*, !insn.addr !839
  %6 = load i32, i32* %5, align 4, !insn.addr !839
  %7 = icmp sgt i32 %6, 0, !insn.addr !840
  br i1 %7, label %dec_label_pc_31fe.lr.ph, label %dec_label_pc_323c, !insn.addr !840

dec_label_pc_31fe.lr.ph:                          ; preds = %dec_label_pc_31c6
  %8 = add i32 %2, 16098, !insn.addr !841
  %9 = inttoptr i32 %8 to i32*, !insn.addr !841
  %.promoted = load i32, i32* %9, align 4
  store i32 %.promoted, i32* %.reg2mem
  store i32 0, i32* %storemerge1.reg2mem
  br label %dec_label_pc_31fe

dec_label_pc_31fe:                                ; preds = %dec_label_pc_31fe, %dec_label_pc_31fe.lr.ph
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %10 = add i32 %.reload, 1, !insn.addr !841
  %11 = add i32 %storemerge1.reload, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !842
  %12 = icmp eq i32 %storemerge1.reload, %10, !insn.addr !843
  %13 = select i1 %12, i32 %11, i32 %10, !insn.addr !843
  %14 = add nuw nsw i32 %storemerge1.reload, 1, !insn.addr !844
  %exitcond = icmp eq i32 %14, %6
  store i32 %13, i32* %.reg2mem, !insn.addr !840
  store i32 %14, i32* %storemerge1.reg2mem, !insn.addr !840
  br i1 %exitcond, label %dec_label_pc_3234.dec_label_pc_323c_crit_edge, label %dec_label_pc_31fe, !insn.addr !840

dec_label_pc_3234.dec_label_pc_323c_crit_edge:    ; preds = %dec_label_pc_31fe
  store i32 %13, i32* %9, align 4
  br label %dec_label_pc_323c

dec_label_pc_323c:                                ; preds = %dec_label_pc_3234.dec_label_pc_323c_crit_edge, %dec_label_pc_31c6
  %15 = call i32 @__readgsdword(i32 20), !insn.addr !845
  %16 = icmp eq i32 %4, %15, !insn.addr !845
  store i8* null, i8** %eax.0.reg2mem, !insn.addr !846
  br i1 %16, label %dec_label_pc_3252, label %dec_label_pc_324d, !insn.addr !846

dec_label_pc_324d:                                ; preds = %dec_label_pc_323c
  %17 = call i32 @__stack_chk_fail_local(), !insn.addr !847
  %phitmp = inttoptr i32 %17 to i8*
  store i8* %phitmp, i8** %eax.0.reg2mem, !insn.addr !847
  br label %dec_label_pc_3252, !insn.addr !847

dec_label_pc_3252:                                ; preds = %dec_label_pc_324d, %dec_label_pc_323c
  %eax.0.reload = load i8*, i8** %eax.0.reg2mem
  ret i8* %eax.0.reload, !insn.addr !848

; uselistorder directives
  uselistorder i32 %13, { 1, 0 }
  uselistorder i32 %storemerge1.reload, { 0, 2, 1 }
  uselistorder i32* %.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder i32 ptrtoint (i32* @global_var_3e8 to i32), { 2, 1, 3, 4, 5, 0 }
}

define i8* @thread_atomic_load_store(i8* %arg) local_unnamed_addr {
dec_label_pc_3257:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !849
  %3 = add i32 %2, 15954, !insn.addr !850
  %4 = inttoptr i32 %3 to i32*, !insn.addr !850
  %5 = load i32, i32* %4, align 4, !insn.addr !850
  %6 = add i32 %5, 100, !insn.addr !851
  store i32 %6, i32* %4, align 4, !insn.addr !852
  ret i8* null, !insn.addr !853

; uselistorder directives
  uselistorder i8* null, { 1, 0, 2, 3, 4, 5, 6, 7 }
}

define i32 @param_atomic_ops(i32 %thread_count, i32 %iterations) local_unnamed_addr {
dec_label_pc_3287:
  %0 = alloca i32
  %eax.1.reg2mem = alloca i32, !insn.addr !854
  %eax.0.reg2mem = alloca i32, !insn.addr !854
  %storemerge.lcssa.reg2mem = alloca i32*, !insn.addr !854
  %storemerge3.reg2mem = alloca i32, !insn.addr !854
  %storemerge1.lcssa.reg2mem = alloca i32*, !insn.addr !854
  %.pre-phi14.reg2mem = alloca i32*, !insn.addr !854
  %.pre-phi18.reg2mem = alloca i32*, !insn.addr !854
  %.pre-phi22.reg2mem = alloca i32*, !insn.addr !854
  %storemerge14.reg2mem = alloca i32*, !insn.addr !854
  %.reg2mem = alloca i32, !insn.addr !854
  %1 = load i32, i32* %0
  %stack_var_-36 = alloca i32, align 4
  %stack_var_8 = alloca i32, align 4
  %stack_var_-44 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !855
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !856
  %4 = mul i32 %thread_count, 4, !insn.addr !857
  %5 = call i32* @malloc(i32 %4), !insn.addr !858
  %6 = icmp eq i32* %5, null, !insn.addr !859
  %7 = icmp eq i1 %6, false, !insn.addr !860
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !860
  br i1 %7, label %dec_label_pc_32cd, label %dec_label_pc_33b7, !insn.addr !860

dec_label_pc_32cd:                                ; preds = %dec_label_pc_3287
  %8 = ptrtoint i32* %5 to i32, !insn.addr !858
  %9 = ptrtoint i32* %stack_var_-44 to i32, !insn.addr !861
  %10 = add i32 %1, 15905, !insn.addr !862
  %11 = inttoptr i32 %10 to i32*, !insn.addr !862
  store i32 0, i32* %11, align 4, !insn.addr !862
  %12 = icmp sgt i32 %thread_count, 0
  %13 = add i32 %9, -4
  %14 = inttoptr i32 %13 to i32*
  br i1 %12, label %dec_label_pc_32e1.lr.ph, label %dec_label_pc_32cd.dec_label_pc_332e_crit_edge, !insn.addr !863

dec_label_pc_32cd.dec_label_pc_332e_crit_edge:    ; preds = %dec_label_pc_32cd
  %.pre11 = add i32 %9, -8, !insn.addr !864
  %.pre13 = inttoptr i32 %.pre11 to i32*, !insn.addr !864
  %.pre15 = add i32 %9, -12, !insn.addr !865
  %.pre17 = inttoptr i32 %.pre15 to i32*, !insn.addr !865
  %.pre19 = add i32 %9, -16, !insn.addr !866
  %.pre21 = inttoptr i32 %.pre19 to i32*, !insn.addr !866
  store i32* %.pre21, i32** %.pre-phi22.reg2mem
  store i32* %.pre17, i32** %.pre-phi18.reg2mem
  store i32* %.pre13, i32** %.pre-phi14.reg2mem
  store i32* null, i32** %storemerge1.lcssa.reg2mem
  br label %dec_label_pc_332e

dec_label_pc_32e1.lr.ph:                          ; preds = %dec_label_pc_32cd
  %15 = ptrtoint i32* %stack_var_8 to i32, !insn.addr !867
  %16 = add i32 %1, -209, !insn.addr !868
  %17 = add i32 %9, -8
  %18 = inttoptr i32 %17 to i32*
  %19 = add i32 %9, -12
  %20 = inttoptr i32 %19 to i32*
  %21 = add i32 %9, -16
  %22 = inttoptr i32 %21 to i32*
  store i32 0, i32* %.reg2mem
  store i32* null, i32** %storemerge14.reg2mem
  br label %dec_label_pc_32e1

dec_label_pc_32e1:                                ; preds = %dec_label_pc_32e1.lr.ph, %dec_label_pc_3322
  %storemerge14.reload = load i32*, i32** %storemerge14.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %23 = mul i32 %.reload, 4, !insn.addr !869
  %24 = add i32 %23, %8, !insn.addr !870
  store i32 %15, i32* %14, align 4, !insn.addr !867
  store i32 %16, i32* %18, align 4, !insn.addr !871
  store i32 0, i32* %20, align 4, !insn.addr !872
  store i32 %24, i32* %22, align 4, !insn.addr !873
  %25 = call i32 @pthread_create(i32* %storemerge14.reload, i32* nonnull @0, i32* (i32*)* bitcast (i32* @0 to i32* (i32*)*), i32* nonnull @0), !insn.addr !874
  %26 = icmp eq i32 %25, 0, !insn.addr !875
  br i1 %26, label %dec_label_pc_3322, label %dec_label_pc_330a, !insn.addr !876

dec_label_pc_330a:                                ; preds = %dec_label_pc_32e1
  store i32 %8, i32* %22, align 4, !insn.addr !877
  call void @free(i32* nonnull @0), !insn.addr !878
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !879
  br label %dec_label_pc_33b7, !insn.addr !879

dec_label_pc_3322:                                ; preds = %dec_label_pc_32e1
  %27 = add nuw nsw i32 %.reload, 1, !insn.addr !880
  %28 = inttoptr i32 %27 to i32*
  %29 = icmp slt i32 %27, %thread_count, !insn.addr !863
  store i32 %27, i32* %.reg2mem, !insn.addr !863
  store i32* %28, i32** %storemerge14.reg2mem, !insn.addr !863
  store i32* %22, i32** %.pre-phi22.reg2mem, !insn.addr !863
  store i32* %20, i32** %.pre-phi18.reg2mem, !insn.addr !863
  store i32* %18, i32** %.pre-phi14.reg2mem, !insn.addr !863
  store i32* %28, i32** %storemerge1.lcssa.reg2mem, !insn.addr !863
  br i1 %29, label %dec_label_pc_32e1, label %dec_label_pc_332e, !insn.addr !863

dec_label_pc_332e:                                ; preds = %dec_label_pc_3322, %dec_label_pc_32cd.dec_label_pc_332e_crit_edge
  %storemerge1.lcssa.reload = load i32*, i32** %storemerge1.lcssa.reg2mem
  %.pre-phi14.reload = load i32*, i32** %.pre-phi14.reg2mem
  %.pre-phi18.reload = load i32*, i32** %.pre-phi18.reg2mem
  %.pre-phi22.reload = load i32*, i32** %.pre-phi22.reg2mem
  store i32 0, i32* %14, align 4, !insn.addr !881
  %30 = add i32 %1, -64, !insn.addr !882
  store i32 %30, i32* %.pre-phi14.reload, align 4, !insn.addr !864
  store i32 0, i32* %.pre-phi18.reload, align 4, !insn.addr !865
  %31 = ptrtoint i32* %stack_var_-36 to i32, !insn.addr !866
  store i32 %31, i32* %.pre-phi22.reload, align 4, !insn.addr !866
  %32 = call i32 @pthread_create(i32* %storemerge1.lcssa.reload, i32* nonnull @0, i32* (i32*)* bitcast (i32* @0 to i32* (i32*)*), i32* nonnull @0), !insn.addr !883
  %33 = icmp eq i32 %32, 0, !insn.addr !884
  %34 = icmp eq i1 %33, false, !insn.addr !885
  br i1 %34, label %dec_label_pc_335a, label %dec_label_pc_3349, !insn.addr !885

dec_label_pc_3349:                                ; preds = %dec_label_pc_332e
  %35 = load i32, i32* %stack_var_-36, align 4, !insn.addr !886
  store i32 0, i32* %.pre-phi18.reload, align 4, !insn.addr !887
  store i32 %35, i32* %.pre-phi22.reload, align 4, !insn.addr !888
  %36 = call i32 @pthread_join(i32 ptrtoint (i32* @0 to i32), i32** bitcast (i32* @0 to i32**)), !insn.addr !889
  br label %dec_label_pc_335a, !insn.addr !890

dec_label_pc_335a:                                ; preds = %dec_label_pc_3349, %dec_label_pc_332e
  store i32 0, i32* %storemerge3.reg2mem, !insn.addr !891
  store i32* null, i32** %storemerge.lcssa.reg2mem, !insn.addr !891
  br i1 %12, label %dec_label_pc_3363, label %dec_label_pc_338e, !insn.addr !891

dec_label_pc_3363:                                ; preds = %dec_label_pc_335a, %dec_label_pc_3363
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %37 = mul i32 %storemerge3.reload, 4, !insn.addr !892
  %38 = add i32 %37, %8, !insn.addr !893
  %39 = inttoptr i32 %38 to i32*, !insn.addr !894
  %40 = load i32, i32* %39, align 4, !insn.addr !894
  store i32 0, i32* %.pre-phi18.reload, align 4, !insn.addr !895
  store i32 %40, i32* %.pre-phi22.reload, align 4, !insn.addr !896
  %41 = call i32 @pthread_join(i32 %storemerge3.reload, i32** bitcast (i32* @0 to i32**)), !insn.addr !897
  %42 = add nuw nsw i32 %storemerge3.reload, 1, !insn.addr !898
  %exitcond = icmp eq i32 %42, %thread_count
  store i32 %42, i32* %storemerge3.reg2mem, !insn.addr !891
  br i1 %exitcond, label %dec_label_pc_3386.dec_label_pc_338e_crit_edge, label %dec_label_pc_3363, !insn.addr !891

dec_label_pc_3386.dec_label_pc_338e_crit_edge:    ; preds = %dec_label_pc_3363
  %phitmp = inttoptr i32 %thread_count to i32*
  store i32* %phitmp, i32** %storemerge.lcssa.reg2mem
  br label %dec_label_pc_338e

dec_label_pc_338e:                                ; preds = %dec_label_pc_3386.dec_label_pc_338e_crit_edge, %dec_label_pc_335a
  %storemerge.lcssa.reload = load i32*, i32** %storemerge.lcssa.reg2mem
  %43 = load i32, i32* %11, align 4, !insn.addr !899
  store i32 %8, i32* %.pre-phi22.reload, align 4, !insn.addr !900
  call void @free(i32* %storemerge.lcssa.reload), !insn.addr !901
  %44 = icmp slt i32 %43, 1, !insn.addr !902
  %. = select i1 %44, i32 -3, i32 42
  store i32 %., i32* %eax.0.reg2mem, !insn.addr !903
  br label %dec_label_pc_33b7, !insn.addr !903

dec_label_pc_33b7:                                ; preds = %dec_label_pc_338e, %dec_label_pc_3287, %dec_label_pc_330a
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %45 = call i32 @__readgsdword(i32 20), !insn.addr !904
  %46 = icmp eq i32 %3, %45, !insn.addr !904
  store i32 %eax.0.reload, i32* %eax.1.reg2mem, !insn.addr !905
  br i1 %46, label %dec_label_pc_33c8, label %dec_label_pc_33c3, !insn.addr !905

dec_label_pc_33c3:                                ; preds = %dec_label_pc_33b7
  %47 = call i32 @__stack_chk_fail_local(), !insn.addr !906
  store i32 %47, i32* %eax.1.reg2mem, !insn.addr !906
  br label %dec_label_pc_33c8, !insn.addr !906

dec_label_pc_33c8:                                ; preds = %dec_label_pc_33c3, %dec_label_pc_33b7
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !907

; uselistorder directives
  uselistorder i32 %storemerge3.reload, { 1, 0, 2 }
  uselistorder i32 %9, { 3, 4, 5, 0, 1, 2, 6 }
  uselistorder i32 %8, { 2, 0, 3, 1 }
  uselistorder i32* %5, { 1, 0 }
  uselistorder i32 %1, { 2, 3, 1, 0 }
  uselistorder i32* %.reg2mem, { 1, 0, 2 }
  uselistorder i32** %storemerge14.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder i32** %storemerge.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i32* %eax.0.reg2mem, { 0, 1, 3, 2 }
  uselistorder i32 %thread_count, { 1, 2, 4, 3, 0 }
  uselistorder label %dec_label_pc_33b7, { 0, 2, 1 }
  uselistorder label %dec_label_pc_3363, { 1, 0 }
  uselistorder label %dec_label_pc_32e1, { 1, 0 }
}

define i32 @call_atomic_ops() local_unnamed_addr {
dec_label_pc_33cd:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !908
  %3 = call i32 @param_atomic_ops(i32 4, i32 ptrtoint ([4 x i8]* @global_var_1f4 to i32)), !insn.addr !909
  ret i32 %3, !insn.addr !910
}

define i8* @thread_tls_test(i8* %arg) local_unnamed_addr {
dec_label_pc_33f5:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !911
  %3 = call i32 @__readgsdword(i32 -36), !insn.addr !912
  %4 = call i32 @__readgsdword(i32 -36), !insn.addr !913
  %5 = add i32 %4, 50, !insn.addr !914
  call void @__writegsdword(i32 -36, i32 %5), !insn.addr !915
  %6 = call i32 @__readgsdword(i32 0), !insn.addr !916
  %7 = add i32 %6, -32, !insn.addr !917
  %8 = inttoptr i32 %7 to i8*, !insn.addr !918
  %9 = call i8* @strncpy(i8* %8, i8* bitcast (i32* @0 to i8*), i32 ptrtoint (i32* @0 to i32)), !insn.addr !919
  %10 = call i32* @malloc(i32 8), !insn.addr !920
  %11 = ptrtoint i32* %10 to i32, !insn.addr !920
  store i32 %3, i32* %10, align 4, !insn.addr !921
  %12 = add i32 %11, 4, !insn.addr !922
  %13 = call i32 @__readgsdword(i32 -36), !insn.addr !923
  %14 = inttoptr i32 %12 to i32*, !insn.addr !924
  store i32 %13, i32* %14, align 4, !insn.addr !924
  %15 = bitcast i32* %10 to i8*, !insn.addr !925
  ret i8* %15, !insn.addr !925
}

define i32 @param_thread_local_storage(i32 %thread_count) local_unnamed_addr {
dec_label_pc_3477:
  %0 = alloca i32
  %eax.1.reg2mem = alloca i32, !insn.addr !926
  %eax.0.reg2mem = alloca i32, !insn.addr !926
  %storemerge.lcssa.reg2mem = alloca i32*, !insn.addr !926
  %tids_-44.0.lcssa.reg2mem = alloca i32, !insn.addr !926
  %total_final_-48.0.lcssa.reg2mem = alloca i32, !insn.addr !926
  %total_final_-48.07.reg2mem = alloca i32, !insn.addr !926
  %tids_-44.08.reg2mem = alloca i32, !insn.addr !926
  %.reg2mem = alloca i32, !insn.addr !926
  %storemerge16.reg2mem = alloca i32, !insn.addr !926
  %storemerge212.reg2mem = alloca i32, !insn.addr !926
  %storemerge313.reg2mem = alloca i32, !insn.addr !926
  %1 = load i32, i32* %0
  %stack_var_-64 = alloca i32, align 4
  %stack_var_-76 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !927
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !928
  %4 = mul i32 %thread_count, 4, !insn.addr !929
  %5 = call i32* @malloc(i32 %4), !insn.addr !930
  %6 = call i32* @malloc(i32 %4), !insn.addr !931
  %7 = icmp ne i32* %5, null, !insn.addr !932
  %8 = icmp eq i32* %6, null, !insn.addr !933
  %9 = icmp eq i1 %8, false, !insn.addr !934
  %or.cond = icmp eq i1 %7, %9
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !935
  br i1 %or.cond, label %dec_label_pc_352b.preheader, label %dec_label_pc_36b3, !insn.addr !935

dec_label_pc_352b.preheader:                      ; preds = %dec_label_pc_3477
  %10 = ptrtoint i32* %5 to i32, !insn.addr !930
  %11 = ptrtoint i32* %6 to i32, !insn.addr !931
  %12 = ptrtoint i32* %stack_var_-76 to i32, !insn.addr !936
  %13 = icmp sgt i32 %thread_count, 0
  %14 = add i32 %12, -16
  %15 = inttoptr i32 %14 to i32*
  store i32 0, i32* %total_final_-48.0.lcssa.reg2mem, !insn.addr !937
  store i32 0, i32* %tids_-44.0.lcssa.reg2mem, !insn.addr !937
  store i32* null, i32** %storemerge.lcssa.reg2mem, !insn.addr !937
  br i1 %13, label %dec_label_pc_34e2.lr.ph, label %dec_label_pc_3666, !insn.addr !937

dec_label_pc_34e2.lr.ph:                          ; preds = %dec_label_pc_352b.preheader
  %16 = add i32 %12, -4
  %17 = inttoptr i32 %16 to i32*
  %18 = add i32 %1, 3743
  %19 = add i32 %12, -8
  %20 = inttoptr i32 %19 to i32*
  %21 = add i32 %12, -12
  %22 = inttoptr i32 %21 to i32*
  store i32 0, i32* %storemerge313.reg2mem
  br label %dec_label_pc_34e2

dec_label_pc_34e2:                                ; preds = %dec_label_pc_34e2, %dec_label_pc_34e2.lr.ph
  %storemerge313.reload = load i32, i32* %storemerge313.reg2mem
  %23 = mul i32 %storemerge313.reload, 4, !insn.addr !938
  %24 = add i32 %23, %11, !insn.addr !939
  store i32 16, i32* %15, align 4, !insn.addr !940
  %25 = call i32* @malloc(i32 %storemerge313.reload), !insn.addr !941
  %26 = ptrtoint i32* %25 to i32, !insn.addr !941
  %27 = inttoptr i32 %24 to i32*, !insn.addr !942
  store i32 %26, i32* %27, align 4, !insn.addr !942
  store i32 %storemerge313.reload, i32* %17, align 4, !insn.addr !943
  store i32 %18, i32* %20, align 4, !insn.addr !944
  store i32 16, i32* %22, align 4, !insn.addr !945
  store i32 %26, i32* %15, align 4, !insn.addr !946
  %28 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* bitcast (i32* @0 to i8*), i32 ptrtoint (i32* @0 to i32), i8* bitcast (i32* @0 to i8*)), !insn.addr !947
  %29 = add nuw nsw i32 %storemerge313.reload, 1, !insn.addr !948
  %exitcond22 = icmp eq i32 %29, %thread_count
  store i32 %29, i32* %storemerge313.reg2mem, !insn.addr !937
  br i1 %exitcond22, label %dec_label_pc_353f.lr.ph, label %dec_label_pc_34e2, !insn.addr !937

dec_label_pc_353f.lr.ph:                          ; preds = %dec_label_pc_34e2
  %30 = add i32 %1, -147, !insn.addr !949
  store i32 0, i32* %storemerge212.reg2mem
  br label %dec_label_pc_353f

dec_label_pc_353f:                                ; preds = %dec_label_pc_353f.lr.ph, %dec_label_pc_35ce
  %storemerge212.reload = load i32, i32* %storemerge212.reg2mem
  %31 = mul i32 %storemerge212.reload, 4, !insn.addr !950
  %32 = add i32 %31, %11, !insn.addr !951
  %33 = inttoptr i32 %32 to i32*, !insn.addr !952
  %34 = load i32, i32* %33, align 4, !insn.addr !952
  %35 = add i32 %31, %10, !insn.addr !953
  store i32 %34, i32* %17, align 4, !insn.addr !954
  store i32 %30, i32* %20, align 4, !insn.addr !955
  store i32 0, i32* %22, align 4, !insn.addr !956
  store i32 %35, i32* %15, align 4, !insn.addr !957
  %36 = inttoptr i32 %storemerge212.reload to i32*, !insn.addr !958
  %37 = call i32 @pthread_create(i32* %36, i32* nonnull @0, i32* (i32*)* bitcast (i32* @0 to i32* (i32*)*), i32* nonnull @0), !insn.addr !958
  %38 = icmp eq i32 %37, 0, !insn.addr !959
  %39 = add nuw nsw i32 %storemerge212.reload, 1
  store i32 0, i32* %storemerge16.reg2mem, !insn.addr !960
  br i1 %38, label %dec_label_pc_35ce, label %dec_label_pc_357f, !insn.addr !960

dec_label_pc_357f:                                ; preds = %dec_label_pc_353f, %dec_label_pc_357f
  %storemerge16.reload = load i32, i32* %storemerge16.reg2mem
  %40 = mul i32 %storemerge16.reload, 4, !insn.addr !961
  %41 = add i32 %40, %11, !insn.addr !962
  %42 = inttoptr i32 %41 to i32*, !insn.addr !963
  %43 = load i32, i32* %42, align 4, !insn.addr !963
  store i32 %43, i32* %15, align 4, !insn.addr !964
  %44 = inttoptr i32 %storemerge16.reload to i32*, !insn.addr !965
  call void @free(i32* %44), !insn.addr !965
  %45 = add nuw nsw i32 %storemerge16.reload, 1, !insn.addr !966
  %exitcond21 = icmp eq i32 %45, %39
  store i32 %45, i32* %storemerge16.reg2mem, !insn.addr !967
  br i1 %exitcond21, label %dec_label_pc_35a8, label %dec_label_pc_357f, !insn.addr !967

dec_label_pc_35a8:                                ; preds = %dec_label_pc_357f
  %phitmp16 = inttoptr i32 %39 to i32*
  store i32 %11, i32* %15, align 4, !insn.addr !968
  call void @free(i32* %phitmp16), !insn.addr !969
  store i32 %10, i32* %15, align 4, !insn.addr !970
  call void @free(i32* nonnull @0), !insn.addr !971
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !972
  br label %dec_label_pc_36b3, !insn.addr !972

dec_label_pc_35ce:                                ; preds = %dec_label_pc_353f
  %46 = icmp slt i32 %39, %thread_count, !insn.addr !973
  store i32 %39, i32* %storemerge212.reg2mem, !insn.addr !973
  br i1 %46, label %dec_label_pc_353f, label %dec_label_pc_35f5.lr.ph, !insn.addr !973

dec_label_pc_35f5.lr.ph:                          ; preds = %dec_label_pc_35ce
  %47 = ptrtoint i32* %stack_var_-64 to i32, !insn.addr !974
  store i32 0, i32* %.reg2mem
  store i32 0, i32* %tids_-44.08.reg2mem
  store i32 0, i32* %total_final_-48.07.reg2mem
  br label %dec_label_pc_35f5

dec_label_pc_35f5:                                ; preds = %dec_label_pc_35f5, %dec_label_pc_35f5.lr.ph
  %total_final_-48.07.reload = load i32, i32* %total_final_-48.07.reg2mem
  %tids_-44.08.reload = load i32, i32* %tids_-44.08.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %48 = mul i32 %.reload, 4, !insn.addr !975
  %49 = add i32 %48, %10, !insn.addr !976
  %50 = inttoptr i32 %49 to i32*, !insn.addr !977
  %51 = load i32, i32* %50, align 4, !insn.addr !977
  store i32 %47, i32* %22, align 4, !insn.addr !974
  store i32 %51, i32* %15, align 4, !insn.addr !978
  %52 = call i32 @pthread_join(i32 %.reload, i32** bitcast (i32* @0 to i32**)), !insn.addr !979
  %53 = load i32, i32* %stack_var_-64, align 4, !insn.addr !980
  %54 = inttoptr i32 %53 to i32*, !insn.addr !981
  %55 = load i32, i32* %54, align 4, !insn.addr !981
  %56 = add i32 %55, %total_final_-48.07.reload, !insn.addr !982
  %57 = add i32 %53, 4, !insn.addr !983
  %58 = inttoptr i32 %57 to i32*, !insn.addr !984
  %59 = load i32, i32* %58, align 4, !insn.addr !984
  %60 = add i32 %59, %tids_-44.08.reload, !insn.addr !985
  store i32 %53, i32* %15, align 4, !insn.addr !986
  %61 = inttoptr i32 %56 to i32*, !insn.addr !987
  call void @free(i32* %61), !insn.addr !987
  %62 = add i32 %48, %11, !insn.addr !988
  %63 = inttoptr i32 %62 to i32*, !insn.addr !989
  %64 = load i32, i32* %63, align 4, !insn.addr !989
  store i32 %64, i32* %15, align 4, !insn.addr !990
  call void @free(i32* nonnull @0), !insn.addr !991
  %65 = add nuw nsw i32 %.reload, 1, !insn.addr !992
  %exitcond = icmp eq i32 %65, %thread_count
  store i32 %65, i32* %.reg2mem, !insn.addr !993
  store i32 %60, i32* %tids_-44.08.reg2mem, !insn.addr !993
  store i32 %56, i32* %total_final_-48.07.reg2mem, !insn.addr !993
  br i1 %exitcond, label %dec_label_pc_365e.dec_label_pc_3666_crit_edge, label %dec_label_pc_35f5, !insn.addr !993

dec_label_pc_365e.dec_label_pc_3666_crit_edge:    ; preds = %dec_label_pc_35f5
  %phitmp = inttoptr i32 %thread_count to i32*
  store i32 %56, i32* %total_final_-48.0.lcssa.reg2mem
  store i32 %60, i32* %tids_-44.0.lcssa.reg2mem
  store i32* %phitmp, i32** %storemerge.lcssa.reg2mem
  br label %dec_label_pc_3666

dec_label_pc_3666:                                ; preds = %dec_label_pc_352b.preheader, %dec_label_pc_365e.dec_label_pc_3666_crit_edge
  %storemerge.lcssa.reload = load i32*, i32** %storemerge.lcssa.reg2mem
  %tids_-44.0.lcssa.reload = load i32, i32* %tids_-44.0.lcssa.reg2mem
  %total_final_-48.0.lcssa.reload = load i32, i32* %total_final_-48.0.lcssa.reg2mem
  store i32 %11, i32* %15, align 4, !insn.addr !994
  call void @free(i32* %storemerge.lcssa.reload), !insn.addr !995
  store i32 %10, i32* %15, align 4, !insn.addr !996
  call void @free(i32* nonnull @0), !insn.addr !997
  %66 = mul i32 %thread_count, 100
  %67 = icmp eq i32 %total_final_-48.0.lcssa.reload, %66, !insn.addr !998
  %68 = icmp eq i1 %67, false, !insn.addr !999
  br i1 %68, label %dec_label_pc_36ae, label %dec_label_pc_369f, !insn.addr !999

dec_label_pc_369f:                                ; preds = %dec_label_pc_3666
  %69 = mul i32 %thread_count, 150, !insn.addr !1000
  %70 = icmp eq i32 %69, %tids_-44.0.lcssa.reload, !insn.addr !1001
  %71 = icmp eq i1 %70, false, !insn.addr !1002
  store i32 42, i32* %eax.0.reg2mem, !insn.addr !1002
  br i1 %71, label %dec_label_pc_36ae, label %dec_label_pc_36b3, !insn.addr !1002

dec_label_pc_36ae:                                ; preds = %dec_label_pc_369f, %dec_label_pc_3666
  store i32 -3, i32* %eax.0.reg2mem, !insn.addr !1003
  br label %dec_label_pc_36b3, !insn.addr !1003

dec_label_pc_36b3:                                ; preds = %dec_label_pc_369f, %dec_label_pc_3477, %dec_label_pc_36ae, %dec_label_pc_35a8
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %72 = call i32 @__readgsdword(i32 20), !insn.addr !1004
  %73 = icmp eq i32 %3, %72, !insn.addr !1004
  store i32 %eax.0.reload, i32* %eax.1.reg2mem, !insn.addr !1005
  br i1 %73, label %dec_label_pc_36c4, label %dec_label_pc_36bf, !insn.addr !1005

dec_label_pc_36bf:                                ; preds = %dec_label_pc_36b3
  %74 = call i32 @__stack_chk_fail_local(), !insn.addr !1006
  store i32 %74, i32* %eax.1.reg2mem, !insn.addr !1006
  br label %dec_label_pc_36c4, !insn.addr !1006

dec_label_pc_36c4:                                ; preds = %dec_label_pc_36bf, %dec_label_pc_36b3
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !1007

; uselistorder directives
  uselistorder i32 %53, { 2, 0, 1 }
  uselistorder i32 %48, { 1, 0 }
  uselistorder i32 %storemerge16.reload, { 1, 0, 2 }
  uselistorder i32 %39, { 0, 3, 2, 1 }
  uselistorder i32 %31, { 1, 0 }
  uselistorder i32* %15, { 0, 1, 4, 3, 2, 8, 7, 6, 5, 9, 10 }
  uselistorder i32 %11, { 4, 0, 5, 1, 2, 3 }
  uselistorder i32 %10, { 2, 0, 3, 1 }
  uselistorder i32* %6, { 1, 0 }
  uselistorder i32* %5, { 1, 0 }
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32 %1, { 1, 2, 0 }
  uselistorder i32* %storemerge313.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge212.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge16.reg2mem, { 2, 0, 1 }
  uselistorder i32* %.reg2mem, { 1, 0, 2 }
  uselistorder i32* %tids_-44.08.reg2mem, { 1, 0, 2 }
  uselistorder i32* %total_final_-48.07.reg2mem, { 1, 0, 2 }
  uselistorder i32* %total_final_-48.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i32* %tids_-44.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i32** %storemerge.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i32* %eax.0.reg2mem, { 0, 3, 1, 4, 2 }
  uselistorder i32 ()* @__stack_chk_fail_local, { 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 -3, { 0, 6, 7, 1, 2, 3, 8, 4, 5 }
  uselistorder i32 42, { 0, 3, 14, 4, 1, 8, 12, 5, 6, 9, 7, 10, 2, 11, 13 }
  uselistorder i32 (i32, i32**)* @pthread_join, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder i32 -2, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 10 }
  uselistorder void (i32*)* @free, { 11, 10, 13, 12, 8, 7, 9, 6, 5, 4, 3, 2, 1, 0, 14 }
  uselistorder i32 (i32*, i32*, i32* (i32*)*, i32*)* @pthread_create, { 7, 5, 6, 4, 3, 2, 1, 0, 8 }
  uselistorder i32* (i32*)* bitcast (i32* @0 to i32* (i32*)*), { 0, 2, 1, 3, 4 }
  uselistorder i32 16, { 2, 3, 0, 1 }
  uselistorder i32 -12, { 1, 2, 0, 3, 4, 5, 6 }
  uselistorder i32 -8, { 1, 2, 0, 3, 4 }
  uselistorder i32 -16, { 3, 4, 0, 5, 1, 2, 6, 7, 8, 10, 9 }
  uselistorder i32* null, { 0, 7, 8, 1, 3, 2, 9, 10, 12, 11, 13, 4, 14, 15, 6, 5, 16, 17 }
  uselistorder i32* (i32)* @malloc, { 8, 7, 6, 5, 4, 3, 2, 1, 0, 9 }
  uselistorder i32 20, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 0, 30, 31, 32 }
  uselistorder i32 %thread_count, { 6, 7, 1, 3, 5, 2, 4, 0 }
  uselistorder label %dec_label_pc_36b3, { 2, 0, 3, 1 }
  uselistorder label %dec_label_pc_3666, { 1, 0 }
  uselistorder label %dec_label_pc_357f, { 1, 0 }
  uselistorder label %dec_label_pc_353f, { 1, 0 }
}

define i32 @call_thread_local_storage() local_unnamed_addr {
dec_label_pc_36cb:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !1008
  %3 = call i32 @param_thread_local_storage(i32 4), !insn.addr !1009
  ret i32 %3, !insn.addr !1010

; uselistorder directives
  uselistorder i32 4, { 16, 21, 0, 1, 2, 3, 4, 22, 17, 5, 6, 7, 23, 18, 8, 9, 10, 11, 12, 24, 19, 25, 20, 13, 14, 15 }
}

define void @test_thread_concurrency() local_unnamed_addr {
dec_label_pc_36ee:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !1011
  %3 = add i32 %1, 3123, !insn.addr !1012
  %4 = inttoptr i32 %3 to i8*, !insn.addr !1013
  %5 = call i32 @puts(i8* %4), !insn.addr !1014
  %6 = call i32 @call_pthread_create(), !insn.addr !1015
  %7 = add i32 %1, 3153, !insn.addr !1016
  %8 = inttoptr i32 %7 to i8*, !insn.addr !1017
  %9 = call i32 (i8*, ...) @printf(i8* %8), !insn.addr !1018
  %10 = call i32 @call_pthread_join(), !insn.addr !1019
  %11 = add i32 %1, 3181, !insn.addr !1020
  %12 = inttoptr i32 %11 to i8*, !insn.addr !1021
  %13 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !1022
  %14 = call i32 @call_mutex_lock(), !insn.addr !1023
  %15 = add i32 %1, 3210, !insn.addr !1024
  %16 = inttoptr i32 %15 to i8*, !insn.addr !1025
  %17 = call i32 (i8*, ...) @printf(i8* %16), !insn.addr !1026
  %18 = call i32 @call_condition_variable(), !insn.addr !1027
  %19 = add i32 %1, 3238, !insn.addr !1028
  %20 = inttoptr i32 %19 to i8*, !insn.addr !1029
  %21 = call i32 (i8*, ...) @printf(i8* %20), !insn.addr !1030
  %22 = call i32 @call_atomic_ops(), !insn.addr !1031
  %23 = add i32 %1, 3266, !insn.addr !1032
  %24 = inttoptr i32 %23 to i8*, !insn.addr !1033
  %25 = call i32 (i8*, ...) @printf(i8* %24), !insn.addr !1034
  %26 = call i32 @call_thread_local_storage(), !insn.addr !1035
  %27 = add i32 %1, 3294, !insn.addr !1036
  %28 = inttoptr i32 %27 to i8*, !insn.addr !1037
  %29 = call i32 (i8*, ...) @printf(i8* %28), !insn.addr !1038
  ret void, !insn.addr !1039

; uselistorder directives
  uselistorder i32 %1, { 6, 5, 4, 3, 2, 1, 0, 7 }
  uselistorder i32 (i8*, ...)* @printf, { 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 26 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_37ac:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !1040
  call void @test_standard_library_functions(), !insn.addr !1041
  call void @test_system_calls(), !insn.addr !1042
  call void @test_thread_concurrency(), !insn.addr !1043
  ret i32 0, !insn.addr !1044

; uselistorder directives
  uselistorder i32 0, { 20, 2, 3, 4, 5, 62, 63, 6, 7, 0, 1, 22, 34, 64, 8, 67, 68, 69, 70, 65, 66, 9, 23, 59, 10, 24, 71, 72, 73, 74, 75, 29, 76, 11, 77, 78, 12, 25, 30, 79, 13, 26, 37, 38, 80, 81, 35, 36, 39, 40, 41, 82, 83, 14, 31, 15, 84, 85, 86, 87, 88, 89, 90, 91, 33, 92, 93, 94, 95, 96, 32, 97, 42, 43, 98, 99, 100, 101, 102, 44, 103, 104, 45, 46, 47, 48, 49, 50, 51, 105, 106, 107, 108, 109, 110, 52, 111, 112, 113, 114, 115, 116, 53, 54, 55, 17, 18, 16, 27, 56, 19, 28, 117, 118, 57, 58, 119, 120, 60, 121, 122, 61, 21 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.ax, { 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
}

define i32 @__x86.get_pc_thunk.ax(i32 %arg1) local_unnamed_addr {
dec_label_pc_37d6:
  ret i32 %arg1, !insn.addr !1045
}

define i32 @__stack_chk_fail_local() local_unnamed_addr {
dec_label_pc_37e0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !1046
  call void @__stack_chk_fail(), !insn.addr !1047
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !1048
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_3800:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !1049
  %ebx.0.reg2mem = alloca i32, !insn.addr !1049
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !1050
  %3 = add i32 %1, 13827, !insn.addr !1051
  %4 = inttoptr i32 %3 to i32*, !insn.addr !1051
  %5 = load i32, i32* %4, align 4, !insn.addr !1051
  %6 = icmp eq i32 %5, -1, !insn.addr !1052
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !1053
  store i32 -1, i32* %merge.reg2mem, !insn.addr !1053
  br i1 %6, label %dec_label_pc_383d, label %dec_label_pc_3830, !insn.addr !1053

dec_label_pc_3830:                                ; preds = %dec_label_pc_3800, %dec_label_pc_3830
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !1054
  %8 = inttoptr i32 %7 to i32*, !insn.addr !1054
  %9 = load i32, i32* %8, align 4, !insn.addr !1054
  %10 = icmp eq i32 %9, -1, !insn.addr !1055
  %11 = icmp eq i1 %10, false, !insn.addr !1056
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !1056
  store i32 %9, i32* %merge.reg2mem, !insn.addr !1056
  br i1 %11, label %dec_label_pc_3830, label %dec_label_pc_383d, !insn.addr !1056

dec_label_pc_383d:                                ; preds = %dec_label_pc_3830, %dec_label_pc_3800
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !1057

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 8, 9, 10, 2, 11, 12, 13, 14, 15, 5, 16, 1, 17, 18, 6, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 3, 47, 4, 7 }
  uselistorder i32 -4, { 7, 2, 3, 4, 5, 0, 1, 6 }
  uselistorder i32 -1, { 26, 0, 27, 1, 2, 3, 4, 5, 6, 30, 17, 31, 16, 7, 28, 22, 29, 8, 9, 10, 11, 23, 12, 18, 24, 19, 20, 13, 14, 25, 15, 21 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 3, 1, 0, 2, 4 }
  uselistorder i32* @0, { 22, 23, 21, 17, 18, 0, 13, 14, 20, 15, 16, 6, 7, 1, 19, 11, 12, 8, 9, 10, 2, 3, 5, 4 }
  uselistorder label %dec_label_pc_3830, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_384c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !1058
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !1059
  ret i32 %3, !insn.addr !1060

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 27, 1, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 0, 26 }
  uselistorder i32 1, { 73, 75, 74, 72, 71, 70, 69, 68, 209, 211, 210, 212, 159, 158, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 67, 66, 65, 148, 213, 214, 162, 161, 160, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 64, 63, 215, 216, 99, 98, 97, 62, 61, 165, 164, 163, 101, 100, 60, 217, 149, 59, 166, 102, 58, 57, 218, 219, 168, 167, 107, 106, 105, 104, 103, 56, 220, 221, 169, 108, 55, 54, 222, 223, 173, 176, 175, 174, 172, 171, 170, 112, 111, 110, 109, 53, 224, 114, 113, 52, 51, 179, 178, 177, 116, 115, 50, 49, 48, 47, 225, 180, 121, 120, 119, 118, 117, 46, 226, 45, 150, 44, 122, 43, 42, 151, 182, 152, 183, 181, 124, 123, 41, 40, 153, 188, 187, 186, 185, 184, 126, 125, 39, 38, 189, 128, 127, 37, 36, 154, 190, 129, 35, 34, 130, 33, 32, 31, 30, 227, 193, 192, 191, 132, 131, 29, 228, 135, 134, 133, 28, 27, 229, 137, 136, 26, 25, 155, 156, 157, 196, 195, 194, 139, 138, 24, 23, 140, 22, 21, 141, 20, 19, 18, 198, 200, 202, 203, 201, 199, 197, 142, 17, 146, 16, 205, 204, 143, 15, 14, 13, 12, 11, 147, 10, 207, 206, 144, 9, 8, 7, 6, 145, 5, 4, 3, 2, 208, 1, 0 }
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

declare void @__stack_chk_fail() local_unnamed_addr

declare void @rewind(%_IO_FILE*) local_unnamed_addr

declare i32 @wait(i32) local_unnamed_addr

declare i16 @htons(i16) local_unnamed_addr

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

declare void @__cxa_finalize(i32*) local_unnamed_addr

declare i32 @__asm_hlt() local_unnamed_addr

declare i32 @__readgsdword(i32) local_unnamed_addr

declare void @__writegsdword(i32, i32) local_unnamed_addr

!0 = !{i64 4104}
!1 = !{i64 4127}
!2 = !{i64 4132}
!3 = !{i64 4141}
!4 = !{i64 5108}
!5 = !{i64 5124}
!6 = !{i64 5140}
!7 = !{i64 5156}
!8 = !{i64 5172}
!9 = !{i64 5188}
!10 = !{i64 5204}
!11 = !{i64 5220}
!12 = !{i64 5236}
!13 = !{i64 5252}
!14 = !{i64 5268}
!15 = !{i64 5284}
!16 = !{i64 5300}
!17 = !{i64 5316}
!18 = !{i64 5332}
!19 = !{i64 5348}
!20 = !{i64 5364}
!21 = !{i64 5380}
!22 = !{i64 5396}
!23 = !{i64 5412}
!24 = !{i64 5428}
!25 = !{i64 5444}
!26 = !{i64 5460}
!27 = !{i64 5476}
!28 = !{i64 5492}
!29 = !{i64 5508}
!30 = !{i64 5524}
!31 = !{i64 5540}
!32 = !{i64 5556}
!33 = !{i64 5572}
!34 = !{i64 5588}
!35 = !{i64 5604}
!36 = !{i64 5620}
!37 = !{i64 5636}
!38 = !{i64 5652}
!39 = !{i64 5668}
!40 = !{i64 5684}
!41 = !{i64 5700}
!42 = !{i64 5716}
!43 = !{i64 5732}
!44 = !{i64 5748}
!45 = !{i64 5764}
!46 = !{i64 5780}
!47 = !{i64 5796}
!48 = !{i64 5812}
!49 = !{i64 5828}
!50 = !{i64 5844}
!51 = !{i64 5860}
!52 = !{i64 5876}
!53 = !{i64 5892}
!54 = !{i64 5908}
!55 = !{i64 5924}
!56 = !{i64 5940}
!57 = !{i64 5956}
!58 = !{i64 5972}
!59 = !{i64 5988}
!60 = !{i64 6004}
!61 = !{i64 6020}
!62 = !{i64 6036}
!63 = !{i64 6052}
!64 = !{i64 6079}
!65 = !{i64 6096}
!66 = !{i64 6102}
!67 = !{i64 6107}
!68 = !{i64 6111}
!69 = !{i64 6115}
!70 = !{i64 6128}
!71 = !{i64 6145}
!72 = !{i64 6184}
!73 = !{i64 6192}
!74 = !{i64 6262}
!75 = !{i64 6272}
!76 = !{i64 6280}
!77 = !{i64 6296}
!78 = !{i64 6303}
!79 = !{i64 6305}
!80 = !{i64 6311}
!81 = !{i64 6313}
!82 = !{i64 6318}
!83 = !{i64 6326}
!84 = !{i64 6331}
!85 = !{i64 6390}
!86 = !{i64 6395}
!87 = !{i64 6409}
!88 = !{i64 6420}
!89 = !{i64 6428}
!90 = !{i64 6432}
!91 = !{i64 6444}
!92 = !{i64 6464}
!93 = !{i64 6478}
!94 = !{i64 6490}
!95 = !{i64 6491}
!96 = !{i64 6501}
!97 = !{i64 6511}
!98 = !{i64 6526}
!99 = !{i64 6532}
!100 = !{i64 6537}
!101 = !{i64 6545}
!102 = !{i64 6548}
!103 = !{i64 6554}
!104 = !{i64 6561}
!105 = !{i64 6563}
!106 = !{i64 6569}
!107 = !{i64 6581}
!108 = !{i64 6602}
!109 = !{i64 6613}
!110 = !{i64 6617}
!111 = !{i64 6648}
!112 = !{i64 6660}
!113 = !{i64 6674}
!114 = !{i64 6680}
!115 = !{i64 6681}
!116 = !{i64 6687}
!117 = !{i64 6688}
!118 = !{i64 6702}
!119 = !{i64 6708}
!120 = !{i64 6716}
!121 = !{i64 6730}
!122 = !{i64 6736}
!123 = !{i64 6737}
!124 = !{i64 6743}
!125 = !{i64 6744}
!126 = !{i64 6761}
!127 = !{i64 6766}
!128 = !{i64 6772}
!129 = !{i64 6784}
!130 = !{i64 6802}
!131 = !{i64 6820}
!132 = !{i64 6831}
!133 = !{i64 6841}
!134 = !{i64 6853}
!135 = !{i64 6856}
!136 = !{i64 6865}
!137 = !{i64 6877}
!138 = !{i64 6901}
!139 = !{i64 6916}
!140 = !{i64 6917}
!141 = !{i64 6927}
!142 = !{i64 6937}
!143 = !{i64 6948}
!144 = !{i64 6983}
!145 = !{i64 7031}
!146 = !{i64 7039}
!147 = !{i64 7055}
!148 = !{i64 7062}
!149 = !{i64 7064}
!150 = !{i64 7070}
!151 = !{i64 7082}
!152 = !{i64 7106}
!153 = !{i64 7117}
!154 = !{i64 7121}
!155 = !{i64 7152}
!156 = !{i64 7153}
!157 = !{i64 7163}
!158 = !{i64 7173}
!159 = !{i64 7184}
!160 = !{i64 7205}
!161 = !{i64 7226}
!162 = !{i64 7260}
!163 = !{i64 7284}
!164 = !{i64 7292}
!165 = !{i64 7298}
!166 = !{i64 7301}
!167 = !{i64 7306}
!168 = !{i64 7313}
!169 = !{i64 7315}
!170 = !{i64 7321}
!171 = !{i64 7333}
!172 = !{i64 7352}
!173 = !{i64 7358}
!174 = !{i64 7361}
!175 = !{i64 7379}
!176 = !{i64 7390}
!177 = !{i64 7403}
!178 = !{i64 7409}
!179 = !{i64 7412}
!180 = !{i64 7427}
!181 = !{i64 7428}
!182 = !{i64 7439}
!183 = !{i64 7455}
!184 = !{i64 7475}
!185 = !{i64 7481}
!186 = !{i64 7487}
!187 = !{i64 7498}
!188 = !{i64 7502}
!189 = !{i64 7522}
!190 = !{i64 7529}
!191 = !{i64 7531}
!192 = !{i64 7540}
!193 = !{i64 7551}
!194 = !{i64 7564}
!195 = !{i64 7570}
!196 = !{i64 7571}
!197 = !{i64 7580}
!198 = !{i64 7581}
!199 = !{i64 7592}
!200 = !{i64 7606}
!201 = !{i64 7612}
!202 = !{i64 7616}
!203 = !{i64 7627}
!204 = !{i64 7631}
!205 = !{i64 7646}
!206 = !{i64 7663}
!207 = !{i64 7671}
!208 = !{i64 7678}
!209 = !{i64 7689}
!210 = !{i64 7702}
!211 = !{i64 7708}
!212 = !{i64 7709}
!213 = !{i64 7720}
!214 = !{i64 7739}
!215 = !{i64 7740}
!216 = !{i64 7751}
!217 = !{i64 7765}
!218 = !{i64 7768}
!219 = !{i64 7791}
!220 = !{i64 7797}
!221 = !{i64 7801}
!222 = !{i64 7812}
!223 = !{i64 7816}
!224 = !{i64 7779}
!225 = !{i64 7831}
!226 = !{i64 7834}
!227 = !{i64 7851}
!228 = !{i64 7859}
!229 = !{i64 7868}
!230 = !{i64 7876}
!231 = !{i64 7879}
!232 = !{i64 7887}
!233 = !{i64 7900}
!234 = !{i64 7908}
!235 = !{i64 7928}
!236 = !{i64 7936}
!237 = !{i64 7939}
!238 = !{i64 7942}
!239 = !{i64 7945}
!240 = !{i64 7947}
!241 = !{i64 7956}
!242 = !{i64 7970}
!243 = !{i64 7978}
!244 = !{i64 7981}
!245 = !{i64 7984}
!246 = !{i64 7996}
!247 = !{i64 8004}
!248 = !{i64 8006}
!249 = !{i64 8015}
!250 = !{i64 8023}
!251 = !{i64 8030}
!252 = !{i64 8032}
!253 = !{i64 8041}
!254 = !{i64 8052}
!255 = !{i64 8065}
!256 = !{i64 8071}
!257 = !{i64 8072}
!258 = !{i64 8081}
!259 = !{i64 8082}
!260 = !{i64 8093}
!261 = !{i64 8107}
!262 = !{i64 8114}
!263 = !{i64 8125}
!264 = !{i64 8129}
!265 = !{i64 8185}
!266 = !{i64 8188}
!267 = !{i64 8157}
!268 = !{i64 8164}
!269 = !{i64 8174}
!270 = !{i64 8176}
!271 = !{i64 8178}
!272 = !{i64 8193}
!273 = !{i64 8203}
!274 = !{i64 8213}
!275 = !{i64 8215}
!276 = !{i64 8217}
!277 = !{i64 8228}
!278 = !{i64 8243}
!279 = !{i64 8250}
!280 = !{i64 8261}
!281 = !{i64 8276}
!282 = !{i64 8285}
!283 = !{i64 8286}
!284 = !{i64 8297}
!285 = !{i64 8320}
!286 = !{i64 8374}
!287 = !{i64 8377}
!288 = !{i64 8350}
!289 = !{i64 8356}
!290 = !{i64 8358}
!291 = !{i64 8364}
!292 = !{i64 8367}
!293 = !{i64 8386}
!294 = !{i64 8387}
!295 = !{i64 8397}
!296 = !{i64 8407}
!297 = !{i64 8442}
!298 = !{i64 8446}
!299 = !{i64 8392}
!300 = !{i64 8430}
!301 = !{i64 8438}
!302 = !{i64 8457}
!303 = !{i64 8465}
!304 = !{i64 8471}
!305 = !{i64 8476}
!306 = !{i64 8483}
!307 = !{i64 8485}
!308 = !{i64 8491}
!309 = !{i64 8503}
!310 = !{i64 8531}
!311 = !{i64 8542}
!312 = !{i64 8567}
!313 = !{i64 8573}
!314 = !{i64 8584}
!315 = !{i64 8612}
!316 = !{i64 8618}
!317 = !{i64 8629}
!318 = !{i64 8639}
!319 = !{i64 8651}
!320 = !{i64 8657}
!321 = !{i64 8660}
!322 = !{i64 8663}
!323 = !{i64 8678}
!324 = !{i64 8690}
!325 = !{i64 8704}
!326 = !{i64 8710}
!327 = !{i64 8711}
!328 = !{i64 8719}
!329 = !{i64 8728}
!330 = !{i64 8734}
!331 = !{i64 8735}
!332 = !{i64 8743}
!333 = !{i64 8752}
!334 = !{i64 8758}
!335 = !{i64 8759}
!336 = !{i64 8767}
!337 = !{i64 8776}
!338 = !{i64 8782}
!339 = !{i64 8783}
!340 = !{i64 8791}
!341 = !{i64 8800}
!342 = !{i64 8806}
!343 = !{i64 8807}
!344 = !{i64 8815}
!345 = !{i64 8824}
!346 = !{i64 8830}
!347 = !{i64 8831}
!348 = !{i64 8839}
!349 = !{i64 8848}
!350 = !{i64 8854}
!351 = !{i64 8855}
!352 = !{i64 8863}
!353 = !{i64 8872}
!354 = !{i64 8878}
!355 = !{i64 8879}
!356 = !{i64 8887}
!357 = !{i64 8896}
!358 = !{i64 8902}
!359 = !{i64 8903}
!360 = !{i64 8911}
!361 = !{i64 8920}
!362 = !{i64 8926}
!363 = !{i64 8927}
!364 = !{i64 8935}
!365 = !{i64 8944}
!366 = !{i64 8950}
!367 = !{i64 8951}
!368 = !{i64 8959}
!369 = !{i64 8968}
!370 = !{i64 8974}
!371 = !{i64 8975}
!372 = !{i64 8983}
!373 = !{i64 8992}
!374 = !{i64 8998}
!375 = !{i64 8999}
!376 = !{i64 9012}
!377 = !{i64 9013}
!378 = !{i64 9024}
!379 = !{i64 9045}
!380 = !{i64 9056}
!381 = !{i64 9060}
!382 = !{i64 9062}
!383 = !{i64 9067}
!384 = !{i64 9069}
!385 = !{i64 9071}
!386 = !{i64 9081}
!387 = !{i64 9089}
!388 = !{i64 9096}
!389 = !{i64 9107}
!390 = !{i64 9120}
!391 = !{i64 9126}
!392 = !{i64 9127}
!393 = !{i64 9138}
!394 = !{i64 9157}
!395 = !{i64 9158}
!396 = !{i64 9169}
!397 = !{i64 9185}
!398 = !{i64 9209}
!399 = !{i64 9217}
!400 = !{i64 9219}
!401 = !{i64 9250}
!402 = !{i64 9257}
!403 = !{i64 9259}
!404 = !{i64 9268}
!405 = !{i64 9279}
!406 = !{i64 9292}
!407 = !{i64 9298}
!408 = !{i64 9299}
!409 = !{i64 9308}
!410 = !{i64 9309}
!411 = !{i64 9320}
!412 = !{i64 9343}
!413 = !{i64 9354}
!414 = !{i64 9362}
!415 = !{i64 9366}
!416 = !{i64 9375}
!417 = !{i64 9379}
!418 = !{i64 9392}
!419 = !{i64 9405}
!420 = !{i64 9422}
!421 = !{i64 9433}
!422 = !{i64 9437}
!423 = !{i64 9446}
!424 = !{i64 9449}
!425 = !{i64 9452}
!426 = !{i64 9454}
!427 = !{i64 9462}
!428 = !{i64 9465}
!429 = !{i64 9475}
!430 = !{i64 9482}
!431 = !{i64 9484}
!432 = !{i64 9493}
!433 = !{i64 9504}
!434 = !{i64 9519}
!435 = !{i64 9525}
!436 = !{i64 9526}
!437 = !{i64 9537}
!438 = !{i64 9541}
!439 = !{i64 9556}
!440 = !{i64 9557}
!441 = !{i64 9568}
!442 = !{i64 9579}
!443 = !{i64 9597}
!444 = !{i64 9605}
!445 = !{i64 9607}
!446 = !{i64 9619}
!447 = !{i64 9627}
!448 = !{i64 9631}
!449 = !{i64 9643}
!450 = !{i64 9647}
!451 = !{i64 9649}
!452 = !{i64 9656}
!453 = !{i64 9664}
!454 = !{i64 9670}
!455 = !{i64 9676}
!456 = !{i64 9679}
!457 = !{i64 9687}
!458 = !{i64 9698}
!459 = !{i64 9713}
!460 = !{i64 9726}
!461 = !{i64 9731}
!462 = !{i64 9738}
!463 = !{i64 9746}
!464 = !{i64 9759}
!465 = !{i64 9767}
!466 = !{i64 9770}
!467 = !{i64 9773}
!468 = !{i64 9776}
!469 = !{i64 9778}
!470 = !{i64 9781}
!471 = !{i64 9788}
!472 = !{i64 9801}
!473 = !{i64 9809}
!474 = !{i64 9813}
!475 = !{i64 9822}
!476 = !{i64 9830}
!477 = !{i64 9837}
!478 = !{i64 9839}
!479 = !{i64 9848}
!480 = !{i64 9859}
!481 = !{i64 9869}
!482 = !{i64 9875}
!483 = !{i64 9876}
!484 = !{i64 9887}
!485 = !{i64 9898}
!486 = !{i64 9918}
!487 = !{i64 9929}
!488 = !{i64 9933}
!489 = !{i64 9945}
!490 = !{i64 9968}
!491 = !{i64 9976}
!492 = !{i64 9978}
!493 = !{i64 9986}
!494 = !{i64 9999}
!495 = !{i64 10015}
!496 = !{i64 10023}
!497 = !{i64 10034}
!498 = !{i64 10065}
!499 = !{i64 10073}
!500 = !{i64 10075}
!501 = !{i64 10083}
!502 = !{i64 10096}
!503 = !{i64 10106}
!504 = !{i64 10114}
!505 = !{i64 10116}
!506 = !{i64 10153}
!507 = !{i64 10161}
!508 = !{i64 10168}
!509 = !{i64 10170}
!510 = !{i64 10179}
!511 = !{i64 10190}
!512 = !{i64 10200}
!513 = !{i64 10206}
!514 = !{i64 10207}
!515 = !{i64 10218}
!516 = !{i64 10229}
!517 = !{i64 10251}
!518 = !{i64 10262}
!519 = !{i64 10266}
!520 = !{i64 10284}
!521 = !{i64 10304}
!522 = !{i64 10315}
!523 = !{i64 10319}
!524 = !{i64 10347}
!525 = !{i64 10358}
!526 = !{i64 10362}
!527 = !{i64 10381}
!528 = !{i64 10392}
!529 = !{i64 10396}
!530 = !{i64 10408}
!531 = !{i64 10414}
!532 = !{i64 10421}
!533 = !{i64 10428}
!534 = !{i64 10438}
!535 = !{i64 10455}
!536 = !{i64 10473}
!537 = !{i64 10481}
!538 = !{i64 10488}
!539 = !{i64 10499}
!540 = !{i64 10509}
!541 = !{i64 10521}
!542 = !{i64 10536}
!543 = !{i64 10544}
!544 = !{i64 10554}
!545 = !{i64 10567}
!546 = !{i64 10575}
!547 = !{i64 10576}
!548 = !{i64 10587}
!549 = !{i64 10601}
!550 = !{i64 10607}
!551 = !{i64 10610}
!552 = !{i64 10618}
!553 = !{i64 10621}
!554 = !{i64 10645}
!555 = !{i64 10653}
!556 = !{i64 10656}
!557 = !{i64 10615}
!558 = !{i64 10668}
!559 = !{i64 10683}
!560 = !{i64 10716}
!561 = !{i64 10722}
!562 = !{i64 10724}
!563 = !{i64 10737}
!564 = !{i64 10703}
!565 = !{i64 10708}
!566 = !{i64 10729}
!567 = !{i64 10735}
!568 = !{i64 10739}
!569 = !{i64 10745}
!570 = !{i64 10747}
!571 = !{i64 10759}
!572 = !{i64 10765}
!573 = !{i64 10768}
!574 = !{i64 10780}
!575 = !{i64 10793}
!576 = !{i64 10795}
!577 = !{i64 10834}
!578 = !{i64 10836}
!579 = !{i64 10815}
!580 = !{i64 10820}
!581 = !{i64 10841}
!582 = !{i64 10847}
!583 = !{i64 10849}
!584 = !{i64 10851}
!585 = !{i64 10857}
!586 = !{i64 10859}
!587 = !{i64 10861}
!588 = !{i64 10867}
!589 = !{i64 10870}
!590 = !{i64 10882}
!591 = !{i64 10884}
!592 = !{i64 10886}
!593 = !{i64 10897}
!594 = !{i64 10899}
!595 = !{i64 10901}
!596 = !{i64 10909}
!597 = !{i64 10918}
!598 = !{i64 10929}
!599 = !{i64 10939}
!600 = !{i64 10945}
!601 = !{i64 10957}
!602 = !{i64 10971}
!603 = !{i64 10977}
!604 = !{i64 10978}
!605 = !{i64 10986}
!606 = !{i64 10995}
!607 = !{i64 11001}
!608 = !{i64 11002}
!609 = !{i64 11010}
!610 = !{i64 11019}
!611 = !{i64 11025}
!612 = !{i64 11026}
!613 = !{i64 11034}
!614 = !{i64 11043}
!615 = !{i64 11049}
!616 = !{i64 11050}
!617 = !{i64 11058}
!618 = !{i64 11067}
!619 = !{i64 11073}
!620 = !{i64 11074}
!621 = !{i64 11082}
!622 = !{i64 11091}
!623 = !{i64 11097}
!624 = !{i64 11098}
!625 = !{i64 11106}
!626 = !{i64 11115}
!627 = !{i64 11121}
!628 = !{i64 11122}
!629 = !{i64 11130}
!630 = !{i64 11139}
!631 = !{i64 11145}
!632 = !{i64 11146}
!633 = !{i64 11159}
!634 = !{i64 11171}
!635 = !{i64 11191}
!636 = !{i64 11199}
!637 = !{i64 11212}
!638 = !{i64 11229}
!639 = !{i64 11238}
!640 = !{i64 11239}
!641 = !{i64 11250}
!642 = !{i64 11261}
!643 = !{i64 11275}
!644 = !{i64 11282}
!645 = !{i64 11288}
!646 = !{i64 11295}
!647 = !{i64 11306}
!648 = !{i64 11310}
!649 = !{i64 11319}
!650 = !{i64 11330}
!651 = !{i64 11341}
!652 = !{i64 11353}
!653 = !{i64 11361}
!654 = !{i64 11367}
!655 = !{i64 11374}
!656 = !{i64 11376}
!657 = !{i64 11385}
!658 = !{i64 11396}
!659 = !{i64 11411}
!660 = !{i64 11420}
!661 = !{i64 11421}
!662 = !{i64 11431}
!663 = !{i64 11450}
!664 = !{i64 11460}
!665 = !{i64 11491}
!666 = !{i64 11497}
!667 = !{i64 11470}
!668 = !{i64 11476}
!669 = !{i64 11481}
!670 = !{i64 11484}
!671 = !{i64 11505}
!672 = !{i64 11506}
!673 = !{i64 11511}
!674 = !{i64 11514}
!675 = !{i64 11517}
!676 = !{i64 11528}
!677 = !{i64 11539}
!678 = !{i64 11611}
!679 = !{i64 11628}
!680 = !{i64 11639}
!681 = !{i64 11640}
!682 = !{i64 11646}
!683 = !{i64 11623}
!684 = !{i64 11626}
!685 = !{i64 11634}
!686 = !{i64 11637}
!687 = !{i64 11647}
!688 = !{i64 11649}
!689 = !{i64 11650}
!690 = !{i64 11658}
!691 = !{i64 11660}
!692 = !{i64 11669}
!693 = !{i64 11677}
!694 = !{i64 11679}
!695 = !{i64 11756}
!696 = !{i64 11760}
!697 = !{i64 11698}
!698 = !{i64 11708}
!699 = !{i64 11705}
!700 = !{i64 11707}
!701 = !{i64 11716}
!702 = !{i64 11718}
!703 = !{i64 11736}
!704 = !{i64 11744}
!705 = !{i64 11747}
!706 = !{i64 11749}
!707 = !{i64 11752}
!708 = !{i64 11762}
!709 = !{i64 11768}
!710 = !{i64 11775}
!711 = !{i64 11777}
!712 = !{i64 11786}
!713 = !{i64 11797}
!714 = !{i64 11807}
!715 = !{i64 11813}
!716 = !{i64 11814}
!717 = !{i64 11825}
!718 = !{i64 11839}
!719 = !{i64 11930}
!720 = !{i64 11822}
!721 = !{i64 11856}
!722 = !{i64 11862}
!723 = !{i64 11863}
!724 = !{i64 11871}
!725 = !{i64 11877}
!726 = !{i64 11880}
!727 = !{i64 11895}
!728 = !{i64 11896}
!729 = !{i64 11907}
!730 = !{i64 11912}
!731 = !{i64 11920}
!732 = !{i64 11941}
!733 = !{i64 11942}
!734 = !{i64 11953}
!735 = !{i64 11967}
!736 = !{i64 11974}
!737 = !{i64 11985}
!738 = !{i64 11989}
!739 = !{i64 11979}
!740 = !{i64 12001}
!741 = !{i64 12092}
!742 = !{i64 12038}
!743 = !{i64 12039}
!744 = !{i64 12045}
!745 = !{i64 12046}
!746 = !{i64 12048}
!747 = !{i64 12023}
!748 = !{i64 12033}
!749 = !{i64 12049}
!750 = !{i64 12057}
!751 = !{i64 12059}
!752 = !{i64 12064}
!753 = !{i64 12067}
!754 = !{i64 12080}
!755 = !{i64 12082}
!756 = !{i64 12149}
!757 = !{i64 12106}
!758 = !{i64 12116}
!759 = !{i64 12118}
!760 = !{i64 12123}
!761 = !{i64 12125}
!762 = !{i64 12126}
!763 = !{i64 12134}
!764 = !{i64 12144}
!765 = !{i64 12152}
!766 = !{i64 12160}
!767 = !{i64 12166}
!768 = !{i64 12172}
!769 = !{i64 12178}
!770 = !{i64 12181}
!771 = !{i64 12190}
!772 = !{i64 12199}
!773 = !{i64 12210}
!774 = !{i64 12230}
!775 = !{i64 12239}
!776 = !{i64 12240}
!777 = !{i64 12251}
!778 = !{i64 12265}
!779 = !{i64 12272}
!780 = !{i64 12277}
!781 = !{i64 12307}
!782 = !{i64 12313}
!783 = !{i64 12315}
!784 = !{i64 12335}
!785 = !{i64 12291}
!786 = !{i64 12292}
!787 = !{i64 12298}
!788 = !{i64 12299}
!789 = !{i64 12317}
!790 = !{i64 12323}
!791 = !{i64 12336}
!792 = !{i64 12347}
!793 = !{i64 12349}
!794 = !{i64 12366}
!795 = !{i64 12375}
!796 = !{i64 12387}
!797 = !{i64 12403}
!798 = !{i64 12414}
!799 = !{i64 12421}
!800 = !{i64 12429}
!801 = !{i64 12439}
!802 = !{i64 12452}
!803 = !{i64 12459}
!804 = !{i64 12477}
!805 = !{i64 12494}
!806 = !{i64 12495}
!807 = !{i64 12506}
!808 = !{i64 12517}
!809 = !{i64 12528}
!810 = !{i64 12538}
!811 = !{i64 12550}
!812 = !{i64 12556}
!813 = !{i64 12563}
!814 = !{i64 12571}
!815 = !{i64 12573}
!816 = !{i64 12584}
!817 = !{i64 12590}
!818 = !{i64 12597}
!819 = !{i64 12605}
!820 = !{i64 12607}
!821 = !{i64 12616}
!822 = !{i64 12629}
!823 = !{i64 12642}
!824 = !{i64 12650}
!825 = !{i64 12659}
!826 = !{i64 12670}
!827 = !{i64 12682}
!828 = !{i64 12690}
!829 = !{i64 12696}
!830 = !{i64 12703}
!831 = !{i64 12705}
!832 = !{i64 12714}
!833 = !{i64 12725}
!834 = !{i64 12735}
!835 = !{i64 12741}
!836 = !{i64 12742}
!837 = !{i64 12753}
!838 = !{i64 12770}
!839 = !{i64 12784}
!840 = !{i64 12858}
!841 = !{i64 12798}
!842 = !{i64 12815}
!843 = !{i64 12831}
!844 = !{i64 12848}
!845 = !{i64 12868}
!846 = !{i64 12875}
!847 = !{i64 12877}
!848 = !{i64 12886}
!849 = !{i64 12897}
!850 = !{i64 12907}
!851 = !{i64 12919}
!852 = !{i64 12922}
!853 = !{i64 12934}
!854 = !{i64 12935}
!855 = !{i64 12946}
!856 = !{i64 12957}
!857 = !{i64 12971}
!858 = !{i64 12978}
!859 = !{i64 12989}
!860 = !{i64 12993}
!861 = !{i64 12983}
!862 = !{i64 13010}
!863 = !{i64 13100}
!864 = !{i64 13110}
!865 = !{i64 13111}
!866 = !{i64 13116}
!867 = !{i64 13043}
!868 = !{i64 13044}
!869 = !{i64 13028}
!870 = !{i64 13038}
!871 = !{i64 13050}
!872 = !{i64 13051}
!873 = !{i64 13053}
!874 = !{i64 13054}
!875 = !{i64 13062}
!876 = !{i64 13064}
!877 = !{i64 13069}
!878 = !{i64 13072}
!879 = !{i64 13085}
!880 = !{i64 13090}
!881 = !{i64 13102}
!882 = !{i64 13104}
!883 = !{i64 13117}
!884 = !{i64 13125}
!885 = !{i64 13127}
!886 = !{i64 13129}
!887 = !{i64 13135}
!888 = !{i64 13137}
!889 = !{i64 13138}
!890 = !{i64 13143}
!891 = !{i64 13196}
!892 = !{i64 13158}
!893 = !{i64 13168}
!894 = !{i64 13170}
!895 = !{i64 13175}
!896 = !{i64 13177}
!897 = !{i64 13178}
!898 = !{i64 13186}
!899 = !{i64 13198}
!900 = !{i64 13210}
!901 = !{i64 13213}
!902 = !{i64 13225}
!903 = !{i64 13234}
!904 = !{i64 13242}
!905 = !{i64 13249}
!906 = !{i64 13251}
!907 = !{i64 13260}
!908 = !{i64 13271}
!909 = !{i64 13291}
!910 = !{i64 13300}
!911 = !{i64 13312}
!912 = !{i64 13329}
!913 = !{i64 13338}
!914 = !{i64 13344}
!915 = !{i64 13347}
!916 = !{i64 13361}
!917 = !{i64 13374}
!918 = !{i64 13376}
!919 = !{i64 13377}
!920 = !{i64 13390}
!921 = !{i64 13407}
!922 = !{i64 13412}
!923 = !{i64 13415}
!924 = !{i64 13421}
!925 = !{i64 13430}
!926 = !{i64 13431}
!927 = !{i64 13443}
!928 = !{i64 13454}
!929 = !{i64 13468}
!930 = !{i64 13475}
!931 = !{i64 13496}
!932 = !{i64 13507}
!933 = !{i64 13513}
!934 = !{i64 13517}
!935 = !{i64 13511}
!936 = !{i64 13501}
!937 = !{i64 13617}
!938 = !{i64 13541}
!939 = !{i64 13551}
!940 = !{i64 13557}
!941 = !{i64 13559}
!942 = !{i64 13567}
!943 = !{i64 13586}
!944 = !{i64 13595}
!945 = !{i64 13596}
!946 = !{i64 13598}
!947 = !{i64 13599}
!948 = !{i64 13607}
!949 = !{i64 13664}
!950 = !{i64 13634}
!951 = !{i64 13644}
!952 = !{i64 13646}
!953 = !{i64 13661}
!954 = !{i64 13663}
!955 = !{i64 13670}
!956 = !{i64 13671}
!957 = !{i64 13673}
!958 = !{i64 13674}
!959 = !{i64 13682}
!960 = !{i64 13684}
!961 = !{i64 13698}
!962 = !{i64 13708}
!963 = !{i64 13710}
!964 = !{i64 13715}
!965 = !{i64 13716}
!966 = !{i64 13724}
!967 = !{i64 13734}
!968 = !{i64 13739}
!969 = !{i64 13742}
!970 = !{i64 13753}
!971 = !{i64 13756}
!972 = !{i64 13769}
!973 = !{i64 13784}
!974 = !{i64 13836}
!975 = !{i64 13816}
!976 = !{i64 13826}
!977 = !{i64 13828}
!978 = !{i64 13837}
!979 = !{i64 13838}
!980 = !{i64 13846}
!981 = !{i64 13855}
!982 = !{i64 13857}
!983 = !{i64 13863}
!984 = !{i64 13866}
!985 = !{i64 13868}
!986 = !{i64 13874}
!987 = !{i64 13877}
!988 = !{i64 13898}
!989 = !{i64 13900}
!990 = !{i64 13905}
!991 = !{i64 13906}
!992 = !{i64 13914}
!993 = !{i64 13924}
!994 = !{i64 13929}
!995 = !{i64 13932}
!996 = !{i64 13943}
!997 = !{i64 13946}
!998 = !{i64 13978}
!999 = !{i64 13981}
!1000 = !{i64 13966}
!1001 = !{i64 13986}
!1002 = !{i64 13989}
!1003 = !{i64 13998}
!1004 = !{i64 14006}
!1005 = !{i64 14013}
!1006 = !{i64 14015}
!1007 = !{i64 14026}
!1008 = !{i64 14037}
!1009 = !{i64 14052}
!1010 = !{i64 14061}
!1011 = !{i64 14073}
!1012 = !{i64 14087}
!1013 = !{i64 14093}
!1014 = !{i64 14094}
!1015 = !{i64 14102}
!1016 = !{i64 14111}
!1017 = !{i64 14117}
!1018 = !{i64 14118}
!1019 = !{i64 14126}
!1020 = !{i64 14135}
!1021 = !{i64 14141}
!1022 = !{i64 14142}
!1023 = !{i64 14150}
!1024 = !{i64 14159}
!1025 = !{i64 14165}
!1026 = !{i64 14166}
!1027 = !{i64 14174}
!1028 = !{i64 14183}
!1029 = !{i64 14189}
!1030 = !{i64 14190}
!1031 = !{i64 14198}
!1032 = !{i64 14207}
!1033 = !{i64 14213}
!1034 = !{i64 14214}
!1035 = !{i64 14222}
!1036 = !{i64 14231}
!1037 = !{i64 14237}
!1038 = !{i64 14238}
!1039 = !{i64 14251}
!1040 = !{i64 14262}
!1041 = !{i64 14272}
!1042 = !{i64 14277}
!1043 = !{i64 14282}
!1044 = !{i64 14293}
!1045 = !{i64 14297}
!1046 = !{i64 14309}
!1047 = !{i64 14323}
!1048 = !{i64 14334}
!1049 = !{i64 14336}
!1050 = !{i64 14340}
!1051 = !{i64 14351}
!1052 = !{i64 14357}
!1053 = !{i64 14360}
!1054 = !{i64 14386}
!1055 = !{i64 14392}
!1056 = !{i64 14395}
!1057 = !{i64 14401}
!1058 = !{i64 14420}
!1059 = !{i64 14431}
!1060 = !{i64 14440}
