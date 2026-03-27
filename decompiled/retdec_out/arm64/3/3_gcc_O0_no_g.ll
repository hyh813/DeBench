source_filename = "test"
target datalayout = "e-m:e-i64:64-i128:128-n32:64-S128"

@global_var_13f28 = local_unnamed_addr global i64 2528
@global_var_13f30 = local_unnamed_addr global i64 2528
@global_var_13f38 = local_unnamed_addr global i64 2528
@global_var_13f40 = local_unnamed_addr global i64 2528
@global_var_13f48 = local_unnamed_addr global i64 2528
@global_var_13f50 = local_unnamed_addr global i64 2528
@global_var_13f58 = local_unnamed_addr global i64 2528
@global_var_13f60 = local_unnamed_addr global i64 2528
@global_var_13f68 = local_unnamed_addr global i64 2528
@global_var_13f70 = local_unnamed_addr global i64 2528
@global_var_13f78 = local_unnamed_addr global i64 2528
@global_var_13f80 = local_unnamed_addr global i64 2528
@global_var_13f88 = local_unnamed_addr global i64 2528
@global_var_13f90 = local_unnamed_addr global i64 2528
@global_var_13f98 = local_unnamed_addr global i64 2528
@global_var_13fa0 = local_unnamed_addr global i64 2528
@global_var_13fa8 = local_unnamed_addr global i64 2528
@global_var_13fb0 = local_unnamed_addr global i64 2528
@global_var_13fb8 = local_unnamed_addr global i64 2528
@global_var_13fe8 = local_unnamed_addr global i64 10392
@global_var_14000 = global i64 0
@global_var_14070 = global i64 0
@global_var_13fc8 = local_unnamed_addr global i64 0
@global_var_13ff8 = local_unnamed_addr global i64 0
@global_var_c34 = local_unnamed_addr constant i64 4107778054095372320
@global_var_13fe0 = local_unnamed_addr global i64 0
@global_var_2918 = constant [28 x i8] c"MEM-L1-01 (local_vars): %d\0A\00"
@global_var_11e8 = local_unnamed_addr constant i64 -7493991234554298304
@global_var_2938 = constant [29 x i8] c"MEM-L1-02 (local_array): %d\0A\00"
@global_var_2958 = constant [30 x i8] c"MEM-L1-03 (local_struct): %d\0A\00"
@global_var_2978 = constant [34 x i8] c"MEM-L1-04 (address_of_local): %d\0A\00"
@global_var_29a0 = constant [34 x i8] c"MEM-L1-05 (address_of_array): %d\0A\00"
@global_var_29c8 = constant [35 x i8] c"MEM-L2-01 (large_stack_frame): %d\0A\00"
@global_var_29f0 = constant [27 x i8] c"MEM-L2-02 (vla_stack): %d\0A\00"
@global_var_2a10 = constant [30 x i8] c"MEM-L2-03 (alloca_usage): %d\0A\00"
@global_var_2a30 = constant [29 x i8] c"MEM-L2-04 (stack_alias): %d\0A\00"
@global_var_14c8 = local_unnamed_addr constant i64 1441152035687759904
@global_var_170c = local_unnamed_addr constant i64 1441151928313577504
@global_var_1990 = local_unnamed_addr constant i64 1441151971263250464
@global_var_2a50 = constant [23 x i8] c"value before free: %d\0A\00"
@global_var_1b4c = local_unnamed_addr constant i64 1441151893953839136
@global_var_2a88 = constant [29 x i8] c"HEAP-L2-01 (heap_basic): %d\0A\00"
@global_var_2aa8 = constant [30 x i8] c"HEAP-L2-02 (heap_calloc): %d\0A\00"
@global_var_2ac8 = constant [31 x i8] c"HEAP-L2-03 (heap_realloc): %d\0A\00"
@global_var_2ae8 = constant [29 x i8] c"HEAP-L2-04 (heap_array): %d\0A\00"
@global_var_2b08 = constant [30 x i8] c"HEAP-L2-05 (heap_struct): %d\0A\00"
@global_var_2b28 = constant [30 x i8] c"HEAP-L2-06 (heap_nested): %d\0A\00"
@global_var_2b48 = constant [35 x i8] c"HEAP-L3-01 (linked_list_heap): %d\0A\00"
@global_var_2b70 = constant [38 x i8] c"HEAP-L3-02 (tree_heap_traversal): %d\0A\00"
@global_var_2b98 = constant [30 x i8] c"HEAP-L3-03 (memory_leak): %d\0A\00"
@global_var_2bb8 = constant [32 x i8] c"HEAP-L3-04 (dangling_pointer): \00"
@global_var_140f9 = external global i64
@global_var_2c68 = constant [11 x i8] c"HelloWorld\00"
@global_var_14060 = local_unnamed_addr global [11 x i8]* @global_var_2c68
@global_var_14064 = local_unnamed_addr global i64 98784247808
@global_var_1408e = global i64 0
@global_var_140e8 = global i64 0
@global_var_2ca0 = constant [35 x i8] c"STM-L1-01 (global_var_access): %d\0A\00"
@global_var_2cc8 = constant [33 x i8] c"STM-L1-01 (global_var_read): %d\0A\00"
@global_var_2cf0 = constant [37 x i8] c"STM-L1-02 (global_array_access): %d\0A\00"
@global_var_2204 = local_unnamed_addr constant i64 -7493990727748157408
@global_var_2d18 = constant [30 x i8] c"STM-L1-03 (static_local): %d\0A\00"
@global_var_2d38 = constant [34 x i8] c"STM-L1-04 (call_static_func): %d\0A\00"
@global_var_2d60 = constant [38 x i8] c"STM-L2-01 (access_extern_global): %d\0A\00"
@global_var_2d88 = constant [34 x i8] c"STM-L2-02 (call_extern_func): %d\0A\00"
@global_var_2db0 = constant [33 x i8] c"STM-L2-03 (read_const_data): %d\0A\00"
@global_var_2dd8 = constant [32 x i8] c"STM-L2-04 (access_bss_var): %d\0A\00"
@global_var_2df8 = constant [35 x i8] c"STM-L2-04 (access_bss_buffer): %d\0A\00"
@global_var_2e20 = constant [38 x i8] c"STM-L2-05 (global_struct_access): %d\0A\00"
@global_var_2e48 = constant [29 x i8] c"STM-L2-06 (file_static): %d\0A\00"
@global_var_2e68 = constant [33 x i8] c"STM-L2-07 (global_func_ptr): %d\0A\00"
@global_var_2e90 = constant [35 x i8] c"STM-L2-08 (global_heap_store): %d\0A\00"
@global_var_2eb8 = constant [37 x i8] c"STM-L2-09 (static_complex_init): %d\0A\00"
@global_var_2ee0 = constant [28 x i8] c"STM-L3-01 (tls_access): %d\0A\00"
@global_var_2f00 = constant [33 x i8] c"STM-L3-02 (init_order_test): %d\0A\00"
@global_var_3000 = local_unnamed_addr constant [9 x i8] c"-02: %d\0A\00"
@global_var_3010 = local_unnamed_addr constant i64 85899345930
@global_var_3018 = local_unnamed_addr constant i64 171798691870
@global_var_3020 = local_unnamed_addr constant i64 50
@global_var_2f50 = constant [17 x i8] c"MEMOP-L2-01: %d\0A\00"
@global_var_2f68 = constant [17 x i8] c"MEMOP-L2-02: %d\0A\00"
@global_var_2c6f = local_unnamed_addr constant [4 x i8] c"rld\00"
@global_var_2f80 = constant [17 x i8] c"MEMOP-L2-03: %c\0A\00"
@global_var_3028 = local_unnamed_addr constant i64 8589934593
@global_var_3030 = local_unnamed_addr constant i64 3
@global_var_3038 = local_unnamed_addr constant i64 8589934593
@global_var_2f98 = constant [17 x i8] c"MEMOP-L2-04: %d\0A\00"
@global_var_2fb0 = constant [17 x i8] c"MEMOP-L2-05: %d\0A\00"
@global_var_2fc8 = constant [17 x i8] c"MEMOP-L2-06: %d\0A\00"
@global_var_2fe0 = constant [19 x i8] c"MEMOP-L3-01: 0x%x\0A\00"
@global_var_2ff8 = constant [17 x i8] c"MEMOP-L3-02: %d\0A\00"
@0 = external global i32
@global_var_7ff = global i1 false
@global_var_3e8 = global i1 false
@1 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\88\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_28f8 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @1, i64 0, i64 0)
@2 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\A0\86\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_2a68 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @2, i64 0, i64 0)
@3 = internal constant [16 x i8] c"%d (\E5\AD\90\E8\BF\9B\E7\A8\8B)\0A\00"
@global_var_2bd8 = constant i8* getelementptr inbounds ([16 x i8], [16 x i8]* @3, i64 0, i64 0)
@4 = internal constant [37 x i8] c"\E2\9C\93 \E5\AD\90\E8\BF\9B\E7\A8\8B\E6\AD\A3\E5\B8\B8\E9\80\80\E5\87\BA\EF\BC\8Ccode=%d\0A\00"
@global_var_2be8 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @4, i64 0, i64 0)
@5 = internal constant [65 x i8] c"\E2\9C\97 \E5\AD\90\E8\BF\9B\E7\A8\8B\E8\A2\AB\E4\BF\A1\E5\8F\B7\E7\BB\88\E6\AD\A2 (\E4\BF\A1\E5\8F\B7%d) - \E9\87\8E\E6\8C\87\E9\92\88\E5\AF\BC\E8\87\B4\E5\B4\A9\E6\BA\83\0A\00"
@global_var_2c10 = constant i8* getelementptr inbounds ([65 x i8], [65 x i8]* @5, i64 0, i64 0)
@6 = internal constant [11 x i8] c"fork\E5\A4\B1\E8\B4\A5\00"
@global_var_2c58 = constant i8* getelementptr inbounds ([11 x i8], [11 x i8]* @6, i64 0, i64 0)
@global_var_14078 = local_unnamed_addr global i32* null
@global_var_14079 = global i32 0
@global_var_14010 = global i32* inttoptr (i64 4294967296 to i32*)
@global_var_140f8 = local_unnamed_addr global i32* null
@global_var_1407c = local_unnamed_addr global i32 0
@global_var_14080 = local_unnamed_addr global i32 0
@global_var_14038 = local_unnamed_addr global i32 10
@global_var_1403c = local_unnamed_addr global i32 20
@global_var_14040 = global i32* inttoptr (i64 100 to i32*)
@global_var_140f0 = local_unnamed_addr global i32* null
@global_var_14048 = local_unnamed_addr global i32 1
@global_var_14050 = local_unnamed_addr global i32 5
@global_var_14058 = local_unnamed_addr global i32 9
@global_var_140fc = local_unnamed_addr global i32 0
@7 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\9D\99\E6\80\81\E4\B8\8E\E5\85\A8\E5\B1\80\E5\86\85\E5\AD\98 ===\00"
@global_var_2c78 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @7, i64 0, i64 0)
@8 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C\E5\87\BD\E6\95\B0 ===\00"
@global_var_2f28 = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @8, i64 0, i64 0)

define i64 @_init(i64 %arg1) local_unnamed_addr {
dec_label_pc_9c0:
  %0 = call i64 @call_weak_fn(), !insn.addr !0
  ret i64 %0, !insn.addr !1
}

define i64* @function_a00(i64* %dest, i64* %src, i32 %n) local_unnamed_addr {
dec_label_pc_a00:
  %0 = call i64* @memcpy(i64* %dest, i64* %src, i32 %n), !insn.addr !2
  ret i64* %0, !insn.addr !2
}

define i64* @function_a10(i64* %dest, i64* %src, i32 %n) local_unnamed_addr {
dec_label_pc_a10:
  %0 = call i64* @memmove(i64* %dest, i64* %src, i32 %n), !insn.addr !3
  ret i64* %0, !insn.addr !3
}

define void @function_a20(i32 %status) local_unnamed_addr {
dec_label_pc_a20:
  call void @exit(i32 %status), !insn.addr !4
  ret void, !insn.addr !4
}

define i32 @function_a30(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_a30:
  %0 = call i32 @__libc_start_main(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define void @function_a40(i8* %s) local_unnamed_addr {
dec_label_pc_a40:
  call void @perror(i8* %s), !insn.addr !6
  ret void, !insn.addr !6
}

define void @function_a50(i64* %d) local_unnamed_addr {
dec_label_pc_a50:
  call void @__cxa_finalize(i64* %d), !insn.addr !7
  ret void, !insn.addr !7
}

define i32 @function_a60() local_unnamed_addr {
dec_label_pc_a60:
  %0 = call i32 @fork(), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i64* @function_a70(i32 %size) local_unnamed_addr {
dec_label_pc_a70:
  %0 = call i64* @malloc(i32 %size), !insn.addr !9
  ret i64* %0, !insn.addr !9
}

define i64* @function_a80(i64* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_a80:
  %0 = call i64* @memset(i64* %s, i32 %c, i32 %n), !insn.addr !10
  ret i64* %0, !insn.addr !10
}

define i64* @function_a90(i32 %nmemb, i32 %size) local_unnamed_addr {
dec_label_pc_a90:
  %0 = call i64* @calloc(i32 %nmemb, i32 %size), !insn.addr !11
  ret i64* %0, !insn.addr !11
}

define i64* @function_aa0(i64* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_aa0:
  %0 = call i64* @realloc(i64* %ptr, i32 %size), !insn.addr !12
  ret i64* %0, !insn.addr !12
}

define void @function_ab0() local_unnamed_addr {
dec_label_pc_ab0:
  call void @__stack_chk_fail(), !insn.addr !13
  ret void, !insn.addr !13
}

define void @function_ac0() local_unnamed_addr {
dec_label_pc_ac0:
  call void @__gmon_start__(), !insn.addr !14
  ret void, !insn.addr !14
}

define void @function_ad0() local_unnamed_addr {
dec_label_pc_ad0:
  call void @abort(), !insn.addr !15
  ret void, !insn.addr !15
}

define i32 @function_ae0(i8* %s) local_unnamed_addr {
dec_label_pc_ae0:
  %0 = call i32 @puts(i8* %s), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i32 @function_af0(i64* %s1, i64* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_af0:
  %0 = call i32 @memcmp(i64* %s1, i64* %s2, i32 %n), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define void @function_b00(i64* %ptr) local_unnamed_addr {
dec_label_pc_b00:
  call void @free(i64* %ptr), !insn.addr !18
  ret void, !insn.addr !18
}

define i32 @function_b10(i8* %format, ...) local_unnamed_addr {
dec_label_pc_b10:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @function_b20(i32 %pid, i32* %stat_loc, i32 %options) local_unnamed_addr {
dec_label_pc_b20:
  %0 = call i32 @waitpid(i32 %pid, i32* %stat_loc, i32 %options), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i64 @_start(i64 %arg1) local_unnamed_addr {
dec_label_pc_b40:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_8 = alloca i64, align 8
  %2 = load i64, i64* @global_var_13fe8, align 8, !insn.addr !21
  %3 = trunc i64 %arg1 to i32, !insn.addr !22
  %4 = bitcast i64* %stack_var_8 to i8**, !insn.addr !22
  %5 = inttoptr i64 %1 to void ()*, !insn.addr !22
  %6 = call i32 @__libc_start_main(i64 %2, i32 %3, i8** nonnull %4, void ()* null, void ()* null, void ()* %5), !insn.addr !22
  call void @abort(), !insn.addr !23
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !23
}

define i64 @call_weak_fn() local_unnamed_addr {
dec_label_pc_b74:
  %0 = load i64, i64* inttoptr (i64 81880 to i64*), align 8, !insn.addr !24
  %1 = icmp eq i64 %0, 0, !insn.addr !25
  br i1 %1, label %dec_label_pc_b84, label %dec_label_pc_b80, !insn.addr !25

dec_label_pc_b80:                                 ; preds = %dec_label_pc_b74
  call void @__gmon_start__(), !insn.addr !26
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !26

dec_label_pc_b84:                                 ; preds = %dec_label_pc_b74
  ret i64 0, !insn.addr !27
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_b90:
  ret i64 ptrtoint (i64* @global_var_14070 to i64), !insn.addr !28
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_bc0:
  ret i64 ptrtoint (i64* @global_var_14070 to i64), !insn.addr !29
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_c00:
  %x0.0.reg2mem = alloca i64, !insn.addr !30
  %0 = load i8, i8* bitcast (i64* @global_var_14070 to i8*), align 8, !insn.addr !31
  %1 = zext i8 %0 to i64, !insn.addr !31
  %2 = icmp eq i8 %0, 0, !insn.addr !32
  store i64 %1, i64* %x0.0.reg2mem, !insn.addr !32
  br i1 %2, label %dec_label_pc_c18, label %dec_label_pc_c3c, !insn.addr !32

dec_label_pc_c18:                                 ; preds = %dec_label_pc_c00
  %3 = load i64, i64* inttoptr (i64 81872 to i64*), align 16, !insn.addr !33
  %4 = icmp eq i64 %3, 0, !insn.addr !34
  br i1 %4, label %dec_label_pc_c30, label %dec_label_pc_c24, !insn.addr !34

dec_label_pc_c24:                                 ; preds = %dec_label_pc_c18
  %5 = load i64, i64* inttoptr (i64 add (i64 ptrtoint (i64* @global_var_14000 to i64), i64 8) to i64*), align 8, !insn.addr !35
  %6 = inttoptr i64 %5 to i64*, !insn.addr !36
  call void @__cxa_finalize(i64* %6), !insn.addr !36
  br label %dec_label_pc_c30, !insn.addr !36

dec_label_pc_c30:                                 ; preds = %dec_label_pc_c24, %dec_label_pc_c18
  %7 = call i64 @deregister_tm_clones(), !insn.addr !37
  store i8 1, i8* bitcast (i64* @global_var_14070 to i8*), align 8, !insn.addr !38
  store i64 1, i64* %x0.0.reg2mem, !insn.addr !38
  br label %dec_label_pc_c3c, !insn.addr !38

dec_label_pc_c3c:                                 ; preds = %dec_label_pc_c00, %dec_label_pc_c30
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !39

; uselistorder directives
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_c3c, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_c50:
  %0 = call i64 @register_tm_clones(), !insn.addr !40
  ret i64 %0, !insn.addr !40
}

define i64 @double_value() local_unnamed_addr {
dec_label_pc_c54:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !41
  %3 = and i64 %2, 4294967294, !insn.addr !41
  ret i64 %3, !insn.addr !42
}

define i64 @local_vars() local_unnamed_addr {
dec_label_pc_c6c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !43
  %3 = add i64 %2, 10, !insn.addr !44
  %4 = and i64 %3, 4294967294, !insn.addr !45
  ret i64 %4, !insn.addr !46
}

define i64 @local_array() local_unnamed_addr {
dec_label_pc_ca0:
  %0 = alloca i64
  %1 = alloca i32
  %indvars.iv.reg2mem = alloca i64, !insn.addr !47
  %2 = load i64, i64* %0
  %3 = load i32, i32* %1
  %stack_var_-40 = alloca i64, align 8
  %4 = trunc i64 %2 to i32, !insn.addr !48
  %5 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !49
  %6 = inttoptr i64 %5 to i64*, !insn.addr !50
  %7 = load i64, i64* %6, align 8, !insn.addr !50
  %8 = ptrtoint i64* %stack_var_-40 to i64, !insn.addr !51
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_cc8

dec_label_pc_cc8:                                 ; preds = %dec_label_pc_cc8, %dec_label_pc_ca0
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %9 = trunc i64 %indvars.iv.reload to i32
  %10 = mul i32 %9, %4, !insn.addr !52
  %11 = mul i64 %indvars.iv.reload, 4, !insn.addr !53
  %12 = add i64 %11, %8, !insn.addr !54
  %13 = inttoptr i64 %12 to i32*, !insn.addr !54
  store i32 %10, i32* %13, align 4, !insn.addr !54
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 10
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !55
  br i1 %exitcond, label %dec_label_pc_cfc, label %dec_label_pc_cc8, !insn.addr !55

dec_label_pc_cfc:                                 ; preds = %dec_label_pc_cc8
  %14 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !56
  %15 = inttoptr i64 %14 to i64*, !insn.addr !57
  %16 = load i64, i64* %15, align 8, !insn.addr !57
  %17 = icmp eq i64 %7, %16, !insn.addr !58
  br i1 %17, label %dec_label_pc_d24, label %dec_label_pc_d20, !insn.addr !59

dec_label_pc_d20:                                 ; preds = %dec_label_pc_cfc
  call void @__stack_chk_fail(), !insn.addr !60
  br label %dec_label_pc_d24, !insn.addr !60

dec_label_pc_d24:                                 ; preds = %dec_label_pc_d20, %dec_label_pc_cfc
  %18 = zext i32 %3 to i64, !insn.addr !61
  ret i64 %18, !insn.addr !62

; uselistorder directives
  uselistorder i64 %indvars.iv.reload, { 0, 2, 1 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
}

define i64 @local_struct() local_unnamed_addr {
dec_label_pc_d30:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 3, !insn.addr !63
  %3 = and i64 %2, 4294967295, !insn.addr !63
  ret i64 %3, !insn.addr !64
}

define i64 @address_of_local() local_unnamed_addr {
dec_label_pc_d60:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i32*, !insn.addr !65
  store i32 42, i32* %2, align 4, !insn.addr !65
  ret i64 42, !insn.addr !66
}

define i64 @address_of_array() local_unnamed_addr {
dec_label_pc_d88:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !67
  %3 = and i64 %2, 4294967294, !insn.addr !67
  ret i64 %3, !insn.addr !68
}

define i64 @large_stack_frame() local_unnamed_addr {
dec_label_pc_dbc:
  %0 = alloca i32
  %storemerge2.reg2mem = alloca i32, !insn.addr !69
  %1 = load i32, i32* %0
  %stack_var_-2056 = alloca i64, align 8
  br i1 icmp slt (i32 ptrtoint (i1* @global_var_7ff to i32), i32 0), label %dec_label_pc_e38, label %dec_label_pc_de4.lr.ph, !insn.addr !70

dec_label_pc_de4.lr.ph:                           ; preds = %dec_label_pc_dbc
  %2 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !71
  %3 = inttoptr i64 %2 to i64*
  %4 = load i64, i64* %3, align 8, !insn.addr !72
  %5 = ptrtoint i64* %stack_var_-2056 to i64, !insn.addr !73
  store i32 0, i32* %storemerge2.reg2mem
  br label %dec_label_pc_de4

dec_label_pc_de4:                                 ; preds = %dec_label_pc_de4.lr.ph, %dec_label_pc_de4
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %6 = sext i32 %storemerge2.reload to i64, !insn.addr !74
  %7 = trunc i32 %storemerge2.reload to i8, !insn.addr !75
  %8 = add i64 %6, %5, !insn.addr !75
  %9 = inttoptr i64 %8 to i8*, !insn.addr !75
  store i8 %7, i8* %9, align 1, !insn.addr !75
  %10 = add i32 %storemerge2.reload, 1, !insn.addr !76
  %11 = icmp sgt i32 %10, ptrtoint (i1* @global_var_7ff to i32), !insn.addr !70
  store i32 %10, i32* %storemerge2.reg2mem, !insn.addr !70
  br i1 %11, label %dec_label_pc_e10, label %dec_label_pc_de4, !insn.addr !70

dec_label_pc_e10:                                 ; preds = %dec_label_pc_de4
  %.pre = load i64, i64* @global_var_13fe0, align 8
  %.phi.trans.insert = inttoptr i64 %.pre to i64*
  %.pre3 = load i64, i64* %.phi.trans.insert, align 8
  %12 = icmp eq i64 %4, %.pre3, !insn.addr !77
  br i1 %12, label %dec_label_pc_e38, label %dec_label_pc_e34, !insn.addr !78

dec_label_pc_e34:                                 ; preds = %dec_label_pc_e10
  call void @__stack_chk_fail(), !insn.addr !79
  br label %dec_label_pc_e38, !insn.addr !79

dec_label_pc_e38:                                 ; preds = %dec_label_pc_dbc, %dec_label_pc_e34, %dec_label_pc_e10
  %13 = urem i32 %1, 256
  %14 = zext i32 %13 to i64, !insn.addr !80
  ret i64 %14, !insn.addr !81

; uselistorder directives
  uselistorder i32 %storemerge2.reload, { 0, 2, 1 }
  uselistorder i32* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder i32 ptrtoint (i1* @global_var_7ff to i32), { 1, 0 }
  uselistorder label %dec_label_pc_e38, { 1, 2, 0 }
  uselistorder label %dec_label_pc_de4, { 1, 0 }
}

define i64 @vla_stack(i64 %arg1) local_unnamed_addr {
dec_label_pc_e48:
  %storemerge8.reg2mem = alloca i64, !insn.addr !82
  %storemerge35.reg2mem = alloca i32, !insn.addr !82
  %spsel.1.0.lcssa.reg2mem = alloca i64, !insn.addr !82
  %spsel.1.06.reg2mem = alloca i64, !insn.addr !82
  %stack_var_-72 = alloca i64, align 8
  %0 = trunc i64 %arg1 to i32, !insn.addr !83
  %sext = mul i64 %arg1, 4294967296
  %1 = ashr exact i64 %sext, 32, !insn.addr !83
  %2 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !84
  %3 = inttoptr i64 %2 to i64*
  %4 = load i64, i64* %3, align 8, !insn.addr !85
  %5 = icmp slt i32 %0, 1, !insn.addr !86
  %6 = trunc i64 %1 to i32, !insn.addr !87
  %7 = icmp sgt i32 %6, ptrtoint (i1* @global_var_3e8 to i32), !insn.addr !88
  %or.cond = or i1 %5, %7
  store i64 4294967295, i64* %storemerge8.reg2mem, !insn.addr !86
  br i1 %or.cond, label %dec_label_pc_fbc, label %dec_label_pc_e94, !insn.addr !86

dec_label_pc_e94:                                 ; preds = %dec_label_pc_e48
  %8 = ptrtoint i64* %stack_var_-72 to i64, !insn.addr !89
  %9 = ashr exact i64 %sext, 30, !insn.addr !90
  %10 = add nsw i64 %9, 15, !insn.addr !91
  %11 = and i64 %10, -65536, !insn.addr !92
  %12 = sub i64 %8, %11, !insn.addr !93
  %13 = icmp eq i64 %11, 0, !insn.addr !94
  store i64 %8, i64* %spsel.1.06.reg2mem, !insn.addr !95
  store i64 %8, i64* %spsel.1.0.lcssa.reg2mem, !insn.addr !95
  br i1 %13, label %dec_label_pc_f0c, label %dec_label_pc_f00, !insn.addr !95

dec_label_pc_f00:                                 ; preds = %dec_label_pc_e94, %dec_label_pc_f00
  %spsel.1.06.reload = load i64, i64* %spsel.1.06.reg2mem
  %14 = add i64 %spsel.1.06.reload, -65536, !insn.addr !96
  %15 = add i64 %spsel.1.06.reload, -64512, !insn.addr !97
  %16 = inttoptr i64 %15 to i64*, !insn.addr !97
  store i64 0, i64* %16, align 8, !insn.addr !97
  %17 = icmp eq i64 %14, %12, !insn.addr !94
  store i64 %14, i64* %spsel.1.06.reg2mem, !insn.addr !95
  store i64 %12, i64* %spsel.1.0.lcssa.reg2mem, !insn.addr !95
  br i1 %17, label %dec_label_pc_f0c, label %dec_label_pc_f00, !insn.addr !95

dec_label_pc_f0c:                                 ; preds = %dec_label_pc_f00, %dec_label_pc_e94
  %spsel.1.0.lcssa.reload = load i64, i64* %spsel.1.0.lcssa.reg2mem
  %18 = and i64 %10, 65520, !insn.addr !98
  %19 = sub i64 %spsel.1.0.lcssa.reload, %18, !insn.addr !99
  %20 = inttoptr i64 %19 to i64*, !insn.addr !100
  store i64 0, i64* %20, align 8, !insn.addr !100
  %21 = and i64 %10, 64512, !insn.addr !101
  %22 = icmp eq i64 %21, 0, !insn.addr !102
  br i1 %22, label %dec_label_pc_f28, label %dec_label_pc_f24, !insn.addr !103

dec_label_pc_f24:                                 ; preds = %dec_label_pc_f0c
  %23 = add i64 %19, 1024, !insn.addr !104
  %24 = inttoptr i64 %23 to i64*, !insn.addr !104
  store i64 0, i64* %24, align 8, !insn.addr !104
  br label %dec_label_pc_f28, !insn.addr !104

dec_label_pc_f28:                                 ; preds = %dec_label_pc_f0c, %dec_label_pc_f24
  %25 = add i64 %19, 19, !insn.addr !105
  %26 = and i64 %25, -8, !insn.addr !106
  %27 = and i64 %1, 4294967295, !insn.addr !107
  %28 = icmp eq i64 %27, 0, !insn.addr !108
  store i32 0, i32* %storemerge35.reg2mem, !insn.addr !108
  br i1 %28, label %dec_label_pc_f94, label %dec_label_pc_f44, !insn.addr !108

dec_label_pc_f44:                                 ; preds = %dec_label_pc_f28, %dec_label_pc_f44
  %storemerge35.reload = load i32, i32* %storemerge35.reg2mem
  %29 = mul i32 %storemerge35.reload, 2, !insn.addr !109
  %30 = sext i32 %storemerge35.reload to i64, !insn.addr !110
  %31 = mul i64 %30, 4, !insn.addr !111
  %32 = add i64 %31, %26, !insn.addr !111
  %33 = inttoptr i64 %32 to i32*, !insn.addr !111
  store i32 %29, i32* %33, align 4, !insn.addr !111
  %34 = add i32 %storemerge35.reload, 1, !insn.addr !112
  %35 = zext i32 %34 to i64, !insn.addr !113
  %36 = icmp ugt i64 %27, %35, !insn.addr !108
  store i32 %34, i32* %storemerge35.reg2mem, !insn.addr !108
  br i1 %36, label %dec_label_pc_f44, label %dec_label_pc_f94, !insn.addr !108

dec_label_pc_f94:                                 ; preds = %dec_label_pc_f44, %dec_label_pc_f28
  %37 = icmp slt i64 %sext, 0
  %38 = zext i1 %37 to i32
  %39 = add i32 %38, %6, !insn.addr !114
  %40 = ashr i32 %39, 1, !insn.addr !115
  %41 = sext i32 %40 to i64, !insn.addr !116
  %42 = mul i64 %41, 4, !insn.addr !117
  %43 = add i64 %26, %42, !insn.addr !117
  %44 = inttoptr i64 %43 to i32*, !insn.addr !117
  %45 = load i32, i32* %44, align 4, !insn.addr !117
  %46 = zext i32 %45 to i64, !insn.addr !117
  %.pre = load i64, i64* @global_var_13fe0, align 8
  %.phi.trans.insert = inttoptr i64 %.pre to i64*
  %.pre7 = load i64, i64* %.phi.trans.insert, align 8
  %47 = icmp eq i64 %4, %.pre7, !insn.addr !118
  store i64 %46, i64* %storemerge8.reg2mem, !insn.addr !119
  br i1 %47, label %dec_label_pc_fbc, label %dec_label_pc_fb8, !insn.addr !119

dec_label_pc_fb8:                                 ; preds = %dec_label_pc_f94
  call void @__stack_chk_fail(), !insn.addr !120
  store i64 %46, i64* %storemerge8.reg2mem, !insn.addr !120
  br label %dec_label_pc_fbc, !insn.addr !120

dec_label_pc_fbc:                                 ; preds = %dec_label_pc_e48, %dec_label_pc_fb8, %dec_label_pc_f94
  %storemerge8.reload = load i64, i64* %storemerge8.reg2mem
  ret i64 %storemerge8.reload, !insn.addr !121

; uselistorder directives
  uselistorder i64 %46, { 1, 0 }
  uselistorder i64 %27, { 1, 0 }
  uselistorder i64 %19, { 1, 0, 2 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64 %sext, { 2, 1, 0 }
  uselistorder i64* %spsel.1.06.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge35.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge8.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_fbc, { 1, 2, 0 }
  uselistorder label %dec_label_pc_f44, { 1, 0 }
  uselistorder label %dec_label_pc_f28, { 1, 0 }
  uselistorder label %dec_label_pc_f00, { 1, 0 }
}

define i64 @alloca_usage(i64 %arg1) local_unnamed_addr {
dec_label_pc_fcc:
  %storemerge7.reg2mem = alloca i64, !insn.addr !122
  %storemerge34.reg2mem = alloca i32, !insn.addr !122
  %spsel.1.0.lcssa.reg2mem = alloca i64, !insn.addr !122
  %spsel.1.05.reg2mem = alloca i64, !insn.addr !122
  %stack_var_-72 = alloca i64, align 8
  %0 = trunc i64 %arg1 to i32, !insn.addr !123
  %1 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !124
  %2 = inttoptr i64 %1 to i64*
  %3 = load i64, i64* %2, align 8, !insn.addr !125
  %4 = icmp sgt i32 %0, 0, !insn.addr !126
  store i64 4294967295, i64* %storemerge7.reg2mem, !insn.addr !126
  br i1 %4, label %dec_label_pc_1004, label %dec_label_pc_10f4, !insn.addr !126

dec_label_pc_1004:                                ; preds = %dec_label_pc_fcc
  %5 = ptrtoint i64* %stack_var_-72 to i64, !insn.addr !127
  %sext = mul i64 %arg1, 4294967296
  %6 = ashr exact i64 %sext, 30, !insn.addr !128
  %7 = add nsw i64 %6, 15, !insn.addr !129
  %8 = and i64 %7, -65536, !insn.addr !130
  %9 = sub i64 %5, %8, !insn.addr !131
  %10 = icmp eq i64 %8, 0, !insn.addr !132
  store i64 %5, i64* %spsel.1.05.reg2mem, !insn.addr !133
  store i64 %5, i64* %spsel.1.0.lcssa.reg2mem, !insn.addr !133
  br i1 %10, label %dec_label_pc_1034, label %dec_label_pc_1028, !insn.addr !133

dec_label_pc_1028:                                ; preds = %dec_label_pc_1004, %dec_label_pc_1028
  %spsel.1.05.reload = load i64, i64* %spsel.1.05.reg2mem
  %11 = add i64 %spsel.1.05.reload, -65536, !insn.addr !134
  %12 = add i64 %spsel.1.05.reload, -64512, !insn.addr !135
  %13 = inttoptr i64 %12 to i64*, !insn.addr !135
  store i64 0, i64* %13, align 8, !insn.addr !135
  %14 = icmp eq i64 %11, %9, !insn.addr !132
  store i64 %11, i64* %spsel.1.05.reg2mem, !insn.addr !133
  store i64 %9, i64* %spsel.1.0.lcssa.reg2mem, !insn.addr !133
  br i1 %14, label %dec_label_pc_1034, label %dec_label_pc_1028, !insn.addr !133

dec_label_pc_1034:                                ; preds = %dec_label_pc_1028, %dec_label_pc_1004
  %spsel.1.0.lcssa.reload = load i64, i64* %spsel.1.0.lcssa.reg2mem
  %15 = and i64 %7, 65520, !insn.addr !136
  %16 = sub i64 %spsel.1.0.lcssa.reload, %15, !insn.addr !137
  %17 = inttoptr i64 %16 to i64*, !insn.addr !138
  store i64 0, i64* %17, align 8, !insn.addr !138
  %18 = and i64 %7, 64512, !insn.addr !139
  %19 = icmp eq i64 %18, 0, !insn.addr !140
  br i1 %19, label %dec_label_pc_1050, label %dec_label_pc_104c, !insn.addr !141

dec_label_pc_104c:                                ; preds = %dec_label_pc_1034
  %20 = add i64 %16, 1024, !insn.addr !142
  %21 = inttoptr i64 %20 to i64*, !insn.addr !142
  store i64 0, i64* %21, align 8, !insn.addr !142
  br label %dec_label_pc_1050, !insn.addr !142

dec_label_pc_1050:                                ; preds = %dec_label_pc_1034, %dec_label_pc_104c
  %22 = ashr exact i64 %sext, 32, !insn.addr !123
  %23 = add i64 %16, 31, !insn.addr !143
  %24 = and i64 %23, -16, !insn.addr !144
  %25 = and i64 %22, 4294967295, !insn.addr !145
  %26 = icmp eq i64 %25, 0, !insn.addr !146
  store i32 0, i32* %storemerge34.reg2mem, !insn.addr !146
  br i1 %26, label %dec_label_pc_10d0, label %dec_label_pc_106c, !insn.addr !146

dec_label_pc_106c:                                ; preds = %dec_label_pc_1050, %dec_label_pc_106c
  %storemerge34.reload = load i32, i32* %storemerge34.reg2mem
  %27 = sext i32 %storemerge34.reload to i64, !insn.addr !147
  %28 = mul i64 %27, 4, !insn.addr !148
  %29 = add i64 %28, %24, !insn.addr !149
  %30 = mul i32 %storemerge34.reload, 3, !insn.addr !150
  %31 = inttoptr i64 %29 to i32*, !insn.addr !151
  store i32 %30, i32* %31, align 4, !insn.addr !151
  %32 = add i32 %storemerge34.reload, 1, !insn.addr !152
  %33 = zext i32 %32 to i64, !insn.addr !153
  %34 = icmp ugt i64 %25, %33, !insn.addr !146
  store i32 %32, i32* %storemerge34.reg2mem, !insn.addr !146
  br i1 %34, label %dec_label_pc_106c, label %dec_label_pc_10d0, !insn.addr !146

dec_label_pc_10d0:                                ; preds = %dec_label_pc_106c, %dec_label_pc_1050
  %35 = trunc i64 %22 to i32, !insn.addr !154
  %36 = icmp slt i64 %sext, 0
  %37 = zext i1 %36 to i32
  %38 = add i32 %37, %35, !insn.addr !155
  %39 = ashr i32 %38, 1, !insn.addr !156
  %40 = sext i32 %39 to i64, !insn.addr !157
  %41 = mul i64 %40, 4, !insn.addr !158
  %42 = add i64 %24, %41, !insn.addr !159
  %43 = inttoptr i64 %42 to i32*, !insn.addr !160
  %44 = load i32, i32* %43, align 4, !insn.addr !160
  %45 = zext i32 %44 to i64, !insn.addr !160
  %.pre = load i64, i64* @global_var_13fe0, align 8
  %.phi.trans.insert = inttoptr i64 %.pre to i64*
  %.pre6 = load i64, i64* %.phi.trans.insert, align 8
  %46 = icmp eq i64 %3, %.pre6, !insn.addr !161
  store i64 %45, i64* %storemerge7.reg2mem, !insn.addr !162
  br i1 %46, label %dec_label_pc_10f4, label %dec_label_pc_10f0, !insn.addr !162

dec_label_pc_10f0:                                ; preds = %dec_label_pc_10d0
  call void @__stack_chk_fail(), !insn.addr !163
  store i64 %45, i64* %storemerge7.reg2mem, !insn.addr !163
  br label %dec_label_pc_10f4, !insn.addr !163

dec_label_pc_10f4:                                ; preds = %dec_label_pc_fcc, %dec_label_pc_10f0, %dec_label_pc_10d0
  %storemerge7.reload = load i64, i64* %storemerge7.reg2mem
  ret i64 %storemerge7.reload, !insn.addr !164

; uselistorder directives
  uselistorder i64 %45, { 1, 0 }
  uselistorder i32 %storemerge34.reload, { 0, 2, 1 }
  uselistorder i64 %25, { 1, 0 }
  uselistorder i64 %22, { 1, 0 }
  uselistorder i64 %16, { 1, 0, 2 }
  uselistorder i64 %sext, { 2, 0, 1 }
  uselistorder i64* %spsel.1.05.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge34.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge7.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_10f4, { 1, 2, 0 }
  uselistorder label %dec_label_pc_106c, { 1, 0 }
  uselistorder label %dec_label_pc_1050, { 1, 0 }
  uselistorder label %dec_label_pc_1028, { 1, 0 }
}

define i64 @stack_alias() local_unnamed_addr {
dec_label_pc_119c:
  ret i64 20, !insn.addr !165
}

define i64 @test_stack_memory() local_unnamed_addr {
dec_label_pc_11a8:
  %x0.0.reg2mem = alloca i64, !insn.addr !166
  %0 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !167
  %1 = inttoptr i64 %0 to i64*, !insn.addr !168
  %2 = load i64, i64* %1, align 8, !insn.addr !168
  %3 = call i32 @puts(i8* bitcast (i8** @global_var_28f8 to i8*)), !insn.addr !169
  %4 = call i64 @local_vars(), !insn.addr !170
  %5 = and i64 %4, 4294967295, !insn.addr !171
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_2918, i64 0, i64 0), i64 %5), !insn.addr !172
  %7 = call i64 @local_array(), !insn.addr !173
  %8 = and i64 %7, 4294967295, !insn.addr !174
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2938, i64 0, i64 0), i64 %8), !insn.addr !175
  %10 = call i64 @local_struct(), !insn.addr !176
  %11 = and i64 %10, 4294967295, !insn.addr !177
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2958, i64 0, i64 0), i64 %11), !insn.addr !178
  %13 = call i64 @address_of_local(), !insn.addr !179
  %14 = and i64 %13, 4294967295, !insn.addr !180
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_2978, i64 0, i64 0), i64 %14), !insn.addr !181
  %16 = call i64 @address_of_array(), !insn.addr !182
  %17 = and i64 %16, 4294967295, !insn.addr !183
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_29a0, i64 0, i64 0), i64 %17), !insn.addr !184
  %19 = call i64 @large_stack_frame(), !insn.addr !185
  %20 = and i64 %19, 4294967295, !insn.addr !186
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_29c8, i64 0, i64 0), i64 %20), !insn.addr !187
  %22 = call i64 @vla_stack(i64 10), !insn.addr !188
  %23 = and i64 %22, 4294967295, !insn.addr !189
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_29f0, i64 0, i64 0), i64 %23), !insn.addr !190
  %25 = call i64 @alloca_usage(i64 10), !insn.addr !191
  %26 = and i64 %25, 4294967295, !insn.addr !192
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2a10, i64 0, i64 0), i64 %26), !insn.addr !193
  %28 = call i64 @stack_alias(), !insn.addr !194
  %29 = and i64 %28, 4294967295, !insn.addr !195
  %30 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2a30, i64 0, i64 0), i64 %29), !insn.addr !196
  %31 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !197
  %32 = inttoptr i64 %31 to i64*, !insn.addr !198
  %33 = load i64, i64* %32, align 8, !insn.addr !198
  %34 = icmp eq i64 %2, %33, !insn.addr !199
  store i64 %31, i64* %x0.0.reg2mem, !insn.addr !200
  br i1 %34, label %dec_label_pc_12f4, label %dec_label_pc_12f0, !insn.addr !200

dec_label_pc_12f0:                                ; preds = %dec_label_pc_11a8
  call void @__stack_chk_fail(), !insn.addr !201
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.0.reg2mem, !insn.addr !201
  br label %dec_label_pc_12f4, !insn.addr !201

dec_label_pc_12f4:                                ; preds = %dec_label_pc_12f0, %dec_label_pc_11a8
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !202
}

define i64 @heap_basic() local_unnamed_addr {
dec_label_pc_12fc:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !203
  %storemerge12.reg2mem = alloca i32, !insn.addr !203
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !204
  %3 = mul i32 %2, 4, !insn.addr !205
  %4 = call i64* @malloc(i32 %3), !insn.addr !205
  %5 = icmp eq i64* %4, null, !insn.addr !206
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !207
  br i1 %5, label %dec_label_pc_13a0, label %dec_label_pc_135c.preheader, !insn.addr !207

dec_label_pc_135c.preheader:                      ; preds = %dec_label_pc_12fc
  %6 = ptrtoint i64* %4 to i64, !insn.addr !205
  %7 = icmp eq i32 %2, 0, !insn.addr !208
  store i32 0, i32* %storemerge12.reg2mem, !insn.addr !208
  br i1 %7, label %dec_label_pc_136c, label %dec_label_pc_1334, !insn.addr !208

dec_label_pc_1334:                                ; preds = %dec_label_pc_135c.preheader, %dec_label_pc_1334
  %storemerge12.reload = load i32, i32* %storemerge12.reg2mem
  %8 = sext i32 %storemerge12.reload to i64, !insn.addr !209
  %9 = mul i64 %8, 4, !insn.addr !210
  %10 = add i64 %9, %6, !insn.addr !211
  %11 = mul i32 %storemerge12.reload, 2, !insn.addr !212
  %12 = inttoptr i64 %10 to i32*, !insn.addr !213
  store i32 %11, i32* %12, align 4, !insn.addr !213
  %13 = add nuw i32 %storemerge12.reload, 1, !insn.addr !214
  %exitcond = icmp eq i32 %13, %2
  store i32 %13, i32* %storemerge12.reg2mem, !insn.addr !208
  br i1 %exitcond, label %dec_label_pc_136c, label %dec_label_pc_1334, !insn.addr !208

dec_label_pc_136c:                                ; preds = %dec_label_pc_1334, %dec_label_pc_135c.preheader
  %14 = icmp slt i32 %2, 0
  %15 = zext i1 %14 to i32, !insn.addr !215
  %16 = add i32 %15, %2, !insn.addr !216
  %17 = ashr i32 %16, 1, !insn.addr !217
  %18 = sext i32 %17 to i64, !insn.addr !218
  %19 = mul i64 %18, 4, !insn.addr !219
  %20 = add i64 %19, %6, !insn.addr !220
  %21 = inttoptr i64 %20 to i32*, !insn.addr !221
  %22 = load i32, i32* %21, align 4, !insn.addr !221
  call void @free(i64* nonnull %4), !insn.addr !222
  %23 = zext i32 %22 to i64, !insn.addr !223
  store i64 %23, i64* %storemerge.reg2mem, !insn.addr !223
  br label %dec_label_pc_13a0, !insn.addr !223

dec_label_pc_13a0:                                ; preds = %dec_label_pc_12fc, %dec_label_pc_136c
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !224

; uselistorder directives
  uselistorder i32 %storemerge12.reload, { 0, 2, 1 }
  uselistorder i64 %6, { 1, 0 }
  uselistorder i64* %4, { 0, 2, 1 }
  uselistorder i32 %2, { 2, 1, 3, 4, 0 }
  uselistorder i32* %storemerge12.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_13a0, { 1, 0 }
  uselistorder label %dec_label_pc_1334, { 1, 0 }
}

define i64 @heap_calloc() local_unnamed_addr {
dec_label_pc_13a8:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !225
  %stack_var_-8.0.lcssa.reg2mem = alloca i64, !insn.addr !225
  %stack_var_-8.02.reg2mem = alloca i32, !insn.addr !225
  %storemerge13.reg2mem = alloca i32, !insn.addr !225
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !226
  %3 = call i64* @calloc(i32 %2, i32 4), !insn.addr !227
  %4 = icmp eq i64* %3, null, !insn.addr !228
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !229
  br i1 %4, label %dec_label_pc_142c, label %dec_label_pc_1410.preheader, !insn.addr !229

dec_label_pc_1410.preheader:                      ; preds = %dec_label_pc_13a8
  %5 = ptrtoint i64* %3 to i64, !insn.addr !227
  %6 = icmp eq i32 %2, 0, !insn.addr !230
  store i32 0, i32* %storemerge13.reg2mem, !insn.addr !230
  store i32 0, i32* %stack_var_-8.02.reg2mem, !insn.addr !230
  store i64 0, i64* %stack_var_-8.0.lcssa.reg2mem, !insn.addr !230
  br i1 %6, label %dec_label_pc_1420, label %dec_label_pc_13e4, !insn.addr !230

dec_label_pc_13e4:                                ; preds = %dec_label_pc_1410.preheader, %dec_label_pc_13e4
  %stack_var_-8.02.reload = load i32, i32* %stack_var_-8.02.reg2mem
  %storemerge13.reload = load i32, i32* %storemerge13.reg2mem
  %7 = sext i32 %storemerge13.reload to i64, !insn.addr !231
  %8 = mul i64 %7, 4, !insn.addr !232
  %9 = add i64 %8, %5, !insn.addr !233
  %10 = inttoptr i64 %9 to i32*, !insn.addr !234
  %11 = load i32, i32* %10, align 4, !insn.addr !234
  %12 = add i32 %11, %stack_var_-8.02.reload, !insn.addr !235
  %13 = add nuw i32 %storemerge13.reload, 1, !insn.addr !236
  %exitcond = icmp eq i32 %13, %2
  store i32 %13, i32* %storemerge13.reg2mem, !insn.addr !230
  store i32 %12, i32* %stack_var_-8.02.reg2mem, !insn.addr !230
  br i1 %exitcond, label %dec_label_pc_1410.dec_label_pc_1420_crit_edge, label %dec_label_pc_13e4, !insn.addr !230

dec_label_pc_1410.dec_label_pc_1420_crit_edge:    ; preds = %dec_label_pc_13e4
  %phitmp = zext i32 %12 to i64
  store i64 %phitmp, i64* %stack_var_-8.0.lcssa.reg2mem
  br label %dec_label_pc_1420

dec_label_pc_1420:                                ; preds = %dec_label_pc_1410.preheader, %dec_label_pc_1410.dec_label_pc_1420_crit_edge
  %stack_var_-8.0.lcssa.reload = load i64, i64* %stack_var_-8.0.lcssa.reg2mem
  call void @free(i64* nonnull %3), !insn.addr !237
  store i64 %stack_var_-8.0.lcssa.reload, i64* %storemerge.reg2mem, !insn.addr !238
  br label %dec_label_pc_142c, !insn.addr !238

dec_label_pc_142c:                                ; preds = %dec_label_pc_13a8, %dec_label_pc_1420
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !239

; uselistorder directives
  uselistorder i32 %12, { 1, 0 }
  uselistorder i64* %3, { 0, 2, 1 }
  uselistorder i32* %storemerge13.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-8.02.reg2mem, { 2, 0, 1 }
  uselistorder i64* %stack_var_-8.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_142c, { 1, 0 }
  uselistorder label %dec_label_pc_1420, { 1, 0 }
  uselistorder label %dec_label_pc_13e4, { 1, 0 }
}

define i64 @heap_realloc() local_unnamed_addr {
dec_label_pc_1434:
  %x0.0.reg2mem = alloca i64, !insn.addr !240
  %storemerge.reg2mem = alloca i64, !insn.addr !240
  %indvars.iv.reg2mem = alloca i64, !insn.addr !240
  %indvars.iv5.reg2mem = alloca i64, !insn.addr !240
  %0 = call i64* @malloc(i32 20), !insn.addr !241
  %1 = ptrtoint i64* %0 to i64, !insn.addr !241
  %2 = icmp eq i64* %0, null, !insn.addr !242
  store i64 0, i64* %indvars.iv5.reg2mem, !insn.addr !243
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !243
  br i1 %2, label %dec_label_pc_155c, label %dec_label_pc_1464, !insn.addr !243

dec_label_pc_1464:                                ; preds = %dec_label_pc_1434, %dec_label_pc_1464
  %indvars.iv5.reload = load i64, i64* %indvars.iv5.reg2mem
  %3 = mul i64 %indvars.iv5.reload, 4, !insn.addr !244
  %4 = add i64 %3, %1, !insn.addr !245
  %indvars.iv.next6 = add nuw nsw i64 %indvars.iv5.reload, 1
  %5 = inttoptr i64 %4 to i32*, !insn.addr !246
  %6 = trunc i64 %indvars.iv.next6 to i32
  store i32 %6, i32* %5, align 4, !insn.addr !246
  %exitcond7 = icmp eq i64 %indvars.iv.next6, 5
  store i64 %indvars.iv.next6, i64* %indvars.iv5.reg2mem, !insn.addr !247
  br i1 %exitcond7, label %dec_label_pc_1498, label %dec_label_pc_1464, !insn.addr !247

dec_label_pc_1498:                                ; preds = %dec_label_pc_1464
  %7 = add i64 %1, 8, !insn.addr !248
  %8 = inttoptr i64 %7 to i32*, !insn.addr !248
  %9 = load i32, i32* %8, align 4, !insn.addr !248
  %10 = call i64* @realloc(i64* nonnull %0, i32 40), !insn.addr !249
  %11 = ptrtoint i64* %10 to i64, !insn.addr !249
  %12 = icmp eq i64* %10, null, !insn.addr !250
  store i64 5, i64* %indvars.iv.reg2mem, !insn.addr !251
  br i1 %12, label %dec_label_pc_14c0, label %dec_label_pc_14e4, !insn.addr !251

dec_label_pc_14c0:                                ; preds = %dec_label_pc_1498
  call void @free(i64* nonnull %0), !insn.addr !252
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !253
  br label %dec_label_pc_155c, !insn.addr !253

dec_label_pc_14e4:                                ; preds = %dec_label_pc_1498, %dec_label_pc_14e4
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %13 = mul i64 %indvars.iv.reload, 4, !insn.addr !254
  %14 = add i64 %13, %11, !insn.addr !255
  %15 = inttoptr i64 %14 to i32*, !insn.addr !256
  %16 = trunc i64 %indvars.iv.reload to i32
  %17 = mul i32 %16, 10
  store i32 %17, i32* %15, align 4, !insn.addr !256
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 10
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !257
  br i1 %exitcond, label %dec_label_pc_1524, label %dec_label_pc_14e4, !insn.addr !257

dec_label_pc_1524:                                ; preds = %dec_label_pc_14e4
  %18 = add i64 %11, 8, !insn.addr !258
  %19 = inttoptr i64 %18 to i32*, !insn.addr !259
  %20 = load i32, i32* %19, align 4, !insn.addr !259
  %21 = icmp eq i32 %9, %20, !insn.addr !260
  store i64 4294967293, i64* %storemerge.reg2mem, !insn.addr !260
  br i1 %21, label %dec_label_pc_153c, label %dec_label_pc_154c, !insn.addr !260

dec_label_pc_153c:                                ; preds = %dec_label_pc_1524
  %22 = add i64 %11, 20, !insn.addr !261
  %23 = inttoptr i64 %22 to i32*, !insn.addr !261
  %24 = load i32, i32* %23, align 4, !insn.addr !261
  %25 = zext i32 %24 to i64, !insn.addr !261
  store i64 %25, i64* %storemerge.reg2mem, !insn.addr !262
  br label %dec_label_pc_154c, !insn.addr !262

dec_label_pc_154c:                                ; preds = %dec_label_pc_1524, %dec_label_pc_153c
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  call void @free(i64* nonnull %10), !insn.addr !263
  store i64 %storemerge.reload, i64* %x0.0.reg2mem, !insn.addr !264
  br label %dec_label_pc_155c, !insn.addr !264

dec_label_pc_155c:                                ; preds = %dec_label_pc_1434, %dec_label_pc_154c, %dec_label_pc_14c0
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !265

; uselistorder directives
  uselistorder i64 %11, { 2, 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %indvars.iv5.reg2mem, { 2, 0, 1 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i64 20, { 1, 0 }
  uselistorder i64 10, { 0, 3, 4, 1, 2 }
  uselistorder label %dec_label_pc_155c, { 1, 2, 0 }
  uselistorder label %dec_label_pc_154c, { 1, 0 }
  uselistorder label %dec_label_pc_14e4, { 1, 0 }
  uselistorder label %dec_label_pc_1464, { 1, 0 }
}

define i64 @heap_array() local_unnamed_addr {
dec_label_pc_1564:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !266
  %storemerge12.reg2mem = alloca i32, !insn.addr !266
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !267
  %3 = mul i32 %2, 4, !insn.addr !268
  %4 = call i64* @malloc(i32 %3), !insn.addr !268
  %5 = icmp eq i64* %4, null, !insn.addr !269
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !270
  br i1 %5, label %dec_label_pc_1610, label %dec_label_pc_15cc.preheader, !insn.addr !270

dec_label_pc_15cc.preheader:                      ; preds = %dec_label_pc_1564
  %6 = ptrtoint i64* %4 to i64, !insn.addr !268
  %7 = icmp eq i32 %2, 0, !insn.addr !271
  store i32 0, i32* %storemerge12.reg2mem, !insn.addr !271
  br i1 %7, label %dec_label_pc_15dc, label %dec_label_pc_159c, !insn.addr !271

dec_label_pc_159c:                                ; preds = %dec_label_pc_15cc.preheader, %dec_label_pc_159c
  %storemerge12.reload = load i32, i32* %storemerge12.reg2mem
  %8 = sext i32 %storemerge12.reload to i64, !insn.addr !272
  %9 = mul i64 %8, 4, !insn.addr !273
  %10 = add i64 %9, %6, !insn.addr !274
  %11 = mul i32 %storemerge12.reload, 3, !insn.addr !275
  %12 = inttoptr i64 %10 to i32*, !insn.addr !276
  store i32 %11, i32* %12, align 4, !insn.addr !276
  %13 = add nuw i32 %storemerge12.reload, 1, !insn.addr !277
  %exitcond = icmp eq i32 %13, %2
  store i32 %13, i32* %storemerge12.reg2mem, !insn.addr !271
  br i1 %exitcond, label %dec_label_pc_15dc, label %dec_label_pc_159c, !insn.addr !271

dec_label_pc_15dc:                                ; preds = %dec_label_pc_159c, %dec_label_pc_15cc.preheader
  %14 = icmp slt i32 %2, 0
  %15 = zext i1 %14 to i32, !insn.addr !278
  %16 = add i32 %15, %2, !insn.addr !279
  %17 = ashr i32 %16, 1, !insn.addr !280
  %18 = sext i32 %17 to i64, !insn.addr !281
  %19 = mul i64 %18, 4, !insn.addr !282
  %20 = add i64 %19, %6, !insn.addr !283
  %21 = inttoptr i64 %20 to i32*, !insn.addr !284
  %22 = load i32, i32* %21, align 4, !insn.addr !284
  call void @free(i64* nonnull %4), !insn.addr !285
  %23 = zext i32 %22 to i64, !insn.addr !286
  store i64 %23, i64* %storemerge.reg2mem, !insn.addr !286
  br label %dec_label_pc_1610, !insn.addr !286

dec_label_pc_1610:                                ; preds = %dec_label_pc_1564, %dec_label_pc_15dc
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !287

; uselistorder directives
  uselistorder i32 %storemerge12.reload, { 0, 2, 1 }
  uselistorder i64 %6, { 1, 0 }
  uselistorder i64* %4, { 0, 2, 1 }
  uselistorder i32 %2, { 2, 1, 3, 4, 0 }
  uselistorder i32* %storemerge12.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1610, { 1, 0 }
  uselistorder label %dec_label_pc_159c, { 1, 0 }
}

define i64 @heap_struct() local_unnamed_addr {
dec_label_pc_1618:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !288
  %1 = load i64, i64* %0
  %2 = call i64* @malloc(i32 8), !insn.addr !289
  %3 = icmp eq i64* %2, null, !insn.addr !290
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !291
  br i1 %3, label %dec_label_pc_1684, label %dec_label_pc_1644, !insn.addr !291

dec_label_pc_1644:                                ; preds = %dec_label_pc_1618
  %4 = trunc i64 %1 to i32, !insn.addr !292
  %5 = ptrtoint i64* %2 to i64, !insn.addr !289
  %6 = bitcast i64* %2 to i32*, !insn.addr !293
  store i32 %4, i32* %6, align 4, !insn.addr !293
  %7 = mul i32 %4, 2, !insn.addr !294
  %8 = add i64 %5, 4, !insn.addr !295
  %9 = inttoptr i64 %8 to i32*, !insn.addr !295
  store i32 %7, i32* %9, align 4, !insn.addr !295
  %10 = load i32, i32* %6, align 4, !insn.addr !296
  %11 = add i32 %10, %7, !insn.addr !297
  call void @free(i64* nonnull %2), !insn.addr !298
  %12 = zext i32 %11 to i64, !insn.addr !299
  store i64 %12, i64* %storemerge.reg2mem, !insn.addr !299
  br label %dec_label_pc_1684, !insn.addr !299

dec_label_pc_1684:                                ; preds = %dec_label_pc_1618, %dec_label_pc_1644
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !300

; uselistorder directives
  uselistorder i32 %7, { 1, 0 }
  uselistorder i64* %2, { 0, 1, 3, 2 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1684, { 1, 0 }
}

define i64 @heap_nested() local_unnamed_addr {
dec_label_pc_168c:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !301
  %1 = load i64, i64* %0
  %2 = call i64* @malloc(i32 16), !insn.addr !302
  %3 = ptrtoint i64* %2 to i64, !insn.addr !302
  %4 = inttoptr i64 %1 to i64*, !insn.addr !303
  store i64 %3, i64* %4, align 8, !insn.addr !303
  %5 = icmp eq i64 %1, 0, !insn.addr !304
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !305
  br i1 %5, label %dec_label_pc_173c, label %dec_label_pc_16c8, !insn.addr !305

dec_label_pc_16c8:                                ; preds = %dec_label_pc_168c
  %6 = inttoptr i64 %1 to i32*, !insn.addr !306
  store i32 10, i32* %6, align 4, !insn.addr !306
  %7 = call i64* @malloc(i32 16), !insn.addr !307
  %8 = ptrtoint i64* %7 to i64, !insn.addr !307
  %9 = add i64 %1, 8, !insn.addr !308
  %10 = inttoptr i64 %9 to i64*, !insn.addr !308
  store i64 %8, i64* %10, align 8, !insn.addr !308
  %11 = icmp eq i64* %7, null, !insn.addr !309
  br i1 %11, label %dec_label_pc_1700, label %dec_label_pc_1714, !insn.addr !310

dec_label_pc_1700:                                ; preds = %dec_label_pc_16c8
  call void @free(i64* %4), !insn.addr !311
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !312
  br label %dec_label_pc_173c, !insn.addr !312

dec_label_pc_1714:                                ; preds = %dec_label_pc_16c8
  %12 = bitcast i64* %7 to i32*, !insn.addr !313
  store i32 20, i32* %12, align 4, !insn.addr !313
  %13 = load i64, i64* %10, align 8, !insn.addr !314
  %14 = add i64 %13, 8, !insn.addr !315
  %15 = inttoptr i64 %14 to i64*, !insn.addr !315
  store i64 0, i64* %15, align 8, !insn.addr !315
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !316
  br label %dec_label_pc_173c, !insn.addr !316

dec_label_pc_173c:                                ; preds = %dec_label_pc_168c, %dec_label_pc_1714, %dec_label_pc_1700
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !317

; uselistorder directives
  uselistorder i64 %1, { 3, 2, 0, 1 }
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder label %dec_label_pc_173c, { 1, 2, 0 }
}

define i64 @linked_list_heap() local_unnamed_addr {
dec_label_pc_1748:
  %storemerge2.reg2mem = alloca i64, !insn.addr !318
  %stack_var_-40.37.reg2mem = alloca i64, !insn.addr !318
  %stack_var_-44.08.reg2mem = alloca i32, !insn.addr !318
  %storemerge.in9.reg2mem = alloca i64, !insn.addr !318
  %stack_var_-40.1.reg2mem = alloca i64, !insn.addr !318
  %stack_var_-40.06.reg2mem = alloca i64, !insn.addr !318
  %stack_var_-40.210.reg2mem = alloca i64, !insn.addr !318
  %stack_var_-32.011.reg2mem = alloca i64, !insn.addr !318
  %storemerge312.reg2mem = alloca i32, !insn.addr !318
  store i32 0, i32* %storemerge312.reg2mem
  store i64 0, i64* %stack_var_-32.011.reg2mem
  store i64 0, i64* %stack_var_-40.210.reg2mem
  br label %dec_label_pc_1760

dec_label_pc_1760:                                ; preds = %dec_label_pc_1748, %dec_label_pc_1808
  %stack_var_-40.210.reload = load i64, i64* %stack_var_-40.210.reg2mem
  %0 = call i64* @malloc(i32 16), !insn.addr !319
  %1 = icmp eq i64* %0, null, !insn.addr !320
  br i1 %1, label %dec_label_pc_1798.preheader, label %dec_label_pc_17ac, !insn.addr !321

dec_label_pc_1798.preheader:                      ; preds = %dec_label_pc_1760
  %2 = icmp eq i64 %stack_var_-40.210.reload, 0, !insn.addr !322
  store i64 %stack_var_-40.210.reload, i64* %stack_var_-40.06.reg2mem, !insn.addr !323
  store i64 4294967295, i64* %storemerge2.reg2mem, !insn.addr !323
  br i1 %2, label %dec_label_pc_188c, label %dec_label_pc_177c, !insn.addr !323

dec_label_pc_177c:                                ; preds = %dec_label_pc_1798.preheader, %dec_label_pc_177c
  %stack_var_-40.06.reload = load i64, i64* %stack_var_-40.06.reg2mem
  %3 = add i64 %stack_var_-40.06.reload, 8, !insn.addr !324
  %4 = inttoptr i64 %3 to i64*, !insn.addr !324
  %5 = load i64, i64* %4, align 8, !insn.addr !324
  %6 = inttoptr i64 %stack_var_-40.06.reload to i64*, !insn.addr !325
  call void @free(i64* %6), !insn.addr !325
  %7 = icmp eq i64 %5, 0, !insn.addr !322
  store i64 %5, i64* %stack_var_-40.06.reg2mem, !insn.addr !323
  store i64 4294967295, i64* %storemerge2.reg2mem, !insn.addr !323
  br i1 %7, label %dec_label_pc_188c, label %dec_label_pc_177c, !insn.addr !323

dec_label_pc_17ac:                                ; preds = %dec_label_pc_1760
  %stack_var_-32.011.reload = load i64, i64* %stack_var_-32.011.reg2mem
  %storemerge312.reload = load i32, i32* %storemerge312.reg2mem
  %8 = ptrtoint i64* %0 to i64, !insn.addr !319
  %9 = mul nuw nsw i32 %storemerge312.reload, 10, !insn.addr !326
  %10 = bitcast i64* %0 to i32*, !insn.addr !327
  store i32 %9, i32* %10, align 4, !insn.addr !327
  %11 = add i64 %8, 8, !insn.addr !328
  %12 = inttoptr i64 %11 to i64*, !insn.addr !328
  store i64 0, i64* %12, align 8, !insn.addr !328
  %13 = icmp eq i64 %stack_var_-40.210.reload, 0, !insn.addr !329
  store i64 %8, i64* %stack_var_-40.1.reg2mem, !insn.addr !330
  br i1 %13, label %dec_label_pc_1808, label %dec_label_pc_17f4, !insn.addr !330

dec_label_pc_17f4:                                ; preds = %dec_label_pc_17ac
  %14 = add i64 %stack_var_-32.011.reload, 8, !insn.addr !331
  %15 = inttoptr i64 %14 to i64*, !insn.addr !331
  store i64 %8, i64* %15, align 8, !insn.addr !331
  store i64 %stack_var_-40.210.reload, i64* %stack_var_-40.1.reg2mem, !insn.addr !332
  br label %dec_label_pc_1808, !insn.addr !332

dec_label_pc_1808:                                ; preds = %dec_label_pc_17ac, %dec_label_pc_17f4
  %stack_var_-40.1.reload = load i64, i64* %stack_var_-40.1.reg2mem
  %16 = add nuw nsw i32 %storemerge312.reload, 1, !insn.addr !333
  %17 = icmp ult i32 %16, 5, !insn.addr !334
  store i32 %16, i32* %storemerge312.reg2mem, !insn.addr !334
  store i64 %8, i64* %stack_var_-32.011.reg2mem, !insn.addr !334
  store i64 %stack_var_-40.1.reload, i64* %stack_var_-40.210.reg2mem, !insn.addr !334
  br i1 %17, label %dec_label_pc_1760, label %dec_label_pc_1850.preheader, !insn.addr !334

dec_label_pc_1850.preheader:                      ; preds = %dec_label_pc_1808
  %18 = icmp eq i64 %stack_var_-40.1.reload, 0
  store i64 %stack_var_-40.1.reload, i64* %storemerge.in9.reg2mem, !insn.addr !335
  store i32 0, i32* %stack_var_-44.08.reg2mem, !insn.addr !335
  store i64 0, i64* %storemerge2.reg2mem, !insn.addr !335
  br i1 %18, label %dec_label_pc_188c, label %dec_label_pc_1830, !insn.addr !335

dec_label_pc_1830:                                ; preds = %dec_label_pc_1850.preheader, %dec_label_pc_1830
  %stack_var_-44.08.reload = load i32, i32* %stack_var_-44.08.reg2mem
  %storemerge.in9.reload = load i64, i64* %storemerge.in9.reg2mem
  %storemerge = inttoptr i64 %storemerge.in9.reload to i32*
  %19 = load i32, i32* %storemerge, align 4, !insn.addr !336
  %20 = add i32 %19, %stack_var_-44.08.reload, !insn.addr !337
  %21 = add i64 %storemerge.in9.reload, 8, !insn.addr !338
  %22 = inttoptr i64 %21 to i64*, !insn.addr !338
  %23 = load i64, i64* %22, align 8, !insn.addr !338
  %24 = icmp eq i64 %23, 0, !insn.addr !339
  store i64 %23, i64* %storemerge.in9.reg2mem, !insn.addr !335
  store i32 %20, i32* %stack_var_-44.08.reg2mem, !insn.addr !335
  br i1 %24, label %dec_label_pc_1860.preheader, label %dec_label_pc_1830, !insn.addr !335

dec_label_pc_1860.preheader:                      ; preds = %dec_label_pc_1830
  %phitmp = zext i32 %20 to i64
  store i64 %stack_var_-40.1.reload, i64* %stack_var_-40.37.reg2mem
  br label %dec_label_pc_1860

dec_label_pc_1860:                                ; preds = %dec_label_pc_1860.preheader, %dec_label_pc_1860
  %stack_var_-40.37.reload = load i64, i64* %stack_var_-40.37.reg2mem
  %25 = add i64 %stack_var_-40.37.reload, 8, !insn.addr !340
  %26 = inttoptr i64 %25 to i64*, !insn.addr !340
  %27 = load i64, i64* %26, align 8, !insn.addr !340
  %28 = inttoptr i64 %stack_var_-40.37.reload to i64*, !insn.addr !341
  call void @free(i64* %28), !insn.addr !341
  %29 = icmp eq i64 %27, 0, !insn.addr !342
  store i64 %27, i64* %stack_var_-40.37.reg2mem, !insn.addr !343
  store i64 %phitmp, i64* %storemerge2.reg2mem, !insn.addr !343
  br i1 %29, label %dec_label_pc_188c, label %dec_label_pc_1860, !insn.addr !343

dec_label_pc_188c:                                ; preds = %dec_label_pc_1860, %dec_label_pc_177c, %dec_label_pc_1850.preheader, %dec_label_pc_1798.preheader
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  ret i64 %storemerge2.reload, !insn.addr !344

; uselistorder directives
  uselistorder i64 %stack_var_-40.37.reload, { 1, 0 }
  uselistorder i32 %20, { 1, 0 }
  uselistorder i64 %8, { 1, 2, 0, 3 }
  uselistorder i64 %stack_var_-40.06.reload, { 1, 0 }
  uselistorder i64* %0, { 0, 2, 1 }
  uselistorder i64 %stack_var_-40.210.reload, { 0, 2, 1, 3 }
  uselistorder i32* %storemerge312.reg2mem, { 1, 0, 2 }
  uselistorder i64* %stack_var_-32.011.reg2mem, { 1, 0, 2 }
  uselistorder i64* %stack_var_-40.210.reg2mem, { 1, 0, 2 }
  uselistorder i64* %stack_var_-40.06.reg2mem, { 2, 0, 1 }
  uselistorder i64* %stack_var_-40.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge.in9.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-44.08.reg2mem, { 2, 0, 1 }
  uselistorder i64* %stack_var_-40.37.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge2.reg2mem, { 0, 1, 3, 2, 4 }
  uselistorder label %dec_label_pc_188c, { 0, 2, 1, 3 }
  uselistorder label %dec_label_pc_1860, { 1, 0 }
  uselistorder label %dec_label_pc_1830, { 1, 0 }
  uselistorder label %dec_label_pc_1808, { 1, 0 }
  uselistorder label %dec_label_pc_177c, { 1, 0 }
  uselistorder label %dec_label_pc_1760, { 1, 0 }
}

define i64 @create_tree_node() local_unnamed_addr {
dec_label_pc_1894:
  %0 = alloca i64
  %.pre-phi.reg2mem = alloca i64, !insn.addr !345
  %1 = load i64, i64* %0
  %2 = call i64* @malloc(i32 24), !insn.addr !346
  %3 = icmp eq i64* %2, null, !insn.addr !347
  store i64 0, i64* %.pre-phi.reg2mem, !insn.addr !348
  br i1 %3, label %dec_label_pc_18d4, label %dec_label_pc_18b8, !insn.addr !348

dec_label_pc_18b8:                                ; preds = %dec_label_pc_1894
  %4 = bitcast i64* %2 to i32*
  %5 = trunc i64 %1 to i32, !insn.addr !349
  store i32 %5, i32* %4, align 4, !insn.addr !350
  %6 = ptrtoint i64* %2 to i64
  %7 = add i64 %6, 8, !insn.addr !351
  %8 = inttoptr i64 %7 to i64*, !insn.addr !351
  store i64 0, i64* %8, align 8, !insn.addr !351
  %9 = add i64 %6, 16, !insn.addr !352
  %10 = inttoptr i64 %9 to i64*, !insn.addr !352
  store i64 0, i64* %10, align 8, !insn.addr !352
  store i64 %6, i64* %.pre-phi.reg2mem, !insn.addr !352
  br label %dec_label_pc_18d4, !insn.addr !352

dec_label_pc_18d4:                                ; preds = %dec_label_pc_1894, %dec_label_pc_18b8
  %.pre-phi.reload = load i64, i64* %.pre-phi.reg2mem
  ret i64 %.pre-phi.reload, !insn.addr !353

; uselistorder directives
  uselistorder i64* %2, { 0, 2, 1 }
  uselistorder i64* %.pre-phi.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_18d4, { 1, 0 }
}

define i64 @tree_heap_traversal() local_unnamed_addr {
dec_label_pc_18e0:
  %x0.0.reg2mem = alloca i64, !insn.addr !354
  %.reg2mem = alloca i64, !insn.addr !354
  %0 = call i64 @create_tree_node(), !insn.addr !355
  %1 = icmp eq i64 %0, 0, !insn.addr !356
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !357
  br i1 %1, label %dec_label_pc_19e8, label %dec_label_pc_1908, !insn.addr !357

dec_label_pc_1908:                                ; preds = %dec_label_pc_18e0
  %2 = call i64 @create_tree_node(), !insn.addr !358
  %3 = add i64 %0, 8, !insn.addr !359
  %4 = inttoptr i64 %3 to i64*, !insn.addr !359
  store i64 %2, i64* %4, align 8, !insn.addr !359
  %5 = call i64 @create_tree_node(), !insn.addr !360
  %6 = add i64 %0, 16, !insn.addr !361
  %7 = inttoptr i64 %6 to i64*, !insn.addr !361
  store i64 %5, i64* %7, align 8, !insn.addr !361
  %8 = load i64, i64* %4, align 8
  %9 = icmp eq i64 %8, 0, !insn.addr !362
  store i64 %5, i64* %.reg2mem, !insn.addr !363
  br i1 %9, label %dec_label_pc_196c, label %dec_label_pc_1940, !insn.addr !363

dec_label_pc_1940:                                ; preds = %dec_label_pc_1908
  %10 = icmp eq i64 %5, 0, !insn.addr !364
  br i1 %10, label %dec_label_pc_1960, label %dec_label_pc_1998, !insn.addr !365

dec_label_pc_1960:                                ; preds = %dec_label_pc_1940
  %11 = inttoptr i64 %8 to i64*, !insn.addr !366
  call void @free(i64* %11), !insn.addr !366
  %.pr = load i64, i64* %7, align 8
  store i64 %.pr, i64* %.reg2mem, !insn.addr !366
  br label %dec_label_pc_196c, !insn.addr !366

dec_label_pc_196c:                                ; preds = %dec_label_pc_1908, %dec_label_pc_1960
  %.reload = load i64, i64* %.reg2mem, !insn.addr !367
  %12 = icmp eq i64 %.reload, 0, !insn.addr !368
  br i1 %12, label %dec_label_pc_1988, label %dec_label_pc_197c, !insn.addr !369

dec_label_pc_197c:                                ; preds = %dec_label_pc_196c
  %13 = inttoptr i64 %.reload to i64*, !insn.addr !370
  call void @free(i64* %13), !insn.addr !370
  br label %dec_label_pc_1988, !insn.addr !370

dec_label_pc_1988:                                ; preds = %dec_label_pc_197c, %dec_label_pc_196c
  %14 = inttoptr i64 %0 to i64*, !insn.addr !371
  call void @free(i64* %14), !insn.addr !371
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !372
  br label %dec_label_pc_19e8, !insn.addr !372

dec_label_pc_1998:                                ; preds = %dec_label_pc_1940
  %15 = inttoptr i64 %0 to i32*, !insn.addr !373
  %16 = load i32, i32* %15, align 4, !insn.addr !373
  %17 = inttoptr i64 %8 to i32*, !insn.addr !374
  %18 = load i32, i32* %17, align 4, !insn.addr !374
  %19 = add i32 %18, %16, !insn.addr !375
  %20 = inttoptr i64 %5 to i32*, !insn.addr !376
  %21 = load i32, i32* %20, align 4, !insn.addr !376
  %22 = add i32 %19, %21, !insn.addr !377
  %23 = inttoptr i64 %8 to i64*, !insn.addr !378
  call void @free(i64* %23), !insn.addr !378
  %24 = load i64, i64* %7, align 8, !insn.addr !379
  %25 = inttoptr i64 %24 to i64*, !insn.addr !380
  call void @free(i64* %25), !insn.addr !380
  %26 = inttoptr i64 %0 to i64*, !insn.addr !381
  call void @free(i64* %26), !insn.addr !381
  %27 = zext i32 %22 to i64, !insn.addr !382
  store i64 %27, i64* %x0.0.reg2mem, !insn.addr !382
  br label %dec_label_pc_19e8, !insn.addr !382

dec_label_pc_19e8:                                ; preds = %dec_label_pc_18e0, %dec_label_pc_1998, %dec_label_pc_1988
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !383

; uselistorder directives
  uselistorder i64 %8, { 1, 2, 0, 3 }
  uselistorder i64* %7, { 1, 0, 2 }
  uselistorder i64 %5, { 2, 1, 0, 3 }
  uselistorder i64 %0, { 0, 2, 1, 3, 4, 5 }
  uselistorder i64* %.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i64 8, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0 }
  uselistorder i64 ()* @create_tree_node, { 2, 1, 0 }
  uselistorder label %dec_label_pc_19e8, { 1, 2, 0 }
  uselistorder label %dec_label_pc_196c, { 1, 0 }
}

define i64 @memory_leak() local_unnamed_addr {
dec_label_pc_19f0:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !384
  %storemerge12.reg2mem = alloca i32, !insn.addr !384
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !385
  %3 = mul i32 %2, 4, !insn.addr !386
  %4 = call i64* @malloc(i32 %3), !insn.addr !386
  %5 = icmp eq i64* %4, null, !insn.addr !387
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !388
  br i1 %5, label %dec_label_pc_1a80, label %dec_label_pc_1a4c.preheader, !insn.addr !388

dec_label_pc_1a4c.preheader:                      ; preds = %dec_label_pc_19f0
  %6 = ptrtoint i64* %4 to i64, !insn.addr !386
  %7 = icmp eq i32 %2, 0, !insn.addr !389
  store i32 0, i32* %storemerge12.reg2mem, !insn.addr !389
  br i1 %7, label %dec_label_pc_1a5c, label %dec_label_pc_1a28, !insn.addr !389

dec_label_pc_1a28:                                ; preds = %dec_label_pc_1a4c.preheader, %dec_label_pc_1a28
  %storemerge12.reload = load i32, i32* %storemerge12.reg2mem
  %8 = sext i32 %storemerge12.reload to i64, !insn.addr !390
  %9 = mul i64 %8, 4, !insn.addr !391
  %10 = add i64 %9, %6, !insn.addr !392
  %11 = inttoptr i64 %10 to i32*, !insn.addr !393
  store i32 %storemerge12.reload, i32* %11, align 4, !insn.addr !393
  %12 = add nuw i32 %storemerge12.reload, 1, !insn.addr !394
  %exitcond = icmp eq i32 %12, %2
  store i32 %12, i32* %storemerge12.reg2mem, !insn.addr !389
  br i1 %exitcond, label %dec_label_pc_1a5c, label %dec_label_pc_1a28, !insn.addr !389

dec_label_pc_1a5c:                                ; preds = %dec_label_pc_1a28, %dec_label_pc_1a4c.preheader
  %13 = icmp slt i32 %2, 0
  %14 = zext i1 %13 to i32, !insn.addr !395
  %15 = add i32 %14, %2, !insn.addr !396
  %16 = ashr i32 %15, 1, !insn.addr !397
  %17 = sext i32 %16 to i64, !insn.addr !398
  %18 = mul i64 %17, 4, !insn.addr !399
  %19 = add i64 %18, %6, !insn.addr !400
  %20 = inttoptr i64 %19 to i32*, !insn.addr !401
  %21 = load i32, i32* %20, align 4, !insn.addr !401
  %22 = zext i32 %21 to i64, !insn.addr !401
  store i64 %22, i64* %storemerge.reg2mem, !insn.addr !401
  br label %dec_label_pc_1a80, !insn.addr !401

dec_label_pc_1a80:                                ; preds = %dec_label_pc_19f0, %dec_label_pc_1a5c
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !402

; uselistorder directives
  uselistorder i32 %storemerge12.reload, { 0, 2, 1 }
  uselistorder i64 %6, { 1, 0 }
  uselistorder i64* %4, { 1, 0 }
  uselistorder i32 %2, { 2, 1, 3, 4, 0 }
  uselistorder i32* %storemerge12.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1a80, { 1, 0 }
  uselistorder label %dec_label_pc_1a28, { 1, 0 }
}

define i64 @dangling_pointer() local_unnamed_addr {
dec_label_pc_1a88:
  %storemerge.reg2mem = alloca i64, !insn.addr !403
  %0 = call i64* @malloc(i32 4), !insn.addr !404
  %1 = icmp eq i64* %0, null, !insn.addr !405
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !406
  br i1 %1, label %dec_label_pc_1af0, label %dec_label_pc_1ab0, !insn.addr !406

dec_label_pc_1ab0:                                ; preds = %dec_label_pc_1a88
  %2 = bitcast i64* %0 to i32*, !insn.addr !407
  store i32 42, i32* %2, align 4, !insn.addr !407
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_2a50, i64 0, i64 0), i64 42), !insn.addr !408
  call void @free(i64* nonnull %0), !insn.addr !409
  %4 = load i32, i32* %2, align 4, !insn.addr !410
  %5 = zext i32 %4 to i64, !insn.addr !411
  store i64 %5, i64* %storemerge.reg2mem, !insn.addr !411
  br label %dec_label_pc_1af0, !insn.addr !411

dec_label_pc_1af0:                                ; preds = %dec_label_pc_1a88, %dec_label_pc_1ab0
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !412

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 42, { 1, 0 }
  uselistorder label %dec_label_pc_1af0, { 1, 0 }
}

define i64 @double_free() local_unnamed_addr {
dec_label_pc_1af8:
  %0 = alloca i64
  %.reg2mem = alloca i64, !insn.addr !413
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %1, 0, !insn.addr !414
  br i1 %2, label %dec_label_pc_1b10, label %dec_label_pc_1b54, !insn.addr !415

dec_label_pc_1b10:                                ; preds = %dec_label_pc_1af8
  %3 = call i64* @malloc(i32 4), !insn.addr !416
  %4 = icmp eq i64* %3, null, !insn.addr !417
  store i64 4294967295, i64* %.reg2mem, !insn.addr !418
  br i1 %4, label %dec_label_pc_1b5c, label %dec_label_pc_1b30, !insn.addr !418

dec_label_pc_1b30:                                ; preds = %dec_label_pc_1b10
  %5 = bitcast i64* %3 to i32*, !insn.addr !419
  store i32 10, i32* %5, align 4, !insn.addr !419
  call void @free(i64* nonnull %3), !insn.addr !420
  call void @free(i64* nonnull %3), !insn.addr !421
  store i64 4294967294, i64* %.reg2mem, !insn.addr !422
  br label %dec_label_pc_1b5c, !insn.addr !422

dec_label_pc_1b54:                                ; preds = %dec_label_pc_1af8
  %6 = and i64 %1, 4294967295, !insn.addr !423
  store i64 %6, i64* %.reg2mem, !insn.addr !423
  br label %dec_label_pc_1b5c, !insn.addr !423

dec_label_pc_1b5c:                                ; preds = %dec_label_pc_1b10, %dec_label_pc_1b54, %dec_label_pc_1b30
  %.reload = load i64, i64* %.reg2mem, !insn.addr !424
  ret i64 %.reload, !insn.addr !424

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32 4, { 3, 4, 0, 1, 5, 2 }
  uselistorder label %dec_label_pc_1b5c, { 1, 2, 0 }
}

define i64 @heap_overflow() local_unnamed_addr {
dec_label_pc_1b64:
  %storemerge.reg2mem = alloca i64, !insn.addr !425
  %indvars.iv.reg2mem = alloca i64, !insn.addr !425
  %0 = call i64* @malloc(i32 40), !insn.addr !426
  %1 = ptrtoint i64* %0 to i64, !insn.addr !426
  %2 = icmp eq i64* %0, null, !insn.addr !427
  store i64 0, i64* %indvars.iv.reg2mem, !insn.addr !428
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !428
  br i1 %2, label %dec_label_pc_1be4, label %dec_label_pc_1b94, !insn.addr !428

dec_label_pc_1b94:                                ; preds = %dec_label_pc_1b64, %dec_label_pc_1b94
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %3 = mul i64 %indvars.iv.reload, 4, !insn.addr !429
  %4 = add i64 %3, %1, !insn.addr !430
  %5 = inttoptr i64 %4 to i32*, !insn.addr !431
  %6 = trunc i64 %indvars.iv.reload to i32
  %7 = mul i32 %6, 100
  store i32 %7, i32* %5, align 4, !insn.addr !431
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 11
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !432
  br i1 %exitcond, label %dec_label_pc_1bcc, label %dec_label_pc_1b94, !insn.addr !432

dec_label_pc_1bcc:                                ; preds = %dec_label_pc_1b94
  %8 = bitcast i64* %0 to i32*, !insn.addr !433
  %9 = load i32, i32* %8, align 4, !insn.addr !433
  call void @free(i64* nonnull %0), !insn.addr !434
  %10 = zext i32 %9 to i64, !insn.addr !435
  store i64 %10, i64* %storemerge.reg2mem, !insn.addr !435
  br label %dec_label_pc_1be4, !insn.addr !435

dec_label_pc_1be4:                                ; preds = %dec_label_pc_1b64, %dec_label_pc_1bcc
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !436

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder void (i64*)* @free, { 12, 8, 7, 4, 0, 10, 9, 2, 5, 16, 1, 18, 17, 15, 3, 14, 13, 11, 6, 19 }
  uselistorder i64 4, { 0, 1, 2, 15, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 }
  uselistorder i64* null, { 1, 2, 3, 4, 5, 6, 0, 7, 8, 9, 10, 11, 12 }
  uselistorder i64* (i32)* @malloc, { 4, 5, 6, 7, 8, 9, 10, 0, 11, 3, 2, 1, 12 }
  uselistorder label %dec_label_pc_1be4, { 1, 0 }
  uselistorder label %dec_label_pc_1b94, { 1, 0 }
}

define i64 @test_heap_memory() local_unnamed_addr {
dec_label_pc_1bec:
  %x0.0.reg2mem = alloca i64, !insn.addr !437
  %stack_var_-20 = alloca i32, align 4
  %0 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !438
  %1 = inttoptr i64 %0 to i64*, !insn.addr !439
  %2 = load i64, i64* %1, align 8, !insn.addr !439
  %3 = call i32 @puts(i8* bitcast (i8** @global_var_2a68 to i8*)), !insn.addr !440
  %4 = call i64 @heap_basic(), !insn.addr !441
  %5 = and i64 %4, 4294967295, !insn.addr !442
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2a88, i64 0, i64 0), i64 %5), !insn.addr !443
  %7 = call i64 @heap_calloc(), !insn.addr !444
  %8 = and i64 %7, 4294967295, !insn.addr !445
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2aa8, i64 0, i64 0), i64 %8), !insn.addr !446
  %10 = call i64 @heap_realloc(), !insn.addr !447
  %11 = and i64 %10, 4294967295, !insn.addr !448
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_2ac8, i64 0, i64 0), i64 %11), !insn.addr !449
  %13 = call i64 @heap_array(), !insn.addr !450
  %14 = and i64 %13, 4294967295, !insn.addr !451
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2ae8, i64 0, i64 0), i64 %14), !insn.addr !452
  %16 = call i64 @heap_struct(), !insn.addr !453
  %17 = and i64 %16, 4294967295, !insn.addr !454
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2b08, i64 0, i64 0), i64 %17), !insn.addr !455
  %19 = call i64 @heap_nested(), !insn.addr !456
  %20 = and i64 %19, 4294967295, !insn.addr !457
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2b28, i64 0, i64 0), i64 %20), !insn.addr !458
  %22 = call i64 @linked_list_heap(), !insn.addr !459
  %23 = and i64 %22, 4294967295, !insn.addr !460
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_2b48, i64 0, i64 0), i64 %23), !insn.addr !461
  %25 = call i64 @tree_heap_traversal(), !insn.addr !462
  %26 = and i64 %25, 4294967295, !insn.addr !463
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_2b70, i64 0, i64 0), i64 %26), !insn.addr !464
  %28 = call i64 @memory_leak(), !insn.addr !465
  %29 = and i64 %28, 4294967295, !insn.addr !466
  %30 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2b98, i64 0, i64 0), i64 %29), !insn.addr !467
  %31 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_2bb8, i64 0, i64 0)), !insn.addr !468
  %32 = call i32 @fork(), !insn.addr !469
  %33 = icmp eq i32 %32, 0, !insn.addr !470
  br i1 %33, label %dec_label_pc_1d24, label %dec_label_pc_1d44, !insn.addr !471

dec_label_pc_1d24:                                ; preds = %dec_label_pc_1bec
  %34 = call i64 @dangling_pointer(), !insn.addr !472
  %35 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2bd8 to i8*)), !insn.addr !473
  call void @exit(i32 0), !insn.addr !474
  unreachable, !insn.addr !474

dec_label_pc_1d44:                                ; preds = %dec_label_pc_1bec
  %36 = icmp slt i32 %32, 1, !insn.addr !475
  br i1 %36, label %dec_label_pc_1ddc, label %dec_label_pc_1d50, !insn.addr !475

dec_label_pc_1d50:                                ; preds = %dec_label_pc_1d44
  %37 = call i32 @waitpid(i32 %32, i32* nonnull %stack_var_-20, i32 0), !insn.addr !476
  %38 = load i32, i32* %stack_var_-20, align 4, !insn.addr !477
  %39 = urem i32 %38, 128, !insn.addr !478
  %40 = icmp eq i32 %39, 0, !insn.addr !479
  br i1 %40, label %dec_label_pc_1d74, label %dec_label_pc_1d94, !insn.addr !480

dec_label_pc_1d74:                                ; preds = %dec_label_pc_1d50
  %41 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2be8 to i8*)), !insn.addr !481
  br label %dec_label_pc_1de8, !insn.addr !482

dec_label_pc_1d94:                                ; preds = %dec_label_pc_1d50
  %42 = mul i32 %38, 16777216
  %43 = and i32 %42, 2130706432, !insn.addr !483
  %sext = add nuw i32 %43, 16777216
  %44 = icmp slt i32 %sext, 33554432, !insn.addr !484
  br i1 %44, label %dec_label_pc_1de8, label %dec_label_pc_1dc0, !insn.addr !484

dec_label_pc_1dc0:                                ; preds = %dec_label_pc_1d94
  %45 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2c10 to i8*)), !insn.addr !485
  br label %dec_label_pc_1de8, !insn.addr !486

dec_label_pc_1ddc:                                ; preds = %dec_label_pc_1d44
  call void @perror(i8* bitcast (i8** @global_var_2c58 to i8*)), !insn.addr !487
  br label %dec_label_pc_1de8, !insn.addr !487

dec_label_pc_1de8:                                ; preds = %dec_label_pc_1ddc, %dec_label_pc_1dc0, %dec_label_pc_1d94, %dec_label_pc_1d74
  %46 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !488
  %47 = inttoptr i64 %46 to i64*, !insn.addr !489
  %48 = load i64, i64* %47, align 8, !insn.addr !489
  %49 = icmp eq i64 %2, %48, !insn.addr !490
  store i64 %46, i64* %x0.0.reg2mem, !insn.addr !491
  br i1 %49, label %dec_label_pc_1e0c, label %dec_label_pc_1e08, !insn.addr !491

dec_label_pc_1e08:                                ; preds = %dec_label_pc_1de8
  call void @__stack_chk_fail(), !insn.addr !492
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.0.reg2mem, !insn.addr !492
  br label %dec_label_pc_1e0c, !insn.addr !492

dec_label_pc_1e0c:                                ; preds = %dec_label_pc_1e08, %dec_label_pc_1de8
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !493

; uselistorder directives
  uselistorder i32 16777216, { 1, 0 }
}

define i64 @global_var_access() local_unnamed_addr {
dec_label_pc_1e14:
  store i32 ptrtoint (i32* @global_var_14079 to i32), i32* bitcast (i32** @global_var_14078 to i32*), align 8, !insn.addr !494
  ret i64 zext (i32 ptrtoint (i32* @global_var_14079 to i32) to i64), !insn.addr !495
}

define i64 @global_var_read() local_unnamed_addr {
dec_label_pc_1e40:
  %0 = load i32, i32* bitcast (i32** @global_var_14078 to i32*), align 8, !insn.addr !496
  %1 = mul i32 %0, 2, !insn.addr !497
  %2 = zext i32 %1 to i64, !insn.addr !497
  ret i64 %2, !insn.addr !498

; uselistorder directives
  uselistorder i32* bitcast (i32** @global_var_14078 to i32*), { 1, 0 }
}

define i64 @global_array_access() local_unnamed_addr {
dec_label_pc_1e54:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !499
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !500
  %3 = icmp ult i32 %2, 10
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !501
  br i1 %3, label %dec_label_pc_1e7c, label %dec_label_pc_1e8c, !insn.addr !501

dec_label_pc_1e7c:                                ; preds = %dec_label_pc_1e54
  %sext = mul i64 %1, 4294967296
  %4 = ashr exact i64 %sext, 30, !insn.addr !502
  %5 = add i64 %4, ptrtoint (i32** @global_var_14010 to i64), !insn.addr !502
  %6 = inttoptr i64 %5 to i32*, !insn.addr !502
  %7 = load i32, i32* %6, align 4, !insn.addr !502
  %8 = zext i32 %7 to i64, !insn.addr !502
  store i64 %8, i64* %storemerge.reg2mem, !insn.addr !502
  br label %dec_label_pc_1e8c, !insn.addr !502

dec_label_pc_1e8c:                                ; preds = %dec_label_pc_1e54, %dec_label_pc_1e7c
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !503

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1e8c, { 1, 0 }
}

define i64 @static_local() local_unnamed_addr {
dec_label_pc_1e94:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !504
  %3 = icmp eq i32 %2, 0, !insn.addr !505
  %. = select i1 %3, i32 ptrtoint (i64* @global_var_140f9 to i32), i32 0
  %.2 = select i1 %3, i64 zext (i32 ptrtoint (i64* @global_var_140f9 to i32) to i64), i64 0
  store i32 %., i32* bitcast (i32** @global_var_140f8 to i32*), align 8
  ret i64 %.2, !insn.addr !506

; uselistorder directives
  uselistorder i32 ptrtoint (i64* @global_var_140f9 to i32), { 1, 0 }
}

define i64 @static_helper() local_unnamed_addr {
dec_label_pc_1eec:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !507
  %3 = and i64 %2, 4294967294, !insn.addr !507
  ret i64 %3, !insn.addr !508
}

define i64 @call_static_func(i64 %arg1) local_unnamed_addr {
dec_label_pc_1f04:
  %0 = call i64 @static_helper(), !insn.addr !509
  %1 = add i64 %0, 1, !insn.addr !510
  %2 = and i64 %1, 4294967295, !insn.addr !510
  ret i64 %2, !insn.addr !511
}

define i64 @access_extern_global() local_unnamed_addr {
dec_label_pc_1f24:
  %0 = load i64, i64* inttoptr (i64 81904 to i64*), align 16, !insn.addr !512
  %1 = inttoptr i64 %0 to i32*, !insn.addr !513
  %2 = load i32, i32* %1, align 4, !insn.addr !513
  %3 = add i32 %2, 100, !insn.addr !514
  %4 = zext i32 %3 to i64, !insn.addr !514
  ret i64 %4, !insn.addr !515

; uselistorder directives
  uselistorder i32 100, { 1, 0 }
}

define i64 @call_extern_func(i64 %arg1) local_unnamed_addr {
dec_label_pc_1f38:
  %0 = call i64 @extern_function(), !insn.addr !516
  ret i64 %0, !insn.addr !517
}

define i64 @read_const_data() local_unnamed_addr {
dec_label_pc_1f50:
  ret i64 ptrtoint (i64* @global_var_1408e to i64), !insn.addr !518
}

define i64 @access_bss_var() local_unnamed_addr {
dec_label_pc_1f74:
  %0 = load i32, i32* @global_var_1407c, align 4, !insn.addr !519
  %1 = zext i32 %0 to i64, !insn.addr !519
  ret i64 %1, !insn.addr !520
}

define i64 @access_bss_buffer() local_unnamed_addr {
dec_label_pc_1f84:
  %0 = load i8, i8* bitcast (i32* @global_var_14080 to i8*), align 4, !insn.addr !521
  %1 = zext i8 %0 to i64, !insn.addr !521
  ret i64 %1, !insn.addr !522
}

define i64 @global_struct_access() local_unnamed_addr {
dec_label_pc_1f94:
  %0 = load i32, i32* @global_var_14038, align 4, !insn.addr !523
  %1 = load i32, i32* @global_var_1403c, align 4, !insn.addr !524
  %2 = add i32 %1, %0, !insn.addr !525
  %3 = zext i32 %2 to i64, !insn.addr !525
  ret i64 %3, !insn.addr !526

; uselistorder directives
  uselistorder i32 10, { 1, 2, 3, 4, 0, 5 }
}

define i64 @set_file_static() local_unnamed_addr {
dec_label_pc_1fb4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !527
  store i32 %2, i32* bitcast (i32** @global_var_14040 to i32*), align 8, !insn.addr !528
  ret i64 ptrtoint (i32** @global_var_14040 to i64), !insn.addr !529
}

define i64 @get_file_static() local_unnamed_addr {
dec_label_pc_1fd8:
  %0 = load i32, i32* bitcast (i32** @global_var_14040 to i32*), align 8, !insn.addr !530
  %1 = zext i32 %0 to i64, !insn.addr !530
  ret i64 %1, !insn.addr !531

; uselistorder directives
  uselistorder i32* bitcast (i32** @global_var_14040 to i32*), { 1, 0 }
}

define i64 @set_global_callback() local_unnamed_addr {
dec_label_pc_1fe8:
  ret i64 ptrtoint (i64* @global_var_140e8 to i64), !insn.addr !532
}

define i64 @call_global_callback() local_unnamed_addr {
dec_label_pc_200c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* @global_var_140e8, align 8, !insn.addr !533
  %3 = icmp eq i64 %2, 0, !insn.addr !534
  br i1 %3, label %dec_label_pc_2044, label %dec_label_pc_202c, !insn.addr !535

dec_label_pc_202c:                                ; preds = %dec_label_pc_200c
  %4 = and i64 %1, 4294967295, !insn.addr !536
  ret i64 %4, !insn.addr !537

dec_label_pc_2044:                                ; preds = %dec_label_pc_200c
  ret i64 4294967295, !insn.addr !538
}

define i64 @global_heap_store() local_unnamed_addr {
dec_label_pc_2050:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !539
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %1, 0, !insn.addr !540
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !541
  br i1 %2, label %dec_label_pc_2094, label %dec_label_pc_207c, !insn.addr !541

dec_label_pc_207c:                                ; preds = %dec_label_pc_2050
  %3 = inttoptr i64 %1 to i32*
  %4 = load i32, i32* %3, align 4, !insn.addr !542
  %5 = zext i32 %4 to i64, !insn.addr !542
  store i64 %5, i64* %storemerge.reg2mem, !insn.addr !543
  br label %dec_label_pc_2094, !insn.addr !543

dec_label_pc_2094:                                ; preds = %dec_label_pc_2050, %dec_label_pc_207c
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !544

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2094, { 1, 0 }
}

define i64 @static_complex_init() local_unnamed_addr {
dec_label_pc_209c:
  %0 = load i32, i32* @global_var_14048, align 4, !insn.addr !545
  %1 = load i32, i32* @global_var_14050, align 4, !insn.addr !546
  %2 = add i32 %1, %0, !insn.addr !547
  %3 = load i32, i32* @global_var_14058, align 4, !insn.addr !548
  %4 = add i32 %2, %3, !insn.addr !549
  %5 = zext i32 %4 to i64, !insn.addr !549
  ret i64 %5, !insn.addr !550
}

define i64 @tls_access() local_unnamed_addr {
dec_label_pc_20cc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32, !insn.addr !551
  %4 = call i64 @__asm_mrs(i64 %2, i64 %1), !insn.addr !552
  %5 = add i64 %4, 16, !insn.addr !553
  %6 = inttoptr i64 %5 to i32*, !insn.addr !554
  store i32 %3, i32* %6, align 4, !insn.addr !554
  %7 = call i64 @__asm_mrs(i64 %5, i64 %4), !insn.addr !555
  %8 = add i64 %7, 16, !insn.addr !556
  %9 = inttoptr i64 %8 to i32*, !insn.addr !557
  %10 = load i32, i32* %9, align 4, !insn.addr !557
  %11 = mul i32 %10, 2, !insn.addr !558
  %12 = zext i32 %11 to i64, !insn.addr !558
  ret i64 %12, !insn.addr !559

; uselistorder directives
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64 %4, { 1, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @init_depends_on() local_unnamed_addr {
dec_label_pc_2104:
  %0 = alloca i64
  %.reg2mem = alloca i32, !insn.addr !560
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %1, 0, !insn.addr !561
  br i1 %2, label %dec_label_pc_2104.dec_label_pc_212c_crit_edge, label %dec_label_pc_2118, !insn.addr !562

dec_label_pc_2104.dec_label_pc_212c_crit_edge:    ; preds = %dec_label_pc_2104
  %.pre = load i32, i32* @global_var_140fc, align 4
  store i32 %.pre, i32* %.reg2mem
  br label %dec_label_pc_212c

dec_label_pc_2118:                                ; preds = %dec_label_pc_2104
  %3 = trunc i64 %1 to i32
  store i32 %3, i32* @global_var_140fc, align 4, !insn.addr !563
  store i32 %3, i32* %.reg2mem, !insn.addr !563
  br label %dec_label_pc_212c, !insn.addr !563

dec_label_pc_212c:                                ; preds = %dec_label_pc_2104.dec_label_pc_212c_crit_edge, %dec_label_pc_2118
  %.reload = load i32, i32* %.reg2mem, !insn.addr !564
  %4 = zext i32 %.reload to i64, !insn.addr !564
  ret i64 %4, !insn.addr !565

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i32* @global_var_140fc, { 1, 0 }
  uselistorder label %dec_label_pc_212c, { 1, 0 }
}

define i64 @init_order_test() local_unnamed_addr {
dec_label_pc_2140:
  %0 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !566
  %1 = inttoptr i64 %0 to i64*, !insn.addr !567
  %2 = load i64, i64* %1, align 8, !insn.addr !567
  %3 = call i64 @init_depends_on(), !insn.addr !568
  %4 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !569
  %5 = inttoptr i64 %4 to i64*, !insn.addr !570
  %6 = load i64, i64* %5, align 8, !insn.addr !570
  %7 = icmp eq i64 %2, %6, !insn.addr !571
  br i1 %7, label %dec_label_pc_2190, label %dec_label_pc_218c, !insn.addr !572

dec_label_pc_218c:                                ; preds = %dec_label_pc_2140
  call void @__stack_chk_fail(), !insn.addr !573
  br label %dec_label_pc_2190, !insn.addr !573

dec_label_pc_2190:                                ; preds = %dec_label_pc_218c, %dec_label_pc_2140
  %8 = and i64 %3, 4294967295, !insn.addr !574
  ret i64 %8, !insn.addr !575
}

define i64 @test_static_global() local_unnamed_addr {
dec_label_pc_219c:
  %x0.0.reg2mem = alloca i64, !insn.addr !576
  %0 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !577
  %1 = inttoptr i64 %0 to i64*, !insn.addr !578
  %2 = load i64, i64* %1, align 8, !insn.addr !578
  %3 = call i32 @puts(i8* bitcast (i8** @global_var_2c78 to i8*)), !insn.addr !579
  %4 = call i64 @global_var_access(), !insn.addr !580
  %5 = and i64 %4, 4294967295, !insn.addr !581
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_2ca0, i64 0, i64 0), i64 %5), !insn.addr !582
  %7 = call i64 @global_var_read(), !insn.addr !583
  %8 = and i64 %7, 4294967295, !insn.addr !584
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_2cc8, i64 0, i64 0), i64 %8), !insn.addr !585
  %10 = call i64 @global_array_access(), !insn.addr !586
  %11 = and i64 %10, 4294967295, !insn.addr !587
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_2cf0, i64 0, i64 0), i64 %11), !insn.addr !588
  %13 = call i64 @static_local(), !insn.addr !589
  %14 = call i64 @static_local(), !insn.addr !590
  %15 = and i64 %14, 4294967295, !insn.addr !591
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2d18, i64 0, i64 0), i64 %15), !insn.addr !592
  %17 = call i64 @static_local(), !insn.addr !593
  %18 = and i64 %17, 4294967295, !insn.addr !594
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2d18, i64 0, i64 0), i64 %18), !insn.addr !595
  %20 = call i64 @call_static_func(i64 5), !insn.addr !596
  %21 = and i64 %20, 4294967295, !insn.addr !597
  %22 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_2d38, i64 0, i64 0), i64 %21), !insn.addr !598
  %23 = call i64 @access_extern_global(), !insn.addr !599
  %24 = and i64 %23, 4294967295, !insn.addr !600
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_2d60, i64 0, i64 0), i64 %24), !insn.addr !601
  %26 = call i64 @call_extern_func(i64 ptrtoint (i32* @0 to i64)), !insn.addr !602
  %27 = and i64 %26, 4294967295, !insn.addr !603
  %28 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_2d88, i64 0, i64 0), i64 %27), !insn.addr !604
  %29 = call i64 @read_const_data(), !insn.addr !605
  %30 = and i64 %29, 4294967295, !insn.addr !606
  %31 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_2db0, i64 0, i64 0), i64 %30), !insn.addr !607
  %32 = call i64 @access_bss_var(), !insn.addr !608
  %33 = and i64 %32, 4294967295, !insn.addr !609
  %34 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_2dd8, i64 0, i64 0), i64 %33), !insn.addr !610
  %35 = call i64 @access_bss_buffer(), !insn.addr !611
  %36 = and i64 %35, 4294967295, !insn.addr !612
  %37 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_2df8, i64 0, i64 0), i64 %36), !insn.addr !613
  %38 = call i64 @global_struct_access(), !insn.addr !614
  %39 = and i64 %38, 4294967295, !insn.addr !615
  %40 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_2e20, i64 0, i64 0), i64 %39), !insn.addr !616
  %41 = call i64 @set_file_static(), !insn.addr !617
  %42 = call i64 @get_file_static(), !insn.addr !618
  %43 = and i64 %42, 4294967295, !insn.addr !619
  %44 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2e48, i64 0, i64 0), i64 %43), !insn.addr !620
  %45 = call i64 @set_global_callback(), !insn.addr !621
  %46 = call i64 @call_global_callback(), !insn.addr !622
  %47 = and i64 %46, 4294967295, !insn.addr !623
  %48 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_2e68, i64 0, i64 0), i64 %47), !insn.addr !624
  %49 = call i64 @global_heap_store(), !insn.addr !625
  %50 = and i64 %49, 4294967295, !insn.addr !626
  %51 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_2e90, i64 0, i64 0), i64 %50), !insn.addr !627
  %52 = call i64 @static_complex_init(), !insn.addr !628
  %53 = and i64 %52, 4294967295, !insn.addr !629
  %54 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_2eb8, i64 0, i64 0), i64 %53), !insn.addr !630
  %55 = call i64 @tls_access(), !insn.addr !631
  %56 = and i64 %55, 4294967295, !insn.addr !632
  %57 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_2ee0, i64 0, i64 0), i64 %56), !insn.addr !633
  %58 = call i64 @init_order_test(), !insn.addr !634
  %59 = and i64 %58, 4294967295, !insn.addr !635
  %60 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_2f00, i64 0, i64 0), i64 %59), !insn.addr !636
  %61 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !637
  %62 = inttoptr i64 %61 to i64*, !insn.addr !638
  %63 = load i64, i64* %62, align 8, !insn.addr !638
  %64 = icmp eq i64 %2, %63, !insn.addr !639
  store i64 %61, i64* %x0.0.reg2mem, !insn.addr !640
  br i1 %64, label %dec_label_pc_2390, label %dec_label_pc_238c, !insn.addr !640

dec_label_pc_238c:                                ; preds = %dec_label_pc_219c
  call void @__stack_chk_fail(), !insn.addr !641
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.0.reg2mem, !insn.addr !641
  br label %dec_label_pc_2390, !insn.addr !641

dec_label_pc_2390:                                ; preds = %dec_label_pc_238c, %dec_label_pc_219c
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !642

; uselistorder directives
  uselistorder i64 5, { 2, 0, 1 }
  uselistorder i64 ()* @static_local, { 2, 1, 0 }
}

define i64 @memop_memset() local_unnamed_addr {
dec_label_pc_2398:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !643
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = trunc i64 %2 to i32, !insn.addr !644
  %5 = icmp eq i64 %3, 0, !insn.addr !645
  %6 = icmp eq i32 %4, 0, !insn.addr !646
  %or.cond = or i1 %6, %5
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !647
  br i1 %or.cond, label %dec_label_pc_23e4, label %dec_label_pc_23cc, !insn.addr !647

dec_label_pc_23cc:                                ; preds = %dec_label_pc_2398
  %7 = trunc i64 %1 to i32, !insn.addr !648
  %8 = inttoptr i64 %3 to i64*, !insn.addr !649
  %9 = call i64* @memset(i64* %8, i32 %7, i32 %4), !insn.addr !649
  %10 = urem i64 %3, 256, !insn.addr !650
  store i64 %10, i64* %storemerge.reg2mem, !insn.addr !650
  br label %dec_label_pc_23e4, !insn.addr !650

dec_label_pc_23e4:                                ; preds = %dec_label_pc_2398, %dec_label_pc_23cc
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !651

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i64 %3, { 2, 0, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %0, { 2, 1, 0 }
  uselistorder label %dec_label_pc_23e4, { 1, 0 }
}

define i64 @memop_memcpy() local_unnamed_addr {
dec_label_pc_23ec:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !652
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = trunc i64 %1 to i32, !insn.addr !653
  %5 = icmp eq i64 %3, 0, !insn.addr !654
  %6 = icmp eq i64 %2, 0, !insn.addr !655
  %or.cond = or i1 %6, %5
  %7 = icmp eq i32 %4, 0, !insn.addr !656
  %or.cond4 = or i1 %7, %or.cond
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !657
  br i1 %or.cond4, label %dec_label_pc_2454, label %dec_label_pc_242c, !insn.addr !657

dec_label_pc_242c:                                ; preds = %dec_label_pc_23ec
  %8 = inttoptr i64 %3 to i64*, !insn.addr !658
  %9 = inttoptr i64 %2 to i64*, !insn.addr !658
  %10 = call i64* @memcpy(i64* %8, i64* %9, i32 %4), !insn.addr !658
  %11 = mul i64 %1, 4294967296
  %sext = ashr exact i64 %11, 32
  %12 = add nsw i64 %sext, -4
  %13 = and i64 %12, -4, !insn.addr !659
  %14 = add i64 %13, %3, !insn.addr !660
  %15 = inttoptr i64 %14 to i32*, !insn.addr !661
  %16 = load i32, i32* %15, align 4, !insn.addr !661
  %17 = zext i32 %16 to i64, !insn.addr !661
  store i64 %17, i64* %storemerge.reg2mem, !insn.addr !661
  br label %dec_label_pc_2454, !insn.addr !661

dec_label_pc_2454:                                ; preds = %dec_label_pc_23ec, %dec_label_pc_242c
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !662

; uselistorder directives
  uselistorder i64 %3, { 2, 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %0, { 2, 1, 0 }
  uselistorder label %dec_label_pc_2454, { 1, 0 }
}

define i64 @memop_memmove() local_unnamed_addr {
dec_label_pc_245c:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !663
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = icmp eq i64 %2, 0, !insn.addr !664
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !665
  br i1 %3, label %dec_label_pc_24b8, label %dec_label_pc_2478, !insn.addr !665

dec_label_pc_2478:                                ; preds = %dec_label_pc_245c
  %4 = icmp eq i64 %1, 0, !insn.addr !666
  %5 = icmp ne i1 %4, true, !insn.addr !666
  %6 = icmp eq i64 %1, 1, !insn.addr !666
  %7 = icmp ne i1 %6, true, !insn.addr !667
  %8 = icmp eq i1 %5, %7, !insn.addr !667
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !667
  br i1 %8, label %dec_label_pc_248c, label %dec_label_pc_24b8, !insn.addr !667

dec_label_pc_248c:                                ; preds = %dec_label_pc_2478
  %9 = add i64 %2, 1, !insn.addr !668
  %10 = inttoptr i64 %9 to i64*, !insn.addr !669
  %11 = inttoptr i64 %2 to i64*, !insn.addr !669
  %12 = trunc i64 %1 to i32
  %13 = add i32 %12, -1, !insn.addr !669
  %14 = call i64* @memmove(i64* %10, i64* %11, i32 %13), !insn.addr !669
  %15 = inttoptr i64 %9 to i8*, !insn.addr !670
  %16 = load i8, i8* %15, align 1, !insn.addr !670
  %17 = zext i8 %16 to i64, !insn.addr !670
  store i64 %17, i64* %storemerge.reg2mem, !insn.addr !670
  br label %dec_label_pc_24b8, !insn.addr !670

dec_label_pc_24b8:                                ; preds = %dec_label_pc_245c, %dec_label_pc_2478, %dec_label_pc_248c
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !671

; uselistorder directives
  uselistorder i64 %2, { 1, 2, 0 }
  uselistorder i64 %1, { 0, 2, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder label %dec_label_pc_24b8, { 2, 1, 0 }
}

define i64 @memop_memcmp() local_unnamed_addr {
dec_label_pc_24c0:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !672
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = trunc i64 %1 to i32, !insn.addr !673
  %5 = icmp eq i64 %3, 0, !insn.addr !674
  %6 = icmp eq i64 %2, 0, !insn.addr !675
  %or.cond = or i1 %6, %5
  %7 = icmp eq i32 %4, 0, !insn.addr !676
  %or.cond4 = or i1 %7, %or.cond
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !677
  br i1 %or.cond4, label %dec_label_pc_2540, label %dec_label_pc_2500, !insn.addr !677

dec_label_pc_2500:                                ; preds = %dec_label_pc_24c0
  %8 = inttoptr i64 %3 to i64*, !insn.addr !678
  %9 = inttoptr i64 %2 to i64*, !insn.addr !678
  %10 = call i32 @memcmp(i64* %8, i64* %9, i32 %4), !insn.addr !678
  %11 = icmp sgt i32 %10, 0, !insn.addr !679
  store i64 1, i64* %x0.0.reg2mem, !insn.addr !679
  br i1 %11, label %dec_label_pc_2540, label %dec_label_pc_2520, !insn.addr !679

dec_label_pc_2520:                                ; preds = %dec_label_pc_2500
  %12 = icmp eq i32 %10, 0, !insn.addr !680
  %. = select i1 %12, i64 0, i64 4294967295
  store i64 %., i64* %x0.0.reg2mem, !insn.addr !681
  br label %dec_label_pc_2540, !insn.addr !681

dec_label_pc_2540:                                ; preds = %dec_label_pc_2500, %dec_label_pc_2520, %dec_label_pc_24c0
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !682

; uselistorder directives
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 1, 3 }
  uselistorder i64* %0, { 2, 1, 0 }
  uselistorder label %dec_label_pc_2540, { 1, 0, 2 }
}

define i64 @memop_bzero() local_unnamed_addr {
dec_label_pc_2548:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !683
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = icmp eq i64 %2, 0, !insn.addr !684
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !685
  br i1 %3, label %dec_label_pc_2590, label %dec_label_pc_256c, !insn.addr !685

dec_label_pc_256c:                                ; preds = %dec_label_pc_2548
  %4 = trunc i64 %1 to i32, !insn.addr !686
  %5 = inttoptr i64 %2 to i64*, !insn.addr !687
  %6 = call i64* @memset(i64* %5, i32 0, i32 %4), !insn.addr !687
  %7 = urem i64 %2, 256, !insn.addr !688
  store i64 %7, i64* %storemerge.reg2mem, !insn.addr !688
  br label %dec_label_pc_2590, !insn.addr !688

dec_label_pc_2590:                                ; preds = %dec_label_pc_2548, %dec_label_pc_256c
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !689

; uselistorder directives
  uselistorder i64 %2, { 2, 0, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64* (i64*, i32, i32)* @memset, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2590, { 1, 0 }
}

define i64 @memop_bcopy() local_unnamed_addr {
dec_label_pc_2598:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !690
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = trunc i64 %1 to i32, !insn.addr !691
  %5 = icmp eq i64 %3, 0, !insn.addr !692
  %6 = icmp eq i64 %2, 0, !insn.addr !693
  %or.cond = or i1 %6, %5
  %7 = icmp eq i32 %4, 0, !insn.addr !694
  %or.cond4 = or i1 %7, %or.cond
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !695
  br i1 %or.cond4, label %dec_label_pc_25f0, label %dec_label_pc_25d8, !insn.addr !695

dec_label_pc_25d8:                                ; preds = %dec_label_pc_2598
  %8 = inttoptr i64 %2 to i64*, !insn.addr !696
  %9 = inttoptr i64 %3 to i64*, !insn.addr !696
  %10 = call i64* @memmove(i64* %8, i64* %9, i32 %4), !insn.addr !696
  %11 = urem i64 %2, 256, !insn.addr !697
  store i64 %11, i64* %storemerge.reg2mem, !insn.addr !697
  br label %dec_label_pc_25f0, !insn.addr !697

dec_label_pc_25f0:                                ; preds = %dec_label_pc_2598, %dec_label_pc_25d8
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !698

; uselistorder directives
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64 %2, { 2, 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %0, { 2, 1, 0 }
  uselistorder i64* (i64*, i64*, i32)* @memmove, { 1, 0, 2 }
  uselistorder i32 0, { 19, 24, 18, 31, 20, 21, 22, 23, 33, 34, 25, 26, 35, 10, 0, 13, 1, 2, 11, 3, 14, 4, 5, 15, 12, 6, 16, 7, 32, 8, 9, 17, 27, 28, 29, 30 }
  uselistorder label %dec_label_pc_25f0, { 1, 0 }
}

define i64 @memop_unaligned_access() local_unnamed_addr {
dec_label_pc_25f8:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !699
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %1, 0, !insn.addr !700
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !701
  br i1 %2, label %dec_label_pc_2664, label %dec_label_pc_262c, !insn.addr !701

dec_label_pc_262c:                                ; preds = %dec_label_pc_25f8
  %3 = add i64 %1, 1, !insn.addr !702
  %4 = inttoptr i64 %3 to i32*, !insn.addr !703
  %5 = load i32, i32* %4, align 4, !insn.addr !703
  %6 = zext i32 %5 to i64, !insn.addr !704
  store i64 %6, i64* %storemerge.reg2mem, !insn.addr !704
  br label %dec_label_pc_2664, !insn.addr !704

dec_label_pc_2664:                                ; preds = %dec_label_pc_262c, %dec_label_pc_25f8
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !705

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 1, { 8, 0, 9, 6, 7, 2, 4, 3, 5, 1 }
}

define i64 @memop_memory_barrier() local_unnamed_addr {
dec_label_pc_2670:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !706
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %1, 0, !insn.addr !707
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !708
  br i1 %2, label %dec_label_pc_26ac, label %dec_label_pc_268c, !insn.addr !708

dec_label_pc_268c:                                ; preds = %dec_label_pc_2670
  call void @__asm_dmb(i64 undef), !insn.addr !709
  %3 = mul i64 %1, 2, !insn.addr !710
  %4 = and i64 %3, 4294967294, !insn.addr !710
  store i64 %4, i64* %storemerge.reg2mem, !insn.addr !710
  br label %dec_label_pc_26ac, !insn.addr !710

dec_label_pc_26ac:                                ; preds = %dec_label_pc_2670, %dec_label_pc_268c
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !711

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 4294967294, { 4, 6, 0, 1, 2, 3, 5, 7, 8 }
  uselistorder label %dec_label_pc_26ac, { 1, 0 }
}

define i64 @test_memory_op_functions() local_unnamed_addr {
dec_label_pc_26b4:
  %x0.0.reg2mem = alloca i64, !insn.addr !712
  %0 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !713
  %1 = inttoptr i64 %0 to i64*, !insn.addr !714
  %2 = load i64, i64* %1, align 8, !insn.addr !714
  %3 = call i32 @puts(i8* bitcast (i8** @global_var_2f28 to i8*)), !insn.addr !715
  %4 = call i64 @memop_memset(), !insn.addr !716
  %5 = and i64 %4, 4294967295, !insn.addr !717
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2f50, i64 0, i64 0), i64 %5), !insn.addr !718
  %7 = call i64 @memop_memcpy(), !insn.addr !719
  %8 = and i64 %7, 4294967295, !insn.addr !720
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2f68, i64 0, i64 0), i64 %8), !insn.addr !721
  %10 = call i64 @memop_memmove(), !insn.addr !722
  %11 = trunc i64 %10 to i8, !insn.addr !723
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2f80, i64 0, i64 0), i8 %11), !insn.addr !723
  %13 = call i64 @memop_memcmp(), !insn.addr !724
  %14 = and i64 %13, 4294967295, !insn.addr !725
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2f98, i64 0, i64 0), i64 %14), !insn.addr !726
  %16 = call i64 @memop_bzero(), !insn.addr !727
  %17 = and i64 %16, 4294967295, !insn.addr !728
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2fb0, i64 0, i64 0), i64 %17), !insn.addr !729
  %19 = call i64 @memop_bcopy(), !insn.addr !730
  %20 = and i64 %19, 4294967295, !insn.addr !731
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2fc8, i64 0, i64 0), i64 %20), !insn.addr !732
  %22 = call i64 @memop_unaligned_access(), !insn.addr !733
  %23 = trunc i64 %22 to i32, !insn.addr !734
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_2fe0, i64 0, i64 0), i32 %23), !insn.addr !735
  %25 = call i64 @memop_memory_barrier(), !insn.addr !736
  %26 = and i64 %25, 4294967295, !insn.addr !737
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2ff8, i64 0, i64 0), i64 %26), !insn.addr !738
  %28 = load i64, i64* @global_var_13fe0, align 8, !insn.addr !739
  %29 = inttoptr i64 %28 to i64*, !insn.addr !740
  %30 = load i64, i64* %29, align 8, !insn.addr !740
  %31 = icmp eq i64 %2, %30, !insn.addr !741
  store i64 %28, i64* %x0.0.reg2mem, !insn.addr !742
  br i1 %31, label %dec_label_pc_2890, label %dec_label_pc_288c, !insn.addr !742

dec_label_pc_288c:                                ; preds = %dec_label_pc_26b4
  call void @__stack_chk_fail(), !insn.addr !743
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.0.reg2mem, !insn.addr !743
  br label %dec_label_pc_2890, !insn.addr !743

dec_label_pc_2890:                                ; preds = %dec_label_pc_288c, %dec_label_pc_26b4
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !744

; uselistorder directives
  uselistorder i64 ptrtoint (i32* @0 to i64), { 0, 1, 4, 2, 3, 5, 6 }
  uselistorder void ()* @__stack_chk_fail, { 7, 0, 4, 5, 8, 3, 1, 2, 6, 9 }
  uselistorder i32 (i8*, ...)* @printf, { 43, 21, 25, 13, 18, 12, 48, 45, 39, 37, 35, 33, 32, 24, 15, 26, 22, 27, 19, 28, 17, 29, 11, 30, 7, 6, 4, 3, 1, 41, 9, 10, 36, 2, 46, 0, 5, 34, 14, 31, 8, 47, 20, 40, 16, 23, 38, 42, 44, 49 }
  uselistorder i32 (i8*)* @puts, { 3, 1, 2, 0, 4 }
  uselistorder i64* @global_var_13fe0, { 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 0, 13, 1, 14, 2, 15, 16, 17 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_2898:
  %0 = call i64 @test_stack_memory(), !insn.addr !745
  %1 = call i64 @test_heap_memory(), !insn.addr !746
  %2 = call i64 @test_static_global(), !insn.addr !747
  %3 = call i64 @test_memory_op_functions(), !insn.addr !748
  ret i64 0, !insn.addr !749

; uselistorder directives
  uselistorder i64 0, { 10, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 142, 143, 37, 144, 145, 20, 0, 38, 146, 57, 147, 39, 148, 149, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 150, 151, 152, 40, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 1, 153, 112, 113, 154, 155, 156, 157, 158, 159, 2, 160, 114, 3, 18, 161, 162, 163, 19, 4, 5, 6, 164, 165, 7, 8, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 11, 14, 166, 133, 167, 168, 15, 12, 16, 169, 134, 170, 171, 17, 9, 172, 13, 173, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 135, 136, 137, 138, 139, 140, 141 }
}

define i64 @extern_function() local_unnamed_addr {
dec_label_pc_28bc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 3, !insn.addr !750
  %3 = and i64 %2, 4294967295, !insn.addr !750
  ret i64 %3, !insn.addr !751

; uselistorder directives
  uselistorder i64 4294967295, { 29, 30, 31, 32, 33, 34, 35, 0, 1, 2, 3, 27, 5, 4, 6, 7, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 8, 25, 28, 55, 9, 56, 57, 58, 59, 60, 61, 62, 63, 64, 10, 26, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 23, 75, 24, 76 }
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_28dc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !752

; uselistorder directives
  uselistorder i32 1, { 32, 31, 35, 36, 30, 37, 29, 38, 28, 39, 27, 40, 26, 41, 25, 42, 24, 43, 23, 44, 45, 22, 21, 46, 20, 19, 18, 17, 16, 47, 15, 93, 95, 48, 50, 49, 51, 14, 52, 103, 102, 54, 53, 13, 56, 55, 57, 12, 104, 66, 65, 64, 63, 62, 61, 60, 59, 58, 67, 11, 68, 10, 106, 105, 70, 69, 9, 74, 73, 72, 71, 107, 78, 77, 76, 75, 8, 109, 108, 80, 79, 7, 81, 111, 110, 97, 85, 84, 83, 82, 113, 112, 94, 98, 89, 88, 87, 86, 114, 99, 90, 34, 6, 5, 4, 100, 91, 33, 3, 2, 1, 92, 101, 0, 96 }
}

declare i64* @memcpy(i64*, i64*, i32) local_unnamed_addr

declare i64* @memmove(i64*, i64*, i32) local_unnamed_addr

declare void @exit(i32) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @perror(i8*) local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i32 @fork() local_unnamed_addr

declare i64* @malloc(i32) local_unnamed_addr

declare i64* @memset(i64*, i32, i32) local_unnamed_addr

declare i64* @calloc(i32, i32) local_unnamed_addr

declare i64* @realloc(i64*, i32) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @memcmp(i64*, i64*, i32) local_unnamed_addr

declare void @free(i64*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @waitpid(i32, i32*, i32) local_unnamed_addr

declare i64 @__asm_mrs(i64, i64) local_unnamed_addr

declare void @__asm_dmb(i64) local_unnamed_addr

!0 = !{i64 2508}
!1 = !{i64 2516}
!2 = !{i64 2572}
!3 = !{i64 2588}
!4 = !{i64 2604}
!5 = !{i64 2620}
!6 = !{i64 2636}
!7 = !{i64 2652}
!8 = !{i64 2668}
!9 = !{i64 2684}
!10 = !{i64 2700}
!11 = !{i64 2716}
!12 = !{i64 2732}
!13 = !{i64 2748}
!14 = !{i64 2764}
!15 = !{i64 2780}
!16 = !{i64 2796}
!17 = !{i64 2812}
!18 = !{i64 2828}
!19 = !{i64 2844}
!20 = !{i64 2860}
!21 = !{i64 2912}
!22 = !{i64 2924}
!23 = !{i64 2928}
!24 = !{i64 2936}
!25 = !{i64 2940}
!26 = !{i64 2944}
!27 = !{i64 2948}
!28 = !{i64 3004}
!29 = !{i64 3064}
!30 = !{i64 3072}
!31 = !{i64 3088}
!32 = !{i64 3092}
!33 = !{i64 3100}
!34 = !{i64 3104}
!35 = !{i64 3112}
!36 = !{i64 3116}
!37 = !{i64 3120}
!38 = !{i64 3128}
!39 = !{i64 3140}
!40 = !{i64 3152}
!41 = !{i64 3168}
!42 = !{i64 3176}
!43 = !{i64 3200}
!44 = !{i64 3212}
!45 = !{i64 3220}
!46 = !{i64 3228}
!47 = !{i64 3232}
!48 = !{i64 3240}
!49 = !{i64 3248}
!50 = !{i64 3252}
!51 = !{i64 3292}
!52 = !{i64 3280}
!53 = !{i64 3288}
!54 = !{i64 3296}
!55 = !{i64 3320}
!56 = !{i64 3336}
!57 = !{i64 3344}
!58 = !{i64 3348}
!59 = !{i64 3356}
!60 = !{i64 3360}
!61 = !{i64 3328}
!62 = !{i64 3372}
!63 = !{i64 3412}
!64 = !{i64 3420}
!65 = !{i64 3448}
!66 = !{i64 3460}
!67 = !{i64 3504}
!68 = !{i64 3512}
!69 = !{i64 3516}
!70 = !{i64 3596}
!71 = !{i64 3532}
!72 = !{i64 3536}
!73 = !{i64 3568}
!74 = !{i64 3564}
!75 = !{i64 3572}
!76 = !{i64 3580}
!77 = !{i64 3624}
!78 = !{i64 3632}
!79 = !{i64 3636}
!80 = !{i64 3640}
!81 = !{i64 3652}
!82 = !{i64 3656}
!83 = !{i64 3668}
!84 = !{i64 3676}
!85 = !{i64 3680}
!86 = !{i64 3708}
!87 = !{i64 3712}
!88 = !{i64 3720}
!89 = !{i64 3664}
!90 = !{i64 3808}
!91 = !{i64 3812}
!92 = !{i64 3824}
!93 = !{i64 3828}
!94 = !{i64 3832}
!95 = !{i64 3836}
!96 = !{i64 3840}
!97 = !{i64 3844}
!98 = !{i64 3852}
!99 = !{i64 3856}
!100 = !{i64 3860}
!101 = !{i64 3864}
!102 = !{i64 3868}
!103 = !{i64 3872}
!104 = !{i64 3876}
!105 = !{i64 3884}
!106 = !{i64 3888}
!107 = !{i64 3944}
!108 = !{i64 3952}
!109 = !{i64 3912}
!110 = !{i64 3920}
!111 = !{i64 3924}
!112 = !{i64 3932}
!113 = !{i64 3940}
!114 = !{i64 3964}
!115 = !{i64 3968}
!116 = !{i64 3980}
!117 = !{i64 3984}
!118 = !{i64 4012}
!119 = !{i64 4020}
!120 = !{i64 4024}
!121 = !{i64 4040}
!122 = !{i64 4044}
!123 = !{i64 4056}
!124 = !{i64 4064}
!125 = !{i64 4068}
!126 = !{i64 4088}
!127 = !{i64 4052}
!128 = !{i64 4104}
!129 = !{i64 4108}
!130 = !{i64 4120}
!131 = !{i64 4124}
!132 = !{i64 4128}
!133 = !{i64 4132}
!134 = !{i64 4136}
!135 = !{i64 4140}
!136 = !{i64 4148}
!137 = !{i64 4152}
!138 = !{i64 4156}
!139 = !{i64 4160}
!140 = !{i64 4164}
!141 = !{i64 4168}
!142 = !{i64 4172}
!143 = !{i64 4180}
!144 = !{i64 4184}
!145 = !{i64 4256}
!146 = !{i64 4264}
!147 = !{i64 4204}
!148 = !{i64 4208}
!149 = !{i64 4216}
!150 = !{i64 4232}
!151 = !{i64 4236}
!152 = !{i64 4244}
!153 = !{i64 4252}
!154 = !{i64 4272}
!155 = !{i64 4276}
!156 = !{i64 4280}
!157 = !{i64 4284}
!158 = !{i64 4288}
!159 = !{i64 4296}
!160 = !{i64 4300}
!161 = !{i64 4324}
!162 = !{i64 4332}
!163 = !{i64 4336}
!164 = !{i64 4352}
!165 = !{i64 4516}
!166 = !{i64 4520}
!167 = !{i64 4532}
!168 = !{i64 4536}
!169 = !{i64 4556}
!170 = !{i64 4564}
!171 = !{i64 4568}
!172 = !{i64 4580}
!173 = !{i64 4588}
!174 = !{i64 4592}
!175 = !{i64 4604}
!176 = !{i64 4612}
!177 = !{i64 4616}
!178 = !{i64 4628}
!179 = !{i64 4636}
!180 = !{i64 4640}
!181 = !{i64 4652}
!182 = !{i64 4696}
!183 = !{i64 4700}
!184 = !{i64 4712}
!185 = !{i64 4716}
!186 = !{i64 4720}
!187 = !{i64 4732}
!188 = !{i64 4740}
!189 = !{i64 4744}
!190 = !{i64 4756}
!191 = !{i64 4764}
!192 = !{i64 4768}
!193 = !{i64 4780}
!194 = !{i64 4796}
!195 = !{i64 4800}
!196 = !{i64 4812}
!197 = !{i64 4824}
!198 = !{i64 4832}
!199 = !{i64 4836}
!200 = !{i64 4844}
!201 = !{i64 4848}
!202 = !{i64 4856}
!203 = !{i64 4860}
!204 = !{i64 4868}
!205 = !{i64 4880}
!206 = !{i64 4892}
!207 = !{i64 4896}
!208 = !{i64 4968}
!209 = !{i64 4916}
!210 = !{i64 4920}
!211 = !{i64 4928}
!212 = !{i64 4936}
!213 = !{i64 4940}
!214 = !{i64 4948}
!215 = !{i64 4976}
!216 = !{i64 4980}
!217 = !{i64 4984}
!218 = !{i64 4988}
!219 = !{i64 4992}
!220 = !{i64 5000}
!221 = !{i64 5004}
!222 = !{i64 5016}
!223 = !{i64 5020}
!224 = !{i64 5028}
!225 = !{i64 5032}
!226 = !{i64 5040}
!227 = !{i64 5052}
!228 = !{i64 5064}
!229 = !{i64 5068}
!230 = !{i64 5148}
!231 = !{i64 5092}
!232 = !{i64 5096}
!233 = !{i64 5104}
!234 = !{i64 5108}
!235 = !{i64 5116}
!236 = !{i64 5128}
!237 = !{i64 5156}
!238 = !{i64 5160}
!239 = !{i64 5168}
!240 = !{i64 5172}
!241 = !{i64 5184}
!242 = !{i64 5196}
!243 = !{i64 5200}
!244 = !{i64 5224}
!245 = !{i64 5232}
!246 = !{i64 5244}
!247 = !{i64 5268}
!248 = !{i64 5276}
!249 = !{i64 5292}
!250 = !{i64 5304}
!251 = !{i64 5308}
!252 = !{i64 5316}
!253 = !{i64 5324}
!254 = !{i64 5352}
!255 = !{i64 5360}
!256 = !{i64 5384}
!257 = !{i64 5408}
!258 = !{i64 5416}
!259 = !{i64 5420}
!260 = !{i64 5432}
!261 = !{i64 5440}
!262 = !{i64 5444}
!263 = !{i64 5460}
!264 = !{i64 5464}
!265 = !{i64 5472}
!266 = !{i64 5476}
!267 = !{i64 5484}
!268 = !{i64 5496}
!269 = !{i64 5508}
!270 = !{i64 5512}
!271 = !{i64 5592}
!272 = !{i64 5532}
!273 = !{i64 5536}
!274 = !{i64 5544}
!275 = !{i64 5560}
!276 = !{i64 5564}
!277 = !{i64 5572}
!278 = !{i64 5600}
!279 = !{i64 5604}
!280 = !{i64 5608}
!281 = !{i64 5612}
!282 = !{i64 5616}
!283 = !{i64 5624}
!284 = !{i64 5628}
!285 = !{i64 5640}
!286 = !{i64 5644}
!287 = !{i64 5652}
!288 = !{i64 5656}
!289 = !{i64 5672}
!290 = !{i64 5684}
!291 = !{i64 5688}
!292 = !{i64 5664}
!293 = !{i64 5708}
!294 = !{i64 5716}
!295 = !{i64 5724}
!296 = !{i64 5732}
!297 = !{i64 5744}
!298 = !{i64 5756}
!299 = !{i64 5760}
!300 = !{i64 5768}
!301 = !{i64 5772}
!302 = !{i64 5792}
!303 = !{i64 5804}
!304 = !{i64 5816}
!305 = !{i64 5820}
!306 = !{i64 5844}
!307 = !{i64 5860}
!308 = !{i64 5864}
!309 = !{i64 5880}
!310 = !{i64 5884}
!311 = !{i64 5896}
!312 = !{i64 5904}
!313 = !{i64 5924}
!314 = !{i64 5936}
!315 = !{i64 5940}
!316 = !{i64 5944}
!317 = !{i64 5956}
!318 = !{i64 5960}
!319 = !{i64 5988}
!320 = !{i64 6000}
!321 = !{i64 6004}
!322 = !{i64 6044}
!323 = !{i64 6048}
!324 = !{i64 6024}
!325 = !{i64 6036}
!326 = !{i64 6076}
!327 = !{i64 6088}
!328 = !{i64 6096}
!329 = !{i64 6104}
!330 = !{i64 6108}
!331 = !{i64 6140}
!332 = !{i64 6148}
!333 = !{i64 6156}
!334 = !{i64 6172}
!335 = !{i64 6232}
!336 = !{i64 6196}
!337 = !{i64 6204}
!338 = !{i64 6216}
!339 = !{i64 6228}
!340 = !{i64 6252}
!341 = !{i64 6264}
!342 = !{i64 6272}
!343 = !{i64 6276}
!344 = !{i64 6288}
!345 = !{i64 6292}
!346 = !{i64 6308}
!347 = !{i64 6320}
!348 = !{i64 6324}
!349 = !{i64 6300}
!350 = !{i64 6336}
!351 = !{i64 6344}
!352 = !{i64 6352}
!353 = !{i64 6364}
!354 = !{i64 6368}
!355 = !{i64 6380}
!356 = !{i64 6392}
!357 = !{i64 6396}
!358 = !{i64 6412}
!359 = !{i64 6424}
!360 = !{i64 6432}
!361 = !{i64 6444}
!362 = !{i64 6456}
!363 = !{i64 6460}
!364 = !{i64 6472}
!365 = !{i64 6476}
!366 = !{i64 6504}
!367 = !{i64 6512}
!368 = !{i64 6516}
!369 = !{i64 6520}
!370 = !{i64 6532}
!371 = !{i64 6540}
!372 = !{i64 6548}
!373 = !{i64 6556}
!374 = !{i64 6568}
!375 = !{i64 6572}
!376 = !{i64 6584}
!377 = !{i64 6588}
!378 = !{i64 6604}
!379 = !{i64 6612}
!380 = !{i64 6616}
!381 = !{i64 6624}
!382 = !{i64 6628}
!383 = !{i64 6636}
!384 = !{i64 6640}
!385 = !{i64 6648}
!386 = !{i64 6660}
!387 = !{i64 6672}
!388 = !{i64 6676}
!389 = !{i64 6744}
!390 = !{i64 6696}
!391 = !{i64 6700}
!392 = !{i64 6708}
!393 = !{i64 6716}
!394 = !{i64 6724}
!395 = !{i64 6752}
!396 = !{i64 6756}
!397 = !{i64 6760}
!398 = !{i64 6764}
!399 = !{i64 6768}
!400 = !{i64 6776}
!401 = !{i64 6780}
!402 = !{i64 6788}
!403 = !{i64 6792}
!404 = !{i64 6804}
!405 = !{i64 6816}
!406 = !{i64 6820}
!407 = !{i64 6840}
!408 = !{i64 6868}
!409 = !{i64 6876}
!410 = !{i64 6884}
!411 = !{i64 6892}
!412 = !{i64 6900}
!413 = !{i64 6904}
!414 = !{i64 6920}
!415 = !{i64 6924}
!416 = !{i64 6932}
!417 = !{i64 6944}
!418 = !{i64 6948}
!419 = !{i64 6968}
!420 = !{i64 6976}
!421 = !{i64 6984}
!422 = !{i64 6992}
!423 = !{i64 7000}
!424 = !{i64 7008}
!425 = !{i64 7012}
!426 = !{i64 7024}
!427 = !{i64 7036}
!428 = !{i64 7040}
!429 = !{i64 7064}
!430 = !{i64 7072}
!431 = !{i64 7088}
!432 = !{i64 7112}
!433 = !{i64 7120}
!434 = !{i64 7132}
!435 = !{i64 7136}
!436 = !{i64 7144}
!437 = !{i64 7148}
!438 = !{i64 7160}
!439 = !{i64 7164}
!440 = !{i64 7184}
!441 = !{i64 7192}
!442 = !{i64 7196}
!443 = !{i64 7208}
!444 = !{i64 7216}
!445 = !{i64 7220}
!446 = !{i64 7232}
!447 = !{i64 7236}
!448 = !{i64 7240}
!449 = !{i64 7252}
!450 = !{i64 7260}
!451 = !{i64 7264}
!452 = !{i64 7276}
!453 = !{i64 7284}
!454 = !{i64 7288}
!455 = !{i64 7300}
!456 = !{i64 7312}
!457 = !{i64 7316}
!458 = !{i64 7328}
!459 = !{i64 7364}
!460 = !{i64 7368}
!461 = !{i64 7380}
!462 = !{i64 7384}
!463 = !{i64 7388}
!464 = !{i64 7400}
!465 = !{i64 7408}
!466 = !{i64 7412}
!467 = !{i64 7424}
!468 = !{i64 7436}
!469 = !{i64 7440}
!470 = !{i64 7452}
!471 = !{i64 7456}
!472 = !{i64 7460}
!473 = !{i64 7480}
!474 = !{i64 7488}
!475 = !{i64 7500}
!476 = !{i64 7520}
!477 = !{i64 7524}
!478 = !{i64 7528}
!479 = !{i64 7532}
!480 = !{i64 7536}
!481 = !{i64 7564}
!482 = !{i64 7568}
!483 = !{i64 7596}
!484 = !{i64 7612}
!485 = !{i64 7636}
!486 = !{i64 7640}
!487 = !{i64 7652}
!488 = !{i64 7664}
!489 = !{i64 7672}
!490 = !{i64 7676}
!491 = !{i64 7684}
!492 = !{i64 7688}
!493 = !{i64 7696}
!494 = !{i64 7724}
!495 = !{i64 7740}
!496 = !{i64 7752}
!497 = !{i64 7756}
!498 = !{i64 7760}
!499 = !{i64 7764}
!500 = !{i64 7768}
!501 = !{i64 7780}
!502 = !{i64 7816}
!503 = !{i64 7824}
!504 = !{i64 7832}
!505 = !{i64 7840}
!506 = !{i64 7912}
!507 = !{i64 7928}
!508 = !{i64 7936}
!509 = !{i64 7956}
!510 = !{i64 7960}
!511 = !{i64 7968}
!512 = !{i64 7976}
!513 = !{i64 7980}
!514 = !{i64 7984}
!515 = !{i64 7988}
!516 = !{i64 8004}
!517 = !{i64 8012}
!518 = !{i64 8048}
!519 = !{i64 8060}
!520 = !{i64 8064}
!521 = !{i64 8076}
!522 = !{i64 8080}
!523 = !{i64 8092}
!524 = !{i64 8104}
!525 = !{i64 8108}
!526 = !{i64 8112}
!527 = !{i64 8120}
!528 = !{i64 8136}
!529 = !{i64 8148}
!530 = !{i64 8160}
!531 = !{i64 8164}
!532 = !{i64 8200}
!533 = !{i64 8224}
!534 = !{i64 8228}
!535 = !{i64 8232}
!536 = !{i64 8248}
!537 = !{i64 8252}
!538 = !{i64 8268}
!539 = !{i64 8272}
!540 = !{i64 8308}
!541 = !{i64 8312}
!542 = !{i64 8328}
!543 = !{i64 8332}
!544 = !{i64 8344}
!545 = !{i64 8356}
!546 = !{i64 8368}
!547 = !{i64 8372}
!548 = !{i64 8384}
!549 = !{i64 8388}
!550 = !{i64 8392}
!551 = !{i64 8400}
!552 = !{i64 8404}
!553 = !{i64 8412}
!554 = !{i64 8420}
!555 = !{i64 8424}
!556 = !{i64 8432}
!557 = !{i64 8436}
!558 = !{i64 8440}
!559 = !{i64 8448}
!560 = !{i64 8452}
!561 = !{i64 8464}
!562 = !{i64 8468}
!563 = !{i64 8488}
!564 = !{i64 8500}
!565 = !{i64 8508}
!566 = !{i64 8524}
!567 = !{i64 8528}
!568 = !{i64 8552}
!569 = !{i64 8564}
!570 = !{i64 8572}
!571 = !{i64 8576}
!572 = !{i64 8584}
!573 = !{i64 8588}
!574 = !{i64 8556}
!575 = !{i64 8600}
!576 = !{i64 8604}
!577 = !{i64 8616}
!578 = !{i64 8620}
!579 = !{i64 8640}
!580 = !{i64 8644}
!581 = !{i64 8648}
!582 = !{i64 8660}
!583 = !{i64 8664}
!584 = !{i64 8668}
!585 = !{i64 8680}
!586 = !{i64 8688}
!587 = !{i64 8692}
!588 = !{i64 8704}
!589 = !{i64 8712}
!590 = !{i64 8720}
!591 = !{i64 8724}
!592 = !{i64 8736}
!593 = !{i64 8744}
!594 = !{i64 8748}
!595 = !{i64 8760}
!596 = !{i64 8768}
!597 = !{i64 8772}
!598 = !{i64 8784}
!599 = !{i64 8788}
!600 = !{i64 8792}
!601 = !{i64 8804}
!602 = !{i64 8808}
!603 = !{i64 8812}
!604 = !{i64 8824}
!605 = !{i64 8828}
!606 = !{i64 8832}
!607 = !{i64 8844}
!608 = !{i64 8848}
!609 = !{i64 8852}
!610 = !{i64 8864}
!611 = !{i64 8868}
!612 = !{i64 8872}
!613 = !{i64 8884}
!614 = !{i64 8888}
!615 = !{i64 8892}
!616 = !{i64 8904}
!617 = !{i64 8912}
!618 = !{i64 8916}
!619 = !{i64 8920}
!620 = !{i64 8932}
!621 = !{i64 8944}
!622 = !{i64 8952}
!623 = !{i64 8956}
!624 = !{i64 8968}
!625 = !{i64 8984}
!626 = !{i64 8988}
!627 = !{i64 9000}
!628 = !{i64 9004}
!629 = !{i64 9008}
!630 = !{i64 9020}
!631 = !{i64 9028}
!632 = !{i64 9032}
!633 = !{i64 9044}
!634 = !{i64 9048}
!635 = !{i64 9052}
!636 = !{i64 9064}
!637 = !{i64 9076}
!638 = !{i64 9084}
!639 = !{i64 9088}
!640 = !{i64 9096}
!641 = !{i64 9100}
!642 = !{i64 9108}
!643 = !{i64 9112}
!644 = !{i64 9124}
!645 = !{i64 9136}
!646 = !{i64 9148}
!647 = !{i64 9140}
!648 = !{i64 9128}
!649 = !{i64 9176}
!650 = !{i64 9184}
!651 = !{i64 9192}
!652 = !{i64 9196}
!653 = !{i64 9212}
!654 = !{i64 9220}
!655 = !{i64 9232}
!656 = !{i64 9244}
!657 = !{i64 9224}
!658 = !{i64 9272}
!659 = !{i64 9284}
!660 = !{i64 9292}
!661 = !{i64 9296}
!662 = !{i64 9304}
!663 = !{i64 9308}
!664 = !{i64 9328}
!665 = !{i64 9332}
!666 = !{i64 9340}
!667 = !{i64 9344}
!668 = !{i64 9360}
!669 = !{i64 9384}
!670 = !{i64 9396}
!671 = !{i64 9404}
!672 = !{i64 9408}
!673 = !{i64 9424}
!674 = !{i64 9432}
!675 = !{i64 9444}
!676 = !{i64 9456}
!677 = !{i64 9436}
!678 = !{i64 9484}
!679 = !{i64 9500}
!680 = !{i64 9508}
!681 = !{i64 9520}
!682 = !{i64 9540}
!683 = !{i64 9544}
!684 = !{i64 9564}
!685 = !{i64 9568}
!686 = !{i64 9556}
!687 = !{i64 9604}
!688 = !{i64 9612}
!689 = !{i64 9620}
!690 = !{i64 9624}
!691 = !{i64 9640}
!692 = !{i64 9648}
!693 = !{i64 9660}
!694 = !{i64 9672}
!695 = !{i64 9652}
!696 = !{i64 9700}
!697 = !{i64 9708}
!698 = !{i64 9716}
!699 = !{i64 9720}
!700 = !{i64 9756}
!701 = !{i64 9760}
!702 = !{i64 9776}
!703 = !{i64 9780}
!704 = !{i64 9788}
!705 = !{i64 9836}
!706 = !{i64 9840}
!707 = !{i64 9852}
!708 = !{i64 9856}
!709 = !{i64 9880}
!710 = !{i64 9896}
!711 = !{i64 9904}
!712 = !{i64 9908}
!713 = !{i64 9920}
!714 = !{i64 9924}
!715 = !{i64 9944}
!716 = !{i64 10000}
!717 = !{i64 10004}
!718 = !{i64 10016}
!719 = !{i64 10032}
!720 = !{i64 10036}
!721 = !{i64 10048}
!722 = !{i64 10088}
!723 = !{i64 10104}
!724 = !{i64 10176}
!725 = !{i64 10180}
!726 = !{i64 10192}
!727 = !{i64 10204}
!728 = !{i64 10208}
!729 = !{i64 10220}
!730 = !{i64 10252}
!731 = !{i64 10256}
!732 = !{i64 10268}
!733 = !{i64 10296}
!734 = !{i64 10300}
!735 = !{i64 10312}
!736 = !{i64 10328}
!737 = !{i64 10332}
!738 = !{i64 10344}
!739 = !{i64 10356}
!740 = !{i64 10364}
!741 = !{i64 10368}
!742 = !{i64 10376}
!743 = !{i64 10380}
!744 = !{i64 10388}
!745 = !{i64 10400}
!746 = !{i64 10404}
!747 = !{i64 10408}
!748 = !{i64 10412}
!749 = !{i64 10424}
!750 = !{i64 10448}
!751 = !{i64 10456}
!752 = !{i64 10476}
