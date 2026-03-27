source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

%_Unwind_Exception = type { i32 }

@global_var_28a = global i32 17104896
@global_var_2bf = global i32 0
@global_var_28a0 = local_unnamed_addr constant i32 -1509490266
@global_var_2898 = local_unnamed_addr constant i32 3495683
@global_var_28ac = local_unnamed_addr constant i32 2097380098
@global_var_27e7 = local_unnamed_addr constant i32 239140864
@global_var_26b7 = local_unnamed_addr constant i32 1208895552
@global_var_2667 = local_unnamed_addr constant i32 1213206081
@global_var_2627 = constant i32 -1058816
@global_var_25d7 = local_unnamed_addr constant i32 1110183505
@0 = external global i32

define i32 @_init() local_unnamed_addr {
dec_label_pc_1000:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !0
  %3 = call i32 @frame_dummy(), !insn.addr !1
  %4 = call i32 @__do_global_ctors_aux(), !insn.addr !2
  ret i32 %4, !insn.addr !3
}

define i32* @function_1040(i32 %size) local_unnamed_addr {
dec_label_pc_1040:
  %0 = call i32* @_Znwj(i32 %size), !insn.addr !4
  ret i32* %0, !insn.addr !4
}

define i32 @function_1050(i32 %arg1) local_unnamed_addr {
dec_label_pc_1050:
  %0 = call i32 @__cxa_begin_catch(i32 %arg1), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define i32 @function_1060(i32 %arg1) local_unnamed_addr {
dec_label_pc_1060:
  %0 = call i32 @__cxa_allocate_exception(i32 %arg1), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i32 @function_1070(i8* %s) local_unnamed_addr {
dec_label_pc_1070:
  %0 = call i32 @strlen(i8* %s), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @function_1080(void (i32*)* %func, i32* %arg, i32* %dso_handle) local_unnamed_addr {
dec_label_pc_1080:
  %0 = call i32 @__cxa_atexit(void (i32*)* %func, i32* %arg, i32* %dso_handle), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i32 @function_1090(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_1090:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define void @function_10a0(i32* %ptr) local_unnamed_addr {
dec_label_pc_10a0:
  call void @_ZdlPv(i32* %ptr), !insn.addr !10
  ret void, !insn.addr !10
}

define i32 @function_10b0(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10b0:
  %0 = call i32 @__dynamic_cast(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i32 @function_10c0(i8* %format, ...) local_unnamed_addr {
dec_label_pc_10c0:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define i32 @function_10d0() local_unnamed_addr {
dec_label_pc_10d0:
  %0 = call i32 @__cxa_rethrow(), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define i32 @function_10e0(i8* %s) local_unnamed_addr {
dec_label_pc_10e0:
  %0 = call i32 @puts(i8* %s), !insn.addr !14
  ret i32 %0, !insn.addr !14
}

define i32 @function_10f0() local_unnamed_addr {
dec_label_pc_10f0:
  %0 = call i32 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define i32 @function_1100() local_unnamed_addr {
dec_label_pc_1100:
  %0 = call i32 @__cxa_end_catch(), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i32 @function_1110(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1110:
  %0 = call i32 @__cxa_throw(i32 %arg1, i32 %arg2, i32 %arg3), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define void @function_1120(%_Unwind_Exception* %object) local_unnamed_addr {
dec_label_pc_1120:
  call void @_Unwind_Resume(%_Unwind_Exception* %object), !insn.addr !18
  ret void, !insn.addr !18
}

define i32 @function_1130() local_unnamed_addr {
dec_label_pc_1130:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !19
}

define i32 @_GLOBAL__sub_I_5_1.cpp(i32 %arg1) local_unnamed_addr {
dec_label_pc_1140:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 12064, !insn.addr !20
  %3 = call i32 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !21
  %4 = add i32 %1, 12036, !insn.addr !22
  %5 = add i32 %1, 11956, !insn.addr !23
  %6 = inttoptr i32 %5 to i32*, !insn.addr !23
  %7 = load i32, i32* %6, align 4, !insn.addr !23
  %8 = inttoptr i32 %7 to void (i32*)*, !insn.addr !24
  %9 = inttoptr i32 %2 to i32*, !insn.addr !25
  %10 = inttoptr i32 %4 to i32*, !insn.addr !25
  %11 = call i32 @__cxa_atexit(void (i32*)* %8, i32* %9, i32* %10), !insn.addr !25
  ret i32 %11, !insn.addr !26

; uselistorder directives
  uselistorder i32 %1, { 2, 1, 0 }
}

define i32 @_start(i32 %arg1) local_unnamed_addr {
dec_label_pc_1180:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_4 = alloca i32, align 4
  %3 = call i32 @function_11ac(i32 %2), !insn.addr !27
  %4 = bitcast i32* %stack_var_4 to i8**
  %5 = add i32 %1, 11864, !insn.addr !28
  %6 = inttoptr i32 %5 to i32*, !insn.addr !28
  %7 = load i32, i32* %6, align 4, !insn.addr !28
  %8 = call i32 @__libc_start_main(i32 %7, i32 %arg1, i8** nonnull %4, void ()* null, void ()* null, void ()* bitcast (i32* @0 to void ()*)), !insn.addr !29
  %9 = call i32 @__asm_hlt(), !insn.addr !30
  unreachable, !insn.addr !30

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @function_11ac(i32 %arg1) local_unnamed_addr {
dec_label_pc_11ac:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !31
}

define i32 @__x86.get_pc_thunk.bx(i32 %arg1) local_unnamed_addr {
dec_label_pc_11b0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !32
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_11c0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !33
  %3 = add i32 %1, 11931, !insn.addr !34
  ret i32 %3, !insn.addr !35
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1200:
  %0 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !36
  ret i32 0, !insn.addr !37
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1250:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !38
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.di(i32 %1), !insn.addr !39
  %3 = add i32 %1, 11779, !insn.addr !40
  %4 = inttoptr i32 %3 to i8*, !insn.addr !40
  %5 = load i8, i8* %4, align 1, !insn.addr !40
  %6 = icmp eq i8 %5, 0, !insn.addr !40
  %7 = icmp eq i1 %6, false, !insn.addr !41
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !41
  br i1 %7, label %dec_label_pc_12d2, label %dec_label_pc_1271, !insn.addr !41

dec_label_pc_1271:                                ; preds = %dec_label_pc_1250
  %8 = add i32 %1, 11659, !insn.addr !42
  %9 = inttoptr i32 %8 to i32*, !insn.addr !42
  %10 = load i32, i32* %9, align 4, !insn.addr !42
  %11 = icmp eq i32 %10, 0, !insn.addr !43
  br i1 %11, label %dec_label_pc_128e, label %dec_label_pc_127b, !insn.addr !44

dec_label_pc_127b:                                ; preds = %dec_label_pc_1271
  %12 = call i32 @function_1130(), !insn.addr !45
  br label %dec_label_pc_128e, !insn.addr !46

dec_label_pc_128e:                                ; preds = %dec_label_pc_127b, %dec_label_pc_1271
  %13 = call i32 @deregister_tm_clones(), !insn.addr !47
  store i8 1, i8* %4, align 1, !insn.addr !48
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !48
  br label %dec_label_pc_12d2, !insn.addr !48

dec_label_pc_12d2:                                ; preds = %dec_label_pc_128e, %dec_label_pc_1250
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !49

; uselistorder directives
  uselistorder i32 %1, { 2, 0, 1 }
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_12e0:
  %0 = call i32 @register_tm_clones(), !insn.addr !50
  ret i32 %0, !insn.addr !50
}

define i32 @__x86.get_pc_thunk.dx(i32 %arg1) local_unnamed_addr {
dec_label_pc_12e9:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !51
}

define i32 @__x86.get_pc_thunk.di(i32 %arg1) local_unnamed_addr {
dec_label_pc_12ed:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !52
}

define i32 @_Z20test_cpp_member_funcv(i32* %result) local_unnamed_addr {
dec_label_pc_1300:
  %stack_var_-36 = alloca i32, align 4
  store i32 1953719636, i32* %stack_var_-36, align 4, !insn.addr !53
  %0 = bitcast i32* %stack_var_-36 to i8*
  %1 = call i32 @strlen(i8* nonnull %0), !insn.addr !54
  %2 = add i32 %1, 4700, !insn.addr !55
  ret i32 %2, !insn.addr !56
}

define i32 @_Z20test_cpp_constructorv(i32* %result) local_unnamed_addr {
dec_label_pc_1380:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 11495, !insn.addr !57
  %2 = inttoptr i32 %1 to i32*, !insn.addr !57
  %3 = load i32, i32* %2, align 4, !insn.addr !57
  %4 = mul i32 %3, 1001, !insn.addr !58
  %5 = add i32 %4, 21, !insn.addr !59
  ret i32 %5, !insn.addr !60
}

define i32 @_Z17call_virtual_funcP4Basei(i32* %result, i32* %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_13a0:
  %0 = ptrtoint i32* %arg2 to i32
  ret i32 %0, !insn.addr !61
}

define i32 @_Z21test_cpp_virtual_funcv() local_unnamed_addr {
dec_label_pc_13d0:
  ret i32 42, !insn.addr !62
}

define i32 @_Z29test_cpp_multiple_inheritancev() local_unnamed_addr {
dec_label_pc_13e0:
  ret i32 71, !insn.addr !63
}

define i32 @_Z28test_cpp_diamond_inheritancev() local_unnamed_addr {
dec_label_pc_13f0:
  ret i32 ptrtoint (i32* @global_var_28a to i32), !insn.addr !64
}

define i32 @_Z26test_cpp_operator_overloadv() local_unnamed_addr {
dec_label_pc_1400:
  ret i32 22, !insn.addr !65
}

define i32 @_Z22test_cpp_template_funcv() local_unnamed_addr {
dec_label_pc_1410:
  ret i32 39, !insn.addr !66
}

define i32 @_Z23test_cpp_template_classv() local_unnamed_addr {
dec_label_pc_1420:
  ret i32 16, !insn.addr !67
}

define i32 @_Z15test_cpp_lambdav() local_unnamed_addr {
dec_label_pc_1430:
  ret i32 85, !insn.addr !68
}

define i32 @_Z18test_cpp_exceptionv(i32* %result) local_unnamed_addr {
dec_label_pc_1440:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !69
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i32, i32* %0
  %5 = call i32 @__cxa_allocate_exception(i32 4), !insn.addr !70
  %6 = inttoptr i32 %5 to i32*, !insn.addr !71
  store i32 42, i32* %6, align 4, !insn.addr !71
  %7 = add i32 %4, 11160, !insn.addr !72
  %8 = inttoptr i32 %7 to i32*, !insn.addr !72
  %9 = load i32, i32* %8, align 4, !insn.addr !72
  %10 = call i32 @__cxa_throw(i32 %5, i32 %9, i32 0), !insn.addr !73
  %11 = icmp eq i32 %3, 3, !insn.addr !74
  store i32 100, i32* %eax.0.reg2mem, !insn.addr !75
  br i1 %11, label %dec_label_pc_14fc, label %dec_label_pc_14f2, !insn.addr !75

dec_label_pc_14f2:                                ; preds = %dec_label_pc_1440
  %12 = icmp eq i32 %3, 2, !insn.addr !76
  %13 = icmp eq i1 %12, false, !insn.addr !77
  store i32 200, i32* %eax.0.reg2mem, !insn.addr !77
  br i1 %13, label %dec_label_pc_151e, label %dec_label_pc_14fc, !insn.addr !77

dec_label_pc_14fc:                                ; preds = %dec_label_pc_14f2, %dec_label_pc_1440
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %14 = mul i32 %1, 2, !insn.addr !78
  %15 = add i32 %2, %14, !insn.addr !79
  %16 = add i32 %15, %eax.0.reload, !insn.addr !80
  %17 = call i32 @__cxa_begin_catch(i32 %10), !insn.addr !81
  %18 = call i32 @__cxa_end_catch(), !insn.addr !82
  ret i32 %16, !insn.addr !83

dec_label_pc_151e:                                ; preds = %dec_label_pc_14f2
  %19 = inttoptr i32 %10 to %_Unwind_Exception*, !insn.addr !84
  call void @_Unwind_Resume(%_Unwind_Exception* %19), !insn.addr !85
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !86

; uselistorder directives
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32* %0, { 3, 2, 1, 0 }
  uselistorder i32 42, { 1, 0 }
}

define i32 @_Z18test_cpp_smart_ptrv() local_unnamed_addr {
dec_label_pc_1530:
  ret i32 ptrtoint (i32* @global_var_2bf to i32), !insn.addr !87
}

define i32 @_Z13test_cpp_rttiv(i32* %result) local_unnamed_addr {
dec_label_pc_1540:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32* @_Znwj(i32 4), !insn.addr !88
  %3 = ptrtoint i32* %2 to i32, !insn.addr !88
  %4 = add i32 %1, 10624, !insn.addr !89
  store i32 %4, i32* %2, align 4, !insn.addr !90
  %5 = call i32* @_Znwj(i32 4), !insn.addr !91
  %6 = ptrtoint i32* %5 to i32, !insn.addr !91
  %7 = add i32 %1, 10644, !insn.addr !92
  store i32 %7, i32* %5, align 4, !insn.addr !93
  %8 = add i32 %1, 10592, !insn.addr !94
  %9 = add i32 %1, 10584, !insn.addr !95
  %10 = call i32 @__dynamic_cast(i32 %3, i32 %9, i32 %8, i32 0), !insn.addr !96
  %11 = icmp eq i32 %10, 0, !insn.addr !97
  %12 = select i1 %11, i32 30, i32 130, !insn.addr !98
  %13 = add i32 %1, 10604, !insn.addr !99
  %14 = call i32 @__dynamic_cast(i32 %6, i32 %9, i32 %13, i32 0), !insn.addr !100
  %15 = add nuw nsw i32 %12, 200, !insn.addr !101
  %16 = icmp eq i32 %14, 0, !insn.addr !102
  %17 = select i1 %16, i32 %12, i32 %15, !insn.addr !103
  call void @_ZdlPv(i32* %2), !insn.addr !104
  %18 = add nuw nsw i32 %17, 14, !insn.addr !105
  ret i32 %18, !insn.addr !106

; uselistorder directives
  uselistorder i32 %12, { 1, 0 }
  uselistorder i32 200, { 1, 0 }
}

define i32 @_Z20test_cpp_oo_featuresv(i32* %result) local_unnamed_addr {
dec_label_pc_1600:
  %0 = alloca i32
  %stack_var_-44 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = add i32 %1, 3020, !insn.addr !107
  %3 = inttoptr i32 %2 to i8*, !insn.addr !108
  %4 = call i32 @puts(i8* %3), !insn.addr !109
  store i32 1953719636, i32* %stack_var_-44, align 4, !insn.addr !110
  %5 = bitcast i32* %stack_var_-44 to i8*
  %6 = call i32 @strlen(i8* nonnull %5), !insn.addr !111
  %7 = add i32 %1, 2677, !insn.addr !112
  %8 = inttoptr i32 %7 to i8*, !insn.addr !113
  %9 = call i32 (i8*, ...) @printf(i8* %8), !insn.addr !114
  %10 = add i32 %1, 2707, !insn.addr !115
  %11 = inttoptr i32 %10 to i8*, !insn.addr !116
  %12 = call i32 (i8*, ...) @printf(i8* %11), !insn.addr !117
  %13 = add i32 %1, 2735, !insn.addr !118
  %14 = inttoptr i32 %13 to i8*, !insn.addr !119
  %15 = call i32 (i8*, ...) @printf(i8* %14), !insn.addr !120
  %16 = add i32 %1, 2763, !insn.addr !121
  %17 = inttoptr i32 %16 to i8*, !insn.addr !122
  %18 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !123
  %19 = add i32 %1, 2791, !insn.addr !124
  %20 = inttoptr i32 %19 to i8*, !insn.addr !125
  %21 = call i32 (i8*, ...) @printf(i8* %20), !insn.addr !126
  %22 = add i32 %1, 2820, !insn.addr !127
  %23 = inttoptr i32 %22 to i8*, !insn.addr !128
  %24 = call i32 (i8*, ...) @printf(i8* %23), !insn.addr !129
  %25 = add i32 %1, 2848, !insn.addr !130
  %26 = inttoptr i32 %25 to i8*, !insn.addr !131
  %27 = call i32 (i8*, ...) @printf(i8* %26), !insn.addr !132
  %28 = add i32 %1, 2876, !insn.addr !133
  %29 = inttoptr i32 %28 to i8*, !insn.addr !134
  %30 = call i32 (i8*, ...) @printf(i8* %29), !insn.addr !135
  %31 = add i32 %1, 2904, !insn.addr !136
  %32 = inttoptr i32 %31 to i8*, !insn.addr !137
  %33 = call i32 (i8*, ...) @printf(i8* %32), !insn.addr !138
  %34 = call i32 @_Z18test_cpp_exceptionv(i32* nonnull @0), !insn.addr !139
  %35 = add i32 %1, 2932, !insn.addr !140
  %36 = inttoptr i32 %35 to i8*, !insn.addr !141
  %37 = call i32 (i8*, ...) @printf(i8* %36), !insn.addr !142
  %38 = add i32 %1, 2961, !insn.addr !143
  %39 = inttoptr i32 %38 to i8*, !insn.addr !144
  %40 = call i32 (i8*, ...) @printf(i8* %39), !insn.addr !145
  %41 = call i32* @_Znwj(i32 4), !insn.addr !146
  %42 = add i32 %1, 10432, !insn.addr !147
  store i32 %42, i32* %41, align 4, !insn.addr !148
  %43 = call i32* @_Znwj(i32 4), !insn.addr !149
  %44 = add i32 %1, 10452, !insn.addr !150
  store i32 %44, i32* %43, align 4, !insn.addr !151
  %45 = add i32 %1, 10400, !insn.addr !152
  %46 = add i32 %1, 10392, !insn.addr !153
  %47 = ptrtoint i32* %41 to i32, !insn.addr !154
  %48 = call i32 @__dynamic_cast(i32 %47, i32 %46, i32 %45, i32 0), !insn.addr !154
  %49 = add i32 %1, 10412, !insn.addr !155
  %50 = ptrtoint i32* %43 to i32, !insn.addr !156
  %51 = call i32 @__dynamic_cast(i32 %50, i32 %46, i32 %49, i32 0), !insn.addr !156
  call void @_ZdlPv(i32* %41), !insn.addr !157
  %52 = add i32 %1, 2990, !insn.addr !158
  %53 = inttoptr i32 %52 to i8*, !insn.addr !159
  %54 = call i32 (i8*, ...) @printf(i8* %53), !insn.addr !160
  ret i32 %54, !insn.addr !161

; uselistorder directives
  uselistorder i32 (i32, i32, i32, i32)* @__dynamic_cast, { 3, 2, 1, 0, 4 }
  uselistorder i32* (i32)* @_Znwj, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i8*, ...)* @printf, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder i32 (i8*)* @strlen, { 1, 0, 2 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1810:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i32*, !insn.addr !162
  %3 = call i32 @_Z20test_cpp_oo_featuresv(i32* %2), !insn.addr !162
  ret i32 0, !insn.addr !163
}

define i32 @_Z12template_maxIiET_S0_S0_(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1830:
  %0 = sub i32 %arg1, %arg2, !insn.addr !164
  %1 = xor i32 %arg2, %arg1, !insn.addr !164
  %2 = xor i32 %0, %arg1, !insn.addr !164
  %3 = and i32 %2, %1, !insn.addr !164
  %4 = icmp slt i32 %3, 0, !insn.addr !164
  %5 = icmp eq i32 %0, 0, !insn.addr !164
  %6 = icmp slt i32 %0, 0, !insn.addr !164
  %7 = icmp eq i1 %6, %4, !insn.addr !165
  %8 = icmp eq i1 %5, false, !insn.addr !165
  %9 = icmp eq i1 %7, %8, !insn.addr !165
  %10 = select i1 %9, i32 %arg1, i32 %arg2, !insn.addr !165
  ret i32 %10, !insn.addr !166

; uselistorder directives
  uselistorder i32 %0, { 1, 2, 0 }
  uselistorder i32 %arg2, { 2, 0, 1 }
  uselistorder i32 %arg1, { 3, 0, 1, 2 }
}

define double @_Z12template_maxIdET_S0_S0_(double %arg1, double %arg2) local_unnamed_addr {
dec_label_pc_1840:
  %cf.0.reg2mem = alloca i1, !insn.addr !167
  %zf.0.reg2mem = alloca i1, !insn.addr !167
  %0 = fcmp ogt double %arg1, %arg2, !insn.addr !168
  store i1 false, i1* %zf.0.reg2mem, !insn.addr !168
  store i1 false, i1* %cf.0.reg2mem, !insn.addr !168
  br i1 %0, label %5, label %1, !insn.addr !168

; <label>:1:                                      ; preds = %dec_label_pc_1840
  %2 = fcmp olt double %arg1, %arg2, !insn.addr !168
  store i1 false, i1* %zf.0.reg2mem, !insn.addr !168
  store i1 true, i1* %cf.0.reg2mem, !insn.addr !168
  br i1 %2, label %5, label %3, !insn.addr !168

; <label>:3:                                      ; preds = %1
  %4 = fcmp une double %arg1, %arg2, !insn.addr !168
  store i1 true, i1* %zf.0.reg2mem, !insn.addr !168
  store i1 %4, i1* %cf.0.reg2mem, !insn.addr !168
  br label %5, !insn.addr !168

; <label>:5:                                      ; preds = %1, %dec_label_pc_1840, %3
  %cf.0.reload = load i1, i1* %cf.0.reg2mem
  %zf.0.reload = load i1, i1* %zf.0.reg2mem
  %6 = or i1 %zf.0.reload, %cf.0.reload, !insn.addr !169
  %.v = select i1 %6, double %arg2, double %arg1
  ret double %.v, !insn.addr !170

; uselistorder directives
  uselistorder i1* %zf.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder i1* %cf.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder i1 true, { 1, 0 }
  uselistorder label %5, { 2, 0, 1 }
}

define void @_Z13template_swapIiEvRT_S1_(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_1860:
  %0 = load i32, i32* %arg1, align 4, !insn.addr !171
  %1 = load i32, i32* %arg2, align 4, !insn.addr !172
  store i32 %1, i32* %arg1, align 4, !insn.addr !173
  store i32 %0, i32* %arg2, align 4, !insn.addr !174
  ret void, !insn.addr !175
}

define i32 @_ZN9ContainerIiEC1Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1880:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 40, !insn.addr !176
  %2 = inttoptr i32 %1 to i32*, !insn.addr !176
  store i32 0, i32* %2, align 4, !insn.addr !176
  ret i32 %0, !insn.addr !177

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
}

define i32 @_ZN9ContainerIiE4pushEi(i32* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1890:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 40, !insn.addr !178
  %2 = inttoptr i32 %1 to i32*, !insn.addr !178
  %3 = load i32, i32* %2, align 4, !insn.addr !178
  %4 = icmp sgt i32 %3, 9, !insn.addr !179
  br i1 %4, label %dec_label_pc_18aa, label %dec_label_pc_189d, !insn.addr !179

dec_label_pc_189d:                                ; preds = %dec_label_pc_1890
  %5 = add i32 %3, 1, !insn.addr !180
  store i32 %5, i32* %2, align 4, !insn.addr !181
  %6 = mul i32 %3, 4, !insn.addr !182
  %7 = add i32 %6, %0, !insn.addr !182
  %8 = inttoptr i32 %7 to i32*, !insn.addr !182
  store i32 %arg2, i32* %8, align 4, !insn.addr !182
  br label %dec_label_pc_18aa, !insn.addr !182

dec_label_pc_18aa:                                ; preds = %dec_label_pc_189d, %dec_label_pc_1890
  ret i32 %0, !insn.addr !183

; uselistorder directives
  uselistorder i32 %0, { 1, 0, 2 }
}

define i32 @_ZNK9ContainerIiE3getEi(i32* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_18b0:
  %eax.0.reg2mem = alloca i32, !insn.addr !184
  %0 = icmp slt i32 %arg2, 0, !insn.addr !185
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !186
  br i1 %0, label %dec_label_pc_18c6, label %dec_label_pc_18ba, !insn.addr !186

dec_label_pc_18ba:                                ; preds = %dec_label_pc_18b0
  %1 = ptrtoint i32* %result to i32
  %2 = add i32 %1, 40, !insn.addr !187
  %3 = inttoptr i32 %2 to i32*, !insn.addr !187
  %4 = load i32, i32* %3, align 4, !insn.addr !187
  %5 = icmp sgt i32 %4, %arg2, !insn.addr !188
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !188
  br i1 %5, label %dec_label_pc_18c3, label %dec_label_pc_18c6, !insn.addr !188

dec_label_pc_18c3:                                ; preds = %dec_label_pc_18ba
  %6 = mul i32 %arg2, 4, !insn.addr !189
  %7 = add i32 %6, %1, !insn.addr !189
  %8 = inttoptr i32 %7 to i32*, !insn.addr !189
  %9 = load i32, i32* %8, align 4, !insn.addr !189
  store i32 %9, i32* %eax.0.reg2mem, !insn.addr !189
  br label %dec_label_pc_18c6, !insn.addr !189

dec_label_pc_18c6:                                ; preds = %dec_label_pc_18ba, %dec_label_pc_18c3, %dec_label_pc_18b0
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !190

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 0, 2, 1, 3 }
  uselistorder label %dec_label_pc_18c6, { 1, 0, 2 }
}

define i32 @_ZNK9ContainerIiE7getSizeEv(i32* %result) local_unnamed_addr {
dec_label_pc_18d0:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 40, !insn.addr !191
  %2 = inttoptr i32 %1 to i32*, !insn.addr !191
  %3 = load i32, i32* %2, align 4, !insn.addr !191
  ret i32 %3, !insn.addr !192
}

define i32 @_ZN9ContainerIdEC1Ev(i32* %result) local_unnamed_addr {
dec_label_pc_18e0:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 80, !insn.addr !193
  %2 = inttoptr i32 %1 to i32*, !insn.addr !193
  store i32 0, i32* %2, align 4, !insn.addr !193
  ret i32 %0, !insn.addr !194

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32 0, { 10, 0, 1, 11, 12, 13, 14, 15, 2, 4, 5, 16, 6, 17, 7, 8, 18, 3, 9 }
}

define x86_fp80 @_ZN9ContainerIdE4pushEd(i32* %result, double %arg2) local_unnamed_addr {
dec_label_pc_18f0:
  %st7.0.reg2mem = alloca x86_fp80, !insn.addr !195
  %0 = ptrtoint i32* %result to i32
  %1 = fpext double %arg2 to x86_fp80, !insn.addr !195
  %2 = add i32 %0, 80, !insn.addr !196
  %3 = inttoptr i32 %2 to i32*, !insn.addr !196
  %4 = load i32, i32* %3, align 4, !insn.addr !196
  %5 = icmp sgt i32 %4, 9, !insn.addr !197
  store x86_fp80 %1, x86_fp80* %st7.0.reg2mem, !insn.addr !197
  br i1 %5, label %dec_label_pc_190b, label %dec_label_pc_1900, !insn.addr !197

dec_label_pc_1900:                                ; preds = %dec_label_pc_18f0
  %6 = add i32 %4, 1, !insn.addr !198
  store i32 %6, i32* %3, align 4, !insn.addr !199
  %7 = mul i32 %4, 8, !insn.addr !200
  %8 = add i32 %7, %0, !insn.addr !200
  %9 = inttoptr i32 %8 to double*, !insn.addr !200
  store double %arg2, double* %9, align 4, !insn.addr !200
  store x86_fp80 0xK00000000000000000000, x86_fp80* %st7.0.reg2mem, !insn.addr !201
  br label %dec_label_pc_190b, !insn.addr !201

dec_label_pc_190b:                                ; preds = %dec_label_pc_1900, %dec_label_pc_18f0
  %st7.0.reload = load x86_fp80, x86_fp80* %st7.0.reg2mem
  ret x86_fp80 %st7.0.reload, !insn.addr !202
}

define i32 @_ZNK9ContainerIdE3getEi(i32* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1910:
  ret i32 %arg2, !insn.addr !203
}

define i32 @_ZNK9ContainerIdE7getSizeEv(i32* %result) local_unnamed_addr {
dec_label_pc_1930:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 80, !insn.addr !204
  %2 = inttoptr i32 %1 to i32*, !insn.addr !204
  %3 = load i32, i32* %2, align 4, !insn.addr !204
  ret i32 %3, !insn.addr !205
}

define i32 @_ZN12RTTIDerivedAD0Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_1940:
  call void @_ZdlPv(i32* %result), !insn.addr !206
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !207
}

define i32 @_ZNK12RTTIDerivedA7getTypeEv() local_unnamed_addr {
dec_label_pc_1970:
  ret i32 1, !insn.addr !208
}

define i32 @_ZN8RTTIBaseD2Ev() local_unnamed_addr {
dec_label_pc_1980:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !209
}

define i32 @_ZN12RTTIDerivedBD0Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_1990:
  call void @_ZdlPv(i32* %result), !insn.addr !210
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !211

; uselistorder directives
  uselistorder void (i32*)* @_ZdlPv, { 3, 2, 1, 0, 4 }
}

define i32 @_ZNK12RTTIDerivedB7getTypeEv() local_unnamed_addr {
dec_label_pc_19c0:
  ret i32 2, !insn.addr !212

; uselistorder directives
  uselistorder i32 2, { 1, 0, 2 }
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_19d0:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !213
  %ebx.0.reg2mem = alloca i32, !insn.addr !213
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !214
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2627 to i32), i32 -384), !insn.addr !215
  %4 = inttoptr i32 %3 to i32*, !insn.addr !215
  %5 = load i32, i32* %4, align 4, !insn.addr !215
  %6 = icmp eq i32 %5, -1, !insn.addr !216
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !217
  store i32 -1, i32* %merge.reg2mem, !insn.addr !217
  br i1 %6, label %dec_label_pc_1a0d, label %dec_label_pc_1a00, !insn.addr !217

dec_label_pc_1a00:                                ; preds = %dec_label_pc_19d0, %dec_label_pc_1a00
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !218
  %8 = inttoptr i32 %7 to i32*, !insn.addr !218
  %9 = load i32, i32* %8, align 4, !insn.addr !218
  %10 = icmp eq i32 %9, -1, !insn.addr !219
  %11 = icmp eq i1 %10, false, !insn.addr !220
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !220
  store i32 %9, i32* %merge.reg2mem, !insn.addr !220
  br i1 %11, label %dec_label_pc_1a00, label %dec_label_pc_1a0d, !insn.addr !220

dec_label_pc_1a0d:                                ; preds = %dec_label_pc_1a00, %dec_label_pc_19d0
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !221

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 6, 1, 0, 2, 3, 4, 5 }
  uselistorder i32 -1, { 1, 0, 2 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder i32* @0, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1a00, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_1a1c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !222
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !223
  ret i32 %3, !insn.addr !224

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 1, 0 }
  uselistorder i32 1, { 16, 18, 17, 15, 14, 25, 29, 19, 20, 30, 22, 21, 13, 26, 12, 11, 23, 10, 27, 9, 8, 24, 7, 6, 5, 4, 28, 3, 2, 1, 0 }
}

declare i32* @_Znwj(i32) local_unnamed_addr

declare i32 @__cxa_begin_catch(i32) local_unnamed_addr

declare i32 @__cxa_allocate_exception(i32) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i32 @__cxa_atexit(void (i32*)*, i32*, i32*) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @_ZdlPv(i32*) local_unnamed_addr

declare i32 @__dynamic_cast(i32, i32, i32, i32) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @__cxa_rethrow() local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @_ZNSt8ios_base4InitC1Ev() local_unnamed_addr

declare i32 @__cxa_end_catch() local_unnamed_addr

declare i32 @__cxa_throw(i32, i32, i32) local_unnamed_addr

declare void @_Unwind_Resume(%_Unwind_Exception*) local_unnamed_addr

declare i32 @__asm_hlt() local_unnamed_addr

!0 = !{i64 4104}
!1 = !{i64 4127}
!2 = !{i64 4132}
!3 = !{i64 4141}
!4 = !{i64 4160}
!5 = !{i64 4176}
!6 = !{i64 4192}
!7 = !{i64 4208}
!8 = !{i64 4224}
!9 = !{i64 4240}
!10 = !{i64 4256}
!11 = !{i64 4272}
!12 = !{i64 4288}
!13 = !{i64 4304}
!14 = !{i64 4320}
!15 = !{i64 4336}
!16 = !{i64 4352}
!17 = !{i64 4368}
!18 = !{i64 4384}
!19 = !{i64 4400}
!20 = !{i64 4434}
!21 = !{i64 4441}
!22 = !{i64 4449}
!23 = !{i64 4455}
!24 = !{i64 4463}
!25 = !{i64 4464}
!26 = !{i64 4474}
!27 = !{i64 4495}
!28 = !{i64 4512}
!29 = !{i64 4518}
!30 = !{i64 4523}
!31 = !{i64 4527}
!32 = !{i64 4531}
!33 = !{i64 4544}
!34 = !{i64 4561}
!35 = !{i64 4600}
!36 = !{i64 4608}
!37 = !{i64 4678}
!38 = !{i64 4688}
!39 = !{i64 4696}
!40 = !{i64 4712}
!41 = !{i64 4719}
!42 = !{i64 4721}
!43 = !{i64 4727}
!44 = !{i64 4729}
!45 = !{i64 4742}
!46 = !{i64 4747}
!47 = !{i64 4806}
!48 = !{i64 4811}
!49 = !{i64 4825}
!50 = !{i64 4836}
!51 = !{i64 4844}
!52 = !{i64 4848}
!53 = !{i64 4940}
!54 = !{i64 4964}
!55 = !{i64 4969}
!56 = !{i64 4978}
!57 = !{i64 5004}
!58 = !{i64 5016}
!59 = !{i64 5018}
!60 = !{i64 5021}
!61 = !{i64 5060}
!62 = !{i64 5077}
!63 = !{i64 5093}
!64 = !{i64 5109}
!65 = !{i64 5125}
!66 = !{i64 5141}
!67 = !{i64 5157}
!68 = !{i64 5173}
!69 = !{i64 5184}
!70 = !{i64 5210}
!71 = !{i64 5215}
!72 = !{i64 5221}
!73 = !{i64 5242}
!74 = !{i64 5357}
!75 = !{i64 5360}
!76 = !{i64 5367}
!77 = !{i64 5370}
!78 = !{i64 5372}
!79 = !{i64 5379}
!80 = !{i64 5381}
!81 = !{i64 5386}
!82 = !{i64 5391}
!83 = !{i64 5405}
!84 = !{i64 5406}
!85 = !{i64 5409}
!86 = !{i64 5423}
!87 = !{i64 5429}
!88 = !{i64 5464}
!89 = !{i64 5472}
!90 = !{i64 5478}
!91 = !{i64 5491}
!92 = !{i64 5501}
!93 = !{i64 5507}
!94 = !{i64 5509}
!95 = !{i64 5515}
!96 = !{i64 5526}
!97 = !{i64 5534}
!98 = !{i64 5546}
!99 = !{i64 5549}
!100 = !{i64 5560}
!101 = !{i64 5568}
!102 = !{i64 5574}
!103 = !{i64 5576}
!104 = !{i64 5586}
!105 = !{i64 5606}
!106 = !{i64 5618}
!107 = !{i64 5654}
!108 = !{i64 5660}
!109 = !{i64 5661}
!110 = !{i64 5729}
!111 = !{i64 5754}
!112 = !{i64 5770}
!113 = !{i64 5777}
!114 = !{i64 5778}
!115 = !{i64 5806}
!116 = !{i64 5813}
!117 = !{i64 5814}
!118 = !{i64 5822}
!119 = !{i64 5830}
!120 = !{i64 5831}
!121 = !{i64 5839}
!122 = !{i64 5847}
!123 = !{i64 5848}
!124 = !{i64 5856}
!125 = !{i64 5867}
!126 = !{i64 5868}
!127 = !{i64 5876}
!128 = !{i64 5884}
!129 = !{i64 5885}
!130 = !{i64 5893}
!131 = !{i64 5901}
!132 = !{i64 5902}
!133 = !{i64 5910}
!134 = !{i64 5918}
!135 = !{i64 5919}
!136 = !{i64 5927}
!137 = !{i64 5935}
!138 = !{i64 5936}
!139 = !{i64 5944}
!140 = !{i64 5952}
!141 = !{i64 5959}
!142 = !{i64 5960}
!143 = !{i64 5968}
!144 = !{i64 5979}
!145 = !{i64 5980}
!146 = !{i64 5990}
!147 = !{i64 5998}
!148 = !{i64 6004}
!149 = !{i64 6017}
!150 = !{i64 6027}
!151 = !{i64 6033}
!152 = !{i64 6035}
!153 = !{i64 6041}
!154 = !{i64 6052}
!155 = !{i64 6075}
!156 = !{i64 6086}
!157 = !{i64 6112}
!158 = !{i64 6138}
!159 = !{i64 6145}
!160 = !{i64 6146}
!161 = !{i64 6158}
!162 = !{i64 6176}
!163 = !{i64 6187}
!164 = !{i64 6200}
!165 = !{i64 6202}
!166 = !{i64 6205}
!167 = !{i64 6208}
!168 = !{i64 6216}
!169 = !{i64 6220}
!170 = !{i64 6224}
!171 = !{i64 6249}
!172 = !{i64 6251}
!173 = !{i64 6253}
!174 = !{i64 6255}
!175 = !{i64 6258}
!176 = !{i64 6276}
!177 = !{i64 6283}
!178 = !{i64 6293}
!179 = !{i64 6299}
!180 = !{i64 6305}
!181 = !{i64 6308}
!182 = !{i64 6311}
!183 = !{i64 6315}
!184 = !{i64 6320}
!185 = !{i64 6326}
!186 = !{i64 6328}
!187 = !{i64 6334}
!188 = !{i64 6337}
!189 = !{i64 6339}
!190 = !{i64 6342}
!191 = !{i64 6356}
!192 = !{i64 6359}
!193 = !{i64 6372}
!194 = !{i64 6379}
!195 = !{i64 6384}
!196 = !{i64 6392}
!197 = !{i64 6398}
!198 = !{i64 6400}
!199 = !{i64 6403}
!200 = !{i64 6406}
!201 = !{i64 6409}
!202 = !{i64 6413}
!203 = !{i64 6440}
!204 = !{i64 6452}
!205 = !{i64 6455}
!206 = !{i64 6487}
!207 = !{i64 6496}
!208 = !{i64 6517}
!209 = !{i64 6528}
!210 = !{i64 6567}
!211 = !{i64 6576}
!212 = !{i64 6597}
!213 = !{i64 6608}
!214 = !{i64 6612}
!215 = !{i64 6623}
!216 = !{i64 6629}
!217 = !{i64 6632}
!218 = !{i64 6658}
!219 = !{i64 6664}
!220 = !{i64 6667}
!221 = !{i64 6673}
!222 = !{i64 6692}
!223 = !{i64 6703}
!224 = !{i64 6712}
