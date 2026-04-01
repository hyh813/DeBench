source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

@global_var_19a6 = local_unnamed_addr constant i32 -788529082
@global_var_1a21 = local_unnamed_addr constant i32 83886091
@global_var_1cfd = local_unnamed_addr constant i32 0
@global_var_130c = local_unnamed_addr constant i32 1778384972
@global_var_132e = local_unnamed_addr constant i32 5021189
@global_var_1372 = local_unnamed_addr constant i32 1778384972
@global_var_3f7a = local_unnamed_addr constant i32 67374277
@global_var_3f5f = local_unnamed_addr constant i32 7168
@global_var_3f34 = local_unnamed_addr constant i32 222429829
@global_var_3f18 = local_unnamed_addr constant i32 214269701
@global_var_3ebd = local_unnamed_addr constant i32 469762052
@global_var_3e88 = local_unnamed_addr constant i32 -7029
@global_var_3e3e = local_unnamed_addr constant i32 1835008
@global_var_3d7d = local_unnamed_addr constant i32 469763076
@global_var_3d35 = local_unnamed_addr constant i32 84754946
@global_var_404 = global i32 262144
@global_var_3d1c = local_unnamed_addr constant i32* @global_var_404
@global_var_3d04 = constant i32 1720
@global_var_3cda = local_unnamed_addr constant i32 2097152
@global_var_3cad = constant i32 -2063069627
@global_var_3c83 = local_unnamed_addr constant i32 -1984768
@global_var_3c5e = local_unnamed_addr constant i32 101974016
@global_var_3c33 = local_unnamed_addr constant i32 1291977997
@global_var_3bf6 = local_unnamed_addr constant i32 67374277
@global_var_3bac = local_unnamed_addr constant i32 135152896
@global_var_3b68 = local_unnamed_addr constant i32 43
@global_var_3b43 = local_unnamed_addr constant i32 -2061824
@global_var_3aff = constant i32 308224
@global_var_39fa = local_unnamed_addr constant i32 61865984
@global_var_39c2 = local_unnamed_addr constant i32 67374277
@global_var_39a3 = constant i32 67374277
@global_var_3953 = local_unnamed_addr constant i32 239403008
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

define void @function_1090(i32* %d) local_unnamed_addr {
dec_label_pc_1090:
  call void @__cxa_finalize(i32* %d), !insn.addr !4
  ret void, !insn.addr !4
}

define i32 @function_10a0(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_10a0:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define i32 @function_10b0(i8* %format, ...) local_unnamed_addr {
dec_label_pc_10b0:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define void @function_10c0() local_unnamed_addr {
dec_label_pc_10c0:
  call void @__stack_chk_fail(), !insn.addr !7
  ret void, !insn.addr !7
}

define i32 @function_10d0(i8* %s) local_unnamed_addr {
dec_label_pc_10d0:
  %0 = call i32 @puts(i8* %s), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i32 @function_10e0(i8* %s) local_unnamed_addr {
dec_label_pc_10e0:
  %0 = call i32 @strlen(i8* %s), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @_start(i32 %arg1) local_unnamed_addr {
dec_label_pc_10f0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_4 = alloca i32, align 4
  %3 = call i32 @function_111c(i32 %2), !insn.addr !10
  %4 = bitcast i32* %stack_var_4 to i8**
  %5 = add i32 %1, 20212, !insn.addr !11
  %6 = inttoptr i32 %5 to i32*, !insn.addr !11
  %7 = load i32, i32* %6, align 4, !insn.addr !11
  %8 = call i32 @__libc_start_main(i32 %7, i32 %arg1, i8** nonnull %4, void ()* null, void ()* null, void ()* bitcast (i32* @0 to void ()*)), !insn.addr !12
  %9 = call i32 @__asm_hlt(), !insn.addr !13
  unreachable, !insn.addr !13

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @function_111c(i32 %arg1) local_unnamed_addr {
dec_label_pc_111c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !14
}

define i32 @__x86.get_pc_thunk.bx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1120:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !15
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1130:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !16
  %3 = add i32 %1, 20195, !insn.addr !17
  ret i32 %3, !insn.addr !18
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1170:
  %0 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !19
  ret i32 0, !insn.addr !20
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_11c0:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !21
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.di(i32 %1), !insn.addr !22
  %3 = add i32 %1, 20043, !insn.addr !23
  %4 = inttoptr i32 %3 to i8*, !insn.addr !23
  %5 = load i8, i8* %4, align 1, !insn.addr !23
  %6 = icmp eq i8 %5, 0, !insn.addr !23
  %7 = icmp eq i1 %6, false, !insn.addr !24
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !24
  br i1 %7, label %dec_label_pc_1242, label %dec_label_pc_11e1, !insn.addr !24

dec_label_pc_11e1:                                ; preds = %dec_label_pc_11c0
  %8 = add i32 %1, 20003, !insn.addr !25
  %9 = inttoptr i32 %8 to i32*, !insn.addr !25
  %10 = load i32, i32* %9, align 4, !insn.addr !25
  %11 = icmp eq i32 %10, 0, !insn.addr !26
  br i1 %11, label %dec_label_pc_11fe, label %dec_label_pc_11eb, !insn.addr !27

dec_label_pc_11eb:                                ; preds = %dec_label_pc_11e1
  %12 = add i32 %1, 20023, !insn.addr !28
  %13 = inttoptr i32 %12 to i32*, !insn.addr !28
  %14 = load i32, i32* %13, align 4, !insn.addr !28
  %15 = inttoptr i32 %14 to i32*, !insn.addr !29
  call void @__cxa_finalize(i32* %15), !insn.addr !29
  br label %dec_label_pc_11fe, !insn.addr !30

dec_label_pc_11fe:                                ; preds = %dec_label_pc_11eb, %dec_label_pc_11e1
  %16 = call i32 @deregister_tm_clones(), !insn.addr !31
  store i8 1, i8* %4, align 1, !insn.addr !32
  store i32 %16, i32* %eax.0.reg2mem, !insn.addr !32
  br label %dec_label_pc_1242, !insn.addr !32

dec_label_pc_1242:                                ; preds = %dec_label_pc_11fe, %dec_label_pc_11c0
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !33

; uselistorder directives
  uselistorder i32 %1, { 3, 2, 0, 1 }
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_1250:
  %0 = call i32 @register_tm_clones(), !insn.addr !34
  ret i32 %0, !insn.addr !34
}

define i32 @__x86.get_pc_thunk.dx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1259:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !35
}

define i32 @__x86.get_pc_thunk.di(i32 %arg1) local_unnamed_addr {
dec_label_pc_125d:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !36
}

define i32 @cdecl_func(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_1261:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !37
  %3 = add i32 %b, %a, !insn.addr !38
  ret i32 %3, !insn.addr !39
}

define i32 @call_cdecl() local_unnamed_addr {
dec_label_pc_127c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !40
  %3 = call i32 @cdecl_func(i32 5, i32 10), !insn.addr !41
  ret i32 %3, !insn.addr !42
}

define i32 @stdcall_func(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_129b:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !43
  %3 = mul i32 %b, %a, !insn.addr !44
  ret i32 %3, !insn.addr !45
}

define i32 @call_stdcall() local_unnamed_addr {
dec_label_pc_12b7:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !46
  %3 = call i32 @stdcall_func(i32 5, i32 10), !insn.addr !47
  ret i32 %3, !insn.addr !48
}

define i32 @fastcall_func(i32 %a, i32 %b, i32 %c) local_unnamed_addr {
dec_label_pc_12d3:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !49
  %5 = add i32 %2, %a, !insn.addr !50
  %6 = add i32 %5, %3, !insn.addr !51
  ret i32 %6, !insn.addr !52

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
}

define i32 @call_fastcall() local_unnamed_addr {
dec_label_pc_12fe:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !53
  %3 = call i32 @fastcall_func(i32 3, i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !54
  ret i32 %3, !insn.addr !55
}

define i32 @call_thiscall() local_unnamed_addr {
dec_label_pc_1322:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !56
  ret i32 15, !insn.addr !57
}

define i32 @arm_aapcs_func(i32 %a, i32 %b, i32 %c, i32 %d, i32 %e) local_unnamed_addr {
dec_label_pc_133a:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !58
  %3 = add i32 %b, %a, !insn.addr !59
  %4 = add i32 %3, %c, !insn.addr !60
  %5 = add i32 %4, %d, !insn.addr !61
  %6 = add i32 %5, %e, !insn.addr !62
  ret i32 %6, !insn.addr !63
}

define i32 @call_arm_aapcs() local_unnamed_addr {
dec_label_pc_1364:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !64
  %3 = call i32 @arm_aapcs_func(i32 1, i32 2, i32 3, i32 4, i32 5), !insn.addr !65
  ret i32 %3, !insn.addr !66
}

define i32 @mips_func(i32 %a, i32 %b, i32 %c, i32 %d) local_unnamed_addr {
dec_label_pc_1389:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !67
  %3 = add i32 %b, %a, !insn.addr !68
  %4 = add i32 %3, %c, !insn.addr !69
  %5 = add i32 %4, %d, !insn.addr !70
  ret i32 %5, !insn.addr !71
}

define i32 @call_mips() local_unnamed_addr {
dec_label_pc_13ae:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !72
  %3 = call i32 @mips_func(i32 10, i32 20, i32 30, i32 40), !insn.addr !73
  ret i32 %3, !insn.addr !74
}

define i32 @amd64_sysv_func(i32 %a, i32 %b, i32 %c, i32 %d, i32 %e, i32 %f) local_unnamed_addr {
dec_label_pc_13d1:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !75
  %3 = add i32 %b, %a, !insn.addr !76
  %4 = add i32 %3, %c, !insn.addr !77
  %5 = add i32 %4, %d, !insn.addr !78
  %6 = add i32 %5, %e, !insn.addr !79
  %7 = add i32 %6, %f, !insn.addr !80
  ret i32 %7, !insn.addr !81
}

define i32 @call_amd64_sysv() local_unnamed_addr {
dec_label_pc_1400:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !82
  %3 = call i32 @amd64_sysv_func(i32 1, i32 2, i32 3, i32 4, i32 5, i32 6), !insn.addr !83
  ret i32 %3, !insn.addr !84
}

define i32 @ms_x64_func(i32 %a, i32 %b, i32 %c, i32 %d, i32 %e) local_unnamed_addr {
dec_label_pc_1427:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !85
  %3 = add i32 %b, %a, !insn.addr !86
  %4 = add i32 %3, %c, !insn.addr !87
  %5 = add i32 %4, %d, !insn.addr !88
  %6 = add i32 %5, %e, !insn.addr !89
  ret i32 %6, !insn.addr !90
}

define i32 @call_ms_x64() local_unnamed_addr {
dec_label_pc_1451:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !91
  %3 = call i32 @ms_x64_func(i32 1, i32 2, i32 3, i32 4, i32 5), !insn.addr !92
  ret i32 %3, !insn.addr !93
}

define i32 @vectorcall_func(i32 %a, i32 %b, i32 %c, i32 %d) local_unnamed_addr {
dec_label_pc_1476:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !94
  %3 = add i32 %b, %a, !insn.addr !95
  %4 = add i32 %3, %c, !insn.addr !96
  %5 = add i32 %4, %d, !insn.addr !97
  ret i32 %5, !insn.addr !98
}

define i32 @call_vectorcall() local_unnamed_addr {
dec_label_pc_149b:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !99
  %3 = call i32 @vectorcall_func(i32 1, i32 2, i32 3, i32 4), !insn.addr !100
  ret i32 %3, !insn.addr !101
}

define i32 @mixed_conventions_test() local_unnamed_addr {
dec_label_pc_14be:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !102
  %3 = call i32 @cdecl_func(i32 1, i32 2), !insn.addr !103
  %4 = call i32 @stdcall_func(i32 3, i32 4), !insn.addr !104
  %5 = add i32 %4, %3, !insn.addr !105
  %6 = call i32 @fastcall_func(i32 7, i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !106
  %7 = add i32 %5, %6, !insn.addr !107
  ret i32 %7, !insn.addr !108

; uselistorder directives
  uselistorder i32 (i32, i32, i32)* @fastcall_func, { 1, 0 }
  uselistorder i32 (i32, i32)* @stdcall_func, { 1, 0 }
  uselistorder i32 (i32, i32)* @cdecl_func, { 1, 0 }
}

define i32 @varargs_func(i32 %count, ...) local_unnamed_addr {
dec_label_pc_150d:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !109
  %stack_var_-24.0.lcssa.reg2mem = alloca i32, !insn.addr !109
  %stack_var_-24.01.reg2mem = alloca i32, !insn.addr !109
  %sum_-28.02.reg2mem = alloca i32, !insn.addr !109
  %storemerge3.reg2mem = alloca i32, !insn.addr !109
  %1 = load i32, i32* %0
  %stack_var_8 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !110
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !111
  %4 = icmp sgt i32 %count, 0, !insn.addr !112
  store i32 0, i32* %stack_var_-24.0.lcssa.reg2mem, !insn.addr !112
  br i1 %4, label %dec_label_pc_1542.lr.ph, label %dec_label_pc_155c, !insn.addr !112

dec_label_pc_1542.lr.ph:                          ; preds = %dec_label_pc_150d
  %5 = ptrtoint i32* %stack_var_8 to i32, !insn.addr !113
  store i32 0, i32* %storemerge3.reg2mem
  store i32 %5, i32* %sum_-28.02.reg2mem
  store i32 0, i32* %stack_var_-24.01.reg2mem
  br label %dec_label_pc_1542

dec_label_pc_1542:                                ; preds = %dec_label_pc_1542, %dec_label_pc_1542.lr.ph
  %stack_var_-24.01.reload = load i32, i32* %stack_var_-24.01.reg2mem
  %sum_-28.02.reload = load i32, i32* %sum_-28.02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %6 = add i32 %sum_-28.02.reload, 4, !insn.addr !114
  %7 = inttoptr i32 %sum_-28.02.reload to i32*, !insn.addr !115
  %8 = load i32, i32* %7, align 4, !insn.addr !115
  %9 = add i32 %8, %stack_var_-24.01.reload, !insn.addr !116
  %10 = add nuw nsw i32 %storemerge3.reload, 1, !insn.addr !117
  %exitcond = icmp eq i32 %10, %count
  store i32 %10, i32* %storemerge3.reg2mem, !insn.addr !112
  store i32 %6, i32* %sum_-28.02.reg2mem, !insn.addr !112
  store i32 %9, i32* %stack_var_-24.01.reg2mem, !insn.addr !112
  store i32 %9, i32* %stack_var_-24.0.lcssa.reg2mem, !insn.addr !112
  br i1 %exitcond, label %dec_label_pc_155c, label %dec_label_pc_1542, !insn.addr !112

dec_label_pc_155c:                                ; preds = %dec_label_pc_1542, %dec_label_pc_150d
  %stack_var_-24.0.lcssa.reload = load i32, i32* %stack_var_-24.0.lcssa.reg2mem
  %11 = call i32 @__readgsdword(i32 20), !insn.addr !118
  %12 = icmp eq i32 %3, %11, !insn.addr !118
  store i32 %stack_var_-24.0.lcssa.reload, i32* %eax.0.reg2mem, !insn.addr !119
  br i1 %12, label %dec_label_pc_1570, label %dec_label_pc_156b, !insn.addr !119

dec_label_pc_156b:                                ; preds = %dec_label_pc_155c
  %13 = call i32 @__stack_chk_fail_local(), !insn.addr !120
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !120
  br label %dec_label_pc_1570, !insn.addr !120

dec_label_pc_1570:                                ; preds = %dec_label_pc_156b, %dec_label_pc_155c
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !121

; uselistorder directives
  uselistorder i32* %storemerge3.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-28.02.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-24.01.reg2mem, { 1, 0, 2 }
}

define i32 @func_no_args() local_unnamed_addr {
dec_label_pc_1572:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !122
  ret i32 42, !insn.addr !123
}

define i32 @func_many_args(i32 %a, i32 %b, i32 %c, i32 %d, i32 %e, i32 %f, i32 %g, i32 %h) local_unnamed_addr {
dec_label_pc_158a:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !124
  %3 = add i32 %b, %a, !insn.addr !125
  %4 = add i32 %3, %c, !insn.addr !126
  %5 = add i32 %4, %d, !insn.addr !127
  %6 = add i32 %5, %e, !insn.addr !128
  %7 = add i32 %6, %f, !insn.addr !129
  %8 = add i32 %7, %g, !insn.addr !130
  %9 = add i32 %8, %h, !insn.addr !131
  ret i32 %9, !insn.addr !132
}

define i32 @func_mixed_args(i32 %x, i8* %s, double %d, i64 %ll) local_unnamed_addr {
dec_label_pc_15c3:
  %0 = alloca i32
  %1 = alloca x86_fp80
  %2 = load i32, i32* %0
  %3 = load x86_fp80, x86_fp80* %1
  %4 = load i32, i32* %0
  %5 = call i32 @__x86.get_pc_thunk.ax(i32 %2), !insn.addr !133
  %6 = icmp eq i8* %s, null, !insn.addr !134
  br i1 %6, label %dec_label_pc_160d, label %dec_label_pc_15f6, !insn.addr !135

dec_label_pc_15f6:                                ; preds = %dec_label_pc_15c3
  %7 = call i32 @strlen(i8* nonnull %s), !insn.addr !136
  br label %dec_label_pc_160d, !insn.addr !137

dec_label_pc_160d:                                ; preds = %dec_label_pc_15c3, %dec_label_pc_15f6
  %8 = sitofp i32 %4 to x86_fp80, !insn.addr !138
  %9 = fadd x86_fp80 %3, %8, !insn.addr !139
  %10 = fptosi x86_fp80 %9 to i32, !insn.addr !140
  ret i32 %10, !insn.addr !141

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
  uselistorder label %dec_label_pc_160d, { 1, 0 }
}

define i32 @func_struct_byval(i32 %s) local_unnamed_addr {
dec_label_pc_1645:
  %0 = alloca i32
  %stack_var_-12.01.reg2mem = alloca i32, !insn.addr !142
  %storemerge.off03.reg2mem = alloca i32, !insn.addr !142
  %1 = load i32, i32* %0
  %stack_var_-4 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !143
  %3 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !144
  %4 = add i32 %2, 8, !insn.addr !145
  store i32 0, i32* %storemerge.off03.reg2mem
  store i32 0, i32* %stack_var_-12.01.reg2mem
  br label %dec_label_pc_1670

dec_label_pc_1670:                                ; preds = %dec_label_pc_1670, %dec_label_pc_1645
  %stack_var_-12.01.reload = load i32, i32* %stack_var_-12.01.reg2mem
  %storemerge.off03.reload = load i32, i32* %storemerge.off03.reg2mem
  %5 = mul i32 %storemerge.off03.reload, 8, !insn.addr !146
  %6 = add i32 %4, %5, !insn.addr !145
  %7 = inttoptr i32 %6 to i32*, !insn.addr !145
  %8 = load i32, i32* %7, align 4, !insn.addr !145
  %9 = add i32 %8, %stack_var_-12.01.reload, !insn.addr !147
  %10 = add nuw nsw i32 %storemerge.off03.reload, 1, !insn.addr !148
  %exitcond = icmp eq i32 %10, 16
  store i32 %10, i32* %storemerge.off03.reg2mem, !insn.addr !149
  store i32 %9, i32* %stack_var_-12.01.reg2mem, !insn.addr !149
  br i1 %exitcond, label %dec_label_pc_168b, label %dec_label_pc_1670, !insn.addr !149

dec_label_pc_168b:                                ; preds = %dec_label_pc_1670
  ret i32 %9, !insn.addr !150

; uselistorder directives
  uselistorder i32 %9, { 1, 0 }
  uselistorder i32* %storemerge.off03.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-12.01.reg2mem, { 1, 0, 2 }
}

define i32 @func_struct_byptr(i32* %p) local_unnamed_addr {
dec_label_pc_1690:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !151
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !152
  %3 = icmp eq i32* %p, null, !insn.addr !153
  %4 = icmp eq i1 %3, false, !insn.addr !154
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !154
  br i1 %4, label %dec_label_pc_16ae, label %dec_label_pc_16bc, !insn.addr !154

dec_label_pc_16ae:                                ; preds = %dec_label_pc_1690
  %5 = ptrtoint i32* %p to i32
  %6 = load i32, i32* %p, align 4, !insn.addr !155
  %7 = add i32 %5, 4, !insn.addr !156
  %8 = inttoptr i32 %7 to i32*, !insn.addr !156
  %9 = load i32, i32* %8, align 4, !insn.addr !156
  %10 = mul i32 %9, %6, !insn.addr !157
  store i32 %10, i32* %storemerge.reg2mem, !insn.addr !157
  br label %dec_label_pc_16bc, !insn.addr !157

dec_label_pc_16bc:                                ; preds = %dec_label_pc_1690, %dec_label_pc_16ae
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !158

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32* %p, { 0, 2, 1 }
  uselistorder label %dec_label_pc_16bc, { 1, 0 }
}

define void @test_calling_conventions() local_unnamed_addr {
dec_label_pc_16be:
  %0 = alloca i32
  %storemerge4.reg2mem = alloca i32, !insn.addr !159
  %1 = load i32, i32* %0
  %large_-168 = alloca i32, align 4
  %stack_var_-160 = alloca i32, align 4
  %stack_var_-332 = alloca i32, align 4
  %stack_var_-4 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !160
  %3 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !161
  %4 = call i32 @__readgsdword(i32 20), !insn.addr !162
  %5 = add i32 %1, 6453, !insn.addr !163
  %6 = inttoptr i32 %5 to i8*, !insn.addr !164
  %7 = call i32 @puts(i8* %6), !insn.addr !165
  %8 = call i32 @call_cdecl(), !insn.addr !166
  %9 = add i32 %1, 6486, !insn.addr !167
  %10 = inttoptr i32 %9 to i8*, !insn.addr !168
  %11 = call i32 (i8*, ...) @printf(i8* %10), !insn.addr !169
  %12 = call i32 @call_stdcall(), !insn.addr !170
  %13 = add i32 %1, 6502, !insn.addr !171
  %14 = inttoptr i32 %13 to i8*, !insn.addr !172
  %15 = call i32 (i8*, ...) @printf(i8* %14), !insn.addr !173
  %16 = call i32 @call_fastcall(), !insn.addr !174
  %17 = add i32 %1, 6518, !insn.addr !175
  %18 = inttoptr i32 %17 to i8*, !insn.addr !176
  %19 = call i32 (i8*, ...) @printf(i8* %18), !insn.addr !177
  %20 = call i32 @call_thiscall(), !insn.addr !178
  %21 = add i32 %1, 6534, !insn.addr !179
  %22 = inttoptr i32 %21 to i8*, !insn.addr !180
  %23 = call i32 (i8*, ...) @printf(i8* %22), !insn.addr !181
  %24 = call i32 @call_arm_aapcs(), !insn.addr !182
  %25 = add i32 %1, 6550, !insn.addr !183
  %26 = inttoptr i32 %25 to i8*, !insn.addr !184
  %27 = call i32 (i8*, ...) @printf(i8* %26), !insn.addr !185
  %28 = call i32 @call_mips(), !insn.addr !186
  %29 = add i32 %1, 6566, !insn.addr !187
  %30 = inttoptr i32 %29 to i8*, !insn.addr !188
  %31 = call i32 (i8*, ...) @printf(i8* %30), !insn.addr !189
  %32 = call i32 @call_amd64_sysv(), !insn.addr !190
  %33 = add i32 %1, 6582, !insn.addr !191
  %34 = inttoptr i32 %33 to i8*, !insn.addr !192
  %35 = call i32 (i8*, ...) @printf(i8* %34), !insn.addr !193
  %36 = call i32 @call_ms_x64(), !insn.addr !194
  %37 = add i32 %1, 6598, !insn.addr !195
  %38 = inttoptr i32 %37 to i8*, !insn.addr !196
  %39 = call i32 (i8*, ...) @printf(i8* %38), !insn.addr !197
  %40 = call i32 @call_vectorcall(), !insn.addr !198
  %41 = add i32 %1, 6614, !insn.addr !199
  %42 = inttoptr i32 %41 to i8*, !insn.addr !200
  %43 = call i32 (i8*, ...) @printf(i8* %42), !insn.addr !201
  %44 = call i32 @mixed_conventions_test(), !insn.addr !202
  %45 = add i32 %1, 6630, !insn.addr !203
  %46 = inttoptr i32 %45 to i8*, !insn.addr !204
  %47 = call i32 (i8*, ...) @printf(i8* %46), !insn.addr !205
  %48 = call i32 (i32, ...) @varargs_func(i32 5), !insn.addr !206
  %49 = add i32 %1, 6649, !insn.addr !207
  %50 = inttoptr i32 %49 to i8*, !insn.addr !208
  %51 = call i32 (i8*, ...) @printf(i8* %50), !insn.addr !209
  %52 = call i32 @func_no_args(), !insn.addr !210
  %53 = add i32 %1, 6689, !insn.addr !211
  %54 = inttoptr i32 %53 to i8*, !insn.addr !212
  %55 = call i32 (i8*, ...) @printf(i8* %54), !insn.addr !213
  %56 = call i32 @func_many_args(i32 1, i32 2, i32 0, i32 4, i32 5, i32 6, i32 7, i32 8), !insn.addr !214
  %57 = add i32 %1, 6725, !insn.addr !215
  %58 = inttoptr i32 %57 to i8*, !insn.addr !216
  %59 = call i32 (i8*, ...) @printf(i8* %58), !insn.addr !217
  %60 = add i32 %1, 6764, !insn.addr !218
  %61 = add i32 %1, 7421, !insn.addr !219
  %62 = inttoptr i32 %61 to double*, !insn.addr !219
  %63 = load double, double* %62, align 4, !insn.addr !219
  %64 = inttoptr i32 %60 to i8*, !insn.addr !220
  %65 = call i32 @func_mixed_args(i32 10, i8* %64, double %63, i64 100), !insn.addr !221
  %66 = add i32 %1, 6769, !insn.addr !222
  %67 = inttoptr i32 %66 to i8*, !insn.addr !223
  %68 = call i32 (i8*, ...) @printf(i8* %67), !insn.addr !224
  store i32 0, i32* %storemerge4.reg2mem
  br label %dec_label_pc_18ce

dec_label_pc_18ce:                                ; preds = %dec_label_pc_18ce, %dec_label_pc_16be
  %storemerge4.reload = load i32, i32* %storemerge4.reg2mem
  %69 = add nuw nsw i32 %storemerge4.reload, 1, !insn.addr !225
  %70 = mul i32 %storemerge4.reload, 8, !insn.addr !226
  %71 = add i32 %70, %2
  %72 = add i32 %71, -156, !insn.addr !226
  %73 = inttoptr i32 %72 to i32*, !insn.addr !226
  store i32 %69, i32* %73, align 4, !insn.addr !226
  %74 = add i32 %71, -152, !insn.addr !227
  %75 = inttoptr i32 %74 to i32*, !insn.addr !227
  store i32 0, i32* %75, align 4, !insn.addr !227
  %exitcond = icmp eq i32 %69, 16
  store i32 %69, i32* %storemerge4.reg2mem, !insn.addr !228
  br i1 %exitcond, label %dec_label_pc_18fc, label %dec_label_pc_18ce, !insn.addr !228

dec_label_pc_18fc:                                ; preds = %dec_label_pc_18ce
  %76 = bitcast i32* %stack_var_-160 to i8*, !insn.addr !229
  %77 = bitcast i32* %stack_var_-332 to i8*, !insn.addr !229
  call void @__asm_rep_movsd_memcpy(i8* nonnull %77, i8* nonnull %76, i32 32), !insn.addr !229
  %78 = call i32 @func_struct_byval(i32 ptrtoint (i32* @0 to i32)), !insn.addr !230
  %79 = add i32 %1, 6809, !insn.addr !231
  %80 = inttoptr i32 %79 to i8*, !insn.addr !232
  %81 = call i32 (i8*, ...) @printf(i8* %80), !insn.addr !233
  store i32 5, i32* %large_-168, align 4, !insn.addr !234
  %82 = call i32 @func_struct_byptr(i32* nonnull %large_-168), !insn.addr !235
  %83 = add i32 %1, 6853, !insn.addr !236
  %84 = inttoptr i32 %83 to i8*, !insn.addr !237
  %85 = call i32 (i8*, ...) @printf(i8* %84), !insn.addr !238
  %86 = call i32 @__readgsdword(i32 20), !insn.addr !239
  %87 = icmp eq i32 %4, %86, !insn.addr !239
  br i1 %87, label %dec_label_pc_1990, label %dec_label_pc_198b, !insn.addr !240

dec_label_pc_198b:                                ; preds = %dec_label_pc_18fc
  %88 = call i32 @__stack_chk_fail_local(), !insn.addr !241
  br label %dec_label_pc_1990, !insn.addr !241

dec_label_pc_1990:                                ; preds = %dec_label_pc_198b, %dec_label_pc_18fc
  ret void, !insn.addr !242

; uselistorder directives
  uselistorder i32 %storemerge4.reload, { 1, 0 }
  uselistorder i32 %1, { 19, 18, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 17 }
  uselistorder i32* %storemerge4.reg2mem, { 1, 0, 2 }
}

define i32 @param_by_value_int(i32 %x) local_unnamed_addr {
dec_label_pc_1998:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !243
  %3 = mul i32 %x, 2, !insn.addr !244
  ret i32 %3, !insn.addr !245
}

define i32 @call_by_value_int() local_unnamed_addr {
dec_label_pc_19b1:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !246
  %3 = call i32 @param_by_value_int(i32 5), !insn.addr !247
  %4 = add i32 %3, 5, !insn.addr !248
  ret i32 %4, !insn.addr !249
}

define i32 @param_by_value_ptr(i32* %p) local_unnamed_addr {
dec_label_pc_19e4:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !250
  %3 = load i32, i32* %p, align 4, !insn.addr !251
  %4 = mul i32 %3, 2, !insn.addr !252
  store i32 %4, i32* %p, align 4, !insn.addr !253
  ret i32 1, !insn.addr !254
}

define i32 @call_by_value_ptr() local_unnamed_addr {
dec_label_pc_1a15:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !255
  %1 = load i32, i32* %0
  %ptr_-28 = alloca i32*, align 4
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !256
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !257
  store i32* inttoptr (i32 5 to i32*), i32** %ptr_-28, align 4, !insn.addr !258
  %4 = bitcast i32** %ptr_-28 to i32*, !insn.addr !259
  %5 = call i32 @param_by_value_ptr(i32* nonnull %4), !insn.addr !259
  %6 = load i32*, i32** %ptr_-28, align 4, !insn.addr !260
  %7 = ptrtoint i32* %6 to i32, !insn.addr !260
  %8 = add i32 %5, %7, !insn.addr !261
  %9 = call i32 @__readgsdword(i32 20), !insn.addr !262
  %10 = icmp eq i32 %3, %9, !insn.addr !262
  store i32 %8, i32* %eax.0.reg2mem, !insn.addr !263
  br i1 %10, label %dec_label_pc_1a68, label %dec_label_pc_1a63, !insn.addr !263

dec_label_pc_1a63:                                ; preds = %dec_label_pc_1a15
  %11 = call i32 @__stack_chk_fail_local(), !insn.addr !264
  store i32 %11, i32* %eax.0.reg2mem, !insn.addr !264
  br label %dec_label_pc_1a68, !insn.addr !264

dec_label_pc_1a68:                                ; preds = %dec_label_pc_1a63, %dec_label_pc_1a15
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !265

; uselistorder directives
  uselistorder i32** %ptr_-28, { 1, 0, 2 }
}

define i32 @param_array_decay(i32* %arr, i32 %n) local_unnamed_addr {
dec_label_pc_1a6a:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !266
  ret i32 4, !insn.addr !267
}

define i32 @call_array_decay() local_unnamed_addr {
dec_label_pc_1a82:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !268
  %1 = load i32, i32* %0
  %stack_var_-56 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !269
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !270
  %4 = bitcast i32* %stack_var_-56 to i8*, !insn.addr !271
  call void @__asm_rep_stosd_memset(i8* nonnull %4, i32 0, i32 10), !insn.addr !271
  %5 = call i32 @param_array_decay(i32* nonnull %stack_var_-56, i32 10), !insn.addr !272
  %6 = call i32 @__readgsdword(i32 20), !insn.addr !273
  %7 = icmp eq i32 %3, %6, !insn.addr !273
  store i32 %5, i32* %eax.0.reg2mem, !insn.addr !274
  br i1 %7, label %dec_label_pc_1ad2, label %dec_label_pc_1acd, !insn.addr !274

dec_label_pc_1acd:                                ; preds = %dec_label_pc_1a82
  %8 = call i32 @__stack_chk_fail_local(), !insn.addr !275
  store i32 %8, i32* %eax.0.reg2mem, !insn.addr !275
  br label %dec_label_pc_1ad2, !insn.addr !275

dec_label_pc_1ad2:                                ; preds = %dec_label_pc_1acd, %dec_label_pc_1a82
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !276
}

define i32 @param_string(i8* %str) local_unnamed_addr {
dec_label_pc_1ad7:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = ptrtoint i8* %str to i32
  %3 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !277
  %4 = load i8, i8* %str, align 1, !insn.addr !278
  %5 = sext i8 %4 to i32, !insn.addr !279
  %6 = add i32 %2, 1, !insn.addr !280
  %7 = inttoptr i32 %6 to i8*, !insn.addr !281
  %8 = load i8, i8* %7, align 1, !insn.addr !281
  %9 = sext i8 %8 to i32, !insn.addr !282
  %10 = add nsw i32 %9, %5, !insn.addr !283
  ret i32 %10, !insn.addr !284
}

define i32 @call_string_param() local_unnamed_addr {
dec_label_pc_1b01:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !285
  %3 = add i32 %2, 5816, !insn.addr !286
  %4 = inttoptr i32 %3 to i8*, !insn.addr !287
  %5 = call i32 @param_string(i8* %4), !insn.addr !288
  ret i32 %5, !insn.addr !289
}

define i32 @param_ptr_array(i8** %arr, i32 %n) local_unnamed_addr {
dec_label_pc_1b23:
  %0 = alloca i32
  %stack_var_-12.0.lcssa.reg2mem = alloca i32, !insn.addr !290
  %stack_var_-12.02.reg2mem = alloca i32, !insn.addr !290
  %storemerge3.reg2mem = alloca i32, !insn.addr !290
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !291
  %3 = icmp sgt i32 %n, 0, !insn.addr !292
  store i32 0, i32* %stack_var_-12.0.lcssa.reg2mem, !insn.addr !292
  br i1 %3, label %dec_label_pc_1b47.lr.ph, label %dec_label_pc_1b6d, !insn.addr !292

dec_label_pc_1b47.lr.ph:                          ; preds = %dec_label_pc_1b23
  %4 = ptrtoint i8** %arr to i32, !insn.addr !293
  store i32 0, i32* %storemerge3.reg2mem
  store i32 0, i32* %stack_var_-12.02.reg2mem
  br label %dec_label_pc_1b47

dec_label_pc_1b47:                                ; preds = %dec_label_pc_1b47, %dec_label_pc_1b47.lr.ph
  %stack_var_-12.02.reload = load i32, i32* %stack_var_-12.02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %5 = mul i32 %storemerge3.reload, 4, !insn.addr !294
  %6 = add i32 %5, %4, !insn.addr !295
  %7 = inttoptr i32 %6 to i32*, !insn.addr !296
  %8 = load i32, i32* %7, align 4, !insn.addr !296
  %9 = inttoptr i32 %8 to i8*, !insn.addr !297
  %10 = load i8, i8* %9, align 1, !insn.addr !297
  %11 = sext i8 %10 to i32, !insn.addr !298
  %12 = add i32 %stack_var_-12.02.reload, %11, !insn.addr !299
  %13 = add nuw nsw i32 %storemerge3.reload, 1, !insn.addr !300
  %exitcond = icmp eq i32 %13, %n
  store i32 %13, i32* %storemerge3.reg2mem, !insn.addr !292
  store i32 %12, i32* %stack_var_-12.02.reg2mem, !insn.addr !292
  store i32 %12, i32* %stack_var_-12.0.lcssa.reg2mem, !insn.addr !292
  br i1 %exitcond, label %dec_label_pc_1b6d, label %dec_label_pc_1b47, !insn.addr !292

dec_label_pc_1b6d:                                ; preds = %dec_label_pc_1b47, %dec_label_pc_1b23
  %stack_var_-12.0.lcssa.reload = load i32, i32* %stack_var_-12.0.lcssa.reg2mem
  ret i32 %stack_var_-12.0.lcssa.reload, !insn.addr !301

; uselistorder directives
  uselistorder i32* %storemerge3.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-12.02.reg2mem, { 1, 0, 2 }
}

define i32 @call_ptr_array() local_unnamed_addr {
dec_label_pc_1b72:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !302
  %1 = load i32, i32* %0
  %strs_-32 = alloca [3 x i8*], align 4
  %stack_var_-28 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !303
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !304
  %4 = add i32 %2, 5706, !insn.addr !305
  store i32 %4, i32* %stack_var_-28, align 4, !insn.addr !306
  store [3 x i8*] [i8* inttoptr (i32 3 to i8*), i8* undef, i8* undef], [3 x i8*]* %strs_-32, align 4, !insn.addr !307
  %5 = bitcast i32* %stack_var_-28 to i8**
  %6 = bitcast [3 x i8*]* %strs_-32 to i32*, !insn.addr !308
  %7 = load i32, i32* %6, align 4, !insn.addr !308
  %8 = call i32 @param_ptr_array(i8** nonnull %5, i32 %7), !insn.addr !308
  %9 = call i32 @__readgsdword(i32 20), !insn.addr !309
  %10 = icmp eq i32 %3, %9, !insn.addr !309
  store i32 %8, i32* %eax.0.reg2mem, !insn.addr !310
  br i1 %10, label %dec_label_pc_1bcc, label %dec_label_pc_1bc7, !insn.addr !310

dec_label_pc_1bc7:                                ; preds = %dec_label_pc_1b72
  %11 = call i32 @__stack_chk_fail_local(), !insn.addr !311
  store i32 %11, i32* %eax.0.reg2mem, !insn.addr !311
  br label %dec_label_pc_1bcc, !insn.addr !311

dec_label_pc_1bcc:                                ; preds = %dec_label_pc_1bc7, %dec_label_pc_1b72
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !312
}

define i32 @param_varargs(i32 %count, ...) local_unnamed_addr {
dec_label_pc_1bce:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !313
  %stack_var_-24.0.lcssa.reg2mem = alloca i32, !insn.addr !313
  %stack_var_-24.01.reg2mem = alloca i32, !insn.addr !313
  %sum_-28.02.reg2mem = alloca i32, !insn.addr !313
  %storemerge3.reg2mem = alloca i32, !insn.addr !313
  %1 = load i32, i32* %0
  %stack_var_8 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !314
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !315
  %4 = icmp sgt i32 %count, 0, !insn.addr !316
  store i32 0, i32* %stack_var_-24.0.lcssa.reg2mem, !insn.addr !316
  br i1 %4, label %dec_label_pc_1c03.lr.ph, label %dec_label_pc_1c1d, !insn.addr !316

dec_label_pc_1c03.lr.ph:                          ; preds = %dec_label_pc_1bce
  %5 = ptrtoint i32* %stack_var_8 to i32, !insn.addr !317
  store i32 0, i32* %storemerge3.reg2mem
  store i32 %5, i32* %sum_-28.02.reg2mem
  store i32 0, i32* %stack_var_-24.01.reg2mem
  br label %dec_label_pc_1c03

dec_label_pc_1c03:                                ; preds = %dec_label_pc_1c03, %dec_label_pc_1c03.lr.ph
  %stack_var_-24.01.reload = load i32, i32* %stack_var_-24.01.reg2mem
  %sum_-28.02.reload = load i32, i32* %sum_-28.02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %6 = add i32 %sum_-28.02.reload, 4, !insn.addr !318
  %7 = inttoptr i32 %sum_-28.02.reload to i32*, !insn.addr !319
  %8 = load i32, i32* %7, align 4, !insn.addr !319
  %9 = add i32 %8, %stack_var_-24.01.reload, !insn.addr !320
  %10 = add nuw nsw i32 %storemerge3.reload, 1, !insn.addr !321
  %exitcond = icmp eq i32 %10, %count
  store i32 %10, i32* %storemerge3.reg2mem, !insn.addr !316
  store i32 %6, i32* %sum_-28.02.reg2mem, !insn.addr !316
  store i32 %9, i32* %stack_var_-24.01.reg2mem, !insn.addr !316
  store i32 %9, i32* %stack_var_-24.0.lcssa.reg2mem, !insn.addr !316
  br i1 %exitcond, label %dec_label_pc_1c1d, label %dec_label_pc_1c03, !insn.addr !316

dec_label_pc_1c1d:                                ; preds = %dec_label_pc_1c03, %dec_label_pc_1bce
  %stack_var_-24.0.lcssa.reload = load i32, i32* %stack_var_-24.0.lcssa.reg2mem
  %11 = call i32 @__readgsdword(i32 20), !insn.addr !322
  %12 = icmp eq i32 %3, %11, !insn.addr !322
  store i32 %stack_var_-24.0.lcssa.reload, i32* %eax.0.reg2mem, !insn.addr !323
  br i1 %12, label %dec_label_pc_1c31, label %dec_label_pc_1c2c, !insn.addr !323

dec_label_pc_1c2c:                                ; preds = %dec_label_pc_1c1d
  %13 = call i32 @__stack_chk_fail_local(), !insn.addr !324
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !324
  br label %dec_label_pc_1c31, !insn.addr !324

dec_label_pc_1c31:                                ; preds = %dec_label_pc_1c2c, %dec_label_pc_1c1d
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !325

; uselistorder directives
  uselistorder i32* %storemerge3.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-28.02.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-24.01.reg2mem, { 1, 0, 2 }
}

define i32 @call_varargs_param() local_unnamed_addr {
dec_label_pc_1c33:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !326
  %3 = call i32 (i32, ...) @param_varargs(i32 4), !insn.addr !327
  ret i32 %3, !insn.addr !328
}

define i32 @param_func_ptr(i32 (i32)* %callback, i32 %x) local_unnamed_addr {
dec_label_pc_1c5e:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = ptrtoint i32 (i32)* %callback to i32
  %3 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !329
  %4 = add i32 %2, 10, !insn.addr !330
  ret i32 %4, !insn.addr !331
}

define i32 @callback_func(i32 %x) local_unnamed_addr {
dec_label_pc_1c85:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !332
  %3 = mul i32 %x, 2, !insn.addr !333
  ret i32 %3, !insn.addr !334
}

define i32 @call_func_ptr_param() local_unnamed_addr {
dec_label_pc_1c9d:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !335
  %3 = add i32 %2, -39, !insn.addr !336
  %4 = inttoptr i32 %3 to i32 (i32)*, !insn.addr !337
  %5 = call i32 @param_func_ptr(i32 (i32)* %4, i32 5), !insn.addr !338
  ret i32 %5, !insn.addr !339
}

define i32 @param_double_ptr(i32** %pp, i32 %new_val) local_unnamed_addr {
dec_label_pc_1cc7:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !340
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !341
  %3 = icmp eq i32** %pp, null, !insn.addr !342
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !343
  br i1 %3, label %dec_label_pc_1d06, label %dec_label_pc_1cde, !insn.addr !343

dec_label_pc_1cde:                                ; preds = %dec_label_pc_1cc7
  %4 = load i32*, i32** %pp, align 4
  %5 = icmp eq i32* %4, null, !insn.addr !344
  %6 = icmp eq i1 %5, false, !insn.addr !345
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !345
  br i1 %6, label %dec_label_pc_1cee, label %dec_label_pc_1d06, !insn.addr !345

dec_label_pc_1cee:                                ; preds = %dec_label_pc_1cde
  store i32 %new_val, i32* %4, align 4, !insn.addr !346
  %7 = bitcast i32** %pp to i32*
  store i32 0, i32* %7, align 4, !insn.addr !347
  store i32 1, i32* %storemerge.reg2mem, !insn.addr !348
  br label %dec_label_pc_1d06, !insn.addr !348

dec_label_pc_1d06:                                ; preds = %dec_label_pc_1cc7, %dec_label_pc_1cde, %dec_label_pc_1cee
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !349

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32** %pp, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1d06, { 2, 1, 0 }
}

define i32 @call_double_ptr() local_unnamed_addr {
dec_label_pc_1d08:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !350
  %1 = load i32, i32* %0
  %result_-24 = alloca i32, align 4
  %ptr_-28 = alloca i32*, align 4
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !351
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !352
  store i32* inttoptr (i32 10 to i32*), i32** %ptr_-28, align 4, !insn.addr !353
  %4 = ptrtoint i32** %ptr_-28 to i32, !insn.addr !354
  store i32 %4, i32* %result_-24, align 4, !insn.addr !354
  %5 = bitcast i32* %result_-24 to i32**
  %6 = call i32 @param_double_ptr(i32** nonnull %5, i32 20), !insn.addr !355
  %7 = load i32, i32* %result_-24, align 4, !insn.addr !356
  %8 = icmp eq i32 %7, 0, !insn.addr !357
  %9 = zext i1 %8 to i32, !insn.addr !358
  %10 = load i32*, i32** %ptr_-28, align 4, !insn.addr !359
  %11 = ptrtoint i32* %10 to i32, !insn.addr !359
  %12 = add i32 %11, %9, !insn.addr !360
  %13 = call i32 @__readgsdword(i32 20), !insn.addr !361
  %14 = icmp eq i32 %3, %13, !insn.addr !361
  store i32 %12, i32* %eax.0.reg2mem, !insn.addr !362
  br i1 %14, label %dec_label_pc_1d66, label %dec_label_pc_1d61, !insn.addr !362

dec_label_pc_1d61:                                ; preds = %dec_label_pc_1d08
  %15 = call i32 @__stack_chk_fail_local(), !insn.addr !363
  store i32 %15, i32* %eax.0.reg2mem, !insn.addr !363
  br label %dec_label_pc_1d66, !insn.addr !363

dec_label_pc_1d66:                                ; preds = %dec_label_pc_1d61, %dec_label_pc_1d08
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !364

; uselistorder directives
  uselistorder i32* %result_-24, { 1, 0, 2 }
}

define i32 @param_complex_cast(i8* %p, i32 %type) local_unnamed_addr {
dec_label_pc_1d68:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !365
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !366
  %3 = icmp eq i32 %type, 0, !insn.addr !367
  %4 = icmp eq i1 %3, false, !insn.addr !368
  br i1 %4, label %dec_label_pc_1d9b, label %dec_label_pc_1d82, !insn.addr !368

dec_label_pc_1d82:                                ; preds = %dec_label_pc_1d68
  %5 = bitcast i8* %p to i32*
  %6 = load i32, i32* %5, align 4, !insn.addr !369
  store i32 %6, i32* %eax.0.reg2mem, !insn.addr !370
  br label %dec_label_pc_1dbb, !insn.addr !370

dec_label_pc_1d9b:                                ; preds = %dec_label_pc_1d68
  %7 = icmp eq i32 %type, 1, !insn.addr !371
  %8 = icmp eq i1 %7, false, !insn.addr !372
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !372
  br i1 %8, label %dec_label_pc_1dbb, label %dec_label_pc_1da1, !insn.addr !372

dec_label_pc_1da1:                                ; preds = %dec_label_pc_1d9b
  %9 = ptrtoint i8* %p to i32
  %10 = bitcast i8* %p to i32*
  %11 = load i32, i32* %10, align 4, !insn.addr !373
  %12 = add i32 %9, 4, !insn.addr !374
  %13 = inttoptr i32 %12 to i32*, !insn.addr !374
  %14 = load i32, i32* %13, align 4, !insn.addr !374
  %15 = add i32 %14, %11, !insn.addr !375
  store i32 %15, i32* %eax.0.reg2mem, !insn.addr !376
  br label %dec_label_pc_1dbb, !insn.addr !376

dec_label_pc_1dbb:                                ; preds = %dec_label_pc_1d9b, %dec_label_pc_1da1, %dec_label_pc_1d82
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !377

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder label %dec_label_pc_1dbb, { 1, 0, 2 }
}

define i32 @call_complex_cast() local_unnamed_addr {
dec_label_pc_1dbd:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !378
  %1 = load i32, i32* %0
  %stack_var_-24 = alloca i32, align 4
  %pair_-28 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !379
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !380
  store i32 305419896, i32* %pair_-28, align 4, !insn.addr !381
  store i32 100, i32* %stack_var_-24, align 4, !insn.addr !382
  %4 = bitcast i32* %stack_var_-24 to i8*
  %5 = call i32 @param_complex_cast(i8* nonnull %4, i32 1), !insn.addr !383
  %6 = bitcast i32* %pair_-28 to i8*
  %7 = call i32 @param_complex_cast(i8* nonnull %6, i32 0), !insn.addr !384
  %8 = call i32 @__readgsdword(i32 20), !insn.addr !385
  %9 = icmp eq i32 %3, %8, !insn.addr !385
  store i32 %7, i32* %eax.0.reg2mem, !insn.addr !386
  br i1 %9, label %dec_label_pc_1e1e, label %dec_label_pc_1e19, !insn.addr !386

dec_label_pc_1e19:                                ; preds = %dec_label_pc_1dbd
  %10 = call i32 @__stack_chk_fail_local(), !insn.addr !387
  store i32 %10, i32* %eax.0.reg2mem, !insn.addr !387
  br label %dec_label_pc_1e1e, !insn.addr !387

dec_label_pc_1e1e:                                ; preds = %dec_label_pc_1e19, %dec_label_pc_1dbd
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !388

; uselistorder directives
  uselistorder i32 (i8*, i32)* @param_complex_cast, { 1, 0 }
}

define i32 @param_struct_byval(i32 %s) local_unnamed_addr {
dec_label_pc_1e20:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !389
  %4 = add i32 %2, %s, !insn.addr !390
  ret i32 %4, !insn.addr !391

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @call_struct_byval() local_unnamed_addr {
dec_label_pc_1e3b:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !392
  %storemerge1.reg2mem = alloca i32, !insn.addr !392
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-4 = alloca i32, align 4
  %3 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !393
  %4 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !394
  %5 = call i32 @__readgsdword(i32 20), !insn.addr !395
  %6 = add i32 %3, -76, !insn.addr !396
  store i32 0, i32* %storemerge1.reg2mem
  br label %dec_label_pc_1e63

dec_label_pc_1e63:                                ; preds = %dec_label_pc_1e63, %dec_label_pc_1e3b
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %7 = mul i32 %storemerge1.reload, 4, !insn.addr !396
  %8 = add i32 %6, %7, !insn.addr !396
  %9 = inttoptr i32 %8 to i32*, !insn.addr !396
  store i32 %storemerge1.reload, i32* %9, align 4, !insn.addr !396
  %10 = add nuw nsw i32 %storemerge1.reload, 1, !insn.addr !397
  %exitcond = icmp eq i32 %10, 16
  store i32 %10, i32* %storemerge1.reg2mem, !insn.addr !398
  br i1 %exitcond, label %dec_label_pc_1e77, label %dec_label_pc_1e63, !insn.addr !398

dec_label_pc_1e77:                                ; preds = %dec_label_pc_1e63
  %11 = call i32 @param_struct_byval(i32 %2), !insn.addr !399
  %12 = call i32 @__readgsdword(i32 20), !insn.addr !400
  %13 = icmp eq i32 %5, %12, !insn.addr !400
  store i32 %11, i32* %eax.0.reg2mem, !insn.addr !401
  br i1 %13, label %dec_label_pc_1ec0, label %dec_label_pc_1ebb, !insn.addr !401

dec_label_pc_1ebb:                                ; preds = %dec_label_pc_1e77
  %14 = call i32 @__stack_chk_fail_local(), !insn.addr !402
  store i32 %14, i32* %eax.0.reg2mem, !insn.addr !402
  br label %dec_label_pc_1ec0, !insn.addr !402

dec_label_pc_1ec0:                                ; preds = %dec_label_pc_1ebb, %dec_label_pc_1e77
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !403

; uselistorder directives
  uselistorder i32* %storemerge1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %0, { 1, 0 }
}

define i32 @param_order_dep(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_1ec2:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !404
  %3 = add i32 %b, %a, !insn.addr !405
  ret i32 %3, !insn.addr !406
}

define i32 @call_order_dep() local_unnamed_addr {
dec_label_pc_1edd:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !407
  %3 = call i32 @param_order_dep(i32 2, i32 2), !insn.addr !408
  ret i32 %3, !insn.addr !409
}

define void @test_parameter_passing() local_unnamed_addr {
dec_label_pc_1f10:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !410
  %3 = add i32 %1, 4792, !insn.addr !411
  %4 = inttoptr i32 %3 to i8*, !insn.addr !412
  %5 = call i32 @puts(i8* %4), !insn.addr !413
  %6 = call i32 @call_by_value_int(), !insn.addr !414
  %7 = add i32 %1, 4825, !insn.addr !415
  %8 = inttoptr i32 %7 to i8*, !insn.addr !416
  %9 = call i32 (i8*, ...) @printf(i8* %8), !insn.addr !417
  %10 = call i32 @call_by_value_ptr(), !insn.addr !418
  %11 = add i32 %1, 4842, !insn.addr !419
  %12 = inttoptr i32 %11 to i8*, !insn.addr !420
  %13 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !421
  %14 = call i32 @call_array_decay(), !insn.addr !422
  %15 = add i32 %1, 4859, !insn.addr !423
  %16 = inttoptr i32 %15 to i8*, !insn.addr !424
  %17 = call i32 (i8*, ...) @printf(i8* %16), !insn.addr !425
  %18 = call i32 @call_string_param(), !insn.addr !426
  %19 = add i32 %1, 4876, !insn.addr !427
  %20 = inttoptr i32 %19 to i8*, !insn.addr !428
  %21 = call i32 (i8*, ...) @printf(i8* %20), !insn.addr !429
  %22 = call i32 @call_ptr_array(), !insn.addr !430
  %23 = add i32 %1, 4893, !insn.addr !431
  %24 = inttoptr i32 %23 to i8*, !insn.addr !432
  %25 = call i32 (i8*, ...) @printf(i8* %24), !insn.addr !433
  %26 = call i32 @call_varargs_param(), !insn.addr !434
  %27 = add i32 %1, 4910, !insn.addr !435
  %28 = inttoptr i32 %27 to i8*, !insn.addr !436
  %29 = call i32 (i8*, ...) @printf(i8* %28), !insn.addr !437
  %30 = call i32 @call_func_ptr_param(), !insn.addr !438
  %31 = add i32 %1, 4927, !insn.addr !439
  %32 = inttoptr i32 %31 to i8*, !insn.addr !440
  %33 = call i32 (i8*, ...) @printf(i8* %32), !insn.addr !441
  %34 = call i32 @call_double_ptr(), !insn.addr !442
  %35 = add i32 %1, 4944, !insn.addr !443
  %36 = inttoptr i32 %35 to i8*, !insn.addr !444
  %37 = call i32 (i8*, ...) @printf(i8* %36), !insn.addr !445
  %38 = call i32 @call_complex_cast(), !insn.addr !446
  %39 = add i32 %1, 4961, !insn.addr !447
  %40 = inttoptr i32 %39 to i8*, !insn.addr !448
  %41 = call i32 (i8*, ...) @printf(i8* %40), !insn.addr !449
  %42 = call i32 @call_struct_byval(), !insn.addr !450
  %43 = add i32 %1, 4978, !insn.addr !451
  %44 = inttoptr i32 %43 to i8*, !insn.addr !452
  %45 = call i32 (i8*, ...) @printf(i8* %44), !insn.addr !453
  %46 = call i32 @call_order_dep(), !insn.addr !454
  %47 = add i32 %1, 4995, !insn.addr !455
  %48 = inttoptr i32 %47 to i8*, !insn.addr !456
  %49 = call i32 (i8*, ...) @printf(i8* %48), !insn.addr !457
  ret void, !insn.addr !458

; uselistorder directives
  uselistorder i32 %1, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
}

define i32 @ret_basic_type(i32 %x) local_unnamed_addr {
dec_label_pc_2046:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !459
  %3 = mul i32 %x, 2, !insn.addr !460
  ret i32 %3, !insn.addr !461
}

define i32 @call_ret_basic() local_unnamed_addr {
dec_label_pc_205e:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !462
  %3 = call i32 @ret_basic_type(i32 21), !insn.addr !463
  ret i32 %3, !insn.addr !464
}

define i32* @ret_pointer(i32* %p) local_unnamed_addr {
dec_label_pc_208c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = ptrtoint i32* %p to i32
  %3 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !465
  %4 = add i32 %2, 4, !insn.addr !466
  %5 = inttoptr i32 %4 to i32*, !insn.addr !467
  ret i32* %5, !insn.addr !467
}

define i32 @call_ret_pointer() local_unnamed_addr {
dec_label_pc_20a5:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !468
  %1 = load i32, i32* %0
  %arr_-32 = alloca [3 x i32], align 4
  %stack_var_-28 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !469
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !470
  store i32 10, i32* %stack_var_-28, align 4, !insn.addr !471
  %4 = call i32* @ret_pointer(i32* nonnull %stack_var_-28), !insn.addr !472
  %5 = ptrtoint i32* %4 to i32, !insn.addr !472
  %6 = insertvalue [3 x i32] undef, i32 %5, 0, !insn.addr !473
  store [3 x i32] %6, [3 x i32]* %arr_-32, align 4, !insn.addr !473
  %7 = getelementptr inbounds [3 x i32], [3 x i32]* %arr_-32, i32 0, i32 0, !insn.addr !474
  %8 = load i32, i32* %7, align 4, !insn.addr !474
  %9 = inttoptr i32 %8 to i32*, !insn.addr !475
  %10 = load i32, i32* %9, align 4, !insn.addr !475
  %11 = call i32 @__readgsdword(i32 20), !insn.addr !476
  %12 = icmp eq i32 %3, %11, !insn.addr !476
  store i32 %10, i32* %eax.0.reg2mem, !insn.addr !477
  br i1 %12, label %dec_label_pc_20fe, label %dec_label_pc_20f9, !insn.addr !477

dec_label_pc_20f9:                                ; preds = %dec_label_pc_20a5
  %13 = call i32 @__stack_chk_fail_local(), !insn.addr !478
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !478
  br label %dec_label_pc_20fe, !insn.addr !478

dec_label_pc_20fe:                                ; preds = %dec_label_pc_20f9, %dec_label_pc_20a5
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !479
}

define i32 @ret_small_struct(i32 %x, i32 %y) local_unnamed_addr {
dec_label_pc_2100:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !480
  %3 = inttoptr i32 %x to i32*, !insn.addr !481
  store i32 %y, i32* %3, align 4, !insn.addr !481
  %4 = add i32 %x, 4, !insn.addr !482
  %5 = inttoptr i32 %4 to i32*, !insn.addr !482
  ret i32 %x, !insn.addr !483

; uselistorder directives
  uselistorder i32 %x, { 0, 2, 1 }
}

define i32 @call_ret_small_struct() local_unnamed_addr {
dec_label_pc_2135:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !484
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-24 = alloca i32, align 4
  %3 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !485
  %4 = call i32 @__readgsdword(i32 20), !insn.addr !486
  %5 = ptrtoint i32* %stack_var_-24 to i32, !insn.addr !487
  %6 = call i32 @ret_small_struct(i32 %5, i32 3), !insn.addr !488
  %7 = load i32, i32* %stack_var_-24, align 4, !insn.addr !489
  %8 = add i32 %7, %2, !insn.addr !490
  %9 = call i32 @__readgsdword(i32 20), !insn.addr !491
  %10 = icmp eq i32 %4, %9, !insn.addr !491
  store i32 %8, i32* %eax.0.reg2mem, !insn.addr !492
  br i1 %10, label %dec_label_pc_217d, label %dec_label_pc_2178, !insn.addr !492

dec_label_pc_2178:                                ; preds = %dec_label_pc_2135
  %11 = call i32 @__stack_chk_fail_local(), !insn.addr !493
  store i32 %11, i32* %eax.0.reg2mem, !insn.addr !493
  br label %dec_label_pc_217d, !insn.addr !493

dec_label_pc_217d:                                ; preds = %dec_label_pc_2178, %dec_label_pc_2135
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !494

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @ret_large_struct(i32 %seed) local_unnamed_addr {
dec_label_pc_217f:
  %0 = alloca i32
  %storemerge1.reg2mem = alloca i32, !insn.addr !495
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-4 = alloca i32, align 4
  %3 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !496
  %4 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !497
  %5 = call i32 @__readgsdword(i32 20), !insn.addr !498
  %6 = add i32 %3, -76, !insn.addr !499
  store i32 0, i32* %storemerge1.reg2mem
  br label %dec_label_pc_21ad

dec_label_pc_21ad:                                ; preds = %dec_label_pc_21ad, %dec_label_pc_217f
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %7 = add i32 %storemerge1.reload, %2, !insn.addr !500
  %8 = mul i32 %storemerge1.reload, 4, !insn.addr !499
  %9 = add i32 %6, %8, !insn.addr !499
  %10 = inttoptr i32 %9 to i32*, !insn.addr !499
  store i32 %7, i32* %10, align 4, !insn.addr !499
  %11 = add nuw nsw i32 %storemerge1.reload, 1, !insn.addr !501
  %exitcond = icmp eq i32 %11, 16
  store i32 %11, i32* %storemerge1.reg2mem, !insn.addr !502
  br i1 %exitcond, label %dec_label_pc_21c6, label %dec_label_pc_21ad, !insn.addr !502

dec_label_pc_21c6:                                ; preds = %dec_label_pc_21ad
  %12 = inttoptr i32 %seed to i32*, !insn.addr !503
  %13 = add i32 %seed, 4, !insn.addr !504
  %14 = inttoptr i32 %13 to i32*, !insn.addr !504
  %15 = add i32 %seed, 8, !insn.addr !505
  %16 = inttoptr i32 %15 to i32*, !insn.addr !505
  %17 = add i32 %seed, 12, !insn.addr !506
  %18 = inttoptr i32 %17 to i32*, !insn.addr !506
  %19 = add i32 %seed, 16, !insn.addr !507
  %20 = inttoptr i32 %19 to i32*, !insn.addr !507
  %21 = add i32 %seed, 20, !insn.addr !508
  %22 = inttoptr i32 %21 to i32*, !insn.addr !508
  %23 = add i32 %seed, 24, !insn.addr !509
  %24 = inttoptr i32 %23 to i32*, !insn.addr !509
  %25 = add i32 %seed, 28, !insn.addr !510
  %26 = inttoptr i32 %25 to i32*, !insn.addr !510
  %27 = add i32 %seed, 32, !insn.addr !511
  %28 = inttoptr i32 %27 to i32*, !insn.addr !511
  %29 = add i32 %seed, 36, !insn.addr !512
  %30 = inttoptr i32 %29 to i32*, !insn.addr !512
  %31 = add i32 %seed, 40, !insn.addr !513
  %32 = inttoptr i32 %31 to i32*, !insn.addr !513
  %33 = add i32 %seed, 44, !insn.addr !514
  %34 = inttoptr i32 %33 to i32*, !insn.addr !514
  %35 = add i32 %seed, 48, !insn.addr !515
  %36 = inttoptr i32 %35 to i32*, !insn.addr !515
  %37 = add i32 %seed, 52, !insn.addr !516
  %38 = inttoptr i32 %37 to i32*, !insn.addr !516
  %39 = add i32 %seed, 56, !insn.addr !517
  %40 = inttoptr i32 %39 to i32*, !insn.addr !517
  %41 = add i32 %seed, 60, !insn.addr !518
  %42 = inttoptr i32 %41 to i32*, !insn.addr !518
  %43 = call i32 @__readgsdword(i32 20), !insn.addr !519
  %44 = icmp eq i32 %5, %43, !insn.addr !519
  br i1 %44, label %dec_label_pc_2239, label %dec_label_pc_2234, !insn.addr !520

dec_label_pc_2234:                                ; preds = %dec_label_pc_21c6
  %45 = call i32 @__stack_chk_fail_local(), !insn.addr !521
  br label %dec_label_pc_2239, !insn.addr !521

dec_label_pc_2239:                                ; preds = %dec_label_pc_2234, %dec_label_pc_21c6
  ret i32 %seed, !insn.addr !522

; uselistorder directives
  uselistorder i32 %storemerge1.reload, { 0, 2, 1 }
  uselistorder i32* %storemerge1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder i32 40, { 1, 0 }
  uselistorder i32 32, { 1, 0 }
  uselistorder i32 8, { 4, 0, 3, 1, 2 }
  uselistorder i32 16, { 4, 0, 1, 2, 3 }
  uselistorder i32 4, { 11, 0, 12, 13, 1, 14, 4, 15, 2, 3, 5, 16, 17, 6, 7, 8, 9, 10 }
  uselistorder i32 %seed, { 0, 3, 8, 1, 2, 11, 14, 5, 10, 4, 6, 15, 9, 12, 7, 13, 16 }
}

define i32 @call_ret_large_struct() local_unnamed_addr {
dec_label_pc_2240:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !523
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-80 = alloca i32, align 4
  %3 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !524
  %4 = call i32 @__readgsdword(i32 20), !insn.addr !525
  %5 = ptrtoint i32* %stack_var_-80 to i32, !insn.addr !526
  %6 = call i32 @ret_large_struct(i32 %5), !insn.addr !527
  %7 = load i32, i32* %stack_var_-80, align 4, !insn.addr !528
  %8 = add i32 %7, %2, !insn.addr !529
  %9 = call i32 @__readgsdword(i32 20), !insn.addr !530
  %10 = icmp eq i32 %4, %9, !insn.addr !530
  store i32 %8, i32* %eax.0.reg2mem, !insn.addr !531
  br i1 %10, label %dec_label_pc_2289, label %dec_label_pc_2284, !insn.addr !531

dec_label_pc_2284:                                ; preds = %dec_label_pc_2240
  %11 = call i32 @__stack_chk_fail_local(), !insn.addr !532
  store i32 %11, i32* %eax.0.reg2mem, !insn.addr !532
  br label %dec_label_pc_2289, !insn.addr !532

dec_label_pc_2289:                                ; preds = %dec_label_pc_2284, %dec_label_pc_2240
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !533

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @func_a(i32 %x) local_unnamed_addr {
dec_label_pc_228b:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !534
  %3 = add i32 %x, 10, !insn.addr !535
  ret i32 %3, !insn.addr !536
}

define i32 @func_b(i32 %x) local_unnamed_addr {
dec_label_pc_22a4:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !537
  %3 = mul i32 %x, 2, !insn.addr !538
  ret i32 %3, !insn.addr !539
}

define i32 (i32)* @ret_func_ptr(i32 %selector) local_unnamed_addr {
dec_label_pc_22bc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !540
  %3 = icmp eq i32 %selector, 0, !insn.addr !541
  %storemerge.v = select i1 %3, i32 add (i32 ptrtoint (i32* @global_var_3d04 to i32), i32 -15681), i32 add (i32 ptrtoint (i32* @global_var_3d04 to i32), i32 -15656)
  %storemerge = add i32 %2, %storemerge.v
  %4 = inttoptr i32 %storemerge to i32 (i32)*, !insn.addr !542
  ret i32 (i32)* %4, !insn.addr !542
}

define i32 @call_ret_func_ptr() local_unnamed_addr {
dec_label_pc_22e3:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !543
  %3 = call i32 (i32)* @ret_func_ptr(i32 1), !insn.addr !544
  %4 = ptrtoint i32 (i32)* %3 to i32, !insn.addr !544
  ret i32 %4, !insn.addr !545
}

define i8* @ret_opaque_handle(i32 %type) local_unnamed_addr {
dec_label_pc_2313:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !546
  %3 = icmp eq i32 %type, 0, !insn.addr !547
  %4 = icmp eq i1 %3, false, !insn.addr !548
  %storemerge.v = select i1 %4, i32 add (i32 ptrtoint (i32* @global_var_3cad to i32), i32 68), i32 add (i32 ptrtoint (i32* @global_var_3cad to i32), i32 60)
  %storemerge = add i32 %2, %storemerge.v
  %5 = inttoptr i32 %storemerge to i8*, !insn.addr !549
  ret i8* %5, !insn.addr !549
}

define i32 @call_ret_opaque() local_unnamed_addr {
dec_label_pc_233a:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !550
  %3 = call i8* @ret_opaque_handle(i32 0), !insn.addr !551
  %4 = bitcast i8* %3 to i32*, !insn.addr !552
  %5 = load i32, i32* %4, align 4, !insn.addr !552
  ret i32 %5, !insn.addr !553
}

define i32 @ret_complex_expr(i32 %x, i32 %y, i32 %z) local_unnamed_addr {
dec_label_pc_2362:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !554
  %3 = icmp sgt i32 %x, %y, !insn.addr !555
  %4 = add i32 %z, 10
  %5 = mul i32 %z, 2
  %storemerge = select i1 %3, i32 %5, i32 %4
  ret i32 %storemerge, !insn.addr !556
}

define i32 @call_ret_complex_expr() local_unnamed_addr {
dec_label_pc_238a:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !557
  %3 = call i32 @ret_complex_expr(i32 5, i32 3, i32 10), !insn.addr !558
  %4 = call i32 @ret_complex_expr(i32 3, i32 5, i32 10), !insn.addr !559
  %5 = add i32 %4, %3, !insn.addr !560
  ret i32 %5, !insn.addr !561

; uselistorder directives
  uselistorder i32 (i32, i32, i32)* @ret_complex_expr, { 1, 0 }
  uselistorder i32 5, { 0, 1, 2, 3, 12, 4, 13, 5, 6, 7, 8, 9, 10, 11 }
}

define i32 @ret_multi_branch(i32 %op) local_unnamed_addr {
dec_label_pc_23ca:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !562
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !563
  %3 = icmp eq i32 %op, 2, !insn.addr !564
  store i32 30, i32* %eax.0.reg2mem, !insn.addr !565
  br i1 %3, label %dec_label_pc_240f, label %dec_label_pc_23e1, !insn.addr !565

dec_label_pc_23e1:                                ; preds = %dec_label_pc_23ca
  %4 = icmp sgt i32 %op, 2, !insn.addr !566
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !566
  br i1 %4, label %dec_label_pc_240f, label %dec_label_pc_23e7, !insn.addr !566

dec_label_pc_23e7:                                ; preds = %dec_label_pc_23e1
  %switch.selectcmp = icmp eq i32 %op, 1
  %switch.select = select i1 %switch.selectcmp, i32 20, i32 -1
  %switch.selectcmp1 = icmp eq i32 %op, 0
  %switch.select2 = select i1 %switch.selectcmp1, i32 10, i32 %switch.select
  store i32 %switch.select2, i32* %eax.0.reg2mem
  br label %dec_label_pc_240f

dec_label_pc_240f:                                ; preds = %dec_label_pc_23e1, %dec_label_pc_23e7, %dec_label_pc_23ca
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !567

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 0, 2, 1, 3 }
  uselistorder i32 10, { 0, 1, 2, 11, 12, 10, 3, 13, 4, 9, 5, 6, 7, 8 }
  uselistorder label %dec_label_pc_240f, { 1, 0, 2 }
}

define i32 @call_ret_multi_branch() local_unnamed_addr {
dec_label_pc_2411:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !568
  %3 = call i32 @ret_multi_branch(i32 0), !insn.addr !569
  %4 = call i32 @ret_multi_branch(i32 1), !insn.addr !570
  %5 = add i32 %4, %3, !insn.addr !571
  %6 = call i32 @ret_multi_branch(i32 2), !insn.addr !572
  %7 = add i32 %5, %6, !insn.addr !573
  ret i32 %7, !insn.addr !574

; uselistorder directives
  uselistorder i32 2, { 6, 16, 7, 0, 1, 2, 8, 9, 3, 4, 5, 10, 11, 12, 13, 14, 15 }
  uselistorder i32 (i32)* @ret_multi_branch, { 2, 1, 0 }
}

define void @ret_void(i32 %x, i32* %out) local_unnamed_addr {
dec_label_pc_2458:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !575
  %3 = mul i32 %x, 3, !insn.addr !576
  store i32 %3, i32* %out, align 4, !insn.addr !577
  ret void, !insn.addr !578
}

define i32 @call_ret_void() local_unnamed_addr {
dec_label_pc_247a:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !579
  %1 = load i32, i32* %0
  %stack_var_-20 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !580
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !581
  call void @ret_void(i32 7, i32* nonnull %stack_var_-20), !insn.addr !582
  %4 = load i32, i32* %stack_var_-20, align 4, !insn.addr !583
  %5 = call i32 @__readgsdword(i32 20), !insn.addr !584
  %6 = icmp eq i32 %3, %5, !insn.addr !584
  store i32 %4, i32* %eax.0.reg2mem, !insn.addr !585
  br i1 %6, label %dec_label_pc_24bb, label %dec_label_pc_24b6, !insn.addr !585

dec_label_pc_24b6:                                ; preds = %dec_label_pc_247a
  %7 = call i32 @__stack_chk_fail_local(), !insn.addr !586
  store i32 %7, i32* %eax.0.reg2mem, !insn.addr !586
  br label %dec_label_pc_24bb, !insn.addr !586

dec_label_pc_24bb:                                ; preds = %dec_label_pc_24b6, %dec_label_pc_247a
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !587

; uselistorder directives
  uselistorder i32* %stack_var_-20, { 1, 0 }
  uselistorder i32 ()* @__stack_chk_fail_local, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 20, { 3, 4, 0, 5, 6, 7, 31, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 1, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 2 }
}

define void @test_return_values() local_unnamed_addr {
dec_label_pc_24bd:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !588
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3aff to i32), i32 -11544), !insn.addr !589
  %4 = inttoptr i32 %3 to i8*, !insn.addr !590
  %5 = call i32 @puts(i8* %4), !insn.addr !591
  %6 = call i32 @call_ret_basic(), !insn.addr !592
  %7 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3aff to i32), i32 -11514), !insn.addr !593
  %8 = inttoptr i32 %7 to i8*, !insn.addr !594
  %9 = call i32 (i8*, ...) @printf(i8* %8), !insn.addr !595
  %10 = call i32 @call_ret_pointer(), !insn.addr !596
  %11 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3aff to i32), i32 -11486), !insn.addr !597
  %12 = inttoptr i32 %11 to i8*, !insn.addr !598
  %13 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !599
  %14 = call i32 @call_ret_small_struct(), !insn.addr !600
  %15 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3aff to i32), i32 -11458), !insn.addr !601
  %16 = inttoptr i32 %15 to i8*, !insn.addr !602
  %17 = call i32 (i8*, ...) @printf(i8* %16), !insn.addr !603
  %18 = call i32 @call_ret_large_struct(), !insn.addr !604
  %19 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3aff to i32), i32 -11431), !insn.addr !605
  %20 = inttoptr i32 %19 to i8*, !insn.addr !606
  %21 = call i32 (i8*, ...) @printf(i8* %20), !insn.addr !607
  %22 = call i32 @call_ret_func_ptr(), !insn.addr !608
  %23 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3aff to i32), i32 -11402), !insn.addr !609
  %24 = inttoptr i32 %23 to i8*, !insn.addr !610
  %25 = call i32 (i8*, ...) @printf(i8* %24), !insn.addr !611
  %26 = call i32 @call_ret_opaque(), !insn.addr !612
  %27 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3aff to i32), i32 -11374), !insn.addr !613
  %28 = inttoptr i32 %27 to i8*, !insn.addr !614
  %29 = call i32 (i8*, ...) @printf(i8* %28), !insn.addr !615
  %30 = call i32 @call_ret_complex_expr(), !insn.addr !616
  %31 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3aff to i32), i32 -11345), !insn.addr !617
  %32 = inttoptr i32 %31 to i8*, !insn.addr !618
  %33 = call i32 (i8*, ...) @printf(i8* %32), !insn.addr !619
  %34 = call i32 @call_ret_multi_branch(), !insn.addr !620
  %35 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3aff to i32), i32 -11317), !insn.addr !621
  %36 = inttoptr i32 %35 to i8*, !insn.addr !622
  %37 = call i32 (i8*, ...) @printf(i8* %36), !insn.addr !623
  %38 = call i32 @call_ret_void(), !insn.addr !624
  %39 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3aff to i32), i32 -11289), !insn.addr !625
  %40 = inttoptr i32 %39 to i8*, !insn.addr !626
  %41 = call i32 (i8*, ...) @printf(i8* %40), !insn.addr !627
  ret void, !insn.addr !628

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 36 }
  uselistorder i32 (i8*)* @puts, { 1, 2, 0, 3 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_25c3:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !629
  call void @test_calling_conventions(), !insn.addr !630
  call void @test_parameter_passing(), !insn.addr !631
  call void @test_return_values(), !insn.addr !632
  ret i32 0, !insn.addr !633

; uselistorder directives
  uselistorder i32 0, { 14, 21, 20, 22, 30, 31, 0, 23, 24, 1, 25, 32, 33, 34, 3, 4, 2, 17, 6, 7, 5, 18, 27, 16, 8, 26, 9, 10, 12, 13, 11, 19, 29, 15, 28 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.ax, { 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
}

define i32 @__x86.get_pc_thunk.ax(i32 %arg1) local_unnamed_addr {
dec_label_pc_25ed:
  ret i32 %arg1, !insn.addr !634
}

define i32 @__stack_chk_fail_local() local_unnamed_addr {
dec_label_pc_2600:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !635
  call void @__stack_chk_fail(), !insn.addr !636
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !637
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_2620:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !638
  %ebx.0.reg2mem = alloca i32, !insn.addr !638
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !639
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_39a3 to i32), i32 -232), !insn.addr !640
  %4 = inttoptr i32 %3 to i32*, !insn.addr !640
  %5 = load i32, i32* %4, align 4, !insn.addr !640
  %6 = icmp eq i32 %5, -1, !insn.addr !641
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !642
  store i32 -1, i32* %merge.reg2mem, !insn.addr !642
  br i1 %6, label %dec_label_pc_265d, label %dec_label_pc_2650, !insn.addr !642

dec_label_pc_2650:                                ; preds = %dec_label_pc_2620, %dec_label_pc_2650
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !643
  %8 = inttoptr i32 %7 to i32*, !insn.addr !643
  %9 = load i32, i32* %8, align 4, !insn.addr !643
  %10 = icmp eq i32 %9, -1, !insn.addr !644
  %11 = icmp eq i1 %10, false, !insn.addr !645
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !645
  store i32 %9, i32* %merge.reg2mem, !insn.addr !645
  br i1 %11, label %dec_label_pc_2650, label %dec_label_pc_265d, !insn.addr !645

dec_label_pc_265d:                                ; preds = %dec_label_pc_2650, %dec_label_pc_2620
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !646

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 1, 2, 3, 4, 5, 6, 0 }
  uselistorder i32 -1, { 7, 0, 8, 6, 1, 2, 4, 3, 5 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2650, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_266c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !647
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !648
  ret i32 %3, !insn.addr !649

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 5, 0, 3, 2, 1, 4 }
  uselistorder i32 1, { 81, 84, 83, 80, 79, 78, 77, 131, 85, 76, 75, 121, 74, 120, 86, 73, 72, 71, 70, 69, 122, 68, 67, 66, 65, 132, 87, 64, 154, 133, 88, 63, 134, 89, 62, 61, 136, 135, 90, 60, 59, 58, 57, 56, 55, 54, 155, 137, 92, 91, 53, 52, 123, 139, 138, 93, 51, 124, 94, 50, 141, 140, 95, 49, 96, 97, 48, 47, 46, 45, 44, 156, 142, 102, 101, 100, 99, 98, 43, 144, 143, 103, 42, 157, 106, 105, 104, 41, 40, 158, 39, 145, 107, 38, 37, 146, 108, 36, 119, 35, 34, 33, 159, 125, 150, 149, 148, 147, 109, 32, 110, 31, 160, 151, 112, 111, 30, 82, 29, 28, 27, 161, 152, 117, 116, 115, 114, 113, 26, 126, 25, 127, 24, 23, 128, 22, 21, 129, 20, 19, 18, 17, 130, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 118, 5, 4, 3, 2, 153, 1, 0 }
}

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare void @__cxa_finalize(i32*) local_unnamed_addr

declare i32 @__asm_hlt() local_unnamed_addr

declare void @__asm_rep_movsd_memcpy(i8*, i8*, i32) local_unnamed_addr

declare void @__asm_rep_stosd_memset(i8*, i32, i32) local_unnamed_addr

declare i32 @__readgsdword(i32) local_unnamed_addr

!0 = !{i64 4104}
!1 = !{i64 4127}
!2 = !{i64 4132}
!3 = !{i64 4141}
!4 = !{i64 4244}
!5 = !{i64 4260}
!6 = !{i64 4276}
!7 = !{i64 4292}
!8 = !{i64 4308}
!9 = !{i64 4324}
!10 = !{i64 4351}
!11 = !{i64 4368}
!12 = !{i64 4374}
!13 = !{i64 4379}
!14 = !{i64 4383}
!15 = !{i64 4387}
!16 = !{i64 4400}
!17 = !{i64 4417}
!18 = !{i64 4456}
!19 = !{i64 4464}
!20 = !{i64 4534}
!21 = !{i64 4544}
!22 = !{i64 4552}
!23 = !{i64 4568}
!24 = !{i64 4575}
!25 = !{i64 4577}
!26 = !{i64 4583}
!27 = !{i64 4585}
!28 = !{i64 4590}
!29 = !{i64 4598}
!30 = !{i64 4603}
!31 = !{i64 4662}
!32 = !{i64 4667}
!33 = !{i64 4681}
!34 = !{i64 4692}
!35 = !{i64 4700}
!36 = !{i64 4704}
!37 = !{i64 4712}
!38 = !{i64 4728}
!39 = !{i64 4731}
!40 = !{i64 4739}
!41 = !{i64 4753}
!42 = !{i64 4762}
!43 = !{i64 4770}
!44 = !{i64 4783}
!45 = !{i64 4788}
!46 = !{i64 4798}
!47 = !{i64 4812}
!48 = !{i64 4818}
!49 = !{i64 4829}
!50 = !{i64 4851}
!51 = !{i64 4856}
!52 = !{i64 4859}
!53 = !{i64 4869}
!54 = !{i64 4891}
!55 = !{i64 4897}
!56 = !{i64 4905}
!57 = !{i64 4921}
!58 = !{i64 4929}
!59 = !{i64 4945}
!60 = !{i64 4950}
!61 = !{i64 4955}
!62 = !{i64 4960}
!63 = !{i64 4963}
!64 = !{i64 4971}
!65 = !{i64 4991}
!66 = !{i64 5000}
!67 = !{i64 5008}
!68 = !{i64 5024}
!69 = !{i64 5029}
!70 = !{i64 5034}
!71 = !{i64 5037}
!72 = !{i64 5045}
!73 = !{i64 5063}
!74 = !{i64 5072}
!75 = !{i64 5080}
!76 = !{i64 5096}
!77 = !{i64 5101}
!78 = !{i64 5106}
!79 = !{i64 5111}
!80 = !{i64 5116}
!81 = !{i64 5119}
!82 = !{i64 5127}
!83 = !{i64 5149}
!84 = !{i64 5158}
!85 = !{i64 5166}
!86 = !{i64 5182}
!87 = !{i64 5187}
!88 = !{i64 5192}
!89 = !{i64 5197}
!90 = !{i64 5200}
!91 = !{i64 5208}
!92 = !{i64 5228}
!93 = !{i64 5237}
!94 = !{i64 5245}
!95 = !{i64 5261}
!96 = !{i64 5266}
!97 = !{i64 5271}
!98 = !{i64 5274}
!99 = !{i64 5282}
!100 = !{i64 5300}
!101 = !{i64 5309}
!102 = !{i64 5320}
!103 = !{i64 5341}
!104 = !{i64 5356}
!105 = !{i64 5361}
!106 = !{i64 5376}
!107 = !{i64 5381}
!108 = !{i64 5388}
!109 = !{i64 5389}
!110 = !{i64 5399}
!111 = !{i64 5409}
!112 = !{i64 5466}
!113 = !{i64 5430}
!114 = !{i64 5445}
!115 = !{i64 5451}
!116 = !{i64 5453}
!117 = !{i64 5456}
!118 = !{i64 5474}
!119 = !{i64 5481}
!120 = !{i64 5483}
!121 = !{i64 5489}
!122 = !{i64 5497}
!123 = !{i64 5513}
!124 = !{i64 5521}
!125 = !{i64 5537}
!126 = !{i64 5542}
!127 = !{i64 5547}
!128 = !{i64 5552}
!129 = !{i64 5557}
!130 = !{i64 5562}
!131 = !{i64 5567}
!132 = !{i64 5570}
!133 = !{i64 5582}
!134 = !{i64 5616}
!135 = !{i64 5620}
!136 = !{i64 5630}
!137 = !{i64 5638}
!138 = !{i64 5665}
!139 = !{i64 5668}
!140 = !{i64 5687}
!141 = !{i64 5700}
!142 = !{i64 5701}
!143 = !{i64 5706}
!144 = !{i64 5711}
!145 = !{i64 5751}
!146 = !{i64 5747}
!147 = !{i64 5755}
!148 = !{i64 5761}
!149 = !{i64 5769}
!150 = !{i64 5775}
!151 = !{i64 5776}
!152 = !{i64 5783}
!153 = !{i64 5793}
!154 = !{i64 5797}
!155 = !{i64 5809}
!156 = !{i64 5814}
!157 = !{i64 5817}
!158 = !{i64 5821}
!159 = !{i64 5822}
!160 = !{i64 5827}
!161 = !{i64 5838}
!162 = !{i64 5849}
!163 = !{i64 5863}
!164 = !{i64 5869}
!165 = !{i64 5870}
!166 = !{i64 5878}
!167 = !{i64 5887}
!168 = !{i64 5893}
!169 = !{i64 5894}
!170 = !{i64 5902}
!171 = !{i64 5911}
!172 = !{i64 5917}
!173 = !{i64 5918}
!174 = !{i64 5926}
!175 = !{i64 5935}
!176 = !{i64 5941}
!177 = !{i64 5942}
!178 = !{i64 5950}
!179 = !{i64 5959}
!180 = !{i64 5965}
!181 = !{i64 5966}
!182 = !{i64 5974}
!183 = !{i64 5983}
!184 = !{i64 5989}
!185 = !{i64 5990}
!186 = !{i64 5998}
!187 = !{i64 6007}
!188 = !{i64 6013}
!189 = !{i64 6014}
!190 = !{i64 6022}
!191 = !{i64 6031}
!192 = !{i64 6037}
!193 = !{i64 6038}
!194 = !{i64 6046}
!195 = !{i64 6055}
!196 = !{i64 6061}
!197 = !{i64 6062}
!198 = !{i64 6070}
!199 = !{i64 6079}
!200 = !{i64 6085}
!201 = !{i64 6086}
!202 = !{i64 6094}
!203 = !{i64 6103}
!204 = !{i64 6109}
!205 = !{i64 6110}
!206 = !{i64 6133}
!207 = !{i64 6156}
!208 = !{i64 6162}
!209 = !{i64 6163}
!210 = !{i64 6171}
!211 = !{i64 6191}
!212 = !{i64 6197}
!213 = !{i64 6198}
!214 = !{i64 6222}
!215 = !{i64 6245}
!216 = !{i64 6251}
!217 = !{i64 6252}
!218 = !{i64 6260}
!219 = !{i64 6279}
!220 = !{i64 6292}
!221 = !{i64 6300}
!222 = !{i64 6323}
!223 = !{i64 6329}
!224 = !{i64 6330}
!225 = !{i64 6356}
!226 = !{i64 6366}
!227 = !{i64 6373}
!228 = !{i64 6394}
!229 = !{i64 6418}
!230 = !{i64 6420}
!231 = !{i64 6443}
!232 = !{i64 6449}
!233 = !{i64 6450}
!234 = !{i64 6458}
!235 = !{i64 6488}
!236 = !{i64 6511}
!237 = !{i64 6517}
!238 = !{i64 6518}
!239 = !{i64 6530}
!240 = !{i64 6537}
!241 = !{i64 6539}
!242 = !{i64 6551}
!243 = !{i64 6559}
!244 = !{i64 6569}
!245 = !{i64 6576}
!246 = !{i64 6587}
!247 = !{i64 6607}
!248 = !{i64 6624}
!249 = !{i64 6627}
!250 = !{i64 6635}
!251 = !{i64 6648}
!252 = !{i64 6650}
!253 = !{i64 6656}
!254 = !{i64 6676}
!255 = !{i64 6677}
!256 = !{i64 6687}
!257 = !{i64 6697}
!258 = !{i64 6708}
!259 = !{i64 6724}
!260 = !{i64 6735}
!261 = !{i64 6741}
!262 = !{i64 6746}
!263 = !{i64 6753}
!264 = !{i64 6755}
!265 = !{i64 6761}
!266 = !{i64 6769}
!267 = !{i64 6785}
!268 = !{i64 6786}
!269 = !{i64 6797}
!270 = !{i64 6807}
!271 = !{i64 6833}
!272 = !{i64 6841}
!273 = !{i64 6852}
!274 = !{i64 6859}
!275 = !{i64 6861}
!276 = !{i64 6870}
!277 = !{i64 6878}
!278 = !{i64 6891}
!279 = !{i64 6894}
!280 = !{i64 6900}
!281 = !{i64 6903}
!282 = !{i64 6906}
!283 = !{i64 6909}
!284 = !{i64 6912}
!285 = !{i64 6920}
!286 = !{i64 6930}
!287 = !{i64 6936}
!288 = !{i64 6937}
!289 = !{i64 6946}
!290 = !{i64 6947}
!291 = !{i64 6957}
!292 = !{i64 7019}
!293 = !{i64 6993}
!294 = !{i64 6986}
!295 = !{i64 6996}
!296 = !{i64 6998}
!297 = !{i64 7000}
!298 = !{i64 7003}
!299 = !{i64 7006}
!300 = !{i64 7009}
!301 = !{i64 7025}
!302 = !{i64 7026}
!303 = !{i64 7036}
!304 = !{i64 7046}
!305 = !{i64 7058}
!306 = !{i64 7064}
!307 = !{i64 7085}
!308 = !{i64 7091}
!309 = !{i64 7102}
!310 = !{i64 7109}
!311 = !{i64 7111}
!312 = !{i64 7117}
!313 = !{i64 7118}
!314 = !{i64 7128}
!315 = !{i64 7138}
!316 = !{i64 7195}
!317 = !{i64 7152}
!318 = !{i64 7174}
!319 = !{i64 7180}
!320 = !{i64 7182}
!321 = !{i64 7185}
!322 = !{i64 7203}
!323 = !{i64 7210}
!324 = !{i64 7212}
!325 = !{i64 7218}
!326 = !{i64 7229}
!327 = !{i64 7252}
!328 = !{i64 7261}
!329 = !{i64 7272}
!330 = !{i64 7296}
!331 = !{i64 7300}
!332 = !{i64 7308}
!333 = !{i64 7321}
!334 = !{i64 7324}
!335 = !{i64 7335}
!336 = !{i64 7350}
!337 = !{i64 7356}
!338 = !{i64 7357}
!339 = !{i64 7366}
!340 = !{i64 7367}
!341 = !{i64 7374}
!342 = !{i64 7384}
!343 = !{i64 7388}
!344 = !{i64 7395}
!345 = !{i64 7397}
!346 = !{i64 7414}
!347 = !{i64 7419}
!348 = !{i64 7425}
!349 = !{i64 7431}
!350 = !{i64 7432}
!351 = !{i64 7442}
!352 = !{i64 7452}
!353 = !{i64 7463}
!354 = !{i64 7473}
!355 = !{i64 7482}
!356 = !{i64 7493}
!357 = !{i64 7496}
!358 = !{i64 7498}
!359 = !{i64 7504}
!360 = !{i64 7507}
!361 = !{i64 7512}
!362 = !{i64 7519}
!363 = !{i64 7521}
!364 = !{i64 7527}
!365 = !{i64 7528}
!366 = !{i64 7538}
!367 = !{i64 7548}
!368 = !{i64 7552}
!369 = !{i64 7575}
!370 = !{i64 7577}
!371 = !{i64 7579}
!372 = !{i64 7583}
!373 = !{i64 7594}
!374 = !{i64 7599}
!375 = !{i64 7602}
!376 = !{i64 7604}
!377 = !{i64 7612}
!378 = !{i64 7613}
!379 = !{i64 7623}
!380 = !{i64 7633}
!381 = !{i64 7644}
!382 = !{i64 7651}
!383 = !{i64 7671}
!384 = !{i64 7685}
!385 = !{i64 7696}
!386 = !{i64 7703}
!387 = !{i64 7705}
!388 = !{i64 7711}
!389 = !{i64 7719}
!390 = !{i64 7735}
!391 = !{i64 7738}
!392 = !{i64 7739}
!393 = !{i64 7744}
!394 = !{i64 7749}
!395 = !{i64 7759}
!396 = !{i64 7785}
!397 = !{i64 7789}
!398 = !{i64 7797}
!399 = !{i64 7847}
!400 = !{i64 7858}
!401 = !{i64 7865}
!402 = !{i64 7867}
!403 = !{i64 7873}
!404 = !{i64 7881}
!405 = !{i64 7897}
!406 = !{i64 7900}
!407 = !{i64 7911}
!408 = !{i64 7942}
!409 = !{i64 7951}
!410 = !{i64 7963}
!411 = !{i64 7977}
!412 = !{i64 7983}
!413 = !{i64 7984}
!414 = !{i64 7992}
!415 = !{i64 8001}
!416 = !{i64 8007}
!417 = !{i64 8008}
!418 = !{i64 8016}
!419 = !{i64 8025}
!420 = !{i64 8031}
!421 = !{i64 8032}
!422 = !{i64 8040}
!423 = !{i64 8049}
!424 = !{i64 8055}
!425 = !{i64 8056}
!426 = !{i64 8064}
!427 = !{i64 8073}
!428 = !{i64 8079}
!429 = !{i64 8080}
!430 = !{i64 8088}
!431 = !{i64 8097}
!432 = !{i64 8103}
!433 = !{i64 8104}
!434 = !{i64 8112}
!435 = !{i64 8121}
!436 = !{i64 8127}
!437 = !{i64 8128}
!438 = !{i64 8136}
!439 = !{i64 8145}
!440 = !{i64 8151}
!441 = !{i64 8152}
!442 = !{i64 8160}
!443 = !{i64 8169}
!444 = !{i64 8175}
!445 = !{i64 8176}
!446 = !{i64 8184}
!447 = !{i64 8193}
!448 = !{i64 8199}
!449 = !{i64 8200}
!450 = !{i64 8208}
!451 = !{i64 8217}
!452 = !{i64 8223}
!453 = !{i64 8224}
!454 = !{i64 8232}
!455 = !{i64 8241}
!456 = !{i64 8247}
!457 = !{i64 8248}
!458 = !{i64 8261}
!459 = !{i64 8269}
!460 = !{i64 8282}
!461 = !{i64 8285}
!462 = !{i64 8296}
!463 = !{i64 8316}
!464 = !{i64 8331}
!465 = !{i64 8339}
!466 = !{i64 8352}
!467 = !{i64 8356}
!468 = !{i64 8357}
!469 = !{i64 8367}
!470 = !{i64 8377}
!471 = !{i64 8388}
!472 = !{i64 8413}
!473 = !{i64 8421}
!474 = !{i64 8424}
!475 = !{i64 8427}
!476 = !{i64 8432}
!477 = !{i64 8439}
!478 = !{i64 8441}
!479 = !{i64 8447}
!480 = !{i64 8458}
!481 = !{i64 8489}
!482 = !{i64 8491}
!483 = !{i64 8498}
!484 = !{i64 8501}
!485 = !{i64 8511}
!486 = !{i64 8521}
!487 = !{i64 8539}
!488 = !{i64 8540}
!489 = !{i64 8548}
!490 = !{i64 8554}
!491 = !{i64 8559}
!492 = !{i64 8566}
!493 = !{i64 8568}
!494 = !{i64 8574}
!495 = !{i64 8575}
!496 = !{i64 8580}
!497 = !{i64 8585}
!498 = !{i64 8601}
!499 = !{i64 8632}
!500 = !{i64 8627}
!501 = !{i64 8636}
!502 = !{i64 8644}
!503 = !{i64 8652}
!504 = !{i64 8657}
!505 = !{i64 8663}
!506 = !{i64 8669}
!507 = !{i64 8675}
!508 = !{i64 8681}
!509 = !{i64 8687}
!510 = !{i64 8693}
!511 = !{i64 8699}
!512 = !{i64 8705}
!513 = !{i64 8711}
!514 = !{i64 8717}
!515 = !{i64 8723}
!516 = !{i64 8729}
!517 = !{i64 8735}
!518 = !{i64 8741}
!519 = !{i64 8747}
!520 = !{i64 8754}
!521 = !{i64 8756}
!522 = !{i64 8765}
!523 = !{i64 8768}
!524 = !{i64 8778}
!525 = !{i64 8788}
!526 = !{i64 8807}
!527 = !{i64 8808}
!528 = !{i64 8816}
!529 = !{i64 8822}
!530 = !{i64 8827}
!531 = !{i64 8834}
!532 = !{i64 8836}
!533 = !{i64 8842}
!534 = !{i64 8850}
!535 = !{i64 8863}
!536 = !{i64 8867}
!537 = !{i64 8875}
!538 = !{i64 8888}
!539 = !{i64 8891}
!540 = !{i64 8899}
!541 = !{i64 8909}
!542 = !{i64 8930}
!543 = !{i64 8941}
!544 = !{i64 8953}
!545 = !{i64 8978}
!546 = !{i64 8986}
!547 = !{i64 8996}
!548 = !{i64 9000}
!549 = !{i64 9017}
!550 = !{i64 9028}
!551 = !{i64 9040}
!552 = !{i64 9054}
!553 = !{i64 9057}
!554 = !{i64 9065}
!555 = !{i64 9081}
!556 = !{i64 9097}
!557 = !{i64 9108}
!558 = !{i64 9124}
!559 = !{i64 9141}
!560 = !{i64 9158}
!561 = !{i64 9161}
!562 = !{i64 9162}
!563 = !{i64 9169}
!564 = !{i64 9179}
!565 = !{i64 9183}
!566 = !{i64 9189}
!567 = !{i64 9232}
!568 = !{i64 9243}
!569 = !{i64 9262}
!570 = !{i64 9275}
!571 = !{i64 9283}
!572 = !{i64 9288}
!573 = !{i64 9296}
!574 = !{i64 9303}
!575 = !{i64 9311}
!576 = !{i64 9328}
!577 = !{i64 9333}
!578 = !{i64 9337}
!579 = !{i64 9338}
!580 = !{i64 9348}
!581 = !{i64 9358}
!582 = !{i64 9375}
!583 = !{i64 9383}
!584 = !{i64 9389}
!585 = !{i64 9396}
!586 = !{i64 9398}
!587 = !{i64 9404}
!588 = !{i64 9416}
!589 = !{i64 9430}
!590 = !{i64 9436}
!591 = !{i64 9437}
!592 = !{i64 9445}
!593 = !{i64 9454}
!594 = !{i64 9460}
!595 = !{i64 9461}
!596 = !{i64 9469}
!597 = !{i64 9478}
!598 = !{i64 9484}
!599 = !{i64 9485}
!600 = !{i64 9493}
!601 = !{i64 9502}
!602 = !{i64 9508}
!603 = !{i64 9509}
!604 = !{i64 9517}
!605 = !{i64 9526}
!606 = !{i64 9532}
!607 = !{i64 9533}
!608 = !{i64 9541}
!609 = !{i64 9550}
!610 = !{i64 9556}
!611 = !{i64 9557}
!612 = !{i64 9565}
!613 = !{i64 9574}
!614 = !{i64 9580}
!615 = !{i64 9581}
!616 = !{i64 9589}
!617 = !{i64 9598}
!618 = !{i64 9604}
!619 = !{i64 9605}
!620 = !{i64 9613}
!621 = !{i64 9622}
!622 = !{i64 9628}
!623 = !{i64 9629}
!624 = !{i64 9637}
!625 = !{i64 9646}
!626 = !{i64 9652}
!627 = !{i64 9653}
!628 = !{i64 9666}
!629 = !{i64 9677}
!630 = !{i64 9687}
!631 = !{i64 9692}
!632 = !{i64 9697}
!633 = !{i64 9708}
!634 = !{i64 9712}
!635 = !{i64 9733}
!636 = !{i64 9747}
!637 = !{i64 9758}
!638 = !{i64 9760}
!639 = !{i64 9764}
!640 = !{i64 9775}
!641 = !{i64 9781}
!642 = !{i64 9784}
!643 = !{i64 9810}
!644 = !{i64 9816}
!645 = !{i64 9819}
!646 = !{i64 9825}
!647 = !{i64 9844}
!648 = !{i64 9855}
!649 = !{i64 9864}
