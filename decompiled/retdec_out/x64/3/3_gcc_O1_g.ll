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
@global_var_317a = constant [30 x i8] c"HEAP-L2-06 (heap_nested): %d\0A\00"
@global_var_3358 = constant [35 x i8] c"HEAP-L3-01 (linked_list_heap): %d\0A\00"
@global_var_3380 = constant [38 x i8] c"HEAP-L3-02 (tree_heap_traversal): %d\0A\00"
@global_var_3198 = constant [30 x i8] c"HEAP-L3-03 (memory_leak): %d\0A\00"
@global_var_33a8 = constant [32 x i8] c"HEAP-L3-04 (dangling_pointer): \00"
@global_counter = local_unnamed_addr global i32 0
@global_array = constant [10 x i32] [i32 0, i32 1, i32 2, i32 3, i32 4, i32 5, i32 6, i32 7, i32 8, i32 9]
@global_var_6034 = local_unnamed_addr global i64 0
@extern_global_var = local_unnamed_addr global i32 23
@0 = internal constant [3 x i8] c"\B22\00"
@const_string = local_unnamed_addr global i8* getelementptr inbounds ([3 x i8], [3 x i8]* @0, i64 0, i64 0)
@global_var_601c = local_unnamed_addr global i64 98784247808
@file_scope_static = local_unnamed_addr global i32 100
@global_func_ptr = local_unnamed_addr global i32 (i32)* null
@global_var_6030 = local_unnamed_addr global i64 0
@global_var_3460 = constant [35 x i8] c"STM-L1-01 (global_var_access): %d\0A\00"
@global_var_3488 = constant [33 x i8] c"STM-L1-01 (global_var_read): %d\0A\00"
@global_var_34b0 = constant [37 x i8] c"STM-L1-02 (global_array_access): %d\0A\00"
@global_var_31d1 = constant [30 x i8] c"STM-L1-03 (static_local): %d\0A\00"
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
@4 = internal constant [65 x i8] c"\E2\9C\97 \E5\AD\90\E8\BF\9B\E7\A8\8B\E8\A2\AB\E4\BF\A1\E5\8F\B7\E7\BB\88\E6\AD\A2 (\E4\BF\A1\E5\8F\B7%d) - \E9\87\8E\E6\8C\87\E9\92\88\E5\AF\BC\E8\87\B4\E5\B4\A9\E6\BA\83\0A\00"
@global_var_33f0 = constant i8* getelementptr inbounds ([65 x i8], [65 x i8]* @4, i64 0, i64 0)
@5 = internal constant [16 x i8] c"%d (\E5\AD\90\E8\BF\9B\E7\A8\8B)\0A\00"
@global_var_31b6 = constant i8* getelementptr inbounds ([16 x i8], [16 x i8]* @5, i64 0, i64 0)
@6 = internal constant [37 x i8] c"\E2\9C\93 \E5\AD\90\E8\BF\9B\E7\A8\8B\E6\AD\A3\E5\B8\B8\E9\80\80\E5\87\BA\EF\BC\8Ccode=%d\0A\00"
@global_var_33c8 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @6, i64 0, i64 0)
@7 = internal constant [11 x i8] c"fork\E5\A4\B1\E8\B4\A5\00"
@global_var_31c6 = constant i8* getelementptr inbounds ([11 x i8], [11 x i8]* @7, i64 0, i64 0)
@global_var_6035 = global i32 0
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

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1220:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !22
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !22
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !22
  %3 = call i32 @__libc_start_main(i64 9391, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !22
  %4 = call i64 @__asm_hlt(), !insn.addr !23
  unreachable, !insn.addr !23
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1250:
  ret i64 ptrtoint (i64* @global_var_6028 to i64), !insn.addr !24
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1280:
  ret i64 0, !insn.addr !25
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_12c0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* bitcast (i64* @global_var_6028 to i8*), align 8, !insn.addr !26
  %3 = icmp eq i8 %2, 0, !insn.addr !26
  %4 = icmp eq i1 %3, false, !insn.addr !27
  br i1 %4, label %dec_label_pc_12f8, label %dec_label_pc_12cd, !insn.addr !27

dec_label_pc_12cd:                                ; preds = %dec_label_pc_12c0
  %5 = load i64, i64* inttoptr (i64 24568 to i64*), align 8, !insn.addr !28
  %6 = icmp eq i64 %5, 0, !insn.addr !28
  br i1 %6, label %dec_label_pc_12e7, label %dec_label_pc_12db, !insn.addr !29

dec_label_pc_12db:                                ; preds = %dec_label_pc_12cd
  %7 = load i64, i64* inttoptr (i64 24584 to i64*), align 8, !insn.addr !30
  %8 = inttoptr i64 %7 to i64*, !insn.addr !31
  call void @__cxa_finalize(i64* %8), !insn.addr !31
  br label %dec_label_pc_12e7, !insn.addr !31

dec_label_pc_12e7:                                ; preds = %dec_label_pc_12db, %dec_label_pc_12cd
  %9 = call i64 @deregister_tm_clones(), !insn.addr !32
  store i8 1, i8* bitcast (i64* @global_var_6028 to i8*), align 8, !insn.addr !33
  ret i64 %9, !insn.addr !34

dec_label_pc_12f8:                                ; preds = %dec_label_pc_12c0
  ret i64 %1, !insn.addr !35
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1300:
  %0 = call i64 @register_tm_clones(), !insn.addr !36
  ret i64 %0, !insn.addr !36
}

define i32 @double_value(i32 %x) local_unnamed_addr {
dec_label_pc_1309:
  %0 = mul i32 %x, 2, !insn.addr !37
  ret i32 %0, !insn.addr !38
}

define i64 @local_vars(i64 %arg1) local_unnamed_addr {
dec_label_pc_1311:
  %factor = mul i64 %arg1, 2
  %0 = add i64 %factor, 10, !insn.addr !39
  %1 = and i64 %0, 4294967294, !insn.addr !39
  ret i64 %1, !insn.addr !40
}

define i32 @local_array(i32 %n) local_unnamed_addr {
dec_label_pc_131a:
  %0 = alloca i32
  %rdx.0.reg2mem = alloca i64, !insn.addr !41
  %rax.0.reg2mem = alloca i64, !insn.addr !41
  %1 = zext i32 %n to i64
  %2 = load i32, i32* %0
  %stack_var_-16 = alloca i64, align 8
  %stack_var_-56 = alloca i64, align 8
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !42
  store i64 %3, i64* %stack_var_-16, align 8, !insn.addr !43
  %4 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !44
  %5 = ptrtoint i64* %stack_var_-16 to i64, !insn.addr !45
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !46
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !46
  br label %dec_label_pc_133f, !insn.addr !46

dec_label_pc_133f:                                ; preds = %dec_label_pc_133f, %dec_label_pc_131a
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %6 = trunc i64 %rdx.0.reload to i32, !insn.addr !47
  %7 = inttoptr i64 %rax.0.reload to i32*, !insn.addr !47
  store i32 %6, i32* %7, align 4, !insn.addr !47
  %8 = add nuw nsw i64 %rdx.0.reload, %1, !insn.addr !48
  %9 = and i64 %8, 4294967295, !insn.addr !48
  %10 = add i64 %rax.0.reload, 4, !insn.addr !49
  %11 = icmp eq i64 %10, %5, !insn.addr !50
  %12 = icmp eq i1 %11, false, !insn.addr !51
  store i64 %10, i64* %rax.0.reg2mem, !insn.addr !51
  store i64 %9, i64* %rdx.0.reg2mem, !insn.addr !51
  br i1 %12, label %dec_label_pc_133f, label %dec_label_pc_134c, !insn.addr !51

dec_label_pc_134c:                                ; preds = %dec_label_pc_133f
  %13 = load i64, i64* %stack_var_-16, align 8, !insn.addr !52
  %14 = call i64 @__readfsqword(i64 40), !insn.addr !53
  %15 = icmp eq i64 %13, %14, !insn.addr !53
  %16 = icmp eq i1 %15, false, !insn.addr !54
  br i1 %16, label %dec_label_pc_1365, label %dec_label_pc_1360, !insn.addr !54

dec_label_pc_1360:                                ; preds = %dec_label_pc_134c
  ret i32 %2, !insn.addr !55

dec_label_pc_1365:                                ; preds = %dec_label_pc_134c
  call void @__stack_chk_fail(), !insn.addr !56
  ret i32 ptrtoint (i32* @1 to i32), !insn.addr !56

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
}

define i64 @local_struct(i64 %arg1) local_unnamed_addr {
dec_label_pc_136a:
  %0 = mul i64 %arg1, 3, !insn.addr !57
  %1 = and i64 %0, 4294967295, !insn.addr !57
  ret i64 %1, !insn.addr !58
}

define i64 @address_of_local(i64 %arg1) local_unnamed_addr {
dec_label_pc_1372:
  %0 = inttoptr i64 %arg1 to i32*, !insn.addr !59
  store i32 42, i32* %0, align 4, !insn.addr !59
  ret i64 42, !insn.addr !60
}

define i64 @address_of_array() local_unnamed_addr {
dec_label_pc_1382:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !61
  %3 = and i64 %2, 4294967294, !insn.addr !61
  ret i64 %3, !insn.addr !62
}

define i32 @large_stack_frame() local_unnamed_addr {
dec_label_pc_138b:
  %0 = alloca i32
  %rax.0.reg2mem = alloca i64, !insn.addr !63
  %1 = load i32, i32* %0
  %stack_var_-2072 = alloca i64, align 8
  %2 = ptrtoint i64* %stack_var_-2072 to i64, !insn.addr !64
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !65
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !66
  br label %dec_label_pc_13a9, !insn.addr !66

dec_label_pc_13a9:                                ; preds = %dec_label_pc_13a9, %dec_label_pc_138b
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %4 = trunc i64 %rax.0.reload to i8, !insn.addr !67
  %5 = add i64 %rax.0.reload, %2, !insn.addr !67
  %6 = inttoptr i64 %5 to i8*, !insn.addr !67
  store i8 %4, i8* %6, align 1, !insn.addr !67
  %7 = add i64 %rax.0.reload, 1, !insn.addr !68
  %8 = icmp eq i64 %7, ptrtoint (i64* @global_var_800 to i64), !insn.addr !69
  %9 = icmp eq i1 %8, false, !insn.addr !70
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !70
  br i1 %9, label %dec_label_pc_13a9, label %dec_label_pc_13b8, !insn.addr !70

dec_label_pc_13b8:                                ; preds = %dec_label_pc_13a9
  %10 = call i64 @__readfsqword(i64 40), !insn.addr !71
  %11 = icmp eq i64 %3, %10, !insn.addr !71
  %12 = icmp eq i1 %11, false, !insn.addr !72
  br i1 %12, label %dec_label_pc_13db, label %dec_label_pc_13d3, !insn.addr !72

dec_label_pc_13d3:                                ; preds = %dec_label_pc_13b8
  %13 = zext i32 %1 to i64, !insn.addr !73
  %sext = mul i64 %13, 72057594037927936
  %14 = ashr exact i64 %sext, 56, !insn.addr !73
  %15 = trunc i64 %14 to i32, !insn.addr !74
  ret i32 %15, !insn.addr !74

dec_label_pc_13db:                                ; preds = %dec_label_pc_13b8
  call void @__stack_chk_fail(), !insn.addr !75
  ret i32 ptrtoint (i32* @1 to i32), !insn.addr !75

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 2, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
}

define i32 @vla_stack(i32 %n) local_unnamed_addr {
dec_label_pc_13e0:
  %storemerge.reg2mem = alloca i32, !insn.addr !76
  %rax.0.reg2mem = alloca i64, !insn.addr !76
  %stack_var_-24 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !77
  %1 = add i32 %n, -1, !insn.addr !78
  %2 = icmp ugt i32 %1, ptrtoint (i32* @global_var_3e7 to i32)
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !79
  br i1 %2, label %dec_label_pc_147f, label %dec_label_pc_140a, !insn.addr !79

dec_label_pc_140a:                                ; preds = %dec_label_pc_13e0
  %3 = zext i32 %1 to i64, !insn.addr !78
  %4 = ptrtoint i64* %stack_var_-24 to i64, !insn.addr !80
  %5 = sext i32 %n to i64
  %6 = mul i64 %5, 4, !insn.addr !81
  %7 = add nsw i64 %6, 15, !insn.addr !81
  %8 = and i64 %7, -4096, !insn.addr !82
  %9 = sub i64 %4, %8, !insn.addr !83
  %10 = and i64 %7, 4080, !insn.addr !84
  %11 = sub i64 %9, %10, !insn.addr !85
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !86
  br label %dec_label_pc_145f, !insn.addr !86

dec_label_pc_145f:                                ; preds = %dec_label_pc_145f, %dec_label_pc_140a
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %.tr = trunc i64 %rax.0.reload to i32
  %12 = mul i32 %.tr, 2, !insn.addr !87
  %13 = mul i64 %rax.0.reload, 4, !insn.addr !88
  %14 = add i64 %13, %11, !insn.addr !88
  %15 = inttoptr i64 %14 to i32*, !insn.addr !88
  store i32 %12, i32* %15, align 4, !insn.addr !88
  %16 = add i64 %rax.0.reload, 1, !insn.addr !89
  %17 = icmp eq i64 %rax.0.reload, %3, !insn.addr !90
  %18 = icmp eq i1 %17, false, !insn.addr !91
  store i64 %16, i64* %rax.0.reg2mem, !insn.addr !91
  br i1 %18, label %dec_label_pc_145f, label %dec_label_pc_1471, !insn.addr !91

dec_label_pc_1471:                                ; preds = %dec_label_pc_145f
  %19 = icmp slt i32 %n, 0
  %20 = zext i1 %19 to i32, !insn.addr !92
  %21 = add i32 %20, %n, !insn.addr !93
  %22 = ashr i32 %21, 1, !insn.addr !94
  %23 = sext i32 %22 to i64, !insn.addr !95
  %24 = mul i64 %23, 4, !insn.addr !96
  %25 = add i64 %11, %24, !insn.addr !96
  %26 = inttoptr i64 %25 to i32*, !insn.addr !96
  %27 = load i32, i32* %26, align 4, !insn.addr !96
  store i32 %27, i32* %storemerge.reg2mem, !insn.addr !96
  br label %dec_label_pc_147f, !insn.addr !96

dec_label_pc_147f:                                ; preds = %dec_label_pc_13e0, %dec_label_pc_1471
  %28 = call i64 @__readfsqword(i64 40), !insn.addr !97
  %29 = icmp eq i64 %0, %28, !insn.addr !97
  %30 = icmp eq i1 %29, false, !insn.addr !98
  br i1 %30, label %dec_label_pc_1497, label %dec_label_pc_148e, !insn.addr !98

dec_label_pc_148e:                                ; preds = %dec_label_pc_147f
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !99

dec_label_pc_1497:                                ; preds = %dec_label_pc_147f
  call void @__stack_chk_fail(), !insn.addr !100
  ret i32 ptrtoint (i32* @1 to i32), !insn.addr !100

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 2, 3, 0 }
  uselistorder i64 %11, { 1, 0 }
  uselistorder i32 %1, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %n, { 1, 0, 3, 2 }
  uselistorder label %dec_label_pc_147f, { 1, 0 }
}

define i32 @alloca_usage(i32 %n) local_unnamed_addr {
dec_label_pc_149c:
  %storemerge.reg2mem = alloca i32, !insn.addr !101
  %rdx.0.reg2mem = alloca i64, !insn.addr !101
  %rax.0.reg2mem = alloca i64, !insn.addr !101
  %stack_var_-24 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !102
  %1 = icmp slt i32 %n, 1
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !103
  br i1 %1, label %dec_label_pc_153b, label %dec_label_pc_14bf, !insn.addr !103

dec_label_pc_14bf:                                ; preds = %dec_label_pc_149c
  %2 = ptrtoint i64* %stack_var_-24 to i64, !insn.addr !104
  %3 = sext i32 %n to i64
  %4 = mul i64 %3, 4, !insn.addr !105
  %5 = add nsw i64 %4, 23, !insn.addr !105
  %6 = and i64 %5, -4096, !insn.addr !106
  %7 = and i64 %5, 4080, !insn.addr !107
  %8 = sub nsw i64 15, %7, !insn.addr !108
  %9 = sub nsw i64 %8, %6, !insn.addr !109
  %10 = add i64 %9, %2, !insn.addr !110
  %11 = and i64 %10, -16, !insn.addr !111
  %12 = mul i32 %n, 3, !insn.addr !112
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !113
  store i64 %11, i64* %rdx.0.reg2mem, !insn.addr !113
  br label %dec_label_pc_1520, !insn.addr !113

dec_label_pc_1520:                                ; preds = %dec_label_pc_1520, %dec_label_pc_14bf
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %13 = trunc i64 %rax.0.reload to i32, !insn.addr !114
  %14 = inttoptr i64 %rdx.0.reload to i32*, !insn.addr !114
  store i32 %13, i32* %14, align 4, !insn.addr !114
  %15 = add nuw nsw i64 %rax.0.reload, 3, !insn.addr !115
  %16 = and i64 %15, 4294967295, !insn.addr !115
  %17 = add i64 %rdx.0.reload, 4, !insn.addr !116
  %18 = trunc i64 %15 to i32, !insn.addr !117
  %19 = icmp eq i32 %12, %18, !insn.addr !117
  %20 = icmp eq i1 %19, false, !insn.addr !118
  store i64 %16, i64* %rax.0.reg2mem, !insn.addr !118
  store i64 %17, i64* %rdx.0.reg2mem, !insn.addr !118
  br i1 %20, label %dec_label_pc_1520, label %dec_label_pc_152d, !insn.addr !118

dec_label_pc_152d:                                ; preds = %dec_label_pc_1520
  %21 = icmp slt i32 %n, 0
  %22 = zext i1 %21 to i32, !insn.addr !119
  %23 = add i32 %22, %n, !insn.addr !120
  %24 = ashr i32 %23, 1, !insn.addr !121
  %25 = sext i32 %24 to i64, !insn.addr !122
  %26 = mul i64 %25, 4, !insn.addr !123
  %27 = add i64 %11, %26, !insn.addr !123
  %28 = inttoptr i64 %27 to i32*, !insn.addr !123
  %29 = load i32, i32* %28, align 4, !insn.addr !123
  store i32 %29, i32* %storemerge.reg2mem, !insn.addr !123
  br label %dec_label_pc_153b, !insn.addr !123

dec_label_pc_153b:                                ; preds = %dec_label_pc_149c, %dec_label_pc_152d
  %30 = call i64 @__readfsqword(i64 40), !insn.addr !124
  %31 = icmp eq i64 %0, %30, !insn.addr !124
  %32 = icmp eq i1 %31, false, !insn.addr !125
  br i1 %32, label %dec_label_pc_1553, label %dec_label_pc_154a, !insn.addr !125

dec_label_pc_154a:                                ; preds = %dec_label_pc_153b
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !126

dec_label_pc_1553:                                ; preds = %dec_label_pc_153b
  call void @__stack_chk_fail(), !insn.addr !127
  ret i32 ptrtoint (i32* @1 to i32), !insn.addr !127

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64 %11, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %n, { 1, 0, 2, 4, 3 }
  uselistorder label %dec_label_pc_153b, { 1, 0 }
}

define i64 @stack_alias() local_unnamed_addr {
dec_label_pc_1558:
  ret i64 20, !insn.addr !128
}

define void @test_stack_memory() local_unnamed_addr {
dec_label_pc_1562:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3004 to i8*)), !insn.addr !129
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_3022, i64 0, i64 0), i64 20), !insn.addr !130
  %2 = call i32 @local_array(i32 2), !insn.addr !131
  %3 = zext i32 %2 to i64, !insn.addr !132
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_303e, i64 0, i64 0), i64 %3), !insn.addr !133
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_305b, i64 0, i64 0), i64 15), !insn.addr !134
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_32c0, i64 0, i64 0), i64 42), !insn.addr !135
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_32e8, i64 0, i64 0), i64 2), !insn.addr !136
  %8 = call i32 @large_stack_frame(), !insn.addr !137
  %9 = zext i32 %8 to i64, !insn.addr !138
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3310, i64 0, i64 0), i64 %9), !insn.addr !139
  %11 = call i32 @vla_stack(i32 10), !insn.addr !140
  %12 = zext i32 %11 to i64, !insn.addr !141
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3079, i64 0, i64 0), i64 %12), !insn.addr !142
  %14 = call i32 @alloca_usage(i32 10), !insn.addr !143
  %15 = zext i32 %14 to i64, !insn.addr !144
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3094, i64 0, i64 0), i64 %15), !insn.addr !145
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_30b2, i64 0, i64 0), i64 20), !insn.addr !146
  ret void, !insn.addr !147

; uselistorder directives
  uselistorder i64 15, { 2, 0, 1 }
}

define i32 @heap_basic(i32 %n) local_unnamed_addr {
dec_label_pc_168a:
  %rbx.0.reg2mem = alloca i32, !insn.addr !148
  %rdx.0.reg2mem = alloca i64, !insn.addr !148
  %0 = mul i32 %n, 4, !insn.addr !149
  %1 = call i64* @malloc(i32 %0), !insn.addr !150
  %2 = icmp eq i64* %1, null, !insn.addr !151
  store i32 -1, i32* %rbx.0.reg2mem, !insn.addr !152
  br i1 %2, label %dec_label_pc_16d2, label %dec_label_pc_16a2, !insn.addr !152

dec_label_pc_16a2:                                ; preds = %dec_label_pc_168a
  %3 = zext i32 %n to i64, !insn.addr !153
  %4 = ptrtoint i64* %1 to i64, !insn.addr !150
  %5 = icmp slt i32 %n, 1
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !154
  br i1 %5, label %dec_label_pc_16bf, label %dec_label_pc_16b0, !insn.addr !154

dec_label_pc_16b0:                                ; preds = %dec_label_pc_16a2, %dec_label_pc_16b0
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %.tr = trunc i64 %rdx.0.reload to i32
  %6 = mul i32 %.tr, 2, !insn.addr !155
  %7 = mul i64 %rdx.0.reload, 4, !insn.addr !156
  %8 = add i64 %7, %4, !insn.addr !156
  %9 = inttoptr i64 %8 to i32*, !insn.addr !156
  store i32 %6, i32* %9, align 4, !insn.addr !156
  %10 = add i64 %rdx.0.reload, 1, !insn.addr !157
  %11 = icmp eq i64 %10, %3, !insn.addr !158
  %12 = icmp eq i1 %11, false, !insn.addr !159
  store i64 %10, i64* %rdx.0.reg2mem, !insn.addr !159
  br i1 %12, label %dec_label_pc_16b0, label %dec_label_pc_16bf, !insn.addr !159

dec_label_pc_16bf:                                ; preds = %dec_label_pc_16b0, %dec_label_pc_16a2
  %13 = icmp slt i32 %n, 0
  %14 = zext i1 %13 to i32, !insn.addr !160
  %15 = add i32 %14, %n, !insn.addr !161
  %16 = ashr i32 %15, 1, !insn.addr !162
  %17 = sext i32 %16 to i64, !insn.addr !163
  %18 = mul i64 %17, 4, !insn.addr !164
  %19 = add i64 %18, %4, !insn.addr !164
  %20 = inttoptr i64 %19 to i32*, !insn.addr !164
  %21 = load i32, i32* %20, align 4, !insn.addr !164
  call void @free(i64* nonnull %1), !insn.addr !165
  store i32 %21, i32* %rbx.0.reg2mem, !insn.addr !165
  br label %dec_label_pc_16d2, !insn.addr !165

dec_label_pc_16d2:                                ; preds = %dec_label_pc_168a, %dec_label_pc_16bf
  %rbx.0.reload = load i32, i32* %rbx.0.reg2mem
  ret i32 %rbx.0.reload, !insn.addr !166

; uselistorder directives
  uselistorder i64 %rdx.0.reload, { 1, 2, 0 }
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rbx.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 %n, { 2, 1, 3, 4, 0 }
  uselistorder label %dec_label_pc_16d2, { 1, 0 }
  uselistorder label %dec_label_pc_16b0, { 1, 0 }
}

define i32 @heap_calloc(i32 %n) local_unnamed_addr {
dec_label_pc_16dd:
  %rbx.2.reg2mem = alloca i32, !insn.addr !167
  %rbx.1.reg2mem = alloca i32, !insn.addr !167
  %rbx.0.reg2mem = alloca i32, !insn.addr !167
  %rdx.0.reg2mem = alloca i64, !insn.addr !167
  %0 = call i64* @calloc(i32 %n, i32 4), !insn.addr !168
  %1 = icmp eq i64* %0, null, !insn.addr !169
  store i32 -1, i32* %rbx.2.reg2mem, !insn.addr !170
  br i1 %1, label %dec_label_pc_171b, label %dec_label_pc_16f6, !insn.addr !170

dec_label_pc_16f6:                                ; preds = %dec_label_pc_16dd
  %2 = icmp slt i32 %n, 1
  store i32 0, i32* %rbx.1.reg2mem, !insn.addr !171
  br i1 %2, label %dec_label_pc_1716, label %dec_label_pc_16fd, !insn.addr !171

dec_label_pc_16fd:                                ; preds = %dec_label_pc_16f6
  %3 = zext i32 %n to i64, !insn.addr !172
  %4 = ptrtoint i64* %0 to i64, !insn.addr !168
  %5 = mul i64 %3, 4, !insn.addr !173
  %6 = add i64 %5, %4, !insn.addr !174
  store i64 %4, i64* %rdx.0.reg2mem, !insn.addr !175
  store i32 0, i32* %rbx.0.reg2mem, !insn.addr !175
  br label %dec_label_pc_170b, !insn.addr !175

dec_label_pc_170b:                                ; preds = %dec_label_pc_170b, %dec_label_pc_16fd
  %rbx.0.reload = load i32, i32* %rbx.0.reg2mem
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %7 = inttoptr i64 %rdx.0.reload to i32*, !insn.addr !176
  %8 = load i32, i32* %7, align 4, !insn.addr !176
  %9 = add i32 %8, %rbx.0.reload, !insn.addr !176
  %10 = add i64 %rdx.0.reload, 4, !insn.addr !177
  %11 = icmp eq i64 %10, %6, !insn.addr !178
  %12 = icmp eq i1 %11, false, !insn.addr !179
  store i64 %10, i64* %rdx.0.reg2mem, !insn.addr !179
  store i32 %9, i32* %rbx.0.reg2mem, !insn.addr !179
  store i32 %9, i32* %rbx.1.reg2mem, !insn.addr !179
  br i1 %12, label %dec_label_pc_170b, label %dec_label_pc_1716, !insn.addr !179

dec_label_pc_1716:                                ; preds = %dec_label_pc_170b, %dec_label_pc_16f6
  %rbx.1.reload = load i32, i32* %rbx.1.reg2mem
  call void @free(i64* nonnull %0), !insn.addr !180
  store i32 %rbx.1.reload, i32* %rbx.2.reg2mem, !insn.addr !180
  br label %dec_label_pc_171b, !insn.addr !180

dec_label_pc_171b:                                ; preds = %dec_label_pc_16dd, %dec_label_pc_1716
  %rbx.2.reload = load i32, i32* %rbx.2.reg2mem
  ret i32 %rbx.2.reload, !insn.addr !181

; uselistorder directives
  uselistorder i64* %0, { 0, 2, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rbx.2.reg2mem, { 0, 2, 1 }
  uselistorder i32 %n, { 2, 0, 1 }
  uselistorder label %dec_label_pc_171b, { 1, 0 }
}

define i32 @heap_realloc() local_unnamed_addr {
dec_label_pc_172d:
  %rbx.0.reg2mem = alloca i32, !insn.addr !182
  %0 = call i64* @malloc(i32 20), !insn.addr !183
  %1 = icmp eq i64* %0, null, !insn.addr !184
  store i32 -1, i32* %rbx.0.reg2mem, !insn.addr !185
  br i1 %1, label %dec_label_pc_17b2, label %dec_label_pc_1745, !insn.addr !185

dec_label_pc_1745:                                ; preds = %dec_label_pc_172d
  %2 = ptrtoint i64* %0 to i64, !insn.addr !183
  %3 = bitcast i64* %0 to i32*, !insn.addr !186
  store i32 1, i32* %3, align 4, !insn.addr !186
  %4 = add i64 %2, 4, !insn.addr !187
  %5 = inttoptr i64 %4 to i32*, !insn.addr !187
  store i32 2, i32* %5, align 4, !insn.addr !187
  %6 = add i64 %2, 8, !insn.addr !188
  %7 = inttoptr i64 %6 to i32*, !insn.addr !188
  store i32 3, i32* %7, align 4, !insn.addr !188
  %8 = add i64 %2, 12, !insn.addr !189
  %9 = inttoptr i64 %8 to i32*, !insn.addr !189
  store i32 4, i32* %9, align 4, !insn.addr !189
  %10 = add i64 %2, 16, !insn.addr !190
  %11 = inttoptr i64 %10 to i32*, !insn.addr !190
  store i32 5, i32* %11, align 4, !insn.addr !190
  %12 = call i64* @realloc(i64* nonnull %0, i32 40), !insn.addr !191
  %13 = icmp eq i64* %12, null, !insn.addr !192
  br i1 %13, label %dec_label_pc_17b6, label %dec_label_pc_177f, !insn.addr !193

dec_label_pc_177f:                                ; preds = %dec_label_pc_1745
  %14 = ptrtoint i64* %12 to i64, !insn.addr !191
  %15 = add i64 %14, 20, !insn.addr !194
  %16 = inttoptr i64 %15 to i32*, !insn.addr !194
  store i32 50, i32* %16, align 4, !insn.addr !194
  %17 = add i64 %14, 24, !insn.addr !195
  %18 = inttoptr i64 %17 to i32*, !insn.addr !195
  store i32 60, i32* %18, align 4, !insn.addr !195
  %19 = add i64 %14, 28, !insn.addr !196
  %20 = inttoptr i64 %19 to i32*, !insn.addr !196
  store i32 70, i32* %20, align 4, !insn.addr !196
  %21 = add i64 %14, 32, !insn.addr !197
  %22 = inttoptr i64 %21 to i32*, !insn.addr !197
  store i32 80, i32* %22, align 4, !insn.addr !197
  %23 = add i64 %14, 36, !insn.addr !198
  %24 = inttoptr i64 %23 to i32*, !insn.addr !198
  store i32 90, i32* %24, align 4, !insn.addr !198
  %25 = add i64 %14, 8, !insn.addr !199
  %26 = inttoptr i64 %25 to i32*, !insn.addr !199
  %27 = load i32, i32* %26, align 4, !insn.addr !199
  %28 = icmp eq i32 %27, 3, !insn.addr !199
  call void @free(i64* nonnull %12), !insn.addr !200
  %phitmp = select i1 %28, i32 50, i32 -3
  store i32 %phitmp, i32* %rbx.0.reg2mem, !insn.addr !200
  br label %dec_label_pc_17b2, !insn.addr !200

dec_label_pc_17b2:                                ; preds = %dec_label_pc_172d, %dec_label_pc_17b6, %dec_label_pc_177f
  %rbx.0.reload = load i32, i32* %rbx.0.reg2mem
  ret i32 %rbx.0.reload, !insn.addr !201

dec_label_pc_17b6:                                ; preds = %dec_label_pc_1745
  call void @free(i64* nonnull %0), !insn.addr !202
  store i32 -2, i32* %rbx.0.reg2mem, !insn.addr !203
  br label %dec_label_pc_17b2, !insn.addr !203

; uselistorder directives
  uselistorder i64* %12, { 0, 2, 1 }
  uselistorder i64* %0, { 0, 1, 2, 4, 3 }
  uselistorder i32* %rbx.0.reg2mem, { 3, 0, 2, 1 }
  uselistorder label %dec_label_pc_17b2, { 1, 2, 0 }
}

define i32 @heap_array(i32 %n) local_unnamed_addr {
dec_label_pc_17d3:
  %rbx.0.reg2mem = alloca i32, !insn.addr !204
  %rdx.0.reg2mem = alloca i64, !insn.addr !204
  %rcx.0.reg2mem = alloca i64, !insn.addr !204
  %0 = mul i32 %n, 4, !insn.addr !205
  %1 = call i64* @malloc(i32 %0), !insn.addr !206
  %2 = icmp eq i64* %1, null, !insn.addr !207
  store i32 -1, i32* %rbx.0.reg2mem, !insn.addr !208
  br i1 %2, label %dec_label_pc_181e, label %dec_label_pc_17eb, !insn.addr !208

dec_label_pc_17eb:                                ; preds = %dec_label_pc_17d3
  %3 = ptrtoint i64* %1 to i64, !insn.addr !206
  %4 = icmp slt i32 %n, 1
  br i1 %4, label %dec_label_pc_180a, label %dec_label_pc_17f2, !insn.addr !209

dec_label_pc_17f2:                                ; preds = %dec_label_pc_17eb
  %5 = mul i32 %n, 3
  store i64 %3, i64* %rcx.0.reg2mem, !insn.addr !210
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !210
  br label %dec_label_pc_17fd, !insn.addr !210

dec_label_pc_17fd:                                ; preds = %dec_label_pc_17fd, %dec_label_pc_17f2
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %6 = trunc i64 %rdx.0.reload to i32, !insn.addr !211
  %7 = inttoptr i64 %rcx.0.reload to i32*, !insn.addr !211
  store i32 %6, i32* %7, align 4, !insn.addr !211
  %8 = add nuw nsw i64 %rdx.0.reload, 3, !insn.addr !212
  %9 = and i64 %8, 4294967295, !insn.addr !212
  %10 = add i64 %rcx.0.reload, 4, !insn.addr !213
  %11 = trunc i64 %8 to i32, !insn.addr !214
  %12 = icmp eq i32 %5, %11, !insn.addr !214
  %13 = icmp eq i1 %12, false, !insn.addr !215
  store i64 %10, i64* %rcx.0.reg2mem, !insn.addr !215
  store i64 %9, i64* %rdx.0.reg2mem, !insn.addr !215
  br i1 %13, label %dec_label_pc_17fd, label %dec_label_pc_180a, !insn.addr !215

dec_label_pc_180a:                                ; preds = %dec_label_pc_17fd, %dec_label_pc_17eb
  %14 = icmp slt i32 %n, 0
  %15 = zext i1 %14 to i32, !insn.addr !216
  %16 = add i32 %15, %n, !insn.addr !217
  %17 = ashr i32 %16, 1, !insn.addr !218
  %18 = sext i32 %17 to i64, !insn.addr !219
  %19 = mul i64 %18, 4, !insn.addr !220
  %20 = add i64 %19, %3, !insn.addr !220
  %21 = inttoptr i64 %20 to i32*, !insn.addr !220
  %22 = load i32, i32* %21, align 4, !insn.addr !220
  call void @free(i64* nonnull %1), !insn.addr !221
  store i32 %22, i32* %rbx.0.reg2mem, !insn.addr !221
  br label %dec_label_pc_181e, !insn.addr !221

dec_label_pc_181e:                                ; preds = %dec_label_pc_17d3, %dec_label_pc_180a
  %rbx.0.reload = load i32, i32* %rbx.0.reg2mem
  ret i32 %rbx.0.reload, !insn.addr !222

; uselistorder directives
  uselistorder i64 %rcx.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rbx.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 %n, { 2, 1, 3, 4, 0 }
  uselistorder label %dec_label_pc_181e, { 1, 0 }
}

define i32 @heap_struct(i32 %x) local_unnamed_addr {
dec_label_pc_1829:
  %rbx.0.reg2mem = alloca i32, !insn.addr !223
  %0 = call i64* @malloc(i32 8), !insn.addr !224
  %1 = icmp eq i64* %0, null, !insn.addr !225
  store i32 -1, i32* %rbx.0.reg2mem, !insn.addr !226
  br i1 %1, label %dec_label_pc_184a, label %dec_label_pc_183f, !insn.addr !226

dec_label_pc_183f:                                ; preds = %dec_label_pc_1829
  %2 = mul i32 %x, 3
  call void @free(i64* nonnull %0), !insn.addr !227
  store i32 %2, i32* %rbx.0.reg2mem, !insn.addr !227
  br label %dec_label_pc_184a, !insn.addr !227

dec_label_pc_184a:                                ; preds = %dec_label_pc_1829, %dec_label_pc_183f
  %rbx.0.reload = load i32, i32* %rbx.0.reg2mem
  ret i32 %rbx.0.reload, !insn.addr !228

; uselistorder directives
  uselistorder i32* %rbx.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_184a, { 1, 0 }
}

define i32 @heap_nested(i32** %head) local_unnamed_addr {
dec_label_pc_1855:
  %rax.0.reg2mem = alloca i32, !insn.addr !229
  %0 = call i64* @malloc(i32 16), !insn.addr !230
  %1 = ptrtoint i64* %0 to i64, !insn.addr !230
  %2 = bitcast i32** %head to i64*, !insn.addr !231
  store i64 %1, i64* %2, align 8, !insn.addr !231
  %3 = icmp eq i64* %0, null, !insn.addr !232
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !233
  br i1 %3, label %dec_label_pc_18a4, label %dec_label_pc_1875, !insn.addr !233

dec_label_pc_1875:                                ; preds = %dec_label_pc_1855
  %4 = bitcast i64* %0 to i32*, !insn.addr !234
  store i32 10, i32* %4, align 4, !insn.addr !234
  %5 = call i64* @malloc(i32 16), !insn.addr !235
  %6 = ptrtoint i64* %5 to i64, !insn.addr !235
  %7 = add i64 %1, 8, !insn.addr !236
  %8 = inttoptr i64 %7 to i64*, !insn.addr !236
  store i64 %6, i64* %8, align 8, !insn.addr !236
  %9 = icmp eq i64* %5, null, !insn.addr !237
  br i1 %9, label %dec_label_pc_18ab, label %dec_label_pc_1891, !insn.addr !238

dec_label_pc_1891:                                ; preds = %dec_label_pc_1875
  %10 = bitcast i64* %5 to i32*, !insn.addr !239
  store i32 20, i32* %10, align 4, !insn.addr !239
  %11 = add i64 %6, 8, !insn.addr !240
  %12 = inttoptr i64 %11 to i64*, !insn.addr !240
  store i64 0, i64* %12, align 8, !insn.addr !240
  store i32 0, i32* %rax.0.reg2mem, !insn.addr !241
  br label %dec_label_pc_18a4, !insn.addr !241

dec_label_pc_18a4:                                ; preds = %dec_label_pc_1855, %dec_label_pc_18ab, %dec_label_pc_1891
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !242

dec_label_pc_18ab:                                ; preds = %dec_label_pc_1875
  call void @free(i64* nonnull %0), !insn.addr !243
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !244
  br label %dec_label_pc_18a4, !insn.addr !244

; uselistorder directives
  uselistorder i32* %rax.0.reg2mem, { 3, 0, 2, 1 }
  uselistorder label %dec_label_pc_18a4, { 1, 2, 0 }
}

define i32 @linked_list_heap() local_unnamed_addr {
dec_label_pc_18c1:
  %rbp.2.reg2mem = alloca i32, !insn.addr !245
  %rbx.3.reg2mem = alloca i64, !insn.addr !245
  %rbp.1.reg2mem = alloca i32, !insn.addr !245
  %rax.1.reg2mem = alloca i64, !insn.addr !245
  %rbp.0.reg2mem = alloca i64, !insn.addr !245
  %rbx.2.reg2mem = alloca i64, !insn.addr !245
  %rax.0.reg2mem = alloca i64, !insn.addr !245
  %rbx.1.reg2mem = alloca i64, !insn.addr !245
  %rbx.0.reg2mem = alloca i64, !insn.addr !245
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !246
  store i64 0, i64* %rbx.2.reg2mem, !insn.addr !246
  store i64 0, i64* %rbp.0.reg2mem, !insn.addr !246
  br label %dec_label_pc_1902, !insn.addr !246

dec_label_pc_18da:                                ; preds = %dec_label_pc_1902
  %0 = icmp eq i64 %rbx.2.reload, 0, !insn.addr !247
  store i64 %rbx.2.reload, i64* %rbx.0.reg2mem, !insn.addr !248
  store i32 -1, i32* %rbp.2.reg2mem, !insn.addr !248
  br i1 %0, label %dec_label_pc_1953, label %dec_label_pc_18df, !insn.addr !248

dec_label_pc_18df:                                ; preds = %dec_label_pc_18da, %dec_label_pc_18df
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %1 = add i64 %rbx.0.reload, 8, !insn.addr !249
  %2 = inttoptr i64 %1 to i64*, !insn.addr !249
  %3 = load i64, i64* %2, align 8, !insn.addr !249
  %4 = inttoptr i64 %rbx.0.reload to i64*, !insn.addr !250
  call void @free(i64* %4), !insn.addr !250
  %5 = icmp eq i64 %3, 0, !insn.addr !251
  %6 = icmp eq i1 %5, false, !insn.addr !252
  store i64 %3, i64* %rbx.0.reg2mem, !insn.addr !252
  store i32 -1, i32* %rbp.2.reg2mem, !insn.addr !252
  br i1 %6, label %dec_label_pc_18df, label %dec_label_pc_1953, !insn.addr !252

dec_label_pc_18fa:                                ; preds = %dec_label_pc_1914, %dec_label_pc_1923
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %7 = add nuw nsw i64 %rbp.0.reload, 10, !insn.addr !253
  %8 = and i64 %7, 4294967295, !insn.addr !253
  %9 = trunc i64 %7 to i32, !insn.addr !254
  %10 = icmp eq i32 %9, 50, !insn.addr !254
  store i64 %13, i64* %rax.0.reg2mem, !insn.addr !255
  store i64 %rbx.1.reload, i64* %rbx.2.reg2mem, !insn.addr !255
  store i64 %8, i64* %rbp.0.reg2mem, !insn.addr !255
  br i1 %10, label %dec_label_pc_192a, label %dec_label_pc_1902, !insn.addr !255

dec_label_pc_1902:                                ; preds = %dec_label_pc_18fa, %dec_label_pc_18c1
  %rbx.2.reload = load i64, i64* %rbx.2.reg2mem
  %11 = call i64* @malloc(i32 16), !insn.addr !256
  %12 = icmp eq i64* %11, null, !insn.addr !257
  br i1 %12, label %dec_label_pc_18da, label %dec_label_pc_1914, !insn.addr !258

dec_label_pc_1914:                                ; preds = %dec_label_pc_1902
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %13 = ptrtoint i64* %11 to i64, !insn.addr !256
  %14 = trunc i64 %rbp.0.reload to i32, !insn.addr !259
  %15 = bitcast i64* %11 to i32*, !insn.addr !259
  store i32 %14, i32* %15, align 4, !insn.addr !259
  %16 = add i64 %13, 8, !insn.addr !260
  %17 = inttoptr i64 %16 to i64*, !insn.addr !260
  store i64 0, i64* %17, align 8, !insn.addr !260
  %18 = icmp eq i64 %rbx.2.reload, 0, !insn.addr !261
  store i64 %13, i64* %rbx.1.reg2mem, !insn.addr !262
  br i1 %18, label %dec_label_pc_18fa, label %dec_label_pc_1923, !insn.addr !262

dec_label_pc_1923:                                ; preds = %dec_label_pc_1914
  %19 = add i64 %rax.0.reload, 8, !insn.addr !263
  %20 = inttoptr i64 %19 to i64*, !insn.addr !263
  store i64 %13, i64* %20, align 8, !insn.addr !263
  store i64 %rbx.2.reload, i64* %rbx.1.reg2mem, !insn.addr !264
  br label %dec_label_pc_18fa, !insn.addr !264

dec_label_pc_192a:                                ; preds = %dec_label_pc_18fa
  %21 = icmp eq i64 %rbx.1.reload, 0, !insn.addr !265
  store i64 %rbx.1.reload, i64* %rax.1.reg2mem, !insn.addr !266
  store i32 0, i32* %rbp.1.reg2mem, !insn.addr !266
  store i32 0, i32* %rbp.2.reg2mem, !insn.addr !266
  br i1 %21, label %dec_label_pc_1953, label %dec_label_pc_1937, !insn.addr !266

dec_label_pc_1937:                                ; preds = %dec_label_pc_192a, %dec_label_pc_1937
  %rbp.1.reload = load i32, i32* %rbp.1.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %22 = inttoptr i64 %rax.1.reload to i32*, !insn.addr !267
  %23 = load i32, i32* %22, align 4, !insn.addr !267
  %24 = add i32 %23, %rbp.1.reload, !insn.addr !267
  %25 = add i64 %rax.1.reload, 8, !insn.addr !268
  %26 = inttoptr i64 %25 to i64*, !insn.addr !268
  %27 = load i64, i64* %26, align 8, !insn.addr !268
  %28 = icmp eq i64 %27, 0, !insn.addr !269
  %29 = icmp eq i1 %28, false, !insn.addr !270
  store i64 %27, i64* %rax.1.reg2mem, !insn.addr !270
  store i32 %24, i32* %rbp.1.reg2mem, !insn.addr !270
  store i64 %rbx.1.reload, i64* %rbx.3.reg2mem, !insn.addr !270
  br i1 %29, label %dec_label_pc_1937, label %dec_label_pc_1942, !insn.addr !270

dec_label_pc_1942:                                ; preds = %dec_label_pc_1937, %dec_label_pc_1942
  %rbx.3.reload = load i64, i64* %rbx.3.reg2mem
  %30 = add i64 %rbx.3.reload, 8, !insn.addr !271
  %31 = inttoptr i64 %30 to i64*, !insn.addr !271
  %32 = load i64, i64* %31, align 8, !insn.addr !271
  %33 = inttoptr i64 %rbx.3.reload to i64*, !insn.addr !272
  call void @free(i64* %33), !insn.addr !272
  %34 = icmp eq i64 %32, 0, !insn.addr !273
  %35 = icmp eq i1 %34, false, !insn.addr !274
  store i64 %32, i64* %rbx.3.reg2mem, !insn.addr !274
  store i32 %24, i32* %rbp.2.reg2mem, !insn.addr !274
  br i1 %35, label %dec_label_pc_1942, label %dec_label_pc_1953, !insn.addr !274

dec_label_pc_1953:                                ; preds = %dec_label_pc_1942, %dec_label_pc_18df, %dec_label_pc_192a, %dec_label_pc_18da
  %rbp.2.reload = load i32, i32* %rbp.2.reg2mem
  ret i32 %rbp.2.reload, !insn.addr !275

; uselistorder directives
  uselistorder i64 %rbx.3.reload, { 1, 0 }
  uselistorder i64 %13, { 2, 1, 3, 0 }
  uselistorder i64* %11, { 0, 2, 1 }
  uselistorder i64 %rbx.2.reload, { 3, 0, 1, 2 }
  uselistorder i64 %rbx.1.reload, { 0, 1, 3, 2 }
  uselistorder i64 %rbx.0.reload, { 1, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.1.reg2mem, { 2, 1, 0 }
  uselistorder i64* %rax.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rbp.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.3.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rbp.2.reg2mem, { 0, 1, 3, 2, 4 }
  uselistorder label %dec_label_pc_1953, { 0, 2, 1, 3 }
  uselistorder label %dec_label_pc_1942, { 1, 0 }
  uselistorder label %dec_label_pc_1937, { 1, 0 }
  uselistorder label %dec_label_pc_18fa, { 1, 0 }
  uselistorder label %dec_label_pc_18df, { 1, 0 }
}

define i32* @create_tree_node(i32 %data) local_unnamed_addr {
dec_label_pc_1968:
  %0 = call i64* @malloc(i32 24), !insn.addr !276
  %1 = icmp eq i64* %0, null, !insn.addr !277
  %.pre = bitcast i64* %0 to i32*
  br i1 %1, label %dec_label_pc_1990, label %dec_label_pc_197e, !insn.addr !278

dec_label_pc_197e:                                ; preds = %dec_label_pc_1968
  %2 = ptrtoint i64* %0 to i64, !insn.addr !276
  store i32 %data, i32* %.pre, align 4, !insn.addr !279
  %3 = add i64 %2, 8, !insn.addr !280
  %4 = inttoptr i64 %3 to i64*, !insn.addr !280
  store i64 0, i64* %4, align 8, !insn.addr !280
  %5 = add i64 %2, 16, !insn.addr !281
  %6 = inttoptr i64 %5 to i64*, !insn.addr !281
  store i64 0, i64* %6, align 8, !insn.addr !281
  br label %dec_label_pc_1990, !insn.addr !281

dec_label_pc_1990:                                ; preds = %dec_label_pc_1968, %dec_label_pc_197e
  ret i32* %.pre, !insn.addr !282

; uselistorder directives
  uselistorder i64* %0, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1990, { 1, 0 }
}

define i32 @tree_heap_traversal() local_unnamed_addr {
dec_label_pc_1992:
  %.reg2mem = alloca i64, !insn.addr !283
  %rbp.0.reg2mem = alloca i32, !insn.addr !283
  %0 = call i32* @create_tree_node(i32 10), !insn.addr !284
  %1 = icmp eq i32* %0, null, !insn.addr !285
  store i32 -1, i32* %rbp.0.reg2mem, !insn.addr !286
  br i1 %1, label %dec_label_pc_19f4, label %dec_label_pc_19ab, !insn.addr !286

dec_label_pc_19ab:                                ; preds = %dec_label_pc_1992
  %2 = ptrtoint i32* %0 to i64, !insn.addr !284
  %3 = call i32* @create_tree_node(i32 20), !insn.addr !287
  %4 = ptrtoint i32* %3 to i64, !insn.addr !287
  %5 = add i64 %2, 8, !insn.addr !288
  %6 = inttoptr i64 %5 to i64*, !insn.addr !288
  store i64 %4, i64* %6, align 8, !insn.addr !288
  %7 = call i32* @create_tree_node(i32 30), !insn.addr !289
  %8 = ptrtoint i32* %7 to i64, !insn.addr !289
  %9 = add i64 %2, 16, !insn.addr !290
  %10 = inttoptr i64 %9 to i64*, !insn.addr !290
  store i64 %8, i64* %10, align 8, !insn.addr !290
  %11 = load i64, i64* %6, align 8, !insn.addr !291
  %12 = icmp eq i32* %7, null, !insn.addr !292
  %13 = icmp eq i64 %11, 0, !insn.addr !293
  %or.cond = or i1 %12, %13
  br i1 %or.cond, label %dec_label_pc_19fd, label %dec_label_pc_19d8, !insn.addr !294

dec_label_pc_19d8:                                ; preds = %dec_label_pc_19ab
  %14 = inttoptr i64 %11 to i32*, !insn.addr !295
  %15 = load i32, i32* %14, align 4, !insn.addr !295
  %16 = load i32, i32* %0, align 4, !insn.addr !296
  %17 = add i32 %16, %15, !insn.addr !296
  %18 = load i32, i32* %7, align 4, !insn.addr !297
  %19 = add i32 %17, %18, !insn.addr !297
  %20 = inttoptr i64 %11 to i64*, !insn.addr !298
  call void @free(i64* %20), !insn.addr !298
  %21 = load i64, i64* %10, align 8, !insn.addr !299
  %22 = inttoptr i64 %21 to i64*, !insn.addr !300
  call void @free(i64* %22), !insn.addr !300
  %23 = bitcast i32* %0 to i64*, !insn.addr !301
  call void @free(i64* %23), !insn.addr !301
  store i32 %19, i32* %rbp.0.reg2mem, !insn.addr !301
  br label %dec_label_pc_19f4, !insn.addr !301

dec_label_pc_19f4:                                ; preds = %dec_label_pc_1992, %dec_label_pc_1a15, %dec_label_pc_19d8
  %rbp.0.reload = load i32, i32* %rbp.0.reg2mem
  ret i32 %rbp.0.reload, !insn.addr !302

dec_label_pc_19fd:                                ; preds = %dec_label_pc_19ab
  store i64 %8, i64* %.reg2mem, !insn.addr !303
  br i1 %13, label %dec_label_pc_1a07, label %dec_label_pc_1a02, !insn.addr !303

dec_label_pc_1a02:                                ; preds = %dec_label_pc_19fd
  %24 = inttoptr i64 %11 to i64*, !insn.addr !304
  call void @free(i64* %24), !insn.addr !304
  %.pre = load i64, i64* %10, align 8
  store i64 %.pre, i64* %.reg2mem, !insn.addr !304
  br label %dec_label_pc_1a07, !insn.addr !304

dec_label_pc_1a07:                                ; preds = %dec_label_pc_1a02, %dec_label_pc_19fd
  %.reload = load i64, i64* %.reg2mem, !insn.addr !305
  %25 = icmp eq i64 %.reload, 0, !insn.addr !306
  br i1 %25, label %dec_label_pc_1a15, label %dec_label_pc_1a10, !insn.addr !307

dec_label_pc_1a10:                                ; preds = %dec_label_pc_1a07
  %26 = inttoptr i64 %.reload to i64*, !insn.addr !308
  call void @free(i64* %26), !insn.addr !308
  br label %dec_label_pc_1a15, !insn.addr !308

dec_label_pc_1a15:                                ; preds = %dec_label_pc_1a10, %dec_label_pc_1a07
  %27 = bitcast i32* %0 to i64*, !insn.addr !309
  call void @free(i64* %27), !insn.addr !309
  store i32 -2, i32* %rbp.0.reg2mem, !insn.addr !310
  br label %dec_label_pc_19f4, !insn.addr !310

; uselistorder directives
  uselistorder i64 %11, { 1, 0, 2, 3 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i32* %0, { 0, 1, 2, 4, 3 }
  uselistorder i32* %rbp.0.reg2mem, { 3, 0, 2, 1 }
  uselistorder i64* %.reg2mem, { 0, 2, 1 }
  uselistorder i32* (i32)* @create_tree_node, { 2, 1, 0 }
  uselistorder label %dec_label_pc_19f4, { 1, 2, 0 }
}

define i32 @memory_leak(i32 %n) local_unnamed_addr {
dec_label_pc_1a2b:
  %storemerge.reg2mem = alloca i32, !insn.addr !311
  %rdx.0.reg2mem = alloca i64, !insn.addr !311
  %0 = mul i32 %n, 4, !insn.addr !312
  %1 = call i64* @malloc(i32 %0), !insn.addr !313
  %2 = icmp eq i64* %1, null, !insn.addr !314
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !315
  br i1 %2, label %dec_label_pc_1a69, label %dec_label_pc_1a43, !insn.addr !315

dec_label_pc_1a43:                                ; preds = %dec_label_pc_1a2b
  %3 = zext i32 %n to i64, !insn.addr !316
  %4 = ptrtoint i64* %1 to i64, !insn.addr !313
  %5 = icmp slt i32 %n, 1
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !317
  br i1 %5, label %dec_label_pc_1a5a, label %dec_label_pc_1a4e, !insn.addr !317

dec_label_pc_1a4e:                                ; preds = %dec_label_pc_1a43, %dec_label_pc_1a4e
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %6 = trunc i64 %rdx.0.reload to i32, !insn.addr !318
  %7 = mul i64 %rdx.0.reload, 4, !insn.addr !318
  %8 = add i64 %7, %4, !insn.addr !318
  %9 = inttoptr i64 %8 to i32*, !insn.addr !318
  store i32 %6, i32* %9, align 4, !insn.addr !318
  %10 = add i64 %rdx.0.reload, 1, !insn.addr !319
  %11 = icmp eq i64 %10, %3, !insn.addr !320
  %12 = icmp eq i1 %11, false, !insn.addr !321
  store i64 %10, i64* %rdx.0.reg2mem, !insn.addr !321
  br i1 %12, label %dec_label_pc_1a4e, label %dec_label_pc_1a5a, !insn.addr !321

dec_label_pc_1a5a:                                ; preds = %dec_label_pc_1a4e, %dec_label_pc_1a43
  %13 = icmp slt i32 %n, 0
  %14 = zext i1 %13 to i32, !insn.addr !322
  %15 = add i32 %14, %n, !insn.addr !323
  %16 = ashr i32 %15, 1, !insn.addr !324
  %17 = sext i32 %16 to i64, !insn.addr !325
  %18 = mul i64 %17, 4, !insn.addr !326
  %19 = add i64 %18, %4, !insn.addr !326
  %20 = inttoptr i64 %19 to i32*, !insn.addr !326
  %21 = load i32, i32* %20, align 4, !insn.addr !326
  store i32 %21, i32* %storemerge.reg2mem, !insn.addr !326
  br label %dec_label_pc_1a69, !insn.addr !326

dec_label_pc_1a69:                                ; preds = %dec_label_pc_1a2b, %dec_label_pc_1a5a
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !327

; uselistorder directives
  uselistorder i64 %rdx.0.reload, { 1, 2, 0 }
  uselistorder i64* %1, { 1, 0 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %n, { 2, 1, 3, 4, 0 }
  uselistorder label %dec_label_pc_1a69, { 1, 0 }
  uselistorder label %dec_label_pc_1a4e, { 1, 0 }
}

define i32 @dangling_pointer() local_unnamed_addr {
dec_label_pc_1a72:
  %storemerge.reg2mem = alloca i32, !insn.addr !328
  %0 = call i64* @malloc(i32 4), !insn.addr !329
  %1 = icmp eq i64* %0, null, !insn.addr !330
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !331
  br i1 %1, label %dec_label_pc_1aae, label %dec_label_pc_1a86, !insn.addr !331

dec_label_pc_1a86:                                ; preds = %dec_label_pc_1a72
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_30cf, i64 0, i64 0), i64 42), !insn.addr !332
  call void @free(i64* nonnull %0), !insn.addr !333
  %3 = bitcast i64* %0 to i32*, !insn.addr !334
  %4 = load i32, i32* %3, align 4, !insn.addr !334
  store i32 %4, i32* %storemerge.reg2mem, !insn.addr !334
  br label %dec_label_pc_1aae, !insn.addr !334

dec_label_pc_1aae:                                ; preds = %dec_label_pc_1a72, %dec_label_pc_1a86
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !335

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 42, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1aae, { 1, 0 }
}

define i32 @double_free(i32* %p) local_unnamed_addr {
dec_label_pc_1ab7:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i32, !insn.addr !336
  %1 = load i64, i64* %0
  %2 = icmp eq i32* %p, null, !insn.addr !337
  br i1 %2, label %dec_label_pc_1ac3, label %dec_label_pc_1ac0, !insn.addr !338

dec_label_pc_1ac0:                                ; preds = %dec_label_pc_1ab7
  %3 = trunc i64 %1 to i32
  ret i32 %3, !insn.addr !339

dec_label_pc_1ac3:                                ; preds = %dec_label_pc_1ab7
  %4 = call i64* @malloc(i32 4), !insn.addr !340
  %5 = icmp eq i64* %4, null, !insn.addr !341
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !342
  br i1 %5, label %dec_label_pc_1aeb, label %dec_label_pc_1ad6, !insn.addr !342

dec_label_pc_1ad6:                                ; preds = %dec_label_pc_1ac3
  call void @free(i64* nonnull %4), !insn.addr !343
  call void @free(i64* nonnull %4), !insn.addr !344
  store i32 -2, i32* %storemerge.reg2mem, !insn.addr !345
  br label %dec_label_pc_1aeb, !insn.addr !345

dec_label_pc_1aeb:                                ; preds = %dec_label_pc_1ac3, %dec_label_pc_1ad6
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !346

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 4, { 3, 4, 0, 1, 6, 5, 2 }
  uselistorder label %dec_label_pc_1aeb, { 1, 0 }
}

define i32 @heap_overflow() local_unnamed_addr {
dec_label_pc_1af4:
  %rbx.0.reg2mem = alloca i32, !insn.addr !347
  %rdx.0.reg2mem = alloca i64, !insn.addr !347
  %rcx.0.reg2mem = alloca i64, !insn.addr !347
  %0 = call i64* @malloc(i32 40), !insn.addr !348
  %1 = icmp eq i64* %0, null, !insn.addr !349
  store i32 -1, i32* %rbx.0.reg2mem, !insn.addr !350
  br i1 %1, label %dec_label_pc_1b2b, label %dec_label_pc_1b08, !insn.addr !350

dec_label_pc_1b08:                                ; preds = %dec_label_pc_1af4
  %2 = ptrtoint i64* %0 to i64, !insn.addr !348
  store i64 %2, i64* %rcx.0.reg2mem, !insn.addr !351
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !351
  br label %dec_label_pc_1b13, !insn.addr !351

dec_label_pc_1b13:                                ; preds = %dec_label_pc_1b13, %dec_label_pc_1b08
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %3 = trunc i64 %rdx.0.reload to i32, !insn.addr !352
  %4 = inttoptr i64 %rcx.0.reload to i32*, !insn.addr !352
  store i32 %3, i32* %4, align 4, !insn.addr !352
  %5 = add nuw nsw i64 %rdx.0.reload, 100, !insn.addr !353
  %6 = and i64 %5, 4294967295, !insn.addr !353
  %7 = add i64 %rcx.0.reload, 4, !insn.addr !354
  %8 = trunc i64 %5 to i32, !insn.addr !355
  %9 = icmp eq i32 %8, ptrtoint (i32* @global_var_44c to i32), !insn.addr !355
  %10 = icmp eq i1 %9, false, !insn.addr !356
  store i64 %7, i64* %rcx.0.reg2mem, !insn.addr !356
  store i64 %6, i64* %rdx.0.reg2mem, !insn.addr !356
  br i1 %10, label %dec_label_pc_1b13, label %dec_label_pc_1b24, !insn.addr !356

dec_label_pc_1b24:                                ; preds = %dec_label_pc_1b13
  %11 = bitcast i64* %0 to i32*, !insn.addr !357
  %12 = load i32, i32* %11, align 4, !insn.addr !357
  call void @free(i64* nonnull %0), !insn.addr !358
  store i32 %12, i32* %rbx.0.reg2mem, !insn.addr !358
  br label %dec_label_pc_1b2b, !insn.addr !358

dec_label_pc_1b2b:                                ; preds = %dec_label_pc_1af4, %dec_label_pc_1b24
  %rbx.0.reload = load i32, i32* %rbx.0.reg2mem
  ret i32 %rbx.0.reload, !insn.addr !359

; uselistorder directives
  uselistorder i64 %rcx.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64* %0, { 0, 1, 3, 2 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rbx.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* (i32)* @malloc, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder label %dec_label_pc_1b2b, { 1, 0 }
}

define void @test_heap_memory() local_unnamed_addr {
dec_label_pc_1b36:
  %stack_var_-28 = alloca i32, align 4
  %stack_var_-24 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !360
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_30e6 to i8*)), !insn.addr !361
  %2 = call i32 @heap_basic(i32 10), !insn.addr !362
  %3 = zext i32 %2 to i64, !insn.addr !363
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3104, i64 0, i64 0), i64 %3), !insn.addr !364
  %5 = call i32 @heap_calloc(i32 5), !insn.addr !365
  %6 = zext i32 %5 to i64, !insn.addr !366
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3121, i64 0, i64 0), i64 %6), !insn.addr !367
  %8 = call i32 @heap_realloc(), !insn.addr !368
  %9 = zext i32 %8 to i64, !insn.addr !369
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3338, i64 0, i64 0), i64 %9), !insn.addr !370
  %11 = call i32 @heap_array(i32 10), !insn.addr !371
  %12 = zext i32 %11 to i64, !insn.addr !372
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_313f, i64 0, i64 0), i64 %12), !insn.addr !373
  %14 = call i32 @heap_struct(i32 5), !insn.addr !374
  %15 = zext i32 %14 to i64, !insn.addr !375
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_315c, i64 0, i64 0), i64 %15), !insn.addr !376
  store i64 0, i64* %stack_var_-24, align 8, !insn.addr !377
  %17 = bitcast i64* %stack_var_-24 to i32**, !insn.addr !378
  %18 = call i32 @heap_nested(i32** nonnull %17), !insn.addr !378
  %19 = zext i32 %18 to i64, !insn.addr !379
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_317a, i64 0, i64 0), i64 %19), !insn.addr !380
  %21 = load i64, i64* %stack_var_-24, align 8, !insn.addr !381
  %22 = icmp eq i64 %21, 0, !insn.addr !382
  br i1 %22, label %dec_label_pc_1c4c, label %dec_label_pc_1c39, !insn.addr !383

dec_label_pc_1c39:                                ; preds = %dec_label_pc_1b36
  %23 = add i64 %21, 8, !insn.addr !384
  %24 = inttoptr i64 %23 to i64*, !insn.addr !384
  %25 = load i64, i64* %24, align 8, !insn.addr !384
  %26 = inttoptr i64 %25 to i64*, !insn.addr !385
  call void @free(i64* %26), !insn.addr !385
  %27 = load i64, i64* %stack_var_-24, align 8, !insn.addr !386
  %28 = inttoptr i64 %27 to i64*, !insn.addr !387
  call void @free(i64* %28), !insn.addr !387
  br label %dec_label_pc_1c4c, !insn.addr !387

dec_label_pc_1c4c:                                ; preds = %dec_label_pc_1c39, %dec_label_pc_1b36
  %29 = call i32 @linked_list_heap(), !insn.addr !388
  %30 = zext i32 %29 to i64, !insn.addr !389
  %31 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3358, i64 0, i64 0), i64 %30), !insn.addr !390
  %32 = call i32 @tree_heap_traversal(), !insn.addr !391
  %33 = zext i32 %32 to i64, !insn.addr !392
  %34 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3380, i64 0, i64 0), i64 %33), !insn.addr !393
  %35 = call i32 @memory_leak(i32 5), !insn.addr !394
  %36 = zext i32 %35 to i64, !insn.addr !395
  %37 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3198, i64 0, i64 0), i64 %36), !insn.addr !396
  %38 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_33a8, i64 0, i64 0)), !insn.addr !397
  %39 = call i32 @fork(), !insn.addr !398
  %40 = icmp eq i32 %39, 0, !insn.addr !399
  br i1 %40, label %dec_label_pc_1d18, label %dec_label_pc_1cd1, !insn.addr !400

dec_label_pc_1cd1:                                ; preds = %dec_label_pc_1c4c
  %41 = icmp slt i32 %39, 1
  br i1 %41, label %dec_label_pc_1d5a, label %dec_label_pc_1cd7, !insn.addr !401

dec_label_pc_1cd7:                                ; preds = %dec_label_pc_1cd1
  %42 = call i32 @waitpid(i32 %39, i32* nonnull %stack_var_-28, i32 0), !insn.addr !402
  %43 = load i32, i32* %stack_var_-28, align 4, !insn.addr !403
  %44 = urem i32 %43, 128, !insn.addr !404
  %45 = icmp eq i32 %44, 0, !insn.addr !404
  br i1 %45, label %dec_label_pc_1d3f, label %dec_label_pc_1cf3, !insn.addr !405

dec_label_pc_1cf3:                                ; preds = %dec_label_pc_1cd7
  %46 = trunc i32 %43 to i8, !insn.addr !406
  %47 = urem i8 %46, -128
  %48 = add nuw i8 %47, 1, !insn.addr !407
  %49 = icmp slt i8 %48, 2, !insn.addr !408
  br i1 %49, label %dec_label_pc_1d66, label %dec_label_pc_1cfe, !insn.addr !408

dec_label_pc_1cfe:                                ; preds = %dec_label_pc_1cf3
  %50 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_33f0 to i8*)), !insn.addr !409
  br label %dec_label_pc_1d66, !insn.addr !410

dec_label_pc_1d18:                                ; preds = %dec_label_pc_1c4c
  %51 = call i32 @dangling_pointer(), !insn.addr !411
  %52 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_31b6 to i8*)), !insn.addr !412
  call void @exit(i32 0), !insn.addr !413
  unreachable, !insn.addr !413

dec_label_pc_1d3f:                                ; preds = %dec_label_pc_1cd7
  %53 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_33c8 to i8*)), !insn.addr !414
  br label %dec_label_pc_1d66, !insn.addr !415

dec_label_pc_1d5a:                                ; preds = %dec_label_pc_1cd1
  call void @perror(i8* bitcast (i8** @global_var_31c6 to i8*)), !insn.addr !416
  br label %dec_label_pc_1d66, !insn.addr !416

dec_label_pc_1d66:                                ; preds = %dec_label_pc_1d5a, %dec_label_pc_1d3f, %dec_label_pc_1cfe, %dec_label_pc_1cf3
  %54 = call i64 @__readfsqword(i64 40), !insn.addr !417
  %55 = icmp eq i64 %0, %54, !insn.addr !417
  %56 = icmp eq i1 %55, false, !insn.addr !418
  br i1 %56, label %dec_label_pc_1d7b, label %dec_label_pc_1d76, !insn.addr !418

dec_label_pc_1d76:                                ; preds = %dec_label_pc_1d66
  ret void, !insn.addr !419

dec_label_pc_1d7b:                                ; preds = %dec_label_pc_1d66
  call void @__stack_chk_fail(), !insn.addr !420
  ret void, !insn.addr !420

; uselistorder directives
  uselistorder i32 %43, { 1, 0 }
  uselistorder i64* %stack_var_-24, { 1, 2, 0, 3 }
  uselistorder void (i64*)* @free, { 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 21 }
  uselistorder i64 8, { 0, 1, 2, 3, 4, 6, 7, 5, 8, 9, 10, 11 }
}

define i32 @global_var_access() local_unnamed_addr {
dec_label_pc_1d80:
  %0 = load i32, i32* @global_counter, align 4, !insn.addr !421
  %1 = add i32 %0, 1, !insn.addr !422
  store i32 %1, i32* @global_counter, align 4, !insn.addr !423
  ret i32 %1, !insn.addr !424
}

define i64 @global_var_read() local_unnamed_addr {
dec_label_pc_1d94:
  %0 = load i32, i32* @global_counter, align 4, !insn.addr !425
  %1 = mul i32 %0, 2, !insn.addr !426
  %2 = zext i32 %1 to i64, !insn.addr !426
  ret i64 %2, !insn.addr !427
}

define i64 @global_array_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_1da1:
  %0 = trunc i64 %arg1 to i32, !insn.addr !428
  %1 = icmp ult i32 %0, 10
  br i1 %1, label %dec_label_pc_1daa, label %dec_label_pc_1db8, !insn.addr !429

dec_label_pc_1daa:                                ; preds = %dec_label_pc_1da1
  %sext = mul i64 %arg1, 4294967296
  %2 = ashr exact i64 %sext, 30, !insn.addr !430
  %3 = add i64 %2, ptrtoint ([10 x i32]* @global_array to i64), !insn.addr !430
  %4 = inttoptr i64 %3 to i32*, !insn.addr !430
  %5 = load i32, i32* %4, align 4, !insn.addr !430
  %6 = zext i32 %5 to i64, !insn.addr !430
  ret i64 %6, !insn.addr !431

dec_label_pc_1db8:                                ; preds = %dec_label_pc_1da1
  ret i64 4294967295, !insn.addr !432
}

define i64 @static_local(i64 %arg1) local_unnamed_addr {
dec_label_pc_1dbe:
  %0 = trunc i64 %arg1 to i32, !insn.addr !433
  %1 = icmp eq i32 %0, 0, !insn.addr !433
  %2 = icmp eq i1 %1, false, !insn.addr !434
  %spec.select = select i1 %2, i64 0, i64 ptrtoint (i32* @global_var_6035 to i64)
  %3 = trunc i64 %spec.select to i32, !insn.addr !435
  store i32 %3, i32* bitcast (i64* @global_var_6034 to i32*), align 8, !insn.addr !435
  ret i64 %spec.select, !insn.addr !436

; uselistorder directives
  uselistorder i64 %spec.select, { 1, 0 }
}

define i64 @call_static_func(i64 %arg1) local_unnamed_addr {
dec_label_pc_1ddb:
  %factor = mul i64 %arg1, 2
  %0 = and i64 %factor, 4294967294, !insn.addr !437
  %1 = or i64 %0, 1, !insn.addr !437
  ret i64 %1, !insn.addr !438
}

define i64 @access_extern_global() local_unnamed_addr {
dec_label_pc_1de4:
  %0 = load i32, i32* @extern_global_var, align 4, !insn.addr !439
  %1 = add i32 %0, 100, !insn.addr !440
  %2 = zext i32 %1 to i64, !insn.addr !440
  ret i64 %2, !insn.addr !441
}

define i32 @call_extern_func() local_unnamed_addr {
dec_label_pc_1df2:
  %0 = call i32 @extern_function(i32 5), !insn.addr !442
  ret i32 %0, !insn.addr !443
}

define i32 @read_const_data() local_unnamed_addr {
dec_label_pc_1e09:
  ret i32 ptrtoint (i32* @global_var_6046 to i32), !insn.addr !444
}

define i64 @access_bss_var() local_unnamed_addr {
dec_label_pc_1e1c:
  ret i64 0, !insn.addr !445
}

define i64 @access_bss_buffer() local_unnamed_addr {
dec_label_pc_1e26:
  ret i64 0, !insn.addr !446
}

define i32 @global_struct_access() local_unnamed_addr {
dec_label_pc_1e30:
  ret i32 30, !insn.addr !447
}

define i64 @set_file_static(i64 %arg1) local_unnamed_addr {
dec_label_pc_1e3a:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg1 to i32, !insn.addr !448
  store i32 %2, i32* @file_scope_static, align 4, !insn.addr !448
  ret i64 %1, !insn.addr !449
}

define i64 @get_file_static() local_unnamed_addr {
dec_label_pc_1e45:
  %0 = load i32, i32* @file_scope_static, align 4, !insn.addr !450
  %1 = zext i32 %0 to i64, !insn.addr !450
  ret i64 %1, !insn.addr !451
}

define i64 @set_global_callback(i64 %arg1) local_unnamed_addr {
dec_label_pc_1e50:
  %0 = alloca i64
  %1 = load i64, i64* %0
  store i64 %arg1, i64* bitcast (i32 (i32)** @global_func_ptr to i64*), align 8, !insn.addr !452
  ret i64 %1, !insn.addr !453
}

define i32 @call_global_callback(i32 %x) local_unnamed_addr {
dec_label_pc_1e5c:
  %0 = load i32 (i32)*, i32 (i32)** @global_func_ptr, align 8, !insn.addr !454
  %1 = icmp eq i32 (i32)* %0, null, !insn.addr !455
  br i1 %1, label %dec_label_pc_1e77, label %dec_label_pc_1e6c, !insn.addr !456

dec_label_pc_1e6c:                                ; preds = %dec_label_pc_1e5c
  %2 = ptrtoint i32 (i32)* %0 to i64, !insn.addr !454
  %3 = trunc i64 %2 to i32, !insn.addr !457
  ret i32 %3, !insn.addr !457

dec_label_pc_1e77:                                ; preds = %dec_label_pc_1e5c
  ret i32 -1, !insn.addr !458

; uselistorder directives
  uselistorder i32 (i32)* %0, { 1, 0 }
}

define i64 @global_heap_store(i64 %arg1) local_unnamed_addr {
dec_label_pc_1e7d:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %arg1, 0, !insn.addr !459
  br i1 %2, label %dec_label_pc_1e89, label %dec_label_pc_1e86, !insn.addr !460

dec_label_pc_1e86:                                ; preds = %dec_label_pc_1e7d
  %3 = and i64 %1, 4294967295, !insn.addr !461
  ret i64 %3, !insn.addr !462

dec_label_pc_1e89:                                ; preds = %dec_label_pc_1e7d
  ret i64 4294967295, !insn.addr !463
}

define i32 @static_complex_init() local_unnamed_addr {
dec_label_pc_1e8f:
  ret i32 15, !insn.addr !464
}

define i64 @tls_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_1e99:
  %0 = mul i64 %arg1, 2, !insn.addr !465
  %1 = and i64 %0, 4294967294, !insn.addr !465
  ret i64 %1, !insn.addr !466

; uselistorder directives
  uselistorder i64 4294967294, { 3, 1, 0, 2 }
}

define i32 @init_order_test() local_unnamed_addr {
dec_label_pc_1ea1:
  store i32 20, i32* bitcast (i64* @global_var_6030 to i32*), align 8, !insn.addr !467
  ret i32 20, !insn.addr !468

; uselistorder directives
  uselistorder i32 20, { 0, 3, 1, 4, 2 }
}

define void @test_static_global() local_unnamed_addr {
dec_label_pc_1eb5:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3438 to i8*)), !insn.addr !469
  %1 = call i32 @global_var_access(), !insn.addr !470
  %2 = zext i32 %1 to i64, !insn.addr !471
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3460, i64 0, i64 0), i64 %2), !insn.addr !472
  %4 = load i32, i32* @global_counter, align 4, !insn.addr !473
  %5 = mul i32 %4, 2, !insn.addr !474
  %6 = zext i32 %5 to i64, !insn.addr !474
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3488, i64 0, i64 0), i64 %6), !insn.addr !475
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_34b0, i64 0, i64 0), i64 5), !insn.addr !476
  store i32 1, i32* bitcast (i64* @global_var_6034 to i32*), align 8, !insn.addr !477
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_31d1, i64 0, i64 0), i64 1), !insn.addr !478
  store i32 ptrtoint (i32* @global_var_6035 to i32), i32* bitcast (i64* @global_var_6034 to i32*), align 8, !insn.addr !479
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_31d1, i64 0, i64 0), i64 ptrtoint (i32* @global_var_6035 to i64)), !insn.addr !480
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_34d8, i64 0, i64 0), i64 11), !insn.addr !481
  %12 = load i32, i32* @extern_global_var, align 4, !insn.addr !482
  %13 = add i32 %12, 100, !insn.addr !483
  %14 = zext i32 %13 to i64, !insn.addr !483
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3500, i64 0, i64 0), i64 %14), !insn.addr !484
  %16 = call i32 @call_extern_func(), !insn.addr !485
  %17 = zext i32 %16 to i64, !insn.addr !486
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3528, i64 0, i64 0), i64 %17), !insn.addr !487
  %19 = call i32 @read_const_data(), !insn.addr !488
  %20 = zext i32 %19 to i64, !insn.addr !489
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3550, i64 0, i64 0), i64 %20), !insn.addr !490
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3578, i64 0, i64 0), i64 0), !insn.addr !491
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3598, i64 0, i64 0), i64 0), !insn.addr !492
  %24 = call i32 @global_struct_access(), !insn.addr !493
  %25 = zext i32 %24 to i64, !insn.addr !494
  %26 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_35c0, i64 0, i64 0), i64 %25), !insn.addr !495
  store i32 50, i32* @file_scope_static, align 4, !insn.addr !496
  %27 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_31ef, i64 0, i64 0), i64 50), !insn.addr !497
  store i64 4873, i64* bitcast (i32 (i32)** @global_func_ptr to i64*), align 8, !insn.addr !498
  %28 = call i32 @call_global_callback(i32 5), !insn.addr !499
  %29 = zext i32 %28 to i64, !insn.addr !500
  %30 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_35e8, i64 0, i64 0), i64 %29), !insn.addr !501
  %31 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3610, i64 0, i64 0), i64 100), !insn.addr !502
  %32 = call i32 @static_complex_init(), !insn.addr !503
  %33 = zext i32 %32 to i64, !insn.addr !504
  %34 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_3638, i64 0, i64 0), i64 %33), !insn.addr !505
  %35 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_320c, i64 0, i64 0), i64 20), !insn.addr !506
  %36 = call i32 @init_order_test(), !insn.addr !507
  %37 = zext i32 %36 to i64, !insn.addr !508
  %38 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3660, i64 0, i64 0), i64 %37), !insn.addr !509
  ret void, !insn.addr !510

; uselistorder directives
  uselistorder i64 100, { 1, 0 }
  uselistorder i32 50, { 2, 1, 0, 3 }
  uselistorder i32 100, { 0, 2, 1 }
  uselistorder i64 ptrtoint (i32* @global_var_6035 to i64), { 1, 0 }
}

define i32 @memop_memset(i8* %buf, i64 %size, i32 %fill_value) local_unnamed_addr {
dec_label_pc_2112:
  %storemerge.reg2mem = alloca i32, !insn.addr !511
  %0 = icmp eq i8* %buf, null, !insn.addr !512
  %1 = icmp eq i64 %size, 0, !insn.addr !513
  %or.cond = or i1 %0, %1
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !514
  br i1 %or.cond, label %dec_label_pc_2134, label %dec_label_pc_2129, !insn.addr !514

dec_label_pc_2129:                                ; preds = %dec_label_pc_2112
  %2 = ptrtoint i8* %buf to i64
  %3 = trunc i64 %2 to i32
  %4 = bitcast i8* %buf to i64*, !insn.addr !515
  %5 = trunc i64 %size to i32, !insn.addr !515
  %6 = call i64* @memset(i64* %4, i32 %fill_value, i32 %5), !insn.addr !515
  %phitmp = urem i32 %3, 256
  store i32 %phitmp, i32* %storemerge.reg2mem, !insn.addr !516
  br label %dec_label_pc_2134, !insn.addr !516

dec_label_pc_2134:                                ; preds = %dec_label_pc_2112, %dec_label_pc_2129
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !517

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 %size, { 1, 0 }
  uselistorder i8* %buf, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2134, { 1, 0 }
}

define i32 @memop_memcpy(i8* %dst, i32* %src, i64 %n) local_unnamed_addr {
dec_label_pc_2143:
  %storemerge.reg2mem = alloca i32, !insn.addr !518
  %0 = icmp eq i32* %src, null, !insn.addr !519
  %1 = icmp eq i64 %n, 0, !insn.addr !520
  %2 = or i1 %0, %1
  %3 = icmp eq i1 %2, false, !insn.addr !521
  %4 = icmp eq i1 %3, false, !insn.addr !522
  %5 = icmp eq i8* %dst, null, !insn.addr !523
  %or.cond = or i1 %5, %4
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !522
  br i1 %or.cond, label %dec_label_pc_2178, label %dec_label_pc_2168, !insn.addr !522

dec_label_pc_2168:                                ; preds = %dec_label_pc_2143
  %6 = ptrtoint i8* %dst to i64
  %7 = bitcast i8* %dst to i64*, !insn.addr !524
  %8 = bitcast i32* %src to i64*, !insn.addr !524
  %9 = trunc i64 %n to i32, !insn.addr !524
  %10 = call i64* @memcpy(i64* %7, i64* %8, i32 %9), !insn.addr !524
  %11 = and i64 %n, -4, !insn.addr !525
  %12 = add i64 %6, -4, !insn.addr !526
  %13 = add i64 %12, %11, !insn.addr !526
  %14 = inttoptr i64 %13 to i32*, !insn.addr !526
  %15 = load i32, i32* %14, align 4, !insn.addr !526
  store i32 %15, i32* %storemerge.reg2mem, !insn.addr !526
  br label %dec_label_pc_2178, !insn.addr !526

dec_label_pc_2178:                                ; preds = %dec_label_pc_2143, %dec_label_pc_2168
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !527

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i8* %dst, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2178, { 1, 0 }
}

define i32 @memop_memmove(i8* %buf, i64 %n) local_unnamed_addr {
dec_label_pc_2186:
  %storemerge.reg2mem = alloca i32, !insn.addr !528
  %0 = icmp eq i8* %buf, null, !insn.addr !529
  %1 = icmp ult i64 %n, 2
  %or.cond = or i1 %0, %1
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !530
  br i1 %or.cond, label %dec_label_pc_21ad, label %dec_label_pc_2199, !insn.addr !530

dec_label_pc_2199:                                ; preds = %dec_label_pc_2186
  %2 = ptrtoint i8* %buf to i64
  %3 = add i64 %2, 1, !insn.addr !531
  %4 = inttoptr i64 %3 to i64*, !insn.addr !532
  %5 = bitcast i8* %buf to i64*, !insn.addr !532
  %6 = trunc i64 %n to i32
  %7 = add i32 %6, -1, !insn.addr !532
  %8 = call i64* @memmove(i64* %4, i64* %5, i32 %7), !insn.addr !532
  %9 = inttoptr i64 %3 to i8*, !insn.addr !533
  %10 = load i8, i8* %9, align 1, !insn.addr !533
  %phitmp = sext i8 %10 to i32
  store i32 %phitmp, i32* %storemerge.reg2mem, !insn.addr !533
  br label %dec_label_pc_21ad, !insn.addr !533

dec_label_pc_21ad:                                ; preds = %dec_label_pc_2186, %dec_label_pc_2199
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !534

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 2, { 4, 0, 1, 5, 2, 3 }
  uselistorder i64 %n, { 1, 0 }
  uselistorder i8* %buf, { 0, 2, 1 }
  uselistorder label %dec_label_pc_21ad, { 1, 0 }
}

define i32 @memop_memcmp(i32* %p1, i32* %p2, i64 %n) local_unnamed_addr {
dec_label_pc_21bc:
  %0 = icmp eq i32* %p2, null, !insn.addr !535
  %1 = icmp eq i64 %n, 0, !insn.addr !536
  %2 = or i1 %0, %1
  %3 = icmp eq i1 %2, false, !insn.addr !537
  %4 = icmp eq i1 %3, false, !insn.addr !538
  %5 = icmp eq i32* %p1, null, !insn.addr !539
  %or.cond = or i1 %5, %4
  br i1 %or.cond, label %dec_label_pc_21ee, label %dec_label_pc_21d5, !insn.addr !538

dec_label_pc_21d5:                                ; preds = %dec_label_pc_21bc
  %6 = bitcast i32* %p1 to i64*, !insn.addr !540
  %7 = bitcast i32* %p2 to i64*, !insn.addr !540
  %8 = trunc i64 %n to i32, !insn.addr !540
  %9 = call i32 @memcmp(i64* %6, i64* %7, i32 %8), !insn.addr !540
  %10 = ashr i32 %9, 31, !insn.addr !541
  %11 = icmp slt i32 %9, 1
  %12 = select i1 %11, i32 %10, i32 1, !insn.addr !542
  ret i32 %12, !insn.addr !543

dec_label_pc_21ee:                                ; preds = %dec_label_pc_21bc
  ret i32 0, !insn.addr !544
}

define i32 @memop_bzero(i8* %buf, i64 %n) local_unnamed_addr {
dec_label_pc_21f4:
  %0 = icmp eq i8* %buf, null, !insn.addr !545
  br i1 %0, label %dec_label_pc_2213, label %dec_label_pc_21fd, !insn.addr !546

dec_label_pc_21fd:                                ; preds = %dec_label_pc_21f4
  %1 = ptrtoint i8* %buf to i64
  %2 = trunc i64 %1 to i32
  %3 = bitcast i8* %buf to i64*, !insn.addr !547
  %4 = trunc i64 %n to i32, !insn.addr !547
  %5 = call i64* @memset(i64* %3, i32 0, i32 %4), !insn.addr !547
  %6 = urem i32 %2, 256, !insn.addr !548
  ret i32 %6, !insn.addr !548

dec_label_pc_2213:                                ; preds = %dec_label_pc_21f4
  ret i32 -1, !insn.addr !549

; uselistorder directives
  uselistorder i64* (i64*, i32, i32)* @memset, { 1, 0, 2 }
  uselistorder i8* %buf, { 0, 2, 1 }
}

define i32 @memop_bcopy(i32* %src, i8* %dst, i64 %n) local_unnamed_addr {
dec_label_pc_2219:
  %storemerge.reg2mem = alloca i32, !insn.addr !550
  %0 = icmp eq i8* %dst, null, !insn.addr !551
  %1 = icmp eq i64 %n, 0, !insn.addr !552
  %2 = or i1 %0, %1
  %3 = icmp eq i1 %2, false, !insn.addr !553
  %4 = icmp eq i1 %3, false, !insn.addr !554
  %5 = icmp eq i32* %src, null, !insn.addr !555
  %or.cond = or i1 %5, %4
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !554
  br i1 %or.cond, label %dec_label_pc_2244, label %dec_label_pc_2236, !insn.addr !554

dec_label_pc_2236:                                ; preds = %dec_label_pc_2219
  %6 = ptrtoint i8* %dst to i64
  %7 = trunc i64 %6 to i32
  %8 = bitcast i8* %dst to i64*, !insn.addr !556
  %9 = bitcast i32* %src to i64*, !insn.addr !556
  %10 = trunc i64 %n to i32, !insn.addr !556
  %11 = call i64* @memmove(i64* %8, i64* %9, i32 %10), !insn.addr !556
  %phitmp = urem i32 %7, 256
  store i32 %phitmp, i32* %storemerge.reg2mem, !insn.addr !557
  br label %dec_label_pc_2244, !insn.addr !557

dec_label_pc_2244:                                ; preds = %dec_label_pc_2219, %dec_label_pc_2236
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !558

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i8* null, { 1, 2, 3, 0, 4 }
  uselistorder i8* %dst, { 0, 2, 1 }
  uselistorder i32* %src, { 1, 0 }
  uselistorder label %dec_label_pc_2244, { 1, 0 }
}

define i64 @memop_unaligned_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_2253:
  %0 = icmp eq i64 %arg1, 0, !insn.addr !559
  br i1 %0, label %dec_label_pc_2260, label %dec_label_pc_225c, !insn.addr !560

dec_label_pc_225c:                                ; preds = %dec_label_pc_2253
  %1 = add i64 %arg1, 1, !insn.addr !561
  %2 = inttoptr i64 %1 to i32*, !insn.addr !561
  %3 = load i32, i32* %2, align 4, !insn.addr !561
  %4 = zext i32 %3 to i64, !insn.addr !561
  ret i64 %4, !insn.addr !562

dec_label_pc_2260:                                ; preds = %dec_label_pc_2253
  ret i64 4294967295, !insn.addr !563

; uselistorder directives
  uselistorder i64 4294967295, { 0, 1, 3, 2, 4, 5, 6, 7, 8, 9 }
  uselistorder i64 1, { 2, 3, 1, 0, 4, 5, 6, 7 }
}

define i32 @memop_memory_barrier(i32* %flag) local_unnamed_addr {
dec_label_pc_2266:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i32* %flag, null, !insn.addr !564
  br i1 %2, label %dec_label_pc_227c, label %dec_label_pc_226f, !insn.addr !565

dec_label_pc_226f:                                ; preds = %dec_label_pc_2266
  %3 = trunc i64 %1 to i32
  %4 = mul i32 %3, 2, !insn.addr !566
  ret i32 %4, !insn.addr !567

dec_label_pc_227c:                                ; preds = %dec_label_pc_2266
  ret i32 -1, !insn.addr !568

; uselistorder directives
  uselistorder i32 -1, { 19, 0, 20, 22, 1, 2, 3, 21, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 23 }
  uselistorder i32 2, { 0, 1, 2, 7, 3, 6, 4, 5 }
  uselistorder i32* null, { 2, 0, 1, 3, 4, 5, 6, 7 }
}

define void @test_memory_op_functions() local_unnamed_addr {
dec_label_pc_2282:
  %stack_var_-404 = alloca i32, align 4
  %stack_var_-305 = alloca i32, align 4
  %zero_buf_-309 = alloca [10 x i8], align 1
  %stack_var_-301 = alloca i64, align 8
  %stack_var_-388 = alloca i32, align 4
  %stack_var_-400 = alloca i32, align 4
  %stack_var_-291 = alloca i64, align 8
  %stack_var_-280 = alloca i64, align 8
  %stack_var_-344 = alloca i64, align 8
  %stack_var_-376 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !569
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_3688 to i8*)), !insn.addr !570
  store i32 10, i32* %stack_var_-376, align 4, !insn.addr !571
  store i64 0, i64* %stack_var_-344, align 8, !insn.addr !572
  %2 = bitcast i64* %stack_var_-280 to i8*, !insn.addr !573
  %3 = call i32 @memop_memset(i8* nonnull %2, i64 10, i32 65), !insn.addr !573
  %4 = zext i32 %3 to i64, !insn.addr !574
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3228, i64 0, i64 0), i64 %4), !insn.addr !575
  %6 = bitcast i64* %stack_var_-344 to i8*, !insn.addr !576
  %7 = call i32 @memop_memcpy(i8* nonnull %6, i32* nonnull %stack_var_-376, i64 20), !insn.addr !576
  %8 = zext i32 %7 to i64, !insn.addr !577
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3239, i64 0, i64 0), i64 %8), !insn.addr !578
  store i64 8245905578810697032, i64* %stack_var_-291, align 8, !insn.addr !579
  %10 = bitcast i64* %stack_var_-291 to i8*, !insn.addr !580
  %11 = call i32 @memop_memmove(i8* nonnull %10, i64 10), !insn.addr !580
  %12 = trunc i32 %11 to i8, !insn.addr !581
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_324a, i64 0, i64 0), i8 %12), !insn.addr !581
  store i32 1, i32* %stack_var_-400, align 4, !insn.addr !582
  store i32 1, i32* %stack_var_-388, align 4, !insn.addr !583
  %14 = call i32 @memop_memcmp(i32* nonnull %stack_var_-400, i32* nonnull %stack_var_-388, i64 12), !insn.addr !584
  %15 = zext i32 %14 to i64, !insn.addr !585
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_325b, i64 0, i64 0), i64 %15), !insn.addr !586
  %17 = bitcast i64* %stack_var_-301 to i8*, !insn.addr !587
  %18 = call i32 @memop_bzero(i8* nonnull %17, i64 10), !insn.addr !587
  %19 = zext i32 %18 to i64, !insn.addr !588
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_326c, i64 0, i64 0), i64 %19), !insn.addr !589
  store [10 x i8] [i8 1, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef], [10 x i8]* %zero_buf_-309, align 1, !insn.addr !590
  store i32 0, i32* %stack_var_-305, align 4, !insn.addr !591
  %21 = bitcast [10 x i8]* %zero_buf_-309 to i32*, !insn.addr !592
  %22 = bitcast i32* %stack_var_-305 to i8*, !insn.addr !592
  %23 = call i32 @memop_bcopy(i32* nonnull %21, i8* nonnull %22, i64 4), !insn.addr !592
  %24 = zext i32 %23 to i64, !insn.addr !593
  %25 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_327d, i64 0, i64 0), i64 %24), !insn.addr !594
  %26 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_328e, i64 0, i64 0), i32 67305985), !insn.addr !595
  store i32 5, i32* %stack_var_-404, align 4, !insn.addr !596
  %27 = call i32 @memop_memory_barrier(i32* nonnull %stack_var_-404), !insn.addr !597
  %28 = zext i32 %27 to i64, !insn.addr !598
  %29 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_32a1, i64 0, i64 0), i64 %28), !insn.addr !599
  %30 = call i64 @__readfsqword(i64 40), !insn.addr !600
  %31 = icmp eq i64 %0, %30, !insn.addr !600
  %32 = icmp eq i1 %31, false, !insn.addr !601
  br i1 %32, label %dec_label_pc_24aa, label %dec_label_pc_24a2, !insn.addr !601

dec_label_pc_24a2:                                ; preds = %dec_label_pc_2282
  ret void, !insn.addr !602

dec_label_pc_24aa:                                ; preds = %dec_label_pc_2282
  call void @__stack_chk_fail(), !insn.addr !603
  ret void, !insn.addr !603

; uselistorder directives
  uselistorder void ()* @__stack_chk_fail, { 5, 3, 4, 0, 1, 2, 6 }
  uselistorder i1 false, { 5, 6, 0, 7, 1, 8, 2, 3, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 4 }
  uselistorder i32 5, { 5, 0, 1, 2, 3, 4, 6 }
  uselistorder i64 4, { 11, 12, 0, 1, 2, 13, 14, 15, 3, 4, 5, 6, 16, 7, 8, 9, 10, 17 }
  uselistorder i64 20, { 1, 2, 5, 3, 4, 0 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 0, 6, 5, 4, 3, 2, 1, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 49 }
  uselistorder i64 10, { 2, 3, 4, 1, 0 }
  uselistorder i32 10, { 6, 0, 1, 2, 3, 7, 4, 5 }
  uselistorder i32 (i8*)* @puts, { 0, 1, 3, 2, 4 }
  uselistorder i64 0, { 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 133, 135, 139, 140, 141, 15, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 126, 66, 67, 127, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 136, 12, 13, 34, 86, 87, 88, 89, 90, 91, 92, 93, 142, 94, 95, 134, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 0, 106, 107, 1, 143, 35, 144, 145, 146, 147, 148, 151, 152, 149, 150, 2, 3, 4, 153, 5, 6, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 7, 8, 9, 10, 137, 14, 11, 138, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 128, 32, 33, 129, 130, 131, 132 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_24af:
  call void @test_stack_memory(), !insn.addr !604
  call void @test_heap_memory(), !insn.addr !605
  call void @test_static_global(), !insn.addr !606
  call void @test_memory_op_functions(), !insn.addr !607
  ret i32 0, !insn.addr !608

; uselistorder directives
  uselistorder i32 0, { 5, 19, 12, 6, 20, 13, 21, 14, 22, 7, 0, 1, 2, 8, 4, 3, 9, 10, 11, 15, 16, 17, 18 }
}

define i32 @extern_function(i32 %x) local_unnamed_addr {
dec_label_pc_24e9:
  %0 = mul i32 %x, 3, !insn.addr !609
  ret i32 %0, !insn.addr !610

; uselistorder directives
  uselistorder i32 3, { 3, 0, 1, 4, 5, 2 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_24f4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !611

; uselistorder directives
  uselistorder i32 1, { 7, 54, 55, 56, 57, 58, 115, 117, 59, 60, 61, 122, 121, 120, 119, 118, 116, 114, 113, 112, 111, 6, 10, 63, 62, 11, 12, 13, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 130, 79, 80, 81, 5, 4, 3, 131, 83, 82, 84, 53, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 123, 110, 16, 15, 14, 17, 2, 95, 18, 132, 96, 20, 19, 22, 21, 31, 30, 29, 28, 27, 26, 25, 24, 23, 32, 33, 133, 97, 36, 35, 34, 134, 37, 98, 41, 40, 39, 38, 135, 99, 43, 42, 100, 101, 102, 103, 104, 105, 106, 107, 108, 136, 109, 124, 46, 45, 44, 137, 125, 48, 47, 126, 49, 9, 1, 128, 127, 51, 50, 8, 0, 129, 52 }
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
!22 = !{i64 4671}
!23 = !{i64 4677}
!24 = !{i64 4728}
!25 = !{i64 4792}
!26 = !{i64 4804}
!27 = !{i64 4811}
!28 = !{i64 4814}
!29 = !{i64 4825}
!30 = !{i64 4827}
!31 = !{i64 4834}
!32 = !{i64 4839}
!33 = !{i64 4844}
!34 = !{i64 4852}
!35 = !{i64 4856}
!36 = !{i64 4868}
!37 = !{i64 4877}
!38 = !{i64 4880}
!39 = !{i64 4885}
!40 = !{i64 4889}
!41 = !{i64 4890}
!42 = !{i64 4898}
!43 = !{i64 4907}
!44 = !{i64 4914}
!45 = !{i64 4917}
!46 = !{i64 4922}
!47 = !{i64 4927}
!48 = !{i64 4929}
!49 = !{i64 4931}
!50 = !{i64 4935}
!51 = !{i64 4938}
!52 = !{i64 4944}
!53 = !{i64 4949}
!54 = !{i64 4958}
!55 = !{i64 4964}
!56 = !{i64 4965}
!57 = !{i64 4974}
!58 = !{i64 4977}
!59 = !{i64 4982}
!60 = !{i64 4993}
!61 = !{i64 5000}
!62 = !{i64 5002}
!63 = !{i64 5003}
!64 = !{i64 5007}
!65 = !{i64 5014}
!66 = !{i64 5031}
!67 = !{i64 5033}
!68 = !{i64 5036}
!69 = !{i64 5040}
!70 = !{i64 5046}
!71 = !{i64 5064}
!72 = !{i64 5073}
!73 = !{i64 5048}
!74 = !{i64 5082}
!75 = !{i64 5083}
!76 = !{i64 5088}
!77 = !{i64 5100}
!78 = !{i64 5115}
!79 = !{i64 5124}
!80 = !{i64 5096}
!81 = !{i64 5133}
!82 = !{i64 5148}
!83 = !{i64 5157}
!84 = !{i64 5186}
!85 = !{i64 5191}
!86 = !{i64 5210}
!87 = !{i64 5215}
!88 = !{i64 5218}
!89 = !{i64 5224}
!90 = !{i64 5228}
!91 = !{i64 5231}
!92 = !{i64 5235}
!93 = !{i64 5238}
!94 = !{i64 5240}
!95 = !{i64 5242}
!96 = !{i64 5244}
!97 = !{i64 5251}
!98 = !{i64 5260}
!99 = !{i64 5263}
!100 = !{i64 5271}
!101 = !{i64 5276}
!102 = !{i64 5288}
!103 = !{i64 5305}
!104 = !{i64 5284}
!105 = !{i64 5316}
!106 = !{i64 5331}
!107 = !{i64 5369}
!108 = !{i64 5340}
!109 = !{i64 5374}
!110 = !{i64 5388}
!111 = !{i64 5393}
!112 = !{i64 5400}
!113 = !{i64 5403}
!114 = !{i64 5408}
!115 = !{i64 5410}
!116 = !{i64 5413}
!117 = !{i64 5417}
!118 = !{i64 5419}
!119 = !{i64 5423}
!120 = !{i64 5426}
!121 = !{i64 5428}
!122 = !{i64 5430}
!123 = !{i64 5432}
!124 = !{i64 5439}
!125 = !{i64 5448}
!126 = !{i64 5451}
!127 = !{i64 5459}
!128 = !{i64 5473}
!129 = !{i64 5489}
!130 = !{i64 5516}
!131 = !{i64 5526}
!132 = !{i64 5531}
!133 = !{i64 5550}
!134 = !{i64 5577}
!135 = !{i64 5604}
!136 = !{i64 5631}
!137 = !{i64 5641}
!138 = !{i64 5646}
!139 = !{i64 5665}
!140 = !{i64 5675}
!141 = !{i64 5680}
!142 = !{i64 5699}
!143 = !{i64 5709}
!144 = !{i64 5714}
!145 = !{i64 5733}
!146 = !{i64 5760}
!147 = !{i64 5769}
!148 = !{i64 5770}
!149 = !{i64 5780}
!150 = !{i64 5784}
!151 = !{i64 5789}
!152 = !{i64 5792}
!153 = !{i64 5775}
!154 = !{i64 5799}
!155 = !{i64 5808}
!156 = !{i64 5811}
!157 = !{i64 5814}
!158 = !{i64 5818}
!159 = !{i64 5821}
!160 = !{i64 5825}
!161 = !{i64 5828}
!162 = !{i64 5830}
!163 = !{i64 5832}
!164 = !{i64 5834}
!165 = !{i64 5837}
!166 = !{i64 5845}
!167 = !{i64 5853}
!168 = !{i64 5868}
!169 = !{i64 5873}
!170 = !{i64 5876}
!171 = !{i64 5883}
!172 = !{i64 5858}
!173 = !{i64 5888}
!174 = !{i64 5890}
!175 = !{i64 5894}
!176 = !{i64 5899}
!177 = !{i64 5901}
!178 = !{i64 5905}
!179 = !{i64 5908}
!180 = !{i64 5910}
!181 = !{i64 5918}
!182 = !{i64 5933}
!183 = !{i64 5943}
!184 = !{i64 5948}
!185 = !{i64 5951}
!186 = !{i64 5960}
!187 = !{i64 5966}
!188 = !{i64 5973}
!189 = !{i64 5980}
!190 = !{i64 5987}
!191 = !{i64 6002}
!192 = !{i64 6010}
!193 = !{i64 6013}
!194 = !{i64 6015}
!195 = !{i64 6022}
!196 = !{i64 6029}
!197 = !{i64 6036}
!198 = !{i64 6043}
!199 = !{i64 6055}
!200 = !{i64 6061}
!201 = !{i64 6069}
!202 = !{i64 6073}
!203 = !{i64 6083}
!204 = !{i64 6099}
!205 = !{i64 6109}
!206 = !{i64 6113}
!207 = !{i64 6118}
!208 = !{i64 6121}
!209 = !{i64 6128}
!210 = !{i64 6136}
!211 = !{i64 6141}
!212 = !{i64 6143}
!213 = !{i64 6146}
!214 = !{i64 6150}
!215 = !{i64 6152}
!216 = !{i64 6156}
!217 = !{i64 6159}
!218 = !{i64 6161}
!219 = !{i64 6163}
!220 = !{i64 6166}
!221 = !{i64 6169}
!222 = !{i64 6177}
!223 = !{i64 6185}
!224 = !{i64 6197}
!225 = !{i64 6202}
!226 = !{i64 6205}
!227 = !{i64 6213}
!228 = !{i64 6221}
!229 = !{i64 6229}
!230 = !{i64 6247}
!231 = !{i64 6252}
!232 = !{i64 6256}
!233 = !{i64 6259}
!234 = !{i64 6264}
!235 = !{i64 6275}
!236 = !{i64 6280}
!237 = !{i64 6284}
!238 = !{i64 6287}
!239 = !{i64 6289}
!240 = !{i64 6295}
!241 = !{i64 6303}
!242 = !{i64 6314}
!243 = !{i64 6318}
!244 = !{i64 6328}
!245 = !{i64 6337}
!246 = !{i64 6360}
!247 = !{i64 6362}
!248 = !{i64 6365}
!249 = !{i64 6370}
!250 = !{i64 6374}
!251 = !{i64 6379}
!252 = !{i64 6382}
!253 = !{i64 6394}
!254 = !{i64 6397}
!255 = !{i64 6400}
!256 = !{i64 6410}
!257 = !{i64 6415}
!258 = !{i64 6418}
!259 = !{i64 6420}
!260 = !{i64 6422}
!261 = !{i64 6430}
!262 = !{i64 6433}
!263 = !{i64 6435}
!264 = !{i64 6440}
!265 = !{i64 6442}
!266 = !{i64 6445}
!267 = !{i64 6455}
!268 = !{i64 6457}
!269 = !{i64 6461}
!270 = !{i64 6464}
!271 = !{i64 6469}
!272 = !{i64 6473}
!273 = !{i64 6478}
!274 = !{i64 6481}
!275 = !{i64 6489}
!276 = !{i64 6516}
!277 = !{i64 6521}
!278 = !{i64 6524}
!279 = !{i64 6526}
!280 = !{i64 6528}
!281 = !{i64 6536}
!282 = !{i64 6545}
!283 = !{i64 6546}
!284 = !{i64 6561}
!285 = !{i64 6566}
!286 = !{i64 6569}
!287 = !{i64 6579}
!288 = !{i64 6584}
!289 = !{i64 6593}
!290 = !{i64 6598}
!291 = !{i64 6602}
!292 = !{i64 6606}
!293 = !{i64 6611}
!294 = !{i64 6609}
!295 = !{i64 6616}
!296 = !{i64 6618}
!297 = !{i64 6620}
!298 = !{i64 6622}
!299 = !{i64 6627}
!300 = !{i64 6631}
!301 = !{i64 6639}
!302 = !{i64 6652}
!303 = !{i64 6656}
!304 = !{i64 6658}
!305 = !{i64 6663}
!306 = !{i64 6667}
!307 = !{i64 6670}
!308 = !{i64 6672}
!309 = !{i64 6680}
!310 = !{i64 6690}
!311 = !{i64 6699}
!312 = !{i64 6709}
!313 = !{i64 6713}
!314 = !{i64 6718}
!315 = !{i64 6721}
!316 = !{i64 6704}
!317 = !{i64 6725}
!318 = !{i64 6734}
!319 = !{i64 6737}
!320 = !{i64 6741}
!321 = !{i64 6744}
!322 = !{i64 6748}
!323 = !{i64 6751}
!324 = !{i64 6753}
!325 = !{i64 6755}
!326 = !{i64 6758}
!327 = !{i64 6762}
!328 = !{i64 6770}
!329 = !{i64 6780}
!330 = !{i64 6785}
!331 = !{i64 6788}
!332 = !{i64 6815}
!333 = !{i64 6823}
!334 = !{i64 6828}
!335 = !{i64 6831}
!336 = !{i64 6839}
!337 = !{i64 6843}
!338 = !{i64 6846}
!339 = !{i64 6850}
!340 = !{i64 6857}
!341 = !{i64 6865}
!342 = !{i64 6868}
!343 = !{i64 6873}
!344 = !{i64 6881}
!345 = !{i64 6886}
!346 = !{i64 6892}
!347 = !{i64 6900}
!348 = !{i64 6910}
!349 = !{i64 6915}
!350 = !{i64 6918}
!351 = !{i64 6926}
!352 = !{i64 6931}
!353 = !{i64 6933}
!354 = !{i64 6936}
!355 = !{i64 6940}
!356 = !{i64 6946}
!357 = !{i64 6948}
!358 = !{i64 6950}
!359 = !{i64 6958}
!360 = !{i64 6974}
!361 = !{i64 6997}
!362 = !{i64 7007}
!363 = !{i64 7012}
!364 = !{i64 7031}
!365 = !{i64 7041}
!366 = !{i64 7046}
!367 = !{i64 7065}
!368 = !{i64 7075}
!369 = !{i64 7080}
!370 = !{i64 7099}
!371 = !{i64 7109}
!372 = !{i64 7114}
!373 = !{i64 7133}
!374 = !{i64 7143}
!375 = !{i64 7148}
!376 = !{i64 7167}
!377 = !{i64 7172}
!378 = !{i64 7186}
!379 = !{i64 7191}
!380 = !{i64 7210}
!381 = !{i64 7215}
!382 = !{i64 7220}
!383 = !{i64 7223}
!384 = !{i64 7225}
!385 = !{i64 7229}
!386 = !{i64 7234}
!387 = !{i64 7239}
!388 = !{i64 7249}
!389 = !{i64 7254}
!390 = !{i64 7273}
!391 = !{i64 7283}
!392 = !{i64 7288}
!393 = !{i64 7307}
!394 = !{i64 7317}
!395 = !{i64 7322}
!396 = !{i64 7341}
!397 = !{i64 7363}
!398 = !{i64 7368}
!399 = !{i64 7373}
!400 = !{i64 7375}
!401 = !{i64 7377}
!402 = !{i64 7395}
!403 = !{i64 7400}
!404 = !{i64 7406}
!405 = !{i64 7409}
!406 = !{i64 7411}
!407 = !{i64 7414}
!408 = !{i64 7420}
!409 = !{i64 7441}
!410 = !{i64 7446}
!411 = !{i64 7448}
!412 = !{i64 7472}
!413 = !{i64 7482}
!414 = !{i64 7507}
!415 = !{i64 7512}
!416 = !{i64 7521}
!417 = !{i64 7531}
!418 = !{i64 7540}
!419 = !{i64 7546}
!420 = !{i64 7547}
!421 = !{i64 7556}
!422 = !{i64 7562}
!423 = !{i64 7565}
!424 = !{i64 7571}
!425 = !{i64 7576}
!426 = !{i64 7582}
!427 = !{i64 7584}
!428 = !{i64 7589}
!429 = !{i64 7592}
!430 = !{i64 7604}
!431 = !{i64 7607}
!432 = !{i64 7613}
!433 = !{i64 7623}
!434 = !{i64 7625}
!435 = !{i64 7636}
!436 = !{i64 7642}
!437 = !{i64 7647}
!438 = !{i64 7651}
!439 = !{i64 7656}
!440 = !{i64 7662}
!441 = !{i64 7665}
!442 = !{i64 7679}
!443 = !{i64 7688}
!444 = !{i64 7707}
!445 = !{i64 7717}
!446 = !{i64 7727}
!447 = !{i64 7737}
!448 = !{i64 7742}
!449 = !{i64 7748}
!450 = !{i64 7753}
!451 = !{i64 7759}
!452 = !{i64 7764}
!453 = !{i64 7771}
!454 = !{i64 7776}
!455 = !{i64 7783}
!456 = !{i64 7786}
!457 = !{i64 7798}
!458 = !{i64 7804}
!459 = !{i64 7809}
!460 = !{i64 7812}
!461 = !{i64 7814}
!462 = !{i64 7816}
!463 = !{i64 7822}
!464 = !{i64 7832}
!465 = !{i64 7837}
!466 = !{i64 7840}
!467 = !{i64 7845}
!468 = !{i64 7860}
!469 = !{i64 7873}
!470 = !{i64 7883}
!471 = !{i64 7888}
!472 = !{i64 7907}
!473 = !{i64 7912}
!474 = !{i64 7918}
!475 = !{i64 7938}
!476 = !{i64 7965}
!477 = !{i64 7970}
!478 = !{i64 8005}
!479 = !{i64 8019}
!480 = !{i64 8038}
!481 = !{i64 8065}
!482 = !{i64 8070}
!483 = !{i64 8076}
!484 = !{i64 8096}
!485 = !{i64 8106}
!486 = !{i64 8111}
!487 = !{i64 8130}
!488 = !{i64 8140}
!489 = !{i64 8145}
!490 = !{i64 8164}
!491 = !{i64 8191}
!492 = !{i64 8218}
!493 = !{i64 8228}
!494 = !{i64 8233}
!495 = !{i64 8252}
!496 = !{i64 8257}
!497 = !{i64 8289}
!498 = !{i64 8301}
!499 = !{i64 8313}
!500 = !{i64 8318}
!501 = !{i64 8337}
!502 = !{i64 8364}
!503 = !{i64 8374}
!504 = !{i64 8379}
!505 = !{i64 8398}
!506 = !{i64 8425}
!507 = !{i64 8435}
!508 = !{i64 8440}
!509 = !{i64 8459}
!510 = !{i64 8465}
!511 = !{i64 8466}
!512 = !{i64 8470}
!513 = !{i64 8484}
!514 = !{i64 8473}
!515 = !{i64 8492}
!516 = !{i64 8497}
!517 = !{i64 8501}
!518 = !{i64 8515}
!519 = !{i64 8528}
!520 = !{i64 8534}
!521 = !{i64 8540}
!522 = !{i64 8542}
!523 = !{i64 8547}
!524 = !{i64 8555}
!525 = !{i64 8560}
!526 = !{i64 8564}
!527 = !{i64 8574}
!528 = !{i64 8582}
!529 = !{i64 8586}
!530 = !{i64 8589}
!531 = !{i64 8605}
!532 = !{i64 8612}
!533 = !{i64 8617}
!534 = !{i64 8622}
!535 = !{i64 8640}
!536 = !{i64 8646}
!537 = !{i64 8652}
!538 = !{i64 8654}
!539 = !{i64 8656}
!540 = !{i64 8665}
!541 = !{i64 8670}
!542 = !{i64 8678}
!543 = !{i64 8685}
!544 = !{i64 8691}
!545 = !{i64 8696}
!546 = !{i64 8699}
!547 = !{i64 8713}
!548 = !{i64 8722}
!549 = !{i64 8728}
!550 = !{i64 8729}
!551 = !{i64 8733}
!552 = !{i64 8739}
!553 = !{i64 8745}
!554 = !{i64 8747}
!555 = !{i64 8753}
!556 = !{i64 8764}
!557 = !{i64 8769}
!558 = !{i64 8773}
!559 = !{i64 8791}
!560 = !{i64 8794}
!561 = !{i64 8796}
!562 = !{i64 8799}
!563 = !{i64 8805}
!564 = !{i64 8810}
!565 = !{i64 8813}
!566 = !{i64 8825}
!567 = !{i64 8827}
!568 = !{i64 8833}
!569 = !{i64 8845}
!570 = !{i64 8871}
!571 = !{i64 8876}
!572 = !{i64 8916}
!573 = !{i64 8960}
!574 = !{i64 8965}
!575 = !{i64 8984}
!576 = !{i64 9004}
!577 = !{i64 9009}
!578 = !{i64 9028}
!579 = !{i64 9043}
!580 = !{i64 9070}
!581 = !{i64 9094}
!582 = !{i64 9099}
!583 = !{i64 9123}
!584 = !{i64 9162}
!585 = !{i64 9167}
!586 = !{i64 9186}
!587 = !{i64 9201}
!588 = !{i64 9206}
!589 = !{i64 9225}
!590 = !{i64 9230}
!591 = !{i64 9238}
!592 = !{i64 9261}
!593 = !{i64 9266}
!594 = !{i64 9285}
!595 = !{i64 9312}
!596 = !{i64 9317}
!597 = !{i64 9330}
!598 = !{i64 9335}
!599 = !{i64 9354}
!600 = !{i64 9367}
!601 = !{i64 9376}
!602 = !{i64 9385}
!603 = !{i64 9386}
!604 = !{i64 9404}
!605 = !{i64 9414}
!606 = !{i64 9424}
!607 = !{i64 9434}
!608 = !{i64 9448}
!609 = !{i64 9453}
!610 = !{i64 9456}
!611 = !{i64 9472}
