// Angr Decompilation of 7_gcc_Os_no_g
// Platform: X86


/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
 char padding_0[60];
 unsigned int field_14;
 unsigned int field_18;
 unsigned int field_1c;
 unsigned int field_20;
 unsigned int field_24;
 unsigned int field_28;
 unsigned int field_2c;
 unsigned int field_30;
 unsigned int field_34;
 unsigned int field_38;
 unsigned int field_3c;
 unsigned int field_40;
 unsigned int field_44;
 unsigned int field_48;
 unsigned int field_4c;
 unsigned int field_50;
 unsigned int field_54;
 unsigned int field_58;
 unsigned int field_5c;
 unsigned int field_60;
 unsigned int field_64;
 unsigned int field_68;
 unsigned int field_6c;
 unsigned int field_70;
 unsigned int field_74;
 unsigned int field_78;
 unsigned int field_7c;
} struct_0;

extern void g_403ff4(void);

/* GCC builtin functions for PC-relative addressing */
static inline void get_pc_thunk_bx(void)
{
    __asm__ __volatile__("movl %%ebx, %%ebx" : : );
}

static inline void get_pc_thunk_dx(void)
{
    __asm__ __volatile__("movl %%edx, %%edx" : : );
}

static inline void get_pc_thunk_di(void)
{
    __asm__ __volatile__("movl %%edi, %%edi" : : );
}

/* Define NULL and true for C89 compatibility */
#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef true
#define true 1
#endif

int _init()
{
 if (g_403ff4)
 g_403ff4();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return ptr[2];
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
 sub_401030(96);
 return;
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
    // Empty function - placeholder
    return 0;
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

 return v1->padding_0[16];
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

 return v1->field_14;
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

 return v1->field_18;
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

 return v1->field_1c;
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

 return v1->field_20;
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

 return v1->field_24;
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

 return v1->field_28;
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

 return v1->field_2c;
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

 return v1->field_30;
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

 return v1->field_34;
}


// Function: sub_4011aa at 0x4011aa
void sub_4011aa()
{
 main();
 return;
}


// Function: main at 0x4011b0
int main()
{
 char v0; // [bp+0x0]

 test_obf_opt_edge(&v0);
 return 0;
}


// Function: sub_4011c3 at 0x4011c3
void sub_4011c3()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4011fc at 0x4011fc
void sub_4011fc()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x401200
void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_401204 at 0x401204
void sub_401204()
{
 deregister_tm_clones();
 return;
}


void deregister_tm_clones(void)
{
 unsigned int *ptr; // edx

 get_pc_thunk_dx();
 ptr = (unsigned int *)((char *)&ptr[2942] + 3);
 return;
}


// Function: sub_401243 at 0x401243
void sub_401243()
{
}


// Function: sub_401249 at 0x401249
void sub_401249()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

void register_tm_clones(void)
{
}


// Function: sub_401297 at 0x401297
void sub_401297()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;


void __do_global_dtors_aux(void)
{
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

 get_pc_thunk_di();
 ptr = &v6->padding_0[11527];
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[108])
 return;
 if (*((int *)&ptr->padding_0[60]))
 sub_4010f0(*((int *)&ptr->padding_0[80]));
 v10 = &ptr->padding_0[224];
 v11 = *((int *)&ptr->padding_0[112]);
 i = ((unsigned int)&ptr->padding_0[220] - (unsigned int)v10 >> 2) - 1;
 if (*((int *)&ptr->padding_0[112]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[112]) = v13;
 ((void (*)(void))(*((int *)&v10->padding_0[4 * v13])))();
 v11 = *((int *)&ptr->padding_0[112]);
 } while (*((int *)&ptr->padding_0[112]) < i);
 }
 v14 = deregister_tm_clones();
 ptr->padding_0[108] = 1;
 return;
}


// Function: sub_40132a at 0x40132a
void sub_40132a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401339
void __x86.get_pc_thunk_dx()
{
 return;
}


// Function: get_pc_thunk_di at 0x40133d
int get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: div_zero_handler at 0x401341
extern unsigned int div_zero_caught;
extern unsigned int jmp_buffer;

int div_zero_handler()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x8]

 v0 = v2;
 div_zero_caught = 1;
 sub_4011a0(&jmp_buffer, 1);
}


// Function: segv_handler at 0x40136f
extern unsigned int segv_buffer;
extern unsigned int segv_caught;

int segv_handler()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x8]

 v0 = v2;
 segv_caught = 1;
 sub_4011a0(&segv_buffer, 1);
}


// Function: param_fake_branch at 0x40139d
int param_fake_branch(unsigned int a0)
{
 return a0;
}


// Function: call_fake_branch at 0x4013a9
unsigned int call_fake_branch()
{
 return 10;
}


// Function: param_opaque_predicate at 0x4013b3
int param_opaque_predicate(unsigned int a0)
{
 unsigned int v0; // ecx
 unsigned int v1; // esi
 unsigned int v2; // esi
 unsigned int result; // eax
 unsigned int v4; // eax

 v0 = a0;
 v1 = v0 + 1;
 v2 = v1;
 result = v0;
 while (true)
 {
 v4 = result;
 result = v2;
 if (!result)
 break;
 v2 = ((v4 >> 31) / result) | ((v4 >> 31) % result);
 }
 if (v4 == 1 && v0 * 2 + v0 * v0 + 1 == v1 * v1)
 return v0 * 2 + 10;
 return v0 * 3 + 20;
}


// Function: call_opaque_predicate at 0x4013fd
unsigned int call_opaque_predicate()
{
 return param_opaque_predicate(5);
}


// Function: param_instruction_substitution at 0x401413
int param_instruction_substitution(unsigned int a0)
{
 return a0 * 6 + (a0 >> 1) + (a0 & 15) + a0 * 15;
}


// Function: call_instruction_substitution at 0x401434
unsigned int call_instruction_substitution()
{
 return 225;
}


// Function: decrypt_string at 0x40143e
void* decrypt_string(unsigned int a0, void* a1, unsigned int a2, char a3)
{
 unsigned int v0; // eax
 void* cur; // ecx
 unsigned int v2; // edx

 v0 = sub_401180(a1, a0, a2);
 *(-1 + (char *)a1 + a2) = 0;
 for (cur = a1; *((char *)cur); *((char *)cur) = (v0 & 0xffffff00 | *((char *)cur)) ^ (v2 & 0xffffff00 | a3));
 return a1;
}


// Function: param_string_encryption at 0x401491
extern unsigned int encrypted_0;

int param_string_encryption()
{
 unsigned long v3; // ldt
 unsigned long v4; // gdt
 unsigned short v5; // gs
 unsigned int v6; // eax
 char v0; // [bp-0x30]
 unsigned int v1; // [bp-0x10]

 v1 = *((int *)_ccall(v3, v4, (unsigned int)v5, 20));
 decrypt_string(&encrypted_0, &v0, 32, 90);
 v6 = sub_401170(&v0);
 if (v1 == *((int *)_ccall(v3, v4, (unsigned int)v5, 20)))
 return v6 + v0;
 return __stack_chk_fail_local();
}


// Function: call_string_encryption at 0x4014f0
int call_string_encryption()
{
 param_string_encryption();
 return;
}


// Function: param_tail_call_optimized at 0x4014f6
unsigned int param_tail_call_optimized(unsigned int i, unsigned int a1)
{
 for (; i > 0; i -= 1)
 {
 a1 += i;
 }
 return a1;
}


// Function: call_tail_call_optimized at 0x40150e
unsigned int call_tail_call_optimized()
{
 return 500500;
}


// Function: param_non_tail_call at 0x401518
unsigned int param_non_tail_call(unsigned int i)
{
 unsigned int v0; // edx

 for (v0 = 0; i > 0; i -= 1)
 {
 v0 += i;
 }
 return v0;
}


// Function: call_non_tail_call at 0x401531
unsigned int call_non_tail_call()
{
 return param_non_tail_call(100);
}


// Function: param_vectorized_loop at 0x401547
unsigned int param_vectorized_loop(unsigned int a0, unsigned int a1, unsigned int ptr, unsigned int a3)
{
 unsigned int idx; // eax
 unsigned int index; // eax
 unsigned int v2; // edx

 for (idx = 0; idx < a3; idx += 1)
 {
 *((int *)(ptr + idx * 4)) = *((int *)(a1 + idx * 4)) + *((int *)(a0 + idx * 4));
 }
 index = 0;
 for (v2 = 0; index < a3; index += 1)
 {
 v2 += *((int *)(ptr + index * 4));
 }
 return v2;
}


// Function: call_vectorized_loop at 0x401584
unsigned int call_vectorized_loop()
{
 struct_0 *v7; // edx
 struct_0 *v8; // edx
 struct_0 *j; // esi
 char *iter; // edi
 unsigned int flag1; // ecx
 unsigned int *node; // edi
 unsigned int flag2; // ecx
 unsigned int v22; // eax
 unsigned int result; // ecx
 unsigned int v10; // edi
 unsigned int v11; // esi
 char *cur; // edi
 struct_0 *i; // esi
 unsigned long v14; // ldt
 unsigned long v15; // gdt
 unsigned short v16; // gs
 char v0[8]; // [bp-0x70]
 char v1[8]; // [bp-0x50]
 char v2[32]; // [bp-0x30]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]
 unsigned int v5; // [bp-0x8]

 get_pc_thunk_dx();
 v8 = &v7[3].padding_0[2559];
 result = 8;
 v5 = v10;
 v4 = v11;
 cur = v0;
 i = &v8[2].padding_0[2596];
 for (v3 = *((int *)_ccall(v14, v15, (unsigned int)v16, 20)); result; i = &i->padding_0[4])
 {
 result -= 1;
 *((int *)&cur[0]) = *((int *)&i->padding_0[0]);
 cur += 1;
 }
 j = &v8[2].padding_0[2564];
 iter = v1;
 for (flag1 = 8; flag1; j = &j->padding_0[4])
 {
 flag1 -= 1;
 *((int *)&iter[0]) = *((int *)&j->padding_0[0]);
 iter += 1;
 }
 node = (unsigned int *)v2;
 for (flag2 = 8; flag2; node += 1)
 {
 flag2 -= 1;
 *(node) = 0;
 }
 v22 = param_vectorized_loop(&v0, &v1, &v2, 8);
 if (v3 == *((int *)_ccall(v14, v15, (unsigned int)v16, 20)))
 return v22;
 return __stack_chk_fail_local();
}


// Function: param_link_time_optimization at 0x4015fd
unsigned int param_link_time_optimization(unsigned int a0)
{
 return (a0 + 5) * 2;
}


// Function: call_link_time_optimization at 0x40160e
unsigned int call_link_time_optimization()
{
 return 20;
}


// Function: param_division_by_zero at 0x401618
extern unsigned int jmp_buffer;

unsigned int param_division_by_zero(unsigned int a0)
{
 sub_401130(8, div_zero_handler);
 if (sub_401110(&jmp_buffer))
 return 4294967295;
 return ((0x0A % a0) << 16) | (0x0A / a0);
}


// Function: call_division_by_zero at 0x401668
int call_division_by_zero()
{
 unsigned int v1; // eax
 unsigned int v2; // eax

 v1 = param_division_by_zero(5);
 v2 = param_division_by_zero(0);
 sub_401130(8, 0);
 return v1 + v2;
}


// Function: param_null_pointer_deref at 0x4016ad
extern unsigned int segv_buffer;

unsigned int param_null_pointer_deref(unsigned int *a0)
{
 sub_401130(11, segv_handler);
 if (sub_401110(&segv_buffer))
 return 4294967295;
 return *(a0);
}


// Function: call_null_pointer_deref at 0x4016f9
int call_null_pointer_deref()
{
 unsigned long v3; // ldt
 unsigned long v4; // gdt
 unsigned short v5; // gs
 unsigned int v6; // eax
 unsigned int v7; // eax
 unsigned int v0[1]; // [bp-0x24]
 unsigned int v1; // [bp-0x20]

 v1 = *((int *)_ccall(v3, v4, (unsigned int)v5, 20));
 *((unsigned int [1])v0) = 42;
 v6 = param_null_pointer_deref(&v0);
 v7 = param_null_pointer_deref(NULL);
 sub_401130(11, 0);
 if (v1 == *((int *)_ccall(v3, v4, (unsigned int)v5, 20)))
 return v6 + v7;
 return __stack_chk_fail_local();
}


// Function: param_buffer_overflow_stack at 0x401763
int param_buffer_overflow_stack(unsigned int a0)
{
 return a0;
}


// Function: param_buffer_overflow_heap at 0x40176f
unsigned int param_buffer_overflow_heap(unsigned int a0)
{
 unsigned int result; // eax

 result = sub_401150(16);
 if (!result)
 return 4294967294;
 sub_401120(result);
 return a0;
}


// Function: call_buffer_overflow at 0x4017ae
unsigned int call_buffer_overflow()
{
 return param_buffer_overflow_heap(20) + 10;
}


// Function: param_integer_overflow at 0x4017c4
unsigned int param_integer_overflow(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // eax

 v0 = a0 + a1;
 if (a0 > 0 && a1 > 0)
 {
 if (v0 < 0)
 v0 = 4294967295;
 return v0;
 }
 if ((a1 & a0) >= 0)
 {
 return v0;
 }
 else if ((char)_ccall(15, 15, v0, 0, 0))
 {
 return 4294967294;
 }
 else
 {
 return v0;
 }
}


// Function: call_integer_overflow at 0x4017f8
unsigned int call_integer_overflow()
{
 return 0x77359400;
}


// Function: param_undefined_behavior at 0x401802
unsigned int param_undefined_behavior(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_undefined_behavior at 0x401810
unsigned int call_undefined_behavior()
{
 return 10;
}


// Function: param_implementation_defined at 0x40181a
unsigned int param_implementation_defined()
{
 return 43;
}


// Function: call_implementation_defined at 0x401824
unsigned int call_implementation_defined()
{
 return 43;
}


// Function: test_obf_opt_edge at 0x40182e
extern unsigned int g_402060;
extern unsigned int g_40208d;
extern unsigned int g_4020a9;
extern unsigned int g_4020c5;
extern unsigned int g_4020e2;
extern unsigned int g_4020fe;
extern unsigned int g_402128;
extern unsigned int g_40214d;
extern unsigned int g_402173;
extern unsigned int g_402193;
extern unsigned int g_4021af;
extern unsigned int g_4021cc;
extern unsigned int g_4021e9;
extern unsigned int g_40221a;
extern unsigned int g_402237;

int test_obf_opt_edge()
{
 sub_401160(&g_402060);
 sub_401190(1, &g_40208d, 10);
 sub_401190(1, &g_4020a9, call_opaque_predicate());
 sub_401190(1, &g_4020c5, 225);
 sub_401190(1, &g_4020e2, param_string_encryption());
 sub_401190(1, &g_4020fe, call_tail_call_optimized());
 sub_401190(1, &g_402128, call_non_tail_call());
 sub_401190(1, &g_40214d, call_vectorized_loop());
 sub_401190(1, &g_402173, 20);
 sub_401190(1, &g_402193, call_division_by_zero());
 sub_401190(1, &g_4021af, call_null_pointer_deref());
 sub_401190(1, &g_4021cc, call_buffer_overflow());
 sub_401190(1, &g_4021e9, 0x77359400);
 sub_401190(1, &g_40221a, 10);
 return sub_401190(1, &g_402237, 43);
}


// Function: sub_401988 at 0x401988
int sub_401988()
{
 __stack_chk_fail_local();
 return;
}


// Function: __stack_chk_fail_local at 0x401990
int __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 sub_401140();
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

unsigned int __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 unsigned int *v4; // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 get_pc_thunk_dx();
 ptr = &v2[1].padding_0[227];
 v4 = *((int *)&ptr->padding_0[232]);
 if (*((int *)&ptr->padding_0[232]) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = &ptr->padding_0[232];
 do
 {
 p = v6;
 v4();
 v4 = *((int *)&p->padding_0[4]);
 v6 = &p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_4019f2 at 0x4019f2
void sub_4019f2()
{
}



/* CRT stub function _fini removed by preprocessor */


