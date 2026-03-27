source_filename = "test"
target datalayout = "e-m:e-i64:64-i128:128-n32:64-S128"

@global_var_13f28 = local_unnamed_addr global i64 2480
@global_var_13f30 = local_unnamed_addr global i64 2480
@global_var_13f38 = local_unnamed_addr global i64 2480
@global_var_13f40 = local_unnamed_addr global i64 2480
@global_var_13f48 = local_unnamed_addr global i64 2480
@global_var_13f50 = local_unnamed_addr global i64 2480
@global_var_13f58 = local_unnamed_addr global i64 2480
@global_var_13f60 = local_unnamed_addr global i64 2480
@global_var_13f68 = local_unnamed_addr global i64 2480
@global_var_13f70 = local_unnamed_addr global i64 2480
@global_var_13f78 = local_unnamed_addr global i64 2480
@global_var_13f80 = local_unnamed_addr global i64 2480
@global_var_13f88 = local_unnamed_addr global i64 2480
@global_var_13f90 = local_unnamed_addr global i64 2480
@global_var_13f98 = local_unnamed_addr global i64 2480
@global_var_13fa0 = local_unnamed_addr global i64 2480
@global_var_13fa8 = local_unnamed_addr global i64 2480
@global_var_13fb0 = local_unnamed_addr global i64 2480
@global_var_13fb8 = local_unnamed_addr global i64 2480
@global_var_13fe8 = local_unnamed_addr global i64 2816
@global_var_14000 = global i64 0
@global_var_14028 = global i64 0
@global_var_13fc8 = local_unnamed_addr global i64 0
@global_var_13ff8 = local_unnamed_addr global i64 0
@global_var_c34 = local_unnamed_addr constant i64 4107461394746572832
@global_var_13fe0 = local_unnamed_addr global i64 0
@global_var_1000 = local_unnamed_addr constant i64 1729380690631327776
@global_var_1fc8 = constant [28 x i8] c"MEM-L1-01 (local_vars): %d\0A\00"
@global_var_1fe8 = constant [29 x i8] c"MEM-L1-02 (local_array): %d\0A\00"
@global_var_2000 = local_unnamed_addr constant [5 x i8] c" %d\0A\00"
@global_var_2008 = constant [30 x i8] c"MEM-L1-03 (local_struct): %d\0A\00"
@global_var_2028 = constant [34 x i8] c"MEM-L1-04 (address_of_local): %d\0A\00"
@global_var_2050 = constant [34 x i8] c"MEM-L1-05 (address_of_array): %d\0A\00"
@global_var_2078 = constant [35 x i8] c"MEM-L2-01 (large_stack_frame): %d\0A\00"
@global_var_20a0 = constant [27 x i8] c"MEM-L2-02 (vla_stack): %d\0A\00"
@global_var_20c0 = constant [30 x i8] c"MEM-L2-03 (alloca_usage): %d\0A\00"
@global_var_20e0 = constant [29 x i8] c"MEM-L2-04 (stack_alias): %d\0A\00"
@global_var_127c = local_unnamed_addr constant i64 1729382222860910624
@global_var_1348 = local_unnamed_addr constant i64 -5116089092068605856
@global_var_13e0 = local_unnamed_addr constant i64 -6250622504361000928
@global_var_2100 = constant [23 x i8] c"value before free: %d\0A\00"
@global_var_14f4 = local_unnamed_addr constant i64 -486375621140676576
@global_var_2138 = constant [29 x i8] c"HEAP-L2-01 (heap_basic): %d\0A\00"
@global_var_2158 = constant [30 x i8] c"HEAP-L2-02 (heap_calloc): %d\0A\00"
@global_var_2178 = constant [31 x i8] c"HEAP-L2-03 (heap_realloc): %d\0A\00"
@global_var_2198 = constant [29 x i8] c"HEAP-L2-04 (heap_array): %d\0A\00"
@global_var_21b8 = constant [30 x i8] c"HEAP-L2-05 (heap_struct): %d\0A\00"
@global_var_22f8 = constant [30 x i8] c"HEAP-L2-06 (heap_nested): %d\0A\00"
@global_var_21d8 = constant [35 x i8] c"HEAP-L3-01 (linked_list_heap): %d\0A\00"
@global_var_2200 = constant [38 x i8] c"HEAP-L3-02 (tree_heap_traversal): %d\0A\00"
@global_var_2228 = constant [30 x i8] c"HEAP-L3-03 (memory_leak): %d\0A\00"
@global_var_2248 = constant [32 x i8] c"HEAP-L3-04 (dangling_pointer): \00"
@global_var_18a0 = local_unnamed_addr constant i64 1729381746119540770
@global_counter = local_unnamed_addr global i32 0
@global_array = constant [10 x i32] [i32 0, i32 1, i32 2, i32 3, i32 4, i32 5, i32 6, i32 7, i32 8, i32 9]
@global_var_14034 = local_unnamed_addr global i64 0
@extern_global_var = global i32 23
@global_var_13ff0 = local_unnamed_addr global i32* @extern_global_var
@0 = internal constant [3 x i8] c"\B0&\00"
@const_string = local_unnamed_addr global i8* getelementptr inbounds ([3 x i8], [3 x i8]* @0, i64 0, i64 0)
@file_scope_static = local_unnamed_addr global i32 100
@global_func_ptr = local_unnamed_addr global i32 (i32)* null
@global_var_2340 = constant [35 x i8] c"STM-L1-01 (global_var_access): %d\0A\00"
@global_var_2368 = constant [33 x i8] c"STM-L1-01 (global_var_read): %d\0A\00"
@global_var_23b8 = constant [30 x i8] c"STM-L1-03 (static_local): %d\0A\00"
@global_var_2390 = constant [37 x i8] c"STM-L1-02 (global_array_access): %d\0A\00"
@global_var_23d8 = constant [34 x i8] c"STM-L1-04 (call_static_func): %d\0A\00"
@global_var_2400 = constant [38 x i8] c"STM-L2-01 (access_extern_global): %d\0A\00"
@global_var_2428 = constant [34 x i8] c"STM-L2-02 (call_extern_func): %d\0A\00"
@global_var_2450 = constant [33 x i8] c"STM-L2-03 (read_const_data): %d\0A\00"
@global_var_2478 = constant [32 x i8] c"STM-L2-04 (access_bss_var): %d\0A\00"
@global_var_2498 = constant [35 x i8] c"STM-L2-04 (access_bss_buffer): %d\0A\00"
@global_var_24c0 = constant [38 x i8] c"STM-L2-05 (global_struct_access): %d\0A\00"
@global_var_24e8 = constant [29 x i8] c"STM-L2-06 (file_static): %d\0A\00"
@global_var_2508 = constant [33 x i8] c"STM-L2-07 (global_func_ptr): %d\0A\00"
@global_var_2530 = constant [35 x i8] c"STM-L2-08 (global_heap_store): %d\0A\00"
@global_var_2558 = constant [37 x i8] c"STM-L2-09 (static_complex_init): %d\0A\00"
@global_var_2580 = constant [28 x i8] c"STM-L3-01 (tls_access): %d\0A\00"
@global_var_25a0 = constant [33 x i8] c"STM-L3-02 (init_order_test): %d\0A\00"
@global_var_25f0 = constant [17 x i8] c"MEMOP-L2-01: %d\0A\00"
@global_var_2608 = constant [17 x i8] c"MEMOP-L2-02: %d\0A\00"
@global_var_26b0 = local_unnamed_addr constant [11 x i8] c"HelloWorld\00"
@global_var_26b7 = local_unnamed_addr constant [4 x i8] c"rld\00"
@global_var_2620 = constant [17 x i8] c"MEMOP-L2-03: %c\0A\00"
@global_var_1e94 = local_unnamed_addr constant i64 5944751945452355619
@global_var_2638 = constant [17 x i8] c"MEMOP-L2-04: %d\0A\00"
@global_var_2650 = constant [17 x i8] c"MEMOP-L2-05: %d\0A\00"
@global_var_2668 = constant [17 x i8] c"MEMOP-L2-06: %d\0A\00"
@global_var_2680 = constant [19 x i8] c"MEMOP-L3-01: 0x%x\0A\00"
@global_var_2698 = constant [17 x i8] c"MEMOP-L3-02: %d\0A\00"
@1 = external global i32
@global_var_800 = global i1 false
@global_var_3e7 = global i32 0
@2 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\88\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_1fa8 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @2, i64 0, i64 0)
@global_var_44c = global i1 false
@3 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\A0\86\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_2118 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @3, i64 0, i64 0)
@4 = internal constant [11 x i8] c"fork\E5\A4\B1\E8\B4\A5\00"
@global_var_22e8 = constant i8* getelementptr inbounds ([11 x i8], [11 x i8]* @4, i64 0, i64 0)
@5 = internal constant [16 x i8] c"%d (\E5\AD\90\E8\BF\9B\E7\A8\8B)\0A\00"
@global_var_2268 = constant i8* getelementptr inbounds ([16 x i8], [16 x i8]* @5, i64 0, i64 0)
@6 = internal constant [65 x i8] c"\E2\9C\97 \E5\AD\90\E8\BF\9B\E7\A8\8B\E8\A2\AB\E4\BF\A1\E5\8F\B7\E7\BB\88\E6\AD\A2 (\E4\BF\A1\E5\8F\B7%d) - \E9\87\8E\E6\8C\87\E9\92\88\E5\AF\BC\E8\87\B4\E5\B4\A9\E6\BA\83\0A\00"
@global_var_22a0 = constant i8* getelementptr inbounds ([65 x i8], [65 x i8]* @6, i64 0, i64 0)
@7 = internal constant [37 x i8] c"\E2\9C\93 \E5\AD\90\E8\BF\9B\E7\A8\8B\E6\AD\A3\E5\B8\B8\E9\80\80\E5\87\BA\EF\BC\8Ccode=%d\0A\00"
@global_var_2278 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @7, i64 0, i64 0)
@global_var_14035 = global i32 0
@global_var_1401c = local_unnamed_addr global i32 0
@8 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\9D\99\E6\80\81\E4\B8\8E\E5\85\A8\E5\B1\80\E5\86\85\E5\AD\98 ===\00"
@global_var_2318 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @8, i64 0, i64 0)
@9 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C\E5\87\BD\E6\95\B0 ===\00"
@global_var_25c8 = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @9, i64 0, i64 0)

define i64 @_init(i64 %arg1) local_unnamed_addr {
dec_label_pc_990:
  %0 = call i64 @call_weak_fn(), !insn.addr !0
  ret i64 %0, !insn.addr !1
}

define i64* @function_9d0(i64* %dest, i64* %src, i32 %n) local_unnamed_addr {
dec_label_pc_9d0:
  %0 = call i64* @memcpy(i64* %dest, i64* %src, i32 %n), !insn.addr !2
  ret i64* %0, !insn.addr !2
}

define i64* @function_9e0(i64* %dest, i64* %src, i32 %n) local_unnamed_addr {
dec_label_pc_9e0:
  %0 = call i64* @memmove(i64* %dest, i64* %src, i32 %n), !insn.addr !3
  ret i64* %0, !insn.addr !3
}

define void @function_9f0(i32 %status) local_unnamed_addr {
dec_label_pc_9f0:
  call void @exit(i32 %status), !insn.addr !4
  ret void, !insn.addr !4
}

define i32 @function_a00(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_a00:
  %0 = call i32 @__libc_start_main(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define void @function_a10(i8* %s) local_unnamed_addr {
dec_label_pc_a10:
  call void @perror(i8* %s), !insn.addr !6
  ret void, !insn.addr !6
}

define void @function_a20(i64* %d) local_unnamed_addr {
dec_label_pc_a20:
  call void @__cxa_finalize(i64* %d), !insn.addr !7
  ret void, !insn.addr !7
}

define i32 @function_a30() local_unnamed_addr {
dec_label_pc_a30:
  %0 = call i32 @fork(), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i64* @function_a40(i32 %size) local_unnamed_addr {
dec_label_pc_a40:
  %0 = call i64* @malloc(i32 %size), !insn.addr !9
  ret i64* %0, !insn.addr !9
}

define i32 @function_a50(i32 %flag, i8* %format, ...) local_unnamed_addr {
dec_label_pc_a50:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 %flag, i8* %format), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i64* @function_a60(i64* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_a60:
  %0 = call i64* @memset(i64* %s, i32 %c, i32 %n), !insn.addr !11
  ret i64* %0, !insn.addr !11
}

define i64* @function_a70(i32 %nmemb, i32 %size) local_unnamed_addr {
dec_label_pc_a70:
  %0 = call i64* @calloc(i32 %nmemb, i32 %size), !insn.addr !12
  ret i64* %0, !insn.addr !12
}

define i64* @function_a80(i64* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_a80:
  %0 = call i64* @realloc(i64* %ptr, i32 %size), !insn.addr !13
  ret i64* %0, !insn.addr !13
}

define void @function_a90() local_unnamed_addr {
dec_label_pc_a90:
  call void @__stack_chk_fail(), !insn.addr !14
  ret void, !insn.addr !14
}

define void @function_aa0() local_unnamed_addr {
dec_label_pc_aa0:
  call void @__gmon_start__(), !insn.addr !15
  ret void, !insn.addr !15
}

define void @function_ab0() local_unnamed_addr {
dec_label_pc_ab0:
  call void @abort(), !insn.addr !16
  ret void, !insn.addr !16
}

define i32 @function_ac0(i8* %s) local_unnamed_addr {
dec_label_pc_ac0:
  %0 = call i32 @puts(i8* %s), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i32 @function_ad0(i64* %s1, i64* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_ad0:
  %0 = call i32 @memcmp(i64* %s1, i64* %s2, i32 %n), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define void @function_ae0(i64* %ptr) local_unnamed_addr {
dec_label_pc_ae0:
  call void @free(i64* %ptr), !insn.addr !19
  ret void, !insn.addr !19
}

define i32 @function_af0(i32 %pid, i32* %stat_loc, i32 %options) local_unnamed_addr {
dec_label_pc_af0:
  %0 = call i32 @waitpid(i32 %pid, i32* %stat_loc, i32 %options), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i32 @main() local_unnamed_addr {
dec_label_pc_b00:
  call void @test_stack_memory(), !insn.addr !21
  call void @test_heap_memory(), !insn.addr !22
  call void @test_static_global(), !insn.addr !23
  call void @test_memory_op_functions(), !insn.addr !24
  ret i32 0, !insn.addr !25
}

define i64 @_start(i64 %arg1) local_unnamed_addr {
dec_label_pc_b40:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_8 = alloca i64, align 8
  %2 = load i64, i64* @global_var_13fe8, align 8, !insn.addr !26
  %3 = trunc i64 %arg1 to i32, !insn.addr !27
  %4 = bitcast i64* %stack_var_8 to i8**, !insn.addr !27
  %5 = inttoptr i64 %1 to void ()*, !insn.addr !27
  %6 = call i32 @__libc_start_main(i64 %2, i32 %3, i8** nonnull %4, void ()* null, void ()* null, void ()* %5), !insn.addr !27
  call void @abort(), !insn.addr !28
  ret i64 ptrtoint (i32* @1 to i64), !insn.addr !28
}

define i64 @call_weak_fn() local_unnamed_addr {
dec_label_pc_b74:
  %0 = load i64, i64* inttoptr (i64 81880 to i64*), align 8, !insn.addr !29
  %1 = icmp eq i64 %0, 0, !insn.addr !30
  br i1 %1, label %dec_label_pc_b84, label %dec_label_pc_b80, !insn.addr !30

dec_label_pc_b80:                                 ; preds = %dec_label_pc_b74
  call void @__gmon_start__(), !insn.addr !31
  ret i64 ptrtoint (i32* @1 to i64), !insn.addr !31

dec_label_pc_b84:                                 ; preds = %dec_label_pc_b74
  ret i64 0, !insn.addr !32
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_b90:
  ret i64 ptrtoint (i64* @global_var_14028 to i64), !insn.addr !33
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_bc0:
  ret i64 ptrtoint (i64* @global_var_14028 to i64), !insn.addr !34
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_c00:
  %x0.0.reg2mem = alloca i64, !insn.addr !35
  %0 = load i8, i8* bitcast (i64* @global_var_14028 to i8*), align 8, !insn.addr !36
  %1 = zext i8 %0 to i64, !insn.addr !36
  %2 = icmp eq i8 %0, 0, !insn.addr !37
  store i64 %1, i64* %x0.0.reg2mem, !insn.addr !37
  br i1 %2, label %dec_label_pc_c18, label %dec_label_pc_c3c, !insn.addr !37

dec_label_pc_c18:                                 ; preds = %dec_label_pc_c00
  %3 = load i64, i64* inttoptr (i64 81872 to i64*), align 16, !insn.addr !38
  %4 = icmp eq i64 %3, 0, !insn.addr !39
  br i1 %4, label %dec_label_pc_c30, label %dec_label_pc_c24, !insn.addr !39

dec_label_pc_c24:                                 ; preds = %dec_label_pc_c18
  %5 = load i64, i64* inttoptr (i64 add (i64 ptrtoint (i64* @global_var_14000 to i64), i64 8) to i64*), align 8, !insn.addr !40
  %6 = inttoptr i64 %5 to i64*, !insn.addr !41
  call void @__cxa_finalize(i64* %6), !insn.addr !41
  br label %dec_label_pc_c30, !insn.addr !41

dec_label_pc_c30:                                 ; preds = %dec_label_pc_c24, %dec_label_pc_c18
  %7 = call i64 @deregister_tm_clones(), !insn.addr !42
  store i8 1, i8* bitcast (i64* @global_var_14028 to i8*), align 8, !insn.addr !43
  store i64 1, i64* %x0.0.reg2mem, !insn.addr !43
  br label %dec_label_pc_c3c, !insn.addr !43

dec_label_pc_c3c:                                 ; preds = %dec_label_pc_c00, %dec_label_pc_c30
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !44

; uselistorder directives
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_c3c, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_c50:
  %0 = call i64 @register_tm_clones(), !insn.addr !45
  ret i64 %0, !insn.addr !45
}

define i64 @double_value() local_unnamed_addr {
dec_label_pc_c60:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !46
  %3 = and i64 %2, 4294967294, !insn.addr !46
  ret i64 %3, !insn.addr !47
}

define i64 @local_vars() local_unnamed_addr {
dec_label_pc_c70:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !48
  %3 = add i64 %2, 10, !insn.addr !49
  %4 = and i64 %3, 4294967294, !insn.addr !49
  ret i64 %4, !insn.addr !50
}

define i64 @local_array() local_unnamed_addr {
dec_label_pc_c80:
  %0 = alloca i64
  %1 = alloca i32
  %x2.0.reg2mem = alloca i64, !insn.addr !51
  %x1.0.reg2mem = alloca i64, !insn.addr !51
  %2 = load i64, i64* %0
  %3 = load i32, i32* %1
  %stack_var_0 = alloca i64, align 8
  %stack_var_-40 = alloca i64, align 8
  %4 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !52
  %5 = ptrtoint i64* %stack_var_-40 to i64, !insn.addr !53
  %6 = inttoptr i64 %4 to i64*, !insn.addr !54
  %7 = load i64, i64* %6, align 8, !insn.addr !54
  store i64 %7, i64* %stack_var_0, align 8, !insn.addr !55
  %8 = ptrtoint i64* %stack_var_0 to i64, !insn.addr !56
  store i64 0, i64* %x1.0.reg2mem, !insn.addr !57
  store i64 %5, i64* %x2.0.reg2mem, !insn.addr !57
  br label %dec_label_pc_ca8, !insn.addr !57

dec_label_pc_ca8:                                 ; preds = %dec_label_pc_ca8, %dec_label_pc_c80
  %x2.0.reload = load i64, i64* %x2.0.reg2mem
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %9 = trunc i64 %x1.0.reload to i32, !insn.addr !58
  %10 = inttoptr i64 %x2.0.reload to i32*, !insn.addr !58
  store i32 %9, i32* %10, align 4, !insn.addr !58
  %11 = add i64 %x2.0.reload, 4, !insn.addr !58
  %12 = add i64 %x1.0.reload, %2, !insn.addr !59
  %13 = and i64 %12, 4294967295, !insn.addr !59
  %14 = icmp eq i64 %11, %8, !insn.addr !60
  store i64 %13, i64* %x1.0.reg2mem, !insn.addr !60
  store i64 %11, i64* %x2.0.reg2mem, !insn.addr !60
  br i1 %14, label %dec_label_pc_cb8, label %dec_label_pc_ca8, !insn.addr !60

dec_label_pc_cb8:                                 ; preds = %dec_label_pc_ca8
  %15 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !61
  %16 = load i64, i64* %stack_var_0, align 8, !insn.addr !62
  %17 = inttoptr i64 %15 to i64*, !insn.addr !63
  %18 = load i64, i64* %17, align 8, !insn.addr !63
  %19 = icmp eq i64 %16, %18, !insn.addr !64
  br i1 %19, label %dec_label_pc_cd8, label %dec_label_pc_ce0, !insn.addr !64

dec_label_pc_cd8:                                 ; preds = %dec_label_pc_cb8
  %20 = zext i32 %3 to i64, !insn.addr !65
  ret i64 %20, !insn.addr !66

dec_label_pc_ce0:                                 ; preds = %dec_label_pc_cb8
  call void @__stack_chk_fail(), !insn.addr !67
  ret i64 ptrtoint (i32* @1 to i64), !insn.addr !67

; uselistorder directives
  uselistorder i64 %x1.0.reload, { 1, 0 }
  uselistorder i64* %x1.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x2.0.reg2mem, { 1, 0, 2 }
}

define i64 @local_struct() local_unnamed_addr {
dec_label_pc_ce4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 3, !insn.addr !68
  %3 = and i64 %2, 4294967295, !insn.addr !68
  ret i64 %3, !insn.addr !69
}

define i64 @address_of_local() local_unnamed_addr {
dec_label_pc_cf0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i32*, !insn.addr !70
  store i32 42, i32* %2, align 4, !insn.addr !70
  ret i64 42, !insn.addr !71
}

define i64 @address_of_array() local_unnamed_addr {
dec_label_pc_d00:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !72
  %3 = and i64 %2, 4294967294, !insn.addr !72
  ret i64 %3, !insn.addr !73
}

define i32 @large_stack_frame() local_unnamed_addr {
dec_label_pc_d10:
  %0 = alloca i32
  %x1.0.reg2mem = alloca i64, !insn.addr !74
  %x0.0.reg2mem = alloca i64, !insn.addr !74
  %1 = load i32, i32* %0
  %large_buf_-2056 = alloca [2048 x i8], align 1
  %2 = ptrtoint [2048 x i8]* %large_buf_-2056 to i64, !insn.addr !75
  %3 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !76
  %4 = inttoptr i64 %3 to i64*, !insn.addr !77
  %5 = load i64, i64* %4, align 8, !insn.addr !77
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !78
  store i64 %2, i64* %x1.0.reg2mem, !insn.addr !78
  br label %dec_label_pc_d38, !insn.addr !78

dec_label_pc_d38:                                 ; preds = %dec_label_pc_d38, %dec_label_pc_d10
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %6 = trunc i64 %x0.0.reload to i8, !insn.addr !79
  %7 = inttoptr i64 %x1.0.reload to i8*, !insn.addr !79
  store i8 %6, i8* %7, align 1, !insn.addr !79
  %8 = add i64 %x1.0.reload, 1, !insn.addr !79
  %9 = add nuw nsw i64 %x0.0.reload, 1, !insn.addr !80
  %10 = and i64 %9, 4294967295, !insn.addr !80
  %11 = trunc i64 %9 to i32, !insn.addr !81
  %12 = icmp eq i32 %11, ptrtoint (i1* @global_var_800 to i32), !insn.addr !81
  store i64 %10, i64* %x0.0.reg2mem, !insn.addr !81
  store i64 %8, i64* %x1.0.reg2mem, !insn.addr !81
  br i1 %12, label %dec_label_pc_d48, label %dec_label_pc_d38, !insn.addr !81

dec_label_pc_d48:                                 ; preds = %dec_label_pc_d38
  %13 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !82
  %14 = inttoptr i64 %13 to i64*, !insn.addr !83
  %15 = load i64, i64* %14, align 8, !insn.addr !83
  %16 = icmp eq i64 %5, %15, !insn.addr !84
  br i1 %16, label %dec_label_pc_d68, label %dec_label_pc_d74, !insn.addr !84

dec_label_pc_d68:                                 ; preds = %dec_label_pc_d48
  %17 = urem i32 %1, 256, !insn.addr !85
  ret i32 %17, !insn.addr !86

dec_label_pc_d74:                                 ; preds = %dec_label_pc_d48
  call void @__stack_chk_fail(), !insn.addr !87
  ret i32 ptrtoint (i32* @1 to i32), !insn.addr !88

; uselistorder directives
  uselistorder i64 %x0.0.reload, { 1, 0 }
  uselistorder i64* %x0.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x1.0.reg2mem, { 1, 0, 2 }
}

define i64 @vla_stack() local_unnamed_addr {
dec_label_pc_d80:
  %0 = alloca i64
  %storemerge2.reg2mem = alloca i64, !insn.addr !89
  %x1.0.reg2mem = alloca i64, !insn.addr !89
  %spsel.1.1.reg2mem = alloca i64, !insn.addr !89
  %spsel.1.0.reg2mem = alloca i64, !insn.addr !89
  %1 = load i64, i64* %0
  %stack_var_-40 = alloca i64, align 8
  %2 = trunc i64 %1 to i32, !insn.addr !90
  %3 = add i32 %2, -1, !insn.addr !90
  %4 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !91
  %5 = inttoptr i64 %4 to i64*
  %6 = load i64, i64* %5, align 8, !insn.addr !92
  %7 = icmp ult i32 %3, ptrtoint (i32* @global_var_3e7 to i32), !insn.addr !93
  %8 = icmp ne i1 %7, true, !insn.addr !93
  %9 = icmp eq i32 %3, ptrtoint (i32* @global_var_3e7 to i32), !insn.addr !93
  %10 = icmp ne i1 %9, true, !insn.addr !94
  %11 = icmp eq i1 %8, %10, !insn.addr !94
  store i64 4294967295, i64* %storemerge2.reg2mem, !insn.addr !94
  br i1 %11, label %dec_label_pc_e30, label %dec_label_pc_dac, !insn.addr !94

dec_label_pc_dac:                                 ; preds = %dec_label_pc_d80
  %12 = ptrtoint i64* %stack_var_-40 to i64, !insn.addr !95
  %13 = call i64 @__asm_sbfiz(i64 %4, i64 %1, i64 2, i64 32), !insn.addr !96
  %14 = add i64 %13, 15, !insn.addr !97
  %15 = and i64 %14, -65536, !insn.addr !98
  %16 = sub i64 %12, %15, !insn.addr !99
  %17 = icmp eq i64 %15, 0, !insn.addr !100
  store i64 %12, i64* %spsel.1.0.reg2mem, !insn.addr !101
  store i64 %12, i64* %spsel.1.1.reg2mem, !insn.addr !101
  br i1 %17, label %dec_label_pc_dd8, label %dec_label_pc_dc8, !insn.addr !101

dec_label_pc_dc8:                                 ; preds = %dec_label_pc_dac, %dec_label_pc_dc8
  %spsel.1.0.reload = load i64, i64* %spsel.1.0.reg2mem
  %18 = add i64 %spsel.1.0.reload, -65536, !insn.addr !102
  %19 = add i64 %spsel.1.0.reload, -64512, !insn.addr !103
  %20 = inttoptr i64 %19 to i64*, !insn.addr !103
  store i64 0, i64* %20, align 8, !insn.addr !103
  %21 = icmp eq i64 %18, %16, !insn.addr !104
  store i64 %18, i64* %spsel.1.0.reg2mem, !insn.addr !104
  store i64 %16, i64* %spsel.1.1.reg2mem, !insn.addr !104
  br i1 %21, label %dec_label_pc_dd8, label %dec_label_pc_dc8, !insn.addr !104

dec_label_pc_dd8:                                 ; preds = %dec_label_pc_dc8, %dec_label_pc_dac
  %spsel.1.1.reload = load i64, i64* %spsel.1.1.reg2mem
  %22 = and i64 %14, 65520, !insn.addr !105
  %23 = sub i64 %spsel.1.1.reload, %22, !insn.addr !106
  %24 = inttoptr i64 %23 to i64*, !insn.addr !107
  store i64 0, i64* %24, align 8, !insn.addr !107
  %25 = icmp ult i64 %22, 1024, !insn.addr !108
  br i1 %25, label %dec_label_pc_dec, label %dec_label_pc_e3c, !insn.addr !109

dec_label_pc_dec:                                 ; preds = %dec_label_pc_dd8, %dec_label_pc_e3c
  %26 = add i64 %23, 16, !insn.addr !110
  store i64 0, i64* %x1.0.reg2mem, !insn.addr !111
  br label %dec_label_pc_df8, !insn.addr !111

dec_label_pc_df8:                                 ; preds = %dec_label_pc_df8, %dec_label_pc_dec
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %27 = trunc i64 %x1.0.reload to i32, !insn.addr !112
  %28 = mul i32 %27, 2, !insn.addr !112
  %29 = mul i64 %x1.0.reload, 4, !insn.addr !113
  %30 = add i64 %29, %26, !insn.addr !113
  %31 = inttoptr i64 %30 to i32*, !insn.addr !113
  store i32 %28, i32* %31, align 4, !insn.addr !113
  %32 = add nuw nsw i64 %x1.0.reload, 1, !insn.addr !114
  %33 = icmp sgt i64 %1, %32, !insn.addr !115
  store i64 %32, i64* %x1.0.reg2mem, !insn.addr !115
  br i1 %33, label %dec_label_pc_df8, label %dec_label_pc_e14, !insn.addr !115

dec_label_pc_e14:                                 ; preds = %dec_label_pc_df8
  %34 = mul i64 %1, 2
  %35 = and i64 %34, 4294967292, !insn.addr !116
  %36 = add i64 %26, %35, !insn.addr !116
  %37 = inttoptr i64 %36 to i32*, !insn.addr !116
  %38 = load i32, i32* %37, align 4, !insn.addr !116
  %39 = zext i32 %38 to i64, !insn.addr !116
  %.pre = load i64, i64* @global_var_13fe0, align 8
  %.phi.trans.insert = inttoptr i64 %.pre to i64*
  %.pre1 = load i64, i64* %.phi.trans.insert, align 8
  %40 = icmp eq i64 %6, %.pre1, !insn.addr !117
  store i64 %39, i64* %storemerge2.reg2mem, !insn.addr !117
  br i1 %40, label %dec_label_pc_e30, label %dec_label_pc_e4c, !insn.addr !117

dec_label_pc_e30:                                 ; preds = %dec_label_pc_d80, %dec_label_pc_e14
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  ret i64 %storemerge2.reload, !insn.addr !118

dec_label_pc_e3c:                                 ; preds = %dec_label_pc_dd8
  %41 = add i64 %23, 1024, !insn.addr !119
  %42 = inttoptr i64 %41 to i64*, !insn.addr !119
  store i64 0, i64* %42, align 8, !insn.addr !119
  br label %dec_label_pc_dec, !insn.addr !120

dec_label_pc_e4c:                                 ; preds = %dec_label_pc_e14
  call void @__stack_chk_fail(), !insn.addr !121
  ret i64 ptrtoint (i32* @1 to i64), !insn.addr !121

; uselistorder directives
  uselistorder i64 %x1.0.reload, { 1, 2, 0 }
  uselistorder i64 %22, { 1, 0 }
  uselistorder i64 %1, { 3, 2, 1, 0 }
  uselistorder i64* %spsel.1.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x1.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %storemerge2.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_e30, { 1, 0 }
  uselistorder label %dec_label_pc_dec, { 1, 0 }
  uselistorder label %dec_label_pc_dc8, { 1, 0 }
}

define i32 @alloca_usage(i32 %n) local_unnamed_addr {
dec_label_pc_e50:
  %storemerge2.reg2mem = alloca i32, !insn.addr !122
  %x2.0.reg2mem = alloca i64, !insn.addr !122
  %x1.0.reg2mem = alloca i64, !insn.addr !122
  %spsel.1.1.reg2mem = alloca i64, !insn.addr !122
  %spsel.1.0.reg2mem = alloca i64, !insn.addr !122
  %stack_var_-40 = alloca i64, align 8
  %0 = icmp slt i32 %n, 1, !insn.addr !123
  store i32 -1, i32* %storemerge2.reg2mem, !insn.addr !123
  br i1 %0, label %dec_label_pc_efc, label %dec_label_pc_e78, !insn.addr !123

dec_label_pc_e78:                                 ; preds = %dec_label_pc_e50
  %1 = sext i32 %n to i64
  %2 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !124
  %3 = ptrtoint i64* %stack_var_-40 to i64, !insn.addr !125
  %4 = inttoptr i64 %2 to i64*
  %5 = load i64, i64* %4, align 8, !insn.addr !126
  %6 = call i64 @__asm_sbfiz(i64 %2, i64 %1, i64 2, i64 32), !insn.addr !127
  %7 = add i64 %6, 15, !insn.addr !128
  %8 = and i64 %7, -65536, !insn.addr !129
  %9 = sub i64 %3, %8, !insn.addr !130
  %10 = icmp eq i64 %8, 0, !insn.addr !131
  store i64 %3, i64* %spsel.1.0.reg2mem, !insn.addr !132
  store i64 %3, i64* %spsel.1.1.reg2mem, !insn.addr !132
  br i1 %10, label %dec_label_pc_ea4, label %dec_label_pc_e94, !insn.addr !132

dec_label_pc_e94:                                 ; preds = %dec_label_pc_e78, %dec_label_pc_e94
  %spsel.1.0.reload = load i64, i64* %spsel.1.0.reg2mem
  %11 = add i64 %spsel.1.0.reload, -65536, !insn.addr !133
  %12 = add i64 %spsel.1.0.reload, -64512, !insn.addr !134
  %13 = inttoptr i64 %12 to i64*, !insn.addr !134
  store i64 0, i64* %13, align 8, !insn.addr !134
  %14 = icmp eq i64 %11, %9, !insn.addr !135
  store i64 %11, i64* %spsel.1.0.reg2mem, !insn.addr !135
  store i64 %9, i64* %spsel.1.1.reg2mem, !insn.addr !135
  br i1 %14, label %dec_label_pc_ea4, label %dec_label_pc_e94, !insn.addr !135

dec_label_pc_ea4:                                 ; preds = %dec_label_pc_e94, %dec_label_pc_e78
  %spsel.1.1.reload = load i64, i64* %spsel.1.1.reg2mem
  %15 = and i64 %7, 65520, !insn.addr !136
  %16 = sub i64 %spsel.1.1.reload, %15, !insn.addr !137
  %17 = inttoptr i64 %16 to i64*, !insn.addr !138
  store i64 0, i64* %17, align 8, !insn.addr !138
  %18 = icmp ult i64 %15, 1024, !insn.addr !139
  br i1 %18, label %dec_label_pc_eb8, label %dec_label_pc_f08, !insn.addr !140

dec_label_pc_eb8:                                 ; preds = %dec_label_pc_ea4, %dec_label_pc_f08
  %19 = add i64 %16, 16, !insn.addr !141
  %20 = mul nsw i64 %1, 3, !insn.addr !142
  %21 = and i64 %20, 4294967295, !insn.addr !142
  store i64 0, i64* %x1.0.reg2mem, !insn.addr !143
  store i64 %19, i64* %x2.0.reg2mem, !insn.addr !143
  br label %dec_label_pc_ec8, !insn.addr !143

dec_label_pc_ec8:                                 ; preds = %dec_label_pc_ec8, %dec_label_pc_eb8
  %x2.0.reload = load i64, i64* %x2.0.reg2mem
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %22 = trunc i64 %x1.0.reload to i32, !insn.addr !144
  %23 = inttoptr i64 %x2.0.reload to i32*, !insn.addr !144
  store i32 %22, i32* %23, align 4, !insn.addr !144
  %24 = add i64 %x2.0.reload, 4, !insn.addr !144
  %25 = add nuw nsw i64 %x1.0.reload, 3, !insn.addr !145
  %26 = and i64 %25, 4294967295, !insn.addr !145
  %27 = icmp eq i64 %26, %21, !insn.addr !146
  store i64 %26, i64* %x1.0.reg2mem, !insn.addr !146
  store i64 %24, i64* %x2.0.reg2mem, !insn.addr !146
  br i1 %27, label %dec_label_pc_ee0, label %dec_label_pc_ec8, !insn.addr !146

dec_label_pc_ee0:                                 ; preds = %dec_label_pc_ec8
  %28 = mul i64 %1, 2
  %29 = and i64 %28, 4294967292, !insn.addr !147
  %30 = add i64 %19, %29, !insn.addr !147
  %31 = inttoptr i64 %30 to i32*, !insn.addr !147
  %32 = load i32, i32* %31, align 4, !insn.addr !147
  %.pre = load i64, i64* @global_var_13fe0, align 8
  %.phi.trans.insert = inttoptr i64 %.pre to i64*
  %.pre1 = load i64, i64* %.phi.trans.insert, align 8
  %33 = icmp eq i64 %5, %.pre1, !insn.addr !148
  store i32 %32, i32* %storemerge2.reg2mem, !insn.addr !148
  br i1 %33, label %dec_label_pc_efc, label %dec_label_pc_f18, !insn.addr !148

dec_label_pc_efc:                                 ; preds = %dec_label_pc_e50, %dec_label_pc_ee0
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  ret i32 %storemerge2.reload, !insn.addr !149

dec_label_pc_f08:                                 ; preds = %dec_label_pc_ea4
  %34 = add i64 %16, 1024, !insn.addr !150
  %35 = inttoptr i64 %34 to i64*, !insn.addr !150
  store i64 0, i64* %35, align 8, !insn.addr !150
  br label %dec_label_pc_eb8, !insn.addr !151

dec_label_pc_f18:                                 ; preds = %dec_label_pc_ee0
  call void @__stack_chk_fail(), !insn.addr !152
  ret i32 ptrtoint (i32* @1 to i32), !insn.addr !153

; uselistorder directives
  uselistorder i64 %x1.0.reload, { 1, 0 }
  uselistorder i64 %19, { 1, 0 }
  uselistorder i64 %15, { 1, 0 }
  uselistorder i64* %spsel.1.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x1.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x2.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge2.reg2mem, { 0, 2, 1 }
  uselistorder i64 1024, { 2, 3, 0, 1 }
  uselistorder i64 -65536, { 0, 3, 1, 2 }
  uselistorder i32 %n, { 1, 0 }
  uselistorder label %dec_label_pc_efc, { 1, 0 }
  uselistorder label %dec_label_pc_eb8, { 1, 0 }
  uselistorder label %dec_label_pc_e94, { 1, 0 }
}

define i64 @stack_alias() local_unnamed_addr {
dec_label_pc_f20:
  ret i64 20, !insn.addr !154
}

define void @test_stack_memory() local_unnamed_addr {
dec_label_pc_f30:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_1fa8 to i8*)), !insn.addr !155
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_1fc8, i64 0, i64 0), i64 20), !insn.addr !156
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_1fe8, i64 0, i64 0), i64 10), !insn.addr !157
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2008, i64 0, i64 0), i64 15), !insn.addr !158
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_2028, i64 0, i64 0), i64 42), !insn.addr !159
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_2050, i64 0, i64 0), i64 2), !insn.addr !160
  %6 = call i32 @large_stack_frame(), !insn.addr !161
  %7 = zext i32 %6 to i64, !insn.addr !162
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_2078, i64 0, i64 0), i64 %7), !insn.addr !163
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_20a0, i64 0, i64 0), i64 10), !insn.addr !164
  %10 = call i32 @alloca_usage(i32 10), !insn.addr !165
  %11 = zext i32 %10 to i64, !insn.addr !166
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_20c0, i64 0, i64 0), i64 %11), !insn.addr !167
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_20e0, i64 0, i64 0), i64 20), !insn.addr !168
  ret void, !insn.addr !168
}

define i64 @heap_basic() local_unnamed_addr {
dec_label_pc_1010:
  %0 = alloca i64
  %x19.0.reg2mem = alloca i64, !insn.addr !169
  %x1.0.reg2mem = alloca i64, !insn.addr !169
  %1 = load i64, i64* %0
  %2 = call i64 @__asm_sbfiz(i64 %1, i64 %1, i64 2, i64 32), !insn.addr !170
  %3 = trunc i64 %2 to i32, !insn.addr !171
  %4 = call i64* @malloc(i32 %3), !insn.addr !171
  %5 = icmp eq i64* %4, null, !insn.addr !172
  store i64 4294967295, i64* %x19.0.reg2mem, !insn.addr !172
  br i1 %5, label %dec_label_pc_105c, label %dec_label_pc_102c, !insn.addr !172

dec_label_pc_102c:                                ; preds = %dec_label_pc_1010
  %6 = and i64 %1, 4294967295, !insn.addr !173
  %7 = ptrtoint i64* %4 to i64, !insn.addr !171
  %8 = trunc i64 %1 to i32, !insn.addr !174
  %9 = icmp slt i32 %8, 1, !insn.addr !174
  store i64 0, i64* %x1.0.reg2mem, !insn.addr !174
  br i1 %9, label %dec_label_pc_104c, label %dec_label_pc_1038, !insn.addr !174

dec_label_pc_1038:                                ; preds = %dec_label_pc_102c, %dec_label_pc_1038
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %10 = trunc i64 %x1.0.reload to i32, !insn.addr !175
  %11 = mul i32 %10, 2, !insn.addr !175
  %12 = mul i64 %x1.0.reload, 4, !insn.addr !176
  %13 = add i64 %12, %7, !insn.addr !176
  %14 = inttoptr i64 %13 to i32*, !insn.addr !176
  store i32 %11, i32* %14, align 4, !insn.addr !176
  %15 = add nuw nsw i64 %x1.0.reload, 1, !insn.addr !177
  %16 = icmp ugt i64 %6, %15, !insn.addr !178
  store i64 %15, i64* %x1.0.reg2mem, !insn.addr !178
  br i1 %16, label %dec_label_pc_1038, label %dec_label_pc_104c, !insn.addr !178

dec_label_pc_104c:                                ; preds = %dec_label_pc_1038, %dec_label_pc_102c
  %17 = icmp slt i32 %8, 0
  %18 = zext i1 %17 to i32, !insn.addr !179
  %19 = add i32 %18, %8, !insn.addr !179
  %20 = udiv i32 %19, 2
  %21 = mul i32 %20, 4, !insn.addr !180
  %22 = zext i32 %21 to i64, !insn.addr !180
  %23 = add i64 %22, %7, !insn.addr !180
  %24 = inttoptr i64 %23 to i32*, !insn.addr !180
  %25 = load i32, i32* %24, align 4, !insn.addr !180
  %26 = zext i32 %25 to i64, !insn.addr !180
  call void @free(i64* nonnull %4), !insn.addr !181
  store i64 %26, i64* %x19.0.reg2mem, !insn.addr !181
  br label %dec_label_pc_105c, !insn.addr !181

dec_label_pc_105c:                                ; preds = %dec_label_pc_1010, %dec_label_pc_104c
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  ret i64 %x19.0.reload, !insn.addr !182

; uselistorder directives
  uselistorder i64 %x1.0.reload, { 1, 2, 0 }
  uselistorder i32 %8, { 1, 0, 2 }
  uselistorder i64* %4, { 0, 2, 1 }
  uselistorder i64 %1, { 3, 0, 2, 1 }
  uselistorder i64* %x1.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x19.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_105c, { 1, 0 }
  uselistorder label %dec_label_pc_1038, { 1, 0 }
}

define i64 @heap_calloc() local_unnamed_addr {
dec_label_pc_1074:
  %0 = alloca i64
  %x19.2.reg2mem = alloca i64, !insn.addr !183
  %x19.1.reg2mem = alloca i64, !insn.addr !183
  %x19.0.reg2mem = alloca i32, !insn.addr !183
  %x1.0.reg2mem = alloca i64, !insn.addr !183
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !184
  %3 = call i64* @calloc(i32 %2, i32 4), !insn.addr !184
  %4 = icmp eq i64* %3, null, !insn.addr !185
  store i64 4294967295, i64* %x19.2.reg2mem, !insn.addr !185
  br i1 %4, label %dec_label_pc_10c0, label %dec_label_pc_1094, !insn.addr !185

dec_label_pc_1094:                                ; preds = %dec_label_pc_1074
  %5 = icmp slt i32 %2, 1, !insn.addr !186
  store i64 0, i64* %x19.1.reg2mem, !insn.addr !186
  br i1 %5, label %dec_label_pc_10bc, label %dec_label_pc_10a8.preheader, !insn.addr !186

dec_label_pc_10a8.preheader:                      ; preds = %dec_label_pc_1094
  %6 = ptrtoint i64* %3 to i64, !insn.addr !184
  %sext2 = mul i64 %1, 4294967296
  %7 = ashr exact i64 %sext2, 32
  store i64 0, i64* %x1.0.reg2mem
  store i32 0, i32* %x19.0.reg2mem
  br label %dec_label_pc_10a8

dec_label_pc_10a8:                                ; preds = %dec_label_pc_10a8, %dec_label_pc_10a8.preheader
  %x19.0.reload = load i32, i32* %x19.0.reg2mem
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %8 = mul i64 %x1.0.reload, 4, !insn.addr !187
  %9 = add i64 %8, %6, !insn.addr !187
  %10 = inttoptr i64 %9 to i32*, !insn.addr !187
  %11 = load i32, i32* %10, align 4, !insn.addr !187
  %12 = add nuw nsw i64 %x1.0.reload, 1, !insn.addr !188
  %13 = add i32 %11, %x19.0.reload, !insn.addr !189
  %exitcond = icmp eq i64 %12, %7
  store i64 %12, i64* %x1.0.reg2mem, !insn.addr !190
  store i32 %13, i32* %x19.0.reg2mem, !insn.addr !190
  br i1 %exitcond, label %dec_label_pc_10bc.loopexit, label %dec_label_pc_10a8, !insn.addr !190

dec_label_pc_10bc.loopexit:                       ; preds = %dec_label_pc_10a8
  %14 = zext i32 %13 to i64, !insn.addr !189
  store i64 %14, i64* %x19.1.reg2mem
  br label %dec_label_pc_10bc

dec_label_pc_10bc:                                ; preds = %dec_label_pc_10bc.loopexit, %dec_label_pc_1094
  %x19.1.reload = load i64, i64* %x19.1.reg2mem
  call void @free(i64* nonnull %3), !insn.addr !191
  store i64 %x19.1.reload, i64* %x19.2.reg2mem, !insn.addr !191
  br label %dec_label_pc_10c0, !insn.addr !191

dec_label_pc_10c0:                                ; preds = %dec_label_pc_1074, %dec_label_pc_10bc
  %x19.2.reload = load i64, i64* %x19.2.reg2mem
  %15 = and i64 %x19.2.reload, 4294967295, !insn.addr !192
  ret i64 %15, !insn.addr !193

; uselistorder directives
  uselistorder i32 %13, { 1, 0 }
  uselistorder i64* %3, { 0, 2, 1 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %x1.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %x19.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x19.2.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_10c0, { 1, 0 }
}

define i32 @heap_realloc() local_unnamed_addr {
dec_label_pc_10e0:
  %x19.0.reg2mem = alloca i32, !insn.addr !194
  %0 = call i64* @malloc(i32 20), !insn.addr !195
  %1 = icmp eq i64* %0, null, !insn.addr !196
  store i32 -1, i32* %x19.0.reg2mem, !insn.addr !196
  br i1 %1, label %dec_label_pc_113c, label %dec_label_pc_10f8, !insn.addr !196

dec_label_pc_10f8:                                ; preds = %dec_label_pc_10e0
  %2 = ptrtoint i64* %0 to i64, !insn.addr !195
  store i64 8589934593, i64* %0, align 8, !insn.addr !197
  %3 = add i64 %2, 8, !insn.addr !197
  %4 = inttoptr i64 %3 to i64*, !insn.addr !197
  store i64 17179869187, i64* %4, align 8, !insn.addr !197
  %5 = add i64 %2, 16, !insn.addr !198
  %6 = inttoptr i64 %5 to i32*, !insn.addr !198
  store i32 5, i32* %6, align 4, !insn.addr !198
  %7 = call i64* @realloc(i64* nonnull %0, i32 40), !insn.addr !199
  %8 = icmp eq i64* %7, null, !insn.addr !200
  br i1 %8, label %dec_label_pc_1154, label %dec_label_pc_1124, !insn.addr !200

dec_label_pc_1124:                                ; preds = %dec_label_pc_10f8
  %9 = ptrtoint i64* %7 to i64, !insn.addr !199
  %10 = add i64 %9, 8, !insn.addr !201
  %11 = inttoptr i64 %10 to i32*, !insn.addr !201
  %12 = load i32, i32* %11, align 4, !insn.addr !201
  %13 = icmp eq i32 %12, 3, !insn.addr !202
  call void @free(i64* nonnull %7), !insn.addr !203
  %phitmp = select i1 %13, i32 50, i32 -3, !insn.addr !204
  store i32 %phitmp, i32* %x19.0.reg2mem, !insn.addr !203
  br label %dec_label_pc_113c, !insn.addr !203

dec_label_pc_113c:                                ; preds = %dec_label_pc_10e0, %dec_label_pc_1154, %dec_label_pc_1124
  %x19.0.reload = load i32, i32* %x19.0.reg2mem
  ret i32 %x19.0.reload, !insn.addr !205

dec_label_pc_1154:                                ; preds = %dec_label_pc_10f8
  call void @free(i64* nonnull %0), !insn.addr !206
  store i32 -2, i32* %x19.0.reg2mem, !insn.addr !207
  br label %dec_label_pc_113c, !insn.addr !207

; uselistorder directives
  uselistorder i64* %7, { 0, 2, 1 }
  uselistorder i64* %0, { 0, 1, 2, 4, 3 }
  uselistorder i32* %x19.0.reg2mem, { 3, 0, 2, 1 }
  uselistorder label %dec_label_pc_113c, { 1, 2, 0 }
}

define i64 @heap_array() local_unnamed_addr {
dec_label_pc_1164:
  %0 = alloca i64
  %x19.0.reg2mem = alloca i64, !insn.addr !208
  %x2.0.reg2mem = alloca i64, !insn.addr !208
  %x1.0.reg2mem = alloca i64, !insn.addr !208
  %1 = load i64, i64* %0
  %2 = call i64 @__asm_sbfiz(i64 %1, i64 %1, i64 2, i64 32), !insn.addr !209
  %3 = trunc i64 %2 to i32, !insn.addr !210
  %4 = call i64* @malloc(i32 %3), !insn.addr !210
  %5 = icmp eq i64* %4, null, !insn.addr !211
  store i64 4294967295, i64* %x19.0.reg2mem, !insn.addr !211
  br i1 %5, label %dec_label_pc_11b8, label %dec_label_pc_1180, !insn.addr !211

dec_label_pc_1180:                                ; preds = %dec_label_pc_1164
  %6 = ptrtoint i64* %4 to i64, !insn.addr !210
  %7 = trunc i64 %1 to i32, !insn.addr !212
  %8 = icmp slt i32 %7, 1, !insn.addr !212
  br i1 %8, label %dec_label_pc_11a8, label %dec_label_pc_1188, !insn.addr !212

dec_label_pc_1188:                                ; preds = %dec_label_pc_1180
  %9 = and i64 %1, 4294967295, !insn.addr !213
  %10 = mul nuw nsw i64 %9, 3, !insn.addr !214
  %11 = and i64 %10, 4294967295, !insn.addr !214
  store i64 0, i64* %x1.0.reg2mem, !insn.addr !215
  store i64 %6, i64* %x2.0.reg2mem, !insn.addr !215
  br label %dec_label_pc_1198, !insn.addr !215

dec_label_pc_1198:                                ; preds = %dec_label_pc_1198, %dec_label_pc_1188
  %x2.0.reload = load i64, i64* %x2.0.reg2mem
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %12 = trunc i64 %x1.0.reload to i32, !insn.addr !216
  %13 = inttoptr i64 %x2.0.reload to i32*, !insn.addr !216
  store i32 %12, i32* %13, align 4, !insn.addr !216
  %14 = add i64 %x2.0.reload, 4, !insn.addr !216
  %15 = add nuw nsw i64 %x1.0.reload, 3, !insn.addr !217
  %16 = and i64 %15, 4294967295, !insn.addr !217
  %17 = icmp eq i64 %16, %11, !insn.addr !218
  store i64 %16, i64* %x1.0.reg2mem, !insn.addr !218
  store i64 %14, i64* %x2.0.reg2mem, !insn.addr !218
  br i1 %17, label %dec_label_pc_11a8, label %dec_label_pc_1198, !insn.addr !218

dec_label_pc_11a8:                                ; preds = %dec_label_pc_1198, %dec_label_pc_1180
  %18 = icmp slt i32 %7, 0
  %19 = zext i1 %18 to i32, !insn.addr !219
  %20 = add i32 %19, %7, !insn.addr !219
  %21 = udiv i32 %20, 2
  %22 = mul i32 %21, 4, !insn.addr !220
  %23 = zext i32 %22 to i64, !insn.addr !220
  %24 = add i64 %23, %6, !insn.addr !220
  %25 = inttoptr i64 %24 to i32*, !insn.addr !220
  %26 = load i32, i32* %25, align 4, !insn.addr !220
  %27 = zext i32 %26 to i64, !insn.addr !220
  call void @free(i64* nonnull %4), !insn.addr !221
  store i64 %27, i64* %x19.0.reg2mem, !insn.addr !221
  br label %dec_label_pc_11b8, !insn.addr !221

dec_label_pc_11b8:                                ; preds = %dec_label_pc_1164, %dec_label_pc_11a8
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  ret i64 %x19.0.reload, !insn.addr !222

; uselistorder directives
  uselistorder i64 %x1.0.reload, { 1, 0 }
  uselistorder i32 %7, { 1, 0, 2 }
  uselistorder i64 %6, { 1, 0 }
  uselistorder i64* %4, { 0, 2, 1 }
  uselistorder i64 %1, { 0, 3, 2, 1 }
  uselistorder i64* %x1.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x2.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x19.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_11b8, { 1, 0 }
}

define i64 @heap_struct() local_unnamed_addr {
dec_label_pc_11d0:
  %0 = alloca i64
  %x19.0.reg2mem = alloca i64, !insn.addr !223
  %1 = load i64, i64* %0
  %2 = call i64* @malloc(i32 8), !insn.addr !224
  %3 = icmp eq i64* %2, null, !insn.addr !225
  store i64 4294967295, i64* %x19.0.reg2mem, !insn.addr !225
  br i1 %3, label %dec_label_pc_11f4, label %dec_label_pc_11ec, !insn.addr !225

dec_label_pc_11ec:                                ; preds = %dec_label_pc_11d0
  %4 = and i64 %1, 4294967295, !insn.addr !226
  %5 = mul nuw nsw i64 %4, 3, !insn.addr !227
  %6 = and i64 %5, 4294967295, !insn.addr !227
  call void @free(i64* nonnull %2), !insn.addr !228
  store i64 %6, i64* %x19.0.reg2mem, !insn.addr !228
  br label %dec_label_pc_11f4, !insn.addr !228

dec_label_pc_11f4:                                ; preds = %dec_label_pc_11d0, %dec_label_pc_11ec
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  ret i64 %x19.0.reload, !insn.addr !229

; uselistorder directives
  uselistorder i64* %x19.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_11f4, { 1, 0 }
}

define i64 @heap_nested() local_unnamed_addr {
dec_label_pc_1210:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !230
  %1 = load i64, i64* %0
  %2 = call i64* @malloc(i32 16), !insn.addr !231
  %3 = ptrtoint i64* %2 to i64, !insn.addr !231
  %4 = inttoptr i64 %1 to i64*, !insn.addr !232
  store i64 %3, i64* %4, align 8, !insn.addr !232
  %5 = icmp eq i64* %2, null, !insn.addr !233
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !233
  br i1 %5, label %dec_label_pc_1260, label %dec_label_pc_1230, !insn.addr !233

dec_label_pc_1230:                                ; preds = %dec_label_pc_1210
  %6 = bitcast i64* %2 to i32*, !insn.addr !234
  store i32 10, i32* %6, align 4, !insn.addr !234
  %7 = call i64* @malloc(i32 16), !insn.addr !235
  %8 = ptrtoint i64* %7 to i64, !insn.addr !235
  %9 = add i64 %3, 8, !insn.addr !236
  %10 = inttoptr i64 %9 to i64*, !insn.addr !236
  store i64 %8, i64* %10, align 8, !insn.addr !236
  %11 = icmp eq i64* %7, null, !insn.addr !237
  br i1 %11, label %dec_label_pc_1274, label %dec_label_pc_1250, !insn.addr !237

dec_label_pc_1250:                                ; preds = %dec_label_pc_1230
  %12 = bitcast i64* %7 to i32*, !insn.addr !238
  store i32 20, i32* %12, align 4, !insn.addr !238
  %13 = add i64 %8, 8, !insn.addr !239
  %14 = inttoptr i64 %13 to i64*, !insn.addr !239
  store i64 0, i64* %14, align 8, !insn.addr !239
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !239
  br label %dec_label_pc_1260, !insn.addr !239

dec_label_pc_1260:                                ; preds = %dec_label_pc_1210, %dec_label_pc_1274, %dec_label_pc_1250
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !240

dec_label_pc_1274:                                ; preds = %dec_label_pc_1230
  call void @free(i64* nonnull %2), !insn.addr !241
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !242
  br label %dec_label_pc_1260, !insn.addr !242

; uselistorder directives
  uselistorder i64* %x0.0.reg2mem, { 3, 0, 2, 1 }
  uselistorder label %dec_label_pc_1260, { 1, 2, 0 }
}

define i32 @linked_list_heap() local_unnamed_addr {
dec_label_pc_1284:
  %x19.3.reg2mem = alloca i64, !insn.addr !243
  %x20.2.reg2mem = alloca i32, !insn.addr !243
  %x19.2.reg2mem = alloca i64, !insn.addr !243
  %x20.1.reg2mem = alloca i32, !insn.addr !243
  %x0.1.reg2mem = alloca i64, !insn.addr !243
  %x19.1.reg2mem = alloca i64, !insn.addr !243
  %x20.0.reg2mem = alloca i64, !insn.addr !243
  %x19.0.reg2mem = alloca i64, !insn.addr !243
  %x0.0.reg2mem = alloca i64, !insn.addr !243
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !244
  store i64 0, i64* %x19.0.reg2mem, !insn.addr !244
  store i64 0, i64* %x20.0.reg2mem, !insn.addr !244
  br label %dec_label_pc_12a0, !insn.addr !244

dec_label_pc_12a0:                                ; preds = %dec_label_pc_12c0, %dec_label_pc_1284
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  %0 = call i64* @malloc(i32 16), !insn.addr !245
  %1 = icmp eq i64* %0, null, !insn.addr !246
  br i1 %1, label %dec_label_pc_1314, label %dec_label_pc_12b0, !insn.addr !246

dec_label_pc_12b0:                                ; preds = %dec_label_pc_12a0
  %x20.0.reload = load i64, i64* %x20.0.reg2mem
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %2 = ptrtoint i64* %0 to i64, !insn.addr !245
  %3 = trunc i64 %x20.0.reload to i32, !insn.addr !247
  %4 = bitcast i64* %0 to i32*, !insn.addr !247
  store i32 %3, i32* %4, align 4, !insn.addr !247
  %5 = add i64 %2, 8, !insn.addr !248
  %6 = inttoptr i64 %5 to i64*, !insn.addr !248
  store i64 0, i64* %6, align 8, !insn.addr !248
  %7 = icmp eq i64 %x19.0.reload, 0, !insn.addr !249
  store i64 %2, i64* %x19.1.reg2mem, !insn.addr !249
  br i1 %7, label %dec_label_pc_12c0, label %dec_label_pc_12bc, !insn.addr !249

dec_label_pc_12bc:                                ; preds = %dec_label_pc_12b0
  %8 = add i64 %x0.0.reload, 8, !insn.addr !250
  %9 = inttoptr i64 %8 to i64*, !insn.addr !250
  store i64 %2, i64* %9, align 8, !insn.addr !250
  store i64 %x19.0.reload, i64* %x19.1.reg2mem, !insn.addr !250
  br label %dec_label_pc_12c0, !insn.addr !250

dec_label_pc_12c0:                                ; preds = %dec_label_pc_12b0, %dec_label_pc_12bc
  %x19.1.reload = load i64, i64* %x19.1.reg2mem
  %10 = add nuw nsw i64 %x20.0.reload, 10, !insn.addr !251
  %11 = and i64 %10, 4294967295, !insn.addr !251
  %12 = trunc i64 %10 to i32, !insn.addr !252
  %13 = icmp eq i32 %12, 50, !insn.addr !252
  store i64 %2, i64* %x0.0.reg2mem, !insn.addr !252
  store i64 %x19.1.reload, i64* %x19.0.reg2mem, !insn.addr !252
  store i64 %11, i64* %x20.0.reg2mem, !insn.addr !252
  store i64 %x19.1.reload, i64* %x0.1.reg2mem, !insn.addr !252
  store i32 0, i32* %x20.1.reg2mem, !insn.addr !252
  br i1 %13, label %dec_label_pc_12d8, label %dec_label_pc_12a0, !insn.addr !252

dec_label_pc_12d8:                                ; preds = %dec_label_pc_12c0, %dec_label_pc_12d8
  %x20.1.reload = load i32, i32* %x20.1.reg2mem
  %x0.1.reload = load i64, i64* %x0.1.reg2mem
  %14 = inttoptr i64 %x0.1.reload to i32*, !insn.addr !253
  %15 = load i32, i32* %14, align 4, !insn.addr !253
  %16 = add i64 %x0.1.reload, 8, !insn.addr !254
  %17 = inttoptr i64 %16 to i64*, !insn.addr !254
  %18 = load i64, i64* %17, align 8, !insn.addr !254
  %19 = add i32 %15, %x20.1.reload, !insn.addr !255
  %20 = icmp eq i64 %18, 0, !insn.addr !256
  store i64 %18, i64* %x0.1.reg2mem, !insn.addr !256
  store i32 %19, i32* %x20.1.reg2mem, !insn.addr !256
  store i64 %x19.1.reload, i64* %x19.2.reg2mem, !insn.addr !256
  br i1 %20, label %dec_label_pc_12e8, label %dec_label_pc_12d8, !insn.addr !256

dec_label_pc_12e8:                                ; preds = %dec_label_pc_12d8, %dec_label_pc_12e8
  %x19.2.reload = load i64, i64* %x19.2.reg2mem
  %21 = add i64 %x19.2.reload, 8, !insn.addr !257
  %22 = inttoptr i64 %21 to i64*, !insn.addr !257
  %23 = load i64, i64* %22, align 8, !insn.addr !257
  %24 = inttoptr i64 %x19.2.reload to i64*, !insn.addr !258
  call void @free(i64* %24), !insn.addr !258
  %25 = icmp eq i64 %23, 0, !insn.addr !259
  store i64 %23, i64* %x19.2.reg2mem, !insn.addr !259
  store i32 %19, i32* %x20.2.reg2mem, !insn.addr !259
  br i1 %25, label %dec_label_pc_12f8, label %dec_label_pc_12e8, !insn.addr !259

dec_label_pc_12f8:                                ; preds = %dec_label_pc_12e8, %dec_label_pc_1318, %dec_label_pc_1314
  %x20.2.reload = load i32, i32* %x20.2.reg2mem
  ret i32 %x20.2.reload, !insn.addr !260

dec_label_pc_1314:                                ; preds = %dec_label_pc_12a0
  %26 = icmp eq i64 %x19.0.reload, 0, !insn.addr !261
  store i32 -1, i32* %x20.2.reg2mem, !insn.addr !261
  store i64 %x19.0.reload, i64* %x19.3.reg2mem, !insn.addr !261
  br i1 %26, label %dec_label_pc_12f8, label %dec_label_pc_1318, !insn.addr !261

dec_label_pc_1318:                                ; preds = %dec_label_pc_1314, %dec_label_pc_1318
  %x19.3.reload = load i64, i64* %x19.3.reg2mem
  %27 = add i64 %x19.3.reload, 8, !insn.addr !262
  %28 = inttoptr i64 %27 to i64*, !insn.addr !262
  %29 = load i64, i64* %28, align 8, !insn.addr !262
  %30 = inttoptr i64 %x19.3.reload to i64*, !insn.addr !263
  call void @free(i64* %30), !insn.addr !263
  %31 = icmp eq i64 %29, 0, !insn.addr !264
  store i32 -1, i32* %x20.2.reg2mem, !insn.addr !264
  store i64 %29, i64* %x19.3.reg2mem, !insn.addr !264
  br i1 %31, label %dec_label_pc_12f8, label %dec_label_pc_1318, !insn.addr !264

; uselistorder directives
  uselistorder i64 %x19.3.reload, { 1, 0 }
  uselistorder i64 %x19.2.reload, { 1, 0 }
  uselistorder i64 %2, { 1, 2, 0, 3 }
  uselistorder i64 %x20.0.reload, { 1, 0 }
  uselistorder i64* %0, { 0, 2, 1 }
  uselistorder i64 %x19.0.reload, { 0, 3, 1, 2 }
  uselistorder i64* %x0.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x19.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x20.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x19.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x0.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %x20.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x19.2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %x20.2.reg2mem, { 2, 3, 0, 1 }
  uselistorder i64* %x19.3.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1318, { 1, 0 }
  uselistorder label %dec_label_pc_12f8, { 1, 2, 0 }
  uselistorder label %dec_label_pc_12e8, { 1, 0 }
  uselistorder label %dec_label_pc_12d8, { 1, 0 }
  uselistorder label %dec_label_pc_12c0, { 1, 0 }
}

define i64 @create_tree_node() local_unnamed_addr {
dec_label_pc_1330:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64* @malloc(i32 24), !insn.addr !265
  %3 = ptrtoint i64* %2 to i64, !insn.addr !265
  %4 = icmp eq i64* %2, null, !insn.addr !266
  br i1 %4, label %dec_label_pc_1354, label %dec_label_pc_134c, !insn.addr !266

dec_label_pc_134c:                                ; preds = %dec_label_pc_1330
  %5 = trunc i64 %1 to i32, !insn.addr !267
  %6 = bitcast i64* %2 to i32*, !insn.addr !267
  store i32 %5, i32* %6, align 4, !insn.addr !267
  %7 = add i64 %3, 8, !insn.addr !268
  %8 = inttoptr i64 %7 to i64*, !insn.addr !268
  store i64 0, i64* %8, align 8, !insn.addr !268
  %9 = add i64 %3, 16, !insn.addr !268
  %10 = inttoptr i64 %9 to i64*, !insn.addr !268
  store i64 0, i64* %10, align 8, !insn.addr !268
  br label %dec_label_pc_1354, !insn.addr !268

dec_label_pc_1354:                                ; preds = %dec_label_pc_134c, %dec_label_pc_1330
  ret i64 %3, !insn.addr !269

; uselistorder directives
  uselistorder i64 %3, { 2, 0, 1 }
}

define i32 @tree_heap_traversal() local_unnamed_addr {
dec_label_pc_1360:
  %x0.0.reg2mem = alloca i32, !insn.addr !270
  %0 = call i64* @malloc(i32 24), !insn.addr !271
  %1 = icmp eq i64* %0, null, !insn.addr !272
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !272
  br i1 %1, label %dec_label_pc_13c4, label %dec_label_pc_1374, !insn.addr !272

dec_label_pc_1374:                                ; preds = %dec_label_pc_1360
  %2 = call i64* @malloc(i32 24), !insn.addr !273
  %3 = icmp eq i64* %2, null, !insn.addr !274
  %4 = call i64* @malloc(i32 24)
  %5 = icmp eq i64* %4, null
  br i1 %3, label %dec_label_pc_13ec, label %dec_label_pc_138c, !insn.addr !274

dec_label_pc_138c:                                ; preds = %dec_label_pc_1374
  call void @free(i64* nonnull %2)
  br i1 %5, label %dec_label_pc_13d8, label %dec_label_pc_13a0, !insn.addr !275

dec_label_pc_13a0:                                ; preds = %dec_label_pc_138c
  call void @free(i64* nonnull %4), !insn.addr !276
  call void @free(i64* nonnull %0), !insn.addr !277
  store i32 60, i32* %x0.0.reg2mem, !insn.addr !278
  br label %dec_label_pc_13c4, !insn.addr !278

dec_label_pc_13c4:                                ; preds = %dec_label_pc_1360, %dec_label_pc_13d8, %dec_label_pc_13a0
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !279

dec_label_pc_13d8:                                ; preds = %dec_label_pc_138c, %dec_label_pc_13f8, %dec_label_pc_13ec
  call void @free(i64* nonnull %0), !insn.addr !280
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !281
  br label %dec_label_pc_13c4, !insn.addr !281

dec_label_pc_13ec:                                ; preds = %dec_label_pc_1374
  br i1 %5, label %dec_label_pc_13d8, label %dec_label_pc_13f8, !insn.addr !282

dec_label_pc_13f8:                                ; preds = %dec_label_pc_13ec
  call void @free(i64* nonnull %4), !insn.addr !283
  br label %dec_label_pc_13d8, !insn.addr !284

; uselistorder directives
  uselistorder i1 %5, { 1, 0 }
  uselistorder i64* %4, { 1, 0, 2 }
  uselistorder i32* %x0.0.reg2mem, { 3, 0, 2, 1 }
  uselistorder label %dec_label_pc_13d8, { 1, 2, 0 }
  uselistorder label %dec_label_pc_13c4, { 1, 2, 0 }
}

define i64 @memory_leak() local_unnamed_addr {
dec_label_pc_1410:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !285
  %x1.0.reg2mem = alloca i64, !insn.addr !285
  %1 = load i64, i64* %0
  %2 = call i64 @__asm_sbfiz(i64 %1, i64 %1, i64 2, i64 32), !insn.addr !286
  %3 = trunc i64 %2 to i32, !insn.addr !287
  %4 = call i64* @malloc(i32 %3), !insn.addr !287
  %5 = icmp eq i64* %4, null, !insn.addr !288
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !288
  br i1 %5, label %dec_label_pc_1454, label %dec_label_pc_142c, !insn.addr !288

dec_label_pc_142c:                                ; preds = %dec_label_pc_1410
  %6 = and i64 %1, 4294967295, !insn.addr !289
  %7 = ptrtoint i64* %4 to i64, !insn.addr !287
  %8 = trunc i64 %1 to i32, !insn.addr !290
  %9 = icmp slt i32 %8, 1, !insn.addr !290
  store i64 0, i64* %x1.0.reg2mem, !insn.addr !290
  br i1 %9, label %dec_label_pc_1448, label %dec_label_pc_1438, !insn.addr !290

dec_label_pc_1438:                                ; preds = %dec_label_pc_142c, %dec_label_pc_1438
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %10 = trunc i64 %x1.0.reload to i32, !insn.addr !291
  %11 = mul i64 %x1.0.reload, 4, !insn.addr !291
  %12 = add i64 %11, %7, !insn.addr !291
  %13 = inttoptr i64 %12 to i32*, !insn.addr !291
  store i32 %10, i32* %13, align 4, !insn.addr !291
  %14 = add nuw nsw i64 %x1.0.reload, 1, !insn.addr !292
  %15 = icmp ugt i64 %6, %14, !insn.addr !293
  store i64 %14, i64* %x1.0.reg2mem, !insn.addr !293
  br i1 %15, label %dec_label_pc_1438, label %dec_label_pc_1448, !insn.addr !293

dec_label_pc_1448:                                ; preds = %dec_label_pc_1438, %dec_label_pc_142c
  %16 = icmp slt i32 %8, 0
  %17 = zext i1 %16 to i32, !insn.addr !294
  %18 = add i32 %17, %8, !insn.addr !294
  %19 = udiv i32 %18, 2
  %20 = mul i32 %19, 4, !insn.addr !295
  %21 = zext i32 %20 to i64, !insn.addr !295
  %22 = add i64 %21, %7, !insn.addr !295
  %23 = inttoptr i64 %22 to i32*, !insn.addr !295
  %24 = load i32, i32* %23, align 4, !insn.addr !295
  %25 = zext i32 %24 to i64, !insn.addr !295
  store i64 %25, i64* %storemerge.reg2mem, !insn.addr !295
  br label %dec_label_pc_1454, !insn.addr !295

dec_label_pc_1454:                                ; preds = %dec_label_pc_1410, %dec_label_pc_1448
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !296

; uselistorder directives
  uselistorder i64 %x1.0.reload, { 1, 2, 0 }
  uselistorder i32 %8, { 1, 0, 2 }
  uselistorder i64* %4, { 1, 0 }
  uselistorder i64 %1, { 3, 0, 2, 1 }
  uselistorder i64* %x1.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 (i64, i64, i64, i64)* @__asm_sbfiz, { 0, 1, 2, 4, 3 }
  uselistorder i64 32, { 1, 2, 0, 3, 5, 4 }
  uselistorder label %dec_label_pc_1454, { 1, 0 }
  uselistorder label %dec_label_pc_1438, { 1, 0 }
}

define i64 @dangling_pointer() local_unnamed_addr {
dec_label_pc_1470:
  %storemerge.reg2mem = alloca i64, !insn.addr !297
  %0 = call i64* @malloc(i32 4), !insn.addr !298
  %1 = icmp eq i64* %0, null, !insn.addr !299
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !299
  br i1 %1, label %dec_label_pc_14b0, label %dec_label_pc_1484, !insn.addr !299

dec_label_pc_1484:                                ; preds = %dec_label_pc_1470
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_2100, i64 0, i64 0), i64 42), !insn.addr !300
  call void @free(i64* nonnull %0), !insn.addr !301
  %3 = bitcast i64* %0 to i32*, !insn.addr !302
  %4 = load i32, i32* %3, align 4, !insn.addr !302
  %5 = zext i32 %4 to i64, !insn.addr !302
  store i64 %5, i64* %storemerge.reg2mem, !insn.addr !303
  br label %dec_label_pc_14b0, !insn.addr !303

dec_label_pc_14b0:                                ; preds = %dec_label_pc_1470, %dec_label_pc_1484
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !304

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_14b0, { 1, 0 }
}

define i32 @double_free(i32* %p) local_unnamed_addr {
dec_label_pc_14c0:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i32, !insn.addr !305
  %1 = load i64, i64* %0
  %2 = icmp eq i32* %p, null, !insn.addr !305
  br i1 %2, label %dec_label_pc_14cc, label %dec_label_pc_14c4, !insn.addr !305

dec_label_pc_14c4:                                ; preds = %dec_label_pc_14c0
  %3 = trunc i64 %1 to i32
  ret i32 %3, !insn.addr !306

dec_label_pc_14cc:                                ; preds = %dec_label_pc_14c0
  %4 = call i64* @malloc(i32 4), !insn.addr !307
  %5 = icmp eq i64* %4, null, !insn.addr !308
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !308
  br i1 %5, label %dec_label_pc_14f8, label %dec_label_pc_14e8, !insn.addr !308

dec_label_pc_14e8:                                ; preds = %dec_label_pc_14cc
  call void @free(i64* nonnull %4), !insn.addr !309
  call void @free(i64* nonnull %4), !insn.addr !310
  store i32 -2, i32* %storemerge.reg2mem, !insn.addr !311
  br label %dec_label_pc_14f8, !insn.addr !311

dec_label_pc_14f8:                                ; preds = %dec_label_pc_14cc, %dec_label_pc_14e8
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !312

; uselistorder directives
  uselistorder i64* %4, { 1, 0, 2 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_14f8, { 1, 0 }
}

define i32 @heap_overflow() local_unnamed_addr {
dec_label_pc_1510:
  %x19.0.reg2mem = alloca i32, !insn.addr !313
  %x2.0.reg2mem = alloca i64, !insn.addr !313
  %x1.0.reg2mem = alloca i64, !insn.addr !313
  %0 = call i64* @malloc(i32 40), !insn.addr !314
  %1 = icmp eq i64* %0, null, !insn.addr !315
  store i32 -1, i32* %x19.0.reg2mem, !insn.addr !315
  br i1 %1, label %dec_label_pc_1548, label %dec_label_pc_1528, !insn.addr !315

dec_label_pc_1528:                                ; preds = %dec_label_pc_1510
  %2 = ptrtoint i64* %0 to i64, !insn.addr !314
  store i64 0, i64* %x1.0.reg2mem, !insn.addr !316
  store i64 %2, i64* %x2.0.reg2mem, !insn.addr !316
  br label %dec_label_pc_1530, !insn.addr !316

dec_label_pc_1530:                                ; preds = %dec_label_pc_1530, %dec_label_pc_1528
  %x2.0.reload = load i64, i64* %x2.0.reg2mem
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %3 = trunc i64 %x1.0.reload to i32, !insn.addr !317
  %4 = inttoptr i64 %x2.0.reload to i32*, !insn.addr !317
  store i32 %3, i32* %4, align 4, !insn.addr !317
  %5 = add i64 %x2.0.reload, 4, !insn.addr !317
  %6 = add nuw nsw i64 %x1.0.reload, 100, !insn.addr !318
  %7 = and i64 %6, 4294967295, !insn.addr !318
  %8 = trunc i64 %6 to i32, !insn.addr !319
  %9 = icmp eq i32 %8, ptrtoint (i1* @global_var_44c to i32), !insn.addr !319
  store i64 %7, i64* %x1.0.reg2mem, !insn.addr !319
  store i64 %5, i64* %x2.0.reg2mem, !insn.addr !319
  br i1 %9, label %dec_label_pc_1540, label %dec_label_pc_1530, !insn.addr !319

dec_label_pc_1540:                                ; preds = %dec_label_pc_1530
  %10 = bitcast i64* %0 to i32*, !insn.addr !320
  %11 = load i32, i32* %10, align 4, !insn.addr !320
  call void @free(i64* nonnull %0), !insn.addr !321
  store i32 %11, i32* %x19.0.reg2mem, !insn.addr !321
  br label %dec_label_pc_1548, !insn.addr !321

dec_label_pc_1548:                                ; preds = %dec_label_pc_1510, %dec_label_pc_1540
  %x19.0.reload = load i32, i32* %x19.0.reg2mem
  ret i32 %x19.0.reload, !insn.addr !322

; uselistorder directives
  uselistorder i64 %x1.0.reload, { 1, 0 }
  uselistorder i64* %0, { 0, 1, 3, 2 }
  uselistorder i64* %x1.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x2.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %x19.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1548, { 1, 0 }
}

define void @test_heap_memory() local_unnamed_addr {
dec_label_pc_1560:
  %x2.2.reg2mem = alloca i64, !insn.addr !323
  %x2.1.reg2mem = alloca i64, !insn.addr !323
  %storemerge.reg2mem = alloca i64, !insn.addr !323
  %x19.3.reg2mem = alloca i64, !insn.addr !323
  %x2.0.reg2mem = alloca i64, !insn.addr !323
  %x1.2.reg2mem = alloca i64, !insn.addr !323
  %x19.2.reg2mem = alloca i64, !insn.addr !323
  %x19.1.reg2mem = alloca i32, !insn.addr !323
  %x1.1.reg2mem = alloca i64, !insn.addr !323
  %x19.0.reg2mem = alloca i64, !insn.addr !323
  %x1.0.reg2mem = alloca i64, !insn.addr !323
  %stack_var_-4 = alloca i32, align 4
  %0 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !324
  %1 = inttoptr i64 %0 to i64*, !insn.addr !325
  %2 = load i64, i64* %1, align 8, !insn.addr !325
  %3 = call i32 @puts(i8* bitcast (i8** @global_var_2118 to i8*)), !insn.addr !326
  %4 = call i64* @malloc(i32 40), !insn.addr !327
  %5 = ptrtoint i64* %4 to i64, !insn.addr !327
  %6 = icmp eq i64* %4, null, !insn.addr !328
  store i64 0, i64* %x1.0.reg2mem, !insn.addr !328
  store i64 4294967295, i64* %x19.0.reg2mem, !insn.addr !328
  br i1 %6, label %dec_label_pc_15bc, label %dec_label_pc_15a0, !insn.addr !328

dec_label_pc_15a0:                                ; preds = %dec_label_pc_1560, %dec_label_pc_15a0
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %7 = trunc i64 %x1.0.reload to i32, !insn.addr !329
  %8 = mul i32 %7, 2, !insn.addr !329
  %9 = mul i64 %x1.0.reload, 4, !insn.addr !330
  %10 = add i64 %9, %5, !insn.addr !330
  %11 = inttoptr i64 %10 to i32*, !insn.addr !330
  store i32 %8, i32* %11, align 4, !insn.addr !330
  %12 = add nuw nsw i64 %x1.0.reload, 1, !insn.addr !331
  %13 = icmp eq i64 %12, 10, !insn.addr !332
  store i64 %12, i64* %x1.0.reg2mem, !insn.addr !332
  br i1 %13, label %dec_label_pc_15b4, label %dec_label_pc_15a0, !insn.addr !332

dec_label_pc_15b4:                                ; preds = %dec_label_pc_15a0
  %14 = add i64 %5, 20, !insn.addr !333
  %15 = inttoptr i64 %14 to i32*, !insn.addr !333
  %16 = load i32, i32* %15, align 4, !insn.addr !333
  %17 = zext i32 %16 to i64, !insn.addr !333
  call void @free(i64* nonnull %4), !insn.addr !334
  store i64 %17, i64* %x19.0.reg2mem, !insn.addr !334
  br label %dec_label_pc_15bc, !insn.addr !334

dec_label_pc_15bc:                                ; preds = %dec_label_pc_1560, %dec_label_pc_15b4
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2138, i64 0, i64 0), i64 %x19.0.reload), !insn.addr !335
  %19 = call i64* @calloc(i32 5, i32 4), !insn.addr !336
  %20 = icmp eq i64* %19, null, !insn.addr !337
  store i64 4294967295, i64* %x19.2.reg2mem, !insn.addr !337
  br i1 %20, label %dec_label_pc_1604, label %dec_label_pc_15f0.preheader, !insn.addr !337

dec_label_pc_15f0.preheader:                      ; preds = %dec_label_pc_15bc
  %21 = ptrtoint i64* %19 to i64, !insn.addr !336
  %22 = add nsw i64 %21, 16
  store i64 %21, i64* %x1.1.reg2mem
  store i32 0, i32* %x19.1.reg2mem
  br label %dec_label_pc_15f0

dec_label_pc_15f0:                                ; preds = %dec_label_pc_15f0.preheader, %dec_label_pc_15f0
  %x19.1.reload = load i32, i32* %x19.1.reg2mem
  %x1.1.reload = load i64, i64* %x1.1.reg2mem
  %23 = inttoptr i64 %x1.1.reload to i32*, !insn.addr !338
  %24 = load i32, i32* %23, align 4, !insn.addr !338
  %25 = add i64 %x1.1.reload, 4, !insn.addr !338
  %26 = add i32 %24, %x19.1.reload, !insn.addr !339
  %27 = icmp eq i64 %22, %x1.1.reload, !insn.addr !340
  store i64 %25, i64* %x1.1.reg2mem, !insn.addr !340
  store i32 %26, i32* %x19.1.reg2mem, !insn.addr !340
  br i1 %27, label %dec_label_pc_1600, label %dec_label_pc_15f0, !insn.addr !340

dec_label_pc_1600:                                ; preds = %dec_label_pc_15f0
  %28 = zext i32 %26 to i64, !insn.addr !339
  call void @free(i64* nonnull %19), !insn.addr !341
  store i64 %28, i64* %x19.2.reg2mem, !insn.addr !341
  br label %dec_label_pc_1604, !insn.addr !341

dec_label_pc_1604:                                ; preds = %dec_label_pc_15bc, %dec_label_pc_1600
  %x19.2.reload = load i64, i64* %x19.2.reg2mem
  %29 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2158, i64 0, i64 0), i64 %x19.2.reload), !insn.addr !342
  %30 = call i32 @heap_realloc(), !insn.addr !343
  %31 = zext i32 %30 to i64, !insn.addr !344
  %32 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_2178, i64 0, i64 0), i64 %31), !insn.addr !345
  %33 = call i64* @malloc(i32 40), !insn.addr !346
  %34 = ptrtoint i64* %33 to i64, !insn.addr !346
  %35 = icmp eq i64* %33, null, !insn.addr !347
  store i64 0, i64* %x1.2.reg2mem, !insn.addr !347
  store i64 %34, i64* %x2.0.reg2mem, !insn.addr !347
  store i64 4294967295, i64* %x19.3.reg2mem, !insn.addr !347
  br i1 %35, label %dec_label_pc_1660, label %dec_label_pc_1648, !insn.addr !347

dec_label_pc_1648:                                ; preds = %dec_label_pc_1604, %dec_label_pc_1648
  %x2.0.reload = load i64, i64* %x2.0.reg2mem
  %x1.2.reload = load i64, i64* %x1.2.reg2mem
  %36 = trunc i64 %x1.2.reload to i32, !insn.addr !348
  %37 = inttoptr i64 %x2.0.reload to i32*, !insn.addr !348
  store i32 %36, i32* %37, align 4, !insn.addr !348
  %38 = add i64 %x2.0.reload, 4, !insn.addr !348
  %39 = add nuw nsw i64 %x1.2.reload, 3, !insn.addr !349
  %40 = and i64 %39, 4294967295, !insn.addr !349
  %41 = trunc i64 %39 to i32, !insn.addr !350
  %42 = icmp eq i32 %41, 30, !insn.addr !350
  store i64 %40, i64* %x1.2.reg2mem, !insn.addr !350
  store i64 %38, i64* %x2.0.reg2mem, !insn.addr !350
  br i1 %42, label %dec_label_pc_1658, label %dec_label_pc_1648, !insn.addr !350

dec_label_pc_1658:                                ; preds = %dec_label_pc_1648
  %43 = add i64 %34, 20, !insn.addr !351
  %44 = inttoptr i64 %43 to i32*, !insn.addr !351
  %45 = load i32, i32* %44, align 4, !insn.addr !351
  %46 = zext i32 %45 to i64, !insn.addr !351
  call void @free(i64* nonnull %33), !insn.addr !352
  store i64 %46, i64* %x19.3.reg2mem, !insn.addr !352
  br label %dec_label_pc_1660, !insn.addr !352

dec_label_pc_1660:                                ; preds = %dec_label_pc_1604, %dec_label_pc_1658
  %x19.3.reload = load i64, i64* %x19.3.reg2mem
  %47 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2198, i64 0, i64 0), i64 %x19.3.reload), !insn.addr !353
  %48 = call i64* @malloc(i32 8), !insn.addr !354
  %49 = icmp eq i64* %48, null, !insn.addr !355
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !355
  br i1 %49, label %dec_label_pc_1688, label %dec_label_pc_1680, !insn.addr !355

dec_label_pc_1680:                                ; preds = %dec_label_pc_1660
  call void @free(i64* nonnull %48), !insn.addr !356
  store i64 15, i64* %storemerge.reg2mem, !insn.addr !357
  br label %dec_label_pc_1688, !insn.addr !357

dec_label_pc_1688:                                ; preds = %dec_label_pc_1660, %dec_label_pc_1680
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %50 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_21b8, i64 0, i64 0), i64 %storemerge.reload), !insn.addr !358
  %51 = call i64* @malloc(i32 16), !insn.addr !359
  %52 = icmp eq i64* %51, null, !insn.addr !360
  br i1 %52, label %dec_label_pc_18a8, label %dec_label_pc_16a8, !insn.addr !360

dec_label_pc_16a8:                                ; preds = %dec_label_pc_1688
  %53 = ptrtoint i64* %51 to i64, !insn.addr !359
  %54 = call i64* @malloc(i32 16), !insn.addr !361
  %55 = ptrtoint i64* %54 to i64, !insn.addr !361
  %56 = add i64 %53, 8, !insn.addr !362
  %57 = inttoptr i64 %56 to i64*, !insn.addr !362
  store i64 %55, i64* %57, align 8, !insn.addr !362
  %58 = icmp eq i64* %54, null, !insn.addr !363
  br i1 %58, label %dec_label_pc_1898, label %dec_label_pc_16b8, !insn.addr !363

dec_label_pc_16b8:                                ; preds = %dec_label_pc_16a8
  %59 = bitcast i64* %54 to i32*, !insn.addr !364
  store i32 20, i32* %59, align 4, !insn.addr !364
  %60 = add i64 %55, 8, !insn.addr !365
  %61 = inttoptr i64 %60 to i64*, !insn.addr !365
  store i64 0, i64* %61, align 8, !insn.addr !365
  store i64 0, i64* %x2.1.reg2mem, !insn.addr !365
  br label %dec_label_pc_16c8, !insn.addr !365

dec_label_pc_16c8:                                ; preds = %dec_label_pc_1898, %dec_label_pc_16b8
  %x2.1.reload = load i64, i64* %x2.1.reg2mem
  %62 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_22f8, i64 0, i64 0), i64 %x2.1.reload), !insn.addr !366
  %63 = load i64, i64* %57, align 8, !insn.addr !367
  %64 = inttoptr i64 %63 to i64*, !insn.addr !368
  call void @free(i64* %64), !insn.addr !368
  call void @free(i64* nonnull %51), !insn.addr !369
  br label %dec_label_pc_16e8, !insn.addr !369

dec_label_pc_16e8:                                ; preds = %dec_label_pc_18a8, %dec_label_pc_16c8
  %65 = call i32 @linked_list_heap(), !insn.addr !370
  %66 = zext i32 %65 to i64, !insn.addr !371
  %67 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_21d8, i64 0, i64 0), i64 %66), !insn.addr !372
  %68 = call i32 @tree_heap_traversal(), !insn.addr !373
  %69 = zext i32 %68 to i64, !insn.addr !374
  %70 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_2200, i64 0, i64 0), i64 %69), !insn.addr !375
  %71 = call i64* @malloc(i32 20), !insn.addr !376
  %72 = icmp eq i64* %71, null, !insn.addr !377
  store i64 4294967295, i64* %x2.2.reg2mem, !insn.addr !377
  br i1 %72, label %dec_label_pc_1740, label %dec_label_pc_1724, !insn.addr !377

dec_label_pc_1724:                                ; preds = %dec_label_pc_16e8
  %73 = ptrtoint i64* %71 to i64, !insn.addr !376
  store i64 4294967296, i64* %71, align 8, !insn.addr !378
  %74 = add i64 %73, 8, !insn.addr !378
  %75 = inttoptr i64 %74 to i64*, !insn.addr !378
  store i64 12884901890, i64* %75, align 8, !insn.addr !378
  %76 = add i64 %73, 16, !insn.addr !379
  %77 = inttoptr i64 %76 to i32*, !insn.addr !379
  store i32 4, i32* %77, align 4, !insn.addr !379
  store i64 2, i64* %x2.2.reg2mem, !insn.addr !379
  br label %dec_label_pc_1740, !insn.addr !379

dec_label_pc_1740:                                ; preds = %dec_label_pc_16e8, %dec_label_pc_1724
  %x2.2.reload = load i64, i64* %x2.2.reg2mem
  %78 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2228, i64 0, i64 0), i64 %x2.2.reload), !insn.addr !380
  %79 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_2248, i64 0, i64 0)), !insn.addr !381
  %80 = call i32 @fork(), !insn.addr !382
  %81 = icmp eq i32 %80, 0, !insn.addr !383
  br i1 %81, label %dec_label_pc_17f0, label %dec_label_pc_176c, !insn.addr !383

dec_label_pc_176c:                                ; preds = %dec_label_pc_1740
  %82 = icmp sgt i32 %80, 0, !insn.addr !384
  br i1 %82, label %dec_label_pc_1770, label %dec_label_pc_17c0, !insn.addr !384

dec_label_pc_1770:                                ; preds = %dec_label_pc_176c
  %83 = call i32 @waitpid(i32 %80, i32* nonnull %stack_var_-4, i32 0), !insn.addr !385
  %84 = load i32, i32* %stack_var_-4, align 4, !insn.addr !386
  %85 = urem i32 %84, 128, !insn.addr !387
  %86 = zext i32 %85 to i64, !insn.addr !387
  %87 = icmp eq i32 %85, 0, !insn.addr !387
  br i1 %87, label %dec_label_pc_184c, label %dec_label_pc_1788, !insn.addr !388

dec_label_pc_1788:                                ; preds = %dec_label_pc_1770
  %88 = add nuw nsw i64 %86, 1, !insn.addr !389
  %89 = call i64 @__asm_sbfx(i64 %88, i64 %88, i64 1, i64 7), !insn.addr !390
  %90 = trunc i64 %89 to i32, !insn.addr !391
  %91 = icmp sgt i32 %90, 0, !insn.addr !391
  br i1 %91, label %dec_label_pc_1838, label %dec_label_pc_1798, !insn.addr !391

dec_label_pc_1798:                                ; preds = %dec_label_pc_184c, %dec_label_pc_1838, %dec_label_pc_1788
  %92 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !392
  %93 = inttoptr i64 %92 to i64*, !insn.addr !393
  %94 = load i64, i64* %93, align 8, !insn.addr !393
  %95 = icmp eq i64 %2, %94, !insn.addr !394
  br i1 %95, label %dec_label_pc_17b4, label %dec_label_pc_186c, !insn.addr !394

dec_label_pc_17b4:                                ; preds = %dec_label_pc_1798
  ret void, !insn.addr !395

dec_label_pc_17c0:                                ; preds = %dec_label_pc_176c
  %96 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !396
  %97 = inttoptr i64 %96 to i64*, !insn.addr !397
  %98 = load i64, i64* %97, align 8, !insn.addr !397
  %99 = icmp eq i64 %2, %98, !insn.addr !398
  br i1 %99, label %dec_label_pc_17dc, label %dec_label_pc_186c, !insn.addr !398

dec_label_pc_17dc:                                ; preds = %dec_label_pc_17c0
  call void @perror(i8* bitcast (i8** @global_var_22e8 to i8*)), !insn.addr !399
  ret void, !insn.addr !399

dec_label_pc_17f0:                                ; preds = %dec_label_pc_1740
  %100 = call i64* @malloc(i32 4), !insn.addr !400
  %101 = icmp eq i64* %100, null, !insn.addr !401
  br i1 %101, label %dec_label_pc_1820, label %dec_label_pc_1800, !insn.addr !401

dec_label_pc_1800:                                ; preds = %dec_label_pc_17f0
  %102 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_2100, i64 0, i64 0), i64 42), !insn.addr !402
  call void @free(i64* nonnull %100), !insn.addr !403
  br label %dec_label_pc_1820, !insn.addr !404

dec_label_pc_1820:                                ; preds = %dec_label_pc_17f0, %dec_label_pc_186c, %dec_label_pc_1800
  %103 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2268 to i8*)), !insn.addr !405
  call void @exit(i32 0), !insn.addr !406
  unreachable, !insn.addr !406

dec_label_pc_1838:                                ; preds = %dec_label_pc_1788
  %104 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_22a0 to i8*)), !insn.addr !407
  br label %dec_label_pc_1798, !insn.addr !408

dec_label_pc_184c:                                ; preds = %dec_label_pc_1770
  %105 = zext i32 %84 to i64, !insn.addr !386
  %106 = call i64 @__asm_ubfx(i64 %86, i64 %105, i64 8, i64 8), !insn.addr !409
  %107 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2278 to i8*)), !insn.addr !410
  br label %dec_label_pc_1798, !insn.addr !411

dec_label_pc_186c:                                ; preds = %dec_label_pc_17c0, %dec_label_pc_1798
  call void @__stack_chk_fail(), !insn.addr !412
  br label %dec_label_pc_1820, !insn.addr !412

dec_label_pc_1898:                                ; preds = %dec_label_pc_16a8
  call void @free(i64* nonnull %51), !insn.addr !413
  store i64 4294967294, i64* %x2.1.reg2mem, !insn.addr !414
  br label %dec_label_pc_16c8, !insn.addr !414

dec_label_pc_18a8:                                ; preds = %dec_label_pc_1688
  %108 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_22f8, i64 0, i64 0), i64 4294967295), !insn.addr !415
  br label %dec_label_pc_16e8, !insn.addr !416

; uselistorder directives
  uselistorder i64 %88, { 1, 0 }
  uselistorder i32 %85, { 1, 0 }
  uselistorder i32 %84, { 1, 0 }
  uselistorder i64* %71, { 0, 2, 1 }
  uselistorder i64* %51, { 0, 1, 3, 2 }
  uselistorder i64 %x1.2.reload, { 1, 0 }
  uselistorder i64 %34, { 1, 0 }
  uselistorder i32 %26, { 1, 0 }
  uselistorder i64 %x1.1.reload, { 2, 0, 1 }
  uselistorder i64* %19, { 0, 2, 1 }
  uselistorder i64 %x1.0.reload, { 1, 2, 0 }
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64* %x1.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x19.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x1.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %x19.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x19.2.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x1.2.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x2.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x19.3.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x2.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x2.2.reg2mem, { 0, 2, 1 }
  uselistorder i64 4294967296, { 1, 0 }
  uselistorder i64 8, { 11, 12, 13, 14, 15, 1, 4, 5, 6, 7, 8, 2, 3, 9, 10, 0 }
  uselistorder i64 16, { 4, 0, 1, 3, 5, 2 }
  uselistorder i32 4, { 3, 4, 5, 6, 7, 0, 1, 8, 2 }
  uselistorder void (i64*)* @free, { 7, 6, 5, 4, 3, 2, 1, 0, 19, 18, 17, 25, 16, 15, 13, 12, 14, 11, 10, 24, 23, 22, 9, 8, 21, 20, 26 }
  uselistorder i64* (i32)* @malloc, { 6, 5, 4, 3, 2, 1, 0, 13, 12, 21, 20, 11, 10, 9, 19, 8, 18, 17, 16, 15, 7, 14, 22 }
  uselistorder label %dec_label_pc_1820, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1740, { 1, 0 }
  uselistorder label %dec_label_pc_1688, { 1, 0 }
  uselistorder label %dec_label_pc_1660, { 1, 0 }
  uselistorder label %dec_label_pc_1648, { 1, 0 }
  uselistorder label %dec_label_pc_1604, { 1, 0 }
  uselistorder label %dec_label_pc_15f0, { 1, 0 }
  uselistorder label %dec_label_pc_15bc, { 1, 0 }
  uselistorder label %dec_label_pc_15a0, { 1, 0 }
}

define i64 @global_var_access() local_unnamed_addr {
dec_label_pc_18c0:
  %0 = load i32, i32* @global_counter, align 4, !insn.addr !417
  %1 = add i32 %0, 1, !insn.addr !418
  %2 = zext i32 %1 to i64, !insn.addr !418
  store i32 %1, i32* @global_counter, align 4, !insn.addr !419
  ret i64 %2, !insn.addr !420
}

define i64 @global_var_read() local_unnamed_addr {
dec_label_pc_18d4:
  %0 = load i32, i32* @global_counter, align 4, !insn.addr !421
  %1 = mul i32 %0, 2, !insn.addr !422
  %2 = zext i32 %1 to i64, !insn.addr !422
  ret i64 %2, !insn.addr !423
}

define i64 @global_array_access() local_unnamed_addr {
dec_label_pc_18e4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !424
  %3 = icmp ult i32 %2, 9, !insn.addr !424
  %4 = icmp ne i1 %3, true, !insn.addr !424
  %5 = icmp eq i32 %2, 9, !insn.addr !424
  %6 = icmp ne i1 %5, true, !insn.addr !425
  %7 = icmp eq i1 %4, %6, !insn.addr !425
  br i1 %7, label %dec_label_pc_18fc, label %dec_label_pc_18ec, !insn.addr !425

dec_label_pc_18ec:                                ; preds = %dec_label_pc_18e4
  %8 = mul i64 %1, 4, !insn.addr !426
  %9 = and i64 %8, 4294967292, !insn.addr !426
  %10 = add i64 %9, ptrtoint ([10 x i32]* @global_array to i64), !insn.addr !426
  %11 = inttoptr i64 %10 to i32*, !insn.addr !426
  %12 = load i32, i32* %11, align 4, !insn.addr !426
  %13 = zext i32 %12 to i64, !insn.addr !426
  ret i64 %13, !insn.addr !427

dec_label_pc_18fc:                                ; preds = %dec_label_pc_18e4
  ret i64 4294967295, !insn.addr !428

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64 4, { 0, 9, 10, 1, 8, 2, 6, 3, 4, 11, 5, 7 }
}

define i64 @static_local() local_unnamed_addr {
dec_label_pc_1904:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !429
  %3 = icmp eq i32 %2, 0, !insn.addr !429
  br i1 %3, label %dec_label_pc_1908, label %dec_label_pc_1924, !insn.addr !429

dec_label_pc_1908:                                ; preds = %dec_label_pc_1904
  store i32 ptrtoint (i32* @global_var_14035 to i32), i32* bitcast (i64* @global_var_14034 to i32*), align 8, !insn.addr !430
  ret i64 ptrtoint (i32* @global_var_14035 to i64), !insn.addr !431

dec_label_pc_1924:                                ; preds = %dec_label_pc_1904
  store i32 0, i32* bitcast (i64* @global_var_14034 to i32*), align 8, !insn.addr !432
  ret i64 0, !insn.addr !433
}

define i64 @call_static_func() local_unnamed_addr {
dec_label_pc_1940:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !434
  %3 = and i64 %2, 4294967294, !insn.addr !435
  %4 = or i64 %3, 1, !insn.addr !435
  ret i64 %4, !insn.addr !436
}

define i64 @access_extern_global() local_unnamed_addr {
dec_label_pc_1950:
  %0 = load i32, i32* bitcast (i32** @global_var_13ff0 to i32*), align 8, !insn.addr !437
  %1 = add i32 %0, 100, !insn.addr !438
  %2 = zext i32 %1 to i64, !insn.addr !438
  ret i64 %2, !insn.addr !439
}

define i64 @call_extern_func() local_unnamed_addr {
dec_label_pc_1964:
  %0 = call i32 @extern_function(i32 5), !insn.addr !440
  %1 = sext i32 %0 to i64, !insn.addr !440
  ret i64 %1, !insn.addr !440
}

define i64 @read_const_data() local_unnamed_addr {
dec_label_pc_1970:
  %0 = load i8, i8* bitcast (i32* @global_var_1401c to i8*), align 4, !insn.addr !441
  %1 = zext i8 %0 to i64, !insn.addr !441
  %2 = add nuw nsw i64 %1, 42, !insn.addr !442
  ret i64 %2, !insn.addr !443
}

define i64 @access_bss_var() local_unnamed_addr {
dec_label_pc_1984:
  ret i64 0, !insn.addr !444
}

define i64 @access_bss_buffer() local_unnamed_addr {
dec_label_pc_1990:
  ret i64 0, !insn.addr !445
}

define i64 @global_struct_access() local_unnamed_addr {
dec_label_pc_19a0:
  ret i64 30, !insn.addr !446
}

define i64 @set_file_static() local_unnamed_addr {
dec_label_pc_19b0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !447
  store i32 %2, i32* @file_scope_static, align 4, !insn.addr !447
  ret i64 %1, !insn.addr !448

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @get_file_static() local_unnamed_addr {
dec_label_pc_19c0:
  %0 = load i32, i32* @file_scope_static, align 4, !insn.addr !449
  %1 = zext i32 %0 to i64, !insn.addr !449
  ret i64 %1, !insn.addr !450
}

define i64 @set_global_callback() local_unnamed_addr {
dec_label_pc_19d0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !451
}

define i64 @call_global_callback() local_unnamed_addr {
dec_label_pc_19e0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i32 (i32)*, i32 (i32)** @global_func_ptr, align 8, !insn.addr !452
  %3 = icmp eq i32 (i32)* %2, null, !insn.addr !453
  %spec.select = select i1 %3, i64 4294967295, i64 %1
  ret i64 %spec.select, !insn.addr !454
}

define i64 @global_heap_store() local_unnamed_addr {
dec_label_pc_1a00:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %1, 0, !insn.addr !455
  br i1 %2, label %dec_label_pc_1a0c, label %dec_label_pc_1a04, !insn.addr !455

dec_label_pc_1a04:                                ; preds = %dec_label_pc_1a00
  %3 = and i64 %1, 4294967295, !insn.addr !456
  ret i64 %3, !insn.addr !457

dec_label_pc_1a0c:                                ; preds = %dec_label_pc_1a00
  ret i64 4294967295, !insn.addr !458

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @static_complex_init() local_unnamed_addr {
dec_label_pc_1a14:
  ret i64 15, !insn.addr !459
}

define i64 @tls_access() local_unnamed_addr {
dec_label_pc_1a20:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !460
  %3 = and i64 %2, 4294967294, !insn.addr !460
  ret i64 %3, !insn.addr !461
}

define i64 @init_order_test() local_unnamed_addr {
dec_label_pc_1a30:
  ret i64 20, !insn.addr !462
}

define void @test_static_global() local_unnamed_addr {
dec_label_pc_1a40:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_2318 to i8*)), !insn.addr !463
  %1 = load i32, i32* @global_counter, align 4, !insn.addr !464
  %2 = add i32 %1, 1, !insn.addr !465
  %3 = zext i32 %2 to i64, !insn.addr !465
  store i32 %2, i32* @global_counter, align 4, !insn.addr !466
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_2340, i64 0, i64 0), i64 %3), !insn.addr !467
  %5 = load i32, i32* @global_counter, align 4, !insn.addr !468
  %6 = mul i32 %5, 2, !insn.addr !469
  %7 = zext i32 %6 to i64, !insn.addr !469
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_2368, i64 0, i64 0), i64 %7), !insn.addr !470
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_2390, i64 0, i64 0), i64 5), !insn.addr !471
  store i32 1, i32* bitcast (i64* @global_var_14034 to i32*), align 8, !insn.addr !472
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_23b8, i64 0, i64 0), i64 1), !insn.addr !473
  store i32 ptrtoint (i32* @global_var_14035 to i32), i32* bitcast (i64* @global_var_14034 to i32*), align 8, !insn.addr !474
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_23b8, i64 0, i64 0), i64 ptrtoint (i32* @global_var_14035 to i64)), !insn.addr !475
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_23d8, i64 0, i64 0), i64 11), !insn.addr !476
  %13 = load i32, i32* bitcast (i32** @global_var_13ff0 to i32*), align 8, !insn.addr !477
  %14 = add i32 %13, 100, !insn.addr !478
  %15 = zext i32 %14 to i64, !insn.addr !478
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_2400, i64 0, i64 0), i64 %15), !insn.addr !479
  %17 = call i32 @extern_function(i32 5), !insn.addr !480
  %18 = zext i32 %17 to i64, !insn.addr !481
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_2428, i64 0, i64 0), i64 %18), !insn.addr !482
  %20 = load i8, i8* bitcast (i32* @global_var_1401c to i8*), align 4, !insn.addr !483
  %21 = zext i8 %20 to i64, !insn.addr !483
  %22 = add nuw nsw i64 %21, 42, !insn.addr !484
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_2450, i64 0, i64 0), i64 %22), !insn.addr !485
  %24 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_2478, i64 0, i64 0), i64 0), !insn.addr !486
  %25 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_2498, i64 0, i64 0), i64 0), !insn.addr !487
  %26 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_24c0, i64 0, i64 0), i64 30), !insn.addr !488
  store i32 50, i32* @file_scope_static, align 4, !insn.addr !489
  %27 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_24e8, i64 0, i64 0), i64 50), !insn.addr !490
  store i64 3168, i64* bitcast (i32 (i32)** @global_func_ptr to i64*), align 8, !insn.addr !491
  %28 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_2508, i64 0, i64 0), i64 10), !insn.addr !492
  %29 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_2530, i64 0, i64 0), i64 100), !insn.addr !493
  %30 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_2558, i64 0, i64 0), i64 15), !insn.addr !494
  %31 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_2580, i64 0, i64 0), i64 20), !insn.addr !495
  %32 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_25a0, i64 0, i64 0), i64 20), !insn.addr !496
  ret void, !insn.addr !496

; uselistorder directives
  uselistorder i64 20, { 2, 3, 0, 6, 7, 4, 5, 1 }
  uselistorder i64 15, { 2, 1, 0, 3, 5, 4 }
  uselistorder i64 100, { 1, 0 }
  uselistorder i32 (i32)** @global_func_ptr, { 1, 0 }
  uselistorder i32 50, { 1, 2, 0 }
  uselistorder i64 30, { 1, 0 }
  uselistorder i64 42, { 1, 2, 3, 4, 5, 0 }
  uselistorder i8* bitcast (i32* @global_var_1401c to i8*), { 1, 0 }
  uselistorder i32 100, { 2, 1, 0 }
  uselistorder i64 ptrtoint (i32* @global_var_14035 to i64), { 1, 0 }
  uselistorder i32* @global_var_14035, { 1, 0 }
  uselistorder i32 2, { 0, 1, 2, 5, 6, 7, 3, 4 }
}

define i64 @memop_memset() local_unnamed_addr {
dec_label_pc_1c30:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = icmp eq i64 %3, 0, !insn.addr !497
  %5 = icmp eq i64 %2, 0
  %storemerge = or i1 %5, %4
  br i1 %storemerge, label %dec_label_pc_1c6c, label %dec_label_pc_1c40, !insn.addr !498

dec_label_pc_1c40:                                ; preds = %dec_label_pc_1c30
  %6 = trunc i64 %1 to i32, !insn.addr !499
  %7 = inttoptr i64 %3 to i64*, !insn.addr !500
  %8 = trunc i64 %2 to i32, !insn.addr !500
  %9 = call i64* @memset(i64* %7, i32 %6, i32 %8), !insn.addr !500
  %10 = urem i64 %3, 256, !insn.addr !501
  ret i64 %10, !insn.addr !502

dec_label_pc_1c6c:                                ; preds = %dec_label_pc_1c30
  ret i64 4294967295, !insn.addr !503

; uselistorder directives
  uselistorder i64 %3, { 2, 1, 0 }
  uselistorder i64* %0, { 2, 1, 0 }
}

define i64 @memop_memcpy() local_unnamed_addr {
dec_label_pc_1c74:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = icmp eq i64 %2, 0, !insn.addr !504
  %5 = icmp eq i64 %1, 0
  %storemerge1 = or i1 %5, %4
  %6 = icmp eq i64 %3, 0
  %storemerge = or i1 %storemerge1, %6
  br i1 %storemerge, label %dec_label_pc_1cb4, label %dec_label_pc_1c84, !insn.addr !505

dec_label_pc_1c84:                                ; preds = %dec_label_pc_1c74
  %7 = inttoptr i64 %3 to i64*, !insn.addr !506
  %8 = inttoptr i64 %2 to i64*, !insn.addr !506
  %9 = trunc i64 %1 to i32, !insn.addr !506
  %10 = call i64* @memcpy(i64* %7, i64* %8, i32 %9), !insn.addr !506
  %11 = add i64 %1, -4
  %12 = and i64 %11, -4, !insn.addr !507
  %13 = add i64 %12, %3, !insn.addr !508
  %14 = inttoptr i64 %13 to i32*, !insn.addr !508
  %15 = load i32, i32* %14, align 4, !insn.addr !508
  %16 = zext i32 %15 to i64, !insn.addr !508
  ret i64 %16, !insn.addr !509

dec_label_pc_1cb4:                                ; preds = %dec_label_pc_1c74
  ret i64 4294967295, !insn.addr !510

; uselistorder directives
  uselistorder i64 %3, { 2, 0, 1 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 2, 0, 1 }
  uselistorder i64* %0, { 2, 1, 0 }
}

define i64 @memop_memmove() local_unnamed_addr {
dec_label_pc_1cc0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = icmp eq i64 %2, 0, !insn.addr !511
  br i1 %3, label %dec_label_pc_1cfc, label %4, !insn.addr !512

; <label>:4:                                      ; preds = %dec_label_pc_1cc0
  %5 = icmp eq i64 %1, 0, !insn.addr !512
  %6 = icmp ne i1 %5, true, !insn.addr !512
  %7 = icmp eq i64 %1, 1, !insn.addr !512
  %phitmp = icmp ne i1 %6, true
  %8 = or i1 %7, %phitmp, !insn.addr !513
  br i1 %8, label %dec_label_pc_1cfc, label %dec_label_pc_1ccc, !insn.addr !513

dec_label_pc_1ccc:                                ; preds = %4
  %9 = add i64 %2, 1, !insn.addr !514
  %10 = inttoptr i64 %9 to i64*, !insn.addr !515
  %11 = inttoptr i64 %2 to i64*, !insn.addr !515
  %12 = trunc i64 %1 to i32
  %13 = add i32 %12, -1, !insn.addr !515
  %14 = call i64* @memmove(i64* %10, i64* %11, i32 %13), !insn.addr !515
  %15 = inttoptr i64 %9 to i8*, !insn.addr !516
  %16 = load i8, i8* %15, align 1, !insn.addr !516
  %17 = zext i8 %16 to i64, !insn.addr !516
  ret i64 %17, !insn.addr !517

dec_label_pc_1cfc:                                ; preds = %dec_label_pc_1cc0, %4
  ret i64 4294967295, !insn.addr !518

; uselistorder directives
  uselistorder i64 %2, { 2, 1, 0 }
  uselistorder i64 %1, { 2, 1, 0 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i32 -1, { 7, 0, 1, 2, 3, 4, 5, 6, 8 }
  uselistorder label %dec_label_pc_1cfc, { 1, 0 }
}

define i64 @memop_memcmp(i64 %arg1) local_unnamed_addr {
dec_label_pc_1d04:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = icmp eq i64 %2, 0, !insn.addr !519
  %5 = icmp eq i64 %1, 0
  %storemerge2 = or i1 %5, %4
  %6 = icmp eq i64 %3, 0
  %storemerge1 = or i1 %storemerge2, %6
  br i1 %storemerge1, label %dec_label_pc_1d14, label %dec_label_pc_1d1c, !insn.addr !520

dec_label_pc_1d14:                                ; preds = %dec_label_pc_1d04
  ret i64 0, !insn.addr !521

dec_label_pc_1d1c:                                ; preds = %dec_label_pc_1d04
  %7 = inttoptr i64 %3 to i64*, !insn.addr !522
  %8 = inttoptr i64 %2 to i64*, !insn.addr !522
  %9 = trunc i64 %1 to i32, !insn.addr !522
  %10 = call i32 @memcmp(i64* %7, i64* %8, i32 %9), !insn.addr !522
  %11 = icmp slt i32 %10, 1, !insn.addr !523
  %12 = icmp eq i32 %10, 0
  %13 = select i1 %12, i64 0, i64 4294967295
  %storemerge = select i1 %11, i64 %13, i64 1
  ret i64 %storemerge, !insn.addr !524

; uselistorder directives
  uselistorder i32 %10, { 1, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %0, { 2, 1, 0 }
}

define i64 @memop_bzero() local_unnamed_addr {
dec_label_pc_1d40:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = icmp eq i64 %2, 0, !insn.addr !525
  br i1 %3, label %dec_label_pc_1d70, label %dec_label_pc_1d44, !insn.addr !525

dec_label_pc_1d44:                                ; preds = %dec_label_pc_1d40
  %4 = inttoptr i64 %2 to i64*, !insn.addr !526
  %5 = trunc i64 %1 to i32, !insn.addr !526
  %6 = call i64* @memset(i64* %4, i32 0, i32 %5), !insn.addr !526
  %7 = urem i64 %2, 256, !insn.addr !527
  ret i64 %7, !insn.addr !528

dec_label_pc_1d70:                                ; preds = %dec_label_pc_1d40
  ret i64 4294967295, !insn.addr !529

; uselistorder directives
  uselistorder i64 %2, { 2, 1, 0 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64* (i64*, i32, i32)* @memset, { 1, 0, 2 }
}

define i64 @memop_bcopy(i64 %arg1) local_unnamed_addr {
dec_label_pc_1d80:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = icmp eq i64 %2, 0, !insn.addr !530
  %5 = icmp eq i64 %1, 0
  %storemerge1 = or i1 %5, %4
  %6 = icmp eq i64 %3, 0
  %storemerge = or i1 %storemerge1, %6
  br i1 %storemerge, label %dec_label_pc_1db4, label %dec_label_pc_1d90, !insn.addr !531

dec_label_pc_1d90:                                ; preds = %dec_label_pc_1d80
  %7 = inttoptr i64 %2 to i64*, !insn.addr !532
  %8 = inttoptr i64 %3 to i64*, !insn.addr !532
  %9 = trunc i64 %1 to i32, !insn.addr !532
  %10 = call i64* @memmove(i64* %7, i64* %8, i32 %9), !insn.addr !532
  %11 = bitcast i64* %10 to i8*, !insn.addr !533
  %12 = load i8, i8* %11, align 1, !insn.addr !533
  %13 = zext i8 %12 to i64, !insn.addr !533
  ret i64 %13, !insn.addr !534

dec_label_pc_1db4:                                ; preds = %dec_label_pc_1d80
  ret i64 4294967295, !insn.addr !535

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %0, { 2, 1, 0 }
}

define i64 @memop_unaligned_access() local_unnamed_addr {
dec_label_pc_1dc0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %1, 0, !insn.addr !536
  br i1 %2, label %dec_label_pc_1dcc, label %dec_label_pc_1dc4, !insn.addr !536

dec_label_pc_1dc4:                                ; preds = %dec_label_pc_1dc0
  %3 = add i64 %1, 1, !insn.addr !537
  %4 = inttoptr i64 %3 to i32*, !insn.addr !537
  %5 = load i32, i32* %4, align 4, !insn.addr !537
  %6 = zext i32 %5 to i64, !insn.addr !537
  ret i64 %6, !insn.addr !538

dec_label_pc_1dcc:                                ; preds = %dec_label_pc_1dc0
  ret i64 4294967295, !insn.addr !539

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @memop_memory_barrier() local_unnamed_addr {
dec_label_pc_1dd4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %1, 0, !insn.addr !540
  br i1 %2, label %dec_label_pc_1dec, label %dec_label_pc_1dd8, !insn.addr !540

dec_label_pc_1dd8:                                ; preds = %dec_label_pc_1dd4
  call void @__asm_dmb(i64 undef), !insn.addr !541
  %3 = mul i64 %1, 2, !insn.addr !542
  %4 = and i64 %3, 4294967294, !insn.addr !542
  ret i64 %4, !insn.addr !543

dec_label_pc_1dec:                                ; preds = %dec_label_pc_1dd4
  ret i64 4294967295, !insn.addr !544

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64 4294967294, { 2, 4, 5, 0, 1, 3, 6, 7 }
  uselistorder i64 2, { 1, 2, 3, 0, 10, 11, 12, 9, 4, 14, 5, 13, 6, 7, 8 }
}

define void @test_memory_op_functions() local_unnamed_addr {
dec_label_pc_1df4:
  %stack_var_-320 = alloca i64, align 8
  %stack_var_-304 = alloca i64, align 8
  %stack_var_-271 = alloca i64, align 8
  %stack_var_-272 = alloca i64, align 8
  %0 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !545
  %1 = inttoptr i64 %0 to i64*, !insn.addr !546
  %2 = load i64, i64* %1, align 8, !insn.addr !546
  %3 = call i32 @puts(i8* bitcast (i8** @global_var_25c8 to i8*)), !insn.addr !547
  %4 = call i128 @__asm_movi(i8 undef, i64 65), !insn.addr !548
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_25f0, i64 0, i64 0), i64 65), !insn.addr !549
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2608, i64 0, i64 0), i64 50), !insn.addr !550
  store i64 8245905578810697032, i64* %stack_var_-272, align 8, !insn.addr !551
  %7 = call i64* @memmove(i64* nonnull %stack_var_-271, i64* nonnull %stack_var_-272, i32 9), !insn.addr !552
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2620, i64 0, i64 0), i8 72), !insn.addr !553
  store i64 8589934593, i64* %stack_var_-320, align 8, !insn.addr !554
  store i64 8589934593, i64* %stack_var_-304, align 8, !insn.addr !555
  %9 = call i32 @memcmp(i64* nonnull %stack_var_-320, i64* nonnull %stack_var_-304, i32 12), !insn.addr !556
  %10 = icmp eq i32 %9, 0, !insn.addr !557
  %11 = icmp slt i32 %9, 1
  %.op = select i1 %10, i64 0, i64 4294967295
  %12 = select i1 %11, i64 %.op, i64 1, !insn.addr !558
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2638, i64 0, i64 0), i64 %12), !insn.addr !559
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2650, i64 0, i64 0), i64 0), !insn.addr !560
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2668, i64 0, i64 0), i64 1), !insn.addr !561
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_2680, i64 0, i64 0), i32 67305985), !insn.addr !562
  call void @__asm_dmb(i64 undef), !insn.addr !563
  %17 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !564
  %18 = inttoptr i64 %17 to i64*, !insn.addr !565
  %19 = load i64, i64* %18, align 8, !insn.addr !565
  %20 = icmp eq i64 %2, %19, !insn.addr !566
  br i1 %20, label %dec_label_pc_1f58, label %dec_label_pc_1f74, !insn.addr !566

dec_label_pc_1f58:                                ; preds = %dec_label_pc_1df4
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2698, i64 0, i64 0), i64 10), !insn.addr !567
  ret void, !insn.addr !567

dec_label_pc_1f74:                                ; preds = %dec_label_pc_1df4
  call void @__stack_chk_fail(), !insn.addr !568
  ret void, !insn.addr !569

; uselistorder directives
  uselistorder void ()* @__stack_chk_fail, { 2, 3, 4, 0, 5, 1, 6 }
  uselistorder i64 10, { 0, 3, 4, 1, 5, 6, 2 }
  uselistorder void (i64)* @__asm_dmb, { 1, 0 }
  uselistorder i64 undef, { 1, 0 }
  uselistorder i64 1, { 3, 2, 9, 1, 10, 4, 5, 6, 15, 7, 16, 11, 12, 13, 14, 8, 17, 0 }
  uselistorder i64 4294967295, { 24, 13, 14, 15, 16, 25, 17, 18, 19, 20, 22, 23, 21, 42, 0, 1, 26, 2, 3, 4, 27, 5, 28, 6, 29, 7, 30, 31, 8, 32, 33, 34, 9, 35, 10, 36, 11, 37, 38, 12, 39, 40, 41 }
  uselistorder i32 0, { 19, 8, 17, 9, 18, 10, 15, 20, 11, 7, 21, 0, 4, 1, 5, 2, 6, 3, 12, 13, 14, 16 }
  uselistorder i64* (i64*, i64*, i32)* @memmove, { 0, 2, 1, 3 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 50, 8, 7, 6, 5, 4, 3, 2, 1, 0, 51 }
  uselistorder i32 (i8*)* @puts, { 1, 0, 3, 2, 4 }
  uselistorder i64 0, { 41, 42, 43, 44, 45, 46, 133, 47, 48, 49, 50, 40, 51, 52, 53, 54, 55, 56, 142, 143, 144, 145, 146, 147, 57, 17, 148, 149, 150, 58, 151, 152, 153, 154, 155, 156, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 134, 73, 74, 135, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 157, 18, 19, 20, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 0, 173, 103, 104, 105, 106, 1, 107, 108, 109, 110, 111, 112, 2, 3, 113, 114, 4, 158, 159, 167, 168, 169, 170, 171, 172, 5, 6, 7, 8, 160, 9, 11, 10, 12, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 174, 13, 175, 176, 177, 161, 14, 162, 163, 164, 15, 16, 165, 21, 166, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 136, 137, 138, 139, 140, 141 }
  uselistorder i64* @global_var_13fe0, { 2, 3, 4, 5, 6, 0, 7, 1, 8, 9, 10, 11, 12 }
}

define i32 @extern_function(i32 %x) local_unnamed_addr {
dec_label_pc_1f80:
  %0 = mul i32 %x, 3, !insn.addr !570
  ret i32 %0, !insn.addr !571
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_1f88:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !572

; uselistorder directives
  uselistorder i32 1, { 32, 89, 91, 92, 93, 94, 90, 95, 96, 97, 153, 152, 151, 150, 31, 30, 29, 28, 98, 27, 26, 25, 24, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 23, 22, 21, 20, 19, 18, 17, 16, 160, 119, 121, 122, 123, 120, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 149, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 48, 47, 46, 49, 15, 134, 50, 135, 52, 51, 14, 53, 13, 62, 61, 60, 59, 58, 57, 56, 55, 54, 63, 12, 64, 11, 136, 67, 66, 65, 10, 68, 137, 72, 71, 70, 69, 9, 138, 74, 73, 8, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 154, 79, 78, 77, 76, 75, 155, 83, 82, 81, 80, 7, 156, 85, 84, 34, 6, 5, 4, 158, 157, 87, 86, 33, 3, 2, 1, 88, 159, 0 }
}

declare i64* @memcpy(i64*, i64*, i32) local_unnamed_addr

declare i64* @memmove(i64*, i64*, i32) local_unnamed_addr

declare void @exit(i32) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @perror(i8*) local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i32 @fork() local_unnamed_addr

declare i64* @malloc(i32) local_unnamed_addr

declare i32 @__printf_chk(i32, i8*, ...) local_unnamed_addr

declare i64* @memset(i64*, i32, i32) local_unnamed_addr

declare i64* @calloc(i32, i32) local_unnamed_addr

declare i64* @realloc(i64*, i32) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @memcmp(i64*, i64*, i32) local_unnamed_addr

declare void @free(i64*) local_unnamed_addr

declare i32 @waitpid(i32, i32*, i32) local_unnamed_addr

declare i64 @__asm_sbfiz(i64, i64, i64, i64) local_unnamed_addr

declare i64 @__asm_sbfx(i64, i64, i64, i64) local_unnamed_addr

declare i64 @__asm_ubfx(i64, i64, i64, i64) local_unnamed_addr

declare i128 @__asm_movi(i8, i64) local_unnamed_addr

declare void @__asm_dmb(i64) local_unnamed_addr

!0 = !{i64 2460}
!1 = !{i64 2468}
!2 = !{i64 2524}
!3 = !{i64 2540}
!4 = !{i64 2556}
!5 = !{i64 2572}
!6 = !{i64 2588}
!7 = !{i64 2604}
!8 = !{i64 2620}
!9 = !{i64 2636}
!10 = !{i64 2652}
!11 = !{i64 2668}
!12 = !{i64 2684}
!13 = !{i64 2700}
!14 = !{i64 2716}
!15 = !{i64 2732}
!16 = !{i64 2748}
!17 = !{i64 2764}
!18 = !{i64 2780}
!19 = !{i64 2796}
!20 = !{i64 2812}
!21 = !{i64 2824}
!22 = !{i64 2828}
!23 = !{i64 2832}
!24 = !{i64 2836}
!25 = !{i64 2848}
!26 = !{i64 2912}
!27 = !{i64 2924}
!28 = !{i64 2928}
!29 = !{i64 2936}
!30 = !{i64 2940}
!31 = !{i64 2944}
!32 = !{i64 2948}
!33 = !{i64 3004}
!34 = !{i64 3064}
!35 = !{i64 3072}
!36 = !{i64 3088}
!37 = !{i64 3092}
!38 = !{i64 3100}
!39 = !{i64 3104}
!40 = !{i64 3112}
!41 = !{i64 3116}
!42 = !{i64 3120}
!43 = !{i64 3128}
!44 = !{i64 3140}
!45 = !{i64 3152}
!46 = !{i64 3168}
!47 = !{i64 3172}
!48 = !{i64 3184}
!49 = !{i64 3188}
!50 = !{i64 3192}
!51 = !{i64 3200}
!52 = !{i64 3212}
!53 = !{i64 3216}
!54 = !{i64 3228}
!55 = !{i64 3232}
!56 = !{i64 3248}
!57 = !{i64 3236}
!58 = !{i64 3240}
!59 = !{i64 3244}
!60 = !{i64 3252}
!61 = !{i64 3264}
!62 = !{i64 3268}
!63 = !{i64 3272}
!64 = !{i64 3284}
!65 = !{i64 3260}
!66 = !{i64 3292}
!67 = !{i64 3296}
!68 = !{i64 3300}
!69 = !{i64 3304}
!70 = !{i64 3320}
!71 = !{i64 3324}
!72 = !{i64 3332}
!73 = !{i64 3336}
!74 = !{i64 3344}
!75 = !{i64 3352}
!76 = !{i64 3368}
!77 = !{i64 3372}
!78 = !{i64 3380}
!79 = !{i64 3384}
!80 = !{i64 3388}
!81 = !{i64 3396}
!82 = !{i64 3408}
!83 = !{i64 3416}
!84 = !{i64 3428}
!85 = !{i64 3404}
!86 = !{i64 3440}
!87 = !{i64 3444}
!88 = !{i64 3452}
!89 = !{i64 3456}
!90 = !{i64 3464}
!91 = !{i64 3472}
!92 = !{i64 3480}
!93 = !{i64 3492}
!94 = !{i64 3496}
!95 = !{i64 3476}
!96 = !{i64 3500}
!97 = !{i64 3504}
!98 = !{i64 3508}
!99 = !{i64 3516}
!100 = !{i64 3520}
!101 = !{i64 3524}
!102 = !{i64 3528}
!103 = !{i64 3532}
!104 = !{i64 3540}
!105 = !{i64 3544}
!106 = !{i64 3548}
!107 = !{i64 3552}
!108 = !{i64 3556}
!109 = !{i64 3560}
!110 = !{i64 3564}
!111 = !{i64 3572}
!112 = !{i64 3576}
!113 = !{i64 3580}
!114 = !{i64 3584}
!115 = !{i64 3592}
!116 = !{i64 3600}
!117 = !{i64 3628}
!118 = !{i64 3640}
!119 = !{i64 3644}
!120 = !{i64 3648}
!121 = !{i64 3660}
!122 = !{i64 3664}
!123 = !{i64 3700}
!124 = !{i64 3676}
!125 = !{i64 3680}
!126 = !{i64 3684}
!127 = !{i64 3704}
!128 = !{i64 3708}
!129 = !{i64 3712}
!130 = !{i64 3720}
!131 = !{i64 3724}
!132 = !{i64 3728}
!133 = !{i64 3732}
!134 = !{i64 3736}
!135 = !{i64 3744}
!136 = !{i64 3748}
!137 = !{i64 3752}
!138 = !{i64 3756}
!139 = !{i64 3760}
!140 = !{i64 3764}
!141 = !{i64 3768}
!142 = !{i64 3772}
!143 = !{i64 3780}
!144 = !{i64 3784}
!145 = !{i64 3788}
!146 = !{i64 3796}
!147 = !{i64 3804}
!148 = !{i64 3832}
!149 = !{i64 3844}
!150 = !{i64 3848}
!151 = !{i64 3852}
!152 = !{i64 3864}
!153 = !{i64 3868}
!154 = !{i64 3876}
!155 = !{i64 3904}
!156 = !{i64 3924}
!157 = !{i64 3944}
!158 = !{i64 3964}
!159 = !{i64 3984}
!160 = !{i64 4004}
!161 = !{i64 4008}
!162 = !{i64 4012}
!163 = !{i64 4028}
!164 = !{i64 4048}
!165 = !{i64 4056}
!166 = !{i64 4064}
!167 = !{i64 4076}
!168 = !{i64 4100}
!169 = !{i64 4112}
!170 = !{i64 4128}
!171 = !{i64 4132}
!172 = !{i64 4136}
!173 = !{i64 4124}
!174 = !{i64 4144}
!175 = !{i64 4152}
!176 = !{i64 4156}
!177 = !{i64 4160}
!178 = !{i64 4168}
!179 = !{i64 4172}
!180 = !{i64 4180}
!181 = !{i64 4184}
!182 = !{i64 4200}
!183 = !{i64 4212}
!184 = !{i64 4236}
!185 = !{i64 4240}
!186 = !{i64 4248}
!187 = !{i64 4264}
!188 = !{i64 4268}
!189 = !{i64 4272}
!190 = !{i64 4280}
!191 = !{i64 4284}
!192 = !{i64 4288}
!193 = !{i64 4300}
!194 = !{i64 4320}
!195 = !{i64 4336}
!196 = !{i64 4340}
!197 = !{i64 4364}
!198 = !{i64 4372}
!199 = !{i64 4380}
!200 = !{i64 4384}
!201 = !{i64 4388}
!202 = !{i64 4400}
!203 = !{i64 4408}
!204 = !{i64 4404}
!205 = !{i64 4424}
!206 = !{i64 4444}
!207 = !{i64 4448}
!208 = !{i64 4452}
!209 = !{i64 4468}
!210 = !{i64 4472}
!211 = !{i64 4476}
!212 = !{i64 4484}
!213 = !{i64 4464}
!214 = !{i64 4492}
!215 = !{i64 4500}
!216 = !{i64 4504}
!217 = !{i64 4508}
!218 = !{i64 4516}
!219 = !{i64 4520}
!220 = !{i64 4528}
!221 = !{i64 4532}
!222 = !{i64 4548}
!223 = !{i64 4560}
!224 = !{i64 4580}
!225 = !{i64 4584}
!226 = !{i64 4572}
!227 = !{i64 4588}
!228 = !{i64 4592}
!229 = !{i64 4608}
!230 = !{i64 4624}
!231 = !{i64 4644}
!232 = !{i64 4648}
!233 = !{i64 4652}
!234 = !{i64 4668}
!235 = !{i64 4672}
!236 = !{i64 4676}
!237 = !{i64 4684}
!238 = !{i64 4696}
!239 = !{i64 4700}
!240 = !{i64 4712}
!241 = !{i64 4728}
!242 = !{i64 4736}
!243 = !{i64 4740}
!244 = !{i64 4764}
!245 = !{i64 4776}
!246 = !{i64 4780}
!247 = !{i64 4784}
!248 = !{i64 4788}
!249 = !{i64 4792}
!250 = !{i64 4796}
!251 = !{i64 4800}
!252 = !{i64 4808}
!253 = !{i64 4824}
!254 = !{i64 4828}
!255 = !{i64 4832}
!256 = !{i64 4836}
!257 = !{i64 4844}
!258 = !{i64 4848}
!259 = !{i64 4852}
!260 = !{i64 4872}
!261 = !{i64 4884}
!262 = !{i64 4892}
!263 = !{i64 4896}
!264 = !{i64 4900}
!265 = !{i64 4932}
!266 = !{i64 4936}
!267 = !{i64 4940}
!268 = !{i64 4944}
!269 = !{i64 4956}
!270 = !{i64 4960}
!271 = !{i64 4972}
!272 = !{i64 4976}
!273 = !{i64 4992}
!274 = !{i64 5000}
!275 = !{i64 5020}
!276 = !{i64 5036}
!277 = !{i64 5044}
!278 = !{i64 5056}
!279 = !{i64 5064}
!280 = !{i64 5084}
!281 = !{i64 5096}
!282 = !{i64 5108}
!283 = !{i64 5112}
!284 = !{i64 5116}
!285 = !{i64 5136}
!286 = !{i64 5152}
!287 = !{i64 5156}
!288 = !{i64 5160}
!289 = !{i64 5148}
!290 = !{i64 5168}
!291 = !{i64 5176}
!292 = !{i64 5180}
!293 = !{i64 5188}
!294 = !{i64 5192}
!295 = !{i64 5200}
!296 = !{i64 5212}
!297 = !{i64 5232}
!298 = !{i64 5244}
!299 = !{i64 5248}
!300 = !{i64 5276}
!301 = !{i64 5284}
!302 = !{i64 5288}
!303 = !{i64 5292}
!304 = !{i64 5300}
!305 = !{i64 5312}
!306 = !{i64 5320}
!307 = !{i64 5340}
!308 = !{i64 5348}
!309 = !{i64 5352}
!310 = !{i64 5360}
!311 = !{i64 5364}
!312 = !{i64 5376}
!313 = !{i64 5392}
!314 = !{i64 5408}
!315 = !{i64 5412}
!316 = !{i64 5420}
!317 = !{i64 5424}
!318 = !{i64 5428}
!319 = !{i64 5436}
!320 = !{i64 5440}
!321 = !{i64 5444}
!322 = !{i64 5460}
!323 = !{i64 5472}
!324 = !{i64 5488}
!325 = !{i64 5500}
!326 = !{i64 5512}
!327 = !{i64 5520}
!328 = !{i64 5524}
!329 = !{i64 5536}
!330 = !{i64 5540}
!331 = !{i64 5544}
!332 = !{i64 5552}
!333 = !{i64 5556}
!334 = !{i64 5560}
!335 = !{i64 5580}
!336 = !{i64 5592}
!337 = !{i64 5596}
!338 = !{i64 5616}
!339 = !{i64 5620}
!340 = !{i64 5628}
!341 = !{i64 5632}
!342 = !{i64 5652}
!343 = !{i64 5656}
!344 = !{i64 5660}
!345 = !{i64 5676}
!346 = !{i64 5684}
!347 = !{i64 5688}
!348 = !{i64 5704}
!349 = !{i64 5708}
!350 = !{i64 5716}
!351 = !{i64 5720}
!352 = !{i64 5724}
!353 = !{i64 5744}
!354 = !{i64 5752}
!355 = !{i64 5756}
!356 = !{i64 5760}
!357 = !{i64 5764}
!358 = !{i64 5780}
!359 = !{i64 5788}
!360 = !{i64 5796}
!361 = !{i64 5804}
!362 = !{i64 5808}
!363 = !{i64 5812}
!364 = !{i64 5824}
!365 = !{i64 5828}
!366 = !{i64 5844}
!367 = !{i64 5848}
!368 = !{i64 5852}
!369 = !{i64 5860}
!370 = !{i64 5864}
!371 = !{i64 5868}
!372 = !{i64 5884}
!373 = !{i64 5888}
!374 = !{i64 5892}
!375 = !{i64 5908}
!376 = !{i64 5916}
!377 = !{i64 5920}
!378 = !{i64 5944}
!379 = !{i64 5948}
!380 = !{i64 5964}
!381 = !{i64 5980}
!382 = !{i64 5984}
!383 = !{i64 5992}
!384 = !{i64 5996}
!385 = !{i64 6008}
!386 = !{i64 6012}
!387 = !{i64 6016}
!388 = !{i64 6020}
!389 = !{i64 6024}
!390 = !{i64 6028}
!391 = !{i64 6036}
!392 = !{i64 6044}
!393 = !{i64 6052}
!394 = !{i64 6064}
!395 = !{i64 6076}
!396 = !{i64 6084}
!397 = !{i64 6092}
!398 = !{i64 6104}
!399 = !{i64 6124}
!400 = !{i64 6132}
!401 = !{i64 6140}
!402 = !{i64 6160}
!403 = !{i64 6168}
!404 = !{i64 6172}
!405 = !{i64 6188}
!406 = !{i64 6196}
!407 = !{i64 6212}
!408 = !{i64 6216}
!409 = !{i64 6220}
!410 = !{i64 6236}
!411 = !{i64 6240}
!412 = !{i64 6252}
!413 = !{i64 6300}
!414 = !{i64 6308}
!415 = !{i64 6328}
!416 = !{i64 6332}
!417 = !{i64 6340}
!418 = !{i64 6344}
!419 = !{i64 6348}
!420 = !{i64 6352}
!421 = !{i64 6360}
!422 = !{i64 6364}
!423 = !{i64 6368}
!424 = !{i64 6372}
!425 = !{i64 6376}
!426 = !{i64 6388}
!427 = !{i64 6392}
!428 = !{i64 6400}
!429 = !{i64 6404}
!430 = !{i64 6428}
!431 = !{i64 6432}
!432 = !{i64 6448}
!433 = !{i64 6452}
!434 = !{i64 6464}
!435 = !{i64 6468}
!436 = !{i64 6472}
!437 = !{i64 6488}
!438 = !{i64 6492}
!439 = !{i64 6496}
!440 = !{i64 6504}
!441 = !{i64 6520}
!442 = !{i64 6524}
!443 = !{i64 6528}
!444 = !{i64 6536}
!445 = !{i64 6548}
!446 = !{i64 6564}
!447 = !{i64 6580}
!448 = !{i64 6584}
!449 = !{i64 6596}
!450 = !{i64 6600}
!451 = !{i64 6616}
!452 = !{i64 6628}
!453 = !{i64 6632}
!454 = !{i64 6640}
!455 = !{i64 6656}
!456 = !{i64 6660}
!457 = !{i64 6664}
!458 = !{i64 6672}
!459 = !{i64 6680}
!460 = !{i64 6688}
!461 = !{i64 6692}
!462 = !{i64 6708}
!463 = !{i64 6748}
!464 = !{i64 6752}
!465 = !{i64 6768}
!466 = !{i64 6772}
!467 = !{i64 6776}
!468 = !{i64 6784}
!469 = !{i64 6808}
!470 = !{i64 6812}
!471 = !{i64 6836}
!472 = !{i64 6852}
!473 = !{i64 6856}
!474 = !{i64 6876}
!475 = !{i64 6880}
!476 = !{i64 6900}
!477 = !{i64 6924}
!478 = !{i64 6928}
!479 = !{i64 6932}
!480 = !{i64 6940}
!481 = !{i64 6944}
!482 = !{i64 6960}
!483 = !{i64 6984}
!484 = !{i64 6988}
!485 = !{i64 6992}
!486 = !{i64 7012}
!487 = !{i64 7032}
!488 = !{i64 7052}
!489 = !{i64 7072}
!490 = !{i64 7080}
!491 = !{i64 7108}
!492 = !{i64 7112}
!493 = !{i64 7132}
!494 = !{i64 7152}
!495 = !{i64 7172}
!496 = !{i64 7204}
!497 = !{i64 7216}
!498 = !{i64 7228}
!499 = !{i64 7236}
!500 = !{i64 7256}
!501 = !{i64 7260}
!502 = !{i64 7272}
!503 = !{i64 7280}
!504 = !{i64 7284}
!505 = !{i64 7296}
!506 = !{i64 7324}
!507 = !{i64 7328}
!508 = !{i64 7332}
!509 = !{i64 7344}
!510 = !{i64 7352}
!511 = !{i64 7360}
!512 = !{i64 7364}
!513 = !{i64 7368}
!514 = !{i64 7396}
!515 = !{i64 7400}
!516 = !{i64 7404}
!517 = !{i64 7416}
!518 = !{i64 7424}
!519 = !{i64 7428}
!520 = !{i64 7440}
!521 = !{i64 7448}
!522 = !{i64 7460}
!523 = !{i64 7472}
!524 = !{i64 7480}
!525 = !{i64 7488}
!526 = !{i64 7516}
!527 = !{i64 7520}
!528 = !{i64 7532}
!529 = !{i64 7540}
!530 = !{i64 7552}
!531 = !{i64 7564}
!532 = !{i64 7588}
!533 = !{i64 7596}
!534 = !{i64 7600}
!535 = !{i64 7608}
!536 = !{i64 7616}
!537 = !{i64 7620}
!538 = !{i64 7624}
!539 = !{i64 7632}
!540 = !{i64 7636}
!541 = !{i64 7644}
!542 = !{i64 7652}
!543 = !{i64 7656}
!544 = !{i64 7664}
!545 = !{i64 7684}
!546 = !{i64 7700}
!547 = !{i64 7712}
!548 = !{i64 7716}
!549 = !{i64 7744}
!550 = !{i64 7764}
!551 = !{i64 7792}
!552 = !{i64 7804}
!553 = !{i64 7824}
!554 = !{i64 7856}
!555 = !{i64 7864}
!556 = !{i64 7872}
!557 = !{i64 7876}
!558 = !{i64 7892}
!559 = !{i64 7900}
!560 = !{i64 7928}
!561 = !{i64 7948}
!562 = !{i64 7972}
!563 = !{i64 7988}
!564 = !{i64 8000}
!565 = !{i64 8008}
!566 = !{i64 8020}
!567 = !{i64 8048}
!568 = !{i64 8052}
!569 = !{i64 8060}
!570 = !{i64 8064}
!571 = !{i64 8068}
!572 = !{i64 8088}
