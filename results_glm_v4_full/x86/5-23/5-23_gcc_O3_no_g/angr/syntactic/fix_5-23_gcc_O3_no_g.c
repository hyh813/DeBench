// Angr Decompilation of 5-23_gcc_O3_no_g
// Platform: X86

#include <stddef.h>

/* CRT stub function _init removed by preprocessor */
struct struct_0;

typedef void (*init_func_ptr)(void);
extern init_func_ptr g_403ff4;

/* Forward declarations */
int frame_dummy();
unsigned int * deregister_tm_clones();
unsigned int register_tm_clones();
int sub_4010b0();
int main();
int sub_4010c0();
int sub_4010d0();
int sub_4010e0();
int sub_4010f0(unsigned int a0);
int sub_401100(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5);
int sub_401110(unsigned int a0, const char *a1, ...);
int sub_401120(unsigned int a1, unsigned int a2);
unsigned int __do_global_ctors_aux();
unsigned int __do_global_dtors_aux();
unsigned int __x86_get_pc_thunk_ax(void);
unsigned int __x86_get_pc_thunk_dx(void);
unsigned int __x86_get_pc_thunk_cx(void);
int __x86_get_pc_thunk_di(int);
unsigned int param_macro_constants();
unsigned int param_asm_simd(unsigned long long *a0, unsigned long long *a1, unsigned long long *ptr);
unsigned int param_dynamic_code(unsigned int a0);
unsigned int param_memory_protection();
unsigned long long AddV(unsigned long long a0, unsigned long long a1);
int atomic_exchange_add(unsigned int *ptr, unsigned int val);
unsigned int _ccall(unsigned long a0, unsigned long a1, unsigned int a2, unsigned int a3);
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1);
unsigned int call_macro_constants();
unsigned int call_macro_functions();
unsigned int call_conditional_compile();
unsigned int call_macro_recursion();
unsigned int param_stringize();
unsigned int call_stringize();
unsigned int my_func();
unsigned int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2);
unsigned int call_variadic_macro();
unsigned int call_macro_override();
unsigned int call_asm_basic();
unsigned int param_asm_clobber(unsigned int ptr, unsigned int a1);
unsigned int call_asm_clobber();
char param_asm_multi_insn(char *a0, char *a1, unsigned int a2);
unsigned int call_asm_multi_insn();
int test_preprocessing_features(char *a0);
int test_asm_features(char *a0);

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
 unsigned int *ptr; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = *(ptr + 1);
 goto *(void *)(*(ptr + 2));
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
int sub_4010ae()
{
 sub_4010b0();
 return;
}


// Function: sub_4010b0 at 0x4010b0
typedef struct struct_0_b0 {
 char padding_0[44];
 unsigned int field_2c;
} struct_0_b0;

int sub_4010b0()
{
 struct_0_b0 *v1; // ebx
 void *label;

 if (v1)
 label = (void *)(size_t)v1->field_2c;
 else
 label = 0;
 goto *label;
}


// Function: sub_4010ba at 0x4010ba
int sub_4010ba()
{
 sub_4010c0();
 return;
}


// Function: sub_4010c0 at 0x4010c0
typedef struct struct_0_c0 {
 char padding_0[12];
 unsigned int field_c;
} struct_0_c0;

int sub_4010c0()
{
 struct_0_c0 *v1; // ebx
 void *label;

 if (v1)
 label = (void *)(size_t)v1->field_c;
 else
 label = 0;
 goto *label;
}


// Function: sub_4010ca at 0x4010ca
int sub_4010ca()
{
 sub_4010d0();
 return;
}


// Function: sub_4010d0 at 0x4010d0
typedef struct struct_0_d0 {
 char padding_0[16];
 unsigned int field_10;
} struct_0_d0;

int sub_4010d0(void *ptr, unsigned int a1, unsigned int a2)
{
 struct_0_d0 *v1; // ebx
 void *label;

 if (v1)
 label = (void *)(size_t)v1->field_10;
 else
 label = 0;
 goto *label;
}


// Function: sub_4010da at 0x4010da
int sub_4010da()
{
 sub_4010e0();
 return;
}


// Function: sub_4010e0 at 0x4010e0
typedef struct struct_0_e0 {
 char padding_0[20];
 unsigned int field_14;
} struct_0_e0;

int sub_4010e0()
{
 struct_0_e0 *v1; // ebx

 goto *(void *)(v1 ? v1->field_14 : 0);
}


// Function: sub_4010ea at 0x4010ea
int sub_4010ea()
{
 sub_4010f0(0);
 return;
}


// Function: sub_4010f0 at 0x4010f0
typedef struct struct_0_f0 {
 char padding_0[24];
 unsigned int field_18;
} struct_0_f0;

int sub_4010f0(unsigned int a0)
{
 struct_0_f0 *v1; // ebx

 goto *(void *)(v1 ? v1->field_18 : 0);
}


// Function: sub_4010fa at 0x4010fa
int sub_4010fa()
{
 sub_401100(0, 0, 0, 0, 0, 0);
 return;
}


// Function: sub_401100 at 0x401100
typedef struct struct_0_100 {
 char padding_0[28];
 unsigned int field_1c;
} struct_0_100;

int sub_401100(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a0;
}


// Function: sub_40110a at 0x40110a
int sub_40110a()
{
 return;
}


// Function: sub_401110 at 0x401110
typedef struct struct_0_110 {
 char padding_0[32];
 unsigned int field_20;
} struct_0_110;

int sub_401110(unsigned int a0, const char *a1, ...)
{
 struct_0_110 *v1; // ebx

 goto *(void *)(v1 ? v1->field_20 : 0);
}


// Function: sub_40111a at 0x40111a
int sub_40111a()
{
 sub_401120(0, 0);
 return;
}


// Function: sub_401120 at 0x401120
typedef struct struct_0_120 {
 char padding_0[36];
 unsigned int field_24;
} struct_0_120;

int sub_401120(unsigned int a0, unsigned int a1)
{
 return 0;
}


// Function: sub_40112a at 0x40112a
void sub_40112a()
{
 main();
 return;
}


// Function: main at 0x401130
int main()
{
 char v0; // [bp+0x0]

 test_preprocessing_features(&v0);
 test_asm_features(&v0);
 return 0;
}


// Function: sub_401148 at 0x401148
/* Forward declarations */
void _start();

void sub_401148()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40117c at 0x40117c
void sub_40117c()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x401180
void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_401184 at 0x401184
void sub_401184()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

typedef struct struct_1_dereg {
 unsigned int field_0;
} struct_1_dereg;

struct struct_0 {
 char padding_0[25000];
};

unsigned int * deregister_tm_clones()
{
 struct struct_0 *v2; // edx
 unsigned int *ptr; // ebx

 v2 = (struct struct_0 *)(size_t)__x86_get_pc_thunk_dx();
 ptr = (unsigned int *)v2;
 return (unsigned int *)((char *)ptr + 11892);
}


// Function: sub_4011c3 at 0x4011c3
void sub_4011c3()
{
}


// Function: sub_4011c9 at 0x4011c9
void sub_4011c9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

typedef struct struct_1_reg {
 unsigned int field_0;
} struct_1_reg;

unsigned int register_tm_clones()
{
 struct struct_0 *v2; // edx
 struct struct_0 *v3; // edx
 struct struct_0 *ptr; // edx
 unsigned int v4; // ebx
 unsigned int v6; // eax
 unsigned int v10; // esi
 unsigned int v0; // [bp-0x8]
 ptrdiff_t diff;

 v2 = (struct struct_0 *)(size_t)__x86_get_pc_thunk_dx();
 v3 = (struct struct_0 *)((char *)v2 + 11759);
 ptr = v2;
 v0 = *((int *)&v2);
 diff = (ptrdiff_t)((char *)&v3->padding_0[72] - (char *)&v3->padding_0[72]);
 if (!(diff >> 31) + (diff >> 2) >> 1)
 {
 return (diff >> 31) + (diff >> 2) >> 1;
 }
   else if (*((int *)&v3->padding_0[56]))
   {
       return ((unsigned int (*)(void *, unsigned int))(size_t)(*(int *)&v3->padding_0[56]))(&v3->padding_0[72], (diff >> 31) + (diff >> 2) >> 1);
   }
 else
 {
 return (diff >> 31) + (diff >> 2) >> 1;
 }
}


// Function: sub_401217 at 0x401217
void sub_401217()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

unsigned int __do_global_dtors_aux()
{
 unsigned int *v5; // eax
 struct struct_0 *v6; // edi
 struct struct_0 *ptr; // edi
 unsigned int v8; // esi
 unsigned int v9; // ebx
 struct struct_0 *v10; // esi
 unsigned int v11; // eax
 unsigned int i; // ebx
 unsigned int v13; // eax
 unsigned int *v14; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v5 = 0;
 v6 = (struct struct_0 *)(v8 + 11671);
 ptr = v6;
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[72])
 return v5;
   if (*((int *)&ptr->padding_0[44]))
       sub_4010b0();
 v10 = (struct struct_0 *)&ptr->padding_0[224];
 v11 = *((int *)&ptr->padding_0[76]);
   i = ((unsigned int)&ptr->padding_0[220] - (unsigned int)v10 >> 2) - 1;
 if (*((int *)&ptr->padding_0[76]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[76]) = v13;
 (*((int *)&v10->padding_0[4 * v13]))();
 v11 = *((int *)&ptr->padding_0[76]);
 } while (*((int *)&ptr->padding_0[76]) < i);
 }
 deregister_tm_clones();
 ptr->padding_0[72] = 1;
 return 0;
}


// Function: sub_4012aa at 0x4012aa
void sub_4012aa()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x4012b9
unsigned int __x86_get_pc_thunk_dx()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: __x86.get_pc_thunk_di at 0x4012bd
int __x86_get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_4012c1 at 0x4012c1
void sub_4012c1(unsigned int a0)
{
 param_macro_constants();
 return;
}


// Function: param_macro_constants at 0x4012d0
unsigned int param_macro_constants()
{
 return 64;
}


// Function: sub_4012ea at 0x4012ea
void sub_4012ea()
{
 call_macro_constants();
 return;
}


// Function: call_macro_constants at 0x4012f0
unsigned int call_macro_constants()
{
 return 64;
}


// Function: sub_4012fa at 0x4012fa
void sub_4012fa(unsigned int a0, unsigned int a1)
{
 param_macro_functions();
 return;
}


// Function: param_macro_functions at 0x401300
int param_macro_functions(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // edx
 unsigned int v1; // edx

 v0 = a0;
 if (v0 < a1)
 v1 = a1;
 else
 v1 = v0;
 return v0 * v0 + v1;
}


// Function: sub_401319 at 0x401319
void sub_401319()
{
 call_macro_functions();
 return;
}


// Function: call_macro_functions at 0x401320
unsigned int call_macro_functions()
{
 return 30;
}


// Function: sub_40132a at 0x40132a
void sub_40132a(unsigned int a0)
{
 param_conditional_compile();
 return;
}


// Function: param_conditional_compile at 0x401330
int param_conditional_compile(unsigned int a0)
{
 return a0 * 3 + 2;
}


// Function: sub_40133d at 0x40133d
void sub_40133d()
{
 call_conditional_compile();
 return;
}


// Function: call_conditional_compile at 0x401340
unsigned int call_conditional_compile()
{
 return 32;
}


// Function: sub_40134a at 0x40134a
void sub_40134a(unsigned int a0)
{
 param_multi_branch_compile();
 return;
}


// Function: param_multi_branch_compile at 0x401350
int param_multi_branch_compile(unsigned int a0)
{
 return a0 * 5 + 57072;
}


// Function: call_multi_branch_compile at 0x401360
unsigned int call_multi_branch_compile()
{
 return 57122;
}


// Function: sub_40136a at 0x40136a
void sub_40136a(unsigned int a0)
{
 param_macro_recursion();
 return;
}


// Function: param_macro_recursion at 0x401370
int param_macro_recursion(unsigned int a0)
{
 return a0 + 16;
}


// Function: sub_40137c at 0x40137c
void sub_40137c()
{
 call_macro_recursion();
 return;
}


// Function: call_macro_recursion at 0x401380
unsigned int call_macro_recursion()
{
 return 116;
}


// Function: sub_40138a at 0x40138a
void sub_40138a()
{
 param_stringize();
 return;
}


// Function: param_stringize at 0x401390
unsigned int param_stringize()
{
 return 19;
}


// Function: sub_40139a at 0x40139a
void sub_40139a()
{
 call_stringize();
 return;
}


// Function: call_stringize at 0x4013a0
unsigned int call_stringize()
{
 return 19;
}


// Function: sub_4013aa at 0x4013aa
void sub_4013aa(unsigned int a0)
{
 my_func();
 return;
}


// Function: my_func at 0x4013b0
unsigned int my_func(unsigned int a0)
{
 return a0 * 10;
}


// Function: sub_4013be at 0x4013be
void sub_4013be(unsigned int a0)
{
 param_token_paste();
 return;
}


// Function: param_token_paste at 0x4013c0
int param_token_paste(unsigned int a0)
{
 return a0 * 11 + 5;
}


// Function: call_token_paste at 0x4013d0
unsigned int call_token_paste()
{
 return 60;
}


// Function: sub_4013da at 0x4013da
int sub_4013da()
{
 param_variadic_macro(10, 20, 30);
 return;
}


// Function: param_variadic_macro at 0x4013e0
unsigned int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
 sub_401110(1, "LOG: Values: %d, %d, %d\n", a0, a1, a2);
 return a0 + 50;
}


// Function: sub_401418 at 0x401418
int sub_401418()
{
 call_variadic_macro();
 return;
}


// Function: call_variadic_macro at 0x401420
unsigned int call_variadic_macro()
{
 sub_401110(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


// Function: sub_401451 at 0x401451
void sub_401451(unsigned int a0)
{
 param_macro_override();
 return;
}


// Function: param_macro_override at 0x401460
int param_macro_override(unsigned int a0)
{
 return a0 * 3 + 1;
}


// Function: sub_40146d at 0x40146d
void sub_40146d()
{
 call_macro_override();
 return;
}


// Function: call_macro_override at 0x401470
unsigned int call_macro_override()
{
 return 16;
}


// Function: sub_40147a at 0x40147a
void sub_40147a()
{
 param_include_guard();
 return;
}


// Function: param_include_guard at 0x401480
int param_include_guard()
{
 return 500;
}


// Function: sub_40148a at 0x40148a
void sub_40148a()
{
 call_include_guard();
 return;
}


// Function: call_include_guard at 0x401490
int call_include_guard()
{
 return 500;
}


// Function: sub_40149a at 0x40149a
int sub_40149a()
{
 param_builtin_macros();
 return;
}


// Function: param_builtin_macros at 0x4014a0
int param_builtin_macros(unsigned int a0)
{
 sub_401110(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "02:59:58");
 return a0 + 282;
}


// Function: call_builtin_macros at 0x4014f0
unsigned int call_builtin_macros()
{
 sub_401110(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "02:59:58");
 return 382;
}


// Function: sub_40153c at 0x40153c
int sub_40153c()
{
 char v0; // [bp+0x0]
 test_preprocessing_features(&v0);
 return;
}


// Function: test_preprocessing_features at 0x401540
extern unsigned int g_402041;
extern unsigned int g_40205c;
extern unsigned int g_402077;
extern unsigned int g_402092;
extern unsigned int g_4020ae;
extern unsigned int g_4020c9;
extern unsigned int g_4020e4;
extern unsigned int g_4020ff;
extern unsigned int g_4021f4;
extern unsigned int g_40221c;
extern unsigned int g_40223c;
extern unsigned int g_402268;

int test_preprocessing_features(char *a0)
{
 sub_401110(1, &g_4021f4);
 sub_401110(1, &g_402041, 64);
 sub_401110(1, &g_40205c, 30);
 sub_401110(1, &g_402077, 32);
 sub_401110(1, &g_40221c, 57122);
 sub_401110(1, &g_402092, 116);
 sub_401110(1, &g_40223c, 19);
 sub_401110(1, &g_4020ae, 60);
 sub_401110(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
 sub_401110(1, &g_4020c9, 60);
 sub_401110(1, &g_4020e4, 16);
 sub_401110(1, &g_4020ff, 500);
 sub_401110(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "02:59:58");
 return sub_401110(1, &g_402268, 382);
}


// Function: sub_40168b at 0x40168b
void sub_40168b(unsigned int a0)
{
 param_asm_basic();
 return;
}


// Function: param_asm_basic at 0x401690
int param_asm_basic(unsigned int a0)
{
 return a0 + 10;
}


// Function: sub_4016a2 at 0x4016a2
void sub_4016a2()
{
 call_asm_basic();
 return;
}


// Function: call_asm_basic at 0x4016b0
unsigned int call_asm_basic()
{
 return 15;
}


// Function: sub_4016c3 at 0x4016c3
int sub_4016c3()
{
 param_asm_clobber(0, 0);
 return;
}


// Function: param_asm_clobber at 0x4016d0
unsigned int param_asm_clobber(unsigned int ptr, unsigned int a1)
{
 unsigned int v0; // eax
 unsigned int idx; // ecx;

 v0 = 0;
 for (idx = 0; idx < a1; idx += 1)
 {
 v0 += *((int *)(ptr + idx * 4));
 }
 return v0;
}


// Function: sub_4016f1 at 0x4016f1
int sub_4016f1()
{
 call_asm_clobber();
 return;
}


// Function: call_asm_clobber at 0x401700
unsigned int call_asm_clobber()
{
 unsigned long v2 = 0; // ldt
 unsigned long v3 = 0; // gdt
 unsigned short v4 = 0; // gs
 unsigned int v5; // eax
 unsigned int idx; // ecx
 unsigned long v7[5]; // [bp-0x24]
 unsigned int v0; // [bp-0x10]

 v0 = 0;
 v5 = 0;
 for (idx = 0; idx < 5; idx += 1)
 {
 v5 += (&v7)[idx];
 }
 if (v0 != 0)
 {
 return param_asm_multi_insn(0, 0, 0);
 }
 return v5;
}


// Function: param_asm_multi_insn at 0x401750
char param_asm_multi_insn(char *a0, char *a1, unsigned int a2)
{
 char *iter; // edx
 char *cur; // ecx
 unsigned int result; // ebx
 char v3; // al

 iter = a0;
 cur = a1;
 for (result = a2; result; result -= 1)
 {
 v3 = *(cur);
 *(iter) = *(cur);
 iter += 1;
 cur += 1;
 }
 return v3;
}


// Function: sub_401772 at 0x401772
int sub_401772()
{
 call_asm_multi_insn();
 return;
}


// Function: call_asm_multi_insn at 0x401780
unsigned int call_asm_multi_insn()
{
 unsigned int result; // ebx
 unsigned long v8; // ldt
 unsigned long v9; // gdt
 unsigned short v10; // gs
 char *cur; // edx
 char *v12; // ecx
 char v0[4]; // [bp-0x3a]
 char v1[4]; // [bp-0x36]
 unsigned short v2; // [bp-0x32]
 char v3; // [bp-0x30]
 char v4; // [bp-0x2c]
 unsigned int v5; // [bp-0x10]

 result = 9;
 v5 = 0;
 strncpy(v0, "Hell", 4);
 cur = &v3;
 strncpy(v1, "o AS", 4);
 v12 = &v0;
 v2 = 77;
 memset(&v3, 0, 32);
 for (; result; result -= 1)
 {
 *(cur) = *(v12);
 cur += 1;
 v12 += 1;
 }
 if (v5 != 0)
 {
 __stack_chk_fail_local(0);
 return param_asm_simd((unsigned long long *)0, (unsigned long long *)0, (unsigned long long *)0);
 }
 return (v3 == 72 ? (v4 == 111 ? 42 : 4294967295) : 4294967295);
}


// Function: sub_401835 at 0x401835
void sub_401835()
{
}


// Function: param_asm_simd at 0x401850
unsigned int param_asm_simd(unsigned long long *a0, unsigned long long *a1, unsigned long long *ptr)
{
 *(ptr) = *(a0) + *(a1);
 return 0;
}


// Function: param_simd_intrinsics at 0x401870
unsigned int param_simd_intrinsics(unsigned long long *a0, unsigned long long *a1, unsigned long long *ptr)
{
 *(ptr) = *(a0) + *(a1);
 return 0;
}


// Function: sub_40188e at 0x40188e
void sub_40188e()
{
 call_asm_simd();
 return;
}


// Function: call_asm_simd at 0x401890
typedef struct struct_0_simd {
 char padding_0[2631];
 unsigned long long field_a47;
 unsigned long long field_a57;
} struct_0_simd;

int call_asm_simd()
{
 struct_0_simd *ptr; // eax
 unsigned long v6 = 0; // ldt
 unsigned long v7 = 0; // gdt
 unsigned short v8 = 0; // gs
 int v0; // [bp-0x4c]
 int v1; // [bp-0x3c]
 int v2; // [bp-0x20]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0x14]

 ptr = (struct_0_simd *)(__x86_get_pc_thunk_ax() + 10027);
 v3 = 0;
 v4 = 0;
 ((unsigned long long *)&v0)[0] = ((unsigned long long *)&ptr->padding_0[2052])[0];
 ((unsigned long long *)&v0)[1] = ((unsigned long long *)&ptr->padding_0[2060])[0];
 ((unsigned long long *)&v1)[0] = ((unsigned long long *)&ptr->padding_0[2036])[0];
 ((unsigned long long *)&v1)[1] = ((unsigned long long *)&ptr->padding_0[2044])[0];
 v2 = AddV(v0, v1);
 if (v3 != v4)
 {
 return param_asm_atomic();
 }
 return (int)(&v2)[0] + (int)(&v2)[1] + (int)(&v2)[2] + (int)(&v2)[3];
}


// Function: param_asm_atomic at 0x401910
int param_asm_atomic(unsigned int *a0, unsigned int a1)
{
 *(a0) += a1;
 return a1 + *(a0);
}


// Function: sub_401925 at 0x401925
void sub_401925(unsigned int a0, unsigned int a1)
{
 param_atomic_c11();
 return;
}


// Function: param_atomic_c11 at 0x401930
int param_atomic_c11(unsigned int *a0, unsigned int a1)
{
 *(a0) += a1;
 return *(a0) + a1;
}


// Function: sub_401945 at 0x401945
void sub_401945()
{
 call_asm_atomic();
 return;
}


// Function: call_asm_atomic at 0x401950
int call_asm_atomic()
{
 unsigned long v3; // ldt
 unsigned long v4; // gdt
 unsigned short v5; // gs
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 v1 = 20;
 v0 = 10;
 v0 += 5;
 if (v1 != v1)
 {
 param_dynamic_code(0);
 }
 return;
}


// Function: param_dynamic_code at 0x4019a0
unsigned int param_dynamic_code(unsigned int a0)
{
 unsigned int v0; // eax
 unsigned int v1; // eax

 v0 = sub_4010f0(30);
 v1 = sub_401100(0, v0, 7, 34, 4294967295, 0);
 if (v1 == 4294967295)
 return 4294967295;
 sub_401120(v1, v0);
 return a0 + 5;
}


// Function: sub_4019f9 at 0x4019f9
int sub_4019f9()
{
 param_memory_protection();
 return;
}


// Function: param_memory_protection at 0x401a00
unsigned int param_memory_protection()
{
 unsigned int v1; // edi
 unsigned int *p; // eax
 unsigned int *ptr; // esi
 unsigned int v4; // ebp

 v1 = sub_4010f0(30);
 p = sub_401100(0, v1, 3, 34, 4294967295, 0);
 if (p == 0xffffffff)
 return 4294967295;
 *(p) = 42;
 ptr = p;
 if (sub_4010d0(p, v1, 1))
 {
 sub_401120(ptr, v1);
 return 4294967294;
 }
 v4 = *(ptr);
 if (sub_4010d0(ptr, v1, 3))
 {
 sub_401120(ptr, v1);
 return 4294967293;
 }
 *(ptr) = 100;
 sub_401120(ptr, v1);
 return v4;
}


// Function: sub_401a8a at 0x401a8a
void sub_401a8a()
{
}


// Function: sub_401aa4 at 0x401aa4
void sub_401aa4()
{
}


// Function: sub_401ac3 at 0x401ac3
int sub_401ac3()
{
 param_clobber_importance(1, 2);
 return;
}


// Function: param_clobber_importance at 0x401ad0
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 return (a0 + a1) * 2;
}


// Function: call_asm_privileged at 0x401af0
unsigned int call_asm_privileged()
{
 unsigned int v2; // eax
 unsigned int v3; // eax
 char result; // dil
 unsigned int v5; // esi
 unsigned int v0; // [bp-0x20]

 v2 = sub_4010f0(30);
 v3 = sub_401100(0, v2, 7, 34, 4294967295, 0);
 if (v3 != 4294967295)
 {
 result = 1;
 v5 = 15;
 sub_401120(v3, v2);
 }
 else
 {
 result = 0;
 v5 = 4294967295;
 }
 v0 = 10;
 if (param_memory_protection() != 42)
 {
 return v5;
 }
 else if (result)
 {
 return (v0 + 10 == 20 ? 77 : 15);
 }
 else
 {
 return v5;
 }
}


// Function: sub_401b95 at 0x401b95
void sub_401b95()
{
 param_memory_clobber_demo();
 return;
}


// Function: param_memory_clobber_demo at 0x401ba0
typedef struct struct_0_memclob {
 char padding_0[9311];
 unsigned int field_245f;
} struct_0_memclob;

int param_memory_clobber_demo()
{
 struct_0_memclob *v1; // ecx

 __x86_get_pc_thunk_cx();
 return 50 + *((int *)&v1->padding_0[1]);
}


// Function: sub_401bc1 at 0x401bc1
int sub_401bc1()
{
 char v0; // [bp+0x0]
 test_asm_features(&v0);
 return;
}


// Function: test_asm_features at 0x401bd0
extern unsigned int g_40211b;
extern unsigned int g_402137;
extern unsigned int g_402153;
extern unsigned int g_40216f;
extern unsigned int g_40218b;
extern unsigned int g_4021a7;
extern unsigned int g_402294;

int test_asm_features(char *a0)
{
 unsigned long v11; // ldt
 unsigned long v12; // gdt
 unsigned short v13; // gs
 unsigned int v14; // eax
 unsigned int idx; // ecx
 unsigned int result; // edi
 char *cur; // edx
 char *v18; // ecx
 unsigned int v0; // [bp-0x80]
 unsigned long long v1; // [bp-0x7c]
 unsigned long long v2; // [bp-0x6c]
 int v3; // [bp-0x50]
 int temp_array; // [bp-0x50]
 char v4[4]; // [bp-0x3a]
 char v5[4]; // [bp-0x36]
 unsigned short v6; // [bp-0x32]
 char v7; // [bp-0x30]
 char v8; // [bp-0x2c]
 unsigned int v9; // [bp-0x10]

 v9 = 20;
 sub_401110(1, &g_402294);
 sub_401110(1, &g_40211b, 15);
 v14 = 0;
 for (idx = 0; idx < 5; idx += 1)
 {
 v14 += idx; /* Simplified loop */
 }
 result = 9;
 sub_401110(1, &g_402137, v14);
 strncpy(v4, "Hell", 4);
 cur = &v7;
 strncpy(v5, "o AS", 4);
 v18 = &v4;
 v6 = 77;
 memset(&v7, 0, 32);
 for (; result; result -= 1)
 {
 *(cur) = *(v18);
 cur += 1;
 v18 += 1;
 }
 sub_401110(1, &g_402153, (v7 == 72 ? (v8 == 111 ? 42 : 4294967295) : 4294967295));
 v1 = 316912650112397582603894390785ULL;
 v2 = 633825300243241909290088267781ULL;
 *((unsigned long long *)&v3) = AddV(v1, v2);
 sub_401110(1, &g_40216f, (int)(&v3)[4] + (int)v3 + (int)(&v3)[8] + (int)(&v3)[12]);
 v0 = 10;
 atomic_exchange_add(&v0, 5);
 sub_401110(1, &g_40218b, v0 * 2 + 5);
 sub_401110(1, &g_4021a7, call_asm_privileged(), 0, 0);
 if (v9 == v9)
 return 0;
 return 0;
}


// Function: sub_401da8 at 0x401da8
void sub_401da8()
{
}


// Function: __x86.get_pc_thunk_ax at 0x401dbf
unsigned int __x86_get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}



unsigned int __x86_get_pc_thunk_cx()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: sub_401dc7 at 0x401dc7
int sub_401dc7()
{
 __stack_chk_fail_local();
 return;
}


// Function: __stack_chk_fail_local at 0x401dd0
int __stack_chk_fail_local()
{
 unsigned int v2 = 0; // ebx
 unsigned int v0; // [bp-0x4]
 unsigned int v3 = 0; // ecx
 unsigned int v6 = 0; // esi
 unsigned int v10 = 0; // eax

 v0 = v2;
 sub_4010e0();
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

typedef struct struct_1_ctors {
 unsigned int field_0;
} struct_1_ctors;

 unsigned int __do_global_ctors_aux()
{
 struct struct_0 *v2; // edx
 struct struct_0 *ptr; // edx
 unsigned int (*v4)(); // eax
 unsigned int v5; // ebx
 struct struct_0 *v6; // ebx
 struct struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 v2 = (struct struct_0 *)(size_t)__x86_get_pc_thunk_dx();
 ptr = (struct struct_0 *)((char *)v2 + 227);
 v4 = (unsigned int (*)())*((unsigned int **)((char *)ptr + 232));
 if (*((int *)&ptr->padding_0[232]) == 0xffffffff)
 return 4294967295;
 v0 = 0;
 v5 = 0;
 v6 = (struct struct_0 *)&ptr->padding_0[232];
 do
 {
 p = v6;
 if (v4 != 0) 
 {
 v4();
 }
 v4 = (unsigned int (*)())(size_t)(*(unsigned int *)(&p->padding_0[4]));
 v6 = (struct struct_0 *)&p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_401e32 at 0x401e32
void sub_401e32()
{
}



/* CRT stub function _fini removed by preprocessor */


