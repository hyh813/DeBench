source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_6028 = global i64 0
@global_var_818 = local_unnamed_addr global i64 17179869191
@global_var_800 = global i64 4294967303
@global_var_3022 = constant [28 x i8] c"MEM-L1-01 (local_vars): %d\0A\00"
@global_var_303e = constant [29 x i8] c"MEM-L1-02 (local_array): %d\0A\00"
@global_var_305b = constant [30 x i8] c"MEM-L1-03 (local_struct): %d\0A\00"
@global_var_3079 = constant [34 x i8] c"MEM-L1-04 (address_of_local): %d\0A\00"
@global_var_309b = constant [34 x i8] c"MEM-L1-05 (address_of_array): %d\0A\00"
@global_var_30bd = constant [35 x i8] c"MEM-L2-01 (large_stack_frame): %d\0A\00"
@global_var_30e0 = constant [27 x i8] c"MEM-L2-02 (vla_stack): %d\0A\00"
@global_var_30fb = constant [30 x i8] c"MEM-L2-03 (alloca_usage): %d\0A\00"
@global_var_3119 = constant [29 x i8] c"MEM-L2-04 (stack_alias): %d\0A\00"
@global_var_3136 = constant [23 x i8] c"value before free: %d\0A\00"
@global_var_316b = constant [29 x i8] c"HEAP-L2-01 (heap_basic): %d\0A\00"
@global_var_3188 = constant [30 x i8] c"HEAP-L2-02 (heap_calloc): %d\0A\00"
@global_var_31a6 = constant [31 x i8] c"HEAP-L2-03 (heap_realloc): %d\0A\00"
@global_var_31c5 = constant [29 x i8] c"HEAP-L2-04 (heap_array): %d\0A\00"
@global_var_31e2 = constant [30 x i8] c"HEAP-L2-05 (heap_struct): %d\0A\00"
@global_var_3200 = constant [30 x i8] c"HEAP-L2-06 (heap_nested): %d\0A\00"
@global_var_321e = constant [35 x i8] c"HEAP-L3-01 (linked_list_heap): %d\0A\00"
@global_var_3241 = constant [38 x i8] c"HEAP-L3-02 (tree_heap_traversal): %d\0A\00"
@global_var_3267 = constant [30 x i8] c"HEAP-L3-03 (memory_leak): %d\0A\00"
@global_var_3285 = constant [32 x i8] c"HEAP-L3-04 (dangling_pointer): \00"
@global_var_32da = constant i64 -1688658660658012958
@global_counter = local_unnamed_addr global i32 0
@global_array = constant [10 x i32] [i32 0, i32 1, i32 2, i32 3, i32 4, i32 5, i32 6, i32 7, i32 8, i32 9]
@global_var_6030 = local_unnamed_addr global i64 0
@extern_global_var = local_unnamed_addr global i32 23
@0 = internal constant [3 x i8] c"36\00"
@const_string = local_unnamed_addr global i8* getelementptr inbounds ([3 x i8], [3 x i8]* @0, i64 0, i64 0)
@global_var_601c = local_unnamed_addr global i64 98784247808
@file_scope_static = local_unnamed_addr global i32 100
@global_func_ptr = local_unnamed_addr global i32 (i32)* null
@global_var_33b3 = constant [30 x i8] c"STM-L1-03 (static_local): %d\0A\00"
@global_var_334a = constant [35 x i8] c"STM-L1-01 (global_var_access): %d\0A\00"
@global_var_336d = constant [33 x i8] c"STM-L1-01 (global_var_read): %d\0A\00"
@global_var_338e = constant [37 x i8] c"STM-L1-02 (global_array_access): %d\0A\00"
@global_var_33d1 = constant [34 x i8] c"STM-L1-04 (call_static_func): %d\0A\00"
@global_var_33f3 = constant [38 x i8] c"STM-L2-01 (access_extern_global): %d\0A\00"
@global_var_3419 = constant [34 x i8] c"STM-L2-02 (call_extern_func): %d\0A\00"
@global_var_343b = constant [33 x i8] c"STM-L2-03 (read_const_data): %d\0A\00"
@global_var_345c = constant [32 x i8] c"STM-L2-04 (access_bss_var): %d\0A\00"
@global_var_347c = constant [35 x i8] c"STM-L2-04 (access_bss_buffer): %d\0A\00"
@global_var_349f = constant [38 x i8] c"STM-L2-05 (global_struct_access): %d\0A\00"
@global_var_34c5 = constant [29 x i8] c"STM-L2-06 (file_static): %d\0A\00"
@global_var_34e2 = constant [33 x i8] c"STM-L2-07 (global_func_ptr): %d\0A\00"
@global_var_3503 = constant [35 x i8] c"STM-L2-08 (global_heap_store): %d\0A\00"
@global_var_3526 = constant [37 x i8] c"STM-L2-09 (static_complex_init): %d\0A\00"
@global_var_354b = constant [28 x i8] c"STM-L3-01 (tls_access): %d\0A\00"
@global_var_3567 = constant [33 x i8] c"STM-L3-02 (init_order_test): %d\0A\00"
@global_var_35a9 = constant [17 x i8] c"MEMOP-L2-01: %d\0A\00"
@global_var_35ba = constant [17 x i8] c"MEMOP-L2-02: %d\0A\00"
@global_var_3633 = constant [11 x i8] c"HelloWorld\00"
@global_var_35cb = constant [17 x i8] c"MEMOP-L2-03: %c\0A\00"
@global_var_35dc = constant [17 x i8] c"MEMOP-L2-04: %d\0A\00"
@global_var_35ed = constant [17 x i8] c"MEMOP-L2-05: %d\0A\00"
@global_var_35fe = constant [17 x i8] c"MEMOP-L2-06: %d\0A\00"
@global_var_360f = constant [19 x i8] c"MEMOP-L3-01: 0x%x\0A\00"
@global_var_3622 = constant [17 x i8] c"MEMOP-L3-02: %d\0A\00"
@1 = external global i32
@global_var_3e7 = global i32 0
@2 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\88\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_3004 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @2, i64 0, i64 0)
@3 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\A0\86\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_314d = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @3, i64 0, i64 0)
@4 = internal constant [16 x i8] c"%d (\E5\AD\90\E8\BF\9B\E7\A8\8B)\0A\00"
@global_var_32a5 = constant i8* getelementptr inbounds ([16 x i8], [16 x i8]* @4, i64 0, i64 0)
@5 = internal constant [37 x i8] c"\E2\9C\93 \E5\AD\90\E8\BF\9B\E7\A8\8B\E6\AD\A3\E5\B8\B8\E9\80\80\E5\87\BA\EF\BC\8Ccode=%d\0A\00"
@global_var_32b5 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @5, i64 0, i64 0)
@6 = internal constant [11 x i8] c"fork\E5\A4\B1\E8\B4\A5\00"
@global_var_331b = constant i8* getelementptr inbounds ([11 x i8], [11 x i8]* @6, i64 0, i64 0)
@global_var_6031 = global i32 0
@global_var_6046 = external global i32
@7 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\9D\99\E6\80\81\E4\B8\8E\E5\85\A8\E5\B1\80\E5\86\85\E5\AD\98 ===\00"
@global_var_3326 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @7, i64 0, i64 0)
@8 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C\E5\87\BD\E6\95\B0 ===\00"
@global_var_3588 = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @8, i64 0, i64 0)

define i64 @_init() local_unnamed_addr {
dec_label_pc_1000:
  %rax.0.reg2mem = alloca i64, !insn.addr !0
  %0 = load i64, i64* inttoptr (i64 24552 to i64*), align 8, !insn.addr !1
  %1 = icmp eq i64 %0, 0, !insn.addr !2
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !3
  br i1 %1, label %dec_label_pc_1016, label %dec_label_pc_1014, !insn.addr !3

dec_label_pc_1014:                                ; preds = %dec_label_pc_1000
  call void @__gmon_start__(), !insn.addr !4
  store i64 ptrtoint (i32* @1 to i64), i64* %rax.0.reg2mem, !insn.addr !4
  br label %dec_label_pc_1016, !insn.addr !4

dec_label_pc_1016:                                ; preds = %dec_label_pc_1014, %dec_label_pc_1000
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !5
}

define void @function_1100(i64* %d) local_unnamed_addr {
dec_label_pc_1100:
  call void @__cxa_finalize(i64* %d), !insn.addr !6
  ret void, !insn.addr !6
}

define void @function_1110(i64* %ptr) local_unnamed_addr {
dec_label_pc_1110:
  call void @free(i64* %ptr), !insn.addr !7
  ret void, !insn.addr !7
}

define i32 @function_1120(i8* %s) local_unnamed_addr {
dec_label_pc_1120:
  %0 = call i32 @puts(i8* %s), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define void @function_1130() local_unnamed_addr {
dec_label_pc_1130:
  call void @__stack_chk_fail(), !insn.addr !9
  ret void, !insn.addr !9
}

define i32 @function_1140(i64* %s1, i64* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_1140:
  %0 = call i32 @memcmp(i64* %s1, i64* %s2, i32 %n), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i64* @function_1150(i32 %nmemb, i32 %size) local_unnamed_addr {
dec_label_pc_1150:
  %0 = call i64* @calloc(i32 %nmemb, i32 %size), !insn.addr !11
  ret i64* %0, !insn.addr !11
}

define i64* @function_1160(i32 %size) local_unnamed_addr {
dec_label_pc_1160:
  %0 = call i64* @malloc(i32 %size), !insn.addr !12
  ret i64* %0, !insn.addr !12
}

define i64* @function_1170(i64* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_1170:
  %0 = call i64* @realloc(i64* %ptr, i32 %size), !insn.addr !13
  ret i64* %0, !insn.addr !13
}

define i32 @function_1180(i32 %flag, i8* %format, ...) local_unnamed_addr {
dec_label_pc_1180:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 %flag, i8* %format), !insn.addr !14
  ret i32 %0, !insn.addr !14
}

define i64* @function_1190(i64* %dest, i64* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1190:
  %0 = call i64* @memmove(i64* %dest, i64* %src, i32 %n), !insn.addr !15
  ret i64* %0, !insn.addr !15
}

define i32 @function_11a0(i32 %pid, i32* %stat_loc, i32 %options) local_unnamed_addr {
dec_label_pc_11a0:
  %0 = call i32 @waitpid(i32 %pid, i32* %stat_loc, i32 %options), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define void @function_11b0(i8* %s) local_unnamed_addr {
dec_label_pc_11b0:
  call void @perror(i8* %s), !insn.addr !17
  ret void, !insn.addr !17
}

define void @function_11c0(i32 %status) local_unnamed_addr {
dec_label_pc_11c0:
  call void @exit(i32 %status), !insn.addr !18
  ret void, !insn.addr !18
}

define i32 @function_11d0() local_unnamed_addr {
dec_label_pc_11d0:
  %0 = call i32 @fork(), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @main() local_unnamed_addr {
dec_label_pc_11e0:
  call void @test_stack_memory(), !insn.addr !20
  call void @test_heap_memory(), !insn.addr !21
  call void @test_static_global(), !insn.addr !22
  call void @test_memory_op_functions(), !insn.addr !23
  ret i32 xor (i32 ptrtoint (i32* @1 to i32), i32 ptrtoint (i32* @1 to i32)), !insn.addr !24
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1210:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !25
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !25
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !25
  %3 = call i32 @__libc_start_main(i64 4576, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !25
  %4 = call i64 @__asm_hlt(), !insn.addr !26
  unreachable, !insn.addr !26
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1240:
  ret i64 ptrtoint (i64* @global_var_6028 to i64), !insn.addr !27
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1270:
  ret i64 0, !insn.addr !28
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_12b0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* bitcast (i64* @global_var_6028 to i8*), align 8, !insn.addr !29
  %3 = icmp eq i8 %2, 0, !insn.addr !29
  %4 = icmp eq i1 %3, false, !insn.addr !30
  br i1 %4, label %dec_label_pc_12e8, label %dec_label_pc_12bd, !insn.addr !30

dec_label_pc_12bd:                                ; preds = %dec_label_pc_12b0
  %5 = load i64, i64* inttoptr (i64 24568 to i64*), align 8, !insn.addr !31
  %6 = icmp eq i64 %5, 0, !insn.addr !31
  br i1 %6, label %dec_label_pc_12d7, label %dec_label_pc_12cb, !insn.addr !32

dec_label_pc_12cb:                                ; preds = %dec_label_pc_12bd
  %7 = load i64, i64* inttoptr (i64 24584 to i64*), align 8, !insn.addr !33
  %8 = inttoptr i64 %7 to i64*, !insn.addr !34
  call void @__cxa_finalize(i64* %8), !insn.addr !34
  br label %dec_label_pc_12d7, !insn.addr !34

dec_label_pc_12d7:                                ; preds = %dec_label_pc_12cb, %dec_label_pc_12bd
  %9 = call i64 @deregister_tm_clones(), !insn.addr !35
  store i8 1, i8* bitcast (i64* @global_var_6028 to i8*), align 8, !insn.addr !36
  ret i64 %9, !insn.addr !37

dec_label_pc_12e8:                                ; preds = %dec_label_pc_12b0
  ret i64 %1, !insn.addr !38
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_12f0:
  %0 = call i64 @register_tm_clones(), !insn.addr !39
  ret i64 %0, !insn.addr !39
}

define i32 @double_value(i32 %x) local_unnamed_addr {
dec_label_pc_12f9:
  %0 = mul i32 %x, 2, !insn.addr !40
  ret i32 %0, !insn.addr !41
}

define i64 @local_vars(i64 %arg1) local_unnamed_addr {
dec_label_pc_1301:
  %factor = mul i64 %arg1, 2
  %0 = add i64 %factor, 10, !insn.addr !42
  %1 = and i64 %0, 4294967294, !insn.addr !42
  ret i64 %1, !insn.addr !43
}

define i32 @local_array(i32 %n) local_unnamed_addr {
dec_label_pc_130a:
  %rax.1.reg2mem = alloca i32, !insn.addr !44
  %rdx.0.reg2mem = alloca i64, !insn.addr !44
  %rax.0.reg2mem = alloca i64, !insn.addr !44
  %0 = zext i32 %n to i64
  %stack_var_-56 = alloca i64, align 8
  %1 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !45
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !46
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !47
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !47
  br label %dec_label_pc_1324, !insn.addr !47

dec_label_pc_1324:                                ; preds = %dec_label_pc_1324, %dec_label_pc_130a
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %3 = trunc i64 %rdx.0.reload to i32, !insn.addr !48
  %4 = mul i64 %rax.0.reload, 4, !insn.addr !48
  %5 = add i64 %4, %1, !insn.addr !48
  %6 = inttoptr i64 %5 to i32*, !insn.addr !48
  store i32 %3, i32* %6, align 4, !insn.addr !48
  %7 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !49
  %8 = add nuw nsw i64 %rdx.0.reload, %0, !insn.addr !50
  %9 = and i64 %8, 4294967295, !insn.addr !50
  %exitcond = icmp eq i64 %7, 10
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !51
  store i64 %9, i64* %rdx.0.reg2mem, !insn.addr !51
  br i1 %exitcond, label %dec_label_pc_1332, label %dec_label_pc_1324, !insn.addr !51

dec_label_pc_1332:                                ; preds = %dec_label_pc_1324
  %10 = call i64 @__readfsqword(i64 40), !insn.addr !52
  %11 = icmp eq i64 %2, %10, !insn.addr !52
  br i1 %11, label %dec_label_pc_134b, label %dec_label_pc_1346, !insn.addr !53

dec_label_pc_1346:                                ; preds = %dec_label_pc_1332
  call void @__stack_chk_fail(), !insn.addr !54
  store i32 ptrtoint (i32* @1 to i32), i32* %rax.1.reg2mem, !insn.addr !54
  br label %dec_label_pc_134b, !insn.addr !54

dec_label_pc_134b:                                ; preds = %dec_label_pc_1346, %dec_label_pc_1332
  %rax.1.reload = load i32, i32* %rax.1.reg2mem
  ret i32 %rax.1.reload, !insn.addr !55

; uselistorder directives
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
}

define i64 @local_struct(i64 %arg1) local_unnamed_addr {
dec_label_pc_1350:
  %0 = mul i64 %arg1, 3, !insn.addr !56
  %1 = and i64 %0, 4294967295, !insn.addr !56
  ret i64 %1, !insn.addr !57
}

define i64 @address_of_local(i64 %arg1) local_unnamed_addr {
dec_label_pc_1358:
  %0 = inttoptr i64 %arg1 to i32*, !insn.addr !58
  store i32 42, i32* %0, align 4, !insn.addr !58
  ret i64 42, !insn.addr !59
}

define i64 @address_of_array() local_unnamed_addr {
dec_label_pc_1368:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !60
  %3 = and i64 %2, 4294967294, !insn.addr !60
  ret i64 %3, !insn.addr !61
}

define i32 @large_stack_frame() local_unnamed_addr {
dec_label_pc_1371:
  %0 = alloca i32
  %rax.1.reg2mem = alloca i64, !insn.addr !62
  %rax.0.reg2mem = alloca i64, !insn.addr !62
  %1 = load i32, i32* %0
  %large_buf_-2072 = alloca [2048 x i8], align 1
  %2 = ptrtoint [2048 x i8]* %large_buf_-2072 to i64, !insn.addr !63
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !64
  %4 = add i64 %2, 8, !insn.addr !65
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !66
  br label %dec_label_pc_138f, !insn.addr !66

dec_label_pc_138f:                                ; preds = %dec_label_pc_138f, %dec_label_pc_1371
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %5 = trunc i64 %rax.0.reload to i8, !insn.addr !65
  %6 = add i64 %4, %rax.0.reload, !insn.addr !65
  %7 = inttoptr i64 %6 to i8*, !insn.addr !65
  store i8 %5, i8* %7, align 1, !insn.addr !65
  %8 = add i64 %rax.0.reload, 1, !insn.addr !67
  %9 = icmp eq i64 %8, ptrtoint (i64* @global_var_800 to i64), !insn.addr !68
  %10 = icmp eq i1 %9, false, !insn.addr !69
  store i64 %8, i64* %rax.0.reg2mem, !insn.addr !69
  br i1 %10, label %dec_label_pc_138f, label %dec_label_pc_139e, !insn.addr !69

dec_label_pc_139e:                                ; preds = %dec_label_pc_138f
  %11 = zext i32 %1 to i64, !insn.addr !70
  %sext = mul i64 %11, 72057594037927936
  %12 = ashr exact i64 %sext, 56, !insn.addr !70
  %13 = call i64 @__readfsqword(i64 40), !insn.addr !71
  %14 = icmp eq i64 %3, %13, !insn.addr !71
  store i64 %12, i64* %rax.1.reg2mem, !insn.addr !72
  br i1 %14, label %dec_label_pc_13be, label %dec_label_pc_13b9, !insn.addr !72

dec_label_pc_13b9:                                ; preds = %dec_label_pc_139e
  call void @__stack_chk_fail(), !insn.addr !73
  store i64 ptrtoint (i32* @1 to i64), i64* %rax.1.reg2mem, !insn.addr !73
  br label %dec_label_pc_13be, !insn.addr !73

dec_label_pc_13be:                                ; preds = %dec_label_pc_13b9, %dec_label_pc_139e
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %15 = trunc i64 %rax.1.reload to i32, !insn.addr !74
  ret i32 %15, !insn.addr !74

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 2, 0, 1 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
}

define i32 @vla_stack(i32 %n) local_unnamed_addr {
dec_label_pc_13c6:
  %rax.2.reg2mem = alloca i32, !insn.addr !75
  %rax.1.reg2mem = alloca i32, !insn.addr !75
  %rax.0.reg2mem = alloca i64, !insn.addr !75
  %stack_var_-24 = alloca i64, align 8
  %0 = add i32 %n, -1, !insn.addr !76
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !77
  %2 = icmp ugt i32 %0, ptrtoint (i32* @global_var_3e7 to i32)
  store i32 -1, i32* %rax.1.reg2mem, !insn.addr !78
  br i1 %2, label %dec_label_pc_1452, label %dec_label_pc_13ef, !insn.addr !78

dec_label_pc_13ef:                                ; preds = %dec_label_pc_13c6
  %3 = sext i32 %n to i64
  %4 = ptrtoint i64* %stack_var_-24 to i64, !insn.addr !79
  %5 = mul i64 %3, 4, !insn.addr !80
  %6 = add nsw i64 %5, 15, !insn.addr !80
  %7 = and i64 %6, -4096, !insn.addr !81
  %8 = sub i64 %4, %7, !insn.addr !82
  %9 = and i64 %6, 4080, !insn.addr !83
  %10 = sub i64 %8, %9, !insn.addr !84
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !85
  br label %dec_label_pc_143d, !insn.addr !85

dec_label_pc_143d:                                ; preds = %dec_label_pc_143d, %dec_label_pc_13ef
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %.tr = trunc i64 %rax.0.reload to i32
  %11 = mul i32 %.tr, 2, !insn.addr !86
  %12 = mul i64 %rax.0.reload, 4, !insn.addr !87
  %13 = add i64 %12, %10, !insn.addr !87
  %14 = inttoptr i64 %13 to i32*, !insn.addr !87
  store i32 %11, i32* %14, align 4, !insn.addr !87
  %15 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !88
  %16 = icmp slt i64 %15, %3, !insn.addr !89
  store i64 %15, i64* %rax.0.reg2mem, !insn.addr !89
  br i1 %16, label %dec_label_pc_143d, label %dec_label_pc_144a, !insn.addr !89

dec_label_pc_144a:                                ; preds = %dec_label_pc_143d
  %17 = ashr i32 %n, 1, !insn.addr !90
  %18 = sext i32 %17 to i64, !insn.addr !91
  %19 = mul i64 %18, 4, !insn.addr !92
  %20 = add i64 %10, %19, !insn.addr !92
  %21 = inttoptr i64 %20 to i32*, !insn.addr !92
  %22 = load i32, i32* %21, align 4, !insn.addr !92
  store i32 %22, i32* %rax.1.reg2mem, !insn.addr !92
  br label %dec_label_pc_1452, !insn.addr !92

dec_label_pc_1452:                                ; preds = %dec_label_pc_13c6, %dec_label_pc_144a
  %rax.1.reload = load i32, i32* %rax.1.reg2mem
  %23 = call i64 @__readfsqword(i64 40), !insn.addr !93
  %24 = icmp eq i64 %1, %23, !insn.addr !93
  store i32 %rax.1.reload, i32* %rax.2.reg2mem, !insn.addr !94
  br i1 %24, label %dec_label_pc_1466, label %dec_label_pc_1461, !insn.addr !94

dec_label_pc_1461:                                ; preds = %dec_label_pc_1452
  call void @__stack_chk_fail(), !insn.addr !95
  store i32 ptrtoint (i32* @1 to i32), i32* %rax.2.reg2mem, !insn.addr !95
  br label %dec_label_pc_1466, !insn.addr !95

dec_label_pc_1466:                                ; preds = %dec_label_pc_1461, %dec_label_pc_1452
  %rax.2.reload = load i32, i32* %rax.2.reg2mem
  ret i32 %rax.2.reload, !insn.addr !96

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 2, 0 }
  uselistorder i64 %10, { 1, 0 }
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32 %n, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1452, { 1, 0 }
}

define i32 @alloca_usage(i32 %n) local_unnamed_addr {
dec_label_pc_1468:
  %rax.2.reg2mem = alloca i32, !insn.addr !97
  %rax.1.reg2mem = alloca i32, !insn.addr !97
  %rax.0.reg2mem = alloca i64, !insn.addr !97
  %stack_var_-24 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !98
  %1 = icmp slt i32 %n, 1
  store i32 -1, i32* %rax.1.reg2mem, !insn.addr !99
  br i1 %1, label %dec_label_pc_14f3, label %dec_label_pc_148a, !insn.addr !99

dec_label_pc_148a:                                ; preds = %dec_label_pc_1468
  %2 = sext i32 %n to i64
  %3 = ptrtoint i64* %stack_var_-24 to i64, !insn.addr !100
  %4 = mul i64 %2, 4, !insn.addr !101
  %5 = add nsw i64 %4, 23, !insn.addr !101
  %6 = and i64 %5, -4096, !insn.addr !102
  %7 = and i64 %5, 4080, !insn.addr !103
  %8 = sub nsw i64 15, %7, !insn.addr !104
  %9 = sub nsw i64 %8, %6, !insn.addr !105
  %10 = add i64 %9, %3, !insn.addr !106
  %11 = and i64 %10, -16, !insn.addr !107
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !107
  br label %dec_label_pc_14de, !insn.addr !107

dec_label_pc_14de:                                ; preds = %dec_label_pc_14de, %dec_label_pc_148a
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %12 = trunc i64 %rax.0.reload to i32
  %13 = mul i32 %12, 3, !insn.addr !108
  %14 = mul i64 %rax.0.reload, 4, !insn.addr !109
  %15 = add i64 %14, %11, !insn.addr !109
  %16 = inttoptr i64 %15 to i32*, !insn.addr !109
  store i32 %13, i32* %16, align 4, !insn.addr !109
  %17 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !110
  %exitcond = icmp eq i64 %17, %2
  store i64 %17, i64* %rax.0.reg2mem, !insn.addr !111
  br i1 %exitcond, label %dec_label_pc_14eb, label %dec_label_pc_14de, !insn.addr !111

dec_label_pc_14eb:                                ; preds = %dec_label_pc_14de
  %18 = ashr i32 %n, 1, !insn.addr !112
  %19 = sext i32 %18 to i64, !insn.addr !113
  %20 = mul i64 %19, 4, !insn.addr !114
  %21 = add i64 %11, %20, !insn.addr !114
  %22 = inttoptr i64 %21 to i32*, !insn.addr !114
  %23 = load i32, i32* %22, align 4, !insn.addr !114
  store i32 %23, i32* %rax.1.reg2mem, !insn.addr !114
  br label %dec_label_pc_14f3, !insn.addr !114

dec_label_pc_14f3:                                ; preds = %dec_label_pc_14eb, %dec_label_pc_1468
  %rax.1.reload = load i32, i32* %rax.1.reg2mem
  %24 = call i64 @__readfsqword(i64 40), !insn.addr !115
  %25 = icmp eq i64 %0, %24, !insn.addr !115
  store i32 %rax.1.reload, i32* %rax.2.reg2mem, !insn.addr !116
  br i1 %25, label %dec_label_pc_1507, label %dec_label_pc_1502, !insn.addr !116

dec_label_pc_1502:                                ; preds = %dec_label_pc_14f3
  call void @__stack_chk_fail(), !insn.addr !117
  store i32 ptrtoint (i32* @1 to i32), i32* %rax.2.reg2mem, !insn.addr !117
  br label %dec_label_pc_1507, !insn.addr !117

dec_label_pc_1507:                                ; preds = %dec_label_pc_1502, %dec_label_pc_14f3
  %rax.2.reload = load i32, i32* %rax.2.reg2mem
  ret i32 %rax.2.reload, !insn.addr !118

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 2, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32 %n, { 0, 2, 1 }
}

define i64 @stack_alias() local_unnamed_addr {
dec_label_pc_1509:
  ret i64 20, !insn.addr !119
}

define void @test_stack_memory() local_unnamed_addr {
dec_label_pc_1513:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3004 to i8*)), !insn.addr !120
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_3022, i64 0, i64 0), i64 20), !insn.addr !121
  %2 = call i32 @local_array(i32 2), !insn.addr !122
  %3 = zext i32 %2 to i64, !insn.addr !123
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_303e, i64 0, i64 0), i64 %3), !insn.addr !124
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_305b, i64 0, i64 0), i64 15), !insn.addr !125
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3079, i64 0, i64 0), i64 42), !insn.addr !126
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_309b, i64 0, i64 0), i64 2), !insn.addr !127
  %8 = call i32 @large_stack_frame(), !insn.addr !128
  %9 = zext i32 %8 to i64, !insn.addr !129
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_30bd, i64 0, i64 0), i64 %9), !insn.addr !130
  %11 = call i32 @vla_stack(i32 10), !insn.addr !131
  %12 = zext i32 %11 to i64, !insn.addr !132
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_30e0, i64 0, i64 0), i64 %12), !insn.addr !133
  %14 = call i32 @alloca_usage(i32 10), !insn.addr !134
  %15 = zext i32 %14 to i64, !insn.addr !135
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_30fb, i64 0, i64 0), i64 %15), !insn.addr !136
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3119, i64 0, i64 0), i64 20), !insn.addr !137
  ret void, !insn.addr !137

; uselistorder directives
  uselistorder i64 15, { 2, 0, 1 }
}

define i32 @heap_basic(i32 %n) local_unnamed_addr {
dec_label_pc_1616:
  %r12.0.reg2mem = alloca i32, !insn.addr !138
  %storemerge1.reg2mem = alloca i64, !insn.addr !138
  %0 = mul i32 %n, 4, !insn.addr !139
  %1 = call i64* @malloc(i32 %0), !insn.addr !140
  %2 = icmp eq i64* %1, null, !insn.addr !141
  store i32 -1, i32* %r12.0.reg2mem, !insn.addr !142
  br i1 %2, label %dec_label_pc_165f, label %dec_label_pc_163b.preheader, !insn.addr !142

dec_label_pc_163b.preheader:                      ; preds = %dec_label_pc_1616
  %3 = sext i32 %n to i64, !insn.addr !143
  %4 = ptrtoint i64* %1 to i64, !insn.addr !140
  %5 = icmp sgt i32 %n, 0, !insn.addr !144
  store i64 0, i64* %storemerge1.reg2mem, !insn.addr !144
  br i1 %5, label %dec_label_pc_163f, label %dec_label_pc_164a, !insn.addr !144

dec_label_pc_163f:                                ; preds = %dec_label_pc_163b.preheader, %dec_label_pc_163f
  %storemerge1.reload = load i64, i64* %storemerge1.reg2mem
  %.tr = trunc i64 %storemerge1.reload to i32
  %6 = mul i32 %.tr, 2, !insn.addr !145
  %7 = mul i64 %storemerge1.reload, 4, !insn.addr !146
  %8 = add i64 %7, %4, !insn.addr !146
  %9 = inttoptr i64 %8 to i32*, !insn.addr !146
  store i32 %6, i32* %9, align 4, !insn.addr !146
  %10 = add nuw nsw i64 %storemerge1.reload, 1, !insn.addr !147
  %exitcond = icmp eq i64 %10, %3
  store i64 %10, i64* %storemerge1.reg2mem, !insn.addr !144
  br i1 %exitcond, label %dec_label_pc_164a, label %dec_label_pc_163f, !insn.addr !144

dec_label_pc_164a:                                ; preds = %dec_label_pc_163f, %dec_label_pc_163b.preheader
  %11 = ashr i32 %n, 31, !insn.addr !148
  %12 = and i64 %3, 4294967295, !insn.addr !149
  %13 = zext i32 %11 to i64, !insn.addr !149
  %14 = mul i64 %13, 4294967296, !insn.addr !149
  %15 = or i64 %14, %12, !insn.addr !149
  %16 = sdiv i64 %15, 2, !insn.addr !149
  %sext = mul i64 %16, 4294967296
  %17 = ashr exact i64 %sext, 30, !insn.addr !150
  %18 = add i64 %17, %4, !insn.addr !150
  %19 = inttoptr i64 %18 to i32*, !insn.addr !150
  %20 = load i32, i32* %19, align 4, !insn.addr !150
  call void @free(i64* nonnull %1), !insn.addr !151
  store i32 %20, i32* %r12.0.reg2mem, !insn.addr !151
  br label %dec_label_pc_165f, !insn.addr !151

dec_label_pc_165f:                                ; preds = %dec_label_pc_164a, %dec_label_pc_1616
  %r12.0.reload = load i32, i32* %r12.0.reg2mem
  ret i32 %r12.0.reload, !insn.addr !152

; uselistorder directives
  uselistorder i64 %storemerge1.reload, { 0, 2, 1 }
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i64* %storemerge1.reg2mem, { 2, 0, 1 }
  uselistorder i32 %n, { 2, 1, 3, 0 }
  uselistorder label %dec_label_pc_163f, { 1, 0 }
}

define i32 @heap_calloc(i32 %n) local_unnamed_addr {
dec_label_pc_1667:
  %r12.1.reg2mem = alloca i32, !insn.addr !153
  %r12.0.lcssa.reg2mem = alloca i32, !insn.addr !153
  %r12.01.reg2mem = alloca i32, !insn.addr !153
  %storemerge2.reg2mem = alloca i64, !insn.addr !153
  %0 = call i64* @calloc(i32 %n, i32 4), !insn.addr !154
  %1 = icmp eq i64* %0, null, !insn.addr !155
  store i32 -1, i32* %r12.1.reg2mem, !insn.addr !156
  br i1 %1, label %dec_label_pc_16a2, label %dec_label_pc_1690.preheader, !insn.addr !156

dec_label_pc_1690.preheader:                      ; preds = %dec_label_pc_1667
  %2 = sext i32 %n to i64, !insn.addr !157
  %3 = ptrtoint i64* %0 to i64, !insn.addr !154
  %4 = icmp sgt i32 %n, 0, !insn.addr !158
  store i64 0, i64* %storemerge2.reg2mem, !insn.addr !158
  store i32 0, i32* %r12.01.reg2mem, !insn.addr !158
  store i32 0, i32* %r12.0.lcssa.reg2mem, !insn.addr !158
  br i1 %4, label %dec_label_pc_1694, label %dec_label_pc_169d, !insn.addr !158

dec_label_pc_1694:                                ; preds = %dec_label_pc_1690.preheader, %dec_label_pc_1694
  %r12.01.reload = load i32, i32* %r12.01.reg2mem
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %5 = mul i64 %storemerge2.reload, 4, !insn.addr !159
  %6 = add i64 %5, %3, !insn.addr !159
  %7 = inttoptr i64 %6 to i32*, !insn.addr !159
  %8 = load i32, i32* %7, align 4, !insn.addr !159
  %9 = add i32 %8, %r12.01.reload, !insn.addr !159
  %10 = add nuw nsw i64 %storemerge2.reload, 1, !insn.addr !160
  %exitcond = icmp eq i64 %10, %2
  store i64 %10, i64* %storemerge2.reg2mem, !insn.addr !158
  store i32 %9, i32* %r12.01.reg2mem, !insn.addr !158
  store i32 %9, i32* %r12.0.lcssa.reg2mem, !insn.addr !158
  br i1 %exitcond, label %dec_label_pc_169d, label %dec_label_pc_1694, !insn.addr !158

dec_label_pc_169d:                                ; preds = %dec_label_pc_1694, %dec_label_pc_1690.preheader
  %r12.0.lcssa.reload = load i32, i32* %r12.0.lcssa.reg2mem
  call void @free(i64* nonnull %0), !insn.addr !161
  store i32 %r12.0.lcssa.reload, i32* %r12.1.reg2mem, !insn.addr !161
  br label %dec_label_pc_16a2, !insn.addr !161

dec_label_pc_16a2:                                ; preds = %dec_label_pc_169d, %dec_label_pc_1667
  %r12.1.reload = load i32, i32* %r12.1.reg2mem
  ret i32 %r12.1.reload, !insn.addr !162

; uselistorder directives
  uselistorder i64* %0, { 0, 2, 1 }
  uselistorder i64* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r12.01.reg2mem, { 2, 0, 1 }
  uselistorder i32 %n, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1694, { 1, 0 }
}

define i32 @heap_realloc() local_unnamed_addr {
dec_label_pc_16aa:
  %r12.0.reg2mem = alloca i32, !insn.addr !163
  %0 = call i64* @malloc(i32 20), !insn.addr !164
  %1 = icmp eq i64* %0, null, !insn.addr !165
  store i32 -1, i32* %r12.0.reg2mem, !insn.addr !166
  br i1 %1, label %dec_label_pc_1728, label %dec_label_pc_16c5, !insn.addr !166

dec_label_pc_16c5:                                ; preds = %dec_label_pc_16aa
  %2 = ptrtoint i64* %0 to i64, !insn.addr !164
  store i64 8589934593, i64* %0, align 8, !insn.addr !167
  %3 = add i64 %2, 8, !insn.addr !168
  %4 = inttoptr i64 %3 to i64*, !insn.addr !168
  store i64 17179869187, i64* %4, align 8, !insn.addr !168
  %5 = add i64 %2, 16, !insn.addr !169
  %6 = inttoptr i64 %5 to i32*, !insn.addr !169
  store i32 5, i32* %6, align 4, !insn.addr !169
  %7 = call i64* @realloc(i64* nonnull %0, i32 40), !insn.addr !170
  %8 = icmp eq i64* %7, null, !insn.addr !171
  br i1 %8, label %dec_label_pc_171a, label %dec_label_pc_1700, !insn.addr !172

dec_label_pc_1700:                                ; preds = %dec_label_pc_16c5
  %9 = ptrtoint i64* %7 to i64, !insn.addr !170
  %10 = add i64 %9, 8, !insn.addr !173
  %11 = inttoptr i64 %10 to i32*, !insn.addr !173
  %12 = load i32, i32* %11, align 4, !insn.addr !173
  %13 = icmp eq i32 %12, 3, !insn.addr !173
  %14 = icmp eq i1 %13, false, !insn.addr !174
  call void @free(i64* nonnull %7), !insn.addr !175
  %phitmp = select i1 %14, i32 -3, i32 50, !insn.addr !174
  store i32 %phitmp, i32* %r12.0.reg2mem, !insn.addr !176
  br label %dec_label_pc_1728, !insn.addr !176

dec_label_pc_171a:                                ; preds = %dec_label_pc_16c5
  call void @free(i64* nonnull %0), !insn.addr !177
  store i32 -2, i32* %r12.0.reg2mem, !insn.addr !177
  br label %dec_label_pc_1728, !insn.addr !177

dec_label_pc_1728:                                ; preds = %dec_label_pc_171a, %dec_label_pc_1700, %dec_label_pc_16aa
  %r12.0.reload = load i32, i32* %r12.0.reg2mem
  ret i32 %r12.0.reload, !insn.addr !178

; uselistorder directives
  uselistorder i64* %7, { 0, 2, 1 }
  uselistorder i64* %0, { 0, 1, 2, 4, 3 }
  uselistorder i32* %r12.0.reg2mem, { 0, 2, 1, 3 }
}

define i32 @heap_array(i32 %n) local_unnamed_addr {
dec_label_pc_1730:
  %r12.0.reg2mem = alloca i32, !insn.addr !179
  %storemerge1.reg2mem = alloca i64, !insn.addr !179
  %0 = mul i32 %n, 4, !insn.addr !180
  %1 = call i64* @malloc(i32 %0), !insn.addr !181
  %2 = icmp eq i64* %1, null, !insn.addr !182
  store i32 -1, i32* %r12.0.reg2mem, !insn.addr !183
  br i1 %2, label %dec_label_pc_1779, label %dec_label_pc_1755.preheader, !insn.addr !183

dec_label_pc_1755.preheader:                      ; preds = %dec_label_pc_1730
  %3 = sext i32 %n to i64, !insn.addr !184
  %4 = ptrtoint i64* %1 to i64, !insn.addr !181
  %5 = icmp sgt i32 %n, 0, !insn.addr !185
  store i64 0, i64* %storemerge1.reg2mem, !insn.addr !185
  br i1 %5, label %dec_label_pc_1759, label %dec_label_pc_1764, !insn.addr !185

dec_label_pc_1759:                                ; preds = %dec_label_pc_1755.preheader, %dec_label_pc_1759
  %storemerge1.reload = load i64, i64* %storemerge1.reg2mem
  %6 = trunc i64 %storemerge1.reload to i32
  %7 = mul i32 %6, 3, !insn.addr !186
  %8 = mul i64 %storemerge1.reload, 4, !insn.addr !187
  %9 = add i64 %8, %4, !insn.addr !187
  %10 = inttoptr i64 %9 to i32*, !insn.addr !187
  store i32 %7, i32* %10, align 4, !insn.addr !187
  %11 = add nuw nsw i64 %storemerge1.reload, 1, !insn.addr !188
  %exitcond = icmp eq i64 %11, %3
  store i64 %11, i64* %storemerge1.reg2mem, !insn.addr !185
  br i1 %exitcond, label %dec_label_pc_1764, label %dec_label_pc_1759, !insn.addr !185

dec_label_pc_1764:                                ; preds = %dec_label_pc_1759, %dec_label_pc_1755.preheader
  %12 = ashr i32 %n, 31, !insn.addr !189
  %13 = and i64 %3, 4294967295, !insn.addr !190
  %14 = zext i32 %12 to i64, !insn.addr !190
  %15 = mul i64 %14, 4294967296, !insn.addr !190
  %16 = or i64 %15, %13, !insn.addr !190
  %17 = sdiv i64 %16, 2, !insn.addr !190
  %sext = mul i64 %17, 4294967296
  %18 = ashr exact i64 %sext, 30, !insn.addr !191
  %19 = add i64 %18, %4, !insn.addr !191
  %20 = inttoptr i64 %19 to i32*, !insn.addr !191
  %21 = load i32, i32* %20, align 4, !insn.addr !191
  call void @free(i64* nonnull %1), !insn.addr !192
  store i32 %21, i32* %r12.0.reg2mem, !insn.addr !192
  br label %dec_label_pc_1779, !insn.addr !192

dec_label_pc_1779:                                ; preds = %dec_label_pc_1764, %dec_label_pc_1730
  %r12.0.reload = load i32, i32* %r12.0.reg2mem
  ret i32 %r12.0.reload, !insn.addr !193

; uselistorder directives
  uselistorder i64 %storemerge1.reload, { 0, 2, 1 }
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i64* %storemerge1.reg2mem, { 2, 0, 1 }
  uselistorder i32 %n, { 2, 1, 3, 0 }
  uselistorder label %dec_label_pc_1759, { 1, 0 }
}

define i32 @heap_struct(i32 %x) local_unnamed_addr {
dec_label_pc_1781:
  %r12.0.reg2mem = alloca i32, !insn.addr !194
  %0 = call i64* @malloc(i32 8), !insn.addr !195
  %1 = icmp eq i64* %0, null, !insn.addr !196
  store i32 -1, i32* %r12.0.reg2mem, !insn.addr !197
  br i1 %1, label %dec_label_pc_17aa, label %dec_label_pc_179e, !insn.addr !197

dec_label_pc_179e:                                ; preds = %dec_label_pc_1781
  %2 = mul i32 %x, 3
  call void @free(i64* nonnull %0), !insn.addr !198
  store i32 %2, i32* %r12.0.reg2mem, !insn.addr !198
  br label %dec_label_pc_17aa, !insn.addr !198

dec_label_pc_17aa:                                ; preds = %dec_label_pc_179e, %dec_label_pc_1781
  %r12.0.reload = load i32, i32* %r12.0.reg2mem
  ret i32 %r12.0.reload, !insn.addr !199
}

define i32 @heap_nested(i32** %head) local_unnamed_addr {
dec_label_pc_17b2:
  %rax.0.reg2mem = alloca i32, !insn.addr !200
  %0 = call i64* @malloc(i32 16), !insn.addr !201
  %1 = ptrtoint i64* %0 to i64, !insn.addr !201
  %2 = bitcast i32** %head to i64*, !insn.addr !202
  store i64 %1, i64* %2, align 8, !insn.addr !202
  %3 = icmp eq i64* %0, null, !insn.addr !203
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !204
  br i1 %3, label %dec_label_pc_180d, label %dec_label_pc_17d4, !insn.addr !204

dec_label_pc_17d4:                                ; preds = %dec_label_pc_17b2
  %4 = bitcast i64* %0 to i32*, !insn.addr !205
  store i32 10, i32* %4, align 4, !insn.addr !205
  %5 = call i64* @malloc(i32 16), !insn.addr !206
  %6 = ptrtoint i64* %5 to i64, !insn.addr !206
  %7 = add i64 %1, 8, !insn.addr !207
  %8 = inttoptr i64 %7 to i64*, !insn.addr !207
  store i64 %6, i64* %8, align 8, !insn.addr !207
  %9 = icmp eq i64* %5, null, !insn.addr !208
  %10 = icmp eq i1 %9, false, !insn.addr !209
  br i1 %10, label %dec_label_pc_17fd, label %dec_label_pc_17ee, !insn.addr !209

dec_label_pc_17ee:                                ; preds = %dec_label_pc_17d4
  call void @free(i64* nonnull %0), !insn.addr !210
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !211
  br label %dec_label_pc_180d, !insn.addr !211

dec_label_pc_17fd:                                ; preds = %dec_label_pc_17d4
  %11 = bitcast i64* %5 to i32*, !insn.addr !212
  store i32 20, i32* %11, align 4, !insn.addr !212
  %12 = add i64 %6, 8, !insn.addr !213
  %13 = inttoptr i64 %12 to i64*, !insn.addr !213
  store i64 0, i64* %13, align 8, !insn.addr !213
  store i32 0, i32* %rax.0.reg2mem, !insn.addr !214
  br label %dec_label_pc_180d, !insn.addr !214

dec_label_pc_180d:                                ; preds = %dec_label_pc_17fd, %dec_label_pc_17ee, %dec_label_pc_17b2
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !215

; uselistorder directives
  uselistorder i32* %rax.0.reg2mem, { 0, 2, 1, 3 }
}

define i32 @linked_list_heap() local_unnamed_addr {
dec_label_pc_1811:
  %r12.2.reg2mem = alloca i32, !insn.addr !216
  %rbp.3.reg2mem = alloca i64, !insn.addr !216
  %r12.1.reg2mem = alloca i32, !insn.addr !216
  %rax.1.reg2mem = alloca i64, !insn.addr !216
  %rbp.2.reg2mem = alloca i64, !insn.addr !216
  %rbp.13.reg2mem = alloca i64, !insn.addr !216
  %r12.0.reg2mem = alloca i64, !insn.addr !216
  %rbp.0.reg2mem = alloca i64, !insn.addr !216
  %rax.0.reg2mem = alloca i64, !insn.addr !216
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !217
  store i64 0, i64* %rbp.0.reg2mem, !insn.addr !217
  store i64 0, i64* %r12.0.reg2mem, !insn.addr !217
  br label %dec_label_pc_1820, !insn.addr !217

dec_label_pc_1820:                                ; preds = %dec_label_pc_1867, %dec_label_pc_1811
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %0 = call i64* @malloc(i32 16), !insn.addr !218
  %1 = icmp eq i64* %0, null, !insn.addr !219
  %2 = icmp eq i1 %1, false, !insn.addr !220
  br i1 %2, label %dec_label_pc_184e, label %dec_label_pc_1832.preheader, !insn.addr !220

dec_label_pc_1832.preheader:                      ; preds = %dec_label_pc_1820
  %3 = icmp eq i64 %rbp.0.reload, 0, !insn.addr !221
  store i64 %rbp.0.reload, i64* %rbp.13.reg2mem, !insn.addr !222
  store i32 -1, i32* %r12.2.reg2mem, !insn.addr !222
  br i1 %3, label %dec_label_pc_1894, label %dec_label_pc_1837, !insn.addr !222

dec_label_pc_1837:                                ; preds = %dec_label_pc_1832.preheader, %dec_label_pc_1837
  %rbp.13.reload = load i64, i64* %rbp.13.reg2mem
  %4 = add i64 %rbp.13.reload, 8, !insn.addr !223
  %5 = inttoptr i64 %4 to i64*, !insn.addr !223
  %6 = load i64, i64* %5, align 8, !insn.addr !223
  %7 = inttoptr i64 %rbp.13.reload to i64*, !insn.addr !224
  call void @free(i64* %7), !insn.addr !224
  %8 = icmp eq i64 %6, 0, !insn.addr !221
  store i64 %6, i64* %rbp.13.reg2mem, !insn.addr !222
  store i32 -1, i32* %r12.2.reg2mem, !insn.addr !222
  br i1 %8, label %dec_label_pc_1894, label %dec_label_pc_1837, !insn.addr !222

dec_label_pc_184e:                                ; preds = %dec_label_pc_1820
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %9 = ptrtoint i64* %0 to i64, !insn.addr !218
  %10 = trunc i64 %r12.0.reload to i32, !insn.addr !225
  %11 = bitcast i64* %0 to i32*, !insn.addr !225
  store i32 %10, i32* %11, align 4, !insn.addr !225
  %12 = add i64 %9, 8, !insn.addr !226
  %13 = inttoptr i64 %12 to i64*, !insn.addr !226
  store i64 0, i64* %13, align 8, !insn.addr !226
  %14 = icmp eq i64 %rbp.0.reload, 0, !insn.addr !227
  store i64 %9, i64* %rbp.2.reg2mem, !insn.addr !228
  br i1 %14, label %dec_label_pc_1867, label %dec_label_pc_185e, !insn.addr !228

dec_label_pc_185e:                                ; preds = %dec_label_pc_184e
  %15 = add i64 %rax.0.reload, 8, !insn.addr !229
  %16 = inttoptr i64 %15 to i64*, !insn.addr !229
  store i64 %9, i64* %16, align 8, !insn.addr !229
  store i64 %rbp.0.reload, i64* %rbp.2.reg2mem, !insn.addr !230
  br label %dec_label_pc_1867, !insn.addr !230

dec_label_pc_1867:                                ; preds = %dec_label_pc_184e, %dec_label_pc_185e
  %rbp.2.reload = load i64, i64* %rbp.2.reg2mem
  %17 = add nuw nsw i64 %r12.0.reload, 10, !insn.addr !231
  %18 = and i64 %17, 4294967295, !insn.addr !231
  %19 = trunc i64 %17 to i32, !insn.addr !232
  %20 = icmp eq i32 %19, 50, !insn.addr !232
  %21 = icmp eq i1 %20, false, !insn.addr !233
  store i64 %9, i64* %rax.0.reg2mem, !insn.addr !233
  store i64 %rbp.2.reload, i64* %rbp.0.reg2mem, !insn.addr !233
  store i64 %18, i64* %r12.0.reg2mem, !insn.addr !233
  store i64 %rbp.2.reload, i64* %rax.1.reg2mem, !insn.addr !233
  store i32 0, i32* %r12.1.reg2mem, !insn.addr !233
  br i1 %21, label %dec_label_pc_1820, label %dec_label_pc_1877, !insn.addr !233

dec_label_pc_1877:                                ; preds = %dec_label_pc_1867, %dec_label_pc_1877
  %r12.1.reload = load i32, i32* %r12.1.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %22 = inttoptr i64 %rax.1.reload to i32*, !insn.addr !234
  %23 = load i32, i32* %22, align 4, !insn.addr !234
  %24 = add i32 %23, %r12.1.reload, !insn.addr !234
  %25 = add i64 %rax.1.reload, 8, !insn.addr !235
  %26 = inttoptr i64 %25 to i64*, !insn.addr !235
  %27 = load i64, i64* %26, align 8, !insn.addr !235
  %28 = icmp eq i64 %27, 0, !insn.addr !236
  %29 = icmp eq i1 %28, false, !insn.addr !237
  store i64 %27, i64* %rax.1.reg2mem, !insn.addr !237
  store i32 %24, i32* %r12.1.reg2mem, !insn.addr !237
  store i64 %rbp.2.reload, i64* %rbp.3.reg2mem, !insn.addr !237
  br i1 %29, label %dec_label_pc_1877, label %dec_label_pc_1883, !insn.addr !237

dec_label_pc_1883:                                ; preds = %dec_label_pc_1877, %dec_label_pc_1883
  %rbp.3.reload = load i64, i64* %rbp.3.reg2mem
  %30 = add i64 %rbp.3.reload, 8, !insn.addr !238
  %31 = inttoptr i64 %30 to i64*, !insn.addr !238
  %32 = load i64, i64* %31, align 8, !insn.addr !238
  %33 = inttoptr i64 %rbp.3.reload to i64*, !insn.addr !239
  call void @free(i64* %33), !insn.addr !239
  %34 = icmp eq i64 %32, 0, !insn.addr !240
  %35 = icmp eq i1 %34, false, !insn.addr !241
  store i64 %32, i64* %rbp.3.reg2mem, !insn.addr !241
  store i32 %24, i32* %r12.2.reg2mem, !insn.addr !241
  br i1 %35, label %dec_label_pc_1883, label %dec_label_pc_1894, !insn.addr !241

dec_label_pc_1894:                                ; preds = %dec_label_pc_1837, %dec_label_pc_1883, %dec_label_pc_1832.preheader
  %r12.2.reload = load i32, i32* %r12.2.reg2mem
  ret i32 %r12.2.reload, !insn.addr !242

; uselistorder directives
  uselistorder i64 %rbp.3.reload, { 1, 0 }
  uselistorder i64 %9, { 1, 2, 0, 3 }
  uselistorder i64 %r12.0.reload, { 1, 0 }
  uselistorder i64* %0, { 0, 2, 1 }
  uselistorder i64 %rbp.0.reload, { 0, 2, 1, 3 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbp.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r12.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbp.13.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbp.2.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r12.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbp.3.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r12.2.reg2mem, { 0, 2, 1, 3 }
  uselistorder label %dec_label_pc_1894, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1883, { 1, 0 }
  uselistorder label %dec_label_pc_1877, { 1, 0 }
  uselistorder label %dec_label_pc_1867, { 1, 0 }
  uselistorder label %dec_label_pc_1837, { 1, 0 }
}

define i32* @create_tree_node(i32 %data) local_unnamed_addr {
dec_label_pc_189c:
  %0 = call i64* @malloc(i32 24), !insn.addr !243
  %1 = icmp eq i64* %0, null, !insn.addr !244
  %.pre = bitcast i64* %0 to i32*
  br i1 %1, label %dec_label_pc_18c4, label %dec_label_pc_18b2, !insn.addr !245

dec_label_pc_18b2:                                ; preds = %dec_label_pc_189c
  %2 = ptrtoint i64* %0 to i64, !insn.addr !243
  store i32 %data, i32* %.pre, align 4, !insn.addr !246
  %3 = add i64 %2, 8, !insn.addr !247
  %4 = inttoptr i64 %3 to i64*, !insn.addr !247
  store i64 0, i64* %4, align 8, !insn.addr !247
  %5 = add i64 %2, 16, !insn.addr !248
  %6 = inttoptr i64 %5 to i64*, !insn.addr !248
  store i64 0, i64* %6, align 8, !insn.addr !248
  br label %dec_label_pc_18c4, !insn.addr !248

dec_label_pc_18c4:                                ; preds = %dec_label_pc_189c, %dec_label_pc_18b2
  ret i32* %.pre, !insn.addr !249

; uselistorder directives
  uselistorder i64* %0, { 2, 0, 1 }
  uselistorder label %dec_label_pc_18c4, { 1, 0 }
}

define i32 @tree_heap_traversal() local_unnamed_addr {
dec_label_pc_18c6:
  %r12.0.reg2mem = alloca i32, !insn.addr !250
  %.reg2mem = alloca i64, !insn.addr !250
  %0 = call i32* @create_tree_node(i32 10), !insn.addr !251
  %1 = icmp eq i32* %0, null, !insn.addr !252
  store i32 -1, i32* %r12.0.reg2mem, !insn.addr !253
  br i1 %1, label %dec_label_pc_1951, label %dec_label_pc_18e1, !insn.addr !253

dec_label_pc_18e1:                                ; preds = %dec_label_pc_18c6
  %2 = ptrtoint i32* %0 to i64, !insn.addr !251
  %3 = call i32* @create_tree_node(i32 20), !insn.addr !254
  %4 = ptrtoint i32* %3 to i64, !insn.addr !254
  %5 = add i64 %2, 8, !insn.addr !255
  %6 = inttoptr i64 %5 to i64*, !insn.addr !255
  store i64 %4, i64* %6, align 8, !insn.addr !255
  %7 = call i32* @create_tree_node(i32 30), !insn.addr !256
  %8 = ptrtoint i32* %7 to i64, !insn.addr !256
  %9 = load i64, i64* %6, align 8, !insn.addr !257
  %10 = add i64 %2, 16, !insn.addr !258
  %11 = inttoptr i64 %10 to i64*, !insn.addr !258
  store i64 %8, i64* %11, align 8, !insn.addr !258
  %12 = icmp eq i64 %9, 0, !insn.addr !259
  store i64 %8, i64* %.reg2mem, !insn.addr !260
  br i1 %12, label %dec_label_pc_1913, label %dec_label_pc_1909, !insn.addr !260

dec_label_pc_1909:                                ; preds = %dec_label_pc_18e1
  %13 = icmp eq i32* %7, null, !insn.addr !261
  %14 = icmp eq i1 %13, false, !insn.addr !262
  br i1 %14, label %dec_label_pc_1931, label %dec_label_pc_190e, !insn.addr !262

dec_label_pc_190e:                                ; preds = %dec_label_pc_1909
  %15 = inttoptr i64 %9 to i64*, !insn.addr !263
  call void @free(i64* %15), !insn.addr !263
  %.pr = load i64, i64* %11, align 8
  store i64 %.pr, i64* %.reg2mem, !insn.addr !263
  br label %dec_label_pc_1913, !insn.addr !263

dec_label_pc_1913:                                ; preds = %dec_label_pc_190e, %dec_label_pc_18e1
  %.reload = load i64, i64* %.reg2mem, !insn.addr !264
  %16 = icmp eq i64 %.reload, 0, !insn.addr !265
  br i1 %16, label %dec_label_pc_1921, label %dec_label_pc_191c, !insn.addr !266

dec_label_pc_191c:                                ; preds = %dec_label_pc_1913
  %17 = inttoptr i64 %.reload to i64*, !insn.addr !267
  call void @free(i64* %17), !insn.addr !267
  br label %dec_label_pc_1921, !insn.addr !267

dec_label_pc_1921:                                ; preds = %dec_label_pc_191c, %dec_label_pc_1913
  %18 = bitcast i32* %0 to i64*, !insn.addr !268
  call void @free(i64* %18), !insn.addr !268
  store i32 -2, i32* %r12.0.reg2mem, !insn.addr !269
  br label %dec_label_pc_1951, !insn.addr !269

dec_label_pc_1931:                                ; preds = %dec_label_pc_1909
  %19 = inttoptr i64 %9 to i32*, !insn.addr !270
  %20 = load i32, i32* %19, align 4, !insn.addr !270
  %21 = load i32, i32* %0, align 4, !insn.addr !271
  %22 = add i32 %21, %20, !insn.addr !271
  %23 = load i32, i32* %7, align 4, !insn.addr !272
  %24 = add i32 %22, %23, !insn.addr !272
  %25 = inttoptr i64 %9 to i64*, !insn.addr !273
  call void @free(i64* %25), !insn.addr !273
  %26 = load i64, i64* %11, align 8, !insn.addr !274
  %27 = inttoptr i64 %26 to i64*, !insn.addr !275
  call void @free(i64* %27), !insn.addr !275
  %28 = bitcast i32* %0 to i64*, !insn.addr !276
  call void @free(i64* %28), !insn.addr !276
  store i32 %24, i32* %r12.0.reg2mem, !insn.addr !276
  br label %dec_label_pc_1951, !insn.addr !276

dec_label_pc_1951:                                ; preds = %dec_label_pc_1931, %dec_label_pc_1921, %dec_label_pc_18c6
  %r12.0.reload = load i32, i32* %r12.0.reg2mem
  ret i32 %r12.0.reload, !insn.addr !277

; uselistorder directives
  uselistorder i64* %11, { 1, 0, 2 }
  uselistorder i32* %0, { 0, 1, 2, 4, 3 }
  uselistorder i64* %.reg2mem, { 0, 2, 1 }
  uselistorder i64 16, { 1, 0, 2 }
  uselistorder i32 20, { 0, 2, 1 }
  uselistorder i32* (i32)* @create_tree_node, { 2, 1, 0 }
}

define i32 @memory_leak(i32 %n) local_unnamed_addr {
dec_label_pc_1959:
  %storemerge.reg2mem = alloca i32, !insn.addr !278
  %rax.01.reg2mem = alloca i64, !insn.addr !278
  %0 = mul i32 %n, 4, !insn.addr !279
  %1 = call i64* @malloc(i32 %0), !insn.addr !280
  %2 = icmp eq i64* %1, null, !insn.addr !281
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !282
  br i1 %2, label %dec_label_pc_1997, label %dec_label_pc_1977.preheader, !insn.addr !282

dec_label_pc_1977.preheader:                      ; preds = %dec_label_pc_1959
  %3 = sext i32 %n to i64, !insn.addr !283
  %4 = ptrtoint i64* %1 to i64, !insn.addr !280
  %5 = icmp sgt i32 %n, 0, !insn.addr !284
  store i64 0, i64* %rax.01.reg2mem, !insn.addr !284
  br i1 %5, label %dec_label_pc_197b, label %dec_label_pc_1983, !insn.addr !284

dec_label_pc_197b:                                ; preds = %dec_label_pc_1977.preheader, %dec_label_pc_197b
  %rax.01.reload = load i64, i64* %rax.01.reg2mem
  %6 = trunc i64 %rax.01.reload to i32, !insn.addr !285
  %7 = mul i64 %rax.01.reload, 4, !insn.addr !285
  %8 = add i64 %7, %4, !insn.addr !285
  %9 = inttoptr i64 %8 to i32*, !insn.addr !285
  store i32 %6, i32* %9, align 4, !insn.addr !285
  %10 = add nuw nsw i64 %rax.01.reload, 1, !insn.addr !286
  %exitcond = icmp eq i64 %10, %3
  store i64 %10, i64* %rax.01.reg2mem, !insn.addr !284
  br i1 %exitcond, label %dec_label_pc_1983, label %dec_label_pc_197b, !insn.addr !284

dec_label_pc_1983:                                ; preds = %dec_label_pc_197b, %dec_label_pc_1977.preheader
  %11 = ashr i32 %n, 31, !insn.addr !287
  %12 = and i64 %3, 4294967295, !insn.addr !288
  %13 = zext i32 %11 to i64, !insn.addr !288
  %14 = mul i64 %13, 4294967296, !insn.addr !288
  %15 = or i64 %14, %12, !insn.addr !288
  %16 = sdiv i64 %15, 2, !insn.addr !288
  %sext = mul i64 %16, 4294967296
  %17 = ashr exact i64 %sext, 30, !insn.addr !289
  %18 = add i64 %17, %4, !insn.addr !289
  %19 = inttoptr i64 %18 to i32*, !insn.addr !289
  %20 = load i32, i32* %19, align 4, !insn.addr !289
  store i32 %20, i32* %storemerge.reg2mem, !insn.addr !290
  br label %dec_label_pc_1997, !insn.addr !290

dec_label_pc_1997:                                ; preds = %dec_label_pc_1959, %dec_label_pc_1983
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !291

; uselistorder directives
  uselistorder i64 %rax.01.reload, { 0, 2, 1 }
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64* %1, { 1, 0 }
  uselistorder i64* %rax.01.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %n, { 2, 1, 3, 0 }
  uselistorder label %dec_label_pc_1997, { 1, 0 }
  uselistorder label %dec_label_pc_197b, { 1, 0 }
}

define i32 @dangling_pointer() local_unnamed_addr {
dec_label_pc_1999:
  %rax.0.reg2mem = alloca i32, !insn.addr !292
  %0 = call i64* @malloc(i32 4), !insn.addr !293
  %1 = icmp eq i64* %0, null, !insn.addr !294
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !295
  br i1 %1, label %dec_label_pc_19d5, label %dec_label_pc_19b3, !insn.addr !295

dec_label_pc_19b3:                                ; preds = %dec_label_pc_1999
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_3136, i64 0, i64 0), i64 42), !insn.addr !296
  call void @free(i64* nonnull %0), !insn.addr !297
  %3 = bitcast i64* %0 to i32*, !insn.addr !298
  %4 = load i32, i32* %3, align 4, !insn.addr !298
  store i32 %4, i32* %rax.0.reg2mem, !insn.addr !298
  br label %dec_label_pc_19d5, !insn.addr !298

dec_label_pc_19d5:                                ; preds = %dec_label_pc_19b3, %dec_label_pc_1999
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !299

; uselistorder directives
  uselistorder i64 42, { 1, 2, 0 }
}

define i32 @double_free(i32* %p) local_unnamed_addr {
dec_label_pc_19d7:
  %0 = alloca i64
  %rax.0.reg2mem = alloca i32, !insn.addr !300
  %1 = load i64, i64* %0
  %2 = icmp eq i32* %p, null, !insn.addr !301
  %3 = icmp eq i1 %2, false, !insn.addr !302
  br i1 %3, label %dec_label_pc_1a0d, label %dec_label_pc_19e0, !insn.addr !302

dec_label_pc_19e0:                                ; preds = %dec_label_pc_19d7
  %4 = call i64* @malloc(i32 4), !insn.addr !303
  %5 = icmp eq i64* %4, null, !insn.addr !304
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !305
  br i1 %5, label %dec_label_pc_1a10, label %dec_label_pc_19f6, !insn.addr !305

dec_label_pc_19f6:                                ; preds = %dec_label_pc_19e0
  call void @free(i64* nonnull %4), !insn.addr !306
  call void @free(i64* nonnull %4), !insn.addr !307
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !308
  br label %dec_label_pc_1a10, !insn.addr !308

dec_label_pc_1a0d:                                ; preds = %dec_label_pc_19d7
  %6 = trunc i64 %1 to i32
  ret i32 %6, !insn.addr !309

dec_label_pc_1a10:                                ; preds = %dec_label_pc_19f6, %dec_label_pc_19e0
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !310

; uselistorder directives
  uselistorder i32 4, { 3, 4, 0, 1, 5, 2 }
}

define i32 @heap_overflow() local_unnamed_addr {
dec_label_pc_1a12:
  %r12.0.reg2mem = alloca i32, !insn.addr !311
  %rax.0.reg2mem = alloca i64, !insn.addr !311
  %0 = call i64* @malloc(i32 40), !insn.addr !312
  %1 = ptrtoint i64* %0 to i64, !insn.addr !312
  %2 = icmp eq i64* %0, null, !insn.addr !313
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !314
  store i32 -1, i32* %r12.0.reg2mem, !insn.addr !314
  br i1 %2, label %dec_label_pc_1a47, label %dec_label_pc_1a30, !insn.addr !314

dec_label_pc_1a30:                                ; preds = %dec_label_pc_1a12, %dec_label_pc_1a30
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %3 = trunc i64 %rax.0.reload to i32
  %4 = mul i32 %3, 100, !insn.addr !315
  %5 = mul i64 %rax.0.reload, 4, !insn.addr !316
  %6 = add i64 %5, %1, !insn.addr !316
  %7 = inttoptr i64 %6 to i32*, !insn.addr !316
  store i32 %4, i32* %7, align 4, !insn.addr !316
  %8 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !317
  %exitcond = icmp eq i64 %8, 11
  store i64 %8, i64* %rax.0.reg2mem, !insn.addr !318
  br i1 %exitcond, label %dec_label_pc_1a3f, label %dec_label_pc_1a30, !insn.addr !318

dec_label_pc_1a3f:                                ; preds = %dec_label_pc_1a30
  %9 = bitcast i64* %0 to i32*, !insn.addr !319
  %10 = load i32, i32* %9, align 4, !insn.addr !319
  call void @free(i64* nonnull %0), !insn.addr !320
  store i32 %10, i32* %r12.0.reg2mem, !insn.addr !320
  br label %dec_label_pc_1a47, !insn.addr !320

dec_label_pc_1a47:                                ; preds = %dec_label_pc_1a3f, %dec_label_pc_1a12
  %r12.0.reload = load i32, i32* %r12.0.reg2mem
  ret i32 %r12.0.reload, !insn.addr !321

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 2, 0 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* (i32)* @malloc, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder label %dec_label_pc_1a30, { 1, 0 }
}

define void @test_heap_memory() local_unnamed_addr {
dec_label_pc_1a4d:
  %rsi.0.reg2mem = alloca i64, !insn.addr !322
  %stack_var_-28 = alloca i32, align 4
  %stack_var_-24 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !323
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_314d to i8*)), !insn.addr !324
  %2 = call i32 @heap_basic(i32 10), !insn.addr !325
  %3 = zext i32 %2 to i64, !insn.addr !326
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_316b, i64 0, i64 0), i64 %3), !insn.addr !327
  %5 = call i32 @heap_calloc(i32 5), !insn.addr !328
  %6 = zext i32 %5 to i64, !insn.addr !329
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3188, i64 0, i64 0), i64 %6), !insn.addr !330
  %8 = call i32 @heap_realloc(), !insn.addr !331
  %9 = zext i32 %8 to i64, !insn.addr !332
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_31a6, i64 0, i64 0), i64 %9), !insn.addr !333
  %11 = call i32 @heap_array(i32 10), !insn.addr !334
  %12 = zext i32 %11 to i64, !insn.addr !335
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_31c5, i64 0, i64 0), i64 %12), !insn.addr !336
  %14 = call i32 @heap_struct(i32 5), !insn.addr !337
  %15 = zext i32 %14 to i64, !insn.addr !338
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_31e2, i64 0, i64 0), i64 %15), !insn.addr !339
  store i64 0, i64* %stack_var_-24, align 8, !insn.addr !340
  %17 = bitcast i64* %stack_var_-24 to i32**, !insn.addr !341
  %18 = call i32 @heap_nested(i32** nonnull %17), !insn.addr !341
  %19 = zext i32 %18 to i64, !insn.addr !342
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3200, i64 0, i64 0), i64 %19), !insn.addr !343
  %21 = load i64, i64* %stack_var_-24, align 8, !insn.addr !344
  %22 = icmp eq i64 %21, 0, !insn.addr !345
  br i1 %22, label %dec_label_pc_1b4e, label %dec_label_pc_1b3b, !insn.addr !346

dec_label_pc_1b3b:                                ; preds = %dec_label_pc_1a4d
  %23 = add i64 %21, 8, !insn.addr !347
  %24 = inttoptr i64 %23 to i64*, !insn.addr !347
  %25 = load i64, i64* %24, align 8, !insn.addr !347
  %26 = inttoptr i64 %25 to i64*, !insn.addr !348
  call void @free(i64* %26), !insn.addr !348
  %27 = load i64, i64* %stack_var_-24, align 8, !insn.addr !349
  %28 = inttoptr i64 %27 to i64*, !insn.addr !350
  call void @free(i64* %28), !insn.addr !350
  br label %dec_label_pc_1b4e, !insn.addr !350

dec_label_pc_1b4e:                                ; preds = %dec_label_pc_1b3b, %dec_label_pc_1a4d
  %29 = call i32 @linked_list_heap(), !insn.addr !351
  %30 = zext i32 %29 to i64, !insn.addr !352
  %31 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_321e, i64 0, i64 0), i64 %30), !insn.addr !353
  %32 = call i32 @tree_heap_traversal(), !insn.addr !354
  %33 = zext i32 %32 to i64, !insn.addr !355
  %34 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3241, i64 0, i64 0), i64 %33), !insn.addr !356
  %35 = call i32 @memory_leak(i32 5), !insn.addr !357
  %36 = zext i32 %35 to i64, !insn.addr !358
  %37 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3267, i64 0, i64 0), i64 %36), !insn.addr !359
  %38 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3285, i64 0, i64 0)), !insn.addr !360
  %39 = call i32 @fork(), !insn.addr !361
  %40 = icmp eq i32 %39, 0, !insn.addr !362
  %41 = icmp eq i1 %40, false, !insn.addr !363
  br i1 %41, label %dec_label_pc_1be6, label %dec_label_pc_1bc3, !insn.addr !363

dec_label_pc_1bc3:                                ; preds = %dec_label_pc_1b4e
  %42 = call i32 @dangling_pointer(), !insn.addr !364
  %43 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_32a5 to i8*)), !insn.addr !365
  call void @exit(i32 0), !insn.addr !366
  unreachable, !insn.addr !366

dec_label_pc_1be6:                                ; preds = %dec_label_pc_1b4e
  %44 = icmp slt i32 %39, 1
  br i1 %44, label %dec_label_pc_1c2b, label %dec_label_pc_1be8, !insn.addr !367

dec_label_pc_1be8:                                ; preds = %dec_label_pc_1be6
  %45 = call i32 @waitpid(i32 %39, i32* nonnull %stack_var_-28, i32 0), !insn.addr !368
  %46 = load i32, i32* %stack_var_-28, align 4, !insn.addr !369
  %47 = urem i32 %46, 128, !insn.addr !370
  %48 = icmp eq i32 %47, 0, !insn.addr !370
  store i64 ptrtoint (i8** @global_var_32b5 to i64), i64* %rsi.0.reg2mem, !insn.addr !371
  br i1 %48, label %dec_label_pc_1c1d, label %dec_label_pc_1c0b, !insn.addr !371

dec_label_pc_1c0b:                                ; preds = %dec_label_pc_1be8
  %49 = trunc i32 %47 to i8
  %50 = add nuw i8 %49, 1, !insn.addr !372
  %51 = icmp slt i8 %50, 2, !insn.addr !372
  store i64 ptrtoint (i64* @global_var_32da to i64), i64* %rsi.0.reg2mem, !insn.addr !372
  br i1 %51, label %dec_label_pc_1c37, label %dec_label_pc_1c1d, !insn.addr !372

dec_label_pc_1c1d:                                ; preds = %dec_label_pc_1c0b, %dec_label_pc_1be8
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %52 = inttoptr i64 %rsi.0.reload to i8*, !insn.addr !373
  %53 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %52), !insn.addr !373
  br label %dec_label_pc_1c37, !insn.addr !374

dec_label_pc_1c2b:                                ; preds = %dec_label_pc_1be6
  call void @perror(i8* bitcast (i8** @global_var_331b to i8*)), !insn.addr !375
  br label %dec_label_pc_1c37, !insn.addr !375

dec_label_pc_1c37:                                ; preds = %dec_label_pc_1c2b, %dec_label_pc_1c1d, %dec_label_pc_1c0b
  %54 = call i64 @__readfsqword(i64 40), !insn.addr !376
  %55 = icmp eq i64 %0, %54, !insn.addr !376
  br i1 %55, label %dec_label_pc_1c4c, label %dec_label_pc_1c47, !insn.addr !377

dec_label_pc_1c47:                                ; preds = %dec_label_pc_1c37
  call void @__stack_chk_fail(), !insn.addr !378
  br label %dec_label_pc_1c4c, !insn.addr !378

dec_label_pc_1c4c:                                ; preds = %dec_label_pc_1c47, %dec_label_pc_1c37
  ret void, !insn.addr !379

; uselistorder directives
  uselistorder i32 %47, { 1, 0 }
  uselistorder i64* %stack_var_-24, { 1, 2, 0, 3 }
  uselistorder void (i64*)* @free, { 1, 0, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 21 }
  uselistorder i64 8, { 11, 1, 0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12 }
}

define i32 @global_var_access() local_unnamed_addr {
dec_label_pc_1c51:
  %0 = load i32, i32* @global_counter, align 4, !insn.addr !380
  %1 = add i32 %0, 1, !insn.addr !381
  store i32 %1, i32* @global_counter, align 4, !insn.addr !382
  ret i32 %1, !insn.addr !383
}

define i64 @global_var_read() local_unnamed_addr {
dec_label_pc_1c64:
  %0 = load i32, i32* @global_counter, align 4, !insn.addr !384
  %1 = mul i32 %0, 2, !insn.addr !385
  %2 = zext i32 %1 to i64, !insn.addr !385
  ret i64 %2, !insn.addr !386
}

define i64 @global_array_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_1c71:
  %rax.0.reg2mem = alloca i64, !insn.addr !387
  %0 = trunc i64 %arg1 to i32, !insn.addr !388
  %1 = icmp ult i32 %0, 10
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !389
  br i1 %1, label %dec_label_pc_1c7d, label %dec_label_pc_1c8a, !insn.addr !389

dec_label_pc_1c7d:                                ; preds = %dec_label_pc_1c71
  %sext = mul i64 %arg1, 4294967296
  %2 = ashr exact i64 %sext, 30, !insn.addr !390
  %3 = add i64 %2, ptrtoint ([10 x i32]* @global_array to i64), !insn.addr !390
  %4 = inttoptr i64 %3 to i32*, !insn.addr !390
  %5 = load i32, i32* %4, align 4, !insn.addr !390
  %6 = zext i32 %5 to i64, !insn.addr !390
  store i64 %6, i64* %rax.0.reg2mem, !insn.addr !390
  br label %dec_label_pc_1c8a, !insn.addr !390

dec_label_pc_1c8a:                                ; preds = %dec_label_pc_1c71, %dec_label_pc_1c7d
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !391

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 10, { 0, 1, 2, 3, 6, 4, 5 }
  uselistorder label %dec_label_pc_1c8a, { 1, 0 }
}

define i64 @static_local(i64 %arg1) local_unnamed_addr {
dec_label_pc_1c8b:
  %0 = trunc i64 %arg1 to i32, !insn.addr !392
  %1 = icmp eq i32 %0, 0, !insn.addr !392
  %2 = icmp eq i1 %1, false, !insn.addr !393
  %spec.select = select i1 %2, i64 0, i64 ptrtoint (i32* @global_var_6031 to i64)
  %3 = trunc i64 %spec.select to i32, !insn.addr !394
  store i32 %3, i32* bitcast (i64* @global_var_6030 to i32*), align 8, !insn.addr !394
  ret i64 %spec.select, !insn.addr !395

; uselistorder directives
  uselistorder i64 %spec.select, { 1, 0 }
}

define i64 @call_static_func(i64 %arg1) local_unnamed_addr {
dec_label_pc_1ca4:
  %factor = mul i64 %arg1, 2
  %0 = and i64 %factor, 4294967294, !insn.addr !396
  %1 = or i64 %0, 1, !insn.addr !396
  ret i64 %1, !insn.addr !397
}

define i64 @access_extern_global() local_unnamed_addr {
dec_label_pc_1cad:
  %0 = load i32, i32* @extern_global_var, align 4, !insn.addr !398
  %1 = add i32 %0, 100, !insn.addr !399
  %2 = zext i32 %1 to i64, !insn.addr !399
  ret i64 %2, !insn.addr !400
}

define i32 @call_extern_func() local_unnamed_addr {
dec_label_pc_1cbb:
  %0 = call i32 @extern_function(i32 5), !insn.addr !401
  ret i32 %0, !insn.addr !401
}

define i32 @read_const_data() local_unnamed_addr {
dec_label_pc_1cc9:
  ret i32 ptrtoint (i32* @global_var_6046 to i32), !insn.addr !402
}

define i64 @access_bss_var() local_unnamed_addr {
dec_label_pc_1cdc:
  ret i64 0, !insn.addr !403
}

define i64 @access_bss_buffer() local_unnamed_addr {
dec_label_pc_1ce3:
  ret i64 0, !insn.addr !404
}

define i32 @global_struct_access() local_unnamed_addr {
dec_label_pc_1cea:
  ret i32 30, !insn.addr !405
}

define i64 @set_file_static(i64 %arg1) local_unnamed_addr {
dec_label_pc_1cf4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg1 to i32, !insn.addr !406
  store i32 %2, i32* @file_scope_static, align 4, !insn.addr !406
  ret i64 %1, !insn.addr !407
}

define i64 @get_file_static() local_unnamed_addr {
dec_label_pc_1cff:
  %0 = load i32, i32* @file_scope_static, align 4, !insn.addr !408
  %1 = zext i32 %0 to i64, !insn.addr !408
  ret i64 %1, !insn.addr !409
}

define i64 @set_global_callback(i64 %arg1) local_unnamed_addr {
dec_label_pc_1d0a:
  %0 = alloca i64
  %1 = load i64, i64* %0
  store i64 %arg1, i64* bitcast (i32 (i32)** @global_func_ptr to i64*), align 8, !insn.addr !410
  ret i64 %1, !insn.addr !411
}

define i32 @call_global_callback(i32 %x) local_unnamed_addr {
dec_label_pc_1d16:
  %0 = load i32 (i32)*, i32 (i32)** @global_func_ptr, align 8, !insn.addr !412
  %1 = icmp eq i32 (i32)* %0, null, !insn.addr !413
  br i1 %1, label %dec_label_pc_1d28, label %dec_label_pc_1d26, !insn.addr !414

dec_label_pc_1d26:                                ; preds = %dec_label_pc_1d16
  %2 = ptrtoint i32 (i32)* %0 to i64, !insn.addr !412
  %3 = trunc i64 %2 to i32, !insn.addr !415
  ret i32 %3, !insn.addr !415

dec_label_pc_1d28:                                ; preds = %dec_label_pc_1d16
  ret i32 -1, !insn.addr !416

; uselistorder directives
  uselistorder i32 (i32)* %0, { 1, 0 }
}

define i64 @global_heap_store(i64 %arg1) local_unnamed_addr {
dec_label_pc_1d2c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %arg1, 0, !insn.addr !417
  %3 = and i64 %1, 4294967295
  %rax.0 = select i1 %2, i64 4294967295, i64 %3
  ret i64 %rax.0, !insn.addr !418
}

define i32 @static_complex_init() local_unnamed_addr {
dec_label_pc_1d3b:
  ret i32 15, !insn.addr !419
}

define i64 @tls_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_1d45:
  %0 = mul i64 %arg1, 2, !insn.addr !420
  %1 = and i64 %0, 4294967294, !insn.addr !420
  ret i64 %1, !insn.addr !421

; uselistorder directives
  uselistorder i64 4294967294, { 3, 1, 0, 2 }
}

define i64 @init_order_test() local_unnamed_addr {
dec_label_pc_1d4d:
  ret i64 20, !insn.addr !422
}

define void @test_static_global() local_unnamed_addr {
dec_label_pc_1d57:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3326 to i8*)), !insn.addr !423
  %1 = call i32 @global_var_access(), !insn.addr !424
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_334a, i64 0, i64 0)), !insn.addr !425
  %3 = load i32, i32* @global_counter, align 4, !insn.addr !426
  %4 = mul i32 %3, 2, !insn.addr !427
  %5 = zext i32 %4 to i64, !insn.addr !427
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_336d, i64 0, i64 0), i64 %5), !insn.addr !428
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_338e, i64 0, i64 0), i64 5), !insn.addr !429
  store i32 1, i32* bitcast (i64* @global_var_6030 to i32*), align 8, !insn.addr !430
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_33b3, i64 0, i64 0), i64 1), !insn.addr !431
  store i32 ptrtoint (i32* @global_var_6031 to i32), i32* bitcast (i64* @global_var_6030 to i32*), align 8, !insn.addr !432
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_33b3, i64 0, i64 0), i64 ptrtoint (i32* @global_var_6031 to i64)), !insn.addr !433
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_33d1, i64 0, i64 0), i64 11), !insn.addr !434
  %11 = load i32, i32* @extern_global_var, align 4, !insn.addr !435
  %12 = add i32 %11, 100, !insn.addr !436
  %13 = zext i32 %12 to i64, !insn.addr !436
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_33f3, i64 0, i64 0), i64 %13), !insn.addr !437
  %15 = call i32 @call_extern_func(), !insn.addr !438
  %16 = zext i32 %15 to i64, !insn.addr !439
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3419, i64 0, i64 0), i64 %16), !insn.addr !440
  %18 = call i32 @read_const_data(), !insn.addr !441
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_343b, i64 0, i64 0)), !insn.addr !442
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_345c, i64 0, i64 0), i64 0), !insn.addr !443
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_347c, i64 0, i64 0), i64 0), !insn.addr !444
  %22 = call i32 @global_struct_access(), !insn.addr !445
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_349f, i64 0, i64 0)), !insn.addr !446
  store i32 50, i32* @file_scope_static, align 4, !insn.addr !447
  %24 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_34c5, i64 0, i64 0), i64 50), !insn.addr !448
  store i64 4857, i64* bitcast (i32 (i32)** @global_func_ptr to i64*), align 8, !insn.addr !449
  %25 = call i32 @call_global_callback(i32 5), !insn.addr !450
  %26 = zext i32 %25 to i64, !insn.addr !451
  %27 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_34e2, i64 0, i64 0), i64 %26), !insn.addr !452
  %28 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3503, i64 0, i64 0), i64 100), !insn.addr !453
  %29 = call i32 @static_complex_init(), !insn.addr !454
  %30 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_3526, i64 0, i64 0)), !insn.addr !455
  %31 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_354b, i64 0, i64 0), i64 20), !insn.addr !456
  %32 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3567, i64 0, i64 0), i64 20), !insn.addr !457
  ret void, !insn.addr !457

; uselistorder directives
  uselistorder i32 50, { 2, 1, 0 }
  uselistorder i32 100, { 0, 3, 1, 2 }
  uselistorder i64 ptrtoint (i32* @global_var_6031 to i64), { 1, 0 }
}

define i32 @memop_memset(i8* %buf, i64 %size, i32 %fill_value) local_unnamed_addr {
dec_label_pc_1f61:
  %0 = icmp eq i8* %buf, null, !insn.addr !458
  %1 = icmp eq i64 %size, 0, !insn.addr !459
  %or.cond = or i1 %0, %1
  br i1 %or.cond, label %dec_label_pc_1f7e, label %dec_label_pc_1f77, !insn.addr !460

dec_label_pc_1f77:                                ; preds = %dec_label_pc_1f61
  %2 = ptrtoint i8* %buf to i64
  %3 = trunc i64 %2 to i32
  %4 = trunc i32 %fill_value to i8, !insn.addr !461
  call void @__asm_rep_stosb_memset(i8* nonnull %buf, i8 %4, i64 %size), !insn.addr !461
  %5 = urem i32 %3, 256, !insn.addr !462
  ret i32 %5, !insn.addr !462

dec_label_pc_1f7e:                                ; preds = %dec_label_pc_1f61
  ret i32 -1, !insn.addr !463

; uselistorder directives
  uselistorder i8* %buf, { 0, 2, 1 }
}

define i32 @memop_memcpy(i8* %dst, i32* %src, i64 %n) local_unnamed_addr {
dec_label_pc_1f82:
  %0 = icmp eq i32* %src, null, !insn.addr !464
  %1 = icmp eq i64 %n, 0, !insn.addr !465
  %2 = or i1 %0, %1
  %3 = icmp eq i1 %2, false, !insn.addr !466
  %4 = icmp eq i1 %3, false, !insn.addr !467
  %5 = icmp eq i8* %dst, null, !insn.addr !468
  %or.cond = or i1 %5, %4
  br i1 %or.cond, label %dec_label_pc_1fb1, label %dec_label_pc_1fa0, !insn.addr !467

dec_label_pc_1fa0:                                ; preds = %dec_label_pc_1f82
  %6 = ptrtoint i8* %dst to i64
  %7 = and i64 %n, -4, !insn.addr !469
  %8 = bitcast i32* %src to i8*, !insn.addr !470
  call void @__asm_rep_movsb_memcpy(i8* nonnull %dst, i8* %8, i64 %n), !insn.addr !470
  %9 = add i64 %6, -4, !insn.addr !471
  %10 = add i64 %9, %7, !insn.addr !471
  %11 = inttoptr i64 %10 to i32*, !insn.addr !471
  %12 = load i32, i32* %11, align 4, !insn.addr !471
  ret i32 %12, !insn.addr !472

dec_label_pc_1fb1:                                ; preds = %dec_label_pc_1f82
  ret i32 -1, !insn.addr !473

; uselistorder directives
  uselistorder i8* %dst, { 1, 2, 0 }
}

define i32 @memop_memmove(i8* %buf, i64 %n) local_unnamed_addr {
dec_label_pc_1fb5:
  %0 = icmp eq i8* %buf, null, !insn.addr !474
  %1 = icmp ult i64 %n, 2
  %or.cond = or i1 %0, %1
  br i1 %or.cond, label %dec_label_pc_1fde, label %dec_label_pc_1fc4, !insn.addr !475

dec_label_pc_1fc4:                                ; preds = %dec_label_pc_1fb5
  %2 = ptrtoint i8* %buf to i64
  %3 = add i64 %2, 1, !insn.addr !476
  %4 = inttoptr i64 %3 to i64*, !insn.addr !477
  %5 = bitcast i8* %buf to i64*, !insn.addr !477
  %6 = trunc i64 %n to i32
  %7 = add i32 %6, -1, !insn.addr !477
  %8 = call i64* @memmove(i64* %4, i64* %5, i32 %7), !insn.addr !477
  %9 = inttoptr i64 %3 to i8*, !insn.addr !478
  %10 = load i8, i8* %9, align 1, !insn.addr !478
  %11 = sext i8 %10 to i32, !insn.addr !479
  ret i32 %11, !insn.addr !479

dec_label_pc_1fde:                                ; preds = %dec_label_pc_1fb5
  ret i32 -1, !insn.addr !480

; uselistorder directives
  uselistorder i64 2, { 4, 0, 1, 5, 6, 7, 8, 2, 3 }
  uselistorder i64 %n, { 1, 0 }
  uselistorder i8* %buf, { 0, 2, 1 }
}

define i64 @memop_memcmp(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1fe2:
  %merge.reg2mem = alloca i64, !insn.addr !481
  %0 = icmp eq i64 %arg2, 0, !insn.addr !482
  %1 = icmp eq i64 %arg3, 0, !insn.addr !483
  %2 = or i1 %0, %1
  %3 = icmp eq i1 %2, false, !insn.addr !484
  %4 = icmp eq i1 %3, false, !insn.addr !485
  %5 = icmp eq i64 %arg1, 0, !insn.addr !486
  %or.cond = or i1 %5, %4
  store i64 0, i64* %merge.reg2mem, !insn.addr !485
  br i1 %or.cond, label %dec_label_pc_2018, label %dec_label_pc_1ffb, !insn.addr !485

dec_label_pc_1ffb:                                ; preds = %dec_label_pc_1fe2
  %6 = inttoptr i64 %arg1 to i64*, !insn.addr !487
  %7 = inttoptr i64 %arg2 to i64*, !insn.addr !487
  %8 = trunc i64 %arg3 to i32, !insn.addr !487
  %9 = call i32 @memcmp(i64* %6, i64* %7, i32 %8), !insn.addr !487
  %10 = icmp eq i32 %9, 0, !insn.addr !488
  %11 = icmp slt i32 %9, 0, !insn.addr !488
  %12 = icmp eq i1 %11, false, !insn.addr !489
  %13 = icmp eq i1 %10, false, !insn.addr !489
  %14 = icmp eq i1 %12, %13, !insn.addr !489
  %15 = select i1 %13, i64 4294967295, i64 0
  %spec.select = select i1 %14, i64 1, i64 %15
  store i64 %spec.select, i64* %merge.reg2mem
  br label %dec_label_pc_2018

dec_label_pc_2018:                                ; preds = %dec_label_pc_1ffb, %dec_label_pc_1fe2
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !490

; uselistorder directives
  uselistorder i32 %9, { 1, 0 }
  uselistorder i64 %arg1, { 1, 0 }
}

define i32 @memop_bzero(i8* %buf, i64 %n) local_unnamed_addr {
dec_label_pc_201d:
  %rax.0.reg2mem = alloca i32, !insn.addr !491
  %0 = icmp eq i8* %buf, null, !insn.addr !492
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !493
  br i1 %0, label %dec_label_pc_2036, label %dec_label_pc_202f, !insn.addr !493

dec_label_pc_202f:                                ; preds = %dec_label_pc_201d
  %1 = ptrtoint i8* %buf to i64
  %2 = trunc i64 %1 to i32
  call void @__asm_rep_stosb_memset(i8* nonnull %buf, i8 0, i64 %n), !insn.addr !494
  %phitmp = urem i32 %2, 256
  store i32 %phitmp, i32* %rax.0.reg2mem, !insn.addr !495
  br label %dec_label_pc_2036, !insn.addr !495

dec_label_pc_2036:                                ; preds = %dec_label_pc_202f, %dec_label_pc_201d
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !496

; uselistorder directives
  uselistorder i8* %buf, { 0, 2, 1 }
}

define i32 @memop_bcopy(i32* %src, i8* %dst, i64 %n) local_unnamed_addr {
dec_label_pc_2037:
  %0 = icmp eq i8* %dst, null, !insn.addr !497
  %1 = icmp eq i64 %n, 0, !insn.addr !498
  %2 = or i1 %0, %1
  %3 = icmp eq i1 %2, false, !insn.addr !499
  %4 = icmp eq i1 %3, false, !insn.addr !500
  %5 = icmp eq i32* %src, null, !insn.addr !501
  %or.cond = or i1 %5, %4
  br i1 %or.cond, label %dec_label_pc_2066, label %dec_label_pc_2055, !insn.addr !500

dec_label_pc_2055:                                ; preds = %dec_label_pc_2037
  %6 = bitcast i8* %dst to i64*, !insn.addr !502
  %7 = bitcast i32* %src to i64*, !insn.addr !502
  %8 = trunc i64 %n to i32, !insn.addr !502
  %9 = call i64* @memmove(i64* %6, i64* %7, i32 %8), !insn.addr !502
  %10 = bitcast i64* %9 to i8*, !insn.addr !503
  %11 = load i8, i8* %10, align 1, !insn.addr !503
  %12 = zext i8 %11 to i32, !insn.addr !504
  ret i32 %12, !insn.addr !504

dec_label_pc_2066:                                ; preds = %dec_label_pc_2037
  ret i32 -1, !insn.addr !505

; uselistorder directives
  uselistorder i64* (i64*, i64*, i32)* @memmove, { 1, 0, 2 }
  uselistorder i8* null, { 1, 2, 3, 0, 4 }
}

define i64 @memop_unaligned_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_206a:
  %rax.0.reg2mem = alloca i64, !insn.addr !506
  %0 = icmp eq i64 %arg1, 0, !insn.addr !507
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !508
  br i1 %0, label %dec_label_pc_2079, label %dec_label_pc_2076, !insn.addr !508

dec_label_pc_2076:                                ; preds = %dec_label_pc_206a
  %1 = add i64 %arg1, 1, !insn.addr !509
  %2 = inttoptr i64 %1 to i32*, !insn.addr !509
  %3 = load i32, i32* %2, align 4, !insn.addr !509
  %4 = zext i32 %3 to i64, !insn.addr !509
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !509
  br label %dec_label_pc_2079, !insn.addr !509

dec_label_pc_2079:                                ; preds = %dec_label_pc_2076, %dec_label_pc_206a
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !510
}

define i32 @memop_memory_barrier(i32* %flag) local_unnamed_addr {
dec_label_pc_207a:
  %0 = alloca i64
  %rax.0.reg2mem = alloca i32, !insn.addr !511
  %1 = load i64, i64* %0
  %2 = icmp eq i32* %flag, null, !insn.addr !512
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !513
  br i1 %2, label %dec_label_pc_208f, label %dec_label_pc_2086, !insn.addr !513

dec_label_pc_2086:                                ; preds = %dec_label_pc_207a
  %3 = trunc i64 %1 to i32
  %4 = call i64 @__asm_mfence(), !insn.addr !514
  %5 = mul i32 %3, 2, !insn.addr !515
  store i32 %5, i32* %rax.0.reg2mem, !insn.addr !515
  br label %dec_label_pc_208f, !insn.addr !515

dec_label_pc_208f:                                ; preds = %dec_label_pc_2086, %dec_label_pc_207a
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !516

; uselistorder directives
  uselistorder i32 2, { 0, 1, 2, 3, 6, 4, 5 }
  uselistorder i32 -1, { 0, 17, 1, 18, 22, 19, 20, 21, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 23 }
  uselistorder i32* null, { 2, 0, 3, 4, 1, 5 }
}

define void @test_memory_op_functions() local_unnamed_addr {
dec_label_pc_2090:
  %stack_var_-372 = alloca i64, align 8
  %zero_buf_-301 = alloca [10 x i8], align 1
  %stack_var_-297 = alloca i64, align 8
  %stack_var_-293 = alloca i64, align 8
  %stack_var_-368 = alloca i64, align 8
  %stack_var_-356 = alloca i64, align 8
  %stack_var_-283 = alloca i64, align 8
  %stack_var_-272 = alloca i64, align 8
  %stack_var_-344 = alloca i64, align 8
  %stack_var_-324 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !517
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_3588 to i8*)), !insn.addr !518
  store i64 85899345930, i64* %stack_var_-344, align 8, !insn.addr !519
  %2 = bitcast i64* %stack_var_-324 to i8*, !insn.addr !520
  call void @__asm_rep_stosd_memset(i8* nonnull %2, i32 0, i64 5), !insn.addr !520
  %3 = bitcast i64* %stack_var_-272 to i8*, !insn.addr !521
  %4 = call i32 @memop_memset(i8* nonnull %3, i64 10, i32 65), !insn.addr !521
  %5 = zext i32 %4 to i64, !insn.addr !522
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_35a9, i64 0, i64 0), i64 %5), !insn.addr !523
  %7 = bitcast i64* %stack_var_-344 to i32*, !insn.addr !524
  %8 = call i32 @memop_memcpy(i8* nonnull %2, i32* nonnull %7, i64 20), !insn.addr !524
  %9 = zext i32 %8 to i64, !insn.addr !525
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_35ba, i64 0, i64 0), i64 %9), !insn.addr !526
  %11 = bitcast i64* %stack_var_-283 to i8*, !insn.addr !527
  call void @__asm_rep_movsb_memcpy(i8* nonnull %11, i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_3633, i64 0, i64 0), i64 11), !insn.addr !527
  %12 = call i32 @memop_memmove(i8* nonnull %11, i64 10), !insn.addr !528
  %13 = trunc i32 %12 to i8, !insn.addr !529
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_35cb, i64 0, i64 0), i8 %13), !insn.addr !529
  store i64 8589934593, i64* %stack_var_-368, align 8, !insn.addr !530
  store i64 8589934593, i64* %stack_var_-356, align 8, !insn.addr !531
  %15 = call i32 @memcmp(i64* nonnull %stack_var_-368, i64* nonnull %stack_var_-356, i32 12), !insn.addr !532
  %16 = icmp eq i32 %15, 0, !insn.addr !533
  %17 = icmp slt i32 %15, 0, !insn.addr !533
  %18 = icmp eq i1 %17, false, !insn.addr !534
  %19 = icmp eq i1 %16, false, !insn.addr !534
  %20 = icmp eq i1 %18, %19, !insn.addr !534
  %21 = select i1 %19, i64 4294967295, i64 0
  %spec.select = select i1 %20, i64 1, i64 %21
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_35dc, i64 0, i64 0), i64 %spec.select), !insn.addr !535
  %23 = bitcast i64* %stack_var_-293 to i8*, !insn.addr !536
  %24 = call i32 @memop_bzero(i8* nonnull %23, i64 10), !insn.addr !536
  %25 = zext i32 %24 to i64, !insn.addr !537
  %26 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_35ed, i64 0, i64 0), i64 %25), !insn.addr !538
  store [10 x i8] [i8 1, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef], [10 x i8]* %zero_buf_-301, align 1, !insn.addr !539
  store i64 0, i64* %stack_var_-297, align 8, !insn.addr !540
  %27 = bitcast [10 x i8]* %zero_buf_-301 to i32*, !insn.addr !541
  %28 = bitcast i64* %stack_var_-297 to i8*, !insn.addr !541
  %29 = call i32 @memop_bcopy(i32* nonnull %27, i8* nonnull %28, i64 4), !insn.addr !541
  %30 = zext i32 %29 to i64, !insn.addr !542
  %31 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_35fe, i64 0, i64 0), i64 %30), !insn.addr !543
  %32 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_360f, i64 0, i64 0), i32 67305985), !insn.addr !544
  store i64 5, i64* %stack_var_-372, align 8, !insn.addr !545
  %33 = bitcast i64* %stack_var_-372 to i32*, !insn.addr !546
  %34 = call i32 @memop_memory_barrier(i32* nonnull %33), !insn.addr !546
  %35 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3622, i64 0, i64 0)), !insn.addr !547
  %36 = call i64 @__readfsqword(i64 40), !insn.addr !548
  %37 = icmp eq i64 %0, %36, !insn.addr !548
  br i1 %37, label %dec_label_pc_2287, label %dec_label_pc_2282, !insn.addr !549

dec_label_pc_2282:                                ; preds = %dec_label_pc_2090
  call void @__stack_chk_fail(), !insn.addr !550
  br label %dec_label_pc_2287, !insn.addr !550

dec_label_pc_2287:                                ; preds = %dec_label_pc_2282, %dec_label_pc_2090
  ret void, !insn.addr !551

; uselistorder directives
  uselistorder i32 %15, { 1, 0 }
  uselistorder void ()* @__stack_chk_fail, { 4, 5, 0, 1, 2, 3, 6 }
  uselistorder i64 4, { 12, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 }
  uselistorder i8 1, { 1, 0, 2 }
  uselistorder i64 1, { 1, 4, 2, 6, 3, 0, 5, 7, 8, 9, 10, 11, 12, 13, 14 }
  uselistorder i64 4294967295, { 4, 0, 5, 3, 2, 1, 6, 7, 8, 9, 10, 11 }
  uselistorder i1 false, { 12, 3, 10, 0, 5, 4, 6, 1, 11, 2, 7, 20, 9, 13, 14, 15, 16, 17, 18, 19, 21, 8 }
  uselistorder i64 8589934593, { 1, 0, 2 }
  uselistorder void (i8*, i8*, i64)* @__asm_rep_movsb_memcpy, { 1, 0 }
  uselistorder i64 11, { 1, 2, 0 }
  uselistorder i64 20, { 2, 3, 4, 0, 5, 6, 1 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 21, 8, 7, 6, 5, 4, 3, 2, 1, 0, 48 }
  uselistorder i64 10, { 3, 4, 5, 2, 0, 1 }
  uselistorder i32 0, { 17, 18, 8, 14, 15, 16, 19, 9, 10, 20, 4, 0, 1, 5, 2, 3, 6, 7, 11, 12, 13 }
  uselistorder i32 (i8*)* @puts, { 3, 2, 1, 0, 4 }
  uselistorder i64 0, { 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 38, 50, 51, 52, 53, 54, 55, 56, 57, 138, 144, 58, 0, 35, 139, 140, 145, 36, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 59, 75, 76, 60, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 141, 15, 16, 37, 95, 96, 97, 98, 99, 100, 101, 102, 156, 103, 104, 137, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 1, 115, 116, 2, 148, 149, 146, 147, 150, 151, 152, 153, 154, 18, 3, 4, 5, 155, 6, 7, 8, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 9, 10, 11, 12, 13, 142, 17, 14, 143, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 135, 136 }
}

define i32 @extern_function(i32 %x) local_unnamed_addr {
dec_label_pc_228f:
  %0 = mul i32 %x, 3, !insn.addr !552
  ret i32 %0, !insn.addr !553

; uselistorder directives
  uselistorder i32 3, { 1, 0, 2, 3, 4 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_2298:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !554

; uselistorder directives
  uselistorder i32 1, { 7, 56, 57, 58, 59, 60, 61, 62, 63, 115, 114, 113, 112, 111, 110, 109, 108, 107, 106, 9, 6, 10, 11, 12, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 123, 79, 80, 81, 5, 4, 3, 13, 122, 82, 55, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 116, 105, 14, 16, 15, 17, 2, 94, 18, 20, 19, 22, 21, 31, 30, 29, 28, 27, 26, 25, 24, 23, 32, 33, 35, 34, 36, 40, 39, 38, 37, 42, 41, 95, 96, 97, 98, 99, 100, 101, 102, 103, 124, 104, 117, 45, 44, 43, 125, 118, 48, 47, 46, 119, 50, 49, 8, 1, 120, 53, 52, 51, 0, 121, 54 }
}

declare void @free(i64*) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i32 @memcmp(i64*, i64*, i32) local_unnamed_addr

declare i64* @calloc(i32, i32) local_unnamed_addr

declare i64* @malloc(i32) local_unnamed_addr

declare i64* @realloc(i64*, i32) local_unnamed_addr

declare i32 @__printf_chk(i32, i8*, ...) local_unnamed_addr

declare i64* @memmove(i64*, i64*, i32) local_unnamed_addr

declare i32 @waitpid(i32, i32*, i32) local_unnamed_addr

declare void @perror(i8*) local_unnamed_addr

declare void @exit(i32) local_unnamed_addr

declare i32 @fork() local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

declare void @__asm_rep_stosd_memset(i8*, i32, i64) local_unnamed_addr

declare void @__asm_rep_movsb_memcpy(i8*, i8*, i64) local_unnamed_addr

declare void @__asm_rep_stosb_memset(i8*, i8, i64) local_unnamed_addr

declare i64 @__asm_mfence() local_unnamed_addr

declare i64 @__readfsqword(i64) local_unnamed_addr

!0 = !{i64 4096}
!1 = !{i64 4104}
!2 = !{i64 4111}
!3 = !{i64 4114}
!4 = !{i64 4116}
!5 = !{i64 4122}
!6 = !{i64 4356}
!7 = !{i64 4372}
!8 = !{i64 4388}
!9 = !{i64 4404}
!10 = !{i64 4420}
!11 = !{i64 4436}
!12 = !{i64 4452}
!13 = !{i64 4468}
!14 = !{i64 4484}
!15 = !{i64 4500}
!16 = !{i64 4516}
!17 = !{i64 4532}
!18 = !{i64 4548}
!19 = !{i64 4564}
!20 = !{i64 4583}
!21 = !{i64 4590}
!22 = !{i64 4597}
!23 = !{i64 4604}
!24 = !{i64 4612}
!25 = !{i64 4655}
!26 = !{i64 4661}
!27 = !{i64 4712}
!28 = !{i64 4776}
!29 = !{i64 4788}
!30 = !{i64 4795}
!31 = !{i64 4798}
!32 = !{i64 4809}
!33 = !{i64 4811}
!34 = !{i64 4818}
!35 = !{i64 4823}
!36 = !{i64 4828}
!37 = !{i64 4836}
!38 = !{i64 4840}
!39 = !{i64 4852}
!40 = !{i64 4861}
!41 = !{i64 4864}
!42 = !{i64 4869}
!43 = !{i64 4873}
!44 = !{i64 4874}
!45 = !{i64 4878}
!46 = !{i64 4884}
!47 = !{i64 4898}
!48 = !{i64 4900}
!49 = !{i64 4903}
!50 = !{i64 4906}
!51 = !{i64 4912}
!52 = !{i64 4923}
!53 = !{i64 4932}
!54 = !{i64 4934}
!55 = !{i64 4943}
!56 = !{i64 4948}
!57 = !{i64 4951}
!58 = !{i64 4956}
!59 = !{i64 4967}
!60 = !{i64 4974}
!61 = !{i64 4976}
!62 = !{i64 4977}
!63 = !{i64 4981}
!64 = !{i64 4988}
!65 = !{i64 5007}
!66 = !{i64 5005}
!67 = !{i64 5011}
!68 = !{i64 5014}
!69 = !{i64 5020}
!70 = !{i64 5022}
!71 = !{i64 5038}
!72 = !{i64 5047}
!73 = !{i64 5049}
!74 = !{i64 5061}
!75 = !{i64 5062}
!76 = !{i64 5067}
!77 = !{i64 5077}
!78 = !{i64 5101}
!79 = !{i64 5073}
!80 = !{i64 5109}
!81 = !{i64 5120}
!82 = !{i64 5131}
!83 = !{i64 5157}
!84 = !{i64 5162}
!85 = !{i64 5179}
!86 = !{i64 5181}
!87 = !{i64 5184}
!88 = !{i64 5187}
!89 = !{i64 5192}
!90 = !{i64 5194}
!91 = !{i64 5196}
!92 = !{i64 5199}
!93 = !{i64 5206}
!94 = !{i64 5215}
!95 = !{i64 5217}
!96 = !{i64 5223}
!97 = !{i64 5224}
!98 = !{i64 5236}
!99 = !{i64 5256}
!100 = !{i64 5232}
!101 = !{i64 5264}
!102 = !{i64 5275}
!103 = !{i64 5312}
!104 = !{i64 5286}
!105 = !{i64 5317}
!106 = !{i64 5331}
!107 = !{i64 5338}
!108 = !{i64 5342}
!109 = !{i64 5345}
!110 = !{i64 5348}
!111 = !{i64 5353}
!112 = !{i64 5355}
!113 = !{i64 5357}
!114 = !{i64 5360}
!115 = !{i64 5367}
!116 = !{i64 5376}
!117 = !{i64 5378}
!118 = !{i64 5384}
!119 = !{i64 5394}
!120 = !{i64 5407}
!121 = !{i64 5431}
!122 = !{i64 5441}
!123 = !{i64 5458}
!124 = !{i64 5462}
!125 = !{i64 5486}
!126 = !{i64 5510}
!127 = !{i64 5534}
!128 = !{i64 5541}
!129 = !{i64 5558}
!130 = !{i64 5562}
!131 = !{i64 5572}
!132 = !{i64 5589}
!133 = !{i64 5593}
!134 = !{i64 5603}
!135 = !{i64 5620}
!136 = !{i64 5624}
!137 = !{i64 5649}
!138 = !{i64 5654}
!139 = !{i64 5671}
!140 = !{i64 5676}
!141 = !{i64 5681}
!142 = !{i64 5684}
!143 = !{i64 5660}
!144 = !{i64 5693}
!145 = !{i64 5695}
!146 = !{i64 5698}
!147 = !{i64 5701}
!148 = !{i64 5713}
!149 = !{i64 5714}
!150 = !{i64 5718}
!151 = !{i64 5722}
!152 = !{i64 5734}
!153 = !{i64 5735}
!154 = !{i64 5758}
!155 = !{i64 5763}
!156 = !{i64 5766}
!157 = !{i64 5741}
!158 = !{i64 5778}
!159 = !{i64 5780}
!160 = !{i64 5784}
!161 = !{i64 5789}
!162 = !{i64 5801}
!163 = !{i64 5802}
!164 = !{i64 5819}
!165 = !{i64 5824}
!166 = !{i64 5827}
!167 = !{i64 5847}
!168 = !{i64 5864}
!169 = !{i64 5868}
!170 = !{i64 5875}
!171 = !{i64 5883}
!172 = !{i64 5886}
!173 = !{i64 5888}
!174 = !{i64 5903}
!175 = !{i64 5907}
!176 = !{i64 5912}
!177 = !{i64 5923}
!178 = !{i64 5935}
!179 = !{i64 5936}
!180 = !{i64 5953}
!181 = !{i64 5958}
!182 = !{i64 5963}
!183 = !{i64 5966}
!184 = !{i64 5942}
!185 = !{i64 5975}
!186 = !{i64 5977}
!187 = !{i64 5980}
!188 = !{i64 5983}
!189 = !{i64 5995}
!190 = !{i64 5996}
!191 = !{i64 6000}
!192 = !{i64 6004}
!193 = !{i64 6016}
!194 = !{i64 6017}
!195 = !{i64 6036}
!196 = !{i64 6041}
!197 = !{i64 6044}
!198 = !{i64 6053}
!199 = !{i64 6065}
!200 = !{i64 6066}
!201 = !{i64 6081}
!202 = !{i64 6089}
!203 = !{i64 6095}
!204 = !{i64 6098}
!205 = !{i64 6105}
!206 = !{i64 6112}
!207 = !{i64 6117}
!208 = !{i64 6121}
!209 = !{i64 6124}
!210 = !{i64 6129}
!211 = !{i64 6139}
!212 = !{i64 6141}
!213 = !{i64 6147}
!214 = !{i64 6155}
!215 = !{i64 6160}
!216 = !{i64 6161}
!217 = !{i64 6175}
!218 = !{i64 6184}
!219 = !{i64 6189}
!220 = !{i64 6192}
!221 = !{i64 6194}
!222 = !{i64 6197}
!223 = !{i64 6199}
!224 = !{i64 6206}
!225 = !{i64 6222}
!226 = !{i64 6225}
!227 = !{i64 6233}
!228 = !{i64 6236}
!229 = !{i64 6238}
!230 = !{i64 6242}
!231 = !{i64 6247}
!232 = !{i64 6251}
!233 = !{i64 6255}
!234 = !{i64 6263}
!235 = !{i64 6266}
!236 = !{i64 6270}
!237 = !{i64 6273}
!238 = !{i64 6278}
!239 = !{i64 6282}
!240 = !{i64 6287}
!241 = !{i64 6290}
!242 = !{i64 6299}
!243 = !{i64 6312}
!244 = !{i64 6317}
!245 = !{i64 6320}
!246 = !{i64 6322}
!247 = !{i64 6324}
!248 = !{i64 6332}
!249 = !{i64 6341}
!250 = !{i64 6342}
!251 = !{i64 6359}
!252 = !{i64 6364}
!253 = !{i64 6367}
!254 = !{i64 6377}
!255 = !{i64 6387}
!256 = !{i64 6391}
!257 = !{i64 6396}
!258 = !{i64 6400}
!259 = !{i64 6404}
!260 = !{i64 6407}
!261 = !{i64 6409}
!262 = !{i64 6412}
!263 = !{i64 6414}
!264 = !{i64 6419}
!265 = !{i64 6423}
!266 = !{i64 6426}
!267 = !{i64 6428}
!268 = !{i64 6442}
!269 = !{i64 6447}
!270 = !{i64 6449}
!271 = !{i64 6452}
!272 = !{i64 6456}
!273 = !{i64 6459}
!274 = !{i64 6464}
!275 = !{i64 6468}
!276 = !{i64 6476}
!277 = !{i64 6488}
!278 = !{i64 6489}
!279 = !{i64 6500}
!280 = !{i64 6504}
!281 = !{i64 6514}
!282 = !{i64 6517}
!283 = !{i64 6494}
!284 = !{i64 6521}
!285 = !{i64 6523}
!286 = !{i64 6526}
!287 = !{i64 6538}
!288 = !{i64 6539}
!289 = !{i64 6543}
!290 = !{i64 6546}
!291 = !{i64 6552}
!292 = !{i64 6553}
!293 = !{i64 6563}
!294 = !{i64 6574}
!295 = !{i64 6577}
!296 = !{i64 6598}
!297 = !{i64 6606}
!298 = !{i64 6611}
!299 = !{i64 6614}
!300 = !{i64 6615}
!301 = !{i64 6619}
!302 = !{i64 6622}
!303 = !{i64 6630}
!304 = !{i64 6641}
!305 = !{i64 6644}
!306 = !{i64 6649}
!307 = !{i64 6657}
!308 = !{i64 6667}
!309 = !{i64 6671}
!310 = !{i64 6673}
!311 = !{i64 6674}
!312 = !{i64 6689}
!313 = !{i64 6694}
!314 = !{i64 6697}
!315 = !{i64 6704}
!316 = !{i64 6707}
!317 = !{i64 6710}
!318 = !{i64 6717}
!319 = !{i64 6719}
!320 = !{i64 6722}
!321 = !{i64 6732}
!322 = !{i64 6733}
!323 = !{i64 6748}
!324 = !{i64 6764}
!325 = !{i64 6774}
!326 = !{i64 6791}
!327 = !{i64 6795}
!328 = !{i64 6805}
!329 = !{i64 6822}
!330 = !{i64 6826}
!331 = !{i64 6833}
!332 = !{i64 6850}
!333 = !{i64 6854}
!334 = !{i64 6864}
!335 = !{i64 6881}
!336 = !{i64 6885}
!337 = !{i64 6895}
!338 = !{i64 6912}
!339 = !{i64 6916}
!340 = !{i64 6926}
!341 = !{i64 6935}
!342 = !{i64 6952}
!343 = !{i64 6956}
!344 = !{i64 6961}
!345 = !{i64 6966}
!346 = !{i64 6969}
!347 = !{i64 6971}
!348 = !{i64 6975}
!349 = !{i64 6980}
!350 = !{i64 6985}
!351 = !{i64 6992}
!352 = !{i64 7009}
!353 = !{i64 7013}
!354 = !{i64 7020}
!355 = !{i64 7037}
!356 = !{i64 7041}
!357 = !{i64 7051}
!358 = !{i64 7068}
!359 = !{i64 7072}
!360 = !{i64 7091}
!361 = !{i64 7096}
!362 = !{i64 7103}
!363 = !{i64 7105}
!364 = !{i64 7109}
!365 = !{i64 7130}
!366 = !{i64 7137}
!367 = !{i64 7142}
!368 = !{i64 7151}
!369 = !{i64 7156}
!370 = !{i64 7173}
!371 = !{i64 7177}
!372 = !{i64 7185}
!373 = !{i64 7204}
!374 = !{i64 7209}
!375 = !{i64 7218}
!376 = !{i64 7228}
!377 = !{i64 7237}
!378 = !{i64 7239}
!379 = !{i64 7248}
!380 = !{i64 7253}
!381 = !{i64 7259}
!382 = !{i64 7261}
!383 = !{i64 7267}
!384 = !{i64 7272}
!385 = !{i64 7278}
!386 = !{i64 7280}
!387 = !{i64 7281}
!388 = !{i64 7288}
!389 = !{i64 7291}
!390 = !{i64 7303}
!391 = !{i64 7306}
!392 = !{i64 7313}
!393 = !{i64 7315}
!394 = !{i64 7325}
!395 = !{i64 7331}
!396 = !{i64 7336}
!397 = !{i64 7340}
!398 = !{i64 7345}
!399 = !{i64 7351}
!400 = !{i64 7354}
!401 = !{i64 7364}
!402 = !{i64 7387}
!403 = !{i64 7394}
!404 = !{i64 7401}
!405 = !{i64 7411}
!406 = !{i64 7416}
!407 = !{i64 7422}
!408 = !{i64 7427}
!409 = !{i64 7433}
!410 = !{i64 7438}
!411 = !{i64 7445}
!412 = !{i64 7450}
!413 = !{i64 7457}
!414 = !{i64 7460}
!415 = !{i64 7462}
!416 = !{i64 7467}
!417 = !{i64 7475}
!418 = !{i64 7482}
!419 = !{i64 7492}
!420 = !{i64 7497}
!421 = !{i64 7500}
!422 = !{i64 7510}
!423 = !{i64 7530}
!424 = !{i64 7549}
!425 = !{i64 7558}
!426 = !{i64 7563}
!427 = !{i64 7581}
!428 = !{i64 7586}
!429 = !{i64 7610}
!430 = !{i64 7625}
!431 = !{i64 7640}
!432 = !{i64 7664}
!433 = !{i64 7670}
!434 = !{i64 7694}
!435 = !{i64 7699}
!436 = !{i64 7717}
!437 = !{i64 7722}
!438 = !{i64 7729}
!439 = !{i64 7746}
!440 = !{i64 7750}
!441 = !{i64 7769}
!442 = !{i64 7778}
!443 = !{i64 7799}
!444 = !{i64 7820}
!445 = !{i64 7839}
!446 = !{i64 7848}
!447 = !{i64 7867}
!448 = !{i64 7882}
!449 = !{i64 7899}
!450 = !{i64 7906}
!451 = !{i64 7923}
!452 = !{i64 7927}
!453 = !{i64 7951}
!454 = !{i64 7970}
!455 = !{i64 7979}
!456 = !{i64 8003}
!457 = !{i64 8028}
!458 = !{i64 8045}
!459 = !{i64 8050}
!460 = !{i64 8048}
!461 = !{i64 8055}
!462 = !{i64 8061}
!463 = !{i64 8065}
!464 = !{i64 8070}
!465 = !{i64 8079}
!466 = !{i64 8086}
!467 = !{i64 8089}
!468 = !{i64 8091}
!469 = !{i64 8102}
!470 = !{i64 8106}
!471 = !{i64 8108}
!472 = !{i64 8112}
!473 = !{i64 8116}
!474 = !{i64 8121}
!475 = !{i64 8124}
!476 = !{i64 8140}
!477 = !{i64 8147}
!478 = !{i64 8152}
!479 = !{i64 8157}
!480 = !{i64 8161}
!481 = !{i64 8162}
!482 = !{i64 8166}
!483 = !{i64 8172}
!484 = !{i64 8178}
!485 = !{i64 8180}
!486 = !{i64 8182}
!487 = !{i64 8188}
!488 = !{i64 8201}
!489 = !{i64 8204}
!490 = !{i64 8218}
!491 = !{i64 8221}
!492 = !{i64 8234}
!493 = !{i64 8237}
!494 = !{i64 8241}
!495 = !{i64 8243}
!496 = !{i64 8246}
!497 = !{i64 8251}
!498 = !{i64 8260}
!499 = !{i64 8267}
!500 = !{i64 8270}
!501 = !{i64 8272}
!502 = !{i64 8284}
!503 = !{i64 8289}
!504 = !{i64 8293}
!505 = !{i64 8297}
!506 = !{i64 8298}
!507 = !{i64 8305}
!508 = !{i64 8308}
!509 = !{i64 8310}
!510 = !{i64 8313}
!511 = !{i64 8314}
!512 = !{i64 8321}
!513 = !{i64 8324}
!514 = !{i64 8328}
!515 = !{i64 8333}
!516 = !{i64 8335}
!517 = !{i64 8354}
!518 = !{i64 8373}
!519 = !{i64 8398}
!520 = !{i64 8430}
!521 = !{i64 8445}
!522 = !{i64 8462}
!523 = !{i64 8466}
!524 = !{i64 8486}
!525 = !{i64 8503}
!526 = !{i64 8507}
!527 = !{i64 8529}
!528 = !{i64 8541}
!529 = !{i64 8562}
!530 = !{i64 8592}
!531 = !{i64 8605}
!532 = !{i64 8618}
!533 = !{i64 8628}
!534 = !{i64 8630}
!535 = !{i64 8654}
!536 = !{i64 8669}
!537 = !{i64 8686}
!538 = !{i64 8690}
!539 = !{i64 8710}
!540 = !{i64 8718}
!541 = !{i64 8726}
!542 = !{i64 8743}
!543 = !{i64 8747}
!544 = !{i64 8771}
!545 = !{i64 8781}
!546 = !{i64 8796}
!547 = !{i64 8810}
!548 = !{i64 8823}
!549 = !{i64 8832}
!550 = !{i64 8834}
!551 = !{i64 8846}
!552 = !{i64 8851}
!553 = !{i64 8854}
!554 = !{i64 8868}
