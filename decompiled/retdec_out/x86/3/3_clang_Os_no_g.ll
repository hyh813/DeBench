source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

@global_var_44c = constant [14 x i8] c"rTMCloneTable\00"
@global_var_1865 = local_unnamed_addr constant i32 80150528
@global_var_1e8 = local_unnamed_addr global i32 0
@global_var_4088 = local_unnamed_addr constant i32 36
@global_var_4051 = local_unnamed_addr constant i32 672027680
@global_var_3fe9 = constant i32 268435456
@global_var_3ecf = local_unnamed_addr constant i32 239145998
@global_var_3e97 = constant i32 239148046
@global_var_3e47 = local_unnamed_addr constant i32 -486334450
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

define i32 @function_1040(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_1040:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i32 @function_1050(i8* %format, ...) local_unnamed_addr {
dec_label_pc_1050:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define i32* @function_1060(i32* %dest, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1060:
  %0 = call i32* @memmove(i32* %dest, i32* %src, i32 %n), !insn.addr !6
  ret i32* %0, !insn.addr !6
}

define void @function_1070(i32* %ptr) local_unnamed_addr {
dec_label_pc_1070:
  call void @free(i32* %ptr), !insn.addr !7
  ret void, !insn.addr !7
}

define i32* @function_1080(i32* %dest, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1080:
  %0 = call i32* @memcpy(i32* %dest, i32* %src, i32 %n), !insn.addr !8
  ret i32* %0, !insn.addr !8
}

define i32 @function_1090(i32* %s1, i32* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_1090:
  %0 = call i32 @memcmp(i32* %s1, i32* %s2, i32 %n), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define void @function_10a0(i8* %s) local_unnamed_addr {
dec_label_pc_10a0:
  call void @perror(i8* %s), !insn.addr !10
  ret void, !insn.addr !10
}

define i32 @function_10b0(i32 %pid, i32* %stat_loc, i32 %options) local_unnamed_addr {
dec_label_pc_10b0:
  %0 = call i32 @waitpid(i32 %pid, i32* %stat_loc, i32 %options), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i32* @function_10c0(i32* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_10c0:
  %0 = call i32* @realloc(i32* %ptr, i32 %size), !insn.addr !12
  ret i32* %0, !insn.addr !12
}

define i32* @function_10d0(i32 %size) local_unnamed_addr {
dec_label_pc_10d0:
  %0 = call i32* @malloc(i32 %size), !insn.addr !13
  ret i32* %0, !insn.addr !13
}

define i32 @function_10e0(i8* %s) local_unnamed_addr {
dec_label_pc_10e0:
  %0 = call i32 @puts(i8* %s), !insn.addr !14
  ret i32 %0, !insn.addr !14
}

define void @function_10f0(i32 %status) local_unnamed_addr {
dec_label_pc_10f0:
  call void @exit(i32 %status), !insn.addr !15
  ret void, !insn.addr !15
}

define i32* @function_1100(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_1100:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !16
  ret i32* %0, !insn.addr !16
}

define i32 @function_1110() local_unnamed_addr {
dec_label_pc_1110:
  %0 = call i32 @fork(), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i32* @function_1120(i32 %nmemb, i32 %size) local_unnamed_addr {
dec_label_pc_1120:
  %0 = call i32* @calloc(i32 %nmemb, i32 %size), !insn.addr !18
  ret i32* %0, !insn.addr !18
}

define i32 @function_1130() local_unnamed_addr {
dec_label_pc_1130:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !19
}

define i32 @_start(i32 %arg1) local_unnamed_addr {
dec_label_pc_1140:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_4 = alloca i32, align 4
  %3 = call i32 @function_116c(i32 %2), !insn.addr !20
  %4 = bitcast i32* %stack_var_4 to i8**
  %5 = add i32 %1, 20132, !insn.addr !21
  %6 = inttoptr i32 %5 to i32*, !insn.addr !21
  %7 = load i32, i32* %6, align 4, !insn.addr !21
  %8 = call i32 @__libc_start_main(i32 %7, i32 %arg1, i8** nonnull %4, void ()* null, void ()* null, void ()* bitcast (i32* @0 to void ()*)), !insn.addr !22
  %9 = call i32 @__asm_hlt(), !insn.addr !23
  unreachable, !insn.addr !23

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @function_116c(i32 %arg1) local_unnamed_addr {
dec_label_pc_116c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !24
}

define i32 @__x86.get_pc_thunk.bx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1170:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !25
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1180:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !26
  %3 = add i32 %1, 20183, !insn.addr !27
  ret i32 %3, !insn.addr !28
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_11c0:
  %0 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !29
  ret i32 0, !insn.addr !30
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1210:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !31
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.di(i32 %1), !insn.addr !32
  %3 = add i32 %1, 20031, !insn.addr !33
  %4 = inttoptr i32 %3 to i8*, !insn.addr !33
  %5 = load i8, i8* %4, align 1, !insn.addr !33
  %6 = icmp eq i8 %5, 0, !insn.addr !33
  %7 = icmp eq i1 %6, false, !insn.addr !34
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !34
  br i1 %7, label %dec_label_pc_1292, label %dec_label_pc_1231, !insn.addr !34

dec_label_pc_1231:                                ; preds = %dec_label_pc_1210
  %8 = add i32 %1, 19923, !insn.addr !35
  %9 = inttoptr i32 %8 to i32*, !insn.addr !35
  %10 = load i32, i32* %9, align 4, !insn.addr !35
  %11 = icmp eq i32 %10, 0, !insn.addr !36
  br i1 %11, label %dec_label_pc_124e, label %dec_label_pc_123b, !insn.addr !37

dec_label_pc_123b:                                ; preds = %dec_label_pc_1231
  %12 = call i32 @function_1130(), !insn.addr !38
  br label %dec_label_pc_124e, !insn.addr !39

dec_label_pc_124e:                                ; preds = %dec_label_pc_123b, %dec_label_pc_1231
  %13 = call i32 @deregister_tm_clones(), !insn.addr !40
  store i8 1, i8* %4, align 1, !insn.addr !41
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !41
  br label %dec_label_pc_1292, !insn.addr !41

dec_label_pc_1292:                                ; preds = %dec_label_pc_124e, %dec_label_pc_1210
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !42

; uselistorder directives
  uselistorder i32 %1, { 2, 0, 1 }
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_12a0:
  %0 = call i32 @register_tm_clones(), !insn.addr !43
  ret i32 %0, !insn.addr !43
}

define i32 @__x86.get_pc_thunk.dx(i32 %arg1) local_unnamed_addr {
dec_label_pc_12a9:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !44
}

define i32 @__x86.get_pc_thunk.di(i32 %arg1) local_unnamed_addr {
dec_label_pc_12ad:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !45
}

define i32 @local_vars(i32 %arg1) local_unnamed_addr {
dec_label_pc_12b4:
  %0 = mul i32 %arg1, 2, !insn.addr !46
  %1 = add i32 %0, 10, !insn.addr !47
  ret i32 %1, !insn.addr !48
}

define i32 @local_array(i32 %arg1) local_unnamed_addr {
dec_label_pc_12be:
  %0 = alloca i32
  %edx.0.reg2mem = alloca i32, !insn.addr !49
  %ecx.0.reg2mem = alloca i32, !insn.addr !49
  %1 = load i32, i32* %0
  %stack_var_-40 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-40 to i32, !insn.addr !49
  store i32 0, i32* %ecx.0.reg2mem, !insn.addr !50
  store i32 0, i32* %edx.0.reg2mem, !insn.addr !50
  br label %dec_label_pc_12c9, !insn.addr !50

dec_label_pc_12c9:                                ; preds = %dec_label_pc_12c9, %dec_label_pc_12be
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %3 = mul i32 %edx.0.reload, 4, !insn.addr !51
  %4 = add i32 %3, %2, !insn.addr !51
  %5 = inttoptr i32 %4 to i32*, !insn.addr !51
  store i32 %ecx.0.reload, i32* %5, align 4, !insn.addr !51
  %6 = add nuw nsw i32 %edx.0.reload, 1, !insn.addr !52
  %7 = add i32 %ecx.0.reload, %arg1, !insn.addr !53
  %exitcond = icmp eq i32 %6, 10
  store i32 %7, i32* %ecx.0.reg2mem, !insn.addr !54
  store i32 %6, i32* %edx.0.reg2mem, !insn.addr !54
  br i1 %exitcond, label %dec_label_pc_12d4, label %dec_label_pc_12c9, !insn.addr !54

dec_label_pc_12d4:                                ; preds = %dec_label_pc_12c9
  ret i32 %1, !insn.addr !55

; uselistorder directives
  uselistorder i32 %ecx.0.reload, { 1, 0 }
  uselistorder i32* %ecx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
}

define i32 @local_struct(i32 %arg1) local_unnamed_addr {
dec_label_pc_12dc:
  %0 = mul i32 %arg1, 3, !insn.addr !56
  ret i32 %0, !insn.addr !57
}

define i32 @address_of_local(i32 %arg1) local_unnamed_addr {
dec_label_pc_12e4:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !58
  store i32 42, i32* %0, align 4, !insn.addr !58
  ret i32 42, !insn.addr !59
}

define i32 @address_of_array(i32 %arg1) local_unnamed_addr {
dec_label_pc_12f4:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !60
  %1 = load i32, i32* %0, align 4, !insn.addr !60
  %2 = mul i32 %1, 2, !insn.addr !61
  ret i32 %2, !insn.addr !62
}

define i32 @large_stack_frame() local_unnamed_addr {
dec_label_pc_12fd:
  %0 = alloca i8
  %eax.0.reg2mem = alloca i32, !insn.addr !63
  %1 = load i8, i8* %0
  %stack_var_-2048 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-2048 to i32, !insn.addr !63
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !64
  br label %dec_label_pc_1305, !insn.addr !64

dec_label_pc_1305:                                ; preds = %dec_label_pc_1305, %dec_label_pc_12fd
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %3 = trunc i32 %eax.0.reload to i8, !insn.addr !65
  %4 = add i32 %eax.0.reload, %2, !insn.addr !65
  %5 = inttoptr i32 %4 to i8*, !insn.addr !65
  store i8 %3, i8* %5, align 1, !insn.addr !65
  %6 = add i32 %eax.0.reload, 1, !insn.addr !66
  %7 = icmp eq i32 %eax.0.reload, 2047, !insn.addr !67
  %8 = icmp eq i1 %7, false, !insn.addr !68
  store i32 %6, i32* %eax.0.reg2mem, !insn.addr !68
  br i1 %8, label %dec_label_pc_1305, label %dec_label_pc_1310, !insn.addr !68

dec_label_pc_1310:                                ; preds = %dec_label_pc_1305
  %9 = sext i8 %1 to i32, !insn.addr !69
  ret i32 %9, !insn.addr !70

; uselistorder directives
  uselistorder i32 %eax.0.reload, { 1, 2, 3, 0 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
}

define i32 @vla_stack(i32 %arg1) local_unnamed_addr {
dec_label_pc_131f:
  %storemerge.reg2mem = alloca i32, !insn.addr !71
  %edi.0.reg2mem = alloca i32, !insn.addr !71
  %esi.0.reg2mem = alloca i32, !insn.addr !71
  %stack_var_-12 = alloca i32, align 4
  %0 = add i32 %arg1, -1001, !insn.addr !72
  %1 = icmp ult i32 %0, -1000, !insn.addr !73
  %2 = icmp eq i1 %1, false, !insn.addr !74
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !74
  br i1 %2, label %dec_label_pc_133a, label %dec_label_pc_1368, !insn.addr !74

dec_label_pc_133a:                                ; preds = %dec_label_pc_131f
  %3 = ptrtoint i32* %stack_var_-12 to i32, !insn.addr !75
  %4 = mul i32 %arg1, 4, !insn.addr !76
  %5 = add i32 %4, 15, !insn.addr !76
  %6 = and i32 %5, -16, !insn.addr !77
  %7 = sub i32 %3, %6, !insn.addr !78
  store i32 0, i32* %esi.0.reg2mem, !insn.addr !79
  store i32 %arg1, i32* %edi.0.reg2mem, !insn.addr !79
  br label %dec_label_pc_1350, !insn.addr !79

dec_label_pc_1350:                                ; preds = %dec_label_pc_1350, %dec_label_pc_133a
  %edi.0.reload = load i32, i32* %edi.0.reg2mem
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %8 = mul i32 %esi.0.reload, 2, !insn.addr !80
  %9 = add i32 %8, %7, !insn.addr !80
  %10 = inttoptr i32 %9 to i32*, !insn.addr !80
  store i32 %esi.0.reload, i32* %10, align 4, !insn.addr !80
  %11 = add i32 %esi.0.reload, 2, !insn.addr !81
  %12 = add i32 %edi.0.reload, -1, !insn.addr !82
  %13 = icmp eq i32 %12, 0, !insn.addr !82
  %14 = icmp eq i1 %13, false, !insn.addr !83
  store i32 %11, i32* %esi.0.reg2mem, !insn.addr !83
  store i32 %12, i32* %edi.0.reg2mem, !insn.addr !83
  br i1 %14, label %dec_label_pc_1350, label %dec_label_pc_1359, !insn.addr !83

dec_label_pc_1359:                                ; preds = %dec_label_pc_1350
  %15 = icmp slt i32 %arg1, 0
  %16 = zext i1 %15 to i32, !insn.addr !84
  %17 = add i32 %16, %arg1, !insn.addr !85
  %18 = mul i32 %17, 2, !insn.addr !86
  %19 = and i32 %18, -4, !insn.addr !87
  %20 = add i32 %7, %19, !insn.addr !87
  %21 = inttoptr i32 %20 to i32*, !insn.addr !87
  %22 = load i32, i32* %21, align 4, !insn.addr !87
  store i32 %22, i32* %storemerge.reg2mem, !insn.addr !88
  br label %dec_label_pc_1368, !insn.addr !88

dec_label_pc_1368:                                ; preds = %dec_label_pc_131f, %dec_label_pc_1359
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !89

; uselistorder directives
  uselistorder i32 %esi.0.reload, { 1, 0, 2 }
  uselistorder i32* %esi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg1, { 3, 2, 0, 1, 4 }
  uselistorder label %dec_label_pc_1368, { 1, 0 }
}

define i32 @alloca_usage(i32 %arg1) local_unnamed_addr {
dec_label_pc_136f:
  %storemerge.reg2mem = alloca i32, !insn.addr !90
  %esi.0.reg2mem = alloca i32, !insn.addr !90
  %edx.0.reg2mem = alloca i32, !insn.addr !90
  %stack_var_-12 = alloca i32, align 4
  %0 = icmp slt i32 %arg1, 1
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !91
  br i1 %0, label %dec_label_pc_13ac, label %dec_label_pc_137b, !insn.addr !91

dec_label_pc_137b:                                ; preds = %dec_label_pc_136f
  %1 = ptrtoint i32* %stack_var_-12 to i32, !insn.addr !92
  %2 = mul i32 %arg1, 4, !insn.addr !93
  %3 = add i32 %2, 15, !insn.addr !93
  %4 = and i32 %3, -16, !insn.addr !94
  %5 = sub i32 %1, %4, !insn.addr !95
  store i32 0, i32* %edx.0.reg2mem, !insn.addr !96
  store i32 0, i32* %esi.0.reg2mem, !insn.addr !96
  br label %dec_label_pc_138f, !insn.addr !96

dec_label_pc_138f:                                ; preds = %dec_label_pc_138f, %dec_label_pc_137b
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %6 = mul i32 %esi.0.reload, 4, !insn.addr !97
  %7 = add i32 %6, %5, !insn.addr !97
  %8 = inttoptr i32 %7 to i32*, !insn.addr !97
  store i32 %edx.0.reload, i32* %8, align 4, !insn.addr !97
  %9 = add i32 %esi.0.reload, 1, !insn.addr !98
  %10 = add i32 %edx.0.reload, 3, !insn.addr !99
  %11 = icmp eq i32 %9, %arg1, !insn.addr !100
  %12 = icmp eq i1 %11, false, !insn.addr !101
  store i32 %10, i32* %edx.0.reg2mem, !insn.addr !101
  store i32 %9, i32* %esi.0.reg2mem, !insn.addr !101
  br i1 %12, label %dec_label_pc_138f, label %dec_label_pc_139a, !insn.addr !101

dec_label_pc_139a:                                ; preds = %dec_label_pc_138f
  %13 = icmp slt i32 %arg1, 0
  %14 = zext i1 %13 to i32, !insn.addr !102
  %15 = add i32 %14, %arg1, !insn.addr !103
  %16 = mul i32 %15, 2, !insn.addr !104
  %17 = and i32 %16, -4, !insn.addr !105
  %18 = add i32 %5, %17, !insn.addr !105
  %19 = inttoptr i32 %18 to i32*, !insn.addr !105
  %20 = load i32, i32* %19, align 4, !insn.addr !105
  store i32 %20, i32* %storemerge.reg2mem, !insn.addr !106
  br label %dec_label_pc_13ac, !insn.addr !106

dec_label_pc_13ac:                                ; preds = %dec_label_pc_136f, %dec_label_pc_139a
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !107

; uselistorder directives
  uselistorder i32 %edx.0.reload, { 1, 0 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg1, { 2, 1, 3, 0, 4 }
  uselistorder label %dec_label_pc_13ac, { 1, 0 }
}

define i32 @stack_alias() local_unnamed_addr {
dec_label_pc_13b2:
  ret i32 20, !insn.addr !108
}

define i32 @test_stack_memory(i32 %arg1) local_unnamed_addr {
dec_label_pc_13b8:
  %0 = alloca i32
  %esi.0.reg2mem = alloca i32, !insn.addr !109
  %eax.2.reg2mem = alloca i32, !insn.addr !109
  %ecx.0.reg2mem = alloca i32, !insn.addr !109
  %eax.1.reg2mem = alloca i32, !insn.addr !109
  %eax.0.reg2mem = alloca i32, !insn.addr !109
  %stack_var_-2056 = alloca i32, align 4
  %stack_var_-2072 = alloca i8*, align 4
  %1 = load i32, i32* %0
  %2 = ptrtoint i8** %stack_var_-2072 to i32, !insn.addr !110
  %3 = add i32 %1, 8700, !insn.addr !111
  %4 = inttoptr i32 %3 to i8*, !insn.addr !112
  store i8* %4, i8** %stack_var_-2072, align 4, !insn.addr !112
  %5 = call i32 @puts(i8* %4), !insn.addr !113
  %6 = add i32 %1, 7235, !insn.addr !114
  %7 = inttoptr i32 %6 to i8*, !insn.addr !115
  store i8* %7, i8** %stack_var_-2072, align 4, !insn.addr !115
  %8 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !116
  %9 = add i32 %2, 16, !insn.addr !117
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !118
  br label %dec_label_pc_13f2, !insn.addr !118

dec_label_pc_13f2:                                ; preds = %dec_label_pc_13f2, %dec_label_pc_13b8
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %10 = mul i32 %eax.0.reload, 2, !insn.addr !117
  %11 = add i32 %10, %9, !insn.addr !117
  %12 = inttoptr i32 %11 to i32*, !insn.addr !117
  store i32 %eax.0.reload, i32* %12, align 4, !insn.addr !117
  %13 = add nuw nsw i32 %eax.0.reload, 2, !insn.addr !119
  %14 = icmp eq i32 %eax.0.reload, 18, !insn.addr !120
  %15 = icmp eq i1 %14, false, !insn.addr !121
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !121
  br i1 %15, label %dec_label_pc_13f2, label %dec_label_pc_13fe, !insn.addr !121

dec_label_pc_13fe:                                ; preds = %dec_label_pc_13f2
  %16 = add i32 %1, 7263, !insn.addr !122
  %17 = inttoptr i32 %16 to i8*, !insn.addr !123
  store i8* %17, i8** %stack_var_-2072, align 4, !insn.addr !123
  %18 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !124
  %19 = add i32 %1, 7292, !insn.addr !125
  %20 = inttoptr i32 %19 to i8*, !insn.addr !126
  store i8* %20, i8** %stack_var_-2072, align 4, !insn.addr !126
  %21 = call i32 (i8*, ...) @printf(i8* %20), !insn.addr !127
  %22 = add i32 %1, 7322, !insn.addr !128
  %23 = inttoptr i32 %22 to i8*, !insn.addr !129
  store i8* %23, i8** %stack_var_-2072, align 4, !insn.addr !129
  %24 = call i32 (i8*, ...) @printf(i8* %23), !insn.addr !130
  %25 = add i32 %1, 7356, !insn.addr !131
  %26 = inttoptr i32 %25 to i8*, !insn.addr !132
  store i8* %26, i8** %stack_var_-2072, align 4, !insn.addr !132
  %27 = call i32 (i8*, ...) @printf(i8* %26), !insn.addr !133
  store i32 0, i32* %eax.1.reg2mem, !insn.addr !134
  br label %dec_label_pc_1458, !insn.addr !134

dec_label_pc_1458:                                ; preds = %dec_label_pc_1458, %dec_label_pc_13fe
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  %28 = trunc i32 %eax.1.reload to i8, !insn.addr !135
  %29 = add i32 %eax.1.reload, %9, !insn.addr !135
  %30 = inttoptr i32 %29 to i8*, !insn.addr !135
  store i8 %28, i8* %30, align 1, !insn.addr !135
  %31 = add i32 %eax.1.reload, 1, !insn.addr !136
  %32 = icmp eq i32 %eax.1.reload, 2047, !insn.addr !137
  %33 = icmp eq i1 %32, false, !insn.addr !138
  store i32 %31, i32* %eax.1.reg2mem, !insn.addr !138
  br i1 %33, label %dec_label_pc_1458, label %dec_label_pc_1464, !insn.addr !138

dec_label_pc_1464:                                ; preds = %dec_label_pc_1458
  %34 = add i32 %1, 7390, !insn.addr !139
  %35 = inttoptr i32 %34 to i8*, !insn.addr !140
  store i8* %35, i8** %stack_var_-2072, align 4, !insn.addr !140
  %36 = call i32 (i8*, ...) @printf(i8* %35), !insn.addr !141
  store i32 0, i32* %ecx.0.reg2mem, !insn.addr !142
  br label %dec_label_pc_1482, !insn.addr !142

dec_label_pc_1482:                                ; preds = %dec_label_pc_1482, %dec_label_pc_1464
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %37 = mul i32 %ecx.0.reload, 2, !insn.addr !143
  %38 = add i32 %37, %9, !insn.addr !143
  %39 = inttoptr i32 %38 to i32*, !insn.addr !143
  store i32 %ecx.0.reload, i32* %39, align 4, !insn.addr !143
  %40 = add nuw nsw i32 %ecx.0.reload, 2, !insn.addr !144
  %41 = icmp eq i32 %ecx.0.reload, 18, !insn.addr !145
  %42 = icmp eq i1 %41, false, !insn.addr !146
  store i32 %40, i32* %ecx.0.reg2mem, !insn.addr !146
  br i1 %42, label %dec_label_pc_1482, label %dec_label_pc_148e, !insn.addr !146

dec_label_pc_148e:                                ; preds = %dec_label_pc_1482
  %43 = ptrtoint i32* %stack_var_-2056 to i32, !insn.addr !147
  %44 = add i32 %1, 7425, !insn.addr !148
  %45 = inttoptr i32 %44 to i8*, !insn.addr !149
  store i8* %45, i8** %stack_var_-2072, align 4, !insn.addr !149
  %46 = call i32 (i8*, ...) @printf(i8* %45), !insn.addr !150
  store i32 0, i32* %eax.2.reg2mem, !insn.addr !151
  store i32 %43, i32* %esi.0.reg2mem, !insn.addr !151
  br label %dec_label_pc_14ab, !insn.addr !151

dec_label_pc_14ab:                                ; preds = %dec_label_pc_14ab, %dec_label_pc_148e
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %eax.2.reload = load i32, i32* %eax.2.reg2mem
  %47 = inttoptr i32 %esi.0.reload to i32*, !insn.addr !152
  store i32 %eax.2.reload, i32* %47, align 4, !insn.addr !152
  %48 = add nuw nsw i32 %eax.2.reload, 3, !insn.addr !153
  %49 = add i32 %esi.0.reload, 4, !insn.addr !154
  %50 = icmp eq i32 %eax.2.reload, 27, !insn.addr !155
  %51 = icmp eq i1 %50, false, !insn.addr !156
  store i32 %48, i32* %eax.2.reg2mem, !insn.addr !156
  store i32 %49, i32* %esi.0.reg2mem, !insn.addr !156
  br i1 %51, label %dec_label_pc_14ab, label %dec_label_pc_14b8, !insn.addr !156

dec_label_pc_14b8:                                ; preds = %dec_label_pc_14ab
  %52 = add i32 %1, 7452, !insn.addr !157
  %53 = inttoptr i32 %52 to i8*, !insn.addr !158
  store i8* %53, i8** %stack_var_-2072, align 4, !insn.addr !158
  %54 = call i32 (i8*, ...) @printf(i8* %53), !insn.addr !159
  %55 = add i32 %1, 7482, !insn.addr !160
  %56 = inttoptr i32 %55 to i8*, !insn.addr !161
  store i8* %56, i8** %stack_var_-2072, align 4, !insn.addr !161
  %57 = call i32 (i8*, ...) @printf(i8* %56), !insn.addr !162
  ret i32 %57, !insn.addr !163

; uselistorder directives
  uselistorder i32 %eax.2.reload, { 1, 2, 0 }
  uselistorder i32 %esi.0.reload, { 1, 0 }
  uselistorder i32 %ecx.0.reload, { 1, 2, 0, 3 }
  uselistorder i32 %eax.1.reload, { 1, 2, 3, 0 }
  uselistorder i32 %eax.0.reload, { 1, 2, 0, 3 }
  uselistorder i32 %1, { 9, 8, 7, 6, 5, 4, 3, 2, 0, 1 }
  uselistorder i8** %stack_var_-2072, { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ecx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.0.reg2mem, { 1, 0, 2 }
}

define i32 @heap_basic(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_14ed:
  %esi.0.reg2mem = alloca i32, !insn.addr !164
  %edx.0.reg2mem = alloca i32, !insn.addr !164
  %ecx.0.reg2mem = alloca i32, !insn.addr !164
  %0 = mul i32 %arg2, 4, !insn.addr !165
  %1 = call i32* @malloc(i32 %0), !insn.addr !166
  %2 = icmp eq i32* %1, null, !insn.addr !167
  store i32 -1, i32* %esi.0.reg2mem, !insn.addr !168
  br i1 %2, label %dec_label_pc_153e, label %dec_label_pc_1513, !insn.addr !168

dec_label_pc_1513:                                ; preds = %dec_label_pc_14ed
  %3 = ptrtoint i32* %1 to i32, !insn.addr !166
  %4 = icmp slt i32 %arg2, 1
  store i32 0, i32* %ecx.0.reg2mem, !insn.addr !169
  store i32 %arg2, i32* %edx.0.reg2mem, !insn.addr !169
  br i1 %4, label %dec_label_pc_1524, label %dec_label_pc_151b, !insn.addr !169

dec_label_pc_151b:                                ; preds = %dec_label_pc_1513, %dec_label_pc_151b
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %5 = mul i32 %ecx.0.reload, 2, !insn.addr !170
  %6 = add i32 %5, %3, !insn.addr !170
  %7 = inttoptr i32 %6 to i32*, !insn.addr !170
  store i32 %ecx.0.reload, i32* %7, align 4, !insn.addr !170
  %8 = add i32 %ecx.0.reload, 2, !insn.addr !171
  %9 = add i32 %edx.0.reload, -1, !insn.addr !172
  %10 = icmp eq i32 %9, 0, !insn.addr !172
  %11 = icmp eq i1 %10, false, !insn.addr !173
  store i32 %8, i32* %ecx.0.reg2mem, !insn.addr !173
  store i32 %9, i32* %edx.0.reg2mem, !insn.addr !173
  br i1 %11, label %dec_label_pc_151b, label %dec_label_pc_1524, !insn.addr !173

dec_label_pc_1524:                                ; preds = %dec_label_pc_151b, %dec_label_pc_1513
  %12 = icmp slt i32 %arg2, 0
  %13 = zext i1 %12 to i32, !insn.addr !174
  %14 = add i32 %13, %arg2, !insn.addr !175
  %15 = mul i32 %14, 2, !insn.addr !176
  %16 = and i32 %15, -4, !insn.addr !177
  %17 = add i32 %16, %3, !insn.addr !177
  %18 = inttoptr i32 %17 to i32*, !insn.addr !177
  %19 = load i32, i32* %18, align 4, !insn.addr !177
  call void @free(i32* nonnull %1), !insn.addr !178
  store i32 %19, i32* %esi.0.reg2mem, !insn.addr !179
  br label %dec_label_pc_153e, !insn.addr !179

dec_label_pc_153e:                                ; preds = %dec_label_pc_14ed, %dec_label_pc_1524
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  ret i32 %esi.0.reload, !insn.addr !180

; uselistorder directives
  uselistorder i32 %ecx.0.reload, { 1, 0, 2 }
  uselistorder i32* %1, { 0, 2, 1 }
  uselistorder i32* %ecx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %esi.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg2, { 3, 2, 0, 4, 1 }
  uselistorder label %dec_label_pc_153e, { 1, 0 }
  uselistorder label %dec_label_pc_151b, { 1, 0 }
}

define i32 @heap_calloc(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1546:
  %esi.2.reg2mem = alloca i32, !insn.addr !181
  %esi.1.reg2mem = alloca i32, !insn.addr !181
  %esi.0.reg2mem = alloca i32, !insn.addr !181
  %ecx.0.reg2mem = alloca i32, !insn.addr !181
  %0 = call i32* @calloc(i32 %arg2, i32 4), !insn.addr !182
  %1 = icmp eq i32* %0, null, !insn.addr !183
  store i32 -1, i32* %esi.2.reg2mem, !insn.addr !184
  br i1 %1, label %dec_label_pc_1591, label %dec_label_pc_1570, !insn.addr !184

dec_label_pc_1570:                                ; preds = %dec_label_pc_1546
  %2 = ptrtoint i32* %0 to i32, !insn.addr !182
  %3 = icmp slt i32 %arg2, 2, !insn.addr !185
  store i32 1, i32* %ecx.0.reg2mem, !insn.addr !185
  store i32 0, i32* %esi.0.reg2mem, !insn.addr !185
  store i32 0, i32* %esi.1.reg2mem, !insn.addr !185
  br i1 %3, label %dec_label_pc_1584, label %dec_label_pc_157c, !insn.addr !185

dec_label_pc_157c:                                ; preds = %dec_label_pc_1570, %dec_label_pc_157c
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %4 = mul i32 %ecx.0.reload, 4, !insn.addr !186
  %5 = add i32 %4, %2, !insn.addr !186
  %6 = inttoptr i32 %5 to i32*, !insn.addr !186
  %7 = load i32, i32* %6, align 4, !insn.addr !186
  %8 = add i32 %7, %esi.0.reload, !insn.addr !186
  %9 = add i32 %ecx.0.reload, 1, !insn.addr !187
  %10 = icmp eq i32 %9, %arg2, !insn.addr !188
  %11 = icmp eq i1 %10, false, !insn.addr !189
  store i32 %9, i32* %ecx.0.reg2mem, !insn.addr !189
  store i32 %8, i32* %esi.0.reg2mem, !insn.addr !189
  store i32 %8, i32* %esi.1.reg2mem, !insn.addr !189
  br i1 %11, label %dec_label_pc_157c, label %dec_label_pc_1584, !insn.addr !189

dec_label_pc_1584:                                ; preds = %dec_label_pc_157c, %dec_label_pc_1570
  %esi.1.reload = load i32, i32* %esi.1.reg2mem
  call void @free(i32* nonnull %0), !insn.addr !190
  store i32 %esi.1.reload, i32* %esi.2.reg2mem, !insn.addr !191
  br label %dec_label_pc_1591, !insn.addr !191

dec_label_pc_1591:                                ; preds = %dec_label_pc_1546, %dec_label_pc_1584
  %esi.2.reload = load i32, i32* %esi.2.reg2mem
  ret i32 %esi.2.reload, !insn.addr !192

; uselistorder directives
  uselistorder i32* %0, { 0, 2, 1 }
  uselistorder i32* %ecx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %esi.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %esi.2.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1591, { 1, 0 }
  uselistorder label %dec_label_pc_157c, { 1, 0 }
}

define i32 @heap_realloc(i32 %arg1) local_unnamed_addr {
dec_label_pc_159a:
  %edi.2.reg2mem = alloca i32, !insn.addr !193
  %edi.1.reg2mem = alloca i32, !insn.addr !193
  %esi.0.reg2mem = alloca i32, !insn.addr !193
  %edx.0.reg2mem = alloca i32, !insn.addr !193
  %ecx.0.reg2mem = alloca i32, !insn.addr !193
  %eax.0.reg2mem = alloca i32, !insn.addr !193
  %0 = call i32* @malloc(i32 20), !insn.addr !194
  %1 = icmp eq i32* %0, null, !insn.addr !195
  store i32 -1, i32* %edi.2.reg2mem, !insn.addr !196
  br i1 %1, label %dec_label_pc_161d, label %dec_label_pc_15c2.preheader, !insn.addr !196

dec_label_pc_15c2.preheader:                      ; preds = %dec_label_pc_159a
  %2 = ptrtoint i32* %0 to i32, !insn.addr !194
  %3 = add i32 %2, -4, !insn.addr !197
  store i32 1, i32* %eax.0.reg2mem
  br label %dec_label_pc_15c2

dec_label_pc_15c2:                                ; preds = %dec_label_pc_15c2, %dec_label_pc_15c2.preheader
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %4 = mul i32 %eax.0.reload, 4, !insn.addr !197
  %5 = add i32 %3, %4, !insn.addr !197
  %6 = inttoptr i32 %5 to i32*, !insn.addr !197
  store i32 %eax.0.reload, i32* %6, align 4, !insn.addr !197
  %7 = add nuw nsw i32 %eax.0.reload, 1, !insn.addr !198
  %exitcond = icmp eq i32 %7, 6
  store i32 %7, i32* %eax.0.reg2mem, !insn.addr !199
  br i1 %exitcond, label %dec_label_pc_15cc, label %dec_label_pc_15c2, !insn.addr !199

dec_label_pc_15cc:                                ; preds = %dec_label_pc_15c2
  %8 = add i32 %2, 8, !insn.addr !200
  %9 = inttoptr i32 %8 to i32*, !insn.addr !200
  %10 = load i32, i32* %9, align 4, !insn.addr !200
  %11 = call i32* @realloc(i32* nonnull %0, i32 40), !insn.addr !201
  %12 = icmp eq i32* %11, null, !insn.addr !202
  store i32 %2, i32* %esi.0.reg2mem, !insn.addr !203
  store i32 -2, i32* %edi.1.reg2mem, !insn.addr !203
  br i1 %12, label %dec_label_pc_1615, label %dec_label_pc_15e3, !insn.addr !203

dec_label_pc_15e3:                                ; preds = %dec_label_pc_15cc
  %13 = ptrtoint i32* %11 to i32, !insn.addr !201
  %14 = add i32 %13, 20, !insn.addr !204
  store i32 %14, i32* %ecx.0.reg2mem, !insn.addr !205
  store i32 50, i32* %edx.0.reg2mem, !insn.addr !205
  br label %dec_label_pc_15ed, !insn.addr !205

dec_label_pc_15ed:                                ; preds = %dec_label_pc_15ed, %dec_label_pc_15e3
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %15 = inttoptr i32 %ecx.0.reload to i32*, !insn.addr !206
  store i32 %edx.0.reload, i32* %15, align 4, !insn.addr !206
  %16 = add nuw nsw i32 %edx.0.reload, 10, !insn.addr !207
  %17 = add i32 %ecx.0.reload, 4, !insn.addr !208
  %18 = icmp eq i32 %edx.0.reload, 90, !insn.addr !209
  %19 = icmp eq i1 %18, false, !insn.addr !210
  store i32 %17, i32* %ecx.0.reg2mem, !insn.addr !210
  store i32 %16, i32* %edx.0.reg2mem, !insn.addr !210
  br i1 %19, label %dec_label_pc_15ed, label %dec_label_pc_15fa, !insn.addr !210

dec_label_pc_15fa:                                ; preds = %dec_label_pc_15ed
  %20 = add i32 %13, 8, !insn.addr !211
  %21 = inttoptr i32 %20 to i32*, !insn.addr !211
  %22 = load i32, i32* %21, align 4, !insn.addr !211
  %23 = icmp eq i32 %22, %10, !insn.addr !211
  %24 = icmp eq i1 %23, false, !insn.addr !212
  store i32 %13, i32* %esi.0.reg2mem, !insn.addr !212
  store i32 -3, i32* %edi.1.reg2mem, !insn.addr !212
  br i1 %24, label %dec_label_pc_1615, label %dec_label_pc_1604, !insn.addr !212

dec_label_pc_1604:                                ; preds = %dec_label_pc_15fa
  %25 = inttoptr i32 %14 to i32*, !insn.addr !213
  %26 = load i32, i32* %25, align 4, !insn.addr !213
  store i32 %13, i32* %esi.0.reg2mem, !insn.addr !213
  store i32 %26, i32* %edi.1.reg2mem, !insn.addr !213
  br label %dec_label_pc_1615, !insn.addr !213

dec_label_pc_1615:                                ; preds = %dec_label_pc_15cc, %dec_label_pc_15fa, %dec_label_pc_1604
  %edi.1.reload = load i32, i32* %edi.1.reg2mem
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %27 = inttoptr i32 %esi.0.reload to i32*, !insn.addr !214
  call void @free(i32* %27), !insn.addr !214
  store i32 %edi.1.reload, i32* %edi.2.reg2mem, !insn.addr !214
  br label %dec_label_pc_161d, !insn.addr !214

dec_label_pc_161d:                                ; preds = %dec_label_pc_159a, %dec_label_pc_1615
  %edi.2.reload = load i32, i32* %edi.2.reg2mem
  ret i32 %edi.2.reload, !insn.addr !215

; uselistorder directives
  uselistorder i32 %ecx.0.reload, { 1, 0 }
  uselistorder i32 %edx.0.reload, { 1, 2, 0 }
  uselistorder i32 %14, { 1, 0 }
  uselistorder i32 %13, { 1, 0, 2, 3 }
  uselistorder i32* %11, { 1, 0 }
  uselistorder i32 %eax.0.reload, { 1, 0, 2 }
  uselistorder i32* %0, { 0, 2, 1 }
  uselistorder i32* %eax.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %ecx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32* %edi.1.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32* %edi.2.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_161d, { 1, 0 }
  uselistorder label %dec_label_pc_1615, { 2, 1, 0 }
}

define i32 @heap_array(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1627:
  %esi.0.reg2mem = alloca i32, !insn.addr !216
  %edx.0.reg2mem = alloca i32, !insn.addr !216
  %ecx.0.reg2mem = alloca i32, !insn.addr !216
  %0 = mul i32 %arg2, 4, !insn.addr !217
  %1 = call i32* @malloc(i32 %0), !insn.addr !218
  %2 = icmp eq i32* %1, null, !insn.addr !219
  store i32 -1, i32* %esi.0.reg2mem, !insn.addr !220
  br i1 %2, label %dec_label_pc_167a, label %dec_label_pc_164d, !insn.addr !220

dec_label_pc_164d:                                ; preds = %dec_label_pc_1627
  %3 = ptrtoint i32* %1 to i32, !insn.addr !218
  %4 = icmp slt i32 %arg2, 1
  store i32 0, i32* %ecx.0.reg2mem, !insn.addr !221
  store i32 0, i32* %edx.0.reg2mem, !insn.addr !221
  br i1 %4, label %dec_label_pc_1660, label %dec_label_pc_1655, !insn.addr !221

dec_label_pc_1655:                                ; preds = %dec_label_pc_164d, %dec_label_pc_1655
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %5 = mul i32 %edx.0.reload, 4, !insn.addr !222
  %6 = add i32 %5, %3, !insn.addr !222
  %7 = inttoptr i32 %6 to i32*, !insn.addr !222
  store i32 %ecx.0.reload, i32* %7, align 4, !insn.addr !222
  %8 = add i32 %edx.0.reload, 1, !insn.addr !223
  %9 = add i32 %ecx.0.reload, 3, !insn.addr !224
  %10 = icmp eq i32 %8, %arg2, !insn.addr !225
  %11 = icmp eq i1 %10, false, !insn.addr !226
  store i32 %9, i32* %ecx.0.reg2mem, !insn.addr !226
  store i32 %8, i32* %edx.0.reg2mem, !insn.addr !226
  br i1 %11, label %dec_label_pc_1655, label %dec_label_pc_1660, !insn.addr !226

dec_label_pc_1660:                                ; preds = %dec_label_pc_1655, %dec_label_pc_164d
  %12 = icmp slt i32 %arg2, 0
  %13 = zext i1 %12 to i32, !insn.addr !227
  %14 = add i32 %13, %arg2, !insn.addr !228
  %15 = mul i32 %14, 2, !insn.addr !229
  %16 = and i32 %15, -4, !insn.addr !230
  %17 = add i32 %16, %3, !insn.addr !230
  %18 = inttoptr i32 %17 to i32*, !insn.addr !230
  %19 = load i32, i32* %18, align 4, !insn.addr !230
  call void @free(i32* nonnull %1), !insn.addr !231
  store i32 %19, i32* %esi.0.reg2mem, !insn.addr !232
  br label %dec_label_pc_167a, !insn.addr !232

dec_label_pc_167a:                                ; preds = %dec_label_pc_1627, %dec_label_pc_1660
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  ret i32 %esi.0.reload, !insn.addr !233

; uselistorder directives
  uselistorder i32 %ecx.0.reload, { 1, 0 }
  uselistorder i32* %1, { 0, 2, 1 }
  uselistorder i32* %ecx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %esi.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg2, { 2, 1, 3, 4, 0 }
  uselistorder label %dec_label_pc_167a, { 1, 0 }
  uselistorder label %dec_label_pc_1655, { 1, 0 }
}

define i32 @heap_struct(i32 %arg1) local_unnamed_addr {
dec_label_pc_1682:
  %0 = mul i32 %arg1, 3, !insn.addr !234
  ret i32 %0, !insn.addr !235
}

define i32 @heap_nested(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_168a:
  %eax.0.reg2mem = alloca i32, !insn.addr !236
  %0 = call i32* @malloc(i32 8), !insn.addr !237
  %1 = ptrtoint i32* %0 to i32, !insn.addr !237
  %2 = inttoptr i32 %arg2 to i32*, !insn.addr !238
  store i32 %1, i32* %2, align 4, !insn.addr !238
  %3 = icmp eq i32* %0, null, !insn.addr !239
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !240
  br i1 %3, label %dec_label_pc_16f0, label %dec_label_pc_16b2, !insn.addr !240

dec_label_pc_16b2:                                ; preds = %dec_label_pc_168a
  store i32 10, i32* %0, align 4, !insn.addr !241
  %4 = call i32* @malloc(i32 8), !insn.addr !242
  %5 = ptrtoint i32* %4 to i32, !insn.addr !242
  %6 = add i32 %1, 4, !insn.addr !243
  %7 = inttoptr i32 %6 to i32*, !insn.addr !243
  store i32 %5, i32* %7, align 4, !insn.addr !243
  %8 = icmp eq i32* %4, null, !insn.addr !244
  br i1 %8, label %dec_label_pc_16e3, label %dec_label_pc_16cd, !insn.addr !245

dec_label_pc_16cd:                                ; preds = %dec_label_pc_16b2
  store i32 20, i32* %4, align 4, !insn.addr !246
  %9 = add i32 %5, 4, !insn.addr !247
  %10 = inttoptr i32 %9 to i32*, !insn.addr !247
  store i32 0, i32* %10, align 4, !insn.addr !247
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !248
  br label %dec_label_pc_16f0, !insn.addr !248

dec_label_pc_16e3:                                ; preds = %dec_label_pc_16b2
  call void @free(i32* nonnull %0), !insn.addr !249
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !250
  br label %dec_label_pc_16f0, !insn.addr !250

dec_label_pc_16f0:                                ; preds = %dec_label_pc_168a, %dec_label_pc_16e3, %dec_label_pc_16cd
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !251

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_16f0, { 1, 2, 0 }
}

define i32 @linked_list_heap(i32 %arg1) local_unnamed_addr {
dec_label_pc_16f7:
  %esi.2.reg2mem = alloca i32, !insn.addr !252
  %edi.5.reg2mem = alloca i32, !insn.addr !252
  %esi.1.reg2mem = alloca i32, !insn.addr !252
  %eax.3.reg2mem = alloca i32, !insn.addr !252
  %eax.2.reg2mem = alloca i32, !insn.addr !252
  %edi.3.reg2mem = alloca i32, !insn.addr !252
  %edi.1.reg2mem = alloca i32, !insn.addr !252
  %edi.0.reg2mem = alloca i32, !insn.addr !252
  %esi.0.reg2mem = alloca i32, !insn.addr !252
  %ebp.0.reg2mem = alloca i32, !insn.addr !252
  %eax.0.in.reg2mem = alloca i32*, !insn.addr !252
  %stack_var_-16.0.reg2mem = alloca i32, !insn.addr !252
  %0 = call i32* @malloc(i32 8), !insn.addr !253
  %1 = icmp eq i32* %0, null, !insn.addr !254
  store i32 0, i32* %stack_var_-16.0.reg2mem, !insn.addr !255
  store i32* %0, i32** %eax.0.in.reg2mem, !insn.addr !255
  store i32 0, i32* %ebp.0.reg2mem, !insn.addr !255
  store i32 0, i32* %esi.0.reg2mem, !insn.addr !255
  store i32 0, i32* %edi.0.reg2mem, !insn.addr !255
  store i32 -1, i32* %esi.2.reg2mem, !insn.addr !255
  br i1 %1, label %dec_label_pc_17c7, label %dec_label_pc_1728, !insn.addr !255

dec_label_pc_1728:                                ; preds = %dec_label_pc_16f7, %dec_label_pc_1745
  %edi.0.reload = load i32, i32* %edi.0.reg2mem
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %ebp.0.reload = load i32, i32* %ebp.0.reg2mem
  %eax.0.in.reload = load i32*, i32** %eax.0.in.reg2mem
  %stack_var_-16.0.reload = load i32, i32* %stack_var_-16.0.reg2mem
  %eax.0 = ptrtoint i32* %eax.0.in.reload to i32
  store i32 %ebp.0.reload, i32* %eax.0.in.reload, align 4, !insn.addr !256
  %2 = add i32 %eax.0, 4, !insn.addr !257
  %3 = inttoptr i32 %2 to i32*, !insn.addr !257
  store i32 0, i32* %3, align 4, !insn.addr !257
  %4 = icmp eq i32 %edi.0.reload, 0, !insn.addr !258
  store i32 %eax.0, i32* %edi.1.reg2mem, !insn.addr !259
  br i1 %4, label %dec_label_pc_1740, label %dec_label_pc_1735, !insn.addr !259

dec_label_pc_1735:                                ; preds = %dec_label_pc_1728
  %5 = add i32 %stack_var_-16.0.reload, 4, !insn.addr !260
  %6 = inttoptr i32 %5 to i32*, !insn.addr !260
  store i32 %eax.0, i32* %6, align 4, !insn.addr !260
  store i32 %edi.0.reload, i32* %edi.1.reg2mem, !insn.addr !261
  br label %dec_label_pc_1740, !insn.addr !261

dec_label_pc_1740:                                ; preds = %dec_label_pc_1728, %dec_label_pc_1735
  %edi.1.reload = load i32, i32* %edi.1.reg2mem
  %7 = icmp eq i32 %esi.0.reload, -4, !insn.addr !262
  br i1 %7, label %dec_label_pc_17a1, label %dec_label_pc_1745, !insn.addr !263

dec_label_pc_1745:                                ; preds = %dec_label_pc_1740
  %8 = call i32* @malloc(i32 8), !insn.addr !264
  %9 = add nsw i32 %esi.0.reload, -1, !insn.addr !265
  %10 = add nuw nsw i32 %ebp.0.reload, 10, !insn.addr !266
  %11 = icmp eq i32* %8, null, !insn.addr !267
  %12 = icmp eq i1 %11, false, !insn.addr !268
  store i32 %eax.0, i32* %stack_var_-16.0.reg2mem, !insn.addr !268
  store i32* %8, i32** %eax.0.in.reg2mem, !insn.addr !268
  store i32 %10, i32* %ebp.0.reg2mem, !insn.addr !268
  store i32 %9, i32* %esi.0.reg2mem, !insn.addr !268
  store i32 %edi.1.reload, i32* %edi.0.reg2mem, !insn.addr !268
  br i1 %12, label %dec_label_pc_1728, label %dec_label_pc_176b, !insn.addr !268

dec_label_pc_176b:                                ; preds = %dec_label_pc_1745
  %13 = xor i32 %9, -4, !insn.addr !269
  %14 = icmp ult i32 %13, 4, !insn.addr !270
  %15 = zext i1 %14 to i32, !insn.addr !271
  %16 = icmp eq i32 %edi.1.reload, 0, !insn.addr !272
  store i32 %edi.1.reload, i32* %edi.3.reg2mem, !insn.addr !273
  store i32 %15, i32* %eax.2.reg2mem, !insn.addr !273
  br i1 %16, label %dec_label_pc_1798, label %dec_label_pc_1773, !insn.addr !273

dec_label_pc_1773:                                ; preds = %dec_label_pc_176b, %dec_label_pc_1773
  %edi.3.reload = load i32, i32* %edi.3.reg2mem
  %17 = add i32 %edi.3.reload, 4, !insn.addr !274
  %18 = inttoptr i32 %17 to i32*, !insn.addr !274
  %19 = load i32, i32* %18, align 4, !insn.addr !274
  %20 = inttoptr i32 %edi.3.reload to i32*, !insn.addr !275
  call void @free(i32* %20), !insn.addr !275
  %21 = icmp eq i32 %19, 0, !insn.addr !276
  %22 = icmp eq i1 %21, false, !insn.addr !277
  store i32 %19, i32* %edi.3.reg2mem, !insn.addr !277
  br i1 %22, label %dec_label_pc_1773, label %dec_label_pc_1784, !insn.addr !277

dec_label_pc_1784:                                ; preds = %dec_label_pc_1773
  %23 = or i32 %15, and (i32 ptrtoint (i32* @0 to i32), i32 -256), !insn.addr !278
  store i32 %23, i32* %eax.2.reg2mem, !insn.addr !279
  br label %dec_label_pc_1798, !insn.addr !279

dec_label_pc_1798:                                ; preds = %dec_label_pc_176b, %dec_label_pc_1784
  %eax.2.reload = load i32, i32* %eax.2.reg2mem
  %24 = trunc i32 %eax.2.reload to i8, !insn.addr !280
  %25 = icmp ne i8 %24, 0, !insn.addr !280
  %spec.select = sext i1 %25 to i32
  ret i32 %spec.select

dec_label_pc_17a1:                                ; preds = %dec_label_pc_1740
  %26 = icmp eq i32 %edi.1.reload, 0, !insn.addr !281
  store i32 %edi.1.reload, i32* %eax.3.reg2mem, !insn.addr !282
  store i32 0, i32* %esi.1.reg2mem, !insn.addr !282
  store i32 0, i32* %esi.2.reg2mem, !insn.addr !282
  br i1 %26, label %dec_label_pc_17c7, label %dec_label_pc_17a9, !insn.addr !282

dec_label_pc_17a9:                                ; preds = %dec_label_pc_17a1, %dec_label_pc_17a9
  %esi.1.reload = load i32, i32* %esi.1.reg2mem
  %eax.3.reload = load i32, i32* %eax.3.reg2mem
  %27 = inttoptr i32 %eax.3.reload to i32*, !insn.addr !283
  %28 = load i32, i32* %27, align 4, !insn.addr !283
  %29 = add i32 %28, %esi.1.reload, !insn.addr !283
  %30 = add i32 %eax.3.reload, 4, !insn.addr !284
  %31 = inttoptr i32 %30 to i32*, !insn.addr !284
  %32 = load i32, i32* %31, align 4, !insn.addr !284
  %33 = icmp eq i32 %32, 0, !insn.addr !285
  %34 = icmp eq i1 %33, false, !insn.addr !286
  store i32 %32, i32* %eax.3.reg2mem, !insn.addr !286
  store i32 %29, i32* %esi.1.reg2mem, !insn.addr !286
  store i32 %edi.1.reload, i32* %edi.5.reg2mem, !insn.addr !286
  br i1 %34, label %dec_label_pc_17a9, label %dec_label_pc_17b6, !insn.addr !286

dec_label_pc_17b6:                                ; preds = %dec_label_pc_17a9, %dec_label_pc_17b6
  %edi.5.reload = load i32, i32* %edi.5.reg2mem
  %35 = add i32 %edi.5.reload, 4, !insn.addr !287
  %36 = inttoptr i32 %35 to i32*, !insn.addr !287
  %37 = load i32, i32* %36, align 4, !insn.addr !287
  %38 = inttoptr i32 %edi.5.reload to i32*, !insn.addr !288
  call void @free(i32* %38), !insn.addr !288
  %39 = icmp eq i32 %37, 0, !insn.addr !289
  %40 = icmp eq i1 %39, false, !insn.addr !290
  store i32 %37, i32* %edi.5.reg2mem, !insn.addr !290
  store i32 %29, i32* %esi.2.reg2mem, !insn.addr !290
  br i1 %40, label %dec_label_pc_17b6, label %dec_label_pc_17c7, !insn.addr !290

dec_label_pc_17c7:                                ; preds = %dec_label_pc_17b6, %dec_label_pc_16f7, %dec_label_pc_17a1
  %esi.2.reload = load i32, i32* %esi.2.reg2mem
  ret i32 %esi.2.reload, !insn.addr !291

; uselistorder directives
  uselistorder i32 %15, { 1, 0 }
  uselistorder i32 %9, { 1, 0 }
  uselistorder i32 %edi.1.reload, { 0, 1, 4, 2, 3, 5 }
  uselistorder i32 %eax.0, { 1, 3, 0, 2 }
  uselistorder i32* %eax.0.in.reload, { 1, 0 }
  uselistorder i32 %ebp.0.reload, { 1, 0 }
  uselistorder i32 %esi.0.reload, { 1, 0 }
  uselistorder i32* %stack_var_-16.0.reg2mem, { 2, 0, 1 }
  uselistorder i32** %eax.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i32* %ebp.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %esi.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edi.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edi.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %edi.3.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %eax.3.reg2mem, { 2, 0, 1 }
  uselistorder i32* %esi.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edi.5.reg2mem, { 2, 0, 1 }
  uselistorder i32* %esi.2.reg2mem, { 0, 1, 3, 2 }
  uselistorder label %dec_label_pc_17c7, { 0, 2, 1 }
  uselistorder label %dec_label_pc_17b6, { 1, 0 }
  uselistorder label %dec_label_pc_17a9, { 1, 0 }
  uselistorder label %dec_label_pc_1798, { 1, 0 }
  uselistorder label %dec_label_pc_1773, { 1, 0 }
  uselistorder label %dec_label_pc_1740, { 1, 0 }
  uselistorder label %dec_label_pc_1728, { 1, 0 }
}

define i32 @create_tree_node(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_17d1:
  %0 = call i32* @malloc(i32 12), !insn.addr !292
  %1 = ptrtoint i32* %0 to i32, !insn.addr !292
  %2 = icmp eq i32* %0, null, !insn.addr !293
  br i1 %2, label %dec_label_pc_17ff, label %dec_label_pc_17f1, !insn.addr !294

dec_label_pc_17f1:                                ; preds = %dec_label_pc_17d1
  store i32 %arg2, i32* %0, align 4, !insn.addr !295
  %3 = add i32 %1, 4, !insn.addr !296
  %4 = inttoptr i32 %3 to i32*, !insn.addr !296
  store i32 0, i32* %4, align 4, !insn.addr !296
  %5 = add i32 %1, 8, !insn.addr !297
  %6 = inttoptr i32 %5 to i32*, !insn.addr !297
  store i32 0, i32* %6, align 4, !insn.addr !297
  br label %dec_label_pc_17ff, !insn.addr !297

dec_label_pc_17ff:                                ; preds = %dec_label_pc_17f1, %dec_label_pc_17d1
  ret i32 %1, !insn.addr !298

; uselistorder directives
  uselistorder i32 %1, { 2, 0, 1 }
  uselistorder i32 8, { 4, 0, 1, 2, 3, 5, 6 }
}

define i32 @tree_heap_traversal() local_unnamed_addr {
dec_label_pc_1804:
  ret i32 60, !insn.addr !299
}

define i32 @memory_leak(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_180a:
  %storemerge.reg2mem = alloca i32, !insn.addr !300
  %ecx.0.reg2mem = alloca i32, !insn.addr !300
  %0 = mul i32 %arg2, 4, !insn.addr !301
  %1 = call i32* @malloc(i32 %0), !insn.addr !302
  %2 = icmp eq i32* %1, null, !insn.addr !303
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !304
  br i1 %2, label %dec_label_pc_1850, label %dec_label_pc_1830, !insn.addr !304

dec_label_pc_1830:                                ; preds = %dec_label_pc_180a
  %3 = ptrtoint i32* %1 to i32, !insn.addr !302
  %4 = icmp slt i32 %arg2, 1
  store i32 0, i32* %ecx.0.reg2mem, !insn.addr !305
  br i1 %4, label %dec_label_pc_183e, label %dec_label_pc_1836, !insn.addr !305

dec_label_pc_1836:                                ; preds = %dec_label_pc_1830, %dec_label_pc_1836
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %5 = mul i32 %ecx.0.reload, 4, !insn.addr !306
  %6 = add i32 %5, %3, !insn.addr !306
  %7 = inttoptr i32 %6 to i32*, !insn.addr !306
  store i32 %ecx.0.reload, i32* %7, align 4, !insn.addr !306
  %8 = add i32 %ecx.0.reload, 1, !insn.addr !307
  %9 = icmp eq i32 %8, %arg2, !insn.addr !308
  %10 = icmp eq i1 %9, false, !insn.addr !309
  store i32 %8, i32* %ecx.0.reg2mem, !insn.addr !309
  br i1 %10, label %dec_label_pc_1836, label %dec_label_pc_183e, !insn.addr !309

dec_label_pc_183e:                                ; preds = %dec_label_pc_1836, %dec_label_pc_1830
  %11 = icmp slt i32 %arg2, 0
  %12 = zext i1 %11 to i32, !insn.addr !310
  %13 = add i32 %12, %arg2, !insn.addr !311
  %14 = mul i32 %13, 2, !insn.addr !312
  %15 = and i32 %14, -4, !insn.addr !313
  %16 = add i32 %15, %3, !insn.addr !313
  %17 = inttoptr i32 %16 to i32*, !insn.addr !313
  %18 = load i32, i32* %17, align 4, !insn.addr !313
  store i32 %18, i32* %storemerge.reg2mem, !insn.addr !314
  br label %dec_label_pc_1850, !insn.addr !314

dec_label_pc_1850:                                ; preds = %dec_label_pc_180a, %dec_label_pc_183e
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !315

; uselistorder directives
  uselistorder i32 %ecx.0.reload, { 1, 0, 2 }
  uselistorder i32* %1, { 1, 0 }
  uselistorder i32* %ecx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg2, { 2, 1, 3, 4, 0 }
  uselistorder label %dec_label_pc_1850, { 1, 0 }
  uselistorder label %dec_label_pc_1836, { 1, 0 }
}

define i32 @dangling_pointer(i32 %arg1) local_unnamed_addr {
dec_label_pc_1856:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !316
  %1 = load i32, i32* %0
  %2 = call i32* @malloc(i32 4), !insn.addr !317
  %3 = icmp eq i32* %2, null, !insn.addr !318
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !319
  br i1 %3, label %dec_label_pc_189e, label %dec_label_pc_1877, !insn.addr !319

dec_label_pc_1877:                                ; preds = %dec_label_pc_1856
  %4 = add i32 %1, 6332, !insn.addr !320
  %5 = inttoptr i32 %4 to i8*, !insn.addr !321
  %6 = call i32 (i8*, ...) @printf(i8* %5), !insn.addr !322
  call void @free(i32* nonnull %2), !insn.addr !323
  %7 = load i32, i32* %2, align 4, !insn.addr !324
  store i32 %7, i32* %storemerge.reg2mem, !insn.addr !325
  br label %dec_label_pc_189e, !insn.addr !325

dec_label_pc_189e:                                ; preds = %dec_label_pc_1856, %dec_label_pc_1877
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !326

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_189e, { 1, 0 }
}

define i32 @double_free(i32 %arg1) local_unnamed_addr {
dec_label_pc_18a4:
  %0 = icmp eq i32 %arg1, 0, !insn.addr !327
  br i1 %0, label %dec_label_pc_18af, label %dec_label_pc_18ac, !insn.addr !328

dec_label_pc_18ac:                                ; preds = %dec_label_pc_18a4
  %1 = inttoptr i32 %arg1 to i32*, !insn.addr !329
  %2 = load i32, i32* %1, align 4, !insn.addr !329
  ret i32 %2, !insn.addr !330

dec_label_pc_18af:                                ; preds = %dec_label_pc_18a4
  ret i32 -2, !insn.addr !331

; uselistorder directives
  uselistorder i32 -2, { 2, 0, 1 }
}

define i32 @heap_overflow(i32 %arg1) local_unnamed_addr {
dec_label_pc_18b5:
  %esi.0.reg2mem = alloca i32, !insn.addr !332
  %edx.0.reg2mem = alloca i32, !insn.addr !332
  %ecx.0.reg2mem = alloca i32, !insn.addr !332
  %0 = call i32* @malloc(i32 40), !insn.addr !333
  %1 = icmp eq i32* %0, null, !insn.addr !334
  store i32 -1, i32* %esi.0.reg2mem, !insn.addr !335
  br i1 %1, label %dec_label_pc_18f7, label %dec_label_pc_18d4, !insn.addr !335

dec_label_pc_18d4:                                ; preds = %dec_label_pc_18b5
  %2 = ptrtoint i32* %0 to i32, !insn.addr !333
  store i32 0, i32* %ecx.0.reg2mem, !insn.addr !336
  store i32 %2, i32* %edx.0.reg2mem, !insn.addr !336
  br label %dec_label_pc_18d8, !insn.addr !336

dec_label_pc_18d8:                                ; preds = %dec_label_pc_18d8, %dec_label_pc_18d4
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %3 = inttoptr i32 %edx.0.reload to i32*, !insn.addr !337
  store i32 %ecx.0.reload, i32* %3, align 4, !insn.addr !337
  %4 = add i32 %ecx.0.reload, 100, !insn.addr !338
  %5 = add i32 %edx.0.reload, 4, !insn.addr !339
  %6 = icmp eq i32 %4, ptrtoint ([14 x i8]* @global_var_44c to i32), !insn.addr !340
  %7 = icmp eq i1 %6, false, !insn.addr !341
  store i32 %4, i32* %ecx.0.reg2mem, !insn.addr !341
  store i32 %5, i32* %edx.0.reg2mem, !insn.addr !341
  br i1 %7, label %dec_label_pc_18d8, label %dec_label_pc_18e8, !insn.addr !341

dec_label_pc_18e8:                                ; preds = %dec_label_pc_18d8
  %8 = load i32, i32* %0, align 4, !insn.addr !342
  call void @free(i32* nonnull %0), !insn.addr !343
  store i32 %8, i32* %esi.0.reg2mem, !insn.addr !344
  br label %dec_label_pc_18f7, !insn.addr !344

dec_label_pc_18f7:                                ; preds = %dec_label_pc_18b5, %dec_label_pc_18e8
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  ret i32 %esi.0.reload, !insn.addr !345

; uselistorder directives
  uselistorder i32 %ecx.0.reload, { 1, 0 }
  uselistorder i32 %edx.0.reload, { 1, 0 }
  uselistorder i32* %0, { 0, 1, 3, 2 }
  uselistorder i32* %ecx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_18f7, { 1, 0 }
}

define i32 @test_heap_memory(i32 %arg1) local_unnamed_addr {
dec_label_pc_18ff:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !346
  %storemerge.in.reg2mem = alloca i32, !insn.addr !346
  %ecx.0.reg2mem = alloca i32, !insn.addr !346
  %stack_var_-12 = alloca i32, align 4
  %1 = load i32, i32* %0
  %stack_var_-8 = alloca i32, align 4
  %2 = add i32 %1, 7382, !insn.addr !347
  %3 = inttoptr i32 %2 to i8*, !insn.addr !348
  %4 = call i32 @puts(i8* %3), !insn.addr !349
  %5 = call i32 @heap_basic(i32 10, i32 ptrtoint (i32* @0 to i32)), !insn.addr !350
  %6 = add i32 %1, 6186, !insn.addr !351
  %7 = inttoptr i32 %6 to i8*, !insn.addr !352
  %8 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !353
  %9 = call i32 @heap_calloc(i32 5, i32 ptrtoint (i32* @0 to i32)), !insn.addr !354
  %10 = add i32 %1, 6215, !insn.addr !355
  %11 = inttoptr i32 %10 to i8*, !insn.addr !356
  %12 = call i32 (i8*, ...) @printf(i8* %11), !insn.addr !357
  %13 = call i32 @heap_realloc(i32 ptrtoint (i32* @0 to i32)), !insn.addr !358
  %14 = add i32 %1, 6245, !insn.addr !359
  %15 = inttoptr i32 %14 to i8*, !insn.addr !360
  %16 = call i32 (i8*, ...) @printf(i8* %15), !insn.addr !361
  %17 = call i32 @heap_array(i32 10, i32 ptrtoint (i32* @0 to i32)), !insn.addr !362
  %18 = add i32 %1, 6276, !insn.addr !363
  %19 = inttoptr i32 %18 to i8*, !insn.addr !364
  %20 = call i32 (i8*, ...) @printf(i8* %19), !insn.addr !365
  %21 = add i32 %1, 6305, !insn.addr !366
  %22 = inttoptr i32 %21 to i8*, !insn.addr !367
  %23 = call i32 (i8*, ...) @printf(i8* %22), !insn.addr !368
  store i32 0, i32* %stack_var_-8, align 4, !insn.addr !369
  %24 = call i32 @heap_nested(i32* nonnull %stack_var_-8, i32 ptrtoint (i32* @0 to i32)), !insn.addr !370
  %25 = add i32 %1, 6335, !insn.addr !371
  %26 = inttoptr i32 %25 to i8*, !insn.addr !372
  %27 = call i32 (i8*, ...) @printf(i8* %26), !insn.addr !373
  %28 = load i32, i32* %stack_var_-8, align 4, !insn.addr !374
  %29 = icmp eq i32 %28, 0, !insn.addr !375
  br i1 %29, label %dec_label_pc_19df, label %dec_label_pc_19cc, !insn.addr !376

dec_label_pc_19cc:                                ; preds = %dec_label_pc_18ff
  %30 = add i32 %28, 4, !insn.addr !377
  %31 = inttoptr i32 %30 to i32*, !insn.addr !377
  %32 = load i32, i32* %31, align 4, !insn.addr !377
  %33 = inttoptr i32 %32 to i32*
  call void @free(i32* %33), !insn.addr !378
  %34 = inttoptr i32 %28 to i32*
  call void @free(i32* %34), !insn.addr !379
  br label %dec_label_pc_19df, !insn.addr !379

dec_label_pc_19df:                                ; preds = %dec_label_pc_19cc, %dec_label_pc_18ff
  %35 = call i32 @linked_list_heap(i32 ptrtoint (i32* @0 to i32)), !insn.addr !380
  %36 = add i32 %1, 6365, !insn.addr !381
  %37 = inttoptr i32 %36 to i8*, !insn.addr !382
  %38 = call i32 (i8*, ...) @printf(i8* %37), !insn.addr !383
  %39 = add i32 %1, 6400, !insn.addr !384
  %40 = inttoptr i32 %39 to i8*, !insn.addr !385
  %41 = call i32 (i8*, ...) @printf(i8* %40), !insn.addr !386
  %42 = call i32* @malloc(i32 20), !insn.addr !387
  %43 = ptrtoint i32* %42 to i32, !insn.addr !387
  %44 = icmp eq i32* %42, null, !insn.addr !388
  store i32 0, i32* %ecx.0.reg2mem, !insn.addr !389
  br i1 %44, label %dec_label_pc_1a2f, label %dec_label_pc_1a1e, !insn.addr !389

dec_label_pc_1a1e:                                ; preds = %dec_label_pc_19df, %dec_label_pc_1a1e
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %45 = mul i32 %ecx.0.reload, 4, !insn.addr !390
  %46 = add i32 %45, %43, !insn.addr !390
  %47 = inttoptr i32 %46 to i32*, !insn.addr !390
  store i32 %ecx.0.reload, i32* %47, align 4, !insn.addr !390
  %48 = add nuw nsw i32 %ecx.0.reload, 1, !insn.addr !391
  %exitcond = icmp eq i32 %48, 5
  store i32 %48, i32* %ecx.0.reg2mem, !insn.addr !392
  br i1 %exitcond, label %dec_label_pc_1a2f, label %dec_label_pc_1a1e, !insn.addr !392

dec_label_pc_1a2f:                                ; preds = %dec_label_pc_1a1e, %dec_label_pc_19df
  %49 = add i32 %1, 6438, !insn.addr !393
  %50 = inttoptr i32 %49 to i8*, !insn.addr !394
  %51 = call i32 (i8*, ...) @printf(i8* %50), !insn.addr !395
  %52 = add i32 %1, 6468, !insn.addr !396
  %53 = inttoptr i32 %52 to i8*, !insn.addr !397
  %54 = call i32 (i8*, ...) @printf(i8* %53), !insn.addr !398
  %55 = call i32 @fork(), !insn.addr !399
  %56 = icmp eq i32 %55, 0, !insn.addr !400
  br i1 %56, label %dec_label_pc_1ac8, label %dec_label_pc_1a58, !insn.addr !401

dec_label_pc_1a58:                                ; preds = %dec_label_pc_1a2f
  %57 = icmp slt i32 %55, 1
  br i1 %57, label %dec_label_pc_1ab8, label %dec_label_pc_1a5a, !insn.addr !402

dec_label_pc_1a5a:                                ; preds = %dec_label_pc_1a58
  %58 = call i32 @waitpid(i32 %55, i32* nonnull %stack_var_-12, i32 0), !insn.addr !403
  %59 = load i32, i32* %stack_var_-12, align 4, !insn.addr !404
  %60 = urem i32 %59, 128, !insn.addr !405
  %61 = icmp eq i32 %60, 0, !insn.addr !405
  br i1 %61, label %dec_label_pc_1a9d, label %dec_label_pc_1a7b, !insn.addr !406

dec_label_pc_1a7b:                                ; preds = %dec_label_pc_1a5a
  %62 = mul i32 %60, 16777216, !insn.addr !407
  %63 = add nuw i32 %62, 16777216, !insn.addr !408
  %64 = icmp slt i32 %63, 33554432, !insn.addr !409
  store i32 %60, i32* %eax.0.reg2mem, !insn.addr !409
  br i1 %64, label %dec_label_pc_1ab2, label %dec_label_pc_1a8e, !insn.addr !409

dec_label_pc_1a8e:                                ; preds = %dec_label_pc_1a7b
  %65 = add i32 %1, 6553, !insn.addr !410
  store i32 %65, i32* %storemerge.in.reg2mem, !insn.addr !411
  br label %dec_label_pc_1aad, !insn.addr !411

dec_label_pc_1a9d:                                ; preds = %dec_label_pc_1a5a
  %66 = add i32 %1, 6516, !insn.addr !412
  store i32 %66, i32* %storemerge.in.reg2mem, !insn.addr !413
  br label %dec_label_pc_1aad, !insn.addr !413

dec_label_pc_1aad:                                ; preds = %dec_label_pc_1a9d, %dec_label_pc_1a8e
  %storemerge.in.reload = load i32, i32* %storemerge.in.reg2mem
  %storemerge = inttoptr i32 %storemerge.in.reload to i8*
  %67 = call i32 (i8*, ...) @printf(i8* %storemerge), !insn.addr !414
  store i32 %67, i32* %eax.0.reg2mem, !insn.addr !414
  br label %dec_label_pc_1ab2, !insn.addr !414

dec_label_pc_1ab2:                                ; preds = %dec_label_pc_1ab8, %dec_label_pc_1aad, %dec_label_pc_1a7b
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !415

dec_label_pc_1ab8:                                ; preds = %dec_label_pc_1a58
  %68 = add i32 %1, 6618, !insn.addr !416
  %69 = inttoptr i32 %68 to i8*, !insn.addr !417
  call void @perror(i8* %69), !insn.addr !418
  store i32 ptrtoint (i32* @0 to i32), i32* %eax.0.reg2mem, !insn.addr !419
  br label %dec_label_pc_1ab2, !insn.addr !419

dec_label_pc_1ac8:                                ; preds = %dec_label_pc_1a2f
  %70 = call i32 @dangling_pointer(i32 ptrtoint (i32* @0 to i32)), !insn.addr !420
  %71 = add i32 %1, 6500, !insn.addr !421
  %72 = inttoptr i32 %71 to i8*, !insn.addr !422
  %73 = call i32 (i8*, ...) @printf(i8* %72), !insn.addr !423
  call void @exit(i32 0), !insn.addr !424
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !424

; uselistorder directives
  uselistorder i32 %55, { 1, 0, 2 }
  uselistorder i32 %ecx.0.reload, { 1, 0, 2 }
  uselistorder i32 %28, { 1, 0, 2 }
  uselistorder i32* %stack_var_-8, { 1, 0, 2 }
  uselistorder i32 %1, { 14, 13, 12, 11, 10, 9, 8, 7, 0, 1, 2, 3, 4, 5, 6 }
  uselistorder i32* %stack_var_-12, { 1, 0 }
  uselistorder i32* %ecx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.in.reg2mem, { 0, 2, 1 }
  uselistorder i32* %eax.0.reg2mem, { 3, 0, 2, 1 }
  uselistorder i32 16777216, { 1, 0 }
  uselistorder i32* (i32)* @malloc, { 9, 10, 6, 1, 0, 11, 7, 5, 2, 4, 8, 3, 12 }
  uselistorder void (i32*)* @free, { 0, 3, 4, 1, 9, 8, 10, 2, 5, 7, 6, 11 }
  uselistorder label %dec_label_pc_1a1e, { 1, 0 }
}

define i32 @global_var_access(i32 %arg1) local_unnamed_addr {
dec_label_pc_1aeb:
  %0 = add i32 %arg1, 17780, !insn.addr !425
  %1 = inttoptr i32 %0 to i32*, !insn.addr !425
  %2 = load i32, i32* %1, align 4, !insn.addr !425
  %3 = add i32 %2, 1, !insn.addr !426
  store i32 %3, i32* %1, align 4, !insn.addr !427
  ret i32 %3, !insn.addr !428

; uselistorder directives
  uselistorder i32 %3, { 1, 0 }
}

define i32 @global_var_read(i32 %arg1) local_unnamed_addr {
dec_label_pc_1b05:
  %0 = add i32 %arg1, 17754, !insn.addr !429
  %1 = inttoptr i32 %0 to i32*, !insn.addr !429
  %2 = load i32, i32* %1, align 4, !insn.addr !429
  %3 = mul i32 %2, 2, !insn.addr !430
  ret i32 %3, !insn.addr !431
}

define i32 @global_array_access(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1b1a:
  %0 = icmp ult i32 %arg2, 10
  br i1 %0, label %dec_label_pc_1b33, label %dec_label_pc_1b2f, !insn.addr !432

dec_label_pc_1b2f:                                ; preds = %dec_label_pc_1b1a
  ret i32 -1, !insn.addr !433

dec_label_pc_1b33:                                ; preds = %dec_label_pc_1b1a
  %1 = mul i32 %arg2, 4, !insn.addr !434
  %2 = add i32 %arg1, 6949, !insn.addr !434
  %3 = add i32 %2, %1, !insn.addr !434
  %4 = inttoptr i32 %3 to i32*, !insn.addr !434
  %5 = load i32, i32* %4, align 4, !insn.addr !434
  ret i32 %5, !insn.addr !435

; uselistorder directives
  uselistorder i32 10, { 1, 2, 3, 4, 5, 6, 0, 7 }
}

define i32 @static_local(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1b3b:
  %0 = add i32 %arg1, 17704, !insn.addr !436
  %1 = inttoptr i32 %0 to i32*, !insn.addr !436
  %2 = load i32, i32* %1, align 4, !insn.addr !436
  %3 = add i32 %2, 1, !insn.addr !437
  %4 = icmp eq i32 %arg2, 0, !insn.addr !438
  %5 = select i1 %4, i32 %3, i32 0, !insn.addr !439
  store i32 %5, i32* %1, align 4, !insn.addr !440
  ret i32 %5, !insn.addr !441

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
}

define i32 @call_static_func(i32 %arg1) local_unnamed_addr {
dec_label_pc_1b5f:
  %0 = mul i32 %arg1, 2, !insn.addr !442
  %1 = or i32 %0, 1, !insn.addr !443
  ret i32 %1, !insn.addr !444
}

define i32 @access_extern_global(i32 %arg1) local_unnamed_addr {
dec_label_pc_1b67:
  %0 = add i32 %arg1, 17644, !insn.addr !445
  %1 = inttoptr i32 %0 to i32*, !insn.addr !446
  %2 = load i32, i32* %1, align 4, !insn.addr !446
  %3 = add i32 %2, 100, !insn.addr !447
  ret i32 %3, !insn.addr !448
}

define i32 @call_extern_func(i32 %arg1) local_unnamed_addr {
dec_label_pc_1b7f:
  %0 = call i32 @extern_function(i32 5), !insn.addr !449
  ret i32 %0, !insn.addr !450
}

define i32 @read_const_data(i32 %arg1) local_unnamed_addr {
dec_label_pc_1ba0:
  %0 = add i32 %arg1, 17579, !insn.addr !451
  %1 = inttoptr i32 %0 to i32*, !insn.addr !451
  %2 = load i32, i32* %1, align 4, !insn.addr !451
  %3 = add i32 %2, 4, !insn.addr !452
  %4 = inttoptr i32 %3 to i8*, !insn.addr !452
  %5 = load i8, i8* %4, align 1, !insn.addr !452
  %6 = sext i8 %5 to i32, !insn.addr !452
  %7 = add nsw i32 %6, 42, !insn.addr !453
  ret i32 %7, !insn.addr !454

; uselistorder directives
  uselistorder i32 42, { 1, 0, 2 }
  uselistorder i32 4, { 15, 0, 1, 16, 17, 13, 2, 3, 18, 19, 20, 21, 22, 23, 24, 25, 26, 4, 5, 27, 6, 7, 14, 8, 28, 9, 10, 11, 12 }
}

define i32 @access_bss_var() local_unnamed_addr {
dec_label_pc_1bba:
  ret i32 0, !insn.addr !455
}

define i32 @access_bss_buffer() local_unnamed_addr {
dec_label_pc_1bbd:
  ret i32 0, !insn.addr !456
}

define i32 @global_struct_access() local_unnamed_addr {
dec_label_pc_1bc0:
  ret i32 30, !insn.addr !457
}

define i32 @set_file_static(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1bc6:
  %0 = add i32 %arg1, 17461, !insn.addr !458
  %1 = add i32 %arg1, 17545, !insn.addr !459
  %2 = inttoptr i32 %1 to i32*, !insn.addr !459
  store i32 %arg2, i32* %2, align 4, !insn.addr !459
  ret i32 %0, !insn.addr !460
}

define i32 @get_file_static(i32 %arg1) local_unnamed_addr {
dec_label_pc_1bdd:
  %0 = add i32 %arg1, 17522, !insn.addr !461
  %1 = inttoptr i32 %0 to i32*, !insn.addr !461
  %2 = load i32, i32* %1, align 4, !insn.addr !461
  ret i32 %2, !insn.addr !462
}

define i32 @set_global_callback(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1bf0:
  %0 = add i32 %arg1, 17419, !insn.addr !463
  %1 = add i32 %arg1, 17527, !insn.addr !464
  %2 = inttoptr i32 %1 to i32*, !insn.addr !464
  store i32 %arg2, i32* %2, align 4, !insn.addr !464
  ret i32 %0, !insn.addr !465
}

define i32 @call_global_callback(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1c07:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 17500, !insn.addr !466
  %3 = inttoptr i32 %2 to i32*, !insn.addr !466
  %4 = load i32, i32* %3, align 4, !insn.addr !466
  %5 = icmp eq i32 %4, 0, !insn.addr !467
  %spec.store.select = select i1 %5, i32 -1, i32 %4
  ret i32 %spec.store.select, !insn.addr !468
}

define i32 @global_heap_store(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1c34:
  %0 = add i32 %arg1, 17463, !insn.addr !469
  %1 = inttoptr i32 %0 to i32*, !insn.addr !469
  store i32 %arg2, i32* %1, align 4, !insn.addr !469
  %2 = icmp eq i32 %arg2, 0, !insn.addr !470
  br i1 %2, label %dec_label_pc_1c51, label %dec_label_pc_1c4e, !insn.addr !471

dec_label_pc_1c4e:                                ; preds = %dec_label_pc_1c34
  %3 = inttoptr i32 %arg2 to i32*, !insn.addr !472
  %4 = load i32, i32* %3, align 4, !insn.addr !472
  ret i32 %4, !insn.addr !473

dec_label_pc_1c51:                                ; preds = %dec_label_pc_1c34
  ret i32 -1, !insn.addr !474

; uselistorder directives
  uselistorder i32 %arg2, { 0, 2, 1 }
}

define i32 @static_complex_init() local_unnamed_addr {
dec_label_pc_1c55:
  ret i32 15, !insn.addr !475
}

define i32 @tls_access(i32 %arg1) local_unnamed_addr {
dec_label_pc_1c5b:
  %0 = mul i32 %arg1, 2, !insn.addr !476
  ret i32 %0, !insn.addr !477
}

define i32 @init_order_test() local_unnamed_addr {
dec_label_pc_1c62:
  ret i32 20, !insn.addr !478

; uselistorder directives
  uselistorder i32 20, { 0, 2, 4, 5, 3, 1 }
}

define i32 @test_static_global(i32 %arg1) local_unnamed_addr {
dec_label_pc_1c68:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-12 = alloca i32, align 4
  %2 = add i32 %1, 6538, !insn.addr !479
  %3 = inttoptr i32 %2 to i8*, !insn.addr !480
  %4 = call i32 @puts(i8* %3), !insn.addr !481
  %5 = add i32 %1, 17393, !insn.addr !482
  %6 = inttoptr i32 %5 to i32*, !insn.addr !482
  %7 = load i32, i32* %6, align 4, !insn.addr !482
  %8 = add i32 %7, 1, !insn.addr !483
  store i32 %8, i32* %6, align 4, !insn.addr !484
  %9 = add i32 %1, 5755, !insn.addr !485
  %10 = inttoptr i32 %9 to i8*, !insn.addr !486
  %11 = call i32 (i8*, ...) @printf(i8* %10), !insn.addr !487
  %12 = add i32 %1, 5790, !insn.addr !488
  %13 = inttoptr i32 %12 to i8*, !insn.addr !489
  %14 = call i32 (i8*, ...) @printf(i8* %13), !insn.addr !490
  %15 = add i32 %1, 5823, !insn.addr !491
  %16 = inttoptr i32 %15 to i8*, !insn.addr !492
  %17 = call i32 (i8*, ...) @printf(i8* %16), !insn.addr !493
  %18 = add i32 %1, 17397, !insn.addr !494
  %19 = inttoptr i32 %18 to i32*, !insn.addr !494
  store i32 1, i32* %19, align 4, !insn.addr !494
  %20 = add i32 %1, 5860, !insn.addr !495
  %21 = inttoptr i32 %20 to i8*, !insn.addr !496
  %22 = call i32 (i8*, ...) @printf(i8* %21), !insn.addr !497
  %23 = load i32, i32* %19, align 4, !insn.addr !498
  %24 = add i32 %23, 1, !insn.addr !499
  store i32 %24, i32* %19, align 4, !insn.addr !500
  %25 = call i32 (i8*, ...) @printf(i8* %21), !insn.addr !501
  %26 = add i32 %1, 5890, !insn.addr !502
  %27 = inttoptr i32 %26 to i8*, !insn.addr !503
  %28 = call i32 (i8*, ...) @printf(i8* %27), !insn.addr !504
  %29 = add i32 %1, 5924, !insn.addr !505
  %30 = inttoptr i32 %29 to i8*, !insn.addr !506
  %31 = call i32 (i8*, ...) @printf(i8* %30), !insn.addr !507
  %32 = call i32 @extern_function(i32 5), !insn.addr !508
  %33 = add i32 %1, 5962, !insn.addr !509
  %34 = inttoptr i32 %33 to i8*, !insn.addr !510
  %35 = call i32 (i8*, ...) @printf(i8* %34), !insn.addr !511
  %36 = add i32 %1, 5996, !insn.addr !512
  %37 = inttoptr i32 %36 to i8*, !insn.addr !513
  %38 = call i32 (i8*, ...) @printf(i8* %37), !insn.addr !514
  %39 = add i32 %1, 6029, !insn.addr !515
  %40 = inttoptr i32 %39 to i8*, !insn.addr !516
  %41 = call i32 (i8*, ...) @printf(i8* %40), !insn.addr !517
  %42 = add i32 %1, 6061, !insn.addr !518
  %43 = inttoptr i32 %42 to i8*, !insn.addr !519
  %44 = call i32 (i8*, ...) @printf(i8* %43), !insn.addr !520
  %45 = add i32 %1, 6096, !insn.addr !521
  %46 = inttoptr i32 %45 to i8*, !insn.addr !522
  %47 = call i32 (i8*, ...) @printf(i8* %46), !insn.addr !523
  %48 = add i32 %1, 17377, !insn.addr !524
  %49 = inttoptr i32 %48 to i32*, !insn.addr !524
  store i32 50, i32* %49, align 4, !insn.addr !524
  %50 = add i32 %1, 6134, !insn.addr !525
  %51 = inttoptr i32 %50 to i8*, !insn.addr !526
  %52 = call i32 (i8*, ...) @printf(i8* %51), !insn.addr !527
  %53 = add i32 %1, 488, !insn.addr !528
  %54 = add i32 %1, 17401, !insn.addr !529
  %55 = inttoptr i32 %54 to i32*, !insn.addr !529
  store i32 %53, i32* %55, align 4, !insn.addr !529
  %56 = add i32 %1, 6163, !insn.addr !530
  %57 = inttoptr i32 %56 to i8*, !insn.addr !531
  %58 = call i32 (i8*, ...) @printf(i8* %57), !insn.addr !532
  store i32 100, i32* %stack_var_-12, align 4, !insn.addr !533
  %59 = add i32 %1, 17405, !insn.addr !534
  %60 = inttoptr i32 %59 to i32*, !insn.addr !534
  %61 = ptrtoint i32* %stack_var_-12 to i32, !insn.addr !534
  store i32 %61, i32* %60, align 4, !insn.addr !534
  %62 = add i32 %1, 6196, !insn.addr !535
  %63 = inttoptr i32 %62 to i8*, !insn.addr !536
  %64 = call i32 (i8*, ...) @printf(i8* %63), !insn.addr !537
  %65 = add i32 %1, 6231, !insn.addr !538
  %66 = inttoptr i32 %65 to i8*, !insn.addr !539
  %67 = call i32 (i8*, ...) @printf(i8* %66), !insn.addr !540
  %68 = add i32 %1, 6268, !insn.addr !541
  %69 = inttoptr i32 %68 to i8*, !insn.addr !542
  %70 = call i32 (i8*, ...) @printf(i8* %69), !insn.addr !543
  %71 = add i32 %1, 6296, !insn.addr !544
  %72 = inttoptr i32 %71 to i8*, !insn.addr !545
  %73 = call i32 (i8*, ...) @printf(i8* %72), !insn.addr !546
  ret i32 %73, !insn.addr !547

; uselistorder directives
  uselistorder i32 50, { 1, 0 }
  uselistorder i32 (i32)* @extern_function, { 1, 0 }
  uselistorder i32 5, { 1, 2, 0, 3 }
}

define i32 @double_value(i32 %arg1) local_unnamed_addr {
dec_label_pc_1e5b:
  %0 = mul i32 %arg1, 2, !insn.addr !548
  ret i32 %0, !insn.addr !549
}

define i32 @memop_memset(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1e62:
  %eax.0.reg2mem = alloca i32, !insn.addr !550
  %0 = icmp eq i32 %arg2, 0, !insn.addr !551
  %1 = icmp eq i32 %arg3, 0, !insn.addr !552
  %or.cond = or i1 %0, %1
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !553
  br i1 %or.cond, label %dec_label_pc_1e98, label %dec_label_pc_1e84, !insn.addr !553

dec_label_pc_1e84:                                ; preds = %dec_label_pc_1e62
  %2 = inttoptr i32 %arg2 to i32*, !insn.addr !554
  %3 = call i32* @memset(i32* %2, i32 %arg4, i32 %arg3), !insn.addr !554
  %4 = inttoptr i32 %arg2 to i8*, !insn.addr !555
  %5 = load i8, i8* %4, align 1, !insn.addr !555
  %6 = zext i8 %5 to i32, !insn.addr !555
  store i32 %6, i32* %eax.0.reg2mem, !insn.addr !555
  br label %dec_label_pc_1e98, !insn.addr !555

dec_label_pc_1e98:                                ; preds = %dec_label_pc_1e84, %dec_label_pc_1e62
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !556

; uselistorder directives
  uselistorder i32 %arg3, { 1, 0 }
  uselistorder i32 %arg2, { 1, 0, 2 }
}

define i32 @memop_memcpy(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1e9e:
  %eax.0.reg2mem = alloca i32, !insn.addr !557
  %0 = icmp eq i32 %arg2, 0, !insn.addr !558
  %1 = icmp eq i32 %arg3, 0, !insn.addr !559
  %or.cond = or i1 %0, %1
  %2 = icmp eq i32 %arg4, 0, !insn.addr !560
  %or.cond1 = or i1 %or.cond, %2
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !561
  br i1 %or.cond1, label %dec_label_pc_1edd, label %dec_label_pc_1ec8, !insn.addr !561

dec_label_pc_1ec8:                                ; preds = %dec_label_pc_1e9e
  %3 = inttoptr i32 %arg2 to i32*, !insn.addr !562
  %4 = inttoptr i32 %arg3 to i32*, !insn.addr !562
  %5 = call i32* @memcpy(i32* %3, i32* %4, i32 %arg4), !insn.addr !562
  %6 = add i32 %arg4, -4
  %7 = and i32 %6, -4, !insn.addr !563
  %8 = add i32 %7, %arg2, !insn.addr !563
  %9 = inttoptr i32 %8 to i32*, !insn.addr !563
  %10 = load i32, i32* %9, align 4, !insn.addr !563
  store i32 %10, i32* %eax.0.reg2mem, !insn.addr !563
  br label %dec_label_pc_1edd, !insn.addr !563

dec_label_pc_1edd:                                ; preds = %dec_label_pc_1ec8, %dec_label_pc_1e9e
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !564

; uselistorder directives
  uselistorder i32 %arg4, { 1, 2, 0 }
  uselistorder i32 %arg3, { 1, 0 }
}

define i32 @memop_memmove(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1ee1:
  %eax.0.reg2mem = alloca i32, !insn.addr !565
  %0 = icmp eq i32 %arg2, 0, !insn.addr !566
  %1 = icmp ult i32 %arg3, 2, !insn.addr !567
  %or.cond = or i1 %0, %1
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !568
  br i1 %or.cond, label %dec_label_pc_1f1a, label %dec_label_pc_1f04, !insn.addr !568

dec_label_pc_1f04:                                ; preds = %dec_label_pc_1ee1
  %2 = add i32 %arg2, 1, !insn.addr !569
  %3 = add i32 %arg3, -1, !insn.addr !570
  %4 = inttoptr i32 %2 to i32*, !insn.addr !571
  %5 = inttoptr i32 %arg2 to i32*, !insn.addr !571
  %6 = call i32* @memmove(i32* %4, i32* %5, i32 %3), !insn.addr !571
  %7 = inttoptr i32 %2 to i8*, !insn.addr !572
  %8 = load i8, i8* %7, align 1, !insn.addr !572
  %9 = sext i8 %8 to i32, !insn.addr !572
  store i32 %9, i32* %eax.0.reg2mem, !insn.addr !572
  br label %dec_label_pc_1f1a, !insn.addr !572

dec_label_pc_1f1a:                                ; preds = %dec_label_pc_1f04, %dec_label_pc_1ee1
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !573

; uselistorder directives
  uselistorder i32 %arg3, { 1, 0 }
  uselistorder i32 %arg2, { 1, 0, 2 }
}

define i32 @memop_memcmp(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1f20:
  %eax.0.reg2mem = alloca i32, !insn.addr !574
  %0 = icmp eq i32 %arg2, 0, !insn.addr !575
  %1 = icmp eq i32 %arg3, 0, !insn.addr !576
  %or.cond = or i1 %0, %1
  %2 = icmp eq i32 %arg4, 0, !insn.addr !577
  %or.cond1 = or i1 %or.cond, %2
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !578
  br i1 %or.cond1, label %dec_label_pc_1f6a, label %dec_label_pc_1f49, !insn.addr !578

dec_label_pc_1f49:                                ; preds = %dec_label_pc_1f20
  %3 = inttoptr i32 %arg2 to i32*, !insn.addr !579
  %4 = inttoptr i32 %arg3 to i32*, !insn.addr !579
  %5 = call i32 @memcmp(i32* %3, i32* %4, i32 %arg4), !insn.addr !579
  %6 = icmp eq i32 %5, 0, !insn.addr !580
  %7 = icmp eq i1 %6, false, !insn.addr !581
  %8 = sext i1 %7 to i32, !insn.addr !582
  %9 = icmp slt i32 %5, 1
  %10 = select i1 %9, i32 %8, i32 1, !insn.addr !583
  store i32 %10, i32* %eax.0.reg2mem, !insn.addr !583
  br label %dec_label_pc_1f6a, !insn.addr !583

dec_label_pc_1f6a:                                ; preds = %dec_label_pc_1f49, %dec_label_pc_1f20
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !584

; uselistorder directives
  uselistorder i32 %arg4, { 1, 0 }
  uselistorder i32 %arg3, { 1, 0 }
}

define i32 @memop_bzero(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1f70:
  %storemerge.reg2mem = alloca i32, !insn.addr !585
  %0 = icmp eq i32 %arg2, 0, !insn.addr !586
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !587
  br i1 %0, label %dec_label_pc_1fa1, label %dec_label_pc_1f87, !insn.addr !587

dec_label_pc_1f87:                                ; preds = %dec_label_pc_1f70
  %1 = inttoptr i32 %arg2 to i32*, !insn.addr !588
  %2 = call i32* @memset(i32* %1, i32 0, i32 %arg3), !insn.addr !588
  %3 = inttoptr i32 %arg2 to i8*, !insn.addr !589
  %4 = load i8, i8* %3, align 1, !insn.addr !589
  %5 = zext i8 %4 to i32, !insn.addr !589
  store i32 %5, i32* %storemerge.reg2mem, !insn.addr !590
  br label %dec_label_pc_1fa1, !insn.addr !590

dec_label_pc_1fa1:                                ; preds = %dec_label_pc_1f70, %dec_label_pc_1f87
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !591

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg2, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1fa1, { 1, 0 }
}

define i32 @memop_bcopy(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1fa7:
  %eax.0.reg2mem = alloca i32, !insn.addr !592
  %0 = icmp eq i32 %arg2, 0, !insn.addr !593
  %1 = icmp eq i32 %arg3, 0, !insn.addr !594
  %or.cond = or i1 %0, %1
  %2 = icmp eq i32 %arg4, 0, !insn.addr !595
  %or.cond1 = or i1 %or.cond, %2
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !596
  br i1 %or.cond1, label %dec_label_pc_1fe2, label %dec_label_pc_1fd1, !insn.addr !596

dec_label_pc_1fd1:                                ; preds = %dec_label_pc_1fa7
  %3 = inttoptr i32 %arg3 to i32*, !insn.addr !597
  %4 = inttoptr i32 %arg2 to i32*, !insn.addr !597
  %5 = call i32* @memmove(i32* %3, i32* %4, i32 %arg4), !insn.addr !597
  %6 = inttoptr i32 %arg3 to i8*, !insn.addr !598
  %7 = load i8, i8* %6, align 1, !insn.addr !598
  %8 = zext i8 %7 to i32, !insn.addr !598
  store i32 %8, i32* %eax.0.reg2mem, !insn.addr !598
  br label %dec_label_pc_1fe2, !insn.addr !598

dec_label_pc_1fe2:                                ; preds = %dec_label_pc_1fd1, %dec_label_pc_1fa7
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !599

; uselistorder directives
  uselistorder i32 %arg4, { 1, 0 }
  uselistorder i32 %arg3, { 2, 1, 0 }
}

define i32 @memop_unaligned_access(i32 %arg1) local_unnamed_addr {
dec_label_pc_1fe8:
  %0 = icmp eq i32 %arg1, 0, !insn.addr !600
  br i1 %0, label %dec_label_pc_1ff4, label %dec_label_pc_1ff0, !insn.addr !601

dec_label_pc_1ff0:                                ; preds = %dec_label_pc_1fe8
  %1 = add i32 %arg1, 1, !insn.addr !602
  %2 = inttoptr i32 %1 to i32*, !insn.addr !602
  %3 = load i32, i32* %2, align 4, !insn.addr !602
  ret i32 %3, !insn.addr !603

dec_label_pc_1ff4:                                ; preds = %dec_label_pc_1fe8
  ret i32 -1, !insn.addr !604
}

define i32 @memop_memory_barrier(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1ff8:
  %0 = icmp eq i32 %arg2, 0, !insn.addr !605
  br i1 %0, label %dec_label_pc_200a, label %dec_label_pc_2000, !insn.addr !606

dec_label_pc_2000:                                ; preds = %dec_label_pc_1ff8
  %1 = inttoptr i32 %arg2 to i32*, !insn.addr !607
  %2 = load i32, i32* %1, align 4
  %3 = mul i32 %2, 2, !insn.addr !608
  ret i32 %3, !insn.addr !609

dec_label_pc_200a:                                ; preds = %dec_label_pc_1ff8
  ret i32 -1, !insn.addr !610

; uselistorder directives
  uselistorder i32 2, { 0, 16, 1, 2, 3, 4, 5, 6, 17, 7, 18, 8, 19, 9, 20, 10, 11, 12, 21, 13, 14, 15 }
}

define i32 @test_memory_op_functions(i32 %arg1) local_unnamed_addr {
dec_label_pc_200e:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3fe9 to i32), i32 -10719), !insn.addr !611
  %3 = inttoptr i32 %2 to i8*, !insn.addr !612
  %4 = call i32 @puts(i8* %3), !insn.addr !613
  %5 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3fe9 to i32), i32 -10964), !insn.addr !614
  %6 = inttoptr i32 %5 to i8*, !insn.addr !615
  %7 = call i32 (i8*, ...) @printf(i8* %6), !insn.addr !616
  %8 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3fe9 to i32), i32 -10947), !insn.addr !617
  %9 = inttoptr i32 %8 to i8*, !insn.addr !618
  %10 = call i32 (i8*, ...) @printf(i8* %9), !insn.addr !619
  %11 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3fe9 to i32), i32 -10919), !insn.addr !620
  %12 = inttoptr i32 %11 to i8*, !insn.addr !621
  %13 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !622
  %14 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3fe9 to i32), i32 -10628), !insn.addr !623
  %15 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3fe9 to i32), i32 -10640), !insn.addr !624
  %16 = inttoptr i32 %15 to i32*
  %17 = inttoptr i32 %14 to i32*, !insn.addr !625
  %18 = call i32 @memcmp(i32* %16, i32* %17, i32 12), !insn.addr !625
  %19 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3fe9 to i32), i32 -10902), !insn.addr !626
  %20 = inttoptr i32 %19 to i8*, !insn.addr !627
  %21 = call i32 (i8*, ...) @printf(i8* %20), !insn.addr !628
  %22 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3fe9 to i32), i32 -10885), !insn.addr !629
  %23 = inttoptr i32 %22 to i8*, !insn.addr !630
  %24 = call i32 (i8*, ...) @printf(i8* %23), !insn.addr !631
  %25 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3fe9 to i32), i32 -10868), !insn.addr !632
  %26 = inttoptr i32 %25 to i8*, !insn.addr !633
  %27 = call i32 (i8*, ...) @printf(i8* %26), !insn.addr !634
  %28 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3fe9 to i32), i32 -10851), !insn.addr !635
  %29 = inttoptr i32 %28 to i8*, !insn.addr !636
  %30 = call i32 (i8*, ...) @printf(i8* %29), !insn.addr !637
  %31 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3fe9 to i32), i32 -10832), !insn.addr !638
  %32 = inttoptr i32 %31 to i8*, !insn.addr !639
  %33 = call i32 (i8*, ...) @printf(i8* %32), !insn.addr !640
  ret i32 %33, !insn.addr !641

; uselistorder directives
  uselistorder i32 %1, { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 (i32*, i32*, i32)* @memcmp, { 1, 0, 2 }
  uselistorder i32 (i8*, ...)* @printf, { 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 48 }
  uselistorder i32 (i8*)* @puts, { 3, 2, 1, 0, 4 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_2128:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @test_stack_memory(i32 %1), !insn.addr !642
  %3 = call i32 @test_heap_memory(i32 ptrtoint (i32* @0 to i32)), !insn.addr !643
  %4 = call i32 @test_static_global(i32 ptrtoint (i32* @0 to i32)), !insn.addr !644
  %5 = call i32 @test_memory_op_functions(i32 ptrtoint (i32* @0 to i32)), !insn.addr !645
  ret i32 0, !insn.addr !646

; uselistorder directives
  uselistorder i32 0, { 26, 50, 51, 35, 36, 52, 42, 53, 54, 0, 37, 38, 55, 56, 39, 40, 57, 41, 58, 59, 60, 27, 28, 44, 61, 43, 62, 45, 63, 1, 64, 49, 2, 65, 30, 3, 47, 46, 66, 67, 4, 5, 68, 69, 70, 71, 72, 6, 7, 8, 9, 10, 73, 31, 11, 12, 13, 14, 32, 74, 15, 16, 17, 18, 19, 33, 20, 21, 34, 75, 22, 23, 24, 25, 76, 29, 48 }
}

define i32 @extern_function(i32 %arg1) local_unnamed_addr {
dec_label_pc_2154:
  %0 = mul i32 %arg1, 3, !insn.addr !647
  ret i32 %0, !insn.addr !648

; uselistorder directives
  uselistorder i32 3, { 0, 1, 3, 4, 5, 2 }
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_2160:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !649
  %ebx.0.reg2mem = alloca i32, !insn.addr !649
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !650
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e97 to i32), i32 -244), !insn.addr !651
  %4 = inttoptr i32 %3 to i32*, !insn.addr !651
  %5 = load i32, i32* %4, align 4, !insn.addr !651
  %6 = icmp eq i32 %5, -1, !insn.addr !652
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !653
  store i32 -1, i32* %merge.reg2mem, !insn.addr !653
  br i1 %6, label %dec_label_pc_219d, label %dec_label_pc_2190, !insn.addr !653

dec_label_pc_2190:                                ; preds = %dec_label_pc_2160, %dec_label_pc_2190
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !654
  %8 = inttoptr i32 %7 to i32*, !insn.addr !654
  %9 = load i32, i32* %8, align 4, !insn.addr !654
  %10 = icmp eq i32 %9, -1, !insn.addr !655
  %11 = icmp eq i1 %10, false, !insn.addr !656
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !656
  store i32 %9, i32* %merge.reg2mem, !insn.addr !656
  br i1 %11, label %dec_label_pc_2190, label %dec_label_pc_219d, !insn.addr !656

dec_label_pc_219d:                                ; preds = %dec_label_pc_2190, %dec_label_pc_2160
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !657

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 21, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 }
  uselistorder i32 -4, { 10, 0, 1, 2, 3, 4, 5, 9, 6, 7, 8 }
  uselistorder i32 -1, { 22, 0, 23, 17, 18, 1, 2, 24, 3, 4, 5, 19, 21, 20, 6, 7, 8, 25, 9, 10, 11, 12, 13, 26, 14, 15, 27, 16 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder i32 ptrtoint (i32* @0 to i32), { 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 12, 13, 1, 14, 15 }
  uselistorder label %dec_label_pc_2190, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_21ac:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !658
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !659
  ret i32 %3, !insn.addr !660

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 1, 0 }
  uselistorder i32 1, { 18, 21, 20, 17, 16, 15, 102, 22, 23, 85, 84, 24, 103, 25, 26, 27, 104, 86, 105, 93, 14, 13, 87, 106, 107, 83, 108, 95, 94, 30, 29, 28, 12, 33, 32, 31, 34, 11, 109, 88, 36, 35, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 49, 110, 89, 52, 51, 50, 111, 58, 59, 57, 56, 55, 54, 53, 112, 63, 64, 62, 61, 60, 90, 67, 66, 65, 113, 92, 96, 72, 71, 70, 69, 68, 10, 114, 91, 97, 75, 74, 73, 98, 78, 77, 76, 115, 99, 79, 19, 116, 100, 81, 80, 9, 8, 7, 82, 6, 5, 4, 3, 101, 2, 1, 0 }
}

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32* @memmove(i32*, i32*, i32) local_unnamed_addr

declare void @free(i32*) local_unnamed_addr

declare i32* @memcpy(i32*, i32*, i32) local_unnamed_addr

declare i32 @memcmp(i32*, i32*, i32) local_unnamed_addr

declare void @perror(i8*) local_unnamed_addr

declare i32 @waitpid(i32, i32*, i32) local_unnamed_addr

declare i32* @realloc(i32*, i32) local_unnamed_addr

declare i32* @malloc(i32) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare void @exit(i32) local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

declare i32 @fork() local_unnamed_addr

declare i32* @calloc(i32, i32) local_unnamed_addr

declare i32 @__asm_hlt() local_unnamed_addr

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
!20 = !{i64 4431}
!21 = !{i64 4448}
!22 = !{i64 4454}
!23 = !{i64 4459}
!24 = !{i64 4463}
!25 = !{i64 4467}
!26 = !{i64 4480}
!27 = !{i64 4497}
!28 = !{i64 4536}
!29 = !{i64 4544}
!30 = !{i64 4614}
!31 = !{i64 4624}
!32 = !{i64 4632}
!33 = !{i64 4648}
!34 = !{i64 4655}
!35 = !{i64 4657}
!36 = !{i64 4663}
!37 = !{i64 4665}
!38 = !{i64 4678}
!39 = !{i64 4683}
!40 = !{i64 4742}
!41 = !{i64 4747}
!42 = !{i64 4761}
!43 = !{i64 4772}
!44 = !{i64 4780}
!45 = !{i64 4784}
!46 = !{i64 4792}
!47 = !{i64 4794}
!48 = !{i64 4797}
!49 = !{i64 4798}
!50 = !{i64 4807}
!51 = !{i64 4809}
!52 = !{i64 4812}
!53 = !{i64 4813}
!54 = !{i64 4818}
!55 = !{i64 4827}
!56 = !{i64 4832}
!57 = !{i64 4835}
!58 = !{i64 4840}
!59 = !{i64 4851}
!60 = !{i64 4856}
!61 = !{i64 4858}
!62 = !{i64 4860}
!63 = !{i64 4861}
!64 = !{i64 4867}
!65 = !{i64 4869}
!66 = !{i64 4872}
!67 = !{i64 4873}
!68 = !{i64 4878}
!69 = !{i64 4880}
!70 = !{i64 4894}
!71 = !{i64 4895}
!72 = !{i64 4903}
!73 = !{i64 4909}
!74 = !{i64 4915}
!75 = !{i64 4924}
!76 = !{i64 4926}
!77 = !{i64 4933}
!78 = !{i64 4936}
!79 = !{i64 4942}
!80 = !{i64 4944}
!81 = !{i64 4947}
!82 = !{i64 4950}
!83 = !{i64 4951}
!84 = !{i64 4955}
!85 = !{i64 4958}
!86 = !{i64 4960}
!87 = !{i64 4963}
!88 = !{i64 4966}
!89 = !{i64 4974}
!90 = !{i64 4975}
!91 = !{i64 4985}
!92 = !{i64 4987}
!93 = !{i64 4989}
!94 = !{i64 4996}
!95 = !{i64 4999}
!96 = !{i64 5005}
!97 = !{i64 5007}
!98 = !{i64 5010}
!99 = !{i64 5011}
!100 = !{i64 5014}
!101 = !{i64 5016}
!102 = !{i64 5020}
!103 = !{i64 5023}
!104 = !{i64 5025}
!105 = !{i64 5028}
!106 = !{i64 5031}
!107 = !{i64 5041}
!108 = !{i64 5047}
!109 = !{i64 5048}
!110 = !{i64 5061}
!111 = !{i64 5068}
!112 = !{i64 5074}
!113 = !{i64 5077}
!114 = !{i64 5082}
!115 = !{i64 5088}
!116 = !{i64 5099}
!117 = !{i64 5106}
!118 = !{i64 5104}
!119 = !{i64 5110}
!120 = !{i64 5113}
!121 = !{i64 5116}
!122 = !{i64 5126}
!123 = !{i64 5132}
!124 = !{i64 5135}
!125 = !{i64 5140}
!126 = !{i64 5146}
!127 = !{i64 5157}
!128 = !{i64 5162}
!129 = !{i64 5168}
!130 = !{i64 5179}
!131 = !{i64 5184}
!132 = !{i64 5190}
!133 = !{i64 5201}
!134 = !{i64 5206}
!135 = !{i64 5208}
!136 = !{i64 5212}
!137 = !{i64 5213}
!138 = !{i64 5218}
!139 = !{i64 5232}
!140 = !{i64 5238}
!141 = !{i64 5241}
!142 = !{i64 5248}
!143 = !{i64 5250}
!144 = !{i64 5254}
!145 = !{i64 5257}
!146 = !{i64 5260}
!147 = !{i64 5262}
!148 = !{i64 5275}
!149 = !{i64 5281}
!150 = !{i64 5284}
!151 = !{i64 5289}
!152 = !{i64 5291}
!153 = !{i64 5293}
!154 = !{i64 5296}
!155 = !{i64 5299}
!156 = !{i64 5302}
!157 = !{i64 5312}
!158 = !{i64 5318}
!159 = !{i64 5321}
!160 = !{i64 5326}
!161 = !{i64 5332}
!162 = !{i64 5343}
!163 = !{i64 5356}
!164 = !{i64 5357}
!165 = !{i64 5376}
!166 = !{i64 5386}
!167 = !{i64 5391}
!168 = !{i64 5393}
!169 = !{i64 5397}
!170 = !{i64 5403}
!171 = !{i64 5406}
!172 = !{i64 5409}
!173 = !{i64 5410}
!174 = !{i64 5414}
!175 = !{i64 5417}
!176 = !{i64 5419}
!177 = !{i64 5422}
!178 = !{i64 5428}
!179 = !{i64 5433}
!180 = !{i64 5445}
!181 = !{i64 5446}
!182 = !{i64 5479}
!183 = !{i64 5484}
!184 = !{i64 5486}
!185 = !{i64 5493}
!186 = !{i64 5500}
!187 = !{i64 5503}
!188 = !{i64 5504}
!189 = !{i64 5506}
!190 = !{i64 5511}
!191 = !{i64 5516}
!192 = !{i64 5529}
!193 = !{i64 5530}
!194 = !{i64 5556}
!195 = !{i64 5561}
!196 = !{i64 5563}
!197 = !{i64 5570}
!198 = !{i64 5574}
!199 = !{i64 5578}
!200 = !{i64 5580}
!201 = !{i64 5594}
!202 = !{i64 5599}
!203 = !{i64 5601}
!204 = !{i64 5605}
!205 = !{i64 5608}
!206 = !{i64 5613}
!207 = !{i64 5615}
!208 = !{i64 5618}
!209 = !{i64 5621}
!210 = !{i64 5624}
!211 = !{i64 5631}
!212 = !{i64 5634}
!213 = !{i64 5636}
!214 = !{i64 5656}
!215 = !{i64 5670}
!216 = !{i64 5671}
!217 = !{i64 5690}
!218 = !{i64 5700}
!219 = !{i64 5705}
!220 = !{i64 5707}
!221 = !{i64 5711}
!222 = !{i64 5717}
!223 = !{i64 5720}
!224 = !{i64 5721}
!225 = !{i64 5724}
!226 = !{i64 5726}
!227 = !{i64 5730}
!228 = !{i64 5733}
!229 = !{i64 5735}
!230 = !{i64 5738}
!231 = !{i64 5744}
!232 = !{i64 5749}
!233 = !{i64 5761}
!234 = !{i64 5766}
!235 = !{i64 5769}
!236 = !{i64 5770}
!237 = !{i64 5799}
!238 = !{i64 5804}
!239 = !{i64 5806}
!240 = !{i64 5808}
!241 = !{i64 5812}
!242 = !{i64 5825}
!243 = !{i64 5830}
!244 = !{i64 5833}
!245 = !{i64 5835}
!246 = !{i64 5837}
!247 = !{i64 5843}
!248 = !{i64 5852}
!249 = !{i64 5862}
!250 = !{i64 5867}
!251 = !{i64 5878}
!252 = !{i64 5879}
!253 = !{i64 5905}
!254 = !{i64 5910}
!255 = !{i64 5912}
!256 = !{i64 5928}
!257 = !{i64 5930}
!258 = !{i64 5937}
!259 = !{i64 5939}
!260 = !{i64 5945}
!261 = !{i64 5948}
!262 = !{i64 5952}
!263 = !{i64 5955}
!264 = !{i64 5968}
!265 = !{i64 5973}
!266 = !{i64 5974}
!267 = !{i64 5977}
!268 = !{i64 5979}
!269 = !{i64 5981}
!270 = !{i64 5983}
!271 = !{i64 5986}
!272 = !{i64 5995}
!273 = !{i64 5997}
!274 = !{i64 6003}
!275 = !{i64 6009}
!276 = !{i64 6016}
!277 = !{i64 6018}
!278 = !{i64 6022}
!279 = !{i64 6026}
!280 = !{i64 6040}
!281 = !{i64 6051}
!282 = !{i64 6053}
!283 = !{i64 6057}
!284 = !{i64 6059}
!285 = !{i64 6062}
!286 = !{i64 6064}
!287 = !{i64 6070}
!288 = !{i64 6076}
!289 = !{i64 6083}
!290 = !{i64 6085}
!291 = !{i64 6096}
!292 = !{i64 6120}
!293 = !{i64 6125}
!294 = !{i64 6127}
!295 = !{i64 6133}
!296 = !{i64 6137}
!297 = !{i64 6140}
!298 = !{i64 6147}
!299 = !{i64 6153}
!300 = !{i64 6154}
!301 = !{i64 6173}
!302 = !{i64 6183}
!303 = !{i64 6188}
!304 = !{i64 6190}
!305 = !{i64 6194}
!306 = !{i64 6198}
!307 = !{i64 6201}
!308 = !{i64 6202}
!309 = !{i64 6204}
!310 = !{i64 6208}
!311 = !{i64 6211}
!312 = !{i64 6213}
!313 = !{i64 6216}
!314 = !{i64 6219}
!315 = !{i64 6229}
!316 = !{i64 6230}
!317 = !{i64 6254}
!318 = !{i64 6259}
!319 = !{i64 6261}
!320 = !{i64 6265}
!321 = !{i64 6271}
!322 = !{i64 6282}
!323 = !{i64 6290}
!324 = !{i64 6295}
!325 = !{i64 6297}
!326 = !{i64 6307}
!327 = !{i64 6312}
!328 = !{i64 6314}
!329 = !{i64 6316}
!330 = !{i64 6318}
!331 = !{i64 6324}
!332 = !{i64 6325}
!333 = !{i64 6347}
!334 = !{i64 6352}
!335 = !{i64 6354}
!336 = !{i64 6358}
!337 = !{i64 6360}
!338 = !{i64 6362}
!339 = !{i64 6365}
!340 = !{i64 6368}
!341 = !{i64 6374}
!342 = !{i64 6376}
!343 = !{i64 6381}
!344 = !{i64 6386}
!345 = !{i64 6398}
!346 = !{i64 6399}
!347 = !{i64 6416}
!348 = !{i64 6422}
!349 = !{i64 6425}
!350 = !{i64 6438}
!351 = !{i64 6447}
!352 = !{i64 6453}
!353 = !{i64 6456}
!354 = !{i64 6468}
!355 = !{i64 6477}
!356 = !{i64 6483}
!357 = !{i64 6486}
!358 = !{i64 6491}
!359 = !{i64 6500}
!360 = !{i64 6506}
!361 = !{i64 6509}
!362 = !{i64 6517}
!363 = !{i64 6526}
!364 = !{i64 6532}
!365 = !{i64 6535}
!366 = !{i64 6540}
!367 = !{i64 6546}
!368 = !{i64 6557}
!369 = !{i64 6566}
!370 = !{i64 6575}
!371 = !{i64 6584}
!372 = !{i64 6590}
!373 = !{i64 6593}
!374 = !{i64 6598}
!375 = !{i64 6600}
!376 = !{i64 6602}
!377 = !{i64 6604}
!378 = !{i64 6610}
!379 = !{i64 6618}
!380 = !{i64 6623}
!381 = !{i64 6632}
!382 = !{i64 6638}
!383 = !{i64 6641}
!384 = !{i64 6646}
!385 = !{i64 6652}
!386 = !{i64 6663}
!387 = !{i64 6675}
!388 = !{i64 6680}
!389 = !{i64 6682}
!390 = !{i64 6686}
!391 = !{i64 6689}
!392 = !{i64 6693}
!393 = !{i64 6707}
!394 = !{i64 6713}
!395 = !{i64 6716}
!396 = !{i64 6721}
!397 = !{i64 6727}
!398 = !{i64 6730}
!399 = !{i64 6735}
!400 = !{i64 6740}
!401 = !{i64 6742}
!402 = !{i64 6744}
!403 = !{i64 6765}
!404 = !{i64 6770}
!405 = !{i64 6774}
!406 = !{i64 6777}
!407 = !{i64 6781}
!408 = !{i64 6784}
!409 = !{i64 6796}
!410 = !{i64 6802}
!411 = !{i64 6811}
!412 = !{i64 6816}
!413 = !{i64 6825}
!414 = !{i64 6829}
!415 = !{i64 6839}
!416 = !{i64 6840}
!417 = !{i64 6846}
!418 = !{i64 6849}
!419 = !{i64 6854}
!420 = !{i64 6856}
!421 = !{i64 6865}
!422 = !{i64 6871}
!423 = !{i64 6874}
!424 = !{i64 6886}
!425 = !{i64 6903}
!426 = !{i64 6909}
!427 = !{i64 6910}
!428 = !{i64 6916}
!429 = !{i64 6929}
!430 = !{i64 6935}
!431 = !{i64 6937}
!432 = !{i64 6957}
!433 = !{i64 6962}
!434 = !{i64 6963}
!435 = !{i64 6970}
!436 = !{i64 6983}
!437 = !{i64 6989}
!438 = !{i64 6992}
!439 = !{i64 6997}
!440 = !{i64 7000}
!441 = !{i64 7006}
!442 = !{i64 7011}
!443 = !{i64 7013}
!444 = !{i64 7014}
!445 = !{i64 7027}
!446 = !{i64 7033}
!447 = !{i64 7035}
!448 = !{i64 7038}
!449 = !{i64 7062}
!450 = !{i64 7071}
!451 = !{i64 7084}
!452 = !{i64 7090}
!453 = !{i64 7094}
!454 = !{i64 7097}
!455 = !{i64 7100}
!456 = !{i64 7103}
!457 = !{i64 7109}
!458 = !{i64 7116}
!459 = !{i64 7126}
!460 = !{i64 7132}
!461 = !{i64 7145}
!462 = !{i64 7151}
!463 = !{i64 7158}
!464 = !{i64 7168}
!465 = !{i64 7174}
!466 = !{i64 7191}
!467 = !{i64 7197}
!468 = !{i64 7219}
!469 = !{i64 7236}
!470 = !{i64 7242}
!471 = !{i64 7244}
!472 = !{i64 7246}
!473 = !{i64 7248}
!474 = !{i64 7252}
!475 = !{i64 7258}
!476 = !{i64 7263}
!477 = !{i64 7265}
!478 = !{i64 7271}
!479 = !{i64 7290}
!480 = !{i64 7296}
!481 = !{i64 7299}
!482 = !{i64 7304}
!483 = !{i64 7310}
!484 = !{i64 7311}
!485 = !{i64 7321}
!486 = !{i64 7327}
!487 = !{i64 7330}
!488 = !{i64 7347}
!489 = !{i64 7353}
!490 = !{i64 7356}
!491 = !{i64 7370}
!492 = !{i64 7376}
!493 = !{i64 7379}
!494 = !{i64 7387}
!495 = !{i64 7397}
!496 = !{i64 7403}
!497 = !{i64 7406}
!498 = !{i64 7411}
!499 = !{i64 7417}
!500 = !{i64 7418}
!501 = !{i64 7431}
!502 = !{i64 7436}
!503 = !{i64 7442}
!504 = !{i64 7453}
!505 = !{i64 7477}
!506 = !{i64 7483}
!507 = !{i64 7486}
!508 = !{i64 7494}
!509 = !{i64 7503}
!510 = !{i64 7509}
!511 = !{i64 7512}
!512 = !{i64 7534}
!513 = !{i64 7540}
!514 = !{i64 7543}
!515 = !{i64 7554}
!516 = !{i64 7560}
!517 = !{i64 7563}
!518 = !{i64 7572}
!519 = !{i64 7578}
!520 = !{i64 7581}
!521 = !{i64 7586}
!522 = !{i64 7592}
!523 = !{i64 7603}
!524 = !{i64 7613}
!525 = !{i64 7623}
!526 = !{i64 7629}
!527 = !{i64 7632}
!528 = !{i64 7637}
!529 = !{i64 7643}
!530 = !{i64 7649}
!531 = !{i64 7655}
!532 = !{i64 7666}
!533 = !{i64 7675}
!534 = !{i64 7677}
!535 = !{i64 7687}
!536 = !{i64 7693}
!537 = !{i64 7696}
!538 = !{i64 7701}
!539 = !{i64 7707}
!540 = !{i64 7718}
!541 = !{i64 7732}
!542 = !{i64 7738}
!543 = !{i64 7741}
!544 = !{i64 7750}
!545 = !{i64 7756}
!546 = !{i64 7759}
!547 = !{i64 7770}
!548 = !{i64 7775}
!549 = !{i64 7777}
!550 = !{i64 7778}
!551 = !{i64 7800}
!552 = !{i64 7808}
!553 = !{i64 7802}
!554 = !{i64 7821}
!555 = !{i64 7829}
!556 = !{i64 7837}
!557 = !{i64 7838}
!558 = !{i64 7860}
!559 = !{i64 7868}
!560 = !{i64 7876}
!561 = !{i64 7862}
!562 = !{i64 7886}
!563 = !{i64 7897}
!564 = !{i64 7904}
!565 = !{i64 7905}
!566 = !{i64 7927}
!567 = !{i64 7935}
!568 = !{i64 7929}
!569 = !{i64 7940}
!570 = !{i64 7943}
!571 = !{i64 7950}
!572 = !{i64 7958}
!573 = !{i64 7967}
!574 = !{i64 7968}
!575 = !{i64 7989}
!576 = !{i64 7997}
!577 = !{i64 8005}
!578 = !{i64 7991}
!579 = !{i64 8015}
!580 = !{i64 8027}
!581 = !{i64 8029}
!582 = !{i64 8032}
!583 = !{i64 8039}
!584 = !{i64 8047}
!585 = !{i64 8048}
!586 = !{i64 8067}
!587 = !{i64 8069}
!588 = !{i64 8081}
!589 = !{i64 8089}
!590 = !{i64 8092}
!591 = !{i64 8102}
!592 = !{i64 8103}
!593 = !{i64 8125}
!594 = !{i64 8133}
!595 = !{i64 8141}
!596 = !{i64 8127}
!597 = !{i64 8151}
!598 = !{i64 8159}
!599 = !{i64 8167}
!600 = !{i64 8172}
!601 = !{i64 8174}
!602 = !{i64 8176}
!603 = !{i64 8179}
!604 = !{i64 8183}
!605 = !{i64 8188}
!606 = !{i64 8190}
!607 = !{i64 8192}
!608 = !{i64 8199}
!609 = !{i64 8201}
!610 = !{i64 8205}
!611 = !{i64 8225}
!612 = !{i64 8231}
!613 = !{i64 8232}
!614 = !{i64 8240}
!615 = !{i64 8248}
!616 = !{i64 8249}
!617 = !{i64 8257}
!618 = !{i64 8265}
!619 = !{i64 8266}
!620 = !{i64 8315}
!621 = !{i64 8323}
!622 = !{i64 8324}
!623 = !{i64 8332}
!624 = !{i64 8338}
!625 = !{i64 8348}
!626 = !{i64 8376}
!627 = !{i64 8383}
!628 = !{i64 8384}
!629 = !{i64 8392}
!630 = !{i64 8400}
!631 = !{i64 8401}
!632 = !{i64 8409}
!633 = !{i64 8417}
!634 = !{i64 8418}
!635 = !{i64 8426}
!636 = !{i64 8437}
!637 = !{i64 8438}
!638 = !{i64 8470}
!639 = !{i64 8477}
!640 = !{i64 8478}
!641 = !{i64 8487}
!642 = !{i64 8504}
!643 = !{i64 8509}
!644 = !{i64 8514}
!645 = !{i64 8519}
!646 = !{i64 8530}
!647 = !{i64 8536}
!648 = !{i64 8539}
!649 = !{i64 8544}
!650 = !{i64 8548}
!651 = !{i64 8559}
!652 = !{i64 8565}
!653 = !{i64 8568}
!654 = !{i64 8594}
!655 = !{i64 8600}
!656 = !{i64 8603}
!657 = !{i64 8609}
!658 = !{i64 8628}
!659 = !{i64 8639}
!660 = !{i64 8648}
