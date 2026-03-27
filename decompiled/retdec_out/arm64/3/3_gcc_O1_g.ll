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
@global_var_13fe8 = local_unnamed_addr global i64 7664
@global_var_14000 = global i64 0
@global_var_14028 = global i64 0
@global_var_13fc8 = local_unnamed_addr global i64 0
@global_var_13ff8 = local_unnamed_addr global i64 0
@global_var_bf4 = local_unnamed_addr constant i64 4107461394746572832
@global_var_13fe0 = local_unnamed_addr global i64 0
@global_var_1e58 = constant [28 x i8] c"MEM-L1-01 (local_vars): %d\0A\00"
@global_var_ed8 = local_unnamed_addr constant i64 -7493990521589727168
@global_var_1e78 = constant [29 x i8] c"MEM-L1-02 (local_array): %d\0A\00"
@global_var_1e98 = constant [30 x i8] c"MEM-L1-03 (local_struct): %d\0A\00"
@global_var_1eb8 = constant [34 x i8] c"MEM-L1-04 (address_of_local): %d\0A\00"
@global_var_f1c = local_unnamed_addr constant i64 -5764607517355147198
@global_var_1ee0 = constant [34 x i8] c"MEM-L1-05 (address_of_array): %d\0A\00"
@global_var_1f08 = constant [35 x i8] c"MEM-L2-01 (large_stack_frame): %d\0A\00"
@global_var_1f30 = constant [27 x i8] c"MEM-L2-02 (vla_stack): %d\0A\00"
@global_var_1f50 = constant [30 x i8] c"MEM-L2-03 (alloca_usage): %d\0A\00"
@global_var_1f70 = constant [29 x i8] c"MEM-L2-04 (stack_alias): %d\0A\00"
@global_var_1110 = local_unnamed_addr constant i64 1729382227155877939
@global_var_122c = local_unnamed_addr constant i64 1729382231450845216
@global_var_13d0 = local_unnamed_addr constant i64 1729382205681041460
@global_var_1f90 = constant [23 x i8] c"value before free: %d\0A\00"
@global_var_14bc = local_unnamed_addr constant i64 -486375621140676576
@global_var_1fc8 = constant [29 x i8] c"HEAP-L2-01 (heap_basic): %d\0A\00"
@global_var_1fe8 = constant [30 x i8] c"HEAP-L2-02 (heap_calloc): %d\0A\00"
@global_var_2000 = local_unnamed_addr constant [6 x i8] c": %d\0A\00"
@global_var_2008 = constant [31 x i8] c"HEAP-L2-03 (heap_realloc): %d\0A\00"
@global_var_2028 = constant [29 x i8] c"HEAP-L2-04 (heap_array): %d\0A\00"
@global_var_2048 = constant [30 x i8] c"HEAP-L2-05 (heap_struct): %d\0A\00"
@global_var_2068 = constant [30 x i8] c"HEAP-L2-06 (heap_nested): %d\0A\00"
@global_var_2088 = constant [35 x i8] c"HEAP-L3-01 (linked_list_heap): %d\0A\00"
@global_var_20b0 = constant [38 x i8] c"HEAP-L3-02 (tree_heap_traversal): %d\0A\00"
@global_var_20d8 = constant [30 x i8] c"HEAP-L3-03 (memory_leak): %d\0A\00"
@global_var_20f8 = constant [32 x i8] c"HEAP-L3-04 (dangling_pointer): \00"
@global_counter = local_unnamed_addr global i32 0
@global_array = constant [10 x i32] [i32 0, i32 1, i32 2, i32 3, i32 4, i32 5, i32 6, i32 7, i32 8, i32 9]
@global_var_14034 = local_unnamed_addr global i64 0
@extern_global_var = global i32 23
@global_var_13ff0 = local_unnamed_addr global i32* @extern_global_var
@0 = internal constant [3 x i8] c"@%\00"
@const_string = local_unnamed_addr global i8* getelementptr inbounds ([3 x i8], [3 x i8]* @0, i64 0, i64 0)
@file_scope_static = local_unnamed_addr global i32 100
@global_func_ptr = local_unnamed_addr global i32 (i32)* null
@global_var_14040 = local_unnamed_addr global i64 0
@global_var_21d0 = constant [35 x i8] c"STM-L1-01 (global_var_access): %d\0A\00"
@global_var_21f8 = constant [33 x i8] c"STM-L1-01 (global_var_read): %d\0A\00"
@global_var_2220 = constant [37 x i8] c"STM-L1-02 (global_array_access): %d\0A\00"
@global_var_18d8 = local_unnamed_addr constant i64 -5116081946878803917
@global_var_2248 = constant [30 x i8] c"STM-L1-03 (static_local): %d\0A\00"
@global_var_2268 = constant [34 x i8] c"STM-L1-04 (call_static_func): %d\0A\00"
@global_var_2290 = constant [38 x i8] c"STM-L2-01 (access_extern_global): %d\0A\00"
@global_var_22b8 = constant [34 x i8] c"STM-L2-02 (call_extern_func): %d\0A\00"
@global_var_22e0 = constant [33 x i8] c"STM-L2-03 (read_const_data): %d\0A\00"
@global_var_2308 = constant [32 x i8] c"STM-L2-04 (access_bss_var): %d\0A\00"
@global_var_2328 = constant [35 x i8] c"STM-L2-04 (access_bss_buffer): %d\0A\00"
@global_var_2350 = constant [38 x i8] c"STM-L2-05 (global_struct_access): %d\0A\00"
@global_var_2378 = constant [29 x i8] c"STM-L2-06 (file_static): %d\0A\00"
@global_var_2398 = constant [33 x i8] c"STM-L2-07 (global_func_ptr): %d\0A\00"
@global_var_23c0 = constant [35 x i8] c"STM-L2-08 (global_heap_store): %d\0A\00"
@global_var_23e8 = constant [37 x i8] c"STM-L2-09 (static_complex_init): %d\0A\00"
@global_var_2410 = constant [28 x i8] c"STM-L3-01 (tls_access): %d\0A\00"
@global_var_2430 = constant [33 x i8] c"STM-L3-02 (init_order_test): %d\0A\00"
@global_var_2578 = local_unnamed_addr constant i64 85899345930
@global_var_2580 = local_unnamed_addr constant i64 171798691870
@global_var_2588 = local_unnamed_addr constant i64 180388626482
@global_var_2480 = constant [17 x i8] c"MEMOP-L2-01: %d\0A\00"
@global_var_2498 = constant [17 x i8] c"MEMOP-L2-02: %d\0A\00"
@global_var_2540 = local_unnamed_addr constant [11 x i8] c"HelloWorld\00"
@global_var_2547 = local_unnamed_addr constant [4 x i8] c"rld\00"
@global_var_24b0 = constant [17 x i8] c"MEMOP-L2-03: %c\0A\00"
@global_var_1cec = local_unnamed_addr constant i64 -5116040852631715789
@global_var_24c8 = constant [17 x i8] c"MEMOP-L2-04: %d\0A\00"
@global_var_24e0 = constant [17 x i8] c"MEMOP-L2-05: %d\0A\00"
@global_var_24f8 = constant [17 x i8] c"MEMOP-L2-06: %d\0A\00"
@global_var_2510 = constant [19 x i8] c"MEMOP-L3-01: 0x%x\0A\00"
@global_var_2528 = constant [17 x i8] c"MEMOP-L3-02: %d\0A\00"
@1 = external global i32
@global_var_800 = global i1 false
@global_var_3e7 = global i32 0
@2 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\88\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_1e38 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @2, i64 0, i64 0)
@global_var_44c = global i1 false
@3 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\A0\86\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_1fa8 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @3, i64 0, i64 0)
@4 = internal constant [65 x i8] c"\E2\9C\97 \E5\AD\90\E8\BF\9B\E7\A8\8B\E8\A2\AB\E4\BF\A1\E5\8F\B7\E7\BB\88\E6\AD\A2 (\E4\BF\A1\E5\8F\B7%d) - \E9\87\8E\E6\8C\87\E9\92\88\E5\AF\BC\E8\87\B4\E5\B4\A9\E6\BA\83\0A\00"
@global_var_2150 = constant i8* getelementptr inbounds ([65 x i8], [65 x i8]* @4, i64 0, i64 0)
@5 = internal constant [16 x i8] c"%d (\E5\AD\90\E8\BF\9B\E7\A8\8B)\0A\00"
@global_var_2118 = constant i8* getelementptr inbounds ([16 x i8], [16 x i8]* @5, i64 0, i64 0)
@6 = internal constant [37 x i8] c"\E2\9C\93 \E5\AD\90\E8\BF\9B\E7\A8\8B\E6\AD\A3\E5\B8\B8\E9\80\80\E5\87\BA\EF\BC\8Ccode=%d\0A\00"
@global_var_2128 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @6, i64 0, i64 0)
@7 = internal constant [11 x i8] c"fork\E5\A4\B1\E8\B4\A5\00"
@global_var_2198 = constant i8* getelementptr inbounds ([11 x i8], [11 x i8]* @7, i64 0, i64 0)
@global_var_14035 = global i32 0
@global_var_1401c = local_unnamed_addr global i32 0
@8 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\9D\99\E6\80\81\E4\B8\8E\E5\85\A8\E5\B1\80\E5\86\85\E5\AD\98 ===\00"
@global_var_21a8 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @8, i64 0, i64 0)
@9 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C\E5\87\BD\E6\95\B0 ===\00"
@global_var_2458 = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @9, i64 0, i64 0)

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

define i64 @_start(i64 %arg1) local_unnamed_addr {
dec_label_pc_b00:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_8 = alloca i64, align 8
  %2 = load i64, i64* @global_var_13fe8, align 8, !insn.addr !21
  %3 = trunc i64 %arg1 to i32, !insn.addr !22
  %4 = bitcast i64* %stack_var_8 to i8**, !insn.addr !22
  %5 = inttoptr i64 %1 to void ()*, !insn.addr !22
  %6 = call i32 @__libc_start_main(i64 %2, i32 %3, i8** nonnull %4, void ()* null, void ()* null, void ()* %5), !insn.addr !22
  call void @abort(), !insn.addr !23
  ret i64 ptrtoint (i32* @1 to i64), !insn.addr !23
}

define i64 @call_weak_fn() local_unnamed_addr {
dec_label_pc_b34:
  %0 = load i64, i64* inttoptr (i64 81880 to i64*), align 8, !insn.addr !24
  %1 = icmp eq i64 %0, 0, !insn.addr !25
  br i1 %1, label %dec_label_pc_b44, label %dec_label_pc_b40, !insn.addr !25

dec_label_pc_b40:                                 ; preds = %dec_label_pc_b34
  call void @__gmon_start__(), !insn.addr !26
  ret i64 ptrtoint (i32* @1 to i64), !insn.addr !26

dec_label_pc_b44:                                 ; preds = %dec_label_pc_b34
  ret i64 0, !insn.addr !27
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_b50:
  ret i64 ptrtoint (i64* @global_var_14028 to i64), !insn.addr !28
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_b80:
  ret i64 ptrtoint (i64* @global_var_14028 to i64), !insn.addr !29
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_bc0:
  %x0.0.reg2mem = alloca i64, !insn.addr !30
  %0 = load i8, i8* bitcast (i64* @global_var_14028 to i8*), align 8, !insn.addr !31
  %1 = zext i8 %0 to i64, !insn.addr !31
  %2 = icmp eq i8 %0, 0, !insn.addr !32
  store i64 %1, i64* %x0.0.reg2mem, !insn.addr !32
  br i1 %2, label %dec_label_pc_bd8, label %dec_label_pc_bfc, !insn.addr !32

dec_label_pc_bd8:                                 ; preds = %dec_label_pc_bc0
  %3 = load i64, i64* inttoptr (i64 81872 to i64*), align 16, !insn.addr !33
  %4 = icmp eq i64 %3, 0, !insn.addr !34
  br i1 %4, label %dec_label_pc_bf0, label %dec_label_pc_be4, !insn.addr !34

dec_label_pc_be4:                                 ; preds = %dec_label_pc_bd8
  %5 = load i64, i64* inttoptr (i64 add (i64 ptrtoint (i64* @global_var_14000 to i64), i64 8) to i64*), align 8, !insn.addr !35
  %6 = inttoptr i64 %5 to i64*, !insn.addr !36
  call void @__cxa_finalize(i64* %6), !insn.addr !36
  br label %dec_label_pc_bf0, !insn.addr !36

dec_label_pc_bf0:                                 ; preds = %dec_label_pc_be4, %dec_label_pc_bd8
  %7 = call i64 @deregister_tm_clones(), !insn.addr !37
  store i8 1, i8* bitcast (i64* @global_var_14028 to i8*), align 8, !insn.addr !38
  store i64 1, i64* %x0.0.reg2mem, !insn.addr !38
  br label %dec_label_pc_bfc, !insn.addr !38

dec_label_pc_bfc:                                 ; preds = %dec_label_pc_bc0, %dec_label_pc_bf0
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !39

; uselistorder directives
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_bfc, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_c10:
  %0 = call i64 @register_tm_clones(), !insn.addr !40
  ret i64 %0, !insn.addr !40
}

define i32 @double_value(i32 %x) local_unnamed_addr {
dec_label_pc_c14:
  %0 = mul i32 %x, 2, !insn.addr !41
  ret i32 %0, !insn.addr !42
}

define i64 @local_vars() local_unnamed_addr {
dec_label_pc_c1c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !43
  %3 = add i64 %2, 10, !insn.addr !44
  %4 = and i64 %3, 4294967294, !insn.addr !44
  ret i64 %4, !insn.addr !45
}

define i32 @local_array(i32 %n) local_unnamed_addr {
dec_label_pc_c28:
  %0 = alloca i32
  %x2.0.reg2mem = alloca i64, !insn.addr !46
  %x1.0.reg2mem = alloca i64, !insn.addr !46
  %1 = zext i32 %n to i64
  %2 = load i32, i32* %0
  %stack_var_-40 = alloca i64, align 8
  %stack_var_0 = alloca i64, align 8
  %3 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !47
  %4 = inttoptr i64 %3 to i64*, !insn.addr !48
  %5 = load i64, i64* %4, align 8, !insn.addr !48
  store i64 %5, i64* %stack_var_0, align 8, !insn.addr !49
  %6 = ptrtoint i64* %stack_var_-40 to i64, !insn.addr !50
  %7 = ptrtoint i64* %stack_var_0 to i64, !insn.addr !51
  store i64 0, i64* %x1.0.reg2mem, !insn.addr !52
  store i64 %6, i64* %x2.0.reg2mem, !insn.addr !52
  br label %dec_label_pc_c50, !insn.addr !52

dec_label_pc_c50:                                 ; preds = %dec_label_pc_c50, %dec_label_pc_c28
  %x2.0.reload = load i64, i64* %x2.0.reg2mem
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %8 = trunc i64 %x1.0.reload to i32, !insn.addr !53
  %9 = inttoptr i64 %x2.0.reload to i32*, !insn.addr !53
  store i32 %8, i32* %9, align 4, !insn.addr !53
  %10 = add i64 %x2.0.reload, 4, !insn.addr !53
  %11 = add nuw nsw i64 %x1.0.reload, %1, !insn.addr !54
  %12 = and i64 %11, 4294967295, !insn.addr !54
  %13 = icmp eq i64 %10, %7, !insn.addr !55
  store i64 %12, i64* %x1.0.reg2mem, !insn.addr !55
  store i64 %10, i64* %x2.0.reg2mem, !insn.addr !55
  br i1 %13, label %dec_label_pc_c60, label %dec_label_pc_c50, !insn.addr !55

dec_label_pc_c60:                                 ; preds = %dec_label_pc_c50
  %14 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !56
  %15 = load i64, i64* %stack_var_0, align 8, !insn.addr !57
  %16 = inttoptr i64 %14 to i64*, !insn.addr !58
  %17 = load i64, i64* %16, align 8, !insn.addr !58
  %18 = icmp eq i64 %15, %17, !insn.addr !59
  br i1 %18, label %dec_label_pc_c80, label %dec_label_pc_c88, !insn.addr !59

dec_label_pc_c80:                                 ; preds = %dec_label_pc_c60
  ret i32 %2, !insn.addr !60

dec_label_pc_c88:                                 ; preds = %dec_label_pc_c60
  call void @__stack_chk_fail(), !insn.addr !61
  ret i32 ptrtoint (i32* @1 to i32), !insn.addr !61

; uselistorder directives
  uselistorder i64 %x1.0.reload, { 1, 0 }
  uselistorder i64* %x1.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x2.0.reg2mem, { 1, 0, 2 }
}

define i64 @local_struct() local_unnamed_addr {
dec_label_pc_c8c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 3, !insn.addr !62
  %3 = and i64 %2, 4294967295, !insn.addr !62
  ret i64 %3, !insn.addr !63
}

define i64 @address_of_local() local_unnamed_addr {
dec_label_pc_c94:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i32*, !insn.addr !64
  store i32 42, i32* %2, align 4, !insn.addr !64
  ret i64 42, !insn.addr !65
}

define i64 @address_of_array() local_unnamed_addr {
dec_label_pc_ca4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !66
  %3 = and i64 %2, 4294967294, !insn.addr !66
  ret i64 %3, !insn.addr !67
}

define i32 @large_stack_frame() local_unnamed_addr {
dec_label_pc_cb0:
  %0 = alloca i32
  %x1.0.reg2mem = alloca i64, !insn.addr !68
  %x0.0.reg2mem = alloca i64, !insn.addr !68
  %1 = load i32, i32* %0
  %large_buf_-2056 = alloca [2048 x i8], align 1
  %2 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !69
  %3 = inttoptr i64 %2 to i64*, !insn.addr !70
  %4 = load i64, i64* %3, align 8, !insn.addr !70
  %5 = ptrtoint [2048 x i8]* %large_buf_-2056 to i64, !insn.addr !71
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !72
  store i64 %5, i64* %x1.0.reg2mem, !insn.addr !72
  br label %dec_label_pc_cd8, !insn.addr !72

dec_label_pc_cd8:                                 ; preds = %dec_label_pc_cd8, %dec_label_pc_cb0
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %6 = trunc i64 %x0.0.reload to i8, !insn.addr !73
  %7 = inttoptr i64 %x1.0.reload to i8*, !insn.addr !73
  store i8 %6, i8* %7, align 1, !insn.addr !73
  %8 = add i64 %x1.0.reload, 1, !insn.addr !73
  %9 = add nuw nsw i64 %x0.0.reload, 1, !insn.addr !74
  %10 = and i64 %9, 4294967295, !insn.addr !74
  %11 = trunc i64 %9 to i32, !insn.addr !75
  %12 = icmp eq i32 %11, ptrtoint (i1* @global_var_800 to i32), !insn.addr !75
  store i64 %10, i64* %x0.0.reg2mem, !insn.addr !75
  store i64 %8, i64* %x1.0.reg2mem, !insn.addr !75
  br i1 %12, label %dec_label_pc_ce8, label %dec_label_pc_cd8, !insn.addr !75

dec_label_pc_ce8:                                 ; preds = %dec_label_pc_cd8
  %13 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !76
  %14 = inttoptr i64 %13 to i64*, !insn.addr !77
  %15 = load i64, i64* %14, align 8, !insn.addr !77
  %16 = icmp eq i64 %4, %15, !insn.addr !78
  br i1 %16, label %dec_label_pc_d08, label %dec_label_pc_d14, !insn.addr !78

dec_label_pc_d08:                                 ; preds = %dec_label_pc_ce8
  %17 = urem i32 %1, 256, !insn.addr !79
  ret i32 %17, !insn.addr !80

dec_label_pc_d14:                                 ; preds = %dec_label_pc_ce8
  call void @__stack_chk_fail(), !insn.addr !81
  ret i32 ptrtoint (i32* @1 to i32), !insn.addr !81

; uselistorder directives
  uselistorder i64 %x0.0.reload, { 1, 0 }
  uselistorder i64* %x0.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x1.0.reg2mem, { 1, 0, 2 }
}

define i32 @vla_stack(i32 %n) local_unnamed_addr {
dec_label_pc_d18:
  %storemerge3.reg2mem = alloca i32, !insn.addr !82
  %x1.0.reg2mem = alloca i64, !insn.addr !82
  %spsel.1.0.lcssa.reg2mem = alloca i64, !insn.addr !82
  %spsel.1.01.reg2mem = alloca i64, !insn.addr !82
  %stack_var_-40 = alloca i64, align 8
  %0 = add i32 %n, -1, !insn.addr !83
  %1 = icmp ult i32 %0, ptrtoint (i32* @global_var_3e7 to i32), !insn.addr !84
  %2 = icmp ne i1 %1, true, !insn.addr !84
  %3 = icmp eq i32 %0, ptrtoint (i32* @global_var_3e7 to i32), !insn.addr !84
  %4 = icmp ne i1 %3, true, !insn.addr !85
  %5 = icmp eq i1 %2, %4, !insn.addr !85
  store i32 -1, i32* %storemerge3.reg2mem, !insn.addr !85
  br i1 %5, label %dec_label_pc_dc8, label %dec_label_pc_d44, !insn.addr !85

dec_label_pc_d44:                                 ; preds = %dec_label_pc_d18
  %6 = sext i32 %n to i64
  %7 = ptrtoint i64* %stack_var_-40 to i64, !insn.addr !86
  %8 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !87
  %9 = inttoptr i64 %8 to i64*
  %10 = load i64, i64* %9, align 8, !insn.addr !88
  %11 = zext i32 %0 to i64, !insn.addr !83
  %12 = call i64 @__asm_sbfiz(i64 %11, i64 %6, i64 2, i64 32), !insn.addr !89
  %13 = add i64 %12, 15, !insn.addr !90
  %14 = and i64 %13, -65536, !insn.addr !91
  %15 = sub i64 %7, %14, !insn.addr !92
  %16 = icmp eq i64 %14, 0, !insn.addr !93
  store i64 %7, i64* %spsel.1.01.reg2mem, !insn.addr !94
  store i64 %7, i64* %spsel.1.0.lcssa.reg2mem, !insn.addr !94
  br i1 %16, label %dec_label_pc_d6c, label %dec_label_pc_d60, !insn.addr !94

dec_label_pc_d60:                                 ; preds = %dec_label_pc_d44, %dec_label_pc_d60
  %spsel.1.01.reload = load i64, i64* %spsel.1.01.reg2mem
  %17 = add i64 %spsel.1.01.reload, -65536, !insn.addr !95
  %18 = add i64 %spsel.1.01.reload, -64512, !insn.addr !96
  %19 = inttoptr i64 %18 to i64*, !insn.addr !96
  store i64 0, i64* %19, align 8, !insn.addr !96
  %20 = icmp eq i64 %17, %15, !insn.addr !93
  store i64 %17, i64* %spsel.1.01.reg2mem, !insn.addr !94
  store i64 %15, i64* %spsel.1.0.lcssa.reg2mem, !insn.addr !94
  br i1 %20, label %dec_label_pc_d6c, label %dec_label_pc_d60, !insn.addr !94

dec_label_pc_d6c:                                 ; preds = %dec_label_pc_d60, %dec_label_pc_d44
  %spsel.1.0.lcssa.reload = load i64, i64* %spsel.1.0.lcssa.reg2mem
  %21 = and i64 %13, 65520, !insn.addr !97
  %22 = sub i64 %spsel.1.0.lcssa.reload, %21, !insn.addr !98
  %23 = inttoptr i64 %22 to i64*, !insn.addr !99
  store i64 0, i64* %23, align 8, !insn.addr !99
  %24 = icmp ult i64 %21, 1024, !insn.addr !100
  br i1 %24, label %dec_label_pc_d84, label %dec_label_pc_d80, !insn.addr !101

dec_label_pc_d80:                                 ; preds = %dec_label_pc_d6c
  %25 = add i64 %22, 1024, !insn.addr !102
  %26 = inttoptr i64 %25 to i64*, !insn.addr !102
  store i64 0, i64* %26, align 8, !insn.addr !102
  br label %dec_label_pc_d84, !insn.addr !102

dec_label_pc_d84:                                 ; preds = %dec_label_pc_d6c, %dec_label_pc_d80
  %27 = add i64 %22, 16, !insn.addr !103
  store i64 0, i64* %x1.0.reg2mem, !insn.addr !104
  br label %dec_label_pc_d8c, !insn.addr !104

dec_label_pc_d8c:                                 ; preds = %dec_label_pc_d8c, %dec_label_pc_d84
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %28 = trunc i64 %x1.0.reload to i32, !insn.addr !105
  %29 = mul i32 %28, 2, !insn.addr !105
  %30 = mul i64 %x1.0.reload, 4, !insn.addr !106
  %31 = add i64 %30, %27, !insn.addr !106
  %32 = inttoptr i64 %31 to i32*, !insn.addr !106
  store i32 %29, i32* %32, align 4, !insn.addr !106
  %33 = add nuw nsw i64 %x1.0.reload, 1, !insn.addr !107
  %34 = icmp slt i64 %33, %6, !insn.addr !108
  store i64 %33, i64* %x1.0.reg2mem, !insn.addr !108
  br i1 %34, label %dec_label_pc_d8c, label %dec_label_pc_dac, !insn.addr !108

dec_label_pc_dac:                                 ; preds = %dec_label_pc_d8c
  %35 = icmp slt i32 %n, 0
  %36 = zext i1 %35 to i32, !insn.addr !109
  %37 = add i32 %36, %n, !insn.addr !109
  %38 = udiv i32 %37, 2
  %39 = mul i32 %38, 4, !insn.addr !110
  %40 = zext i32 %39 to i64, !insn.addr !110
  %41 = add i64 %27, %40, !insn.addr !110
  %42 = inttoptr i64 %41 to i32*, !insn.addr !110
  %43 = load i32, i32* %42, align 4, !insn.addr !110
  %.pre = load i64, i64* @global_var_13fe0, align 8
  %.phi.trans.insert = inttoptr i64 %.pre to i64*
  %.pre2 = load i64, i64* %.phi.trans.insert, align 8
  %44 = icmp eq i64 %10, %.pre2, !insn.addr !111
  store i32 %43, i32* %storemerge3.reg2mem, !insn.addr !111
  br i1 %44, label %dec_label_pc_dc8, label %dec_label_pc_ddc, !insn.addr !111

dec_label_pc_dc8:                                 ; preds = %dec_label_pc_d18, %dec_label_pc_dac
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  ret i32 %storemerge3.reload, !insn.addr !112

dec_label_pc_ddc:                                 ; preds = %dec_label_pc_dac
  call void @__stack_chk_fail(), !insn.addr !113
  ret i32 ptrtoint (i32* @1 to i32), !insn.addr !113

; uselistorder directives
  uselistorder i64 %x1.0.reload, { 1, 2, 0 }
  uselistorder i64 %22, { 1, 0, 2 }
  uselistorder i64 %21, { 1, 0 }
  uselistorder i32 %0, { 2, 0, 1 }
  uselistorder i64* %spsel.1.01.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x1.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge3.reg2mem, { 0, 2, 1 }
  uselistorder i32 %n, { 1, 0, 3, 2 }
  uselistorder label %dec_label_pc_dc8, { 1, 0 }
  uselistorder label %dec_label_pc_d84, { 1, 0 }
  uselistorder label %dec_label_pc_d60, { 1, 0 }
}

define i32 @alloca_usage(i32 %n) local_unnamed_addr {
dec_label_pc_de0:
  %storemerge3.reg2mem = alloca i32, !insn.addr !114
  %x2.0.reg2mem = alloca i64, !insn.addr !114
  %x1.0.reg2mem = alloca i64, !insn.addr !114
  %spsel.1.0.lcssa.reg2mem = alloca i64, !insn.addr !114
  %spsel.1.01.reg2mem = alloca i64, !insn.addr !114
  %stack_var_-40 = alloca i64, align 8
  %0 = icmp slt i32 %n, 1, !insn.addr !115
  store i32 -1, i32* %storemerge3.reg2mem, !insn.addr !115
  br i1 %0, label %dec_label_pc_e90, label %dec_label_pc_e08, !insn.addr !115

dec_label_pc_e08:                                 ; preds = %dec_label_pc_de0
  %1 = sext i32 %n to i64
  %2 = ptrtoint i64* %stack_var_-40 to i64, !insn.addr !116
  %3 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !117
  %4 = inttoptr i64 %3 to i64*
  %5 = load i64, i64* %4, align 8, !insn.addr !118
  %6 = call i64 @__asm_sbfiz(i64 %3, i64 %1, i64 2, i64 32), !insn.addr !119
  %7 = add i64 %6, 15, !insn.addr !120
  %8 = and i64 %7, -65536, !insn.addr !121
  %9 = sub i64 %2, %8, !insn.addr !122
  %10 = icmp eq i64 %8, 0, !insn.addr !123
  store i64 %2, i64* %spsel.1.01.reg2mem, !insn.addr !124
  store i64 %2, i64* %spsel.1.0.lcssa.reg2mem, !insn.addr !124
  br i1 %10, label %dec_label_pc_e30, label %dec_label_pc_e24, !insn.addr !124

dec_label_pc_e24:                                 ; preds = %dec_label_pc_e08, %dec_label_pc_e24
  %spsel.1.01.reload = load i64, i64* %spsel.1.01.reg2mem
  %11 = add i64 %spsel.1.01.reload, -65536, !insn.addr !125
  %12 = add i64 %spsel.1.01.reload, -64512, !insn.addr !126
  %13 = inttoptr i64 %12 to i64*, !insn.addr !126
  store i64 0, i64* %13, align 8, !insn.addr !126
  %14 = icmp eq i64 %11, %9, !insn.addr !123
  store i64 %11, i64* %spsel.1.01.reg2mem, !insn.addr !124
  store i64 %9, i64* %spsel.1.0.lcssa.reg2mem, !insn.addr !124
  br i1 %14, label %dec_label_pc_e30, label %dec_label_pc_e24, !insn.addr !124

dec_label_pc_e30:                                 ; preds = %dec_label_pc_e24, %dec_label_pc_e08
  %spsel.1.0.lcssa.reload = load i64, i64* %spsel.1.0.lcssa.reg2mem
  %15 = and i64 %7, 65520, !insn.addr !127
  %16 = sub i64 %spsel.1.0.lcssa.reload, %15, !insn.addr !128
  %17 = inttoptr i64 %16 to i64*, !insn.addr !129
  store i64 0, i64* %17, align 8, !insn.addr !129
  %18 = icmp ult i64 %15, 1024, !insn.addr !130
  br i1 %18, label %dec_label_pc_e48, label %dec_label_pc_e44, !insn.addr !131

dec_label_pc_e44:                                 ; preds = %dec_label_pc_e30
  %19 = add i64 %16, 1024, !insn.addr !132
  %20 = inttoptr i64 %19 to i64*, !insn.addr !132
  store i64 0, i64* %20, align 8, !insn.addr !132
  br label %dec_label_pc_e48, !insn.addr !132

dec_label_pc_e48:                                 ; preds = %dec_label_pc_e30, %dec_label_pc_e44
  %21 = add i64 %16, 16, !insn.addr !133
  %22 = mul nsw i64 %1, 3, !insn.addr !134
  %23 = and i64 %22, 4294967295, !insn.addr !134
  store i64 0, i64* %x1.0.reg2mem, !insn.addr !135
  store i64 %21, i64* %x2.0.reg2mem, !insn.addr !135
  br label %dec_label_pc_e58, !insn.addr !135

dec_label_pc_e58:                                 ; preds = %dec_label_pc_e58, %dec_label_pc_e48
  %x2.0.reload = load i64, i64* %x2.0.reg2mem
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %24 = trunc i64 %x1.0.reload to i32, !insn.addr !136
  %25 = inttoptr i64 %x2.0.reload to i32*, !insn.addr !136
  store i32 %24, i32* %25, align 4, !insn.addr !136
  %26 = add i64 %x2.0.reload, 4, !insn.addr !136
  %27 = add nuw nsw i64 %x1.0.reload, 3, !insn.addr !137
  %28 = and i64 %27, 4294967295, !insn.addr !137
  %29 = icmp eq i64 %28, %23, !insn.addr !138
  store i64 %28, i64* %x1.0.reg2mem, !insn.addr !138
  store i64 %26, i64* %x2.0.reg2mem, !insn.addr !138
  br i1 %29, label %dec_label_pc_e74, label %dec_label_pc_e58, !insn.addr !138

dec_label_pc_e74:                                 ; preds = %dec_label_pc_e58
  %30 = icmp slt i32 %n, 0
  %31 = zext i1 %30 to i32, !insn.addr !139
  %32 = add i32 %31, %n, !insn.addr !139
  %33 = udiv i32 %32, 2
  %34 = mul i32 %33, 4, !insn.addr !140
  %35 = zext i32 %34 to i64, !insn.addr !140
  %36 = add i64 %21, %35, !insn.addr !140
  %37 = inttoptr i64 %36 to i32*, !insn.addr !140
  %38 = load i32, i32* %37, align 4, !insn.addr !140
  %.pre = load i64, i64* @global_var_13fe0, align 8
  %.phi.trans.insert = inttoptr i64 %.pre to i64*
  %.pre2 = load i64, i64* %.phi.trans.insert, align 8
  %39 = icmp eq i64 %5, %.pre2, !insn.addr !141
  store i32 %38, i32* %storemerge3.reg2mem, !insn.addr !141
  br i1 %39, label %dec_label_pc_e90, label %dec_label_pc_ea4, !insn.addr !141

dec_label_pc_e90:                                 ; preds = %dec_label_pc_de0, %dec_label_pc_e74
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  ret i32 %storemerge3.reload, !insn.addr !142

dec_label_pc_ea4:                                 ; preds = %dec_label_pc_e74
  call void @__stack_chk_fail(), !insn.addr !143
  ret i32 ptrtoint (i32* @1 to i32), !insn.addr !143

; uselistorder directives
  uselistorder i64 %x1.0.reload, { 1, 0 }
  uselistorder i64 %21, { 1, 0 }
  uselistorder i64 %16, { 1, 0, 2 }
  uselistorder i64 %15, { 1, 0 }
  uselistorder i64* %spsel.1.01.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x1.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x2.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge3.reg2mem, { 0, 2, 1 }
  uselistorder i64 -65536, { 0, 2, 1, 3 }
  uselistorder i32 %n, { 1, 0, 3, 2 }
  uselistorder label %dec_label_pc_e90, { 1, 0 }
  uselistorder label %dec_label_pc_e48, { 1, 0 }
  uselistorder label %dec_label_pc_e24, { 1, 0 }
}

define i64 @stack_alias() local_unnamed_addr {
dec_label_pc_ea8:
  ret i64 20, !insn.addr !144
}

define void @test_stack_memory() local_unnamed_addr {
dec_label_pc_eb0:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_1e38 to i8*)), !insn.addr !145
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_1e58, i64 0, i64 0), i64 20), !insn.addr !146
  %2 = call i32 @local_array(i32 2), !insn.addr !147
  %3 = zext i32 %2 to i64, !insn.addr !148
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_1e78, i64 0, i64 0), i64 %3), !insn.addr !149
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_1e98, i64 0, i64 0), i64 15), !insn.addr !150
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_1eb8, i64 0, i64 0), i64 42), !insn.addr !151
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_1ee0, i64 0, i64 0), i64 2), !insn.addr !152
  %8 = call i32 @large_stack_frame(), !insn.addr !153
  %9 = zext i32 %8 to i64, !insn.addr !154
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_1f08, i64 0, i64 0), i64 %9), !insn.addr !155
  %11 = call i32 @vla_stack(i32 10), !insn.addr !156
  %12 = zext i32 %11 to i64, !insn.addr !157
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_1f30, i64 0, i64 0), i64 %12), !insn.addr !158
  %14 = call i32 @alloca_usage(i32 10), !insn.addr !159
  %15 = zext i32 %14 to i64, !insn.addr !160
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_1f50, i64 0, i64 0), i64 %15), !insn.addr !161
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_1f70, i64 0, i64 0), i64 20), !insn.addr !162
  ret void, !insn.addr !163
}

define i32 @heap_basic(i32 %n) local_unnamed_addr {
dec_label_pc_f9c:
  %x19.0.reg2mem = alloca i32, !insn.addr !164
  %x1.0.reg2mem = alloca i64, !insn.addr !164
  %0 = sext i32 %n to i64
  %1 = call i64 @__asm_sbfiz(i64 %0, i64 %0, i64 2, i64 32), !insn.addr !165
  %2 = trunc i64 %1 to i32, !insn.addr !166
  %3 = call i64* @malloc(i32 %2), !insn.addr !166
  %4 = icmp eq i64* %3, null, !insn.addr !167
  store i32 -1, i32* %x19.0.reg2mem, !insn.addr !167
  br i1 %4, label %dec_label_pc_fe8, label %dec_label_pc_fb8, !insn.addr !167

dec_label_pc_fb8:                                 ; preds = %dec_label_pc_f9c
  %5 = zext i32 %n to i64, !insn.addr !168
  %6 = ptrtoint i64* %3 to i64, !insn.addr !166
  %7 = icmp slt i32 %n, 1, !insn.addr !169
  store i64 0, i64* %x1.0.reg2mem, !insn.addr !169
  br i1 %7, label %dec_label_pc_fd8, label %dec_label_pc_fc4, !insn.addr !169

dec_label_pc_fc4:                                 ; preds = %dec_label_pc_fb8, %dec_label_pc_fc4
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %8 = trunc i64 %x1.0.reload to i32, !insn.addr !170
  %9 = mul i32 %8, 2, !insn.addr !170
  %10 = mul i64 %x1.0.reload, 4, !insn.addr !171
  %11 = add i64 %10, %6, !insn.addr !171
  %12 = inttoptr i64 %11 to i32*, !insn.addr !171
  store i32 %9, i32* %12, align 4, !insn.addr !171
  %13 = add nuw nsw i64 %x1.0.reload, 1, !insn.addr !172
  %14 = icmp ult i64 %13, %5, !insn.addr !173
  store i64 %13, i64* %x1.0.reg2mem, !insn.addr !173
  br i1 %14, label %dec_label_pc_fc4, label %dec_label_pc_fd8, !insn.addr !173

dec_label_pc_fd8:                                 ; preds = %dec_label_pc_fc4, %dec_label_pc_fb8
  %15 = icmp slt i32 %n, 0
  %16 = zext i1 %15 to i32, !insn.addr !174
  %17 = add i32 %16, %n, !insn.addr !174
  %18 = udiv i32 %17, 2
  %19 = mul i32 %18, 4, !insn.addr !175
  %20 = zext i32 %19 to i64, !insn.addr !175
  %21 = add i64 %6, %20, !insn.addr !175
  %22 = inttoptr i64 %21 to i32*, !insn.addr !175
  %23 = load i32, i32* %22, align 4, !insn.addr !175
  call void @free(i64* nonnull %3), !insn.addr !176
  store i32 %23, i32* %x19.0.reg2mem, !insn.addr !176
  br label %dec_label_pc_fe8, !insn.addr !176

dec_label_pc_fe8:                                 ; preds = %dec_label_pc_f9c, %dec_label_pc_fd8
  %x19.0.reload = load i32, i32* %x19.0.reg2mem
  ret i32 %x19.0.reload, !insn.addr !177

; uselistorder directives
  uselistorder i64 %x1.0.reload, { 1, 2, 0 }
  uselistorder i64* %3, { 0, 2, 1 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64* %x1.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %x19.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 %n, { 1, 0, 2, 3, 4 }
  uselistorder label %dec_label_pc_fe8, { 1, 0 }
  uselistorder label %dec_label_pc_fc4, { 1, 0 }
}

define i32 @heap_calloc(i32 %n) local_unnamed_addr {
dec_label_pc_1000:
  %x19.2.reg2mem = alloca i32, !insn.addr !178
  %x19.1.reg2mem = alloca i32, !insn.addr !178
  %x19.0.reg2mem = alloca i32, !insn.addr !178
  %x1.0.reg2mem = alloca i64, !insn.addr !178
  %0 = call i64* @calloc(i32 %n, i32 4), !insn.addr !179
  %1 = icmp eq i64* %0, null, !insn.addr !180
  store i32 -1, i32* %x19.2.reg2mem, !insn.addr !180
  br i1 %1, label %dec_label_pc_1048, label %dec_label_pc_1020, !insn.addr !180

dec_label_pc_1020:                                ; preds = %dec_label_pc_1000
  %2 = zext i32 %n to i64, !insn.addr !181
  %3 = ptrtoint i64* %0 to i64, !insn.addr !179
  %4 = icmp slt i32 %n, 1, !insn.addr !182
  store i64 0, i64* %x1.0.reg2mem, !insn.addr !182
  store i32 0, i32* %x19.0.reg2mem, !insn.addr !182
  store i32 0, i32* %x19.1.reg2mem, !insn.addr !182
  br i1 %4, label %dec_label_pc_1044, label %dec_label_pc_1030, !insn.addr !182

dec_label_pc_1030:                                ; preds = %dec_label_pc_1020, %dec_label_pc_1030
  %x19.0.reload = load i32, i32* %x19.0.reg2mem
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %5 = mul i64 %x1.0.reload, 4, !insn.addr !183
  %6 = add i64 %5, %3, !insn.addr !183
  %7 = inttoptr i64 %6 to i32*, !insn.addr !183
  %8 = load i32, i32* %7, align 4, !insn.addr !183
  %9 = add i32 %8, %x19.0.reload, !insn.addr !184
  %10 = add nuw nsw i64 %x1.0.reload, 1, !insn.addr !185
  %11 = icmp ult i64 %10, %2, !insn.addr !186
  store i64 %10, i64* %x1.0.reg2mem, !insn.addr !186
  store i32 %9, i32* %x19.0.reg2mem, !insn.addr !186
  store i32 %9, i32* %x19.1.reg2mem, !insn.addr !186
  br i1 %11, label %dec_label_pc_1030, label %dec_label_pc_1044, !insn.addr !186

dec_label_pc_1044:                                ; preds = %dec_label_pc_1030, %dec_label_pc_1020
  %x19.1.reload = load i32, i32* %x19.1.reg2mem
  call void @free(i64* nonnull %0), !insn.addr !187
  store i32 %x19.1.reload, i32* %x19.2.reg2mem, !insn.addr !187
  br label %dec_label_pc_1048, !insn.addr !187

dec_label_pc_1048:                                ; preds = %dec_label_pc_1000, %dec_label_pc_1044
  %x19.2.reload = load i32, i32* %x19.2.reg2mem
  ret i32 %x19.2.reload, !insn.addr !188

; uselistorder directives
  uselistorder i64* %0, { 0, 2, 1 }
  uselistorder i64* %x1.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %x19.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %x19.2.reg2mem, { 0, 2, 1 }
  uselistorder i32 %n, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1048, { 1, 0 }
  uselistorder label %dec_label_pc_1030, { 1, 0 }
}

define i32 @heap_realloc() local_unnamed_addr {
dec_label_pc_1068:
  %x19.1.reg2mem = alloca i32, !insn.addr !189
  %x19.0.reg2mem = alloca i32, !insn.addr !189
  %0 = call i64* @malloc(i32 20), !insn.addr !190
  %1 = icmp eq i64* %0, null, !insn.addr !191
  store i32 -1, i32* %x19.1.reg2mem, !insn.addr !191
  br i1 %1, label %dec_label_pc_10f8, label %dec_label_pc_1080, !insn.addr !191

dec_label_pc_1080:                                ; preds = %dec_label_pc_1068
  %2 = ptrtoint i64* %0 to i64, !insn.addr !190
  %3 = bitcast i64* %0 to i32*, !insn.addr !192
  store i32 1, i32* %3, align 4, !insn.addr !192
  %4 = add i64 %2, 4, !insn.addr !193
  %5 = inttoptr i64 %4 to i32*, !insn.addr !193
  store i32 2, i32* %5, align 4, !insn.addr !193
  %6 = add i64 %2, 8, !insn.addr !194
  %7 = inttoptr i64 %6 to i32*, !insn.addr !194
  store i32 3, i32* %7, align 4, !insn.addr !194
  %8 = add i64 %2, 12, !insn.addr !195
  %9 = inttoptr i64 %8 to i32*, !insn.addr !195
  store i32 4, i32* %9, align 4, !insn.addr !195
  %10 = add i64 %2, 16, !insn.addr !196
  %11 = inttoptr i64 %10 to i32*, !insn.addr !196
  store i32 5, i32* %11, align 4, !insn.addr !196
  %12 = call i64* @realloc(i64* nonnull %0, i32 40), !insn.addr !197
  %13 = icmp eq i64* %12, null, !insn.addr !198
  br i1 %13, label %dec_label_pc_1108, label %dec_label_pc_10bc, !insn.addr !198

dec_label_pc_10bc:                                ; preds = %dec_label_pc_1080
  %14 = ptrtoint i64* %12 to i64, !insn.addr !197
  %15 = add i64 %14, 20, !insn.addr !199
  %16 = inttoptr i64 %15 to i32*, !insn.addr !199
  store i32 50, i32* %16, align 4, !insn.addr !199
  %17 = add i64 %14, 24, !insn.addr !200
  %18 = inttoptr i64 %17 to i32*, !insn.addr !200
  store i32 60, i32* %18, align 4, !insn.addr !200
  %19 = add i64 %14, 28, !insn.addr !201
  %20 = inttoptr i64 %19 to i32*, !insn.addr !201
  store i32 70, i32* %20, align 4, !insn.addr !201
  %21 = add i64 %14, 32, !insn.addr !202
  %22 = inttoptr i64 %21 to i32*, !insn.addr !202
  store i32 80, i32* %22, align 4, !insn.addr !202
  %23 = add i64 %14, 36, !insn.addr !203
  %24 = inttoptr i64 %23 to i32*, !insn.addr !203
  store i32 90, i32* %24, align 4, !insn.addr !203
  %25 = add i64 %14, 8, !insn.addr !204
  %26 = inttoptr i64 %25 to i32*, !insn.addr !204
  %27 = load i32, i32* %26, align 4, !insn.addr !204
  %28 = icmp eq i32 %27, 3, !insn.addr !205
  store i32 -3, i32* %x19.0.reg2mem, !insn.addr !206
  br i1 %28, label %dec_label_pc_1118, label %dec_label_pc_10f4, !insn.addr !206

dec_label_pc_10f4:                                ; preds = %dec_label_pc_1118, %dec_label_pc_10bc
  %x19.0.reload = load i32, i32* %x19.0.reg2mem
  call void @free(i64* nonnull %12), !insn.addr !207
  store i32 %x19.0.reload, i32* %x19.1.reg2mem, !insn.addr !207
  br label %dec_label_pc_10f8, !insn.addr !207

dec_label_pc_10f8:                                ; preds = %dec_label_pc_1068, %dec_label_pc_1108, %dec_label_pc_10f4
  %x19.1.reload = load i32, i32* %x19.1.reg2mem
  ret i32 %x19.1.reload, !insn.addr !208

dec_label_pc_1108:                                ; preds = %dec_label_pc_1080
  call void @free(i64* nonnull %0), !insn.addr !209
  store i32 -2, i32* %x19.1.reg2mem, !insn.addr !210
  br label %dec_label_pc_10f8, !insn.addr !210

dec_label_pc_1118:                                ; preds = %dec_label_pc_10bc
  %29 = load i32, i32* %16, align 4, !insn.addr !211
  store i32 %29, i32* %x19.0.reg2mem, !insn.addr !212
  br label %dec_label_pc_10f4, !insn.addr !212

; uselistorder directives
  uselistorder i64* %12, { 0, 2, 1 }
  uselistorder i64 %2, { 3, 0, 1, 2 }
  uselistorder i64* %0, { 0, 2, 1, 4, 3 }
  uselistorder i32* %x19.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %x19.1.reg2mem, { 3, 0, 2, 1 }
  uselistorder label %dec_label_pc_10f8, { 1, 2, 0 }
}

define i32 @heap_array(i32 %n) local_unnamed_addr {
dec_label_pc_1128:
  %x19.0.reg2mem = alloca i32, !insn.addr !213
  %x2.0.reg2mem = alloca i64, !insn.addr !213
  %x1.0.reg2mem = alloca i64, !insn.addr !213
  %0 = sext i32 %n to i64
  %1 = call i64 @__asm_sbfiz(i64 %0, i64 %0, i64 2, i64 32), !insn.addr !214
  %2 = trunc i64 %1 to i32, !insn.addr !215
  %3 = call i64* @malloc(i32 %2), !insn.addr !215
  %4 = icmp eq i64* %3, null, !insn.addr !216
  store i32 -1, i32* %x19.0.reg2mem, !insn.addr !216
  br i1 %4, label %dec_label_pc_1178, label %dec_label_pc_1144, !insn.addr !216

dec_label_pc_1144:                                ; preds = %dec_label_pc_1128
  %5 = ptrtoint i64* %3 to i64, !insn.addr !215
  %6 = icmp slt i32 %n, 1, !insn.addr !217
  br i1 %6, label %dec_label_pc_1168, label %dec_label_pc_114c, !insn.addr !217

dec_label_pc_114c:                                ; preds = %dec_label_pc_1144
  %7 = mul i32 %n, 3
  store i64 0, i64* %x1.0.reg2mem, !insn.addr !218
  store i64 %5, i64* %x2.0.reg2mem, !insn.addr !218
  br label %dec_label_pc_1158, !insn.addr !218

dec_label_pc_1158:                                ; preds = %dec_label_pc_1158, %dec_label_pc_114c
  %x2.0.reload = load i64, i64* %x2.0.reg2mem
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %8 = trunc i64 %x1.0.reload to i32, !insn.addr !219
  %9 = inttoptr i64 %x2.0.reload to i32*, !insn.addr !219
  store i32 %8, i32* %9, align 4, !insn.addr !219
  %10 = add i64 %x2.0.reload, 4, !insn.addr !219
  %11 = add nuw nsw i64 %x1.0.reload, 3, !insn.addr !220
  %12 = and i64 %11, 4294967295, !insn.addr !220
  %13 = trunc i64 %11 to i32
  %14 = icmp eq i32 %7, %13, !insn.addr !221
  store i64 %12, i64* %x1.0.reg2mem, !insn.addr !221
  store i64 %10, i64* %x2.0.reg2mem, !insn.addr !221
  br i1 %14, label %dec_label_pc_1168, label %dec_label_pc_1158, !insn.addr !221

dec_label_pc_1168:                                ; preds = %dec_label_pc_1158, %dec_label_pc_1144
  %15 = icmp slt i32 %n, 0
  %16 = zext i1 %15 to i32, !insn.addr !222
  %17 = add i32 %16, %n, !insn.addr !222
  %18 = udiv i32 %17, 2
  %19 = mul i32 %18, 4, !insn.addr !223
  %20 = zext i32 %19 to i64, !insn.addr !223
  %21 = add i64 %5, %20, !insn.addr !223
  %22 = inttoptr i64 %21 to i32*, !insn.addr !223
  %23 = load i32, i32* %22, align 4, !insn.addr !223
  call void @free(i64* nonnull %3), !insn.addr !224
  store i32 %23, i32* %x19.0.reg2mem, !insn.addr !224
  br label %dec_label_pc_1178, !insn.addr !224

dec_label_pc_1178:                                ; preds = %dec_label_pc_1128, %dec_label_pc_1168
  %x19.0.reload = load i32, i32* %x19.0.reg2mem
  ret i32 %x19.0.reload, !insn.addr !225

; uselistorder directives
  uselistorder i64 %x1.0.reload, { 1, 0 }
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64* %3, { 0, 2, 1 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64* %x1.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x2.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %x19.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 %n, { 1, 0, 2, 3, 4 }
  uselistorder label %dec_label_pc_1178, { 1, 0 }
}

define i32 @heap_struct(i32 %x) local_unnamed_addr {
dec_label_pc_1190:
  %x19.0.reg2mem = alloca i32, !insn.addr !226
  %0 = call i64* @malloc(i32 8), !insn.addr !227
  %1 = icmp eq i64* %0, null, !insn.addr !228
  store i32 -1, i32* %x19.0.reg2mem, !insn.addr !228
  br i1 %1, label %dec_label_pc_11b4, label %dec_label_pc_11ac, !insn.addr !228

dec_label_pc_11ac:                                ; preds = %dec_label_pc_1190
  %2 = mul i32 %x, 3
  call void @free(i64* nonnull %0), !insn.addr !229
  store i32 %2, i32* %x19.0.reg2mem, !insn.addr !229
  br label %dec_label_pc_11b4, !insn.addr !229

dec_label_pc_11b4:                                ; preds = %dec_label_pc_1190, %dec_label_pc_11ac
  %x19.0.reload = load i32, i32* %x19.0.reg2mem
  ret i32 %x19.0.reload, !insn.addr !230

; uselistorder directives
  uselistorder i32* %x19.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_11b4, { 1, 0 }
}

define i32 @heap_nested(i32** %head) local_unnamed_addr {
dec_label_pc_11cc:
  %x0.0.reg2mem = alloca i32, !insn.addr !231
  %0 = call i64* @malloc(i32 16), !insn.addr !232
  %1 = ptrtoint i64* %0 to i64, !insn.addr !232
  %2 = bitcast i32** %head to i64*, !insn.addr !233
  store i64 %1, i64* %2, align 8, !insn.addr !233
  %3 = icmp eq i64* %0, null, !insn.addr !234
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !234
  br i1 %3, label %dec_label_pc_1218, label %dec_label_pc_11ec, !insn.addr !234

dec_label_pc_11ec:                                ; preds = %dec_label_pc_11cc
  %4 = bitcast i64* %0 to i32*, !insn.addr !235
  store i32 10, i32* %4, align 4, !insn.addr !235
  %5 = call i64* @malloc(i32 16), !insn.addr !236
  %6 = ptrtoint i64* %5 to i64, !insn.addr !236
  %7 = add i64 %1, 8, !insn.addr !237
  %8 = inttoptr i64 %7 to i64*, !insn.addr !237
  store i64 %6, i64* %8, align 8, !insn.addr !237
  %9 = icmp eq i64* %5, null, !insn.addr !238
  br i1 %9, label %dec_label_pc_1224, label %dec_label_pc_1208, !insn.addr !238

dec_label_pc_1208:                                ; preds = %dec_label_pc_11ec
  %10 = bitcast i64* %5 to i32*, !insn.addr !239
  store i32 20, i32* %10, align 4, !insn.addr !239
  %11 = add i64 %6, 8, !insn.addr !240
  %12 = inttoptr i64 %11 to i64*, !insn.addr !240
  store i64 0, i64* %12, align 8, !insn.addr !240
  store i32 0, i32* %x0.0.reg2mem, !insn.addr !241
  br label %dec_label_pc_1218, !insn.addr !241

dec_label_pc_1218:                                ; preds = %dec_label_pc_11cc, %dec_label_pc_1224, %dec_label_pc_1208
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !242

dec_label_pc_1224:                                ; preds = %dec_label_pc_11ec
  call void @free(i64* nonnull %0), !insn.addr !243
  store i32 -2, i32* %x0.0.reg2mem, !insn.addr !244
  br label %dec_label_pc_1218, !insn.addr !244

; uselistorder directives
  uselistorder i32* %x0.0.reg2mem, { 3, 0, 2, 1 }
  uselistorder label %dec_label_pc_1218, { 1, 2, 0 }
}

define i32 @linked_list_heap() local_unnamed_addr {
dec_label_pc_123c:
  %x20.2.reg2mem = alloca i32, !insn.addr !245
  %x19.3.reg2mem = alloca i64, !insn.addr !245
  %x20.1.reg2mem = alloca i32, !insn.addr !245
  %x0.1.reg2mem = alloca i64, !insn.addr !245
  %x20.0.reg2mem = alloca i64, !insn.addr !245
  %x19.2.reg2mem = alloca i64, !insn.addr !245
  %x0.0.reg2mem = alloca i64, !insn.addr !245
  %x19.1.reg2mem = alloca i64, !insn.addr !245
  %x19.0.reg2mem = alloca i64, !insn.addr !245
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !246
  store i64 0, i64* %x19.2.reg2mem, !insn.addr !246
  store i64 0, i64* %x20.0.reg2mem, !insn.addr !246
  br label %dec_label_pc_128c, !insn.addr !246

dec_label_pc_1260:                                ; preds = %dec_label_pc_128c
  %0 = icmp eq i64 %x19.2.reload, 0, !insn.addr !247
  store i64 %x19.2.reload, i64* %x19.0.reg2mem, !insn.addr !247
  store i32 -1, i32* %x20.2.reg2mem, !insn.addr !247
  br i1 %0, label %dec_label_pc_12dc, label %dec_label_pc_1264, !insn.addr !247

dec_label_pc_1264:                                ; preds = %dec_label_pc_1260, %dec_label_pc_1264
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  %1 = add i64 %x19.0.reload, 8, !insn.addr !248
  %2 = inttoptr i64 %1 to i64*, !insn.addr !248
  %3 = load i64, i64* %2, align 8, !insn.addr !248
  %4 = inttoptr i64 %x19.0.reload to i64*, !insn.addr !249
  call void @free(i64* %4), !insn.addr !249
  %5 = icmp eq i64 %3, 0, !insn.addr !250
  store i64 %3, i64* %x19.0.reg2mem, !insn.addr !250
  store i32 -1, i32* %x20.2.reg2mem, !insn.addr !250
  br i1 %5, label %dec_label_pc_12dc, label %dec_label_pc_1264, !insn.addr !250

dec_label_pc_1280:                                ; preds = %dec_label_pc_129c, %dec_label_pc_12a8
  %x19.1.reload = load i64, i64* %x19.1.reg2mem
  %6 = add nuw nsw i64 %x20.0.reload, 10, !insn.addr !251
  %7 = and i64 %6, 4294967295, !insn.addr !251
  %8 = trunc i64 %6 to i32, !insn.addr !252
  %9 = icmp eq i32 %8, 50, !insn.addr !252
  store i64 %12, i64* %x0.0.reg2mem, !insn.addr !253
  store i64 %x19.1.reload, i64* %x19.2.reg2mem, !insn.addr !253
  store i64 %7, i64* %x20.0.reg2mem, !insn.addr !253
  br i1 %9, label %dec_label_pc_12b0, label %dec_label_pc_128c, !insn.addr !253

dec_label_pc_128c:                                ; preds = %dec_label_pc_1280, %dec_label_pc_123c
  %x19.2.reload = load i64, i64* %x19.2.reg2mem
  %10 = call i64* @malloc(i32 16), !insn.addr !254
  %11 = icmp eq i64* %10, null, !insn.addr !255
  br i1 %11, label %dec_label_pc_1260, label %dec_label_pc_129c, !insn.addr !255

dec_label_pc_129c:                                ; preds = %dec_label_pc_128c
  %x20.0.reload = load i64, i64* %x20.0.reg2mem
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %12 = ptrtoint i64* %10 to i64, !insn.addr !254
  %13 = trunc i64 %x20.0.reload to i32, !insn.addr !256
  %14 = bitcast i64* %10 to i32*, !insn.addr !256
  store i32 %13, i32* %14, align 4, !insn.addr !256
  %15 = add i64 %12, 8, !insn.addr !257
  %16 = inttoptr i64 %15 to i64*, !insn.addr !257
  store i64 0, i64* %16, align 8, !insn.addr !257
  %17 = icmp eq i64 %x19.2.reload, 0, !insn.addr !258
  store i64 %12, i64* %x19.1.reg2mem, !insn.addr !258
  br i1 %17, label %dec_label_pc_1280, label %dec_label_pc_12a8, !insn.addr !258

dec_label_pc_12a8:                                ; preds = %dec_label_pc_129c
  %18 = add i64 %x0.0.reload, 8, !insn.addr !259
  %19 = inttoptr i64 %18 to i64*, !insn.addr !259
  store i64 %12, i64* %19, align 8, !insn.addr !259
  store i64 %x19.2.reload, i64* %x19.1.reg2mem, !insn.addr !260
  br label %dec_label_pc_1280, !insn.addr !260

dec_label_pc_12b0:                                ; preds = %dec_label_pc_1280
  %20 = icmp eq i64 %x19.1.reload, 0, !insn.addr !261
  store i64 %x19.1.reload, i64* %x0.1.reg2mem, !insn.addr !261
  store i32 0, i32* %x20.1.reg2mem, !insn.addr !261
  store i32 0, i32* %x20.2.reg2mem, !insn.addr !261
  br i1 %20, label %dec_label_pc_12dc, label %dec_label_pc_12bc, !insn.addr !261

dec_label_pc_12bc:                                ; preds = %dec_label_pc_12b0, %dec_label_pc_12bc
  %x20.1.reload = load i32, i32* %x20.1.reg2mem
  %x0.1.reload = load i64, i64* %x0.1.reg2mem
  %21 = inttoptr i64 %x0.1.reload to i32*, !insn.addr !262
  %22 = load i32, i32* %21, align 4, !insn.addr !262
  %23 = add i32 %22, %x20.1.reload, !insn.addr !263
  %24 = add i64 %x0.1.reload, 8, !insn.addr !264
  %25 = inttoptr i64 %24 to i64*, !insn.addr !264
  %26 = load i64, i64* %25, align 8, !insn.addr !264
  %27 = icmp eq i64 %26, 0, !insn.addr !265
  store i64 %26, i64* %x0.1.reg2mem, !insn.addr !265
  store i32 %23, i32* %x20.1.reg2mem, !insn.addr !265
  store i64 %x19.1.reload, i64* %x19.3.reg2mem, !insn.addr !265
  br i1 %27, label %dec_label_pc_12cc, label %dec_label_pc_12bc, !insn.addr !265

dec_label_pc_12cc:                                ; preds = %dec_label_pc_12bc, %dec_label_pc_12cc
  %x19.3.reload = load i64, i64* %x19.3.reg2mem
  %28 = add i64 %x19.3.reload, 8, !insn.addr !266
  %29 = inttoptr i64 %28 to i64*, !insn.addr !266
  %30 = load i64, i64* %29, align 8, !insn.addr !266
  %31 = inttoptr i64 %x19.3.reload to i64*, !insn.addr !267
  call void @free(i64* %31), !insn.addr !267
  %32 = icmp eq i64 %30, 0, !insn.addr !268
  store i64 %30, i64* %x19.3.reg2mem, !insn.addr !268
  store i32 %23, i32* %x20.2.reg2mem, !insn.addr !268
  br i1 %32, label %dec_label_pc_12dc, label %dec_label_pc_12cc, !insn.addr !268

dec_label_pc_12dc:                                ; preds = %dec_label_pc_12cc, %dec_label_pc_1264, %dec_label_pc_12b0, %dec_label_pc_1260
  %x20.2.reload = load i32, i32* %x20.2.reg2mem
  ret i32 %x20.2.reload, !insn.addr !269

; uselistorder directives
  uselistorder i64 %x19.3.reload, { 1, 0 }
  uselistorder i64 %x0.1.reload, { 1, 0 }
  uselistorder i64 %12, { 2, 1, 3, 0 }
  uselistorder i64* %10, { 0, 2, 1 }
  uselistorder i64 %x19.2.reload, { 3, 0, 1, 2 }
  uselistorder i64 %x19.1.reload, { 0, 1, 3, 2 }
  uselistorder i64 %x19.0.reload, { 1, 0 }
  uselistorder i64* %x19.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x19.1.reg2mem, { 2, 1, 0 }
  uselistorder i64* %x0.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %x20.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x19.3.reg2mem, { 2, 0, 1 }
  uselistorder i32* %x20.2.reg2mem, { 0, 1, 3, 2, 4 }
  uselistorder label %dec_label_pc_12dc, { 0, 2, 1, 3 }
  uselistorder label %dec_label_pc_12cc, { 1, 0 }
  uselistorder label %dec_label_pc_12bc, { 1, 0 }
  uselistorder label %dec_label_pc_1280, { 1, 0 }
  uselistorder label %dec_label_pc_1264, { 1, 0 }
}

define i32* @create_tree_node(i32 %data) local_unnamed_addr {
dec_label_pc_1300:
  %0 = call i64* @malloc(i32 24), !insn.addr !270
  %1 = icmp eq i64* %0, null, !insn.addr !271
  %.pre = bitcast i64* %0 to i32*
  br i1 %1, label %dec_label_pc_1328, label %dec_label_pc_131c, !insn.addr !271

dec_label_pc_131c:                                ; preds = %dec_label_pc_1300
  %2 = ptrtoint i64* %0 to i64, !insn.addr !270
  store i32 %data, i32* %.pre, align 4, !insn.addr !272
  %3 = add i64 %2, 8, !insn.addr !273
  %4 = inttoptr i64 %3 to i64*, !insn.addr !273
  store i64 0, i64* %4, align 8, !insn.addr !273
  %5 = add i64 %2, 16, !insn.addr !274
  %6 = inttoptr i64 %5 to i64*, !insn.addr !274
  store i64 0, i64* %6, align 8, !insn.addr !274
  br label %dec_label_pc_1328, !insn.addr !274

dec_label_pc_1328:                                ; preds = %dec_label_pc_1300, %dec_label_pc_131c
  ret i32* %.pre, !insn.addr !275

; uselistorder directives
  uselistorder i64* %0, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1328, { 1, 0 }
}

define i32 @tree_heap_traversal() local_unnamed_addr {
dec_label_pc_1334:
  %.reg2mem = alloca i64, !insn.addr !276
  %x20.0.reg2mem = alloca i32, !insn.addr !276
  %0 = call i32* @create_tree_node(i32 10), !insn.addr !277
  %1 = icmp eq i32* %0, null, !insn.addr !278
  store i32 -1, i32* %x20.0.reg2mem, !insn.addr !278
  br i1 %1, label %dec_label_pc_13a4, label %dec_label_pc_134c, !insn.addr !278

dec_label_pc_134c:                                ; preds = %dec_label_pc_1334
  %2 = ptrtoint i32* %0 to i64, !insn.addr !277
  %3 = call i32* @create_tree_node(i32 20), !insn.addr !279
  %4 = ptrtoint i32* %3 to i64, !insn.addr !279
  %5 = add i64 %2, 8, !insn.addr !280
  %6 = inttoptr i64 %5 to i64*, !insn.addr !280
  store i64 %4, i64* %6, align 8, !insn.addr !280
  %7 = call i32* @create_tree_node(i32 30), !insn.addr !281
  %8 = ptrtoint i32* %7 to i64, !insn.addr !281
  %9 = add i64 %2, 16, !insn.addr !282
  %10 = inttoptr i64 %9 to i64*, !insn.addr !282
  store i64 %8, i64* %10, align 8, !insn.addr !282
  %11 = load i64, i64* %6, align 8, !insn.addr !283
  %12 = icmp eq i32* %7, null, !insn.addr !284
  %13 = icmp eq i64 %11, 0
  %storemerge = or i1 %12, %13
  br i1 %storemerge, label %dec_label_pc_13b4, label %dec_label_pc_137c, !insn.addr !285

dec_label_pc_137c:                                ; preds = %dec_label_pc_134c
  %14 = load i32, i32* %0, align 4, !insn.addr !286
  %15 = inttoptr i64 %11 to i32*, !insn.addr !287
  %16 = load i32, i32* %15, align 4, !insn.addr !287
  %17 = add i32 %16, %14, !insn.addr !288
  %18 = load i32, i32* %7, align 4, !insn.addr !289
  %19 = add i32 %17, %18, !insn.addr !290
  %20 = inttoptr i64 %11 to i64*, !insn.addr !291
  call void @free(i64* %20), !insn.addr !291
  %21 = load i64, i64* %10, align 8, !insn.addr !292
  %22 = inttoptr i64 %21 to i64*, !insn.addr !293
  call void @free(i64* %22), !insn.addr !293
  %23 = bitcast i32* %0 to i64*, !insn.addr !294
  call void @free(i64* %23), !insn.addr !294
  store i32 %19, i32* %x20.0.reg2mem, !insn.addr !294
  br label %dec_label_pc_13a4, !insn.addr !294

dec_label_pc_13a4:                                ; preds = %dec_label_pc_1334, %dec_label_pc_13c8, %dec_label_pc_137c
  %x20.0.reload = load i32, i32* %x20.0.reg2mem
  ret i32 %x20.0.reload, !insn.addr !295

dec_label_pc_13b4:                                ; preds = %dec_label_pc_134c
  store i64 %8, i64* %.reg2mem, !insn.addr !296
  br i1 %13, label %dec_label_pc_13bc, label %dec_label_pc_13b8, !insn.addr !296

dec_label_pc_13b8:                                ; preds = %dec_label_pc_13b4
  %24 = inttoptr i64 %11 to i64*, !insn.addr !297
  call void @free(i64* %24), !insn.addr !297
  %.pre = load i64, i64* %10, align 8
  store i64 %.pre, i64* %.reg2mem, !insn.addr !297
  br label %dec_label_pc_13bc, !insn.addr !297

dec_label_pc_13bc:                                ; preds = %dec_label_pc_13b8, %dec_label_pc_13b4
  %.reload = load i64, i64* %.reg2mem, !insn.addr !298
  %25 = icmp eq i64 %.reload, 0, !insn.addr !299
  br i1 %25, label %dec_label_pc_13c8, label %dec_label_pc_13c4, !insn.addr !299

dec_label_pc_13c4:                                ; preds = %dec_label_pc_13bc
  %26 = inttoptr i64 %.reload to i64*, !insn.addr !300
  call void @free(i64* %26), !insn.addr !300
  br label %dec_label_pc_13c8, !insn.addr !300

dec_label_pc_13c8:                                ; preds = %dec_label_pc_13c4, %dec_label_pc_13bc
  %27 = bitcast i32* %0 to i64*, !insn.addr !301
  call void @free(i64* %27), !insn.addr !301
  store i32 -2, i32* %x20.0.reg2mem, !insn.addr !302
  br label %dec_label_pc_13a4, !insn.addr !302

; uselistorder directives
  uselistorder i1 %13, { 1, 0 }
  uselistorder i64 %11, { 2, 0, 1, 3 }
  uselistorder i32* %0, { 0, 1, 2, 4, 3 }
  uselistorder i32* %x20.0.reg2mem, { 3, 0, 2, 1 }
  uselistorder i64* %.reg2mem, { 0, 2, 1 }
  uselistorder i32* (i32)* @create_tree_node, { 2, 1, 0 }
  uselistorder label %dec_label_pc_13a4, { 1, 2, 0 }
}

define i32 @memory_leak(i32 %n) local_unnamed_addr {
dec_label_pc_13e0:
  %storemerge.reg2mem = alloca i32, !insn.addr !303
  %x1.0.reg2mem = alloca i64, !insn.addr !303
  %0 = sext i32 %n to i64
  %1 = call i64 @__asm_sbfiz(i64 %0, i64 %0, i64 2, i64 32), !insn.addr !304
  %2 = trunc i64 %1 to i32, !insn.addr !305
  %3 = call i64* @malloc(i32 %2), !insn.addr !305
  %4 = icmp eq i64* %3, null, !insn.addr !306
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !306
  br i1 %4, label %dec_label_pc_1424, label %dec_label_pc_13fc, !insn.addr !306

dec_label_pc_13fc:                                ; preds = %dec_label_pc_13e0
  %5 = zext i32 %n to i64, !insn.addr !307
  %6 = ptrtoint i64* %3 to i64, !insn.addr !305
  %7 = icmp slt i32 %n, 1, !insn.addr !308
  store i64 0, i64* %x1.0.reg2mem, !insn.addr !308
  br i1 %7, label %dec_label_pc_1418, label %dec_label_pc_1408, !insn.addr !308

dec_label_pc_1408:                                ; preds = %dec_label_pc_13fc, %dec_label_pc_1408
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %8 = trunc i64 %x1.0.reload to i32, !insn.addr !309
  %9 = mul i64 %x1.0.reload, 4, !insn.addr !309
  %10 = add i64 %9, %6, !insn.addr !309
  %11 = inttoptr i64 %10 to i32*, !insn.addr !309
  store i32 %8, i32* %11, align 4, !insn.addr !309
  %12 = add nuw nsw i64 %x1.0.reload, 1, !insn.addr !310
  %13 = icmp ult i64 %12, %5, !insn.addr !311
  store i64 %12, i64* %x1.0.reg2mem, !insn.addr !311
  br i1 %13, label %dec_label_pc_1408, label %dec_label_pc_1418, !insn.addr !311

dec_label_pc_1418:                                ; preds = %dec_label_pc_1408, %dec_label_pc_13fc
  %14 = icmp slt i32 %n, 0
  %15 = zext i1 %14 to i32, !insn.addr !312
  %16 = add i32 %15, %n, !insn.addr !312
  %17 = udiv i32 %16, 2
  %18 = mul i32 %17, 4, !insn.addr !313
  %19 = zext i32 %18 to i64, !insn.addr !313
  %20 = add i64 %6, %19, !insn.addr !313
  %21 = inttoptr i64 %20 to i32*, !insn.addr !313
  %22 = load i32, i32* %21, align 4, !insn.addr !313
  store i32 %22, i32* %storemerge.reg2mem, !insn.addr !313
  br label %dec_label_pc_1424, !insn.addr !313

dec_label_pc_1424:                                ; preds = %dec_label_pc_13e0, %dec_label_pc_1418
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !314

; uselistorder directives
  uselistorder i64 %x1.0.reload, { 1, 2, 0 }
  uselistorder i64* %3, { 1, 0 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64* %x1.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %n, { 1, 0, 2, 3, 4 }
  uselistorder label %dec_label_pc_1424, { 1, 0 }
  uselistorder label %dec_label_pc_1408, { 1, 0 }
}

define i32 @dangling_pointer() local_unnamed_addr {
dec_label_pc_1438:
  %storemerge.reg2mem = alloca i32, !insn.addr !315
  %0 = call i64* @malloc(i32 4), !insn.addr !316
  %1 = icmp eq i64* %0, null, !insn.addr !317
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !317
  br i1 %1, label %dec_label_pc_1478, label %dec_label_pc_144c, !insn.addr !317

dec_label_pc_144c:                                ; preds = %dec_label_pc_1438
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_1f90, i64 0, i64 0), i64 42), !insn.addr !318
  call void @free(i64* nonnull %0), !insn.addr !319
  %3 = bitcast i64* %0 to i32*, !insn.addr !320
  %4 = load i32, i32* %3, align 4, !insn.addr !320
  store i32 %4, i32* %storemerge.reg2mem, !insn.addr !321
  br label %dec_label_pc_1478, !insn.addr !321

dec_label_pc_1478:                                ; preds = %dec_label_pc_1438, %dec_label_pc_144c
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !322

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 42, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1478, { 1, 0 }
}

define i32 @double_free(i32* %p) local_unnamed_addr {
dec_label_pc_1488:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i32, !insn.addr !323
  %1 = load i64, i64* %0
  %2 = icmp eq i32* %p, null, !insn.addr !323
  br i1 %2, label %dec_label_pc_1494, label %dec_label_pc_148c, !insn.addr !323

dec_label_pc_148c:                                ; preds = %dec_label_pc_1488
  %3 = trunc i64 %1 to i32
  ret i32 %3, !insn.addr !324

dec_label_pc_1494:                                ; preds = %dec_label_pc_1488
  %4 = call i64* @malloc(i32 4), !insn.addr !325
  %5 = icmp eq i64* %4, null, !insn.addr !326
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !326
  br i1 %5, label %dec_label_pc_14c0, label %dec_label_pc_14b0, !insn.addr !326

dec_label_pc_14b0:                                ; preds = %dec_label_pc_1494
  call void @free(i64* nonnull %4), !insn.addr !327
  call void @free(i64* nonnull %4), !insn.addr !328
  store i32 -2, i32* %storemerge.reg2mem, !insn.addr !329
  br label %dec_label_pc_14c0, !insn.addr !329

dec_label_pc_14c0:                                ; preds = %dec_label_pc_1494, %dec_label_pc_14b0
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !330

; uselistorder directives
  uselistorder i64* %4, { 1, 0, 2 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 4, { 5, 6, 0, 1, 7, 8, 2, 3, 4 }
  uselistorder label %dec_label_pc_14c0, { 1, 0 }
}

define i32 @heap_overflow() local_unnamed_addr {
dec_label_pc_14d4:
  %x19.0.reg2mem = alloca i32, !insn.addr !331
  %x2.0.reg2mem = alloca i64, !insn.addr !331
  %x1.0.reg2mem = alloca i64, !insn.addr !331
  %0 = call i64* @malloc(i32 40), !insn.addr !332
  %1 = icmp eq i64* %0, null, !insn.addr !333
  store i32 -1, i32* %x19.0.reg2mem, !insn.addr !333
  br i1 %1, label %dec_label_pc_150c, label %dec_label_pc_14ec, !insn.addr !333

dec_label_pc_14ec:                                ; preds = %dec_label_pc_14d4
  %2 = ptrtoint i64* %0 to i64, !insn.addr !332
  store i64 0, i64* %x1.0.reg2mem, !insn.addr !334
  store i64 %2, i64* %x2.0.reg2mem, !insn.addr !334
  br label %dec_label_pc_14f4, !insn.addr !334

dec_label_pc_14f4:                                ; preds = %dec_label_pc_14f4, %dec_label_pc_14ec
  %x2.0.reload = load i64, i64* %x2.0.reg2mem
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %3 = trunc i64 %x1.0.reload to i32, !insn.addr !335
  %4 = inttoptr i64 %x2.0.reload to i32*, !insn.addr !335
  store i32 %3, i32* %4, align 4, !insn.addr !335
  %5 = add i64 %x2.0.reload, 4, !insn.addr !335
  %6 = add nuw nsw i64 %x1.0.reload, 100, !insn.addr !336
  %7 = and i64 %6, 4294967295, !insn.addr !336
  %8 = trunc i64 %6 to i32, !insn.addr !337
  %9 = icmp eq i32 %8, ptrtoint (i1* @global_var_44c to i32), !insn.addr !337
  store i64 %7, i64* %x1.0.reg2mem, !insn.addr !337
  store i64 %5, i64* %x2.0.reg2mem, !insn.addr !337
  br i1 %9, label %dec_label_pc_1504, label %dec_label_pc_14f4, !insn.addr !337

dec_label_pc_1504:                                ; preds = %dec_label_pc_14f4
  %10 = bitcast i64* %0 to i32*, !insn.addr !338
  %11 = load i32, i32* %10, align 4, !insn.addr !338
  call void @free(i64* nonnull %0), !insn.addr !339
  store i32 %11, i32* %x19.0.reg2mem, !insn.addr !339
  br label %dec_label_pc_150c, !insn.addr !339

dec_label_pc_150c:                                ; preds = %dec_label_pc_14d4, %dec_label_pc_1504
  %x19.0.reload = load i32, i32* %x19.0.reg2mem
  ret i32 %x19.0.reload, !insn.addr !340

; uselistorder directives
  uselistorder i64 %x1.0.reload, { 1, 0 }
  uselistorder i64* %0, { 0, 1, 3, 2 }
  uselistorder i64* %x1.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x2.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %x19.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* (i32)* @malloc, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder label %dec_label_pc_150c, { 1, 0 }
}

define void @test_heap_memory() local_unnamed_addr {
dec_label_pc_1524:
  %stack_var_-12 = alloca i32, align 4
  %stack_var_-8 = alloca i64, align 8
  %0 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !341
  %1 = inttoptr i64 %0 to i64*, !insn.addr !342
  %2 = load i64, i64* %1, align 8, !insn.addr !342
  %3 = call i32 @puts(i8* bitcast (i8** @global_var_1fa8 to i8*)), !insn.addr !343
  %4 = call i32 @heap_basic(i32 10), !insn.addr !344
  %5 = zext i32 %4 to i64, !insn.addr !345
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_1fc8, i64 0, i64 0), i64 %5), !insn.addr !346
  %7 = call i32 @heap_calloc(i32 5), !insn.addr !347
  %8 = zext i32 %7 to i64, !insn.addr !348
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_1fe8, i64 0, i64 0), i64 %8), !insn.addr !349
  %10 = call i32 @heap_realloc(), !insn.addr !350
  %11 = zext i32 %10 to i64, !insn.addr !351
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_2008, i64 0, i64 0), i64 %11), !insn.addr !352
  %13 = call i32 @heap_array(i32 10), !insn.addr !353
  %14 = zext i32 %13 to i64, !insn.addr !354
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2028, i64 0, i64 0), i64 %14), !insn.addr !355
  %16 = call i32 @heap_struct(i32 5), !insn.addr !356
  %17 = zext i32 %16 to i64, !insn.addr !357
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2048, i64 0, i64 0), i64 %17), !insn.addr !358
  store i64 0, i64* %stack_var_-8, align 8, !insn.addr !359
  %19 = bitcast i64* %stack_var_-8 to i32**, !insn.addr !360
  %20 = call i32 @heap_nested(i32** nonnull %19), !insn.addr !360
  %21 = zext i32 %20 to i64, !insn.addr !361
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2068, i64 0, i64 0), i64 %21), !insn.addr !362
  %23 = load i64, i64* %stack_var_-8, align 8, !insn.addr !363
  %24 = icmp eq i64 %23, 0, !insn.addr !364
  br i1 %24, label %dec_label_pc_160c, label %dec_label_pc_15fc, !insn.addr !364

dec_label_pc_15fc:                                ; preds = %dec_label_pc_1524
  %25 = add i64 %23, 8, !insn.addr !365
  %26 = inttoptr i64 %25 to i64*, !insn.addr !365
  %27 = load i64, i64* %26, align 8, !insn.addr !365
  %28 = inttoptr i64 %27 to i64*, !insn.addr !366
  call void @free(i64* %28), !insn.addr !366
  %29 = load i64, i64* %stack_var_-8, align 8, !insn.addr !367
  %30 = inttoptr i64 %29 to i64*, !insn.addr !368
  call void @free(i64* %30), !insn.addr !368
  br label %dec_label_pc_160c, !insn.addr !368

dec_label_pc_160c:                                ; preds = %dec_label_pc_15fc, %dec_label_pc_1524
  %31 = call i32 @linked_list_heap(), !insn.addr !369
  %32 = zext i32 %31 to i64, !insn.addr !370
  %33 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_2088, i64 0, i64 0), i64 %32), !insn.addr !371
  %34 = call i32 @tree_heap_traversal(), !insn.addr !372
  %35 = zext i32 %34 to i64, !insn.addr !373
  %36 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_20b0, i64 0, i64 0), i64 %35), !insn.addr !374
  %37 = call i32 @memory_leak(i32 5), !insn.addr !375
  %38 = zext i32 %37 to i64, !insn.addr !376
  %39 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_20d8, i64 0, i64 0), i64 %38), !insn.addr !377
  %40 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_20f8, i64 0, i64 0)), !insn.addr !378
  %41 = call i32 @fork(), !insn.addr !379
  %42 = icmp eq i32 %41, 0, !insn.addr !380
  br i1 %42, label %dec_label_pc_16b8, label %dec_label_pc_1670, !insn.addr !380

dec_label_pc_1670:                                ; preds = %dec_label_pc_160c
  %43 = icmp slt i32 %41, 1, !insn.addr !381
  br i1 %43, label %dec_label_pc_16f0, label %dec_label_pc_1678, !insn.addr !381

dec_label_pc_1678:                                ; preds = %dec_label_pc_1670
  %44 = call i32 @waitpid(i32 %41, i32* nonnull %stack_var_-12, i32 0), !insn.addr !382
  %45 = load i32, i32* %stack_var_-12, align 4, !insn.addr !383
  %46 = zext i32 %45 to i64, !insn.addr !383
  %47 = urem i32 %45, 128, !insn.addr !384
  %48 = icmp eq i32 %47, 0, !insn.addr !384
  br i1 %48, label %dec_label_pc_16d8, label %dec_label_pc_1690, !insn.addr !385

dec_label_pc_1690:                                ; preds = %dec_label_pc_1678
  %49 = urem i64 %46, 128, !insn.addr !386
  %50 = add nuw nsw i64 %49, 1, !insn.addr !387
  %51 = call i64 @__asm_sbfx(i64 %50, i64 %50, i64 1, i64 7), !insn.addr !388
  %52 = trunc i64 %51 to i32, !insn.addr !389
  %53 = icmp slt i32 %52, 1, !insn.addr !389
  br i1 %53, label %dec_label_pc_16fc, label %dec_label_pc_16a4, !insn.addr !389

dec_label_pc_16a4:                                ; preds = %dec_label_pc_1690
  %54 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2150 to i8*)), !insn.addr !390
  br label %dec_label_pc_16fc, !insn.addr !391

dec_label_pc_16b8:                                ; preds = %dec_label_pc_160c
  %55 = call i32 @dangling_pointer(), !insn.addr !392
  %56 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2118 to i8*)), !insn.addr !393
  call void @exit(i32 0), !insn.addr !394
  unreachable, !insn.addr !394

dec_label_pc_16d8:                                ; preds = %dec_label_pc_1678
  %57 = call i64 @__asm_ubfx(i64 0, i64 %46, i64 8, i64 8), !insn.addr !395
  %58 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2128 to i8*)), !insn.addr !396
  br label %dec_label_pc_16fc, !insn.addr !397

dec_label_pc_16f0:                                ; preds = %dec_label_pc_1670
  call void @perror(i8* bitcast (i8** @global_var_2198 to i8*)), !insn.addr !398
  br label %dec_label_pc_16fc, !insn.addr !398

dec_label_pc_16fc:                                ; preds = %dec_label_pc_16f0, %dec_label_pc_16d8, %dec_label_pc_16a4, %dec_label_pc_1690
  %59 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !399
  %60 = inttoptr i64 %59 to i64*, !insn.addr !400
  %61 = load i64, i64* %60, align 8, !insn.addr !400
  %62 = icmp eq i64 %2, %61, !insn.addr !401
  br i1 %62, label %dec_label_pc_1718, label %dec_label_pc_1720, !insn.addr !401

dec_label_pc_1718:                                ; preds = %dec_label_pc_16fc
  ret void, !insn.addr !402

dec_label_pc_1720:                                ; preds = %dec_label_pc_16fc
  call void @__stack_chk_fail(), !insn.addr !403
  ret void, !insn.addr !403

; uselistorder directives
  uselistorder i64 %46, { 1, 0 }
  uselistorder i64* %stack_var_-8, { 1, 2, 0, 3 }
  uselistorder void (i64*)* @free, { 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 21 }
  uselistorder i64 8, { 1, 2, 3, 4, 5, 6, 7, 9, 10, 8, 11, 12, 13, 14, 0 }
}

define i32 @global_var_access() local_unnamed_addr {
dec_label_pc_1724:
  %0 = load i32, i32* @global_counter, align 4, !insn.addr !404
  %1 = add i32 %0, 1, !insn.addr !405
  store i32 %1, i32* @global_counter, align 4, !insn.addr !406
  ret i32 %1, !insn.addr !407
}

define i64 @global_var_read() local_unnamed_addr {
dec_label_pc_1738:
  %0 = load i32, i32* @global_counter, align 4, !insn.addr !408
  %1 = mul i32 %0, 2, !insn.addr !409
  %2 = zext i32 %1 to i64, !insn.addr !409
  ret i64 %2, !insn.addr !410
}

define i64 @global_array_access() local_unnamed_addr {
dec_label_pc_1748:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !411
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !411
  %3 = icmp ult i32 %2, 9, !insn.addr !411
  %4 = icmp ne i1 %3, true, !insn.addr !411
  %5 = icmp eq i32 %2, 9, !insn.addr !411
  %6 = icmp ne i1 %5, true, !insn.addr !412
  %7 = icmp eq i1 %4, %6, !insn.addr !412
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !412
  br i1 %7, label %dec_label_pc_175c, label %dec_label_pc_1750, !insn.addr !412

dec_label_pc_1750:                                ; preds = %dec_label_pc_1748
  %8 = mul i64 %1, 4, !insn.addr !413
  %9 = and i64 %8, 4294967292, !insn.addr !413
  %10 = add i64 %9, ptrtoint ([10 x i32]* @global_array to i64), !insn.addr !413
  %11 = inttoptr i64 %10 to i32*, !insn.addr !413
  %12 = load i32, i32* %11, align 4, !insn.addr !413
  %13 = zext i32 %12 to i64, !insn.addr !413
  store i64 %13, i64* %storemerge.reg2mem, !insn.addr !413
  br label %dec_label_pc_175c, !insn.addr !413

dec_label_pc_175c:                                ; preds = %dec_label_pc_1748, %dec_label_pc_1750
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !414

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_175c, { 1, 0 }
}

define i64 @static_local() local_unnamed_addr {
dec_label_pc_1768:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !415
  %3 = icmp eq i32 %2, 0, !insn.addr !415
  %. = select i1 %3, i64 ptrtoint (i32* @global_var_14035 to i64), i64 0
  %4 = trunc i64 %. to i32, !insn.addr !416
  store i32 %4, i32* bitcast (i64* @global_var_14034 to i32*), align 8, !insn.addr !416
  ret i64 %., !insn.addr !417
}

define i64 @call_static_func() local_unnamed_addr {
dec_label_pc_178c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !418
  %3 = and i64 %2, 4294967294, !insn.addr !419
  %4 = or i64 %3, 1, !insn.addr !419
  ret i64 %4, !insn.addr !420
}

define i64 @access_extern_global() local_unnamed_addr {
dec_label_pc_1798:
  %0 = load i32, i32* bitcast (i32** @global_var_13ff0 to i32*), align 8, !insn.addr !421
  %1 = add i32 %0, 100, !insn.addr !422
  %2 = zext i32 %1 to i64, !insn.addr !422
  ret i64 %2, !insn.addr !423
}

define i32 @call_extern_func() local_unnamed_addr {
dec_label_pc_17ac:
  %0 = call i32 @extern_function(i32 5), !insn.addr !424
  ret i32 %0, !insn.addr !425
}

define i32 @read_const_data() local_unnamed_addr {
dec_label_pc_17c4:
  %0 = load i8, i8* bitcast (i32* @global_var_1401c to i8*), align 4, !insn.addr !426
  %1 = zext i8 %0 to i32, !insn.addr !426
  %2 = add nuw nsw i32 %1, 42, !insn.addr !427
  ret i32 %2, !insn.addr !428

; uselistorder directives
  uselistorder i32 42, { 1, 0 }
}

define i64 @access_bss_var() local_unnamed_addr {
dec_label_pc_17d8:
  ret i64 0, !insn.addr !429
}

define i64 @access_bss_buffer() local_unnamed_addr {
dec_label_pc_17e0:
  ret i64 0, !insn.addr !430
}

define i32 @global_struct_access() local_unnamed_addr {
dec_label_pc_17e8:
  ret i32 30, !insn.addr !431
}

define i64 @set_file_static() local_unnamed_addr {
dec_label_pc_17f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !432
  store i32 %2, i32* @file_scope_static, align 4, !insn.addr !432
  ret i64 %1, !insn.addr !433

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @get_file_static() local_unnamed_addr {
dec_label_pc_17fc:
  %0 = load i32, i32* @file_scope_static, align 4, !insn.addr !434
  %1 = zext i32 %0 to i64, !insn.addr !434
  ret i64 %1, !insn.addr !435
}

define i64 @set_global_callback() local_unnamed_addr {
dec_label_pc_1808:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !436
}

define i32 @call_global_callback(i32 %x) local_unnamed_addr {
dec_label_pc_1814:
  %0 = load i32 (i32)*, i32 (i32)** @global_func_ptr, align 8, !insn.addr !437
  %1 = icmp eq i32 (i32)* %0, null, !insn.addr !438
  %spec.select = select i1 %1, i32 -1, i32 %x
  ret i32 %spec.select, !insn.addr !439
}

define i64 @global_heap_store() local_unnamed_addr {
dec_label_pc_183c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %1, 0, !insn.addr !440
  %3 = and i64 %1, 4294967295
  %storemerge = select i1 %2, i64 4294967295, i64 %3
  ret i64 %storemerge, !insn.addr !441

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i32 @static_complex_init() local_unnamed_addr {
dec_label_pc_1850:
  ret i32 15, !insn.addr !442
}

define i64 @tls_access() local_unnamed_addr {
dec_label_pc_1858:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !443
  %3 = and i64 %2, 4294967294, !insn.addr !443
  ret i64 %3, !insn.addr !444

; uselistorder directives
  uselistorder i64 4294967294, { 1, 2, 0, 3 }
  uselistorder i64 2, { 0, 1, 5, 6, 7, 4, 8, 9, 2, 3 }
}

define i32 @init_order_test() local_unnamed_addr {
dec_label_pc_1860:
  store i32 20, i32* bitcast (i64* @global_var_14040 to i32*), align 8, !insn.addr !445
  ret i32 20, !insn.addr !446
}

define void @test_static_global() local_unnamed_addr {
dec_label_pc_1870:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_21a8 to i8*)), !insn.addr !447
  %1 = call i32 @global_var_access(), !insn.addr !448
  %2 = zext i32 %1 to i64, !insn.addr !449
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_21d0, i64 0, i64 0), i64 %2), !insn.addr !450
  %4 = load i32, i32* @global_counter, align 4, !insn.addr !451
  %5 = mul i32 %4, 2, !insn.addr !452
  %6 = zext i32 %5 to i64, !insn.addr !452
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_21f8, i64 0, i64 0), i64 %6), !insn.addr !453
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_2220, i64 0, i64 0), i64 5), !insn.addr !454
  store i32 1, i32* bitcast (i64* @global_var_14034 to i32*), align 8, !insn.addr !455
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2248, i64 0, i64 0), i64 1), !insn.addr !456
  store i32 ptrtoint (i32* @global_var_14035 to i32), i32* bitcast (i64* @global_var_14034 to i32*), align 8, !insn.addr !457
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2248, i64 0, i64 0), i64 ptrtoint (i32* @global_var_14035 to i64)), !insn.addr !458
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_2268, i64 0, i64 0), i64 11), !insn.addr !459
  %12 = load i32, i32* bitcast (i32** @global_var_13ff0 to i32*), align 8, !insn.addr !460
  %13 = add i32 %12, 100, !insn.addr !461
  %14 = zext i32 %13 to i64, !insn.addr !461
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_2290, i64 0, i64 0), i64 %14), !insn.addr !462
  %16 = call i32 @call_extern_func(), !insn.addr !463
  %17 = zext i32 %16 to i64, !insn.addr !464
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_22b8, i64 0, i64 0), i64 %17), !insn.addr !465
  %19 = call i32 @read_const_data(), !insn.addr !466
  %20 = zext i32 %19 to i64, !insn.addr !467
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_22e0, i64 0, i64 0), i64 %20), !insn.addr !468
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_2308, i64 0, i64 0), i64 0), !insn.addr !469
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_2328, i64 0, i64 0), i64 0), !insn.addr !470
  %24 = call i32 @global_struct_access(), !insn.addr !471
  %25 = zext i32 %24 to i64, !insn.addr !472
  %26 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_2350, i64 0, i64 0), i64 %25), !insn.addr !473
  store i32 50, i32* @file_scope_static, align 4, !insn.addr !474
  %27 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2378, i64 0, i64 0), i64 50), !insn.addr !475
  store i64 3092, i64* bitcast (i32 (i32)** @global_func_ptr to i64*), align 8, !insn.addr !476
  %28 = call i32 @call_global_callback(i32 5), !insn.addr !477
  %29 = zext i32 %28 to i64, !insn.addr !478
  %30 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_2398, i64 0, i64 0), i64 %29), !insn.addr !479
  %31 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_23c0, i64 0, i64 0), i64 100), !insn.addr !480
  %32 = call i32 @static_complex_init(), !insn.addr !481
  %33 = zext i32 %32 to i64, !insn.addr !482
  %34 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_23e8, i64 0, i64 0), i64 %33), !insn.addr !483
  %35 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_2410, i64 0, i64 0), i64 20), !insn.addr !484
  %36 = call i32 @init_order_test(), !insn.addr !485
  %37 = zext i32 %36 to i64, !insn.addr !486
  %38 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_2430, i64 0, i64 0), i64 %37), !insn.addr !487
  ret void, !insn.addr !488

; uselistorder directives
  uselistorder i64 100, { 1, 0 }
  uselistorder i32 (i32)** @global_func_ptr, { 1, 0 }
  uselistorder i32 100, { 2, 1, 0 }
  uselistorder i64 ptrtoint (i32* @global_var_14035 to i64), { 1, 0 }
}

define i32 @memop_memset(i8* %buf, i64 %size, i32 %fill_value) local_unnamed_addr {
dec_label_pc_1a60:
  %storemerge.reg2mem = alloca i32, !insn.addr !489
  %0 = icmp eq i8* %buf, null, !insn.addr !490
  %1 = icmp eq i64 %size, 0
  %storemerge1 = or i1 %0, %1
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !491
  br i1 %storemerge1, label %dec_label_pc_1a94, label %dec_label_pc_1a80, !insn.addr !491

dec_label_pc_1a80:                                ; preds = %dec_label_pc_1a60
  %2 = bitcast i8* %buf to i64*, !insn.addr !492
  %3 = trunc i64 %size to i32, !insn.addr !492
  %4 = call i64* @memset(i64* %2, i32 %fill_value, i32 %3), !insn.addr !492
  %phitmp = urem i32 %3, 256
  store i32 %phitmp, i32* %storemerge.reg2mem, !insn.addr !493
  br label %dec_label_pc_1a94, !insn.addr !493

dec_label_pc_1a94:                                ; preds = %dec_label_pc_1a60, %dec_label_pc_1a80
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !494

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1a94, { 1, 0 }
}

define i32 @memop_memcpy(i8* %dst, i32* %src, i64 %n) local_unnamed_addr {
dec_label_pc_1aa8:
  %0 = icmp eq i32* %src, null, !insn.addr !495
  %1 = icmp eq i64 %n, 0
  %storemerge1 = or i1 %0, %1
  %2 = icmp eq i8* %dst, null
  %storemerge = or i1 %2, %storemerge1
  br i1 %storemerge, label %dec_label_pc_1ae8, label %dec_label_pc_1ab8, !insn.addr !496

dec_label_pc_1ab8:                                ; preds = %dec_label_pc_1aa8
  %3 = ptrtoint i8* %dst to i64
  %4 = bitcast i8* %dst to i64*, !insn.addr !497
  %5 = bitcast i32* %src to i64*, !insn.addr !497
  %6 = trunc i64 %n to i32, !insn.addr !497
  %7 = call i64* @memcpy(i64* %4, i64* %5, i32 %6), !insn.addr !497
  %8 = and i64 %n, -4, !insn.addr !498
  %9 = add i64 %3, -4, !insn.addr !499
  %10 = add i64 %9, %8, !insn.addr !500
  %11 = inttoptr i64 %10 to i32*, !insn.addr !500
  %12 = load i32, i32* %11, align 4, !insn.addr !500
  ret i32 %12, !insn.addr !501

dec_label_pc_1ae8:                                ; preds = %dec_label_pc_1aa8
  ret i32 -1, !insn.addr !502

; uselistorder directives
  uselistorder i8* %dst, { 0, 2, 1 }
}

define i32 @memop_memmove(i8* %buf, i64 %n) local_unnamed_addr {
dec_label_pc_1af0:
  %0 = icmp eq i8* %buf, null, !insn.addr !503
  br i1 %0, label %dec_label_pc_1b2c, label %1, !insn.addr !504

; <label>:1:                                      ; preds = %dec_label_pc_1af0
  %2 = icmp eq i64 %n, 0, !insn.addr !504
  %3 = icmp ne i1 %2, true, !insn.addr !504
  %4 = icmp eq i64 %n, 1, !insn.addr !504
  %phitmp = icmp ne i1 %3, true
  %5 = or i1 %4, %phitmp, !insn.addr !505
  br i1 %5, label %dec_label_pc_1b2c, label %dec_label_pc_1afc, !insn.addr !505

dec_label_pc_1afc:                                ; preds = %1
  %6 = ptrtoint i8* %buf to i64
  %7 = add i64 %6, 1, !insn.addr !506
  %8 = inttoptr i64 %7 to i64*, !insn.addr !507
  %9 = bitcast i8* %buf to i64*, !insn.addr !507
  %10 = trunc i64 %n to i32
  %11 = add i32 %10, -1, !insn.addr !507
  %12 = call i64* @memmove(i64* %8, i64* %9, i32 %11), !insn.addr !507
  %13 = inttoptr i64 %7 to i8*, !insn.addr !508
  %14 = load i8, i8* %13, align 1, !insn.addr !508
  %15 = zext i8 %14 to i32, !insn.addr !508
  ret i32 %15, !insn.addr !509

dec_label_pc_1b2c:                                ; preds = %dec_label_pc_1af0, %1
  ret i32 -1, !insn.addr !510

; uselistorder directives
  uselistorder i8* %buf, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1b2c, { 1, 0 }
}

define i32 @memop_memcmp(i32* %p1, i32* %p2, i64 %n) local_unnamed_addr {
dec_label_pc_1b34:
  %0 = icmp eq i32* %p2, null, !insn.addr !511
  %1 = icmp eq i64 %n, 0
  %storemerge2 = or i1 %0, %1
  %2 = icmp eq i32* %p1, null
  %storemerge1 = or i1 %2, %storemerge2
  br i1 %storemerge1, label %dec_label_pc_1b44, label %dec_label_pc_1b4c, !insn.addr !512

dec_label_pc_1b44:                                ; preds = %dec_label_pc_1b34
  ret i32 0, !insn.addr !513

dec_label_pc_1b4c:                                ; preds = %dec_label_pc_1b34
  %3 = bitcast i32* %p1 to i64*, !insn.addr !514
  %4 = bitcast i32* %p2 to i64*, !insn.addr !514
  %5 = trunc i64 %n to i32, !insn.addr !514
  %6 = call i32 @memcmp(i64* %3, i64* %4, i32 %5), !insn.addr !514
  %7 = icmp slt i32 %6, 1, !insn.addr !515
  %8 = ashr i32 %6, 31
  %narrow = select i1 %7, i32 %8, i32 1
  ret i32 %narrow, !insn.addr !516

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
}

define i32 @memop_bzero(i8* %buf, i64 %n) local_unnamed_addr {
dec_label_pc_1b6c:
  %0 = icmp eq i8* %buf, null, !insn.addr !517
  br i1 %0, label %dec_label_pc_1b9c, label %dec_label_pc_1b70, !insn.addr !517

dec_label_pc_1b70:                                ; preds = %dec_label_pc_1b6c
  %1 = ptrtoint i8* %buf to i64
  %2 = trunc i64 %1 to i32
  %3 = bitcast i8* %buf to i64*, !insn.addr !518
  %4 = trunc i64 %n to i32, !insn.addr !518
  %5 = call i64* @memset(i64* %3, i32 0, i32 %4), !insn.addr !518
  %6 = urem i32 %2, 256, !insn.addr !519
  ret i32 %6, !insn.addr !520

dec_label_pc_1b9c:                                ; preds = %dec_label_pc_1b6c
  ret i32 -1, !insn.addr !521

; uselistorder directives
  uselistorder i64* (i64*, i32, i32)* @memset, { 1, 0, 2 }
  uselistorder i8* %buf, { 0, 2, 1 }
}

define i32 @memop_bcopy(i32* %src, i8* %dst, i64 %n) local_unnamed_addr {
dec_label_pc_1ba4:
  %0 = icmp eq i8* %dst, null, !insn.addr !522
  %1 = icmp eq i64 %n, 0
  %storemerge1 = or i1 %0, %1
  %2 = icmp eq i32* %src, null
  %storemerge = or i1 %2, %storemerge1
  br i1 %storemerge, label %dec_label_pc_1be0, label %dec_label_pc_1bb4, !insn.addr !523

dec_label_pc_1bb4:                                ; preds = %dec_label_pc_1ba4
  %3 = ptrtoint i8* %dst to i64
  %4 = trunc i64 %3 to i32
  %5 = bitcast i8* %dst to i64*, !insn.addr !524
  %6 = bitcast i32* %src to i64*, !insn.addr !524
  %7 = trunc i64 %n to i32, !insn.addr !524
  %8 = call i64* @memmove(i64* %5, i64* %6, i32 %7), !insn.addr !524
  %9 = urem i32 %4, 256, !insn.addr !525
  ret i32 %9, !insn.addr !526

dec_label_pc_1be0:                                ; preds = %dec_label_pc_1ba4
  ret i32 -1, !insn.addr !527

; uselistorder directives
  uselistorder i64* (i64*, i64*, i32)* @memmove, { 1, 0, 2 }
  uselistorder i8* null, { 1, 2, 3, 0, 4 }
  uselistorder i8* %dst, { 0, 2, 1 }
}

define i64 @memop_unaligned_access() local_unnamed_addr {
dec_label_pc_1be8:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !528
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %1, 0, !insn.addr !528
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !528
  br i1 %2, label %dec_label_pc_1bf0, label %dec_label_pc_1bec, !insn.addr !528

dec_label_pc_1bec:                                ; preds = %dec_label_pc_1be8
  %3 = add i64 %1, 1, !insn.addr !529
  %4 = inttoptr i64 %3 to i32*, !insn.addr !529
  %5 = load i32, i32* %4, align 4, !insn.addr !529
  %6 = zext i32 %5 to i64, !insn.addr !529
  store i64 %6, i64* %storemerge.reg2mem, !insn.addr !529
  br label %dec_label_pc_1bf0, !insn.addr !529

dec_label_pc_1bf0:                                ; preds = %dec_label_pc_1be8, %dec_label_pc_1bec
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !530

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 1, { 6, 7, 1, 2, 3, 8, 4, 9, 10, 11, 12, 5, 13, 0 }
  uselistorder i64 4294967295, { 0, 3, 2, 1, 4, 5, 6, 7, 8, 9, 10, 11 }
  uselistorder label %dec_label_pc_1bf0, { 1, 0 }
}

define i32 @memop_memory_barrier(i32* %flag) local_unnamed_addr {
dec_label_pc_1bfc:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i32, !insn.addr !531
  %1 = load i64, i64* %0
  %2 = icmp eq i32* %flag, null, !insn.addr !531
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !531
  br i1 %2, label %dec_label_pc_1c10, label %dec_label_pc_1c00, !insn.addr !531

dec_label_pc_1c00:                                ; preds = %dec_label_pc_1bfc
  call void @__asm_dmb(i64 undef), !insn.addr !532
  %.tr = trunc i64 %1 to i32
  %phitmp = mul i32 %.tr, 2
  store i32 %phitmp, i32* %storemerge.reg2mem, !insn.addr !533
  br label %dec_label_pc_1c10, !insn.addr !533

dec_label_pc_1c10:                                ; preds = %dec_label_pc_1bfc, %dec_label_pc_1c00
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !534

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 2, { 0, 1, 2, 6, 7, 11, 8, 3, 12, 9, 10, 4, 5 }
  uselistorder i32 -1, { 0, 17, 18, 19, 22, 20, 1, 21, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 23 }
  uselistorder i32* null, { 2, 0, 1, 3, 4, 5, 6, 7 }
  uselistorder label %dec_label_pc_1c10, { 1, 0 }
}

define void @test_memory_op_functions() local_unnamed_addr {
dec_label_pc_1c1c:
  %stack_var_-388 = alloca i32, align 4
  %zero_buf_-296 = alloca [10 x i8], align 1
  %bcopy_dst_-304 = alloca i32, align 1
  %tmpcast = bitcast i32* %bcopy_dst_-304 to [4 x i8]*
  %stack_var_-288 = alloca i64, align 8
  %stack_var_-368 = alloca i32, align 4
  %stack_var_-384 = alloca i32, align 4
  %stack_var_-272 = alloca i8*, align 8
  %stack_var_-256 = alloca i64, align 8
  %stack_var_-328 = alloca i64, align 8
  %stack_var_-352 = alloca i64, align 8
  %0 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !535
  %1 = inttoptr i64 %0 to i64*, !insn.addr !536
  %2 = load i64, i64* %1, align 8, !insn.addr !536
  %3 = call i32 @puts(i8* bitcast (i8** @global_var_2458 to i8*)), !insn.addr !537
  store i64 85899345930, i64* %stack_var_-352, align 8, !insn.addr !538
  store i64 0, i64* %stack_var_-328, align 8, !insn.addr !539
  %4 = bitcast i64* %stack_var_-256 to i8*, !insn.addr !540
  %5 = call i32 @memop_memset(i8* nonnull %4, i64 10, i32 65), !insn.addr !540
  %6 = zext i32 %5 to i64, !insn.addr !541
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2480, i64 0, i64 0), i64 %6), !insn.addr !542
  %8 = bitcast i64* %stack_var_-328 to i8*, !insn.addr !543
  %9 = bitcast i64* %stack_var_-352 to i32*, !insn.addr !543
  %10 = call i32 @memop_memcpy(i8* nonnull %8, i32* nonnull %9, i64 20), !insn.addr !543
  %11 = zext i32 %10 to i64, !insn.addr !544
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2498, i64 0, i64 0), i64 %11), !insn.addr !545
  store i8* inttoptr (i64 8245905578810697032 to i8*), i8** %stack_var_-272, align 8, !insn.addr !546
  %13 = bitcast i8** %stack_var_-272 to i8*, !insn.addr !547
  %14 = call i32 @memop_memmove(i8* nonnull %13, i64 10), !insn.addr !547
  %15 = trunc i32 %14 to i8, !insn.addr !548
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_24b0, i64 0, i64 0), i8 %15), !insn.addr !548
  store i32 1, i32* %stack_var_-384, align 4, !insn.addr !549
  store i32 1, i32* %stack_var_-368, align 4, !insn.addr !550
  %17 = call i32 @memop_memcmp(i32* nonnull %stack_var_-384, i32* nonnull %stack_var_-368, i64 12), !insn.addr !551
  %18 = zext i32 %17 to i64, !insn.addr !552
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_24c8, i64 0, i64 0), i64 %18), !insn.addr !553
  %20 = bitcast i64* %stack_var_-288 to i8*, !insn.addr !554
  %21 = call i32 @memop_bzero(i8* nonnull %20, i64 10), !insn.addr !554
  %22 = zext i32 %21 to i64, !insn.addr !555
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_24e0, i64 0, i64 0), i64 %22), !insn.addr !556
  store [4 x i8] [i8 1, i8 undef, i8 undef, i8 undef], [4 x i8]* %tmpcast, align 1, !insn.addr !557
  store [10 x i8] [i8 0, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef], [10 x i8]* %zero_buf_-296, align 1, !insn.addr !558
  %24 = getelementptr inbounds [10 x i8], [10 x i8]* %zero_buf_-296, i64 0, i64 0, !insn.addr !559
  %25 = call i32 @memop_bcopy(i32* nonnull %bcopy_dst_-304, i8* nonnull %24, i64 4), !insn.addr !559
  %26 = zext i32 %25 to i64, !insn.addr !560
  %27 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_24f8, i64 0, i64 0), i64 %26), !insn.addr !561
  %28 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_2510, i64 0, i64 0), i32 67305985), !insn.addr !562
  store i32 5, i32* %stack_var_-388, align 4, !insn.addr !563
  %29 = call i32 @memop_memory_barrier(i32* nonnull %stack_var_-388), !insn.addr !564
  %30 = zext i32 %29 to i64, !insn.addr !565
  %31 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2528, i64 0, i64 0), i64 %30), !insn.addr !566
  %32 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !567
  %33 = inttoptr i64 %32 to i64*, !insn.addr !568
  %34 = load i64, i64* %33, align 8, !insn.addr !568
  %35 = icmp eq i64 %2, %34, !insn.addr !569
  br i1 %35, label %dec_label_pc_1de0, label %dec_label_pc_1dec, !insn.addr !569

dec_label_pc_1de0:                                ; preds = %dec_label_pc_1c1c
  ret void, !insn.addr !570

dec_label_pc_1dec:                                ; preds = %dec_label_pc_1c1c
  call void @__stack_chk_fail(), !insn.addr !571
  ret void, !insn.addr !571

; uselistorder directives
  uselistorder i8** %stack_var_-272, { 1, 0 }
  uselistorder void ()* @__stack_chk_fail, { 4, 5, 3, 2, 1, 0, 6 }
  uselistorder i64 4, { 5, 0, 6, 1, 7, 8, 2, 3, 9, 4, 10 }
  uselistorder i64 20, { 1, 2, 5, 3, 4, 0 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 49 }
  uselistorder i64 10, { 2, 3, 4, 0, 1 }
  uselistorder i32 (i8*)* @puts, { 3, 2, 1, 0, 4 }
  uselistorder i64 0, { 39, 40, 41, 42, 43, 44, 37, 38, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 139, 141, 145, 146, 55, 147, 148, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 130, 70, 71, 131, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 142, 12, 13, 36, 15, 90, 91, 92, 93, 94, 95, 96, 97, 149, 98, 99, 140, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 0, 110, 111, 1, 150, 151, 152, 153, 154, 155, 156, 159, 160, 157, 158, 2, 3, 4, 161, 5, 6, 7, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 8, 162, 163, 164, 16, 9, 165, 166, 167, 17, 10, 11, 143, 14, 144, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 132, 34, 35, 133, 134, 135, 136, 137, 138 }
  uselistorder i64* @global_var_13fe0, { 2, 3, 4, 5, 0, 6, 1, 7, 8, 9, 10, 11 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_1df0:
  call void @test_stack_memory(), !insn.addr !572
  call void @test_heap_memory(), !insn.addr !573
  call void @test_static_global(), !insn.addr !574
  call void @test_memory_op_functions(), !insn.addr !575
  ret i32 0, !insn.addr !576

; uselistorder directives
  uselistorder i32 0, { 5, 12, 6, 19, 13, 20, 14, 21, 7, 0, 1, 2, 8, 3, 4, 9, 10, 11, 15, 16, 17, 18 }
}

define i32 @extern_function(i32 %x) local_unnamed_addr {
dec_label_pc_1e14:
  %0 = mul i32 %x, 3, !insn.addr !577
  ret i32 %0, !insn.addr !578

; uselistorder directives
  uselistorder i32 3, { 2, 0, 1, 3, 4 }
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_1e1c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !579

; uselistorder directives
  uselistorder i32 1, { 15, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 139, 138, 137, 131, 136, 135, 134, 68, 133, 132, 18, 14, 19, 13, 67, 79, 20, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 12, 11, 10, 9, 8, 7, 21, 6, 147, 102, 101, 103, 99, 100, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 140, 130, 24, 23, 22, 25, 5, 114, 26, 115, 28, 27, 30, 29, 39, 38, 37, 36, 35, 34, 33, 32, 31, 40, 41, 116, 44, 43, 42, 117, 46, 45, 118, 50, 49, 48, 47, 119, 52, 51, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 141, 57, 56, 55, 54, 53, 142, 61, 60, 59, 58, 143, 63, 62, 17, 4, 3, 2, 145, 144, 65, 64, 16, 1, 66, 146, 0 }
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
!21 = !{i64 2848}
!22 = !{i64 2860}
!23 = !{i64 2864}
!24 = !{i64 2872}
!25 = !{i64 2876}
!26 = !{i64 2880}
!27 = !{i64 2884}
!28 = !{i64 2940}
!29 = !{i64 3000}
!30 = !{i64 3008}
!31 = !{i64 3024}
!32 = !{i64 3028}
!33 = !{i64 3036}
!34 = !{i64 3040}
!35 = !{i64 3048}
!36 = !{i64 3052}
!37 = !{i64 3056}
!38 = !{i64 3064}
!39 = !{i64 3076}
!40 = !{i64 3088}
!41 = !{i64 3092}
!42 = !{i64 3096}
!43 = !{i64 3100}
!44 = !{i64 3104}
!45 = !{i64 3108}
!46 = !{i64 3112}
!47 = !{i64 3124}
!48 = !{i64 3128}
!49 = !{i64 3132}
!50 = !{i64 3140}
!51 = !{i64 3160}
!52 = !{i64 3148}
!53 = !{i64 3152}
!54 = !{i64 3156}
!55 = !{i64 3164}
!56 = !{i64 3176}
!57 = !{i64 3180}
!58 = !{i64 3184}
!59 = !{i64 3196}
!60 = !{i64 3204}
!61 = !{i64 3208}
!62 = !{i64 3212}
!63 = !{i64 3216}
!64 = !{i64 3228}
!65 = !{i64 3232}
!66 = !{i64 3240}
!67 = !{i64 3244}
!68 = !{i64 3248}
!69 = !{i64 3264}
!70 = !{i64 3268}
!71 = !{i64 3280}
!72 = !{i64 3284}
!73 = !{i64 3288}
!74 = !{i64 3292}
!75 = !{i64 3300}
!76 = !{i64 3312}
!77 = !{i64 3320}
!78 = !{i64 3332}
!79 = !{i64 3304}
!80 = !{i64 3344}
!81 = !{i64 3348}
!82 = !{i64 3352}
!83 = !{i64 3384}
!84 = !{i64 3388}
!85 = !{i64 3392}
!86 = !{i64 3360}
!87 = !{i64 3368}
!88 = !{i64 3372}
!89 = !{i64 3396}
!90 = !{i64 3400}
!91 = !{i64 3408}
!92 = !{i64 3412}
!93 = !{i64 3416}
!94 = !{i64 3420}
!95 = !{i64 3424}
!96 = !{i64 3428}
!97 = !{i64 3436}
!98 = !{i64 3440}
!99 = !{i64 3444}
!100 = !{i64 3448}
!101 = !{i64 3452}
!102 = !{i64 3456}
!103 = !{i64 3460}
!104 = !{i64 3464}
!105 = !{i64 3468}
!106 = !{i64 3472}
!107 = !{i64 3476}
!108 = !{i64 3484}
!109 = !{i64 3488}
!110 = !{i64 3496}
!111 = !{i64 3524}
!112 = !{i64 3536}
!113 = !{i64 3548}
!114 = !{i64 3552}
!115 = !{i64 3588}
!116 = !{i64 3560}
!117 = !{i64 3568}
!118 = !{i64 3572}
!119 = !{i64 3592}
!120 = !{i64 3596}
!121 = !{i64 3604}
!122 = !{i64 3608}
!123 = !{i64 3612}
!124 = !{i64 3616}
!125 = !{i64 3620}
!126 = !{i64 3624}
!127 = !{i64 3632}
!128 = !{i64 3636}
!129 = !{i64 3640}
!130 = !{i64 3644}
!131 = !{i64 3648}
!132 = !{i64 3652}
!133 = !{i64 3656}
!134 = !{i64 3664}
!135 = !{i64 3668}
!136 = !{i64 3672}
!137 = !{i64 3676}
!138 = !{i64 3684}
!139 = !{i64 3688}
!140 = !{i64 3696}
!141 = !{i64 3724}
!142 = !{i64 3736}
!143 = !{i64 3748}
!144 = !{i64 3756}
!145 = !{i64 3776}
!146 = !{i64 3796}
!147 = !{i64 3804}
!148 = !{i64 3808}
!149 = !{i64 3824}
!150 = !{i64 3844}
!151 = !{i64 3864}
!152 = !{i64 3884}
!153 = !{i64 3888}
!154 = !{i64 3892}
!155 = !{i64 3908}
!156 = !{i64 3916}
!157 = !{i64 3920}
!158 = !{i64 3936}
!159 = !{i64 3944}
!160 = !{i64 3948}
!161 = !{i64 3964}
!162 = !{i64 3984}
!163 = !{i64 3992}
!164 = !{i64 3996}
!165 = !{i64 4012}
!166 = !{i64 4016}
!167 = !{i64 4020}
!168 = !{i64 4008}
!169 = !{i64 4028}
!170 = !{i64 4036}
!171 = !{i64 4040}
!172 = !{i64 4044}
!173 = !{i64 4052}
!174 = !{i64 4056}
!175 = !{i64 4064}
!176 = !{i64 4068}
!177 = !{i64 4084}
!178 = !{i64 4096}
!179 = !{i64 4120}
!180 = !{i64 4124}
!181 = !{i64 4108}
!182 = !{i64 4132}
!183 = !{i64 4144}
!184 = !{i64 4148}
!185 = !{i64 4152}
!186 = !{i64 4160}
!187 = !{i64 4164}
!188 = !{i64 4180}
!189 = !{i64 4200}
!190 = !{i64 4216}
!191 = !{i64 4220}
!192 = !{i64 4232}
!193 = !{i64 4240}
!194 = !{i64 4248}
!195 = !{i64 4256}
!196 = !{i64 4264}
!197 = !{i64 4276}
!198 = !{i64 4280}
!199 = !{i64 4288}
!200 = !{i64 4296}
!201 = !{i64 4304}
!202 = !{i64 4312}
!203 = !{i64 4320}
!204 = !{i64 4324}
!205 = !{i64 4332}
!206 = !{i64 4336}
!207 = !{i64 4340}
!208 = !{i64 4356}
!209 = !{i64 4364}
!210 = !{i64 4372}
!211 = !{i64 4376}
!212 = !{i64 4380}
!213 = !{i64 4392}
!214 = !{i64 4408}
!215 = !{i64 4412}
!216 = !{i64 4416}
!217 = !{i64 4424}
!218 = !{i64 4436}
!219 = !{i64 4440}
!220 = !{i64 4444}
!221 = !{i64 4452}
!222 = !{i64 4456}
!223 = !{i64 4464}
!224 = !{i64 4468}
!225 = !{i64 4484}
!226 = !{i64 4496}
!227 = !{i64 4516}
!228 = !{i64 4520}
!229 = !{i64 4528}
!230 = !{i64 4544}
!231 = !{i64 4556}
!232 = !{i64 4576}
!233 = !{i64 4580}
!234 = !{i64 4584}
!235 = !{i64 4596}
!236 = !{i64 4604}
!237 = !{i64 4608}
!238 = !{i64 4612}
!239 = !{i64 4620}
!240 = !{i64 4624}
!241 = !{i64 4628}
!242 = !{i64 4640}
!243 = !{i64 4648}
!244 = !{i64 4656}
!245 = !{i64 4668}
!246 = !{i64 4700}
!247 = !{i64 4704}
!248 = !{i64 4712}
!249 = !{i64 4716}
!250 = !{i64 4720}
!251 = !{i64 4736}
!252 = !{i64 4740}
!253 = !{i64 4744}
!254 = !{i64 4756}
!255 = !{i64 4760}
!256 = !{i64 4764}
!257 = !{i64 4768}
!258 = !{i64 4772}
!259 = !{i64 4776}
!260 = !{i64 4780}
!261 = !{i64 4784}
!262 = !{i64 4796}
!263 = !{i64 4800}
!264 = !{i64 4804}
!265 = !{i64 4808}
!266 = !{i64 4816}
!267 = !{i64 4820}
!268 = !{i64 4824}
!269 = !{i64 4844}
!270 = !{i64 4884}
!271 = !{i64 4888}
!272 = !{i64 4892}
!273 = !{i64 4896}
!274 = !{i64 4900}
!275 = !{i64 4912}
!276 = !{i64 4916}
!277 = !{i64 4932}
!278 = !{i64 4936}
!279 = !{i64 4948}
!280 = !{i64 4952}
!281 = !{i64 4960}
!282 = !{i64 4968}
!283 = !{i64 4972}
!284 = !{i64 4976}
!285 = !{i64 4984}
!286 = !{i64 4988}
!287 = !{i64 4992}
!288 = !{i64 4996}
!289 = !{i64 5000}
!290 = !{i64 5004}
!291 = !{i64 5008}
!292 = !{i64 5012}
!293 = !{i64 5016}
!294 = !{i64 5024}
!295 = !{i64 5040}
!296 = !{i64 5044}
!297 = !{i64 5048}
!298 = !{i64 5052}
!299 = !{i64 5056}
!300 = !{i64 5060}
!301 = !{i64 5068}
!302 = !{i64 5076}
!303 = !{i64 5088}
!304 = !{i64 5104}
!305 = !{i64 5108}
!306 = !{i64 5112}
!307 = !{i64 5100}
!308 = !{i64 5120}
!309 = !{i64 5128}
!310 = !{i64 5132}
!311 = !{i64 5140}
!312 = !{i64 5144}
!313 = !{i64 5152}
!314 = !{i64 5164}
!315 = !{i64 5176}
!316 = !{i64 5188}
!317 = !{i64 5192}
!318 = !{i64 5220}
!319 = !{i64 5228}
!320 = !{i64 5232}
!321 = !{i64 5236}
!322 = !{i64 5244}
!323 = !{i64 5256}
!324 = !{i64 5264}
!325 = !{i64 5284}
!326 = !{i64 5292}
!327 = !{i64 5296}
!328 = !{i64 5304}
!329 = !{i64 5308}
!330 = !{i64 5320}
!331 = !{i64 5332}
!332 = !{i64 5348}
!333 = !{i64 5352}
!334 = !{i64 5360}
!335 = !{i64 5364}
!336 = !{i64 5368}
!337 = !{i64 5376}
!338 = !{i64 5380}
!339 = !{i64 5384}
!340 = !{i64 5400}
!341 = !{i64 5424}
!342 = !{i64 5428}
!343 = !{i64 5448}
!344 = !{i64 5456}
!345 = !{i64 5460}
!346 = !{i64 5476}
!347 = !{i64 5484}
!348 = !{i64 5488}
!349 = !{i64 5504}
!350 = !{i64 5508}
!351 = !{i64 5512}
!352 = !{i64 5528}
!353 = !{i64 5536}
!354 = !{i64 5540}
!355 = !{i64 5556}
!356 = !{i64 5564}
!357 = !{i64 5568}
!358 = !{i64 5584}
!359 = !{i64 5588}
!360 = !{i64 5596}
!361 = !{i64 5600}
!362 = !{i64 5616}
!363 = !{i64 5620}
!364 = !{i64 5624}
!365 = !{i64 5628}
!366 = !{i64 5632}
!367 = !{i64 5636}
!368 = !{i64 5640}
!369 = !{i64 5644}
!370 = !{i64 5648}
!371 = !{i64 5664}
!372 = !{i64 5668}
!373 = !{i64 5672}
!374 = !{i64 5688}
!375 = !{i64 5696}
!376 = !{i64 5700}
!377 = !{i64 5716}
!378 = !{i64 5732}
!379 = !{i64 5736}
!380 = !{i64 5740}
!381 = !{i64 5748}
!382 = !{i64 5760}
!383 = !{i64 5764}
!384 = !{i64 5768}
!385 = !{i64 5772}
!386 = !{i64 5776}
!387 = !{i64 5780}
!388 = !{i64 5784}
!389 = !{i64 5792}
!390 = !{i64 5808}
!391 = !{i64 5812}
!392 = !{i64 5816}
!393 = !{i64 5836}
!394 = !{i64 5844}
!395 = !{i64 5848}
!396 = !{i64 5864}
!397 = !{i64 5868}
!398 = !{i64 5880}
!399 = !{i64 5888}
!400 = !{i64 5896}
!401 = !{i64 5908}
!402 = !{i64 5916}
!403 = !{i64 5920}
!404 = !{i64 5928}
!405 = !{i64 5932}
!406 = !{i64 5936}
!407 = !{i64 5940}
!408 = !{i64 5948}
!409 = !{i64 5952}
!410 = !{i64 5956}
!411 = !{i64 5960}
!412 = !{i64 5964}
!413 = !{i64 5976}
!414 = !{i64 5980}
!415 = !{i64 5992}
!416 = !{i64 6012}
!417 = !{i64 6016}
!418 = !{i64 6028}
!419 = !{i64 6032}
!420 = !{i64 6036}
!421 = !{i64 6048}
!422 = !{i64 6052}
!423 = !{i64 6056}
!424 = !{i64 6072}
!425 = !{i64 6080}
!426 = !{i64 6092}
!427 = !{i64 6096}
!428 = !{i64 6100}
!429 = !{i64 6108}
!430 = !{i64 6116}
!431 = !{i64 6124}
!432 = !{i64 6132}
!433 = !{i64 6136}
!434 = !{i64 6144}
!435 = !{i64 6148}
!436 = !{i64 6160}
!437 = !{i64 6168}
!438 = !{i64 6172}
!439 = !{i64 6184}
!440 = !{i64 6204}
!441 = !{i64 6212}
!442 = !{i64 6228}
!443 = !{i64 6232}
!444 = !{i64 6236}
!445 = !{i64 6248}
!446 = !{i64 6252}
!447 = !{i64 6280}
!448 = !{i64 6284}
!449 = !{i64 6288}
!450 = !{i64 6304}
!451 = !{i64 6316}
!452 = !{i64 6320}
!453 = !{i64 6336}
!454 = !{i64 6356}
!455 = !{i64 6364}
!456 = !{i64 6388}
!457 = !{i64 6400}
!458 = !{i64 6412}
!459 = !{i64 6432}
!460 = !{i64 6444}
!461 = !{i64 6448}
!462 = !{i64 6464}
!463 = !{i64 6468}
!464 = !{i64 6472}
!465 = !{i64 6488}
!466 = !{i64 6492}
!467 = !{i64 6496}
!468 = !{i64 6512}
!469 = !{i64 6532}
!470 = !{i64 6552}
!471 = !{i64 6556}
!472 = !{i64 6560}
!473 = !{i64 6576}
!474 = !{i64 6588}
!475 = !{i64 6604}
!476 = !{i64 6616}
!477 = !{i64 6624}
!478 = !{i64 6628}
!479 = !{i64 6644}
!480 = !{i64 6664}
!481 = !{i64 6668}
!482 = !{i64 6672}
!483 = !{i64 6688}
!484 = !{i64 6708}
!485 = !{i64 6712}
!486 = !{i64 6716}
!487 = !{i64 6732}
!488 = !{i64 6748}
!489 = !{i64 6752}
!490 = !{i64 6772}
!491 = !{i64 6780}
!492 = !{i64 6796}
!493 = !{i64 6800}
!494 = !{i64 6812}
!495 = !{i64 6824}
!496 = !{i64 6836}
!497 = !{i64 6860}
!498 = !{i64 6864}
!499 = !{i64 6868}
!500 = !{i64 6872}
!501 = !{i64 6884}
!502 = !{i64 6892}
!503 = !{i64 6896}
!504 = !{i64 6900}
!505 = !{i64 6904}
!506 = !{i64 6932}
!507 = !{i64 6936}
!508 = !{i64 6940}
!509 = !{i64 6952}
!510 = !{i64 6960}
!511 = !{i64 6964}
!512 = !{i64 6976}
!513 = !{i64 6984}
!514 = !{i64 6996}
!515 = !{i64 7008}
!516 = !{i64 7016}
!517 = !{i64 7020}
!518 = !{i64 7048}
!519 = !{i64 7052}
!520 = !{i64 7064}
!521 = !{i64 7072}
!522 = !{i64 7076}
!523 = !{i64 7088}
!524 = !{i64 7116}
!525 = !{i64 7120}
!526 = !{i64 7132}
!527 = !{i64 7140}
!528 = !{i64 7144}
!529 = !{i64 7148}
!530 = !{i64 7152}
!531 = !{i64 7164}
!532 = !{i64 7172}
!533 = !{i64 7180}
!534 = !{i64 7184}
!535 = !{i64 7212}
!536 = !{i64 7216}
!537 = !{i64 7236}
!538 = !{i64 7256}
!539 = !{i64 7268}
!540 = !{i64 7288}
!541 = !{i64 7292}
!542 = !{i64 7308}
!543 = !{i64 7324}
!544 = !{i64 7328}
!545 = !{i64 7344}
!546 = !{i64 7364}
!547 = !{i64 7380}
!548 = !{i64 7400}
!549 = !{i64 7408}
!550 = !{i64 7428}
!551 = !{i64 7456}
!552 = !{i64 7460}
!553 = !{i64 7476}
!554 = !{i64 7488}
!555 = !{i64 7492}
!556 = !{i64 7508}
!557 = !{i64 7520}
!558 = !{i64 7524}
!559 = !{i64 7540}
!560 = !{i64 7544}
!561 = !{i64 7560}
!562 = !{i64 7580}
!563 = !{i64 7588}
!564 = !{i64 7596}
!565 = !{i64 7600}
!566 = !{i64 7616}
!567 = !{i64 7624}
!568 = !{i64 7632}
!569 = !{i64 7644}
!570 = !{i64 7656}
!571 = !{i64 7660}
!572 = !{i64 7672}
!573 = !{i64 7676}
!574 = !{i64 7680}
!575 = !{i64 7684}
!576 = !{i64 7696}
!577 = !{i64 7700}
!578 = !{i64 7704}
!579 = !{i64 7724}
