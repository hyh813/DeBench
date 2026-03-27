source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

@global_var_3fe6 = local_unnamed_addr constant i32 5439487
@global_var_3f65 = constant i32 33784644
@global_var_3eee = local_unnamed_addr constant i32 4587519
@global_var_3e7f = local_unnamed_addr constant i32 263180
@global_var_3e04 = constant i32 28
@global_var_3bc0 = constant i32 222429829
@global_var_3b98 = constant i32 135152896
@global_var_3b7d = constant i32 33784644
@global_var_3b4d = constant i32 1
@global_var_3b0e = local_unnamed_addr constant i32 1627521923
@global_var_3af6 = local_unnamed_addr constant i32 41680896
@global_var_3ad5 = constant i32 -1426063358
@global_var_3ab3 = local_unnamed_addr constant i32 -2109952
@global_var_3a8e = constant i32 -545980416
@global_var_3a65 = constant i32 -335544320
@global_var_3a4c = constant i32 222429829
@global_var_3a2f = constant i32 1812071693
@global_var_3a0e = constant i32 33885506
@global_var_39f1 = constant i32 214156795
@global_var_39d8 = constant i32 348
@global_var_39b8 = constant i32 316
@global_var_3983 = constant i32 239403008
@global_var_394e = constant i32 67945808
@global_var_3925 = local_unnamed_addr constant i32 -2063069627
@global_var_3901 = constant i32 0
@global_var_38d4 = local_unnamed_addr constant i32 -10132
@global_var_388e = constant i32 25691140
@global_var_3627 = local_unnamed_addr constant i32 1162674186
@global_var_35db = local_unnamed_addr constant i32 -1780040313
@global_var_3582 = local_unnamed_addr constant [27 x i8] c"TM-L3-01 (tls_access): %d\0A\00"
@global_var_352b = local_unnamed_addr constant [10 x i8] c"ptr): %d\0A\00"
@global_var_34c0 = local_unnamed_addr constant [15 x i8] c"s_buffer): %d\0A\00"
@global_var_3477 = local_unnamed_addr constant [18 x i8] c"_const_data): %d\0A\00"
@global_var_3426 = local_unnamed_addr constant [28 x i8] c"(access_extern_global): %d\0A\00"
@global_var_33d3 = local_unnamed_addr constant [6 x i8] c": %d\0A\00"
@global_var_3395 = constant [28 x i8] c"1-01 (global_var_read): %d\0A\00"
@global_var_310b = local_unnamed_addr constant [25 x i8] c"2-03 (alloca_usage): %d\0A\00"
@global_var_30db = local_unnamed_addr constant [16 x i8] c"ack_frame): %d\0A\00"
@global_var_30b6 = local_unnamed_addr constant [16 x i8] c"_of_array): %d\0A\00"
@global_var_3097 = constant [11 x i8] c"ocal): %d\0A\00"
@global_var_3047 = local_unnamed_addr constant [24 x i8] c"1-02 (local_array): %d\0A\00"
@0 = external global i32
@global_var_3e8 = global i1 true

define i32 @_init() local_unnamed_addr {
dec_label_pc_1000:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !0
  %3 = call i32 @frame_dummy(), !insn.addr !1
  %4 = call i32 @__do_global_ctors_aux(), !insn.addr !2
  ret i32 %4, !insn.addr !3
}

define void @function_1140(i32* %d) local_unnamed_addr {
dec_label_pc_1140:
  call void @__cxa_finalize(i32* %d), !insn.addr !4
  ret void, !insn.addr !4
}

define i32 @function_1150(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_1150:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define i32 @function_1160(i8* %format, ...) local_unnamed_addr {
dec_label_pc_1160:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i32* @function_1170(i32* %dest, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1170:
  %0 = call i32* @memmove(i32* %dest, i32* %src, i32 %n), !insn.addr !7
  ret i32* %0, !insn.addr !7
}

define void @function_1180(i32* %ptr) local_unnamed_addr {
dec_label_pc_1180:
  call void @free(i32* %ptr), !insn.addr !8
  ret void, !insn.addr !8
}

define i32* @function_1190(i32* %dest, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1190:
  %0 = call i32* @memcpy(i32* %dest, i32* %src, i32 %n), !insn.addr !9
  ret i32* %0, !insn.addr !9
}

define i32 @function_11a0(i32* %s1, i32* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_11a0:
  %0 = call i32 @memcmp(i32* %s1, i32* %s2, i32 %n), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define void @function_11b0() local_unnamed_addr {
dec_label_pc_11b0:
  call void @__stack_chk_fail(), !insn.addr !11
  ret void, !insn.addr !11
}

define void @function_11c0(i8* %s) local_unnamed_addr {
dec_label_pc_11c0:
  call void @perror(i8* %s), !insn.addr !12
  ret void, !insn.addr !12
}

define i32 @function_11d0(i32 %pid, i32* %stat_loc, i32 %options) local_unnamed_addr {
dec_label_pc_11d0:
  %0 = call i32 @waitpid(i32 %pid, i32* %stat_loc, i32 %options), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define i32* @function_11e0(i32* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_11e0:
  %0 = call i32* @realloc(i32* %ptr, i32 %size), !insn.addr !14
  ret i32* %0, !insn.addr !14
}

define i32* @function_11f0(i32 %size) local_unnamed_addr {
dec_label_pc_11f0:
  %0 = call i32* @malloc(i32 %size), !insn.addr !15
  ret i32* %0, !insn.addr !15
}

define i32 @function_1200(i8* %s) local_unnamed_addr {
dec_label_pc_1200:
  %0 = call i32 @puts(i8* %s), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define void @function_1210(i32 %status) local_unnamed_addr {
dec_label_pc_1210:
  call void @exit(i32 %status), !insn.addr !17
  ret void, !insn.addr !17
}

define i32* @function_1220(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_1220:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !18
  ret i32* %0, !insn.addr !18
}

define i32 @function_1230() local_unnamed_addr {
dec_label_pc_1230:
  %0 = call i32 @fork(), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32* @function_1240(i32 %nmemb, i32 %size) local_unnamed_addr {
dec_label_pc_1240:
  %0 = call i32* @calloc(i32 %nmemb, i32 %size), !insn.addr !20
  ret i32* %0, !insn.addr !20
}

define i32 @_start(i32 %arg1) local_unnamed_addr {
dec_label_pc_1250:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_4 = alloca i32, align 4
  %3 = call i32 @function_127c(i32 %2), !insn.addr !21
  %4 = bitcast i32* %stack_var_4 to i8**
  %5 = add i32 %1, 19860, !insn.addr !22
  %6 = inttoptr i32 %5 to i32*, !insn.addr !22
  %7 = load i32, i32* %6, align 4, !insn.addr !22
  %8 = call i32 @__libc_start_main(i32 %7, i32 %arg1, i8** nonnull %4, void ()* null, void ()* null, void ()* bitcast (i32* @0 to void ()*)), !insn.addr !23
  %9 = call i32 @__asm_hlt(), !insn.addr !24
  unreachable, !insn.addr !24

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @function_127c(i32 %arg1) local_unnamed_addr {
dec_label_pc_127c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !25
}

define i32 @__x86.get_pc_thunk.bx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1280:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !26
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1290:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !27
  %3 = add i32 %1, 19931, !insn.addr !28
  ret i32 %3, !insn.addr !29
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_12d0:
  %0 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !30
  ret i32 0, !insn.addr !31
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1320:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.di(i32 %1), !insn.addr !33
  %3 = add i32 %1, 19795, !insn.addr !34
  %4 = inttoptr i32 %3 to i8*, !insn.addr !34
  %5 = load i8, i8* %4, align 1, !insn.addr !34
  %6 = icmp eq i8 %5, 0, !insn.addr !34
  %7 = icmp eq i1 %6, false, !insn.addr !35
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !35
  br i1 %7, label %dec_label_pc_13a2, label %dec_label_pc_1341, !insn.addr !35

dec_label_pc_1341:                                ; preds = %dec_label_pc_1320
  %8 = add i32 %1, 19651, !insn.addr !36
  %9 = inttoptr i32 %8 to i32*, !insn.addr !36
  %10 = load i32, i32* %9, align 4, !insn.addr !36
  %11 = icmp eq i32 %10, 0, !insn.addr !37
  br i1 %11, label %dec_label_pc_135e, label %dec_label_pc_134b, !insn.addr !38

dec_label_pc_134b:                                ; preds = %dec_label_pc_1341
  %12 = add i32 %1, 19671, !insn.addr !39
  %13 = inttoptr i32 %12 to i32*, !insn.addr !39
  %14 = load i32, i32* %13, align 4, !insn.addr !39
  %15 = inttoptr i32 %14 to i32*, !insn.addr !40
  call void @__cxa_finalize(i32* %15), !insn.addr !40
  br label %dec_label_pc_135e, !insn.addr !41

dec_label_pc_135e:                                ; preds = %dec_label_pc_134b, %dec_label_pc_1341
  %16 = call i32 @deregister_tm_clones(), !insn.addr !42
  store i8 1, i8* %4, align 1, !insn.addr !43
  store i32 %16, i32* %eax.0.reg2mem, !insn.addr !43
  br label %dec_label_pc_13a2, !insn.addr !43

dec_label_pc_13a2:                                ; preds = %dec_label_pc_135e, %dec_label_pc_1320
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !44

; uselistorder directives
  uselistorder i32 %1, { 3, 2, 0, 1 }
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_13b0:
  %0 = call i32 @register_tm_clones(), !insn.addr !45
  ret i32 %0, !insn.addr !45
}

define i32 @__x86.get_pc_thunk.dx(i32 %arg1) local_unnamed_addr {
dec_label_pc_13b9:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !46
}

define i32 @__x86.get_pc_thunk.di(i32 %arg1) local_unnamed_addr {
dec_label_pc_13bd:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !47
}

define i32 @double_value(i32 %arg1) local_unnamed_addr {
dec_label_pc_13c1:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !48
  %3 = mul i32 %arg1, 2, !insn.addr !49
  ret i32 %3, !insn.addr !50
}

define i32 @local_vars(i32 %arg1) local_unnamed_addr {
dec_label_pc_13d9:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !51
  %3 = mul i32 %arg1, 2, !insn.addr !52
  %4 = add i32 %3, 10, !insn.addr !53
  ret i32 %4, !insn.addr !54
}

define i32 @local_array(i32 %arg1) local_unnamed_addr {
dec_label_pc_1409:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !55
  %storemerge1.reg2mem = alloca i32, !insn.addr !55
  %1 = load i32, i32* %0
  %stack_var_-4 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !56
  %3 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !57
  %4 = call i32 @__readgsdword(i32 20), !insn.addr !58
  %5 = add i32 %2, -52, !insn.addr !59
  store i32 0, i32* %storemerge1.reg2mem
  br label %dec_label_pc_1431

dec_label_pc_1431:                                ; preds = %dec_label_pc_1431, %dec_label_pc_1409
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %6 = mul i32 %storemerge1.reload, %arg1, !insn.addr !60
  %7 = mul i32 %storemerge1.reload, 4, !insn.addr !59
  %8 = add i32 %5, %7, !insn.addr !59
  %9 = inttoptr i32 %8 to i32*, !insn.addr !59
  store i32 %6, i32* %9, align 4, !insn.addr !59
  %10 = add nuw nsw i32 %storemerge1.reload, 1, !insn.addr !61
  %exitcond = icmp eq i32 %10, 10
  store i32 %10, i32* %storemerge1.reg2mem, !insn.addr !62
  br i1 %exitcond, label %dec_label_pc_144b, label %dec_label_pc_1431, !insn.addr !62

dec_label_pc_144b:                                ; preds = %dec_label_pc_1431
  %11 = call i32 @__readgsdword(i32 20), !insn.addr !63
  %12 = icmp eq i32 %4, %11, !insn.addr !63
  br i1 %12, label %dec_label_pc_145f, label %dec_label_pc_145a, !insn.addr !64

dec_label_pc_145a:                                ; preds = %dec_label_pc_144b
  %13 = call i32 @__stack_chk_fail_local(), !insn.addr !65
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !65
  br label %dec_label_pc_145f, !insn.addr !65

dec_label_pc_145f:                                ; preds = %dec_label_pc_145a, %dec_label_pc_144b
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !66

; uselistorder directives
  uselistorder i32 %storemerge1.reload, { 0, 2, 1 }
  uselistorder i32* %storemerge1.reg2mem, { 1, 0, 2 }
}

define i32 @local_struct(i32 %arg1) local_unnamed_addr {
dec_label_pc_1461:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !67
  %3 = mul i32 %arg1, 3, !insn.addr !68
  ret i32 %3, !insn.addr !69
}

define i32 @address_of_local(i32* %arg1) local_unnamed_addr {
dec_label_pc_148d:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !70
  store i32 42, i32* %arg1, align 4, !insn.addr !71
  ret i32 42, !insn.addr !72
}

define i32 @address_of_array(i32* %arg1) local_unnamed_addr {
dec_label_pc_14b5:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !73
  %3 = load i32, i32* %arg1, align 4
  %4 = mul i32 %3, 2, !insn.addr !74
  ret i32 %4, !insn.addr !75
}

define i32 @large_stack_frame() local_unnamed_addr {
dec_label_pc_14e3:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i8, !insn.addr !76
  %1 = load i32, i32* %0
  %stack_var_-2064 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !77
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !78
  %4 = ptrtoint i32* %stack_var_-2064 to i32, !insn.addr !79
  store i8 0, i8* %storemerge.reg2mem, !insn.addr !80
  br label %dec_label_pc_1530, !insn.addr !80

dec_label_pc_1530:                                ; preds = %dec_label_pc_1530, %dec_label_pc_14e3
  %storemerge.reload = load i8, i8* %storemerge.reg2mem
  %5 = sext i8 %storemerge.reload to i32, !insn.addr !81
  %6 = add i32 %5, %4, !insn.addr !82
  %7 = inttoptr i32 %6 to i8*, !insn.addr !83
  store i8 %storemerge.reload, i8* %7, align 1, !insn.addr !83
  %8 = add i8 %storemerge.reload, 1, !insn.addr !84
  store i8 %8, i8* %storemerge.reg2mem, !insn.addr !84
  br label %dec_label_pc_1530, !insn.addr !84

; uselistorder directives
  uselistorder i8 %storemerge.reload, { 2, 0, 1 }
  uselistorder i8* %storemerge.reg2mem, { 2, 0, 1 }
}

define i32 @vla_stack(i32 %arg1) local_unnamed_addr {
dec_label_pc_1559:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !85
  %storemerge.reg2mem = alloca i32, !insn.addr !85
  %storemerge13.reg2mem = alloca i32, !insn.addr !85
  %1 = load i32, i32* %0
  %stack_var_-28 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !86
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !87
  %4 = icmp slt i32 %arg1, 1, !insn.addr !88
  %5 = icmp sgt i32 %arg1, ptrtoint (i1* @global_var_3e8 to i32), !insn.addr !89
  %or.cond = or i1 %4, %5
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !88
  br i1 %or.cond, label %dec_label_pc_1648, label %dec_label_pc_1619.lr.ph, !insn.addr !88

dec_label_pc_1619.lr.ph:                          ; preds = %dec_label_pc_1559
  %6 = ptrtoint i32* %stack_var_-28 to i32, !insn.addr !90
  %7 = mul i32 %arg1, 4, !insn.addr !91
  %8 = add i32 %7, 15, !insn.addr !92
  %9 = udiv i32 %8, 16
  %10 = mul i32 %9, 16
  %11 = and i32 %10, -4096, !insn.addr !93
  %12 = sub i32 %6, %11, !insn.addr !94
  %13 = and i32 %10, 4080, !insn.addr !95
  %14 = sub i32 %12, %13, !insn.addr !96
  store i32 0, i32* %stack_var_-28, align 4
  store i32 0, i32* %storemerge13.reg2mem
  br label %dec_label_pc_1619

dec_label_pc_1619:                                ; preds = %dec_label_pc_1619.lr.ph, %dec_label_pc_1619
  %storemerge13.reload = load i32, i32* %storemerge13.reg2mem
  %15 = mul i32 %storemerge13.reload, 2, !insn.addr !97
  %16 = mul i32 %storemerge13.reload, 4, !insn.addr !98
  %17 = add i32 %16, %14, !insn.addr !98
  %18 = inttoptr i32 %17 to i32*, !insn.addr !98
  store i32 %15, i32* %18, align 4, !insn.addr !98
  %19 = load i32, i32* %stack_var_-28, align 4, !insn.addr !99
  %20 = add i32 %19, 1, !insn.addr !99
  store i32 %20, i32* %stack_var_-28, align 4
  %21 = icmp slt i32 %20, %arg1, !insn.addr !100
  store i32 %20, i32* %storemerge13.reg2mem, !insn.addr !100
  br i1 %21, label %dec_label_pc_1619, label %dec_label_pc_1634, !insn.addr !100

dec_label_pc_1634:                                ; preds = %dec_label_pc_1619
  %22 = icmp slt i32 %arg1, 0
  %23 = zext i1 %22 to i32, !insn.addr !101
  %24 = add i32 %23, %arg1, !insn.addr !102
  %25 = udiv i32 %24, 2
  %26 = mul i32 %25, 4, !insn.addr !103
  %27 = add i32 %14, %26, !insn.addr !103
  %28 = inttoptr i32 %27 to i32*, !insn.addr !103
  %29 = load i32, i32* %28, align 4, !insn.addr !103
  store i32 %29, i32* %storemerge.reg2mem, !insn.addr !103
  br label %dec_label_pc_1648, !insn.addr !103

dec_label_pc_1648:                                ; preds = %dec_label_pc_1559, %dec_label_pc_1634
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %30 = call i32 @__readgsdword(i32 20), !insn.addr !104
  %31 = icmp eq i32 %3, %30, !insn.addr !104
  store i32 %storemerge.reload, i32* %eax.0.reg2mem, !insn.addr !105
  br i1 %31, label %dec_label_pc_165b, label %dec_label_pc_1656, !insn.addr !105

dec_label_pc_1656:                                ; preds = %dec_label_pc_1648
  %32 = call i32 @__stack_chk_fail_local(), !insn.addr !106
  store i32 %32, i32* %eax.0.reg2mem, !insn.addr !106
  br label %dec_label_pc_165b, !insn.addr !106

dec_label_pc_165b:                                ; preds = %dec_label_pc_1656, %dec_label_pc_1648
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !107

; uselistorder directives
  uselistorder i32 %20, { 0, 2, 1 }
  uselistorder i32 %storemerge13.reload, { 1, 0 }
  uselistorder i32 %14, { 1, 0 }
  uselistorder i32 %10, { 1, 0 }
  uselistorder i32* %stack_var_-28, { 1, 2, 0, 3 }
  uselistorder i32* %storemerge13.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg1, { 2, 1, 3, 0, 4, 5 }
  uselistorder label %dec_label_pc_1648, { 1, 0 }
  uselistorder label %dec_label_pc_1619, { 1, 0 }
}

define i32 @alloca_usage(i32 %arg1) local_unnamed_addr {
dec_label_pc_1660:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !108
  %storemerge.reg2mem = alloca i32, !insn.addr !108
  %storemerge12.reg2mem = alloca i32, !insn.addr !108
  %1 = load i32, i32* %0
  %stack_var_-28 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !109
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !110
  %4 = icmp eq i32 %arg1, 0, !insn.addr !111
  %5 = icmp slt i32 %arg1, 0, !insn.addr !111
  %6 = icmp eq i1 %5, false, !insn.addr !112
  %7 = icmp eq i1 %4, false, !insn.addr !112
  %8 = icmp eq i1 %6, %7, !insn.addr !112
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !112
  br i1 %8, label %dec_label_pc_168f, label %dec_label_pc_174c, !insn.addr !112

dec_label_pc_168f:                                ; preds = %dec_label_pc_1660
  %9 = ptrtoint i32* %stack_var_-28 to i32, !insn.addr !113
  %10 = mul i32 %arg1, 4, !insn.addr !114
  %11 = add i32 %10, 27, !insn.addr !115
  %12 = udiv i32 %11, 16
  %13 = mul i32 %12, 16
  %14 = and i32 %13, -4096, !insn.addr !116
  %15 = and i32 %13, 4080, !insn.addr !117
  %16 = sub nsw i32 15, %15, !insn.addr !118
  %17 = sub i32 %16, %14, !insn.addr !119
  %18 = add i32 %17, %9, !insn.addr !120
  %19 = and i32 %18, -16, !insn.addr !121
  %20 = icmp sgt i32 %arg1, 0, !insn.addr !122
  store i32 0, i32* %storemerge12.reg2mem, !insn.addr !122
  br i1 %20, label %dec_label_pc_170b, label %dec_label_pc_1732, !insn.addr !122

dec_label_pc_170b:                                ; preds = %dec_label_pc_168f, %dec_label_pc_170b
  %storemerge12.reload = load i32, i32* %storemerge12.reg2mem
  %21 = mul i32 %storemerge12.reload, 4, !insn.addr !123
  %22 = add i32 %21, %19, !insn.addr !124
  %23 = mul i32 %storemerge12.reload, 3, !insn.addr !125
  %24 = inttoptr i32 %22 to i32*, !insn.addr !126
  store i32 %23, i32* %24, align 4, !insn.addr !126
  %25 = add nuw nsw i32 %storemerge12.reload, 1, !insn.addr !127
  %exitcond = icmp eq i32 %25, %arg1
  store i32 %25, i32* %storemerge12.reg2mem, !insn.addr !122
  br i1 %exitcond, label %dec_label_pc_1732, label %dec_label_pc_170b, !insn.addr !122

dec_label_pc_1732:                                ; preds = %dec_label_pc_170b, %dec_label_pc_168f
  %26 = icmp slt i32 %arg1, 0
  %27 = zext i1 %26 to i32, !insn.addr !128
  %28 = add i32 %27, %arg1, !insn.addr !129
  %29 = udiv i32 %28, 2
  %30 = mul i32 %29, 4, !insn.addr !130
  %31 = add i32 %19, %30, !insn.addr !131
  %32 = inttoptr i32 %31 to i32*, !insn.addr !132
  %33 = load i32, i32* %32, align 4, !insn.addr !132
  store i32 %33, i32* %storemerge.reg2mem, !insn.addr !132
  br label %dec_label_pc_174c, !insn.addr !132

dec_label_pc_174c:                                ; preds = %dec_label_pc_1660, %dec_label_pc_1732
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %34 = call i32 @__readgsdword(i32 20), !insn.addr !133
  %35 = icmp eq i32 %3, %34, !insn.addr !133
  store i32 %storemerge.reload, i32* %eax.0.reg2mem, !insn.addr !134
  br i1 %35, label %dec_label_pc_175d, label %dec_label_pc_1758, !insn.addr !134

dec_label_pc_1758:                                ; preds = %dec_label_pc_174c
  %36 = call i32 @__stack_chk_fail_local(), !insn.addr !135
  store i32 %36, i32* %eax.0.reg2mem, !insn.addr !135
  br label %dec_label_pc_175d, !insn.addr !135

dec_label_pc_175d:                                ; preds = %dec_label_pc_1758, %dec_label_pc_174c
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !136

; uselistorder directives
  uselistorder i32 %13, { 1, 0 }
  uselistorder i32* %storemerge12.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 16, { 0, 2, 1, 3 }
  uselistorder i32 %arg1, { 2, 1, 3, 4, 0, 6, 5 }
  uselistorder label %dec_label_pc_174c, { 1, 0 }
  uselistorder label %dec_label_pc_170b, { 1, 0 }
}

define i32 @stack_alias(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_175f:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !137
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !138
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !139
  %4 = call i32 @__readgsdword(i32 20), !insn.addr !140
  %5 = icmp eq i32 %3, %4, !insn.addr !140
  store i32 20, i32* %eax.0.reg2mem, !insn.addr !141
  br i1 %5, label %dec_label_pc_17d1, label %dec_label_pc_17cc, !insn.addr !141

dec_label_pc_17cc:                                ; preds = %dec_label_pc_175f
  %6 = call i32 @__stack_chk_fail_local(), !insn.addr !142
  store i32 %6, i32* %eax.0.reg2mem, !insn.addr !142
  br label %dec_label_pc_17d1, !insn.addr !142

dec_label_pc_17d1:                                ; preds = %dec_label_pc_17cc, %dec_label_pc_175f
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !143
}

define i32 @test_stack_memory() local_unnamed_addr {
dec_label_pc_17d3:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !144
  %1 = load i32, i32* %0
  %stack_var_-60 = alloca i32, align 4
  %stack_var_-56 = alloca i32, align 4
  %stack_var_-64 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !145
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !146
  %4 = add i32 %1, 6180, !insn.addr !147
  %5 = inttoptr i32 %4 to i8*, !insn.addr !148
  %6 = call i32 @puts(i8* %5), !insn.addr !149
  %7 = call i32 @local_vars(i32 5), !insn.addr !150
  %8 = add i32 %1, 6210, !insn.addr !151
  %9 = inttoptr i32 %8 to i8*, !insn.addr !152
  %10 = call i32 (i8*, ...) @printf(i8* %9), !insn.addr !153
  %11 = call i32 @local_array(i32 2), !insn.addr !154
  %12 = add i32 %1, 6238, !insn.addr !155
  %13 = inttoptr i32 %12 to i8*, !insn.addr !156
  %14 = call i32 (i8*, ...) @printf(i8* %13), !insn.addr !157
  %15 = call i32 @local_struct(i32 5), !insn.addr !158
  %16 = add i32 %1, 6267, !insn.addr !159
  %17 = inttoptr i32 %16 to i8*, !insn.addr !160
  %18 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !161
  %19 = call i32 @address_of_local(i32* nonnull %stack_var_-64), !insn.addr !162
  %20 = add i32 %1, 6300, !insn.addr !163
  %21 = inttoptr i32 %20 to i8*, !insn.addr !164
  %22 = call i32 (i8*, ...) @printf(i8* %21), !insn.addr !165
  %23 = bitcast i32* %stack_var_-56 to i8*, !insn.addr !166
  call void @__asm_rep_stosd_memset(i8* nonnull %23, i32 0, i32 10), !insn.addr !166
  store i32 1, i32* %stack_var_-56, align 4, !insn.addr !167
  %24 = call i32 @address_of_array(i32* nonnull %stack_var_-56), !insn.addr !168
  %25 = add i32 %1, 6336, !insn.addr !169
  %26 = inttoptr i32 %25 to i8*, !insn.addr !170
  %27 = call i32 (i8*, ...) @printf(i8* %26), !insn.addr !171
  %28 = call i32 @large_stack_frame(), !insn.addr !172
  %29 = add i32 %1, 6372, !insn.addr !173
  %30 = inttoptr i32 %29 to i8*, !insn.addr !174
  %31 = call i32 (i8*, ...) @printf(i8* %30), !insn.addr !175
  %32 = call i32 @vla_stack(i32 10), !insn.addr !176
  %33 = add i32 %1, 6407, !insn.addr !177
  %34 = inttoptr i32 %33 to i8*, !insn.addr !178
  %35 = call i32 (i8*, ...) @printf(i8* %34), !insn.addr !179
  %36 = call i32 @alloca_usage(i32 10), !insn.addr !180
  %37 = add i32 %1, 6434, !insn.addr !181
  %38 = inttoptr i32 %37 to i8*, !insn.addr !182
  %39 = call i32 (i8*, ...) @printf(i8* %38), !insn.addr !183
  store i32 0, i32* %stack_var_-60, align 4, !insn.addr !184
  %40 = call i32 @stack_alias(i32* nonnull %stack_var_-60, i32* nonnull %stack_var_-60), !insn.addr !185
  %41 = add i32 %1, 6464, !insn.addr !186
  %42 = inttoptr i32 %41 to i8*, !insn.addr !187
  %43 = call i32 (i8*, ...) @printf(i8* %42), !insn.addr !188
  %44 = call i32 @__readgsdword(i32 20), !insn.addr !189
  %45 = icmp eq i32 %3, %44, !insn.addr !189
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !190
  br i1 %45, label %dec_label_pc_1968, label %dec_label_pc_1963, !insn.addr !190

dec_label_pc_1963:                                ; preds = %dec_label_pc_17d3
  %46 = call i32 @__stack_chk_fail_local(), !insn.addr !191
  store i32 %46, i32* %eax.0.reg2mem, !insn.addr !191
  br label %dec_label_pc_1968, !insn.addr !191

dec_label_pc_1968:                                ; preds = %dec_label_pc_1963, %dec_label_pc_17d3
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !192

; uselistorder directives
  uselistorder i32* %stack_var_-56, { 0, 2, 1 }
  uselistorder i32 %1, { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 10 }
}

define i32 @heap_basic(i32 %arg1) local_unnamed_addr {
dec_label_pc_196f:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !193
  %storemerge12.reg2mem = alloca i32, !insn.addr !193
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !194
  %3 = mul i32 %arg1, 4, !insn.addr !195
  %4 = call i32* @malloc(i32 %3), !insn.addr !196
  %5 = icmp eq i32* %4, null, !insn.addr !197
  %6 = icmp eq i1 %5, false, !insn.addr !198
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !198
  br i1 %6, label %dec_label_pc_19ca.preheader, label %dec_label_pc_1a00, !insn.addr !198

dec_label_pc_19ca.preheader:                      ; preds = %dec_label_pc_196f
  %7 = ptrtoint i32* %4 to i32, !insn.addr !196
  %8 = icmp sgt i32 %arg1, 0, !insn.addr !199
  store i32 0, i32* %storemerge12.reg2mem, !insn.addr !199
  br i1 %8, label %dec_label_pc_19b0, label %dec_label_pc_19d2, !insn.addr !199

dec_label_pc_19b0:                                ; preds = %dec_label_pc_19ca.preheader, %dec_label_pc_19b0
  %storemerge12.reload = load i32, i32* %storemerge12.reg2mem
  %9 = mul i32 %storemerge12.reload, 4, !insn.addr !200
  %10 = add i32 %9, %7, !insn.addr !201
  %11 = mul i32 %storemerge12.reload, 2, !insn.addr !202
  %12 = inttoptr i32 %10 to i32*, !insn.addr !203
  store i32 %11, i32* %12, align 4, !insn.addr !203
  %13 = add nuw nsw i32 %storemerge12.reload, 1, !insn.addr !204
  %exitcond = icmp eq i32 %13, %arg1
  store i32 %13, i32* %storemerge12.reg2mem, !insn.addr !199
  br i1 %exitcond, label %dec_label_pc_19d2, label %dec_label_pc_19b0, !insn.addr !199

dec_label_pc_19d2:                                ; preds = %dec_label_pc_19b0, %dec_label_pc_19ca.preheader
  %14 = icmp slt i32 %arg1, 0
  %15 = zext i1 %14 to i32, !insn.addr !205
  %16 = add i32 %15, %arg1, !insn.addr !206
  %17 = udiv i32 %16, 2
  %18 = mul i32 %17, 4, !insn.addr !207
  %19 = add i32 %18, %7, !insn.addr !208
  %20 = inttoptr i32 %19 to i32*, !insn.addr !209
  %21 = load i32, i32* %20, align 4, !insn.addr !209
  call void @free(i32* %4), !insn.addr !210
  store i32 %21, i32* %storemerge.reg2mem, !insn.addr !211
  br label %dec_label_pc_1a00, !insn.addr !211

dec_label_pc_1a00:                                ; preds = %dec_label_pc_196f, %dec_label_pc_19d2
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !212

; uselistorder directives
  uselistorder i32 %storemerge12.reload, { 0, 2, 1 }
  uselistorder i32* %4, { 0, 2, 1 }
  uselistorder i32* %storemerge12.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg1, { 2, 1, 3, 4, 0 }
  uselistorder label %dec_label_pc_1a00, { 1, 0 }
  uselistorder label %dec_label_pc_19b0, { 1, 0 }
}

define i32 @heap_calloc(i32 %arg1) local_unnamed_addr {
dec_label_pc_1a05:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !213
  %stack_var_-24.0.lcssa.reg2mem = alloca i32, !insn.addr !213
  %stack_var_-24.02.reg2mem = alloca i32, !insn.addr !213
  %storemerge13.reg2mem = alloca i32, !insn.addr !213
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !214
  %3 = call i32* @calloc(i32 %arg1, i32 4), !insn.addr !215
  %4 = icmp eq i32* %3, null, !insn.addr !216
  %5 = icmp eq i1 %4, false, !insn.addr !217
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !217
  br i1 %5, label %dec_label_pc_1a64.preheader, label %dec_label_pc_1a7d, !insn.addr !217

dec_label_pc_1a64.preheader:                      ; preds = %dec_label_pc_1a05
  %6 = ptrtoint i32* %3 to i32, !insn.addr !215
  %7 = icmp sgt i32 %arg1, 0, !insn.addr !218
  store i32 0, i32* %storemerge13.reg2mem, !insn.addr !218
  store i32 0, i32* %stack_var_-24.02.reg2mem, !insn.addr !218
  store i32 0, i32* %stack_var_-24.0.lcssa.reg2mem, !insn.addr !218
  br i1 %7, label %dec_label_pc_1a4c, label %dec_label_pc_1a6c, !insn.addr !218

dec_label_pc_1a4c:                                ; preds = %dec_label_pc_1a64.preheader, %dec_label_pc_1a4c
  %stack_var_-24.02.reload = load i32, i32* %stack_var_-24.02.reg2mem
  %storemerge13.reload = load i32, i32* %storemerge13.reg2mem
  %8 = mul i32 %storemerge13.reload, 4, !insn.addr !219
  %9 = add i32 %8, %6, !insn.addr !220
  %10 = inttoptr i32 %9 to i32*, !insn.addr !221
  %11 = load i32, i32* %10, align 4, !insn.addr !221
  %12 = add i32 %11, %stack_var_-24.02.reload, !insn.addr !222
  %13 = add nuw nsw i32 %storemerge13.reload, 1, !insn.addr !223
  %exitcond = icmp eq i32 %13, %arg1
  store i32 %13, i32* %storemerge13.reg2mem, !insn.addr !218
  store i32 %12, i32* %stack_var_-24.02.reg2mem, !insn.addr !218
  store i32 %12, i32* %stack_var_-24.0.lcssa.reg2mem, !insn.addr !218
  br i1 %exitcond, label %dec_label_pc_1a6c, label %dec_label_pc_1a4c, !insn.addr !218

dec_label_pc_1a6c:                                ; preds = %dec_label_pc_1a4c, %dec_label_pc_1a64.preheader
  %stack_var_-24.0.lcssa.reload = load i32, i32* %stack_var_-24.0.lcssa.reg2mem
  call void @free(i32* %3), !insn.addr !224
  store i32 %stack_var_-24.0.lcssa.reload, i32* %storemerge.reg2mem, !insn.addr !225
  br label %dec_label_pc_1a7d, !insn.addr !225

dec_label_pc_1a7d:                                ; preds = %dec_label_pc_1a05, %dec_label_pc_1a6c
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !226

; uselistorder directives
  uselistorder i32* %3, { 0, 2, 1 }
  uselistorder i32* %storemerge13.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-24.02.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1a7d, { 1, 0 }
  uselistorder label %dec_label_pc_1a4c, { 1, 0 }
}

define i32 @heap_realloc() local_unnamed_addr {
dec_label_pc_1a82:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !227
  %storemerge.reg2mem = alloca i32, !insn.addr !227
  %storemerge13.reg2mem = alloca i32, !insn.addr !227
  %storemerge24.reg2mem = alloca i32, !insn.addr !227
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !228
  %3 = call i32* @malloc(i32 20), !insn.addr !229
  %4 = ptrtoint i32* %3 to i32, !insn.addr !229
  %5 = icmp eq i32* %3, null, !insn.addr !230
  %6 = icmp eq i1 %5, false, !insn.addr !231
  store i32 0, i32* %storemerge24.reg2mem, !insn.addr !231
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !231
  br i1 %6, label %dec_label_pc_1ac1, label %dec_label_pc_1b7e, !insn.addr !231

dec_label_pc_1ac1:                                ; preds = %dec_label_pc_1a82, %dec_label_pc_1ac1
  %storemerge24.reload = load i32, i32* %storemerge24.reg2mem
  %7 = mul i32 %storemerge24.reload, 4, !insn.addr !232
  %8 = add i32 %7, %4, !insn.addr !233
  %9 = add nuw nsw i32 %storemerge24.reload, 1, !insn.addr !234
  %10 = inttoptr i32 %8 to i32*, !insn.addr !235
  store i32 %9, i32* %10, align 4, !insn.addr !235
  %exitcond5 = icmp eq i32 %9, 5
  store i32 %9, i32* %storemerge24.reg2mem, !insn.addr !236
  br i1 %exitcond5, label %dec_label_pc_1ae2, label %dec_label_pc_1ac1, !insn.addr !236

dec_label_pc_1ae2:                                ; preds = %dec_label_pc_1ac1
  %11 = add i32 %4, 8, !insn.addr !237
  %12 = inttoptr i32 %11 to i32*, !insn.addr !237
  %13 = load i32, i32* %12, align 4, !insn.addr !237
  %14 = call i32* @realloc(i32* %3, i32 40), !insn.addr !238
  %15 = ptrtoint i32* %14 to i32, !insn.addr !238
  %16 = icmp eq i32* %14, null, !insn.addr !239
  %17 = icmp eq i1 %16, false, !insn.addr !240
  store i32 5, i32* %storemerge13.reg2mem, !insn.addr !240
  br i1 %17, label %dec_label_pc_1b28, label %dec_label_pc_1b04, !insn.addr !240

dec_label_pc_1b04:                                ; preds = %dec_label_pc_1ae2
  call void @free(i32* %3), !insn.addr !241
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !242
  br label %dec_label_pc_1b7e, !insn.addr !242

dec_label_pc_1b28:                                ; preds = %dec_label_pc_1ae2, %dec_label_pc_1b28
  %storemerge13.reload = load i32, i32* %storemerge13.reg2mem
  %18 = mul i32 %storemerge13.reload, 4, !insn.addr !243
  %19 = add i32 %18, %15, !insn.addr !244
  %20 = mul nuw nsw i32 %storemerge13.reload, 10, !insn.addr !245
  %21 = inttoptr i32 %19 to i32*, !insn.addr !246
  store i32 %20, i32* %21, align 4, !insn.addr !246
  %22 = add nuw nsw i32 %storemerge13.reload, 1, !insn.addr !247
  %exitcond = icmp eq i32 %22, 10
  store i32 %22, i32* %storemerge13.reg2mem, !insn.addr !248
  br i1 %exitcond, label %dec_label_pc_1b50, label %dec_label_pc_1b28, !insn.addr !248

dec_label_pc_1b50:                                ; preds = %dec_label_pc_1b28
  %23 = add i32 %15, 8, !insn.addr !249
  %24 = inttoptr i32 %23 to i32*, !insn.addr !250
  %25 = load i32, i32* %24, align 4, !insn.addr !250
  %26 = icmp eq i32 %13, %25, !insn.addr !251
  %27 = icmp eq i1 %26, false, !insn.addr !252
  store i32 -3, i32* %storemerge.reg2mem, !insn.addr !252
  br i1 %27, label %dec_label_pc_1b6a, label %dec_label_pc_1b5d, !insn.addr !252

dec_label_pc_1b5d:                                ; preds = %dec_label_pc_1b50
  %28 = add i32 %15, 20, !insn.addr !253
  %29 = inttoptr i32 %28 to i32*, !insn.addr !253
  %30 = load i32, i32* %29, align 4, !insn.addr !253
  store i32 %30, i32* %storemerge.reg2mem, !insn.addr !254
  br label %dec_label_pc_1b6a, !insn.addr !254

dec_label_pc_1b6a:                                ; preds = %dec_label_pc_1b50, %dec_label_pc_1b5d
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  call void @free(i32* %14), !insn.addr !255
  store i32 %storemerge.reload, i32* %eax.0.reg2mem, !insn.addr !256
  br label %dec_label_pc_1b7e, !insn.addr !256

dec_label_pc_1b7e:                                ; preds = %dec_label_pc_1a82, %dec_label_pc_1b6a, %dec_label_pc_1b04
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !257

; uselistorder directives
  uselistorder i32 %15, { 2, 1, 0 }
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32* %storemerge24.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge13.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32* %eax.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_1b7e, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1b6a, { 1, 0 }
  uselistorder label %dec_label_pc_1b28, { 1, 0 }
  uselistorder label %dec_label_pc_1ac1, { 1, 0 }
}

define i32 @heap_array(i32 %arg1) local_unnamed_addr {
dec_label_pc_1b83:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !258
  %storemerge12.reg2mem = alloca i32, !insn.addr !258
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !259
  %3 = mul i32 %arg1, 4, !insn.addr !260
  %4 = call i32* @malloc(i32 %3), !insn.addr !261
  %5 = icmp eq i32* %4, null, !insn.addr !262
  %6 = icmp eq i1 %5, false, !insn.addr !263
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !263
  br i1 %6, label %dec_label_pc_1be3.preheader, label %dec_label_pc_1c19, !insn.addr !263

dec_label_pc_1be3.preheader:                      ; preds = %dec_label_pc_1b83
  %7 = ptrtoint i32* %4 to i32, !insn.addr !261
  %8 = icmp sgt i32 %arg1, 0, !insn.addr !264
  store i32 0, i32* %storemerge12.reg2mem, !insn.addr !264
  br i1 %8, label %dec_label_pc_1bc4, label %dec_label_pc_1beb, !insn.addr !264

dec_label_pc_1bc4:                                ; preds = %dec_label_pc_1be3.preheader, %dec_label_pc_1bc4
  %storemerge12.reload = load i32, i32* %storemerge12.reg2mem
  %9 = mul i32 %storemerge12.reload, 4, !insn.addr !265
  %10 = add i32 %9, %7, !insn.addr !266
  %11 = mul i32 %storemerge12.reload, 3, !insn.addr !267
  %12 = inttoptr i32 %10 to i32*, !insn.addr !268
  store i32 %11, i32* %12, align 4, !insn.addr !268
  %13 = add nuw nsw i32 %storemerge12.reload, 1, !insn.addr !269
  %exitcond = icmp eq i32 %13, %arg1
  store i32 %13, i32* %storemerge12.reg2mem, !insn.addr !264
  br i1 %exitcond, label %dec_label_pc_1beb, label %dec_label_pc_1bc4, !insn.addr !264

dec_label_pc_1beb:                                ; preds = %dec_label_pc_1bc4, %dec_label_pc_1be3.preheader
  %14 = icmp slt i32 %arg1, 0
  %15 = zext i1 %14 to i32, !insn.addr !270
  %16 = add i32 %15, %arg1, !insn.addr !271
  %17 = udiv i32 %16, 2
  %18 = mul i32 %17, 4, !insn.addr !272
  %19 = add i32 %18, %7, !insn.addr !273
  %20 = inttoptr i32 %19 to i32*, !insn.addr !274
  %21 = load i32, i32* %20, align 4, !insn.addr !274
  call void @free(i32* %4), !insn.addr !275
  store i32 %21, i32* %storemerge.reg2mem, !insn.addr !276
  br label %dec_label_pc_1c19, !insn.addr !276

dec_label_pc_1c19:                                ; preds = %dec_label_pc_1b83, %dec_label_pc_1beb
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !277

; uselistorder directives
  uselistorder i32* %4, { 0, 2, 1 }
  uselistorder i32* %storemerge12.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg1, { 2, 1, 3, 4, 0 }
  uselistorder label %dec_label_pc_1c19, { 1, 0 }
  uselistorder label %dec_label_pc_1bc4, { 1, 0 }
}

define i32 @heap_struct(i32 %arg1) local_unnamed_addr {
dec_label_pc_1c1e:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !278
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !279
  %3 = call i32* @malloc(i32 8), !insn.addr !280
  %4 = icmp eq i32* %3, null, !insn.addr !281
  %5 = icmp eq i1 %4, false, !insn.addr !282
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !282
  br i1 %5, label %dec_label_pc_1c51, label %dec_label_pc_1c86, !insn.addr !282

dec_label_pc_1c51:                                ; preds = %dec_label_pc_1c1e
  %6 = ptrtoint i32* %3 to i32, !insn.addr !280
  store i32 %arg1, i32* %3, align 4, !insn.addr !283
  %7 = mul i32 %arg1, 2, !insn.addr !284
  %8 = add i32 %6, 4, !insn.addr !285
  %9 = inttoptr i32 %8 to i32*, !insn.addr !285
  store i32 %7, i32* %9, align 4, !insn.addr !285
  %10 = load i32, i32* %3, align 4, !insn.addr !286
  %11 = add i32 %10, %7, !insn.addr !287
  call void @free(i32* %3), !insn.addr !288
  store i32 %11, i32* %storemerge.reg2mem, !insn.addr !289
  br label %dec_label_pc_1c86, !insn.addr !289

dec_label_pc_1c86:                                ; preds = %dec_label_pc_1c1e, %dec_label_pc_1c51
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !290

; uselistorder directives
  uselistorder i32 %7, { 1, 0 }
  uselistorder i32* %3, { 0, 1, 2, 4, 3 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1c86, { 1, 0 }
}

define i32 @heap_nested(i32* %arg1) local_unnamed_addr {
dec_label_pc_1c8b:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !291
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !292
  %3 = call i32* @malloc(i32 8), !insn.addr !293
  %4 = ptrtoint i32* %3 to i32, !insn.addr !293
  store i32 %4, i32* %arg1, align 4, !insn.addr !294
  %5 = icmp eq i32* %3, null, !insn.addr !295
  %6 = icmp eq i1 %5, false, !insn.addr !296
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !296
  br i1 %6, label %dec_label_pc_1cc3, label %dec_label_pc_1d29, !insn.addr !296

dec_label_pc_1cc3:                                ; preds = %dec_label_pc_1c8b
  store i32 10, i32* %3, align 4, !insn.addr !297
  %7 = load i32, i32* %arg1, align 4, !insn.addr !298
  %8 = call i32* @malloc(i32 8), !insn.addr !299
  %9 = ptrtoint i32* %8 to i32, !insn.addr !299
  %10 = add i32 %7, 4, !insn.addr !300
  %11 = inttoptr i32 %10 to i32*, !insn.addr !300
  store i32 %9, i32* %11, align 4, !insn.addr !300
  %12 = load i32, i32* %arg1, align 4, !insn.addr !301
  %13 = add i32 %12, 4, !insn.addr !302
  %14 = inttoptr i32 %13 to i32*, !insn.addr !302
  %15 = load i32, i32* %14, align 4, !insn.addr !302
  %16 = icmp eq i32 %15, 0, !insn.addr !303
  %17 = icmp eq i1 %16, false, !insn.addr !304
  br i1 %17, label %dec_label_pc_1d07, label %dec_label_pc_1cef, !insn.addr !304

dec_label_pc_1cef:                                ; preds = %dec_label_pc_1cc3
  %18 = inttoptr i32 %12 to i32*, !insn.addr !305
  call void @free(i32* %18), !insn.addr !305
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !306
  br label %dec_label_pc_1d29, !insn.addr !306

dec_label_pc_1d07:                                ; preds = %dec_label_pc_1cc3
  %19 = inttoptr i32 %15 to i32*, !insn.addr !307
  store i32 20, i32* %19, align 4, !insn.addr !307
  %20 = load i32, i32* %arg1, align 4, !insn.addr !308
  %21 = add i32 %20, 4, !insn.addr !309
  %22 = inttoptr i32 %21 to i32*, !insn.addr !309
  %23 = load i32, i32* %22, align 4, !insn.addr !309
  %24 = add i32 %23, 4, !insn.addr !310
  %25 = inttoptr i32 %24 to i32*, !insn.addr !310
  store i32 0, i32* %25, align 4, !insn.addr !310
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !311
  br label %dec_label_pc_1d29, !insn.addr !311

dec_label_pc_1d29:                                ; preds = %dec_label_pc_1c8b, %dec_label_pc_1d07, %dec_label_pc_1cef
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !312

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_1d29, { 1, 2, 0 }
}

define i32 @linked_list_heap() local_unnamed_addr {
dec_label_pc_1d30:
  %0 = alloca i32
  %storemerge1.reg2mem = alloca i32, !insn.addr !313
  %.reg2mem13 = alloca i32, !insn.addr !313
  %stack_var_-32.06.reg2mem = alloca i32, !insn.addr !313
  %storemerge7.reg2mem = alloca i32, !insn.addr !313
  %.reg2mem = alloca i32, !insn.addr !313
  %stack_var_-40.08.reg2mem = alloca i32, !insn.addr !313
  %storemerge29.reg2mem = alloca i32, !insn.addr !313
  %1 = load i32, i32* %0
  %stack_var_-44 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-44 to i32, !insn.addr !314
  %3 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !315
  store i32 0, i32* %stack_var_-44, align 4, !insn.addr !316
  %4 = add i32 %2, -16
  %5 = inttoptr i32 %4 to i32*
  store i32 0, i32* %storemerge29.reg2mem
  store i32 0, i32* %stack_var_-40.08.reg2mem
  br label %dec_label_pc_1d60

dec_label_pc_1d60:                                ; preds = %dec_label_pc_1d30, %dec_label_pc_1de5
  %stack_var_-40.08.reload = load i32, i32* %stack_var_-40.08.reg2mem
  %storemerge29.reload = load i32, i32* %storemerge29.reg2mem
  store i32 8, i32* %5, align 4, !insn.addr !317
  %6 = call i32* @malloc(i32 %stack_var_-40.08.reload), !insn.addr !318
  %7 = icmp eq i32* %6, null, !insn.addr !319
  %8 = icmp eq i1 %7, false, !insn.addr !320
  br i1 %8, label %dec_label_pc_1da5, label %dec_label_pc_1d95.preheader, !insn.addr !320

dec_label_pc_1d95.preheader:                      ; preds = %dec_label_pc_1d60
  %9 = load i32, i32* %stack_var_-44, align 4, !insn.addr !321
  %10 = icmp eq i32 %9, 0, !insn.addr !321
  %11 = icmp eq i1 %10, false, !insn.addr !322
  store i32 %9, i32* %.reg2mem, !insn.addr !322
  store i32 -1, i32* %storemerge1.reg2mem, !insn.addr !322
  br i1 %11, label %dec_label_pc_1d78, label %dec_label_pc_1e41, !insn.addr !322

dec_label_pc_1d78:                                ; preds = %dec_label_pc_1d95.preheader, %dec_label_pc_1d78
  %.reload = load i32, i32* %.reg2mem
  %12 = add i32 %.reload, 4, !insn.addr !323
  %13 = inttoptr i32 %12 to i32*, !insn.addr !323
  %14 = load i32, i32* %13, align 4, !insn.addr !323
  store i32 %14, i32* %stack_var_-44, align 4, !insn.addr !324
  store i32 %.reload, i32* %5, align 4, !insn.addr !325
  %15 = load i32, i32* %stack_var_-44, align 4, !insn.addr !326
  %16 = inttoptr i32 %15 to i32*, !insn.addr !326
  call void @free(i32* %16), !insn.addr !326
  %17 = load i32, i32* %stack_var_-44, align 4, !insn.addr !321
  %18 = icmp eq i32 %17, 0, !insn.addr !321
  %19 = icmp eq i1 %18, false, !insn.addr !322
  store i32 %17, i32* %.reg2mem, !insn.addr !322
  store i32 -1, i32* %storemerge1.reg2mem, !insn.addr !322
  br i1 %19, label %dec_label_pc_1d78, label %dec_label_pc_1e41, !insn.addr !322

dec_label_pc_1da5:                                ; preds = %dec_label_pc_1d60
  %20 = ptrtoint i32* %6 to i32, !insn.addr !318
  %21 = mul nuw nsw i32 %storemerge29.reload, 10, !insn.addr !327
  store i32 %21, i32* %6, align 4, !insn.addr !328
  %22 = add i32 %20, 4, !insn.addr !329
  %23 = inttoptr i32 %22 to i32*, !insn.addr !329
  store i32 0, i32* %23, align 4, !insn.addr !329
  %24 = load i32, i32* %stack_var_-44, align 4, !insn.addr !330
  %25 = icmp eq i32 %24, 0, !insn.addr !330
  %26 = icmp eq i1 %25, false, !insn.addr !331
  br i1 %26, label %dec_label_pc_1dd6, label %dec_label_pc_1dc8, !insn.addr !331

dec_label_pc_1dc8:                                ; preds = %dec_label_pc_1da5
  store i32 %20, i32* %stack_var_-44, align 4, !insn.addr !332
  br label %dec_label_pc_1de5, !insn.addr !333

dec_label_pc_1dd6:                                ; preds = %dec_label_pc_1da5
  %27 = add i32 %stack_var_-40.08.reload, 4, !insn.addr !334
  %28 = inttoptr i32 %27 to i32*, !insn.addr !334
  store i32 %20, i32* %28, align 4, !insn.addr !334
  br label %dec_label_pc_1de5, !insn.addr !335

dec_label_pc_1de5:                                ; preds = %dec_label_pc_1dd6, %dec_label_pc_1dc8
  %29 = add nuw nsw i32 %storemerge29.reload, 1, !insn.addr !336
  %30 = icmp ult i32 %29, 5, !insn.addr !337
  store i32 %29, i32* %storemerge29.reg2mem, !insn.addr !337
  store i32 %20, i32* %stack_var_-40.08.reg2mem, !insn.addr !337
  br i1 %30, label %dec_label_pc_1d60, label %dec_label_pc_1e13.preheader, !insn.addr !337

dec_label_pc_1e13.preheader:                      ; preds = %dec_label_pc_1de5
  %storemerge5 = load i32, i32* %stack_var_-44, align 4
  %31 = icmp eq i32 %storemerge5, 0
  %32 = icmp eq i1 %31, false
  store i32 %storemerge5, i32* %storemerge7.reg2mem, !insn.addr !338
  store i32 0, i32* %stack_var_-32.06.reg2mem, !insn.addr !338
  store i32 0, i32* %storemerge1.reg2mem, !insn.addr !338
  br i1 %32, label %dec_label_pc_1e02, label %dec_label_pc_1e41, !insn.addr !338

dec_label_pc_1e02:                                ; preds = %dec_label_pc_1e13.preheader, %dec_label_pc_1e02
  %stack_var_-32.06.reload = load i32, i32* %stack_var_-32.06.reg2mem
  %storemerge7.reload = load i32, i32* %storemerge7.reg2mem
  %33 = inttoptr i32 %storemerge7.reload to i32*, !insn.addr !339
  %34 = load i32, i32* %33, align 4, !insn.addr !339
  %35 = add i32 %34, %stack_var_-32.06.reload, !insn.addr !340
  %36 = add i32 %storemerge7.reload, 4, !insn.addr !341
  %37 = inttoptr i32 %36 to i32*, !insn.addr !341
  %storemerge = load i32, i32* %37, align 4
  %38 = icmp eq i32 %storemerge, 0, !insn.addr !342
  %39 = icmp eq i1 %38, false, !insn.addr !338
  store i32 %storemerge, i32* %storemerge7.reg2mem, !insn.addr !338
  store i32 %35, i32* %stack_var_-32.06.reg2mem, !insn.addr !338
  store i32 %storemerge5, i32* %.reg2mem13, !insn.addr !338
  br i1 %39, label %dec_label_pc_1e02, label %dec_label_pc_1e1b, !insn.addr !338

dec_label_pc_1e1b:                                ; preds = %dec_label_pc_1e02, %dec_label_pc_1e1b
  %.reload14 = load i32, i32* %.reg2mem13
  %40 = add i32 %.reload14, 4, !insn.addr !343
  %41 = inttoptr i32 %40 to i32*, !insn.addr !343
  %42 = load i32, i32* %41, align 4, !insn.addr !343
  store i32 %42, i32* %stack_var_-44, align 4, !insn.addr !344
  store i32 %.reload14, i32* %5, align 4, !insn.addr !345
  %43 = load i32, i32* %stack_var_-44, align 4, !insn.addr !346
  %44 = inttoptr i32 %43 to i32*, !insn.addr !346
  call void @free(i32* %44), !insn.addr !346
  %45 = load i32, i32* %stack_var_-44, align 4, !insn.addr !347
  %46 = icmp eq i32 %45, 0, !insn.addr !347
  %47 = icmp eq i1 %46, false, !insn.addr !348
  store i32 %45, i32* %.reg2mem13, !insn.addr !348
  store i32 %35, i32* %storemerge1.reg2mem, !insn.addr !348
  br i1 %47, label %dec_label_pc_1e1b, label %dec_label_pc_1e41, !insn.addr !348

dec_label_pc_1e41:                                ; preds = %dec_label_pc_1d78, %dec_label_pc_1e1b, %dec_label_pc_1e13.preheader, %dec_label_pc_1d95.preheader
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  ret i32 %storemerge1.reload, !insn.addr !349

; uselistorder directives
  uselistorder i32 %storemerge7.reload, { 1, 0 }
  uselistorder i32 %20, { 0, 2, 1, 3 }
  uselistorder i32* %6, { 0, 2, 1 }
  uselistorder i32* %stack_var_-44, { 4, 2, 5, 0, 6, 7, 8, 3, 9, 1, 10, 11 }
  uselistorder i32* %storemerge29.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-40.08.reg2mem, { 1, 0, 2 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge7.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-32.06.reg2mem, { 2, 0, 1 }
  uselistorder i32* %.reg2mem13, { 2, 0, 1 }
  uselistorder i32* %storemerge1.reg2mem, { 0, 2, 3, 1, 4 }
  uselistorder label %dec_label_pc_1e41, { 1, 2, 0, 3 }
  uselistorder label %dec_label_pc_1e1b, { 1, 0 }
  uselistorder label %dec_label_pc_1e02, { 1, 0 }
  uselistorder label %dec_label_pc_1d78, { 1, 0 }
  uselistorder label %dec_label_pc_1d60, { 1, 0 }
}

define i32 @create_tree_node(i32 %arg1) local_unnamed_addr {
dec_label_pc_1e46:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !350
  %3 = call i32* @malloc(i32 12), !insn.addr !351
  %4 = ptrtoint i32* %3 to i32, !insn.addr !351
  %5 = icmp eq i32* %3, null, !insn.addr !352
  br i1 %5, label %dec_label_pc_1e8f, label %dec_label_pc_1e73, !insn.addr !353

dec_label_pc_1e73:                                ; preds = %dec_label_pc_1e46
  store i32 %arg1, i32* %3, align 4, !insn.addr !354
  %6 = add i32 %4, 4, !insn.addr !355
  %7 = inttoptr i32 %6 to i32*, !insn.addr !355
  store i32 0, i32* %7, align 4, !insn.addr !355
  %8 = add i32 %4, 8, !insn.addr !356
  %9 = inttoptr i32 %8 to i32*, !insn.addr !356
  store i32 0, i32* %9, align 4, !insn.addr !356
  br label %dec_label_pc_1e8f, !insn.addr !356

dec_label_pc_1e8f:                                ; preds = %dec_label_pc_1e73, %dec_label_pc_1e46
  ret i32 %4, !insn.addr !357

; uselistorder directives
  uselistorder i32 %4, { 2, 0, 1 }
}

define i32 @tree_heap_traversal() local_unnamed_addr {
dec_label_pc_1e97:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !358
  %.reg2mem = alloca i32, !insn.addr !358
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !359
  %3 = call i32 @create_tree_node(i32 10), !insn.addr !360
  %4 = icmp eq i32 %3, 0, !insn.addr !361
  %5 = icmp eq i1 %4, false, !insn.addr !362
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !362
  br i1 %5, label %dec_label_pc_1ecd, label %dec_label_pc_1fa5, !insn.addr !362

dec_label_pc_1ecd:                                ; preds = %dec_label_pc_1e97
  %6 = call i32 @create_tree_node(i32 20), !insn.addr !363
  %7 = add i32 %3, 4, !insn.addr !364
  %8 = inttoptr i32 %7 to i32*, !insn.addr !364
  store i32 %6, i32* %8, align 4, !insn.addr !364
  %9 = call i32 @create_tree_node(i32 30), !insn.addr !365
  %10 = add i32 %3, 8, !insn.addr !366
  %11 = inttoptr i32 %10 to i32*, !insn.addr !366
  store i32 %9, i32* %11, align 4, !insn.addr !366
  %12 = load i32, i32* %8, align 4
  %13 = icmp eq i32 %12, 0, !insn.addr !367
  store i32 %9, i32* %.reg2mem, !insn.addr !368
  br i1 %13, label %dec_label_pc_1f23, label %dec_label_pc_1efd, !insn.addr !368

dec_label_pc_1efd:                                ; preds = %dec_label_pc_1ecd
  %14 = icmp eq i32 %9, 0, !insn.addr !369
  %15 = icmp eq i1 %14, false, !insn.addr !370
  br i1 %15, label %dec_label_pc_1f54, label %dec_label_pc_1f11, !insn.addr !370

dec_label_pc_1f11:                                ; preds = %dec_label_pc_1efd
  %16 = inttoptr i32 %12 to i32*, !insn.addr !371
  call void @free(i32* %16), !insn.addr !371
  %.pr = load i32, i32* %11, align 4
  store i32 %.pr, i32* %.reg2mem, !insn.addr !372
  br label %dec_label_pc_1f23, !insn.addr !372

dec_label_pc_1f23:                                ; preds = %dec_label_pc_1ecd, %dec_label_pc_1f11
  %.reload = load i32, i32* %.reg2mem, !insn.addr !373
  %17 = icmp eq i32 %.reload, 0, !insn.addr !374
  br i1 %17, label %dec_label_pc_1f3f, label %dec_label_pc_1f2d, !insn.addr !375

dec_label_pc_1f2d:                                ; preds = %dec_label_pc_1f23
  %18 = inttoptr i32 %.reload to i32*, !insn.addr !376
  call void @free(i32* %18), !insn.addr !376
  br label %dec_label_pc_1f3f, !insn.addr !377

dec_label_pc_1f3f:                                ; preds = %dec_label_pc_1f2d, %dec_label_pc_1f23
  %19 = inttoptr i32 %3 to i32*, !insn.addr !378
  call void @free(i32* %19), !insn.addr !378
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !379
  br label %dec_label_pc_1fa5, !insn.addr !379

dec_label_pc_1f54:                                ; preds = %dec_label_pc_1efd
  %20 = inttoptr i32 %3 to i32*, !insn.addr !380
  %21 = load i32, i32* %20, align 4, !insn.addr !380
  %22 = inttoptr i32 %12 to i32*, !insn.addr !381
  %23 = load i32, i32* %22, align 4, !insn.addr !381
  %24 = add i32 %23, %21, !insn.addr !382
  %25 = inttoptr i32 %9 to i32*, !insn.addr !383
  %26 = load i32, i32* %25, align 4, !insn.addr !383
  %27 = add i32 %24, %26, !insn.addr !384
  call void @free(i32* %22), !insn.addr !385
  %28 = load i32, i32* %11, align 4, !insn.addr !386
  %29 = inttoptr i32 %28 to i32*, !insn.addr !387
  call void @free(i32* %29), !insn.addr !387
  call void @free(i32* %20), !insn.addr !388
  store i32 %27, i32* %eax.0.reg2mem, !insn.addr !389
  br label %dec_label_pc_1fa5, !insn.addr !389

dec_label_pc_1fa5:                                ; preds = %dec_label_pc_1e97, %dec_label_pc_1f54, %dec_label_pc_1f3f
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !390

; uselistorder directives
  uselistorder i32 %12, { 1, 0, 2 }
  uselistorder i32* %11, { 1, 0, 2 }
  uselistorder i32 %9, { 2, 1, 0, 3 }
  uselistorder i32 %3, { 1, 0, 2, 3, 4 }
  uselistorder i32* %.reg2mem, { 0, 2, 1 }
  uselistorder i32* %eax.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32 8, { 3, 4, 5, 0, 1, 2, 6, 7 }
  uselistorder i32 (i32)* @create_tree_node, { 2, 1, 0 }
  uselistorder label %dec_label_pc_1fa5, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1f23, { 1, 0 }
}

define i32 @memory_leak(i32 %arg1) local_unnamed_addr {
dec_label_pc_1faa:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !391
  %storemerge12.reg2mem = alloca i32, !insn.addr !391
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !392
  %3 = mul i32 %arg1, 4, !insn.addr !393
  %4 = call i32* @malloc(i32 %3), !insn.addr !394
  %5 = icmp eq i32* %4, null, !insn.addr !395
  %6 = icmp eq i1 %5, false, !insn.addr !396
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !396
  br i1 %6, label %dec_label_pc_2004.preheader, label %dec_label_pc_2026, !insn.addr !396

dec_label_pc_2004.preheader:                      ; preds = %dec_label_pc_1faa
  %7 = ptrtoint i32* %4 to i32, !insn.addr !394
  %8 = icmp sgt i32 %arg1, 0, !insn.addr !397
  store i32 0, i32* %storemerge12.reg2mem, !insn.addr !397
  br i1 %8, label %dec_label_pc_1fec, label %dec_label_pc_200c, !insn.addr !397

dec_label_pc_1fec:                                ; preds = %dec_label_pc_2004.preheader, %dec_label_pc_1fec
  %storemerge12.reload = load i32, i32* %storemerge12.reg2mem
  %9 = mul i32 %storemerge12.reload, 4, !insn.addr !398
  %10 = add i32 %9, %7, !insn.addr !399
  %11 = inttoptr i32 %10 to i32*, !insn.addr !400
  store i32 %storemerge12.reload, i32* %11, align 4, !insn.addr !400
  %12 = add nuw nsw i32 %storemerge12.reload, 1, !insn.addr !401
  %exitcond = icmp eq i32 %12, %arg1
  store i32 %12, i32* %storemerge12.reg2mem, !insn.addr !397
  br i1 %exitcond, label %dec_label_pc_200c, label %dec_label_pc_1fec, !insn.addr !397

dec_label_pc_200c:                                ; preds = %dec_label_pc_1fec, %dec_label_pc_2004.preheader
  %13 = icmp slt i32 %arg1, 0
  %14 = zext i1 %13 to i32, !insn.addr !402
  %15 = add i32 %14, %arg1, !insn.addr !403
  %16 = udiv i32 %15, 2
  %17 = mul i32 %16, 4, !insn.addr !404
  %18 = add i32 %17, %7, !insn.addr !405
  %19 = inttoptr i32 %18 to i32*, !insn.addr !406
  %20 = load i32, i32* %19, align 4, !insn.addr !406
  store i32 %20, i32* %storemerge.reg2mem, !insn.addr !406
  br label %dec_label_pc_2026, !insn.addr !406

dec_label_pc_2026:                                ; preds = %dec_label_pc_1faa, %dec_label_pc_200c
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !407

; uselistorder directives
  uselistorder i32* %4, { 1, 0 }
  uselistorder i32* %storemerge12.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg1, { 2, 1, 3, 4, 0 }
  uselistorder label %dec_label_pc_2026, { 1, 0 }
  uselistorder label %dec_label_pc_1fec, { 1, 0 }
}

define i32 @dangling_pointer() local_unnamed_addr {
dec_label_pc_202b:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !408
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !409
  %3 = call i32* @malloc(i32 4), !insn.addr !410
  %4 = icmp eq i32* %3, null, !insn.addr !411
  %5 = icmp eq i1 %4, false, !insn.addr !412
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !412
  br i1 %5, label %dec_label_pc_205e, label %dec_label_pc_209d, !insn.addr !412

dec_label_pc_205e:                                ; preds = %dec_label_pc_202b
  store i32 42, i32* %3, align 4, !insn.addr !413
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f65 to i32), i32 -11871), !insn.addr !414
  %7 = inttoptr i32 %6 to i8*, !insn.addr !415
  %8 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !416
  call void @free(i32* %3), !insn.addr !417
  %9 = load i32, i32* %3, align 4, !insn.addr !418
  store i32 %9, i32* %storemerge.reg2mem, !insn.addr !419
  br label %dec_label_pc_209d, !insn.addr !419

dec_label_pc_209d:                                ; preds = %dec_label_pc_202b, %dec_label_pc_205e
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !420

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_209d, { 1, 0 }
}

define i32 @double_free(i32 %arg1) local_unnamed_addr {
dec_label_pc_20a2:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !421
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !422
  %3 = icmp eq i32 %arg1, 0, !insn.addr !423
  %4 = icmp eq i1 %3, false, !insn.addr !424
  br i1 %4, label %dec_label_pc_2107, label %dec_label_pc_20be, !insn.addr !424

dec_label_pc_20be:                                ; preds = %dec_label_pc_20a2
  %5 = call i32* @malloc(i32 4), !insn.addr !425
  %6 = icmp eq i32* %5, null, !insn.addr !426
  %7 = icmp eq i1 %6, false, !insn.addr !427
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !427
  br i1 %7, label %dec_label_pc_20db, label %dec_label_pc_210c, !insn.addr !427

dec_label_pc_20db:                                ; preds = %dec_label_pc_20be
  store i32 10, i32* %5, align 4, !insn.addr !428
  call void @free(i32* %5), !insn.addr !429
  call void @free(i32* %5), !insn.addr !430
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !431
  br label %dec_label_pc_210c, !insn.addr !431

dec_label_pc_2107:                                ; preds = %dec_label_pc_20a2
  %8 = inttoptr i32 %arg1 to i32*, !insn.addr !432
  %9 = load i32, i32* %8, align 4, !insn.addr !432
  store i32 %9, i32* %eax.0.reg2mem, !insn.addr !432
  br label %dec_label_pc_210c, !insn.addr !432

dec_label_pc_210c:                                ; preds = %dec_label_pc_20be, %dec_label_pc_2107, %dec_label_pc_20db
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !433

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_210c, { 1, 2, 0 }
}

define i32 @heap_overflow() local_unnamed_addr {
dec_label_pc_2111:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !434
  %storemerge2.off03.reg2mem = alloca i32, !insn.addr !434
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !435
  %3 = call i32* @malloc(i32 40), !insn.addr !436
  %4 = ptrtoint i32* %3 to i32, !insn.addr !436
  %5 = icmp eq i32* %3, null, !insn.addr !437
  %6 = icmp eq i1 %5, false, !insn.addr !438
  store i32 0, i32* %storemerge2.off03.reg2mem, !insn.addr !438
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !438
  br i1 %6, label %dec_label_pc_214d, label %dec_label_pc_2187, !insn.addr !438

dec_label_pc_214d:                                ; preds = %dec_label_pc_2111, %dec_label_pc_214d
  %storemerge2.off03.reload = load i32, i32* %storemerge2.off03.reg2mem
  %7 = mul i32 %storemerge2.off03.reload, 4, !insn.addr !439
  %8 = add i32 %7, %4, !insn.addr !440
  %9 = mul nuw nsw i32 %storemerge2.off03.reload, 100, !insn.addr !441
  %10 = inttoptr i32 %8 to i32*, !insn.addr !442
  store i32 %9, i32* %10, align 4, !insn.addr !442
  %11 = add nuw nsw i32 %storemerge2.off03.reload, 1, !insn.addr !443
  %exitcond = icmp eq i32 %11, 11
  store i32 %11, i32* %storemerge2.off03.reg2mem, !insn.addr !444
  br i1 %exitcond, label %dec_label_pc_216e, label %dec_label_pc_214d, !insn.addr !444

dec_label_pc_216e:                                ; preds = %dec_label_pc_214d
  %12 = load i32, i32* %3, align 4, !insn.addr !445
  call void @free(i32* %3), !insn.addr !446
  store i32 %12, i32* %storemerge.reg2mem, !insn.addr !447
  br label %dec_label_pc_2187, !insn.addr !447

dec_label_pc_2187:                                ; preds = %dec_label_pc_2111, %dec_label_pc_216e
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !448

; uselistorder directives
  uselistorder i32 %storemerge2.off03.reload, { 1, 0, 2 }
  uselistorder i32* %storemerge2.off03.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32* (i32)* @malloc, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder label %dec_label_pc_2187, { 1, 0 }
  uselistorder label %dec_label_pc_214d, { 1, 0 }
}

define i32 @test_heap_memory() local_unnamed_addr {
dec_label_pc_218c:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !449
  %1 = load i32, i32* %0
  %stack_var_-28 = alloca i32, align 4
  %stack_var_-32 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !450
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !451
  %4 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e04 to i32), i32 -11848), !insn.addr !452
  %5 = inttoptr i32 %4 to i8*, !insn.addr !453
  %6 = call i32 @puts(i8* %5), !insn.addr !454
  %7 = call i32 @heap_basic(i32 10), !insn.addr !455
  %8 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e04 to i32), i32 -11818), !insn.addr !456
  %9 = inttoptr i32 %8 to i8*, !insn.addr !457
  %10 = call i32 (i8*, ...) @printf(i8* %9), !insn.addr !458
  %11 = call i32 @heap_calloc(i32 5), !insn.addr !459
  %12 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e04 to i32), i32 -11789), !insn.addr !460
  %13 = inttoptr i32 %12 to i8*, !insn.addr !461
  %14 = call i32 (i8*, ...) @printf(i8* %13), !insn.addr !462
  %15 = call i32 @heap_realloc(), !insn.addr !463
  %16 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e04 to i32), i32 -11756), !insn.addr !464
  %17 = inttoptr i32 %16 to i8*, !insn.addr !465
  %18 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !466
  %19 = call i32 @heap_array(i32 10), !insn.addr !467
  %20 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e04 to i32), i32 -11725), !insn.addr !468
  %21 = inttoptr i32 %20 to i8*, !insn.addr !469
  %22 = call i32 (i8*, ...) @printf(i8* %21), !insn.addr !470
  %23 = call i32 @heap_struct(i32 5), !insn.addr !471
  %24 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e04 to i32), i32 -11696), !insn.addr !472
  %25 = inttoptr i32 %24 to i8*, !insn.addr !473
  %26 = call i32 (i8*, ...) @printf(i8* %25), !insn.addr !474
  store i32 0, i32* %stack_var_-32, align 4, !insn.addr !475
  %27 = call i32 @heap_nested(i32* nonnull %stack_var_-32), !insn.addr !476
  %28 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e04 to i32), i32 -11666), !insn.addr !477
  %29 = inttoptr i32 %28 to i8*, !insn.addr !478
  %30 = call i32 (i8*, ...) @printf(i8* %29), !insn.addr !479
  %31 = load i32, i32* %stack_var_-32, align 4, !insn.addr !480
  %32 = icmp eq i32 %31, 0, !insn.addr !481
  br i1 %32, label %dec_label_pc_22a8, label %dec_label_pc_2287, !insn.addr !482

dec_label_pc_2287:                                ; preds = %dec_label_pc_218c
  %33 = add i32 %31, 4, !insn.addr !483
  %34 = inttoptr i32 %33 to i32*, !insn.addr !483
  %35 = load i32, i32* %34, align 4, !insn.addr !483
  %36 = inttoptr i32 %35 to i32*
  call void @free(i32* %36), !insn.addr !484
  %37 = load i32, i32* %stack_var_-32, align 4, !insn.addr !485
  %38 = inttoptr i32 %37 to i32*
  call void @free(i32* %38), !insn.addr !486
  br label %dec_label_pc_22a8, !insn.addr !487

dec_label_pc_22a8:                                ; preds = %dec_label_pc_2287, %dec_label_pc_218c
  %39 = call i32 @linked_list_heap(), !insn.addr !488
  %40 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e04 to i32), i32 -11636), !insn.addr !489
  %41 = inttoptr i32 %40 to i8*, !insn.addr !490
  %42 = call i32 (i8*, ...) @printf(i8* %41), !insn.addr !491
  %43 = call i32 @tree_heap_traversal(), !insn.addr !492
  %44 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e04 to i32), i32 -11600), !insn.addr !493
  %45 = inttoptr i32 %44 to i8*, !insn.addr !494
  %46 = call i32 (i8*, ...) @printf(i8* %45), !insn.addr !495
  %47 = call i32 @memory_leak(i32 5), !insn.addr !496
  %48 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e04 to i32), i32 -11562), !insn.addr !497
  %49 = inttoptr i32 %48 to i8*, !insn.addr !498
  %50 = call i32 (i8*, ...) @printf(i8* %49), !insn.addr !499
  %51 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e04 to i32), i32 -11532), !insn.addr !500
  %52 = inttoptr i32 %51 to i8*, !insn.addr !501
  %53 = call i32 (i8*, ...) @printf(i8* %52), !insn.addr !502
  %54 = call i32 @fork(), !insn.addr !503
  %55 = icmp eq i32 %54, 0, !insn.addr !504
  %56 = icmp eq i1 %55, false, !insn.addr !505
  br i1 %56, label %dec_label_pc_233f, label %dec_label_pc_2318, !insn.addr !505

dec_label_pc_2318:                                ; preds = %dec_label_pc_22a8
  %57 = call i32 @dangling_pointer(), !insn.addr !506
  %58 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e04 to i32), i32 -11500), !insn.addr !507
  %59 = inttoptr i32 %58 to i8*, !insn.addr !508
  %60 = call i32 (i8*, ...) @printf(i8* %59), !insn.addr !509
  call void @exit(i32 0), !insn.addr !510
  unreachable, !insn.addr !510

dec_label_pc_233f:                                ; preds = %dec_label_pc_22a8
  %61 = inttoptr i32 %54 to i8*, !insn.addr !511
  %62 = icmp slt i8* %61, inttoptr (i32 1 to i8*), !insn.addr !512
  br i1 %62, label %dec_label_pc_23ab, label %dec_label_pc_2345, !insn.addr !512

dec_label_pc_2345:                                ; preds = %dec_label_pc_233f
  %63 = call i32 @waitpid(i32 %54, i32* nonnull %stack_var_-28, i32 0), !insn.addr !513
  %64 = load i32, i32* %stack_var_-28, align 4, !insn.addr !514
  %65 = urem i32 %64, 128, !insn.addr !515
  %66 = icmp eq i32 %65, 0, !insn.addr !516
  %67 = icmp eq i1 %66, false, !insn.addr !517
  br i1 %67, label %dec_label_pc_2381, label %dec_label_pc_2363, !insn.addr !517

dec_label_pc_2363:                                ; preds = %dec_label_pc_2345
  %68 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e04 to i32), i32 -11484), !insn.addr !518
  %69 = inttoptr i32 %68 to i8*, !insn.addr !519
  %70 = call i32 (i8*, ...) @printf(i8* %69), !insn.addr !520
  br label %dec_label_pc_23bd, !insn.addr !521

dec_label_pc_2381:                                ; preds = %dec_label_pc_2345
  %71 = trunc i32 %64 to i8
  %72 = urem i8 %71, -128
  %73 = add nuw i8 %72, 1, !insn.addr !522
  %74 = icmp ult i8 %73, 2, !insn.addr !523
  %75 = icmp slt i8 %73, 0, !insn.addr !523
  %76 = or i1 %74, %75, !insn.addr !524
  br i1 %76, label %dec_label_pc_23bd, label %dec_label_pc_2390, !insn.addr !524

dec_label_pc_2390:                                ; preds = %dec_label_pc_2381
  %77 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e04 to i32), i32 -11444), !insn.addr !525
  %78 = inttoptr i32 %77 to i8*, !insn.addr !526
  %79 = call i32 (i8*, ...) @printf(i8* %78), !insn.addr !527
  br label %dec_label_pc_23bd, !insn.addr !528

dec_label_pc_23ab:                                ; preds = %dec_label_pc_233f
  %80 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e04 to i32), i32 -11379), !insn.addr !529
  %81 = inttoptr i32 %80 to i8*, !insn.addr !530
  call void @perror(i8* %81), !insn.addr !531
  br label %dec_label_pc_23bd, !insn.addr !532

dec_label_pc_23bd:                                ; preds = %dec_label_pc_23ab, %dec_label_pc_2390, %dec_label_pc_2381, %dec_label_pc_2363
  %82 = call i32 @__readgsdword(i32 20), !insn.addr !533
  %83 = icmp eq i32 %3, %82, !insn.addr !533
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !534
  br i1 %83, label %dec_label_pc_23cf, label %dec_label_pc_23ca, !insn.addr !534

dec_label_pc_23ca:                                ; preds = %dec_label_pc_23bd
  %84 = call i32 @__stack_chk_fail_local(), !insn.addr !535
  store i32 %84, i32* %eax.0.reg2mem, !insn.addr !535
  br label %dec_label_pc_23cf, !insn.addr !535

dec_label_pc_23cf:                                ; preds = %dec_label_pc_23ca, %dec_label_pc_23bd
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !536

; uselistorder directives
  uselistorder i8 %73, { 1, 0 }
  uselistorder i32 %64, { 1, 0 }
  uselistorder i32* %stack_var_-32, { 1, 2, 0, 3 }
  uselistorder i32* %stack_var_-28, { 1, 0 }
  uselistorder i32 %1, { 15, 14, 13, 12, 11, 10, 9, 8, 0, 1, 2, 3, 4, 5, 6, 7 }
  uselistorder i8 0, { 1, 0, 2 }
  uselistorder void (i32*)* @free, { 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 21 }
}

define i32 @global_var_access() local_unnamed_addr {
dec_label_pc_23d4:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !537
  %3 = add i32 %2, add (i32 ptrtoint (i32* @global_var_3bc0 to i32), i32 256), !insn.addr !538
  %4 = inttoptr i32 %3 to i32*, !insn.addr !538
  %5 = load i32, i32* %4, align 4, !insn.addr !538
  %6 = add i32 %5, 1, !insn.addr !539
  store i32 %6, i32* %4, align 4, !insn.addr !540
  ret i32 %6, !insn.addr !541
}

define i32 @global_var_read() local_unnamed_addr {
dec_label_pc_23fc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !542
  %3 = add i32 %2, add (i32 ptrtoint (i32* @global_var_3b98 to i32), i32 256), !insn.addr !543
  %4 = inttoptr i32 %3 to i32*, !insn.addr !543
  %5 = load i32, i32* %4, align 4, !insn.addr !543
  %6 = mul i32 %5, 2, !insn.addr !544
  ret i32 %6, !insn.addr !545
}

define i32 @global_array_access(i32 %arg1) local_unnamed_addr {
dec_label_pc_2417:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !546
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !547
  %3 = icmp ult i32 %arg1, 10
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !548
  br i1 %3, label %dec_label_pc_243b, label %dec_label_pc_2445, !insn.addr !548

dec_label_pc_243b:                                ; preds = %dec_label_pc_2417
  %4 = mul i32 %arg1, 4, !insn.addr !549
  %5 = add i32 %4, add (i32 ptrtoint (i32* @global_var_3b7d to i32), i32 128), !insn.addr !549
  %6 = add i32 %5, %2, !insn.addr !549
  %7 = inttoptr i32 %6 to i32*, !insn.addr !549
  %8 = load i32, i32* %7, align 4, !insn.addr !549
  store i32 %8, i32* %storemerge.reg2mem, !insn.addr !549
  br label %dec_label_pc_2445, !insn.addr !549

dec_label_pc_2445:                                ; preds = %dec_label_pc_2417, %dec_label_pc_243b
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !550

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 128, { 1, 0 }
  uselistorder label %dec_label_pc_2445, { 1, 0 }
}

define i32 @static_local(i32 %arg1) local_unnamed_addr {
dec_label_pc_2447:
  %0 = alloca i32
  %storemerge1.reg2mem = alloca i32, !insn.addr !551
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !552
  %3 = icmp eq i32 %arg1, 0, !insn.addr !553
  %4 = add i32 %2, add (i32 ptrtoint (i32* @global_var_3b4d to i32), i32 396)
  %5 = inttoptr i32 %4 to i32*
  store i32 0, i32* %storemerge1.reg2mem, !insn.addr !554
  br i1 %3, label %dec_label_pc_246f, label %dec_label_pc_2484, !insn.addr !554

dec_label_pc_246f:                                ; preds = %dec_label_pc_2447
  %6 = load i32, i32* %5, align 4, !insn.addr !555
  %7 = add i32 %6, 1, !insn.addr !556
  store i32 %7, i32* %storemerge1.reg2mem, !insn.addr !557
  br label %dec_label_pc_2484, !insn.addr !557

dec_label_pc_2484:                                ; preds = %dec_label_pc_2447, %dec_label_pc_246f
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  store i32 %storemerge1.reload, i32* %5, align 4
  ret i32 %storemerge1.reload, !insn.addr !558

; uselistorder directives
  uselistorder i32 %storemerge1.reload, { 1, 0 }
  uselistorder i32* %storemerge1.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2484, { 1, 0 }
}

define i32 @static_helper(i32 %arg1) local_unnamed_addr {
dec_label_pc_2486:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !559
  %3 = mul i32 %arg1, 2, !insn.addr !560
  ret i32 %3, !insn.addr !561
}

define i32 @call_static_func(i32 %arg1) local_unnamed_addr {
dec_label_pc_249e:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !562
  %3 = call i32 @static_helper(i32 %arg1), !insn.addr !563
  %4 = add i32 %3, 1, !insn.addr !564
  ret i32 %4, !insn.addr !565
}

define i32 @access_extern_global() local_unnamed_addr {
dec_label_pc_24bf:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !566
  %3 = add i32 %2, add (i32 ptrtoint (i32* @global_var_3ad5 to i32), i32 204), !insn.addr !567
  %4 = inttoptr i32 %3 to i32*, !insn.addr !568
  %5 = load i32, i32* %4, align 4, !insn.addr !568
  %6 = add i32 %5, 100, !insn.addr !569
  ret i32 %6, !insn.addr !570
}

define i32 @call_extern_func() local_unnamed_addr {
dec_label_pc_24dd:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !571
  %3 = call i32 @extern_function(i32 5), !insn.addr !572
  ret i32 %3, !insn.addr !573
}

define i32 @read_const_data() local_unnamed_addr {
dec_label_pc_2506:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !574
  %3 = add i32 %2, add (i32 ptrtoint (i32* @global_var_3a8e to i32), i32 200), !insn.addr !575
  %4 = inttoptr i32 %3 to i32*, !insn.addr !575
  %5 = load i32, i32* %4, align 4, !insn.addr !575
  %6 = add i32 %5, 4, !insn.addr !576
  %7 = inttoptr i32 %6 to i8*, !insn.addr !577
  %8 = load i8, i8* %7, align 1, !insn.addr !577
  %9 = sext i8 %8 to i32, !insn.addr !578
  %10 = add nsw i32 %9, 42, !insn.addr !579
  ret i32 %10, !insn.addr !580

; uselistorder directives
  uselistorder i32 42, { 1, 3, 0, 2 }
}

define i32 @access_bss_var() local_unnamed_addr {
dec_label_pc_252f:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !581
  %3 = add i32 %2, add (i32 ptrtoint (i32* @global_var_3a65 to i32), i32 260), !insn.addr !582
  %4 = inttoptr i32 %3 to i32*, !insn.addr !582
  %5 = load i32, i32* %4, align 4, !insn.addr !582
  ret i32 %5, !insn.addr !583
}

define i32 @access_bss_buffer() local_unnamed_addr {
dec_label_pc_2548:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !584
  %3 = add i32 %2, add (i32 ptrtoint (i32* @global_var_3a4c to i32), i32 288), !insn.addr !585
  %4 = inttoptr i32 %3 to i8*, !insn.addr !585
  %5 = load i8, i8* %4, align 1, !insn.addr !585
  %6 = sext i8 %5 to i32, !insn.addr !586
  ret i32 %6, !insn.addr !587
}

define i32 @global_struct_access() local_unnamed_addr {
dec_label_pc_2565:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !588
  %3 = add i32 %2, add (i32 ptrtoint (i32* @global_var_3a2f to i32), i32 168), !insn.addr !589
  %4 = inttoptr i32 %3 to i32*, !insn.addr !589
  %5 = load i32, i32* %4, align 4, !insn.addr !589
  %6 = add i32 %2, add (i32 ptrtoint (i32* @global_var_3a2f to i32), i32 172), !insn.addr !590
  %7 = inttoptr i32 %6 to i32*, !insn.addr !590
  %8 = load i32, i32* %7, align 4, !insn.addr !590
  %9 = add i32 %8, %5, !insn.addr !591
  ret i32 %9, !insn.addr !592
}

define i32 @set_file_static(i32 %arg1) local_unnamed_addr {
dec_label_pc_2586:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !593
  %3 = add i32 %2, ptrtoint (i32* @global_var_3a0e to i32), !insn.addr !594
  %4 = add i32 %2, add (i32 ptrtoint (i32* @global_var_3a0e to i32), i32 176), !insn.addr !595
  %5 = inttoptr i32 %4 to i32*, !insn.addr !595
  store i32 %arg1, i32* %5, align 4, !insn.addr !595
  ret i32 %3, !insn.addr !596
}

define i32 @get_file_static() local_unnamed_addr {
dec_label_pc_25a3:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !597
  %3 = add i32 %2, add (i32 ptrtoint (i32* @global_var_39f1 to i32), i32 176), !insn.addr !598
  %4 = inttoptr i32 %3 to i32*, !insn.addr !598
  %5 = load i32, i32* %4, align 4, !insn.addr !598
  ret i32 %5, !insn.addr !599
}

define i32 @set_global_callback(i32 %arg1) local_unnamed_addr {
dec_label_pc_25bc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !600
  %3 = add i32 %2, ptrtoint (i32* @global_var_39d8 to i32), !insn.addr !601
  %4 = add i32 %2, add (i32 ptrtoint (i32* @global_var_39d8 to i32), i32 388), !insn.addr !602
  %5 = inttoptr i32 %4 to i32*, !insn.addr !602
  store i32 %arg1, i32* %5, align 4, !insn.addr !602
  ret i32 %3, !insn.addr !603
}

define i32 @call_global_callback(i32 %arg1) local_unnamed_addr {
dec_label_pc_25d9:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !604
  %3 = add i32 %2, add (i32 ptrtoint (i32* @global_var_39b8 to i32), i32 388), !insn.addr !605
  %4 = inttoptr i32 %3 to i32*, !insn.addr !605
  %5 = load i32, i32* %4, align 4, !insn.addr !605
  %6 = icmp eq i32 %5, 0, !insn.addr !606
  %spec.select = select i1 %6, i32 -1, i32 %5
  ret i32 %spec.select, !insn.addr !607
}

define i32 @global_heap_store(i32* %arg1) local_unnamed_addr {
dec_label_pc_2611:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !608
  %1 = load i32, i32* %0
  %2 = ptrtoint i32* %arg1 to i32
  %3 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !609
  %4 = add i32 %3, add (i32 ptrtoint (i32* @global_var_3983 to i32), i32 392), !insn.addr !610
  %5 = inttoptr i32 %4 to i32*, !insn.addr !610
  store i32 %2, i32* %5, align 4, !insn.addr !610
  %6 = icmp eq i32* %arg1, null, !insn.addr !611
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !612
  br i1 %6, label %dec_label_pc_2644, label %dec_label_pc_2635, !insn.addr !612

dec_label_pc_2635:                                ; preds = %dec_label_pc_2611
  %7 = load i32, i32* %arg1, align 4, !insn.addr !613
  store i32 %7, i32* %storemerge.reg2mem, !insn.addr !614
  br label %dec_label_pc_2644, !insn.addr !614

dec_label_pc_2644:                                ; preds = %dec_label_pc_2611, %dec_label_pc_2635
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !615

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2644, { 1, 0 }
}

define i32 @static_complex_init() local_unnamed_addr {
dec_label_pc_2646:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !616
  %3 = add i32 %2, add (i32 ptrtoint (i32* @global_var_394e to i32), i32 180), !insn.addr !617
  %4 = inttoptr i32 %3 to i32*, !insn.addr !617
  %5 = load i32, i32* %4, align 4, !insn.addr !617
  %6 = add i32 %2, add (i32 ptrtoint (i32* @global_var_394e to i32), i32 188), !insn.addr !618
  %7 = inttoptr i32 %6 to i32*, !insn.addr !618
  %8 = load i32, i32* %7, align 4, !insn.addr !618
  %9 = add i32 %8, %5, !insn.addr !619
  %10 = add i32 %2, add (i32 ptrtoint (i32* @global_var_394e to i32), i32 196), !insn.addr !620
  %11 = inttoptr i32 %10 to i32*, !insn.addr !620
  %12 = load i32, i32* %11, align 4, !insn.addr !620
  %13 = add i32 %9, %12, !insn.addr !621
  ret i32 %13, !insn.addr !622
}

define i32 @tls_access(i32 %arg1) local_unnamed_addr {
dec_label_pc_266f:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !623
  call void @__writegsdword(i32 -4, i32 %arg1), !insn.addr !624
  %3 = call i32 @__readgsdword(i32 -4), !insn.addr !625
  %4 = mul i32 %3, 2, !insn.addr !626
  ret i32 %4, !insn.addr !627
}

define i32 @init_depends_on(i32* %arg1) local_unnamed_addr {
dec_label_pc_2693:
  %0 = alloca i32
  %.reg2mem = alloca i32, !insn.addr !628
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !629
  %3 = icmp eq i32* %arg1, null, !insn.addr !630
  br i1 %3, label %dec_label_pc_2693.dec_label_pc_26b5_crit_edge, label %dec_label_pc_26aa, !insn.addr !631

dec_label_pc_2693.dec_label_pc_26b5_crit_edge:    ; preds = %dec_label_pc_2693
  %.pre = add i32 %2, add (i32 ptrtoint (i32* @global_var_3901 to i32), i32 400), !insn.addr !632
  %.pre1 = inttoptr i32 %.pre to i32*, !insn.addr !632
  %.pre3 = load i32, i32* %.pre1, align 4
  store i32 %.pre3, i32* %.reg2mem
  br label %dec_label_pc_26b5

dec_label_pc_26aa:                                ; preds = %dec_label_pc_2693
  %4 = load i32, i32* %arg1, align 4, !insn.addr !633
  %5 = add i32 %2, add (i32 ptrtoint (i32* @global_var_3901 to i32), i32 400)
  %6 = inttoptr i32 %5 to i32*
  store i32 %4, i32* %6, align 4, !insn.addr !634
  store i32 %4, i32* %.reg2mem, !insn.addr !634
  br label %dec_label_pc_26b5, !insn.addr !634

dec_label_pc_26b5:                                ; preds = %dec_label_pc_2693.dec_label_pc_26b5_crit_edge, %dec_label_pc_26aa
  %.reload = load i32, i32* %.reg2mem, !insn.addr !632
  ret i32 %.reload, !insn.addr !635

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32 add (i32 ptrtoint (i32* @global_var_3901 to i32), i32 400), { 1, 0 }
  uselistorder label %dec_label_pc_26b5, { 1, 0 }
}

define i32 @init_order_test() local_unnamed_addr {
dec_label_pc_26bd:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !636
  %1 = load i32, i32* %0
  %stack_var_-20 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !637
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !638
  store i32 20, i32* %stack_var_-20, align 4, !insn.addr !639
  %4 = call i32 @init_depends_on(i32* nonnull %stack_var_-20), !insn.addr !640
  %5 = call i32 @__readgsdword(i32 20), !insn.addr !641
  %6 = icmp eq i32 %3, %5, !insn.addr !641
  store i32 %4, i32* %eax.0.reg2mem, !insn.addr !642
  br i1 %6, label %dec_label_pc_2700, label %dec_label_pc_26fb, !insn.addr !642

dec_label_pc_26fb:                                ; preds = %dec_label_pc_26bd
  %7 = call i32 @__stack_chk_fail_local(), !insn.addr !643
  store i32 %7, i32* %eax.0.reg2mem, !insn.addr !643
  br label %dec_label_pc_2700, !insn.addr !643

dec_label_pc_2700:                                ; preds = %dec_label_pc_26fb, %dec_label_pc_26bd
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !644
}

define i32 @test_static_global() local_unnamed_addr {
dec_label_pc_2702:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !645
  %1 = load i32, i32* %0
  %stack_var_-20 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !646
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !647
  %4 = add i32 %1, add (i32 ptrtoint (i32* @global_var_388e to i32), i32 -11352), !insn.addr !648
  %5 = inttoptr i32 %4 to i8*, !insn.addr !649
  %6 = call i32 @puts(i8* %5), !insn.addr !650
  %7 = call i32 @global_var_access(), !insn.addr !651
  %8 = add i32 %1, add (i32 ptrtoint (i32* @global_var_388e to i32), i32 -11316), !insn.addr !652
  %9 = inttoptr i32 %8 to i8*, !insn.addr !653
  %10 = call i32 (i8*, ...) @printf(i8* %9), !insn.addr !654
  %11 = call i32 @global_var_read(), !insn.addr !655
  %12 = add i32 %1, add (i32 ptrtoint (i32* @global_var_388e to i32), i32 -11280), !insn.addr !656
  %13 = inttoptr i32 %12 to i8*, !insn.addr !657
  %14 = call i32 (i8*, ...) @printf(i8* %13), !insn.addr !658
  %15 = call i32 @global_array_access(i32 5), !insn.addr !659
  %16 = add i32 %1, add (i32 ptrtoint (i32* @global_var_388e to i32), i32 -11244), !insn.addr !660
  %17 = inttoptr i32 %16 to i8*, !insn.addr !661
  %18 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !662
  %19 = call i32 @static_local(i32 1), !insn.addr !663
  %20 = call i32 @static_local(i32 0), !insn.addr !664
  %21 = add i32 %1, add (i32 ptrtoint (i32* @global_var_388e to i32), i32 -11207), !insn.addr !665
  %22 = inttoptr i32 %21 to i8*, !insn.addr !666
  %23 = call i32 (i8*, ...) @printf(i8* %22), !insn.addr !667
  %24 = call i32 @static_local(i32 0), !insn.addr !668
  %25 = call i32 (i8*, ...) @printf(i8* %22), !insn.addr !669
  %26 = call i32 @call_static_func(i32 5), !insn.addr !670
  %27 = add i32 %1, add (i32 ptrtoint (i32* @global_var_388e to i32), i32 -11176), !insn.addr !671
  %28 = inttoptr i32 %27 to i8*, !insn.addr !672
  %29 = call i32 (i8*, ...) @printf(i8* %28), !insn.addr !673
  %30 = call i32 @access_extern_global(), !insn.addr !674
  %31 = add i32 %1, add (i32 ptrtoint (i32* @global_var_388e to i32), i32 -11140), !insn.addr !675
  %32 = inttoptr i32 %31 to i8*, !insn.addr !676
  %33 = call i32 (i8*, ...) @printf(i8* %32), !insn.addr !677
  %34 = call i32 @call_extern_func(), !insn.addr !678
  %35 = add i32 %1, add (i32 ptrtoint (i32* @global_var_388e to i32), i32 -11100), !insn.addr !679
  %36 = inttoptr i32 %35 to i8*, !insn.addr !680
  %37 = call i32 (i8*, ...) @printf(i8* %36), !insn.addr !681
  %38 = call i32 @read_const_data(), !insn.addr !682
  %39 = add i32 %1, add (i32 ptrtoint (i32* @global_var_388e to i32), i32 -11064), !insn.addr !683
  %40 = inttoptr i32 %39 to i8*, !insn.addr !684
  %41 = call i32 (i8*, ...) @printf(i8* %40), !insn.addr !685
  %42 = call i32 @access_bss_var(), !insn.addr !686
  %43 = add i32 %1, add (i32 ptrtoint (i32* @global_var_388e to i32), i32 -11028), !insn.addr !687
  %44 = inttoptr i32 %43 to i8*, !insn.addr !688
  %45 = call i32 (i8*, ...) @printf(i8* %44), !insn.addr !689
  %46 = call i32 @access_bss_buffer(), !insn.addr !690
  %47 = add i32 %1, add (i32 ptrtoint (i32* @global_var_388e to i32), i32 -10996), !insn.addr !691
  %48 = inttoptr i32 %47 to i8*, !insn.addr !692
  %49 = call i32 (i8*, ...) @printf(i8* %48), !insn.addr !693
  %50 = call i32 @global_struct_access(), !insn.addr !694
  %51 = add i32 %1, add (i32 ptrtoint (i32* @global_var_388e to i32), i32 -10960), !insn.addr !695
  %52 = inttoptr i32 %51 to i8*, !insn.addr !696
  %53 = call i32 (i8*, ...) @printf(i8* %52), !insn.addr !697
  %54 = call i32 @set_file_static(i32 50), !insn.addr !698
  %55 = call i32 @get_file_static(), !insn.addr !699
  %56 = add i32 %1, add (i32 ptrtoint (i32* @global_var_388e to i32), i32 -10922), !insn.addr !700
  %57 = inttoptr i32 %56 to i8*, !insn.addr !701
  %58 = call i32 (i8*, ...) @printf(i8* %57), !insn.addr !702
  %59 = add i32 %1, add (i32 ptrtoint (i32* @global_var_388e to i32), i32 -19423), !insn.addr !703
  %60 = call i32 @set_global_callback(i32 %59), !insn.addr !704
  %61 = call i32 @call_global_callback(i32 5), !insn.addr !705
  %62 = add i32 %1, add (i32 ptrtoint (i32* @global_var_388e to i32), i32 -10892), !insn.addr !706
  %63 = inttoptr i32 %62 to i8*, !insn.addr !707
  %64 = call i32 (i8*, ...) @printf(i8* %63), !insn.addr !708
  store i32 100, i32* %stack_var_-20, align 4, !insn.addr !709
  %65 = call i32 @global_heap_store(i32* nonnull %stack_var_-20), !insn.addr !710
  %66 = add i32 %1, add (i32 ptrtoint (i32* @global_var_388e to i32), i32 -10856), !insn.addr !711
  %67 = inttoptr i32 %66 to i8*, !insn.addr !712
  %68 = call i32 (i8*, ...) @printf(i8* %67), !insn.addr !713
  %69 = call i32 @static_complex_init(), !insn.addr !714
  %70 = add i32 %1, add (i32 ptrtoint (i32* @global_var_388e to i32), i32 -10820), !insn.addr !715
  %71 = inttoptr i32 %70 to i8*, !insn.addr !716
  %72 = call i32 (i8*, ...) @printf(i8* %71), !insn.addr !717
  %73 = call i32 @tls_access(i32 10), !insn.addr !718
  %74 = add i32 %1, add (i32 ptrtoint (i32* @global_var_388e to i32), i32 -10783), !insn.addr !719
  %75 = inttoptr i32 %74 to i8*, !insn.addr !720
  %76 = call i32 (i8*, ...) @printf(i8* %75), !insn.addr !721
  %77 = call i32 @init_order_test(), !insn.addr !722
  %78 = add i32 %1, add (i32 ptrtoint (i32* @global_var_388e to i32), i32 -10752), !insn.addr !723
  %79 = inttoptr i32 %78 to i8*, !insn.addr !724
  %80 = call i32 (i8*, ...) @printf(i8* %79), !insn.addr !725
  %81 = call i32 @__readgsdword(i32 20), !insn.addr !726
  %82 = icmp eq i32 %3, %81, !insn.addr !726
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !727
  br i1 %82, label %dec_label_pc_2964, label %dec_label_pc_295f, !insn.addr !727

dec_label_pc_295f:                                ; preds = %dec_label_pc_2702
  %83 = call i32 @__stack_chk_fail_local(), !insn.addr !728
  store i32 %83, i32* %eax.0.reg2mem, !insn.addr !728
  br label %dec_label_pc_2964, !insn.addr !728

dec_label_pc_2964:                                ; preds = %dec_label_pc_295f, %dec_label_pc_2702
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !729

; uselistorder directives
  uselistorder i32 100, { 1, 2, 0 }
  uselistorder i32 (i32)* @static_local, { 2, 1, 0 }
}

define i32 @memop_memset(i32* %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_2969:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !730
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !731
  %3 = icmp ne i32* %arg1, null, !insn.addr !732
  %4 = icmp eq i32 %arg2, 0, !insn.addr !733
  %5 = icmp eq i1 %4, false, !insn.addr !734
  %or.cond = icmp eq i1 %3, %5
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !735
  br i1 %or.cond, label %dec_label_pc_2991, label %dec_label_pc_29b0, !insn.addr !735

dec_label_pc_2991:                                ; preds = %dec_label_pc_2969
  %6 = call i32* @memset(i32* nonnull %arg1, i32 %arg3, i32 %arg2), !insn.addr !736
  %7 = bitcast i32* %arg1 to i8*, !insn.addr !737
  %8 = load i8, i8* %7, align 1, !insn.addr !737
  %9 = zext i8 %8 to i32, !insn.addr !737
  store i32 %9, i32* %storemerge.reg2mem, !insn.addr !738
  br label %dec_label_pc_29b0, !insn.addr !738

dec_label_pc_29b0:                                ; preds = %dec_label_pc_2969, %dec_label_pc_2991
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !739

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg2, { 1, 0 }
  uselistorder label %dec_label_pc_29b0, { 1, 0 }
}

define i32 @memop_memcpy(i32* %arg1, i32* %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_29b5:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !740
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !741
  %3 = icmp ne i32* %arg1, null, !insn.addr !742
  %4 = icmp ne i32* %arg2, null, !insn.addr !743
  %or.cond.not = icmp eq i1 %3, %4
  %5 = icmp eq i32 %arg3, 0, !insn.addr !744
  %6 = icmp eq i1 %5, false, !insn.addr !745
  %or.cond3 = icmp eq i1 %or.cond.not, %6
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !746
  br i1 %or.cond3, label %dec_label_pc_29e3, label %dec_label_pc_2a09, !insn.addr !746

dec_label_pc_29e3:                                ; preds = %dec_label_pc_29b5
  %7 = ptrtoint i32* %arg1 to i32
  %8 = call i32* @memcpy(i32* nonnull %arg1, i32* nonnull %arg2, i32 %arg3), !insn.addr !747
  %9 = add i32 %arg3, -4
  %10 = and i32 %9, -4, !insn.addr !748
  %11 = add i32 %10, %7, !insn.addr !749
  %12 = inttoptr i32 %11 to i32*, !insn.addr !750
  %13 = load i32, i32* %12, align 4, !insn.addr !750
  store i32 %13, i32* %storemerge.reg2mem, !insn.addr !750
  br label %dec_label_pc_2a09, !insn.addr !750

dec_label_pc_2a09:                                ; preds = %dec_label_pc_29b5, %dec_label_pc_29e3
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !751

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg3, { 1, 2, 0 }
  uselistorder i32* %arg1, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2a09, { 1, 0 }
}

define i32 @memop_memmove(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2a0e:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !752
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !753
  %3 = icmp eq i32* %arg1, null, !insn.addr !754
  %4 = icmp ult i32 %arg2, 2
  %or.cond = or i1 %3, %4
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !755
  br i1 %or.cond, label %dec_label_pc_2a60, label %dec_label_pc_2a36, !insn.addr !755

dec_label_pc_2a36:                                ; preds = %dec_label_pc_2a0e
  %5 = ptrtoint i32* %arg1 to i32
  %6 = add i32 %arg2, -1, !insn.addr !756
  %7 = add i32 %5, 1, !insn.addr !757
  %8 = inttoptr i32 %7 to i32*, !insn.addr !758
  %9 = call i32* @memmove(i32* %8, i32* nonnull %arg1, i32 %6), !insn.addr !758
  %10 = inttoptr i32 %7 to i8*, !insn.addr !759
  %11 = load i8, i8* %10, align 1, !insn.addr !759
  %12 = sext i8 %11 to i32, !insn.addr !760
  store i32 %12, i32* %storemerge.reg2mem, !insn.addr !760
  br label %dec_label_pc_2a60, !insn.addr !760

dec_label_pc_2a60:                                ; preds = %dec_label_pc_2a0e, %dec_label_pc_2a36
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !761

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg2, { 1, 0 }
  uselistorder i32* %arg1, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2a60, { 1, 0 }
}

define i32 @memop_memcmp(i32* %arg1, i32* %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_2a65:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !762
  %3 = icmp ne i32* %arg1, null, !insn.addr !763
  %4 = icmp ne i32* %arg2, null, !insn.addr !764
  %or.cond.not = icmp eq i1 %3, %4
  %5 = icmp eq i32 %arg3, 0, !insn.addr !765
  %6 = icmp eq i1 %5, false, !insn.addr !766
  %or.cond3 = icmp eq i1 %or.cond.not, %6
  br i1 %or.cond3, label %dec_label_pc_2a93, label %dec_label_pc_2acb, !insn.addr !767

dec_label_pc_2a93:                                ; preds = %dec_label_pc_2a65
  %7 = call i32 @memcmp(i32* nonnull %arg1, i32* nonnull %arg2, i32 %arg3), !insn.addr !768
  %8 = icmp eq i32 %7, 0, !insn.addr !769
  %9 = icmp slt i32 %7, 0, !insn.addr !769
  %10 = icmp eq i1 %9, false, !insn.addr !770
  %11 = icmp eq i1 %8, false, !insn.addr !770
  %12 = icmp eq i1 %10, %11, !insn.addr !770
  %not. = icmp ne i1 %10, true
  %. = sext i1 %not. to i32
  %spec.select = select i1 %12, i32 1, i32 %.
  ret i32 %spec.select

dec_label_pc_2acb:                                ; preds = %dec_label_pc_2a65
  ret i32 0, !insn.addr !771

; uselistorder directives
  uselistorder i32 %7, { 1, 0 }
  uselistorder i32 %arg3, { 1, 0 }
}

define i32 @memop_bzero(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2ad0:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !772
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !773
  %3 = icmp eq i32* %arg1, null, !insn.addr !774
  %4 = icmp eq i1 %3, false, !insn.addr !775
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !775
  br i1 %4, label %dec_label_pc_2af2, label %dec_label_pc_2b14, !insn.addr !775

dec_label_pc_2af2:                                ; preds = %dec_label_pc_2ad0
  %5 = call i32* @memset(i32* %arg1, i32 0, i32 %arg2), !insn.addr !776
  %6 = bitcast i32* %arg1 to i8*, !insn.addr !777
  %7 = load i8, i8* %6, align 1, !insn.addr !777
  %8 = zext i8 %7 to i32, !insn.addr !777
  store i32 %8, i32* %storemerge.reg2mem, !insn.addr !778
  br label %dec_label_pc_2b14, !insn.addr !778

dec_label_pc_2b14:                                ; preds = %dec_label_pc_2ad0, %dec_label_pc_2af2
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !779

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32* (i32*, i32, i32)* @memset, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2b14, { 1, 0 }
}

define i32 @memop_bcopy(i32* %arg1, i32* %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_2b19:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !780
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !781
  %3 = icmp ne i32* %arg1, null, !insn.addr !782
  %4 = icmp ne i32* %arg2, null, !insn.addr !783
  %or.cond.not = icmp eq i1 %3, %4
  %5 = icmp eq i32 %arg3, 0, !insn.addr !784
  %6 = icmp eq i1 %5, false, !insn.addr !785
  %or.cond3 = icmp eq i1 %or.cond.not, %6
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !786
  br i1 %or.cond3, label %dec_label_pc_2b47, label %dec_label_pc_2b66, !insn.addr !786

dec_label_pc_2b47:                                ; preds = %dec_label_pc_2b19
  %7 = call i32* @memmove(i32* nonnull %arg2, i32* nonnull %arg1, i32 %arg3), !insn.addr !787
  %8 = bitcast i32* %arg2 to i8*, !insn.addr !788
  %9 = load i8, i8* %8, align 1, !insn.addr !788
  %10 = zext i8 %9 to i32, !insn.addr !788
  store i32 %10, i32* %storemerge.reg2mem, !insn.addr !789
  br label %dec_label_pc_2b66, !insn.addr !789

dec_label_pc_2b66:                                ; preds = %dec_label_pc_2b19, %dec_label_pc_2b47
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !790

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32* (i32*, i32*, i32)* @memmove, { 1, 0, 2 }
  uselistorder i32 %arg3, { 1, 0 }
  uselistorder label %dec_label_pc_2b66, { 1, 0 }
}

define i32 @memop_unaligned_access(i32* %arg1) local_unnamed_addr {
dec_label_pc_2b6b:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !791
  %storemerge.reg2mem = alloca i32, !insn.addr !791
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !792
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !793
  %4 = icmp eq i32* %arg1, null, !insn.addr !794
  %5 = icmp eq i1 %4, false, !insn.addr !795
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !795
  br i1 %5, label %dec_label_pc_2b9d, label %dec_label_pc_2bab, !insn.addr !795

dec_label_pc_2b9d:                                ; preds = %dec_label_pc_2b6b
  %6 = ptrtoint i32* %arg1 to i32
  %7 = add i32 %6, 1, !insn.addr !796
  %8 = inttoptr i32 %7 to i32*, !insn.addr !797
  %9 = load i32, i32* %8, align 4, !insn.addr !797
  store i32 %9, i32* %storemerge.reg2mem, !insn.addr !798
  br label %dec_label_pc_2bab, !insn.addr !798

dec_label_pc_2bab:                                ; preds = %dec_label_pc_2b6b, %dec_label_pc_2b9d
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %10 = call i32 @__readgsdword(i32 20), !insn.addr !799
  %11 = icmp eq i32 %3, %10, !insn.addr !799
  store i32 %storemerge.reload, i32* %eax.0.reg2mem, !insn.addr !800
  br i1 %11, label %dec_label_pc_2bbc, label %dec_label_pc_2bb7, !insn.addr !800

dec_label_pc_2bb7:                                ; preds = %dec_label_pc_2bab
  %12 = call i32 @__stack_chk_fail_local(), !insn.addr !801
  store i32 %12, i32* %eax.0.reg2mem, !insn.addr !801
  br label %dec_label_pc_2bbc, !insn.addr !801

dec_label_pc_2bbc:                                ; preds = %dec_label_pc_2bb7, %dec_label_pc_2bab
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !802

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32* %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_2bab, { 1, 0 }
}

define i32 @memop_memory_barrier(i32* %arg1) local_unnamed_addr {
dec_label_pc_2bbe:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !803
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !804
  %3 = icmp eq i32* %arg1, null, !insn.addr !805
  %4 = icmp eq i1 %3, false, !insn.addr !806
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !806
  br i1 %4, label %dec_label_pc_2bdf, label %dec_label_pc_2bf6, !insn.addr !806

dec_label_pc_2bdf:                                ; preds = %dec_label_pc_2bbe
  %5 = load i32, i32* %arg1, align 4
  %6 = mul i32 %5, 2, !insn.addr !807
  store i32 %6, i32* %storemerge.reg2mem, !insn.addr !807
  br label %dec_label_pc_2bf6, !insn.addr !807

dec_label_pc_2bf6:                                ; preds = %dec_label_pc_2bbe, %dec_label_pc_2bdf
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !808

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 2, { 0, 15, 1, 2, 3, 10, 4, 11, 12, 5, 16, 13, 14, 6, 7, 8, 9 }
  uselistorder i32* null, { 4, 5, 0, 6, 7, 1, 8, 9, 2, 10, 11, 12, 3, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25 }
  uselistorder label %dec_label_pc_2bf6, { 1, 0 }
}

define i32 @test_memory_op_functions() local_unnamed_addr {
dec_label_pc_2bf8:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !809
  %1 = load i32, i32* %0
  %stack_var_-301 = alloca i32, align 4
  %stack_var_-305 = alloca i32, align 4
  %stack_var_-309 = alloca i32, align 4
  %stack_var_-293 = alloca i32, align 4
  %stack_var_-364 = alloca i32, align 4
  %stack_var_-376 = alloca i32, align 4
  %stack_var_-283 = alloca i32, align 4
  %stack_var_-272 = alloca i32, align 4
  %stack_var_-332 = alloca i32, align 4
  %stack_var_-352 = alloca i32, align 4
  %stack_var_-380 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !810
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !811
  %4 = add i32 %1, add (i32 ptrtoint ([28 x i8]* @global_var_3395 to i32), i32 -10716), !insn.addr !812
  %5 = inttoptr i32 %4 to i8*, !insn.addr !813
  %6 = call i32 @puts(i8* %5), !insn.addr !814
  store i32 10, i32* %stack_var_-352, align 4, !insn.addr !815
  store i32 0, i32* %stack_var_-332, align 4, !insn.addr !816
  %7 = call i32 @memop_memset(i32* nonnull %stack_var_-272, i32 10, i32 65), !insn.addr !817
  %8 = add i32 %1, add (i32 ptrtoint ([28 x i8]* @global_var_3395 to i32), i32 -10683), !insn.addr !818
  %9 = inttoptr i32 %8 to i8*, !insn.addr !819
  %10 = call i32 (i8*, ...) @printf(i8* %9), !insn.addr !820
  %11 = call i32 @memop_memcpy(i32* nonnull %stack_var_-332, i32* nonnull %stack_var_-352, i32 20), !insn.addr !821
  %12 = add i32 %1, add (i32 ptrtoint ([28 x i8]* @global_var_3395 to i32), i32 -10666), !insn.addr !822
  %13 = inttoptr i32 %12 to i8*, !insn.addr !823
  %14 = call i32 (i8*, ...) @printf(i8* %13), !insn.addr !824
  store i32 1819043144, i32* %stack_var_-283, align 4, !insn.addr !825
  %15 = call i32 @memop_memmove(i32* nonnull %stack_var_-283, i32 10), !insn.addr !826
  %16 = add i32 %1, add (i32 ptrtoint ([28 x i8]* @global_var_3395 to i32), i32 -10649), !insn.addr !827
  %17 = inttoptr i32 %16 to i8*, !insn.addr !828
  %18 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !829
  store i32 1, i32* %stack_var_-376, align 4, !insn.addr !830
  store i32 1, i32* %stack_var_-364, align 4, !insn.addr !831
  %19 = call i32 @memop_memcmp(i32* nonnull %stack_var_-376, i32* nonnull %stack_var_-364, i32 12), !insn.addr !832
  %20 = add i32 %1, add (i32 ptrtoint ([28 x i8]* @global_var_3395 to i32), i32 -10632), !insn.addr !833
  %21 = inttoptr i32 %20 to i8*, !insn.addr !834
  %22 = call i32 (i8*, ...) @printf(i8* %21), !insn.addr !835
  %23 = call i32 @memop_bzero(i32* nonnull %stack_var_-293, i32 10), !insn.addr !836
  %24 = add i32 %1, add (i32 ptrtoint ([28 x i8]* @global_var_3395 to i32), i32 -10615), !insn.addr !837
  %25 = inttoptr i32 %24 to i8*, !insn.addr !838
  %26 = call i32 (i8*, ...) @printf(i8* %25), !insn.addr !839
  store i32 67305985, i32* %stack_var_-309, align 4, !insn.addr !840
  store i32 0, i32* %stack_var_-305, align 4, !insn.addr !841
  %27 = call i32 @memop_bcopy(i32* nonnull %stack_var_-309, i32* nonnull %stack_var_-305, i32 4), !insn.addr !842
  %28 = add i32 %1, add (i32 ptrtoint ([28 x i8]* @global_var_3395 to i32), i32 -10598), !insn.addr !843
  %29 = inttoptr i32 %28 to i8*, !insn.addr !844
  %30 = call i32 (i8*, ...) @printf(i8* %29), !insn.addr !845
  store i32 50462976, i32* %stack_var_-301, align 4, !insn.addr !846
  %31 = call i32 @memop_unaligned_access(i32* nonnull %stack_var_-301), !insn.addr !847
  %32 = add i32 %1, add (i32 ptrtoint ([28 x i8]* @global_var_3395 to i32), i32 -10581), !insn.addr !848
  %33 = inttoptr i32 %32 to i8*, !insn.addr !849
  %34 = call i32 (i8*, ...) @printf(i8* %33), !insn.addr !850
  store i32 5, i32* %stack_var_-380, align 4, !insn.addr !851
  %35 = call i32 @memop_memory_barrier(i32* nonnull %stack_var_-380), !insn.addr !852
  %36 = add i32 %1, add (i32 ptrtoint ([28 x i8]* @global_var_3395 to i32), i32 -10562), !insn.addr !853
  %37 = inttoptr i32 %36 to i8*, !insn.addr !854
  %38 = call i32 (i8*, ...) @printf(i8* %37), !insn.addr !855
  %39 = call i32 @__readgsdword(i32 20), !insn.addr !856
  %40 = icmp eq i32 %3, %39, !insn.addr !856
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !857
  br i1 %40, label %dec_label_pc_2e81, label %dec_label_pc_2e7c, !insn.addr !857

dec_label_pc_2e7c:                                ; preds = %dec_label_pc_2bf8
  %41 = call i32 @__stack_chk_fail_local(), !insn.addr !858
  store i32 %41, i32* %eax.0.reg2mem, !insn.addr !858
  br label %dec_label_pc_2e81, !insn.addr !858

dec_label_pc_2e81:                                ; preds = %dec_label_pc_2e7c, %dec_label_pc_2bf8
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !859

; uselistorder directives
  uselistorder i32 ()* @__stack_chk_fail_local, { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 5, { 12, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 10, 11 }
  uselistorder i32 4, { 21, 25, 0, 26, 1, 22, 23, 2, 3, 4, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 5, 6, 7, 8, 9, 10, 24, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 }
  uselistorder i32 (i8*, ...)* @printf, { 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 49 }
  uselistorder i32 10, { 3, 4, 5, 15, 6, 2, 7, 8, 16, 9, 10, 17, 0, 11, 12, 13, 14, 1, 18 }
  uselistorder i32 (i8*)* @puts, { 3, 2, 1, 0, 4 }
  uselistorder i32 20, { 5, 1, 6, 7, 8, 9, 10, 11, 4, 12, 13, 14, 2, 26, 27, 3, 15, 16, 0, 17, 18, 19, 20, 21, 22, 23, 24, 25 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_2e86:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !860
  %3 = call i32 @test_stack_memory(), !insn.addr !861
  %4 = call i32 @test_heap_memory(), !insn.addr !862
  %5 = call i32 @test_static_global(), !insn.addr !863
  %6 = call i32 @test_memory_op_functions(), !insn.addr !864
  ret i32 0, !insn.addr !865

; uselistorder directives
  uselistorder i32 0, { 21, 0, 48, 49, 37, 41, 22, 53, 54, 38, 39, 40, 1, 42, 43, 55, 2, 56, 3, 57, 44, 45, 58, 59, 50, 4, 60, 24, 5, 29, 61, 62, 63, 64, 65, 66, 67, 68, 6, 7, 34, 69, 70, 71, 35, 8, 9, 51, 10, 72, 73, 25, 11, 30, 12, 13, 14, 15, 31, 26, 16, 32, 17, 52, 46, 27, 18, 33, 74, 75, 28, 19, 36, 20, 76, 23, 47 }
}

define i32 @__x86.get_pc_thunk.ax(i32 %arg1) local_unnamed_addr {
dec_label_pc_2eb5:
  ret i32 %arg1, !insn.addr !866
}

define i32 @extern_function(i32 %arg1) local_unnamed_addr {
dec_label_pc_2eb9:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !867
  %3 = mul i32 %arg1, 3, !insn.addr !868
  ret i32 %3, !insn.addr !869

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.ax, { 20, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
}

define i32 @__stack_chk_fail_local() local_unnamed_addr {
dec_label_pc_2ee0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !870
  call void @__stack_chk_fail(), !insn.addr !871
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !872
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_2f00:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !873
  %ebx.0.reg2mem = alloca i32, !insn.addr !873
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !874
  %3 = add i32 %1, add (i32 ptrtoint ([11 x i8]* @global_var_3097 to i32), i32 -232), !insn.addr !875
  %4 = inttoptr i32 %3 to i32*, !insn.addr !875
  %5 = load i32, i32* %4, align 4, !insn.addr !875
  %6 = icmp eq i32 %5, -1, !insn.addr !876
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !877
  store i32 -1, i32* %merge.reg2mem, !insn.addr !877
  br i1 %6, label %dec_label_pc_2f3d, label %dec_label_pc_2f30, !insn.addr !877

dec_label_pc_2f30:                                ; preds = %dec_label_pc_2f00, %dec_label_pc_2f30
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !878
  %8 = inttoptr i32 %7 to i32*, !insn.addr !878
  %9 = load i32, i32* %8, align 4, !insn.addr !878
  %10 = icmp eq i32 %9, -1, !insn.addr !879
  %11 = icmp eq i1 %10, false, !insn.addr !880
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !880
  store i32 %9, i32* %merge.reg2mem, !insn.addr !880
  br i1 %11, label %dec_label_pc_2f30, label %dec_label_pc_2f3d, !insn.addr !880

dec_label_pc_2f3d:                                ; preds = %dec_label_pc_2f30, %dec_label_pc_2f00
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !881

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 37, 8, 9, 2, 10, 11, 6, 3, 4, 5, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 0, 23, 24, 1, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 7, 36 }
  uselistorder i32 -4, { 4, 0, 1, 2, 3 }
  uselistorder i32 -1, { 26, 0, 27, 1, 2, 3, 4, 28, 5, 6, 7, 8, 25, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2f30, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_2f4c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !882
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !883
  ret i32 %3, !insn.addr !884

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 17, 1, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 0 }
  uselistorder i32 1, { 68, 70, 69, 67, 66, 65, 64, 137, 139, 145, 144, 143, 142, 141, 140, 138, 136, 135, 134, 133, 71, 63, 72, 62, 160, 74, 73, 61, 75, 60, 76, 59, 128, 58, 161, 77, 57, 78, 56, 79, 55, 129, 146, 80, 54, 147, 81, 53, 82, 52, 51, 50, 83, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 162, 38, 37, 163, 84, 36, 85, 35, 34, 164, 33, 130, 149, 148, 86, 32, 165, 88, 87, 31, 89, 30, 90, 29, 166, 92, 91, 28, 94, 93, 27, 26, 167, 150, 101, 100, 99, 98, 97, 96, 95, 25, 102, 24, 103, 23, 168, 105, 104, 22, 169, 170, 109, 108, 107, 106, 21, 171, 113, 112, 111, 110, 20, 172, 115, 114, 19, 152, 154, 153, 151, 116, 18, 117, 17, 173, 155, 120, 119, 118, 16, 174, 131, 156, 123, 122, 121, 15, 157, 124, 14, 13, 12, 11, 175, 158, 126, 125, 10, 9, 8, 7, 6, 127, 5, 4, 3, 2, 159, 1, 0, 132 }
}

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32* @memmove(i32*, i32*, i32) local_unnamed_addr

declare void @free(i32*) local_unnamed_addr

declare i32* @memcpy(i32*, i32*, i32) local_unnamed_addr

declare i32 @memcmp(i32*, i32*, i32) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare void @perror(i8*) local_unnamed_addr

declare i32 @waitpid(i32, i32*, i32) local_unnamed_addr

declare i32* @realloc(i32*, i32) local_unnamed_addr

declare i32* @malloc(i32) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare void @exit(i32) local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

declare i32 @fork() local_unnamed_addr

declare i32* @calloc(i32, i32) local_unnamed_addr

declare void @__cxa_finalize(i32*) local_unnamed_addr

declare i32 @__asm_hlt() local_unnamed_addr

declare void @__asm_rep_stosd_memset(i8*, i32, i32) local_unnamed_addr

declare i32 @__readgsdword(i32) local_unnamed_addr

declare void @__writegsdword(i32, i32) local_unnamed_addr

!0 = !{i64 4104}
!1 = !{i64 4127}
!2 = !{i64 4132}
!3 = !{i64 4141}
!4 = !{i64 4420}
!5 = !{i64 4436}
!6 = !{i64 4452}
!7 = !{i64 4468}
!8 = !{i64 4484}
!9 = !{i64 4500}
!10 = !{i64 4516}
!11 = !{i64 4532}
!12 = !{i64 4548}
!13 = !{i64 4564}
!14 = !{i64 4580}
!15 = !{i64 4596}
!16 = !{i64 4612}
!17 = !{i64 4628}
!18 = !{i64 4644}
!19 = !{i64 4660}
!20 = !{i64 4676}
!21 = !{i64 4703}
!22 = !{i64 4720}
!23 = !{i64 4726}
!24 = !{i64 4731}
!25 = !{i64 4735}
!26 = !{i64 4739}
!27 = !{i64 4752}
!28 = !{i64 4769}
!29 = !{i64 4808}
!30 = !{i64 4816}
!31 = !{i64 4886}
!32 = !{i64 4896}
!33 = !{i64 4904}
!34 = !{i64 4920}
!35 = !{i64 4927}
!36 = !{i64 4929}
!37 = !{i64 4935}
!38 = !{i64 4937}
!39 = !{i64 4942}
!40 = !{i64 4950}
!41 = !{i64 4955}
!42 = !{i64 5014}
!43 = !{i64 5019}
!44 = !{i64 5033}
!45 = !{i64 5044}
!46 = !{i64 5052}
!47 = !{i64 5056}
!48 = !{i64 5064}
!49 = !{i64 5077}
!50 = !{i64 5080}
!51 = !{i64 5091}
!52 = !{i64 5110}
!53 = !{i64 5118}
!54 = !{i64 5128}
!55 = !{i64 5129}
!56 = !{i64 5134}
!57 = !{i64 5139}
!58 = !{i64 5149}
!59 = !{i64 5181}
!60 = !{i64 5172}
!61 = !{i64 5185}
!62 = !{i64 5193}
!63 = !{i64 5201}
!64 = !{i64 5208}
!65 = !{i64 5210}
!66 = !{i64 5216}
!67 = !{i64 5227}
!68 = !{i64 5257}
!69 = !{i64 5260}
!70 = !{i64 5271}
!71 = !{i64 5294}
!72 = !{i64 5300}
!73 = !{i64 5311}
!74 = !{i64 5343}
!75 = !{i64 5346}
!76 = !{i64 5347}
!77 = !{i64 5360}
!78 = !{i64 5370}
!79 = !{i64 5401}
!80 = !{i64 5391}
!81 = !{i64 5407}
!82 = !{i64 5413}
!83 = !{i64 5415}
!84 = !{i64 5417}
!85 = !{i64 5465}
!86 = !{i64 5476}
!87 = !{i64 5486}
!88 = !{i64 5505}
!89 = !{i64 5514}
!90 = !{i64 5473}
!91 = !{i64 5535}
!92 = !{i64 5550}
!93 = !{i64 5569}
!94 = !{i64 5577}
!95 = !{i64 5601}
!96 = !{i64 5607}
!97 = !{i64 5660}
!98 = !{i64 5669}
!99 = !{i64 5672}
!100 = !{i64 5682}
!101 = !{i64 5689}
!102 = !{i64 5692}
!103 = !{i64 5701}
!104 = !{i64 5709}
!105 = !{i64 5716}
!106 = !{i64 5718}
!107 = !{i64 5727}
!108 = !{i64 5728}
!109 = !{i64 5738}
!110 = !{i64 5748}
!111 = !{i64 5759}
!112 = !{i64 5763}
!113 = !{i64 5735}
!114 = !{i64 5778}
!115 = !{i64 5792}
!116 = !{i64 5811}
!117 = !{i64 5843}
!118 = !{i64 5819}
!119 = !{i64 5849}
!120 = !{i64 5878}
!121 = !{i64 5881}
!122 = !{i64 5936}
!123 = !{i64 5902}
!124 = !{i64 5912}
!125 = !{i64 5922}
!126 = !{i64 5924}
!127 = !{i64 5926}
!128 = !{i64 5943}
!129 = !{i64 5946}
!130 = !{i64 5950}
!131 = !{i64 5960}
!132 = !{i64 5962}
!133 = !{i64 5967}
!134 = !{i64 5974}
!135 = !{i64 5976}
!136 = !{i64 5982}
!137 = !{i64 5983}
!138 = !{i64 5993}
!139 = !{i64 6015}
!140 = !{i64 6083}
!141 = !{i64 6090}
!142 = !{i64 6092}
!143 = !{i64 6098}
!144 = !{i64 6099}
!145 = !{i64 6111}
!146 = !{i64 6122}
!147 = !{i64 6136}
!148 = !{i64 6142}
!149 = !{i64 6143}
!150 = !{i64 6156}
!151 = !{i64 6168}
!152 = !{i64 6174}
!153 = !{i64 6175}
!154 = !{i64 6188}
!155 = !{i64 6200}
!156 = !{i64 6206}
!157 = !{i64 6207}
!158 = !{i64 6220}
!159 = !{i64 6232}
!160 = !{i64 6238}
!161 = !{i64 6239}
!162 = !{i64 6254}
!163 = !{i64 6266}
!164 = !{i64 6272}
!165 = !{i64 6273}
!166 = !{i64 6296}
!167 = !{i64 6298}
!168 = !{i64 6326}
!169 = !{i64 6338}
!170 = !{i64 6344}
!171 = !{i64 6345}
!172 = !{i64 6353}
!173 = !{i64 6362}
!174 = !{i64 6368}
!175 = !{i64 6369}
!176 = !{i64 6382}
!177 = !{i64 6394}
!178 = !{i64 6400}
!179 = !{i64 6401}
!180 = !{i64 6414}
!181 = !{i64 6426}
!182 = !{i64 6432}
!183 = !{i64 6433}
!184 = !{i64 6441}
!185 = !{i64 6459}
!186 = !{i64 6471}
!187 = !{i64 6477}
!188 = !{i64 6478}
!189 = !{i64 6490}
!190 = !{i64 6497}
!191 = !{i64 6499}
!192 = !{i64 6510}
!193 = !{i64 6511}
!194 = !{i64 6522}
!195 = !{i64 6536}
!196 = !{i64 6543}
!197 = !{i64 6554}
!198 = !{i64 6558}
!199 = !{i64 6608}
!200 = !{i64 6579}
!201 = !{i64 6589}
!202 = !{i64 6594}
!203 = !{i64 6596}
!204 = !{i64 6598}
!205 = !{i64 6615}
!206 = !{i64 6618}
!207 = !{i64 6622}
!208 = !{i64 6632}
!209 = !{i64 6634}
!210 = !{i64 6645}
!211 = !{i64 6653}
!212 = !{i64 6660}
!213 = !{i64 6661}
!214 = !{i64 6672}
!215 = !{i64 6692}
!216 = !{i64 6703}
!217 = !{i64 6707}
!218 = !{i64 6762}
!219 = !{i64 6735}
!220 = !{i64 6745}
!221 = !{i64 6747}
!222 = !{i64 6749}
!223 = !{i64 6752}
!224 = !{i64 6770}
!225 = !{i64 6778}
!226 = !{i64 6785}
!227 = !{i64 6786}
!228 = !{i64 6797}
!229 = !{i64 6813}
!230 = !{i64 6824}
!231 = !{i64 6828}
!232 = !{i64 6852}
!233 = !{i64 6862}
!234 = !{i64 6867}
!235 = !{i64 6870}
!236 = !{i64 6880}
!237 = !{i64 6885}
!238 = !{i64 6899}
!239 = !{i64 6910}
!240 = !{i64 6914}
!241 = !{i64 6922}
!242 = !{i64 6935}
!243 = !{i64 6955}
!244 = !{i64 6965}
!245 = !{i64 6978}
!246 = !{i64 6980}
!247 = !{i64 6982}
!248 = !{i64 6990}
!249 = !{i64 6995}
!250 = !{i64 6998}
!251 = !{i64 7000}
!252 = !{i64 7003}
!253 = !{i64 7008}
!254 = !{i64 7011}
!255 = !{i64 7027}
!256 = !{i64 7035}
!257 = !{i64 7042}
!258 = !{i64 7043}
!259 = !{i64 7054}
!260 = !{i64 7068}
!261 = !{i64 7075}
!262 = !{i64 7086}
!263 = !{i64 7090}
!264 = !{i64 7145}
!265 = !{i64 7111}
!266 = !{i64 7121}
!267 = !{i64 7131}
!268 = !{i64 7133}
!269 = !{i64 7135}
!270 = !{i64 7152}
!271 = !{i64 7155}
!272 = !{i64 7159}
!273 = !{i64 7169}
!274 = !{i64 7171}
!275 = !{i64 7182}
!276 = !{i64 7190}
!277 = !{i64 7197}
!278 = !{i64 7198}
!279 = !{i64 7209}
!280 = !{i64 7225}
!281 = !{i64 7236}
!282 = !{i64 7240}
!283 = !{i64 7255}
!284 = !{i64 7260}
!285 = !{i64 7266}
!286 = !{i64 7272}
!287 = !{i64 7280}
!288 = !{i64 7291}
!289 = !{i64 7299}
!290 = !{i64 7306}
!291 = !{i64 7307}
!292 = !{i64 7316}
!293 = !{i64 7332}
!294 = !{i64 7345}
!295 = !{i64 7352}
!296 = !{i64 7354}
!297 = !{i64 7368}
!298 = !{i64 7377}
!299 = !{i64 7384}
!300 = !{i64 7392}
!301 = !{i64 7398}
!302 = !{i64 7400}
!303 = !{i64 7403}
!304 = !{i64 7405}
!305 = !{i64 7416}
!306 = !{i64 7429}
!307 = !{i64 7439}
!308 = !{i64 7448}
!309 = !{i64 7450}
!310 = !{i64 7453}
!311 = !{i64 7460}
!312 = !{i64 7471}
!313 = !{i64 7472}
!314 = !{i64 7480}
!315 = !{i64 7483}
!316 = !{i64 7494}
!317 = !{i64 7523}
!318 = !{i64 7525}
!319 = !{i64 7536}
!320 = !{i64 7540}
!321 = !{i64 7573}
!322 = !{i64 7577}
!323 = !{i64 7553}
!324 = !{i64 7556}
!325 = !{i64 7562}
!326 = !{i64 7565}
!327 = !{i64 7599}
!328 = !{i64 7606}
!329 = !{i64 7611}
!330 = !{i64 7618}
!331 = !{i64 7622}
!332 = !{i64 7627}
!333 = !{i64 7636}
!334 = !{i64 7644}
!335 = !{i64 7650}
!336 = !{i64 7653}
!337 = !{i64 7661}
!338 = !{i64 7703}
!339 = !{i64 7685}
!340 = !{i64 7687}
!341 = !{i64 7693}
!342 = !{i64 7699}
!343 = !{i64 7716}
!344 = !{i64 7719}
!345 = !{i64 7725}
!346 = !{i64 7728}
!347 = !{i64 7736}
!348 = !{i64 7740}
!349 = !{i64 7749}
!350 = !{i64 7761}
!351 = !{i64 7778}
!352 = !{i64 7789}
!353 = !{i64 7793}
!354 = !{i64 7801}
!355 = !{i64 7806}
!356 = !{i64 7816}
!357 = !{i64 7830}
!358 = !{i64 7831}
!359 = !{i64 7842}
!360 = !{i64 7858}
!361 = !{i64 7869}
!362 = !{i64 7873}
!363 = !{i64 7890}
!364 = !{i64 7901}
!365 = !{i64 7909}
!366 = !{i64 7920}
!367 = !{i64 7929}
!368 = !{i64 7931}
!369 = !{i64 7939}
!370 = !{i64 7941}
!371 = !{i64 7963}
!372 = !{i64 7968}
!373 = !{i64 7974}
!374 = !{i64 7977}
!375 = !{i64 7979}
!376 = !{i64 7991}
!377 = !{i64 7996}
!378 = !{i64 8005}
!379 = !{i64 8018}
!380 = !{i64 8023}
!381 = !{i64 8031}
!382 = !{i64 8033}
!383 = !{i64 8041}
!384 = !{i64 8043}
!385 = !{i64 8058}
!386 = !{i64 8069}
!387 = !{i64 8076}
!388 = !{i64 8090}
!389 = !{i64 8098}
!390 = !{i64 8105}
!391 = !{i64 8106}
!392 = !{i64 8117}
!393 = !{i64 8130}
!394 = !{i64 8139}
!395 = !{i64 8150}
!396 = !{i64 8154}
!397 = !{i64 8202}
!398 = !{i64 8175}
!399 = !{i64 8185}
!400 = !{i64 8190}
!401 = !{i64 8192}
!402 = !{i64 8209}
!403 = !{i64 8212}
!404 = !{i64 8216}
!405 = !{i64 8226}
!406 = !{i64 8228}
!407 = !{i64 8234}
!408 = !{i64 8235}
!409 = !{i64 8246}
!410 = !{i64 8262}
!411 = !{i64 8273}
!412 = !{i64 8277}
!413 = !{i64 8289}
!414 = !{i64 8309}
!415 = !{i64 8315}
!416 = !{i64 8316}
!417 = !{i64 8330}
!418 = !{i64 8341}
!419 = !{i64 8346}
!420 = !{i64 8353}
!421 = !{i64 8354}
!422 = !{i64 8365}
!423 = !{i64 8376}
!424 = !{i64 8380}
!425 = !{i64 8387}
!426 = !{i64 8398}
!427 = !{i64 8402}
!428 = !{i64 8414}
!429 = !{i64 8426}
!430 = !{i64 8440}
!431 = !{i64 8453}
!432 = !{i64 8458}
!433 = !{i64 8464}
!434 = !{i64 8465}
!435 = !{i64 8476}
!436 = !{i64 8492}
!437 = !{i64 8503}
!438 = !{i64 8507}
!439 = !{i64 8528}
!440 = !{i64 8538}
!441 = !{i64 8543}
!442 = !{i64 8546}
!443 = !{i64 8548}
!444 = !{i64 8556}
!445 = !{i64 8561}
!446 = !{i64 8572}
!447 = !{i64 8580}
!448 = !{i64 8587}
!449 = !{i64 8588}
!450 = !{i64 8599}
!451 = !{i64 8610}
!452 = !{i64 8624}
!453 = !{i64 8630}
!454 = !{i64 8631}
!455 = !{i64 8644}
!456 = !{i64 8656}
!457 = !{i64 8662}
!458 = !{i64 8663}
!459 = !{i64 8676}
!460 = !{i64 8688}
!461 = !{i64 8694}
!462 = !{i64 8695}
!463 = !{i64 8703}
!464 = !{i64 8712}
!465 = !{i64 8718}
!466 = !{i64 8719}
!467 = !{i64 8732}
!468 = !{i64 8744}
!469 = !{i64 8750}
!470 = !{i64 8751}
!471 = !{i64 8764}
!472 = !{i64 8776}
!473 = !{i64 8782}
!474 = !{i64 8783}
!475 = !{i64 8791}
!476 = !{i64 8805}
!477 = !{i64 8817}
!478 = !{i64 8823}
!479 = !{i64 8824}
!480 = !{i64 8832}
!481 = !{i64 8835}
!482 = !{i64 8837}
!483 = !{i64 8842}
!484 = !{i64 8849}
!485 = !{i64 8857}
!486 = !{i64 8864}
!487 = !{i64 8869}
!488 = !{i64 8872}
!489 = !{i64 8881}
!490 = !{i64 8887}
!491 = !{i64 8888}
!492 = !{i64 8896}
!493 = !{i64 8905}
!494 = !{i64 8911}
!495 = !{i64 8912}
!496 = !{i64 8925}
!497 = !{i64 8937}
!498 = !{i64 8943}
!499 = !{i64 8944}
!500 = !{i64 8955}
!501 = !{i64 8961}
!502 = !{i64 8962}
!503 = !{i64 8970}
!504 = !{i64 8978}
!505 = !{i64 8982}
!506 = !{i64 8984}
!507 = !{i64 8998}
!508 = !{i64 9004}
!509 = !{i64 9005}
!510 = !{i64 9018}
!511 = !{i64 8975}
!512 = !{i64 9027}
!513 = !{i64 9041}
!514 = !{i64 9049}
!515 = !{i64 9052}
!516 = !{i64 9055}
!517 = !{i64 9057}
!518 = !{i64 9072}
!519 = !{i64 9078}
!520 = !{i64 9079}
!521 = !{i64 9087}
!522 = !{i64 9098}
!523 = !{i64 9100}
!524 = !{i64 9102}
!525 = !{i64 9114}
!526 = !{i64 9120}
!527 = !{i64 9121}
!528 = !{i64 9129}
!529 = !{i64 9134}
!530 = !{i64 9140}
!531 = !{i64 9141}
!532 = !{i64 9146}
!533 = !{i64 9153}
!534 = !{i64 9160}
!535 = !{i64 9162}
!536 = !{i64 9171}
!537 = !{i64 9179}
!538 = !{i64 9189}
!539 = !{i64 9195}
!540 = !{i64 9198}
!541 = !{i64 9211}
!542 = !{i64 9219}
!543 = !{i64 9229}
!544 = !{i64 9235}
!545 = !{i64 9238}
!546 = !{i64 9239}
!547 = !{i64 9246}
!548 = !{i64 9260}
!549 = !{i64 9278}
!550 = !{i64 9286}
!551 = !{i64 9287}
!552 = !{i64 9294}
!553 = !{i64 9304}
!554 = !{i64 9308}
!555 = !{i64 9327}
!556 = !{i64 9333}
!557 = !{i64 9342}
!558 = !{i64 9349}
!559 = !{i64 9357}
!560 = !{i64 9370}
!561 = !{i64 9373}
!562 = !{i64 9381}
!563 = !{i64 9394}
!564 = !{i64 9402}
!565 = !{i64 9406}
!566 = !{i64 9414}
!567 = !{i64 9424}
!568 = !{i64 9430}
!569 = !{i64 9432}
!570 = !{i64 9436}
!571 = !{i64 9448}
!572 = !{i64 9465}
!573 = !{i64 9477}
!574 = !{i64 9485}
!575 = !{i64 9495}
!576 = !{i64 9501}
!577 = !{i64 9504}
!578 = !{i64 9507}
!579 = !{i64 9515}
!580 = !{i64 9518}
!581 = !{i64 9526}
!582 = !{i64 9536}
!583 = !{i64 9543}
!584 = !{i64 9551}
!585 = !{i64 9561}
!586 = !{i64 9568}
!587 = !{i64 9572}
!588 = !{i64 9580}
!589 = !{i64 9590}
!590 = !{i64 9596}
!591 = !{i64 9602}
!592 = !{i64 9605}
!593 = !{i64 9613}
!594 = !{i64 9618}
!595 = !{i64 9626}
!596 = !{i64 9634}
!597 = !{i64 9642}
!598 = !{i64 9652}
!599 = !{i64 9659}
!600 = !{i64 9667}
!601 = !{i64 9672}
!602 = !{i64 9680}
!603 = !{i64 9688}
!604 = !{i64 9699}
!605 = !{i64 9709}
!606 = !{i64 9715}
!607 = !{i64 9744}
!608 = !{i64 9745}
!609 = !{i64 9752}
!610 = !{i64 9765}
!611 = !{i64 9777}
!612 = !{i64 9779}
!613 = !{i64 9787}
!614 = !{i64 9789}
!615 = !{i64 9797}
!616 = !{i64 9805}
!617 = !{i64 9815}
!618 = !{i64 9821}
!619 = !{i64 9827}
!620 = !{i64 9829}
!621 = !{i64 9835}
!622 = !{i64 9838}
!623 = !{i64 9846}
!624 = !{i64 9859}
!625 = !{i64 9865}
!626 = !{i64 9871}
!627 = !{i64 9874}
!628 = !{i64 9875}
!629 = !{i64 9882}
!630 = !{i64 9892}
!631 = !{i64 9896}
!632 = !{i64 9909}
!633 = !{i64 9901}
!634 = !{i64 9903}
!635 = !{i64 9916}
!636 = !{i64 9917}
!637 = !{i64 9927}
!638 = !{i64 9937}
!639 = !{i64 9948}
!640 = !{i64 9959}
!641 = !{i64 9970}
!642 = !{i64 9977}
!643 = !{i64 9979}
!644 = !{i64 9985}
!645 = !{i64 9986}
!646 = !{i64 9997}
!647 = !{i64 10008}
!648 = !{i64 10022}
!649 = !{i64 10028}
!650 = !{i64 10029}
!651 = !{i64 10037}
!652 = !{i64 10046}
!653 = !{i64 10052}
!654 = !{i64 10053}
!655 = !{i64 10061}
!656 = !{i64 10070}
!657 = !{i64 10076}
!658 = !{i64 10077}
!659 = !{i64 10090}
!660 = !{i64 10102}
!661 = !{i64 10108}
!662 = !{i64 10109}
!663 = !{i64 10122}
!664 = !{i64 10135}
!665 = !{i64 10147}
!666 = !{i64 10153}
!667 = !{i64 10154}
!668 = !{i64 10167}
!669 = !{i64 10186}
!670 = !{i64 10199}
!671 = !{i64 10211}
!672 = !{i64 10217}
!673 = !{i64 10218}
!674 = !{i64 10226}
!675 = !{i64 10235}
!676 = !{i64 10241}
!677 = !{i64 10242}
!678 = !{i64 10250}
!679 = !{i64 10259}
!680 = !{i64 10265}
!681 = !{i64 10266}
!682 = !{i64 10274}
!683 = !{i64 10283}
!684 = !{i64 10289}
!685 = !{i64 10290}
!686 = !{i64 10298}
!687 = !{i64 10307}
!688 = !{i64 10313}
!689 = !{i64 10314}
!690 = !{i64 10322}
!691 = !{i64 10331}
!692 = !{i64 10337}
!693 = !{i64 10338}
!694 = !{i64 10346}
!695 = !{i64 10355}
!696 = !{i64 10361}
!697 = !{i64 10362}
!698 = !{i64 10375}
!699 = !{i64 10383}
!700 = !{i64 10392}
!701 = !{i64 10398}
!702 = !{i64 10399}
!703 = !{i64 10410}
!704 = !{i64 10417}
!705 = !{i64 10430}
!706 = !{i64 10442}
!707 = !{i64 10448}
!708 = !{i64 10449}
!709 = !{i64 10457}
!710 = !{i64 10471}
!711 = !{i64 10483}
!712 = !{i64 10489}
!713 = !{i64 10490}
!714 = !{i64 10498}
!715 = !{i64 10507}
!716 = !{i64 10513}
!717 = !{i64 10514}
!718 = !{i64 10527}
!719 = !{i64 10539}
!720 = !{i64 10545}
!721 = !{i64 10546}
!722 = !{i64 10554}
!723 = !{i64 10563}
!724 = !{i64 10569}
!725 = !{i64 10570}
!726 = !{i64 10582}
!727 = !{i64 10589}
!728 = !{i64 10591}
!729 = !{i64 10600}
!730 = !{i64 10601}
!731 = !{i64 10612}
!732 = !{i64 10622}
!733 = !{i64 10628}
!734 = !{i64 10632}
!735 = !{i64 10626}
!736 = !{i64 10655}
!737 = !{i64 10666}
!738 = !{i64 10669}
!739 = !{i64 10676}
!740 = !{i64 10677}
!741 = !{i64 10688}
!742 = !{i64 10698}
!743 = !{i64 10704}
!744 = !{i64 10710}
!745 = !{i64 10714}
!746 = !{i64 10702}
!747 = !{i64 10737}
!748 = !{i64 10751}
!749 = !{i64 10757}
!750 = !{i64 10759}
!751 = !{i64 10765}
!752 = !{i64 10766}
!753 = !{i64 10777}
!754 = !{i64 10787}
!755 = !{i64 10791}
!756 = !{i64 10809}
!757 = !{i64 10815}
!758 = !{i64 10828}
!759 = !{i64 10842}
!760 = !{i64 10845}
!761 = !{i64 10852}
!762 = !{i64 10864}
!763 = !{i64 10874}
!764 = !{i64 10880}
!765 = !{i64 10886}
!766 = !{i64 10890}
!767 = !{i64 10878}
!768 = !{i64 10913}
!769 = !{i64 10924}
!770 = !{i64 10928}
!771 = !{i64 10959}
!772 = !{i64 10960}
!773 = !{i64 10971}
!774 = !{i64 10981}
!775 = !{i64 10985}
!776 = !{i64 11011}
!777 = !{i64 11022}
!778 = !{i64 11025}
!779 = !{i64 11032}
!780 = !{i64 11033}
!781 = !{i64 11044}
!782 = !{i64 11054}
!783 = !{i64 11060}
!784 = !{i64 11066}
!785 = !{i64 11070}
!786 = !{i64 11058}
!787 = !{i64 11093}
!788 = !{i64 11104}
!789 = !{i64 11107}
!790 = !{i64 11114}
!791 = !{i64 11115}
!792 = !{i64 11125}
!793 = !{i64 11141}
!794 = !{i64 11152}
!795 = !{i64 11156}
!796 = !{i64 11168}
!797 = !{i64 11171}
!798 = !{i64 11176}
!799 = !{i64 11182}
!800 = !{i64 11189}
!801 = !{i64 11191}
!802 = !{i64 11197}
!803 = !{i64 11198}
!804 = !{i64 11208}
!805 = !{i64 11218}
!806 = !{i64 11222}
!807 = !{i64 11252}
!808 = !{i64 11255}
!809 = !{i64 11256}
!810 = !{i64 11270}
!811 = !{i64 11281}
!812 = !{i64 11295}
!813 = !{i64 11301}
!814 = !{i64 11302}
!815 = !{i64 11310}
!816 = !{i64 11360}
!817 = !{i64 11424}
!818 = !{i64 11436}
!819 = !{i64 11442}
!820 = !{i64 11443}
!821 = !{i64 11470}
!822 = !{i64 11482}
!823 = !{i64 11488}
!824 = !{i64 11489}
!825 = !{i64 11497}
!826 = !{i64 11545}
!827 = !{i64 11557}
!828 = !{i64 11563}
!829 = !{i64 11564}
!830 = !{i64 11572}
!831 = !{i64 11602}
!832 = !{i64 11651}
!833 = !{i64 11663}
!834 = !{i64 11669}
!835 = !{i64 11670}
!836 = !{i64 11690}
!837 = !{i64 11702}
!838 = !{i64 11708}
!839 = !{i64 11709}
!840 = !{i64 11717}
!841 = !{i64 11727}
!842 = !{i64 11756}
!843 = !{i64 11768}
!844 = !{i64 11774}
!845 = !{i64 11775}
!846 = !{i64 11783}
!847 = !{i64 11813}
!848 = !{i64 11825}
!849 = !{i64 11831}
!850 = !{i64 11832}
!851 = !{i64 11840}
!852 = !{i64 11860}
!853 = !{i64 11872}
!854 = !{i64 11878}
!855 = !{i64 11879}
!856 = !{i64 11891}
!857 = !{i64 11898}
!858 = !{i64 11900}
!859 = !{i64 11909}
!860 = !{i64 11920}
!861 = !{i64 11930}
!862 = !{i64 11935}
!863 = !{i64 11940}
!864 = !{i64 11945}
!865 = !{i64 11956}
!866 = !{i64 11960}
!867 = !{i64 11968}
!868 = !{i64 11985}
!869 = !{i64 11988}
!870 = !{i64 12005}
!871 = !{i64 12019}
!872 = !{i64 12030}
!873 = !{i64 12032}
!874 = !{i64 12036}
!875 = !{i64 12047}
!876 = !{i64 12053}
!877 = !{i64 12056}
!878 = !{i64 12082}
!879 = !{i64 12088}
!880 = !{i64 12091}
!881 = !{i64 12097}
!882 = !{i64 12116}
!883 = !{i64 12127}
!884 = !{i64 12136}
