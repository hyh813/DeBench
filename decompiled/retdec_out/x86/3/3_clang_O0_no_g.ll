source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

@global_var_3e8 = constant [6 x i8] c"emcmp\00"
@global_var_2ab4 = local_unnamed_addr constant i32 5252
@global_var_5034 = local_unnamed_addr constant i32 201521155
@global_var_4fa4 = local_unnamed_addr constant i32 222429829
@global_var_4f14 = constant i32 222429829
@global_var_4c78 = constant i32 28
@global_var_4c48 = constant i32 135151872
@global_var_4c25 = constant i32 0
@global_var_4bd5 = constant i32 2013265923
@global_var_4b76 = local_unnamed_addr constant i32 42272782
@global_var_4b38 = constant i32 67914754
@global_var_4b06 = local_unnamed_addr constant i32 1090519040
@global_var_260 = global i32 0
@global_var_4ad8 = constant i32* @global_var_260
@global_var_4ab8 = constant i32 -12344
@global_var_4a98 = constant i32 167
@global_var_4a78 = constant i32 135151872
@global_var_4a58 = constant i32 222429829
@global_var_4a38 = constant i32 58934277
@global_var_4a18 = constant i32 201432067
@global_var_49f4 = constant i32 206963205
@global_var_49a5 = constant i32 -1660944438
@global_var_4958 = constant i32 4
@global_var_4904 = local_unnamed_addr constant i32 -13844
@global_var_48d7 = constant i32 0
@global_var_4894 = constant i32 28
@global_var_45e4 = local_unnamed_addr constant [11 x i8] c"L2-03: %c\0A\00"
@global_var_4564 = local_unnamed_addr constant [21 x i8] c"01 (tls_access): %d\0A\00"
@global_var_44e3 = local_unnamed_addr constant [17 x i8] c"ile_static): %d\0A\00"
@global_var_4463 = local_unnamed_addr constant [11 x i8] c"data): %d\0A\00"
@global_var_43b4 = local_unnamed_addr constant [17 x i8] c"ray_access): %d\0A\00"
@global_var_4344 = local_unnamed_addr constant i32 -461274906
@global_var_4231 = constant [22 x i8] c"inked_list_heap): %d\0A\00"
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

define void @function_10b0(i32* %src, i32* %dest, i32 %n) local_unnamed_addr {
dec_label_pc_10b0:
  call void @bcopy(i32* %src, i32* %dest, i32 %n), !insn.addr !11
  ret void, !insn.addr !11
}

define i32 @function_10c0(i32 %pid, i32* %stat_loc, i32 %options) local_unnamed_addr {
dec_label_pc_10c0:
  %0 = call i32 @waitpid(i32 %pid, i32* %stat_loc, i32 %options), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define i32* @function_10d0(i32* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_10d0:
  %0 = call i32* @realloc(i32* %ptr, i32 %size), !insn.addr !13
  ret i32* %0, !insn.addr !13
}

define i32* @function_10e0(i32 %size) local_unnamed_addr {
dec_label_pc_10e0:
  %0 = call i32* @malloc(i32 %size), !insn.addr !14
  ret i32* %0, !insn.addr !14
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
  %5 = add i32 %1, 24228, !insn.addr !21
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
  %3 = add i32 %1, 24347, !insn.addr !27
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
  %3 = add i32 %1, 24195, !insn.addr !33
  %4 = inttoptr i32 %3 to i8*, !insn.addr !33
  %5 = load i8, i8* %4, align 1, !insn.addr !33
  %6 = icmp eq i8 %5, 0, !insn.addr !33
  %7 = icmp eq i1 %6, false, !insn.addr !34
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !34
  br i1 %7, label %dec_label_pc_1292, label %dec_label_pc_1231, !insn.addr !34

dec_label_pc_1231:                                ; preds = %dec_label_pc_1210
  %8 = add i32 %1, 24019, !insn.addr !35
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
dec_label_pc_12c0:
  %0 = mul i32 %arg1, 2, !insn.addr !46
  %1 = add i32 %0, 10, !insn.addr !47
  ret i32 %1, !insn.addr !48
}

define i32 @local_array(i32 %arg1) local_unnamed_addr {
dec_label_pc_12f0:
  %0 = alloca i32
  %storemerge1.reg2mem = alloca i32, !insn.addr !49
  %1 = load i32, i32* %0
  %stack_var_-4 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !50
  %3 = add i32 %2, -40, !insn.addr !51
  store i32 0, i32* %storemerge1.reg2mem
  br label %dec_label_pc_130a

dec_label_pc_130a:                                ; preds = %dec_label_pc_12f0, %dec_label_pc_130a
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %4 = mul i32 %storemerge1.reload, %arg1, !insn.addr !52
  %5 = mul i32 %storemerge1.reload, 4, !insn.addr !51
  %6 = add i32 %3, %5, !insn.addr !51
  %7 = inttoptr i32 %6 to i32*, !insn.addr !51
  store i32 %4, i32* %7, align 4, !insn.addr !51
  %8 = add nuw nsw i32 %storemerge1.reload, 1, !insn.addr !53
  %exitcond = icmp eq i32 %8, 10
  store i32 %8, i32* %storemerge1.reg2mem, !insn.addr !54
  br i1 %exitcond, label %dec_label_pc_1326, label %dec_label_pc_130a, !insn.addr !54

dec_label_pc_1326:                                ; preds = %dec_label_pc_130a
  ret i32 %1, !insn.addr !55

; uselistorder directives
  uselistorder i32 %storemerge1.reload, { 0, 2, 1 }
  uselistorder i32* %storemerge1.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_130a, { 1, 0 }
}

define i32 @local_struct(i32 %arg1) local_unnamed_addr {
dec_label_pc_1330:
  %0 = mul i32 %arg1, 3, !insn.addr !56
  ret i32 %0, !insn.addr !57
}

define i32 @address_of_local(i32* %arg1) local_unnamed_addr {
dec_label_pc_1360:
  store i32 42, i32* %arg1, align 4, !insn.addr !58
  ret i32 42, !insn.addr !59
}

define i32 @address_of_array(i32* %arg1) local_unnamed_addr {
dec_label_pc_1380:
  %0 = load i32, i32* %arg1, align 4
  %1 = mul i32 %0, 2, !insn.addr !60
  ret i32 %1, !insn.addr !61
}

define i32 @large_stack_frame() local_unnamed_addr {
dec_label_pc_13b0:
  %0 = alloca i8
  %storemerge2.reg2mem = alloca i32, !insn.addr !62
  %1 = load i8, i8* %0
  %stack_var_-4 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !63
  %3 = add i32 %2, -2048, !insn.addr !64
  store i32 0, i32* %storemerge2.reg2mem
  br label %dec_label_pc_13d3

dec_label_pc_13d3:                                ; preds = %dec_label_pc_13b0, %dec_label_pc_13d3
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %4 = trunc i32 %storemerge2.reload to i8, !insn.addr !64
  %5 = add i32 %3, %storemerge2.reload, !insn.addr !64
  %6 = inttoptr i32 %5 to i8*, !insn.addr !64
  store i8 %4, i8* %6, align 1, !insn.addr !64
  %7 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !65
  %exitcond = icmp eq i32 %7, 2048
  store i32 %7, i32* %storemerge2.reg2mem, !insn.addr !66
  br i1 %exitcond, label %dec_label_pc_1401, label %dec_label_pc_13d3, !insn.addr !66

dec_label_pc_1401:                                ; preds = %dec_label_pc_13d3
  %8 = sext i8 %1 to i32, !insn.addr !67
  ret i32 %8, !insn.addr !68

; uselistorder directives
  uselistorder i32 %storemerge2.reload, { 0, 2, 1 }
  uselistorder i32* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_13d3, { 1, 0 }
}

define i32 @vla_stack(i32 %arg1) local_unnamed_addr {
dec_label_pc_1410:
  %storemerge1.reg2mem = alloca i32, !insn.addr !69
  %storemerge3.reg2mem = alloca i32, !insn.addr !69
  %stack_var_-28 = alloca i32, align 4
  %0 = icmp slt i32 %arg1, 1, !insn.addr !70
  %1 = icmp sgt i32 %arg1, ptrtoint ([6 x i8]* @global_var_3e8 to i32), !insn.addr !71
  %or.cond = or i1 %0, %1
  store i32 -1, i32* %storemerge1.reg2mem, !insn.addr !70
  br i1 %or.cond, label %dec_label_pc_14a5, label %dec_label_pc_146d.lr.ph, !insn.addr !70

dec_label_pc_146d.lr.ph:                          ; preds = %dec_label_pc_1410
  %2 = mul i32 %arg1, 4, !insn.addr !72
  %3 = add i32 %2, 15, !insn.addr !72
  %4 = and i32 %3, -16, !insn.addr !73
  %5 = ptrtoint i32* %stack_var_-28 to i32, !insn.addr !74
  %6 = sub i32 %5, %4, !insn.addr !75
  store i32 0, i32* %storemerge3.reg2mem
  br label %dec_label_pc_146d

dec_label_pc_146d:                                ; preds = %dec_label_pc_146d, %dec_label_pc_146d.lr.ph
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %7 = mul i32 %storemerge3.reload, 2, !insn.addr !76
  %8 = mul i32 %storemerge3.reload, 4, !insn.addr !77
  %9 = add i32 %8, %6, !insn.addr !77
  %10 = inttoptr i32 %9 to i32*, !insn.addr !77
  store i32 %7, i32* %10, align 4, !insn.addr !77
  %11 = add nuw nsw i32 %storemerge3.reload, 1, !insn.addr !78
  %exitcond = icmp eq i32 %11, %arg1
  store i32 %11, i32* %storemerge3.reg2mem, !insn.addr !79
  br i1 %exitcond, label %dec_label_pc_148a, label %dec_label_pc_146d, !insn.addr !79

dec_label_pc_148a:                                ; preds = %dec_label_pc_146d
  %12 = ashr i32 %arg1, 31, !insn.addr !80
  %13 = zext i32 %arg1 to i64, !insn.addr !81
  %14 = zext i32 %12 to i64, !insn.addr !81
  %15 = mul i64 %14, 4294967296, !insn.addr !81
  %16 = or i64 %15, %13, !insn.addr !81
  %17 = sdiv i64 %16, 2, !insn.addr !81
  %18 = trunc i64 %17 to i32, !insn.addr !81
  %19 = mul i32 %18, 4, !insn.addr !82
  %20 = add i32 %6, %19, !insn.addr !82
  %21 = inttoptr i32 %20 to i32*, !insn.addr !82
  %22 = load i32, i32* %21, align 4, !insn.addr !82
  store i32 %22, i32* %storemerge1.reg2mem, !insn.addr !83
  br label %dec_label_pc_14a5, !insn.addr !83

dec_label_pc_14a5:                                ; preds = %dec_label_pc_1410, %dec_label_pc_148a
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  ret i32 %storemerge1.reload, !insn.addr !84

; uselistorder directives
  uselistorder i32 %storemerge3.reload, { 0, 2, 1 }
  uselistorder i32* %storemerge3.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge1.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg1, { 3, 2, 1, 0, 4, 5 }
  uselistorder label %dec_label_pc_14a5, { 1, 0 }
}

define i32 @alloca_usage(i32 %arg1) local_unnamed_addr {
dec_label_pc_14b0:
  %storemerge2.reg2mem = alloca i32, !insn.addr !85
  %storemerge.off03.reg2mem = alloca i32, !insn.addr !85
  %stack_var_-28 = alloca i32, align 4
  %0 = icmp eq i32 %arg1, 0, !insn.addr !86
  %1 = icmp slt i32 %arg1, 0, !insn.addr !86
  %2 = icmp eq i1 %1, false, !insn.addr !87
  %3 = icmp eq i1 %0, false, !insn.addr !87
  %4 = icmp eq i1 %2, %3, !insn.addr !87
  store i32 -1, i32* %storemerge2.reg2mem, !insn.addr !87
  br i1 %4, label %dec_label_pc_14cf, label %dec_label_pc_152f, !insn.addr !87

dec_label_pc_14cf:                                ; preds = %dec_label_pc_14b0
  %5 = mul i32 %arg1, 4, !insn.addr !88
  %6 = add i32 %5, 15, !insn.addr !88
  %7 = and i32 %6, -16, !insn.addr !89
  %8 = ptrtoint i32* %stack_var_-28 to i32, !insn.addr !90
  %9 = sub i32 %8, %7, !insn.addr !91
  %10 = icmp sgt i32 %arg1, 0, !insn.addr !92
  store i32 0, i32* %storemerge.off03.reg2mem, !insn.addr !92
  br i1 %10, label %dec_label_pc_14f8, label %dec_label_pc_1513, !insn.addr !92

dec_label_pc_14f8:                                ; preds = %dec_label_pc_14cf, %dec_label_pc_14f8
  %storemerge.off03.reload = load i32, i32* %storemerge.off03.reg2mem
  %11 = mul i32 %storemerge.off03.reload, 3, !insn.addr !93
  %12 = mul i32 %storemerge.off03.reload, 4, !insn.addr !94
  %13 = add i32 %12, %9, !insn.addr !94
  %14 = inttoptr i32 %13 to i32*, !insn.addr !94
  store i32 %11, i32* %14, align 4, !insn.addr !94
  %15 = add nuw nsw i32 %storemerge.off03.reload, 1, !insn.addr !95
  %exitcond = icmp eq i32 %15, %arg1
  store i32 %15, i32* %storemerge.off03.reg2mem, !insn.addr !92
  br i1 %exitcond, label %dec_label_pc_1513, label %dec_label_pc_14f8, !insn.addr !92

dec_label_pc_1513:                                ; preds = %dec_label_pc_14f8, %dec_label_pc_14cf
  %16 = ashr i32 %arg1, 31, !insn.addr !96
  %17 = zext i32 %arg1 to i64, !insn.addr !97
  %18 = zext i32 %16 to i64, !insn.addr !97
  %19 = mul i64 %18, 4294967296, !insn.addr !97
  %20 = or i64 %19, %17, !insn.addr !97
  %21 = sdiv i64 %20, 2, !insn.addr !97
  %22 = trunc i64 %21 to i32, !insn.addr !97
  %23 = mul i32 %22, 4, !insn.addr !98
  %24 = add i32 %9, %23, !insn.addr !98
  %25 = inttoptr i32 %24 to i32*, !insn.addr !98
  %26 = load i32, i32* %25, align 4, !insn.addr !98
  store i32 %26, i32* %storemerge2.reg2mem, !insn.addr !99
  br label %dec_label_pc_152f, !insn.addr !99

dec_label_pc_152f:                                ; preds = %dec_label_pc_14b0, %dec_label_pc_1513
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  ret i32 %storemerge2.reload, !insn.addr !100

; uselistorder directives
  uselistorder i32 %storemerge.off03.reload, { 1, 2, 0 }
  uselistorder i32* %storemerge.off03.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge2.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg1, { 4, 3, 1, 2, 0, 6, 5 }
  uselistorder label %dec_label_pc_152f, { 1, 0 }
  uselistorder label %dec_label_pc_14f8, { 1, 0 }
}

define i32 @stack_alias(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_1540:
  ret i32 20, !insn.addr !101
}

define i32 @test_stack_memory(i32 %arg1) local_unnamed_addr {
dec_label_pc_15a0:
  %0 = alloca i32
  %stack_var_-56 = alloca i32, align 4
  %stack_var_-52 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = add i32 %1, 10844, !insn.addr !102
  %3 = inttoptr i32 %2 to i8*, !insn.addr !103
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !104
  %5 = call i32 @local_vars(i32 5), !insn.addr !105
  %6 = add i32 %1, 10875, !insn.addr !106
  %7 = inttoptr i32 %6 to i8*, !insn.addr !107
  %8 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !108
  %9 = call i32 @local_array(i32 2), !insn.addr !109
  %10 = add i32 %1, 10903, !insn.addr !110
  %11 = inttoptr i32 %10 to i8*, !insn.addr !111
  %12 = call i32 (i8*, ...) @printf(i8* %11), !insn.addr !112
  %13 = call i32 @local_struct(i32 5), !insn.addr !113
  %14 = add i32 %1, 10932, !insn.addr !114
  %15 = inttoptr i32 %14 to i8*, !insn.addr !115
  %16 = call i32 (i8*, ...) @printf(i8* %15), !insn.addr !116
  %17 = call i32 @address_of_local(i32* nonnull %stack_var_-12), !insn.addr !117
  %18 = add i32 %1, 10962, !insn.addr !118
  %19 = inttoptr i32 %18 to i8*, !insn.addr !119
  %20 = call i32 (i8*, ...) @printf(i8* %19), !insn.addr !120
  %21 = call i32* @memset(i32* nonnull %stack_var_-52, i32 0, i32 40), !insn.addr !121
  store i32 1, i32* %stack_var_-52, align 4, !insn.addr !122
  %22 = call i32 @address_of_array(i32* nonnull %stack_var_-52), !insn.addr !123
  %23 = add i32 %1, 10996, !insn.addr !124
  %24 = inttoptr i32 %23 to i8*, !insn.addr !125
  %25 = call i32 (i8*, ...) @printf(i8* %24), !insn.addr !126
  %26 = call i32 @large_stack_frame(), !insn.addr !127
  %27 = add i32 %1, 11030, !insn.addr !128
  %28 = inttoptr i32 %27 to i8*, !insn.addr !129
  %29 = call i32 (i8*, ...) @printf(i8* %28), !insn.addr !130
  %30 = call i32 @vla_stack(i32 10), !insn.addr !131
  %31 = add i32 %1, 11065, !insn.addr !132
  %32 = inttoptr i32 %31 to i8*, !insn.addr !133
  %33 = call i32 (i8*, ...) @printf(i8* %32), !insn.addr !134
  %34 = call i32 @alloca_usage(i32 10), !insn.addr !135
  %35 = add i32 %1, 11092, !insn.addr !136
  %36 = inttoptr i32 %35 to i8*, !insn.addr !137
  %37 = call i32 (i8*, ...) @printf(i8* %36), !insn.addr !138
  store i32 0, i32* %stack_var_-56, align 4, !insn.addr !139
  %38 = call i32 @stack_alias(i32* nonnull %stack_var_-56, i32* nonnull %stack_var_-56), !insn.addr !140
  %39 = add i32 %1, 11122, !insn.addr !141
  %40 = inttoptr i32 %39 to i8*, !insn.addr !142
  %41 = call i32 (i8*, ...) @printf(i8* %40), !insn.addr !143
  ret i32 %41, !insn.addr !144

; uselistorder directives
  uselistorder i32* %stack_var_-52, { 0, 2, 1 }
  uselistorder i32* %stack_var_-56, { 1, 0, 2 }
}

define i32 @heap_basic(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1750:
  %storemerge1.reg2mem = alloca i32, !insn.addr !145
  %storemerge2.reg2mem = alloca i32, !insn.addr !145
  %0 = mul i32 %arg2, 4, !insn.addr !146
  %1 = call i32* @malloc(i32 %0), !insn.addr !147
  %2 = icmp eq i32* %1, null, !insn.addr !148
  %3 = icmp eq i1 %2, false, !insn.addr !149
  store i32 -1, i32* %storemerge1.reg2mem, !insn.addr !149
  br i1 %3, label %dec_label_pc_1797.preheader, label %dec_label_pc_17f0, !insn.addr !149

dec_label_pc_1797.preheader:                      ; preds = %dec_label_pc_1750
  %4 = ptrtoint i32* %1 to i32, !insn.addr !147
  %5 = icmp sgt i32 %arg2, 0, !insn.addr !150
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !150
  br i1 %5, label %dec_label_pc_17a3, label %dec_label_pc_17c0, !insn.addr !150

dec_label_pc_17a3:                                ; preds = %dec_label_pc_1797.preheader, %dec_label_pc_17a3
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %6 = mul i32 %storemerge2.reload, 2, !insn.addr !151
  %7 = mul i32 %storemerge2.reload, 4, !insn.addr !152
  %8 = add i32 %7, %4, !insn.addr !152
  %9 = inttoptr i32 %8 to i32*, !insn.addr !152
  store i32 %6, i32* %9, align 4, !insn.addr !152
  %10 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !153
  %exitcond = icmp eq i32 %10, %arg2
  store i32 %10, i32* %storemerge2.reg2mem, !insn.addr !150
  br i1 %exitcond, label %dec_label_pc_17c0, label %dec_label_pc_17a3, !insn.addr !150

dec_label_pc_17c0:                                ; preds = %dec_label_pc_17a3, %dec_label_pc_1797.preheader
  %11 = ashr i32 %arg2, 31, !insn.addr !154
  %12 = zext i32 %arg2 to i64, !insn.addr !155
  %13 = zext i32 %11 to i64, !insn.addr !155
  %14 = mul i64 %13, 4294967296, !insn.addr !155
  %15 = or i64 %14, %12, !insn.addr !155
  %16 = sdiv i64 %15, 2, !insn.addr !155
  %17 = trunc i64 %16 to i32, !insn.addr !155
  %18 = mul i32 %17, 4, !insn.addr !156
  %19 = add i32 %18, %4, !insn.addr !156
  %20 = inttoptr i32 %19 to i32*, !insn.addr !156
  %21 = load i32, i32* %20, align 4, !insn.addr !156
  call void @free(i32* %1), !insn.addr !157
  store i32 %21, i32* %storemerge1.reg2mem, !insn.addr !158
  br label %dec_label_pc_17f0, !insn.addr !158

dec_label_pc_17f0:                                ; preds = %dec_label_pc_1750, %dec_label_pc_17c0
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  ret i32 %storemerge1.reload, !insn.addr !159

; uselistorder directives
  uselistorder i32 %storemerge2.reload, { 0, 2, 1 }
  uselistorder i32* %1, { 0, 2, 1 }
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge1.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg2, { 4, 3, 1, 2, 0 }
  uselistorder label %dec_label_pc_17f0, { 1, 0 }
  uselistorder label %dec_label_pc_17a3, { 1, 0 }
}

define i32 @heap_calloc(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1800:
  %storemerge1.reg2mem = alloca i32, !insn.addr !160
  %stack_var_-20.0.lcssa.reg2mem = alloca i32, !insn.addr !160
  %stack_var_-20.02.reg2mem = alloca i32, !insn.addr !160
  %storemerge3.reg2mem = alloca i32, !insn.addr !160
  %0 = call i32* @calloc(i32 %arg2, i32 4), !insn.addr !161
  %1 = icmp eq i32* %0, null, !insn.addr !162
  %2 = icmp eq i1 %1, false, !insn.addr !163
  store i32 -1, i32* %storemerge1.reg2mem, !insn.addr !163
  br i1 %2, label %dec_label_pc_1853.preheader, label %dec_label_pc_1890, !insn.addr !163

dec_label_pc_1853.preheader:                      ; preds = %dec_label_pc_1800
  %3 = ptrtoint i32* %0 to i32, !insn.addr !161
  %4 = icmp sgt i32 %arg2, 0, !insn.addr !164
  store i32 0, i32* %storemerge3.reg2mem, !insn.addr !164
  store i32 0, i32* %stack_var_-20.02.reg2mem, !insn.addr !164
  store i32 0, i32* %stack_var_-20.0.lcssa.reg2mem, !insn.addr !164
  br i1 %4, label %dec_label_pc_185f, label %dec_label_pc_187c, !insn.addr !164

dec_label_pc_185f:                                ; preds = %dec_label_pc_1853.preheader, %dec_label_pc_185f
  %stack_var_-20.02.reload = load i32, i32* %stack_var_-20.02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %5 = mul i32 %storemerge3.reload, 4, !insn.addr !165
  %6 = add i32 %5, %3, !insn.addr !165
  %7 = inttoptr i32 %6 to i32*, !insn.addr !165
  %8 = load i32, i32* %7, align 4, !insn.addr !165
  %9 = add i32 %8, %stack_var_-20.02.reload, !insn.addr !166
  %10 = add nuw nsw i32 %storemerge3.reload, 1, !insn.addr !167
  %exitcond = icmp eq i32 %10, %arg2
  store i32 %10, i32* %storemerge3.reg2mem, !insn.addr !164
  store i32 %9, i32* %stack_var_-20.02.reg2mem, !insn.addr !164
  store i32 %9, i32* %stack_var_-20.0.lcssa.reg2mem, !insn.addr !164
  br i1 %exitcond, label %dec_label_pc_187c, label %dec_label_pc_185f, !insn.addr !164

dec_label_pc_187c:                                ; preds = %dec_label_pc_185f, %dec_label_pc_1853.preheader
  %stack_var_-20.0.lcssa.reload = load i32, i32* %stack_var_-20.0.lcssa.reg2mem
  call void @free(i32* %0), !insn.addr !168
  store i32 %stack_var_-20.0.lcssa.reload, i32* %storemerge1.reg2mem, !insn.addr !169
  br label %dec_label_pc_1890, !insn.addr !169

dec_label_pc_1890:                                ; preds = %dec_label_pc_1800, %dec_label_pc_187c
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  ret i32 %storemerge1.reload, !insn.addr !170

; uselistorder directives
  uselistorder i32* %0, { 0, 2, 1 }
  uselistorder i32* %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-20.02.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge1.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1890, { 1, 0 }
  uselistorder label %dec_label_pc_185f, { 1, 0 }
}

define i32 @heap_realloc(i32 %arg1) local_unnamed_addr {
dec_label_pc_18a0:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !171
  %storemerge3.reg2mem = alloca i32, !insn.addr !171
  %storemerge2.off04.reg2mem = alloca i32, !insn.addr !171
  %storemerge5.reg2mem = alloca i32, !insn.addr !171
  %0 = call i32* @malloc(i32 20), !insn.addr !172
  %1 = ptrtoint i32* %0 to i32, !insn.addr !172
  %2 = icmp eq i32* %0, null, !insn.addr !173
  %3 = icmp eq i1 %2, false, !insn.addr !174
  store i32 0, i32* %storemerge5.reg2mem, !insn.addr !174
  store i32 -1, i32* %stack_var_-12.0.reg2mem, !insn.addr !174
  br i1 %3, label %dec_label_pc_18ec, label %dec_label_pc_19c5, !insn.addr !174

dec_label_pc_18ec:                                ; preds = %dec_label_pc_18a0, %dec_label_pc_18ec
  %storemerge5.reload = load i32, i32* %storemerge5.reg2mem
  %4 = add nuw nsw i32 %storemerge5.reload, 1, !insn.addr !175
  %5 = mul i32 %storemerge5.reload, 4, !insn.addr !176
  %6 = add i32 %5, %1, !insn.addr !176
  %7 = inttoptr i32 %6 to i32*, !insn.addr !176
  store i32 %4, i32* %7, align 4, !insn.addr !176
  %exitcond6 = icmp eq i32 %4, 5
  store i32 %4, i32* %storemerge5.reg2mem, !insn.addr !177
  br i1 %exitcond6, label %dec_label_pc_1909, label %dec_label_pc_18ec, !insn.addr !177

dec_label_pc_1909:                                ; preds = %dec_label_pc_18ec
  %8 = add i32 %1, 8, !insn.addr !178
  %9 = inttoptr i32 %8 to i32*, !insn.addr !178
  %10 = load i32, i32* %9, align 4, !insn.addr !178
  %11 = call i32* @realloc(i32* %0, i32 40), !insn.addr !179
  %12 = ptrtoint i32* %11 to i32, !insn.addr !179
  %13 = icmp eq i32* %11, null, !insn.addr !180
  %14 = icmp eq i1 %13, false, !insn.addr !181
  store i32 5, i32* %storemerge2.off04.reg2mem, !insn.addr !181
  br i1 %14, label %dec_label_pc_1966, label %dec_label_pc_1935, !insn.addr !181

dec_label_pc_1935:                                ; preds = %dec_label_pc_1909
  call void @free(i32* %0), !insn.addr !182
  store i32 -2, i32* %stack_var_-12.0.reg2mem, !insn.addr !183
  br label %dec_label_pc_19c5, !insn.addr !183

dec_label_pc_1966:                                ; preds = %dec_label_pc_1909, %dec_label_pc_1966
  %storemerge2.off04.reload = load i32, i32* %storemerge2.off04.reg2mem
  %15 = mul nuw nsw i32 %storemerge2.off04.reload, 10, !insn.addr !184
  %16 = mul i32 %storemerge2.off04.reload, 4, !insn.addr !185
  %17 = add i32 %16, %12, !insn.addr !185
  %18 = inttoptr i32 %17 to i32*, !insn.addr !185
  store i32 %15, i32* %18, align 4, !insn.addr !185
  %19 = add nuw nsw i32 %storemerge2.off04.reload, 1, !insn.addr !186
  %exitcond = icmp eq i32 %19, 10
  store i32 %19, i32* %storemerge2.off04.reg2mem, !insn.addr !187
  br i1 %exitcond, label %dec_label_pc_1981, label %dec_label_pc_1966, !insn.addr !187

dec_label_pc_1981:                                ; preds = %dec_label_pc_1966
  %20 = add i32 %12, 8, !insn.addr !188
  %21 = inttoptr i32 %20 to i32*, !insn.addr !188
  %22 = load i32, i32* %21, align 4, !insn.addr !188
  %23 = icmp eq i32 %22, %10, !insn.addr !189
  %24 = icmp eq i1 %23, false, !insn.addr !190
  store i32 -3, i32* %storemerge3.reg2mem, !insn.addr !190
  br i1 %24, label %dec_label_pc_19ab, label %dec_label_pc_1990, !insn.addr !190

dec_label_pc_1990:                                ; preds = %dec_label_pc_1981
  %25 = add i32 %12, 20, !insn.addr !191
  %26 = inttoptr i32 %25 to i32*, !insn.addr !191
  %27 = load i32, i32* %26, align 4, !insn.addr !191
  store i32 %27, i32* %storemerge3.reg2mem, !insn.addr !192
  br label %dec_label_pc_19ab, !insn.addr !192

dec_label_pc_19ab:                                ; preds = %dec_label_pc_1981, %dec_label_pc_1990
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  call void @free(i32* %11), !insn.addr !193
  store i32 %storemerge3.reload, i32* %stack_var_-12.0.reg2mem, !insn.addr !194
  br label %dec_label_pc_19c5, !insn.addr !194

dec_label_pc_19c5:                                ; preds = %dec_label_pc_18a0, %dec_label_pc_19ab, %dec_label_pc_1935
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !195

; uselistorder directives
  uselistorder i32 %storemerge2.off04.reload, { 1, 2, 0 }
  uselistorder i32 %12, { 2, 1, 0 }
  uselistorder i32 %storemerge5.reload, { 1, 0 }
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32* %storemerge5.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge2.off04.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge3.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_19c5, { 1, 2, 0 }
  uselistorder label %dec_label_pc_19ab, { 1, 0 }
  uselistorder label %dec_label_pc_1966, { 1, 0 }
  uselistorder label %dec_label_pc_18ec, { 1, 0 }
}

define i32 @heap_array(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_19d0:
  %storemerge2.reg2mem = alloca i32, !insn.addr !196
  %storemerge.off03.reg2mem = alloca i32, !insn.addr !196
  %0 = mul i32 %arg2, 4, !insn.addr !197
  %1 = call i32* @malloc(i32 %0), !insn.addr !198
  %2 = icmp eq i32* %1, null, !insn.addr !199
  %3 = icmp eq i1 %2, false, !insn.addr !200
  store i32 -1, i32* %storemerge2.reg2mem, !insn.addr !200
  br i1 %3, label %dec_label_pc_1a17.preheader, label %dec_label_pc_1a6e, !insn.addr !200

dec_label_pc_1a17.preheader:                      ; preds = %dec_label_pc_19d0
  %4 = ptrtoint i32* %1 to i32, !insn.addr !198
  %5 = icmp sgt i32 %arg2, 0, !insn.addr !201
  store i32 0, i32* %storemerge.off03.reg2mem, !insn.addr !201
  br i1 %5, label %dec_label_pc_1a23, label %dec_label_pc_1a3e, !insn.addr !201

dec_label_pc_1a23:                                ; preds = %dec_label_pc_1a17.preheader, %dec_label_pc_1a23
  %storemerge.off03.reload = load i32, i32* %storemerge.off03.reg2mem
  %6 = mul i32 %storemerge.off03.reload, 3, !insn.addr !202
  %7 = mul i32 %storemerge.off03.reload, 4, !insn.addr !203
  %8 = add i32 %7, %4, !insn.addr !203
  %9 = inttoptr i32 %8 to i32*, !insn.addr !203
  store i32 %6, i32* %9, align 4, !insn.addr !203
  %10 = add nuw nsw i32 %storemerge.off03.reload, 1, !insn.addr !204
  %exitcond = icmp eq i32 %10, %arg2
  store i32 %10, i32* %storemerge.off03.reg2mem, !insn.addr !201
  br i1 %exitcond, label %dec_label_pc_1a3e, label %dec_label_pc_1a23, !insn.addr !201

dec_label_pc_1a3e:                                ; preds = %dec_label_pc_1a23, %dec_label_pc_1a17.preheader
  %11 = ashr i32 %arg2, 31, !insn.addr !205
  %12 = zext i32 %arg2 to i64, !insn.addr !206
  %13 = zext i32 %11 to i64, !insn.addr !206
  %14 = mul i64 %13, 4294967296, !insn.addr !206
  %15 = or i64 %14, %12, !insn.addr !206
  %16 = sdiv i64 %15, 2, !insn.addr !206
  %17 = trunc i64 %16 to i32, !insn.addr !206
  %18 = mul i32 %17, 4, !insn.addr !207
  %19 = add i32 %18, %4, !insn.addr !207
  %20 = inttoptr i32 %19 to i32*, !insn.addr !207
  %21 = load i32, i32* %20, align 4, !insn.addr !207
  call void @free(i32* %1), !insn.addr !208
  store i32 %21, i32* %storemerge2.reg2mem, !insn.addr !209
  br label %dec_label_pc_1a6e, !insn.addr !209

dec_label_pc_1a6e:                                ; preds = %dec_label_pc_19d0, %dec_label_pc_1a3e
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  ret i32 %storemerge2.reload, !insn.addr !210

; uselistorder directives
  uselistorder i32 %storemerge.off03.reload, { 1, 2, 0 }
  uselistorder i32* %1, { 0, 2, 1 }
  uselistorder i32* %storemerge.off03.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge2.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg2, { 4, 3, 1, 2, 0 }
  uselistorder label %dec_label_pc_1a6e, { 1, 0 }
  uselistorder label %dec_label_pc_1a23, { 1, 0 }
}

define i32 @heap_struct(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1a80:
  %storemerge.reg2mem = alloca i32, !insn.addr !211
  %0 = call i32* @malloc(i32 8), !insn.addr !212
  %1 = icmp eq i32* %0, null, !insn.addr !213
  %2 = icmp eq i1 %1, false, !insn.addr !214
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !214
  br i1 %2, label %dec_label_pc_1abe, label %dec_label_pc_1af4, !insn.addr !214

dec_label_pc_1abe:                                ; preds = %dec_label_pc_1a80
  %3 = ptrtoint i32* %0 to i32, !insn.addr !212
  store i32 %arg2, i32* %0, align 4, !insn.addr !215
  %4 = mul i32 %arg2, 2, !insn.addr !216
  %5 = add i32 %3, 4, !insn.addr !217
  %6 = inttoptr i32 %5 to i32*, !insn.addr !217
  store i32 %4, i32* %6, align 4, !insn.addr !217
  %7 = load i32, i32* %0, align 4, !insn.addr !218
  %8 = add i32 %7, %4, !insn.addr !219
  call void @free(i32* %0), !insn.addr !220
  store i32 %8, i32* %storemerge.reg2mem, !insn.addr !221
  br label %dec_label_pc_1af4, !insn.addr !221

dec_label_pc_1af4:                                ; preds = %dec_label_pc_1a80, %dec_label_pc_1abe
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !222

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32* %0, { 0, 1, 2, 4, 3 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1af4, { 1, 0 }
}

define i32 @heap_nested(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1b00:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !223
  %0 = call i32* @malloc(i32 8), !insn.addr !224
  %1 = ptrtoint i32* %0 to i32, !insn.addr !224
  %2 = inttoptr i32 %arg2 to i32*, !insn.addr !225
  store i32 %1, i32* %2, align 4, !insn.addr !225
  %3 = icmp eq i32* %0, null, !insn.addr !226
  %4 = icmp eq i1 %3, false, !insn.addr !227
  store i32 -1, i32* %stack_var_-12.0.reg2mem, !insn.addr !227
  br i1 %4, label %dec_label_pc_1b44, label %dec_label_pc_1bb7, !insn.addr !227

dec_label_pc_1b44:                                ; preds = %dec_label_pc_1b00
  store i32 10, i32* %0, align 4, !insn.addr !228
  %5 = call i32* @malloc(i32 8), !insn.addr !229
  %6 = ptrtoint i32* %5 to i32, !insn.addr !229
  %7 = load i32, i32* %2, align 4, !insn.addr !230
  %8 = add i32 %7, 4, !insn.addr !231
  %9 = inttoptr i32 %8 to i32*, !insn.addr !231
  store i32 %6, i32* %9, align 4, !insn.addr !231
  %10 = load i32, i32* %2, align 4, !insn.addr !232
  %11 = add i32 %10, 4, !insn.addr !233
  %12 = inttoptr i32 %11 to i32*, !insn.addr !233
  %13 = load i32, i32* %12, align 4, !insn.addr !233
  %14 = icmp eq i32 %13, 0, !insn.addr !233
  %15 = icmp eq i1 %14, false, !insn.addr !234
  br i1 %15, label %dec_label_pc_1b93, label %dec_label_pc_1b77, !insn.addr !234

dec_label_pc_1b77:                                ; preds = %dec_label_pc_1b44
  %16 = inttoptr i32 %10 to i32*, !insn.addr !235
  call void @free(i32* %16), !insn.addr !235
  store i32 -2, i32* %stack_var_-12.0.reg2mem, !insn.addr !236
  br label %dec_label_pc_1bb7, !insn.addr !236

dec_label_pc_1b93:                                ; preds = %dec_label_pc_1b44
  %17 = inttoptr i32 %13 to i32*, !insn.addr !237
  store i32 20, i32* %17, align 4, !insn.addr !237
  %18 = load i32, i32* %2, align 4, !insn.addr !238
  %19 = add i32 %18, 4, !insn.addr !239
  %20 = inttoptr i32 %19 to i32*, !insn.addr !239
  %21 = load i32, i32* %20, align 4, !insn.addr !239
  %22 = add i32 %21, 4, !insn.addr !240
  %23 = inttoptr i32 %22 to i32*, !insn.addr !240
  store i32 0, i32* %23, align 4, !insn.addr !240
  store i32 0, i32* %stack_var_-12.0.reg2mem, !insn.addr !241
  br label %dec_label_pc_1bb7, !insn.addr !241

dec_label_pc_1bb7:                                ; preds = %dec_label_pc_1b00, %dec_label_pc_1b93, %dec_label_pc_1b77
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !242

; uselistorder directives
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_1bb7, { 1, 2, 0 }
}

define i32 @linked_list_heap(i32 %arg1) local_unnamed_addr {
dec_label_pc_1bc0:
  %storemerge4.reg2mem = alloca i32, !insn.addr !243
  %stack_var_-16.37.reg2mem = alloca i32, !insn.addr !243
  %stack_var_-36.08.reg2mem = alloca i32, !insn.addr !243
  %storemerge39.reg2mem = alloca i32, !insn.addr !243
  %stack_var_-16.2.reg2mem = alloca i32, !insn.addr !243
  %stack_var_-16.110.reg2mem = alloca i32, !insn.addr !243
  %stack_var_-16.011.reg2mem = alloca i32, !insn.addr !243
  %stack_var_-20.012.reg2mem = alloca i32, !insn.addr !243
  %storemerge.off013.reg2mem = alloca i32, !insn.addr !243
  store i32 0, i32* %storemerge.off013.reg2mem
  store i32 0, i32* %stack_var_-20.012.reg2mem
  store i32 0, i32* %stack_var_-16.011.reg2mem
  br label %dec_label_pc_1bf5

dec_label_pc_1cab.preheader:                      ; preds = %dec_label_pc_1c8b
  %0 = icmp eq i32 %stack_var_-16.2.reload, 0
  store i32 %stack_var_-16.2.reload, i32* %storemerge39.reg2mem, !insn.addr !244
  store i32 0, i32* %stack_var_-36.08.reg2mem, !insn.addr !244
  store i32 0, i32* %storemerge4.reg2mem, !insn.addr !244
  br i1 %0, label %dec_label_pc_1d05, label %dec_label_pc_1cb5, !insn.addr !244

dec_label_pc_1bf5:                                ; preds = %dec_label_pc_1bc0, %dec_label_pc_1c8b
  %stack_var_-16.011.reload = load i32, i32* %stack_var_-16.011.reg2mem
  %1 = call i32* @malloc(i32 8), !insn.addr !245
  %2 = icmp eq i32* %1, null, !insn.addr !246
  %3 = icmp eq i1 %2, false, !insn.addr !247
  br i1 %3, label %dec_label_pc_1c4e, label %dec_label_pc_1c16.preheader, !insn.addr !247

dec_label_pc_1c16.preheader:                      ; preds = %dec_label_pc_1bf5
  %4 = icmp eq i32 %stack_var_-16.011.reload, 0, !insn.addr !248
  store i32 %stack_var_-16.011.reload, i32* %stack_var_-16.110.reg2mem, !insn.addr !249
  store i32 -1, i32* %storemerge4.reg2mem, !insn.addr !249
  br i1 %4, label %dec_label_pc_1d05, label %dec_label_pc_1c20, !insn.addr !249

dec_label_pc_1c20:                                ; preds = %dec_label_pc_1c16.preheader, %dec_label_pc_1c20
  %stack_var_-16.110.reload = load i32, i32* %stack_var_-16.110.reg2mem
  %5 = add i32 %stack_var_-16.110.reload, 4, !insn.addr !250
  %6 = inttoptr i32 %5 to i32*, !insn.addr !250
  %7 = load i32, i32* %6, align 4, !insn.addr !250
  %8 = inttoptr i32 %stack_var_-16.110.reload to i32*, !insn.addr !251
  call void @free(i32* %8), !insn.addr !251
  %9 = icmp eq i32 %7, 0, !insn.addr !248
  store i32 %7, i32* %stack_var_-16.110.reg2mem, !insn.addr !249
  store i32 -1, i32* %storemerge4.reg2mem, !insn.addr !249
  br i1 %9, label %dec_label_pc_1d05, label %dec_label_pc_1c20, !insn.addr !249

dec_label_pc_1c4e:                                ; preds = %dec_label_pc_1bf5
  %stack_var_-20.012.reload = load i32, i32* %stack_var_-20.012.reg2mem
  %storemerge.off013.reload = load i32, i32* %storemerge.off013.reg2mem
  %10 = ptrtoint i32* %1 to i32, !insn.addr !245
  %11 = mul nuw nsw i32 %storemerge.off013.reload, 10, !insn.addr !252
  store i32 %11, i32* %1, align 4, !insn.addr !253
  %12 = add i32 %10, 4, !insn.addr !254
  %13 = inttoptr i32 %12 to i32*, !insn.addr !254
  store i32 0, i32* %13, align 4, !insn.addr !254
  %14 = icmp eq i32 %stack_var_-16.011.reload, 0, !insn.addr !255
  %15 = icmp eq i1 %14, false, !insn.addr !256
  store i32 %10, i32* %stack_var_-16.2.reg2mem, !insn.addr !256
  br i1 %15, label %dec_label_pc_1c7c, label %dec_label_pc_1c8b, !insn.addr !256

dec_label_pc_1c7c:                                ; preds = %dec_label_pc_1c4e
  %16 = add i32 %stack_var_-20.012.reload, 4, !insn.addr !257
  %17 = inttoptr i32 %16 to i32*, !insn.addr !257
  store i32 %10, i32* %17, align 4, !insn.addr !257
  store i32 %stack_var_-16.011.reload, i32* %stack_var_-16.2.reg2mem, !insn.addr !258
  br label %dec_label_pc_1c8b, !insn.addr !258

dec_label_pc_1c8b:                                ; preds = %dec_label_pc_1c4e, %dec_label_pc_1c7c
  %stack_var_-16.2.reload = load i32, i32* %stack_var_-16.2.reg2mem
  %18 = add nuw nsw i32 %storemerge.off013.reload, 1, !insn.addr !259
  %19 = icmp ugt i32 %storemerge.off013.reload, 3, !insn.addr !260
  store i32 %18, i32* %storemerge.off013.reg2mem, !insn.addr !260
  store i32 %10, i32* %stack_var_-20.012.reg2mem, !insn.addr !260
  store i32 %stack_var_-16.2.reload, i32* %stack_var_-16.011.reg2mem, !insn.addr !260
  br i1 %19, label %dec_label_pc_1cab.preheader, label %dec_label_pc_1bf5, !insn.addr !260

dec_label_pc_1cb5:                                ; preds = %dec_label_pc_1cab.preheader, %dec_label_pc_1cb5
  %stack_var_-36.08.reload = load i32, i32* %stack_var_-36.08.reg2mem
  %storemerge39.reload = load i32, i32* %storemerge39.reg2mem
  %20 = inttoptr i32 %storemerge39.reload to i32*, !insn.addr !261
  %21 = load i32, i32* %20, align 4, !insn.addr !261
  %22 = add i32 %21, %stack_var_-36.08.reload, !insn.addr !262
  %23 = add i32 %storemerge39.reload, 4, !insn.addr !263
  %24 = inttoptr i32 %23 to i32*, !insn.addr !263
  %25 = load i32, i32* %24, align 4, !insn.addr !263
  %26 = icmp eq i32 %25, 0, !insn.addr !264
  store i32 %25, i32* %storemerge39.reg2mem, !insn.addr !244
  store i32 %22, i32* %stack_var_-36.08.reg2mem, !insn.addr !244
  store i32 %stack_var_-16.2.reload, i32* %stack_var_-16.37.reg2mem, !insn.addr !244
  br i1 %26, label %dec_label_pc_1cdd, label %dec_label_pc_1cb5, !insn.addr !244

dec_label_pc_1cdd:                                ; preds = %dec_label_pc_1cb5, %dec_label_pc_1cdd
  %stack_var_-16.37.reload = load i32, i32* %stack_var_-16.37.reg2mem
  %27 = add i32 %stack_var_-16.37.reload, 4, !insn.addr !265
  %28 = inttoptr i32 %27 to i32*, !insn.addr !265
  %29 = load i32, i32* %28, align 4, !insn.addr !265
  %30 = inttoptr i32 %stack_var_-16.37.reload to i32*, !insn.addr !266
  call void @free(i32* %30), !insn.addr !266
  %31 = icmp eq i32 %29, 0, !insn.addr !267
  store i32 %29, i32* %stack_var_-16.37.reg2mem, !insn.addr !268
  store i32 %22, i32* %storemerge4.reg2mem, !insn.addr !268
  br i1 %31, label %dec_label_pc_1d05, label %dec_label_pc_1cdd, !insn.addr !268

dec_label_pc_1d05:                                ; preds = %dec_label_pc_1c20, %dec_label_pc_1cdd, %dec_label_pc_1cab.preheader, %dec_label_pc_1c16.preheader
  %storemerge4.reload = load i32, i32* %storemerge4.reg2mem
  ret i32 %storemerge4.reload, !insn.addr !269

; uselistorder directives
  uselistorder i32 %storemerge39.reload, { 1, 0 }
  uselistorder i32 %stack_var_-16.2.reload, { 0, 3, 2, 1 }
  uselistorder i32 %10, { 1, 2, 0, 3 }
  uselistorder i32 %storemerge.off013.reload, { 2, 1, 0 }
  uselistorder i32* %1, { 0, 2, 1 }
  uselistorder i32 %stack_var_-16.011.reload, { 0, 2, 1, 3 }
  uselistorder i32* %storemerge.off013.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-20.012.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-16.011.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-16.110.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-16.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %storemerge39.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-36.08.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-16.37.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge4.reg2mem, { 0, 2, 1, 4, 3 }
  uselistorder label %dec_label_pc_1d05, { 1, 0, 3, 2 }
  uselistorder label %dec_label_pc_1cdd, { 1, 0 }
  uselistorder label %dec_label_pc_1cb5, { 1, 0 }
  uselistorder label %dec_label_pc_1c8b, { 1, 0 }
  uselistorder label %dec_label_pc_1c20, { 1, 0 }
  uselistorder label %dec_label_pc_1bf5, { 1, 0 }
}

define i32 @create_tree_node(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1d10:
  %0 = call i32* @malloc(i32 12), !insn.addr !270
  %1 = ptrtoint i32* %0 to i32, !insn.addr !270
  %2 = icmp eq i32* %0, null, !insn.addr !271
  br i1 %2, label %dec_label_pc_1d5b, label %dec_label_pc_1d3f, !insn.addr !272

dec_label_pc_1d3f:                                ; preds = %dec_label_pc_1d10
  store i32 %arg2, i32* %0, align 4, !insn.addr !273
  %3 = add i32 %1, 4, !insn.addr !274
  %4 = inttoptr i32 %3 to i32*, !insn.addr !274
  store i32 0, i32* %4, align 4, !insn.addr !274
  %5 = add i32 %1, 8, !insn.addr !275
  %6 = inttoptr i32 %5 to i32*, !insn.addr !275
  store i32 0, i32* %6, align 4, !insn.addr !275
  br label %dec_label_pc_1d5b, !insn.addr !275

dec_label_pc_1d5b:                                ; preds = %dec_label_pc_1d3f, %dec_label_pc_1d10
  ret i32 %1, !insn.addr !276

; uselistorder directives
  uselistorder i32 %1, { 2, 0, 1 }
}

define i32 @tree_heap_traversal(i32 %arg1) local_unnamed_addr {
dec_label_pc_1d70:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !277
  %.reg2mem = alloca i32, !insn.addr !277
  %0 = call i32 @create_tree_node(i32 10, i32 ptrtoint (i32* @0 to i32)), !insn.addr !278
  %1 = icmp eq i32 %0, 0, !insn.addr !279
  %2 = icmp eq i1 %1, false, !insn.addr !280
  store i32 -1, i32* %stack_var_-12.0.reg2mem, !insn.addr !280
  br i1 %2, label %dec_label_pc_1dab, label %dec_label_pc_1e97, !insn.addr !280

dec_label_pc_1dab:                                ; preds = %dec_label_pc_1d70
  %3 = call i32 @create_tree_node(i32 20, i32 %0), !insn.addr !281
  %4 = add i32 %0, 4, !insn.addr !282
  %5 = inttoptr i32 %4 to i32*, !insn.addr !282
  store i32 %3, i32* %5, align 4, !insn.addr !282
  %6 = call i32 @create_tree_node(i32 30, i32 ptrtoint (i32* @0 to i32)), !insn.addr !283
  %7 = add i32 %0, 8, !insn.addr !284
  %8 = inttoptr i32 %7 to i32*, !insn.addr !284
  store i32 %6, i32* %8, align 4, !insn.addr !284
  %9 = load i32, i32* %5, align 4
  %10 = icmp eq i32 %9, 0, !insn.addr !285
  store i32 %6, i32* %.reg2mem, !insn.addr !286
  br i1 %10, label %dec_label_pc_1e11, label %dec_label_pc_1de6, !insn.addr !286

dec_label_pc_1de6:                                ; preds = %dec_label_pc_1dab
  %11 = icmp eq i32 %6, 0, !insn.addr !287
  %12 = icmp eq i1 %11, false, !insn.addr !288
  br i1 %12, label %dec_label_pc_1e49, label %dec_label_pc_1e00, !insn.addr !288

dec_label_pc_1e00:                                ; preds = %dec_label_pc_1de6
  %13 = inttoptr i32 %9 to i32*, !insn.addr !289
  call void @free(i32* %13), !insn.addr !289
  %.pr = load i32, i32* %8, align 4
  store i32 %.pr, i32* %.reg2mem, !insn.addr !289
  br label %dec_label_pc_1e11, !insn.addr !289

dec_label_pc_1e11:                                ; preds = %dec_label_pc_1dab, %dec_label_pc_1e00
  %.reload = load i32, i32* %.reg2mem, !insn.addr !290
  %14 = icmp eq i32 %.reload, 0, !insn.addr !290
  br i1 %14, label %dec_label_pc_1e2f, label %dec_label_pc_1e1e, !insn.addr !291

dec_label_pc_1e1e:                                ; preds = %dec_label_pc_1e11
  %15 = inttoptr i32 %.reload to i32*, !insn.addr !292
  call void @free(i32* %15), !insn.addr !292
  br label %dec_label_pc_1e2f, !insn.addr !292

dec_label_pc_1e2f:                                ; preds = %dec_label_pc_1e1e, %dec_label_pc_1e11
  %16 = inttoptr i32 %0 to i32*, !insn.addr !293
  call void @free(i32* %16), !insn.addr !293
  store i32 -2, i32* %stack_var_-12.0.reg2mem, !insn.addr !294
  br label %dec_label_pc_1e97, !insn.addr !294

dec_label_pc_1e49:                                ; preds = %dec_label_pc_1de6
  %17 = inttoptr i32 %0 to i32*, !insn.addr !295
  %18 = load i32, i32* %17, align 4, !insn.addr !295
  %19 = inttoptr i32 %9 to i32*, !insn.addr !296
  %20 = load i32, i32* %19, align 4, !insn.addr !296
  %21 = add i32 %20, %18, !insn.addr !296
  %22 = inttoptr i32 %6 to i32*, !insn.addr !297
  %23 = load i32, i32* %22, align 4, !insn.addr !297
  %24 = add i32 %21, %23, !insn.addr !297
  call void @free(i32* %19), !insn.addr !298
  %25 = load i32, i32* %8, align 4, !insn.addr !299
  %26 = inttoptr i32 %25 to i32*, !insn.addr !300
  call void @free(i32* %26), !insn.addr !300
  call void @free(i32* %17), !insn.addr !301
  store i32 %24, i32* %stack_var_-12.0.reg2mem, !insn.addr !302
  br label %dec_label_pc_1e97, !insn.addr !302

dec_label_pc_1e97:                                ; preds = %dec_label_pc_1d70, %dec_label_pc_1e49, %dec_label_pc_1e2f
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !303

; uselistorder directives
  uselistorder i32 %9, { 1, 0, 2 }
  uselistorder i32* %8, { 1, 0, 2 }
  uselistorder i32 %6, { 2, 1, 0, 3 }
  uselistorder i32 %0, { 1, 0, 2, 4, 3, 5 }
  uselistorder i32* %.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32 8, { 4, 5, 0, 1, 2, 3, 6, 7 }
  uselistorder i32 (i32, i32)* @create_tree_node, { 2, 1, 0 }
  uselistorder label %dec_label_pc_1e97, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1e11, { 1, 0 }
}

define i32 @memory_leak(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1ea0:
  %storemerge1.reg2mem = alloca i32, !insn.addr !304
  %storemerge2.reg2mem = alloca i32, !insn.addr !304
  %0 = mul i32 %arg2, 4, !insn.addr !305
  %1 = call i32* @malloc(i32 %0), !insn.addr !306
  %2 = icmp eq i32* %1, null, !insn.addr !307
  %3 = icmp eq i1 %2, false, !insn.addr !308
  store i32 -1, i32* %storemerge1.reg2mem, !insn.addr !308
  br i1 %3, label %dec_label_pc_1ee4.preheader, label %dec_label_pc_1f26, !insn.addr !308

dec_label_pc_1ee4.preheader:                      ; preds = %dec_label_pc_1ea0
  %4 = ptrtoint i32* %1 to i32, !insn.addr !306
  %5 = icmp sgt i32 %arg2, 0, !insn.addr !309
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !309
  br i1 %5, label %dec_label_pc_1ef0, label %dec_label_pc_1f0a, !insn.addr !309

dec_label_pc_1ef0:                                ; preds = %dec_label_pc_1ee4.preheader, %dec_label_pc_1ef0
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %6 = mul i32 %storemerge2.reload, 4, !insn.addr !310
  %7 = add i32 %6, %4, !insn.addr !310
  %8 = inttoptr i32 %7 to i32*, !insn.addr !310
  store i32 %storemerge2.reload, i32* %8, align 4, !insn.addr !310
  %9 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !311
  %exitcond = icmp eq i32 %9, %arg2
  store i32 %9, i32* %storemerge2.reg2mem, !insn.addr !309
  br i1 %exitcond, label %dec_label_pc_1f0a, label %dec_label_pc_1ef0, !insn.addr !309

dec_label_pc_1f0a:                                ; preds = %dec_label_pc_1ef0, %dec_label_pc_1ee4.preheader
  %10 = ashr i32 %arg2, 31, !insn.addr !312
  %11 = zext i32 %arg2 to i64, !insn.addr !313
  %12 = zext i32 %10 to i64, !insn.addr !313
  %13 = mul i64 %12, 4294967296, !insn.addr !313
  %14 = or i64 %13, %11, !insn.addr !313
  %15 = sdiv i64 %14, 2, !insn.addr !313
  %16 = trunc i64 %15 to i32, !insn.addr !313
  %17 = mul i32 %16, 4, !insn.addr !314
  %18 = add i32 %17, %4, !insn.addr !314
  %19 = inttoptr i32 %18 to i32*, !insn.addr !314
  %20 = load i32, i32* %19, align 4, !insn.addr !314
  store i32 %20, i32* %storemerge1.reg2mem, !insn.addr !315
  br label %dec_label_pc_1f26, !insn.addr !315

dec_label_pc_1f26:                                ; preds = %dec_label_pc_1ea0, %dec_label_pc_1f0a
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  ret i32 %storemerge1.reload, !insn.addr !316

; uselistorder directives
  uselistorder i32* %1, { 1, 0 }
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge1.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg2, { 3, 4, 1, 2, 0 }
  uselistorder label %dec_label_pc_1f26, { 1, 0 }
  uselistorder label %dec_label_pc_1ef0, { 1, 0 }
}

define i32 @dangling_pointer(i32 %arg1) local_unnamed_addr {
dec_label_pc_1f30:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !317
  %1 = load i32, i32* %0
  %2 = call i32* @malloc(i32 4), !insn.addr !318
  %3 = icmp eq i32* %2, null, !insn.addr !319
  %4 = icmp eq i1 %3, false, !insn.addr !320
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !320
  br i1 %4, label %dec_label_pc_1f6b, label %dec_label_pc_1fb0, !insn.addr !320

dec_label_pc_1f6b:                                ; preds = %dec_label_pc_1f30
  store i32 42, i32* %2, align 4, !insn.addr !321
  %5 = add i32 %1, 8703, !insn.addr !322
  %6 = inttoptr i32 %5 to i8*, !insn.addr !323
  %7 = call i32 (i8*, ...) @printf(i8* %6), !insn.addr !324
  call void @free(i32* %2), !insn.addr !325
  %8 = load i32, i32* %2, align 4, !insn.addr !326
  store i32 %8, i32* %storemerge.reg2mem, !insn.addr !327
  br label %dec_label_pc_1fb0, !insn.addr !327

dec_label_pc_1fb0:                                ; preds = %dec_label_pc_1f30, %dec_label_pc_1f6b
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !328

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1fb0, { 1, 0 }
}

define i32 @double_free(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1fc0:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !329
  %0 = icmp eq i32 %arg2, 0, !insn.addr !330
  %1 = icmp eq i1 %0, false, !insn.addr !331
  br i1 %1, label %dec_label_pc_203c, label %dec_label_pc_1fe3, !insn.addr !331

dec_label_pc_1fe3:                                ; preds = %dec_label_pc_1fc0
  %2 = call i32* @malloc(i32 4), !insn.addr !332
  %3 = icmp eq i32* %2, null, !insn.addr !333
  %4 = icmp eq i1 %3, false, !insn.addr !334
  store i32 -1, i32* %stack_var_-12.0.reg2mem, !insn.addr !334
  br i1 %4, label %dec_label_pc_200b, label %dec_label_pc_2044, !insn.addr !334

dec_label_pc_200b:                                ; preds = %dec_label_pc_1fe3
  store i32 10, i32* %2, align 4, !insn.addr !335
  call void @free(i32* %2), !insn.addr !336
  call void @free(i32* %2), !insn.addr !337
  store i32 -2, i32* %stack_var_-12.0.reg2mem, !insn.addr !338
  br label %dec_label_pc_2044, !insn.addr !338

dec_label_pc_203c:                                ; preds = %dec_label_pc_1fc0
  %5 = inttoptr i32 %arg2 to i32*, !insn.addr !339
  %6 = load i32, i32* %5, align 4, !insn.addr !339
  store i32 %6, i32* %stack_var_-12.0.reg2mem, !insn.addr !340
  br label %dec_label_pc_2044, !insn.addr !340

dec_label_pc_2044:                                ; preds = %dec_label_pc_1fe3, %dec_label_pc_203c, %dec_label_pc_200b
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !341

; uselistorder directives
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_2044, { 1, 2, 0 }
}

define i32 @heap_overflow(i32 %arg1) local_unnamed_addr {
dec_label_pc_2050:
  %storemerge2.reg2mem = alloca i32, !insn.addr !342
  %storemerge.off03.reg2mem = alloca i32, !insn.addr !342
  %0 = call i32* @malloc(i32 40), !insn.addr !343
  %1 = ptrtoint i32* %0 to i32, !insn.addr !343
  %2 = icmp eq i32* %0, null, !insn.addr !344
  %3 = icmp eq i1 %2, false, !insn.addr !345
  store i32 0, i32* %storemerge.off03.reg2mem, !insn.addr !345
  store i32 -1, i32* %storemerge2.reg2mem, !insn.addr !345
  br i1 %3, label %dec_label_pc_209c, label %dec_label_pc_20d3, !insn.addr !345

dec_label_pc_209c:                                ; preds = %dec_label_pc_2050, %dec_label_pc_209c
  %storemerge.off03.reload = load i32, i32* %storemerge.off03.reg2mem
  %4 = mul nuw nsw i32 %storemerge.off03.reload, 100, !insn.addr !346
  %5 = mul i32 %storemerge.off03.reload, 4, !insn.addr !347
  %6 = add i32 %5, %1, !insn.addr !347
  %7 = inttoptr i32 %6 to i32*, !insn.addr !347
  store i32 %4, i32* %7, align 4, !insn.addr !347
  %8 = add nuw nsw i32 %storemerge.off03.reload, 1, !insn.addr !348
  %exitcond = icmp eq i32 %8, 11
  store i32 %8, i32* %storemerge.off03.reg2mem, !insn.addr !349
  br i1 %exitcond, label %dec_label_pc_20b7, label %dec_label_pc_209c, !insn.addr !349

dec_label_pc_20b7:                                ; preds = %dec_label_pc_209c
  %9 = load i32, i32* %0, align 4, !insn.addr !350
  call void @free(i32* %0), !insn.addr !351
  store i32 %9, i32* %storemerge2.reg2mem, !insn.addr !352
  br label %dec_label_pc_20d3, !insn.addr !352

dec_label_pc_20d3:                                ; preds = %dec_label_pc_2050, %dec_label_pc_20b7
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  ret i32 %storemerge2.reload, !insn.addr !353

; uselistorder directives
  uselistorder i32 %storemerge.off03.reload, { 1, 2, 0 }
  uselistorder i32* %storemerge.off03.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge2.reg2mem, { 0, 2, 1 }
  uselistorder i32* (i32)* @malloc, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder label %dec_label_pc_20d3, { 1, 0 }
  uselistorder label %dec_label_pc_209c, { 1, 0 }
}

define i32 @test_heap_memory(i32 %arg1) local_unnamed_addr {
dec_label_pc_20e0:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !354
  %stack_var_-24 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4f14 to i32), i32 -11950), !insn.addr !355
  %3 = inttoptr i32 %2 to i8*, !insn.addr !356
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !357
  %5 = call i32 @heap_basic(i32 10, i32 ptrtoint (i32* @0 to i32)), !insn.addr !358
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4f14 to i32), i32 -11919), !insn.addr !359
  %7 = inttoptr i32 %6 to i8*, !insn.addr !360
  %8 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !361
  %9 = call i32 @heap_calloc(i32 5, i32 ptrtoint (i32* @0 to i32)), !insn.addr !362
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4f14 to i32), i32 -11890), !insn.addr !363
  %11 = inttoptr i32 %10 to i8*, !insn.addr !364
  %12 = call i32 (i8*, ...) @printf(i8* %11), !insn.addr !365
  %13 = call i32 @heap_realloc(i32 ptrtoint (i32* @0 to i32)), !insn.addr !366
  %14 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4f14 to i32), i32 -11860), !insn.addr !367
  %15 = inttoptr i32 %14 to i8*, !insn.addr !368
  %16 = call i32 (i8*, ...) @printf(i8* %15), !insn.addr !369
  %17 = call i32 @heap_array(i32 10, i32 ptrtoint (i32* @0 to i32)), !insn.addr !370
  %18 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4f14 to i32), i32 -11829), !insn.addr !371
  %19 = inttoptr i32 %18 to i8*, !insn.addr !372
  %20 = call i32 (i8*, ...) @printf(i8* %19), !insn.addr !373
  %21 = call i32 @heap_struct(i32 5, i32 ptrtoint (i32* @0 to i32)), !insn.addr !374
  %22 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4f14 to i32), i32 -11800), !insn.addr !375
  %23 = inttoptr i32 %22 to i8*, !insn.addr !376
  %24 = call i32 (i8*, ...) @printf(i8* %23), !insn.addr !377
  store i32 0, i32* %stack_var_-12, align 4, !insn.addr !378
  %25 = call i32 @heap_nested(i32* nonnull %stack_var_-12, i32 ptrtoint (i32* @0 to i32)), !insn.addr !379
  %26 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4f14 to i32), i32 -11770), !insn.addr !380
  %27 = inttoptr i32 %26 to i8*, !insn.addr !381
  %28 = call i32 (i8*, ...) @printf(i8* %27), !insn.addr !382
  %29 = load i32, i32* %stack_var_-12, align 4, !insn.addr !383
  %30 = icmp eq i32 %29, 0, !insn.addr !383
  br i1 %30, label %dec_label_pc_2204, label %dec_label_pc_21e5, !insn.addr !384

dec_label_pc_21e5:                                ; preds = %dec_label_pc_20e0
  %31 = add i32 %29, 4, !insn.addr !385
  %32 = inttoptr i32 %31 to i32*, !insn.addr !385
  %33 = load i32, i32* %32, align 4, !insn.addr !385
  %34 = inttoptr i32 %33 to i32*
  call void @free(i32* %34), !insn.addr !386
  %35 = load i32, i32* %stack_var_-12, align 4, !insn.addr !387
  %36 = inttoptr i32 %35 to i32*
  call void @free(i32* %36), !insn.addr !388
  br label %dec_label_pc_2204, !insn.addr !388

dec_label_pc_2204:                                ; preds = %dec_label_pc_21e5, %dec_label_pc_20e0
  %37 = call i32 @linked_list_heap(i32 ptrtoint (i32* @0 to i32)), !insn.addr !389
  %38 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4f14 to i32), i32 -11740), !insn.addr !390
  %39 = inttoptr i32 %38 to i8*, !insn.addr !391
  %40 = call i32 (i8*, ...) @printf(i8* %39), !insn.addr !392
  %41 = call i32 @tree_heap_traversal(i32 ptrtoint (i32* @0 to i32)), !insn.addr !393
  %42 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4f14 to i32), i32 -11705), !insn.addr !394
  %43 = inttoptr i32 %42 to i8*, !insn.addr !395
  %44 = call i32 (i8*, ...) @printf(i8* %43), !insn.addr !396
  %45 = call i32 @memory_leak(i32 5, i32 ptrtoint (i32* @0 to i32)), !insn.addr !397
  %46 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4f14 to i32), i32 -11667), !insn.addr !398
  %47 = inttoptr i32 %46 to i8*, !insn.addr !399
  %48 = call i32 (i8*, ...) @printf(i8* %47), !insn.addr !400
  %49 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4f14 to i32), i32 -11637), !insn.addr !401
  %50 = inttoptr i32 %49 to i8*, !insn.addr !402
  %51 = call i32 (i8*, ...) @printf(i8* %50), !insn.addr !403
  %52 = call i32 @fork(), !insn.addr !404
  %53 = icmp eq i32 %52, 0, !insn.addr !405
  %54 = icmp eq i1 %53, false, !insn.addr !406
  br i1 %54, label %dec_label_pc_22bc, label %dec_label_pc_2288, !insn.addr !406

dec_label_pc_2288:                                ; preds = %dec_label_pc_2204
  %55 = call i32 @dangling_pointer(i32 %52), !insn.addr !407
  %56 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4f14 to i32), i32 -11605), !insn.addr !408
  %57 = inttoptr i32 %56 to i8*, !insn.addr !409
  %58 = call i32 (i8*, ...) @printf(i8* %57), !insn.addr !410
  call void @exit(i32 0), !insn.addr !411
  unreachable, !insn.addr !411

dec_label_pc_22bc:                                ; preds = %dec_label_pc_2204
  %59 = inttoptr i32 %52 to i8*, !insn.addr !412
  %60 = icmp slt i8* %59, inttoptr (i32 1 to i8*), !insn.addr !413
  br i1 %60, label %dec_label_pc_2356, label %dec_label_pc_22c6, !insn.addr !413

dec_label_pc_22c6:                                ; preds = %dec_label_pc_22bc
  %61 = call i32 @waitpid(i32 %52, i32* nonnull %stack_var_-24, i32 0), !insn.addr !414
  %62 = load i32, i32* %stack_var_-24, align 4, !insn.addr !415
  %63 = urem i32 %62, 128, !insn.addr !416
  %64 = icmp eq i32 %63, 0, !insn.addr !417
  %65 = icmp eq i1 %64, false, !insn.addr !418
  br i1 %65, label %dec_label_pc_2319, label %dec_label_pc_22f4, !insn.addr !418

dec_label_pc_22f4:                                ; preds = %dec_label_pc_22c6
  %66 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4f14 to i32), i32 -11589), !insn.addr !419
  %67 = inttoptr i32 %66 to i8*, !insn.addr !420
  %68 = call i32 (i8*, ...) @printf(i8* %67), !insn.addr !421
  store i32 %68, i32* %eax.0.reg2mem, !insn.addr !422
  br label %dec_label_pc_236c, !insn.addr !422

dec_label_pc_2319:                                ; preds = %dec_label_pc_22c6
  %69 = mul i32 %62, 16777216
  %70 = and i32 %69, 2130706432, !insn.addr !423
  %sext = add nuw i32 %70, 16777216
  %71 = ashr i32 %sext, 25, !insn.addr !424
  %72 = icmp slt i32 %sext, 33554432, !insn.addr !425
  store i32 %71, i32* %eax.0.reg2mem, !insn.addr !425
  br i1 %72, label %dec_label_pc_236c, label %dec_label_pc_2331, !insn.addr !425

dec_label_pc_2331:                                ; preds = %dec_label_pc_2319
  %73 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4f14 to i32), i32 -11552), !insn.addr !426
  %74 = inttoptr i32 %73 to i8*, !insn.addr !427
  %75 = call i32 (i8*, ...) @printf(i8* %74), !insn.addr !428
  store i32 %75, i32* %eax.0.reg2mem, !insn.addr !428
  br label %dec_label_pc_236c, !insn.addr !428

dec_label_pc_2356:                                ; preds = %dec_label_pc_22bc
  %76 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4f14 to i32), i32 -11487), !insn.addr !429
  %77 = inttoptr i32 %76 to i8*, !insn.addr !430
  call void @perror(i8* %77), !insn.addr !431
  store i32 ptrtoint (i32* @0 to i32), i32* %eax.0.reg2mem, !insn.addr !431
  br label %dec_label_pc_236c, !insn.addr !431

dec_label_pc_236c:                                ; preds = %dec_label_pc_2356, %dec_label_pc_2319, %dec_label_pc_2331, %dec_label_pc_22f4
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !432

; uselistorder directives
  uselistorder i32 %52, { 0, 2, 1, 3 }
  uselistorder i32 %1, { 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32* %stack_var_-12, { 1, 2, 0, 3 }
  uselistorder i32* %stack_var_-24, { 1, 0 }
  uselistorder i32* %eax.0.reg2mem, { 0, 4, 2, 3, 1 }
  uselistorder i32 16777216, { 1, 0 }
  uselistorder void (i32*)* @free, { 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 21 }
  uselistorder label %dec_label_pc_236c, { 0, 2, 1, 3 }
}

define i32 @global_var_access(i32 %arg1) local_unnamed_addr {
dec_label_pc_2380:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4c78 to i32), i32 168), !insn.addr !433
  %3 = inttoptr i32 %2 to i32*, !insn.addr !433
  %4 = load i32, i32* %3, align 4, !insn.addr !433
  %5 = add i32 %4, 1, !insn.addr !434
  store i32 %5, i32* %3, align 4, !insn.addr !435
  ret i32 %5, !insn.addr !436
}

define i32 @global_var_read(i32 %arg1) local_unnamed_addr {
dec_label_pc_23b0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4c48 to i32), i32 168), !insn.addr !437
  %3 = inttoptr i32 %2 to i32*, !insn.addr !437
  %4 = load i32, i32* %3, align 4, !insn.addr !437
  %5 = mul i32 %4, 2, !insn.addr !438
  ret i32 %5, !insn.addr !439
}

define i32 @global_array_access(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_23d0:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !440
  %1 = load i32, i32* %0
  %2 = icmp ult i32 %arg2, 10
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !441
  br i1 %2, label %dec_label_pc_2408, label %dec_label_pc_2418, !insn.addr !441

dec_label_pc_2408:                                ; preds = %dec_label_pc_23d0
  %3 = mul i32 %arg2, 4, !insn.addr !442
  %4 = add i32 %3, add (i32 ptrtoint (i32* @global_var_4c25 to i32), i32 80), !insn.addr !442
  %5 = add i32 %4, %1, !insn.addr !442
  %6 = inttoptr i32 %5 to i32*, !insn.addr !442
  %7 = load i32, i32* %6, align 4, !insn.addr !442
  store i32 %7, i32* %storemerge.reg2mem, !insn.addr !443
  br label %dec_label_pc_2418, !insn.addr !443

dec_label_pc_2418:                                ; preds = %dec_label_pc_23d0, %dec_label_pc_2408
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !444

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2418, { 1, 0 }
}

define i32 @static_local(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2420:
  %0 = alloca i32
  %storemerge1.reg2mem = alloca i32, !insn.addr !445
  %1 = load i32, i32* %0
  %2 = icmp eq i32 %arg2, 0, !insn.addr !446
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4bd5 to i32), i32 172)
  %4 = inttoptr i32 %3 to i32*
  store i32 0, i32* %storemerge1.reg2mem, !insn.addr !447
  br i1 %2, label %dec_label_pc_245b, label %dec_label_pc_2476, !insn.addr !447

dec_label_pc_245b:                                ; preds = %dec_label_pc_2420
  %5 = load i32, i32* %4, align 4, !insn.addr !448
  %6 = add i32 %5, 1, !insn.addr !449
  store i32 %6, i32* %storemerge1.reg2mem, !insn.addr !450
  br label %dec_label_pc_2476, !insn.addr !450

dec_label_pc_2476:                                ; preds = %dec_label_pc_2420, %dec_label_pc_245b
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  store i32 %storemerge1.reload, i32* %4, align 4
  ret i32 %storemerge1.reload, !insn.addr !451

; uselistorder directives
  uselistorder i32 %storemerge1.reload, { 1, 0 }
  uselistorder i32* %storemerge1.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2476, { 1, 0 }
}

define i32 @call_static_func(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2480:
  %0 = call i32 @static_helper(i32 %arg2), !insn.addr !452
  %1 = add i32 %0, 1, !insn.addr !453
  ret i32 %1, !insn.addr !454
}

define i32 @static_helper(i32 %arg1) local_unnamed_addr {
dec_label_pc_24b0:
  %0 = mul i32 %arg1, 2, !insn.addr !455
  ret i32 %0, !insn.addr !456
}

define i32 @access_extern_global(i32 %arg1) local_unnamed_addr {
dec_label_pc_24c0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4b38 to i32), i32 156), !insn.addr !457
  %3 = inttoptr i32 %2 to i32*, !insn.addr !458
  %4 = load i32, i32* %3, align 4, !insn.addr !458
  %5 = add i32 %4, 100, !insn.addr !459
  ret i32 %5, !insn.addr !460
}

define i32 @call_extern_func(i32 %arg1) local_unnamed_addr {
dec_label_pc_24f0:
  %0 = call i32 @extern_function(i32 5), !insn.addr !461
  ret i32 %0, !insn.addr !462
}

define i32 @read_const_data(i32 %arg1) local_unnamed_addr {
dec_label_pc_2520:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32** @global_var_4ad8 to i32), i32 120), !insn.addr !463
  %3 = inttoptr i32 %2 to i32*, !insn.addr !463
  %4 = load i32, i32* %3, align 4, !insn.addr !463
  %5 = add i32 %4, 4, !insn.addr !464
  %6 = inttoptr i32 %5 to i8*, !insn.addr !464
  %7 = load i8, i8* %6, align 1, !insn.addr !464
  %8 = sext i8 %7 to i32, !insn.addr !464
  %9 = add nsw i32 %8, 42, !insn.addr !465
  ret i32 %9, !insn.addr !466

; uselistorder directives
  uselistorder i32 42, { 2, 3, 0, 1 }
}

define i32 @access_bss_var(i32 %arg1) local_unnamed_addr {
dec_label_pc_2540:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4ab8 to i32), i32 176), !insn.addr !467
  %3 = inttoptr i32 %2 to i32*, !insn.addr !467
  %4 = load i32, i32* %3, align 4, !insn.addr !467
  ret i32 %4, !insn.addr !468
}

define i32 @access_bss_buffer(i32 %arg1) local_unnamed_addr {
dec_label_pc_2560:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4a98 to i32), i32 180), !insn.addr !469
  %3 = inttoptr i32 %2 to i8*, !insn.addr !469
  %4 = load i8, i8* %3, align 1, !insn.addr !469
  %5 = sext i8 %4 to i32, !insn.addr !469
  ret i32 %5, !insn.addr !470
}

define i32 @global_struct_access(i32 %arg1) local_unnamed_addr {
dec_label_pc_2580:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4a78 to i32), i32 124), !insn.addr !471
  %3 = inttoptr i32 %2 to i32*, !insn.addr !471
  %4 = load i32, i32* %3, align 4, !insn.addr !471
  %5 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4a78 to i32), i32 128), !insn.addr !472
  %6 = inttoptr i32 %5 to i32*, !insn.addr !472
  %7 = load i32, i32* %6, align 4, !insn.addr !472
  %8 = add i32 %7, %4, !insn.addr !472
  ret i32 %8, !insn.addr !473

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32 128, { 1, 0 }
}

define i32 @set_file_static(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_25a0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, ptrtoint (i32* @global_var_4a58 to i32), !insn.addr !474
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4a58 to i32), i32 132), !insn.addr !475
  %4 = inttoptr i32 %3 to i32*, !insn.addr !475
  store i32 %arg2, i32* %4, align 4, !insn.addr !475
  ret i32 %2, !insn.addr !476

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
}

define i32 @get_file_static(i32 %arg1) local_unnamed_addr {
dec_label_pc_25c0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4a38 to i32), i32 132), !insn.addr !477
  %3 = inttoptr i32 %2 to i32*, !insn.addr !477
  %4 = load i32, i32* %3, align 4, !insn.addr !477
  ret i32 %4, !insn.addr !478
}

define i32 @set_global_callback(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_25e0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, ptrtoint (i32* @global_var_4a18 to i32), !insn.addr !479
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4a18 to i32), i32 280), !insn.addr !480
  %4 = inttoptr i32 %3 to i32*, !insn.addr !480
  store i32 %arg2, i32* %4, align 4, !insn.addr !480
  ret i32 %2, !insn.addr !481

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
}

define i32 @call_global_callback(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2600:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_49f4 to i32), i32 280), !insn.addr !482
  %3 = inttoptr i32 %2 to i32*, !insn.addr !482
  %4 = load i32, i32* %3, align 4, !insn.addr !482
  %5 = icmp eq i32 %4, 0, !insn.addr !482
  %spec.select = select i1 %5, i32 -1, i32 %4
  ret i32 %spec.select, !insn.addr !483
}

define i32 @global_heap_store(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2650:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !484
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_49a5 to i32), i32 284), !insn.addr !485
  %3 = inttoptr i32 %2 to i32*, !insn.addr !485
  store i32 %arg2, i32* %3, align 4, !insn.addr !485
  %4 = icmp eq i32 %arg2, 0, !insn.addr !486
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !487
  br i1 %4, label %dec_label_pc_2698, label %dec_label_pc_267e, !insn.addr !487

dec_label_pc_267e:                                ; preds = %dec_label_pc_2650
  %5 = inttoptr i32 %arg2 to i32*, !insn.addr !488
  %6 = load i32, i32* %5, align 4, !insn.addr !488
  store i32 %6, i32* %storemerge.reg2mem, !insn.addr !489
  br label %dec_label_pc_2698, !insn.addr !489

dec_label_pc_2698:                                ; preds = %dec_label_pc_2650, %dec_label_pc_267e
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !490

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg2, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2698, { 1, 0 }
}

define i32 @static_complex_init(i32 %arg1) local_unnamed_addr {
dec_label_pc_26a0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4958 to i32), i32 136), !insn.addr !491
  %3 = inttoptr i32 %2 to i32*, !insn.addr !491
  %4 = load i32, i32* %3, align 4, !insn.addr !491
  %5 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4958 to i32), i32 144), !insn.addr !492
  %6 = inttoptr i32 %5 to i32*, !insn.addr !492
  %7 = load i32, i32* %6, align 4, !insn.addr !492
  %8 = add i32 %7, %4, !insn.addr !492
  %9 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4958 to i32), i32 152), !insn.addr !493
  %10 = inttoptr i32 %9 to i32*, !insn.addr !493
  %11 = load i32, i32* %10, align 4, !insn.addr !493
  %12 = add i32 %8, %11, !insn.addr !493
  ret i32 %12, !insn.addr !494

; uselistorder directives
  uselistorder i32 %1, { 2, 1, 0 }
}

define i32 @tls_access(i32 %arg1) local_unnamed_addr {
dec_label_pc_26d0:
  call void @__writegsdword(i32 -4, i32 %arg1), !insn.addr !495
  %0 = call i32 @__readgsdword(i32 -4), !insn.addr !496
  %1 = mul i32 %0, 2, !insn.addr !497
  ret i32 %1, !insn.addr !498
}

define i32 @init_order_test(i32 %arg1) local_unnamed_addr {
dec_label_pc_26f0:
  %stack_var_-12 = alloca i32, align 4
  store i32 20, i32* %stack_var_-12, align 4, !insn.addr !499
  %0 = call i32 @init_depends_on(i32* nonnull %stack_var_-12, i32 ptrtoint (i32* @0 to i32)), !insn.addr !500
  ret i32 %0, !insn.addr !501
}

define i32 @init_depends_on(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2720:
  %0 = alloca i32
  %.reg2mem = alloca i32, !insn.addr !502
  %1 = load i32, i32* %0
  %2 = icmp eq i32 %arg2, 0, !insn.addr !503
  br i1 %2, label %dec_label_pc_2720.dec_label_pc_274e_crit_edge, label %dec_label_pc_2740, !insn.addr !504

dec_label_pc_2720.dec_label_pc_274e_crit_edge:    ; preds = %dec_label_pc_2720
  %.pre = add i32 %1, add (i32 ptrtoint (i32* @global_var_48d7 to i32), i32 288), !insn.addr !505
  %.pre1 = inttoptr i32 %.pre to i32*, !insn.addr !505
  %.pre3 = load i32, i32* %.pre1, align 4
  store i32 %.pre3, i32* %.reg2mem
  br label %dec_label_pc_274e

dec_label_pc_2740:                                ; preds = %dec_label_pc_2720
  %3 = inttoptr i32 %arg2 to i32*, !insn.addr !506
  %4 = load i32, i32* %3, align 4, !insn.addr !506
  %5 = add i32 %1, add (i32 ptrtoint (i32* @global_var_48d7 to i32), i32 288)
  %6 = inttoptr i32 %5 to i32*
  store i32 %4, i32* %6, align 4, !insn.addr !507
  store i32 %4, i32* %.reg2mem, !insn.addr !507
  br label %dec_label_pc_274e, !insn.addr !507

dec_label_pc_274e:                                ; preds = %dec_label_pc_2720.dec_label_pc_274e_crit_edge, %dec_label_pc_2740
  %.reload = load i32, i32* %.reg2mem, !insn.addr !505
  ret i32 %.reload, !insn.addr !508

; uselistorder directives
  uselistorder i32 add (i32 ptrtoint (i32* @global_var_48d7 to i32), i32 288), { 1, 0 }
  uselistorder i32 %arg2, { 1, 0 }
  uselistorder label %dec_label_pc_274e, { 1, 0 }
}

define i32 @test_static_global(i32 %arg1) local_unnamed_addr {
dec_label_pc_2760:
  %0 = alloca i32
  %stack_var_-12 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4894 to i32), i32 -11465), !insn.addr !509
  %3 = inttoptr i32 %2 to i8*, !insn.addr !510
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !511
  %5 = call i32 @global_var_access(i32 ptrtoint (i32* @0 to i32)), !insn.addr !512
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4894 to i32), i32 -11428), !insn.addr !513
  %7 = inttoptr i32 %6 to i8*, !insn.addr !514
  %8 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !515
  %9 = call i32 @global_var_read(i32 ptrtoint (i32* @0 to i32)), !insn.addr !516
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4894 to i32), i32 -11393), !insn.addr !517
  %11 = inttoptr i32 %10 to i8*, !insn.addr !518
  %12 = call i32 (i8*, ...) @printf(i8* %11), !insn.addr !519
  %13 = call i32 @global_array_access(i32 5, i32 ptrtoint (i32* @0 to i32)), !insn.addr !520
  %14 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4894 to i32), i32 -11360), !insn.addr !521
  %15 = inttoptr i32 %14 to i8*, !insn.addr !522
  %16 = call i32 (i8*, ...) @printf(i8* %15), !insn.addr !523
  %17 = call i32 @static_local(i32 1, i32 ptrtoint (i32* @0 to i32)), !insn.addr !524
  %18 = call i32 @static_local(i32 0, i32 ptrtoint (i32* @0 to i32)), !insn.addr !525
  %19 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4894 to i32), i32 -11323), !insn.addr !526
  %20 = inttoptr i32 %19 to i8*, !insn.addr !527
  %21 = call i32 (i8*, ...) @printf(i8* %20), !insn.addr !528
  %22 = call i32 @static_local(i32 0, i32 ptrtoint (i32* @0 to i32)), !insn.addr !529
  %23 = call i32 (i8*, ...) @printf(i8* %20), !insn.addr !530
  %24 = call i32 @call_static_func(i32 5, i32 ptrtoint (i32* @0 to i32)), !insn.addr !531
  %25 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4894 to i32), i32 -11293), !insn.addr !532
  %26 = inttoptr i32 %25 to i8*, !insn.addr !533
  %27 = call i32 (i8*, ...) @printf(i8* %26), !insn.addr !534
  %28 = call i32 @access_extern_global(i32 ptrtoint (i32* @0 to i32)), !insn.addr !535
  %29 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4894 to i32), i32 -11259), !insn.addr !536
  %30 = inttoptr i32 %29 to i8*, !insn.addr !537
  %31 = call i32 (i8*, ...) @printf(i8* %30), !insn.addr !538
  %32 = call i32 @call_extern_func(i32 ptrtoint (i32* @0 to i32)), !insn.addr !539
  %33 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4894 to i32), i32 -11221), !insn.addr !540
  %34 = inttoptr i32 %33 to i8*, !insn.addr !541
  %35 = call i32 (i8*, ...) @printf(i8* %34), !insn.addr !542
  %36 = call i32 @read_const_data(i32 ptrtoint (i32* @0 to i32)), !insn.addr !543
  %37 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4894 to i32), i32 -11187), !insn.addr !544
  %38 = inttoptr i32 %37 to i8*, !insn.addr !545
  %39 = call i32 (i8*, ...) @printf(i8* %38), !insn.addr !546
  %40 = call i32 @access_bss_var(i32 ptrtoint (i32* @0 to i32)), !insn.addr !547
  %41 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4894 to i32), i32 -11154), !insn.addr !548
  %42 = inttoptr i32 %41 to i8*, !insn.addr !549
  %43 = call i32 (i8*, ...) @printf(i8* %42), !insn.addr !550
  %44 = call i32 @access_bss_buffer(i32 ptrtoint (i32* @0 to i32)), !insn.addr !551
  %45 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4894 to i32), i32 -11122), !insn.addr !552
  %46 = inttoptr i32 %45 to i8*, !insn.addr !553
  %47 = call i32 (i8*, ...) @printf(i8* %46), !insn.addr !554
  %48 = call i32 @global_struct_access(i32 ptrtoint (i32* @0 to i32)), !insn.addr !555
  %49 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4894 to i32), i32 -11087), !insn.addr !556
  %50 = inttoptr i32 %49 to i8*, !insn.addr !557
  %51 = call i32 (i8*, ...) @printf(i8* %50), !insn.addr !558
  %52 = call i32 @set_file_static(i32 50, i32 ptrtoint (i32* @0 to i32)), !insn.addr !559
  %53 = call i32 @get_file_static(i32 ptrtoint (i32* @0 to i32)), !insn.addr !560
  %54 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4894 to i32), i32 -11049), !insn.addr !561
  %55 = inttoptr i32 %54 to i8*, !insn.addr !562
  %56 = call i32 (i8*, ...) @printf(i8* %55), !insn.addr !563
  %57 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4894 to i32), i32 -17920), !insn.addr !564
  %58 = call i32 @set_global_callback(i32 %57, i32 ptrtoint (i32* @0 to i32)), !insn.addr !565
  %59 = call i32 @call_global_callback(i32 5, i32 ptrtoint (i32* @0 to i32)), !insn.addr !566
  %60 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4894 to i32), i32 -11020), !insn.addr !567
  %61 = inttoptr i32 %60 to i8*, !insn.addr !568
  %62 = call i32 (i8*, ...) @printf(i8* %61), !insn.addr !569
  store i32 100, i32* %stack_var_-12, align 4, !insn.addr !570
  %63 = call i32 @global_heap_store(i32* nonnull %stack_var_-12, i32 ptrtoint (i32* @0 to i32)), !insn.addr !571
  %64 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4894 to i32), i32 -10987), !insn.addr !572
  %65 = inttoptr i32 %64 to i8*, !insn.addr !573
  %66 = call i32 (i8*, ...) @printf(i8* %65), !insn.addr !574
  %67 = call i32 @static_complex_init(i32 ptrtoint (i32* @0 to i32)), !insn.addr !575
  %68 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4894 to i32), i32 -10952), !insn.addr !576
  %69 = inttoptr i32 %68 to i8*, !insn.addr !577
  %70 = call i32 (i8*, ...) @printf(i8* %69), !insn.addr !578
  %71 = call i32 @tls_access(i32 10), !insn.addr !579
  %72 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4894 to i32), i32 -10915), !insn.addr !580
  %73 = inttoptr i32 %72 to i8*, !insn.addr !581
  %74 = call i32 (i8*, ...) @printf(i8* %73), !insn.addr !582
  %75 = call i32 @init_order_test(i32 ptrtoint (i32* @0 to i32)), !insn.addr !583
  %76 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4894 to i32), i32 -10887), !insn.addr !584
  %77 = inttoptr i32 %76 to i8*, !insn.addr !585
  %78 = call i32 (i8*, ...) @printf(i8* %77), !insn.addr !586
  ret i32 %78, !insn.addr !587

; uselistorder directives
  uselistorder i32 %1, { 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 100, { 1, 2, 0 }
  uselistorder i32 (i32, i32)* @static_local, { 2, 1, 0 }
}

define i32 @double_value(i32 %arg1) local_unnamed_addr {
dec_label_pc_2a00:
  %0 = mul i32 %arg1, 2, !insn.addr !588
  ret i32 %0, !insn.addr !589
}

define i32 @memop_memset(i32* %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_2a10:
  %storemerge.reg2mem = alloca i32, !insn.addr !590
  %0 = icmp ne i32 %arg2, 0, !insn.addr !591
  %1 = icmp eq i32 %arg3, 0, !insn.addr !592
  %2 = icmp eq i1 %1, false, !insn.addr !593
  %or.cond = icmp eq i1 %0, %2
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !594
  br i1 %or.cond, label %dec_label_pc_2a4f, label %dec_label_pc_2a79, !insn.addr !594

dec_label_pc_2a4f:                                ; preds = %dec_label_pc_2a10
  %3 = urem i32 %arg4, 256, !insn.addr !595
  %4 = inttoptr i32 %arg2 to i32*, !insn.addr !596
  %5 = call i32* @memset(i32* %4, i32 %3, i32 %arg3), !insn.addr !596
  %6 = inttoptr i32 %arg2 to i8*, !insn.addr !597
  %7 = load i8, i8* %6, align 1, !insn.addr !597
  %8 = zext i8 %7 to i32, !insn.addr !597
  store i32 %8, i32* %storemerge.reg2mem, !insn.addr !598
  br label %dec_label_pc_2a79, !insn.addr !598

dec_label_pc_2a79:                                ; preds = %dec_label_pc_2a10, %dec_label_pc_2a4f
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !599

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg3, { 1, 0 }
  uselistorder i32 %arg2, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2a79, { 1, 0 }
}

define i32 @memop_memcpy(i32* %arg1, i32* %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_2a90:
  %storemerge.reg2mem = alloca i32, !insn.addr !600
  %0 = icmp ne i32* %arg2, null, !insn.addr !601
  %1 = icmp ne i32 %arg3, 0, !insn.addr !602
  %or.cond.not = icmp eq i1 %0, %1
  %2 = icmp eq i32 %arg4, 0, !insn.addr !603
  %3 = icmp eq i1 %2, false, !insn.addr !604
  %or.cond4 = icmp eq i1 %or.cond.not, %3
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !605
  br i1 %or.cond4, label %dec_label_pc_2ad9, label %dec_label_pc_2b07, !insn.addr !605

dec_label_pc_2ad9:                                ; preds = %dec_label_pc_2a90
  %4 = ptrtoint i32* %arg2 to i32
  %5 = inttoptr i32 %arg3 to i32*, !insn.addr !606
  %6 = call i32* @memcpy(i32* nonnull %arg2, i32* %5, i32 %arg4), !insn.addr !606
  %7 = add i32 %arg4, -4
  %8 = and i32 %7, -4, !insn.addr !607
  %9 = add i32 %8, %4, !insn.addr !607
  %10 = inttoptr i32 %9 to i32*, !insn.addr !607
  %11 = load i32, i32* %10, align 4, !insn.addr !607
  store i32 %11, i32* %storemerge.reg2mem, !insn.addr !608
  br label %dec_label_pc_2b07, !insn.addr !608

dec_label_pc_2b07:                                ; preds = %dec_label_pc_2a90, %dec_label_pc_2ad9
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !609

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg4, { 1, 2, 0 }
  uselistorder i32 %arg3, { 1, 0 }
  uselistorder i32* %arg2, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2b07, { 1, 0 }
}

define i32 @memop_memmove(i32* %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_2b10:
  %storemerge.reg2mem = alloca i32, !insn.addr !610
  %0 = icmp ne i32 %arg2, 0, !insn.addr !611
  %1 = icmp ult i32 %arg3, 2, !insn.addr !612
  %2 = icmp eq i1 %1, false, !insn.addr !613
  %or.cond = icmp eq i1 %0, %2
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !614
  br i1 %or.cond, label %dec_label_pc_2b4d, label %dec_label_pc_2b78, !insn.addr !614

dec_label_pc_2b4d:                                ; preds = %dec_label_pc_2b10
  %3 = add i32 %arg2, 1, !insn.addr !615
  %4 = add i32 %arg3, -1, !insn.addr !616
  %5 = inttoptr i32 %3 to i32*, !insn.addr !617
  %6 = inttoptr i32 %arg2 to i32*, !insn.addr !617
  %7 = call i32* @memmove(i32* %5, i32* %6, i32 %4), !insn.addr !617
  %8 = inttoptr i32 %3 to i8*, !insn.addr !618
  %9 = load i8, i8* %8, align 1, !insn.addr !618
  %10 = sext i8 %9 to i32, !insn.addr !618
  store i32 %10, i32* %storemerge.reg2mem, !insn.addr !619
  br label %dec_label_pc_2b78, !insn.addr !619

dec_label_pc_2b78:                                ; preds = %dec_label_pc_2b10, %dec_label_pc_2b4d
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !620

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg3, { 1, 0 }
  uselistorder i32 %arg2, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2b78, { 1, 0 }
}

define i32 @memop_memcmp(i32* %arg1, i32* %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_2b90:
  %storemerge.reg2mem = alloca i32, !insn.addr !621
  %0 = icmp ne i32* %arg2, null, !insn.addr !622
  %1 = icmp ne i32 %arg3, 0, !insn.addr !623
  %or.cond.not = icmp eq i1 %0, %1
  %2 = icmp eq i32 %arg4, 0, !insn.addr !624
  %3 = icmp eq i1 %2, false, !insn.addr !625
  %or.cond5 = icmp eq i1 %or.cond.not, %3
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !626
  br i1 %or.cond5, label %dec_label_pc_2bda, label %dec_label_pc_2c28, !insn.addr !626

dec_label_pc_2bda:                                ; preds = %dec_label_pc_2b90
  %4 = inttoptr i32 %arg3 to i32*, !insn.addr !627
  %5 = call i32 @memcmp(i32* nonnull %arg2, i32* %4, i32 %arg4), !insn.addr !627
  %6 = icmp slt i32 %5, 1, !insn.addr !628
  %7 = icmp slt i32 %5, 0
  %8 = sext i1 %7 to i32
  %storemerge2 = select i1 %6, i32 %8, i32 1
  store i32 %storemerge2, i32* %storemerge.reg2mem
  br label %dec_label_pc_2c28

dec_label_pc_2c28:                                ; preds = %dec_label_pc_2b90, %dec_label_pc_2bda
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !629

; uselistorder directives
  uselistorder i32 %arg4, { 1, 0 }
  uselistorder i32 %arg3, { 1, 0 }
  uselistorder label %dec_label_pc_2c28, { 1, 0 }
}

define i32 @memop_bzero(i32* %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_2c40:
  %storemerge.reg2mem = alloca i32, !insn.addr !630
  %0 = icmp eq i32 %arg2, 0, !insn.addr !631
  %1 = icmp eq i1 %0, false, !insn.addr !632
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !632
  br i1 %1, label %dec_label_pc_2c72, label %dec_label_pc_2c9a, !insn.addr !632

dec_label_pc_2c72:                                ; preds = %dec_label_pc_2c40
  %2 = inttoptr i32 %arg2 to i32*, !insn.addr !633
  %3 = call i32* @memset(i32* %2, i32 0, i32 %arg3), !insn.addr !633
  %4 = inttoptr i32 %arg2 to i8*, !insn.addr !634
  %5 = load i8, i8* %4, align 1, !insn.addr !634
  %6 = zext i8 %5 to i32, !insn.addr !634
  store i32 %6, i32* %storemerge.reg2mem, !insn.addr !635
  br label %dec_label_pc_2c9a, !insn.addr !635

dec_label_pc_2c9a:                                ; preds = %dec_label_pc_2c40, %dec_label_pc_2c72
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !636

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg2, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2c9a, { 1, 0 }
}

define i32 @memop_bcopy(i32* %arg1, i32* %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_2cb0:
  %storemerge.reg2mem = alloca i32, !insn.addr !637
  %0 = icmp ne i32* %arg2, null, !insn.addr !638
  %1 = icmp ne i32 %arg3, 0, !insn.addr !639
  %or.cond.not = icmp eq i1 %0, %1
  %2 = icmp eq i32 %arg4, 0, !insn.addr !640
  %3 = icmp eq i1 %2, false, !insn.addr !641
  %or.cond3 = icmp eq i1 %or.cond.not, %3
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !642
  br i1 %or.cond3, label %dec_label_pc_2cf9, label %dec_label_pc_2d1e, !insn.addr !642

dec_label_pc_2cf9:                                ; preds = %dec_label_pc_2cb0
  %4 = inttoptr i32 %arg3 to i32*, !insn.addr !643
  call void @bcopy(i32* nonnull %arg2, i32* %4, i32 %arg4), !insn.addr !643
  %5 = inttoptr i32 %arg3 to i8*, !insn.addr !644
  %6 = load i8, i8* %5, align 1, !insn.addr !644
  %7 = zext i8 %6 to i32, !insn.addr !644
  store i32 %7, i32* %storemerge.reg2mem, !insn.addr !645
  br label %dec_label_pc_2d1e, !insn.addr !645

dec_label_pc_2d1e:                                ; preds = %dec_label_pc_2cb0, %dec_label_pc_2cf9
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !646

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg4, { 1, 0 }
  uselistorder i32 %arg3, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2d1e, { 1, 0 }
}

define i32 @memop_unaligned_access(i32* %arg1) local_unnamed_addr {
dec_label_pc_2d30:
  %storemerge.reg2mem = alloca i32, !insn.addr !647
  %0 = icmp eq i32* %arg1, null, !insn.addr !648
  %1 = icmp eq i1 %0, false, !insn.addr !649
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !649
  br i1 %1, label %dec_label_pc_2d4f, label %dec_label_pc_2d5e, !insn.addr !649

dec_label_pc_2d4f:                                ; preds = %dec_label_pc_2d30
  %2 = ptrtoint i32* %arg1 to i32
  %3 = add i32 %2, 1, !insn.addr !650
  %4 = inttoptr i32 %3 to i32*, !insn.addr !650
  %5 = load i32, i32* %4, align 4, !insn.addr !650
  store i32 %5, i32* %storemerge.reg2mem, !insn.addr !651
  br label %dec_label_pc_2d5e, !insn.addr !651

dec_label_pc_2d5e:                                ; preds = %dec_label_pc_2d30, %dec_label_pc_2d4f
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !652

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32* %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_2d5e, { 1, 0 }
}

define i32 @memop_memory_barrier(i32* %arg1) local_unnamed_addr {
dec_label_pc_2d70:
  %storemerge.reg2mem = alloca i32, !insn.addr !653
  %0 = icmp eq i32* %arg1, null, !insn.addr !654
  %1 = icmp eq i1 %0, false, !insn.addr !655
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !655
  br i1 %1, label %dec_label_pc_2d8f, label %dec_label_pc_2da9, !insn.addr !655

dec_label_pc_2d8f:                                ; preds = %dec_label_pc_2d70
  %2 = load i32, i32* %arg1, align 4
  %3 = mul i32 %2, 2, !insn.addr !656
  store i32 %3, i32* %storemerge.reg2mem, !insn.addr !657
  br label %dec_label_pc_2da9, !insn.addr !657

dec_label_pc_2da9:                                ; preds = %dec_label_pc_2d70, %dec_label_pc_2d8f
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !658

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 2, { 0, 10, 1, 2, 3, 4, 5, 6, 11, 7, 8, 9 }
  uselistorder i32* null, { 4, 5, 0, 1, 2, 6, 7, 8, 9, 10, 11, 3, 12, 13, 14, 15, 16, 17 }
  uselistorder label %dec_label_pc_2da9, { 1, 0 }
}

define i32 @test_memory_op_functions(i32 %arg1) local_unnamed_addr {
dec_label_pc_2dc0:
  %0 = alloca i32
  %stack_var_-372 = alloca i32, align 4
  %stack_var_-366 = alloca i32, align 4
  %stack_var_-358 = alloca i32, align 4
  %stack_var_-354 = alloca i32, align 4
  %stack_var_-350 = alloca i32, align 4
  %stack_var_-340 = alloca i32, align 4
  %stack_var_-328 = alloca i32, align 4
  %stack_var_-315 = alloca i32, align 4
  %stack_var_-264 = alloca i32, align 4
  %stack_var_-304 = alloca i32, align 4
  %stack_var_-284 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint ([22 x i8]* @global_var_4231 to i32), i32 -10854), !insn.addr !659
  %3 = inttoptr i32 %2 to i8*, !insn.addr !660
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !661
  %5 = add i32 %1, add (i32 ptrtoint ([22 x i8]* @global_var_4231 to i32), i32 -10676), !insn.addr !662
  %6 = inttoptr i32 %5 to i32*, !insn.addr !663
  %7 = call i32* @memcpy(i32* nonnull %stack_var_-284, i32* %6, i32 20), !insn.addr !663
  %8 = call i32* @memset(i32* nonnull %stack_var_-304, i32 0, i32 20), !insn.addr !664
  %9 = call i32 @memop_memset(i32* nonnull %stack_var_-264, i32 10, i32 65, i32 ptrtoint (i32* @0 to i32)), !insn.addr !665
  %10 = add i32 %1, add (i32 ptrtoint ([22 x i8]* @global_var_4231 to i32), i32 -10820), !insn.addr !666
  %11 = inttoptr i32 %10 to i8*, !insn.addr !667
  %12 = call i32 (i8*, ...) @printf(i8* %11), !insn.addr !668
  %13 = call i32 @memop_memcpy(i32* nonnull %stack_var_-304, i32* nonnull %stack_var_-284, i32 20, i32 ptrtoint (i32* @0 to i32)), !insn.addr !669
  %14 = add i32 %1, add (i32 ptrtoint ([22 x i8]* @global_var_4231 to i32), i32 -10803), !insn.addr !670
  %15 = inttoptr i32 %14 to i8*, !insn.addr !671
  %16 = call i32 (i8*, ...) @printf(i8* %15), !insn.addr !672
  %17 = add i32 %1, add (i32 ptrtoint ([22 x i8]* @global_var_4231 to i32), i32 -11476), !insn.addr !673
  %18 = inttoptr i32 %17 to i32*, !insn.addr !673
  %19 = load i32, i32* %18, align 4, !insn.addr !673
  store i32 %19, i32* %stack_var_-315, align 4, !insn.addr !674
  %20 = call i32 @memop_memmove(i32* nonnull %stack_var_-315, i32 10, i32 ptrtoint (i32* @0 to i32)), !insn.addr !675
  %21 = add i32 %1, add (i32 ptrtoint ([22 x i8]* @global_var_4231 to i32), i32 -10786), !insn.addr !676
  %22 = inttoptr i32 %21 to i8*, !insn.addr !677
  %23 = call i32 (i8*, ...) @printf(i8* %22), !insn.addr !678
  %24 = add i32 %1, add (i32 ptrtoint ([22 x i8]* @global_var_4231 to i32), i32 -10656), !insn.addr !679
  %25 = inttoptr i32 %24 to i32*, !insn.addr !679
  %26 = load i32, i32* %25, align 4, !insn.addr !679
  store i32 %26, i32* %stack_var_-328, align 4, !insn.addr !680
  %27 = add i32 %1, add (i32 ptrtoint ([22 x i8]* @global_var_4231 to i32), i32 -10644), !insn.addr !681
  %28 = inttoptr i32 %27 to i32*, !insn.addr !681
  %29 = load i32, i32* %28, align 4, !insn.addr !681
  store i32 %29, i32* %stack_var_-340, align 4, !insn.addr !682
  %30 = call i32 @memop_memcmp(i32* nonnull %stack_var_-328, i32* nonnull %stack_var_-340, i32 12, i32 ptrtoint (i32* @0 to i32)), !insn.addr !683
  %31 = add i32 %1, add (i32 ptrtoint ([22 x i8]* @global_var_4231 to i32), i32 -10769), !insn.addr !684
  %32 = inttoptr i32 %31 to i8*, !insn.addr !685
  %33 = call i32 (i8*, ...) @printf(i8* %32), !insn.addr !686
  %34 = call i32 @memop_bzero(i32* nonnull %stack_var_-350, i32 10, i32 ptrtoint (i32* @0 to i32)), !insn.addr !687
  %35 = add i32 %1, add (i32 ptrtoint ([22 x i8]* @global_var_4231 to i32), i32 -10752), !insn.addr !688
  %36 = inttoptr i32 %35 to i8*, !insn.addr !689
  %37 = call i32 (i8*, ...) @printf(i8* %36), !insn.addr !690
  %38 = add i32 %1, add (i32 ptrtoint ([22 x i8]* @global_var_4231 to i32), i32 -10632), !insn.addr !691
  %39 = inttoptr i32 %38 to i32*, !insn.addr !691
  %40 = load i32, i32* %39, align 4, !insn.addr !691
  store i32 %40, i32* %stack_var_-354, align 4, !insn.addr !692
  %41 = call i32* @memset(i32* nonnull %stack_var_-358, i32 0, i32 4), !insn.addr !693
  %42 = call i32 @memop_bcopy(i32* nonnull %stack_var_-354, i32* nonnull %stack_var_-358, i32 4, i32 ptrtoint (i32* @0 to i32)), !insn.addr !694
  %43 = add i32 %1, add (i32 ptrtoint ([22 x i8]* @global_var_4231 to i32), i32 -10735), !insn.addr !695
  %44 = inttoptr i32 %43 to i8*, !insn.addr !696
  %45 = call i32 (i8*, ...) @printf(i8* %44), !insn.addr !697
  %46 = add i32 %1, add (i32 ptrtoint ([22 x i8]* @global_var_4231 to i32), i32 -10628), !insn.addr !698
  %47 = inttoptr i32 %46 to i32*, !insn.addr !698
  %48 = load i32, i32* %47, align 4, !insn.addr !698
  store i32 %48, i32* %stack_var_-366, align 4, !insn.addr !699
  %49 = call i32 @memop_unaligned_access(i32* nonnull %stack_var_-366), !insn.addr !700
  %50 = add i32 %1, add (i32 ptrtoint ([22 x i8]* @global_var_4231 to i32), i32 -10718), !insn.addr !701
  %51 = inttoptr i32 %50 to i8*, !insn.addr !702
  %52 = call i32 (i8*, ...) @printf(i8* %51), !insn.addr !703
  store i32 5, i32* %stack_var_-372, align 4, !insn.addr !704
  %53 = call i32 @memop_memory_barrier(i32* nonnull %stack_var_-372), !insn.addr !705
  %54 = add i32 %1, add (i32 ptrtoint ([22 x i8]* @global_var_4231 to i32), i32 -10699), !insn.addr !706
  %55 = inttoptr i32 %54 to i8*, !insn.addr !707
  %56 = call i32 (i8*, ...) @printf(i8* %55), !insn.addr !708
  ret i32 %56, !insn.addr !709

; uselistorder directives
  uselistorder i32 %1, { 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32* %stack_var_-284, { 1, 0 }
  uselistorder i32* %stack_var_-358, { 1, 0 }
  uselistorder i32 5, { 11, 2, 3, 4, 5, 6, 7, 8, 0, 1, 9, 10 }
  uselistorder i32 4, { 23, 24, 27, 0, 28, 1, 21, 22, 2, 3, 4, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 5, 6, 7, 8, 9, 10, 25, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 26 }
  uselistorder i32 12, { 1, 0 }
  uselistorder i32 10, { 11, 12, 13, 3, 2, 4, 5, 14, 6, 7, 15, 0, 8, 9, 10, 1, 16 }
  uselistorder i32* (i32*, i32, i32)* @memset, { 4, 3, 2, 1, 0, 5 }
  uselistorder i32* (i32*, i32*, i32)* @memcpy, { 1, 0, 2 }
  uselistorder i32 20, { 3, 4, 5, 6, 1, 7, 8, 2, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 53 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_30d0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 16164, !insn.addr !710
  %3 = call i32 @test_stack_memory(i32 %2), !insn.addr !711
  %4 = call i32 @test_heap_memory(i32 ptrtoint (i32* @0 to i32)), !insn.addr !712
  %5 = call i32 @test_static_global(i32 ptrtoint (i32* @0 to i32)), !insn.addr !713
  %6 = call i32 @test_memory_op_functions(i32 ptrtoint (i32* @0 to i32)), !insn.addr !714
  ret i32 0, !insn.addr !715

; uselistorder directives
  uselistorder i32 0, { 20, 39, 40, 29, 33, 41, 49, 50, 0, 30, 34, 51, 31, 35, 32, 52, 36, 37, 53, 54, 55, 1, 56, 57, 42, 38, 58, 59, 47, 2, 60, 3, 22, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 27, 4, 5, 28, 6, 7, 8, 9, 72, 73, 10, 23, 11, 12, 13, 14, 24, 15, 25, 48, 43, 16, 26, 74, 75, 17, 18, 19, 76, 21, 44, 45, 46 }
}

define i32 @extern_function(i32 %arg1) local_unnamed_addr {
dec_label_pc_3120:
  %0 = mul i32 %arg1, 3, !insn.addr !716
  ret i32 %0, !insn.addr !717

; uselistorder directives
  uselistorder i32 3, { 1, 0, 2, 3, 4 }
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_3130:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !718
  %ebx.0.reg2mem = alloca i32, !insn.addr !718
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !719
  %3 = add i32 %1, 15827, !insn.addr !720
  %4 = inttoptr i32 %3 to i32*, !insn.addr !720
  %5 = load i32, i32* %4, align 4, !insn.addr !720
  %6 = icmp eq i32 %5, -1, !insn.addr !721
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !722
  store i32 -1, i32* %merge.reg2mem, !insn.addr !722
  br i1 %6, label %dec_label_pc_316d, label %dec_label_pc_3160, !insn.addr !722

dec_label_pc_3160:                                ; preds = %dec_label_pc_3130, %dec_label_pc_3160
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !723
  %8 = inttoptr i32 %7 to i32*, !insn.addr !723
  %9 = load i32, i32* %8, align 4, !insn.addr !723
  %10 = icmp eq i32 %9, -1, !insn.addr !724
  %11 = icmp eq i1 %10, false, !insn.addr !725
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !725
  store i32 %9, i32* %merge.reg2mem, !insn.addr !725
  br i1 %11, label %dec_label_pc_3160, label %dec_label_pc_316d, !insn.addr !725

dec_label_pc_316d:                                ; preds = %dec_label_pc_3160, %dec_label_pc_3130
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !726

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 31, 6, 7, 0, 8, 1, 2, 3, 4, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 5, 30 }
  uselistorder i32 -4, { 4, 0, 1, 2, 3 }
  uselistorder i32 -1, { 26, 0, 27, 1, 2, 3, 4, 28, 5, 6, 7, 8, 25, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder i32 ptrtoint (i32* @0 to i32), { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 0, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44 }
  uselistorder label %dec_label_pc_3160, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_317c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !727
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !728
  ret i32 %3, !insn.addr !729

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 1, 0 }
  uselistorder i32 1, { 33, 36, 35, 32, 31, 103, 102, 101, 100, 99, 98, 97, 96, 95, 94, 93, 30, 37, 117, 38, 39, 40, 88, 89, 41, 118, 42, 43, 44, 90, 104, 29, 45, 28, 105, 27, 46, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 119, 120, 47, 16, 48, 15, 14, 121, 13, 91, 107, 106, 49, 12, 122, 51, 50, 52, 53, 11, 123, 55, 54, 57, 56, 124, 66, 65, 64, 63, 62, 61, 60, 59, 58, 67, 68, 125, 70, 69, 126, 127, 74, 73, 72, 71, 128, 78, 77, 76, 75, 129, 80, 79, 109, 111, 110, 108, 10, 130, 112, 82, 81, 131, 92, 113, 84, 83, 132, 114, 85, 34, 133, 115, 86, 9, 8, 7, 87, 6, 5, 4, 3, 116, 2, 1, 0 }
}

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32* @memmove(i32*, i32*, i32) local_unnamed_addr

declare void @free(i32*) local_unnamed_addr

declare i32* @memcpy(i32*, i32*, i32) local_unnamed_addr

declare i32 @memcmp(i32*, i32*, i32) local_unnamed_addr

declare void @perror(i8*) local_unnamed_addr

declare void @bcopy(i32*, i32*, i32) local_unnamed_addr

declare i32 @waitpid(i32, i32*, i32) local_unnamed_addr

declare i32* @realloc(i32*, i32) local_unnamed_addr

declare i32* @malloc(i32) local_unnamed_addr

declare void @exit(i32) local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

declare i32 @fork() local_unnamed_addr

declare i32* @calloc(i32, i32) local_unnamed_addr

declare i32 @__asm_hlt() local_unnamed_addr

declare void @__writegsdword(i32, i32) local_unnamed_addr

declare i32 @__readgsdword(i32) local_unnamed_addr

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
!46 = !{i64 4818}
!47 = !{i64 4827}
!48 = !{i64 4840}
!49 = !{i64 4848}
!50 = !{i64 4849}
!51 = !{i64 4884}
!52 = !{i64 4877}
!53 = !{i64 4891}
!54 = !{i64 4868}
!55 = !{i64 4909}
!56 = !{i64 4939}
!57 = !{i64 4946}
!58 = !{i64 4980}
!59 = !{i64 4989}
!60 = !{i64 5021}
!61 = !{i64 5027}
!62 = !{i64 5040}
!63 = !{i64 5041}
!64 = !{i64 5094}
!65 = !{i64 5107}
!66 = !{i64 5069}
!67 = !{i64 5121}
!68 = !{i64 5135}
!69 = !{i64 5136}
!70 = !{i64 5149}
!71 = !{i64 5162}
!72 = !{i64 5188}
!73 = !{i64 5195}
!74 = !{i64 5198}
!75 = !{i64 5200}
!76 = !{i64 5235}
!77 = !{i64 5241}
!78 = !{i64 5247}
!79 = !{i64 5223}
!80 = !{i64 5266}
!81 = !{i64 5267}
!82 = !{i64 5274}
!83 = !{i64 5283}
!84 = !{i64 5291}
!85 = !{i64 5296}
!86 = !{i64 5305}
!87 = !{i64 5309}
!88 = !{i64 5330}
!89 = !{i64 5337}
!90 = !{i64 5340}
!91 = !{i64 5342}
!92 = !{i64 5362}
!93 = !{i64 5368}
!94 = !{i64 5378}
!95 = !{i64 5384}
!96 = !{i64 5409}
!97 = !{i64 5410}
!98 = !{i64 5417}
!99 = !{i64 5420}
!100 = !{i64 5429}
!101 = !{i64 5529}
!102 = !{i64 5558}
!103 = !{i64 5564}
!104 = !{i64 5567}
!105 = !{i64 5582}
!106 = !{i64 5590}
!107 = !{i64 5596}
!108 = !{i64 5603}
!109 = !{i64 5618}
!110 = !{i64 5626}
!111 = !{i64 5632}
!112 = !{i64 5639}
!113 = !{i64 5654}
!114 = !{i64 5662}
!115 = !{i64 5668}
!116 = !{i64 5675}
!117 = !{i64 5689}
!118 = !{i64 5697}
!119 = !{i64 5703}
!120 = !{i64 5710}
!121 = !{i64 5742}
!122 = !{i64 5750}
!123 = !{i64 5777}
!124 = !{i64 5785}
!125 = !{i64 5791}
!126 = !{i64 5798}
!127 = !{i64 5806}
!128 = !{i64 5814}
!129 = !{i64 5820}
!130 = !{i64 5827}
!131 = !{i64 5842}
!132 = !{i64 5850}
!133 = !{i64 5856}
!134 = !{i64 5863}
!135 = !{i64 5878}
!136 = !{i64 5886}
!137 = !{i64 5892}
!138 = !{i64 5899}
!139 = !{i64 5907}
!140 = !{i64 5924}
!141 = !{i64 5932}
!142 = !{i64 5938}
!143 = !{i64 5945}
!144 = !{i64 5955}
!145 = !{i64 5968}
!146 = !{i64 5996}
!147 = !{i64 6002}
!148 = !{i64 6010}
!149 = !{i64 6014}
!150 = !{i64 6045}
!151 = !{i64 6054}
!152 = !{i64 6063}
!153 = !{i64 6069}
!154 = !{i64 6097}
!155 = !{i64 6098}
!156 = !{i64 6105}
!157 = !{i64 6117}
!158 = !{i64 6125}
!159 = !{i64 6136}
!160 = !{i64 6144}
!161 = !{i64 6183}
!162 = !{i64 6191}
!163 = !{i64 6195}
!164 = !{i64 6233}
!165 = !{i64 6245}
!166 = !{i64 6248}
!167 = !{i64 6257}
!168 = !{i64 6277}
!169 = !{i64 6285}
!170 = !{i64 6296}
!171 = !{i64 6304}
!172 = !{i64 6333}
!173 = !{i64 6341}
!174 = !{i64 6345}
!175 = !{i64 6383}
!176 = !{i64 6392}
!177 = !{i64 6374}
!178 = !{i64 6415}
!179 = !{i64 6435}
!180 = !{i64 6443}
!181 = !{i64 6447}
!182 = !{i64 6462}
!183 = !{i64 6474}
!184 = !{i64 6502}
!185 = !{i64 6512}
!186 = !{i64 6518}
!187 = !{i64 6496}
!188 = !{i64 6532}
!189 = !{i64 6535}
!190 = !{i64 6538}
!191 = !{i64 6547}
!192 = !{i64 6553}
!193 = !{i64 6586}
!194 = !{i64 6594}
!195 = !{i64 6605}
!196 = !{i64 6608}
!197 = !{i64 6636}
!198 = !{i64 6642}
!199 = !{i64 6650}
!200 = !{i64 6654}
!201 = !{i64 6685}
!202 = !{i64 6691}
!203 = !{i64 6701}
!204 = !{i64 6707}
!205 = !{i64 6735}
!206 = !{i64 6736}
!207 = !{i64 6743}
!208 = !{i64 6755}
!209 = !{i64 6763}
!210 = !{i64 6774}
!211 = !{i64 6784}
!212 = !{i64 6816}
!213 = !{i64 6824}
!214 = !{i64 6828}
!215 = !{i64 6855}
!216 = !{i64 6860}
!217 = !{i64 6866}
!218 = !{i64 6872}
!219 = !{i64 6877}
!220 = !{i64 6889}
!221 = !{i64 6897}
!222 = !{i64 6908}
!223 = !{i64 6912}
!224 = !{i64 6944}
!225 = !{i64 6954}
!226 = !{i64 6959}
!227 = !{i64 6962}
!228 = !{i64 6988}
!229 = !{i64 7001}
!230 = !{i64 7011}
!231 = !{i64 7013}
!232 = !{i64 7019}
!233 = !{i64 7021}
!234 = !{i64 7025}
!235 = !{i64 7042}
!236 = !{i64 7054}
!237 = !{i64 7067}
!238 = !{i64 7076}
!239 = !{i64 7078}
!240 = !{i64 7081}
!241 = !{i64 7088}
!242 = !{i64 7103}
!243 = !{i64 7104}
!244 = !{i64 7343}
!245 = !{i64 7167}
!246 = !{i64 7175}
!247 = !{i64 7179}
!248 = !{i64 7190}
!249 = !{i64 7194}
!250 = !{i64 7212}
!251 = !{i64 7224}
!252 = !{i64 7246}
!253 = !{i64 7253}
!254 = !{i64 7258}
!255 = !{i64 7265}
!256 = !{i64 7269}
!257 = !{i64 7298}
!258 = !{i64 7304}
!259 = !{i64 7315}
!260 = !{i64 7151}
!261 = !{i64 7352}
!262 = !{i64 7354}
!263 = !{i64 7363}
!264 = !{i64 7339}
!265 = !{i64 7401}
!266 = !{i64 7413}
!267 = !{i64 7379}
!268 = !{i64 7383}
!269 = !{i64 7437}
!270 = !{i64 7469}
!271 = !{i64 7477}
!272 = !{i64 7481}
!273 = !{i64 7493}
!274 = !{i64 7498}
!275 = !{i64 7508}
!276 = !{i64 7523}
!277 = !{i64 7536}
!278 = !{i64 7565}
!279 = !{i64 7573}
!280 = !{i64 7577}
!281 = !{i64 7605}
!282 = !{i64 7618}
!283 = !{i64 7628}
!284 = !{i64 7638}
!285 = !{i64 7644}
!286 = !{i64 7648}
!287 = !{i64 7657}
!288 = !{i64 7661}
!289 = !{i64 7692}
!290 = !{i64 7700}
!291 = !{i64 7704}
!292 = !{i64 7722}
!293 = !{i64 7736}
!294 = !{i64 7748}
!295 = !{i64 7759}
!296 = !{i64 7767}
!297 = !{i64 7775}
!298 = !{i64 7789}
!299 = !{i64 7800}
!300 = !{i64 7806}
!301 = !{i64 7820}
!302 = !{i64 7828}
!303 = !{i64 7839}
!304 = !{i64 7840}
!305 = !{i64 7865}
!306 = !{i64 7871}
!307 = !{i64 7879}
!308 = !{i64 7883}
!309 = !{i64 7914}
!310 = !{i64 7929}
!311 = !{i64 7935}
!312 = !{i64 7960}
!313 = !{i64 7961}
!314 = !{i64 7968}
!315 = !{i64 7971}
!316 = !{i64 7982}
!317 = !{i64 7984}
!318 = !{i64 8013}
!319 = !{i64 8021}
!320 = !{i64 8025}
!321 = !{i64 8049}
!322 = !{i64 8066}
!323 = !{i64 8072}
!324 = !{i64 8079}
!325 = !{i64 8093}
!326 = !{i64 8101}
!327 = !{i64 8109}
!328 = !{i64 8120}
!329 = !{i64 8128}
!330 = !{i64 8153}
!331 = !{i64 8157}
!332 = !{i64 8173}
!333 = !{i64 8181}
!334 = !{i64 8185}
!335 = !{i64 8209}
!336 = !{i64 8221}
!337 = !{i64 8235}
!338 = !{i64 8247}
!339 = !{i64 8255}
!340 = !{i64 8257}
!341 = !{i64 8268}
!342 = !{i64 8272}
!343 = !{i64 8301}
!344 = !{i64 8309}
!345 = !{i64 8313}
!346 = !{i64 8348}
!347 = !{i64 8358}
!348 = !{i64 8364}
!349 = !{i64 8342}
!350 = !{i64 8381}
!351 = !{i64 8392}
!352 = !{i64 8400}
!353 = !{i64 8411}
!354 = !{i64 8416}
!355 = !{i64 8438}
!356 = !{i64 8444}
!357 = !{i64 8447}
!358 = !{i64 8462}
!359 = !{i64 8470}
!360 = !{i64 8476}
!361 = !{i64 8483}
!362 = !{i64 8498}
!363 = !{i64 8506}
!364 = !{i64 8512}
!365 = !{i64 8519}
!366 = !{i64 8527}
!367 = !{i64 8535}
!368 = !{i64 8541}
!369 = !{i64 8548}
!370 = !{i64 8563}
!371 = !{i64 8571}
!372 = !{i64 8577}
!373 = !{i64 8584}
!374 = !{i64 8599}
!375 = !{i64 8607}
!376 = !{i64 8613}
!377 = !{i64 8620}
!378 = !{i64 8628}
!379 = !{i64 8641}
!380 = !{i64 8649}
!381 = !{i64 8655}
!382 = !{i64 8662}
!383 = !{i64 8667}
!384 = !{i64 8671}
!385 = !{i64 8683}
!386 = !{i64 8689}
!387 = !{i64 8697}
!388 = !{i64 8703}
!389 = !{i64 8711}
!390 = !{i64 8719}
!391 = !{i64 8725}
!392 = !{i64 8732}
!393 = !{i64 8740}
!394 = !{i64 8748}
!395 = !{i64 8754}
!396 = !{i64 8761}
!397 = !{i64 8776}
!398 = !{i64 8784}
!399 = !{i64 8790}
!400 = !{i64 8797}
!401 = !{i64 8805}
!402 = !{i64 8811}
!403 = !{i64 8814}
!404 = !{i64 8822}
!405 = !{i64 8830}
!406 = !{i64 8834}
!407 = !{i64 8843}
!408 = !{i64 8857}
!409 = !{i64 8863}
!410 = !{i64 8870}
!411 = !{i64 8887}
!412 = !{i64 8827}
!413 = !{i64 8896}
!414 = !{i64 8928}
!415 = !{i64 8933}
!416 = !{i64 8936}
!417 = !{i64 8939}
!418 = !{i64 8942}
!419 = !{i64 8962}
!420 = !{i64 8968}
!421 = !{i64 8975}
!422 = !{i64 8980}
!423 = !{i64 8994}
!424 = !{i64 8997}
!425 = !{i64 9003}
!426 = !{i64 9018}
!427 = !{i64 9024}
!428 = !{i64 9031}
!429 = !{i64 9049}
!430 = !{i64 9055}
!431 = !{i64 9058}
!432 = !{i64 9073}
!433 = !{i64 9103}
!434 = !{i64 9109}
!435 = !{i64 9112}
!436 = !{i64 9125}
!437 = !{i64 9151}
!438 = !{i64 9157}
!439 = !{i64 9161}
!440 = !{i64 9168}
!441 = !{i64 9196}
!442 = !{i64 9230}
!443 = !{i64 9237}
!444 = !{i64 9247}
!445 = !{i64 9248}
!446 = !{i64 9272}
!447 = !{i64 9276}
!448 = !{i64 9310}
!449 = !{i64 9316}
!450 = !{i64 9331}
!451 = !{i64 9341}
!452 = !{i64 9370}
!453 = !{i64 9375}
!454 = !{i64 9383}
!455 = !{i64 9401}
!456 = !{i64 9405}
!457 = !{i64 9423}
!458 = !{i64 9429}
!459 = !{i64 9437}
!460 = !{i64 9441}
!461 = !{i64 9480}
!462 = !{i64 9490}
!463 = !{i64 9519}
!464 = !{i64 9525}
!465 = !{i64 9529}
!466 = !{i64 9533}
!467 = !{i64 9551}
!468 = !{i64 9558}
!469 = !{i64 9583}
!470 = !{i64 9591}
!471 = !{i64 9615}
!472 = !{i64 9621}
!473 = !{i64 9628}
!474 = !{i64 9641}
!475 = !{i64 9653}
!476 = !{i64 9660}
!477 = !{i64 9679}
!478 = !{i64 9686}
!479 = !{i64 9705}
!480 = !{i64 9717}
!481 = !{i64 9724}
!482 = !{i64 9753}
!483 = !{i64 9806}
!484 = !{i64 9808}
!485 = !{i64 9835}
!486 = !{i64 9841}
!487 = !{i64 9848}
!488 = !{i64 9863}
!489 = !{i64 9868}
!490 = !{i64 9887}
!491 = !{i64 9903}
!492 = !{i64 9909}
!493 = !{i64 9915}
!494 = !{i64 9922}
!495 = !{i64 9945}
!496 = !{i64 9951}
!497 = !{i64 9957}
!498 = !{i64 9961}
!499 = !{i64 9987}
!500 = !{i64 10000}
!501 = !{i64 10010}
!502 = !{i64 10016}
!503 = !{i64 10038}
!504 = !{i64 10042}
!505 = !{i64 10065}
!506 = !{i64 10054}
!507 = !{i64 10056}
!508 = !{i64 10075}
!509 = !{i64 10102}
!510 = !{i64 10108}
!511 = !{i64 10111}
!512 = !{i64 10119}
!513 = !{i64 10127}
!514 = !{i64 10133}
!515 = !{i64 10140}
!516 = !{i64 10148}
!517 = !{i64 10156}
!518 = !{i64 10162}
!519 = !{i64 10169}
!520 = !{i64 10184}
!521 = !{i64 10192}
!522 = !{i64 10198}
!523 = !{i64 10205}
!524 = !{i64 10220}
!525 = !{i64 10237}
!526 = !{i64 10245}
!527 = !{i64 10251}
!528 = !{i64 10258}
!529 = !{i64 10275}
!530 = !{i64 10296}
!531 = !{i64 10311}
!532 = !{i64 10319}
!533 = !{i64 10325}
!534 = !{i64 10332}
!535 = !{i64 10340}
!536 = !{i64 10348}
!537 = !{i64 10354}
!538 = !{i64 10361}
!539 = !{i64 10369}
!540 = !{i64 10377}
!541 = !{i64 10383}
!542 = !{i64 10390}
!543 = !{i64 10398}
!544 = !{i64 10406}
!545 = !{i64 10412}
!546 = !{i64 10419}
!547 = !{i64 10427}
!548 = !{i64 10435}
!549 = !{i64 10441}
!550 = !{i64 10448}
!551 = !{i64 10456}
!552 = !{i64 10464}
!553 = !{i64 10470}
!554 = !{i64 10477}
!555 = !{i64 10485}
!556 = !{i64 10493}
!557 = !{i64 10499}
!558 = !{i64 10506}
!559 = !{i64 10521}
!560 = !{i64 10529}
!561 = !{i64 10537}
!562 = !{i64 10543}
!563 = !{i64 10550}
!564 = !{i64 10558}
!565 = !{i64 10567}
!566 = !{i64 10582}
!567 = !{i64 10590}
!568 = !{i64 10596}
!569 = !{i64 10603}
!570 = !{i64 10611}
!571 = !{i64 10624}
!572 = !{i64 10632}
!573 = !{i64 10638}
!574 = !{i64 10645}
!575 = !{i64 10653}
!576 = !{i64 10661}
!577 = !{i64 10667}
!578 = !{i64 10674}
!579 = !{i64 10689}
!580 = !{i64 10697}
!581 = !{i64 10703}
!582 = !{i64 10710}
!583 = !{i64 10718}
!584 = !{i64 10726}
!585 = !{i64 10732}
!586 = !{i64 10739}
!587 = !{i64 10749}
!588 = !{i64 10761}
!589 = !{i64 10765}
!590 = !{i64 10768}
!591 = !{i64 10799}
!592 = !{i64 10809}
!593 = !{i64 10813}
!594 = !{i64 10803}
!595 = !{i64 10840}
!596 = !{i64 10859}
!597 = !{i64 10867}
!598 = !{i64 10870}
!599 = !{i64 10881}
!600 = !{i64 10896}
!601 = !{i64 10927}
!602 = !{i64 10937}
!603 = !{i64 10947}
!604 = !{i64 10951}
!605 = !{i64 10931}
!606 = !{i64 10992}
!607 = !{i64 11009}
!608 = !{i64 11012}
!609 = !{i64 11023}
!610 = !{i64 11024}
!611 = !{i64 11053}
!612 = !{i64 11063}
!613 = !{i64 11067}
!614 = !{i64 11057}
!615 = !{i64 11091}
!616 = !{i64 11100}
!617 = !{i64 11113}
!618 = !{i64 11121}
!619 = !{i64 11125}
!620 = !{i64 11137}
!621 = !{i64 11152}
!622 = !{i64 11184}
!623 = !{i64 11194}
!624 = !{i64 11204}
!625 = !{i64 11208}
!626 = !{i64 11188}
!627 = !{i64 11248}
!628 = !{i64 11260}
!629 = !{i64 11313}
!630 = !{i64 11328}
!631 = !{i64 11356}
!632 = !{i64 11360}
!633 = !{i64 11404}
!634 = !{i64 11412}
!635 = !{i64 11415}
!636 = !{i64 11426}
!637 = !{i64 11440}
!638 = !{i64 11471}
!639 = !{i64 11481}
!640 = !{i64 11491}
!641 = !{i64 11495}
!642 = !{i64 11475}
!643 = !{i64 11536}
!644 = !{i64 11544}
!645 = !{i64 11547}
!646 = !{i64 11558}
!647 = !{i64 11568}
!648 = !{i64 11577}
!649 = !{i64 11581}
!650 = !{i64 11602}
!651 = !{i64 11611}
!652 = !{i64 11621}
!653 = !{i64 11632}
!654 = !{i64 11641}
!655 = !{i64 11645}
!656 = !{i64 11684}
!657 = !{i64 11686}
!658 = !{i64 11696}
!659 = !{i64 11740}
!660 = !{i64 11746}
!661 = !{i64 11749}
!662 = !{i64 11766}
!663 = !{i64 11787}
!664 = !{i64 11825}
!665 = !{i64 11861}
!666 = !{i64 11872}
!667 = !{i64 11878}
!668 = !{i64 11885}
!669 = !{i64 11923}
!670 = !{i64 11934}
!671 = !{i64 11940}
!672 = !{i64 11947}
!673 = !{i64 11958}
!674 = !{i64 11964}
!675 = !{i64 12025}
!676 = !{i64 12036}
!677 = !{i64 12042}
!678 = !{i64 12049}
!679 = !{i64 12060}
!680 = !{i64 12066}
!681 = !{i64 12096}
!682 = !{i64 12102}
!683 = !{i64 12159}
!684 = !{i64 12170}
!685 = !{i64 12176}
!686 = !{i64 12183}
!687 = !{i64 12211}
!688 = !{i64 12222}
!689 = !{i64 12228}
!690 = !{i64 12235}
!691 = !{i64 12246}
!692 = !{i64 12252}
!693 = !{i64 12285}
!694 = !{i64 12323}
!695 = !{i64 12334}
!696 = !{i64 12340}
!697 = !{i64 12347}
!698 = !{i64 12358}
!699 = !{i64 12364}
!700 = !{i64 12391}
!701 = !{i64 12402}
!702 = !{i64 12408}
!703 = !{i64 12415}
!704 = !{i64 12426}
!705 = !{i64 12445}
!706 = !{i64 12456}
!707 = !{i64 12462}
!708 = !{i64 12469}
!709 = !{i64 12482}
!710 = !{i64 12509}
!711 = !{i64 12525}
!712 = !{i64 12533}
!713 = !{i64 12541}
!714 = !{i64 12549}
!715 = !{i64 12561}
!716 = !{i64 12582}
!717 = !{i64 12587}
!718 = !{i64 12592}
!719 = !{i64 12596}
!720 = !{i64 12607}
!721 = !{i64 12613}
!722 = !{i64 12616}
!723 = !{i64 12642}
!724 = !{i64 12648}
!725 = !{i64 12651}
!726 = !{i64 12657}
!727 = !{i64 12676}
!728 = !{i64 12687}
!729 = !{i64 12696}
