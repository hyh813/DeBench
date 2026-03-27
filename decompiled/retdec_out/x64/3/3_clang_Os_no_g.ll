source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_50a8 = global i64 0
@global_var_4ff8 = local_unnamed_addr global i64 0
@global_var_788 = local_unnamed_addr global i64 0
@global_var_800 = global i64 0
@global_var_808 = local_unnamed_addr global i64 20520
@global_var_2030 = constant [28 x i8] c"MEM-L1-01 (local_vars): %d\0A\00"
@global_var_204c = constant [29 x i8] c"MEM-L1-02 (local_array): %d\0A\00"
@global_var_2069 = constant [30 x i8] c"MEM-L1-03 (local_struct): %d\0A\00"
@global_var_2087 = constant [34 x i8] c"MEM-L1-04 (address_of_local): %d\0A\00"
@global_var_20a9 = constant [34 x i8] c"MEM-L1-05 (address_of_array): %d\0A\00"
@global_var_20cb = constant [35 x i8] c"MEM-L2-01 (large_stack_frame): %d\0A\00"
@global_var_20ee = constant [27 x i8] c"MEM-L2-02 (vla_stack): %d\0A\00"
@global_var_2109 = constant [30 x i8] c"MEM-L2-03 (alloca_usage): %d\0A\00"
@global_var_2127 = constant [29 x i8] c"MEM-L2-04 (stack_alias): %d\0A\00"
@global_var_2144 = constant [23 x i8] c"value before free: %d\0A\00"
@global_var_44c = global i64 0
@global_var_215b = constant [29 x i8] c"HEAP-L2-01 (heap_basic): %d\0A\00"
@global_var_2178 = constant [30 x i8] c"HEAP-L2-02 (heap_calloc): %d\0A\00"
@global_var_2196 = constant [31 x i8] c"HEAP-L2-03 (heap_realloc): %d\0A\00"
@global_var_21b5 = constant [29 x i8] c"HEAP-L2-04 (heap_array): %d\0A\00"
@global_var_21d2 = constant [30 x i8] c"HEAP-L2-05 (heap_struct): %d\0A\00"
@global_var_21f0 = constant [30 x i8] c"HEAP-L2-06 (heap_nested): %d\0A\00"
@global_var_220e = constant [35 x i8] c"HEAP-L3-01 (linked_list_heap): %d\0A\00"
@global_var_2231 = constant [38 x i8] c"HEAP-L3-02 (tree_heap_traversal): %d\0A\00"
@global_var_2257 = constant [30 x i8] c"HEAP-L3-03 (memory_leak): %d\0A\00"
@global_var_2275 = constant [32 x i8] c"HEAP-L3-04 (dangling_pointer): \00"
@global_var_22a5 = constant i64 -1688658660658275102
@global_var_50b4 = local_unnamed_addr global i64 0
@global_var_2576 = constant [11 x i8] c"HelloWorld\00"
@global_var_5098 = local_unnamed_addr global [11 x i8]* @global_var_2576
@global_var_509c = local_unnamed_addr global i64 429496729600
@global_var_50b8 = local_unnamed_addr global i64 0
@global_var_50c0 = local_unnamed_addr global i64 0
@global_var_2316 = constant [35 x i8] c"STM-L1-01 (global_var_access): %d\0A\00"
@global_var_2339 = constant [33 x i8] c"STM-L1-01 (global_var_read): %d\0A\00"
@global_var_235a = constant [37 x i8] c"STM-L1-02 (global_array_access): %d\0A\00"
@global_var_237f = constant [30 x i8] c"STM-L1-03 (static_local): %d\0A\00"
@global_var_239d = constant [34 x i8] c"STM-L1-04 (call_static_func): %d\0A\00"
@global_var_23bf = constant [38 x i8] c"STM-L2-01 (access_extern_global): %d\0A\00"
@global_var_23e5 = constant [34 x i8] c"STM-L2-02 (call_extern_func): %d\0A\00"
@global_var_2407 = constant [33 x i8] c"STM-L2-03 (read_const_data): %d\0A\00"
@global_var_2428 = constant [32 x i8] c"STM-L2-04 (access_bss_var): %d\0A\00"
@global_var_2448 = constant [35 x i8] c"STM-L2-04 (access_bss_buffer): %d\0A\00"
@global_var_246b = constant [38 x i8] c"STM-L2-05 (global_struct_access): %d\0A\00"
@global_var_2491 = constant [29 x i8] c"STM-L2-06 (file_static): %d\0A\00"
@global_var_24ae = constant [33 x i8] c"STM-L2-07 (global_func_ptr): %d\0A\00"
@global_var_24cf = constant [35 x i8] c"STM-L2-08 (global_heap_store): %d\0A\00"
@global_var_24f2 = constant [37 x i8] c"STM-L2-09 (static_complex_init): %d\0A\00"
@global_var_2517 = constant [28 x i8] c"STM-L3-01 (tls_access): %d\0A\00"
@global_var_2533 = constant [33 x i8] c"STM-L3-02 (init_order_test): %d\0A\00"
@global_var_2554 = constant [17 x i8] c"MEMOP-L2-01: %d\0A\00"
@global_var_2565 = constant [17 x i8] c"MEMOP-L2-02: %d\0A\00"
@global_var_2581 = constant [17 x i8] c"MEMOP-L2-03: %c\0A\00"
@global_var_2592 = constant [17 x i8] c"MEMOP-L2-04: %d\0A\00"
@global_var_25a3 = constant [17 x i8] c"MEMOP-L2-05: %d\0A\00"
@global_var_25b4 = constant [17 x i8] c"MEMOP-L2-06: %d\0A\00"
@global_var_25c5 = constant [19 x i8] c"MEMOP-L3-01: 0x%x\0A\00"
@global_var_25d8 = constant [17 x i8] c"MEMOP-L3-02: %d\0A\00"
@0 = external global i32
@global_var_2010 = external local_unnamed_addr constant i128
@global_var_2020 = external local_unnamed_addr constant i128
@1 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\88\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_25e9 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @1, i64 0, i64 0)
@2 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\A0\86\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_2607 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @2, i64 0, i64 0)
@3 = internal constant [65 x i8] c"\E2\9C\97 \E5\AD\90\E8\BF\9B\E7\A8\8B\E8\A2\AB\E4\BF\A1\E5\8F\B7\E7\BB\88\E6\AD\A2 (\E4\BF\A1\E5\8F\B7%d) - \E9\87\8E\E6\8C\87\E9\92\88\E5\AF\BC\E8\87\B4\E5\B4\A9\E6\BA\83\0A\00"
@global_var_22ca = constant i8* getelementptr inbounds ([65 x i8], [65 x i8]* @3, i64 0, i64 0)
@4 = internal constant [11 x i8] c"fork\E5\A4\B1\E8\B4\A5\00"
@global_var_230b = constant i8* getelementptr inbounds ([11 x i8], [11 x i8]* @4, i64 0, i64 0)
@5 = internal constant [16 x i8] c"%d (\E5\AD\90\E8\BF\9B\E7\A8\8B)\0A\00"
@global_var_2295 = constant i8* getelementptr inbounds ([16 x i8], [16 x i8]* @5, i64 0, i64 0)
@global_var_50b0 = local_unnamed_addr global i32 0
@global_var_50b1 = global i32 0
@global_var_2670 = constant i32* inttoptr (i64 4294967296 to i32*)
@global_var_50b5 = global i32 0
@global_var_50a4 = local_unnamed_addr global i32 23
@global_var_50c6 = external global i32
@global_var_50a0 = local_unnamed_addr global i32 100
@6 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\9D\99\E6\80\81\E4\B8\8E\E5\85\A8\E5\B1\80\E5\86\85\E5\AD\98 ===\00"
@global_var_2625 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @6, i64 0, i64 0)
@7 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C\E5\87\BD\E6\95\B0 ===\00"
@global_var_2649 = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @7, i64 0, i64 0)

define i64 @_init() local_unnamed_addr {
dec_label_pc_1000:
  %rax.0.reg2mem = alloca i64, !insn.addr !0
  %0 = load i64, i64* inttoptr (i64 20456 to i64*), align 8, !insn.addr !1
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
  %3 = call i32 @__libc_start_main(i64 7717, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !21
  %4 = call i64 @__asm_hlt(), !insn.addr !22
  unreachable, !insn.addr !22
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1150:
  ret i64 ptrtoint (i64* @global_var_50a8 to i64), !insn.addr !23
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1180:
  ret i64 0, !insn.addr !24
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_11c0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* bitcast (i64* @global_var_50a8 to i8*), align 8, !insn.addr !25
  %3 = icmp eq i8 %2, 0, !insn.addr !25
  %4 = icmp eq i1 %3, false, !insn.addr !26
  br i1 %4, label %dec_label_pc_11f8, label %dec_label_pc_11cd, !insn.addr !26

dec_label_pc_11cd:                                ; preds = %dec_label_pc_11c0
  %5 = load i64, i64* @global_var_4ff8, align 8, !insn.addr !27
  %6 = icmp eq i64 %5, 0, !insn.addr !27
  br i1 %6, label %dec_label_pc_11e7, label %dec_label_pc_11db, !insn.addr !28

dec_label_pc_11db:                                ; preds = %dec_label_pc_11cd
  %7 = load i64, i64* inttoptr (i64 20624 to i64*), align 16, !insn.addr !29
  %8 = inttoptr i64 %7 to i64*, !insn.addr !30
  call void @__cxa_finalize(i64* %8), !insn.addr !30
  br label %dec_label_pc_11e7, !insn.addr !30

dec_label_pc_11e7:                                ; preds = %dec_label_pc_11db, %dec_label_pc_11cd
  %9 = call i64 @deregister_tm_clones(), !insn.addr !31
  store i8 1, i8* bitcast (i64* @global_var_50a8 to i8*), align 8, !insn.addr !32
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
dec_label_pc_120c:
  %0 = mul i64 %arg1, 2, !insn.addr !36
  %1 = add i64 %0, 10, !insn.addr !37
  %2 = and i64 %1, 4294967294, !insn.addr !37
  ret i64 %2, !insn.addr !38
}

define i64 @local_array(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1213:
  %0 = alloca i64
  %1 = alloca i32
  %rax.0.reg2mem = alloca i64, !insn.addr !39
  %rcx.0.reg2mem = alloca i64, !insn.addr !39
  %2 = load i64, i64* %0
  %3 = load i32, i32* %1
  %4 = add i64 %2, -40, !insn.addr !40
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !41
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !41
  br label %dec_label_pc_1217, !insn.addr !41

dec_label_pc_1217:                                ; preds = %dec_label_pc_1217, %dec_label_pc_1213
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
  br i1 %exitcond, label %dec_label_pc_1226, label %dec_label_pc_1217, !insn.addr !44

dec_label_pc_1226:                                ; preds = %dec_label_pc_1217
  %12 = zext i32 %3 to i64, !insn.addr !45
  ret i64 %12, !insn.addr !46

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
}

define i64 @local_struct(i64 %arg1) local_unnamed_addr {
dec_label_pc_122b:
  %0 = mul i64 %arg1, 3, !insn.addr !47
  %1 = and i64 %0, 4294967295, !insn.addr !47
  ret i64 %1, !insn.addr !48
}

define i64 @address_of_local(i64 %arg1) local_unnamed_addr {
dec_label_pc_122f:
  %0 = inttoptr i64 %arg1 to i32*, !insn.addr !49
  store i32 42, i32* %0, align 4, !insn.addr !49
  ret i64 42, !insn.addr !50
}

define i64 @address_of_array() local_unnamed_addr {
dec_label_pc_123b:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !51
  %3 = and i64 %2, 4294967294, !insn.addr !51
  ret i64 %3, !insn.addr !52
}

define i64 @large_stack_frame() local_unnamed_addr {
dec_label_pc_1240:
  %0 = alloca i8
  %rax.0.reg2mem = alloca i64, !insn.addr !53
  %xmm0.0.reg2mem = alloca i128, !insn.addr !53
  %1 = load i8, i8* %0
  %stack_var_-1928 = alloca i64, align 8
  %2 = ptrtoint i64* %stack_var_-1928 to i64, !insn.addr !53
  %3 = load i128, i128* @global_var_2010, align 8, !insn.addr !54
  %4 = call i128 @__asm_movdqa(i128 %3), !insn.addr !54
  %5 = load i128, i128* @global_var_2020, align 8, !insn.addr !55
  %6 = call i128 @__asm_movdqa(i128 %5), !insn.addr !55
  %7 = add i64 %2, -128
  store i128 %4, i128* %xmm0.0.reg2mem, !insn.addr !55
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !55
  br label %dec_label_pc_1259, !insn.addr !55

dec_label_pc_1259:                                ; preds = %dec_label_pc_1259, %dec_label_pc_1240
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %8 = call i64 @__asm_movdqa.1(i128 %xmm0.0.reload), !insn.addr !56
  %9 = add i64 %7, %rax.0.reload, !insn.addr !56
  %10 = sext i64 %8 to i128, !insn.addr !56
  %11 = inttoptr i64 %9 to i128*, !insn.addr !56
  store i128 %10, i128* %11, align 8, !insn.addr !56
  %12 = add i64 %rax.0.reload, 16, !insn.addr !57
  %13 = call i128 @__asm_paddb(i128 %xmm0.0.reload, i128 %6), !insn.addr !58
  %14 = icmp eq i64 %12, ptrtoint (i64* @global_var_800 to i64), !insn.addr !59
  %15 = icmp eq i1 %14, false, !insn.addr !60
  store i128 %13, i128* %xmm0.0.reg2mem, !insn.addr !60
  store i64 %12, i64* %rax.0.reg2mem, !insn.addr !60
  br i1 %15, label %dec_label_pc_1259, label %dec_label_pc_126f, !insn.addr !60

dec_label_pc_126f:                                ; preds = %dec_label_pc_1259
  %16 = sext i8 %1 to i64, !insn.addr !61
  ret i64 %16, !insn.addr !62

; uselistorder directives
  uselistorder i128 %xmm0.0.reload, { 1, 0 }
  uselistorder i128* %xmm0.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
}

define i64 @vla_stack(i64 %arg1) local_unnamed_addr {
dec_label_pc_127f:
  %rax.0.reg2mem = alloca i64, !insn.addr !63
  %rsi.0.reg2mem = alloca i64, !insn.addr !63
  %stack_var_-8 = alloca i64, align 8
  %0 = trunc i64 %arg1 to i32
  %1 = add i32 %0, -1001, !insn.addr !63
  %2 = icmp ult i32 %1, -1000, !insn.addr !64
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !65
  br i1 %2, label %dec_label_pc_12d4, label %dec_label_pc_1292, !insn.addr !65

dec_label_pc_1292:                                ; preds = %dec_label_pc_127f
  %3 = and i64 %arg1, 4294967295, !insn.addr !66
  %4 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !67
  %5 = mul i64 %3, 4, !insn.addr !68
  %6 = add nuw nsw i64 %5, 15, !insn.addr !68
  %7 = and i64 %6, 34359738352, !insn.addr !69
  %8 = sub i64 %4, %7, !insn.addr !70
  %9 = mul i64 %3, 2, !insn.addr !71
  store i64 0, i64* %rsi.0.reg2mem, !insn.addr !72
  br label %dec_label_pc_12b5, !insn.addr !72

dec_label_pc_12b5:                                ; preds = %dec_label_pc_12b5, %dec_label_pc_1292
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %10 = trunc i64 %rsi.0.reload to i32, !insn.addr !73
  %11 = mul i64 %rsi.0.reload, 2, !insn.addr !73
  %12 = add i64 %11, %8, !insn.addr !73
  %13 = inttoptr i64 %12 to i32*, !insn.addr !73
  store i32 %10, i32* %13, align 4, !insn.addr !73
  %14 = add i64 %rsi.0.reload, 2, !insn.addr !74
  %15 = icmp eq i64 %9, %14, !insn.addr !75
  %16 = icmp eq i1 %15, false, !insn.addr !76
  store i64 %14, i64* %rsi.0.reg2mem, !insn.addr !76
  br i1 %16, label %dec_label_pc_12b5, label %dec_label_pc_12c1, !insn.addr !76

dec_label_pc_12c1:                                ; preds = %dec_label_pc_12b5
  %17 = icmp slt i32 %0, 0
  %18 = zext i1 %17 to i32, !insn.addr !77
  %19 = add i32 %18, %0, !insn.addr !78
  %20 = ashr i32 %19, 1, !insn.addr !79
  %21 = zext i32 %20 to i64, !insn.addr !79
  %22 = mul i64 %21, 4, !insn.addr !80
  %23 = add i64 %8, %22, !insn.addr !80
  %24 = inttoptr i64 %23 to i32*, !insn.addr !80
  %25 = load i32, i32* %24, align 4, !insn.addr !80
  %26 = zext i32 %25 to i64, !insn.addr !80
  store i64 %26, i64* %rax.0.reg2mem, !insn.addr !81
  br label %dec_label_pc_12d4, !insn.addr !81

dec_label_pc_12d4:                                ; preds = %dec_label_pc_12c1, %dec_label_pc_127f
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !82

; uselistorder directives
  uselistorder i64 %rsi.0.reload, { 1, 2, 0 }
  uselistorder i32 %0, { 1, 0, 2 }
  uselistorder i64* %rsi.0.reg2mem, { 1, 0, 2 }
}

define i64 @alloca_usage(i64 %arg1) local_unnamed_addr {
dec_label_pc_12d5:
  %rsi.0.reg2mem = alloca i64, !insn.addr !83
  %rdx.0.reg2mem = alloca i64, !insn.addr !83
  %stack_var_-8 = alloca i64, align 8
  %0 = trunc i64 %arg1 to i32, !insn.addr !83
  %1 = icmp slt i32 %0, 1
  br i1 %1, label %dec_label_pc_131d, label %dec_label_pc_12d9, !insn.addr !84

dec_label_pc_12d9:                                ; preds = %dec_label_pc_12d5
  %2 = and i64 %arg1, 4294967295, !insn.addr !85
  %3 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !86
  %4 = mul i64 %2, 4, !insn.addr !87
  %5 = add nuw nsw i64 %4, 15, !insn.addr !87
  %6 = and i64 %5, 34359738352, !insn.addr !88
  %7 = sub i64 %3, %6, !insn.addr !89
  %8 = mul nuw nsw i64 %2, 3, !insn.addr !90
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !91
  store i64 %7, i64* %rsi.0.reg2mem, !insn.addr !91
  br label %dec_label_pc_12fd, !insn.addr !91

dec_label_pc_12fd:                                ; preds = %dec_label_pc_12fd, %dec_label_pc_12d9
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %9 = trunc i64 %rdx.0.reload to i32, !insn.addr !92
  %10 = inttoptr i64 %rsi.0.reload to i32*, !insn.addr !92
  store i32 %9, i32* %10, align 4, !insn.addr !92
  %11 = add i64 %rdx.0.reload, 3, !insn.addr !93
  %12 = add i64 %rsi.0.reload, 4, !insn.addr !94
  %13 = icmp eq i64 %8, %11, !insn.addr !95
  %14 = icmp eq i1 %13, false, !insn.addr !96
  store i64 %11, i64* %rdx.0.reg2mem, !insn.addr !96
  store i64 %12, i64* %rsi.0.reg2mem, !insn.addr !96
  br i1 %14, label %dec_label_pc_12fd, label %dec_label_pc_130c, !insn.addr !96

dec_label_pc_130c:                                ; preds = %dec_label_pc_12fd
  %15 = icmp slt i32 %0, 0
  %16 = zext i1 %15 to i32, !insn.addr !97
  %17 = add i32 %16, %0, !insn.addr !98
  %18 = ashr i32 %17, 1, !insn.addr !99
  %19 = zext i32 %18 to i64, !insn.addr !99
  %20 = mul i64 %19, 4, !insn.addr !100
  %21 = add i64 %7, %20, !insn.addr !100
  %22 = inttoptr i64 %21 to i32*, !insn.addr !100
  %23 = load i32, i32* %22, align 4, !insn.addr !100
  %24 = zext i32 %23 to i64, !insn.addr !100
  ret i64 %24, !insn.addr !101

dec_label_pc_131d:                                ; preds = %dec_label_pc_12d5
  ret i64 4294967295, !insn.addr !102

; uselistorder directives
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64 %rsi.0.reload, { 1, 0 }
  uselistorder i64 %7, { 1, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i32 %0, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rsi.0.reg2mem, { 1, 0, 2 }
}

define i64 @stack_alias() local_unnamed_addr {
dec_label_pc_1323:
  ret i64 20, !insn.addr !103
}

define i64 @test_stack_memory() local_unnamed_addr {
dec_label_pc_1329:
  %0 = alloca i32
  %1 = alloca i8
  %r14.0.reg2mem = alloca i64, !insn.addr !104
  %rbx.3.reg2mem = alloca i64, !insn.addr !104
  %rbx.2.reg2mem = alloca i64, !insn.addr !104
  %rbx.1.reg2mem = alloca i64, !insn.addr !104
  %xmm0.0.reg2mem = alloca i128, !insn.addr !104
  %rbx.0.reg2mem = alloca i64, !insn.addr !104
  %2 = load i8, i8* %1
  %3 = load i32, i32* %0
  %stack_var_-2072 = alloca i64, align 8
  %4 = ptrtoint i64* %stack_var_-2072 to i64, !insn.addr !105
  %5 = call i32 @puts(i8* bitcast (i8** @global_var_25e9 to i8*)), !insn.addr !106
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_2030, i64 0, i64 0), i64 20), !insn.addr !107
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !107
  br label %dec_label_pc_1354, !insn.addr !107

dec_label_pc_1354:                                ; preds = %dec_label_pc_1354, %dec_label_pc_1329
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %7 = trunc i64 %rbx.0.reload to i32, !insn.addr !108
  %8 = mul i64 %rbx.0.reload, 2, !insn.addr !108
  %9 = add i64 %8, %4, !insn.addr !108
  %10 = inttoptr i64 %9 to i32*, !insn.addr !108
  store i32 %7, i32* %10, align 4, !insn.addr !108
  %11 = add nuw nsw i64 %rbx.0.reload, 2, !insn.addr !109
  %12 = icmp eq i64 %rbx.0.reload, 18, !insn.addr !110
  %13 = icmp eq i1 %12, false, !insn.addr !111
  store i64 %11, i64* %rbx.0.reg2mem, !insn.addr !111
  br i1 %13, label %dec_label_pc_1354, label %dec_label_pc_1361, !insn.addr !111

dec_label_pc_1361:                                ; preds = %dec_label_pc_1354
  %14 = zext i32 %3 to i64, !insn.addr !112
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_204c, i64 0, i64 0), i64 %14), !insn.addr !113
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2069, i64 0, i64 0), i64 15), !insn.addr !114
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_2087, i64 0, i64 0), i64 42), !insn.addr !115
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_20a9, i64 0, i64 0), i64 2), !insn.addr !116
  %19 = load i128, i128* @global_var_2010, align 8, !insn.addr !117
  %20 = call i128 @__asm_movdqa(i128 %19), !insn.addr !117
  %21 = load i128, i128* @global_var_2020, align 8, !insn.addr !118
  %22 = call i128 @__asm_movdqa(i128 %21), !insn.addr !118
  store i128 %20, i128* %xmm0.0.reg2mem, !insn.addr !118
  store i64 0, i64* %rbx.1.reg2mem, !insn.addr !118
  br label %dec_label_pc_13be, !insn.addr !118

dec_label_pc_13be:                                ; preds = %dec_label_pc_13be, %dec_label_pc_1361
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %23 = call i64 @__asm_movdqa.1(i128 %xmm0.0.reload), !insn.addr !119
  %24 = add i64 %rbx.1.reload, %4, !insn.addr !119
  %25 = sext i64 %23 to i128, !insn.addr !119
  %26 = inttoptr i64 %24 to i128*, !insn.addr !119
  store i128 %25, i128* %26, align 8, !insn.addr !119
  %27 = add i64 %rbx.1.reload, 16, !insn.addr !120
  %28 = call i128 @__asm_paddb(i128 %xmm0.0.reload, i128 %22), !insn.addr !121
  %29 = icmp eq i64 %27, ptrtoint (i64* @global_var_800 to i64), !insn.addr !122
  %30 = icmp eq i1 %29, false, !insn.addr !123
  store i128 %28, i128* %xmm0.0.reg2mem, !insn.addr !123
  store i64 %27, i64* %rbx.1.reg2mem, !insn.addr !123
  br i1 %30, label %dec_label_pc_13be, label %dec_label_pc_13d4, !insn.addr !123

dec_label_pc_13d4:                                ; preds = %dec_label_pc_13be
  %31 = sext i8 %2 to i64, !insn.addr !124
  %32 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_20cb, i64 0, i64 0), i64 %31), !insn.addr !125
  store i64 0, i64* %rbx.2.reg2mem, !insn.addr !126
  br label %dec_label_pc_13ef, !insn.addr !126

dec_label_pc_13ef:                                ; preds = %dec_label_pc_13ef, %dec_label_pc_13d4
  %rbx.2.reload = load i64, i64* %rbx.2.reg2mem
  %33 = trunc i64 %rbx.2.reload to i32, !insn.addr !127
  %34 = mul i64 %rbx.2.reload, 2, !insn.addr !127
  %35 = add i64 %34, %4, !insn.addr !127
  %36 = inttoptr i64 %35 to i32*, !insn.addr !127
  store i32 %33, i32* %36, align 4, !insn.addr !127
  %37 = add nuw nsw i64 %rbx.2.reload, 2, !insn.addr !128
  %38 = icmp eq i64 %rbx.2.reload, 18, !insn.addr !129
  %39 = icmp eq i1 %38, false, !insn.addr !130
  store i64 %37, i64* %rbx.2.reg2mem, !insn.addr !130
  br i1 %39, label %dec_label_pc_13ef, label %dec_label_pc_13fc, !insn.addr !130

dec_label_pc_13fc:                                ; preds = %dec_label_pc_13ef
  %40 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_20ee, i64 0, i64 0), i64 %14), !insn.addr !131
  store i64 0, i64* %rbx.3.reg2mem, !insn.addr !131
  store i64 %4, i64* %r14.0.reg2mem, !insn.addr !131
  br label %dec_label_pc_1416, !insn.addr !131

dec_label_pc_1416:                                ; preds = %dec_label_pc_1416, %dec_label_pc_13fc
  %r14.0.reload = load i64, i64* %r14.0.reg2mem
  %rbx.3.reload = load i64, i64* %rbx.3.reg2mem
  %41 = trunc i64 %rbx.3.reload to i32, !insn.addr !132
  %42 = inttoptr i64 %r14.0.reload to i32*, !insn.addr !132
  store i32 %41, i32* %42, align 4, !insn.addr !132
  %43 = add i64 %r14.0.reload, 4, !insn.addr !133
  %44 = add nuw nsw i64 %rbx.3.reload, 3, !insn.addr !134
  %45 = icmp eq i64 %rbx.3.reload, 27, !insn.addr !135
  %46 = icmp eq i1 %45, false, !insn.addr !136
  store i64 %44, i64* %rbx.3.reg2mem, !insn.addr !136
  store i64 %43, i64* %r14.0.reg2mem, !insn.addr !136
  br i1 %46, label %dec_label_pc_1416, label %dec_label_pc_1427, !insn.addr !136

dec_label_pc_1427:                                ; preds = %dec_label_pc_1416
  %47 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2109, i64 0, i64 0), i64 %14), !insn.addr !137
  %48 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2127, i64 0, i64 0), i64 20), !insn.addr !138
  %49 = sext i32 %48 to i64, !insn.addr !138
  ret i64 %49, !insn.addr !138

; uselistorder directives
  uselistorder i64 %rbx.3.reload, { 1, 2, 0 }
  uselistorder i64 %r14.0.reload, { 1, 0 }
  uselistorder i64 %rbx.2.reload, { 1, 2, 3, 0 }
  uselistorder i128 %xmm0.0.reload, { 1, 0 }
  uselistorder i64 %rbx.0.reload, { 1, 2, 3, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm0.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.1.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.2.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.3.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r14.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* @global_var_2020, { 1, 0 }
  uselistorder i128* @global_var_2010, { 1, 0 }
}

define i64 @heap_basic(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1456:
  %rbx.0.reg2mem = alloca i64, !insn.addr !139
  %rdx.0.reg2mem = alloca i64, !insn.addr !139
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !140
  %1 = call i64* @malloc(i32 %0), !insn.addr !140
  %2 = icmp eq i64* %1, null, !insn.addr !141
  store i64 4294967295, i64* %rbx.0.reg2mem, !insn.addr !142
  br i1 %2, label %dec_label_pc_149f, label %dec_label_pc_146a, !insn.addr !142

dec_label_pc_146a:                                ; preds = %dec_label_pc_1456
  %3 = ptrtoint i64* %1 to i64, !insn.addr !140
  %4 = icmp slt i32 %arg1.tr, 1
  br i1 %4, label %dec_label_pc_1481, label %dec_label_pc_146e, !insn.addr !143

dec_label_pc_146e:                                ; preds = %dec_label_pc_146a
  %5 = mul i64 %arg1, 2, !insn.addr !144
  %6 = and i64 %5, 8589934590, !insn.addr !145
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !146
  br label %dec_label_pc_1475, !insn.addr !146

dec_label_pc_1475:                                ; preds = %dec_label_pc_1475, %dec_label_pc_146e
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %7 = trunc i64 %rdx.0.reload to i32, !insn.addr !147
  %8 = mul i64 %rdx.0.reload, 2, !insn.addr !147
  %9 = add i64 %8, %3, !insn.addr !147
  %10 = inttoptr i64 %9 to i32*, !insn.addr !147
  store i32 %7, i32* %10, align 4, !insn.addr !147
  %11 = add i64 %rdx.0.reload, 2, !insn.addr !148
  %12 = icmp eq i64 %6, %11, !insn.addr !149
  %13 = icmp eq i1 %12, false, !insn.addr !150
  store i64 %11, i64* %rdx.0.reg2mem, !insn.addr !150
  br i1 %13, label %dec_label_pc_1475, label %dec_label_pc_1481, !insn.addr !150

dec_label_pc_1481:                                ; preds = %dec_label_pc_1475, %dec_label_pc_146a
  %14 = icmp slt i32 %arg1.tr, 0
  %15 = zext i1 %14 to i32, !insn.addr !151
  %16 = add i32 %15, %arg1.tr, !insn.addr !152
  %17 = ashr i32 %16, 1, !insn.addr !153
  %18 = sext i32 %17 to i64, !insn.addr !154
  %19 = mul i64 %18, 4, !insn.addr !155
  %20 = add i64 %19, %3, !insn.addr !155
  %21 = inttoptr i64 %20 to i32*, !insn.addr !155
  %22 = load i32, i32* %21, align 4, !insn.addr !155
  %23 = zext i32 %22 to i64, !insn.addr !155
  call void @free(i64* nonnull %1), !insn.addr !156
  store i64 %23, i64* %rbx.0.reg2mem, !insn.addr !157
  br label %dec_label_pc_149f, !insn.addr !157

dec_label_pc_149f:                                ; preds = %dec_label_pc_1456, %dec_label_pc_1481
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  ret i64 %rbx.0.reload, !insn.addr !158

; uselistorder directives
  uselistorder i64 %rdx.0.reload, { 1, 2, 0 }
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i32 %arg1.tr, { 2, 1, 3, 0 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_149f, { 1, 0 }
}

define i64 @heap_calloc(i64 %arg1) local_unnamed_addr {
dec_label_pc_14a3:
  %rbx.2.reg2mem = alloca i64, !insn.addr !159
  %rbx.1.reg2mem = alloca i64, !insn.addr !159
  %rbx.0.reg2mem = alloca i32, !insn.addr !159
  %rdx.0.reg2mem = alloca i64, !insn.addr !159
  %0 = trunc i64 %arg1 to i32, !insn.addr !160
  %1 = call i64* @calloc(i32 %0, i32 4), !insn.addr !161
  %2 = icmp eq i64* %1, null, !insn.addr !162
  store i64 4294967295, i64* %rbx.2.reg2mem, !insn.addr !163
  br i1 %2, label %dec_label_pc_14e8, label %dec_label_pc_14ba, !insn.addr !163

dec_label_pc_14ba:                                ; preds = %dec_label_pc_14a3
  %3 = and i64 %arg1, 4294967295, !insn.addr !164
  %4 = ptrtoint i64* %1 to i64, !insn.addr !161
  %5 = icmp slt i32 %0, 2
  store i64 1, i64* %rdx.0.reg2mem, !insn.addr !165
  store i32 0, i32* %rbx.0.reg2mem, !insn.addr !165
  store i64 0, i64* %rbx.1.reg2mem, !insn.addr !165
  br i1 %5, label %dec_label_pc_14d9, label %dec_label_pc_14ce, !insn.addr !165

dec_label_pc_14ce:                                ; preds = %dec_label_pc_14ba, %dec_label_pc_14ce
  %rbx.0.reload = load i32, i32* %rbx.0.reg2mem
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %6 = mul i64 %rdx.0.reload, 4, !insn.addr !166
  %7 = add i64 %6, %4, !insn.addr !166
  %8 = inttoptr i64 %7 to i32*, !insn.addr !166
  %9 = load i32, i32* %8, align 4, !insn.addr !166
  %10 = add i32 %9, %rbx.0.reload, !insn.addr !166
  %11 = add i64 %rdx.0.reload, 1, !insn.addr !167
  %12 = icmp eq i64 %3, %11, !insn.addr !168
  %13 = icmp eq i1 %12, false, !insn.addr !169
  store i64 %11, i64* %rdx.0.reg2mem, !insn.addr !169
  store i32 %10, i32* %rbx.0.reg2mem, !insn.addr !169
  br i1 %13, label %dec_label_pc_14ce, label %dec_label_pc_14d9.loopexit, !insn.addr !169

dec_label_pc_14d9.loopexit:                       ; preds = %dec_label_pc_14ce
  %14 = zext i32 %10 to i64, !insn.addr !166
  store i64 %14, i64* %rbx.1.reg2mem
  br label %dec_label_pc_14d9

dec_label_pc_14d9:                                ; preds = %dec_label_pc_14d9.loopexit, %dec_label_pc_14ba
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  call void @free(i64* nonnull %1), !insn.addr !170
  store i64 %rbx.1.reload, i64* %rbx.2.reg2mem, !insn.addr !171
  br label %dec_label_pc_14e8, !insn.addr !171

dec_label_pc_14e8:                                ; preds = %dec_label_pc_14a3, %dec_label_pc_14d9
  %rbx.2.reload = load i64, i64* %rbx.2.reg2mem
  %15 = and i64 %rbx.2.reload, 4294967295, !insn.addr !172
  ret i64 %15, !insn.addr !173

; uselistorder directives
  uselistorder i32 %10, { 1, 0 }
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rbx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.2.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_14e8, { 1, 0 }
  uselistorder label %dec_label_pc_14ce, { 1, 0 }
}

define i64 @heap_realloc() local_unnamed_addr {
dec_label_pc_14f1:
  %rbp.2.reg2mem = alloca i64, !insn.addr !174
  %rbp.1.reg2mem = alloca i64, !insn.addr !174
  %rbx.0.reg2mem = alloca i64, !insn.addr !174
  %rdx.0.reg2mem = alloca i64, !insn.addr !174
  %rcx.0.reg2mem = alloca i64, !insn.addr !174
  %rax.0.reg2mem = alloca i64, !insn.addr !174
  %0 = call i64* @malloc(i32 20), !insn.addr !175
  %1 = ptrtoint i64* %0 to i64, !insn.addr !175
  %2 = icmp eq i64* %0, null, !insn.addr !176
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !177
  store i64 4294967295, i64* %rbp.2.reg2mem, !insn.addr !177
  br i1 %2, label %dec_label_pc_156f, label %dec_label_pc_1509, !insn.addr !177

dec_label_pc_1509:                                ; preds = %dec_label_pc_14f1, %dec_label_pc_1509
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %3 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !178
  %4 = trunc i64 %3 to i32, !insn.addr !179
  %5 = mul i64 %rax.0.reload, 4, !insn.addr !179
  %6 = add i64 %5, %1, !insn.addr !179
  %7 = inttoptr i64 %6 to i32*, !insn.addr !179
  store i32 %4, i32* %7, align 4, !insn.addr !179
  %exitcond1 = icmp eq i64 %3, 5
  store i64 %3, i64* %rax.0.reg2mem, !insn.addr !180
  br i1 %exitcond1, label %dec_label_pc_1519, label %dec_label_pc_1509, !insn.addr !180

dec_label_pc_1519:                                ; preds = %dec_label_pc_1509
  %8 = add i64 %1, 8, !insn.addr !181
  %9 = inttoptr i64 %8 to i32*, !insn.addr !181
  %10 = load i32, i32* %9, align 4, !insn.addr !181
  %11 = call i64* @realloc(i64* nonnull %0, i32 40), !insn.addr !182
  %12 = ptrtoint i64* %11 to i64, !insn.addr !182
  %13 = icmp eq i64* %11, null, !insn.addr !183
  store i64 5, i64* %rcx.0.reg2mem, !insn.addr !184
  store i64 50, i64* %rdx.0.reg2mem, !insn.addr !184
  store i64 %1, i64* %rbx.0.reg2mem, !insn.addr !184
  store i64 4294967294, i64* %rbp.1.reg2mem, !insn.addr !184
  br i1 %13, label %dec_label_pc_1567, label %dec_label_pc_1539, !insn.addr !184

dec_label_pc_1539:                                ; preds = %dec_label_pc_1519, %dec_label_pc_1539
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %14 = trunc i64 %rdx.0.reload to i32, !insn.addr !185
  %15 = mul i64 %rcx.0.reload, 4, !insn.addr !185
  %16 = add i64 %15, %12, !insn.addr !185
  %17 = inttoptr i64 %16 to i32*, !insn.addr !185
  store i32 %14, i32* %17, align 4, !insn.addr !185
  %18 = add nuw nsw i64 %rcx.0.reload, 1, !insn.addr !186
  %19 = add nuw nsw i64 %rdx.0.reload, 10, !insn.addr !187
  %20 = and i64 %19, 4294967295, !insn.addr !187
  %exitcond = icmp eq i64 %18, 10
  store i64 %18, i64* %rcx.0.reg2mem, !insn.addr !188
  store i64 %20, i64* %rdx.0.reg2mem, !insn.addr !188
  br i1 %exitcond, label %dec_label_pc_1548, label %dec_label_pc_1539, !insn.addr !188

dec_label_pc_1548:                                ; preds = %dec_label_pc_1539
  %21 = add i64 %12, 8, !insn.addr !189
  %22 = inttoptr i64 %21 to i32*, !insn.addr !189
  %23 = load i32, i32* %22, align 4, !insn.addr !189
  %24 = icmp eq i32 %23, %10, !insn.addr !189
  %25 = icmp eq i1 %24, false, !insn.addr !190
  store i64 %12, i64* %rbx.0.reg2mem, !insn.addr !190
  store i64 4294967293, i64* %rbp.1.reg2mem, !insn.addr !190
  br i1 %25, label %dec_label_pc_1567, label %dec_label_pc_1553, !insn.addr !190

dec_label_pc_1553:                                ; preds = %dec_label_pc_1548
  %26 = add i64 %12, 20, !insn.addr !191
  %27 = inttoptr i64 %26 to i32*, !insn.addr !191
  %28 = load i32, i32* %27, align 4, !insn.addr !191
  %29 = zext i32 %28 to i64, !insn.addr !191
  store i64 %12, i64* %rbx.0.reg2mem, !insn.addr !191
  store i64 %29, i64* %rbp.1.reg2mem, !insn.addr !191
  br label %dec_label_pc_1567, !insn.addr !191

dec_label_pc_1567:                                ; preds = %dec_label_pc_1519, %dec_label_pc_1548, %dec_label_pc_1553
  %rbp.1.reload = load i64, i64* %rbp.1.reg2mem
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %30 = inttoptr i64 %rbx.0.reload to i64*, !insn.addr !192
  call void @free(i64* %30), !insn.addr !192
  store i64 %rbp.1.reload, i64* %rbp.2.reg2mem, !insn.addr !192
  br label %dec_label_pc_156f, !insn.addr !192

dec_label_pc_156f:                                ; preds = %dec_label_pc_14f1, %dec_label_pc_1567
  %rbp.2.reload = load i64, i64* %rbp.2.reg2mem
  %31 = and i64 %rbp.2.reload, 4294967295, !insn.addr !193
  ret i64 %31, !insn.addr !194

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
  uselistorder label %dec_label_pc_156f, { 1, 0 }
  uselistorder label %dec_label_pc_1567, { 2, 1, 0 }
  uselistorder label %dec_label_pc_1539, { 1, 0 }
  uselistorder label %dec_label_pc_1509, { 1, 0 }
}

define i64 @heap_array(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1576:
  %rbx.0.reg2mem = alloca i64, !insn.addr !195
  %rsi.0.reg2mem = alloca i64, !insn.addr !195
  %rdx.0.reg2mem = alloca i64, !insn.addr !195
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !196
  %1 = call i64* @malloc(i32 %0), !insn.addr !196
  %2 = icmp eq i64* %1, null, !insn.addr !197
  store i64 4294967295, i64* %rbx.0.reg2mem, !insn.addr !198
  br i1 %2, label %dec_label_pc_15c6, label %dec_label_pc_158a, !insn.addr !198

dec_label_pc_158a:                                ; preds = %dec_label_pc_1576
  %3 = ptrtoint i64* %1 to i64, !insn.addr !196
  %4 = icmp slt i32 %arg1.tr, 1
  br i1 %4, label %dec_label_pc_15a8, label %dec_label_pc_158e, !insn.addr !199

dec_label_pc_158e:                                ; preds = %dec_label_pc_158a
  %5 = and i64 %arg1, 4294967295, !insn.addr !200
  %6 = mul nuw nsw i64 %5, 3, !insn.addr !201
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !202
  store i64 %3, i64* %rsi.0.reg2mem, !insn.addr !202
  br label %dec_label_pc_1599, !insn.addr !202

dec_label_pc_1599:                                ; preds = %dec_label_pc_1599, %dec_label_pc_158e
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %7 = trunc i64 %rdx.0.reload to i32, !insn.addr !203
  %8 = inttoptr i64 %rsi.0.reload to i32*, !insn.addr !203
  store i32 %7, i32* %8, align 4, !insn.addr !203
  %9 = add i64 %rdx.0.reload, 3, !insn.addr !204
  %10 = add i64 %rsi.0.reload, 4, !insn.addr !205
  %11 = icmp eq i64 %6, %9, !insn.addr !206
  %12 = icmp eq i1 %11, false, !insn.addr !207
  store i64 %9, i64* %rdx.0.reg2mem, !insn.addr !207
  store i64 %10, i64* %rsi.0.reg2mem, !insn.addr !207
  br i1 %12, label %dec_label_pc_1599, label %dec_label_pc_15a8, !insn.addr !207

dec_label_pc_15a8:                                ; preds = %dec_label_pc_1599, %dec_label_pc_158a
  %13 = icmp slt i32 %arg1.tr, 0
  %14 = zext i1 %13 to i32, !insn.addr !208
  %15 = add i32 %14, %arg1.tr, !insn.addr !209
  %16 = ashr i32 %15, 1, !insn.addr !210
  %17 = sext i32 %16 to i64, !insn.addr !211
  %18 = mul i64 %17, 4, !insn.addr !212
  %19 = add i64 %18, %3, !insn.addr !212
  %20 = inttoptr i64 %19 to i32*, !insn.addr !212
  %21 = load i32, i32* %20, align 4, !insn.addr !212
  %22 = zext i32 %21 to i64, !insn.addr !212
  call void @free(i64* nonnull %1), !insn.addr !213
  store i64 %22, i64* %rbx.0.reg2mem, !insn.addr !214
  br label %dec_label_pc_15c6, !insn.addr !214

dec_label_pc_15c6:                                ; preds = %dec_label_pc_1576, %dec_label_pc_15a8
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  ret i64 %rbx.0.reload, !insn.addr !215

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
  uselistorder label %dec_label_pc_15c6, { 1, 0 }
}

define i64 @heap_struct(i64 %arg1) local_unnamed_addr {
dec_label_pc_15ca:
  %0 = mul i64 %arg1, 3, !insn.addr !216
  %1 = and i64 %0, 4294967295, !insn.addr !216
  ret i64 %1, !insn.addr !217
}

define i64 @heap_nested(i64* %arg1) local_unnamed_addr {
dec_label_pc_15ce:
  %rax.0.reg2mem = alloca i64, !insn.addr !218
  %0 = call i64* @malloc(i32 16), !insn.addr !219
  %1 = ptrtoint i64* %0 to i64, !insn.addr !219
  store i64 %1, i64* %arg1, align 8, !insn.addr !220
  %2 = icmp eq i64* %0, null, !insn.addr !221
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !222
  br i1 %2, label %dec_label_pc_1629, label %dec_label_pc_15e7, !insn.addr !222

dec_label_pc_15e7:                                ; preds = %dec_label_pc_15ce
  %3 = bitcast i64* %0 to i32*, !insn.addr !223
  store i32 10, i32* %3, align 4, !insn.addr !223
  %4 = call i64* @malloc(i32 16), !insn.addr !224
  %5 = ptrtoint i64* %4 to i64, !insn.addr !224
  %6 = add i64 %1, 8, !insn.addr !225
  %7 = inttoptr i64 %6 to i64*, !insn.addr !225
  store i64 %5, i64* %7, align 8, !insn.addr !225
  %8 = icmp eq i64* %4, null, !insn.addr !226
  br i1 %8, label %dec_label_pc_161c, label %dec_label_pc_1603, !insn.addr !227

dec_label_pc_1603:                                ; preds = %dec_label_pc_15e7
  %9 = bitcast i64* %4 to i32*, !insn.addr !228
  store i32 20, i32* %9, align 4, !insn.addr !228
  %10 = add i64 %5, 8, !insn.addr !229
  %11 = inttoptr i64 %10 to i64*, !insn.addr !229
  store i64 0, i64* %11, align 8, !insn.addr !229
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !230
  br label %dec_label_pc_1629, !insn.addr !230

dec_label_pc_161c:                                ; preds = %dec_label_pc_15e7
  call void @free(i64* nonnull %0), !insn.addr !231
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !232
  br label %dec_label_pc_1629, !insn.addr !232

dec_label_pc_1629:                                ; preds = %dec_label_pc_15ce, %dec_label_pc_161c, %dec_label_pc_1603
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !233

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_1629, { 1, 2, 0 }
}

define i64 @linked_list_heap() local_unnamed_addr {
dec_label_pc_1631:
  %rbp.2.reg2mem = alloca i64, !insn.addr !234
  %r14.5.reg2mem = alloca i64, !insn.addr !234
  %rbp.1.reg2mem = alloca i32, !insn.addr !234
  %rax.1.reg2mem = alloca i64, !insn.addr !234
  %rbx.2.reg2mem = alloca i64, !insn.addr !234
  %r14.3.reg2mem = alloca i64, !insn.addr !234
  %r14.1.reg2mem = alloca i64, !insn.addr !234
  %r15.0.reg2mem = alloca i64, !insn.addr !234
  %r14.0.reg2mem = alloca i64, !insn.addr !234
  %rbp.0.reg2mem = alloca i64, !insn.addr !234
  %rbx.0.reg2mem = alloca i64, !insn.addr !234
  %rax.0.in.reg2mem = alloca i64*, !insn.addr !234
  %0 = call i64* @malloc(i32 16), !insn.addr !235
  %1 = icmp eq i64* %0, null, !insn.addr !236
  store i64* %0, i64** %rax.0.in.reg2mem, !insn.addr !237
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !237
  store i64 0, i64* %rbp.0.reg2mem, !insn.addr !237
  store i64 0, i64* %r14.0.reg2mem, !insn.addr !237
  store i64 0, i64* %r15.0.reg2mem, !insn.addr !237
  store i64 1, i64* %rbx.2.reg2mem, !insn.addr !237
  br i1 %1, label %dec_label_pc_16ba, label %dec_label_pc_1651, !insn.addr !237

dec_label_pc_1651:                                ; preds = %dec_label_pc_1631, %dec_label_pc_166e
  %r15.0.reload = load i64, i64* %r15.0.reg2mem
  %r14.0.reload = load i64, i64* %r14.0.reg2mem
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %rax.0.in.reload = load i64*, i64** %rax.0.in.reg2mem
  %rax.0 = ptrtoint i64* %rax.0.in.reload to i64
  %2 = trunc i64 %rbp.0.reload to i32, !insn.addr !238
  %3 = bitcast i64* %rax.0.in.reload to i32*, !insn.addr !238
  store i32 %2, i32* %3, align 4, !insn.addr !238
  %4 = add i64 %rax.0, 8, !insn.addr !239
  %5 = inttoptr i64 %4 to i64*, !insn.addr !239
  store i64 0, i64* %5, align 8, !insn.addr !239
  %6 = icmp eq i64 %r14.0.reload, 0, !insn.addr !240
  store i64 %rax.0, i64* %r14.1.reg2mem, !insn.addr !241
  br i1 %6, label %dec_label_pc_1669, label %dec_label_pc_1660, !insn.addr !241

dec_label_pc_1660:                                ; preds = %dec_label_pc_1651
  %7 = add i64 %r15.0.reload, 8, !insn.addr !242
  %8 = inttoptr i64 %7 to i64*, !insn.addr !242
  store i64 %rax.0, i64* %8, align 8, !insn.addr !242
  store i64 %r14.0.reload, i64* %r14.1.reg2mem, !insn.addr !243
  br label %dec_label_pc_1669, !insn.addr !243

dec_label_pc_1669:                                ; preds = %dec_label_pc_1651, %dec_label_pc_1660
  %r14.1.reload = load i64, i64* %r14.1.reg2mem
  %9 = icmp eq i64 %rbx.0.reload, 4294967292, !insn.addr !244
  br i1 %9, label %dec_label_pc_16c3, label %dec_label_pc_166e, !insn.addr !245

dec_label_pc_166e:                                ; preds = %dec_label_pc_1669
  %10 = call i64* @malloc(i32 16), !insn.addr !246
  %11 = add nuw nsw i64 %rbx.0.reload, 4294967295, !insn.addr !247
  %12 = and i64 %11, 4294967295, !insn.addr !247
  %13 = add nuw nsw i64 %rbp.0.reload, 10, !insn.addr !248
  %14 = and i64 %13, 4294967295, !insn.addr !248
  %15 = icmp eq i64* %10, null, !insn.addr !249
  %16 = icmp eq i1 %15, false, !insn.addr !250
  store i64* %10, i64** %rax.0.in.reg2mem, !insn.addr !250
  store i64 %12, i64* %rbx.0.reg2mem, !insn.addr !250
  store i64 %14, i64* %rbp.0.reg2mem, !insn.addr !250
  store i64 %r14.1.reload, i64* %r14.0.reg2mem, !insn.addr !250
  store i64 %rax.0, i64* %r15.0.reg2mem, !insn.addr !250
  br i1 %16, label %dec_label_pc_1651, label %dec_label_pc_1694, !insn.addr !250

dec_label_pc_1694:                                ; preds = %dec_label_pc_166e
  %17 = trunc i64 %11 to i32
  %18 = xor i32 %17, -4, !insn.addr !251
  %19 = icmp ult i32 %18, 4, !insn.addr !251
  %20 = zext i1 %19 to i64, !insn.addr !252
  %21 = icmp eq i64 %r14.1.reload, 0, !insn.addr !253
  store i64 %r14.1.reload, i64* %r14.3.reg2mem, !insn.addr !254
  store i64 %20, i64* %rbx.2.reg2mem, !insn.addr !254
  br i1 %21, label %dec_label_pc_16ba, label %dec_label_pc_1699, !insn.addr !254

dec_label_pc_1699:                                ; preds = %dec_label_pc_1694, %dec_label_pc_1699
  %r14.3.reload = load i64, i64* %r14.3.reg2mem
  %22 = add i64 %r14.3.reload, 8, !insn.addr !255
  %23 = inttoptr i64 %22 to i64*, !insn.addr !255
  %24 = load i64, i64* %23, align 8, !insn.addr !255
  %25 = inttoptr i64 %r14.3.reload to i64*, !insn.addr !256
  call void @free(i64* %25), !insn.addr !256
  %26 = icmp eq i64 %24, 0, !insn.addr !257
  %27 = icmp eq i1 %26, false, !insn.addr !258
  store i64 %24, i64* %r14.3.reg2mem, !insn.addr !258
  store i64 %20, i64* %rbx.2.reg2mem, !insn.addr !258
  br i1 %27, label %dec_label_pc_1699, label %dec_label_pc_16ba, !insn.addr !258

dec_label_pc_16ba:                                ; preds = %dec_label_pc_1699, %dec_label_pc_1631, %dec_label_pc_1694
  %rbx.2.reload = load i64, i64* %rbx.2.reg2mem
  %28 = icmp eq i64 %rbx.2.reload, 0, !insn.addr !259
  %29 = icmp eq i1 %28, false, !insn.addr !260
  %spec.select = select i1 %29, i64 4294967295, i64 0
  ret i64 %spec.select

dec_label_pc_16c3:                                ; preds = %dec_label_pc_1669
  %30 = icmp eq i64 %r14.1.reload, 0, !insn.addr !261
  store i64 %r14.1.reload, i64* %rax.1.reg2mem, !insn.addr !262
  store i32 0, i32* %rbp.1.reg2mem, !insn.addr !262
  store i64 0, i64* %rbp.2.reg2mem, !insn.addr !262
  br i1 %30, label %dec_label_pc_16f1, label %dec_label_pc_16cd, !insn.addr !262

dec_label_pc_16cd:                                ; preds = %dec_label_pc_16c3, %dec_label_pc_16cd
  %rbp.1.reload = load i32, i32* %rbp.1.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %31 = inttoptr i64 %rax.1.reload to i32*, !insn.addr !263
  %32 = load i32, i32* %31, align 4, !insn.addr !263
  %33 = add i32 %32, %rbp.1.reload, !insn.addr !263
  %34 = add i64 %rax.1.reload, 8, !insn.addr !264
  %35 = inttoptr i64 %34 to i64*, !insn.addr !264
  %36 = load i64, i64* %35, align 8, !insn.addr !264
  %37 = icmp eq i64 %36, 0, !insn.addr !265
  %38 = icmp eq i1 %37, false, !insn.addr !266
  store i64 %36, i64* %rax.1.reg2mem, !insn.addr !266
  store i32 %33, i32* %rbp.1.reg2mem, !insn.addr !266
  store i64 %r14.1.reload, i64* %r14.5.reg2mem, !insn.addr !266
  br i1 %38, label %dec_label_pc_16cd, label %dec_label_pc_16dd, !insn.addr !266

dec_label_pc_16dd:                                ; preds = %dec_label_pc_16cd, %dec_label_pc_16dd
  %r14.5.reload = load i64, i64* %r14.5.reg2mem
  %39 = add i64 %r14.5.reload, 8, !insn.addr !267
  %40 = inttoptr i64 %39 to i64*, !insn.addr !267
  %41 = load i64, i64* %40, align 8, !insn.addr !267
  %42 = inttoptr i64 %r14.5.reload to i64*, !insn.addr !268
  call void @free(i64* %42), !insn.addr !268
  %43 = icmp eq i64 %41, 0, !insn.addr !269
  %44 = icmp eq i1 %43, false, !insn.addr !270
  store i64 %41, i64* %r14.5.reg2mem, !insn.addr !270
  br i1 %44, label %dec_label_pc_16dd, label %dec_label_pc_16f1.loopexit, !insn.addr !270

dec_label_pc_16f1.loopexit:                       ; preds = %dec_label_pc_16dd
  %45 = zext i32 %33 to i64, !insn.addr !263
  store i64 %45, i64* %rbp.2.reg2mem
  br label %dec_label_pc_16f1

dec_label_pc_16f1:                                ; preds = %dec_label_pc_16f1.loopexit, %dec_label_pc_16c3
  %rbp.2.reload = load i64, i64* %rbp.2.reg2mem
  ret i64 %rbp.2.reload, !insn.addr !271

; uselistorder directives
  uselistorder i32 %33, { 1, 0 }
  uselistorder i64 %r14.1.reload, { 0, 1, 4, 2, 3, 5 }
  uselistorder i64 %rax.0, { 1, 3, 0, 2 }
  uselistorder i64* %rax.0.in.reload, { 1, 0 }
  uselistorder i64 %rbp.0.reload, { 1, 0 }
  uselistorder i64** %rax.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbp.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r14.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r15.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r14.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %r14.3.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.2.reg2mem, { 0, 1, 3, 2 }
  uselistorder i64* %rax.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rbp.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r14.5.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_16dd, { 1, 0 }
  uselistorder label %dec_label_pc_16cd, { 1, 0 }
  uselistorder label %dec_label_pc_16ba, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1699, { 1, 0 }
  uselistorder label %dec_label_pc_1669, { 1, 0 }
  uselistorder label %dec_label_pc_1651, { 1, 0 }
}

define i64 @create_tree_node(i64 %arg1) local_unnamed_addr {
dec_label_pc_16fe:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = call i64* @malloc(i32 24), !insn.addr !272
  %3 = ptrtoint i64* %2 to i64, !insn.addr !272
  %4 = icmp eq i64* %2, null, !insn.addr !273
  br i1 %4, label %dec_label_pc_1719, label %dec_label_pc_1710, !insn.addr !274

dec_label_pc_1710:                                ; preds = %dec_label_pc_16fe
  %5 = trunc i64 %arg1 to i32, !insn.addr !275
  %6 = bitcast i64* %2 to i32*, !insn.addr !275
  store i32 %5, i32* %6, align 4, !insn.addr !275
  %7 = call i128 @__asm_xorps(i128 %1, i128 %1), !insn.addr !276
  %8 = add i64 %3, 8, !insn.addr !277
  %9 = inttoptr i64 %8 to i128*, !insn.addr !277
  %10 = load i128, i128* %9, align 8, !insn.addr !277
  call void @__asm_movups(i128 %10, i128 %7), !insn.addr !277
  br label %dec_label_pc_1719, !insn.addr !277

dec_label_pc_1719:                                ; preds = %dec_label_pc_1710, %dec_label_pc_16fe
  ret i64 %3, !insn.addr !278

; uselistorder directives
  uselistorder i64 %3, { 1, 0 }
}

define i64 @tree_heap_traversal() local_unnamed_addr {
dec_label_pc_171b:
  ret i64 60, !insn.addr !279
}

define i64 @memory_leak(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1721:
  %storemerge.reg2mem = alloca i64, !insn.addr !280
  %rdx.0.reg2mem = alloca i64, !insn.addr !280
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !281
  %1 = call i64* @malloc(i32 %0), !insn.addr !281
  %2 = icmp eq i64* %1, null, !insn.addr !282
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !283
  br i1 %2, label %dec_label_pc_175e, label %dec_label_pc_1735, !insn.addr !283

dec_label_pc_1735:                                ; preds = %dec_label_pc_1721
  %3 = and i64 %arg1, 4294967295, !insn.addr !284
  %4 = ptrtoint i64* %1 to i64, !insn.addr !281
  %5 = icmp slt i32 %arg1.tr, 1
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !285
  br i1 %5, label %dec_label_pc_1748, label %dec_label_pc_173d, !insn.addr !285

dec_label_pc_173d:                                ; preds = %dec_label_pc_1735, %dec_label_pc_173d
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %6 = trunc i64 %rdx.0.reload to i32, !insn.addr !286
  %7 = mul i64 %rdx.0.reload, 4, !insn.addr !286
  %8 = add i64 %7, %4, !insn.addr !286
  %9 = inttoptr i64 %8 to i32*, !insn.addr !286
  store i32 %6, i32* %9, align 4, !insn.addr !286
  %10 = add i64 %rdx.0.reload, 1, !insn.addr !287
  %11 = icmp eq i64 %3, %10, !insn.addr !288
  %12 = icmp eq i1 %11, false, !insn.addr !289
  store i64 %10, i64* %rdx.0.reg2mem, !insn.addr !289
  br i1 %12, label %dec_label_pc_173d, label %dec_label_pc_1748, !insn.addr !289

dec_label_pc_1748:                                ; preds = %dec_label_pc_173d, %dec_label_pc_1735
  %13 = icmp slt i32 %arg1.tr, 0
  %14 = zext i1 %13 to i32, !insn.addr !290
  %15 = add i32 %14, %arg1.tr, !insn.addr !291
  %16 = ashr i32 %15, 1, !insn.addr !292
  %17 = sext i32 %16 to i64, !insn.addr !293
  %18 = mul i64 %17, 4, !insn.addr !294
  %19 = add i64 %18, %4, !insn.addr !294
  %20 = inttoptr i64 %19 to i32*, !insn.addr !294
  %21 = load i32, i32* %20, align 4, !insn.addr !294
  %22 = zext i32 %21 to i64, !insn.addr !294
  store i64 %22, i64* %storemerge.reg2mem, !insn.addr !295
  br label %dec_label_pc_175e, !insn.addr !295

dec_label_pc_175e:                                ; preds = %dec_label_pc_1721, %dec_label_pc_1748
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !296

; uselistorder directives
  uselistorder i64 %rdx.0.reload, { 1, 2, 0 }
  uselistorder i64* %1, { 1, 0 }
  uselistorder i32 %arg1.tr, { 2, 1, 3, 0 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_175e, { 1, 0 }
  uselistorder label %dec_label_pc_173d, { 1, 0 }
}

define i64 @dangling_pointer() local_unnamed_addr {
dec_label_pc_1760:
  %storemerge.reg2mem = alloca i64, !insn.addr !297
  %0 = call i64* @malloc(i32 4), !insn.addr !298
  %1 = icmp eq i64* %0, null, !insn.addr !299
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !300
  br i1 %1, label %dec_label_pc_1797, label %dec_label_pc_1770, !insn.addr !300

dec_label_pc_1770:                                ; preds = %dec_label_pc_1760
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_2144, i64 0, i64 0), i64 42), !insn.addr !301
  call void @free(i64* nonnull %0), !insn.addr !302
  %3 = bitcast i64* %0 to i32*, !insn.addr !303
  %4 = load i32, i32* %3, align 4, !insn.addr !303
  %5 = zext i32 %4 to i64, !insn.addr !303
  store i64 %5, i64* %storemerge.reg2mem, !insn.addr !304
  br label %dec_label_pc_1797, !insn.addr !304

dec_label_pc_1797:                                ; preds = %dec_label_pc_1760, %dec_label_pc_1770
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !305

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 42, { 1, 2, 0 }
  uselistorder i32 4, { 3, 0, 5, 1, 4, 2 }
  uselistorder label %dec_label_pc_1797, { 1, 0 }
}

define i64 @double_free(i64 %arg1) local_unnamed_addr {
dec_label_pc_1799:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %arg1, 0, !insn.addr !306
  br i1 %2, label %dec_label_pc_17a1, label %dec_label_pc_179e, !insn.addr !307

dec_label_pc_179e:                                ; preds = %dec_label_pc_1799
  %3 = and i64 %1, 4294967295, !insn.addr !308
  ret i64 %3, !insn.addr !309

dec_label_pc_17a1:                                ; preds = %dec_label_pc_1799
  ret i64 4294967294, !insn.addr !310
}

define i64 @heap_overflow(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_17a7:
  %rbx.0.reg2mem = alloca i64, !insn.addr !311
  %rdx.0.reg2mem = alloca i64, !insn.addr !311
  %rcx.0.reg2mem = alloca i64, !insn.addr !311
  %0 = call i64* @malloc(i32 40), !insn.addr !312
  %1 = icmp eq i64* %0, null, !insn.addr !313
  store i64 4294967295, i64* %rbx.0.reg2mem, !insn.addr !314
  br i1 %1, label %dec_label_pc_17e0, label %dec_label_pc_17b7, !insn.addr !314

dec_label_pc_17b7:                                ; preds = %dec_label_pc_17a7
  %2 = ptrtoint i64* %0 to i64, !insn.addr !312
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !315
  store i64 %2, i64* %rdx.0.reg2mem, !insn.addr !315
  br label %dec_label_pc_17bc, !insn.addr !315

dec_label_pc_17bc:                                ; preds = %dec_label_pc_17bc, %dec_label_pc_17b7
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %3 = trunc i64 %rcx.0.reload to i32, !insn.addr !316
  %4 = inttoptr i64 %rdx.0.reload to i32*, !insn.addr !316
  store i32 %3, i32* %4, align 4, !insn.addr !316
  %5 = add i64 %rcx.0.reload, 100, !insn.addr !317
  %6 = add i64 %rdx.0.reload, 4, !insn.addr !318
  %7 = icmp eq i64 %5, ptrtoint (i64* @global_var_44c to i64), !insn.addr !319
  %8 = icmp eq i1 %7, false, !insn.addr !320
  store i64 %5, i64* %rcx.0.reg2mem, !insn.addr !320
  store i64 %6, i64* %rdx.0.reg2mem, !insn.addr !320
  br i1 %8, label %dec_label_pc_17bc, label %dec_label_pc_17cf, !insn.addr !320

dec_label_pc_17cf:                                ; preds = %dec_label_pc_17bc
  %9 = bitcast i64* %0 to i32*, !insn.addr !321
  %10 = load i32, i32* %9, align 4, !insn.addr !321
  %11 = zext i32 %10 to i64, !insn.addr !321
  call void @free(i64* nonnull %0), !insn.addr !322
  store i64 %11, i64* %rbx.0.reg2mem, !insn.addr !323
  br label %dec_label_pc_17e0, !insn.addr !323

dec_label_pc_17e0:                                ; preds = %dec_label_pc_17a7, %dec_label_pc_17cf
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  ret i64 %rbx.0.reload, !insn.addr !324

; uselistorder directives
  uselistorder i64 %rcx.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64* %0, { 0, 1, 3, 2 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_17e0, { 1, 0 }
}

define i64 @test_heap_memory(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_17e4:
  %rax.0.reg2mem = alloca i64, !insn.addr !325
  %storemerge.reg2mem = alloca i64, !insn.addr !325
  %storemerge2.reg2mem = alloca i64, !insn.addr !325
  %rcx.0.reg2mem = alloca i64, !insn.addr !325
  %stack_var_-20 = alloca i32, align 4
  %stack_var_-16 = alloca i64, align 8
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_2607 to i8*)), !insn.addr !326
  %1 = call i64 @heap_basic(i64 10, i64 %arg2, i64 %arg3), !insn.addr !327
  %2 = and i64 %1, 4294967295, !insn.addr !328
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_215b, i64 0, i64 0), i64 %2), !insn.addr !329
  %4 = call i64 @heap_calloc(i64 5), !insn.addr !330
  %5 = and i64 %4, 4294967295, !insn.addr !331
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2178, i64 0, i64 0), i64 %5), !insn.addr !332
  %7 = call i64 @heap_realloc(), !insn.addr !333
  %8 = and i64 %7, 4294967295, !insn.addr !334
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_2196, i64 0, i64 0), i64 %8), !insn.addr !335
  %10 = call i64 @heap_array(i64 10, i64 %8, i64 %arg3), !insn.addr !336
  %11 = and i64 %10, 4294967295, !insn.addr !337
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_21b5, i64 0, i64 0), i64 %11), !insn.addr !338
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_21d2, i64 0, i64 0), i64 15), !insn.addr !339
  store i64 0, i64* %stack_var_-16, align 8, !insn.addr !340
  %14 = call i64 @heap_nested(i64* nonnull %stack_var_-16), !insn.addr !341
  %15 = and i64 %14, 4294967295, !insn.addr !342
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_21f0, i64 0, i64 0), i64 %15), !insn.addr !343
  %17 = load i64, i64* %stack_var_-16, align 8, !insn.addr !344
  %18 = icmp eq i64 %17, 0, !insn.addr !345
  br i1 %18, label %dec_label_pc_18a8, label %dec_label_pc_1897, !insn.addr !346

dec_label_pc_1897:                                ; preds = %dec_label_pc_17e4
  %19 = add i64 %17, 8, !insn.addr !347
  %20 = inttoptr i64 %19 to i64*, !insn.addr !347
  %21 = load i64, i64* %20, align 8, !insn.addr !347
  %22 = inttoptr i64 %21 to i64*, !insn.addr !348
  call void @free(i64* %22), !insn.addr !348
  %23 = inttoptr i64 %17 to i64*, !insn.addr !349
  call void @free(i64* %23), !insn.addr !349
  br label %dec_label_pc_18a8, !insn.addr !349

dec_label_pc_18a8:                                ; preds = %dec_label_pc_1897, %dec_label_pc_17e4
  %24 = call i64 @linked_list_heap(), !insn.addr !350
  %25 = and i64 %24, 4294967295, !insn.addr !351
  %26 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_220e, i64 0, i64 0), i64 %25), !insn.addr !352
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_2231, i64 0, i64 0), i64 60), !insn.addr !353
  %28 = call i64* @malloc(i32 20), !insn.addr !354
  %29 = ptrtoint i64* %28 to i64, !insn.addr !354
  %30 = icmp eq i64* %28, null, !insn.addr !355
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !356
  store i64 4294967295, i64* %storemerge2.reg2mem, !insn.addr !356
  br i1 %30, label %dec_label_pc_18f7, label %dec_label_pc_18e1, !insn.addr !356

dec_label_pc_18e1:                                ; preds = %dec_label_pc_18a8, %dec_label_pc_18e1
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %31 = trunc i64 %rcx.0.reload to i32, !insn.addr !357
  %32 = mul i64 %rcx.0.reload, 4, !insn.addr !357
  %33 = add i64 %32, %29, !insn.addr !357
  %34 = inttoptr i64 %33 to i32*, !insn.addr !357
  store i32 %31, i32* %34, align 4, !insn.addr !357
  %35 = add nuw nsw i64 %rcx.0.reload, 1, !insn.addr !358
  %exitcond = icmp eq i64 %35, 5
  store i64 %35, i64* %rcx.0.reg2mem, !insn.addr !359
  br i1 %exitcond, label %dec_label_pc_18ed, label %dec_label_pc_18e1, !insn.addr !359

dec_label_pc_18ed:                                ; preds = %dec_label_pc_18e1
  %36 = add i64 %29, 8, !insn.addr !360
  %37 = inttoptr i64 %36 to i32*, !insn.addr !360
  %38 = load i32, i32* %37, align 4, !insn.addr !360
  %39 = zext i32 %38 to i64, !insn.addr !360
  store i64 %39, i64* %storemerge2.reg2mem, !insn.addr !361
  br label %dec_label_pc_18f7, !insn.addr !361

dec_label_pc_18f7:                                ; preds = %dec_label_pc_18a8, %dec_label_pc_18ed
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %40 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2257, i64 0, i64 0), i64 %storemerge2.reload), !insn.addr !362
  %41 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_2275, i64 0, i64 0)), !insn.addr !363
  %42 = call i32 @fork(), !insn.addr !364
  %43 = icmp eq i32 %42, 0, !insn.addr !365
  br i1 %43, label %dec_label_pc_197e, label %dec_label_pc_191c, !insn.addr !366

dec_label_pc_191c:                                ; preds = %dec_label_pc_18f7
  %44 = icmp slt i32 %42, 1
  br i1 %44, label %dec_label_pc_196d, label %dec_label_pc_191e, !insn.addr !367

dec_label_pc_191e:                                ; preds = %dec_label_pc_191c
  %45 = call i32 @waitpid(i32 %42, i32* nonnull %stack_var_-20, i32 0), !insn.addr !368
  %46 = load i32, i32* %stack_var_-20, align 4, !insn.addr !369
  %47 = urem i32 %46, 128, !insn.addr !370
  %48 = icmp eq i32 %47, 0, !insn.addr !370
  store i64 ptrtoint (i64* @global_var_22a5 to i64), i64* %storemerge.reg2mem, !insn.addr !371
  br i1 %48, label %dec_label_pc_1960, label %dec_label_pc_1938, !insn.addr !371

dec_label_pc_1938:                                ; preds = %dec_label_pc_191e
  %49 = zext i32 %47 to i64, !insn.addr !370
  %50 = mul i32 %47, 16777216, !insn.addr !372
  %51 = add nuw i32 %50, 16777216, !insn.addr !373
  %52 = icmp slt i32 %51, 33554432, !insn.addr !374
  store i64 ptrtoint (i8** @global_var_22ca to i64), i64* %storemerge.reg2mem, !insn.addr !374
  store i64 %49, i64* %rax.0.reg2mem, !insn.addr !374
  br i1 %52, label %dec_label_pc_1967, label %dec_label_pc_1960, !insn.addr !374

dec_label_pc_1960:                                ; preds = %dec_label_pc_191e, %dec_label_pc_1938
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %53 = inttoptr i64 %storemerge.reload to i8*, !insn.addr !375
  %54 = call i32 (i8*, ...) @printf(i8* %53), !insn.addr !375
  %55 = sext i32 %54 to i64, !insn.addr !375
  store i64 %55, i64* %rax.0.reg2mem, !insn.addr !375
  br label %dec_label_pc_1967, !insn.addr !375

dec_label_pc_1967:                                ; preds = %dec_label_pc_1960, %dec_label_pc_1938
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !376

dec_label_pc_196d:                                ; preds = %dec_label_pc_191c
  call void @perror(i8* bitcast (i8** @global_var_230b to i8*)), !insn.addr !377
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !377

dec_label_pc_197e:                                ; preds = %dec_label_pc_18f7
  %56 = call i64 @dangling_pointer(), !insn.addr !378
  %57 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2295 to i8*)), !insn.addr !379
  call void @exit(i32 xor (i32 ptrtoint (i8** @global_var_2295 to i32), i32 ptrtoint (i8** @global_var_2295 to i32))), !insn.addr !380
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !380

; uselistorder directives
  uselistorder i32 %47, { 0, 2, 1 }
  uselistorder i64 %rcx.0.reload, { 1, 2, 0 }
  uselistorder i64 %29, { 1, 0 }
  uselistorder i64 %17, { 1, 0, 2 }
  uselistorder i64* %stack_var_-16, { 1, 0, 2 }
  uselistorder i64* %rcx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge2.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder i64 ptrtoint (i32* @0 to i64), { 1, 2, 0 }
  uselistorder i32 16777216, { 1, 0 }
  uselistorder i64* (i32)* @malloc, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder i32 20, { 0, 2, 1 }
  uselistorder i64 60, { 1, 0 }
  uselistorder void (i64*)* @free, { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 11 }
  uselistorder i64 %arg3, { 1, 0 }
  uselistorder label %dec_label_pc_1960, { 1, 0 }
  uselistorder label %dec_label_pc_18f7, { 1, 0 }
  uselistorder label %dec_label_pc_18e1, { 1, 0 }
}

define i64 @global_var_access() local_unnamed_addr {
dec_label_pc_199a:
  store i32 ptrtoint (i32* @global_var_50b1 to i32), i32* @global_var_50b0, align 4, !insn.addr !381
  ret i64 ptrtoint (i32* @global_var_50b1 to i64), !insn.addr !382
}

define i64 @global_var_read() local_unnamed_addr {
dec_label_pc_19a9:
  %0 = load i32, i32* @global_var_50b0, align 4, !insn.addr !383
  %1 = mul i32 %0, 2, !insn.addr !384
  %2 = zext i32 %1 to i64, !insn.addr !384
  ret i64 %2, !insn.addr !385
}

define i64 @global_array_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_19b2:
  %rax.0.reg2mem = alloca i64, !insn.addr !386
  %0 = trunc i64 %arg1 to i32, !insn.addr !387
  %1 = icmp ult i32 %0, 10
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !388
  br i1 %1, label %dec_label_pc_19bc, label %dec_label_pc_19c8, !insn.addr !388

dec_label_pc_19bc:                                ; preds = %dec_label_pc_19b2
  %2 = mul i64 %arg1, 4, !insn.addr !389
  %3 = and i64 %2, 17179869180, !insn.addr !390
  %4 = add i64 %3, ptrtoint (i32** @global_var_2670 to i64), !insn.addr !390
  %5 = inttoptr i64 %4 to i32*, !insn.addr !390
  %6 = load i32, i32* %5, align 4, !insn.addr !390
  %7 = zext i32 %6 to i64, !insn.addr !390
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !390
  br label %dec_label_pc_19c8, !insn.addr !390

dec_label_pc_19c8:                                ; preds = %dec_label_pc_19b2, %dec_label_pc_19bc
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !391

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder i64 4, { 0, 1, 14, 2, 3, 4, 15, 5, 6, 7, 8, 16, 9, 17, 10, 11, 12, 13 }
  uselistorder label %dec_label_pc_19c8, { 1, 0 }
}

define i64 @static_local(i64 %arg1) local_unnamed_addr {
dec_label_pc_19c9:
  %0 = trunc i64 %arg1 to i32, !insn.addr !392
  %1 = icmp eq i32 %0, 0, !insn.addr !392
  %2 = select i1 %1, i64 zext (i32 ptrtoint (i32* @global_var_50b5 to i32) to i64), i64 0, !insn.addr !393
  %3 = trunc i64 %2 to i32, !insn.addr !394
  store i32 %3, i32* bitcast (i64* @global_var_50b4 to i32*), align 8, !insn.addr !394
  ret i64 %2, !insn.addr !395
}

define i64 @call_static_func(i64 %arg1) local_unnamed_addr {
dec_label_pc_19df:
  %0 = mul i64 %arg1, 2, !insn.addr !396
  %1 = and i64 %0, 4294967294, !insn.addr !397
  %2 = or i64 %1, 1, !insn.addr !397
  ret i64 %2, !insn.addr !398
}

define i64 @access_extern_global() local_unnamed_addr {
dec_label_pc_19e5:
  %0 = load i32, i32* @global_var_50a4, align 4, !insn.addr !399
  %1 = add i32 %0, 100, !insn.addr !400
  %2 = zext i32 %1 to i64, !insn.addr !400
  ret i64 %2, !insn.addr !401
}

define i64 @call_extern_func() local_unnamed_addr {
dec_label_pc_19f2:
  %0 = call i64 @extern_function(i64 5), !insn.addr !402
  ret i64 %0, !insn.addr !402
}

define i64 @read_const_data() local_unnamed_addr {
dec_label_pc_19fc:
  ret i64 ptrtoint (i32* @global_var_50c6 to i64), !insn.addr !403
}

define i64 @access_bss_var() local_unnamed_addr {
dec_label_pc_1a0b:
  ret i64 0, !insn.addr !404
}

define i64 @access_bss_buffer() local_unnamed_addr {
dec_label_pc_1a0e:
  ret i64 0, !insn.addr !405
}

define i64 @global_struct_access() local_unnamed_addr {
dec_label_pc_1a11:
  ret i64 30, !insn.addr !406
}

define i64 @set_file_static(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a17:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg1 to i32, !insn.addr !407
  store i32 %2, i32* @global_var_50a0, align 4, !insn.addr !407
  ret i64 %1, !insn.addr !408
}

define i64 @get_file_static() local_unnamed_addr {
dec_label_pc_1a1e:
  %0 = load i32, i32* @global_var_50a0, align 4, !insn.addr !409
  %1 = zext i32 %0 to i64, !insn.addr !409
  ret i64 %1, !insn.addr !410
}

define i64 @set_global_callback(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a25:
  %0 = alloca i64
  %1 = load i64, i64* %0
  store i64 %arg1, i64* @global_var_50b8, align 8, !insn.addr !411
  ret i64 %1, !insn.addr !412
}

define i64 @call_global_callback() local_unnamed_addr {
dec_label_pc_1a2d:
  %0 = load i64, i64* @global_var_50b8, align 8, !insn.addr !413
  %1 = icmp eq i64 %0, 0, !insn.addr !414
  %spec.select = select i1 %1, i64 4294967295, i64 %0
  ret i64 %spec.select, !insn.addr !415
}

define i64 @global_heap_store(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a41:
  %0 = alloca i64
  %1 = load i64, i64* %0
  store i64 %arg1, i64* @global_var_50c0, align 8, !insn.addr !416
  %2 = icmp eq i64 %arg1, 0, !insn.addr !417
  br i1 %2, label %dec_label_pc_1a50, label %dec_label_pc_1a4d, !insn.addr !418

dec_label_pc_1a4d:                                ; preds = %dec_label_pc_1a41
  %3 = and i64 %1, 4294967295, !insn.addr !419
  ret i64 %3, !insn.addr !420

dec_label_pc_1a50:                                ; preds = %dec_label_pc_1a41
  ret i64 4294967295, !insn.addr !421

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @static_complex_init() local_unnamed_addr {
dec_label_pc_1a56:
  ret i64 15, !insn.addr !422
}

define i64 @tls_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a5c:
  %0 = mul i64 %arg1, 2, !insn.addr !423
  %1 = and i64 %0, 4294967294, !insn.addr !423
  ret i64 %1, !insn.addr !424
}

define i64 @init_order_test() local_unnamed_addr {
dec_label_pc_1a60:
  ret i64 20, !insn.addr !425
}

define i64 @test_static_global() local_unnamed_addr {
dec_label_pc_1a66:
  %stack_var_-12 = alloca i64, align 8
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_2625 to i8*)), !insn.addr !426
  store i32 ptrtoint (i32* @global_var_50b1 to i32), i32* @global_var_50b0, align 4, !insn.addr !427
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_2316, i64 0, i64 0), i64 ptrtoint (i32* @global_var_50b1 to i64)), !insn.addr !428
  %2 = load i32, i32* @global_var_50b0, align 4, !insn.addr !429
  %3 = mul i32 %2, 2, !insn.addr !430
  %4 = zext i32 %3 to i64, !insn.addr !430
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_2339, i64 0, i64 0), i64 %4), !insn.addr !431
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_235a, i64 0, i64 0), i64 5), !insn.addr !432
  store i32 1, i32* bitcast (i64* @global_var_50b4 to i32*), align 8, !insn.addr !433
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_237f, i64 0, i64 0), i64 1), !insn.addr !434
  store i32 ptrtoint (i32* @global_var_50b5 to i32), i32* bitcast (i64* @global_var_50b4 to i32*), align 8, !insn.addr !435
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_237f, i64 0, i64 0), i64 ptrtoint (i32* @global_var_50b5 to i64)), !insn.addr !436
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_239d, i64 0, i64 0), i64 11), !insn.addr !437
  %10 = load i32, i32* @global_var_50a4, align 4, !insn.addr !438
  %11 = add i32 %10, 100, !insn.addr !439
  %12 = zext i32 %11 to i64, !insn.addr !439
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_23bf, i64 0, i64 0), i64 %12), !insn.addr !440
  %14 = call i64 @extern_function(i64 5), !insn.addr !441
  %15 = and i64 %14, 4294967295, !insn.addr !442
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_23e5, i64 0, i64 0), i64 %15), !insn.addr !443
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_2407, i64 0, i64 0), i64 ptrtoint (i32* @global_var_50c6 to i64)), !insn.addr !444
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_2428, i64 0, i64 0), i64 zext (i32 xor (i32 ptrtoint (i32* @global_var_50c6 to i32), i32 ptrtoint (i32* @global_var_50c6 to i32)) to i64)), !insn.addr !445
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_2448, i64 0, i64 0), i64 zext (i32 xor (i32 xor (i32 ptrtoint (i32* @global_var_50c6 to i32), i32 ptrtoint (i32* @global_var_50c6 to i32)), i32 xor (i32 ptrtoint (i32* @global_var_50c6 to i32), i32 ptrtoint (i32* @global_var_50c6 to i32))) to i64)), !insn.addr !446
  %20 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_246b, i64 0, i64 0), i64 30), !insn.addr !447
  store i32 50, i32* @global_var_50a0, align 4, !insn.addr !448
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2491, i64 0, i64 0), i64 50), !insn.addr !449
  store i64 7212, i64* @global_var_50b8, align 8, !insn.addr !450
  %22 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_24ae, i64 0, i64 0), i64 10), !insn.addr !451
  store i64 100, i64* %stack_var_-12, align 8, !insn.addr !452
  %23 = ptrtoint i64* %stack_var_-12 to i64, !insn.addr !453
  store i64 %23, i64* @global_var_50c0, align 8, !insn.addr !453
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_24cf, i64 0, i64 0), i64 100), !insn.addr !454
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_24f2, i64 0, i64 0), i64 15), !insn.addr !455
  %26 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_2517, i64 0, i64 0), i64 20), !insn.addr !456
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_2533, i64 0, i64 0), i64 20), !insn.addr !457
  %28 = sext i32 %27 to i64, !insn.addr !457
  ret i64 %28, !insn.addr !458

; uselistorder directives
  uselistorder i64 20, { 2, 3, 0, 6, 4, 5, 1 }
  uselistorder i64 15, { 3, 0, 4, 5, 1, 2 }
  uselistorder i64 100, { 1, 0, 2 }
  uselistorder i32* @global_var_50a0, { 2, 1, 0 }
  uselistorder i64 30, { 1, 0 }
  uselistorder i64 ptrtoint (i32* @global_var_50c6 to i64), { 1, 0 }
  uselistorder i64 (i64)* @extern_function, { 1, 0 }
  uselistorder i32 100, { 1, 2, 0 }
  uselistorder i32* @global_var_50a4, { 1, 0 }
  uselistorder i32* @global_var_50b5, { 1, 0 }
  uselistorder i64 5, { 3, 4, 5, 1, 6, 0, 2 }
  uselistorder i64 ptrtoint (i32* @global_var_50b1 to i64), { 1, 0 }
  uselistorder i32* @global_var_50b0, { 3, 2, 1, 0 }
  uselistorder i32* @global_var_50b1, { 1, 0 }
}

define i64 @double_value(i64 %arg1) local_unnamed_addr {
dec_label_pc_1c2c:
  %0 = mul i64 %arg1, 2, !insn.addr !459
  %1 = and i64 %0, 4294967294, !insn.addr !459
  ret i64 %1, !insn.addr !460

; uselistorder directives
  uselistorder i64 4294967294, { 4, 5, 6, 2, 0, 1, 3, 7 }
}

define i64 @memop_memset(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1c30:
  %rax.0.reg2mem = alloca i64, !insn.addr !461
  %0 = icmp eq i64 %arg1, 0, !insn.addr !462
  %1 = icmp eq i64 %arg2, 0, !insn.addr !463
  %or.cond = or i1 %0, %1
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !464
  br i1 %or.cond, label %dec_label_pc_1c54, label %dec_label_pc_1c42, !insn.addr !464

dec_label_pc_1c42:                                ; preds = %dec_label_pc_1c30
  %2 = trunc i64 %arg3 to i32, !insn.addr !465
  %3 = inttoptr i64 %arg1 to i64*, !insn.addr !466
  %4 = trunc i64 %arg2 to i32, !insn.addr !466
  %5 = call i64* @memset(i64* %3, i32 %2, i32 %4), !insn.addr !466
  %6 = urem i64 %arg1, 256, !insn.addr !467
  store i64 %6, i64* %rax.0.reg2mem, !insn.addr !468
  br label %dec_label_pc_1c54, !insn.addr !468

dec_label_pc_1c54:                                ; preds = %dec_label_pc_1c42, %dec_label_pc_1c30
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !469

; uselistorder directives
  uselistorder i64 %arg2, { 1, 0 }
}

define i64 @memop_memcpy(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1c55:
  %rax.0.reg2mem = alloca i64, !insn.addr !470
  %0 = icmp eq i64 %arg1, 0, !insn.addr !471
  %1 = icmp eq i64 %arg2, 0, !insn.addr !472
  %or.cond = or i1 %0, %1
  %2 = icmp eq i64 %arg3, 0, !insn.addr !473
  %or.cond2 = or i1 %or.cond, %2
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !474
  br i1 %or.cond2, label %dec_label_pc_1c84, label %dec_label_pc_1c70, !insn.addr !474

dec_label_pc_1c70:                                ; preds = %dec_label_pc_1c55
  %3 = inttoptr i64 %arg1 to i64*, !insn.addr !475
  %4 = inttoptr i64 %arg2 to i64*, !insn.addr !475
  %5 = trunc i64 %arg3 to i32, !insn.addr !475
  %6 = call i64* @memcpy(i64* %3, i64* %4, i32 %5), !insn.addr !475
  %7 = add i64 %arg3, -4
  %8 = and i64 %7, -4, !insn.addr !476
  %9 = add i64 %8, %arg1, !insn.addr !476
  %10 = inttoptr i64 %9 to i32*, !insn.addr !476
  %11 = load i32, i32* %10, align 4, !insn.addr !476
  %12 = zext i32 %11 to i64, !insn.addr !476
  store i64 %12, i64* %rax.0.reg2mem, !insn.addr !476
  br label %dec_label_pc_1c84, !insn.addr !476

dec_label_pc_1c84:                                ; preds = %dec_label_pc_1c70, %dec_label_pc_1c55
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !477

; uselistorder directives
  uselistorder i64 %arg3, { 1, 2, 0 }
}

define i64 @memop_memmove(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1c8c:
  %rax.0.reg2mem = alloca i64, !insn.addr !478
  %0 = icmp eq i64 %arg1, 0, !insn.addr !479
  %1 = icmp ult i64 %arg2, 2, !insn.addr !480
  %or.cond = or i1 %0, %1
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !481
  br i1 %or.cond, label %dec_label_pc_1cb6, label %dec_label_pc_1c9f, !insn.addr !481

dec_label_pc_1c9f:                                ; preds = %dec_label_pc_1c8c
  %2 = add i64 %arg1, 1, !insn.addr !482
  %3 = inttoptr i64 %2 to i64*, !insn.addr !483
  %4 = inttoptr i64 %arg1 to i64*, !insn.addr !483
  %5 = trunc i64 %arg2 to i32
  %6 = add i32 %5, -1, !insn.addr !483
  %7 = call i64* @memmove(i64* %3, i64* %4, i32 %6), !insn.addr !483
  %8 = inttoptr i64 %2 to i8*, !insn.addr !484
  %9 = load i8, i8* %8, align 1, !insn.addr !484
  %10 = sext i8 %9 to i64, !insn.addr !484
  store i64 %10, i64* %rax.0.reg2mem, !insn.addr !485
  br label %dec_label_pc_1cb6, !insn.addr !485

dec_label_pc_1cb6:                                ; preds = %dec_label_pc_1c9f, %dec_label_pc_1c8c
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !486

; uselistorder directives
  uselistorder i64 2, { 11, 0, 1, 2, 13, 3, 4, 14, 5, 12, 15, 6, 16, 7, 8, 9, 10 }
  uselistorder i64 %arg2, { 1, 0 }
}

define i64 @memop_memcmp(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1cb7:
  %rax.0.reg2mem = alloca i64, !insn.addr !487
  %0 = icmp eq i64 %arg1, 0, !insn.addr !488
  %1 = icmp eq i64 %arg2, 0, !insn.addr !489
  %or.cond = or i1 %0, %1
  %2 = icmp eq i64 %arg3, 0, !insn.addr !490
  %or.cond3 = or i1 %or.cond, %2
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !491
  br i1 %or.cond3, label %dec_label_pc_1ce5, label %dec_label_pc_1cc8, !insn.addr !491

dec_label_pc_1cc8:                                ; preds = %dec_label_pc_1cb7
  %3 = inttoptr i64 %arg1 to i64*, !insn.addr !492
  %4 = inttoptr i64 %arg2 to i64*, !insn.addr !492
  %5 = trunc i64 %arg3 to i32, !insn.addr !492
  %6 = call i32 @memcmp(i64* %3, i64* %4, i32 %5), !insn.addr !492
  %7 = icmp eq i32 %6, 0, !insn.addr !493
  %8 = icmp eq i1 %7, false, !insn.addr !494
  %9 = icmp slt i32 %6, 1
  %.op = select i1 %8, i64 4294967295, i64 0
  %10 = select i1 %9, i64 %.op, i64 1, !insn.addr !495
  store i64 %10, i64* %rax.0.reg2mem, !insn.addr !496
  br label %dec_label_pc_1ce5, !insn.addr !496

dec_label_pc_1ce5:                                ; preds = %dec_label_pc_1cc8, %dec_label_pc_1cb7
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !497

; uselistorder directives
  uselistorder i64 %arg3, { 1, 0 }
  uselistorder i64 %arg2, { 1, 0 }
}

define i64 @memop_bzero(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1ce6:
  %0 = icmp eq i64 %arg1, 0, !insn.addr !498
  br i1 %0, label %dec_label_pc_1cfe, label %dec_label_pc_1ceb, !insn.addr !499

dec_label_pc_1ceb:                                ; preds = %dec_label_pc_1ce6
  %1 = inttoptr i64 %arg1 to i64*, !insn.addr !500
  %2 = trunc i64 %arg2 to i32, !insn.addr !500
  %3 = call i64* @memset(i64* %1, i32 0, i32 %2), !insn.addr !500
  %4 = urem i64 %arg1, 256, !insn.addr !501
  ret i64 %4, !insn.addr !502

dec_label_pc_1cfe:                                ; preds = %dec_label_pc_1ce6
  ret i64 4294967295, !insn.addr !503

; uselistorder directives
  uselistorder i64* (i64*, i32, i32)* @memset, { 1, 0, 2 }
  uselistorder i32 0, { 7, 12, 13, 14, 8, 15, 2, 0, 3, 1, 4, 5, 6, 9, 10, 11 }
}

define i64 @memop_bcopy(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1d04:
  %rax.0.reg2mem = alloca i64, !insn.addr !504
  %0 = icmp eq i64 %arg1, 0, !insn.addr !505
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !506
  br i1 %0, label %dec_label_pc_1d2a, label %dec_label_pc_1d0f, !insn.addr !506

dec_label_pc_1d0f:                                ; preds = %dec_label_pc_1d04
  %1 = icmp eq i64 %arg2, 0, !insn.addr !507
  %2 = icmp eq i64 %arg3, 0, !insn.addr !508
  %or.cond = or i1 %1, %2
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !509
  br i1 %or.cond, label %dec_label_pc_1d2a, label %dec_label_pc_1d1c, !insn.addr !509

dec_label_pc_1d1c:                                ; preds = %dec_label_pc_1d0f
  %3 = inttoptr i64 %arg2 to i64*, !insn.addr !510
  %4 = inttoptr i64 %arg1 to i64*, !insn.addr !510
  %5 = trunc i64 %arg3 to i32, !insn.addr !510
  %6 = call i64* @memmove(i64* %3, i64* %4, i32 %5), !insn.addr !510
  %7 = urem i64 %arg2, 256, !insn.addr !511
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !511
  br label %dec_label_pc_1d2a, !insn.addr !511

dec_label_pc_1d2a:                                ; preds = %dec_label_pc_1d1c, %dec_label_pc_1d0f, %dec_label_pc_1d04
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !512

; uselistorder directives
  uselistorder i64* (i64*, i64*, i32)* @memmove, { 1, 0, 2 }
  uselistorder i64 %arg3, { 1, 0 }
  uselistorder i64 %arg2, { 0, 2, 1 }
}

define i64 @memop_unaligned_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_1d2c:
  %0 = icmp eq i64 %arg1, 0, !insn.addr !513
  br i1 %0, label %dec_label_pc_1d35, label %dec_label_pc_1d31, !insn.addr !514

dec_label_pc_1d31:                                ; preds = %dec_label_pc_1d2c
  %1 = add i64 %arg1, 1, !insn.addr !515
  %2 = inttoptr i64 %1 to i32*, !insn.addr !515
  %3 = load i32, i32* %2, align 4, !insn.addr !515
  %4 = zext i32 %3 to i64, !insn.addr !515
  ret i64 %4, !insn.addr !516

dec_label_pc_1d35:                                ; preds = %dec_label_pc_1d2c
  ret i64 4294967295, !insn.addr !517
}

define i64 @memop_memory_barrier(i64 %arg1) local_unnamed_addr {
dec_label_pc_1d3b:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %arg1, 0, !insn.addr !518
  br i1 %2, label %dec_label_pc_1d48, label %dec_label_pc_1d40, !insn.addr !519

dec_label_pc_1d40:                                ; preds = %dec_label_pc_1d3b
  %3 = call i64 @__asm_mfence(), !insn.addr !520
  %4 = add i64 %3, %1, !insn.addr !521
  %5 = and i64 %4, 4294967295, !insn.addr !521
  ret i64 %5, !insn.addr !522

dec_label_pc_1d48:                                ; preds = %dec_label_pc_1d3b
  ret i64 4294967295, !insn.addr !523
}

define i64 @test_memory_op_functions() local_unnamed_addr {
dec_label_pc_1d4e:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_2649 to i8*)), !insn.addr !524
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2554, i64 0, i64 0), i64 65), !insn.addr !525
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2565, i64 0, i64 0), i64 50), !insn.addr !526
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2581, i64 0, i64 0), i8 72), !insn.addr !527
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2592, i64 0, i64 0), i64 4294967295), !insn.addr !528
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_25a3, i64 0, i64 0), i64 0), !insn.addr !529
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_25b4, i64 0, i64 0), i64 1), !insn.addr !530
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_25c5, i64 0, i64 0), i32 67305985), !insn.addr !531
  %8 = call i64 @__asm_mfence(), !insn.addr !532
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_25d8, i64 0, i64 0), i64 10), !insn.addr !533
  %10 = sext i32 %9 to i64, !insn.addr !533
  ret i64 %10, !insn.addr !533

; uselistorder directives
  uselistorder i64 10, { 2, 6, 7, 8, 3, 0, 4, 1, 5 }
  uselistorder i64 ()* @__asm_mfence, { 1, 0 }
  uselistorder i64 1, { 4, 6, 2, 7, 5, 3, 8, 9, 0, 10, 11, 12, 1, 13 }
  uselistorder i64 50, { 1, 2, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 48 }
  uselistorder i32 (i8*)* @puts, { 3, 2, 1, 0, 4 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1e25:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = ptrtoint i8** %argv to i64
  %4 = call i64 @test_stack_memory(), !insn.addr !534
  %5 = call i64 @test_heap_memory(i64 %argc, i64 %3, i64 %1, i64 %2), !insn.addr !535
  %6 = call i64 @test_static_global(), !insn.addr !536
  %7 = call i64 @test_memory_op_functions(), !insn.addr !537
  ret i64 0, !insn.addr !538

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 0, { 24, 50, 51, 52, 53, 54, 55, 58, 56, 57, 59, 60, 61, 62, 63, 64, 65, 66, 152, 153, 46, 154, 155, 156, 67, 0, 47, 48, 157, 158, 30, 49, 159, 31, 160, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 161, 162, 25, 26, 102, 103, 104, 105, 106, 1, 107, 108, 109, 110, 163, 111, 112, 151, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 2, 164, 123, 124, 3, 165, 166, 4, 167, 29, 28, 168, 169, 170, 171, 5, 6, 7, 8, 9, 172, 10, 11, 12, 13, 125, 126, 127, 128, 14, 129, 130, 15, 131, 132, 16, 133, 134, 135, 136, 137, 138, 139, 140, 17, 141, 142, 18, 19, 20, 21, 22, 173, 27, 23, 174, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 143, 144, 145, 146, 147, 148, 149, 150 }
}

define i64 @extern_function(i64 %arg1) local_unnamed_addr {
dec_label_pc_1e40:
  %0 = mul i64 %arg1, 3, !insn.addr !539
  %1 = and i64 %0, 4294967295, !insn.addr !539
  ret i64 %1, !insn.addr !540

; uselistorder directives
  uselistorder i64 4294967295, { 26, 49, 16, 22, 17, 0, 1, 18, 27, 2, 3, 4, 28, 19, 23, 25, 5, 6, 29, 30, 31, 32, 33, 34, 7, 24, 8, 35, 9, 21, 36, 37, 38, 10, 39, 40, 11, 41, 42, 12, 43, 44, 13, 14, 20, 45, 46, 15, 47, 48 }
  uselistorder i64 3, { 0, 1, 5, 2, 6, 7, 3, 4 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_1e44:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !541

; uselistorder directives
  uselistorder i32 1, { 10, 9, 8, 15, 75, 16, 17, 18, 19, 88, 81, 7, 6, 5, 20, 74, 82, 80, 24, 23, 22, 21, 27, 26, 25, 4, 28, 89, 76, 30, 29, 0, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 43, 90, 77, 46, 45, 44, 52, 51, 50, 49, 48, 47, 56, 55, 54, 53, 91, 78, 58, 57, 83, 64, 63, 62, 61, 60, 59, 14, 12, 92, 79, 84, 66, 65, 93, 85, 68, 67, 86, 70, 69, 13, 3, 72, 71, 11, 2, 1, 87, 73 }
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

declare i128 @__asm_movdqa(i128) local_unnamed_addr

declare i64 @__asm_movdqa.1(i128) local_unnamed_addr

declare i128 @__asm_paddb(i128, i128) local_unnamed_addr

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
!36 = !{i64 4620}
!37 = !{i64 4623}
!38 = !{i64 4626}
!39 = !{i64 4627}
!40 = !{i64 4631}
!41 = !{i64 4629}
!42 = !{i64 4635}
!43 = !{i64 4638}
!44 = !{i64 4644}
!45 = !{i64 4646}
!46 = !{i64 4650}
!47 = !{i64 4651}
!48 = !{i64 4654}
!49 = !{i64 4655}
!50 = !{i64 4666}
!51 = !{i64 4669}
!52 = !{i64 4671}
!53 = !{i64 4672}
!54 = !{i64 4679}
!55 = !{i64 4689}
!56 = !{i64 4697}
!57 = !{i64 4703}
!58 = !{i64 4707}
!59 = !{i64 4711}
!60 = !{i64 4717}
!61 = !{i64 4719}
!62 = !{i64 4734}
!63 = !{i64 4735}
!64 = !{i64 4746}
!65 = !{i64 4752}
!66 = !{i64 4761}
!67 = !{i64 4763}
!68 = !{i64 4766}
!69 = !{i64 4774}
!70 = !{i64 4778}
!71 = !{i64 4784}
!72 = !{i64 4787}
!73 = !{i64 4789}
!74 = !{i64 4792}
!75 = !{i64 4796}
!76 = !{i64 4799}
!77 = !{i64 4803}
!78 = !{i64 4806}
!79 = !{i64 4808}
!80 = !{i64 4810}
!81 = !{i64 4819}
!82 = !{i64 4820}
!83 = !{i64 4821}
!84 = !{i64 4823}
!85 = !{i64 4829}
!86 = !{i64 4831}
!87 = !{i64 4834}
!88 = !{i64 4842}
!89 = !{i64 4846}
!90 = !{i64 4852}
!91 = !{i64 4858}
!92 = !{i64 4861}
!93 = !{i64 4863}
!94 = !{i64 4867}
!95 = !{i64 4871}
!96 = !{i64 4874}
!97 = !{i64 4878}
!98 = !{i64 4881}
!99 = !{i64 4883}
!100 = !{i64 4885}
!101 = !{i64 4892}
!102 = !{i64 4898}
!103 = !{i64 4904}
!104 = !{i64 4905}
!105 = !{i64 4908}
!106 = !{i64 4922}
!107 = !{i64 4943}
!108 = !{i64 4948}
!109 = !{i64 4951}
!110 = !{i64 4955}
!111 = !{i64 4959}
!112 = !{i64 4961}
!113 = !{i64 4976}
!114 = !{i64 4995}
!115 = !{i64 5014}
!116 = !{i64 5033}
!117 = !{i64 5038}
!118 = !{i64 5046}
!119 = !{i64 5054}
!120 = !{i64 5059}
!121 = !{i64 5063}
!122 = !{i64 5067}
!123 = !{i64 5074}
!124 = !{i64 5076}
!125 = !{i64 5095}
!126 = !{i64 5100}
!127 = !{i64 5103}
!128 = !{i64 5106}
!129 = !{i64 5110}
!130 = !{i64 5114}
!131 = !{i64 5137}
!132 = !{i64 5142}
!133 = !{i64 5145}
!134 = !{i64 5149}
!135 = !{i64 5153}
!136 = !{i64 5157}
!137 = !{i64 5172}
!138 = !{i64 5201}
!139 = !{i64 5206}
!140 = !{i64 5216}
!141 = !{i64 5221}
!142 = !{i64 5224}
!143 = !{i64 5228}
!144 = !{i64 5207}
!145 = !{i64 5230}
!146 = !{i64 5235}
!147 = !{i64 5237}
!148 = !{i64 5240}
!149 = !{i64 5244}
!150 = !{i64 5247}
!151 = !{i64 5251}
!152 = !{i64 5254}
!153 = !{i64 5256}
!154 = !{i64 5258}
!155 = !{i64 5261}
!156 = !{i64 5267}
!157 = !{i64 5272}
!158 = !{i64 5282}
!159 = !{i64 5283}
!160 = !{i64 5288}
!161 = !{i64 5296}
!162 = !{i64 5301}
!163 = !{i64 5304}
!164 = !{i64 5286}
!165 = !{i64 5310}
!166 = !{i64 5326}
!167 = !{i64 5329}
!168 = !{i64 5332}
!169 = !{i64 5335}
!170 = !{i64 5340}
!171 = !{i64 5345}
!172 = !{i64 5352}
!173 = !{i64 5360}
!174 = !{i64 5361}
!175 = !{i64 5370}
!176 = !{i64 5375}
!177 = !{i64 5378}
!178 = !{i64 5385}
!179 = !{i64 5389}
!180 = !{i64 5399}
!181 = !{i64 5401}
!182 = !{i64 5413}
!183 = !{i64 5418}
!184 = !{i64 5421}
!185 = !{i64 5433}
!186 = !{i64 5436}
!187 = !{i64 5439}
!188 = !{i64 5446}
!189 = !{i64 5453}
!190 = !{i64 5457}
!191 = !{i64 5459}
!192 = !{i64 5482}
!193 = !{i64 5487}
!194 = !{i64 5493}
!195 = !{i64 5494}
!196 = !{i64 5504}
!197 = !{i64 5509}
!198 = !{i64 5512}
!199 = !{i64 5516}
!200 = !{i64 5495}
!201 = !{i64 5520}
!202 = !{i64 5526}
!203 = !{i64 5529}
!204 = !{i64 5531}
!205 = !{i64 5535}
!206 = !{i64 5539}
!207 = !{i64 5542}
!208 = !{i64 5546}
!209 = !{i64 5549}
!210 = !{i64 5551}
!211 = !{i64 5553}
!212 = !{i64 5556}
!213 = !{i64 5562}
!214 = !{i64 5567}
!215 = !{i64 5577}
!216 = !{i64 5578}
!217 = !{i64 5581}
!218 = !{i64 5582}
!219 = !{i64 5594}
!220 = !{i64 5599}
!221 = !{i64 5602}
!222 = !{i64 5605}
!223 = !{i64 5610}
!224 = !{i64 5621}
!225 = !{i64 5626}
!226 = !{i64 5630}
!227 = !{i64 5633}
!228 = !{i64 5635}
!229 = !{i64 5641}
!230 = !{i64 5651}
!231 = !{i64 5663}
!232 = !{i64 5668}
!233 = !{i64 5680}
!234 = !{i64 5681}
!235 = !{i64 5693}
!236 = !{i64 5700}
!237 = !{i64 5703}
!238 = !{i64 5713}
!239 = !{i64 5715}
!240 = !{i64 5723}
!241 = !{i64 5726}
!242 = !{i64 5728}
!243 = !{i64 5732}
!244 = !{i64 5737}
!245 = !{i64 5740}
!246 = !{i64 5750}
!247 = !{i64 5755}
!248 = !{i64 5757}
!249 = !{i64 5760}
!250 = !{i64 5763}
!251 = !{i64 5767}
!252 = !{i64 5770}
!253 = !{i64 5780}
!254 = !{i64 5783}
!255 = !{i64 5785}
!256 = !{i64 5792}
!257 = !{i64 5800}
!258 = !{i64 5803}
!259 = !{i64 5823}
!260 = !{i64 5825}
!261 = !{i64 5829}
!262 = !{i64 5832}
!263 = !{i64 5837}
!264 = !{i64 5839}
!265 = !{i64 5843}
!266 = !{i64 5846}
!267 = !{i64 5853}
!268 = !{i64 5860}
!269 = !{i64 5868}
!270 = !{i64 5871}
!271 = !{i64 5885}
!272 = !{i64 5894}
!273 = !{i64 5899}
!274 = !{i64 5902}
!275 = !{i64 5904}
!276 = !{i64 5906}
!277 = !{i64 5909}
!278 = !{i64 5914}
!279 = !{i64 5920}
!280 = !{i64 5921}
!281 = !{i64 5931}
!282 = !{i64 5936}
!283 = !{i64 5939}
!284 = !{i64 5922}
!285 = !{i64 5943}
!286 = !{i64 5949}
!287 = !{i64 5952}
!288 = !{i64 5955}
!289 = !{i64 5958}
!290 = !{i64 5962}
!291 = !{i64 5965}
!292 = !{i64 5967}
!293 = !{i64 5969}
!294 = !{i64 5972}
!295 = !{i64 5975}
!296 = !{i64 5983}
!297 = !{i64 5984}
!298 = !{i64 5990}
!299 = !{i64 5995}
!300 = !{i64 5998}
!301 = !{i64 6017}
!302 = !{i64 6025}
!303 = !{i64 6030}
!304 = !{i64 6032}
!305 = !{i64 6040}
!306 = !{i64 6041}
!307 = !{i64 6044}
!308 = !{i64 6046}
!309 = !{i64 6048}
!310 = !{i64 6054}
!311 = !{i64 6055}
!312 = !{i64 6061}
!313 = !{i64 6066}
!314 = !{i64 6069}
!315 = !{i64 6073}
!316 = !{i64 6076}
!317 = !{i64 6078}
!318 = !{i64 6082}
!319 = !{i64 6086}
!320 = !{i64 6093}
!321 = !{i64 6095}
!322 = !{i64 6100}
!323 = !{i64 6105}
!324 = !{i64 6115}
!325 = !{i64 6116}
!326 = !{i64 6128}
!327 = !{i64 6138}
!328 = !{i64 6150}
!329 = !{i64 6154}
!330 = !{i64 6164}
!331 = !{i64 6176}
!332 = !{i64 6180}
!333 = !{i64 6185}
!334 = !{i64 6197}
!335 = !{i64 6201}
!336 = !{i64 6211}
!337 = !{i64 6223}
!338 = !{i64 6227}
!339 = !{i64 6246}
!340 = !{i64 6256}
!341 = !{i64 6266}
!342 = !{i64 6278}
!343 = !{i64 6282}
!344 = !{i64 6287}
!345 = !{i64 6290}
!346 = !{i64 6293}
!347 = !{i64 6295}
!348 = !{i64 6299}
!349 = !{i64 6307}
!350 = !{i64 6312}
!351 = !{i64 6324}
!352 = !{i64 6328}
!353 = !{i64 6347}
!354 = !{i64 6357}
!355 = !{i64 6362}
!356 = !{i64 6365}
!357 = !{i64 6369}
!358 = !{i64 6372}
!359 = !{i64 6379}
!360 = !{i64 6381}
!361 = !{i64 6384}
!362 = !{i64 6400}
!363 = !{i64 6414}
!364 = !{i64 6419}
!365 = !{i64 6424}
!366 = !{i64 6426}
!367 = !{i64 6428}
!368 = !{i64 6442}
!369 = !{i64 6447}
!370 = !{i64 6451}
!371 = !{i64 6454}
!372 = !{i64 6458}
!373 = !{i64 6461}
!374 = !{i64 6473}
!375 = !{i64 6498}
!376 = !{i64 6508}
!377 = !{i64 6521}
!378 = !{i64 6526}
!379 = !{i64 6542}
!380 = !{i64 6549}
!381 = !{i64 6562}
!382 = !{i64 6568}
!383 = !{i64 6569}
!384 = !{i64 6575}
!385 = !{i64 6577}
!386 = !{i64 6578}
!387 = !{i64 6583}
!388 = !{i64 6586}
!389 = !{i64 6588}
!390 = !{i64 6597}
!391 = !{i64 6600}
!392 = !{i64 6611}
!393 = !{i64 6613}
!394 = !{i64 6616}
!395 = !{i64 6622}
!396 = !{i64 6623}
!397 = !{i64 6626}
!398 = !{i64 6628}
!399 = !{i64 6636}
!400 = !{i64 6638}
!401 = !{i64 6641}
!402 = !{i64 6647}
!403 = !{i64 6666}
!404 = !{i64 6669}
!405 = !{i64 6672}
!406 = !{i64 6678}
!407 = !{i64 6679}
!408 = !{i64 6685}
!409 = !{i64 6686}
!410 = !{i64 6692}
!411 = !{i64 6693}
!412 = !{i64 6700}
!413 = !{i64 6701}
!414 = !{i64 6708}
!415 = !{i64 6713}
!416 = !{i64 6721}
!417 = !{i64 6728}
!418 = !{i64 6731}
!419 = !{i64 6733}
!420 = !{i64 6735}
!421 = !{i64 6741}
!422 = !{i64 6747}
!423 = !{i64 6748}
!424 = !{i64 6751}
!425 = !{i64 6757}
!426 = !{i64 6770}
!427 = !{i64 6783}
!428 = !{i64 6798}
!429 = !{i64 6803}
!430 = !{i64 6809}
!431 = !{i64 6820}
!432 = !{i64 6839}
!433 = !{i64 6844}
!434 = !{i64 6871}
!435 = !{i64 6884}
!436 = !{i64 6895}
!437 = !{i64 6914}
!438 = !{i64 6926}
!439 = !{i64 6928}
!440 = !{i64 6940}
!441 = !{i64 6950}
!442 = !{i64 6962}
!443 = !{i64 6966}
!444 = !{i64 6994}
!445 = !{i64 7010}
!446 = !{i64 7026}
!447 = !{i64 7045}
!448 = !{i64 7050}
!449 = !{i64 7074}
!450 = !{i64 7086}
!451 = !{i64 7107}
!452 = !{i64 7117}
!453 = !{i64 7123}
!454 = !{i64 7144}
!455 = !{i64 7163}
!456 = !{i64 7182}
!457 = !{i64 7201}
!458 = !{i64 7211}
!459 = !{i64 7212}
!460 = !{i64 7215}
!461 = !{i64 7216}
!462 = !{i64 7221}
!463 = !{i64 7229}
!464 = !{i64 7224}
!465 = !{i64 7238}
!466 = !{i64 7243}
!467 = !{i64 7248}
!468 = !{i64 7251}
!469 = !{i64 7252}
!470 = !{i64 7253}
!471 = !{i64 7262}
!472 = !{i64 7267}
!473 = !{i64 7275}
!474 = !{i64 7265}
!475 = !{i64 7286}
!476 = !{i64 7295}
!477 = !{i64 7307}
!478 = !{i64 7308}
!479 = !{i64 7313}
!480 = !{i64 7321}
!481 = !{i64 7316}
!482 = !{i64 7331}
!483 = !{i64 7340}
!484 = !{i64 7345}
!485 = !{i64 7349}
!486 = !{i64 7350}
!487 = !{i64 7351}
!488 = !{i64 7353}
!489 = !{i64 7358}
!490 = !{i64 7363}
!491 = !{i64 7356}
!492 = !{i64 7369}
!493 = !{i64 7376}
!494 = !{i64 7378}
!495 = !{i64 7390}
!496 = !{i64 7393}
!497 = !{i64 7397}
!498 = !{i64 7398}
!499 = !{i64 7401}
!500 = !{i64 7412}
!501 = !{i64 7417}
!502 = !{i64 7421}
!503 = !{i64 7427}
!504 = !{i64 7428}
!505 = !{i64 7434}
!506 = !{i64 7437}
!507 = !{i64 7442}
!508 = !{i64 7447}
!509 = !{i64 7445}
!510 = !{i64 7458}
!511 = !{i64 7463}
!512 = !{i64 7467}
!513 = !{i64 7468}
!514 = !{i64 7471}
!515 = !{i64 7473}
!516 = !{i64 7476}
!517 = !{i64 7482}
!518 = !{i64 7483}
!519 = !{i64 7486}
!520 = !{i64 7490}
!521 = !{i64 7493}
!522 = !{i64 7495}
!523 = !{i64 7501}
!524 = !{i64 7513}
!525 = !{i64 7532}
!526 = !{i64 7551}
!527 = !{i64 7602}
!528 = !{i64 7621}
!529 = !{i64 7637}
!530 = !{i64 7656}
!531 = !{i64 7675}
!532 = !{i64 7692}
!533 = !{i64 7712}
!534 = !{i64 7718}
!535 = !{i64 7723}
!536 = !{i64 7728}
!537 = !{i64 7733}
!538 = !{i64 7741}
!539 = !{i64 7744}
!540 = !{i64 7747}
!541 = !{i64 7760}
