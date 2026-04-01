source_filename = "test"
target datalayout = "e-m:e-i64:64-i128:128-n32:64-S128"

@global_var_13000 = global i64 2272
@global_var_13008 = local_unnamed_addr global i64 2272
@global_var_13010 = local_unnamed_addr global i64 2272
@global_var_13018 = local_unnamed_addr global i64 2272
@global_var_13020 = local_unnamed_addr global i64 2272
@global_var_13028 = local_unnamed_addr global i64 2272
@global_var_13030 = local_unnamed_addr global i64 2272
@global_var_13038 = local_unnamed_addr global i64 2272
@global_var_13040 = local_unnamed_addr global i64 2272
@global_var_13048 = local_unnamed_addr global i64 2272
@global_var_13050 = local_unnamed_addr global i64 2272
@global_var_13058 = local_unnamed_addr global i64 2272
@global_var_13060 = local_unnamed_addr global i64 2272
@global_var_13068 = local_unnamed_addr global i64 2272
@global_var_13070 = local_unnamed_addr global i64 2272
@global_var_13078 = local_unnamed_addr global i64 2272
@global_var_13080 = local_unnamed_addr global i64 2272
@global_var_13088 = local_unnamed_addr global i64 2272
@global_var_12fd0 = local_unnamed_addr global i64 7208
@global_var_12fc8 = local_unnamed_addr global i64 0
@global_var_130b0 = global i64 0
@global_var_12fb8 = local_unnamed_addr global i64 0
@global_var_12fe0 = local_unnamed_addr global i64 0
@global_var_b34 = local_unnamed_addr constant i64 4108059529072082976
@global_var_2000 = local_unnamed_addr constant [33 x i8] c"2-01 (access_extern_global): %d\0A\00"
@global_var_1c6c = constant [28 x i8] c"MEM-L1-01 (local_vars): %d\0A\00"
@global_var_1c88 = constant [29 x i8] c"MEM-L1-02 (local_array): %d\0A\00"
@global_var_1ca5 = constant [30 x i8] c"MEM-L1-03 (local_struct): %d\0A\00"
@global_var_1cc3 = constant [34 x i8] c"MEM-L1-04 (address_of_local): %d\0A\00"
@global_var_1ce5 = constant [34 x i8] c"MEM-L1-05 (address_of_array): %d\0A\00"
@global_var_1d07 = constant [35 x i8] c"MEM-L2-01 (large_stack_frame): %d\0A\00"
@global_var_1d2a = constant [27 x i8] c"MEM-L2-02 (vla_stack): %d\0A\00"
@global_var_1d45 = constant [30 x i8] c"MEM-L2-03 (alloca_usage): %d\0A\00"
@global_var_1d63 = constant [29 x i8] c"MEM-L2-04 (stack_alias): %d\0A\00"
@global_var_105c = local_unnamed_addr constant i64 -486375621140676576
@global_var_1178 = local_unnamed_addr constant i64 -5116089092068605856
@global_var_123c = local_unnamed_addr constant i64 -5476376644060970954
@global_var_1d80 = constant [23 x i8] c"value before free: %d\0A\00"
@global_var_1d97 = constant [29 x i8] c"HEAP-L2-01 (heap_basic): %d\0A\00"
@global_var_1db4 = constant [30 x i8] c"HEAP-L2-02 (heap_calloc): %d\0A\00"
@global_var_1dd2 = constant [31 x i8] c"HEAP-L2-03 (heap_realloc): %d\0A\00"
@global_var_1df1 = constant [29 x i8] c"HEAP-L2-04 (heap_array): %d\0A\00"
@global_var_1e0e = constant [30 x i8] c"HEAP-L2-05 (heap_struct): %d\0A\00"
@global_var_1568 = local_unnamed_addr constant i64 -8070450531937550303
@global_var_1e2c = constant [30 x i8] c"HEAP-L2-06 (heap_nested): %d\0A\00"
@global_var_1e4a = constant [35 x i8] c"HEAP-L3-01 (linked_list_heap): %d\0A\00"
@global_var_1e6d = constant [38 x i8] c"HEAP-L3-02 (tree_heap_traversal): %d\0A\00"
@global_var_1e93 = constant [30 x i8] c"HEAP-L3-03 (memory_leak): %d\0A\00"
@global_var_1eb1 = constant [32 x i8] c"HEAP-L3-04 (dangling_pointer): \00"
@global_var_1ee1 = constant i64 -1688658660658275102
@global_var_130bc = local_unnamed_addr global i64 0
@global_var_21b2 = constant [11 x i8] c"HelloWorld\00"
@global_var_130a0 = local_unnamed_addr global [11 x i8]* @global_var_21b2
@global_var_130c0 = local_unnamed_addr global i64 0
@global_var_130c8 = local_unnamed_addr global i64 0
@global_var_1f52 = constant [35 x i8] c"STM-L1-01 (global_var_access): %d\0A\00"
@global_var_1f75 = constant [33 x i8] c"STM-L1-01 (global_var_read): %d\0A\00"
@global_var_1f96 = constant [37 x i8] c"STM-L1-02 (global_array_access): %d\0A\00"
@global_var_1fbb = constant [30 x i8] c"STM-L1-03 (static_local): %d\0A\00"
@global_var_1fd9 = constant [34 x i8] c"STM-L1-04 (call_static_func): %d\0A\00"
@global_var_1ffb = constant [38 x i8] c"STM-L2-01 (access_extern_global): %d\0A\00"
@global_var_2021 = constant [34 x i8] c"STM-L2-02 (call_extern_func): %d\0A\00"
@global_var_2043 = constant [33 x i8] c"STM-L2-03 (read_const_data): %d\0A\00"
@global_var_2064 = constant [32 x i8] c"STM-L2-04 (access_bss_var): %d\0A\00"
@global_var_2084 = constant [35 x i8] c"STM-L2-04 (access_bss_buffer): %d\0A\00"
@global_var_20a7 = constant [38 x i8] c"STM-L2-05 (global_struct_access): %d\0A\00"
@global_var_20cd = constant [29 x i8] c"STM-L2-06 (file_static): %d\0A\00"
@global_var_1910 = local_unnamed_addr constant i64 -5764607520618315767
@global_var_20ea = constant [33 x i8] c"STM-L2-07 (global_func_ptr): %d\0A\00"
@global_var_210b = constant [35 x i8] c"STM-L2-08 (global_heap_store): %d\0A\00"
@global_var_212e = constant [37 x i8] c"STM-L2-09 (static_complex_init): %d\0A\00"
@global_var_2153 = constant [28 x i8] c"STM-L3-01 (tls_access): %d\0A\00"
@global_var_216f = constant [33 x i8] c"STM-L3-02 (init_order_test): %d\0A\00"
@global_var_2190 = constant [17 x i8] c"MEMOP-L2-01: %d\0A\00"
@global_var_21a1 = constant [17 x i8] c"MEMOP-L2-02: %d\0A\00"
@global_var_1b80 = local_unnamed_addr constant i64 -5764607520081444856
@global_var_21bd = constant [17 x i8] c"MEMOP-L2-03: %c\0A\00"
@global_var_21ce = constant [17 x i8] c"MEMOP-L2-04: %d\0A\00"
@global_var_21df = constant [17 x i8] c"MEMOP-L2-05: %d\0A\00"
@global_var_21f0 = constant [17 x i8] c"MEMOP-L2-06: %d\0A\00"
@global_var_2201 = constant [19 x i8] c"MEMOP-L3-01: 0x%x\0A\00"
@global_var_2214 = constant [17 x i8] c"MEMOP-L3-02: %d\0A\00"
@0 = external global i32
@global_var_800 = global i1 false
@global_var_3e9 = global i32 0
@global_var_3e8 = global i32 0
@1 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\88\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_2225 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @1, i64 0, i64 0)
@2 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\A0\86\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_2243 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @2, i64 0, i64 0)
@3 = internal constant [65 x i8] c"\E2\9C\97 \E5\AD\90\E8\BF\9B\E7\A8\8B\E8\A2\AB\E4\BF\A1\E5\8F\B7\E7\BB\88\E6\AD\A2 (\E4\BF\A1\E5\8F\B7%d) - \E9\87\8E\E6\8C\87\E9\92\88\E5\AF\BC\E8\87\B4\E5\B4\A9\E6\BA\83\0A\00"
@global_var_1f06 = constant i8* getelementptr inbounds ([65 x i8], [65 x i8]* @3, i64 0, i64 0)
@4 = internal constant [11 x i8] c"fork\E5\A4\B1\E8\B4\A5\00"
@global_var_1f47 = constant i8* getelementptr inbounds ([11 x i8], [11 x i8]* @4, i64 0, i64 0)
@5 = internal constant [16 x i8] c"%d (\E5\AD\90\E8\BF\9B\E7\A8\8B)\0A\00"
@global_var_1ed1 = constant i8* getelementptr inbounds ([16 x i8], [16 x i8]* @5, i64 0, i64 0)
@global_var_130b8 = local_unnamed_addr global i32 0
@global_var_130b9 = global i32 0
@global_var_22a8 = constant i32* inttoptr (i64 4294967296 to i32*)
@global_var_130bd = global i32 0
@global_var_130a4 = local_unnamed_addr global i32 0
@global_var_130ce = external global i32
@global_var_130a8 = local_unnamed_addr global i32 100
@6 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\9D\99\E6\80\81\E4\B8\8E\E5\85\A8\E5\B1\80\E5\86\85\E5\AD\98 ===\00"
@global_var_2261 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @6, i64 0, i64 0)
@global_var_1303c = global i32 0
@7 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C\E5\87\BD\E6\95\B0 ===\00"
@global_var_2285 = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @7, i64 0, i64 0)

define i64 @_init(i64 %arg1) local_unnamed_addr {
dec_label_pc_8c8:
  %0 = call i64 @call_weak_fn(), !insn.addr !0
  ret i64 %0, !insn.addr !1
}

define i64* @function_900(i64* %dest, i64* %src, i32 %n) local_unnamed_addr {
dec_label_pc_900:
  %0 = call i64* @memcpy(i64* %dest, i64* %src, i32 %n), !insn.addr !2
  ret i64* %0, !insn.addr !2
}

define i64* @function_910(i64* %dest, i64* %src, i32 %n) local_unnamed_addr {
dec_label_pc_910:
  %0 = call i64* @memmove(i64* %dest, i64* %src, i32 %n), !insn.addr !3
  ret i64* %0, !insn.addr !3
}

define void @function_920(i32 %status) local_unnamed_addr {
dec_label_pc_920:
  call void @exit(i32 %status), !insn.addr !4
  ret void, !insn.addr !4
}

define i32 @function_930(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_930:
  %0 = call i32 @__libc_start_main(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define void @function_940(i8* %s) local_unnamed_addr {
dec_label_pc_940:
  call void @perror(i8* %s), !insn.addr !6
  ret void, !insn.addr !6
}

define i64 @function_950(i64 %arg1) local_unnamed_addr {
dec_label_pc_950:
  %0 = call i64 @__cxa_finalize.5(i64 %arg1), !insn.addr !7
  ret i64 %0, !insn.addr !7
}

define i32 @function_960() local_unnamed_addr {
dec_label_pc_960:
  %0 = call i32 @fork(), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i64* @function_970(i32 %size) local_unnamed_addr {
dec_label_pc_970:
  %0 = call i64* @malloc(i32 %size), !insn.addr !9
  ret i64* %0, !insn.addr !9
}

define i64* @function_980(i64* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_980:
  %0 = call i64* @memset(i64* %s, i32 %c, i32 %n), !insn.addr !10
  ret i64* %0, !insn.addr !10
}

define i64* @function_990(i32 %nmemb, i32 %size) local_unnamed_addr {
dec_label_pc_990:
  %0 = call i64* @calloc(i32 %nmemb, i32 %size), !insn.addr !11
  ret i64* %0, !insn.addr !11
}

define i64* @function_9a0(i64* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_9a0:
  %0 = call i64* @realloc(i64* %ptr, i32 %size), !insn.addr !12
  ret i64* %0, !insn.addr !12
}

define i64 @function_9b0(i64 %arg1) local_unnamed_addr {
dec_label_pc_9b0:
  %0 = call i64 @__gmon_start__.6(i64 %arg1), !insn.addr !13
  ret i64 %0, !insn.addr !13
}

define void @function_9c0() local_unnamed_addr {
dec_label_pc_9c0:
  call void @abort(), !insn.addr !14
  ret void, !insn.addr !14
}

define i32 @function_9d0(i8* %s) local_unnamed_addr {
dec_label_pc_9d0:
  %0 = call i32 @puts(i8* %s), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define i32 @function_9e0(i64* %s1, i64* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_9e0:
  %0 = call i32 @memcmp(i64* %s1, i64* %s2, i32 %n), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define void @function_9f0(i64* %ptr) local_unnamed_addr {
dec_label_pc_9f0:
  call void @free(i64* %ptr), !insn.addr !17
  ret void, !insn.addr !17
}

define i32 @function_a00(i8* %format, ...) local_unnamed_addr {
dec_label_pc_a00:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define i32 @function_a10(i32 %pid, i32* %stat_loc, i32 %options) local_unnamed_addr {
dec_label_pc_a10:
  %0 = call i32 @waitpid(i32 %pid, i32* %stat_loc, i32 %options), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i64 @_start(i64 %arg1) local_unnamed_addr {
dec_label_pc_a40:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_8 = alloca i64, align 8
  %2 = load i64, i64* @global_var_12fd0, align 8, !insn.addr !20
  %3 = trunc i64 %arg1 to i32, !insn.addr !21
  %4 = bitcast i64* %stack_var_8 to i8**, !insn.addr !21
  %5 = inttoptr i64 %1 to void ()*, !insn.addr !21
  %6 = call i32 @__libc_start_main(i64 %2, i32 %3, i8** nonnull %4, void ()* null, void ()* null, void ()* %5), !insn.addr !21
  call void @abort(), !insn.addr !22
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !22
}

define i64 @call_weak_fn() local_unnamed_addr {
dec_label_pc_a74:
  %0 = load i64, i64* @global_var_12fc8, align 8, !insn.addr !23
  %1 = icmp eq i64 %0, 0, !insn.addr !24
  br i1 %1, label %dec_label_pc_a84, label %dec_label_pc_a80, !insn.addr !24

dec_label_pc_a80:                                 ; preds = %dec_label_pc_a74
  %2 = call i64 @__gmon_start__.6(i64 %0), !insn.addr !25
  ret i64 %2, !insn.addr !25

dec_label_pc_a84:                                 ; preds = %dec_label_pc_a74
  ret i64 0, !insn.addr !26
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_a90:
  ret i64 ptrtoint (i64* @global_var_130b0 to i64), !insn.addr !27
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_ac0:
  ret i64 ptrtoint (i64* @global_var_130b0 to i64), !insn.addr !28
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_b00:
  %x0.0.reg2mem = alloca i64, !insn.addr !29
  %0 = load i8, i8* bitcast (i64* @global_var_130b0 to i8*), align 8, !insn.addr !30
  %1 = zext i8 %0 to i64, !insn.addr !30
  %2 = icmp eq i8 %0, 0, !insn.addr !31
  store i64 %1, i64* %x0.0.reg2mem, !insn.addr !31
  br i1 %2, label %dec_label_pc_b18, label %dec_label_pc_b3c, !insn.addr !31

dec_label_pc_b18:                                 ; preds = %dec_label_pc_b00
  %3 = load i64, i64* inttoptr (i64 77760 to i64*), align 64, !insn.addr !32
  %4 = icmp eq i64 %3, 0, !insn.addr !33
  br i1 %4, label %dec_label_pc_b30, label %dec_label_pc_b24, !insn.addr !33

dec_label_pc_b24:                                 ; preds = %dec_label_pc_b18
  %5 = load i64, i64* inttoptr (i64 add (i64 ptrtoint (i64* @global_var_13000 to i64), i64 152) to i64*), align 8, !insn.addr !34
  %6 = call i64 @__cxa_finalize.5(i64 %5), !insn.addr !35
  br label %dec_label_pc_b30, !insn.addr !35

dec_label_pc_b30:                                 ; preds = %dec_label_pc_b24, %dec_label_pc_b18
  %7 = call i64 @deregister_tm_clones(), !insn.addr !36
  store i8 1, i8* bitcast (i64* @global_var_130b0 to i8*), align 8, !insn.addr !37
  store i64 1, i64* %x0.0.reg2mem, !insn.addr !37
  br label %dec_label_pc_b3c, !insn.addr !37

dec_label_pc_b3c:                                 ; preds = %dec_label_pc_b00, %dec_label_pc_b30
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !38

; uselistorder directives
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_b3c, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_b50:
  %0 = call i64 @register_tm_clones(), !insn.addr !39
  ret i64 %0, !insn.addr !39
}

define i64 @local_vars() local_unnamed_addr {
dec_label_pc_b54:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !40
  %3 = add i64 %2, 10, !insn.addr !41
  %4 = and i64 %3, 4294967294, !insn.addr !41
  ret i64 %4, !insn.addr !42
}

define i64 @local_array() local_unnamed_addr {
dec_label_pc_b60:
  %0 = alloca i64
  %1 = alloca i32
  %x9.0.reg2mem = alloca i64, !insn.addr !43
  %x8.0.reg2mem = alloca i64, !insn.addr !43
  %2 = load i64, i64* %0
  %3 = load i32, i32* %1
  %stack_var_-40 = alloca i64, align 8
  %4 = ptrtoint i64* %stack_var_-40 to i64, !insn.addr !44
  store i64 0, i64* %x8.0.reg2mem, !insn.addr !44
  store i64 0, i64* %x9.0.reg2mem, !insn.addr !44
  br label %dec_label_pc_b70, !insn.addr !44

dec_label_pc_b70:                                 ; preds = %dec_label_pc_b70, %dec_label_pc_b60
  %x9.0.reload = load i64, i64* %x9.0.reg2mem
  %x8.0.reload = load i64, i64* %x8.0.reg2mem
  %5 = trunc i64 %x9.0.reload to i32, !insn.addr !45
  %6 = add i64 %x8.0.reload, %4, !insn.addr !45
  %7 = inttoptr i64 %6 to i32*, !insn.addr !45
  store i32 %5, i32* %7, align 4, !insn.addr !45
  %8 = add i64 %x9.0.reload, %2, !insn.addr !46
  %9 = and i64 %8, 4294967295, !insn.addr !46
  %10 = add nuw nsw i64 %x8.0.reload, 4, !insn.addr !47
  %11 = icmp eq i64 %10, 40, !insn.addr !48
  store i64 %10, i64* %x8.0.reg2mem, !insn.addr !48
  store i64 %9, i64* %x9.0.reg2mem, !insn.addr !48
  br i1 %11, label %dec_label_pc_b84, label %dec_label_pc_b70, !insn.addr !48

dec_label_pc_b84:                                 ; preds = %dec_label_pc_b70
  %12 = zext i32 %3 to i64, !insn.addr !49
  ret i64 %12, !insn.addr !50

; uselistorder directives
  uselistorder i64 %x9.0.reload, { 1, 0 }
  uselistorder i64* %x8.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x9.0.reg2mem, { 1, 0, 2 }
}

define i64 @local_struct() local_unnamed_addr {
dec_label_pc_b90:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 3, !insn.addr !51
  %3 = and i64 %2, 4294967295, !insn.addr !51
  ret i64 %3, !insn.addr !52
}

define i64 @address_of_local() local_unnamed_addr {
dec_label_pc_b98:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i32*, !insn.addr !53
  store i32 42, i32* %2, align 4, !insn.addr !53
  ret i64 42, !insn.addr !54
}

define i64 @address_of_array() local_unnamed_addr {
dec_label_pc_bac:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !55
  %3 = and i64 %2, 4294967294, !insn.addr !55
  ret i64 %3, !insn.addr !56
}

define i64 @large_stack_frame() local_unnamed_addr {
dec_label_pc_bb8:
  %0 = alloca i32
  %x8.0.reg2mem = alloca i64, !insn.addr !57
  %1 = load i32, i32* %0
  %stack_var_-2064 = alloca i64, align 8
  %2 = ptrtoint i64* %stack_var_-2064 to i64, !insn.addr !58
  store i64 0, i64* %x8.0.reg2mem, !insn.addr !58
  br label %dec_label_pc_bc8, !insn.addr !58

dec_label_pc_bc8:                                 ; preds = %dec_label_pc_bc8, %dec_label_pc_bb8
  %x8.0.reload = load i64, i64* %x8.0.reg2mem
  %3 = trunc i64 %x8.0.reload to i8, !insn.addr !59
  %4 = add i64 %x8.0.reload, %2, !insn.addr !59
  %5 = inttoptr i64 %4 to i8*, !insn.addr !59
  store i8 %3, i8* %5, align 1, !insn.addr !59
  %6 = add i64 %x8.0.reload, 1, !insn.addr !60
  %7 = icmp eq i64 %6, ptrtoint (i1* @global_var_800 to i64), !insn.addr !61
  store i64 %6, i64* %x8.0.reg2mem, !insn.addr !61
  br i1 %7, label %dec_label_pc_bd8, label %dec_label_pc_bc8, !insn.addr !61

dec_label_pc_bd8:                                 ; preds = %dec_label_pc_bc8
  %8 = urem i32 %1, 256, !insn.addr !62
  %9 = zext i32 %8 to i64, !insn.addr !62
  ret i64 %9, !insn.addr !63

; uselistorder directives
  uselistorder i64 %x8.0.reload, { 1, 2, 0 }
  uselistorder i64* %x8.0.reg2mem, { 1, 0, 2 }
}

define i64 @vla_stack(i64 %arg1) local_unnamed_addr {
dec_label_pc_be8:
  %0 = alloca i64
  %x11.0.reg2mem = alloca i64, !insn.addr !64
  %x9.0.reg2mem = alloca i64, !insn.addr !64
  %1 = load i64, i64* %0
  %stack_var_-8 = alloca i64, align 8
  %2 = trunc i64 %1 to i32, !insn.addr !64
  %3 = sub i32 sub (i32 ptrtoint (i32* @global_var_3e9 to i32), i32 1), %2
  %4 = icmp ult i32 %3, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !65
  br i1 %4, label %dec_label_pc_bfc, label %dec_label_pc_bf4, !insn.addr !66

dec_label_pc_bf4:                                 ; preds = %dec_label_pc_be8
  ret i64 4294967295, !insn.addr !67

dec_label_pc_bfc:                                 ; preds = %dec_label_pc_be8
  %5 = and i64 %1, 4294967295, !insn.addr !68
  %6 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !69
  %7 = mul i64 %5, 4, !insn.addr !70
  %8 = add nuw nsw i64 %7, 15, !insn.addr !71
  %9 = and i64 %8, 34359738352, !insn.addr !72
  %10 = sub i64 %6, %9, !insn.addr !73
  %11 = icmp slt i32 %2, 1, !insn.addr !74
  br i1 %11, label %dec_label_pc_c48, label %dec_label_pc_c2c, !insn.addr !74

dec_label_pc_c2c:                                 ; preds = %dec_label_pc_bfc
  %12 = mul i64 %5, 2, !insn.addr !75
  store i64 0, i64* %x9.0.reg2mem, !insn.addr !76
  store i64 %10, i64* %x11.0.reg2mem, !insn.addr !76
  br label %dec_label_pc_c38, !insn.addr !76

dec_label_pc_c38:                                 ; preds = %dec_label_pc_c38, %dec_label_pc_c2c
  %x11.0.reload = load i64, i64* %x11.0.reg2mem
  %x9.0.reload = load i64, i64* %x9.0.reg2mem
  %13 = trunc i64 %x9.0.reload to i32, !insn.addr !77
  %14 = inttoptr i64 %x11.0.reload to i32*, !insn.addr !77
  store i32 %13, i32* %14, align 4, !insn.addr !77
  %15 = add i64 %x11.0.reload, 4, !insn.addr !77
  %16 = add i64 %x9.0.reload, 2, !insn.addr !78
  %17 = icmp eq i64 %12, %16, !insn.addr !79
  store i64 %16, i64* %x9.0.reg2mem, !insn.addr !79
  store i64 %15, i64* %x11.0.reg2mem, !insn.addr !79
  br i1 %17, label %dec_label_pc_c48, label %dec_label_pc_c38, !insn.addr !79

dec_label_pc_c48:                                 ; preds = %dec_label_pc_c38, %dec_label_pc_bfc
  %18 = icmp slt i32 %2, 0, !insn.addr !80
  %19 = zext i1 %18 to i64
  %storemerge.in = add i64 %1, %19
  %storemerge = mul i64 %storemerge.in, 2
  %20 = and i64 %storemerge, 4294967292, !insn.addr !81
  %21 = add i64 %20, %10, !insn.addr !81
  %22 = inttoptr i64 %21 to i32*, !insn.addr !81
  %23 = load i32, i32* %22, align 4, !insn.addr !81
  %24 = zext i32 %23 to i64, !insn.addr !81
  ret i64 %24, !insn.addr !82

; uselistorder directives
  uselistorder i64 %x9.0.reload, { 1, 0 }
  uselistorder i64 %10, { 1, 0 }
  uselistorder i64 %1, { 2, 1, 0 }
  uselistorder i64* %x9.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x11.0.reg2mem, { 1, 0, 2 }
}

define i64 @alloca_usage(i64 %arg1) local_unnamed_addr {
dec_label_pc_c68:
  %0 = alloca i64
  %x11.0.reg2mem = alloca i64, !insn.addr !83
  %x9.0.reg2mem = alloca i64, !insn.addr !83
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %stack_var_-8 = alloca i64, align 8
  %3 = trunc i64 %2 to i32, !insn.addr !84
  %4 = icmp slt i32 %3, 1, !insn.addr !84
  br i1 %4, label %dec_label_pc_ccc, label %dec_label_pc_c70, !insn.addr !84

dec_label_pc_c70:                                 ; preds = %dec_label_pc_c68
  %5 = call i64 @__asm_sbfiz(i64 %1, i64 %2, i64 2, i64 32), !insn.addr !85
  %6 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !86
  %7 = add i64 %5, 15, !insn.addr !87
  %8 = and i64 %7, -16, !insn.addr !88
  %9 = sub i64 %6, %8, !insn.addr !89
  %10 = and i64 %2, 4294967295, !insn.addr !90
  %11 = mul i64 %2, 2, !insn.addr !91
  %12 = and i64 %11, 8589934590, !insn.addr !91
  %13 = add nuw nsw i64 %12, %10, !insn.addr !91
  store i64 0, i64* %x9.0.reg2mem, !insn.addr !92
  store i64 %9, i64* %x11.0.reg2mem, !insn.addr !92
  br label %dec_label_pc_ca0, !insn.addr !92

dec_label_pc_ca0:                                 ; preds = %dec_label_pc_ca0, %dec_label_pc_c70
  %x11.0.reload = load i64, i64* %x11.0.reg2mem
  %x9.0.reload = load i64, i64* %x9.0.reg2mem
  %14 = trunc i64 %x9.0.reload to i32, !insn.addr !93
  %15 = inttoptr i64 %x11.0.reload to i32*, !insn.addr !93
  store i32 %14, i32* %15, align 4, !insn.addr !93
  %16 = add i64 %x11.0.reload, 4, !insn.addr !93
  %17 = add i64 %x9.0.reload, 3, !insn.addr !94
  %18 = icmp eq i64 %13, %17, !insn.addr !95
  store i64 %17, i64* %x9.0.reg2mem, !insn.addr !95
  store i64 %16, i64* %x11.0.reg2mem, !insn.addr !95
  br i1 %18, label %dec_label_pc_cb0, label %dec_label_pc_ca0, !insn.addr !95

dec_label_pc_cb0:                                 ; preds = %dec_label_pc_ca0
  %19 = icmp slt i32 %3, 0, !insn.addr !96
  %20 = zext i1 %19 to i64
  %storemerge.in = add i64 %2, %20
  %storemerge = mul i64 %storemerge.in, 2
  %21 = and i64 %storemerge, 4294967292, !insn.addr !97
  %22 = add i64 %9, %21, !insn.addr !97
  %23 = inttoptr i64 %22 to i32*, !insn.addr !97
  %24 = load i32, i32* %23, align 4, !insn.addr !97
  %25 = zext i32 %24 to i64, !insn.addr !97
  ret i64 %25, !insn.addr !98

dec_label_pc_ccc:                                 ; preds = %dec_label_pc_c68
  ret i64 4294967295, !insn.addr !99

; uselistorder directives
  uselistorder i64 %x9.0.reload, { 1, 0 }
  uselistorder i64 %9, { 1, 0 }
  uselistorder i64 %2, { 3, 4, 2, 1, 0 }
  uselistorder i64* %x9.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x11.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @stack_alias() local_unnamed_addr {
dec_label_pc_cd4:
  ret i64 20, !insn.addr !100
}

define i64 @test_stack_memory() local_unnamed_addr {
dec_label_pc_cdc:
  %0 = alloca i32
  %x9.2.reg2mem = alloca i64, !insn.addr !101
  %x8.3.reg2mem = alloca i64, !insn.addr !101
  %x9.1.reg2mem = alloca i64, !insn.addr !101
  %x8.2.reg2mem = alloca i64, !insn.addr !101
  %x8.1.reg2mem = alloca i64, !insn.addr !101
  %x9.0.reg2mem = alloca i64, !insn.addr !101
  %x8.0.reg2mem = alloca i64, !insn.addr !101
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-2072 = alloca i64, align 8
  %3 = call i32 @puts(i8* bitcast (i8** @global_var_2225 to i8*)), !insn.addr !102
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_1c6c, i64 0, i64 0), i64 20), !insn.addr !103
  %5 = ptrtoint i64* %stack_var_-2072 to i64, !insn.addr !104
  store i64 0, i64* %x8.0.reg2mem, !insn.addr !104
  store i64 %5, i64* %x9.0.reg2mem, !insn.addr !104
  br label %dec_label_pc_d10, !insn.addr !104

dec_label_pc_d10:                                 ; preds = %dec_label_pc_d10, %dec_label_pc_cdc
  %x9.0.reload = load i64, i64* %x9.0.reg2mem
  %x8.0.reload = load i64, i64* %x8.0.reg2mem
  %6 = trunc i64 %x8.0.reload to i32, !insn.addr !105
  %7 = inttoptr i64 %x9.0.reload to i32*, !insn.addr !105
  store i32 %6, i32* %7, align 4, !insn.addr !105
  %8 = add i64 %x9.0.reload, 4, !insn.addr !105
  %9 = add nuw nsw i64 %x8.0.reload, 2, !insn.addr !106
  %10 = icmp eq i64 %9, 20, !insn.addr !107
  store i64 %9, i64* %x8.0.reg2mem, !insn.addr !107
  store i64 %8, i64* %x9.0.reg2mem, !insn.addr !107
  br i1 %10, label %dec_label_pc_d20, label %dec_label_pc_d10, !insn.addr !107

dec_label_pc_d20:                                 ; preds = %dec_label_pc_d10
  %11 = zext i32 %2 to i64, !insn.addr !108
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_1c88, i64 0, i64 0), i64 %11), !insn.addr !109
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_1ca5, i64 0, i64 0), i64 15), !insn.addr !110
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_1cc3, i64 0, i64 0), i64 42), !insn.addr !111
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_1ce5, i64 0, i64 0), i64 2), !insn.addr !112
  store i64 0, i64* %x8.1.reg2mem, !insn.addr !113
  br label %dec_label_pc_d68, !insn.addr !113

dec_label_pc_d68:                                 ; preds = %dec_label_pc_d68, %dec_label_pc_d20
  %x8.1.reload = load i64, i64* %x8.1.reg2mem
  %16 = trunc i64 %x8.1.reload to i8, !insn.addr !114
  %17 = add i64 %x8.1.reload, %5, !insn.addr !114
  %18 = inttoptr i64 %17 to i8*, !insn.addr !114
  store i8 %16, i8* %18, align 1, !insn.addr !114
  %19 = add i64 %x8.1.reload, 1, !insn.addr !115
  %20 = icmp eq i64 %19, ptrtoint (i1* @global_var_800 to i64), !insn.addr !116
  store i64 %19, i64* %x8.1.reg2mem, !insn.addr !116
  br i1 %20, label %dec_label_pc_d78, label %dec_label_pc_d68, !insn.addr !116

dec_label_pc_d78:                                 ; preds = %dec_label_pc_d68
  %21 = urem i32 %1, 256, !insn.addr !117
  %22 = zext i32 %21 to i64, !insn.addr !117
  %23 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_1d07, i64 0, i64 0), i64 %22), !insn.addr !118
  store i64 0, i64* %x8.2.reg2mem, !insn.addr !119
  store i64 %5, i64* %x9.1.reg2mem, !insn.addr !119
  br label %dec_label_pc_d94, !insn.addr !119

dec_label_pc_d94:                                 ; preds = %dec_label_pc_d94, %dec_label_pc_d78
  %x9.1.reload = load i64, i64* %x9.1.reg2mem
  %x8.2.reload = load i64, i64* %x8.2.reg2mem
  %24 = trunc i64 %x8.2.reload to i32, !insn.addr !120
  %25 = inttoptr i64 %x9.1.reload to i32*, !insn.addr !120
  store i32 %24, i32* %25, align 4, !insn.addr !120
  %26 = add i64 %x9.1.reload, 4, !insn.addr !120
  %27 = add nuw nsw i64 %x8.2.reload, 2, !insn.addr !121
  %28 = icmp eq i64 %27, 20, !insn.addr !122
  store i64 %27, i64* %x8.2.reg2mem, !insn.addr !122
  store i64 %26, i64* %x9.1.reg2mem, !insn.addr !122
  br i1 %28, label %dec_label_pc_da4, label %dec_label_pc_d94, !insn.addr !122

dec_label_pc_da4:                                 ; preds = %dec_label_pc_d94
  %29 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_1d2a, i64 0, i64 0), i64 %11), !insn.addr !123
  store i64 0, i64* %x8.3.reg2mem, !insn.addr !124
  store i64 %5, i64* %x9.2.reg2mem, !insn.addr !124
  br label %dec_label_pc_dc0, !insn.addr !124

dec_label_pc_dc0:                                 ; preds = %dec_label_pc_dc0, %dec_label_pc_da4
  %x9.2.reload = load i64, i64* %x9.2.reg2mem
  %x8.3.reload = load i64, i64* %x8.3.reg2mem
  %30 = trunc i64 %x8.3.reload to i32, !insn.addr !125
  %31 = inttoptr i64 %x9.2.reload to i32*, !insn.addr !125
  store i32 %30, i32* %31, align 4, !insn.addr !125
  %32 = add i64 %x9.2.reload, 4, !insn.addr !125
  %33 = add nuw nsw i64 %x8.3.reload, 3, !insn.addr !126
  %34 = icmp eq i64 %33, 30, !insn.addr !127
  store i64 %33, i64* %x8.3.reg2mem, !insn.addr !127
  store i64 %32, i64* %x9.2.reg2mem, !insn.addr !127
  br i1 %34, label %dec_label_pc_dd0, label %dec_label_pc_dc0, !insn.addr !127

dec_label_pc_dd0:                                 ; preds = %dec_label_pc_dc0
  %35 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_1d45, i64 0, i64 0), i64 %11), !insn.addr !128
  %36 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_1d63, i64 0, i64 0), i64 20), !insn.addr !129
  %37 = sext i32 %36 to i64, !insn.addr !129
  ret i64 %37, !insn.addr !130

; uselistorder directives
  uselistorder i64 %x8.3.reload, { 1, 0 }
  uselistorder i64 %x8.2.reload, { 1, 0 }
  uselistorder i64 %x8.1.reload, { 1, 2, 0 }
  uselistorder i64 %x8.0.reload, { 1, 0 }
  uselistorder i64 %5, { 0, 1, 3, 2 }
  uselistorder i64* %x8.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x9.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x8.1.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x8.2.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x9.1.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x8.3.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x9.2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder i64 ptrtoint (i1* @global_var_800 to i64), { 1, 0 }
}

define i64 @heap_basic() local_unnamed_addr {
dec_label_pc_e00:
  %0 = alloca i64
  %x19.0.reg2mem = alloca i64, !insn.addr !131
  %x10.0.reg2mem = alloca i64, !insn.addr !131
  %x8.0.reg2mem = alloca i64, !insn.addr !131
  %1 = load i64, i64* %0
  %2 = and i64 %1, 4294967295, !insn.addr !132
  %3 = call i64 @__asm_sbfiz(i64 %1, i64 %2, i64 2, i64 32), !insn.addr !133
  %4 = trunc i64 %3 to i32, !insn.addr !134
  %5 = call i64* @malloc(i32 %4), !insn.addr !134
  %6 = icmp eq i64* %5, null, !insn.addr !135
  store i64 4294967295, i64* %x19.0.reg2mem, !insn.addr !135
  br i1 %6, label %dec_label_pc_e60, label %dec_label_pc_e1c, !insn.addr !135

dec_label_pc_e1c:                                 ; preds = %dec_label_pc_e00
  %7 = ptrtoint i64* %5 to i64, !insn.addr !134
  %8 = trunc i64 %1 to i32, !insn.addr !136
  %9 = icmp slt i32 %8, 1, !insn.addr !136
  br i1 %9, label %dec_label_pc_e44, label %dec_label_pc_e24, !insn.addr !136

dec_label_pc_e24:                                 ; preds = %dec_label_pc_e1c
  %10 = mul i64 %2, 2, !insn.addr !137
  store i64 0, i64* %x8.0.reg2mem, !insn.addr !138
  store i64 %7, i64* %x10.0.reg2mem, !insn.addr !138
  br label %dec_label_pc_e34, !insn.addr !138

dec_label_pc_e34:                                 ; preds = %dec_label_pc_e34, %dec_label_pc_e24
  %x10.0.reload = load i64, i64* %x10.0.reg2mem
  %x8.0.reload = load i64, i64* %x8.0.reg2mem
  %11 = trunc i64 %x8.0.reload to i32, !insn.addr !139
  %12 = inttoptr i64 %x10.0.reload to i32*, !insn.addr !139
  store i32 %11, i32* %12, align 4, !insn.addr !139
  %13 = add i64 %x10.0.reload, 4, !insn.addr !139
  %14 = add i64 %x8.0.reload, 2, !insn.addr !140
  %15 = icmp eq i64 %10, %14, !insn.addr !141
  store i64 %14, i64* %x8.0.reg2mem, !insn.addr !141
  store i64 %13, i64* %x10.0.reg2mem, !insn.addr !141
  br i1 %15, label %dec_label_pc_e44, label %dec_label_pc_e34, !insn.addr !141

dec_label_pc_e44:                                 ; preds = %dec_label_pc_e34, %dec_label_pc_e1c
  %16 = icmp slt i32 %8, 0, !insn.addr !142
  %17 = zext i1 %16 to i64
  %storemerge.in = add i64 %1, %17
  %storemerge = mul i64 %storemerge.in, 2
  %18 = and i64 %storemerge, 4294967292, !insn.addr !143
  %19 = add i64 %18, %7, !insn.addr !143
  %20 = inttoptr i64 %19 to i32*, !insn.addr !143
  %21 = load i32, i32* %20, align 4, !insn.addr !143
  %22 = zext i32 %21 to i64, !insn.addr !143
  call void @free(i64* nonnull %5), !insn.addr !144
  store i64 %22, i64* %x19.0.reg2mem, !insn.addr !145
  br label %dec_label_pc_e60, !insn.addr !145

dec_label_pc_e60:                                 ; preds = %dec_label_pc_e00, %dec_label_pc_e44
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  ret i64 %x19.0.reload, !insn.addr !146

; uselistorder directives
  uselistorder i64 %x8.0.reload, { 1, 0 }
  uselistorder i64 %7, { 1, 0 }
  uselistorder i64* %5, { 0, 2, 1 }
  uselistorder i64 %1, { 3, 2, 1, 0 }
  uselistorder i64* %x8.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x10.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x19.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_e60, { 1, 0 }
}

define i64 @heap_calloc() local_unnamed_addr {
dec_label_pc_e70:
  %0 = alloca i64
  %x19.2.reg2mem = alloca i64, !insn.addr !147
  %x19.1.reg2mem = alloca i64, !insn.addr !147
  %x19.0.reg2mem = alloca i32, !insn.addr !147
  %x9.0.reg2mem = alloca i64, !insn.addr !147
  %x8.0.reg2mem = alloca i64, !insn.addr !147
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !148
  %3 = call i64* @calloc(i32 %2, i32 4), !insn.addr !149
  %4 = icmp eq i64* %3, null, !insn.addr !150
  store i64 4294967295, i64* %x19.2.reg2mem, !insn.addr !150
  br i1 %4, label %dec_label_pc_ec8, label %dec_label_pc_e90, !insn.addr !150

dec_label_pc_e90:                                 ; preds = %dec_label_pc_e70
  %5 = icmp slt i32 %2, 1, !insn.addr !151
  store i64 0, i64* %x19.1.reg2mem, !insn.addr !151
  br i1 %5, label %dec_label_pc_ec4, label %dec_label_pc_ea4.preheader, !insn.addr !151

dec_label_pc_ea4.preheader:                       ; preds = %dec_label_pc_e90
  %6 = and i64 %1, 4294967295, !insn.addr !152
  %7 = ptrtoint i64* %3 to i64, !insn.addr !149
  store i64 %6, i64* %x8.0.reg2mem
  store i64 %7, i64* %x9.0.reg2mem
  store i32 0, i32* %x19.0.reg2mem
  br label %dec_label_pc_ea4

dec_label_pc_ea4:                                 ; preds = %dec_label_pc_ea4.preheader, %dec_label_pc_ea4
  %x19.0.reload = load i32, i32* %x19.0.reg2mem
  %x9.0.reload = load i64, i64* %x9.0.reg2mem
  %x8.0.reload = load i64, i64* %x8.0.reg2mem
  %8 = inttoptr i64 %x9.0.reload to i32*, !insn.addr !153
  %9 = load i32, i32* %8, align 4, !insn.addr !153
  %10 = add i64 %x9.0.reload, 4, !insn.addr !153
  %11 = add i64 %x8.0.reload, -1, !insn.addr !154
  %12 = add i32 %9, %x19.0.reload, !insn.addr !155
  %13 = icmp eq i64 %x8.0.reload, 1, !insn.addr !156
  store i64 %11, i64* %x8.0.reg2mem, !insn.addr !156
  store i64 %10, i64* %x9.0.reg2mem, !insn.addr !156
  store i32 %12, i32* %x19.0.reg2mem, !insn.addr !156
  br i1 %13, label %dec_label_pc_ec4.loopexit, label %dec_label_pc_ea4, !insn.addr !156

dec_label_pc_ec4.loopexit:                        ; preds = %dec_label_pc_ea4
  %14 = zext i32 %12 to i64, !insn.addr !155
  store i64 %14, i64* %x19.1.reg2mem
  br label %dec_label_pc_ec4

dec_label_pc_ec4:                                 ; preds = %dec_label_pc_ec4.loopexit, %dec_label_pc_e90
  %x19.1.reload = load i64, i64* %x19.1.reg2mem
  call void @free(i64* nonnull %3), !insn.addr !157
  store i64 %x19.1.reload, i64* %x19.2.reg2mem, !insn.addr !157
  br label %dec_label_pc_ec8, !insn.addr !157

dec_label_pc_ec8:                                 ; preds = %dec_label_pc_e70, %dec_label_pc_ec4
  %x19.2.reload = load i64, i64* %x19.2.reg2mem
  %15 = and i64 %x19.2.reload, 4294967295, !insn.addr !158
  ret i64 %15, !insn.addr !159

; uselistorder directives
  uselistorder i32 %12, { 1, 0 }
  uselistorder i64 %x8.0.reload, { 1, 0 }
  uselistorder i64* %3, { 0, 2, 1 }
  uselistorder i64* %x8.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x9.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %x19.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x19.2.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_ec8, { 1, 0 }
  uselistorder label %dec_label_pc_ea4, { 1, 0 }
}

define i64 @heap_realloc() local_unnamed_addr {
dec_label_pc_ed8:
  %x20.1.reg2mem = alloca i64, !insn.addr !160
  %x20.0.reg2mem = alloca i64, !insn.addr !160
  %x19.0.reg2mem = alloca i64, !insn.addr !160
  %x9.0.reg2mem = alloca i64, !insn.addr !160
  %x8.1.reg2mem = alloca i64, !insn.addr !160
  %x8.0.reg2mem = alloca i64, !insn.addr !160
  %0 = call i64* @malloc(i32 20), !insn.addr !161
  %1 = ptrtoint i64* %0 to i64, !insn.addr !161
  %2 = icmp eq i64* %0, null, !insn.addr !162
  store i64 0, i64* %x8.0.reg2mem, !insn.addr !162
  store i64 4294967295, i64* %x20.1.reg2mem, !insn.addr !162
  br i1 %2, label %dec_label_pc_f70, label %dec_label_pc_ef8, !insn.addr !162

dec_label_pc_ef8:                                 ; preds = %dec_label_pc_ed8, %dec_label_pc_ef8
  %x8.0.reload = load i64, i64* %x8.0.reg2mem
  %3 = add nuw nsw i64 %x8.0.reload, 1, !insn.addr !163
  %4 = trunc i64 %3 to i32, !insn.addr !164
  %5 = mul i64 %x8.0.reload, 4, !insn.addr !164
  %6 = add i64 %5, %1, !insn.addr !164
  %7 = inttoptr i64 %6 to i32*, !insn.addr !164
  store i32 %4, i32* %7, align 4, !insn.addr !164
  %8 = icmp eq i64 %3, 5, !insn.addr !165
  store i64 %3, i64* %x8.0.reg2mem, !insn.addr !165
  br i1 %8, label %dec_label_pc_f0c, label %dec_label_pc_ef8, !insn.addr !165

dec_label_pc_f0c:                                 ; preds = %dec_label_pc_ef8
  %9 = add i64 %1, 8, !insn.addr !166
  %10 = inttoptr i64 %9 to i32*, !insn.addr !166
  %11 = load i32, i32* %10, align 4, !insn.addr !166
  %12 = call i64* @realloc(i64* nonnull %0, i32 40), !insn.addr !167
  %13 = ptrtoint i64* %12 to i64, !insn.addr !167
  %14 = icmp eq i64* %12, null, !insn.addr !168
  store i64 50, i64* %x8.1.reg2mem, !insn.addr !168
  store i64 20, i64* %x9.0.reg2mem, !insn.addr !168
  store i64 %1, i64* %x19.0.reg2mem, !insn.addr !168
  store i64 4294967294, i64* %x20.0.reg2mem, !insn.addr !168
  br i1 %14, label %dec_label_pc_f68, label %dec_label_pc_f28, !insn.addr !168

dec_label_pc_f28:                                 ; preds = %dec_label_pc_f0c, %dec_label_pc_f28
  %x9.0.reload = load i64, i64* %x9.0.reg2mem
  %x8.1.reload = load i64, i64* %x8.1.reg2mem
  %15 = trunc i64 %x8.1.reload to i32, !insn.addr !169
  %16 = add i64 %x9.0.reload, %13, !insn.addr !169
  %17 = inttoptr i64 %16 to i32*, !insn.addr !169
  store i32 %15, i32* %17, align 4, !insn.addr !169
  %18 = add nuw nsw i64 %x8.1.reload, 10, !insn.addr !170
  %19 = and i64 %18, 4294967295, !insn.addr !170
  %20 = add nuw nsw i64 %x9.0.reload, 4, !insn.addr !171
  %21 = icmp eq i64 %20, 40, !insn.addr !172
  store i64 %19, i64* %x8.1.reg2mem, !insn.addr !172
  store i64 %20, i64* %x9.0.reg2mem, !insn.addr !172
  br i1 %21, label %dec_label_pc_f3c, label %dec_label_pc_f28, !insn.addr !172

dec_label_pc_f3c:                                 ; preds = %dec_label_pc_f28
  %22 = add i64 %13, 8, !insn.addr !173
  %23 = inttoptr i64 %22 to i32*, !insn.addr !173
  %24 = load i32, i32* %23, align 4, !insn.addr !173
  %25 = icmp eq i32 %11, %24, !insn.addr !174
  store i64 %13, i64* %x19.0.reg2mem, !insn.addr !174
  store i64 4294967293, i64* %x20.0.reg2mem, !insn.addr !174
  br i1 %25, label %dec_label_pc_f48, label %dec_label_pc_f68, !insn.addr !174

dec_label_pc_f48:                                 ; preds = %dec_label_pc_f3c
  %26 = add i64 %13, 20, !insn.addr !175
  %27 = inttoptr i64 %26 to i32*, !insn.addr !175
  %28 = load i32, i32* %27, align 4, !insn.addr !175
  %29 = zext i32 %28 to i64, !insn.addr !175
  store i64 %13, i64* %x19.0.reg2mem, !insn.addr !176
  store i64 %29, i64* %x20.0.reg2mem, !insn.addr !176
  br label %dec_label_pc_f68, !insn.addr !176

dec_label_pc_f68:                                 ; preds = %dec_label_pc_f48, %dec_label_pc_f3c, %dec_label_pc_f0c
  %x20.0.reload = load i64, i64* %x20.0.reg2mem
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  %30 = inttoptr i64 %x19.0.reload to i64*, !insn.addr !177
  call void @free(i64* %30), !insn.addr !177
  store i64 %x20.0.reload, i64* %x20.1.reg2mem, !insn.addr !177
  br label %dec_label_pc_f70, !insn.addr !177

dec_label_pc_f70:                                 ; preds = %dec_label_pc_ed8, %dec_label_pc_f68
  %x20.1.reload = load i64, i64* %x20.1.reg2mem
  %31 = and i64 %x20.1.reload, 4294967295, !insn.addr !178
  ret i64 %31, !insn.addr !179

; uselistorder directives
  uselistorder i64 %x8.1.reload, { 1, 0 }
  uselistorder i64 %13, { 0, 4, 1, 3, 2 }
  uselistorder i64 %x8.0.reload, { 1, 0 }
  uselistorder i64 %1, { 0, 2, 1 }
  uselistorder i64* %x8.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x8.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x9.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x20.1.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_f70, { 1, 0 }
  uselistorder label %dec_label_pc_f28, { 1, 0 }
  uselistorder label %dec_label_pc_ef8, { 1, 0 }
}

define i64 @heap_array() local_unnamed_addr {
dec_label_pc_f80:
  %0 = alloca i64
  %x19.0.reg2mem = alloca i64, !insn.addr !180
  %x10.0.reg2mem = alloca i64, !insn.addr !180
  %x8.0.reg2mem = alloca i64, !insn.addr !180
  %1 = load i64, i64* %0
  %2 = and i64 %1, 4294967295, !insn.addr !181
  %3 = call i64 @__asm_sbfiz(i64 %1, i64 %2, i64 2, i64 32), !insn.addr !182
  %4 = trunc i64 %3 to i32, !insn.addr !183
  %5 = call i64* @malloc(i32 %4), !insn.addr !183
  %6 = icmp eq i64* %5, null, !insn.addr !184
  store i64 4294967295, i64* %x19.0.reg2mem, !insn.addr !184
  br i1 %6, label %dec_label_pc_fe0, label %dec_label_pc_f9c, !insn.addr !184

dec_label_pc_f9c:                                 ; preds = %dec_label_pc_f80
  %7 = ptrtoint i64* %5 to i64, !insn.addr !183
  %8 = trunc i64 %1 to i32, !insn.addr !185
  %9 = icmp slt i32 %8, 1, !insn.addr !185
  br i1 %9, label %dec_label_pc_fc4, label %dec_label_pc_fa4, !insn.addr !185

dec_label_pc_fa4:                                 ; preds = %dec_label_pc_f9c
  %10 = mul nuw nsw i64 %2, 3, !insn.addr !186
  store i64 0, i64* %x8.0.reg2mem, !insn.addr !187
  store i64 %7, i64* %x10.0.reg2mem, !insn.addr !187
  br label %dec_label_pc_fb4, !insn.addr !187

dec_label_pc_fb4:                                 ; preds = %dec_label_pc_fb4, %dec_label_pc_fa4
  %x10.0.reload = load i64, i64* %x10.0.reg2mem
  %x8.0.reload = load i64, i64* %x8.0.reg2mem
  %11 = trunc i64 %x8.0.reload to i32, !insn.addr !188
  %12 = inttoptr i64 %x10.0.reload to i32*, !insn.addr !188
  store i32 %11, i32* %12, align 4, !insn.addr !188
  %13 = add i64 %x10.0.reload, 4, !insn.addr !188
  %14 = add i64 %x8.0.reload, 3, !insn.addr !189
  %15 = icmp eq i64 %10, %14, !insn.addr !190
  store i64 %14, i64* %x8.0.reg2mem, !insn.addr !190
  store i64 %13, i64* %x10.0.reg2mem, !insn.addr !190
  br i1 %15, label %dec_label_pc_fc4, label %dec_label_pc_fb4, !insn.addr !190

dec_label_pc_fc4:                                 ; preds = %dec_label_pc_fb4, %dec_label_pc_f9c
  %16 = icmp slt i32 %8, 0, !insn.addr !191
  %17 = zext i1 %16 to i64
  %storemerge.in = add i64 %1, %17
  %storemerge = mul i64 %storemerge.in, 2
  %18 = and i64 %storemerge, 4294967292, !insn.addr !192
  %19 = add i64 %18, %7, !insn.addr !192
  %20 = inttoptr i64 %19 to i32*, !insn.addr !192
  %21 = load i32, i32* %20, align 4, !insn.addr !192
  %22 = zext i32 %21 to i64, !insn.addr !192
  call void @free(i64* nonnull %5), !insn.addr !193
  store i64 %22, i64* %x19.0.reg2mem, !insn.addr !194
  br label %dec_label_pc_fe0, !insn.addr !194

dec_label_pc_fe0:                                 ; preds = %dec_label_pc_f80, %dec_label_pc_fc4
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  ret i64 %x19.0.reload, !insn.addr !195

; uselistorder directives
  uselistorder i64 %x8.0.reload, { 1, 0 }
  uselistorder i64 %7, { 1, 0 }
  uselistorder i64* %5, { 0, 2, 1 }
  uselistorder i64 %1, { 3, 2, 1, 0 }
  uselistorder i64* %x8.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x10.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x19.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_fe0, { 1, 0 }
}

define i64 @heap_struct() local_unnamed_addr {
dec_label_pc_ff0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 3, !insn.addr !196
  %3 = and i64 %2, 4294967295, !insn.addr !196
  ret i64 %3, !insn.addr !197
}

define i64 @heap_nested() local_unnamed_addr {
dec_label_pc_ff8:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !198
  %1 = load i64, i64* %0
  %2 = call i64* @malloc(i32 16), !insn.addr !199
  %3 = ptrtoint i64* %2 to i64, !insn.addr !199
  %4 = inttoptr i64 %1 to i64*, !insn.addr !200
  store i64 %3, i64* %4, align 8, !insn.addr !200
  %5 = icmp eq i64* %2, null, !insn.addr !201
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !201
  br i1 %5, label %dec_label_pc_1060, label %dec_label_pc_1018, !insn.addr !201

dec_label_pc_1018:                                ; preds = %dec_label_pc_ff8
  %6 = bitcast i64* %2 to i32*, !insn.addr !202
  store i32 10, i32* %6, align 4, !insn.addr !202
  %7 = call i64* @malloc(i32 16), !insn.addr !203
  %8 = ptrtoint i64* %7 to i64, !insn.addr !203
  %9 = add i64 %8, 8, !insn.addr !204
  %10 = inttoptr i64 %9 to i64*, !insn.addr !204
  store i64 %8, i64* %10, align 8, !insn.addr !204
  %11 = icmp eq i64* %7, null, !insn.addr !205
  br i1 %11, label %dec_label_pc_1058, label %dec_label_pc_103c, !insn.addr !205

dec_label_pc_103c:                                ; preds = %dec_label_pc_1018
  store i64 0, i64* %10, align 8, !insn.addr !206
  %12 = bitcast i64* %7 to i32*, !insn.addr !207
  store i32 20, i32* %12, align 4, !insn.addr !207
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !208
  br label %dec_label_pc_1060, !insn.addr !208

dec_label_pc_1058:                                ; preds = %dec_label_pc_1018
  call void @free(i64* null), !insn.addr !209
  store i64 4294967294, i64* %x0.0.reg2mem, !insn.addr !210
  br label %dec_label_pc_1060, !insn.addr !210

dec_label_pc_1060:                                ; preds = %dec_label_pc_ff8, %dec_label_pc_1058, %dec_label_pc_103c
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !211

; uselistorder directives
  uselistorder i64 %8, { 1, 0 }
  uselistorder i64* %x0.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_1060, { 1, 2, 0 }
}

define i64 @linked_list_heap() local_unnamed_addr {
dec_label_pc_106c:
  %x20.2.reg2mem = alloca i64, !insn.addr !212
  %x19.5.reg2mem = alloca i64, !insn.addr !212
  %x20.0.reg2mem = alloca i32, !insn.addr !212
  %x8.0.reg2mem = alloca i64, !insn.addr !212
  %x22.1.reg2mem = alloca i64, !insn.addr !212
  %x19.4.reg2mem = alloca i64, !insn.addr !212
  %x19.3.reg2mem = alloca i64, !insn.addr !212
  %x19.1.reg2mem = alloca i64, !insn.addr !212
  %x19.05.reg2mem = alloca i64, !insn.addr !212
  %x21.06.reg2mem = alloca i64, !insn.addr !212
  %x23.07.reg2mem = alloca i64, !insn.addr !212
  %.in.reg2mem = alloca i64*, !insn.addr !212
  %0 = call i64* @malloc(i32 16), !insn.addr !213
  %1 = icmp eq i64* %0, null, !insn.addr !214
  store i64* %0, i64** %.in.reg2mem, !insn.addr !214
  store i64 0, i64* %x23.07.reg2mem, !insn.addr !214
  store i64 0, i64* %x21.06.reg2mem, !insn.addr !214
  store i64 0, i64* %x19.05.reg2mem, !insn.addr !214
  store i64 4294967295, i64* %x20.2.reg2mem, !insn.addr !214
  br i1 %1, label %dec_label_pc_1148, label %dec_label_pc_10a0, !insn.addr !214

dec_label_pc_1090:                                ; preds = %dec_label_pc_10e0
  %2 = and i64 %24, 4294967295, !insn.addr !215
  %3 = call i64* @malloc(i32 16), !insn.addr !213
  %4 = icmp eq i64* %3, null, !insn.addr !214
  store i64* %3, i64** %.in.reg2mem, !insn.addr !214
  store i64 %2, i64* %x23.07.reg2mem, !insn.addr !214
  store i64 %5, i64* %x21.06.reg2mem, !insn.addr !214
  store i64 %x19.3.reload, i64* %x19.05.reg2mem, !insn.addr !214
  br i1 %4, label %dec_label_pc_10c4, label %dec_label_pc_10a0, !insn.addr !214

dec_label_pc_10a0:                                ; preds = %dec_label_pc_106c, %dec_label_pc_1090
  %x19.05.reload = load i64, i64* %x19.05.reg2mem
  %x21.06.reload = load i64, i64* %x21.06.reg2mem
  %x23.07.reload = load i64, i64* %x23.07.reg2mem
  %.in.reload = load i64*, i64** %.in.reg2mem
  %5 = ptrtoint i64* %.in.reload to i64
  %6 = trunc i64 %x23.07.reload to i32, !insn.addr !216
  %7 = add i64 %5, 8, !insn.addr !217
  %8 = inttoptr i64 %7 to i64*, !insn.addr !217
  store i64 0, i64* %8, align 8, !insn.addr !217
  %9 = mul i32 %6, 10, !insn.addr !218
  %10 = bitcast i64* %.in.reload to i32*, !insn.addr !219
  store i32 %9, i32* %10, align 4, !insn.addr !219
  %11 = icmp eq i64 %x19.05.reload, 0, !insn.addr !220
  store i64 %5, i64* %x19.3.reg2mem, !insn.addr !220
  br i1 %11, label %dec_label_pc_10e0, label %dec_label_pc_10b4, !insn.addr !220

dec_label_pc_10b4:                                ; preds = %dec_label_pc_10a0
  %12 = add i64 %x21.06.reload, 8, !insn.addr !221
  %13 = inttoptr i64 %12 to i64*, !insn.addr !221
  store i64 %5, i64* %13, align 8, !insn.addr !221
  store i64 %x19.05.reload, i64* %x19.3.reg2mem
  br label %dec_label_pc_10e0

dec_label_pc_10c4:                                ; preds = %dec_label_pc_1090
  %14 = icmp ult i64 %x23.07.reload, 4
  %15 = icmp ne i1 %14, true, !insn.addr !222
  %16 = icmp ne i1 %15, true, !insn.addr !223
  %17 = zext i1 %16 to i64, !insn.addr !223
  %18 = icmp eq i64 %x19.3.reload, 0, !insn.addr !224
  store i64 %x19.3.reload, i64* %x19.1.reg2mem, !insn.addr !224
  store i64 0, i64* %x19.4.reg2mem, !insn.addr !224
  store i64 %17, i64* %x22.1.reg2mem, !insn.addr !224
  br i1 %18, label %dec_label_pc_1108, label %dec_label_pc_10c8, !insn.addr !224

dec_label_pc_10c8:                                ; preds = %dec_label_pc_10c4, %dec_label_pc_10c8
  %x19.1.reload = load i64, i64* %x19.1.reg2mem
  %19 = add i64 %x19.1.reload, 8, !insn.addr !225
  %20 = inttoptr i64 %19 to i64*, !insn.addr !225
  %21 = load i64, i64* %20, align 8, !insn.addr !225
  %22 = inttoptr i64 %x19.1.reload to i64*, !insn.addr !226
  call void @free(i64* %22), !insn.addr !226
  %23 = icmp eq i64 %21, 0, !insn.addr !227
  store i64 %21, i64* %x19.1.reg2mem, !insn.addr !227
  store i64 0, i64* %x19.4.reg2mem, !insn.addr !227
  store i64 %17, i64* %x22.1.reg2mem, !insn.addr !227
  br i1 %23, label %dec_label_pc_1108, label %dec_label_pc_10c8, !insn.addr !227

dec_label_pc_10e0:                                ; preds = %dec_label_pc_10a0, %dec_label_pc_10b4
  %x19.3.reload = load i64, i64* %x19.3.reg2mem
  %24 = add nuw nsw i64 %x23.07.reload, 1, !insn.addr !228
  %25 = trunc i64 %24 to i32, !insn.addr !229
  %26 = icmp eq i32 %25, 5, !insn.addr !229
  br i1 %26, label %dec_label_pc_1108.loopexit1, label %dec_label_pc_1090, !insn.addr !229

dec_label_pc_1108.loopexit1:                      ; preds = %dec_label_pc_10e0
  %27 = icmp ult i64 %x23.07.reload, 4
  %28 = icmp ne i1 %27, true, !insn.addr !222
  %29 = icmp ne i1 %28, true, !insn.addr !223
  %30 = zext i1 %29 to i64, !insn.addr !223
  store i64 %x19.3.reload, i64* %x19.4.reg2mem
  store i64 %30, i64* %x22.1.reg2mem
  br label %dec_label_pc_1108

dec_label_pc_1108:                                ; preds = %dec_label_pc_10c8, %dec_label_pc_1108.loopexit1, %dec_label_pc_10c4
  %x22.1.reload = load i64, i64* %x22.1.reg2mem
  %31 = icmp eq i64 %x22.1.reload, 0, !insn.addr !230
  store i64 4294967295, i64* %x20.2.reg2mem, !insn.addr !230
  br i1 %31, label %dec_label_pc_1114, label %dec_label_pc_1148, !insn.addr !230

dec_label_pc_1114:                                ; preds = %dec_label_pc_1108
  %x19.4.reload = load i64, i64* %x19.4.reg2mem
  %32 = icmp eq i64 %x19.4.reload, 0, !insn.addr !231
  store i64 %x19.4.reload, i64* %x8.0.reg2mem, !insn.addr !231
  store i32 0, i32* %x20.0.reg2mem, !insn.addr !231
  store i64 0, i64* %x20.2.reg2mem, !insn.addr !231
  br i1 %32, label %dec_label_pc_1148, label %dec_label_pc_1120, !insn.addr !231

dec_label_pc_1120:                                ; preds = %dec_label_pc_1114, %dec_label_pc_1120
  %x20.0.reload = load i32, i32* %x20.0.reg2mem
  %x8.0.reload = load i64, i64* %x8.0.reg2mem
  %33 = inttoptr i64 %x8.0.reload to i32*, !insn.addr !232
  %34 = load i32, i32* %33, align 4, !insn.addr !232
  %35 = add i64 %x8.0.reload, 8, !insn.addr !233
  %36 = inttoptr i64 %35 to i64*, !insn.addr !233
  %37 = load i64, i64* %36, align 8, !insn.addr !233
  %38 = add i32 %34, %x20.0.reload, !insn.addr !234
  %39 = icmp eq i64 %37, 0, !insn.addr !235
  store i64 %37, i64* %x8.0.reg2mem, !insn.addr !235
  store i32 %38, i32* %x20.0.reg2mem, !insn.addr !235
  store i64 %x19.4.reload, i64* %x19.5.reg2mem, !insn.addr !235
  br i1 %39, label %dec_label_pc_1134, label %dec_label_pc_1120, !insn.addr !235

dec_label_pc_1134:                                ; preds = %dec_label_pc_1120, %dec_label_pc_1134
  %x19.5.reload = load i64, i64* %x19.5.reg2mem
  %40 = add i64 %x19.5.reload, 8, !insn.addr !236
  %41 = inttoptr i64 %40 to i64*, !insn.addr !236
  %42 = load i64, i64* %41, align 8, !insn.addr !236
  %43 = inttoptr i64 %x19.5.reload to i64*, !insn.addr !237
  call void @free(i64* %43), !insn.addr !237
  %44 = icmp eq i64 %42, 0, !insn.addr !238
  store i64 %42, i64* %x19.5.reg2mem, !insn.addr !238
  br i1 %44, label %dec_label_pc_1148.loopexit, label %dec_label_pc_1134, !insn.addr !238

dec_label_pc_1148.loopexit:                       ; preds = %dec_label_pc_1134
  %45 = zext i32 %38 to i64, !insn.addr !234
  store i64 %45, i64* %x20.2.reg2mem
  br label %dec_label_pc_1148

dec_label_pc_1148:                                ; preds = %dec_label_pc_1148.loopexit, %dec_label_pc_106c, %dec_label_pc_1114, %dec_label_pc_1108
  %x20.2.reload = load i64, i64* %x20.2.reg2mem
  ret i64 %x20.2.reload, !insn.addr !239

; uselistorder directives
  uselistorder i64 %x19.5.reload, { 1, 0 }
  uselistorder i32 %38, { 1, 0 }
  uselistorder i64 %x19.3.reload, { 0, 2, 1, 3 }
  uselistorder i64 %x19.1.reload, { 1, 0 }
  uselistorder i64 %5, { 2, 0, 3, 1 }
  uselistorder i64* %.in.reload, { 1, 0 }
  uselistorder i64 %x23.07.reload, { 3, 1, 2, 0 }
  uselistorder i64** %.in.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x23.07.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x21.06.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x19.05.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x19.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x19.3.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x19.4.reg2mem, { 0, 2, 1, 3 }
  uselistorder i64* %x22.1.reg2mem, { 0, 2, 1, 3 }
  uselistorder i64* %x8.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %x20.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x19.5.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x20.2.reg2mem, { 0, 1, 3, 4, 2 }
  uselistorder label %dec_label_pc_1148, { 0, 2, 3, 1 }
  uselistorder label %dec_label_pc_1134, { 1, 0 }
  uselistorder label %dec_label_pc_1120, { 1, 0 }
  uselistorder label %dec_label_pc_1108, { 1, 0, 2 }
  uselistorder label %dec_label_pc_10e0, { 1, 0 }
  uselistorder label %dec_label_pc_10c8, { 1, 0 }
  uselistorder label %dec_label_pc_10a0, { 1, 0 }
}

define i64 @create_tree_node() local_unnamed_addr {
dec_label_pc_1160:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64* @malloc(i32 24), !insn.addr !240
  %3 = ptrtoint i64* %2 to i64, !insn.addr !240
  %4 = icmp eq i64* %2, null, !insn.addr !241
  br i1 %4, label %dec_label_pc_1184, label %dec_label_pc_117c, !insn.addr !241

dec_label_pc_117c:                                ; preds = %dec_label_pc_1160
  %5 = trunc i64 %1 to i32, !insn.addr !242
  %6 = bitcast i64* %2 to i32*, !insn.addr !242
  store i32 %5, i32* %6, align 4, !insn.addr !242
  %7 = add i64 %3, 8, !insn.addr !243
  %8 = inttoptr i64 %7 to i64*, !insn.addr !243
  store i64 0, i64* %8, align 8, !insn.addr !243
  %9 = add i64 %3, 16, !insn.addr !243
  %10 = inttoptr i64 %9 to i64*, !insn.addr !243
  store i64 0, i64* %10, align 8, !insn.addr !243
  br label %dec_label_pc_1184, !insn.addr !243

dec_label_pc_1184:                                ; preds = %dec_label_pc_117c, %dec_label_pc_1160
  ret i64 %3, !insn.addr !244

; uselistorder directives
  uselistorder i64 %3, { 2, 0, 1 }
}

define i64 @tree_heap_traversal() local_unnamed_addr {
dec_label_pc_1190:
  %x22.2.reg2mem = alloca i64, !insn.addr !245
  %x22.1.reg2mem = alloca i64, !insn.addr !245
  %x22.0.reg2mem = alloca i64, !insn.addr !245
  %x21.0.reg2mem = alloca i64, !insn.addr !245
  %0 = call i64* @malloc(i32 24), !insn.addr !246
  %1 = icmp eq i64* %0, null, !insn.addr !247
  store i64 4294967295, i64* %x22.2.reg2mem, !insn.addr !247
  br i1 %1, label %dec_label_pc_1254, label %dec_label_pc_11ac, !insn.addr !247

dec_label_pc_11ac:                                ; preds = %dec_label_pc_1190
  %2 = ptrtoint i64* %0 to i64, !insn.addr !246
  %3 = add i64 %2, 8, !insn.addr !248
  %4 = inttoptr i64 %3 to i64*, !insn.addr !248
  store i64 0, i64* %4, align 8, !insn.addr !248
  %5 = add i64 %2, 16, !insn.addr !248
  %6 = inttoptr i64 %5 to i64*, !insn.addr !248
  store i64 0, i64* %6, align 8, !insn.addr !248
  %7 = bitcast i64* %0 to i32*, !insn.addr !249
  store i32 10, i32* %7, align 4, !insn.addr !249
  %8 = call i64* @malloc(i32 24), !insn.addr !250
  %9 = ptrtoint i64* %8 to i64, !insn.addr !250
  %10 = icmp eq i64* %8, null, !insn.addr !251
  br i1 %10, label %dec_label_pc_11d8, label %dec_label_pc_11cc, !insn.addr !251

dec_label_pc_11cc:                                ; preds = %dec_label_pc_11ac
  %11 = add i64 %9, 8, !insn.addr !252
  %12 = inttoptr i64 %11 to i64*, !insn.addr !252
  store i64 0, i64* %12, align 8, !insn.addr !252
  %13 = add i64 %9, 16, !insn.addr !252
  %14 = inttoptr i64 %13 to i64*, !insn.addr !252
  store i64 0, i64* %14, align 8, !insn.addr !252
  %15 = bitcast i64* %8 to i32*, !insn.addr !253
  store i32 20, i32* %15, align 4, !insn.addr !253
  br label %dec_label_pc_11d8, !insn.addr !253

dec_label_pc_11d8:                                ; preds = %dec_label_pc_11cc, %dec_label_pc_11ac
  store i64 %9, i64* %4, align 8, !insn.addr !254
  %16 = call i64* @malloc(i32 24), !insn.addr !255
  %17 = ptrtoint i64* %16 to i64, !insn.addr !255
  %18 = icmp eq i64* %16, null, !insn.addr !256
  br i1 %18, label %dec_label_pc_1230, label %dec_label_pc_11f8, !insn.addr !256

dec_label_pc_11f8:                                ; preds = %dec_label_pc_11d8
  %19 = add i64 %17, 8, !insn.addr !257
  %20 = inttoptr i64 %19 to i64*, !insn.addr !257
  store i64 0, i64* %20, align 8, !insn.addr !257
  %21 = add i64 %17, 16, !insn.addr !257
  %22 = inttoptr i64 %21 to i64*, !insn.addr !257
  store i64 0, i64* %22, align 8, !insn.addr !257
  %23 = bitcast i64* %16 to i32*
  store i32 30, i32* %23, align 4, !insn.addr !258
  store i64 %17, i64* %6, align 8, !insn.addr !259
  store i64 %17, i64* %x21.0.reg2mem, !insn.addr !260
  store i64 4294967294, i64* %x22.0.reg2mem, !insn.addr !260
  br i1 %10, label %dec_label_pc_1244, label %dec_label_pc_1204, !insn.addr !260

dec_label_pc_1204:                                ; preds = %dec_label_pc_11f8
  %24 = load i32, i32* %7, align 4, !insn.addr !261
  %25 = bitcast i64* %8 to i32*, !insn.addr !262
  %26 = load i32, i32* %25, align 4, !insn.addr !262
  %27 = load i32, i32* %23, align 4, !insn.addr !263
  %28 = add i32 %26, %24, !insn.addr !264
  %29 = add i32 %28, %27, !insn.addr !265
  %30 = zext i32 %29 to i64, !insn.addr !265
  call void @free(i64* nonnull %8), !insn.addr !266
  %31 = load i64, i64* %6, align 8, !insn.addr !267
  store i64 %31, i64* %x21.0.reg2mem, !insn.addr !268
  store i64 %30, i64* %x22.0.reg2mem, !insn.addr !268
  br label %dec_label_pc_1244, !insn.addr !268

dec_label_pc_1230:                                ; preds = %dec_label_pc_11d8
  store i64 %17, i64* %6, align 8, !insn.addr !259
  store i64 4294967294, i64* %x22.1.reg2mem, !insn.addr !269
  br i1 %10, label %dec_label_pc_124c, label %dec_label_pc_1234, !insn.addr !269

dec_label_pc_1234:                                ; preds = %dec_label_pc_1230
  call void @free(i64* nonnull %8), !insn.addr !270
  store i64 4294967294, i64* %x22.1.reg2mem, !insn.addr !270
  br label %dec_label_pc_124c, !insn.addr !270

dec_label_pc_1244:                                ; preds = %dec_label_pc_11f8, %dec_label_pc_1204
  %x22.0.reload = load i64, i64* %x22.0.reg2mem
  %x21.0.reload = load i64, i64* %x21.0.reg2mem
  %32 = inttoptr i64 %x21.0.reload to i64*, !insn.addr !271
  call void @free(i64* %32), !insn.addr !271
  store i64 %x22.0.reload, i64* %x22.1.reg2mem, !insn.addr !271
  br label %dec_label_pc_124c, !insn.addr !271

dec_label_pc_124c:                                ; preds = %dec_label_pc_1230, %dec_label_pc_1234, %dec_label_pc_1244
  %x22.1.reload = load i64, i64* %x22.1.reg2mem
  call void @free(i64* nonnull %0), !insn.addr !272
  store i64 %x22.1.reload, i64* %x22.2.reg2mem, !insn.addr !272
  br label %dec_label_pc_1254, !insn.addr !272

dec_label_pc_1254:                                ; preds = %dec_label_pc_1190, %dec_label_pc_124c
  %x22.2.reload = load i64, i64* %x22.2.reg2mem
  %33 = and i64 %x22.2.reload, 4294967295, !insn.addr !273
  ret i64 %33, !insn.addr !274

; uselistorder directives
  uselistorder i64 %17, { 1, 0, 2, 3, 4 }
  uselistorder i1 %10, { 1, 0, 2 }
  uselistorder i64* %0, { 0, 1, 3, 2 }
  uselistorder i64* %x21.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x22.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x22.1.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64* %x22.2.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1254, { 1, 0 }
  uselistorder label %dec_label_pc_124c, { 2, 1, 0 }
  uselistorder label %dec_label_pc_1244, { 1, 0 }
}

define i64 @memory_leak() local_unnamed_addr {
dec_label_pc_1268:
  %0 = alloca i64
  %storemerge1.reg2mem = alloca i64, !insn.addr !275
  %x8.0.reg2mem = alloca i64, !insn.addr !275
  %1 = load i64, i64* %0
  %2 = and i64 %1, 4294967295, !insn.addr !276
  %3 = call i64 @__asm_sbfiz(i64 %1, i64 %2, i64 2, i64 32), !insn.addr !277
  %4 = trunc i64 %3 to i32, !insn.addr !278
  %5 = call i64* @malloc(i32 %4), !insn.addr !278
  %6 = icmp eq i64* %5, null, !insn.addr !279
  store i64 4294967295, i64* %storemerge1.reg2mem, !insn.addr !279
  br i1 %6, label %dec_label_pc_12bc, label %dec_label_pc_1284, !insn.addr !279

dec_label_pc_1284:                                ; preds = %dec_label_pc_1268
  %7 = ptrtoint i64* %5 to i64, !insn.addr !278
  %8 = trunc i64 %1 to i32, !insn.addr !280
  %9 = icmp slt i32 %8, 1, !insn.addr !280
  store i64 0, i64* %x8.0.reg2mem, !insn.addr !280
  br i1 %9, label %dec_label_pc_12a4, label %dec_label_pc_1294, !insn.addr !280

dec_label_pc_1294:                                ; preds = %dec_label_pc_1284, %dec_label_pc_1294
  %x8.0.reload = load i64, i64* %x8.0.reg2mem
  %10 = trunc i64 %x8.0.reload to i32, !insn.addr !281
  %11 = mul i64 %x8.0.reload, 4, !insn.addr !281
  %12 = add i64 %11, %7, !insn.addr !281
  %13 = inttoptr i64 %12 to i32*, !insn.addr !281
  store i32 %10, i32* %13, align 4, !insn.addr !281
  %14 = add i64 %x8.0.reload, 1, !insn.addr !282
  %15 = icmp eq i64 %2, %14, !insn.addr !283
  store i64 %14, i64* %x8.0.reg2mem, !insn.addr !283
  br i1 %15, label %dec_label_pc_12a4, label %dec_label_pc_1294, !insn.addr !283

dec_label_pc_12a4:                                ; preds = %dec_label_pc_1294, %dec_label_pc_1284
  %16 = icmp slt i32 %8, 0, !insn.addr !284
  %17 = zext i1 %16 to i64
  %storemerge.in = add i64 %1, %17
  %storemerge = mul i64 %storemerge.in, 2
  %18 = and i64 %storemerge, 4294967292, !insn.addr !285
  %19 = add i64 %18, %7, !insn.addr !285
  %20 = inttoptr i64 %19 to i32*, !insn.addr !285
  %21 = load i32, i32* %20, align 4, !insn.addr !285
  %22 = zext i32 %21 to i64, !insn.addr !285
  store i64 %22, i64* %storemerge1.reg2mem, !insn.addr !286
  br label %dec_label_pc_12bc, !insn.addr !286

dec_label_pc_12bc:                                ; preds = %dec_label_pc_1268, %dec_label_pc_12a4
  %storemerge1.reload = load i64, i64* %storemerge1.reg2mem
  ret i64 %storemerge1.reload, !insn.addr !287

; uselistorder directives
  uselistorder i64 %x8.0.reload, { 1, 2, 0 }
  uselistorder i64* %5, { 1, 0 }
  uselistorder i64 %1, { 3, 2, 1, 0 }
  uselistorder i64* %x8.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge1.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_12bc, { 1, 0 }
  uselistorder label %dec_label_pc_1294, { 1, 0 }
}

define i64 @dangling_pointer() local_unnamed_addr {
dec_label_pc_12c8:
  %storemerge.reg2mem = alloca i64, !insn.addr !288
  %0 = call i64* @malloc(i32 4), !insn.addr !289
  %1 = icmp eq i64* %0, null, !insn.addr !290
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !290
  br i1 %1, label %dec_label_pc_1310, label %dec_label_pc_12e0, !insn.addr !290

dec_label_pc_12e0:                                ; preds = %dec_label_pc_12c8
  %2 = bitcast i64* %0 to i32*, !insn.addr !291
  store i32 42, i32* %2, align 4, !insn.addr !291
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_1d80, i64 0, i64 0), i64 42), !insn.addr !292
  call void @free(i64* nonnull %0), !insn.addr !293
  %4 = load i32, i32* %2, align 4, !insn.addr !294
  %5 = zext i32 %4 to i64, !insn.addr !294
  store i64 %5, i64* %storemerge.reg2mem, !insn.addr !295
  br label %dec_label_pc_1310, !insn.addr !295

dec_label_pc_1310:                                ; preds = %dec_label_pc_12c8, %dec_label_pc_12e0
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !296

; uselistorder directives
  uselistorder i32* %2, { 1, 0 }
  uselistorder i64* %0, { 1, 0, 2 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1310, { 1, 0 }
}

define i64 @double_free() local_unnamed_addr {
dec_label_pc_131c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %1, 0, !insn.addr !297
  br i1 %2, label %dec_label_pc_1328, label %dec_label_pc_1320, !insn.addr !297

dec_label_pc_1320:                                ; preds = %dec_label_pc_131c
  %3 = and i64 %1, 4294967295, !insn.addr !298
  ret i64 %3, !insn.addr !299

dec_label_pc_1328:                                ; preds = %dec_label_pc_131c
  ret i64 4294967294, !insn.addr !300

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @heap_overflow() local_unnamed_addr {
dec_label_pc_1330:
  %x19.0.reg2mem = alloca i64, !insn.addr !301
  %x9.0.reg2mem = alloca i64, !insn.addr !301
  %x8.0.reg2mem = alloca i64, !insn.addr !301
  %0 = call i64* @malloc(i32 40), !insn.addr !302
  %1 = ptrtoint i64* %0 to i64, !insn.addr !302
  %2 = icmp eq i64* %0, null, !insn.addr !303
  store i64 0, i64* %x8.0.reg2mem, !insn.addr !303
  store i64 0, i64* %x9.0.reg2mem, !insn.addr !303
  store i64 4294967295, i64* %x19.0.reg2mem, !insn.addr !303
  br i1 %2, label %dec_label_pc_1374, label %dec_label_pc_1350, !insn.addr !303

dec_label_pc_1350:                                ; preds = %dec_label_pc_1330, %dec_label_pc_1350
  %x9.0.reload = load i64, i64* %x9.0.reg2mem
  %x8.0.reload = load i64, i64* %x8.0.reg2mem
  %3 = trunc i64 %x9.0.reload to i32, !insn.addr !304
  %4 = add i64 %x8.0.reload, %1, !insn.addr !304
  %5 = inttoptr i64 %4 to i32*, !insn.addr !304
  store i32 %3, i32* %5, align 4, !insn.addr !304
  %6 = add nuw nsw i64 %x9.0.reload, 100, !insn.addr !305
  %7 = and i64 %6, 4294967295, !insn.addr !305
  %8 = add nuw nsw i64 %x8.0.reload, 4, !insn.addr !306
  %9 = icmp eq i64 %8, 44, !insn.addr !307
  store i64 %8, i64* %x8.0.reg2mem, !insn.addr !307
  store i64 %7, i64* %x9.0.reg2mem, !insn.addr !307
  br i1 %9, label %dec_label_pc_1364, label %dec_label_pc_1350, !insn.addr !307

dec_label_pc_1364:                                ; preds = %dec_label_pc_1350
  %10 = bitcast i64* %0 to i32*, !insn.addr !308
  %11 = load i32, i32* %10, align 4, !insn.addr !308
  %12 = zext i32 %11 to i64, !insn.addr !308
  call void @free(i64* nonnull %0), !insn.addr !309
  store i64 %12, i64* %x19.0.reg2mem, !insn.addr !310
  br label %dec_label_pc_1374, !insn.addr !310

dec_label_pc_1374:                                ; preds = %dec_label_pc_1330, %dec_label_pc_1364
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  ret i64 %x19.0.reload, !insn.addr !311

; uselistorder directives
  uselistorder i64 %x9.0.reload, { 1, 0 }
  uselistorder i64* %x8.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x9.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x19.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1374, { 1, 0 }
  uselistorder label %dec_label_pc_1350, { 1, 0 }
}

define i64 @test_heap_memory() local_unnamed_addr {
dec_label_pc_1384:
  %x0.0.reg2mem = alloca i64, !insn.addr !312
  %storemerge.reg2mem = alloca i64, !insn.addr !312
  %storemerge2.reg2mem = alloca i64, !insn.addr !312
  %x8.5.reg2mem = alloca i64, !insn.addr !312
  %x1.0.ph.reg2mem = alloca i64, !insn.addr !312
  %x19.4.reg2mem = alloca i64, !insn.addr !312
  %x9.2.reg2mem = alloca i64, !insn.addr !312
  %x8.4.reg2mem = alloca i64, !insn.addr !312
  %x20.1.reg2mem = alloca i64, !insn.addr !312
  %x20.0.reg2mem = alloca i64, !insn.addr !312
  %x19.3.reg2mem = alloca i64, !insn.addr !312
  %x9.1.reg2mem = alloca i64, !insn.addr !312
  %x8.3.reg2mem = alloca i64, !insn.addr !312
  %x8.2.reg2mem = alloca i64, !insn.addr !312
  %x19.2.reg2mem = alloca i64, !insn.addr !312
  %x19.1.reg2mem = alloca i32, !insn.addr !312
  %x8.1.reg2mem = alloca i64, !insn.addr !312
  %x19.0.reg2mem = alloca i64, !insn.addr !312
  %x9.0.reg2mem = alloca i64, !insn.addr !312
  %x8.0.reg2mem = alloca i64, !insn.addr !312
  %stack_var_-36 = alloca i32, align 4
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_2243 to i8*)), !insn.addr !313
  %1 = call i64* @malloc(i32 40), !insn.addr !314
  %2 = ptrtoint i64* %1 to i64, !insn.addr !314
  %3 = icmp eq i64* %1, null, !insn.addr !315
  store i64 0, i64* %x8.0.reg2mem, !insn.addr !315
  store i64 %2, i64* %x9.0.reg2mem, !insn.addr !315
  store i64 4294967295, i64* %x19.0.reg2mem, !insn.addr !315
  br i1 %3, label %dec_label_pc_13d4, label %dec_label_pc_13b4, !insn.addr !315

dec_label_pc_13b4:                                ; preds = %dec_label_pc_1384, %dec_label_pc_13b4
  %x9.0.reload = load i64, i64* %x9.0.reg2mem
  %x8.0.reload = load i64, i64* %x8.0.reg2mem
  %4 = trunc i64 %x8.0.reload to i32, !insn.addr !316
  %5 = inttoptr i64 %x9.0.reload to i32*, !insn.addr !316
  store i32 %4, i32* %5, align 4, !insn.addr !316
  %6 = add i64 %x9.0.reload, 4, !insn.addr !316
  %7 = add nuw nsw i64 %x8.0.reload, 2, !insn.addr !317
  %8 = icmp eq i64 %7, 20, !insn.addr !318
  store i64 %7, i64* %x8.0.reg2mem, !insn.addr !318
  store i64 %6, i64* %x9.0.reg2mem, !insn.addr !318
  br i1 %8, label %dec_label_pc_13c4, label %dec_label_pc_13b4, !insn.addr !318

dec_label_pc_13c4:                                ; preds = %dec_label_pc_13b4
  %9 = add i64 %2, 20, !insn.addr !319
  %10 = inttoptr i64 %9 to i32*, !insn.addr !319
  %11 = load i32, i32* %10, align 4, !insn.addr !319
  %12 = zext i32 %11 to i64, !insn.addr !319
  call void @free(i64* nonnull %1), !insn.addr !320
  store i64 %12, i64* %x19.0.reg2mem, !insn.addr !321
  br label %dec_label_pc_13d4, !insn.addr !321

dec_label_pc_13d4:                                ; preds = %dec_label_pc_1384, %dec_label_pc_13c4
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_1d97, i64 0, i64 0), i64 %x19.0.reload), !insn.addr !322
  %14 = call i64* @calloc(i32 5, i32 4), !insn.addr !323
  %15 = ptrtoint i64* %14 to i64, !insn.addr !323
  %16 = icmp eq i64* %14, null, !insn.addr !324
  store i64 0, i64* %x8.1.reg2mem, !insn.addr !324
  store i32 0, i32* %x19.1.reg2mem, !insn.addr !324
  store i64 4294967295, i64* %x19.2.reg2mem, !insn.addr !324
  br i1 %16, label %dec_label_pc_141c, label %dec_label_pc_13fc, !insn.addr !324

dec_label_pc_13fc:                                ; preds = %dec_label_pc_13d4, %dec_label_pc_13fc
  %x19.1.reload = load i32, i32* %x19.1.reg2mem
  %x8.1.reload = load i64, i64* %x8.1.reg2mem
  %17 = add i64 %x8.1.reload, %15, !insn.addr !325
  %18 = inttoptr i64 %17 to i32*, !insn.addr !325
  %19 = load i32, i32* %18, align 4, !insn.addr !325
  %20 = add nuw nsw i64 %x8.1.reload, 4, !insn.addr !326
  %21 = add i32 %19, %x19.1.reload, !insn.addr !327
  %22 = icmp eq i64 %20, 20, !insn.addr !328
  store i64 %20, i64* %x8.1.reg2mem, !insn.addr !328
  store i32 %21, i32* %x19.1.reg2mem, !insn.addr !328
  br i1 %22, label %dec_label_pc_1410, label %dec_label_pc_13fc, !insn.addr !328

dec_label_pc_1410:                                ; preds = %dec_label_pc_13fc
  %23 = zext i32 %21 to i64, !insn.addr !327
  call void @free(i64* nonnull %14), !insn.addr !329
  store i64 %23, i64* %x19.2.reg2mem, !insn.addr !330
  br label %dec_label_pc_141c, !insn.addr !330

dec_label_pc_141c:                                ; preds = %dec_label_pc_13d4, %dec_label_pc_1410
  %x19.2.reload = load i64, i64* %x19.2.reg2mem
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_1db4, i64 0, i64 0), i64 %x19.2.reload), !insn.addr !331
  %25 = call i64* @malloc(i32 20), !insn.addr !332
  %26 = ptrtoint i64* %25 to i64, !insn.addr !332
  %27 = icmp eq i64* %25, null, !insn.addr !333
  store i64 0, i64* %x8.2.reg2mem, !insn.addr !333
  store i64 4294967295, i64* %x20.1.reg2mem, !insn.addr !333
  br i1 %27, label %dec_label_pc_14b8, label %dec_label_pc_1440, !insn.addr !333

dec_label_pc_1440:                                ; preds = %dec_label_pc_141c, %dec_label_pc_1440
  %x8.2.reload = load i64, i64* %x8.2.reg2mem
  %28 = add nuw nsw i64 %x8.2.reload, 1, !insn.addr !334
  %29 = trunc i64 %28 to i32, !insn.addr !335
  %30 = mul i64 %x8.2.reload, 4, !insn.addr !335
  %31 = add i64 %30, %26, !insn.addr !335
  %32 = inttoptr i64 %31 to i32*, !insn.addr !335
  store i32 %29, i32* %32, align 4, !insn.addr !335
  %33 = icmp eq i64 %28, 5, !insn.addr !336
  store i64 %28, i64* %x8.2.reg2mem, !insn.addr !336
  br i1 %33, label %dec_label_pc_1454, label %dec_label_pc_1440, !insn.addr !336

dec_label_pc_1454:                                ; preds = %dec_label_pc_1440
  %34 = add i64 %26, 8, !insn.addr !337
  %35 = inttoptr i64 %34 to i32*, !insn.addr !337
  %36 = load i32, i32* %35, align 4, !insn.addr !337
  %37 = call i64* @realloc(i64* nonnull %25, i32 40), !insn.addr !338
  %38 = ptrtoint i64* %37 to i64, !insn.addr !338
  %39 = icmp eq i64* %37, null, !insn.addr !339
  store i64 50, i64* %x8.3.reg2mem, !insn.addr !339
  store i64 20, i64* %x9.1.reg2mem, !insn.addr !339
  store i64 %26, i64* %x19.3.reg2mem, !insn.addr !339
  store i64 4294967294, i64* %x20.0.reg2mem, !insn.addr !339
  br i1 %39, label %dec_label_pc_14b0, label %dec_label_pc_1470, !insn.addr !339

dec_label_pc_1470:                                ; preds = %dec_label_pc_1454, %dec_label_pc_1470
  %x9.1.reload = load i64, i64* %x9.1.reg2mem
  %x8.3.reload = load i64, i64* %x8.3.reg2mem
  %40 = trunc i64 %x8.3.reload to i32, !insn.addr !340
  %41 = add i64 %x9.1.reload, %38, !insn.addr !340
  %42 = inttoptr i64 %41 to i32*, !insn.addr !340
  store i32 %40, i32* %42, align 4, !insn.addr !340
  %43 = add nuw nsw i64 %x9.1.reload, 4, !insn.addr !341
  %44 = add nuw nsw i64 %x8.3.reload, 10, !insn.addr !342
  %45 = and i64 %44, 4294967295, !insn.addr !342
  %46 = icmp eq i64 %43, 40, !insn.addr !343
  store i64 %45, i64* %x8.3.reg2mem, !insn.addr !343
  store i64 %43, i64* %x9.1.reg2mem, !insn.addr !343
  br i1 %46, label %dec_label_pc_1484, label %dec_label_pc_1470, !insn.addr !343

dec_label_pc_1484:                                ; preds = %dec_label_pc_1470
  %47 = add i64 %38, 8, !insn.addr !344
  %48 = inttoptr i64 %47 to i32*, !insn.addr !344
  %49 = load i32, i32* %48, align 4, !insn.addr !344
  %50 = icmp eq i32 %36, %49, !insn.addr !345
  store i64 %38, i64* %x19.3.reg2mem, !insn.addr !345
  store i64 4294967293, i64* %x20.0.reg2mem, !insn.addr !345
  br i1 %50, label %dec_label_pc_1490, label %dec_label_pc_14b0, !insn.addr !345

dec_label_pc_1490:                                ; preds = %dec_label_pc_1484
  %51 = add i64 %38, 20, !insn.addr !346
  %52 = inttoptr i64 %51 to i32*, !insn.addr !346
  %53 = load i32, i32* %52, align 4, !insn.addr !346
  %54 = zext i32 %53 to i64, !insn.addr !346
  store i64 %38, i64* %x19.3.reg2mem, !insn.addr !347
  store i64 %54, i64* %x20.0.reg2mem, !insn.addr !347
  br label %dec_label_pc_14b0, !insn.addr !347

dec_label_pc_14b0:                                ; preds = %dec_label_pc_1490, %dec_label_pc_1484, %dec_label_pc_1454
  %x20.0.reload = load i64, i64* %x20.0.reg2mem
  %x19.3.reload = load i64, i64* %x19.3.reg2mem
  %55 = inttoptr i64 %x19.3.reload to i64*, !insn.addr !348
  call void @free(i64* %55), !insn.addr !348
  store i64 %x20.0.reload, i64* %x20.1.reg2mem, !insn.addr !348
  br label %dec_label_pc_14b8, !insn.addr !348

dec_label_pc_14b8:                                ; preds = %dec_label_pc_141c, %dec_label_pc_14b0
  %x20.1.reload = load i64, i64* %x20.1.reg2mem
  %56 = and i64 %x20.1.reload, 4294967295, !insn.addr !349
  %57 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_1dd2, i64 0, i64 0), i64 %56), !insn.addr !350
  %58 = call i64* @malloc(i32 40), !insn.addr !351
  %59 = ptrtoint i64* %58 to i64, !insn.addr !351
  %60 = icmp eq i64* %58, null, !insn.addr !352
  store i64 0, i64* %x8.4.reg2mem, !insn.addr !352
  store i64 %59, i64* %x9.2.reg2mem, !insn.addr !352
  store i64 4294967295, i64* %x19.4.reg2mem, !insn.addr !352
  br i1 %60, label %dec_label_pc_14fc, label %dec_label_pc_14dc, !insn.addr !352

dec_label_pc_14dc:                                ; preds = %dec_label_pc_14b8, %dec_label_pc_14dc
  %x9.2.reload = load i64, i64* %x9.2.reg2mem
  %x8.4.reload = load i64, i64* %x8.4.reg2mem
  %61 = trunc i64 %x8.4.reload to i32, !insn.addr !353
  %62 = inttoptr i64 %x9.2.reload to i32*, !insn.addr !353
  store i32 %61, i32* %62, align 4, !insn.addr !353
  %63 = add i64 %x9.2.reload, 4, !insn.addr !353
  %64 = add nuw nsw i64 %x8.4.reload, 3, !insn.addr !354
  %65 = icmp eq i64 %64, 30, !insn.addr !355
  store i64 %64, i64* %x8.4.reg2mem, !insn.addr !355
  store i64 %63, i64* %x9.2.reg2mem, !insn.addr !355
  br i1 %65, label %dec_label_pc_14ec, label %dec_label_pc_14dc, !insn.addr !355

dec_label_pc_14ec:                                ; preds = %dec_label_pc_14dc
  %66 = add i64 %59, 20, !insn.addr !356
  %67 = inttoptr i64 %66 to i32*, !insn.addr !356
  %68 = load i32, i32* %67, align 4, !insn.addr !356
  %69 = zext i32 %68 to i64, !insn.addr !356
  call void @free(i64* nonnull %58), !insn.addr !357
  store i64 %69, i64* %x19.4.reg2mem, !insn.addr !358
  br label %dec_label_pc_14fc, !insn.addr !358

dec_label_pc_14fc:                                ; preds = %dec_label_pc_14b8, %dec_label_pc_14ec
  %x19.4.reload = load i64, i64* %x19.4.reg2mem
  %70 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_1df1, i64 0, i64 0), i64 %x19.4.reload), !insn.addr !359
  %71 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_1e0e, i64 0, i64 0), i64 15), !insn.addr !360
  %72 = call i64* @malloc(i32 16), !insn.addr !361
  %73 = icmp eq i64* %72, null, !insn.addr !362
  br i1 %73, label %dec_label_pc_156c, label %dec_label_pc_152c, !insn.addr !362

dec_label_pc_152c:                                ; preds = %dec_label_pc_14fc
  %74 = ptrtoint i64* %72 to i64, !insn.addr !361
  %75 = bitcast i64* %72 to i32*, !insn.addr !363
  store i32 10, i32* %75, align 4, !insn.addr !363
  %76 = call i64* @malloc(i32 16), !insn.addr !364
  %77 = ptrtoint i64* %76 to i64, !insn.addr !364
  %78 = add i64 %74, 8
  %79 = inttoptr i64 %78 to i64*
  store i64 %77, i64* %79, align 8, !insn.addr !365
  %80 = icmp eq i64* %76, null, !insn.addr !366
  br i1 %80, label %dec_label_pc_1560, label %dec_label_pc_1544, !insn.addr !366

dec_label_pc_1544:                                ; preds = %dec_label_pc_152c
  %81 = add i64 %77, 8, !insn.addr !367
  %82 = inttoptr i64 %81 to i64*, !insn.addr !367
  store i64 0, i64* %82, align 8, !insn.addr !367
  %83 = bitcast i64* %76 to i32*, !insn.addr !368
  store i32 20, i32* %83, align 4, !insn.addr !368
  store i64 0, i64* %x1.0.ph.reg2mem, !insn.addr !369
  br label %dec_label_pc_157c, !insn.addr !369

dec_label_pc_1560:                                ; preds = %dec_label_pc_152c
  call void @free(i64* nonnull %72), !insn.addr !370
  store i64 4294967294, i64* %x1.0.ph.reg2mem, !insn.addr !371
  br label %dec_label_pc_157c, !insn.addr !371

dec_label_pc_156c:                                ; preds = %dec_label_pc_14fc
  %84 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_1e2c, i64 0, i64 0), i64 4294967295), !insn.addr !372
  br label %dec_label_pc_158c

dec_label_pc_157c:                                ; preds = %dec_label_pc_1560, %dec_label_pc_1544
  %x1.0.ph.reload = load i64, i64* %x1.0.ph.reg2mem
  %85 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_1e2c, i64 0, i64 0), i64 %x1.0.ph.reload), !insn.addr !372
  %86 = load i64, i64* %79, align 8, !insn.addr !373
  %87 = inttoptr i64 %86 to i64*, !insn.addr !374
  call void @free(i64* %87), !insn.addr !374
  call void @free(i64* nonnull %72), !insn.addr !375
  br label %dec_label_pc_158c, !insn.addr !375

dec_label_pc_158c:                                ; preds = %dec_label_pc_156c, %dec_label_pc_157c
  %88 = call i64 @linked_list_heap(), !insn.addr !376
  %89 = and i64 %88, 4294967295, !insn.addr !377
  %90 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_1e4a, i64 0, i64 0), i64 %89), !insn.addr !378
  %91 = call i64 @tree_heap_traversal(), !insn.addr !379
  %92 = and i64 %91, 4294967295, !insn.addr !380
  %93 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_1e6d, i64 0, i64 0), i64 %92), !insn.addr !381
  %94 = call i64* @malloc(i32 20), !insn.addr !382
  %95 = ptrtoint i64* %94 to i64, !insn.addr !382
  %96 = icmp eq i64* %94, null, !insn.addr !383
  store i64 0, i64* %x8.5.reg2mem, !insn.addr !383
  store i64 4294967295, i64* %storemerge2.reg2mem, !insn.addr !383
  br i1 %96, label %dec_label_pc_15e0, label %dec_label_pc_15c4, !insn.addr !383

dec_label_pc_15c4:                                ; preds = %dec_label_pc_158c, %dec_label_pc_15c4
  %x8.5.reload = load i64, i64* %x8.5.reg2mem
  %97 = trunc i64 %x8.5.reload to i32, !insn.addr !384
  %98 = mul i64 %x8.5.reload, 4, !insn.addr !384
  %99 = add i64 %98, %95, !insn.addr !384
  %100 = inttoptr i64 %99 to i32*, !insn.addr !384
  store i32 %97, i32* %100, align 4, !insn.addr !384
  %101 = add nuw nsw i64 %x8.5.reload, 1, !insn.addr !385
  %102 = icmp eq i64 %101, 5, !insn.addr !386
  store i64 %101, i64* %x8.5.reg2mem, !insn.addr !386
  br i1 %102, label %dec_label_pc_15d4, label %dec_label_pc_15c4, !insn.addr !386

dec_label_pc_15d4:                                ; preds = %dec_label_pc_15c4
  %103 = add i64 %95, 8, !insn.addr !387
  %104 = inttoptr i64 %103 to i32*, !insn.addr !387
  %105 = load i32, i32* %104, align 4, !insn.addr !387
  %106 = zext i32 %105 to i64, !insn.addr !387
  store i64 %106, i64* %storemerge2.reg2mem, !insn.addr !388
  br label %dec_label_pc_15e0, !insn.addr !388

dec_label_pc_15e0:                                ; preds = %dec_label_pc_158c, %dec_label_pc_15d4
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %107 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_1e93, i64 0, i64 0), i64 %storemerge2.reload), !insn.addr !389
  %108 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_1eb1, i64 0, i64 0)), !insn.addr !390
  %109 = call i32 @fork(), !insn.addr !391
  %110 = icmp eq i32 %109, 0, !insn.addr !392
  br i1 %110, label %dec_label_pc_1670, label %dec_label_pc_1600, !insn.addr !392

dec_label_pc_1600:                                ; preds = %dec_label_pc_15e0
  %111 = icmp slt i32 %109, 1, !insn.addr !393
  br i1 %111, label %dec_label_pc_1660, label %dec_label_pc_1608, !insn.addr !393

dec_label_pc_1608:                                ; preds = %dec_label_pc_1600
  %112 = call i32 @waitpid(i32 %109, i32* nonnull %stack_var_-36, i32 0), !insn.addr !394
  %113 = load i32, i32* %stack_var_-36, align 4, !insn.addr !395
  %114 = urem i32 %113, 128, !insn.addr !396
  %115 = icmp eq i32 %114, 0, !insn.addr !396
  store i64 ptrtoint (i8** @global_var_1f06 to i64), i64* %storemerge.reg2mem, !insn.addr !397
  br i1 %115, label %dec_label_pc_1640, label %dec_label_pc_164c, !insn.addr !397

dec_label_pc_1640:                                ; preds = %dec_label_pc_1608
  %116 = call i32 @__asm_ubfx(i32 0, i32 %113, i64 8, i64 8), !insn.addr !398
  store i64 ptrtoint (i64* @global_var_1ee1 to i64), i64* %storemerge.reg2mem, !insn.addr !399
  br label %dec_label_pc_164c, !insn.addr !399

dec_label_pc_164c:                                ; preds = %dec_label_pc_1608, %dec_label_pc_1640
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %117 = inttoptr i64 %storemerge.reload to i8*, !insn.addr !400
  %118 = call i32 (i8*, ...) @printf(i8* %117), !insn.addr !400
  %119 = sext i32 %118 to i64, !insn.addr !400
  store i64 %119, i64* %x0.0.reg2mem, !insn.addr !400
  br label %dec_label_pc_1650, !insn.addr !400

dec_label_pc_1650:                                ; preds = %dec_label_pc_1660, %dec_label_pc_164c
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !401

dec_label_pc_1660:                                ; preds = %dec_label_pc_1600
  call void @perror(i8* bitcast (i8** @global_var_1f47 to i8*)), !insn.addr !402
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.0.reg2mem, !insn.addr !403
  br label %dec_label_pc_1650, !insn.addr !403

dec_label_pc_1670:                                ; preds = %dec_label_pc_15e0
  %120 = call i64 @dangling_pointer(), !insn.addr !404
  %121 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_1ed1 to i8*)), !insn.addr !405
  call void @exit(i32 0), !insn.addr !406
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !406

; uselistorder directives
  uselistorder i32 %113, { 1, 0 }
  uselistorder i64 %x8.5.reload, { 1, 2, 0 }
  uselistorder i64 %95, { 1, 0 }
  uselistorder i64* %72, { 1, 0, 2, 4, 3 }
  uselistorder i64 %x8.4.reload, { 1, 0 }
  uselistorder i64 %59, { 1, 0 }
  uselistorder i64 %x8.3.reload, { 1, 0 }
  uselistorder i64 %38, { 0, 4, 1, 3, 2 }
  uselistorder i64 %x8.2.reload, { 1, 0 }
  uselistorder i64 %26, { 0, 2, 1 }
  uselistorder i32 %21, { 1, 0 }
  uselistorder i64 %x8.0.reload, { 1, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %x8.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x9.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x19.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x8.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %x19.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x19.2.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x8.2.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x8.3.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x9.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x20.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x8.4.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x9.2.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x19.4.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x8.5.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge2.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x0.0.reg2mem, { 2, 0, 1 }
  uselistorder i64 ptrtoint (i32* @0 to i64), { 1, 0, 2 }
  uselistorder i32 10, { 1, 2, 0, 3 }
  uselistorder i32 16, { 1, 2, 3, 0, 4, 5 }
  uselistorder void (i64*)* @free, { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 18, 17, 16, 15, 14, 13, 12, 11, 10, 19, 20 }
  uselistorder i64* null, { 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 1, 0, 2, 19, 20, 21, 22, 23, 24 }
  uselistorder i64* (i32)* @malloc, { 8, 7, 6, 5, 4, 3, 2, 1, 12, 11, 10, 9, 18, 17, 0, 16, 15, 14, 13, 19, 20 }
  uselistorder label %dec_label_pc_164c, { 1, 0 }
  uselistorder label %dec_label_pc_15e0, { 1, 0 }
  uselistorder label %dec_label_pc_15c4, { 1, 0 }
  uselistorder label %dec_label_pc_158c, { 1, 0 }
  uselistorder label %dec_label_pc_14fc, { 1, 0 }
  uselistorder label %dec_label_pc_14dc, { 1, 0 }
  uselistorder label %dec_label_pc_14b8, { 1, 0 }
  uselistorder label %dec_label_pc_1470, { 1, 0 }
  uselistorder label %dec_label_pc_1440, { 1, 0 }
  uselistorder label %dec_label_pc_141c, { 1, 0 }
  uselistorder label %dec_label_pc_13fc, { 1, 0 }
  uselistorder label %dec_label_pc_13d4, { 1, 0 }
  uselistorder label %dec_label_pc_13b4, { 1, 0 }
}

define i64 @global_var_access() local_unnamed_addr {
dec_label_pc_168c:
  store i32 ptrtoint (i32* @global_var_130b9 to i32), i32* @global_var_130b8, align 4, !insn.addr !407
  ret i64 ptrtoint (i32* @global_var_130b9 to i64), !insn.addr !408
}

define i64 @global_var_read() local_unnamed_addr {
dec_label_pc_16a0:
  %0 = load i32, i32* @global_var_130b8, align 4, !insn.addr !409
  %1 = mul i32 %0, 2, !insn.addr !410
  %2 = zext i32 %1 to i64, !insn.addr !410
  ret i64 %2, !insn.addr !411
}

define i64 @global_array_access() local_unnamed_addr {
dec_label_pc_16b0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !412
  %3 = icmp ult i32 %2, 9, !insn.addr !412
  %4 = icmp ne i1 %3, true, !insn.addr !412
  %5 = icmp eq i32 %2, 9, !insn.addr !412
  %6 = icmp ne i1 %4, true, !insn.addr !413
  %7 = or i1 %5, %6, !insn.addr !413
  br i1 %7, label %dec_label_pc_16c0, label %dec_label_pc_16b8, !insn.addr !413

dec_label_pc_16b8:                                ; preds = %dec_label_pc_16b0
  ret i64 4294967295, !insn.addr !414

dec_label_pc_16c0:                                ; preds = %dec_label_pc_16b0
  %8 = mul i64 %1, 4, !insn.addr !415
  %9 = and i64 %8, 4294967292, !insn.addr !415
  %10 = add i64 %9, ptrtoint (i32** @global_var_22a8 to i64), !insn.addr !415
  %11 = inttoptr i64 %10 to i32*, !insn.addr !415
  %12 = load i32, i32* %11, align 4, !insn.addr !415
  %13 = zext i32 %12 to i64, !insn.addr !415
  ret i64 %13, !insn.addr !416

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64 4294967292, { 5, 0, 1, 2, 3, 4 }
  uselistorder i64 4, { 0, 1, 8, 9, 2, 10, 11, 12, 3, 6, 7, 13, 14, 4, 15, 16, 17, 18, 19, 20, 21, 5, 22 }
  uselistorder i1 true, { 4, 5, 2, 1, 3, 0 }
}

define i64 @static_local() local_unnamed_addr {
dec_label_pc_16d0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !417
  %3 = icmp eq i32 %2, 0, !insn.addr !417
  %. = select i1 %3, i64 ptrtoint (i32* @global_var_130bd to i64), i64 0
  %4 = trunc i64 %. to i32, !insn.addr !418
  store i32 %4, i32* bitcast (i64* @global_var_130bc to i32*), align 8, !insn.addr !418
  ret i64 %., !insn.addr !419
}

define i64 @call_static_func() local_unnamed_addr {
dec_label_pc_16e8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !420
  %3 = call i32 @__asm_bfi(i32 1, i32 %2, i64 1, i64 31), !insn.addr !420
  %4 = zext i32 %3 to i64, !insn.addr !421
  ret i64 %4, !insn.addr !422
}

define i64 @access_extern_global() local_unnamed_addr {
dec_label_pc_16f8:
  %0 = load i64, i64* inttoptr (i64 77784 to i64*), align 8, !insn.addr !423
  %1 = inttoptr i64 %0 to i32*, !insn.addr !424
  %2 = load i32, i32* %1, align 4, !insn.addr !424
  %3 = add i32 %2, 100, !insn.addr !425
  %4 = zext i32 %3 to i64, !insn.addr !425
  ret i64 %4, !insn.addr !426
}

define i64 @call_extern_func(i64 %arg1) local_unnamed_addr {
dec_label_pc_170c:
  %0 = call i64 @extern_function(), !insn.addr !427
  ret i64 %0, !insn.addr !428
}

define i64 @read_const_data() local_unnamed_addr {
dec_label_pc_1724:
  %0 = load i8, i8* bitcast (i32* @global_var_130a4 to i8*), align 4, !insn.addr !429
  %1 = zext i8 %0 to i64, !insn.addr !429
  %2 = add nuw nsw i64 %1, 42, !insn.addr !430
  ret i64 %2, !insn.addr !431

; uselistorder directives
  uselistorder i64 42, { 1, 2, 3, 0 }
}

define i64 @access_bss_var() local_unnamed_addr {
dec_label_pc_1738:
  ret i64 0, !insn.addr !432
}

define i64 @access_bss_buffer() local_unnamed_addr {
dec_label_pc_1740:
  ret i64 0, !insn.addr !433
}

define i64 @global_struct_access() local_unnamed_addr {
dec_label_pc_1748:
  ret i64 30, !insn.addr !434
}

define i64 @set_file_static() local_unnamed_addr {
dec_label_pc_1750:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !435
  store i32 %2, i32* @global_var_130a8, align 4, !insn.addr !435
  ret i64 %1, !insn.addr !436

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @get_file_static() local_unnamed_addr {
dec_label_pc_175c:
  %0 = load i32, i32* @global_var_130a8, align 4, !insn.addr !437
  %1 = zext i32 %0 to i64, !insn.addr !437
  ret i64 %1, !insn.addr !438
}

define i64 @set_global_callback() local_unnamed_addr {
dec_label_pc_1768:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !439
}

define i64 @call_global_callback(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1774:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* @global_var_130c0, align 8, !insn.addr !440
  %3 = icmp eq i64 %2, 0, !insn.addr !441
  %spec.select = select i1 %3, i64 4294967295, i64 %1
  ret i64 %spec.select, !insn.addr !442
}

define i64 @global_heap_store() local_unnamed_addr {
dec_label_pc_17a0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %1, 0, !insn.addr !443
  br i1 %2, label %dec_label_pc_17b4, label %dec_label_pc_17ac, !insn.addr !443

dec_label_pc_17ac:                                ; preds = %dec_label_pc_17a0
  %3 = and i64 %1, 4294967295, !insn.addr !444
  ret i64 %3, !insn.addr !445

dec_label_pc_17b4:                                ; preds = %dec_label_pc_17a0
  ret i64 4294967295, !insn.addr !446

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @static_complex_init() local_unnamed_addr {
dec_label_pc_17bc:
  ret i64 15, !insn.addr !447
}

define i64 @tls_access() local_unnamed_addr {
dec_label_pc_17c4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !448
  %3 = and i64 %2, 4294967294, !insn.addr !448
  ret i64 %3, !insn.addr !449
}

define i64 @init_order_test() local_unnamed_addr {
dec_label_pc_17cc:
  ret i64 20, !insn.addr !450
}

define i64 @test_static_global() local_unnamed_addr {
dec_label_pc_17d4:
  %stack_var_-36 = alloca i64, align 8
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_2261 to i8*)), !insn.addr !451
  store i32 ptrtoint (i32* @global_var_130b9 to i32), i32* @global_var_130b8, align 4, !insn.addr !452
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_1f52, i64 0, i64 0), i64 ptrtoint (i32* @global_var_130b9 to i64)), !insn.addr !453
  %2 = load i32, i32* @global_var_130b8, align 4, !insn.addr !454
  %3 = mul i32 %2, 2, !insn.addr !455
  %4 = zext i32 %3 to i64, !insn.addr !455
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_1f75, i64 0, i64 0), i64 %4), !insn.addr !456
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_1f96, i64 0, i64 0), i64 5), !insn.addr !457
  store i32 1, i32* bitcast (i64* @global_var_130bc to i32*), align 8, !insn.addr !458
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_1fbb, i64 0, i64 0), i64 1), !insn.addr !459
  store i32 ptrtoint (i32* @global_var_130bd to i32), i32* bitcast (i64* @global_var_130bc to i32*), align 8, !insn.addr !460
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_1fbb, i64 0, i64 0), i64 ptrtoint (i32* @global_var_130bd to i64)), !insn.addr !461
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_1fd9, i64 0, i64 0), i64 11), !insn.addr !462
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_1ffb, i64 0, i64 0), i64 ptrtoint (i32* @global_var_1303c to i64)), !insn.addr !463
  %11 = call i64 @extern_function(), !insn.addr !464
  %12 = and i64 %11, 4294967295, !insn.addr !465
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_2021, i64 0, i64 0), i64 %12), !insn.addr !466
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_2043, i64 0, i64 0), i64 ptrtoint (i32* @global_var_130ce to i64)), !insn.addr !467
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_2064, i64 0, i64 0), i64 0), !insn.addr !468
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_2084, i64 0, i64 0), i64 0), !insn.addr !469
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_20a7, i64 0, i64 0), i64 30), !insn.addr !470
  store i32 50, i32* @global_var_130a8, align 4, !insn.addr !471
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_20cd, i64 0, i64 0), i64 50), !insn.addr !472
  store i64 6548, i64* @global_var_130c0, align 8, !insn.addr !473
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_20ea, i64 0, i64 0), i64 10), !insn.addr !474
  store i64 100, i64* %stack_var_-36, align 8, !insn.addr !475
  %20 = ptrtoint i64* %stack_var_-36 to i64, !insn.addr !476
  store i64 %20, i64* @global_var_130c8, align 8, !insn.addr !476
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_210b, i64 0, i64 0), i64 100), !insn.addr !477
  %22 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_212e, i64 0, i64 0), i64 15), !insn.addr !478
  %23 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_2153, i64 0, i64 0), i64 20), !insn.addr !479
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_216f, i64 0, i64 0), i64 20), !insn.addr !480
  %25 = sext i32 %24 to i64, !insn.addr !480
  ret i64 %25, !insn.addr !481

; uselistorder directives
  uselistorder i64 20, { 4, 5, 2, 12, 13, 0, 6, 14, 7, 15, 1, 8, 9, 10, 11, 3 }
  uselistorder i64 15, { 1, 0, 2, 3, 4, 5 }
  uselistorder i64 100, { 2, 0, 1 }
  uselistorder i64 10, { 3, 0, 1, 2 }
  uselistorder i32 100, { 1, 0 }
  uselistorder i32* @global_var_130a8, { 2, 1, 0 }
  uselistorder i64 30, { 1, 0, 2, 3 }
  uselistorder i64 ()* @extern_function, { 1, 0 }
  uselistorder i64 ptrtoint (i32* @global_var_130bd to i64), { 1, 0 }
  uselistorder i64 ptrtoint (i32* @global_var_130b9 to i64), { 1, 0 }
  uselistorder i32* @global_var_130b8, { 3, 2, 1, 0 }
  uselistorder i32* @global_var_130b9, { 1, 0 }
}

define i64 @double_value() local_unnamed_addr {
dec_label_pc_1994:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !482
  %3 = and i64 %2, 4294967294, !insn.addr !482
  ret i64 %3, !insn.addr !483
}

define i64 @memop_memset() local_unnamed_addr {
dec_label_pc_199c:
  %0 = alloca i64
  %.reg2mem = alloca i64, !insn.addr !484
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = icmp eq i64 %3, 0, !insn.addr !485
  %5 = icmp eq i64 %2, 0, !insn.addr !486
  %or.cond = or i1 %5, %4
  store i64 4294967295, i64* %.reg2mem, !insn.addr !485
  br i1 %or.cond, label %dec_label_pc_19d0, label %dec_label_pc_19bc, !insn.addr !485

dec_label_pc_19bc:                                ; preds = %dec_label_pc_199c
  %6 = trunc i64 %1 to i32, !insn.addr !487
  %7 = inttoptr i64 %3 to i64*, !insn.addr !488
  %8 = trunc i64 %2 to i32, !insn.addr !488
  %9 = call i64* @memset(i64* %7, i32 %6, i32 %8), !insn.addr !488
  store i64 255, i64* %.reg2mem, !insn.addr !489
  br label %dec_label_pc_19d0, !insn.addr !489

dec_label_pc_19d0:                                ; preds = %dec_label_pc_19bc, %dec_label_pc_199c
  %.reload = load i64, i64* %.reg2mem, !insn.addr !490
  ret i64 %.reload, !insn.addr !490

; uselistorder directives
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64* %.reg2mem, { 0, 2, 1 }
  uselistorder i64* %0, { 2, 1, 0 }
}

define i64 @memop_memcpy() local_unnamed_addr {
dec_label_pc_19dc:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !491
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = icmp eq i64 %3, 0, !insn.addr !492
  %5 = icmp eq i64 %2, 0, !insn.addr !493
  %or.cond = or i1 %5, %4
  %6 = icmp eq i64 %1, 0, !insn.addr !494
  %or.cond2 = or i1 %6, %or.cond
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !492
  br i1 %or.cond2, label %dec_label_pc_1a18, label %dec_label_pc_1a00, !insn.addr !492

dec_label_pc_1a00:                                ; preds = %dec_label_pc_19dc
  %7 = inttoptr i64 %3 to i64*, !insn.addr !495
  %8 = inttoptr i64 %2 to i64*, !insn.addr !495
  %9 = trunc i64 %1 to i32, !insn.addr !495
  %10 = call i64* @memcpy(i64* %7, i64* %8, i32 %9), !insn.addr !495
  %11 = add i64 %1, -4
  %12 = and i64 %11, -4, !insn.addr !496
  %13 = add i64 %12, %3, !insn.addr !497
  %14 = inttoptr i64 %13 to i32*, !insn.addr !497
  %15 = load i32, i32* %14, align 4, !insn.addr !497
  %16 = zext i32 %15 to i64, !insn.addr !497
  store i64 %16, i64* %x0.0.reg2mem, !insn.addr !497
  br label %dec_label_pc_1a18, !insn.addr !497

dec_label_pc_1a18:                                ; preds = %dec_label_pc_1a00, %dec_label_pc_19dc
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !498

; uselistorder directives
  uselistorder i64 %3, { 2, 1, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 2, 0, 1 }
  uselistorder i64* %0, { 2, 1, 0 }
}

define i64 @memop_memmove() local_unnamed_addr {
dec_label_pc_1a24:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !499
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = icmp eq i64 %2, 0, !insn.addr !500
  %4 = icmp ult i64 %1, 2, !insn.addr !501
  %or.cond = or i1 %4, %3
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !500
  br i1 %or.cond, label %dec_label_pc_1a58, label %dec_label_pc_1a44, !insn.addr !500

dec_label_pc_1a44:                                ; preds = %dec_label_pc_1a24
  %5 = add i64 %2, 1, !insn.addr !502
  %6 = inttoptr i64 %5 to i64*, !insn.addr !503
  %7 = inttoptr i64 %2 to i64*, !insn.addr !503
  %8 = trunc i64 %1 to i32
  %9 = add i32 %8, -1, !insn.addr !503
  %10 = call i64* @memmove(i64* %6, i64* %7, i32 %9), !insn.addr !503
  %11 = inttoptr i64 %5 to i8*, !insn.addr !504
  %12 = load i8, i8* %11, align 1, !insn.addr !504
  %13 = zext i8 %12 to i64, !insn.addr !504
  store i64 %13, i64* %x0.0.reg2mem, !insn.addr !504
  br label %dec_label_pc_1a58, !insn.addr !504

dec_label_pc_1a58:                                ; preds = %dec_label_pc_1a44, %dec_label_pc_1a24
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !505

; uselistorder directives
  uselistorder i64 %2, { 1, 2, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @memop_memcmp(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a64:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !506
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = icmp eq i64 %3, 0, !insn.addr !507
  %5 = icmp eq i64 %2, 0, !insn.addr !508
  %or.cond = or i1 %5, %4
  %6 = icmp eq i64 %1, 0, !insn.addr !509
  %or.cond3 = or i1 %6, %or.cond
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !507
  br i1 %or.cond3, label %dec_label_pc_1a9c, label %dec_label_pc_1a78, !insn.addr !507

dec_label_pc_1a78:                                ; preds = %dec_label_pc_1a64
  %7 = inttoptr i64 %3 to i64*, !insn.addr !510
  %8 = inttoptr i64 %2 to i64*, !insn.addr !510
  %9 = trunc i64 %1 to i32, !insn.addr !510
  %10 = call i32 @memcmp(i64* %7, i64* %8, i32 %9), !insn.addr !510
  %11 = icmp slt i32 %10, 1, !insn.addr !511
  %12 = icmp eq i32 %10, 0
  %13 = select i1 %12, i64 0, i64 4294967295
  %storemerge = select i1 %11, i64 %13, i64 1
  store i64 %storemerge, i64* %x0.0.reg2mem, !insn.addr !512
  br label %dec_label_pc_1a9c, !insn.addr !512

dec_label_pc_1a9c:                                ; preds = %dec_label_pc_1a78, %dec_label_pc_1a64
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !513

; uselistorder directives
  uselistorder i32 %10, { 1, 0 }
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64* %0, { 2, 1, 0 }
}

define i64 @memop_bzero() local_unnamed_addr {
dec_label_pc_1aa0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = icmp eq i64 %2, 0, !insn.addr !514
  br i1 %3, label %dec_label_pc_1ad0, label %dec_label_pc_1aa4, !insn.addr !514

dec_label_pc_1aa4:                                ; preds = %dec_label_pc_1aa0
  %4 = inttoptr i64 %2 to i64*, !insn.addr !515
  %5 = trunc i64 %1 to i32, !insn.addr !515
  %6 = call i64* @memset(i64* %4, i32 0, i32 %5), !insn.addr !515
  %7 = urem i64 %2, 256, !insn.addr !516
  ret i64 %7, !insn.addr !517

dec_label_pc_1ad0:                                ; preds = %dec_label_pc_1aa0
  ret i64 4294967295, !insn.addr !518

; uselistorder directives
  uselistorder i64 %2, { 2, 1, 0 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i32 0, { 4, 14, 15, 5, 3, 16, 6, 17, 0, 18, 1, 19, 2, 20, 21, 22, 7, 8, 9, 10, 11, 12, 13 }
}

define i64 @memop_bcopy() local_unnamed_addr {
dec_label_pc_1ad8:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !519
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = icmp eq i64 %3, 0, !insn.addr !520
  %5 = icmp eq i64 %2, 0, !insn.addr !521
  %or.cond = or i1 %5, %4
  %6 = icmp eq i64 %1, 0, !insn.addr !522
  %or.cond3 = or i1 %6, %or.cond
  store i64 4294967295, i64* %x0.0.reg2mem, !insn.addr !520
  br i1 %or.cond3, label %dec_label_pc_1b08, label %dec_label_pc_1afc, !insn.addr !520

dec_label_pc_1afc:                                ; preds = %dec_label_pc_1ad8
  %7 = inttoptr i64 %2 to i64*, !insn.addr !523
  %8 = inttoptr i64 %3 to i64*, !insn.addr !523
  %9 = trunc i64 %1 to i32, !insn.addr !523
  %10 = call i64* @memmove(i64* %7, i64* %8, i32 %9), !insn.addr !523
  %11 = urem i64 %3, 256, !insn.addr !524
  store i64 %11, i64* %x0.0.reg2mem, !insn.addr !524
  br label %dec_label_pc_1b08, !insn.addr !524

dec_label_pc_1b08:                                ; preds = %dec_label_pc_1afc, %dec_label_pc_1ad8
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !525

; uselistorder directives
  uselistorder i64 %3, { 2, 1, 0 }
  uselistorder i64* %0, { 2, 1, 0 }
  uselistorder i64* (i64*, i64*, i32)* @memmove, { 1, 0, 2 }
}

define i64 @memop_unaligned_access() local_unnamed_addr {
dec_label_pc_1b14:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %1, 0, !insn.addr !526
  br i1 %2, label %dec_label_pc_1b20, label %dec_label_pc_1b18, !insn.addr !526

dec_label_pc_1b18:                                ; preds = %dec_label_pc_1b14
  %3 = add i64 %1, 1, !insn.addr !527
  %4 = inttoptr i64 %3 to i32*, !insn.addr !527
  %5 = load i32, i32* %4, align 4, !insn.addr !527
  %6 = zext i32 %5 to i64, !insn.addr !527
  ret i64 %6, !insn.addr !528

dec_label_pc_1b20:                                ; preds = %dec_label_pc_1b14
  ret i64 4294967295, !insn.addr !529

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @memop_memory_barrier() local_unnamed_addr {
dec_label_pc_1b28:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %1, 0, !insn.addr !530
  br i1 %2, label %dec_label_pc_1b40, label %dec_label_pc_1b2c, !insn.addr !530

dec_label_pc_1b2c:                                ; preds = %dec_label_pc_1b28
  call void @__asm_dmb(i64 undef), !insn.addr !531
  %3 = mul i64 %1, 2, !insn.addr !532
  %4 = and i64 %3, 4294967294, !insn.addr !532
  ret i64 %4, !insn.addr !533

dec_label_pc_1b40:                                ; preds = %dec_label_pc_1b28
  ret i64 4294967295, !insn.addr !534

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64 4294967294, { 8, 10, 11, 0, 1, 7, 3, 2, 4, 5, 6, 9, 12 }
  uselistorder i64 2, { 0, 13, 1, 2, 15, 3, 16, 4, 17, 5, 18, 6, 19, 20, 14, 21, 7, 8, 22, 9, 23, 10, 11, 12 }
}

define i64 @test_memory_op_functions() local_unnamed_addr {
dec_label_pc_1b48:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_2285 to i8*)), !insn.addr !535
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2190, i64 0, i64 0), i64 65), !insn.addr !536
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_21a1, i64 0, i64 0), i64 50), !insn.addr !537
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_21bd, i64 0, i64 0), i8 72), !insn.addr !538
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_21ce, i64 0, i64 0), i64 4294967295), !insn.addr !539
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_21df, i64 0, i64 0), i64 0), !insn.addr !540
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_21f0, i64 0, i64 0), i64 1), !insn.addr !541
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_2201, i64 0, i64 0), i32 67305985), !insn.addr !542
  call void @__asm_dmb(i64 undef), !insn.addr !543
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2214, i64 0, i64 0)), !insn.addr !544
  %9 = sext i32 %8 to i64, !insn.addr !544
  ret i64 %9, !insn.addr !545

; uselistorder directives
  uselistorder i64 1, { 3, 6, 1, 7, 4, 8, 9, 10, 11, 2, 12, 5, 13, 14, 0 }
  uselistorder i64 50, { 2, 3, 0, 1 }
  uselistorder i32 (i8*, ...)* @printf, { 5, 4, 3, 2, 1, 14, 13, 12, 11, 10, 9, 8, 7, 6, 20, 19, 18, 17, 16, 15, 25, 24, 23, 22, 21, 31, 30, 29, 28, 27, 26, 41, 0, 40, 39, 38, 37, 36, 35, 34, 33, 32, 48, 47, 46, 45, 44, 43, 42, 49 }
  uselistorder i32 (i8*)* @puts, { 3, 2, 1, 0, 4 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1c28:
  %0 = call i64 @test_stack_memory(), !insn.addr !546
  %1 = call i64 @test_heap_memory(), !insn.addr !547
  %2 = call i64 @test_static_global(), !insn.addr !548
  %3 = call i64 @test_memory_op_functions(), !insn.addr !549
  ret i64 0, !insn.addr !550

; uselistorder directives
  uselistorder i64 0, { 30, 56, 57, 58, 59, 60, 61, 148, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 158, 159, 50, 51, 160, 161, 72, 0, 52, 53, 162, 163, 34, 54, 164, 35, 165, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 149, 87, 88, 150, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 166, 167, 31, 32, 55, 107, 108, 109, 110, 1, 111, 112, 113, 114, 115, 116, 2, 168, 117, 118, 119, 120, 3, 121, 122, 4, 123, 124, 5, 125, 126, 6, 7, 8, 169, 127, 128, 9, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 10, 180, 129, 11, 181, 12, 182, 183, 184, 13, 14, 15, 16, 185, 17, 18, 19, 20, 130, 131, 132, 133, 21, 134, 135, 22, 136, 137, 23, 138, 139, 140, 141, 142, 143, 144, 145, 24, 146, 147, 25, 26, 27, 28, 29, 186, 33, 187, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 151, 152, 153, 154, 155, 156, 157 }
}

define i64 @extern_function() local_unnamed_addr {
dec_label_pc_1c4c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 3, !insn.addr !551
  %3 = and i64 %2, 4294967295, !insn.addr !551
  ret i64 %3, !insn.addr !552

; uselistorder directives
  uselistorder i64 4294967295, { 31, 53, 20, 21, 0, 22, 32, 1, 2, 3, 33, 23, 27, 30, 24, 4, 34, 35, 29, 5, 36, 37, 6, 7, 8, 38, 9, 28, 10, 11, 39, 40, 12, 14, 41, 13, 15, 42, 16, 43, 44, 45, 17, 46, 47, 18, 19, 48, 25, 49, 50, 26, 51, 52 }
  uselistorder i64 3, { 1, 4, 2, 5, 0, 6, 7, 3 }
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_1c54:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !553

; uselistorder directives
  uselistorder i32 1, { 34, 33, 32, 31, 38, 30, 29, 122, 39, 28, 40, 27, 41, 26, 42, 25, 24, 118, 130, 23, 22, 21, 20, 19, 119, 18, 17, 16, 123, 121, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 65, 64, 63, 15, 66, 124, 68, 67, 14, 72, 71, 70, 69, 13, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 85, 12, 11, 125, 88, 87, 86, 10, 94, 93, 92, 91, 90, 89, 126, 99, 98, 97, 96, 95, 9, 127, 102, 101, 100, 8, 131, 109, 108, 107, 106, 105, 104, 103, 37, 128, 132, 111, 110, 7, 129, 120, 133, 113, 112, 6, 134, 114, 36, 5, 4, 3, 135, 116, 115, 35, 2, 1, 117, 136, 0 }
}

declare i64* @memcpy(i64*, i64*, i32) local_unnamed_addr

declare i64* @memmove(i64*, i64*, i32) local_unnamed_addr

declare void @exit(i32) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @perror(i8*) local_unnamed_addr

declare i64 @__cxa_finalize.5(i64) local_unnamed_addr

declare i32 @fork() local_unnamed_addr

declare i64* @malloc(i32) local_unnamed_addr

declare i64* @memset(i64*, i32, i32) local_unnamed_addr

declare i64* @calloc(i32, i32) local_unnamed_addr

declare i64* @realloc(i64*, i32) local_unnamed_addr

declare i64 @__gmon_start__.6(i64) local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @memcmp(i64*, i64*, i32) local_unnamed_addr

declare void @free(i64*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @waitpid(i32, i32*, i32) local_unnamed_addr

declare i64 @__asm_sbfiz(i64, i64, i64, i64) local_unnamed_addr

declare i32 @__asm_ubfx(i32, i32, i64, i64) local_unnamed_addr

declare i32 @__asm_bfi(i32, i32, i64, i64) local_unnamed_addr

declare void @__asm_dmb(i64) local_unnamed_addr

!0 = !{i64 2260}
!1 = !{i64 2268}
!2 = !{i64 2316}
!3 = !{i64 2332}
!4 = !{i64 2348}
!5 = !{i64 2364}
!6 = !{i64 2380}
!7 = !{i64 2396}
!8 = !{i64 2412}
!9 = !{i64 2428}
!10 = !{i64 2444}
!11 = !{i64 2460}
!12 = !{i64 2476}
!13 = !{i64 2492}
!14 = !{i64 2508}
!15 = !{i64 2524}
!16 = !{i64 2540}
!17 = !{i64 2556}
!18 = !{i64 2572}
!19 = !{i64 2588}
!20 = !{i64 2656}
!21 = !{i64 2668}
!22 = !{i64 2672}
!23 = !{i64 2680}
!24 = !{i64 2684}
!25 = !{i64 2688}
!26 = !{i64 2692}
!27 = !{i64 2748}
!28 = !{i64 2808}
!29 = !{i64 2816}
!30 = !{i64 2832}
!31 = !{i64 2836}
!32 = !{i64 2844}
!33 = !{i64 2848}
!34 = !{i64 2856}
!35 = !{i64 2860}
!36 = !{i64 2864}
!37 = !{i64 2872}
!38 = !{i64 2884}
!39 = !{i64 2896}
!40 = !{i64 2900}
!41 = !{i64 2904}
!42 = !{i64 2908}
!43 = !{i64 2912}
!44 = !{i64 2924}
!45 = !{i64 2928}
!46 = !{i64 2932}
!47 = !{i64 2936}
!48 = !{i64 2944}
!49 = !{i64 2948}
!50 = !{i64 2956}
!51 = !{i64 2960}
!52 = !{i64 2964}
!53 = !{i64 2980}
!54 = !{i64 2984}
!55 = !{i64 2992}
!56 = !{i64 2996}
!57 = !{i64 3000}
!58 = !{i64 3012}
!59 = !{i64 3016}
!60 = !{i64 3020}
!61 = !{i64 3028}
!62 = !{i64 3032}
!63 = !{i64 3044}
!64 = !{i64 3048}
!65 = !{i64 3052}
!66 = !{i64 3056}
!67 = !{i64 3064}
!68 = !{i64 3076}
!69 = !{i64 3080}
!70 = !{i64 3084}
!71 = !{i64 3092}
!72 = !{i64 3096}
!73 = !{i64 3100}
!74 = !{i64 3112}
!75 = !{i64 3120}
!76 = !{i64 3124}
!77 = !{i64 3128}
!78 = !{i64 3132}
!79 = !{i64 3140}
!80 = !{i64 3144}
!81 = !{i64 3156}
!82 = !{i64 3172}
!83 = !{i64 3176}
!84 = !{i64 3180}
!85 = !{i64 3192}
!86 = !{i64 3196}
!87 = !{i64 3200}
!88 = !{i64 3204}
!89 = !{i64 3208}
!90 = !{i64 3216}
!91 = !{i64 3224}
!92 = !{i64 3228}
!93 = !{i64 3232}
!94 = !{i64 3236}
!95 = !{i64 3244}
!96 = !{i64 3248}
!97 = !{i64 3260}
!98 = !{i64 3272}
!99 = !{i64 3280}
!100 = !{i64 3288}
!101 = !{i64 3292}
!102 = !{i64 3316}
!103 = !{i64 3332}
!104 = !{i64 3340}
!105 = !{i64 3344}
!106 = !{i64 3348}
!107 = !{i64 3356}
!108 = !{i64 3364}
!109 = !{i64 3372}
!110 = !{i64 3388}
!111 = !{i64 3404}
!112 = !{i64 3420}
!113 = !{i64 3428}
!114 = !{i64 3432}
!115 = !{i64 3436}
!116 = !{i64 3444}
!117 = !{i64 3452}
!118 = !{i64 3460}
!119 = !{i64 3472}
!120 = !{i64 3476}
!121 = !{i64 3480}
!122 = !{i64 3488}
!123 = !{i64 3508}
!124 = !{i64 3516}
!125 = !{i64 3520}
!126 = !{i64 3524}
!127 = !{i64 3532}
!128 = !{i64 3548}
!129 = !{i64 3564}
!130 = !{i64 3580}
!131 = !{i64 3584}
!132 = !{i64 3596}
!133 = !{i64 3600}
!134 = !{i64 3604}
!135 = !{i64 3608}
!136 = !{i64 3616}
!137 = !{i64 3620}
!138 = !{i64 3632}
!139 = !{i64 3636}
!140 = !{i64 3640}
!141 = !{i64 3648}
!142 = !{i64 3652}
!143 = !{i64 3664}
!144 = !{i64 3668}
!145 = !{i64 3672}
!146 = !{i64 3692}
!147 = !{i64 3696}
!148 = !{i64 3716}
!149 = !{i64 3720}
!150 = !{i64 3724}
!151 = !{i64 3732}
!152 = !{i64 3708}
!153 = !{i64 3748}
!154 = !{i64 3752}
!155 = !{i64 3756}
!156 = !{i64 3760}
!157 = !{i64 3780}
!158 = !{i64 3784}
!159 = !{i64 3796}
!160 = !{i64 3800}
!161 = !{i64 3816}
!162 = !{i64 3820}
!163 = !{i64 3832}
!164 = !{i64 3840}
!165 = !{i64 3848}
!166 = !{i64 3860}
!167 = !{i64 3864}
!168 = !{i64 3868}
!169 = !{i64 3880}
!170 = !{i64 3884}
!171 = !{i64 3888}
!172 = !{i64 3896}
!173 = !{i64 3900}
!174 = !{i64 3908}
!175 = !{i64 3912}
!176 = !{i64 3916}
!177 = !{i64 3948}
!178 = !{i64 3952}
!179 = !{i64 3964}
!180 = !{i64 3968}
!181 = !{i64 3980}
!182 = !{i64 3984}
!183 = !{i64 3988}
!184 = !{i64 3992}
!185 = !{i64 4000}
!186 = !{i64 4012}
!187 = !{i64 4016}
!188 = !{i64 4020}
!189 = !{i64 4024}
!190 = !{i64 4032}
!191 = !{i64 4036}
!192 = !{i64 4048}
!193 = !{i64 4052}
!194 = !{i64 4056}
!195 = !{i64 4076}
!196 = !{i64 4080}
!197 = !{i64 4084}
!198 = !{i64 4088}
!199 = !{i64 4108}
!200 = !{i64 4112}
!201 = !{i64 4116}
!202 = !{i64 4124}
!203 = !{i64 4132}
!204 = !{i64 4140}
!205 = !{i64 4152}
!206 = !{i64 4164}
!207 = !{i64 4168}
!208 = !{i64 4172}
!209 = !{i64 4184}
!210 = !{i64 4188}
!211 = !{i64 4200}
!212 = !{i64 4204}
!213 = !{i64 4244}
!214 = !{i64 4252}
!215 = !{i64 4332}
!216 = !{i64 4256}
!217 = !{i64 4260}
!218 = !{i64 4264}
!219 = !{i64 4268}
!220 = !{i64 4272}
!221 = !{i64 4276}
!222 = !{i64 4324}
!223 = !{i64 4328}
!224 = !{i64 4292}
!225 = !{i64 4300}
!226 = !{i64 4304}
!227 = !{i64 4312}
!228 = !{i64 4320}
!229 = !{i64 4340}
!230 = !{i64 4360}
!231 = !{i64 4376}
!232 = !{i64 4384}
!233 = !{i64 4388}
!234 = !{i64 4392}
!235 = !{i64 4396}
!236 = !{i64 4408}
!237 = !{i64 4412}
!238 = !{i64 4420}
!239 = !{i64 4444}
!240 = !{i64 4468}
!241 = !{i64 4472}
!242 = !{i64 4476}
!243 = !{i64 4480}
!244 = !{i64 4492}
!245 = !{i64 4496}
!246 = !{i64 4516}
!247 = !{i64 4520}
!248 = !{i64 4532}
!249 = !{i64 4536}
!250 = !{i64 4544}
!251 = !{i64 4552}
!252 = !{i64 4560}
!253 = !{i64 4564}
!254 = !{i64 4572}
!255 = !{i64 4576}
!256 = !{i64 4584}
!257 = !{i64 4592}
!258 = !{i64 4596}
!259 = !{i64 4600}
!260 = !{i64 4604}
!261 = !{i64 4612}
!262 = !{i64 4620}
!263 = !{i64 4624}
!264 = !{i64 4628}
!265 = !{i64 4632}
!266 = !{i64 4636}
!267 = !{i64 4640}
!268 = !{i64 4644}
!269 = !{i64 4656}
!270 = !{i64 4664}
!271 = !{i64 4680}
!272 = !{i64 4688}
!273 = !{i64 4692}
!274 = !{i64 4708}
!275 = !{i64 4712}
!276 = !{i64 4724}
!277 = !{i64 4728}
!278 = !{i64 4732}
!279 = !{i64 4736}
!280 = !{i64 4744}
!281 = !{i64 4756}
!282 = !{i64 4760}
!283 = !{i64 4768}
!284 = !{i64 4772}
!285 = !{i64 4784}
!286 = !{i64 4788}
!287 = !{i64 4804}
!288 = !{i64 4808}
!289 = !{i64 4824}
!290 = !{i64 4828}
!291 = !{i64 4844}
!292 = !{i64 4856}
!293 = !{i64 4864}
!294 = !{i64 4868}
!295 = !{i64 4872}
!296 = !{i64 4888}
!297 = !{i64 4892}
!298 = !{i64 4896}
!299 = !{i64 4900}
!300 = !{i64 4908}
!301 = !{i64 4912}
!302 = !{i64 4928}
!303 = !{i64 4932}
!304 = !{i64 4944}
!305 = !{i64 4948}
!306 = !{i64 4952}
!307 = !{i64 4960}
!308 = !{i64 4964}
!309 = !{i64 4968}
!310 = !{i64 4972}
!311 = !{i64 4992}
!312 = !{i64 4996}
!313 = !{i64 5020}
!314 = !{i64 5028}
!315 = !{i64 5032}
!316 = !{i64 5044}
!317 = !{i64 5048}
!318 = !{i64 5056}
!319 = !{i64 5060}
!320 = !{i64 5064}
!321 = !{i64 5068}
!322 = !{i64 5088}
!323 = !{i64 5100}
!324 = !{i64 5104}
!325 = !{i64 5116}
!326 = !{i64 5120}
!327 = !{i64 5128}
!328 = !{i64 5132}
!329 = !{i64 5136}
!330 = !{i64 5140}
!331 = !{i64 5160}
!332 = !{i64 5168}
!333 = !{i64 5172}
!334 = !{i64 5184}
!335 = !{i64 5192}
!336 = !{i64 5200}
!337 = !{i64 5212}
!338 = !{i64 5216}
!339 = !{i64 5220}
!340 = !{i64 5232}
!341 = !{i64 5236}
!342 = !{i64 5240}
!343 = !{i64 5248}
!344 = !{i64 5252}
!345 = !{i64 5260}
!346 = !{i64 5264}
!347 = !{i64 5268}
!348 = !{i64 5300}
!349 = !{i64 5308}
!350 = !{i64 5316}
!351 = !{i64 5324}
!352 = !{i64 5328}
!353 = !{i64 5340}
!354 = !{i64 5344}
!355 = !{i64 5352}
!356 = !{i64 5356}
!357 = !{i64 5360}
!358 = !{i64 5364}
!359 = !{i64 5384}
!360 = !{i64 5400}
!361 = !{i64 5408}
!362 = !{i64 5416}
!363 = !{i64 5428}
!364 = !{i64 5432}
!365 = !{i64 5436}
!366 = !{i64 5440}
!367 = !{i64 5452}
!368 = !{i64 5456}
!369 = !{i64 5460}
!370 = !{i64 5476}
!371 = !{i64 5480}
!372 = !{i64 5492}
!373 = !{i64 5500}
!374 = !{i64 5504}
!375 = !{i64 5512}
!376 = !{i64 5516}
!377 = !{i64 5520}
!378 = !{i64 5532}
!379 = !{i64 5536}
!380 = !{i64 5540}
!381 = !{i64 5552}
!382 = !{i64 5560}
!383 = !{i64 5564}
!384 = !{i64 5572}
!385 = !{i64 5576}
!386 = !{i64 5584}
!387 = !{i64 5588}
!388 = !{i64 5592}
!389 = !{i64 5608}
!390 = !{i64 5620}
!391 = !{i64 5624}
!392 = !{i64 5628}
!393 = !{i64 5636}
!394 = !{i64 5648}
!395 = !{i64 5652}
!396 = !{i64 5656}
!397 = !{i64 5660}
!398 = !{i64 5700}
!399 = !{i64 5704}
!400 = !{i64 5708}
!401 = !{i64 5724}
!402 = !{i64 5736}
!403 = !{i64 5740}
!404 = !{i64 5744}
!405 = !{i64 5760}
!406 = !{i64 5768}
!407 = !{i64 5784}
!408 = !{i64 5788}
!409 = !{i64 5796}
!410 = !{i64 5800}
!411 = !{i64 5804}
!412 = !{i64 5808}
!413 = !{i64 5812}
!414 = !{i64 5820}
!415 = !{i64 5832}
!416 = !{i64 5836}
!417 = !{i64 5844}
!418 = !{i64 5856}
!419 = !{i64 5860}
!420 = !{i64 5868}
!421 = !{i64 5872}
!422 = !{i64 5876}
!423 = !{i64 5884}
!424 = !{i64 5888}
!425 = !{i64 5892}
!426 = !{i64 5896}
!427 = !{i64 5912}
!428 = !{i64 5920}
!429 = !{i64 5932}
!430 = !{i64 5936}
!431 = !{i64 5940}
!432 = !{i64 5948}
!433 = !{i64 5956}
!434 = !{i64 5964}
!435 = !{i64 5972}
!436 = !{i64 5976}
!437 = !{i64 5984}
!438 = !{i64 5988}
!439 = !{i64 6000}
!440 = !{i64 6016}
!441 = !{i64 6020}
!442 = !{i64 6024}
!443 = !{i64 6056}
!444 = !{i64 6060}
!445 = !{i64 6064}
!446 = !{i64 6072}
!447 = !{i64 6080}
!448 = !{i64 6084}
!449 = !{i64 6088}
!450 = !{i64 6096}
!451 = !{i64 6124}
!452 = !{i64 6148}
!453 = !{i64 6152}
!454 = !{i64 6156}
!455 = !{i64 6168}
!456 = !{i64 6172}
!457 = !{i64 6188}
!458 = !{i64 6216}
!459 = !{i64 6220}
!460 = !{i64 6236}
!461 = !{i64 6240}
!462 = !{i64 6256}
!463 = !{i64 6284}
!464 = !{i64 6292}
!465 = !{i64 6296}
!466 = !{i64 6308}
!467 = !{i64 6336}
!468 = !{i64 6352}
!469 = !{i64 6368}
!470 = !{i64 6384}
!471 = !{i64 6408}
!472 = !{i64 6412}
!473 = !{i64 6440}
!474 = !{i64 6444}
!475 = !{i64 6472}
!476 = !{i64 6476}
!477 = !{i64 6480}
!478 = !{i64 6496}
!479 = !{i64 6512}
!480 = !{i64 6528}
!481 = !{i64 6544}
!482 = !{i64 6548}
!483 = !{i64 6552}
!484 = !{i64 6556}
!485 = !{i64 6576}
!486 = !{i64 6584}
!487 = !{i64 6592}
!488 = !{i64 6600}
!489 = !{i64 6604}
!490 = !{i64 6616}
!491 = !{i64 6620}
!492 = !{i64 6640}
!493 = !{i64 6644}
!494 = !{i64 6652}
!495 = !{i64 6664}
!496 = !{i64 6672}
!497 = !{i64 6676}
!498 = !{i64 6688}
!499 = !{i64 6692}
!500 = !{i64 6712}
!501 = !{i64 6716}
!502 = !{i64 6724}
!503 = !{i64 6736}
!504 = !{i64 6740}
!505 = !{i64 6752}
!506 = !{i64 6756}
!507 = !{i64 6764}
!508 = !{i64 6768}
!509 = !{i64 6772}
!510 = !{i64 6788}
!511 = !{i64 6804}
!512 = !{i64 6808}
!513 = !{i64 6812}
!514 = !{i64 6816}
!515 = !{i64 6844}
!516 = !{i64 6848}
!517 = !{i64 6860}
!518 = !{i64 6868}
!519 = !{i64 6872}
!520 = !{i64 6896}
!521 = !{i64 6900}
!522 = !{i64 6904}
!523 = !{i64 6912}
!524 = !{i64 6916}
!525 = !{i64 6928}
!526 = !{i64 6932}
!527 = !{i64 6936}
!528 = !{i64 6940}
!529 = !{i64 6948}
!530 = !{i64 6952}
!531 = !{i64 6960}
!532 = !{i64 6968}
!533 = !{i64 6972}
!534 = !{i64 6980}
!535 = !{i64 7004}
!536 = !{i64 7020}
!537 = !{i64 7036}
!538 = !{i64 7088}
!539 = !{i64 7104}
!540 = !{i64 7120}
!541 = !{i64 7136}
!542 = !{i64 7156}
!543 = !{i64 7180}
!544 = !{i64 7192}
!545 = !{i64 7204}
!546 = !{i64 7216}
!547 = !{i64 7220}
!548 = !{i64 7224}
!549 = !{i64 7228}
!550 = !{i64 7240}
!551 = !{i64 7244}
!552 = !{i64 7248}
!553 = !{i64 7268}
