source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_401c = external local_unnamed_addr global i64
@global_var_2151 = constant [16 x i8] c"CALL-L1-01: %d\0A\00"
@global_var_2161 = constant [16 x i8] c"CALL-L1-02: %d\0A\00"
@global_var_2171 = constant [16 x i8] c"CALL-L1-03: %d\0A\00"
@global_var_2181 = constant [16 x i8] c"CALL-L1-04: %d\0A\00"
@global_var_2191 = constant [16 x i8] c"CALL-L1-05: %d\0A\00"
@global_var_21a1 = constant [16 x i8] c"CALL-L1-06: %d\0A\00"
@global_var_21b1 = constant [16 x i8] c"CALL-L1-07: %d\0A\00"
@global_var_21c1 = constant [16 x i8] c"CALL-L1-08: %d\0A\00"
@global_var_21d1 = constant [16 x i8] c"CALL-L1-09: %d\0A\00"
@global_var_21e1 = constant [16 x i8] c"CALL-L1-10: %d\0A\00"
@global_var_23d8 = local_unnamed_addr constant i64 4614253070214989087
@global_var_21f1 = constant [5 x i8] c"test\00"
@global_var_21f6 = constant [4 x i8] c"abc\00"
@global_var_21fa = local_unnamed_addr constant [4 x i8] c"def\00"
@global_var_21fe = local_unnamed_addr constant [4 x i8] c"ghi\00"
@global_var_2202 = constant [17 x i8] c"PARAM-L1-01: %d\0A\00"
@global_var_2213 = constant [17 x i8] c"PARAM-L1-02: %d\0A\00"
@global_var_2224 = constant [17 x i8] c"PARAM-L2-01: %d\0A\00"
@global_var_2235 = constant [17 x i8] c"PARAM-L2-02: %d\0A\00"
@global_var_2246 = constant [17 x i8] c"PARAM-L2-03: %d\0A\00"
@global_var_2257 = constant [17 x i8] c"PARAM-L2-04: %d\0A\00"
@global_var_2268 = constant [17 x i8] c"PARAM-L3-01: %d\0A\00"
@global_var_2279 = constant [17 x i8] c"PARAM-L3-02: %d\0A\00"
@global_var_228a = constant [17 x i8] c"PARAM-L3-03: %d\0A\00"
@global_var_229b = constant [17 x i8] c"PARAM-L3-04: %d\0A\00"
@global_var_22ac = constant [17 x i8] c"PARAM-L3-05: %d\0A\00"
@global_var_4010 = global i64 4614253070214989087
@0 = external global i32
@1 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\9F\BA\E7\A1\80\E8\B0\83\E7\94\A8\E7\BA\A6\E5\AE\9A ===\00"
@global_var_2008 = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @1, i64 0, i64 0)
@2 = internal constant [40 x i8] c"CALL-L2-06\EF\BC\9Avarargs_func(5, 1-5) = %d\0A\00"
@global_var_2030 = constant i8* getelementptr inbounds ([40 x i8], [40 x i8]* @2, i64 0, i64 0)
@3 = internal constant [34 x i8] c"CALL-L2-07\EF\BC\9Afunc_no_args() = %d\0A\00"
@global_var_2058 = constant i8* getelementptr inbounds ([34 x i8], [34 x i8]* @3, i64 0, i64 0)
@4 = internal constant [39 x i8] c"CALL-L2-08\EF\BC\9Afunc_many_args(1-8) = %d\0A\00"
@global_var_2080 = constant i8* getelementptr inbounds ([39 x i8], [39 x i8]* @4, i64 0, i64 0)
@5 = internal constant [40 x i8] c"CALL-L2-09\EF\BC\9Afunc_mixed_args(...) = %d\0A\00"
@global_var_20a8 = constant i8* getelementptr inbounds ([40 x i8], [40 x i8]* @5, i64 0, i64 0)
@6 = internal constant [44 x i8] c"CALL-L2-10\EF\BC\9Afunc_struct_byval(large) = %d\0A\00"
@global_var_20d0 = constant i8* getelementptr inbounds ([44 x i8], [44 x i8]* @6, i64 0, i64 0)
@7 = internal constant [45 x i8] c"CALL-L2-11\EF\BC\9Afunc_struct_byptr({5,10}) = %d\0A\00"
@global_var_2100 = constant i8* getelementptr inbounds ([45 x i8], [45 x i8]* @7, i64 0, i64 0)
@8 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\8F\82\E6\95\B0\E4\BC\A0\E9\80\92\E6\A8\A1\E5\BC\8F ===\00"
@global_var_2130 = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @8, i64 0, i64 0)
@global_var_4018 = global i32 100
@9 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E8\BF\94\E5\9B\9E\E5\80\BC\E5\A4\84\E7\90\86 ===\00"
@global_var_22bd = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"RET-L1-01: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_22db = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"RET-L1-02: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_22f7 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [27 x i8] c"RET-L1-03: %d (\E6\9C\9F\E6\9C\9B: 7)\0A\00"
@global_var_2313 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @12, i64 0, i64 0)
@13 = internal constant [29 x i8] c"RET-L1-04: %d (\E6\9C\9F\E6\9C\9B: 215)\0A\00"
@global_var_232e = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @13, i64 0, i64 0)
@14 = internal constant [28 x i8] c"RET-L2-01: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_234b = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @14, i64 0, i64 0)
@15 = internal constant [29 x i8] c"RET-L2-02: %d (\E6\9C\9F\E6\9C\9B: 100)\0A\00"
@global_var_2367 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @15, i64 0, i64 0)
@16 = internal constant [28 x i8] c"RET-L3-01: %d (\E6\9C\9F\E6\9C\9B: 40)\0A\00"
@global_var_2384 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @16, i64 0, i64 0)
@17 = internal constant [28 x i8] c"RET-L3-02: %d (\E6\9C\9F\E6\9C\9B: 60)\0A\00"
@global_var_23a0 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i64 0, i64 0)
@18 = internal constant [28 x i8] c"RET-L3-03: %d (\E6\9C\9F\E6\9C\9B: 21)\0A\00"
@global_var_23bc = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @18, i64 0, i64 0)

define i64 @_init() local_unnamed_addr {
dec_label_pc_1000:
  %rax.0.reg2mem = alloca i64, !insn.addr !0
  %0 = load i64, i64* inttoptr (i64 16360 to i64*), align 8, !insn.addr !1
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

define void @function_1070(i64* %d) local_unnamed_addr {
dec_label_pc_1070:
  call void @__cxa_finalize(i64* %d), !insn.addr !6
  ret void, !insn.addr !6
}

define i32 @function_1080(i8* %s) local_unnamed_addr {
dec_label_pc_1080:
  %0 = call i32 @puts(i8* %s), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @function_1090(i8* %s) local_unnamed_addr {
dec_label_pc_1090:
  %0 = call i32 @strlen(i8* %s), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define void @function_10a0() local_unnamed_addr {
dec_label_pc_10a0:
  call void @__stack_chk_fail(), !insn.addr !9
  ret void, !insn.addr !9
}

define i32 @function_10b0(i32 %flag, i8* %format, ...) local_unnamed_addr {
dec_label_pc_10b0:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 %flag, i8* %format), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_10c0:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !11
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !11
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !11
  %3 = call i32 @__libc_start_main(i64 7687, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !11
  %4 = call i64 @__asm_hlt(), !insn.addr !12
  unreachable, !insn.addr !12
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_10f0:
  ret i64 16416, !insn.addr !13
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1120:
  ret i64 0, !insn.addr !14
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1160:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* inttoptr (i64 16412 to i8*), align 4, !insn.addr !15
  %3 = icmp eq i8 %2, 0, !insn.addr !15
  %4 = icmp eq i1 %3, false, !insn.addr !16
  br i1 %4, label %dec_label_pc_1198, label %dec_label_pc_116d, !insn.addr !16

dec_label_pc_116d:                                ; preds = %dec_label_pc_1160
  %5 = load i64, i64* inttoptr (i64 16376 to i64*), align 8, !insn.addr !17
  %6 = icmp eq i64 %5, 0, !insn.addr !17
  br i1 %6, label %dec_label_pc_1187, label %dec_label_pc_117b, !insn.addr !18

dec_label_pc_117b:                                ; preds = %dec_label_pc_116d
  %7 = load i64, i64* inttoptr (i64 16392 to i64*), align 8, !insn.addr !19
  %8 = inttoptr i64 %7 to i64*, !insn.addr !20
  call void @__cxa_finalize(i64* %8), !insn.addr !20
  br label %dec_label_pc_1187, !insn.addr !20

dec_label_pc_1187:                                ; preds = %dec_label_pc_117b, %dec_label_pc_116d
  %9 = call i64 @deregister_tm_clones(), !insn.addr !21
  store i8 1, i8* bitcast (i64* @global_var_401c to i8*), align 8, !insn.addr !22
  ret i64 %9, !insn.addr !23

dec_label_pc_1198:                                ; preds = %dec_label_pc_1160
  ret i64 %1, !insn.addr !24
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_11a0:
  %0 = call i64 @register_tm_clones(), !insn.addr !25
  ret i64 %0, !insn.addr !25
}

define i32 @callback_func(i32 %x) local_unnamed_addr {
dec_label_pc_11a9:
  %0 = mul i32 %x, 2, !insn.addr !26
  ret i32 %0, !insn.addr !27
}

define i32 @func_a(i32 %x) local_unnamed_addr {
dec_label_pc_11b1:
  %0 = add i32 %x, 10, !insn.addr !28
  ret i32 %0, !insn.addr !29
}

define i32 @func_b(i32 %x) local_unnamed_addr {
dec_label_pc_11b9:
  %0 = mul i32 %x, 2, !insn.addr !30
  ret i32 %0, !insn.addr !31
}

define i64 @cdecl_func(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_11c1:
  %0 = add i64 %arg2, %arg1, !insn.addr !32
  %1 = and i64 %0, 4294967295, !insn.addr !32
  ret i64 %1, !insn.addr !33
}

define i64 @call_cdecl() local_unnamed_addr {
dec_label_pc_11c9:
  ret i64 15, !insn.addr !34
}

define i64 @stdcall_func(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_11d3:
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !35
  %sext1 = mul i64 %arg2, 4294967296
  %1 = ashr exact i64 %sext1, 32, !insn.addr !35
  %2 = mul nsw i64 %1, %0, !insn.addr !35
  %3 = and i64 %2, 4294967295, !insn.addr !35
  ret i64 %3, !insn.addr !36
}

define i64 @call_stdcall() local_unnamed_addr {
dec_label_pc_11dd:
  ret i64 50, !insn.addr !37
}

define i64 @fastcall_func(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_11e7:
  %0 = add i64 %arg2, %arg1, !insn.addr !38
  %1 = add i64 %0, %arg3, !insn.addr !39
  %2 = and i64 %1, 4294967295, !insn.addr !39
  ret i64 %2, !insn.addr !40
}

define i64 @call_fastcall() local_unnamed_addr {
dec_label_pc_11f1:
  ret i64 6, !insn.addr !41
}

define i64 @call_thiscall() local_unnamed_addr {
dec_label_pc_11fb:
  ret i64 15, !insn.addr !42
}

define i64 @arm_aapcs_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1205:
  %0 = add i64 %arg2, %arg1, !insn.addr !43
  %1 = add i64 %0, %arg3, !insn.addr !44
  %2 = add i64 %1, %arg4, !insn.addr !45
  %3 = add i64 %2, %arg5, !insn.addr !46
  %4 = and i64 %3, 4294967295, !insn.addr !46
  ret i64 %4, !insn.addr !47
}

define i64 @call_arm_aapcs() local_unnamed_addr {
dec_label_pc_1214:
  ret i64 15, !insn.addr !48
}

define i64 @mips_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_121e:
  %0 = add i64 %arg2, %arg1, !insn.addr !49
  %1 = add i64 %0, %arg3, !insn.addr !50
  %2 = add i64 %1, %arg4, !insn.addr !51
  %3 = and i64 %2, 4294967295, !insn.addr !51
  ret i64 %3, !insn.addr !52
}

define i64 @call_mips() local_unnamed_addr {
dec_label_pc_122a:
  ret i64 100, !insn.addr !53
}

define i64 @amd64_sysv_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1234:
  %0 = add i64 %arg2, %arg1, !insn.addr !54
  %1 = add i64 %0, %arg3, !insn.addr !55
  %2 = add i64 %1, %arg4, !insn.addr !56
  %3 = add i64 %2, %arg5, !insn.addr !57
  %4 = add i64 %3, %arg6, !insn.addr !58
  %5 = and i64 %4, 4294967295, !insn.addr !58
  ret i64 %5, !insn.addr !59
}

define i64 @call_amd64_sysv() local_unnamed_addr {
dec_label_pc_1246:
  ret i64 21, !insn.addr !60
}

define i64 @ms_x64_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1250:
  %0 = add i64 %arg2, %arg1, !insn.addr !61
  %1 = add i64 %0, %arg3, !insn.addr !62
  %2 = add i64 %1, %arg4, !insn.addr !63
  %3 = add i64 %2, %arg5, !insn.addr !64
  %4 = and i64 %3, 4294967295, !insn.addr !64
  ret i64 %4, !insn.addr !65
}

define i64 @call_ms_x64() local_unnamed_addr {
dec_label_pc_125f:
  ret i64 15, !insn.addr !66
}

define i64 @vectorcall_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1269:
  %0 = add i64 %arg2, %arg1, !insn.addr !67
  %1 = add i64 %0, %arg3, !insn.addr !68
  %2 = add i64 %1, %arg4, !insn.addr !69
  %3 = and i64 %2, 4294967295, !insn.addr !69
  ret i64 %3, !insn.addr !70
}

define i64 @call_vectorcall() local_unnamed_addr {
dec_label_pc_1275:
  ret i64 10, !insn.addr !71
}

define i64 @mixed_conventions_test() local_unnamed_addr {
dec_label_pc_127f:
  ret i64 33, !insn.addr !72
}

define i32 @varargs_func(i32 %count, ...) local_unnamed_addr {
dec_label_pc_1289:
  %rsi.1.reg2mem = alloca i32, !insn.addr !73
  %rsi.0.reg2mem = alloca i32, !insn.addr !73
  %rcx.0.reg2mem = alloca i64, !insn.addr !73
  %stack_var_-80.1.reg2mem = alloca i32*, !insn.addr !73
  %stack_var_-88.1.reg2mem = alloca i32, !insn.addr !73
  %rdx.0.reg2mem = alloca i64, !insn.addr !73
  %stack_var_-80.0.reg2mem = alloca i32*, !insn.addr !73
  %stack_var_-88.0.reg2mem = alloca i32, !insn.addr !73
  %stack_var_-56 = alloca i64, align 8
  %stack_var_8 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !74
  %1 = icmp slt i32 %count, 1
  store i32 0, i32* %rsi.1.reg2mem, !insn.addr !75
  br i1 %1, label %dec_label_pc_1319, label %dec_label_pc_12d9, !insn.addr !75

dec_label_pc_12d9:                                ; preds = %dec_label_pc_1289
  %2 = bitcast i64* %stack_var_8 to i32*
  %3 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !76
  store i32 8, i32* %stack_var_-88.1.reg2mem, !insn.addr !77
  store i32* %2, i32** %stack_var_-80.1.reg2mem, !insn.addr !77
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !77
  store i32 0, i32* %rsi.0.reg2mem, !insn.addr !77
  br label %dec_label_pc_12ff, !insn.addr !77

dec_label_pc_12e8:                                ; preds = %dec_label_pc_12ff
  %4 = ptrtoint i32* %stack_var_-80.1.reload to i64, !insn.addr !78
  %5 = add i64 %4, 8, !insn.addr !79
  %6 = inttoptr i64 %5 to i32*, !insn.addr !80
  store i32 %stack_var_-88.1.reload, i32* %stack_var_-88.0.reg2mem, !insn.addr !80
  store i32* %6, i32** %stack_var_-80.0.reg2mem, !insn.addr !80
  store i64 %4, i64* %rdx.0.reg2mem, !insn.addr !80
  br label %dec_label_pc_12f6, !insn.addr !80

dec_label_pc_12f6:                                ; preds = %dec_label_pc_12e8, %dec_label_pc_1307
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %stack_var_-80.0.reload = load i32*, i32** %stack_var_-80.0.reg2mem
  %stack_var_-88.0.reload = load i32, i32* %stack_var_-88.0.reg2mem
  %7 = inttoptr i64 %rdx.0.reload to i32*, !insn.addr !81
  %8 = load i32, i32* %7, align 4, !insn.addr !81
  %9 = add i32 %8, %rsi.0.reload, !insn.addr !81
  %10 = add nuw nsw i64 %rcx.0.reload, 1, !insn.addr !82
  %11 = and i64 %10, 4294967295, !insn.addr !82
  %12 = trunc i64 %10 to i32, !insn.addr !83
  %13 = icmp eq i32 %12, %count, !insn.addr !83
  store i32 %stack_var_-88.0.reload, i32* %stack_var_-88.1.reg2mem, !insn.addr !84
  store i32* %stack_var_-80.0.reload, i32** %stack_var_-80.1.reg2mem, !insn.addr !84
  store i64 %11, i64* %rcx.0.reg2mem, !insn.addr !84
  store i32 %9, i32* %rsi.0.reg2mem, !insn.addr !84
  store i32 %9, i32* %rsi.1.reg2mem, !insn.addr !84
  br i1 %13, label %dec_label_pc_1319, label %dec_label_pc_12ff, !insn.addr !84

dec_label_pc_12ff:                                ; preds = %dec_label_pc_12f6, %dec_label_pc_12d9
  %rsi.0.reload = load i32, i32* %rsi.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %stack_var_-80.1.reload = load i32*, i32** %stack_var_-80.1.reg2mem
  %stack_var_-88.1.reload = load i32, i32* %stack_var_-88.1.reg2mem
  %14 = icmp ult i32 %stack_var_-88.1.reload, 48
  br i1 %14, label %dec_label_pc_1307, label %dec_label_pc_12e8, !insn.addr !85

dec_label_pc_1307:                                ; preds = %dec_label_pc_12ff
  %15 = zext i32 %stack_var_-88.1.reload to i64, !insn.addr !86
  %16 = add i64 %15, %3, !insn.addr !87
  %17 = add i32 %stack_var_-88.1.reload, 8, !insn.addr !88
  store i32 %17, i32* %stack_var_-88.0.reg2mem, !insn.addr !89
  store i32* %stack_var_-80.1.reload, i32** %stack_var_-80.0.reg2mem, !insn.addr !89
  store i64 %16, i64* %rdx.0.reg2mem, !insn.addr !89
  br label %dec_label_pc_12f6, !insn.addr !89

dec_label_pc_1319:                                ; preds = %dec_label_pc_12f6, %dec_label_pc_1289
  %18 = call i64 @__readfsqword(i64 40), !insn.addr !90
  %19 = icmp eq i64 %0, %18, !insn.addr !90
  %20 = icmp eq i1 %19, false, !insn.addr !91
  br i1 %20, label %dec_label_pc_1330, label %dec_label_pc_1329, !insn.addr !91

dec_label_pc_1329:                                ; preds = %dec_label_pc_1319
  %rsi.1.reload = load i32, i32* %rsi.1.reg2mem
  ret i32 %rsi.1.reload, !insn.addr !92

dec_label_pc_1330:                                ; preds = %dec_label_pc_1319
  call void @__stack_chk_fail(), !insn.addr !93
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !93

; uselistorder directives
  uselistorder i32 %stack_var_-88.1.reload, { 0, 2, 1, 3 }
  uselistorder i32* %stack_var_-80.1.reload, { 1, 0 }
  uselistorder i32* %stack_var_-88.0.reg2mem, { 2, 0, 1 }
  uselistorder i32** %stack_var_-80.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_12f6, { 1, 0 }
}

define i64 @func_no_args() local_unnamed_addr {
dec_label_pc_1335:
  ret i64 42, !insn.addr !94
}

define i64 @func_many_args(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6, i32 %arg7, i32 %arg8) local_unnamed_addr {
dec_label_pc_133f:
  %0 = add i64 %arg2, %arg1, !insn.addr !95
  %1 = add i64 %0, %arg3, !insn.addr !96
  %2 = add i64 %1, %arg4, !insn.addr !97
  %3 = add i64 %2, %arg5, !insn.addr !98
  %4 = add i64 %3, %arg6, !insn.addr !99
  %5 = trunc i64 %4 to i32, !insn.addr !99
  %6 = add i32 %5, %arg7, !insn.addr !100
  %7 = add i32 %6, %arg8, !insn.addr !101
  %8 = zext i32 %7 to i64, !insn.addr !101
  ret i64 %8, !insn.addr !102
}

define i32 @func_mixed_args(i32 %x, i8* %s, double %d, i64 %ll) local_unnamed_addr {
dec_label_pc_1359:
  %0 = alloca i128
  %rax.0.reg2mem = alloca i32, !insn.addr !103
  %1 = load i128, i128* %0
  %2 = fptrunc double %d to float
  %3 = bitcast float %2 to i32
  %4 = sext i32 %3 to i128
  %5 = call i64 @__asm_movq(i128 %4), !insn.addr !104
  %6 = icmp eq i8* %s, null, !insn.addr !105
  store i32 0, i32* %rax.0.reg2mem, !insn.addr !106
  br i1 %6, label %dec_label_pc_137d, label %dec_label_pc_1375, !insn.addr !106

dec_label_pc_1375:                                ; preds = %dec_label_pc_1359
  %7 = call i32 @strlen(i8* nonnull %s), !insn.addr !107
  store i32 %7, i32* %rax.0.reg2mem, !insn.addr !107
  br label %dec_label_pc_137d, !insn.addr !107

dec_label_pc_137d:                                ; preds = %dec_label_pc_1375, %dec_label_pc_1359
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %8 = add i32 %rax.0.reload, %x, !insn.addr !108
  %9 = call i128 @__asm_pxor(i128 %4, i128 %4), !insn.addr !109
  %10 = call i128 @__asm_cvtsi2sd(i32 %8), !insn.addr !110
  %11 = call i128 @__asm_movq.1(i64 %5), !insn.addr !111
  %12 = call i128 @__asm_addsd(i128 %10, i128 %11), !insn.addr !112
  %13 = call i128 @__asm_pxor(i128 %1, i128 %1), !insn.addr !113
  %14 = call i128 @__asm_cvtsi2sd.2(i64 %ll), !insn.addr !114
  %15 = call i128 @__asm_addsd(i128 %12, i128 %14), !insn.addr !115
  %16 = call i32 @__asm_cvttsd2si(i128 %15), !insn.addr !116
  ret i32 %16, !insn.addr !117

; uselistorder directives
  uselistorder i128 %4, { 1, 0, 2 }
}

define i64 @func_struct_byval() local_unnamed_addr {
dec_label_pc_13a6:
  %rdx.0.reg2mem = alloca i64, !insn.addr !118
  %rax.0.reg2mem = alloca i64, !insn.addr !118
  %stack_var_136 = alloca i64, align 8
  %stack_var_8 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_8 to i64, !insn.addr !119
  %1 = ptrtoint i64* %stack_var_136 to i64, !insn.addr !120
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !121
  store i64 %0, i64* %rdx.0.reg2mem, !insn.addr !121
  br label %dec_label_pc_13bc, !insn.addr !121

dec_label_pc_13bc:                                ; preds = %dec_label_pc_13bc, %dec_label_pc_13a6
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %2 = inttoptr i64 %rdx.0.reload to i64*, !insn.addr !122
  %3 = load i64, i64* %2, align 8, !insn.addr !122
  %4 = add i64 %3, %rax.0.reload, !insn.addr !122
  %5 = add i64 %rdx.0.reload, 8, !insn.addr !123
  %6 = icmp eq i64 %5, %1, !insn.addr !124
  %7 = icmp eq i1 %6, false, !insn.addr !125
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !125
  store i64 %5, i64* %rdx.0.reg2mem, !insn.addr !125
  br i1 %7, label %dec_label_pc_13bc, label %dec_label_pc_13c8, !insn.addr !125

dec_label_pc_13c8:                                ; preds = %dec_label_pc_13bc
  ret i64 %4, !insn.addr !126

; uselistorder directives
  uselistorder i64 %4, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
}

define i64 @func_struct_byptr(i64 %arg1) local_unnamed_addr {
dec_label_pc_13c9:
  %0 = icmp eq i64 %arg1, 0, !insn.addr !127
  br i1 %0, label %dec_label_pc_13d9, label %dec_label_pc_13d2, !insn.addr !128

dec_label_pc_13d2:                                ; preds = %dec_label_pc_13c9
  %1 = trunc i64 %arg1 to i32
  %2 = add i64 %arg1, 4, !insn.addr !129
  %3 = inttoptr i64 %2 to i32*, !insn.addr !129
  %4 = load i32, i32* %3, align 4, !insn.addr !129
  %5 = mul i32 %4, %1, !insn.addr !129
  %6 = zext i32 %5 to i64, !insn.addr !129
  ret i64 %6, !insn.addr !130

dec_label_pc_13d9:                                ; preds = %dec_label_pc_13c9
  ret i64 4294967295, !insn.addr !131

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define void @test_calling_conventions() local_unnamed_addr {
dec_label_pc_13df:
  %0 = alloca i128
  %rax.1.reg2mem = alloca i64, !insn.addr !132
  %rax.0.reg2mem = alloca i64, !insn.addr !132
  %stack_var_-24 = alloca i64, align 8
  %1 = load i128, i128* %0
  %2 = load i128, i128* %0
  %3 = load i128, i128* %0
  %4 = load i128, i128* %0
  %5 = load i128, i128* %0
  %6 = load i128, i128* %0
  %7 = load i128, i128* %0
  %stack_var_-152 = alloca i128, align 8
  %stack_var_-280 = alloca i128, align 8
  %8 = ptrtoint i128* %stack_var_-280 to i64, !insn.addr !133
  %9 = call i64 @__readfsqword(i64 40), !insn.addr !134
  %10 = call i32 @puts(i8* bitcast (i8** @global_var_2008 to i8*)), !insn.addr !135
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2151, i64 0, i64 0), i64 15), !insn.addr !136
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2161, i64 0, i64 0), i64 50), !insn.addr !137
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2171, i64 0, i64 0), i64 6), !insn.addr !138
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2181, i64 0, i64 0), i64 15), !insn.addr !139
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2191, i64 0, i64 0), i64 15), !insn.addr !140
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_21a1, i64 0, i64 0), i64 100), !insn.addr !141
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_21b1, i64 0, i64 0), i64 21), !insn.addr !142
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_21c1, i64 0, i64 0), i64 15), !insn.addr !143
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_21d1, i64 0, i64 0), i64 10), !insn.addr !144
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_21e1, i64 0, i64 0), i64 33), !insn.addr !145
  %21 = call i32 (i32, ...) @varargs_func(i32 5), !insn.addr !146
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2030 to i8*)), !insn.addr !147
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2058 to i8*)), !insn.addr !148
  %24 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2080 to i8*)), !insn.addr !149
  %25 = call i128 @__asm_movsd(i64 4614253070214989087), !insn.addr !150
  %26 = trunc i128 %25 to i64, !insn.addr !151
  %27 = bitcast i64 %26 to double, !insn.addr !151
  %28 = call i32 @func_mixed_args(i32 10, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_21f1, i64 0, i64 0), double %27, i64 100), !insn.addr !151
  %29 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20a8 to i8*)), !insn.addr !152
  %30 = add i64 %8, -8, !insn.addr !153
  store i64 1, i64* %rax.0.reg2mem, !insn.addr !154
  br label %dec_label_pc_15ca, !insn.addr !154

dec_label_pc_15ca:                                ; preds = %dec_label_pc_15ca, %dec_label_pc_13df
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %31 = mul i64 %rax.0.reload, 8, !insn.addr !153
  %32 = add i64 %30, %31, !insn.addr !153
  %33 = inttoptr i64 %32 to i64*, !insn.addr !153
  store i64 %rax.0.reload, i64* %33, align 8, !insn.addr !153
  %34 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !155
  %exitcond = icmp eq i64 %34, 17
  store i64 %34, i64* %rax.0.reg2mem, !insn.addr !156
  br i1 %exitcond, label %dec_label_pc_15d9, label %dec_label_pc_15ca, !insn.addr !156

dec_label_pc_15d9:                                ; preds = %dec_label_pc_15ca
  %35 = load i128, i128* %stack_var_-280, align 8, !insn.addr !157
  %36 = mul i128 %35, 18446744073709551615
  %37 = ashr exact i128 %36, 64, !insn.addr !157
  %38 = call i128 @__asm_movdqa(i128 %37), !insn.addr !157
  %39 = call i64 @__asm_movaps(i128 %38), !insn.addr !158
  %40 = sext i64 %39 to i128, !insn.addr !158
  store i128 %40, i128* %stack_var_-152, align 8, !insn.addr !158
  %41 = call i128 @__asm_movdqa(i128 %7), !insn.addr !159
  %42 = call i64 @__asm_movaps(i128 %41), !insn.addr !160
  %43 = call i128 @__asm_movdqa(i128 %6), !insn.addr !161
  %44 = call i64 @__asm_movaps(i128 %43), !insn.addr !162
  %45 = call i128 @__asm_movdqa(i128 %5), !insn.addr !163
  %46 = call i64 @__asm_movaps(i128 %45), !insn.addr !164
  %47 = call i128 @__asm_movdqa(i128 %4), !insn.addr !165
  %48 = call i64 @__asm_movaps(i128 %47), !insn.addr !166
  %49 = call i128 @__asm_movdqa(i128 %3), !insn.addr !167
  %50 = call i64 @__asm_movaps(i128 %49), !insn.addr !168
  %51 = call i128 @__asm_movdqa(i128 %2), !insn.addr !169
  %52 = call i64 @__asm_movaps(i128 %51), !insn.addr !170
  %53 = call i128 @__asm_movdqa(i128 %1), !insn.addr !171
  %54 = call i64 @__asm_movaps(i128 %53), !insn.addr !172
  %55 = ptrtoint i128* %stack_var_-152 to i64, !insn.addr !173
  %56 = ptrtoint i64* %stack_var_-24 to i64, !insn.addr !174
  store i64 %55, i64* %rax.1.reg2mem, !insn.addr !175
  br label %dec_label_pc_165d, !insn.addr !175

dec_label_pc_165d:                                ; preds = %dec_label_pc_165d, %dec_label_pc_15d9
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %57 = add i64 %rax.1.reload, 8, !insn.addr !176
  %58 = icmp eq i64 %57, %56, !insn.addr !177
  %59 = icmp eq i1 %58, false, !insn.addr !178
  store i64 %57, i64* %rax.1.reg2mem, !insn.addr !178
  br i1 %59, label %dec_label_pc_165d, label %dec_label_pc_1669, !insn.addr !178

dec_label_pc_1669:                                ; preds = %dec_label_pc_165d
  %60 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20d0 to i8*)), !insn.addr !179
  %61 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2100 to i8*)), !insn.addr !180
  %62 = call i64 @__readfsqword(i64 40), !insn.addr !181
  %63 = icmp eq i64 %9, %62, !insn.addr !181
  %64 = icmp eq i1 %63, false, !insn.addr !182
  br i1 %64, label %dec_label_pc_16b5, label %dec_label_pc_16ad, !insn.addr !182

dec_label_pc_16ad:                                ; preds = %dec_label_pc_1669
  ret void, !insn.addr !183

dec_label_pc_16b5:                                ; preds = %dec_label_pc_1669
  call void @__stack_chk_fail(), !insn.addr !184
  ret void, !insn.addr !184

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0, 2 }
  uselistorder i128* %stack_var_-280, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.1.reg2mem, { 1, 0, 2 }
  uselistorder i128* %0, { 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i64 33, { 1, 0 }
  uselistorder i64 100, { 1, 2, 0 }
  uselistorder i64 6, { 1, 0 }
  uselistorder i64 50, { 1, 0 }
}

define i64 @param_by_value_int(i64 %arg1) local_unnamed_addr {
dec_label_pc_16ba:
  %0 = mul i64 %arg1, 2, !insn.addr !185
  %1 = and i64 %0, 4294967294, !insn.addr !185
  ret i64 %1, !insn.addr !186
}

define i64 @call_by_value_int() local_unnamed_addr {
dec_label_pc_16c2:
  ret i64 15, !insn.addr !187
}

define i64 @param_by_value_ptr(i64 %arg1) local_unnamed_addr {
dec_label_pc_16cc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = mul i32 %2, 2, !insn.addr !188
  %4 = inttoptr i64 %arg1 to i32*, !insn.addr !188
  store i32 %3, i32* %4, align 4, !insn.addr !188
  ret i64 1, !insn.addr !189
}

define i32 @call_by_value_ptr() local_unnamed_addr {
dec_label_pc_16d8:
  ret i32 11, !insn.addr !190
}

define i64 @param_array_decay() local_unnamed_addr {
dec_label_pc_16e2:
  ret i64 8, !insn.addr !191
}

define i64 @call_array_decay() local_unnamed_addr {
dec_label_pc_16ec:
  ret i64 8, !insn.addr !192
}

define i64 @param_string(i64 %arg1) local_unnamed_addr {
dec_label_pc_16f6:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %arg1, 1, !insn.addr !193
  %3 = inttoptr i64 %2 to i8*, !insn.addr !193
  %4 = load i8, i8* %3, align 1, !insn.addr !193
  %sext = mul i64 %1, 72057594037927936
  %5 = ashr exact i64 %sext, 56, !insn.addr !194
  %6 = sext i8 %4 to i64, !insn.addr !194
  %7 = add nsw i64 %5, %6, !insn.addr !194
  %8 = and i64 %7, 4294967295, !insn.addr !194
  ret i64 %8, !insn.addr !195
}

define i64 @call_string_param() local_unnamed_addr {
dec_label_pc_1704:
  ret i64 173, !insn.addr !196
}

define i32 @param_ptr_array(i8** %arr, i32 %n) local_unnamed_addr {
dec_label_pc_170e:
  %rdx.1.reg2mem = alloca i32, !insn.addr !197
  %rax.0.reg2mem = alloca i64, !insn.addr !197
  %rdx.0.reg2mem = alloca i64, !insn.addr !197
  %0 = icmp slt i32 %n, 1
  store i32 0, i32* %rdx.1.reg2mem, !insn.addr !198
  br i1 %0, label %dec_label_pc_1737, label %dec_label_pc_1716, !insn.addr !198

dec_label_pc_1716:                                ; preds = %dec_label_pc_170e
  %1 = ptrtoint i8** %arr to i64
  %2 = sext i32 %n to i64
  %3 = mul i64 %2, 8, !insn.addr !199
  %4 = add nsw i64 %3, 34359738360, !insn.addr !199
  %5 = and i64 %4, 34359738360, !insn.addr !200
  %6 = add i64 %1, 8, !insn.addr !200
  %7 = add i64 %6, %5, !insn.addr !200
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !201
  store i64 %1, i64* %rax.0.reg2mem, !insn.addr !201
  br label %dec_label_pc_1726, !insn.addr !201

dec_label_pc_1726:                                ; preds = %dec_label_pc_1726, %dec_label_pc_1716
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %8 = inttoptr i64 %rax.0.reload to i64*, !insn.addr !202
  %9 = load i64, i64* %8, align 8, !insn.addr !202
  %10 = inttoptr i64 %9 to i8*, !insn.addr !203
  %11 = load i8, i8* %10, align 1, !insn.addr !203
  %12 = sext i8 %11 to i64, !insn.addr !204
  %13 = add nsw i64 %rdx.0.reload, %12, !insn.addr !204
  %14 = and i64 %13, 4294967295, !insn.addr !204
  %15 = add i64 %rax.0.reload, 8, !insn.addr !205
  %16 = icmp eq i64 %15, %7, !insn.addr !206
  %17 = icmp eq i1 %16, false, !insn.addr !207
  store i64 %14, i64* %rdx.0.reg2mem, !insn.addr !207
  store i64 %15, i64* %rax.0.reg2mem, !insn.addr !207
  br i1 %17, label %dec_label_pc_1726, label %dec_label_pc_1737.loopexit, !insn.addr !207

dec_label_pc_1737.loopexit:                       ; preds = %dec_label_pc_1726
  %phitmp = trunc i64 %13 to i32
  store i32 %phitmp, i32* %rdx.1.reg2mem
  br label %dec_label_pc_1737

dec_label_pc_1737:                                ; preds = %dec_label_pc_1737.loopexit, %dec_label_pc_170e
  %rdx.1.reload = load i32, i32* %rdx.1.reg2mem
  ret i32 %rdx.1.reload, !insn.addr !208

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 34359738360, { 1, 0 }
  uselistorder i32 %n, { 1, 0 }
}

define i32 @call_ptr_array() local_unnamed_addr {
dec_label_pc_1741:
  %stack_var_-40 = alloca i8*, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !209
  store i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_21f6, i64 0, i64 0), i8** %stack_var_-40, align 8, !insn.addr !210
  %1 = call i32 @param_ptr_array(i8** nonnull %stack_var_-40, i32 3), !insn.addr !211
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !212
  %3 = icmp eq i64 %0, %2, !insn.addr !212
  %4 = icmp eq i1 %3, false, !insn.addr !213
  br i1 %4, label %dec_label_pc_179e, label %dec_label_pc_1799, !insn.addr !213

dec_label_pc_1799:                                ; preds = %dec_label_pc_1741
  ret i32 %1, !insn.addr !214

dec_label_pc_179e:                                ; preds = %dec_label_pc_1741
  call void @__stack_chk_fail(), !insn.addr !215
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !215

; uselistorder directives
  uselistorder i8** %stack_var_-40, { 1, 0 }
}

define i32 @param_varargs(i32 %count, ...) local_unnamed_addr {
dec_label_pc_17a3:
  %rsi.1.reg2mem = alloca i32, !insn.addr !216
  %rsi.0.reg2mem = alloca i32, !insn.addr !216
  %rcx.0.reg2mem = alloca i64, !insn.addr !216
  %stack_var_-80.1.reg2mem = alloca i32*, !insn.addr !216
  %stack_var_-88.1.reg2mem = alloca i32, !insn.addr !216
  %rdx.0.reg2mem = alloca i64, !insn.addr !216
  %stack_var_-80.0.reg2mem = alloca i32*, !insn.addr !216
  %stack_var_-88.0.reg2mem = alloca i32, !insn.addr !216
  %stack_var_-56 = alloca i64, align 8
  %stack_var_8 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !217
  %1 = icmp slt i32 %count, 1
  store i32 0, i32* %rsi.1.reg2mem, !insn.addr !218
  br i1 %1, label %dec_label_pc_1833, label %dec_label_pc_17f3, !insn.addr !218

dec_label_pc_17f3:                                ; preds = %dec_label_pc_17a3
  %2 = bitcast i64* %stack_var_8 to i32*
  %3 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !219
  store i32 8, i32* %stack_var_-88.1.reg2mem, !insn.addr !220
  store i32* %2, i32** %stack_var_-80.1.reg2mem, !insn.addr !220
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !220
  store i32 0, i32* %rsi.0.reg2mem, !insn.addr !220
  br label %dec_label_pc_1819, !insn.addr !220

dec_label_pc_1802:                                ; preds = %dec_label_pc_1819
  %4 = ptrtoint i32* %stack_var_-80.1.reload to i64, !insn.addr !221
  %5 = add i64 %4, 8, !insn.addr !222
  %6 = inttoptr i64 %5 to i32*, !insn.addr !223
  store i32 %stack_var_-88.1.reload, i32* %stack_var_-88.0.reg2mem, !insn.addr !223
  store i32* %6, i32** %stack_var_-80.0.reg2mem, !insn.addr !223
  store i64 %4, i64* %rdx.0.reg2mem, !insn.addr !223
  br label %dec_label_pc_1810, !insn.addr !223

dec_label_pc_1810:                                ; preds = %dec_label_pc_1802, %dec_label_pc_1821
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %stack_var_-80.0.reload = load i32*, i32** %stack_var_-80.0.reg2mem
  %stack_var_-88.0.reload = load i32, i32* %stack_var_-88.0.reg2mem
  %7 = inttoptr i64 %rdx.0.reload to i32*, !insn.addr !224
  %8 = load i32, i32* %7, align 4, !insn.addr !224
  %9 = add i32 %8, %rsi.0.reload, !insn.addr !224
  %10 = add nuw nsw i64 %rcx.0.reload, 1, !insn.addr !225
  %11 = and i64 %10, 4294967295, !insn.addr !225
  %12 = trunc i64 %10 to i32, !insn.addr !226
  %13 = icmp eq i32 %12, %count, !insn.addr !226
  store i32 %stack_var_-88.0.reload, i32* %stack_var_-88.1.reg2mem, !insn.addr !227
  store i32* %stack_var_-80.0.reload, i32** %stack_var_-80.1.reg2mem, !insn.addr !227
  store i64 %11, i64* %rcx.0.reg2mem, !insn.addr !227
  store i32 %9, i32* %rsi.0.reg2mem, !insn.addr !227
  store i32 %9, i32* %rsi.1.reg2mem, !insn.addr !227
  br i1 %13, label %dec_label_pc_1833, label %dec_label_pc_1819, !insn.addr !227

dec_label_pc_1819:                                ; preds = %dec_label_pc_1810, %dec_label_pc_17f3
  %rsi.0.reload = load i32, i32* %rsi.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %stack_var_-80.1.reload = load i32*, i32** %stack_var_-80.1.reg2mem
  %stack_var_-88.1.reload = load i32, i32* %stack_var_-88.1.reg2mem
  %14 = icmp ult i32 %stack_var_-88.1.reload, 48
  br i1 %14, label %dec_label_pc_1821, label %dec_label_pc_1802, !insn.addr !228

dec_label_pc_1821:                                ; preds = %dec_label_pc_1819
  %15 = zext i32 %stack_var_-88.1.reload to i64, !insn.addr !229
  %16 = add i64 %15, %3, !insn.addr !230
  %17 = add i32 %stack_var_-88.1.reload, 8, !insn.addr !231
  store i32 %17, i32* %stack_var_-88.0.reg2mem, !insn.addr !232
  store i32* %stack_var_-80.1.reload, i32** %stack_var_-80.0.reg2mem, !insn.addr !232
  store i64 %16, i64* %rdx.0.reg2mem, !insn.addr !232
  br label %dec_label_pc_1810, !insn.addr !232

dec_label_pc_1833:                                ; preds = %dec_label_pc_1810, %dec_label_pc_17a3
  %18 = call i64 @__readfsqword(i64 40), !insn.addr !233
  %19 = icmp eq i64 %0, %18, !insn.addr !233
  %20 = icmp eq i1 %19, false, !insn.addr !234
  br i1 %20, label %dec_label_pc_184a, label %dec_label_pc_1843, !insn.addr !234

dec_label_pc_1843:                                ; preds = %dec_label_pc_1833
  %rsi.1.reload = load i32, i32* %rsi.1.reg2mem
  ret i32 %rsi.1.reload, !insn.addr !235

dec_label_pc_184a:                                ; preds = %dec_label_pc_1833
  call void @__stack_chk_fail(), !insn.addr !236
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !236

; uselistorder directives
  uselistorder i32 %stack_var_-88.1.reload, { 0, 2, 1, 3 }
  uselistorder i32* %stack_var_-80.1.reload, { 1, 0 }
  uselistorder i32* %stack_var_-88.0.reg2mem, { 2, 0, 1 }
  uselistorder i32** %stack_var_-80.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32 8, { 2, 0, 3, 1 }
  uselistorder label %dec_label_pc_1810, { 1, 0 }
}

define i32 @call_varargs_param() local_unnamed_addr {
dec_label_pc_184f:
  %0 = call i32 (i32, ...) @param_varargs(i32 4), !insn.addr !237
  ret i32 %0, !insn.addr !238
}

define i32 @param_func_ptr(i32 (i32)* %callback, i32 %x) local_unnamed_addr {
dec_label_pc_1880:
  %0 = ptrtoint i32 (i32)* %callback to i64
  %1 = trunc i64 %0 to i32, !insn.addr !239
  %2 = add i32 %1, 10, !insn.addr !239
  ret i32 %2, !insn.addr !240
}

define i32 @call_func_ptr_param() local_unnamed_addr {
dec_label_pc_1897:
  %0 = call i32 @param_func_ptr(i32 (i32)* inttoptr (i64 4521 to i32 (i32)*), i32 5), !insn.addr !241
  ret i32 %0, !insn.addr !242
}

define i32 @param_double_ptr(i32** %pp, i32 %new_val) local_unnamed_addr {
dec_label_pc_18b5:
  %0 = icmp eq i32** %pp, null, !insn.addr !243
  br i1 %0, label %dec_label_pc_18d5, label %dec_label_pc_18c6, !insn.addr !244

dec_label_pc_18c6:                                ; preds = %dec_label_pc_18b5
  %1 = bitcast i32** %pp to i64*, !insn.addr !245
  store i64 0, i64* %1, align 8, !insn.addr !245
  ret i32 1, !insn.addr !246

dec_label_pc_18d5:                                ; preds = %dec_label_pc_18b5
  ret i32 -1, !insn.addr !247
}

define i32 @call_double_ptr() local_unnamed_addr {
dec_label_pc_18e1:
  %stack_var_-24 = alloca i64, align 8
  %stack_var_-28 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !248
  store i32 10, i32* %stack_var_-28, align 4, !insn.addr !249
  %1 = ptrtoint i32* %stack_var_-28 to i64, !insn.addr !250
  store i64 %1, i64* %stack_var_-24, align 8, !insn.addr !250
  %2 = bitcast i64* %stack_var_-24 to i32**, !insn.addr !251
  %3 = call i32 @param_double_ptr(i32** nonnull %2, i32 20), !insn.addr !251
  %4 = load i64, i64* %stack_var_-24, align 8, !insn.addr !252
  %5 = load i32, i32* %stack_var_-28, align 4, !insn.addr !253
  %6 = call i64 @__readfsqword(i64 40), !insn.addr !254
  %7 = icmp eq i64 %0, %6, !insn.addr !254
  %8 = icmp eq i1 %7, false, !insn.addr !255
  br i1 %8, label %dec_label_pc_193f, label %dec_label_pc_193a, !insn.addr !255

dec_label_pc_193a:                                ; preds = %dec_label_pc_18e1
  %9 = icmp eq i64 %4, 0, !insn.addr !252
  %10 = zext i1 %9 to i32, !insn.addr !253
  %11 = add i32 %5, %10, !insn.addr !253
  ret i32 %11, !insn.addr !256

dec_label_pc_193f:                                ; preds = %dec_label_pc_18e1
  call void @__stack_chk_fail(), !insn.addr !257
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !257

; uselistorder directives
  uselistorder i64* %stack_var_-24, { 1, 0, 2 }
  uselistorder i32 10, { 2, 3, 0, 1 }
}

define i64 @param_complex_cast(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1944:
  %0 = trunc i64 %arg2 to i32, !insn.addr !258
  %1 = icmp eq i32 %0, 0, !insn.addr !258
  br i1 %1, label %dec_label_pc_1957, label %dec_label_pc_194c, !insn.addr !259

dec_label_pc_194c:                                ; preds = %dec_label_pc_1944
  %2 = icmp eq i32 %0, 1, !insn.addr !260
  %3 = icmp eq i1 %2, false, !insn.addr !261
  br i1 %3, label %dec_label_pc_195a, label %dec_label_pc_1951, !insn.addr !261

dec_label_pc_1951:                                ; preds = %dec_label_pc_194c
  %4 = trunc i64 %arg1 to i32
  %5 = add i64 %arg1, 4, !insn.addr !262
  %6 = inttoptr i64 %5 to i32*, !insn.addr !262
  %7 = load i32, i32* %6, align 4, !insn.addr !262
  %8 = add i32 %7, %4, !insn.addr !263
  %9 = zext i32 %8 to i64, !insn.addr !263
  ret i64 %9, !insn.addr !264

dec_label_pc_1957:                                ; preds = %dec_label_pc_1944
  %10 = and i64 %arg1, 4294967295, !insn.addr !265
  ret i64 %10, !insn.addr !266

dec_label_pc_195a:                                ; preds = %dec_label_pc_194c
  ret i64 4294967295, !insn.addr !267

; uselistorder directives
  uselistorder i64 %arg1, { 0, 2, 1 }
}

define i32 @call_complex_cast() local_unnamed_addr {
dec_label_pc_1960:
  ret i32 305419896, !insn.addr !268
}

define i64 @param_struct_byval(i32 %arg1) local_unnamed_addr {
dec_label_pc_196a:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, %arg1, !insn.addr !269
  %3 = zext i32 %2 to i64, !insn.addr !269
  ret i64 %3, !insn.addr !270
}

define i32 @call_struct_byval() local_unnamed_addr {
dec_label_pc_1977:
  %0 = alloca i32
  %rax.0.reg2mem = alloca i64, !insn.addr !271
  %1 = load i32, i32* %0
  %stack_var_-88 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-88 to i64, !insn.addr !272
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !273
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !274
  br label %dec_label_pc_198f, !insn.addr !274

dec_label_pc_198f:                                ; preds = %dec_label_pc_198f, %dec_label_pc_1977
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %4 = trunc i64 %rax.0.reload to i32, !insn.addr !275
  %5 = mul i64 %rax.0.reload, 4, !insn.addr !275
  %6 = add i64 %5, %2, !insn.addr !275
  %7 = inttoptr i64 %6 to i32*, !insn.addr !275
  store i32 %4, i32* %7, align 4, !insn.addr !275
  %8 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !276
  %exitcond = icmp eq i64 %8, 16
  store i64 %8, i64* %rax.0.reg2mem, !insn.addr !277
  br i1 %exitcond, label %dec_label_pc_199c, label %dec_label_pc_198f, !insn.addr !277

dec_label_pc_199c:                                ; preds = %dec_label_pc_198f
  %9 = load i32, i32* %stack_var_-88, align 4, !insn.addr !278
  %10 = call i64 @__readfsqword(i64 40), !insn.addr !279
  %11 = icmp eq i64 %3, %10, !insn.addr !279
  %12 = icmp eq i1 %11, false, !insn.addr !280
  br i1 %12, label %dec_label_pc_19b8, label %dec_label_pc_19b3, !insn.addr !280

dec_label_pc_19b3:                                ; preds = %dec_label_pc_199c
  %13 = add i32 %9, %1, !insn.addr !281
  ret i32 %13, !insn.addr !282

dec_label_pc_19b8:                                ; preds = %dec_label_pc_199c
  call void @__stack_chk_fail(), !insn.addr !283
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !283

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 2, 0 }
  uselistorder i32* %stack_var_-88, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
}

define i64 @param_order_dep(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_19bd:
  %0 = add i64 %arg2, %arg1, !insn.addr !284
  %1 = and i64 %0, 4294967295, !insn.addr !284
  ret i64 %1, !insn.addr !285
}

define i64 @call_order_dep() local_unnamed_addr {
dec_label_pc_19c5:
  ret i64 4, !insn.addr !286
}

define void @test_parameter_passing() local_unnamed_addr {
dec_label_pc_19cf:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_2130 to i8*)), !insn.addr !287
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2202, i64 0, i64 0), i64 15), !insn.addr !288
  %2 = call i32 @call_by_value_ptr(), !insn.addr !289
  %3 = zext i32 %2 to i64, !insn.addr !290
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2213, i64 0, i64 0), i64 %3), !insn.addr !291
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2224, i64 0, i64 0), i64 8), !insn.addr !292
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2235, i64 0, i64 0), i64 173), !insn.addr !293
  %7 = call i32 @call_ptr_array(), !insn.addr !294
  %8 = zext i32 %7 to i64, !insn.addr !295
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2246, i64 0, i64 0), i64 %8), !insn.addr !296
  %10 = call i32 @call_varargs_param(), !insn.addr !297
  %11 = zext i32 %10 to i64, !insn.addr !298
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2257, i64 0, i64 0), i64 %11), !insn.addr !299
  %13 = call i32 @call_func_ptr_param(), !insn.addr !300
  %14 = zext i32 %13 to i64, !insn.addr !301
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2268, i64 0, i64 0), i64 %14), !insn.addr !302
  %16 = call i32 @call_double_ptr(), !insn.addr !303
  %17 = zext i32 %16 to i64, !insn.addr !304
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2279, i64 0, i64 0), i64 %17), !insn.addr !305
  %19 = call i32 @call_complex_cast(), !insn.addr !306
  %20 = zext i32 %19 to i64, !insn.addr !307
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_228a, i64 0, i64 0), i64 %20), !insn.addr !308
  %22 = call i32 @call_struct_byval(), !insn.addr !309
  %23 = zext i32 %22 to i64, !insn.addr !310
  %24 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_229b, i64 0, i64 0), i64 %23), !insn.addr !311
  %25 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_22ac, i64 0, i64 0), i64 4), !insn.addr !312
  ret void, !insn.addr !313

; uselistorder directives
  uselistorder i64 173, { 1, 0 }
  uselistorder i64 8, { 4, 6, 7, 8, 0, 2, 3, 9, 1, 5, 10 }
  uselistorder i64 15, { 5, 0, 6, 7, 8, 9, 1, 2, 3, 4 }
}

define i64 @ret_basic_type(i64 %arg1) local_unnamed_addr {
dec_label_pc_1b42:
  %0 = mul i64 %arg1, 2, !insn.addr !314
  %1 = and i64 %0, 4294967294, !insn.addr !314
  ret i64 %1, !insn.addr !315
}

define i64 @call_ret_basic() local_unnamed_addr {
dec_label_pc_1b4a:
  ret i64 42, !insn.addr !316
}

define i64 @ret_pointer(i64 %arg1) local_unnamed_addr {
dec_label_pc_1b54:
  %0 = add i64 %arg1, 4, !insn.addr !317
  ret i64 %0, !insn.addr !318
}

define i32 @call_ret_pointer() local_unnamed_addr {
dec_label_pc_1b5d:
  ret i32 20, !insn.addr !319
}

define i64 @ret_small_struct(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1b67:
  %0 = mul i64 %arg2, 4294967296, !insn.addr !320
  %1 = and i64 %arg1, 4294967295, !insn.addr !321
  %2 = or i64 %0, %1, !insn.addr !322
  ret i64 %2, !insn.addr !323
}

define i32 @call_ret_small_struct() local_unnamed_addr {
dec_label_pc_1b75:
  ret i32 7, !insn.addr !324
}

define i64 @ret_large_struct(i32 %seed) local_unnamed_addr {
dec_label_pc_1b7f:
  %0 = alloca i128
  %rsi.0.reg2mem = alloca i64, !insn.addr !325
  %rdx.0.reg2mem = alloca i64, !insn.addr !325
  %rdi = alloca i64, align 8
  %1 = load i128, i128* %0
  %2 = load i128, i128* %0
  %3 = load i128, i128* %0
  %stack_var_-24 = alloca i64, align 8
  %stack_var_-88 = alloca i128, align 8
  %4 = call i64 @__readfsqword(i64 40), !insn.addr !326
  %5 = ptrtoint i128* %stack_var_-88 to i64, !insn.addr !327
  %6 = ptrtoint i64* %stack_var_-24 to i64, !insn.addr !328
  store i64 %5, i64* %rdx.0.reg2mem, !insn.addr !328
  br label %dec_label_pc_1ba2, !insn.addr !328

dec_label_pc_1ba2:                                ; preds = %dec_label_pc_1ba2, %dec_label_pc_1b7f
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %7 = trunc i64 %rsi.0.reload to i32, !insn.addr !329
  %8 = inttoptr i64 %rdx.0.reload to i32*, !insn.addr !329
  store i32 %7, i32* %8, align 4, !insn.addr !329
  %9 = add i64 %rsi.0.reload, 1, !insn.addr !330
  %10 = and i64 %9, 4294967295, !insn.addr !330
  %11 = add i64 %rdx.0.reload, 4, !insn.addr !331
  %12 = icmp eq i64 %11, %6, !insn.addr !332
  %13 = icmp eq i1 %12, false, !insn.addr !333
  store i64 %11, i64* %rdx.0.reg2mem, !insn.addr !333
  store i64 %10, i64* %rsi.0.reg2mem, !insn.addr !333
  br i1 %13, label %dec_label_pc_1ba2, label %dec_label_pc_1bb0, !insn.addr !333

dec_label_pc_1bb0:                                ; preds = %dec_label_pc_1ba2
  %14 = sext i32 %seed to i64
  %15 = load i128, i128* %stack_var_-88, align 8, !insn.addr !334
  %16 = mul i128 %15, 18446744073709551615
  %17 = ashr exact i128 %16, 64, !insn.addr !334
  %18 = call i128 @__asm_movdqa(i128 %17), !insn.addr !334
  %19 = bitcast i64* %rdi to i128*
  %20 = load i128, i128* %19, align 8, !insn.addr !335
  call void @__asm_movups(i128 %20, i128 %18), !insn.addr !335
  %21 = call i128 @__asm_movdqa(i128 %3), !insn.addr !336
  %22 = add nsw i64 %14, 16, !insn.addr !337
  %23 = inttoptr i64 %22 to i128*, !insn.addr !337
  %24 = load i128, i128* %23, align 8, !insn.addr !337
  call void @__asm_movups(i128 %24, i128 %21), !insn.addr !337
  %25 = call i128 @__asm_movdqa(i128 %2), !insn.addr !338
  %26 = add nsw i64 %14, 32, !insn.addr !339
  %27 = inttoptr i64 %26 to i128*, !insn.addr !339
  %28 = load i128, i128* %27, align 8, !insn.addr !339
  call void @__asm_movups(i128 %28, i128 %25), !insn.addr !339
  %29 = call i128 @__asm_movdqa(i128 %1), !insn.addr !340
  %30 = add nsw i64 %14, 48, !insn.addr !341
  %31 = inttoptr i64 %30 to i128*, !insn.addr !341
  %32 = load i128, i128* %31, align 8, !insn.addr !341
  call void @__asm_movups(i128 %32, i128 %29), !insn.addr !341
  %33 = call i64 @__readfsqword(i64 40), !insn.addr !342
  %34 = icmp eq i64 %4, %33, !insn.addr !342
  %35 = icmp eq i1 %34, false, !insn.addr !343
  br i1 %35, label %dec_label_pc_1beb, label %dec_label_pc_1be6, !insn.addr !343

dec_label_pc_1be6:                                ; preds = %dec_label_pc_1bb0
  ret i64 %14, !insn.addr !344

dec_label_pc_1beb:                                ; preds = %dec_label_pc_1bb0
  call void @__stack_chk_fail(), !insn.addr !345
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !345

; uselistorder directives
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64 %rsi.0.reload, { 1, 0 }
  uselistorder i128* %stack_var_-88, { 1, 0 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rsi.0.reg2mem, { 1, 0 }
  uselistorder i128* %0, { 2, 1, 0 }
  uselistorder i64 ptrtoint (i32* @0 to i64), { 1, 0 }
  uselistorder i64 32, { 2, 0, 1 }
  uselistorder i64 16, { 1, 0 }
  uselistorder i64 4, { 6, 3, 2, 1, 0, 4, 5 }
  uselistorder i64 1, { 2, 6, 3, 5, 1, 7, 0, 4 }
}

define i32 @call_ret_large_struct() local_unnamed_addr {
dec_label_pc_1bf0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-88 = alloca i32, align 4
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !346
  %3 = ptrtoint i32* %stack_var_-88 to i64, !insn.addr !347
  %4 = trunc i64 %3 to i32, !insn.addr !348
  %5 = call i64 @ret_large_struct(i32 %4), !insn.addr !348
  %6 = load i32, i32* %stack_var_-88, align 4, !insn.addr !349
  %7 = call i64 @__readfsqword(i64 40), !insn.addr !350
  %8 = icmp eq i64 %2, %7, !insn.addr !350
  %9 = icmp eq i1 %8, false, !insn.addr !351
  br i1 %9, label %dec_label_pc_1c31, label %dec_label_pc_1c2c, !insn.addr !351

dec_label_pc_1c2c:                                ; preds = %dec_label_pc_1bf0
  %10 = add i32 %6, %1, !insn.addr !349
  ret i32 %10, !insn.addr !352

dec_label_pc_1c31:                                ; preds = %dec_label_pc_1bf0
  call void @__stack_chk_fail(), !insn.addr !353
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !353

; uselistorder directives
  uselistorder i32* %stack_var_-88, { 1, 0 }
  uselistorder void ()* @__stack_chk_fail, { 7, 0, 1, 2, 3, 4, 5, 6, 8 }
}

define i64 @ret_func_ptr(i64 %arg1) local_unnamed_addr {
dec_label_pc_1c36:
  %0 = trunc i64 %arg1 to i32, !insn.addr !354
  %1 = icmp eq i32 %0, 0, !insn.addr !354
  %2 = select i1 %1, i64 4529, i64 4537, !insn.addr !355
  ret i64 %2, !insn.addr !356
}

define i32 @call_ret_func_ptr() local_unnamed_addr {
dec_label_pc_1c4f:
  %0 = call i32 @func_b(i32 5), !insn.addr !357
  ret i32 %0, !insn.addr !358
}

define i64 @ret_opaque_handle(i64 %arg1) local_unnamed_addr {
dec_label_pc_1c5e:
  %0 = trunc i64 %arg1 to i32, !insn.addr !359
  %1 = icmp eq i32 %0, 0, !insn.addr !359
  %2 = icmp eq i1 %1, false, !insn.addr !360
  %3 = select i1 %2, i64 ptrtoint (i64* @global_var_4010 to i64), i64 ptrtoint (i32* @global_var_4018 to i64), !insn.addr !360
  ret i64 %3, !insn.addr !361

; uselistorder directives
  uselistorder i1 false, { 0, 4, 5, 6, 7, 1, 8, 9, 10, 11, 12, 13, 2, 14, 3 }
}

define i64 @call_ret_opaque() local_unnamed_addr {
dec_label_pc_1c77:
  %0 = load i32, i32* @global_var_4018, align 4, !insn.addr !362
  %1 = zext i32 %0 to i64, !insn.addr !362
  ret i64 %1, !insn.addr !363

; uselistorder directives
  uselistorder i32* @global_var_4018, { 1, 0 }
}

define i64 @ret_complex_expr(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1c82:
  %0 = mul i64 %arg3, 2, !insn.addr !364
  %1 = add i64 %arg3, 10, !insn.addr !365
  %2 = trunc i64 %arg1 to i32, !insn.addr !366
  %3 = trunc i64 %arg2 to i32, !insn.addr !366
  %4 = sub i32 %2, %3, !insn.addr !366
  %5 = xor i64 %arg2, %arg1
  %6 = trunc i64 %5 to i32, !insn.addr !366
  %7 = xor i32 %4, %2, !insn.addr !366
  %8 = and i32 %7, %6, !insn.addr !366
  %9 = icmp slt i32 %8, 0, !insn.addr !366
  %10 = icmp eq i32 %4, 0, !insn.addr !366
  %11 = icmp slt i32 %4, 0, !insn.addr !366
  %12 = icmp ne i1 %11, %9, !insn.addr !367
  %13 = or i1 %10, %12, !insn.addr !367
  %14 = select i1 %13, i64 %1, i64 %0, !insn.addr !367
  %15 = and i64 %14, 4294967295, !insn.addr !367
  ret i64 %15, !insn.addr !368

; uselistorder directives
  uselistorder i32 %4, { 1, 2, 0 }
  uselistorder i64 %arg3, { 1, 0 }
}

define i64 @call_ret_complex_expr() local_unnamed_addr {
dec_label_pc_1c92:
  ret i64 40, !insn.addr !369
}

define i64 @ret_multi_branch(i64 %arg1) local_unnamed_addr {
dec_label_pc_1c9c:
  %rax.0.reg2mem = alloca i64, !insn.addr !370
  %0 = trunc i64 %arg1 to i32, !insn.addr !371
  store i64 20, i64* %rax.0.reg2mem
  switch i32 %0, label %dec_label_pc_1cb4 [
    i32 1, label %dec_label_pc_1cbf
    i32 2, label %dec_label_pc_1cbf.fold.split
  ]

dec_label_pc_1cb4:                                ; preds = %dec_label_pc_1c9c
  %1 = icmp eq i32 %0, 0, !insn.addr !372
  %2 = select i1 %1, i64 10, i64 4294967295, !insn.addr !373
  store i64 %2, i64* %rax.0.reg2mem, !insn.addr !373
  br label %dec_label_pc_1cbf, !insn.addr !373

dec_label_pc_1cbf.fold.split:                     ; preds = %dec_label_pc_1c9c
  store i64 30, i64* %rax.0.reg2mem
  br label %dec_label_pc_1cbf

dec_label_pc_1cbf:                                ; preds = %dec_label_pc_1c9c, %dec_label_pc_1cbf.fold.split, %dec_label_pc_1cb4
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !374

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder i64 10, { 1, 2, 3, 0 }
  uselistorder i32 2, { 3, 0, 1, 2 }
  uselistorder label %dec_label_pc_1cbf, { 1, 2, 0 }
}

define i64 @call_ret_multi_branch() local_unnamed_addr {
dec_label_pc_1cc0:
  ret i64 60, !insn.addr !375
}

define i64 @ret_void(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1cca:
  %0 = mul i64 %arg1, 3, !insn.addr !376
  %1 = and i64 %0, 4294967295, !insn.addr !376
  %2 = trunc i64 %0 to i32, !insn.addr !377
  %3 = inttoptr i64 %arg2 to i32*, !insn.addr !377
  store i32 %2, i32* %3, align 4, !insn.addr !377
  ret i64 %1, !insn.addr !378

; uselistorder directives
  uselistorder i64 4294967295, { 3, 4, 5, 6, 7, 8, 0, 2, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 20 }
}

define i64 @call_ret_void() local_unnamed_addr {
dec_label_pc_1cd4:
  ret i64 21, !insn.addr !379

; uselistorder directives
  uselistorder i64 21, { 0, 2, 1 }
}

define void @test_return_values() local_unnamed_addr {
dec_label_pc_1cde:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_22bd to i8*)), !insn.addr !380
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_22db to i8*)), !insn.addr !381
  %2 = call i32 @call_ret_pointer(), !insn.addr !382
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_22f7 to i8*)), !insn.addr !383
  %4 = call i32 @call_ret_small_struct(), !insn.addr !384
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2313 to i8*)), !insn.addr !385
  %6 = call i32 @call_ret_large_struct(), !insn.addr !386
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_232e to i8*)), !insn.addr !387
  %8 = call i32 @call_ret_func_ptr(), !insn.addr !388
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_234b to i8*)), !insn.addr !389
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2367 to i8*)), !insn.addr !390
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2384 to i8*)), !insn.addr !391
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_23a0 to i8*)), !insn.addr !392
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_23bc to i8*)), !insn.addr !393
  ret void, !insn.addr !394

; uselistorder directives
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 36 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
  uselistorder i64 0, { 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 0, 92, 93, 1, 65, 66, 2, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 3, 4, 90, 6, 5, 91, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_1e07:
  call void @test_calling_conventions(), !insn.addr !395
  call void @test_parameter_passing(), !insn.addr !396
  call void @test_return_values(), !insn.addr !397
  ret i32 0, !insn.addr !398

; uselistorder directives
  uselistorder i32 0, { 6, 7, 8, 9, 10, 11, 12, 13, 1, 0, 2, 3, 5, 4 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_1e38:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !399

; uselistorder directives
  uselistorder i32 1, { 6, 41, 42, 43, 44, 45, 46, 47, 48, 49, 40, 10, 82, 9, 83, 87, 81, 12, 11, 2, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 84, 13, 8, 7, 61, 89, 88, 39, 62, 91, 90, 21, 20, 19, 18, 17, 16, 15, 14, 86, 63, 24, 23, 22, 5, 4, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 85, 93, 92, 26, 25, 1, 95, 94, 28, 27, 29, 0, 80, 97, 96, 37, 36, 35, 34, 33, 32, 31, 30, 3, 98, 38 }
}

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i32 @__printf_chk(i32, i8*, ...) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

declare i64 @__asm_movq(i128) local_unnamed_addr

declare i128 @__asm_pxor(i128, i128) local_unnamed_addr

declare i128 @__asm_cvtsi2sd(i32) local_unnamed_addr

declare i128 @__asm_movq.1(i64) local_unnamed_addr

declare i128 @__asm_addsd(i128, i128) local_unnamed_addr

declare i128 @__asm_cvtsi2sd.2(i64) local_unnamed_addr

declare i32 @__asm_cvttsd2si(i128) local_unnamed_addr

declare i128 @__asm_movsd(i64) local_unnamed_addr

declare i128 @__asm_movdqa(i128) local_unnamed_addr

declare i64 @__asm_movaps(i128) local_unnamed_addr

declare void @__asm_movups(i128, i128) local_unnamed_addr

declare i64 @__readfsqword(i64) local_unnamed_addr

!0 = !{i64 4096}
!1 = !{i64 4104}
!2 = !{i64 4111}
!3 = !{i64 4114}
!4 = !{i64 4116}
!5 = !{i64 4122}
!6 = !{i64 4212}
!7 = !{i64 4228}
!8 = !{i64 4244}
!9 = !{i64 4260}
!10 = !{i64 4276}
!11 = !{i64 4319}
!12 = !{i64 4325}
!13 = !{i64 4376}
!14 = !{i64 4440}
!15 = !{i64 4452}
!16 = !{i64 4459}
!17 = !{i64 4462}
!18 = !{i64 4473}
!19 = !{i64 4475}
!20 = !{i64 4482}
!21 = !{i64 4487}
!22 = !{i64 4492}
!23 = !{i64 4500}
!24 = !{i64 4504}
!25 = !{i64 4516}
!26 = !{i64 4525}
!27 = !{i64 4528}
!28 = !{i64 4533}
!29 = !{i64 4536}
!30 = !{i64 4541}
!31 = !{i64 4544}
!32 = !{i64 4549}
!33 = !{i64 4552}
!34 = !{i64 4562}
!35 = !{i64 4569}
!36 = !{i64 4572}
!37 = !{i64 4582}
!38 = !{i64 4587}
!39 = !{i64 4589}
!40 = !{i64 4592}
!41 = !{i64 4602}
!42 = !{i64 4612}
!43 = !{i64 4617}
!44 = !{i64 4619}
!45 = !{i64 4621}
!46 = !{i64 4623}
!47 = !{i64 4627}
!48 = !{i64 4637}
!49 = !{i64 4642}
!50 = !{i64 4644}
!51 = !{i64 4646}
!52 = !{i64 4649}
!53 = !{i64 4659}
!54 = !{i64 4664}
!55 = !{i64 4666}
!56 = !{i64 4668}
!57 = !{i64 4670}
!58 = !{i64 4673}
!59 = !{i64 4677}
!60 = !{i64 4687}
!61 = !{i64 4692}
!62 = !{i64 4694}
!63 = !{i64 4696}
!64 = !{i64 4698}
!65 = !{i64 4702}
!66 = !{i64 4712}
!67 = !{i64 4717}
!68 = !{i64 4719}
!69 = !{i64 4721}
!70 = !{i64 4724}
!71 = !{i64 4734}
!72 = !{i64 4744}
!73 = !{i64 4745}
!74 = !{i64 4778}
!75 = !{i64 4823}
!76 = !{i64 4825}
!77 = !{i64 4838}
!78 = !{i64 4840}
!79 = !{i64 4845}
!80 = !{i64 4849}
!81 = !{i64 4854}
!82 = !{i64 4856}
!83 = !{i64 4859}
!84 = !{i64 4861}
!85 = !{i64 4869}
!86 = !{i64 4863}
!87 = !{i64 4873}
!88 = !{i64 4876}
!89 = !{i64 4882}
!90 = !{i64 4894}
!91 = !{i64 4903}
!92 = !{i64 4911}
!93 = !{i64 4912}
!94 = !{i64 4926}
!95 = !{i64 4931}
!96 = !{i64 4933}
!97 = !{i64 4935}
!98 = !{i64 4937}
!99 = !{i64 4940}
!100 = !{i64 4944}
!101 = !{i64 4948}
!102 = !{i64 4952}
!103 = !{i64 4953}
!104 = !{i64 4963}
!105 = !{i64 4976}
!106 = !{i64 4979}
!107 = !{i64 4984}
!108 = !{i64 4989}
!109 = !{i64 4991}
!110 = !{i64 4995}
!111 = !{i64 4999}
!112 = !{i64 5004}
!113 = !{i64 5008}
!114 = !{i64 5012}
!115 = !{i64 5017}
!116 = !{i64 5021}
!117 = !{i64 5029}
!118 = !{i64 5030}
!119 = !{i64 5034}
!120 = !{i64 5039}
!121 = !{i64 5047}
!122 = !{i64 5052}
!123 = !{i64 5055}
!124 = !{i64 5059}
!125 = !{i64 5062}
!126 = !{i64 5064}
!127 = !{i64 5069}
!128 = !{i64 5072}
!129 = !{i64 5076}
!130 = !{i64 5080}
!131 = !{i64 5086}
!132 = !{i64 5087}
!133 = !{i64 5091}
!134 = !{i64 5098}
!135 = !{i64 5124}
!136 = !{i64 5151}
!137 = !{i64 5178}
!138 = !{i64 5205}
!139 = !{i64 5232}
!140 = !{i64 5259}
!141 = !{i64 5286}
!142 = !{i64 5313}
!143 = !{i64 5340}
!144 = !{i64 5367}
!145 = !{i64 5394}
!146 = !{i64 5436}
!147 = !{i64 5460}
!148 = !{i64 5487}
!149 = !{i64 5514}
!150 = !{i64 5524}
!151 = !{i64 5544}
!152 = !{i64 5568}
!153 = !{i64 5578}
!154 = !{i64 5573}
!155 = !{i64 5583}
!156 = !{i64 5591}
!157 = !{i64 5593}
!158 = !{i64 5598}
!159 = !{i64 5606}
!160 = !{i64 5612}
!161 = !{i64 5620}
!162 = !{i64 5626}
!163 = !{i64 5634}
!164 = !{i64 5640}
!165 = !{i64 5648}
!166 = !{i64 5654}
!167 = !{i64 5662}
!168 = !{i64 5668}
!169 = !{i64 5676}
!170 = !{i64 5682}
!171 = !{i64 5690}
!172 = !{i64 5696}
!173 = !{i64 5704}
!174 = !{i64 5712}
!175 = !{i64 5720}
!176 = !{i64 5728}
!177 = !{i64 5732}
!178 = !{i64 5735}
!179 = !{i64 5754}
!180 = !{i64 5781}
!181 = !{i64 5794}
!182 = !{i64 5803}
!183 = !{i64 5812}
!184 = !{i64 5813}
!185 = !{i64 5822}
!186 = !{i64 5825}
!187 = !{i64 5835}
!188 = !{i64 5840}
!189 = !{i64 5847}
!190 = !{i64 5857}
!191 = !{i64 5867}
!192 = !{i64 5877}
!193 = !{i64 5885}
!194 = !{i64 5889}
!195 = !{i64 5891}
!196 = !{i64 5901}
!197 = !{i64 5902}
!198 = !{i64 5908}
!199 = !{i64 5913}
!200 = !{i64 5916}
!201 = !{i64 5921}
!202 = !{i64 5926}
!203 = !{i64 5929}
!204 = !{i64 5932}
!205 = !{i64 5934}
!206 = !{i64 5938}
!207 = !{i64 5941}
!208 = !{i64 5945}
!209 = !{i64 5961}
!210 = !{i64 5984}
!211 = !{i64 6020}
!212 = !{i64 6030}
!213 = !{i64 6039}
!214 = !{i64 6045}
!215 = !{i64 6046}
!216 = !{i64 6051}
!217 = !{i64 6084}
!218 = !{i64 6129}
!219 = !{i64 6131}
!220 = !{i64 6144}
!221 = !{i64 6146}
!222 = !{i64 6151}
!223 = !{i64 6155}
!224 = !{i64 6160}
!225 = !{i64 6162}
!226 = !{i64 6165}
!227 = !{i64 6167}
!228 = !{i64 6175}
!229 = !{i64 6169}
!230 = !{i64 6179}
!231 = !{i64 6182}
!232 = !{i64 6188}
!233 = !{i64 6200}
!234 = !{i64 6209}
!235 = !{i64 6217}
!236 = !{i64 6218}
!237 = !{i64 6262}
!238 = !{i64 6271}
!239 = !{i64 6287}
!240 = !{i64 6294}
!241 = !{i64 6315}
!242 = !{i64 6324}
!243 = !{i64 6329}
!244 = !{i64 6332}
!245 = !{i64 6344}
!246 = !{i64 6356}
!247 = !{i64 6362}
!248 = !{i64 6377}
!249 = !{i64 6393}
!250 = !{i64 6406}
!251 = !{i64 6421}
!252 = !{i64 6426}
!253 = !{i64 6438}
!254 = !{i64 6447}
!255 = !{i64 6456}
!256 = !{i64 6462}
!257 = !{i64 6463}
!258 = !{i64 6472}
!259 = !{i64 6474}
!260 = !{i64 6476}
!261 = !{i64 6479}
!262 = !{i64 6481}
!263 = !{i64 6484}
!264 = !{i64 6486}
!265 = !{i64 6487}
!266 = !{i64 6489}
!267 = !{i64 6495}
!268 = !{i64 6505}
!269 = !{i64 6514}
!270 = !{i64 6518}
!271 = !{i64 6519}
!272 = !{i64 6523}
!273 = !{i64 6527}
!274 = !{i64 6541}
!275 = !{i64 6543}
!276 = !{i64 6546}
!277 = !{i64 6554}
!278 = !{i64 6556}
!279 = !{i64 6568}
!280 = !{i64 6577}
!281 = !{i64 6559}
!282 = !{i64 6583}
!283 = !{i64 6584}
!284 = !{i64 6593}
!285 = !{i64 6596}
!286 = !{i64 6606}
!287 = !{i64 6622}
!288 = !{i64 6649}
!289 = !{i64 6659}
!290 = !{i64 6664}
!291 = !{i64 6683}
!292 = !{i64 6710}
!293 = !{i64 6737}
!294 = !{i64 6747}
!295 = !{i64 6752}
!296 = !{i64 6771}
!297 = !{i64 6781}
!298 = !{i64 6786}
!299 = !{i64 6805}
!300 = !{i64 6815}
!301 = !{i64 6820}
!302 = !{i64 6839}
!303 = !{i64 6849}
!304 = !{i64 6854}
!305 = !{i64 6873}
!306 = !{i64 6883}
!307 = !{i64 6888}
!308 = !{i64 6907}
!309 = !{i64 6917}
!310 = !{i64 6922}
!311 = !{i64 6941}
!312 = !{i64 6968}
!313 = !{i64 6977}
!314 = !{i64 6982}
!315 = !{i64 6985}
!316 = !{i64 6995}
!317 = !{i64 7000}
!318 = !{i64 7004}
!319 = !{i64 7014}
!320 = !{i64 7019}
!321 = !{i64 7023}
!322 = !{i64 7025}
!323 = !{i64 7028}
!324 = !{i64 7038}
!325 = !{i64 7039}
!326 = !{i64 7050}
!327 = !{i64 7066}
!328 = !{i64 7069}
!329 = !{i64 7074}
!330 = !{i64 7076}
!331 = !{i64 7079}
!332 = !{i64 7083}
!333 = !{i64 7086}
!334 = !{i64 7088}
!335 = !{i64 7093}
!336 = !{i64 7096}
!337 = !{i64 7102}
!338 = !{i64 7106}
!339 = !{i64 7112}
!340 = !{i64 7116}
!341 = !{i64 7122}
!342 = !{i64 7131}
!343 = !{i64 7140}
!344 = !{i64 7146}
!345 = !{i64 7147}
!346 = !{i64 7160}
!347 = !{i64 7176}
!348 = !{i64 7184}
!349 = !{i64 7193}
!350 = !{i64 7201}
!351 = !{i64 7210}
!352 = !{i64 7216}
!353 = !{i64 7217}
!354 = !{i64 7226}
!355 = !{i64 7242}
!356 = !{i64 7246}
!357 = !{i64 7256}
!358 = !{i64 7261}
!359 = !{i64 7266}
!360 = !{i64 7282}
!361 = !{i64 7286}
!362 = !{i64 7291}
!363 = !{i64 7297}
!364 = !{i64 7302}
!365 = !{i64 7305}
!366 = !{i64 7308}
!367 = !{i64 7310}
!368 = !{i64 7313}
!369 = !{i64 7323}
!370 = !{i64 7324}
!371 = !{i64 7333}
!372 = !{i64 7348}
!373 = !{i64 7356}
!374 = !{i64 7359}
!375 = !{i64 7369}
!376 = !{i64 7374}
!377 = !{i64 7377}
!378 = !{i64 7379}
!379 = !{i64 7389}
!380 = !{i64 7405}
!381 = !{i64 7432}
!382 = !{i64 7442}
!383 = !{i64 7466}
!384 = !{i64 7476}
!385 = !{i64 7500}
!386 = !{i64 7510}
!387 = !{i64 7534}
!388 = !{i64 7544}
!389 = !{i64 7568}
!390 = !{i64 7596}
!391 = !{i64 7623}
!392 = !{i64 7650}
!393 = !{i64 7677}
!394 = !{i64 7686}
!395 = !{i64 7700}
!396 = !{i64 7710}
!397 = !{i64 7720}
!398 = !{i64 7734}
!399 = !{i64 7748}
