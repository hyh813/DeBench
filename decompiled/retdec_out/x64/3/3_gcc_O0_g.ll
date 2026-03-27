source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_820 = local_unnamed_addr global i64 24552
@global_var_3026 = constant [28 x i8] c"MEM-L1-01 (local_vars): %d\0A\00"
@global_var_3042 = constant [29 x i8] c"MEM-L1-02 (local_array): %d\0A\00"
@global_var_305f = constant [30 x i8] c"MEM-L1-03 (local_struct): %d\0A\00"
@global_var_3080 = constant [34 x i8] c"MEM-L1-04 (address_of_local): %d\0A\00"
@global_var_30a8 = constant [34 x i8] c"MEM-L1-05 (address_of_array): %d\0A\00"
@global_var_30d0 = constant [35 x i8] c"MEM-L2-01 (large_stack_frame): %d\0A\00"
@global_var_30f3 = constant [27 x i8] c"MEM-L2-02 (vla_stack): %d\0A\00"
@global_var_310e = constant [30 x i8] c"MEM-L2-03 (alloca_usage): %d\0A\00"
@global_var_312c = constant [29 x i8] c"MEM-L2-04 (stack_alias): %d\0A\00"
@global_var_3149 = constant [23 x i8] c"value before free: %d\0A\00"
@global_var_317e = constant [29 x i8] c"HEAP-L2-01 (heap_basic): %d\0A\00"
@global_var_319b = constant [30 x i8] c"HEAP-L2-02 (heap_calloc): %d\0A\00"
@global_var_31c0 = constant [31 x i8] c"HEAP-L2-03 (heap_realloc): %d\0A\00"
@global_var_31df = constant [29 x i8] c"HEAP-L2-04 (heap_array): %d\0A\00"
@global_var_31fc = constant [30 x i8] c"HEAP-L2-05 (heap_struct): %d\0A\00"
@global_var_321a = constant [30 x i8] c"HEAP-L2-06 (heap_nested): %d\0A\00"
@global_var_3238 = constant [35 x i8] c"HEAP-L3-01 (linked_list_heap): %d\0A\00"
@global_var_3260 = constant [38 x i8] c"HEAP-L3-02 (tree_heap_traversal): %d\0A\00"
@global_var_3286 = constant [30 x i8] c"HEAP-L3-03 (memory_leak): %d\0A\00"
@global_var_32a8 = constant [32 x i8] c"HEAP-L3-04 (dangling_pointer): \00"
@global_counter = local_unnamed_addr global i32 0
@global_array = global [10 x i32] [i32 0, i32 1, i32 2, i32 3, i32 4, i32 5, i32 6, i32 7, i32 8, i32 9]
@extern_global_var = local_unnamed_addr global i32 23
@0 = internal constant [3 x i8] c"P3\00"
@const_string = local_unnamed_addr global i8* getelementptr inbounds ([3 x i8], [3 x i8]* @0, i64 0, i64 0)
@global_var_607c = local_unnamed_addr global i64 98784247808
@bss_var = local_unnamed_addr global i32 0
@bss_buffer = local_unnamed_addr global [100 x i8] zeroinitializer
@global_point = local_unnamed_addr global i64 85899345930
@file_scope_static = local_unnamed_addr global i32 100
@global_func_ptr = local_unnamed_addr global i32 (i32)* null
@global_heap_ptr = local_unnamed_addr global i32* null
@complex_init = local_unnamed_addr global [5 x i32] [i32 1, i32 0, i32 5, i32 0, i32 9]
@global_var_3388 = constant [35 x i8] c"STM-L1-01 (global_var_access): %d\0A\00"
@global_var_33b0 = constant [33 x i8] c"STM-L1-01 (global_var_read): %d\0A\00"
@global_var_33d8 = constant [37 x i8] c"STM-L1-02 (global_array_access): %d\0A\00"
@global_var_33fd = constant [30 x i8] c"STM-L1-03 (static_local): %d\0A\00"
@global_var_3420 = constant [34 x i8] c"STM-L1-04 (call_static_func): %d\0A\00"
@global_var_3448 = constant [38 x i8] c"STM-L2-01 (access_extern_global): %d\0A\00"
@global_var_3470 = constant [34 x i8] c"STM-L2-02 (call_extern_func): %d\0A\00"
@global_var_3498 = constant [33 x i8] c"STM-L2-03 (read_const_data): %d\0A\00"
@global_var_34c0 = constant [32 x i8] c"STM-L2-04 (access_bss_var): %d\0A\00"
@global_var_34e0 = constant [35 x i8] c"STM-L2-04 (access_bss_buffer): %d\0A\00"
@global_var_3508 = constant [38 x i8] c"STM-L2-05 (global_struct_access): %d\0A\00"
@global_var_352e = constant [29 x i8] c"STM-L2-06 (file_static): %d\0A\00"
@global_var_3550 = constant [33 x i8] c"STM-L2-07 (global_func_ptr): %d\0A\00"
@global_var_3578 = constant [35 x i8] c"STM-L2-08 (global_heap_store): %d\0A\00"
@global_var_35a0 = constant [37 x i8] c"STM-L2-09 (static_complex_init): %d\0A\00"
@global_var_35c5 = constant [28 x i8] c"STM-L3-01 (tls_access): %d\0A\00"
@global_var_35e8 = constant [33 x i8] c"STM-L3-02 (init_order_test): %d\0A\00"
@global_var_3631 = constant [17 x i8] c"MEMOP-L2-01: %d\0A\00"
@global_var_3642 = constant [17 x i8] c"MEMOP-L2-02: %d\0A\00"
@global_var_3653 = constant [17 x i8] c"MEMOP-L2-03: %c\0A\00"
@global_var_3664 = constant [17 x i8] c"MEMOP-L2-04: %d\0A\00"
@global_var_3675 = constant [17 x i8] c"MEMOP-L2-05: %d\0A\00"
@global_var_3686 = constant [17 x i8] c"MEMOP-L2-06: %d\0A\00"
@global_var_3697 = constant [19 x i8] c"MEMOP-L3-01: 0x%x\0A\00"
@global_var_36aa = constant [17 x i8] c"MEMOP-L3-02: %d\0A\00"
@1 = external global i32
@global_var_60a0 = local_unnamed_addr global i8 0
@global_var_7ff = global i1 false
@global_var_3e8 = global i1 false
@2 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\88\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_3008 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @2, i64 0, i64 0)
@3 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\A0\86\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_3160 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @3, i64 0, i64 0)
@4 = internal constant [16 x i8] c"%d (\E5\AD\90\E8\BF\9B\E7\A8\8B)\0A\00"
@global_var_32c8 = constant i8* getelementptr inbounds ([16 x i8], [16 x i8]* @4, i64 0, i64 0)
@5 = internal constant [37 x i8] c"\E2\9C\93 \E5\AD\90\E8\BF\9B\E7\A8\8B\E6\AD\A3\E5\B8\B8\E9\80\80\E5\87\BA\EF\BC\8Ccode=%d\0A\00"
@global_var_32d8 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @5, i64 0, i64 0)
@6 = internal constant [65 x i8] c"\E2\9C\97 \E5\AD\90\E8\BF\9B\E7\A8\8B\E8\A2\AB\E4\BF\A1\E5\8F\B7\E7\BB\88\E6\AD\A2 (\E4\BF\A1\E5\8F\B7%d) - \E9\87\8E\E6\8C\87\E9\92\88\E5\AF\BC\E8\87\B4\E5\B4\A9\E6\BA\83\0A\00"
@global_var_3300 = constant i8* getelementptr inbounds ([65 x i8], [65 x i8]* @6, i64 0, i64 0)
@7 = internal constant [11 x i8] c"fork\E5\A4\B1\E8\B4\A5\00"
@global_var_3341 = constant i8* getelementptr inbounds ([11 x i8], [11 x i8]* @7, i64 0, i64 0)
@global_var_6158 = local_unnamed_addr global i32 0
@global_var_6159 = global i32 0
@global_var_60a6 = global i32 0
@global_var_604c = local_unnamed_addr global i32 20
@global_var_6068 = local_unnamed_addr global i32 5
@global_var_6070 = local_unnamed_addr global i32 9
@global_var_615c = local_unnamed_addr global i32 0
@8 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\9D\99\E6\80\81\E4\B8\8E\E5\85\A8\E5\B1\80\E5\86\85\E5\AD\98 ===\00"
@global_var_3360 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @8, i64 0, i64 0)
@9 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C\E5\87\BD\E6\95\B0 ===\00"
@global_var_3610 = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @9, i64 0, i64 0)

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

; uselistorder directives
  uselistorder i64 24552, { 1, 0 }
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

define i32 @function_1160(i8* %format, ...) local_unnamed_addr {
dec_label_pc_1160:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i64* @function_1170(i64* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_1170:
  %0 = call i64* @memset(i64* %s, i32 %c, i32 %n), !insn.addr !11
  ret i64* %0, !insn.addr !11
}

define i32 @function_1180(i64* %s1, i64* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_1180:
  %0 = call i32 @memcmp(i64* %s1, i64* %s2, i32 %n), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define i64* @function_1190(i32 %nmemb, i32 %size) local_unnamed_addr {
dec_label_pc_1190:
  %0 = call i64* @calloc(i32 %nmemb, i32 %size), !insn.addr !13
  ret i64* %0, !insn.addr !13
}

define i64* @function_11a0(i64* %dest, i64* %src, i32 %n) local_unnamed_addr {
dec_label_pc_11a0:
  %0 = call i64* @memcpy(i64* %dest, i64* %src, i32 %n), !insn.addr !14
  ret i64* %0, !insn.addr !14
}

define i64* @function_11b0(i32 %size) local_unnamed_addr {
dec_label_pc_11b0:
  %0 = call i64* @malloc(i32 %size), !insn.addr !15
  ret i64* %0, !insn.addr !15
}

define i64* @function_11c0(i64* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_11c0:
  %0 = call i64* @realloc(i64* %ptr, i32 %size), !insn.addr !16
  ret i64* %0, !insn.addr !16
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
  %3 = call i32 @__libc_start_main(i64 11774, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !22
  %4 = call i64 @__asm_hlt(), !insn.addr !23
  unreachable, !insn.addr !23
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1250:
  ret i64 24712, !insn.addr !24
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1280:
  ret i64 0, !insn.addr !25
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_12c0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* @global_var_60a0, align 1, !insn.addr !26
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
  store i8 1, i8* @global_var_60a0, align 1, !insn.addr !33
  ret i64 %9, !insn.addr !34

dec_label_pc_12f8:                                ; preds = %dec_label_pc_12c0
  ret i64 %1, !insn.addr !35

; uselistorder directives
  uselistorder i8* @global_var_60a0, { 1, 0 }
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

define i32 @local_vars(i32 %x) local_unnamed_addr {
dec_label_pc_131b:
  %0 = mul i32 %x, 2, !insn.addr !39
  %1 = add i32 %0, 10, !insn.addr !40
  ret i32 %1, !insn.addr !41
}

define i32 @local_array(i32 %n) local_unnamed_addr {
dec_label_pc_1342:
  %rax.0.reg2mem = alloca i32, !insn.addr !42
  %indvars.iv.reg2mem = alloca i64, !insn.addr !42
  %stack_var_-8 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !43
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !44
  %2 = add i64 %0, -48, !insn.addr !45
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_1369

dec_label_pc_1369:                                ; preds = %dec_label_pc_1369, %dec_label_pc_1342
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %3 = trunc i64 %indvars.iv.reload to i32
  %4 = mul i32 %3, %n, !insn.addr !46
  %5 = mul i64 %indvars.iv.reload, 4, !insn.addr !45
  %6 = add i64 %2, %5, !insn.addr !45
  %7 = inttoptr i64 %6 to i32*, !insn.addr !45
  store i32 %4, i32* %7, align 4, !insn.addr !45
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 10
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !47
  br i1 %exitcond, label %dec_label_pc_1385, label %dec_label_pc_1369, !insn.addr !47

dec_label_pc_1385:                                ; preds = %dec_label_pc_1369
  %8 = call i64 @__readfsqword(i64 40), !insn.addr !48
  %9 = icmp eq i64 %1, %8, !insn.addr !48
  br i1 %9, label %dec_label_pc_139c, label %dec_label_pc_1397, !insn.addr !49

dec_label_pc_1397:                                ; preds = %dec_label_pc_1385
  call void @__stack_chk_fail(), !insn.addr !50
  store i32 ptrtoint (i32* @1 to i32), i32* %rax.0.reg2mem, !insn.addr !50
  br label %dec_label_pc_139c, !insn.addr !50

dec_label_pc_139c:                                ; preds = %dec_label_pc_1397, %dec_label_pc_1385
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !51

; uselistorder directives
  uselistorder i64 %indvars.iv.reload, { 0, 2, 1 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
}

define i32 @local_struct(i32 %x) local_unnamed_addr {
dec_label_pc_139e:
  %0 = mul i32 %x, 3, !insn.addr !52
  ret i32 %0, !insn.addr !53
}

define i32 @address_of_local(i32* %out) local_unnamed_addr {
dec_label_pc_13c1:
  store i32 42, i32* %out, align 4, !insn.addr !54
  ret i32 42, !insn.addr !55
}

define i32 @address_of_array(i32* %arr) local_unnamed_addr {
dec_label_pc_13e2:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = mul i32 %2, 2, !insn.addr !56
  ret i32 %3, !insn.addr !57
}

define i32 @large_stack_frame() local_unnamed_addr {
dec_label_pc_140e:
  %0 = alloca i32
  %rax.0.reg2mem = alloca i64, !insn.addr !58
  %storemerge2.reg2mem = alloca i32, !insn.addr !58
  %1 = load i32, i32* %0
  %stack_var_-8 = alloca i64, align 8
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !59
  br i1 icmp slt (i32 ptrtoint (i1* @global_var_7ff to i32), i32 0), label %dec_label_pc_1462, label %dec_label_pc_1438.lr.ph, !insn.addr !60

dec_label_pc_1438.lr.ph:                          ; preds = %dec_label_pc_140e
  %3 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !61
  %4 = add i64 %3, -2064, !insn.addr !62
  store i32 0, i32* %storemerge2.reg2mem
  br label %dec_label_pc_1438

dec_label_pc_1438:                                ; preds = %dec_label_pc_1438.lr.ph, %dec_label_pc_1438
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %5 = sext i32 %storemerge2.reload to i64, !insn.addr !63
  %6 = trunc i32 %storemerge2.reload to i8, !insn.addr !62
  %7 = add i64 %4, %5, !insn.addr !62
  %8 = inttoptr i64 %7 to i8*, !insn.addr !62
  store i8 %6, i8* %8, align 1, !insn.addr !62
  %9 = add i32 %storemerge2.reload, 1, !insn.addr !64
  %10 = icmp sgt i32 %9, ptrtoint (i1* @global_var_7ff to i32), !insn.addr !60
  store i32 %9, i32* %storemerge2.reg2mem, !insn.addr !60
  br i1 %10, label %dec_label_pc_1462, label %dec_label_pc_1438, !insn.addr !60

dec_label_pc_1462:                                ; preds = %dec_label_pc_1438, %dec_label_pc_140e
  %11 = zext i32 %1 to i64, !insn.addr !65
  %sext = mul i64 %11, 72057594037927936
  %12 = ashr exact i64 %sext, 56, !insn.addr !66
  %13 = call i64 @__readfsqword(i64 40), !insn.addr !67
  %14 = icmp eq i64 %2, %13, !insn.addr !67
  store i64 %12, i64* %rax.0.reg2mem, !insn.addr !68
  br i1 %14, label %dec_label_pc_1480, label %dec_label_pc_147b, !insn.addr !68

dec_label_pc_147b:                                ; preds = %dec_label_pc_1462
  call void @__stack_chk_fail(), !insn.addr !69
  store i64 ptrtoint (i32* @1 to i64), i64* %rax.0.reg2mem, !insn.addr !69
  br label %dec_label_pc_1480, !insn.addr !69

dec_label_pc_1480:                                ; preds = %dec_label_pc_147b, %dec_label_pc_1462
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %15 = trunc i64 %rax.0.reload to i32, !insn.addr !70
  ret i32 %15, !insn.addr !70

; uselistorder directives
  uselistorder i32 %storemerge2.reload, { 0, 2, 1 }
  uselistorder i32* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder i32 ptrtoint (i1* @global_var_7ff to i32), { 1, 0 }
  uselistorder label %dec_label_pc_1438, { 1, 0 }
}

define i32 @vla_stack(i32 %n) local_unnamed_addr {
dec_label_pc_1482:
  %rax.0.reg2mem = alloca i32, !insn.addr !71
  %storemerge.reg2mem = alloca i32, !insn.addr !71
  %indvars.iv.reg2mem = alloca i64, !insn.addr !71
  %stack_var_-72 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !72
  %1 = icmp slt i32 %n, 1, !insn.addr !73
  %2 = icmp sgt i32 %n, ptrtoint (i1* @global_var_3e8 to i32), !insn.addr !74
  %or.cond = or i1 %1, %2
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !73
  br i1 %or.cond, label %dec_label_pc_15b0, label %dec_label_pc_1579.lr.ph, !insn.addr !73

dec_label_pc_1579.lr.ph:                          ; preds = %dec_label_pc_1482
  %3 = ptrtoint i64* %stack_var_-72 to i64, !insn.addr !75
  %4 = sext i32 %n to i64, !insn.addr !76
  %5 = mul i64 %4, 4, !insn.addr !77
  %6 = add nsw i64 %5, 15, !insn.addr !78
  %7 = udiv i64 %6, 16
  %8 = mul i64 %7, 16
  %9 = and i64 %8, -4096, !insn.addr !79
  %10 = sub i64 %3, %9, !insn.addr !80
  %11 = and i64 %8, 4080, !insn.addr !81
  %12 = sub i64 %10, %11, !insn.addr !82
  %wide.trip.count = zext i32 %n to i64
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_1579

dec_label_pc_1579:                                ; preds = %dec_label_pc_1579, %dec_label_pc_1579.lr.ph
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %13 = mul i64 %indvars.iv.reload, 4, !insn.addr !83
  %14 = add i64 %13, %12, !insn.addr !83
  %15 = inttoptr i64 %14 to i32*, !insn.addr !83
  %indvars.iv.tr = trunc i64 %indvars.iv.reload to i32
  %16 = mul i32 %indvars.iv.tr, 2
  store i32 %16, i32* %15, align 4, !insn.addr !83
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !84
  br i1 %exitcond, label %dec_label_pc_1598, label %dec_label_pc_1579, !insn.addr !84

dec_label_pc_1598:                                ; preds = %dec_label_pc_1579
  %17 = icmp slt i32 %n, 0
  %18 = zext i1 %17 to i32, !insn.addr !85
  %19 = add i32 %18, %n, !insn.addr !86
  %20 = ashr i32 %19, 1, !insn.addr !87
  %21 = sext i32 %20 to i64, !insn.addr !88
  %22 = mul i64 %21, 4, !insn.addr !89
  %23 = add i64 %12, %22, !insn.addr !89
  %24 = inttoptr i64 %23 to i32*, !insn.addr !89
  %25 = load i32, i32* %24, align 4, !insn.addr !89
  store i32 %25, i32* %storemerge.reg2mem, !insn.addr !89
  br label %dec_label_pc_15b0, !insn.addr !89

dec_label_pc_15b0:                                ; preds = %dec_label_pc_1482, %dec_label_pc_1598
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %26 = call i64 @__readfsqword(i64 40), !insn.addr !90
  %27 = icmp eq i64 %0, %26, !insn.addr !90
  store i32 %storemerge.reload, i32* %rax.0.reg2mem, !insn.addr !91
  br i1 %27, label %dec_label_pc_15c7, label %dec_label_pc_15c2, !insn.addr !91

dec_label_pc_15c2:                                ; preds = %dec_label_pc_15b0
  call void @__stack_chk_fail(), !insn.addr !92
  store i32 ptrtoint (i32* @1 to i32), i32* %rax.0.reg2mem, !insn.addr !92
  br label %dec_label_pc_15c7, !insn.addr !92

dec_label_pc_15c7:                                ; preds = %dec_label_pc_15c2, %dec_label_pc_15b0
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !93

; uselistorder directives
  uselistorder i64 %12, { 1, 0 }
  uselistorder i64 %8, { 1, 0 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %n, { 1, 0, 2, 4, 3, 5 }
  uselistorder label %dec_label_pc_15b0, { 1, 0 }
}

define i32 @alloca_usage(i32 %n) local_unnamed_addr {
dec_label_pc_15cd:
  %rax.0.reg2mem = alloca i32, !insn.addr !94
  %storemerge.reg2mem = alloca i32, !insn.addr !94
  %indvars.iv.reg2mem = alloca i64, !insn.addr !94
  %stack_var_-56 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !95
  %1 = icmp eq i32 %n, 0, !insn.addr !96
  %2 = icmp slt i32 %n, 0, !insn.addr !96
  %3 = icmp eq i1 %2, false, !insn.addr !97
  %4 = icmp eq i1 %1, false, !insn.addr !97
  %5 = icmp eq i1 %3, %4, !insn.addr !97
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !97
  br i1 %5, label %dec_label_pc_15fb, label %dec_label_pc_16dd, !insn.addr !97

dec_label_pc_15fb:                                ; preds = %dec_label_pc_15cd
  %6 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !98
  %7 = sext i32 %n to i64, !insn.addr !99
  %8 = mul i64 %7, 4, !insn.addr !100
  %9 = add nsw i64 %8, 23, !insn.addr !101
  %10 = udiv i64 %9, 16
  %11 = mul i64 %10, 16
  %12 = and i64 %11, -4096, !insn.addr !102
  %13 = and i64 %11, 4080, !insn.addr !103
  %14 = sub nsw i64 15, %13, !insn.addr !104
  %15 = sub i64 %14, %12, !insn.addr !105
  %16 = add i64 %15, %6, !insn.addr !106
  %17 = and i64 %16, -16, !insn.addr !107
  %18 = icmp sgt i32 %n, 0, !insn.addr !108
  br i1 %18, label %dec_label_pc_1692.preheader, label %dec_label_pc_16be, !insn.addr !108

dec_label_pc_1692.preheader:                      ; preds = %dec_label_pc_15fb
  %wide.trip.count = zext i32 %n to i64
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_1692

dec_label_pc_1692:                                ; preds = %dec_label_pc_1692.preheader, %dec_label_pc_1692
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %19 = mul i64 %indvars.iv.reload, 4, !insn.addr !109
  %20 = add i64 %19, %17, !insn.addr !110
  %21 = trunc i64 %indvars.iv.reload to i32
  %22 = mul i32 %21, 3, !insn.addr !111
  %23 = inttoptr i64 %20 to i32*, !insn.addr !112
  store i32 %22, i32* %23, align 4, !insn.addr !112
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !108
  br i1 %exitcond, label %dec_label_pc_16be, label %dec_label_pc_1692, !insn.addr !108

dec_label_pc_16be:                                ; preds = %dec_label_pc_1692, %dec_label_pc_15fb
  %24 = icmp slt i32 %n, 0
  %25 = zext i1 %24 to i32, !insn.addr !113
  %26 = add i32 %25, %n, !insn.addr !114
  %27 = ashr i32 %26, 1, !insn.addr !115
  %28 = sext i32 %27 to i64, !insn.addr !116
  %29 = mul i64 %28, 4, !insn.addr !117
  %30 = add i64 %17, %29, !insn.addr !118
  %31 = inttoptr i64 %30 to i32*, !insn.addr !119
  %32 = load i32, i32* %31, align 4, !insn.addr !119
  store i32 %32, i32* %storemerge.reg2mem, !insn.addr !119
  br label %dec_label_pc_16dd, !insn.addr !119

dec_label_pc_16dd:                                ; preds = %dec_label_pc_15cd, %dec_label_pc_16be
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %33 = call i64 @__readfsqword(i64 40), !insn.addr !120
  %34 = icmp eq i64 %0, %33, !insn.addr !120
  store i32 %storemerge.reload, i32* %rax.0.reg2mem, !insn.addr !121
  br i1 %34, label %dec_label_pc_16f1, label %dec_label_pc_16ec, !insn.addr !121

dec_label_pc_16ec:                                ; preds = %dec_label_pc_16dd
  call void @__stack_chk_fail(), !insn.addr !122
  store i32 ptrtoint (i32* @1 to i32), i32* %rax.0.reg2mem, !insn.addr !122
  br label %dec_label_pc_16f1, !insn.addr !122

dec_label_pc_16f1:                                ; preds = %dec_label_pc_16ec, %dec_label_pc_16dd
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !123

; uselistorder directives
  uselistorder i64 %11, { 1, 0 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %n, { 1, 0, 2, 3, 4, 6, 5 }
  uselistorder label %dec_label_pc_16dd, { 1, 0 }
  uselistorder label %dec_label_pc_1692, { 1, 0 }
}

define i32 @stack_alias(i32* %p1, i32* %p2) local_unnamed_addr {
dec_label_pc_16f3:
  %rax.0.reg2mem = alloca i32, !insn.addr !124
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !125
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !126
  %2 = icmp eq i64 %0, %1, !insn.addr !126
  store i32 20, i32* %rax.0.reg2mem, !insn.addr !127
  br i1 %2, label %dec_label_pc_1769, label %dec_label_pc_1764, !insn.addr !127

dec_label_pc_1764:                                ; preds = %dec_label_pc_16f3
  call void @__stack_chk_fail(), !insn.addr !128
  store i32 ptrtoint (i32* @1 to i32), i32* %rax.0.reg2mem, !insn.addr !128
  br label %dec_label_pc_1769, !insn.addr !128

dec_label_pc_1769:                                ; preds = %dec_label_pc_1764, %dec_label_pc_16f3
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !129
}

define void @test_stack_memory() local_unnamed_addr {
dec_label_pc_176b:
  %stack_var_-60 = alloca i32, align 4
  %stack_var_-56 = alloca i64, align 8
  %arr5_-64 = alloca [10 x i32], align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !130
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_3008 to i8*)), !insn.addr !131
  %2 = call i32 @local_vars(i32 5), !insn.addr !132
  %3 = zext i32 %2 to i64, !insn.addr !133
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_3026, i64 0, i64 0), i64 %3), !insn.addr !134
  %5 = call i32 @local_array(i32 2), !insn.addr !135
  %6 = zext i32 %5 to i64, !insn.addr !136
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3042, i64 0, i64 0), i64 %6), !insn.addr !137
  %8 = call i32 @local_struct(i32 5), !insn.addr !138
  %9 = zext i32 %8 to i64, !insn.addr !139
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_305f, i64 0, i64 0), i64 %9), !insn.addr !140
  %11 = getelementptr inbounds [10 x i32], [10 x i32]* %arr5_-64, i64 0, i64 0, !insn.addr !141
  %12 = call i32 @address_of_local(i32* nonnull %11), !insn.addr !141
  %13 = zext i32 %12 to i64, !insn.addr !142
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3080, i64 0, i64 0), i64 %13), !insn.addr !143
  store i64 1, i64* %stack_var_-56, align 8, !insn.addr !144
  %15 = bitcast i64* %stack_var_-56 to i32*, !insn.addr !145
  %16 = call i32 @address_of_array(i32* nonnull %15), !insn.addr !145
  %17 = zext i32 %16 to i64, !insn.addr !146
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_30a8, i64 0, i64 0), i64 %17), !insn.addr !147
  %19 = call i32 @large_stack_frame(), !insn.addr !148
  %20 = zext i32 %19 to i64, !insn.addr !149
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_30d0, i64 0, i64 0), i64 %20), !insn.addr !150
  %22 = call i32 @vla_stack(i32 10), !insn.addr !151
  %23 = zext i32 %22 to i64, !insn.addr !152
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_30f3, i64 0, i64 0), i64 %23), !insn.addr !153
  %25 = call i32 @alloca_usage(i32 10), !insn.addr !154
  %26 = zext i32 %25 to i64, !insn.addr !155
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_310e, i64 0, i64 0), i64 %26), !insn.addr !156
  store i32 0, i32* %stack_var_-60, align 4, !insn.addr !157
  %28 = call i32 @stack_alias(i32* nonnull %stack_var_-60, i32* nonnull %stack_var_-60), !insn.addr !158
  %29 = zext i32 %28 to i64, !insn.addr !159
  %30 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_312c, i64 0, i64 0), i64 %29), !insn.addr !160
  %31 = call i64 @__readfsqword(i64 40), !insn.addr !161
  %32 = icmp eq i64 %0, %31, !insn.addr !161
  br i1 %32, label %dec_label_pc_191b, label %dec_label_pc_1916, !insn.addr !162

dec_label_pc_1916:                                ; preds = %dec_label_pc_176b
  call void @__stack_chk_fail(), !insn.addr !163
  br label %dec_label_pc_191b, !insn.addr !163

dec_label_pc_191b:                                ; preds = %dec_label_pc_1916, %dec_label_pc_176b
  ret void, !insn.addr !164
}

define i32 @heap_basic(i32 %n) local_unnamed_addr {
dec_label_pc_191d:
  %storemerge.reg2mem = alloca i32, !insn.addr !165
  %.reg2mem2 = alloca i64, !insn.addr !165
  %.reg2mem = alloca i32, !insn.addr !165
  %0 = mul i32 %n, 4, !insn.addr !166
  %1 = call i64* @malloc(i32 %0), !insn.addr !167
  %2 = icmp eq i64* %1, null, !insn.addr !168
  %3 = icmp eq i1 %2, false, !insn.addr !169
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !169
  br i1 %3, label %dec_label_pc_1977.preheader, label %dec_label_pc_19b0, !insn.addr !169

dec_label_pc_1977.preheader:                      ; preds = %dec_label_pc_191d
  %4 = ptrtoint i64* %1 to i64, !insn.addr !167
  %5 = icmp sgt i32 %n, 0, !insn.addr !170
  store i32 0, i32* %.reg2mem, !insn.addr !170
  store i64 0, i64* %.reg2mem2, !insn.addr !170
  br i1 %5, label %dec_label_pc_1958, label %dec_label_pc_197f, !insn.addr !170

dec_label_pc_1958:                                ; preds = %dec_label_pc_1977.preheader, %dec_label_pc_1958
  %.reload3 = load i64, i64* %.reg2mem2
  %.reload = load i32, i32* %.reg2mem
  %sext = mul i64 %.reload3, 4294967296
  %6 = ashr exact i64 %sext, 30, !insn.addr !171
  %7 = add i64 %6, %4, !insn.addr !172
  %8 = mul i32 %.reload, 2, !insn.addr !173
  %9 = inttoptr i64 %7 to i32*, !insn.addr !174
  store i32 %8, i32* %9, align 4, !insn.addr !174
  %10 = add nuw nsw i64 %.reload3, 1, !insn.addr !175
  %11 = and i64 %10, 4294967295
  %12 = trunc i64 %10 to i32, !insn.addr !170
  %13 = icmp slt i32 %12, %n, !insn.addr !170
  store i32 %12, i32* %.reg2mem, !insn.addr !170
  store i64 %11, i64* %.reg2mem2, !insn.addr !170
  br i1 %13, label %dec_label_pc_1958, label %dec_label_pc_197f, !insn.addr !170

dec_label_pc_197f:                                ; preds = %dec_label_pc_1958, %dec_label_pc_1977.preheader
  %14 = icmp slt i32 %n, 0
  %15 = zext i1 %14 to i32, !insn.addr !176
  %16 = add i32 %15, %n, !insn.addr !177
  %17 = ashr i32 %16, 1, !insn.addr !178
  %18 = sext i32 %17 to i64, !insn.addr !179
  %19 = mul i64 %18, 4, !insn.addr !180
  %20 = add i64 %19, %4, !insn.addr !181
  %21 = inttoptr i64 %20 to i32*, !insn.addr !182
  %22 = load i32, i32* %21, align 4, !insn.addr !182
  call void @free(i64* %1), !insn.addr !183
  store i32 %22, i32* %storemerge.reg2mem, !insn.addr !184
  br label %dec_label_pc_19b0, !insn.addr !184

dec_label_pc_19b0:                                ; preds = %dec_label_pc_191d, %dec_label_pc_197f
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !185

; uselistorder directives
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i64* %.reg2mem2, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %n, { 2, 1, 4, 3, 0 }
  uselistorder label %dec_label_pc_19b0, { 1, 0 }
  uselistorder label %dec_label_pc_1958, { 1, 0 }
}

define i32 @heap_calloc(i32 %n) local_unnamed_addr {
dec_label_pc_19b2:
  %storemerge.reg2mem = alloca i32, !insn.addr !186
  %arr_-24.0.lcssa.reg2mem = alloca i32, !insn.addr !186
  %arr_-24.04.reg2mem = alloca i32, !insn.addr !186
  %indvars.iv.reg2mem = alloca i64, !insn.addr !186
  %0 = call i64* @calloc(i32 %n, i32 4), !insn.addr !187
  %1 = icmp eq i64* %0, null, !insn.addr !188
  %2 = icmp eq i1 %1, false, !insn.addr !189
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !189
  br i1 %2, label %dec_label_pc_1a12.preheader, label %dec_label_pc_1a29, !insn.addr !189

dec_label_pc_1a12.preheader:                      ; preds = %dec_label_pc_19b2
  %3 = icmp sgt i32 %n, 0, !insn.addr !190
  store i32 0, i32* %arr_-24.0.lcssa.reg2mem, !insn.addr !190
  br i1 %3, label %dec_label_pc_19f5.preheader, label %dec_label_pc_1a1a, !insn.addr !190

dec_label_pc_19f5.preheader:                      ; preds = %dec_label_pc_1a12.preheader
  %4 = ptrtoint i64* %0 to i64, !insn.addr !187
  %wide.trip.count = zext i32 %n to i64
  store i64 0, i64* %indvars.iv.reg2mem
  store i32 0, i32* %arr_-24.04.reg2mem
  br label %dec_label_pc_19f5

dec_label_pc_19f5:                                ; preds = %dec_label_pc_19f5.preheader, %dec_label_pc_19f5
  %arr_-24.04.reload = load i32, i32* %arr_-24.04.reg2mem
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %5 = mul i64 %indvars.iv.reload, 4, !insn.addr !191
  %6 = add i64 %5, %4, !insn.addr !192
  %7 = inttoptr i64 %6 to i32*, !insn.addr !193
  %8 = load i32, i32* %7, align 4, !insn.addr !193
  %9 = add i32 %8, %arr_-24.04.reload, !insn.addr !194
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !190
  store i32 %9, i32* %arr_-24.04.reg2mem, !insn.addr !190
  store i32 %9, i32* %arr_-24.0.lcssa.reg2mem, !insn.addr !190
  br i1 %exitcond, label %dec_label_pc_1a1a, label %dec_label_pc_19f5, !insn.addr !190

dec_label_pc_1a1a:                                ; preds = %dec_label_pc_19f5, %dec_label_pc_1a12.preheader
  %arr_-24.0.lcssa.reload = load i32, i32* %arr_-24.0.lcssa.reg2mem
  call void @free(i64* %0), !insn.addr !195
  store i32 %arr_-24.0.lcssa.reload, i32* %storemerge.reg2mem, !insn.addr !196
  br label %dec_label_pc_1a29, !insn.addr !196

dec_label_pc_1a29:                                ; preds = %dec_label_pc_19b2, %dec_label_pc_1a1a
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !197

; uselistorder directives
  uselistorder i64* %0, { 0, 2, 1 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i32* %arr_-24.04.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1a29, { 1, 0 }
  uselistorder label %dec_label_pc_19f5, { 1, 0 }
}

define i32 @heap_realloc() local_unnamed_addr {
dec_label_pc_1a2b:
  %rax.0.reg2mem = alloca i32, !insn.addr !198
  %storemerge.reg2mem = alloca i32, !insn.addr !198
  %indvars.iv.reg2mem = alloca i64, !insn.addr !198
  %.reg2mem12 = alloca i32*, !insn.addr !198
  %indvars.iv6.reg2mem = alloca i64, !insn.addr !198
  %.reg2mem = alloca i32*, !insn.addr !198
  %new_p_-24 = alloca i32*, align 8
  %0 = call i64* @malloc(i32 20), !insn.addr !199
  %1 = bitcast i64* %0 to i32*, !insn.addr !200
  store i32* %1, i32** %new_p_-24, align 8, !insn.addr !200
  %2 = icmp eq i64* %0, null, !insn.addr !201
  %3 = icmp eq i1 %2, false, !insn.addr !202
  store i32* %1, i32** %.reg2mem, !insn.addr !202
  store i64 0, i64* %indvars.iv6.reg2mem, !insn.addr !202
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !202
  br i1 %3, label %dec_label_pc_1a5f, label %dec_label_pc_1b2b, !insn.addr !202

dec_label_pc_1a5f:                                ; preds = %dec_label_pc_1a2b, %dec_label_pc_1a5f
  %indvars.iv6.reload = load i64, i64* %indvars.iv6.reg2mem
  %.reload = load i32*, i32** %.reg2mem, !insn.addr !203
  %4 = mul i64 %indvars.iv6.reload, 4, !insn.addr !204
  %5 = ptrtoint i32* %.reload to i64, !insn.addr !203
  %6 = add i64 %4, %5, !insn.addr !205
  %indvars.iv.next7 = add nuw nsw i64 %indvars.iv6.reload, 1
  %7 = inttoptr i64 %6 to i32*, !insn.addr !206
  %8 = trunc i64 %indvars.iv.next7 to i32
  store i32 %8, i32* %7, align 4, !insn.addr !206
  %exitcond8 = icmp eq i64 %indvars.iv.next7, 5
  %9 = load i32*, i32** %new_p_-24, align 8
  store i32* %9, i32** %.reg2mem, !insn.addr !207
  store i64 %indvars.iv.next7, i64* %indvars.iv6.reg2mem, !insn.addr !207
  br i1 %exitcond8, label %dec_label_pc_1a85, label %dec_label_pc_1a5f, !insn.addr !207

dec_label_pc_1a85:                                ; preds = %dec_label_pc_1a5f
  %10 = ptrtoint i32* %9 to i64, !insn.addr !208
  %11 = add i64 %10, 8, !insn.addr !209
  %12 = inttoptr i64 %11 to i32*, !insn.addr !209
  %13 = load i32, i32* %12, align 4, !insn.addr !209
  %14 = bitcast i32* %9 to i64*
  %15 = call i64* @realloc(i64* %14, i32 40), !insn.addr !210
  %16 = icmp eq i64* %15, null, !insn.addr !211
  %17 = icmp eq i1 %16, false, !insn.addr !212
  br i1 %17, label %dec_label_pc_1abe, label %dec_label_pc_1aab, !insn.addr !212

dec_label_pc_1aab:                                ; preds = %dec_label_pc_1a85
  call void @free(i64* %14), !insn.addr !213
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !214
  br label %dec_label_pc_1b2b, !insn.addr !214

dec_label_pc_1abe:                                ; preds = %dec_label_pc_1a85
  %18 = bitcast i64* %15 to i32*
  %19 = ptrtoint i64* %15 to i64
  %20 = bitcast i32** %new_p_-24 to i64*
  store i64 %19, i64* %20, align 8
  store i32* %18, i32** %.reg2mem12
  store i64 5, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_1acf

dec_label_pc_1acf:                                ; preds = %dec_label_pc_1acf, %dec_label_pc_1abe
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %.reload13 = load i32*, i32** %.reg2mem12, !insn.addr !215
  %21 = mul i64 %indvars.iv.reload, 4, !insn.addr !216
  %22 = ptrtoint i32* %.reload13 to i64, !insn.addr !215
  %23 = add i64 %21, %22, !insn.addr !217
  %24 = inttoptr i64 %23 to i32*, !insn.addr !218
  %25 = trunc i64 %indvars.iv.reload to i32
  %26 = mul i32 %25, 10
  store i32 %26, i32* %24, align 4, !insn.addr !218
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 10
  %27 = load i32*, i32** %new_p_-24, align 8
  store i32* %27, i32** %.reg2mem12, !insn.addr !219
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !219
  br i1 %exitcond, label %dec_label_pc_1afc, label %dec_label_pc_1acf, !insn.addr !219

dec_label_pc_1afc:                                ; preds = %dec_label_pc_1acf
  %28 = ptrtoint i32* %27 to i64, !insn.addr !220
  %29 = add i64 %28, 8, !insn.addr !221
  %30 = inttoptr i64 %29 to i32*, !insn.addr !222
  %31 = load i32, i32* %30, align 4, !insn.addr !222
  %32 = icmp eq i32 %31, %13, !insn.addr !223
  %33 = icmp eq i1 %32, false, !insn.addr !224
  store i32 -3, i32* %storemerge.reg2mem, !insn.addr !224
  br i1 %33, label %dec_label_pc_1b19, label %dec_label_pc_1b0b, !insn.addr !224

dec_label_pc_1b0b:                                ; preds = %dec_label_pc_1afc
  %34 = add i64 %28, 20, !insn.addr !225
  %35 = inttoptr i64 %34 to i32*, !insn.addr !225
  %36 = load i32, i32* %35, align 4, !insn.addr !225
  store i32 %36, i32* %storemerge.reg2mem, !insn.addr !226
  br label %dec_label_pc_1b19, !insn.addr !226

dec_label_pc_1b19:                                ; preds = %dec_label_pc_1afc, %dec_label_pc_1b0b
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %37 = bitcast i32* %27 to i64*, !insn.addr !227
  call void @free(i64* %37), !insn.addr !227
  store i32 %storemerge.reload, i32* %rax.0.reg2mem, !insn.addr !228
  br label %dec_label_pc_1b2b, !insn.addr !228

dec_label_pc_1b2b:                                ; preds = %dec_label_pc_1a2b, %dec_label_pc_1b19, %dec_label_pc_1aab
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !229

; uselistorder directives
  uselistorder i32* %27, { 1, 2, 0 }
  uselistorder i64* %15, { 0, 2, 1 }
  uselistorder i32* %9, { 1, 2, 0 }
  uselistorder i32** %new_p_-24, { 1, 0, 2, 3 }
  uselistorder i32** %.reg2mem, { 2, 0, 1 }
  uselistorder i64* %indvars.iv6.reg2mem, { 2, 0, 1 }
  uselistorder i32** %.reg2mem12, { 1, 0, 2 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32* %rax.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_1b2b, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1b19, { 1, 0 }
  uselistorder label %dec_label_pc_1a5f, { 1, 0 }
}

define i32 @heap_array(i32 %n) local_unnamed_addr {
dec_label_pc_1b2d:
  %storemerge.reg2mem = alloca i32, !insn.addr !230
  %.reg2mem2 = alloca i64, !insn.addr !230
  %.reg2mem = alloca i32, !insn.addr !230
  %0 = mul i32 %n, 4, !insn.addr !231
  %1 = call i64* @malloc(i32 %0), !insn.addr !232
  %2 = icmp eq i64* %1, null, !insn.addr !233
  %3 = icmp eq i1 %2, false, !insn.addr !234
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !234
  br i1 %3, label %dec_label_pc_1b8c.preheader, label %dec_label_pc_1bc5, !insn.addr !234

dec_label_pc_1b8c.preheader:                      ; preds = %dec_label_pc_1b2d
  %4 = ptrtoint i64* %1 to i64, !insn.addr !232
  %5 = icmp sgt i32 %n, 0, !insn.addr !235
  store i32 0, i32* %.reg2mem, !insn.addr !235
  store i64 0, i64* %.reg2mem2, !insn.addr !235
  br i1 %5, label %dec_label_pc_1b68, label %dec_label_pc_1b94, !insn.addr !235

dec_label_pc_1b68:                                ; preds = %dec_label_pc_1b8c.preheader, %dec_label_pc_1b68
  %.reload3 = load i64, i64* %.reg2mem2
  %.reload = load i32, i32* %.reg2mem
  %sext = mul i64 %.reload3, 4294967296
  %6 = ashr exact i64 %sext, 30, !insn.addr !236
  %7 = add i64 %6, %4, !insn.addr !237
  %8 = mul i32 %.reload, 3, !insn.addr !238
  %9 = inttoptr i64 %7 to i32*, !insn.addr !239
  store i32 %8, i32* %9, align 4, !insn.addr !239
  %10 = add nuw nsw i64 %.reload3, 1, !insn.addr !240
  %11 = and i64 %10, 4294967295
  %12 = trunc i64 %10 to i32, !insn.addr !235
  %13 = icmp slt i32 %12, %n, !insn.addr !235
  store i32 %12, i32* %.reg2mem, !insn.addr !235
  store i64 %11, i64* %.reg2mem2, !insn.addr !235
  br i1 %13, label %dec_label_pc_1b68, label %dec_label_pc_1b94, !insn.addr !235

dec_label_pc_1b94:                                ; preds = %dec_label_pc_1b68, %dec_label_pc_1b8c.preheader
  %14 = icmp slt i32 %n, 0
  %15 = zext i1 %14 to i32, !insn.addr !241
  %16 = add i32 %15, %n, !insn.addr !242
  %17 = ashr i32 %16, 1, !insn.addr !243
  %18 = sext i32 %17 to i64, !insn.addr !244
  %19 = mul i64 %18, 4, !insn.addr !245
  %20 = add i64 %19, %4, !insn.addr !246
  %21 = inttoptr i64 %20 to i32*, !insn.addr !247
  %22 = load i32, i32* %21, align 4, !insn.addr !247
  call void @free(i64* %1), !insn.addr !248
  store i32 %22, i32* %storemerge.reg2mem, !insn.addr !249
  br label %dec_label_pc_1bc5, !insn.addr !249

dec_label_pc_1bc5:                                ; preds = %dec_label_pc_1b2d, %dec_label_pc_1b94
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !250

; uselistorder directives
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i64* %.reg2mem2, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %n, { 2, 1, 4, 3, 0 }
  uselistorder label %dec_label_pc_1bc5, { 1, 0 }
  uselistorder label %dec_label_pc_1b68, { 1, 0 }
}

define i32 @heap_struct(i32 %x) local_unnamed_addr {
dec_label_pc_1bc7:
  %storemerge.reg2mem = alloca i32, !insn.addr !251
  %0 = call i64* @malloc(i32 8), !insn.addr !252
  %1 = icmp eq i64* %0, null, !insn.addr !253
  %2 = icmp eq i1 %1, false, !insn.addr !254
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !254
  br i1 %2, label %dec_label_pc_1bf2, label %dec_label_pc_1c29, !insn.addr !254

dec_label_pc_1bf2:                                ; preds = %dec_label_pc_1bc7
  %3 = ptrtoint i64* %0 to i64, !insn.addr !252
  %4 = bitcast i64* %0 to i32*, !insn.addr !255
  store i32 %x, i32* %4, align 4, !insn.addr !255
  %5 = mul i32 %x, 2, !insn.addr !256
  %6 = add i64 %3, 4, !insn.addr !257
  %7 = inttoptr i64 %6 to i32*, !insn.addr !257
  store i32 %5, i32* %7, align 4, !insn.addr !257
  %8 = load i32, i32* %4, align 4, !insn.addr !258
  %9 = add i32 %8, %5, !insn.addr !259
  call void @free(i64* %0), !insn.addr !260
  store i32 %9, i32* %storemerge.reg2mem, !insn.addr !261
  br label %dec_label_pc_1c29, !insn.addr !261

dec_label_pc_1c29:                                ; preds = %dec_label_pc_1bc7, %dec_label_pc_1bf2
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !262

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i64* %0, { 0, 1, 3, 2 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1c29, { 1, 0 }
}

define i32 @heap_nested(i32** %head) local_unnamed_addr {
dec_label_pc_1c2b:
  %rax.0.reg2mem = alloca i32, !insn.addr !263
  %0 = call i64* @malloc(i32 16), !insn.addr !264
  %1 = ptrtoint i64* %0 to i64, !insn.addr !264
  %2 = bitcast i32** %head to i64*, !insn.addr !265
  store i64 %1, i64* %2, align 8, !insn.addr !265
  store i32 10, i32* inttoptr (i64 16 to i32*), align 16, !insn.addr !266
  %3 = call i64* @malloc(i32 16), !insn.addr !267
  %4 = ptrtoint i64* %3 to i64, !insn.addr !267
  store i64 %4, i64* inttoptr (i64 24 to i64*), align 8, !insn.addr !268
  %5 = icmp eq i64* %3, null, !insn.addr !269
  %6 = icmp eq i1 %5, false, !insn.addr !270
  br i1 %6, label %dec_label_pc_1cab, label %dec_label_pc_1c95, !insn.addr !270

dec_label_pc_1c95:                                ; preds = %dec_label_pc_1c2b
  call void @free(i64* inttoptr (i64 16 to i64*)), !insn.addr !271
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !272
  br label %dec_label_pc_1cd4, !insn.addr !272

dec_label_pc_1cab:                                ; preds = %dec_label_pc_1c2b
  %7 = bitcast i64* %3 to i32*, !insn.addr !273
  store i32 20, i32* %7, align 4, !insn.addr !273
  %8 = load i64, i64* inttoptr (i64 24 to i64*), align 8, !insn.addr !274
  %9 = add i64 %8, 8, !insn.addr !275
  %10 = inttoptr i64 %9 to i64*, !insn.addr !275
  store i64 0, i64* %10, align 8, !insn.addr !275
  store i32 0, i32* %rax.0.reg2mem, !insn.addr !276
  br label %dec_label_pc_1cd4, !insn.addr !276

dec_label_pc_1cd4:                                ; preds = %dec_label_pc_1cab, %dec_label_pc_1c95
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !277

; uselistorder directives
  uselistorder i32* %rax.0.reg2mem, { 0, 2, 1 }
}

define i32 @linked_list_heap() local_unnamed_addr {
dec_label_pc_1cda:
  %storemerge.reg2mem = alloca i32, !insn.addr !278
  %.reg2mem12 = alloca i32*, !insn.addr !278
  %stack_var_-60.05.reg2mem = alloca i32, !insn.addr !278
  %.in.reg2mem = alloca i64, !insn.addr !278
  %storemerge6.reg2mem = alloca i64, !insn.addr !278
  %.reg2mem10 = alloca i32*, !insn.addr !278
  %.reg2mem8 = alloca i64, !insn.addr !278
  %.reg2mem = alloca i32, !insn.addr !278
  %stack_var_-24 = alloca i32*, align 8
  %temp_-48 = alloca i32*, align 8
  %temp_-56 = alloca i32*, align 8
  store i32* null, i32** %temp_-56, align 8, !insn.addr !279
  store i32* null, i32** %temp_-48, align 8, !insn.addr !280
  %0 = bitcast i32** %temp_-56 to i64*
  %1 = bitcast i32** %temp_-48 to i64*
  store i32 0, i32* %.reg2mem
  store i64 0, i64* %.reg2mem8
  br label %dec_label_pc_1d02

dec_label_pc_1d02:                                ; preds = %dec_label_pc_1cda, %dec_label_pc_1d97
  %2 = call i64* @malloc(i32 16), !insn.addr !281
  %3 = bitcast i64* %2 to i32*
  store i32* %3, i32** %stack_var_-24, align 8, !insn.addr !282
  %4 = icmp eq i64* %2, null, !insn.addr !283
  %5 = icmp eq i1 %4, false, !insn.addr !284
  br i1 %5, label %dec_label_pc_1d4a, label %dec_label_pc_1d39.preheader, !insn.addr !284

dec_label_pc_1d39.preheader:                      ; preds = %dec_label_pc_1d02
  %6 = load i32*, i32** %temp_-56, align 8, !insn.addr !285
  %7 = icmp eq i32* %6, null, !insn.addr !285
  %8 = icmp eq i1 %7, false, !insn.addr !286
  store i32* %6, i32** %.reg2mem10, !insn.addr !286
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !286
  br i1 %8, label %dec_label_pc_1d19, label %dec_label_pc_1dfe, !insn.addr !286

dec_label_pc_1d19:                                ; preds = %dec_label_pc_1d39.preheader, %dec_label_pc_1d19
  %.reload11 = load i32*, i32** %.reg2mem10
  %9 = ptrtoint i32* %.reload11 to i64, !insn.addr !287
  %10 = add i64 %9, 8, !insn.addr !288
  %11 = inttoptr i64 %10 to i64*, !insn.addr !288
  %12 = load i64, i64* %11, align 8, !insn.addr !288
  %13 = inttoptr i64 %12 to i32*, !insn.addr !289
  store i32* %13, i32** %temp_-56, align 8, !insn.addr !289
  %14 = bitcast i32* %.reload11 to i64*, !insn.addr !290
  call void @free(i64* %14), !insn.addr !290
  %15 = icmp eq i64 %12, 0, !insn.addr !285
  %16 = icmp eq i1 %15, false, !insn.addr !286
  store i32* %13, i32** %.reg2mem10, !insn.addr !286
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !286
  br i1 %16, label %dec_label_pc_1d19, label %dec_label_pc_1dfe, !insn.addr !286

dec_label_pc_1d4a:                                ; preds = %dec_label_pc_1d02
  %.reload9 = load i64, i64* %.reg2mem8
  %.reload = load i32, i32* %.reg2mem
  %17 = mul i32 %.reload, 10, !insn.addr !291
  store i32 %17, i32* %3, align 4, !insn.addr !292
  %18 = ptrtoint i64* %2 to i64, !insn.addr !293
  %19 = add i64 %18, 8, !insn.addr !294
  %20 = inttoptr i64 %19 to i64*, !insn.addr !294
  store i64 0, i64* %20, align 8, !insn.addr !294
  %21 = load i32*, i32** %temp_-56, align 8, !insn.addr !295
  %22 = icmp eq i32* %21, null, !insn.addr !295
  %23 = icmp eq i1 %22, false, !insn.addr !296
  br i1 %23, label %dec_label_pc_1d83, label %dec_label_pc_1d71, !insn.addr !296

dec_label_pc_1d71:                                ; preds = %dec_label_pc_1d4a
  %24 = load i32*, i32** %stack_var_-24, align 8
  %25 = ptrtoint i32* %24 to i64
  store i64 %25, i64* %0, align 8
  store i64 %25, i64* %storemerge6.reg2mem, !insn.addr !297
  br label %dec_label_pc_1d97, !insn.addr !297

dec_label_pc_1d83:                                ; preds = %dec_label_pc_1d4a
  %26 = load i32*, i32** %temp_-48, align 8, !insn.addr !298
  %27 = ptrtoint i32* %26 to i64, !insn.addr !298
  %28 = load i32*, i32** %stack_var_-24, align 8, !insn.addr !299
  %29 = ptrtoint i32* %28 to i64, !insn.addr !299
  %30 = add i64 %27, 8, !insn.addr !300
  %31 = inttoptr i64 %30 to i64*, !insn.addr !300
  store i64 %29, i64* %31, align 8, !insn.addr !300
  %32 = load i32*, i32** %stack_var_-24, align 8
  %33 = ptrtoint i32* %32 to i64
  store i64 %33, i64* %storemerge6.reg2mem, !insn.addr !301
  br label %dec_label_pc_1d97, !insn.addr !301

dec_label_pc_1d97:                                ; preds = %dec_label_pc_1d83, %dec_label_pc_1d71
  %storemerge6.reload = load i64, i64* %storemerge6.reg2mem
  store i64 %storemerge6.reload, i64* %1, align 8
  %34 = add nuw nsw i64 %.reload9, 1, !insn.addr !302
  %35 = and i64 %34, 4294967295
  %36 = trunc i64 %34 to i32, !insn.addr !303
  %37 = icmp slt i32 %36, 5, !insn.addr !304
  store i32 %36, i32* %.reg2mem, !insn.addr !304
  store i64 %35, i64* %.reg2mem8, !insn.addr !304
  br i1 %37, label %dec_label_pc_1d02, label %dec_label_pc_1da5, !insn.addr !304

dec_label_pc_1da5:                                ; preds = %dec_label_pc_1d97
  %38 = load i32*, i32** %temp_-56, align 8
  %39 = ptrtoint i32* %38 to i64
  %40 = icmp eq i32* %38, null, !insn.addr !305
  %41 = icmp eq i1 %40, false, !insn.addr !306
  store i64 %39, i64* %.in.reg2mem, !insn.addr !306
  store i32 0, i32* %stack_var_-60.05.reg2mem, !insn.addr !306
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !306
  br i1 %41, label %dec_label_pc_1db6, label %dec_label_pc_1dfe, !insn.addr !306

dec_label_pc_1db6:                                ; preds = %dec_label_pc_1da5, %dec_label_pc_1db6
  %stack_var_-60.05.reload = load i32, i32* %stack_var_-60.05.reg2mem
  %.in.reload = load i64, i64* %.in.reg2mem
  %42 = inttoptr i64 %.in.reload to i32*
  %43 = load i32, i32* %42, align 4, !insn.addr !307
  %44 = add i32 %43, %stack_var_-60.05.reload, !insn.addr !308
  %45 = add i64 %.in.reload, 8, !insn.addr !309
  %46 = inttoptr i64 %45 to i64*, !insn.addr !309
  %47 = load i64, i64* %46, align 8, !insn.addr !309
  %48 = icmp eq i64 %47, 0, !insn.addr !305
  %49 = icmp eq i1 %48, false, !insn.addr !306
  store i64 %47, i64* %.in.reg2mem, !insn.addr !306
  store i32 %44, i32* %stack_var_-60.05.reg2mem, !insn.addr !306
  store i32* %38, i32** %.reg2mem12, !insn.addr !306
  br i1 %49, label %dec_label_pc_1db6, label %dec_label_pc_1dd4, !insn.addr !306

dec_label_pc_1dd4:                                ; preds = %dec_label_pc_1db6, %dec_label_pc_1dd4
  %.reload13 = load i32*, i32** %.reg2mem12
  %50 = ptrtoint i32* %.reload13 to i64, !insn.addr !310
  %51 = add i64 %50, 8, !insn.addr !311
  %52 = inttoptr i64 %51 to i64*, !insn.addr !311
  %53 = load i64, i64* %52, align 8, !insn.addr !311
  %54 = inttoptr i64 %53 to i32*, !insn.addr !312
  store i32* %54, i32** %temp_-56, align 8, !insn.addr !312
  %55 = bitcast i32* %.reload13 to i64*, !insn.addr !313
  call void @free(i64* %55), !insn.addr !313
  %56 = icmp eq i64 %53, 0, !insn.addr !314
  %57 = icmp eq i1 %56, false, !insn.addr !315
  store i32* %54, i32** %.reg2mem12, !insn.addr !315
  store i32 %44, i32* %storemerge.reg2mem, !insn.addr !315
  br i1 %57, label %dec_label_pc_1dd4, label %dec_label_pc_1dfe, !insn.addr !315

dec_label_pc_1dfe:                                ; preds = %dec_label_pc_1d19, %dec_label_pc_1dd4, %dec_label_pc_1da5, %dec_label_pc_1d39.preheader
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !316

; uselistorder directives
  uselistorder i64 %.in.reload, { 1, 0 }
  uselistorder i32** %temp_-56, { 3, 0, 4, 5, 1, 2, 6 }
  uselistorder i32** %temp_-48, { 1, 0, 2 }
  uselistorder i32** %stack_var_-24, { 0, 3, 1, 2 }
  uselistorder i32* %.reg2mem, { 1, 0, 2 }
  uselistorder i64* %.reg2mem8, { 1, 0, 2 }
  uselistorder i32** %.reg2mem10, { 2, 0, 1 }
  uselistorder i64* %.in.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-60.05.reg2mem, { 2, 0, 1 }
  uselistorder i32** %.reg2mem12, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 3, 1, 4 }
  uselistorder label %dec_label_pc_1dfe, { 1, 2, 0, 3 }
  uselistorder label %dec_label_pc_1dd4, { 1, 0 }
  uselistorder label %dec_label_pc_1db6, { 1, 0 }
  uselistorder label %dec_label_pc_1d19, { 1, 0 }
  uselistorder label %dec_label_pc_1d02, { 1, 0 }
}

define i32* @create_tree_node(i32 %data) local_unnamed_addr {
dec_label_pc_1e00:
  %0 = call i64* @malloc(i32 24), !insn.addr !317
  %1 = bitcast i64* %0 to i32*
  %2 = icmp eq i64* %0, null, !insn.addr !318
  br i1 %2, label %dec_label_pc_1e45, label %dec_label_pc_1e24, !insn.addr !319

dec_label_pc_1e24:                                ; preds = %dec_label_pc_1e00
  store i32 %data, i32* %1, align 4, !insn.addr !320
  %3 = ptrtoint i64* %0 to i64, !insn.addr !321
  %4 = add i64 %3, 8, !insn.addr !322
  %5 = inttoptr i64 %4 to i64*, !insn.addr !322
  store i64 0, i64* %5, align 8, !insn.addr !322
  %6 = add i64 %3, 16, !insn.addr !323
  %7 = inttoptr i64 %6 to i64*, !insn.addr !323
  store i64 0, i64* %7, align 8, !insn.addr !323
  br label %dec_label_pc_1e45, !insn.addr !323

dec_label_pc_1e45:                                ; preds = %dec_label_pc_1e24, %dec_label_pc_1e00
  ret i32* %1, !insn.addr !324
}

define i32 @tree_heap_traversal() local_unnamed_addr {
dec_label_pc_1e4b:
  %rax.0.reg2mem = alloca i32, !insn.addr !325
  %.reg2mem = alloca i64, !insn.addr !325
  %0 = call i32* @create_tree_node(i32 10), !insn.addr !326
  %1 = icmp eq i32* %0, null, !insn.addr !327
  %2 = icmp eq i1 %1, false, !insn.addr !328
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !328
  br i1 %2, label %dec_label_pc_1e76, label %dec_label_pc_1f51, !insn.addr !328

dec_label_pc_1e76:                                ; preds = %dec_label_pc_1e4b
  %3 = ptrtoint i32* %0 to i64, !insn.addr !326
  %4 = call i32* @create_tree_node(i32 20), !insn.addr !329
  %5 = ptrtoint i32* %4 to i64, !insn.addr !329
  %6 = add i64 %3, 8, !insn.addr !330
  %7 = inttoptr i64 %6 to i64*, !insn.addr !330
  store i64 %5, i64* %7, align 8, !insn.addr !330
  %8 = call i32* @create_tree_node(i32 30), !insn.addr !331
  %9 = ptrtoint i32* %8 to i64, !insn.addr !331
  %10 = add i64 %3, 16, !insn.addr !332
  %11 = inttoptr i64 %10 to i64*, !insn.addr !332
  store i64 %9, i64* %11, align 8, !insn.addr !332
  %12 = load i64, i64* %7, align 8
  %13 = icmp eq i64 %12, 0, !insn.addr !333
  store i64 %9, i64* %.reg2mem, !insn.addr !334
  br i1 %13, label %dec_label_pc_1ed1, label %dec_label_pc_1ea7, !insn.addr !334

dec_label_pc_1ea7:                                ; preds = %dec_label_pc_1e76
  %14 = icmp eq i32* %8, null, !insn.addr !335
  %15 = icmp eq i1 %14, false, !insn.addr !336
  br i1 %15, label %dec_label_pc_1f01, label %dec_label_pc_1ec1, !insn.addr !336

dec_label_pc_1ec1:                                ; preds = %dec_label_pc_1ea7
  %16 = inttoptr i64 %12 to i64*, !insn.addr !337
  call void @free(i64* %16), !insn.addr !337
  %.pr = load i64, i64* %11, align 8
  store i64 %.pr, i64* %.reg2mem, !insn.addr !337
  br label %dec_label_pc_1ed1, !insn.addr !337

dec_label_pc_1ed1:                                ; preds = %dec_label_pc_1e76, %dec_label_pc_1ec1
  %.reload = load i64, i64* %.reg2mem, !insn.addr !338
  %17 = icmp eq i64 %.reload, 0, !insn.addr !339
  br i1 %17, label %dec_label_pc_1eee, label %dec_label_pc_1ede, !insn.addr !340

dec_label_pc_1ede:                                ; preds = %dec_label_pc_1ed1
  %18 = inttoptr i64 %.reload to i64*, !insn.addr !341
  call void @free(i64* %18), !insn.addr !341
  br label %dec_label_pc_1eee, !insn.addr !341

dec_label_pc_1eee:                                ; preds = %dec_label_pc_1ede, %dec_label_pc_1ed1
  %19 = bitcast i32* %0 to i64*, !insn.addr !342
  call void @free(i64* %19), !insn.addr !342
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !343
  br label %dec_label_pc_1f51, !insn.addr !343

dec_label_pc_1f01:                                ; preds = %dec_label_pc_1ea7
  %20 = load i32, i32* %0, align 4, !insn.addr !344
  %21 = inttoptr i64 %12 to i32*, !insn.addr !345
  %22 = load i32, i32* %21, align 4, !insn.addr !345
  %23 = add i32 %22, %20, !insn.addr !346
  %24 = load i32, i32* %8, align 4, !insn.addr !347
  %25 = add i32 %23, %24, !insn.addr !348
  %26 = inttoptr i64 %12 to i64*, !insn.addr !349
  call void @free(i64* %26), !insn.addr !349
  %27 = load i64, i64* %11, align 8, !insn.addr !350
  %28 = inttoptr i64 %27 to i64*, !insn.addr !351
  call void @free(i64* %28), !insn.addr !351
  %29 = bitcast i32* %0 to i64*, !insn.addr !352
  call void @free(i64* %29), !insn.addr !352
  store i32 %25, i32* %rax.0.reg2mem, !insn.addr !353
  br label %dec_label_pc_1f51, !insn.addr !353

dec_label_pc_1f51:                                ; preds = %dec_label_pc_1e4b, %dec_label_pc_1f01, %dec_label_pc_1eee
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !354

; uselistorder directives
  uselistorder i64 %12, { 1, 2, 0, 3 }
  uselistorder i64* %11, { 1, 0, 2 }
  uselistorder i32* %8, { 1, 0, 2 }
  uselistorder i32* %0, { 0, 1, 2, 4, 3 }
  uselistorder i64* %.reg2mem, { 0, 2, 1 }
  uselistorder i32* %rax.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i64 16, { 6, 7, 2, 3, 0, 4, 1, 5 }
  uselistorder i32* (i32)* @create_tree_node, { 2, 1, 0 }
  uselistorder label %dec_label_pc_1f51, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1ed1, { 1, 0 }
}

define i32 @memory_leak(i32 %n) local_unnamed_addr {
dec_label_pc_1f53:
  %storemerge.reg2mem = alloca i32, !insn.addr !355
  %indvars.iv.reg2mem = alloca i64, !insn.addr !355
  %0 = mul i32 %n, 4, !insn.addr !356
  %1 = call i64* @malloc(i32 %0), !insn.addr !357
  %2 = icmp eq i64* %1, null, !insn.addr !358
  %3 = icmp eq i1 %2, false, !insn.addr !359
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !359
  br i1 %3, label %dec_label_pc_1fab.preheader, label %dec_label_pc_1fd2, !insn.addr !359

dec_label_pc_1fab.preheader:                      ; preds = %dec_label_pc_1f53
  %4 = ptrtoint i64* %1 to i64, !insn.addr !357
  %5 = icmp sgt i32 %n, 0, !insn.addr !360
  br i1 %5, label %dec_label_pc_1f8e.preheader, label %dec_label_pc_1fb3, !insn.addr !360

dec_label_pc_1f8e.preheader:                      ; preds = %dec_label_pc_1fab.preheader
  %wide.trip.count = zext i32 %n to i64
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_1f8e

dec_label_pc_1f8e:                                ; preds = %dec_label_pc_1f8e.preheader, %dec_label_pc_1f8e
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %6 = mul i64 %indvars.iv.reload, 4, !insn.addr !361
  %7 = add i64 %6, %4, !insn.addr !362
  %8 = inttoptr i64 %7 to i32*, !insn.addr !363
  %9 = trunc i64 %indvars.iv.reload to i32
  store i32 %9, i32* %8, align 4, !insn.addr !363
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !360
  br i1 %exitcond, label %dec_label_pc_1fb3, label %dec_label_pc_1f8e, !insn.addr !360

dec_label_pc_1fb3:                                ; preds = %dec_label_pc_1f8e, %dec_label_pc_1fab.preheader
  %10 = icmp slt i32 %n, 0
  %11 = zext i1 %10 to i32, !insn.addr !364
  %12 = add i32 %11, %n, !insn.addr !365
  %13 = ashr i32 %12, 1, !insn.addr !366
  %14 = sext i32 %13 to i64, !insn.addr !367
  %15 = mul i64 %14, 4, !insn.addr !368
  %16 = add i64 %15, %4, !insn.addr !369
  %17 = inttoptr i64 %16 to i32*, !insn.addr !370
  %18 = load i32, i32* %17, align 4, !insn.addr !370
  store i32 %18, i32* %storemerge.reg2mem, !insn.addr !370
  br label %dec_label_pc_1fd2, !insn.addr !370

dec_label_pc_1fd2:                                ; preds = %dec_label_pc_1f53, %dec_label_pc_1fb3
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !371

; uselistorder directives
  uselistorder i64* %1, { 1, 0 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %n, { 2, 1, 3, 4, 0 }
  uselistorder label %dec_label_pc_1fd2, { 1, 0 }
  uselistorder label %dec_label_pc_1f8e, { 1, 0 }
}

define i32 @dangling_pointer() local_unnamed_addr {
dec_label_pc_1fd4:
  %storemerge.reg2mem = alloca i32, !insn.addr !372
  %0 = call i64* @malloc(i32 4), !insn.addr !373
  %1 = icmp eq i64* %0, null, !insn.addr !374
  %2 = icmp eq i1 %1, false, !insn.addr !375
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !375
  br i1 %2, label %dec_label_pc_1ffc, label %dec_label_pc_2040, !insn.addr !375

dec_label_pc_1ffc:                                ; preds = %dec_label_pc_1fd4
  %3 = bitcast i64* %0 to i32*, !insn.addr !376
  store i32 42, i32* %3, align 4, !insn.addr !376
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_3149, i64 0, i64 0), i64 42), !insn.addr !377
  call void @free(i64* %0), !insn.addr !378
  %5 = load i32, i32* %3, align 4, !insn.addr !379
  store i32 %5, i32* %storemerge.reg2mem, !insn.addr !380
  br label %dec_label_pc_2040, !insn.addr !380

dec_label_pc_2040:                                ; preds = %dec_label_pc_1fd4, %dec_label_pc_1ffc
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !381

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 42, { 2, 0, 1 }
  uselistorder label %dec_label_pc_2040, { 1, 0 }
}

define i32 @double_free(i32* %p) local_unnamed_addr {
dec_label_pc_2042:
  %0 = alloca i64
  %rax.0.reg2mem = alloca i32, !insn.addr !382
  %1 = load i64, i64* %0
  %2 = icmp eq i32* %p, null, !insn.addr !383
  %3 = icmp eq i1 %2, false, !insn.addr !384
  br i1 %3, label %dec_label_pc_209e, label %dec_label_pc_2059, !insn.addr !384

dec_label_pc_2059:                                ; preds = %dec_label_pc_2042
  %4 = call i64* @malloc(i32 4), !insn.addr !385
  %5 = icmp eq i64* %4, null, !insn.addr !386
  %6 = icmp eq i1 %5, false, !insn.addr !387
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !387
  br i1 %6, label %dec_label_pc_2075, label %dec_label_pc_20a4, !insn.addr !387

dec_label_pc_2075:                                ; preds = %dec_label_pc_2059
  %7 = bitcast i64* %4 to i32*, !insn.addr !388
  store i32 10, i32* %7, align 4, !insn.addr !388
  call void @free(i64* %4), !insn.addr !389
  call void @free(i64* %4), !insn.addr !390
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !391
  br label %dec_label_pc_20a4, !insn.addr !391

dec_label_pc_209e:                                ; preds = %dec_label_pc_2042
  %8 = trunc i64 %1 to i32
  store i32 %8, i32* %rax.0.reg2mem, !insn.addr !392
  br label %dec_label_pc_20a4, !insn.addr !392

dec_label_pc_20a4:                                ; preds = %dec_label_pc_2059, %dec_label_pc_209e, %dec_label_pc_2075
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !393

; uselistorder directives
  uselistorder i32* %rax.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32 4, { 3, 4, 0, 1, 5, 2 }
  uselistorder label %dec_label_pc_20a4, { 1, 2, 0 }
}

define i32 @heap_overflow() local_unnamed_addr {
dec_label_pc_20a6:
  %storemerge.reg2mem = alloca i32, !insn.addr !394
  %.reg2mem3 = alloca i64, !insn.addr !394
  %.reg2mem = alloca i32, !insn.addr !394
  %0 = call i64* @malloc(i32 40), !insn.addr !395
  %1 = ptrtoint i64* %0 to i64, !insn.addr !395
  %2 = icmp eq i64* %0, null, !insn.addr !396
  %3 = icmp eq i1 %2, false, !insn.addr !397
  store i32 0, i32* %.reg2mem, !insn.addr !397
  store i64 0, i64* %.reg2mem3, !insn.addr !397
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !397
  br i1 %3, label %dec_label_pc_20d7, label %dec_label_pc_2115, !insn.addr !397

dec_label_pc_20d7:                                ; preds = %dec_label_pc_20a6, %dec_label_pc_20d7
  %.reload4 = load i64, i64* %.reg2mem3
  %.reload = load i32, i32* %.reg2mem
  %sext = mul i64 %.reload4, 4294967296
  %4 = ashr exact i64 %sext, 30, !insn.addr !398
  %5 = add i64 %4, %1, !insn.addr !399
  %6 = mul i32 %.reload, 100, !insn.addr !400
  %7 = inttoptr i64 %5 to i32*, !insn.addr !401
  store i32 %6, i32* %7, align 4, !insn.addr !401
  %8 = add nuw nsw i64 %.reload4, 1, !insn.addr !402
  %9 = and i64 %8, 4294967295
  %10 = trunc i64 %8 to i32, !insn.addr !403
  %11 = icmp slt i32 %10, 11, !insn.addr !404
  store i32 %10, i32* %.reg2mem, !insn.addr !404
  store i64 %9, i64* %.reg2mem3, !insn.addr !404
  br i1 %11, label %dec_label_pc_20d7, label %dec_label_pc_20fd, !insn.addr !404

dec_label_pc_20fd:                                ; preds = %dec_label_pc_20d7
  %12 = bitcast i64* %0 to i32*, !insn.addr !405
  %13 = load i32, i32* %12, align 4, !insn.addr !405
  call void @free(i64* %0), !insn.addr !406
  store i32 %13, i32* %storemerge.reg2mem, !insn.addr !407
  br label %dec_label_pc_2115, !insn.addr !407

dec_label_pc_2115:                                ; preds = %dec_label_pc_20a6, %dec_label_pc_20fd
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !408

; uselistorder directives
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i64* %.reg2mem3, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* null, { 1, 2, 3, 4, 5, 6, 0, 7, 8, 9, 10, 11, 12 }
  uselistorder i64* (i32)* @malloc, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder label %dec_label_pc_2115, { 1, 0 }
  uselistorder label %dec_label_pc_20d7, { 1, 0 }
}

define void @test_heap_memory() local_unnamed_addr {
dec_label_pc_2117:
  %stack_var_-36 = alloca i32, align 4
  %stack_var_-24 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !409
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_3160 to i8*)), !insn.addr !410
  %2 = call i32 @heap_basic(i32 10), !insn.addr !411
  %3 = zext i32 %2 to i64, !insn.addr !412
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_317e, i64 0, i64 0), i64 %3), !insn.addr !413
  %5 = call i32 @heap_calloc(i32 5), !insn.addr !414
  %6 = zext i32 %5 to i64, !insn.addr !415
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_319b, i64 0, i64 0), i64 %6), !insn.addr !416
  %8 = call i32 @heap_realloc(), !insn.addr !417
  %9 = zext i32 %8 to i64, !insn.addr !418
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_31c0, i64 0, i64 0), i64 %9), !insn.addr !419
  %11 = call i32 @heap_array(i32 10), !insn.addr !420
  %12 = zext i32 %11 to i64, !insn.addr !421
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_31df, i64 0, i64 0), i64 %12), !insn.addr !422
  %14 = call i32 @heap_struct(i32 5), !insn.addr !423
  %15 = zext i32 %14 to i64, !insn.addr !424
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_31fc, i64 0, i64 0), i64 %15), !insn.addr !425
  store i64 0, i64* %stack_var_-24, align 8, !insn.addr !426
  %17 = bitcast i64* %stack_var_-24 to i32**, !insn.addr !427
  %18 = call i32 @heap_nested(i32** nonnull %17), !insn.addr !427
  %19 = zext i32 %18 to i64, !insn.addr !428
  %20 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_321a, i64 0, i64 0), i64 %19), !insn.addr !429
  %21 = load i64, i64* %stack_var_-24, align 8, !insn.addr !430
  %22 = icmp eq i64 %21, 0, !insn.addr !431
  br i1 %22, label %dec_label_pc_2230, label %dec_label_pc_2214, !insn.addr !432

dec_label_pc_2214:                                ; preds = %dec_label_pc_2117
  %23 = add i64 %21, 8, !insn.addr !433
  %24 = inttoptr i64 %23 to i64*, !insn.addr !433
  %25 = load i64, i64* %24, align 8, !insn.addr !433
  %26 = inttoptr i64 %25 to i64*, !insn.addr !434
  call void @free(i64* %26), !insn.addr !434
  %27 = load i64, i64* %stack_var_-24, align 8, !insn.addr !435
  %28 = inttoptr i64 %27 to i64*, !insn.addr !436
  call void @free(i64* %28), !insn.addr !436
  br label %dec_label_pc_2230, !insn.addr !436

dec_label_pc_2230:                                ; preds = %dec_label_pc_2214, %dec_label_pc_2117
  %29 = call i32 @linked_list_heap(), !insn.addr !437
  %30 = zext i32 %29 to i64, !insn.addr !438
  %31 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3238, i64 0, i64 0), i64 %30), !insn.addr !439
  %32 = call i32 @tree_heap_traversal(), !insn.addr !440
  %33 = zext i32 %32 to i64, !insn.addr !441
  %34 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3260, i64 0, i64 0), i64 %33), !insn.addr !442
  %35 = call i32 @memory_leak(i32 5), !insn.addr !443
  %36 = zext i32 %35 to i64, !insn.addr !444
  %37 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3286, i64 0, i64 0), i64 %36), !insn.addr !445
  %38 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_32a8, i64 0, i64 0)), !insn.addr !446
  %39 = call i32 @fork(), !insn.addr !447
  %40 = icmp eq i32 %39, 0, !insn.addr !448
  %41 = icmp eq i1 %40, false, !insn.addr !449
  br i1 %41, label %dec_label_pc_22e2, label %dec_label_pc_22b2, !insn.addr !449

dec_label_pc_22b2:                                ; preds = %dec_label_pc_2230
  %42 = call i32 @dangling_pointer(), !insn.addr !450
  %43 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_32c8 to i8*)), !insn.addr !451
  call void @exit(i32 0), !insn.addr !452
  unreachable, !insn.addr !452

dec_label_pc_22e2:                                ; preds = %dec_label_pc_2230
  %44 = icmp slt i32 %39, 1, !insn.addr !453
  br i1 %44, label %dec_label_pc_2356, label %dec_label_pc_22e8, !insn.addr !453

dec_label_pc_22e8:                                ; preds = %dec_label_pc_22e2
  %45 = call i32 @waitpid(i32 %39, i32* nonnull %stack_var_-36, i32 0), !insn.addr !454
  %46 = load i32, i32* %stack_var_-36, align 4, !insn.addr !455
  %47 = urem i32 %46, 128, !insn.addr !456
  %48 = icmp eq i32 %47, 0, !insn.addr !457
  %49 = icmp eq i1 %48, false, !insn.addr !458
  br i1 %49, label %dec_label_pc_2329, label %dec_label_pc_2308, !insn.addr !458

dec_label_pc_2308:                                ; preds = %dec_label_pc_22e8
  %50 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_32d8 to i8*)), !insn.addr !459
  br label %dec_label_pc_2365, !insn.addr !460

dec_label_pc_2329:                                ; preds = %dec_label_pc_22e8
  %51 = trunc i32 %46 to i8
  %52 = urem i8 %51, -128
  %53 = add nuw i8 %52, 1, !insn.addr !461
  %54 = icmp ult i8 %53, 2, !insn.addr !462
  %55 = icmp slt i8 %53, 0, !insn.addr !462
  %56 = or i1 %54, %55, !insn.addr !463
  br i1 %56, label %dec_label_pc_2365, label %dec_label_pc_2338, !insn.addr !463

dec_label_pc_2338:                                ; preds = %dec_label_pc_2329
  %57 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3300 to i8*)), !insn.addr !464
  br label %dec_label_pc_2365, !insn.addr !465

dec_label_pc_2356:                                ; preds = %dec_label_pc_22e2
  call void @perror(i8* bitcast (i8** @global_var_3341 to i8*)), !insn.addr !466
  br label %dec_label_pc_2365, !insn.addr !466

dec_label_pc_2365:                                ; preds = %dec_label_pc_2356, %dec_label_pc_2338, %dec_label_pc_2329, %dec_label_pc_2308
  %58 = call i64 @__readfsqword(i64 40), !insn.addr !467
  %59 = icmp eq i64 %0, %58, !insn.addr !467
  br i1 %59, label %dec_label_pc_237a, label %dec_label_pc_2375, !insn.addr !468

dec_label_pc_2375:                                ; preds = %dec_label_pc_2365
  call void @__stack_chk_fail(), !insn.addr !469
  br label %dec_label_pc_237a, !insn.addr !469

dec_label_pc_237a:                                ; preds = %dec_label_pc_2375, %dec_label_pc_2365
  ret void, !insn.addr !470

; uselistorder directives
  uselistorder i8 %53, { 1, 0 }
  uselistorder i32 %46, { 1, 0 }
  uselistorder i64* %stack_var_-24, { 1, 2, 0, 3 }
  uselistorder void (i64*)* @free, { 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 21 }
}

define i32 @global_var_access() local_unnamed_addr {
dec_label_pc_237c:
  %0 = load i32, i32* @global_counter, align 4, !insn.addr !471
  %1 = add i32 %0, 1, !insn.addr !472
  store i32 %1, i32* @global_counter, align 4, !insn.addr !473
  ret i32 %1, !insn.addr !474
}

define i32 @global_var_read() local_unnamed_addr {
dec_label_pc_239b:
  %0 = load i32, i32* @global_counter, align 4, !insn.addr !475
  %1 = mul i32 %0, 2, !insn.addr !476
  ret i32 %1, !insn.addr !477
}

define i32 @global_array_access(i32 %idx) local_unnamed_addr {
dec_label_pc_23ad:
  %storemerge.reg2mem = alloca i32, !insn.addr !478
  %0 = icmp ult i32 %idx, 10
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !479
  br i1 %0, label %dec_label_pc_23cb, label %dec_label_pc_23e2, !insn.addr !479

dec_label_pc_23cb:                                ; preds = %dec_label_pc_23ad
  %1 = sext i32 %idx to i64, !insn.addr !480
  %2 = mul i64 %1, 4, !insn.addr !481
  %3 = add i64 %2, ptrtoint ([10 x i32]* @global_array to i64), !insn.addr !482
  %4 = inttoptr i64 %3 to i32*, !insn.addr !482
  %5 = load i32, i32* %4, align 4, !insn.addr !482
  store i32 %5, i32* %storemerge.reg2mem, !insn.addr !482
  br label %dec_label_pc_23e2, !insn.addr !482

dec_label_pc_23e2:                                ; preds = %dec_label_pc_23ad, %dec_label_pc_23cb
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !483

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %idx, { 1, 0 }
  uselistorder label %dec_label_pc_23e2, { 1, 0 }
}

define i32 @static_local(i32 %reset) local_unnamed_addr {
dec_label_pc_23e4:
  %0 = icmp eq i32 %reset, 0, !insn.addr !484
  %. = select i1 %0, i32 ptrtoint (i32* @global_var_6159 to i32), i32 0
  store i32 %., i32* @global_var_6158, align 4
  ret i32 %., !insn.addr !485
}

define i32 @static_helper(i32 %x) local_unnamed_addr {
dec_label_pc_241d:
  %0 = mul i32 %x, 2, !insn.addr !486
  ret i32 %0, !insn.addr !487
}

define i32 @call_static_func(i32 %x) local_unnamed_addr {
dec_label_pc_242f:
  %0 = call i32 @static_helper(i32 %x), !insn.addr !488
  %1 = add i32 %0, 1, !insn.addr !489
  ret i32 %1, !insn.addr !490
}

define i32 @access_extern_global() local_unnamed_addr {
dec_label_pc_244d:
  %0 = load i32, i32* @extern_global_var, align 4, !insn.addr !491
  %1 = add i32 %0, 100, !insn.addr !492
  ret i32 %1, !insn.addr !493
}

define i32 @call_extern_func() local_unnamed_addr {
dec_label_pc_2460:
  %0 = call i32 @extern_function(i32 5), !insn.addr !494
  ret i32 %0, !insn.addr !495
}

define i32 @read_const_data() local_unnamed_addr {
dec_label_pc_2474:
  ret i32 ptrtoint (i32* @global_var_60a6 to i32), !insn.addr !496
}

define i32 @access_bss_var() local_unnamed_addr {
dec_label_pc_2496:
  %0 = load i32, i32* @bss_var, align 4, !insn.addr !497
  ret i32 %0, !insn.addr !498
}

define i32 @access_bss_buffer() local_unnamed_addr {
dec_label_pc_24a6:
  %0 = load i8, i8* getelementptr inbounds ([100 x i8], [100 x i8]* @bss_buffer, i64 0, i64 0), align 16, !insn.addr !499
  %1 = sext i8 %0 to i32, !insn.addr !500
  ret i32 %1, !insn.addr !500
}

define i32 @global_struct_access() local_unnamed_addr {
dec_label_pc_24ba:
  %0 = load i32, i32* bitcast (i64* @global_point to i32*), align 8, !insn.addr !501
  %1 = load i32, i32* @global_var_604c, align 4, !insn.addr !502
  %2 = add i32 %1, %0, !insn.addr !503
  ret i32 %2, !insn.addr !504
}

define void @set_file_static(i32 %val) local_unnamed_addr {
dec_label_pc_24d2:
  store i32 %val, i32* @file_scope_static, align 4, !insn.addr !505
  ret void, !insn.addr !506
}

define i32 @get_file_static() local_unnamed_addr {
dec_label_pc_24e9:
  %0 = load i32, i32* @file_scope_static, align 4, !insn.addr !507
  ret i32 %0, !insn.addr !508
}

define void @set_global_callback(i32 (i32)* %f) local_unnamed_addr {
dec_label_pc_24f9:
  %0 = ptrtoint i32 (i32)* %f to i64
  store i64 %0, i64* bitcast (i32 (i32)** @global_func_ptr to i64*), align 8, !insn.addr !509
  ret void, !insn.addr !510
}

define i32 @call_global_callback(i32 %x) local_unnamed_addr {
dec_label_pc_2513:
  %0 = load i32 (i32)*, i32 (i32)** @global_func_ptr, align 8, !insn.addr !511
  %1 = icmp eq i32 (i32)* %0, null, !insn.addr !512
  %storemerge = select i1 %1, i32 -1, i32 %x
  ret i32 %storemerge, !insn.addr !513
}

define i32 @global_heap_store(i32* %p) local_unnamed_addr {
dec_label_pc_2545:
  %0 = ptrtoint i32* %p to i64
  store i64 %0, i64* bitcast (i32** @global_heap_ptr to i64*), align 8, !insn.addr !514
  %1 = icmp eq i32* %p, null, !insn.addr !515
  %2 = trunc i64 %0 to i32
  %storemerge = select i1 %1, i32 -1, i32 %2
  ret i32 %storemerge, !insn.addr !516
}

define i32 @static_complex_init() local_unnamed_addr {
dec_label_pc_257a:
  %0 = load i32, i32* getelementptr inbounds ([5 x i32], [5 x i32]* @complex_init, i64 0, i64 0), align 16, !insn.addr !517
  %1 = load i32, i32* @global_var_6068, align 4, !insn.addr !518
  %2 = add i32 %1, %0, !insn.addr !519
  %3 = load i32, i32* @global_var_6070, align 4, !insn.addr !520
  %4 = add i32 %2, %3, !insn.addr !521
  ret i32 %4, !insn.addr !522
}

define i32 @tls_access(i32 %val) local_unnamed_addr {
dec_label_pc_259a:
  call void @__writefsdword(i64 -4, i32 %val), !insn.addr !523
  %0 = call i32 @__readfsdword(i64 -4), !insn.addr !524
  %1 = mul i32 %0, 2, !insn.addr !525
  ret i32 %1, !insn.addr !526
}

define i32 @init_depends_on(i32* %p) local_unnamed_addr {
dec_label_pc_25bc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i32* %p, null, !insn.addr !527
  br i1 %2, label %dec_label_pc_25db, label %dec_label_pc_25cf, !insn.addr !528

dec_label_pc_25cf:                                ; preds = %dec_label_pc_25bc
  %3 = trunc i64 %1 to i32
  store i32 %3, i32* inttoptr (i64 24924 to i32*), align 4, !insn.addr !529
  br label %dec_label_pc_25db, !insn.addr !529

dec_label_pc_25db:                                ; preds = %dec_label_pc_25cf, %dec_label_pc_25bc
  %4 = load i32, i32* @global_var_615c, align 4, !insn.addr !530
  ret i32 %4, !insn.addr !531
}

define i32 @init_order_test() local_unnamed_addr {
dec_label_pc_25e3:
  %rax.0.reg2mem = alloca i32, !insn.addr !532
  %stack_var_-20 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !533
  store i32 20, i32* %stack_var_-20, align 4, !insn.addr !534
  %1 = call i32 @init_depends_on(i32* nonnull %stack_var_-20), !insn.addr !535
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !536
  %3 = icmp eq i64 %0, %2, !insn.addr !536
  store i32 %1, i32* %rax.0.reg2mem, !insn.addr !537
  br i1 %3, label %dec_label_pc_2625, label %dec_label_pc_2620, !insn.addr !537

dec_label_pc_2620:                                ; preds = %dec_label_pc_25e3
  call void @__stack_chk_fail(), !insn.addr !538
  store i32 ptrtoint (i32* @1 to i32), i32* %rax.0.reg2mem, !insn.addr !538
  br label %dec_label_pc_2625, !insn.addr !538

dec_label_pc_2625:                                ; preds = %dec_label_pc_2620, %dec_label_pc_25e3
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !539

; uselistorder directives
  uselistorder i32 20, { 4, 1, 5, 2, 0, 3 }
}

define void @test_static_global() local_unnamed_addr {
dec_label_pc_2627:
  %stack_var_-20 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !540
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_3360 to i8*)), !insn.addr !541
  %2 = call i32 @global_var_access(), !insn.addr !542
  %3 = zext i32 %2 to i64, !insn.addr !543
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3388, i64 0, i64 0), i64 %3), !insn.addr !544
  %5 = call i32 @global_var_read(), !insn.addr !545
  %6 = zext i32 %5 to i64, !insn.addr !546
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_33b0, i64 0, i64 0), i64 %6), !insn.addr !547
  %8 = call i32 @global_array_access(i32 5), !insn.addr !548
  %9 = zext i32 %8 to i64, !insn.addr !549
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_33d8, i64 0, i64 0), i64 %9), !insn.addr !550
  %11 = call i32 @static_local(i32 1), !insn.addr !551
  %12 = call i32 @static_local(i32 0), !insn.addr !552
  %13 = zext i32 %12 to i64, !insn.addr !553
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_33fd, i64 0, i64 0), i64 %13), !insn.addr !554
  %15 = call i32 @static_local(i32 0), !insn.addr !555
  %16 = zext i32 %15 to i64, !insn.addr !556
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_33fd, i64 0, i64 0), i64 %16), !insn.addr !557
  %18 = call i32 @call_static_func(i32 5), !insn.addr !558
  %19 = zext i32 %18 to i64, !insn.addr !559
  %20 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3420, i64 0, i64 0), i64 %19), !insn.addr !560
  %21 = call i32 @access_extern_global(), !insn.addr !561
  %22 = zext i32 %21 to i64, !insn.addr !562
  %23 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3448, i64 0, i64 0), i64 %22), !insn.addr !563
  %24 = call i32 @call_extern_func(), !insn.addr !564
  %25 = zext i32 %24 to i64, !insn.addr !565
  %26 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3470, i64 0, i64 0), i64 %25), !insn.addr !566
  %27 = call i32 @read_const_data(), !insn.addr !567
  %28 = zext i32 %27 to i64, !insn.addr !568
  %29 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3498, i64 0, i64 0), i64 %28), !insn.addr !569
  %30 = call i32 @access_bss_var(), !insn.addr !570
  %31 = zext i32 %30 to i64, !insn.addr !571
  %32 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_34c0, i64 0, i64 0), i64 %31), !insn.addr !572
  %33 = call i32 @access_bss_buffer(), !insn.addr !573
  %34 = zext i32 %33 to i64, !insn.addr !574
  %35 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_34e0, i64 0, i64 0), i64 %34), !insn.addr !575
  %36 = call i32 @global_struct_access(), !insn.addr !576
  %37 = zext i32 %36 to i64, !insn.addr !577
  %38 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3508, i64 0, i64 0), i64 %37), !insn.addr !578
  call void @set_file_static(i32 50), !insn.addr !579
  %39 = call i32 @get_file_static(), !insn.addr !580
  %40 = zext i32 %39 to i64, !insn.addr !581
  %41 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_352e, i64 0, i64 0), i64 %40), !insn.addr !582
  call void @set_global_callback(i32 (i32)* inttoptr (i64 4873 to i32 (i32)*)), !insn.addr !583
  %42 = call i32 @call_global_callback(i32 5), !insn.addr !584
  %43 = zext i32 %42 to i64, !insn.addr !585
  %44 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3550, i64 0, i64 0), i64 %43), !insn.addr !586
  store i32 100, i32* %stack_var_-20, align 4, !insn.addr !587
  %45 = call i32 @global_heap_store(i32* nonnull %stack_var_-20), !insn.addr !588
  %46 = zext i32 %45 to i64, !insn.addr !589
  %47 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3578, i64 0, i64 0), i64 %46), !insn.addr !590
  %48 = call i32 @static_complex_init(), !insn.addr !591
  %49 = zext i32 %48 to i64, !insn.addr !592
  %50 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_35a0, i64 0, i64 0), i64 %49), !insn.addr !593
  %51 = call i32 @tls_access(i32 10), !insn.addr !594
  %52 = zext i32 %51 to i64, !insn.addr !595
  %53 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_35c5, i64 0, i64 0), i64 %52), !insn.addr !596
  %54 = call i32 @init_order_test(), !insn.addr !597
  %55 = zext i32 %54 to i64, !insn.addr !598
  %56 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_35e8, i64 0, i64 0), i64 %55), !insn.addr !599
  %57 = call i64 @__readfsqword(i64 40), !insn.addr !600
  %58 = icmp eq i64 %0, %57, !insn.addr !600
  br i1 %58, label %dec_label_pc_28d2, label %dec_label_pc_28cd, !insn.addr !601

dec_label_pc_28cd:                                ; preds = %dec_label_pc_2627
  call void @__stack_chk_fail(), !insn.addr !602
  br label %dec_label_pc_28d2, !insn.addr !602

dec_label_pc_28d2:                                ; preds = %dec_label_pc_28cd, %dec_label_pc_2627
  ret void, !insn.addr !603

; uselistorder directives
  uselistorder i32 100, { 2, 3, 0, 1 }
  uselistorder i32 (i32)* @static_local, { 2, 1, 0 }
}

define i32 @memop_memset(i8* %buf, i64 %size, i32 %fill_value) local_unnamed_addr {
dec_label_pc_28d4:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i32, !insn.addr !604
  %1 = load i64, i64* %0
  %2 = icmp ne i8* %buf, null, !insn.addr !605
  %3 = icmp eq i64 %size, 0, !insn.addr !606
  %4 = icmp eq i1 %3, false, !insn.addr !607
  %or.cond = icmp eq i1 %2, %4
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !608
  br i1 %or.cond, label %dec_label_pc_2900, label %dec_label_pc_291f, !insn.addr !608

dec_label_pc_2900:                                ; preds = %dec_label_pc_28d4
  %5 = trunc i64 %1 to i32
  %6 = bitcast i8* %buf to i64*
  %7 = trunc i64 %size to i32, !insn.addr !609
  %8 = call i64* @memset(i64* %6, i32 %fill_value, i32 %7), !insn.addr !609
  %phitmp = urem i32 %5, 256
  store i32 %phitmp, i32* %storemerge.reg2mem, !insn.addr !610
  br label %dec_label_pc_291f, !insn.addr !610

dec_label_pc_291f:                                ; preds = %dec_label_pc_28d4, %dec_label_pc_2900
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !611

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 %size, { 1, 0 }
  uselistorder label %dec_label_pc_291f, { 1, 0 }
}

define i32 @memop_memcpy(i8* %dst, i32* %src, i64 %n) local_unnamed_addr {
dec_label_pc_2921:
  %storemerge.reg2mem = alloca i32, !insn.addr !612
  %0 = icmp ne i8* %dst, null, !insn.addr !613
  %1 = icmp ne i32* %src, null, !insn.addr !614
  %or.cond.not = icmp eq i1 %0, %1
  %2 = icmp eq i64 %n, 0, !insn.addr !615
  %3 = icmp eq i1 %2, false, !insn.addr !616
  %or.cond5 = icmp eq i1 %or.cond.not, %3
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !617
  br i1 %or.cond5, label %dec_label_pc_2955, label %dec_label_pc_2981, !insn.addr !617

dec_label_pc_2955:                                ; preds = %dec_label_pc_2921
  %4 = bitcast i8* %dst to i64*
  %5 = bitcast i32* %src to i64*
  %6 = trunc i64 %n to i32, !insn.addr !618
  %7 = call i64* @memcpy(i64* %4, i64* %5, i32 %6), !insn.addr !618
  %8 = add i64 %n, -4
  %9 = and i64 %8, -4, !insn.addr !619
  %10 = ptrtoint i8* %dst to i64, !insn.addr !620
  %11 = add i64 %9, %10, !insn.addr !621
  %12 = inttoptr i64 %11 to i32*, !insn.addr !622
  %13 = load i32, i32* %12, align 4, !insn.addr !622
  store i32 %13, i32* %storemerge.reg2mem, !insn.addr !622
  br label %dec_label_pc_2981, !insn.addr !622

dec_label_pc_2981:                                ; preds = %dec_label_pc_2921, %dec_label_pc_2955
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !623

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 %n, { 1, 2, 0 }
  uselistorder i32* %src, { 1, 0 }
  uselistorder label %dec_label_pc_2981, { 1, 0 }
}

define i32 @memop_memmove(i8* %buf, i64 %n) local_unnamed_addr {
dec_label_pc_2983:
  %storemerge.reg2mem = alloca i32, !insn.addr !624
  %0 = icmp eq i8* %buf, null, !insn.addr !625
  %1 = icmp ult i64 %n, 2
  %or.cond = or i1 %0, %1
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !626
  br i1 %or.cond, label %dec_label_pc_29d9, label %dec_label_pc_29ac, !insn.addr !626

dec_label_pc_29ac:                                ; preds = %dec_label_pc_2983
  %2 = ptrtoint i8* %buf to i64, !insn.addr !627
  %3 = add i64 %2, 1, !insn.addr !628
  %4 = inttoptr i64 %3 to i64*, !insn.addr !629
  %5 = bitcast i8* %buf to i64*
  %6 = trunc i64 %n to i32
  %7 = add i32 %6, -1, !insn.addr !629
  %8 = call i64* @memmove(i64* %4, i64* %5, i32 %7), !insn.addr !629
  %9 = inttoptr i64 %3 to i8*, !insn.addr !630
  %10 = load i8, i8* %9, align 1, !insn.addr !630
  %phitmp = sext i8 %10 to i32
  store i32 %phitmp, i32* %storemerge.reg2mem, !insn.addr !631
  br label %dec_label_pc_29d9, !insn.addr !631

dec_label_pc_29d9:                                ; preds = %dec_label_pc_2983, %dec_label_pc_29ac
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !632

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i8* %buf, { 1, 0, 2 }
  uselistorder label %dec_label_pc_29d9, { 1, 0 }
}

define i32 @memop_memcmp(i32* %p1, i32* %p2, i64 %n) local_unnamed_addr {
dec_label_pc_29db:
  %0 = icmp ne i32* %p1, null, !insn.addr !633
  %1 = icmp ne i32* %p2, null, !insn.addr !634
  %or.cond.not = icmp eq i1 %0, %1
  %2 = icmp eq i64 %n, 0, !insn.addr !635
  %3 = icmp eq i1 %2, false, !insn.addr !636
  %or.cond5 = icmp eq i1 %or.cond.not, %3
  br i1 %or.cond5, label %dec_label_pc_2a0f, label %dec_label_pc_2a48, !insn.addr !637

dec_label_pc_2a0f:                                ; preds = %dec_label_pc_29db
  %4 = bitcast i32* %p1 to i64*
  %5 = bitcast i32* %p2 to i64*
  %6 = trunc i64 %n to i32, !insn.addr !638
  %7 = call i32 @memcmp(i64* %4, i64* %5, i32 %6), !insn.addr !638
  %8 = icmp eq i32 %7, 0, !insn.addr !639
  %9 = icmp slt i32 %7, 0, !insn.addr !639
  %10 = icmp eq i1 %9, false, !insn.addr !640
  %11 = icmp eq i1 %8, false, !insn.addr !640
  %12 = icmp eq i1 %10, %11, !insn.addr !640
  %not. = icmp ne i1 %10, true
  %. = sext i1 %not. to i32
  %spec.select = select i1 %12, i32 1, i32 %.
  ret i32 %spec.select

dec_label_pc_2a48:                                ; preds = %dec_label_pc_29db
  ret i32 0, !insn.addr !641

; uselistorder directives
  uselistorder i32 %7, { 1, 0 }
  uselistorder i64 %n, { 1, 0 }
  uselistorder i32* %p2, { 1, 0 }
}

define i32 @memop_bzero(i8* %buf, i64 %n) local_unnamed_addr {
dec_label_pc_2a4a:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i32, !insn.addr !642
  %1 = load i64, i64* %0
  %2 = icmp eq i8* %buf, null, !insn.addr !643
  %3 = icmp eq i1 %2, false, !insn.addr !644
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !644
  br i1 %3, label %dec_label_pc_2a6c, label %dec_label_pc_2a91, !insn.addr !644

dec_label_pc_2a6c:                                ; preds = %dec_label_pc_2a4a
  %4 = trunc i64 %1 to i32
  %5 = bitcast i8* %buf to i64*
  %6 = trunc i64 %n to i32, !insn.addr !645
  %7 = call i64* @memset(i64* %5, i32 0, i32 %6), !insn.addr !645
  %phitmp = urem i32 %4, 256
  store i32 %phitmp, i32* %storemerge.reg2mem, !insn.addr !646
  br label %dec_label_pc_2a91, !insn.addr !646

dec_label_pc_2a91:                                ; preds = %dec_label_pc_2a4a, %dec_label_pc_2a6c
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !647

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* (i64*, i32, i32)* @memset, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2a91, { 1, 0 }
}

define i32 @memop_bcopy(i32* %src, i8* %dst, i64 %n) local_unnamed_addr {
dec_label_pc_2a93:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i32, !insn.addr !648
  %1 = load i64, i64* %0
  %2 = icmp ne i32* %src, null, !insn.addr !649
  %3 = icmp ne i8* %dst, null, !insn.addr !650
  %or.cond.not = icmp eq i1 %2, %3
  %4 = icmp eq i64 %n, 0, !insn.addr !651
  %5 = icmp eq i1 %4, false, !insn.addr !652
  %or.cond5 = icmp eq i1 %or.cond.not, %5
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !653
  br i1 %or.cond5, label %dec_label_pc_2ac7, label %dec_label_pc_2ae8, !insn.addr !653

dec_label_pc_2ac7:                                ; preds = %dec_label_pc_2a93
  %6 = trunc i64 %1 to i32
  %7 = bitcast i8* %dst to i64*
  %8 = bitcast i32* %src to i64*
  %9 = trunc i64 %n to i32, !insn.addr !654
  %10 = call i64* @memmove(i64* %7, i64* %8, i32 %9), !insn.addr !654
  %phitmp = urem i32 %6, 256
  store i32 %phitmp, i32* %storemerge.reg2mem, !insn.addr !655
  br label %dec_label_pc_2ae8, !insn.addr !655

dec_label_pc_2ae8:                                ; preds = %dec_label_pc_2a93, %dec_label_pc_2ac7
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !656

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* (i64*, i64*, i32)* @memmove, { 1, 0, 2 }
  uselistorder i64 %n, { 1, 0 }
  uselistorder i8* %dst, { 1, 0 }
  uselistorder label %dec_label_pc_2ae8, { 1, 0 }
}

define i32 @memop_unaligned_access(i8* %buf) local_unnamed_addr {
dec_label_pc_2aea:
  %rax.0.reg2mem = alloca i32, !insn.addr !657
  %storemerge.reg2mem = alloca i32, !insn.addr !657
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !658
  %1 = icmp eq i8* %buf, null, !insn.addr !659
  %2 = icmp eq i1 %1, false, !insn.addr !660
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !660
  br i1 %2, label %dec_label_pc_2b17, label %dec_label_pc_2b27, !insn.addr !660

dec_label_pc_2b17:                                ; preds = %dec_label_pc_2aea
  %3 = ptrtoint i8* %buf to i64, !insn.addr !661
  %4 = add i64 %3, 1, !insn.addr !662
  %5 = inttoptr i64 %4 to i32*, !insn.addr !663
  %6 = load i32, i32* %5, align 4, !insn.addr !663
  store i32 %6, i32* %storemerge.reg2mem, !insn.addr !664
  br label %dec_label_pc_2b27, !insn.addr !664

dec_label_pc_2b27:                                ; preds = %dec_label_pc_2aea, %dec_label_pc_2b17
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %7 = call i64 @__readfsqword(i64 40), !insn.addr !665
  %8 = icmp eq i64 %0, %7, !insn.addr !665
  store i32 %storemerge.reload, i32* %rax.0.reg2mem, !insn.addr !666
  br i1 %8, label %dec_label_pc_2b3b, label %dec_label_pc_2b36, !insn.addr !666

dec_label_pc_2b36:                                ; preds = %dec_label_pc_2b27
  call void @__stack_chk_fail(), !insn.addr !667
  store i32 ptrtoint (i32* @1 to i32), i32* %rax.0.reg2mem, !insn.addr !667
  br label %dec_label_pc_2b3b, !insn.addr !667

dec_label_pc_2b3b:                                ; preds = %dec_label_pc_2b36, %dec_label_pc_2b27
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !668

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 1, { 12, 13, 7, 0, 8, 9, 2, 1, 3, 10, 11, 4, 5, 6 }
  uselistorder i8* null, { 1, 0, 2, 3, 4, 5 }
  uselistorder label %dec_label_pc_2b27, { 1, 0 }
}

define i32 @memop_memory_barrier(i32* %flag) local_unnamed_addr {
dec_label_pc_2b3d:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i32* %flag, null, !insn.addr !669
  %3 = icmp eq i1 %2, false, !insn.addr !670
  %4 = trunc i64 %1 to i32
  %5 = mul i32 %4, 2
  %storemerge = select i1 %3, i32 %5, i32 -1
  ret i32 %storemerge, !insn.addr !671

; uselistorder directives
  uselistorder i32 -1, { 21, 0, 1, 2, 24, 3, 4, 5, 22, 23, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 }
  uselistorder i32 2, { 0, 1, 2, 3, 4, 5, 10, 6, 7, 8, 9 }
  uselistorder i1 false, { 11, 12, 2, 13, 14, 6, 3, 4, 5, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 0, 26, 27, 1, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 7, 10, 8, 9 }
  uselistorder i32* null, { 5, 6, 3, 7, 4, 8, 9, 10, 2, 11, 0, 12, 1, 13, 14, 15 }
}

define void @test_memory_op_functions() local_unnamed_addr {
dec_label_pc_2b73:
  %cmp_b_-404 = alloca [3 x i32], align 4
  %zero_buf_-309 = alloca [10 x i8], align 1
  %stack_var_-313 = alloca i32, align 4
  %zero_buf_-317 = alloca [10 x i8], align 1
  %stack_var_-301 = alloca i64, align 8
  %stack_var_-388 = alloca i32, align 4
  %stack_var_-400 = alloca i32, align 4
  %stack_var_-291 = alloca i64, align 8
  %stack_var_-280 = alloca i64, align 8
  %stack_var_-344 = alloca i64, align 8
  %stack_var_-376 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !672
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_3610 to i8*)), !insn.addr !673
  store i32 10, i32* %stack_var_-376, align 4, !insn.addr !674
  store i64 0, i64* %stack_var_-344, align 8, !insn.addr !675
  %2 = bitcast i64* %stack_var_-280 to i8*, !insn.addr !676
  %3 = call i32 @memop_memset(i8* nonnull %2, i64 10, i32 65), !insn.addr !676
  %4 = zext i32 %3 to i64, !insn.addr !677
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3631, i64 0, i64 0), i64 %4), !insn.addr !678
  %6 = bitcast i64* %stack_var_-344 to i8*, !insn.addr !679
  %7 = call i32 @memop_memcpy(i8* nonnull %6, i32* nonnull %stack_var_-376, i64 20), !insn.addr !679
  %8 = zext i32 %7 to i64, !insn.addr !680
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3642, i64 0, i64 0), i64 %8), !insn.addr !681
  store i64 8245905578810697032, i64* %stack_var_-291, align 8, !insn.addr !682
  %10 = bitcast i64* %stack_var_-291 to i8*, !insn.addr !683
  %11 = call i32 @memop_memmove(i8* nonnull %10, i64 10), !insn.addr !683
  %12 = trunc i32 %11 to i8, !insn.addr !684
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3653, i64 0, i64 0), i8 %12), !insn.addr !684
  store i32 1, i32* %stack_var_-400, align 4, !insn.addr !685
  store i32 1, i32* %stack_var_-388, align 4, !insn.addr !686
  %14 = call i32 @memop_memcmp(i32* nonnull %stack_var_-400, i32* nonnull %stack_var_-388, i64 12), !insn.addr !687
  %15 = zext i32 %14 to i64, !insn.addr !688
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3664, i64 0, i64 0), i64 %15), !insn.addr !689
  %17 = bitcast i64* %stack_var_-301 to i8*, !insn.addr !690
  %18 = call i32 @memop_bzero(i8* nonnull %17, i64 10), !insn.addr !690
  %19 = zext i32 %18 to i64, !insn.addr !691
  %20 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3675, i64 0, i64 0), i64 %19), !insn.addr !692
  store [10 x i8] [i8 1, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef], [10 x i8]* %zero_buf_-317, align 1, !insn.addr !693
  store i32 0, i32* %stack_var_-313, align 4, !insn.addr !694
  %21 = bitcast [10 x i8]* %zero_buf_-317 to i32*, !insn.addr !695
  %22 = bitcast i32* %stack_var_-313 to i8*, !insn.addr !695
  %23 = call i32 @memop_bcopy(i32* nonnull %21, i8* nonnull %22, i64 4), !insn.addr !695
  %24 = zext i32 %23 to i64, !insn.addr !696
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3686, i64 0, i64 0), i64 %24), !insn.addr !697
  store [10 x i8] [i8 0, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef], [10 x i8]* %zero_buf_-309, align 1, !insn.addr !698
  %26 = getelementptr inbounds [10 x i8], [10 x i8]* %zero_buf_-309, i64 0, i64 0, !insn.addr !699
  %27 = call i32 @memop_unaligned_access(i8* nonnull %26), !insn.addr !699
  %28 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_3697, i64 0, i64 0), i32 %27), !insn.addr !700
  store [3 x i32] [i32 5, i32 undef, i32 undef], [3 x i32]* %cmp_b_-404, align 4, !insn.addr !701
  %29 = getelementptr inbounds [3 x i32], [3 x i32]* %cmp_b_-404, i64 0, i64 0, !insn.addr !702
  %30 = call i32 @memop_memory_barrier(i32* nonnull %29), !insn.addr !702
  %31 = zext i32 %30 to i64, !insn.addr !703
  %32 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_36aa, i64 0, i64 0), i64 %31), !insn.addr !704
  %33 = call i64 @__readfsqword(i64 40), !insn.addr !705
  %34 = icmp eq i64 %0, %33, !insn.addr !705
  br i1 %34, label %dec_label_pc_2dfc, label %dec_label_pc_2df7, !insn.addr !706

dec_label_pc_2df7:                                ; preds = %dec_label_pc_2b73
  call void @__stack_chk_fail(), !insn.addr !707
  br label %dec_label_pc_2dfc, !insn.addr !707

dec_label_pc_2dfc:                                ; preds = %dec_label_pc_2df7, %dec_label_pc_2b73
  ret void, !insn.addr !708

; uselistorder directives
  uselistorder void ()* @__stack_chk_fail, { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 11 }
  uselistorder i8 0, { 0, 1, 3, 2 }
  uselistorder i64 4, { 15, 0, 1, 2, 16, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 }
  uselistorder i32 (i8*, ...)* @printf, { 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 49 }
  uselistorder i64 10, { 2, 3, 4, 0, 1 }
  uselistorder i32 10, { 9, 3, 1, 4, 5, 10, 6, 2, 11, 0, 7, 8, 12 }
  uselistorder i32 (i8*)* @puts, { 3, 2, 1, 0, 4 }
  uselistorder i64 0, { 41, 42, 37, 38, 43, 44, 39, 40, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 137, 15, 16, 17, 18, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 141, 103, 104, 138, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 0, 115, 116, 1, 142, 143, 144, 145, 13, 12, 146, 14, 2, 147, 3, 4, 5, 6, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 117, 118, 131, 132, 133, 134, 135, 136, 7, 8, 9, 139, 11, 10, 140, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_2dfe:
  call void @test_stack_memory(), !insn.addr !709
  call void @test_heap_memory(), !insn.addr !710
  call void @test_static_global(), !insn.addr !711
  call void @test_memory_op_functions(), !insn.addr !712
  ret i32 0, !insn.addr !713

; uselistorder directives
  uselistorder i32 0, { 10, 35, 24, 11, 37, 38, 25, 26, 23, 39, 40, 27, 28, 41, 0, 12, 17, 1, 2, 3, 4, 13, 5, 18, 7, 6, 19, 14, 8, 20, 36, 15, 21, 42, 43, 16, 9, 22, 29, 30, 31, 32, 33, 34 }
}

define i32 @extern_function(i32 %x) local_unnamed_addr {
dec_label_pc_2e35:
  %0 = mul i32 %x, 3, !insn.addr !714
  ret i32 %0, !insn.addr !715

; uselistorder directives
  uselistorder i32 3, { 1, 0, 2, 3 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_2e4c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !716

; uselistorder directives
  uselistorder i32 1, { 8, 77, 79, 84, 83, 82, 81, 80, 78, 76, 75, 74, 73, 72, 7, 11, 10, 12, 6, 13, 5, 66, 14, 15, 16, 4, 67, 85, 86, 17, 3, 99, 18, 100, 68, 87, 70, 21, 20, 19, 22, 2, 23, 101, 25, 24, 27, 26, 89, 88, 71, 35, 34, 33, 32, 31, 30, 29, 28, 36, 37, 102, 40, 39, 38, 90, 46, 45, 44, 43, 42, 41, 50, 49, 48, 47, 103, 53, 52, 51, 93, 92, 91, 54, 104, 94, 57, 56, 55, 105, 69, 95, 60, 59, 58, 106, 96, 62, 61, 9, 1, 97, 64, 63, 0, 98, 65 }
}

declare void @free(i64*) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i64* @memset(i64*, i32, i32) local_unnamed_addr

declare i32 @memcmp(i64*, i64*, i32) local_unnamed_addr

declare i64* @calloc(i32, i32) local_unnamed_addr

declare i64* @memcpy(i64*, i64*, i32) local_unnamed_addr

declare i64* @malloc(i32) local_unnamed_addr

declare i64* @realloc(i64*, i32) local_unnamed_addr

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

declare void @__writefsdword(i64, i32) local_unnamed_addr

declare i32 @__readfsdword(i64) local_unnamed_addr

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
!37 = !{i64 4887}
!38 = !{i64 4890}
!39 = !{i64 4911}
!40 = !{i64 4919}
!41 = !{i64 4929}
!42 = !{i64 4930}
!43 = !{i64 4935}
!44 = !{i64 4945}
!45 = !{i64 4983}
!46 = !{i64 4972}
!47 = !{i64 4995}
!48 = !{i64 5004}
!49 = !{i64 5013}
!50 = !{i64 5015}
!51 = !{i64 5021}
!52 = !{i64 5053}
!53 = !{i64 5056}
!54 = !{i64 5083}
!55 = !{i64 5089}
!56 = !{i64 5130}
!57 = !{i64 5133}
!58 = !{i64 5134}
!59 = !{i64 5149}
!60 = !{i64 5216}
!61 = !{i64 5139}
!62 = !{i64 5192}
!63 = !{i64 5190}
!64 = !{i64 5199}
!65 = !{i64 5218}
!66 = !{i64 5225}
!67 = !{i64 5232}
!68 = !{i64 5241}
!69 = !{i64 5243}
!70 = !{i64 5249}
!71 = !{i64 5250}
!72 = !{i64 5266}
!73 = !{i64 5291}
!74 = !{i64 5300}
!75 = !{i64 5259}
!76 = !{i64 5349}
!77 = !{i64 5351}
!78 = !{i64 5368}
!79 = !{i64 5391}
!80 = !{i64 5401}
!81 = !{i64 5430}
!82 = !{i64 5436}
!83 = !{i64 5513}
!84 = !{i64 5526}
!85 = !{i64 5533}
!86 = !{i64 5536}
!87 = !{i64 5538}
!88 = !{i64 5546}
!89 = !{i64 5549}
!90 = !{i64 5559}
!91 = !{i64 5568}
!92 = !{i64 5570}
!93 = !{i64 5580}
!94 = !{i64 5581}
!95 = !{i64 5596}
!96 = !{i64 5611}
!97 = !{i64 5615}
!98 = !{i64 5589}
!99 = !{i64 5630}
!100 = !{i64 5632}
!101 = !{i64 5649}
!102 = !{i64 5672}
!103 = !{i64 5711}
!104 = !{i64 5682}
!105 = !{i64 5717}
!106 = !{i64 5753}
!107 = !{i64 5757}
!108 = !{i64 5820}
!109 = !{i64 5783}
!110 = !{i64 5795}
!111 = !{i64 5806}
!112 = !{i64 5808}
!113 = !{i64 5827}
!114 = !{i64 5830}
!115 = !{i64 5832}
!116 = !{i64 5834}
!117 = !{i64 5836}
!118 = !{i64 5848}
!119 = !{i64 5851}
!120 = !{i64 5857}
!121 = !{i64 5866}
!122 = !{i64 5868}
!123 = !{i64 5874}
!124 = !{i64 5875}
!125 = !{i64 5895}
!126 = !{i64 5977}
!127 = !{i64 5986}
!128 = !{i64 5988}
!129 = !{i64 5994}
!130 = !{i64 6007}
!131 = !{i64 6032}
!132 = !{i64 6042}
!133 = !{i64 6047}
!134 = !{i64 6064}
!135 = !{i64 6074}
!136 = !{i64 6079}
!137 = !{i64 6096}
!138 = !{i64 6106}
!139 = !{i64 6111}
!140 = !{i64 6128}
!141 = !{i64 6140}
!142 = !{i64 6145}
!143 = !{i64 6162}
!144 = !{i64 6207}
!145 = !{i64 6235}
!146 = !{i64 6240}
!147 = !{i64 6257}
!148 = !{i64 6267}
!149 = !{i64 6272}
!150 = !{i64 6289}
!151 = !{i64 6299}
!152 = !{i64 6304}
!153 = !{i64 6321}
!154 = !{i64 6331}
!155 = !{i64 6336}
!156 = !{i64 6353}
!157 = !{i64 6358}
!158 = !{i64 6379}
!159 = !{i64 6384}
!160 = !{i64 6401}
!161 = !{i64 6411}
!162 = !{i64 6420}
!163 = !{i64 6422}
!164 = !{i64 6428}
!165 = !{i64 6429}
!166 = !{i64 6449}
!167 = !{i64 6456}
!168 = !{i64 6465}
!169 = !{i64 6470}
!170 = !{i64 6525}
!171 = !{i64 6493}
!172 = !{i64 6505}
!173 = !{i64 6511}
!174 = !{i64 6513}
!175 = !{i64 6515}
!176 = !{i64 6532}
!177 = !{i64 6535}
!178 = !{i64 6537}
!179 = !{i64 6539}
!180 = !{i64 6541}
!181 = !{i64 6553}
!182 = !{i64 6556}
!183 = !{i64 6568}
!184 = !{i64 6573}
!185 = !{i64 6577}
!186 = !{i64 6578}
!187 = !{i64 6606}
!188 = !{i64 6615}
!189 = !{i64 6620}
!190 = !{i64 6680}
!191 = !{i64 6650}
!192 = !{i64 6662}
!193 = !{i64 6665}
!194 = !{i64 6667}
!195 = !{i64 6689}
!196 = !{i64 6694}
!197 = !{i64 6698}
!198 = !{i64 6699}
!199 = !{i64 6716}
!200 = !{i64 6721}
!201 = !{i64 6725}
!202 = !{i64 6730}
!203 = !{i64 6764}
!204 = !{i64 6756}
!205 = !{i64 6768}
!206 = !{i64 6777}
!207 = !{i64 6787}
!208 = !{i64 6789}
!209 = !{i64 6793}
!210 = !{i64 6811}
!211 = !{i64 6820}
!212 = !{i64 6825}
!213 = !{i64 6834}
!214 = !{i64 6844}
!215 = !{i64 6876}
!216 = !{i64 6868}
!217 = !{i64 6880}
!218 = !{i64 6896}
!219 = !{i64 6906}
!220 = !{i64 6908}
!221 = !{i64 6912}
!222 = !{i64 6916}
!223 = !{i64 6918}
!224 = !{i64 6921}
!225 = !{i64 6927}
!226 = !{i64 6930}
!227 = !{i64 6947}
!228 = !{i64 6952}
!229 = !{i64 6956}
!230 = !{i64 6957}
!231 = !{i64 6977}
!232 = !{i64 6984}
!233 = !{i64 6993}
!234 = !{i64 6998}
!235 = !{i64 7058}
!236 = !{i64 7021}
!237 = !{i64 7033}
!238 = !{i64 7044}
!239 = !{i64 7046}
!240 = !{i64 7048}
!241 = !{i64 7065}
!242 = !{i64 7068}
!243 = !{i64 7070}
!244 = !{i64 7072}
!245 = !{i64 7074}
!246 = !{i64 7086}
!247 = !{i64 7089}
!248 = !{i64 7101}
!249 = !{i64 7106}
!250 = !{i64 7110}
!251 = !{i64 7111}
!252 = !{i64 7131}
!253 = !{i64 7140}
!254 = !{i64 7145}
!255 = !{i64 7161}
!256 = !{i64 7166}
!257 = !{i64 7173}
!258 = !{i64 7180}
!259 = !{i64 7189}
!260 = !{i64 7201}
!261 = !{i64 7206}
!262 = !{i64 7210}
!263 = !{i64 7211}
!264 = !{i64 7233}
!265 = !{i64 7245}
!266 = !{i64 7274}
!267 = !{i64 7292}
!268 = !{i64 7297}
!269 = !{i64 7312}
!270 = !{i64 7315}
!271 = !{i64 7327}
!272 = !{i64 7337}
!273 = !{i64 7350}
!274 = !{i64 7363}
!275 = !{i64 7367}
!276 = !{i64 7375}
!277 = !{i64 7385}
!278 = !{i64 7386}
!279 = !{i64 7398}
!280 = !{i64 7406}
!281 = !{i64 7431}
!282 = !{i64 7436}
!283 = !{i64 7440}
!284 = !{i64 7445}
!285 = !{i64 7481}
!286 = !{i64 7486}
!287 = !{i64 7457}
!288 = !{i64 7461}
!289 = !{i64 7465}
!290 = !{i64 7476}
!291 = !{i64 7508}
!292 = !{i64 7516}
!293 = !{i64 7518}
!294 = !{i64 7522}
!295 = !{i64 7530}
!296 = !{i64 7535}
!297 = !{i64 7553}
!298 = !{i64 7555}
!299 = !{i64 7559}
!300 = !{i64 7563}
!301 = !{i64 7571}
!302 = !{i64 7575}
!303 = !{i64 7579}
!304 = !{i64 7583}
!305 = !{i64 7627}
!306 = !{i64 7632}
!307 = !{i64 7610}
!308 = !{i64 7612}
!309 = !{i64 7619}
!310 = !{i64 7644}
!311 = !{i64 7648}
!312 = !{i64 7652}
!313 = !{i64 7663}
!314 = !{i64 7668}
!315 = !{i64 7673}
!316 = !{i64 7679}
!317 = !{i64 7700}
!318 = !{i64 7709}
!319 = !{i64 7714}
!320 = !{i64 7723}
!321 = !{i64 7725}
!322 = !{i64 7729}
!323 = !{i64 7741}
!324 = !{i64 7754}
!325 = !{i64 7755}
!326 = !{i64 7772}
!327 = !{i64 7781}
!328 = !{i64 7786}
!329 = !{i64 7803}
!330 = !{i64 7812}
!331 = !{i64 7821}
!332 = !{i64 7830}
!333 = !{i64 7842}
!334 = !{i64 7845}
!335 = !{i64 7855}
!336 = !{i64 7858}
!337 = !{i64 7884}
!338 = !{i64 7893}
!339 = !{i64 7897}
!340 = !{i64 7900}
!341 = !{i64 7913}
!342 = !{i64 7925}
!343 = !{i64 7935}
!344 = !{i64 7941}
!345 = !{i64 7951}
!346 = !{i64 7953}
!347 = !{i64 7963}
!348 = !{i64 7965}
!349 = !{i64 7981}
!350 = !{i64 7990}
!351 = !{i64 7997}
!352 = !{i64 8009}
!353 = !{i64 8014}
!354 = !{i64 8018}
!355 = !{i64 8019}
!356 = !{i64 8039}
!357 = !{i64 8046}
!358 = !{i64 8055}
!359 = !{i64 8060}
!360 = !{i64 8113}
!361 = !{i64 8083}
!362 = !{i64 8095}
!363 = !{i64 8101}
!364 = !{i64 8120}
!365 = !{i64 8123}
!366 = !{i64 8125}
!367 = !{i64 8127}
!368 = !{i64 8129}
!369 = !{i64 8141}
!370 = !{i64 8144}
!371 = !{i64 8147}
!372 = !{i64 8148}
!373 = !{i64 8165}
!374 = !{i64 8174}
!375 = !{i64 8179}
!376 = !{i64 8192}
!377 = !{i64 8227}
!378 = !{i64 8239}
!379 = !{i64 8248}
!380 = !{i64 8253}
!381 = !{i64 8257}
!382 = !{i64 8258}
!383 = !{i64 8274}
!384 = !{i64 8279}
!385 = !{i64 8286}
!386 = !{i64 8295}
!387 = !{i64 8300}
!388 = !{i64 8313}
!389 = !{i64 8326}
!390 = !{i64 8338}
!391 = !{i64 8348}
!392 = !{i64 8354}
!393 = !{i64 8357}
!394 = !{i64 8358}
!395 = !{i64 8375}
!396 = !{i64 8384}
!397 = !{i64 8389}
!398 = !{i64 8412}
!399 = !{i64 8424}
!400 = !{i64 8430}
!401 = !{i64 8433}
!402 = !{i64 8435}
!403 = !{i64 8439}
!404 = !{i64 8443}
!405 = !{i64 8449}
!406 = !{i64 8461}
!407 = !{i64 8466}
!408 = !{i64 8470}
!409 = !{i64 8483}
!410 = !{i64 8508}
!411 = !{i64 8518}
!412 = !{i64 8523}
!413 = !{i64 8540}
!414 = !{i64 8550}
!415 = !{i64 8555}
!416 = !{i64 8572}
!417 = !{i64 8582}
!418 = !{i64 8587}
!419 = !{i64 8604}
!420 = !{i64 8614}
!421 = !{i64 8619}
!422 = !{i64 8636}
!423 = !{i64 8646}
!424 = !{i64 8651}
!425 = !{i64 8668}
!426 = !{i64 8673}
!427 = !{i64 8688}
!428 = !{i64 8693}
!429 = !{i64 8710}
!430 = !{i64 8715}
!431 = !{i64 8719}
!432 = !{i64 8722}
!433 = !{i64 8728}
!434 = !{i64 8735}
!435 = !{i64 8740}
!436 = !{i64 8747}
!437 = !{i64 8757}
!438 = !{i64 8762}
!439 = !{i64 8779}
!440 = !{i64 8789}
!441 = !{i64 8794}
!442 = !{i64 8811}
!443 = !{i64 8821}
!444 = !{i64 8826}
!445 = !{i64 8843}
!446 = !{i64 8863}
!447 = !{i64 8868}
!448 = !{i64 8876}
!449 = !{i64 8880}
!450 = !{i64 8887}
!451 = !{i64 8915}
!452 = !{i64 8925}
!453 = !{i64 8934}
!454 = !{i64 8953}
!455 = !{i64 8958}
!456 = !{i64 8961}
!457 = !{i64 8964}
!458 = !{i64 8966}
!459 = !{i64 8994}
!460 = !{i64 8999}
!461 = !{i64 9010}
!462 = !{i64 9012}
!463 = !{i64 9014}
!464 = !{i64 9039}
!465 = !{i64 9044}
!466 = !{i64 9056}
!467 = !{i64 9066}
!468 = !{i64 9075}
!469 = !{i64 9077}
!470 = !{i64 9083}
!471 = !{i64 9092}
!472 = !{i64 9098}
!473 = !{i64 9101}
!474 = !{i64 9114}
!475 = !{i64 9123}
!476 = !{i64 9129}
!477 = !{i64 9132}
!478 = !{i64 9133}
!479 = !{i64 9148}
!480 = !{i64 9166}
!481 = !{i64 9168}
!482 = !{i64 9183}
!483 = !{i64 9187}
!484 = !{i64 9199}
!485 = !{i64 9244}
!486 = !{i64 9259}
!487 = !{i64 9262}
!488 = !{i64 9283}
!489 = !{i64 9288}
!490 = !{i64 9292}
!491 = !{i64 9301}
!492 = !{i64 9307}
!493 = !{i64 9311}
!494 = !{i64 9325}
!495 = !{i64 9331}
!496 = !{i64 9365}
!497 = !{i64 9374}
!498 = !{i64 9381}
!499 = !{i64 9390}
!500 = !{i64 9401}
!501 = !{i64 9410}
!502 = !{i64 9416}
!503 = !{i64 9422}
!504 = !{i64 9425}
!505 = !{i64 9440}
!506 = !{i64 9448}
!507 = !{i64 9457}
!508 = !{i64 9464}
!509 = !{i64 9481}
!510 = !{i64 9490}
!511 = !{i64 9506}
!512 = !{i64 9513}
!513 = !{i64 9540}
!514 = !{i64 9557}
!515 = !{i64 9571}
!516 = !{i64 9593}
!517 = !{i64 9602}
!518 = !{i64 9608}
!519 = !{i64 9614}
!520 = !{i64 9616}
!521 = !{i64 9622}
!522 = !{i64 9625}
!523 = !{i64 9640}
!524 = !{i64 9648}
!525 = !{i64 9656}
!526 = !{i64 9659}
!527 = !{i64 9672}
!528 = !{i64 9677}
!529 = !{i64 9685}
!530 = !{i64 9691}
!531 = !{i64 9698}
!532 = !{i64 9699}
!533 = !{i64 9711}
!534 = !{i64 9726}
!535 = !{i64 9740}
!536 = !{i64 9749}
!537 = !{i64 9758}
!538 = !{i64 9760}
!539 = !{i64 9766}
!540 = !{i64 9779}
!541 = !{i64 9804}
!542 = !{i64 9814}
!543 = !{i64 9819}
!544 = !{i64 9836}
!545 = !{i64 9846}
!546 = !{i64 9851}
!547 = !{i64 9868}
!548 = !{i64 9878}
!549 = !{i64 9883}
!550 = !{i64 9900}
!551 = !{i64 9910}
!552 = !{i64 9920}
!553 = !{i64 9925}
!554 = !{i64 9942}
!555 = !{i64 9952}
!556 = !{i64 9957}
!557 = !{i64 9974}
!558 = !{i64 9984}
!559 = !{i64 9989}
!560 = !{i64 10006}
!561 = !{i64 10016}
!562 = !{i64 10021}
!563 = !{i64 10038}
!564 = !{i64 10048}
!565 = !{i64 10053}
!566 = !{i64 10070}
!567 = !{i64 10080}
!568 = !{i64 10085}
!569 = !{i64 10102}
!570 = !{i64 10112}
!571 = !{i64 10117}
!572 = !{i64 10134}
!573 = !{i64 10144}
!574 = !{i64 10149}
!575 = !{i64 10166}
!576 = !{i64 10176}
!577 = !{i64 10181}
!578 = !{i64 10198}
!579 = !{i64 10208}
!580 = !{i64 10218}
!581 = !{i64 10223}
!582 = !{i64 10240}
!583 = !{i64 10255}
!584 = !{i64 10265}
!585 = !{i64 10270}
!586 = !{i64 10287}
!587 = !{i64 10292}
!588 = !{i64 10306}
!589 = !{i64 10311}
!590 = !{i64 10328}
!591 = !{i64 10338}
!592 = !{i64 10343}
!593 = !{i64 10360}
!594 = !{i64 10370}
!595 = !{i64 10375}
!596 = !{i64 10392}
!597 = !{i64 10402}
!598 = !{i64 10407}
!599 = !{i64 10424}
!600 = !{i64 10434}
!601 = !{i64 10443}
!602 = !{i64 10445}
!603 = !{i64 10451}
!604 = !{i64 10452}
!605 = !{i64 10475}
!606 = !{i64 10482}
!607 = !{i64 10487}
!608 = !{i64 10480}
!609 = !{i64 10512}
!610 = !{i64 10524}
!611 = !{i64 10528}
!612 = !{i64 10529}
!613 = !{i64 10553}
!614 = !{i64 10560}
!615 = !{i64 10567}
!616 = !{i64 10572}
!617 = !{i64 10558}
!618 = !{i64 10599}
!619 = !{i64 10612}
!620 = !{i64 10616}
!621 = !{i64 10620}
!622 = !{i64 10623}
!623 = !{i64 10626}
!624 = !{i64 10627}
!625 = !{i64 10647}
!626 = !{i64 10652}
!627 = !{i64 10676}
!628 = !{i64 10680}
!629 = !{i64 10694}
!630 = !{i64 10707}
!631 = !{i64 10710}
!632 = !{i64 10714}
!633 = !{i64 10739}
!634 = !{i64 10746}
!635 = !{i64 10753}
!636 = !{i64 10758}
!637 = !{i64 10744}
!638 = !{i64 10785}
!639 = !{i64 10793}
!640 = !{i64 10797}
!641 = !{i64 10825}
!642 = !{i64 10826}
!643 = !{i64 10846}
!644 = !{i64 10851}
!645 = !{i64 10882}
!646 = !{i64 10894}
!647 = !{i64 10898}
!648 = !{i64 10899}
!649 = !{i64 10923}
!650 = !{i64 10930}
!651 = !{i64 10937}
!652 = !{i64 10942}
!653 = !{i64 10928}
!654 = !{i64 10969}
!655 = !{i64 10981}
!656 = !{i64 10985}
!657 = !{i64 10986}
!658 = !{i64 11002}
!659 = !{i64 11017}
!660 = !{i64 11022}
!661 = !{i64 11031}
!662 = !{i64 11035}
!663 = !{i64 11039}
!664 = !{i64 11044}
!665 = !{i64 11051}
!666 = !{i64 11060}
!667 = !{i64 11062}
!668 = !{i64 11068}
!669 = !{i64 11081}
!670 = !{i64 11086}
!671 = !{i64 11122}
!672 = !{i64 11138}
!673 = !{i64 11163}
!674 = !{i64 11168}
!675 = !{i64 11218}
!676 = !{i64 11270}
!677 = !{i64 11275}
!678 = !{i64 11292}
!679 = !{i64 11322}
!680 = !{i64 11327}
!681 = !{i64 11344}
!682 = !{i64 11359}
!683 = !{i64 11397}
!684 = !{i64 11419}
!685 = !{i64 11424}
!686 = !{i64 11454}
!687 = !{i64 11509}
!688 = !{i64 11514}
!689 = !{i64 11531}
!690 = !{i64 11551}
!691 = !{i64 11556}
!692 = !{i64 11573}
!693 = !{i64 11578}
!694 = !{i64 11588}
!695 = !{i64 11623}
!696 = !{i64 11628}
!697 = !{i64 11645}
!698 = !{i64 11660}
!699 = !{i64 11677}
!700 = !{i64 11699}
!701 = !{i64 11704}
!702 = !{i64 11724}
!703 = !{i64 11729}
!704 = !{i64 11746}
!705 = !{i64 11756}
!706 = !{i64 11765}
!707 = !{i64 11767}
!708 = !{i64 11773}
!709 = !{i64 11787}
!710 = !{i64 11797}
!711 = !{i64 11807}
!712 = !{i64 11817}
!713 = !{i64 11828}
!714 = !{i64 11847}
!715 = !{i64 11850}
!716 = !{i64 11864}
