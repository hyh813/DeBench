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
@global_var_6034 = local_unnamed_addr global i64 0
@global_var_32b2 = constant [11 x i8] c"HelloWorld\00"
@global_var_6018 = local_unnamed_addr global [11 x i8]* @global_var_32b2
@global_var_601c = local_unnamed_addr global i64 98784247808
@global_var_6046 = external global i64
@global_var_6038 = local_unnamed_addr global i64 0
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
@0 = external global i32
@global_var_3e7 = global i32 0
@1 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\88\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_3004 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @1, i64 0, i64 0)
@global_var_44c = global i32 0
@2 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\A0\86\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_30e6 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @2, i64 0, i64 0)
@3 = internal constant [65 x i8] c"\E2\9C\97 \E5\AD\90\E8\BF\9B\E7\A8\8B\E8\A2\AB\E4\BF\A1\E5\8F\B7\E7\BB\88\E6\AD\A2 (\E4\BF\A1\E5\8F\B7%d) - \E9\87\8E\E6\8C\87\E9\92\88\E5\AF\BC\E8\87\B4\E5\B4\A9\E6\BA\83\0A\00"
@global_var_33f0 = constant i8* getelementptr inbounds ([65 x i8], [65 x i8]* @3, i64 0, i64 0)
@4 = internal constant [16 x i8] c"%d (\E5\AD\90\E8\BF\9B\E7\A8\8B)\0A\00"
@global_var_31b6 = constant i8* getelementptr inbounds ([16 x i8], [16 x i8]* @4, i64 0, i64 0)
@5 = internal constant [37 x i8] c"\E2\9C\93 \E5\AD\90\E8\BF\9B\E7\A8\8B\E6\AD\A3\E5\B8\B8\E9\80\80\E5\87\BA\EF\BC\8Ccode=%d\0A\00"
@global_var_33c8 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @5, i64 0, i64 0)
@6 = internal constant [11 x i8] c"fork\E5\A4\B1\E8\B4\A5\00"
@global_var_31c6 = constant i8* getelementptr inbounds ([11 x i8], [11 x i8]* @6, i64 0, i64 0)
@global_var_6040 = local_unnamed_addr global i32 0
@global_var_6041 = global i32 0
@global_var_36e0 = constant i32* inttoptr (i64 4294967296 to i32*)
@global_var_6035 = global i32 0
@global_var_6020 = local_unnamed_addr global i32 23
@global_var_6010 = local_unnamed_addr global i32 100
@7 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\9D\99\E6\80\81\E4\B8\8E\E5\85\A8\E5\B1\80\E5\86\85\E5\AD\98 ===\00"
@global_var_3438 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @7, i64 0, i64 0)
@8 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C\E5\87\BD\E6\95\B0 ===\00"
@global_var_3688 = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @8, i64 0, i64 0)

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

define i64 @double_value(i64 %arg1) local_unnamed_addr {
dec_label_pc_1309:
  %0 = mul i64 %arg1, 2, !insn.addr !37
  %1 = and i64 %0, 4294967294, !insn.addr !37
  ret i64 %1, !insn.addr !38
}

define i64 @local_vars(i64 %arg1) local_unnamed_addr {
dec_label_pc_1311:
  %factor = mul i64 %arg1, 2
  %0 = add i64 %factor, 10, !insn.addr !39
  %1 = and i64 %0, 4294967294, !insn.addr !39
  ret i64 %1, !insn.addr !40
}

define i64 @local_array(i64 %arg1) local_unnamed_addr {
dec_label_pc_131a:
  %0 = alloca i32
  %rdx.0.reg2mem = alloca i64, !insn.addr !41
  %rax.0.reg2mem = alloca i64, !insn.addr !41
  %1 = load i32, i32* %0
  %stack_var_-16 = alloca i64, align 8
  %stack_var_-56 = alloca i64, align 8
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !42
  store i64 %2, i64* %stack_var_-16, align 8, !insn.addr !43
  %3 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !44
  %4 = ptrtoint i64* %stack_var_-16 to i64, !insn.addr !45
  store i64 %3, i64* %rax.0.reg2mem, !insn.addr !46
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !46
  br label %dec_label_pc_133f, !insn.addr !46

dec_label_pc_133f:                                ; preds = %dec_label_pc_133f, %dec_label_pc_131a
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %5 = trunc i64 %rdx.0.reload to i32, !insn.addr !47
  %6 = inttoptr i64 %rax.0.reload to i32*, !insn.addr !47
  store i32 %5, i32* %6, align 4, !insn.addr !47
  %7 = add i64 %rdx.0.reload, %arg1, !insn.addr !48
  %8 = and i64 %7, 4294967295, !insn.addr !48
  %9 = add i64 %rax.0.reload, 4, !insn.addr !49
  %10 = icmp eq i64 %9, %4, !insn.addr !50
  %11 = icmp eq i1 %10, false, !insn.addr !51
  store i64 %9, i64* %rax.0.reg2mem, !insn.addr !51
  store i64 %8, i64* %rdx.0.reg2mem, !insn.addr !51
  br i1 %11, label %dec_label_pc_133f, label %dec_label_pc_134c, !insn.addr !51

dec_label_pc_134c:                                ; preds = %dec_label_pc_133f
  %12 = load i64, i64* %stack_var_-16, align 8, !insn.addr !52
  %13 = call i64 @__readfsqword(i64 40), !insn.addr !53
  %14 = icmp eq i64 %12, %13, !insn.addr !53
  %15 = icmp eq i1 %14, false, !insn.addr !54
  br i1 %15, label %dec_label_pc_1365, label %dec_label_pc_1360, !insn.addr !54

dec_label_pc_1360:                                ; preds = %dec_label_pc_134c
  %16 = zext i32 %1 to i64, !insn.addr !55
  ret i64 %16, !insn.addr !56

dec_label_pc_1365:                                ; preds = %dec_label_pc_134c
  call void @__stack_chk_fail(), !insn.addr !57
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !57

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
}

define i64 @local_struct(i64 %arg1) local_unnamed_addr {
dec_label_pc_136a:
  %0 = mul i64 %arg1, 3, !insn.addr !58
  %1 = and i64 %0, 4294967295, !insn.addr !58
  ret i64 %1, !insn.addr !59
}

define i64 @address_of_local(i64 %arg1) local_unnamed_addr {
dec_label_pc_1372:
  %0 = inttoptr i64 %arg1 to i32*, !insn.addr !60
  store i32 42, i32* %0, align 4, !insn.addr !60
  ret i64 42, !insn.addr !61
}

define i64 @address_of_array() local_unnamed_addr {
dec_label_pc_1382:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !62
  %3 = and i64 %2, 4294967294, !insn.addr !62
  ret i64 %3, !insn.addr !63
}

define i64 @large_stack_frame() local_unnamed_addr {
dec_label_pc_138b:
  %0 = alloca i8
  %rax.0.reg2mem = alloca i64, !insn.addr !64
  %1 = load i8, i8* %0
  %stack_var_-2072 = alloca i64, align 8
  %2 = ptrtoint i64* %stack_var_-2072 to i64, !insn.addr !65
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !66
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !67
  br label %dec_label_pc_13a9, !insn.addr !67

dec_label_pc_13a9:                                ; preds = %dec_label_pc_13a9, %dec_label_pc_138b
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %4 = trunc i64 %rax.0.reload to i8, !insn.addr !68
  %5 = add i64 %rax.0.reload, %2, !insn.addr !68
  %6 = inttoptr i64 %5 to i8*, !insn.addr !68
  store i8 %4, i8* %6, align 1, !insn.addr !68
  %7 = add i64 %rax.0.reload, 1, !insn.addr !69
  %8 = icmp eq i64 %7, ptrtoint (i64* @global_var_800 to i64), !insn.addr !70
  %9 = icmp eq i1 %8, false, !insn.addr !71
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !71
  br i1 %9, label %dec_label_pc_13a9, label %dec_label_pc_13b8, !insn.addr !71

dec_label_pc_13b8:                                ; preds = %dec_label_pc_13a9
  %10 = call i64 @__readfsqword(i64 40), !insn.addr !72
  %11 = icmp eq i64 %3, %10, !insn.addr !72
  %12 = icmp eq i1 %11, false, !insn.addr !73
  br i1 %12, label %dec_label_pc_13db, label %dec_label_pc_13d3, !insn.addr !73

dec_label_pc_13d3:                                ; preds = %dec_label_pc_13b8
  %13 = sext i8 %1 to i64, !insn.addr !74
  ret i64 %13, !insn.addr !75

dec_label_pc_13db:                                ; preds = %dec_label_pc_13b8
  call void @__stack_chk_fail(), !insn.addr !76
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !76

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 2, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
}

define i64 @vla_stack(i64 %arg1) local_unnamed_addr {
dec_label_pc_13e0:
  %storemerge.reg2mem = alloca i64, !insn.addr !77
  %rax.0.reg2mem = alloca i64, !insn.addr !77
  %stack_var_-24 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !78
  %1 = add i64 %arg1, 4294967295, !insn.addr !79
  %2 = trunc i64 %1 to i32, !insn.addr !80
  %3 = icmp ugt i32 %2, ptrtoint (i32* @global_var_3e7 to i32)
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !81
  br i1 %3, label %dec_label_pc_147f, label %dec_label_pc_140a, !insn.addr !81

dec_label_pc_140a:                                ; preds = %dec_label_pc_13e0
  %4 = and i64 %1, 4294967295, !insn.addr !79
  %5 = ptrtoint i64* %stack_var_-24 to i64, !insn.addr !82
  %sext = mul i64 %arg1, 4294967296
  %6 = ashr exact i64 %sext, 30, !insn.addr !83
  %7 = add nsw i64 %6, 15, !insn.addr !83
  %8 = and i64 %7, -4096, !insn.addr !84
  %9 = sub i64 %5, %8, !insn.addr !85
  %10 = and i64 %7, 4080, !insn.addr !86
  %11 = sub i64 %9, %10, !insn.addr !87
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !88
  br label %dec_label_pc_145f, !insn.addr !88

dec_label_pc_145f:                                ; preds = %dec_label_pc_145f, %dec_label_pc_140a
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %.tr = trunc i64 %rax.0.reload to i32
  %12 = mul i32 %.tr, 2, !insn.addr !89
  %13 = mul i64 %rax.0.reload, 4, !insn.addr !90
  %14 = add i64 %13, %11, !insn.addr !90
  %15 = inttoptr i64 %14 to i32*, !insn.addr !90
  store i32 %12, i32* %15, align 4, !insn.addr !90
  %16 = add i64 %rax.0.reload, 1, !insn.addr !91
  %17 = icmp eq i64 %rax.0.reload, %4, !insn.addr !92
  %18 = icmp eq i1 %17, false, !insn.addr !93
  store i64 %16, i64* %rax.0.reg2mem, !insn.addr !93
  br i1 %18, label %dec_label_pc_145f, label %dec_label_pc_1471, !insn.addr !93

dec_label_pc_1471:                                ; preds = %dec_label_pc_145f
  %19 = trunc i64 %arg1 to i32, !insn.addr !94
  %20 = icmp slt i32 %19, 0
  %21 = zext i1 %20 to i32, !insn.addr !95
  %22 = add i32 %21, %19, !insn.addr !96
  %23 = ashr i32 %22, 1, !insn.addr !97
  %24 = sext i32 %23 to i64, !insn.addr !98
  %25 = mul i64 %24, 4, !insn.addr !99
  %26 = add i64 %11, %25, !insn.addr !99
  %27 = inttoptr i64 %26 to i32*, !insn.addr !99
  %28 = load i32, i32* %27, align 4, !insn.addr !99
  %29 = zext i32 %28 to i64, !insn.addr !99
  store i64 %29, i64* %storemerge.reg2mem, !insn.addr !99
  br label %dec_label_pc_147f, !insn.addr !99

dec_label_pc_147f:                                ; preds = %dec_label_pc_13e0, %dec_label_pc_1471
  %30 = call i64 @__readfsqword(i64 40), !insn.addr !100
  %31 = icmp eq i64 %0, %30, !insn.addr !100
  %32 = icmp eq i1 %31, false, !insn.addr !101
  br i1 %32, label %dec_label_pc_1497, label %dec_label_pc_148e, !insn.addr !101

dec_label_pc_148e:                                ; preds = %dec_label_pc_147f
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !102

dec_label_pc_1497:                                ; preds = %dec_label_pc_147f
  call void @__stack_chk_fail(), !insn.addr !103
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !103

; uselistorder directives
  uselistorder i32 %19, { 1, 0 }
  uselistorder i64 %rax.0.reload, { 1, 2, 3, 0 }
  uselistorder i64 %11, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 1, 0, 2 }
  uselistorder label %dec_label_pc_147f, { 1, 0 }
}

define i64 @alloca_usage(i64 %arg1) local_unnamed_addr {
dec_label_pc_149c:
  %storemerge.reg2mem = alloca i64, !insn.addr !104
  %rdx.0.reg2mem = alloca i64, !insn.addr !104
  %rax.0.reg2mem = alloca i64, !insn.addr !104
  %stack_var_-24 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !105
  %1 = trunc i64 %arg1 to i32, !insn.addr !106
  %2 = icmp slt i32 %1, 1
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !107
  br i1 %2, label %dec_label_pc_153b, label %dec_label_pc_14bf, !insn.addr !107

dec_label_pc_14bf:                                ; preds = %dec_label_pc_149c
  %3 = ptrtoint i64* %stack_var_-24 to i64, !insn.addr !108
  %sext = mul i64 %arg1, 4294967296
  %4 = ashr exact i64 %sext, 30, !insn.addr !109
  %5 = add nsw i64 %4, 23, !insn.addr !109
  %6 = and i64 %5, -4096, !insn.addr !110
  %7 = and i64 %5, 4080, !insn.addr !111
  %8 = sub nsw i64 15, %7, !insn.addr !112
  %9 = sub nsw i64 %8, %6, !insn.addr !113
  %10 = add i64 %9, %3, !insn.addr !114
  %11 = and i64 %10, -16, !insn.addr !115
  %12 = mul i32 %1, 3, !insn.addr !116
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !117
  store i64 %11, i64* %rdx.0.reg2mem, !insn.addr !117
  br label %dec_label_pc_1520, !insn.addr !117

dec_label_pc_1520:                                ; preds = %dec_label_pc_1520, %dec_label_pc_14bf
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %13 = trunc i64 %rax.0.reload to i32, !insn.addr !118
  %14 = inttoptr i64 %rdx.0.reload to i32*, !insn.addr !118
  store i32 %13, i32* %14, align 4, !insn.addr !118
  %15 = add nuw nsw i64 %rax.0.reload, 3, !insn.addr !119
  %16 = and i64 %15, 4294967295, !insn.addr !119
  %17 = add i64 %rdx.0.reload, 4, !insn.addr !120
  %18 = trunc i64 %15 to i32, !insn.addr !116
  %19 = icmp eq i32 %12, %18, !insn.addr !116
  %20 = icmp eq i1 %19, false, !insn.addr !121
  store i64 %16, i64* %rax.0.reg2mem, !insn.addr !121
  store i64 %17, i64* %rdx.0.reg2mem, !insn.addr !121
  br i1 %20, label %dec_label_pc_1520, label %dec_label_pc_152d, !insn.addr !121

dec_label_pc_152d:                                ; preds = %dec_label_pc_1520
  %21 = icmp slt i32 %1, 0
  %22 = zext i1 %21 to i32, !insn.addr !122
  %23 = add i32 %22, %1, !insn.addr !123
  %24 = ashr i32 %23, 1, !insn.addr !124
  %25 = sext i32 %24 to i64, !insn.addr !125
  %26 = mul i64 %25, 4, !insn.addr !126
  %27 = add i64 %11, %26, !insn.addr !126
  %28 = inttoptr i64 %27 to i32*, !insn.addr !126
  %29 = load i32, i32* %28, align 4, !insn.addr !126
  %30 = zext i32 %29 to i64, !insn.addr !126
  store i64 %30, i64* %storemerge.reg2mem, !insn.addr !126
  br label %dec_label_pc_153b, !insn.addr !126

dec_label_pc_153b:                                ; preds = %dec_label_pc_149c, %dec_label_pc_152d
  %31 = call i64 @__readfsqword(i64 40), !insn.addr !127
  %32 = icmp eq i64 %0, %31, !insn.addr !127
  %33 = icmp eq i1 %32, false, !insn.addr !128
  br i1 %33, label %dec_label_pc_1553, label %dec_label_pc_154a, !insn.addr !128

dec_label_pc_154a:                                ; preds = %dec_label_pc_153b
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !129

dec_label_pc_1553:                                ; preds = %dec_label_pc_153b
  call void @__stack_chk_fail(), !insn.addr !130
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !130

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64 %11, { 1, 0 }
  uselistorder i32 %1, { 1, 0, 2, 3 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_153b, { 1, 0 }
}

define i64 @stack_alias() local_unnamed_addr {
dec_label_pc_1558:
  ret i64 20, !insn.addr !131
}

define i64 @test_stack_memory() local_unnamed_addr {
dec_label_pc_1562:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3004 to i8*)), !insn.addr !132
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_3022, i64 0, i64 0), i64 20), !insn.addr !133
  %2 = call i64 @local_array(i64 2), !insn.addr !134
  %3 = and i64 %2, 4294967295, !insn.addr !135
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_303e, i64 0, i64 0), i64 %3), !insn.addr !136
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_305b, i64 0, i64 0), i64 15), !insn.addr !137
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_32c0, i64 0, i64 0), i64 42), !insn.addr !138
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_32e8, i64 0, i64 0), i64 2), !insn.addr !139
  %8 = call i64 @large_stack_frame(), !insn.addr !140
  %9 = and i64 %8, 4294967295, !insn.addr !141
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3310, i64 0, i64 0), i64 %9), !insn.addr !142
  %11 = call i64 @vla_stack(i64 10), !insn.addr !143
  %12 = and i64 %11, 4294967295, !insn.addr !144
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3079, i64 0, i64 0), i64 %12), !insn.addr !145
  %14 = call i64 @alloca_usage(i64 10), !insn.addr !146
  %15 = and i64 %14, 4294967295, !insn.addr !147
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3094, i64 0, i64 0), i64 %15), !insn.addr !148
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_30b2, i64 0, i64 0), i64 20), !insn.addr !149
  %18 = sext i32 %17 to i64, !insn.addr !149
  ret i64 %18, !insn.addr !150
}

define i64 @heap_basic(i64 %arg1) local_unnamed_addr {
dec_label_pc_168a:
  %rbx.0.reg2mem = alloca i64, !insn.addr !151
  %rdx.0.reg2mem = alloca i64, !insn.addr !151
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !152
  %1 = call i64* @malloc(i32 %0), !insn.addr !152
  %2 = icmp eq i64* %1, null, !insn.addr !153
  store i64 4294967295, i64* %rbx.0.reg2mem, !insn.addr !154
  br i1 %2, label %dec_label_pc_16d2, label %dec_label_pc_16a2, !insn.addr !154

dec_label_pc_16a2:                                ; preds = %dec_label_pc_168a
  %3 = and i64 %arg1, 4294967295, !insn.addr !155
  %4 = ptrtoint i64* %1 to i64, !insn.addr !152
  %5 = icmp slt i32 %arg1.tr, 1
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !156
  br i1 %5, label %dec_label_pc_16bf, label %dec_label_pc_16b0, !insn.addr !156

dec_label_pc_16b0:                                ; preds = %dec_label_pc_16a2, %dec_label_pc_16b0
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %.tr = trunc i64 %rdx.0.reload to i32
  %6 = mul i32 %.tr, 2, !insn.addr !157
  %7 = mul i64 %rdx.0.reload, 4, !insn.addr !158
  %8 = add i64 %7, %4, !insn.addr !158
  %9 = inttoptr i64 %8 to i32*, !insn.addr !158
  store i32 %6, i32* %9, align 4, !insn.addr !158
  %10 = add i64 %rdx.0.reload, 1, !insn.addr !159
  %11 = icmp eq i64 %10, %3, !insn.addr !160
  %12 = icmp eq i1 %11, false, !insn.addr !161
  store i64 %10, i64* %rdx.0.reg2mem, !insn.addr !161
  br i1 %12, label %dec_label_pc_16b0, label %dec_label_pc_16bf, !insn.addr !161

dec_label_pc_16bf:                                ; preds = %dec_label_pc_16b0, %dec_label_pc_16a2
  %13 = icmp slt i32 %arg1.tr, 0
  %14 = zext i1 %13 to i32, !insn.addr !162
  %15 = add i32 %14, %arg1.tr, !insn.addr !163
  %16 = ashr i32 %15, 1, !insn.addr !164
  %17 = sext i32 %16 to i64, !insn.addr !165
  %18 = mul i64 %17, 4, !insn.addr !166
  %19 = add i64 %18, %4, !insn.addr !166
  %20 = inttoptr i64 %19 to i32*, !insn.addr !166
  %21 = load i32, i32* %20, align 4, !insn.addr !166
  %22 = zext i32 %21 to i64, !insn.addr !166
  call void @free(i64* nonnull %1), !insn.addr !167
  store i64 %22, i64* %rbx.0.reg2mem, !insn.addr !167
  br label %dec_label_pc_16d2, !insn.addr !167

dec_label_pc_16d2:                                ; preds = %dec_label_pc_168a, %dec_label_pc_16bf
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  ret i64 %rbx.0.reload, !insn.addr !168

; uselistorder directives
  uselistorder i64 %rdx.0.reload, { 1, 2, 0 }
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i32 %arg1.tr, { 2, 1, 3, 0 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.0.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_16d2, { 1, 0 }
  uselistorder label %dec_label_pc_16b0, { 1, 0 }
}

define i64 @heap_calloc(i64 %arg1) local_unnamed_addr {
dec_label_pc_16dd:
  %rbx.2.reg2mem = alloca i64, !insn.addr !169
  %rbx.1.reg2mem = alloca i64, !insn.addr !169
  %rbx.0.reg2mem = alloca i32, !insn.addr !169
  %rdx.0.reg2mem = alloca i64, !insn.addr !169
  %0 = trunc i64 %arg1 to i32, !insn.addr !170
  %1 = call i64* @calloc(i32 %0, i32 4), !insn.addr !171
  %2 = icmp eq i64* %1, null, !insn.addr !172
  store i64 4294967295, i64* %rbx.2.reg2mem, !insn.addr !173
  br i1 %2, label %dec_label_pc_171b, label %dec_label_pc_16f6, !insn.addr !173

dec_label_pc_16f6:                                ; preds = %dec_label_pc_16dd
  %3 = icmp slt i32 %0, 1
  store i64 0, i64* %rbx.1.reg2mem, !insn.addr !174
  br i1 %3, label %dec_label_pc_1716, label %dec_label_pc_16fd, !insn.addr !174

dec_label_pc_16fd:                                ; preds = %dec_label_pc_16f6
  %4 = ptrtoint i64* %1 to i64, !insn.addr !171
  %5 = mul i64 %arg1, 4, !insn.addr !175
  %6 = and i64 %5, 17179869180, !insn.addr !176
  %7 = add i64 %6, %4, !insn.addr !177
  store i64 %4, i64* %rdx.0.reg2mem, !insn.addr !178
  store i32 0, i32* %rbx.0.reg2mem, !insn.addr !178
  br label %dec_label_pc_170b, !insn.addr !178

dec_label_pc_170b:                                ; preds = %dec_label_pc_170b, %dec_label_pc_16fd
  %rbx.0.reload = load i32, i32* %rbx.0.reg2mem
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %8 = inttoptr i64 %rdx.0.reload to i32*, !insn.addr !179
  %9 = load i32, i32* %8, align 4, !insn.addr !179
  %10 = add i32 %9, %rbx.0.reload, !insn.addr !179
  %11 = add i64 %rdx.0.reload, 4, !insn.addr !180
  %12 = icmp eq i64 %11, %7, !insn.addr !181
  %13 = icmp eq i1 %12, false, !insn.addr !182
  store i64 %11, i64* %rdx.0.reg2mem, !insn.addr !182
  store i32 %10, i32* %rbx.0.reg2mem, !insn.addr !182
  br i1 %13, label %dec_label_pc_170b, label %dec_label_pc_1716.loopexit, !insn.addr !182

dec_label_pc_1716.loopexit:                       ; preds = %dec_label_pc_170b
  %14 = zext i32 %10 to i64, !insn.addr !179
  store i64 %14, i64* %rbx.1.reg2mem
  br label %dec_label_pc_1716

dec_label_pc_1716:                                ; preds = %dec_label_pc_1716.loopexit, %dec_label_pc_16f6
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  call void @free(i64* nonnull %1), !insn.addr !183
  store i64 %rbx.1.reload, i64* %rbx.2.reg2mem, !insn.addr !183
  br label %dec_label_pc_171b, !insn.addr !183

dec_label_pc_171b:                                ; preds = %dec_label_pc_16dd, %dec_label_pc_1716
  %rbx.2.reload = load i64, i64* %rbx.2.reg2mem
  %15 = and i64 %rbx.2.reload, 4294967295, !insn.addr !184
  ret i64 %15, !insn.addr !185

; uselistorder directives
  uselistorder i32 %10, { 1, 0 }
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.2.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_171b, { 1, 0 }
}

define i64 @heap_realloc() local_unnamed_addr {
dec_label_pc_172d:
  %rbx.0.reg2mem = alloca i64, !insn.addr !186
  %0 = call i64* @malloc(i32 20), !insn.addr !187
  %1 = icmp eq i64* %0, null, !insn.addr !188
  store i64 4294967295, i64* %rbx.0.reg2mem, !insn.addr !189
  br i1 %1, label %dec_label_pc_17b2, label %dec_label_pc_1745, !insn.addr !189

dec_label_pc_1745:                                ; preds = %dec_label_pc_172d
  %2 = ptrtoint i64* %0 to i64, !insn.addr !187
  %3 = bitcast i64* %0 to i32*, !insn.addr !190
  store i32 1, i32* %3, align 4, !insn.addr !190
  %4 = add i64 %2, 4, !insn.addr !191
  %5 = inttoptr i64 %4 to i32*, !insn.addr !191
  store i32 2, i32* %5, align 4, !insn.addr !191
  %6 = add i64 %2, 8, !insn.addr !192
  %7 = inttoptr i64 %6 to i32*, !insn.addr !192
  store i32 3, i32* %7, align 4, !insn.addr !192
  %8 = add i64 %2, 12, !insn.addr !193
  %9 = inttoptr i64 %8 to i32*, !insn.addr !193
  store i32 4, i32* %9, align 4, !insn.addr !193
  %10 = add i64 %2, 16, !insn.addr !194
  %11 = inttoptr i64 %10 to i32*, !insn.addr !194
  store i32 5, i32* %11, align 4, !insn.addr !194
  %12 = call i64* @realloc(i64* nonnull %0, i32 40), !insn.addr !195
  %13 = icmp eq i64* %12, null, !insn.addr !196
  br i1 %13, label %dec_label_pc_17b6, label %dec_label_pc_177f, !insn.addr !197

dec_label_pc_177f:                                ; preds = %dec_label_pc_1745
  %14 = ptrtoint i64* %12 to i64, !insn.addr !195
  %15 = add i64 %14, 20, !insn.addr !198
  %16 = inttoptr i64 %15 to i32*, !insn.addr !198
  store i32 50, i32* %16, align 4, !insn.addr !198
  %17 = add i64 %14, 24, !insn.addr !199
  %18 = inttoptr i64 %17 to i32*, !insn.addr !199
  store i32 60, i32* %18, align 4, !insn.addr !199
  %19 = add i64 %14, 28, !insn.addr !200
  %20 = inttoptr i64 %19 to i32*, !insn.addr !200
  store i32 70, i32* %20, align 4, !insn.addr !200
  %21 = add i64 %14, 32, !insn.addr !201
  %22 = inttoptr i64 %21 to i32*, !insn.addr !201
  store i32 80, i32* %22, align 4, !insn.addr !201
  %23 = add i64 %14, 36, !insn.addr !202
  %24 = inttoptr i64 %23 to i32*, !insn.addr !202
  store i32 90, i32* %24, align 4, !insn.addr !202
  %25 = add i64 %14, 8, !insn.addr !203
  %26 = inttoptr i64 %25 to i32*, !insn.addr !203
  %27 = load i32, i32* %26, align 4, !insn.addr !203
  %28 = icmp eq i32 %27, 3, !insn.addr !203
  %spec.store.select = select i1 %28, i64 50, i64 4294967293
  call void @free(i64* nonnull %12), !insn.addr !204
  store i64 %spec.store.select, i64* %rbx.0.reg2mem, !insn.addr !204
  br label %dec_label_pc_17b2, !insn.addr !204

dec_label_pc_17b2:                                ; preds = %dec_label_pc_172d, %dec_label_pc_17b6, %dec_label_pc_177f
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  ret i64 %rbx.0.reload, !insn.addr !205

dec_label_pc_17b6:                                ; preds = %dec_label_pc_1745
  call void @free(i64* nonnull %0), !insn.addr !206
  store i64 4294967294, i64* %rbx.0.reg2mem, !insn.addr !207
  br label %dec_label_pc_17b2, !insn.addr !207

; uselistorder directives
  uselistorder i64* %12, { 0, 2, 1 }
  uselistorder i64* %0, { 0, 1, 2, 4, 3 }
  uselistorder i64* %rbx.0.reg2mem, { 3, 0, 2, 1 }
  uselistorder label %dec_label_pc_17b2, { 1, 2, 0 }
}

define i64 @heap_array(i64 %arg1) local_unnamed_addr {
dec_label_pc_17d3:
  %rbx.0.reg2mem = alloca i64, !insn.addr !208
  %rdx.0.reg2mem = alloca i64, !insn.addr !208
  %rcx.0.reg2mem = alloca i64, !insn.addr !208
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !209
  %1 = call i64* @malloc(i32 %0), !insn.addr !209
  %2 = icmp eq i64* %1, null, !insn.addr !210
  store i64 4294967295, i64* %rbx.0.reg2mem, !insn.addr !211
  br i1 %2, label %dec_label_pc_181e, label %dec_label_pc_17eb, !insn.addr !211

dec_label_pc_17eb:                                ; preds = %dec_label_pc_17d3
  %3 = ptrtoint i64* %1 to i64, !insn.addr !209
  %4 = icmp slt i32 %arg1.tr, 1
  br i1 %4, label %dec_label_pc_180a, label %dec_label_pc_17fd.preheader, !insn.addr !212

dec_label_pc_17fd.preheader:                      ; preds = %dec_label_pc_17eb
  %5 = mul i32 %arg1.tr, 3, !insn.addr !213
  store i64 %3, i64* %rcx.0.reg2mem
  store i64 0, i64* %rdx.0.reg2mem
  br label %dec_label_pc_17fd

dec_label_pc_17fd:                                ; preds = %dec_label_pc_17fd.preheader, %dec_label_pc_17fd
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %6 = trunc i64 %rdx.0.reload to i32, !insn.addr !214
  %7 = inttoptr i64 %rcx.0.reload to i32*, !insn.addr !214
  store i32 %6, i32* %7, align 4, !insn.addr !214
  %8 = add nuw nsw i64 %rdx.0.reload, 3, !insn.addr !215
  %9 = and i64 %8, 4294967295, !insn.addr !215
  %10 = add i64 %rcx.0.reload, 4, !insn.addr !216
  %11 = trunc i64 %8 to i32, !insn.addr !213
  %12 = icmp eq i32 %5, %11, !insn.addr !213
  %13 = icmp eq i1 %12, false, !insn.addr !217
  store i64 %10, i64* %rcx.0.reg2mem, !insn.addr !217
  store i64 %9, i64* %rdx.0.reg2mem, !insn.addr !217
  br i1 %13, label %dec_label_pc_17fd, label %dec_label_pc_180a, !insn.addr !217

dec_label_pc_180a:                                ; preds = %dec_label_pc_17fd, %dec_label_pc_17eb
  %14 = icmp slt i32 %arg1.tr, 0
  %15 = zext i1 %14 to i32, !insn.addr !218
  %16 = add i32 %15, %arg1.tr, !insn.addr !219
  %17 = ashr i32 %16, 1, !insn.addr !220
  %18 = sext i32 %17 to i64, !insn.addr !221
  %19 = mul i64 %18, 4, !insn.addr !222
  %20 = add i64 %19, %3, !insn.addr !222
  %21 = inttoptr i64 %20 to i32*, !insn.addr !222
  %22 = load i32, i32* %21, align 4, !insn.addr !222
  %23 = zext i32 %22 to i64, !insn.addr !222
  call void @free(i64* nonnull %1), !insn.addr !223
  store i64 %23, i64* %rbx.0.reg2mem, !insn.addr !223
  br label %dec_label_pc_181e, !insn.addr !223

dec_label_pc_181e:                                ; preds = %dec_label_pc_17d3, %dec_label_pc_180a
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  ret i64 %rbx.0.reload, !insn.addr !224

; uselistorder directives
  uselistorder i64 %rcx.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i32 %arg1.tr, { 2, 1, 3, 4, 0 }
  uselistorder i64* %rcx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 3, { 0, 2, 3, 1 }
  uselistorder label %dec_label_pc_181e, { 1, 0 }
  uselistorder label %dec_label_pc_17fd, { 1, 0 }
}

define i64 @heap_struct(i64 %arg1) local_unnamed_addr {
dec_label_pc_1829:
  %rbx.0.reg2mem = alloca i64, !insn.addr !225
  %0 = call i64* @malloc(i32 8), !insn.addr !226
  %1 = icmp eq i64* %0, null, !insn.addr !227
  store i64 4294967295, i64* %rbx.0.reg2mem, !insn.addr !228
  br i1 %1, label %dec_label_pc_184a, label %dec_label_pc_183f, !insn.addr !228

dec_label_pc_183f:                                ; preds = %dec_label_pc_1829
  %2 = and i64 %arg1, 4294967295, !insn.addr !229
  %3 = mul nuw nsw i64 %2, 3, !insn.addr !230
  %4 = and i64 %3, 4294967295, !insn.addr !230
  call void @free(i64* nonnull %0), !insn.addr !231
  store i64 %4, i64* %rbx.0.reg2mem, !insn.addr !231
  br label %dec_label_pc_184a, !insn.addr !231

dec_label_pc_184a:                                ; preds = %dec_label_pc_1829, %dec_label_pc_183f
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  ret i64 %rbx.0.reload, !insn.addr !232

; uselistorder directives
  uselistorder i64* %rbx.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_184a, { 1, 0 }
}

define i64 @heap_nested(i64* %arg1) local_unnamed_addr {
dec_label_pc_1855:
  %rax.0.reg2mem = alloca i64, !insn.addr !233
  %0 = call i64* @malloc(i32 16), !insn.addr !234
  %1 = ptrtoint i64* %0 to i64, !insn.addr !234
  store i64 %1, i64* %arg1, align 8, !insn.addr !235
  %2 = icmp eq i64* %0, null, !insn.addr !236
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !237
  br i1 %2, label %dec_label_pc_18a4, label %dec_label_pc_1875, !insn.addr !237

dec_label_pc_1875:                                ; preds = %dec_label_pc_1855
  %3 = bitcast i64* %0 to i32*, !insn.addr !238
  store i32 10, i32* %3, align 4, !insn.addr !238
  %4 = call i64* @malloc(i32 16), !insn.addr !239
  %5 = ptrtoint i64* %4 to i64, !insn.addr !239
  %6 = add i64 %1, 8, !insn.addr !240
  %7 = inttoptr i64 %6 to i64*, !insn.addr !240
  store i64 %5, i64* %7, align 8, !insn.addr !240
  %8 = icmp eq i64* %4, null, !insn.addr !241
  br i1 %8, label %dec_label_pc_18ab, label %dec_label_pc_1891, !insn.addr !242

dec_label_pc_1891:                                ; preds = %dec_label_pc_1875
  %9 = bitcast i64* %4 to i32*, !insn.addr !243
  store i32 20, i32* %9, align 4, !insn.addr !243
  %10 = add i64 %5, 8, !insn.addr !244
  %11 = inttoptr i64 %10 to i64*, !insn.addr !244
  store i64 0, i64* %11, align 8, !insn.addr !244
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !245
  br label %dec_label_pc_18a4, !insn.addr !245

dec_label_pc_18a4:                                ; preds = %dec_label_pc_1855, %dec_label_pc_18ab, %dec_label_pc_1891
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !246

dec_label_pc_18ab:                                ; preds = %dec_label_pc_1875
  call void @free(i64* nonnull %0), !insn.addr !247
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !248
  br label %dec_label_pc_18a4, !insn.addr !248

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 3, 0, 2, 1 }
  uselistorder label %dec_label_pc_18a4, { 1, 2, 0 }
}

define i64 @linked_list_heap() local_unnamed_addr {
dec_label_pc_18c1:
  %rbp.2.reg2mem = alloca i64, !insn.addr !249
  %rbx.3.reg2mem = alloca i64, !insn.addr !249
  %rbp.1.reg2mem = alloca i32, !insn.addr !249
  %rax.1.reg2mem = alloca i64, !insn.addr !249
  %rbp.0.reg2mem = alloca i64, !insn.addr !249
  %rbx.2.reg2mem = alloca i64, !insn.addr !249
  %rax.0.reg2mem = alloca i64, !insn.addr !249
  %rbx.1.reg2mem = alloca i64, !insn.addr !249
  %rbx.0.reg2mem = alloca i64, !insn.addr !249
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !250
  store i64 0, i64* %rbx.2.reg2mem, !insn.addr !250
  store i64 0, i64* %rbp.0.reg2mem, !insn.addr !250
  br label %dec_label_pc_1902, !insn.addr !250

dec_label_pc_18da:                                ; preds = %dec_label_pc_1902
  %0 = icmp eq i64 %rbx.2.reload, 0, !insn.addr !251
  store i64 %rbx.2.reload, i64* %rbx.0.reg2mem, !insn.addr !252
  store i64 4294967295, i64* %rbp.2.reg2mem, !insn.addr !252
  br i1 %0, label %dec_label_pc_1953, label %dec_label_pc_18df, !insn.addr !252

dec_label_pc_18df:                                ; preds = %dec_label_pc_18da, %dec_label_pc_18df
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %1 = add i64 %rbx.0.reload, 8, !insn.addr !253
  %2 = inttoptr i64 %1 to i64*, !insn.addr !253
  %3 = load i64, i64* %2, align 8, !insn.addr !253
  %4 = inttoptr i64 %rbx.0.reload to i64*, !insn.addr !254
  call void @free(i64* %4), !insn.addr !254
  %5 = icmp eq i64 %3, 0, !insn.addr !255
  %6 = icmp eq i1 %5, false, !insn.addr !256
  store i64 %3, i64* %rbx.0.reg2mem, !insn.addr !256
  store i64 4294967295, i64* %rbp.2.reg2mem, !insn.addr !256
  br i1 %6, label %dec_label_pc_18df, label %dec_label_pc_1953, !insn.addr !256

dec_label_pc_18fa:                                ; preds = %dec_label_pc_1914, %dec_label_pc_1923
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %7 = add nuw nsw i64 %rbp.0.reload, 10, !insn.addr !257
  %8 = and i64 %7, 4294967295, !insn.addr !257
  %9 = trunc i64 %7 to i32, !insn.addr !258
  %10 = icmp eq i32 %9, 50, !insn.addr !258
  store i64 %13, i64* %rax.0.reg2mem, !insn.addr !259
  store i64 %rbx.1.reload, i64* %rbx.2.reg2mem, !insn.addr !259
  store i64 %8, i64* %rbp.0.reg2mem, !insn.addr !259
  br i1 %10, label %dec_label_pc_192a, label %dec_label_pc_1902, !insn.addr !259

dec_label_pc_1902:                                ; preds = %dec_label_pc_18fa, %dec_label_pc_18c1
  %rbx.2.reload = load i64, i64* %rbx.2.reg2mem
  %11 = call i64* @malloc(i32 16), !insn.addr !260
  %12 = icmp eq i64* %11, null, !insn.addr !261
  br i1 %12, label %dec_label_pc_18da, label %dec_label_pc_1914, !insn.addr !262

dec_label_pc_1914:                                ; preds = %dec_label_pc_1902
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %13 = ptrtoint i64* %11 to i64, !insn.addr !260
  %14 = trunc i64 %rbp.0.reload to i32, !insn.addr !263
  %15 = bitcast i64* %11 to i32*, !insn.addr !263
  store i32 %14, i32* %15, align 4, !insn.addr !263
  %16 = add i64 %13, 8, !insn.addr !264
  %17 = inttoptr i64 %16 to i64*, !insn.addr !264
  store i64 0, i64* %17, align 8, !insn.addr !264
  %18 = icmp eq i64 %rbx.2.reload, 0, !insn.addr !265
  store i64 %13, i64* %rbx.1.reg2mem, !insn.addr !266
  br i1 %18, label %dec_label_pc_18fa, label %dec_label_pc_1923, !insn.addr !266

dec_label_pc_1923:                                ; preds = %dec_label_pc_1914
  %19 = add i64 %rax.0.reload, 8, !insn.addr !267
  %20 = inttoptr i64 %19 to i64*, !insn.addr !267
  store i64 %13, i64* %20, align 8, !insn.addr !267
  store i64 %rbx.2.reload, i64* %rbx.1.reg2mem, !insn.addr !268
  br label %dec_label_pc_18fa, !insn.addr !268

dec_label_pc_192a:                                ; preds = %dec_label_pc_18fa
  %21 = icmp eq i64 %rbx.1.reload, 0, !insn.addr !269
  store i64 %rbx.1.reload, i64* %rax.1.reg2mem, !insn.addr !270
  store i32 0, i32* %rbp.1.reg2mem, !insn.addr !270
  store i64 0, i64* %rbp.2.reg2mem, !insn.addr !270
  br i1 %21, label %dec_label_pc_1953, label %dec_label_pc_1937, !insn.addr !270

dec_label_pc_1937:                                ; preds = %dec_label_pc_192a, %dec_label_pc_1937
  %rbp.1.reload = load i32, i32* %rbp.1.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %22 = inttoptr i64 %rax.1.reload to i32*, !insn.addr !271
  %23 = load i32, i32* %22, align 4, !insn.addr !271
  %24 = add i32 %23, %rbp.1.reload, !insn.addr !271
  %25 = add i64 %rax.1.reload, 8, !insn.addr !272
  %26 = inttoptr i64 %25 to i64*, !insn.addr !272
  %27 = load i64, i64* %26, align 8, !insn.addr !272
  %28 = icmp eq i64 %27, 0, !insn.addr !273
  %29 = icmp eq i1 %28, false, !insn.addr !274
  store i64 %27, i64* %rax.1.reg2mem, !insn.addr !274
  store i32 %24, i32* %rbp.1.reg2mem, !insn.addr !274
  store i64 %rbx.1.reload, i64* %rbx.3.reg2mem, !insn.addr !274
  br i1 %29, label %dec_label_pc_1937, label %dec_label_pc_1942, !insn.addr !274

dec_label_pc_1942:                                ; preds = %dec_label_pc_1937, %dec_label_pc_1942
  %rbx.3.reload = load i64, i64* %rbx.3.reg2mem
  %30 = add i64 %rbx.3.reload, 8, !insn.addr !275
  %31 = inttoptr i64 %30 to i64*, !insn.addr !275
  %32 = load i64, i64* %31, align 8, !insn.addr !275
  %33 = inttoptr i64 %rbx.3.reload to i64*, !insn.addr !276
  call void @free(i64* %33), !insn.addr !276
  %34 = icmp eq i64 %32, 0, !insn.addr !277
  %35 = icmp eq i1 %34, false, !insn.addr !278
  store i64 %32, i64* %rbx.3.reg2mem, !insn.addr !278
  br i1 %35, label %dec_label_pc_1942, label %dec_label_pc_1953.loopexit1, !insn.addr !278

dec_label_pc_1953.loopexit1:                      ; preds = %dec_label_pc_1942
  %36 = zext i32 %24 to i64, !insn.addr !271
  store i64 %36, i64* %rbp.2.reg2mem
  br label %dec_label_pc_1953

dec_label_pc_1953:                                ; preds = %dec_label_pc_18df, %dec_label_pc_1953.loopexit1, %dec_label_pc_192a, %dec_label_pc_18da
  %rbp.2.reload = load i64, i64* %rbp.2.reg2mem
  ret i64 %rbp.2.reload, !insn.addr !279

; uselistorder directives
  uselistorder i64 %rbx.3.reload, { 1, 0 }
  uselistorder i32 %24, { 1, 0 }
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
  uselistorder i64* %rbp.2.reg2mem, { 0, 2, 3, 1, 4 }
  uselistorder label %dec_label_pc_1953, { 1, 2, 0, 3 }
  uselistorder label %dec_label_pc_1942, { 1, 0 }
  uselistorder label %dec_label_pc_1937, { 1, 0 }
  uselistorder label %dec_label_pc_18fa, { 1, 0 }
  uselistorder label %dec_label_pc_18df, { 1, 0 }
}

define i64 @create_tree_node(i64 %arg1) local_unnamed_addr {
dec_label_pc_1968:
  %0 = call i64* @malloc(i32 24), !insn.addr !280
  %1 = ptrtoint i64* %0 to i64, !insn.addr !280
  %2 = icmp eq i64* %0, null, !insn.addr !281
  br i1 %2, label %dec_label_pc_1990, label %dec_label_pc_197e, !insn.addr !282

dec_label_pc_197e:                                ; preds = %dec_label_pc_1968
  %3 = trunc i64 %arg1 to i32, !insn.addr !283
  %4 = bitcast i64* %0 to i32*, !insn.addr !283
  store i32 %3, i32* %4, align 4, !insn.addr !283
  %5 = add i64 %1, 8, !insn.addr !284
  %6 = inttoptr i64 %5 to i64*, !insn.addr !284
  store i64 0, i64* %6, align 8, !insn.addr !284
  %7 = add i64 %1, 16, !insn.addr !285
  %8 = inttoptr i64 %7 to i64*, !insn.addr !285
  store i64 0, i64* %8, align 8, !insn.addr !285
  br label %dec_label_pc_1990, !insn.addr !285

dec_label_pc_1990:                                ; preds = %dec_label_pc_197e, %dec_label_pc_1968
  ret i64 %1, !insn.addr !286

; uselistorder directives
  uselistorder i64 %1, { 2, 0, 1 }
}

define i64 @tree_heap_traversal() local_unnamed_addr {
dec_label_pc_1992:
  %.reg2mem = alloca i64, !insn.addr !287
  %rbp.0.reg2mem = alloca i64, !insn.addr !287
  %0 = call i64 @create_tree_node(i64 10), !insn.addr !288
  %1 = icmp eq i64 %0, 0, !insn.addr !289
  store i64 4294967295, i64* %rbp.0.reg2mem, !insn.addr !290
  br i1 %1, label %dec_label_pc_19f4, label %dec_label_pc_19ab, !insn.addr !290

dec_label_pc_19ab:                                ; preds = %dec_label_pc_1992
  %2 = call i64 @create_tree_node(i64 20), !insn.addr !291
  %3 = add i64 %0, 8, !insn.addr !292
  %4 = inttoptr i64 %3 to i64*, !insn.addr !292
  store i64 %2, i64* %4, align 8, !insn.addr !292
  %5 = call i64 @create_tree_node(i64 30), !insn.addr !293
  %6 = add i64 %0, 16, !insn.addr !294
  %7 = inttoptr i64 %6 to i64*, !insn.addr !294
  store i64 %5, i64* %7, align 8, !insn.addr !294
  %8 = load i64, i64* %4, align 8, !insn.addr !295
  %9 = icmp eq i64 %5, 0, !insn.addr !296
  %10 = icmp eq i64 %8, 0, !insn.addr !297
  %or.cond = or i1 %9, %10
  br i1 %or.cond, label %dec_label_pc_19fd, label %dec_label_pc_19d8, !insn.addr !298

dec_label_pc_19d8:                                ; preds = %dec_label_pc_19ab
  %11 = inttoptr i64 %8 to i32*, !insn.addr !299
  %12 = load i32, i32* %11, align 4, !insn.addr !299
  %13 = inttoptr i64 %0 to i32*, !insn.addr !300
  %14 = load i32, i32* %13, align 4, !insn.addr !300
  %15 = add i32 %14, %12, !insn.addr !300
  %16 = inttoptr i64 %5 to i32*, !insn.addr !301
  %17 = load i32, i32* %16, align 4, !insn.addr !301
  %18 = add i32 %15, %17, !insn.addr !301
  %19 = zext i32 %18 to i64, !insn.addr !301
  %20 = inttoptr i64 %8 to i64*, !insn.addr !302
  call void @free(i64* %20), !insn.addr !302
  %21 = load i64, i64* %7, align 8, !insn.addr !303
  %22 = inttoptr i64 %21 to i64*, !insn.addr !304
  call void @free(i64* %22), !insn.addr !304
  %23 = inttoptr i64 %0 to i64*, !insn.addr !305
  call void @free(i64* %23), !insn.addr !305
  store i64 %19, i64* %rbp.0.reg2mem, !insn.addr !305
  br label %dec_label_pc_19f4, !insn.addr !305

dec_label_pc_19f4:                                ; preds = %dec_label_pc_1992, %dec_label_pc_1a15, %dec_label_pc_19d8
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  ret i64 %rbp.0.reload, !insn.addr !306

dec_label_pc_19fd:                                ; preds = %dec_label_pc_19ab
  store i64 %5, i64* %.reg2mem, !insn.addr !307
  br i1 %10, label %dec_label_pc_1a07, label %dec_label_pc_1a02, !insn.addr !307

dec_label_pc_1a02:                                ; preds = %dec_label_pc_19fd
  %24 = inttoptr i64 %8 to i64*, !insn.addr !308
  call void @free(i64* %24), !insn.addr !308
  %.pre = load i64, i64* %7, align 8
  store i64 %.pre, i64* %.reg2mem, !insn.addr !308
  br label %dec_label_pc_1a07, !insn.addr !308

dec_label_pc_1a07:                                ; preds = %dec_label_pc_1a02, %dec_label_pc_19fd
  %.reload = load i64, i64* %.reg2mem, !insn.addr !309
  %25 = icmp eq i64 %.reload, 0, !insn.addr !310
  br i1 %25, label %dec_label_pc_1a15, label %dec_label_pc_1a10, !insn.addr !311

dec_label_pc_1a10:                                ; preds = %dec_label_pc_1a07
  %26 = inttoptr i64 %.reload to i64*, !insn.addr !312
  call void @free(i64* %26), !insn.addr !312
  br label %dec_label_pc_1a15, !insn.addr !312

dec_label_pc_1a15:                                ; preds = %dec_label_pc_1a10, %dec_label_pc_1a07
  %27 = inttoptr i64 %0 to i64*, !insn.addr !313
  call void @free(i64* %27), !insn.addr !313
  store i64 4294967294, i64* %rbp.0.reg2mem, !insn.addr !314
  br label %dec_label_pc_19f4, !insn.addr !314

; uselistorder directives
  uselistorder i64 %8, { 1, 0, 2, 3 }
  uselistorder i64 %5, { 0, 1, 3, 2 }
  uselistorder i64 %0, { 2, 0, 1, 4, 3, 5 }
  uselistorder i64* %rbp.0.reg2mem, { 3, 0, 2, 1 }
  uselistorder i64* %.reg2mem, { 0, 2, 1 }
  uselistorder i64 (i64)* @create_tree_node, { 2, 1, 0 }
  uselistorder label %dec_label_pc_19f4, { 1, 2, 0 }
}

define i64 @memory_leak(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a2b:
  %storemerge.reg2mem = alloca i64, !insn.addr !315
  %rdx.0.reg2mem = alloca i64, !insn.addr !315
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !316
  %1 = call i64* @malloc(i32 %0), !insn.addr !316
  %2 = icmp eq i64* %1, null, !insn.addr !317
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !318
  br i1 %2, label %dec_label_pc_1a69, label %dec_label_pc_1a43, !insn.addr !318

dec_label_pc_1a43:                                ; preds = %dec_label_pc_1a2b
  %3 = and i64 %arg1, 4294967295, !insn.addr !319
  %4 = ptrtoint i64* %1 to i64, !insn.addr !316
  %5 = icmp slt i32 %arg1.tr, 1
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !320
  br i1 %5, label %dec_label_pc_1a5a, label %dec_label_pc_1a4e, !insn.addr !320

dec_label_pc_1a4e:                                ; preds = %dec_label_pc_1a43, %dec_label_pc_1a4e
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %6 = trunc i64 %rdx.0.reload to i32, !insn.addr !321
  %7 = mul i64 %rdx.0.reload, 4, !insn.addr !321
  %8 = add i64 %7, %4, !insn.addr !321
  %9 = inttoptr i64 %8 to i32*, !insn.addr !321
  store i32 %6, i32* %9, align 4, !insn.addr !321
  %10 = add i64 %rdx.0.reload, 1, !insn.addr !322
  %11 = icmp eq i64 %10, %3, !insn.addr !323
  %12 = icmp eq i1 %11, false, !insn.addr !324
  store i64 %10, i64* %rdx.0.reg2mem, !insn.addr !324
  br i1 %12, label %dec_label_pc_1a4e, label %dec_label_pc_1a5a, !insn.addr !324

dec_label_pc_1a5a:                                ; preds = %dec_label_pc_1a4e, %dec_label_pc_1a43
  %13 = icmp slt i32 %arg1.tr, 0
  %14 = zext i1 %13 to i32, !insn.addr !325
  %15 = add i32 %14, %arg1.tr, !insn.addr !326
  %16 = ashr i32 %15, 1, !insn.addr !327
  %17 = sext i32 %16 to i64, !insn.addr !328
  %18 = mul i64 %17, 4, !insn.addr !329
  %19 = add i64 %18, %4, !insn.addr !329
  %20 = inttoptr i64 %19 to i32*, !insn.addr !329
  %21 = load i32, i32* %20, align 4, !insn.addr !329
  %22 = zext i32 %21 to i64, !insn.addr !329
  store i64 %22, i64* %storemerge.reg2mem, !insn.addr !329
  br label %dec_label_pc_1a69, !insn.addr !329

dec_label_pc_1a69:                                ; preds = %dec_label_pc_1a2b, %dec_label_pc_1a5a
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !330

; uselistorder directives
  uselistorder i64 %rdx.0.reload, { 1, 2, 0 }
  uselistorder i64* %1, { 1, 0 }
  uselistorder i32 %arg1.tr, { 2, 1, 3, 0 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_1a69, { 1, 0 }
  uselistorder label %dec_label_pc_1a4e, { 1, 0 }
}

define i64 @dangling_pointer() local_unnamed_addr {
dec_label_pc_1a72:
  %storemerge.reg2mem = alloca i64, !insn.addr !331
  %0 = call i64* @malloc(i32 4), !insn.addr !332
  %1 = icmp eq i64* %0, null, !insn.addr !333
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !334
  br i1 %1, label %dec_label_pc_1aae, label %dec_label_pc_1a86, !insn.addr !334

dec_label_pc_1a86:                                ; preds = %dec_label_pc_1a72
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_30cf, i64 0, i64 0), i64 42), !insn.addr !335
  call void @free(i64* nonnull %0), !insn.addr !336
  %3 = bitcast i64* %0 to i32*, !insn.addr !337
  %4 = load i32, i32* %3, align 4, !insn.addr !337
  %5 = zext i32 %4 to i64, !insn.addr !337
  store i64 %5, i64* %storemerge.reg2mem, !insn.addr !337
  br label %dec_label_pc_1aae, !insn.addr !337

dec_label_pc_1aae:                                ; preds = %dec_label_pc_1a72, %dec_label_pc_1a86
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !338

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 42, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1aae, { 1, 0 }
}

define i64 @double_free(i64 %arg1) local_unnamed_addr {
dec_label_pc_1ab7:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !339
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %arg1, 0, !insn.addr !340
  br i1 %2, label %dec_label_pc_1ac3, label %dec_label_pc_1ac0, !insn.addr !341

dec_label_pc_1ac0:                                ; preds = %dec_label_pc_1ab7
  %3 = and i64 %1, 4294967295, !insn.addr !342
  ret i64 %3, !insn.addr !343

dec_label_pc_1ac3:                                ; preds = %dec_label_pc_1ab7
  %4 = call i64* @malloc(i32 4), !insn.addr !344
  %5 = icmp eq i64* %4, null, !insn.addr !345
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !346
  br i1 %5, label %dec_label_pc_1aeb, label %dec_label_pc_1ad6, !insn.addr !346

dec_label_pc_1ad6:                                ; preds = %dec_label_pc_1ac3
  call void @free(i64* nonnull %4), !insn.addr !347
  call void @free(i64* nonnull %4), !insn.addr !348
  store i64 4294967294, i64* %storemerge.reg2mem, !insn.addr !349
  br label %dec_label_pc_1aeb, !insn.addr !349

dec_label_pc_1aeb:                                ; preds = %dec_label_pc_1ac3, %dec_label_pc_1ad6
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !350

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 4, { 3, 4, 0, 1, 6, 5, 2 }
  uselistorder label %dec_label_pc_1aeb, { 1, 0 }
}

define i64 @heap_overflow() local_unnamed_addr {
dec_label_pc_1af4:
  %rbx.0.reg2mem = alloca i64, !insn.addr !351
  %rdx.0.reg2mem = alloca i64, !insn.addr !351
  %rcx.0.reg2mem = alloca i64, !insn.addr !351
  %0 = call i64* @malloc(i32 40), !insn.addr !352
  %1 = icmp eq i64* %0, null, !insn.addr !353
  store i64 4294967295, i64* %rbx.0.reg2mem, !insn.addr !354
  br i1 %1, label %dec_label_pc_1b2b, label %dec_label_pc_1b08, !insn.addr !354

dec_label_pc_1b08:                                ; preds = %dec_label_pc_1af4
  %2 = ptrtoint i64* %0 to i64, !insn.addr !352
  store i64 %2, i64* %rcx.0.reg2mem, !insn.addr !355
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !355
  br label %dec_label_pc_1b13, !insn.addr !355

dec_label_pc_1b13:                                ; preds = %dec_label_pc_1b13, %dec_label_pc_1b08
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %3 = trunc i64 %rdx.0.reload to i32, !insn.addr !356
  %4 = inttoptr i64 %rcx.0.reload to i32*, !insn.addr !356
  store i32 %3, i32* %4, align 4, !insn.addr !356
  %5 = add nuw nsw i64 %rdx.0.reload, 100, !insn.addr !357
  %6 = and i64 %5, 4294967295, !insn.addr !357
  %7 = add i64 %rcx.0.reload, 4, !insn.addr !358
  %8 = trunc i64 %5 to i32, !insn.addr !359
  %9 = icmp eq i32 %8, ptrtoint (i32* @global_var_44c to i32), !insn.addr !359
  %10 = icmp eq i1 %9, false, !insn.addr !360
  store i64 %7, i64* %rcx.0.reg2mem, !insn.addr !360
  store i64 %6, i64* %rdx.0.reg2mem, !insn.addr !360
  br i1 %10, label %dec_label_pc_1b13, label %dec_label_pc_1b24, !insn.addr !360

dec_label_pc_1b24:                                ; preds = %dec_label_pc_1b13
  %11 = bitcast i64* %0 to i32*, !insn.addr !361
  %12 = load i32, i32* %11, align 4, !insn.addr !361
  %13 = zext i32 %12 to i64, !insn.addr !361
  call void @free(i64* nonnull %0), !insn.addr !362
  store i64 %13, i64* %rbx.0.reg2mem, !insn.addr !362
  br label %dec_label_pc_1b2b, !insn.addr !362

dec_label_pc_1b2b:                                ; preds = %dec_label_pc_1af4, %dec_label_pc_1b24
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  ret i64 %rbx.0.reload, !insn.addr !363

; uselistorder directives
  uselistorder i64 %rcx.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64* %0, { 0, 1, 3, 2 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* (i32)* @malloc, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder label %dec_label_pc_1b2b, { 1, 0 }
}

define i64 @test_heap_memory() local_unnamed_addr {
dec_label_pc_1b36:
  %stack_var_-28 = alloca i32, align 4
  %stack_var_-24 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !364
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_30e6 to i8*)), !insn.addr !365
  %2 = call i64 @heap_basic(i64 10), !insn.addr !366
  %3 = and i64 %2, 4294967295, !insn.addr !367
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3104, i64 0, i64 0), i64 %3), !insn.addr !368
  %5 = call i64 @heap_calloc(i64 5), !insn.addr !369
  %6 = and i64 %5, 4294967295, !insn.addr !370
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3121, i64 0, i64 0), i64 %6), !insn.addr !371
  %8 = call i64 @heap_realloc(), !insn.addr !372
  %9 = and i64 %8, 4294967295, !insn.addr !373
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3338, i64 0, i64 0), i64 %9), !insn.addr !374
  %11 = call i64 @heap_array(i64 10), !insn.addr !375
  %12 = and i64 %11, 4294967295, !insn.addr !376
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_313f, i64 0, i64 0), i64 %12), !insn.addr !377
  %14 = call i64 @heap_struct(i64 5), !insn.addr !378
  %15 = and i64 %14, 4294967295, !insn.addr !379
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_315c, i64 0, i64 0), i64 %15), !insn.addr !380
  store i64 0, i64* %stack_var_-24, align 8, !insn.addr !381
  %17 = call i64 @heap_nested(i64* nonnull %stack_var_-24), !insn.addr !382
  %18 = and i64 %17, 4294967295, !insn.addr !383
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_317a, i64 0, i64 0), i64 %18), !insn.addr !384
  %20 = load i64, i64* %stack_var_-24, align 8, !insn.addr !385
  %21 = icmp eq i64 %20, 0, !insn.addr !386
  br i1 %21, label %dec_label_pc_1c4c, label %dec_label_pc_1c39, !insn.addr !387

dec_label_pc_1c39:                                ; preds = %dec_label_pc_1b36
  %22 = add i64 %20, 8, !insn.addr !388
  %23 = inttoptr i64 %22 to i64*, !insn.addr !388
  %24 = load i64, i64* %23, align 8, !insn.addr !388
  %25 = inttoptr i64 %24 to i64*, !insn.addr !389
  call void @free(i64* %25), !insn.addr !389
  %26 = load i64, i64* %stack_var_-24, align 8, !insn.addr !390
  %27 = inttoptr i64 %26 to i64*, !insn.addr !391
  call void @free(i64* %27), !insn.addr !391
  br label %dec_label_pc_1c4c, !insn.addr !391

dec_label_pc_1c4c:                                ; preds = %dec_label_pc_1c39, %dec_label_pc_1b36
  %28 = call i64 @linked_list_heap(), !insn.addr !392
  %29 = and i64 %28, 4294967295, !insn.addr !393
  %30 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3358, i64 0, i64 0), i64 %29), !insn.addr !394
  %31 = call i64 @tree_heap_traversal(), !insn.addr !395
  %32 = and i64 %31, 4294967295, !insn.addr !396
  %33 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3380, i64 0, i64 0), i64 %32), !insn.addr !397
  %34 = call i64 @memory_leak(i64 5), !insn.addr !398
  %35 = and i64 %34, 4294967295, !insn.addr !399
  %36 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3198, i64 0, i64 0), i64 %35), !insn.addr !400
  %37 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_33a8, i64 0, i64 0)), !insn.addr !401
  %38 = call i32 @fork(), !insn.addr !402
  %39 = icmp eq i32 %38, 0, !insn.addr !403
  br i1 %39, label %dec_label_pc_1d18, label %dec_label_pc_1cd1, !insn.addr !404

dec_label_pc_1cd1:                                ; preds = %dec_label_pc_1c4c
  %40 = icmp slt i32 %38, 1
  br i1 %40, label %dec_label_pc_1d5a, label %dec_label_pc_1cd7, !insn.addr !405

dec_label_pc_1cd7:                                ; preds = %dec_label_pc_1cd1
  %41 = call i32 @waitpid(i32 %38, i32* nonnull %stack_var_-28, i32 0), !insn.addr !406
  %42 = load i32, i32* %stack_var_-28, align 4, !insn.addr !407
  %43 = urem i32 %42, 128, !insn.addr !408
  %44 = icmp eq i32 %43, 0, !insn.addr !408
  br i1 %44, label %dec_label_pc_1d3f, label %dec_label_pc_1cf3, !insn.addr !409

dec_label_pc_1cf3:                                ; preds = %dec_label_pc_1cd7
  %45 = trunc i32 %42 to i8, !insn.addr !410
  %46 = urem i8 %45, -128
  %47 = add nuw i8 %46, 1, !insn.addr !411
  %48 = icmp slt i8 %47, 2, !insn.addr !412
  br i1 %48, label %dec_label_pc_1d66, label %dec_label_pc_1cfe, !insn.addr !412

dec_label_pc_1cfe:                                ; preds = %dec_label_pc_1cf3
  %49 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_33f0 to i8*)), !insn.addr !413
  br label %dec_label_pc_1d66, !insn.addr !414

dec_label_pc_1d18:                                ; preds = %dec_label_pc_1c4c
  %50 = call i64 @dangling_pointer(), !insn.addr !415
  %51 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_31b6 to i8*)), !insn.addr !416
  call void @exit(i32 0), !insn.addr !417
  unreachable, !insn.addr !417

dec_label_pc_1d3f:                                ; preds = %dec_label_pc_1cd7
  %52 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_33c8 to i8*)), !insn.addr !418
  br label %dec_label_pc_1d66, !insn.addr !419

dec_label_pc_1d5a:                                ; preds = %dec_label_pc_1cd1
  call void @perror(i8* bitcast (i8** @global_var_31c6 to i8*)), !insn.addr !420
  br label %dec_label_pc_1d66, !insn.addr !420

dec_label_pc_1d66:                                ; preds = %dec_label_pc_1d5a, %dec_label_pc_1d3f, %dec_label_pc_1cfe, %dec_label_pc_1cf3
  %53 = call i64 @__readfsqword(i64 40), !insn.addr !421
  %54 = sub i64 %0, %53, !insn.addr !421
  %55 = icmp eq i64 %54, 0, !insn.addr !421
  %56 = icmp eq i1 %55, false, !insn.addr !422
  br i1 %56, label %dec_label_pc_1d7b, label %dec_label_pc_1d76, !insn.addr !422

dec_label_pc_1d76:                                ; preds = %dec_label_pc_1d66
  ret i64 %54, !insn.addr !423

dec_label_pc_1d7b:                                ; preds = %dec_label_pc_1d66
  call void @__stack_chk_fail(), !insn.addr !424
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !424

; uselistorder directives
  uselistorder i32 %42, { 1, 0 }
  uselistorder i64* %stack_var_-24, { 1, 2, 0, 3 }
  uselistorder void (i64*)* @free, { 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 21 }
  uselistorder i64 8, { 0, 1, 2, 3, 4, 6, 7, 5, 8, 9, 10, 11 }
}

define i64 @global_var_access() local_unnamed_addr {
dec_label_pc_1d80:
  store i32 ptrtoint (i32* @global_var_6041 to i32), i32* @global_var_6040, align 4, !insn.addr !425
  ret i64 ptrtoint (i32* @global_var_6041 to i64), !insn.addr !426

; uselistorder directives
  uselistorder i32* @global_var_6041, { 1, 0 }
}

define i64 @global_var_read() local_unnamed_addr {
dec_label_pc_1d94:
  %0 = load i32, i32* @global_var_6040, align 4, !insn.addr !427
  %1 = mul i32 %0, 2, !insn.addr !428
  %2 = zext i32 %1 to i64, !insn.addr !428
  ret i64 %2, !insn.addr !429
}

define i64 @global_array_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_1da1:
  %0 = trunc i64 %arg1 to i32, !insn.addr !430
  %1 = icmp ult i32 %0, 10
  br i1 %1, label %dec_label_pc_1daa, label %dec_label_pc_1db8, !insn.addr !431

dec_label_pc_1daa:                                ; preds = %dec_label_pc_1da1
  %sext = mul i64 %arg1, 4294967296
  %2 = ashr exact i64 %sext, 30, !insn.addr !432
  %3 = add i64 %2, ptrtoint (i32** @global_var_36e0 to i64), !insn.addr !432
  %4 = inttoptr i64 %3 to i32*, !insn.addr !432
  %5 = load i32, i32* %4, align 4, !insn.addr !432
  %6 = zext i32 %5 to i64, !insn.addr !432
  ret i64 %6, !insn.addr !433

dec_label_pc_1db8:                                ; preds = %dec_label_pc_1da1
  ret i64 4294967295, !insn.addr !434
}

define i64 @static_local(i64 %arg1) local_unnamed_addr {
dec_label_pc_1dbe:
  %0 = trunc i64 %arg1 to i32, !insn.addr !435
  %1 = icmp eq i32 %0, 0, !insn.addr !435
  %2 = icmp eq i1 %1, false, !insn.addr !436
  %spec.select = select i1 %2, i64 0, i64 ptrtoint (i32* @global_var_6035 to i64)
  %3 = trunc i64 %spec.select to i32, !insn.addr !437
  store i32 %3, i32* bitcast (i64* @global_var_6034 to i32*), align 8, !insn.addr !437
  ret i64 %spec.select, !insn.addr !438

; uselistorder directives
  uselistorder i64 %spec.select, { 1, 0 }
}

define i64 @call_static_func(i64 %arg1) local_unnamed_addr {
dec_label_pc_1ddb:
  %factor = mul i64 %arg1, 2
  %0 = and i64 %factor, 4294967294, !insn.addr !439
  %1 = or i64 %0, 1, !insn.addr !439
  ret i64 %1, !insn.addr !440
}

define i64 @access_extern_global() local_unnamed_addr {
dec_label_pc_1de4:
  %0 = load i32, i32* inttoptr (i64 24608 to i32*), align 32, !insn.addr !441
  %1 = add i32 %0, 100, !insn.addr !442
  %2 = zext i32 %1 to i64, !insn.addr !442
  ret i64 %2, !insn.addr !443
}

define i64 @call_extern_func() local_unnamed_addr {
dec_label_pc_1df2:
  %0 = call i64 @extern_function(i64 5), !insn.addr !444
  ret i64 %0, !insn.addr !445
}

define i64 @read_const_data() local_unnamed_addr {
dec_label_pc_1e09:
  ret i64 ptrtoint (i64* @global_var_6046 to i64), !insn.addr !446
}

define i64 @access_bss_var() local_unnamed_addr {
dec_label_pc_1e1c:
  ret i64 0, !insn.addr !447
}

define i64 @access_bss_buffer() local_unnamed_addr {
dec_label_pc_1e26:
  ret i64 0, !insn.addr !448
}

define i64 @global_struct_access() local_unnamed_addr {
dec_label_pc_1e30:
  ret i64 30, !insn.addr !449

; uselistorder directives
  uselistorder i64 30, { 0, 1, 4, 2, 3 }
}

define i64 @set_file_static(i64 %arg1) local_unnamed_addr {
dec_label_pc_1e3a:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg1 to i32, !insn.addr !450
  store i32 %2, i32* @global_var_6010, align 4, !insn.addr !450
  ret i64 %1, !insn.addr !451
}

define i64 @get_file_static() local_unnamed_addr {
dec_label_pc_1e45:
  %0 = load i32, i32* @global_var_6010, align 4, !insn.addr !452
  %1 = zext i32 %0 to i64, !insn.addr !452
  ret i64 %1, !insn.addr !453
}

define i64 @set_global_callback(i64 %arg1) local_unnamed_addr {
dec_label_pc_1e50:
  %0 = alloca i64
  %1 = load i64, i64* %0
  store i64 %arg1, i64* @global_var_6038, align 8, !insn.addr !454
  ret i64 %1, !insn.addr !455
}

define i64 @call_global_callback() local_unnamed_addr {
dec_label_pc_1e5c:
  %0 = load i64, i64* @global_var_6038, align 8, !insn.addr !456
  %1 = icmp eq i64 %0, 0, !insn.addr !457
  %spec.select = select i1 %1, i64 4294967295, i64 %0
  ret i64 %spec.select, !insn.addr !458
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

define i64 @static_complex_init() local_unnamed_addr {
dec_label_pc_1e8f:
  ret i64 15, !insn.addr !464

; uselistorder directives
  uselistorder i64 15, { 0, 3, 1, 2 }
}

define i64 @tls_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_1e99:
  %0 = mul i64 %arg1, 2, !insn.addr !465
  %1 = and i64 %0, 4294967294, !insn.addr !465
  ret i64 %1, !insn.addr !466
}

define i64 @init_order_test() local_unnamed_addr {
dec_label_pc_1ea1:
  store i32 20, i32* bitcast (i64* @global_var_6030 to i32*), align 8, !insn.addr !467
  ret i64 20, !insn.addr !468

; uselistorder directives
  uselistorder i32 20, { 1, 2, 0 }
}

define i64 @test_static_global() local_unnamed_addr {
dec_label_pc_1eb5:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3438 to i8*)), !insn.addr !469
  %1 = call i64 @global_var_access(), !insn.addr !470
  %2 = and i64 %1, 4294967295, !insn.addr !471
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3460, i64 0, i64 0), i64 %2), !insn.addr !472
  %4 = load i32, i32* @global_var_6040, align 4, !insn.addr !473
  %5 = mul i32 %4, 2, !insn.addr !474
  %6 = zext i32 %5 to i64, !insn.addr !474
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3488, i64 0, i64 0), i64 %6), !insn.addr !475
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_34b0, i64 0, i64 0), i64 5), !insn.addr !476
  store i32 1, i32* bitcast (i64* @global_var_6034 to i32*), align 8, !insn.addr !477
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_31d1, i64 0, i64 0), i64 1), !insn.addr !478
  store i32 ptrtoint (i32* @global_var_6035 to i32), i32* bitcast (i64* @global_var_6034 to i32*), align 8, !insn.addr !479
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_31d1, i64 0, i64 0), i64 ptrtoint (i32* @global_var_6035 to i64)), !insn.addr !480
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_34d8, i64 0, i64 0), i64 11), !insn.addr !481
  %12 = load i32, i32* @global_var_6020, align 4, !insn.addr !482
  %13 = add i32 %12, 100, !insn.addr !483
  %14 = zext i32 %13 to i64, !insn.addr !483
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3500, i64 0, i64 0), i64 %14), !insn.addr !484
  %16 = call i64 @call_extern_func(), !insn.addr !485
  %17 = and i64 %16, 4294967295, !insn.addr !486
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3528, i64 0, i64 0), i64 %17), !insn.addr !487
  %19 = call i64 @read_const_data(), !insn.addr !488
  %20 = and i64 %19, 4294967295, !insn.addr !489
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3550, i64 0, i64 0), i64 %20), !insn.addr !490
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3578, i64 0, i64 0), i64 0), !insn.addr !491
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3598, i64 0, i64 0), i64 0), !insn.addr !492
  %24 = call i64 @global_struct_access(), !insn.addr !493
  %25 = and i64 %24, 4294967295, !insn.addr !494
  %26 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_35c0, i64 0, i64 0), i64 %25), !insn.addr !495
  store i32 50, i32* @global_var_6010, align 4, !insn.addr !496
  %27 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_31ef, i64 0, i64 0), i64 50), !insn.addr !497
  store i64 4873, i64* @global_var_6038, align 8, !insn.addr !498
  %28 = call i64 @call_global_callback(), !insn.addr !499
  %29 = and i64 %28, 4294967295, !insn.addr !500
  %30 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_35e8, i64 0, i64 0), i64 %29), !insn.addr !501
  %31 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3610, i64 0, i64 0), i64 100), !insn.addr !502
  %32 = call i64 @static_complex_init(), !insn.addr !503
  %33 = and i64 %32, 4294967295, !insn.addr !504
  %34 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_3638, i64 0, i64 0), i64 %33), !insn.addr !505
  %35 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_320c, i64 0, i64 0), i64 20), !insn.addr !506
  %36 = call i64 @init_order_test(), !insn.addr !507
  %37 = and i64 %36, 4294967295, !insn.addr !508
  %38 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3660, i64 0, i64 0), i64 %37), !insn.addr !509
  %39 = sext i32 %38 to i64, !insn.addr !509
  ret i64 %39, !insn.addr !510

; uselistorder directives
  uselistorder i64 100, { 1, 0 }
  uselistorder i64 50, { 1, 0 }
  uselistorder i32* @global_var_6010, { 2, 1, 0 }
  uselistorder i32 50, { 1, 0, 2 }
  uselistorder i32 100, { 0, 2, 1 }
  uselistorder i64 ptrtoint (i32* @global_var_6035 to i64), { 1, 0 }
  uselistorder i32 2, { 0, 1, 4, 2, 3 }
  uselistorder i32* @global_var_6040, { 2, 1, 0 }
}

define i64 @memop_memset(i64* %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2112:
  %storemerge.reg2mem = alloca i64, !insn.addr !511
  %0 = icmp eq i64* %arg1, null, !insn.addr !512
  %1 = icmp eq i64 %arg2, 0, !insn.addr !513
  %or.cond = or i1 %0, %1
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !514
  br i1 %or.cond, label %dec_label_pc_2134, label %dec_label_pc_2129, !insn.addr !514

dec_label_pc_2129:                                ; preds = %dec_label_pc_2112
  %2 = ptrtoint i64* %arg1 to i64
  %3 = trunc i64 %arg3 to i32, !insn.addr !515
  %4 = trunc i64 %arg2 to i32, !insn.addr !515
  %5 = call i64* @memset(i64* nonnull %arg1, i32 %3, i32 %4), !insn.addr !515
  %6 = urem i64 %2, 256, !insn.addr !516
  store i64 %6, i64* %storemerge.reg2mem, !insn.addr !516
  br label %dec_label_pc_2134, !insn.addr !516

dec_label_pc_2134:                                ; preds = %dec_label_pc_2112, %dec_label_pc_2129
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !517

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg2, { 1, 0 }
  uselistorder i64* %arg1, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2134, { 1, 0 }
}

define i64 @memop_memcpy(i64* %arg1, i32* %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2143:
  %storemerge.reg2mem = alloca i64, !insn.addr !518
  %0 = icmp eq i32* %arg2, null, !insn.addr !519
  %1 = icmp eq i64 %arg3, 0, !insn.addr !520
  %2 = or i1 %0, %1
  %3 = icmp eq i1 %2, false, !insn.addr !521
  %4 = icmp eq i1 %3, false, !insn.addr !522
  %5 = icmp eq i64* %arg1, null, !insn.addr !523
  %or.cond = or i1 %5, %4
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !522
  br i1 %or.cond, label %dec_label_pc_2178, label %dec_label_pc_2168, !insn.addr !522

dec_label_pc_2168:                                ; preds = %dec_label_pc_2143
  %6 = ptrtoint i64* %arg1 to i64
  %7 = bitcast i32* %arg2 to i64*, !insn.addr !524
  %8 = trunc i64 %arg3 to i32, !insn.addr !524
  %9 = call i64* @memcpy(i64* nonnull %arg1, i64* %7, i32 %8), !insn.addr !524
  %10 = and i64 %arg3, -4, !insn.addr !525
  %11 = add i64 %6, -4, !insn.addr !526
  %12 = add i64 %11, %10, !insn.addr !526
  %13 = inttoptr i64 %12 to i32*, !insn.addr !526
  %14 = load i32, i32* %13, align 4, !insn.addr !526
  %15 = zext i32 %14 to i64, !insn.addr !526
  store i64 %15, i64* %storemerge.reg2mem, !insn.addr !526
  br label %dec_label_pc_2178, !insn.addr !526

dec_label_pc_2178:                                ; preds = %dec_label_pc_2143, %dec_label_pc_2168
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !527

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %arg1, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2178, { 1, 0 }
}

define i64 @memop_memmove(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2186:
  %storemerge.reg2mem = alloca i64, !insn.addr !528
  %0 = icmp eq i64* %arg1, null, !insn.addr !529
  %1 = icmp ult i64 %arg2, 2
  %or.cond = or i1 %0, %1
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !530
  br i1 %or.cond, label %dec_label_pc_21ad, label %dec_label_pc_2199, !insn.addr !530

dec_label_pc_2199:                                ; preds = %dec_label_pc_2186
  %2 = ptrtoint i64* %arg1 to i64
  %3 = add i64 %2, 1, !insn.addr !531
  %4 = inttoptr i64 %3 to i64*, !insn.addr !532
  %5 = trunc i64 %arg2 to i32
  %6 = add i32 %5, -1, !insn.addr !532
  %7 = call i64* @memmove(i64* %4, i64* nonnull %arg1, i32 %6), !insn.addr !532
  %8 = inttoptr i64 %3 to i8*, !insn.addr !533
  %9 = load i8, i8* %8, align 1, !insn.addr !533
  %10 = sext i8 %9 to i64, !insn.addr !533
  store i64 %10, i64* %storemerge.reg2mem, !insn.addr !533
  br label %dec_label_pc_21ad, !insn.addr !533

dec_label_pc_21ad:                                ; preds = %dec_label_pc_2186, %dec_label_pc_2199
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !534

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg2, { 1, 0 }
  uselistorder i64* %arg1, { 0, 2, 1 }
  uselistorder label %dec_label_pc_21ad, { 1, 0 }
}

define i64 @memop_memcmp(i32* %arg1, i32* %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_21bc:
  %0 = icmp eq i32* %arg2, null, !insn.addr !535
  %1 = icmp eq i64 %arg3, 0, !insn.addr !536
  %2 = or i1 %0, %1
  %3 = icmp eq i1 %2, false, !insn.addr !537
  %4 = icmp eq i1 %3, false, !insn.addr !538
  %5 = icmp eq i32* %arg1, null, !insn.addr !539
  %or.cond = or i1 %5, %4
  br i1 %or.cond, label %dec_label_pc_21ee, label %dec_label_pc_21d5, !insn.addr !538

dec_label_pc_21d5:                                ; preds = %dec_label_pc_21bc
  %6 = bitcast i32* %arg1 to i64*, !insn.addr !540
  %7 = bitcast i32* %arg2 to i64*, !insn.addr !540
  %8 = trunc i64 %arg3 to i32, !insn.addr !540
  %9 = call i32 @memcmp(i64* %6, i64* %7, i32 %8), !insn.addr !540
  %10 = ashr i32 %9, 31, !insn.addr !541
  %11 = icmp slt i32 %9, 1
  %12 = select i1 %11, i32 %10, i32 1, !insn.addr !542
  %13 = zext i32 %12 to i64, !insn.addr !542
  ret i64 %13, !insn.addr !543

dec_label_pc_21ee:                                ; preds = %dec_label_pc_21bc
  ret i64 0, !insn.addr !544
}

define i64 @memop_bzero(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_21f4:
  %0 = icmp eq i64* %arg1, null, !insn.addr !545
  br i1 %0, label %dec_label_pc_2213, label %dec_label_pc_21fd, !insn.addr !546

dec_label_pc_21fd:                                ; preds = %dec_label_pc_21f4
  %1 = ptrtoint i64* %arg1 to i64
  %2 = trunc i64 %arg2 to i32, !insn.addr !547
  %3 = call i64* @memset(i64* nonnull %arg1, i32 0, i32 %2), !insn.addr !547
  %4 = urem i64 %1, 256, !insn.addr !548
  ret i64 %4, !insn.addr !549

dec_label_pc_2213:                                ; preds = %dec_label_pc_21f4
  ret i64 4294967295, !insn.addr !550

; uselistorder directives
  uselistorder i64* (i64*, i32, i32)* @memset, { 1, 0, 2 }
  uselistorder i64* null, { 1, 2, 0, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17 }
  uselistorder i64* %arg1, { 0, 2, 1 }
}

define i64 @memop_bcopy(i32* %arg1, i32* %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_2219:
  %storemerge.reg2mem = alloca i64, !insn.addr !551
  %0 = icmp eq i32* %arg2, null, !insn.addr !552
  %1 = icmp eq i64 %arg3, 0, !insn.addr !553
  %2 = or i1 %0, %1
  %3 = icmp eq i1 %2, false, !insn.addr !554
  %4 = icmp eq i1 %3, false, !insn.addr !555
  %5 = icmp eq i32* %arg1, null, !insn.addr !556
  %or.cond = or i1 %5, %4
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !555
  br i1 %or.cond, label %dec_label_pc_2244, label %dec_label_pc_2236, !insn.addr !555

dec_label_pc_2236:                                ; preds = %dec_label_pc_2219
  %6 = ptrtoint i32* %arg2 to i64
  %7 = bitcast i32* %arg2 to i64*, !insn.addr !557
  %8 = bitcast i32* %arg1 to i64*, !insn.addr !557
  %9 = trunc i64 %arg3 to i32, !insn.addr !557
  %10 = call i64* @memmove(i64* %7, i64* %8, i32 %9), !insn.addr !557
  %11 = urem i64 %6, 256, !insn.addr !558
  store i64 %11, i64* %storemerge.reg2mem, !insn.addr !558
  br label %dec_label_pc_2244, !insn.addr !558

dec_label_pc_2244:                                ; preds = %dec_label_pc_2219, %dec_label_pc_2236
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !559

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* (i64*, i64*, i32)* @memmove, { 1, 0, 2 }
  uselistorder i32* %arg2, { 0, 2, 1 }
  uselistorder i32* %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_2244, { 1, 0 }
}

define i64 @memop_unaligned_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_2253:
  %0 = icmp eq i64 %arg1, 0, !insn.addr !560
  br i1 %0, label %dec_label_pc_2260, label %dec_label_pc_225c, !insn.addr !561

dec_label_pc_225c:                                ; preds = %dec_label_pc_2253
  %1 = add i64 %arg1, 1, !insn.addr !562
  %2 = inttoptr i64 %1 to i32*, !insn.addr !562
  %3 = load i32, i32* %2, align 4, !insn.addr !562
  %4 = zext i32 %3 to i64, !insn.addr !562
  ret i64 %4, !insn.addr !563

dec_label_pc_2260:                                ; preds = %dec_label_pc_2253
  ret i64 4294967295, !insn.addr !564

; uselistorder directives
  uselistorder i64 1, { 2, 3, 1, 0, 4, 5, 6, 7 }
}

define i64 @memop_memory_barrier(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2266:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i32* %arg1, null, !insn.addr !565
  br i1 %2, label %dec_label_pc_227c, label %dec_label_pc_226f, !insn.addr !566

dec_label_pc_226f:                                ; preds = %dec_label_pc_2266
  %3 = mul i64 %1, 2, !insn.addr !567
  %4 = and i64 %3, 4294967294, !insn.addr !567
  ret i64 %4, !insn.addr !568

dec_label_pc_227c:                                ; preds = %dec_label_pc_2266
  ret i64 4294967295, !insn.addr !569

; uselistorder directives
  uselistorder i64 4294967294, { 4, 8, 6, 0, 1, 2, 3, 5, 7, 9 }
  uselistorder i64 2, { 0, 6, 1, 2, 7, 8, 3, 4, 5 }
  uselistorder i32* null, { 2, 0, 3, 1, 4, 5 }
}

define i64 @test_memory_op_functions() local_unnamed_addr {
dec_label_pc_2282:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_-404 = alloca i32, align 4
  %stack_var_-305 = alloca i32, align 4
  %stack_var_-309 = alloca i32, align 4
  %stack_var_-301 = alloca i64, align 8
  %stack_var_-388 = alloca i32, align 4
  %stack_var_-400 = alloca i32, align 4
  %stack_var_-291 = alloca i64, align 8
  %stack_var_-280 = alloca i64, align 8
  %stack_var_-344 = alloca i64, align 8
  %stack_var_-376 = alloca i32, align 4
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !570
  %3 = call i32 @puts(i8* bitcast (i8** @global_var_3688 to i8*)), !insn.addr !571
  store i32 10, i32* %stack_var_-376, align 4, !insn.addr !572
  store i64 0, i64* %stack_var_-344, align 8, !insn.addr !573
  %4 = call i64 @memop_memset(i64* nonnull %stack_var_-280, i64 10, i64 65), !insn.addr !574
  %5 = and i64 %4, 4294967295, !insn.addr !575
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3228, i64 0, i64 0), i64 %5), !insn.addr !576
  %7 = call i64 @memop_memcpy(i64* nonnull %stack_var_-344, i32* nonnull %stack_var_-376, i64 20), !insn.addr !577
  %8 = and i64 %7, 4294967295, !insn.addr !578
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3239, i64 0, i64 0), i64 %8), !insn.addr !579
  store i64 8245905578810697032, i64* %stack_var_-291, align 8, !insn.addr !580
  %10 = call i64 @memop_memmove(i64* nonnull %stack_var_-291, i64 10), !insn.addr !581
  %11 = trunc i64 %10 to i8, !insn.addr !582
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_324a, i64 0, i64 0), i8 %11), !insn.addr !582
  store i32 1, i32* %stack_var_-400, align 4, !insn.addr !583
  store i32 1, i32* %stack_var_-388, align 4, !insn.addr !584
  %13 = call i64 @memop_memcmp(i32* nonnull %stack_var_-400, i32* nonnull %stack_var_-388, i64 12, i64 %1), !insn.addr !585
  %14 = and i64 %13, 4294967295, !insn.addr !586
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_325b, i64 0, i64 0), i64 %14), !insn.addr !587
  %16 = call i64 @memop_bzero(i64* nonnull %stack_var_-301, i64 10), !insn.addr !588
  %17 = and i64 %16, 4294967295, !insn.addr !589
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_326c, i64 0, i64 0), i64 %17), !insn.addr !590
  store i32 67305985, i32* %stack_var_-309, align 4, !insn.addr !591
  store i32 0, i32* %stack_var_-305, align 4, !insn.addr !592
  %19 = call i64 @memop_bcopy(i32* nonnull %stack_var_-309, i32* nonnull %stack_var_-305, i64 4, i64 %1), !insn.addr !593
  %20 = and i64 %19, 4294967295, !insn.addr !594
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_327d, i64 0, i64 0), i64 %20), !insn.addr !595
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_328e, i64 0, i64 0), i32 67305985), !insn.addr !596
  store i32 5, i32* %stack_var_-404, align 4, !insn.addr !597
  %23 = call i64 @memop_memory_barrier(i32* nonnull %stack_var_-404, i32 5), !insn.addr !598
  %24 = and i64 %23, 4294967295, !insn.addr !599
  %25 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_32a1, i64 0, i64 0), i64 %24), !insn.addr !600
  %26 = call i64 @__readfsqword(i64 40), !insn.addr !601
  %27 = sub i64 %2, %26, !insn.addr !601
  %28 = icmp eq i64 %27, 0, !insn.addr !601
  %29 = icmp eq i1 %28, false, !insn.addr !602
  br i1 %29, label %dec_label_pc_24aa, label %dec_label_pc_24a2, !insn.addr !602

dec_label_pc_24a2:                                ; preds = %dec_label_pc_2282
  ret i64 %27, !insn.addr !603

dec_label_pc_24aa:                                ; preds = %dec_label_pc_2282
  call void @__stack_chk_fail(), !insn.addr !604
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !604

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64 ptrtoint (i32* @0 to i64), { 1, 2, 3, 4, 5, 6, 0 }
  uselistorder void ()* @__stack_chk_fail, { 3, 4, 5, 0, 1, 2, 6 }
  uselistorder i1 false, { 3, 4, 0, 5, 1, 6, 2, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25 }
  uselistorder i64 4, { 9, 10, 0, 1, 2, 11, 12, 13, 3, 4, 5, 6, 14, 7, 8, 15 }
  uselistorder i32 0, { 15, 7, 16, 8, 17, 9, 18, 2, 0, 3, 1, 4, 5, 6, 10, 11, 12, 13, 14 }
  uselistorder i64 20, { 2, 3, 0, 4, 7, 5, 6, 1 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 49 }
  uselistorder i64 10, { 2, 3, 4, 5, 6, 7, 1, 8, 9, 0 }
  uselistorder i32 10, { 1, 0, 2 }
  uselistorder i32 (i8*)* @puts, { 3, 2, 1, 0, 4 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_24af:
  %0 = call i64 @test_stack_memory(), !insn.addr !605
  %1 = call i64 @test_heap_memory(), !insn.addr !606
  %2 = call i64 @test_static_global(), !insn.addr !607
  %3 = call i64 @test_memory_op_functions(), !insn.addr !608
  ret i64 0, !insn.addr !609

; uselistorder directives
  uselistorder i64 0, { 15, 139, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 137, 140, 141, 16, 142, 143, 20, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 129, 69, 70, 130, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 144, 145, 17, 18, 37, 146, 89, 90, 91, 92, 93, 94, 95, 96, 147, 97, 98, 138, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 0, 148, 109, 110, 1, 149, 38, 150, 151, 152, 153, 154, 155, 2, 156, 159, 160, 157, 158, 3, 4, 5, 6, 161, 7, 8, 9, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 10, 11, 12, 13, 162, 19, 14, 163, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 131, 132, 133, 134, 135, 136 }
}

define i64 @extern_function(i64 %arg1) local_unnamed_addr {
dec_label_pc_24e9:
  %0 = mul i64 %arg1, 3, !insn.addr !610
  %1 = and i64 %0, 4294967295, !insn.addr !610
  ret i64 %1, !insn.addr !611

; uselistorder directives
  uselistorder i64 4294967295, { 27, 28, 29, 30, 31, 32, 33, 19, 20, 0, 21, 1, 2, 3, 34, 35, 36, 37, 38, 39, 40, 22, 24, 26, 23, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 4, 5, 25, 6, 51, 7, 8, 52, 9, 10, 11, 53, 54, 12, 55, 13, 14, 56, 15, 57, 16, 58, 59, 60, 61, 62, 17, 63, 18, 64, 65, 66 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_24f4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !612

; uselistorder directives
  uselistorder i32 1, { 8, 55, 56, 57, 58, 59, 116, 118, 60, 61, 62, 123, 122, 121, 120, 119, 117, 115, 114, 113, 112, 7, 6, 11, 64, 63, 12, 13, 14, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 131, 80, 81, 82, 5, 4, 3, 84, 83, 85, 54, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 124, 111, 17, 16, 15, 18, 2, 96, 19, 132, 97, 21, 20, 23, 22, 32, 31, 30, 29, 28, 27, 26, 25, 24, 33, 34, 133, 98, 37, 36, 35, 134, 38, 99, 42, 41, 40, 39, 135, 100, 44, 43, 101, 102, 103, 104, 105, 106, 107, 108, 109, 136, 110, 125, 47, 46, 45, 137, 126, 49, 48, 127, 50, 10, 1, 129, 128, 52, 51, 9, 0, 130, 53 }
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
!55 = !{i64 4940}
!56 = !{i64 4964}
!57 = !{i64 4965}
!58 = !{i64 4974}
!59 = !{i64 4977}
!60 = !{i64 4982}
!61 = !{i64 4993}
!62 = !{i64 5000}
!63 = !{i64 5002}
!64 = !{i64 5003}
!65 = !{i64 5007}
!66 = !{i64 5014}
!67 = !{i64 5031}
!68 = !{i64 5033}
!69 = !{i64 5036}
!70 = !{i64 5040}
!71 = !{i64 5046}
!72 = !{i64 5064}
!73 = !{i64 5073}
!74 = !{i64 5048}
!75 = !{i64 5082}
!76 = !{i64 5083}
!77 = !{i64 5088}
!78 = !{i64 5100}
!79 = !{i64 5115}
!80 = !{i64 5118}
!81 = !{i64 5124}
!82 = !{i64 5096}
!83 = !{i64 5133}
!84 = !{i64 5148}
!85 = !{i64 5157}
!86 = !{i64 5186}
!87 = !{i64 5191}
!88 = !{i64 5210}
!89 = !{i64 5215}
!90 = !{i64 5218}
!91 = !{i64 5224}
!92 = !{i64 5228}
!93 = !{i64 5231}
!94 = !{i64 5233}
!95 = !{i64 5235}
!96 = !{i64 5238}
!97 = !{i64 5240}
!98 = !{i64 5242}
!99 = !{i64 5244}
!100 = !{i64 5251}
!101 = !{i64 5260}
!102 = !{i64 5263}
!103 = !{i64 5271}
!104 = !{i64 5276}
!105 = !{i64 5288}
!106 = !{i64 5303}
!107 = !{i64 5305}
!108 = !{i64 5284}
!109 = !{i64 5316}
!110 = !{i64 5331}
!111 = !{i64 5369}
!112 = !{i64 5340}
!113 = !{i64 5374}
!114 = !{i64 5388}
!115 = !{i64 5393}
!116 = !{i64 5417}
!117 = !{i64 5403}
!118 = !{i64 5408}
!119 = !{i64 5410}
!120 = !{i64 5413}
!121 = !{i64 5419}
!122 = !{i64 5423}
!123 = !{i64 5426}
!124 = !{i64 5428}
!125 = !{i64 5430}
!126 = !{i64 5432}
!127 = !{i64 5439}
!128 = !{i64 5448}
!129 = !{i64 5451}
!130 = !{i64 5459}
!131 = !{i64 5473}
!132 = !{i64 5489}
!133 = !{i64 5516}
!134 = !{i64 5526}
!135 = !{i64 5531}
!136 = !{i64 5550}
!137 = !{i64 5577}
!138 = !{i64 5604}
!139 = !{i64 5631}
!140 = !{i64 5641}
!141 = !{i64 5646}
!142 = !{i64 5665}
!143 = !{i64 5675}
!144 = !{i64 5680}
!145 = !{i64 5699}
!146 = !{i64 5709}
!147 = !{i64 5714}
!148 = !{i64 5733}
!149 = !{i64 5760}
!150 = !{i64 5769}
!151 = !{i64 5770}
!152 = !{i64 5784}
!153 = !{i64 5789}
!154 = !{i64 5792}
!155 = !{i64 5775}
!156 = !{i64 5799}
!157 = !{i64 5808}
!158 = !{i64 5811}
!159 = !{i64 5814}
!160 = !{i64 5818}
!161 = !{i64 5821}
!162 = !{i64 5825}
!163 = !{i64 5828}
!164 = !{i64 5830}
!165 = !{i64 5832}
!166 = !{i64 5834}
!167 = !{i64 5837}
!168 = !{i64 5845}
!169 = !{i64 5853}
!170 = !{i64 5860}
!171 = !{i64 5868}
!172 = !{i64 5873}
!173 = !{i64 5876}
!174 = !{i64 5883}
!175 = !{i64 5858}
!176 = !{i64 5888}
!177 = !{i64 5890}
!178 = !{i64 5894}
!179 = !{i64 5899}
!180 = !{i64 5901}
!181 = !{i64 5905}
!182 = !{i64 5908}
!183 = !{i64 5910}
!184 = !{i64 5915}
!185 = !{i64 5918}
!186 = !{i64 5933}
!187 = !{i64 5943}
!188 = !{i64 5948}
!189 = !{i64 5951}
!190 = !{i64 5960}
!191 = !{i64 5966}
!192 = !{i64 5973}
!193 = !{i64 5980}
!194 = !{i64 5987}
!195 = !{i64 6002}
!196 = !{i64 6010}
!197 = !{i64 6013}
!198 = !{i64 6015}
!199 = !{i64 6022}
!200 = !{i64 6029}
!201 = !{i64 6036}
!202 = !{i64 6043}
!203 = !{i64 6055}
!204 = !{i64 6061}
!205 = !{i64 6069}
!206 = !{i64 6073}
!207 = !{i64 6083}
!208 = !{i64 6099}
!209 = !{i64 6113}
!210 = !{i64 6118}
!211 = !{i64 6121}
!212 = !{i64 6128}
!213 = !{i64 6150}
!214 = !{i64 6141}
!215 = !{i64 6143}
!216 = !{i64 6146}
!217 = !{i64 6152}
!218 = !{i64 6156}
!219 = !{i64 6159}
!220 = !{i64 6161}
!221 = !{i64 6163}
!222 = !{i64 6166}
!223 = !{i64 6169}
!224 = !{i64 6177}
!225 = !{i64 6185}
!226 = !{i64 6197}
!227 = !{i64 6202}
!228 = !{i64 6205}
!229 = !{i64 6190}
!230 = !{i64 6210}
!231 = !{i64 6213}
!232 = !{i64 6221}
!233 = !{i64 6229}
!234 = !{i64 6247}
!235 = !{i64 6252}
!236 = !{i64 6256}
!237 = !{i64 6259}
!238 = !{i64 6264}
!239 = !{i64 6275}
!240 = !{i64 6280}
!241 = !{i64 6284}
!242 = !{i64 6287}
!243 = !{i64 6289}
!244 = !{i64 6295}
!245 = !{i64 6303}
!246 = !{i64 6314}
!247 = !{i64 6318}
!248 = !{i64 6328}
!249 = !{i64 6337}
!250 = !{i64 6360}
!251 = !{i64 6362}
!252 = !{i64 6365}
!253 = !{i64 6370}
!254 = !{i64 6374}
!255 = !{i64 6379}
!256 = !{i64 6382}
!257 = !{i64 6394}
!258 = !{i64 6397}
!259 = !{i64 6400}
!260 = !{i64 6410}
!261 = !{i64 6415}
!262 = !{i64 6418}
!263 = !{i64 6420}
!264 = !{i64 6422}
!265 = !{i64 6430}
!266 = !{i64 6433}
!267 = !{i64 6435}
!268 = !{i64 6440}
!269 = !{i64 6442}
!270 = !{i64 6445}
!271 = !{i64 6455}
!272 = !{i64 6457}
!273 = !{i64 6461}
!274 = !{i64 6464}
!275 = !{i64 6469}
!276 = !{i64 6473}
!277 = !{i64 6478}
!278 = !{i64 6481}
!279 = !{i64 6489}
!280 = !{i64 6516}
!281 = !{i64 6521}
!282 = !{i64 6524}
!283 = !{i64 6526}
!284 = !{i64 6528}
!285 = !{i64 6536}
!286 = !{i64 6545}
!287 = !{i64 6546}
!288 = !{i64 6561}
!289 = !{i64 6566}
!290 = !{i64 6569}
!291 = !{i64 6579}
!292 = !{i64 6584}
!293 = !{i64 6593}
!294 = !{i64 6598}
!295 = !{i64 6602}
!296 = !{i64 6606}
!297 = !{i64 6611}
!298 = !{i64 6609}
!299 = !{i64 6616}
!300 = !{i64 6618}
!301 = !{i64 6620}
!302 = !{i64 6622}
!303 = !{i64 6627}
!304 = !{i64 6631}
!305 = !{i64 6639}
!306 = !{i64 6652}
!307 = !{i64 6656}
!308 = !{i64 6658}
!309 = !{i64 6663}
!310 = !{i64 6667}
!311 = !{i64 6670}
!312 = !{i64 6672}
!313 = !{i64 6680}
!314 = !{i64 6690}
!315 = !{i64 6699}
!316 = !{i64 6713}
!317 = !{i64 6718}
!318 = !{i64 6721}
!319 = !{i64 6704}
!320 = !{i64 6725}
!321 = !{i64 6734}
!322 = !{i64 6737}
!323 = !{i64 6741}
!324 = !{i64 6744}
!325 = !{i64 6748}
!326 = !{i64 6751}
!327 = !{i64 6753}
!328 = !{i64 6755}
!329 = !{i64 6758}
!330 = !{i64 6762}
!331 = !{i64 6770}
!332 = !{i64 6780}
!333 = !{i64 6785}
!334 = !{i64 6788}
!335 = !{i64 6815}
!336 = !{i64 6823}
!337 = !{i64 6828}
!338 = !{i64 6831}
!339 = !{i64 6839}
!340 = !{i64 6843}
!341 = !{i64 6846}
!342 = !{i64 6848}
!343 = !{i64 6850}
!344 = !{i64 6857}
!345 = !{i64 6865}
!346 = !{i64 6868}
!347 = !{i64 6873}
!348 = !{i64 6881}
!349 = !{i64 6886}
!350 = !{i64 6892}
!351 = !{i64 6900}
!352 = !{i64 6910}
!353 = !{i64 6915}
!354 = !{i64 6918}
!355 = !{i64 6926}
!356 = !{i64 6931}
!357 = !{i64 6933}
!358 = !{i64 6936}
!359 = !{i64 6940}
!360 = !{i64 6946}
!361 = !{i64 6948}
!362 = !{i64 6950}
!363 = !{i64 6958}
!364 = !{i64 6974}
!365 = !{i64 6997}
!366 = !{i64 7007}
!367 = !{i64 7012}
!368 = !{i64 7031}
!369 = !{i64 7041}
!370 = !{i64 7046}
!371 = !{i64 7065}
!372 = !{i64 7075}
!373 = !{i64 7080}
!374 = !{i64 7099}
!375 = !{i64 7109}
!376 = !{i64 7114}
!377 = !{i64 7133}
!378 = !{i64 7143}
!379 = !{i64 7148}
!380 = !{i64 7167}
!381 = !{i64 7172}
!382 = !{i64 7186}
!383 = !{i64 7191}
!384 = !{i64 7210}
!385 = !{i64 7215}
!386 = !{i64 7220}
!387 = !{i64 7223}
!388 = !{i64 7225}
!389 = !{i64 7229}
!390 = !{i64 7234}
!391 = !{i64 7239}
!392 = !{i64 7249}
!393 = !{i64 7254}
!394 = !{i64 7273}
!395 = !{i64 7283}
!396 = !{i64 7288}
!397 = !{i64 7307}
!398 = !{i64 7317}
!399 = !{i64 7322}
!400 = !{i64 7341}
!401 = !{i64 7363}
!402 = !{i64 7368}
!403 = !{i64 7373}
!404 = !{i64 7375}
!405 = !{i64 7377}
!406 = !{i64 7395}
!407 = !{i64 7400}
!408 = !{i64 7406}
!409 = !{i64 7409}
!410 = !{i64 7411}
!411 = !{i64 7414}
!412 = !{i64 7420}
!413 = !{i64 7441}
!414 = !{i64 7446}
!415 = !{i64 7448}
!416 = !{i64 7472}
!417 = !{i64 7482}
!418 = !{i64 7507}
!419 = !{i64 7512}
!420 = !{i64 7521}
!421 = !{i64 7531}
!422 = !{i64 7540}
!423 = !{i64 7546}
!424 = !{i64 7547}
!425 = !{i64 7565}
!426 = !{i64 7571}
!427 = !{i64 7576}
!428 = !{i64 7582}
!429 = !{i64 7584}
!430 = !{i64 7589}
!431 = !{i64 7592}
!432 = !{i64 7604}
!433 = !{i64 7607}
!434 = !{i64 7613}
!435 = !{i64 7623}
!436 = !{i64 7625}
!437 = !{i64 7636}
!438 = !{i64 7642}
!439 = !{i64 7647}
!440 = !{i64 7651}
!441 = !{i64 7656}
!442 = !{i64 7662}
!443 = !{i64 7665}
!444 = !{i64 7679}
!445 = !{i64 7688}
!446 = !{i64 7707}
!447 = !{i64 7717}
!448 = !{i64 7727}
!449 = !{i64 7737}
!450 = !{i64 7742}
!451 = !{i64 7748}
!452 = !{i64 7753}
!453 = !{i64 7759}
!454 = !{i64 7764}
!455 = !{i64 7771}
!456 = !{i64 7776}
!457 = !{i64 7783}
!458 = !{i64 7798}
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
!548 = !{i64 8718}
!549 = !{i64 8722}
!550 = !{i64 8728}
!551 = !{i64 8729}
!552 = !{i64 8733}
!553 = !{i64 8739}
!554 = !{i64 8745}
!555 = !{i64 8747}
!556 = !{i64 8753}
!557 = !{i64 8764}
!558 = !{i64 8769}
!559 = !{i64 8773}
!560 = !{i64 8791}
!561 = !{i64 8794}
!562 = !{i64 8796}
!563 = !{i64 8799}
!564 = !{i64 8805}
!565 = !{i64 8810}
!566 = !{i64 8813}
!567 = !{i64 8825}
!568 = !{i64 8827}
!569 = !{i64 8833}
!570 = !{i64 8845}
!571 = !{i64 8871}
!572 = !{i64 8876}
!573 = !{i64 8916}
!574 = !{i64 8960}
!575 = !{i64 8965}
!576 = !{i64 8984}
!577 = !{i64 9004}
!578 = !{i64 9009}
!579 = !{i64 9028}
!580 = !{i64 9043}
!581 = !{i64 9070}
!582 = !{i64 9094}
!583 = !{i64 9099}
!584 = !{i64 9123}
!585 = !{i64 9162}
!586 = !{i64 9167}
!587 = !{i64 9186}
!588 = !{i64 9201}
!589 = !{i64 9206}
!590 = !{i64 9225}
!591 = !{i64 9230}
!592 = !{i64 9238}
!593 = !{i64 9261}
!594 = !{i64 9266}
!595 = !{i64 9285}
!596 = !{i64 9312}
!597 = !{i64 9317}
!598 = !{i64 9330}
!599 = !{i64 9335}
!600 = !{i64 9354}
!601 = !{i64 9367}
!602 = !{i64 9376}
!603 = !{i64 9385}
!604 = !{i64 9386}
!605 = !{i64 9404}
!606 = !{i64 9414}
!607 = !{i64 9424}
!608 = !{i64 9434}
!609 = !{i64 9448}
!610 = !{i64 9453}
!611 = !{i64 9456}
!612 = !{i64 9472}
