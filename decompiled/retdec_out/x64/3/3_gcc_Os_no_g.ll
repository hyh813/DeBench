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
@global_var_6030 = local_unnamed_addr global i64 0
@global_var_3633 = constant [11 x i8] c"HelloWorld\00"
@global_var_6018 = local_unnamed_addr global [11 x i8]* @global_var_3633
@global_var_601c = local_unnamed_addr global i64 98784247808
@global_var_6046 = external global i64
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
@global_var_35cb = constant [17 x i8] c"MEMOP-L2-03: %c\0A\00"
@global_var_35dc = constant [17 x i8] c"MEMOP-L2-04: %d\0A\00"
@global_var_35ed = constant [17 x i8] c"MEMOP-L2-05: %d\0A\00"
@global_var_35fe = constant [17 x i8] c"MEMOP-L2-06: %d\0A\00"
@global_var_360f = constant [19 x i8] c"MEMOP-L3-01: 0x%x\0A\00"
@global_var_3622 = constant [17 x i8] c"MEMOP-L3-02: %d\0A\00"
@0 = external global i32
@global_var_3e7 = global i32 0
@1 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\88\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_3004 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @1, i64 0, i64 0)
@2 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\A0\86\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_314d = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @2, i64 0, i64 0)
@3 = internal constant [16 x i8] c"%d (\E5\AD\90\E8\BF\9B\E7\A8\8B)\0A\00"
@global_var_32a5 = constant i8* getelementptr inbounds ([16 x i8], [16 x i8]* @3, i64 0, i64 0)
@4 = internal constant [37 x i8] c"\E2\9C\93 \E5\AD\90\E8\BF\9B\E7\A8\8B\E6\AD\A3\E5\B8\B8\E9\80\80\E5\87\BA\EF\BC\8Ccode=%d\0A\00"
@global_var_32b5 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @4, i64 0, i64 0)
@5 = internal constant [11 x i8] c"fork\E5\A4\B1\E8\B4\A5\00"
@global_var_331b = constant i8* getelementptr inbounds ([11 x i8], [11 x i8]* @5, i64 0, i64 0)
@global_var_6040 = local_unnamed_addr global i32 0
@global_var_6041 = global i32 0
@global_var_3660 = constant i32* inttoptr (i64 4294967296 to i32*)
@global_var_6031 = global i32 0
@global_var_6020 = local_unnamed_addr global i32 23
@global_var_6010 = local_unnamed_addr global i32 100
@global_var_6038 = local_unnamed_addr global i32 0
@6 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\9D\99\E6\80\81\E4\B8\8E\E5\85\A8\E5\B1\80\E5\86\85\E5\AD\98 ===\00"
@global_var_3326 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @6, i64 0, i64 0)
@7 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C\E5\87\BD\E6\95\B0 ===\00"
@global_var_3588 = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @7, i64 0, i64 0)

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

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_11e0:
  %0 = call i64 @test_stack_memory(), !insn.addr !20
  %1 = call i64 @test_heap_memory(), !insn.addr !21
  %2 = call i64 @test_static_global(), !insn.addr !22
  %3 = call i64 @test_memory_op_functions(), !insn.addr !23
  ret i64 0, !insn.addr !24
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

define i64 @double_value(i64 %arg1) local_unnamed_addr {
dec_label_pc_12f9:
  %0 = mul i64 %arg1, 2, !insn.addr !40
  %1 = and i64 %0, 4294967294, !insn.addr !40
  ret i64 %1, !insn.addr !41
}

define i64 @local_vars(i64 %arg1) local_unnamed_addr {
dec_label_pc_1301:
  %factor = mul i64 %arg1, 2
  %0 = add i64 %factor, 10, !insn.addr !42
  %1 = and i64 %0, 4294967294, !insn.addr !42
  ret i64 %1, !insn.addr !43
}

define i64 @local_array(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_130a:
  %0 = alloca i32
  %rax.1.reg2mem = alloca i64, !insn.addr !44
  %rdx.0.reg2mem = alloca i64, !insn.addr !44
  %rax.0.reg2mem = alloca i64, !insn.addr !44
  %1 = load i32, i32* %0
  %stack_var_-56 = alloca i64, align 8
  %2 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !45
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !46
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !47
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !47
  br label %dec_label_pc_1324, !insn.addr !47

dec_label_pc_1324:                                ; preds = %dec_label_pc_1324, %dec_label_pc_130a
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %4 = trunc i64 %rdx.0.reload to i32, !insn.addr !48
  %5 = mul i64 %rax.0.reload, 4, !insn.addr !48
  %6 = add i64 %5, %2, !insn.addr !48
  %7 = inttoptr i64 %6 to i32*, !insn.addr !48
  store i32 %4, i32* %7, align 4, !insn.addr !48
  %8 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !49
  %9 = add i64 %rdx.0.reload, %arg1, !insn.addr !50
  %10 = and i64 %9, 4294967295, !insn.addr !50
  %exitcond = icmp eq i64 %8, 10
  store i64 %8, i64* %rax.0.reg2mem, !insn.addr !51
  store i64 %10, i64* %rdx.0.reg2mem, !insn.addr !51
  br i1 %exitcond, label %dec_label_pc_1332, label %dec_label_pc_1324, !insn.addr !51

dec_label_pc_1332:                                ; preds = %dec_label_pc_1324
  %11 = zext i32 %1 to i64, !insn.addr !52
  %12 = call i64 @__readfsqword(i64 40), !insn.addr !53
  %13 = icmp eq i64 %3, %12, !insn.addr !53
  store i64 %11, i64* %rax.1.reg2mem, !insn.addr !54
  br i1 %13, label %dec_label_pc_134b, label %dec_label_pc_1346, !insn.addr !54

dec_label_pc_1346:                                ; preds = %dec_label_pc_1332
  call void @__stack_chk_fail(), !insn.addr !55
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.1.reg2mem, !insn.addr !55
  br label %dec_label_pc_134b, !insn.addr !55

dec_label_pc_134b:                                ; preds = %dec_label_pc_1346, %dec_label_pc_1332
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !56

; uselistorder directives
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
}

define i64 @local_struct(i64 %arg1) local_unnamed_addr {
dec_label_pc_1350:
  %0 = mul i64 %arg1, 3, !insn.addr !57
  %1 = and i64 %0, 4294967295, !insn.addr !57
  ret i64 %1, !insn.addr !58
}

define i64 @address_of_local(i64 %arg1) local_unnamed_addr {
dec_label_pc_1358:
  %0 = inttoptr i64 %arg1 to i32*, !insn.addr !59
  store i32 42, i32* %0, align 4, !insn.addr !59
  ret i64 42, !insn.addr !60
}

define i64 @address_of_array() local_unnamed_addr {
dec_label_pc_1368:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !61
  %3 = and i64 %2, 4294967294, !insn.addr !61
  ret i64 %3, !insn.addr !62
}

define i64 @large_stack_frame() local_unnamed_addr {
dec_label_pc_1371:
  %0 = alloca i8
  %rax.1.reg2mem = alloca i64, !insn.addr !63
  %rax.0.reg2mem = alloca i64, !insn.addr !63
  %1 = load i8, i8* %0
  %stack_var_-2072 = alloca i64, align 8
  %2 = ptrtoint i64* %stack_var_-2072 to i64, !insn.addr !64
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !65
  %4 = add i64 %2, 8, !insn.addr !66
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !67
  br label %dec_label_pc_138f, !insn.addr !67

dec_label_pc_138f:                                ; preds = %dec_label_pc_138f, %dec_label_pc_1371
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %5 = trunc i64 %rax.0.reload to i8, !insn.addr !66
  %6 = add i64 %4, %rax.0.reload, !insn.addr !66
  %7 = inttoptr i64 %6 to i8*, !insn.addr !66
  store i8 %5, i8* %7, align 1, !insn.addr !66
  %8 = add i64 %rax.0.reload, 1, !insn.addr !68
  %9 = icmp eq i64 %8, ptrtoint (i64* @global_var_800 to i64), !insn.addr !69
  %10 = icmp eq i1 %9, false, !insn.addr !70
  store i64 %8, i64* %rax.0.reg2mem, !insn.addr !70
  br i1 %10, label %dec_label_pc_138f, label %dec_label_pc_139e, !insn.addr !70

dec_label_pc_139e:                                ; preds = %dec_label_pc_138f
  %11 = sext i8 %1 to i64, !insn.addr !71
  %12 = call i64 @__readfsqword(i64 40), !insn.addr !72
  %13 = icmp eq i64 %3, %12, !insn.addr !72
  store i64 %11, i64* %rax.1.reg2mem, !insn.addr !73
  br i1 %13, label %dec_label_pc_13be, label %dec_label_pc_13b9, !insn.addr !73

dec_label_pc_13b9:                                ; preds = %dec_label_pc_139e
  call void @__stack_chk_fail(), !insn.addr !74
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.1.reg2mem, !insn.addr !74
  br label %dec_label_pc_13be, !insn.addr !74

dec_label_pc_13be:                                ; preds = %dec_label_pc_13b9, %dec_label_pc_139e
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !75

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 2, 0, 1 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
}

define i64 @vla_stack(i64 %arg1) local_unnamed_addr {
dec_label_pc_13c6:
  %rax.2.reg2mem = alloca i64, !insn.addr !76
  %rax.1.reg2mem = alloca i64, !insn.addr !76
  %rax.0.reg2mem = alloca i64, !insn.addr !76
  %stack_var_-24 = alloca i64, align 8
  %0 = trunc i64 %arg1 to i32
  %1 = add i32 %0, -1, !insn.addr !77
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !78
  %3 = icmp ugt i32 %1, ptrtoint (i32* @global_var_3e7 to i32)
  store i64 4294967295, i64* %rax.1.reg2mem, !insn.addr !79
  br i1 %3, label %dec_label_pc_1452, label %dec_label_pc_13ef, !insn.addr !79

dec_label_pc_13ef:                                ; preds = %dec_label_pc_13c6
  %4 = ptrtoint i64* %stack_var_-24 to i64, !insn.addr !80
  %sext = mul i64 %arg1, 4294967296
  %5 = ashr exact i64 %sext, 30, !insn.addr !81
  %6 = add nsw i64 %5, 15, !insn.addr !81
  %7 = and i64 %6, -4096, !insn.addr !82
  %8 = sub i64 %4, %7, !insn.addr !83
  %9 = and i64 %6, 4080, !insn.addr !84
  %10 = sub i64 %8, %9, !insn.addr !85
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !86
  br label %dec_label_pc_143d, !insn.addr !86

dec_label_pc_143d:                                ; preds = %dec_label_pc_143d, %dec_label_pc_13ef
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %.tr = trunc i64 %rax.0.reload to i32
  %11 = mul i32 %.tr, 2, !insn.addr !87
  %12 = mul i64 %rax.0.reload, 4, !insn.addr !88
  %13 = add i64 %12, %10, !insn.addr !88
  %14 = inttoptr i64 %13 to i32*, !insn.addr !88
  store i32 %11, i32* %14, align 4, !insn.addr !88
  %15 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !89
  %16 = icmp slt i64 %15, %arg1, !insn.addr !90
  store i64 %15, i64* %rax.0.reg2mem, !insn.addr !90
  br i1 %16, label %dec_label_pc_143d, label %dec_label_pc_144a, !insn.addr !90

dec_label_pc_144a:                                ; preds = %dec_label_pc_143d
  %17 = ashr i32 %0, 1, !insn.addr !91
  %18 = sext i32 %17 to i64, !insn.addr !92
  %19 = mul i64 %18, 4, !insn.addr !93
  %20 = add i64 %10, %19, !insn.addr !93
  %21 = inttoptr i64 %20 to i32*, !insn.addr !93
  %22 = load i32, i32* %21, align 4, !insn.addr !93
  %23 = zext i32 %22 to i64, !insn.addr !93
  store i64 %23, i64* %rax.1.reg2mem, !insn.addr !93
  br label %dec_label_pc_1452, !insn.addr !93

dec_label_pc_1452:                                ; preds = %dec_label_pc_13c6, %dec_label_pc_144a
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %24 = call i64 @__readfsqword(i64 40), !insn.addr !94
  %25 = icmp eq i64 %2, %24, !insn.addr !94
  store i64 %rax.1.reload, i64* %rax.2.reg2mem, !insn.addr !95
  br i1 %25, label %dec_label_pc_1466, label %dec_label_pc_1461, !insn.addr !95

dec_label_pc_1461:                                ; preds = %dec_label_pc_1452
  call void @__stack_chk_fail(), !insn.addr !96
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.2.reg2mem, !insn.addr !96
  br label %dec_label_pc_1466, !insn.addr !96

dec_label_pc_1466:                                ; preds = %dec_label_pc_1461, %dec_label_pc_1452
  %rax.2.reload = load i64, i64* %rax.2.reg2mem
  ret i64 %rax.2.reload, !insn.addr !97

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 2, 0 }
  uselistorder i64 %10, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 %arg1, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1452, { 1, 0 }
}

define i64 @alloca_usage(i64 %arg1) local_unnamed_addr {
dec_label_pc_1468:
  %rax.2.reg2mem = alloca i64, !insn.addr !98
  %rax.1.reg2mem = alloca i64, !insn.addr !98
  %rax.0.reg2mem = alloca i64, !insn.addr !98
  %stack_var_-24 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !99
  %1 = trunc i64 %arg1 to i32, !insn.addr !100
  %2 = icmp slt i32 %1, 1
  store i64 4294967295, i64* %rax.1.reg2mem, !insn.addr !101
  br i1 %2, label %dec_label_pc_14f3, label %dec_label_pc_148a, !insn.addr !101

dec_label_pc_148a:                                ; preds = %dec_label_pc_1468
  %3 = ptrtoint i64* %stack_var_-24 to i64, !insn.addr !102
  %sext = mul i64 %arg1, 4294967296
  %4 = ashr exact i64 %sext, 30, !insn.addr !103
  %5 = add nsw i64 %4, 23, !insn.addr !103
  %6 = and i64 %5, -4096, !insn.addr !104
  %7 = and i64 %5, 4080, !insn.addr !105
  %8 = sub nsw i64 15, %7, !insn.addr !106
  %9 = sub nsw i64 %8, %6, !insn.addr !107
  %10 = add i64 %9, %3, !insn.addr !108
  %11 = and i64 %10, -16, !insn.addr !109
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !109
  br label %dec_label_pc_14de, !insn.addr !109

dec_label_pc_14de:                                ; preds = %dec_label_pc_14de, %dec_label_pc_148a
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %12 = trunc i64 %rax.0.reload to i32
  %13 = mul i32 %12, 3, !insn.addr !110
  %14 = mul i64 %rax.0.reload, 4, !insn.addr !111
  %15 = add i64 %14, %11, !insn.addr !111
  %16 = inttoptr i64 %15 to i32*, !insn.addr !111
  store i32 %13, i32* %16, align 4, !insn.addr !111
  %17 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !112
  %18 = icmp slt i64 %17, %arg1, !insn.addr !113
  store i64 %17, i64* %rax.0.reg2mem, !insn.addr !113
  br i1 %18, label %dec_label_pc_14de, label %dec_label_pc_14eb, !insn.addr !113

dec_label_pc_14eb:                                ; preds = %dec_label_pc_14de
  %19 = ashr i32 %1, 1, !insn.addr !114
  %20 = sext i32 %19 to i64, !insn.addr !115
  %21 = mul i64 %20, 4, !insn.addr !116
  %22 = add i64 %11, %21, !insn.addr !116
  %23 = inttoptr i64 %22 to i32*, !insn.addr !116
  %24 = load i32, i32* %23, align 4, !insn.addr !116
  %25 = zext i32 %24 to i64, !insn.addr !116
  store i64 %25, i64* %rax.1.reg2mem, !insn.addr !116
  br label %dec_label_pc_14f3, !insn.addr !116

dec_label_pc_14f3:                                ; preds = %dec_label_pc_14eb, %dec_label_pc_1468
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %26 = call i64 @__readfsqword(i64 40), !insn.addr !117
  %27 = icmp eq i64 %0, %26, !insn.addr !117
  store i64 %rax.1.reload, i64* %rax.2.reg2mem, !insn.addr !118
  br i1 %27, label %dec_label_pc_1507, label %dec_label_pc_1502, !insn.addr !118

dec_label_pc_1502:                                ; preds = %dec_label_pc_14f3
  call void @__stack_chk_fail(), !insn.addr !119
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.2.reg2mem, !insn.addr !119
  br label %dec_label_pc_1507, !insn.addr !119

dec_label_pc_1507:                                ; preds = %dec_label_pc_1502, %dec_label_pc_14f3
  %rax.2.reload = load i64, i64* %rax.2.reg2mem
  ret i64 %rax.2.reload, !insn.addr !120

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 2, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @stack_alias() local_unnamed_addr {
dec_label_pc_1509:
  ret i64 20, !insn.addr !121
}

define i64 @test_stack_memory() local_unnamed_addr {
dec_label_pc_1513:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3004 to i8*)), !insn.addr !122
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_3022, i64 0, i64 0), i64 20), !insn.addr !123
  %2 = call i64 @local_array(i64 2, i64 ptrtoint ([28 x i8]* @global_var_3022 to i64), i64 20), !insn.addr !124
  %3 = and i64 %2, 4294967295, !insn.addr !125
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_303e, i64 0, i64 0), i64 %3), !insn.addr !126
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_305b, i64 0, i64 0), i64 15), !insn.addr !127
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3079, i64 0, i64 0), i64 42), !insn.addr !128
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_309b, i64 0, i64 0), i64 2), !insn.addr !129
  %8 = call i64 @large_stack_frame(), !insn.addr !130
  %9 = and i64 %8, 4294967295, !insn.addr !131
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_30bd, i64 0, i64 0), i64 %9), !insn.addr !132
  %11 = call i64 @vla_stack(i64 10), !insn.addr !133
  %12 = and i64 %11, 4294967295, !insn.addr !134
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_30e0, i64 0, i64 0), i64 %12), !insn.addr !135
  %14 = call i64 @alloca_usage(i64 10), !insn.addr !136
  %15 = and i64 %14, 4294967295, !insn.addr !137
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_30fb, i64 0, i64 0), i64 %15), !insn.addr !138
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3119, i64 0, i64 0), i64 20), !insn.addr !139
  %18 = sext i32 %17 to i64, !insn.addr !139
  ret i64 %18, !insn.addr !139

; uselistorder directives
  uselistorder [28 x i8]* @global_var_3022, { 1, 0 }
}

define i64 @heap_basic(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1616:
  %r12.0.reg2mem = alloca i64, !insn.addr !140
  %storemerge2.reg2mem = alloca i64, !insn.addr !140
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !141
  %1 = call i64* @malloc(i32 %0), !insn.addr !141
  %2 = icmp eq i64* %1, null, !insn.addr !142
  store i64 4294967295, i64* %r12.0.reg2mem, !insn.addr !143
  br i1 %2, label %dec_label_pc_165f, label %dec_label_pc_163b.preheader, !insn.addr !143

dec_label_pc_163b.preheader:                      ; preds = %dec_label_pc_1616
  %sext = mul i64 %arg1, 4294967296
  %3 = ashr exact i64 %sext, 32, !insn.addr !144
  %4 = ptrtoint i64* %1 to i64, !insn.addr !141
  %5 = icmp sgt i64 %sext, 0, !insn.addr !145
  store i64 0, i64* %storemerge2.reg2mem, !insn.addr !145
  br i1 %5, label %dec_label_pc_163f, label %dec_label_pc_164a, !insn.addr !145

dec_label_pc_163f:                                ; preds = %dec_label_pc_163b.preheader, %dec_label_pc_163f
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %.tr = trunc i64 %storemerge2.reload to i32
  %6 = mul i32 %.tr, 2, !insn.addr !146
  %7 = mul i64 %storemerge2.reload, 4, !insn.addr !147
  %8 = add i64 %7, %4, !insn.addr !147
  %9 = inttoptr i64 %8 to i32*, !insn.addr !147
  store i32 %6, i32* %9, align 4, !insn.addr !147
  %10 = add nuw nsw i64 %storemerge2.reload, 1, !insn.addr !148
  %11 = icmp sgt i64 %3, %10, !insn.addr !145
  store i64 %10, i64* %storemerge2.reg2mem, !insn.addr !145
  br i1 %11, label %dec_label_pc_163f, label %dec_label_pc_164a, !insn.addr !145

dec_label_pc_164a:                                ; preds = %dec_label_pc_163f, %dec_label_pc_163b.preheader
  %12 = trunc i64 %3 to i32, !insn.addr !149
  %13 = ashr i32 %12, 31, !insn.addr !149
  %14 = and i64 %3, 4294967295, !insn.addr !150
  %15 = zext i32 %13 to i64, !insn.addr !150
  %16 = mul i64 %15, 4294967296, !insn.addr !150
  %17 = or i64 %16, %14, !insn.addr !150
  %18 = sdiv i64 %17, 2, !insn.addr !150
  %sext1 = mul i64 %18, 4294967296
  %19 = ashr exact i64 %sext1, 30, !insn.addr !151
  %20 = add i64 %19, %4, !insn.addr !151
  %21 = inttoptr i64 %20 to i32*, !insn.addr !151
  %22 = load i32, i32* %21, align 4, !insn.addr !151
  %23 = zext i32 %22 to i64, !insn.addr !151
  call void @free(i64* nonnull %1), !insn.addr !152
  store i64 %23, i64* %r12.0.reg2mem, !insn.addr !152
  br label %dec_label_pc_165f, !insn.addr !152

dec_label_pc_165f:                                ; preds = %dec_label_pc_164a, %dec_label_pc_1616
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  ret i64 %r12.0.reload, !insn.addr !153

; uselistorder directives
  uselistorder i64 %storemerge2.reload, { 0, 2, 1 }
  uselistorder i64 %3, { 1, 2, 0 }
  uselistorder i64 %sext, { 1, 0 }
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i64* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_163f, { 1, 0 }
}

define i64 @heap_calloc(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1667:
  %r12.1.reg2mem = alloca i64, !insn.addr !154
  %r12.0.lcssa.reg2mem = alloca i64, !insn.addr !154
  %r12.01.reg2mem = alloca i32, !insn.addr !154
  %storemerge2.reg2mem = alloca i64, !insn.addr !154
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !155
  %1 = trunc i64 %0 to i32, !insn.addr !156
  %2 = call i64* @calloc(i32 %1, i32 4), !insn.addr !156
  %3 = icmp eq i64* %2, null, !insn.addr !157
  store i64 4294967295, i64* %r12.1.reg2mem, !insn.addr !158
  br i1 %3, label %dec_label_pc_16a2, label %dec_label_pc_1690.preheader, !insn.addr !158

dec_label_pc_1690.preheader:                      ; preds = %dec_label_pc_1667
  %4 = ptrtoint i64* %2 to i64, !insn.addr !156
  %5 = icmp sgt i64 %sext, 0, !insn.addr !159
  store i64 0, i64* %storemerge2.reg2mem, !insn.addr !159
  store i32 0, i32* %r12.01.reg2mem, !insn.addr !159
  store i64 0, i64* %r12.0.lcssa.reg2mem, !insn.addr !159
  br i1 %5, label %dec_label_pc_1694, label %dec_label_pc_169d, !insn.addr !159

dec_label_pc_1694:                                ; preds = %dec_label_pc_1690.preheader, %dec_label_pc_1694
  %r12.01.reload = load i32, i32* %r12.01.reg2mem
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %6 = mul i64 %storemerge2.reload, 4, !insn.addr !160
  %7 = add i64 %6, %4, !insn.addr !160
  %8 = inttoptr i64 %7 to i32*, !insn.addr !160
  %9 = load i32, i32* %8, align 4, !insn.addr !160
  %10 = add i32 %9, %r12.01.reload, !insn.addr !160
  %11 = add nuw nsw i64 %storemerge2.reload, 1, !insn.addr !161
  %12 = icmp sgt i64 %0, %11, !insn.addr !159
  store i64 %11, i64* %storemerge2.reg2mem, !insn.addr !159
  store i32 %10, i32* %r12.01.reg2mem, !insn.addr !159
  br i1 %12, label %dec_label_pc_1694, label %dec_label_pc_1690.dec_label_pc_169d_crit_edge, !insn.addr !159

dec_label_pc_1690.dec_label_pc_169d_crit_edge:    ; preds = %dec_label_pc_1694
  %13 = zext i32 %10 to i64, !insn.addr !160
  store i64 %13, i64* %r12.0.lcssa.reg2mem
  br label %dec_label_pc_169d

dec_label_pc_169d:                                ; preds = %dec_label_pc_1690.dec_label_pc_169d_crit_edge, %dec_label_pc_1690.preheader
  %r12.0.lcssa.reload = load i64, i64* %r12.0.lcssa.reg2mem
  call void @free(i64* nonnull %2), !insn.addr !162
  store i64 %r12.0.lcssa.reload, i64* %r12.1.reg2mem, !insn.addr !162
  br label %dec_label_pc_16a2, !insn.addr !162

dec_label_pc_16a2:                                ; preds = %dec_label_pc_169d, %dec_label_pc_1667
  %r12.1.reload = load i64, i64* %r12.1.reg2mem
  %14 = and i64 %r12.1.reload, 4294967295, !insn.addr !163
  ret i64 %14, !insn.addr !164

; uselistorder directives
  uselistorder i32 %10, { 1, 0 }
  uselistorder i64* %2, { 0, 2, 1 }
  uselistorder i64 %sext, { 1, 0 }
  uselistorder i64* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r12.01.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r12.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1694, { 1, 0 }
}

define i64 @heap_realloc(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_16aa:
  %r12.0.reg2mem = alloca i64, !insn.addr !165
  %0 = call i64* @malloc(i32 20), !insn.addr !166
  %1 = icmp eq i64* %0, null, !insn.addr !167
  store i64 4294967295, i64* %r12.0.reg2mem, !insn.addr !168
  br i1 %1, label %dec_label_pc_1728, label %dec_label_pc_16c5, !insn.addr !168

dec_label_pc_16c5:                                ; preds = %dec_label_pc_16aa
  %2 = ptrtoint i64* %0 to i64, !insn.addr !166
  store i64 8589934593, i64* %0, align 8, !insn.addr !169
  %3 = add i64 %2, 8, !insn.addr !170
  %4 = inttoptr i64 %3 to i64*, !insn.addr !170
  store i64 17179869187, i64* %4, align 8, !insn.addr !170
  %5 = add i64 %2, 16, !insn.addr !171
  %6 = inttoptr i64 %5 to i32*, !insn.addr !171
  store i32 5, i32* %6, align 4, !insn.addr !171
  %7 = call i64* @realloc(i64* nonnull %0, i32 40), !insn.addr !172
  %8 = icmp eq i64* %7, null, !insn.addr !173
  br i1 %8, label %dec_label_pc_171a, label %dec_label_pc_1700, !insn.addr !174

dec_label_pc_1700:                                ; preds = %dec_label_pc_16c5
  %9 = ptrtoint i64* %7 to i64, !insn.addr !172
  %10 = add i64 %9, 8, !insn.addr !175
  %11 = inttoptr i64 %10 to i32*, !insn.addr !175
  %12 = load i32, i32* %11, align 4, !insn.addr !175
  %13 = icmp eq i32 %12, 3, !insn.addr !175
  %14 = icmp eq i1 %13, false, !insn.addr !176
  %15 = select i1 %14, i64 4294967293, i64 50, !insn.addr !176
  call void @free(i64* nonnull %7), !insn.addr !177
  store i64 %15, i64* %r12.0.reg2mem, !insn.addr !178
  br label %dec_label_pc_1728, !insn.addr !178

dec_label_pc_171a:                                ; preds = %dec_label_pc_16c5
  call void @free(i64* nonnull %0), !insn.addr !179
  store i64 4294967294, i64* %r12.0.reg2mem, !insn.addr !179
  br label %dec_label_pc_1728, !insn.addr !179

dec_label_pc_1728:                                ; preds = %dec_label_pc_171a, %dec_label_pc_1700, %dec_label_pc_16aa
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  ret i64 %r12.0.reload, !insn.addr !180

; uselistorder directives
  uselistorder i64* %7, { 0, 2, 1 }
  uselistorder i64* %0, { 0, 1, 2, 4, 3 }
  uselistorder i64* %r12.0.reg2mem, { 0, 2, 1, 3 }
}

define i64 @heap_array(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1730:
  %r12.0.reg2mem = alloca i64, !insn.addr !181
  %storemerge2.reg2mem = alloca i64, !insn.addr !181
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !182
  %1 = call i64* @malloc(i32 %0), !insn.addr !182
  %2 = icmp eq i64* %1, null, !insn.addr !183
  store i64 4294967295, i64* %r12.0.reg2mem, !insn.addr !184
  br i1 %2, label %dec_label_pc_1779, label %dec_label_pc_1755.preheader, !insn.addr !184

dec_label_pc_1755.preheader:                      ; preds = %dec_label_pc_1730
  %sext = mul i64 %arg1, 4294967296
  %3 = ashr exact i64 %sext, 32, !insn.addr !185
  %4 = ptrtoint i64* %1 to i64, !insn.addr !182
  %5 = icmp sgt i64 %sext, 0, !insn.addr !186
  store i64 0, i64* %storemerge2.reg2mem, !insn.addr !186
  br i1 %5, label %dec_label_pc_1759, label %dec_label_pc_1764, !insn.addr !186

dec_label_pc_1759:                                ; preds = %dec_label_pc_1755.preheader, %dec_label_pc_1759
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %6 = trunc i64 %storemerge2.reload to i32
  %7 = mul i32 %6, 3, !insn.addr !187
  %8 = mul i64 %storemerge2.reload, 4, !insn.addr !188
  %9 = add i64 %8, %4, !insn.addr !188
  %10 = inttoptr i64 %9 to i32*, !insn.addr !188
  store i32 %7, i32* %10, align 4, !insn.addr !188
  %11 = add nuw nsw i64 %storemerge2.reload, 1, !insn.addr !189
  %12 = icmp sgt i64 %3, %11, !insn.addr !186
  store i64 %11, i64* %storemerge2.reg2mem, !insn.addr !186
  br i1 %12, label %dec_label_pc_1759, label %dec_label_pc_1764, !insn.addr !186

dec_label_pc_1764:                                ; preds = %dec_label_pc_1759, %dec_label_pc_1755.preheader
  %13 = trunc i64 %3 to i32, !insn.addr !190
  %14 = ashr i32 %13, 31, !insn.addr !190
  %15 = and i64 %3, 4294967295, !insn.addr !191
  %16 = zext i32 %14 to i64, !insn.addr !191
  %17 = mul i64 %16, 4294967296, !insn.addr !191
  %18 = or i64 %17, %15, !insn.addr !191
  %19 = sdiv i64 %18, 2, !insn.addr !191
  %sext1 = mul i64 %19, 4294967296
  %20 = ashr exact i64 %sext1, 30, !insn.addr !192
  %21 = add i64 %20, %4, !insn.addr !192
  %22 = inttoptr i64 %21 to i32*, !insn.addr !192
  %23 = load i32, i32* %22, align 4, !insn.addr !192
  %24 = zext i32 %23 to i64, !insn.addr !192
  call void @free(i64* nonnull %1), !insn.addr !193
  store i64 %24, i64* %r12.0.reg2mem, !insn.addr !193
  br label %dec_label_pc_1779, !insn.addr !193

dec_label_pc_1779:                                ; preds = %dec_label_pc_1764, %dec_label_pc_1730
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  ret i64 %r12.0.reload, !insn.addr !194

; uselistorder directives
  uselistorder i64 %storemerge2.reload, { 0, 2, 1 }
  uselistorder i64 %3, { 1, 2, 0 }
  uselistorder i64 %sext, { 1, 0 }
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i64* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1759, { 1, 0 }
}

define i64 @heap_struct(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1781:
  %r12.0.reg2mem = alloca i64, !insn.addr !195
  %0 = call i64* @malloc(i32 8), !insn.addr !196
  %1 = icmp eq i64* %0, null, !insn.addr !197
  store i64 4294967295, i64* %r12.0.reg2mem, !insn.addr !198
  br i1 %1, label %dec_label_pc_17aa, label %dec_label_pc_179e, !insn.addr !198

dec_label_pc_179e:                                ; preds = %dec_label_pc_1781
  %2 = and i64 %arg1, 4294967295, !insn.addr !199
  %3 = mul nuw nsw i64 %2, 3, !insn.addr !200
  %4 = and i64 %3, 4294967295, !insn.addr !200
  call void @free(i64* nonnull %0), !insn.addr !201
  store i64 %4, i64* %r12.0.reg2mem, !insn.addr !201
  br label %dec_label_pc_17aa, !insn.addr !201

dec_label_pc_17aa:                                ; preds = %dec_label_pc_179e, %dec_label_pc_1781
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  ret i64 %r12.0.reload, !insn.addr !202
}

define i64 @heap_nested(i64* %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_17b2:
  %rax.0.reg2mem = alloca i64, !insn.addr !203
  %0 = call i64* @malloc(i32 16), !insn.addr !204
  %1 = ptrtoint i64* %0 to i64, !insn.addr !204
  store i64 %1, i64* %arg1, align 8, !insn.addr !205
  %2 = icmp eq i64* %0, null, !insn.addr !206
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !207
  br i1 %2, label %dec_label_pc_180d, label %dec_label_pc_17d4, !insn.addr !207

dec_label_pc_17d4:                                ; preds = %dec_label_pc_17b2
  %3 = bitcast i64* %0 to i32*, !insn.addr !208
  store i32 10, i32* %3, align 4, !insn.addr !208
  %4 = call i64* @malloc(i32 16), !insn.addr !209
  %5 = ptrtoint i64* %4 to i64, !insn.addr !209
  %6 = add i64 %1, 8, !insn.addr !210
  %7 = inttoptr i64 %6 to i64*, !insn.addr !210
  store i64 %5, i64* %7, align 8, !insn.addr !210
  %8 = icmp eq i64* %4, null, !insn.addr !211
  %9 = icmp eq i1 %8, false, !insn.addr !212
  br i1 %9, label %dec_label_pc_17fd, label %dec_label_pc_17ee, !insn.addr !212

dec_label_pc_17ee:                                ; preds = %dec_label_pc_17d4
  call void @free(i64* nonnull %0), !insn.addr !213
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !214
  br label %dec_label_pc_180d, !insn.addr !214

dec_label_pc_17fd:                                ; preds = %dec_label_pc_17d4
  %10 = bitcast i64* %4 to i32*, !insn.addr !215
  store i32 20, i32* %10, align 4, !insn.addr !215
  %11 = add i64 %5, 8, !insn.addr !216
  %12 = inttoptr i64 %11 to i64*, !insn.addr !216
  store i64 0, i64* %12, align 8, !insn.addr !216
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !217
  br label %dec_label_pc_180d, !insn.addr !217

dec_label_pc_180d:                                ; preds = %dec_label_pc_17fd, %dec_label_pc_17ee, %dec_label_pc_17b2
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !218

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1, 3 }
  uselistorder i32 20, { 1, 0 }
}

define i64 @linked_list_heap() local_unnamed_addr {
dec_label_pc_1811:
  %r12.2.reg2mem = alloca i64, !insn.addr !219
  %rbp.3.reg2mem = alloca i64, !insn.addr !219
  %r12.1.reg2mem = alloca i32, !insn.addr !219
  %rax.1.reg2mem = alloca i64, !insn.addr !219
  %rbp.2.reg2mem = alloca i64, !insn.addr !219
  %rbp.13.reg2mem = alloca i64, !insn.addr !219
  %r12.0.reg2mem = alloca i64, !insn.addr !219
  %rbp.0.reg2mem = alloca i64, !insn.addr !219
  %rax.0.reg2mem = alloca i64, !insn.addr !219
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !220
  store i64 0, i64* %rbp.0.reg2mem, !insn.addr !220
  store i64 0, i64* %r12.0.reg2mem, !insn.addr !220
  br label %dec_label_pc_1820, !insn.addr !220

dec_label_pc_1820:                                ; preds = %dec_label_pc_1867, %dec_label_pc_1811
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %0 = call i64* @malloc(i32 16), !insn.addr !221
  %1 = icmp eq i64* %0, null, !insn.addr !222
  %2 = icmp eq i1 %1, false, !insn.addr !223
  br i1 %2, label %dec_label_pc_184e, label %dec_label_pc_1832.preheader, !insn.addr !223

dec_label_pc_1832.preheader:                      ; preds = %dec_label_pc_1820
  %3 = icmp eq i64 %rbp.0.reload, 0, !insn.addr !224
  store i64 %rbp.0.reload, i64* %rbp.13.reg2mem, !insn.addr !225
  store i64 4294967295, i64* %r12.2.reg2mem, !insn.addr !225
  br i1 %3, label %dec_label_pc_1894, label %dec_label_pc_1837, !insn.addr !225

dec_label_pc_1837:                                ; preds = %dec_label_pc_1832.preheader, %dec_label_pc_1837
  %rbp.13.reload = load i64, i64* %rbp.13.reg2mem
  %4 = add i64 %rbp.13.reload, 8, !insn.addr !226
  %5 = inttoptr i64 %4 to i64*, !insn.addr !226
  %6 = load i64, i64* %5, align 8, !insn.addr !226
  %7 = inttoptr i64 %rbp.13.reload to i64*, !insn.addr !227
  call void @free(i64* %7), !insn.addr !227
  %8 = icmp eq i64 %6, 0, !insn.addr !224
  store i64 %6, i64* %rbp.13.reg2mem, !insn.addr !225
  store i64 4294967295, i64* %r12.2.reg2mem, !insn.addr !225
  br i1 %8, label %dec_label_pc_1894, label %dec_label_pc_1837, !insn.addr !225

dec_label_pc_184e:                                ; preds = %dec_label_pc_1820
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %9 = ptrtoint i64* %0 to i64, !insn.addr !221
  %10 = trunc i64 %r12.0.reload to i32, !insn.addr !228
  %11 = bitcast i64* %0 to i32*, !insn.addr !228
  store i32 %10, i32* %11, align 4, !insn.addr !228
  %12 = add i64 %9, 8, !insn.addr !229
  %13 = inttoptr i64 %12 to i64*, !insn.addr !229
  store i64 0, i64* %13, align 8, !insn.addr !229
  %14 = icmp eq i64 %rbp.0.reload, 0, !insn.addr !230
  store i64 %9, i64* %rbp.2.reg2mem, !insn.addr !231
  br i1 %14, label %dec_label_pc_1867, label %dec_label_pc_185e, !insn.addr !231

dec_label_pc_185e:                                ; preds = %dec_label_pc_184e
  %15 = add i64 %rax.0.reload, 8, !insn.addr !232
  %16 = inttoptr i64 %15 to i64*, !insn.addr !232
  store i64 %9, i64* %16, align 8, !insn.addr !232
  store i64 %rbp.0.reload, i64* %rbp.2.reg2mem, !insn.addr !233
  br label %dec_label_pc_1867, !insn.addr !233

dec_label_pc_1867:                                ; preds = %dec_label_pc_184e, %dec_label_pc_185e
  %rbp.2.reload = load i64, i64* %rbp.2.reg2mem
  %17 = add nuw nsw i64 %r12.0.reload, 10, !insn.addr !234
  %18 = and i64 %17, 4294967295, !insn.addr !234
  %19 = trunc i64 %17 to i32, !insn.addr !235
  %20 = icmp eq i32 %19, 50, !insn.addr !235
  %21 = icmp eq i1 %20, false, !insn.addr !236
  store i64 %9, i64* %rax.0.reg2mem, !insn.addr !236
  store i64 %rbp.2.reload, i64* %rbp.0.reg2mem, !insn.addr !236
  store i64 %18, i64* %r12.0.reg2mem, !insn.addr !236
  store i64 %rbp.2.reload, i64* %rax.1.reg2mem, !insn.addr !236
  store i32 0, i32* %r12.1.reg2mem, !insn.addr !236
  br i1 %21, label %dec_label_pc_1820, label %dec_label_pc_1877, !insn.addr !236

dec_label_pc_1877:                                ; preds = %dec_label_pc_1867, %dec_label_pc_1877
  %r12.1.reload = load i32, i32* %r12.1.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %22 = inttoptr i64 %rax.1.reload to i32*, !insn.addr !237
  %23 = load i32, i32* %22, align 4, !insn.addr !237
  %24 = add i32 %23, %r12.1.reload, !insn.addr !237
  %25 = add i64 %rax.1.reload, 8, !insn.addr !238
  %26 = inttoptr i64 %25 to i64*, !insn.addr !238
  %27 = load i64, i64* %26, align 8, !insn.addr !238
  %28 = icmp eq i64 %27, 0, !insn.addr !239
  %29 = icmp eq i1 %28, false, !insn.addr !240
  store i64 %27, i64* %rax.1.reg2mem, !insn.addr !240
  store i32 %24, i32* %r12.1.reg2mem, !insn.addr !240
  store i64 %rbp.2.reload, i64* %rbp.3.reg2mem, !insn.addr !240
  br i1 %29, label %dec_label_pc_1877, label %dec_label_pc_1883, !insn.addr !240

dec_label_pc_1883:                                ; preds = %dec_label_pc_1877, %dec_label_pc_1883
  %rbp.3.reload = load i64, i64* %rbp.3.reg2mem
  %30 = add i64 %rbp.3.reload, 8, !insn.addr !241
  %31 = inttoptr i64 %30 to i64*, !insn.addr !241
  %32 = load i64, i64* %31, align 8, !insn.addr !241
  %33 = inttoptr i64 %rbp.3.reload to i64*, !insn.addr !242
  call void @free(i64* %33), !insn.addr !242
  %34 = icmp eq i64 %32, 0, !insn.addr !243
  %35 = icmp eq i1 %34, false, !insn.addr !244
  store i64 %32, i64* %rbp.3.reg2mem, !insn.addr !244
  br i1 %35, label %dec_label_pc_1883, label %dec_label_pc_1894.loopexit, !insn.addr !244

dec_label_pc_1894.loopexit:                       ; preds = %dec_label_pc_1883
  %36 = zext i32 %24 to i64, !insn.addr !237
  store i64 %36, i64* %r12.2.reg2mem
  br label %dec_label_pc_1894

dec_label_pc_1894:                                ; preds = %dec_label_pc_1837, %dec_label_pc_1832.preheader, %dec_label_pc_1894.loopexit
  %r12.2.reload = load i64, i64* %r12.2.reg2mem
  ret i64 %r12.2.reload, !insn.addr !245

; uselistorder directives
  uselistorder i64 %rbp.3.reload, { 1, 0 }
  uselistorder i32 %24, { 1, 0 }
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
  uselistorder i64* %r12.2.reg2mem, { 0, 3, 1, 2 }
  uselistorder label %dec_label_pc_1894, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1883, { 1, 0 }
  uselistorder label %dec_label_pc_1877, { 1, 0 }
  uselistorder label %dec_label_pc_1867, { 1, 0 }
  uselistorder label %dec_label_pc_1837, { 1, 0 }
}

define i64 @create_tree_node(i64 %arg1) local_unnamed_addr {
dec_label_pc_189c:
  %0 = call i64* @malloc(i32 24), !insn.addr !246
  %1 = ptrtoint i64* %0 to i64, !insn.addr !246
  %2 = icmp eq i64* %0, null, !insn.addr !247
  br i1 %2, label %dec_label_pc_18c4, label %dec_label_pc_18b2, !insn.addr !248

dec_label_pc_18b2:                                ; preds = %dec_label_pc_189c
  %3 = trunc i64 %arg1 to i32, !insn.addr !249
  %4 = bitcast i64* %0 to i32*, !insn.addr !249
  store i32 %3, i32* %4, align 4, !insn.addr !249
  %5 = add i64 %1, 8, !insn.addr !250
  %6 = inttoptr i64 %5 to i64*, !insn.addr !250
  store i64 0, i64* %6, align 8, !insn.addr !250
  %7 = add i64 %1, 16, !insn.addr !251
  %8 = inttoptr i64 %7 to i64*, !insn.addr !251
  store i64 0, i64* %8, align 8, !insn.addr !251
  br label %dec_label_pc_18c4, !insn.addr !251

dec_label_pc_18c4:                                ; preds = %dec_label_pc_18b2, %dec_label_pc_189c
  ret i64 %1, !insn.addr !252

; uselistorder directives
  uselistorder i64 %1, { 2, 0, 1 }
}

define i64 @tree_heap_traversal(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_18c6:
  %r12.0.reg2mem = alloca i64, !insn.addr !253
  %.reg2mem = alloca i64, !insn.addr !253
  %0 = call i64 @create_tree_node(i64 10), !insn.addr !254
  %1 = icmp eq i64 %0, 0, !insn.addr !255
  store i64 4294967295, i64* %r12.0.reg2mem, !insn.addr !256
  br i1 %1, label %dec_label_pc_1951, label %dec_label_pc_18e1, !insn.addr !256

dec_label_pc_18e1:                                ; preds = %dec_label_pc_18c6
  %2 = call i64 @create_tree_node(i64 20), !insn.addr !257
  %3 = add i64 %0, 8, !insn.addr !258
  %4 = inttoptr i64 %3 to i64*, !insn.addr !258
  store i64 %2, i64* %4, align 8, !insn.addr !258
  %5 = call i64 @create_tree_node(i64 30), !insn.addr !259
  %6 = load i64, i64* %4, align 8, !insn.addr !260
  %7 = add i64 %0, 16, !insn.addr !261
  %8 = inttoptr i64 %7 to i64*, !insn.addr !261
  store i64 %5, i64* %8, align 8, !insn.addr !261
  %9 = icmp eq i64 %6, 0, !insn.addr !262
  store i64 %5, i64* %.reg2mem, !insn.addr !263
  br i1 %9, label %dec_label_pc_1913, label %dec_label_pc_1909, !insn.addr !263

dec_label_pc_1909:                                ; preds = %dec_label_pc_18e1
  %10 = icmp eq i64 %5, 0, !insn.addr !264
  %11 = icmp eq i1 %10, false, !insn.addr !265
  br i1 %11, label %dec_label_pc_1931, label %dec_label_pc_190e, !insn.addr !265

dec_label_pc_190e:                                ; preds = %dec_label_pc_1909
  %12 = inttoptr i64 %6 to i64*, !insn.addr !266
  call void @free(i64* %12), !insn.addr !266
  %.pr = load i64, i64* %8, align 8
  store i64 %.pr, i64* %.reg2mem, !insn.addr !266
  br label %dec_label_pc_1913, !insn.addr !266

dec_label_pc_1913:                                ; preds = %dec_label_pc_190e, %dec_label_pc_18e1
  %.reload = load i64, i64* %.reg2mem, !insn.addr !267
  %13 = icmp eq i64 %.reload, 0, !insn.addr !268
  br i1 %13, label %dec_label_pc_1921, label %dec_label_pc_191c, !insn.addr !269

dec_label_pc_191c:                                ; preds = %dec_label_pc_1913
  %14 = inttoptr i64 %.reload to i64*, !insn.addr !270
  call void @free(i64* %14), !insn.addr !270
  br label %dec_label_pc_1921, !insn.addr !270

dec_label_pc_1921:                                ; preds = %dec_label_pc_191c, %dec_label_pc_1913
  %15 = inttoptr i64 %0 to i64*, !insn.addr !271
  call void @free(i64* %15), !insn.addr !271
  store i64 4294967294, i64* %r12.0.reg2mem, !insn.addr !272
  br label %dec_label_pc_1951, !insn.addr !272

dec_label_pc_1931:                                ; preds = %dec_label_pc_1909
  %16 = inttoptr i64 %6 to i32*, !insn.addr !273
  %17 = load i32, i32* %16, align 4, !insn.addr !273
  %18 = inttoptr i64 %0 to i32*, !insn.addr !274
  %19 = load i32, i32* %18, align 4, !insn.addr !274
  %20 = add i32 %19, %17, !insn.addr !274
  %21 = inttoptr i64 %5 to i32*, !insn.addr !275
  %22 = load i32, i32* %21, align 4, !insn.addr !275
  %23 = add i32 %20, %22, !insn.addr !275
  %24 = zext i32 %23 to i64, !insn.addr !275
  %25 = inttoptr i64 %6 to i64*, !insn.addr !276
  call void @free(i64* %25), !insn.addr !276
  %26 = load i64, i64* %8, align 8, !insn.addr !277
  %27 = inttoptr i64 %26 to i64*, !insn.addr !278
  call void @free(i64* %27), !insn.addr !278
  %28 = inttoptr i64 %0 to i64*, !insn.addr !279
  call void @free(i64* %28), !insn.addr !279
  store i64 %24, i64* %r12.0.reg2mem, !insn.addr !279
  br label %dec_label_pc_1951, !insn.addr !279

dec_label_pc_1951:                                ; preds = %dec_label_pc_1931, %dec_label_pc_1921, %dec_label_pc_18c6
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  ret i64 %r12.0.reload, !insn.addr !280

; uselistorder directives
  uselistorder i64* %8, { 1, 0, 2 }
  uselistorder i64 %5, { 2, 1, 0, 3 }
  uselistorder i64* %.reg2mem, { 0, 2, 1 }
  uselistorder i64 16, { 1, 0, 2 }
  uselistorder i64 (i64)* @create_tree_node, { 2, 1, 0 }
}

define i64 @memory_leak(i64 %arg1) local_unnamed_addr {
dec_label_pc_1959:
  %storemerge.reg2mem = alloca i64, !insn.addr !281
  %rax.02.reg2mem = alloca i64, !insn.addr !281
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !282
  %1 = call i64* @malloc(i32 %0), !insn.addr !282
  %2 = icmp eq i64* %1, null, !insn.addr !283
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !284
  br i1 %2, label %dec_label_pc_1997, label %dec_label_pc_1977.preheader, !insn.addr !284

dec_label_pc_1977.preheader:                      ; preds = %dec_label_pc_1959
  %sext = mul i64 %arg1, 4294967296
  %3 = ashr exact i64 %sext, 32, !insn.addr !285
  %4 = ptrtoint i64* %1 to i64, !insn.addr !282
  %5 = icmp sgt i64 %sext, 0, !insn.addr !286
  store i64 0, i64* %rax.02.reg2mem, !insn.addr !286
  br i1 %5, label %dec_label_pc_197b, label %dec_label_pc_1983, !insn.addr !286

dec_label_pc_197b:                                ; preds = %dec_label_pc_1977.preheader, %dec_label_pc_197b
  %rax.02.reload = load i64, i64* %rax.02.reg2mem
  %6 = trunc i64 %rax.02.reload to i32, !insn.addr !287
  %7 = mul i64 %rax.02.reload, 4, !insn.addr !287
  %8 = add i64 %7, %4, !insn.addr !287
  %9 = inttoptr i64 %8 to i32*, !insn.addr !287
  store i32 %6, i32* %9, align 4, !insn.addr !287
  %10 = add nuw nsw i64 %rax.02.reload, 1, !insn.addr !288
  %11 = icmp sgt i64 %3, %10, !insn.addr !286
  store i64 %10, i64* %rax.02.reg2mem, !insn.addr !286
  br i1 %11, label %dec_label_pc_197b, label %dec_label_pc_1983, !insn.addr !286

dec_label_pc_1983:                                ; preds = %dec_label_pc_197b, %dec_label_pc_1977.preheader
  %12 = trunc i64 %3 to i32, !insn.addr !289
  %13 = ashr i32 %12, 31, !insn.addr !289
  %14 = and i64 %3, 4294967295, !insn.addr !290
  %15 = zext i32 %13 to i64, !insn.addr !290
  %16 = mul i64 %15, 4294967296, !insn.addr !290
  %17 = or i64 %16, %14, !insn.addr !290
  %18 = sdiv i64 %17, 2, !insn.addr !290
  %sext1 = mul i64 %18, 4294967296
  %19 = ashr exact i64 %sext1, 30, !insn.addr !291
  %20 = add i64 %19, %4, !insn.addr !291
  %21 = inttoptr i64 %20 to i32*, !insn.addr !291
  %22 = load i32, i32* %21, align 4, !insn.addr !291
  %23 = zext i32 %22 to i64, !insn.addr !291
  store i64 %23, i64* %storemerge.reg2mem, !insn.addr !292
  br label %dec_label_pc_1997, !insn.addr !292

dec_label_pc_1997:                                ; preds = %dec_label_pc_1959, %dec_label_pc_1983
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !293

; uselistorder directives
  uselistorder i64 %rax.02.reload, { 0, 2, 1 }
  uselistorder i64 %3, { 1, 2, 0 }
  uselistorder i64 %sext, { 1, 0 }
  uselistorder i64* %1, { 1, 0 }
  uselistorder i64* %rax.02.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1997, { 1, 0 }
  uselistorder label %dec_label_pc_197b, { 1, 0 }
}

define i64 @dangling_pointer() local_unnamed_addr {
dec_label_pc_1999:
  %rax.0.reg2mem = alloca i64, !insn.addr !294
  %0 = call i64* @malloc(i32 4), !insn.addr !295
  %1 = icmp eq i64* %0, null, !insn.addr !296
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !297
  br i1 %1, label %dec_label_pc_19d5, label %dec_label_pc_19b3, !insn.addr !297

dec_label_pc_19b3:                                ; preds = %dec_label_pc_1999
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_3136, i64 0, i64 0), i64 42), !insn.addr !298
  call void @free(i64* nonnull %0), !insn.addr !299
  %3 = bitcast i64* %0 to i32*, !insn.addr !300
  %4 = load i32, i32* %3, align 4, !insn.addr !300
  %5 = zext i32 %4 to i64, !insn.addr !300
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !300
  br label %dec_label_pc_19d5, !insn.addr !300

dec_label_pc_19d5:                                ; preds = %dec_label_pc_19b3, %dec_label_pc_1999
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !301

; uselistorder directives
  uselistorder i64 42, { 1, 2, 0 }
}

define i64 @double_free(i64 %arg1) local_unnamed_addr {
dec_label_pc_19d7:
  %0 = alloca i64
  %rax.0.reg2mem = alloca i64, !insn.addr !302
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %arg1, 0, !insn.addr !303
  %3 = icmp eq i1 %2, false, !insn.addr !304
  br i1 %3, label %dec_label_pc_1a0d, label %dec_label_pc_19e0, !insn.addr !304

dec_label_pc_19e0:                                ; preds = %dec_label_pc_19d7
  %4 = call i64* @malloc(i32 4), !insn.addr !305
  %5 = icmp eq i64* %4, null, !insn.addr !306
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !307
  br i1 %5, label %dec_label_pc_1a10, label %dec_label_pc_19f6, !insn.addr !307

dec_label_pc_19f6:                                ; preds = %dec_label_pc_19e0
  call void @free(i64* nonnull %4), !insn.addr !308
  call void @free(i64* nonnull %4), !insn.addr !309
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !310
  br label %dec_label_pc_1a10, !insn.addr !310

dec_label_pc_1a0d:                                ; preds = %dec_label_pc_19d7
  %6 = and i64 %1, 4294967295, !insn.addr !311
  ret i64 %6, !insn.addr !312

dec_label_pc_1a10:                                ; preds = %dec_label_pc_19f6, %dec_label_pc_19e0
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !313

; uselistorder directives
  uselistorder i32 4, { 3, 4, 0, 1, 5, 2 }
}

define i64 @heap_overflow() local_unnamed_addr {
dec_label_pc_1a12:
  %r12.0.reg2mem = alloca i64, !insn.addr !314
  %rax.0.reg2mem = alloca i64, !insn.addr !314
  %0 = call i64* @malloc(i32 40), !insn.addr !315
  %1 = ptrtoint i64* %0 to i64, !insn.addr !315
  %2 = icmp eq i64* %0, null, !insn.addr !316
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !317
  store i64 4294967295, i64* %r12.0.reg2mem, !insn.addr !317
  br i1 %2, label %dec_label_pc_1a47, label %dec_label_pc_1a30, !insn.addr !317

dec_label_pc_1a30:                                ; preds = %dec_label_pc_1a12, %dec_label_pc_1a30
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %3 = trunc i64 %rax.0.reload to i32
  %4 = mul i32 %3, 100, !insn.addr !318
  %5 = mul i64 %rax.0.reload, 4, !insn.addr !319
  %6 = add i64 %5, %1, !insn.addr !319
  %7 = inttoptr i64 %6 to i32*, !insn.addr !319
  store i32 %4, i32* %7, align 4, !insn.addr !319
  %8 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !320
  %exitcond = icmp eq i64 %8, 11
  store i64 %8, i64* %rax.0.reg2mem, !insn.addr !321
  br i1 %exitcond, label %dec_label_pc_1a3f, label %dec_label_pc_1a30, !insn.addr !321

dec_label_pc_1a3f:                                ; preds = %dec_label_pc_1a30
  %9 = bitcast i64* %0 to i32*, !insn.addr !322
  %10 = load i32, i32* %9, align 4, !insn.addr !322
  %11 = zext i32 %10 to i64, !insn.addr !322
  call void @free(i64* nonnull %0), !insn.addr !323
  store i64 %11, i64* %r12.0.reg2mem, !insn.addr !323
  br label %dec_label_pc_1a47, !insn.addr !323

dec_label_pc_1a47:                                ; preds = %dec_label_pc_1a3f, %dec_label_pc_1a12
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  ret i64 %r12.0.reload, !insn.addr !324

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 2, 0 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* (i32)* @malloc, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder label %dec_label_pc_1a30, { 1, 0 }
}

define i64 @test_heap_memory() local_unnamed_addr {
dec_label_pc_1a4d:
  %0 = alloca i64
  %rax.0.reg2mem = alloca i64, !insn.addr !325
  %rsi.0.reg2mem = alloca i64, !insn.addr !325
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %stack_var_-28 = alloca i32, align 4
  %stack_var_-24 = alloca i64, align 8
  %4 = call i64 @__readfsqword(i64 40), !insn.addr !326
  %5 = call i32 @puts(i8* bitcast (i8** @global_var_314d to i8*)), !insn.addr !327
  %6 = call i64 @heap_basic(i64 10, i64 %1, i64 %2, i64 %3), !insn.addr !328
  %7 = and i64 %6, 4294967295, !insn.addr !329
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_316b, i64 0, i64 0), i64 %7), !insn.addr !330
  %9 = call i64 @heap_calloc(i64 5, i64 ptrtoint ([29 x i8]* @global_var_316b to i64), i64 %7, i64 %3), !insn.addr !331
  %10 = and i64 %9, 4294967295, !insn.addr !332
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3188, i64 0, i64 0), i64 %10), !insn.addr !333
  %12 = call i64 @heap_realloc(i64 1, i64 ptrtoint ([30 x i8]* @global_var_3188 to i64), i64 %10, i64 %3), !insn.addr !334
  %13 = and i64 %12, 4294967295, !insn.addr !335
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_31a6, i64 0, i64 0), i64 %13), !insn.addr !336
  %15 = call i64 @heap_array(i64 10, i64 ptrtoint ([31 x i8]* @global_var_31a6 to i64), i64 %13, i64 %3), !insn.addr !337
  %16 = and i64 %15, 4294967295, !insn.addr !338
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_31c5, i64 0, i64 0), i64 %16), !insn.addr !339
  %18 = call i64 @heap_struct(i64 5, i64 ptrtoint ([29 x i8]* @global_var_31c5 to i64), i64 %16, i64 %3), !insn.addr !340
  %19 = and i64 %18, 4294967295, !insn.addr !341
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_31e2, i64 0, i64 0), i64 %19), !insn.addr !342
  store i64 0, i64* %stack_var_-24, align 8, !insn.addr !343
  %21 = call i64 @heap_nested(i64* nonnull %stack_var_-24, i64 ptrtoint ([30 x i8]* @global_var_31e2 to i64), i64 %19, i64 %3), !insn.addr !344
  %22 = and i64 %21, 4294967295, !insn.addr !345
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3200, i64 0, i64 0), i64 %22), !insn.addr !346
  %24 = load i64, i64* %stack_var_-24, align 8, !insn.addr !347
  %25 = icmp eq i64 %24, 0, !insn.addr !348
  br i1 %25, label %dec_label_pc_1b4e, label %dec_label_pc_1b3b, !insn.addr !349

dec_label_pc_1b3b:                                ; preds = %dec_label_pc_1a4d
  %26 = add i64 %24, 8, !insn.addr !350
  %27 = inttoptr i64 %26 to i64*, !insn.addr !350
  %28 = load i64, i64* %27, align 8, !insn.addr !350
  %29 = inttoptr i64 %28 to i64*, !insn.addr !351
  call void @free(i64* %29), !insn.addr !351
  %30 = load i64, i64* %stack_var_-24, align 8, !insn.addr !352
  %31 = inttoptr i64 %30 to i64*, !insn.addr !353
  call void @free(i64* %31), !insn.addr !353
  br label %dec_label_pc_1b4e, !insn.addr !353

dec_label_pc_1b4e:                                ; preds = %dec_label_pc_1b3b, %dec_label_pc_1a4d
  %32 = call i64 @linked_list_heap(), !insn.addr !354
  %33 = and i64 %32, 4294967295, !insn.addr !355
  %34 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_321e, i64 0, i64 0), i64 %33), !insn.addr !356
  %35 = call i64 @tree_heap_traversal(i64 1, i64 ptrtoint ([35 x i8]* @global_var_321e to i64), i64 %33, i64 %3), !insn.addr !357
  %36 = and i64 %35, 4294967295, !insn.addr !358
  %37 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3241, i64 0, i64 0), i64 %36), !insn.addr !359
  %38 = call i64 @memory_leak(i64 5), !insn.addr !360
  %39 = and i64 %38, 4294967295, !insn.addr !361
  %40 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3267, i64 0, i64 0), i64 %39), !insn.addr !362
  %41 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3285, i64 0, i64 0)), !insn.addr !363
  %42 = call i32 @fork(), !insn.addr !364
  %43 = icmp eq i32 %42, 0, !insn.addr !365
  %44 = icmp eq i1 %43, false, !insn.addr !366
  br i1 %44, label %dec_label_pc_1be6, label %dec_label_pc_1bc3, !insn.addr !366

dec_label_pc_1bc3:                                ; preds = %dec_label_pc_1b4e
  %45 = call i64 @dangling_pointer(), !insn.addr !367
  %46 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_32a5 to i8*)), !insn.addr !368
  call void @exit(i32 0), !insn.addr !369
  unreachable, !insn.addr !369

dec_label_pc_1be6:                                ; preds = %dec_label_pc_1b4e
  %47 = icmp slt i32 %42, 1
  br i1 %47, label %dec_label_pc_1c2b, label %dec_label_pc_1be8, !insn.addr !370

dec_label_pc_1be8:                                ; preds = %dec_label_pc_1be6
  %48 = call i32 @waitpid(i32 %42, i32* nonnull %stack_var_-28, i32 0), !insn.addr !371
  %49 = load i32, i32* %stack_var_-28, align 4, !insn.addr !372
  %50 = urem i32 %49, 128, !insn.addr !373
  %51 = icmp eq i32 %50, 0, !insn.addr !373
  store i64 ptrtoint (i8** @global_var_32b5 to i64), i64* %rsi.0.reg2mem, !insn.addr !374
  br i1 %51, label %dec_label_pc_1c1d, label %dec_label_pc_1c0b, !insn.addr !374

dec_label_pc_1c0b:                                ; preds = %dec_label_pc_1be8
  %52 = trunc i32 %50 to i8
  %53 = add nuw i8 %52, 1, !insn.addr !375
  %54 = icmp slt i8 %53, 2, !insn.addr !375
  store i64 ptrtoint (i64* @global_var_32da to i64), i64* %rsi.0.reg2mem, !insn.addr !375
  br i1 %54, label %dec_label_pc_1c37, label %dec_label_pc_1c1d, !insn.addr !375

dec_label_pc_1c1d:                                ; preds = %dec_label_pc_1c0b, %dec_label_pc_1be8
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %55 = inttoptr i64 %rsi.0.reload to i8*, !insn.addr !376
  %56 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %55), !insn.addr !376
  br label %dec_label_pc_1c37, !insn.addr !377

dec_label_pc_1c2b:                                ; preds = %dec_label_pc_1be6
  call void @perror(i8* bitcast (i8** @global_var_331b to i8*)), !insn.addr !378
  br label %dec_label_pc_1c37, !insn.addr !378

dec_label_pc_1c37:                                ; preds = %dec_label_pc_1c2b, %dec_label_pc_1c1d, %dec_label_pc_1c0b
  %57 = call i64 @__readfsqword(i64 40), !insn.addr !379
  %58 = icmp eq i64 %4, %57, !insn.addr !379
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !380
  br i1 %58, label %dec_label_pc_1c4c, label %dec_label_pc_1c47, !insn.addr !380

dec_label_pc_1c47:                                ; preds = %dec_label_pc_1c37
  call void @__stack_chk_fail(), !insn.addr !381
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !381
  br label %dec_label_pc_1c4c, !insn.addr !381

dec_label_pc_1c4c:                                ; preds = %dec_label_pc_1c47, %dec_label_pc_1c37
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !382

; uselistorder directives
  uselistorder i32 %50, { 1, 0 }
  uselistorder i64* %stack_var_-24, { 1, 2, 0, 3 }
  uselistorder i64 %3, { 6, 2, 3, 0, 1, 4, 5 }
  uselistorder i64* %0, { 2, 1, 0 }
  uselistorder [35 x i8]* @global_var_321e, { 1, 0 }
  uselistorder void (i64*)* @free, { 1, 0, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 21 }
  uselistorder i64 8, { 11, 1, 0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12 }
  uselistorder [30 x i8]* @global_var_31e2, { 1, 0 }
  uselistorder [29 x i8]* @global_var_31c5, { 1, 0 }
  uselistorder [31 x i8]* @global_var_31a6, { 1, 0 }
  uselistorder [30 x i8]* @global_var_3188, { 1, 0 }
  uselistorder [29 x i8]* @global_var_316b, { 1, 0 }
}

define i64 @global_var_access() local_unnamed_addr {
dec_label_pc_1c51:
  store i32 ptrtoint (i32* @global_var_6041 to i32), i32* @global_var_6040, align 4, !insn.addr !383
  ret i64 ptrtoint (i32* @global_var_6041 to i64), !insn.addr !384

; uselistorder directives
  uselistorder i32* @global_var_6041, { 1, 0 }
}

define i64 @global_var_read() local_unnamed_addr {
dec_label_pc_1c64:
  %0 = load i32, i32* @global_var_6040, align 4, !insn.addr !385
  %1 = mul i32 %0, 2, !insn.addr !386
  %2 = zext i32 %1 to i64, !insn.addr !386
  ret i64 %2, !insn.addr !387
}

define i64 @global_array_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_1c71:
  %rax.0.reg2mem = alloca i64, !insn.addr !388
  %0 = trunc i64 %arg1 to i32, !insn.addr !389
  %1 = icmp ult i32 %0, 10
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !390
  br i1 %1, label %dec_label_pc_1c7d, label %dec_label_pc_1c8a, !insn.addr !390

dec_label_pc_1c7d:                                ; preds = %dec_label_pc_1c71
  %sext = mul i64 %arg1, 4294967296
  %2 = ashr exact i64 %sext, 30, !insn.addr !391
  %3 = add i64 %2, ptrtoint (i32** @global_var_3660 to i64), !insn.addr !391
  %4 = inttoptr i64 %3 to i32*, !insn.addr !391
  %5 = load i32, i32* %4, align 4, !insn.addr !391
  %6 = zext i32 %5 to i64, !insn.addr !391
  store i64 %6, i64* %rax.0.reg2mem, !insn.addr !391
  br label %dec_label_pc_1c8a, !insn.addr !391

dec_label_pc_1c8a:                                ; preds = %dec_label_pc_1c71, %dec_label_pc_1c7d
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !392

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1c8a, { 1, 0 }
}

define i64 @static_local(i64 %arg1) local_unnamed_addr {
dec_label_pc_1c8b:
  %0 = trunc i64 %arg1 to i32, !insn.addr !393
  %1 = icmp eq i32 %0, 0, !insn.addr !393
  %2 = icmp eq i1 %1, false, !insn.addr !394
  %spec.select = select i1 %2, i64 0, i64 ptrtoint (i32* @global_var_6031 to i64)
  %3 = trunc i64 %spec.select to i32, !insn.addr !395
  store i32 %3, i32* bitcast (i64* @global_var_6030 to i32*), align 8, !insn.addr !395
  ret i64 %spec.select, !insn.addr !396

; uselistorder directives
  uselistorder i64 %spec.select, { 1, 0 }
}

define i64 @call_static_func(i64 %arg1) local_unnamed_addr {
dec_label_pc_1ca4:
  %factor = mul i64 %arg1, 2
  %0 = and i64 %factor, 4294967294, !insn.addr !397
  %1 = or i64 %0, 1, !insn.addr !397
  ret i64 %1, !insn.addr !398
}

define i64 @access_extern_global() local_unnamed_addr {
dec_label_pc_1cad:
  %0 = load i32, i32* inttoptr (i64 24608 to i32*), align 32, !insn.addr !399
  %1 = add i32 %0, 100, !insn.addr !400
  %2 = zext i32 %1 to i64, !insn.addr !400
  ret i64 %2, !insn.addr !401
}

define i64 @call_extern_func() local_unnamed_addr {
dec_label_pc_1cbb:
  %0 = call i64 @extern_function(i64 5), !insn.addr !402
  ret i64 %0, !insn.addr !402
}

define i64 @read_const_data() local_unnamed_addr {
dec_label_pc_1cc9:
  ret i64 ptrtoint (i64* @global_var_6046 to i64), !insn.addr !403
}

define i64 @access_bss_var() local_unnamed_addr {
dec_label_pc_1cdc:
  ret i64 0, !insn.addr !404
}

define i64 @access_bss_buffer() local_unnamed_addr {
dec_label_pc_1ce3:
  ret i64 0, !insn.addr !405
}

define i64 @global_struct_access() local_unnamed_addr {
dec_label_pc_1cea:
  ret i64 30, !insn.addr !406

; uselistorder directives
  uselistorder i64 30, { 0, 1, 2, 7, 3, 4, 5, 6 }
}

define i64 @set_file_static(i64 %arg1) local_unnamed_addr {
dec_label_pc_1cf4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg1 to i32, !insn.addr !407
  store i32 %2, i32* @global_var_6010, align 4, !insn.addr !407
  ret i64 %1, !insn.addr !408
}

define i64 @get_file_static() local_unnamed_addr {
dec_label_pc_1cff:
  %0 = load i32, i32* @global_var_6010, align 4, !insn.addr !409
  %1 = zext i32 %0 to i64, !insn.addr !409
  ret i64 %1, !insn.addr !410
}

define i64 @set_global_callback(i64 %arg1) local_unnamed_addr {
dec_label_pc_1d0a:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg1 to i32, !insn.addr !411
  store i32 %2, i32* @global_var_6038, align 4, !insn.addr !411
  ret i64 %1, !insn.addr !412
}

define i64 @call_global_callback() local_unnamed_addr {
dec_label_pc_1d16:
  %0 = load i32, i32* @global_var_6038, align 4, !insn.addr !413
  %1 = icmp eq i32 %0, 0, !insn.addr !414
  br i1 %1, label %dec_label_pc_1d28, label %dec_label_pc_1d26, !insn.addr !415

dec_label_pc_1d26:                                ; preds = %dec_label_pc_1d16
  %2 = sext i32 %0 to i64, !insn.addr !413
  ret i64 %2, !insn.addr !416

dec_label_pc_1d28:                                ; preds = %dec_label_pc_1d16
  ret i64 4294967295, !insn.addr !417

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
}

define i64 @global_heap_store(i64 %arg1) local_unnamed_addr {
dec_label_pc_1d2c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %arg1, 0, !insn.addr !418
  %3 = and i64 %1, 4294967295
  %rax.0 = select i1 %2, i64 4294967295, i64 %3
  ret i64 %rax.0, !insn.addr !419
}

define i64 @static_complex_init() local_unnamed_addr {
dec_label_pc_1d3b:
  ret i64 15, !insn.addr !420

; uselistorder directives
  uselistorder i64 15, { 0, 3, 1, 2 }
}

define i64 @tls_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_1d45:
  %0 = mul i64 %arg1, 2, !insn.addr !421
  %1 = and i64 %0, 4294967294, !insn.addr !421
  ret i64 %1, !insn.addr !422
}

define i64 @init_order_test() local_unnamed_addr {
dec_label_pc_1d4d:
  ret i64 20, !insn.addr !423
}

define i64 @test_static_global() local_unnamed_addr {
dec_label_pc_1d57:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3326 to i8*)), !insn.addr !424
  %1 = call i64 @global_var_access(), !insn.addr !425
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_334a, i64 0, i64 0)), !insn.addr !426
  %3 = load i32, i32* @global_var_6040, align 4, !insn.addr !427
  %4 = mul i32 %3, 2, !insn.addr !428
  %5 = zext i32 %4 to i64, !insn.addr !428
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_336d, i64 0, i64 0), i64 %5), !insn.addr !429
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_338e, i64 0, i64 0), i64 5), !insn.addr !430
  store i32 1, i32* bitcast (i64* @global_var_6030 to i32*), align 8, !insn.addr !431
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_33b3, i64 0, i64 0), i64 1), !insn.addr !432
  store i32 ptrtoint (i32* @global_var_6031 to i32), i32* bitcast (i64* @global_var_6030 to i32*), align 8, !insn.addr !433
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_33b3, i64 0, i64 0), i64 ptrtoint (i32* @global_var_6031 to i64)), !insn.addr !434
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_33d1, i64 0, i64 0), i64 11), !insn.addr !435
  %11 = load i32, i32* @global_var_6020, align 4, !insn.addr !436
  %12 = add i32 %11, 100, !insn.addr !437
  %13 = zext i32 %12 to i64, !insn.addr !437
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_33f3, i64 0, i64 0), i64 %13), !insn.addr !438
  %15 = call i64 @call_extern_func(), !insn.addr !439
  %16 = and i64 %15, 4294967295, !insn.addr !440
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3419, i64 0, i64 0), i64 %16), !insn.addr !441
  %18 = call i64 @read_const_data(), !insn.addr !442
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_343b, i64 0, i64 0)), !insn.addr !443
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_345c, i64 0, i64 0), i64 0), !insn.addr !444
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_347c, i64 0, i64 0), i64 0), !insn.addr !445
  %22 = call i64 @global_struct_access(), !insn.addr !446
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_349f, i64 0, i64 0)), !insn.addr !447
  store i32 50, i32* @global_var_6010, align 4, !insn.addr !448
  %24 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_34c5, i64 0, i64 0), i64 50), !insn.addr !449
  store i32 4857, i32* @global_var_6038, align 4, !insn.addr !450
  %25 = call i64 @call_global_callback(), !insn.addr !451
  %26 = and i64 %25, 4294967295, !insn.addr !452
  %27 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_34e2, i64 0, i64 0), i64 %26), !insn.addr !453
  %28 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3503, i64 0, i64 0), i64 100), !insn.addr !454
  %29 = call i64 @static_complex_init(), !insn.addr !455
  %30 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_3526, i64 0, i64 0)), !insn.addr !456
  %31 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_354b, i64 0, i64 0), i64 20), !insn.addr !457
  %32 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3567, i64 0, i64 0), i64 20), !insn.addr !458
  %33 = sext i32 %32 to i64, !insn.addr !458
  ret i64 %33, !insn.addr !458

; uselistorder directives
  uselistorder i32* @global_var_6038, { 2, 1, 0 }
  uselistorder i64 50, { 1, 0 }
  uselistorder i32* @global_var_6010, { 2, 1, 0 }
  uselistorder i32 50, { 1, 0 }
  uselistorder i32 100, { 0, 3, 1, 2 }
  uselistorder i64 ptrtoint (i32* @global_var_6031 to i64), { 1, 0 }
  uselistorder i32* @global_var_6040, { 2, 1, 0 }
}

define i64 @memop_memset(i64* %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1f61:
  %0 = icmp eq i64* %arg1, null, !insn.addr !459
  %1 = icmp eq i64 %arg2, 0, !insn.addr !460
  %or.cond = or i1 %0, %1
  br i1 %or.cond, label %dec_label_pc_1f7e, label %dec_label_pc_1f77, !insn.addr !461

dec_label_pc_1f77:                                ; preds = %dec_label_pc_1f61
  %2 = ptrtoint i64* %arg1 to i64
  %3 = bitcast i64* %arg1 to i8*, !insn.addr !462
  %4 = trunc i64 %arg3 to i8, !insn.addr !462
  call void @__asm_rep_stosb_memset(i8* %3, i8 %4, i64 %arg2), !insn.addr !462
  %5 = urem i64 %2, 256, !insn.addr !463
  ret i64 %5, !insn.addr !464

dec_label_pc_1f7e:                                ; preds = %dec_label_pc_1f61
  ret i64 4294967295, !insn.addr !465

; uselistorder directives
  uselistorder i64* %arg1, { 0, 2, 1 }
}

define i64 @memop_memcpy(i64* %arg1, i64* %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1f82:
  %0 = icmp eq i64* %arg2, null, !insn.addr !466
  %1 = icmp eq i64 %arg3, 0, !insn.addr !467
  %2 = or i1 %0, %1
  %3 = icmp eq i1 %2, false, !insn.addr !468
  %4 = icmp eq i1 %3, false, !insn.addr !469
  %5 = icmp eq i64* %arg1, null, !insn.addr !470
  %or.cond = or i1 %5, %4
  br i1 %or.cond, label %dec_label_pc_1fb1, label %dec_label_pc_1fa0, !insn.addr !469

dec_label_pc_1fa0:                                ; preds = %dec_label_pc_1f82
  %6 = ptrtoint i64* %arg1 to i64
  %7 = and i64 %arg3, -4, !insn.addr !471
  %8 = bitcast i64* %arg2 to i8*, !insn.addr !472
  %9 = bitcast i64* %arg1 to i8*, !insn.addr !472
  call void @__asm_rep_movsb_memcpy(i8* %9, i8* %8, i64 %arg3), !insn.addr !472
  %10 = add i64 %6, -4, !insn.addr !473
  %11 = add i64 %10, %7, !insn.addr !473
  %12 = inttoptr i64 %11 to i32*, !insn.addr !473
  %13 = load i32, i32* %12, align 4, !insn.addr !473
  %14 = zext i32 %13 to i64, !insn.addr !473
  ret i64 %14, !insn.addr !474

dec_label_pc_1fb1:                                ; preds = %dec_label_pc_1f82
  ret i64 4294967295, !insn.addr !475

; uselistorder directives
  uselistorder i64* %arg1, { 0, 2, 1 }
}

define i64 @memop_memmove(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1fb5:
  %0 = icmp eq i64* %arg1, null, !insn.addr !476
  %1 = icmp ult i64 %arg2, 2
  %or.cond = or i1 %0, %1
  br i1 %or.cond, label %dec_label_pc_1fde, label %dec_label_pc_1fc4, !insn.addr !477

dec_label_pc_1fc4:                                ; preds = %dec_label_pc_1fb5
  %2 = ptrtoint i64* %arg1 to i64
  %3 = add i64 %2, 1, !insn.addr !478
  %4 = inttoptr i64 %3 to i64*, !insn.addr !479
  %5 = trunc i64 %arg2 to i32
  %6 = add i32 %5, -1, !insn.addr !479
  %7 = call i64* @memmove(i64* %4, i64* nonnull %arg1, i32 %6), !insn.addr !479
  %8 = inttoptr i64 %3 to i8*, !insn.addr !480
  %9 = load i8, i8* %8, align 1, !insn.addr !480
  %10 = sext i8 %9 to i64, !insn.addr !480
  ret i64 %10, !insn.addr !481

dec_label_pc_1fde:                                ; preds = %dec_label_pc_1fb5
  ret i64 4294967295, !insn.addr !482

; uselistorder directives
  uselistorder i64 %arg2, { 1, 0 }
  uselistorder i64* %arg1, { 0, 2, 1 }
}

define i64 @memop_memcmp(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1fe2:
  %merge.reg2mem = alloca i64, !insn.addr !483
  %0 = icmp eq i64 %arg2, 0, !insn.addr !484
  %1 = icmp eq i64 %arg3, 0, !insn.addr !485
  %2 = or i1 %0, %1
  %3 = icmp eq i1 %2, false, !insn.addr !486
  %4 = icmp eq i1 %3, false, !insn.addr !487
  %5 = icmp eq i64 %arg1, 0, !insn.addr !488
  %or.cond = or i1 %5, %4
  store i64 0, i64* %merge.reg2mem, !insn.addr !487
  br i1 %or.cond, label %dec_label_pc_2018, label %dec_label_pc_1ffb, !insn.addr !487

dec_label_pc_1ffb:                                ; preds = %dec_label_pc_1fe2
  %6 = inttoptr i64 %arg1 to i64*, !insn.addr !489
  %7 = inttoptr i64 %arg2 to i64*, !insn.addr !489
  %8 = trunc i64 %arg3 to i32, !insn.addr !489
  %9 = call i32 @memcmp(i64* %6, i64* %7, i32 %8), !insn.addr !489
  %10 = icmp eq i32 %9, 0, !insn.addr !490
  %11 = icmp slt i32 %9, 0, !insn.addr !490
  %12 = icmp eq i1 %11, false, !insn.addr !491
  %13 = icmp eq i1 %10, false, !insn.addr !491
  %14 = icmp eq i1 %12, %13, !insn.addr !491
  %15 = select i1 %13, i64 4294967295, i64 0
  %spec.select = select i1 %14, i64 1, i64 %15
  store i64 %spec.select, i64* %merge.reg2mem
  br label %dec_label_pc_2018

dec_label_pc_2018:                                ; preds = %dec_label_pc_1ffb, %dec_label_pc_1fe2
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !492

; uselistorder directives
  uselistorder i32 %9, { 1, 0 }
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @memop_bzero(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_201d:
  %rax.0.reg2mem = alloca i64, !insn.addr !493
  %0 = icmp eq i64* %arg1, null, !insn.addr !494
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !495
  br i1 %0, label %dec_label_pc_2036, label %dec_label_pc_202f, !insn.addr !495

dec_label_pc_202f:                                ; preds = %dec_label_pc_201d
  %1 = ptrtoint i64* %arg1 to i64
  %2 = bitcast i64* %arg1 to i8*, !insn.addr !496
  call void @__asm_rep_stosb_memset(i8* %2, i8 0, i64 %arg2), !insn.addr !496
  %3 = urem i64 %1, 256, !insn.addr !497
  store i64 %3, i64* %rax.0.reg2mem, !insn.addr !497
  br label %dec_label_pc_2036, !insn.addr !497

dec_label_pc_2036:                                ; preds = %dec_label_pc_202f, %dec_label_pc_201d
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !498

; uselistorder directives
  uselistorder i64* %arg1, { 0, 2, 1 }
}

define i64 @memop_bcopy(i64* %arg1, i64* %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2037:
  %0 = icmp eq i64* %arg2, null, !insn.addr !499
  %1 = icmp eq i64 %arg3, 0, !insn.addr !500
  %2 = or i1 %0, %1
  %3 = icmp eq i1 %2, false, !insn.addr !501
  %4 = icmp eq i1 %3, false, !insn.addr !502
  %5 = icmp eq i64* %arg1, null, !insn.addr !503
  %or.cond = or i1 %5, %4
  br i1 %or.cond, label %dec_label_pc_2066, label %dec_label_pc_2055, !insn.addr !502

dec_label_pc_2055:                                ; preds = %dec_label_pc_2037
  %6 = trunc i64 %arg3 to i32, !insn.addr !504
  %7 = call i64* @memmove(i64* %arg2, i64* nonnull %arg1, i32 %6), !insn.addr !504
  %8 = bitcast i64* %7 to i8*, !insn.addr !505
  %9 = load i8, i8* %8, align 1, !insn.addr !505
  %10 = zext i8 %9 to i64, !insn.addr !505
  ret i64 %10, !insn.addr !506

dec_label_pc_2066:                                ; preds = %dec_label_pc_2037
  ret i64 4294967295, !insn.addr !507

; uselistorder directives
  uselistorder i64* (i64*, i64*, i32)* @memmove, { 1, 0, 2 }
}

define i64 @memop_unaligned_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_206a:
  %rax.0.reg2mem = alloca i64, !insn.addr !508
  %0 = icmp eq i64 %arg1, 0, !insn.addr !509
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !510
  br i1 %0, label %dec_label_pc_2079, label %dec_label_pc_2076, !insn.addr !510

dec_label_pc_2076:                                ; preds = %dec_label_pc_206a
  %1 = add i64 %arg1, 1, !insn.addr !511
  %2 = inttoptr i64 %1 to i32*, !insn.addr !511
  %3 = load i32, i32* %2, align 4, !insn.addr !511
  %4 = zext i32 %3 to i64, !insn.addr !511
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !511
  br label %dec_label_pc_2079, !insn.addr !511

dec_label_pc_2079:                                ; preds = %dec_label_pc_2076, %dec_label_pc_206a
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !512
}

define i64 @memop_memory_barrier(i64* %arg1) local_unnamed_addr {
dec_label_pc_207a:
  %0 = alloca i64
  %rax.0.reg2mem = alloca i64, !insn.addr !513
  %1 = load i64, i64* %0
  %2 = icmp eq i64* %arg1, null, !insn.addr !514
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !515
  br i1 %2, label %dec_label_pc_208f, label %dec_label_pc_2086, !insn.addr !515

dec_label_pc_2086:                                ; preds = %dec_label_pc_207a
  %3 = call i64 @__asm_mfence(), !insn.addr !516
  %4 = mul i64 %1, 2, !insn.addr !517
  %5 = and i64 %4, 4294967294, !insn.addr !517
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !517
  br label %dec_label_pc_208f, !insn.addr !517

dec_label_pc_208f:                                ; preds = %dec_label_pc_2086, %dec_label_pc_207a
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !518

; uselistorder directives
  uselistorder i64 4294967294, { 4, 8, 6, 0, 1, 2, 3, 5, 7, 9 }
  uselistorder i64 2, { 0, 6, 1, 2, 7, 8, 9, 10, 11, 3, 4, 5 }
  uselistorder i64* null, { 2, 0, 3, 4, 5, 1, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21 }
}

define i64 @test_memory_op_functions() local_unnamed_addr {
dec_label_pc_2090:
  %rax.0.reg2mem = alloca i64, !insn.addr !519
  %stack_var_-372 = alloca i64, align 8
  %stack_var_-301 = alloca i64, align 8
  %stack_var_-297 = alloca i64, align 8
  %stack_var_-293 = alloca i64, align 8
  %stack_var_-368 = alloca i64, align 8
  %stack_var_-356 = alloca i64, align 8
  %stack_var_-283 = alloca i64, align 8
  %stack_var_-272 = alloca i64, align 8
  %stack_var_-344 = alloca i64, align 8
  %stack_var_-324 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !520
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_3588 to i8*)), !insn.addr !521
  store i64 85899345930, i64* %stack_var_-344, align 8, !insn.addr !522
  %2 = bitcast i64* %stack_var_-324 to i8*, !insn.addr !523
  call void @__asm_rep_stosd_memset(i8* nonnull %2, i32 0, i64 5), !insn.addr !523
  %3 = call i64 @memop_memset(i64* nonnull %stack_var_-272, i64 10, i64 65), !insn.addr !524
  %4 = and i64 %3, 4294967295, !insn.addr !525
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_35a9, i64 0, i64 0), i64 %4), !insn.addr !526
  %6 = call i64 @memop_memcpy(i64* nonnull %stack_var_-324, i64* nonnull %stack_var_-344, i64 20, i64 0), !insn.addr !527
  %7 = and i64 %6, 4294967295, !insn.addr !528
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_35ba, i64 0, i64 0), i64 %7), !insn.addr !529
  %9 = bitcast i64* %stack_var_-283 to i8*, !insn.addr !530
  call void @__asm_rep_movsb_memcpy(i8* nonnull %9, i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_3633, i64 0, i64 0), i64 11), !insn.addr !530
  %10 = call i64 @memop_memmove(i64* nonnull %stack_var_-283, i64 10), !insn.addr !531
  %11 = trunc i64 %10 to i8, !insn.addr !532
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_35cb, i64 0, i64 0), i8 %11), !insn.addr !532
  store i64 8589934593, i64* %stack_var_-368, align 8, !insn.addr !533
  store i64 8589934593, i64* %stack_var_-356, align 8, !insn.addr !534
  %13 = call i32 @memcmp(i64* nonnull %stack_var_-368, i64* nonnull %stack_var_-356, i32 12), !insn.addr !535
  %14 = icmp eq i32 %13, 0, !insn.addr !536
  %15 = icmp slt i32 %13, 0, !insn.addr !536
  %16 = icmp eq i1 %15, false, !insn.addr !537
  %17 = icmp eq i1 %14, false, !insn.addr !537
  %18 = icmp eq i1 %16, %17, !insn.addr !537
  %19 = select i1 %17, i64 4294967295, i64 0
  %spec.select = select i1 %18, i64 1, i64 %19
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_35dc, i64 0, i64 0), i64 %spec.select), !insn.addr !538
  %21 = call i64 @memop_bzero(i64* nonnull %stack_var_-293, i64 10), !insn.addr !539
  %22 = and i64 %21, 4294967295, !insn.addr !540
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_35ed, i64 0, i64 0), i64 %22), !insn.addr !541
  store i64 67305985, i64* %stack_var_-301, align 8, !insn.addr !542
  store i64 0, i64* %stack_var_-297, align 8, !insn.addr !543
  %24 = call i64 @memop_bcopy(i64* nonnull %stack_var_-301, i64* nonnull %stack_var_-297, i64 4), !insn.addr !544
  %25 = and i64 %24, 4294967295, !insn.addr !545
  %26 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_35fe, i64 0, i64 0), i64 %25), !insn.addr !546
  %27 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_360f, i64 0, i64 0), i32 67305985), !insn.addr !547
  store i64 5, i64* %stack_var_-372, align 8, !insn.addr !548
  %28 = call i64 @memop_memory_barrier(i64* nonnull %stack_var_-372), !insn.addr !549
  %29 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3622, i64 0, i64 0)), !insn.addr !550
  %30 = call i64 @__readfsqword(i64 40), !insn.addr !551
  %31 = icmp eq i64 %0, %30, !insn.addr !551
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !552
  br i1 %31, label %dec_label_pc_2287, label %dec_label_pc_2282, !insn.addr !552

dec_label_pc_2282:                                ; preds = %dec_label_pc_2090
  call void @__stack_chk_fail(), !insn.addr !553
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !553
  br label %dec_label_pc_2287, !insn.addr !553

dec_label_pc_2287:                                ; preds = %dec_label_pc_2282, %dec_label_pc_2090
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !554

; uselistorder directives
  uselistorder i32 %13, { 1, 0 }
  uselistorder void ()* @__stack_chk_fail, { 5, 3, 0, 1, 2, 4, 6 }
  uselistorder i64 4, { 10, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }
  uselistorder i64 1, { 1, 6, 2, 8, 3, 0, 4, 5, 7, 9, 10, 11, 12, 13, 14, 15, 16 }
  uselistorder i1 false, { 12, 3, 10, 0, 5, 4, 6, 1, 11, 2, 7, 20, 8, 13, 14, 15, 16, 17, 18, 19, 21, 9 }
  uselistorder i64 8589934593, { 1, 0, 2 }
  uselistorder void (i8*, i8*, i64)* @__asm_rep_movsb_memcpy, { 1, 0 }
  uselistorder i64 11, { 1, 2, 0 }
  uselistorder i64 20, { 2, 3, 4, 0, 5, 6, 8, 7, 1 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 21, 8, 7, 6, 5, 4, 3, 2, 1, 0, 48 }
  uselistorder i64 10, { 3, 4, 5, 6, 7, 8, 2, 9, 10, 0, 1 }
  uselistorder i32 0, { 14, 15, 2, 11, 12, 3, 13, 16, 4, 5, 17, 0, 1, 6, 7, 8, 9, 10 }
  uselistorder i32 (i8*)* @puts, { 3, 2, 1, 0, 4 }
  uselistorder i64 0, { 0, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 45, 57, 58, 59, 60, 61, 62, 142, 63, 64, 146, 152, 65, 1, 42, 147, 148, 153, 43, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 66, 82, 83, 67, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 149, 19, 20, 44, 2, 102, 103, 104, 105, 106, 107, 108, 109, 166, 110, 111, 145, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 3, 150, 122, 123, 4, 23, 156, 157, 158, 159, 154, 155, 160, 161, 162, 163, 164, 27, 5, 6, 7, 8, 165, 9, 24, 10, 11, 25, 12, 26, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 13, 14, 15, 16, 17, 151, 21, 22, 18, 167, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 143, 144 }
}

define i64 @extern_function(i64 %arg1) local_unnamed_addr {
dec_label_pc_228f:
  %0 = mul i64 %arg1, 3, !insn.addr !555
  %1 = and i64 %0, 4294967295, !insn.addr !555
  ret i64 %1, !insn.addr !556

; uselistorder directives
  uselistorder i64 4294967295, { 27, 28, 29, 30, 31, 32, 0, 1, 19, 2, 33, 20, 21, 22, 34, 35, 26, 24, 23, 3, 36, 37, 38, 39, 40, 41, 42, 43, 44, 4, 25, 5, 6, 45, 7, 8, 46, 9, 10, 11, 47, 48, 12, 49, 13, 14, 50, 15, 51, 16, 52, 53, 54, 55, 17, 18, 56, 57 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_2298:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !557

; uselistorder directives
  uselistorder i32 1, { 8, 60, 61, 62, 63, 64, 65, 66, 67, 119, 118, 117, 116, 115, 114, 113, 112, 111, 110, 11, 12, 7, 13, 14, 15, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 126, 83, 84, 85, 6, 5, 4, 16, 86, 59, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 120, 109, 18, 17, 3, 20, 19, 21, 2, 98, 22, 24, 23, 26, 25, 35, 34, 33, 32, 31, 30, 29, 28, 27, 36, 37, 39, 38, 40, 44, 43, 42, 41, 46, 45, 99, 100, 101, 102, 103, 104, 105, 106, 107, 127, 108, 121, 49, 48, 47, 128, 122, 52, 51, 50, 123, 54, 53, 10, 1, 124, 57, 56, 55, 9, 0, 125, 58 }
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
!52 = !{i64 4914}
!53 = !{i64 4923}
!54 = !{i64 4932}
!55 = !{i64 4934}
!56 = !{i64 4943}
!57 = !{i64 4948}
!58 = !{i64 4951}
!59 = !{i64 4956}
!60 = !{i64 4967}
!61 = !{i64 4974}
!62 = !{i64 4976}
!63 = !{i64 4977}
!64 = !{i64 4981}
!65 = !{i64 4988}
!66 = !{i64 5007}
!67 = !{i64 5005}
!68 = !{i64 5011}
!69 = !{i64 5014}
!70 = !{i64 5020}
!71 = !{i64 5022}
!72 = !{i64 5038}
!73 = !{i64 5047}
!74 = !{i64 5049}
!75 = !{i64 5061}
!76 = !{i64 5062}
!77 = !{i64 5067}
!78 = !{i64 5077}
!79 = !{i64 5101}
!80 = !{i64 5073}
!81 = !{i64 5109}
!82 = !{i64 5120}
!83 = !{i64 5131}
!84 = !{i64 5157}
!85 = !{i64 5162}
!86 = !{i64 5179}
!87 = !{i64 5181}
!88 = !{i64 5184}
!89 = !{i64 5187}
!90 = !{i64 5192}
!91 = !{i64 5194}
!92 = !{i64 5196}
!93 = !{i64 5199}
!94 = !{i64 5206}
!95 = !{i64 5215}
!96 = !{i64 5217}
!97 = !{i64 5223}
!98 = !{i64 5224}
!99 = !{i64 5236}
!100 = !{i64 5254}
!101 = !{i64 5256}
!102 = !{i64 5232}
!103 = !{i64 5264}
!104 = !{i64 5275}
!105 = !{i64 5312}
!106 = !{i64 5286}
!107 = !{i64 5317}
!108 = !{i64 5331}
!109 = !{i64 5338}
!110 = !{i64 5342}
!111 = !{i64 5345}
!112 = !{i64 5348}
!113 = !{i64 5353}
!114 = !{i64 5355}
!115 = !{i64 5357}
!116 = !{i64 5360}
!117 = !{i64 5367}
!118 = !{i64 5376}
!119 = !{i64 5378}
!120 = !{i64 5384}
!121 = !{i64 5394}
!122 = !{i64 5407}
!123 = !{i64 5431}
!124 = !{i64 5441}
!125 = !{i64 5458}
!126 = !{i64 5462}
!127 = !{i64 5486}
!128 = !{i64 5510}
!129 = !{i64 5534}
!130 = !{i64 5541}
!131 = !{i64 5558}
!132 = !{i64 5562}
!133 = !{i64 5572}
!134 = !{i64 5589}
!135 = !{i64 5593}
!136 = !{i64 5603}
!137 = !{i64 5620}
!138 = !{i64 5624}
!139 = !{i64 5649}
!140 = !{i64 5654}
!141 = !{i64 5676}
!142 = !{i64 5681}
!143 = !{i64 5684}
!144 = !{i64 5660}
!145 = !{i64 5693}
!146 = !{i64 5695}
!147 = !{i64 5698}
!148 = !{i64 5701}
!149 = !{i64 5713}
!150 = !{i64 5714}
!151 = !{i64 5718}
!152 = !{i64 5722}
!153 = !{i64 5734}
!154 = !{i64 5735}
!155 = !{i64 5741}
!156 = !{i64 5758}
!157 = !{i64 5763}
!158 = !{i64 5766}
!159 = !{i64 5778}
!160 = !{i64 5780}
!161 = !{i64 5784}
!162 = !{i64 5789}
!163 = !{i64 5794}
!164 = !{i64 5801}
!165 = !{i64 5802}
!166 = !{i64 5819}
!167 = !{i64 5824}
!168 = !{i64 5827}
!169 = !{i64 5847}
!170 = !{i64 5864}
!171 = !{i64 5868}
!172 = !{i64 5875}
!173 = !{i64 5883}
!174 = !{i64 5886}
!175 = !{i64 5888}
!176 = !{i64 5903}
!177 = !{i64 5907}
!178 = !{i64 5912}
!179 = !{i64 5923}
!180 = !{i64 5935}
!181 = !{i64 5936}
!182 = !{i64 5958}
!183 = !{i64 5963}
!184 = !{i64 5966}
!185 = !{i64 5942}
!186 = !{i64 5975}
!187 = !{i64 5977}
!188 = !{i64 5980}
!189 = !{i64 5983}
!190 = !{i64 5995}
!191 = !{i64 5996}
!192 = !{i64 6000}
!193 = !{i64 6004}
!194 = !{i64 6016}
!195 = !{i64 6017}
!196 = !{i64 6036}
!197 = !{i64 6041}
!198 = !{i64 6044}
!199 = !{i64 6028}
!200 = !{i64 6049}
!201 = !{i64 6053}
!202 = !{i64 6065}
!203 = !{i64 6066}
!204 = !{i64 6081}
!205 = !{i64 6089}
!206 = !{i64 6095}
!207 = !{i64 6098}
!208 = !{i64 6105}
!209 = !{i64 6112}
!210 = !{i64 6117}
!211 = !{i64 6121}
!212 = !{i64 6124}
!213 = !{i64 6129}
!214 = !{i64 6139}
!215 = !{i64 6141}
!216 = !{i64 6147}
!217 = !{i64 6155}
!218 = !{i64 6160}
!219 = !{i64 6161}
!220 = !{i64 6175}
!221 = !{i64 6184}
!222 = !{i64 6189}
!223 = !{i64 6192}
!224 = !{i64 6194}
!225 = !{i64 6197}
!226 = !{i64 6199}
!227 = !{i64 6206}
!228 = !{i64 6222}
!229 = !{i64 6225}
!230 = !{i64 6233}
!231 = !{i64 6236}
!232 = !{i64 6238}
!233 = !{i64 6242}
!234 = !{i64 6247}
!235 = !{i64 6251}
!236 = !{i64 6255}
!237 = !{i64 6263}
!238 = !{i64 6266}
!239 = !{i64 6270}
!240 = !{i64 6273}
!241 = !{i64 6278}
!242 = !{i64 6282}
!243 = !{i64 6287}
!244 = !{i64 6290}
!245 = !{i64 6299}
!246 = !{i64 6312}
!247 = !{i64 6317}
!248 = !{i64 6320}
!249 = !{i64 6322}
!250 = !{i64 6324}
!251 = !{i64 6332}
!252 = !{i64 6341}
!253 = !{i64 6342}
!254 = !{i64 6359}
!255 = !{i64 6364}
!256 = !{i64 6367}
!257 = !{i64 6377}
!258 = !{i64 6387}
!259 = !{i64 6391}
!260 = !{i64 6396}
!261 = !{i64 6400}
!262 = !{i64 6404}
!263 = !{i64 6407}
!264 = !{i64 6409}
!265 = !{i64 6412}
!266 = !{i64 6414}
!267 = !{i64 6419}
!268 = !{i64 6423}
!269 = !{i64 6426}
!270 = !{i64 6428}
!271 = !{i64 6442}
!272 = !{i64 6447}
!273 = !{i64 6449}
!274 = !{i64 6452}
!275 = !{i64 6456}
!276 = !{i64 6459}
!277 = !{i64 6464}
!278 = !{i64 6468}
!279 = !{i64 6476}
!280 = !{i64 6488}
!281 = !{i64 6489}
!282 = !{i64 6504}
!283 = !{i64 6514}
!284 = !{i64 6517}
!285 = !{i64 6494}
!286 = !{i64 6521}
!287 = !{i64 6523}
!288 = !{i64 6526}
!289 = !{i64 6538}
!290 = !{i64 6539}
!291 = !{i64 6543}
!292 = !{i64 6546}
!293 = !{i64 6552}
!294 = !{i64 6553}
!295 = !{i64 6563}
!296 = !{i64 6574}
!297 = !{i64 6577}
!298 = !{i64 6598}
!299 = !{i64 6606}
!300 = !{i64 6611}
!301 = !{i64 6614}
!302 = !{i64 6615}
!303 = !{i64 6619}
!304 = !{i64 6622}
!305 = !{i64 6630}
!306 = !{i64 6641}
!307 = !{i64 6644}
!308 = !{i64 6649}
!309 = !{i64 6657}
!310 = !{i64 6667}
!311 = !{i64 6669}
!312 = !{i64 6671}
!313 = !{i64 6673}
!314 = !{i64 6674}
!315 = !{i64 6689}
!316 = !{i64 6694}
!317 = !{i64 6697}
!318 = !{i64 6704}
!319 = !{i64 6707}
!320 = !{i64 6710}
!321 = !{i64 6717}
!322 = !{i64 6719}
!323 = !{i64 6722}
!324 = !{i64 6732}
!325 = !{i64 6733}
!326 = !{i64 6748}
!327 = !{i64 6764}
!328 = !{i64 6774}
!329 = !{i64 6791}
!330 = !{i64 6795}
!331 = !{i64 6805}
!332 = !{i64 6822}
!333 = !{i64 6826}
!334 = !{i64 6833}
!335 = !{i64 6850}
!336 = !{i64 6854}
!337 = !{i64 6864}
!338 = !{i64 6881}
!339 = !{i64 6885}
!340 = !{i64 6895}
!341 = !{i64 6912}
!342 = !{i64 6916}
!343 = !{i64 6926}
!344 = !{i64 6935}
!345 = !{i64 6952}
!346 = !{i64 6956}
!347 = !{i64 6961}
!348 = !{i64 6966}
!349 = !{i64 6969}
!350 = !{i64 6971}
!351 = !{i64 6975}
!352 = !{i64 6980}
!353 = !{i64 6985}
!354 = !{i64 6992}
!355 = !{i64 7009}
!356 = !{i64 7013}
!357 = !{i64 7020}
!358 = !{i64 7037}
!359 = !{i64 7041}
!360 = !{i64 7051}
!361 = !{i64 7068}
!362 = !{i64 7072}
!363 = !{i64 7091}
!364 = !{i64 7096}
!365 = !{i64 7103}
!366 = !{i64 7105}
!367 = !{i64 7109}
!368 = !{i64 7130}
!369 = !{i64 7137}
!370 = !{i64 7142}
!371 = !{i64 7151}
!372 = !{i64 7156}
!373 = !{i64 7173}
!374 = !{i64 7177}
!375 = !{i64 7185}
!376 = !{i64 7204}
!377 = !{i64 7209}
!378 = !{i64 7218}
!379 = !{i64 7228}
!380 = !{i64 7237}
!381 = !{i64 7239}
!382 = !{i64 7248}
!383 = !{i64 7261}
!384 = !{i64 7267}
!385 = !{i64 7272}
!386 = !{i64 7278}
!387 = !{i64 7280}
!388 = !{i64 7281}
!389 = !{i64 7288}
!390 = !{i64 7291}
!391 = !{i64 7303}
!392 = !{i64 7306}
!393 = !{i64 7313}
!394 = !{i64 7315}
!395 = !{i64 7325}
!396 = !{i64 7331}
!397 = !{i64 7336}
!398 = !{i64 7340}
!399 = !{i64 7345}
!400 = !{i64 7351}
!401 = !{i64 7354}
!402 = !{i64 7364}
!403 = !{i64 7387}
!404 = !{i64 7394}
!405 = !{i64 7401}
!406 = !{i64 7411}
!407 = !{i64 7416}
!408 = !{i64 7422}
!409 = !{i64 7427}
!410 = !{i64 7433}
!411 = !{i64 7438}
!412 = !{i64 7445}
!413 = !{i64 7450}
!414 = !{i64 7457}
!415 = !{i64 7460}
!416 = !{i64 7462}
!417 = !{i64 7467}
!418 = !{i64 7475}
!419 = !{i64 7482}
!420 = !{i64 7492}
!421 = !{i64 7497}
!422 = !{i64 7500}
!423 = !{i64 7510}
!424 = !{i64 7530}
!425 = !{i64 7549}
!426 = !{i64 7558}
!427 = !{i64 7563}
!428 = !{i64 7581}
!429 = !{i64 7586}
!430 = !{i64 7610}
!431 = !{i64 7625}
!432 = !{i64 7640}
!433 = !{i64 7664}
!434 = !{i64 7670}
!435 = !{i64 7694}
!436 = !{i64 7699}
!437 = !{i64 7717}
!438 = !{i64 7722}
!439 = !{i64 7729}
!440 = !{i64 7746}
!441 = !{i64 7750}
!442 = !{i64 7769}
!443 = !{i64 7778}
!444 = !{i64 7799}
!445 = !{i64 7820}
!446 = !{i64 7839}
!447 = !{i64 7848}
!448 = !{i64 7867}
!449 = !{i64 7882}
!450 = !{i64 7899}
!451 = !{i64 7906}
!452 = !{i64 7923}
!453 = !{i64 7927}
!454 = !{i64 7951}
!455 = !{i64 7970}
!456 = !{i64 7979}
!457 = !{i64 8003}
!458 = !{i64 8028}
!459 = !{i64 8045}
!460 = !{i64 8050}
!461 = !{i64 8048}
!462 = !{i64 8055}
!463 = !{i64 8057}
!464 = !{i64 8061}
!465 = !{i64 8065}
!466 = !{i64 8070}
!467 = !{i64 8079}
!468 = !{i64 8086}
!469 = !{i64 8089}
!470 = !{i64 8091}
!471 = !{i64 8102}
!472 = !{i64 8106}
!473 = !{i64 8108}
!474 = !{i64 8112}
!475 = !{i64 8116}
!476 = !{i64 8121}
!477 = !{i64 8124}
!478 = !{i64 8140}
!479 = !{i64 8147}
!480 = !{i64 8152}
!481 = !{i64 8157}
!482 = !{i64 8161}
!483 = !{i64 8162}
!484 = !{i64 8166}
!485 = !{i64 8172}
!486 = !{i64 8178}
!487 = !{i64 8180}
!488 = !{i64 8182}
!489 = !{i64 8188}
!490 = !{i64 8201}
!491 = !{i64 8204}
!492 = !{i64 8218}
!493 = !{i64 8221}
!494 = !{i64 8234}
!495 = !{i64 8237}
!496 = !{i64 8241}
!497 = !{i64 8243}
!498 = !{i64 8246}
!499 = !{i64 8251}
!500 = !{i64 8260}
!501 = !{i64 8267}
!502 = !{i64 8270}
!503 = !{i64 8272}
!504 = !{i64 8284}
!505 = !{i64 8289}
!506 = !{i64 8293}
!507 = !{i64 8297}
!508 = !{i64 8298}
!509 = !{i64 8305}
!510 = !{i64 8308}
!511 = !{i64 8310}
!512 = !{i64 8313}
!513 = !{i64 8314}
!514 = !{i64 8321}
!515 = !{i64 8324}
!516 = !{i64 8328}
!517 = !{i64 8333}
!518 = !{i64 8335}
!519 = !{i64 8336}
!520 = !{i64 8354}
!521 = !{i64 8373}
!522 = !{i64 8398}
!523 = !{i64 8430}
!524 = !{i64 8445}
!525 = !{i64 8462}
!526 = !{i64 8466}
!527 = !{i64 8486}
!528 = !{i64 8503}
!529 = !{i64 8507}
!530 = !{i64 8529}
!531 = !{i64 8541}
!532 = !{i64 8562}
!533 = !{i64 8592}
!534 = !{i64 8605}
!535 = !{i64 8618}
!536 = !{i64 8628}
!537 = !{i64 8630}
!538 = !{i64 8654}
!539 = !{i64 8669}
!540 = !{i64 8686}
!541 = !{i64 8690}
!542 = !{i64 8710}
!543 = !{i64 8718}
!544 = !{i64 8726}
!545 = !{i64 8743}
!546 = !{i64 8747}
!547 = !{i64 8771}
!548 = !{i64 8781}
!549 = !{i64 8796}
!550 = !{i64 8810}
!551 = !{i64 8823}
!552 = !{i64 8832}
!553 = !{i64 8834}
!554 = !{i64 8846}
!555 = !{i64 8851}
!556 = !{i64 8854}
!557 = !{i64 8868}
