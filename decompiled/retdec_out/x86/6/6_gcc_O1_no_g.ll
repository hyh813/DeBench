source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

%shmid_ds = type { %ipc_perm, i32, i32, i32, i32, i32, i32, i16, i16, i32*, i32* }
%ipc_perm = type { i32, i32, i32, i32, i32, i32, i16 }
%_IO_FILE = type { i32 }
%stat = type { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }
%sockaddr = type { i32, [14 x i8] }

@global_var_55ab = local_unnamed_addr constant i32 -2297088
@global_var_4ff = global i32 0
@global_var_55af = local_unnamed_addr constant i32* @global_var_4ff
@global_var_5592 = local_unnamed_addr constant i32 258473984
@global_var_5564 = constant i32 537805340
@global_var_3e8 = global i32 71
@global_var_54fa = constant i32 239213582
@global_var_547f = constant i32 1097600578
@global_var_5424 = constant i32 -9320
@global_var_53df = constant i32 -952038386
@global_var_53b8 = local_unnamed_addr constant i32 239422478
@global_var_535f = local_unnamed_addr constant i32 865280
@global_var_5331 = constant i32 239413262
@global_var_52e8 = local_unnamed_addr constant i32 1109134917
@global_var_52b9 = constant i32 247873808
@global_var_525b = local_unnamed_addr constant i32 68044816
@global_var_522f = local_unnamed_addr constant i32 1701842504
@global_var_5169 = local_unnamed_addr constant i32 239145998
@global_var_5098 = constant i32 240261134
@global_var_506b = constant i32 -2623232
@global_var_5047 = constant i32 1211108929
@global_var_4fe1 = constant i32 0
@global_var_4fc0 = external constant i32
@global_var_4f6f = constant i32 1110707826
@global_var_4f44 = constant i32 239141510
@global_var_4e5a = constant i32 239273091
@global_var_4e35 = local_unnamed_addr constant i32 239607822
@global_var_4db7 = local_unnamed_addr constant i32 1225789000
@global_var_4d0f = local_unnamed_addr constant i32 336481568
@global_var_4cb8 = constant i32 4
@global_var_4c8d = constant i32 202260738
@global_var_4b54 = local_unnamed_addr constant i32 1611546972
@global_var_4b0b = constant i32 61183
@global_var_4ae3 = local_unnamed_addr constant i32 6155
@global_var_b41 = global i32 117440623
@global_var_4a80 = constant i32* @global_var_b41
@global_var_4a5c = local_unnamed_addr constant i32 103
@global_var_49c5 = constant i32 -1644167213
@global_var_4995 = constant i32 -369098749
@global_var_4892 = local_unnamed_addr constant i32 3211263
@global_var_476c = constant i32 403593232
@global_var_4666 = constant i32 234881024
@global_var_7d0 = constant [17 x i8] c"thread_cond_wait\00"
@global_var_828 = constant [8 x i8] c"sockopt\00"
@global_var_4500 = constant [8 x i8]* @global_var_828
@global_var_443a = constant i32 -696057856
@global_var_439c = local_unnamed_addr constant i32 540711836
@global_var_4290 = constant i32 -1662607460
@global_var_418a = constant i32 -1617107416
@global_var_40a5 = constant i32 622869041
@global_var_1f4 = local_unnamed_addr constant [4 x i8] c"GNU\00"
@global_var_1120 = local_unnamed_addr constant i32 -81915917
@0 = external global i32
@global_var_3b6 = global %shmid_ds* inttoptr (i32 28704768 to %shmid_ds*)

define i32 @_init() local_unnamed_addr {
dec_label_pc_1000:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !0
  %3 = call i32 @frame_dummy(), !insn.addr !1
  %4 = call i32 @__do_global_ctors_aux(), !insn.addr !2
  ret i32 %4, !insn.addr !3
}

define void @function_13e0(i32* %d) local_unnamed_addr {
dec_label_pc_13e0:
  call void @__cxa_finalize(i32* %d), !insn.addr !4
  ret void, !insn.addr !4
}

define i32 @function_13f0(i32 %fd, i32 %level, i32 %optname, i32* %optval, i32 %optlen) local_unnamed_addr {
dec_label_pc_13f0:
  %0 = call i32 @setsockopt(i32 %fd, i32 %level, i32 %optname, i32* %optval, i32 %optlen), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define i32 @function_1400(i32* %mutex) local_unnamed_addr {
dec_label_pc_1400:
  %0 = call i32 @pthread_mutex_unlock(i32* %mutex), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i32 @function_1410(i32 %sig) local_unnamed_addr {
dec_label_pc_1410:
  %0 = call i32 @raise(i32 %sig), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @function_1420(i8* %s, i32 %n, i32 %flag, i32 %slen, i8* %format, ...) local_unnamed_addr {
dec_label_pc_1420:
  %0 = call i32 (i8*, i32, i32, i32, i8*, ...) @__snprintf_chk(i8* %s, i32 %n, i32 %flag, i32 %slen, i8* %format), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i8* @function_1430(i8* %haystack, i8* %needle) local_unnamed_addr {
dec_label_pc_1430:
  %0 = call i8* @strstr(i8* %haystack, i8* %needle), !insn.addr !9
  ret i8* %0, !insn.addr !9
}

define i32 @function_1440(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_1440:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i32 @function_1450(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_1450:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i32 @function_1460(i32 %fd, i32* %buf, i32 %nbytes) local_unnamed_addr {
dec_label_pc_1460:
  %0 = call i32 @read(i32 %fd, i32* %buf, i32 %nbytes), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define void @function_1470(i32 %status) local_unnamed_addr {
dec_label_pc_1470:
  call void @_exit(i32 %status), !insn.addr !13
  ret void, !insn.addr !13
}

define void @function_1480(i32* %ptr) local_unnamed_addr {
dec_label_pc_1480:
  call void @free(i32* %ptr), !insn.addr !14
  ret void, !insn.addr !14
}

define i32* @function_1490(i32* %dest, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1490:
  %0 = call i32* @memcpy(i32* %dest, i32* %src, i32 %n), !insn.addr !15
  ret i32* %0, !insn.addr !15
}

define i32 @function_14a0(i32 %key, i32 %size, i32 %shmflg) local_unnamed_addr {
dec_label_pc_14a0:
  %0 = call i32 @shmget(i32 %key, i32 %size, i32 %shmflg), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i32 @function_14b0(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_14b0:
  %0 = call i32 @fclose(%_IO_FILE* %stream), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i32 @function_14c0(i32* %cond, i32* %mutex) local_unnamed_addr {
dec_label_pc_14c0:
  %0 = call i32 @pthread_cond_wait(i32* %cond, i32* %mutex), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define void (i32)* @function_14d0(i32 %sig, void (i32)* %handler) local_unnamed_addr {
dec_label_pc_14d0:
  %0 = call void (i32)* @signal(i32 %sig, void (i32)* %handler), !insn.addr !19
  ret void (i32)* %0, !insn.addr !19
}

define i32 @function_14e0(i32* %s1, i32* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_14e0:
  %0 = call i32 @memcmp(i32* %s1, i32* %s2, i32 %n), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i32 @function_14f0(i32 %seconds) local_unnamed_addr {
dec_label_pc_14f0:
  %0 = call i32 @sleep(i32 %seconds), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define i32 @function_1500(i32 %seconds) local_unnamed_addr {
dec_label_pc_1500:
  %0 = call i32 @alarm(i32 %seconds), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define void @function_1510() local_unnamed_addr {
dec_label_pc_1510:
  call void @__stack_chk_fail(), !insn.addr !23
  ret void, !insn.addr !23
}

define void @function_1520(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_1520:
  call void @rewind(%_IO_FILE* %stream), !insn.addr !24
  ret void, !insn.addr !24
}

define i32 @function_1530(i32 %stat_loc) local_unnamed_addr {
dec_label_pc_1530:
  %0 = call i32 @wait(i32 %stat_loc), !insn.addr !25
  ret i32 %0, !insn.addr !25
}

define i32* @function_1540(i32 %shmid, i32* %shmaddr, i32 %shmflg) local_unnamed_addr {
dec_label_pc_1540:
  %0 = call i32* @shmat(i32 %shmid, i32* %shmaddr, i32 %shmflg), !insn.addr !26
  ret i32* %0, !insn.addr !26
}

define i32 @function_1550(i32* %mutex) local_unnamed_addr {
dec_label_pc_1550:
  %0 = call i32 @pthread_mutex_lock(i32* %mutex), !insn.addr !27
  ret i32 %0, !insn.addr !27
}

define i32 @function_1560(i8* %name) local_unnamed_addr {
dec_label_pc_1560:
  %0 = call i32 @unlink(i8* %name), !insn.addr !28
  ret i32 %0, !insn.addr !28
}

define i32 @function_1570(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_1570:
  %0 = call i32 @fwrite(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !29
  ret i32 %0, !insn.addr !29
}

define i32 @function_1580(i32 %pid, i32* %stat_loc, i32 %options) local_unnamed_addr {
dec_label_pc_1580:
  %0 = call i32 @waitpid(i32 %pid, i32* %stat_loc, i32 %options), !insn.addr !30
  ret i32 %0, !insn.addr !30
}

define i32 @function_1590(i32 %useconds) local_unnamed_addr {
dec_label_pc_1590:
  %0 = call i32 @usleep(i32 %useconds), !insn.addr !31
  ret i32 %0, !insn.addr !31
}

define i32 @function_15a0(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_15a0:
  %0 = call i32 @fread(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream), !insn.addr !32
  ret i32 %0, !insn.addr !32
}

define i8* @function_15b0(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_15b0:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !33
  ret i8* %0, !insn.addr !33
}

define i32 @function_15c0(i32 %shmid, i32 %cmd, %shmid_ds* %buf) local_unnamed_addr {
dec_label_pc_15c0:
  %0 = call i32 @shmctl(i32 %shmid, i32 %cmd, %shmid_ds* %buf), !insn.addr !34
  ret i32 %0, !insn.addr !34
}

define i32 @function_15d0(i32* %cond) local_unnamed_addr {
dec_label_pc_15d0:
  %0 = call i32 @pthread_cond_signal(i32* %cond), !insn.addr !35
  ret i32 %0, !insn.addr !35
}

define i32* @function_15e0(i32 %size) local_unnamed_addr {
dec_label_pc_15e0:
  %0 = call i32* @malloc(i32 %size), !insn.addr !36
  ret i32* %0, !insn.addr !36
}

define i32 @function_15f0(i8* %s) local_unnamed_addr {
dec_label_pc_15f0:
  %0 = call i32 @puts(i8* %s), !insn.addr !37
  ret i32 %0, !insn.addr !37
}

define i32 @function_1600(i8* %file, %stat* %buf) local_unnamed_addr {
dec_label_pc_1600:
  %0 = call i32 @stat(i8* %file, %stat* %buf), !insn.addr !38
  ret i32 %0, !insn.addr !38
}

define i32 @function_1610(i8* %file, i32 %oflag, ...) local_unnamed_addr {
dec_label_pc_1610:
  %0 = call i32 (i8*, i32, ...) @open(i8* %file, i32 %oflag), !insn.addr !39
  ret i32 %0, !insn.addr !39
}

define i8* @function_1620(i8* %s, i32 %c) local_unnamed_addr {
dec_label_pc_1620:
  %0 = call i8* @strchr(i8* %s, i32 %c), !insn.addr !40
  ret i8* %0, !insn.addr !40
}

define i32 @function_1630(i8* %s) local_unnamed_addr {
dec_label_pc_1630:
  %0 = call i32 @strlen(i8* %s), !insn.addr !41
  ret i32 %0, !insn.addr !41
}

define i32 @function_1640(i32 %fd, i32* %buf, i32 %n) local_unnamed_addr {
dec_label_pc_1640:
  %0 = call i32 @write(i32 %fd, i32* %buf, i32 %n), !insn.addr !42
  ret i32 %0, !insn.addr !42
}

define i32 @function_1650(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_1650:
  %0 = call i32 @bind(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !43
  ret i32 %0, !insn.addr !43
}

define i32 @function_1660(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_1660:
  %0 = call i32 (i8*, i8*, ...) @sscanf(i8* %s, i8* %format), !insn.addr !44
  ret i32 %0, !insn.addr !44
}

define %_IO_FILE* @function_1670(i8* %filename, i8* %modes) local_unnamed_addr {
dec_label_pc_1670:
  %0 = call %_IO_FILE* @fopen(i8* %filename, i8* %modes), !insn.addr !45
  ret %_IO_FILE* %0, !insn.addr !45
}

define i32* @function_1680(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_1680:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !46
  ret i32* %0, !insn.addr !46
}

define i32* @function_1690() local_unnamed_addr {
dec_label_pc_1690:
  %0 = call i32* @__errno_location(), !insn.addr !47
  ret i32* %0, !insn.addr !47
}

define i8* @function_16a0(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_16a0:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !48
  ret i8* %0, !insn.addr !48
}

define i32 @function_16b0(i32 %sysno, ...) local_unnamed_addr {
dec_label_pc_16b0:
  %0 = call i32 (i32, ...) @syscall(i32 %sysno), !insn.addr !49
  ret i32 %0, !insn.addr !49
}

define i32 @function_16c0(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_16c0:
  %0 = call i32 @fileno(%_IO_FILE* %stream), !insn.addr !50
  ret i32 %0, !insn.addr !50
}

define i32 @function_16d0(i8* %path, i8* %arg, ...) local_unnamed_addr {
dec_label_pc_16d0:
  %0 = call i32 (i8*, i8*, ...) @execl(i8* %path, i8* %arg), !insn.addr !51
  ret i32 %0, !insn.addr !51
}

define i32 @function_16e0([2 x i32] %pipedes) local_unnamed_addr {
dec_label_pc_16e0:
  %0 = call i32 @pipe([2 x i32] %pipedes), !insn.addr !52
  ret i32 %0, !insn.addr !52
}

define i32 @function_16f0(i32 %flag, i8* %format, ...) local_unnamed_addr {
dec_label_pc_16f0:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 %flag, i8* %format), !insn.addr !53
  ret i32 %0, !insn.addr !53
}

define i32 @function_1700(i32* %shmaddr) local_unnamed_addr {
dec_label_pc_1700:
  %0 = call i32 @shmdt(i32* %shmaddr), !insn.addr !54
  ret i32 %0, !insn.addr !54
}

define i32 @function_1710(i32* %newthread, i32* %attr, i32* (i32*)* %start_routine, i32* %arg) local_unnamed_addr {
dec_label_pc_1710:
  %0 = call i32 @pthread_create(i32* %newthread, i32* %attr, i32* (i32*)* %start_routine, i32* %arg), !insn.addr !55
  ret i32 %0, !insn.addr !55
}

define i32 @function_1720() local_unnamed_addr {
dec_label_pc_1720:
  %0 = call i32 @fork(), !insn.addr !56
  ret i32 %0, !insn.addr !56
}

define i32 @function_1730(i32 %fd, i32 %n) local_unnamed_addr {
dec_label_pc_1730:
  %0 = call i32 @listen(i32 %fd, i32 %n), !insn.addr !57
  ret i32 %0, !insn.addr !57
}

define i32 @function_1740(i8* %pathname, i32 %proj_id) local_unnamed_addr {
dec_label_pc_1740:
  %0 = call i32 @ftok(i8* %pathname, i32 %proj_id), !insn.addr !58
  ret i32 %0, !insn.addr !58
}

define i32 @function_1750(i32 %domain, i32 %type, i32 %protocol) local_unnamed_addr {
dec_label_pc_1750:
  %0 = call i32 @socket(i32 %domain, i32 %type, i32 %protocol), !insn.addr !59
  ret i32 %0, !insn.addr !59
}

define i32 @function_1760(i32 %th, i32** %thread_return) local_unnamed_addr {
dec_label_pc_1760:
  %0 = call i32 @pthread_join(i32 %th, i32** %thread_return), !insn.addr !60
  ret i32 %0, !insn.addr !60
}

define i32 @function_1770(i32 %th) local_unnamed_addr {
dec_label_pc_1770:
  %0 = call i32 @pthread_cancel(i32 %th), !insn.addr !61
  ret i32 %0, !insn.addr !61
}

define i32 @function_1780(i32 %fd) local_unnamed_addr {
dec_label_pc_1780:
  %0 = call i32 @close(i32 %fd), !insn.addr !62
  ret i32 %0, !insn.addr !62
}

define i32 @_start(i32 %arg1) local_unnamed_addr {
dec_label_pc_1790:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_4 = alloca i32, align 4
  %3 = call i32 @function_17bc(i32 %2), !insn.addr !63
  %4 = bitcast i32* %stack_var_4 to i8**
  %5 = add i32 %1, 22612, !insn.addr !64
  %6 = inttoptr i32 %5 to i32*, !insn.addr !64
  %7 = load i32, i32* %6, align 4, !insn.addr !64
  %8 = call i32 @__libc_start_main(i32 %7, i32 %arg1, i8** nonnull %4, void ()* null, void ()* null, void ()* bitcast (i32* @0 to void ()*)), !insn.addr !65
  %9 = call i32 @__asm_hlt(), !insn.addr !66
  unreachable, !insn.addr !66

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @function_17bc(i32 %arg1) local_unnamed_addr {
dec_label_pc_17bc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !67
}

define i32 @__x86.get_pc_thunk.bx(i32 %arg1) local_unnamed_addr {
dec_label_pc_17c0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !68
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_17d0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !69
  %3 = add i32 %1, 22579, !insn.addr !70
  ret i32 %3, !insn.addr !71
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1810:
  %0 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !72
  ret i32 0, !insn.addr !73
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1860:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !74
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.di(i32 %1), !insn.addr !75
  %3 = add i32 %1, 22451, !insn.addr !76
  %4 = inttoptr i32 %3 to i8*, !insn.addr !76
  %5 = load i8, i8* %4, align 1, !insn.addr !76
  %6 = icmp eq i8 %5, 0, !insn.addr !76
  %7 = icmp eq i1 %6, false, !insn.addr !77
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !77
  br i1 %7, label %dec_label_pc_18e2, label %dec_label_pc_1881, !insn.addr !77

dec_label_pc_1881:                                ; preds = %dec_label_pc_1860
  %8 = add i32 %1, 22403, !insn.addr !78
  %9 = inttoptr i32 %8 to i32*, !insn.addr !78
  %10 = load i32, i32* %9, align 4, !insn.addr !78
  %11 = icmp eq i32 %10, 0, !insn.addr !79
  br i1 %11, label %dec_label_pc_189e, label %dec_label_pc_188b, !insn.addr !80

dec_label_pc_188b:                                ; preds = %dec_label_pc_1881
  %12 = add i32 %1, 22423, !insn.addr !81
  %13 = inttoptr i32 %12 to i32*, !insn.addr !81
  %14 = load i32, i32* %13, align 4, !insn.addr !81
  %15 = inttoptr i32 %14 to i32*, !insn.addr !82
  call void @__cxa_finalize(i32* %15), !insn.addr !82
  br label %dec_label_pc_189e, !insn.addr !83

dec_label_pc_189e:                                ; preds = %dec_label_pc_188b, %dec_label_pc_1881
  %16 = call i32 @deregister_tm_clones(), !insn.addr !84
  store i8 1, i8* %4, align 1, !insn.addr !85
  store i32 %16, i32* %eax.0.reg2mem, !insn.addr !85
  br label %dec_label_pc_18e2, !insn.addr !85

dec_label_pc_18e2:                                ; preds = %dec_label_pc_189e, %dec_label_pc_1860
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !86

; uselistorder directives
  uselistorder i32 %1, { 3, 2, 0, 1 }
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_18f0:
  %0 = call i32 @register_tm_clones(), !insn.addr !87
  ret i32 %0, !insn.addr !87
}

define i32 @__x86.get_pc_thunk.dx(i32 %arg1) local_unnamed_addr {
dec_label_pc_18f9:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !88
}

define i32 @__x86.get_pc_thunk.di(i32 %arg1) local_unnamed_addr {
dec_label_pc_18fd:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !89
}

define i32 @signal_handler(i32 %arg1) local_unnamed_addr {
dec_label_pc_1901:
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !90
  %1 = add i32 %0, 21998, !insn.addr !91
  %2 = add i32 %0, 22462, !insn.addr !92
  %3 = inttoptr i32 %2 to i32*, !insn.addr !92
  store i32 1, i32* %3, align 4, !insn.addr !92
  %4 = add i32 %0, 22458, !insn.addr !93
  %5 = inttoptr i32 %4 to i32*, !insn.addr !93
  store i32 %arg1, i32* %5, align 4, !insn.addr !93
  ret i32 %1, !insn.addr !94
}

define i32 @thread_sum(i32 %arg1) local_unnamed_addr {
dec_label_pc_1924:
  %edx.0.reg2mem = alloca i32, !insn.addr !95
  %eax.0.reg2mem = alloca i32, !insn.addr !95
  %0 = add i32 %arg1, 8, !insn.addr !96
  %1 = inttoptr i32 %0 to i32*, !insn.addr !96
  store i32 0, i32* %1, align 4, !insn.addr !96
  %2 = inttoptr i32 %arg1 to i32*, !insn.addr !97
  %3 = load i32, i32* %2, align 4, !insn.addr !97
  %4 = add i32 %arg1, 4, !insn.addr !98
  %5 = inttoptr i32 %4 to i32*, !insn.addr !98
  %6 = load i32, i32* %5, align 4, !insn.addr !98
  %7 = icmp sgt i32 %3, %6, !insn.addr !99
  store i32 %3, i32* %eax.0.reg2mem, !insn.addr !99
  store i32 0, i32* %edx.0.reg2mem, !insn.addr !99
  br i1 %7, label %dec_label_pc_1951, label %dec_label_pc_1945, !insn.addr !99

dec_label_pc_1945:                                ; preds = %dec_label_pc_1924, %dec_label_pc_1945
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %8 = add i32 %edx.0.reload, %eax.0.reload, !insn.addr !100
  %9 = add i32 %eax.0.reload, 1, !insn.addr !101
  %10 = icmp eq i32 %eax.0.reload, %6, !insn.addr !102
  %11 = icmp eq i1 %10, false, !insn.addr !103
  store i32 %9, i32* %eax.0.reg2mem, !insn.addr !103
  store i32 %8, i32* %edx.0.reg2mem, !insn.addr !103
  br i1 %11, label %dec_label_pc_1945, label %dec_label_pc_194e, !insn.addr !103

dec_label_pc_194e:                                ; preds = %dec_label_pc_1945
  store i32 %8, i32* %1, align 4, !insn.addr !104
  br label %dec_label_pc_1951, !insn.addr !104

dec_label_pc_1951:                                ; preds = %dec_label_pc_194e, %dec_label_pc_1924
  ret i32 0, !insn.addr !105

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
  uselistorder i32 %eax.0.reload, { 1, 0, 2 }
  uselistorder i32* %eax.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32 %arg1, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1945, { 1, 0 }
}

define i32 @thread_compute(i32 %arg1) local_unnamed_addr {
dec_label_pc_1958:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !106
  %3 = inttoptr i32 %arg1 to i32*, !insn.addr !107
  %4 = load i32, i32* %3, align 4, !insn.addr !107
  %5 = call i32* @malloc(i32 4), !insn.addr !108
  %6 = ptrtoint i32* %5 to i32, !insn.addr !108
  %7 = mul i32 %4, %4, !insn.addr !109
  store i32 %7, i32* %5, align 4, !insn.addr !110
  ret i32 %6, !insn.addr !111
}

define i32 @thread_increment(i32 %arg1) local_unnamed_addr {
dec_label_pc_1984:
  %0 = alloca i32
  %esi.0.reg2mem = alloca i32, !insn.addr !112
  %1 = load i32, i32* %0
  %stack_var_-28 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !113
  %3 = inttoptr i32 %arg1 to i32*, !insn.addr !114
  %4 = load i32, i32* %3, align 4, !insn.addr !114
  %5 = icmp slt i32 %4, 1
  br i1 %5, label %dec_label_pc_19e5, label %dec_label_pc_19a4, !insn.addr !115

dec_label_pc_19a4:                                ; preds = %dec_label_pc_1984
  %6 = ptrtoint i32* %stack_var_-28 to i32, !insn.addr !116
  %7 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5564 to i32), i32 432), !insn.addr !117
  %8 = add i32 %6, -16, !insn.addr !118
  %9 = inttoptr i32 %8 to i32*, !insn.addr !118
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5564 to i32), i32 456)
  %11 = inttoptr i32 %10 to i32*
  store i32 0, i32* %esi.0.reg2mem, !insn.addr !117
  br label %dec_label_pc_19af, !insn.addr !117

dec_label_pc_19af:                                ; preds = %dec_label_pc_19af, %dec_label_pc_19a4
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  store i32 %7, i32* %9, align 4, !insn.addr !118
  %12 = call i32 @pthread_mutex_lock(i32* nonnull @0), !insn.addr !119
  %13 = load i32, i32* %11, align 4, !insn.addr !120
  %14 = add i32 %13, 1, !insn.addr !121
  store i32 %14, i32* %11, align 4, !insn.addr !122
  store i32 %7, i32* %9, align 4, !insn.addr !123
  %15 = call i32 @pthread_mutex_unlock(i32* nonnull @0), !insn.addr !124
  store i32 ptrtoint (i32* @global_var_3e8 to i32), i32* %9, align 4, !insn.addr !125
  %16 = call i32 @usleep(i32 ptrtoint (i32* @0 to i32)), !insn.addr !126
  %17 = add i32 %esi.0.reload, 1, !insn.addr !127
  %18 = icmp eq i32 %4, %17, !insn.addr !128
  %19 = icmp eq i1 %18, false, !insn.addr !129
  store i32 %17, i32* %esi.0.reg2mem, !insn.addr !129
  br i1 %19, label %dec_label_pc_19af, label %dec_label_pc_19e5, !insn.addr !129

dec_label_pc_19e5:                                ; preds = %dec_label_pc_19af, %dec_label_pc_1984
  ret i32 0, !insn.addr !130

; uselistorder directives
  uselistorder i32 %1, { 2, 1, 0 }
  uselistorder i32* %esi.0.reg2mem, { 1, 0, 2 }
}

define i32 @consumer_thread() local_unnamed_addr {
dec_label_pc_19f2:
  %0 = alloca i32
  %.pre-phi2.reg2mem = alloca i32*, !insn.addr !131
  %1 = load i32, i32* %0
  %stack_var_-12 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !132
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_54fa to i32), i32 408), !insn.addr !133
  %4 = inttoptr i32 %3 to i32*, !insn.addr !134
  %5 = call i32 @pthread_mutex_lock(i32* %4), !insn.addr !134
  %6 = ptrtoint i32* %stack_var_-12 to i32, !insn.addr !135
  %7 = add i32 %1, add (i32 ptrtoint (i32* @global_var_54fa to i32), i32 336), !insn.addr !136
  %8 = inttoptr i32 %7 to i32*, !insn.addr !136
  %9 = load i32, i32* %8, align 4, !insn.addr !136
  %10 = icmp eq i32 %9, 0, !insn.addr !136
  %11 = icmp eq i1 %10, false, !insn.addr !137
  br i1 %11, label %dec_label_pc_19f2.dec_label_pc_1a41_crit_edge, label %dec_label_pc_1a1f, !insn.addr !137

dec_label_pc_19f2.dec_label_pc_1a41_crit_edge:    ; preds = %dec_label_pc_19f2
  %.pre = add i32 %6, -16, !insn.addr !138
  %.pre1 = inttoptr i32 %.pre to i32*, !insn.addr !138
  store i32* %.pre1, i32** %.pre-phi2.reg2mem
  br label %dec_label_pc_1a41

dec_label_pc_1a1f:                                ; preds = %dec_label_pc_19f2
  %12 = add i32 %1, add (i32 ptrtoint (i32* @global_var_54fa to i32), i32 360), !insn.addr !139
  %13 = add i32 %6, -12, !insn.addr !140
  %14 = inttoptr i32 %13 to i32*, !insn.addr !140
  %15 = add i32 %6, -16
  %16 = inttoptr i32 %15 to i32*
  br label %dec_label_pc_1a2b, !insn.addr !139

dec_label_pc_1a2b:                                ; preds = %dec_label_pc_1a2b, %dec_label_pc_1a1f
  store i32 %3, i32* %14, align 4, !insn.addr !140
  store i32 %12, i32* %16, align 4, !insn.addr !141
  %17 = call i32 @pthread_cond_wait(i32* nonnull @0, i32* nonnull @0), !insn.addr !142
  %18 = load i32, i32* %8, align 4, !insn.addr !143
  %19 = icmp eq i32 %18, 0, !insn.addr !143
  store i32* %16, i32** %.pre-phi2.reg2mem, !insn.addr !144
  br i1 %19, label %dec_label_pc_1a2b, label %dec_label_pc_1a41, !insn.addr !144

dec_label_pc_1a41:                                ; preds = %dec_label_pc_1a2b, %dec_label_pc_19f2.dec_label_pc_1a41_crit_edge
  %.pre-phi2.reload = load i32*, i32** %.pre-phi2.reg2mem
  %20 = add i32 %1, add (i32 ptrtoint (i32* @global_var_54fa to i32), i32 332), !insn.addr !145
  %21 = inttoptr i32 %20 to i32*, !insn.addr !145
  %22 = load i32, i32* %21, align 4, !insn.addr !145
  store i32 %3, i32* %.pre-phi2.reload, align 4, !insn.addr !138
  %23 = call i32 @pthread_mutex_unlock(i32* nonnull @0), !insn.addr !146
  store i32 4, i32* %.pre-phi2.reload, align 4, !insn.addr !147
  %24 = call i32* @malloc(i32 ptrtoint (i32* @0 to i32)), !insn.addr !148
  %25 = ptrtoint i32* %24 to i32, !insn.addr !148
  store i32 %22, i32* %24, align 4, !insn.addr !149
  ret i32 %25, !insn.addr !150

; uselistorder directives
  uselistorder i32 %6, { 1, 2, 0 }
  uselistorder i32 %3, { 1, 0, 2 }
  uselistorder i32 %1, { 4, 3, 0, 1, 2 }
}

define i32 @producer_thread() local_unnamed_addr {
dec_label_pc_1a6b:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !151
  %3 = call i32 @sleep(i32 1), !insn.addr !152
  %4 = add i32 %1, add (i32 ptrtoint (i32* @global_var_547f to i32), i32 408), !insn.addr !153
  %5 = inttoptr i32 %4 to i32*, !insn.addr !154
  %6 = call i32 @pthread_mutex_lock(i32* %5), !insn.addr !154
  %7 = add i32 %1, add (i32 ptrtoint (i32* @global_var_547f to i32), i32 332), !insn.addr !155
  %8 = inttoptr i32 %7 to i32*, !insn.addr !155
  store i32 42, i32* %8, align 4, !insn.addr !155
  %9 = add i32 %1, add (i32 ptrtoint (i32* @global_var_547f to i32), i32 336), !insn.addr !156
  %10 = inttoptr i32 %9 to i32*, !insn.addr !156
  store i32 1, i32* %10, align 4, !insn.addr !156
  %11 = add i32 %1, add (i32 ptrtoint (i32* @global_var_547f to i32), i32 360), !insn.addr !157
  %12 = inttoptr i32 %11 to i32*, !insn.addr !158
  %13 = call i32 @pthread_cond_signal(i32* %12), !insn.addr !158
  %14 = call i32 @pthread_mutex_unlock(i32* %5), !insn.addr !159
  ret i32 0, !insn.addr !160

; uselistorder directives
  uselistorder i32 %1, { 1, 2, 3, 4, 0 }
  uselistorder i32 (i32*)* @pthread_mutex_unlock, { 2, 1, 0, 3 }
  uselistorder i32 360, { 1, 0 }
  uselistorder i32 (i32*)* @pthread_mutex_lock, { 2, 1, 0, 3 }
}

define i32 @thread_atomic_increment(i32 %arg1) local_unnamed_addr {
dec_label_pc_1ac9:
  %0 = alloca i32
  %edx.0.reg2mem = alloca i32, !insn.addr !161
  %.reg2mem = alloca i32, !insn.addr !161
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = call i32 @__x86.get_pc_thunk.cx(i32 %1), !insn.addr !162
  %4 = inttoptr i32 %arg1 to i32*, !insn.addr !163
  %5 = load i32, i32* %4, align 4, !insn.addr !163
  %6 = icmp slt i32 %5, 1
  br i1 %6, label %dec_label_pc_1b08, label %dec_label_pc_1ae9.preheader, !insn.addr !164

dec_label_pc_1ae9.preheader:                      ; preds = %dec_label_pc_1ac9
  %7 = add i32 %2, add (i32 ptrtoint (i32* @global_var_5424 to i32), i32 328), !insn.addr !165
  %8 = inttoptr i32 %7 to i32*, !insn.addr !165
  %.promoted = load i32, i32* %8, align 4
  store i32 %.promoted, i32* %.reg2mem
  store i32 0, i32* %edx.0.reg2mem
  br label %dec_label_pc_1ae9

dec_label_pc_1ae9:                                ; preds = %dec_label_pc_1ae9.preheader, %dec_label_pc_1ae9
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %9 = add i32 %.reload, 1, !insn.addr !165
  %10 = add i32 %edx.0.reload, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !166
  %11 = icmp eq i32 %edx.0.reload, %9, !insn.addr !167
  %12 = select i1 %11, i32 %10, i32 %9, !insn.addr !167
  %13 = add i32 %edx.0.reload, 1, !insn.addr !168
  %14 = icmp eq i32 %5, %13, !insn.addr !169
  %15 = icmp eq i1 %14, false, !insn.addr !170
  store i32 %12, i32* %.reg2mem, !insn.addr !170
  store i32 %13, i32* %edx.0.reg2mem, !insn.addr !170
  br i1 %15, label %dec_label_pc_1ae9, label %dec_label_pc_1b08.loopexit, !insn.addr !170

dec_label_pc_1b08.loopexit:                       ; preds = %dec_label_pc_1ae9
  store i32 %12, i32* %8, align 4
  br label %dec_label_pc_1b08

dec_label_pc_1b08:                                ; preds = %dec_label_pc_1b08.loopexit, %dec_label_pc_1ac9
  ret i32 0, !insn.addr !171

; uselistorder directives
  uselistorder i32 %12, { 1, 0 }
  uselistorder i32 %edx.0.reload, { 2, 0, 1 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder label %dec_label_pc_1ae9, { 1, 0 }
}

define i32 @thread_atomic_load_store() local_unnamed_addr {
dec_label_pc_1b10:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !172
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_53df to i32), i32 328), !insn.addr !173
  %4 = inttoptr i32 %3 to i32*, !insn.addr !173
  %5 = load i32, i32* %4, align 4, !insn.addr !173
  %6 = add i32 %5, 100, !insn.addr !174
  store i32 %6, i32* %4, align 4, !insn.addr !175
  ret i32 0, !insn.addr !176
}

define i32 @thread_tls_test(i32 %arg1) local_unnamed_addr {
dec_label_pc_1b34:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !177
  %3 = call i32 @__readgsdword(i32 -36), !insn.addr !178
  %4 = add i32 %3, 50, !insn.addr !179
  call void @__writegsdword(i32 -36, i32 %4), !insn.addr !180
  %5 = call i32 @__readgsdword(i32 0), !insn.addr !181
  %6 = add i32 %5, -32, !insn.addr !181
  %7 = inttoptr i32 %6 to i8*, !insn.addr !182
  %8 = call i8* @strncpy(i8* %7, i8* bitcast (i32* @0 to i8*), i32 ptrtoint (i32* @0 to i32)), !insn.addr !183
  %9 = call i32* @malloc(i32 8), !insn.addr !184
  %10 = ptrtoint i32* %9 to i32, !insn.addr !184
  store i32 %3, i32* %9, align 4, !insn.addr !185
  %11 = add i32 %10, 4, !insn.addr !186
  %12 = inttoptr i32 %11 to i32*, !insn.addr !186
  store i32 %4, i32* %12, align 4, !insn.addr !186
  ret i32 %10, !insn.addr !187

; uselistorder directives
  uselistorder i32 %10, { 1, 0 }
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32 %3, { 1, 0 }
}

define i32 @param_strcpy(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1b8b:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !188
  %3 = bitcast i32* %arg1 to i8*, !insn.addr !189
  %4 = inttoptr i32 %arg2 to i8*, !insn.addr !189
  %5 = call i8* @strcpy(i8* %3, i8* %4), !insn.addr !189
  %6 = call i32 @strlen(i8* %3), !insn.addr !190
  ret i32 %6, !insn.addr !191
}

define i32 @call_strcpy() local_unnamed_addr {
dec_label_pc_1bbb:
  %stack_var_-48 = alloca i32, align 4
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !192
  %1 = call i32 @__readgsdword(i32 20), !insn.addr !193
  %2 = add i32 %0, add (i32 ptrtoint (i32* @global_var_5331 to i32), i32 -12016), !insn.addr !194
  %3 = call i32 @param_strcpy(i32* nonnull %stack_var_-48, i32 %2), !insn.addr !195
  %4 = call i32 @__readgsdword(i32 20), !insn.addr !196
  %5 = icmp eq i32 %1, %4, !insn.addr !196
  %6 = icmp eq i1 %5, false, !insn.addr !197
  br i1 %6, label %dec_label_pc_1bfe, label %dec_label_pc_1bfa, !insn.addr !197

dec_label_pc_1bfa:                                ; preds = %dec_label_pc_1bbb
  ret i32 %3, !insn.addr !198

dec_label_pc_1bfe:                                ; preds = %dec_label_pc_1bbb
  %7 = call i32 @__stack_chk_fail_local(), !insn.addr !199
  ret i32 %7, !insn.addr !199
}

define i32 @param_strcmp(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1c03:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !200
  %3 = inttoptr i32 %arg1 to i8*, !insn.addr !201
  %4 = inttoptr i32 %arg2 to i8*, !insn.addr !201
  %5 = call i32 @strcmp(i8* %3, i8* %4), !insn.addr !201
  %6 = ashr i32 %5, 31, !insn.addr !202
  %7 = icmp slt i32 %5, 1
  %8 = select i1 %7, i32 %6, i32 1, !insn.addr !203
  ret i32 %8, !insn.addr !204
}

define i32 @call_strcmp() local_unnamed_addr {
dec_label_pc_1c33:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = call i32 @__x86.get_pc_thunk.si(i32 %2), !insn.addr !205
  %4 = add i32 %1, add (i32 ptrtoint (i32* @global_var_52b9 to i32), i32 -12007), !insn.addr !206
  %5 = add i32 %1, add (i32 ptrtoint (i32* @global_var_52b9 to i32), i32 -12003), !insn.addr !207
  %6 = call i32 @param_strcmp(i32 %5, i32 %4), !insn.addr !208
  %7 = add i32 %1, add (i32 ptrtoint (i32* @global_var_52b9 to i32), i32 -11999), !insn.addr !209
  %8 = call i32 @param_strcmp(i32 %7, i32 %7), !insn.addr !210
  %9 = add i32 %1, add (i32 ptrtoint (i32* @global_var_52b9 to i32), i32 -11995), !insn.addr !211
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_52b9 to i32), i32 -11991), !insn.addr !212
  %11 = call i32 @param_strcmp(i32 %10, i32 %9), !insn.addr !213
  %12 = add i32 %8, %6, !insn.addr !214
  %13 = add i32 %12, %11, !insn.addr !215
  ret i32 %13, !insn.addr !216

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
  uselistorder i32 (i32, i32)* @param_strcmp, { 2, 1, 0 }
}

define i32 @param_strlen(i32 %arg1) local_unnamed_addr {
dec_label_pc_1c90:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !217
  %3 = inttoptr i32 %arg1 to i8*, !insn.addr !218
  %4 = call i32 @strlen(i8* %3), !insn.addr !218
  ret i32 %4, !insn.addr !219
}

define i32 @call_strlen() local_unnamed_addr {
dec_label_pc_1cb1:
  ret i32 12, !insn.addr !220
}

define i32 @param_memcpy(i32* %arg1, i32* %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1cbb:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !221
  %3 = call i32* @memcpy(i32* %arg1, i32* %arg2, i32 %arg3), !insn.addr !222
  ret i32 %arg3, !insn.addr !223

; uselistorder directives
  uselistorder i32 %arg3, { 1, 0 }
}

define i32 @call_memcpy() local_unnamed_addr {
dec_label_pc_1ce9:
  %stack_var_-36 = alloca i32, align 4
  %stack_var_-56 = alloca i32, align 4
  %0 = call i32 @__readgsdword(i32 20), !insn.addr !224
  store i32 10, i32* %stack_var_-56, align 4, !insn.addr !225
  store i32 0, i32* %stack_var_-36, align 4, !insn.addr !226
  %1 = call i32 @param_memcpy(i32* nonnull %stack_var_-36, i32* nonnull %stack_var_-56, i32 20), !insn.addr !227
  %2 = load i32, i32* %stack_var_-36, align 4, !insn.addr !228
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !229
  %4 = icmp eq i32 %0, %3, !insn.addr !229
  %5 = icmp eq i1 %4, false, !insn.addr !230
  br i1 %5, label %dec_label_pc_1d7d, label %dec_label_pc_1d79, !insn.addr !230

dec_label_pc_1d79:                                ; preds = %dec_label_pc_1ce9
  ret i32 %2, !insn.addr !231

dec_label_pc_1d7d:                                ; preds = %dec_label_pc_1ce9
  %6 = call i32 @__stack_chk_fail_local(), !insn.addr !232
  ret i32 %6, !insn.addr !232

; uselistorder directives
  uselistorder i32* %stack_var_-36, { 1, 0, 2 }
}

define i32 @param_memcmp(i32* %arg1, i32* %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1d82:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !233
  %3 = call i32 @memcmp(i32* %arg1, i32* %arg2, i32 %arg3), !insn.addr !234
  %4 = ashr i32 %3, 31, !insn.addr !235
  %5 = icmp slt i32 %3, 1
  %6 = select i1 %5, i32 %4, i32 1, !insn.addr !236
  ret i32 %6, !insn.addr !237
}

define i32 @call_memcmp() local_unnamed_addr {
dec_label_pc_1db6:
  %stack_var_-28 = alloca i32, align 4
  %stack_var_-40 = alloca i32, align 4
  %stack_var_-52 = alloca i32, align 4
  %0 = call i32 @__readgsdword(i32 20), !insn.addr !238
  store i32 1, i32* %stack_var_-52, align 4, !insn.addr !239
  store i32 1, i32* %stack_var_-40, align 4, !insn.addr !240
  store i32 1, i32* %stack_var_-28, align 4, !insn.addr !241
  %1 = call i32 @param_memcmp(i32* nonnull %stack_var_-52, i32* nonnull %stack_var_-40, i32 12), !insn.addr !242
  %2 = call i32 @param_memcmp(i32* nonnull %stack_var_-52, i32* nonnull %stack_var_-28, i32 12), !insn.addr !243
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !244
  %4 = icmp eq i32 %0, %3, !insn.addr !244
  %5 = icmp eq i1 %4, false, !insn.addr !245
  br i1 %5, label %dec_label_pc_1e4e, label %dec_label_pc_1e48, !insn.addr !245

dec_label_pc_1e48:                                ; preds = %dec_label_pc_1db6
  %6 = add i32 %2, %1, !insn.addr !246
  ret i32 %6, !insn.addr !247

dec_label_pc_1e4e:                                ; preds = %dec_label_pc_1db6
  %7 = call i32 @__stack_chk_fail_local(), !insn.addr !248
  ret i32 %7, !insn.addr !248

; uselistorder directives
  uselistorder i32 (i32*, i32*, i32)* @param_memcmp, { 1, 0 }
}

define i32 @param_printf(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1e53:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !249
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5098 to i32), i32 -11987), !insn.addr !250
  %4 = inttoptr i32 %3 to i8*, !insn.addr !251
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %4), !insn.addr !252
  ret i32 %5, !insn.addr !253
}

define i32 @call_printf() local_unnamed_addr {
dec_label_pc_1e81:
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !254
  %1 = add i32 %0, add (i32 ptrtoint (i32* @global_var_506b to i32), i32 -11872), !insn.addr !255
  %2 = call i32 @param_printf(i32 42, i32 %1), !insn.addr !256
  ret i32 %2, !insn.addr !257
}

define i32 @param_scanf(i32 %arg1) local_unnamed_addr {
dec_label_pc_1ea4:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !258
  %5 = call i32 @__readgsdword(i32 20), !insn.addr !259
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5047 to i32), i32 -11966), !insn.addr !260
  %7 = inttoptr i32 %6 to i8*, !insn.addr !261
  %8 = inttoptr i32 %arg1 to i8*, !insn.addr !262
  %9 = call i32 (i8*, i8*, ...) @sscanf(i8* %8, i8* %7), !insn.addr !262
  %10 = call i32 @__readgsdword(i32 20), !insn.addr !263
  %11 = icmp eq i32 %5, %10, !insn.addr !263
  %12 = icmp eq i1 %11, false, !insn.addr !264
  br i1 %12, label %dec_label_pc_1f06, label %dec_label_pc_1efa, !insn.addr !264

dec_label_pc_1efa:                                ; preds = %dec_label_pc_1ea4
  %13 = icmp eq i32 %9, 2, !insn.addr !265
  %14 = icmp eq i1 %13, false, !insn.addr !266
  %15 = add i32 %3, %2
  %spec.select = select i1 %14, i32 -1, i32 %15
  ret i32 %spec.select, !insn.addr !267

dec_label_pc_1f06:                                ; preds = %dec_label_pc_1ea4
  %16 = call i32 @__stack_chk_fail_local(), !insn.addr !268
  ret i32 %16, !insn.addr !268

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
}

define i32 @call_scanf() local_unnamed_addr {
dec_label_pc_1f0b:
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !269
  %1 = add i32 %0, add (i32 ptrtoint (i32* @global_var_4fe1 to i32), i32 -11960), !insn.addr !270
  %2 = call i32 @param_scanf(i32 %1), !insn.addr !271
  ret i32 %2, !insn.addr !272
}

define i32 @param_fopen_fclose(i32 %arg1) local_unnamed_addr {
dec_label_pc_1f2c:
  %0 = alloca i32
  %edi.0.reg2mem = alloca i32, !insn.addr !273
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !274
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4fc0 to i32), i32 -11952), !insn.addr !275
  %4 = inttoptr i32 %3 to i8*, !insn.addr !276
  %5 = inttoptr i32 %arg1 to i8*, !insn.addr !277
  %6 = call %_IO_FILE* @fopen(i8* %5, i8* %4), !insn.addr !277
  %7 = icmp eq %_IO_FILE* %6, null, !insn.addr !278
  store i32 -1, i32* %edi.0.reg2mem, !insn.addr !279
  br i1 %7, label %dec_label_pc_1f70, label %dec_label_pc_1f58, !insn.addr !279

dec_label_pc_1f58:                                ; preds = %dec_label_pc_1f2c
  %8 = call i32 @fileno(%_IO_FILE* nonnull %6), !insn.addr !280
  %9 = call i32 @fclose(%_IO_FILE* nonnull %6), !insn.addr !281
  store i32 %8, i32* %edi.0.reg2mem, !insn.addr !282
  br label %dec_label_pc_1f70, !insn.addr !282

dec_label_pc_1f70:                                ; preds = %dec_label_pc_1f2c, %dec_label_pc_1f58
  %edi.0.reload = load i32, i32* %edi.0.reg2mem
  ret i32 %edi.0.reload, !insn.addr !283

; uselistorder directives
  uselistorder i32* %edi.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1f70, { 1, 0 }
}

define i32 @call_fopen_fclose() local_unnamed_addr {
dec_label_pc_1f7d:
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !284
  %1 = add i32 %0, add (i32 ptrtoint (i32* @global_var_4f6f to i32), i32 -11950), !insn.addr !285
  %2 = call i32 @param_fopen_fclose(i32 %1), !insn.addr !286
  %3 = ashr i32 %2, 31, !insn.addr !287
  %4 = or i32 %3, 42, !insn.addr !288
  ret i32 %4, !insn.addr !289
}

define i32 @param_fread_fwrite(i32 %arg1) local_unnamed_addr {
dec_label_pc_1fa4:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !290
  %1 = load i32, i32* %0
  %stack_var_-108 = alloca i32, align 4
  %stack_var_-64 = alloca i32, align 4
  %stack_var_-76 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !291
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !292
  %4 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4f44 to i32), i32 -11938), !insn.addr !293
  %5 = inttoptr i32 %4 to i8*, !insn.addr !294
  %6 = inttoptr i32 %arg1 to i8*, !insn.addr !295
  %7 = call %_IO_FILE* @fopen(i8* %6, i8* %5), !insn.addr !295
  %8 = icmp eq %_IO_FILE* %7, null, !insn.addr !296
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !297
  br i1 %8, label %dec_label_pc_2057, label %dec_label_pc_1fe2, !insn.addr !297

dec_label_pc_1fe2:                                ; preds = %dec_label_pc_1fa4
  %9 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4f44 to i32), i32 -11935), !insn.addr !298
  %10 = inttoptr i32 %9 to i32*, !insn.addr !299
  %11 = call i32 @fwrite(i32* %10, i32 1, i32 18, %_IO_FILE* nonnull %7), !insn.addr !299
  %12 = icmp eq i32 %11, 18, !insn.addr !300
  %13 = icmp eq i1 %12, false, !insn.addr !301
  br i1 %13, label %dec_label_pc_206c, label %dec_label_pc_1ffd, !insn.addr !301

dec_label_pc_1ffd:                                ; preds = %dec_label_pc_1fe2
  call void @rewind(%_IO_FILE* nonnull %7), !insn.addr !302
  %14 = ptrtoint i32* %stack_var_-64 to i32, !insn.addr !303
  store i32 %14, i32* %stack_var_-108, align 4, !insn.addr !303
  %15 = ptrtoint i32* %stack_var_-108 to i32, !insn.addr !303
  %16 = call i32 @fread(i32* nonnull %stack_var_-64, i32 1, i32 18, %_IO_FILE* nonnull %7), !insn.addr !304
  %17 = add i32 %15, 44, !insn.addr !305
  %18 = add i32 %17, %16, !insn.addr !305
  %19 = inttoptr i32 %18 to i8*, !insn.addr !305
  store i8 0, i8* %19, align 1, !insn.addr !305
  %20 = call i32 @fclose(%_IO_FILE* nonnull %7), !insn.addr !306
  %21 = call i32 @unlink(i8* %6), !insn.addr !307
  %22 = icmp eq i32 %16, 18, !insn.addr !308
  %23 = icmp eq i1 %22, false, !insn.addr !309
  store i32 -3, i32* %eax.0.reg2mem, !insn.addr !309
  br i1 %23, label %dec_label_pc_2057, label %dec_label_pc_2035, !insn.addr !309

dec_label_pc_2035:                                ; preds = %dec_label_pc_1ffd
  %24 = inttoptr i32 %9 to i8*, !insn.addr !310
  %25 = bitcast i32* %stack_var_-64 to i8*, !insn.addr !311
  %26 = call i32 @strcmp(i8* nonnull %25, i8* %24), !insn.addr !311
  %27 = icmp eq i32 %26, 0, !insn.addr !312
  %28 = select i1 %27, i32 42, i32 -3, !insn.addr !313
  store i32 %28, i32* %eax.0.reg2mem, !insn.addr !313
  br label %dec_label_pc_2057, !insn.addr !313

dec_label_pc_2057:                                ; preds = %dec_label_pc_1ffd, %dec_label_pc_1fa4, %dec_label_pc_206c, %dec_label_pc_2035
  %29 = ptrtoint i32* %stack_var_-76 to i32, !insn.addr !314
  %30 = add i32 %29, 44, !insn.addr !315
  %31 = inttoptr i32 %30 to i32*, !insn.addr !315
  %32 = load i32, i32* %31, align 4, !insn.addr !315
  %33 = call i32 @__readgsdword(i32 20), !insn.addr !316
  %34 = icmp eq i32 %32, %33, !insn.addr !316
  %35 = icmp eq i1 %34, false, !insn.addr !317
  br i1 %35, label %dec_label_pc_208d, label %dec_label_pc_2064, !insn.addr !317

dec_label_pc_2064:                                ; preds = %dec_label_pc_2057
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !318

dec_label_pc_206c:                                ; preds = %dec_label_pc_1fe2
  %36 = call i32 @fclose(%_IO_FILE* nonnull %7), !insn.addr !319
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !320
  br label %dec_label_pc_2057, !insn.addr !320

dec_label_pc_208d:                                ; preds = %dec_label_pc_2057
  %37 = call i32 @__stack_chk_fail_local(), !insn.addr !321
  ret i32 %37, !insn.addr !321

; uselistorder directives
  uselistorder %_IO_FILE* %7, { 3, 0, 1, 2, 4, 5 }
  uselistorder i32 %1, { 2, 0, 1 }
  uselistorder i32* %eax.0.reg2mem, { 4, 0, 3, 1, 2 }
  uselistorder i32 (i8*, i8*)* @strcmp, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2057, { 2, 3, 0, 1 }
}

define i32 @call_fread_fwrite() local_unnamed_addr {
dec_label_pc_2092:
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !322
  %1 = add i32 %0, add (i32 ptrtoint (i32* @global_var_4e5a to i32), i32 -11916), !insn.addr !323
  %2 = call i32 @param_fread_fwrite(i32 %1), !insn.addr !324
  ret i32 %2, !insn.addr !325
}

define i32 @param_malloc_free(i32 %arg1) local_unnamed_addr {
dec_label_pc_20b3:
  %0 = alloca i32
  %esi.0.reg2mem = alloca i32, !insn.addr !326
  %eax.0.reg2mem = alloca i32, !insn.addr !326
  %edx.0.reg2mem = alloca i32, !insn.addr !326
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !327
  %3 = mul i32 %arg1, 4, !insn.addr !328
  %4 = call i32* @malloc(i32 %3), !insn.addr !329
  %5 = icmp eq i32* %4, null, !insn.addr !330
  store i32 -1, i32* %esi.0.reg2mem, !insn.addr !331
  br i1 %5, label %dec_label_pc_2112, label %dec_label_pc_20e1, !insn.addr !331

dec_label_pc_20e1:                                ; preds = %dec_label_pc_20b3
  %6 = ptrtoint i32* %4 to i32, !insn.addr !329
  %7 = icmp eq i32 %arg1, 0, !insn.addr !332
  br i1 %7, label %dec_label_pc_20ff, label %dec_label_pc_20e7, !insn.addr !333

dec_label_pc_20e7:                                ; preds = %dec_label_pc_20e1
  %8 = mul i32 %arg1, 10, !insn.addr !334
  store i32 %6, i32* %edx.0.reg2mem, !insn.addr !335
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !335
  br label %dec_label_pc_20f3, !insn.addr !335

dec_label_pc_20f3:                                ; preds = %dec_label_pc_20f3, %dec_label_pc_20e7
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %9 = inttoptr i32 %edx.0.reload to i32*, !insn.addr !336
  store i32 %eax.0.reload, i32* %9, align 4, !insn.addr !336
  %10 = add i32 %eax.0.reload, 10, !insn.addr !337
  %11 = add i32 %edx.0.reload, 4, !insn.addr !338
  %12 = icmp eq i32 %10, %8, !insn.addr !339
  %13 = icmp eq i1 %12, false, !insn.addr !340
  store i32 %11, i32* %edx.0.reg2mem, !insn.addr !340
  store i32 %10, i32* %eax.0.reg2mem, !insn.addr !340
  br i1 %13, label %dec_label_pc_20f3, label %dec_label_pc_20ff, !insn.addr !340

dec_label_pc_20ff:                                ; preds = %dec_label_pc_20f3, %dec_label_pc_20e1
  %14 = load i32, i32* %4, align 4, !insn.addr !341
  %15 = add i32 %3, -4, !insn.addr !342
  %16 = add i32 %15, %6, !insn.addr !342
  %17 = inttoptr i32 %16 to i32*, !insn.addr !342
  %18 = load i32, i32* %17, align 4, !insn.addr !342
  %19 = add i32 %18, %14, !insn.addr !342
  call void @free(i32* nonnull %4), !insn.addr !343
  store i32 %19, i32* %esi.0.reg2mem, !insn.addr !344
  br label %dec_label_pc_2112, !insn.addr !344

dec_label_pc_2112:                                ; preds = %dec_label_pc_20b3, %dec_label_pc_20ff
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  ret i32 %esi.0.reload, !insn.addr !345

; uselistorder directives
  uselistorder i32 %edx.0.reload, { 1, 0 }
  uselistorder i32 %eax.0.reload, { 1, 0 }
  uselistorder i32 %6, { 1, 0 }
  uselistorder i32* %4, { 0, 1, 3, 2 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg1, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2112, { 1, 0 }
}

define i32 @call_malloc_free() local_unnamed_addr {
dec_label_pc_2123:
  %0 = call i32 @param_malloc_free(i32 10), !insn.addr !346
  ret i32 %0, !insn.addr !347
}

define i32 @param_memset(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2135:
  %0 = alloca i32
  %edx.1.reg2mem = alloca i32, !insn.addr !348
  %edx.0.reg2mem = alloca i32, !insn.addr !348
  %eax.0.reg2mem = alloca i32, !insn.addr !348
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !349
  %3 = call i32* @memset(i32* %arg1, i32 0, i32 %arg2), !insn.addr !350
  %4 = icmp eq i32 %arg2, 0, !insn.addr !351
  store i32 0, i32* %edx.1.reg2mem, !insn.addr !352
  br i1 %4, label %dec_label_pc_2178, label %dec_label_pc_2162, !insn.addr !352

dec_label_pc_2162:                                ; preds = %dec_label_pc_2135
  %5 = ptrtoint i32* %arg1 to i32
  %6 = add i32 %5, %arg2, !insn.addr !353
  store i32 %5, i32* %eax.0.reg2mem, !insn.addr !354
  store i32 0, i32* %edx.0.reg2mem, !insn.addr !354
  br label %dec_label_pc_216c, !insn.addr !354

dec_label_pc_216c:                                ; preds = %dec_label_pc_216c, %dec_label_pc_2162
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %7 = inttoptr i32 %eax.0.reload to i8*, !insn.addr !355
  %8 = load i8, i8* %7, align 1, !insn.addr !355
  %9 = zext i8 %8 to i32, !insn.addr !355
  %10 = add i32 %edx.0.reload, %9, !insn.addr !356
  %11 = add i32 %eax.0.reload, 1, !insn.addr !357
  %12 = icmp eq i32 %11, %6, !insn.addr !358
  %13 = icmp eq i1 %12, false, !insn.addr !359
  store i32 %11, i32* %eax.0.reg2mem, !insn.addr !359
  store i32 %10, i32* %edx.0.reg2mem, !insn.addr !359
  store i32 %10, i32* %edx.1.reg2mem, !insn.addr !359
  br i1 %13, label %dec_label_pc_216c, label %dec_label_pc_2178, !insn.addr !359

dec_label_pc_2178:                                ; preds = %dec_label_pc_216c, %dec_label_pc_2135
  %edx.1.reload = load i32, i32* %edx.1.reg2mem
  ret i32 %edx.1.reload, !insn.addr !360

; uselistorder directives
  uselistorder i32 %eax.0.reload, { 1, 0 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32 %arg2, { 0, 2, 1 }
  uselistorder i32* %arg1, { 1, 0 }
}

define i32 @call_memset() local_unnamed_addr {
dec_label_pc_2185:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !361
  %1 = load i32, i32* %0
  %stack_var_-56 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  %2 = call i32 @__readgsdword(i32 20), !insn.addr !362
  store i32 %2, i32* %stack_var_-16, align 4, !insn.addr !363
  %3 = ptrtoint i32* %stack_var_-56 to i32, !insn.addr !364
  %4 = ptrtoint i32* %stack_var_-16 to i32, !insn.addr !365
  store i32 %3, i32* %eax.0.reg2mem, !insn.addr !365
  br label %dec_label_pc_21a0, !insn.addr !365

dec_label_pc_21a0:                                ; preds = %dec_label_pc_21a0, %dec_label_pc_2185
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %5 = inttoptr i32 %eax.0.reload to i32*, !insn.addr !366
  store i32 255, i32* %5, align 4, !insn.addr !366
  %6 = add i32 %eax.0.reload, 4, !insn.addr !367
  %7 = icmp eq i32 %6, %4, !insn.addr !368
  %8 = icmp eq i1 %7, false, !insn.addr !369
  store i32 %6, i32* %eax.0.reg2mem, !insn.addr !369
  br i1 %8, label %dec_label_pc_21a0, label %dec_label_pc_21ad, !insn.addr !369

dec_label_pc_21ad:                                ; preds = %dec_label_pc_21a0
  %9 = call i32 @param_memset(i32* nonnull %stack_var_-56, i32 40), !insn.addr !370
  %10 = load i32, i32* %stack_var_-56, align 4, !insn.addr !371
  %11 = load i32, i32* %stack_var_-16, align 4, !insn.addr !372
  %12 = call i32 @__readgsdword(i32 20), !insn.addr !373
  %13 = icmp eq i32 %11, %12, !insn.addr !373
  %14 = icmp eq i1 %13, false, !insn.addr !374
  br i1 %14, label %dec_label_pc_21d8, label %dec_label_pc_21d4, !insn.addr !374

dec_label_pc_21d4:                                ; preds = %dec_label_pc_21ad
  %15 = add i32 %10, %1, !insn.addr !371
  ret i32 %15, !insn.addr !375

dec_label_pc_21d8:                                ; preds = %dec_label_pc_21ad
  %16 = call i32 @__stack_chk_fail_local(), !insn.addr !376
  ret i32 %16, !insn.addr !376

; uselistorder directives
  uselistorder i32 %eax.0.reload, { 1, 0 }
  uselistorder i32* %stack_var_-56, { 1, 0, 2 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
}

define i32 @param_strchr_strstr(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_21dd:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !377
  %sext = mul i32 %arg2, 16777216
  %3 = ashr exact i32 %sext, 24, !insn.addr !378
  %4 = inttoptr i32 %arg1 to i8*, !insn.addr !379
  %5 = call i8* @strchr(i8* %4, i32 %3), !insn.addr !379
  %6 = ptrtoint i8* %5 to i32, !insn.addr !379
  %7 = sub i32 %6, %arg1, !insn.addr !380
  %8 = icmp eq i8* %5, null, !insn.addr !381
  %9 = select i1 %8, i32 -1, i32 %7, !insn.addr !382
  %10 = inttoptr i32 %arg3 to i8*, !insn.addr !383
  %11 = call i8* @strstr(i8* %4, i8* %10), !insn.addr !383
  %12 = ptrtoint i8* %11 to i32, !insn.addr !383
  %13 = sub i32 %12, %arg1, !insn.addr !384
  %14 = icmp eq i8* %11, null, !insn.addr !385
  %15 = icmp eq i1 %14, false, !insn.addr !386
  %16 = select i1 %15, i32 %13, i32 -1, !insn.addr !386
  %17 = add i32 %16, %9, !insn.addr !387
  ret i32 %17, !insn.addr !388

; uselistorder directives
  uselistorder i32 %arg1, { 2, 1, 0 }
}

define i32 @call_strchr_strstr() local_unnamed_addr {
dec_label_pc_2234:
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !389
  %1 = add i32 %0, add (i32 ptrtoint (i32* @global_var_4cb8 to i32), i32 -11893), !insn.addr !390
  %2 = add i32 %0, add (i32 ptrtoint (i32* @global_var_4cb8 to i32), i32 -11887), !insn.addr !391
  %3 = call i32 @param_strchr_strstr(i32 %2, i32 66, i32 %1), !insn.addr !392
  ret i32 %3, !insn.addr !393
}

define i32 @test_standard_library_functions() local_unnamed_addr {
dec_label_pc_225e:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !394
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4c8d to i32), i32 -11060), !insn.addr !395
  %4 = inttoptr i32 %3 to i8*, !insn.addr !396
  %5 = call i32 @puts(i8* %4), !insn.addr !397
  %6 = call i32 @call_strcpy(), !insn.addr !398
  %7 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4c8d to i32), i32 -11867), !insn.addr !399
  %8 = inttoptr i32 %7 to i8*, !insn.addr !400
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %8), !insn.addr !401
  %10 = call i32 @call_strcmp(), !insn.addr !402
  %11 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4c8d to i32), i32 -11840), !insn.addr !403
  %12 = inttoptr i32 %11 to i8*, !insn.addr !404
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %12), !insn.addr !405
  %14 = call i32 @call_strlen(), !insn.addr !406
  %15 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4c8d to i32), i32 -11813), !insn.addr !407
  %16 = inttoptr i32 %15 to i8*, !insn.addr !408
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %16), !insn.addr !409
  %18 = call i32 @call_memcpy(), !insn.addr !410
  %19 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4c8d to i32), i32 -11785), !insn.addr !411
  %20 = inttoptr i32 %19 to i8*, !insn.addr !412
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %20), !insn.addr !413
  %22 = call i32 @call_memcmp(), !insn.addr !414
  %23 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4c8d to i32), i32 -11757), !insn.addr !415
  %24 = inttoptr i32 %23 to i8*, !insn.addr !416
  %25 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %24), !insn.addr !417
  %26 = call i32 @call_printf(), !insn.addr !418
  %27 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4c8d to i32), i32 -11729), !insn.addr !419
  %28 = inttoptr i32 %27 to i8*, !insn.addr !420
  %29 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %28), !insn.addr !421
  %30 = call i32 @call_scanf(), !insn.addr !422
  %31 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4c8d to i32), i32 -11701), !insn.addr !423
  %32 = inttoptr i32 %31 to i8*, !insn.addr !424
  %33 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %32), !insn.addr !425
  %34 = call i32 @call_fopen_fclose(), !insn.addr !426
  %35 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4c8d to i32), i32 -11672), !insn.addr !427
  %36 = inttoptr i32 %35 to i8*, !insn.addr !428
  %37 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %36), !insn.addr !429
  %38 = call i32 @call_fread_fwrite(), !insn.addr !430
  %39 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4c8d to i32), i32 -11644), !insn.addr !431
  %40 = inttoptr i32 %39 to i8*, !insn.addr !432
  %41 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %40), !insn.addr !433
  %42 = call i32 @call_malloc_free(), !insn.addr !434
  %43 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4c8d to i32), i32 -11616), !insn.addr !435
  %44 = inttoptr i32 %43 to i8*, !insn.addr !436
  %45 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %44), !insn.addr !437
  %46 = call i32 @call_memset(), !insn.addr !438
  %47 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4c8d to i32), i32 -11588), !insn.addr !439
  %48 = inttoptr i32 %47 to i8*, !insn.addr !440
  %49 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %48), !insn.addr !441
  %50 = call i32 @call_strchr_strstr(), !insn.addr !442
  %51 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4c8d to i32), i32 -11561), !insn.addr !443
  %52 = inttoptr i32 %51 to i8*, !insn.addr !444
  %53 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %52), !insn.addr !445
  ret i32 %53, !insn.addr !446
}

define i32 @param_linux_syscall(i32 %arg1) local_unnamed_addr {
dec_label_pc_2396:
  %0 = alloca i32
  %esi.0.reg2mem = alloca i32, !insn.addr !447
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !448
  %3 = call i32 (i32, ...) @syscall(i32 5), !insn.addr !449
  %4 = icmp slt i32 %3, 0, !insn.addr !450
  br i1 %4, label %dec_label_pc_23d6, label %dec_label_pc_23be, !insn.addr !451

dec_label_pc_23be:                                ; preds = %dec_label_pc_2396
  %5 = call i32 (i32, ...) @syscall(i32 6), !insn.addr !452
  store i32 %3, i32* %esi.0.reg2mem, !insn.addr !453
  br label %dec_label_pc_23ce, !insn.addr !453

dec_label_pc_23ce:                                ; preds = %dec_label_pc_23d6, %dec_label_pc_23be
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  ret i32 %esi.0.reload, !insn.addr !454

dec_label_pc_23d6:                                ; preds = %dec_label_pc_2396
  %6 = call i32* @__errno_location(), !insn.addr !455
  %7 = load i32, i32* %6, align 4, !insn.addr !456
  %8 = sub i32 0, %7, !insn.addr !457
  store i32 %8, i32* %esi.0.reg2mem, !insn.addr !458
  br label %dec_label_pc_23ce, !insn.addr !458

; uselistorder directives
  uselistorder i32* %esi.0.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i32, ...)* @syscall, { 1, 0, 2 }
}

define i32 @call_linux_syscall() local_unnamed_addr {
dec_label_pc_23e1:
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !459
  %1 = add i32 %0, add (i32 ptrtoint (i32* @global_var_4b0b to i32), i32 -11950), !insn.addr !460
  %2 = call i32 @param_linux_syscall(i32 %1), !insn.addr !461
  %3 = ashr i32 %2, 31, !insn.addr !462
  %4 = or i32 %3, 42, !insn.addr !463
  ret i32 %4, !insn.addr !464
}

define i32 @param_win32_api(i32 %arg1) local_unnamed_addr {
dec_label_pc_2408:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-104 = alloca i32, align 4
  %3 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !465
  %4 = call i32 @__readgsdword(i32 20), !insn.addr !466
  %5 = bitcast i32* %stack_var_-104 to %stat*
  %6 = inttoptr i32 %arg1 to i8*, !insn.addr !467
  %7 = call i32 @stat(i8* %6, %stat* nonnull %5), !insn.addr !467
  %8 = call i32 @__readgsdword(i32 20), !insn.addr !468
  %9 = icmp eq i32 %4, %8, !insn.addr !468
  %10 = icmp eq i1 %9, false, !insn.addr !469
  br i1 %10, label %dec_label_pc_2467, label %dec_label_pc_245b, !insn.addr !469

dec_label_pc_245b:                                ; preds = %dec_label_pc_2408
  %11 = icmp slt i32 %7, 0, !insn.addr !470
  %12 = icmp slt i32 %2, 1
  %13 = select i1 %12, i32 -2, i32 42
  %storemerge = select i1 %11, i32 -1, i32 %13
  ret i32 %storemerge, !insn.addr !471

dec_label_pc_2467:                                ; preds = %dec_label_pc_2408
  %14 = call i32 @__stack_chk_fail_local(), !insn.addr !472
  ret i32 %14, !insn.addr !472

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @call_win32_api() local_unnamed_addr {
dec_label_pc_246c:
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !473
  %1 = add i32 %0, add (i32 ptrtoint (i32** @global_var_4a80 to i32), i32 -11950), !insn.addr !474
  %2 = call i32 @param_win32_api(i32 %1), !insn.addr !475
  ret i32 %2, !insn.addr !476
}

define i32 @param_fork_exec(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_248d:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !477
  %1 = load i32, i32* %0
  %stack_var_-20 = alloca i8, align 1
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !478
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !479
  %4 = call i32 @fork(), !insn.addr !480
  %5 = icmp slt i32 %4, 0, !insn.addr !481
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !482
  br i1 %5, label %dec_label_pc_24f1, label %dec_label_pc_24bf, !insn.addr !482

dec_label_pc_24bf:                                ; preds = %dec_label_pc_248d
  %6 = icmp eq i32 %4, 0, !insn.addr !481
  br i1 %6, label %dec_label_pc_2505, label %dec_label_pc_24c1, !insn.addr !483

dec_label_pc_24c1:                                ; preds = %dec_label_pc_24bf
  %7 = bitcast i8* %stack_var_-20 to i32*, !insn.addr !484
  %8 = call i32 @waitpid(i32 %4, i32* nonnull %7, i32 0), !insn.addr !484
  %9 = icmp slt i32 %8, 0, !insn.addr !485
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !486
  br i1 %9, label %dec_label_pc_24f1, label %dec_label_pc_24df, !insn.addr !486

dec_label_pc_24df:                                ; preds = %dec_label_pc_24c1
  %10 = load i8, i8* %stack_var_-20, align 1, !insn.addr !487
  %11 = sext i8 %10 to i32, !insn.addr !487
  %12 = udiv i32 %11, 256, !insn.addr !488
  %13 = urem i32 %12, 256, !insn.addr !488
  %14 = urem i8 %10, -128
  %15 = icmp eq i8 %14, 0, !insn.addr !489
  %16 = icmp eq i1 %15, false, !insn.addr !490
  %17 = select i1 %16, i32 -3, i32 %13, !insn.addr !490
  store i32 %17, i32* %eax.0.reg2mem, !insn.addr !490
  br label %dec_label_pc_24f1, !insn.addr !490

dec_label_pc_24f1:                                ; preds = %dec_label_pc_248d, %dec_label_pc_24df, %dec_label_pc_24c1
  %18 = call i32 @__readgsdword(i32 20), !insn.addr !491
  %19 = icmp eq i32 %3, %18, !insn.addr !491
  %20 = icmp eq i1 %19, false, !insn.addr !492
  br i1 %20, label %dec_label_pc_2522, label %dec_label_pc_24fe, !insn.addr !492

dec_label_pc_24fe:                                ; preds = %dec_label_pc_24f1
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !493

dec_label_pc_2505:                                ; preds = %dec_label_pc_24bf
  %21 = inttoptr i32 %arg1 to i8*, !insn.addr !494
  %22 = call i32 (i8*, i8*, ...) @execl(i8* %21, i8* %21), !insn.addr !494
  call void @_exit(i32 127), !insn.addr !495
  unreachable, !insn.addr !495

dec_label_pc_2522:                                ; preds = %dec_label_pc_24f1
  %23 = call i32 @__stack_chk_fail_local(), !insn.addr !496
  ret i32 %23, !insn.addr !496

; uselistorder directives
  uselistorder i32 %4, { 0, 2, 1 }
  uselistorder i8* %stack_var_-20, { 1, 0 }
  uselistorder i32* %eax.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32 256, { 1, 0 }
  uselistorder label %dec_label_pc_24f1, { 1, 2, 0 }
}

define i32 @call_fork_exec() local_unnamed_addr {
dec_label_pc_2527:
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !497
  %1 = add i32 %0, add (i32 ptrtoint (i32* @global_var_49c5 to i32), i32 -11533), !insn.addr !498
  %2 = call i32 @param_fork_exec(i32 %1, i32 0), !insn.addr !499
  %3 = icmp eq i32 %2, 0, !insn.addr !500
  %4 = select i1 %3, i32 42, i32 -1, !insn.addr !501
  ret i32 %4, !insn.addr !502

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.ax, { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
}

define i32 @param_pipe_communication() local_unnamed_addr {
dec_label_pc_2555:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !503
  %1 = load i32, i32* %0
  %stack_var_-48 = alloca i32, align 4
  %2 = load i32, i32* %0
  %stack_var_-76 = alloca i32, align 4
  %stack_var_-56 = alloca i32, align 4
  %3 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !504
  %4 = call i32 @__readgsdword(i32 20), !insn.addr !505
  %5 = ptrtoint i32* %stack_var_-56 to i32, !insn.addr !506
  store i32 %5, i32* %stack_var_-76, align 4, !insn.addr !506
  %6 = insertvalue [2 x i32] undef, i32 %5, 0, !insn.addr !507
  %7 = call i32 @pipe([2 x i32] %6), !insn.addr !507
  %8 = icmp slt i32 %7, 0, !insn.addr !508
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !509
  br i1 %8, label %dec_label_pc_2622, label %dec_label_pc_258a, !insn.addr !509

dec_label_pc_258a:                                ; preds = %dec_label_pc_2555
  %9 = call i32 @fork(), !insn.addr !510
  %10 = icmp slt i32 %9, 0, !insn.addr !511
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !512
  br i1 %10, label %dec_label_pc_2622, label %dec_label_pc_2597, !insn.addr !512

dec_label_pc_2597:                                ; preds = %dec_label_pc_258a
  %11 = icmp eq i32 %9, 0, !insn.addr !511
  %12 = icmp eq i1 %11, false, !insn.addr !513
  br i1 %12, label %dec_label_pc_25d2, label %dec_label_pc_2599, !insn.addr !513

dec_label_pc_2599:                                ; preds = %dec_label_pc_2597
  %13 = load i32, i32* %stack_var_-56, align 4, !insn.addr !514
  store i32 %13, i32* %stack_var_-76, align 4, !insn.addr !514
  %14 = call i32 @close(i32 %13), !insn.addr !515
  %15 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4995 to i32), i32 -11523), !insn.addr !516
  %16 = inttoptr i32 %15 to i32*, !insn.addr !517
  %17 = call i32 @write(i32 %2, i32* %16, i32 9), !insn.addr !517
  %18 = call i32 @close(i32 %2), !insn.addr !518
  store i32 0, i32* %stack_var_-76, align 4, !insn.addr !519
  call void @_exit(i32 0), !insn.addr !520
  unreachable, !insn.addr !520

dec_label_pc_25d2:                                ; preds = %dec_label_pc_2597
  %19 = call i32 @close(i32 %2), !insn.addr !521
  %20 = load i32, i32* %stack_var_-56, align 4, !insn.addr !522
  store i32 %20, i32* %stack_var_-76, align 4, !insn.addr !522
  %21 = ptrtoint i32* %stack_var_-76 to i32, !insn.addr !522
  %22 = call i32 @read(i32 %20, i32* nonnull %stack_var_-48, i32 31), !insn.addr !523
  %23 = add i32 %21, 28, !insn.addr !524
  %24 = add i32 %23, %22, !insn.addr !524
  %25 = inttoptr i32 %24 to i8*, !insn.addr !524
  store i8 0, i8* %25, align 1, !insn.addr !524
  %26 = load i32, i32* %stack_var_-56, align 4, !insn.addr !525
  store i32 %26, i32* %stack_var_-76, align 4, !insn.addr !525
  %27 = call i32 @close(i32 %26), !insn.addr !526
  store i32 0, i32* %stack_var_-76, align 4, !insn.addr !527
  %28 = call i32 @wait(i32 0), !insn.addr !528
  %29 = icmp slt i32 %22, 1
  %30 = select i1 %29, i32 -3, i32 42, !insn.addr !529
  store i32 %30, i32* %eax.0.reg2mem, !insn.addr !529
  br label %dec_label_pc_2622, !insn.addr !529

dec_label_pc_2622:                                ; preds = %dec_label_pc_258a, %dec_label_pc_2555, %dec_label_pc_25d2
  %31 = call i32 @__readgsdword(i32 20), !insn.addr !530
  %32 = icmp eq i32 %4, %31, !insn.addr !530
  %33 = icmp eq i1 %32, false, !insn.addr !531
  br i1 %33, label %dec_label_pc_2643, label %dec_label_pc_262f, !insn.addr !531

dec_label_pc_262f:                                ; preds = %dec_label_pc_2622
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !532

dec_label_pc_2643:                                ; preds = %dec_label_pc_2622
  %34 = call i32 @__stack_chk_fail_local(), !insn.addr !533
  ret i32 %34, !insn.addr !533

; uselistorder directives
  uselistorder i32 %9, { 1, 0 }
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32* %eax.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder i32 ()* @fork, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2622, { 2, 0, 1 }
}

define i32 @call_pipe_communication() local_unnamed_addr {
dec_label_pc_2648:
  %0 = call i32 @param_pipe_communication(), !insn.addr !534
  ret i32 %0, !insn.addr !535
}

define i32 @param_socket_create() local_unnamed_addr {
dec_label_pc_2658:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !536
  %1 = load i32, i32* %0
  %stack_var_-32 = alloca i32, align 4
  %stack_var_-36 = alloca i32, align 4
  %stack_var_-44 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !537
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !538
  %4 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !539
  %5 = icmp slt i32 %4, 0, !insn.addr !540
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !541
  br i1 %5, label %dec_label_pc_2714, label %dec_label_pc_268e, !insn.addr !541

dec_label_pc_268e:                                ; preds = %dec_label_pc_2658
  store i32 1, i32* %stack_var_-36, align 4, !insn.addr !542
  %6 = call i32 @setsockopt(i32 %4, i32 1, i32 2, i32* nonnull %stack_var_-36, i32 4), !insn.addr !543
  %7 = icmp slt i32 %6, 0, !insn.addr !544
  br i1 %7, label %dec_label_pc_2727, label %dec_label_pc_26b3, !insn.addr !545

dec_label_pc_26b3:                                ; preds = %dec_label_pc_268e
  store i32 2, i32* %stack_var_-32, align 4, !insn.addr !546
  %8 = bitcast i32* %stack_var_-32 to %sockaddr*
  %9 = call i32 @bind(i32 %4, %sockaddr* nonnull %8, i32 16), !insn.addr !547
  %10 = icmp slt i32 %9, 0, !insn.addr !548
  br i1 %10, label %dec_label_pc_273a, label %dec_label_pc_26f1, !insn.addr !549

dec_label_pc_26f1:                                ; preds = %dec_label_pc_26b3
  %11 = call i32 @listen(i32 %4, i32 5), !insn.addr !550
  %12 = icmp slt i32 %11, 0, !insn.addr !551
  %13 = call i32 @close(i32 %4)
  %. = select i1 %12, i32 -4, i32 42
  store i32 %., i32* %eax.0.reg2mem, !insn.addr !552
  br label %dec_label_pc_2714, !insn.addr !552

dec_label_pc_2714:                                ; preds = %dec_label_pc_2658, %dec_label_pc_26f1, %dec_label_pc_273a, %dec_label_pc_2727
  %14 = ptrtoint i32* %stack_var_-44 to i32, !insn.addr !553
  %15 = add i32 %14, 28, !insn.addr !554
  %16 = inttoptr i32 %15 to i32*, !insn.addr !554
  %17 = load i32, i32* %16, align 4, !insn.addr !554
  %18 = call i32 @__readgsdword(i32 20), !insn.addr !555
  %19 = icmp eq i32 %17, %18, !insn.addr !555
  %20 = icmp eq i1 %19, false, !insn.addr !556
  br i1 %20, label %dec_label_pc_2767, label %dec_label_pc_2721, !insn.addr !556

dec_label_pc_2721:                                ; preds = %dec_label_pc_2714
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !557

dec_label_pc_2727:                                ; preds = %dec_label_pc_268e
  %21 = call i32 @close(i32 %4), !insn.addr !558
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !559
  br label %dec_label_pc_2714, !insn.addr !559

dec_label_pc_273a:                                ; preds = %dec_label_pc_26b3
  %22 = call i32 @close(i32 %4), !insn.addr !560
  store i32 -3, i32* %eax.0.reg2mem, !insn.addr !561
  br label %dec_label_pc_2714, !insn.addr !561

dec_label_pc_2767:                                ; preds = %dec_label_pc_2714
  %23 = call i32 @__stack_chk_fail_local(), !insn.addr !562
  ret i32 %23, !insn.addr !562

; uselistorder directives
  uselistorder i32 %4, { 1, 4, 0, 2, 3, 5, 6 }
  uselistorder i32* %eax.0.reg2mem, { 3, 4, 0, 2, 1 }
  uselistorder i32 2, { 2, 0, 1, 3 }
  uselistorder label %dec_label_pc_2714, { 2, 3, 1, 0 }
}

define i32 @call_socket_create() local_unnamed_addr {
dec_label_pc_276c:
  %0 = call i32 @param_socket_create(), !insn.addr !563
  ret i32 %0, !insn.addr !564
}

define i32 @param_shmget_shmat() local_unnamed_addr {
dec_label_pc_277c:
  %0 = alloca i32
  %ebp.0.reg2mem = alloca i32, !insn.addr !565
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !566
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_476c to i32), i32 -11513), !insn.addr !567
  %4 = inttoptr i32 %3 to i8*, !insn.addr !568
  %5 = call i32 (i8*, i32, ...) @open(i8* %4, i32 66), !insn.addr !569
  %6 = icmp slt i32 %5, 0, !insn.addr !570
  store i32 -1, i32* %ebp.0.reg2mem, !insn.addr !571
  br i1 %6, label %dec_label_pc_283f, label %dec_label_pc_27b0, !insn.addr !571

dec_label_pc_27b0:                                ; preds = %dec_label_pc_277c
  %7 = call i32 @close(i32 %5), !insn.addr !572
  %8 = call i32 @ftok(i8* %4, i32 42), !insn.addr !573
  %9 = icmp slt i32 %8, 0, !insn.addr !574
  store i32 -1, i32* %ebp.0.reg2mem, !insn.addr !575
  br i1 %9, label %dec_label_pc_283f, label %dec_label_pc_27d1, !insn.addr !575

dec_label_pc_27d1:                                ; preds = %dec_label_pc_27b0
  %10 = call i32 @shmget(i32 %8, i32 4096, i32 ptrtoint (%shmid_ds** @global_var_3b6 to i32)), !insn.addr !576
  %11 = icmp slt i32 %10, 0, !insn.addr !577
  store i32 -2, i32* %ebp.0.reg2mem, !insn.addr !578
  br i1 %11, label %dec_label_pc_283f, label %dec_label_pc_27ed, !insn.addr !578

dec_label_pc_27ed:                                ; preds = %dec_label_pc_27d1
  %12 = call i32* @shmat(i32 %10, i32* null, i32 0), !insn.addr !579
  %13 = icmp eq i32* %12, inttoptr (i32 -1 to i32*), !insn.addr !580
  store i32 -3, i32* %ebp.0.reg2mem, !insn.addr !581
  br i1 %13, label %dec_label_pc_283f, label %dec_label_pc_2804, !insn.addr !581

dec_label_pc_2804:                                ; preds = %dec_label_pc_27ed
  %14 = ptrtoint i32* %12 to i32, !insn.addr !579
  store i32 1918986323, i32* %12, align 4, !insn.addr !582
  %15 = add i32 %14, 4, !insn.addr !583
  %16 = inttoptr i32 %15 to i32*, !insn.addr !583
  store i32 1699570789, i32* %16, align 4, !insn.addr !583
  %17 = add i32 %14, 8, !insn.addr !584
  %18 = inttoptr i32 %17 to i32*, !insn.addr !584
  store i32 2037542765, i32* %18, align 4, !insn.addr !584
  %19 = add i32 %14, 12, !insn.addr !585
  %20 = inttoptr i32 %19 to i8*, !insn.addr !585
  store i8 0, i8* %20, align 1, !insn.addr !585
  %21 = bitcast i32* %12 to i8*, !insn.addr !586
  %22 = call i32 @strlen(i8* %21), !insn.addr !587
  %23 = call i32 @shmdt(i32* %12), !insn.addr !588
  %24 = call i32 @shmctl(i32 %10, i32 0, %shmid_ds* null), !insn.addr !589
  store i32 %22, i32* %ebp.0.reg2mem, !insn.addr !590
  br label %dec_label_pc_283f, !insn.addr !590

dec_label_pc_283f:                                ; preds = %dec_label_pc_27ed, %dec_label_pc_27d1, %dec_label_pc_27b0, %dec_label_pc_277c, %dec_label_pc_2804
  %ebp.0.reload = load i32, i32* %ebp.0.reg2mem
  ret i32 %ebp.0.reload, !insn.addr !591

; uselistorder directives
  uselistorder i32* %12, { 0, 1, 2, 4, 3 }
  uselistorder i32* %ebp.0.reg2mem, { 0, 5, 1, 2, 3, 4 }
  uselistorder i32 (i32)* @close, { 1, 3, 4, 0, 2, 6, 5, 7, 8 }
  uselistorder label %dec_label_pc_283f, { 4, 0, 1, 2, 3 }
}

define i32 @call_shmget_shmat() local_unnamed_addr {
dec_label_pc_2865:
  %0 = call i32 @param_shmget_shmat(), !insn.addr !592
  %1 = icmp slt i32 %0, 1
  %2 = select i1 %1, i32 -1, i32 42, !insn.addr !593
  ret i32 %2, !insn.addr !594
}

define i32 @param_signal_handling() local_unnamed_addr {
dec_label_pc_2884:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !595
  %.reg2mem11 = alloca i32, !insn.addr !595
  %esi.1.reg2mem = alloca i32, !insn.addr !595
  %.reg2mem = alloca i32, !insn.addr !595
  %esi.0.reg2mem = alloca i32, !insn.addr !595
  %1 = load i32, i32* %0
  %stack_var_-12 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !596
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4666 to i32), i32 -22007), !insn.addr !597
  %4 = inttoptr i32 %3 to void (i32)*, !insn.addr !598
  %5 = call void (i32)* @signal(i32 10, void (i32)* %4), !insn.addr !599
  %6 = icmp eq void (i32)* %5, inttoptr (i32 -1 to void (i32)*), !insn.addr !600
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !601
  br i1 %6, label %dec_label_pc_29ab, label %dec_label_pc_28b2, !insn.addr !601

dec_label_pc_28b2:                                ; preds = %dec_label_pc_2884
  %7 = call void (i32)* @signal(i32 14, void (i32)* %4), !insn.addr !602
  %8 = icmp eq void (i32)* %7, inttoptr (i32 -1 to void (i32)*), !insn.addr !603
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !604
  br i1 %8, label %dec_label_pc_29ab, label %dec_label_pc_28cf, !insn.addr !604

dec_label_pc_28cf:                                ; preds = %dec_label_pc_28b2
  %9 = ptrtoint i32* %stack_var_-12 to i32, !insn.addr !605
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4666 to i32), i32 464), !insn.addr !606
  %11 = inttoptr i32 %10 to i32*, !insn.addr !606
  store i32 0, i32* %11, align 4, !insn.addr !606
  %12 = call i32 @raise(i32 10), !insn.addr !607
  %13 = load i32, i32* %11, align 4
  %14 = icmp eq i32 %13, 0, !insn.addr !608
  %15 = icmp eq i1 %14, false, !insn.addr !609
  store i32 %13, i32* %.reg2mem, !insn.addr !609
  br i1 %15, label %dec_label_pc_2914, label %dec_label_pc_28f5.preheader, !insn.addr !609

dec_label_pc_28f5.preheader:                      ; preds = %dec_label_pc_28cf
  %16 = add i32 %9, -16, !insn.addr !610
  %17 = inttoptr i32 %16 to i32*, !insn.addr !610
  store i32 ptrtoint (i32* @global_var_3e8 to i32), i32* %esi.0.reg2mem
  br label %dec_label_pc_28f5

dec_label_pc_28f5:                                ; preds = %dec_label_pc_28f5.preheader, %dec_label_pc_290f
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  store i32 ptrtoint (i32* @global_var_3e8 to i32), i32* %17, align 4, !insn.addr !610
  %18 = call i32 @usleep(i32 ptrtoint (i32* @0 to i32)), !insn.addr !611
  %19 = load i32, i32* %11, align 4
  %20 = icmp eq i32 %19, 0, !insn.addr !612
  %21 = icmp eq i1 %20, false, !insn.addr !613
  store i32 %19, i32* %.reg2mem, !insn.addr !613
  br i1 %21, label %dec_label_pc_2914, label %dec_label_pc_290f, !insn.addr !613

dec_label_pc_290f:                                ; preds = %dec_label_pc_28f5
  %22 = add i32 %esi.0.reload, -1, !insn.addr !614
  %23 = icmp eq i32 %22, 0, !insn.addr !614
  %24 = icmp eq i1 %23, false, !insn.addr !615
  store i32 %22, i32* %esi.0.reg2mem, !insn.addr !615
  store i32 %19, i32* %.reg2mem, !insn.addr !615
  br i1 %24, label %dec_label_pc_28f5, label %dec_label_pc_2914, !insn.addr !615

dec_label_pc_2914:                                ; preds = %dec_label_pc_28f5, %dec_label_pc_290f, %dec_label_pc_28cf
  %.reload = load i32, i32* %.reg2mem, !insn.addr !616
  %25 = icmp eq i32 %.reload, 0, !insn.addr !617
  store i32 -3, i32* %eax.0.reg2mem, !insn.addr !618
  br i1 %25, label %dec_label_pc_29ab, label %dec_label_pc_2922, !insn.addr !618

dec_label_pc_2922:                                ; preds = %dec_label_pc_2914
  %26 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4666 to i32), i32 460), !insn.addr !619
  %27 = inttoptr i32 %26 to i32*, !insn.addr !619
  %28 = load i32, i32* %27, align 4, !insn.addr !619
  %29 = icmp eq i32 %28, 10, !insn.addr !620
  %30 = icmp eq i1 %29, false, !insn.addr !621
  store i32 -4, i32* %eax.0.reg2mem, !insn.addr !621
  br i1 %30, label %dec_label_pc_29ab, label %dec_label_pc_2931, !insn.addr !621

dec_label_pc_2931:                                ; preds = %dec_label_pc_2922
  store i32 0, i32* %11, align 4, !insn.addr !622
  %31 = add i32 %9, -16, !insn.addr !623
  %32 = inttoptr i32 %31 to i32*, !insn.addr !623
  store i32 1, i32* %32, align 4, !insn.addr !623
  %33 = call i32 @alarm(i32 ptrtoint (i32* @0 to i32)), !insn.addr !624
  %34 = load i32, i32* %11, align 4
  %35 = icmp eq i32 %34, 0, !insn.addr !625
  %36 = icmp eq i1 %35, false, !insn.addr !626
  store i32 ptrtoint ([17 x i8]* @global_var_7d0 to i32), i32* %esi.1.reg2mem, !insn.addr !626
  store i32 %34, i32* %.reg2mem11, !insn.addr !626
  br i1 %36, label %dec_label_pc_2976, label %dec_label_pc_2957, !insn.addr !626

dec_label_pc_2957:                                ; preds = %dec_label_pc_2931, %dec_label_pc_2971
  %esi.1.reload = load i32, i32* %esi.1.reg2mem
  store i32 ptrtoint (i32* @global_var_3e8 to i32), i32* %32, align 4, !insn.addr !627
  %37 = call i32 @usleep(i32 ptrtoint (i32* @0 to i32)), !insn.addr !628
  %38 = load i32, i32* %11, align 4
  %39 = icmp eq i32 %38, 0, !insn.addr !629
  %40 = icmp eq i1 %39, false, !insn.addr !630
  store i32 %38, i32* %.reg2mem11, !insn.addr !630
  br i1 %40, label %dec_label_pc_2976, label %dec_label_pc_2971, !insn.addr !630

dec_label_pc_2971:                                ; preds = %dec_label_pc_2957
  %41 = add i32 %esi.1.reload, -1, !insn.addr !631
  %42 = icmp eq i32 %41, 0, !insn.addr !631
  %43 = icmp eq i1 %42, false, !insn.addr !632
  store i32 %41, i32* %esi.1.reg2mem, !insn.addr !632
  store i32 %38, i32* %.reg2mem11, !insn.addr !632
  br i1 %43, label %dec_label_pc_2957, label %dec_label_pc_2976, !insn.addr !632

dec_label_pc_2976:                                ; preds = %dec_label_pc_2957, %dec_label_pc_2971, %dec_label_pc_2931
  %.reload12 = load i32, i32* %.reg2mem11, !insn.addr !633
  %44 = icmp eq i32 %.reload12, 0, !insn.addr !634
  store i32 -5, i32* %eax.0.reg2mem, !insn.addr !635
  br i1 %44, label %dec_label_pc_29ab, label %dec_label_pc_2980, !insn.addr !635

dec_label_pc_2980:                                ; preds = %dec_label_pc_2976
  %45 = load i32, i32* %27, align 4, !insn.addr !636
  %46 = icmp eq i32 %45, 14, !insn.addr !637
  %47 = icmp eq i1 %46, false, !insn.addr !638
  store i32 -5, i32* %eax.0.reg2mem, !insn.addr !638
  br i1 %47, label %dec_label_pc_29ab, label %dec_label_pc_298b, !insn.addr !638

dec_label_pc_298b:                                ; preds = %dec_label_pc_2980
  %48 = add i32 %9, -12, !insn.addr !639
  %49 = inttoptr i32 %48 to i32*, !insn.addr !639
  store i32 0, i32* %49, align 4, !insn.addr !639
  store i32 10, i32* %32, align 4, !insn.addr !640
  %50 = call void (i32)* @signal(i32 ptrtoint (i32* @0 to i32), void (i32)* bitcast (i32* @0 to void (i32)*)), !insn.addr !641
  store i32 0, i32* %49, align 4, !insn.addr !642
  store i32 14, i32* %32, align 4, !insn.addr !643
  %51 = call void (i32)* @signal(i32 ptrtoint (i32* @0 to i32), void (i32)* bitcast (i32* @0 to void (i32)*)), !insn.addr !644
  store i32 42, i32* %eax.0.reg2mem, !insn.addr !645
  br label %dec_label_pc_29ab, !insn.addr !645

dec_label_pc_29ab:                                ; preds = %dec_label_pc_2980, %dec_label_pc_2976, %dec_label_pc_2922, %dec_label_pc_2914, %dec_label_pc_28b2, %dec_label_pc_2884, %dec_label_pc_298b
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !646

; uselistorder directives
  uselistorder i32 %38, { 1, 0, 2 }
  uselistorder i32* %32, { 2, 1, 0, 3 }
  uselistorder i32 %19, { 1, 0, 2 }
  uselistorder i32* %11, { 1, 2, 3, 0, 4, 5 }
  uselistorder i32 %9, { 1, 0, 2 }
  uselistorder i32 %1, { 3, 2, 0, 1 }
  uselistorder i32* %esi.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %.reg2mem, { 0, 2, 1, 3 }
  uselistorder i32* %esi.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %.reg2mem11, { 0, 2, 1, 3 }
  uselistorder i32* %eax.0.reg2mem, { 0, 7, 1, 2, 3, 4, 5, 6 }
  uselistorder i32 (i32)* @usleep, { 2, 1, 0, 3 }
  uselistorder i32 ptrtoint (i32* @global_var_3e8 to i32), { 1, 2, 0, 3, 4 }
  uselistorder i32 14, { 2, 0, 1 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i32 10, { 6, 0, 1, 2, 3, 7, 4, 5 }
  uselistorder label %dec_label_pc_29ab, { 6, 0, 1, 2, 3, 4, 5 }
  uselistorder label %dec_label_pc_2976, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2957, { 1, 0 }
  uselistorder label %dec_label_pc_2914, { 1, 0, 2 }
  uselistorder label %dec_label_pc_28f5, { 1, 0 }
}

define i32 @call_signal_handling() local_unnamed_addr {
dec_label_pc_29db:
  %0 = call i32 @param_signal_handling(), !insn.addr !647
  ret i32 %0, !insn.addr !648
}

define i32 @test_system_calls() local_unnamed_addr {
dec_label_pc_29eb:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !649
  %3 = add i32 %1, add (i32 ptrtoint ([8 x i8]** @global_var_4500 to i32), i32 -11495), !insn.addr !650
  %4 = inttoptr i32 %3 to i8*, !insn.addr !651
  %5 = call i32 @puts(i8* %4), !insn.addr !652
  %6 = call i32 @call_linux_syscall(), !insn.addr !653
  %7 = add i32 %1, add (i32 ptrtoint ([8 x i8]** @global_var_4500 to i32), i32 -11468), !insn.addr !654
  %8 = inttoptr i32 %7 to i8*, !insn.addr !655
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %8), !insn.addr !656
  %10 = call i32 @call_win32_api(), !insn.addr !657
  %11 = add i32 %1, add (i32 ptrtoint ([8 x i8]** @global_var_4500 to i32), i32 -11440), !insn.addr !658
  %12 = inttoptr i32 %11 to i8*, !insn.addr !659
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %12), !insn.addr !660
  %14 = call i32 @call_fork_exec(), !insn.addr !661
  %15 = add i32 %1, add (i32 ptrtoint ([8 x i8]** @global_var_4500 to i32), i32 -11412), !insn.addr !662
  %16 = inttoptr i32 %15 to i8*, !insn.addr !663
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %16), !insn.addr !664
  %18 = call i32 @param_pipe_communication(), !insn.addr !665
  %19 = add i32 %1, add (i32 ptrtoint ([8 x i8]** @global_var_4500 to i32), i32 -11384), !insn.addr !666
  %20 = inttoptr i32 %19 to i8*, !insn.addr !667
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %20), !insn.addr !668
  %22 = call i32 @param_socket_create(), !insn.addr !669
  %23 = add i32 %1, add (i32 ptrtoint ([8 x i8]** @global_var_4500 to i32), i32 -11356), !insn.addr !670
  %24 = inttoptr i32 %23 to i8*, !insn.addr !671
  %25 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %24), !insn.addr !672
  %26 = call i32 @call_shmget_shmat(), !insn.addr !673
  %27 = add i32 %1, add (i32 ptrtoint ([8 x i8]** @global_var_4500 to i32), i32 -11328), !insn.addr !674
  %28 = inttoptr i32 %27 to i8*, !insn.addr !675
  %29 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %28), !insn.addr !676
  %30 = call i32 @param_signal_handling(), !insn.addr !677
  %31 = add i32 %1, add (i32 ptrtoint ([8 x i8]** @global_var_4500 to i32), i32 -11300), !insn.addr !678
  %32 = inttoptr i32 %31 to i8*, !insn.addr !679
  %33 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %32), !insn.addr !680
  ret i32 %33, !insn.addr !681

; uselistorder directives
  uselistorder i32 ()* @param_signal_handling, { 1, 0 }
  uselistorder i32 ()* @param_socket_create, { 1, 0 }
  uselistorder i32 ()* @param_pipe_communication, { 1, 0 }
}

define i32 @param_pthread_create(i32 %arg1) local_unnamed_addr {
dec_label_pc_2ab0:
  %0 = alloca i32
  %esi.0.reg2mem = alloca i32, !insn.addr !682
  %1 = load i32, i32* %0
  %stack_var_-20 = alloca i32, align 4
  %stack_var_-24 = alloca i32, align 4
  %stack_var_-28 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !683
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !684
  store i32 %arg1, i32* %stack_var_-24, align 4, !insn.addr !685
  %4 = add i32 %1, add (i32 ptrtoint (i32* @global_var_443a to i32), i32 -21920), !insn.addr !686
  %5 = inttoptr i32 %4 to i32* (i32*)*, !insn.addr !687
  %6 = call i32 @pthread_create(i32* nonnull %stack_var_-28, i32* null, i32* (i32*)* %5, i32* nonnull %stack_var_-24), !insn.addr !688
  %7 = icmp eq i32 %6, 0, !insn.addr !689
  %8 = icmp eq i1 %7, false, !insn.addr !690
  store i32 -1, i32* %esi.0.reg2mem, !insn.addr !690
  br i1 %8, label %dec_label_pc_2b19, label %dec_label_pc_2af7, !insn.addr !690

dec_label_pc_2af7:                                ; preds = %dec_label_pc_2ab0
  %9 = load i32, i32* %stack_var_-28, align 4, !insn.addr !691
  %10 = bitcast i32* %stack_var_-20 to i32**, !insn.addr !692
  %11 = call i32 @pthread_join(i32 %9, i32** nonnull %10), !insn.addr !692
  %12 = load i32, i32* %stack_var_-20, align 4, !insn.addr !693
  %13 = inttoptr i32 %12 to i32*, !insn.addr !694
  %14 = load i32, i32* %13, align 4, !insn.addr !694
  call void @free(i32* %13), !insn.addr !695
  store i32 %14, i32* %esi.0.reg2mem, !insn.addr !696
  br label %dec_label_pc_2b19, !insn.addr !696

dec_label_pc_2b19:                                ; preds = %dec_label_pc_2ab0, %dec_label_pc_2af7
  %15 = call i32 @__readgsdword(i32 20), !insn.addr !697
  %16 = icmp eq i32 %3, %15, !insn.addr !697
  %17 = icmp eq i1 %16, false, !insn.addr !698
  br i1 %17, label %dec_label_pc_2b35, label %dec_label_pc_2b26, !insn.addr !698

dec_label_pc_2b26:                                ; preds = %dec_label_pc_2b19
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  ret i32 %esi.0.reload, !insn.addr !699

dec_label_pc_2b35:                                ; preds = %dec_label_pc_2b19
  %18 = call i32 @__stack_chk_fail_local(), !insn.addr !700
  ret i32 %18, !insn.addr !700

; uselistorder directives
  uselistorder i32* %stack_var_-28, { 1, 0 }
  uselistorder i32* %stack_var_-20, { 1, 0 }
  uselistorder i32* %esi.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2b19, { 1, 0 }
}

define i32 @call_pthread_create() local_unnamed_addr {
dec_label_pc_2b3a:
  %0 = call i32 @param_pthread_create(i32 7), !insn.addr !701
  ret i32 %0, !insn.addr !702
}

define i32 @param_pthread_join() local_unnamed_addr {
dec_label_pc_2b4c:
  %0 = alloca i32
  %esi.2.reg2mem = alloca i32, !insn.addr !703
  %edi.1.reg2mem = alloca i32, !insn.addr !703
  %esi.1.reg2mem = alloca i32, !insn.addr !703
  %ebp.0.reg2mem = alloca i32, !insn.addr !703
  %edi.0.reg2mem = alloca i32, !insn.addr !703
  %esi.0.reg2mem = alloca i32, !insn.addr !703
  %1 = load i32, i32* %0
  %stack_var_-80 = alloca i32, align 4
  %stack_var_-68 = alloca i32, align 4
  %stack_var_-108 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-108 to i32, !insn.addr !704
  %3 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !705
  %4 = call i32 @__readgsdword(i32 20), !insn.addr !706
  store i32 1, i32* %stack_var_-68, align 4, !insn.addr !707
  %5 = ptrtoint i32* %stack_var_-80 to i32, !insn.addr !708
  %6 = ptrtoint i32* %stack_var_-68 to i32, !insn.addr !709
  %7 = add i32 %2, -4, !insn.addr !710
  %8 = inttoptr i32 %7 to i32*, !insn.addr !710
  %9 = add i32 %2, 8, !insn.addr !711
  %10 = inttoptr i32 %9 to i32*, !insn.addr !711
  %11 = add i32 %2, -8, !insn.addr !711
  %12 = inttoptr i32 %11 to i32*, !insn.addr !711
  %13 = add i32 %2, -12, !insn.addr !712
  %14 = inttoptr i32 %13 to i32*
  %15 = add i32 %2, -16, !insn.addr !713
  %16 = inttoptr i32 %15 to i32*
  %17 = add i32 %2, 4
  %18 = inttoptr i32 %17 to i32*
  store i32 %5, i32* %esi.0.reg2mem, !insn.addr !714
  store i32 %6, i32* %edi.0.reg2mem, !insn.addr !714
  br label %dec_label_pc_2bd6, !insn.addr !714

dec_label_pc_2bd6:                                ; preds = %dec_label_pc_2bea, %dec_label_pc_2b4c
  %edi.0.reload = load i32, i32* %edi.0.reg2mem
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  store i32 %edi.0.reload, i32* %8, align 4, !insn.addr !710
  %19 = load i32, i32* %10, align 4, !insn.addr !711
  store i32 %19, i32* %12, align 4, !insn.addr !711
  store i32 0, i32* %14, align 4, !insn.addr !712
  store i32 %esi.0.reload, i32* %16, align 4, !insn.addr !713
  %20 = call i32 @pthread_create(i32* nonnull @0, i32* nonnull @0, i32* (i32*)* bitcast (i32* @0 to i32* (i32*)*), i32* nonnull @0), !insn.addr !715
  %21 = icmp eq i32 %20, 0, !insn.addr !716
  %22 = icmp eq i1 %21, false, !insn.addr !717
  store i32 -1, i32* %esi.2.reg2mem, !insn.addr !717
  br i1 %22, label %dec_label_pc_2c1e, label %dec_label_pc_2bea, !insn.addr !717

dec_label_pc_2bea:                                ; preds = %dec_label_pc_2bd6
  %23 = add i32 %esi.0.reload, 4, !insn.addr !718
  %24 = add i32 %edi.0.reload, 12, !insn.addr !719
  %25 = load i32, i32* %18, align 4, !insn.addr !720
  %26 = icmp eq i32 %24, %25, !insn.addr !720
  %27 = icmp eq i1 %26, false, !insn.addr !721
  store i32 %23, i32* %esi.0.reg2mem, !insn.addr !721
  store i32 %24, i32* %edi.0.reg2mem, !insn.addr !721
  br i1 %27, label %dec_label_pc_2bd6, label %dec_label_pc_2bf6, !insn.addr !721

dec_label_pc_2bf6:                                ; preds = %dec_label_pc_2bea
  %28 = add i32 %2, 12, !insn.addr !722
  %29 = inttoptr i32 %28 to i32*, !insn.addr !722
  %30 = load i32, i32* %29, align 4, !insn.addr !722
  store i32 %6, i32* %ebp.0.reg2mem, !insn.addr !723
  store i32 %20, i32* %esi.1.reg2mem, !insn.addr !723
  store i32 %30, i32* %edi.1.reg2mem, !insn.addr !723
  br label %dec_label_pc_2bfc, !insn.addr !723

dec_label_pc_2bfc:                                ; preds = %dec_label_pc_2c0f, %dec_label_pc_2bf6
  %edi.1.reload = load i32, i32* %edi.1.reg2mem
  %esi.1.reload = load i32, i32* %esi.1.reg2mem
  %ebp.0.reload = load i32, i32* %ebp.0.reg2mem
  store i32 0, i32* %14, align 4, !insn.addr !724
  %31 = inttoptr i32 %edi.1.reload to i32*, !insn.addr !725
  %32 = load i32, i32* %31, align 4, !insn.addr !725
  store i32 %32, i32* %16, align 4, !insn.addr !725
  %33 = call i32 @pthread_join(i32 ptrtoint (i32* @0 to i32), i32** bitcast (i32* @0 to i32**)), !insn.addr !726
  %34 = icmp eq i32 %33, 0, !insn.addr !727
  %35 = icmp eq i1 %34, false, !insn.addr !728
  store i32 -2, i32* %esi.2.reg2mem, !insn.addr !728
  br i1 %35, label %dec_label_pc_2c1e, label %dec_label_pc_2c0f, !insn.addr !728

dec_label_pc_2c0f:                                ; preds = %dec_label_pc_2bfc
  %36 = add i32 %ebp.0.reload, 8, !insn.addr !729
  %37 = inttoptr i32 %36 to i32*, !insn.addr !729
  %38 = load i32, i32* %37, align 4, !insn.addr !729
  %39 = add i32 %38, %esi.1.reload, !insn.addr !729
  %40 = add i32 %edi.1.reload, 4, !insn.addr !730
  %41 = add i32 %ebp.0.reload, 12, !insn.addr !731
  %42 = load i32, i32* %18, align 4, !insn.addr !732
  %43 = icmp eq i32 %41, %42, !insn.addr !732
  %44 = icmp eq i1 %43, false, !insn.addr !733
  store i32 %41, i32* %ebp.0.reg2mem, !insn.addr !733
  store i32 %39, i32* %esi.1.reg2mem, !insn.addr !733
  store i32 %40, i32* %edi.1.reg2mem, !insn.addr !733
  store i32 %39, i32* %esi.2.reg2mem, !insn.addr !733
  br i1 %44, label %dec_label_pc_2bfc, label %dec_label_pc_2c1e, !insn.addr !733

dec_label_pc_2c1e:                                ; preds = %dec_label_pc_2bd6, %dec_label_pc_2bfc, %dec_label_pc_2c0f
  %45 = add i32 %2, 76, !insn.addr !734
  %46 = inttoptr i32 %45 to i32*, !insn.addr !734
  %47 = load i32, i32* %46, align 4, !insn.addr !734
  %48 = call i32 @__readgsdword(i32 20), !insn.addr !735
  %49 = icmp eq i32 %47, %48, !insn.addr !735
  %50 = icmp eq i1 %49, false, !insn.addr !736
  br i1 %50, label %dec_label_pc_2c43, label %dec_label_pc_2c2b, !insn.addr !736

dec_label_pc_2c2b:                                ; preds = %dec_label_pc_2c1e
  %esi.2.reload = load i32, i32* %esi.2.reg2mem
  ret i32 %esi.2.reload, !insn.addr !737

dec_label_pc_2c43:                                ; preds = %dec_label_pc_2c1e
  %51 = call i32 @__stack_chk_fail_local(), !insn.addr !738
  ret i32 %51, !insn.addr !738

; uselistorder directives
  uselistorder i32 %ebp.0.reload, { 1, 0 }
  uselistorder i32 %edi.1.reload, { 1, 0 }
  uselistorder i32 %esi.0.reload, { 1, 0 }
  uselistorder i32 %edi.0.reload, { 1, 0 }
  uselistorder i32 %2, { 0, 6, 7, 1, 2, 3, 4, 5 }
  uselistorder i32* %esi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ebp.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edi.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.2.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_2c1e, { 2, 1, 0 }
}

define i32 @call_pthread_join() local_unnamed_addr {
dec_label_pc_2c48:
  %0 = call i32 @param_pthread_join(), !insn.addr !739
  ret i32 %0, !insn.addr !740
}

define i32 @param_mutex_lock(i32 %arg1) local_unnamed_addr {
dec_label_pc_2c58:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !741
  %.pre-phi16.reg2mem = alloca i32*, !insn.addr !741
  %.pre-phi20.reg2mem = alloca i32*, !insn.addr !741
  %.reg2mem = alloca i32, !insn.addr !741
  %esi.0.reg2mem = alloca i32, !insn.addr !741
  %edi.0.reg2mem = alloca i32, !insn.addr !741
  %ebp.0.reg2mem = alloca i32, !insn.addr !741
  %1 = load i32, i32* %0
  %stack_var_-44 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !742
  %3 = mul i32 %arg1, 4, !insn.addr !743
  %4 = call i32* @malloc(i32 %3), !insn.addr !744
  %5 = icmp eq i32* %4, null, !insn.addr !745
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !746
  br i1 %5, label %dec_label_pc_2d24, label %dec_label_pc_2c8a, !insn.addr !746

dec_label_pc_2c8a:                                ; preds = %dec_label_pc_2c58
  %6 = ptrtoint i32* %stack_var_-44 to i32, !insn.addr !747
  %7 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4290 to i32), i32 456), !insn.addr !748
  %8 = inttoptr i32 %7 to i32*, !insn.addr !748
  store i32 0, i32* %8, align 4, !insn.addr !748
  %9 = icmp slt i32 %arg1, 1, !insn.addr !749
  br i1 %9, label %dec_label_pc_2c8a.dec_label_pc_2cf7_crit_edge, label %dec_label_pc_2c9d, !insn.addr !749

dec_label_pc_2c8a.dec_label_pc_2cf7_crit_edge:    ; preds = %dec_label_pc_2c8a
  %.pre = add i32 %6, 12, !insn.addr !750
  %.pre11 = inttoptr i32 %.pre to i32*, !insn.addr !750
  %.pre13 = add i32 %6, -16, !insn.addr !750
  %.pre15 = inttoptr i32 %.pre13 to i32*, !insn.addr !750
  %.pre17 = add i32 %6, 48, !insn.addr !751
  %.pre19 = inttoptr i32 %.pre17 to i32*, !insn.addr !751
  %.pre25 = load i32, i32* %.pre11, align 4
  store i32 %.pre25, i32* %.reg2mem
  store i32* %.pre19, i32** %.pre-phi20.reg2mem
  store i32* %.pre15, i32** %.pre-phi16.reg2mem
  br label %dec_label_pc_2cf7

dec_label_pc_2c9d:                                ; preds = %dec_label_pc_2c8a
  %10 = ptrtoint i32* %4 to i32, !insn.addr !744
  %11 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4290 to i32), i32 -21876), !insn.addr !752
  %12 = add i32 %6, 8, !insn.addr !753
  %13 = inttoptr i32 %12 to i32*, !insn.addr !753
  %14 = add i32 %6, -4, !insn.addr !753
  %15 = inttoptr i32 %14 to i32*, !insn.addr !753
  %16 = add i32 %6, -8, !insn.addr !754
  %17 = inttoptr i32 %16 to i32*, !insn.addr !754
  %18 = add i32 %6, -12, !insn.addr !755
  %19 = inttoptr i32 %18 to i32*
  %20 = add i32 %6, -16
  %21 = inttoptr i32 %20 to i32*
  %22 = add i32 %6, 48
  %23 = inttoptr i32 %22 to i32*
  store i32 0, i32* %ebp.0.reg2mem, !insn.addr !756
  store i32 %10, i32* %edi.0.reg2mem, !insn.addr !756
  br label %dec_label_pc_2cb4, !insn.addr !756

dec_label_pc_2cb4:                                ; preds = %dec_label_pc_2cc8, %dec_label_pc_2c9d
  %edi.0.reload = load i32, i32* %edi.0.reg2mem
  %ebp.0.reload = load i32, i32* %ebp.0.reg2mem
  %24 = load i32, i32* %13, align 4, !insn.addr !753
  store i32 %24, i32* %15, align 4, !insn.addr !753
  store i32 %11, i32* %17, align 4, !insn.addr !754
  store i32 0, i32* %19, align 4, !insn.addr !755
  store i32 %edi.0.reload, i32* %21, align 4, !insn.addr !757
  %25 = call i32 @pthread_create(i32* nonnull @0, i32* nonnull @0, i32* (i32*)* bitcast (i32* @0 to i32* (i32*)*), i32* nonnull @0), !insn.addr !758
  %26 = icmp eq i32 %25, 0, !insn.addr !759
  %27 = icmp eq i1 %26, false, !insn.addr !760
  br i1 %27, label %dec_label_pc_2d2c, label %dec_label_pc_2cc8, !insn.addr !760

dec_label_pc_2cc8:                                ; preds = %dec_label_pc_2cb4
  %28 = add i32 %ebp.0.reload, 1, !insn.addr !761
  %29 = load i32, i32* %23, align 4, !insn.addr !762
  %30 = icmp eq i32 %29, %28, !insn.addr !762
  %31 = icmp eq i1 %30, false, !insn.addr !763
  %32 = add i32 %edi.0.reload, 4, !insn.addr !764
  store i32 %28, i32* %ebp.0.reg2mem, !insn.addr !763
  store i32 %32, i32* %edi.0.reg2mem, !insn.addr !763
  br i1 %31, label %dec_label_pc_2cb4, label %dec_label_pc_2cd4, !insn.addr !763

dec_label_pc_2cd4:                                ; preds = %dec_label_pc_2cc8
  %33 = add i32 %6, 12
  %34 = inttoptr i32 %33 to i32*
  %35 = load i32, i32* %34, align 4, !insn.addr !765
  store i32 %25, i32* %esi.0.reg2mem, !insn.addr !766
  br label %dec_label_pc_2cda, !insn.addr !766

dec_label_pc_2cda:                                ; preds = %dec_label_pc_2cda, %dec_label_pc_2cd4
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  store i32 0, i32* %19, align 4, !insn.addr !767
  %36 = mul i32 %esi.0.reload, 4, !insn.addr !768
  %37 = add i32 %36, %35, !insn.addr !768
  %38 = inttoptr i32 %37 to i32*, !insn.addr !768
  %39 = load i32, i32* %38, align 4, !insn.addr !768
  store i32 %39, i32* %21, align 4, !insn.addr !768
  %40 = call i32 @pthread_join(i32 ptrtoint (i32* @0 to i32), i32** bitcast (i32* @0 to i32**)), !insn.addr !769
  %41 = add i32 %esi.0.reload, 1, !insn.addr !770
  %42 = icmp eq i32 %ebp.0.reload, %esi.0.reload, !insn.addr !771
  %43 = icmp eq i1 %42, false, !insn.addr !772
  store i32 %41, i32* %esi.0.reg2mem, !insn.addr !772
  br i1 %43, label %dec_label_pc_2cda, label %dec_label_pc_2cf3, !insn.addr !772

dec_label_pc_2cf3:                                ; preds = %dec_label_pc_2cda
  store i32 %35, i32* %34, align 4, !insn.addr !773
  store i32 %35, i32* %.reg2mem, !insn.addr !773
  store i32* %23, i32** %.pre-phi20.reg2mem, !insn.addr !773
  store i32* %21, i32** %.pre-phi16.reg2mem, !insn.addr !773
  br label %dec_label_pc_2cf7, !insn.addr !773

dec_label_pc_2cf7:                                ; preds = %dec_label_pc_2c8a.dec_label_pc_2cf7_crit_edge, %dec_label_pc_2cf3
  %.pre-phi16.reload = load i32*, i32** %.pre-phi16.reg2mem
  %.pre-phi20.reload = load i32*, i32** %.pre-phi20.reg2mem
  %.reload = load i32, i32* %.reg2mem, !insn.addr !750
  store i32 %.reload, i32* %.pre-phi16.reload, align 4, !insn.addr !750
  call void @free(i32* nonnull @0), !insn.addr !774
  %44 = load i32, i32* %8, align 4, !insn.addr !775
  %45 = load i32, i32* %.pre-phi20.reload, align 4, !insn.addr !751
  %46 = add i32 %6, 52, !insn.addr !776
  %47 = inttoptr i32 %46 to i32*, !insn.addr !776
  %48 = load i32, i32* %47, align 4, !insn.addr !776
  %49 = mul i32 %48, %45, !insn.addr !776
  %50 = icmp eq i32 %44, %49, !insn.addr !777
  %51 = icmp eq i1 %50, false, !insn.addr !778
  %52 = select i1 %51, i32 -3, i32 42, !insn.addr !778
  store i32 %52, i32* %eax.0.reg2mem, !insn.addr !778
  br label %dec_label_pc_2d24, !insn.addr !778

dec_label_pc_2d24:                                ; preds = %dec_label_pc_2c58, %dec_label_pc_2d2c, %dec_label_pc_2cf7
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !779

dec_label_pc_2d2c:                                ; preds = %dec_label_pc_2cb4
  %53 = add i32 %6, 12, !insn.addr !780
  %54 = inttoptr i32 %53 to i32*, !insn.addr !780
  %55 = load i32, i32* %54, align 4, !insn.addr !780
  store i32 %55, i32* %21, align 4, !insn.addr !780
  call void @free(i32* nonnull @0), !insn.addr !781
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !782
  br label %dec_label_pc_2d24, !insn.addr !782

; uselistorder directives
  uselistorder i32 %35, { 0, 2, 1 }
  uselistorder i32 %ebp.0.reload, { 1, 0 }
  uselistorder i32 %edi.0.reload, { 1, 0 }
  uselistorder i32* %21, { 1, 0, 2, 3 }
  uselistorder i32 %6, { 4, 3, 10, 11, 5, 6, 7, 8, 9, 0, 1, 2 }
  uselistorder i32* %4, { 1, 0 }
  uselistorder i32 %1, { 2, 1, 0 }
  uselistorder i32* %ebp.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.0.reg2mem, { 2, 0, 3, 1 }
  uselistorder i32 48, { 1, 0 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_2d24, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2cf7, { 1, 0 }
}

define i32 @call_mutex_lock() local_unnamed_addr {
dec_label_pc_2d49:
  %0 = call i32 @param_mutex_lock(i32 4), !insn.addr !783
  ret i32 %0, !insn.addr !784
}

define i32 @param_condition_variable() local_unnamed_addr {
dec_label_pc_2d60:
  %0 = alloca i32
  %esi.0.reg2mem = alloca i32, !insn.addr !785
  %1 = load i32, i32* %0
  %stack_var_-20 = alloca i32, align 4
  %stack_var_-24 = alloca i32, align 4
  %stack_var_-28 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !786
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !787
  %4 = add i32 %1, add (i32 ptrtoint (i32* @global_var_418a to i32), i32 336), !insn.addr !788
  %5 = inttoptr i32 %4 to i32*, !insn.addr !788
  store i32 0, i32* %5, align 4, !insn.addr !788
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_418a to i32), i32 332), !insn.addr !789
  %7 = inttoptr i32 %6 to i32*, !insn.addr !789
  store i32 0, i32* %7, align 4, !insn.addr !789
  %8 = add i32 %1, add (i32 ptrtoint (i32* @global_var_418a to i32), i32 -21766), !insn.addr !790
  %9 = inttoptr i32 %8 to i32* (i32*)*, !insn.addr !791
  %10 = call i32 @pthread_create(i32* nonnull %stack_var_-24, i32* null, i32* (i32*)* %9, i32* null), !insn.addr !792
  %11 = icmp eq i32 %10, 0, !insn.addr !793
  %12 = icmp eq i1 %11, false, !insn.addr !794
  store i32 -1, i32* %esi.0.reg2mem, !insn.addr !794
  br i1 %12, label %dec_label_pc_2dfc, label %dec_label_pc_2db0, !insn.addr !794

dec_label_pc_2db0:                                ; preds = %dec_label_pc_2d60
  %13 = add i32 %1, add (i32 ptrtoint (i32* @global_var_418a to i32), i32 -21645), !insn.addr !795
  %14 = inttoptr i32 %13 to i32* (i32*)*, !insn.addr !796
  %15 = call i32 @pthread_create(i32* nonnull %stack_var_-28, i32* null, i32* (i32*)* %14, i32* null), !insn.addr !797
  %16 = icmp eq i32 %15, 0, !insn.addr !798
  %17 = icmp eq i1 %16, false, !insn.addr !799
  %18 = load i32, i32* %stack_var_-24, align 4
  br i1 %17, label %dec_label_pc_2e11, label %dec_label_pc_2dcc, !insn.addr !799

dec_label_pc_2dcc:                                ; preds = %dec_label_pc_2db0
  %19 = bitcast i32* %stack_var_-20 to i32**, !insn.addr !800
  %20 = call i32 @pthread_join(i32 %18, i32** nonnull %19), !insn.addr !800
  %21 = load i32, i32* %stack_var_-28, align 4, !insn.addr !801
  %22 = call i32 @pthread_join(i32 %21, i32** null), !insn.addr !802
  %23 = load i32, i32* %stack_var_-20, align 4, !insn.addr !803
  %24 = inttoptr i32 %23 to i32*, !insn.addr !804
  %25 = load i32, i32* %24, align 4, !insn.addr !804
  call void @free(i32* %24), !insn.addr !805
  store i32 %25, i32* %esi.0.reg2mem, !insn.addr !806
  br label %dec_label_pc_2dfc, !insn.addr !806

dec_label_pc_2dfc:                                ; preds = %dec_label_pc_2d60, %dec_label_pc_2e11, %dec_label_pc_2dcc
  %26 = call i32 @__readgsdword(i32 20), !insn.addr !807
  %27 = icmp eq i32 %3, %26, !insn.addr !807
  %28 = icmp eq i1 %27, false, !insn.addr !808
  br i1 %28, label %dec_label_pc_2e2e, label %dec_label_pc_2e09, !insn.addr !808

dec_label_pc_2e09:                                ; preds = %dec_label_pc_2dfc
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  ret i32 %esi.0.reload, !insn.addr !809

dec_label_pc_2e11:                                ; preds = %dec_label_pc_2db0
  %29 = call i32 @pthread_cancel(i32 %18), !insn.addr !810
  store i32 -2, i32* %esi.0.reg2mem, !insn.addr !811
  br label %dec_label_pc_2dfc, !insn.addr !811

dec_label_pc_2e2e:                                ; preds = %dec_label_pc_2dfc
  %30 = call i32 @__stack_chk_fail_local(), !insn.addr !812
  ret i32 %30, !insn.addr !812

; uselistorder directives
  uselistorder i32 %18, { 1, 0 }
  uselistorder i32* %stack_var_-28, { 1, 0 }
  uselistorder i32* %stack_var_-24, { 1, 0 }
  uselistorder i32* %stack_var_-20, { 1, 0 }
  uselistorder i32 %1, { 4, 0, 1, 2, 3 }
  uselistorder i32* %esi.0.reg2mem, { 3, 0, 2, 1 }
  uselistorder i32 332, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2dfc, { 1, 2, 0 }
}

define i32 @call_condition_variable() local_unnamed_addr {
dec_label_pc_2e33:
  %0 = call i32 @param_condition_variable(), !insn.addr !813
  ret i32 %0, !insn.addr !814
}

define i32 @param_atomic_ops(i32 %arg1) local_unnamed_addr {
dec_label_pc_2e43:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !815
  %esi.0.reg2mem = alloca i32, !insn.addr !815
  %edi.0.reg2mem = alloca i32, !insn.addr !815
  %ebp.0.reg2mem = alloca i32, !insn.addr !815
  %1 = load i32, i32* %0
  %stack_var_-36 = alloca i32, align 4
  %stack_var_-60 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !816
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !817
  %4 = mul i32 %arg1, 4, !insn.addr !818
  %5 = call i32* @malloc(i32 %4), !insn.addr !819
  %6 = ptrtoint i32* %stack_var_-60 to i32, !insn.addr !820
  %7 = icmp eq i32* %5, null, !insn.addr !821
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !822
  br i1 %7, label %dec_label_pc_2f35, label %dec_label_pc_2e81, !insn.addr !822

dec_label_pc_2e81:                                ; preds = %dec_label_pc_2e43
  %8 = add i32 %1, add (i32 ptrtoint (i32* @global_var_40a5 to i32), i32 328), !insn.addr !823
  %9 = inttoptr i32 %8 to i32*, !insn.addr !823
  store i32 0, i32* %9, align 4, !insn.addr !823
  %10 = icmp slt i32 %arg1, 1, !insn.addr !824
  br i1 %10, label %dec_label_pc_2f67, label %dec_label_pc_2e99, !insn.addr !824

dec_label_pc_2e99:                                ; preds = %dec_label_pc_2e81
  %11 = ptrtoint i32* %5 to i32, !insn.addr !819
  %12 = add i32 %1, add (i32 ptrtoint (i32* @global_var_40a5 to i32), i32 -21551), !insn.addr !825
  %13 = add i32 %6, 8, !insn.addr !826
  %14 = inttoptr i32 %13 to i32*, !insn.addr !826
  %15 = add i32 %6, -4, !insn.addr !826
  %16 = inttoptr i32 %15 to i32*
  %17 = add i32 %6, -8, !insn.addr !827
  %18 = inttoptr i32 %17 to i32*
  %19 = add i32 %6, -12, !insn.addr !828
  %20 = inttoptr i32 %19 to i32*
  %21 = add i32 %6, -16, !insn.addr !829
  %22 = inttoptr i32 %21 to i32*
  %23 = add i32 %6, 64
  %24 = inttoptr i32 %23 to i32*
  store i32 0, i32* %ebp.0.reg2mem, !insn.addr !825
  store i32 %11, i32* %edi.0.reg2mem, !insn.addr !825
  br label %dec_label_pc_2eac, !insn.addr !825

dec_label_pc_2eac:                                ; preds = %dec_label_pc_2ec4, %dec_label_pc_2e99
  %edi.0.reload = load i32, i32* %edi.0.reg2mem
  %ebp.0.reload = load i32, i32* %ebp.0.reg2mem
  %25 = load i32, i32* %14, align 4, !insn.addr !826
  store i32 %25, i32* %16, align 4, !insn.addr !826
  store i32 %12, i32* %18, align 4, !insn.addr !827
  store i32 0, i32* %20, align 4, !insn.addr !828
  store i32 %edi.0.reload, i32* %22, align 4, !insn.addr !829
  %26 = call i32 @pthread_create(i32* nonnull @0, i32* nonnull @0, i32* (i32*)* bitcast (i32* @0 to i32* (i32*)*), i32* nonnull @0), !insn.addr !830
  %27 = icmp eq i32 %26, 0, !insn.addr !831
  %28 = icmp eq i1 %27, false, !insn.addr !832
  br i1 %28, label %dec_label_pc_2f4a, label %dec_label_pc_2ec4, !insn.addr !832

dec_label_pc_2ec4:                                ; preds = %dec_label_pc_2eac
  %29 = add i32 %ebp.0.reload, 1, !insn.addr !833
  %30 = add i32 %edi.0.reload, 4, !insn.addr !834
  %31 = load i32, i32* %24, align 4, !insn.addr !835
  %32 = icmp eq i32 %31, %29, !insn.addr !835
  %33 = icmp eq i1 %32, false, !insn.addr !836
  store i32 %29, i32* %ebp.0.reg2mem, !insn.addr !836
  store i32 %30, i32* %edi.0.reg2mem, !insn.addr !836
  br i1 %33, label %dec_label_pc_2eac, label %dec_label_pc_2ed0, !insn.addr !836

dec_label_pc_2ed0:                                ; preds = %dec_label_pc_2ec4
  store i32 0, i32* %16, align 4, !insn.addr !837
  %34 = add i32 %1, add (i32 ptrtoint (i32* @global_var_40a5 to i32), i32 -21480), !insn.addr !838
  store i32 %34, i32* %18, align 4, !insn.addr !839
  store i32 0, i32* %20, align 4, !insn.addr !840
  %35 = add i32 %6, 24, !insn.addr !841
  store i32 %35, i32* %22, align 4, !insn.addr !842
  %36 = call i32 @pthread_create(i32* nonnull @0, i32* nonnull @0, i32* (i32*)* bitcast (i32* @0 to i32* (i32*)*), i32* nonnull @0), !insn.addr !843
  %37 = icmp eq i32 %36, 0, !insn.addr !844
  br i1 %37, label %dec_label_pc_2f99, label %dec_label_pc_2efa.preheader, !insn.addr !845

dec_label_pc_2efa.preheader:                      ; preds = %dec_label_pc_2ed0, %dec_label_pc_2f99
  %edi.1.ph.in.in = add i32 %6, 12
  %edi.1.ph.in = inttoptr i32 %edi.1.ph.in.in to i32*
  %edi.1.ph = load i32, i32* %edi.1.ph.in, align 4
  %ebp.1.ph = load i32, i32* %24, align 4
  store i32 %26, i32* %esi.0.reg2mem
  br label %dec_label_pc_2efa

dec_label_pc_2efa:                                ; preds = %dec_label_pc_2efa.preheader, %dec_label_pc_2efa
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  store i32 0, i32* %20, align 4, !insn.addr !846
  %38 = mul i32 %esi.0.reload, 4, !insn.addr !847
  %39 = add i32 %38, %edi.1.ph, !insn.addr !847
  %40 = inttoptr i32 %39 to i32*, !insn.addr !847
  %41 = load i32, i32* %40, align 4, !insn.addr !847
  store i32 %41, i32* %22, align 4, !insn.addr !847
  %42 = call i32 @pthread_join(i32 ptrtoint (i32* @0 to i32), i32** bitcast (i32* @0 to i32**)), !insn.addr !848
  %43 = add i32 %esi.0.reload, 1, !insn.addr !849
  %44 = icmp sgt i32 %ebp.1.ph, %43, !insn.addr !850
  store i32 %43, i32* %esi.0.reg2mem, !insn.addr !850
  br i1 %44, label %dec_label_pc_2efa, label %dec_label_pc_2f11, !insn.addr !850

dec_label_pc_2f11:                                ; preds = %dec_label_pc_2efa, %dec_label_pc_2f83, %dec_label_pc_2f67
  %45 = load i32, i32* %9, align 4, !insn.addr !851
  %46 = add i32 %6, 12, !insn.addr !852
  %47 = inttoptr i32 %46 to i32*, !insn.addr !852
  %48 = load i32, i32* %47, align 4, !insn.addr !852
  %49 = add i32 %6, -16, !insn.addr !852
  %50 = inttoptr i32 %49 to i32*, !insn.addr !852
  store i32 %48, i32* %50, align 4, !insn.addr !852
  call void @free(i32* nonnull @0), !insn.addr !853
  %51 = icmp slt i32 %45, 1
  %52 = select i1 %51, i32 -3, i32 42, !insn.addr !854
  store i32 %52, i32* %eax.0.reg2mem, !insn.addr !854
  br label %dec_label_pc_2f35, !insn.addr !854

dec_label_pc_2f35:                                ; preds = %dec_label_pc_2e43, %dec_label_pc_2f4a, %dec_label_pc_2f11
  %53 = add i32 %6, 28, !insn.addr !855
  %54 = inttoptr i32 %53 to i32*, !insn.addr !855
  %55 = load i32, i32* %54, align 4, !insn.addr !855
  %56 = call i32 @__readgsdword(i32 20), !insn.addr !856
  %57 = icmp eq i32 %55, %56, !insn.addr !856
  %58 = icmp eq i1 %57, false, !insn.addr !857
  br i1 %58, label %dec_label_pc_2fb7, label %dec_label_pc_2f42, !insn.addr !857

dec_label_pc_2f42:                                ; preds = %dec_label_pc_2f35
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !858

dec_label_pc_2f4a:                                ; preds = %dec_label_pc_2eac
  %59 = add i32 %6, 12, !insn.addr !859
  %60 = inttoptr i32 %59 to i32*, !insn.addr !859
  %61 = load i32, i32* %60, align 4, !insn.addr !859
  store i32 %61, i32* %22, align 4, !insn.addr !859
  call void @free(i32* nonnull @0), !insn.addr !860
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !861
  br label %dec_label_pc_2f35, !insn.addr !861

dec_label_pc_2f67:                                ; preds = %dec_label_pc_2e81
  %62 = add i32 %1, add (i32 ptrtoint (i32* @global_var_40a5 to i32), i32 -21480), !insn.addr !862
  %63 = inttoptr i32 %62 to i32* (i32*)*, !insn.addr !863
  %64 = call i32 @pthread_create(i32* nonnull %stack_var_-36, i32* null, i32* (i32*)* %63, i32* null), !insn.addr !864
  %65 = icmp eq i32 %64, 0, !insn.addr !865
  %66 = icmp eq i1 %65, false, !insn.addr !866
  br i1 %66, label %dec_label_pc_2f11, label %dec_label_pc_2f83, !insn.addr !866

dec_label_pc_2f83:                                ; preds = %dec_label_pc_2f67
  %67 = load i32, i32* %stack_var_-36, align 4, !insn.addr !867
  %68 = call i32 @pthread_join(i32 %67, i32** null), !insn.addr !868
  br label %dec_label_pc_2f11, !insn.addr !869

dec_label_pc_2f99:                                ; preds = %dec_label_pc_2ed0
  store i32 0, i32* %20, align 4, !insn.addr !870
  %69 = inttoptr i32 %35 to i32*, !insn.addr !871
  %70 = load i32, i32* %69, align 4, !insn.addr !871
  store i32 %70, i32* %22, align 4, !insn.addr !871
  %71 = call i32 @pthread_join(i32 ptrtoint (i32* @0 to i32), i32** bitcast (i32* @0 to i32**)), !insn.addr !872
  br label %dec_label_pc_2efa.preheader, !insn.addr !873

dec_label_pc_2fb7:                                ; preds = %dec_label_pc_2f35
  %72 = call i32 @__stack_chk_fail_local(), !insn.addr !874
  ret i32 %72, !insn.addr !874

; uselistorder directives
  uselistorder i32 %edi.0.reload, { 1, 0 }
  uselistorder i32* %22, { 1, 0, 3, 2, 4 }
  uselistorder i32* %20, { 0, 2, 1, 3 }
  uselistorder i32 %6, { 4, 1, 2, 3, 0, 11, 10, 5, 6, 7, 8, 9 }
  uselistorder i32* %5, { 1, 0 }
  uselistorder i32* %stack_var_-36, { 1, 0 }
  uselistorder i32 %1, { 4, 3, 2, 1, 0 }
  uselistorder i32* %ebp.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.0.reg2mem, { 2, 0, 3, 1 }
  uselistorder i32 8, { 2, 3, 4, 0, 5, 1, 6 }
  uselistorder i32 328, { 0, 2, 1 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_2f35, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2f11, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2efa, { 1, 0 }
  uselistorder label %dec_label_pc_2efa.preheader, { 1, 0 }
}

define i32 @call_atomic_ops() local_unnamed_addr {
dec_label_pc_2fbc:
  %0 = call i32 @param_atomic_ops(i32 4), !insn.addr !875
  ret i32 %0, !insn.addr !876
}

define i32 @param_thread_local_storage(i32 %arg1) local_unnamed_addr {
dec_label_pc_2fd3:
  %0 = alloca i32
  %esi.4.reg2mem = alloca i32, !insn.addr !877
  %eax.0.reg2mem = alloca i32, !insn.addr !877
  %edi.1.reg2mem = alloca i32, !insn.addr !877
  %esi.3.reg2mem = alloca i32, !insn.addr !877
  %ebp.2.reg2mem = alloca i32, !insn.addr !877
  %.pre-phi18.reg2mem = alloca i32*, !insn.addr !877
  %.pre-phi22.reg2mem = alloca i32*, !insn.addr !877
  %.pre-phi26.reg2mem = alloca i32*, !insn.addr !877
  %edi.0.reg2mem = alloca i32, !insn.addr !877
  %esi.2.reg2mem = alloca i32, !insn.addr !877
  %ebp.1.reg2mem = alloca i32, !insn.addr !877
  %esi.1.reg2mem = alloca i32, !insn.addr !877
  %ebp.0.reg2mem = alloca i32, !insn.addr !877
  %esi.0.reg2mem = alloca i32, !insn.addr !877
  %1 = load i32, i32* %0
  %stack_var_-76 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !878
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !879
  %4 = mul i32 %arg1, 4, !insn.addr !880
  %5 = call i32* @malloc(i32 %4), !insn.addr !881
  %6 = call i32* @malloc(i32 %4), !insn.addr !882
  %7 = ptrtoint i32* %stack_var_-76 to i32, !insn.addr !883
  %8 = icmp eq i32* %5, null, !insn.addr !884
  %9 = icmp eq i32* %6, null, !insn.addr !885
  %or.cond = or i1 %8, %9
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !886
  br i1 %or.cond, label %dec_label_pc_3143, label %dec_label_pc_3029, !insn.addr !886

dec_label_pc_3029:                                ; preds = %dec_label_pc_2fd3
  %10 = ptrtoint i32* %6 to i32, !insn.addr !882
  %11 = icmp slt i32 %arg1, 1, !insn.addr !887
  br i1 %11, label %dec_label_pc_3029.dec_label_pc_3111_crit_edge, label %dec_label_pc_3034, !insn.addr !887

dec_label_pc_3029.dec_label_pc_3111_crit_edge:    ; preds = %dec_label_pc_3029
  %.pre = add i32 %7, -16, !insn.addr !888
  %.pre17 = inttoptr i32 %.pre to i32*, !insn.addr !888
  %.pre19 = add i32 %7, 24, !insn.addr !889
  %.pre21 = inttoptr i32 %.pre19 to i32*, !insn.addr !889
  %.pre23 = add i32 %7, 80, !insn.addr !890
  %.pre25 = inttoptr i32 %.pre23 to i32*, !insn.addr !890
  store i32* %.pre25, i32** %.pre-phi26.reg2mem
  store i32* %.pre21, i32** %.pre-phi22.reg2mem
  store i32* %.pre17, i32** %.pre-phi18.reg2mem
  store i32 0, i32* %ebp.2.reg2mem
  store i32 0, i32* %esi.3.reg2mem
  store i32 %10, i32* %edi.1.reg2mem
  br label %dec_label_pc_3111

dec_label_pc_3034:                                ; preds = %dec_label_pc_3029
  %12 = add i32 %1, 4877, !insn.addr !891
  %13 = add i32 %7, -16
  %14 = inttoptr i32 %13 to i32*
  %15 = add i32 %7, -12
  %16 = inttoptr i32 %15 to i32*
  %17 = add i32 %7, -20
  %18 = inttoptr i32 %17 to i32*
  %19 = add i32 %7, -24
  %20 = inttoptr i32 %19 to i32*
  %21 = add i32 %7, -28
  %22 = inttoptr i32 %21 to i32*
  %23 = add i32 %7, -32
  %24 = inttoptr i32 %23 to i32*
  %25 = add i32 %7, 80
  %26 = inttoptr i32 %25 to i32*
  store i32 0, i32* %esi.0.reg2mem, !insn.addr !891
  br label %dec_label_pc_303f, !insn.addr !891

dec_label_pc_303f:                                ; preds = %dec_label_pc_303f, %dec_label_pc_3034
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  store i32 16, i32* %14, align 4, !insn.addr !892
  %27 = call i32* @malloc(i32 ptrtoint (i32* @0 to i32)), !insn.addr !893
  %28 = ptrtoint i32* %27 to i32, !insn.addr !893
  %29 = mul i32 %esi.0.reload, 4, !insn.addr !894
  %30 = add i32 %29, %10, !insn.addr !894
  %31 = inttoptr i32 %30 to i32*, !insn.addr !894
  store i32 %28, i32* %31, align 4, !insn.addr !894
  store i32 %esi.0.reload, i32* %16, align 4, !insn.addr !895
  store i32 %12, i32* %14, align 4, !insn.addr !896
  store i32 16, i32* %18, align 4, !insn.addr !897
  store i32 1, i32* %20, align 4, !insn.addr !898
  store i32 16, i32* %22, align 4, !insn.addr !899
  store i32 %28, i32* %24, align 4, !insn.addr !900
  %32 = call i32 (i8*, i32, i32, i32, i8*, ...) @__snprintf_chk(i8* bitcast (i32* @0 to i8*), i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32), i8* bitcast (i32* @0 to i8*)), !insn.addr !901
  %33 = add i32 %esi.0.reload, 1, !insn.addr !902
  %34 = load i32, i32* %26, align 4, !insn.addr !903
  %35 = icmp eq i32 %34, %33, !insn.addr !903
  %36 = icmp eq i1 %35, false, !insn.addr !904
  store i32 %33, i32* %esi.0.reg2mem, !insn.addr !904
  br i1 %36, label %dec_label_pc_303f, label %dec_label_pc_306b, !insn.addr !904

dec_label_pc_306b:                                ; preds = %dec_label_pc_303f
  %37 = add i32 %7, 12, !insn.addr !905
  %38 = inttoptr i32 %37 to i32*, !insn.addr !905
  store i32 %esi.0.reload, i32* %38, align 4, !insn.addr !905
  %39 = add i32 %7, 24
  %40 = inttoptr i32 %39 to i32*
  %41 = load i32, i32* %40, align 4, !insn.addr !906
  %42 = add i32 %1, -5295, !insn.addr !907
  %43 = add i32 %7, 16, !insn.addr !908
  %44 = inttoptr i32 %43 to i32*, !insn.addr !908
  store i32 %42, i32* %44, align 4, !insn.addr !908
  %45 = add i32 %7, 20, !insn.addr !909
  %46 = inttoptr i32 %45 to i32*
  %47 = add i32 %7, -4, !insn.addr !910
  %48 = inttoptr i32 %47 to i32*, !insn.addr !910
  %49 = add i32 %7, -8, !insn.addr !911
  %50 = inttoptr i32 %49 to i32*, !insn.addr !911
  store i32 %41, i32* %ebp.0.reg2mem, !insn.addr !912
  store i32 0, i32* %esi.1.reg2mem, !insn.addr !912
  br label %dec_label_pc_3086, !insn.addr !912

dec_label_pc_3084:                                ; preds = %dec_label_pc_30a4
  %51 = add i32 %ebp.0.reload, 4, !insn.addr !913
  %52 = add i32 %esi.1.reload, 1, !insn.addr !914
  store i32 %51, i32* %ebp.0.reg2mem, !insn.addr !915
  store i32 %52, i32* %esi.1.reg2mem, !insn.addr !915
  br label %dec_label_pc_3086, !insn.addr !915

dec_label_pc_3086:                                ; preds = %dec_label_pc_3084, %dec_label_pc_306b
  %esi.1.reload = load i32, i32* %esi.1.reg2mem
  %ebp.0.reload = load i32, i32* %ebp.0.reg2mem
  store i32 %esi.1.reload, i32* %46, align 4, !insn.addr !909
  %53 = mul i32 %esi.1.reload, 4, !insn.addr !910
  %54 = add i32 %53, %10, !insn.addr !910
  %55 = inttoptr i32 %54 to i32*, !insn.addr !910
  %56 = load i32, i32* %55, align 4, !insn.addr !910
  store i32 %56, i32* %48, align 4, !insn.addr !910
  %57 = load i32, i32* %44, align 4, !insn.addr !911
  store i32 %57, i32* %50, align 4, !insn.addr !911
  store i32 0, i32* %16, align 4, !insn.addr !916
  store i32 %ebp.0.reload, i32* %14, align 4, !insn.addr !917
  %58 = call i32 @pthread_create(i32* nonnull @0, i32* nonnull @0, i32* (i32*)* bitcast (i32* @0 to i32* (i32*)*), i32* nonnull @0), !insn.addr !918
  %59 = icmp eq i32 %58, 0, !insn.addr !919
  %60 = icmp eq i1 %59, false, !insn.addr !920
  br i1 %60, label %dec_label_pc_3158, label %dec_label_pc_30a4, !insn.addr !920

dec_label_pc_30a4:                                ; preds = %dec_label_pc_3086
  %61 = load i32, i32* %38, align 4, !insn.addr !921
  %62 = icmp eq i32 %61, %esi.1.reload, !insn.addr !921
  %63 = icmp eq i1 %62, false, !insn.addr !922
  br i1 %63, label %dec_label_pc_3084, label %dec_label_pc_30b0, !insn.addr !922

dec_label_pc_30b0:                                ; preds = %dec_label_pc_30a4
  %64 = add i32 %7, 40, !insn.addr !923
  %65 = add i32 %7, 28, !insn.addr !924
  %66 = inttoptr i32 %65 to i32*, !insn.addr !924
  store i32 %64, i32* %66, align 4, !insn.addr !924
  store i32 %10, i32* %46, align 4, !insn.addr !925
  %67 = inttoptr i32 %64 to i32*
  store i32 %58, i32* %ebp.1.reg2mem, !insn.addr !926
  store i32 %58, i32* %esi.2.reg2mem, !insn.addr !926
  store i32 %58, i32* %edi.0.reg2mem, !insn.addr !926
  br label %dec_label_pc_30c2, !insn.addr !926

dec_label_pc_30c2:                                ; preds = %dec_label_pc_30c2, %dec_label_pc_30b0
  %edi.0.reload = load i32, i32* %edi.0.reg2mem
  %esi.2.reload = load i32, i32* %esi.2.reg2mem
  %ebp.1.reload = load i32, i32* %ebp.1.reg2mem
  store i32 %esi.2.reload, i32* %44, align 4, !insn.addr !927
  %68 = load i32, i32* %66, align 4, !insn.addr !928
  store i32 %68, i32* %16, align 4, !insn.addr !928
  %69 = load i32, i32* %40, align 4, !insn.addr !929
  %70 = mul i32 %esi.2.reload, 4, !insn.addr !930
  %71 = add i32 %69, %70, !insn.addr !930
  %72 = inttoptr i32 %71 to i32*, !insn.addr !930
  %73 = load i32, i32* %72, align 4, !insn.addr !930
  store i32 %73, i32* %14, align 4, !insn.addr !930
  %74 = call i32 @pthread_join(i32 ptrtoint (i32* @0 to i32), i32** bitcast (i32* @0 to i32**)), !insn.addr !931
  %75 = load i32, i32* %67, align 4, !insn.addr !932
  %76 = inttoptr i32 %75 to i32*, !insn.addr !933
  %77 = load i32, i32* %76, align 4, !insn.addr !933
  %78 = add i32 %77, %ebp.1.reload, !insn.addr !933
  %79 = add i32 %75, 4, !insn.addr !934
  %80 = inttoptr i32 %79 to i32*, !insn.addr !934
  %81 = load i32, i32* %80, align 4, !insn.addr !934
  %82 = add i32 %81, %edi.0.reload, !insn.addr !934
  store i32 %75, i32* %14, align 4, !insn.addr !935
  call void @free(i32* nonnull @0), !insn.addr !936
  %83 = load i32, i32* %46, align 4, !insn.addr !937
  %84 = add i32 %83, %70, !insn.addr !938
  %85 = inttoptr i32 %84 to i32*, !insn.addr !938
  %86 = load i32, i32* %85, align 4, !insn.addr !938
  store i32 %86, i32* %14, align 4, !insn.addr !938
  call void @free(i32* nonnull @0), !insn.addr !939
  %87 = add i32 %esi.2.reload, 1, !insn.addr !940
  %88 = load i32, i32* %44, align 4, !insn.addr !941
  %89 = load i32, i32* %38, align 4, !insn.addr !942
  %90 = icmp eq i32 %89, %88, !insn.addr !942
  %91 = icmp eq i1 %90, false, !insn.addr !943
  store i32 %78, i32* %ebp.1.reg2mem, !insn.addr !943
  store i32 %87, i32* %esi.2.reg2mem, !insn.addr !943
  store i32 %82, i32* %edi.0.reg2mem, !insn.addr !943
  br i1 %91, label %dec_label_pc_30c2, label %dec_label_pc_3109, !insn.addr !943

dec_label_pc_3109:                                ; preds = %dec_label_pc_30c2
  %92 = load i32, i32* %46, align 4, !insn.addr !944
  store i32* %26, i32** %.pre-phi26.reg2mem, !insn.addr !944
  store i32* %40, i32** %.pre-phi22.reg2mem, !insn.addr !944
  store i32* %14, i32** %.pre-phi18.reg2mem, !insn.addr !944
  store i32 %82, i32* %ebp.2.reg2mem, !insn.addr !944
  store i32 %78, i32* %esi.3.reg2mem, !insn.addr !944
  store i32 %92, i32* %edi.1.reg2mem, !insn.addr !944
  br label %dec_label_pc_3111, !insn.addr !944

dec_label_pc_3111:                                ; preds = %dec_label_pc_3029.dec_label_pc_3111_crit_edge, %dec_label_pc_3109
  %edi.1.reload = load i32, i32* %edi.1.reg2mem
  %esi.3.reload = load i32, i32* %esi.3.reg2mem
  %.pre-phi18.reload = load i32*, i32** %.pre-phi18.reg2mem
  %.pre-phi22.reload = load i32*, i32** %.pre-phi22.reg2mem
  %.pre-phi26.reload = load i32*, i32** %.pre-phi26.reg2mem
  store i32 %edi.1.reload, i32* %.pre-phi18.reload, align 4, !insn.addr !888
  call void @free(i32* nonnull @0), !insn.addr !945
  %93 = load i32, i32* %.pre-phi22.reload, align 4, !insn.addr !889
  store i32 %93, i32* %.pre-phi18.reload, align 4, !insn.addr !889
  call void @free(i32* nonnull @0), !insn.addr !946
  %94 = load i32, i32* %.pre-phi26.reload, align 4, !insn.addr !890
  %95 = mul i32 %94, 100, !insn.addr !890
  %96 = icmp eq i32 %95, %esi.3.reload, !insn.addr !947
  %97 = icmp eq i1 %96, false, !insn.addr !948
  br i1 %97, label %dec_label_pc_31a8, label %dec_label_pc_3132, !insn.addr !948

dec_label_pc_3132:                                ; preds = %dec_label_pc_3111
  %ebp.2.reload = load i32, i32* %ebp.2.reg2mem
  %98 = mul i32 %94, 150, !insn.addr !949
  %99 = icmp eq i32 %98, %ebp.2.reload, !insn.addr !950
  %100 = icmp eq i1 %99, false, !insn.addr !951
  store i32 42, i32* %eax.0.reg2mem, !insn.addr !951
  br i1 %100, label %dec_label_pc_31a8, label %dec_label_pc_3143, !insn.addr !951

dec_label_pc_3143:                                ; preds = %dec_label_pc_2fd3, %dec_label_pc_3132, %dec_label_pc_31a8, %dec_label_pc_317a
  %101 = add i32 %7, 44, !insn.addr !952
  %102 = inttoptr i32 %101 to i32*, !insn.addr !952
  %103 = load i32, i32* %102, align 4, !insn.addr !952
  %104 = call i32 @__readgsdword(i32 20), !insn.addr !953
  %105 = icmp eq i32 %103, %104, !insn.addr !953
  %106 = icmp eq i1 %105, false, !insn.addr !954
  br i1 %106, label %dec_label_pc_31b6, label %dec_label_pc_3150, !insn.addr !954

dec_label_pc_3150:                                ; preds = %dec_label_pc_3143
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !955

dec_label_pc_3158:                                ; preds = %dec_label_pc_3086
  %107 = icmp slt i32 %esi.1.reload, 0, !insn.addr !956
  br i1 %107, label %dec_label_pc_317a, label %dec_label_pc_315c, !insn.addr !957

dec_label_pc_315c:                                ; preds = %dec_label_pc_3158
  %108 = load i32, i32* %46, align 4, !insn.addr !958
  %109 = mul i32 %108, 4, !insn.addr !959
  %110 = add i32 %10, 4, !insn.addr !959
  %111 = add i32 %110, %109, !insn.addr !959
  store i32 %10, i32* %esi.4.reg2mem, !insn.addr !959
  br label %dec_label_pc_3166, !insn.addr !959

dec_label_pc_3166:                                ; preds = %dec_label_pc_3166, %dec_label_pc_315c
  %esi.4.reload = load i32, i32* %esi.4.reg2mem
  %112 = inttoptr i32 %esi.4.reload to i32*, !insn.addr !960
  %113 = load i32, i32* %112, align 4, !insn.addr !960
  store i32 %113, i32* %14, align 4, !insn.addr !960
  call void @free(i32* nonnull @0), !insn.addr !961
  %114 = add i32 %esi.4.reload, 4, !insn.addr !962
  %115 = icmp eq i32 %114, %111, !insn.addr !963
  %116 = icmp eq i1 %115, false, !insn.addr !964
  store i32 %114, i32* %esi.4.reg2mem, !insn.addr !964
  br i1 %116, label %dec_label_pc_3166, label %dec_label_pc_317a, !insn.addr !964

dec_label_pc_317a:                                ; preds = %dec_label_pc_3166, %dec_label_pc_3158
  store i32 %10, i32* %14, align 4, !insn.addr !965
  call void @free(i32* nonnull @0), !insn.addr !966
  %117 = load i32, i32* %40, align 4, !insn.addr !967
  store i32 %117, i32* %14, align 4, !insn.addr !967
  call void @free(i32* nonnull @0), !insn.addr !968
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !969
  br label %dec_label_pc_3143, !insn.addr !969

dec_label_pc_31a8:                                ; preds = %dec_label_pc_3132, %dec_label_pc_3111
  store i32 -3, i32* %eax.0.reg2mem, !insn.addr !970
  br label %dec_label_pc_3143, !insn.addr !970

dec_label_pc_31b6:                                ; preds = %dec_label_pc_3143
  %118 = call i32 @__stack_chk_fail_local(), !insn.addr !971
  ret i32 %118, !insn.addr !971

; uselistorder directives
  uselistorder i32 %esi.4.reload, { 1, 0 }
  uselistorder i32 %75, { 2, 1, 0 }
  uselistorder i32 %70, { 1, 0 }
  uselistorder i32 %esi.2.reload, { 1, 2, 0 }
  uselistorder i32 %esi.1.reload, { 3, 2, 4, 0, 1 }
  uselistorder i32* %46, { 0, 3, 2, 1, 4 }
  uselistorder i32* %40, { 2, 0, 1, 3 }
  uselistorder i32 %28, { 1, 0 }
  uselistorder i32 %esi.0.reload, { 2, 1, 0, 3 }
  uselistorder i32* %16, { 1, 0, 2 }
  uselistorder i32* %14, { 2, 7, 3, 0, 4, 5, 6, 1, 8, 9 }
  uselistorder i32 %10, { 6, 0, 5, 4, 2, 3, 1 }
  uselistorder i32 %7, { 3, 7, 8, 5, 6, 4, 18, 17, 9, 10, 11, 12, 13, 14, 15, 16, 0, 1, 2 }
  uselistorder i32* %6, { 1, 0 }
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32 %1, { 2, 1, 0 }
  uselistorder i32* %esi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ebp.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.0.reg2mem, { 4, 3, 0, 2, 1 }
  uselistorder i32* %esi.4.reg2mem, { 1, 0, 2 }
  uselistorder i32 ()* @__stack_chk_fail_local, { 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 -3, { 0, 6, 7, 1, 2, 3, 8, 9, 5, 4 }
  uselistorder i32 -2, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 10 }
  uselistorder i32 42, { 0, 7, 8, 1, 9, 3, 2, 10, 4, 11, 12, 5, 13, 6, 14 }
  uselistorder void (i32*)* @free, { 9, 11, 10, 0, 2, 1, 12, 3, 5, 4, 6, 13, 8, 7, 14 }
  uselistorder i32 (i32, i32**)* @pthread_join, { 8, 7, 6, 5, 4, 3, 2, 1, 0, 9 }
  uselistorder i32 40, { 1, 0 }
  uselistorder i32 (i32*, i32*, i32* (i32*)*, i32*)* @pthread_create, { 8, 7, 6, 5, 4, 3, 2, 1, 0, 9 }
  uselistorder i32 12, { 8, 3, 4, 2, 5, 9, 1, 10, 11, 12, 13, 6, 7, 0 }
  uselistorder i32 16, { 1, 2, 3, 4, 0 }
  uselistorder i32 80, { 1, 0 }
  uselistorder i32 24, { 3, 0, 1, 2 }
  uselistorder i32 -16, { 3, 0, 4, 5, 6, 1, 7, 8, 9, 10, 2, 11 }
  uselistorder i32* null, { 0, 1, 2, 3, 4, 5, 7, 6, 8, 9, 10, 11, 12 }
  uselistorder i32* (i32)* @malloc, { 8, 7, 6, 5, 4, 3, 2, 1, 0, 9 }
  uselistorder i32 20, { 1, 31, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 0, 28, 29, 30 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_3143, { 2, 3, 1, 0 }
  uselistorder label %dec_label_pc_3111, { 1, 0 }
}

define i32 @call_thread_local_storage() local_unnamed_addr {
dec_label_pc_31bb:
  %0 = call i32 @param_thread_local_storage(i32 4), !insn.addr !972
  ret i32 %0, !insn.addr !973

; uselistorder directives
  uselistorder i32 4, { 10, 16, 17, 0, 18, 1, 2, 19, 3, 4, 11, 5, 20, 6, 12, 7, 21, 8, 22, 24, 23, 25, 13, 26, 27, 9, 28, 29, 14, 30, 15 }
}

define i32 @test_thread_concurrency() local_unnamed_addr {
dec_label_pc_31cd:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !974
  %3 = add i32 %1, 4384, !insn.addr !975
  %4 = inttoptr i32 %3 to i8*, !insn.addr !976
  %5 = call i32 @puts(i8* %4), !insn.addr !977
  %6 = call i32 @call_pthread_create(), !insn.addr !978
  %7 = add i32 %1, 4414, !insn.addr !979
  %8 = inttoptr i32 %7 to i8*, !insn.addr !980
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %8), !insn.addr !981
  %10 = call i32 @param_pthread_join(), !insn.addr !982
  %11 = add i32 %1, 4442, !insn.addr !983
  %12 = inttoptr i32 %11 to i8*, !insn.addr !984
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %12), !insn.addr !985
  %14 = call i32 @call_mutex_lock(), !insn.addr !986
  %15 = add i32 %1, 4471, !insn.addr !987
  %16 = inttoptr i32 %15 to i8*, !insn.addr !988
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %16), !insn.addr !989
  %18 = call i32 @param_condition_variable(), !insn.addr !990
  %19 = add i32 %1, 4499, !insn.addr !991
  %20 = inttoptr i32 %19 to i8*, !insn.addr !992
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %20), !insn.addr !993
  %22 = call i32 @call_atomic_ops(), !insn.addr !994
  %23 = add i32 %1, 4527, !insn.addr !995
  %24 = inttoptr i32 %23 to i8*, !insn.addr !996
  %25 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %24), !insn.addr !997
  %26 = call i32 @call_thread_local_storage(), !insn.addr !998
  %27 = add i32 %1, 4555, !insn.addr !999
  %28 = inttoptr i32 %27 to i8*, !insn.addr !1000
  %29 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %28), !insn.addr !1001
  ret i32 %29, !insn.addr !1002

; uselistorder directives
  uselistorder i32 %1, { 6, 5, 4, 3, 2, 1, 0, 7 }
  uselistorder i32 ()* @param_condition_variable, { 1, 0 }
  uselistorder i32 ()* @param_pthread_join, { 1, 0 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 6, 5, 24, 9, 8, 7, 10, 11, 16, 14, 13, 12, 15, 17, 19, 18, 20, 25, 1, 0, 2, 3, 4, 21, 22, 23, 26 }
  uselistorder i32 (i8*)* @puts, { 1, 0, 2, 3 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_327b:
  %0 = call i32 @test_standard_library_functions(), !insn.addr !1003
  %1 = call i32 @test_system_calls(), !insn.addr !1004
  %2 = call i32 @test_thread_concurrency(), !insn.addr !1005
  ret i32 0, !insn.addr !1006

; uselistorder directives
  uselistorder i32 0, { 12, 36, 37, 38, 2, 3, 0, 1, 39, 40, 41, 42, 43, 44, 45, 46, 4, 30, 47, 48, 49, 50, 51, 52, 53, 5, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 19, 20, 72, 73, 74, 75, 76, 77, 78, 21, 22, 33, 23, 34, 80, 79, 81, 24, 25, 82, 26, 84, 83, 85, 86, 87, 7, 6, 88, 27, 8, 89, 28, 35, 29, 13, 14, 9, 15, 90, 91, 16, 10, 17, 11, 92, 93, 18, 31, 32 }
}

define i32 @__x86.get_pc_thunk.ax(i32 %arg1) local_unnamed_addr {
dec_label_pc_329b:
  ret i32 %arg1, !insn.addr !1007
}

define i32 @__x86.get_pc_thunk.cx(i32 %arg1) local_unnamed_addr {
dec_label_pc_329f:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !1008
}

define i32 @__x86.get_pc_thunk.si(i32 %arg1) local_unnamed_addr {
dec_label_pc_32a3:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !1009
}

define i32 @__stack_chk_fail_local() local_unnamed_addr {
dec_label_pc_32b0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !1010
  call void @__stack_chk_fail(), !insn.addr !1011
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !1012
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_32d0:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !1013
  %ebx.0.reg2mem = alloca i32, !insn.addr !1013
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !1014
  %3 = add i32 %1, 15159, !insn.addr !1015
  %4 = inttoptr i32 %3 to i32*, !insn.addr !1015
  %5 = load i32, i32* %4, align 4, !insn.addr !1015
  %6 = icmp eq i32 %5, -1, !insn.addr !1016
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !1017
  store i32 -1, i32* %merge.reg2mem, !insn.addr !1017
  br i1 %6, label %dec_label_pc_330d, label %dec_label_pc_3300, !insn.addr !1017

dec_label_pc_3300:                                ; preds = %dec_label_pc_32d0, %dec_label_pc_3300
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !1018
  %8 = inttoptr i32 %7 to i32*, !insn.addr !1018
  %9 = load i32, i32* %8, align 4, !insn.addr !1018
  %10 = icmp eq i32 %9, -1, !insn.addr !1019
  %11 = icmp eq i1 %10, false, !insn.addr !1020
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !1020
  store i32 %9, i32* %merge.reg2mem, !insn.addr !1020
  br i1 %11, label %dec_label_pc_3300, label %dec_label_pc_330d, !insn.addr !1020

dec_label_pc_330d:                                ; preds = %dec_label_pc_3300, %dec_label_pc_32d0
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !1021

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 58, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 49, 48, 50, 51, 52, 53, 54, 55, 56, 57 }
  uselistorder i32 -4, { 7, 2, 3, 4, 5, 0, 1, 6 }
  uselistorder i32 -1, { 18, 0, 19, 1, 2, 3, 4, 5, 6, 20, 21, 7, 22, 25, 23, 8, 9, 10, 11, 24, 12, 16, 26, 27, 13, 14, 15, 17 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 3, 0, 2 }
  uselistorder i32* @0, { 32, 34, 33, 26, 28, 27, 35, 21, 22, 23, 29, 30, 18, 19, 20, 15, 16, 17, 31, 36, 12, 13, 14, 0, 9, 10, 11, 1, 2, 3, 7, 24, 25, 6, 8, 5, 4 }
  uselistorder label %dec_label_pc_3300, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_331c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !1022
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !1023
  ret i32 %3, !insn.addr !1024

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 35, 7, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 1, { 49, 51, 50, 48, 47, 46, 45, 111, 112, 113, 114, 115, 116, 44, 196, 197, 198, 199, 117, 156, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 43, 118, 200, 201, 119, 158, 157, 69, 68, 67, 66, 42, 161, 160, 159, 70, 41, 202, 203, 120, 162, 77, 76, 75, 74, 73, 72, 71, 40, 164, 166, 165, 163, 83, 82, 81, 80, 79, 78, 39, 169, 168, 167, 84, 38, 121, 122, 123, 124, 125, 126, 127, 37, 204, 170, 89, 88, 87, 86, 85, 36, 128, 90, 35, 129, 172, 130, 174, 173, 171, 91, 34, 131, 177, 176, 175, 92, 33, 153, 93, 32, 132, 178, 31, 94, 30, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 29, 28, 180, 179, 95, 27, 205, 98, 97, 96, 26, 101, 100, 99, 25, 145, 146, 183, 182, 181, 102, 24, 103, 23, 22, 147, 21, 184, 186, 188, 189, 187, 185, 154, 148, 20, 191, 190, 19, 18, 17, 155, 149, 16, 192, 15, 14, 13, 206, 207, 150, 105, 104, 12, 208, 151, 11, 193, 106, 10, 209, 210, 152, 194, 107, 9, 8, 211, 109, 108, 212, 7, 6, 110, 5, 4, 3, 2, 195, 1, 0 }
}

declare i32 @setsockopt(i32, i32, i32, i32*, i32) local_unnamed_addr

declare i32 @pthread_mutex_unlock(i32*) local_unnamed_addr

declare i32 @raise(i32) local_unnamed_addr

declare i32 @__snprintf_chk(i8*, i32, i32, i32, i8*, ...) local_unnamed_addr

declare i8* @strstr(i8*, i8*) local_unnamed_addr

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @read(i32, i32*, i32) local_unnamed_addr

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

declare i32* @__errno_location() local_unnamed_addr

declare i8* @strncpy(i8*, i8*, i32) local_unnamed_addr

declare i32 @syscall(i32, ...) local_unnamed_addr

declare i32 @fileno(%_IO_FILE*) local_unnamed_addr

declare i32 @execl(i8*, i8*, ...) local_unnamed_addr

declare i32 @pipe([2 x i32]) local_unnamed_addr

declare i32 @__printf_chk(i32, i8*, ...) local_unnamed_addr

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
!4 = !{i64 5092}
!5 = !{i64 5108}
!6 = !{i64 5124}
!7 = !{i64 5140}
!8 = !{i64 5156}
!9 = !{i64 5172}
!10 = !{i64 5188}
!11 = !{i64 5204}
!12 = !{i64 5220}
!13 = !{i64 5236}
!14 = !{i64 5252}
!15 = !{i64 5268}
!16 = !{i64 5284}
!17 = !{i64 5300}
!18 = !{i64 5316}
!19 = !{i64 5332}
!20 = !{i64 5348}
!21 = !{i64 5364}
!22 = !{i64 5380}
!23 = !{i64 5396}
!24 = !{i64 5412}
!25 = !{i64 5428}
!26 = !{i64 5444}
!27 = !{i64 5460}
!28 = !{i64 5476}
!29 = !{i64 5492}
!30 = !{i64 5508}
!31 = !{i64 5524}
!32 = !{i64 5540}
!33 = !{i64 5556}
!34 = !{i64 5572}
!35 = !{i64 5588}
!36 = !{i64 5604}
!37 = !{i64 5620}
!38 = !{i64 5636}
!39 = !{i64 5652}
!40 = !{i64 5668}
!41 = !{i64 5684}
!42 = !{i64 5700}
!43 = !{i64 5716}
!44 = !{i64 5732}
!45 = !{i64 5748}
!46 = !{i64 5764}
!47 = !{i64 5780}
!48 = !{i64 5796}
!49 = !{i64 5812}
!50 = !{i64 5828}
!51 = !{i64 5844}
!52 = !{i64 5860}
!53 = !{i64 5876}
!54 = !{i64 5892}
!55 = !{i64 5908}
!56 = !{i64 5924}
!57 = !{i64 5940}
!58 = !{i64 5956}
!59 = !{i64 5972}
!60 = !{i64 5988}
!61 = !{i64 6004}
!62 = !{i64 6020}
!63 = !{i64 6047}
!64 = !{i64 6064}
!65 = !{i64 6070}
!66 = !{i64 6075}
!67 = !{i64 6079}
!68 = !{i64 6083}
!69 = !{i64 6096}
!70 = !{i64 6113}
!71 = !{i64 6152}
!72 = !{i64 6160}
!73 = !{i64 6230}
!74 = !{i64 6240}
!75 = !{i64 6248}
!76 = !{i64 6264}
!77 = !{i64 6271}
!78 = !{i64 6273}
!79 = !{i64 6279}
!80 = !{i64 6281}
!81 = !{i64 6286}
!82 = !{i64 6294}
!83 = !{i64 6299}
!84 = !{i64 6358}
!85 = !{i64 6363}
!86 = !{i64 6377}
!87 = !{i64 6388}
!88 = !{i64 6396}
!89 = !{i64 6400}
!90 = !{i64 6405}
!91 = !{i64 6410}
!92 = !{i64 6415}
!93 = !{i64 6429}
!94 = !{i64 6435}
!95 = !{i64 6436}
!96 = !{i64 6445}
!97 = !{i64 6452}
!98 = !{i64 6454}
!99 = !{i64 6459}
!100 = !{i64 6469}
!101 = !{i64 6471}
!102 = !{i64 6474}
!103 = !{i64 6476}
!104 = !{i64 6478}
!105 = !{i64 6487}
!106 = !{i64 6497}
!107 = !{i64 6512}
!108 = !{i64 6516}
!109 = !{i64 6521}
!110 = !{i64 6524}
!111 = !{i64 6531}
!112 = !{i64 6532}
!113 = !{i64 6543}
!114 = !{i64 6558}
!115 = !{i64 6562}
!116 = !{i64 6540}
!117 = !{i64 6569}
!118 = !{i64 6578}
!119 = !{i64 6579}
!120 = !{i64 6584}
!121 = !{i64 6590}
!122 = !{i64 6593}
!123 = !{i64 6599}
!124 = !{i64 6602}
!125 = !{i64 6607}
!126 = !{i64 6614}
!127 = !{i64 6619}
!128 = !{i64 6625}
!129 = !{i64 6627}
!130 = !{i64 6641}
!131 = !{i64 6642}
!132 = !{i64 6649}
!133 = !{i64 6663}
!134 = !{i64 6670}
!135 = !{i64 6675}
!136 = !{i64 6678}
!137 = !{i64 6685}
!138 = !{i64 6736}
!139 = !{i64 6693}
!140 = !{i64 6702}
!141 = !{i64 6703}
!142 = !{i64 6704}
!143 = !{i64 6712}
!144 = !{i64 6719}
!145 = !{i64 6721}
!146 = !{i64 6737}
!147 = !{i64 6742}
!148 = !{i64 6749}
!149 = !{i64 6754}
!150 = !{i64 6762}
!151 = !{i64 6772}
!152 = !{i64 6785}
!153 = !{i64 6790}
!154 = !{i64 6799}
!155 = !{i64 6804}
!156 = !{i64 6814}
!157 = !{i64 6824}
!158 = !{i64 6833}
!159 = !{i64 6841}
!160 = !{i64 6856}
!161 = !{i64 6857}
!162 = !{i64 6863}
!163 = !{i64 6878}
!164 = !{i64 6882}
!165 = !{i64 6889}
!166 = !{i64 6897}
!167 = !{i64 6905}
!168 = !{i64 6913}
!169 = !{i64 6916}
!170 = !{i64 6918}
!171 = !{i64 6927}
!172 = !{i64 6932}
!173 = !{i64 6943}
!174 = !{i64 6949}
!175 = !{i64 6952}
!176 = !{i64 6963}
!177 = !{i64 6971}
!178 = !{i64 6982}
!179 = !{i64 6989}
!180 = !{i64 6992}
!181 = !{i64 7014}
!182 = !{i64 7021}
!183 = !{i64 7022}
!184 = !{i64 7034}
!185 = !{i64 7039}
!186 = !{i64 7041}
!187 = !{i64 7050}
!188 = !{i64 7060}
!189 = !{i64 7080}
!190 = !{i64 7088}
!191 = !{i64 7098}
!192 = !{i64 7106}
!193 = !{i64 7116}
!194 = !{i64 7129}
!195 = !{i64 7141}
!196 = !{i64 7153}
!197 = !{i64 7160}
!198 = !{i64 7165}
!199 = !{i64 7166}
!200 = !{i64 7179}
!201 = !{i64 7198}
!202 = !{i64 7203}
!203 = !{i64 7211}
!204 = !{i64 7218}
!205 = !{i64 7226}
!206 = !{i64 7240}
!207 = !{i64 7247}
!208 = !{i64 7254}
!209 = !{i64 7264}
!210 = !{i64 7272}
!211 = !{i64 7282}
!212 = !{i64 7289}
!213 = !{i64 7296}
!214 = !{i64 7304}
!215 = !{i64 7306}
!216 = !{i64 7311}
!217 = !{i64 7320}
!218 = !{i64 7335}
!219 = !{i64 7344}
!220 = !{i64 7354}
!221 = !{i64 7364}
!222 = !{i64 7388}
!223 = !{i64 7400}
!224 = !{i64 7408}
!225 = !{i64 7420}
!226 = !{i64 7460}
!227 = !{i64 7512}
!228 = !{i64 7521}
!229 = !{i64 7536}
!230 = !{i64 7543}
!231 = !{i64 7548}
!232 = !{i64 7549}
!233 = !{i64 7562}
!234 = !{i64 7585}
!235 = !{i64 7590}
!236 = !{i64 7598}
!237 = !{i64 7605}
!238 = !{i64 7615}
!239 = !{i64 7627}
!240 = !{i64 7651}
!241 = !{i64 7675}
!242 = !{i64 7711}
!243 = !{i64 7729}
!244 = !{i64 7743}
!245 = !{i64 7750}
!246 = !{i64 7737}
!247 = !{i64 7757}
!248 = !{i64 7758}
!249 = !{i64 7771}
!250 = !{i64 7790}
!251 = !{i64 7796}
!252 = !{i64 7799}
!253 = !{i64 7808}
!254 = !{i64 7816}
!255 = !{i64 7826}
!256 = !{i64 7835}
!257 = !{i64 7843}
!258 = !{i64 7852}
!259 = !{i64 7863}
!260 = !{i64 7885}
!261 = !{i64 7891}
!262 = !{i64 7896}
!263 = !{i64 7921}
!264 = !{i64 7928}
!265 = !{i64 7904}
!266 = !{i64 7907}
!267 = !{i64 7934}
!268 = !{i64 7942}
!269 = !{i64 7954}
!270 = !{i64 7964}
!271 = !{i64 7971}
!272 = !{i64 7979}
!273 = !{i64 7980}
!274 = !{i64 7987}
!275 = !{i64 8001}
!276 = !{i64 8007}
!277 = !{i64 8012}
!278 = !{i64 8020}
!279 = !{i64 8022}
!280 = !{i64 8030}
!281 = !{i64 8040}
!282 = !{i64 8045}
!283 = !{i64 8053}
!284 = !{i64 8068}
!285 = !{i64 8078}
!286 = !{i64 8085}
!287 = !{i64 8090}
!288 = !{i64 8093}
!289 = !{i64 8099}
!290 = !{i64 8100}
!291 = !{i64 8111}
!292 = !{i64 8126}
!293 = !{i64 8138}
!294 = !{i64 8144}
!295 = !{i64 8146}
!296 = !{i64 8154}
!297 = !{i64 8156}
!298 = !{i64 8169}
!299 = !{i64 8176}
!300 = !{i64 8184}
!301 = !{i64 8187}
!302 = !{i64 8193}
!303 = !{i64 8207}
!304 = !{i64 8208}
!305 = !{i64 8215}
!306 = !{i64 8224}
!307 = !{i64 8232}
!308 = !{i64 8240}
!309 = !{i64 8243}
!310 = !{i64 8254}
!311 = !{i64 8260}
!312 = !{i64 8268}
!313 = !{i64 8276}
!314 = !{i64 8151}
!315 = !{i64 8279}
!316 = !{i64 8283}
!317 = !{i64 8290}
!318 = !{i64 8299}
!319 = !{i64 8304}
!320 = !{i64 8317}
!321 = !{i64 8333}
!322 = !{i64 8345}
!323 = !{i64 8355}
!324 = !{i64 8362}
!325 = !{i64 8370}
!326 = !{i64 8371}
!327 = !{i64 8382}
!328 = !{i64 8397}
!329 = !{i64 8405}
!330 = !{i64 8413}
!331 = !{i64 8415}
!332 = !{i64 8419}
!333 = !{i64 8421}
!334 = !{i64 8428}
!335 = !{i64 8430}
!336 = !{i64 8435}
!337 = !{i64 8437}
!338 = !{i64 8440}
!339 = !{i64 8443}
!340 = !{i64 8445}
!341 = !{i64 8447}
!342 = !{i64 8450}
!343 = !{i64 8458}
!344 = !{i64 8463}
!345 = !{i64 8475}
!346 = !{i64 8492}
!347 = !{i64 8500}
!348 = !{i64 8501}
!349 = !{i64 8508}
!350 = !{i64 8534}
!351 = !{i64 8542}
!352 = !{i64 8544}
!353 = !{i64 8548}
!354 = !{i64 8551}
!355 = !{i64 8556}
!356 = !{i64 8559}
!357 = !{i64 8561}
!358 = !{i64 8564}
!359 = !{i64 8566}
!360 = !{i64 8573}
!361 = !{i64 8581}
!362 = !{i64 8588}
!363 = !{i64 8594}
!364 = !{i64 8600}
!365 = !{i64 8604}
!366 = !{i64 8608}
!367 = !{i64 8614}
!368 = !{i64 8617}
!369 = !{i64 8619}
!370 = !{i64 8631}
!371 = !{i64 8640}
!372 = !{i64 8647}
!373 = !{i64 8651}
!374 = !{i64 8658}
!375 = !{i64 8663}
!376 = !{i64 8664}
!377 = !{i64 8676}
!378 = !{i64 8694}
!379 = !{i64 8701}
!380 = !{i64 8711}
!381 = !{i64 8713}
!382 = !{i64 8720}
!383 = !{i64 8728}
!384 = !{i64 8738}
!385 = !{i64 8740}
!386 = !{i64 8747}
!387 = !{i64 8750}
!388 = !{i64 8755}
!389 = !{i64 8763}
!390 = !{i64 8773}
!391 = !{i64 8782}
!392 = !{i64 8789}
!393 = !{i64 8797}
!394 = !{i64 8806}
!395 = !{i64 8817}
!396 = !{i64 8823}
!397 = !{i64 8824}
!398 = !{i64 8829}
!399 = !{i64 8838}
!400 = !{i64 8844}
!401 = !{i64 8847}
!402 = !{i64 8852}
!403 = !{i64 8861}
!404 = !{i64 8867}
!405 = !{i64 8870}
!406 = !{i64 8875}
!407 = !{i64 8884}
!408 = !{i64 8890}
!409 = !{i64 8893}
!410 = !{i64 8898}
!411 = !{i64 8907}
!412 = !{i64 8913}
!413 = !{i64 8916}
!414 = !{i64 8921}
!415 = !{i64 8930}
!416 = !{i64 8936}
!417 = !{i64 8939}
!418 = !{i64 8944}
!419 = !{i64 8953}
!420 = !{i64 8959}
!421 = !{i64 8962}
!422 = !{i64 8967}
!423 = !{i64 8976}
!424 = !{i64 8982}
!425 = !{i64 8985}
!426 = !{i64 8990}
!427 = !{i64 8999}
!428 = !{i64 9005}
!429 = !{i64 9008}
!430 = !{i64 9013}
!431 = !{i64 9022}
!432 = !{i64 9028}
!433 = !{i64 9031}
!434 = !{i64 9036}
!435 = !{i64 9045}
!436 = !{i64 9051}
!437 = !{i64 9054}
!438 = !{i64 9059}
!439 = !{i64 9068}
!440 = !{i64 9074}
!441 = !{i64 9077}
!442 = !{i64 9082}
!443 = !{i64 9091}
!444 = !{i64 9097}
!445 = !{i64 9100}
!446 = !{i64 9109}
!447 = !{i64 9110}
!448 = !{i64 9119}
!449 = !{i64 9138}
!450 = !{i64 9146}
!451 = !{i64 9148}
!452 = !{i64 9158}
!453 = !{i64 9163}
!454 = !{i64 9173}
!455 = !{i64 9174}
!456 = !{i64 9179}
!457 = !{i64 9181}
!458 = !{i64 9183}
!459 = !{i64 9192}
!460 = !{i64 9202}
!461 = !{i64 9209}
!462 = !{i64 9214}
!463 = !{i64 9217}
!464 = !{i64 9223}
!465 = !{i64 9232}
!466 = !{i64 9243}
!467 = !{i64 9264}
!468 = !{i64 9298}
!469 = !{i64 9305}
!470 = !{i64 9272}
!471 = !{i64 9311}
!472 = !{i64 9319}
!473 = !{i64 9331}
!474 = !{i64 9341}
!475 = !{i64 9348}
!476 = !{i64 9356}
!477 = !{i64 9357}
!478 = !{i64 9367}
!479 = !{i64 9386}
!480 = !{i64 9398}
!481 = !{i64 9403}
!482 = !{i64 9405}
!483 = !{i64 9407}
!484 = !{i64 9420}
!485 = !{i64 9435}
!486 = !{i64 9437}
!487 = !{i64 9439}
!488 = !{i64 9443}
!489 = !{i64 9446}
!490 = !{i64 9454}
!491 = !{i64 9461}
!492 = !{i64 9468}
!493 = !{i64 9476}
!494 = !{i64 9482}
!495 = !{i64 9494}
!496 = !{i64 9506}
!497 = !{i64 9518}
!498 = !{i64 9530}
!499 = !{i64 9537}
!500 = !{i64 9542}
!501 = !{i64 9550}
!502 = !{i64 9556}
!503 = !{i64 9557}
!504 = !{i64 9566}
!505 = !{i64 9577}
!506 = !{i64 9593}
!507 = !{i64 9594}
!508 = !{i64 9602}
!509 = !{i64 9604}
!510 = !{i64 9610}
!511 = !{i64 9615}
!512 = !{i64 9617}
!513 = !{i64 9623}
!514 = !{i64 9628}
!515 = !{i64 9632}
!516 = !{i64 9642}
!517 = !{i64 9653}
!518 = !{i64 9665}
!519 = !{i64 9670}
!520 = !{i64 9677}
!521 = !{i64 9689}
!522 = !{i64 9704}
!523 = !{i64 9708}
!524 = !{i64 9715}
!525 = !{i64 9723}
!526 = !{i64 9727}
!527 = !{i64 9732}
!528 = !{i64 9739}
!529 = !{i64 9759}
!530 = !{i64 9766}
!531 = !{i64 9773}
!532 = !{i64 9780}
!533 = !{i64 9795}
!534 = !{i64 9807}
!535 = !{i64 9815}
!536 = !{i64 9816}
!537 = !{i64 9825}
!538 = !{i64 9836}
!539 = !{i64 9854}
!540 = !{i64 9862}
!541 = !{i64 9864}
!542 = !{i64 9872}
!543 = !{i64 9895}
!544 = !{i64 9903}
!545 = !{i64 9905}
!546 = !{i64 9943}
!547 = !{i64 9957}
!548 = !{i64 9965}
!549 = !{i64 9967}
!550 = !{i64 9975}
!551 = !{i64 9983}
!552 = !{i64 10078}
!553 = !{i64 9859}
!554 = !{i64 10004}
!555 = !{i64 10008}
!556 = !{i64 10015}
!557 = !{i64 10022}
!558 = !{i64 10027}
!559 = !{i64 10040}
!560 = !{i64 10046}
!561 = !{i64 10059}
!562 = !{i64 10087}
!563 = !{i64 10099}
!564 = !{i64 10107}
!565 = !{i64 10108}
!566 = !{i64 10119}
!567 = !{i64 10137}
!568 = !{i64 10143}
!569 = !{i64 10144}
!570 = !{i64 10152}
!571 = !{i64 10154}
!572 = !{i64 10164}
!573 = !{i64 10181}
!574 = !{i64 10189}
!575 = !{i64 10191}
!576 = !{i64 10207}
!577 = !{i64 10217}
!578 = !{i64 10219}
!579 = !{i64 10229}
!580 = !{i64 10239}
!581 = !{i64 10242}
!582 = !{i64 10244}
!583 = !{i64 10250}
!584 = !{i64 10257}
!585 = !{i64 10264}
!586 = !{i64 10271}
!587 = !{i64 10272}
!588 = !{i64 10282}
!589 = !{i64 10295}
!590 = !{i64 10300}
!591 = !{i64 10312}
!592 = !{i64 10348}
!593 = !{i64 10365}
!594 = !{i64 10371}
!595 = !{i64 10372}
!596 = !{i64 10381}
!597 = !{i64 10392}
!598 = !{i64 10398}
!599 = !{i64 10401}
!600 = !{i64 10409}
!601 = !{i64 10412}
!602 = !{i64 10430}
!603 = !{i64 10438}
!604 = !{i64 10441}
!605 = !{i64 10406}
!606 = !{i64 10447}
!607 = !{i64 10462}
!608 = !{i64 10476}
!609 = !{i64 10478}
!610 = !{i64 10488}
!611 = !{i64 10493}
!612 = !{i64 10507}
!613 = !{i64 10509}
!614 = !{i64 10511}
!615 = !{i64 10514}
!616 = !{i64 10516}
!617 = !{i64 10522}
!618 = !{i64 10524}
!619 = !{i64 10530}
!620 = !{i64 10536}
!621 = !{i64 10539}
!622 = !{i64 10545}
!623 = !{i64 10558}
!624 = !{i64 10560}
!625 = !{i64 10574}
!626 = !{i64 10576}
!627 = !{i64 10586}
!628 = !{i64 10591}
!629 = !{i64 10605}
!630 = !{i64 10607}
!631 = !{i64 10609}
!632 = !{i64 10612}
!633 = !{i64 10614}
!634 = !{i64 10620}
!635 = !{i64 10622}
!636 = !{i64 10624}
!637 = !{i64 10630}
!638 = !{i64 10633}
!639 = !{i64 10638}
!640 = !{i64 10640}
!641 = !{i64 10642}
!642 = !{i64 10650}
!643 = !{i64 10652}
!644 = !{i64 10654}
!645 = !{i64 10662}
!646 = !{i64 10672}
!647 = !{i64 10722}
!648 = !{i64 10730}
!649 = !{i64 10739}
!650 = !{i64 10750}
!651 = !{i64 10756}
!652 = !{i64 10757}
!653 = !{i64 10762}
!654 = !{i64 10771}
!655 = !{i64 10777}
!656 = !{i64 10780}
!657 = !{i64 10785}
!658 = !{i64 10794}
!659 = !{i64 10800}
!660 = !{i64 10803}
!661 = !{i64 10808}
!662 = !{i64 10817}
!663 = !{i64 10823}
!664 = !{i64 10826}
!665 = !{i64 10831}
!666 = !{i64 10840}
!667 = !{i64 10846}
!668 = !{i64 10849}
!669 = !{i64 10854}
!670 = !{i64 10863}
!671 = !{i64 10869}
!672 = !{i64 10872}
!673 = !{i64 10877}
!674 = !{i64 10886}
!675 = !{i64 10892}
!676 = !{i64 10895}
!677 = !{i64 10900}
!678 = !{i64 10909}
!679 = !{i64 10915}
!680 = !{i64 10918}
!681 = !{i64 10927}
!682 = !{i64 10928}
!683 = !{i64 10937}
!684 = !{i64 10948}
!685 = !{i64 10964}
!686 = !{i64 10973}
!687 = !{i64 10979}
!688 = !{i64 10987}
!689 = !{i64 10995}
!690 = !{i64 10997}
!691 = !{i64 11007}
!692 = !{i64 11011}
!693 = !{i64 11016}
!694 = !{i64 11020}
!695 = !{i64 11025}
!696 = !{i64 11030}
!697 = !{i64 11037}
!698 = !{i64 11044}
!699 = !{i64 11053}
!700 = !{i64 11061}
!701 = !{i64 11075}
!702 = !{i64 11083}
!703 = !{i64 11084}
!704 = !{i64 11092}
!705 = !{i64 11095}
!706 = !{i64 11106}
!707 = !{i64 11118}
!708 = !{i64 11190}
!709 = !{i64 11198}
!710 = !{i64 11222}
!711 = !{i64 11223}
!712 = !{i64 11227}
!713 = !{i64 11229}
!714 = !{i64 11218}
!715 = !{i64 11230}
!716 = !{i64 11238}
!717 = !{i64 11240}
!718 = !{i64 11242}
!719 = !{i64 11245}
!720 = !{i64 11248}
!721 = !{i64 11252}
!722 = !{i64 11254}
!723 = !{i64 11258}
!724 = !{i64 11263}
!725 = !{i64 11265}
!726 = !{i64 11267}
!727 = !{i64 11275}
!728 = !{i64 11277}
!729 = !{i64 11279}
!730 = !{i64 11282}
!731 = !{i64 11285}
!732 = !{i64 11288}
!733 = !{i64 11292}
!734 = !{i64 11294}
!735 = !{i64 11298}
!736 = !{i64 11305}
!737 = !{i64 11316}
!738 = !{i64 11331}
!739 = !{i64 11343}
!740 = !{i64 11351}
!741 = !{i64 11352}
!742 = !{i64 11363}
!743 = !{i64 11378}
!744 = !{i64 11382}
!745 = !{i64 11394}
!746 = !{i64 11396}
!747 = !{i64 11391}
!748 = !{i64 11404}
!749 = !{i64 11419}
!750 = !{i64 11514}
!751 = !{i64 11529}
!752 = !{i64 11434}
!753 = !{i64 11444}
!754 = !{i64 11448}
!755 = !{i64 11449}
!756 = !{i64 11440}
!757 = !{i64 11451}
!758 = !{i64 11452}
!759 = !{i64 11460}
!760 = !{i64 11462}
!761 = !{i64 11464}
!762 = !{i64 11470}
!763 = !{i64 11474}
!764 = !{i64 11467}
!765 = !{i64 11476}
!766 = !{i64 11480}
!767 = !{i64 11485}
!768 = !{i64 11487}
!769 = !{i64 11490}
!770 = !{i64 11497}
!771 = !{i64 11503}
!772 = !{i64 11505}
!773 = !{i64 11507}
!774 = !{i64 11518}
!775 = !{i64 11523}
!776 = !{i64 11533}
!777 = !{i64 11541}
!778 = !{i64 11553}
!779 = !{i64 11563}
!780 = !{i64 11567}
!781 = !{i64 11571}
!782 = !{i64 11584}
!783 = !{i64 11607}
!784 = !{i64 11615}
!785 = !{i64 11616}
!786 = !{i64 11625}
!787 = !{i64 11636}
!788 = !{i64 11648}
!789 = !{i64 11658}
!790 = !{i64 11670}
!791 = !{i64 11676}
!792 = !{i64 11684}
!793 = !{i64 11692}
!794 = !{i64 11694}
!795 = !{i64 11698}
!796 = !{i64 11704}
!797 = !{i64 11712}
!798 = !{i64 11720}
!799 = !{i64 11722}
!800 = !{i64 11736}
!801 = !{i64 11746}
!802 = !{i64 11750}
!803 = !{i64 11755}
!804 = !{i64 11759}
!805 = !{i64 11764}
!806 = !{i64 11769}
!807 = !{i64 11776}
!808 = !{i64 11783}
!809 = !{i64 11792}
!810 = !{i64 11800}
!811 = !{i64 11813}
!812 = !{i64 11822}
!813 = !{i64 11834}
!814 = !{i64 11842}
!815 = !{i64 11843}
!816 = !{i64 11854}
!817 = !{i64 11865}
!818 = !{i64 11881}
!819 = !{i64 11885}
!820 = !{i64 11894}
!821 = !{i64 11897}
!822 = !{i64 11899}
!823 = !{i64 11912}
!824 = !{i64 11923}
!825 = !{i64 11942}
!826 = !{i64 11948}
!827 = !{i64 11952}
!828 = !{i64 11953}
!829 = !{i64 11955}
!830 = !{i64 11956}
!831 = !{i64 11964}
!832 = !{i64 11966}
!833 = !{i64 11972}
!834 = !{i64 11975}
!835 = !{i64 11978}
!836 = !{i64 11982}
!837 = !{i64 11986}
!838 = !{i64 11988}
!839 = !{i64 11994}
!840 = !{i64 11995}
!841 = !{i64 11997}
!842 = !{i64 12001}
!843 = !{i64 12002}
!844 = !{i64 12010}
!845 = !{i64 12012}
!846 = !{i64 12029}
!847 = !{i64 12031}
!848 = !{i64 12034}
!849 = !{i64 12039}
!850 = !{i64 12047}
!851 = !{i64 12049}
!852 = !{i64 12058}
!853 = !{i64 12062}
!854 = !{i64 12082}
!855 = !{i64 12085}
!856 = !{i64 12089}
!857 = !{i64 12096}
!858 = !{i64 12105}
!859 = !{i64 12109}
!860 = !{i64 12113}
!861 = !{i64 12126}
!862 = !{i64 12137}
!863 = !{i64 12143}
!864 = !{i64 12151}
!865 = !{i64 12159}
!866 = !{i64 12161}
!867 = !{i64 12168}
!868 = !{i64 12172}
!869 = !{i64 12180}
!870 = !{i64 12188}
!871 = !{i64 12190}
!872 = !{i64 12194}
!873 = !{i64 12210}
!874 = !{i64 12215}
!875 = !{i64 12234}
!876 = !{i64 12242}
!877 = !{i64 12243}
!878 = !{i64 12254}
!879 = !{i64 12265}
!880 = !{i64 12281}
!881 = !{i64 12289}
!882 = !{i64 12303}
!883 = !{i64 12308}
!884 = !{i64 12311}
!885 = !{i64 12321}
!886 = !{i64 12313}
!887 = !{i64 12334}
!888 = !{i64 12564}
!889 = !{i64 12573}
!890 = !{i64 12582}
!891 = !{i64 12345}
!892 = !{i64 12354}
!893 = !{i64 12356}
!894 = !{i64 12361}
!895 = !{i64 12367}
!896 = !{i64 12368}
!897 = !{i64 12369}
!898 = !{i64 12371}
!899 = !{i64 12373}
!900 = !{i64 12375}
!901 = !{i64 12376}
!902 = !{i64 12383}
!903 = !{i64 12389}
!904 = !{i64 12393}
!905 = !{i64 12395}
!906 = !{i64 12399}
!907 = !{i64 12408}
!908 = !{i64 12414}
!909 = !{i64 12422}
!910 = !{i64 12426}
!911 = !{i64 12429}
!912 = !{i64 12418}
!913 = !{i64 12455}
!914 = !{i64 12452}
!915 = !{i64 12420}
!916 = !{i64 12433}
!917 = !{i64 12435}
!918 = !{i64 12436}
!919 = !{i64 12444}
!920 = !{i64 12446}
!921 = !{i64 12458}
!922 = !{i64 12462}
!923 = !{i64 12468}
!924 = !{i64 12472}
!925 = !{i64 12476}
!926 = !{i64 12480}
!927 = !{i64 12482}
!928 = !{i64 12489}
!929 = !{i64 12493}
!930 = !{i64 12497}
!931 = !{i64 12500}
!932 = !{i64 12505}
!933 = !{i64 12509}
!934 = !{i64 12511}
!935 = !{i64 12514}
!936 = !{i64 12517}
!937 = !{i64 12525}
!938 = !{i64 12529}
!939 = !{i64 12532}
!940 = !{i64 12537}
!941 = !{i64 12543}
!942 = !{i64 12547}
!943 = !{i64 12551}
!944 = !{i64 12557}
!945 = !{i64 12565}
!946 = !{i64 12577}
!947 = !{i64 12590}
!948 = !{i64 12592}
!949 = !{i64 12594}
!950 = !{i64 12602}
!951 = !{i64 12604}
!952 = !{i64 12611}
!953 = !{i64 12615}
!954 = !{i64 12622}
!955 = !{i64 12631}
!956 = !{i64 12632}
!957 = !{i64 12634}
!958 = !{i64 12638}
!959 = !{i64 12642}
!960 = !{i64 12649}
!961 = !{i64 12651}
!962 = !{i64 12656}
!963 = !{i64 12662}
!964 = !{i64 12664}
!965 = !{i64 12669}
!966 = !{i64 12670}
!967 = !{i64 12678}
!968 = !{i64 12682}
!969 = !{i64 12695}
!970 = !{i64 12717}
!971 = !{i64 12726}
!972 = !{i64 12740}
!973 = !{i64 12748}
!974 = !{i64 12757}
!975 = !{i64 12768}
!976 = !{i64 12774}
!977 = !{i64 12775}
!978 = !{i64 12780}
!979 = !{i64 12789}
!980 = !{i64 12795}
!981 = !{i64 12798}
!982 = !{i64 12803}
!983 = !{i64 12812}
!984 = !{i64 12818}
!985 = !{i64 12821}
!986 = !{i64 12826}
!987 = !{i64 12835}
!988 = !{i64 12841}
!989 = !{i64 12844}
!990 = !{i64 12849}
!991 = !{i64 12858}
!992 = !{i64 12864}
!993 = !{i64 12867}
!994 = !{i64 12872}
!995 = !{i64 12881}
!996 = !{i64 12887}
!997 = !{i64 12890}
!998 = !{i64 12895}
!999 = !{i64 12904}
!1000 = !{i64 12910}
!1001 = !{i64 12913}
!1002 = !{i64 12922}
!1003 = !{i64 12933}
!1004 = !{i64 12938}
!1005 = !{i64 12943}
!1006 = !{i64 12954}
!1007 = !{i64 12958}
!1008 = !{i64 12962}
!1009 = !{i64 12966}
!1010 = !{i64 12981}
!1011 = !{i64 12995}
!1012 = !{i64 13006}
!1013 = !{i64 13008}
!1014 = !{i64 13012}
!1015 = !{i64 13023}
!1016 = !{i64 13029}
!1017 = !{i64 13032}
!1018 = !{i64 13058}
!1019 = !{i64 13064}
!1020 = !{i64 13067}
!1021 = !{i64 13073}
!1022 = !{i64 13092}
!1023 = !{i64 13103}
!1024 = !{i64 13112}
