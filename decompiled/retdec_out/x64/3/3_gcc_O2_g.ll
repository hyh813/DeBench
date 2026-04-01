source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_6028 = global i64 0
@global_var_818 = local_unnamed_addr global i64 0
@global_var_800 = global i64 0
@global_var_3022 = constant [28 x i8] c"MEM-L1-01 (local_vars): %d\0A\00"
@global_var_303e = constant [29 x i8] c"MEM-L1-02 (local_array): %d\0A\00"
@global_var_305b = constant [30 x i8] c"MEM-L1-03 (local_struct): %d\0A\00"
@global_var_32c0 = constant [34 x i8] c"MEM-L1-04 (address_of_local): %d\0A\00"
@global_var_32e8 = constant [34 x i8] c"MEM-L1-05 (address_of_array): %d\0A\00"
@global_var_3310 = constant [35 x i8] c"MEM-L2-01 (large_stack_frame): %d\0A\00"
@global_var_3079 = constant [27 x i8] c"MEM-L2-02 (vla_stack): %d\0A\00"
@global_var_3094 = constant [30 x i8] c"MEM-L2-03 (alloca_usage): %d\0A\00"
@global_var_30b2 = constant [29 x i8] c"MEM-L2-04 (stack_alias): %d\0A\00"
@global_var_30cf = constant [23 x i8] c"value before free: %d\0A\00"
@global_var_3104 = constant [29 x i8] c"HEAP-L2-01 (heap_basic): %d\0A\00"
@global_var_3121 = constant [30 x i8] c"HEAP-L2-02 (heap_calloc): %d\0A\00"
@global_var_3338 = constant [31 x i8] c"HEAP-L2-03 (heap_realloc): %d\0A\00"
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
@global_var_3e7 = global i32 0
@2 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\88\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_3004 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @2, i64 0, i64 0)
@global_var_44c = global i32 0
@3 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\A0\86\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_30e6 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @3, i64 0, i64 0)
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

define i64 @local_vars(i64 %arg1) local_unnamed_addr {
dec_label_pc_1350:
  %factor = mul i64 %arg1, 2
  %0 = add i64 %factor, 10, !insn.addr !44
  %1 = and i64 %0, 4294967294, !insn.addr !44
  ret i64 %1, !insn.addr !45
}

define i64 @local_array(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1360:
  %0 = alloca i32
  %rdx.0.reg2mem = alloca i64, !insn.addr !46
  %rax.0.reg2mem = alloca i64, !insn.addr !46
  %1 = load i32, i32* %0
  %stack_var_-16 = alloca i64, align 8
  %stack_var_-56 = alloca i64, align 8
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !47
  store i64 %2, i64* %stack_var_-16, align 8, !insn.addr !48
  %3 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !49
  %4 = ptrtoint i64* %stack_var_-16 to i64, !insn.addr !50
  store i64 %3, i64* %rax.0.reg2mem, !insn.addr !50
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !50
  br label %dec_label_pc_1380, !insn.addr !50

dec_label_pc_1380:                                ; preds = %dec_label_pc_1380, %dec_label_pc_1360
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %5 = trunc i64 %rdx.0.reload to i32, !insn.addr !51
  %6 = inttoptr i64 %rax.0.reload to i32*, !insn.addr !51
  store i32 %5, i32* %6, align 4, !insn.addr !51
  %7 = add i64 %rax.0.reload, 4, !insn.addr !52
  %8 = add i64 %rdx.0.reload, %arg1, !insn.addr !53
  %9 = and i64 %8, 4294967295, !insn.addr !53
  %10 = icmp eq i64 %7, %4, !insn.addr !54
  %11 = icmp eq i1 %10, false, !insn.addr !55
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !55
  store i64 %9, i64* %rdx.0.reg2mem, !insn.addr !55
  br i1 %11, label %dec_label_pc_1380, label %dec_label_pc_138d, !insn.addr !55

dec_label_pc_138d:                                ; preds = %dec_label_pc_1380
  %12 = load i64, i64* %stack_var_-16, align 8, !insn.addr !56
  %13 = call i64 @__readfsqword(i64 40), !insn.addr !57
  %14 = icmp eq i64 %12, %13, !insn.addr !57
  %15 = icmp eq i1 %14, false, !insn.addr !58
  br i1 %15, label %dec_label_pc_13a6, label %dec_label_pc_13a1, !insn.addr !58

dec_label_pc_13a1:                                ; preds = %dec_label_pc_138d
  %16 = zext i32 %1 to i64, !insn.addr !59
  ret i64 %16, !insn.addr !60

dec_label_pc_13a6:                                ; preds = %dec_label_pc_138d
  call void @__stack_chk_fail(), !insn.addr !61
  ret i64 ptrtoint (i32* @1 to i64), !insn.addr !62

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
}

define i64 @local_struct(i64 %arg1) local_unnamed_addr {
dec_label_pc_13b0:
  %0 = mul i64 %arg1, 3, !insn.addr !63
  %1 = and i64 %0, 4294967295, !insn.addr !63
  ret i64 %1, !insn.addr !64
}

define i64 @address_of_local(i64 %arg1) local_unnamed_addr {
dec_label_pc_13c0:
  %0 = inttoptr i64 %arg1 to i32*, !insn.addr !65
  store i32 42, i32* %0, align 4, !insn.addr !65
  ret i64 42, !insn.addr !66
}

define i64 @address_of_array() local_unnamed_addr {
dec_label_pc_13d0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !67
  %3 = and i64 %2, 4294967294, !insn.addr !67
  ret i64 %3, !insn.addr !68
}

define i32 @large_stack_frame() local_unnamed_addr {
dec_label_pc_13e0:
  %0 = alloca i32
  %rax.0.reg2mem = alloca i64, !insn.addr !69
  %1 = load i32, i32* %0
  %stack_var_-2072 = alloca i64, align 8
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !70
  %3 = ptrtoint i64* %stack_var_-2072 to i64, !insn.addr !71
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !72
  br label %dec_label_pc_1408, !insn.addr !72

dec_label_pc_1408:                                ; preds = %dec_label_pc_1408, %dec_label_pc_13e0
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %4 = trunc i64 %rax.0.reload to i8, !insn.addr !73
  %5 = add i64 %rax.0.reload, %3, !insn.addr !73
  %6 = inttoptr i64 %5 to i8*, !insn.addr !73
  store i8 %4, i8* %6, align 1, !insn.addr !73
  %7 = add i64 %rax.0.reload, 1, !insn.addr !74
  %8 = icmp eq i64 %7, ptrtoint (i64* @global_var_800 to i64), !insn.addr !75
  %9 = icmp eq i1 %8, false, !insn.addr !76
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !76
  br i1 %9, label %dec_label_pc_1408, label %dec_label_pc_1417, !insn.addr !76

dec_label_pc_1417:                                ; preds = %dec_label_pc_1408
  %10 = call i64 @__readfsqword(i64 40), !insn.addr !77
  %11 = icmp eq i64 %2, %10, !insn.addr !77
  %12 = icmp eq i1 %11, false, !insn.addr !78
  br i1 %12, label %dec_label_pc_143a, label %dec_label_pc_1432, !insn.addr !78

dec_label_pc_1432:                                ; preds = %dec_label_pc_1417
  %13 = zext i32 %1 to i64, !insn.addr !79
  %sext = mul i64 %13, 72057594037927936
  %14 = ashr exact i64 %sext, 56, !insn.addr !79
  %15 = trunc i64 %14 to i32, !insn.addr !80
  ret i32 %15, !insn.addr !80

dec_label_pc_143a:                                ; preds = %dec_label_pc_1417
  call void @__stack_chk_fail(), !insn.addr !81
  ret i32 ptrtoint (i32* @1 to i32), !insn.addr !82

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 2, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
}

define i64 @vla_stack(i64 %arg1) local_unnamed_addr {
dec_label_pc_1440:
  %storemerge.reg2mem = alloca i64, !insn.addr !83
  %rax.0.reg2mem = alloca i64, !insn.addr !83
  %rsp.1.reg2mem = alloca i64, !insn.addr !83
  %rsp.0.reg2mem = alloca i64, !insn.addr !83
  %stack_var_-24 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !84
  %1 = trunc i64 %arg1 to i32
  %2 = add i32 %1, -1, !insn.addr !85
  %3 = icmp ugt i32 %2, ptrtoint (i32* @global_var_3e7 to i32)
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !86
  br i1 %3, label %dec_label_pc_14d7, label %dec_label_pc_1469, !insn.addr !86

dec_label_pc_1469:                                ; preds = %dec_label_pc_1440
  %4 = ptrtoint i64* %stack_var_-24 to i64, !insn.addr !87
  %sext = mul i64 %arg1, 4294967296
  %5 = ashr exact i64 %sext, 30, !insn.addr !88
  %6 = add nsw i64 %5, 15, !insn.addr !88
  %7 = and i64 %6, -4096, !insn.addr !89
  %8 = sub i64 %4, %7, !insn.addr !90
  %9 = icmp eq i64 %7, 0, !insn.addr !91
  store i64 %4, i64* %rsp.0.reg2mem, !insn.addr !92
  store i64 %4, i64* %rsp.1.reg2mem, !insn.addr !92
  br i1 %9, label %dec_label_pc_14a1, label %dec_label_pc_148c, !insn.addr !92

dec_label_pc_148c:                                ; preds = %dec_label_pc_1469, %dec_label_pc_148c
  %rsp.0.reload = load i64, i64* %rsp.0.reg2mem
  %10 = add i64 %rsp.0.reload, -4096, !insn.addr !93
  %11 = icmp eq i64 %10, %8, !insn.addr !94
  %12 = icmp eq i1 %11, false, !insn.addr !95
  store i64 %10, i64* %rsp.0.reg2mem, !insn.addr !95
  store i64 %10, i64* %rsp.1.reg2mem, !insn.addr !95
  br i1 %12, label %dec_label_pc_148c, label %dec_label_pc_14a1, !insn.addr !95

dec_label_pc_14a1:                                ; preds = %dec_label_pc_148c, %dec_label_pc_1469
  %rsp.1.reload = load i64, i64* %rsp.1.reg2mem
  %13 = and i64 %6, 4080, !insn.addr !96
  %14 = sub i64 %rsp.1.reload, %13, !insn.addr !97
  %15 = and i64 %arg1, 4294967295, !insn.addr !98
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !99
  br label %dec_label_pc_14c0, !insn.addr !99

dec_label_pc_14c0:                                ; preds = %dec_label_pc_14c0, %dec_label_pc_14a1
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %.tr = trunc i64 %rax.0.reload to i32
  %16 = mul i32 %.tr, 2, !insn.addr !100
  %17 = mul i64 %rax.0.reload, 4, !insn.addr !101
  %18 = add i64 %17, %14, !insn.addr !101
  %19 = inttoptr i64 %18 to i32*, !insn.addr !101
  store i32 %16, i32* %19, align 4, !insn.addr !101
  %20 = add i64 %rax.0.reload, 1, !insn.addr !102
  %21 = icmp eq i64 %20, %15, !insn.addr !103
  %22 = icmp eq i1 %21, false, !insn.addr !104
  store i64 %20, i64* %rax.0.reg2mem, !insn.addr !104
  br i1 %22, label %dec_label_pc_14c0, label %dec_label_pc_14cf, !insn.addr !104

dec_label_pc_14cf:                                ; preds = %dec_label_pc_14c0
  %23 = ashr i32 %1, 1, !insn.addr !105
  %24 = sext i32 %23 to i64, !insn.addr !106
  %25 = mul i64 %24, 4, !insn.addr !107
  %26 = add i64 %14, %25, !insn.addr !107
  %27 = inttoptr i64 %26 to i32*, !insn.addr !107
  %28 = load i32, i32* %27, align 4, !insn.addr !107
  %29 = zext i32 %28 to i64, !insn.addr !107
  store i64 %29, i64* %storemerge.reg2mem, !insn.addr !107
  br label %dec_label_pc_14d7, !insn.addr !107

dec_label_pc_14d7:                                ; preds = %dec_label_pc_1440, %dec_label_pc_14cf
  %30 = call i64 @__readfsqword(i64 40), !insn.addr !108
  %31 = icmp eq i64 %0, %30, !insn.addr !108
  %32 = icmp eq i1 %31, false, !insn.addr !109
  br i1 %32, label %dec_label_pc_14ff, label %dec_label_pc_14e6, !insn.addr !109

dec_label_pc_14e6:                                ; preds = %dec_label_pc_14d7
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !110

dec_label_pc_14ff:                                ; preds = %dec_label_pc_14d7
  call void @__stack_chk_fail(), !insn.addr !111
  ret i64 ptrtoint (i32* @1 to i64), !insn.addr !112

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 2, 0 }
  uselistorder i64* %rsp.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 ptrtoint (i32* @1 to i64), { 1, 2, 0 }
  uselistorder i64 %arg1, { 1, 0, 2 }
  uselistorder label %dec_label_pc_14d7, { 1, 0 }
  uselistorder label %dec_label_pc_148c, { 1, 0 }
}

define i32 @alloca_usage(i32 %n) local_unnamed_addr {
dec_label_pc_1510:
  %storemerge.reg2mem = alloca i32, !insn.addr !113
  %rdx.0.reg2mem = alloca i64, !insn.addr !113
  %rax.0.reg2mem = alloca i64, !insn.addr !113
  %rsp.1.reg2mem = alloca i64, !insn.addr !113
  %rsp.0.reg2mem = alloca i64, !insn.addr !113
  %stack_var_-24 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !114
  %1 = icmp slt i32 %n, 1
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !115
  br i1 %1, label %dec_label_pc_15a5, label %dec_label_pc_1533, !insn.addr !115

dec_label_pc_1533:                                ; preds = %dec_label_pc_1510
  %2 = ptrtoint i64* %stack_var_-24 to i64, !insn.addr !116
  %3 = sext i32 %n to i64
  %4 = mul i64 %3, 4, !insn.addr !117
  %5 = add nsw i64 %4, 23, !insn.addr !117
  %6 = and i64 %5, -4096, !insn.addr !118
  %7 = sub i64 %2, %6, !insn.addr !119
  %8 = icmp eq i64 %6, 0, !insn.addr !120
  store i64 %2, i64* %rsp.0.reg2mem, !insn.addr !121
  store i64 %2, i64* %rsp.1.reg2mem, !insn.addr !121
  br i1 %8, label %dec_label_pc_156b, label %dec_label_pc_1556, !insn.addr !121

dec_label_pc_1556:                                ; preds = %dec_label_pc_1533, %dec_label_pc_1556
  %rsp.0.reload = load i64, i64* %rsp.0.reg2mem
  %9 = add i64 %rsp.0.reload, -4096, !insn.addr !122
  %10 = icmp eq i64 %9, %7, !insn.addr !123
  %11 = icmp eq i1 %10, false, !insn.addr !124
  store i64 %9, i64* %rsp.0.reg2mem, !insn.addr !124
  store i64 %9, i64* %rsp.1.reg2mem, !insn.addr !124
  br i1 %11, label %dec_label_pc_1556, label %dec_label_pc_156b, !insn.addr !124

dec_label_pc_156b:                                ; preds = %dec_label_pc_1556, %dec_label_pc_1533
  %rsp.1.reload = load i64, i64* %rsp.1.reg2mem
  %12 = and i64 %5, 4080, !insn.addr !125
  %13 = sub nsw i64 15, %12, !insn.addr !126
  %14 = add i64 %13, %rsp.1.reload, !insn.addr !127
  %15 = mul i32 %n, 3, !insn.addr !128
  %16 = and i64 %14, -16, !insn.addr !129
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !130
  store i64 %16, i64* %rdx.0.reg2mem, !insn.addr !130
  br label %dec_label_pc_1590, !insn.addr !130

dec_label_pc_1590:                                ; preds = %dec_label_pc_1590, %dec_label_pc_156b
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %17 = trunc i64 %rax.0.reload to i32, !insn.addr !131
  %18 = inttoptr i64 %rdx.0.reload to i32*, !insn.addr !131
  store i32 %17, i32* %18, align 4, !insn.addr !131
  %19 = add nuw nsw i64 %rax.0.reload, 3, !insn.addr !132
  %20 = and i64 %19, 4294967295, !insn.addr !132
  %21 = add i64 %rdx.0.reload, 4, !insn.addr !133
  %22 = trunc i64 %19 to i32, !insn.addr !134
  %23 = icmp eq i32 %15, %22, !insn.addr !134
  %24 = icmp eq i1 %23, false, !insn.addr !135
  store i64 %20, i64* %rax.0.reg2mem, !insn.addr !135
  store i64 %21, i64* %rdx.0.reg2mem, !insn.addr !135
  br i1 %24, label %dec_label_pc_1590, label %dec_label_pc_159d, !insn.addr !135

dec_label_pc_159d:                                ; preds = %dec_label_pc_1590
  %25 = ashr i32 %n, 1, !insn.addr !136
  %26 = sext i32 %25 to i64, !insn.addr !137
  %27 = mul i64 %26, 4, !insn.addr !138
  %28 = add i64 %16, %27, !insn.addr !138
  %29 = inttoptr i64 %28 to i32*, !insn.addr !138
  %30 = load i32, i32* %29, align 4, !insn.addr !138
  store i32 %30, i32* %storemerge.reg2mem, !insn.addr !138
  br label %dec_label_pc_15a5, !insn.addr !138

dec_label_pc_15a5:                                ; preds = %dec_label_pc_1510, %dec_label_pc_159d
  %31 = call i64 @__readfsqword(i64 40), !insn.addr !139
  %32 = icmp eq i64 %0, %31, !insn.addr !139
  %33 = icmp eq i1 %32, false, !insn.addr !140
  br i1 %33, label %dec_label_pc_15cf, label %dec_label_pc_15b4, !insn.addr !140

dec_label_pc_15b4:                                ; preds = %dec_label_pc_15a5
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !141

dec_label_pc_15cf:                                ; preds = %dec_label_pc_15a5
  call void @__stack_chk_fail(), !insn.addr !142
  ret i32 ptrtoint (i32* @1 to i32), !insn.addr !143

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64 %16, { 1, 0 }
  uselistorder i64* %rsp.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 -4096, { 0, 3, 1, 2 }
  uselistorder i32 %n, { 0, 1, 3, 2 }
  uselistorder label %dec_label_pc_15a5, { 1, 0 }
  uselistorder label %dec_label_pc_1556, { 1, 0 }
}

define i64 @stack_alias() local_unnamed_addr {
dec_label_pc_15e0:
  ret i64 20, !insn.addr !144
}

define void @test_stack_memory() local_unnamed_addr {
dec_label_pc_15f0:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3004 to i8*)), !insn.addr !145
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_3022, i64 0, i64 0), i64 20), !insn.addr !146
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_303e, i64 0, i64 0), i64 10), !insn.addr !147
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_305b, i64 0, i64 0), i64 15), !insn.addr !148
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_32c0, i64 0, i64 0), i64 42), !insn.addr !149
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_32e8, i64 0, i64 0), i64 2), !insn.addr !150
  %6 = call i32 @large_stack_frame(), !insn.addr !151
  %7 = zext i32 %6 to i64, !insn.addr !152
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3310, i64 0, i64 0), i64 %7), !insn.addr !153
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3079, i64 0, i64 0), i64 10), !insn.addr !154
  %10 = call i32 @alloca_usage(i32 10), !insn.addr !155
  %11 = zext i32 %10 to i64, !insn.addr !156
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3094, i64 0, i64 0), i64 %11), !insn.addr !157
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_30b2, i64 0, i64 0), i64 20), !insn.addr !158
  ret void, !insn.addr !158
}

define i64 @heap_basic(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_16f0:
  %r12.0.reg2mem = alloca i64, !insn.addr !159
  %rdx.0.reg2mem = alloca i64, !insn.addr !159
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !160
  %1 = call i64* @malloc(i32 %0), !insn.addr !160
  %2 = icmp eq i64* %1, null, !insn.addr !161
  store i64 4294967295, i64* %r12.0.reg2mem, !insn.addr !162
  br i1 %2, label %dec_label_pc_1743, label %dec_label_pc_170d, !insn.addr !162

dec_label_pc_170d:                                ; preds = %dec_label_pc_16f0
  %sext = mul i64 %arg1, 4294967296
  %3 = ashr exact i64 %sext, 32, !insn.addr !163
  %4 = ptrtoint i64* %1 to i64, !insn.addr !160
  %5 = trunc i64 %3 to i32, !insn.addr !164
  %6 = icmp slt i32 %5, 1
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !165
  br i1 %6, label %dec_label_pc_172f, label %dec_label_pc_1720, !insn.addr !165

dec_label_pc_1720:                                ; preds = %dec_label_pc_170d, %dec_label_pc_1720
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %.tr = trunc i64 %rdx.0.reload to i32
  %7 = mul i32 %.tr, 2, !insn.addr !166
  %8 = mul i64 %rdx.0.reload, 4, !insn.addr !167
  %9 = add i64 %8, %4, !insn.addr !167
  %10 = inttoptr i64 %9 to i32*, !insn.addr !167
  store i32 %7, i32* %10, align 4, !insn.addr !167
  %11 = add i64 %rdx.0.reload, 1, !insn.addr !168
  %12 = icmp eq i64 %11, %3, !insn.addr !169
  %13 = icmp eq i1 %12, false, !insn.addr !170
  store i64 %11, i64* %rdx.0.reg2mem, !insn.addr !170
  br i1 %13, label %dec_label_pc_1720, label %dec_label_pc_172f, !insn.addr !170

dec_label_pc_172f:                                ; preds = %dec_label_pc_1720, %dec_label_pc_170d
  %14 = icmp slt i64 %sext, 0
  %15 = zext i1 %14 to i32
  %16 = add i32 %15, %5, !insn.addr !171
  %17 = ashr i32 %16, 1, !insn.addr !172
  %18 = sext i32 %17 to i64, !insn.addr !173
  %19 = mul i64 %18, 4, !insn.addr !174
  %20 = add i64 %19, %4, !insn.addr !174
  %21 = inttoptr i64 %20 to i32*, !insn.addr !174
  %22 = load i32, i32* %21, align 4, !insn.addr !174
  %23 = zext i32 %22 to i64, !insn.addr !174
  call void @free(i64* nonnull %1), !insn.addr !175
  store i64 %23, i64* %r12.0.reg2mem, !insn.addr !175
  br label %dec_label_pc_1743, !insn.addr !175

dec_label_pc_1743:                                ; preds = %dec_label_pc_16f0, %dec_label_pc_172f
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  ret i64 %r12.0.reload, !insn.addr !176

; uselistorder directives
  uselistorder i64 %rdx.0.reload, { 1, 2, 0 }
  uselistorder i64 %sext, { 1, 0 }
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r12.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1743, { 1, 0 }
  uselistorder label %dec_label_pc_1720, { 1, 0 }
}

define i64 @heap_calloc(i64 %arg1) local_unnamed_addr {
dec_label_pc_1760:
  %r12.2.reg2mem = alloca i64, !insn.addr !177
  %r12.1.reg2mem = alloca i64, !insn.addr !177
  %r12.0.reg2mem = alloca i32, !insn.addr !177
  %rdx.0.reg2mem = alloca i64, !insn.addr !177
  %0 = trunc i64 %arg1 to i32, !insn.addr !178
  %1 = call i64* @calloc(i32 %0, i32 4), !insn.addr !178
  %2 = icmp eq i64* %1, null, !insn.addr !179
  store i64 4294967295, i64* %r12.2.reg2mem, !insn.addr !180
  br i1 %2, label %dec_label_pc_17a1, label %dec_label_pc_177b, !insn.addr !180

dec_label_pc_177b:                                ; preds = %dec_label_pc_1760
  %3 = icmp slt i32 %0, 1
  store i64 0, i64* %r12.1.reg2mem, !insn.addr !181
  br i1 %3, label %dec_label_pc_179c, label %dec_label_pc_1783, !insn.addr !181

dec_label_pc_1783:                                ; preds = %dec_label_pc_177b
  %4 = ptrtoint i64* %1 to i64, !insn.addr !178
  %5 = mul i64 %arg1, 4
  %6 = and i64 %5, 17179869180
  %7 = add i64 %6, %4, !insn.addr !182
  store i64 %4, i64* %rdx.0.reg2mem, !insn.addr !183
  store i32 0, i32* %r12.0.reg2mem, !insn.addr !183
  br label %dec_label_pc_1790, !insn.addr !183

dec_label_pc_1790:                                ; preds = %dec_label_pc_1790, %dec_label_pc_1783
  %r12.0.reload = load i32, i32* %r12.0.reg2mem
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %8 = inttoptr i64 %rdx.0.reload to i32*, !insn.addr !184
  %9 = load i32, i32* %8, align 4, !insn.addr !184
  %10 = add i32 %9, %r12.0.reload, !insn.addr !184
  %11 = add i64 %rdx.0.reload, 4, !insn.addr !185
  %12 = icmp eq i64 %11, %7, !insn.addr !186
  %13 = icmp eq i1 %12, false, !insn.addr !187
  store i64 %11, i64* %rdx.0.reg2mem, !insn.addr !187
  store i32 %10, i32* %r12.0.reg2mem, !insn.addr !187
  br i1 %13, label %dec_label_pc_1790, label %dec_label_pc_179c.loopexit, !insn.addr !187

dec_label_pc_179c.loopexit:                       ; preds = %dec_label_pc_1790
  %14 = zext i32 %10 to i64, !insn.addr !184
  store i64 %14, i64* %r12.1.reg2mem
  br label %dec_label_pc_179c

dec_label_pc_179c:                                ; preds = %dec_label_pc_179c.loopexit, %dec_label_pc_177b
  %r12.1.reload = load i64, i64* %r12.1.reg2mem
  call void @free(i64* nonnull %1), !insn.addr !188
  store i64 %r12.1.reload, i64* %r12.2.reg2mem, !insn.addr !188
  br label %dec_label_pc_17a1, !insn.addr !188

dec_label_pc_17a1:                                ; preds = %dec_label_pc_1760, %dec_label_pc_179c
  %r12.2.reload = load i64, i64* %r12.2.reg2mem
  %15 = and i64 %r12.2.reload, 4294967295, !insn.addr !189
  ret i64 %15, !insn.addr !190

; uselistorder directives
  uselistorder i32 %10, { 1, 0 }
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r12.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r12.2.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_17a1, { 1, 0 }
}

define i32 @heap_realloc() local_unnamed_addr {
dec_label_pc_17c0:
  %r12.0.reg2mem = alloca i32, !insn.addr !191
  %0 = call i64* @malloc(i32 20), !insn.addr !192
  %1 = icmp eq i64* %0, null, !insn.addr !193
  store i32 -1, i32* %r12.0.reg2mem, !insn.addr !194
  br i1 %1, label %dec_label_pc_182d, label %dec_label_pc_17da, !insn.addr !194

dec_label_pc_17da:                                ; preds = %dec_label_pc_17c0
  %2 = ptrtoint i64* %0 to i64, !insn.addr !192
  store i64 8589934593, i64* %0, align 8, !insn.addr !195
  %3 = add i64 %2, 8, !insn.addr !196
  %4 = inttoptr i64 %3 to i64*, !insn.addr !196
  store i64 17179869187, i64* %4, align 8, !insn.addr !196
  %5 = add i64 %2, 16, !insn.addr !197
  %6 = inttoptr i64 %5 to i32*, !insn.addr !197
  store i32 5, i32* %6, align 4, !insn.addr !197
  %7 = call i64* @realloc(i64* nonnull %0, i32 40), !insn.addr !198
  %8 = icmp eq i64* %7, null, !insn.addr !199
  br i1 %8, label %dec_label_pc_183e, label %dec_label_pc_1815, !insn.addr !200

dec_label_pc_1815:                                ; preds = %dec_label_pc_17da
  %9 = ptrtoint i64* %7 to i64, !insn.addr !198
  %10 = add i64 %9, 8, !insn.addr !201
  %11 = inttoptr i64 %10 to i32*, !insn.addr !201
  %12 = load i32, i32* %11, align 4, !insn.addr !201
  %13 = icmp eq i32 %12, 3, !insn.addr !201
  %14 = icmp eq i1 %13, false, !insn.addr !202
  call void @free(i64* nonnull %7), !insn.addr !203
  %phitmp = select i1 %14, i32 -3, i32 50, !insn.addr !202
  store i32 %phitmp, i32* %r12.0.reg2mem, !insn.addr !203
  br label %dec_label_pc_182d, !insn.addr !203

dec_label_pc_182d:                                ; preds = %dec_label_pc_17c0, %dec_label_pc_183e, %dec_label_pc_1815
  %r12.0.reload = load i32, i32* %r12.0.reg2mem
  ret i32 %r12.0.reload, !insn.addr !204

dec_label_pc_183e:                                ; preds = %dec_label_pc_17da
  call void @free(i64* nonnull %0), !insn.addr !205
  store i32 -2, i32* %r12.0.reg2mem, !insn.addr !206
  br label %dec_label_pc_182d, !insn.addr !206

; uselistorder directives
  uselistorder i64* %7, { 0, 2, 1 }
  uselistorder i64* %0, { 0, 1, 2, 4, 3 }
  uselistorder i32* %r12.0.reg2mem, { 3, 0, 2, 1 }
  uselistorder label %dec_label_pc_182d, { 1, 2, 0 }
}

define i64 @heap_array(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1850:
  %r12.0.reg2mem = alloca i64, !insn.addr !207
  %rdx.0.reg2mem = alloca i64, !insn.addr !207
  %rcx.0.reg2mem = alloca i64, !insn.addr !207
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !208
  %1 = call i64* @malloc(i32 %0), !insn.addr !208
  %2 = icmp eq i64* %1, null, !insn.addr !209
  store i64 4294967295, i64* %r12.0.reg2mem, !insn.addr !210
  br i1 %2, label %dec_label_pc_18a2, label %dec_label_pc_186f, !insn.addr !210

dec_label_pc_186f:                                ; preds = %dec_label_pc_1850
  %3 = ptrtoint i64* %1 to i64, !insn.addr !208
  %4 = trunc i64 %arg1 to i32, !insn.addr !211
  %5 = icmp slt i32 %4, 1
  br i1 %5, label %dec_label_pc_188d, label %dec_label_pc_1880.preheader, !insn.addr !212

dec_label_pc_1880.preheader:                      ; preds = %dec_label_pc_186f
  %6 = mul i32 %4, 3, !insn.addr !213
  store i64 %3, i64* %rcx.0.reg2mem
  store i64 0, i64* %rdx.0.reg2mem
  br label %dec_label_pc_1880

dec_label_pc_1880:                                ; preds = %dec_label_pc_1880.preheader, %dec_label_pc_1880
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %7 = trunc i64 %rdx.0.reload to i32, !insn.addr !214
  %8 = inttoptr i64 %rcx.0.reload to i32*, !insn.addr !214
  store i32 %7, i32* %8, align 4, !insn.addr !214
  %9 = add nuw nsw i64 %rdx.0.reload, 3, !insn.addr !215
  %10 = and i64 %9, 4294967295, !insn.addr !215
  %11 = add i64 %rcx.0.reload, 4, !insn.addr !216
  %12 = trunc i64 %9 to i32, !insn.addr !213
  %13 = icmp eq i32 %6, %12, !insn.addr !213
  %14 = icmp eq i1 %13, false, !insn.addr !217
  store i64 %11, i64* %rcx.0.reg2mem, !insn.addr !217
  store i64 %10, i64* %rdx.0.reg2mem, !insn.addr !217
  br i1 %14, label %dec_label_pc_1880, label %dec_label_pc_188d, !insn.addr !217

dec_label_pc_188d:                                ; preds = %dec_label_pc_1880, %dec_label_pc_186f
  %15 = trunc i64 %arg1 to i32
  %16 = icmp slt i32 %15, 0
  %17 = zext i1 %16 to i32
  %18 = add i32 %17, %4, !insn.addr !218
  %19 = ashr i32 %18, 1, !insn.addr !219
  %20 = sext i32 %19 to i64, !insn.addr !220
  %21 = mul i64 %20, 4, !insn.addr !221
  %22 = add i64 %21, %3, !insn.addr !221
  %23 = inttoptr i64 %22 to i32*, !insn.addr !221
  %24 = load i32, i32* %23, align 4, !insn.addr !221
  %25 = zext i32 %24 to i64, !insn.addr !221
  call void @free(i64* nonnull %1), !insn.addr !222
  store i64 %25, i64* %r12.0.reg2mem, !insn.addr !222
  br label %dec_label_pc_18a2, !insn.addr !222

dec_label_pc_18a2:                                ; preds = %dec_label_pc_1850, %dec_label_pc_188d
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  ret i64 %r12.0.reload, !insn.addr !223

; uselistorder directives
  uselistorder i64 %rcx.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i64* %rcx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r12.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_18a2, { 1, 0 }
  uselistorder label %dec_label_pc_1880, { 1, 0 }
}

define i64 @heap_struct(i64 %arg1) local_unnamed_addr {
dec_label_pc_18c0:
  %r12.0.reg2mem = alloca i64, !insn.addr !224
  %0 = call i64* @malloc(i32 8), !insn.addr !225
  %1 = icmp eq i64* %0, null, !insn.addr !226
  store i64 4294967295, i64* %r12.0.reg2mem, !insn.addr !227
  br i1 %1, label %dec_label_pc_18e8, label %dec_label_pc_18dc, !insn.addr !227

dec_label_pc_18dc:                                ; preds = %dec_label_pc_18c0
  %2 = and i64 %arg1, 4294967295, !insn.addr !228
  %3 = mul nuw nsw i64 %2, 3, !insn.addr !229
  %4 = and i64 %3, 4294967295, !insn.addr !229
  call void @free(i64* nonnull %0), !insn.addr !230
  store i64 %4, i64* %r12.0.reg2mem, !insn.addr !230
  br label %dec_label_pc_18e8, !insn.addr !230

dec_label_pc_18e8:                                ; preds = %dec_label_pc_18c0, %dec_label_pc_18dc
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  ret i64 %r12.0.reload, !insn.addr !231

; uselistorder directives
  uselistorder i64* %r12.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_18e8, { 1, 0 }
}

define i64 @heap_nested(i64 %arg1) local_unnamed_addr {
dec_label_pc_1900:
  %rax.0.reg2mem = alloca i64, !insn.addr !232
  %0 = call i64* @malloc(i32 16), !insn.addr !233
  %1 = ptrtoint i64* %0 to i64, !insn.addr !233
  %2 = inttoptr i64 %arg1 to i64*, !insn.addr !234
  store i64 %1, i64* %2, align 8, !insn.addr !234
  %3 = icmp eq i64* %0, null, !insn.addr !235
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !236
  br i1 %3, label %dec_label_pc_194b, label %dec_label_pc_191f, !insn.addr !236

dec_label_pc_191f:                                ; preds = %dec_label_pc_1900
  %4 = bitcast i64* %0 to i32*, !insn.addr !237
  store i32 10, i32* %4, align 4, !insn.addr !237
  %5 = call i64* @malloc(i32 16), !insn.addr !238
  %6 = ptrtoint i64* %5 to i64, !insn.addr !238
  %7 = add i64 %1, 8, !insn.addr !239
  %8 = inttoptr i64 %7 to i64*, !insn.addr !239
  store i64 %6, i64* %8, align 8, !insn.addr !239
  %9 = icmp eq i64* %5, null, !insn.addr !240
  br i1 %9, label %dec_label_pc_1957, label %dec_label_pc_193b, !insn.addr !241

dec_label_pc_193b:                                ; preds = %dec_label_pc_191f
  %10 = bitcast i64* %5 to i32*, !insn.addr !242
  store i32 20, i32* %10, align 4, !insn.addr !242
  %11 = add i64 %6, 8, !insn.addr !243
  %12 = inttoptr i64 %11 to i64*, !insn.addr !243
  store i64 0, i64* %12, align 8, !insn.addr !243
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !244
  br label %dec_label_pc_194b, !insn.addr !244

dec_label_pc_194b:                                ; preds = %dec_label_pc_1900, %dec_label_pc_1957, %dec_label_pc_193b
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !245

dec_label_pc_1957:                                ; preds = %dec_label_pc_191f
  call void @free(i64* nonnull %0), !insn.addr !246
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !247
  br label %dec_label_pc_194b, !insn.addr !247

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 3, 0, 2, 1 }
  uselistorder label %dec_label_pc_194b, { 1, 2, 0 }
}

define i32 @linked_list_heap() local_unnamed_addr {
dec_label_pc_1970:
  %rbx.3.reg2mem = alloca i64, !insn.addr !248
  %r12.1.reg2mem = alloca i32, !insn.addr !248
  %rbx.2.reg2mem = alloca i64, !insn.addr !248
  %r12.0.reg2mem = alloca i32, !insn.addr !248
  %rax.1.reg2mem = alloca i64, !insn.addr !248
  %rbx.1.reg2mem = alloca i64, !insn.addr !248
  %rbp.0.reg2mem = alloca i64, !insn.addr !248
  %rbx.0.reg2mem = alloca i64, !insn.addr !248
  %rax.0.reg2mem = alloca i64, !insn.addr !248
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !249
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !249
  store i64 0, i64* %rbp.0.reg2mem, !insn.addr !249
  br label %dec_label_pc_197e, !insn.addr !249

dec_label_pc_197e:                                ; preds = %dec_label_pc_19a4, %dec_label_pc_1970
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %0 = call i64* @malloc(i32 16), !insn.addr !250
  %1 = icmp eq i64* %0, null, !insn.addr !251
  br i1 %1, label %dec_label_pc_19ed, label %dec_label_pc_1990, !insn.addr !252

dec_label_pc_1990:                                ; preds = %dec_label_pc_197e
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %2 = ptrtoint i64* %0 to i64, !insn.addr !250
  %3 = trunc i64 %rbp.0.reload to i32, !insn.addr !253
  %4 = bitcast i64* %0 to i32*, !insn.addr !253
  store i32 %3, i32* %4, align 4, !insn.addr !253
  %5 = add i64 %2, 8, !insn.addr !254
  %6 = inttoptr i64 %5 to i64*, !insn.addr !254
  store i64 0, i64* %6, align 8, !insn.addr !254
  %7 = icmp eq i64 %rbx.0.reload, 0, !insn.addr !255
  store i64 %2, i64* %rbx.1.reg2mem, !insn.addr !256
  br i1 %7, label %dec_label_pc_19a4, label %dec_label_pc_199f, !insn.addr !256

dec_label_pc_199f:                                ; preds = %dec_label_pc_1990
  %8 = add i64 %rax.0.reload, 8, !insn.addr !257
  %9 = inttoptr i64 %8 to i64*, !insn.addr !257
  store i64 %2, i64* %9, align 8, !insn.addr !257
  store i64 %rbx.0.reload, i64* %rbx.1.reg2mem, !insn.addr !257
  br label %dec_label_pc_19a4, !insn.addr !257

dec_label_pc_19a4:                                ; preds = %dec_label_pc_1990, %dec_label_pc_199f
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %10 = add nuw nsw i64 %rbp.0.reload, 10, !insn.addr !258
  %11 = and i64 %10, 4294967295, !insn.addr !258
  %12 = trunc i64 %10 to i32, !insn.addr !259
  %13 = icmp eq i32 %12, 50, !insn.addr !259
  %14 = icmp eq i1 %13, false, !insn.addr !260
  store i64 %2, i64* %rax.0.reg2mem, !insn.addr !260
  store i64 %rbx.1.reload, i64* %rbx.0.reg2mem, !insn.addr !260
  store i64 %11, i64* %rbp.0.reg2mem, !insn.addr !260
  store i64 %rbx.1.reload, i64* %rax.1.reg2mem, !insn.addr !260
  store i32 0, i32* %r12.0.reg2mem, !insn.addr !260
  br i1 %14, label %dec_label_pc_197e, label %dec_label_pc_19b8, !insn.addr !260

dec_label_pc_19b8:                                ; preds = %dec_label_pc_19a4, %dec_label_pc_19b8
  %r12.0.reload = load i32, i32* %r12.0.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %15 = inttoptr i64 %rax.1.reload to i32*, !insn.addr !261
  %16 = load i32, i32* %15, align 4, !insn.addr !261
  %17 = add i32 %16, %r12.0.reload, !insn.addr !261
  %18 = add i64 %rax.1.reload, 8, !insn.addr !262
  %19 = inttoptr i64 %18 to i64*, !insn.addr !262
  %20 = load i64, i64* %19, align 8, !insn.addr !262
  %21 = icmp eq i64 %20, 0, !insn.addr !263
  %22 = icmp eq i1 %21, false, !insn.addr !264
  store i64 %20, i64* %rax.1.reg2mem, !insn.addr !264
  store i32 %17, i32* %r12.0.reg2mem, !insn.addr !264
  store i64 %rbx.1.reload, i64* %rbx.2.reg2mem, !insn.addr !264
  br i1 %22, label %dec_label_pc_19b8, label %dec_label_pc_19c8, !insn.addr !264

dec_label_pc_19c8:                                ; preds = %dec_label_pc_19b8, %dec_label_pc_19c8
  %rbx.2.reload = load i64, i64* %rbx.2.reg2mem
  %23 = add i64 %rbx.2.reload, 8, !insn.addr !265
  %24 = inttoptr i64 %23 to i64*, !insn.addr !265
  %25 = load i64, i64* %24, align 8, !insn.addr !265
  %26 = inttoptr i64 %rbx.2.reload to i64*, !insn.addr !266
  call void @free(i64* %26), !insn.addr !266
  %27 = icmp eq i64 %25, 0, !insn.addr !267
  %28 = icmp eq i1 %27, false, !insn.addr !268
  store i64 %25, i64* %rbx.2.reg2mem, !insn.addr !268
  store i32 %17, i32* %r12.1.reg2mem, !insn.addr !268
  br i1 %28, label %dec_label_pc_19c8, label %dec_label_pc_19d9, !insn.addr !268

dec_label_pc_19d9:                                ; preds = %dec_label_pc_19c8, %dec_label_pc_19f2, %dec_label_pc_19ed
  %r12.1.reload = load i32, i32* %r12.1.reg2mem
  ret i32 %r12.1.reload, !insn.addr !269

dec_label_pc_19ed:                                ; preds = %dec_label_pc_197e
  %29 = icmp eq i64 %rbx.0.reload, 0, !insn.addr !270
  store i32 -1, i32* %r12.1.reg2mem, !insn.addr !271
  store i64 %rbx.0.reload, i64* %rbx.3.reg2mem, !insn.addr !271
  br i1 %29, label %dec_label_pc_19d9, label %dec_label_pc_19f2, !insn.addr !271

dec_label_pc_19f2:                                ; preds = %dec_label_pc_19ed, %dec_label_pc_19f2
  %rbx.3.reload = load i64, i64* %rbx.3.reg2mem
  %30 = add i64 %rbx.3.reload, 8, !insn.addr !272
  %31 = inttoptr i64 %30 to i64*, !insn.addr !272
  %32 = load i64, i64* %31, align 8, !insn.addr !272
  %33 = inttoptr i64 %rbx.3.reload to i64*, !insn.addr !273
  call void @free(i64* %33), !insn.addr !273
  %34 = icmp eq i64 %32, 0, !insn.addr !274
  %35 = icmp eq i1 %34, false, !insn.addr !275
  store i32 -1, i32* %r12.1.reg2mem, !insn.addr !275
  store i64 %32, i64* %rbx.3.reg2mem, !insn.addr !275
  br i1 %35, label %dec_label_pc_19f2, label %dec_label_pc_19d9, !insn.addr !275

; uselistorder directives
  uselistorder i64 %rbx.3.reload, { 1, 0 }
  uselistorder i64 %rbx.2.reload, { 1, 0 }
  uselistorder i64 %2, { 1, 2, 0, 3 }
  uselistorder i64 %rbp.0.reload, { 1, 0 }
  uselistorder i64* %0, { 0, 2, 1 }
  uselistorder i64 %rbx.0.reload, { 0, 3, 1, 2 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbp.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r12.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r12.1.reg2mem, { 2, 3, 0, 1 }
  uselistorder i64* %rbx.3.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_19f2, { 1, 0 }
  uselistorder label %dec_label_pc_19d9, { 1, 2, 0 }
  uselistorder label %dec_label_pc_19c8, { 1, 0 }
  uselistorder label %dec_label_pc_19b8, { 1, 0 }
  uselistorder label %dec_label_pc_19a4, { 1, 0 }
}

define i64 @create_tree_node(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a10:
  %0 = call i64* @malloc(i32 24), !insn.addr !276
  %1 = ptrtoint i64* %0 to i64, !insn.addr !276
  %2 = icmp eq i64* %0, null, !insn.addr !277
  br i1 %2, label %dec_label_pc_1a38, label %dec_label_pc_1a26, !insn.addr !278

dec_label_pc_1a26:                                ; preds = %dec_label_pc_1a10
  %3 = trunc i64 %arg1 to i32, !insn.addr !279
  %4 = bitcast i64* %0 to i32*, !insn.addr !279
  store i32 %3, i32* %4, align 4, !insn.addr !279
  %5 = add i64 %1, 8, !insn.addr !280
  %6 = inttoptr i64 %5 to i64*, !insn.addr !280
  store i64 0, i64* %6, align 8, !insn.addr !280
  %7 = add i64 %1, 16, !insn.addr !281
  %8 = inttoptr i64 %7 to i64*, !insn.addr !281
  store i64 0, i64* %8, align 8, !insn.addr !281
  br label %dec_label_pc_1a38, !insn.addr !281

dec_label_pc_1a38:                                ; preds = %dec_label_pc_1a26, %dec_label_pc_1a10
  ret i64 %1, !insn.addr !282

; uselistorder directives
  uselistorder i64 %1, { 2, 0, 1 }
}

define i32 @tree_heap_traversal() local_unnamed_addr {
dec_label_pc_1a40:
  %rax.0.reg2mem = alloca i32, !insn.addr !283
  %0 = call i64* @malloc(i32 24), !insn.addr !284
  %1 = icmp eq i64* %0, null, !insn.addr !285
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !286
  br i1 %1, label %dec_label_pc_1a9c, label %dec_label_pc_1a58, !insn.addr !286

dec_label_pc_1a58:                                ; preds = %dec_label_pc_1a40
  %2 = call i64* @malloc(i32 24), !insn.addr !287
  %3 = icmp eq i64* %2, null, !insn.addr !288
  %4 = call i64* @malloc(i32 24)
  %5 = icmp eq i64* %4, null
  br i1 %3, label %dec_label_pc_1abf, label %dec_label_pc_1a72, !insn.addr !289

dec_label_pc_1a72:                                ; preds = %dec_label_pc_1a58
  call void @free(i64* nonnull %2)
  br i1 %5, label %dec_label_pc_1ab0, label %dec_label_pc_1a7f, !insn.addr !290

dec_label_pc_1a7f:                                ; preds = %dec_label_pc_1a72
  call void @free(i64* nonnull %4), !insn.addr !291
  call void @free(i64* nonnull %0), !insn.addr !292
  store i32 60, i32* %rax.0.reg2mem, !insn.addr !293
  br label %dec_label_pc_1a9c, !insn.addr !293

dec_label_pc_1a9c:                                ; preds = %dec_label_pc_1a40, %dec_label_pc_1ab0, %dec_label_pc_1a7f
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !294

dec_label_pc_1ab0:                                ; preds = %dec_label_pc_1a72, %dec_label_pc_1acc, %dec_label_pc_1abf
  call void @free(i64* nonnull %0), !insn.addr !295
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !296
  br label %dec_label_pc_1a9c, !insn.addr !296

dec_label_pc_1abf:                                ; preds = %dec_label_pc_1a58
  br i1 %5, label %dec_label_pc_1ab0, label %dec_label_pc_1acc, !insn.addr !297

dec_label_pc_1acc:                                ; preds = %dec_label_pc_1abf
  call void @free(i64* nonnull %4), !insn.addr !298
  br label %dec_label_pc_1ab0, !insn.addr !299

; uselistorder directives
  uselistorder i1 %5, { 1, 0 }
  uselistorder i64* %4, { 1, 0, 2 }
  uselistorder i32* %rax.0.reg2mem, { 3, 0, 2, 1 }
  uselistorder label %dec_label_pc_1ab0, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1a9c, { 1, 2, 0 }
}

define i64 @memory_leak(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1ae0:
  %storemerge.reg2mem = alloca i64, !insn.addr !300
  %rdx.0.reg2mem = alloca i64, !insn.addr !300
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !301
  %1 = call i64* @malloc(i32 %0), !insn.addr !301
  %2 = icmp eq i64* %1, null, !insn.addr !302
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !303
  br i1 %2, label %dec_label_pc_1b2b, label %dec_label_pc_1aff, !insn.addr !303

dec_label_pc_1aff:                                ; preds = %dec_label_pc_1ae0
  %sext = mul i64 %arg1, 4294967296
  %3 = ashr exact i64 %sext, 32, !insn.addr !304
  %4 = ptrtoint i64* %1 to i64, !insn.addr !301
  %5 = trunc i64 %3 to i32, !insn.addr !305
  %6 = icmp slt i32 %5, 1
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !306
  br i1 %6, label %dec_label_pc_1b1c, label %dec_label_pc_1b10, !insn.addr !306

dec_label_pc_1b10:                                ; preds = %dec_label_pc_1aff, %dec_label_pc_1b10
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %7 = trunc i64 %rdx.0.reload to i32, !insn.addr !307
  %8 = mul i64 %rdx.0.reload, 4, !insn.addr !307
  %9 = add i64 %8, %4, !insn.addr !307
  %10 = inttoptr i64 %9 to i32*, !insn.addr !307
  store i32 %7, i32* %10, align 4, !insn.addr !307
  %11 = add i64 %rdx.0.reload, 1, !insn.addr !308
  %12 = icmp eq i64 %11, %3, !insn.addr !309
  %13 = icmp eq i1 %12, false, !insn.addr !310
  store i64 %11, i64* %rdx.0.reg2mem, !insn.addr !310
  br i1 %13, label %dec_label_pc_1b10, label %dec_label_pc_1b1c, !insn.addr !310

dec_label_pc_1b1c:                                ; preds = %dec_label_pc_1b10, %dec_label_pc_1aff
  %14 = icmp slt i64 %sext, 0
  %15 = zext i1 %14 to i32
  %16 = add i32 %15, %5, !insn.addr !311
  %17 = ashr i32 %16, 1, !insn.addr !312
  %18 = sext i32 %17 to i64, !insn.addr !313
  %19 = mul i64 %18, 4, !insn.addr !314
  %20 = add i64 %19, %4, !insn.addr !314
  %21 = inttoptr i64 %20 to i32*, !insn.addr !314
  %22 = load i32, i32* %21, align 4, !insn.addr !314
  %23 = zext i32 %22 to i64, !insn.addr !314
  store i64 %23, i64* %storemerge.reg2mem, !insn.addr !314
  br label %dec_label_pc_1b2b, !insn.addr !314

dec_label_pc_1b2b:                                ; preds = %dec_label_pc_1ae0, %dec_label_pc_1b1c
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !315

; uselistorder directives
  uselistorder i64 %rdx.0.reload, { 1, 2, 0 }
  uselistorder i64 %sext, { 1, 0 }
  uselistorder i64* %1, { 1, 0 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1b2b, { 1, 0 }
  uselistorder label %dec_label_pc_1b10, { 1, 0 }
}

define i64 @dangling_pointer() local_unnamed_addr {
dec_label_pc_1b40:
  %0 = call i64* @malloc(i32 4), !insn.addr !316
  %1 = icmp eq i64* %0, null, !insn.addr !317
  br i1 %1, label %dec_label_pc_1b7b, label %dec_label_pc_1b54, !insn.addr !318

dec_label_pc_1b54:                                ; preds = %dec_label_pc_1b40
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_30cf, i64 0, i64 0), i64 42), !insn.addr !319
  call void @free(i64* nonnull %0), !insn.addr !320
  %3 = bitcast i64* %0 to i32*, !insn.addr !321
  %4 = load i32, i32* %3, align 4, !insn.addr !321
  %5 = zext i32 %4 to i64, !insn.addr !321
  ret i64 %5, !insn.addr !322

dec_label_pc_1b7b:                                ; preds = %dec_label_pc_1b40
  ret i64 4294967295, !insn.addr !323
}

define i32 @double_free(i32* %p) local_unnamed_addr {
dec_label_pc_1b80:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i32* %p, null, !insn.addr !324
  br i1 %2, label %dec_label_pc_1b90, label %dec_label_pc_1b89, !insn.addr !325

dec_label_pc_1b89:                                ; preds = %dec_label_pc_1b80
  %3 = trunc i64 %1 to i32
  ret i32 %3, !insn.addr !326

dec_label_pc_1b90:                                ; preds = %dec_label_pc_1b80
  %4 = call i64* @malloc(i32 4), !insn.addr !327
  %5 = icmp eq i64* %4, null, !insn.addr !328
  br i1 %5, label %dec_label_pc_1bba, label %dec_label_pc_1ba3, !insn.addr !329

dec_label_pc_1ba3:                                ; preds = %dec_label_pc_1b90
  call void @free(i64* nonnull %4), !insn.addr !330
  call void @free(i64* nonnull %4), !insn.addr !331
  ret i32 -2, !insn.addr !332

dec_label_pc_1bba:                                ; preds = %dec_label_pc_1b90
  ret i32 -1, !insn.addr !333

; uselistorder directives
  uselistorder i32 -2, { 2, 0, 1 }
}

define i32 @heap_overflow() local_unnamed_addr {
dec_label_pc_1bc0:
  %r12.0.reg2mem = alloca i32, !insn.addr !334
  %rdx.0.reg2mem = alloca i64, !insn.addr !334
  %rcx.0.reg2mem = alloca i64, !insn.addr !334
  %0 = call i64* @malloc(i32 40), !insn.addr !335
  %1 = icmp eq i64* %0, null, !insn.addr !336
  store i32 -1, i32* %r12.0.reg2mem, !insn.addr !337
  br i1 %1, label %dec_label_pc_1bf9, label %dec_label_pc_1bd5, !insn.addr !337

dec_label_pc_1bd5:                                ; preds = %dec_label_pc_1bc0
  %2 = ptrtoint i64* %0 to i64, !insn.addr !335
  store i64 %2, i64* %rcx.0.reg2mem, !insn.addr !338
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !338
  br label %dec_label_pc_1be0, !insn.addr !338

dec_label_pc_1be0:                                ; preds = %dec_label_pc_1be0, %dec_label_pc_1bd5
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %3 = trunc i64 %rdx.0.reload to i32, !insn.addr !339
  %4 = inttoptr i64 %rcx.0.reload to i32*, !insn.addr !339
  store i32 %3, i32* %4, align 4, !insn.addr !339
  %5 = add nuw nsw i64 %rdx.0.reload, 100, !insn.addr !340
  %6 = and i64 %5, 4294967295, !insn.addr !340
  %7 = add i64 %rcx.0.reload, 4, !insn.addr !341
  %8 = trunc i64 %5 to i32, !insn.addr !342
  %9 = icmp eq i32 %8, ptrtoint (i32* @global_var_44c to i32), !insn.addr !342
  %10 = icmp eq i1 %9, false, !insn.addr !343
  store i64 %7, i64* %rcx.0.reg2mem, !insn.addr !343
  store i64 %6, i64* %rdx.0.reg2mem, !insn.addr !343
  br i1 %10, label %dec_label_pc_1be0, label %dec_label_pc_1bf1, !insn.addr !343

dec_label_pc_1bf1:                                ; preds = %dec_label_pc_1be0
  %11 = bitcast i64* %0 to i32*, !insn.addr !344
  %12 = load i32, i32* %11, align 4, !insn.addr !344
  call void @free(i64* nonnull %0), !insn.addr !345
  store i32 %12, i32* %r12.0.reg2mem, !insn.addr !345
  br label %dec_label_pc_1bf9, !insn.addr !345

dec_label_pc_1bf9:                                ; preds = %dec_label_pc_1bc0, %dec_label_pc_1bf1
  %r12.0.reload = load i32, i32* %r12.0.reg2mem
  ret i32 %r12.0.reload, !insn.addr !346

; uselistorder directives
  uselistorder i64 %rcx.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64* %0, { 0, 1, 3, 2 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r12.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1bf9, { 1, 0 }
}

define void @test_heap_memory() local_unnamed_addr {
dec_label_pc_1c10:
  %rdx.4.reg2mem = alloca i64, !insn.addr !347
  %rdx.3.reg2mem = alloca i64, !insn.addr !347
  %storemerge2.reg2mem = alloca i64, !insn.addr !347
  %r12.3.reg2mem = alloca i64, !insn.addr !347
  %rdx.2.reg2mem = alloca i64, !insn.addr !347
  %rcx.0.reg2mem = alloca i64, !insn.addr !347
  %r12.2.reg2mem = alloca i64, !insn.addr !347
  %r12.1.reg2mem = alloca i32, !insn.addr !347
  %rdx.1.reg2mem = alloca i64, !insn.addr !347
  %r12.0.reg2mem = alloca i64, !insn.addr !347
  %rdx.0.reg2mem = alloca i64, !insn.addr !347
  %stack_var_-20 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !348
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_30e6 to i8*)), !insn.addr !349
  %2 = call i64* @malloc(i32 40), !insn.addr !350
  %3 = ptrtoint i64* %2 to i64, !insn.addr !350
  %4 = icmp eq i64* %2, null, !insn.addr !351
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !352
  store i64 4294967295, i64* %r12.0.reg2mem, !insn.addr !352
  br i1 %4, label %dec_label_pc_1c69, label %dec_label_pc_1c50, !insn.addr !352

dec_label_pc_1c50:                                ; preds = %dec_label_pc_1c10, %dec_label_pc_1c50
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %.tr = trunc i64 %rdx.0.reload to i32
  %5 = mul i32 %.tr, 2, !insn.addr !353
  %6 = mul i64 %rdx.0.reload, 4, !insn.addr !354
  %7 = add i64 %6, %3, !insn.addr !354
  %8 = inttoptr i64 %7 to i32*, !insn.addr !354
  store i32 %5, i32* %8, align 4, !insn.addr !354
  %9 = add nuw nsw i64 %rdx.0.reload, 1, !insn.addr !355
  %exitcond = icmp eq i64 %9, 10
  store i64 %9, i64* %rdx.0.reg2mem, !insn.addr !356
  br i1 %exitcond, label %dec_label_pc_1c60, label %dec_label_pc_1c50, !insn.addr !356

dec_label_pc_1c60:                                ; preds = %dec_label_pc_1c50
  %10 = add i64 %3, 20, !insn.addr !357
  %11 = inttoptr i64 %10 to i32*, !insn.addr !357
  %12 = load i32, i32* %11, align 4, !insn.addr !357
  %13 = zext i32 %12 to i64, !insn.addr !357
  call void @free(i64* nonnull %2), !insn.addr !358
  store i64 %13, i64* %r12.0.reg2mem, !insn.addr !358
  br label %dec_label_pc_1c69, !insn.addr !358

dec_label_pc_1c69:                                ; preds = %dec_label_pc_1c10, %dec_label_pc_1c60
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3104, i64 0, i64 0), i64 %r12.0.reload), !insn.addr !359
  %15 = call i64* @calloc(i32 5, i32 4), !insn.addr !360
  %16 = icmp eq i64* %15, null, !insn.addr !361
  store i64 4294967295, i64* %r12.2.reg2mem, !insn.addr !362
  br i1 %16, label %dec_label_pc_1cb9, label %dec_label_pc_1ca8.preheader, !insn.addr !362

dec_label_pc_1ca8.preheader:                      ; preds = %dec_label_pc_1c69
  %17 = ptrtoint i64* %15 to i64, !insn.addr !360
  %18 = add nsw i64 %17, 16
  store i64 %17, i64* %rdx.1.reg2mem
  store i32 0, i32* %r12.1.reg2mem
  br label %dec_label_pc_1ca8

dec_label_pc_1ca8:                                ; preds = %dec_label_pc_1ca8.preheader, %dec_label_pc_1ca8
  %r12.1.reload = load i32, i32* %r12.1.reg2mem
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  %19 = inttoptr i64 %rdx.1.reload to i32*, !insn.addr !363
  %20 = load i32, i32* %19, align 4, !insn.addr !363
  %21 = add i32 %20, %r12.1.reload, !insn.addr !363
  %22 = add i64 %rdx.1.reload, 4, !insn.addr !364
  %23 = icmp eq i64 %18, %rdx.1.reload, !insn.addr !365
  %24 = icmp eq i1 %23, false, !insn.addr !366
  store i64 %22, i64* %rdx.1.reg2mem, !insn.addr !366
  store i32 %21, i32* %r12.1.reg2mem, !insn.addr !366
  br i1 %24, label %dec_label_pc_1ca8, label %dec_label_pc_1cb4, !insn.addr !366

dec_label_pc_1cb4:                                ; preds = %dec_label_pc_1ca8
  %25 = zext i32 %21 to i64, !insn.addr !363
  call void @free(i64* nonnull %15), !insn.addr !367
  store i64 %25, i64* %r12.2.reg2mem, !insn.addr !367
  br label %dec_label_pc_1cb9, !insn.addr !367

dec_label_pc_1cb9:                                ; preds = %dec_label_pc_1c69, %dec_label_pc_1cb4
  %r12.2.reload = load i64, i64* %r12.2.reg2mem
  %26 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3121, i64 0, i64 0), i64 %r12.2.reload), !insn.addr !368
  %27 = call i32 @heap_realloc(), !insn.addr !369
  %28 = zext i32 %27 to i64, !insn.addr !370
  %29 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3338, i64 0, i64 0), i64 %28), !insn.addr !371
  %30 = call i64* @malloc(i32 40), !insn.addr !372
  %31 = ptrtoint i64* %30 to i64, !insn.addr !372
  %32 = icmp eq i64* %30, null, !insn.addr !373
  store i64 %31, i64* %rcx.0.reg2mem, !insn.addr !374
  store i64 0, i64* %rdx.2.reg2mem, !insn.addr !374
  store i64 4294967295, i64* %r12.3.reg2mem, !insn.addr !374
  br i1 %32, label %dec_label_pc_1d27, label %dec_label_pc_1d10, !insn.addr !374

dec_label_pc_1d10:                                ; preds = %dec_label_pc_1cb9, %dec_label_pc_1d10
  %rdx.2.reload = load i64, i64* %rdx.2.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %33 = trunc i64 %rdx.2.reload to i32, !insn.addr !375
  %34 = inttoptr i64 %rcx.0.reload to i32*, !insn.addr !375
  store i32 %33, i32* %34, align 4, !insn.addr !375
  %35 = add nuw nsw i64 %rdx.2.reload, 3, !insn.addr !376
  %36 = and i64 %35, 4294967295, !insn.addr !376
  %37 = add i64 %rcx.0.reload, 4, !insn.addr !377
  %38 = trunc i64 %35 to i32, !insn.addr !378
  %39 = icmp eq i32 %38, 30, !insn.addr !378
  %40 = icmp eq i1 %39, false, !insn.addr !379
  store i64 %37, i64* %rcx.0.reg2mem, !insn.addr !379
  store i64 %36, i64* %rdx.2.reg2mem, !insn.addr !379
  br i1 %40, label %dec_label_pc_1d10, label %dec_label_pc_1d1e, !insn.addr !379

dec_label_pc_1d1e:                                ; preds = %dec_label_pc_1d10
  %41 = add i64 %31, 20, !insn.addr !380
  %42 = inttoptr i64 %41 to i32*, !insn.addr !380
  %43 = load i32, i32* %42, align 4, !insn.addr !380
  %44 = zext i32 %43 to i64, !insn.addr !380
  call void @free(i64* nonnull %30), !insn.addr !381
  store i64 %44, i64* %r12.3.reg2mem, !insn.addr !381
  br label %dec_label_pc_1d27, !insn.addr !381

dec_label_pc_1d27:                                ; preds = %dec_label_pc_1cb9, %dec_label_pc_1d1e
  %r12.3.reload = load i64, i64* %r12.3.reg2mem
  %45 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_313f, i64 0, i64 0), i64 %r12.3.reload), !insn.addr !382
  %46 = call i64* @malloc(i32 8), !insn.addr !383
  %47 = icmp eq i64* %46, null, !insn.addr !384
  store i64 4294967295, i64* %storemerge2.reg2mem, !insn.addr !385
  br i1 %47, label %dec_label_pc_1d5d, label %dec_label_pc_1d53, !insn.addr !385

dec_label_pc_1d53:                                ; preds = %dec_label_pc_1d27
  call void @free(i64* nonnull %46), !insn.addr !386
  store i64 15, i64* %storemerge2.reg2mem, !insn.addr !387
  br label %dec_label_pc_1d5d, !insn.addr !387

dec_label_pc_1d5d:                                ; preds = %dec_label_pc_1d27, %dec_label_pc_1d53
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %48 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_315c, i64 0, i64 0), i64 %storemerge2.reload), !insn.addr !388
  %49 = call i64* @malloc(i32 16), !insn.addr !389
  %50 = icmp eq i64* %49, null, !insn.addr !390
  br i1 %50, label %dec_label_pc_1fc2, label %dec_label_pc_1d86, !insn.addr !391

dec_label_pc_1d86:                                ; preds = %dec_label_pc_1d5d
  %51 = ptrtoint i64* %49 to i64, !insn.addr !389
  %52 = call i64* @malloc(i32 16), !insn.addr !392
  %53 = ptrtoint i64* %52 to i64, !insn.addr !392
  %54 = add i64 %51, 8, !insn.addr !393
  %55 = inttoptr i64 %54 to i64*, !insn.addr !393
  store i64 %53, i64* %55, align 8, !insn.addr !393
  %56 = icmp eq i64* %52, null, !insn.addr !394
  br i1 %56, label %dec_label_pc_1fb0, label %dec_label_pc_1d9e, !insn.addr !395

dec_label_pc_1d9e:                                ; preds = %dec_label_pc_1d86
  %57 = bitcast i64* %52 to i32*, !insn.addr !396
  store i32 20, i32* %57, align 4, !insn.addr !396
  %58 = add i64 %53, 8, !insn.addr !397
  %59 = inttoptr i64 %58 to i64*, !insn.addr !397
  store i64 0, i64* %59, align 8, !insn.addr !397
  store i64 0, i64* %rdx.3.reg2mem, !insn.addr !397
  br label %dec_label_pc_1dae, !insn.addr !397

dec_label_pc_1dae:                                ; preds = %dec_label_pc_1fb0, %dec_label_pc_1d9e
  %rdx.3.reload = load i64, i64* %rdx.3.reg2mem
  %60 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_31b3, i64 0, i64 0), i64 %rdx.3.reload), !insn.addr !398
  %61 = load i64, i64* %55, align 8, !insn.addr !399
  %62 = inttoptr i64 %61 to i64*, !insn.addr !400
  call void @free(i64* %62), !insn.addr !400
  call void @free(i64* nonnull %49), !insn.addr !401
  br label %dec_label_pc_1dd3, !insn.addr !401

dec_label_pc_1dd3:                                ; preds = %dec_label_pc_1fc2, %dec_label_pc_1dae
  %63 = call i32 @linked_list_heap(), !insn.addr !402
  %64 = zext i32 %63 to i64, !insn.addr !403
  %65 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3358, i64 0, i64 0), i64 %64), !insn.addr !404
  %66 = call i32 @tree_heap_traversal(), !insn.addr !405
  %67 = zext i32 %66 to i64, !insn.addr !406
  %68 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3380, i64 0, i64 0), i64 %67), !insn.addr !407
  %69 = call i64* @malloc(i32 20), !insn.addr !408
  %70 = icmp eq i64* %69, null, !insn.addr !409
  store i64 4294967295, i64* %rdx.4.reg2mem, !insn.addr !410
  br i1 %70, label %dec_label_pc_1e45, label %dec_label_pc_1e1e, !insn.addr !410

dec_label_pc_1e1e:                                ; preds = %dec_label_pc_1dd3
  %71 = ptrtoint i64* %69 to i64, !insn.addr !408
  %72 = add i64 %71, 16, !insn.addr !411
  %73 = inttoptr i64 %72 to i32*, !insn.addr !411
  store i32 4, i32* %73, align 4, !insn.addr !411
  store i64 4294967296, i64* %69, align 8, !insn.addr !412
  %74 = add i64 %71, 8, !insn.addr !413
  %75 = inttoptr i64 %74 to i64*, !insn.addr !413
  store i64 12884901890, i64* %75, align 8, !insn.addr !413
  store i64 2, i64* %rdx.4.reg2mem, !insn.addr !413
  br label %dec_label_pc_1e45, !insn.addr !413

dec_label_pc_1e45:                                ; preds = %dec_label_pc_1dd3, %dec_label_pc_1e1e
  %rdx.4.reload = load i64, i64* %rdx.4.reg2mem
  %76 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_317a, i64 0, i64 0), i64 %rdx.4.reload), !insn.addr !414
  %77 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_33a8, i64 0, i64 0)), !insn.addr !415
  %78 = call i32 @fork(), !insn.addr !416
  %79 = icmp eq i32 %78, 0, !insn.addr !417
  br i1 %79, label %dec_label_pc_1ef0, label %dec_label_pc_1e74, !insn.addr !418

dec_label_pc_1e74:                                ; preds = %dec_label_pc_1e45
  %80 = icmp slt i32 %78, 1
  br i1 %80, label %dec_label_pc_1ec0, label %dec_label_pc_1e76, !insn.addr !419

dec_label_pc_1e76:                                ; preds = %dec_label_pc_1e74
  %81 = call i32 @waitpid(i32 %78, i32* nonnull %stack_var_-20, i32 0), !insn.addr !420
  %82 = load i32, i32* %stack_var_-20, align 4, !insn.addr !421
  %83 = urem i32 %82, 128, !insn.addr !422
  %84 = icmp eq i32 %83, 0, !insn.addr !422
  br i1 %84, label %dec_label_pc_1f60, label %dec_label_pc_1e93, !insn.addr !423

dec_label_pc_1e93:                                ; preds = %dec_label_pc_1e76
  %85 = trunc i32 %83 to i8
  %86 = add nuw i8 %85, 1, !insn.addr !424
  %87 = icmp sgt i8 %86, 1, !insn.addr !424
  br i1 %87, label %dec_label_pc_1f48, label %dec_label_pc_1e9e, !insn.addr !424

dec_label_pc_1e9e:                                ; preds = %dec_label_pc_1f60, %dec_label_pc_1f48, %dec_label_pc_1e93
  %88 = call i64 @__readfsqword(i64 40), !insn.addr !425
  %89 = icmp eq i64 %0, %88, !insn.addr !425
  %90 = icmp eq i1 %89, false, !insn.addr !426
  br i1 %90, label %dec_label_pc_1f83, label %dec_label_pc_1eb2, !insn.addr !426

dec_label_pc_1eb2:                                ; preds = %dec_label_pc_1e9e
  ret void, !insn.addr !427

dec_label_pc_1ec0:                                ; preds = %dec_label_pc_1e74
  %91 = call i64 @__readfsqword(i64 40), !insn.addr !428
  %92 = icmp eq i64 %0, %91, !insn.addr !428
  %93 = icmp eq i1 %92, false, !insn.addr !429
  br i1 %93, label %dec_label_pc_1f83, label %dec_label_pc_1ed4, !insn.addr !429

dec_label_pc_1ed4:                                ; preds = %dec_label_pc_1ec0
  call void @perror(i8* bitcast (i8** @global_var_31a8 to i8*)), !insn.addr !430
  ret void, !insn.addr !430

dec_label_pc_1ef0:                                ; preds = %dec_label_pc_1e45
  %94 = call i64* @malloc(i32 4), !insn.addr !431
  %95 = icmp eq i64* %94, null, !insn.addr !432
  br i1 %95, label %dec_label_pc_1f2a, label %dec_label_pc_1f06, !insn.addr !433

dec_label_pc_1f06:                                ; preds = %dec_label_pc_1ef0
  %96 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_30cf, i64 0, i64 0), i64 42), !insn.addr !434
  call void @free(i64* nonnull %94), !insn.addr !435
  br label %dec_label_pc_1f2a, !insn.addr !436

dec_label_pc_1f2a:                                ; preds = %dec_label_pc_1ef0, %dec_label_pc_1f83, %dec_label_pc_1f06
  %97 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3198 to i8*)), !insn.addr !437
  call void @exit(i32 0), !insn.addr !438
  unreachable, !insn.addr !438

dec_label_pc_1f48:                                ; preds = %dec_label_pc_1e93
  %98 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_33f0 to i8*)), !insn.addr !439
  br label %dec_label_pc_1e9e, !insn.addr !440

dec_label_pc_1f60:                                ; preds = %dec_label_pc_1e76
  %99 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_33c8 to i8*)), !insn.addr !441
  br label %dec_label_pc_1e9e, !insn.addr !442

dec_label_pc_1f83:                                ; preds = %dec_label_pc_1ec0, %dec_label_pc_1e9e
  call void @__stack_chk_fail(), !insn.addr !443
  br label %dec_label_pc_1f2a, !insn.addr !443

dec_label_pc_1fb0:                                ; preds = %dec_label_pc_1d86
  call void @free(i64* nonnull %49), !insn.addr !444
  store i64 4294967294, i64* %rdx.3.reg2mem, !insn.addr !445
  br label %dec_label_pc_1dae, !insn.addr !445

dec_label_pc_1fc2:                                ; preds = %dec_label_pc_1d5d
  %100 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_31b3, i64 0, i64 0), i64 4294967295), !insn.addr !446
  br label %dec_label_pc_1dd3, !insn.addr !447

; uselistorder directives
  uselistorder i32 %83, { 1, 0 }
  uselistorder i64* %69, { 0, 2, 1 }
  uselistorder i64* %49, { 0, 1, 3, 2 }
  uselistorder i64 %rcx.0.reload, { 1, 0 }
  uselistorder i64 %rdx.2.reload, { 1, 0 }
  uselistorder i64 %31, { 1, 0 }
  uselistorder i32 %21, { 1, 0 }
  uselistorder i64 %rdx.1.reload, { 2, 0, 1 }
  uselistorder i64* %15, { 0, 2, 1 }
  uselistorder i64 %rdx.0.reload, { 1, 2, 0 }
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r12.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rdx.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r12.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r12.2.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rcx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.2.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r12.3.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge2.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rdx.3.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.4.reg2mem, { 0, 2, 1 }
  uselistorder i64 42, { 1, 2, 3, 0 }
  uselistorder i8 1, { 1, 0, 2 }
  uselistorder i32 20, { 0, 3, 2, 1 }
  uselistorder i64 8, { 10, 11, 12, 0, 3, 4, 5, 6, 7, 1, 2, 8, 9 }
  uselistorder i64 16, { 3, 0, 1, 2 }
  uselistorder i32 4, { 3, 8, 4, 5, 6, 0, 1, 7, 2 }
  uselistorder void (i64*)* @free, { 7, 6, 5, 4, 3, 2, 1, 0, 19, 18, 17, 25, 16, 15, 13, 12, 14, 11, 10, 24, 23, 22, 9, 8, 21, 20, 26 }
  uselistorder i64 4, { 15, 16, 0, 14, 1, 2, 3, 11, 12, 4, 5, 6, 7, 17, 8, 9, 10, 13 }
  uselistorder i64* (i32)* @malloc, { 6, 5, 4, 3, 2, 1, 0, 13, 12, 21, 20, 11, 10, 9, 19, 8, 18, 17, 16, 15, 7, 14, 22 }
  uselistorder label %dec_label_pc_1f2a, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1e45, { 1, 0 }
  uselistorder label %dec_label_pc_1d5d, { 1, 0 }
  uselistorder label %dec_label_pc_1d27, { 1, 0 }
  uselistorder label %dec_label_pc_1d10, { 1, 0 }
  uselistorder label %dec_label_pc_1cb9, { 1, 0 }
  uselistorder label %dec_label_pc_1ca8, { 1, 0 }
  uselistorder label %dec_label_pc_1c69, { 1, 0 }
  uselistorder label %dec_label_pc_1c50, { 1, 0 }
}

define i64 @global_var_access() local_unnamed_addr {
dec_label_pc_1fe0:
  %0 = load i32, i32* @global_counter, align 4, !insn.addr !448
  %1 = add i32 %0, 1, !insn.addr !449
  %2 = zext i32 %1 to i64, !insn.addr !449
  store i32 %1, i32* @global_counter, align 4, !insn.addr !450
  ret i64 %2, !insn.addr !451
}

define i64 @global_var_read() local_unnamed_addr {
dec_label_pc_2000:
  %0 = load i32, i32* @global_counter, align 4, !insn.addr !452
  %1 = mul i32 %0, 2, !insn.addr !453
  %2 = zext i32 %1 to i64, !insn.addr !453
  ret i64 %2, !insn.addr !454
}

define i64 @global_array_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_2010:
  %0 = trunc i64 %arg1 to i32, !insn.addr !455
  %1 = icmp ult i32 %0, 10
  br i1 %1, label %dec_label_pc_2019, label %dec_label_pc_2030, !insn.addr !456

dec_label_pc_2019:                                ; preds = %dec_label_pc_2010
  %sext = mul i64 %arg1, 4294967296
  %2 = ashr exact i64 %sext, 30, !insn.addr !457
  %3 = add i64 %2, ptrtoint ([10 x i32]* @global_array to i64), !insn.addr !457
  %4 = inttoptr i64 %3 to i32*, !insn.addr !457
  %5 = load i32, i32* %4, align 4, !insn.addr !457
  %6 = zext i32 %5 to i64, !insn.addr !457
  ret i64 %6, !insn.addr !458

dec_label_pc_2030:                                ; preds = %dec_label_pc_2010
  ret i64 4294967295, !insn.addr !459

; uselistorder directives
  uselistorder i64 4294967296, { 0, 4, 1, 2, 3 }
  uselistorder i32 10, { 0, 2, 1 }
}

define i64 @static_local(i64 %arg1) local_unnamed_addr {
dec_label_pc_2040:
  %0 = trunc i64 %arg1 to i32, !insn.addr !460
  %1 = icmp eq i32 %0, 0, !insn.addr !460
  %2 = icmp eq i1 %1, false, !insn.addr !461
  %spec.select = select i1 %2, i64 0, i64 ptrtoint (i32* @global_var_6031 to i64)
  %3 = trunc i64 %spec.select to i32, !insn.addr !462
  store i32 %3, i32* bitcast (i64* @global_var_6030 to i32*), align 8, !insn.addr !462
  ret i64 %spec.select, !insn.addr !463

; uselistorder directives
  uselistorder i64 %spec.select, { 1, 0 }
}

define i64 @call_static_func(i64 %arg1) local_unnamed_addr {
dec_label_pc_2060:
  %factor = mul i64 %arg1, 2
  %0 = and i64 %factor, 4294967294, !insn.addr !464
  %1 = or i64 %0, 1, !insn.addr !464
  ret i64 %1, !insn.addr !465
}

define i64 @access_extern_global() local_unnamed_addr {
dec_label_pc_2070:
  %0 = load i32, i32* @extern_global_var, align 4, !insn.addr !466
  %1 = add i32 %0, 100, !insn.addr !467
  %2 = zext i32 %1 to i64, !insn.addr !467
  ret i64 %2, !insn.addr !468
}

define i64 @call_extern_func() local_unnamed_addr {
dec_label_pc_2080:
  %0 = call i32 @extern_function(i32 5), !insn.addr !469
  %1 = sext i32 %0 to i64, !insn.addr !469
  ret i64 %1, !insn.addr !469
}

define i64 @read_const_data() local_unnamed_addr {
dec_label_pc_2090:
  ret i64 ptrtoint (i32* @global_var_6046 to i64), !insn.addr !470
}

define i64 @access_bss_var() local_unnamed_addr {
dec_label_pc_20b0:
  ret i64 0, !insn.addr !471
}

define i64 @access_bss_buffer() local_unnamed_addr {
dec_label_pc_20c0:
  ret i64 0, !insn.addr !472
}

define i64 @global_struct_access() local_unnamed_addr {
dec_label_pc_20d0:
  ret i64 30, !insn.addr !473
}

define i64 @set_file_static(i64 %arg1) local_unnamed_addr {
dec_label_pc_20e0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg1 to i32, !insn.addr !474
  store i32 %2, i32* @file_scope_static, align 4, !insn.addr !474
  ret i64 %1, !insn.addr !475
}

define i64 @get_file_static() local_unnamed_addr {
dec_label_pc_20f0:
  %0 = load i32, i32* @file_scope_static, align 4, !insn.addr !476
  %1 = zext i32 %0 to i64, !insn.addr !476
  ret i64 %1, !insn.addr !477
}

define i64 @set_global_callback(i64 %arg1) local_unnamed_addr {
dec_label_pc_2100:
  %0 = alloca i64
  %1 = load i64, i64* %0
  store i64 %arg1, i64* bitcast (i32 (i32)** @global_func_ptr to i64*), align 8, !insn.addr !478
  ret i64 %1, !insn.addr !479
}

define i64 @call_global_callback() local_unnamed_addr {
dec_label_pc_2110:
  %0 = load i32 (i32)*, i32 (i32)** @global_func_ptr, align 8, !insn.addr !480
  %1 = icmp eq i32 (i32)* %0, null, !insn.addr !481
  br i1 %1, label %dec_label_pc_2128, label %dec_label_pc_2120, !insn.addr !482

dec_label_pc_2120:                                ; preds = %dec_label_pc_2110
  %2 = ptrtoint i32 (i32)* %0 to i64, !insn.addr !480
  ret i64 %2, !insn.addr !483

dec_label_pc_2128:                                ; preds = %dec_label_pc_2110
  ret i64 4294967295, !insn.addr !484

; uselistorder directives
  uselistorder i32 (i32)* %0, { 1, 0 }
}

define i64 @global_heap_store(i64 %arg1) local_unnamed_addr {
dec_label_pc_2130:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %arg1, 0, !insn.addr !485
  br i1 %2, label %dec_label_pc_2140, label %dec_label_pc_2139, !insn.addr !486

dec_label_pc_2139:                                ; preds = %dec_label_pc_2130
  %3 = and i64 %1, 4294967295, !insn.addr !487
  ret i64 %3, !insn.addr !488

dec_label_pc_2140:                                ; preds = %dec_label_pc_2130
  ret i64 4294967295, !insn.addr !489
}

define i64 @static_complex_init() local_unnamed_addr {
dec_label_pc_2150:
  ret i64 15, !insn.addr !490
}

define i64 @tls_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_2160:
  %0 = mul i64 %arg1, 2, !insn.addr !491
  %1 = and i64 %0, 4294967294, !insn.addr !491
  ret i64 %1, !insn.addr !492
}

define i64 @init_order_test() local_unnamed_addr {
dec_label_pc_2170:
  ret i64 20, !insn.addr !493
}

define void @test_static_global() local_unnamed_addr {
dec_label_pc_2180:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3438 to i8*)), !insn.addr !494
  %1 = load i32, i32* @global_counter, align 4, !insn.addr !495
  %2 = add i32 %1, 1, !insn.addr !496
  %3 = zext i32 %2 to i64, !insn.addr !496
  store i32 %2, i32* @global_counter, align 4, !insn.addr !497
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3460, i64 0, i64 0), i64 %3), !insn.addr !498
  %5 = load i32, i32* @global_counter, align 4, !insn.addr !499
  %6 = mul i32 %5, 2, !insn.addr !500
  %7 = zext i32 %6 to i64, !insn.addr !500
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3488, i64 0, i64 0), i64 %7), !insn.addr !501
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_34b0, i64 0, i64 0), i64 5), !insn.addr !502
  store i32 1, i32* bitcast (i64* @global_var_6030 to i32*), align 8, !insn.addr !503
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_31d1, i64 0, i64 0), i64 1), !insn.addr !504
  store i32 ptrtoint (i32* @global_var_6031 to i32), i32* bitcast (i64* @global_var_6030 to i32*), align 8, !insn.addr !505
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_31d1, i64 0, i64 0), i64 ptrtoint (i32* @global_var_6031 to i64)), !insn.addr !506
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_34d8, i64 0, i64 0), i64 11), !insn.addr !507
  %13 = load i32, i32* @extern_global_var, align 4, !insn.addr !508
  %14 = add i32 %13, 100, !insn.addr !509
  %15 = zext i32 %14 to i64, !insn.addr !509
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3500, i64 0, i64 0), i64 %15), !insn.addr !510
  %17 = call i32 @extern_function(i32 5), !insn.addr !511
  %18 = zext i32 %17 to i64, !insn.addr !512
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3528, i64 0, i64 0), i64 %18), !insn.addr !513
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3550, i64 0, i64 0), i64 ptrtoint (i32* @global_var_6046 to i64)), !insn.addr !514
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3578, i64 0, i64 0), i64 zext (i32 xor (i32 ptrtoint (i32* @global_var_6046 to i32), i32 ptrtoint (i32* @global_var_6046 to i32)) to i64)), !insn.addr !515
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3598, i64 0, i64 0), i64 zext (i32 xor (i32 xor (i32 ptrtoint (i32* @global_var_6046 to i32), i32 ptrtoint (i32* @global_var_6046 to i32)), i32 xor (i32 ptrtoint (i32* @global_var_6046 to i32), i32 ptrtoint (i32* @global_var_6046 to i32))) to i64)), !insn.addr !516
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_35c0, i64 0, i64 0), i64 30), !insn.addr !517
  store i32 50, i32* @file_scope_static, align 4, !insn.addr !518
  %24 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_31ef, i64 0, i64 0), i64 50), !insn.addr !519
  store i64 4928, i64* bitcast (i32 (i32)** @global_func_ptr to i64*), align 8, !insn.addr !520
  %25 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_35e8, i64 0, i64 0), i64 10), !insn.addr !521
  %26 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3610, i64 0, i64 0), i64 100), !insn.addr !522
  %27 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_3638, i64 0, i64 0), i64 15), !insn.addr !523
  %28 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_320c, i64 0, i64 0), i64 20), !insn.addr !524
  %29 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3660, i64 0, i64 0), i64 20), !insn.addr !525
  ret void, !insn.addr !525

; uselistorder directives
  uselistorder i64 20, { 2, 3, 0, 6, 7, 4, 5, 1 }
  uselistorder i64 15, { 4, 1, 0, 5, 2, 3 }
  uselistorder i64 100, { 1, 0 }
  uselistorder i32 50, { 2, 1, 0 }
  uselistorder i64 30, { 3, 0, 1, 2 }
  uselistorder i64 ptrtoint (i32* @global_var_6046 to i64), { 1, 0 }
  uselistorder i32 100, { 0, 2, 1 }
  uselistorder i64 ptrtoint (i32* @global_var_6031 to i64), { 1, 0 }
}

define i64 @memop_memset(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2390:
  %0 = icmp eq i64 %arg1, 0, !insn.addr !526
  %1 = icmp eq i64 %arg2, 0, !insn.addr !527
  %or.cond = or i1 %0, %1
  br i1 %or.cond, label %dec_label_pc_23c0, label %dec_label_pc_23a1, !insn.addr !528

dec_label_pc_23a1:                                ; preds = %dec_label_pc_2390
  %2 = trunc i64 %arg3 to i32, !insn.addr !529
  %3 = inttoptr i64 %arg1 to i64*, !insn.addr !530
  %4 = trunc i64 %arg2 to i32, !insn.addr !530
  %5 = call i64* @memset(i64* %3, i32 %2, i32 %4), !insn.addr !530
  %6 = bitcast i64* %5 to i8*, !insn.addr !531
  %7 = load i8, i8* %6, align 1, !insn.addr !531
  %8 = zext i8 %7 to i64, !insn.addr !531
  ret i64 %8, !insn.addr !532

dec_label_pc_23c0:                                ; preds = %dec_label_pc_2390
  ret i64 4294967295, !insn.addr !533

; uselistorder directives
  uselistorder i64 %arg2, { 1, 0 }
}

define i64 @memop_memcpy(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_23d0:
  %0 = icmp eq i64 %arg2, 0, !insn.addr !534
  %1 = icmp eq i64 %arg3, 0, !insn.addr !535
  %2 = or i1 %0, %1
  %3 = icmp eq i1 %2, false, !insn.addr !536
  %4 = icmp eq i1 %3, false, !insn.addr !537
  %5 = icmp eq i64 %arg1, 0, !insn.addr !538
  %or.cond = or i1 %5, %4
  br i1 %or.cond, label %dec_label_pc_2400, label %dec_label_pc_23ed, !insn.addr !537

dec_label_pc_23ed:                                ; preds = %dec_label_pc_23d0
  %6 = inttoptr i64 %arg1 to i64*, !insn.addr !539
  %7 = inttoptr i64 %arg2 to i64*, !insn.addr !539
  %8 = trunc i64 %arg3 to i32, !insn.addr !539
  %9 = call i64* @memcpy(i64* %6, i64* %7, i32 %8), !insn.addr !539
  %10 = ptrtoint i64* %9 to i64, !insn.addr !539
  %11 = add i64 %arg3, -4
  %12 = and i64 %11, -4, !insn.addr !540
  %13 = add i64 %12, %10, !insn.addr !540
  %14 = inttoptr i64 %13 to i32*, !insn.addr !540
  %15 = load i32, i32* %14, align 4, !insn.addr !540
  %16 = zext i32 %15 to i64, !insn.addr !540
  ret i64 %16, !insn.addr !541

dec_label_pc_2400:                                ; preds = %dec_label_pc_23d0
  ret i64 4294967295, !insn.addr !542

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @memop_memmove(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2410:
  %0 = icmp eq i64 %arg1, 0, !insn.addr !543
  %1 = icmp ult i64 %arg2, 2
  %or.cond = or i1 %0, %1
  br i1 %or.cond, label %dec_label_pc_2440, label %dec_label_pc_241f, !insn.addr !544

dec_label_pc_241f:                                ; preds = %dec_label_pc_2410
  %2 = add i64 %arg1, 1, !insn.addr !545
  %3 = inttoptr i64 %2 to i64*, !insn.addr !546
  %4 = inttoptr i64 %arg1 to i64*, !insn.addr !546
  %5 = trunc i64 %arg2 to i32
  %6 = add i32 %5, -1, !insn.addr !546
  %7 = call i64* @memmove(i64* %3, i64* %4, i32 %6), !insn.addr !546
  %8 = inttoptr i64 %2 to i8*, !insn.addr !547
  %9 = load i8, i8* %8, align 1, !insn.addr !547
  %10 = sext i8 %9 to i64, !insn.addr !547
  ret i64 %10, !insn.addr !548

dec_label_pc_2440:                                ; preds = %dec_label_pc_2410
  ret i64 4294967295, !insn.addr !549

; uselistorder directives
  uselistorder i32 -1, { 7, 0, 6, 1, 2, 3, 4, 5, 8 }
  uselistorder i64 %arg2, { 1, 0 }
}

define i64 @memop_memcmp(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_2450:
  %0 = icmp eq i64 %arg2, 0, !insn.addr !550
  %1 = icmp eq i64 %arg3, 0, !insn.addr !551
  %2 = or i1 %0, %1
  %3 = icmp eq i1 %2, false, !insn.addr !552
  %4 = icmp eq i1 %3, false, !insn.addr !553
  %5 = icmp eq i64 %arg1, 0, !insn.addr !554
  %or.cond = or i1 %5, %4
  br i1 %or.cond, label %dec_label_pc_2490, label %dec_label_pc_2469, !insn.addr !553

dec_label_pc_2469:                                ; preds = %dec_label_pc_2450
  %6 = inttoptr i64 %arg1 to i64*, !insn.addr !555
  %7 = inttoptr i64 %arg2 to i64*, !insn.addr !555
  %8 = trunc i64 %arg3 to i32, !insn.addr !555
  %9 = call i32 @memcmp(i64* %6, i64* %7, i32 %8), !insn.addr !555
  %10 = icmp eq i32 %9, 0, !insn.addr !556
  %11 = icmp eq i1 %10, false, !insn.addr !557
  %12 = icmp slt i32 %9, 0, !insn.addr !558
  %13 = icmp eq i1 %12, false, !insn.addr !559
  %14 = icmp eq i1 %13, %11, !insn.addr !559
  %15 = select i1 %11, i64 4294967295, i64 0
  %16 = select i1 %14, i64 1, i64 %15, !insn.addr !559
  ret i64 %16, !insn.addr !560

dec_label_pc_2490:                                ; preds = %dec_label_pc_2450
  ret i64 0, !insn.addr !561

; uselistorder directives
  uselistorder i1 %11, { 1, 0 }
}

define i64 @memop_bzero(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_24a0:
  %0 = icmp eq i64 %arg1, 0, !insn.addr !562
  br i1 %0, label %dec_label_pc_24bf, label %dec_label_pc_24a9, !insn.addr !563

dec_label_pc_24a9:                                ; preds = %dec_label_pc_24a0
  %1 = inttoptr i64 %arg1 to i64*, !insn.addr !564
  %2 = trunc i64 %arg2 to i32, !insn.addr !564
  %3 = call i64* @memset(i64* %1, i32 0, i32 %2), !insn.addr !564
  %4 = bitcast i64* %3 to i8*, !insn.addr !565
  %5 = load i8, i8* %4, align 1, !insn.addr !565
  %6 = zext i8 %5 to i64, !insn.addr !565
  ret i64 %6, !insn.addr !566

dec_label_pc_24bf:                                ; preds = %dec_label_pc_24a0
  ret i64 4294967295, !insn.addr !567

; uselistorder directives
  uselistorder i64* (i64*, i32, i32)* @memset, { 1, 0, 2 }
}

define i64 @memop_bcopy(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_24d0:
  %0 = icmp eq i64 %arg2, 0, !insn.addr !568
  %1 = icmp eq i64 %arg3, 0, !insn.addr !569
  %2 = or i1 %0, %1
  %3 = icmp eq i1 %2, false, !insn.addr !570
  %4 = icmp eq i1 %3, false, !insn.addr !571
  %5 = icmp eq i64 %arg1, 0, !insn.addr !572
  %or.cond = or i1 %5, %4
  br i1 %or.cond, label %dec_label_pc_2508, label %dec_label_pc_24ee, !insn.addr !571

dec_label_pc_24ee:                                ; preds = %dec_label_pc_24d0
  %6 = inttoptr i64 %arg2 to i64*, !insn.addr !573
  %7 = inttoptr i64 %arg1 to i64*, !insn.addr !573
  %8 = trunc i64 %arg3 to i32, !insn.addr !573
  %9 = call i64* @memmove(i64* %6, i64* %7, i32 %8), !insn.addr !573
  %10 = bitcast i64* %9 to i8*, !insn.addr !574
  %11 = load i8, i8* %10, align 1, !insn.addr !574
  %12 = zext i8 %11 to i64, !insn.addr !574
  ret i64 %12, !insn.addr !575

dec_label_pc_2508:                                ; preds = %dec_label_pc_24d0
  ret i64 4294967295, !insn.addr !576

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @memop_unaligned_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_2510:
  %0 = icmp eq i64 %arg1, 0, !insn.addr !577
  br i1 %0, label %dec_label_pc_251d, label %dec_label_pc_2519, !insn.addr !578

dec_label_pc_2519:                                ; preds = %dec_label_pc_2510
  %1 = add i64 %arg1, 1, !insn.addr !579
  %2 = inttoptr i64 %1 to i32*, !insn.addr !579
  %3 = load i32, i32* %2, align 4, !insn.addr !579
  %4 = zext i32 %3 to i64, !insn.addr !579
  ret i64 %4, !insn.addr !580

dec_label_pc_251d:                                ; preds = %dec_label_pc_2510
  ret i64 4294967295, !insn.addr !581
}

define i64 @memop_memory_barrier(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2530:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %arg1, 0, !insn.addr !582
  br i1 %2, label %dec_label_pc_2546, label %dec_label_pc_2539, !insn.addr !583

dec_label_pc_2539:                                ; preds = %dec_label_pc_2530
  %3 = mul i64 %1, 2, !insn.addr !584
  %4 = and i64 %3, 4294967294, !insn.addr !584
  ret i64 %4, !insn.addr !585

dec_label_pc_2546:                                ; preds = %dec_label_pc_2530
  ret i64 4294967295, !insn.addr !586

; uselistorder directives
  uselistorder i64 4294967294, { 2, 6, 4, 0, 1, 3, 5, 7 }
  uselistorder i64 2, { 1, 7, 2, 3, 0, 8, 4, 5, 6 }
}

define void @test_memory_op_functions() local_unnamed_addr {
dec_label_pc_2550:
  %stack_var_-328 = alloca i64, align 8
  %stack_var_-316 = alloca i64, align 8
  %stack_var_-290 = alloca i64, align 8
  %stack_var_-291 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !587
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_3688 to i8*)), !insn.addr !588
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3228, i64 0, i64 0), i64 65), !insn.addr !589
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3239, i64 0, i64 0), i64 50), !insn.addr !590
  store i64 8245905578810697032, i64* %stack_var_-291, align 8, !insn.addr !591
  %4 = call i64* @memmove(i64* nonnull %stack_var_-290, i64* nonnull %stack_var_-291, i32 9), !insn.addr !592
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_324a, i64 0, i64 0), i8 72), !insn.addr !593
  store i64 8589934593, i64* %stack_var_-328, align 8, !insn.addr !594
  store i64 8589934593, i64* %stack_var_-316, align 8, !insn.addr !595
  %6 = call i32 @memcmp(i64* nonnull %stack_var_-328, i64* nonnull %stack_var_-316, i32 12), !insn.addr !596
  %7 = icmp eq i32 %6, 0, !insn.addr !597
  %8 = icmp eq i1 %7, false, !insn.addr !598
  %9 = icmp slt i32 %6, 0, !insn.addr !599
  %10 = icmp eq i1 %9, false, !insn.addr !600
  %11 = icmp eq i1 %10, %8, !insn.addr !600
  %12 = select i1 %8, i64 4294967295, i64 0
  %13 = select i1 %11, i64 1, i64 %12, !insn.addr !600
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_325b, i64 0, i64 0), i64 %13), !insn.addr !601
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_326c, i64 0, i64 0), i64 0), !insn.addr !602
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_327d, i64 0, i64 0), i64 1), !insn.addr !603
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_328e, i64 0, i64 0), i32 67305985), !insn.addr !604
  %18 = call i64 @__readfsqword(i64 40), !insn.addr !605
  %19 = icmp eq i64 %0, %18, !insn.addr !605
  %20 = icmp eq i1 %19, false, !insn.addr !606
  br i1 %20, label %dec_label_pc_2705, label %dec_label_pc_26e9, !insn.addr !606

dec_label_pc_26e9:                                ; preds = %dec_label_pc_2550
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_32a1, i64 0, i64 0), i64 10), !insn.addr !607
  ret void, !insn.addr !607

dec_label_pc_2705:                                ; preds = %dec_label_pc_2550
  call void @__stack_chk_fail(), !insn.addr !608
  ret void, !insn.addr !609

; uselistorder directives
  uselistorder i1 %8, { 1, 0 }
  uselistorder void ()* @__stack_chk_fail, { 4, 5, 0, 2, 1, 3, 6 }
  uselistorder i64 10, { 2, 4, 0, 3, 5, 6, 1 }
  uselistorder i64 1, { 3, 1, 5, 2, 6, 4, 0, 10, 7, 8, 9, 11 }
  uselistorder i64 4294967295, { 24, 12, 13, 14, 15, 25, 16, 17, 18, 19, 23, 20, 21, 26, 0, 1, 27, 2, 3, 4, 28, 22, 5, 29, 6, 30, 31, 7, 32, 8, 33, 9, 10, 34, 35, 11, 36, 37 }
  uselistorder i1 false, { 21, 3, 22, 5, 0, 4, 6, 7, 1, 8, 2, 9, 28, 29, 30, 31, 20, 10, 23, 24, 25, 26, 11, 27, 12, 13, 32, 33, 34, 14, 15, 16, 35, 36, 17, 18, 19 }
  uselistorder i32 0, { 14, 15, 4, 11, 12, 13, 6, 16, 5, 17, 0, 1, 3, 2, 7, 8, 9, 10 }
  uselistorder i64 8589934593, { 1, 0, 2 }
  uselistorder i64* (i64*, i64*, i32)* @memmove, { 1, 0, 2, 3 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 50, 8, 7, 6, 5, 4, 3, 2, 1, 0, 51 }
  uselistorder i32 (i8*)* @puts, { 3, 2, 1, 0, 4 }
  uselistorder i64 0, { 50, 51, 52, 53, 54, 55, 48, 56, 57, 58, 59, 49, 60, 61, 62, 63, 64, 65, 145, 146, 44, 147, 148, 149, 17, 66, 45, 150, 151, 152, 46, 153, 154, 23, 155, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 156, 18, 19, 47, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 0, 168, 111, 112, 113, 114, 1, 115, 116, 117, 118, 119, 120, 2, 3, 121, 122, 20, 4, 157, 158, 162, 163, 164, 165, 166, 167, 5, 6, 7, 8, 159, 9, 10, 21, 11, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 12, 24, 13, 25, 14, 15, 160, 22, 16, 161, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 141, 142, 143, 144 }
}

define i32 @extern_function(i32 %x) local_unnamed_addr {
dec_label_pc_2710:
  %0 = mul i32 %x, 3, !insn.addr !610
  ret i32 %0, !insn.addr !611

; uselistorder directives
  uselistorder i32 3, { 2, 0, 3, 1 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_2718:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !612

; uselistorder directives
  uselistorder i32 1, { 7, 62, 63, 64, 65, 66, 67, 68, 69, 123, 122, 121, 120, 6, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 135, 86, 87, 88, 70, 5, 4, 3, 130, 89, 91, 92, 93, 90, 61, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 119, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 23, 22, 21, 2, 104, 131, 105, 25, 24, 26, 35, 34, 33, 32, 31, 30, 29, 28, 27, 36, 37, 132, 106, 40, 39, 38, 41, 107, 45, 44, 43, 42, 133, 108, 47, 46, 109, 110, 111, 112, 113, 114, 115, 116, 117, 136, 118, 124, 52, 51, 50, 49, 48, 134, 125, 56, 55, 54, 53, 126, 57, 9, 1, 128, 127, 59, 58, 8, 0, 129, 60 }
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
!44 = !{i64 4948}
!45 = !{i64 4952}
!46 = !{i64 4960}
!47 = !{i64 4970}
!48 = !{i64 4979}
!49 = !{i64 4984}
!50 = !{i64 4987}
!51 = !{i64 4992}
!52 = !{i64 4994}
!53 = !{i64 4998}
!54 = !{i64 5000}
!55 = !{i64 5003}
!56 = !{i64 5009}
!57 = !{i64 5014}
!58 = !{i64 5023}
!59 = !{i64 5005}
!60 = !{i64 5029}
!61 = !{i64 5030}
!62 = !{i64 5035}
!63 = !{i64 5044}
!64 = !{i64 5047}
!65 = !{i64 5060}
!66 = !{i64 5071}
!67 = !{i64 5078}
!68 = !{i64 5080}
!69 = !{i64 5088}
!70 = !{i64 5099}
!71 = !{i64 5118}
!72 = !{i64 5121}
!73 = !{i64 5128}
!74 = !{i64 5131}
!75 = !{i64 5135}
!76 = !{i64 5141}
!77 = !{i64 5159}
!78 = !{i64 5168}
!79 = !{i64 5143}
!80 = !{i64 5177}
!81 = !{i64 5178}
!82 = !{i64 5183}
!83 = !{i64 5184}
!84 = !{i64 5196}
!85 = !{i64 5211}
!86 = !{i64 5219}
!87 = !{i64 5192}
!88 = !{i64 5231}
!89 = !{i64 5242}
!90 = !{i64 5248}
!91 = !{i64 5255}
!92 = !{i64 5258}
!93 = !{i64 5260}
!94 = !{i64 5276}
!95 = !{i64 5279}
!96 = !{i64 5281}
!97 = !{i64 5287}
!98 = !{i64 5298}
!99 = !{i64 5302}
!100 = !{i64 5312}
!101 = !{i64 5315}
!102 = !{i64 5318}
!103 = !{i64 5322}
!104 = !{i64 5325}
!105 = !{i64 5327}
!106 = !{i64 5329}
!107 = !{i64 5332}
!108 = !{i64 5339}
!109 = !{i64 5348}
!110 = !{i64 5351}
!111 = !{i64 5375}
!112 = !{i64 5391}
!113 = !{i64 5392}
!114 = !{i64 5404}
!115 = !{i64 5421}
!116 = !{i64 5400}
!117 = !{i64 5433}
!118 = !{i64 5444}
!119 = !{i64 5450}
!120 = !{i64 5457}
!121 = !{i64 5460}
!122 = !{i64 5462}
!123 = !{i64 5478}
!124 = !{i64 5481}
!125 = !{i64 5483}
!126 = !{i64 5489}
!127 = !{i64 5497}
!128 = !{i64 5502}
!129 = !{i64 5507}
!130 = !{i64 5514}
!131 = !{i64 5520}
!132 = !{i64 5522}
!133 = !{i64 5525}
!134 = !{i64 5529}
!135 = !{i64 5531}
!136 = !{i64 5533}
!137 = !{i64 5535}
!138 = !{i64 5538}
!139 = !{i64 5545}
!140 = !{i64 5554}
!141 = !{i64 5557}
!142 = !{i64 5583}
!143 = !{i64 5599}
!144 = !{i64 5609}
!145 = !{i64 5631}
!146 = !{i64 5655}
!147 = !{i64 5679}
!148 = !{i64 5703}
!149 = !{i64 5727}
!150 = !{i64 5751}
!151 = !{i64 5758}
!152 = !{i64 5775}
!153 = !{i64 5779}
!154 = !{i64 5803}
!155 = !{i64 5813}
!156 = !{i64 5830}
!157 = !{i64 5834}
!158 = !{i64 5862}
!159 = !{i64 5872}
!160 = !{i64 5891}
!161 = !{i64 5896}
!162 = !{i64 5899}
!163 = !{i64 5880}
!164 = !{i64 5907}
!165 = !{i64 5909}
!166 = !{i64 5920}
!167 = !{i64 5923}
!168 = !{i64 5926}
!169 = !{i64 5930}
!170 = !{i64 5933}
!171 = !{i64 5940}
!172 = !{i64 5942}
!173 = !{i64 5944}
!174 = !{i64 5946}
!175 = !{i64 5950}
!176 = !{i64 5962}
!177 = !{i64 5984}
!178 = !{i64 6001}
!179 = !{i64 6006}
!180 = !{i64 6009}
!181 = !{i64 6017}
!182 = !{i64 6025}
!183 = !{i64 6029}
!184 = !{i64 6032}
!185 = !{i64 6035}
!186 = !{i64 6039}
!187 = !{i64 6042}
!188 = !{i64 6044}
!189 = !{i64 6049}
!190 = !{i64 6054}
!191 = !{i64 6080}
!192 = !{i64 6096}
!193 = !{i64 6101}
!194 = !{i64 6104}
!195 = !{i64 6124}
!196 = !{i64 6141}
!197 = !{i64 6145}
!198 = !{i64 6152}
!199 = !{i64 6160}
!200 = !{i64 6163}
!201 = !{i64 6165}
!202 = !{i64 6180}
!203 = !{i64 6184}
!204 = !{i64 6199}
!205 = !{i64 6215}
!206 = !{i64 6220}
!207 = !{i64 6224}
!208 = !{i64 6245}
!209 = !{i64 6250}
!210 = !{i64 6253}
!211 = !{i64 6258}
!212 = !{i64 6260}
!213 = !{i64 6281}
!214 = !{i64 6272}
!215 = !{i64 6274}
!216 = !{i64 6277}
!217 = !{i64 6283}
!218 = !{i64 6290}
!219 = !{i64 6292}
!220 = !{i64 6294}
!221 = !{i64 6297}
!222 = !{i64 6301}
!223 = !{i64 6316}
!224 = !{i64 6336}
!225 = !{i64 6354}
!226 = !{i64 6359}
!227 = !{i64 6362}
!228 = !{i64 6343}
!229 = !{i64 6367}
!230 = !{i64 6371}
!231 = !{i64 6386}
!232 = !{i64 6400}
!233 = !{i64 6418}
!234 = !{i64 6423}
!235 = !{i64 6426}
!236 = !{i64 6429}
!237 = !{i64 6431}
!238 = !{i64 6445}
!239 = !{i64 6450}
!240 = !{i64 6454}
!241 = !{i64 6457}
!242 = !{i64 6459}
!243 = !{i64 6465}
!244 = !{i64 6473}
!245 = !{i64 6481}
!246 = !{i64 6490}
!247 = !{i64 6500}
!248 = !{i64 6512}
!249 = !{i64 6524}
!250 = !{i64 6534}
!251 = !{i64 6539}
!252 = !{i64 6542}
!253 = !{i64 6544}
!254 = !{i64 6546}
!255 = !{i64 6554}
!256 = !{i64 6557}
!257 = !{i64 6559}
!258 = !{i64 6564}
!259 = !{i64 6567}
!260 = !{i64 6570}
!261 = !{i64 6584}
!262 = !{i64 6587}
!263 = !{i64 6591}
!264 = !{i64 6594}
!265 = !{i64 6603}
!266 = !{i64 6607}
!267 = !{i64 6612}
!268 = !{i64 6615}
!269 = !{i64 6624}
!270 = !{i64 6637}
!271 = !{i64 6640}
!272 = !{i64 6645}
!273 = !{i64 6649}
!274 = !{i64 6654}
!275 = !{i64 6657}
!276 = !{i64 6684}
!277 = !{i64 6689}
!278 = !{i64 6692}
!279 = !{i64 6694}
!280 = !{i64 6696}
!281 = !{i64 6704}
!282 = !{i64 6713}
!283 = !{i64 6720}
!284 = !{i64 6734}
!285 = !{i64 6739}
!286 = !{i64 6742}
!287 = !{i64 6752}
!288 = !{i64 6765}
!289 = !{i64 6768}
!290 = !{i64 6781}
!291 = !{i64 6794}
!292 = !{i64 6802}
!293 = !{i64 6807}
!294 = !{i64 6817}
!295 = !{i64 6835}
!296 = !{i64 6845}
!297 = !{i64 6858}
!298 = !{i64 6860}
!299 = !{i64 6865}
!300 = !{i64 6880}
!301 = !{i64 6901}
!302 = !{i64 6906}
!303 = !{i64 6909}
!304 = !{i64 6886}
!305 = !{i64 6914}
!306 = !{i64 6916}
!307 = !{i64 6928}
!308 = !{i64 6931}
!309 = !{i64 6935}
!310 = !{i64 6938}
!311 = !{i64 6945}
!312 = !{i64 6947}
!313 = !{i64 6949}
!314 = !{i64 6952}
!315 = !{i64 6961}
!316 = !{i64 6986}
!317 = !{i64 6991}
!318 = !{i64 6994}
!319 = !{i64 7018}
!320 = !{i64 7026}
!321 = !{i64 7031}
!322 = !{i64 7034}
!323 = !{i64 7039}
!324 = !{i64 7044}
!325 = !{i64 7047}
!326 = !{i64 7051}
!327 = !{i64 7062}
!328 = !{i64 7070}
!329 = !{i64 7073}
!330 = !{i64 7078}
!331 = !{i64 7086}
!332 = !{i64 7097}
!333 = !{i64 7102}
!334 = !{i64 7104}
!335 = !{i64 7115}
!336 = !{i64 7120}
!337 = !{i64 7123}
!338 = !{i64 7133}
!339 = !{i64 7136}
!340 = !{i64 7138}
!341 = !{i64 7141}
!342 = !{i64 7145}
!343 = !{i64 7151}
!344 = !{i64 7153}
!345 = !{i64 7156}
!346 = !{i64 7166}
!347 = !{i64 7184}
!348 = !{i64 7201}
!349 = !{i64 7217}
!350 = !{i64 7227}
!351 = !{i64 7232}
!352 = !{i64 7235}
!353 = !{i64 7248}
!354 = !{i64 7251}
!355 = !{i64 7254}
!356 = !{i64 7262}
!357 = !{i64 7264}
!358 = !{i64 7268}
!359 = !{i64 7290}
!360 = !{i64 7305}
!361 = !{i64 7313}
!362 = !{i64 7316}
!363 = !{i64 7336}
!364 = !{i64 7339}
!365 = !{i64 7343}
!366 = !{i64 7346}
!367 = !{i64 7348}
!368 = !{i64 7370}
!369 = !{i64 7377}
!370 = !{i64 7394}
!371 = !{i64 7398}
!372 = !{i64 7408}
!373 = !{i64 7416}
!374 = !{i64 7419}
!375 = !{i64 7440}
!376 = !{i64 7442}
!377 = !{i64 7445}
!378 = !{i64 7449}
!379 = !{i64 7452}
!380 = !{i64 7454}
!381 = !{i64 7458}
!382 = !{i64 7480}
!383 = !{i64 7490}
!384 = !{i64 7498}
!385 = !{i64 7501}
!386 = !{i64 7507}
!387 = !{i64 7512}
!388 = !{i64 7531}
!389 = !{i64 7541}
!390 = !{i64 7549}
!391 = !{i64 7552}
!392 = !{i64 7563}
!393 = !{i64 7568}
!394 = !{i64 7573}
!395 = !{i64 7576}
!396 = !{i64 7582}
!397 = !{i64 7590}
!398 = !{i64 7612}
!399 = !{i64 7617}
!400 = !{i64 7622}
!401 = !{i64 7630}
!402 = !{i64 7637}
!403 = !{i64 7654}
!404 = !{i64 7658}
!405 = !{i64 7665}
!406 = !{i64 7682}
!407 = !{i64 7686}
!408 = !{i64 7696}
!409 = !{i64 7701}
!410 = !{i64 7704}
!411 = !{i64 7720}
!412 = !{i64 7732}
!413 = !{i64 7745}
!414 = !{i64 7763}
!415 = !{i64 7782}
!416 = !{i64 7787}
!417 = !{i64 7792}
!418 = !{i64 7794}
!419 = !{i64 7796}
!420 = !{i64 7807}
!421 = !{i64 7812}
!422 = !{i64 7818}
!423 = !{i64 7821}
!424 = !{i64 7832}
!425 = !{i64 7843}
!426 = !{i64 7852}
!427 = !{i64 7864}
!428 = !{i64 7877}
!429 = !{i64 7886}
!430 = !{i64 7905}
!431 = !{i64 7925}
!432 = !{i64 7933}
!433 = !{i64 7936}
!434 = !{i64 7961}
!435 = !{i64 7969}
!436 = !{i64 7974}
!437 = !{i64 7992}
!438 = !{i64 7999}
!439 = !{i64 8022}
!440 = !{i64 8027}
!441 = !{i64 8049}
!442 = !{i64 8054}
!443 = !{i64 8067}
!444 = !{i64 8115}
!445 = !{i64 8125}
!446 = !{i64 8147}
!447 = !{i64 8152}
!448 = !{i64 8164}
!449 = !{i64 8170}
!450 = !{i64 8173}
!451 = !{i64 8179}
!452 = !{i64 8196}
!453 = !{i64 8202}
!454 = !{i64 8204}
!455 = !{i64 8212}
!456 = !{i64 8215}
!457 = !{i64 8227}
!458 = !{i64 8230}
!459 = !{i64 8245}
!460 = !{i64 8262}
!461 = !{i64 8264}
!462 = !{i64 8275}
!463 = !{i64 8281}
!464 = !{i64 8292}
!465 = !{i64 8296}
!466 = !{i64 8308}
!467 = !{i64 8314}
!468 = !{i64 8317}
!469 = !{i64 8329}
!470 = !{i64 8354}
!471 = !{i64 8374}
!472 = !{i64 8390}
!473 = !{i64 8409}
!474 = !{i64 8420}
!475 = !{i64 8426}
!476 = !{i64 8436}
!477 = !{i64 8442}
!478 = !{i64 8452}
!479 = !{i64 8459}
!480 = !{i64 8468}
!481 = !{i64 8475}
!482 = !{i64 8478}
!483 = !{i64 8480}
!484 = !{i64 8493}
!485 = !{i64 8500}
!486 = !{i64 8503}
!487 = !{i64 8505}
!488 = !{i64 8507}
!489 = !{i64 8517}
!490 = !{i64 8537}
!491 = !{i64 8548}
!492 = !{i64 8551}
!493 = !{i64 8569}
!494 = !{i64 8595}
!495 = !{i64 8600}
!496 = !{i64 8618}
!497 = !{i64 8623}
!498 = !{i64 8629}
!499 = !{i64 8634}
!500 = !{i64 8652}
!501 = !{i64 8657}
!502 = !{i64 8681}
!503 = !{i64 8696}
!504 = !{i64 8711}
!505 = !{i64 8735}
!506 = !{i64 8741}
!507 = !{i64 8765}
!508 = !{i64 8770}
!509 = !{i64 8788}
!510 = !{i64 8793}
!511 = !{i64 8803}
!512 = !{i64 8820}
!513 = !{i64 8824}
!514 = !{i64 8857}
!515 = !{i64 8878}
!516 = !{i64 8899}
!517 = !{i64 8923}
!518 = !{i64 8942}
!519 = !{i64 8957}
!520 = !{i64 8979}
!521 = !{i64 8995}
!522 = !{i64 9019}
!523 = !{i64 9043}
!524 = !{i64 9067}
!525 = !{i64 9092}
!526 = !{i64 9108}
!527 = !{i64 9116}
!528 = !{i64 9111}
!529 = !{i64 9125}
!530 = !{i64 9130}
!531 = !{i64 9135}
!532 = !{i64 9142}
!533 = !{i64 9157}
!534 = !{i64 9172}
!535 = !{i64 9182}
!536 = !{i64 9188}
!537 = !{i64 9190}
!538 = !{i64 9192}
!539 = !{i64 9204}
!540 = !{i64 9209}
!541 = !{i64 9214}
!542 = !{i64 9222}
!543 = !{i64 9236}
!544 = !{i64 9239}
!545 = !{i64 9255}
!546 = !{i64 9262}
!547 = !{i64 9267}
!548 = !{i64 9272}
!549 = !{i64 9285}
!550 = !{i64 9300}
!551 = !{i64 9306}
!552 = !{i64 9312}
!553 = !{i64 9314}
!554 = !{i64 9316}
!555 = !{i64 9325}
!556 = !{i64 9340}
!557 = !{i64 9343}
!558 = !{i64 9348}
!559 = !{i64 9351}
!560 = !{i64 9358}
!561 = !{i64 9362}
!562 = !{i64 9380}
!563 = !{i64 9383}
!564 = !{i64 9394}
!565 = !{i64 9399}
!566 = !{i64 9406}
!567 = !{i64 9412}
!568 = !{i64 9428}
!569 = !{i64 9437}
!570 = !{i64 9444}
!571 = !{i64 9447}
!572 = !{i64 9449}
!573 = !{i64 9464}
!574 = !{i64 9469}
!575 = !{i64 9476}
!576 = !{i64 9485}
!577 = !{i64 9492}
!578 = !{i64 9495}
!579 = !{i64 9497}
!580 = !{i64 9500}
!581 = !{i64 9506}
!582 = !{i64 9524}
!583 = !{i64 9527}
!584 = !{i64 9539}
!585 = !{i64 9541}
!586 = !{i64 9547}
!587 = !{i64 9570}
!588 = !{i64 9589}
!589 = !{i64 9638}
!590 = !{i64 9662}
!591 = !{i64 9702}
!592 = !{i64 9712}
!593 = !{i64 9736}
!594 = !{i64 9766}
!595 = !{i64 9779}
!596 = !{i64 9792}
!597 = !{i64 9811}
!598 = !{i64 9813}
!599 = !{i64 9818}
!600 = !{i64 9825}
!601 = !{i64 9830}
!602 = !{i64 9867}
!603 = !{i64 9891}
!604 = !{i64 9915}
!605 = !{i64 9950}
!606 = !{i64 9959}
!607 = !{i64 9984}
!608 = !{i64 9989}
!609 = !{i64 9994}
!610 = !{i64 10004}
!611 = !{i64 10007}
!612 = !{i64 10020}
