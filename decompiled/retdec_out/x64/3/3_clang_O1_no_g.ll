source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_60a8 = global i64 0
@global_var_5ff8 = local_unnamed_addr global i64 0
@global_var_788 = local_unnamed_addr global i64 0
@global_var_800 = global i64 0
@global_var_3020 = constant [28 x i8] c"MEM-L1-01 (local_vars): %d\0A\00"
@global_var_303c = constant [29 x i8] c"MEM-L1-02 (local_array): %d\0A\00"
@global_var_3059 = constant [30 x i8] c"MEM-L1-03 (local_struct): %d\0A\00"
@global_var_3077 = constant [34 x i8] c"MEM-L1-04 (address_of_local): %d\0A\00"
@global_var_3099 = constant [34 x i8] c"MEM-L1-05 (address_of_array): %d\0A\00"
@global_var_30bb = constant [35 x i8] c"MEM-L2-01 (large_stack_frame): %d\0A\00"
@global_var_30de = constant [27 x i8] c"MEM-L2-02 (vla_stack): %d\0A\00"
@global_var_30f9 = constant [30 x i8] c"MEM-L2-03 (alloca_usage): %d\0A\00"
@global_var_3117 = constant [29 x i8] c"MEM-L2-04 (stack_alias): %d\0A\00"
@global_var_3134 = constant [23 x i8] c"value before free: %d\0A\00"
@global_var_44c = global i64 0
@global_var_314b = constant [29 x i8] c"HEAP-L2-01 (heap_basic): %d\0A\00"
@global_var_3168 = constant [30 x i8] c"HEAP-L2-02 (heap_calloc): %d\0A\00"
@global_var_3186 = constant [31 x i8] c"HEAP-L2-03 (heap_realloc): %d\0A\00"
@global_var_31a5 = constant [29 x i8] c"HEAP-L2-04 (heap_array): %d\0A\00"
@global_var_31c2 = constant [30 x i8] c"HEAP-L2-05 (heap_struct): %d\0A\00"
@global_var_31e0 = constant [30 x i8] c"HEAP-L2-06 (heap_nested): %d\0A\00"
@global_var_31fe = constant [35 x i8] c"HEAP-L3-01 (linked_list_heap): %d\0A\00"
@global_var_3221 = constant [38 x i8] c"HEAP-L3-02 (tree_heap_traversal): %d\0A\00"
@global_var_3247 = constant [30 x i8] c"HEAP-L3-03 (memory_leak): %d\0A\00"
@global_var_3265 = constant [32 x i8] c"HEAP-L3-04 (dangling_pointer): \00"
@global_var_3295 = constant i64 -1688658660658275102
@global_var_60b4 = local_unnamed_addr global i64 0
@global_var_3566 = constant [11 x i8] c"HelloWorld\00"
@global_var_6098 = local_unnamed_addr global [11 x i8]* @global_var_3566
@global_var_609c = local_unnamed_addr global i64 429496729600
@global_var_60b8 = local_unnamed_addr global i64 0
@global_var_60c0 = local_unnamed_addr global i64 0
@global_var_3306 = constant [35 x i8] c"STM-L1-01 (global_var_access): %d\0A\00"
@global_var_3329 = constant [33 x i8] c"STM-L1-01 (global_var_read): %d\0A\00"
@global_var_334a = constant [37 x i8] c"STM-L1-02 (global_array_access): %d\0A\00"
@global_var_336f = constant [30 x i8] c"STM-L1-03 (static_local): %d\0A\00"
@global_var_338d = constant [34 x i8] c"STM-L1-04 (call_static_func): %d\0A\00"
@global_var_33af = constant [38 x i8] c"STM-L2-01 (access_extern_global): %d\0A\00"
@global_var_33d5 = constant [34 x i8] c"STM-L2-02 (call_extern_func): %d\0A\00"
@global_var_33f7 = constant [33 x i8] c"STM-L2-03 (read_const_data): %d\0A\00"
@global_var_3418 = constant [32 x i8] c"STM-L2-04 (access_bss_var): %d\0A\00"
@global_var_3438 = constant [35 x i8] c"STM-L2-04 (access_bss_buffer): %d\0A\00"
@global_var_345b = constant [38 x i8] c"STM-L2-05 (global_struct_access): %d\0A\00"
@global_var_3481 = constant [29 x i8] c"STM-L2-06 (file_static): %d\0A\00"
@global_var_349e = constant [33 x i8] c"STM-L2-07 (global_func_ptr): %d\0A\00"
@global_var_34bf = constant [35 x i8] c"STM-L2-08 (global_heap_store): %d\0A\00"
@global_var_34e2 = constant [37 x i8] c"STM-L2-09 (static_complex_init): %d\0A\00"
@global_var_3507 = constant [28 x i8] c"STM-L3-01 (tls_access): %d\0A\00"
@global_var_3523 = constant [33 x i8] c"STM-L3-02 (init_order_test): %d\0A\00"
@global_var_3544 = constant [17 x i8] c"MEMOP-L2-01: %d\0A\00"
@global_var_3555 = constant [17 x i8] c"MEMOP-L2-02: %d\0A\00"
@global_var_3571 = constant [17 x i8] c"MEMOP-L2-03: %c\0A\00"
@global_var_3582 = constant [17 x i8] c"MEMOP-L2-04: %d\0A\00"
@global_var_3593 = constant [17 x i8] c"MEMOP-L2-05: %d\0A\00"
@global_var_35a4 = constant [17 x i8] c"MEMOP-L2-06: %d\0A\00"
@global_var_35b5 = constant [19 x i8] c"MEMOP-L3-01: 0x%x\0A\00"
@global_var_35c8 = constant [17 x i8] c"MEMOP-L3-02: %d\0A\00"
@0 = external global i32
@1 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\88\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_35d9 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @1, i64 0, i64 0)
@2 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\A0\86\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_35f7 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @2, i64 0, i64 0)
@3 = internal constant [65 x i8] c"\E2\9C\97 \E5\AD\90\E8\BF\9B\E7\A8\8B\E8\A2\AB\E4\BF\A1\E5\8F\B7\E7\BB\88\E6\AD\A2 (\E4\BF\A1\E5\8F\B7%d) - \E9\87\8E\E6\8C\87\E9\92\88\E5\AF\BC\E8\87\B4\E5\B4\A9\E6\BA\83\0A\00"
@global_var_32ba = constant i8* getelementptr inbounds ([65 x i8], [65 x i8]* @3, i64 0, i64 0)
@4 = internal constant [11 x i8] c"fork\E5\A4\B1\E8\B4\A5\00"
@global_var_32fb = constant i8* getelementptr inbounds ([11 x i8], [11 x i8]* @4, i64 0, i64 0)
@5 = internal constant [16 x i8] c"%d (\E5\AD\90\E8\BF\9B\E7\A8\8B)\0A\00"
@global_var_3285 = constant i8* getelementptr inbounds ([16 x i8], [16 x i8]* @5, i64 0, i64 0)
@global_var_60b0 = local_unnamed_addr global i32 0
@global_var_60b1 = global i32 0
@global_var_3660 = constant i32* inttoptr (i64 4294967296 to i32*)
@global_var_60b5 = global i32 0
@global_var_60a4 = local_unnamed_addr global i32 23
@global_var_60c6 = external global i32
@global_var_60a0 = local_unnamed_addr global i32 100
@6 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\9D\99\E6\80\81\E4\B8\8E\E5\85\A8\E5\B1\80\E5\86\85\E5\AD\98 ===\00"
@global_var_3615 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @6, i64 0, i64 0)
@7 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C\E5\87\BD\E6\95\B0 ===\00"
@global_var_3639 = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @7, i64 0, i64 0)

define i64 @_init() local_unnamed_addr {
dec_label_pc_1000:
  %rax.0.reg2mem = alloca i64, !insn.addr !0
  %0 = load i64, i64* inttoptr (i64 24552 to i64*), align 8, !insn.addr !1
  %1 = icmp eq i64 %0, 0, !insn.addr !2
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !3
  br i1 %1, label %dec_label_pc_1016, label %dec_label_pc_1014, !insn.addr !3

dec_label_pc_1014:                                ; preds = %dec_label_pc_1000
  call void @__gmon_start__(), !insn.addr !4
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !4
  br label %dec_label_pc_1016, !insn.addr !4

dec_label_pc_1016:                                ; preds = %dec_label_pc_1014, %dec_label_pc_1000
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !5
}

define void @function_1030(i64* %ptr) local_unnamed_addr {
dec_label_pc_1030:
  call void @free(i64* %ptr), !insn.addr !6
  ret void, !insn.addr !6
}

define i32 @function_1040(i8* %s) local_unnamed_addr {
dec_label_pc_1040:
  %0 = call i32 @puts(i8* %s), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @function_1050(i8* %format, ...) local_unnamed_addr {
dec_label_pc_1050:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i64* @function_1060(i64* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_1060:
  %0 = call i64* @memset(i64* %s, i32 %c, i32 %n), !insn.addr !9
  ret i64* %0, !insn.addr !9
}

define i32 @function_1070(i64* %s1, i64* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_1070:
  %0 = call i32 @memcmp(i64* %s1, i64* %s2, i32 %n), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i64* @function_1080(i32 %nmemb, i32 %size) local_unnamed_addr {
dec_label_pc_1080:
  %0 = call i64* @calloc(i32 %nmemb, i32 %size), !insn.addr !11
  ret i64* %0, !insn.addr !11
}

define i64* @function_1090(i64* %dest, i64* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1090:
  %0 = call i64* @memcpy(i64* %dest, i64* %src, i32 %n), !insn.addr !12
  ret i64* %0, !insn.addr !12
}

define i64* @function_10a0(i32 %size) local_unnamed_addr {
dec_label_pc_10a0:
  %0 = call i64* @malloc(i32 %size), !insn.addr !13
  ret i64* %0, !insn.addr !13
}

define i64* @function_10b0(i64* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_10b0:
  %0 = call i64* @realloc(i64* %ptr, i32 %size), !insn.addr !14
  ret i64* %0, !insn.addr !14
}

define i64* @function_10c0(i64* %dest, i64* %src, i32 %n) local_unnamed_addr {
dec_label_pc_10c0:
  %0 = call i64* @memmove(i64* %dest, i64* %src, i32 %n), !insn.addr !15
  ret i64* %0, !insn.addr !15
}

define i32 @function_10d0(i32 %pid, i32* %stat_loc, i32 %options) local_unnamed_addr {
dec_label_pc_10d0:
  %0 = call i32 @waitpid(i32 %pid, i32* %stat_loc, i32 %options), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define void @function_10e0(i8* %s) local_unnamed_addr {
dec_label_pc_10e0:
  call void @perror(i8* %s), !insn.addr !17
  ret void, !insn.addr !17
}

define void @function_10f0(i32 %status) local_unnamed_addr {
dec_label_pc_10f0:
  call void @exit(i32 %status), !insn.addr !18
  ret void, !insn.addr !18
}

define i32 @function_1100() local_unnamed_addr {
dec_label_pc_1100:
  %0 = call i32 @fork(), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define void @function_1110(i64* %d) local_unnamed_addr {
dec_label_pc_1110:
  call void @__cxa_finalize(i64* %d), !insn.addr !20
  ret void, !insn.addr !20
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1120:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !21
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !21
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !21
  %3 = call i32 @__libc_start_main(i64 8768, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !21
  %4 = call i64 @__asm_hlt(), !insn.addr !22
  unreachable, !insn.addr !22
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1150:
  ret i64 ptrtoint (i64* @global_var_60a8 to i64), !insn.addr !23
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1180:
  ret i64 0, !insn.addr !24
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_11c0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* bitcast (i64* @global_var_60a8 to i8*), align 8, !insn.addr !25
  %3 = icmp eq i8 %2, 0, !insn.addr !25
  %4 = icmp eq i1 %3, false, !insn.addr !26
  br i1 %4, label %dec_label_pc_11f8, label %dec_label_pc_11cd, !insn.addr !26

dec_label_pc_11cd:                                ; preds = %dec_label_pc_11c0
  %5 = load i64, i64* @global_var_5ff8, align 8, !insn.addr !27
  %6 = icmp eq i64 %5, 0, !insn.addr !27
  br i1 %6, label %dec_label_pc_11e7, label %dec_label_pc_11db, !insn.addr !28

dec_label_pc_11db:                                ; preds = %dec_label_pc_11cd
  %7 = load i64, i64* inttoptr (i64 24720 to i64*), align 16, !insn.addr !29
  %8 = inttoptr i64 %7 to i64*, !insn.addr !30
  call void @__cxa_finalize(i64* %8), !insn.addr !30
  br label %dec_label_pc_11e7, !insn.addr !30

dec_label_pc_11e7:                                ; preds = %dec_label_pc_11db, %dec_label_pc_11cd
  %9 = call i64 @deregister_tm_clones(), !insn.addr !31
  store i8 1, i8* bitcast (i64* @global_var_60a8 to i8*), align 8, !insn.addr !32
  ret i64 %9, !insn.addr !33

dec_label_pc_11f8:                                ; preds = %dec_label_pc_11c0
  ret i64 %1, !insn.addr !34
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1200:
  %0 = call i64 @register_tm_clones(), !insn.addr !35
  ret i64 %0, !insn.addr !35
}

define i64 @local_vars(i64 %arg1) local_unnamed_addr {
dec_label_pc_1210:
  %0 = mul i64 %arg1, 2, !insn.addr !36
  %1 = add i64 %0, 10, !insn.addr !37
  %2 = and i64 %1, 4294967294, !insn.addr !37
  ret i64 %2, !insn.addr !38
}

define i64 @local_array(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1220:
  %0 = alloca i64
  %1 = alloca i32
  %rax.0.reg2mem = alloca i64, !insn.addr !39
  %rcx.0.reg2mem = alloca i64, !insn.addr !39
  %2 = load i64, i64* %0
  %3 = load i32, i32* %1
  %4 = add i64 %2, -40, !insn.addr !40
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !41
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !41
  br label %dec_label_pc_1230, !insn.addr !41

dec_label_pc_1230:                                ; preds = %dec_label_pc_1230, %dec_label_pc_1220
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %5 = trunc i64 %rax.0.reload to i32, !insn.addr !40
  %6 = mul i64 %rcx.0.reload, 4, !insn.addr !40
  %7 = add i64 %4, %6, !insn.addr !40
  %8 = inttoptr i64 %7 to i32*, !insn.addr !40
  store i32 %5, i32* %8, align 4, !insn.addr !40
  %9 = add nuw nsw i64 %rcx.0.reload, 1, !insn.addr !42
  %10 = add i64 %rax.0.reload, %arg1, !insn.addr !43
  %11 = and i64 %10, 4294967295, !insn.addr !43
  %exitcond = icmp eq i64 %9, 10
  store i64 %9, i64* %rcx.0.reg2mem, !insn.addr !44
  store i64 %11, i64* %rax.0.reg2mem, !insn.addr !44
  br i1 %exitcond, label %dec_label_pc_1240, label %dec_label_pc_1230, !insn.addr !44

dec_label_pc_1240:                                ; preds = %dec_label_pc_1230
  %12 = zext i32 %3 to i64, !insn.addr !45
  ret i64 %12, !insn.addr !46

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
}

define i64 @local_struct(i64 %arg1) local_unnamed_addr {
dec_label_pc_1250:
  %0 = mul i64 %arg1, 3, !insn.addr !47
  %1 = and i64 %0, 4294967295, !insn.addr !47
  ret i64 %1, !insn.addr !48
}

define i64 @address_of_local(i64 %arg1) local_unnamed_addr {
dec_label_pc_1260:
  %0 = inttoptr i64 %arg1 to i32*, !insn.addr !49
  store i32 42, i32* %0, align 4, !insn.addr !49
  ret i64 42, !insn.addr !50
}

define i64 @address_of_array() local_unnamed_addr {
dec_label_pc_1270:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !51
  %3 = and i64 %2, 4294967294, !insn.addr !51
  ret i64 %3, !insn.addr !52
}

define i64 @large_stack_frame() local_unnamed_addr {
dec_label_pc_1280:
  %0 = alloca i8
  %rax.0.reg2mem = alloca i64, !insn.addr !53
  %1 = load i8, i8* %0
  %stack_var_-1928 = alloca i64, align 8
  %2 = ptrtoint i64* %stack_var_-1928 to i64, !insn.addr !53
  %3 = add i64 %2, -128, !insn.addr !54
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !55
  br label %dec_label_pc_1290, !insn.addr !55

dec_label_pc_1290:                                ; preds = %dec_label_pc_1290, %dec_label_pc_1280
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %4 = trunc i64 %rax.0.reload to i8, !insn.addr !54
  %5 = add i64 %3, %rax.0.reload, !insn.addr !54
  %6 = inttoptr i64 %5 to i8*, !insn.addr !54
  store i8 %4, i8* %6, align 1, !insn.addr !54
  %7 = add i64 %rax.0.reload, 1, !insn.addr !56
  %8 = icmp eq i64 %7, ptrtoint (i64* @global_var_800 to i64), !insn.addr !57
  %9 = icmp eq i1 %8, false, !insn.addr !58
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !58
  br i1 %9, label %dec_label_pc_1290, label %dec_label_pc_12a0, !insn.addr !58

dec_label_pc_12a0:                                ; preds = %dec_label_pc_1290
  %10 = sext i8 %1 to i64, !insn.addr !59
  ret i64 %10, !insn.addr !60

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 2, 0, 1 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
}

define i64 @vla_stack(i64 %arg1) local_unnamed_addr {
dec_label_pc_12b0:
  %rax.0.reg2mem = alloca i64, !insn.addr !61
  %rsi.0.reg2mem = alloca i64, !insn.addr !61
  %stack_var_-8 = alloca i64, align 8
  %0 = trunc i64 %arg1 to i32
  %1 = add i32 %0, -1001, !insn.addr !61
  %2 = icmp ult i32 %1, -1000, !insn.addr !62
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !63
  br i1 %2, label %dec_label_pc_130f, label %dec_label_pc_12e5, !insn.addr !63

dec_label_pc_12e5:                                ; preds = %dec_label_pc_12b0
  %3 = and i64 %arg1, 4294967295, !insn.addr !64
  %4 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !65
  %5 = mul i64 %3, 4, !insn.addr !66
  %6 = add nuw nsw i64 %5, 15, !insn.addr !66
  %7 = and i64 %6, 34359738352, !insn.addr !67
  %8 = sub i64 %4, %7, !insn.addr !68
  %9 = mul i64 %3, 2, !insn.addr !69
  store i64 0, i64* %rsi.0.reg2mem, !insn.addr !70
  br label %dec_label_pc_12f0, !insn.addr !70

dec_label_pc_12f0:                                ; preds = %dec_label_pc_12f0, %dec_label_pc_12e5
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %10 = trunc i64 %rsi.0.reload to i32, !insn.addr !71
  %11 = mul i64 %rsi.0.reload, 2, !insn.addr !71
  %12 = add i64 %11, %8, !insn.addr !71
  %13 = inttoptr i64 %12 to i32*, !insn.addr !71
  store i32 %10, i32* %13, align 4, !insn.addr !71
  %14 = add i64 %rsi.0.reload, 2, !insn.addr !72
  %15 = icmp eq i64 %9, %14, !insn.addr !73
  %16 = icmp eq i1 %15, false, !insn.addr !74
  store i64 %14, i64* %rsi.0.reg2mem, !insn.addr !74
  br i1 %16, label %dec_label_pc_12f0, label %dec_label_pc_12fc, !insn.addr !74

dec_label_pc_12fc:                                ; preds = %dec_label_pc_12f0
  %17 = icmp slt i32 %0, 0
  %18 = zext i1 %17 to i32, !insn.addr !75
  %19 = add i32 %18, %0, !insn.addr !76
  %20 = ashr i32 %19, 1, !insn.addr !77
  %21 = zext i32 %20 to i64, !insn.addr !77
  %22 = mul i64 %21, 4, !insn.addr !78
  %23 = add i64 %8, %22, !insn.addr !78
  %24 = inttoptr i64 %23 to i32*, !insn.addr !78
  %25 = load i32, i32* %24, align 4, !insn.addr !78
  %26 = zext i32 %25 to i64, !insn.addr !78
  store i64 %26, i64* %rax.0.reg2mem, !insn.addr !79
  br label %dec_label_pc_130f, !insn.addr !79

dec_label_pc_130f:                                ; preds = %dec_label_pc_12fc, %dec_label_pc_12b0
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !80

; uselistorder directives
  uselistorder i64 %rsi.0.reload, { 1, 2, 0 }
  uselistorder i32 %0, { 1, 0, 2 }
  uselistorder i64* %rsi.0.reg2mem, { 1, 0, 2 }
}

define i64 @alloca_usage(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1310:
  %rsi.0.reg2mem = alloca i64, !insn.addr !81
  %rdx.0.reg2mem = alloca i64, !insn.addr !81
  %stack_var_-8 = alloca i64, align 8
  %0 = trunc i64 %arg1 to i32, !insn.addr !81
  %1 = icmp slt i32 %0, 1
  br i1 %1, label %dec_label_pc_1360, label %dec_label_pc_1314, !insn.addr !82

dec_label_pc_1314:                                ; preds = %dec_label_pc_1310
  %sext = mul i64 %arg1, 4294967296
  %2 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !83
  %3 = ashr exact i64 %sext, 30, !insn.addr !84
  %4 = add nsw i64 %3, 15, !insn.addr !84
  %5 = and i64 %4, -16, !insn.addr !85
  %6 = sub i64 %2, %5, !insn.addr !86
  %7 = and i64 %arg1, 4294967295, !insn.addr !87
  %8 = mul nuw nsw i64 %7, 3, !insn.addr !88
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !89
  store i64 %6, i64* %rsi.0.reg2mem, !insn.addr !89
  br label %dec_label_pc_1340, !insn.addr !89

dec_label_pc_1340:                                ; preds = %dec_label_pc_1340, %dec_label_pc_1314
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %9 = trunc i64 %rdx.0.reload to i32, !insn.addr !90
  %10 = inttoptr i64 %rsi.0.reload to i32*, !insn.addr !90
  store i32 %9, i32* %10, align 4, !insn.addr !90
  %11 = add i64 %rdx.0.reload, 3, !insn.addr !91
  %12 = add i64 %rsi.0.reload, 4, !insn.addr !92
  %13 = icmp eq i64 %8, %11, !insn.addr !93
  %14 = icmp eq i1 %13, false, !insn.addr !94
  store i64 %11, i64* %rdx.0.reg2mem, !insn.addr !94
  store i64 %12, i64* %rsi.0.reg2mem, !insn.addr !94
  br i1 %14, label %dec_label_pc_1340, label %dec_label_pc_134f, !insn.addr !94

dec_label_pc_134f:                                ; preds = %dec_label_pc_1340
  %15 = icmp slt i32 %0, 0
  %16 = zext i1 %15 to i32, !insn.addr !95
  %17 = add i32 %16, %0, !insn.addr !96
  %18 = ashr i32 %17, 1, !insn.addr !97
  %19 = zext i32 %18 to i64, !insn.addr !97
  %20 = mul i64 %19, 4, !insn.addr !98
  %21 = add i64 %6, %20, !insn.addr !98
  %22 = inttoptr i64 %21 to i32*, !insn.addr !98
  %23 = load i32, i32* %22, align 4, !insn.addr !98
  %24 = zext i32 %23 to i64, !insn.addr !98
  ret i64 %24, !insn.addr !99

dec_label_pc_1360:                                ; preds = %dec_label_pc_1310
  ret i64 4294967295, !insn.addr !100

; uselistorder directives
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64 %rsi.0.reload, { 1, 0 }
  uselistorder i64 %6, { 1, 0 }
  uselistorder i32 %0, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rsi.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @stack_alias() local_unnamed_addr {
dec_label_pc_1370:
  ret i64 20, !insn.addr !101
}

define i64 @test_stack_memory() local_unnamed_addr {
dec_label_pc_1380:
  %0 = alloca i32
  %1 = alloca i8
  %rbx.3.reg2mem = alloca i64, !insn.addr !102
  %rax.0.reg2mem = alloca i64, !insn.addr !102
  %rbx.2.reg2mem = alloca i64, !insn.addr !102
  %rbx.1.reg2mem = alloca i64, !insn.addr !102
  %rbx.0.reg2mem = alloca i64, !insn.addr !102
  %2 = load i8, i8* %1
  %3 = load i32, i32* %0
  %stack_var_-2056 = alloca i64, align 8
  %4 = ptrtoint i64* %stack_var_-2056 to i64, !insn.addr !103
  %5 = call i32 @puts(i8* bitcast (i8** @global_var_35d9 to i8*)), !insn.addr !104
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_3020, i64 0, i64 0), i64 20), !insn.addr !105
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !106
  br label %dec_label_pc_13b0, !insn.addr !106

dec_label_pc_13b0:                                ; preds = %dec_label_pc_13b0, %dec_label_pc_1380
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %7 = trunc i64 %rbx.0.reload to i32, !insn.addr !107
  %8 = mul i64 %rbx.0.reload, 2, !insn.addr !107
  %9 = add i64 %8, %4, !insn.addr !107
  %10 = inttoptr i64 %9 to i32*, !insn.addr !107
  store i32 %7, i32* %10, align 4, !insn.addr !107
  %11 = add nuw nsw i64 %rbx.0.reload, 2, !insn.addr !108
  %12 = icmp eq i64 %rbx.0.reload, 18, !insn.addr !109
  %13 = icmp eq i1 %12, false, !insn.addr !110
  store i64 %11, i64* %rbx.0.reg2mem, !insn.addr !110
  br i1 %13, label %dec_label_pc_13b0, label %dec_label_pc_13bd, !insn.addr !110

dec_label_pc_13bd:                                ; preds = %dec_label_pc_13b0
  %14 = zext i32 %3 to i64, !insn.addr !111
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_303c, i64 0, i64 0), i64 %14), !insn.addr !112
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3059, i64 0, i64 0), i64 15), !insn.addr !113
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3077, i64 0, i64 0), i64 42), !insn.addr !114
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3099, i64 0, i64 0), i64 2), !insn.addr !115
  store i64 0, i64* %rbx.1.reg2mem, !insn.addr !116
  br label %dec_label_pc_1410, !insn.addr !116

dec_label_pc_1410:                                ; preds = %dec_label_pc_1410, %dec_label_pc_13bd
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %19 = trunc i64 %rbx.1.reload to i8, !insn.addr !117
  %20 = add i64 %rbx.1.reload, %4, !insn.addr !117
  %21 = inttoptr i64 %20 to i8*, !insn.addr !117
  store i8 %19, i8* %21, align 1, !insn.addr !117
  %22 = add i64 %rbx.1.reload, 1, !insn.addr !118
  %23 = icmp eq i64 %22, ptrtoint (i64* @global_var_800 to i64), !insn.addr !119
  %24 = icmp eq i1 %23, false, !insn.addr !120
  store i64 %22, i64* %rbx.1.reg2mem, !insn.addr !120
  br i1 %24, label %dec_label_pc_1410, label %dec_label_pc_1420, !insn.addr !120

dec_label_pc_1420:                                ; preds = %dec_label_pc_1410
  %25 = sext i8 %2 to i64, !insn.addr !121
  %26 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_30bb, i64 0, i64 0), i64 %25), !insn.addr !122
  store i64 0, i64* %rbx.2.reg2mem, !insn.addr !123
  br label %dec_label_pc_1440, !insn.addr !123

dec_label_pc_1440:                                ; preds = %dec_label_pc_1440, %dec_label_pc_1420
  %rbx.2.reload = load i64, i64* %rbx.2.reg2mem
  %27 = trunc i64 %rbx.2.reload to i32, !insn.addr !124
  %28 = mul i64 %rbx.2.reload, 2, !insn.addr !124
  %29 = add i64 %28, %4, !insn.addr !124
  %30 = inttoptr i64 %29 to i32*, !insn.addr !124
  store i32 %27, i32* %30, align 4, !insn.addr !124
  %31 = add nuw nsw i64 %rbx.2.reload, 2, !insn.addr !125
  %32 = icmp eq i64 %rbx.2.reload, 18, !insn.addr !126
  %33 = icmp eq i1 %32, false, !insn.addr !127
  store i64 %31, i64* %rbx.2.reg2mem, !insn.addr !127
  br i1 %33, label %dec_label_pc_1440, label %dec_label_pc_144d, !insn.addr !127

dec_label_pc_144d:                                ; preds = %dec_label_pc_1440
  %34 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_30de, i64 0, i64 0), i64 %14), !insn.addr !128
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !129
  store i64 0, i64* %rbx.3.reg2mem, !insn.addr !129
  br label %dec_label_pc_1470, !insn.addr !129

dec_label_pc_1470:                                ; preds = %dec_label_pc_1470, %dec_label_pc_144d
  %rbx.3.reload = load i64, i64* %rbx.3.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %35 = trunc i64 %rbx.3.reload to i32, !insn.addr !130
  %36 = inttoptr i64 %rax.0.reload to i32*, !insn.addr !130
  store i32 %35, i32* %36, align 4, !insn.addr !130
  %37 = add i64 %rax.0.reload, 4, !insn.addr !131
  %38 = add nuw nsw i64 %rbx.3.reload, 3, !insn.addr !132
  %39 = icmp eq i64 %rbx.3.reload, 27, !insn.addr !133
  %40 = icmp eq i1 %39, false, !insn.addr !134
  store i64 %37, i64* %rax.0.reg2mem, !insn.addr !134
  store i64 %38, i64* %rbx.3.reg2mem, !insn.addr !134
  br i1 %40, label %dec_label_pc_1470, label %dec_label_pc_1480, !insn.addr !134

dec_label_pc_1480:                                ; preds = %dec_label_pc_1470
  %41 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_30f9, i64 0, i64 0), i64 %14), !insn.addr !135
  %42 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3117, i64 0, i64 0), i64 20), !insn.addr !136
  %43 = sext i32 %42 to i64, !insn.addr !136
  ret i64 %43, !insn.addr !137

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i64 %rbx.3.reload, { 1, 2, 0 }
  uselistorder i64 %rbx.2.reload, { 1, 2, 3, 0 }
  uselistorder i64 %rbx.1.reload, { 1, 2, 0 }
  uselistorder i64 %rbx.0.reload, { 1, 2, 3, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.1.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.2.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.3.reg2mem, { 1, 0, 2 }
}

define i64 @heap_basic(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_14b0:
  %rbx.0.reg2mem = alloca i64, !insn.addr !138
  %rdx.0.reg2mem = alloca i64, !insn.addr !138
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !139
  %1 = call i64* @malloc(i32 %0), !insn.addr !139
  %2 = icmp eq i64* %1, null, !insn.addr !140
  store i64 4294967295, i64* %rbx.0.reg2mem, !insn.addr !141
  br i1 %2, label %dec_label_pc_14fa, label %dec_label_pc_14c4, !insn.addr !141

dec_label_pc_14c4:                                ; preds = %dec_label_pc_14b0
  %3 = ptrtoint i64* %1 to i64, !insn.addr !139
  %4 = icmp slt i32 %arg1.tr, 1
  br i1 %4, label %dec_label_pc_14dc, label %dec_label_pc_14c8, !insn.addr !142

dec_label_pc_14c8:                                ; preds = %dec_label_pc_14c4
  %5 = mul i64 %arg1, 2, !insn.addr !143
  %6 = and i64 %5, 8589934590, !insn.addr !144
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !145
  br label %dec_label_pc_14d0, !insn.addr !145

dec_label_pc_14d0:                                ; preds = %dec_label_pc_14d0, %dec_label_pc_14c8
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %7 = trunc i64 %rdx.0.reload to i32, !insn.addr !146
  %8 = mul i64 %rdx.0.reload, 2, !insn.addr !146
  %9 = add i64 %8, %3, !insn.addr !146
  %10 = inttoptr i64 %9 to i32*, !insn.addr !146
  store i32 %7, i32* %10, align 4, !insn.addr !146
  %11 = add i64 %rdx.0.reload, 2, !insn.addr !147
  %12 = icmp eq i64 %6, %11, !insn.addr !148
  %13 = icmp eq i1 %12, false, !insn.addr !149
  store i64 %11, i64* %rdx.0.reg2mem, !insn.addr !149
  br i1 %13, label %dec_label_pc_14d0, label %dec_label_pc_14dc, !insn.addr !149

dec_label_pc_14dc:                                ; preds = %dec_label_pc_14d0, %dec_label_pc_14c4
  %14 = icmp slt i32 %arg1.tr, 0
  %15 = zext i1 %14 to i32, !insn.addr !150
  %16 = add i32 %15, %arg1.tr, !insn.addr !151
  %17 = ashr i32 %16, 1, !insn.addr !152
  %18 = sext i32 %17 to i64, !insn.addr !153
  %19 = mul i64 %18, 4, !insn.addr !154
  %20 = add i64 %19, %3, !insn.addr !154
  %21 = inttoptr i64 %20 to i32*, !insn.addr !154
  %22 = load i32, i32* %21, align 4, !insn.addr !154
  %23 = zext i32 %22 to i64, !insn.addr !154
  call void @free(i64* nonnull %1), !insn.addr !155
  store i64 %23, i64* %rbx.0.reg2mem, !insn.addr !156
  br label %dec_label_pc_14fa, !insn.addr !156

dec_label_pc_14fa:                                ; preds = %dec_label_pc_14b0, %dec_label_pc_14dc
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  ret i64 %rbx.0.reload, !insn.addr !157

; uselistorder directives
  uselistorder i64 %rdx.0.reload, { 1, 2, 0 }
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i32 %arg1.tr, { 2, 1, 3, 0 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_14fa, { 1, 0 }
}

define i64 @heap_calloc(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1500:
  %rbx.2.reg2mem = alloca i64, !insn.addr !158
  %rbx.1.reg2mem = alloca i64, !insn.addr !158
  %rbx.0.reg2mem = alloca i32, !insn.addr !158
  %rdx.0.reg2mem = alloca i64, !insn.addr !158
  %0 = trunc i64 %arg1 to i32, !insn.addr !159
  %1 = call i64* @calloc(i32 %0, i32 4), !insn.addr !160
  %2 = icmp eq i64* %1, null, !insn.addr !161
  store i64 4294967295, i64* %rbx.2.reg2mem, !insn.addr !162
  br i1 %2, label %dec_label_pc_153f, label %dec_label_pc_1515, !insn.addr !162

dec_label_pc_1515:                                ; preds = %dec_label_pc_1500
  %3 = and i64 %arg1, 4294967295, !insn.addr !163
  %4 = ptrtoint i64* %1 to i64, !insn.addr !160
  %5 = icmp slt i32 %0, 1
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !164
  store i32 0, i32* %rbx.0.reg2mem, !insn.addr !164
  store i64 0, i64* %rbx.1.reg2mem, !insn.addr !164
  br i1 %5, label %dec_label_pc_1537, label %dec_label_pc_1520, !insn.addr !164

dec_label_pc_1520:                                ; preds = %dec_label_pc_1515, %dec_label_pc_1520
  %rbx.0.reload = load i32, i32* %rbx.0.reg2mem
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %6 = mul i64 %rdx.0.reload, 4, !insn.addr !165
  %7 = add i64 %6, %4, !insn.addr !165
  %8 = inttoptr i64 %7 to i32*, !insn.addr !165
  %9 = load i32, i32* %8, align 4, !insn.addr !165
  %10 = add i32 %9, %rbx.0.reload, !insn.addr !165
  %11 = add i64 %rdx.0.reload, 1, !insn.addr !166
  %12 = icmp eq i64 %3, %11, !insn.addr !167
  %13 = icmp eq i1 %12, false, !insn.addr !168
  store i64 %11, i64* %rdx.0.reg2mem, !insn.addr !168
  store i32 %10, i32* %rbx.0.reg2mem, !insn.addr !168
  br i1 %13, label %dec_label_pc_1520, label %dec_label_pc_1537.loopexit, !insn.addr !168

dec_label_pc_1537.loopexit:                       ; preds = %dec_label_pc_1520
  %14 = zext i32 %10 to i64, !insn.addr !165
  store i64 %14, i64* %rbx.1.reg2mem
  br label %dec_label_pc_1537

dec_label_pc_1537:                                ; preds = %dec_label_pc_1537.loopexit, %dec_label_pc_1515
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  call void @free(i64* nonnull %1), !insn.addr !169
  store i64 %rbx.1.reload, i64* %rbx.2.reg2mem, !insn.addr !169
  br label %dec_label_pc_153f, !insn.addr !169

dec_label_pc_153f:                                ; preds = %dec_label_pc_1500, %dec_label_pc_1537
  %rbx.2.reload = load i64, i64* %rbx.2.reg2mem
  %15 = and i64 %rbx.2.reload, 4294967295, !insn.addr !170
  ret i64 %15, !insn.addr !171

; uselistorder directives
  uselistorder i32 %10, { 1, 0 }
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rbx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.2.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_153f, { 1, 0 }
  uselistorder label %dec_label_pc_1520, { 1, 0 }
}

define i64 @heap_realloc() local_unnamed_addr {
dec_label_pc_1550:
  %rbp.2.reg2mem = alloca i64, !insn.addr !172
  %rbp.1.reg2mem = alloca i64, !insn.addr !172
  %rbx.0.reg2mem = alloca i64, !insn.addr !172
  %rdx.0.reg2mem = alloca i64, !insn.addr !172
  %rcx.0.reg2mem = alloca i64, !insn.addr !172
  %rax.0.reg2mem = alloca i64, !insn.addr !172
  %0 = call i64* @malloc(i32 20), !insn.addr !173
  %1 = ptrtoint i64* %0 to i64, !insn.addr !173
  %2 = icmp eq i64* %0, null, !insn.addr !174
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !175
  store i64 4294967295, i64* %rbp.2.reg2mem, !insn.addr !175
  br i1 %2, label %dec_label_pc_15d7, label %dec_label_pc_1570, !insn.addr !175

dec_label_pc_1570:                                ; preds = %dec_label_pc_1550, %dec_label_pc_1570
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %3 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !176
  %4 = trunc i64 %3 to i32, !insn.addr !177
  %5 = mul i64 %rax.0.reload, 4, !insn.addr !177
  %6 = add i64 %5, %1, !insn.addr !177
  %7 = inttoptr i64 %6 to i32*, !insn.addr !177
  store i32 %4, i32* %7, align 4, !insn.addr !177
  %exitcond1 = icmp eq i64 %3, 5
  store i64 %3, i64* %rax.0.reg2mem, !insn.addr !178
  br i1 %exitcond1, label %dec_label_pc_1580, label %dec_label_pc_1570, !insn.addr !178

dec_label_pc_1580:                                ; preds = %dec_label_pc_1570
  %8 = add i64 %1, 8, !insn.addr !179
  %9 = inttoptr i64 %8 to i32*, !insn.addr !179
  %10 = load i32, i32* %9, align 4, !insn.addr !179
  %11 = call i64* @realloc(i64* nonnull %0, i32 40), !insn.addr !180
  %12 = ptrtoint i64* %11 to i64, !insn.addr !180
  %13 = icmp eq i64* %11, null, !insn.addr !181
  store i64 5, i64* %rcx.0.reg2mem, !insn.addr !182
  store i64 50, i64* %rdx.0.reg2mem, !insn.addr !182
  store i64 %1, i64* %rbx.0.reg2mem, !insn.addr !182
  store i64 4294967294, i64* %rbp.1.reg2mem, !insn.addr !182
  br i1 %13, label %dec_label_pc_15cf, label %dec_label_pc_15a0, !insn.addr !182

dec_label_pc_15a0:                                ; preds = %dec_label_pc_1580, %dec_label_pc_15a0
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %14 = trunc i64 %rdx.0.reload to i32, !insn.addr !183
  %15 = mul i64 %rcx.0.reload, 4, !insn.addr !183
  %16 = add i64 %15, %12, !insn.addr !183
  %17 = inttoptr i64 %16 to i32*, !insn.addr !183
  store i32 %14, i32* %17, align 4, !insn.addr !183
  %18 = add nuw nsw i64 %rcx.0.reload, 1, !insn.addr !184
  %19 = add nuw nsw i64 %rdx.0.reload, 10, !insn.addr !185
  %20 = and i64 %19, 4294967295, !insn.addr !185
  %exitcond = icmp eq i64 %18, 10
  store i64 %18, i64* %rcx.0.reg2mem, !insn.addr !186
  store i64 %20, i64* %rdx.0.reg2mem, !insn.addr !186
  br i1 %exitcond, label %dec_label_pc_15b0, label %dec_label_pc_15a0, !insn.addr !186

dec_label_pc_15b0:                                ; preds = %dec_label_pc_15a0
  %21 = add i64 %12, 8, !insn.addr !187
  %22 = inttoptr i64 %21 to i32*, !insn.addr !187
  %23 = load i32, i32* %22, align 4, !insn.addr !187
  %24 = icmp eq i32 %23, %10, !insn.addr !187
  %25 = icmp eq i1 %24, false, !insn.addr !188
  store i64 %12, i64* %rbx.0.reg2mem, !insn.addr !188
  store i64 4294967293, i64* %rbp.1.reg2mem, !insn.addr !188
  br i1 %25, label %dec_label_pc_15cf, label %dec_label_pc_15bb, !insn.addr !188

dec_label_pc_15bb:                                ; preds = %dec_label_pc_15b0
  %26 = add i64 %12, 20, !insn.addr !189
  %27 = inttoptr i64 %26 to i32*, !insn.addr !189
  %28 = load i32, i32* %27, align 4, !insn.addr !189
  %29 = zext i32 %28 to i64, !insn.addr !189
  store i64 %12, i64* %rbx.0.reg2mem, !insn.addr !189
  store i64 %29, i64* %rbp.1.reg2mem, !insn.addr !189
  br label %dec_label_pc_15cf, !insn.addr !189

dec_label_pc_15cf:                                ; preds = %dec_label_pc_1580, %dec_label_pc_15b0, %dec_label_pc_15bb
  %rbp.1.reload = load i64, i64* %rbp.1.reg2mem
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %30 = inttoptr i64 %rbx.0.reload to i64*, !insn.addr !190
  call void @free(i64* %30), !insn.addr !190
  store i64 %rbp.1.reload, i64* %rbp.2.reg2mem, !insn.addr !190
  br label %dec_label_pc_15d7, !insn.addr !190

dec_label_pc_15d7:                                ; preds = %dec_label_pc_1550, %dec_label_pc_15cf
  %rbp.2.reload = load i64, i64* %rbp.2.reg2mem
  %31 = and i64 %rbp.2.reload, 4294967295, !insn.addr !191
  ret i64 %31, !insn.addr !192

; uselistorder directives
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64 %12, { 1, 4, 0, 3, 2 }
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i64 %1, { 0, 2, 1 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rcx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64* %rbp.1.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64* %rbp.2.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_15d7, { 1, 0 }
  uselistorder label %dec_label_pc_15cf, { 2, 1, 0 }
  uselistorder label %dec_label_pc_15a0, { 1, 0 }
  uselistorder label %dec_label_pc_1570, { 1, 0 }
}

define i64 @heap_array(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_15e0:
  %rbx.0.reg2mem = alloca i64, !insn.addr !193
  %rsi.0.reg2mem = alloca i64, !insn.addr !193
  %rdx.0.reg2mem = alloca i64, !insn.addr !193
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !194
  %1 = call i64* @malloc(i32 %0), !insn.addr !194
  %2 = icmp eq i64* %1, null, !insn.addr !195
  store i64 4294967295, i64* %rbx.0.reg2mem, !insn.addr !196
  br i1 %2, label %dec_label_pc_163d, label %dec_label_pc_15f4, !insn.addr !196

dec_label_pc_15f4:                                ; preds = %dec_label_pc_15e0
  %3 = ptrtoint i64* %1 to i64, !insn.addr !194
  %4 = icmp slt i32 %arg1.tr, 1
  br i1 %4, label %dec_label_pc_161f, label %dec_label_pc_15f8, !insn.addr !197

dec_label_pc_15f8:                                ; preds = %dec_label_pc_15f4
  %5 = and i64 %arg1, 4294967295, !insn.addr !198
  %6 = mul nuw nsw i64 %5, 3, !insn.addr !199
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !200
  store i64 %3, i64* %rsi.0.reg2mem, !insn.addr !200
  br label %dec_label_pc_1610, !insn.addr !200

dec_label_pc_1610:                                ; preds = %dec_label_pc_1610, %dec_label_pc_15f8
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %7 = trunc i64 %rdx.0.reload to i32, !insn.addr !201
  %8 = inttoptr i64 %rsi.0.reload to i32*, !insn.addr !201
  store i32 %7, i32* %8, align 4, !insn.addr !201
  %9 = add i64 %rdx.0.reload, 3, !insn.addr !202
  %10 = add i64 %rsi.0.reload, 4, !insn.addr !203
  %11 = icmp eq i64 %6, %9, !insn.addr !204
  %12 = icmp eq i1 %11, false, !insn.addr !205
  store i64 %9, i64* %rdx.0.reg2mem, !insn.addr !205
  store i64 %10, i64* %rsi.0.reg2mem, !insn.addr !205
  br i1 %12, label %dec_label_pc_1610, label %dec_label_pc_161f, !insn.addr !205

dec_label_pc_161f:                                ; preds = %dec_label_pc_1610, %dec_label_pc_15f4
  %13 = icmp slt i32 %arg1.tr, 0
  %14 = zext i1 %13 to i32, !insn.addr !206
  %15 = add i32 %14, %arg1.tr, !insn.addr !207
  %16 = ashr i32 %15, 1, !insn.addr !208
  %17 = sext i32 %16 to i64, !insn.addr !209
  %18 = mul i64 %17, 4, !insn.addr !210
  %19 = add i64 %18, %3, !insn.addr !210
  %20 = inttoptr i64 %19 to i32*, !insn.addr !210
  %21 = load i32, i32* %20, align 4, !insn.addr !210
  %22 = zext i32 %21 to i64, !insn.addr !210
  call void @free(i64* nonnull %1), !insn.addr !211
  store i64 %22, i64* %rbx.0.reg2mem, !insn.addr !212
  br label %dec_label_pc_163d, !insn.addr !212

dec_label_pc_163d:                                ; preds = %dec_label_pc_15e0, %dec_label_pc_161f
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  ret i64 %rbx.0.reload, !insn.addr !213

; uselistorder directives
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64 %rsi.0.reload, { 1, 0 }
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i32 %arg1.tr, { 2, 1, 3, 0 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rsi.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.0.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_163d, { 1, 0 }
}

define i64 @heap_struct(i64 %arg1) local_unnamed_addr {
dec_label_pc_1650:
  %0 = mul i64 %arg1, 3, !insn.addr !214
  %1 = and i64 %0, 4294967295, !insn.addr !214
  ret i64 %1, !insn.addr !215
}

define i64 @heap_nested(i64 %arg1) local_unnamed_addr {
dec_label_pc_1660:
  %0 = call i64* @malloc(i32 16), !insn.addr !216
  %1 = ptrtoint i64* %0 to i64, !insn.addr !216
  %2 = inttoptr i64 %arg1 to i64*, !insn.addr !217
  store i64 %1, i64* %2, align 8, !insn.addr !217
  %3 = icmp eq i64* %0, null, !insn.addr !218
  br i1 %3, label %dec_label_pc_16ab, label %dec_label_pc_1676, !insn.addr !219

dec_label_pc_1676:                                ; preds = %dec_label_pc_1660
  %4 = bitcast i64* %0 to i32*, !insn.addr !220
  store i32 10, i32* %4, align 4, !insn.addr !220
  %5 = call i64* @malloc(i32 16), !insn.addr !221
  %6 = ptrtoint i64* %5 to i64, !insn.addr !221
  store i64 %6, i64* inttoptr (i64 24 to i64*), align 8, !insn.addr !222
  %7 = icmp eq i64* %5, null, !insn.addr !223
  br i1 %7, label %dec_label_pc_16b2, label %dec_label_pc_1699, !insn.addr !224

dec_label_pc_1699:                                ; preds = %dec_label_pc_1676
  %8 = bitcast i64* %5 to i32*, !insn.addr !225
  store i32 20, i32* %8, align 4, !insn.addr !225
  %9 = add i64 %6, 8, !insn.addr !226
  %10 = inttoptr i64 %9 to i64*, !insn.addr !226
  store i64 0, i64* %10, align 8, !insn.addr !226
  ret i64 0, !insn.addr !227

dec_label_pc_16ab:                                ; preds = %dec_label_pc_1660
  ret i64 4294967295, !insn.addr !228

dec_label_pc_16b2:                                ; preds = %dec_label_pc_1676
  call void @free(i64* inttoptr (i64 16 to i64*)), !insn.addr !229
  ret i64 4294967294, !insn.addr !230
}

define i64 @linked_list_heap() local_unnamed_addr {
dec_label_pc_16c0:
  %r14.2.reg2mem = alloca i64, !insn.addr !231
  %rbp.4.reg2mem = alloca i64, !insn.addr !231
  %r14.0.reg2mem = alloca i32, !insn.addr !231
  %rax.0.reg2mem = alloca i64, !insn.addr !231
  %r15.1.reg2mem = alloca i64, !insn.addr !231
  %rbp.3.reg2mem = alloca i64, !insn.addr !231
  %rbp.2.reg2mem = alloca i64, !insn.addr !231
  %rbp.113.reg2mem = alloca i64, !insn.addr !231
  %r12.114.reg2mem = alloca i64, !insn.addr !231
  %r13.015.reg2mem = alloca i64, !insn.addr !231
  %.in.reg2mem = alloca i64*, !insn.addr !231
  %rbp.0.reg2mem = alloca i64, !insn.addr !231
  %0 = call i64* @malloc(i32 16), !insn.addr !232
  %1 = icmp eq i64* %0, null, !insn.addr !233
  store i64* %0, i64** %.in.reg2mem, !insn.addr !234
  store i64 0, i64* %r13.015.reg2mem, !insn.addr !234
  store i64 0, i64* %r12.114.reg2mem, !insn.addr !234
  store i64 0, i64* %rbp.113.reg2mem, !insn.addr !234
  store i64 4294967295, i64* %r14.2.reg2mem, !insn.addr !234
  br i1 %1, label %dec_label_pc_17c4, label %dec_label_pc_1715, !insn.addr !234

dec_label_pc_16ef:                                ; preds = %dec_label_pc_1715, %dec_label_pc_172d
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %2 = icmp ult i64 %r13.015.reload, 4
  %3 = add nuw nsw i64 %r13.015.reload, 1, !insn.addr !235
  %4 = trunc i64 %3 to i32, !insn.addr !236
  %5 = icmp eq i32 %4, 5, !insn.addr !236
  br i1 %5, label %dec_label_pc_176b.loopexit9, label %dec_label_pc_1703, !insn.addr !237

dec_label_pc_1703:                                ; preds = %dec_label_pc_16ef
  %6 = and i64 %3, 4294967295, !insn.addr !238
  %7 = call i64* @malloc(i32 16), !insn.addr !232
  %8 = icmp eq i64* %7, null, !insn.addr !233
  store i64* %7, i64** %.in.reg2mem, !insn.addr !234
  store i64 %6, i64* %r13.015.reg2mem, !insn.addr !234
  store i64 %9, i64* %r12.114.reg2mem, !insn.addr !234
  store i64 %rbp.0.reload, i64* %rbp.113.reg2mem, !insn.addr !234
  br i1 %8, label %dec_label_pc_1740, label %dec_label_pc_1715, !insn.addr !234

dec_label_pc_1715:                                ; preds = %dec_label_pc_16c0, %dec_label_pc_1703
  %rbp.113.reload = load i64, i64* %rbp.113.reg2mem
  %r12.114.reload = load i64, i64* %r12.114.reg2mem
  %r13.015.reload = load i64, i64* %r13.015.reg2mem
  %.in.reload = load i64*, i64** %.in.reg2mem
  %9 = ptrtoint i64* %.in.reload to i64
  %.tr = trunc i64 %r13.015.reload to i32
  %10 = mul i32 %.tr, 10, !insn.addr !239
  %11 = bitcast i64* %.in.reload to i32*, !insn.addr !240
  store i32 %10, i32* %11, align 4, !insn.addr !240
  %12 = add i64 %9, 8, !insn.addr !241
  %13 = inttoptr i64 %12 to i64*, !insn.addr !241
  store i64 0, i64* %13, align 8, !insn.addr !241
  %14 = icmp eq i64 %rbp.113.reload, 0, !insn.addr !242
  store i64 %9, i64* %rbp.0.reg2mem, !insn.addr !243
  br i1 %14, label %dec_label_pc_16ef, label %dec_label_pc_172d, !insn.addr !243

dec_label_pc_172d:                                ; preds = %dec_label_pc_1715
  %15 = add i64 %r12.114.reload, 8, !insn.addr !244
  %16 = inttoptr i64 %15 to i64*, !insn.addr !244
  store i64 %9, i64* %16, align 8, !insn.addr !244
  store i64 %rbp.113.reload, i64* %rbp.0.reg2mem
  br label %dec_label_pc_16ef

dec_label_pc_1740:                                ; preds = %dec_label_pc_1703
  %17 = zext i1 %2 to i64, !insn.addr !245
  %18 = icmp eq i64 %rbp.0.reload, 0, !insn.addr !246
  store i64 %rbp.0.reload, i64* %rbp.2.reg2mem, !insn.addr !247
  store i64 0, i64* %rbp.3.reg2mem, !insn.addr !247
  store i64 %17, i64* %r15.1.reg2mem, !insn.addr !247
  br i1 %18, label %dec_label_pc_176b, label %dec_label_pc_1750, !insn.addr !247

dec_label_pc_1750:                                ; preds = %dec_label_pc_1740, %dec_label_pc_1750
  %rbp.2.reload = load i64, i64* %rbp.2.reg2mem
  %19 = add i64 %rbp.2.reload, 8, !insn.addr !248
  %20 = inttoptr i64 %19 to i64*, !insn.addr !248
  %21 = load i64, i64* %20, align 8, !insn.addr !248
  %22 = inttoptr i64 %rbp.2.reload to i64*, !insn.addr !249
  call void @free(i64* %22), !insn.addr !249
  %23 = icmp eq i64 %21, 0, !insn.addr !250
  %24 = icmp eq i1 %23, false, !insn.addr !251
  store i64 %21, i64* %rbp.2.reg2mem, !insn.addr !251
  store i64 0, i64* %rbp.3.reg2mem, !insn.addr !251
  store i64 %17, i64* %r15.1.reg2mem, !insn.addr !251
  br i1 %24, label %dec_label_pc_1750, label %dec_label_pc_176b, !insn.addr !251

dec_label_pc_176b.loopexit9:                      ; preds = %dec_label_pc_16ef
  %25 = zext i1 %2 to i64, !insn.addr !245
  store i64 %rbp.0.reload, i64* %rbp.3.reg2mem
  store i64 %25, i64* %r15.1.reg2mem
  br label %dec_label_pc_176b

dec_label_pc_176b:                                ; preds = %dec_label_pc_1750, %dec_label_pc_176b.loopexit9, %dec_label_pc_1740
  %r15.1.reload = load i64, i64* %r15.1.reg2mem
  %26 = icmp eq i64 %r15.1.reload, 0, !insn.addr !252
  %27 = icmp eq i1 %26, false, !insn.addr !253
  store i64 4294967295, i64* %r14.2.reg2mem, !insn.addr !253
  br i1 %27, label %dec_label_pc_17c4, label %dec_label_pc_1777, !insn.addr !253

dec_label_pc_1777:                                ; preds = %dec_label_pc_176b
  %rbp.3.reload = load i64, i64* %rbp.3.reg2mem
  %28 = icmp eq i64 %rbp.3.reload, 0, !insn.addr !254
  store i64 %rbp.3.reload, i64* %rax.0.reg2mem, !insn.addr !255
  store i32 0, i32* %r14.0.reg2mem, !insn.addr !255
  store i64 0, i64* %r14.2.reg2mem, !insn.addr !255
  br i1 %28, label %dec_label_pc_17c4, label %dec_label_pc_1790, !insn.addr !255

dec_label_pc_1790:                                ; preds = %dec_label_pc_1777, %dec_label_pc_1790
  %r14.0.reload = load i32, i32* %r14.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %29 = inttoptr i64 %rax.0.reload to i32*, !insn.addr !256
  %30 = load i32, i32* %29, align 4, !insn.addr !256
  %31 = add i32 %30, %r14.0.reload, !insn.addr !256
  %32 = add i64 %rax.0.reload, 8, !insn.addr !257
  %33 = inttoptr i64 %32 to i64*, !insn.addr !257
  %34 = load i64, i64* %33, align 8, !insn.addr !257
  %35 = icmp eq i64 %34, 0, !insn.addr !258
  %36 = icmp eq i1 %35, false, !insn.addr !259
  store i64 %34, i64* %rax.0.reg2mem, !insn.addr !259
  store i32 %31, i32* %r14.0.reg2mem, !insn.addr !259
  store i64 %rbp.3.reload, i64* %rbp.4.reg2mem, !insn.addr !259
  br i1 %36, label %dec_label_pc_1790, label %dec_label_pc_17b0, !insn.addr !259

dec_label_pc_17b0:                                ; preds = %dec_label_pc_1790, %dec_label_pc_17b0
  %rbp.4.reload = load i64, i64* %rbp.4.reg2mem
  %37 = add i64 %rbp.4.reload, 8, !insn.addr !260
  %38 = inttoptr i64 %37 to i64*, !insn.addr !260
  %39 = load i64, i64* %38, align 8, !insn.addr !260
  %40 = inttoptr i64 %rbp.4.reload to i64*, !insn.addr !261
  call void @free(i64* %40), !insn.addr !261
  %41 = icmp eq i64 %39, 0, !insn.addr !262
  %42 = icmp eq i1 %41, false, !insn.addr !263
  store i64 %39, i64* %rbp.4.reg2mem, !insn.addr !263
  br i1 %42, label %dec_label_pc_17b0, label %dec_label_pc_17c4.loopexit, !insn.addr !263

dec_label_pc_17c4.loopexit:                       ; preds = %dec_label_pc_17b0
  %43 = zext i32 %31 to i64, !insn.addr !256
  store i64 %43, i64* %r14.2.reg2mem
  br label %dec_label_pc_17c4

dec_label_pc_17c4:                                ; preds = %dec_label_pc_16c0, %dec_label_pc_17c4.loopexit, %dec_label_pc_1777, %dec_label_pc_176b
  %r14.2.reload = load i64, i64* %r14.2.reg2mem
  ret i64 %r14.2.reload, !insn.addr !264

; uselistorder directives
  uselistorder i32 %31, { 1, 0 }
  uselistorder i64 %9, { 2, 1, 3, 0 }
  uselistorder i64* %.in.reload, { 1, 0 }
  uselistorder i64 %r13.015.reload, { 1, 0, 2 }
  uselistorder i64 %rbp.113.reload, { 1, 0 }
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64 %rbp.0.reload, { 0, 1, 3, 2 }
  uselistorder i64* %rbp.0.reg2mem, { 2, 1, 0 }
  uselistorder i64** %.in.reg2mem, { 0, 2, 1 }
  uselistorder i64* %r13.015.reg2mem, { 0, 2, 1 }
  uselistorder i64* %r12.114.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rbp.113.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rbp.2.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbp.3.reg2mem, { 0, 2, 1, 3 }
  uselistorder i64* %r15.1.reg2mem, { 0, 2, 1, 3 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r14.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbp.4.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r14.2.reg2mem, { 0, 2, 3, 4, 1 }
  uselistorder label %dec_label_pc_17c4, { 1, 2, 3, 0 }
  uselistorder label %dec_label_pc_17b0, { 1, 0 }
  uselistorder label %dec_label_pc_1790, { 1, 0 }
  uselistorder label %dec_label_pc_176b, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1750, { 1, 0 }
  uselistorder label %dec_label_pc_1715, { 1, 0 }
  uselistorder label %dec_label_pc_16ef, { 1, 0 }
}

define i64 @create_tree_node(i64 %arg1) local_unnamed_addr {
dec_label_pc_17e0:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = call i64* @malloc(i32 24), !insn.addr !265
  %3 = ptrtoint i64* %2 to i64, !insn.addr !265
  %4 = icmp eq i64* %2, null, !insn.addr !266
  br i1 %4, label %dec_label_pc_17fb, label %dec_label_pc_17f2, !insn.addr !267

dec_label_pc_17f2:                                ; preds = %dec_label_pc_17e0
  %5 = trunc i64 %arg1 to i32, !insn.addr !268
  %6 = bitcast i64* %2 to i32*, !insn.addr !268
  store i32 %5, i32* %6, align 4, !insn.addr !268
  %7 = call i128 @__asm_xorps(i128 %1, i128 %1), !insn.addr !269
  %8 = add i64 %3, 8, !insn.addr !270
  %9 = inttoptr i64 %8 to i128*, !insn.addr !270
  %10 = load i128, i128* %9, align 8, !insn.addr !270
  call void @__asm_movups(i128 %10, i128 %7), !insn.addr !270
  br label %dec_label_pc_17fb, !insn.addr !270

dec_label_pc_17fb:                                ; preds = %dec_label_pc_17f2, %dec_label_pc_17e0
  ret i64 %3, !insn.addr !271

; uselistorder directives
  uselistorder i64 %3, { 1, 0 }
}

define i64 @tree_heap_traversal() local_unnamed_addr {
dec_label_pc_1800:
  %0 = alloca i128
  %rbp.2.reg2mem = alloca i64, !insn.addr !272
  %rbp.1.reg2mem = alloca i64, !insn.addr !272
  %rbp.0.reg2mem = alloca i64, !insn.addr !272
  %rbx.0.reg2mem = alloca i64, !insn.addr !272
  %xmm0.0.reg2mem = alloca i128, !insn.addr !272
  %1 = load i128, i128* %0
  %2 = call i64* @malloc(i32 24), !insn.addr !273
  %3 = icmp eq i64* %2, null, !insn.addr !274
  store i64 4294967295, i64* %rbp.2.reg2mem, !insn.addr !275
  br i1 %3, label %dec_label_pc_18bc, label %dec_label_pc_1816, !insn.addr !275

dec_label_pc_1816:                                ; preds = %dec_label_pc_1800
  %4 = ptrtoint i64* %2 to i64, !insn.addr !273
  %5 = bitcast i64* %2 to i32*, !insn.addr !276
  store i32 10, i32* %5, align 4, !insn.addr !276
  %6 = call i128 @__asm_xorps(i128 %1, i128 %1), !insn.addr !277
  %7 = add i64 %4, 8, !insn.addr !278
  %8 = inttoptr i64 %7 to i128*, !insn.addr !278
  %9 = load i128, i128* %8, align 8, !insn.addr !278
  call void @__asm_movups(i128 %9, i128 %6), !insn.addr !278
  %10 = call i64* @malloc(i32 24), !insn.addr !279
  %11 = ptrtoint i64* %10 to i64, !insn.addr !279
  %12 = icmp eq i64* %10, null, !insn.addr !280
  store i128 %6, i128* %xmm0.0.reg2mem, !insn.addr !281
  br i1 %12, label %dec_label_pc_1847, label %dec_label_pc_1838, !insn.addr !281

dec_label_pc_1838:                                ; preds = %dec_label_pc_1816
  %13 = bitcast i64* %10 to i32*, !insn.addr !282
  store i32 20, i32* %13, align 4, !insn.addr !282
  %14 = call i128 @__asm_xorps(i128 %6, i128 %6), !insn.addr !283
  %15 = add i64 %11, 8, !insn.addr !284
  %16 = inttoptr i64 %15 to i128*, !insn.addr !284
  %17 = load i128, i128* %16, align 8, !insn.addr !284
  call void @__asm_movups(i128 %17, i128 %14), !insn.addr !284
  store i128 %14, i128* %xmm0.0.reg2mem, !insn.addr !284
  br label %dec_label_pc_1847, !insn.addr !284

dec_label_pc_1847:                                ; preds = %dec_label_pc_1838, %dec_label_pc_1816
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %18 = inttoptr i64 %7 to i64*, !insn.addr !285
  store i64 %11, i64* %18, align 8, !insn.addr !285
  %19 = call i64* @malloc(i32 24), !insn.addr !286
  %20 = ptrtoint i64* %19 to i64, !insn.addr !286
  %21 = icmp eq i64* %19, null, !insn.addr !287
  br i1 %21, label %dec_label_pc_1895, label %dec_label_pc_186a, !insn.addr !288

dec_label_pc_186a:                                ; preds = %dec_label_pc_1847
  %22 = bitcast i64* %19 to i32*
  store i32 30, i32* %22, align 4, !insn.addr !289
  %23 = call i128 @__asm_xorps(i128 %xmm0.0.reload, i128 %xmm0.0.reload), !insn.addr !290
  %24 = add i64 %20, 8, !insn.addr !291
  %25 = inttoptr i64 %24 to i128*, !insn.addr !291
  %26 = load i128, i128* %25, align 8, !insn.addr !291
  call void @__asm_movups(i128 %26, i128 %23), !insn.addr !291
  %27 = add i64 %4, 16, !insn.addr !292
  %28 = inttoptr i64 %27 to i64*, !insn.addr !292
  store i64 %20, i64* %28, align 8, !insn.addr !292
  store i64 %20, i64* %rbx.0.reg2mem, !insn.addr !293
  store i64 4294967294, i64* %rbp.0.reg2mem, !insn.addr !293
  br i1 %12, label %dec_label_pc_18ac, label %dec_label_pc_1878, !insn.addr !293

dec_label_pc_1878:                                ; preds = %dec_label_pc_186a
  %29 = bitcast i64* %10 to i32*, !insn.addr !294
  %30 = load i32, i32* %29, align 4, !insn.addr !294
  %31 = load i32, i32* %5, align 4, !insn.addr !295
  %32 = add i32 %31, %30, !insn.addr !295
  %33 = load i32, i32* %22, align 4, !insn.addr !296
  %34 = add i32 %32, %33, !insn.addr !296
  %35 = zext i32 %34 to i64, !insn.addr !296
  call void @free(i64* nonnull %10), !insn.addr !297
  %36 = load i64, i64* %28, align 8, !insn.addr !298
  store i64 %36, i64* %rbx.0.reg2mem, !insn.addr !299
  store i64 %35, i64* %rbp.0.reg2mem, !insn.addr !299
  br label %dec_label_pc_18ac, !insn.addr !299

dec_label_pc_1895:                                ; preds = %dec_label_pc_1847
  %37 = add i64 %4, 16, !insn.addr !292
  %38 = inttoptr i64 %37 to i64*, !insn.addr !292
  store i64 %20, i64* %38, align 8, !insn.addr !292
  store i64 4294967294, i64* %rbp.1.reg2mem, !insn.addr !300
  br i1 %12, label %dec_label_pc_18b4, label %dec_label_pc_189a, !insn.addr !300

dec_label_pc_189a:                                ; preds = %dec_label_pc_1895
  call void @free(i64* nonnull %10), !insn.addr !301
  store i64 4294967294, i64* %rbp.1.reg2mem, !insn.addr !301
  br label %dec_label_pc_18b4, !insn.addr !301

dec_label_pc_18ac:                                ; preds = %dec_label_pc_186a, %dec_label_pc_1878
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %39 = inttoptr i64 %rbx.0.reload to i64*, !insn.addr !302
  call void @free(i64* %39), !insn.addr !302
  store i64 %rbp.0.reload, i64* %rbp.1.reg2mem, !insn.addr !302
  br label %dec_label_pc_18b4, !insn.addr !302

dec_label_pc_18b4:                                ; preds = %dec_label_pc_1895, %dec_label_pc_189a, %dec_label_pc_18ac
  %rbp.1.reload = load i64, i64* %rbp.1.reg2mem
  call void @free(i64* nonnull %2), !insn.addr !303
  store i64 %rbp.1.reload, i64* %rbp.2.reg2mem, !insn.addr !303
  br label %dec_label_pc_18bc, !insn.addr !303

dec_label_pc_18bc:                                ; preds = %dec_label_pc_1800, %dec_label_pc_18b4
  %rbp.2.reload = load i64, i64* %rbp.2.reg2mem
  %40 = and i64 %rbp.2.reload, 4294967295, !insn.addr !304
  ret i64 %40, !insn.addr !305

; uselistorder directives
  uselistorder i64 %20, { 1, 0, 3, 2 }
  uselistorder i1 %12, { 1, 0, 2 }
  uselistorder i64 %11, { 1, 0 }
  uselistorder i128 %6, { 2, 1, 0, 3 }
  uselistorder i64* %2, { 0, 1, 3, 2 }
  uselistorder i64* %rbx.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rbp.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rbp.1.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64* %rbp.2.reg2mem, { 0, 2, 1 }
  uselistorder i64 16, { 0, 2, 1 }
  uselistorder label %dec_label_pc_18bc, { 1, 0 }
  uselistorder label %dec_label_pc_18b4, { 2, 1, 0 }
  uselistorder label %dec_label_pc_18ac, { 1, 0 }
}

define i64 @memory_leak(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_18d0:
  %rdx.0.reg2mem = alloca i64, !insn.addr !306
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !307
  %1 = call i64* @malloc(i32 %0), !insn.addr !307
  %2 = icmp eq i64* %1, null, !insn.addr !308
  br i1 %2, label %dec_label_pc_190d, label %dec_label_pc_18e4, !insn.addr !309

dec_label_pc_18e4:                                ; preds = %dec_label_pc_18d0
  %3 = and i64 %arg1, 4294967295, !insn.addr !310
  %4 = ptrtoint i64* %1 to i64, !insn.addr !307
  %5 = icmp slt i32 %arg1.tr, 1
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !311
  br i1 %5, label %dec_label_pc_18fc, label %dec_label_pc_18f0, !insn.addr !311

dec_label_pc_18f0:                                ; preds = %dec_label_pc_18e4, %dec_label_pc_18f0
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %6 = trunc i64 %rdx.0.reload to i32, !insn.addr !312
  %7 = mul i64 %rdx.0.reload, 4, !insn.addr !312
  %8 = add i64 %7, %4, !insn.addr !312
  %9 = inttoptr i64 %8 to i32*, !insn.addr !312
  store i32 %6, i32* %9, align 4, !insn.addr !312
  %10 = add i64 %rdx.0.reload, 1, !insn.addr !313
  %11 = icmp eq i64 %3, %10, !insn.addr !314
  %12 = icmp eq i1 %11, false, !insn.addr !315
  store i64 %10, i64* %rdx.0.reg2mem, !insn.addr !315
  br i1 %12, label %dec_label_pc_18f0, label %dec_label_pc_18fc, !insn.addr !315

dec_label_pc_18fc:                                ; preds = %dec_label_pc_18f0, %dec_label_pc_18e4
  %13 = icmp slt i32 %arg1.tr, 0
  %14 = zext i1 %13 to i32, !insn.addr !316
  %15 = add i32 %14, %arg1.tr, !insn.addr !317
  %16 = ashr i32 %15, 1, !insn.addr !318
  %17 = sext i32 %16 to i64, !insn.addr !319
  %18 = mul i64 %17, 4, !insn.addr !320
  %19 = add i64 %18, %4, !insn.addr !320
  %20 = inttoptr i64 %19 to i32*, !insn.addr !320
  %21 = load i32, i32* %20, align 4, !insn.addr !320
  %22 = zext i32 %21 to i64, !insn.addr !320
  ret i64 %22, !insn.addr !321

dec_label_pc_190d:                                ; preds = %dec_label_pc_18d0
  ret i64 4294967295, !insn.addr !322

; uselistorder directives
  uselistorder i64 %rdx.0.reload, { 1, 2, 0 }
  uselistorder i64* %1, { 1, 0 }
  uselistorder i32 %arg1.tr, { 2, 1, 3, 0 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_18f0, { 1, 0 }
}

define i64 @dangling_pointer() local_unnamed_addr {
dec_label_pc_1920:
  %0 = call i64* @malloc(i32 4), !insn.addr !323
  %1 = icmp eq i64* %0, null, !insn.addr !324
  br i1 %1, label %dec_label_pc_1958, label %dec_label_pc_1930, !insn.addr !325

dec_label_pc_1930:                                ; preds = %dec_label_pc_1920
  %2 = bitcast i64* %0 to i32*, !insn.addr !326
  store i32 42, i32* %2, align 4, !insn.addr !326
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_3134, i64 0, i64 0), i64 42), !insn.addr !327
  call void @free(i64* nonnull %0), !insn.addr !328
  %4 = load i32, i32* %2, align 4, !insn.addr !329
  %5 = zext i32 %4 to i64, !insn.addr !329
  ret i64 %5, !insn.addr !330

dec_label_pc_1958:                                ; preds = %dec_label_pc_1920
  ret i64 4294967295, !insn.addr !331

; uselistorder directives
  uselistorder i32* %2, { 1, 0 }
  uselistorder i64* %0, { 1, 0, 2 }
  uselistorder i64 42, { 1, 2, 0 }
}

define i64 @double_free(i64 %arg1) local_unnamed_addr {
dec_label_pc_1960:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %arg1, 0, !insn.addr !332
  br i1 %2, label %dec_label_pc_1968, label %dec_label_pc_1965, !insn.addr !333

dec_label_pc_1965:                                ; preds = %dec_label_pc_1960
  %3 = and i64 %1, 4294967295, !insn.addr !334
  ret i64 %3, !insn.addr !335

dec_label_pc_1968:                                ; preds = %dec_label_pc_1960
  ret i64 4294967294, !insn.addr !336
}

define i64 @heap_overflow(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1970:
  %rbx.0.reg2mem = alloca i64, !insn.addr !337
  %rdx.0.reg2mem = alloca i64, !insn.addr !337
  %rcx.0.reg2mem = alloca i64, !insn.addr !337
  %0 = call i64* @malloc(i32 40), !insn.addr !338
  %1 = icmp eq i64* %0, null, !insn.addr !339
  store i64 4294967295, i64* %rbx.0.reg2mem, !insn.addr !340
  br i1 %1, label %dec_label_pc_19b4, label %dec_label_pc_1980, !insn.addr !340

dec_label_pc_1980:                                ; preds = %dec_label_pc_1970
  %2 = ptrtoint i64* %0 to i64, !insn.addr !338
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !341
  store i64 %2, i64* %rdx.0.reg2mem, !insn.addr !341
  br label %dec_label_pc_1990, !insn.addr !341

dec_label_pc_1990:                                ; preds = %dec_label_pc_1990, %dec_label_pc_1980
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %3 = trunc i64 %rcx.0.reload to i32, !insn.addr !342
  %4 = inttoptr i64 %rdx.0.reload to i32*, !insn.addr !342
  store i32 %3, i32* %4, align 4, !insn.addr !342
  %5 = add i64 %rcx.0.reload, 100, !insn.addr !343
  %6 = add i64 %rdx.0.reload, 4, !insn.addr !344
  %7 = icmp eq i64 %5, ptrtoint (i64* @global_var_44c to i64), !insn.addr !345
  %8 = icmp eq i1 %7, false, !insn.addr !346
  store i64 %5, i64* %rcx.0.reg2mem, !insn.addr !346
  store i64 %6, i64* %rdx.0.reg2mem, !insn.addr !346
  br i1 %8, label %dec_label_pc_1990, label %dec_label_pc_19a3, !insn.addr !346

dec_label_pc_19a3:                                ; preds = %dec_label_pc_1990
  %9 = bitcast i64* %0 to i32*, !insn.addr !347
  %10 = load i32, i32* %9, align 4, !insn.addr !347
  %11 = zext i32 %10 to i64, !insn.addr !347
  call void @free(i64* nonnull %0), !insn.addr !348
  store i64 %11, i64* %rbx.0.reg2mem, !insn.addr !349
  br label %dec_label_pc_19b4, !insn.addr !349

dec_label_pc_19b4:                                ; preds = %dec_label_pc_1970, %dec_label_pc_19a3
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  ret i64 %rbx.0.reload, !insn.addr !350

; uselistorder directives
  uselistorder i64 %rcx.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64* %0, { 0, 1, 3, 2 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_19b4, { 1, 0 }
}

define i64 @test_heap_memory(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_19c0:
  %rax.1.reg2mem = alloca i64, !insn.addr !351
  %storemerge.reg2mem = alloca i64, !insn.addr !351
  %storemerge2.reg2mem = alloca i64, !insn.addr !351
  %rcx.4.reg2mem = alloca i64, !insn.addr !351
  %rsi.0.ph.reg2mem = alloca i64, !insn.addr !351
  %r14.1.reg2mem = alloca i64, !insn.addr !351
  %rdx.1.reg2mem = alloca i64, !insn.addr !351
  %rcx.3.reg2mem = alloca i64, !insn.addr !351
  %rbp.3.reg2mem = alloca i64, !insn.addr !351
  %rbp.2.reg2mem = alloca i64, !insn.addr !351
  %rbx.1.reg2mem = alloca i64, !insn.addr !351
  %rdx.0.reg2mem = alloca i64, !insn.addr !351
  %rcx.2.reg2mem = alloca i64, !insn.addr !351
  %rax.0.reg2mem = alloca i64, !insn.addr !351
  %r14.0.reg2mem = alloca i64, !insn.addr !351
  %rbx.0.reg2mem = alloca i32, !insn.addr !351
  %rcx.1.reg2mem = alloca i64, !insn.addr !351
  %rbp.0.reg2mem = alloca i64, !insn.addr !351
  %rcx.0.reg2mem = alloca i64, !insn.addr !351
  %stack_var_-36 = alloca i32, align 4
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_35f7 to i8*)), !insn.addr !352
  %1 = call i64* @malloc(i32 40), !insn.addr !353
  %2 = ptrtoint i64* %1 to i64, !insn.addr !353
  %3 = icmp eq i64* %1, null, !insn.addr !354
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !355
  store i64 4294967295, i64* %rbp.0.reg2mem, !insn.addr !355
  br i1 %3, label %dec_label_pc_1a08, label %dec_label_pc_19f0, !insn.addr !355

dec_label_pc_19f0:                                ; preds = %dec_label_pc_19c0, %dec_label_pc_19f0
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %4 = trunc i64 %rcx.0.reload to i32, !insn.addr !356
  %5 = mul i64 %rcx.0.reload, 2, !insn.addr !356
  %6 = add i64 %5, %2, !insn.addr !356
  %7 = inttoptr i64 %6 to i32*, !insn.addr !356
  store i32 %4, i32* %7, align 4, !insn.addr !356
  %8 = add nuw nsw i64 %rcx.0.reload, 2, !insn.addr !357
  %9 = icmp eq i64 %rcx.0.reload, 18, !insn.addr !358
  %10 = icmp eq i1 %9, false, !insn.addr !359
  store i64 %8, i64* %rcx.0.reg2mem, !insn.addr !359
  br i1 %10, label %dec_label_pc_19f0, label %dec_label_pc_19fd, !insn.addr !359

dec_label_pc_19fd:                                ; preds = %dec_label_pc_19f0
  %11 = add i64 %2, 20, !insn.addr !360
  %12 = inttoptr i64 %11 to i32*, !insn.addr !360
  %13 = load i32, i32* %12, align 4, !insn.addr !360
  %14 = zext i32 %13 to i64, !insn.addr !360
  call void @free(i64* nonnull %1), !insn.addr !361
  store i64 %14, i64* %rbp.0.reg2mem, !insn.addr !361
  br label %dec_label_pc_1a08, !insn.addr !361

dec_label_pc_1a08:                                ; preds = %dec_label_pc_19fd, %dec_label_pc_19c0
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_314b, i64 0, i64 0), i64 %rbp.0.reload), !insn.addr !362
  %16 = call i64* @calloc(i32 5, i32 4), !insn.addr !363
  %17 = ptrtoint i64* %16 to i64, !insn.addr !363
  %18 = icmp eq i64* %16, null, !insn.addr !364
  store i64 0, i64* %rcx.1.reg2mem, !insn.addr !365
  store i32 0, i32* %rbx.0.reg2mem, !insn.addr !365
  store i64 4294967295, i64* %r14.0.reg2mem, !insn.addr !365
  br i1 %18, label %dec_label_pc_1a48, label %dec_label_pc_1a30, !insn.addr !365

dec_label_pc_1a30:                                ; preds = %dec_label_pc_1a08, %dec_label_pc_1a30
  %rbx.0.reload = load i32, i32* %rbx.0.reg2mem
  %rcx.1.reload = load i64, i64* %rcx.1.reg2mem
  %19 = mul i64 %rcx.1.reload, 4, !insn.addr !366
  %20 = add i64 %19, %17, !insn.addr !366
  %21 = inttoptr i64 %20 to i32*, !insn.addr !366
  %22 = load i32, i32* %21, align 4, !insn.addr !366
  %23 = add i32 %22, %rbx.0.reload, !insn.addr !366
  %24 = add nuw nsw i64 %rcx.1.reload, 1, !insn.addr !367
  %exitcond5 = icmp eq i64 %24, 5
  store i64 %24, i64* %rcx.1.reg2mem, !insn.addr !368
  store i32 %23, i32* %rbx.0.reg2mem, !insn.addr !368
  br i1 %exitcond5, label %dec_label_pc_1a3d, label %dec_label_pc_1a30, !insn.addr !368

dec_label_pc_1a3d:                                ; preds = %dec_label_pc_1a30
  %25 = zext i32 %23 to i64, !insn.addr !366
  call void @free(i64* nonnull %16), !insn.addr !369
  store i64 %25, i64* %r14.0.reg2mem, !insn.addr !370
  br label %dec_label_pc_1a48, !insn.addr !370

dec_label_pc_1a48:                                ; preds = %dec_label_pc_1a3d, %dec_label_pc_1a08
  %r14.0.reload = load i64, i64* %r14.0.reg2mem
  %26 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3168, i64 0, i64 0), i64 %r14.0.reload), !insn.addr !371
  %27 = call i64* @malloc(i32 20), !insn.addr !372
  %28 = ptrtoint i64* %27 to i64, !insn.addr !372
  %29 = icmp eq i64* %27, null, !insn.addr !373
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !374
  store i64 4294967295, i64* %rbp.3.reg2mem, !insn.addr !374
  br i1 %29, label %dec_label_pc_1ae0, label %dec_label_pc_1a80, !insn.addr !374

dec_label_pc_1a80:                                ; preds = %dec_label_pc_1a48, %dec_label_pc_1a80
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %30 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !375
  %31 = trunc i64 %30 to i32, !insn.addr !376
  %32 = mul i64 %rax.0.reload, 4, !insn.addr !376
  %33 = add i64 %32, %28, !insn.addr !376
  %34 = inttoptr i64 %33 to i32*, !insn.addr !376
  store i32 %31, i32* %34, align 4, !insn.addr !376
  %exitcond4 = icmp eq i64 %30, 5
  store i64 %30, i64* %rax.0.reg2mem, !insn.addr !377
  br i1 %exitcond4, label %dec_label_pc_1a90, label %dec_label_pc_1a80, !insn.addr !377

dec_label_pc_1a90:                                ; preds = %dec_label_pc_1a80
  %35 = add i64 %28, 8, !insn.addr !378
  %36 = inttoptr i64 %35 to i32*, !insn.addr !378
  %37 = load i32, i32* %36, align 4, !insn.addr !378
  %38 = call i64* @realloc(i64* nonnull %27, i32 40), !insn.addr !379
  %39 = ptrtoint i64* %38 to i64, !insn.addr !379
  %40 = icmp eq i64* %38, null, !insn.addr !380
  store i64 5, i64* %rcx.2.reg2mem, !insn.addr !381
  store i64 50, i64* %rdx.0.reg2mem, !insn.addr !381
  store i64 %28, i64* %rbx.1.reg2mem, !insn.addr !381
  store i64 4294967294, i64* %rbp.2.reg2mem, !insn.addr !381
  br i1 %40, label %dec_label_pc_1ad8, label %dec_label_pc_1ab0, !insn.addr !381

dec_label_pc_1ab0:                                ; preds = %dec_label_pc_1a90, %dec_label_pc_1ab0
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.2.reload = load i64, i64* %rcx.2.reg2mem
  %41 = trunc i64 %rdx.0.reload to i32, !insn.addr !382
  %42 = mul i64 %rcx.2.reload, 4, !insn.addr !382
  %43 = add i64 %42, %39, !insn.addr !382
  %44 = inttoptr i64 %43 to i32*, !insn.addr !382
  store i32 %41, i32* %44, align 4, !insn.addr !382
  %45 = add nuw nsw i64 %rcx.2.reload, 1, !insn.addr !383
  %46 = add nuw nsw i64 %rdx.0.reload, 10, !insn.addr !384
  %47 = and i64 %46, 4294967295, !insn.addr !384
  %exitcond3 = icmp eq i64 %45, 10
  store i64 %45, i64* %rcx.2.reg2mem, !insn.addr !385
  store i64 %47, i64* %rdx.0.reg2mem, !insn.addr !385
  br i1 %exitcond3, label %dec_label_pc_1ac0, label %dec_label_pc_1ab0, !insn.addr !385

dec_label_pc_1ac0:                                ; preds = %dec_label_pc_1ab0
  %48 = add i64 %39, 8, !insn.addr !386
  %49 = inttoptr i64 %48 to i32*, !insn.addr !386
  %50 = load i32, i32* %49, align 4, !insn.addr !386
  %51 = icmp eq i32 %50, %37, !insn.addr !386
  %52 = icmp eq i1 %51, false, !insn.addr !387
  store i64 %39, i64* %rbx.1.reg2mem, !insn.addr !387
  store i64 4294967293, i64* %rbp.2.reg2mem, !insn.addr !387
  br i1 %52, label %dec_label_pc_1ad8, label %dec_label_pc_1acb, !insn.addr !387

dec_label_pc_1acb:                                ; preds = %dec_label_pc_1ac0
  %53 = add i64 %39, 20, !insn.addr !388
  %54 = inttoptr i64 %53 to i32*, !insn.addr !388
  %55 = load i32, i32* %54, align 4, !insn.addr !388
  %56 = zext i32 %55 to i64, !insn.addr !388
  store i64 %39, i64* %rbx.1.reg2mem, !insn.addr !388
  store i64 %56, i64* %rbp.2.reg2mem, !insn.addr !388
  br label %dec_label_pc_1ad8, !insn.addr !388

dec_label_pc_1ad8:                                ; preds = %dec_label_pc_1a90, %dec_label_pc_1ac0, %dec_label_pc_1acb
  %rbp.2.reload = load i64, i64* %rbp.2.reg2mem
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %57 = inttoptr i64 %rbx.1.reload to i64*, !insn.addr !389
  call void @free(i64* %57), !insn.addr !389
  store i64 %rbp.2.reload, i64* %rbp.3.reg2mem, !insn.addr !389
  br label %dec_label_pc_1ae0, !insn.addr !389

dec_label_pc_1ae0:                                ; preds = %dec_label_pc_1ad8, %dec_label_pc_1a48
  %rbp.3.reload = load i64, i64* %rbp.3.reg2mem
  %58 = and i64 %rbp.3.reload, 4294967295, !insn.addr !390
  %59 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3186, i64 0, i64 0), i64 %58), !insn.addr !391
  %60 = call i64* @malloc(i32 40), !insn.addr !392
  %61 = ptrtoint i64* %60 to i64, !insn.addr !392
  %62 = icmp eq i64* %60, null, !insn.addr !393
  store i64 0, i64* %rcx.3.reg2mem, !insn.addr !394
  store i64 %61, i64* %rdx.1.reg2mem, !insn.addr !394
  store i64 4294967295, i64* %r14.1.reg2mem, !insn.addr !394
  br i1 %62, label %dec_label_pc_1b2c, label %dec_label_pc_1b10, !insn.addr !394

dec_label_pc_1b10:                                ; preds = %dec_label_pc_1ae0, %dec_label_pc_1b10
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  %rcx.3.reload = load i64, i64* %rcx.3.reg2mem
  %63 = trunc i64 %rcx.3.reload to i32, !insn.addr !395
  %64 = inttoptr i64 %rdx.1.reload to i32*, !insn.addr !395
  store i32 %63, i32* %64, align 4, !insn.addr !395
  %65 = add nuw nsw i64 %rcx.3.reload, 3, !insn.addr !396
  %66 = add i64 %rdx.1.reload, 4, !insn.addr !397
  %67 = icmp eq i64 %rcx.3.reload, 27, !insn.addr !398
  %68 = icmp eq i1 %67, false, !insn.addr !399
  store i64 %65, i64* %rcx.3.reg2mem, !insn.addr !399
  store i64 %66, i64* %rdx.1.reg2mem, !insn.addr !399
  br i1 %68, label %dec_label_pc_1b10, label %dec_label_pc_1b20, !insn.addr !399

dec_label_pc_1b20:                                ; preds = %dec_label_pc_1b10
  %69 = add i64 %61, 20, !insn.addr !400
  %70 = inttoptr i64 %69 to i32*, !insn.addr !400
  %71 = load i32, i32* %70, align 4, !insn.addr !400
  %72 = zext i32 %71 to i64, !insn.addr !400
  call void @free(i64* nonnull %60), !insn.addr !401
  store i64 %72, i64* %r14.1.reg2mem, !insn.addr !401
  br label %dec_label_pc_1b2c, !insn.addr !401

dec_label_pc_1b2c:                                ; preds = %dec_label_pc_1b20, %dec_label_pc_1ae0
  %r14.1.reload = load i64, i64* %r14.1.reg2mem
  %73 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_31a5, i64 0, i64 0), i64 %r14.1.reload), !insn.addr !402
  %74 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_31c2, i64 0, i64 0), i64 15), !insn.addr !403
  %75 = call i64* @malloc(i32 16), !insn.addr !404
  %76 = icmp eq i64* %75, null, !insn.addr !405
  br i1 %76, label %dec_label_pc_1ba1, label %dec_label_pc_1b62, !insn.addr !406

dec_label_pc_1b62:                                ; preds = %dec_label_pc_1b2c
  %77 = ptrtoint i64* %75 to i64, !insn.addr !404
  %78 = bitcast i64* %75 to i32*, !insn.addr !407
  store i32 10, i32* %78, align 4, !insn.addr !407
  %79 = call i64* @malloc(i32 16), !insn.addr !408
  %80 = ptrtoint i64* %79 to i64, !insn.addr !408
  %81 = add i64 %77, 8
  %82 = inttoptr i64 %81 to i64*
  store i64 %80, i64* %82, align 8, !insn.addr !409
  %83 = icmp eq i64* %79, null, !insn.addr !410
  br i1 %83, label %dec_label_pc_1b94, label %dec_label_pc_1b7b, !insn.addr !411

dec_label_pc_1b7b:                                ; preds = %dec_label_pc_1b62
  %84 = bitcast i64* %79 to i32*, !insn.addr !412
  store i32 20, i32* %84, align 4, !insn.addr !412
  %85 = add i64 %80, 8, !insn.addr !413
  %86 = inttoptr i64 %85 to i64*, !insn.addr !413
  store i64 0, i64* %86, align 8, !insn.addr !413
  store i64 0, i64* %rsi.0.ph.reg2mem, !insn.addr !414
  br label %dec_label_pc_1bb4, !insn.addr !414

dec_label_pc_1b94:                                ; preds = %dec_label_pc_1b62
  call void @free(i64* nonnull %75), !insn.addr !415
  store i64 4294967294, i64* %rsi.0.ph.reg2mem, !insn.addr !416
  br label %dec_label_pc_1bb4, !insn.addr !416

dec_label_pc_1ba1:                                ; preds = %dec_label_pc_1b2c
  %87 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_31e0, i64 0, i64 0), i64 4294967295), !insn.addr !417
  br label %dec_label_pc_1bc5

dec_label_pc_1bb4:                                ; preds = %dec_label_pc_1b94, %dec_label_pc_1b7b
  %rsi.0.ph.reload = load i64, i64* %rsi.0.ph.reg2mem
  %88 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_31e0, i64 0, i64 0), i64 %rsi.0.ph.reload), !insn.addr !417
  %89 = load i64, i64* %82, align 8, !insn.addr !418
  %90 = inttoptr i64 %89 to i64*, !insn.addr !419
  call void @free(i64* %90), !insn.addr !419
  call void @free(i64* nonnull %75), !insn.addr !420
  br label %dec_label_pc_1bc5, !insn.addr !420

dec_label_pc_1bc5:                                ; preds = %dec_label_pc_1ba1, %dec_label_pc_1bb4
  %91 = call i64 @linked_list_heap(), !insn.addr !421
  %92 = and i64 %91, 4294967295, !insn.addr !422
  %93 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_31fe, i64 0, i64 0), i64 %92), !insn.addr !423
  %94 = call i64 @tree_heap_traversal(), !insn.addr !424
  %95 = and i64 %94, 4294967295, !insn.addr !425
  %96 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3221, i64 0, i64 0), i64 %95), !insn.addr !426
  %97 = call i64* @malloc(i32 20), !insn.addr !427
  %98 = ptrtoint i64* %97 to i64, !insn.addr !427
  %99 = icmp eq i64* %97, null, !insn.addr !428
  store i64 0, i64* %rcx.4.reg2mem, !insn.addr !429
  store i64 4294967295, i64* %storemerge2.reg2mem, !insn.addr !429
  br i1 %99, label %dec_label_pc_1c17, label %dec_label_pc_1c00, !insn.addr !429

dec_label_pc_1c00:                                ; preds = %dec_label_pc_1bc5, %dec_label_pc_1c00
  %rcx.4.reload = load i64, i64* %rcx.4.reg2mem
  %100 = trunc i64 %rcx.4.reload to i32, !insn.addr !430
  %101 = mul i64 %rcx.4.reload, 4, !insn.addr !430
  %102 = add i64 %101, %98, !insn.addr !430
  %103 = inttoptr i64 %102 to i32*, !insn.addr !430
  store i32 %100, i32* %103, align 4, !insn.addr !430
  %104 = add nuw nsw i64 %rcx.4.reload, 1, !insn.addr !431
  %exitcond = icmp eq i64 %104, 5
  store i64 %104, i64* %rcx.4.reg2mem, !insn.addr !432
  br i1 %exitcond, label %dec_label_pc_1c0d, label %dec_label_pc_1c00, !insn.addr !432

dec_label_pc_1c0d:                                ; preds = %dec_label_pc_1c00
  %105 = add i64 %98, 8, !insn.addr !433
  %106 = inttoptr i64 %105 to i32*, !insn.addr !433
  %107 = load i32, i32* %106, align 4, !insn.addr !433
  %108 = zext i32 %107 to i64, !insn.addr !433
  store i64 %108, i64* %storemerge2.reg2mem, !insn.addr !434
  br label %dec_label_pc_1c17, !insn.addr !434

dec_label_pc_1c17:                                ; preds = %dec_label_pc_1bc5, %dec_label_pc_1c0d
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %109 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3247, i64 0, i64 0), i64 %storemerge2.reload), !insn.addr !435
  %110 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3265, i64 0, i64 0)), !insn.addr !436
  %111 = call i32 @fork(), !insn.addr !437
  %112 = icmp eq i32 %111, 0, !insn.addr !438
  br i1 %112, label %dec_label_pc_1c9f, label %dec_label_pc_1c3c, !insn.addr !439

dec_label_pc_1c3c:                                ; preds = %dec_label_pc_1c17
  %113 = icmp slt i32 %111, 1
  br i1 %113, label %dec_label_pc_1c91, label %dec_label_pc_1c3e, !insn.addr !440

dec_label_pc_1c3e:                                ; preds = %dec_label_pc_1c3c
  %114 = call i32 @waitpid(i32 %111, i32* nonnull %stack_var_-36, i32 0), !insn.addr !441
  %115 = load i32, i32* %stack_var_-36, align 4, !insn.addr !442
  %116 = urem i32 %115, 128, !insn.addr !443
  %117 = icmp eq i32 %116, 0, !insn.addr !443
  store i64 ptrtoint (i64* @global_var_3295 to i64), i64* %storemerge.reg2mem, !insn.addr !444
  br i1 %117, label %dec_label_pc_1c7f, label %dec_label_pc_1c57, !insn.addr !444

dec_label_pc_1c57:                                ; preds = %dec_label_pc_1c3e
  %118 = zext i32 %116 to i64, !insn.addr !443
  %119 = mul i32 %116, 16777216, !insn.addr !445
  %120 = add nuw i32 %119, 16777216, !insn.addr !446
  %121 = icmp slt i32 %120, 33554432, !insn.addr !447
  store i64 ptrtoint (i8** @global_var_32ba to i64), i64* %storemerge.reg2mem, !insn.addr !447
  store i64 %118, i64* %rax.1.reg2mem, !insn.addr !447
  br i1 %121, label %dec_label_pc_1c86, label %dec_label_pc_1c7f, !insn.addr !447

dec_label_pc_1c7f:                                ; preds = %dec_label_pc_1c3e, %dec_label_pc_1c57
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %122 = inttoptr i64 %storemerge.reload to i8*, !insn.addr !448
  %123 = call i32 (i8*, ...) @printf(i8* %122), !insn.addr !448
  %124 = sext i32 %123 to i64, !insn.addr !448
  store i64 %124, i64* %rax.1.reg2mem, !insn.addr !448
  br label %dec_label_pc_1c86, !insn.addr !448

dec_label_pc_1c86:                                ; preds = %dec_label_pc_1c91, %dec_label_pc_1c7f, %dec_label_pc_1c57
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !449

dec_label_pc_1c91:                                ; preds = %dec_label_pc_1c3c
  call void @perror(i8* bitcast (i8** @global_var_32fb to i8*)), !insn.addr !450
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.1.reg2mem, !insn.addr !451
  br label %dec_label_pc_1c86, !insn.addr !451

dec_label_pc_1c9f:                                ; preds = %dec_label_pc_1c17
  %125 = call i64 @dangling_pointer(), !insn.addr !452
  %126 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3285 to i8*)), !insn.addr !453
  call void @exit(i32 xor (i32 ptrtoint (i8** @global_var_3285 to i32), i32 ptrtoint (i8** @global_var_3285 to i32))), !insn.addr !454
  unreachable, !insn.addr !454

; uselistorder directives
  uselistorder i32 %116, { 0, 2, 1 }
  uselistorder i64 %rcx.4.reload, { 1, 2, 0 }
  uselistorder i64 %98, { 1, 0 }
  uselistorder i64* %75, { 1, 0, 2, 4, 3 }
  uselistorder i64 %rcx.3.reload, { 1, 2, 0 }
  uselistorder i64 %rdx.1.reload, { 1, 0 }
  uselistorder i64 %61, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64 %39, { 1, 4, 0, 3, 2 }
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i64 %28, { 0, 2, 1 }
  uselistorder i32 %23, { 1, 0 }
  uselistorder i64 %rcx.0.reload, { 1, 2, 3, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %rcx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rcx.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rbx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rcx.2.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.1.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64* %rbp.2.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64* %rcx.3.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rcx.4.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge2.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.1.reg2mem, { 3, 0, 2, 1 }
  uselistorder i32 16777216, { 1, 0 }
  uselistorder i32 16, { 1, 2, 3, 0, 4, 5 }
  uselistorder i64* (i64*, i32)* @realloc, { 1, 0, 2 }
  uselistorder i32 20, { 0, 3, 1, 4, 5, 2 }
  uselistorder i64 4, { 0, 16, 1, 2, 3, 17, 4, 5, 15, 6, 18, 7, 8, 9, 10, 19, 11, 20, 12, 13, 14 }
  uselistorder i64* (i32, i32)* @calloc, { 1, 0, 2 }
  uselistorder i32 4, { 3, 4, 0, 1, 5, 2 }
  uselistorder void (i64*)* @free, { 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 20 }
  uselistorder i64* null, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 0, 17, 18, 19, 20, 21, 22, 23 }
  uselistorder i64* (i32)* @malloc, { 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 0, 5, 4, 3, 2, 1, 20 }
  uselistorder label %dec_label_pc_1c7f, { 1, 0 }
  uselistorder label %dec_label_pc_1c17, { 1, 0 }
  uselistorder label %dec_label_pc_1c00, { 1, 0 }
  uselistorder label %dec_label_pc_1bc5, { 1, 0 }
  uselistorder label %dec_label_pc_1b10, { 1, 0 }
  uselistorder label %dec_label_pc_1ad8, { 2, 1, 0 }
  uselistorder label %dec_label_pc_1ab0, { 1, 0 }
  uselistorder label %dec_label_pc_1a80, { 1, 0 }
  uselistorder label %dec_label_pc_1a30, { 1, 0 }
  uselistorder label %dec_label_pc_19f0, { 1, 0 }
}

define i64 @global_var_access() local_unnamed_addr {
dec_label_pc_1cc0:
  store i32 ptrtoint (i32* @global_var_60b1 to i32), i32* @global_var_60b0, align 4, !insn.addr !455
  ret i64 ptrtoint (i32* @global_var_60b1 to i64), !insn.addr !456
}

define i64 @global_var_read() local_unnamed_addr {
dec_label_pc_1cd0:
  %0 = load i32, i32* @global_var_60b0, align 4, !insn.addr !457
  %1 = mul i32 %0, 2, !insn.addr !458
  %2 = zext i32 %1 to i64, !insn.addr !458
  ret i64 %2, !insn.addr !459
}

define i64 @global_array_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_1ce0:
  %rax.0.reg2mem = alloca i64, !insn.addr !460
  %0 = trunc i64 %arg1 to i32, !insn.addr !461
  %1 = icmp ult i32 %0, 10
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !462
  br i1 %1, label %dec_label_pc_1cea, label %dec_label_pc_1cf7, !insn.addr !462

dec_label_pc_1cea:                                ; preds = %dec_label_pc_1ce0
  %sext = mul i64 %arg1, 4294967296
  %2 = ashr exact i64 %sext, 30, !insn.addr !463
  %3 = add i64 %2, ptrtoint (i32** @global_var_3660 to i64), !insn.addr !463
  %4 = inttoptr i64 %3 to i32*, !insn.addr !463
  %5 = load i32, i32* %4, align 4, !insn.addr !463
  %6 = zext i32 %5 to i64, !insn.addr !463
  store i64 %6, i64* %rax.0.reg2mem, !insn.addr !463
  br label %dec_label_pc_1cf7, !insn.addr !463

dec_label_pc_1cf7:                                ; preds = %dec_label_pc_1ce0, %dec_label_pc_1cea
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !464

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 10, { 0, 2, 3, 1, 4 }
  uselistorder label %dec_label_pc_1cf7, { 1, 0 }
}

define i64 @static_local(i64 %arg1) local_unnamed_addr {
dec_label_pc_1d00:
  %0 = trunc i64 %arg1 to i32, !insn.addr !465
  %1 = icmp eq i32 %0, 0, !insn.addr !465
  %2 = select i1 %1, i64 zext (i32 ptrtoint (i32* @global_var_60b5 to i32) to i64), i64 0, !insn.addr !466
  %3 = trunc i64 %2 to i32, !insn.addr !467
  store i32 %3, i32* bitcast (i64* @global_var_60b4 to i32*), align 8, !insn.addr !467
  ret i64 %2, !insn.addr !468
}

define i64 @call_static_func(i64 %arg1) local_unnamed_addr {
dec_label_pc_1d20:
  %0 = mul i64 %arg1, 2, !insn.addr !469
  %1 = and i64 %0, 4294967294, !insn.addr !470
  %2 = or i64 %1, 1, !insn.addr !470
  ret i64 %2, !insn.addr !471
}

define i64 @access_extern_global() local_unnamed_addr {
dec_label_pc_1d30:
  %0 = load i32, i32* @global_var_60a4, align 4, !insn.addr !472
  %1 = add i32 %0, 100, !insn.addr !473
  %2 = zext i32 %1 to i64, !insn.addr !473
  ret i64 %2, !insn.addr !474
}

define i64 @call_extern_func() local_unnamed_addr {
dec_label_pc_1d40:
  %0 = call i64 @extern_function(i64 5), !insn.addr !475
  ret i64 %0, !insn.addr !476
}

define i64 @read_const_data() local_unnamed_addr {
dec_label_pc_1d50:
  ret i64 ptrtoint (i32* @global_var_60c6 to i64), !insn.addr !477
}

define i64 @access_bss_var() local_unnamed_addr {
dec_label_pc_1d60:
  ret i64 0, !insn.addr !478
}

define i64 @access_bss_buffer() local_unnamed_addr {
dec_label_pc_1d70:
  ret i64 0, !insn.addr !479
}

define i64 @global_struct_access() local_unnamed_addr {
dec_label_pc_1d80:
  ret i64 30, !insn.addr !480
}

define i64 @set_file_static(i64 %arg1) local_unnamed_addr {
dec_label_pc_1d90:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg1 to i32, !insn.addr !481
  store i32 %2, i32* @global_var_60a0, align 4, !insn.addr !481
  ret i64 %1, !insn.addr !482
}

define i64 @get_file_static() local_unnamed_addr {
dec_label_pc_1da0:
  %0 = load i32, i32* @global_var_60a0, align 4, !insn.addr !483
  %1 = zext i32 %0 to i64, !insn.addr !483
  ret i64 %1, !insn.addr !484
}

define i64 @set_global_callback(i64 %arg1) local_unnamed_addr {
dec_label_pc_1db0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  store i64 %arg1, i64* @global_var_60b8, align 8, !insn.addr !485
  ret i64 %1, !insn.addr !486
}

define i64 @call_global_callback() local_unnamed_addr {
dec_label_pc_1dc0:
  %0 = load i64, i64* @global_var_60b8, align 8, !insn.addr !487
  %1 = icmp eq i64 %0, 0, !insn.addr !488
  %spec.select = select i1 %1, i64 4294967295, i64 %0
  ret i64 %spec.select, !insn.addr !489
}

define i64 @global_heap_store(i64 %arg1) local_unnamed_addr {
dec_label_pc_1de0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  store i64 %arg1, i64* @global_var_60c0, align 8, !insn.addr !490
  %2 = icmp eq i64 %arg1, 0, !insn.addr !491
  br i1 %2, label %dec_label_pc_1def, label %dec_label_pc_1dec, !insn.addr !492

dec_label_pc_1dec:                                ; preds = %dec_label_pc_1de0
  %3 = and i64 %1, 4294967295, !insn.addr !493
  ret i64 %3, !insn.addr !494

dec_label_pc_1def:                                ; preds = %dec_label_pc_1de0
  ret i64 4294967295, !insn.addr !495

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @static_complex_init() local_unnamed_addr {
dec_label_pc_1e00:
  ret i64 15, !insn.addr !496
}

define i64 @tls_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_1e10:
  %0 = mul i64 %arg1, 2, !insn.addr !497
  %1 = and i64 %0, 4294967294, !insn.addr !497
  ret i64 %1, !insn.addr !498
}

define i64 @init_order_test() local_unnamed_addr {
dec_label_pc_1e20:
  ret i64 20, !insn.addr !499
}

define i64 @test_static_global() local_unnamed_addr {
dec_label_pc_1e30:
  %stack_var_-12 = alloca i32, align 4
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3615 to i8*)), !insn.addr !500
  store i32 ptrtoint (i32* @global_var_60b1 to i32), i32* @global_var_60b0, align 4, !insn.addr !501
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3306, i64 0, i64 0), i64 ptrtoint (i32* @global_var_60b1 to i64)), !insn.addr !502
  %2 = load i32, i32* @global_var_60b0, align 4, !insn.addr !503
  %3 = mul i32 %2, 2, !insn.addr !504
  %4 = zext i32 %3 to i64, !insn.addr !504
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3329, i64 0, i64 0), i64 %4), !insn.addr !505
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_334a, i64 0, i64 0), i64 5), !insn.addr !506
  store i32 1, i32* bitcast (i64* @global_var_60b4 to i32*), align 8, !insn.addr !507
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_336f, i64 0, i64 0), i64 1), !insn.addr !508
  store i32 ptrtoint (i32* @global_var_60b5 to i32), i32* bitcast (i64* @global_var_60b4 to i32*), align 8, !insn.addr !509
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_336f, i64 0, i64 0), i64 ptrtoint (i32* @global_var_60b5 to i64)), !insn.addr !510
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_338d, i64 0, i64 0), i64 11), !insn.addr !511
  %10 = load i32, i32* @global_var_60a4, align 4, !insn.addr !512
  %11 = add i32 %10, 100, !insn.addr !513
  %12 = zext i32 %11 to i64, !insn.addr !513
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_33af, i64 0, i64 0), i64 %12), !insn.addr !514
  %14 = call i64 @extern_function(i64 5), !insn.addr !515
  %15 = and i64 %14, 4294967295, !insn.addr !516
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_33d5, i64 0, i64 0), i64 %15), !insn.addr !517
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_33f7, i64 0, i64 0), i64 ptrtoint (i32* @global_var_60c6 to i64)), !insn.addr !518
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3418, i64 0, i64 0), i64 zext (i32 xor (i32 ptrtoint (i32* @global_var_60c6 to i32), i32 ptrtoint (i32* @global_var_60c6 to i32)) to i64)), !insn.addr !519
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3438, i64 0, i64 0), i64 zext (i32 xor (i32 xor (i32 ptrtoint (i32* @global_var_60c6 to i32), i32 ptrtoint (i32* @global_var_60c6 to i32)), i32 xor (i32 ptrtoint (i32* @global_var_60c6 to i32), i32 ptrtoint (i32* @global_var_60c6 to i32))) to i64)), !insn.addr !520
  %20 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_345b, i64 0, i64 0), i64 30), !insn.addr !521
  store i32 50, i32* @global_var_60a0, align 4, !insn.addr !522
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3481, i64 0, i64 0), i64 50), !insn.addr !523
  store i64 8192, i64* @global_var_60b8, align 8, !insn.addr !524
  %22 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_349e, i64 0, i64 0), i64 10), !insn.addr !525
  store i32 100, i32* %stack_var_-12, align 4, !insn.addr !526
  %23 = ptrtoint i32* %stack_var_-12 to i64, !insn.addr !527
  store i64 %23, i64* @global_var_60c0, align 8, !insn.addr !527
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_34bf, i64 0, i64 0), i64 100), !insn.addr !528
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_34e2, i64 0, i64 0), i64 15), !insn.addr !529
  %26 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_3507, i64 0, i64 0), i64 20), !insn.addr !530
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3523, i64 0, i64 0), i64 20), !insn.addr !531
  %28 = sext i32 %27 to i64, !insn.addr !531
  ret i64 %28, !insn.addr !532

; uselistorder directives
  uselistorder i64 20, { 2, 3, 0, 6, 7, 8, 9, 4, 5, 1 }
  uselistorder i64 15, { 3, 0, 4, 5, 1, 2 }
  uselistorder i32* @global_var_60a0, { 2, 1, 0 }
  uselistorder i64 30, { 3, 0, 1, 2 }
  uselistorder i64 ptrtoint (i32* @global_var_60c6 to i64), { 1, 0 }
  uselistorder i64 (i64)* @extern_function, { 1, 0 }
  uselistorder i32 100, { 1, 2, 3, 0 }
  uselistorder i32* @global_var_60a4, { 1, 0 }
  uselistorder i32* @global_var_60b5, { 1, 0 }
  uselistorder i64 5, { 6, 7, 8, 4, 0, 3, 2, 1, 5 }
  uselistorder i64 ptrtoint (i32* @global_var_60b1 to i64), { 1, 0 }
  uselistorder i32* @global_var_60b0, { 3, 2, 1, 0 }
  uselistorder i32* @global_var_60b1, { 1, 0 }
}

define i64 @double_value(i64 %arg1) local_unnamed_addr {
dec_label_pc_2000:
  %0 = mul i64 %arg1, 2, !insn.addr !533
  %1 = and i64 %0, 4294967294, !insn.addr !533
  ret i64 %1, !insn.addr !534

; uselistorder directives
  uselistorder i64 4294967294, { 9, 10, 11, 0, 1, 6, 3, 2, 4, 7, 5, 8, 12 }
}

define i64 @memop_memset(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2010:
  %rax.0.reg2mem = alloca i64, !insn.addr !535
  %0 = icmp eq i64 %arg1, 0, !insn.addr !536
  %1 = icmp eq i64 %arg2, 0, !insn.addr !537
  %or.cond = or i1 %0, %1
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !538
  br i1 %or.cond, label %dec_label_pc_2034, label %dec_label_pc_2022, !insn.addr !538

dec_label_pc_2022:                                ; preds = %dec_label_pc_2010
  %2 = trunc i64 %arg3 to i32, !insn.addr !539
  %3 = inttoptr i64 %arg1 to i64*, !insn.addr !540
  %4 = trunc i64 %arg2 to i32, !insn.addr !540
  %5 = call i64* @memset(i64* %3, i32 %2, i32 %4), !insn.addr !540
  %6 = urem i64 %arg1, 256, !insn.addr !541
  store i64 %6, i64* %rax.0.reg2mem, !insn.addr !542
  br label %dec_label_pc_2034, !insn.addr !542

dec_label_pc_2034:                                ; preds = %dec_label_pc_2022, %dec_label_pc_2010
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !543

; uselistorder directives
  uselistorder i64 %arg2, { 1, 0 }
}

define i64 @memop_memcpy(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2040:
  %rax.0.reg2mem = alloca i64, !insn.addr !544
  %0 = icmp eq i64 %arg1, 0, !insn.addr !545
  %1 = icmp eq i64 %arg2, 0, !insn.addr !546
  %or.cond = or i1 %0, %1
  %2 = icmp eq i64 %arg3, 0, !insn.addr !547
  %or.cond2 = or i1 %or.cond, %2
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !548
  br i1 %or.cond2, label %dec_label_pc_206f, label %dec_label_pc_205b, !insn.addr !548

dec_label_pc_205b:                                ; preds = %dec_label_pc_2040
  %3 = inttoptr i64 %arg1 to i64*, !insn.addr !549
  %4 = inttoptr i64 %arg2 to i64*, !insn.addr !549
  %5 = trunc i64 %arg3 to i32, !insn.addr !549
  %6 = call i64* @memcpy(i64* %3, i64* %4, i32 %5), !insn.addr !549
  %7 = add i64 %arg3, -4
  %8 = and i64 %7, -4, !insn.addr !550
  %9 = add i64 %8, %arg1, !insn.addr !550
  %10 = inttoptr i64 %9 to i32*, !insn.addr !550
  %11 = load i32, i32* %10, align 4, !insn.addr !550
  %12 = zext i32 %11 to i64, !insn.addr !550
  store i64 %12, i64* %rax.0.reg2mem, !insn.addr !550
  br label %dec_label_pc_206f, !insn.addr !550

dec_label_pc_206f:                                ; preds = %dec_label_pc_205b, %dec_label_pc_2040
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !551

; uselistorder directives
  uselistorder i64 %arg3, { 1, 2, 0 }
}

define i64 @memop_memmove(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2080:
  %rax.0.reg2mem = alloca i64, !insn.addr !552
  %0 = icmp eq i64 %arg1, 0, !insn.addr !553
  %1 = icmp ult i64 %arg2, 2, !insn.addr !554
  %or.cond = or i1 %0, %1
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !555
  br i1 %or.cond, label %dec_label_pc_20ac, label %dec_label_pc_2093, !insn.addr !555

dec_label_pc_2093:                                ; preds = %dec_label_pc_2080
  %2 = add i64 %arg1, 1, !insn.addr !556
  %3 = inttoptr i64 %2 to i64*, !insn.addr !557
  %4 = inttoptr i64 %arg1 to i64*, !insn.addr !557
  %5 = trunc i64 %arg2 to i32
  %6 = add i32 %5, -1, !insn.addr !557
  %7 = call i64* @memmove(i64* %3, i64* %4, i32 %6), !insn.addr !557
  %8 = inttoptr i64 %2 to i8*, !insn.addr !558
  %9 = load i8, i8* %8, align 1, !insn.addr !558
  %10 = sext i8 %9 to i64, !insn.addr !558
  store i64 %10, i64* %rax.0.reg2mem, !insn.addr !559
  br label %dec_label_pc_20ac, !insn.addr !559

dec_label_pc_20ac:                                ; preds = %dec_label_pc_2093, %dec_label_pc_2080
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !560

; uselistorder directives
  uselistorder i64 2, { 12, 0, 1, 2, 14, 3, 15, 4, 5, 16, 6, 13, 17, 7, 18, 8, 9, 10, 11 }
  uselistorder i64 %arg2, { 1, 0 }
}

define i64 @memop_memcmp(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_20b0:
  %rax.0.reg2mem = alloca i64, !insn.addr !561
  %0 = icmp eq i64 %arg1, 0, !insn.addr !562
  %1 = icmp eq i64 %arg2, 0, !insn.addr !563
  %or.cond = or i1 %0, %1
  %2 = icmp eq i64 %arg3, 0, !insn.addr !564
  %or.cond3 = or i1 %or.cond, %2
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !565
  br i1 %or.cond3, label %dec_label_pc_20de, label %dec_label_pc_20c1, !insn.addr !565

dec_label_pc_20c1:                                ; preds = %dec_label_pc_20b0
  %3 = inttoptr i64 %arg1 to i64*, !insn.addr !566
  %4 = inttoptr i64 %arg2 to i64*, !insn.addr !566
  %5 = trunc i64 %arg3 to i32, !insn.addr !566
  %6 = call i32 @memcmp(i64* %3, i64* %4, i32 %5), !insn.addr !566
  %7 = icmp eq i32 %6, 0, !insn.addr !567
  %8 = icmp eq i1 %7, false, !insn.addr !568
  %9 = icmp slt i32 %6, 1
  %.op = select i1 %8, i64 4294967295, i64 0
  %10 = select i1 %9, i64 %.op, i64 1, !insn.addr !569
  store i64 %10, i64* %rax.0.reg2mem, !insn.addr !570
  br label %dec_label_pc_20de, !insn.addr !570

dec_label_pc_20de:                                ; preds = %dec_label_pc_20c1, %dec_label_pc_20b0
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !571

; uselistorder directives
  uselistorder i64 %arg3, { 1, 0 }
  uselistorder i64 %arg2, { 1, 0 }
}

define i64 @memop_bzero(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_20e0:
  %0 = icmp eq i64 %arg1, 0, !insn.addr !572
  br i1 %0, label %dec_label_pc_20f8, label %dec_label_pc_20e5, !insn.addr !573

dec_label_pc_20e5:                                ; preds = %dec_label_pc_20e0
  %1 = inttoptr i64 %arg1 to i64*, !insn.addr !574
  %2 = trunc i64 %arg2 to i32, !insn.addr !574
  %3 = call i64* @memset(i64* %1, i32 0, i32 %2), !insn.addr !574
  %4 = urem i64 %arg1, 256, !insn.addr !575
  ret i64 %4, !insn.addr !576

dec_label_pc_20f8:                                ; preds = %dec_label_pc_20e0
  ret i64 4294967295, !insn.addr !577

; uselistorder directives
  uselistorder i64* (i64*, i32, i32)* @memset, { 1, 0, 2 }
  uselistorder i32 0, { 8, 13, 14, 15, 9, 16, 0, 3, 1, 4, 2, 5, 6, 7, 10, 11, 12 }
}

define i64 @memop_bcopy(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2100:
  %rax.0.reg2mem = alloca i64, !insn.addr !578
  %0 = icmp eq i64 %arg1, 0, !insn.addr !579
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !580
  br i1 %0, label %dec_label_pc_2126, label %dec_label_pc_210b, !insn.addr !580

dec_label_pc_210b:                                ; preds = %dec_label_pc_2100
  %1 = icmp eq i64 %arg2, 0, !insn.addr !581
  %2 = icmp eq i64 %arg3, 0, !insn.addr !582
  %or.cond = or i1 %1, %2
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !583
  br i1 %or.cond, label %dec_label_pc_2126, label %dec_label_pc_2118, !insn.addr !583

dec_label_pc_2118:                                ; preds = %dec_label_pc_210b
  %3 = inttoptr i64 %arg2 to i64*, !insn.addr !584
  %4 = inttoptr i64 %arg1 to i64*, !insn.addr !584
  %5 = trunc i64 %arg3 to i32, !insn.addr !584
  %6 = call i64* @memmove(i64* %3, i64* %4, i32 %5), !insn.addr !584
  %7 = urem i64 %arg2, 256, !insn.addr !585
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !585
  br label %dec_label_pc_2126, !insn.addr !585

dec_label_pc_2126:                                ; preds = %dec_label_pc_2118, %dec_label_pc_210b, %dec_label_pc_2100
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !586

; uselistorder directives
  uselistorder i64* (i64*, i64*, i32)* @memmove, { 1, 0, 2 }
  uselistorder i64 %arg3, { 1, 0 }
  uselistorder i64 %arg2, { 0, 2, 1 }
}

define i64 @memop_unaligned_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_2130:
  %0 = icmp eq i64 %arg1, 0, !insn.addr !587
  br i1 %0, label %dec_label_pc_2139, label %dec_label_pc_2135, !insn.addr !588

dec_label_pc_2135:                                ; preds = %dec_label_pc_2130
  %1 = add i64 %arg1, 1, !insn.addr !589
  %2 = inttoptr i64 %1 to i32*, !insn.addr !589
  %3 = load i32, i32* %2, align 4, !insn.addr !589
  %4 = zext i32 %3 to i64, !insn.addr !589
  ret i64 %4, !insn.addr !590

dec_label_pc_2139:                                ; preds = %dec_label_pc_2130
  ret i64 4294967295, !insn.addr !591
}

define i64 @memop_memory_barrier(i64 %arg1) local_unnamed_addr {
dec_label_pc_2140:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %arg1, 0, !insn.addr !592
  br i1 %2, label %dec_label_pc_214d, label %dec_label_pc_2145, !insn.addr !593

dec_label_pc_2145:                                ; preds = %dec_label_pc_2140
  %3 = call i64 @__asm_mfence(), !insn.addr !594
  %4 = add i64 %3, %1, !insn.addr !595
  %5 = and i64 %4, 4294967295, !insn.addr !595
  ret i64 %5, !insn.addr !596

dec_label_pc_214d:                                ; preds = %dec_label_pc_2140
  ret i64 4294967295, !insn.addr !597
}

define i64 @test_memory_op_functions() local_unnamed_addr {
dec_label_pc_2160:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3639 to i8*)), !insn.addr !598
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3544, i64 0, i64 0), i64 65), !insn.addr !599
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3555, i64 0, i64 0), i64 50), !insn.addr !600
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3571, i64 0, i64 0), i8 72), !insn.addr !601
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3582, i64 0, i64 0), i64 4294967295), !insn.addr !602
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3593, i64 0, i64 0), i64 0), !insn.addr !603
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_35a4, i64 0, i64 0), i64 1), !insn.addr !604
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_35b5, i64 0, i64 0), i32 67305985), !insn.addr !605
  %8 = call i64 @__asm_mfence(), !insn.addr !606
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_35c8, i64 0, i64 0), i64 10), !insn.addr !607
  %10 = sext i32 %9 to i64, !insn.addr !607
  ret i64 %10, !insn.addr !608

; uselistorder directives
  uselistorder i64 10, { 3, 7, 0, 4, 1, 5, 2, 6 }
  uselistorder i64 ()* @__asm_mfence, { 1, 0 }
  uselistorder i64 1, { 3, 5, 0, 6, 4, 1, 7, 8, 9, 10, 11, 2, 12, 13, 14, 15, 16, 17 }
  uselistorder i64 50, { 2, 3, 0, 1 }
  uselistorder i32 (i8*, ...)* @printf, { 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 0, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 49 }
  uselistorder i32 (i8*)* @puts, { 3, 2, 1, 0, 4 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_2240:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = ptrtoint i8** %argv to i64
  %4 = call i64 @test_stack_memory(), !insn.addr !609
  %5 = call i64 @test_heap_memory(i64 %argc, i64 %3, i64 %1, i64 %2), !insn.addr !610
  %6 = call i64 @test_static_global(), !insn.addr !611
  %7 = call i64 @test_memory_op_functions(), !insn.addr !612
  ret i64 0, !insn.addr !613

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 0, { 30, 55, 56, 57, 58, 59, 60, 63, 61, 62, 64, 65, 66, 67, 68, 69, 70, 71, 157, 158, 51, 159, 160, 161, 72, 0, 52, 53, 162, 163, 35, 54, 164, 36, 165, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 166, 167, 31, 32, 107, 108, 109, 110, 111, 1, 112, 113, 114, 115, 116, 117, 2, 168, 118, 119, 120, 121, 3, 122, 123, 4, 124, 125, 5, 126, 127, 6, 7, 169, 128, 129, 8, 170, 171, 9, 172, 130, 10, 173, 11, 174, 175, 176, 12, 13, 14, 33, 177, 15, 16, 17, 18, 19, 131, 132, 133, 134, 20, 135, 136, 21, 137, 138, 22, 139, 140, 141, 142, 143, 144, 145, 146, 23, 147, 148, 24, 25, 26, 27, 28, 178, 34, 29, 179, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 149, 150, 151, 152, 153, 154, 155, 156 }
}

define i64 @extern_function(i64 %arg1) local_unnamed_addr {
dec_label_pc_2260:
  %0 = mul i64 %arg1, 3, !insn.addr !614
  %1 = and i64 %0, 4294967295, !insn.addr !614
  ret i64 %1, !insn.addr !615

; uselistorder directives
  uselistorder i64 4294967295, { 33, 53, 20, 28, 21, 0, 1, 22, 34, 2, 3, 4, 35, 23, 29, 32, 5, 6, 36, 37, 31, 7, 38, 39, 8, 9, 10, 11, 30, 24, 25, 40, 41, 12, 14, 42, 13, 26, 43, 44, 15, 45, 46, 16, 47, 48, 17, 18, 27, 49, 50, 19, 51, 52 }
  uselistorder i64 3, { 0, 5, 1, 6, 2, 7, 8, 3, 4 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_2264:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !616

; uselistorder directives
  uselistorder i32 1, { 11, 10, 9, 16, 91, 17, 18, 19, 20, 104, 98, 8, 7, 6, 21, 90, 97, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 43, 42, 41, 5, 105, 92, 44, 49, 48, 47, 46, 45, 1, 0, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 106, 93, 64, 63, 62, 70, 69, 68, 67, 66, 65, 94, 74, 73, 72, 71, 107, 95, 76, 75, 99, 81, 80, 79, 78, 77, 15, 13, 108, 96, 100, 83, 82, 109, 101, 85, 84, 102, 86, 14, 4, 88, 87, 12, 3, 2, 103, 89 }
}

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare void @free(i64*) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i64* @memset(i64*, i32, i32) local_unnamed_addr

declare i32 @memcmp(i64*, i64*, i32) local_unnamed_addr

declare i64* @calloc(i32, i32) local_unnamed_addr

declare i64* @memcpy(i64*, i64*, i32) local_unnamed_addr

declare i64* @malloc(i32) local_unnamed_addr

declare i64* @realloc(i64*, i32) local_unnamed_addr

declare i64* @memmove(i64*, i64*, i32) local_unnamed_addr

declare i32 @waitpid(i32, i32*, i32) local_unnamed_addr

declare void @perror(i8*) local_unnamed_addr

declare void @exit(i32) local_unnamed_addr

declare i32 @fork() local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

declare i128 @__asm_xorps(i128, i128) local_unnamed_addr

declare void @__asm_movups(i128, i128) local_unnamed_addr

declare i64 @__asm_mfence() local_unnamed_addr

!0 = !{i64 4096}
!1 = !{i64 4104}
!2 = !{i64 4111}
!3 = !{i64 4114}
!4 = !{i64 4116}
!5 = !{i64 4122}
!6 = !{i64 4144}
!7 = !{i64 4160}
!8 = !{i64 4176}
!9 = !{i64 4192}
!10 = !{i64 4208}
!11 = !{i64 4224}
!12 = !{i64 4240}
!13 = !{i64 4256}
!14 = !{i64 4272}
!15 = !{i64 4288}
!16 = !{i64 4304}
!17 = !{i64 4320}
!18 = !{i64 4336}
!19 = !{i64 4352}
!20 = !{i64 4368}
!21 = !{i64 4415}
!22 = !{i64 4421}
!23 = !{i64 4472}
!24 = !{i64 4536}
!25 = !{i64 4548}
!26 = !{i64 4555}
!27 = !{i64 4558}
!28 = !{i64 4569}
!29 = !{i64 4571}
!30 = !{i64 4578}
!31 = !{i64 4583}
!32 = !{i64 4588}
!33 = !{i64 4596}
!34 = !{i64 4600}
!35 = !{i64 4612}
!36 = !{i64 4624}
!37 = !{i64 4627}
!38 = !{i64 4630}
!39 = !{i64 4640}
!40 = !{i64 4656}
!41 = !{i64 4654}
!42 = !{i64 4660}
!43 = !{i64 4664}
!44 = !{i64 4670}
!45 = !{i64 4672}
!46 = !{i64 4676}
!47 = !{i64 4688}
!48 = !{i64 4691}
!49 = !{i64 4704}
!50 = !{i64 4715}
!51 = !{i64 4722}
!52 = !{i64 4724}
!53 = !{i64 4736}
!54 = !{i64 4752}
!55 = !{i64 4745}
!56 = !{i64 4756}
!57 = !{i64 4760}
!58 = !{i64 4766}
!59 = !{i64 4768}
!60 = !{i64 4783}
!61 = !{i64 4784}
!62 = !{i64 4795}
!63 = !{i64 4801}
!64 = !{i64 4810}
!65 = !{i64 4812}
!66 = !{i64 4815}
!67 = !{i64 4823}
!68 = !{i64 4827}
!69 = !{i64 4837}
!70 = !{i64 4842}
!71 = !{i64 4848}
!72 = !{i64 4851}
!73 = !{i64 4855}
!74 = !{i64 4858}
!75 = !{i64 4862}
!76 = !{i64 4865}
!77 = !{i64 4867}
!78 = !{i64 4869}
!79 = !{i64 4878}
!80 = !{i64 4879}
!81 = !{i64 4880}
!82 = !{i64 4882}
!83 = !{i64 4891}
!84 = !{i64 4894}
!85 = !{i64 4902}
!86 = !{i64 4906}
!87 = !{i64 4912}
!88 = !{i64 4914}
!89 = !{i64 4923}
!90 = !{i64 4928}
!91 = !{i64 4930}
!92 = !{i64 4934}
!93 = !{i64 4938}
!94 = !{i64 4941}
!95 = !{i64 4945}
!96 = !{i64 4948}
!97 = !{i64 4950}
!98 = !{i64 4952}
!99 = !{i64 4959}
!100 = !{i64 4965}
!101 = !{i64 4981}
!102 = !{i64 4992}
!103 = !{i64 4993}
!104 = !{i64 5007}
!105 = !{i64 5028}
!106 = !{i64 5033}
!107 = !{i64 5040}
!108 = !{i64 5043}
!109 = !{i64 5047}
!110 = !{i64 5051}
!111 = !{i64 5053}
!112 = !{i64 5068}
!113 = !{i64 5087}
!114 = !{i64 5106}
!115 = !{i64 5125}
!116 = !{i64 5130}
!117 = !{i64 5136}
!118 = !{i64 5139}
!119 = !{i64 5143}
!120 = !{i64 5150}
!121 = !{i64 5152}
!122 = !{i64 5171}
!123 = !{i64 5179}
!124 = !{i64 5184}
!125 = !{i64 5187}
!126 = !{i64 5191}
!127 = !{i64 5195}
!128 = !{i64 5215}
!129 = !{i64 5223}
!130 = !{i64 5232}
!131 = !{i64 5234}
!132 = !{i64 5238}
!133 = !{i64 5242}
!134 = !{i64 5246}
!135 = !{i64 5261}
!136 = !{i64 5280}
!137 = !{i64 5293}
!138 = !{i64 5296}
!139 = !{i64 5306}
!140 = !{i64 5311}
!141 = !{i64 5314}
!142 = !{i64 5318}
!143 = !{i64 5297}
!144 = !{i64 5320}
!145 = !{i64 5327}
!146 = !{i64 5328}
!147 = !{i64 5331}
!148 = !{i64 5335}
!149 = !{i64 5338}
!150 = !{i64 5342}
!151 = !{i64 5345}
!152 = !{i64 5347}
!153 = !{i64 5349}
!154 = !{i64 5352}
!155 = !{i64 5358}
!156 = !{i64 5363}
!157 = !{i64 5373}
!158 = !{i64 5376}
!159 = !{i64 5379}
!160 = !{i64 5387}
!161 = !{i64 5392}
!162 = !{i64 5395}
!163 = !{i64 5377}
!164 = !{i64 5399}
!165 = !{i64 5408}
!166 = !{i64 5411}
!167 = !{i64 5415}
!168 = !{i64 5418}
!169 = !{i64 5434}
!170 = !{i64 5439}
!171 = !{i64 5442}
!172 = !{i64 5456}
!173 = !{i64 5465}
!174 = !{i64 5470}
!175 = !{i64 5473}
!176 = !{i64 5488}
!177 = !{i64 5492}
!178 = !{i64 5502}
!179 = !{i64 5504}
!180 = !{i64 5516}
!181 = !{i64 5521}
!182 = !{i64 5524}
!183 = !{i64 5536}
!184 = !{i64 5539}
!185 = !{i64 5543}
!186 = !{i64 5550}
!187 = !{i64 5557}
!188 = !{i64 5561}
!189 = !{i64 5563}
!190 = !{i64 5586}
!191 = !{i64 5591}
!192 = !{i64 5597}
!193 = !{i64 5600}
!194 = !{i64 5610}
!195 = !{i64 5615}
!196 = !{i64 5618}
!197 = !{i64 5622}
!198 = !{i64 5601}
!199 = !{i64 5626}
!200 = !{i64 5645}
!201 = !{i64 5648}
!202 = !{i64 5650}
!203 = !{i64 5654}
!204 = !{i64 5658}
!205 = !{i64 5661}
!206 = !{i64 5665}
!207 = !{i64 5668}
!208 = !{i64 5670}
!209 = !{i64 5672}
!210 = !{i64 5675}
!211 = !{i64 5681}
!212 = !{i64 5686}
!213 = !{i64 5696}
!214 = !{i64 5712}
!215 = !{i64 5715}
!216 = !{i64 5737}
!217 = !{i64 5742}
!218 = !{i64 5745}
!219 = !{i64 5748}
!220 = !{i64 5750}
!221 = !{i64 5761}
!222 = !{i64 5769}
!223 = !{i64 5780}
!224 = !{i64 5783}
!225 = !{i64 5785}
!226 = !{i64 5791}
!227 = !{i64 5802}
!228 = !{i64 5809}
!229 = !{i64 5810}
!230 = !{i64 5821}
!231 = !{i64 5824}
!232 = !{i64 5896}
!233 = !{i64 5904}
!234 = !{i64 5907}
!235 = !{i64 5875}
!236 = !{i64 5886}
!237 = !{i64 5889}
!238 = !{i64 5883}
!239 = !{i64 5914}
!240 = !{i64 5917}
!241 = !{i64 5920}
!242 = !{i64 5928}
!243 = !{i64 5931}
!244 = !{i64 5933}
!245 = !{i64 5879}
!246 = !{i64 5952}
!247 = !{i64 5955}
!248 = !{i64 5968}
!249 = !{i64 5975}
!250 = !{i64 5983}
!251 = !{i64 5986}
!252 = !{i64 6001}
!253 = !{i64 6005}
!254 = !{i64 6010}
!255 = !{i64 6013}
!256 = !{i64 6032}
!257 = !{i64 6035}
!258 = !{i64 6039}
!259 = !{i64 6042}
!260 = !{i64 6064}
!261 = !{i64 6071}
!262 = !{i64 6079}
!263 = !{i64 6082}
!264 = !{i64 6101}
!265 = !{i64 6120}
!266 = !{i64 6125}
!267 = !{i64 6128}
!268 = !{i64 6130}
!269 = !{i64 6132}
!270 = !{i64 6135}
!271 = !{i64 6140}
!272 = !{i64 6144}
!273 = !{i64 6156}
!274 = !{i64 6161}
!275 = !{i64 6164}
!276 = !{i64 6169}
!277 = !{i64 6175}
!278 = !{i64 6178}
!279 = !{i64 6187}
!280 = !{i64 6195}
!281 = !{i64 6198}
!282 = !{i64 6200}
!283 = !{i64 6207}
!284 = !{i64 6210}
!285 = !{i64 6215}
!286 = !{i64 6224}
!287 = !{i64 6232}
!288 = !{i64 6235}
!289 = !{i64 6237}
!290 = !{i64 6243}
!291 = !{i64 6246}
!292 = !{i64 6250}
!293 = !{i64 6257}
!294 = !{i64 6264}
!295 = !{i64 6267}
!296 = !{i64 6270}
!297 = !{i64 6275}
!298 = !{i64 6280}
!299 = !{i64 6284}
!300 = !{i64 6296}
!301 = !{i64 6301}
!302 = !{i64 6319}
!303 = !{i64 6327}
!304 = !{i64 6332}
!305 = !{i64 6344}
!306 = !{i64 6352}
!307 = !{i64 6362}
!308 = !{i64 6367}
!309 = !{i64 6370}
!310 = !{i64 6353}
!311 = !{i64 6374}
!312 = !{i64 6384}
!313 = !{i64 6387}
!314 = !{i64 6391}
!315 = !{i64 6394}
!316 = !{i64 6398}
!317 = !{i64 6401}
!318 = !{i64 6403}
!319 = !{i64 6405}
!320 = !{i64 6408}
!321 = !{i64 6412}
!322 = !{i64 6419}
!323 = !{i64 6438}
!324 = !{i64 6443}
!325 = !{i64 6446}
!326 = !{i64 6451}
!327 = !{i64 6471}
!328 = !{i64 6479}
!329 = !{i64 6484}
!330 = !{i64 6487}
!331 = !{i64 6494}
!332 = !{i64 6496}
!333 = !{i64 6499}
!334 = !{i64 6501}
!335 = !{i64 6503}
!336 = !{i64 6509}
!337 = !{i64 6512}
!338 = !{i64 6518}
!339 = !{i64 6523}
!340 = !{i64 6526}
!341 = !{i64 6543}
!342 = !{i64 6544}
!343 = !{i64 6546}
!344 = !{i64 6550}
!345 = !{i64 6554}
!346 = !{i64 6561}
!347 = !{i64 6563}
!348 = !{i64 6568}
!349 = !{i64 6573}
!350 = !{i64 6583}
!351 = !{i64 6592}
!352 = !{i64 6606}
!353 = !{i64 6616}
!354 = !{i64 6632}
!355 = !{i64 6635}
!356 = !{i64 6640}
!357 = !{i64 6643}
!358 = !{i64 6647}
!359 = !{i64 6651}
!360 = !{i64 6653}
!361 = !{i64 6659}
!362 = !{i64 6677}
!363 = !{i64 6692}
!364 = !{i64 6697}
!365 = !{i64 6700}
!366 = !{i64 6704}
!367 = !{i64 6707}
!368 = !{i64 6715}
!369 = !{i64 6720}
!370 = !{i64 6725}
!371 = !{i64 6740}
!372 = !{i64 6750}
!373 = !{i64 6766}
!374 = !{i64 6769}
!375 = !{i64 6784}
!376 = !{i64 6788}
!377 = !{i64 6798}
!378 = !{i64 6800}
!379 = !{i64 6812}
!380 = !{i64 6817}
!381 = !{i64 6820}
!382 = !{i64 6832}
!383 = !{i64 6835}
!384 = !{i64 6839}
!385 = !{i64 6846}
!386 = !{i64 6853}
!387 = !{i64 6857}
!388 = !{i64 6859}
!389 = !{i64 6875}
!390 = !{i64 6887}
!391 = !{i64 6891}
!392 = !{i64 6901}
!393 = !{i64 6906}
!394 = !{i64 6909}
!395 = !{i64 6928}
!396 = !{i64 6930}
!397 = !{i64 6934}
!398 = !{i64 6938}
!399 = !{i64 6942}
!400 = !{i64 6944}
!401 = !{i64 6951}
!402 = !{i64 6968}
!403 = !{i64 6987}
!404 = !{i64 6997}
!405 = !{i64 7005}
!406 = !{i64 7008}
!407 = !{i64 7010}
!408 = !{i64 7021}
!409 = !{i64 7026}
!410 = !{i64 7030}
!411 = !{i64 7033}
!412 = !{i64 7035}
!413 = !{i64 7041}
!414 = !{i64 7051}
!415 = !{i64 7063}
!416 = !{i64 7068}
!417 = !{i64 7082}
!418 = !{i64 7092}
!419 = !{i64 7096}
!420 = !{i64 7104}
!421 = !{i64 7109}
!422 = !{i64 7121}
!423 = !{i64 7125}
!424 = !{i64 7130}
!425 = !{i64 7142}
!426 = !{i64 7146}
!427 = !{i64 7156}
!428 = !{i64 7161}
!429 = !{i64 7164}
!430 = !{i64 7168}
!431 = !{i64 7171}
!432 = !{i64 7179}
!433 = !{i64 7181}
!434 = !{i64 7184}
!435 = !{i64 7200}
!436 = !{i64 7214}
!437 = !{i64 7219}
!438 = !{i64 7224}
!439 = !{i64 7226}
!440 = !{i64 7228}
!441 = !{i64 7239}
!442 = !{i64 7244}
!443 = !{i64 7250}
!444 = !{i64 7253}
!445 = !{i64 7257}
!446 = !{i64 7260}
!447 = !{i64 7272}
!448 = !{i64 7297}
!449 = !{i64 7312}
!450 = !{i64 7320}
!451 = !{i64 7325}
!452 = !{i64 7327}
!453 = !{i64 7343}
!454 = !{i64 7350}
!455 = !{i64 7369}
!456 = !{i64 7375}
!457 = !{i64 7376}
!458 = !{i64 7382}
!459 = !{i64 7384}
!460 = !{i64 7392}
!461 = !{i64 7397}
!462 = !{i64 7400}
!463 = !{i64 7412}
!464 = !{i64 7415}
!465 = !{i64 7435}
!466 = !{i64 7437}
!467 = !{i64 7440}
!468 = !{i64 7446}
!469 = !{i64 7456}
!470 = !{i64 7459}
!471 = !{i64 7462}
!472 = !{i64 7479}
!473 = !{i64 7481}
!474 = !{i64 7484}
!475 = !{i64 7494}
!476 = !{i64 7500}
!477 = !{i64 7518}
!478 = !{i64 7522}
!479 = !{i64 7538}
!480 = !{i64 7557}
!481 = !{i64 7568}
!482 = !{i64 7574}
!483 = !{i64 7584}
!484 = !{i64 7590}
!485 = !{i64 7600}
!486 = !{i64 7607}
!487 = !{i64 7617}
!488 = !{i64 7624}
!489 = !{i64 7632}
!490 = !{i64 7648}
!491 = !{i64 7655}
!492 = !{i64 7658}
!493 = !{i64 7660}
!494 = !{i64 7662}
!495 = !{i64 7668}
!496 = !{i64 7685}
!497 = !{i64 7696}
!498 = !{i64 7699}
!499 = !{i64 7717}
!500 = !{i64 7740}
!501 = !{i64 7754}
!502 = !{i64 7769}
!503 = !{i64 7774}
!504 = !{i64 7780}
!505 = !{i64 7791}
!506 = !{i64 7810}
!507 = !{i64 7815}
!508 = !{i64 7842}
!509 = !{i64 7856}
!510 = !{i64 7867}
!511 = !{i64 7886}
!512 = !{i64 7898}
!513 = !{i64 7900}
!514 = !{i64 7912}
!515 = !{i64 7922}
!516 = !{i64 7934}
!517 = !{i64 7938}
!518 = !{i64 7966}
!519 = !{i64 7982}
!520 = !{i64 7998}
!521 = !{i64 8017}
!522 = !{i64 8022}
!523 = !{i64 8046}
!524 = !{i64 8058}
!525 = !{i64 8079}
!526 = !{i64 8084}
!527 = !{i64 8097}
!528 = !{i64 8118}
!529 = !{i64 8137}
!530 = !{i64 8156}
!531 = !{i64 8175}
!532 = !{i64 8185}
!533 = !{i64 8192}
!534 = !{i64 8195}
!535 = !{i64 8208}
!536 = !{i64 8213}
!537 = !{i64 8221}
!538 = !{i64 8216}
!539 = !{i64 8230}
!540 = !{i64 8235}
!541 = !{i64 8240}
!542 = !{i64 8243}
!543 = !{i64 8244}
!544 = !{i64 8256}
!545 = !{i64 8265}
!546 = !{i64 8270}
!547 = !{i64 8278}
!548 = !{i64 8268}
!549 = !{i64 8289}
!550 = !{i64 8298}
!551 = !{i64 8310}
!552 = !{i64 8320}
!553 = !{i64 8325}
!554 = !{i64 8333}
!555 = !{i64 8328}
!556 = !{i64 8343}
!557 = !{i64 8354}
!558 = !{i64 8359}
!559 = !{i64 8363}
!560 = !{i64 8364}
!561 = !{i64 8368}
!562 = !{i64 8370}
!563 = !{i64 8375}
!564 = !{i64 8380}
!565 = !{i64 8373}
!566 = !{i64 8386}
!567 = !{i64 8393}
!568 = !{i64 8395}
!569 = !{i64 8407}
!570 = !{i64 8410}
!571 = !{i64 8414}
!572 = !{i64 8416}
!573 = !{i64 8419}
!574 = !{i64 8430}
!575 = !{i64 8435}
!576 = !{i64 8439}
!577 = !{i64 8445}
!578 = !{i64 8448}
!579 = !{i64 8454}
!580 = !{i64 8457}
!581 = !{i64 8462}
!582 = !{i64 8467}
!583 = !{i64 8465}
!584 = !{i64 8478}
!585 = !{i64 8483}
!586 = !{i64 8487}
!587 = !{i64 8496}
!588 = !{i64 8499}
!589 = !{i64 8501}
!590 = !{i64 8504}
!591 = !{i64 8510}
!592 = !{i64 8512}
!593 = !{i64 8515}
!594 = !{i64 8519}
!595 = !{i64 8522}
!596 = !{i64 8524}
!597 = !{i64 8530}
!598 = !{i64 8555}
!599 = !{i64 8574}
!600 = !{i64 8593}
!601 = !{i64 8644}
!602 = !{i64 8663}
!603 = !{i64 8679}
!604 = !{i64 8698}
!605 = !{i64 8717}
!606 = !{i64 8734}
!607 = !{i64 8750}
!608 = !{i64 8759}
!609 = !{i64 8769}
!610 = !{i64 8774}
!611 = !{i64 8779}
!612 = !{i64 8784}
!613 = !{i64 8792}
!614 = !{i64 8800}
!615 = !{i64 8803}
!616 = !{i64 8816}
