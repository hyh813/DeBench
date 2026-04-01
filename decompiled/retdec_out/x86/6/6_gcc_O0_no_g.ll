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
@global_var_1f4 = local_unnamed_addr constant [4 x i8] c"GNU\00"
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

define i32 @param_strcpy(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1921:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !91
  %3 = bitcast i32* %arg1 to i8*, !insn.addr !92
  %4 = inttoptr i32 %arg2 to i8*, !insn.addr !92
  %5 = call i8* @strcpy(i8* %3, i8* %4), !insn.addr !92
  %6 = call i32 @strlen(i8* %3), !insn.addr !93
  ret i32 %6, !insn.addr !94
}

define i32 @call_strcpy() local_unnamed_addr {
dec_label_pc_195b:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !95
  %1 = load i32, i32* %0
  %stack_var_-48 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !96
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !97
  %4 = add i32 %2, 9886, !insn.addr !98
  %5 = call i32 @param_strcpy(i32* nonnull %stack_var_-48, i32 %4), !insn.addr !99
  %6 = call i32 @__readgsdword(i32 20), !insn.addr !100
  %7 = icmp eq i32 %3, %6, !insn.addr !100
  store i32 %5, i32* %eax.0.reg2mem, !insn.addr !101
  br i1 %7, label %dec_label_pc_19a8, label %dec_label_pc_19a3, !insn.addr !101

dec_label_pc_19a3:                                ; preds = %dec_label_pc_195b
  %8 = call i32 @__stack_chk_fail_local(), !insn.addr !102
  store i32 %8, i32* %eax.0.reg2mem, !insn.addr !102
  br label %dec_label_pc_19a8, !insn.addr !102

dec_label_pc_19a8:                                ; preds = %dec_label_pc_19a3, %dec_label_pc_195b
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !103
}

define i32 @param_strcmp(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_19aa:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !104
  %3 = inttoptr i32 %arg1 to i8*, !insn.addr !105
  %4 = inttoptr i32 %arg2 to i8*, !insn.addr !105
  %5 = call i32 @strcmp(i8* %3, i8* %4), !insn.addr !105
  %6 = icmp eq i32 %5, 0, !insn.addr !106
  %7 = icmp slt i32 %5, 0, !insn.addr !106
  %8 = icmp eq i1 %7, false, !insn.addr !107
  %9 = icmp eq i1 %6, false, !insn.addr !107
  %10 = icmp eq i1 %8, %9, !insn.addr !107
  %not. = icmp ne i1 %8, true
  %. = sext i1 %not. to i32
  %eax.0 = select i1 %10, i32 1, i32 %.
  ret i32 %eax.0, !insn.addr !108

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
}

define i32 @call_strcmp() local_unnamed_addr {
dec_label_pc_19f9:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !109
  %3 = add i32 %1, 9736, !insn.addr !110
  %4 = add i32 %1, 9740, !insn.addr !111
  %5 = call i32 @param_strcmp(i32 %4, i32 %3), !insn.addr !112
  %6 = add i32 %1, 9744, !insn.addr !113
  %7 = call i32 @param_strcmp(i32 %6, i32 %6), !insn.addr !114
  %8 = add i32 %1, 9748, !insn.addr !115
  %9 = add i32 %1, 9752, !insn.addr !116
  %10 = call i32 @param_strcmp(i32 %9, i32 %8), !insn.addr !117
  %11 = add i32 %7, %5, !insn.addr !118
  %12 = add i32 %11, %10, !insn.addr !119
  ret i32 %12, !insn.addr !120

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i32 %1, { 4, 3, 2, 1, 0, 5 }
  uselistorder i32 (i32, i32)* @param_strcmp, { 2, 1, 0 }
}

define i32 @param_strlen(i32 %arg1) local_unnamed_addr {
dec_label_pc_1a75:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !121
  %3 = inttoptr i32 %arg1 to i8*, !insn.addr !122
  %4 = call i32 @strlen(i8* %3), !insn.addr !122
  ret i32 %4, !insn.addr !123
}

define i32 @call_strlen() local_unnamed_addr {
dec_label_pc_1aa5:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !124
  %3 = add i32 %2, 9585, !insn.addr !125
  %4 = call i32 @param_strlen(i32 %3), !insn.addr !126
  ret i32 %4, !insn.addr !127
}

define i32 @param_memcpy(i32* %arg1, i32* %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1ad2:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !128
  %3 = call i32* @memcpy(i32* %arg1, i32* %arg2, i32 %arg3), !insn.addr !129
  ret i32 %arg3, !insn.addr !130

; uselistorder directives
  uselistorder i32 %arg3, { 1, 0 }
}

define i32 @call_memcpy() local_unnamed_addr {
dec_label_pc_1b05:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !131
  %1 = load i32, i32* %0
  %stack_var_-36 = alloca i32, align 4
  %stack_var_-56 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !132
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !133
  store i32 10, i32* %stack_var_-56, align 4, !insn.addr !134
  store i32 0, i32* %stack_var_-36, align 4, !insn.addr !135
  %4 = call i32 @param_memcpy(i32* nonnull %stack_var_-36, i32* nonnull %stack_var_-56, i32 20), !insn.addr !136
  %5 = load i32, i32* %stack_var_-36, align 4, !insn.addr !137
  %6 = call i32 @__readgsdword(i32 20), !insn.addr !138
  %7 = icmp eq i32 %3, %6, !insn.addr !138
  store i32 %5, i32* %eax.0.reg2mem, !insn.addr !139
  br i1 %7, label %dec_label_pc_1b9d, label %dec_label_pc_1b98, !insn.addr !139

dec_label_pc_1b98:                                ; preds = %dec_label_pc_1b05
  %8 = call i32 @__stack_chk_fail_local(), !insn.addr !140
  store i32 %8, i32* %eax.0.reg2mem, !insn.addr !140
  br label %dec_label_pc_1b9d, !insn.addr !140

dec_label_pc_1b9d:                                ; preds = %dec_label_pc_1b98, %dec_label_pc_1b05
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !141

; uselistorder directives
  uselistorder i32* %stack_var_-36, { 1, 0, 2 }
}

define i32 @param_memcmp(i32* %arg1, i32* %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1b9f:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !142
  %3 = call i32 @memcmp(i32* %arg1, i32* %arg2, i32 %arg3), !insn.addr !143
  %4 = icmp eq i32 %3, 0, !insn.addr !144
  %5 = icmp slt i32 %3, 0, !insn.addr !144
  %6 = icmp eq i1 %5, false, !insn.addr !145
  %7 = icmp eq i1 %4, false, !insn.addr !145
  %8 = icmp eq i1 %6, %7, !insn.addr !145
  %not. = icmp ne i1 %6, true
  %. = sext i1 %not. to i32
  %eax.0 = select i1 %8, i32 1, i32 %.
  ret i32 %eax.0, !insn.addr !146

; uselistorder directives
  uselistorder i32 %3, { 1, 0 }
}

define i32 @call_memcmp() local_unnamed_addr {
dec_label_pc_1bf1:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !147
  %1 = load i32, i32* %0
  %stack_var_-28 = alloca i32, align 4
  %stack_var_-40 = alloca i32, align 4
  %stack_var_-52 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !148
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !149
  store i32 1, i32* %stack_var_-52, align 4, !insn.addr !150
  store i32 1, i32* %stack_var_-40, align 4, !insn.addr !151
  store i32 1, i32* %stack_var_-28, align 4, !insn.addr !152
  %4 = call i32 @param_memcmp(i32* nonnull %stack_var_-52, i32* nonnull %stack_var_-40, i32 12), !insn.addr !153
  %5 = call i32 @param_memcmp(i32* nonnull %stack_var_-52, i32* nonnull %stack_var_-28, i32 12), !insn.addr !154
  %6 = add i32 %5, %4, !insn.addr !155
  %7 = call i32 @__readgsdword(i32 20), !insn.addr !156
  %8 = icmp eq i32 %3, %7, !insn.addr !156
  store i32 %6, i32* %eax.0.reg2mem, !insn.addr !157
  br i1 %8, label %dec_label_pc_1c98, label %dec_label_pc_1c93, !insn.addr !157

dec_label_pc_1c93:                                ; preds = %dec_label_pc_1bf1
  %9 = call i32 @__stack_chk_fail_local(), !insn.addr !158
  store i32 %9, i32* %eax.0.reg2mem, !insn.addr !158
  br label %dec_label_pc_1c98, !insn.addr !158

dec_label_pc_1c98:                                ; preds = %dec_label_pc_1c93, %dec_label_pc_1bf1
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !159

; uselistorder directives
  uselistorder i32 (i32*, i32*, i32)* @param_memcmp, { 1, 0 }
}

define i32 @param_printf(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1c9a:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !160
  %3 = add i32 %2, 9096, !insn.addr !161
  %4 = inttoptr i32 %3 to i8*, !insn.addr !162
  %5 = call i32 (i8*, ...) @printf(i8* %4), !insn.addr !163
  ret i32 %5, !insn.addr !164
}

define i32 @call_printf() local_unnamed_addr {
dec_label_pc_1cd4:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !165
  %3 = add i32 %2, 9060, !insn.addr !166
  %4 = call i32 @param_printf(i32 42, i32 %3), !insn.addr !167
  ret i32 %4, !insn.addr !168
}

define i32 @param_scanf(i32 %arg1) local_unnamed_addr {
dec_label_pc_1d04:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !169
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !170
  %5 = call i32 @__readgsdword(i32 20), !insn.addr !171
  %6 = add i32 %4, 9016, !insn.addr !172
  %7 = inttoptr i32 %6 to i8*, !insn.addr !173
  %8 = inttoptr i32 %arg1 to i8*, !insn.addr !174
  %9 = call i32 (i8*, i8*, ...) @sscanf(i8* %8, i8* %7), !insn.addr !174
  %10 = icmp eq i32 %9, 2, !insn.addr !175
  %11 = icmp eq i1 %10, false, !insn.addr !176
  %12 = add i32 %3, %2
  %spec.select = select i1 %11, i32 -1, i32 %12
  %13 = call i32 @__readgsdword(i32 20), !insn.addr !177
  %14 = icmp eq i32 %5, %13, !insn.addr !177
  store i32 %spec.select, i32* %eax.0.reg2mem, !insn.addr !178
  br i1 %14, label %dec_label_pc_1d70, label %dec_label_pc_1d6b, !insn.addr !178

dec_label_pc_1d6b:                                ; preds = %dec_label_pc_1d04
  %15 = call i32 @__stack_chk_fail_local(), !insn.addr !179
  store i32 %15, i32* %eax.0.reg2mem, !insn.addr !179
  br label %dec_label_pc_1d70, !insn.addr !179

dec_label_pc_1d70:                                ; preds = %dec_label_pc_1d6b, %dec_label_pc_1d04
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !180

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
}

define i32 @call_scanf() local_unnamed_addr {
dec_label_pc_1d75:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !181
  %3 = add i32 %2, 8910, !insn.addr !182
  %4 = call i32 @param_scanf(i32 %3), !insn.addr !183
  ret i32 %4, !insn.addr !184
}

define i32 @param_fopen_fclose(i32 %arg1) local_unnamed_addr {
dec_label_pc_1d9d:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !185
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !186
  %3 = add i32 %1, 8877, !insn.addr !187
  %4 = inttoptr i32 %3 to i8*, !insn.addr !188
  %5 = inttoptr i32 %arg1 to i8*, !insn.addr !189
  %6 = call %_IO_FILE* @fopen(i8* %5, i8* %4), !insn.addr !189
  %7 = icmp eq %_IO_FILE* %6, null, !insn.addr !190
  %8 = icmp eq i1 %7, false, !insn.addr !191
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !191
  br i1 %8, label %dec_label_pc_1dd8, label %dec_label_pc_1dfa, !insn.addr !191

dec_label_pc_1dd8:                                ; preds = %dec_label_pc_1d9d
  %9 = call i32 @fileno(%_IO_FILE* %6), !insn.addr !192
  %10 = call i32 @fclose(%_IO_FILE* %6), !insn.addr !193
  store i32 %9, i32* %storemerge.reg2mem, !insn.addr !194
  br label %dec_label_pc_1dfa, !insn.addr !194

dec_label_pc_1dfa:                                ; preds = %dec_label_pc_1d9d, %dec_label_pc_1dd8
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !195

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1dfa, { 1, 0 }
}

define i32 @call_fopen_fclose() local_unnamed_addr {
dec_label_pc_1dff:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !196
  %3 = add i32 %2, 8782, !insn.addr !197
  %4 = call i32 @param_fopen_fclose(i32 %3), !insn.addr !198
  %5 = icmp slt i32 %4, 0, !insn.addr !199
  %. = select i1 %5, i32 -1, i32 42
  ret i32 %., !insn.addr !200
}

define i32 @param_fread_fwrite(i32 %arg1) local_unnamed_addr {
dec_label_pc_1e3c:
  %0 = alloca i32
  %eax.1.reg2mem = alloca i32, !insn.addr !201
  %eax.0.reg2mem = alloca i32, !insn.addr !201
  %1 = load i32, i32* %0
  %stack_var_-48 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !202
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !203
  %4 = add i32 %1, 8751, !insn.addr !204
  %5 = inttoptr i32 %4 to i8*, !insn.addr !205
  %6 = inttoptr i32 %arg1 to i8*, !insn.addr !206
  %7 = call %_IO_FILE* @fopen(i8* %6, i8* %5), !insn.addr !206
  %8 = icmp eq %_IO_FILE* %7, null, !insn.addr !207
  %9 = icmp eq i1 %8, false, !insn.addr !208
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !208
  br i1 %9, label %dec_label_pc_1e94, label %dec_label_pc_1f54, !insn.addr !208

dec_label_pc_1e94:                                ; preds = %dec_label_pc_1e3c
  %10 = add i32 %1, 8732, !insn.addr !209
  %11 = inttoptr i32 %10 to i8*, !insn.addr !210
  %12 = call i32 @strlen(i8* %11), !insn.addr !210
  %13 = inttoptr i32 %10 to i32*, !insn.addr !211
  %14 = call i32 @fwrite(i32* %13, i32 1, i32 %12, %_IO_FILE* %7), !insn.addr !211
  %15 = call i32 @strlen(i8* %11), !insn.addr !212
  %16 = icmp eq i32 %14, %15, !insn.addr !213
  br i1 %16, label %dec_label_pc_1ede, label %dec_label_pc_1ec9, !insn.addr !214

dec_label_pc_1ec9:                                ; preds = %dec_label_pc_1e94
  %17 = call i32 @fclose(%_IO_FILE* %7), !insn.addr !215
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !216
  br label %dec_label_pc_1f54, !insn.addr !216

dec_label_pc_1ede:                                ; preds = %dec_label_pc_1e94
  call void @rewind(%_IO_FILE* %7), !insn.addr !217
  %18 = call i32 @fread(i32* nonnull %stack_var_-48, i32 1, i32 %14, %_IO_FILE* %7), !insn.addr !218
  %19 = ptrtoint i32* %stack_var_-48 to i32, !insn.addr !219
  %20 = add i32 %18, %19, !insn.addr !220
  %21 = inttoptr i32 %20 to i8*, !insn.addr !221
  store i8 0, i8* %21, align 1, !insn.addr !221
  %22 = call i32 @fclose(%_IO_FILE* %7), !insn.addr !222
  %23 = call i32 @unlink(i8* %6), !insn.addr !223
  %24 = icmp eq i32 %18, %14, !insn.addr !224
  %25 = icmp eq i1 %24, false, !insn.addr !225
  br i1 %25, label %dec_label_pc_1f4f, label %dec_label_pc_1f32, !insn.addr !225

dec_label_pc_1f32:                                ; preds = %dec_label_pc_1ede
  %26 = bitcast i32* %stack_var_-48 to i8*, !insn.addr !226
  %27 = call i32 @strcmp(i8* nonnull %26, i8* %11), !insn.addr !226
  %28 = icmp eq i32 %27, 0, !insn.addr !227
  %29 = icmp eq i1 %28, false, !insn.addr !228
  store i32 42, i32* %eax.0.reg2mem, !insn.addr !228
  br i1 %29, label %dec_label_pc_1f4f, label %dec_label_pc_1f54, !insn.addr !228

dec_label_pc_1f4f:                                ; preds = %dec_label_pc_1f32, %dec_label_pc_1ede
  store i32 -3, i32* %eax.0.reg2mem, !insn.addr !229
  br label %dec_label_pc_1f54, !insn.addr !229

dec_label_pc_1f54:                                ; preds = %dec_label_pc_1f32, %dec_label_pc_1e3c, %dec_label_pc_1f4f, %dec_label_pc_1ec9
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %30 = call i32 @__readgsdword(i32 20), !insn.addr !230
  %31 = icmp eq i32 %3, %30, !insn.addr !230
  store i32 %eax.0.reload, i32* %eax.1.reg2mem, !insn.addr !231
  br i1 %31, label %dec_label_pc_1f65, label %dec_label_pc_1f60, !insn.addr !231

dec_label_pc_1f60:                                ; preds = %dec_label_pc_1f54
  %32 = call i32 @__stack_chk_fail_local(), !insn.addr !232
  store i32 %32, i32* %eax.1.reg2mem, !insn.addr !232
  br label %dec_label_pc_1f65, !insn.addr !232

dec_label_pc_1f65:                                ; preds = %dec_label_pc_1f60, %dec_label_pc_1f54
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !233

; uselistorder directives
  uselistorder i32 %18, { 1, 0 }
  uselistorder i32 %10, { 1, 0 }
  uselistorder %_IO_FILE* %7, { 0, 1, 3, 2, 4, 5 }
  uselistorder i32* %stack_var_-48, { 0, 2, 1 }
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
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !234
  %3 = add i32 %2, 8453, !insn.addr !235
  %4 = call i32 @param_fread_fwrite(i32 %3), !insn.addr !236
  ret i32 %4, !insn.addr !237
}

define i32 @param_malloc_free(i32 %arg1) local_unnamed_addr {
dec_label_pc_1f92:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !238
  %storemerge12.reg2mem = alloca i32, !insn.addr !238
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !239
  %3 = mul i32 %arg1, 4, !insn.addr !240
  %4 = call i32* @malloc(i32 %3), !insn.addr !241
  %5 = icmp eq i32* %4, null, !insn.addr !242
  %6 = icmp eq i1 %5, false, !insn.addr !243
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !243
  br i1 %6, label %dec_label_pc_1ff6.preheader, label %dec_label_pc_2036, !insn.addr !243

dec_label_pc_1ff6.preheader:                      ; preds = %dec_label_pc_1f92
  %7 = ptrtoint i32* %4 to i32, !insn.addr !241
  %8 = icmp eq i32 %arg1, 0, !insn.addr !244
  store i32 0, i32* %storemerge12.reg2mem, !insn.addr !245
  br i1 %8, label %dec_label_pc_1ffe, label %dec_label_pc_1fd3, !insn.addr !245

dec_label_pc_1fd3:                                ; preds = %dec_label_pc_1ff6.preheader, %dec_label_pc_1fd3
  %storemerge12.reload = load i32, i32* %storemerge12.reg2mem
  %9 = mul i32 %storemerge12.reload, 10, !insn.addr !246
  %10 = mul i32 %storemerge12.reload, 4, !insn.addr !247
  %11 = add i32 %10, %7, !insn.addr !248
  %12 = inttoptr i32 %11 to i32*, !insn.addr !249
  store i32 %9, i32* %12, align 4, !insn.addr !249
  %13 = add nuw i32 %storemerge12.reload, 1, !insn.addr !250
  %exitcond = icmp eq i32 %13, %arg1
  store i32 %13, i32* %storemerge12.reg2mem, !insn.addr !245
  br i1 %exitcond, label %dec_label_pc_1ffe, label %dec_label_pc_1fd3, !insn.addr !245

dec_label_pc_1ffe:                                ; preds = %dec_label_pc_1fd3, %dec_label_pc_1ff6.preheader
  %14 = load i32, i32* %4, align 4, !insn.addr !251
  %15 = add i32 %3, -4, !insn.addr !252
  %16 = add i32 %15, %7, !insn.addr !253
  %17 = inttoptr i32 %16 to i32*, !insn.addr !254
  %18 = load i32, i32* %17, align 4, !insn.addr !254
  %19 = add i32 %18, %14, !insn.addr !255
  call void @free(i32* %4), !insn.addr !256
  store i32 %19, i32* %storemerge.reg2mem, !insn.addr !257
  br label %dec_label_pc_2036, !insn.addr !257

dec_label_pc_2036:                                ; preds = %dec_label_pc_1f92, %dec_label_pc_1ffe
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !258

; uselistorder directives
  uselistorder i32 %storemerge12.reload, { 0, 2, 1 }
  uselistorder i32 %7, { 1, 0 }
  uselistorder i32* %4, { 0, 1, 3, 2 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32* %storemerge12.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg1, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2036, { 1, 0 }
  uselistorder label %dec_label_pc_1fd3, { 1, 0 }
}

define i32 @call_malloc_free() local_unnamed_addr {
dec_label_pc_203b:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !259
  %3 = call i32 @param_malloc_free(i32 10), !insn.addr !260
  ret i32 %3, !insn.addr !261
}

define i32 @param_memset(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_205e:
  %0 = alloca i32
  %stack_var_-24.0.lcssa.reg2mem = alloca i32, !insn.addr !262
  %stack_var_-24.01.reg2mem = alloca i32, !insn.addr !262
  %storemerge2.reg2mem = alloca i32, !insn.addr !262
  %1 = load i32, i32* %0
  %2 = ptrtoint i32* %arg1 to i32
  %3 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !263
  %4 = call i32* @memset(i32* %arg1, i32 0, i32 %arg2), !insn.addr !264
  %5 = icmp eq i32 %arg2, 0, !insn.addr !265
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !266
  store i32 0, i32* %stack_var_-24.01.reg2mem, !insn.addr !266
  store i32 0, i32* %stack_var_-24.0.lcssa.reg2mem, !insn.addr !266
  br i1 %5, label %dec_label_pc_20bb, label %dec_label_pc_209e, !insn.addr !266

dec_label_pc_209e:                                ; preds = %dec_label_pc_205e, %dec_label_pc_209e
  %stack_var_-24.01.reload = load i32, i32* %stack_var_-24.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %6 = add i32 %storemerge2.reload, %2, !insn.addr !267
  %7 = inttoptr i32 %6 to i8*, !insn.addr !268
  %8 = load i8, i8* %7, align 1, !insn.addr !268
  %9 = zext i8 %8 to i32, !insn.addr !268
  %10 = add i32 %stack_var_-24.01.reload, %9, !insn.addr !269
  %11 = add nuw i32 %storemerge2.reload, 1, !insn.addr !270
  %exitcond = icmp eq i32 %11, %arg2
  store i32 %11, i32* %storemerge2.reg2mem, !insn.addr !266
  store i32 %10, i32* %stack_var_-24.01.reg2mem, !insn.addr !266
  store i32 %10, i32* %stack_var_-24.0.lcssa.reg2mem, !insn.addr !266
  br i1 %exitcond, label %dec_label_pc_20bb, label %dec_label_pc_209e, !insn.addr !266

dec_label_pc_20bb:                                ; preds = %dec_label_pc_209e, %dec_label_pc_205e
  %stack_var_-24.0.lcssa.reload = load i32, i32* %stack_var_-24.0.lcssa.reg2mem
  ret i32 %stack_var_-24.0.lcssa.reload, !insn.addr !271

; uselistorder directives
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-24.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_209e, { 1, 0 }
}

define i32 @call_memset() local_unnamed_addr {
dec_label_pc_20c3:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !272
  %storemerge1.reg2mem = alloca i32, !insn.addr !272
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-56 = alloca i32, align 4
  %stack_var_-4 = alloca i32, align 4
  %3 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !273
  %4 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !274
  %5 = call i32 @__readgsdword(i32 20), !insn.addr !275
  %6 = add i32 %3, -52, !insn.addr !276
  store i32 0, i32* %storemerge1.reg2mem
  br label %dec_label_pc_20eb

dec_label_pc_20eb:                                ; preds = %dec_label_pc_20eb, %dec_label_pc_20c3
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %7 = mul i32 %storemerge1.reload, 4, !insn.addr !276
  %8 = add i32 %6, %7, !insn.addr !276
  %9 = inttoptr i32 %8 to i32*, !insn.addr !276
  store i32 255, i32* %9, align 4, !insn.addr !276
  %10 = add nuw nsw i32 %storemerge1.reload, 1, !insn.addr !277
  %exitcond = icmp eq i32 %10, 10
  store i32 %10, i32* %storemerge1.reg2mem, !insn.addr !278
  br i1 %exitcond, label %dec_label_pc_2100, label %dec_label_pc_20eb, !insn.addr !278

dec_label_pc_2100:                                ; preds = %dec_label_pc_20eb
  %11 = call i32 @param_memset(i32* nonnull %stack_var_-56, i32 40), !insn.addr !279
  %12 = load i32, i32* %stack_var_-56, align 4, !insn.addr !280
  %13 = add i32 %12, %2, !insn.addr !281
  %14 = call i32 @__readgsdword(i32 20), !insn.addr !282
  %15 = icmp eq i32 %5, %14, !insn.addr !282
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !283
  br i1 %15, label %dec_label_pc_212a, label %dec_label_pc_2125, !insn.addr !283

dec_label_pc_2125:                                ; preds = %dec_label_pc_2100
  %16 = call i32 @__stack_chk_fail_local(), !insn.addr !284
  store i32 %16, i32* %eax.0.reg2mem, !insn.addr !284
  br label %dec_label_pc_212a, !insn.addr !284

dec_label_pc_212a:                                ; preds = %dec_label_pc_2125, %dec_label_pc_2100
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !285

; uselistorder directives
  uselistorder i32* %stack_var_-56, { 1, 0 }
  uselistorder i32* %storemerge1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %0, { 1, 0 }
}

define i32 @param_strchr_strstr(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_212c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !286
  %sext = mul i32 %arg2, 16777216
  %3 = ashr exact i32 %sext, 24, !insn.addr !287
  %4 = inttoptr i32 %arg1 to i8*, !insn.addr !288
  %5 = call i8* @strchr(i8* %4, i32 %3), !insn.addr !288
  %6 = icmp eq i8* %5, null, !insn.addr !289
  %7 = ptrtoint i8* %5 to i32
  %8 = sub i32 %7, %arg1
  %storemerge1 = select i1 %6, i32 -1, i32 %8
  %9 = inttoptr i32 %arg3 to i8*, !insn.addr !290
  %10 = call i8* @strstr(i8* %4, i8* %9), !insn.addr !290
  %11 = icmp eq i8* %10, null, !insn.addr !291
  %12 = ptrtoint i8* %10 to i32
  %13 = sub i32 %12, %arg1
  %storemerge = select i1 %11, i32 -1, i32 %13
  %14 = add i32 %storemerge, %storemerge1, !insn.addr !292
  ret i32 %14, !insn.addr !293

; uselistorder directives
  uselistorder i8* %10, { 1, 0 }
  uselistorder i8* %5, { 1, 0 }
  uselistorder i32 %arg1, { 1, 0, 2 }
}

define i32 @call_strchr_strstr() local_unnamed_addr {
dec_label_pc_21ab:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !294
  %3 = add i32 %2, add (i32 ptrtoint (i32* @global_var_4d3a to i32), i32 -11871), !insn.addr !295
  %4 = add i32 %2, add (i32 ptrtoint (i32* @global_var_4d3a to i32), i32 -11851), !insn.addr !296
  %5 = call i32 @param_strchr_strstr(i32 %3, i32 66, i32 %4), !insn.addr !297
  ret i32 %5, !insn.addr !298
}

define i32 @test_standard_library_functions() local_unnamed_addr {
dec_label_pc_21e7:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !299
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4cfd to i32), i32 -11844), !insn.addr !300
  %4 = inttoptr i32 %3 to i8*, !insn.addr !301
  %5 = call i32 @puts(i8* %4), !insn.addr !302
  %6 = call i32 @call_strcpy(), !insn.addr !303
  %7 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4cfd to i32), i32 -11808), !insn.addr !304
  %8 = inttoptr i32 %7 to i8*, !insn.addr !305
  %9 = call i32 (i8*, ...) @printf(i8* %8), !insn.addr !306
  %10 = call i32 @call_strcmp(), !insn.addr !307
  %11 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4cfd to i32), i32 -11781), !insn.addr !308
  %12 = inttoptr i32 %11 to i8*, !insn.addr !309
  %13 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !310
  %14 = call i32 @call_strlen(), !insn.addr !311
  %15 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4cfd to i32), i32 -11754), !insn.addr !312
  %16 = inttoptr i32 %15 to i8*, !insn.addr !313
  %17 = call i32 (i8*, ...) @printf(i8* %16), !insn.addr !314
  %18 = call i32 @call_memcpy(), !insn.addr !315
  %19 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4cfd to i32), i32 -11726), !insn.addr !316
  %20 = inttoptr i32 %19 to i8*, !insn.addr !317
  %21 = call i32 (i8*, ...) @printf(i8* %20), !insn.addr !318
  %22 = call i32 @call_memcmp(), !insn.addr !319
  %23 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4cfd to i32), i32 -11698), !insn.addr !320
  %24 = inttoptr i32 %23 to i8*, !insn.addr !321
  %25 = call i32 (i8*, ...) @printf(i8* %24), !insn.addr !322
  %26 = call i32 @call_printf(), !insn.addr !323
  %27 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4cfd to i32), i32 -11670), !insn.addr !324
  %28 = inttoptr i32 %27 to i8*, !insn.addr !325
  %29 = call i32 (i8*, ...) @printf(i8* %28), !insn.addr !326
  %30 = call i32 @call_scanf(), !insn.addr !327
  %31 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4cfd to i32), i32 -11642), !insn.addr !328
  %32 = inttoptr i32 %31 to i8*, !insn.addr !329
  %33 = call i32 (i8*, ...) @printf(i8* %32), !insn.addr !330
  %34 = call i32 @call_fopen_fclose(), !insn.addr !331
  %35 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4cfd to i32), i32 -11613), !insn.addr !332
  %36 = inttoptr i32 %35 to i8*, !insn.addr !333
  %37 = call i32 (i8*, ...) @printf(i8* %36), !insn.addr !334
  %38 = call i32 @call_fread_fwrite(), !insn.addr !335
  %39 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4cfd to i32), i32 -11585), !insn.addr !336
  %40 = inttoptr i32 %39 to i8*, !insn.addr !337
  %41 = call i32 (i8*, ...) @printf(i8* %40), !insn.addr !338
  %42 = call i32 @call_malloc_free(), !insn.addr !339
  %43 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4cfd to i32), i32 -11557), !insn.addr !340
  %44 = inttoptr i32 %43 to i8*, !insn.addr !341
  %45 = call i32 (i8*, ...) @printf(i8* %44), !insn.addr !342
  %46 = call i32 @call_memset(), !insn.addr !343
  %47 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4cfd to i32), i32 -11529), !insn.addr !344
  %48 = inttoptr i32 %47 to i8*, !insn.addr !345
  %49 = call i32 (i8*, ...) @printf(i8* %48), !insn.addr !346
  %50 = call i32 @call_strchr_strstr(), !insn.addr !347
  %51 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4cfd to i32), i32 -11502), !insn.addr !348
  %52 = inttoptr i32 %51 to i8*, !insn.addr !349
  %53 = call i32 (i8*, ...) @printf(i8* %52), !insn.addr !350
  ret i32 %53, !insn.addr !351
}

define i32 @param_linux_syscall(i32 %arg1) local_unnamed_addr {
dec_label_pc_2335:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !352
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !353
  %3 = call i32 (i32, ...) @syscall(i32 5), !insn.addr !354
  %4 = icmp slt i32 %3, 0, !insn.addr !355
  %5 = icmp eq i1 %4, false, !insn.addr !356
  br i1 %5, label %dec_label_pc_2371, label %dec_label_pc_2366, !insn.addr !356

dec_label_pc_2366:                                ; preds = %dec_label_pc_2335
  %6 = call i32* @__errno_location(), !insn.addr !357
  %7 = load i32, i32* %6, align 4, !insn.addr !358
  %8 = sub i32 0, %7, !insn.addr !359
  store i32 %8, i32* %storemerge.reg2mem, !insn.addr !360
  br label %dec_label_pc_2384, !insn.addr !360

dec_label_pc_2371:                                ; preds = %dec_label_pc_2335
  %9 = call i32 (i32, ...) @syscall(i32 6), !insn.addr !361
  store i32 %3, i32* %storemerge.reg2mem, !insn.addr !362
  br label %dec_label_pc_2384, !insn.addr !362

dec_label_pc_2384:                                ; preds = %dec_label_pc_2371, %dec_label_pc_2366
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !363

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 (i32, ...)* @syscall, { 1, 0, 2 }
}

define i32 @call_linux_syscall() local_unnamed_addr {
dec_label_pc_2389:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !364
  %3 = add i32 %2, add (i32 ptrtoint (i32* @global_var_4b5c to i32), i32 -11928), !insn.addr !365
  %4 = call i32 @param_linux_syscall(i32 %3), !insn.addr !366
  %5 = icmp slt i32 %4, 0, !insn.addr !367
  %. = select i1 %5, i32 -1, i32 42
  ret i32 %., !insn.addr !368
}

define i32 @param_win32_api(i32 %arg1) local_unnamed_addr {
dec_label_pc_23c6:
  %0 = alloca i32
  %eax.1.reg2mem = alloca i32, !insn.addr !369
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-104 = alloca i32, align 4
  %3 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !370
  %4 = call i32 @__readgsdword(i32 20), !insn.addr !371
  %5 = bitcast i32* %stack_var_-104 to %stat*
  %6 = inttoptr i32 %arg1 to i8*, !insn.addr !372
  %7 = call i32 @stat(i8* %6, %stat* nonnull %5), !insn.addr !372
  %8 = icmp slt i32 %7, 0, !insn.addr !373
  %9 = icmp eq i1 %8, false, !insn.addr !374
  %10 = icmp slt i32 %2, 1
  %. = select i1 %10, i32 -2, i32 42
  %eax.0 = select i1 %9, i32 %., i32 -1
  %11 = call i32 @__readgsdword(i32 20), !insn.addr !375
  %12 = icmp eq i32 %4, %11, !insn.addr !375
  store i32 %eax.0, i32* %eax.1.reg2mem, !insn.addr !376
  br i1 %12, label %dec_label_pc_2430, label %dec_label_pc_242b, !insn.addr !376

dec_label_pc_242b:                                ; preds = %dec_label_pc_23c6
  %13 = call i32 @__stack_chk_fail_local(), !insn.addr !377
  store i32 %13, i32* %eax.1.reg2mem, !insn.addr !377
  br label %dec_label_pc_2430, !insn.addr !377

dec_label_pc_2430:                                ; preds = %dec_label_pc_242b, %dec_label_pc_23c6
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !378

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @call_win32_api() local_unnamed_addr {
dec_label_pc_2435:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !379
  %3 = add i32 %2, add (i32 ptrtoint (i32* @global_var_4ab0 to i32), i32 -11928), !insn.addr !380
  %4 = call i32 @param_win32_api(i32 %3), !insn.addr !381
  ret i32 %4, !insn.addr !382
}

define i32 @param_fork_exec(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_245d:
  %0 = alloca i32
  %eax.1.reg2mem = alloca i32, !insn.addr !383
  %eax.0.reg2mem = alloca i32, !insn.addr !383
  %1 = load i32, i32* %0
  %stack_var_-28 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !384
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !385
  %4 = call i32 @fork(), !insn.addr !386
  %5 = icmp slt i32 %4, 0, !insn.addr !387
  %6 = icmp eq i1 %5, false, !insn.addr !388
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !388
  br i1 %6, label %dec_label_pc_249f, label %dec_label_pc_2500, !insn.addr !388

dec_label_pc_249f:                                ; preds = %dec_label_pc_245d
  %7 = icmp eq i32 %4, 0, !insn.addr !389
  %8 = icmp eq i1 %7, false, !insn.addr !390
  br i1 %8, label %dec_label_pc_24c2, label %dec_label_pc_24a5, !insn.addr !390

dec_label_pc_24a5:                                ; preds = %dec_label_pc_249f
  %9 = inttoptr i32 %arg1 to i8*, !insn.addr !391
  %10 = call i32 (i8*, i8*, ...) @execl(i8* %9, i8* %9), !insn.addr !391
  call void @_exit(i32 127), !insn.addr !392
  unreachable, !insn.addr !392

dec_label_pc_24c2:                                ; preds = %dec_label_pc_249f
  %11 = call i32 @waitpid(i32 %4, i32* nonnull %stack_var_-28, i32 0), !insn.addr !393
  %12 = icmp slt i32 %11, 0, !insn.addr !394
  %13 = icmp eq i1 %12, false, !insn.addr !395
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !395
  br i1 %13, label %dec_label_pc_24e6, label %dec_label_pc_2500, !insn.addr !395

dec_label_pc_24e6:                                ; preds = %dec_label_pc_24c2
  %14 = load i32, i32* %stack_var_-28, align 4, !insn.addr !396
  %15 = urem i32 %14, 128, !insn.addr !397
  %16 = icmp eq i32 %15, 0, !insn.addr !398
  %17 = icmp eq i1 %16, false, !insn.addr !399
  store i32 -3, i32* %eax.0.reg2mem, !insn.addr !399
  br i1 %17, label %dec_label_pc_2500, label %dec_label_pc_24f0, !insn.addr !399

dec_label_pc_24f0:                                ; preds = %dec_label_pc_24e6
  %18 = udiv i32 %14, 256
  %19 = urem i32 %18, 256, !insn.addr !400
  store i32 %19, i32* %eax.0.reg2mem, !insn.addr !401
  br label %dec_label_pc_2500, !insn.addr !401

dec_label_pc_2500:                                ; preds = %dec_label_pc_24e6, %dec_label_pc_24c2, %dec_label_pc_245d, %dec_label_pc_24f0
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %20 = call i32 @__readgsdword(i32 20), !insn.addr !402
  %21 = icmp eq i32 %3, %20, !insn.addr !402
  store i32 %eax.0.reload, i32* %eax.1.reg2mem, !insn.addr !403
  br i1 %21, label %dec_label_pc_2511, label %dec_label_pc_250c, !insn.addr !403

dec_label_pc_250c:                                ; preds = %dec_label_pc_2500
  %22 = call i32 @__stack_chk_fail_local(), !insn.addr !404
  store i32 %22, i32* %eax.1.reg2mem, !insn.addr !404
  br label %dec_label_pc_2511, !insn.addr !404

dec_label_pc_2511:                                ; preds = %dec_label_pc_250c, %dec_label_pc_2500
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !405

; uselistorder directives
  uselistorder i32* %stack_var_-28, { 1, 0 }
  uselistorder i32* %eax.0.reg2mem, { 0, 4, 1, 2, 3 }
  uselistorder i32 256, { 1, 0 }
  uselistorder label %dec_label_pc_2500, { 3, 0, 1, 2 }
}

define i32 @call_fork_exec() local_unnamed_addr {
dec_label_pc_2516:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !406
  %3 = add i32 %2, add (i32 ptrtoint (i32* @global_var_49cf to i32), i32 -11474), !insn.addr !407
  %4 = call i32 @param_fork_exec(i32 %3, i32 0), !insn.addr !408
  %5 = icmp eq i32 %4, 0, !insn.addr !409
  %6 = icmp eq i1 %5, false, !insn.addr !410
  %. = select i1 %6, i32 -1, i32 42
  ret i32 %., !insn.addr !411
}

define i32 @param_pipe_communication() local_unnamed_addr {
dec_label_pc_2555:
  %0 = alloca i32
  %1 = alloca i8*
  %eax.1.reg2mem = alloca i32, !insn.addr !412
  %eax.0.reg2mem = alloca i32, !insn.addr !412
  %2 = load i32, i32* %0
  %stack_var_-48 = alloca i32, align 4
  %3 = load i8*, i8** %1
  %stack_var_-56 = alloca i32, align 4
  %4 = call i32 @__x86.get_pc_thunk.bx(i32 %2), !insn.addr !413
  %5 = call i32 @__readgsdword(i32 20), !insn.addr !414
  %6 = ptrtoint i32* %stack_var_-56 to i32, !insn.addr !415
  %7 = insertvalue [2 x i32] undef, i32 %6, 0, !insn.addr !415
  %8 = call i32 @pipe([2 x i32] %7), !insn.addr !415
  %9 = icmp slt i32 %8, 0, !insn.addr !416
  %10 = icmp eq i1 %9, false, !insn.addr !417
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !417
  br i1 %10, label %dec_label_pc_2593, label %dec_label_pc_2663, !insn.addr !417

dec_label_pc_2593:                                ; preds = %dec_label_pc_2555
  %11 = call i32 @fork(), !insn.addr !418
  %12 = icmp slt i32 %11, 0, !insn.addr !419
  %13 = icmp eq i1 %12, false, !insn.addr !420
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !420
  br i1 %13, label %dec_label_pc_25ab, label %dec_label_pc_2663, !insn.addr !420

dec_label_pc_25ab:                                ; preds = %dec_label_pc_2593
  %14 = ptrtoint i8* %3 to i32
  %15 = icmp eq i32 %11, 0, !insn.addr !421
  %16 = icmp eq i1 %15, false, !insn.addr !422
  br i1 %16, label %dec_label_pc_2603, label %dec_label_pc_25b1, !insn.addr !422

dec_label_pc_25b1:                                ; preds = %dec_label_pc_25ab
  %17 = load i32, i32* %stack_var_-56, align 4, !insn.addr !423
  %18 = call i32 @close(i32 %17), !insn.addr !424
  %19 = add i32 %2, add (i32 ptrtoint (i32* @global_var_498f to i32), i32 -11464), !insn.addr !425
  %20 = inttoptr i32 %19 to i8*, !insn.addr !426
  %21 = call i32 @strlen(i8* %20), !insn.addr !427
  %22 = inttoptr i32 %19 to i32*, !insn.addr !428
  %23 = call i32 @write(i32 %14, i32* %22, i32 %21), !insn.addr !428
  %24 = call i32 @close(i32 %14), !insn.addr !429
  call void @_exit(i32 0), !insn.addr !430
  unreachable, !insn.addr !430

dec_label_pc_2603:                                ; preds = %dec_label_pc_25ab
  %25 = call i32 @close(i32 %14), !insn.addr !431
  %26 = load i32, i32* %stack_var_-56, align 4, !insn.addr !432
  %27 = call i32 @read(i32 %26, i32* nonnull %stack_var_-48, i32 31), !insn.addr !433
  %28 = ptrtoint i32* %stack_var_-48 to i32, !insn.addr !434
  %29 = add i32 %27, %28, !insn.addr !435
  %30 = inttoptr i32 %29 to i8*, !insn.addr !436
  store i8 0, i8* %30, align 1, !insn.addr !436
  %31 = load i32, i32* %stack_var_-56, align 4, !insn.addr !437
  %32 = call i32 @close(i32 %31), !insn.addr !438
  %33 = call i32 @wait(i32 0), !insn.addr !439
  %34 = icmp slt i32 %27, 1, !insn.addr !440
  %. = select i1 %34, i32 -3, i32 42
  store i32 %., i32* %eax.0.reg2mem, !insn.addr !441
  br label %dec_label_pc_2663, !insn.addr !441

dec_label_pc_2663:                                ; preds = %dec_label_pc_2603, %dec_label_pc_2593, %dec_label_pc_2555
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %35 = call i32 @__readgsdword(i32 20), !insn.addr !442
  %36 = icmp eq i32 %5, %35, !insn.addr !442
  store i32 %eax.0.reload, i32* %eax.1.reg2mem, !insn.addr !443
  br i1 %36, label %dec_label_pc_2674, label %dec_label_pc_266f, !insn.addr !443

dec_label_pc_266f:                                ; preds = %dec_label_pc_2663
  %37 = call i32 @__stack_chk_fail_local(), !insn.addr !444
  store i32 %37, i32* %eax.1.reg2mem, !insn.addr !444
  br label %dec_label_pc_2674, !insn.addr !444

dec_label_pc_2674:                                ; preds = %dec_label_pc_266f, %dec_label_pc_2663
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !445

; uselistorder directives
  uselistorder i32 %27, { 1, 0 }
  uselistorder i32 %14, { 0, 2, 1 }
  uselistorder i32* %stack_var_-56, { 1, 2, 3, 0 }
  uselistorder i32* %stack_var_-48, { 1, 0 }
  uselistorder i32 %2, { 1, 0 }
  uselistorder void (i32)* @_exit, { 1, 0, 2 }
  uselistorder i32 ()* @fork, { 1, 0, 2 }
}

define i32 @call_pipe_communication() local_unnamed_addr {
dec_label_pc_2679:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !446
  %3 = call i32 @param_pipe_communication(), !insn.addr !447
  ret i32 %3, !insn.addr !448
}

define i32 @param_socket_create() local_unnamed_addr {
dec_label_pc_2694:
  %0 = alloca i32
  %eax.1.reg2mem = alloca i32, !insn.addr !449
  %eax.0.reg2mem = alloca i32, !insn.addr !449
  %1 = load i32, i32* %0
  %stack_var_-32 = alloca i32, align 4
  %stack_var_-40 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !450
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !451
  %4 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !452
  %5 = icmp slt i32 %4, 0, !insn.addr !453
  %6 = icmp eq i1 %5, false, !insn.addr !454
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !454
  br i1 %6, label %dec_label_pc_26d9, label %dec_label_pc_27ae, !insn.addr !454

dec_label_pc_26d9:                                ; preds = %dec_label_pc_2694
  store i32 1, i32* %stack_var_-40, align 4, !insn.addr !455
  %7 = call i32 @setsockopt(i32 %4, i32 1, i32 2, i32* nonnull %stack_var_-40, i32 4), !insn.addr !456
  %8 = icmp slt i32 %7, 0, !insn.addr !457
  %9 = icmp eq i1 %8, false, !insn.addr !458
  br i1 %9, label %dec_label_pc_2714, label %dec_label_pc_26fc, !insn.addr !458

dec_label_pc_26fc:                                ; preds = %dec_label_pc_26d9
  %10 = call i32 @close(i32 %4), !insn.addr !459
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !460
  br label %dec_label_pc_27ae, !insn.addr !460

dec_label_pc_2714:                                ; preds = %dec_label_pc_26d9
  %11 = call i32* @memset(i32* nonnull %stack_var_-32, i32 0, i32 16), !insn.addr !461
  store i32 2, i32* %stack_var_-32, align 4, !insn.addr !462
  %12 = call i16 @htons(i16 0), !insn.addr !463
  %13 = bitcast i32* %stack_var_-32 to %sockaddr*
  %14 = call i32 @bind(i32 %4, %sockaddr* nonnull %13, i32 16), !insn.addr !464
  %15 = icmp slt i32 %14, 0, !insn.addr !465
  %16 = icmp eq i1 %15, false, !insn.addr !466
  br i1 %16, label %dec_label_pc_2772, label %dec_label_pc_275d, !insn.addr !466

dec_label_pc_275d:                                ; preds = %dec_label_pc_2714
  %17 = call i32 @close(i32 %4), !insn.addr !467
  store i32 -3, i32* %eax.0.reg2mem, !insn.addr !468
  br label %dec_label_pc_27ae, !insn.addr !468

dec_label_pc_2772:                                ; preds = %dec_label_pc_2714
  %18 = call i32 @listen(i32 %4, i32 5), !insn.addr !469
  %19 = icmp slt i32 %18, 0, !insn.addr !470
  %20 = icmp eq i1 %19, false, !insn.addr !471
  %21 = call i32 @close(i32 %4)
  %. = select i1 %20, i32 42, i32 -4
  store i32 %., i32* %eax.0.reg2mem, !insn.addr !472
  br label %dec_label_pc_27ae, !insn.addr !472

dec_label_pc_27ae:                                ; preds = %dec_label_pc_2772, %dec_label_pc_2694, %dec_label_pc_275d, %dec_label_pc_26fc
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %22 = call i32 @__readgsdword(i32 20), !insn.addr !473
  %23 = icmp eq i32 %3, %22, !insn.addr !473
  store i32 %eax.0.reload, i32* %eax.1.reg2mem, !insn.addr !474
  br i1 %23, label %dec_label_pc_27bf, label %dec_label_pc_27ba, !insn.addr !474

dec_label_pc_27ba:                                ; preds = %dec_label_pc_27ae
  %24 = call i32 @__stack_chk_fail_local(), !insn.addr !475
  store i32 %24, i32* %eax.1.reg2mem, !insn.addr !475
  br label %dec_label_pc_27bf, !insn.addr !475

dec_label_pc_27bf:                                ; preds = %dec_label_pc_27ba, %dec_label_pc_27ae
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !476

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
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !477
  %3 = call i32 @param_socket_create(), !insn.addr !478
  ret i32 %3, !insn.addr !479
}

define i32 @param_shmget_shmat() local_unnamed_addr {
dec_label_pc_27df:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !480
  %1 = load i32, i32* %0
  %stack_var_-20 = alloca i8*, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !481
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4705 to i32), i32 -11454), !insn.addr !482
  %4 = inttoptr i32 %3 to i8*, !insn.addr !483
  %5 = call i32 (i8*, i32, ...) @open(i8* %4, i32 66), !insn.addr !484
  %6 = icmp slt i32 %5, 0, !insn.addr !485
  %7 = icmp eq i1 %6, false, !insn.addr !486
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !486
  br i1 %7, label %dec_label_pc_2826, label %dec_label_pc_28f4, !insn.addr !486

dec_label_pc_2826:                                ; preds = %dec_label_pc_27df
  %8 = call i32 @close(i32 %5), !insn.addr !487
  %9 = call i32 @ftok(i8* %4, i32 42), !insn.addr !488
  %10 = icmp slt i32 %9, 0, !insn.addr !489
  %11 = icmp eq i1 %10, false, !insn.addr !490
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !490
  br i1 %11, label %dec_label_pc_285b, label %dec_label_pc_28f4, !insn.addr !490

dec_label_pc_285b:                                ; preds = %dec_label_pc_2826
  %12 = call i32 @shmget(i32 %9, i32 4096, i32 ptrtoint (%shmid_ds** @global_var_3b6 to i32)), !insn.addr !491
  %13 = icmp slt i32 %12, 0, !insn.addr !492
  %14 = icmp eq i1 %13, false, !insn.addr !493
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !493
  br i1 %14, label %dec_label_pc_2883, label %dec_label_pc_28f4, !insn.addr !493

dec_label_pc_2883:                                ; preds = %dec_label_pc_285b
  %15 = call i32* @shmat(i32 %12, i32* null, i32 0), !insn.addr !494
  %16 = bitcast i32* %15 to i8*
  store i8* %16, i8** %stack_var_-20, align 4, !insn.addr !495
  %17 = icmp eq i32* %15, inttoptr (i32 -1 to i32*), !insn.addr !496
  %18 = icmp eq i1 %17, false, !insn.addr !497
  store i32 -3, i32* %eax.0.reg2mem, !insn.addr !497
  br i1 %18, label %dec_label_pc_28a5, label %dec_label_pc_28f4, !insn.addr !497

dec_label_pc_28a5:                                ; preds = %dec_label_pc_2883
  %19 = ptrtoint i32* %15 to i32, !insn.addr !498
  store i32 1918986323, i32* %15, align 4, !insn.addr !499
  %20 = add i32 %19, 4, !insn.addr !500
  %21 = inttoptr i32 %20 to i32*, !insn.addr !500
  store i32 1699570789, i32* %21, align 4, !insn.addr !500
  %22 = add i32 %19, 8, !insn.addr !501
  %23 = inttoptr i32 %22 to i32*, !insn.addr !501
  store i32 2037542765, i32* %23, align 4, !insn.addr !501
  %24 = add i32 %19, 12, !insn.addr !502
  %25 = inttoptr i32 %24 to i8*, !insn.addr !502
  store i8 0, i8* %25, align 1, !insn.addr !502
  %26 = load i8*, i8** %stack_var_-20, align 4
  %27 = call i32 @strlen(i8* %26), !insn.addr !503
  %28 = bitcast i8* %26 to i32*
  %29 = call i32 @shmdt(i32* %28), !insn.addr !504
  %30 = call i32 @shmctl(i32 %12, i32 0, %shmid_ds* null), !insn.addr !505
  store i32 %27, i32* %eax.0.reg2mem, !insn.addr !506
  br label %dec_label_pc_28f4, !insn.addr !506

dec_label_pc_28f4:                                ; preds = %dec_label_pc_2883, %dec_label_pc_285b, %dec_label_pc_2826, %dec_label_pc_27df, %dec_label_pc_28a5
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !507

; uselistorder directives
  uselistorder i32 %19, { 2, 0, 1 }
  uselistorder i32* %15, { 1, 0, 2, 3 }
  uselistorder i32* %eax.0.reg2mem, { 0, 5, 1, 2, 3, 4 }
  uselistorder i32 (i8*)* @strlen, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder i32 (i32)* @close, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder label %dec_label_pc_28f4, { 4, 0, 1, 2, 3 }
}

define i32 @call_shmget_shmat() local_unnamed_addr {
dec_label_pc_28f9:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !508
  %3 = call i32 @param_shmget_shmat(), !insn.addr !509
  %4 = icmp slt i32 %3, 1, !insn.addr !510
  %. = select i1 %4, i32 -1, i32 42
  ret i32 %., !insn.addr !511
}

define i32 @signal_handler(i32 %arg1) local_unnamed_addr {
dec_label_pc_2929:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !512
  %3 = add i32 %2, ptrtoint (i32* @global_var_45bf to i32), !insn.addr !513
  %4 = add i32 %2, add (i32 ptrtoint (i32* @global_var_45bf to i32), i32 332), !insn.addr !514
  %5 = inttoptr i32 %4 to i32*, !insn.addr !514
  store i32 1, i32* %5, align 4, !insn.addr !514
  %6 = add i32 %2, add (i32 ptrtoint (i32* @global_var_45bf to i32), i32 336), !insn.addr !515
  %7 = inttoptr i32 %6 to i32*, !insn.addr !515
  store i32 %arg1, i32* %7, align 4, !insn.addr !515
  ret i32 %3, !insn.addr !516
}

define i32 @param_signal_handling() local_unnamed_addr {
dec_label_pc_2950:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !517
  %.reg2mem18 = alloca i32, !insn.addr !517
  %.reg2mem16 = alloca i32, !insn.addr !517
  %.reg2mem14 = alloca i32, !insn.addr !517
  %.reg2mem = alloca i32, !insn.addr !517
  %1 = load i32, i32* %0
  %stack_var_-28 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !518
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4594 to i32), i32 -17867), !insn.addr !519
  %4 = inttoptr i32 %3 to void (i32)*, !insn.addr !520
  %5 = call void (i32)* @signal(i32 10, void (i32)* %4), !insn.addr !521
  %6 = icmp eq void (i32)* %5, inttoptr (i32 -1 to void (i32)*), !insn.addr !522
  %7 = icmp eq i1 %6, false, !insn.addr !523
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !523
  br i1 %7, label %dec_label_pc_2989, label %dec_label_pc_2aa2, !insn.addr !523

dec_label_pc_2989:                                ; preds = %dec_label_pc_2950
  %8 = call void (i32)* @signal(i32 14, void (i32)* %4), !insn.addr !524
  %9 = icmp eq void (i32)* %8, inttoptr (i32 -1 to void (i32)*), !insn.addr !525
  %10 = icmp eq i1 %9, false, !insn.addr !526
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !526
  br i1 %10, label %dec_label_pc_29ac, label %dec_label_pc_2aa2, !insn.addr !526

dec_label_pc_29ac:                                ; preds = %dec_label_pc_2989
  %11 = ptrtoint i32* %stack_var_-28 to i32, !insn.addr !527
  %12 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4594 to i32), i32 332), !insn.addr !528
  %13 = inttoptr i32 %12 to i32*, !insn.addr !528
  store i32 0, i32* %13, align 4, !insn.addr !528
  %14 = call i32 @raise(i32 10), !insn.addr !529
  %15 = load i32, i32* %13, align 4, !insn.addr !530
  %16 = icmp eq i32 %15, 0, !insn.addr !531
  %17 = icmp eq i1 %16, false, !insn.addr !532
  store i32 %15, i32* %.reg2mem14, !insn.addr !532
  br i1 %17, label %dec_label_pc_29f3, label %dec_label_pc_29e6.lr.ph, !insn.addr !532

dec_label_pc_29e6.lr.ph:                          ; preds = %dec_label_pc_29ac
  %18 = add i32 %11, -16
  %19 = inttoptr i32 %18 to i32*
  store i32 add (i32 ptrtoint (i32* @global_var_3e8 to i32), i32 -1), i32* %.reg2mem, !insn.addr !533
  store i32 %15, i32* %.reg2mem14, !insn.addr !533
  br i1 icmp sge (i32* @global_var_3e8, i32* null), label %dec_label_pc_29cc, label %dec_label_pc_29f3, !insn.addr !533

dec_label_pc_29cc:                                ; preds = %dec_label_pc_29e6.lr.ph, %dec_label_pc_29e6
  %.reload = load i32, i32* %.reg2mem
  store i32 ptrtoint (i32* @global_var_3e8 to i32), i32* %19, align 4, !insn.addr !534
  %20 = call i32 @usleep(i32 %.reload), !insn.addr !535
  %21 = load i32, i32* %13, align 4, !insn.addr !530
  %22 = icmp eq i32 %21, 0, !insn.addr !531
  %23 = icmp eq i1 %22, false, !insn.addr !532
  store i32 %21, i32* %.reg2mem14, !insn.addr !532
  br i1 %23, label %dec_label_pc_29f3, label %dec_label_pc_29e6, !insn.addr !532

dec_label_pc_29e6:                                ; preds = %dec_label_pc_29cc
  %24 = add i32 %.reload, -1, !insn.addr !536
  %25 = icmp eq i32 %.reload, 0, !insn.addr !537
  %26 = icmp slt i32 %.reload, 0, !insn.addr !537
  %27 = icmp eq i1 %26, false, !insn.addr !533
  %28 = icmp eq i1 %25, false, !insn.addr !533
  %29 = icmp eq i1 %27, %28, !insn.addr !533
  store i32 %24, i32* %.reg2mem, !insn.addr !533
  store i32 %21, i32* %.reg2mem14, !insn.addr !533
  br i1 %29, label %dec_label_pc_29cc, label %dec_label_pc_29f3, !insn.addr !533

dec_label_pc_29f3:                                ; preds = %dec_label_pc_29e6.lr.ph, %dec_label_pc_29e6, %dec_label_pc_29cc, %dec_label_pc_29ac
  %.reload15 = load i32, i32* %.reg2mem14, !insn.addr !538
  %30 = icmp eq i32 %.reload15, 0, !insn.addr !539
  %31 = icmp eq i1 %30, false, !insn.addr !540
  store i32 -3, i32* %eax.0.reg2mem, !insn.addr !540
  br i1 %31, label %dec_label_pc_2a07, label %dec_label_pc_2aa2, !insn.addr !540

dec_label_pc_2a07:                                ; preds = %dec_label_pc_29f3
  %32 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4594 to i32), i32 336), !insn.addr !541
  %33 = inttoptr i32 %32 to i32*, !insn.addr !541
  %34 = load i32, i32* %33, align 4, !insn.addr !541
  %35 = icmp eq i32 %34, 10, !insn.addr !542
  store i32 -4, i32* %eax.0.reg2mem, !insn.addr !543
  br i1 %35, label %dec_label_pc_2a1c, label %dec_label_pc_2aa2, !insn.addr !543

dec_label_pc_2a1c:                                ; preds = %dec_label_pc_2a07
  store i32 0, i32* %13, align 4, !insn.addr !544
  %36 = add i32 %11, -16, !insn.addr !545
  %37 = inttoptr i32 %36 to i32*, !insn.addr !545
  store i32 1, i32* %37, align 4, !insn.addr !545
  %38 = call i32 @alarm(i32 ptrtoint (i32* @0 to i32)), !insn.addr !546
  %39 = load i32, i32* %13, align 4
  %40 = icmp eq i32 %39, 0, !insn.addr !547
  %41 = icmp eq i1 %40, false, !insn.addr !548
  %brmerge = or i1 %41, icmp slt (i32* @global_var_7d0, i32* null)
  store i32 add (i32 ptrtoint (i32* @global_var_7d0 to i32), i32 -1), i32* %.reg2mem16, !insn.addr !548
  store i32 %39, i32* %.reg2mem18, !insn.addr !548
  br i1 %brmerge, label %dec_label_pc_2a63, label %dec_label_pc_2a3c, !insn.addr !548

dec_label_pc_2a3c:                                ; preds = %dec_label_pc_2a1c, %dec_label_pc_2a56
  %.reload17 = load i32, i32* %.reg2mem16
  store i32 ptrtoint (i32* @global_var_3e8 to i32), i32* %37, align 4, !insn.addr !549
  %42 = call i32 @usleep(i32 %.reload17), !insn.addr !550
  %43 = load i32, i32* %13, align 4
  %44 = icmp eq i32 %43, 0, !insn.addr !547
  %45 = icmp eq i1 %44, false, !insn.addr !548
  store i32 %43, i32* %.reg2mem18, !insn.addr !548
  br i1 %45, label %dec_label_pc_2a63, label %dec_label_pc_2a56, !insn.addr !548

dec_label_pc_2a56:                                ; preds = %dec_label_pc_2a3c
  %46 = add i32 %.reload17, -1, !insn.addr !551
  %47 = icmp eq i32 %.reload17, 0, !insn.addr !552
  %48 = icmp slt i32 %.reload17, 0, !insn.addr !552
  %49 = icmp eq i1 %48, false, !insn.addr !553
  %50 = icmp eq i1 %47, false, !insn.addr !553
  %51 = icmp eq i1 %49, %50, !insn.addr !553
  store i32 %46, i32* %.reg2mem16, !insn.addr !553
  store i32 %43, i32* %.reg2mem18, !insn.addr !553
  br i1 %51, label %dec_label_pc_2a3c, label %dec_label_pc_2a63, !insn.addr !553

dec_label_pc_2a63:                                ; preds = %dec_label_pc_2a1c, %dec_label_pc_2a56, %dec_label_pc_2a3c
  %.reload19 = load i32, i32* %.reg2mem18, !insn.addr !554
  %52 = icmp eq i32 %.reload19, 0, !insn.addr !555
  store i32 -5, i32* %eax.0.reg2mem, !insn.addr !556
  br i1 %52, label %dec_label_pc_2aa2, label %dec_label_pc_2a6d, !insn.addr !556

dec_label_pc_2a6d:                                ; preds = %dec_label_pc_2a63
  %53 = load i32, i32* %33, align 4, !insn.addr !557
  %54 = icmp eq i32 %53, 14, !insn.addr !558
  store i32 -5, i32* %eax.0.reg2mem, !insn.addr !559
  br i1 %54, label %dec_label_pc_2a7f, label %dec_label_pc_2aa2, !insn.addr !559

dec_label_pc_2a7f:                                ; preds = %dec_label_pc_2a6d
  %55 = add i32 %11, -12, !insn.addr !560
  %56 = inttoptr i32 %55 to i32*, !insn.addr !560
  store i32 0, i32* %56, align 4, !insn.addr !560
  store i32 10, i32* %37, align 4, !insn.addr !561
  %57 = call void (i32)* @signal(i32 ptrtoint (i32* @0 to i32), void (i32)* bitcast (i32* @0 to void (i32)*)), !insn.addr !562
  store i32 0, i32* %56, align 4, !insn.addr !563
  store i32 14, i32* %37, align 4, !insn.addr !564
  %58 = call void (i32)* @signal(i32 ptrtoint (i32* @0 to i32), void (i32)* bitcast (i32* @0 to void (i32)*)), !insn.addr !565
  store i32 42, i32* %eax.0.reg2mem, !insn.addr !566
  br label %dec_label_pc_2aa2, !insn.addr !566

dec_label_pc_2aa2:                                ; preds = %dec_label_pc_2a63, %dec_label_pc_2a6d, %dec_label_pc_2a07, %dec_label_pc_29f3, %dec_label_pc_2989, %dec_label_pc_2950, %dec_label_pc_2a7f
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !567

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
  uselistorder i32 10, { 7, 1, 2, 3, 0, 4, 5, 6 }
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
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !568
  %3 = call i32 @param_signal_handling(), !insn.addr !569
  ret i32 %3, !insn.addr !570
}

define i32 @test_system_calls() local_unnamed_addr {
dec_label_pc_2ac2:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !571
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4422 to i32), i32 -11436), !insn.addr !572
  %4 = inttoptr i32 %3 to i8*, !insn.addr !573
  %5 = call i32 @puts(i8* %4), !insn.addr !574
  %6 = call i32 @call_linux_syscall(), !insn.addr !575
  %7 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4422 to i32), i32 -11409), !insn.addr !576
  %8 = inttoptr i32 %7 to i8*, !insn.addr !577
  %9 = call i32 (i8*, ...) @printf(i8* %8), !insn.addr !578
  %10 = call i32 @call_win32_api(), !insn.addr !579
  %11 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4422 to i32), i32 -11381), !insn.addr !580
  %12 = inttoptr i32 %11 to i8*, !insn.addr !581
  %13 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !582
  %14 = call i32 @call_fork_exec(), !insn.addr !583
  %15 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4422 to i32), i32 -11353), !insn.addr !584
  %16 = inttoptr i32 %15 to i8*, !insn.addr !585
  %17 = call i32 (i8*, ...) @printf(i8* %16), !insn.addr !586
  %18 = call i32 @call_pipe_communication(), !insn.addr !587
  %19 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4422 to i32), i32 -11325), !insn.addr !588
  %20 = inttoptr i32 %19 to i8*, !insn.addr !589
  %21 = call i32 (i8*, ...) @printf(i8* %20), !insn.addr !590
  %22 = call i32 @call_socket_create(), !insn.addr !591
  %23 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4422 to i32), i32 -11297), !insn.addr !592
  %24 = inttoptr i32 %23 to i8*, !insn.addr !593
  %25 = call i32 (i8*, ...) @printf(i8* %24), !insn.addr !594
  %26 = call i32 @call_shmget_shmat(), !insn.addr !595
  %27 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4422 to i32), i32 -11269), !insn.addr !596
  %28 = inttoptr i32 %27 to i8*, !insn.addr !597
  %29 = call i32 (i8*, ...) @printf(i8* %28), !insn.addr !598
  %30 = call i32 @call_signal_handling(), !insn.addr !599
  %31 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4422 to i32), i32 -11241), !insn.addr !600
  %32 = inttoptr i32 %31 to i8*, !insn.addr !601
  %33 = call i32 (i8*, ...) @printf(i8* %32), !insn.addr !602
  ret i32 %33, !insn.addr !603
}

define i32 @thread_compute(i32 %arg1) local_unnamed_addr {
dec_label_pc_2b98:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 %1), !insn.addr !604
  %3 = inttoptr i32 %arg1 to i32*, !insn.addr !605
  %4 = load i32, i32* %3, align 4, !insn.addr !605
  %5 = mul i32 %4, %4, !insn.addr !606
  %6 = call i32* @malloc(i32 4), !insn.addr !607
  %7 = ptrtoint i32* %6 to i32, !insn.addr !607
  store i32 %5, i32* %6, align 4, !insn.addr !608
  ret i32 %7, !insn.addr !609
}

define i32 @param_pthread_create(i32 %arg1) local_unnamed_addr {
dec_label_pc_2be7:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !610
  %storemerge.reg2mem = alloca i32, !insn.addr !610
  %1 = load i32, i32* %0
  %stack_var_-28 = alloca i32, align 4
  %stack_var_-36 = alloca i32, align 4
  %stack_var_-32 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !611
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !612
  store i32 %arg1, i32* %stack_var_-32, align 4, !insn.addr !613
  %4 = add i32 %1, add (i32 ptrtoint (i32* @global_var_42fd to i32), i32 -17244), !insn.addr !614
  %5 = inttoptr i32 %4 to i32* (i32*)*, !insn.addr !615
  %6 = call i32 @pthread_create(i32* nonnull %stack_var_-36, i32* null, i32* (i32*)* %5, i32* nonnull %stack_var_-32), !insn.addr !616
  %7 = icmp eq i32 %6, 0, !insn.addr !617
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !618
  br i1 %7, label %dec_label_pc_2c37, label %dec_label_pc_2c64, !insn.addr !618

dec_label_pc_2c37:                                ; preds = %dec_label_pc_2be7
  %8 = load i32, i32* %stack_var_-36, align 4, !insn.addr !619
  %9 = bitcast i32* %stack_var_-28 to i32**, !insn.addr !620
  %10 = call i32 @pthread_join(i32 %8, i32** nonnull %9), !insn.addr !620
  %11 = load i32, i32* %stack_var_-28, align 4
  %12 = inttoptr i32 %11 to i32*, !insn.addr !621
  %13 = load i32, i32* %12, align 4, !insn.addr !621
  call void @free(i32* %12), !insn.addr !622
  store i32 %13, i32* %storemerge.reg2mem, !insn.addr !623
  br label %dec_label_pc_2c64, !insn.addr !623

dec_label_pc_2c64:                                ; preds = %dec_label_pc_2be7, %dec_label_pc_2c37
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %14 = call i32 @__readgsdword(i32 20), !insn.addr !624
  %15 = icmp eq i32 %3, %14, !insn.addr !624
  store i32 %storemerge.reload, i32* %eax.0.reg2mem, !insn.addr !625
  br i1 %15, label %dec_label_pc_2c75, label %dec_label_pc_2c70, !insn.addr !625

dec_label_pc_2c70:                                ; preds = %dec_label_pc_2c64
  %16 = call i32 @__stack_chk_fail_local(), !insn.addr !626
  store i32 %16, i32* %eax.0.reg2mem, !insn.addr !626
  br label %dec_label_pc_2c75, !insn.addr !626

dec_label_pc_2c75:                                ; preds = %dec_label_pc_2c70, %dec_label_pc_2c64
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !627

; uselistorder directives
  uselistorder i32* %stack_var_-36, { 1, 0 }
  uselistorder i32* %stack_var_-28, { 1, 0 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2c64, { 1, 0 }
}

define i32 @call_pthread_create() local_unnamed_addr {
dec_label_pc_2c7a:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !628
  %3 = call i32 @param_pthread_create(i32 7), !insn.addr !629
  ret i32 %3, !insn.addr !630
}

define i32 @thread_sum(i32 %arg1) local_unnamed_addr {
dec_label_pc_2c9d:
  %0 = alloca i32
  %storemerge1.reg2mem = alloca i32, !insn.addr !631
  %.reg2mem = alloca i32, !insn.addr !631
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !632
  %3 = add i32 %arg1, 8, !insn.addr !633
  %4 = inttoptr i32 %3 to i32*, !insn.addr !633
  store i32 0, i32* %4, align 4, !insn.addr !633
  %5 = inttoptr i32 %arg1 to i32*, !insn.addr !634
  %6 = load i32, i32* %5, align 4, !insn.addr !634
  %7 = add i32 %arg1, 4, !insn.addr !635
  %8 = inttoptr i32 %7 to i32*, !insn.addr !635
  %9 = load i32, i32* %8, align 4, !insn.addr !635
  %10 = icmp sgt i32 %6, %9, !insn.addr !636
  store i32 0, i32* %.reg2mem, !insn.addr !636
  store i32 %6, i32* %storemerge1.reg2mem, !insn.addr !636
  br i1 %10, label %dec_label_pc_2ceb, label %dec_label_pc_2ccb, !insn.addr !636

dec_label_pc_2ccb:                                ; preds = %dec_label_pc_2c9d, %dec_label_pc_2ccb
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %.reload = load i32, i32* %.reg2mem, !insn.addr !637
  %11 = add i32 %storemerge1.reload, %.reload, !insn.addr !638
  store i32 %11, i32* %4, align 4, !insn.addr !639
  %12 = add i32 %storemerge1.reload, 1, !insn.addr !640
  %13 = load i32, i32* %8, align 4, !insn.addr !635
  %14 = icmp sgt i32 %12, %13, !insn.addr !636
  store i32 %11, i32* %.reg2mem, !insn.addr !636
  store i32 %12, i32* %storemerge1.reg2mem, !insn.addr !636
  br i1 %14, label %dec_label_pc_2ceb, label %dec_label_pc_2ccb, !insn.addr !636

dec_label_pc_2ceb:                                ; preds = %dec_label_pc_2ccb, %dec_label_pc_2c9d
  ret i32 0, !insn.addr !641

; uselistorder directives
  uselistorder i32* %8, { 1, 0 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge1.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_2ccb, { 1, 0 }
}

define i32 @param_pthread_join() local_unnamed_addr {
dec_label_pc_2cf2:
  %0 = alloca i32
  %eax.1.reg2mem = alloca i32, !insn.addr !642
  %eax.0.reg2mem = alloca i32, !insn.addr !642
  %stack_var_-72.04.reg2mem = alloca i32, !insn.addr !642
  %storemerge5.reg2mem = alloca i32**, !insn.addr !642
  %storemerge26.reg2mem = alloca i32, !insn.addr !642
  %1 = load i32, i32* %0
  %stack_var_-64 = alloca i32, align 4
  %stack_var_-52 = alloca i32, align 4
  %stack_var_-76 = alloca i32, align 4
  %stack_var_-4 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !643
  %3 = ptrtoint i32* %stack_var_-76 to i32, !insn.addr !644
  %4 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !645
  %5 = call i32 @__readgsdword(i32 20), !insn.addr !646
  store i32 1, i32* %stack_var_-52, align 4, !insn.addr !647
  store i32 0, i32* %stack_var_-76, align 4
  %6 = ptrtoint i32* %stack_var_-52 to i32, !insn.addr !648
  %7 = ptrtoint i32* %stack_var_-64 to i32, !insn.addr !649
  %8 = add i32 %3, -4, !insn.addr !650
  %9 = inttoptr i32 %8 to i32*, !insn.addr !650
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_41f2 to i32), i32 -16983), !insn.addr !651
  %11 = add i32 %3, -8, !insn.addr !652
  %12 = inttoptr i32 %11 to i32*, !insn.addr !652
  %13 = add i32 %3, -12
  %14 = inttoptr i32 %13 to i32*
  %15 = add i32 %3, -16
  %16 = inttoptr i32 %15 to i32*
  store i32 0, i32* %storemerge26.reg2mem
  br label %dec_label_pc_2d5b

dec_label_pc_2d5b:                                ; preds = %dec_label_pc_2cf2, %dec_label_pc_2d95
  %storemerge26.reload = load i32, i32* %storemerge26.reg2mem
  %17 = mul i32 %storemerge26.reload, 12, !insn.addr !653
  %18 = add i32 %17, %6, !insn.addr !654
  %19 = mul i32 %storemerge26.reload, 4, !insn.addr !655
  %20 = add i32 %19, %7, !insn.addr !656
  store i32 %18, i32* %9, align 4, !insn.addr !650
  store i32 %10, i32* %12, align 4, !insn.addr !652
  store i32 0, i32* %14, align 4, !insn.addr !657
  store i32 %20, i32* %16, align 4, !insn.addr !658
  %21 = load i32, i32* %stack_var_-76, align 4, !insn.addr !659
  %22 = inttoptr i32 %21 to i32*, !insn.addr !659
  %23 = call i32 @pthread_create(i32* %22, i32* nonnull @0, i32* (i32*)* bitcast (i32* @0 to i32* (i32*)*), i32* nonnull @0), !insn.addr !659
  %24 = icmp eq i32 %23, 0, !insn.addr !660
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !661
  br i1 %24, label %dec_label_pc_2d95, label %dec_label_pc_2df5, !insn.addr !661

dec_label_pc_2d95:                                ; preds = %dec_label_pc_2d5b
  %25 = load i32, i32* %stack_var_-76, align 4, !insn.addr !662
  %26 = add i32 %25, 1, !insn.addr !662
  store i32 %26, i32* %stack_var_-76, align 4
  %27 = icmp slt i32 %26, 3, !insn.addr !663
  store i32 %26, i32* %storemerge26.reg2mem, !insn.addr !663
  br i1 %27, label %dec_label_pc_2d5b, label %dec_label_pc_2dec.preheader, !insn.addr !663

dec_label_pc_2dec.preheader:                      ; preds = %dec_label_pc_2d95
  %28 = add i32 %2, -60, !insn.addr !664
  %29 = add i32 %2, -40
  store i32** null, i32*** %storemerge5.reg2mem
  store i32 0, i32* %stack_var_-72.04.reg2mem
  br label %dec_label_pc_2daf

dec_label_pc_2daf:                                ; preds = %dec_label_pc_2dec.preheader, %dec_label_pc_2dcf
  %stack_var_-72.04.reload = load i32, i32* %stack_var_-72.04.reg2mem
  %storemerge5.reload = load i32**, i32*** %storemerge5.reg2mem
  %30 = ptrtoint i32** %storemerge5.reload to i32, !insn.addr !665
  %31 = mul i32 %30, 4, !insn.addr !664
  %32 = add i32 %28, %31, !insn.addr !664
  %33 = inttoptr i32 %32 to i32*, !insn.addr !664
  %34 = load i32, i32* %33, align 4, !insn.addr !664
  store i32 0, i32* %14, align 4, !insn.addr !666
  store i32 %34, i32* %16, align 4, !insn.addr !667
  %35 = call i32 @pthread_join(i32 %stack_var_-72.04.reload, i32** %storemerge5.reload), !insn.addr !668
  %36 = icmp eq i32 %35, 0, !insn.addr !669
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !670
  br i1 %36, label %dec_label_pc_2dcf, label %dec_label_pc_2df5, !insn.addr !670

dec_label_pc_2dcf:                                ; preds = %dec_label_pc_2daf
  %37 = mul i32 %30, 12, !insn.addr !671
  %38 = add i32 %29, %37, !insn.addr !672
  %39 = inttoptr i32 %38 to i32*, !insn.addr !673
  %40 = load i32, i32* %39, align 4, !insn.addr !673
  %41 = add i32 %40, %stack_var_-72.04.reload, !insn.addr !674
  %42 = add i32 %30, 1, !insn.addr !675
  %43 = inttoptr i32 %42 to i32**, !insn.addr !675
  %44 = icmp slt i32** %43, inttoptr (i32 3 to i32**), !insn.addr !676
  store i32** %43, i32*** %storemerge5.reg2mem, !insn.addr !676
  store i32 %41, i32* %stack_var_-72.04.reg2mem, !insn.addr !676
  store i32 %41, i32* %eax.0.reg2mem, !insn.addr !676
  br i1 %44, label %dec_label_pc_2daf, label %dec_label_pc_2df5, !insn.addr !676

dec_label_pc_2df5:                                ; preds = %dec_label_pc_2d5b, %dec_label_pc_2dcf, %dec_label_pc_2daf
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %45 = call i32 @__readgsdword(i32 20), !insn.addr !677
  %46 = icmp eq i32 %5, %45, !insn.addr !677
  store i32 %eax.0.reload, i32* %eax.1.reg2mem, !insn.addr !678
  br i1 %46, label %dec_label_pc_2e06, label %dec_label_pc_2e01, !insn.addr !678

dec_label_pc_2e01:                                ; preds = %dec_label_pc_2df5
  %47 = call i32 @__stack_chk_fail_local(), !insn.addr !679
  store i32 %47, i32* %eax.1.reg2mem, !insn.addr !679
  br label %dec_label_pc_2e06, !insn.addr !679

dec_label_pc_2e06:                                ; preds = %dec_label_pc_2e01, %dec_label_pc_2df5
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !680

; uselistorder directives
  uselistorder i32 %30, { 1, 2, 0 }
  uselistorder i32 %stack_var_-72.04.reload, { 1, 0 }
  uselistorder i32 %26, { 0, 2, 1 }
  uselistorder i32 %storemerge26.reload, { 1, 0 }
  uselistorder i32* %stack_var_-76, { 1, 3, 2, 0, 4 }
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32* %storemerge26.reg2mem, { 1, 0, 2 }
  uselistorder i32*** %storemerge5.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-72.04.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32 12, { 1, 0, 4, 2, 3 }
  uselistorder label %dec_label_pc_2df5, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2daf, { 1, 0 }
  uselistorder label %dec_label_pc_2d5b, { 1, 0 }
}

define i32 @call_pthread_join() local_unnamed_addr {
dec_label_pc_2e0b:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !681
  %3 = call i32 @param_pthread_join(), !insn.addr !682
  ret i32 %3, !insn.addr !683
}

define i32 @thread_increment(i32 %arg1) local_unnamed_addr {
dec_label_pc_2e26:
  %0 = alloca i32
  %storemerge1.reg2mem = alloca i32, !insn.addr !684
  %1 = load i32, i32* %0
  %stack_var_-28 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !685
  %3 = inttoptr i32 %arg1 to i32*, !insn.addr !686
  %4 = load i32, i32* %3, align 4, !insn.addr !686
  %5 = icmp sgt i32 %4, 0, !insn.addr !687
  br i1 %5, label %dec_label_pc_2e4d.lr.ph, label %dec_label_pc_2e9c, !insn.addr !687

dec_label_pc_2e4d.lr.ph:                          ; preds = %dec_label_pc_2e26
  %6 = ptrtoint i32* %stack_var_-28 to i32, !insn.addr !688
  %7 = add i32 %1, add (i32 ptrtoint (i32* @global_var_40be to i32), i32 344), !insn.addr !689
  %8 = add i32 %6, -16, !insn.addr !690
  %9 = inttoptr i32 %8 to i32*, !insn.addr !690
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_40be to i32), i32 340)
  %11 = inttoptr i32 %10 to i32*
  store i32 0, i32* %storemerge1.reg2mem
  br label %dec_label_pc_2e4d

dec_label_pc_2e4d:                                ; preds = %dec_label_pc_2e4d, %dec_label_pc_2e4d.lr.ph
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  store i32 %7, i32* %9, align 4, !insn.addr !690
  %12 = inttoptr i32 %storemerge1.reload to i32*, !insn.addr !691
  %13 = call i32 @pthread_mutex_lock(i32* %12), !insn.addr !691
  %14 = load i32, i32* %11, align 4, !insn.addr !692
  %15 = add i32 %14, 1, !insn.addr !693
  store i32 %15, i32* %11, align 4, !insn.addr !694
  store i32 %7, i32* %9, align 4, !insn.addr !695
  %16 = call i32 @pthread_mutex_unlock(i32* nonnull @0), !insn.addr !696
  store i32 ptrtoint (i32* @global_var_3e8 to i32), i32* %9, align 4, !insn.addr !697
  %17 = call i32 @usleep(i32 ptrtoint (i32* @0 to i32)), !insn.addr !698
  %18 = add nuw nsw i32 %storemerge1.reload, 1, !insn.addr !699
  %exitcond = icmp eq i32 %18, %4
  store i32 %18, i32* %storemerge1.reg2mem, !insn.addr !687
  br i1 %exitcond, label %dec_label_pc_2e9c, label %dec_label_pc_2e4d, !insn.addr !687

dec_label_pc_2e9c:                                ; preds = %dec_label_pc_2e4d, %dec_label_pc_2e26
  ret i32 0, !insn.addr !700

; uselistorder directives
  uselistorder i32 %1, { 2, 1, 0 }
  uselistorder i32* %storemerge1.reg2mem, { 1, 0, 2 }
  uselistorder i32 (i32)* @usleep, { 2, 1, 0, 3 }
}

define i32 @param_mutex_lock(i32 %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_2ea6:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !701
  %storemerge.lcssa.reg2mem = alloca i32*, !insn.addr !701
  %.pre-phi6.reg2mem = alloca i32*, !insn.addr !701
  %storemerge2.reg2mem = alloca i32, !insn.addr !701
  %storemerge13.reg2mem = alloca i32, !insn.addr !701
  %1 = load i32, i32* %0
  %2 = ptrtoint i32* %arg2 to i32
  %stack_var_8 = alloca i32, align 4
  store i32 %2, i32* %stack_var_8, align 4
  %stack_var_-28 = alloca i32, align 4
  %3 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !702
  %4 = mul i32 %arg1, 4, !insn.addr !703
  %5 = call i32* @malloc(i32 %4), !insn.addr !704
  %6 = icmp eq i32* %5, null, !insn.addr !705
  %7 = icmp eq i1 %6, false, !insn.addr !706
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !706
  br i1 %7, label %dec_label_pc_2ee1, label %dec_label_pc_2fa3, !insn.addr !706

dec_label_pc_2ee1:                                ; preds = %dec_label_pc_2ea6
  %8 = ptrtoint i32* %5 to i32, !insn.addr !704
  %9 = ptrtoint i32* %stack_var_-28 to i32, !insn.addr !707
  %10 = add i32 %1, add (i32 ptrtoint ([9 x i8]* @global_var_403e to i32), i32 340), !insn.addr !708
  %11 = inttoptr i32 %10 to i32*, !insn.addr !708
  store i32 0, i32* %11, align 4, !insn.addr !708
  store i32 0, i32* %stack_var_-28, align 4
  %12 = icmp sgt i32 %arg1, 0
  br i1 %12, label %dec_label_pc_2ef4.lr.ph, label %dec_label_pc_2f6a.preheader.dec_label_pc_2f72_crit_edge, !insn.addr !709

dec_label_pc_2ef4.lr.ph:                          ; preds = %dec_label_pc_2ee1
  %13 = add i32 %9, -4, !insn.addr !710
  %14 = inttoptr i32 %13 to i32*, !insn.addr !710
  %15 = ptrtoint i32* %stack_var_8 to i32, !insn.addr !710
  %16 = add i32 %1, add (i32 ptrtoint ([9 x i8]* @global_var_403e to i32), i32 -16590), !insn.addr !711
  %17 = add i32 %9, -8, !insn.addr !712
  %18 = inttoptr i32 %17 to i32*, !insn.addr !712
  %19 = add i32 %9, -12, !insn.addr !713
  %20 = inttoptr i32 %19 to i32*, !insn.addr !713
  %21 = add i32 %9, -16, !insn.addr !714
  %22 = inttoptr i32 %21 to i32*
  store i32 0, i32* %storemerge13.reg2mem
  br label %dec_label_pc_2ef4

dec_label_pc_2ef4:                                ; preds = %dec_label_pc_2ef4.lr.ph, %dec_label_pc_2f32
  %storemerge13.reload = load i32, i32* %storemerge13.reg2mem
  %23 = mul i32 %storemerge13.reload, 4, !insn.addr !715
  %24 = add i32 %23, %8, !insn.addr !716
  store i32 %15, i32* %14, align 4, !insn.addr !710
  store i32 %16, i32* %18, align 4, !insn.addr !712
  store i32 0, i32* %20, align 4, !insn.addr !713
  store i32 %24, i32* %22, align 4, !insn.addr !714
  %25 = load i32, i32* %stack_var_-28, align 4, !insn.addr !717
  %26 = inttoptr i32 %25 to i32*, !insn.addr !717
  %27 = call i32 @pthread_create(i32* %26, i32* nonnull @0, i32* (i32*)* bitcast (i32* @0 to i32* (i32*)*), i32* nonnull @0), !insn.addr !717
  %28 = icmp eq i32 %27, 0, !insn.addr !718
  br i1 %28, label %dec_label_pc_2f32, label %dec_label_pc_2f1d, !insn.addr !719

dec_label_pc_2f1d:                                ; preds = %dec_label_pc_2ef4
  store i32 %8, i32* %22, align 4, !insn.addr !720
  call void @free(i32* nonnull @0), !insn.addr !721
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !722
  br label %dec_label_pc_2fa3, !insn.addr !722

dec_label_pc_2f32:                                ; preds = %dec_label_pc_2ef4
  %29 = load i32, i32* %stack_var_-28, align 4, !insn.addr !723
  %30 = add i32 %29, 1, !insn.addr !723
  store i32 %30, i32* %stack_var_-28, align 4
  %31 = icmp slt i32 %30, %arg1, !insn.addr !709
  store i32 %30, i32* %storemerge13.reg2mem, !insn.addr !709
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !709
  br i1 %31, label %dec_label_pc_2ef4, label %dec_label_pc_2f47, !insn.addr !709

dec_label_pc_2f6a.preheader.dec_label_pc_2f72_crit_edge: ; preds = %dec_label_pc_2ee1
  %.pre = add i32 %9, -16, !insn.addr !724
  %.pre5 = inttoptr i32 %.pre to i32*, !insn.addr !724
  store i32* %.pre5, i32** %.pre-phi6.reg2mem
  store i32* null, i32** %storemerge.lcssa.reg2mem
  br label %dec_label_pc_2f72

dec_label_pc_2f47:                                ; preds = %dec_label_pc_2f32, %dec_label_pc_2f47
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %32 = mul i32 %storemerge2.reload, 4, !insn.addr !725
  %33 = add i32 %32, %8, !insn.addr !726
  %34 = inttoptr i32 %33 to i32*, !insn.addr !727
  %35 = load i32, i32* %34, align 4, !insn.addr !727
  store i32 0, i32* %20, align 4, !insn.addr !728
  store i32 %35, i32* %22, align 4, !insn.addr !729
  %36 = call i32 @pthread_join(i32 %storemerge2.reload, i32** bitcast (i32* @0 to i32**)), !insn.addr !730
  %37 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !731
  %exitcond = icmp eq i32 %37, %arg1
  store i32 %37, i32* %storemerge2.reg2mem, !insn.addr !732
  br i1 %exitcond, label %dec_label_pc_2f6a.dec_label_pc_2f72_crit_edge, label %dec_label_pc_2f47, !insn.addr !732

dec_label_pc_2f6a.dec_label_pc_2f72_crit_edge:    ; preds = %dec_label_pc_2f47
  %phitmp = inttoptr i32 %arg1 to i32*
  store i32* %22, i32** %.pre-phi6.reg2mem
  store i32* %phitmp, i32** %storemerge.lcssa.reg2mem
  br label %dec_label_pc_2f72

dec_label_pc_2f72:                                ; preds = %dec_label_pc_2f6a.preheader.dec_label_pc_2f72_crit_edge, %dec_label_pc_2f6a.dec_label_pc_2f72_crit_edge
  %storemerge.lcssa.reload = load i32*, i32** %storemerge.lcssa.reg2mem
  %.pre-phi6.reload = load i32*, i32** %.pre-phi6.reg2mem
  store i32 %8, i32* %.pre-phi6.reload, align 4, !insn.addr !724
  call void @free(i32* %storemerge.lcssa.reload), !insn.addr !733
  %38 = load i32, i32* %stack_var_8, align 4, !insn.addr !734
  %39 = mul i32 %38, %arg1, !insn.addr !735
  %40 = load i32, i32* %11, align 4, !insn.addr !736
  %41 = icmp eq i32 %39, %40, !insn.addr !737
  %42 = icmp eq i1 %41, false, !insn.addr !738
  %. = select i1 %42, i32 -3, i32 42
  store i32 %., i32* %eax.0.reg2mem, !insn.addr !739
  br label %dec_label_pc_2fa3, !insn.addr !739

dec_label_pc_2fa3:                                ; preds = %dec_label_pc_2f72, %dec_label_pc_2ea6, %dec_label_pc_2f1d
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !740

; uselistorder directives
  uselistorder i32 %storemerge2.reload, { 1, 0, 2 }
  uselistorder i32 %30, { 0, 2, 1 }
  uselistorder i32 %8, { 2, 0, 3, 1 }
  uselistorder i32* %5, { 1, 0 }
  uselistorder i32* %stack_var_-28, { 1, 3, 2, 0, 4 }
  uselistorder i32* %stack_var_8, { 1, 2, 0 }
  uselistorder i32 %1, { 2, 1, 0 }
  uselistorder i32* %storemerge13.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.0.reg2mem, { 0, 1, 3, 2 }
  uselistorder i32 %arg1, { 1, 2, 3, 5, 4, 0 }
  uselistorder label %dec_label_pc_2fa3, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2f72, { 1, 0 }
  uselistorder label %dec_label_pc_2f47, { 1, 0 }
  uselistorder label %dec_label_pc_2ef4, { 1, 0 }
}

define i32 @call_mutex_lock() local_unnamed_addr {
dec_label_pc_2fa8:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !741
  %3 = call i32 @param_mutex_lock(i32 4, i32* nonnull @global_var_3e8), !insn.addr !742
  ret i32 %3, !insn.addr !743
}

define i32 @consumer_thread() local_unnamed_addr {
dec_label_pc_2fd0:
  %0 = alloca i32
  %.pre-phi2.reg2mem = alloca i32*, !insn.addr !744
  %1 = load i32, i32* %0
  %stack_var_-28 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !745
  %3 = add i32 %1, 16516, !insn.addr !746
  %4 = inttoptr i32 %3 to i32*, !insn.addr !747
  %5 = call i32 @pthread_mutex_lock(i32* %4), !insn.addr !747
  %6 = ptrtoint i32* %stack_var_-28 to i32, !insn.addr !748
  %7 = add i32 %1, 16592, !insn.addr !749
  %8 = inttoptr i32 %7 to i32*, !insn.addr !749
  %9 = load i32, i32* %8, align 4, !insn.addr !749
  %10 = icmp eq i32 %9, 0, !insn.addr !750
  br i1 %10, label %dec_label_pc_2ffa.lr.ph, label %dec_label_pc_2fd0.dec_label_pc_301d_crit_edge, !insn.addr !751

dec_label_pc_2fd0.dec_label_pc_301d_crit_edge:    ; preds = %dec_label_pc_2fd0
  %.pre = add i32 %6, -16, !insn.addr !752
  %.pre1 = inttoptr i32 %.pre to i32*, !insn.addr !752
  store i32* %.pre1, i32** %.pre-phi2.reg2mem
  br label %dec_label_pc_301d

dec_label_pc_2ffa.lr.ph:                          ; preds = %dec_label_pc_2fd0
  %11 = add i32 %6, -12, !insn.addr !753
  %12 = inttoptr i32 %11 to i32*, !insn.addr !753
  %13 = add i32 %1, 16544, !insn.addr !754
  %14 = add i32 %6, -16
  %15 = inttoptr i32 %14 to i32*
  br label %dec_label_pc_2ffa

dec_label_pc_2ffa:                                ; preds = %dec_label_pc_2ffa.lr.ph, %dec_label_pc_2ffa
  store i32 %3, i32* %12, align 4, !insn.addr !753
  store i32 %13, i32* %15, align 4, !insn.addr !755
  %16 = call i32 @pthread_cond_wait(i32* nonnull @0, i32* nonnull @0), !insn.addr !756
  %17 = load i32, i32* %8, align 4, !insn.addr !749
  %18 = icmp eq i32 %17, 0, !insn.addr !750
  store i32* %15, i32** %.pre-phi2.reg2mem, !insn.addr !751
  br i1 %18, label %dec_label_pc_2ffa, label %dec_label_pc_301d, !insn.addr !751

dec_label_pc_301d:                                ; preds = %dec_label_pc_2ffa, %dec_label_pc_2fd0.dec_label_pc_301d_crit_edge
  %.pre-phi2.reload = load i32*, i32** %.pre-phi2.reg2mem
  %19 = add i32 %1, 16596, !insn.addr !757
  %20 = inttoptr i32 %19 to i32*, !insn.addr !757
  %21 = load i32, i32* %20, align 4, !insn.addr !757
  store i32 %3, i32* %.pre-phi2.reload, align 4, !insn.addr !752
  %22 = inttoptr i32 %21 to i32*, !insn.addr !758
  %23 = call i32 @pthread_mutex_unlock(i32* %22), !insn.addr !758
  store i32 4, i32* %.pre-phi2.reload, align 4, !insn.addr !759
  %24 = call i32* @malloc(i32 ptrtoint (i32* @0 to i32)), !insn.addr !760
  %25 = ptrtoint i32* %24 to i32, !insn.addr !760
  store i32 %21, i32* %24, align 4, !insn.addr !761
  ret i32 %25, !insn.addr !762

; uselistorder directives
  uselistorder i32* %8, { 1, 0 }
  uselistorder i32 %6, { 1, 2, 0 }
  uselistorder i32 %1, { 3, 4, 2, 0, 1 }
  uselistorder label %dec_label_pc_2ffa, { 1, 0 }
}

define i32 @producer_thread() local_unnamed_addr {
dec_label_pc_3058:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !763
  %3 = call i32 @sleep(i32 1), !insn.addr !764
  %4 = add i32 %1, 16380, !insn.addr !765
  %5 = inttoptr i32 %4 to i32*, !insn.addr !766
  %6 = call i32 @pthread_mutex_lock(i32* %5), !insn.addr !766
  %7 = add i32 %1, 16460, !insn.addr !767
  %8 = inttoptr i32 %7 to i32*, !insn.addr !767
  store i32 42, i32* %8, align 4, !insn.addr !767
  %9 = add i32 %1, 16456, !insn.addr !768
  %10 = inttoptr i32 %9 to i32*, !insn.addr !768
  store i32 1, i32* %10, align 4, !insn.addr !768
  %11 = add i32 %1, 16408, !insn.addr !769
  %12 = inttoptr i32 %11 to i32*, !insn.addr !770
  %13 = call i32 @pthread_cond_signal(i32* %12), !insn.addr !770
  %14 = call i32 @pthread_mutex_unlock(i32* %5), !insn.addr !771
  ret i32 0, !insn.addr !772

; uselistorder directives
  uselistorder i32 %1, { 1, 2, 3, 4, 0 }
  uselistorder i32 (i32*)* @pthread_mutex_unlock, { 2, 1, 0, 3 }
  uselistorder i32 (i32*)* @pthread_mutex_lock, { 2, 1, 0, 3 }
}

define i32 @param_condition_variable() local_unnamed_addr {
dec_label_pc_30cf:
  %0 = alloca i32
  %eax.1.reg2mem = alloca i32, !insn.addr !773
  %eax.0.reg2mem = alloca i32, !insn.addr !773
  %1 = load i32, i32* %0
  %stack_var_-24 = alloca i32, align 4
  %stack_var_-32 = alloca i32, align 4
  %stack_var_-28 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !774
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !775
  %4 = add i32 %1, 16337, !insn.addr !776
  %5 = inttoptr i32 %4 to i32*, !insn.addr !776
  store i32 0, i32* %5, align 4, !insn.addr !776
  %6 = add i32 %1, 16341, !insn.addr !777
  %7 = inttoptr i32 %6 to i32*, !insn.addr !777
  store i32 0, i32* %7, align 4, !insn.addr !777
  %8 = add i32 %1, -271, !insn.addr !778
  %9 = inttoptr i32 %8 to i32* (i32*)*, !insn.addr !779
  %10 = call i32 @pthread_create(i32* nonnull %stack_var_-28, i32* null, i32* (i32*)* %9, i32* null), !insn.addr !780
  %11 = icmp eq i32 %10, 0, !insn.addr !781
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !782
  br i1 %11, label %dec_label_pc_3126, label %dec_label_pc_3195, !insn.addr !782

dec_label_pc_3126:                                ; preds = %dec_label_pc_30cf
  %12 = add i32 %1, -135, !insn.addr !783
  %13 = inttoptr i32 %12 to i32* (i32*)*, !insn.addr !784
  %14 = call i32 @pthread_create(i32* nonnull %stack_var_-32, i32* null, i32* (i32*)* %13, i32* null), !insn.addr !785
  %15 = icmp eq i32 %14, 0, !insn.addr !786
  %16 = load i32, i32* %stack_var_-28, align 4
  br i1 %15, label %dec_label_pc_3157, label %dec_label_pc_3141, !insn.addr !787

dec_label_pc_3141:                                ; preds = %dec_label_pc_3126
  %17 = call i32 @pthread_cancel(i32 %16), !insn.addr !788
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !789
  br label %dec_label_pc_3195, !insn.addr !789

dec_label_pc_3157:                                ; preds = %dec_label_pc_3126
  %18 = bitcast i32* %stack_var_-24 to i32**, !insn.addr !790
  %19 = call i32 @pthread_join(i32 %16, i32** nonnull %18), !insn.addr !790
  %20 = load i32, i32* %stack_var_-32, align 4, !insn.addr !791
  %21 = call i32 @pthread_join(i32 %20, i32** null), !insn.addr !792
  %22 = load i32, i32* %stack_var_-24, align 4
  %23 = inttoptr i32 %22 to i32*, !insn.addr !793
  %24 = load i32, i32* %23, align 4, !insn.addr !793
  call void @free(i32* %23), !insn.addr !794
  store i32 %24, i32* %eax.0.reg2mem, !insn.addr !795
  br label %dec_label_pc_3195, !insn.addr !795

dec_label_pc_3195:                                ; preds = %dec_label_pc_30cf, %dec_label_pc_3157, %dec_label_pc_3141
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %25 = call i32 @__readgsdword(i32 20), !insn.addr !796
  %26 = icmp eq i32 %3, %25, !insn.addr !796
  store i32 %eax.0.reload, i32* %eax.1.reg2mem, !insn.addr !797
  br i1 %26, label %dec_label_pc_31a6, label %dec_label_pc_31a1, !insn.addr !797

dec_label_pc_31a1:                                ; preds = %dec_label_pc_3195
  %27 = call i32 @__stack_chk_fail_local(), !insn.addr !798
  store i32 %27, i32* %eax.1.reg2mem, !insn.addr !798
  br label %dec_label_pc_31a6, !insn.addr !798

dec_label_pc_31a6:                                ; preds = %dec_label_pc_31a1, %dec_label_pc_3195
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !799

; uselistorder directives
  uselistorder i32 %16, { 1, 0 }
  uselistorder i32* %stack_var_-28, { 1, 0 }
  uselistorder i32* %stack_var_-32, { 1, 0 }
  uselistorder i32* %stack_var_-24, { 1, 0 }
  uselistorder i32 %1, { 4, 2, 1, 0, 3 }
  uselistorder i32* %eax.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32** null, { 1, 0 }
  uselistorder label %dec_label_pc_3195, { 1, 2, 0 }
}

define i32 @call_condition_variable() local_unnamed_addr {
dec_label_pc_31ab:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !800
  %3 = call i32 @param_condition_variable(), !insn.addr !801
  ret i32 %3, !insn.addr !802
}

define i32 @thread_atomic_increment(i32 %arg1) local_unnamed_addr {
dec_label_pc_31c6:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !803
  %storemerge1.reg2mem = alloca i32, !insn.addr !803
  %.reg2mem = alloca i32, !insn.addr !803
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = call i32 @__x86.get_pc_thunk.dx(i32 %1), !insn.addr !804
  %4 = call i32 @__readgsdword(i32 20), !insn.addr !805
  %5 = inttoptr i32 %arg1 to i32*, !insn.addr !806
  %6 = load i32, i32* %5, align 4, !insn.addr !806
  %7 = icmp sgt i32 %6, 0, !insn.addr !807
  br i1 %7, label %dec_label_pc_31fe.lr.ph, label %dec_label_pc_323c, !insn.addr !807

dec_label_pc_31fe.lr.ph:                          ; preds = %dec_label_pc_31c6
  %8 = add i32 %2, 16098, !insn.addr !808
  %9 = inttoptr i32 %8 to i32*, !insn.addr !808
  %.promoted = load i32, i32* %9, align 4
  store i32 %.promoted, i32* %.reg2mem
  store i32 0, i32* %storemerge1.reg2mem
  br label %dec_label_pc_31fe

dec_label_pc_31fe:                                ; preds = %dec_label_pc_31fe, %dec_label_pc_31fe.lr.ph
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %10 = add i32 %.reload, 1, !insn.addr !808
  %11 = add i32 %storemerge1.reload, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !809
  %12 = icmp eq i32 %storemerge1.reload, %10, !insn.addr !810
  %13 = select i1 %12, i32 %11, i32 %10, !insn.addr !810
  %14 = add nuw nsw i32 %storemerge1.reload, 1, !insn.addr !811
  %exitcond = icmp eq i32 %14, %6
  store i32 %13, i32* %.reg2mem, !insn.addr !807
  store i32 %14, i32* %storemerge1.reg2mem, !insn.addr !807
  br i1 %exitcond, label %dec_label_pc_3234.dec_label_pc_323c_crit_edge, label %dec_label_pc_31fe, !insn.addr !807

dec_label_pc_3234.dec_label_pc_323c_crit_edge:    ; preds = %dec_label_pc_31fe
  store i32 %13, i32* %9, align 4
  br label %dec_label_pc_323c

dec_label_pc_323c:                                ; preds = %dec_label_pc_3234.dec_label_pc_323c_crit_edge, %dec_label_pc_31c6
  %15 = call i32 @__readgsdword(i32 20), !insn.addr !812
  %16 = icmp eq i32 %4, %15, !insn.addr !812
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !813
  br i1 %16, label %dec_label_pc_3252, label %dec_label_pc_324d, !insn.addr !813

dec_label_pc_324d:                                ; preds = %dec_label_pc_323c
  %17 = call i32 @__stack_chk_fail_local(), !insn.addr !814
  store i32 %17, i32* %eax.0.reg2mem, !insn.addr !814
  br label %dec_label_pc_3252, !insn.addr !814

dec_label_pc_3252:                                ; preds = %dec_label_pc_324d, %dec_label_pc_323c
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !815

; uselistorder directives
  uselistorder i32 %13, { 1, 0 }
  uselistorder i32 %storemerge1.reload, { 0, 2, 1 }
  uselistorder i32* %.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder i32* @global_var_3e8, { 1, 0, 2 }
  uselistorder i32 ptrtoint (i32* @global_var_3e8 to i32), { 1, 2, 3, 4, 0 }
}

define i32 @thread_atomic_load_store() local_unnamed_addr {
dec_label_pc_3257:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !816
  %3 = add i32 %2, 15954, !insn.addr !817
  %4 = inttoptr i32 %3 to i32*, !insn.addr !817
  %5 = load i32, i32* %4, align 4, !insn.addr !817
  %6 = add i32 %5, 100, !insn.addr !818
  store i32 %6, i32* %4, align 4, !insn.addr !819
  ret i32 0, !insn.addr !820
}

define i32 @param_atomic_ops(i32 %arg1) local_unnamed_addr {
dec_label_pc_3287:
  %0 = alloca i32
  %eax.1.reg2mem = alloca i32, !insn.addr !821
  %eax.0.reg2mem = alloca i32, !insn.addr !821
  %storemerge.lcssa.reg2mem = alloca i32*, !insn.addr !821
  %storemerge3.reg2mem = alloca i32, !insn.addr !821
  %storemerge1.lcssa.reg2mem = alloca i32*, !insn.addr !821
  %.pre-phi14.reg2mem = alloca i32*, !insn.addr !821
  %.pre-phi18.reg2mem = alloca i32*, !insn.addr !821
  %.pre-phi22.reg2mem = alloca i32*, !insn.addr !821
  %storemerge14.reg2mem = alloca i32, !insn.addr !821
  %1 = load i32, i32* %0
  %stack_var_-36 = alloca i32, align 4
  %stack_var_8 = alloca i32, align 4
  %stack_var_-44 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !822
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !823
  %4 = mul i32 %arg1, 4, !insn.addr !824
  %5 = call i32* @malloc(i32 %4), !insn.addr !825
  %6 = icmp eq i32* %5, null, !insn.addr !826
  %7 = icmp eq i1 %6, false, !insn.addr !827
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !827
  br i1 %7, label %dec_label_pc_32cd, label %dec_label_pc_33b7, !insn.addr !827

dec_label_pc_32cd:                                ; preds = %dec_label_pc_3287
  %8 = ptrtoint i32* %5 to i32, !insn.addr !825
  %9 = ptrtoint i32* %stack_var_-44 to i32, !insn.addr !828
  %10 = add i32 %1, 15905, !insn.addr !829
  %11 = inttoptr i32 %10 to i32*, !insn.addr !829
  store i32 0, i32* %11, align 4, !insn.addr !829
  %12 = icmp sgt i32 %arg1, 0
  %13 = add i32 %9, -4
  %14 = inttoptr i32 %13 to i32*
  br i1 %12, label %dec_label_pc_32e1.lr.ph, label %dec_label_pc_32cd.dec_label_pc_332e_crit_edge, !insn.addr !830

dec_label_pc_32cd.dec_label_pc_332e_crit_edge:    ; preds = %dec_label_pc_32cd
  %.pre11 = add i32 %9, -8, !insn.addr !831
  %.pre13 = inttoptr i32 %.pre11 to i32*, !insn.addr !831
  %.pre15 = add i32 %9, -12, !insn.addr !832
  %.pre17 = inttoptr i32 %.pre15 to i32*, !insn.addr !832
  %.pre19 = add i32 %9, -16, !insn.addr !833
  %.pre21 = inttoptr i32 %.pre19 to i32*, !insn.addr !833
  store i32* %.pre21, i32** %.pre-phi22.reg2mem
  store i32* %.pre17, i32** %.pre-phi18.reg2mem
  store i32* %.pre13, i32** %.pre-phi14.reg2mem
  store i32* null, i32** %storemerge1.lcssa.reg2mem
  br label %dec_label_pc_332e

dec_label_pc_32e1.lr.ph:                          ; preds = %dec_label_pc_32cd
  %15 = ptrtoint i32* %stack_var_8 to i32, !insn.addr !834
  %16 = add i32 %1, -209, !insn.addr !835
  %17 = add i32 %9, -8
  %18 = inttoptr i32 %17 to i32*
  %19 = add i32 %9, -12
  %20 = inttoptr i32 %19 to i32*
  %21 = add i32 %9, -16
  %22 = inttoptr i32 %21 to i32*
  store i32 0, i32* %storemerge14.reg2mem
  br label %dec_label_pc_32e1

dec_label_pc_32e1:                                ; preds = %dec_label_pc_32e1.lr.ph, %dec_label_pc_3322
  %storemerge14.reload = load i32, i32* %storemerge14.reg2mem
  %23 = mul i32 %storemerge14.reload, 4, !insn.addr !836
  %24 = add i32 %23, %8, !insn.addr !837
  store i32 %15, i32* %14, align 4, !insn.addr !834
  store i32 %16, i32* %18, align 4, !insn.addr !838
  store i32 0, i32* %20, align 4, !insn.addr !839
  store i32 %24, i32* %22, align 4, !insn.addr !840
  %25 = inttoptr i32 %storemerge14.reload to i32*, !insn.addr !841
  %26 = call i32 @pthread_create(i32* %25, i32* nonnull @0, i32* (i32*)* bitcast (i32* @0 to i32* (i32*)*), i32* nonnull @0), !insn.addr !841
  %27 = icmp eq i32 %26, 0, !insn.addr !842
  br i1 %27, label %dec_label_pc_3322, label %dec_label_pc_330a, !insn.addr !843

dec_label_pc_330a:                                ; preds = %dec_label_pc_32e1
  store i32 %8, i32* %22, align 4, !insn.addr !844
  call void @free(i32* nonnull @0), !insn.addr !845
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !846
  br label %dec_label_pc_33b7, !insn.addr !846

dec_label_pc_3322:                                ; preds = %dec_label_pc_32e1
  %28 = add nuw nsw i32 %storemerge14.reload, 1, !insn.addr !847
  %29 = icmp slt i32 %28, %arg1, !insn.addr !830
  store i32 %28, i32* %storemerge14.reg2mem, !insn.addr !830
  br i1 %29, label %dec_label_pc_32e1, label %dec_label_pc_3326.dec_label_pc_332e_crit_edge, !insn.addr !830

dec_label_pc_3326.dec_label_pc_332e_crit_edge:    ; preds = %dec_label_pc_3322
  %phitmp = inttoptr i32 %28 to i32*
  store i32* %22, i32** %.pre-phi22.reg2mem
  store i32* %20, i32** %.pre-phi18.reg2mem
  store i32* %18, i32** %.pre-phi14.reg2mem
  store i32* %phitmp, i32** %storemerge1.lcssa.reg2mem
  br label %dec_label_pc_332e

dec_label_pc_332e:                                ; preds = %dec_label_pc_32cd.dec_label_pc_332e_crit_edge, %dec_label_pc_3326.dec_label_pc_332e_crit_edge
  %storemerge1.lcssa.reload = load i32*, i32** %storemerge1.lcssa.reg2mem
  %.pre-phi14.reload = load i32*, i32** %.pre-phi14.reg2mem
  %.pre-phi18.reload = load i32*, i32** %.pre-phi18.reg2mem
  %.pre-phi22.reload = load i32*, i32** %.pre-phi22.reg2mem
  store i32 0, i32* %14, align 4, !insn.addr !848
  %30 = add i32 %1, -64, !insn.addr !849
  store i32 %30, i32* %.pre-phi14.reload, align 4, !insn.addr !831
  store i32 0, i32* %.pre-phi18.reload, align 4, !insn.addr !832
  %31 = ptrtoint i32* %stack_var_-36 to i32, !insn.addr !833
  store i32 %31, i32* %.pre-phi22.reload, align 4, !insn.addr !833
  %32 = call i32 @pthread_create(i32* %storemerge1.lcssa.reload, i32* nonnull @0, i32* (i32*)* bitcast (i32* @0 to i32* (i32*)*), i32* nonnull @0), !insn.addr !850
  %33 = icmp eq i32 %32, 0, !insn.addr !851
  %34 = icmp eq i1 %33, false, !insn.addr !852
  br i1 %34, label %dec_label_pc_335a, label %dec_label_pc_3349, !insn.addr !852

dec_label_pc_3349:                                ; preds = %dec_label_pc_332e
  %35 = load i32, i32* %stack_var_-36, align 4, !insn.addr !853
  store i32 0, i32* %.pre-phi18.reload, align 4, !insn.addr !854
  store i32 %35, i32* %.pre-phi22.reload, align 4, !insn.addr !855
  %36 = call i32 @pthread_join(i32 ptrtoint (i32* @0 to i32), i32** bitcast (i32* @0 to i32**)), !insn.addr !856
  br label %dec_label_pc_335a, !insn.addr !857

dec_label_pc_335a:                                ; preds = %dec_label_pc_3349, %dec_label_pc_332e
  store i32 0, i32* %storemerge3.reg2mem, !insn.addr !858
  store i32* null, i32** %storemerge.lcssa.reg2mem, !insn.addr !858
  br i1 %12, label %dec_label_pc_3363, label %dec_label_pc_338e, !insn.addr !858

dec_label_pc_3363:                                ; preds = %dec_label_pc_335a, %dec_label_pc_3363
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %37 = mul i32 %storemerge3.reload, 4, !insn.addr !859
  %38 = add i32 %37, %8, !insn.addr !860
  %39 = inttoptr i32 %38 to i32*, !insn.addr !861
  %40 = load i32, i32* %39, align 4, !insn.addr !861
  store i32 0, i32* %.pre-phi18.reload, align 4, !insn.addr !862
  store i32 %40, i32* %.pre-phi22.reload, align 4, !insn.addr !863
  %41 = call i32 @pthread_join(i32 %storemerge3.reload, i32** bitcast (i32* @0 to i32**)), !insn.addr !864
  %42 = add nuw nsw i32 %storemerge3.reload, 1, !insn.addr !865
  %exitcond = icmp eq i32 %42, %arg1
  store i32 %42, i32* %storemerge3.reg2mem, !insn.addr !858
  br i1 %exitcond, label %dec_label_pc_3386.dec_label_pc_338e_crit_edge, label %dec_label_pc_3363, !insn.addr !858

dec_label_pc_3386.dec_label_pc_338e_crit_edge:    ; preds = %dec_label_pc_3363
  %phitmp7 = inttoptr i32 %arg1 to i32*
  store i32* %phitmp7, i32** %storemerge.lcssa.reg2mem
  br label %dec_label_pc_338e

dec_label_pc_338e:                                ; preds = %dec_label_pc_3386.dec_label_pc_338e_crit_edge, %dec_label_pc_335a
  %storemerge.lcssa.reload = load i32*, i32** %storemerge.lcssa.reg2mem
  %43 = load i32, i32* %11, align 4, !insn.addr !866
  store i32 %8, i32* %.pre-phi22.reload, align 4, !insn.addr !867
  call void @free(i32* %storemerge.lcssa.reload), !insn.addr !868
  %44 = icmp slt i32 %43, 1, !insn.addr !869
  %. = select i1 %44, i32 -3, i32 42
  store i32 %., i32* %eax.0.reg2mem, !insn.addr !870
  br label %dec_label_pc_33b7, !insn.addr !870

dec_label_pc_33b7:                                ; preds = %dec_label_pc_338e, %dec_label_pc_3287, %dec_label_pc_330a
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %45 = call i32 @__readgsdword(i32 20), !insn.addr !871
  %46 = icmp eq i32 %3, %45, !insn.addr !871
  store i32 %eax.0.reload, i32* %eax.1.reg2mem, !insn.addr !872
  br i1 %46, label %dec_label_pc_33c8, label %dec_label_pc_33c3, !insn.addr !872

dec_label_pc_33c3:                                ; preds = %dec_label_pc_33b7
  %47 = call i32 @__stack_chk_fail_local(), !insn.addr !873
  store i32 %47, i32* %eax.1.reg2mem, !insn.addr !873
  br label %dec_label_pc_33c8, !insn.addr !873

dec_label_pc_33c8:                                ; preds = %dec_label_pc_33c3, %dec_label_pc_33b7
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !874

; uselistorder directives
  uselistorder i32 %storemerge3.reload, { 1, 0, 2 }
  uselistorder i32 %28, { 1, 0, 2 }
  uselistorder i32 %9, { 3, 4, 5, 0, 1, 2, 6 }
  uselistorder i32 %8, { 2, 0, 3, 1 }
  uselistorder i32* %5, { 1, 0 }
  uselistorder i32 %1, { 2, 3, 1, 0 }
  uselistorder i32* %storemerge14.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder i32** %storemerge.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i32* %eax.0.reg2mem, { 0, 1, 3, 2 }
  uselistorder i32 %arg1, { 1, 2, 4, 3, 0 }
  uselistorder label %dec_label_pc_33b7, { 0, 2, 1 }
  uselistorder label %dec_label_pc_3363, { 1, 0 }
  uselistorder label %dec_label_pc_332e, { 1, 0 }
  uselistorder label %dec_label_pc_32e1, { 1, 0 }
}

define i32 @call_atomic_ops() local_unnamed_addr {
dec_label_pc_33cd:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !875
  %3 = call i32 @param_atomic_ops(i32 4), !insn.addr !876
  ret i32 %3, !insn.addr !877
}

define i32 @thread_tls_test(i32 %arg1) local_unnamed_addr {
dec_label_pc_33f5:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !878
  %3 = call i32 @__readgsdword(i32 -36), !insn.addr !879
  %4 = call i32 @__readgsdword(i32 -36), !insn.addr !880
  %5 = add i32 %4, 50, !insn.addr !881
  call void @__writegsdword(i32 -36, i32 %5), !insn.addr !882
  %6 = call i32 @__readgsdword(i32 0), !insn.addr !883
  %7 = add i32 %6, -32, !insn.addr !884
  %8 = inttoptr i32 %7 to i8*, !insn.addr !885
  %9 = call i8* @strncpy(i8* %8, i8* bitcast (i32* @0 to i8*), i32 ptrtoint (i32* @0 to i32)), !insn.addr !886
  %10 = call i32* @malloc(i32 8), !insn.addr !887
  %11 = ptrtoint i32* %10 to i32, !insn.addr !887
  store i32 %3, i32* %10, align 4, !insn.addr !888
  %12 = add i32 %11, 4, !insn.addr !889
  %13 = call i32 @__readgsdword(i32 -36), !insn.addr !890
  %14 = inttoptr i32 %12 to i32*, !insn.addr !891
  store i32 %13, i32* %14, align 4, !insn.addr !891
  ret i32 %11, !insn.addr !892
}

define i32 @param_thread_local_storage(i32 %arg1) local_unnamed_addr {
dec_label_pc_3477:
  %0 = alloca i32
  %eax.1.reg2mem = alloca i32, !insn.addr !893
  %eax.0.reg2mem = alloca i32, !insn.addr !893
  %storemerge.lcssa.reg2mem = alloca i32*, !insn.addr !893
  %stack_var_-44.0.lcssa.reg2mem = alloca i32, !insn.addr !893
  %stack_var_-48.0.lcssa.reg2mem = alloca i32, !insn.addr !893
  %stack_var_-48.07.reg2mem = alloca i32, !insn.addr !893
  %stack_var_-44.08.reg2mem = alloca i32, !insn.addr !893
  %storemerge9.reg2mem = alloca i32, !insn.addr !893
  %storemerge16.reg2mem = alloca i32, !insn.addr !893
  %storemerge213.reg2mem = alloca i32, !insn.addr !893
  %storemerge314.reg2mem = alloca i32, !insn.addr !893
  %1 = load i32, i32* %0
  %stack_var_-64 = alloca i32, align 4
  %stack_var_-76 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !894
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !895
  %4 = mul i32 %arg1, 4, !insn.addr !896
  %5 = call i32* @malloc(i32 %4), !insn.addr !897
  %6 = call i32* @malloc(i32 %4), !insn.addr !898
  %7 = icmp ne i32* %5, null, !insn.addr !899
  %8 = icmp eq i32* %6, null, !insn.addr !900
  %9 = icmp eq i1 %8, false, !insn.addr !901
  %or.cond = icmp eq i1 %7, %9
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !902
  br i1 %or.cond, label %dec_label_pc_352b.preheader, label %dec_label_pc_36b3, !insn.addr !902

dec_label_pc_352b.preheader:                      ; preds = %dec_label_pc_3477
  %10 = ptrtoint i32* %5 to i32, !insn.addr !897
  %11 = ptrtoint i32* %6 to i32, !insn.addr !898
  %12 = ptrtoint i32* %stack_var_-76 to i32, !insn.addr !903
  %13 = icmp sgt i32 %arg1, 0
  %14 = add i32 %12, -16
  %15 = inttoptr i32 %14 to i32*
  store i32 0, i32* %stack_var_-48.0.lcssa.reg2mem, !insn.addr !904
  store i32 0, i32* %stack_var_-44.0.lcssa.reg2mem, !insn.addr !904
  store i32* null, i32** %storemerge.lcssa.reg2mem, !insn.addr !904
  br i1 %13, label %dec_label_pc_34e2.lr.ph, label %dec_label_pc_3666, !insn.addr !904

dec_label_pc_34e2.lr.ph:                          ; preds = %dec_label_pc_352b.preheader
  %16 = add i32 %12, -4
  %17 = inttoptr i32 %16 to i32*
  %18 = add i32 %1, 3743
  %19 = add i32 %12, -8
  %20 = inttoptr i32 %19 to i32*
  %21 = add i32 %12, -12
  %22 = inttoptr i32 %21 to i32*
  store i32 0, i32* %storemerge314.reg2mem
  br label %dec_label_pc_34e2

dec_label_pc_34e2:                                ; preds = %dec_label_pc_34e2, %dec_label_pc_34e2.lr.ph
  %storemerge314.reload = load i32, i32* %storemerge314.reg2mem
  %23 = mul i32 %storemerge314.reload, 4, !insn.addr !905
  %24 = add i32 %23, %11, !insn.addr !906
  store i32 16, i32* %15, align 4, !insn.addr !907
  %25 = call i32* @malloc(i32 %storemerge314.reload), !insn.addr !908
  %26 = ptrtoint i32* %25 to i32, !insn.addr !908
  %27 = inttoptr i32 %24 to i32*, !insn.addr !909
  store i32 %26, i32* %27, align 4, !insn.addr !909
  store i32 %storemerge314.reload, i32* %17, align 4, !insn.addr !910
  store i32 %18, i32* %20, align 4, !insn.addr !911
  store i32 16, i32* %22, align 4, !insn.addr !912
  store i32 %26, i32* %15, align 4, !insn.addr !913
  %28 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* bitcast (i32* @0 to i8*), i32 ptrtoint (i32* @0 to i32), i8* bitcast (i32* @0 to i8*)), !insn.addr !914
  %29 = add nuw nsw i32 %storemerge314.reload, 1, !insn.addr !915
  %exitcond22 = icmp eq i32 %29, %arg1
  store i32 %29, i32* %storemerge314.reg2mem, !insn.addr !904
  br i1 %exitcond22, label %dec_label_pc_353f.lr.ph, label %dec_label_pc_34e2, !insn.addr !904

dec_label_pc_353f.lr.ph:                          ; preds = %dec_label_pc_34e2
  %30 = add i32 %1, -147, !insn.addr !916
  store i32 0, i32* %storemerge213.reg2mem
  br label %dec_label_pc_353f

dec_label_pc_353f:                                ; preds = %dec_label_pc_353f.lr.ph, %dec_label_pc_35ce
  %storemerge213.reload = load i32, i32* %storemerge213.reg2mem
  %31 = mul i32 %storemerge213.reload, 4, !insn.addr !917
  %32 = add i32 %31, %11, !insn.addr !918
  %33 = inttoptr i32 %32 to i32*, !insn.addr !919
  %34 = load i32, i32* %33, align 4, !insn.addr !919
  %35 = add i32 %31, %10, !insn.addr !920
  store i32 %34, i32* %17, align 4, !insn.addr !921
  store i32 %30, i32* %20, align 4, !insn.addr !922
  store i32 0, i32* %22, align 4, !insn.addr !923
  store i32 %35, i32* %15, align 4, !insn.addr !924
  %36 = inttoptr i32 %storemerge213.reload to i32*, !insn.addr !925
  %37 = call i32 @pthread_create(i32* %36, i32* nonnull @0, i32* (i32*)* bitcast (i32* @0 to i32* (i32*)*), i32* nonnull @0), !insn.addr !925
  %38 = icmp eq i32 %37, 0, !insn.addr !926
  %39 = add nuw nsw i32 %storemerge213.reload, 1
  store i32 0, i32* %storemerge16.reg2mem, !insn.addr !927
  br i1 %38, label %dec_label_pc_35ce, label %dec_label_pc_357f, !insn.addr !927

dec_label_pc_357f:                                ; preds = %dec_label_pc_353f, %dec_label_pc_357f
  %storemerge16.reload = load i32, i32* %storemerge16.reg2mem
  %40 = mul i32 %storemerge16.reload, 4, !insn.addr !928
  %41 = add i32 %40, %11, !insn.addr !929
  %42 = inttoptr i32 %41 to i32*, !insn.addr !930
  %43 = load i32, i32* %42, align 4, !insn.addr !930
  store i32 %43, i32* %15, align 4, !insn.addr !931
  %44 = inttoptr i32 %storemerge16.reload to i32*, !insn.addr !932
  call void @free(i32* %44), !insn.addr !932
  %45 = add nuw nsw i32 %storemerge16.reload, 1, !insn.addr !933
  %exitcond21 = icmp eq i32 %45, %39
  store i32 %45, i32* %storemerge16.reg2mem, !insn.addr !934
  br i1 %exitcond21, label %dec_label_pc_35a8, label %dec_label_pc_357f, !insn.addr !934

dec_label_pc_35a8:                                ; preds = %dec_label_pc_357f
  %phitmp = inttoptr i32 %39 to i32*
  store i32 %11, i32* %15, align 4, !insn.addr !935
  call void @free(i32* %phitmp), !insn.addr !936
  store i32 %10, i32* %15, align 4, !insn.addr !937
  call void @free(i32* nonnull @0), !insn.addr !938
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !939
  br label %dec_label_pc_36b3, !insn.addr !939

dec_label_pc_35ce:                                ; preds = %dec_label_pc_353f
  %46 = icmp slt i32 %39, %arg1, !insn.addr !940
  store i32 %39, i32* %storemerge213.reg2mem, !insn.addr !940
  br i1 %46, label %dec_label_pc_353f, label %dec_label_pc_35f5.lr.ph, !insn.addr !940

dec_label_pc_35f5.lr.ph:                          ; preds = %dec_label_pc_35ce
  %47 = ptrtoint i32* %stack_var_-64 to i32, !insn.addr !941
  store i32 0, i32* %storemerge9.reg2mem
  store i32 0, i32* %stack_var_-44.08.reg2mem
  store i32 0, i32* %stack_var_-48.07.reg2mem
  br label %dec_label_pc_35f5

dec_label_pc_35f5:                                ; preds = %dec_label_pc_35f5, %dec_label_pc_35f5.lr.ph
  %stack_var_-48.07.reload = load i32, i32* %stack_var_-48.07.reg2mem
  %stack_var_-44.08.reload = load i32, i32* %stack_var_-44.08.reg2mem
  %storemerge9.reload = load i32, i32* %storemerge9.reg2mem
  %48 = mul i32 %storemerge9.reload, 4, !insn.addr !942
  %49 = add i32 %48, %10, !insn.addr !943
  %50 = inttoptr i32 %49 to i32*, !insn.addr !944
  %51 = load i32, i32* %50, align 4, !insn.addr !944
  store i32 %47, i32* %22, align 4, !insn.addr !941
  store i32 %51, i32* %15, align 4, !insn.addr !945
  %52 = call i32 @pthread_join(i32 %storemerge9.reload, i32** bitcast (i32* @0 to i32**)), !insn.addr !946
  %53 = load i32, i32* %stack_var_-64, align 4, !insn.addr !947
  %54 = inttoptr i32 %53 to i32*, !insn.addr !948
  %55 = load i32, i32* %54, align 4, !insn.addr !948
  %56 = add i32 %55, %stack_var_-48.07.reload, !insn.addr !949
  %57 = add i32 %53, 4, !insn.addr !950
  %58 = inttoptr i32 %57 to i32*, !insn.addr !951
  %59 = load i32, i32* %58, align 4, !insn.addr !951
  %60 = add i32 %59, %stack_var_-44.08.reload, !insn.addr !952
  store i32 %53, i32* %15, align 4, !insn.addr !953
  %61 = inttoptr i32 %56 to i32*, !insn.addr !954
  call void @free(i32* %61), !insn.addr !954
  %62 = add i32 %48, %11, !insn.addr !955
  %63 = inttoptr i32 %62 to i32*, !insn.addr !956
  %64 = load i32, i32* %63, align 4, !insn.addr !956
  store i32 %64, i32* %15, align 4, !insn.addr !957
  call void @free(i32* nonnull @0), !insn.addr !958
  %65 = add nuw nsw i32 %storemerge9.reload, 1, !insn.addr !959
  %exitcond = icmp eq i32 %65, %arg1
  store i32 %65, i32* %storemerge9.reg2mem, !insn.addr !960
  store i32 %60, i32* %stack_var_-44.08.reg2mem, !insn.addr !960
  store i32 %56, i32* %stack_var_-48.07.reg2mem, !insn.addr !960
  br i1 %exitcond, label %dec_label_pc_365e.dec_label_pc_3666_crit_edge, label %dec_label_pc_35f5, !insn.addr !960

dec_label_pc_365e.dec_label_pc_3666_crit_edge:    ; preds = %dec_label_pc_35f5
  %phitmp16 = inttoptr i32 %arg1 to i32*
  store i32 %56, i32* %stack_var_-48.0.lcssa.reg2mem
  store i32 %60, i32* %stack_var_-44.0.lcssa.reg2mem
  store i32* %phitmp16, i32** %storemerge.lcssa.reg2mem
  br label %dec_label_pc_3666

dec_label_pc_3666:                                ; preds = %dec_label_pc_352b.preheader, %dec_label_pc_365e.dec_label_pc_3666_crit_edge
  %storemerge.lcssa.reload = load i32*, i32** %storemerge.lcssa.reg2mem
  %stack_var_-44.0.lcssa.reload = load i32, i32* %stack_var_-44.0.lcssa.reg2mem
  %stack_var_-48.0.lcssa.reload = load i32, i32* %stack_var_-48.0.lcssa.reg2mem
  store i32 %11, i32* %15, align 4, !insn.addr !961
  call void @free(i32* %storemerge.lcssa.reload), !insn.addr !962
  store i32 %10, i32* %15, align 4, !insn.addr !963
  call void @free(i32* nonnull @0), !insn.addr !964
  %66 = mul i32 %arg1, 100
  %67 = icmp eq i32 %stack_var_-48.0.lcssa.reload, %66, !insn.addr !965
  %68 = icmp eq i1 %67, false, !insn.addr !966
  br i1 %68, label %dec_label_pc_36ae, label %dec_label_pc_369f, !insn.addr !966

dec_label_pc_369f:                                ; preds = %dec_label_pc_3666
  %69 = mul i32 %arg1, 150, !insn.addr !967
  %70 = icmp eq i32 %stack_var_-44.0.lcssa.reload, %69, !insn.addr !968
  %71 = icmp eq i1 %70, false, !insn.addr !969
  store i32 42, i32* %eax.0.reg2mem, !insn.addr !969
  br i1 %71, label %dec_label_pc_36ae, label %dec_label_pc_36b3, !insn.addr !969

dec_label_pc_36ae:                                ; preds = %dec_label_pc_369f, %dec_label_pc_3666
  store i32 -3, i32* %eax.0.reg2mem, !insn.addr !970
  br label %dec_label_pc_36b3, !insn.addr !970

dec_label_pc_36b3:                                ; preds = %dec_label_pc_369f, %dec_label_pc_3477, %dec_label_pc_36ae, %dec_label_pc_35a8
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %72 = call i32 @__readgsdword(i32 20), !insn.addr !971
  %73 = icmp eq i32 %3, %72, !insn.addr !971
  store i32 %eax.0.reload, i32* %eax.1.reg2mem, !insn.addr !972
  br i1 %73, label %dec_label_pc_36c4, label %dec_label_pc_36bf, !insn.addr !972

dec_label_pc_36bf:                                ; preds = %dec_label_pc_36b3
  %74 = call i32 @__stack_chk_fail_local(), !insn.addr !973
  store i32 %74, i32* %eax.1.reg2mem, !insn.addr !973
  br label %dec_label_pc_36c4, !insn.addr !973

dec_label_pc_36c4:                                ; preds = %dec_label_pc_36bf, %dec_label_pc_36b3
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !974

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
  uselistorder i32* %storemerge314.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge213.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge16.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge9.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-44.08.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-48.07.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-48.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-44.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i32** %storemerge.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i32* %eax.0.reg2mem, { 0, 3, 1, 4, 2 }
  uselistorder i32 ()* @__stack_chk_fail_local, { 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 -3, { 0, 6, 7, 1, 2, 3, 8, 4, 5 }
  uselistorder i32 42, { 0, 3, 14, 4, 1, 8, 12, 5, 6, 9, 7, 10, 2, 11, 13 }
  uselistorder i32 (i32, i32**)* @pthread_join, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder i32 -2, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 10 }
  uselistorder void (i32*)* @free, { 8, 2, 3, 5, 0, 4, 6, 11, 13, 12, 1, 9, 10, 7, 14 }
  uselistorder i32 (i32*, i32*, i32* (i32*)*, i32*)* @pthread_create, { 7, 5, 6, 4, 3, 2, 1, 0, 8 }
  uselistorder i32* (i32*)* bitcast (i32* @0 to i32* (i32*)*), { 0, 2, 1, 3, 4 }
  uselistorder i32 16, { 2, 3, 0, 1 }
  uselistorder i32 -12, { 1, 2, 0, 3, 4, 5, 6 }
  uselistorder i32 -8, { 1, 2, 0, 3, 4 }
  uselistorder i32 -16, { 3, 4, 0, 5, 1, 2, 6, 7, 8, 10, 9 }
  uselistorder i32* null, { 0, 6, 7, 1, 2, 8, 9, 11, 10, 12, 3, 13, 14, 5, 4, 15, 16 }
  uselistorder i32* (i32)* @malloc, { 8, 7, 6, 5, 4, 3, 2, 1, 0, 9 }
  uselistorder i32 20, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 0, 30, 31, 32 }
  uselistorder i32 %arg1, { 6, 7, 1, 3, 5, 2, 4, 0 }
  uselistorder label %dec_label_pc_36b3, { 2, 0, 3, 1 }
  uselistorder label %dec_label_pc_3666, { 1, 0 }
  uselistorder label %dec_label_pc_357f, { 1, 0 }
  uselistorder label %dec_label_pc_353f, { 1, 0 }
}

define i32 @call_thread_local_storage() local_unnamed_addr {
dec_label_pc_36cb:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !975
  %3 = call i32 @param_thread_local_storage(i32 4), !insn.addr !976
  ret i32 %3, !insn.addr !977

; uselistorder directives
  uselistorder i32 4, { 16, 21, 0, 1, 2, 3, 4, 22, 17, 5, 6, 7, 23, 18, 8, 9, 10, 11, 12, 24, 19, 25, 20, 13, 14, 15 }
}

define i32 @test_thread_concurrency() local_unnamed_addr {
dec_label_pc_36ee:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !978
  %3 = add i32 %1, 3123, !insn.addr !979
  %4 = inttoptr i32 %3 to i8*, !insn.addr !980
  %5 = call i32 @puts(i8* %4), !insn.addr !981
  %6 = call i32 @call_pthread_create(), !insn.addr !982
  %7 = add i32 %1, 3153, !insn.addr !983
  %8 = inttoptr i32 %7 to i8*, !insn.addr !984
  %9 = call i32 (i8*, ...) @printf(i8* %8), !insn.addr !985
  %10 = call i32 @call_pthread_join(), !insn.addr !986
  %11 = add i32 %1, 3181, !insn.addr !987
  %12 = inttoptr i32 %11 to i8*, !insn.addr !988
  %13 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !989
  %14 = call i32 @call_mutex_lock(), !insn.addr !990
  %15 = add i32 %1, 3210, !insn.addr !991
  %16 = inttoptr i32 %15 to i8*, !insn.addr !992
  %17 = call i32 (i8*, ...) @printf(i8* %16), !insn.addr !993
  %18 = call i32 @call_condition_variable(), !insn.addr !994
  %19 = add i32 %1, 3238, !insn.addr !995
  %20 = inttoptr i32 %19 to i8*, !insn.addr !996
  %21 = call i32 (i8*, ...) @printf(i8* %20), !insn.addr !997
  %22 = call i32 @call_atomic_ops(), !insn.addr !998
  %23 = add i32 %1, 3266, !insn.addr !999
  %24 = inttoptr i32 %23 to i8*, !insn.addr !1000
  %25 = call i32 (i8*, ...) @printf(i8* %24), !insn.addr !1001
  %26 = call i32 @call_thread_local_storage(), !insn.addr !1002
  %27 = add i32 %1, 3294, !insn.addr !1003
  %28 = inttoptr i32 %27 to i8*, !insn.addr !1004
  %29 = call i32 (i8*, ...) @printf(i8* %28), !insn.addr !1005
  ret i32 %29, !insn.addr !1006

; uselistorder directives
  uselistorder i32 %1, { 6, 5, 4, 3, 2, 1, 0, 7 }
  uselistorder i32 (i8*, ...)* @printf, { 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 26 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_37ac:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !1007
  %3 = call i32 @test_standard_library_functions(), !insn.addr !1008
  %4 = call i32 @test_system_calls(), !insn.addr !1009
  %5 = call i32 @test_thread_concurrency(), !insn.addr !1010
  ret i32 0, !insn.addr !1011

; uselistorder directives
  uselistorder i32 0, { 23, 2, 3, 4, 5, 53, 54, 6, 7, 0, 1, 29, 41, 55, 8, 58, 59, 60, 61, 56, 57, 9, 30, 51, 24, 10, 11, 31, 62, 63, 64, 65, 25, 66, 36, 67, 12, 68, 69, 13, 32, 37, 70, 26, 14, 33, 71, 72, 15, 73, 74, 16, 38, 27, 17, 75, 76, 77, 78, 79, 80, 81, 82, 40, 83, 84, 85, 86, 87, 39, 88, 42, 43, 89, 90, 91, 92, 93, 44, 94, 95, 45, 46, 47, 96, 97, 98, 99, 48, 100, 101, 49, 102, 103, 104, 105, 106, 107, 18, 19, 20, 21, 34, 50, 22, 35, 108, 109, 110, 111, 52, 112, 113, 114, 28 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.ax, { 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
}

define i32 @__x86.get_pc_thunk.ax(i32 %arg1) local_unnamed_addr {
dec_label_pc_37d6:
  ret i32 %arg1, !insn.addr !1012
}

define i32 @__stack_chk_fail_local() local_unnamed_addr {
dec_label_pc_37e0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !1013
  call void @__stack_chk_fail(), !insn.addr !1014
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !1015
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_3800:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !1016
  %ebx.0.reg2mem = alloca i32, !insn.addr !1016
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !1017
  %3 = add i32 %1, 13827, !insn.addr !1018
  %4 = inttoptr i32 %3 to i32*, !insn.addr !1018
  %5 = load i32, i32* %4, align 4, !insn.addr !1018
  %6 = icmp eq i32 %5, -1, !insn.addr !1019
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !1020
  store i32 -1, i32* %merge.reg2mem, !insn.addr !1020
  br i1 %6, label %dec_label_pc_383d, label %dec_label_pc_3830, !insn.addr !1020

dec_label_pc_3830:                                ; preds = %dec_label_pc_3800, %dec_label_pc_3830
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !1021
  %8 = inttoptr i32 %7 to i32*, !insn.addr !1021
  %9 = load i32, i32* %8, align 4, !insn.addr !1021
  %10 = icmp eq i32 %9, -1, !insn.addr !1022
  %11 = icmp eq i1 %10, false, !insn.addr !1023
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !1023
  store i32 %9, i32* %merge.reg2mem, !insn.addr !1023
  br i1 %11, label %dec_label_pc_3830, label %dec_label_pc_383d, !insn.addr !1023

dec_label_pc_383d:                                ; preds = %dec_label_pc_3830, %dec_label_pc_3800
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !1024

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 47, 7, 8, 2, 9, 10, 11, 12, 13, 5, 14, 1, 15, 16, 6, 17, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 3, 45, 4, 46 }
  uselistorder i32 -4, { 7, 2, 3, 4, 5, 0, 1, 6 }
  uselistorder i32 -1, { 26, 0, 27, 1, 2, 3, 4, 5, 6, 30, 17, 31, 16, 7, 28, 22, 29, 8, 9, 10, 11, 23, 12, 18, 24, 19, 20, 13, 14, 25, 15, 21 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 4, 3, 0, 2 }
  uselistorder i32* @0, { 21, 20, 19, 17, 18, 0, 13, 14, 23, 15, 16, 6, 7, 1, 22, 11, 12, 8, 9, 10, 2, 3, 5, 4 }
  uselistorder label %dec_label_pc_3830, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_384c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !1025
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !1026
  ret i32 %3, !insn.addr !1027

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 27, 2, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 1, 0 }
  uselistorder i32 1, { 73, 76, 75, 72, 71, 70, 69, 68, 200, 202, 201, 203, 160, 159, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 67, 66, 65, 149, 204, 205, 163, 162, 161, 96, 95, 94, 93, 92, 91, 90, 89, 88, 64, 63, 206, 207, 99, 98, 97, 62, 61, 166, 165, 164, 101, 100, 60, 208, 150, 59, 167, 102, 58, 57, 209, 210, 169, 168, 107, 106, 105, 104, 103, 56, 211, 212, 170, 108, 55, 54, 213, 214, 172, 175, 174, 173, 171, 113, 112, 111, 110, 109, 53, 215, 115, 114, 52, 51, 178, 177, 176, 117, 116, 50, 49, 48, 47, 216, 179, 122, 121, 120, 119, 118, 46, 217, 45, 151, 44, 158, 123, 43, 42, 152, 181, 153, 182, 180, 125, 124, 41, 40, 154, 184, 183, 127, 126, 74, 39, 38, 185, 129, 128, 37, 36, 155, 186, 130, 35, 34, 131, 33, 32, 31, 30, 218, 188, 187, 133, 132, 29, 219, 136, 135, 134, 28, 27, 220, 138, 137, 26, 25, 156, 157, 189, 140, 139, 24, 23, 141, 22, 21, 142, 20, 19, 18, 190, 192, 194, 195, 193, 191, 143, 17, 147, 16, 197, 196, 144, 15, 14, 13, 12, 11, 148, 10, 198, 145, 9, 8, 7, 6, 146, 5, 4, 3, 2, 199, 1, 0 }
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
!99 = !{i64 6537}
!100 = !{i64 6554}
!101 = !{i64 6561}
!102 = !{i64 6563}
!103 = !{i64 6569}
!104 = !{i64 6581}
!105 = !{i64 6602}
!106 = !{i64 6613}
!107 = !{i64 6617}
!108 = !{i64 6648}
!109 = !{i64 6660}
!110 = !{i64 6674}
!111 = !{i64 6681}
!112 = !{i64 6688}
!113 = !{i64 6702}
!114 = !{i64 6716}
!115 = !{i64 6730}
!116 = !{i64 6737}
!117 = !{i64 6744}
!118 = !{i64 6761}
!119 = !{i64 6766}
!120 = !{i64 6772}
!121 = !{i64 6784}
!122 = !{i64 6802}
!123 = !{i64 6820}
!124 = !{i64 6831}
!125 = !{i64 6841}
!126 = !{i64 6856}
!127 = !{i64 6865}
!128 = !{i64 6877}
!129 = !{i64 6901}
!130 = !{i64 6916}
!131 = !{i64 6917}
!132 = !{i64 6927}
!133 = !{i64 6937}
!134 = !{i64 6948}
!135 = !{i64 6983}
!136 = !{i64 7031}
!137 = !{i64 7039}
!138 = !{i64 7055}
!139 = !{i64 7062}
!140 = !{i64 7064}
!141 = !{i64 7070}
!142 = !{i64 7082}
!143 = !{i64 7106}
!144 = !{i64 7117}
!145 = !{i64 7121}
!146 = !{i64 7152}
!147 = !{i64 7153}
!148 = !{i64 7163}
!149 = !{i64 7173}
!150 = !{i64 7184}
!151 = !{i64 7205}
!152 = !{i64 7226}
!153 = !{i64 7260}
!154 = !{i64 7284}
!155 = !{i64 7301}
!156 = !{i64 7306}
!157 = !{i64 7313}
!158 = !{i64 7315}
!159 = !{i64 7321}
!160 = !{i64 7333}
!161 = !{i64 7352}
!162 = !{i64 7358}
!163 = !{i64 7361}
!164 = !{i64 7379}
!165 = !{i64 7390}
!166 = !{i64 7403}
!167 = !{i64 7412}
!168 = !{i64 7427}
!169 = !{i64 7428}
!170 = !{i64 7439}
!171 = !{i64 7455}
!172 = !{i64 7475}
!173 = !{i64 7481}
!174 = !{i64 7487}
!175 = !{i64 7498}
!176 = !{i64 7502}
!177 = !{i64 7522}
!178 = !{i64 7529}
!179 = !{i64 7531}
!180 = !{i64 7540}
!181 = !{i64 7551}
!182 = !{i64 7564}
!183 = !{i64 7571}
!184 = !{i64 7580}
!185 = !{i64 7581}
!186 = !{i64 7592}
!187 = !{i64 7606}
!188 = !{i64 7612}
!189 = !{i64 7616}
!190 = !{i64 7627}
!191 = !{i64 7631}
!192 = !{i64 7646}
!193 = !{i64 7663}
!194 = !{i64 7671}
!195 = !{i64 7678}
!196 = !{i64 7689}
!197 = !{i64 7702}
!198 = !{i64 7709}
!199 = !{i64 7720}
!200 = !{i64 7739}
!201 = !{i64 7740}
!202 = !{i64 7751}
!203 = !{i64 7768}
!204 = !{i64 7791}
!205 = !{i64 7797}
!206 = !{i64 7801}
!207 = !{i64 7812}
!208 = !{i64 7816}
!209 = !{i64 7779}
!210 = !{i64 7834}
!211 = !{i64 7851}
!212 = !{i64 7868}
!213 = !{i64 7876}
!214 = !{i64 7879}
!215 = !{i64 7887}
!216 = !{i64 7900}
!217 = !{i64 7908}
!218 = !{i64 7928}
!219 = !{i64 7939}
!220 = !{i64 7945}
!221 = !{i64 7947}
!222 = !{i64 7956}
!223 = !{i64 7970}
!224 = !{i64 7981}
!225 = !{i64 7984}
!226 = !{i64 7996}
!227 = !{i64 8004}
!228 = !{i64 8006}
!229 = !{i64 8015}
!230 = !{i64 8023}
!231 = !{i64 8030}
!232 = !{i64 8032}
!233 = !{i64 8041}
!234 = !{i64 8052}
!235 = !{i64 8065}
!236 = !{i64 8072}
!237 = !{i64 8081}
!238 = !{i64 8082}
!239 = !{i64 8093}
!240 = !{i64 8107}
!241 = !{i64 8114}
!242 = !{i64 8125}
!243 = !{i64 8129}
!244 = !{i64 8185}
!245 = !{i64 8188}
!246 = !{i64 8157}
!247 = !{i64 8164}
!248 = !{i64 8174}
!249 = !{i64 8176}
!250 = !{i64 8178}
!251 = !{i64 8193}
!252 = !{i64 8203}
!253 = !{i64 8213}
!254 = !{i64 8215}
!255 = !{i64 8217}
!256 = !{i64 8228}
!257 = !{i64 8243}
!258 = !{i64 8250}
!259 = !{i64 8261}
!260 = !{i64 8276}
!261 = !{i64 8285}
!262 = !{i64 8286}
!263 = !{i64 8297}
!264 = !{i64 8320}
!265 = !{i64 8374}
!266 = !{i64 8377}
!267 = !{i64 8356}
!268 = !{i64 8358}
!269 = !{i64 8364}
!270 = !{i64 8367}
!271 = !{i64 8386}
!272 = !{i64 8387}
!273 = !{i64 8392}
!274 = !{i64 8397}
!275 = !{i64 8407}
!276 = !{i64 8430}
!277 = !{i64 8438}
!278 = !{i64 8446}
!279 = !{i64 8457}
!280 = !{i64 8465}
!281 = !{i64 8471}
!282 = !{i64 8476}
!283 = !{i64 8483}
!284 = !{i64 8485}
!285 = !{i64 8491}
!286 = !{i64 8503}
!287 = !{i64 8520}
!288 = !{i64 8531}
!289 = !{i64 8542}
!290 = !{i64 8573}
!291 = !{i64 8584}
!292 = !{i64 8612}
!293 = !{i64 8618}
!294 = !{i64 8629}
!295 = !{i64 8639}
!296 = !{i64 8651}
!297 = !{i64 8663}
!298 = !{i64 8678}
!299 = !{i64 8690}
!300 = !{i64 8704}
!301 = !{i64 8710}
!302 = !{i64 8711}
!303 = !{i64 8719}
!304 = !{i64 8728}
!305 = !{i64 8734}
!306 = !{i64 8735}
!307 = !{i64 8743}
!308 = !{i64 8752}
!309 = !{i64 8758}
!310 = !{i64 8759}
!311 = !{i64 8767}
!312 = !{i64 8776}
!313 = !{i64 8782}
!314 = !{i64 8783}
!315 = !{i64 8791}
!316 = !{i64 8800}
!317 = !{i64 8806}
!318 = !{i64 8807}
!319 = !{i64 8815}
!320 = !{i64 8824}
!321 = !{i64 8830}
!322 = !{i64 8831}
!323 = !{i64 8839}
!324 = !{i64 8848}
!325 = !{i64 8854}
!326 = !{i64 8855}
!327 = !{i64 8863}
!328 = !{i64 8872}
!329 = !{i64 8878}
!330 = !{i64 8879}
!331 = !{i64 8887}
!332 = !{i64 8896}
!333 = !{i64 8902}
!334 = !{i64 8903}
!335 = !{i64 8911}
!336 = !{i64 8920}
!337 = !{i64 8926}
!338 = !{i64 8927}
!339 = !{i64 8935}
!340 = !{i64 8944}
!341 = !{i64 8950}
!342 = !{i64 8951}
!343 = !{i64 8959}
!344 = !{i64 8968}
!345 = !{i64 8974}
!346 = !{i64 8975}
!347 = !{i64 8983}
!348 = !{i64 8992}
!349 = !{i64 8998}
!350 = !{i64 8999}
!351 = !{i64 9012}
!352 = !{i64 9013}
!353 = !{i64 9024}
!354 = !{i64 9045}
!355 = !{i64 9056}
!356 = !{i64 9060}
!357 = !{i64 9062}
!358 = !{i64 9067}
!359 = !{i64 9069}
!360 = !{i64 9071}
!361 = !{i64 9081}
!362 = !{i64 9089}
!363 = !{i64 9096}
!364 = !{i64 9107}
!365 = !{i64 9120}
!366 = !{i64 9127}
!367 = !{i64 9138}
!368 = !{i64 9157}
!369 = !{i64 9158}
!370 = !{i64 9169}
!371 = !{i64 9185}
!372 = !{i64 9209}
!373 = !{i64 9217}
!374 = !{i64 9219}
!375 = !{i64 9250}
!376 = !{i64 9257}
!377 = !{i64 9259}
!378 = !{i64 9268}
!379 = !{i64 9279}
!380 = !{i64 9292}
!381 = !{i64 9299}
!382 = !{i64 9308}
!383 = !{i64 9309}
!384 = !{i64 9320}
!385 = !{i64 9343}
!386 = !{i64 9354}
!387 = !{i64 9362}
!388 = !{i64 9366}
!389 = !{i64 9375}
!390 = !{i64 9379}
!391 = !{i64 9392}
!392 = !{i64 9405}
!393 = !{i64 9422}
!394 = !{i64 9433}
!395 = !{i64 9437}
!396 = !{i64 9446}
!397 = !{i64 9449}
!398 = !{i64 9452}
!399 = !{i64 9454}
!400 = !{i64 9462}
!401 = !{i64 9465}
!402 = !{i64 9475}
!403 = !{i64 9482}
!404 = !{i64 9484}
!405 = !{i64 9493}
!406 = !{i64 9504}
!407 = !{i64 9519}
!408 = !{i64 9526}
!409 = !{i64 9537}
!410 = !{i64 9541}
!411 = !{i64 9556}
!412 = !{i64 9557}
!413 = !{i64 9568}
!414 = !{i64 9579}
!415 = !{i64 9597}
!416 = !{i64 9605}
!417 = !{i64 9607}
!418 = !{i64 9619}
!419 = !{i64 9627}
!420 = !{i64 9631}
!421 = !{i64 9643}
!422 = !{i64 9647}
!423 = !{i64 9649}
!424 = !{i64 9656}
!425 = !{i64 9664}
!426 = !{i64 9676}
!427 = !{i64 9679}
!428 = !{i64 9698}
!429 = !{i64 9713}
!430 = !{i64 9726}
!431 = !{i64 9738}
!432 = !{i64 9746}
!433 = !{i64 9759}
!434 = !{i64 9770}
!435 = !{i64 9776}
!436 = !{i64 9778}
!437 = !{i64 9781}
!438 = !{i64 9788}
!439 = !{i64 9801}
!440 = !{i64 9813}
!441 = !{i64 9822}
!442 = !{i64 9830}
!443 = !{i64 9837}
!444 = !{i64 9839}
!445 = !{i64 9848}
!446 = !{i64 9859}
!447 = !{i64 9869}
!448 = !{i64 9875}
!449 = !{i64 9876}
!450 = !{i64 9887}
!451 = !{i64 9898}
!452 = !{i64 9918}
!453 = !{i64 9929}
!454 = !{i64 9933}
!455 = !{i64 9945}
!456 = !{i64 9968}
!457 = !{i64 9976}
!458 = !{i64 9978}
!459 = !{i64 9986}
!460 = !{i64 9999}
!461 = !{i64 10015}
!462 = !{i64 10023}
!463 = !{i64 10034}
!464 = !{i64 10065}
!465 = !{i64 10073}
!466 = !{i64 10075}
!467 = !{i64 10083}
!468 = !{i64 10096}
!469 = !{i64 10106}
!470 = !{i64 10114}
!471 = !{i64 10116}
!472 = !{i64 10153}
!473 = !{i64 10161}
!474 = !{i64 10168}
!475 = !{i64 10170}
!476 = !{i64 10179}
!477 = !{i64 10190}
!478 = !{i64 10200}
!479 = !{i64 10206}
!480 = !{i64 10207}
!481 = !{i64 10218}
!482 = !{i64 10229}
!483 = !{i64 10248}
!484 = !{i64 10251}
!485 = !{i64 10262}
!486 = !{i64 10266}
!487 = !{i64 10284}
!488 = !{i64 10304}
!489 = !{i64 10315}
!490 = !{i64 10319}
!491 = !{i64 10347}
!492 = !{i64 10358}
!493 = !{i64 10362}
!494 = !{i64 10381}
!495 = !{i64 10389}
!496 = !{i64 10392}
!497 = !{i64 10396}
!498 = !{i64 10405}
!499 = !{i64 10408}
!500 = !{i64 10414}
!501 = !{i64 10421}
!502 = !{i64 10428}
!503 = !{i64 10438}
!504 = !{i64 10455}
!505 = !{i64 10473}
!506 = !{i64 10481}
!507 = !{i64 10488}
!508 = !{i64 10499}
!509 = !{i64 10509}
!510 = !{i64 10521}
!511 = !{i64 10536}
!512 = !{i64 10544}
!513 = !{i64 10549}
!514 = !{i64 10554}
!515 = !{i64 10567}
!516 = !{i64 10575}
!517 = !{i64 10576}
!518 = !{i64 10587}
!519 = !{i64 10601}
!520 = !{i64 10607}
!521 = !{i64 10610}
!522 = !{i64 10618}
!523 = !{i64 10621}
!524 = !{i64 10645}
!525 = !{i64 10653}
!526 = !{i64 10656}
!527 = !{i64 10615}
!528 = !{i64 10668}
!529 = !{i64 10683}
!530 = !{i64 10716}
!531 = !{i64 10722}
!532 = !{i64 10724}
!533 = !{i64 10737}
!534 = !{i64 10703}
!535 = !{i64 10708}
!536 = !{i64 10729}
!537 = !{i64 10735}
!538 = !{i64 10739}
!539 = !{i64 10745}
!540 = !{i64 10747}
!541 = !{i64 10759}
!542 = !{i64 10765}
!543 = !{i64 10768}
!544 = !{i64 10780}
!545 = !{i64 10793}
!546 = !{i64 10795}
!547 = !{i64 10834}
!548 = !{i64 10836}
!549 = !{i64 10815}
!550 = !{i64 10820}
!551 = !{i64 10841}
!552 = !{i64 10847}
!553 = !{i64 10849}
!554 = !{i64 10851}
!555 = !{i64 10857}
!556 = !{i64 10859}
!557 = !{i64 10861}
!558 = !{i64 10867}
!559 = !{i64 10870}
!560 = !{i64 10882}
!561 = !{i64 10884}
!562 = !{i64 10886}
!563 = !{i64 10897}
!564 = !{i64 10899}
!565 = !{i64 10901}
!566 = !{i64 10909}
!567 = !{i64 10918}
!568 = !{i64 10929}
!569 = !{i64 10939}
!570 = !{i64 10945}
!571 = !{i64 10957}
!572 = !{i64 10971}
!573 = !{i64 10977}
!574 = !{i64 10978}
!575 = !{i64 10986}
!576 = !{i64 10995}
!577 = !{i64 11001}
!578 = !{i64 11002}
!579 = !{i64 11010}
!580 = !{i64 11019}
!581 = !{i64 11025}
!582 = !{i64 11026}
!583 = !{i64 11034}
!584 = !{i64 11043}
!585 = !{i64 11049}
!586 = !{i64 11050}
!587 = !{i64 11058}
!588 = !{i64 11067}
!589 = !{i64 11073}
!590 = !{i64 11074}
!591 = !{i64 11082}
!592 = !{i64 11091}
!593 = !{i64 11097}
!594 = !{i64 11098}
!595 = !{i64 11106}
!596 = !{i64 11115}
!597 = !{i64 11121}
!598 = !{i64 11122}
!599 = !{i64 11130}
!600 = !{i64 11139}
!601 = !{i64 11145}
!602 = !{i64 11146}
!603 = !{i64 11159}
!604 = !{i64 11171}
!605 = !{i64 11191}
!606 = !{i64 11199}
!607 = !{i64 11212}
!608 = !{i64 11229}
!609 = !{i64 11238}
!610 = !{i64 11239}
!611 = !{i64 11250}
!612 = !{i64 11261}
!613 = !{i64 11275}
!614 = !{i64 11282}
!615 = !{i64 11288}
!616 = !{i64 11295}
!617 = !{i64 11306}
!618 = !{i64 11310}
!619 = !{i64 11319}
!620 = !{i64 11330}
!621 = !{i64 11341}
!622 = !{i64 11353}
!623 = !{i64 11361}
!624 = !{i64 11367}
!625 = !{i64 11374}
!626 = !{i64 11376}
!627 = !{i64 11385}
!628 = !{i64 11396}
!629 = !{i64 11411}
!630 = !{i64 11420}
!631 = !{i64 11421}
!632 = !{i64 11431}
!633 = !{i64 11450}
!634 = !{i64 11460}
!635 = !{i64 11491}
!636 = !{i64 11497}
!637 = !{i64 11470}
!638 = !{i64 11476}
!639 = !{i64 11481}
!640 = !{i64 11484}
!641 = !{i64 11505}
!642 = !{i64 11506}
!643 = !{i64 11511}
!644 = !{i64 11514}
!645 = !{i64 11517}
!646 = !{i64 11528}
!647 = !{i64 11539}
!648 = !{i64 11611}
!649 = !{i64 11628}
!650 = !{i64 11639}
!651 = !{i64 11640}
!652 = !{i64 11646}
!653 = !{i64 11623}
!654 = !{i64 11626}
!655 = !{i64 11634}
!656 = !{i64 11637}
!657 = !{i64 11647}
!658 = !{i64 11649}
!659 = !{i64 11650}
!660 = !{i64 11658}
!661 = !{i64 11660}
!662 = !{i64 11669}
!663 = !{i64 11677}
!664 = !{i64 11698}
!665 = !{i64 11695}
!666 = !{i64 11705}
!667 = !{i64 11707}
!668 = !{i64 11708}
!669 = !{i64 11716}
!670 = !{i64 11718}
!671 = !{i64 11736}
!672 = !{i64 11744}
!673 = !{i64 11747}
!674 = !{i64 11749}
!675 = !{i64 11752}
!676 = !{i64 11760}
!677 = !{i64 11768}
!678 = !{i64 11775}
!679 = !{i64 11777}
!680 = !{i64 11786}
!681 = !{i64 11797}
!682 = !{i64 11807}
!683 = !{i64 11813}
!684 = !{i64 11814}
!685 = !{i64 11825}
!686 = !{i64 11839}
!687 = !{i64 11930}
!688 = !{i64 11822}
!689 = !{i64 11856}
!690 = !{i64 11862}
!691 = !{i64 11863}
!692 = !{i64 11871}
!693 = !{i64 11877}
!694 = !{i64 11880}
!695 = !{i64 11895}
!696 = !{i64 11896}
!697 = !{i64 11907}
!698 = !{i64 11912}
!699 = !{i64 11920}
!700 = !{i64 11941}
!701 = !{i64 11942}
!702 = !{i64 11953}
!703 = !{i64 11967}
!704 = !{i64 11974}
!705 = !{i64 11985}
!706 = !{i64 11989}
!707 = !{i64 11979}
!708 = !{i64 12001}
!709 = !{i64 12092}
!710 = !{i64 12038}
!711 = !{i64 12039}
!712 = !{i64 12045}
!713 = !{i64 12046}
!714 = !{i64 12048}
!715 = !{i64 12023}
!716 = !{i64 12033}
!717 = !{i64 12049}
!718 = !{i64 12057}
!719 = !{i64 12059}
!720 = !{i64 12064}
!721 = !{i64 12067}
!722 = !{i64 12080}
!723 = !{i64 12082}
!724 = !{i64 12149}
!725 = !{i64 12106}
!726 = !{i64 12116}
!727 = !{i64 12118}
!728 = !{i64 12123}
!729 = !{i64 12125}
!730 = !{i64 12126}
!731 = !{i64 12134}
!732 = !{i64 12144}
!733 = !{i64 12152}
!734 = !{i64 12160}
!735 = !{i64 12166}
!736 = !{i64 12172}
!737 = !{i64 12178}
!738 = !{i64 12181}
!739 = !{i64 12190}
!740 = !{i64 12199}
!741 = !{i64 12210}
!742 = !{i64 12230}
!743 = !{i64 12239}
!744 = !{i64 12240}
!745 = !{i64 12251}
!746 = !{i64 12265}
!747 = !{i64 12272}
!748 = !{i64 12277}
!749 = !{i64 12307}
!750 = !{i64 12313}
!751 = !{i64 12315}
!752 = !{i64 12335}
!753 = !{i64 12291}
!754 = !{i64 12292}
!755 = !{i64 12298}
!756 = !{i64 12299}
!757 = !{i64 12317}
!758 = !{i64 12336}
!759 = !{i64 12347}
!760 = !{i64 12349}
!761 = !{i64 12366}
!762 = !{i64 12375}
!763 = !{i64 12387}
!764 = !{i64 12403}
!765 = !{i64 12414}
!766 = !{i64 12421}
!767 = !{i64 12429}
!768 = !{i64 12439}
!769 = !{i64 12452}
!770 = !{i64 12459}
!771 = !{i64 12477}
!772 = !{i64 12494}
!773 = !{i64 12495}
!774 = !{i64 12506}
!775 = !{i64 12517}
!776 = !{i64 12528}
!777 = !{i64 12538}
!778 = !{i64 12550}
!779 = !{i64 12556}
!780 = !{i64 12563}
!781 = !{i64 12571}
!782 = !{i64 12573}
!783 = !{i64 12584}
!784 = !{i64 12590}
!785 = !{i64 12597}
!786 = !{i64 12605}
!787 = !{i64 12607}
!788 = !{i64 12616}
!789 = !{i64 12629}
!790 = !{i64 12642}
!791 = !{i64 12650}
!792 = !{i64 12659}
!793 = !{i64 12670}
!794 = !{i64 12682}
!795 = !{i64 12690}
!796 = !{i64 12696}
!797 = !{i64 12703}
!798 = !{i64 12705}
!799 = !{i64 12714}
!800 = !{i64 12725}
!801 = !{i64 12735}
!802 = !{i64 12741}
!803 = !{i64 12742}
!804 = !{i64 12753}
!805 = !{i64 12770}
!806 = !{i64 12784}
!807 = !{i64 12858}
!808 = !{i64 12798}
!809 = !{i64 12815}
!810 = !{i64 12831}
!811 = !{i64 12848}
!812 = !{i64 12868}
!813 = !{i64 12875}
!814 = !{i64 12877}
!815 = !{i64 12886}
!816 = !{i64 12897}
!817 = !{i64 12907}
!818 = !{i64 12919}
!819 = !{i64 12922}
!820 = !{i64 12934}
!821 = !{i64 12935}
!822 = !{i64 12946}
!823 = !{i64 12957}
!824 = !{i64 12971}
!825 = !{i64 12978}
!826 = !{i64 12989}
!827 = !{i64 12993}
!828 = !{i64 12983}
!829 = !{i64 13010}
!830 = !{i64 13100}
!831 = !{i64 13110}
!832 = !{i64 13111}
!833 = !{i64 13116}
!834 = !{i64 13043}
!835 = !{i64 13044}
!836 = !{i64 13028}
!837 = !{i64 13038}
!838 = !{i64 13050}
!839 = !{i64 13051}
!840 = !{i64 13053}
!841 = !{i64 13054}
!842 = !{i64 13062}
!843 = !{i64 13064}
!844 = !{i64 13069}
!845 = !{i64 13072}
!846 = !{i64 13085}
!847 = !{i64 13090}
!848 = !{i64 13102}
!849 = !{i64 13104}
!850 = !{i64 13117}
!851 = !{i64 13125}
!852 = !{i64 13127}
!853 = !{i64 13129}
!854 = !{i64 13135}
!855 = !{i64 13137}
!856 = !{i64 13138}
!857 = !{i64 13143}
!858 = !{i64 13196}
!859 = !{i64 13158}
!860 = !{i64 13168}
!861 = !{i64 13170}
!862 = !{i64 13175}
!863 = !{i64 13177}
!864 = !{i64 13178}
!865 = !{i64 13186}
!866 = !{i64 13198}
!867 = !{i64 13210}
!868 = !{i64 13213}
!869 = !{i64 13225}
!870 = !{i64 13234}
!871 = !{i64 13242}
!872 = !{i64 13249}
!873 = !{i64 13251}
!874 = !{i64 13260}
!875 = !{i64 13271}
!876 = !{i64 13291}
!877 = !{i64 13300}
!878 = !{i64 13312}
!879 = !{i64 13329}
!880 = !{i64 13338}
!881 = !{i64 13344}
!882 = !{i64 13347}
!883 = !{i64 13361}
!884 = !{i64 13374}
!885 = !{i64 13376}
!886 = !{i64 13377}
!887 = !{i64 13390}
!888 = !{i64 13407}
!889 = !{i64 13412}
!890 = !{i64 13415}
!891 = !{i64 13421}
!892 = !{i64 13430}
!893 = !{i64 13431}
!894 = !{i64 13443}
!895 = !{i64 13454}
!896 = !{i64 13468}
!897 = !{i64 13475}
!898 = !{i64 13496}
!899 = !{i64 13507}
!900 = !{i64 13513}
!901 = !{i64 13517}
!902 = !{i64 13511}
!903 = !{i64 13501}
!904 = !{i64 13617}
!905 = !{i64 13541}
!906 = !{i64 13551}
!907 = !{i64 13557}
!908 = !{i64 13559}
!909 = !{i64 13567}
!910 = !{i64 13586}
!911 = !{i64 13595}
!912 = !{i64 13596}
!913 = !{i64 13598}
!914 = !{i64 13599}
!915 = !{i64 13607}
!916 = !{i64 13664}
!917 = !{i64 13634}
!918 = !{i64 13644}
!919 = !{i64 13646}
!920 = !{i64 13661}
!921 = !{i64 13663}
!922 = !{i64 13670}
!923 = !{i64 13671}
!924 = !{i64 13673}
!925 = !{i64 13674}
!926 = !{i64 13682}
!927 = !{i64 13684}
!928 = !{i64 13698}
!929 = !{i64 13708}
!930 = !{i64 13710}
!931 = !{i64 13715}
!932 = !{i64 13716}
!933 = !{i64 13724}
!934 = !{i64 13734}
!935 = !{i64 13739}
!936 = !{i64 13742}
!937 = !{i64 13753}
!938 = !{i64 13756}
!939 = !{i64 13769}
!940 = !{i64 13784}
!941 = !{i64 13836}
!942 = !{i64 13816}
!943 = !{i64 13826}
!944 = !{i64 13828}
!945 = !{i64 13837}
!946 = !{i64 13838}
!947 = !{i64 13846}
!948 = !{i64 13855}
!949 = !{i64 13857}
!950 = !{i64 13863}
!951 = !{i64 13866}
!952 = !{i64 13868}
!953 = !{i64 13874}
!954 = !{i64 13877}
!955 = !{i64 13898}
!956 = !{i64 13900}
!957 = !{i64 13905}
!958 = !{i64 13906}
!959 = !{i64 13914}
!960 = !{i64 13924}
!961 = !{i64 13929}
!962 = !{i64 13932}
!963 = !{i64 13943}
!964 = !{i64 13946}
!965 = !{i64 13978}
!966 = !{i64 13981}
!967 = !{i64 13966}
!968 = !{i64 13986}
!969 = !{i64 13989}
!970 = !{i64 13998}
!971 = !{i64 14006}
!972 = !{i64 14013}
!973 = !{i64 14015}
!974 = !{i64 14026}
!975 = !{i64 14037}
!976 = !{i64 14052}
!977 = !{i64 14061}
!978 = !{i64 14073}
!979 = !{i64 14087}
!980 = !{i64 14093}
!981 = !{i64 14094}
!982 = !{i64 14102}
!983 = !{i64 14111}
!984 = !{i64 14117}
!985 = !{i64 14118}
!986 = !{i64 14126}
!987 = !{i64 14135}
!988 = !{i64 14141}
!989 = !{i64 14142}
!990 = !{i64 14150}
!991 = !{i64 14159}
!992 = !{i64 14165}
!993 = !{i64 14166}
!994 = !{i64 14174}
!995 = !{i64 14183}
!996 = !{i64 14189}
!997 = !{i64 14190}
!998 = !{i64 14198}
!999 = !{i64 14207}
!1000 = !{i64 14213}
!1001 = !{i64 14214}
!1002 = !{i64 14222}
!1003 = !{i64 14231}
!1004 = !{i64 14237}
!1005 = !{i64 14238}
!1006 = !{i64 14251}
!1007 = !{i64 14262}
!1008 = !{i64 14272}
!1009 = !{i64 14277}
!1010 = !{i64 14282}
!1011 = !{i64 14293}
!1012 = !{i64 14297}
!1013 = !{i64 14309}
!1014 = !{i64 14323}
!1015 = !{i64 14334}
!1016 = !{i64 14336}
!1017 = !{i64 14340}
!1018 = !{i64 14351}
!1019 = !{i64 14357}
!1020 = !{i64 14360}
!1021 = !{i64 14386}
!1022 = !{i64 14392}
!1023 = !{i64 14395}
!1024 = !{i64 14401}
!1025 = !{i64 14420}
!1026 = !{i64 14431}
!1027 = !{i64 14440}
