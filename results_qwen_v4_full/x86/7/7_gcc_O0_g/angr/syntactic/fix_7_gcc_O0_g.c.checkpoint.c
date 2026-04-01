// Angr Decompilation of 7_gcc_O0_g
// Platform: X86

#include <stddef.h>

unsigned int * __do_global_dtors_aux();
unsigned int __do_global_ctors_aux();
void *_ccall(unsigned long, unsigned long, unsigned int, unsigned int);
void frame_dummy();

/* CRT stub function _init removed by preprocessor */
void *_ccall(unsigned long a0, unsigned long a1, unsigned int a2, unsigned int a3)
{
 return (void *)0;
}

void frame_dummy()
{
 return;
}

typedef struct struct_0 {
 char padding_0[12000];
 int (*field_c)();
 int (*field_10)();
 int (*field_14)();
 int (*field_18)();
 int (*field_1c)();
 int (*field_20)();
 int (*field_24)();
 int (*field_28)();
 int (*field_2c)();
 int (*field_30)();
 int (*field_34)();
 int (*field_3c)();
} struct_0;

extern int (*g_403ff4)();

int (*g_403ff4)();

static int _init()
{
 if (g_403ff4)
 g_403ff4();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030(int a0)
{
 return a0;
}


// Function: sub_40103c at 0x40103c
void sub_40103c()
{
 sub_401040();
 return;
}


// Function: sub_401040 at 0x401040
int sub_401040()
{
 sub_401030(0);
 return;
}


// Function: sub_40104e at 0x40104e
void sub_40104e()
{
 sub_401050();
 return;
}


// Function: sub_401050 at 0x401050
int sub_401050()
{
 sub_401030(8);
 return;
}


// Function: sub_40105e at 0x40105e
void sub_40105e()
{
 sub_401060();
 return;
}


// Function: sub_401060 at 0x401060
int sub_401060()
{
 sub_401030(16);
 return;
}


// Function: sub_40106e at 0x40106e
void sub_40106e()
{
 sub_401070();
 return;
}


// Function: sub_401070 at 0x401070
int sub_401070()
{
 sub_401030(24);
 return;
}


// Function: sub_40107e at 0x40107e
void sub_40107e()
{
 sub_401080();
 return;
}


// Function: sub_401080 at 0x401080
int sub_401080()
{
 sub_401030(32);
 return;
}


// Function: sub_40108e at 0x40108e
void sub_40108e()
{
 sub_401090();
 return;
}


// Function: sub_401090 at 0x401090
int sub_401090()
{
 sub_401030(40);
 return;
}


// Function: sub_40109e at 0x40109e
void sub_40109e()
{
 sub_4010a0();
 return;
}


// Function: sub_4010a0 at 0x4010a0
int sub_4010a0()
{
 sub_401030(48);
 return;
}


// Function: sub_4010ae at 0x4010ae
void sub_4010ae()
{
 sub_4010b0();
 return;
}


// Function: sub_4010b0 at 0x4010b0
int sub_4010b0()
{
 sub_401030(56);
 return;
}


// Function: sub_4010be at 0x4010be
void sub_4010be()
{
 sub_4010c0();
 return;
}


// Function: sub_4010c0 at 0x4010c0
int sub_4010c0()
{
 sub_401030(64);
 return;
}


// Function: sub_4010ce at 0x4010ce
void sub_4010ce()
{
 sub_4010d0();
 return;
}


// Function: sub_4010d0 at 0x4010d0
int sub_4010d0()
{
 sub_401030(72);
 return;
}


// Function: sub_4010de at 0x4010de
void sub_4010de()
{
 sub_4010e0();
 return;
}


// Function: sub_4010e0 at 0x4010e0
int sub_4010e0()
{
 sub_401030(80);
 return;
}


// Function: sub_4010ee at 0x4010ee
int sub_4010ee()
{
 sub_4010f0();
 return;
}


// Function: sub_4010f0 at 0x4010f0
int sub_4010f0()
{
 struct_0 *v1; // ebx

 v1 = g_403ff4;
 return v1->field_3c();
}


// Function: sub_4010fa at 0x4010fa
int sub_4010fa()
{
 sub_401100();
 return;
}


// Function: sub_401100 at 0x401100
int sub_401100()
{
 struct_0 *v1; // ebx

 v1 = g_403ff4;
 return v1->field_c();
}


// Function: sub_40110a at 0x40110a
int sub_40110a()
{
 sub_401110();
 return;
}


// Function: sub_401110 at 0x401110
int sub_401110()
{
 struct_0 *v1; // ebx

 v1 = g_403ff4;
 return v1->field_10();
}


// Function: sub_40111a at 0x40111a
int sub_40111a()
{
 sub_401120();
 return;
}


// Function: sub_401120 at 0x401120
int sub_401120()
{
 struct_0 *v1; // ebx

 v1 = g_403ff4;
 return v1->field_14();
}


// Function: sub_40112a at 0x40112a
int sub_40112a()
{
 sub_401130();
 return;
}


// Function: sub_401130 at 0x401130
int sub_401130()
{
 struct_0 *v1; // ebx

 v1 = g_403ff4;
 return v1->field_18();
}


// Function: sub_40113a at 0x40113a
int sub_40113a()
{
 sub_401140();
 return;
}


// Function: sub_401140 at 0x401140
int sub_401140()
{
 struct_0 *v1; // ebx

 v1 = g_403ff4;
 return v1->field_1c();
}


// Function: sub_40114a at 0x40114a
int sub_40114a()
{
 sub_401150();
 return;
}


// Function: sub_401150 at 0x401150
int sub_401150()
{
 struct_0 *v1; // ebx

 v1 = g_403ff4;
 return v1->field_20();
}


// Function: sub_40115a at 0x40115a
int sub_40115a()
{
 sub_401160();
 return;
}


// Function: sub_401160 at 0x401160
int sub_401160()
{
 struct_0 *v1; // ebx

 v1 = g_403ff4;
 return v1->field_24();
}


// Function: sub_40116a at 0x40116a
int sub_40116a()
{
 sub_401170();
 return;
}


// Function: sub_401170 at 0x401170
int sub_401170()
{
 struct_0 *v1; // ebx

 v1 = g_403ff4;
 return v1->field_28();
}


// Function: sub_40117a at 0x40117a
int sub_40117a()
{
 sub_401180();
 return;
}


// Function: sub_401180 at 0x401180
int sub_401180()
{
 struct_0 *v1; // ebx

 v1 = g_403ff4;
 return v1->field_2c();
}


// Function: sub_40118a at 0x40118a
int sub_40118a()
{
 sub_401190();
 return;
}


// Function: sub_401190 at 0x401190
int sub_401190()
{
 struct_0 *v1; // ebx

 v1 = g_403ff4;
 return v1->field_30();
}


// Function: sub_40119a at 0x40119a
int sub_40119a()
{
 sub_4011a0();
 return;
}


// Function: sub_4011a0 at 0x4011a0
int sub_4011a0()
{
 struct_0 *v1; // ebx

 v1 = g_403ff4;
 return v1->field_34();
}


// Function: sub_4011aa at 0x4011aa
void sub_4011aa()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4011dc at 0x4011dc
void sub_4011dc()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x4011e0
void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_4011e4 at 0x4011e4
void sub_4011e4()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */
void deregister_tm_clones()
{
 return;
}


// Function: sub_401223 at 0x401223
void sub_401223()
{
}


// Function: sub_401229 at 0x401229
void sub_401229()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */
void register_tm_clones()
{
 return;
}


// Function: sub_401277 at 0x401277
void sub_401277()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */
unsigned int * __do_global_dtors_aux()
{
 unsigned int *v5; // eax
 struct_0 *v6; // edi
 struct_0 *ptr; // edi
 unsigned int v8; // esi
 unsigned int v9; // ebx
 struct_0 *v10; // esi
 unsigned int v11; // eax
 unsigned int i; // ebx
 unsigned int v13; // eax
 unsigned int *v14; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v5 = __x86_get_pc_thunk_di(*((int *)&v2), &v3);
 ptr = &v6->padding_0[11559];
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[108])
 return v5;
 if (*((int *)&ptr->padding_0[60]))
 sub_4010f0(*((int *)&ptr->padding_0[80]));
 v10 = &ptr->padding_0[224];
 v11 = *((int *)&ptr->padding_0[112]);
 i = (((char *)&ptr->padding_0[220] - (char *)v10) >> 2) - 1;
 if (*((int *)&ptr->padding_0[112]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[112]) = v13;
 ((int (*)())*((int *)&v10->padding_0[4 * v13]))();
 v11 = *((int *)&ptr->padding_0[112]);
 } while (*((int *)&ptr->padding_0[112]) < i);
 }
 deregister_tm_clones();
 ptr->padding_0[108] = 1;
 return v14;
}


// Function: sub_40130a at 0x40130a
void sub_40130a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86_get_pc_thunk_dx at 0x401319
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86_get_pc_thunk_di at 0x40131d
int __x86_get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: param_fake_branch at 0x401321
int param_fake_branch(unsigned int a0)
{
 __x86_get_pc_thunk_ax();
 return a0;
}


// Function: call_fake_branch at 0x401349
unsigned int call_fake_branch()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return param_fake_branch(10);
}


// Function: param_opaque_predicate at 0x401366
unsigned int param_opaque_predicate(unsigned int a0)
{
 unsigned int i; // [bp-0x1c]
 unsigned int flag3; // [bp-0x18]
 unsigned int flag2; // [bp-0x14]
 unsigned int flag1; // [bp-0x10]
 unsigned int result; // [bp-0xc]
 unsigned int v5; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 flag2 = a0 * 2 + a0 * a0 + 1 == (a0 + 1) * (a0 + 1);
 i = a0;
 for (flag3 = a0 + 1; flag3; i = v5)
 {
 v5 = flag3;
 flag3 = 0;
 }
 flag1 = i == 1;
 result = 1;
 if (flag2 && flag1 && result)
 return (a0 + 5) * 2;
 return a0 * 3 + 20;
}


// Function: call_opaque_predicate at 0x401411
unsigned int call_opaque_predicate()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return param_opaque_predicate(5);
}


// Function: param_instruction_substitution at 0x40142e
int param_instruction_substitution(unsigned int a0)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = a0 * 6;
 v1 = a0 >> 1;
 v2 = a0 & 15;
 v3 = a0 * 15;
 return v3 + v0 + v1 + v2;
}


// Function: call_instruction_substitution at 0x401496
unsigned int call_instruction_substitution()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return param_instruction_substitution(10);
}


// Function: decrypt_string at 0x4014b3
char * decrypt_string(unsigned int a0, char *a1, unsigned int a2, char a3)
{
 char *cur; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 sub_4011a0(a1, a0, a2);
 a1[1 + a2] = 0;
 for (cur = a1; *(cur); cur += 1)
 {
 *(cur) = *(cur) ^ a3;
 }
 return a1;
}


// Function: param_string_encryption at 0x401520
unsigned int encrypted_0;

int param_string_encryption()
{
 unsigned long v3; // ldt
 unsigned long v4; // gdt
 unsigned short v5; // gs
 unsigned int v6; // eax
 char v0[32]; // [bp-0x30]
 unsigned int v1; // [bp-0x10]

 v1 = *((int *)_ccall(v3, v4, (unsigned int)v5, 20));
 decrypt_string(&encrypted_0, &v0, 32, 90);
 v6 = sub_401190(&v0);
 if (v1 == *((int *)_ccall(v3, v4, (unsigned int)v5, 20)))
 return (unsigned int)v0 + v6;
 return __stack_chk_fail_local();
}


// Function: call_string_encryption at 0x401588
unsigned int call_string_encryption()
{
 __x86_get_pc_thunk_ax();
 return param_string_encryption();
}


// Function: param_tail_call_optimized at 0x4015a3
int param_tail_call_optimized(unsigned int a0, unsigned int a1)
{
 __x86_get_pc_thunk_ax();
 if (a0 > 0)
 return param_tail_call_optimized(a0 - 1, a1 + a0);
 return a1;
}


// Function: call_tail_call_optimized at 0x4015df
unsigned int call_tail_call_optimized()
{
 __x86_get_pc_thunk_ax();
 return param_tail_call_optimized(1000, 0);
}


// Function: param_non_tail_call at 0x401607
unsigned int param_non_tail_call(unsigned int a0)
{
 __x86_get_pc_thunk_ax();
 return (a0 <= 0 ? 0 : param_non_tail_call(a0 - 1) + a0);
}


// Function: call_non_tail_call at 0x401641
unsigned int call_non_tail_call()
{
 __x86_get_pc_thunk_ax();
 return param_non_tail_call(100);
}


// Function: param_vectorized_loop at 0x401664
unsigned int param_vectorized_loop(unsigned int a0, unsigned int a1, unsigned int ptr, unsigned int a3)
{
 unsigned int idx; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int index; // [bp-0xc]

 __x86_get_pc_thunk_ax();
 for (idx = 0; idx < a3; idx += 1)
 {
 *((int *)(ptr + idx * 4)) = *((int *)(a1 + idx * 4)) + *((int *)(a0 + idx * 4));
 }
 v1 = 0;
 for (index = 0; index < a3; index += 1)
 {
 v1 += *((int *)(ptr + index * 4));
 }
 return v1;
}


// Function: call_vectorized_loop at 0x4016fb
unsigned int call_vectorized_loop()
{
 unsigned long v19; // ldt
 unsigned long v20; // gdt
 unsigned short v21; // gs
 unsigned int i; // eax
 unsigned int v23; // eax
 unsigned int result; // [bp-0x70]
 unsigned int v1; // [bp-0x6c]
 unsigned int v2; // [bp-0x68]
 unsigned int v3; // [bp-0x64]
 unsigned int v4; // [bp-0x60]
 unsigned int v5; // [bp-0x5c]
 unsigned int v6; // [bp-0x58]
 unsigned int v7; // [bp-0x54]
 unsigned int v8; // [bp-0x50]
 unsigned int v9; // [bp-0x4c]
 unsigned int v10; // [bp-0x48]
 unsigned int v11; // [bp-0x44]
 unsigned int v12; // [bp-0x40]
 unsigned int v13; // [bp-0x3c]
 unsigned int v14; // [bp-0x38]
 unsigned int flag1; // [bp-0x34]
 unsigned long v16; // [bp-0x30]
 unsigned int v17; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v17 = *((int *)_ccall(v19, v20, (unsigned int)v21, 20));
 result = 1;
 v1 = 2;
 v2 = 3;
 v3 = 4;
 v4 = 5;
 v5 = 6;
 v6 = 7;
 v7 = 8;
 v8 = 8;
 v9 = 7;
 v10 = 6;
 v11 = 5;
 v12 = 4;
 v13 = 3;
 v14 = 2;
 flag1 = 1;
 i = 0;
 do
 {
 *((unsigned int *)((char *)&v16 + i)) = 0;
 i += 4;
 } while (i < 32);
 v23 = param_vectorized_loop(&result, &v8, &v16, 8);
 if (v17 == *((int *)_ccall(v19, v20, (unsigned int)v21, 20)))
 return v23;
 return __stack_chk_fail_local();
}


// Function: lto_target_func at 0x4017d2
unsigned int lto_target_func(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return (a0 + 5) * 2;
}


// Function: param_link_time_optimization at 0x4017e9
unsigned int param_link_time_optimization(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return lto_target_func(a0);
}


// Function: call_link_time_optimization at 0x401807
unsigned int call_link_time_optimization()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return param_link_time_optimization(5);
}


// Function: div_zero_handler at 0x401824
int div_zero_handler()
{
 unsigned int v2; // ebx
 struct_0 *ptr; // eax
 unsigned int v0; // [bp-0x8]

 v0 = v2;
 ptr = __x86_get_pc_thunk_ax() + 10112;
 *((unsigned int *)&ptr->padding_0[296]) = 1;
 sub_401120((struct struct_0 *)&ptr->padding_0[140], 1);
}


// Function: param_division_by_zero at 0x401856
unsigned int jmp_buffer;

unsigned int param_division_by_zero(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]

 sub_401150(8, div_zero_handler);
 v0 = (!sub_401130(&jmp_buffer) ? 10 / a0 : 4294967295);
 return v0;
}


// Function: call_division_by_zero at 0x4018b5
int call_division_by_zero()
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 sub_401150(8, 0);
 return v1 + v0;
}


// Function: segv_handler at 0x401907
int segv_handler()
{
 unsigned int v2; // ebx
 struct_0 *ptr; // eax
 unsigned int v0; // [bp-0x8]

 v0 = v2;
 ptr = __x86_get_pc_thunk_ax() + 9885;
 *((unsigned int *)&ptr->padding_0[456]) = 1;
 sub_401120((struct struct_0 *)&ptr->padding_0[300], 1);
}


// Function: param_null_pointer_deref at 0x401939
unsigned int segv_buffer;

unsigned int param_null_pointer_deref(unsigned int *a0)
{
 unsigned int v0; // [bp-0x10]

 sub_401150(11, segv_handler);
 v0 = (!sub_401130(&segv_buffer) ? *(a0) : 4294967295);
 return v0;
}


// Function: call_null_pointer_deref at 0x401994
int call_null_pointer_deref()
{
 unsigned long v5; // ldt
 unsigned long v6; // gdt
 unsigned short v7; // gs
 unsigned int v0[1]; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 v3 = *((int *)_ccall(v5, v6, (unsigned int)v7, 20));
 *((unsigned int *)v0) = 42;
 v1 = param_null_pointer_deref(&v0);
 v2 = param_null_pointer_deref(NULL);
 sub_401150(11, 0);
 if (v3 == *((int *)_ccall(v5, v6, (unsigned int)v7, 20)))
 return v2 + v1;
 return __stack_chk_fail_local();
}


// Function: param_buffer_overflow_stack at 0x401a0b
unsigned int param_buffer_overflow_stack(unsigned int a0)
{
 unsigned long v3; // ldt
 unsigned long v4; // gdt
 unsigned short v5; // gs
 unsigned int v6; // eax
 unsigned int i; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned long v7; // [bp-0x18]
 unsigned int v2; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v2 = *((int *)_ccall(v3, v4, (unsigned int)v5, 20));
 v1 = 305419896;
 for (i = 0; i <= 16; i += 1)
 {
 *(i + (char *)&v7) = 65;
 }
 v6 = (v1 == 305419896 ? a0 : 4294967295);
 if (v2 != *((int *)_ccall(v3, v4, (unsigned int)v5, 20)))
 v6 = __stack_chk_fail_local();
 return v6;
}


// Function: param_buffer_overflow_heap at 0x401a75
unsigned int param_buffer_overflow_heap(unsigned int a0)
{
 unsigned int i; // [bp-0x14]
 unsigned int result; // [bp-0x10]

 result = sub_401170(16);
 if (!result)
 return 4294967294;
 for (i = 0; i <= 32; i += 1)
 {
 *((char *)(result + i)) = 66;
 }
 sub_401140(result);
 return a0;
}


// Function: call_buffer_overflow at 0x401adc
int call_buffer_overflow()
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v0 = param_buffer_overflow_stack(10);
 v1 = param_buffer_overflow_heap(20);
 return v1 + v0;
}


// Function: param_integer_overflow at 0x401b1a
unsigned int param_integer_overflow(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = a1 + a0;
 v1 = a1 + a0;
 if (a0 > 0 && a1 > 0 && v0 < 0)
 return 4294967295;
 if (a0 < 0 && a1 < 0 && v0 > 0)
 return 4294967294;
 return v1;
}


// Function: call_integer_overflow at 0x401b87
int call_integer_overflow()
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = param_integer_overflow(0x3b9aca00, 0x3b9aca00);
 v1 = param_integer_overflow(4294967295, 1);
 return v1 + v0;
}


// Function: param_undefined_behavior at 0x401bc9
unsigned int param_undefined_behavior(unsigned int a0)
{
 __x86_get_pc_thunk_ax();
 return a0 * 2;
}


// Function: call_undefined_behavior at 0x401beb
unsigned int call_undefined_behavior()
{
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = param_undefined_behavior(5);
 return v0;
}


// Function: param_implementation_defined at 0x401c11
int param_implementation_defined()
{
 char v0; // [bp-0x11]
 char v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v2 = 0;
 v0 = 255;
 v2 += (v0 < 0 ? 1 : 2);
 v3 = 0xfffffff8;
 v2 += v3 >> 1;
 v1 |= 7;
 v1 |= 248;
 v2 += (v1 >> 3) + (v1 & 7);
 v2 += 8;
 return v2;
}


// Function: call_implementation_defined at 0x401c9d
unsigned int call_implementation_defined()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return param_implementation_defined();
}


// Function: test_obf_opt_edge at 0x401cb5
unsigned int g_402010;
unsigned int g_40203d;
unsigned int g_402059;
unsigned int g_402075;
unsigned int g_402092;
unsigned int g_4020b0;
unsigned int g_4020dc;
unsigned int g_402104;
unsigned int g_40212c;
unsigned int g_40214c;
unsigned int g_402168;
unsigned int g_402185;
unsigned int g_4021a4;
unsigned int g_4021d5;
unsigned int g_4021f4;

int test_obf_opt_edge()
{
 sub_401180(&g_402010);
 sub_401110(&g_40203d, call_fake_branch());
 sub_401110(&g_402059, call_opaque_predicate());
 sub_401110(&g_402075, call_instruction_substitution());
 sub_401110(&g_402092, call_string_encryption());
 sub_401110(&g_4020b0, call_tail_call_optimized());
 sub_401110(&g_4020dc, call_non_tail_call());
 sub_401110(&g_402104, call_vectorized_loop());
 sub_401110(&g_40212c, call_link_time_optimization());
 sub_401110(&g_40214c, call_division_by_zero());
 sub_401110(&g_402168, call_null_pointer_deref());
 sub_401110(&g_402185, call_buffer_overflow());
 sub_401110(&g_4021a4, call_integer_overflow());
 sub_401110(&g_4021d5, call_undefined_behavior());
 return sub_401110(&g_4021f4, call_implementation_defined());
}


// Function: main at 0x401e33
unsigned int main()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 test_obf_opt_edge();
 return 0;
}


// Function: __x86_get_pc_thunk_ax at 0x401e53
int __x86_get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: sub_401e57 at 0x401e57
int sub_401e57()
{
 __stack_chk_fail_local();
 return;
}


// Function: __stack_chk_fail_local at 0x401e60
int __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 sub_401160();
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */
unsigned int __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 unsigned int *v4; // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 ptr = &v2->padding_0[227];
 v4 = *((int **)&ptr->padding_0[232]);
 if (*((int *)&ptr->padding_0[232]) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = &ptr->padding_0[232];
 do
 {
 p = v6;
 ((int (*)())v4)();
 v4 = *((int **)&p->padding_0[4]);
 v6 = &p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_401ec2 at 0x401ec2
void sub_401ec2()
{
}



/* CRT stub function _fini removed by preprocessor */


