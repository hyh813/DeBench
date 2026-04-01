// Angr Decompilation of 4_gcc_O1_no_g
// Platform: X86


#include <stddef.h>
#include <stdio.h>
#include <math.h>

/* Global variable definitions to resolve undefined references */
unsigned int g_404ff4 = 0;
unsigned int g_4023ab = 0;

/* Stub function definitions */
void frame_dummy(void) { return; }
void deregister_tm_clones(void) { return; }

unsigned int _ccall(unsigned long ldt, unsigned long gdt, unsigned int gs, unsigned int id)
{
 return 0;
}

/* Forward declaration for struct_0 */
typedef struct struct_0 {
 char padding_0[256]; /* padding to allow array-style access */
 unsigned int field_0;
} struct_0;

/* GCC built-in functions for getting PC values */
extern void __x86_get_pc_thunk_bx(void);
extern void __x86_get_pc_thunk_dx(void);
extern unsigned int __x86_get_pc_thunk_di(unsigned int a0);
extern unsigned int __x86_get_pc_thunk_ax(void);

extern unsigned int g_404ff4;

static int _init()
{
 if (g_404ff4)
 ((void (*)(void))g_404ff4)();
 frame_dummy();
 return __do_global_ctors_aux();
}

/* Stack protection stub - declaration */
void __stack_chk_fail_local(void);

/* _ccall forward declaration */
unsigned int _ccall(unsigned long ldt, unsigned long gdt, unsigned int gs, unsigned int id);


// Function: sub_401030 at 0x401030
int sub_401030(unsigned int a0)
{
 // Jump table dispatch - fix the invalid goto
 switch (a0) {
  case 0: return sub_401090();
  case 8: return sub_4010a0();
  case 16: return sub_4010b0();
  case 24: return sub_4010c0();
  case 32: return sub_4010d0();
  default: return 0;
 }
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
int sub_40108e()
{
 sub_401090();
 return;
}


// Function: sub_401090 at 0x401090
int sub_401090()
{
 return 0;
}


// Function: sub_40109a at 0x40109a
int sub_40109a()
{
 sub_4010a0();
 return;
}


// Function: sub_4010a0 at 0x4010a0
int sub_4010a0()
{
 struct_0 *v1; // ebx

 return 0;
}


// Function: sub_4010aa at 0x4010aa
int sub_4010aa()
{
 sub_4010b0();
 return;
}


// Function: sub_4010b0 at 0x4010b0
int sub_4010b0()
{
 return 0;
}


// Function: sub_4010ba at 0x4010ba
int sub_4010ba()
{
 sub_4010c0();
 return;
}


// Function: sub_4010c0 at 0x4010c0
int sub_4010c0()
{
 return 0;
}


// Function: sub_4010ca at 0x4010ca
int sub_4010ca()
{
 sub_4010d0();
 return;
}


// Function: sub_4010d0 at 0x4010d0
int sub_4010d0()
{
 return 0;
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
 return 0;
}


// Function: sub_4010ea at 0x4010ea
void sub_4010ea()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40111c at 0x40111c
void sub_40111c()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x401120
void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_401124 at 0x401124
void sub_401124()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

// Note: deregister_tm_clones is defined as a stub, actual implementation may differ


// Function: sub_401163 at 0x401163
void sub_401163()
{
}


// Function: sub_401169 at 0x401169
void sub_401169()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

// Note: register_tm_clones is defined as a stub, actual implementation may differ
void register_tm_clones(void)
{
}


// Function: sub_4011b7 at 0x4011b7
void sub_4011b7()
{
 __do_global_dtors_aux();
 return;
}



// Function: __do_global_dtors_aux
void __do_global_dtors_aux(void)
{
 // Note: Original code had complex pointer arithmetic that may not be recoverable
 // Returning placeholder - actual logic depends on original binary
 return;
}


// Function: sub_40124a at 0x40124a
void sub_40124a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86_get_pc_thunk_dx at 0x401259
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86_get_pc_thunk_di at 0x40125d
unsigned int __x86_get_pc_thunk_di(unsigned int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: callback_func at 0x401261
unsigned int callback_func(unsigned int a0)
{
 return a0 * 2;
}


// Function: func_a at 0x40126c
int func_a(unsigned int a0)
{
 return a0 + 10;
}


// Function: func_b at 0x401278
unsigned int func_b(unsigned int a0)
{
 return a0 * 2;
}


// Function: cdecl_func at 0x401283
int cdecl_func(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: call_cdecl at 0x401290
unsigned int call_cdecl()
{
 return 15;
}


// Function: stdcall_func at 0x40129a
int stdcall_func(unsigned int a0, unsigned int a1)
{
 return a0 * a1;
}


// Function: call_stdcall at 0x4012aa
unsigned int call_stdcall()
{
 return 50;
}


// Function: fastcall_func at 0x4012b4
int fastcall_func(unsigned int a0)
{
 unsigned int v0; // ecx
 unsigned int v1; // edx

 return v0 + v1 + a0;
}


// Function: call_fastcall at 0x4012c2
unsigned int call_fastcall()
{
 return 6;
}


// Function: call_thiscall at 0x4012cc
unsigned int call_thiscall()
{
 return 15;
}


// Function: arm_aapcs_func at 0x4012d6
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a1 + a0 + a2 + a3 + a4;
}


// Function: call_arm_aapcs at 0x4012ef
unsigned int call_arm_aapcs()
{
 return 15;
}


// Function: mips_func at 0x4012f9
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a1 + a0 + a2 + a3;
}


// Function: call_mips at 0x40130e
unsigned int call_mips()
{
 return 100;
}


// Function: amd64_sysv_func at 0x401318
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a1 + a0 + a2 + a3 + a4 + a5;
}


// Function: call_amd64_sysv at 0x401335
unsigned int call_amd64_sysv()
{
 return 21;
}


// Function: ms_x64_func at 0x40133f
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a1 + a0 + a2 + a3 + a4;
}


// Function: call_ms_x64 at 0x401358
unsigned int call_ms_x64()
{
 return 15;
}


// Function: vectorcall_func at 0x401362
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a1 + a0 + a2 + a3;
}


// Function: call_vectorcall at 0x401377
unsigned int call_vectorcall()
{
 return 10;
}


// Function: mixed_conventions_test at 0x401381
unsigned int mixed_conventions_test()
{
 return 33;
}


// Function: varargs_func at 0x40138b
unsigned int varargs_func(unsigned int i)
{
 char *ptr; // eax
 unsigned int v2; // edx
 unsigned int v3; // ecx
 char *v4; // eax
 char v0; // [bp+0x8]

 if (i <= 0)
 return 0;
 ptr = &v0;
 v2 = 0;
 v3 = 0;
 do
 {
 v4 = ptr + 1;
 v3 += *(ptr);
 v2 += 1;
 ptr = v4;
 } while (i != v2);
 return v3;
}


// Function: func_no_args at 0x4013c1
unsigned int func_no_args()
{
 return 42;
}


// Function: func_many_args at 0x4013cb
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a1 + a0 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x4013f0
int func_mixed_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 unsigned int v6; // edi
 unsigned int v7; // esi
 unsigned int v8; // ebx
 unsigned int v9; // eax
 double v0; // [bp-0x1c], Other Possible Types: unsigned long, unsigned int
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp-0x4]

 v5 = v6;
 v4 = v7;
 v3 = v8;
 v9 = 0;
 if (a1)
 v9 = sub_4010d0(a1);
 v2 = v9 + a0;
 v0 = a2;
 v1 = a3;
 return v0;
}


// Function: func_struct_byval at 0x40146e
unsigned int func_struct_byval()
{
 char *cur; // edx
 unsigned int v3; // ecx
 unsigned int v0; // [bp+0x4]
 char *v1; // [bp+0x84]

 cur = &v0;
 v3 = 0;
 do
 {
 v3 += *(cur);
 cur += 2;
 } while (cur != v1);
 return v3;
}


// Function: func_struct_byptr at 0x401498
unsigned int func_struct_byptr(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 return a0[1] * *(a0);
}


// Function: test_calling_conventions at 0x4014b1
extern unsigned int g_402008;
extern unsigned int g_40202c;
extern unsigned int g_402054;
extern unsigned int g_402078;
extern unsigned int g_4020a0;
extern unsigned int g_4020c8;
extern unsigned int g_4020f4;

int test_calling_conventions()
{
 unsigned long v7; // ldt
 unsigned long v8; // gdt
 unsigned int flag1; // ecx
 char *iter; // eax
 unsigned int v19; // esi
 unsigned short v9; // gs
 unsigned int v11; // eax
 unsigned int v12; // edx
 unsigned int v13; // ecx
 char *cur; // edi
 char *i; // esi
 unsigned int result; // [bp-0x138]
 unsigned int v1; // [bp-0x134]
 unsigned int v2; // [bp-0x130]
 unsigned int v20; // [bp-0x118]
 unsigned int v21; // [bp-0x114]
 char v3; // [bp-0x110]
 char v4; // [bp-0x90]
 unsigned int v5; // [bp-0x10]

 v5 = *((int *)_ccall(v7, v8, (unsigned int)v9, 20));
 sub_4010c0(&g_402008);
 sub_4010e0(1, "CALL-L1-01: %d\n", 15);
 sub_4010e0(1, "CALL-L1-02: %d\n", 50);
 sub_4010e0(1, "CALL-L1-03: %d\n", 6);
 sub_4010e0(1, "CALL-L1-04: %d\n", 15);
 sub_4010e0(1, "CALL-L1-05: %d\n", 15);
 sub_4010e0(1, "CALL-L1-06: %d\n", 100);
 sub_4010e0(1, "CALL-L1-07: %d\n", 21);
 sub_4010e0(1, "CALL-L1-08: %d\n", 15);
 sub_4010e0(1, "CALL-L1-09: %d\n", 10);
 sub_4010e0(1, "CALL-L1-10: %d\n", 33);
 v2 = 3;
 v1 = 2;
 result = 1;
 sub_4010e0(1, &g_40202c, varargs_func(5));
 sub_4010e0(1, &g_402054, 42);
 sub_4010e0(1, &g_402078, 36);
 sub_4010e0(1, &g_4020a0, 117);
 v11 = 1;
 v12 = 0;
 do
 {
 v13 = v11 * 8;
 *((unsigned int *)((char *)&v20 + v13)) = v11;
 *((unsigned int *)((char *)&v21 + v13)) = v12;
 v12 += v11 + 1 < v11;
 v11 += 1;
 } while (v12 || (v11 ^ 17));
 cur = &v4;
 i = &v3;
 for (flag1 = 32; flag1; i += 1)
 {
 flag1 -= 1;
 *(cur) = *(i);
 cur += 1;
 }
 iter = &v4;
 v19 = 0;
 do
 {
 v19 += *(iter);
 iter += 2;
 } while (&v5 != iter);
 sub_4010e0(1, &g_4020c8, v19);
 sub_4010e0(1, &g_4020f4, 50);
 if (v5 == *((int *)_ccall(v7, v8, (unsigned int)v9, 20)))
 return v5 - *((int *)_ccall(v7, v8, (unsigned int)v9, 20));
 __stack_chk_fail_local();
}


// Function: param_by_value_int at 0x4016af
unsigned int param_by_value_int(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_by_value_int at 0x4016ba
unsigned int call_by_value_int()
{
 return 15;
}


// Function: param_by_value_ptr at 0x4016c4
unsigned int param_by_value_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) * 2;
 return 1;
}


// Function: call_by_value_ptr at 0x4016d4
unsigned int call_by_value_ptr()
{
 return 11;
}


// Function: param_array_decay at 0x4016de
unsigned int param_array_decay()
{
 return 4;
}


// Function: call_array_decay at 0x4016e8
unsigned int call_array_decay()
{
 return 4;
}


// Function: param_string at 0x4016f2
int param_string(char *a0)
{
 return *(a0) + a0[1];
}


// Function: call_string_param at 0x401704
unsigned int call_string_param()
{
 return 173;
}


// Function: param_ptr_array at 0x40170e
unsigned int param_ptr_array(struct_0 **a0, unsigned int a1)
{
 unsigned int v0; // edx
 struct_0 **i; // eax

 if (a1 <= 0)
 return 0;
 v0 = 0;
 i = a0;
 do
 {
 v0 += (*i)->field_0;
 i += 1;
 } while (i != &a0[a1]);
 return v0;
}


// Function: call_ptr_array at 0x401742
int call_ptr_array()
{
 void** v5; // eax
 unsigned long v6; // ldt
 unsigned long v7; // gdt
 unsigned short v8; // gs
 void* v0[3]; // [bp-0x1c]
 void* v1[3]; // [bp-0x18]
 void* v2[3]; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 v5 = (void**)(__x86_get_pc_thunk_ax() + 14462);
 v3 = *((int *)_ccall(v6, v7, (unsigned int)v8, 20));
 v0[0] = (void*)(v5 - 11751);
 v1[0] = (void*)(v5 - 11747);
 v2[0] = (void*)(v5 - 11743);
 param_ptr_array(v0, 3);
 if (v3 == *((int *)_ccall(v6, v7, (unsigned int)v8, 20)))
 return;
 __stack_chk_fail_local();
}


// Function: param_varargs at 0x4017a2
unsigned int param_varargs(unsigned int i)
{
 char *ptr; // pointer instead of array
 unsigned int v2; // edx
 unsigned int v3; // ecx
 char *v4; // pointer instead of array
 char v0; // [bp+0x8]

 if (i <= 0)
 return 0;
 ptr = &v0;
 v2 = 0;
 v3 = 0;
 do
 {
 v4 = ptr + 1;
 v3 += *(ptr);
 v2 += 1;
 ptr = v4;
 } while (i != v2);
 return v3;
}


// Function: call_varargs_param at 0x4017d8
unsigned int call_varargs_param()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 v3 = 40;
 v2 = 30;
 v1 = 20;
 v0 = 10;
 return param_varargs(4);
}


// Function: param_func_ptr at 0x4017ef
int param_func_ptr(unsigned int (*a0)(unsigned int), unsigned int a1)
{
 return a0(a1) + 10;
}


// Function: call_func_ptr_param at 0x401805
unsigned int call_func_ptr_param()
{
 return param_func_ptr(__x86_get_pc_thunk_ax() - 1456, 5);
}


// Function: param_double_ptr at 0x401828
unsigned int param_double_ptr(struct_0 **ptr, unsigned int a1)
{
 if (!ptr)
 {
 return 4294967295;
 }
 else if (*ptr)
 {
 (*ptr)->field_0 = a1;
 *ptr = NULL;
 return 1;
 }
 else
 {
 return 4294967295;
 }
}


// Function: call_double_ptr at 0x401858
char call_double_ptr()
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 unsigned int v0; // [bp-0x18]
 char *v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]

 v2 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 v0 = 10;
 v1 = &v0;
 param_double_ptr(&v1, 20);
 if (v2 == *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 return (!v1) + (char)v0;
 __stack_chk_fail_local();
}


// Function: param_complex_cast at 0x4018af
unsigned int param_complex_cast(unsigned int *a0, unsigned int a1)
{
 if (!a1)
 {
 return *(a0);
 }
 else if (a1 == 1)
 {
 return a0[1] + *(a0);
 }
 else
 {
 return 4294967295;
 }
}


// Function: call_complex_cast at 0x4018d3
unsigned int call_complex_cast()
{
 return 305419896;
}


// Function: param_struct_byval at 0x4018dd
int param_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
 return a15 + a0;
}


// Function: call_struct_byval at 0x4018ea
int call_struct_byval()
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 unsigned int idx; // eax
 unsigned long v0; // [bp-0x50]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]

 v2 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 idx = 0;
 do
 {
 (&v0)[idx] = idx;
 idx += 1;
 } while (idx != 16);
 if (v2 == *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 return v0 + v1;
 __stack_chk_fail_local();
}


// Function: param_order_dep at 0x401927
int param_order_dep(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: call_order_dep at 0x401934
unsigned int call_order_dep()
{
 return 4;
}


// Function: test_parameter_passing at 0x40193e
extern unsigned int g_402124;

int test_parameter_passing()
{
 sub_4010c0(&g_402124);
 sub_4010e0(1, "PARAM-L1-01: %d\n", 15);
 sub_4010e0(1, "PARAM-L1-02: %d\n", call_by_value_ptr());
 sub_4010e0(1, "PARAM-L2-01: %d\n", 4);
 sub_4010e0(1, "PARAM-L2-02: %d\n", 173);
 sub_4010e0(1, "PARAM-L2-03: %d\n", call_ptr_array(1, "PARAM-L2-02: %d\n", 173));
 sub_4010e0(1, "PARAM-L2-04: %d\n", call_varargs_param());
 sub_4010e0(1, "PARAM-L3-01: %d\n", call_func_ptr_param());
 sub_4010e0(1, "PARAM-L3-02: %d\n", call_double_ptr());
 sub_4010e0(1, "PARAM-L3-03: %d\n", call_complex_cast());
 sub_4010e0(1, "PARAM-L3-04: %d\n", call_struct_byval());
 return sub_4010e0(1, "PARAM-L3-05: %d\n", 4);
}


// Function: ret_basic_type at 0x401a52
unsigned int ret_basic_type(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_ret_basic at 0x401a5d
unsigned int call_ret_basic()
{
 return 42;
}


// Function: ret_pointer at 0x401a67
int ret_pointer(unsigned int a0)
{
 return a0 + 4;
}


// Function: call_ret_pointer at 0x401a73
unsigned int call_ret_pointer()
{
 return 20;
}


// Function: ret_small_struct at 0x401a7d
unsigned int* ret_small_struct(unsigned int *ptr, unsigned int a1, unsigned int a2)
{
 *(ptr) = a1;
 ptr[1] = a2;
 return ptr;
}


// Function: call_ret_small_struct at 0x401a95
unsigned int call_ret_small_struct()
{
 return 7;
}


// Function: ret_large_struct at 0x401a9f
unsigned int * ret_large_struct(unsigned int *ptr, unsigned int a1)
{
 unsigned int v17; // ecx
 unsigned long v18; // ldt
 unsigned long v19; // gdt
 unsigned short v20; // gs
 unsigned int index; // eax
 unsigned int v0; // [bp-0x50]
 unsigned int v1; // [bp-0x4c]
 unsigned int v2; // [bp-0x48]
 unsigned int v3; // [bp-0x44]
 unsigned int v4; // [bp-0x40]
 unsigned int v5; // [bp-0x3c]
 unsigned int v6; // [bp-0x38]
 unsigned int v7; // [bp-0x34]
 unsigned int v8; // [bp-0x30]
 unsigned int v9; // [bp-0x2c]
 unsigned int v10; // [bp-0x28]
 unsigned int v11; // [bp-0x24]
 unsigned int v12; // [bp-0x20]
 unsigned int v13; // [bp-0x1c]
 unsigned int v14; // [bp-0x18]
 unsigned int v15; // [bp-0x14]
 unsigned int v16; // [bp-0x10]

 v17 = a1;
 v16 = *((int *)_ccall(v18, v19, (unsigned int)v20, 20));
 index = v17;
 do
 {
 (&v0)[index + -(v17)] = index;
 index += 1;
 } while (index != v17 + 16);
 *(ptr) = v0;
 ptr[1] = v1;
 ptr[2] = v2;
 ptr[3] = v3;
 ptr[4] = v4;
 ptr[5] = v5;
 ptr[6] = v6;
 ptr[7] = v7;
 ptr[8] = v8;
 ptr[9] = v9;
 ptr[10] = v10;
 ptr[11] = v11;
 ptr[12] = v12;
 ptr[13] = v13;
 ptr[14] = v14;
 ptr[15] = v15;
 if (v16 == *((int *)_ccall(v18, v19, (unsigned int)v20, 20)))
 return ptr;
 __stack_chk_fail_local();
}


// Function: call_ret_large_struct at 0x401b5a
int call_ret_large_struct()
{
 unsigned long v6; // ldt
 unsigned long v7; // gdt
 unsigned short v8; // gs
 unsigned int v0; // [bp-0x54]
 unsigned int v1[14]; // [bp-0x50]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]

 v4 = *((int *)_ccall(v6, v7, (unsigned int)v8, 20));
 ret_large_struct(&v1, 100);
 if (v3 == *((int *)_ccall(v6, v7, (unsigned int)v8, 20)))
 return v2 + v0;
 __stack_chk_fail_local();
}


// Function: ret_func_ptr at 0x401b9d
unsigned int ret_func_ptr(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = __x86_get_pc_thunk_ax() + 13350;
 if (a0)
 return v0 - 15700;
 return v0 - 15712;
}


// Function: call_ret_func_ptr at 0x401bc0
unsigned int call_ret_func_ptr()
{
 return func_b(5);
}


// Function: ret_opaque_handle at 0x401bcf
unsigned int ret_opaque_handle(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = __x86_get_pc_thunk_ax() + 13300;
 if (!a0)
 return v0 + 68;
 return v0 + 60;
}


// Function: call_ret_opaque at 0x401bf2
int call_ret_opaque()
{
 return *((int *)(__x86_get_pc_thunk_ax() + 13333));
}


// Function: ret_complex_expr at 0x401c07
int ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
 if (a0 <= a1)
 return a2 + 10;
 return a2 * 2;
}


// Function: call_ret_complex_expr at 0x401c21
unsigned int call_ret_complex_expr()
{
 return 40;
}


// Function: ret_multi_branch at 0x401c2b
unsigned int ret_multi_branch(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = 20;
 if (a0 != 1)
 {
 v0 = 30;
 if (a0 != 2)
 v0 = (-(a0 < 1) & 11) - 1;
 }
 return v0;
}


// Function: call_ret_multi_branch at 0x401c53
unsigned int call_ret_multi_branch()
{
 return 60;
}


// Function: ret_void at 0x401c5d
unsigned int * ret_void(unsigned int a0, unsigned int *ptr)
{
 *(ptr) = a0 * 3;
 return ptr;
}


// Function: call_ret_void at 0x401c6f
unsigned int call_ret_void()
{
 return 21;
}


// Function: test_return_values at 0x401c79
extern unsigned int g_4022ac;
extern unsigned int g_4022ca;
extern unsigned int g_4022e6;
extern unsigned int g_402302;
extern unsigned int g_40231d;
extern unsigned int g_40233a;
extern unsigned int g_402356;
extern unsigned int g_402373;
extern unsigned int g_40238f;
extern unsigned int g_4023ab;
extern unsigned int handle1_1;

int test_return_values()
{
 sub_4010c0(&g_4022ac);
 sub_4010e0(1, &g_4022ca, 42);
 sub_4010e0(1, &g_4022e6, call_ret_pointer());
 sub_4010e0(1, &g_402302, call_ret_small_struct());
 sub_4010e0(1, &g_40231d, call_ret_large_struct());
 sub_4010e0(1, &g_40233a, call_ret_func_ptr());
 sub_4010e0(1, &g_402356, handle1_1);
 sub_4010e0(1, &g_402373, 40);
 sub_4010e0(1, &g_40238f, 60);
 return sub_4010e0(1, &g_4023ab, 21);
}


// Function: main at 0x401d5c
unsigned int main()
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


// Function: __x86_get_pc_thunk_ax at 0x401d7c
unsigned int __x86_get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: __stack_chk_fail_local at 0x401d80
void __stack_chk_fail_local()
{
 sub_4010b0();
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

void __do_global_ctors_aux(void)
{
 // Stub function - actual implementation may differ
 return;
}


// Function: sub_401de2 at 0x401de2
void sub_401de2()
{
}



/* CRT stub function _fini removed by preprocessor */


