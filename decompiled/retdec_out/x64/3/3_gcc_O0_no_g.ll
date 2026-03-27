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
@global_var_6020 = global i64 4294967296
@global_var_3350 = constant [11 x i8] c"HelloWorld\00"
@global_var_6078 = local_unnamed_addr global [11 x i8]* @global_var_3350
@global_var_607c = local_unnamed_addr global i64 98784247808
@global_var_60a6 = global i64 0
@global_var_6148 = local_unnamed_addr global i64 0
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
@0 = external global i32
@global_var_60a0 = local_unnamed_addr global i8 0
@global_var_7ff = global i1 false
@global_var_3e8 = global i1 false
@1 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\88\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_3008 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @1, i64 0, i64 0)
@2 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\A0\86\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_3160 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @2, i64 0, i64 0)
@3 = internal constant [16 x i8] c"%d (\E5\AD\90\E8\BF\9B\E7\A8\8B)\0A\00"
@global_var_32c8 = constant i8* getelementptr inbounds ([16 x i8], [16 x i8]* @3, i64 0, i64 0)
@4 = internal constant [37 x i8] c"\E2\9C\93 \E5\AD\90\E8\BF\9B\E7\A8\8B\E6\AD\A3\E5\B8\B8\E9\80\80\E5\87\BA\EF\BC\8Ccode=%d\0A\00"
@global_var_32d8 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @4, i64 0, i64 0)
@5 = internal constant [65 x i8] c"\E2\9C\97 \E5\AD\90\E8\BF\9B\E7\A8\8B\E8\A2\AB\E4\BF\A1\E5\8F\B7\E7\BB\88\E6\AD\A2 (\E4\BF\A1\E5\8F\B7%d) - \E9\87\8E\E6\8C\87\E9\92\88\E5\AF\BC\E8\87\B4\E5\B4\A9\E6\BA\83\0A\00"
@global_var_3300 = constant i8* getelementptr inbounds ([65 x i8], [65 x i8]* @5, i64 0, i64 0)
@6 = internal constant [11 x i8] c"fork\E5\A4\B1\E8\B4\A5\00"
@global_var_3341 = constant i8* getelementptr inbounds ([11 x i8], [11 x i8]* @6, i64 0, i64 0)
@global_var_60c0 = local_unnamed_addr global i32 0
@global_var_60c1 = global i32 0
@global_var_6158 = local_unnamed_addr global i32 0
@global_var_6159 = global i32 0
@global_var_60c4 = local_unnamed_addr global i32 0
@global_var_60e0 = local_unnamed_addr global i8 0
@global_var_6048 = local_unnamed_addr global i32 10
@global_var_604c = local_unnamed_addr global i32 20
@global_var_6050 = local_unnamed_addr global i32 100
@global_var_6150 = local_unnamed_addr global i32* null
@global_var_6060 = local_unnamed_addr global i32 1
@global_var_6068 = local_unnamed_addr global i32 5
@global_var_6070 = local_unnamed_addr global i32 9
@global_var_615c = local_unnamed_addr global i32 0
@7 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\9D\99\E6\80\81\E4\B8\8E\E5\85\A8\E5\B1\80\E5\86\85\E5\AD\98 ===\00"
@global_var_3360 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @7, i64 0, i64 0)
@8 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C\E5\87\BD\E6\95\B0 ===\00"
@global_var_3610 = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @8, i64 0, i64 0)

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

define i64 @double_value(i64 %arg1) local_unnamed_addr {
dec_label_pc_1309:
  %0 = mul i64 %arg1, 2, !insn.addr !37
  %1 = and i64 %0, 4294967294, !insn.addr !37
  ret i64 %1, !insn.addr !38
}

define i64 @local_vars(i64 %arg1) local_unnamed_addr {
dec_label_pc_131b:
  %0 = mul i64 %arg1, 2, !insn.addr !39
  %1 = add i64 %0, 10, !insn.addr !40
  %2 = and i64 %1, 4294967294, !insn.addr !41
  ret i64 %2, !insn.addr !42
}

define i64 @local_array(i64 %arg1) local_unnamed_addr {
dec_label_pc_1342:
  %0 = alloca i32
  %rax.0.reg2mem = alloca i64, !insn.addr !43
  %indvars.iv.reg2mem = alloca i64, !insn.addr !43
  %1 = load i32, i32* %0
  %stack_var_-8 = alloca i64, align 8
  %2 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !44
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !45
  %4 = trunc i64 %arg1 to i32
  %5 = add i64 %2, -48, !insn.addr !46
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_1369

dec_label_pc_1369:                                ; preds = %dec_label_pc_1369, %dec_label_pc_1342
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %6 = trunc i64 %indvars.iv.reload to i32
  %7 = mul i32 %6, %4, !insn.addr !47
  %8 = mul i64 %indvars.iv.reload, 4, !insn.addr !46
  %9 = add i64 %5, %8, !insn.addr !46
  %10 = inttoptr i64 %9 to i32*, !insn.addr !46
  store i32 %7, i32* %10, align 4, !insn.addr !46
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 10
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !48
  br i1 %exitcond, label %dec_label_pc_1385, label %dec_label_pc_1369, !insn.addr !48

dec_label_pc_1385:                                ; preds = %dec_label_pc_1369
  %11 = zext i32 %1 to i64, !insn.addr !49
  %12 = call i64 @__readfsqword(i64 40), !insn.addr !50
  %13 = icmp eq i64 %3, %12, !insn.addr !50
  store i64 %11, i64* %rax.0.reg2mem, !insn.addr !51
  br i1 %13, label %dec_label_pc_139c, label %dec_label_pc_1397, !insn.addr !51

dec_label_pc_1397:                                ; preds = %dec_label_pc_1385
  call void @__stack_chk_fail(), !insn.addr !52
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !52
  br label %dec_label_pc_139c, !insn.addr !52

dec_label_pc_139c:                                ; preds = %dec_label_pc_1397, %dec_label_pc_1385
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !53

; uselistorder directives
  uselistorder i64 %indvars.iv.reload, { 0, 2, 1 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
}

define i64 @local_struct(i64 %arg1) local_unnamed_addr {
dec_label_pc_139e:
  %0 = mul i64 %arg1, 3, !insn.addr !54
  %1 = and i64 %0, 4294967295, !insn.addr !54
  ret i64 %1, !insn.addr !55
}

define i64 @address_of_local(i64* %arg1) local_unnamed_addr {
dec_label_pc_13c1:
  %0 = bitcast i64* %arg1 to i32*, !insn.addr !56
  store i32 42, i32* %0, align 4, !insn.addr !56
  ret i64 42, !insn.addr !57
}

define i64 @address_of_array(i64* %arg1) local_unnamed_addr {
dec_label_pc_13e2:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !58
  %3 = and i64 %2, 4294967294, !insn.addr !58
  ret i64 %3, !insn.addr !59
}

define i64 @large_stack_frame() local_unnamed_addr {
dec_label_pc_140e:
  %0 = alloca i8
  %rax.0.reg2mem = alloca i64, !insn.addr !60
  %storemerge1.reg2mem = alloca i32, !insn.addr !60
  %1 = load i8, i8* %0
  %stack_var_-8 = alloca i64, align 8
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !61
  br i1 icmp slt (i32 ptrtoint (i1* @global_var_7ff to i32), i32 0), label %dec_label_pc_1462, label %dec_label_pc_1438.lr.ph, !insn.addr !62

dec_label_pc_1438.lr.ph:                          ; preds = %dec_label_pc_140e
  %3 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !63
  %4 = add i64 %3, -2064, !insn.addr !64
  store i32 0, i32* %storemerge1.reg2mem
  br label %dec_label_pc_1438

dec_label_pc_1438:                                ; preds = %dec_label_pc_1438.lr.ph, %dec_label_pc_1438
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %5 = sext i32 %storemerge1.reload to i64, !insn.addr !65
  %6 = trunc i32 %storemerge1.reload to i8, !insn.addr !64
  %7 = add i64 %4, %5, !insn.addr !64
  %8 = inttoptr i64 %7 to i8*, !insn.addr !64
  store i8 %6, i8* %8, align 1, !insn.addr !64
  %9 = add i32 %storemerge1.reload, 1, !insn.addr !66
  %10 = icmp sgt i32 %9, ptrtoint (i1* @global_var_7ff to i32), !insn.addr !62
  store i32 %9, i32* %storemerge1.reg2mem, !insn.addr !62
  br i1 %10, label %dec_label_pc_1462, label %dec_label_pc_1438, !insn.addr !62

dec_label_pc_1462:                                ; preds = %dec_label_pc_1438, %dec_label_pc_140e
  %11 = sext i8 %1 to i64, !insn.addr !67
  %12 = call i64 @__readfsqword(i64 40), !insn.addr !68
  %13 = icmp eq i64 %2, %12, !insn.addr !68
  store i64 %11, i64* %rax.0.reg2mem, !insn.addr !69
  br i1 %13, label %dec_label_pc_1480, label %dec_label_pc_147b, !insn.addr !69

dec_label_pc_147b:                                ; preds = %dec_label_pc_1462
  call void @__stack_chk_fail(), !insn.addr !70
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !70
  br label %dec_label_pc_1480, !insn.addr !70

dec_label_pc_1480:                                ; preds = %dec_label_pc_147b, %dec_label_pc_1462
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !71

; uselistorder directives
  uselistorder i32 %storemerge1.reload, { 0, 2, 1 }
  uselistorder i32* %storemerge1.reg2mem, { 1, 0, 2 }
  uselistorder i32 ptrtoint (i1* @global_var_7ff to i32), { 1, 0 }
  uselistorder label %dec_label_pc_1438, { 1, 0 }
}

define i64 @vla_stack(i64 %arg1) local_unnamed_addr {
dec_label_pc_1482:
  %rax.0.reg2mem = alloca i64, !insn.addr !72
  %storemerge.reg2mem = alloca i64, !insn.addr !72
  %indvars.iv.reg2mem = alloca i64, !insn.addr !72
  %stack_var_-72 = alloca i64, align 8
  %0 = trunc i64 %arg1 to i32, !insn.addr !73
  %sext = mul i64 %arg1, 4294967296
  %1 = ashr exact i64 %sext, 32, !insn.addr !73
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !74
  %3 = icmp slt i32 %0, 1, !insn.addr !75
  %4 = trunc i64 %1 to i32, !insn.addr !76
  %5 = icmp sgt i32 %4, ptrtoint (i1* @global_var_3e8 to i32), !insn.addr !77
  %or.cond = or i1 %3, %5
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !75
  br i1 %or.cond, label %dec_label_pc_15b0, label %dec_label_pc_14c0, !insn.addr !75

dec_label_pc_14c0:                                ; preds = %dec_label_pc_1482
  %6 = ptrtoint i64* %stack_var_-72 to i64, !insn.addr !78
  %7 = ashr exact i64 %sext, 30, !insn.addr !79
  %8 = add nsw i64 %7, 15, !insn.addr !80
  %9 = udiv i64 %8, 16
  %10 = mul i64 %9, 16
  %11 = and i64 %10, -4096, !insn.addr !81
  %12 = sub i64 %6, %11, !insn.addr !82
  %13 = and i64 %10, 4080, !insn.addr !83
  %14 = sub i64 %12, %13, !insn.addr !84
  %15 = icmp sgt i32 %4, 0, !insn.addr !85
  br i1 %15, label %dec_label_pc_1579.preheader, label %dec_label_pc_1598, !insn.addr !85

dec_label_pc_1579.preheader:                      ; preds = %dec_label_pc_14c0
  %wide.trip.count = and i64 %1, 4294967295
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_1579

dec_label_pc_1579:                                ; preds = %dec_label_pc_1579.preheader, %dec_label_pc_1579
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %16 = mul i64 %indvars.iv.reload, 4, !insn.addr !86
  %17 = add i64 %16, %14, !insn.addr !86
  %18 = inttoptr i64 %17 to i32*, !insn.addr !86
  %indvars.iv.tr = trunc i64 %indvars.iv.reload to i32
  %19 = mul i32 %indvars.iv.tr, 2
  store i32 %19, i32* %18, align 4, !insn.addr !86
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !85
  br i1 %exitcond, label %dec_label_pc_1598, label %dec_label_pc_1579, !insn.addr !85

dec_label_pc_1598:                                ; preds = %dec_label_pc_1579, %dec_label_pc_14c0
  %20 = icmp slt i64 %sext, 0
  %21 = zext i1 %20 to i32
  %22 = add i32 %21, %4, !insn.addr !87
  %23 = ashr i32 %22, 1, !insn.addr !88
  %24 = sext i32 %23 to i64, !insn.addr !89
  %25 = mul i64 %24, 4, !insn.addr !90
  %26 = add i64 %14, %25, !insn.addr !90
  %27 = inttoptr i64 %26 to i32*, !insn.addr !90
  %28 = load i32, i32* %27, align 4, !insn.addr !90
  %29 = zext i32 %28 to i64, !insn.addr !90
  store i64 %29, i64* %storemerge.reg2mem, !insn.addr !90
  br label %dec_label_pc_15b0, !insn.addr !90

dec_label_pc_15b0:                                ; preds = %dec_label_pc_1482, %dec_label_pc_1598
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %30 = call i64 @__readfsqword(i64 40), !insn.addr !91
  %31 = icmp eq i64 %2, %30, !insn.addr !91
  store i64 %storemerge.reload, i64* %rax.0.reg2mem, !insn.addr !92
  br i1 %31, label %dec_label_pc_15c7, label %dec_label_pc_15c2, !insn.addr !92

dec_label_pc_15c2:                                ; preds = %dec_label_pc_15b0
  call void @__stack_chk_fail(), !insn.addr !93
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !93
  br label %dec_label_pc_15c7, !insn.addr !93

dec_label_pc_15c7:                                ; preds = %dec_label_pc_15c2, %dec_label_pc_15b0
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !94

; uselistorder directives
  uselistorder i64 %14, { 1, 0 }
  uselistorder i64 %10, { 1, 0 }
  uselistorder i64 %sext, { 2, 1, 0 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_15b0, { 1, 0 }
  uselistorder label %dec_label_pc_1579, { 1, 0 }
}

define i64 @alloca_usage(i64 %arg1) local_unnamed_addr {
dec_label_pc_15cd:
  %rax.0.reg2mem = alloca i64, !insn.addr !95
  %storemerge.reg2mem = alloca i64, !insn.addr !95
  %indvars.iv.reg2mem = alloca i64, !insn.addr !95
  %stack_var_-56 = alloca i64, align 8
  %0 = trunc i64 %arg1 to i32, !insn.addr !96
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !97
  %2 = icmp eq i32 %0, 0, !insn.addr !98
  %3 = icmp slt i32 %0, 0, !insn.addr !98
  %4 = icmp eq i1 %3, false, !insn.addr !99
  %5 = icmp eq i1 %2, false, !insn.addr !99
  %6 = icmp eq i1 %4, %5, !insn.addr !99
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !99
  br i1 %6, label %dec_label_pc_15fb, label %dec_label_pc_16dd, !insn.addr !99

dec_label_pc_15fb:                                ; preds = %dec_label_pc_15cd
  %7 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !100
  %sext = mul i64 %arg1, 4294967296
  %8 = ashr exact i64 %sext, 30, !insn.addr !101
  %9 = add nsw i64 %8, 23, !insn.addr !102
  %10 = udiv i64 %9, 16
  %11 = mul i64 %10, 16
  %12 = and i64 %11, -4096, !insn.addr !103
  %13 = and i64 %11, 4080, !insn.addr !104
  %14 = sub nsw i64 15, %13, !insn.addr !105
  %15 = sub i64 %14, %12, !insn.addr !106
  %16 = add i64 %15, %7, !insn.addr !107
  %17 = and i64 %16, -16, !insn.addr !108
  %18 = icmp sgt i32 %0, 0, !insn.addr !109
  br i1 %18, label %dec_label_pc_1692.preheader, label %dec_label_pc_16be, !insn.addr !109

dec_label_pc_1692.preheader:                      ; preds = %dec_label_pc_15fb
  %wide.trip.count = and i64 %arg1, 4294967295
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_1692

dec_label_pc_1692:                                ; preds = %dec_label_pc_1692.preheader, %dec_label_pc_1692
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %19 = mul i64 %indvars.iv.reload, 4, !insn.addr !110
  %20 = add i64 %19, %17, !insn.addr !111
  %21 = trunc i64 %indvars.iv.reload to i32
  %22 = mul i32 %21, 3, !insn.addr !112
  %23 = inttoptr i64 %20 to i32*, !insn.addr !113
  store i32 %22, i32* %23, align 4, !insn.addr !113
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !109
  br i1 %exitcond, label %dec_label_pc_16be, label %dec_label_pc_1692, !insn.addr !109

dec_label_pc_16be:                                ; preds = %dec_label_pc_1692, %dec_label_pc_15fb
  %24 = icmp slt i32 %0, 0
  %25 = zext i1 %24 to i32, !insn.addr !114
  %26 = add i32 %25, %0, !insn.addr !115
  %27 = ashr i32 %26, 1, !insn.addr !116
  %28 = sext i32 %27 to i64, !insn.addr !117
  %29 = mul i64 %28, 4, !insn.addr !118
  %30 = add i64 %17, %29, !insn.addr !119
  %31 = inttoptr i64 %30 to i32*, !insn.addr !120
  %32 = load i32, i32* %31, align 4, !insn.addr !120
  %33 = zext i32 %32 to i64, !insn.addr !120
  store i64 %33, i64* %storemerge.reg2mem, !insn.addr !120
  br label %dec_label_pc_16dd, !insn.addr !120

dec_label_pc_16dd:                                ; preds = %dec_label_pc_15cd, %dec_label_pc_16be
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %34 = call i64 @__readfsqword(i64 40), !insn.addr !121
  %35 = icmp eq i64 %1, %34, !insn.addr !121
  store i64 %storemerge.reload, i64* %rax.0.reg2mem, !insn.addr !122
  br i1 %35, label %dec_label_pc_16f1, label %dec_label_pc_16ec, !insn.addr !122

dec_label_pc_16ec:                                ; preds = %dec_label_pc_16dd
  call void @__stack_chk_fail(), !insn.addr !123
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !123
  br label %dec_label_pc_16f1, !insn.addr !123

dec_label_pc_16f1:                                ; preds = %dec_label_pc_16ec, %dec_label_pc_16dd
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !124

; uselistorder directives
  uselistorder i64 %11, { 1, 0 }
  uselistorder i32 %0, { 1, 0, 2, 4, 3 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 1, 0, 2 }
  uselistorder label %dec_label_pc_16dd, { 1, 0 }
  uselistorder label %dec_label_pc_1692, { 1, 0 }
}

define i64 @stack_alias(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_16f3:
  %rax.0.reg2mem = alloca i64, !insn.addr !125
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !126
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !127
  %2 = icmp eq i64 %0, %1, !insn.addr !127
  store i64 20, i64* %rax.0.reg2mem, !insn.addr !128
  br i1 %2, label %dec_label_pc_1769, label %dec_label_pc_1764, !insn.addr !128

dec_label_pc_1764:                                ; preds = %dec_label_pc_16f3
  call void @__stack_chk_fail(), !insn.addr !129
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !129
  br label %dec_label_pc_1769, !insn.addr !129

dec_label_pc_1769:                                ; preds = %dec_label_pc_1764, %dec_label_pc_16f3
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !130
}

define i64 @test_stack_memory() local_unnamed_addr {
dec_label_pc_176b:
  %rax.0.reg2mem = alloca i64, !insn.addr !131
  %stack_var_-60 = alloca i32, align 4
  %stack_var_-56 = alloca i64, align 8
  %stack_var_-64 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !132
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_3008 to i8*)), !insn.addr !133
  %2 = call i64 @local_vars(i64 5), !insn.addr !134
  %3 = and i64 %2, 4294967295, !insn.addr !135
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_3026, i64 0, i64 0), i64 %3), !insn.addr !136
  %5 = call i64 @local_array(i64 2), !insn.addr !137
  %6 = and i64 %5, 4294967295, !insn.addr !138
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3042, i64 0, i64 0), i64 %6), !insn.addr !139
  %8 = call i64 @local_struct(i64 5), !insn.addr !140
  %9 = and i64 %8, 4294967295, !insn.addr !141
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_305f, i64 0, i64 0), i64 %9), !insn.addr !142
  %11 = call i64 @address_of_local(i64* nonnull %stack_var_-64), !insn.addr !143
  %12 = and i64 %11, 4294967295, !insn.addr !144
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3080, i64 0, i64 0), i64 %12), !insn.addr !145
  store i64 1, i64* %stack_var_-56, align 8, !insn.addr !146
  %14 = call i64 @address_of_array(i64* nonnull %stack_var_-56), !insn.addr !147
  %15 = and i64 %14, 4294967295, !insn.addr !148
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_30a8, i64 0, i64 0), i64 %15), !insn.addr !149
  %17 = call i64 @large_stack_frame(), !insn.addr !150
  %18 = and i64 %17, 4294967295, !insn.addr !151
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_30d0, i64 0, i64 0), i64 %18), !insn.addr !152
  %20 = call i64 @vla_stack(i64 10), !insn.addr !153
  %21 = and i64 %20, 4294967295, !insn.addr !154
  %22 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_30f3, i64 0, i64 0), i64 %21), !insn.addr !155
  %23 = call i64 @alloca_usage(i64 10), !insn.addr !156
  %24 = and i64 %23, 4294967295, !insn.addr !157
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_310e, i64 0, i64 0), i64 %24), !insn.addr !158
  store i32 0, i32* %stack_var_-60, align 4, !insn.addr !159
  %26 = call i64 @stack_alias(i32* nonnull %stack_var_-60, i32* nonnull %stack_var_-60), !insn.addr !160
  %27 = and i64 %26, 4294967295, !insn.addr !161
  %28 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_312c, i64 0, i64 0), i64 %27), !insn.addr !162
  %29 = call i64 @__readfsqword(i64 40), !insn.addr !163
  %30 = icmp eq i64 %0, %29, !insn.addr !163
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !164
  br i1 %30, label %dec_label_pc_191b, label %dec_label_pc_1916, !insn.addr !164

dec_label_pc_1916:                                ; preds = %dec_label_pc_176b
  call void @__stack_chk_fail(), !insn.addr !165
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !165
  br label %dec_label_pc_191b, !insn.addr !165

dec_label_pc_191b:                                ; preds = %dec_label_pc_1916, %dec_label_pc_176b
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !166
}

define i64 @heap_basic(i64 %arg1) local_unnamed_addr {
dec_label_pc_191d:
  %storemerge.reg2mem = alloca i64, !insn.addr !167
  %indvars.iv.reg2mem = alloca i64, !insn.addr !167
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !168
  %1 = call i64* @malloc(i32 %0), !insn.addr !168
  %2 = icmp eq i64* %1, null, !insn.addr !169
  %3 = icmp eq i1 %2, false, !insn.addr !170
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !170
  br i1 %3, label %dec_label_pc_1977.preheader, label %dec_label_pc_19b0, !insn.addr !170

dec_label_pc_1977.preheader:                      ; preds = %dec_label_pc_191d
  %4 = ptrtoint i64* %1 to i64, !insn.addr !168
  %5 = icmp sgt i32 %arg1.tr, 0, !insn.addr !171
  br i1 %5, label %dec_label_pc_1958.preheader, label %dec_label_pc_197f, !insn.addr !171

dec_label_pc_1958.preheader:                      ; preds = %dec_label_pc_1977.preheader
  %wide.trip.count = and i64 %arg1, 4294967295
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_1958

dec_label_pc_1958:                                ; preds = %dec_label_pc_1958.preheader, %dec_label_pc_1958
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %6 = mul i64 %indvars.iv.reload, 4, !insn.addr !172
  %7 = add i64 %6, %4, !insn.addr !173
  %8 = inttoptr i64 %7 to i32*, !insn.addr !174
  %indvars.iv.tr = trunc i64 %indvars.iv.reload to i32
  %9 = mul i32 %indvars.iv.tr, 2
  store i32 %9, i32* %8, align 4, !insn.addr !174
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !171
  br i1 %exitcond, label %dec_label_pc_197f, label %dec_label_pc_1958, !insn.addr !171

dec_label_pc_197f:                                ; preds = %dec_label_pc_1958, %dec_label_pc_1977.preheader
  %10 = icmp slt i32 %arg1.tr, 0
  %11 = zext i1 %10 to i32, !insn.addr !175
  %12 = add i32 %11, %arg1.tr, !insn.addr !176
  %13 = ashr i32 %12, 1, !insn.addr !177
  %14 = sext i32 %13 to i64, !insn.addr !178
  %15 = mul i64 %14, 4, !insn.addr !179
  %16 = add i64 %15, %4, !insn.addr !180
  %17 = inttoptr i64 %16 to i32*, !insn.addr !181
  %18 = load i32, i32* %17, align 4, !insn.addr !181
  call void @free(i64* %1), !insn.addr !182
  %19 = zext i32 %18 to i64, !insn.addr !183
  store i64 %19, i64* %storemerge.reg2mem, !insn.addr !183
  br label %dec_label_pc_19b0, !insn.addr !183

dec_label_pc_19b0:                                ; preds = %dec_label_pc_191d, %dec_label_pc_197f
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !184

; uselistorder directives
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i32 %arg1.tr, { 2, 1, 3, 0 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_19b0, { 1, 0 }
  uselistorder label %dec_label_pc_1958, { 1, 0 }
}

define i64 @heap_calloc(i64 %arg1) local_unnamed_addr {
dec_label_pc_19b2:
  %storemerge.reg2mem = alloca i64, !insn.addr !185
  %stack_var_-24.0.lcssa.reg2mem = alloca i64, !insn.addr !185
  %stack_var_-24.03.reg2mem = alloca i32, !insn.addr !185
  %indvars.iv.reg2mem = alloca i64, !insn.addr !185
  %0 = trunc i64 %arg1 to i32, !insn.addr !186
  %1 = call i64* @calloc(i32 %0, i32 4), !insn.addr !187
  %2 = icmp eq i64* %1, null, !insn.addr !188
  %3 = icmp eq i1 %2, false, !insn.addr !189
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !189
  br i1 %3, label %dec_label_pc_1a12.preheader, label %dec_label_pc_1a29, !insn.addr !189

dec_label_pc_1a12.preheader:                      ; preds = %dec_label_pc_19b2
  %4 = icmp sgt i32 %0, 0, !insn.addr !190
  store i64 0, i64* %stack_var_-24.0.lcssa.reg2mem, !insn.addr !190
  br i1 %4, label %dec_label_pc_19f5.preheader, label %dec_label_pc_1a1a, !insn.addr !190

dec_label_pc_19f5.preheader:                      ; preds = %dec_label_pc_1a12.preheader
  %5 = ptrtoint i64* %1 to i64, !insn.addr !187
  %wide.trip.count = and i64 %arg1, 4294967295
  store i64 0, i64* %indvars.iv.reg2mem
  store i32 0, i32* %stack_var_-24.03.reg2mem
  br label %dec_label_pc_19f5

dec_label_pc_19f5:                                ; preds = %dec_label_pc_19f5.preheader, %dec_label_pc_19f5
  %stack_var_-24.03.reload = load i32, i32* %stack_var_-24.03.reg2mem
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %6 = mul i64 %indvars.iv.reload, 4, !insn.addr !191
  %7 = add i64 %6, %5, !insn.addr !192
  %8 = inttoptr i64 %7 to i32*, !insn.addr !193
  %9 = load i32, i32* %8, align 4, !insn.addr !193
  %10 = add i32 %9, %stack_var_-24.03.reload, !insn.addr !194
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !190
  store i32 %10, i32* %stack_var_-24.03.reg2mem, !insn.addr !190
  br i1 %exitcond, label %dec_label_pc_1a12.dec_label_pc_1a1a_crit_edge, label %dec_label_pc_19f5, !insn.addr !190

dec_label_pc_1a12.dec_label_pc_1a1a_crit_edge:    ; preds = %dec_label_pc_19f5
  %phitmp = zext i32 %10 to i64
  store i64 %phitmp, i64* %stack_var_-24.0.lcssa.reg2mem
  br label %dec_label_pc_1a1a

dec_label_pc_1a1a:                                ; preds = %dec_label_pc_1a12.dec_label_pc_1a1a_crit_edge, %dec_label_pc_1a12.preheader
  %stack_var_-24.0.lcssa.reload = load i64, i64* %stack_var_-24.0.lcssa.reg2mem
  call void @free(i64* %1), !insn.addr !195
  store i64 %stack_var_-24.0.lcssa.reload, i64* %storemerge.reg2mem, !insn.addr !196
  br label %dec_label_pc_1a29, !insn.addr !196

dec_label_pc_1a29:                                ; preds = %dec_label_pc_19b2, %dec_label_pc_1a1a
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !197

; uselistorder directives
  uselistorder i32 %10, { 1, 0 }
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-24.03.reg2mem, { 2, 0, 1 }
  uselistorder i64* %stack_var_-24.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1a29, { 1, 0 }
  uselistorder label %dec_label_pc_19f5, { 1, 0 }
}

define i64 @heap_realloc() local_unnamed_addr {
dec_label_pc_1a2b:
  %rax.0.reg2mem = alloca i64, !insn.addr !198
  %storemerge.reg2mem = alloca i64, !insn.addr !198
  %indvars.iv.reg2mem = alloca i64, !insn.addr !198
  %indvars.iv6.reg2mem = alloca i64, !insn.addr !198
  %0 = call i64* @malloc(i32 20), !insn.addr !199
  %1 = ptrtoint i64* %0 to i64, !insn.addr !199
  %2 = icmp eq i64* %0, null, !insn.addr !200
  %3 = icmp eq i1 %2, false, !insn.addr !201
  store i64 0, i64* %indvars.iv6.reg2mem, !insn.addr !201
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !201
  br i1 %3, label %dec_label_pc_1a5f, label %dec_label_pc_1b2b, !insn.addr !201

dec_label_pc_1a5f:                                ; preds = %dec_label_pc_1a2b, %dec_label_pc_1a5f
  %indvars.iv6.reload = load i64, i64* %indvars.iv6.reg2mem
  %4 = mul i64 %indvars.iv6.reload, 4, !insn.addr !202
  %5 = add i64 %4, %1, !insn.addr !203
  %indvars.iv.next7 = add nuw nsw i64 %indvars.iv6.reload, 1
  %6 = inttoptr i64 %5 to i32*, !insn.addr !204
  %7 = trunc i64 %indvars.iv.next7 to i32
  store i32 %7, i32* %6, align 4, !insn.addr !204
  %exitcond8 = icmp eq i64 %indvars.iv.next7, 5
  store i64 %indvars.iv.next7, i64* %indvars.iv6.reg2mem, !insn.addr !205
  br i1 %exitcond8, label %dec_label_pc_1a85, label %dec_label_pc_1a5f, !insn.addr !205

dec_label_pc_1a85:                                ; preds = %dec_label_pc_1a5f
  %8 = add i64 %1, 8, !insn.addr !206
  %9 = inttoptr i64 %8 to i32*, !insn.addr !206
  %10 = load i32, i32* %9, align 4, !insn.addr !206
  %11 = call i64* @realloc(i64* %0, i32 40), !insn.addr !207
  %12 = ptrtoint i64* %11 to i64, !insn.addr !207
  %13 = icmp eq i64* %11, null, !insn.addr !208
  %14 = icmp eq i1 %13, false, !insn.addr !209
  store i64 5, i64* %indvars.iv.reg2mem, !insn.addr !209
  br i1 %14, label %dec_label_pc_1acf, label %dec_label_pc_1aab, !insn.addr !209

dec_label_pc_1aab:                                ; preds = %dec_label_pc_1a85
  call void @free(i64* %0), !insn.addr !210
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !211
  br label %dec_label_pc_1b2b, !insn.addr !211

dec_label_pc_1acf:                                ; preds = %dec_label_pc_1a85, %dec_label_pc_1acf
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %15 = mul i64 %indvars.iv.reload, 4, !insn.addr !212
  %16 = add i64 %15, %12, !insn.addr !213
  %17 = inttoptr i64 %16 to i32*, !insn.addr !214
  %18 = trunc i64 %indvars.iv.reload to i32
  %19 = mul i32 %18, 10
  store i32 %19, i32* %17, align 4, !insn.addr !214
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 10
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !215
  br i1 %exitcond, label %dec_label_pc_1afc, label %dec_label_pc_1acf, !insn.addr !215

dec_label_pc_1afc:                                ; preds = %dec_label_pc_1acf
  %20 = add i64 %12, 8, !insn.addr !216
  %21 = inttoptr i64 %20 to i32*, !insn.addr !217
  %22 = load i32, i32* %21, align 4, !insn.addr !217
  %23 = icmp eq i32 %10, %22, !insn.addr !218
  %24 = icmp eq i1 %23, false, !insn.addr !219
  store i64 4294967293, i64* %storemerge.reg2mem, !insn.addr !219
  br i1 %24, label %dec_label_pc_1b19, label %dec_label_pc_1b0b, !insn.addr !219

dec_label_pc_1b0b:                                ; preds = %dec_label_pc_1afc
  %25 = add i64 %12, 20, !insn.addr !220
  %26 = inttoptr i64 %25 to i32*, !insn.addr !220
  %27 = load i32, i32* %26, align 4, !insn.addr !220
  %28 = zext i32 %27 to i64, !insn.addr !220
  store i64 %28, i64* %storemerge.reg2mem, !insn.addr !221
  br label %dec_label_pc_1b19, !insn.addr !221

dec_label_pc_1b19:                                ; preds = %dec_label_pc_1afc, %dec_label_pc_1b0b
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  call void @free(i64* %11), !insn.addr !222
  store i64 %storemerge.reload, i64* %rax.0.reg2mem, !insn.addr !223
  br label %dec_label_pc_1b2b, !insn.addr !223

dec_label_pc_1b2b:                                ; preds = %dec_label_pc_1a2b, %dec_label_pc_1b19, %dec_label_pc_1aab
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !224

; uselistorder directives
  uselistorder i64 %12, { 2, 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %indvars.iv6.reg2mem, { 2, 0, 1 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_1b2b, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1b19, { 1, 0 }
  uselistorder label %dec_label_pc_1acf, { 1, 0 }
  uselistorder label %dec_label_pc_1a5f, { 1, 0 }
}

define i64 @heap_array(i64 %arg1) local_unnamed_addr {
dec_label_pc_1b2d:
  %storemerge.reg2mem = alloca i64, !insn.addr !225
  %indvars.iv.reg2mem = alloca i64, !insn.addr !225
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !226
  %1 = call i64* @malloc(i32 %0), !insn.addr !226
  %2 = icmp eq i64* %1, null, !insn.addr !227
  %3 = icmp eq i1 %2, false, !insn.addr !228
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !228
  br i1 %3, label %dec_label_pc_1b8c.preheader, label %dec_label_pc_1bc5, !insn.addr !228

dec_label_pc_1b8c.preheader:                      ; preds = %dec_label_pc_1b2d
  %4 = ptrtoint i64* %1 to i64, !insn.addr !226
  %5 = icmp sgt i32 %arg1.tr, 0, !insn.addr !229
  br i1 %5, label %dec_label_pc_1b68.preheader, label %dec_label_pc_1b94, !insn.addr !229

dec_label_pc_1b68.preheader:                      ; preds = %dec_label_pc_1b8c.preheader
  %wide.trip.count = and i64 %arg1, 4294967295
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_1b68

dec_label_pc_1b68:                                ; preds = %dec_label_pc_1b68.preheader, %dec_label_pc_1b68
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %6 = mul i64 %indvars.iv.reload, 4, !insn.addr !230
  %7 = add i64 %6, %4, !insn.addr !231
  %8 = trunc i64 %indvars.iv.reload to i32
  %9 = mul i32 %8, 3, !insn.addr !232
  %10 = inttoptr i64 %7 to i32*, !insn.addr !233
  store i32 %9, i32* %10, align 4, !insn.addr !233
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !229
  br i1 %exitcond, label %dec_label_pc_1b94, label %dec_label_pc_1b68, !insn.addr !229

dec_label_pc_1b94:                                ; preds = %dec_label_pc_1b68, %dec_label_pc_1b8c.preheader
  %11 = icmp slt i32 %arg1.tr, 0
  %12 = zext i1 %11 to i32, !insn.addr !234
  %13 = add i32 %12, %arg1.tr, !insn.addr !235
  %14 = ashr i32 %13, 1, !insn.addr !236
  %15 = sext i32 %14 to i64, !insn.addr !237
  %16 = mul i64 %15, 4, !insn.addr !238
  %17 = add i64 %16, %4, !insn.addr !239
  %18 = inttoptr i64 %17 to i32*, !insn.addr !240
  %19 = load i32, i32* %18, align 4, !insn.addr !240
  call void @free(i64* %1), !insn.addr !241
  %20 = zext i32 %19 to i64, !insn.addr !242
  store i64 %20, i64* %storemerge.reg2mem, !insn.addr !242
  br label %dec_label_pc_1bc5, !insn.addr !242

dec_label_pc_1bc5:                                ; preds = %dec_label_pc_1b2d, %dec_label_pc_1b94
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !243

; uselistorder directives
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i32 %arg1.tr, { 2, 1, 3, 0 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1bc5, { 1, 0 }
  uselistorder label %dec_label_pc_1b68, { 1, 0 }
}

define i64 @heap_struct(i64 %arg1) local_unnamed_addr {
dec_label_pc_1bc7:
  %storemerge.reg2mem = alloca i64, !insn.addr !244
  %0 = call i64* @malloc(i32 8), !insn.addr !245
  %1 = icmp eq i64* %0, null, !insn.addr !246
  %2 = icmp eq i1 %1, false, !insn.addr !247
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !247
  br i1 %2, label %dec_label_pc_1bf2, label %dec_label_pc_1c29, !insn.addr !247

dec_label_pc_1bf2:                                ; preds = %dec_label_pc_1bc7
  %3 = ptrtoint i64* %0 to i64, !insn.addr !245
  %4 = trunc i64 %arg1 to i32, !insn.addr !248
  %5 = bitcast i64* %0 to i32*, !insn.addr !249
  store i32 %4, i32* %5, align 4, !insn.addr !249
  %6 = mul i32 %4, 2, !insn.addr !250
  %7 = add i64 %3, 4, !insn.addr !251
  %8 = inttoptr i64 %7 to i32*, !insn.addr !251
  store i32 %6, i32* %8, align 4, !insn.addr !251
  %9 = load i32, i32* %5, align 4, !insn.addr !252
  %10 = add i32 %9, %6, !insn.addr !253
  call void @free(i64* %0), !insn.addr !254
  %11 = zext i32 %10 to i64, !insn.addr !255
  store i64 %11, i64* %storemerge.reg2mem, !insn.addr !255
  br label %dec_label_pc_1c29, !insn.addr !255

dec_label_pc_1c29:                                ; preds = %dec_label_pc_1bc7, %dec_label_pc_1bf2
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !256

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i64* %0, { 0, 1, 3, 2 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1c29, { 1, 0 }
}

define i64 @heap_nested(i64* %arg1) local_unnamed_addr {
dec_label_pc_1c2b:
  %rax.0.reg2mem = alloca i64, !insn.addr !257
  %0 = call i64* @malloc(i32 16), !insn.addr !258
  %1 = ptrtoint i64* %0 to i64, !insn.addr !258
  store i64 %1, i64* %arg1, align 8, !insn.addr !259
  store i32 10, i32* inttoptr (i64 16 to i32*), align 16, !insn.addr !260
  %2 = call i64* @malloc(i32 16), !insn.addr !261
  %3 = ptrtoint i64* %2 to i64, !insn.addr !261
  store i64 %3, i64* inttoptr (i64 24 to i64*), align 8, !insn.addr !262
  %4 = icmp eq i64* %2, null, !insn.addr !263
  %5 = icmp eq i1 %4, false, !insn.addr !264
  br i1 %5, label %dec_label_pc_1cab, label %dec_label_pc_1c95, !insn.addr !264

dec_label_pc_1c95:                                ; preds = %dec_label_pc_1c2b
  call void @free(i64* inttoptr (i64 16 to i64*)), !insn.addr !265
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !266
  br label %dec_label_pc_1cd4, !insn.addr !266

dec_label_pc_1cab:                                ; preds = %dec_label_pc_1c2b
  %6 = bitcast i64* %2 to i32*, !insn.addr !267
  store i32 20, i32* %6, align 4, !insn.addr !267
  %7 = load i64, i64* inttoptr (i64 24 to i64*), align 8, !insn.addr !268
  %8 = add i64 %7, 8, !insn.addr !269
  %9 = inttoptr i64 %8 to i64*, !insn.addr !269
  store i64 0, i64* %9, align 8, !insn.addr !269
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !270
  br label %dec_label_pc_1cd4, !insn.addr !270

dec_label_pc_1cd4:                                ; preds = %dec_label_pc_1cab, %dec_label_pc_1c95
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !271

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
}

define i64 @linked_list_heap() local_unnamed_addr {
dec_label_pc_1cda:
  %storemerge2.reg2mem = alloca i64, !insn.addr !272
  %stack_var_-56.37.reg2mem = alloca i64, !insn.addr !272
  %stack_var_-60.08.reg2mem = alloca i32, !insn.addr !272
  %storemerge.in9.reg2mem = alloca i64, !insn.addr !272
  %stack_var_-56.1.reg2mem = alloca i64, !insn.addr !272
  %stack_var_-56.06.reg2mem = alloca i64, !insn.addr !272
  %stack_var_-56.210.reg2mem = alloca i64, !insn.addr !272
  %stack_var_-48.011.reg2mem = alloca i64, !insn.addr !272
  %storemerge312.reg2mem = alloca i32, !insn.addr !272
  store i32 0, i32* %storemerge312.reg2mem
  store i64 0, i64* %stack_var_-48.011.reg2mem
  store i64 0, i64* %stack_var_-56.210.reg2mem
  br label %dec_label_pc_1d02

dec_label_pc_1d02:                                ; preds = %dec_label_pc_1cda, %dec_label_pc_1d97
  %stack_var_-56.210.reload = load i64, i64* %stack_var_-56.210.reg2mem
  %0 = call i64* @malloc(i32 16), !insn.addr !273
  %1 = icmp eq i64* %0, null, !insn.addr !274
  %2 = icmp eq i1 %1, false, !insn.addr !275
  br i1 %2, label %dec_label_pc_1d4a, label %dec_label_pc_1d39.preheader, !insn.addr !275

dec_label_pc_1d39.preheader:                      ; preds = %dec_label_pc_1d02
  %3 = icmp eq i64 %stack_var_-56.210.reload, 0, !insn.addr !276
  %4 = icmp eq i1 %3, false, !insn.addr !277
  store i64 %stack_var_-56.210.reload, i64* %stack_var_-56.06.reg2mem, !insn.addr !277
  store i64 4294967295, i64* %storemerge2.reg2mem, !insn.addr !277
  br i1 %4, label %dec_label_pc_1d19, label %dec_label_pc_1dfe, !insn.addr !277

dec_label_pc_1d19:                                ; preds = %dec_label_pc_1d39.preheader, %dec_label_pc_1d19
  %stack_var_-56.06.reload = load i64, i64* %stack_var_-56.06.reg2mem
  %5 = add i64 %stack_var_-56.06.reload, 8, !insn.addr !278
  %6 = inttoptr i64 %5 to i64*, !insn.addr !278
  %7 = load i64, i64* %6, align 8, !insn.addr !278
  %8 = inttoptr i64 %stack_var_-56.06.reload to i64*, !insn.addr !279
  call void @free(i64* %8), !insn.addr !279
  %9 = icmp eq i64 %7, 0, !insn.addr !276
  %10 = icmp eq i1 %9, false, !insn.addr !277
  store i64 %7, i64* %stack_var_-56.06.reg2mem, !insn.addr !277
  store i64 4294967295, i64* %storemerge2.reg2mem, !insn.addr !277
  br i1 %10, label %dec_label_pc_1d19, label %dec_label_pc_1dfe, !insn.addr !277

dec_label_pc_1d4a:                                ; preds = %dec_label_pc_1d02
  %stack_var_-48.011.reload = load i64, i64* %stack_var_-48.011.reg2mem
  %storemerge312.reload = load i32, i32* %storemerge312.reg2mem
  %11 = ptrtoint i64* %0 to i64, !insn.addr !273
  %12 = mul nuw nsw i32 %storemerge312.reload, 10, !insn.addr !280
  %13 = bitcast i64* %0 to i32*, !insn.addr !281
  store i32 %12, i32* %13, align 4, !insn.addr !281
  %14 = add i64 %11, 8, !insn.addr !282
  %15 = inttoptr i64 %14 to i64*, !insn.addr !282
  store i64 0, i64* %15, align 8, !insn.addr !282
  %16 = icmp eq i64 %stack_var_-56.210.reload, 0, !insn.addr !283
  %17 = icmp eq i1 %16, false, !insn.addr !284
  store i64 %11, i64* %stack_var_-56.1.reg2mem, !insn.addr !284
  br i1 %17, label %dec_label_pc_1d83, label %dec_label_pc_1d97, !insn.addr !284

dec_label_pc_1d83:                                ; preds = %dec_label_pc_1d4a
  %18 = add i64 %stack_var_-48.011.reload, 8, !insn.addr !285
  %19 = inttoptr i64 %18 to i64*, !insn.addr !285
  store i64 %11, i64* %19, align 8, !insn.addr !285
  store i64 %stack_var_-56.210.reload, i64* %stack_var_-56.1.reg2mem, !insn.addr !286
  br label %dec_label_pc_1d97, !insn.addr !286

dec_label_pc_1d97:                                ; preds = %dec_label_pc_1d4a, %dec_label_pc_1d83
  %stack_var_-56.1.reload = load i64, i64* %stack_var_-56.1.reg2mem
  %20 = add nuw nsw i32 %storemerge312.reload, 1, !insn.addr !287
  %21 = icmp ult i32 %20, 5, !insn.addr !288
  store i32 %20, i32* %storemerge312.reg2mem, !insn.addr !288
  store i64 %11, i64* %stack_var_-48.011.reg2mem, !insn.addr !288
  store i64 %stack_var_-56.1.reload, i64* %stack_var_-56.210.reg2mem, !insn.addr !288
  br i1 %21, label %dec_label_pc_1d02, label %dec_label_pc_1dcb.preheader, !insn.addr !288

dec_label_pc_1dcb.preheader:                      ; preds = %dec_label_pc_1d97
  %22 = icmp eq i64 %stack_var_-56.1.reload, 0
  %23 = icmp eq i1 %22, false
  store i64 %stack_var_-56.1.reload, i64* %storemerge.in9.reg2mem, !insn.addr !289
  store i32 0, i32* %stack_var_-60.08.reg2mem, !insn.addr !289
  store i64 0, i64* %storemerge2.reg2mem, !insn.addr !289
  br i1 %23, label %dec_label_pc_1db6, label %dec_label_pc_1dfe, !insn.addr !289

dec_label_pc_1db6:                                ; preds = %dec_label_pc_1dcb.preheader, %dec_label_pc_1db6
  %stack_var_-60.08.reload = load i32, i32* %stack_var_-60.08.reg2mem
  %storemerge.in9.reload = load i64, i64* %storemerge.in9.reg2mem
  %storemerge = inttoptr i64 %storemerge.in9.reload to i32*
  %24 = load i32, i32* %storemerge, align 4, !insn.addr !290
  %25 = add i32 %24, %stack_var_-60.08.reload, !insn.addr !291
  %26 = add i64 %storemerge.in9.reload, 8, !insn.addr !292
  %27 = inttoptr i64 %26 to i64*, !insn.addr !292
  %28 = load i64, i64* %27, align 8, !insn.addr !292
  %29 = icmp eq i64 %28, 0, !insn.addr !293
  %30 = icmp eq i1 %29, false, !insn.addr !289
  store i64 %28, i64* %storemerge.in9.reg2mem, !insn.addr !289
  store i32 %25, i32* %stack_var_-60.08.reg2mem, !insn.addr !289
  br i1 %30, label %dec_label_pc_1db6, label %dec_label_pc_1dd4.preheader, !insn.addr !289

dec_label_pc_1dd4.preheader:                      ; preds = %dec_label_pc_1db6
  %phitmp = zext i32 %25 to i64
  store i64 %stack_var_-56.1.reload, i64* %stack_var_-56.37.reg2mem
  br label %dec_label_pc_1dd4

dec_label_pc_1dd4:                                ; preds = %dec_label_pc_1dd4.preheader, %dec_label_pc_1dd4
  %stack_var_-56.37.reload = load i64, i64* %stack_var_-56.37.reg2mem
  %31 = add i64 %stack_var_-56.37.reload, 8, !insn.addr !294
  %32 = inttoptr i64 %31 to i64*, !insn.addr !294
  %33 = load i64, i64* %32, align 8, !insn.addr !294
  %34 = inttoptr i64 %stack_var_-56.37.reload to i64*, !insn.addr !295
  call void @free(i64* %34), !insn.addr !295
  %35 = icmp eq i64 %33, 0, !insn.addr !296
  %36 = icmp eq i1 %35, false, !insn.addr !297
  store i64 %33, i64* %stack_var_-56.37.reg2mem, !insn.addr !297
  store i64 %phitmp, i64* %storemerge2.reg2mem, !insn.addr !297
  br i1 %36, label %dec_label_pc_1dd4, label %dec_label_pc_1dfe, !insn.addr !297

dec_label_pc_1dfe:                                ; preds = %dec_label_pc_1d19, %dec_label_pc_1dd4, %dec_label_pc_1dcb.preheader, %dec_label_pc_1d39.preheader
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  ret i64 %storemerge2.reload, !insn.addr !298

; uselistorder directives
  uselistorder i64 %stack_var_-56.37.reload, { 1, 0 }
  uselistorder i32 %25, { 1, 0 }
  uselistorder i64 %11, { 1, 2, 0, 3 }
  uselistorder i64 %stack_var_-56.06.reload, { 1, 0 }
  uselistorder i64* %0, { 0, 2, 1 }
  uselistorder i64 %stack_var_-56.210.reload, { 0, 2, 1, 3 }
  uselistorder i32* %storemerge312.reg2mem, { 1, 0, 2 }
  uselistorder i64* %stack_var_-48.011.reg2mem, { 1, 0, 2 }
  uselistorder i64* %stack_var_-56.210.reg2mem, { 1, 0, 2 }
  uselistorder i64* %stack_var_-56.06.reg2mem, { 2, 0, 1 }
  uselistorder i64* %stack_var_-56.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge.in9.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-60.08.reg2mem, { 2, 0, 1 }
  uselistorder i64* %stack_var_-56.37.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge2.reg2mem, { 0, 2, 3, 1, 4 }
  uselistorder label %dec_label_pc_1dfe, { 1, 2, 0, 3 }
  uselistorder label %dec_label_pc_1dd4, { 1, 0 }
  uselistorder label %dec_label_pc_1db6, { 1, 0 }
  uselistorder label %dec_label_pc_1d97, { 1, 0 }
  uselistorder label %dec_label_pc_1d19, { 1, 0 }
  uselistorder label %dec_label_pc_1d02, { 1, 0 }
}

define i64 @create_tree_node(i64 %arg1) local_unnamed_addr {
dec_label_pc_1e00:
  %.pre-phi.reg2mem = alloca i64, !insn.addr !299
  %0 = call i64* @malloc(i32 24), !insn.addr !300
  %1 = icmp eq i64* %0, null, !insn.addr !301
  store i64 0, i64* %.pre-phi.reg2mem, !insn.addr !302
  br i1 %1, label %dec_label_pc_1e45, label %dec_label_pc_1e24, !insn.addr !302

dec_label_pc_1e24:                                ; preds = %dec_label_pc_1e00
  %2 = bitcast i64* %0 to i32*
  %3 = trunc i64 %arg1 to i32, !insn.addr !303
  store i32 %3, i32* %2, align 4, !insn.addr !304
  %4 = ptrtoint i64* %0 to i64
  %5 = add i64 %4, 8, !insn.addr !305
  %6 = inttoptr i64 %5 to i64*, !insn.addr !305
  store i64 0, i64* %6, align 8, !insn.addr !305
  %7 = add i64 %4, 16, !insn.addr !306
  %8 = inttoptr i64 %7 to i64*, !insn.addr !306
  store i64 0, i64* %8, align 8, !insn.addr !306
  store i64 %4, i64* %.pre-phi.reg2mem, !insn.addr !306
  br label %dec_label_pc_1e45, !insn.addr !306

dec_label_pc_1e45:                                ; preds = %dec_label_pc_1e00, %dec_label_pc_1e24
  %.pre-phi.reload = load i64, i64* %.pre-phi.reg2mem
  ret i64 %.pre-phi.reload, !insn.addr !307

; uselistorder directives
  uselistorder i64* %0, { 0, 2, 1 }
  uselistorder i64* %.pre-phi.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1e45, { 1, 0 }
}

define i64 @tree_heap_traversal() local_unnamed_addr {
dec_label_pc_1e4b:
  %rax.0.reg2mem = alloca i64, !insn.addr !308
  %.reg2mem = alloca i64, !insn.addr !308
  %0 = call i64 @create_tree_node(i64 10), !insn.addr !309
  %1 = icmp eq i64 %0, 0, !insn.addr !310
  %2 = icmp eq i1 %1, false, !insn.addr !311
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !311
  br i1 %2, label %dec_label_pc_1e76, label %dec_label_pc_1f51, !insn.addr !311

dec_label_pc_1e76:                                ; preds = %dec_label_pc_1e4b
  %3 = call i64 @create_tree_node(i64 20), !insn.addr !312
  %4 = add i64 %0, 8, !insn.addr !313
  %5 = inttoptr i64 %4 to i64*, !insn.addr !313
  store i64 %3, i64* %5, align 8, !insn.addr !313
  %6 = call i64 @create_tree_node(i64 30), !insn.addr !314
  %7 = add i64 %0, 16, !insn.addr !315
  %8 = inttoptr i64 %7 to i64*, !insn.addr !315
  store i64 %6, i64* %8, align 8, !insn.addr !315
  %9 = load i64, i64* %5, align 8
  %10 = icmp eq i64 %9, 0, !insn.addr !316
  store i64 %6, i64* %.reg2mem, !insn.addr !317
  br i1 %10, label %dec_label_pc_1ed1, label %dec_label_pc_1ea7, !insn.addr !317

dec_label_pc_1ea7:                                ; preds = %dec_label_pc_1e76
  %11 = icmp eq i64 %6, 0, !insn.addr !318
  %12 = icmp eq i1 %11, false, !insn.addr !319
  br i1 %12, label %dec_label_pc_1f01, label %dec_label_pc_1ec1, !insn.addr !319

dec_label_pc_1ec1:                                ; preds = %dec_label_pc_1ea7
  %13 = inttoptr i64 %9 to i64*, !insn.addr !320
  call void @free(i64* %13), !insn.addr !320
  %.pr = load i64, i64* %8, align 8
  store i64 %.pr, i64* %.reg2mem, !insn.addr !320
  br label %dec_label_pc_1ed1, !insn.addr !320

dec_label_pc_1ed1:                                ; preds = %dec_label_pc_1e76, %dec_label_pc_1ec1
  %.reload = load i64, i64* %.reg2mem, !insn.addr !321
  %14 = icmp eq i64 %.reload, 0, !insn.addr !322
  br i1 %14, label %dec_label_pc_1eee, label %dec_label_pc_1ede, !insn.addr !323

dec_label_pc_1ede:                                ; preds = %dec_label_pc_1ed1
  %15 = inttoptr i64 %.reload to i64*, !insn.addr !324
  call void @free(i64* %15), !insn.addr !324
  br label %dec_label_pc_1eee, !insn.addr !324

dec_label_pc_1eee:                                ; preds = %dec_label_pc_1ede, %dec_label_pc_1ed1
  %16 = inttoptr i64 %0 to i64*, !insn.addr !325
  call void @free(i64* %16), !insn.addr !325
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !326
  br label %dec_label_pc_1f51, !insn.addr !326

dec_label_pc_1f01:                                ; preds = %dec_label_pc_1ea7
  %17 = inttoptr i64 %0 to i32*, !insn.addr !327
  %18 = load i32, i32* %17, align 4, !insn.addr !327
  %19 = inttoptr i64 %9 to i32*, !insn.addr !328
  %20 = load i32, i32* %19, align 4, !insn.addr !328
  %21 = add i32 %20, %18, !insn.addr !329
  %22 = inttoptr i64 %6 to i32*, !insn.addr !330
  %23 = load i32, i32* %22, align 4, !insn.addr !330
  %24 = add i32 %21, %23, !insn.addr !331
  %25 = inttoptr i64 %9 to i64*, !insn.addr !332
  call void @free(i64* %25), !insn.addr !332
  %26 = load i64, i64* %8, align 8, !insn.addr !333
  %27 = inttoptr i64 %26 to i64*, !insn.addr !334
  call void @free(i64* %27), !insn.addr !334
  %28 = inttoptr i64 %0 to i64*, !insn.addr !335
  call void @free(i64* %28), !insn.addr !335
  %29 = zext i32 %24 to i64, !insn.addr !336
  store i64 %29, i64* %rax.0.reg2mem, !insn.addr !336
  br label %dec_label_pc_1f51, !insn.addr !336

dec_label_pc_1f51:                                ; preds = %dec_label_pc_1e4b, %dec_label_pc_1f01, %dec_label_pc_1eee
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !337

; uselistorder directives
  uselistorder i64 %9, { 1, 2, 0, 3 }
  uselistorder i64* %8, { 1, 0, 2 }
  uselistorder i64 %6, { 2, 1, 0, 3 }
  uselistorder i64 %0, { 0, 2, 1, 3, 4, 5 }
  uselistorder i64* %.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i64 16, { 6, 7, 2, 3, 0, 4, 1, 5 }
  uselistorder i64 (i64)* @create_tree_node, { 2, 1, 0 }
  uselistorder label %dec_label_pc_1f51, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1ed1, { 1, 0 }
}

define i64 @memory_leak(i64 %arg1) local_unnamed_addr {
dec_label_pc_1f53:
  %storemerge.reg2mem = alloca i64, !insn.addr !338
  %indvars.iv.reg2mem = alloca i64, !insn.addr !338
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !339
  %1 = call i64* @malloc(i32 %0), !insn.addr !339
  %2 = icmp eq i64* %1, null, !insn.addr !340
  %3 = icmp eq i1 %2, false, !insn.addr !341
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !341
  br i1 %3, label %dec_label_pc_1fab.preheader, label %dec_label_pc_1fd2, !insn.addr !341

dec_label_pc_1fab.preheader:                      ; preds = %dec_label_pc_1f53
  %4 = ptrtoint i64* %1 to i64, !insn.addr !339
  %5 = icmp sgt i32 %arg1.tr, 0, !insn.addr !342
  br i1 %5, label %dec_label_pc_1f8e.preheader, label %dec_label_pc_1fb3, !insn.addr !342

dec_label_pc_1f8e.preheader:                      ; preds = %dec_label_pc_1fab.preheader
  %wide.trip.count = and i64 %arg1, 4294967295
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_1f8e

dec_label_pc_1f8e:                                ; preds = %dec_label_pc_1f8e.preheader, %dec_label_pc_1f8e
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %6 = mul i64 %indvars.iv.reload, 4, !insn.addr !343
  %7 = add i64 %6, %4, !insn.addr !344
  %8 = inttoptr i64 %7 to i32*, !insn.addr !345
  %9 = trunc i64 %indvars.iv.reload to i32
  store i32 %9, i32* %8, align 4, !insn.addr !345
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !342
  br i1 %exitcond, label %dec_label_pc_1fb3, label %dec_label_pc_1f8e, !insn.addr !342

dec_label_pc_1fb3:                                ; preds = %dec_label_pc_1f8e, %dec_label_pc_1fab.preheader
  %10 = icmp slt i32 %arg1.tr, 0
  %11 = zext i1 %10 to i32, !insn.addr !346
  %12 = add i32 %11, %arg1.tr, !insn.addr !347
  %13 = ashr i32 %12, 1, !insn.addr !348
  %14 = sext i32 %13 to i64, !insn.addr !349
  %15 = mul i64 %14, 4, !insn.addr !350
  %16 = add i64 %15, %4, !insn.addr !351
  %17 = inttoptr i64 %16 to i32*, !insn.addr !352
  %18 = load i32, i32* %17, align 4, !insn.addr !352
  %19 = zext i32 %18 to i64, !insn.addr !352
  store i64 %19, i64* %storemerge.reg2mem, !insn.addr !352
  br label %dec_label_pc_1fd2, !insn.addr !352

dec_label_pc_1fd2:                                ; preds = %dec_label_pc_1f53, %dec_label_pc_1fb3
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !353

; uselistorder directives
  uselistorder i64* %1, { 1, 0 }
  uselistorder i32 %arg1.tr, { 2, 1, 3, 0 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1fd2, { 1, 0 }
  uselistorder label %dec_label_pc_1f8e, { 1, 0 }
}

define i64 @dangling_pointer() local_unnamed_addr {
dec_label_pc_1fd4:
  %storemerge.reg2mem = alloca i64, !insn.addr !354
  %0 = call i64* @malloc(i32 4), !insn.addr !355
  %1 = icmp eq i64* %0, null, !insn.addr !356
  %2 = icmp eq i1 %1, false, !insn.addr !357
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !357
  br i1 %2, label %dec_label_pc_1ffc, label %dec_label_pc_2040, !insn.addr !357

dec_label_pc_1ffc:                                ; preds = %dec_label_pc_1fd4
  %3 = bitcast i64* %0 to i32*, !insn.addr !358
  store i32 42, i32* %3, align 4, !insn.addr !358
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_3149, i64 0, i64 0), i64 42), !insn.addr !359
  call void @free(i64* %0), !insn.addr !360
  %5 = load i32, i32* %3, align 4, !insn.addr !361
  %6 = zext i32 %5 to i64, !insn.addr !362
  store i64 %6, i64* %storemerge.reg2mem, !insn.addr !362
  br label %dec_label_pc_2040, !insn.addr !362

dec_label_pc_2040:                                ; preds = %dec_label_pc_1fd4, %dec_label_pc_1ffc
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !363

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 42, { 1, 0 }
  uselistorder i32 42, { 1, 0 }
  uselistorder label %dec_label_pc_2040, { 1, 0 }
}

define i64 @double_free(i64 %arg1) local_unnamed_addr {
dec_label_pc_2042:
  %0 = alloca i64
  %rax.0.reg2mem = alloca i64, !insn.addr !364
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %arg1, 0, !insn.addr !365
  %3 = icmp eq i1 %2, false, !insn.addr !366
  br i1 %3, label %dec_label_pc_209e, label %dec_label_pc_2059, !insn.addr !366

dec_label_pc_2059:                                ; preds = %dec_label_pc_2042
  %4 = call i64* @malloc(i32 4), !insn.addr !367
  %5 = icmp eq i64* %4, null, !insn.addr !368
  %6 = icmp eq i1 %5, false, !insn.addr !369
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !369
  br i1 %6, label %dec_label_pc_2075, label %dec_label_pc_20a4, !insn.addr !369

dec_label_pc_2075:                                ; preds = %dec_label_pc_2059
  %7 = bitcast i64* %4 to i32*, !insn.addr !370
  store i32 10, i32* %7, align 4, !insn.addr !370
  call void @free(i64* %4), !insn.addr !371
  call void @free(i64* %4), !insn.addr !372
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !373
  br label %dec_label_pc_20a4, !insn.addr !373

dec_label_pc_209e:                                ; preds = %dec_label_pc_2042
  %8 = and i64 %1, 4294967295, !insn.addr !374
  store i64 %8, i64* %rax.0.reg2mem, !insn.addr !374
  br label %dec_label_pc_20a4, !insn.addr !374

dec_label_pc_20a4:                                ; preds = %dec_label_pc_2059, %dec_label_pc_209e, %dec_label_pc_2075
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !375

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32 4, { 3, 4, 0, 1, 5, 2 }
  uselistorder label %dec_label_pc_20a4, { 1, 2, 0 }
}

define i64 @heap_overflow() local_unnamed_addr {
dec_label_pc_20a6:
  %storemerge.reg2mem = alloca i64, !insn.addr !376
  %indvars.iv.reg2mem = alloca i64, !insn.addr !376
  %0 = call i64* @malloc(i32 40), !insn.addr !377
  %1 = ptrtoint i64* %0 to i64, !insn.addr !377
  %2 = icmp eq i64* %0, null, !insn.addr !378
  %3 = icmp eq i1 %2, false, !insn.addr !379
  store i64 0, i64* %indvars.iv.reg2mem, !insn.addr !379
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !379
  br i1 %3, label %dec_label_pc_20d7, label %dec_label_pc_2115, !insn.addr !379

dec_label_pc_20d7:                                ; preds = %dec_label_pc_20a6, %dec_label_pc_20d7
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %4 = mul i64 %indvars.iv.reload, 4, !insn.addr !380
  %5 = add i64 %4, %1, !insn.addr !381
  %6 = inttoptr i64 %5 to i32*, !insn.addr !382
  %7 = trunc i64 %indvars.iv.reload to i32
  %8 = mul i32 %7, 100
  store i32 %8, i32* %6, align 4, !insn.addr !382
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 11
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !383
  br i1 %exitcond, label %dec_label_pc_20fd, label %dec_label_pc_20d7, !insn.addr !383

dec_label_pc_20fd:                                ; preds = %dec_label_pc_20d7
  %9 = bitcast i64* %0 to i32*, !insn.addr !384
  %10 = load i32, i32* %9, align 4, !insn.addr !384
  call void @free(i64* %0), !insn.addr !385
  %11 = zext i32 %10 to i64, !insn.addr !386
  store i64 %11, i64* %storemerge.reg2mem, !insn.addr !386
  br label %dec_label_pc_2115, !insn.addr !386

dec_label_pc_2115:                                ; preds = %dec_label_pc_20a6, %dec_label_pc_20fd
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !387

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* (i32)* @malloc, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder label %dec_label_pc_2115, { 1, 0 }
  uselistorder label %dec_label_pc_20d7, { 1, 0 }
}

define i64 @test_heap_memory() local_unnamed_addr {
dec_label_pc_2117:
  %rax.0.reg2mem = alloca i64, !insn.addr !388
  %stack_var_-36 = alloca i32, align 4
  %stack_var_-24 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !389
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_3160 to i8*)), !insn.addr !390
  %2 = call i64 @heap_basic(i64 10), !insn.addr !391
  %3 = and i64 %2, 4294967295, !insn.addr !392
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_317e, i64 0, i64 0), i64 %3), !insn.addr !393
  %5 = call i64 @heap_calloc(i64 5), !insn.addr !394
  %6 = and i64 %5, 4294967295, !insn.addr !395
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_319b, i64 0, i64 0), i64 %6), !insn.addr !396
  %8 = call i64 @heap_realloc(), !insn.addr !397
  %9 = and i64 %8, 4294967295, !insn.addr !398
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_31c0, i64 0, i64 0), i64 %9), !insn.addr !399
  %11 = call i64 @heap_array(i64 10), !insn.addr !400
  %12 = and i64 %11, 4294967295, !insn.addr !401
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_31df, i64 0, i64 0), i64 %12), !insn.addr !402
  %14 = call i64 @heap_struct(i64 5), !insn.addr !403
  %15 = and i64 %14, 4294967295, !insn.addr !404
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_31fc, i64 0, i64 0), i64 %15), !insn.addr !405
  store i64 0, i64* %stack_var_-24, align 8, !insn.addr !406
  %17 = call i64 @heap_nested(i64* nonnull %stack_var_-24), !insn.addr !407
  %18 = and i64 %17, 4294967295, !insn.addr !408
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_321a, i64 0, i64 0), i64 %18), !insn.addr !409
  %20 = load i64, i64* %stack_var_-24, align 8, !insn.addr !410
  %21 = icmp eq i64 %20, 0, !insn.addr !411
  br i1 %21, label %dec_label_pc_2230, label %dec_label_pc_2214, !insn.addr !412

dec_label_pc_2214:                                ; preds = %dec_label_pc_2117
  %22 = add i64 %20, 8, !insn.addr !413
  %23 = inttoptr i64 %22 to i64*, !insn.addr !413
  %24 = load i64, i64* %23, align 8, !insn.addr !413
  %25 = inttoptr i64 %24 to i64*, !insn.addr !414
  call void @free(i64* %25), !insn.addr !414
  %26 = load i64, i64* %stack_var_-24, align 8, !insn.addr !415
  %27 = inttoptr i64 %26 to i64*, !insn.addr !416
  call void @free(i64* %27), !insn.addr !416
  br label %dec_label_pc_2230, !insn.addr !416

dec_label_pc_2230:                                ; preds = %dec_label_pc_2214, %dec_label_pc_2117
  %28 = call i64 @linked_list_heap(), !insn.addr !417
  %29 = and i64 %28, 4294967295, !insn.addr !418
  %30 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3238, i64 0, i64 0), i64 %29), !insn.addr !419
  %31 = call i64 @tree_heap_traversal(), !insn.addr !420
  %32 = and i64 %31, 4294967295, !insn.addr !421
  %33 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3260, i64 0, i64 0), i64 %32), !insn.addr !422
  %34 = call i64 @memory_leak(i64 5), !insn.addr !423
  %35 = and i64 %34, 4294967295, !insn.addr !424
  %36 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3286, i64 0, i64 0), i64 %35), !insn.addr !425
  %37 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_32a8, i64 0, i64 0)), !insn.addr !426
  %38 = call i32 @fork(), !insn.addr !427
  %39 = icmp eq i32 %38, 0, !insn.addr !428
  %40 = icmp eq i1 %39, false, !insn.addr !429
  br i1 %40, label %dec_label_pc_22e2, label %dec_label_pc_22b2, !insn.addr !429

dec_label_pc_22b2:                                ; preds = %dec_label_pc_2230
  %41 = call i64 @dangling_pointer(), !insn.addr !430
  %42 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_32c8 to i8*)), !insn.addr !431
  call void @exit(i32 0), !insn.addr !432
  unreachable, !insn.addr !432

dec_label_pc_22e2:                                ; preds = %dec_label_pc_2230
  %43 = icmp slt i32 %38, 1, !insn.addr !433
  br i1 %43, label %dec_label_pc_2356, label %dec_label_pc_22e8, !insn.addr !433

dec_label_pc_22e8:                                ; preds = %dec_label_pc_22e2
  %44 = call i32 @waitpid(i32 %38, i32* nonnull %stack_var_-36, i32 0), !insn.addr !434
  %45 = load i32, i32* %stack_var_-36, align 4, !insn.addr !435
  %46 = urem i32 %45, 128, !insn.addr !436
  %47 = icmp eq i32 %46, 0, !insn.addr !437
  %48 = icmp eq i1 %47, false, !insn.addr !438
  br i1 %48, label %dec_label_pc_2329, label %dec_label_pc_2308, !insn.addr !438

dec_label_pc_2308:                                ; preds = %dec_label_pc_22e8
  %49 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_32d8 to i8*)), !insn.addr !439
  br label %dec_label_pc_2365, !insn.addr !440

dec_label_pc_2329:                                ; preds = %dec_label_pc_22e8
  %50 = trunc i32 %45 to i8
  %51 = urem i8 %50, -128
  %52 = add nuw i8 %51, 1, !insn.addr !441
  %53 = icmp ult i8 %52, 2, !insn.addr !442
  %54 = icmp slt i8 %52, 0, !insn.addr !442
  %55 = or i1 %53, %54, !insn.addr !443
  br i1 %55, label %dec_label_pc_2365, label %dec_label_pc_2338, !insn.addr !443

dec_label_pc_2338:                                ; preds = %dec_label_pc_2329
  %56 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3300 to i8*)), !insn.addr !444
  br label %dec_label_pc_2365, !insn.addr !445

dec_label_pc_2356:                                ; preds = %dec_label_pc_22e2
  call void @perror(i8* bitcast (i8** @global_var_3341 to i8*)), !insn.addr !446
  br label %dec_label_pc_2365, !insn.addr !446

dec_label_pc_2365:                                ; preds = %dec_label_pc_2356, %dec_label_pc_2338, %dec_label_pc_2329, %dec_label_pc_2308
  %57 = call i64 @__readfsqword(i64 40), !insn.addr !447
  %58 = icmp eq i64 %0, %57, !insn.addr !447
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !448
  br i1 %58, label %dec_label_pc_237a, label %dec_label_pc_2375, !insn.addr !448

dec_label_pc_2375:                                ; preds = %dec_label_pc_2365
  call void @__stack_chk_fail(), !insn.addr !449
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !449
  br label %dec_label_pc_237a, !insn.addr !449

dec_label_pc_237a:                                ; preds = %dec_label_pc_2375, %dec_label_pc_2365
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !450

; uselistorder directives
  uselistorder i8 %52, { 1, 0 }
  uselistorder i32 %45, { 1, 0 }
  uselistorder i64* %stack_var_-24, { 1, 2, 0, 3 }
  uselistorder void (i64*)* @free, { 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 21 }
}

define i64 @global_var_access() local_unnamed_addr {
dec_label_pc_237c:
  store i32 ptrtoint (i32* @global_var_60c1 to i32), i32* @global_var_60c0, align 4, !insn.addr !451
  ret i64 zext (i32 ptrtoint (i32* @global_var_60c1 to i32) to i64), !insn.addr !452
}

define i64 @global_var_read() local_unnamed_addr {
dec_label_pc_239b:
  %0 = load i32, i32* @global_var_60c0, align 4, !insn.addr !453
  %1 = mul i32 %0, 2, !insn.addr !454
  %2 = zext i32 %1 to i64, !insn.addr !454
  ret i64 %2, !insn.addr !455

; uselistorder directives
  uselistorder i32* @global_var_60c0, { 1, 0 }
}

define i64 @global_array_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_23ad:
  %storemerge.reg2mem = alloca i64, !insn.addr !456
  %0 = trunc i64 %arg1 to i32, !insn.addr !457
  %1 = icmp ult i32 %0, 10
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !458
  br i1 %1, label %dec_label_pc_23cb, label %dec_label_pc_23e2, !insn.addr !458

dec_label_pc_23cb:                                ; preds = %dec_label_pc_23ad
  %sext = mul i64 %arg1, 4294967296
  %2 = ashr exact i64 %sext, 30, !insn.addr !459
  %3 = add i64 %2, ptrtoint (i64* @global_var_6020 to i64), !insn.addr !460
  %4 = inttoptr i64 %3 to i32*, !insn.addr !460
  %5 = load i32, i32* %4, align 4, !insn.addr !460
  %6 = zext i32 %5 to i64, !insn.addr !460
  store i64 %6, i64* %storemerge.reg2mem, !insn.addr !460
  br label %dec_label_pc_23e2, !insn.addr !460

dec_label_pc_23e2:                                ; preds = %dec_label_pc_23ad, %dec_label_pc_23cb
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !461

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 30, { 0, 3, 1, 2 }
  uselistorder label %dec_label_pc_23e2, { 1, 0 }
}

define i64 @static_local(i64 %arg1) local_unnamed_addr {
dec_label_pc_23e4:
  %0 = trunc i64 %arg1 to i32, !insn.addr !462
  %1 = icmp eq i32 %0, 0, !insn.addr !463
  %. = select i1 %1, i32 ptrtoint (i32* @global_var_6159 to i32), i32 0
  %.2 = select i1 %1, i64 zext (i32 ptrtoint (i32* @global_var_6159 to i32) to i64), i64 0
  store i32 %., i32* @global_var_6158, align 4
  ret i64 %.2, !insn.addr !464

; uselistorder directives
  uselistorder i32 ptrtoint (i32* @global_var_6159 to i32), { 1, 0 }
}

define i64 @static_helper(i64 %arg1) local_unnamed_addr {
dec_label_pc_241d:
  %0 = mul i64 %arg1, 2, !insn.addr !465
  %1 = and i64 %0, 4294967294, !insn.addr !465
  ret i64 %1, !insn.addr !466
}

define i64 @call_static_func(i64 %arg1) local_unnamed_addr {
dec_label_pc_242f:
  %0 = and i64 %arg1, 4294967295, !insn.addr !467
  %1 = call i64 @static_helper(i64 %0), !insn.addr !468
  %2 = add i64 %1, 1, !insn.addr !469
  %3 = and i64 %2, 4294967295, !insn.addr !469
  ret i64 %3, !insn.addr !470
}

define i64 @access_extern_global() local_unnamed_addr {
dec_label_pc_244d:
  %0 = load i32, i32* inttoptr (i64 24704 to i32*), align 128, !insn.addr !471
  %1 = add i32 %0, 100, !insn.addr !472
  %2 = zext i32 %1 to i64, !insn.addr !472
  ret i64 %2, !insn.addr !473
}

define i64 @call_extern_func() local_unnamed_addr {
dec_label_pc_2460:
  %0 = call i64 @extern_function(i64 5), !insn.addr !474
  ret i64 %0, !insn.addr !475
}

define i64 @read_const_data() local_unnamed_addr {
dec_label_pc_2474:
  ret i64 ptrtoint (i64* @global_var_60a6 to i64), !insn.addr !476
}

define i64 @access_bss_var() local_unnamed_addr {
dec_label_pc_2496:
  %0 = load i32, i32* @global_var_60c4, align 4, !insn.addr !477
  %1 = zext i32 %0 to i64, !insn.addr !477
  ret i64 %1, !insn.addr !478
}

define i64 @access_bss_buffer() local_unnamed_addr {
dec_label_pc_24a6:
  %0 = load i8, i8* @global_var_60e0, align 1, !insn.addr !479
  %1 = sext i8 %0 to i64, !insn.addr !480
  ret i64 %1, !insn.addr !481

; uselistorder directives
  uselistorder i8 0, { 0, 3, 1, 2 }
}

define i64 @global_struct_access() local_unnamed_addr {
dec_label_pc_24ba:
  %0 = load i32, i32* @global_var_6048, align 4, !insn.addr !482
  %1 = load i32, i32* @global_var_604c, align 4, !insn.addr !483
  %2 = add i32 %1, %0, !insn.addr !484
  %3 = zext i32 %2 to i64, !insn.addr !484
  ret i64 %3, !insn.addr !485
}

define i64 @set_file_static(i64 %arg1) local_unnamed_addr {
dec_label_pc_24d2:
  %0 = and i64 %arg1, 4294967295, !insn.addr !486
  %1 = trunc i64 %arg1 to i32, !insn.addr !487
  store i32 %1, i32* @global_var_6050, align 4, !insn.addr !487
  ret i64 %0, !insn.addr !488
}

define i64 @get_file_static() local_unnamed_addr {
dec_label_pc_24e9:
  %0 = load i32, i32* @global_var_6050, align 4, !insn.addr !489
  %1 = zext i32 %0 to i64, !insn.addr !489
  ret i64 %1, !insn.addr !490

; uselistorder directives
  uselistorder i32* @global_var_6050, { 1, 0 }
}

define i64 @set_global_callback(i64 %arg1) local_unnamed_addr {
dec_label_pc_24f9:
  store i64 %arg1, i64* @global_var_6148, align 8, !insn.addr !491
  ret i64 %arg1, !insn.addr !492

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @call_global_callback(i64 %arg1) local_unnamed_addr {
dec_label_pc_2513:
  %0 = and i64 %arg1, 4294967295
  %1 = load i64, i64* @global_var_6148, align 8, !insn.addr !493
  %2 = icmp eq i64 %1, 0, !insn.addr !494
  %storemerge = select i1 %2, i64 4294967295, i64 %0
  ret i64 %storemerge, !insn.addr !495
}

define i64 @global_heap_store(i32* %arg1) local_unnamed_addr {
dec_label_pc_2545:
  %storemerge.reg2mem = alloca i64, !insn.addr !496
  store i32* %arg1, i32** @global_var_6150, align 8, !insn.addr !497
  %0 = icmp eq i32* %arg1, null, !insn.addr !498
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !499
  br i1 %0, label %dec_label_pc_2578, label %dec_label_pc_2568, !insn.addr !499

dec_label_pc_2568:                                ; preds = %dec_label_pc_2545
  %1 = load i32, i32* %arg1, align 4, !insn.addr !500
  %2 = zext i32 %1 to i64, !insn.addr !500
  store i64 %2, i64* %storemerge.reg2mem, !insn.addr !501
  br label %dec_label_pc_2578, !insn.addr !501

dec_label_pc_2578:                                ; preds = %dec_label_pc_2545, %dec_label_pc_2568
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !502

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2578, { 1, 0 }
}

define i64 @static_complex_init() local_unnamed_addr {
dec_label_pc_257a:
  %0 = load i32, i32* @global_var_6060, align 4, !insn.addr !503
  %1 = load i32, i32* @global_var_6068, align 4, !insn.addr !504
  %2 = add i32 %1, %0, !insn.addr !505
  %3 = load i32, i32* @global_var_6070, align 4, !insn.addr !506
  %4 = add i32 %2, %3, !insn.addr !507
  %5 = zext i32 %4 to i64, !insn.addr !507
  ret i64 %5, !insn.addr !508
}

define i64 @tls_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_259a:
  %0 = trunc i64 %arg1 to i32, !insn.addr !509
  call void @__writefsdword(i64 -4, i32 %0), !insn.addr !510
  %1 = call i32 @__readfsdword(i64 -4), !insn.addr !511
  %2 = mul i32 %1, 2, !insn.addr !512
  %3 = zext i32 %2 to i64, !insn.addr !512
  ret i64 %3, !insn.addr !513
}

define i64 @init_depends_on(i32* %arg1) local_unnamed_addr {
dec_label_pc_25bc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i32* %arg1, null, !insn.addr !514
  br i1 %2, label %dec_label_pc_25db, label %dec_label_pc_25cf, !insn.addr !515

dec_label_pc_25cf:                                ; preds = %dec_label_pc_25bc
  %3 = trunc i64 %1 to i32
  store i32 %3, i32* inttoptr (i64 24924 to i32*), align 4, !insn.addr !516
  br label %dec_label_pc_25db, !insn.addr !516

dec_label_pc_25db:                                ; preds = %dec_label_pc_25cf, %dec_label_pc_25bc
  %4 = load i32, i32* @global_var_615c, align 4, !insn.addr !517
  %5 = zext i32 %4 to i64, !insn.addr !517
  ret i64 %5, !insn.addr !518
}

define i64 @init_order_test() local_unnamed_addr {
dec_label_pc_25e3:
  %rax.0.reg2mem = alloca i64, !insn.addr !519
  %stack_var_-20 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !520
  store i32 20, i32* %stack_var_-20, align 4, !insn.addr !521
  %1 = call i64 @init_depends_on(i32* nonnull %stack_var_-20), !insn.addr !522
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !523
  %3 = icmp eq i64 %0, %2, !insn.addr !523
  store i64 %1, i64* %rax.0.reg2mem, !insn.addr !524
  br i1 %3, label %dec_label_pc_2625, label %dec_label_pc_2620, !insn.addr !524

dec_label_pc_2620:                                ; preds = %dec_label_pc_25e3
  call void @__stack_chk_fail(), !insn.addr !525
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !525
  br label %dec_label_pc_2625, !insn.addr !525

dec_label_pc_2625:                                ; preds = %dec_label_pc_2620, %dec_label_pc_25e3
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !526

; uselistorder directives
  uselistorder i32 20, { 2, 3, 0, 1 }
}

define i64 @test_static_global() local_unnamed_addr {
dec_label_pc_2627:
  %rax.0.reg2mem = alloca i64, !insn.addr !527
  %stack_var_-20 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !528
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_3360 to i8*)), !insn.addr !529
  %2 = call i64 @global_var_access(), !insn.addr !530
  %3 = and i64 %2, 4294967295, !insn.addr !531
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3388, i64 0, i64 0), i64 %3), !insn.addr !532
  %5 = call i64 @global_var_read(), !insn.addr !533
  %6 = and i64 %5, 4294967295, !insn.addr !534
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_33b0, i64 0, i64 0), i64 %6), !insn.addr !535
  %8 = call i64 @global_array_access(i64 5), !insn.addr !536
  %9 = and i64 %8, 4294967295, !insn.addr !537
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_33d8, i64 0, i64 0), i64 %9), !insn.addr !538
  %11 = call i64 @static_local(i64 1), !insn.addr !539
  %12 = call i64 @static_local(i64 0), !insn.addr !540
  %13 = and i64 %12, 4294967295, !insn.addr !541
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_33fd, i64 0, i64 0), i64 %13), !insn.addr !542
  %15 = call i64 @static_local(i64 0), !insn.addr !543
  %16 = and i64 %15, 4294967295, !insn.addr !544
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_33fd, i64 0, i64 0), i64 %16), !insn.addr !545
  %18 = call i64 @call_static_func(i64 5), !insn.addr !546
  %19 = and i64 %18, 4294967295, !insn.addr !547
  %20 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3420, i64 0, i64 0), i64 %19), !insn.addr !548
  %21 = call i64 @access_extern_global(), !insn.addr !549
  %22 = and i64 %21, 4294967295, !insn.addr !550
  %23 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3448, i64 0, i64 0), i64 %22), !insn.addr !551
  %24 = call i64 @call_extern_func(), !insn.addr !552
  %25 = and i64 %24, 4294967295, !insn.addr !553
  %26 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3470, i64 0, i64 0), i64 %25), !insn.addr !554
  %27 = call i64 @read_const_data(), !insn.addr !555
  %28 = and i64 %27, 4294967295, !insn.addr !556
  %29 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3498, i64 0, i64 0), i64 %28), !insn.addr !557
  %30 = call i64 @access_bss_var(), !insn.addr !558
  %31 = and i64 %30, 4294967295, !insn.addr !559
  %32 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_34c0, i64 0, i64 0), i64 %31), !insn.addr !560
  %33 = call i64 @access_bss_buffer(), !insn.addr !561
  %34 = and i64 %33, 4294967295, !insn.addr !562
  %35 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_34e0, i64 0, i64 0), i64 %34), !insn.addr !563
  %36 = call i64 @global_struct_access(), !insn.addr !564
  %37 = and i64 %36, 4294967295, !insn.addr !565
  %38 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3508, i64 0, i64 0), i64 %37), !insn.addr !566
  %39 = call i64 @set_file_static(i64 50), !insn.addr !567
  %40 = call i64 @get_file_static(), !insn.addr !568
  %41 = and i64 %40, 4294967295, !insn.addr !569
  %42 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_352e, i64 0, i64 0), i64 %41), !insn.addr !570
  %43 = call i64 @set_global_callback(i64 4873), !insn.addr !571
  %44 = call i64 @call_global_callback(i64 5), !insn.addr !572
  %45 = and i64 %44, 4294967295, !insn.addr !573
  %46 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3550, i64 0, i64 0), i64 %45), !insn.addr !574
  store i32 100, i32* %stack_var_-20, align 4, !insn.addr !575
  %47 = call i64 @global_heap_store(i32* nonnull %stack_var_-20), !insn.addr !576
  %48 = and i64 %47, 4294967295, !insn.addr !577
  %49 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3578, i64 0, i64 0), i64 %48), !insn.addr !578
  %50 = call i64 @static_complex_init(), !insn.addr !579
  %51 = and i64 %50, 4294967295, !insn.addr !580
  %52 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_35a0, i64 0, i64 0), i64 %51), !insn.addr !581
  %53 = call i64 @tls_access(i64 10), !insn.addr !582
  %54 = and i64 %53, 4294967295, !insn.addr !583
  %55 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_35c5, i64 0, i64 0), i64 %54), !insn.addr !584
  %56 = call i64 @init_order_test(), !insn.addr !585
  %57 = and i64 %56, 4294967295, !insn.addr !586
  %58 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_35e8, i64 0, i64 0), i64 %57), !insn.addr !587
  %59 = call i64 @__readfsqword(i64 40), !insn.addr !588
  %60 = icmp eq i64 %0, %59, !insn.addr !588
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !589
  br i1 %60, label %dec_label_pc_28d2, label %dec_label_pc_28cd, !insn.addr !589

dec_label_pc_28cd:                                ; preds = %dec_label_pc_2627
  call void @__stack_chk_fail(), !insn.addr !590
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !590
  br label %dec_label_pc_28d2, !insn.addr !590

dec_label_pc_28d2:                                ; preds = %dec_label_pc_28cd, %dec_label_pc_2627
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !591

; uselistorder directives
  uselistorder i32 100, { 2, 3, 0, 1 }
  uselistorder i64 (i64)* @static_local, { 2, 1, 0 }
  uselistorder i64 5, { 2, 3, 4, 5, 6, 7, 8, 0, 1, 9, 10 }
}

define i64 @memop_memset(i64* %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_28d4:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !592
  %1 = load i64, i64* %0
  %2 = icmp ne i64* %arg1, null, !insn.addr !593
  %3 = icmp eq i64 %arg2, 0, !insn.addr !594
  %4 = icmp eq i1 %3, false, !insn.addr !595
  %or.cond = icmp eq i1 %2, %4
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !596
  br i1 %or.cond, label %dec_label_pc_2900, label %dec_label_pc_291f, !insn.addr !596

dec_label_pc_2900:                                ; preds = %dec_label_pc_28d4
  %5 = trunc i64 %arg3 to i32, !insn.addr !597
  %6 = trunc i64 %arg2 to i32, !insn.addr !598
  %7 = call i64* @memset(i64* nonnull %arg1, i32 %5, i32 %6), !insn.addr !598
  %8 = urem i64 %1, 256, !insn.addr !599
  store i64 %8, i64* %storemerge.reg2mem, !insn.addr !599
  br label %dec_label_pc_291f, !insn.addr !599

dec_label_pc_291f:                                ; preds = %dec_label_pc_28d4, %dec_label_pc_2900
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !600

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg2, { 1, 0 }
  uselistorder label %dec_label_pc_291f, { 1, 0 }
}

define i64 @memop_memcpy(i64* %arg1, i32* %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2921:
  %storemerge.reg2mem = alloca i64, !insn.addr !601
  %0 = icmp ne i64* %arg1, null, !insn.addr !602
  %1 = icmp ne i32* %arg2, null, !insn.addr !603
  %or.cond.not = icmp eq i1 %0, %1
  %2 = icmp eq i64 %arg3, 0, !insn.addr !604
  %3 = icmp eq i1 %2, false, !insn.addr !605
  %or.cond4 = icmp eq i1 %or.cond.not, %3
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !606
  br i1 %or.cond4, label %dec_label_pc_2955, label %dec_label_pc_2981, !insn.addr !606

dec_label_pc_2955:                                ; preds = %dec_label_pc_2921
  %4 = ptrtoint i64* %arg1 to i64
  %5 = bitcast i32* %arg2 to i64*
  %6 = trunc i64 %arg3 to i32, !insn.addr !607
  %7 = call i64* @memcpy(i64* nonnull %arg1, i64* %5, i32 %6), !insn.addr !607
  %8 = add i64 %arg3, -4
  %9 = and i64 %8, -4, !insn.addr !608
  %10 = add i64 %9, %4, !insn.addr !609
  %11 = inttoptr i64 %10 to i32*, !insn.addr !610
  %12 = load i32, i32* %11, align 4, !insn.addr !610
  %13 = zext i32 %12 to i64, !insn.addr !610
  store i64 %13, i64* %storemerge.reg2mem, !insn.addr !610
  br label %dec_label_pc_2981, !insn.addr !610

dec_label_pc_2981:                                ; preds = %dec_label_pc_2921, %dec_label_pc_2955
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !611

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg3, { 1, 2, 0 }
  uselistorder i32* %arg2, { 1, 0 }
  uselistorder i64* %arg1, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2981, { 1, 0 }
}

define i64 @memop_memmove(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2983:
  %storemerge.reg2mem = alloca i64, !insn.addr !612
  %0 = icmp eq i64* %arg1, null, !insn.addr !613
  %1 = icmp ult i64 %arg2, 2
  %or.cond = or i1 %0, %1
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !614
  br i1 %or.cond, label %dec_label_pc_29d9, label %dec_label_pc_29ac, !insn.addr !614

dec_label_pc_29ac:                                ; preds = %dec_label_pc_2983
  %2 = ptrtoint i64* %arg1 to i64
  %3 = add i64 %2, 1, !insn.addr !615
  %4 = inttoptr i64 %3 to i64*, !insn.addr !616
  %5 = trunc i64 %arg2 to i32
  %6 = add i32 %5, -1, !insn.addr !616
  %7 = call i64* @memmove(i64* %4, i64* nonnull %arg1, i32 %6), !insn.addr !616
  %8 = inttoptr i64 %3 to i8*, !insn.addr !617
  %9 = load i8, i8* %8, align 1, !insn.addr !617
  %10 = sext i8 %9 to i64, !insn.addr !618
  store i64 %10, i64* %storemerge.reg2mem, !insn.addr !618
  br label %dec_label_pc_29d9, !insn.addr !618

dec_label_pc_29d9:                                ; preds = %dec_label_pc_2983, %dec_label_pc_29ac
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !619

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %arg1, { 0, 2, 1 }
  uselistorder label %dec_label_pc_29d9, { 1, 0 }
}

define i64 @memop_memcmp(i32* %arg1, i32* %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_29db:
  %0 = icmp ne i32* %arg1, null, !insn.addr !620
  %1 = icmp ne i32* %arg2, null, !insn.addr !621
  %or.cond.not = icmp eq i1 %0, %1
  %2 = icmp eq i64 %arg3, 0, !insn.addr !622
  %3 = icmp eq i1 %2, false, !insn.addr !623
  %or.cond5 = icmp eq i1 %or.cond.not, %3
  br i1 %or.cond5, label %dec_label_pc_2a0f, label %dec_label_pc_2a48, !insn.addr !624

dec_label_pc_2a0f:                                ; preds = %dec_label_pc_29db
  %4 = bitcast i32* %arg1 to i64*
  %5 = bitcast i32* %arg2 to i64*
  %6 = trunc i64 %arg3 to i32, !insn.addr !625
  %7 = call i32 @memcmp(i64* %4, i64* %5, i32 %6), !insn.addr !625
  %8 = icmp eq i32 %7, 0, !insn.addr !626
  %9 = icmp slt i32 %7, 0, !insn.addr !626
  %10 = icmp eq i1 %9, false, !insn.addr !627
  %11 = icmp eq i1 %8, false, !insn.addr !627
  %12 = icmp eq i1 %10, %11, !insn.addr !627
  %. = select i1 %10, i64 0, i64 4294967295
  %spec.select = select i1 %12, i64 1, i64 %.
  ret i64 %spec.select

dec_label_pc_2a48:                                ; preds = %dec_label_pc_29db
  ret i64 0, !insn.addr !628

; uselistorder directives
  uselistorder i32 %7, { 1, 0 }
  uselistorder i64 %arg3, { 1, 0 }
  uselistorder i32* %arg2, { 1, 0 }
}

define i64 @memop_bzero(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2a4a:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !629
  %1 = load i64, i64* %0
  %2 = icmp eq i64* %arg1, null, !insn.addr !630
  %3 = icmp eq i1 %2, false, !insn.addr !631
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !631
  br i1 %3, label %dec_label_pc_2a6c, label %dec_label_pc_2a91, !insn.addr !631

dec_label_pc_2a6c:                                ; preds = %dec_label_pc_2a4a
  %4 = trunc i64 %arg2 to i32, !insn.addr !632
  %5 = call i64* @memset(i64* %arg1, i32 0, i32 %4), !insn.addr !632
  %6 = urem i64 %1, 256, !insn.addr !633
  store i64 %6, i64* %storemerge.reg2mem, !insn.addr !633
  br label %dec_label_pc_2a91, !insn.addr !633

dec_label_pc_2a91:                                ; preds = %dec_label_pc_2a4a, %dec_label_pc_2a6c
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !634

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* (i64*, i32, i32)* @memset, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2a91, { 1, 0 }
}

define i64 @memop_bcopy(i32* %arg1, i32* %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2a93:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !635
  %1 = load i64, i64* %0
  %2 = icmp ne i32* %arg1, null, !insn.addr !636
  %3 = icmp ne i32* %arg2, null, !insn.addr !637
  %or.cond.not = icmp eq i1 %2, %3
  %4 = icmp eq i64 %arg3, 0, !insn.addr !638
  %5 = icmp eq i1 %4, false, !insn.addr !639
  %or.cond5 = icmp eq i1 %or.cond.not, %5
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !640
  br i1 %or.cond5, label %dec_label_pc_2ac7, label %dec_label_pc_2ae8, !insn.addr !640

dec_label_pc_2ac7:                                ; preds = %dec_label_pc_2a93
  %6 = bitcast i32* %arg2 to i64*
  %7 = bitcast i32* %arg1 to i64*
  %8 = trunc i64 %arg3 to i32, !insn.addr !641
  %9 = call i64* @memmove(i64* %6, i64* %7, i32 %8), !insn.addr !641
  %10 = urem i64 %1, 256, !insn.addr !642
  store i64 %10, i64* %storemerge.reg2mem, !insn.addr !642
  br label %dec_label_pc_2ae8, !insn.addr !642

dec_label_pc_2ae8:                                ; preds = %dec_label_pc_2a93, %dec_label_pc_2ac7
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !643

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* (i64*, i64*, i32)* @memmove, { 1, 0, 2 }
  uselistorder i64 %arg3, { 1, 0 }
  uselistorder i32* %arg2, { 1, 0 }
  uselistorder label %dec_label_pc_2ae8, { 1, 0 }
}

define i64 @memop_unaligned_access(i64* %arg1) local_unnamed_addr {
dec_label_pc_2aea:
  %rax.0.reg2mem = alloca i64, !insn.addr !644
  %storemerge.reg2mem = alloca i64, !insn.addr !644
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !645
  %1 = icmp eq i64* %arg1, null, !insn.addr !646
  %2 = icmp eq i1 %1, false, !insn.addr !647
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !647
  br i1 %2, label %dec_label_pc_2b17, label %dec_label_pc_2b27, !insn.addr !647

dec_label_pc_2b17:                                ; preds = %dec_label_pc_2aea
  %3 = ptrtoint i64* %arg1 to i64
  %4 = add i64 %3, 1, !insn.addr !648
  %5 = inttoptr i64 %4 to i32*, !insn.addr !649
  %6 = load i32, i32* %5, align 4, !insn.addr !649
  %7 = zext i32 %6 to i64, !insn.addr !650
  store i64 %7, i64* %storemerge.reg2mem, !insn.addr !650
  br label %dec_label_pc_2b27, !insn.addr !650

dec_label_pc_2b27:                                ; preds = %dec_label_pc_2aea, %dec_label_pc_2b17
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %8 = call i64 @__readfsqword(i64 40), !insn.addr !651
  %9 = icmp eq i64 %0, %8, !insn.addr !651
  store i64 %storemerge.reload, i64* %rax.0.reg2mem, !insn.addr !652
  br i1 %9, label %dec_label_pc_2b3b, label %dec_label_pc_2b36, !insn.addr !652

dec_label_pc_2b36:                                ; preds = %dec_label_pc_2b27
  call void @__stack_chk_fail(), !insn.addr !653
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !653
  br label %dec_label_pc_2b3b, !insn.addr !653

dec_label_pc_2b3b:                                ; preds = %dec_label_pc_2b36, %dec_label_pc_2b27
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !654

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 1, { 14, 10, 15, 13, 11, 0, 1, 2, 4, 3, 5, 6, 12, 7, 8, 9 }
  uselistorder i64* null, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17 }
  uselistorder i64* %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_2b27, { 1, 0 }
}

define i64 @memop_memory_barrier(i32* %arg1) local_unnamed_addr {
dec_label_pc_2b3d:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i32* %arg1, null, !insn.addr !655
  %3 = icmp eq i1 %2, false, !insn.addr !656
  %4 = mul i64 %1, 2
  %5 = and i64 %4, 4294967294
  %storemerge = select i1 %3, i64 %5, i64 4294967295
  ret i64 %storemerge, !insn.addr !657

; uselistorder directives
  uselistorder i64 4294967294, { 4, 6, 0, 1, 2, 3, 5, 7, 8 }
  uselistorder i64 2, { 0, 5, 1, 6, 2, 3, 4 }
  uselistorder i1 false, { 10, 11, 2, 12, 13, 6, 3, 4, 5, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 0, 25, 26, 1, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 7, 37, 8, 9 }
  uselistorder i32* null, { 3, 0, 4, 1, 5, 2, 6, 7, 8 }
}

define i64 @test_memory_op_functions() local_unnamed_addr {
dec_label_pc_2b73:
  %rax.0.reg2mem = alloca i64, !insn.addr !658
  %stack_var_-404 = alloca i32, align 4
  %stack_var_-309 = alloca i64, align 8
  %stack_var_-313 = alloca i32, align 4
  %stack_var_-317 = alloca i32, align 4
  %stack_var_-301 = alloca i64, align 8
  %stack_var_-388 = alloca i32, align 4
  %stack_var_-400 = alloca i32, align 4
  %stack_var_-291 = alloca i64, align 8
  %stack_var_-280 = alloca i64, align 8
  %stack_var_-344 = alloca i64, align 8
  %stack_var_-376 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !659
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_3610 to i8*)), !insn.addr !660
  store i32 10, i32* %stack_var_-376, align 4, !insn.addr !661
  store i64 0, i64* %stack_var_-344, align 8, !insn.addr !662
  %2 = call i64 @memop_memset(i64* nonnull %stack_var_-280, i64 10, i64 65), !insn.addr !663
  %3 = and i64 %2, 4294967295, !insn.addr !664
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3631, i64 0, i64 0), i64 %3), !insn.addr !665
  %5 = call i64 @memop_memcpy(i64* nonnull %stack_var_-344, i32* nonnull %stack_var_-376, i64 20), !insn.addr !666
  %6 = and i64 %5, 4294967295, !insn.addr !667
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3642, i64 0, i64 0), i64 %6), !insn.addr !668
  store i64 8245905578810697032, i64* %stack_var_-291, align 8, !insn.addr !669
  %8 = call i64 @memop_memmove(i64* nonnull %stack_var_-291, i64 10), !insn.addr !670
  %9 = trunc i64 %8 to i8, !insn.addr !671
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3653, i64 0, i64 0), i8 %9), !insn.addr !671
  store i32 1, i32* %stack_var_-400, align 4, !insn.addr !672
  store i32 1, i32* %stack_var_-388, align 4, !insn.addr !673
  %11 = call i64 @memop_memcmp(i32* nonnull %stack_var_-400, i32* nonnull %stack_var_-388, i64 12), !insn.addr !674
  %12 = and i64 %11, 4294967295, !insn.addr !675
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3664, i64 0, i64 0), i64 %12), !insn.addr !676
  %14 = call i64 @memop_bzero(i64* nonnull %stack_var_-301, i64 10), !insn.addr !677
  %15 = and i64 %14, 4294967295, !insn.addr !678
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3675, i64 0, i64 0), i64 %15), !insn.addr !679
  store i32 67305985, i32* %stack_var_-317, align 4, !insn.addr !680
  store i32 0, i32* %stack_var_-313, align 4, !insn.addr !681
  %17 = call i64 @memop_bcopy(i32* nonnull %stack_var_-317, i32* nonnull %stack_var_-313, i64 4), !insn.addr !682
  %18 = and i64 %17, 4294967295, !insn.addr !683
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3686, i64 0, i64 0), i64 %18), !insn.addr !684
  store i64 506097522914230528, i64* %stack_var_-309, align 8, !insn.addr !685
  %20 = call i64 @memop_unaligned_access(i64* nonnull %stack_var_-309), !insn.addr !686
  %21 = trunc i64 %20 to i32, !insn.addr !687
  %22 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_3697, i64 0, i64 0), i32 %21), !insn.addr !688
  store i32 5, i32* %stack_var_-404, align 4, !insn.addr !689
  %23 = call i64 @memop_memory_barrier(i32* nonnull %stack_var_-404), !insn.addr !690
  %24 = and i64 %23, 4294967295, !insn.addr !691
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_36aa, i64 0, i64 0), i64 %24), !insn.addr !692
  %26 = call i64 @__readfsqword(i64 40), !insn.addr !693
  %27 = icmp eq i64 %0, %26, !insn.addr !693
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !694
  br i1 %27, label %dec_label_pc_2dfc, label %dec_label_pc_2df7, !insn.addr !694

dec_label_pc_2df7:                                ; preds = %dec_label_pc_2b73
  call void @__stack_chk_fail(), !insn.addr !695
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !695
  br label %dec_label_pc_2dfc, !insn.addr !695

dec_label_pc_2dfc:                                ; preds = %dec_label_pc_2df7, %dec_label_pc_2b73
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !696

; uselistorder directives
  uselistorder void ()* @__stack_chk_fail, { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 11 }
  uselistorder i32 5, { 2, 0, 1 }
  uselistorder i64 4, { 15, 0, 1, 2, 16, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 }
  uselistorder i32 0, { 25, 16, 27, 28, 15, 29, 30, 17, 18, 31, 4, 8, 0, 1, 5, 9, 2, 10, 6, 11, 26, 7, 12, 32, 33, 13, 3, 14, 19, 20, 21, 22, 23, 24 }
  uselistorder i64 20, { 1, 2, 3, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 49 }
  uselistorder i64 10, { 3, 4, 5, 6, 7, 8, 9, 0, 10, 11, 1, 2 }
  uselistorder i32 10, { 4, 1, 5, 2, 6, 0, 3 }
  uselistorder i32 (i8*)* @puts, { 3, 2, 1, 0, 4 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_2dfe:
  %0 = call i64 @test_stack_memory(), !insn.addr !697
  %1 = call i64 @test_heap_memory(), !insn.addr !698
  %2 = call i64 @test_static_global(), !insn.addr !699
  %3 = call i64 @test_memory_op_functions(), !insn.addr !700
  ret i64 0, !insn.addr !701

; uselistorder directives
  uselistorder i64 0, { 20, 0, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 143, 26, 21, 27, 28, 29, 30, 1, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 139, 90, 91, 140, 92, 93, 94, 95, 96, 97, 145, 47, 2, 98, 99, 100, 101, 102, 103, 104, 105, 146, 106, 107, 144, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 3, 147, 118, 119, 4, 148, 149, 150, 151, 152, 153, 5, 154, 120, 6, 24, 155, 156, 157, 25, 7, 8, 9, 158, 10, 11, 13, 12, 14, 15, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 16, 22, 17, 18, 159, 23, 19, 160, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 141, 142 }
}

define i64 @extern_function(i64 %arg1) local_unnamed_addr {
dec_label_pc_2e35:
  %0 = mul i64 %arg1, 3, !insn.addr !702
  %1 = and i64 %0, 4294967295, !insn.addr !702
  ret i64 %1, !insn.addr !703

; uselistorder directives
  uselistorder i64 4294967295, { 33, 34, 35, 36, 37, 38, 39, 22, 0, 1, 2, 30, 3, 4, 5, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 6, 32, 31, 58, 59, 60, 7, 61, 62, 63, 64, 65, 66, 67, 68, 69, 8, 23, 9, 10, 24, 11, 12, 13, 14, 15, 25, 16, 17, 26, 18, 27, 19, 70, 71, 72, 73, 74, 75, 76, 77, 78, 28, 20, 29, 21, 79 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_2e4c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !704

; uselistorder directives
  uselistorder i32 1, { 8, 78, 80, 85, 84, 83, 82, 81, 79, 77, 76, 75, 74, 73, 11, 7, 13, 12, 14, 6, 15, 5, 16, 17, 18, 4, 86, 19, 87, 20, 3, 21, 22, 69, 88, 71, 23, 25, 24, 26, 2, 27, 97, 29, 28, 31, 30, 32, 98, 41, 40, 39, 38, 37, 36, 35, 34, 33, 42, 43, 99, 45, 44, 49, 48, 47, 46, 53, 52, 51, 50, 100, 55, 54, 91, 90, 89, 56, 57, 101, 92, 60, 59, 58, 102, 70, 93, 63, 62, 61, 103, 94, 65, 64, 10, 1, 95, 67, 66, 9, 0, 96, 68, 72 }
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
!41 = !{i64 4925}
!42 = !{i64 4929}
!43 = !{i64 4930}
!44 = !{i64 4935}
!45 = !{i64 4945}
!46 = !{i64 4983}
!47 = !{i64 4972}
!48 = !{i64 4995}
!49 = !{i64 4997}
!50 = !{i64 5004}
!51 = !{i64 5013}
!52 = !{i64 5015}
!53 = !{i64 5021}
!54 = !{i64 5053}
!55 = !{i64 5056}
!56 = !{i64 5083}
!57 = !{i64 5089}
!58 = !{i64 5130}
!59 = !{i64 5133}
!60 = !{i64 5134}
!61 = !{i64 5149}
!62 = !{i64 5216}
!63 = !{i64 5139}
!64 = !{i64 5192}
!65 = !{i64 5190}
!66 = !{i64 5199}
!67 = !{i64 5225}
!68 = !{i64 5232}
!69 = !{i64 5241}
!70 = !{i64 5243}
!71 = !{i64 5249}
!72 = !{i64 5250}
!73 = !{i64 5263}
!74 = !{i64 5266}
!75 = !{i64 5291}
!76 = !{i64 5293}
!77 = !{i64 5300}
!78 = !{i64 5259}
!79 = !{i64 5351}
!80 = !{i64 5368}
!81 = !{i64 5391}
!82 = !{i64 5401}
!83 = !{i64 5430}
!84 = !{i64 5436}
!85 = !{i64 5526}
!86 = !{i64 5513}
!87 = !{i64 5536}
!88 = !{i64 5538}
!89 = !{i64 5546}
!90 = !{i64 5549}
!91 = !{i64 5559}
!92 = !{i64 5568}
!93 = !{i64 5570}
!94 = !{i64 5580}
!95 = !{i64 5581}
!96 = !{i64 5593}
!97 = !{i64 5596}
!98 = !{i64 5611}
!99 = !{i64 5615}
!100 = !{i64 5589}
!101 = !{i64 5632}
!102 = !{i64 5649}
!103 = !{i64 5672}
!104 = !{i64 5711}
!105 = !{i64 5682}
!106 = !{i64 5717}
!107 = !{i64 5753}
!108 = !{i64 5757}
!109 = !{i64 5820}
!110 = !{i64 5783}
!111 = !{i64 5795}
!112 = !{i64 5806}
!113 = !{i64 5808}
!114 = !{i64 5827}
!115 = !{i64 5830}
!116 = !{i64 5832}
!117 = !{i64 5834}
!118 = !{i64 5836}
!119 = !{i64 5848}
!120 = !{i64 5851}
!121 = !{i64 5857}
!122 = !{i64 5866}
!123 = !{i64 5868}
!124 = !{i64 5874}
!125 = !{i64 5875}
!126 = !{i64 5895}
!127 = !{i64 5977}
!128 = !{i64 5986}
!129 = !{i64 5988}
!130 = !{i64 5994}
!131 = !{i64 5995}
!132 = !{i64 6007}
!133 = !{i64 6032}
!134 = !{i64 6042}
!135 = !{i64 6047}
!136 = !{i64 6064}
!137 = !{i64 6074}
!138 = !{i64 6079}
!139 = !{i64 6096}
!140 = !{i64 6106}
!141 = !{i64 6111}
!142 = !{i64 6128}
!143 = !{i64 6140}
!144 = !{i64 6145}
!145 = !{i64 6162}
!146 = !{i64 6207}
!147 = !{i64 6235}
!148 = !{i64 6240}
!149 = !{i64 6257}
!150 = !{i64 6267}
!151 = !{i64 6272}
!152 = !{i64 6289}
!153 = !{i64 6299}
!154 = !{i64 6304}
!155 = !{i64 6321}
!156 = !{i64 6331}
!157 = !{i64 6336}
!158 = !{i64 6353}
!159 = !{i64 6358}
!160 = !{i64 6379}
!161 = !{i64 6384}
!162 = !{i64 6401}
!163 = !{i64 6411}
!164 = !{i64 6420}
!165 = !{i64 6422}
!166 = !{i64 6428}
!167 = !{i64 6429}
!168 = !{i64 6456}
!169 = !{i64 6465}
!170 = !{i64 6470}
!171 = !{i64 6525}
!172 = !{i64 6493}
!173 = !{i64 6505}
!174 = !{i64 6513}
!175 = !{i64 6532}
!176 = !{i64 6535}
!177 = !{i64 6537}
!178 = !{i64 6539}
!179 = !{i64 6541}
!180 = !{i64 6553}
!181 = !{i64 6556}
!182 = !{i64 6568}
!183 = !{i64 6573}
!184 = !{i64 6577}
!185 = !{i64 6578}
!186 = !{i64 6590}
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
!200 = !{i64 6725}
!201 = !{i64 6730}
!202 = !{i64 6756}
!203 = !{i64 6768}
!204 = !{i64 6777}
!205 = !{i64 6787}
!206 = !{i64 6793}
!207 = !{i64 6811}
!208 = !{i64 6820}
!209 = !{i64 6825}
!210 = !{i64 6834}
!211 = !{i64 6844}
!212 = !{i64 6868}
!213 = !{i64 6880}
!214 = !{i64 6896}
!215 = !{i64 6906}
!216 = !{i64 6912}
!217 = !{i64 6916}
!218 = !{i64 6918}
!219 = !{i64 6921}
!220 = !{i64 6927}
!221 = !{i64 6930}
!222 = !{i64 6947}
!223 = !{i64 6952}
!224 = !{i64 6956}
!225 = !{i64 6957}
!226 = !{i64 6984}
!227 = !{i64 6993}
!228 = !{i64 6998}
!229 = !{i64 7058}
!230 = !{i64 7021}
!231 = !{i64 7033}
!232 = !{i64 7044}
!233 = !{i64 7046}
!234 = !{i64 7065}
!235 = !{i64 7068}
!236 = !{i64 7070}
!237 = !{i64 7072}
!238 = !{i64 7074}
!239 = !{i64 7086}
!240 = !{i64 7089}
!241 = !{i64 7101}
!242 = !{i64 7106}
!243 = !{i64 7110}
!244 = !{i64 7111}
!245 = !{i64 7131}
!246 = !{i64 7140}
!247 = !{i64 7145}
!248 = !{i64 7158}
!249 = !{i64 7161}
!250 = !{i64 7166}
!251 = !{i64 7173}
!252 = !{i64 7180}
!253 = !{i64 7189}
!254 = !{i64 7201}
!255 = !{i64 7206}
!256 = !{i64 7210}
!257 = !{i64 7211}
!258 = !{i64 7233}
!259 = !{i64 7245}
!260 = !{i64 7274}
!261 = !{i64 7292}
!262 = !{i64 7297}
!263 = !{i64 7312}
!264 = !{i64 7315}
!265 = !{i64 7327}
!266 = !{i64 7337}
!267 = !{i64 7350}
!268 = !{i64 7363}
!269 = !{i64 7367}
!270 = !{i64 7375}
!271 = !{i64 7385}
!272 = !{i64 7386}
!273 = !{i64 7431}
!274 = !{i64 7440}
!275 = !{i64 7445}
!276 = !{i64 7481}
!277 = !{i64 7486}
!278 = !{i64 7461}
!279 = !{i64 7476}
!280 = !{i64 7508}
!281 = !{i64 7516}
!282 = !{i64 7522}
!283 = !{i64 7530}
!284 = !{i64 7535}
!285 = !{i64 7563}
!286 = !{i64 7571}
!287 = !{i64 7575}
!288 = !{i64 7583}
!289 = !{i64 7632}
!290 = !{i64 7610}
!291 = !{i64 7612}
!292 = !{i64 7619}
!293 = !{i64 7627}
!294 = !{i64 7648}
!295 = !{i64 7663}
!296 = !{i64 7668}
!297 = !{i64 7673}
!298 = !{i64 7679}
!299 = !{i64 7680}
!300 = !{i64 7700}
!301 = !{i64 7709}
!302 = !{i64 7714}
!303 = !{i64 7720}
!304 = !{i64 7723}
!305 = !{i64 7729}
!306 = !{i64 7741}
!307 = !{i64 7754}
!308 = !{i64 7755}
!309 = !{i64 7772}
!310 = !{i64 7781}
!311 = !{i64 7786}
!312 = !{i64 7803}
!313 = !{i64 7812}
!314 = !{i64 7821}
!315 = !{i64 7830}
!316 = !{i64 7842}
!317 = !{i64 7845}
!318 = !{i64 7855}
!319 = !{i64 7858}
!320 = !{i64 7884}
!321 = !{i64 7893}
!322 = !{i64 7897}
!323 = !{i64 7900}
!324 = !{i64 7913}
!325 = !{i64 7925}
!326 = !{i64 7935}
!327 = !{i64 7941}
!328 = !{i64 7951}
!329 = !{i64 7953}
!330 = !{i64 7963}
!331 = !{i64 7965}
!332 = !{i64 7981}
!333 = !{i64 7990}
!334 = !{i64 7997}
!335 = !{i64 8009}
!336 = !{i64 8014}
!337 = !{i64 8018}
!338 = !{i64 8019}
!339 = !{i64 8046}
!340 = !{i64 8055}
!341 = !{i64 8060}
!342 = !{i64 8113}
!343 = !{i64 8083}
!344 = !{i64 8095}
!345 = !{i64 8101}
!346 = !{i64 8120}
!347 = !{i64 8123}
!348 = !{i64 8125}
!349 = !{i64 8127}
!350 = !{i64 8129}
!351 = !{i64 8141}
!352 = !{i64 8144}
!353 = !{i64 8147}
!354 = !{i64 8148}
!355 = !{i64 8165}
!356 = !{i64 8174}
!357 = !{i64 8179}
!358 = !{i64 8192}
!359 = !{i64 8227}
!360 = !{i64 8239}
!361 = !{i64 8248}
!362 = !{i64 8253}
!363 = !{i64 8257}
!364 = !{i64 8258}
!365 = !{i64 8274}
!366 = !{i64 8279}
!367 = !{i64 8286}
!368 = !{i64 8295}
!369 = !{i64 8300}
!370 = !{i64 8313}
!371 = !{i64 8326}
!372 = !{i64 8338}
!373 = !{i64 8348}
!374 = !{i64 8354}
!375 = !{i64 8357}
!376 = !{i64 8358}
!377 = !{i64 8375}
!378 = !{i64 8384}
!379 = !{i64 8389}
!380 = !{i64 8412}
!381 = !{i64 8424}
!382 = !{i64 8433}
!383 = !{i64 8443}
!384 = !{i64 8449}
!385 = !{i64 8461}
!386 = !{i64 8466}
!387 = !{i64 8470}
!388 = !{i64 8471}
!389 = !{i64 8483}
!390 = !{i64 8508}
!391 = !{i64 8518}
!392 = !{i64 8523}
!393 = !{i64 8540}
!394 = !{i64 8550}
!395 = !{i64 8555}
!396 = !{i64 8572}
!397 = !{i64 8582}
!398 = !{i64 8587}
!399 = !{i64 8604}
!400 = !{i64 8614}
!401 = !{i64 8619}
!402 = !{i64 8636}
!403 = !{i64 8646}
!404 = !{i64 8651}
!405 = !{i64 8668}
!406 = !{i64 8673}
!407 = !{i64 8688}
!408 = !{i64 8693}
!409 = !{i64 8710}
!410 = !{i64 8715}
!411 = !{i64 8719}
!412 = !{i64 8722}
!413 = !{i64 8728}
!414 = !{i64 8735}
!415 = !{i64 8740}
!416 = !{i64 8747}
!417 = !{i64 8757}
!418 = !{i64 8762}
!419 = !{i64 8779}
!420 = !{i64 8789}
!421 = !{i64 8794}
!422 = !{i64 8811}
!423 = !{i64 8821}
!424 = !{i64 8826}
!425 = !{i64 8843}
!426 = !{i64 8863}
!427 = !{i64 8868}
!428 = !{i64 8876}
!429 = !{i64 8880}
!430 = !{i64 8887}
!431 = !{i64 8915}
!432 = !{i64 8925}
!433 = !{i64 8934}
!434 = !{i64 8953}
!435 = !{i64 8958}
!436 = !{i64 8961}
!437 = !{i64 8964}
!438 = !{i64 8966}
!439 = !{i64 8994}
!440 = !{i64 8999}
!441 = !{i64 9010}
!442 = !{i64 9012}
!443 = !{i64 9014}
!444 = !{i64 9039}
!445 = !{i64 9044}
!446 = !{i64 9056}
!447 = !{i64 9066}
!448 = !{i64 9075}
!449 = !{i64 9077}
!450 = !{i64 9083}
!451 = !{i64 9101}
!452 = !{i64 9114}
!453 = !{i64 9123}
!454 = !{i64 9129}
!455 = !{i64 9132}
!456 = !{i64 9133}
!457 = !{i64 9141}
!458 = !{i64 9148}
!459 = !{i64 9168}
!460 = !{i64 9183}
!461 = !{i64 9187}
!462 = !{i64 9196}
!463 = !{i64 9199}
!464 = !{i64 9244}
!465 = !{i64 9259}
!466 = !{i64 9262}
!467 = !{i64 9281}
!468 = !{i64 9283}
!469 = !{i64 9288}
!470 = !{i64 9292}
!471 = !{i64 9301}
!472 = !{i64 9307}
!473 = !{i64 9311}
!474 = !{i64 9325}
!475 = !{i64 9331}
!476 = !{i64 9365}
!477 = !{i64 9374}
!478 = !{i64 9381}
!479 = !{i64 9390}
!480 = !{i64 9397}
!481 = !{i64 9401}
!482 = !{i64 9410}
!483 = !{i64 9416}
!484 = !{i64 9422}
!485 = !{i64 9425}
!486 = !{i64 9437}
!487 = !{i64 9440}
!488 = !{i64 9448}
!489 = !{i64 9457}
!490 = !{i64 9464}
!491 = !{i64 9481}
!492 = !{i64 9490}
!493 = !{i64 9506}
!494 = !{i64 9513}
!495 = !{i64 9540}
!496 = !{i64 9541}
!497 = !{i64 9557}
!498 = !{i64 9571}
!499 = !{i64 9574}
!500 = !{i64 9583}
!501 = !{i64 9585}
!502 = !{i64 9593}
!503 = !{i64 9602}
!504 = !{i64 9608}
!505 = !{i64 9614}
!506 = !{i64 9616}
!507 = !{i64 9622}
!508 = !{i64 9625}
!509 = !{i64 9634}
!510 = !{i64 9640}
!511 = !{i64 9648}
!512 = !{i64 9656}
!513 = !{i64 9659}
!514 = !{i64 9672}
!515 = !{i64 9677}
!516 = !{i64 9685}
!517 = !{i64 9691}
!518 = !{i64 9698}
!519 = !{i64 9699}
!520 = !{i64 9711}
!521 = !{i64 9726}
!522 = !{i64 9740}
!523 = !{i64 9749}
!524 = !{i64 9758}
!525 = !{i64 9760}
!526 = !{i64 9766}
!527 = !{i64 9767}
!528 = !{i64 9779}
!529 = !{i64 9804}
!530 = !{i64 9814}
!531 = !{i64 9819}
!532 = !{i64 9836}
!533 = !{i64 9846}
!534 = !{i64 9851}
!535 = !{i64 9868}
!536 = !{i64 9878}
!537 = !{i64 9883}
!538 = !{i64 9900}
!539 = !{i64 9910}
!540 = !{i64 9920}
!541 = !{i64 9925}
!542 = !{i64 9942}
!543 = !{i64 9952}
!544 = !{i64 9957}
!545 = !{i64 9974}
!546 = !{i64 9984}
!547 = !{i64 9989}
!548 = !{i64 10006}
!549 = !{i64 10016}
!550 = !{i64 10021}
!551 = !{i64 10038}
!552 = !{i64 10048}
!553 = !{i64 10053}
!554 = !{i64 10070}
!555 = !{i64 10080}
!556 = !{i64 10085}
!557 = !{i64 10102}
!558 = !{i64 10112}
!559 = !{i64 10117}
!560 = !{i64 10134}
!561 = !{i64 10144}
!562 = !{i64 10149}
!563 = !{i64 10166}
!564 = !{i64 10176}
!565 = !{i64 10181}
!566 = !{i64 10198}
!567 = !{i64 10208}
!568 = !{i64 10218}
!569 = !{i64 10223}
!570 = !{i64 10240}
!571 = !{i64 10255}
!572 = !{i64 10265}
!573 = !{i64 10270}
!574 = !{i64 10287}
!575 = !{i64 10292}
!576 = !{i64 10306}
!577 = !{i64 10311}
!578 = !{i64 10328}
!579 = !{i64 10338}
!580 = !{i64 10343}
!581 = !{i64 10360}
!582 = !{i64 10370}
!583 = !{i64 10375}
!584 = !{i64 10392}
!585 = !{i64 10402}
!586 = !{i64 10407}
!587 = !{i64 10424}
!588 = !{i64 10434}
!589 = !{i64 10443}
!590 = !{i64 10445}
!591 = !{i64 10451}
!592 = !{i64 10452}
!593 = !{i64 10475}
!594 = !{i64 10482}
!595 = !{i64 10487}
!596 = !{i64 10480}
!597 = !{i64 10500}
!598 = !{i64 10512}
!599 = !{i64 10524}
!600 = !{i64 10528}
!601 = !{i64 10529}
!602 = !{i64 10553}
!603 = !{i64 10560}
!604 = !{i64 10567}
!605 = !{i64 10572}
!606 = !{i64 10558}
!607 = !{i64 10599}
!608 = !{i64 10612}
!609 = !{i64 10620}
!610 = !{i64 10623}
!611 = !{i64 10626}
!612 = !{i64 10627}
!613 = !{i64 10647}
!614 = !{i64 10652}
!615 = !{i64 10680}
!616 = !{i64 10694}
!617 = !{i64 10707}
!618 = !{i64 10710}
!619 = !{i64 10714}
!620 = !{i64 10739}
!621 = !{i64 10746}
!622 = !{i64 10753}
!623 = !{i64 10758}
!624 = !{i64 10744}
!625 = !{i64 10785}
!626 = !{i64 10793}
!627 = !{i64 10797}
!628 = !{i64 10825}
!629 = !{i64 10826}
!630 = !{i64 10846}
!631 = !{i64 10851}
!632 = !{i64 10882}
!633 = !{i64 10894}
!634 = !{i64 10898}
!635 = !{i64 10899}
!636 = !{i64 10923}
!637 = !{i64 10930}
!638 = !{i64 10937}
!639 = !{i64 10942}
!640 = !{i64 10928}
!641 = !{i64 10969}
!642 = !{i64 10981}
!643 = !{i64 10985}
!644 = !{i64 10986}
!645 = !{i64 11002}
!646 = !{i64 11017}
!647 = !{i64 11022}
!648 = !{i64 11035}
!649 = !{i64 11039}
!650 = !{i64 11044}
!651 = !{i64 11051}
!652 = !{i64 11060}
!653 = !{i64 11062}
!654 = !{i64 11068}
!655 = !{i64 11081}
!656 = !{i64 11086}
!657 = !{i64 11122}
!658 = !{i64 11123}
!659 = !{i64 11138}
!660 = !{i64 11163}
!661 = !{i64 11168}
!662 = !{i64 11218}
!663 = !{i64 11270}
!664 = !{i64 11275}
!665 = !{i64 11292}
!666 = !{i64 11322}
!667 = !{i64 11327}
!668 = !{i64 11344}
!669 = !{i64 11359}
!670 = !{i64 11397}
!671 = !{i64 11419}
!672 = !{i64 11424}
!673 = !{i64 11454}
!674 = !{i64 11509}
!675 = !{i64 11514}
!676 = !{i64 11531}
!677 = !{i64 11551}
!678 = !{i64 11556}
!679 = !{i64 11573}
!680 = !{i64 11578}
!681 = !{i64 11588}
!682 = !{i64 11623}
!683 = !{i64 11628}
!684 = !{i64 11645}
!685 = !{i64 11660}
!686 = !{i64 11677}
!687 = !{i64 11682}
!688 = !{i64 11699}
!689 = !{i64 11704}
!690 = !{i64 11724}
!691 = !{i64 11729}
!692 = !{i64 11746}
!693 = !{i64 11756}
!694 = !{i64 11765}
!695 = !{i64 11767}
!696 = !{i64 11773}
!697 = !{i64 11787}
!698 = !{i64 11797}
!699 = !{i64 11807}
!700 = !{i64 11817}
!701 = !{i64 11828}
!702 = !{i64 11847}
!703 = !{i64 11850}
!704 = !{i64 11864}
