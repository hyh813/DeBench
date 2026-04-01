// Angr Decompilation of 5-23_gcc_O0_no_g
// Platform: X86


/* CRT stub function _init removed by preprocessor */

// Declare __x86 helper functions
extern int __x86_get_pc_thunk_ax();
extern int __x86_get_pc_thunk_bx();
extern int __x86_get_pc_thunk_cx();
extern int __x86_get_pc_thunk_dx();
extern int __x86_get_pc_thunk_di(int a0);

// Define __int128 type for SIMD operations
typedef unsigned char __int128_t[16];

// Declare AddV function for SIMD
extern unsigned long long AddV(unsigned long long a0, unsigned long long a1);

// Define AddV function for SIMD
unsigned long long AddV(unsigned long long a0, unsigned long long a1)
{
 return a0 + a1;
}

// Declare other missing functions
extern int* _ccall(unsigned long v3, unsigned long v4, unsigned int v5, int a3);
extern int atomic_exchange_add(unsigned int *ptr, unsigned int a1);
extern int strncpy(char *dest, const char *src, int n);
extern int memset(void *s, int c, int n);

// Define atomic_exchange_add
int atomic_exchange_add(unsigned int *ptr, unsigned int a1)
{
 unsigned int old = *ptr;
 *ptr += a1;
 return old;
}

// Define _ccall
int* _ccall(unsigned long v3, unsigned long v4, unsigned int v5, int a3)
{
 static int dummy = 0;
 return &dummy;
}

typedef struct struct_0 {
 char padding_0[12];
 unsigned int field_c;
 unsigned int field_10;
 unsigned int field_14;
 unsigned int field_18;
 unsigned int field_1c;
 unsigned int field_20;
 unsigned int field_24;
 unsigned int field_28;
 unsigned int field_2c;
 unsigned int field_30;
 unsigned int field_34;
 char padding_1[8675];
 unsigned int field_221b;
} struct_0;

extern int (*g_403ff4)();

// _init removed - CRT function provided by linker


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int v0; // [bp-0x4]

 return 0;
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
int sub_4010ce()
{
 sub_4010d0();
 return;
}


// Function: sub_4010d0 at 0x4010d0
int sub_4010d0()
{
 struct_0 *v1; // ebx

 return ((int(*)())v1->field_34)();
}


// Function: sub_4010da at 0x4010da
int sub_4010da()
{
 sub_4010e0();
 return;
}


// Function: sub_4010e0 at 0x4010e0
int sub_4010e0()
{
 struct_0 *v1; // ebx

 return ((int(*)())v1->field_c)();
}


// Function: sub_4010ea at 0x4010ea
int sub_4010ea()
{
 sub_4010f0();
 return;
}


// Function: sub_4010f0 at 0x4010f0
int sub_4010f0()
{
 struct_0 *v1; // ebx

 return ((int(*)())v1->field_10)();
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

 return ((int(*)())v1->field_14)();
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

 return ((int(*)())v1->field_18)();
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

 return ((int(*)())v1->field_1c)();
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

 return ((int(*)())v1->field_20)();
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

 return ((int(*)())v1->field_24)();
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

 return ((int(*)())v1->field_28)();
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

 return ((int(*)())v1->field_2c)();
}


// Function: sub_40116a at 0x40116a
void sub_40116a()
{
 return;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40119c at 0x40119c
int sub_40119c()
{
 return 0;
}


// Function: __x86_get_pc_thunk_bx at 0x4011a0
int __x86_get_pc_thunk_bx()
{
 return 0;
}


// Function: sub_4011a4 at 0x4011a4
int sub_4011a4()
{
 deregister_tm_clones();
 return 0;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

int deregister_tm_clones()
{
 unsigned int *ptr; // edx

 __x86_get_pc_thunk_dx();
 return 0;
}


// Function: sub_4011e3 at 0x4011e3
int sub_4011e3()
{
 return 0;
}


// Function: sub_4011e9 at 0x4011e9
int sub_4011e9()
{
 register_tm_clones();
 return 0;
}



/* CRT stub function register_tm_clones removed by preprocessor */

int register_tm_clones()
{
 return 0;
}


// Function: sub_401237 at 0x401237
int sub_401237()
{
 __do_global_dtors_aux();
 return 0;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

int __do_global_dtors_aux()
{
 return 0;
}


// Function: sub_4012ca at 0x4012ca
int sub_4012ca()
{
 frame_dummy();
 return 0;
}



/* CRT stub function frame_dummy removed by preprocessor */

int frame_dummy()
{
 return 0;
}



// Function: __x86_get_pc_thunk_dx at 0x4012d9
int __x86_get_pc_thunk_dx()
{
 return 0;
}


// Function: __x86_get_pc_thunk_di at 0x4012dd
int __x86_get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: param_macro_constants at 0x4012e1
unsigned int param_macro_constants(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return (a0 <= 0x400 ? 0x200 : 64);
}


// Function: call_macro_constants at 0x401309
unsigned int call_macro_constants()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return param_macro_constants(0x800);
}


// Function: param_macro_functions at 0x401329
int param_macro_functions(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // eax
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 if (a1 >= a0)
 v1 = a1;
 else
 v1 = a0;
 return v1 + a0 * a0;
}


// Function: call_macro_functions at 0x401351
unsigned int call_macro_functions()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return param_macro_functions(5, 3);
}


// Function: param_conditional_compile at 0x401370
int param_conditional_compile(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = a0;
 v0 = v0 * 3 + 2;
 return v0;
}


// Function: call_conditional_compile at 0x40139e
unsigned int call_conditional_compile()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return param_conditional_compile(10);
}


// Function: param_multi_branch_compile at 0x4013bb
int param_multi_branch_compile(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return a0 * 5 + 57072;
}


// Function: call_multi_branch_compile at 0x4013dd
unsigned int call_multi_branch_compile()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return param_multi_branch_compile(10);
}


// Function: param_macro_recursion at 0x4013fa
int param_macro_recursion(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return a0 + 16;
}


// Function: call_macro_recursion at 0x401413
unsigned int call_macro_recursion()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return param_macro_recursion(100);
}


// Function: param_stringize at 0x401430
int param_stringize()
{
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]

 v0 = "Hello World";
 v1 = "1_2.3";
 v2 = "155";
 v4 = sub_401150(v0);
 v5 = sub_401150(v1);
 return sub_401150(v2) + v4 + v5;
}


// Function: call_stringize at 0x401499
unsigned int call_stringize()
{
 unsigned int result; // [bp-0x1c]

 __x86_get_pc_thunk_ax();
 result = 0;
 return param_stringize();
}


// Function: my_func at 0x4014bc
unsigned int my_func(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return a0 * 10;
}


// Function: param_token_paste at 0x4014db
unsigned int param_token_paste(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = my_func(a0);
 v1 = a0 + 5;
 v0 += v1;
 return v0;
}


// Function: call_token_paste at 0x401511
unsigned int call_token_paste()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return param_token_paste(5);
}


// Function: param_variadic_macro at 0x40152e
unsigned int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v2; // eax
 unsigned long v3; // ldt
 unsigned long v4; // gdt
 unsigned short v5; // gs
 unsigned int v0; // [bp-0x28]
 unsigned int v1; // [bp-0x10]

 v2 = __x86_get_pc_thunk_ax();
 v1 = *((int *)_ccall(v3, v4, (unsigned int)v5, 20));
 sub_401100(v2 - -2784, a0, a1, a2);
 v0 = 5;
 if (v1 == *((int *)_ccall(v3, v4, (unsigned int)v5, 20)))
 return a0 + v0 * 10;
 return __stack_chk_fail_local();
}


// Function: call_variadic_macro at 0x401599
unsigned int call_variadic_macro()
{
 __x86_get_pc_thunk_ax();
 return param_variadic_macro(10, 20, 30);
}


// Function: param_macro_override at 0x4015c0
int param_macro_override(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = a0 + 1;
 v1 = a0 * 2;
 return v1 + v0;
}


// Function: call_macro_override at 0x4015ef
unsigned int call_macro_override()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return param_macro_override(5);
}


// Function: header_func at 0x40160c
unsigned int header_func(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return a0 * 100;
}


// Function: param_include_guard at 0x401625
unsigned int param_include_guard()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return header_func(5);
}


// Function: call_include_guard at 0x401642
unsigned int call_include_guard()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return param_include_guard();
}


// Function: param_builtin_macros at 0x40165a
int param_builtin_macros(unsigned int a0)
{
 unsigned int v8; // eax
 unsigned int v0; // [bp-0x2c]
 unsigned int v1; // [bp-0x28]
 unsigned int v2; // [bp-0x24]
 unsigned int v3; // [bp-0x20]
 unsigned int v4; // [bp-0x1c]
 unsigned int result; // [bp-0x18]
 unsigned int flag1; // [bp-0x14]
 unsigned int v7; // [bp-0x10]

 v8 = __x86_get_pc_thunk_ax() + 10578;
 v0 = v8 - 8069;
 v1 = 279;
 v2 = v8 - 7400;
 v3 = v8 - 8058;
 v4 = v8 - 8046;
 sub_401100(v8 - 8036, v0, v2, v1, v3, v4);
 result = 0;
 flag1 = 1;
 v7 = 2;
 return v7 + a0 + v1 + result + flag1;
}


// Function: call_builtin_macros at 0x4016ee
unsigned int call_builtin_macros()
{
 __x86_get_pc_thunk_ax();
 return param_builtin_macros(100);
}


// Function: test_preprocessing_features at 0x401711
// Define global variables
unsigned int g_402088 = 0;
unsigned int g_4020af = 0;
unsigned int g_4020ca = 0;
unsigned int g_4020e5 = 0;
unsigned int g_402100 = 0;
unsigned int g_40211f = 0;
unsigned int g_40213c = 0;
unsigned int g_402166 = 0;
unsigned int g_402181 = 0;
unsigned int g_40219c = 0;
unsigned int g_4021b7 = 0;
unsigned int g_4021d4 = 0;

int test_preprocessing_features()
{
 sub_401130(&g_402088);
 sub_401100(&g_4020af, call_macro_constants());
 sub_401100(&g_4020ca, call_macro_functions());
 sub_401100(&g_4020e5, call_conditional_compile());
 sub_401100(&g_402100, call_multi_branch_compile());
 sub_401100(&g_40211f, call_macro_recursion());
 sub_401100(&g_40213c, call_stringize());
 sub_401100(&g_402166, call_token_paste());
 sub_401100(&g_402181, call_variadic_macro());
 sub_401100(&g_40219c, call_macro_override());
 sub_401100(&g_4021b7, call_include_guard());
 return sub_401100(&g_4021d4, call_builtin_macros());
}


// Function: param_asm_basic at 0x401847
int param_asm_basic(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = a0 + 10;
 return v0;
}


// Function: call_asm_basic at 0x40186d
unsigned int call_asm_basic()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return param_asm_basic(5);
}


// Function: param_asm_clobber at 0x40188a
unsigned int param_asm_clobber(unsigned int ptr, unsigned int a1)
{
 unsigned int v1; // eax
 unsigned int idx; // ecx
 unsigned int v0; // [bp-0xc]

 __x86_get_pc_thunk_ax();
 v0 = 0;
 v1 = 0;
 for (idx = 0; idx < a1; idx += 1)
 {
 v1 += *((int *)(ptr + idx * 4));
 }
 v0 = v1;
 return v0;
}


// Function: call_asm_clobber at 0x4018c7
unsigned int call_asm_clobber()
{
 unsigned long v7; // ldt
 unsigned long v8; // gdt
 unsigned short v9; // gs
 unsigned int v10; // eax
 unsigned int result; // [bp-0x24]
 unsigned int v1; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 unsigned int v3; // [bp-0x18]
 unsigned int v4; // [bp-0x14]
 unsigned int v5; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v5 = *((int *)_ccall(v7, v8, (unsigned int)v9, 20));
 result = 1;
 v1 = 2;
 v2 = 3;
 v3 = 4;
 v4 = 5;
 v10 = param_asm_clobber(&result, 5);
 if (v5 == *((int *)_ccall(v7, v8, (unsigned int)v9, 20)))
 return v10;
 return __stack_chk_fail_local();
}


// Function: param_asm_multi_insn at 0x40192a
unsigned int param_asm_multi_insn(char *a0, char *a1, unsigned int a2)
{
 unsigned int v2; // eax
 char *iter; // ebx
 char *cur; // ecx
 unsigned int result; // edx
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 __x86_get_pc_thunk_di(*((int *)&v0));
 iter = a0;
 cur = a1;
 for (result = a2; result; result -= 1)
 {
 v2 = v2 & 0xffffff00 | *(cur);
 *(iter) = *(cur);
 iter += 1;
 cur += 1;
 }
 return v2;
}


// Function: call_asm_multi_insn at 0x401969
unsigned int call_asm_multi_insn()
{
 unsigned long v5; // ldt
 unsigned long v6; // gdt
 unsigned short v7; // gs
 unsigned int v8; // eax
 char v0[10]; // [bp-0x3a]
 char v1; // [bp-0x30]
 char v2; // [bp-0x2c]
 unsigned int v3; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v3 = *((int *)_ccall(v5, v6, (unsigned int)v7, 20));
 strncpy(v0, "Hello ASM", 9);
 memset(&v1, 0, 32);
 param_asm_multi_insn(&v1, &v0, 9);
 if (v1 == 72 && v2 == 111)
 v8 = 42;
 else
 v8 = 4294967295;
 if (v3 != *((int *)_ccall(v5, v6, (unsigned int)v7, 20)))
 v8 = __stack_chk_fail_local();
 return v8;
}


// Function: param_asm_simd at 0x401a15
unsigned int param_asm_simd(unsigned long long *a0, unsigned long long *a1, unsigned long long *ptr)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 *(ptr) = AddV(*(a0), *(a1));
 return 0;
}


// Function: param_simd_intrinsics at 0x401a43
unsigned int param_simd_intrinsics(void* ptr, void* p, unsigned long long *addr)
{
 int v0; // [bp-0x6c]
 int v1; // [bp-0x5c]
 int v2; // [bp-0x4c]
 char v3; // [bp-0x3c]
 char v4; // [bp-0x2c]
 char v5; // [bp-0x1c]

 __x86_get_pc_thunk_ax();
 memcpy(&v0, ptr, 16);
 memcpy(&v1, p, 16);
 memcpy(&v4, &v0, 16);
 memcpy(&v5, &v1, 16);
 memcpy(&v2, &v5, 16);
 memcpy(&v3, &v2, 16);
 memcpy(addr, &v3, 16);
 return 0;
}


// Function: call_asm_simd at 0x401abf
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

 __x86_get_pc_thunk_ax();
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
 return v11 + v8 + v9 + v10;
 return __stack_chk_fail_local();
}


// Function: param_asm_atomic at 0x401b4f
int param_asm_atomic(unsigned int *ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 atomic_exchange_add(ptr, a1);
 v0 = *(ptr);
 return a1 + v0;
}


// Function: param_atomic_c11 at 0x401b7a
int param_atomic_c11(unsigned int *a0, unsigned int a1)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 atomic_exchange_add(a0, a1);
 return a1 + *(a0);
}


// Function: call_asm_atomic at 0x401b9c
unsigned int call_asm_atomic()
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 unsigned int v0[1]; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v2 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 v0[0] = 10;
 v1 = param_asm_atomic(&v0, 5);
 if (v2 == *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 return v1 + *(v0);
 return __stack_chk_fail_local();
}


// Function: param_dynamic_code at 0x401bee
unsigned int param_dynamic_code(unsigned int a0)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]

 v0 = sub_401120(30);
 v1 = sub_401140(0, v0, 7, 34, 4294967295, 0);
 if (v1 != 4294967295)
 {
 v2 = a0 + 5;
 sub_401160(v1, v0);
 return v2;
 }
 return 4294967295;
}


// Function: param_memory_protection at 0x401c5e
unsigned int param_memory_protection()
{
 unsigned int v0; // [bp-0x1c]
 unsigned int *v1; // [bp-0x18]
 unsigned int *ptr; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 v0 = sub_401120(30);
 v1 = sub_401140(0, v0, 3, 34, 4294967295, 0);
 if (v1 == 0xffffffff)
 return 4294967295;
 ptr = v1;
 *(ptr) = 42;
 if (sub_4010f0(v1, v0, 1))
 {
 sub_401160(v1, v0);
 return 4294967294;
 }
 v3 = *(ptr);
 if (!sub_4010f0(v1, v0, 3))
 {
 *(ptr) = 100;
 sub_401160(v1, v0);
 return v3;
 }
 sub_401160(v1, v0);
 return 4294967293;
}


// Function: param_clobber_importance at 0x401d46
int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = a0 + a1;
 v1 = a0 + a1;
 return v1 + v0;
}


// Function: call_asm_privileged at 0x401d82
unsigned int call_asm_privileged()
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v0 = param_dynamic_code(10);
 v1 = param_memory_protection();
 v2 = param_clobber_importance(3, 7);
 if (v0 == 15 && v1 == 42 && v2 == 20)
 return 77;
 return v0;
}


// Function: param_memory_clobber_demo at 0x401dde
unsigned int param_memory_clobber_demo()
{
 struct_0 *ptr; // ecx
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 __x86_get_pc_thunk_cx();
 v0 = 50;
 v1 = v0 + 1;
 return v1;
}


// Function: test_asm_features at 0x401e0f
// Define global variables for asm features
unsigned int g_402200 = 0;
unsigned int g_40222a = 0;
unsigned int g_402246 = 0;
unsigned int g_402262 = 0;
unsigned int g_40227e = 0;
unsigned int g_40229a = 0;
unsigned int g_4022b6 = 0;

int test_asm_features()
{
 sub_401130(&g_402200);
 sub_401100(&g_40222a, call_asm_basic());
 sub_401100(&g_402246, call_asm_clobber());
 sub_401100(&g_402262, call_asm_multi_insn());
 sub_401100(&g_40227e, call_asm_simd());
 sub_401100(&g_40229a, call_asm_atomic());
 return sub_401100(&g_4022b6, call_asm_privileged());
}


// Function: main at 0x401ecd
unsigned int main()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


// Function: __x86_get_pc_thunk_ax at 0x401ef2
int __x86_get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: __x86_get_pc_thunk_cx at 0x401ef6
int __x86_get_pc_thunk_cx()
{
 return 0;
}


// Function: sub_401efa at 0x401efa
int sub_401efa()
{
 __stack_chk_fail_local();
 return;
}


// Function: __stack_chk_fail_local at 0x401f00
int __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 sub_401110();
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

extern int __do_global_ctors_aux();

int __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 unsigned int *v4; // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 ptr = (struct_0 *)((char *)&v2 + 227);
 v4 = *((int *)&ptr->padding_0[232]);
 if (*((int *)&ptr->padding_0[232]) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = &ptr->padding_0[232];
 do
 {
 p = v6;
 ((void(*)())v4)();
 v4 = *((int *)&p->padding_0[4]);
 v6 = &p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_401f62 at 0x401f62
int sub_401f62()
{
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


