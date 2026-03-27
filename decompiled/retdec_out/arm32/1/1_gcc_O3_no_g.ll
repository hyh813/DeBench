source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@0 = external local_unnamed_addr global i32
@global_var_2300c = local_unnamed_addr global i32 66644
@global_var_23010 = local_unnamed_addr global i32 66644
@global_var_23014 = local_unnamed_addr global i32 66644
@global_var_23018 = local_unnamed_addr global i32 66644
@global_var_2301c = local_unnamed_addr global i32 66644
@global_var_23020 = local_unnamed_addr global i32 66644
@global_var_23024 = local_unnamed_addr global i32 66644
@global_var_23028 = local_unnamed_addr global i32 66644
@global_var_2302c = local_unnamed_addr global i32 66644
@global_var_23030 = local_unnamed_addr global i32 66644
@global_var_10534 = local_unnamed_addr constant i32 76492
@global_var_22f0c = global i32 1
@global_var_23000 = local_unnamed_addr global i32* @global_var_22f0c
@global_var_10538 = local_unnamed_addr constant i32 56
@global_var_23038 = local_unnamed_addr global i32 66784
@global_var_10558 = local_unnamed_addr constant i32 76468
@global_var_1055c = local_unnamed_addr constant i32 52
@global_var_23034 = local_unnamed_addr global i32 0
@global_var_10580 = local_unnamed_addr constant i32 143428
@global_var_10584 = local_unnamed_addr constant i32 143428
@global_var_10588 = local_unnamed_addr constant i32 0
@global_var_105b8 = local_unnamed_addr constant i32 143428
@global_var_105bc = local_unnamed_addr constant i32 143428
@global_var_105c0 = local_unnamed_addr constant i32 0
@global_var_105e8 = local_unnamed_addr constant i32 143432
@global_var_106fc = local_unnamed_addr constant i32 143440
@global_var_23050 = global i32 0
@global_var_107f8 = local_unnamed_addr constant i32 74072
@global_var_12158 = local_unnamed_addr constant i32 15
@global_var_108c0 = local_unnamed_addr constant [5 x i8] c"gfff\00"
@global_var_108e8 = local_unnamed_addr constant [5 x i8] c"gfff\00"
@global_var_10bc0 = local_unnamed_addr constant i32 72536
@global_var_10bc4 = local_unnamed_addr constant i32 72604
@global_var_11b9c = constant [26 x i8] c"CF-L1-02 (single_if): %d\0A\00"
@global_var_10bc8 = local_unnamed_addr constant i32 72572
@global_var_11b7c = constant [31 x i8] c"CF-L1-01 (sequential_ops): %d\0A\00"
@global_var_10bcc = local_unnamed_addr constant i32 72632
@global_var_11bb8 = constant [24 x i8] c"CF-L1-03 (if_else): %d\0A\00"
@global_var_10bd0 = local_unnamed_addr constant i32 72656
@global_var_11bd0 = constant [28 x i8] c"CF-L1-04 (nested_if_2): %d\0A\00"
@global_var_10bd4 = local_unnamed_addr constant i32 72684
@global_var_11bec = constant [31 x i8] c"CF-L1-05 (nested_if_deep): %d\0A\00"
@global_var_10bd8 = local_unnamed_addr constant i32 72716
@global_var_11c0c = constant [32 x i8] c"CF-L1-06 (if_elseif_chain): %d\0A\00"
@global_var_10bdc = local_unnamed_addr constant i32 72748
@global_var_11c2c = constant [31 x i8] c"CF-L1-07 (if_elseif_long): %d\0A\00"
@global_var_10be0 = local_unnamed_addr constant i32 72780
@global_var_11c4c = constant [29 x i8] c"CF-L1-08 (switch_small): %d\0A\00"
@global_var_10be4 = local_unnamed_addr constant i32 72812
@global_var_11c6c = constant [29 x i8] c"CF-L1-09 (switch_large): %d\0A\00"
@global_var_10be8 = local_unnamed_addr constant i32 72844
@global_var_11c8c = constant [31 x i8] c"CF-L1-10 (switch_default): %d\0A\00"
@global_var_10bec = local_unnamed_addr constant i32 72876
@global_var_11cac = constant [35 x i8] c"CF-L1-11 (switch_fallthrough): %d\0A\00"
@global_var_10bf0 = local_unnamed_addr constant i32 72912
@global_var_11cd0 = constant [31 x i8] c"CF-L1-12 (loop_for_fixed): %d\0A\00"
@global_var_10bf4 = local_unnamed_addr constant i32 72944
@global_var_11cf0 = constant [27 x i8] c"CF-L1-13 (loop_while): %d\0A\00"
@global_var_10bf8 = local_unnamed_addr constant i32 73032
@global_var_11d48 = constant [27 x i8] c"CF-L1-16 (loop_break): %d\0A\00"
@global_var_10bfc = local_unnamed_addr constant i32 72972
@global_var_11d0c = constant [29 x i8] c"CF-L1-14 (loop_dowhile): %d\0A\00"
@global_var_10c00 = local_unnamed_addr constant i32 73004
@global_var_11d2c = constant [28 x i8] c"CF-L1-15 (loop_nested): %d\0A\00"
@global_var_10c04 = local_unnamed_addr constant i32 73092
@global_var_11d84 = constant [29 x i8] c"CF-L1-18 (goto_forward): %d\0A\00"
@global_var_10c08 = local_unnamed_addr constant i32 73060
@global_var_11d64 = constant [30 x i8] c"CF-L1-17 (loop_continue): %d\0A\00"
@global_var_10c0c = local_unnamed_addr constant i32 73156
@global_var_11dc4 = constant [27 x i8] c"CF-L1-20 (ternary_op): %d\0A\00"
@global_var_10c10 = local_unnamed_addr constant i32 73124
@global_var_11da4 = constant [30 x i8] c"CF-L1-19 (goto_backward): %d\0A\00"
@global_var_10d20 = local_unnamed_addr constant i32 1001
@global_var_11118 = local_unnamed_addr constant i32 74088
@global_var_12168 = local_unnamed_addr constant i32 67096
@global_var_1111c = local_unnamed_addr constant i32 143112
@global_var_22f08 = local_unnamed_addr global i32 0
@global_var_1216c = local_unnamed_addr constant i32 67104
@global_var_12170 = local_unnamed_addr constant i32 67056
@global_var_113a0 = local_unnamed_addr constant i32 143112
@global_var_113a4 = local_unnamed_addr constant i32 73184
@global_var_113a8 = local_unnamed_addr constant i32 73220
@global_var_11e04 = constant [32 x i8] c"CF-L2-01 (loop_multi_exit): %d\0A\00"
@global_var_113ac = local_unnamed_addr constant i32 1001
@global_var_113b0 = local_unnamed_addr constant i32 73252
@global_var_11e24 = constant [30 x i8] c"CF-L2-02 (infinite_loop): %d\0A\00"
@global_var_113b4 = local_unnamed_addr constant i32 73284
@global_var_11e44 = constant [29 x i8] c"CF-L2-03 (multi_return): %d\0A\00"
@global_var_113b8 = local_unnamed_addr constant i32 73316
@global_var_11e64 = constant [35 x i8] c"CF-L2-04 (conditional_return): %d\0A\00"
@global_var_113bc = local_unnamed_addr constant i32 74100
@global_var_12174 = local_unnamed_addr constant i32 1
@global_var_12178 = local_unnamed_addr constant i32 2
@global_var_1217c = local_unnamed_addr constant i32 3
@global_var_12180 = local_unnamed_addr constant i32 4
@global_var_12184 = local_unnamed_addr constant i32 5
@global_var_12188 = local_unnamed_addr constant i32 6
@global_var_1218c = local_unnamed_addr constant i32 7
@global_var_12190 = local_unnamed_addr constant i32 8
@global_var_113c0 = local_unnamed_addr constant i32 73352
@global_var_11e88 = constant [29 x i8] c"CF-L2-05 (duffs_device): %d\0A\00"
@global_var_113c4 = local_unnamed_addr constant i32 73384
@global_var_11ea8 = constant [34 x i8] c"CF-L2-06 (loop_complex_cond): %d\0A\00"
@global_var_113c8 = local_unnamed_addr constant i32 73420
@global_var_11ecc = constant [32 x i8] c"CF-L2-07 (loop_modify_var): %d\0A\00"
@global_var_113cc = local_unnamed_addr constant i32 73452
@global_var_11eec = constant [36 x i8] c"CF-L2-08 (loop_external_state): %d\0A\00"
@global_var_113d0 = local_unnamed_addr constant i32 73488
@global_var_11f10 = constant [36 x i8] c"CF-L2-09 (recursion_factorial): %d\0A\00"
@global_var_113d4 = local_unnamed_addr constant i32 73524
@global_var_11f34 = constant [31 x i8] c"CF-L2-10 (tail_recursion): %d\0A\00"
@global_var_113d8 = local_unnamed_addr constant i32 73556
@global_var_11f54 = constant [35 x i8] c"CF-L2-11 (indirect_recursion): %d\0A\00"
@global_var_113dc = local_unnamed_addr constant i32 73592
@global_var_11f78 = constant [30 x i8] c"CF-L2-12 (call_func_ptr): %d\0A\00"
@global_var_113e0 = local_unnamed_addr constant i32 73624
@global_var_11f98 = constant [36 x i8] c"CF-L2-13 (call_func_ptr_array): %d\0A\00"
@global_var_113e4 = local_unnamed_addr constant i32 73660
@global_var_11fbc = constant [38 x i8] c"CF-L2-15 (process_with_callback): %d\0A\00"
@global_var_11448 = local_unnamed_addr constant i32 143440
@global_var_1151c = local_unnamed_addr constant i32 143112
@global_var_11520 = local_unnamed_addr constant i32 74132
@global_var_12194 = local_unnamed_addr constant i32 67112
@global_var_12198 = local_unnamed_addr constant i32 67120
@global_var_1219c = local_unnamed_addr constant i32 67128
@global_var_121a0 = local_unnamed_addr constant i32 67136
@global_var_121a4 = local_unnamed_addr constant i32 67164
@global_var_121a8 = local_unnamed_addr constant i32 67196
@global_var_121ac = local_unnamed_addr constant i32 67204
@global_var_121b0 = local_unnamed_addr constant i32 67212
@global_var_121b4 = local_unnamed_addr constant i32 67220
@global_var_121b8 = local_unnamed_addr constant i32 67228
@global_var_1154c = local_unnamed_addr constant i32 67056
@global_var_11550 = local_unnamed_addr constant i32 67104
@global_var_11554 = local_unnamed_addr constant i32 67096
@global_var_1164c = local_unnamed_addr constant i32 143112
@global_var_11650 = local_unnamed_addr constant i32 74172
@global_var_121bc = local_unnamed_addr constant i32 67236
@global_var_121c0 = local_unnamed_addr constant i32 67252
@global_var_121c4 = local_unnamed_addr constant i32 67276
@global_var_121c8 = local_unnamed_addr constant i32 67284
@global_var_116dc = local_unnamed_addr constant i32 143112
@global_var_116e0 = local_unnamed_addr constant i32 74188
@global_var_121cc = local_unnamed_addr constant i32 71368
@global_var_121d0 = local_unnamed_addr constant i32 71360
@global_var_116c0 = local_unnamed_addr constant i32 -476053494
@global_var_121d4 = local_unnamed_addr constant i32 71352
@global_var_121d8 = local_unnamed_addr constant i32 71316
@global_var_11838 = local_unnamed_addr constant i32 143112
@global_var_1183c = local_unnamed_addr constant i32 73700
@global_var_11840 = local_unnamed_addr constant i32 73736
@global_var_12008 = constant [31 x i8] c"CF-L3-01 (non_local_jump): %d\0A\00"
@global_var_11844 = local_unnamed_addr constant i32 73768
@global_var_12028 = constant [30 x i8] c"CF-L3-02 (cpp_exception): %d\0A\00"
@global_var_11848 = local_unnamed_addr constant i32 73800
@global_var_12048 = constant [33 x i8] c"CF-L3-03 (large_jump_table): %d\0A\00"
@global_var_1184c = local_unnamed_addr constant i32 73836
@global_var_1206c = constant [37 x i8] c"CF-L3-04 (conditional_func_ptr): %d\0A\00"
@global_var_11850 = local_unnamed_addr constant i32 73876
@global_var_12094 = constant [30 x i8] c"CF-L3-05 (state_machine): %d\0A\00"
@global_var_11854 = local_unnamed_addr constant i32 73908
@global_var_120b4 = constant [31 x i8] c"CF-L3-06 (fsm_func_table): %d\0A\00"
@global_var_11858 = local_unnamed_addr constant i32 74204
@global_var_121dc = local_unnamed_addr constant i32 0
@global_var_121e0 = local_unnamed_addr constant i32 1
@global_var_121e4 = local_unnamed_addr constant i32 2
@global_var_121e8 = local_unnamed_addr constant i32 3
@global_var_1185c = local_unnamed_addr constant i32 73940
@global_var_120d4 = constant [30 x i8] c"CF-L3-07 (computed_goto): %d\0A\00"
@global_var_11860 = local_unnamed_addr constant i32 73972
@global_var_120f4 = constant [30 x i8] c"CF-L3-08 (obfuscated_cf): %d\0A\00"
@global_var_11864 = local_unnamed_addr constant i32 74004
@global_var_12114 = constant [33 x i8] c"CF-L3-09 (opaque_predicate): %d\0A\00"
@global_var_11868 = local_unnamed_addr constant i32 74040
@global_var_12138 = constant [32 x i8] c"CF-L3-10 (overlapped_code): %d\0A\00"
@1 = external global i32
@2 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\9F\BA\E7\A1\80\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_11b58 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @2, i32 0, i32 0)
@3 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\AB\98\E7\BA\A7\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_11de0 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @3, i32 0, i32 0)
@4 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\9E\81\E7\AB\AF\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_11fe4 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @4, i32 0, i32 0)

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_104e0:
  %0 = call i32 @test_control_flow_l1(), !insn.addr !0
  %1 = call i32 @test_control_flow_l2(), !insn.addr !1
  %2 = call i32 @test_control_flow_l3(), !insn.addr !2
  ret i32 0, !insn.addr !3
}

define i32 @non_local_jump.constprop.0() local_unnamed_addr {
dec_label_pc_106e0:
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_23050 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !4
  %1 = icmp eq i32 %0, 0, !insn.addr !5
  %not. = icmp ne i1 %1, true
  %spec.select = sext i1 %not. to i32
  %r0.1 = select i1 %1, i32 10, i32 %spec.select
  ret i32 %r0.1, !insn.addr !6

; uselistorder directives
  uselistorder i1 %1, { 1, 0 }
}

define i32 @test_control_flow_l1() local_unnamed_addr {
dec_label_pc_109e8:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_11b58 to i8*)), !insn.addr !7
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_11b7c, i32 0, i32 0), i32 21), !insn.addr !8
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_11b9c, i32 0, i32 0), i32 20), !insn.addr !9
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_11b9c, i32 0, i32 0), i32 -5), !insn.addr !10
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_11bb8, i32 0, i32 0), i32 1), !insn.addr !11
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_11bb8, i32 0, i32 0), i32 0), !insn.addr !12
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_11bd0, i32 0, i32 0), i32 15), !insn.addr !13
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_11bd0, i32 0, i32 0), i32 10), !insn.addr !14
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_11bd0, i32 0, i32 0), i32 0), !insn.addr !15
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_11bec, i32 0, i32 0), i32 5), !insn.addr !16
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_11c0c, i32 0, i32 0), i32 20), !insn.addr !17
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_11c2c, i32 0, i32 0), i32 400), !insn.addr !18
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_11c4c, i32 0, i32 0), i32 50), !insn.addr !19
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_11c6c, i32 0, i32 0), i32 70), !insn.addr !20
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_11c8c, i32 0, i32 0), i32 0), !insn.addr !21
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_11cac, i32 0, i32 0), i32 21), !insn.addr !22
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_11cd0, i32 0, i32 0), i32 45), !insn.addr !23
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_11cf0, i32 0, i32 0), i32 5), !insn.addr !24
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_11d0c, i32 0, i32 0), i32 4), !insn.addr !25
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_11d2c, i32 0, i32 0), i32 12), !insn.addr !26
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_11d48, i32 0, i32 0), i32 2), !insn.addr !27
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_11d48, i32 0, i32 0), i32 -1), !insn.addr !28
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_11d64, i32 0, i32 0), i32 25), !insn.addr !29
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_11d84, i32 0, i32 0), i32 50), !insn.addr !30
  %24 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_11d84, i32 0, i32 0), i32 -6), !insn.addr !31
  %25 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_11da4, i32 0, i32 0), i32 120), !insn.addr !32
  %26 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_11dc4, i32 0, i32 0), i32 10), !insn.addr !33
  %27 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_11dc4, i32 0, i32 0), i32 8), !insn.addr !34
  ret i32 %27, !insn.addr !34
}

define i32 @duffs_device(i32* %arg1, i32* %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_10d6c:
  %merge.reg2mem = alloca i32, !insn.addr !35
  %ip.6.reg2mem = alloca i32, !insn.addr !35
  %r3.7.reg2mem = alloca i32, !insn.addr !35
  %r1.7.reg2mem = alloca i32, !insn.addr !35
  %ip.5.reg2mem = alloca i32, !insn.addr !35
  %r3.6.reg2mem = alloca i32, !insn.addr !35
  %r1.6.reg2mem = alloca i32, !insn.addr !35
  %ip.4.reg2mem = alloca i32, !insn.addr !35
  %r3.4.reg2mem = alloca i32, !insn.addr !35
  %r1.4.reg2mem = alloca i32, !insn.addr !35
  %ip.3.reg2mem = alloca i32, !insn.addr !35
  %r3.3.reg2mem = alloca i32, !insn.addr !35
  %r1.3.reg2mem = alloca i32, !insn.addr !35
  %ip.2.reg2mem = alloca i32, !insn.addr !35
  %r3.2.reg2mem = alloca i32, !insn.addr !35
  %r1.2.reg2mem = alloca i32, !insn.addr !35
  %ip.1.reg2mem = alloca i32, !insn.addr !35
  %r3.1.reg2mem = alloca i32, !insn.addr !35
  %r1.1.reg2mem = alloca i32, !insn.addr !35
  %ip.0.reg2mem = alloca i32, !insn.addr !35
  %r3.0.reg2mem = alloca i32, !insn.addr !35
  %r1.0.reg2mem = alloca i32, !insn.addr !35
  %0 = icmp slt i32 %arg3, 1, !insn.addr !36
  store i32 -1, i32* %merge.reg2mem, !insn.addr !36
  br i1 %0, label %dec_label_pc_10e10, label %dec_label_pc_10d74, !insn.addr !36

dec_label_pc_10d74:                               ; preds = %dec_label_pc_10d6c
  %1 = ptrtoint i32* %arg2 to i32
  %2 = ptrtoint i32* %arg1 to i32
  %3 = urem i32 %arg3, 8, !insn.addr !37
  %4 = add i32 %arg3, 7, !insn.addr !38
  %5 = add nsw i32 %3, -1, !insn.addr !39
  %6 = ashr i32 %4, 3, !insn.addr !40
  store i32 %5, i32* @0, align 4, !insn.addr !41
  %trunc = trunc i32 %arg3 to i3
  store i32 %1, i32* %r1.0.reg2mem, !insn.addr !41
  store i32 %2, i32* %r3.0.reg2mem, !insn.addr !41
  store i32 %6, i32* %ip.0.reg2mem, !insn.addr !41
  store i32 %1, i32* %r1.1.reg2mem, !insn.addr !41
  store i32 %2, i32* %r3.1.reg2mem, !insn.addr !41
  store i32 %6, i32* %ip.1.reg2mem, !insn.addr !41
  store i32 %1, i32* %r1.2.reg2mem, !insn.addr !41
  store i32 %2, i32* %r3.2.reg2mem, !insn.addr !41
  store i32 %6, i32* %ip.2.reg2mem, !insn.addr !41
  store i32 %1, i32* %r1.3.reg2mem, !insn.addr !41
  store i32 %2, i32* %r3.3.reg2mem, !insn.addr !41
  store i32 %6, i32* %ip.3.reg2mem, !insn.addr !41
  store i32 %1, i32* %r1.4.reg2mem, !insn.addr !41
  store i32 %2, i32* %r3.4.reg2mem, !insn.addr !41
  store i32 %6, i32* %ip.4.reg2mem, !insn.addr !41
  store i32 %1, i32* %r1.6.reg2mem, !insn.addr !41
  store i32 %2, i32* %r3.6.reg2mem, !insn.addr !41
  store i32 %6, i32* %ip.5.reg2mem, !insn.addr !41
  store i32 %1, i32* %r1.7.reg2mem, !insn.addr !41
  store i32 %2, i32* %r3.7.reg2mem, !insn.addr !41
  store i32 %6, i32* %ip.6.reg2mem, !insn.addr !41
  switch i3 %trunc, label %dec_label_pc_10df4 [
    i3 1, label %dec_label_pc_10ddc
    i3 2, label %dec_label_pc_10dd4
    i3 3, label %dec_label_pc_10dcc
    i3 -4, label %dec_label_pc_10dc4
    i3 -3, label %dec_label_pc_10dbc
    i3 -2, label %dec_label_pc_10db4
    i3 -1, label %dec_label_pc_10dfc
  ], !insn.addr !41

dec_label_pc_10db4:                               ; preds = %dec_label_pc_10d74
  %7 = add i32 %1, 4, !insn.addr !42
  store i32 %1, i32* %arg1, align 4, !insn.addr !43
  %8 = add i32 %2, 4, !insn.addr !43
  store i32 %7, i32* %r1.0.reg2mem, !insn.addr !43
  store i32 %8, i32* %r3.0.reg2mem, !insn.addr !43
  store i32 %6, i32* %ip.0.reg2mem, !insn.addr !43
  br label %dec_label_pc_10dbc, !insn.addr !43

dec_label_pc_10dbc:                               ; preds = %dec_label_pc_10dfc, %dec_label_pc_10db4, %dec_label_pc_10d74
  %ip.0.reload = load i32, i32* %ip.0.reg2mem
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  %r1.0.reload = load i32, i32* %r1.0.reg2mem
  %9 = inttoptr i32 %r1.0.reload to i32*, !insn.addr !44
  %10 = load i32, i32* %9, align 4, !insn.addr !44
  %11 = add i32 %r1.0.reload, 4, !insn.addr !44
  %12 = inttoptr i32 %r3.0.reload to i32*, !insn.addr !45
  store i32 %10, i32* %12, align 4, !insn.addr !45
  %13 = add i32 %r3.0.reload, 4, !insn.addr !45
  store i32 %11, i32* %r1.1.reg2mem, !insn.addr !45
  store i32 %13, i32* %r3.1.reg2mem, !insn.addr !45
  store i32 %ip.0.reload, i32* %ip.1.reg2mem, !insn.addr !45
  br label %dec_label_pc_10dc4, !insn.addr !45

dec_label_pc_10dc4:                               ; preds = %dec_label_pc_10dbc, %dec_label_pc_10d74
  %ip.1.reload = load i32, i32* %ip.1.reg2mem
  %r3.1.reload = load i32, i32* %r3.1.reg2mem
  %r1.1.reload = load i32, i32* %r1.1.reg2mem
  %14 = inttoptr i32 %r1.1.reload to i32*, !insn.addr !46
  %15 = load i32, i32* %14, align 4, !insn.addr !46
  %16 = add i32 %r1.1.reload, 4, !insn.addr !46
  %17 = inttoptr i32 %r3.1.reload to i32*, !insn.addr !47
  store i32 %15, i32* %17, align 4, !insn.addr !47
  %18 = add i32 %r3.1.reload, 4, !insn.addr !47
  store i32 %16, i32* %r1.2.reg2mem, !insn.addr !47
  store i32 %18, i32* %r3.2.reg2mem, !insn.addr !47
  store i32 %ip.1.reload, i32* %ip.2.reg2mem, !insn.addr !47
  br label %dec_label_pc_10dcc, !insn.addr !47

dec_label_pc_10dcc:                               ; preds = %dec_label_pc_10dc4, %dec_label_pc_10d74
  %ip.2.reload = load i32, i32* %ip.2.reg2mem
  %r3.2.reload = load i32, i32* %r3.2.reg2mem
  %r1.2.reload = load i32, i32* %r1.2.reg2mem
  %19 = inttoptr i32 %r1.2.reload to i32*, !insn.addr !48
  %20 = load i32, i32* %19, align 4, !insn.addr !48
  %21 = add i32 %r1.2.reload, 4, !insn.addr !48
  %22 = inttoptr i32 %r3.2.reload to i32*, !insn.addr !49
  store i32 %20, i32* %22, align 4, !insn.addr !49
  %23 = add i32 %r3.2.reload, 4, !insn.addr !49
  store i32 %21, i32* %r1.3.reg2mem, !insn.addr !49
  store i32 %23, i32* %r3.3.reg2mem, !insn.addr !49
  store i32 %ip.2.reload, i32* %ip.3.reg2mem, !insn.addr !49
  br label %dec_label_pc_10dd4, !insn.addr !49

dec_label_pc_10dd4:                               ; preds = %dec_label_pc_10dcc, %dec_label_pc_10d74
  %ip.3.reload = load i32, i32* %ip.3.reg2mem
  %r3.3.reload = load i32, i32* %r3.3.reg2mem
  %r1.3.reload = load i32, i32* %r1.3.reg2mem
  %24 = inttoptr i32 %r1.3.reload to i32*, !insn.addr !50
  %25 = load i32, i32* %24, align 4, !insn.addr !50
  %26 = add i32 %r1.3.reload, 4, !insn.addr !50
  %27 = inttoptr i32 %r3.3.reload to i32*, !insn.addr !51
  store i32 %25, i32* %27, align 4, !insn.addr !51
  %28 = add i32 %r3.3.reload, 4, !insn.addr !51
  store i32 %26, i32* %r1.4.reg2mem, !insn.addr !51
  store i32 %28, i32* %r3.4.reg2mem, !insn.addr !51
  store i32 %ip.3.reload, i32* %ip.4.reg2mem, !insn.addr !51
  br label %dec_label_pc_10ddc, !insn.addr !51

dec_label_pc_10ddc:                               ; preds = %dec_label_pc_10dd4, %dec_label_pc_10d74
  %ip.4.reload = load i32, i32* %ip.4.reg2mem
  %r3.4.reload = load i32, i32* %r3.4.reg2mem
  %r1.4.reload = load i32, i32* %r1.4.reg2mem
  %29 = inttoptr i32 %r1.4.reload to i32*, !insn.addr !52
  %30 = load i32, i32* %29, align 4, !insn.addr !52
  %31 = add i32 %ip.4.reload, -1, !insn.addr !53
  %32 = icmp eq i32 %ip.4.reload, 1, !insn.addr !53
  %33 = inttoptr i32 %r3.4.reload to i32*, !insn.addr !54
  store i32 %30, i32* %33, align 4, !insn.addr !54
  %34 = add i32 %r1.4.reload, 4
  %35 = add i32 %r3.4.reload, 4
  store i32 %34, i32* %r1.6.reg2mem, !insn.addr !55
  store i32 %35, i32* %r3.6.reg2mem, !insn.addr !55
  store i32 %31, i32* %ip.5.reg2mem, !insn.addr !55
  store i32 %arg3, i32* %merge.reg2mem, !insn.addr !55
  br i1 %32, label %dec_label_pc_10e10, label %dec_label_pc_10df4, !insn.addr !55

dec_label_pc_10df4:                               ; preds = %dec_label_pc_10d74, %dec_label_pc_10ddc
  %ip.5.reload = load i32, i32* %ip.5.reg2mem
  %r3.6.reload = load i32, i32* %r3.6.reg2mem
  %r1.6.reload = load i32, i32* %r1.6.reg2mem
  %36 = inttoptr i32 %r1.6.reload to i32*, !insn.addr !56
  %37 = load i32, i32* %36, align 4, !insn.addr !56
  %38 = add i32 %r1.6.reload, 4, !insn.addr !56
  %39 = inttoptr i32 %r3.6.reload to i32*, !insn.addr !57
  store i32 %37, i32* %39, align 4, !insn.addr !57
  %40 = add i32 %r3.6.reload, 4, !insn.addr !57
  store i32 %38, i32* %r1.7.reg2mem, !insn.addr !57
  store i32 %40, i32* %r3.7.reg2mem, !insn.addr !57
  store i32 %ip.5.reload, i32* %ip.6.reg2mem, !insn.addr !57
  br label %dec_label_pc_10dfc, !insn.addr !57

dec_label_pc_10dfc:                               ; preds = %dec_label_pc_10df4, %dec_label_pc_10d74
  %ip.6.reload = load i32, i32* %ip.6.reg2mem
  %r3.7.reload = load i32, i32* %r3.7.reg2mem
  %r1.7.reload = load i32, i32* %r1.7.reg2mem
  %41 = inttoptr i32 %r1.7.reload to i32*, !insn.addr !58
  %42 = load i32, i32* %41, align 4, !insn.addr !58
  %43 = add i32 %r1.7.reload, 4, !insn.addr !58
  %44 = inttoptr i32 %r3.7.reload to i32*, !insn.addr !59
  store i32 %42, i32* %44, align 4, !insn.addr !59
  %45 = add i32 %r3.7.reload, 4, !insn.addr !59
  %46 = inttoptr i32 %43 to i32*, !insn.addr !60
  %47 = load i32, i32* %46, align 4, !insn.addr !60
  %48 = add i32 %r1.7.reload, 8, !insn.addr !60
  %49 = inttoptr i32 %45 to i32*, !insn.addr !61
  store i32 %47, i32* %49, align 4, !insn.addr !61
  %50 = add i32 %r3.7.reload, 8, !insn.addr !61
  store i32 %48, i32* %r1.0.reg2mem, !insn.addr !62
  store i32 %50, i32* %r3.0.reg2mem, !insn.addr !62
  store i32 %ip.6.reload, i32* %ip.0.reg2mem, !insn.addr !62
  br label %dec_label_pc_10dbc, !insn.addr !62

dec_label_pc_10e10:                               ; preds = %dec_label_pc_10d6c, %dec_label_pc_10ddc
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !63

; uselistorder directives
  uselistorder i32 %r1.7.reload, { 1, 0, 2 }
  uselistorder i32 %r3.7.reload, { 1, 2, 0 }
  uselistorder i32 %r3.6.reload, { 1, 0 }
  uselistorder i32 %r1.4.reload, { 1, 0 }
  uselistorder i32 %r3.4.reload, { 1, 0 }
  uselistorder i32 %ip.4.reload, { 1, 0 }
  uselistorder i32 %r3.3.reload, { 1, 0 }
  uselistorder i32 %r3.2.reload, { 1, 0 }
  uselistorder i32 %r3.1.reload, { 1, 0 }
  uselistorder i32 %r3.0.reload, { 1, 0 }
  uselistorder i32 %6, { 7, 0, 1, 2, 3, 4, 5, 6 }
  uselistorder i32 %2, { 7, 0, 1, 2, 3, 4, 5, 6 }
  uselistorder i32 %1, { 7, 8, 0, 1, 2, 3, 4, 5, 6 }
  uselistorder i32* %r1.0.reg2mem, { 3, 0, 2, 1 }
  uselistorder i32* %r3.0.reg2mem, { 3, 0, 2, 1 }
  uselistorder i32* %ip.0.reg2mem, { 3, 0, 2, 1 }
  uselistorder i32* %r1.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r3.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %ip.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r1.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r3.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %ip.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r1.3.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r3.3.reg2mem, { 0, 2, 1 }
  uselistorder i32* %ip.3.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r1.4.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r3.4.reg2mem, { 0, 2, 1 }
  uselistorder i32* %ip.4.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r1.7.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r3.7.reg2mem, { 0, 2, 1 }
  uselistorder i32* %ip.6.reg2mem, { 0, 2, 1 }
  uselistorder i32* %merge.reg2mem, { 0, 2, 1 }
  uselistorder i32 7, { 1, 0 }
  uselistorder i32 %arg3, { 0, 2, 3, 1, 4 }
  uselistorder label %dec_label_pc_10e10, { 1, 0 }
  uselistorder label %dec_label_pc_10df4, { 1, 0 }
}

define i32 @test_control_flow_l2() local_unnamed_addr {
dec_label_pc_11170:
  %stack_var_-44 = alloca i32, align 4
  %stack_var_-76 = alloca i32, align 4
  %0 = load i32, i32* @global_var_22f08, align 4, !insn.addr !64
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_11de0 to i8*)), !insn.addr !65
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_11e04, i32 0, i32 0), i32 12), !insn.addr !66
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_11e24, i32 0, i32 0), i32 1001), !insn.addr !67
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_11e44, i32 0, i32 0), i32 -1), !insn.addr !68
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_11e44, i32 0, i32 0), i32 -2), !insn.addr !69
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_11e44, i32 0, i32 0), i32 4), !insn.addr !70
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_11e64, i32 0, i32 0), i32 10), !insn.addr !71
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_11e64, i32 0, i32 0), i32 5), !insn.addr !72
  store i32 1, i32* %stack_var_-76, align 4, !insn.addr !73
  %9 = call i32* @memset(i32* nonnull %stack_var_-44, i32 0, i32 32), !insn.addr !74
  %10 = call i32 @duffs_device(i32* nonnull %stack_var_-44, i32* nonnull %stack_var_-76, i32 8), !insn.addr !75
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_11e88, i32 0, i32 0), i32 %10), !insn.addr !76
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_11ea8, i32 0, i32 0), i32 18), !insn.addr !77
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_11ecc, i32 0, i32 0), i32 30), !insn.addr !78
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_11eec, i32 0, i32 0), i32 101), !insn.addr !79
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_11f10, i32 0, i32 0), i32 120), !insn.addr !80
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_11f34, i32 0, i32 0), i32 120), !insn.addr !81
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_11f54, i32 0, i32 0), i32 3), !insn.addr !82
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_11f78, i32 0, i32 0), i32 10), !insn.addr !83
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_11f98, i32 0, i32 0), i32 10), !insn.addr !84
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_11f98, i32 0, i32 0), i32 120), !insn.addr !85
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_11fbc, i32 0, i32 0), i32 30), !insn.addr !86
  %22 = load i32, i32* @global_var_22f08, align 4, !insn.addr !87
  %23 = icmp eq i32 %0, %22, !insn.addr !88
  br i1 %23, label %dec_label_pc_11388, label %dec_label_pc_1139c, !insn.addr !89

dec_label_pc_11388:                               ; preds = %dec_label_pc_11170
  ret i32 %21, !insn.addr !90

dec_label_pc_1139c:                               ; preds = %dec_label_pc_11170
  call void @__stack_chk_fail(), !insn.addr !91
  ret i32 ptrtoint (i32* @1 to i32), !insn.addr !91

; uselistorder directives
  uselistorder i32 30, { 1, 0 }
  uselistorder i32 8, { 3, 1, 2, 0, 4, 5 }
  uselistorder i32 4, { 0, 3, 4, 17, 18, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 1, 2 }
}

define i32 @non_local_jump(i32 %arg1) local_unnamed_addr {
dec_label_pc_113e8:
  %r0.1.reg2mem = alloca i32, !insn.addr !92
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_23050 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !93
  %1 = icmp eq i32 %0, 0, !insn.addr !94
  store i32 -1, i32* %r0.1.reg2mem, !insn.addr !95
  br i1 %1, label %dec_label_pc_11408, label %dec_label_pc_11420, !insn.addr !95

dec_label_pc_11408:                               ; preds = %dec_label_pc_113e8
  %2 = icmp slt i32 %arg1, 0, !insn.addr !96
  br i1 %2, label %dec_label_pc_1143c, label %dec_label_pc_11414, !insn.addr !97

dec_label_pc_11414:                               ; preds = %dec_label_pc_11408
  %3 = icmp slt i32 %arg1, 101, !insn.addr !98
  %4 = mul i32 %arg1, 2
  %spec.select = select i1 %3, i32 %4, i32 0
  %5 = icmp sgt i32 %arg1, 100, !insn.addr !99
  store i32 %spec.select, i32* %r0.1.reg2mem, !insn.addr !99
  br i1 %5, label %dec_label_pc_11430, label %dec_label_pc_11420, !insn.addr !99

dec_label_pc_11420:                               ; preds = %dec_label_pc_113e8, %dec_label_pc_11414
  %r0.1.reload = load i32, i32* %r0.1.reg2mem
  ret i32 %r0.1.reload, !insn.addr !100

dec_label_pc_11430:                               ; preds = %dec_label_pc_11414
  %6 = call i32 @__longjmp_chk(i32* nonnull @global_var_23050, i32 2), !insn.addr !101
  br label %dec_label_pc_1143c, !insn.addr !101

dec_label_pc_1143c:                               ; preds = %dec_label_pc_11430, %dec_label_pc_11408
  %7 = call i32 @__longjmp_chk(i32* nonnull @global_var_23050, i32 1), !insn.addr !102
  ret i32 %7, !insn.addr !102

; uselistorder directives
  uselistorder i32* %r0.1.reg2mem, { 0, 2, 1 }
  uselistorder i32 (i32*, i32)* @__longjmp_chk, { 1, 0 }
  uselistorder i32 101, { 1, 0 }
  uselistorder i32 ([1 x %__jmp_buf_tag])* @_setjmp, { 1, 0 }
  uselistorder i32 %arg1, { 1, 0, 3, 2 }
  uselistorder label %dec_label_pc_11420, { 1, 0 }
}

define i32 @computed_goto(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_11654:
  %0 = icmp ult i32 %arg2, 3, !insn.addr !103
  %1 = icmp ne i1 %0, true, !insn.addr !103
  %2 = icmp eq i32 %arg2, 3, !insn.addr !103
  %3 = icmp ne i1 %2, true, !insn.addr !104
  %4 = icmp eq i1 %1, %3, !insn.addr !104
  %spec.select = select i1 %4, i32 -1, i32 71368
  ret i32 %spec.select, !insn.addr !105

; uselistorder directives
  uselistorder i1 true, { 1, 2, 0 }
  uselistorder i32 3, { 3, 4, 0, 5, 1, 2 }
  uselistorder i32 %arg2, { 1, 0 }
}

define i32 @test_control_flow_l3() local_unnamed_addr {
dec_label_pc_1170c:
  %stack_var_-28 = alloca i32, align 4
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_11fe4 to i8*)), !insn.addr !106
  %1 = call i32 @non_local_jump.constprop.0(), !insn.addr !107
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_12008, i32 0, i32 0), i32 %1), !insn.addr !108
  %3 = call i32 @non_local_jump(i32 -5), !insn.addr !109
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_12008, i32 0, i32 0), i32 %3), !insn.addr !110
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_12028, i32 0, i32 0), i32 10), !insn.addr !111
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_12028, i32 0, i32 0), i32 -1), !insn.addr !112
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_12048, i32 0, i32 0), i32 15), !insn.addr !113
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_1206c, i32 0, i32 0), i32 10), !insn.addr !114
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_12094, i32 0, i32 0), i32 1), !insn.addr !115
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_120b4, i32 0, i32 0), i32 2), !insn.addr !116
  store i32 0, i32* %stack_var_-28, align 4, !insn.addr !117
  %11 = call i32 @computed_goto(i32* nonnull %stack_var_-28, i32 2), !insn.addr !118
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_120d4, i32 0, i32 0), i32 %11), !insn.addr !119
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_120f4, i32 0, i32 0), i32 10), !insn.addr !120
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_12114, i32 0, i32 0), i32 10), !insn.addr !121
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_12138, i32 0, i32 0), i32 16), !insn.addr !122
  ret i32 %15, !insn.addr !123

; uselistorder directives
  uselistorder i32 2, { 1, 2, 3, 0, 4, 5, 6 }
  uselistorder i32 -1, { 5, 2, 0, 6, 3, 4, 1, 7 }
  uselistorder i32 10, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0 }
  uselistorder i32 0, { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 1, 107, 108, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 97, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 98, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 99, 83, 84, 100, 85, 86, 87, 88, 89, 90, 109, 0, 91, 92, 93, 94, 95, 96, 101, 102, 103, 104, 105, 106 }
  uselistorder i32 1, { 25, 26, 27, 28, 29, 31, 30, 32, 33, 34, 35, 36, 37, 88, 38, 0, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 23, 50, 51, 52, 53, 54, 55, 56, 90, 89, 91, 24, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 81, 80, 82, 83, 84, 85, 86, 87 }
}

declare i32 @_setjmp([1 x %__jmp_buf_tag]) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

declare i32 @__printf_chk(i32, i8*, ...) local_unnamed_addr

declare i32 @__longjmp_chk(i32*, i32) local_unnamed_addr

!0 = !{i64 66788}
!1 = !{i64 66792}
!2 = !{i64 66796}
!3 = !{i64 66804}
!4 = !{i64 67304}
!5 = !{i64 67308}
!6 = !{i64 67320}
!7 = !{i64 68084}
!8 = !{i64 68100}
!9 = !{i64 68116}
!10 = !{i64 68132}
!11 = !{i64 68156}
!12 = !{i64 68172}
!13 = !{i64 68188}
!14 = !{i64 68204}
!15 = !{i64 68220}
!16 = !{i64 68236}
!17 = !{i64 68252}
!18 = !{i64 68268}
!19 = !{i64 68284}
!20 = !{i64 68300}
!21 = !{i64 68316}
!22 = !{i64 68332}
!23 = !{i64 68348}
!24 = !{i64 68364}
!25 = !{i64 68384}
!26 = !{i64 68400}
!27 = !{i64 68416}
!28 = !{i64 68436}
!29 = !{i64 68452}
!30 = !{i64 68468}
!31 = !{i64 68488}
!32 = !{i64 68504}
!33 = !{i64 68520}
!34 = !{i64 68540}
!35 = !{i64 68972}
!36 = !{i64 68976}
!37 = !{i64 68984}
!38 = !{i64 68988}
!39 = !{i64 68992}
!40 = !{i64 69000}
!41 = !{i64 69008}
!42 = !{i64 69044}
!43 = !{i64 69048}
!44 = !{i64 69052}
!45 = !{i64 69056}
!46 = !{i64 69060}
!47 = !{i64 69064}
!48 = !{i64 69068}
!49 = !{i64 69072}
!50 = !{i64 69076}
!51 = !{i64 69080}
!52 = !{i64 69084}
!53 = !{i64 69088}
!54 = !{i64 69092}
!55 = !{i64 69104}
!56 = !{i64 69108}
!57 = !{i64 69112}
!58 = !{i64 69116}
!59 = !{i64 69120}
!60 = !{i64 69124}
!61 = !{i64 69128}
!62 = !{i64 69132}
!63 = !{i64 69140}
!64 = !{i64 70016}
!65 = !{i64 70028}
!66 = !{i64 70044}
!67 = !{i64 70100}
!68 = !{i64 70116}
!69 = !{i64 70132}
!70 = !{i64 70148}
!71 = !{i64 70164}
!72 = !{i64 70180}
!73 = !{i64 70196}
!74 = !{i64 70220}
!75 = !{i64 70236}
!76 = !{i64 70252}
!77 = !{i64 70268}
!78 = !{i64 70344}
!79 = !{i64 70396}
!80 = !{i64 70412}
!81 = !{i64 70428}
!82 = !{i64 70444}
!83 = !{i64 70460}
!84 = !{i64 70476}
!85 = !{i64 70492}
!86 = !{i64 70508}
!87 = !{i64 70516}
!88 = !{i64 70524}
!89 = !{i64 70532}
!90 = !{i64 70540}
!91 = !{i64 70556}
!92 = !{i64 70632}
!93 = !{i64 70652}
!94 = !{i64 70656}
!95 = !{i64 70660}
!96 = !{i64 70668}
!97 = !{i64 70672}
!98 = !{i64 70680}
!99 = !{i64 70684}
!100 = !{i64 70692}
!101 = !{i64 70712}
!102 = !{i64 70724}
!103 = !{i64 71276}
!104 = !{i64 71300}
!105 = !{i64 71312}
!106 = !{i64 71464}
!107 = !{i64 71468}
!108 = !{i64 71484}
!109 = !{i64 71492}
!110 = !{i64 71508}
!111 = !{i64 71524}
!112 = !{i64 71540}
!113 = !{i64 71556}
!114 = !{i64 71572}
!115 = !{i64 71588}
!116 = !{i64 71604}
!117 = !{i64 71620}
!118 = !{i64 71632}
!119 = !{i64 71648}
!120 = !{i64 71664}
!121 = !{i64 71680}
!122 = !{i64 71696}
!123 = !{i64 71728}
