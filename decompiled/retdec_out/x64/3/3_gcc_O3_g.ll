source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_6028 = global i64 0
@global_var_818 = local_unnamed_addr global i64 0
@global_var_3022 = constant [28 x i8] c"MEM-L1-01 (local_vars): %d\0A\00"
@global_var_303e = constant [29 x i8] c"MEM-L1-02 (local_array): %d\0A\00"
@global_var_305b = constant [30 x i8] c"MEM-L1-03 (local_struct): %d\0A\00"
@global_var_32c0 = constant [34 x i8] c"MEM-L1-04 (address_of_local): %d\0A\00"
@global_var_32e8 = constant [34 x i8] c"MEM-L1-05 (address_of_array): %d\0A\00"
@global_var_3310 = constant [35 x i8] c"MEM-L2-01 (large_stack_frame): %d\0A\00"
@global_var_3079 = constant [27 x i8] c"MEM-L2-02 (vla_stack): %d\0A\00"
@global_var_3094 = constant [30 x i8] c"MEM-L2-03 (alloca_usage): %d\0A\00"
@global_var_30b2 = constant [29 x i8] c"MEM-L2-04 (stack_alias): %d\0A\00"
@global_var_3780 = local_unnamed_addr constant i64 8589934593
@global_var_30cf = constant [23 x i8] c"value before free: %d\0A\00"
@global_var_37c0 = local_unnamed_addr constant i64 77309411344
@global_var_3104 = constant [29 x i8] c"HEAP-L2-01 (heap_basic): %d\0A\00"
@global_var_3121 = constant [30 x i8] c"HEAP-L2-02 (heap_calloc): %d\0A\00"
@global_var_3338 = constant [31 x i8] c"HEAP-L2-03 (heap_realloc): %d\0A\00"
@global_var_37c8 = local_unnamed_addr constant i64 115964117016
@global_var_313f = constant [29 x i8] c"HEAP-L2-04 (heap_array): %d\0A\00"
@global_var_315c = constant [30 x i8] c"HEAP-L2-05 (heap_struct): %d\0A\00"
@global_var_31b3 = constant [30 x i8] c"HEAP-L2-06 (heap_nested): %d\0A\00"
@global_var_3358 = constant [35 x i8] c"HEAP-L3-01 (linked_list_heap): %d\0A\00"
@global_var_3380 = constant [38 x i8] c"HEAP-L3-02 (tree_heap_traversal): %d\0A\00"
@global_var_317a = constant [30 x i8] c"HEAP-L3-03 (memory_leak): %d\0A\00"
@global_var_33a8 = constant [32 x i8] c"HEAP-L3-04 (dangling_pointer): \00"
@global_counter = local_unnamed_addr global i32 0
@global_array = constant [10 x i32] [i32 0, i32 1, i32 2, i32 3, i32 4, i32 5, i32 6, i32 7, i32 8, i32 9]
@global_var_6030 = local_unnamed_addr global i64 0
@extern_global_var = local_unnamed_addr global i32 23
@0 = internal constant [3 x i8] c"\B22\00"
@const_string = local_unnamed_addr global i8* getelementptr inbounds ([3 x i8], [3 x i8]* @0, i64 0, i64 0)
@global_var_601c = local_unnamed_addr global i64 98784247808
@file_scope_static = local_unnamed_addr global i32 100
@global_func_ptr = local_unnamed_addr global i32 (i32)* null
@global_var_31d1 = constant [30 x i8] c"STM-L1-03 (static_local): %d\0A\00"
@global_var_3460 = constant [35 x i8] c"STM-L1-01 (global_var_access): %d\0A\00"
@global_var_3488 = constant [33 x i8] c"STM-L1-01 (global_var_read): %d\0A\00"
@global_var_34b0 = constant [37 x i8] c"STM-L1-02 (global_array_access): %d\0A\00"
@global_var_34d8 = constant [34 x i8] c"STM-L1-04 (call_static_func): %d\0A\00"
@global_var_3500 = constant [38 x i8] c"STM-L2-01 (access_extern_global): %d\0A\00"
@global_var_3528 = constant [34 x i8] c"STM-L2-02 (call_extern_func): %d\0A\00"
@global_var_3550 = constant [33 x i8] c"STM-L2-03 (read_const_data): %d\0A\00"
@global_var_3578 = constant [32 x i8] c"STM-L2-04 (access_bss_var): %d\0A\00"
@global_var_3598 = constant [35 x i8] c"STM-L2-04 (access_bss_buffer): %d\0A\00"
@global_var_35c0 = constant [38 x i8] c"STM-L2-05 (global_struct_access): %d\0A\00"
@global_var_31ef = constant [29 x i8] c"STM-L2-06 (file_static): %d\0A\00"
@global_var_35e8 = constant [33 x i8] c"STM-L2-07 (global_func_ptr): %d\0A\00"
@global_var_3610 = constant [35 x i8] c"STM-L2-08 (global_heap_store): %d\0A\00"
@global_var_3638 = constant [37 x i8] c"STM-L2-09 (static_complex_init): %d\0A\00"
@global_var_320c = constant [28 x i8] c"STM-L3-01 (tls_access): %d\0A\00"
@global_var_3660 = constant [33 x i8] c"STM-L3-02 (init_order_test): %d\0A\00"
@global_var_3228 = constant [17 x i8] c"MEMOP-L2-01: %d\0A\00"
@global_var_3239 = constant [17 x i8] c"MEMOP-L2-02: %d\0A\00"
@global_var_324a = constant [17 x i8] c"MEMOP-L2-03: %c\0A\00"
@global_var_325b = constant [17 x i8] c"MEMOP-L2-04: %d\0A\00"
@global_var_326c = constant [17 x i8] c"MEMOP-L2-05: %d\0A\00"
@global_var_327d = constant [17 x i8] c"MEMOP-L2-06: %d\0A\00"
@global_var_328e = constant [19 x i8] c"MEMOP-L3-01: 0x%x\0A\00"
@global_var_32a1 = constant [17 x i8] c"MEMOP-L3-02: %d\0A\00"
@1 = external global i32
@global_var_3710 = external local_unnamed_addr constant i128
@global_var_3720 = external local_unnamed_addr constant i128
@global_var_3730 = external local_unnamed_addr constant i128
@global_var_3750 = external local_unnamed_addr constant i128
@global_var_3740 = external local_unnamed_addr constant i128
@global_var_3760 = external local_unnamed_addr constant i128
@global_var_3770 = external local_unnamed_addr constant i128
@global_var_3e7 = global i32 0
@2 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\88\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_3004 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @2, i64 0, i64 0)
@global_var_3790 = external local_unnamed_addr constant i128
@3 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\A0\86\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_30e6 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @3, i64 0, i64 0)
@global_var_37a0 = external local_unnamed_addr constant i128
@global_var_37b0 = external local_unnamed_addr constant i128
@4 = internal constant [11 x i8] c"fork\E5\A4\B1\E8\B4\A5\00"
@global_var_31a8 = constant i8* getelementptr inbounds ([11 x i8], [11 x i8]* @4, i64 0, i64 0)
@5 = internal constant [16 x i8] c"%d (\E5\AD\90\E8\BF\9B\E7\A8\8B)\0A\00"
@global_var_3198 = constant i8* getelementptr inbounds ([16 x i8], [16 x i8]* @5, i64 0, i64 0)
@6 = internal constant [65 x i8] c"\E2\9C\97 \E5\AD\90\E8\BF\9B\E7\A8\8B\E8\A2\AB\E4\BF\A1\E5\8F\B7\E7\BB\88\E6\AD\A2 (\E4\BF\A1\E5\8F\B7%d) - \E9\87\8E\E6\8C\87\E9\92\88\E5\AF\BC\E8\87\B4\E5\B4\A9\E6\BA\83\0A\00"
@global_var_33f0 = constant i8* getelementptr inbounds ([65 x i8], [65 x i8]* @6, i64 0, i64 0)
@7 = internal constant [37 x i8] c"\E2\9C\93 \E5\AD\90\E8\BF\9B\E7\A8\8B\E6\AD\A3\E5\B8\B8\E9\80\80\E5\87\BA\EF\BC\8Ccode=%d\0A\00"
@global_var_33c8 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @7, i64 0, i64 0)
@global_var_6031 = global i32 0
@global_var_6046 = external global i32
@8 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\9D\99\E6\80\81\E4\B8\8E\E5\85\A8\E5\B1\80\E5\86\85\E5\AD\98 ===\00"
@global_var_3438 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @8, i64 0, i64 0)
@9 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C\E5\87\BD\E6\95\B0 ===\00"
@global_var_3688 = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @9, i64 0, i64 0)

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

define void @function_1120(i64* %d) local_unnamed_addr {
dec_label_pc_1120:
  call void @__cxa_finalize(i64* %d), !insn.addr !6
  ret void, !insn.addr !6
}

define void @function_1130(i64* %ptr) local_unnamed_addr {
dec_label_pc_1130:
  call void @free(i64* %ptr), !insn.addr !7
  ret void, !insn.addr !7
}

define i32 @function_1140(i8* %s) local_unnamed_addr {
dec_label_pc_1140:
  %0 = call i32 @puts(i8* %s), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define void @function_1150() local_unnamed_addr {
dec_label_pc_1150:
  call void @__stack_chk_fail(), !insn.addr !9
  ret void, !insn.addr !9
}

define i64* @function_1160(i64* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_1160:
  %0 = call i64* @memset(i64* %s, i32 %c, i32 %n), !insn.addr !10
  ret i64* %0, !insn.addr !10
}

define i32 @function_1170(i64* %s1, i64* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_1170:
  %0 = call i32 @memcmp(i64* %s1, i64* %s2, i32 %n), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i64* @function_1180(i32 %nmemb, i32 %size) local_unnamed_addr {
dec_label_pc_1180:
  %0 = call i64* @calloc(i32 %nmemb, i32 %size), !insn.addr !12
  ret i64* %0, !insn.addr !12
}

define i64* @function_1190(i64* %dest, i64* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1190:
  %0 = call i64* @memcpy(i64* %dest, i64* %src, i32 %n), !insn.addr !13
  ret i64* %0, !insn.addr !13
}

define i64* @function_11a0(i32 %size) local_unnamed_addr {
dec_label_pc_11a0:
  %0 = call i64* @malloc(i32 %size), !insn.addr !14
  ret i64* %0, !insn.addr !14
}

define i64* @function_11b0(i64* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_11b0:
  %0 = call i64* @realloc(i64* %ptr, i32 %size), !insn.addr !15
  ret i64* %0, !insn.addr !15
}

define i32 @function_11c0(i32 %flag, i8* %format, ...) local_unnamed_addr {
dec_label_pc_11c0:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 %flag, i8* %format), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i64* @function_11d0(i64* %dest, i64* %src, i32 %n) local_unnamed_addr {
dec_label_pc_11d0:
  %0 = call i64* @memmove(i64* %dest, i64* %src, i32 %n), !insn.addr !17
  ret i64* %0, !insn.addr !17
}

define i32 @function_11e0(i32 %pid, i32* %stat_loc, i32 %options) local_unnamed_addr {
dec_label_pc_11e0:
  %0 = call i32 @waitpid(i32 %pid, i32* %stat_loc, i32 %options), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define void @function_11f0(i8* %s) local_unnamed_addr {
dec_label_pc_11f0:
  call void @perror(i8* %s), !insn.addr !19
  ret void, !insn.addr !19
}

define void @function_1200(i32 %status) local_unnamed_addr {
dec_label_pc_1200:
  call void @exit(i32 %status), !insn.addr !20
  ret void, !insn.addr !20
}

define i32 @function_1210() local_unnamed_addr {
dec_label_pc_1210:
  %0 = call i32 @fork(), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define i32 @main() local_unnamed_addr {
dec_label_pc_1220:
  call void @test_stack_memory(), !insn.addr !22
  call void @test_heap_memory(), !insn.addr !23
  call void @test_static_global(), !insn.addr !24
  call void @test_memory_op_functions(), !insn.addr !25
  ret i32 xor (i32 ptrtoint (i32* @1 to i32), i32 ptrtoint (i32* @1 to i32)), !insn.addr !26
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1250:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !27
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !27
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !27
  %3 = call i32 @__libc_start_main(i64 4640, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !27
  %4 = call i64 @__asm_hlt(), !insn.addr !28
  unreachable, !insn.addr !28
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1280:
  ret i64 ptrtoint (i64* @global_var_6028 to i64), !insn.addr !29
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_12b0:
  ret i64 0, !insn.addr !30
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_12f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* bitcast (i64* @global_var_6028 to i8*), align 8, !insn.addr !31
  %3 = icmp eq i8 %2, 0, !insn.addr !31
  %4 = icmp eq i1 %3, false, !insn.addr !32
  br i1 %4, label %dec_label_pc_1328, label %dec_label_pc_12fd, !insn.addr !32

dec_label_pc_12fd:                                ; preds = %dec_label_pc_12f0
  %5 = load i64, i64* inttoptr (i64 24568 to i64*), align 8, !insn.addr !33
  %6 = icmp eq i64 %5, 0, !insn.addr !33
  br i1 %6, label %dec_label_pc_1317, label %dec_label_pc_130b, !insn.addr !34

dec_label_pc_130b:                                ; preds = %dec_label_pc_12fd
  %7 = load i64, i64* inttoptr (i64 24584 to i64*), align 8, !insn.addr !35
  %8 = inttoptr i64 %7 to i64*, !insn.addr !36
  call void @__cxa_finalize(i64* %8), !insn.addr !36
  br label %dec_label_pc_1317, !insn.addr !36

dec_label_pc_1317:                                ; preds = %dec_label_pc_130b, %dec_label_pc_12fd
  %9 = call i64 @deregister_tm_clones(), !insn.addr !37
  store i8 1, i8* bitcast (i64* @global_var_6028 to i8*), align 8, !insn.addr !38
  ret i64 %9, !insn.addr !39

dec_label_pc_1328:                                ; preds = %dec_label_pc_12f0
  ret i64 %1, !insn.addr !40
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1330:
  %0 = call i64 @register_tm_clones(), !insn.addr !41
  ret i64 %0, !insn.addr !41
}

define i64 @double_value(i64 %arg1) local_unnamed_addr {
dec_label_pc_1340:
  %0 = mul i64 %arg1, 2, !insn.addr !42
  %1 = and i64 %0, 4294967294, !insn.addr !42
  ret i64 %1, !insn.addr !43
}

define i64 @alloca_usage.constprop.0() local_unnamed_addr {
dec_label_pc_1350:
  ret i64 15, !insn.addr !44
}

define i64 @local_vars(i64 %arg1) local_unnamed_addr {
dec_label_pc_1360:
  %factor = mul i64 %arg1, 2
  %0 = add i64 %factor, 10, !insn.addr !45
  %1 = and i64 %0, 4294967294, !insn.addr !45
  ret i64 %1, !insn.addr !46
}

define i64 @local_array(i64 %arg1) local_unnamed_addr {
dec_label_pc_1370:
  %0 = load i128, i128* @global_var_3710, align 8, !insn.addr !47
  %1 = call i128 @__asm_movdqa(i128 %0), !insn.addr !47
  %2 = trunc i64 %arg1 to i32, !insn.addr !48
  %3 = call i128 @__asm_movd.1(i32 %2), !insn.addr !48
  %4 = call i128 @__asm_pshufd(i128 %3, i8 0), !insn.addr !49
  %5 = call i128 @__asm_psrlq(i128 %1, i8 32), !insn.addr !50
  %6 = call i128 @__asm_psrlq(i128 %4, i8 32), !insn.addr !51
  %7 = call i128 @__asm_pmuludq(i128 %6, i128 %5), !insn.addr !52
  %8 = call i32 @__asm_movd(i128 %7), !insn.addr !53
  %9 = sext i32 %8 to i64, !insn.addr !53
  ret i64 %9, !insn.addr !54
}

define i64 @local_struct(i64 %arg1) local_unnamed_addr {
dec_label_pc_13a0:
  %0 = mul i64 %arg1, 3, !insn.addr !55
  %1 = and i64 %0, 4294967295, !insn.addr !55
  ret i64 %1, !insn.addr !56
}

define i64 @address_of_local(i64 %arg1) local_unnamed_addr {
dec_label_pc_13b0:
  %0 = inttoptr i64 %arg1 to i32*, !insn.addr !57
  store i32 42, i32* %0, align 4, !insn.addr !57
  ret i64 42, !insn.addr !58
}

define i64 @address_of_array() local_unnamed_addr {
dec_label_pc_13c0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !59
  %3 = and i64 %2, 4294967294, !insn.addr !59
  ret i64 %3, !insn.addr !60
}

define i32 @large_stack_frame() local_unnamed_addr {
dec_label_pc_13d0:
  %0 = alloca i32
  %rax.0.reg2mem = alloca i64, !insn.addr !61
  %xmm3.0.reg2mem = alloca i128, !insn.addr !61
  %1 = load i32, i32* %0
  %stack_var_-24 = alloca i64, align 8
  %stack_var_-2072 = alloca i64, align 8
  %2 = load i128, i128* @global_var_3720, align 8, !insn.addr !62
  %3 = call i128 @__asm_movdqa(i128 %2), !insn.addr !62
  %4 = load i128, i128* @global_var_3730, align 8, !insn.addr !63
  %5 = call i128 @__asm_movdqa(i128 %4), !insn.addr !63
  %6 = call i64 @__readfsqword(i64 40), !insn.addr !64
  %7 = ptrtoint i64* %stack_var_-2072 to i64, !insn.addr !65
  %8 = load i128, i128* @global_var_3750, align 8, !insn.addr !66
  %9 = call i128 @__asm_movdqa(i128 %8), !insn.addr !66
  %10 = load i128, i128* @global_var_3740, align 8, !insn.addr !67
  %11 = call i128 @__asm_movdqa(i128 %10), !insn.addr !67
  %12 = ptrtoint i64* %stack_var_-24 to i64, !insn.addr !68
  %13 = load i128, i128* @global_var_3760, align 8, !insn.addr !69
  %14 = call i128 @__asm_movdqa(i128 %13), !insn.addr !69
  %15 = load i128, i128* @global_var_3770, align 8, !insn.addr !70
  %16 = call i128 @__asm_movdqa(i128 %15), !insn.addr !70
  store i128 %3, i128* %xmm3.0.reg2mem, !insn.addr !71
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !71
  br label %dec_label_pc_1430, !insn.addr !71

dec_label_pc_1430:                                ; preds = %dec_label_pc_1430, %dec_label_pc_13d0
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %xmm3.0.reload = load i128, i128* %xmm3.0.reg2mem
  %17 = call i128 @__asm_movdqa(i128 %xmm3.0.reload), !insn.addr !72
  %18 = add i64 %rax.0.reload, 16, !insn.addr !73
  %19 = call i128 @__asm_paddd(i128 %xmm3.0.reload, i128 %5), !insn.addr !74
  %20 = call i128 @__asm_movdqa(i128 %17), !insn.addr !75
  %21 = call i128 @__asm_movdqa(i128 %17), !insn.addr !76
  %22 = call i128 @__asm_movdqa(i128 %17), !insn.addr !77
  %23 = call i128 @__asm_paddd(i128 %20, i128 %11), !insn.addr !78
  %24 = call i128 @__asm_punpcklwd(i128 %21, i128 %23), !insn.addr !79
  %25 = call i128 @__asm_punpckhwd(i128 %22, i128 %23), !insn.addr !80
  %26 = call i128 @__asm_movdqa(i128 %24), !insn.addr !81
  %27 = call i128 @__asm_punpcklwd(i128 %24, i128 %25), !insn.addr !82
  %28 = call i128 @__asm_punpckhwd(i128 %26, i128 %25), !insn.addr !83
  %29 = call i128 @__asm_movdqa(i128 %17), !insn.addr !84
  %30 = call i128 @__asm_paddd(i128 %17, i128 %14), !insn.addr !85
  %31 = call i128 @__asm_paddd(i128 %29, i128 %9), !insn.addr !86
  %32 = call i128 @__asm_punpcklwd(i128 %27, i128 %28), !insn.addr !87
  %33 = call i128 @__asm_movdqa(i128 %31), !insn.addr !88
  %34 = call i128 @__asm_punpcklwd(i128 %31, i128 %30), !insn.addr !89
  %35 = call i128 @__asm_pand(i128 %32, i128 %16), !insn.addr !90
  %36 = call i128 @__asm_punpckhwd(i128 %33, i128 %30), !insn.addr !91
  %37 = call i128 @__asm_movdqa(i128 %34), !insn.addr !92
  %38 = call i128 @__asm_punpckhwd(i128 %37, i128 %36), !insn.addr !93
  %39 = call i128 @__asm_punpcklwd(i128 %34, i128 %36), !insn.addr !94
  %40 = call i128 @__asm_punpcklwd(i128 %39, i128 %38), !insn.addr !95
  %41 = call i128 @__asm_pand(i128 %40, i128 %16), !insn.addr !96
  %42 = call i128 @__asm_packuswb(i128 %35, i128 %41), !insn.addr !97
  %43 = call i64 @__asm_movaps(i128 %42), !insn.addr !98
  %44 = sext i64 %43 to i128, !insn.addr !98
  %45 = inttoptr i64 %rax.0.reload to i128*, !insn.addr !98
  store i128 %44, i128* %45, align 8, !insn.addr !98
  %46 = icmp eq i64 %18, %12, !insn.addr !99
  %47 = icmp eq i1 %46, false, !insn.addr !100
  store i128 %19, i128* %xmm3.0.reg2mem, !insn.addr !100
  store i64 %18, i64* %rax.0.reg2mem, !insn.addr !100
  br i1 %47, label %dec_label_pc_1430, label %dec_label_pc_14a3, !insn.addr !100

dec_label_pc_14a3:                                ; preds = %dec_label_pc_1430
  %48 = call i64 @__readfsqword(i64 40), !insn.addr !101
  %49 = icmp eq i64 %6, %48, !insn.addr !101
  %50 = icmp eq i1 %49, false, !insn.addr !102
  br i1 %50, label %dec_label_pc_14c6, label %dec_label_pc_14be, !insn.addr !102

dec_label_pc_14be:                                ; preds = %dec_label_pc_14a3
  %51 = zext i32 %1 to i64, !insn.addr !103
  %sext = mul i64 %51, 72057594037927936
  %52 = ashr exact i64 %sext, 56, !insn.addr !103
  %53 = trunc i64 %52 to i32, !insn.addr !104
  ret i32 %53, !insn.addr !104

dec_label_pc_14c6:                                ; preds = %dec_label_pc_14a3
  call void @__stack_chk_fail(), !insn.addr !105
  ret i32 ptrtoint (i32* @1 to i32), !insn.addr !106

; uselistorder directives
  uselistorder i128 %36, { 1, 0 }
  uselistorder i128 %34, { 1, 0 }
  uselistorder i128 %31, { 1, 0 }
  uselistorder i128 %30, { 1, 0 }
  uselistorder i128 %25, { 1, 0 }
  uselistorder i128 %24, { 1, 0 }
  uselistorder i128 %23, { 1, 0 }
  uselistorder i128 %17, { 3, 4, 2, 1, 0 }
  uselistorder i128* %xmm3.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
}

define i64 @vla_stack(i64 %arg1) local_unnamed_addr {
dec_label_pc_14d0:
  %storemerge.reg2mem = alloca i64, !insn.addr !107
  %rax.1.reg2mem = alloca i64, !insn.addr !107
  %rax.0.reg2mem = alloca i64, !insn.addr !107
  %xmm1.0.reg2mem = alloca i128, !insn.addr !107
  %rsp.1.reg2mem = alloca i64, !insn.addr !107
  %rsp.0.reg2mem = alloca i64, !insn.addr !107
  %stack_var_-24 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !108
  %1 = trunc i64 %arg1 to i32
  %2 = add i32 %1, -1, !insn.addr !109
  %3 = icmp ugt i32 %2, ptrtoint (i32* @global_var_3e7 to i32)
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !110
  br i1 %3, label %dec_label_pc_15ce, label %dec_label_pc_14fc, !insn.addr !110

dec_label_pc_14fc:                                ; preds = %dec_label_pc_14d0
  %4 = ptrtoint i64* %stack_var_-24 to i64, !insn.addr !111
  %sext = mul i64 %arg1, 4294967296
  %5 = ashr exact i64 %sext, 30, !insn.addr !112
  %6 = add nsw i64 %5, 15, !insn.addr !112
  %7 = and i64 %6, -4096, !insn.addr !113
  %8 = sub i64 %4, %7, !insn.addr !114
  %9 = icmp eq i64 %7, 0, !insn.addr !115
  store i64 %4, i64* %rsp.0.reg2mem, !insn.addr !116
  store i64 %4, i64* %rsp.1.reg2mem, !insn.addr !116
  br i1 %9, label %dec_label_pc_1534, label %dec_label_pc_151f, !insn.addr !116

dec_label_pc_151f:                                ; preds = %dec_label_pc_14fc, %dec_label_pc_151f
  %rsp.0.reload = load i64, i64* %rsp.0.reg2mem
  %10 = add i64 %rsp.0.reload, -4096, !insn.addr !117
  %11 = icmp eq i64 %10, %8, !insn.addr !118
  %12 = icmp eq i1 %11, false, !insn.addr !119
  store i64 %10, i64* %rsp.0.reg2mem, !insn.addr !119
  store i64 %10, i64* %rsp.1.reg2mem, !insn.addr !119
  br i1 %12, label %dec_label_pc_151f, label %dec_label_pc_1534, !insn.addr !119

dec_label_pc_1534:                                ; preds = %dec_label_pc_151f, %dec_label_pc_14fc
  %13 = and i64 %arg1, 4294967295, !insn.addr !120
  %rsp.1.reload = load i64, i64* %rsp.1.reg2mem
  %14 = and i64 %6, 4080, !insn.addr !121
  %15 = sub i64 %rsp.1.reload, %14, !insn.addr !122
  %16 = icmp ult i32 %2, 3
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !123
  br i1 %16, label %dec_label_pc_159c, label %dec_label_pc_1552, !insn.addr !123

dec_label_pc_1552:                                ; preds = %dec_label_pc_1534
  %17 = load i128, i128* @global_var_3720, align 8, !insn.addr !124
  %18 = call i128 @__asm_movdqa(i128 %17), !insn.addr !124
  %19 = load i128, i128* @global_var_3740, align 8, !insn.addr !125
  %20 = call i128 @__asm_movdqa(i128 %19), !insn.addr !125
  %21 = mul i64 %13, 4
  %22 = and i64 %21, 17179869168, !insn.addr !126
  %23 = add i64 %15, %22, !insn.addr !127
  store i128 %18, i128* %xmm1.0.reg2mem, !insn.addr !128
  store i64 %15, i64* %rax.0.reg2mem, !insn.addr !128
  br label %dec_label_pc_1578, !insn.addr !128

dec_label_pc_1578:                                ; preds = %dec_label_pc_1578, %dec_label_pc_1552
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %xmm1.0.reload = load i128, i128* %xmm1.0.reg2mem
  %24 = call i128 @__asm_movdqa(i128 %xmm1.0.reload), !insn.addr !129
  %25 = add i64 %rax.0.reload, 16, !insn.addr !130
  %26 = call i128 @__asm_paddd(i128 %xmm1.0.reload, i128 %20), !insn.addr !131
  %27 = call i128 @__asm_pslld(i128 %24, i8 1), !insn.addr !132
  %28 = inttoptr i64 %rax.0.reload to i128*, !insn.addr !133
  %29 = load i128, i128* %28, align 8, !insn.addr !133
  call void @__asm_movups(i128 %29, i128 %27), !insn.addr !133
  %30 = icmp eq i64 %25, %23, !insn.addr !134
  %31 = icmp eq i1 %30, false, !insn.addr !135
  store i128 %26, i128* %xmm1.0.reg2mem, !insn.addr !135
  store i64 %25, i64* %rax.0.reg2mem, !insn.addr !135
  br i1 %31, label %dec_label_pc_1578, label %dec_label_pc_1592, !insn.addr !135

dec_label_pc_1592:                                ; preds = %dec_label_pc_1578
  %32 = and i64 %arg1, 4294967292, !insn.addr !136
  %33 = urem i64 %arg1, 4
  %34 = icmp eq i64 %33, 0, !insn.addr !137
  store i64 %32, i64* %rax.1.reg2mem, !insn.addr !138
  br i1 %34, label %dec_label_pc_15c6, label %dec_label_pc_159c, !insn.addr !138

dec_label_pc_159c:                                ; preds = %dec_label_pc_1534, %dec_label_pc_1592
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %sext1 = mul i64 %rax.1.reload, 4294967296
  %35 = or i64 %rax.1.reload, 1, !insn.addr !139
  %36 = ashr exact i64 %sext1, 30, !insn.addr !140
  %37 = add i64 %36, %15, !insn.addr !140
  %rax.1.tr = trunc i64 %rax.1.reload to i32
  %38 = mul i32 %rax.1.tr, 2, !insn.addr !141
  %39 = inttoptr i64 %37 to i32*, !insn.addr !141
  store i32 %38, i32* %39, align 4, !insn.addr !141
  %40 = icmp ugt i64 %13, %35, !insn.addr !142
  br i1 %40, label %dec_label_pc_15b1, label %dec_label_pc_15c6, !insn.addr !142

dec_label_pc_15b1:                                ; preds = %dec_label_pc_159c
  %41 = or i32 %38, 2, !insn.addr !143
  %42 = or i64 %rax.1.reload, 2, !insn.addr !144
  %43 = add i64 %37, 4, !insn.addr !145
  %44 = inttoptr i64 %43 to i32*, !insn.addr !145
  store i32 %41, i32* %44, align 4, !insn.addr !145
  %45 = icmp ugt i64 %13, %42, !insn.addr !146
  br i1 %45, label %dec_label_pc_15c0, label %dec_label_pc_15c6, !insn.addr !146

dec_label_pc_15c0:                                ; preds = %dec_label_pc_15b1
  %46 = or i32 %38, 4, !insn.addr !147
  %47 = add i64 %37, 8, !insn.addr !148
  %48 = inttoptr i64 %47 to i32*, !insn.addr !148
  store i32 %46, i32* %48, align 4, !insn.addr !148
  br label %dec_label_pc_15c6, !insn.addr !148

dec_label_pc_15c6:                                ; preds = %dec_label_pc_15b1, %dec_label_pc_159c, %dec_label_pc_15c0, %dec_label_pc_1592
  %49 = ashr i32 %1, 1, !insn.addr !149
  %50 = sext i32 %49 to i64, !insn.addr !150
  %51 = mul i64 %50, 4, !insn.addr !151
  %52 = add i64 %15, %51, !insn.addr !151
  %53 = inttoptr i64 %52 to i32*, !insn.addr !151
  %54 = load i32, i32* %53, align 4, !insn.addr !151
  %55 = zext i32 %54 to i64, !insn.addr !151
  store i64 %55, i64* %storemerge.reg2mem, !insn.addr !151
  br label %dec_label_pc_15ce, !insn.addr !151

dec_label_pc_15ce:                                ; preds = %dec_label_pc_14d0, %dec_label_pc_15c6
  %56 = call i64 @__readfsqword(i64 40), !insn.addr !152
  %57 = icmp eq i64 %0, %56, !insn.addr !152
  %58 = icmp eq i1 %57, false, !insn.addr !153
  br i1 %58, label %dec_label_pc_15f6, label %dec_label_pc_15dd, !insn.addr !153

dec_label_pc_15dd:                                ; preds = %dec_label_pc_15ce
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !154

dec_label_pc_15f6:                                ; preds = %dec_label_pc_15ce
  call void @__stack_chk_fail(), !insn.addr !155
  ret i64 ptrtoint (i32* @1 to i64), !insn.addr !156

; uselistorder directives
  uselistorder i64 %rax.1.reload, { 1, 2, 0, 3 }
  uselistorder i64 %15, { 1, 2, 0, 3 }
  uselistorder i64 %13, { 1, 2, 0 }
  uselistorder i32 %2, { 1, 0 }
  uselistorder i64* %rsp.0.reg2mem, { 2, 0, 1 }
  uselistorder i128* %xmm1.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 1, 3, 4, 0, 2 }
  uselistorder label %dec_label_pc_15ce, { 1, 0 }
  uselistorder label %dec_label_pc_15c6, { 2, 0, 1, 3 }
  uselistorder label %dec_label_pc_159c, { 1, 0 }
  uselistorder label %dec_label_pc_151f, { 1, 0 }
}

define i64 @alloca_usage(i64 %arg1) local_unnamed_addr {
dec_label_pc_1600:
  %storemerge.reg2mem = alloca i64, !insn.addr !157
  %rax.1.reg2mem = alloca i64, !insn.addr !157
  %rax.0.reg2mem = alloca i64, !insn.addr !157
  %xmm1.0.reg2mem = alloca i128, !insn.addr !157
  %rsp.1.reg2mem = alloca i64, !insn.addr !157
  %rsp.0.reg2mem = alloca i64, !insn.addr !157
  %stack_var_-24 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !158
  %1 = trunc i64 %arg1 to i32, !insn.addr !159
  %2 = icmp slt i32 %1, 1
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !160
  br i1 %2, label %dec_label_pc_170b, label %dec_label_pc_1623, !insn.addr !160

dec_label_pc_1623:                                ; preds = %dec_label_pc_1600
  %3 = ptrtoint i64* %stack_var_-24 to i64, !insn.addr !161
  %sext = mul i64 %arg1, 4294967296
  %4 = ashr exact i64 %sext, 30, !insn.addr !162
  %5 = add nsw i64 %4, 23, !insn.addr !162
  %6 = and i64 %5, -4096, !insn.addr !163
  %7 = sub i64 %3, %6, !insn.addr !164
  %8 = icmp eq i64 %6, 0, !insn.addr !165
  store i64 %3, i64* %rsp.0.reg2mem, !insn.addr !166
  store i64 %3, i64* %rsp.1.reg2mem, !insn.addr !166
  br i1 %8, label %dec_label_pc_165d, label %dec_label_pc_1648, !insn.addr !166

dec_label_pc_1648:                                ; preds = %dec_label_pc_1623, %dec_label_pc_1648
  %rsp.0.reload = load i64, i64* %rsp.0.reg2mem
  %9 = add i64 %rsp.0.reload, -4096, !insn.addr !167
  %10 = icmp eq i64 %9, %7, !insn.addr !168
  %11 = icmp eq i1 %10, false, !insn.addr !169
  store i64 %9, i64* %rsp.0.reg2mem, !insn.addr !169
  store i64 %9, i64* %rsp.1.reg2mem, !insn.addr !169
  br i1 %11, label %dec_label_pc_1648, label %dec_label_pc_165d, !insn.addr !169

dec_label_pc_165d:                                ; preds = %dec_label_pc_1648, %dec_label_pc_1623
  %12 = and i64 %arg1, 4294967295, !insn.addr !170
  %rsp.1.reload = load i64, i64* %rsp.1.reg2mem
  %13 = and i64 %5, 4080, !insn.addr !171
  %14 = sub nsw i64 15, %13, !insn.addr !172
  %15 = add i64 %14, %rsp.1.reload, !insn.addr !173
  %16 = and i64 %15, -16, !insn.addr !174
  %17 = add i32 %1, -1, !insn.addr !175
  %18 = icmp ult i32 %17, 3
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !176
  br i1 %18, label %dec_label_pc_16d4, label %dec_label_pc_1684, !insn.addr !176

dec_label_pc_1684:                                ; preds = %dec_label_pc_165d
  %19 = load i128, i128* @global_var_3720, align 8, !insn.addr !177
  %20 = call i128 @__asm_movdqa(i128 %19), !insn.addr !177
  %21 = load i128, i128* @global_var_3740, align 8, !insn.addr !178
  %22 = call i128 @__asm_movdqa(i128 %21), !insn.addr !178
  %23 = mul i64 %12, 4
  %24 = and i64 %23, 17179869168, !insn.addr !179
  %25 = add i64 %16, %24, !insn.addr !180
  store i128 %20, i128* %xmm1.0.reg2mem, !insn.addr !181
  store i64 %16, i64* %rax.0.reg2mem, !insn.addr !181
  br label %dec_label_pc_16a8, !insn.addr !181

dec_label_pc_16a8:                                ; preds = %dec_label_pc_16a8, %dec_label_pc_1684
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %xmm1.0.reload = load i128, i128* %xmm1.0.reg2mem
  %26 = call i128 @__asm_movdqa(i128 %xmm1.0.reload), !insn.addr !182
  %27 = add i64 %rax.0.reload, 16, !insn.addr !183
  %28 = call i128 @__asm_paddd(i128 %xmm1.0.reload, i128 %22), !insn.addr !184
  %29 = call i128 @__asm_movdqa(i128 %26), !insn.addr !185
  %30 = call i128 @__asm_pslld(i128 %29, i8 1), !insn.addr !186
  %31 = call i128 @__asm_paddd(i128 %30, i128 %26), !insn.addr !187
  %32 = call i64 @__asm_movaps(i128 %31), !insn.addr !188
  %33 = sext i64 %32 to i128, !insn.addr !188
  %34 = inttoptr i64 %rax.0.reload to i128*, !insn.addr !188
  store i128 %33, i128* %34, align 8, !insn.addr !188
  %35 = icmp eq i64 %27, %25, !insn.addr !189
  %36 = icmp eq i1 %35, false, !insn.addr !190
  store i128 %28, i128* %xmm1.0.reg2mem, !insn.addr !190
  store i64 %27, i64* %rax.0.reg2mem, !insn.addr !190
  br i1 %36, label %dec_label_pc_16a8, label %dec_label_pc_16ca, !insn.addr !190

dec_label_pc_16ca:                                ; preds = %dec_label_pc_16a8
  %37 = and i64 %arg1, 4294967292, !insn.addr !191
  %38 = urem i64 %arg1, 4
  %39 = icmp eq i64 %38, 0, !insn.addr !192
  store i64 %37, i64* %rax.1.reg2mem, !insn.addr !193
  br i1 %39, label %dec_label_pc_1703, label %dec_label_pc_16d4, !insn.addr !193

dec_label_pc_16d4:                                ; preds = %dec_label_pc_165d, %dec_label_pc_16ca
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %sext1 = mul i64 %rax.1.reload, 4294967296
  %40 = trunc i64 %rax.1.reload to i32
  %41 = mul i32 %40, 3, !insn.addr !194
  %42 = ashr exact i64 %sext1, 30, !insn.addr !194
  %43 = add i64 %42, %16, !insn.addr !194
  %44 = inttoptr i64 %43 to i32*, !insn.addr !194
  store i32 %41, i32* %44, align 16, !insn.addr !194
  %45 = or i64 %rax.1.reload, 1, !insn.addr !195
  %46 = icmp ugt i64 %12, %45, !insn.addr !196
  br i1 %46, label %dec_label_pc_16ec, label %dec_label_pc_1703, !insn.addr !196

dec_label_pc_16ec:                                ; preds = %dec_label_pc_16d4
  %47 = or i32 %41, 3, !insn.addr !197
  %48 = or i64 %rax.1.reload, 2, !insn.addr !198
  %49 = or i64 %16, 4, !insn.addr !199
  %50 = add i64 %42, %49, !insn.addr !199
  %51 = inttoptr i64 %50 to i32*, !insn.addr !199
  store i32 %47, i32* %51, align 4, !insn.addr !199
  %52 = icmp ugt i64 %12, %48, !insn.addr !200
  br i1 %52, label %dec_label_pc_16fb, label %dec_label_pc_1703, !insn.addr !200

dec_label_pc_16fb:                                ; preds = %dec_label_pc_16ec
  %53 = add i32 %41, 6, !insn.addr !201
  %54 = or i64 %16, 8, !insn.addr !202
  %55 = add i64 %42, %54, !insn.addr !202
  %56 = inttoptr i64 %55 to i32*, !insn.addr !202
  store i32 %53, i32* %56, align 8, !insn.addr !202
  br label %dec_label_pc_1703, !insn.addr !202

dec_label_pc_1703:                                ; preds = %dec_label_pc_16ec, %dec_label_pc_16d4, %dec_label_pc_16fb, %dec_label_pc_16ca
  %57 = ashr i32 %1, 1, !insn.addr !203
  %58 = sext i32 %57 to i64, !insn.addr !204
  %59 = mul i64 %58, 4, !insn.addr !205
  %60 = add i64 %16, %59, !insn.addr !205
  %61 = inttoptr i64 %60 to i32*, !insn.addr !205
  %62 = load i32, i32* %61, align 4, !insn.addr !205
  %63 = zext i32 %62 to i64, !insn.addr !205
  store i64 %63, i64* %storemerge.reg2mem, !insn.addr !205
  br label %dec_label_pc_170b, !insn.addr !205

dec_label_pc_170b:                                ; preds = %dec_label_pc_1600, %dec_label_pc_1703
  %64 = call i64 @__readfsqword(i64 40), !insn.addr !206
  %65 = icmp eq i64 %0, %64, !insn.addr !206
  %66 = icmp eq i1 %65, false, !insn.addr !207
  br i1 %66, label %dec_label_pc_1736, label %dec_label_pc_171a, !insn.addr !207

dec_label_pc_171a:                                ; preds = %dec_label_pc_170b
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !208

dec_label_pc_1736:                                ; preds = %dec_label_pc_170b
  call void @__stack_chk_fail(), !insn.addr !209
  ret i64 ptrtoint (i32* @1 to i64), !insn.addr !210

; uselistorder directives
  uselistorder i32 %41, { 2, 1, 0 }
  uselistorder i64 %rax.1.reload, { 1, 0, 2, 3 }
  uselistorder i128 %26, { 1, 0 }
  uselistorder i64 %16, { 1, 4, 5, 2, 0, 3 }
  uselistorder i64 %12, { 1, 2, 0 }
  uselistorder i64* %rsp.0.reg2mem, { 2, 0, 1 }
  uselistorder i128* %xmm1.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 ptrtoint (i32* @1 to i64), { 1, 2, 0 }
  uselistorder i64 -4096, { 0, 2, 1, 3 }
  uselistorder i64 %arg1, { 1, 2, 3, 0, 4 }
  uselistorder label %dec_label_pc_170b, { 1, 0 }
  uselistorder label %dec_label_pc_1703, { 2, 0, 1, 3 }
  uselistorder label %dec_label_pc_16d4, { 1, 0 }
  uselistorder label %dec_label_pc_1648, { 1, 0 }
}

define i64 @stack_alias() local_unnamed_addr {
dec_label_pc_1740:
  ret i64 20, !insn.addr !211
}

define void @test_stack_memory() local_unnamed_addr {
dec_label_pc_1750:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3004 to i8*)), !insn.addr !212
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_3022, i64 0, i64 0), i64 20), !insn.addr !213
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_303e, i64 0, i64 0), i64 10), !insn.addr !214
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_305b, i64 0, i64 0), i64 15), !insn.addr !215
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_32c0, i64 0, i64 0), i64 42), !insn.addr !216
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_32e8, i64 0, i64 0), i64 2), !insn.addr !217
  %6 = call i32 @large_stack_frame(), !insn.addr !218
  %7 = zext i32 %6 to i64, !insn.addr !219
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3310, i64 0, i64 0), i64 %7), !insn.addr !220
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3079, i64 0, i64 0), i64 10), !insn.addr !221
  %10 = call i64 @alloca_usage.constprop.0(), !insn.addr !222
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3094, i64 0, i64 0)), !insn.addr !223
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_30b2, i64 0, i64 0), i64 20), !insn.addr !224
  ret void, !insn.addr !224
}

define i64 @heap_basic(i64 %arg1) local_unnamed_addr {
dec_label_pc_1850:
  %r12.0.reg2mem = alloca i64, !insn.addr !225
  %rax.1.reg2mem = alloca i64, !insn.addr !225
  %rax.0.reg2mem = alloca i64, !insn.addr !225
  %xmm1.0.reg2mem = alloca i128, !insn.addr !225
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !226
  %1 = call i64* @malloc(i32 %0), !insn.addr !226
  %2 = icmp eq i64* %1, null, !insn.addr !227
  store i64 4294967295, i64* %r12.0.reg2mem, !insn.addr !228
  br i1 %2, label %dec_label_pc_190d, label %dec_label_pc_1873, !insn.addr !228

dec_label_pc_1873:                                ; preds = %dec_label_pc_1850
  %sext = mul i64 %arg1, 4294967296
  %3 = ashr exact i64 %sext, 32, !insn.addr !229
  %4 = ptrtoint i64* %1 to i64, !insn.addr !226
  %5 = trunc i64 %3 to i32, !insn.addr !230
  %6 = icmp slt i32 %5, 1
  br i1 %6, label %dec_label_pc_18f9, label %dec_label_pc_187a, !insn.addr !231

dec_label_pc_187a:                                ; preds = %dec_label_pc_1873
  %7 = add i32 %5, -1, !insn.addr !232
  %8 = icmp ult i32 %7, 3
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !233
  br i1 %8, label %dec_label_pc_18cc, label %dec_label_pc_1886, !insn.addr !233

dec_label_pc_1886:                                ; preds = %dec_label_pc_187a
  %9 = load i128, i128* @global_var_3720, align 8, !insn.addr !234
  %10 = call i128 @__asm_movdqa(i128 %9), !insn.addr !234
  %11 = load i128, i128* @global_var_3740, align 8, !insn.addr !235
  %12 = call i128 @__asm_movdqa(i128 %11), !insn.addr !235
  %13 = mul i64 %arg1, 4
  %14 = and i64 %13, 17179869168, !insn.addr !236
  %15 = add i64 %14, %4, !insn.addr !237
  store i128 %10, i128* %xmm1.0.reg2mem, !insn.addr !238
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !238
  br label %dec_label_pc_18a8, !insn.addr !238

dec_label_pc_18a8:                                ; preds = %dec_label_pc_18a8, %dec_label_pc_1886
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %xmm1.0.reload = load i128, i128* %xmm1.0.reg2mem
  %16 = call i128 @__asm_movdqa(i128 %xmm1.0.reload), !insn.addr !239
  %17 = add i64 %rax.0.reload, 16, !insn.addr !240
  %18 = call i128 @__asm_paddd(i128 %xmm1.0.reload, i128 %12), !insn.addr !241
  %19 = call i128 @__asm_pslld(i128 %16, i8 1), !insn.addr !242
  %20 = inttoptr i64 %rax.0.reload to i128*, !insn.addr !243
  %21 = load i128, i128* %20, align 8, !insn.addr !243
  call void @__asm_movups(i128 %21, i128 %19), !insn.addr !243
  %22 = icmp eq i64 %17, %15, !insn.addr !244
  %23 = icmp eq i1 %22, false, !insn.addr !245
  store i128 %18, i128* %xmm1.0.reg2mem, !insn.addr !245
  store i64 %17, i64* %rax.0.reg2mem, !insn.addr !245
  br i1 %23, label %dec_label_pc_18a8, label %dec_label_pc_18c2, !insn.addr !245

dec_label_pc_18c2:                                ; preds = %dec_label_pc_18a8
  %24 = and i64 %3, 4294967292, !insn.addr !246
  %25 = urem i64 %arg1, 4
  %26 = icmp eq i64 %25, 0, !insn.addr !247
  store i64 %24, i64* %rax.1.reg2mem, !insn.addr !248
  br i1 %26, label %dec_label_pc_18f9, label %dec_label_pc_18cc, !insn.addr !248

dec_label_pc_18cc:                                ; preds = %dec_label_pc_187a, %dec_label_pc_18c2
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %sext1 = mul i64 %rax.1.reload, 4294967296
  %rax.1.tr = trunc i64 %rax.1.reload to i32
  %27 = mul i32 %rax.1.tr, 2, !insn.addr !249
  %28 = ashr exact i64 %sext1, 30, !insn.addr !249
  %29 = add i64 %28, %4
  %30 = inttoptr i64 %29 to i32*, !insn.addr !249
  store i32 %27, i32* %30, align 4, !insn.addr !249
  %31 = or i64 %rax.1.reload, 1, !insn.addr !250
  %32 = icmp slt i64 %31, %3, !insn.addr !251
  br i1 %32, label %dec_label_pc_18e4, label %dec_label_pc_18f9, !insn.addr !251

dec_label_pc_18e4:                                ; preds = %dec_label_pc_18cc
  %33 = or i32 %27, 2, !insn.addr !252
  %34 = or i64 %rax.1.reload, 2, !insn.addr !253
  %35 = add i64 %29, 4, !insn.addr !254
  %36 = inttoptr i64 %35 to i32*, !insn.addr !254
  store i32 %33, i32* %36, align 4, !insn.addr !254
  %37 = icmp sgt i64 %3, %34, !insn.addr !255
  br i1 %37, label %dec_label_pc_18f2, label %dec_label_pc_18f9, !insn.addr !255

dec_label_pc_18f2:                                ; preds = %dec_label_pc_18e4
  %38 = or i32 %27, 4, !insn.addr !256
  %39 = add i64 %29, 8, !insn.addr !257
  %40 = inttoptr i64 %39 to i32*, !insn.addr !257
  store i32 %38, i32* %40, align 4, !insn.addr !257
  br label %dec_label_pc_18f9, !insn.addr !257

dec_label_pc_18f9:                                ; preds = %dec_label_pc_18e4, %dec_label_pc_18cc, %dec_label_pc_18f2, %dec_label_pc_18c2, %dec_label_pc_1873
  %41 = icmp slt i64 %sext, 0
  %42 = zext i1 %41 to i32
  %43 = add i32 %42, %5, !insn.addr !258
  %44 = ashr i32 %43, 1, !insn.addr !259
  %45 = sext i32 %44 to i64, !insn.addr !260
  %46 = mul i64 %45, 4, !insn.addr !261
  %47 = add i64 %46, %4, !insn.addr !261
  %48 = inttoptr i64 %47 to i32*, !insn.addr !261
  %49 = load i32, i32* %48, align 4, !insn.addr !261
  %50 = zext i32 %49 to i64, !insn.addr !261
  call void @free(i64* nonnull %1), !insn.addr !262
  store i64 %50, i64* %r12.0.reg2mem, !insn.addr !262
  br label %dec_label_pc_190d, !insn.addr !262

dec_label_pc_190d:                                ; preds = %dec_label_pc_1850, %dec_label_pc_18f9
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  ret i64 %r12.0.reload, !insn.addr !263

; uselistorder directives
  uselistorder i64 %rax.1.reload, { 1, 0, 2, 3 }
  uselistorder i64 %4, { 1, 3, 0, 2 }
  uselistorder i64 %3, { 1, 2, 0, 3 }
  uselistorder i64 %sext, { 1, 0 }
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i128* %xmm1.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %r12.0.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 2, 0, 1, 3 }
  uselistorder label %dec_label_pc_190d, { 1, 0 }
  uselistorder label %dec_label_pc_18f9, { 2, 0, 1, 3, 4 }
  uselistorder label %dec_label_pc_18cc, { 1, 0 }
}

define i64 @heap_calloc(i64 %arg1) local_unnamed_addr {
dec_label_pc_1930:
  %0 = alloca i128
  %r12.2.reg2mem = alloca i64, !insn.addr !264
  %r12.1.reg2mem = alloca i64, !insn.addr !264
  %r12.0.reg2mem = alloca i32, !insn.addr !264
  %rax.0.reg2mem = alloca i64, !insn.addr !264
  %rdx.0.reg2mem = alloca i64, !insn.addr !264
  %xmm0.0.reg2mem = alloca i128, !insn.addr !264
  %1 = load i128, i128* %0
  %sext = mul i64 %arg1, 4294967296
  %2 = ashr exact i64 %sext, 32, !insn.addr !265
  %3 = trunc i64 %2 to i32, !insn.addr !266
  %4 = call i64* @calloc(i32 %3, i32 4), !insn.addr !266
  %5 = icmp eq i64* %4, null, !insn.addr !267
  store i64 4294967295, i64* %r12.2.reg2mem, !insn.addr !268
  br i1 %5, label %dec_label_pc_19e6, label %dec_label_pc_1954, !insn.addr !268

dec_label_pc_1954:                                ; preds = %dec_label_pc_1930
  %6 = icmp slt i32 %3, 1
  store i64 0, i64* %r12.1.reg2mem, !insn.addr !269
  br i1 %6, label %dec_label_pc_19e1, label %dec_label_pc_195f, !insn.addr !269

dec_label_pc_195f:                                ; preds = %dec_label_pc_1954
  %7 = ptrtoint i64* %4 to i64, !insn.addr !266
  %8 = add i32 %3, -1, !insn.addr !270
  %9 = icmp ult i32 %8, 3
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !271
  store i32 0, i32* %r12.0.reg2mem, !insn.addr !271
  br i1 %9, label %dec_label_pc_19ba, label %dec_label_pc_196b, !insn.addr !271

dec_label_pc_196b:                                ; preds = %dec_label_pc_195f
  %10 = call i128 @__asm_pxor(i128 %1, i128 %1), !insn.addr !272
  %11 = mul i64 %arg1, 4
  %12 = and i64 %11, 17179869168, !insn.addr !273
  %13 = add i64 %12, %7, !insn.addr !274
  store i128 %10, i128* %xmm0.0.reg2mem, !insn.addr !275
  store i64 %7, i64* %rdx.0.reg2mem, !insn.addr !275
  br label %dec_label_pc_1980, !insn.addr !275

dec_label_pc_1980:                                ; preds = %dec_label_pc_1980, %dec_label_pc_196b
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %14 = inttoptr i64 %rdx.0.reload to i128*, !insn.addr !276
  %15 = load i128, i128* %14, align 8, !insn.addr !276
  %16 = call i128 @__asm_movdqu(i128 %15), !insn.addr !276
  %17 = add i64 %rdx.0.reload, 16, !insn.addr !277
  %18 = call i128 @__asm_paddd(i128 %xmm0.0.reload, i128 %16), !insn.addr !278
  %19 = icmp eq i64 %17, %13, !insn.addr !279
  %20 = icmp eq i1 %19, false, !insn.addr !280
  store i128 %18, i128* %xmm0.0.reg2mem, !insn.addr !280
  store i64 %17, i64* %rdx.0.reg2mem, !insn.addr !280
  br i1 %20, label %dec_label_pc_1980, label %dec_label_pc_1991, !insn.addr !280

dec_label_pc_1991:                                ; preds = %dec_label_pc_1980
  %21 = call i128 @__asm_movdqa(i128 %18), !insn.addr !281
  %22 = call i128 @__asm_psrldq(i128 %21, i8 8), !insn.addr !282
  %23 = and i64 %2, 4294967292, !insn.addr !283
  %24 = call i128 @__asm_paddd(i128 %18, i128 %22), !insn.addr !284
  %25 = call i128 @__asm_movdqa(i128 %24), !insn.addr !285
  %26 = call i128 @__asm_psrldq(i128 %25, i8 4), !insn.addr !286
  %27 = call i128 @__asm_paddd(i128 %24, i128 %26), !insn.addr !287
  %28 = call i32 @__asm_movd(i128 %27), !insn.addr !288
  %29 = sext i32 %28 to i64, !insn.addr !288
  %30 = urem i64 %arg1, 4
  %31 = icmp eq i64 %30, 0, !insn.addr !289
  store i64 %23, i64* %rax.0.reg2mem, !insn.addr !290
  store i32 %28, i32* %r12.0.reg2mem, !insn.addr !290
  store i64 %29, i64* %r12.1.reg2mem, !insn.addr !290
  br i1 %31, label %dec_label_pc_19e1, label %dec_label_pc_19ba, !insn.addr !290

dec_label_pc_19ba:                                ; preds = %dec_label_pc_195f, %dec_label_pc_1991
  %r12.0.reload = load i32, i32* %r12.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %sext1 = mul i64 %rax.0.reload, 4294967296
  %32 = ashr exact i64 %sext1, 30, !insn.addr !291
  %33 = add i64 %32, %7
  %34 = inttoptr i64 %33 to i32*, !insn.addr !292
  %35 = load i32, i32* %34, align 4, !insn.addr !292
  %36 = add i32 %35, %r12.0.reload, !insn.addr !292
  %37 = zext i32 %36 to i64, !insn.addr !292
  %38 = or i64 %rax.0.reload, 1, !insn.addr !293
  %39 = icmp sgt i64 %2, %38, !insn.addr !294
  store i64 %37, i64* %r12.1.reg2mem, !insn.addr !294
  br i1 %39, label %dec_label_pc_19d0, label %dec_label_pc_19e1, !insn.addr !294

dec_label_pc_19d0:                                ; preds = %dec_label_pc_19ba
  %40 = or i64 %rax.0.reload, 2, !insn.addr !295
  %41 = add i64 %33, 4, !insn.addr !296
  %42 = inttoptr i64 %41 to i32*, !insn.addr !296
  %43 = load i32, i32* %42, align 4, !insn.addr !296
  %44 = add i32 %43, %36, !insn.addr !296
  %45 = zext i32 %44 to i64, !insn.addr !296
  %46 = icmp sgt i64 %2, %40, !insn.addr !297
  store i64 %45, i64* %r12.1.reg2mem, !insn.addr !297
  br i1 %46, label %dec_label_pc_19dc, label %dec_label_pc_19e1, !insn.addr !297

dec_label_pc_19dc:                                ; preds = %dec_label_pc_19d0
  %47 = add i64 %33, 8, !insn.addr !298
  %48 = inttoptr i64 %47 to i32*, !insn.addr !298
  %49 = load i32, i32* %48, align 4, !insn.addr !298
  %50 = add i32 %49, %44, !insn.addr !298
  %51 = zext i32 %50 to i64, !insn.addr !298
  store i64 %51, i64* %r12.1.reg2mem, !insn.addr !298
  br label %dec_label_pc_19e1, !insn.addr !298

dec_label_pc_19e1:                                ; preds = %dec_label_pc_1954, %dec_label_pc_19d0, %dec_label_pc_19ba, %dec_label_pc_19dc, %dec_label_pc_1991
  %r12.1.reload = load i64, i64* %r12.1.reg2mem
  call void @free(i64* nonnull %4), !insn.addr !299
  store i64 %r12.1.reload, i64* %r12.2.reg2mem, !insn.addr !299
  br label %dec_label_pc_19e6, !insn.addr !299

dec_label_pc_19e6:                                ; preds = %dec_label_pc_1930, %dec_label_pc_19e1
  %r12.2.reload = load i64, i64* %r12.2.reg2mem
  %52 = and i64 %r12.2.reload, 4294967295, !insn.addr !300
  ret i64 %52, !insn.addr !301

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0, 2 }
  uselistorder i128 %24, { 1, 0 }
  uselistorder i128 %18, { 2, 1, 0 }
  uselistorder i64 %7, { 2, 0, 1 }
  uselistorder i64* %4, { 0, 2, 1 }
  uselistorder i64 %2, { 1, 2, 0, 3 }
  uselistorder i128* %xmm0.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r12.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %r12.1.reg2mem, { 0, 5, 4, 3, 2, 1 }
  uselistorder i64* %r12.2.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 2, 0, 1 }
  uselistorder label %dec_label_pc_19e6, { 1, 0 }
  uselistorder label %dec_label_pc_19e1, { 3, 1, 2, 4, 0 }
  uselistorder label %dec_label_pc_19ba, { 1, 0 }
}

define i32 @heap_realloc() local_unnamed_addr {
dec_label_pc_1a10:
  %r12.0.reg2mem = alloca i32, !insn.addr !302
  %0 = call i64* @malloc(i32 20), !insn.addr !303
  %1 = icmp eq i64* %0, null, !insn.addr !304
  store i32 -1, i32* %r12.0.reg2mem, !insn.addr !305
  br i1 %1, label %dec_label_pc_1a78, label %dec_label_pc_1a2a, !insn.addr !305

dec_label_pc_1a2a:                                ; preds = %dec_label_pc_1a10
  %2 = ptrtoint i64* %0 to i64, !insn.addr !303
  %3 = call i128 @__asm_movdqa(i128 8589934593), !insn.addr !306
  %4 = add i64 %2, 16, !insn.addr !307
  %5 = inttoptr i64 %4 to i32*, !insn.addr !307
  store i32 5, i32* %5, align 4, !insn.addr !307
  %6 = bitcast i64* %0 to i128*, !insn.addr !308
  %7 = load i128, i128* %6, align 8, !insn.addr !308
  call void @__asm_movups(i128 %7, i128 %3), !insn.addr !308
  %8 = call i64* @realloc(i64* nonnull %0, i32 40), !insn.addr !309
  %9 = icmp eq i64* %8, null, !insn.addr !310
  br i1 %9, label %dec_label_pc_1a89, label %dec_label_pc_1a54, !insn.addr !311

dec_label_pc_1a54:                                ; preds = %dec_label_pc_1a2a
  %10 = ptrtoint i64* %8 to i64, !insn.addr !309
  %11 = load i128, i128* @global_var_3790, align 8, !insn.addr !312
  %12 = call i128 @__asm_movdqa(i128 %11), !insn.addr !312
  %13 = add i64 %10, 8, !insn.addr !313
  %14 = inttoptr i64 %13 to i32*, !insn.addr !313
  %15 = load i32, i32* %14, align 4, !insn.addr !313
  %16 = icmp eq i32 %15, 3, !insn.addr !313
  %17 = add i64 %10, 20, !insn.addr !314
  %18 = inttoptr i64 %17 to i128*, !insn.addr !314
  %19 = load i128, i128* %18, align 8, !insn.addr !314
  call void @__asm_movups(i128 %19, i128 %12), !insn.addr !314
  %20 = icmp eq i1 %16, false, !insn.addr !315
  call void @free(i64* nonnull %8), !insn.addr !316
  %phitmp = select i1 %20, i32 -3, i32 50, !insn.addr !315
  store i32 %phitmp, i32* %r12.0.reg2mem, !insn.addr !316
  br label %dec_label_pc_1a78, !insn.addr !316

dec_label_pc_1a78:                                ; preds = %dec_label_pc_1a10, %dec_label_pc_1a89, %dec_label_pc_1a54
  %r12.0.reload = load i32, i32* %r12.0.reg2mem
  ret i32 %r12.0.reload, !insn.addr !317

dec_label_pc_1a89:                                ; preds = %dec_label_pc_1a2a
  call void @free(i64* nonnull %0), !insn.addr !318
  store i32 -2, i32* %r12.0.reg2mem, !insn.addr !319
  br label %dec_label_pc_1a78, !insn.addr !319

; uselistorder directives
  uselistorder i64 %10, { 1, 0 }
  uselistorder i64* %8, { 0, 2, 1 }
  uselistorder i64* %0, { 0, 1, 2, 4, 3 }
  uselistorder i32* %r12.0.reg2mem, { 3, 0, 2, 1 }
  uselistorder label %dec_label_pc_1a78, { 1, 2, 0 }
}

define i64 @heap_array(i64 %arg1) local_unnamed_addr {
dec_label_pc_1aa0:
  %r12.0.reg2mem = alloca i64, !insn.addr !320
  %rax.1.reg2mem = alloca i64, !insn.addr !320
  %rax.0.reg2mem = alloca i64, !insn.addr !320
  %xmm1.0.reg2mem = alloca i128, !insn.addr !320
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !321
  %1 = call i64* @malloc(i32 %0), !insn.addr !321
  %2 = icmp eq i64* %1, null, !insn.addr !322
  store i64 4294967295, i64* %r12.0.reg2mem, !insn.addr !323
  br i1 %2, label %dec_label_pc_1b6d, label %dec_label_pc_1ac3, !insn.addr !323

dec_label_pc_1ac3:                                ; preds = %dec_label_pc_1aa0
  %sext = mul i64 %arg1, 4294967296
  %3 = ashr exact i64 %sext, 32, !insn.addr !324
  %4 = ptrtoint i64* %1 to i64, !insn.addr !321
  %5 = trunc i64 %3 to i32, !insn.addr !325
  %6 = icmp slt i32 %5, 1
  br i1 %6, label %dec_label_pc_1b59, label %dec_label_pc_1ace, !insn.addr !326

dec_label_pc_1ace:                                ; preds = %dec_label_pc_1ac3
  %7 = add i32 %5, -1, !insn.addr !327
  %8 = icmp ult i32 %7, 3
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !328
  br i1 %8, label %dec_label_pc_1b2c, label %dec_label_pc_1ada, !insn.addr !328

dec_label_pc_1ada:                                ; preds = %dec_label_pc_1ace
  %9 = load i128, i128* @global_var_3720, align 8, !insn.addr !329
  %10 = call i128 @__asm_movdqa(i128 %9), !insn.addr !329
  %11 = load i128, i128* @global_var_3740, align 8, !insn.addr !330
  %12 = call i128 @__asm_movdqa(i128 %11), !insn.addr !330
  %13 = mul i64 %arg1, 4
  %14 = and i64 %13, 17179869168, !insn.addr !331
  %15 = add i64 %14, %4, !insn.addr !332
  store i128 %10, i128* %xmm1.0.reg2mem, !insn.addr !333
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !333
  br label %dec_label_pc_1b00, !insn.addr !333

dec_label_pc_1b00:                                ; preds = %dec_label_pc_1b00, %dec_label_pc_1ada
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %xmm1.0.reload = load i128, i128* %xmm1.0.reg2mem
  %16 = call i128 @__asm_movdqa(i128 %xmm1.0.reload), !insn.addr !334
  %17 = add i64 %rax.0.reload, 16, !insn.addr !335
  %18 = call i128 @__asm_paddd(i128 %xmm1.0.reload, i128 %12), !insn.addr !336
  %19 = call i128 @__asm_movdqa(i128 %16), !insn.addr !337
  %20 = call i128 @__asm_pslld(i128 %19, i8 1), !insn.addr !338
  %21 = call i128 @__asm_paddd(i128 %20, i128 %16), !insn.addr !339
  %22 = inttoptr i64 %rax.0.reload to i128*, !insn.addr !340
  %23 = load i128, i128* %22, align 8, !insn.addr !340
  call void @__asm_movups(i128 %23, i128 %21), !insn.addr !340
  %24 = icmp eq i64 %17, %15, !insn.addr !341
  %25 = icmp eq i1 %24, false, !insn.addr !342
  store i128 %18, i128* %xmm1.0.reg2mem, !insn.addr !342
  store i64 %17, i64* %rax.0.reg2mem, !insn.addr !342
  br i1 %25, label %dec_label_pc_1b00, label %dec_label_pc_1b22, !insn.addr !342

dec_label_pc_1b22:                                ; preds = %dec_label_pc_1b00
  %26 = and i64 %3, 4294967292, !insn.addr !343
  %27 = urem i64 %arg1, 4
  %28 = icmp eq i64 %27, 0, !insn.addr !344
  store i64 %26, i64* %rax.1.reg2mem, !insn.addr !345
  br i1 %28, label %dec_label_pc_1b59, label %dec_label_pc_1b2c, !insn.addr !345

dec_label_pc_1b2c:                                ; preds = %dec_label_pc_1ace, %dec_label_pc_1b22
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %sext1 = mul i64 %rax.1.reload, 4294967296
  %29 = trunc i64 %rax.1.reload to i32
  %30 = mul i32 %29, 3, !insn.addr !346
  %31 = ashr exact i64 %sext1, 30, !insn.addr !346
  %32 = add i64 %31, %4
  %33 = inttoptr i64 %32 to i32*, !insn.addr !346
  store i32 %30, i32* %33, align 4, !insn.addr !346
  %34 = or i64 %rax.1.reload, 1, !insn.addr !347
  %35 = icmp sgt i64 %3, %34, !insn.addr !348
  br i1 %35, label %dec_label_pc_1b44, label %dec_label_pc_1b59, !insn.addr !348

dec_label_pc_1b44:                                ; preds = %dec_label_pc_1b2c
  %36 = or i32 %30, 3, !insn.addr !349
  %37 = or i64 %rax.1.reload, 2, !insn.addr !350
  %38 = add i64 %32, 4, !insn.addr !351
  %39 = inttoptr i64 %38 to i32*, !insn.addr !351
  store i32 %36, i32* %39, align 4, !insn.addr !351
  %40 = icmp sgt i64 %3, %37, !insn.addr !352
  br i1 %40, label %dec_label_pc_1b52, label %dec_label_pc_1b59, !insn.addr !352

dec_label_pc_1b52:                                ; preds = %dec_label_pc_1b44
  %41 = add i32 %30, 6, !insn.addr !353
  %42 = add i64 %32, 8, !insn.addr !354
  %43 = inttoptr i64 %42 to i32*, !insn.addr !354
  store i32 %41, i32* %43, align 4, !insn.addr !354
  br label %dec_label_pc_1b59, !insn.addr !354

dec_label_pc_1b59:                                ; preds = %dec_label_pc_1b44, %dec_label_pc_1b2c, %dec_label_pc_1b52, %dec_label_pc_1b22, %dec_label_pc_1ac3
  %44 = icmp slt i64 %sext, 0
  %45 = zext i1 %44 to i32
  %46 = add i32 %45, %5, !insn.addr !355
  %47 = ashr i32 %46, 1, !insn.addr !356
  %48 = sext i32 %47 to i64, !insn.addr !357
  %49 = mul i64 %48, 4, !insn.addr !358
  %50 = add i64 %49, %4, !insn.addr !358
  %51 = inttoptr i64 %50 to i32*, !insn.addr !358
  %52 = load i32, i32* %51, align 4, !insn.addr !358
  %53 = zext i32 %52 to i64, !insn.addr !358
  call void @free(i64* nonnull %1), !insn.addr !359
  store i64 %53, i64* %r12.0.reg2mem, !insn.addr !359
  br label %dec_label_pc_1b6d, !insn.addr !359

dec_label_pc_1b6d:                                ; preds = %dec_label_pc_1aa0, %dec_label_pc_1b59
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  ret i64 %r12.0.reload, !insn.addr !360

; uselistorder directives
  uselistorder i32 %30, { 2, 1, 0 }
  uselistorder i64 %rax.1.reload, { 1, 0, 2, 3 }
  uselistorder i128 %16, { 1, 0 }
  uselistorder i64 %4, { 1, 3, 0, 2 }
  uselistorder i64 %3, { 1, 2, 0, 3 }
  uselistorder i64 %sext, { 1, 0 }
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i128* %xmm1.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %r12.0.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 2, 0, 1, 3 }
  uselistorder label %dec_label_pc_1b6d, { 1, 0 }
  uselistorder label %dec_label_pc_1b59, { 2, 0, 1, 3, 4 }
  uselistorder label %dec_label_pc_1b2c, { 1, 0 }
}

define i64 @heap_struct(i64 %arg1) local_unnamed_addr {
dec_label_pc_1b90:
  %r12.0.reg2mem = alloca i64, !insn.addr !361
  %0 = call i64* @malloc(i32 8), !insn.addr !362
  %1 = icmp eq i64* %0, null, !insn.addr !363
  store i64 4294967295, i64* %r12.0.reg2mem, !insn.addr !364
  br i1 %1, label %dec_label_pc_1bb8, label %dec_label_pc_1bac, !insn.addr !364

dec_label_pc_1bac:                                ; preds = %dec_label_pc_1b90
  %2 = and i64 %arg1, 4294967295, !insn.addr !365
  %3 = mul nuw nsw i64 %2, 3, !insn.addr !366
  %4 = and i64 %3, 4294967295, !insn.addr !366
  call void @free(i64* nonnull %0), !insn.addr !367
  store i64 %4, i64* %r12.0.reg2mem, !insn.addr !367
  br label %dec_label_pc_1bb8, !insn.addr !367

dec_label_pc_1bb8:                                ; preds = %dec_label_pc_1b90, %dec_label_pc_1bac
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  ret i64 %r12.0.reload, !insn.addr !368

; uselistorder directives
  uselistorder i64* %r12.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1bb8, { 1, 0 }
}

define i64 @heap_nested(i64 %arg1) local_unnamed_addr {
dec_label_pc_1bd0:
  %rax.0.reg2mem = alloca i64, !insn.addr !369
  %0 = call i64* @malloc(i32 16), !insn.addr !370
  %1 = ptrtoint i64* %0 to i64, !insn.addr !370
  %2 = inttoptr i64 %arg1 to i64*, !insn.addr !371
  store i64 %1, i64* %2, align 8, !insn.addr !371
  %3 = icmp eq i64* %0, null, !insn.addr !372
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !373
  br i1 %3, label %dec_label_pc_1c1b, label %dec_label_pc_1bef, !insn.addr !373

dec_label_pc_1bef:                                ; preds = %dec_label_pc_1bd0
  %4 = bitcast i64* %0 to i32*, !insn.addr !374
  store i32 10, i32* %4, align 4, !insn.addr !374
  %5 = call i64* @malloc(i32 16), !insn.addr !375
  %6 = ptrtoint i64* %5 to i64, !insn.addr !375
  %7 = add i64 %1, 8, !insn.addr !376
  %8 = inttoptr i64 %7 to i64*, !insn.addr !376
  store i64 %6, i64* %8, align 8, !insn.addr !376
  %9 = icmp eq i64* %5, null, !insn.addr !377
  br i1 %9, label %dec_label_pc_1c27, label %dec_label_pc_1c0b, !insn.addr !378

dec_label_pc_1c0b:                                ; preds = %dec_label_pc_1bef
  %10 = bitcast i64* %5 to i32*, !insn.addr !379
  store i32 20, i32* %10, align 4, !insn.addr !379
  %11 = add i64 %6, 8, !insn.addr !380
  %12 = inttoptr i64 %11 to i64*, !insn.addr !380
  store i64 0, i64* %12, align 8, !insn.addr !380
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !381
  br label %dec_label_pc_1c1b, !insn.addr !381

dec_label_pc_1c1b:                                ; preds = %dec_label_pc_1bd0, %dec_label_pc_1c27, %dec_label_pc_1c0b
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !382

dec_label_pc_1c27:                                ; preds = %dec_label_pc_1bef
  call void @free(i64* nonnull %0), !insn.addr !383
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !384
  br label %dec_label_pc_1c1b, !insn.addr !384

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 3, 0, 2, 1 }
  uselistorder label %dec_label_pc_1c1b, { 1, 2, 0 }
}

define i64 @linked_list_heap() local_unnamed_addr {
dec_label_pc_1c40:
  %rbx.5.reg2mem = alloca i64, !insn.addr !385
  %r12.2.reg2mem = alloca i32, !insn.addr !385
  %rax.1.reg2mem = alloca i64, !insn.addr !385
  %rbx.4.reg2mem = alloca i64, !insn.addr !385
  %r12.1.reg2mem = alloca i64, !insn.addr !385
  %rbx.3.reg2mem = alloca i64, !insn.addr !385
  %rbx.1.reg2mem = alloca i64, !insn.addr !385
  %r12.0.reg2mem = alloca i64, !insn.addr !385
  %rbp.0.reg2mem = alloca i64, !insn.addr !385
  %rbx.0.reg2mem = alloca i64, !insn.addr !385
  %rax.0.in.reg2mem = alloca i64*, !insn.addr !385
  %0 = call i64* @malloc(i32 16), !insn.addr !386
  %1 = icmp eq i64* %0, null, !insn.addr !387
  store i64* %0, i64** %rax.0.in.reg2mem, !insn.addr !388
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !388
  store i64 0, i64* %rbp.0.reg2mem, !insn.addr !388
  store i64 0, i64* %r12.0.reg2mem, !insn.addr !388
  store i64 4294967295, i64* %r12.1.reg2mem, !insn.addr !388
  br i1 %1, label %dec_label_pc_1ca8, label %dec_label_pc_1c5e, !insn.addr !388

dec_label_pc_1c5e:                                ; preds = %dec_label_pc_1c40, %dec_label_pc_1c7a
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %rax.0.in.reload = load i64*, i64** %rax.0.in.reg2mem
  %rax.0 = ptrtoint i64* %rax.0.in.reload to i64
  %2 = trunc i64 %rbp.0.reload to i32, !insn.addr !389
  %3 = bitcast i64* %rax.0.in.reload to i32*, !insn.addr !389
  store i32 %2, i32* %3, align 4, !insn.addr !389
  %4 = add i64 %rax.0, 8, !insn.addr !390
  %5 = inttoptr i64 %4 to i64*, !insn.addr !390
  store i64 0, i64* %5, align 8, !insn.addr !390
  %6 = icmp eq i64 %rbx.0.reload, 0, !insn.addr !391
  %7 = add nuw nsw i64 %rbp.0.reload, 10
  br i1 %6, label %dec_label_pc_1cb0, label %dec_label_pc_1c6d, !insn.addr !392

dec_label_pc_1c6d:                                ; preds = %dec_label_pc_1c5e
  %8 = add i64 %r12.0.reload, 8, !insn.addr !393
  %9 = inttoptr i64 %8 to i64*, !insn.addr !393
  store i64 %rax.0, i64* %9, align 8, !insn.addr !393
  %10 = trunc i64 %7 to i32, !insn.addr !394
  %11 = icmp eq i32 %10, 50, !insn.addr !394
  store i64 %rbx.0.reload, i64* %rbx.1.reg2mem, !insn.addr !395
  store i64 %rbx.0.reload, i64* %rbx.4.reg2mem, !insn.addr !395
  br i1 %11, label %dec_label_pc_1cbb, label %dec_label_pc_1c7a, !insn.addr !395

dec_label_pc_1c7a:                                ; preds = %dec_label_pc_1cb0, %dec_label_pc_1c6d
  %12 = and i64 %7, 4294967295
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %13 = call i64* @malloc(i32 16), !insn.addr !396
  %14 = icmp eq i64* %13, null, !insn.addr !397
  %15 = icmp eq i1 %14, false, !insn.addr !398
  store i64* %13, i64** %rax.0.in.reg2mem, !insn.addr !398
  store i64 %rbx.1.reload, i64* %rbx.0.reg2mem, !insn.addr !398
  store i64 %12, i64* %rbp.0.reg2mem, !insn.addr !398
  store i64 %rax.0, i64* %r12.0.reg2mem, !insn.addr !398
  br i1 %15, label %dec_label_pc_1c5e, label %dec_label_pc_1c8c, !insn.addr !398

dec_label_pc_1c8c:                                ; preds = %dec_label_pc_1c7a
  %16 = icmp eq i64 %rbx.1.reload, 0, !insn.addr !399
  store i64 %rbx.1.reload, i64* %rbx.3.reg2mem, !insn.addr !400
  store i64 4294967295, i64* %r12.1.reg2mem, !insn.addr !400
  br i1 %16, label %dec_label_pc_1ca8, label %dec_label_pc_1c91, !insn.addr !400

dec_label_pc_1c91:                                ; preds = %dec_label_pc_1c8c, %dec_label_pc_1c91
  %rbx.3.reload = load i64, i64* %rbx.3.reg2mem
  %17 = add i64 %rbx.3.reload, 8, !insn.addr !401
  %18 = inttoptr i64 %17 to i64*, !insn.addr !401
  %19 = load i64, i64* %18, align 8, !insn.addr !401
  %20 = inttoptr i64 %rbx.3.reload to i64*, !insn.addr !402
  call void @free(i64* %20), !insn.addr !402
  %21 = icmp eq i64 %19, 0, !insn.addr !403
  %22 = icmp eq i1 %21, false, !insn.addr !404
  store i64 %19, i64* %rbx.3.reg2mem, !insn.addr !404
  store i64 4294967295, i64* %r12.1.reg2mem, !insn.addr !404
  br i1 %22, label %dec_label_pc_1c91, label %dec_label_pc_1ca8, !insn.addr !404

dec_label_pc_1ca8.loopexit1:                      ; preds = %dec_label_pc_1cd8
  %23 = zext i32 %29 to i64, !insn.addr !405
  store i64 %23, i64* %r12.1.reg2mem
  br label %dec_label_pc_1ca8

dec_label_pc_1ca8:                                ; preds = %dec_label_pc_1c91, %dec_label_pc_1ca8.loopexit1, %dec_label_pc_1c40, %dec_label_pc_1c8c
  %r12.1.reload = load i64, i64* %r12.1.reg2mem
  ret i64 %r12.1.reload, !insn.addr !406

dec_label_pc_1cb0:                                ; preds = %dec_label_pc_1c5e
  %24 = trunc i64 %7 to i32, !insn.addr !407
  %25 = icmp eq i32 %24, 50, !insn.addr !407
  %26 = icmp eq i1 %25, false, !insn.addr !408
  store i64 %rax.0, i64* %rbx.1.reg2mem, !insn.addr !408
  store i64 %rax.0, i64* %rbx.4.reg2mem, !insn.addr !408
  br i1 %26, label %dec_label_pc_1c7a, label %dec_label_pc_1cbb, !insn.addr !408

dec_label_pc_1cbb:                                ; preds = %dec_label_pc_1cb0, %dec_label_pc_1c6d
  %rbx.4.reload = load i64, i64* %rbx.4.reg2mem
  store i64 %rbx.4.reload, i64* %rax.1.reg2mem, !insn.addr !409
  store i32 0, i32* %r12.2.reg2mem, !insn.addr !409
  br label %dec_label_pc_1cc8, !insn.addr !409

dec_label_pc_1cc8:                                ; preds = %dec_label_pc_1cc8, %dec_label_pc_1cbb
  %r12.2.reload = load i32, i32* %r12.2.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %27 = inttoptr i64 %rax.1.reload to i32*, !insn.addr !405
  %28 = load i32, i32* %27, align 4, !insn.addr !405
  %29 = add i32 %28, %r12.2.reload, !insn.addr !405
  %30 = add i64 %rax.1.reload, 8, !insn.addr !410
  %31 = inttoptr i64 %30 to i64*, !insn.addr !410
  %32 = load i64, i64* %31, align 8, !insn.addr !410
  %33 = icmp eq i64 %32, 0, !insn.addr !411
  %34 = icmp eq i1 %33, false, !insn.addr !412
  store i64 %32, i64* %rax.1.reg2mem, !insn.addr !412
  store i32 %29, i32* %r12.2.reg2mem, !insn.addr !412
  store i64 %rbx.4.reload, i64* %rbx.5.reg2mem, !insn.addr !412
  br i1 %34, label %dec_label_pc_1cc8, label %dec_label_pc_1cd8, !insn.addr !412

dec_label_pc_1cd8:                                ; preds = %dec_label_pc_1cc8, %dec_label_pc_1cd8
  %rbx.5.reload = load i64, i64* %rbx.5.reg2mem
  %35 = add i64 %rbx.5.reload, 8, !insn.addr !413
  %36 = inttoptr i64 %35 to i64*, !insn.addr !413
  %37 = load i64, i64* %36, align 8, !insn.addr !413
  %38 = inttoptr i64 %rbx.5.reload to i64*, !insn.addr !414
  call void @free(i64* %38), !insn.addr !414
  %39 = icmp eq i64 %37, 0, !insn.addr !415
  %40 = icmp eq i1 %39, false, !insn.addr !416
  store i64 %37, i64* %rbx.5.reg2mem, !insn.addr !416
  br i1 %40, label %dec_label_pc_1cd8, label %dec_label_pc_1ca8.loopexit1, !insn.addr !416

; uselistorder directives
  uselistorder i64 %rbx.5.reload, { 1, 0 }
  uselistorder i64 %rbx.3.reload, { 1, 0 }
  uselistorder i64 %7, { 1, 2, 0 }
  uselistorder i64 %rax.0, { 0, 1, 2, 4, 3 }
  uselistorder i64* %rax.0.in.reload, { 1, 0 }
  uselistorder i64 %rbp.0.reload, { 1, 0 }
  uselistorder i64** %rax.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbp.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r12.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.3.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r12.1.reg2mem, { 0, 2, 1, 4, 3 }
  uselistorder i64* %rax.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r12.2.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.5.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1cd8, { 1, 0 }
  uselistorder label %dec_label_pc_1ca8, { 1, 0, 3, 2 }
  uselistorder label %dec_label_pc_1c91, { 1, 0 }
  uselistorder label %dec_label_pc_1c5e, { 1, 0 }
}

define i64 @create_tree_node(i64 %arg1) local_unnamed_addr {
dec_label_pc_1cf0:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = call i64* @malloc(i32 24), !insn.addr !417
  %3 = ptrtoint i64* %2 to i64, !insn.addr !417
  %4 = icmp eq i64* %2, null, !insn.addr !418
  br i1 %4, label %dec_label_pc_1d10, label %dec_label_pc_1d06, !insn.addr !419

dec_label_pc_1d06:                                ; preds = %dec_label_pc_1cf0
  %5 = trunc i64 %arg1 to i32, !insn.addr !420
  %6 = bitcast i64* %2 to i32*, !insn.addr !420
  store i32 %5, i32* %6, align 4, !insn.addr !420
  %7 = call i128 @__asm_pxor(i128 %1, i128 %1), !insn.addr !421
  %8 = add i64 %3, 8, !insn.addr !422
  %9 = inttoptr i64 %8 to i128*, !insn.addr !422
  %10 = load i128, i128* %9, align 8, !insn.addr !422
  call void @__asm_movups(i128 %10, i128 %7), !insn.addr !422
  br label %dec_label_pc_1d10, !insn.addr !422

dec_label_pc_1d10:                                ; preds = %dec_label_pc_1d06, %dec_label_pc_1cf0
  ret i64 %3, !insn.addr !423

; uselistorder directives
  uselistorder i64 %3, { 1, 0 }
}

define i32 @tree_heap_traversal() local_unnamed_addr {
dec_label_pc_1d20:
  %rax.0.reg2mem = alloca i32, !insn.addr !424
  %0 = call i64* @malloc(i32 24), !insn.addr !425
  %1 = icmp eq i64* %0, null, !insn.addr !426
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !427
  br i1 %1, label %dec_label_pc_1d7c, label %dec_label_pc_1d38, !insn.addr !427

dec_label_pc_1d38:                                ; preds = %dec_label_pc_1d20
  %2 = call i64* @malloc(i32 24), !insn.addr !428
  %3 = icmp eq i64* %2, null, !insn.addr !429
  %4 = call i64* @malloc(i32 24)
  %5 = icmp eq i64* %4, null
  br i1 %3, label %dec_label_pc_1d99, label %dec_label_pc_1d52, !insn.addr !430

dec_label_pc_1d52:                                ; preds = %dec_label_pc_1d38
  call void @free(i64* nonnull %2)
  br i1 %5, label %dec_label_pc_1d8a, label %dec_label_pc_1d5f, !insn.addr !431

dec_label_pc_1d5f:                                ; preds = %dec_label_pc_1d52
  call void @free(i64* nonnull %4), !insn.addr !432
  call void @free(i64* nonnull %0), !insn.addr !433
  store i32 60, i32* %rax.0.reg2mem, !insn.addr !434
  br label %dec_label_pc_1d7c, !insn.addr !434

dec_label_pc_1d7c:                                ; preds = %dec_label_pc_1d20, %dec_label_pc_1d8a, %dec_label_pc_1d5f
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !435

dec_label_pc_1d8a:                                ; preds = %dec_label_pc_1d52, %dec_label_pc_1da6, %dec_label_pc_1d99
  call void @free(i64* nonnull %0), !insn.addr !436
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !437
  br label %dec_label_pc_1d7c, !insn.addr !437

dec_label_pc_1d99:                                ; preds = %dec_label_pc_1d38
  br i1 %5, label %dec_label_pc_1d8a, label %dec_label_pc_1da6, !insn.addr !438

dec_label_pc_1da6:                                ; preds = %dec_label_pc_1d99
  call void @free(i64* nonnull %4), !insn.addr !439
  br label %dec_label_pc_1d8a, !insn.addr !440

; uselistorder directives
  uselistorder i1 %5, { 1, 0 }
  uselistorder i64* %4, { 1, 0, 2 }
  uselistorder i32* %rax.0.reg2mem, { 3, 0, 2, 1 }
  uselistorder label %dec_label_pc_1d8a, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1d7c, { 1, 2, 0 }
}

define i64 @memory_leak(i64 %arg1) local_unnamed_addr {
dec_label_pc_1dc0:
  %rax.1.reg2mem = alloca i64, !insn.addr !441
  %rax.0.reg2mem = alloca i64, !insn.addr !441
  %xmm0.0.reg2mem = alloca i128, !insn.addr !441
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !442
  %1 = call i64* @malloc(i32 %0), !insn.addr !442
  %2 = icmp eq i64* %1, null, !insn.addr !443
  br i1 %2, label %dec_label_pc_1e67, label %dec_label_pc_1ddd, !insn.addr !444

dec_label_pc_1ddd:                                ; preds = %dec_label_pc_1dc0
  %sext = mul i64 %arg1, 4294967296
  %3 = ashr exact i64 %sext, 32, !insn.addr !445
  %4 = ptrtoint i64* %1 to i64, !insn.addr !442
  %5 = trunc i64 %3 to i32, !insn.addr !446
  %6 = icmp slt i32 %5, 1
  br i1 %6, label %dec_label_pc_1e53, label %dec_label_pc_1de4, !insn.addr !447

dec_label_pc_1de4:                                ; preds = %dec_label_pc_1ddd
  %7 = add i32 %5, -1, !insn.addr !448
  %8 = icmp ult i32 %7, 3
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !449
  br i1 %8, label %dec_label_pc_1e2f, label %dec_label_pc_1dec, !insn.addr !449

dec_label_pc_1dec:                                ; preds = %dec_label_pc_1de4
  %9 = load i128, i128* @global_var_3720, align 8, !insn.addr !450
  %10 = call i128 @__asm_movdqa(i128 %9), !insn.addr !450
  %11 = load i128, i128* @global_var_3740, align 8, !insn.addr !451
  %12 = call i128 @__asm_movdqa(i128 %11), !insn.addr !451
  %13 = mul i64 %arg1, 4
  %14 = and i64 %13, 17179869168, !insn.addr !452
  %15 = add i64 %14, %4, !insn.addr !453
  store i128 %10, i128* %xmm0.0.reg2mem, !insn.addr !454
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !454
  br label %dec_label_pc_1e10, !insn.addr !454

dec_label_pc_1e10:                                ; preds = %dec_label_pc_1e10, %dec_label_pc_1dec
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %16 = call i128 @__asm_movdqa(i128 %xmm0.0.reload), !insn.addr !455
  %17 = add i64 %rax.0.reload, 16, !insn.addr !456
  %18 = call i128 @__asm_paddd(i128 %xmm0.0.reload, i128 %12), !insn.addr !457
  %19 = inttoptr i64 %rax.0.reload to i128*, !insn.addr !458
  %20 = load i128, i128* %19, align 8, !insn.addr !458
  call void @__asm_movups(i128 %20, i128 %16), !insn.addr !458
  %21 = icmp eq i64 %17, %15, !insn.addr !459
  %22 = icmp eq i1 %21, false, !insn.addr !460
  store i128 %18, i128* %xmm0.0.reg2mem, !insn.addr !460
  store i64 %17, i64* %rax.0.reg2mem, !insn.addr !460
  br i1 %22, label %dec_label_pc_1e10, label %dec_label_pc_1e25, !insn.addr !460

dec_label_pc_1e25:                                ; preds = %dec_label_pc_1e10
  %23 = and i64 %3, 4294967292, !insn.addr !461
  %24 = urem i64 %arg1, 4
  %25 = icmp eq i64 %24, 0, !insn.addr !462
  store i64 %23, i64* %rax.1.reg2mem, !insn.addr !463
  br i1 %25, label %dec_label_pc_1e53, label %dec_label_pc_1e2f, !insn.addr !463

dec_label_pc_1e2f:                                ; preds = %dec_label_pc_1de4, %dec_label_pc_1e25
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %sext1 = mul i64 %rax.1.reload, 4294967296
  %26 = trunc i64 %rax.1.reload to i32, !insn.addr !464
  %27 = ashr exact i64 %sext1, 30, !insn.addr !464
  %28 = add i64 %27, %4
  %29 = inttoptr i64 %28 to i32*, !insn.addr !464
  store i32 %26, i32* %29, align 4, !insn.addr !464
  %30 = or i64 %rax.1.reload, 1, !insn.addr !465
  %31 = icmp sgt i64 %3, %30, !insn.addr !466
  br i1 %31, label %dec_label_pc_1e44, label %dec_label_pc_1e53, !insn.addr !466

dec_label_pc_1e44:                                ; preds = %dec_label_pc_1e2f
  %32 = or i64 %rax.1.reload, 2, !insn.addr !467
  %33 = trunc i64 %30 to i32, !insn.addr !468
  %34 = add i64 %28, 4, !insn.addr !468
  %35 = inttoptr i64 %34 to i32*, !insn.addr !468
  store i32 %33, i32* %35, align 4, !insn.addr !468
  %36 = icmp sgt i64 %3, %32, !insn.addr !469
  br i1 %36, label %dec_label_pc_1e4f, label %dec_label_pc_1e53, !insn.addr !469

dec_label_pc_1e4f:                                ; preds = %dec_label_pc_1e44
  %37 = trunc i64 %32 to i32, !insn.addr !470
  %38 = add i64 %28, 8, !insn.addr !470
  %39 = inttoptr i64 %38 to i32*, !insn.addr !470
  store i32 %37, i32* %39, align 4, !insn.addr !470
  br label %dec_label_pc_1e53, !insn.addr !470

dec_label_pc_1e53:                                ; preds = %dec_label_pc_1e44, %dec_label_pc_1e2f, %dec_label_pc_1e4f, %dec_label_pc_1e25, %dec_label_pc_1ddd
  %40 = icmp slt i64 %sext, 0
  %41 = zext i1 %40 to i32
  %42 = add i32 %41, %5, !insn.addr !471
  %43 = ashr i32 %42, 1, !insn.addr !472
  %44 = sext i32 %43 to i64, !insn.addr !473
  %45 = mul i64 %44, 4, !insn.addr !474
  %46 = add i64 %45, %4, !insn.addr !474
  %47 = inttoptr i64 %46 to i32*, !insn.addr !474
  %48 = load i32, i32* %47, align 4, !insn.addr !474
  %49 = zext i32 %48 to i64, !insn.addr !474
  ret i64 %49, !insn.addr !475

dec_label_pc_1e67:                                ; preds = %dec_label_pc_1dc0
  ret i64 4294967295, !insn.addr !476

; uselistorder directives
  uselistorder i64 %32, { 1, 0 }
  uselistorder i64 %30, { 1, 0 }
  uselistorder i64 %rax.1.reload, { 2, 1, 0, 3 }
  uselistorder i64 %4, { 1, 3, 0, 2 }
  uselistorder i64 %3, { 1, 2, 0, 3 }
  uselistorder i64 %sext, { 1, 0 }
  uselistorder i64* %1, { 1, 0 }
  uselistorder i128* %xmm0.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.1.reg2mem, { 0, 2, 1 }
  uselistorder i64 4294967292, { 2, 3, 4, 5, 0, 1 }
  uselistorder i64 4, { 0, 17, 11, 1, 2, 18, 12, 3, 19, 13, 4, 5, 20, 14, 6, 7, 21, 15, 8, 9, 22, 16, 10 }
  uselistorder i128* @global_var_3740, { 5, 4, 3, 2, 1, 0 }
  uselistorder i64 %arg1, { 2, 0, 1, 3 }
  uselistorder label %dec_label_pc_1e53, { 2, 0, 1, 3, 4 }
  uselistorder label %dec_label_pc_1e2f, { 1, 0 }
}

define i64 @dangling_pointer() local_unnamed_addr {
dec_label_pc_1e70:
  %0 = call i64* @malloc(i32 4), !insn.addr !477
  %1 = icmp eq i64* %0, null, !insn.addr !478
  br i1 %1, label %dec_label_pc_1eab, label %dec_label_pc_1e84, !insn.addr !479

dec_label_pc_1e84:                                ; preds = %dec_label_pc_1e70
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_30cf, i64 0, i64 0), i64 42), !insn.addr !480
  call void @free(i64* nonnull %0), !insn.addr !481
  %3 = bitcast i64* %0 to i32*, !insn.addr !482
  %4 = load i32, i32* %3, align 4, !insn.addr !482
  %5 = zext i32 %4 to i64, !insn.addr !482
  ret i64 %5, !insn.addr !483

dec_label_pc_1eab:                                ; preds = %dec_label_pc_1e70
  ret i64 4294967295, !insn.addr !484
}

define i32 @double_free(i32* %p) local_unnamed_addr {
dec_label_pc_1eb0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i32* %p, null, !insn.addr !485
  br i1 %2, label %dec_label_pc_1ec0, label %dec_label_pc_1eb9, !insn.addr !486

dec_label_pc_1eb9:                                ; preds = %dec_label_pc_1eb0
  %3 = trunc i64 %1 to i32
  ret i32 %3, !insn.addr !487

dec_label_pc_1ec0:                                ; preds = %dec_label_pc_1eb0
  %4 = call i64* @malloc(i32 4), !insn.addr !488
  %5 = icmp eq i64* %4, null, !insn.addr !489
  br i1 %5, label %dec_label_pc_1eea, label %dec_label_pc_1ed3, !insn.addr !490

dec_label_pc_1ed3:                                ; preds = %dec_label_pc_1ec0
  call void @free(i64* nonnull %4), !insn.addr !491
  call void @free(i64* nonnull %4), !insn.addr !492
  ret i32 -2, !insn.addr !493

dec_label_pc_1eea:                                ; preds = %dec_label_pc_1ec0
  ret i32 -1, !insn.addr !494

; uselistorder directives
  uselistorder i32 -2, { 2, 0, 1 }
}

define i32 @heap_overflow() local_unnamed_addr {
dec_label_pc_1ef0:
  %storemerge.reg2mem = alloca i32, !insn.addr !495
  %0 = call i64* @malloc(i32 40), !insn.addr !496
  %1 = icmp eq i64* %0, null, !insn.addr !497
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !498
  br i1 %1, label %dec_label_pc_1f11, label %dec_label_pc_1f07, !insn.addr !498

dec_label_pc_1f07:                                ; preds = %dec_label_pc_1ef0
  call void @free(i64* nonnull %0), !insn.addr !499
  store i32 xor (i32 ptrtoint (i32* @1 to i32), i32 ptrtoint (i32* @1 to i32)), i32* %storemerge.reg2mem, !insn.addr !500
  br label %dec_label_pc_1f11, !insn.addr !500

dec_label_pc_1f11:                                ; preds = %dec_label_pc_1ef0, %dec_label_pc_1f07
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !501

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1f11, { 1, 0 }
}

define void @test_heap_memory() local_unnamed_addr {
dec_label_pc_1f20:
  %r12.6.reg2mem = alloca i64, !insn.addr !502
  %r13.2.reg2mem = alloca i32, !insn.addr !502
  %rax.1.reg2mem = alloca i64, !insn.addr !502
  %r12.5.reg2mem = alloca i64, !insn.addr !502
  %rdx.1.reg2mem = alloca i64, !insn.addr !502
  %r13.1.reg2mem = alloca i64, !insn.addr !502
  %r12.4.reg2mem = alloca i64, !insn.addr !502
  %r12.2.reg2mem = alloca i64, !insn.addr !502
  %r13.0.reg2mem = alloca i64, !insn.addr !502
  %r12.1.reg2mem = alloca i64, !insn.addr !502
  %rbx.0.reg2mem = alloca i64, !insn.addr !502
  %rax.0.in.reg2mem = alloca i64*, !insn.addr !502
  %rdx.0.reg2mem = alloca i64, !insn.addr !502
  %storemerge.reg2mem = alloca i64, !insn.addr !502
  %storemerge2.reg2mem = alloca i64, !insn.addr !502
  %r12.0.reg2mem = alloca i64, !insn.addr !502
  %storemerge3.reg2mem = alloca i64, !insn.addr !502
  %stack_var_-36 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !503
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_30e6 to i8*)), !insn.addr !504
  %2 = call i64* @malloc(i32 40), !insn.addr !505
  %3 = icmp eq i64* %2, null, !insn.addr !506
  store i64 4294967295, i64* %storemerge3.reg2mem, !insn.addr !507
  br i1 %3, label %dec_label_pc_1f80, label %dec_label_pc_1f5c, !insn.addr !507

dec_label_pc_1f5c:                                ; preds = %dec_label_pc_1f20
  %4 = ptrtoint i64* %2 to i64, !insn.addr !505
  %5 = load i128, i128* @global_var_37a0, align 8, !insn.addr !508
  %6 = call i128 @__asm_movdqa(i128 %5), !insn.addr !508
  %7 = add i64 %4, 16, !insn.addr !509
  %8 = inttoptr i64 %7 to i128*, !insn.addr !509
  %9 = load i128, i128* %8, align 8, !insn.addr !509
  call void @__asm_movups(i128 %9, i128 %6), !insn.addr !509
  %10 = add i64 %4, 32, !insn.addr !510
  %11 = inttoptr i64 %10 to i64*, !insn.addr !510
  store i64 77309411344, i64* %11, align 8, !insn.addr !510
  call void @free(i64* nonnull %2), !insn.addr !511
  store i64 10, i64* %storemerge3.reg2mem, !insn.addr !512
  br label %dec_label_pc_1f80, !insn.addr !512

dec_label_pc_1f80:                                ; preds = %dec_label_pc_1f20, %dec_label_pc_1f5c
  %storemerge3.reload = load i64, i64* %storemerge3.reg2mem
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3104, i64 0, i64 0), i64 %storemerge3.reload), !insn.addr !513
  %13 = call i64* @calloc(i32 5, i32 4), !insn.addr !514
  %14 = icmp eq i64* %13, null, !insn.addr !515
  store i64 4294967295, i64* %r12.0.reg2mem, !insn.addr !516
  br i1 %14, label %dec_label_pc_1fdb, label %dec_label_pc_1fae, !insn.addr !516

dec_label_pc_1fae:                                ; preds = %dec_label_pc_1f80
  %15 = ptrtoint i64* %13 to i64, !insn.addr !514
  %16 = bitcast i64* %13 to i128*, !insn.addr !517
  %17 = load i128, i128* %16, align 8, !insn.addr !517
  %18 = call i128 @__asm_movdqu(i128 %17), !insn.addr !517
  %19 = load i128, i128* %16, align 8, !insn.addr !518
  %20 = call i128 @__asm_movdqu(i128 %19), !insn.addr !518
  %21 = call i128 @__asm_psrldq(i128 %18, i8 8), !insn.addr !519
  %22 = call i128 @__asm_paddd(i128 %21, i128 %20), !insn.addr !520
  %23 = call i128 @__asm_movdqa(i128 %22), !insn.addr !521
  %24 = call i128 @__asm_psrldq(i128 %23, i8 4), !insn.addr !522
  %25 = call i128 @__asm_paddd(i128 %22, i128 %24), !insn.addr !523
  %26 = call i32 @__asm_movd(i128 %25), !insn.addr !524
  %27 = add i64 %15, 16, !insn.addr !525
  %28 = inttoptr i64 %27 to i32*, !insn.addr !525
  %29 = load i32, i32* %28, align 4, !insn.addr !525
  %30 = add i32 %29, %26, !insn.addr !525
  %31 = zext i32 %30 to i64, !insn.addr !526
  call void @free(i64* nonnull %13), !insn.addr !527
  store i64 %31, i64* %r12.0.reg2mem, !insn.addr !527
  br label %dec_label_pc_1fdb, !insn.addr !527

dec_label_pc_1fdb:                                ; preds = %dec_label_pc_1f80, %dec_label_pc_1fae
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  %32 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3121, i64 0, i64 0), i64 %r12.0.reload), !insn.addr !528
  %33 = call i32 @heap_realloc(), !insn.addr !529
  %34 = zext i32 %33 to i64, !insn.addr !530
  %35 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3338, i64 0, i64 0), i64 %34), !insn.addr !531
  %36 = call i64* @malloc(i32 40), !insn.addr !532
  %37 = icmp eq i64* %36, null, !insn.addr !533
  store i64 4294967295, i64* %storemerge2.reg2mem, !insn.addr !534
  br i1 %37, label %dec_label_pc_2044, label %dec_label_pc_2023, !insn.addr !534

dec_label_pc_2023:                                ; preds = %dec_label_pc_1fdb
  %38 = ptrtoint i64* %36 to i64, !insn.addr !532
  %39 = load i128, i128* @global_var_37b0, align 8, !insn.addr !535
  %40 = call i128 @__asm_movdqa(i128 %39), !insn.addr !535
  %41 = add i64 %38, 16, !insn.addr !536
  %42 = inttoptr i64 %41 to i128*, !insn.addr !536
  %43 = load i128, i128* %42, align 8, !insn.addr !536
  call void @__asm_movups(i128 %43, i128 %40), !insn.addr !536
  %44 = add i64 %38, 32, !insn.addr !537
  %45 = inttoptr i64 %44 to i64*, !insn.addr !537
  store i64 115964117016, i64* %45, align 8, !insn.addr !537
  call void @free(i64* nonnull %36), !insn.addr !538
  store i64 15, i64* %storemerge2.reg2mem, !insn.addr !539
  br label %dec_label_pc_2044, !insn.addr !539

dec_label_pc_2044:                                ; preds = %dec_label_pc_1fdb, %dec_label_pc_2023
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %46 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_313f, i64 0, i64 0), i64 %storemerge2.reload), !insn.addr !540
  %47 = call i64* @malloc(i32 8), !insn.addr !541
  %48 = icmp eq i64* %47, null, !insn.addr !542
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !543
  br i1 %48, label %dec_label_pc_2077, label %dec_label_pc_206d, !insn.addr !543

dec_label_pc_206d:                                ; preds = %dec_label_pc_2044
  call void @free(i64* nonnull %47), !insn.addr !544
  store i64 15, i64* %storemerge.reg2mem, !insn.addr !545
  br label %dec_label_pc_2077, !insn.addr !545

dec_label_pc_2077:                                ; preds = %dec_label_pc_2044, %dec_label_pc_206d
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %49 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_315c, i64 0, i64 0), i64 %storemerge.reload), !insn.addr !546
  %50 = call i64* @malloc(i32 16), !insn.addr !547
  %51 = icmp eq i64* %50, null, !insn.addr !548
  br i1 %51, label %dec_label_pc_2376, label %dec_label_pc_20a0, !insn.addr !549

dec_label_pc_20a0:                                ; preds = %dec_label_pc_2077
  %52 = ptrtoint i64* %50 to i64, !insn.addr !547
  %53 = call i64* @malloc(i32 16), !insn.addr !550
  %54 = ptrtoint i64* %53 to i64, !insn.addr !550
  %55 = add i64 %52, 8, !insn.addr !551
  %56 = inttoptr i64 %55 to i64*, !insn.addr !551
  store i64 %54, i64* %56, align 8, !insn.addr !551
  %57 = icmp eq i64* %53, null, !insn.addr !552
  br i1 %57, label %dec_label_pc_2354, label %dec_label_pc_20b8, !insn.addr !553

dec_label_pc_20b8:                                ; preds = %dec_label_pc_20a0
  %58 = bitcast i64* %53 to i32*, !insn.addr !554
  store i32 20, i32* %58, align 4, !insn.addr !554
  %59 = add i64 %54, 8, !insn.addr !555
  %60 = inttoptr i64 %59 to i64*, !insn.addr !555
  store i64 0, i64* %60, align 8, !insn.addr !555
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !555
  br label %dec_label_pc_20c8, !insn.addr !555

dec_label_pc_20c8:                                ; preds = %dec_label_pc_2354, %dec_label_pc_20b8
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %61 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_31b3, i64 0, i64 0), i64 %rdx.0.reload), !insn.addr !556
  %62 = load i64, i64* %56, align 8, !insn.addr !557
  %63 = inttoptr i64 %62 to i64*, !insn.addr !558
  call void @free(i64* %63), !insn.addr !558
  call void @free(i64* nonnull %50), !insn.addr !559
  br label %dec_label_pc_20ed, !insn.addr !559

dec_label_pc_20ed:                                ; preds = %dec_label_pc_2376, %dec_label_pc_20c8
  %64 = call i64* @malloc(i32 16), !insn.addr !560
  %65 = icmp eq i64* %64, null, !insn.addr !561
  store i64* %64, i64** %rax.0.in.reg2mem, !insn.addr !562
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !562
  store i64 0, i64* %r12.1.reg2mem, !insn.addr !562
  store i64 0, i64* %r13.0.reg2mem, !insn.addr !562
  store i64 4294967295, i64* %r13.1.reg2mem, !insn.addr !562
  br i1 %65, label %dec_label_pc_2160, label %dec_label_pc_2108, !insn.addr !562

dec_label_pc_2108:                                ; preds = %dec_label_pc_20ed, %dec_label_pc_212b
  %r13.0.reload = load i64, i64* %r13.0.reg2mem
  %r12.1.reload = load i64, i64* %r12.1.reg2mem
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %rax.0.in.reload = load i64*, i64** %rax.0.in.reg2mem
  %rax.0 = ptrtoint i64* %rax.0.in.reload to i64
  %66 = trunc i64 %rbx.0.reload to i32, !insn.addr !563
  %67 = bitcast i64* %rax.0.in.reload to i32*, !insn.addr !563
  store i32 %66, i32* %67, align 4, !insn.addr !563
  %68 = add i64 %rax.0, 8, !insn.addr !564
  %69 = inttoptr i64 %68 to i64*, !insn.addr !564
  store i64 0, i64* %69, align 8, !insn.addr !564
  %70 = icmp eq i64 %r12.1.reload, 0, !insn.addr !565
  %71 = add nuw nsw i64 %rbx.0.reload, 10
  br i1 %70, label %dec_label_pc_2240, label %dec_label_pc_211b, !insn.addr !566

dec_label_pc_211b:                                ; preds = %dec_label_pc_2108
  %72 = add i64 %r13.0.reload, 8, !insn.addr !567
  %73 = inttoptr i64 %72 to i64*, !insn.addr !567
  store i64 %rax.0, i64* %73, align 8, !insn.addr !567
  %74 = trunc i64 %71 to i32, !insn.addr !568
  %75 = icmp eq i32 %74, 50, !insn.addr !568
  store i64 %r12.1.reload, i64* %r12.2.reg2mem, !insn.addr !569
  store i64 %r12.1.reload, i64* %r12.5.reg2mem, !insn.addr !569
  br i1 %75, label %dec_label_pc_224f, label %dec_label_pc_212b, !insn.addr !569

dec_label_pc_212b:                                ; preds = %dec_label_pc_2240, %dec_label_pc_211b
  %76 = and i64 %71, 4294967295
  %r12.2.reload = load i64, i64* %r12.2.reg2mem
  %77 = call i64* @malloc(i32 16), !insn.addr !570
  %78 = icmp eq i64* %77, null, !insn.addr !571
  %79 = icmp eq i1 %78, false, !insn.addr !572
  store i64* %77, i64** %rax.0.in.reg2mem, !insn.addr !572
  store i64 %76, i64* %rbx.0.reg2mem, !insn.addr !572
  store i64 %r12.2.reload, i64* %r12.1.reg2mem, !insn.addr !572
  store i64 %rax.0, i64* %r13.0.reg2mem, !insn.addr !572
  br i1 %79, label %dec_label_pc_2108, label %dec_label_pc_213d, !insn.addr !572

dec_label_pc_213d:                                ; preds = %dec_label_pc_212b
  %80 = icmp eq i64 %r12.2.reload, 0, !insn.addr !573
  store i64 %r12.2.reload, i64* %r12.4.reg2mem, !insn.addr !574
  store i64 4294967295, i64* %r13.1.reg2mem, !insn.addr !574
  br i1 %80, label %dec_label_pc_2160, label %dec_label_pc_2142, !insn.addr !574

dec_label_pc_2142:                                ; preds = %dec_label_pc_213d, %dec_label_pc_2142
  %r12.4.reload = load i64, i64* %r12.4.reg2mem
  %81 = add i64 %r12.4.reload, 8, !insn.addr !575
  %82 = inttoptr i64 %81 to i64*, !insn.addr !575
  %83 = load i64, i64* %82, align 8, !insn.addr !575
  %84 = inttoptr i64 %r12.4.reload to i64*, !insn.addr !576
  call void @free(i64* %84), !insn.addr !576
  %85 = icmp eq i64 %83, 0, !insn.addr !577
  %86 = icmp eq i1 %85, false, !insn.addr !578
  store i64 %83, i64* %r12.4.reg2mem, !insn.addr !578
  store i64 4294967295, i64* %r13.1.reg2mem, !insn.addr !578
  br i1 %86, label %dec_label_pc_2142, label %dec_label_pc_2160, !insn.addr !578

dec_label_pc_2160.loopexit4:                      ; preds = %dec_label_pc_2268
  %87 = zext i32 %121 to i64, !insn.addr !579
  store i64 %87, i64* %r13.1.reg2mem
  br label %dec_label_pc_2160

dec_label_pc_2160:                                ; preds = %dec_label_pc_2142, %dec_label_pc_2160.loopexit4, %dec_label_pc_20ed, %dec_label_pc_213d
  %r13.1.reload = load i64, i64* %r13.1.reg2mem
  %88 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3358, i64 0, i64 0), i64 %r13.1.reload), !insn.addr !580
  %89 = call i32 @tree_heap_traversal(), !insn.addr !581
  %90 = zext i32 %89 to i64, !insn.addr !582
  %91 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3380, i64 0, i64 0), i64 %90), !insn.addr !583
  %92 = call i64* @malloc(i32 20), !insn.addr !584
  %93 = icmp eq i64* %92, null, !insn.addr !585
  store i64 4294967295, i64* %rdx.1.reg2mem, !insn.addr !586
  br i1 %93, label %dec_label_pc_21bc, label %dec_label_pc_21a5, !insn.addr !586

dec_label_pc_21a5:                                ; preds = %dec_label_pc_2160
  %94 = ptrtoint i64* %92 to i64, !insn.addr !584
  %95 = load i128, i128* @global_var_3720, align 8, !insn.addr !587
  %96 = call i128 @__asm_movdqa(i128 %95), !insn.addr !587
  %97 = add i64 %94, 16, !insn.addr !588
  %98 = inttoptr i64 %97 to i32*, !insn.addr !588
  store i32 4, i32* %98, align 4, !insn.addr !588
  %99 = bitcast i64* %92 to i128*, !insn.addr !589
  %100 = load i128, i128* %99, align 8, !insn.addr !589
  call void @__asm_movups(i128 %100, i128 %96), !insn.addr !589
  store i64 2, i64* %rdx.1.reg2mem, !insn.addr !589
  br label %dec_label_pc_21bc, !insn.addr !589

dec_label_pc_21bc:                                ; preds = %dec_label_pc_2160, %dec_label_pc_21a5
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  %101 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_317a, i64 0, i64 0), i64 %rdx.1.reload), !insn.addr !590
  %102 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_33a8, i64 0, i64 0)), !insn.addr !591
  %103 = call i32 @fork(), !insn.addr !592
  %104 = icmp eq i32 %103, 0, !insn.addr !593
  br i1 %104, label %dec_label_pc_22b0, label %dec_label_pc_21ef, !insn.addr !594

dec_label_pc_21ef:                                ; preds = %dec_label_pc_21bc
  %105 = icmp slt i32 %103, 1
  br i1 %105, label %dec_label_pc_2280, label %dec_label_pc_21f5, !insn.addr !595

dec_label_pc_21f5:                                ; preds = %dec_label_pc_21ef
  %106 = call i32 @waitpid(i32 %103, i32* nonnull %stack_var_-36, i32 0), !insn.addr !596
  %107 = load i32, i32* %stack_var_-36, align 4, !insn.addr !597
  %108 = urem i32 %107, 128, !insn.addr !598
  %109 = icmp eq i32 %108, 0, !insn.addr !598
  br i1 %109, label %dec_label_pc_2320, label %dec_label_pc_2212, !insn.addr !599

dec_label_pc_2212:                                ; preds = %dec_label_pc_21f5
  %110 = trunc i32 %108 to i8
  %111 = add nuw i8 %110, 1, !insn.addr !600
  %112 = icmp sgt i8 %111, 1, !insn.addr !600
  br i1 %112, label %dec_label_pc_2308, label %dec_label_pc_221d, !insn.addr !600

dec_label_pc_221d:                                ; preds = %dec_label_pc_2320, %dec_label_pc_2308, %dec_label_pc_2212
  %113 = call i64 @__readfsqword(i64 40), !insn.addr !601
  %114 = icmp eq i64 %0, %113, !insn.addr !601
  %115 = icmp eq i1 %114, false, !insn.addr !602
  br i1 %115, label %dec_label_pc_2399, label %dec_label_pc_2231, !insn.addr !602

dec_label_pc_2231:                                ; preds = %dec_label_pc_221d
  ret void, !insn.addr !603

dec_label_pc_2240:                                ; preds = %dec_label_pc_2108
  %116 = trunc i64 %71 to i32, !insn.addr !604
  %117 = icmp eq i32 %116, 50, !insn.addr !604
  %118 = icmp eq i1 %117, false, !insn.addr !605
  store i64 %rax.0, i64* %r12.2.reg2mem, !insn.addr !605
  store i64 %rax.0, i64* %r12.5.reg2mem, !insn.addr !605
  br i1 %118, label %dec_label_pc_212b, label %dec_label_pc_224f, !insn.addr !605

dec_label_pc_224f:                                ; preds = %dec_label_pc_2240, %dec_label_pc_211b
  %r12.5.reload = load i64, i64* %r12.5.reg2mem
  store i64 %r12.5.reload, i64* %rax.1.reg2mem, !insn.addr !606
  store i32 0, i32* %r13.2.reg2mem, !insn.addr !606
  br label %dec_label_pc_2258, !insn.addr !606

dec_label_pc_2258:                                ; preds = %dec_label_pc_2258, %dec_label_pc_224f
  %r13.2.reload = load i32, i32* %r13.2.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %119 = inttoptr i64 %rax.1.reload to i32*, !insn.addr !579
  %120 = load i32, i32* %119, align 4, !insn.addr !579
  %121 = add i32 %120, %r13.2.reload, !insn.addr !579
  %122 = add i64 %rax.1.reload, 8, !insn.addr !607
  %123 = inttoptr i64 %122 to i64*, !insn.addr !607
  %124 = load i64, i64* %123, align 8, !insn.addr !607
  %125 = icmp eq i64 %124, 0, !insn.addr !608
  %126 = icmp eq i1 %125, false, !insn.addr !609
  store i64 %124, i64* %rax.1.reg2mem, !insn.addr !609
  store i32 %121, i32* %r13.2.reg2mem, !insn.addr !609
  store i64 %r12.5.reload, i64* %r12.6.reg2mem, !insn.addr !609
  br i1 %126, label %dec_label_pc_2258, label %dec_label_pc_2268, !insn.addr !609

dec_label_pc_2268:                                ; preds = %dec_label_pc_2258, %dec_label_pc_2268
  %r12.6.reload = load i64, i64* %r12.6.reg2mem
  %127 = add i64 %r12.6.reload, 8, !insn.addr !610
  %128 = inttoptr i64 %127 to i64*, !insn.addr !610
  %129 = load i64, i64* %128, align 8, !insn.addr !610
  %130 = inttoptr i64 %r12.6.reload to i64*, !insn.addr !611
  call void @free(i64* %130), !insn.addr !611
  %131 = icmp eq i64 %129, 0, !insn.addr !612
  %132 = icmp eq i1 %131, false, !insn.addr !613
  store i64 %129, i64* %r12.6.reg2mem, !insn.addr !613
  br i1 %132, label %dec_label_pc_2268, label %dec_label_pc_2160.loopexit4, !insn.addr !613

dec_label_pc_2280:                                ; preds = %dec_label_pc_21ef
  %133 = call i64 @__readfsqword(i64 40), !insn.addr !614
  %134 = icmp eq i64 %0, %133, !insn.addr !614
  %135 = icmp eq i1 %134, false, !insn.addr !615
  br i1 %135, label %dec_label_pc_2399, label %dec_label_pc_2294, !insn.addr !615

dec_label_pc_2294:                                ; preds = %dec_label_pc_2280
  call void @perror(i8* bitcast (i8** @global_var_31a8 to i8*)), !insn.addr !616
  ret void, !insn.addr !616

dec_label_pc_22b0:                                ; preds = %dec_label_pc_21bc
  %136 = call i64* @malloc(i32 4), !insn.addr !617
  %137 = icmp eq i64* %136, null, !insn.addr !618
  br i1 %137, label %dec_label_pc_22e8, label %dec_label_pc_22c6, !insn.addr !619

dec_label_pc_22c6:                                ; preds = %dec_label_pc_22b0
  %138 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_30cf, i64 0, i64 0), i64 42), !insn.addr !620
  call void @free(i64* nonnull %136), !insn.addr !621
  br label %dec_label_pc_22e8, !insn.addr !622

dec_label_pc_22e8:                                ; preds = %dec_label_pc_22b0, %dec_label_pc_22c6
  %139 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3198 to i8*)), !insn.addr !623
  call void @exit(i32 0), !insn.addr !624
  unreachable, !insn.addr !624

dec_label_pc_2308:                                ; preds = %dec_label_pc_2212
  %140 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_33f0 to i8*)), !insn.addr !625
  br label %dec_label_pc_221d, !insn.addr !626

dec_label_pc_2320:                                ; preds = %dec_label_pc_21f5
  %141 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_33c8 to i8*)), !insn.addr !627
  br label %dec_label_pc_221d, !insn.addr !628

dec_label_pc_2354:                                ; preds = %dec_label_pc_20a0
  call void @free(i64* nonnull %50), !insn.addr !629
  store i64 4294967294, i64* %rdx.0.reg2mem, !insn.addr !630
  br label %dec_label_pc_20c8, !insn.addr !630

dec_label_pc_2376:                                ; preds = %dec_label_pc_2077
  %142 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_31b3, i64 0, i64 0), i64 4294967295), !insn.addr !631
  br label %dec_label_pc_20ed, !insn.addr !632

dec_label_pc_2399:                                ; preds = %dec_label_pc_2280, %dec_label_pc_221d
  call void @__stack_chk_fail(), !insn.addr !633
  ret void, !insn.addr !634

; uselistorder directives
  uselistorder i64 %r12.6.reload, { 1, 0 }
  uselistorder i32 %108, { 1, 0 }
  uselistorder i64* %92, { 0, 2, 1 }
  uselistorder i64 %r12.4.reload, { 1, 0 }
  uselistorder i64 %71, { 1, 2, 0 }
  uselistorder i64 %rax.0, { 0, 1, 2, 4, 3 }
  uselistorder i64* %rax.0.in.reload, { 1, 0 }
  uselistorder i64 %rbx.0.reload, { 1, 0 }
  uselistorder i64* %50, { 0, 1, 3, 2 }
  uselistorder i64* %36, { 0, 2, 1 }
  uselistorder i128 %22, { 1, 0 }
  uselistorder i64* %13, { 0, 1, 3, 2 }
  uselistorder i64* %2, { 0, 2, 1 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64* %storemerge3.reg2mem, { 0, 2, 1 }
  uselistorder i64* %r12.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge2.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64** %rax.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r12.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r13.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r12.2.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r12.4.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r13.1.reg2mem, { 0, 2, 1, 4, 3 }
  uselistorder i64* %rdx.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r13.2.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r12.6.reg2mem, { 2, 0, 1 }
  uselistorder i64 42, { 1, 2, 3, 0 }
  uselistorder i8 1, { 1, 0, 2, 3, 4, 5, 6 }
  uselistorder i128* @global_var_3720, { 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 20, { 0, 3, 2, 1 }
  uselistorder i64 8, { 15, 16, 17, 18, 19, 20, 21, 0, 5, 6, 7, 8, 9, 10, 11, 12, 1, 14, 2, 3, 4, 13 }
  uselistorder i32 (i128)* @__asm_movd, { 2, 0, 1 }
  uselistorder i8 4, { 1, 0 }
  uselistorder i128 (i128, i128)* @__asm_paddd, { 10, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13, 14, 15 }
  uselistorder i128 (i128, i8)* @__asm_psrldq, { 2, 3, 0, 1 }
  uselistorder i8 8, { 1, 0 }
  uselistorder i128 (i128)* @__asm_movdqu, { 1, 2, 0 }
  uselistorder i32 4, { 5, 10, 6, 7, 8, 0, 1, 9, 3, 2, 4 }
  uselistorder void (i64*)* @free, { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 19, 18, 17, 27, 16, 15, 13, 12, 14, 26, 25, 24, 23, 22, 11, 10, 21, 20, 28 }
  uselistorder i64 32, { 4, 5, 0, 1, 2, 3 }
  uselistorder void (i128, i128)* @__asm_movups, { 7, 8, 9, 0, 1, 2, 5, 6, 3, 4 }
  uselistorder i64 16, { 7, 8, 9, 10, 0, 1, 6, 2, 3, 4, 5, 11 }
  uselistorder i128 (i128)* @__asm_movdqa, { 22, 23, 24, 25, 0, 1, 2, 3, 4, 5, 6, 20, 21, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 19 }
  uselistorder i64* (i32)* @malloc, { 8, 7, 6, 5, 4, 3, 2, 1, 0, 14, 13, 24, 23, 12, 11, 10, 22, 21, 20, 19, 18, 17, 16, 9, 15, 25 }
  uselistorder label %dec_label_pc_22e8, { 1, 0 }
  uselistorder label %dec_label_pc_2268, { 1, 0 }
  uselistorder label %dec_label_pc_21bc, { 1, 0 }
  uselistorder label %dec_label_pc_2160, { 1, 0, 3, 2 }
  uselistorder label %dec_label_pc_2142, { 1, 0 }
  uselistorder label %dec_label_pc_2108, { 1, 0 }
  uselistorder label %dec_label_pc_2077, { 1, 0 }
  uselistorder label %dec_label_pc_2044, { 1, 0 }
  uselistorder label %dec_label_pc_1fdb, { 1, 0 }
  uselistorder label %dec_label_pc_1f80, { 1, 0 }
}

define i64 @global_var_access() local_unnamed_addr {
dec_label_pc_23a0:
  %0 = load i32, i32* @global_counter, align 4, !insn.addr !635
  %1 = add i32 %0, 1, !insn.addr !636
  %2 = zext i32 %1 to i64, !insn.addr !636
  store i32 %1, i32* @global_counter, align 4, !insn.addr !637
  ret i64 %2, !insn.addr !638
}

define i64 @global_var_read() local_unnamed_addr {
dec_label_pc_23c0:
  %0 = load i32, i32* @global_counter, align 4, !insn.addr !639
  %1 = mul i32 %0, 2, !insn.addr !640
  %2 = zext i32 %1 to i64, !insn.addr !640
  ret i64 %2, !insn.addr !641
}

define i64 @global_array_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_23d0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !642
  %1 = icmp ult i32 %0, 10
  br i1 %1, label %dec_label_pc_23d9, label %dec_label_pc_23f0, !insn.addr !643

dec_label_pc_23d9:                                ; preds = %dec_label_pc_23d0
  %sext = mul i64 %arg1, 4294967296
  %2 = ashr exact i64 %sext, 30, !insn.addr !644
  %3 = add i64 %2, ptrtoint ([10 x i32]* @global_array to i64), !insn.addr !644
  %4 = inttoptr i64 %3 to i32*, !insn.addr !644
  %5 = load i32, i32* %4, align 4, !insn.addr !644
  %6 = zext i32 %5 to i64, !insn.addr !644
  ret i64 %6, !insn.addr !645

dec_label_pc_23f0:                                ; preds = %dec_label_pc_23d0
  ret i64 4294967295, !insn.addr !646
}

define i64 @static_local(i64 %arg1) local_unnamed_addr {
dec_label_pc_2400:
  %0 = trunc i64 %arg1 to i32, !insn.addr !647
  %1 = icmp eq i32 %0, 0, !insn.addr !647
  %2 = icmp eq i1 %1, false, !insn.addr !648
  %spec.select = select i1 %2, i64 0, i64 ptrtoint (i32* @global_var_6031 to i64)
  %3 = trunc i64 %spec.select to i32, !insn.addr !649
  store i32 %3, i32* bitcast (i64* @global_var_6030 to i32*), align 8, !insn.addr !649
  ret i64 %spec.select, !insn.addr !650

; uselistorder directives
  uselistorder i64 %spec.select, { 1, 0 }
}

define i64 @call_static_func(i64 %arg1) local_unnamed_addr {
dec_label_pc_2420:
  %factor = mul i64 %arg1, 2
  %0 = and i64 %factor, 4294967294, !insn.addr !651
  %1 = or i64 %0, 1, !insn.addr !651
  ret i64 %1, !insn.addr !652
}

define i64 @access_extern_global() local_unnamed_addr {
dec_label_pc_2430:
  %0 = load i32, i32* @extern_global_var, align 4, !insn.addr !653
  %1 = add i32 %0, 100, !insn.addr !654
  %2 = zext i32 %1 to i64, !insn.addr !654
  ret i64 %2, !insn.addr !655
}

define i64 @call_extern_func() local_unnamed_addr {
dec_label_pc_2440:
  %0 = call i32 @extern_function(i32 5), !insn.addr !656
  %1 = sext i32 %0 to i64, !insn.addr !656
  ret i64 %1, !insn.addr !656
}

define i64 @read_const_data() local_unnamed_addr {
dec_label_pc_2450:
  ret i64 ptrtoint (i32* @global_var_6046 to i64), !insn.addr !657
}

define i64 @access_bss_var() local_unnamed_addr {
dec_label_pc_2470:
  ret i64 0, !insn.addr !658
}

define i64 @access_bss_buffer() local_unnamed_addr {
dec_label_pc_2480:
  ret i64 0, !insn.addr !659
}

define i64 @global_struct_access() local_unnamed_addr {
dec_label_pc_2490:
  ret i64 30, !insn.addr !660
}

define i64 @set_file_static(i64 %arg1) local_unnamed_addr {
dec_label_pc_24a0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg1 to i32, !insn.addr !661
  store i32 %2, i32* @file_scope_static, align 4, !insn.addr !661
  ret i64 %1, !insn.addr !662
}

define i64 @get_file_static() local_unnamed_addr {
dec_label_pc_24b0:
  %0 = load i32, i32* @file_scope_static, align 4, !insn.addr !663
  %1 = zext i32 %0 to i64, !insn.addr !663
  ret i64 %1, !insn.addr !664
}

define i64 @set_global_callback(i64 %arg1) local_unnamed_addr {
dec_label_pc_24c0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  store i64 %arg1, i64* bitcast (i32 (i32)** @global_func_ptr to i64*), align 8, !insn.addr !665
  ret i64 %1, !insn.addr !666
}

define i64 @call_global_callback() local_unnamed_addr {
dec_label_pc_24d0:
  %0 = load i32 (i32)*, i32 (i32)** @global_func_ptr, align 8, !insn.addr !667
  %1 = icmp eq i32 (i32)* %0, null, !insn.addr !668
  br i1 %1, label %dec_label_pc_24e8, label %dec_label_pc_24e0, !insn.addr !669

dec_label_pc_24e0:                                ; preds = %dec_label_pc_24d0
  %2 = ptrtoint i32 (i32)* %0 to i64, !insn.addr !667
  ret i64 %2, !insn.addr !670

dec_label_pc_24e8:                                ; preds = %dec_label_pc_24d0
  ret i64 4294967295, !insn.addr !671

; uselistorder directives
  uselistorder i32 (i32)* %0, { 1, 0 }
}

define i64 @global_heap_store(i64 %arg1) local_unnamed_addr {
dec_label_pc_24f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %arg1, 0, !insn.addr !672
  br i1 %2, label %dec_label_pc_2500, label %dec_label_pc_24f9, !insn.addr !673

dec_label_pc_24f9:                                ; preds = %dec_label_pc_24f0
  %3 = and i64 %1, 4294967295, !insn.addr !674
  ret i64 %3, !insn.addr !675

dec_label_pc_2500:                                ; preds = %dec_label_pc_24f0
  ret i64 4294967295, !insn.addr !676
}

define i64 @static_complex_init() local_unnamed_addr {
dec_label_pc_2510:
  ret i64 15, !insn.addr !677
}

define i64 @tls_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_2520:
  %0 = mul i64 %arg1, 2, !insn.addr !678
  %1 = and i64 %0, 4294967294, !insn.addr !678
  ret i64 %1, !insn.addr !679
}

define i64 @init_order_test() local_unnamed_addr {
dec_label_pc_2530:
  ret i64 20, !insn.addr !680
}

define void @test_static_global() local_unnamed_addr {
dec_label_pc_2540:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3438 to i8*)), !insn.addr !681
  %1 = load i32, i32* @global_counter, align 4, !insn.addr !682
  %2 = add i32 %1, 1, !insn.addr !683
  %3 = zext i32 %2 to i64, !insn.addr !683
  store i32 %2, i32* @global_counter, align 4, !insn.addr !684
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3460, i64 0, i64 0), i64 %3), !insn.addr !685
  %5 = load i32, i32* @global_counter, align 4, !insn.addr !686
  %6 = mul i32 %5, 2, !insn.addr !687
  %7 = zext i32 %6 to i64, !insn.addr !687
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3488, i64 0, i64 0), i64 %7), !insn.addr !688
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_34b0, i64 0, i64 0), i64 5), !insn.addr !689
  store i32 1, i32* bitcast (i64* @global_var_6030 to i32*), align 8, !insn.addr !690
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_31d1, i64 0, i64 0), i64 1), !insn.addr !691
  store i32 ptrtoint (i32* @global_var_6031 to i32), i32* bitcast (i64* @global_var_6030 to i32*), align 8, !insn.addr !692
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_31d1, i64 0, i64 0), i64 ptrtoint (i32* @global_var_6031 to i64)), !insn.addr !693
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_34d8, i64 0, i64 0), i64 11), !insn.addr !694
  %13 = load i32, i32* @extern_global_var, align 4, !insn.addr !695
  %14 = add i32 %13, 100, !insn.addr !696
  %15 = zext i32 %14 to i64, !insn.addr !696
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3500, i64 0, i64 0), i64 %15), !insn.addr !697
  %17 = call i32 @extern_function(i32 5), !insn.addr !698
  %18 = zext i32 %17 to i64, !insn.addr !699
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3528, i64 0, i64 0), i64 %18), !insn.addr !700
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3550, i64 0, i64 0), i64 ptrtoint (i32* @global_var_6046 to i64)), !insn.addr !701
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3578, i64 0, i64 0), i64 zext (i32 xor (i32 ptrtoint (i32* @global_var_6046 to i32), i32 ptrtoint (i32* @global_var_6046 to i32)) to i64)), !insn.addr !702
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3598, i64 0, i64 0), i64 zext (i32 xor (i32 xor (i32 ptrtoint (i32* @global_var_6046 to i32), i32 ptrtoint (i32* @global_var_6046 to i32)), i32 xor (i32 ptrtoint (i32* @global_var_6046 to i32), i32 ptrtoint (i32* @global_var_6046 to i32))) to i64)), !insn.addr !703
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_35c0, i64 0, i64 0), i64 30), !insn.addr !704
  store i32 50, i32* @file_scope_static, align 4, !insn.addr !705
  %24 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_31ef, i64 0, i64 0), i64 50), !insn.addr !706
  store i64 4928, i64* bitcast (i32 (i32)** @global_func_ptr to i64*), align 8, !insn.addr !707
  %25 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_35e8, i64 0, i64 0), i64 10), !insn.addr !708
  %26 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3610, i64 0, i64 0), i64 100), !insn.addr !709
  %27 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_3638, i64 0, i64 0), i64 15), !insn.addr !710
  %28 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_320c, i64 0, i64 0), i64 20), !insn.addr !711
  %29 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3660, i64 0, i64 0), i64 20), !insn.addr !712
  ret void, !insn.addr !712

; uselistorder directives
  uselistorder i64 20, { 2, 3, 0, 6, 4, 5, 1 }
  uselistorder i64 15, { 6, 2, 0, 1, 7, 4, 5, 3 }
  uselistorder i32 50, { 5, 1, 2, 3, 4, 0 }
  uselistorder i64 30, { 10, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }
  uselistorder i64 ptrtoint (i32* @global_var_6046 to i64), { 1, 0 }
  uselistorder i32 100, { 0, 2, 1 }
  uselistorder i64 ptrtoint (i32* @global_var_6031 to i64), { 1, 0 }
  uselistorder i32 2, { 0, 1, 4, 2, 5, 3 }
}

define i64 @memop_memset(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2750:
  %0 = icmp eq i64 %arg1, 0, !insn.addr !713
  %1 = icmp eq i64 %arg2, 0, !insn.addr !714
  %or.cond = or i1 %0, %1
  br i1 %or.cond, label %dec_label_pc_2780, label %dec_label_pc_2761, !insn.addr !715

dec_label_pc_2761:                                ; preds = %dec_label_pc_2750
  %2 = trunc i64 %arg3 to i32, !insn.addr !716
  %3 = inttoptr i64 %arg1 to i64*, !insn.addr !717
  %4 = trunc i64 %arg2 to i32, !insn.addr !717
  %5 = call i64* @memset(i64* %3, i32 %2, i32 %4), !insn.addr !717
  %6 = bitcast i64* %5 to i8*, !insn.addr !718
  %7 = load i8, i8* %6, align 1, !insn.addr !718
  %8 = zext i8 %7 to i64, !insn.addr !718
  ret i64 %8, !insn.addr !719

dec_label_pc_2780:                                ; preds = %dec_label_pc_2750
  ret i64 4294967295, !insn.addr !720

; uselistorder directives
  uselistorder i64 %arg2, { 1, 0 }
}

define i64 @memop_memcpy(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2790:
  %0 = icmp eq i64 %arg2, 0, !insn.addr !721
  %1 = icmp eq i64 %arg3, 0, !insn.addr !722
  %2 = or i1 %0, %1
  %3 = icmp eq i1 %2, false, !insn.addr !723
  %4 = icmp eq i1 %3, false, !insn.addr !724
  %5 = icmp eq i64 %arg1, 0, !insn.addr !725
  %or.cond = or i1 %5, %4
  br i1 %or.cond, label %dec_label_pc_27c0, label %dec_label_pc_27ad, !insn.addr !724

dec_label_pc_27ad:                                ; preds = %dec_label_pc_2790
  %6 = inttoptr i64 %arg1 to i64*, !insn.addr !726
  %7 = inttoptr i64 %arg2 to i64*, !insn.addr !726
  %8 = trunc i64 %arg3 to i32, !insn.addr !726
  %9 = call i64* @memcpy(i64* %6, i64* %7, i32 %8), !insn.addr !726
  %10 = ptrtoint i64* %9 to i64, !insn.addr !726
  %11 = add i64 %arg3, -4
  %12 = and i64 %11, -4, !insn.addr !727
  %13 = add i64 %12, %10, !insn.addr !727
  %14 = inttoptr i64 %13 to i32*, !insn.addr !727
  %15 = load i32, i32* %14, align 4, !insn.addr !727
  %16 = zext i32 %15 to i64, !insn.addr !727
  ret i64 %16, !insn.addr !728

dec_label_pc_27c0:                                ; preds = %dec_label_pc_2790
  ret i64 4294967295, !insn.addr !729

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @memop_memmove(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_27d0:
  %0 = icmp eq i64 %arg1, 0, !insn.addr !730
  %1 = icmp ult i64 %arg2, 2
  %or.cond = or i1 %0, %1
  br i1 %or.cond, label %dec_label_pc_2800, label %dec_label_pc_27df, !insn.addr !731

dec_label_pc_27df:                                ; preds = %dec_label_pc_27d0
  %2 = add i64 %arg1, 1, !insn.addr !732
  %3 = inttoptr i64 %2 to i64*, !insn.addr !733
  %4 = inttoptr i64 %arg1 to i64*, !insn.addr !733
  %5 = trunc i64 %arg2 to i32
  %6 = add i32 %5, -1, !insn.addr !733
  %7 = call i64* @memmove(i64* %3, i64* %4, i32 %6), !insn.addr !733
  %8 = inttoptr i64 %2 to i8*, !insn.addr !734
  %9 = load i8, i8* %8, align 1, !insn.addr !734
  %10 = sext i8 %9 to i64, !insn.addr !734
  ret i64 %10, !insn.addr !735

dec_label_pc_2800:                                ; preds = %dec_label_pc_27d0
  ret i64 4294967295, !insn.addr !736

; uselistorder directives
  uselistorder i32 -1, { 10, 0, 3, 5, 1, 6, 2, 7, 8, 9, 4 }
  uselistorder i64 %arg2, { 1, 0 }
}

define i64 @memop_memcmp(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_2810:
  %0 = icmp eq i64 %arg2, 0, !insn.addr !737
  %1 = icmp eq i64 %arg3, 0, !insn.addr !738
  %2 = or i1 %0, %1
  %3 = icmp eq i1 %2, false, !insn.addr !739
  %4 = icmp eq i1 %3, false, !insn.addr !740
  %5 = icmp eq i64 %arg1, 0, !insn.addr !741
  %or.cond = or i1 %5, %4
  br i1 %or.cond, label %dec_label_pc_2850, label %dec_label_pc_2829, !insn.addr !740

dec_label_pc_2829:                                ; preds = %dec_label_pc_2810
  %6 = inttoptr i64 %arg1 to i64*, !insn.addr !742
  %7 = inttoptr i64 %arg2 to i64*, !insn.addr !742
  %8 = trunc i64 %arg3 to i32, !insn.addr !742
  %9 = call i32 @memcmp(i64* %6, i64* %7, i32 %8), !insn.addr !742
  %10 = icmp eq i32 %9, 0, !insn.addr !743
  %11 = icmp eq i1 %10, false, !insn.addr !744
  %12 = icmp slt i32 %9, 0, !insn.addr !745
  %13 = icmp eq i1 %12, false, !insn.addr !746
  %14 = icmp eq i1 %13, %11, !insn.addr !746
  %15 = select i1 %11, i64 4294967295, i64 0
  %16 = select i1 %14, i64 1, i64 %15, !insn.addr !746
  ret i64 %16, !insn.addr !747

dec_label_pc_2850:                                ; preds = %dec_label_pc_2810
  ret i64 0, !insn.addr !748

; uselistorder directives
  uselistorder i1 %11, { 1, 0 }
}

define i64 @memop_bzero(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2860:
  %0 = icmp eq i64 %arg1, 0, !insn.addr !749
  br i1 %0, label %dec_label_pc_287f, label %dec_label_pc_2869, !insn.addr !750

dec_label_pc_2869:                                ; preds = %dec_label_pc_2860
  %1 = inttoptr i64 %arg1 to i64*, !insn.addr !751
  %2 = trunc i64 %arg2 to i32, !insn.addr !751
  %3 = call i64* @memset(i64* %1, i32 0, i32 %2), !insn.addr !751
  %4 = bitcast i64* %3 to i8*, !insn.addr !752
  %5 = load i8, i8* %4, align 1, !insn.addr !752
  %6 = zext i8 %5 to i64, !insn.addr !752
  ret i64 %6, !insn.addr !753

dec_label_pc_287f:                                ; preds = %dec_label_pc_2860
  ret i64 4294967295, !insn.addr !754

; uselistorder directives
  uselistorder i64* (i64*, i32, i32)* @memset, { 1, 0, 2 }
}

define i64 @memop_bcopy(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2890:
  %0 = icmp eq i64 %arg2, 0, !insn.addr !755
  %1 = icmp eq i64 %arg3, 0, !insn.addr !756
  %2 = or i1 %0, %1
  %3 = icmp eq i1 %2, false, !insn.addr !757
  %4 = icmp eq i1 %3, false, !insn.addr !758
  %5 = icmp eq i64 %arg1, 0, !insn.addr !759
  %or.cond = or i1 %5, %4
  br i1 %or.cond, label %dec_label_pc_28c8, label %dec_label_pc_28ae, !insn.addr !758

dec_label_pc_28ae:                                ; preds = %dec_label_pc_2890
  %6 = inttoptr i64 %arg2 to i64*, !insn.addr !760
  %7 = inttoptr i64 %arg1 to i64*, !insn.addr !760
  %8 = trunc i64 %arg3 to i32, !insn.addr !760
  %9 = call i64* @memmove(i64* %6, i64* %7, i32 %8), !insn.addr !760
  %10 = bitcast i64* %9 to i8*, !insn.addr !761
  %11 = load i8, i8* %10, align 1, !insn.addr !761
  %12 = zext i8 %11 to i64, !insn.addr !761
  ret i64 %12, !insn.addr !762

dec_label_pc_28c8:                                ; preds = %dec_label_pc_2890
  ret i64 4294967295, !insn.addr !763

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @memop_unaligned_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_28d0:
  %0 = icmp eq i64 %arg1, 0, !insn.addr !764
  br i1 %0, label %dec_label_pc_28dd, label %dec_label_pc_28d9, !insn.addr !765

dec_label_pc_28d9:                                ; preds = %dec_label_pc_28d0
  %1 = add i64 %arg1, 1, !insn.addr !766
  %2 = inttoptr i64 %1 to i32*, !insn.addr !766
  %3 = load i32, i32* %2, align 4, !insn.addr !766
  %4 = zext i32 %3 to i64, !insn.addr !766
  ret i64 %4, !insn.addr !767

dec_label_pc_28dd:                                ; preds = %dec_label_pc_28d0
  ret i64 4294967295, !insn.addr !768
}

define i64 @memop_memory_barrier(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_28f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %arg1, 0, !insn.addr !769
  br i1 %2, label %dec_label_pc_2906, label %dec_label_pc_28f9, !insn.addr !770

dec_label_pc_28f9:                                ; preds = %dec_label_pc_28f0
  %3 = mul i64 %1, 2, !insn.addr !771
  %4 = and i64 %3, 4294967294, !insn.addr !771
  ret i64 %4, !insn.addr !772

dec_label_pc_2906:                                ; preds = %dec_label_pc_28f0
  ret i64 4294967295, !insn.addr !773

; uselistorder directives
  uselistorder i64 4294967294, { 2, 6, 4, 0, 1, 3, 5, 7 }
  uselistorder i64 2, { 1, 13, 2, 3, 0, 7, 8, 9, 10, 14, 11, 12, 4, 5, 6 }
}

define void @test_memory_op_functions() local_unnamed_addr {
dec_label_pc_2910:
  %stack_var_-336 = alloca i64, align 8
  %stack_var_-320 = alloca i64, align 8
  %stack_var_-290 = alloca i64, align 8
  %stack_var_-291 = alloca i64, align 8
  %cmp_a_-344 = alloca [3 x i32], align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !774
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_3688 to i8*)), !insn.addr !775
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3228, i64 0, i64 0), i64 65), !insn.addr !776
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3239, i64 0, i64 0), i64 50), !insn.addr !777
  store i64 8245905578810697032, i64* %stack_var_-291, align 8, !insn.addr !778
  %4 = call i64* @memmove(i64* nonnull %stack_var_-290, i64* nonnull %stack_var_-291, i32 9), !insn.addr !779
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_324a, i64 0, i64 0), i8 72), !insn.addr !780
  store i64 8589934593, i64* %stack_var_-336, align 8, !insn.addr !781
  store i64 8589934593, i64* %stack_var_-320, align 8, !insn.addr !782
  %6 = call i32 @memcmp(i64* nonnull %stack_var_-336, i64* nonnull %stack_var_-320, i32 12), !insn.addr !783
  %7 = icmp eq i32 %6, 0, !insn.addr !784
  %8 = icmp eq i1 %7, false, !insn.addr !785
  %9 = icmp slt i32 %6, 0, !insn.addr !786
  %10 = icmp eq i1 %9, false, !insn.addr !787
  %11 = icmp eq i1 %10, %8, !insn.addr !787
  %12 = select i1 %8, i64 4294967295, i64 0
  %13 = select i1 %11, i64 1, i64 %12, !insn.addr !787
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_325b, i64 0, i64 0), i64 %13), !insn.addr !788
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_326c, i64 0, i64 0), i64 0), !insn.addr !789
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_327d, i64 0, i64 0), i64 1), !insn.addr !790
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_328e, i64 0, i64 0), i32 67305985), !insn.addr !791
  %18 = bitcast [3 x i32]* %cmp_a_-344 to i64*, !insn.addr !792
  %19 = load i64, i64* %18, align 8, !insn.addr !792
  %20 = trunc i64 %19 to i32, !insn.addr !792
  %21 = insertvalue [3 x i32] undef, i32 %20, 0, !insn.addr !792
  store [3 x i32] %21, [3 x i32]* %cmp_a_-344, align 8, !insn.addr !792
  %22 = call i64 @__readfsqword(i64 40), !insn.addr !793
  %23 = icmp eq i64 %0, %22, !insn.addr !793
  %24 = icmp eq i1 %23, false, !insn.addr !794
  br i1 %24, label %dec_label_pc_2ac2, label %dec_label_pc_2aa6, !insn.addr !794

dec_label_pc_2aa6:                                ; preds = %dec_label_pc_2910
  %25 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_32a1, i64 0, i64 0), i64 10), !insn.addr !795
  ret void, !insn.addr !795

dec_label_pc_2ac2:                                ; preds = %dec_label_pc_2910
  call void @__stack_chk_fail(), !insn.addr !796
  ret void, !insn.addr !797

; uselistorder directives
  uselistorder i1 %8, { 1, 0 }
  uselistorder void ()* @__stack_chk_fail, { 0, 1, 4, 2, 3, 5 }
  uselistorder i64 10, { 2, 5, 3, 0, 4, 6, 7, 1 }
  uselistorder i64 1, { 9, 7, 11, 8, 12, 10, 0, 1, 2, 3, 4, 5, 6 }
  uselistorder i64 4294967295, { 31, 18, 19, 20, 21, 32, 22, 23, 24, 25, 30, 26, 27, 33, 0, 1, 3, 34, 2, 4, 5, 6, 7, 28, 29, 8, 10, 35, 9, 11, 36, 37, 12, 13, 38, 14, 15, 39, 16, 40, 17, 41 }
  uselistorder i1 false, { 26, 3, 27, 5, 0, 4, 6, 7, 1, 8, 2, 9, 29, 30, 31, 32, 33, 34, 35, 10, 11, 12, 13, 14, 15, 16, 28, 17, 18, 19, 20, 21, 22, 23, 24, 36, 37, 25 }
  uselistorder i32 0, { 12, 13, 3, 9, 10, 11, 5, 0, 14, 4, 15, 1, 2, 6, 7, 8 }
  uselistorder i64* (i64*, i64*, i32)* @memmove, { 0, 2, 1, 3 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 50, 8, 7, 6, 5, 4, 3, 2, 1, 0, 51 }
  uselistorder i32 (i8*)* @puts, { 3, 2, 1, 0, 4 }
  uselistorder i64 0, { 54, 55, 56, 57, 58, 59, 52, 60, 61, 62, 63, 53, 64, 65, 66, 67, 68, 69, 150, 151, 48, 152, 153, 154, 16, 70, 49, 155, 156, 157, 50, 158, 159, 23, 160, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 161, 17, 18, 51, 171, 172, 105, 106, 107, 108, 109, 110, 111, 112, 173, 174, 175, 176, 0, 1, 2, 113, 114, 3, 177, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 19, 24, 4, 162, 163, 164, 165, 166, 167, 5, 6, 7, 8, 168, 20, 25, 9, 26, 11, 10, 21, 27, 12, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 13, 28, 146, 14, 29, 169, 22, 15, 170, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 147, 148, 149 }
}

define i32 @extern_function(i32 %x) local_unnamed_addr {
dec_label_pc_2ad0:
  %0 = mul i32 %x, 3, !insn.addr !798
  ret i32 %0, !insn.addr !799

; uselistorder directives
  uselistorder i32 3, { 4, 5, 2, 0, 6, 7, 8, 9, 3, 1, 10, 11 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_2ad8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !800

; uselistorder directives
  uselistorder i32 1, { 9, 77, 78, 79, 80, 81, 82, 83, 84, 139, 138, 137, 136, 135, 8, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 151, 101, 102, 103, 85, 7, 6, 5, 145, 104, 107, 108, 105, 106, 76, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 134, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 28, 4, 119, 146, 120, 31, 30, 29, 32, 1, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 44, 45, 147, 121, 49, 48, 47, 46, 50, 122, 56, 55, 54, 53, 52, 51, 0, 148, 123, 60, 59, 58, 57, 124, 125, 126, 127, 128, 129, 130, 131, 132, 149, 133, 140, 66, 65, 64, 63, 62, 61, 150, 141, 72, 71, 70, 69, 68, 67, 143, 142, 74, 73, 10, 3, 2, 144, 75 }
}

declare void @free(i64*) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i64* @memset(i64*, i32, i32) local_unnamed_addr

declare i32 @memcmp(i64*, i64*, i32) local_unnamed_addr

declare i64* @calloc(i32, i32) local_unnamed_addr

declare i64* @memcpy(i64*, i64*, i32) local_unnamed_addr

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

declare i128 @__asm_movdqa(i128) local_unnamed_addr

declare i128 @__asm_paddd(i128, i128) local_unnamed_addr

declare i128 @__asm_punpcklwd(i128, i128) local_unnamed_addr

declare i128 @__asm_punpckhwd(i128, i128) local_unnamed_addr

declare i128 @__asm_pand(i128, i128) local_unnamed_addr

declare i128 @__asm_packuswb(i128, i128) local_unnamed_addr

declare i64 @__asm_movaps(i128) local_unnamed_addr

declare void @__asm_movups(i128, i128) local_unnamed_addr

declare i128 @__asm_movdqu(i128) local_unnamed_addr

declare i128 @__asm_psrldq(i128, i8) local_unnamed_addr

declare i32 @__asm_movd(i128) local_unnamed_addr

declare i128 @__asm_movd.1(i32) local_unnamed_addr

declare i128 @__asm_pshufd(i128, i8) local_unnamed_addr

declare i128 @__asm_psrlq(i128, i8) local_unnamed_addr

declare i128 @__asm_pmuludq(i128, i128) local_unnamed_addr

declare i128 @__asm_pslld(i128, i8) local_unnamed_addr

declare i128 @__asm_pxor(i128, i128) local_unnamed_addr

declare i64 @__readfsqword(i64) local_unnamed_addr

!0 = !{i64 4096}
!1 = !{i64 4104}
!2 = !{i64 4111}
!3 = !{i64 4114}
!4 = !{i64 4116}
!5 = !{i64 4122}
!6 = !{i64 4388}
!7 = !{i64 4404}
!8 = !{i64 4420}
!9 = !{i64 4436}
!10 = !{i64 4452}
!11 = !{i64 4468}
!12 = !{i64 4484}
!13 = !{i64 4500}
!14 = !{i64 4516}
!15 = !{i64 4532}
!16 = !{i64 4548}
!17 = !{i64 4564}
!18 = !{i64 4580}
!19 = !{i64 4596}
!20 = !{i64 4612}
!21 = !{i64 4628}
!22 = !{i64 4650}
!23 = !{i64 4657}
!24 = !{i64 4664}
!25 = !{i64 4671}
!26 = !{i64 4682}
!27 = !{i64 4719}
!28 = !{i64 4725}
!29 = !{i64 4776}
!30 = !{i64 4840}
!31 = !{i64 4852}
!32 = !{i64 4859}
!33 = !{i64 4862}
!34 = !{i64 4873}
!35 = !{i64 4875}
!36 = !{i64 4882}
!37 = !{i64 4887}
!38 = !{i64 4892}
!39 = !{i64 4900}
!40 = !{i64 4904}
!41 = !{i64 4916}
!42 = !{i64 4932}
!43 = !{i64 4935}
!44 = !{i64 4949}
!45 = !{i64 4964}
!46 = !{i64 4968}
!47 = !{i64 4980}
!48 = !{i64 4988}
!49 = !{i64 4992}
!50 = !{i64 4997}
!51 = !{i64 5002}
!52 = !{i64 5007}
!53 = !{i64 5011}
!54 = !{i64 5015}
!55 = !{i64 5028}
!56 = !{i64 5031}
!57 = !{i64 5044}
!58 = !{i64 5055}
!59 = !{i64 5062}
!60 = !{i64 5064}
!61 = !{i64 5072}
!62 = !{i64 5083}
!63 = !{i64 5091}
!64 = !{i64 5100}
!65 = !{i64 5117}
!66 = !{i64 5120}
!67 = !{i64 5128}
!68 = !{i64 5137}
!69 = !{i64 5145}
!70 = !{i64 5153}
!71 = !{i64 5161}
!72 = !{i64 5168}
!73 = !{i64 5172}
!74 = !{i64 5176}
!75 = !{i64 5181}
!76 = !{i64 5185}
!77 = !{i64 5189}
!78 = !{i64 5193}
!79 = !{i64 5198}
!80 = !{i64 5202}
!81 = !{i64 5206}
!82 = !{i64 5210}
!83 = !{i64 5214}
!84 = !{i64 5218}
!85 = !{i64 5222}
!86 = !{i64 5226}
!87 = !{i64 5230}
!88 = !{i64 5234}
!89 = !{i64 5238}
!90 = !{i64 5242}
!91 = !{i64 5246}
!92 = !{i64 5250}
!93 = !{i64 5254}
!94 = !{i64 5258}
!95 = !{i64 5262}
!96 = !{i64 5266}
!97 = !{i64 5270}
!98 = !{i64 5274}
!99 = !{i64 5278}
!100 = !{i64 5281}
!101 = !{i64 5299}
!102 = !{i64 5308}
!103 = !{i64 5283}
!104 = !{i64 5317}
!105 = !{i64 5318}
!106 = !{i64 5323}
!107 = !{i64 5328}
!108 = !{i64 5345}
!109 = !{i64 5360}
!110 = !{i64 5366}
!111 = !{i64 5341}
!112 = !{i64 5378}
!113 = !{i64 5389}
!114 = !{i64 5395}
!115 = !{i64 5402}
!116 = !{i64 5405}
!117 = !{i64 5407}
!118 = !{i64 5423}
!119 = !{i64 5426}
!120 = !{i64 5333}
!121 = !{i64 5428}
!122 = !{i64 5434}
!123 = !{i64 5452}
!124 = !{i64 5460}
!125 = !{i64 5468}
!126 = !{i64 5482}
!127 = !{i64 5486}
!128 = !{i64 5489}
!129 = !{i64 5496}
!130 = !{i64 5500}
!131 = !{i64 5504}
!132 = !{i64 5508}
!133 = !{i64 5513}
!134 = !{i64 5517}
!135 = !{i64 5520}
!136 = !{i64 5524}
!137 = !{i64 5527}
!138 = !{i64 5530}
!139 = !{i64 5538}
!140 = !{i64 5542}
!141 = !{i64 5546}
!142 = !{i64 5551}
!143 = !{i64 5553}
!144 = !{i64 5557}
!145 = !{i64 5560}
!146 = !{i64 5566}
!147 = !{i64 5568}
!148 = !{i64 5571}
!149 = !{i64 5574}
!150 = !{i64 5576}
!151 = !{i64 5579}
!152 = !{i64 5586}
!153 = !{i64 5595}
!154 = !{i64 5598}
!155 = !{i64 5622}
!156 = !{i64 5627}
!157 = !{i64 5632}
!158 = !{i64 5644}
!159 = !{i64 5659}
!160 = !{i64 5661}
!161 = !{i64 5640}
!162 = !{i64 5675}
!163 = !{i64 5686}
!164 = !{i64 5692}
!165 = !{i64 5699}
!166 = !{i64 5702}
!167 = !{i64 5704}
!168 = !{i64 5720}
!169 = !{i64 5723}
!170 = !{i64 5673}
!171 = !{i64 5725}
!172 = !{i64 5731}
!173 = !{i64 5743}
!174 = !{i64 5751}
!175 = !{i64 5755}
!176 = !{i64 5758}
!177 = !{i64 5766}
!178 = !{i64 5774}
!179 = !{i64 5788}
!180 = !{i64 5792}
!181 = !{i64 5795}
!182 = !{i64 5800}
!183 = !{i64 5804}
!184 = !{i64 5808}
!185 = !{i64 5812}
!186 = !{i64 5816}
!187 = !{i64 5821}
!188 = !{i64 5825}
!189 = !{i64 5829}
!190 = !{i64 5832}
!191 = !{i64 5836}
!192 = !{i64 5839}
!193 = !{i64 5842}
!194 = !{i64 5850}
!195 = !{i64 5861}
!196 = !{i64 5866}
!197 = !{i64 5868}
!198 = !{i64 5871}
!199 = !{i64 5874}
!200 = !{i64 5881}
!201 = !{i64 5883}
!202 = !{i64 5886}
!203 = !{i64 5891}
!204 = !{i64 5893}
!205 = !{i64 5896}
!206 = !{i64 5903}
!207 = !{i64 5912}
!208 = !{i64 5915}
!209 = !{i64 5942}
!210 = !{i64 5947}
!211 = !{i64 5961}
!212 = !{i64 5983}
!213 = !{i64 6007}
!214 = !{i64 6031}
!215 = !{i64 6055}
!216 = !{i64 6079}
!217 = !{i64 6103}
!218 = !{i64 6110}
!219 = !{i64 6127}
!220 = !{i64 6131}
!221 = !{i64 6155}
!222 = !{i64 6172}
!223 = !{i64 6181}
!224 = !{i64 6209}
!225 = !{i64 6224}
!226 = !{i64 6245}
!227 = !{i64 6250}
!228 = !{i64 6253}
!229 = !{i64 6230}
!230 = !{i64 6262}
!231 = !{i64 6264}
!232 = !{i64 6269}
!233 = !{i64 6272}
!234 = !{i64 6280}
!235 = !{i64 6288}
!236 = !{i64 6302}
!237 = !{i64 6306}
!238 = !{i64 6309}
!239 = !{i64 6312}
!240 = !{i64 6316}
!241 = !{i64 6320}
!242 = !{i64 6324}
!243 = !{i64 6329}
!244 = !{i64 6333}
!245 = !{i64 6336}
!246 = !{i64 6340}
!247 = !{i64 6343}
!248 = !{i64 6346}
!249 = !{i64 6354}
!250 = !{i64 6365}
!251 = !{i64 6370}
!252 = !{i64 6372}
!253 = !{i64 6375}
!254 = !{i64 6378}
!255 = !{i64 6384}
!256 = !{i64 6386}
!257 = !{i64 6389}
!258 = !{i64 6398}
!259 = !{i64 6400}
!260 = !{i64 6402}
!261 = !{i64 6404}
!262 = !{i64 6408}
!263 = !{i64 6423}
!264 = !{i64 6448}
!265 = !{i64 6454}
!266 = !{i64 6470}
!267 = !{i64 6475}
!268 = !{i64 6478}
!269 = !{i64 6489}
!270 = !{i64 6498}
!271 = !{i64 6501}
!272 = !{i64 6512}
!273 = !{i64 6519}
!274 = !{i64 6523}
!275 = !{i64 6526}
!276 = !{i64 6528}
!277 = !{i64 6532}
!278 = !{i64 6536}
!279 = !{i64 6540}
!280 = !{i64 6543}
!281 = !{i64 6545}
!282 = !{i64 6551}
!283 = !{i64 6556}
!284 = !{i64 6559}
!285 = !{i64 6563}
!286 = !{i64 6567}
!287 = !{i64 6572}
!288 = !{i64 6576}
!289 = !{i64 6581}
!290 = !{i64 6584}
!291 = !{i64 6589}
!292 = !{i64 6597}
!293 = !{i64 6601}
!294 = !{i64 6606}
!295 = !{i64 6608}
!296 = !{i64 6611}
!297 = !{i64 6618}
!298 = !{i64 6620}
!299 = !{i64 6625}
!300 = !{i64 6634}
!301 = !{i64 6640}
!302 = !{i64 6672}
!303 = !{i64 6688}
!304 = !{i64 6693}
!305 = !{i64 6696}
!306 = !{i64 6698}
!307 = !{i64 6717}
!308 = !{i64 6724}
!309 = !{i64 6727}
!310 = !{i64 6735}
!311 = !{i64 6738}
!312 = !{i64 6740}
!313 = !{i64 6748}
!314 = !{i64 6758}
!315 = !{i64 6767}
!316 = !{i64 6771}
!317 = !{i64 6786}
!318 = !{i64 6802}
!319 = !{i64 6807}
!320 = !{i64 6816}
!321 = !{i64 6837}
!322 = !{i64 6842}
!323 = !{i64 6845}
!324 = !{i64 6822}
!325 = !{i64 6854}
!326 = !{i64 6856}
!327 = !{i64 6865}
!328 = !{i64 6868}
!329 = !{i64 6876}
!330 = !{i64 6884}
!331 = !{i64 6898}
!332 = !{i64 6902}
!333 = !{i64 6905}
!334 = !{i64 6912}
!335 = !{i64 6916}
!336 = !{i64 6920}
!337 = !{i64 6924}
!338 = !{i64 6928}
!339 = !{i64 6933}
!340 = !{i64 6937}
!341 = !{i64 6941}
!342 = !{i64 6944}
!343 = !{i64 6948}
!344 = !{i64 6951}
!345 = !{i64 6954}
!346 = !{i64 6962}
!347 = !{i64 6973}
!348 = !{i64 6978}
!349 = !{i64 6980}
!350 = !{i64 6983}
!351 = !{i64 6986}
!352 = !{i64 6992}
!353 = !{i64 6994}
!354 = !{i64 6997}
!355 = !{i64 7006}
!356 = !{i64 7008}
!357 = !{i64 7010}
!358 = !{i64 7012}
!359 = !{i64 7016}
!360 = !{i64 7031}
!361 = !{i64 7056}
!362 = !{i64 7074}
!363 = !{i64 7079}
!364 = !{i64 7082}
!365 = !{i64 7063}
!366 = !{i64 7087}
!367 = !{i64 7091}
!368 = !{i64 7106}
!369 = !{i64 7120}
!370 = !{i64 7138}
!371 = !{i64 7143}
!372 = !{i64 7146}
!373 = !{i64 7149}
!374 = !{i64 7151}
!375 = !{i64 7165}
!376 = !{i64 7170}
!377 = !{i64 7174}
!378 = !{i64 7177}
!379 = !{i64 7179}
!380 = !{i64 7185}
!381 = !{i64 7193}
!382 = !{i64 7201}
!383 = !{i64 7210}
!384 = !{i64 7220}
!385 = !{i64 7232}
!386 = !{i64 7252}
!387 = !{i64 7257}
!388 = !{i64 7260}
!389 = !{i64 7262}
!390 = !{i64 7264}
!391 = !{i64 7272}
!392 = !{i64 7275}
!393 = !{i64 7280}
!394 = !{i64 7285}
!395 = !{i64 7288}
!396 = !{i64 7298}
!397 = !{i64 7303}
!398 = !{i64 7306}
!399 = !{i64 7308}
!400 = !{i64 7311}
!401 = !{i64 7316}
!402 = !{i64 7320}
!403 = !{i64 7325}
!404 = !{i64 7328}
!405 = !{i64 7368}
!406 = !{i64 7343}
!407 = !{i64 7350}
!408 = !{i64 7353}
!409 = !{i64 7361}
!410 = !{i64 7371}
!411 = !{i64 7375}
!412 = !{i64 7378}
!413 = !{i64 7387}
!414 = !{i64 7391}
!415 = !{i64 7396}
!416 = !{i64 7399}
!417 = !{i64 7420}
!418 = !{i64 7425}
!419 = !{i64 7428}
!420 = !{i64 7430}
!421 = !{i64 7432}
!422 = !{i64 7436}
!423 = !{i64 7441}
!424 = !{i64 7456}
!425 = !{i64 7470}
!426 = !{i64 7475}
!427 = !{i64 7478}
!428 = !{i64 7488}
!429 = !{i64 7501}
!430 = !{i64 7504}
!431 = !{i64 7517}
!432 = !{i64 7530}
!433 = !{i64 7538}
!434 = !{i64 7543}
!435 = !{i64 7553}
!436 = !{i64 7565}
!437 = !{i64 7575}
!438 = !{i64 7588}
!439 = !{i64 7590}
!440 = !{i64 7595}
!441 = !{i64 7616}
!442 = !{i64 7631}
!443 = !{i64 7636}
!444 = !{i64 7639}
!445 = !{i64 7621}
!446 = !{i64 7648}
!447 = !{i64 7650}
!448 = !{i64 7655}
!449 = !{i64 7658}
!450 = !{i64 7662}
!451 = !{i64 7670}
!452 = !{i64 7684}
!453 = !{i64 7688}
!454 = !{i64 7691}
!455 = !{i64 7696}
!456 = !{i64 7700}
!457 = !{i64 7704}
!458 = !{i64 7708}
!459 = !{i64 7712}
!460 = !{i64 7715}
!461 = !{i64 7719}
!462 = !{i64 7722}
!463 = !{i64 7725}
!464 = !{i64 7730}
!465 = !{i64 7741}
!466 = !{i64 7746}
!467 = !{i64 7748}
!468 = !{i64 7751}
!469 = !{i64 7757}
!470 = !{i64 7759}
!471 = !{i64 7768}
!472 = !{i64 7771}
!473 = !{i64 7773}
!474 = !{i64 7775}
!475 = !{i64 7778}
!476 = !{i64 7787}
!477 = !{i64 7802}
!478 = !{i64 7807}
!479 = !{i64 7810}
!480 = !{i64 7834}
!481 = !{i64 7842}
!482 = !{i64 7847}
!483 = !{i64 7850}
!484 = !{i64 7855}
!485 = !{i64 7860}
!486 = !{i64 7863}
!487 = !{i64 7867}
!488 = !{i64 7878}
!489 = !{i64 7886}
!490 = !{i64 7889}
!491 = !{i64 7894}
!492 = !{i64 7902}
!493 = !{i64 7913}
!494 = !{i64 7918}
!495 = !{i64 7920}
!496 = !{i64 7933}
!497 = !{i64 7938}
!498 = !{i64 7941}
!499 = !{i64 7946}
!500 = !{i64 7951}
!501 = !{i64 7957}
!502 = !{i64 7968}
!503 = !{i64 7988}
!504 = !{i64 8004}
!505 = !{i64 8014}
!506 = !{i64 8019}
!507 = !{i64 8022}
!508 = !{i64 8028}
!509 = !{i64 8039}
!510 = !{i64 8050}
!511 = !{i64 8054}
!512 = !{i64 8059}
!513 = !{i64 8078}
!514 = !{i64 8093}
!515 = !{i64 8101}
!516 = !{i64 8104}
!517 = !{i64 8110}
!518 = !{i64 8114}
!519 = !{i64 8118}
!520 = !{i64 8123}
!521 = !{i64 8127}
!522 = !{i64 8131}
!523 = !{i64 8136}
!524 = !{i64 8140}
!525 = !{i64 8144}
!526 = !{i64 8147}
!527 = !{i64 8150}
!528 = !{i64 8172}
!529 = !{i64 8179}
!530 = !{i64 8196}
!531 = !{i64 8200}
!532 = !{i64 8210}
!533 = !{i64 8218}
!534 = !{i64 8221}
!535 = !{i64 8227}
!536 = !{i64 8235}
!537 = !{i64 8246}
!538 = !{i64 8250}
!539 = !{i64 8255}
!540 = !{i64 8274}
!541 = !{i64 8284}
!542 = !{i64 8292}
!543 = !{i64 8295}
!544 = !{i64 8301}
!545 = !{i64 8306}
!546 = !{i64 8325}
!547 = !{i64 8335}
!548 = !{i64 8343}
!549 = !{i64 8346}
!550 = !{i64 8357}
!551 = !{i64 8362}
!552 = !{i64 8367}
!553 = !{i64 8370}
!554 = !{i64 8376}
!555 = !{i64 8384}
!556 = !{i64 8406}
!557 = !{i64 8411}
!558 = !{i64 8416}
!559 = !{i64 8424}
!560 = !{i64 8442}
!561 = !{i64 8447}
!562 = !{i64 8450}
!563 = !{i64 8456}
!564 = !{i64 8458}
!565 = !{i64 8466}
!566 = !{i64 8469}
!567 = !{i64 8478}
!568 = !{i64 8482}
!569 = !{i64 8485}
!570 = !{i64 8499}
!571 = !{i64 8504}
!572 = !{i64 8507}
!573 = !{i64 8509}
!574 = !{i64 8512}
!575 = !{i64 8517}
!576 = !{i64 8522}
!577 = !{i64 8527}
!578 = !{i64 8530}
!579 = !{i64 8792}
!580 = !{i64 8561}
!581 = !{i64 8568}
!582 = !{i64 8585}
!583 = !{i64 8589}
!584 = !{i64 8599}
!585 = !{i64 8604}
!586 = !{i64 8607}
!587 = !{i64 8613}
!588 = !{i64 8621}
!589 = !{i64 8633}
!590 = !{i64 8650}
!591 = !{i64 8669}
!592 = !{i64 8674}
!593 = !{i64 8679}
!594 = !{i64 8681}
!595 = !{i64 8687}
!596 = !{i64 8702}
!597 = !{i64 8707}
!598 = !{i64 8713}
!599 = !{i64 8716}
!600 = !{i64 8727}
!601 = !{i64 8738}
!602 = !{i64 8747}
!603 = !{i64 8762}
!604 = !{i64 8774}
!605 = !{i64 8777}
!606 = !{i64 8789}
!607 = !{i64 8795}
!608 = !{i64 8799}
!609 = !{i64 8802}
!610 = !{i64 8811}
!611 = !{i64 8816}
!612 = !{i64 8821}
!613 = !{i64 8824}
!614 = !{i64 8837}
!615 = !{i64 8846}
!616 = !{i64 8868}
!617 = !{i64 8885}
!618 = !{i64 8893}
!619 = !{i64 8896}
!620 = !{i64 8921}
!621 = !{i64 8929}
!622 = !{i64 8934}
!623 = !{i64 8950}
!624 = !{i64 8957}
!625 = !{i64 8982}
!626 = !{i64 8987}
!627 = !{i64 9009}
!628 = !{i64 9014}
!629 = !{i64 9047}
!630 = !{i64 9057}
!631 = !{i64 9095}
!632 = !{i64 9100}
!633 = !{i64 9113}
!634 = !{i64 9118}
!635 = !{i64 9124}
!636 = !{i64 9130}
!637 = !{i64 9133}
!638 = !{i64 9139}
!639 = !{i64 9156}
!640 = !{i64 9162}
!641 = !{i64 9164}
!642 = !{i64 9172}
!643 = !{i64 9175}
!644 = !{i64 9187}
!645 = !{i64 9190}
!646 = !{i64 9205}
!647 = !{i64 9222}
!648 = !{i64 9224}
!649 = !{i64 9235}
!650 = !{i64 9241}
!651 = !{i64 9252}
!652 = !{i64 9256}
!653 = !{i64 9268}
!654 = !{i64 9274}
!655 = !{i64 9277}
!656 = !{i64 9289}
!657 = !{i64 9314}
!658 = !{i64 9334}
!659 = !{i64 9350}
!660 = !{i64 9369}
!661 = !{i64 9380}
!662 = !{i64 9386}
!663 = !{i64 9396}
!664 = !{i64 9402}
!665 = !{i64 9412}
!666 = !{i64 9419}
!667 = !{i64 9428}
!668 = !{i64 9435}
!669 = !{i64 9438}
!670 = !{i64 9440}
!671 = !{i64 9453}
!672 = !{i64 9460}
!673 = !{i64 9463}
!674 = !{i64 9465}
!675 = !{i64 9467}
!676 = !{i64 9477}
!677 = !{i64 9497}
!678 = !{i64 9508}
!679 = !{i64 9511}
!680 = !{i64 9529}
!681 = !{i64 9555}
!682 = !{i64 9560}
!683 = !{i64 9578}
!684 = !{i64 9583}
!685 = !{i64 9589}
!686 = !{i64 9594}
!687 = !{i64 9612}
!688 = !{i64 9617}
!689 = !{i64 9641}
!690 = !{i64 9656}
!691 = !{i64 9671}
!692 = !{i64 9695}
!693 = !{i64 9701}
!694 = !{i64 9725}
!695 = !{i64 9730}
!696 = !{i64 9748}
!697 = !{i64 9753}
!698 = !{i64 9763}
!699 = !{i64 9780}
!700 = !{i64 9784}
!701 = !{i64 9817}
!702 = !{i64 9838}
!703 = !{i64 9859}
!704 = !{i64 9883}
!705 = !{i64 9902}
!706 = !{i64 9917}
!707 = !{i64 9939}
!708 = !{i64 9955}
!709 = !{i64 9979}
!710 = !{i64 10003}
!711 = !{i64 10027}
!712 = !{i64 10052}
!713 = !{i64 10068}
!714 = !{i64 10076}
!715 = !{i64 10071}
!716 = !{i64 10085}
!717 = !{i64 10090}
!718 = !{i64 10095}
!719 = !{i64 10102}
!720 = !{i64 10117}
!721 = !{i64 10132}
!722 = !{i64 10142}
!723 = !{i64 10148}
!724 = !{i64 10150}
!725 = !{i64 10152}
!726 = !{i64 10164}
!727 = !{i64 10169}
!728 = !{i64 10174}
!729 = !{i64 10182}
!730 = !{i64 10196}
!731 = !{i64 10199}
!732 = !{i64 10215}
!733 = !{i64 10222}
!734 = !{i64 10227}
!735 = !{i64 10232}
!736 = !{i64 10245}
!737 = !{i64 10260}
!738 = !{i64 10266}
!739 = !{i64 10272}
!740 = !{i64 10274}
!741 = !{i64 10276}
!742 = !{i64 10285}
!743 = !{i64 10300}
!744 = !{i64 10303}
!745 = !{i64 10308}
!746 = !{i64 10311}
!747 = !{i64 10318}
!748 = !{i64 10322}
!749 = !{i64 10340}
!750 = !{i64 10343}
!751 = !{i64 10354}
!752 = !{i64 10359}
!753 = !{i64 10366}
!754 = !{i64 10372}
!755 = !{i64 10388}
!756 = !{i64 10397}
!757 = !{i64 10404}
!758 = !{i64 10407}
!759 = !{i64 10409}
!760 = !{i64 10424}
!761 = !{i64 10429}
!762 = !{i64 10436}
!763 = !{i64 10445}
!764 = !{i64 10452}
!765 = !{i64 10455}
!766 = !{i64 10457}
!767 = !{i64 10460}
!768 = !{i64 10466}
!769 = !{i64 10484}
!770 = !{i64 10487}
!771 = !{i64 10499}
!772 = !{i64 10501}
!773 = !{i64 10507}
!774 = !{i64 10530}
!775 = !{i64 10549}
!776 = !{i64 10598}
!777 = !{i64 10622}
!778 = !{i64 10662}
!779 = !{i64 10672}
!780 = !{i64 10696}
!781 = !{i64 10731}
!782 = !{i64 10736}
!783 = !{i64 10749}
!784 = !{i64 10768}
!785 = !{i64 10770}
!786 = !{i64 10775}
!787 = !{i64 10782}
!788 = !{i64 10787}
!789 = !{i64 10824}
!790 = !{i64 10848}
!791 = !{i64 10872}
!792 = !{i64 10889}
!793 = !{i64 10907}
!794 = !{i64 10916}
!795 = !{i64 10941}
!796 = !{i64 10946}
!797 = !{i64 10951}
!798 = !{i64 10964}
!799 = !{i64 10967}
!800 = !{i64 10980}
