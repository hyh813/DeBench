// Angr Decompilation of 4_clang_O0_no_g
// Platform: AARCH64

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/* Rotate left macro */
#define __ROL__(value, shift) (((unsigned int)(value) << (shift)) | ((unsigned int)(value) >> (32 - (shift))))

/* Forward declarations */
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
long long frame_dummy(void);
unsigned int callback_func(unsigned int a0);
int test_calling_conventions(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long long a6, unsigned long long a7);

/* CRT stub implementations */
void deregister_tm_clones(void) {
    return;
}

void __do_global_dtors_aux(void) {
    return;
}

long long frame_dummy(void) {
    return 0;
}

/* Data section definitions (format strings and constants) */
char __dollar_d_2[] = "";
char g_401e82[] = "%d\n";
char g_401eaa[] = "%d\n";
char g_401ecc[] = "%d\n";
char g_401ef8[] = "%d\n";
char g_401f20[] = "%d\n";
char g_401f4c[] = "%d\n";
char g_401f8b[] = "";
unsigned long long __dollar_d_3 = 0;
unsigned long long g_412dd0 = 0;
char ret_opaque_handle_handle2[] = "d";
char g_402068[] = "";
char g_402087[] = "%d\n";
char g_4020a3[] = "%d\n";
char g_4020bf[] = "%d\n";
char g_4020da[] = "%d\n";
char g_4020f7[] = "%d\n";
char g_402113[] = "%d\n";
char g_402130[] = "%d\n";
char g_40214c[] = "%d\n";
char g_402168[] = "%d\n";

/* CRT stub function _init removed by preprocessor */



// Function: __dollar_x at 0x4006d0
unsigned long long g_412ff8 = 0;

long long __dollar_x()
{
 return 0;
}


// Function: sub_4006e4 at 0x4006e4
long long sub_4006e4()
{
 void* v0; // x0
 void* v1; // x1
 unsigned long v2; // x2
 unsigned long long dst; // x0

 dst = (unsigned long long)memcpy(v0, v1, v2);
 return (long long)memcpy(v0, v1, v2);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4007b0 at 0x4007b0
void sub_4007b0()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_4007c8 at 0x4007c8
void sub_4007c8()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_40083c at 0x40083c
void sub_40083c()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_400888 at 0x400888
long long sub_400888()
{
 unsigned long long v0; // x0

 v0 = frame_dummy();
 return frame_dummy();
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: cdecl_func at 0x400894
int cdecl_func(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: call_cdecl at 0x4008b4
int call_cdecl()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return cdecl_func(5, 10);
}


// Function: stdcall_func at 0x4008d0
int stdcall_func(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: call_stdcall at 0x4008f0
int call_stdcall()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return stdcall_func(5, 10);
}


// Function: fastcall_func at 0x40090c
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return a0 + a1 + a2;
}


// Function: call_fastcall at 0x400938
int call_fastcall()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return fastcall_func(1, 2, 3);
}


// Function: call_thiscall at 0x400958
unsigned long long call_thiscall()
{
 return 15;
}


// Function: arm_aapcs_func at 0x400960
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a0 + a1 + a2 + a3 + a4;
}


// Function: call_arm_aapcs at 0x4009a4
int call_arm_aapcs()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return arm_aapcs_func(1, 2, 3, 4, 5);
}


// Function: mips_func at 0x4009cc
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: call_mips at 0x400a04
int call_mips()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return mips_func(10, 20, 30, 40);
}


// Function: amd64_sysv_func at 0x400a28
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a0 + a1 + a2 + a3 + a4 + a5;
}


// Function: call_amd64_sysv at 0x400a78
int call_amd64_sysv()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return amd64_sysv_func(1, 2, 3, 4, 5, 6);
}


// Function: ms_x64_func at 0x400aa4
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a0 + a1 + a2 + a3 + a4;
}


// Function: call_ms_x64 at 0x400ae8
int call_ms_x64()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return ms_x64_func(1, 2, 3, 4, 5);
}


// Function: vectorcall_func at 0x400b10
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: call_vectorcall at 0x400b48
int call_vectorcall()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return vectorcall_func(1, 2, 3, 4);
}


// Function: mixed_conventions_test at 0x400b6c
unsigned int mixed_conventions_test()
{
 unsigned int v0; // [bp-0x14]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = 0;
 v0 += cdecl_func(1, 2);
 v0 += stdcall_func(3, 4);
 v0 += fastcall_func(5, 6, 7);
 return v0;
}


// Function: varargs_func at 0x400bd8
unsigned int varargs_func(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
 unsigned long long v28; // q7
 unsigned long long v29; // q6
 unsigned long long v30; // q5
 unsigned long long v31; // q4
 unsigned long long v32; // q3
 unsigned long long v33; // q2
 unsigned long long v34; // q1
 unsigned long long v35; // q0
 unsigned int v36; // w8
 unsigned long long v37; // x8
 unsigned long long *ptr; // [bp-0x118]
 unsigned long long *v1; // [bp-0x110]
 unsigned int v2; // [bp-0x104]
 unsigned long long v3; // [bp-0x100]
 unsigned long long v4; // [bp-0xf0]
 unsigned long long v5; // [bp-0xe0]
 unsigned long long v6; // [bp-0xd0]
 unsigned long long v7; // [bp-0xc0]
 unsigned long long v8; // [bp-0xb0]
 unsigned long long v9; // [bp-0xa0]
 unsigned long long v10; // [bp-0x90]
 char v11; // [bp-0x80]
 unsigned long long v12; // [bp-0x78]
 unsigned long long v13; // [bp-0x70]
 unsigned long long v14; // [bp-0x68]
 unsigned long long v15; // [bp-0x60]
 unsigned long long v16; // [bp-0x58]
 unsigned long long v17; // [bp-0x50]
 unsigned long long v18; // [bp-0x48]
 char i; // [bp-0x40], Other Possible Types: unsigned int
 unsigned int v20; // [bp-0x3c]
 char *v21; // [bp-0x38]
 char *v22; // [bp-0x30]
 char *v23; // [bp-0x28]
 unsigned int v24; // [bp-0x20]
 unsigned int v25; // [bp-0x1c]
 char *v26; // [bp-0x10]
 char v27; // [bp+0x0]

 v26 = &v27;
 v10 = v28;
 v9 = v29;
 v8 = v30;
 v7 = v31;
 v6 = v32;
 v5 = v33;
 v4 = v34;
 v3 = v35;
 v18 = a7;
 v17 = a6;
 v16 = a5;
 v15 = a4;
 v14 = a3;
 v13 = a2;
 v12 = a1;
 v20 = 0;
 v25 = 4294967168;
 v24 = 4294967240;
 v23 = &v11;
 v22 = &i;
 v21 = (char *)&v27;
 for (i = 0; a0 > i; i += 1)
 {
 v1 = (unsigned long long *)((void *)&v24);
 v2 = v24;
 if (((char)(v2 >> 31) & 1) && !((v36 = v2 + 8, v24 = v36, 0 < v36)))
 {
 ptr = (unsigned long long *)&v22[v2];
 }
 else
 {
 v37 = *((unsigned long long *)&v21);
 *((unsigned long long *)&v21) = v37 + 2;
 ptr = (unsigned long long *)&v37;
 }
 v20 = v20 + *(unsigned int *)ptr;
 }
 return v20;
}


// Function: func_no_args at 0x400d10
unsigned long long func_no_args()
{
 return 42;
}


// Function: func_many_args at 0x400d18
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x400d80
int func_mixed_args(unsigned int a0, char *a1, unsigned int a2)
{
 unsigned int v4; // s0
 unsigned long long len; // [bp-0x40]
 unsigned int v1; // [bp-0x34]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 if (a1)
 len = strlen(a1);
 else
 len = 0;
 v1 = len;
 return a0 + v1 + v4 + a2;
}


// Function: func_struct_byval at 0x400e00
unsigned int func_struct_byval(unsigned long ptr)
{
 unsigned int i; // [bp-0xc]
 unsigned long long v1; // [bp-0x8]

 v1 = 0;
 for (i = 0; 16 > i; i += 1)
 {
 v1 += *((long long *)(ptr + i * 8));
 }
 return v1;
}


// Function: func_struct_byptr at 0x400e60
unsigned int func_struct_byptr(unsigned int *ptr)
{
 unsigned int v0; // [bp-0x4]

 if (ptr)
 {
 v0 = ptr[1] * *(ptr);
 return v0;
 }
 v0 = 4294967295;
 return v0;
}


// Function: test_calling_conventions at 0x400ea8
extern char __dollar_d_2[];
extern char g_401e82[];
extern char g_401eaa[];
extern char g_401ecc[];
extern char g_401ef8[];
extern char g_401f20[];
extern char g_401f4c[];

int test_calling_conventions(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long long a6, unsigned long long a7)
{
 char *v0; // [bp-0x180]
 unsigned int v1; // [bp-0x174]
 unsigned int v2; // [bp-0x170]
 unsigned int v3; // [bp-0x16c]
 unsigned int v4; // [bp-0x168]
 unsigned int result; // [bp-0x164]
 char *v6; // [bp-0x160]
 unsigned int v7; // [bp-0x154]
 unsigned long long v8; // [bp-0x150]
 char v9; // [bp-0x148]
 unsigned int v10; // [bp-0xc8]
 unsigned int i; // [bp-0xc4]
 unsigned long v12; // [bp-0xc0]
 unsigned int v13; // [bp-0x3c]
 unsigned int *v14; // [bp-0x38]
 unsigned int v15; // [bp-0x2c]
 unsigned int v16; // [bp-0x28]
 unsigned int v17; // [bp-0x24]
 char *v18; // [bp-0x20]
 char v19; // [bp+0x0]

 v18 = &v19;
 v6 = (char *)&v14;
 printf(__dollar_d_2);
 printf("CALL-L1-01: %d\n", call_cdecl() & 4294967295);
 printf("CALL-L1-02: %d\n", call_stdcall() & 4294967295);
 printf("CALL-L1-03: %d\n", call_fastcall() & 4294967295);
 printf("CALL-L1-04: %d\n", call_thiscall() & 4294967295);
 printf("CALL-L1-05: %d\n", call_arm_aapcs() & 4294967295);
 printf("CALL-L1-06: %d\n", call_mips() & 4294967295);
 printf("CALL-L1-07: %d\n", call_amd64_sysv() & 4294967295);
 printf("CALL-L1-08: %d\n", call_ms_x64() & 4294967295);
 printf("CALL-L1-09: %d\n", call_vectorcall() & 4294967295);
 printf("CALL-L1-10: %d\n", mixed_conventions_test() & 4294967295);
 v4 = 5;
 result = 1;
 v1 = 2;
 v2 = 3;
 v3 = 4;
 v17 = varargs_func(5, 1, 2, 3, 4, 5, a6, a7);
 printf(g_401e82, v17);
 v16 = func_no_args();
 printf(g_401eaa, v16);
 v15 = func_many_args(result, v1, v2, v3, v4, 6, 7, 8);
 printf(g_401ecc, v15);
 v14 = (unsigned int *)"test";
 v13 = func_mixed_args(10, (char *)v14, 100);
 printf(g_401ef8, v13);
 for (i = 0; 16 > i; i += 1)
 {
 (&v12)[i] = (i + 1) * 0x100000000 >> 63 & 0xffffffff00000000 | i + 1;
 }
 v0 = (char *)&v12;
 memcpy(&v9, &v12, 128);
 v10 = func_struct_byval((unsigned long)v0);
 printf(g_401f20, v10);
 v8 = 42949672965;
 v7 = func_struct_byptr((unsigned int *)&v8);
 return printf(g_401f4c, v7);
}


// Function: param_by_value_int at 0x401118
unsigned int param_by_value_int(unsigned int a0)
{
 unsigned int v0; // [bp-0x4]

 v0 = a0;
 v0 = (v0 * 2 | v0 >> 31) & 4294967294;
 return v0;
}


// Function: call_by_value_int at 0x401138
int call_by_value_int()
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 v1 = 5;
 v0 = param_by_value_int(v1);
 return v1 + v0;
}


// Function: param_by_value_ptr at 0x401170
unsigned long long param_by_value_ptr(unsigned int *a0)
{
 unsigned int *ptr; // [bp-0x8], Other Possible Types: unsigned long long

 ptr = a0;
 *(ptr) = __ROL__(*(ptr), 1) & 4294967294;
 if (!ptr)
 return 1;
 return 0;
}


// Function: call_by_value_ptr at 0x4011a8
int call_by_value_ptr()
{
 unsigned int v0; // [bp-0x24]
 unsigned int *v1; // [bp-0x20]
 unsigned int v2; // [bp-0x14]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 v2 = 5;
 v1 = &v2;
 v0 = param_by_value_ptr(v1);
 return v2 + v0;
}


// Function: param_array_decay at 0x4011e8
unsigned long long param_array_decay(void *a0, unsigned long a1)
{
 return 8;
}


// Function: call_array_decay at 0x401200
unsigned long long call_array_decay()
{
 unsigned long long v4; // x0
 char *v0; // [bp-0x40]
 char v1; // [bp-0x38]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 v0 = &v1;
 memset(&v1, 0, 40);
 v4 = param_array_decay(v0, 10);
 return param_array_decay(v0, 10);
}


// Function: param_string at 0x401238
int param_string(char *a0)
{
 return *(a0) + a0[1];
}


// Function: call_string_param at 0x40125c
int call_string_param()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_string("Hello");
}


// Function: param_ptr_array at 0x401278
unsigned int param_ptr_array(unsigned long a0, unsigned int a1)
{
 unsigned int i; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 v1 = 0;
 for (i = 0; a1 > i; i += 1)
 {
 v1 += *((char *)*((long long *)(a0 + i * 8)));
 }
 return v1;
}


// Function: call_ptr_array at 0x4012e0
extern unsigned long long __dollar_d_3;
extern unsigned long long g_412dd0;

int call_ptr_array()
{
 int v0; // [bp-0x30]
 unsigned long v1; // [bp-0x20]
 unsigned int *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = (unsigned int *)&v3;
 *((unsigned long long *)&v0) = __dollar_d_3;
 v1 = g_412dd0;
 return param_ptr_array((unsigned long)&v0, 3);
}


// Function: param_varargs at 0x40131c
unsigned int param_varargs(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
 unsigned long long args[8];
 unsigned int v20;
 unsigned int i;

 args[0] = a1;
 args[1] = a2;
 args[2] = a3;
 args[3] = a4;
 args[4] = a5;
 args[5] = a6;
 args[6] = a7;
 args[7] = 0;
 v20 = 0;
 for (i = 0; a0 > i; i += 1)
 {
 v20 = v20 + (unsigned int)args[i];
 }
 return v20;
}


// Function: call_varargs_param at 0x401454
int call_varargs_param(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
 unsigned int *v0; // [bp-0x10]
 unsigned int v1; // [bp+0x0]

 v0 = &v1;
 return param_varargs(4, 10, 20, 30, 40, a5, a6, a7);
}


// Function: param_func_ptr at 0x40147c
int param_func_ptr(unsigned int (*a0)(unsigned int), unsigned int a1)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return a0(a1) + 10;
}


// Function: call_func_ptr_param at 0x4014ac
int call_func_ptr_param()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_func_ptr(callback_func, 5);
}


// Function: callback_func at 0x4014cc
unsigned int callback_func(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: param_double_ptr at 0x4014e4
typedef struct struct_0 {
 unsigned int field_0;
} struct_0;

unsigned int param_double_ptr(struct_0 **ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0x4]

 if (ptr && *(ptr))
 {
 (*ptr)->field_0 = a1;
 *(ptr) = NULL;
 v0 = 1;
 return v0;
 }
 v0 = 4294967295;
 return v0;
}


// Function: call_double_ptr at 0x401548
long long call_double_ptr()
{
 unsigned long long v6; // x30
 unsigned long long v7; // x9
 unsigned int v0; // [bp-0x24]
 unsigned int *v1; // [bp-0x20]
 unsigned int v2; // [bp-0x14]
 char *v3; // [bp-0x10]
 unsigned long long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v3 = &v5;
 v4 = v6;
 v2 = 10;
 v1 = &v2;
 v0 = param_double_ptr((struct_0 **)&v1, 20);
 if (v1)
 v7 = 0;
 else
 v7 = 1;
 return v2 + v7;
}


// Function: param_complex_cast at 0x401598
unsigned int param_complex_cast(void *a0, unsigned int a1)
{
 unsigned int *ptr; // [bp-0x38]
 unsigned int *p; // [bp-0x30]
 unsigned int *v2; // [bp-0x28]
 unsigned int *v3; // [bp-0x20]
 unsigned int v4; // [bp-0x4]

 if (!a1)
 {
 v3 = (unsigned int *)a0;
 v2[0] = v3[0];
 v2[1] = v3[1];
 p[0] = v2[0];
 p[1] = v2[1];
 v4 = p[0];
 return v4;
 }
 else if (a1 == 1)
 {
 ptr = (unsigned int *)a0;
 v4 = ptr[0] + ptr[1];
 return v4;
 }
 else
 {
 v4 = 4294967295;
 return v4;
 }
}


// Function: call_complex_cast at 0x401628
int call_complex_cast()
{
 unsigned int *v0; // [bp-0x28]
 unsigned int v1[3]; // [bp-0x20]
 unsigned int v2; // [bp-0x14], Other Possible Types: unsigned int
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 v0 = (unsigned int *)&v2;
 v2 = 305419896;
 *((unsigned long long *)&v1) = 858993459300;
 param_complex_cast(&v1, 1);
 return param_complex_cast(v0, 0);
}


// Function: param_struct_byval at 0x40167c
int param_struct_byval(unsigned int *a0)
{
 return *(a0) + a0[15];
}


// Function: call_struct_byval at 0x40168c
int call_struct_byval()
{
 char *v0; // [bp-0xa0]
 char v1[64]; // [bp-0x94]
 unsigned int i; // [bp-0x54]
 unsigned int v3[16]; // [bp-0x50]
 char *v4; // [bp-0x10]
 char v5; // [bp+0x0]

 v4 = &v5;
 for (i = 0; 16 > i; i += 1)
 {
 v3[i] = i;
 }
 v0 = &v1[0];
 memcpy(&v1, &v3, 64);
 return param_struct_byval((unsigned int *)v0);
}


// Function: param_order_dep at 0x4016fc
int param_order_dep(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: call_order_dep at 0x40171c
int call_order_dep()
{
 unsigned int result; // [bp-0x14]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x14]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 result = 0;
 v1 = result + 1;
 v2 = v1 + 1;
 return param_order_dep(result + 1, v1 + 1);
}


// Function: test_parameter_passing at 0x401754
extern char g_401f8b[];

int test_parameter_passing(unsigned long a0, unsigned long a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
 unsigned long long v6; // x1
 unsigned int v7; // w0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 printf(g_401f8b);
 printf("PARAM-L1-01: %d\n", call_by_value_int() & 4294967295);
 printf("PARAM-L1-02: %d\n", call_by_value_ptr() & 4294967295);
 printf("PARAM-L2-01: %d\n", call_array_decay() & 4294967295);
 printf("PARAM-L2-02: %d\n", call_string_param() & 4294967295);
 v6 = call_ptr_array() & 4294967295;
 v7 = call_varargs_param(printf("PARAM-L2-03: %d\n", v6), v6, a2, a3, a4, a5, a6, a7);
 printf("PARAM-L2-04: %d\n", v7);
 printf("PARAM-L3-01: %d\n", call_func_ptr_param() & 4294967295);
 printf("PARAM-L3-02: %d\n", call_double_ptr() & 4294967295);
 printf("PARAM-L3-03: %d\n", call_complex_cast() & 4294967295);
 printf("PARAM-L3-04: %d\n", call_struct_byval() & 4294967295);
 return printf("PARAM-L3-05: %d\n", call_order_dep() & 4294967295);
}


// Function: ret_basic_type at 0x40184c
unsigned int ret_basic_type(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_ret_basic at 0x401864
int call_ret_basic()
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 v1 = 21;
 v0 = ret_basic_type(v1);
 return v0;
}


// Function: ret_pointer at 0x401894
long long ret_pointer(unsigned long a0)
{
 return (long long)(a0 + 4);
}


// Function: call_ret_pointer at 0x4018ac
int call_ret_pointer()
{
 unsigned int *v0; // [bp-0x28]
 unsigned long long v1; // [bp-0x20]
 unsigned int v2; // [bp-0x18]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 v1 = 85899345930;
 v2 = 30;
 v0 = (unsigned int *)ret_pointer((unsigned long)&v1);
 return *(v0);
}


// Function: ret_small_struct at 0x4018f0
unsigned long long ret_small_struct(unsigned int a0, unsigned long a1)
{
 unsigned int v0; // [bp-0x8]

 v0 = a0;
 return *((long long *)&v0);
}


// Function: call_ret_small_struct at 0x401918
int call_ret_small_struct()
{
 unsigned long v0; // [bp-0x18]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = ret_small_struct(3, 4);
 return (int)v0 + *((int *)((char *)&v0 + 4));
}


// Function: ret_large_struct at 0x40194c
long long ret_large_struct(unsigned long a0)
{
 unsigned long ptr; // x8
 unsigned int i; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = a0;
 for (i = 0; 16 > i; i += 1)
 {
 *((unsigned int *)(ptr + i * 4)) = v1 + i;
 }
 return a0;
}


// Function: call_ret_large_struct at 0x4019a4
int call_ret_large_struct()
{
 char v0; // [bp-0x50]
 unsigned int v1; // [bp-0x14]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 ret_large_struct(100);
 return *((int *)&v0) + v1;
}


// Function: func_a at 0x4019d4
int func_a(unsigned int a0)
{
 return a0 + 10;
}


// Function: func_b at 0x4019ec
unsigned int func_b(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: ret_func_ptr at 0x401a04
long long ret_func_ptr(unsigned int a0)
{
 if (!a0)
 return (long long)func_a;
 return (long long)func_b;
}


// Function: call_ret_func_ptr at 0x401a30
long long call_ret_func_ptr()
{
 unsigned long long v3; // x0
 unsigned long long (*v0)(unsigned int); // [bp-0x18]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = (unsigned long long (*)(unsigned int))ret_func_ptr(1);
 v3 = v0(5);
 return v0(5);
}


// Function: ret_opaque_handle at 0x401a60
extern char ret_opaque_handle_handle2[];

long long ret_opaque_handle(unsigned int a0)
{
 if (a0)
 return (long long)&ret_opaque_handle_handle2;
 return (long long)"d";
}


// Function: call_ret_opaque at 0x401a8c
int call_ret_opaque()
{
 unsigned int *v0; // [bp-0x18]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = (unsigned int *)ret_opaque_handle(0);
 return *(v0);
}


// Function: ret_complex_expr at 0x401ab8
unsigned int ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x10]

 if (a0 <= a1)
 {
 v0 = a2 + 10;
 return v0;
 }
 v0 = (a2 * 2 | a2 >> 31) & 4294967294;
 return v0;
}


// Function: call_ret_complex_expr at 0x401b08
int call_ret_complex_expr()
{
 unsigned int v0; // [bp-0x24]
 unsigned int v1; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 unsigned int v3; // [bp-0x18]
 unsigned int v4; // [bp-0x14]
 char *v5; // [bp-0x10]
 char v6; // [bp+0x0]

 v5 = &v6;
 v0 = 5;
 v2 = 3;
 v1 = 10;
 v4 = ret_complex_expr(5, 3, 10);
 v3 = ret_complex_expr(v2, v0, v1);
 return v4 + v3;
}


// Function: ret_multi_branch at 0x401b64
unsigned int ret_multi_branch(unsigned int a0)
{
 unsigned int v0; // [bp-0x4]

 if (!a0)
 {
 v0 = 10;
 return v0;
 }
 else if (a0 == 1)
 {
 v0 = 20;
 return v0;
 }
 else if (a0 == 2)
 {
 v0 = 30;
 return v0;
 }
 else
 {
 v0 = 4294967295;
 return v0;
 }
}


// Function: call_ret_multi_branch at 0x401bd8
unsigned int call_ret_multi_branch()
{
 unsigned int v0; // [bp-0x14]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = 0;
 v0 += ret_multi_branch(0);
 v0 += ret_multi_branch(1);
 v0 += ret_multi_branch(2);
 return v0;
}


// Function: ret_void at 0x401c34
long long ret_void(unsigned long a0, unsigned int *ptr)
{
 unsigned int v0; // [bp-0x4]

 v0 = a0;
 *(ptr) = 3 * v0;
 return a0;
}


// Function: call_ret_void at 0x401c5c
int call_ret_void()
{
 unsigned int v0[1]; // [bp-0x14]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 ret_void(7, v0);
 return *(v0);
}


// Function: test_return_values at 0x401c84
extern char g_402068[];
extern char g_402087[];
extern char g_4020a3[];
extern char g_4020bf[];
extern char g_4020da[];
extern char g_4020f7[];
extern char g_402113[];
extern char g_402130[];
extern char g_40214c[];
extern char g_402168[];

int test_return_values()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 printf(g_402068);
 printf(g_402087, call_ret_basic() & 4294967295);
 printf(g_4020a3, call_ret_pointer() & 4294967295);
 printf(g_4020bf, call_ret_small_struct() & 4294967295);
 printf(g_4020da, call_ret_large_struct() & 4294967295);
 printf(g_4020f7, call_ret_func_ptr() & 4294967295);
 printf(g_402113, call_ret_opaque() & 4294967295);
 printf(g_402130, call_ret_complex_expr() & 4294967295);
 printf(g_40214c, call_ret_multi_branch() & 4294967295);
 return printf(g_402168, call_ret_void() & 4294967295);
}


// Function: main at 0x401d54
int main(int argc, char *argv[])
{
 unsigned int result; // [bp-0x18]
 unsigned int flag1; // [bp-0x14]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]
 unsigned long a0, a1, a2, a3, a4;
 unsigned long long a5, a6, a7;

 v2 = &v3;
 result = 0;
 flag1 = 0;
 a0 = argc;
 a1 = (argv && argv[0]) ? (unsigned long)argv[0] : 0;
 a2 = (argv && argv[1]) ? (unsigned long)argv[1] : 0;
 a3 = (argv && argv[2]) ? (unsigned long)argv[2] : 0;
 a4 = (argv && argv[3]) ? (unsigned long)argv[3] : 0;
 a5 = (argv && argv[4]) ? (unsigned long long)argv[4] : 0;
 a6 = (argv && argv[5]) ? (unsigned long long)argv[5] : 0;
 a7 = (argv && argv[6]) ? (unsigned long long)argv[6] : 0;
 test_parameter_passing(test_calling_conventions(a0, a1, a2, a3, a4, a5, a6, a7), a1, a2, a3, a4, a5, a6, a7);
 test_return_values();
 return (int)result;
}



/* CRT stub function _fini removed by preprocessor */


