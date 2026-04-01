// Angr Decompilation of 5-23_gcc_O1_no_g
// Platform: X86


/* CRT stub function _init removed by preprocessor */

typedef struct struct_0 {
 char padding_0[44];
 unsigned int field_2c;
 unsigned int field_28;
 unsigned int field_24;
 unsigned int field_20;
 unsigned int field_1c;
 unsigned int field_18;
 unsigned int field_14;
 unsigned int field_10;
 unsigned int field_c;
} struct_0;

extern struct_0 *g_403ff4;

// __x86.thunk functions - typically implemented in assembly
void __get_pc_thunk_bx(void);
void __get_pc_thunk_dx(void);
void __get_pc_thunk_di(int);
void __get_pc_thunk_cx(void);

int _init()
{
 (void)g_403ff4;
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030(unsigned int a0, unsigned int a1, unsigned int a2)
{
 (void)a0;
 (void)a1;
 (void)a2;
 return 0;
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
 sub_401030(0, 0, 0);
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
 sub_401030(8, 0, 0);
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
 sub_401030(16, 0, 0);
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
 sub_401030(24, 0, 0);
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
 sub_401030(32, 0, 0);
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
 sub_401030(40, 0, 0);
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
 sub_401030(48, 0, 0);
 return;
}


// Function: sub_4010ae at 0x4010ae
int sub_4010ae()
{
 sub_4010b0();
 return;
}


// Function: sub_4010b0 at 0x4010b0
int sub_4010b0(struct_0 *v1)
{
 goto *((void*)v1->field_2c);
}


// Function: sub_4010ba at 0x4010ba
int sub_4010ba()
{
 sub_4010c0();
 return;
}


// Function: sub_4010c0 at 0x4010c0
int sub_4010c0(struct_0 *v1)
{
 goto *((void*)v1->field_c);
}


// Function: sub_4010ca at 0x4010ca
int sub_4010ca()
{
 sub_4010d0();
 return;
}


// Function: sub_4010d0 at 0x4010d0
int sub_4010d0(struct_0 *v1)
{
 goto *((void*)v1->field_10);
}


// Function: sub_4010da at 0x4010da
int sub_4010da()
{
 sub_4010e0();
 return;
}


// Function: sub_4010e0 at 0x4010e0
int sub_4010e0(struct_0 *v1)
{
 goto *((void*)v1->field_14);
}


// Function: sub_4010ea at 0x4010ea
int sub_4010ea()
{
 sub_4010f0();
 return;
}


// Function: sub_4010f0 at 0x4010f0
int sub_4010f0(struct_0 *v1)
{
 goto *((void*)v1->field_18);
}


// Function: sub_4010fa at 0x4010fa
int sub_4010fa()
{
 sub_401100();
 return;
}


// Function: sub_401100 at 0x401100
int sub_401100(struct_0 *v1, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 (void)a1;
 (void)a2;
 (void)a3;
 (void)a4;
 (void)a5;
 goto *((void*)v1->field_1c);
}


// Function: sub_40110a at 0x40110a
int sub_40110a()
{
 sub_401110();
 return;
}


// Function: sub_401110 at 0x401110
// Fixed: declared as variadic function to match printf-like usage
int sub_401110(int a0, const char *a1, ...)
{
 (void)a0;
 (void)a1;
 return 0;
}


// Function: sub_40111a at 0x40111a
int sub_40111a()
{
 sub_401120();
 return;
}


// Function: sub_401120 at 0x401120
int sub_401120(struct_0 *v1, unsigned int a1)
{
 (void)a1;
 goto *((void*)v1->field_24);
}


// Function: sub_40112a at 0x40112a
void sub_40112a()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40115c at 0x40115c
void sub_40115c()
{
 return;
}


// Function: __get_pc_thunk_bx at 0x401160
void __get_pc_thunk_bx()
{
 return;
}


// Function: sub_401164 at 0x401164
void sub_401164()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

void deregister_tm_clones(void)
{
 unsigned int *ptr; // edx

 __get_pc_thunk_dx();
 ptr = (unsigned int *)0xdeadbeef; // dummy initialization
 (void)((char *)&ptr[2981] + 3);
 return;
}


// Function: sub_4011a3 at 0x4011a3
void sub_4011a3()
{
}


// Function: sub_4011a9 at 0x4011a9
void sub_4011a9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

// Forward declaration for register_tm_clones - fixed return type
void register_tm_clones(void);

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

void *register_tm_clones_impl(void)
{
 struct_0 *v2; // edx
 struct_0 *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]

 __get_pc_thunk_dx();
 v3 = &v2->padding_0[11791];
 v0 = v4;
 if (!(&v3->padding_0[72] - &v3->padding_0[72] >> 31) + (&v3->padding_0[72] - &v3->padding_0[72] >> 2) >> 1)
 {
 return (&v3->padding_0[72] - &v3->padding_0[72] >> 31) + (&v3->padding_0[72] - &v3->padding_0[72] >> 2) >> 1;
 }
 else if (*((int *)&v3->padding_0[56]))
 {
 return (*((int *)&v3->padding_0[56]))(&v3->padding_0[72], (&v3->padding_0[72] - &v3->padding_0[72] >> 31) + (&v3->padding_0[72] - &v3->padding_0[72] >> 2) >> 1);
 }
 else
 {
 return (&v3->padding_0[72] - &v3->padding_0[72] >> 31) + (&v3->padding_0[72] - &v3->padding_0[72] >> 2) >> 1;
 }
}


// Function: sub_4011f7 at 0x4011f7
void sub_4011f7()
{
 __do_global_dtors_aux();
 return;
}



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

 v5 = __get_pc_thunk_di(*((int *)&v2), &v3);
 ptr = &v6->padding_0[11703];
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[72])
 return v5;
 if (*((int *)&ptr->padding_0[44]))
 sub_4010b0(*((int *)&ptr->padding_0[64]));
 v10 = &ptr->padding_0[224];
 v11 = *((int *)&ptr->padding_0[76]);
 i = (&ptr->padding_0[220] - v10 >> 2) - 1;
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
 v14 = deregister_tm_clones();
 ptr->padding_0[72] = 1;
 return v14;
}


// Function: sub_40128a at 0x40128a
void sub_40128a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __get_pc_thunk_dx at 0x401299
void __get_pc_thunk_dx()
{
 return;
}


// Function: __get_pc_thunk_di at 0x40129d
int __get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: param_macro_constants at 0x4012a1
unsigned int param_macro_constants(unsigned int a0)
{
 if (a0 <= 0x400)
 return 0x200;
 return 64;
}


// Function: call_macro_constants at 0x4012bb
unsigned int call_macro_constants()
{
 return 64;
}


// Function: param_macro_functions at 0x4012c5
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


// Function: call_macro_functions at 0x4012de
unsigned int call_macro_functions()
{
 return 30;
}


// Function: param_conditional_compile at 0x4012e8
int param_conditional_compile(unsigned int a0)
{
 return a0 * 3 + 2;
}


// Function: call_conditional_compile at 0x4012f5
unsigned int call_conditional_compile()
{
 return 32;
}


// Function: param_multi_branch_compile at 0x4012ff
int param_multi_branch_compile(unsigned int a0)
{
 return a0 * 5 + 57072;
}


// Function: call_multi_branch_compile at 0x40130f
unsigned int call_multi_branch_compile()
{
 return 57122;
}


// Function: param_macro_recursion at 0x401319
int param_macro_recursion(unsigned int a0)
{
 return a0 + 16;
}


// Function: call_macro_recursion at 0x401325
unsigned int call_macro_recursion()
{
 return 116;
}


// Function: param_stringize at 0x40132f
unsigned int param_stringize()
{
 return 19;
}


// Function: call_stringize at 0x401339
unsigned int call_stringize()
{
 return 19;
}


// Function: my_func at 0x401343
unsigned int my_func(unsigned int a0)
{
 return a0 * 10;
}


// Function: param_token_paste at 0x401351
int param_token_paste(unsigned int a0)
{
 return a0 * 11 + 5;
}


// Function: call_token_paste at 0x401361
unsigned int call_token_paste()
{
 return 60;
}


// Function: param_variadic_macro at 0x40136b
unsigned int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
 sub_401110(1, "LOG: Values: %d, %d, %d\n", a0, a1, a2);
 return a0 + 50;
}


// Function: call_variadic_macro at 0x4013a3
unsigned int call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


// Function: param_macro_override at 0x4013b9
int param_macro_override(unsigned int a0)
{
 return a0 * 3 + 1;
}


// Function: call_macro_override at 0x4013c6
unsigned int call_macro_override()
{
 return 16;
}


// Function: param_include_guard at 0x4013d0
unsigned int param_include_guard()
{
 return 500;
}


// Function: call_include_guard at 0x4013da
unsigned int call_include_guard()
{
 return 500;
}


// Function: param_builtin_macros at 0x4013e4
int param_builtin_macros(unsigned int a0)
{
 sub_401110(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "02:59:50");
 return a0 + 282;
}


// Function: call_builtin_macros at 0x401434
unsigned int call_builtin_macros()
{
 return param_builtin_macros(100);
}


// Function: test_preprocessing_features at 0x401446
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

int test_preprocessing_features()
{
 sub_401110(1, &g_4021f4);
 sub_401110(1, &g_402041, 64);
 sub_401110(1, &g_40205c, 30);
 sub_401110(1, &g_402077, 32);
 sub_401110(1, &g_40221c, 57122);
 sub_401110(1, &g_402092, 116);
 sub_401110(1, &g_40223c, 19);
 sub_401110(1, &g_4020ae, 60);
 sub_401110(1, &g_4020c9, call_variadic_macro());
 sub_401110(1, &g_4020e4, 16);
 sub_401110(1, &g_4020ff, 500);
 return sub_401110(1, &g_402268, call_builtin_macros());
}


// Function: param_asm_basic at 0x40154b
int param_asm_basic(unsigned int a0)
{
 return a0 + 10;
}


// Function: call_asm_basic at 0x40155d
unsigned int call_asm_basic()
{
 return param_asm_basic(5);
}


// Function: param_asm_clobber at 0x40156c
unsigned int param_asm_clobber(unsigned int ptr, unsigned int a1)
{
 unsigned int v0; // eax
 unsigned int idx; // ecx

 v0 = 0;
 for (idx = 0; idx < a1; idx += 1)
 {
 v0 += *((int *)(ptr + idx * 4));
 }
 return v0;
}


// Function: call_asm_clobber at 0x40158d
unsigned int call_asm_clobber()
{
 char v0; // [bp-0x24]

 return param_asm_clobber((unsigned int)&v0, 5);
}


// Function: param_asm_multi_insn at 0x4015c5
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


// Function: call_asm_multi_insn at 0x4015e7
unsigned int call_asm_multi_insn()
{
 unsigned long v5; // ldt
 unsigned long v6; // gdt
 unsigned short v7; // gs
 char v0[10]; // [bp-0x3a]
 char v1; // [bp-0x30]
 char v2; // [bp-0x2c]
 unsigned int v3; // [bp-0x10]

 v3 = *((int *)_ccall(v5, v6, (unsigned int)v7, 20));
 strncpy(v0, "Hello ASM", 9);
 memset(&v1, 0, 32);
 param_asm_multi_insn(&v1, &v0, 9);
 if (v3 == *((int *)_ccall(v5, v6, (unsigned int)v7, 20)))
 return (v1 == 72 ? (v2 == 111 ? 42 : 4294967295) : 4294967295);
 __stack_chk_fail_local();
}


// Function: param_asm_simd at 0x40169b
unsigned int param_asm_simd(unsigned long long *a0, unsigned long long *a1, unsigned long long *ptr)
{
 *(ptr) = AddV(*(a0), *(a1));
 return 0;
}


// Function: param_simd_intrinsics at 0x4016be
unsigned int param_simd_intrinsics(unsigned long long *a0, unsigned long long *a1, unsigned long long *ptr)
{
 *(ptr) = AddV(*(a1), *(a0));
 return 0;
}


// Function: call_asm_simd at 0x4016df
int call_asm_simd()
{
 unsigned long v14; // ldt
 unsigned long v15; // gdt
 unsigned short v16; // gs
 unsigned int result; // [bp-0x40]
 unsigned int v1; // [bp-0x3c]
 unsigned int v2; // [bp-0x38]
 unsigned int v3; // [bp-0x34]
 unsigned int v4; // [bp-0x30]
 unsigned int v5; // [bp-0x2c]
 unsigned int v6; // [bp-0x28]
 unsigned int v7; // [bp-0x24]
 char v8; // [bp-0x20], Other Possible Types: unsigned int
 unsigned int v9; // [bp-0x1c]
 unsigned int v10; // [bp-0x18]
 unsigned int v11; // [bp-0x14]
 unsigned int v12; // [bp-0x10]

 v12 = *((int *)_ccall(v14, v15, (unsigned int)v16, 20));
 result = 1;
 v1 = 2;
 v2 = 3;
 v3 = 4;
 v4 = 5;
 v5 = 6;
 v6 = 7;
 v7 = 8;
 param_asm_simd(&result, &v4, &v8);
 if (v12 == *((int *)_ccall(v14, v15, (unsigned int)v16, 20)))
 return v9 + v8 + v10 + v11;
 __stack_chk_fail_local();
}


// Function: param_asm_atomic at 0x40176f
int param_asm_atomic(unsigned int *a0, unsigned int a1)
{
 atomic_exchange_add(a0, a1);
 return a1 + *(a0);
}


// Function: param_atomic_c11 at 0x401784
int param_atomic_c11(unsigned int *a0, unsigned int a1)
{
 atomic_exchange_add(a0, a1);
 return *(a0) + a1;
}


// Function: call_asm_atomic at 0x401799
unsigned int call_asm_atomic()
{
 unsigned long v3; // ldt
 unsigned long v4; // gdt
 unsigned short v5; // gs
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 v1 = *((int *)_ccall(v3, v4, (unsigned int)v5, 20));
 v0 = 10;
 atomic_exchange_add(&v0, 5);
 if (v1 == *((int *)_ccall(v3, v4, (unsigned int)v5, 20)))
 return v0;
 __stack_chk_fail_local();
 return 0;
}


// Function: param_dynamic_code at 0x4017df
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


// Function: param_memory_protection at 0x401839
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
 ptr = p;
 *(p) = 42;
 if (sub_4010d0(p))
 {
 sub_401120(ptr, v1);
 return 4294967294;
 }
 v4 = *(ptr);
 if (sub_4010d0(ptr))
 {
 sub_401120(ptr, v1);
 return 4294967293;
 }
 *(ptr) = 100;
 sub_401120(ptr, v1);
 return v4;
}


// Function: param_clobber_importance at 0x4018ef
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 return (a0 + a1) * 2;
}


// Function: call_asm_privileged at 0x40190f
unsigned int call_asm_privileged()
{
 unsigned int v1; // ebx
 unsigned int v2; // eax
 unsigned int v3; // eax

 v1 = param_dynamic_code(10);
 v2 = param_memory_protection();
 v3 = param_clobber_importance(3, 7);
 if (!(v2 == 42 & v1 == 15))
 {
 return v1;
 }
 else if (v3 == 20)
 {
 return 77;
 }
 else
 {
 return v1;
 }
}


// Function: param_memory_clobber_demo at 0x40195a
typedef struct struct_0 {
 char padding_0[9893];
 unsigned int field_26a5;
} struct_0;

int param_memory_clobber_demo()
{
 struct_0 *v1; // ecx

 __get_pc_thunk_cx();
 return 50 + *((int *)&(&v1->padding_0)[1]);
}


// Function: test_asm_features at 0x40197b
extern unsigned int g_40211b;
extern unsigned int g_402137;
extern unsigned int g_402153;
extern unsigned int g_40216f;
extern unsigned int g_40218b;
extern unsigned int g_4021a7;
extern unsigned int g_402294;

int test_asm_features()
{
 unsigned int v1; // eax
 unsigned int v4; // eax

 sub_401110(1, &g_402294);
 v1 = call_asm_basic();
 sub_401110(1, &g_40211b, v1);
 sub_401110(1, &g_402137, call_asm_clobber(1, &g_40211b, v1));
 sub_401110(1, &g_402153, call_asm_multi_insn());
 v4 = call_asm_simd();
 sub_401110(1, &g_40216f, v4);
 sub_401110(1, &g_40218b, call_asm_atomic(1, &g_40216f, v4));
 return sub_401110(1, &g_4021a7, call_asm_privileged());
}


// Function: main at 0x401a2b
unsigned int main()
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


// Function: __get_pc_thunk_cx at 0x401a46
void __get_pc_thunk_cx()
{
 return;
}


// Function: sub_401a4a at 0x401a4a
int sub_401a4a()
{
 __stack_chk_fail_local();
 return;
}


// Function: __stack_chk_fail_local at 0x401a50
int __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 sub_4010e0();
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

 __get_pc_thunk_dx();
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


// Function: sub_401ab2 at 0x401ab2
void sub_401ab2()
{
}



/* CRT stub function _fini removed by preprocessor */


