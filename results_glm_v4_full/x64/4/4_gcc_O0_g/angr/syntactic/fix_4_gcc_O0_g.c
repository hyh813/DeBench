// Angr Decompilation of 4_gcc_O0_g
// Platform: AMD64

#include <stddef.h>

/* CRT stub function _init removed by preprocessor */
struct struct_0;

extern struct struct_0 *g_405fe8;
typedef unsigned long long (*func_ptr_t)(void);

// Helper function AddV for addition operations
static unsigned int AddV(unsigned int a, unsigned int b);



char g_403008[] = "Testing calling conventions\n";
char g_4030d0[] = "VARARGS: %d\n";
char g_4030f8[] = "NO ARGS: %d\n";
char g_403120[] = "MANY ARGS: %d\n";
char g_403150[] = "MIXED ARGS: %d\n";
char g_403178[] = "STRUCT BYVAL: %d\n";
char g_4031a8[] = "STRUCT BYPTR: %d\n";
char g_4031e8[] = "Testing parameter passing\n";
char g_4032c4[] = "Testing return values\n";
char g_4032e2[] = "BASIC TYPE: %d\n";
char g_4032fe[] = "POINTER: %d\n";
char g_40331a[] = "SMALL STRUCT: %d\n";
char g_403335[] = "LARGE STRUCT: %d\n";
char g_403352[] = "FUNC PTR: %d\n";
char g_40336e[] = "OPAQUE: %d\n";
char g_40338b[] = "COMPLEX EXPR: %d\n";
char g_4033a7[] = "MULTI BRANCH: %d\n";
char g_4033c3[] = "VOID: %d\n";
char handle2_0 = 'd';




// Function: sub_401020 at 0x401020
extern unsigned long long g_405fa8 = 0;
extern unsigned long long g_405fb0 = 0;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_405fa8;
 ((void (*)(void))g_405fb0)();
}


// Function: sub_40102d at 0x40102d
void sub_40102d()
{
 sub_401030();
 return;
}


// Function: sub_401030 at 0x401030
void sub_401030()
{
 unsigned long long result; // [bp-0x8]

 result = 0;
 sub_401020();
 return;
}


// Function: sub_40103f at 0x40103f
void sub_40103f()
{
 sub_401040();
 return;
}


// Function: sub_401040 at 0x401040
void sub_401040()
{
 unsigned long long result; // [bp-0x8]

 result = 1;
 sub_401020();
 return;
}


// Function: sub_40104f at 0x40104f
void sub_40104f()
{
 sub_401050();
 return;
}


// Function: sub_401050 at 0x401050
void sub_401050()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 2;
 sub_401020();
 return;
}


// Function: sub_40105f at 0x40105f
void sub_40105f()
{
 sub_401060();
 return;
}


// Function: sub_401060 at 0x401060
void sub_401060()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 3;
 sub_401020();
 return;
}


// Function: sub_40106f at 0x40106f
void sub_40106f()
{
 (void)__cxa_finalize(NULL);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010e5 at 0x4010e5
void sub_4010e5()
{
 __builtin_trap();
}














// Function: sub_401195 at 0x401195
void sub_401195()
{
}


// Function: sub_401199 at 0x401199
void sub_401199()
{
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: cdecl_func at 0x4011a9
int cdecl_func(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: call_cdecl at 0x4011c1
int call_cdecl()
{
 return cdecl_func(5, 10);
}


// Function: stdcall_func at 0x4011da
int stdcall_func(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: call_stdcall at 0x4011f1
int call_stdcall()
{
 return stdcall_func(5, 10);
}


// Function: fastcall_func at 0x40120a
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return a2 + a0 + a1;
}


// Function: call_fastcall at 0x40122a
int call_fastcall()
{
 return fastcall_func(1, 2, 3);
}


// Function: call_thiscall at 0x401248
unsigned long long call_thiscall()
{
 return 15;
}


// Function: arm_aapcs_func at 0x401257
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a4 + a0 + a1 + a2 + a3;
}


// Function: call_arm_aapcs at 0x401288
int call_arm_aapcs()
{
 return arm_aapcs_func(1, 2, 3, 4, 5);
}


// Function: mips_func at 0x4012b1
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a3 + a0 + a1 + a2;
}


// Function: call_mips at 0x4012d9
int call_mips()
{
 return mips_func(10, 20, 30, 40);
}


// Function: amd64_sysv_func at 0x4012fc
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a5 + a0 + a1 + a2 + a3 + a4;
}


// Function: call_amd64_sysv at 0x401336
int call_amd64_sysv()
{
 return amd64_sysv_func(1, 2, 3, 4, 5, 6);
}


// Function: ms_x64_func at 0x401365
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a4 + a0 + a1 + a2 + a3;
}


// Function: call_ms_x64 at 0x401396
int call_ms_x64()
{
 return ms_x64_func(1, 2, 3, 4, 5);
}


// Function: vectorcall_func at 0x4013bf
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a3 + a0 + a1 + a2;
}


// Function: call_vectorcall at 0x4013e7
int call_vectorcall()
{
 return vectorcall_func(1, 2, 3, 4);
}


// Function: mixed_conventions_test at 0x40140a
unsigned int mixed_conventions_test()
{
 unsigned int v0; // [bp-0xc]

 v0 = 0;
 v0 += cdecl_func(1, 2);
 v0 += stdcall_func(3, 4);
 v0 += fastcall_func(5, 6, 7);
 return v0;
}


// Function: varargs_func at 0x40145d
long long varargs_func(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
 char result; // al
 unsigned long long v23; // xmm0
 char *ptr; // rax
 unsigned long long v24; // xmm1
 unsigned long long v25; // xmm2
 unsigned long long v26; // xmm3
 unsigned long long v27; // xmm4
 unsigned long long v28; // xmm5
 unsigned long long v29; // xmm6
 unsigned long long v30; // xmm7
 unsigned long p; // fs
 unsigned int v0; // [bp-0xe0]
 unsigned int i; // [bp-0xdc]
 unsigned int v2; // [bp-0xd8]
 unsigned int v3; // [bp-0xd4]
 char v4[4]; // [bp-0xd0]
 char *v5; // [bp-0xc8]
 unsigned long v6; // [bp-0xc0]
 char v7; // [bp-0xb8]
 unsigned long long v8; // [bp-0xb0]
 unsigned long long v9; // [bp-0xa8]
 unsigned long long v10; // [bp-0xa0]
 unsigned long long v11; // [bp-0x98]
 unsigned long long v12; // [bp-0x90]
 unsigned long long v13; // [bp-0x88]
 unsigned long long v14; // [bp-0x78]
 unsigned long long v15; // [bp-0x68]
 unsigned long long v16; // [bp-0x58]
 unsigned long long v17; // [bp-0x48]
 unsigned long long v18; // [bp-0x38]
 unsigned long long v19; // [bp-0x28]
 unsigned long long v20; // [bp-0x18]
 unsigned long v21; // [bp+0x8]

 v8 = a1;
 v9 = a2;
 v10 = a3;
 v11 = a4;
 v12 = a5;
 if (result)
 {
 v13 = v23;
 v14 = v24;
 v15 = v25;
 v16 = v26;
 v17 = v27;
 v18 = v28;
 v19 = v29;
 v20 = v30;
 }
 v6 = *((long long *)(40 + p));
 v0 = 0;
 v2 = 8;
 v3 = 48;
 *((unsigned long **)&v4) = &v21;
 v5 = &v7;
 for (i = 0; i < a0; i += 1)
 {
 if (v2 <= 47)
 {
 ptr = &v5[v2];
 v2 += 8;
 }
 else
 {
 ptr = v4;
 *(unsigned long long **)&v4 = (unsigned long long *)ptr + 2;
 }
 *(unsigned int *)&v0 = v0 + *(ptr);
 }
 if (v6 == *((long long *)(40 + p)))
 return v0;
 __stack_chk_fail(); /* do not return */
}


// Function: func_no_args at 0x40158a
unsigned long long func_no_args()
{
 return 42;
}


// Function: func_many_args at 0x401599
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a7 + a0 + a1 + a2 + a3 + a4 + a5 + a6;
}


// Function: func_mixed_args at 0x4015dd
int func_mixed_args(unsigned int a0, char *a1, unsigned long a2)
{
 int v3; // xmm0
 unsigned int v0; // [bp-0xc]

 v0 = (!a1 ? 0 : (unsigned int)strlen(a1));
 return (unsigned int)(AddV(a2, AddV(v0 + a0 & 4294967295, v3)));
}


// Function: func_struct_byval at 0x401643
unsigned long long func_struct_byval()
{
 unsigned int i; // [bp-0x14]
 unsigned long long v1; // [bp-0x10]
 unsigned long v2; // [bp+0x8]

 v1 = 0;
 for (i = 0; i <= 15; i += 1)
 {
 v1 += (&v2)[i];
 }
 return v1;
}


// Function: func_struct_byptr at 0x40167a
unsigned long long func_struct_byptr(unsigned int *a0)
{
 return (!a0 ? 4294967295 : *(a0) * a0[1]);
}


// Function: test_calling_conventions at 0x4016a6
long long test_calling_conventions()
{
 unsigned long v50; // fs
 unsigned long v0; // [bp-0x148]
 unsigned long long v1; // [bp-0x140]
 unsigned long long v2; // [bp-0x138]
 unsigned long long v3; // [bp-0x130]
 unsigned long long v4; // [bp-0x128]
 unsigned long long v5; // [bp-0x120]
 unsigned long long v6; // [bp-0x118]
 unsigned long long v7; // [bp-0x110]
 unsigned long long v8; // [bp-0x108]
 unsigned long long v9; // [bp-0x100]
 unsigned long long v10; // [bp-0xf8]
 unsigned long long v11; // [bp-0xf0]
 unsigned long long v12; // [bp-0xe8]
 unsigned long long v13; // [bp-0xe0]
 unsigned int i; // [bp-0xc4]
 unsigned int v15; // [bp-0xc0]
 unsigned int v16; // [bp-0xbc]
 unsigned int v17; // [bp-0xb8]
 unsigned int v18; // [bp-0xb4]
 unsigned int v19; // [bp-0xb0]
 unsigned int v20; // [bp-0xac]
 char *v21; // [bp-0xa8]
 unsigned int v22[1]; // [bp-0xa0]
 unsigned int v23; // [bp-0x9c]
 unsigned long v24; // [bp-0x98]
 unsigned long long v25; // [bp-0x90]
 unsigned long long v26; // [bp-0x88]
 unsigned long long v27; // [bp-0x80]
 unsigned long long v28; // [bp-0x78]
 unsigned long long v29; // [bp-0x70]
 unsigned long long v30; // [bp-0x68]
 unsigned long long v31; // [bp-0x60]
 unsigned long long v32; // [bp-0x58]
 unsigned long long v33; // [bp-0x50]
 unsigned long long v34; // [bp-0x48]
 unsigned long long v35; // [bp-0x40]
 unsigned long long v36; // [bp-0x38]
 unsigned long long v37; // [bp-0x30]
 unsigned long v38; // [bp-0x10]

 puts(&g_403008);
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
 v15 = varargs_func(5, 1, 2, 3, 4, 5);
 printf(&g_4030d0, v15);
 v16 = func_no_args();
 printf(&g_4030f8, v16);
 v17 = func_many_args(1, 2, 3, 4, 5, 6, 7, 8);
 printf(&g_403120, v17);
 v21 = "test";
 v18 = func_mixed_args(10, v21, 100);
 printf(&g_403150, v18);
 for (i = 0; i <= 15; i += 1)
 {
 (&v24)[i] = i + 1;
 }
 v13 = *(unsigned long long *)(char *)&v37;
 v12 = *(unsigned long long *)(char *)&v36;
 v11 = *(unsigned long long *)(char *)&v35;
 v10 = *(unsigned long long *)(char *)&v34;
 v9 = *(unsigned long long *)(char *)&v33;
 v8 = *(unsigned long long *)(char *)&v32;
 v7 = *(unsigned long long *)(char *)&v31;
 v6 = *(unsigned long long *)(char *)&v30;
 v5 = *(unsigned long long *)(char *)&v29;
 v4 = *(unsigned long long *)(char *)&v28;
 v3 = *(unsigned long long *)(char *)&v27;
 v2 = *(unsigned long long *)(char *)&v26;
 v1 = *(unsigned long long *)(char *)&v25;
 v0 = *(unsigned long long *)(char *)&v24;
 v19 = func_struct_byval();
 printf(&g_403178, v19);
 *(unsigned long *)&(v22[0]) = 5;
 v23 = 10;
 v20 = func_struct_byptr((unsigned long *)&v22);
 printf(&g_4031a8, v20);
 return v38 - *((long long *)(40 + v50));
}


// Function: param_by_value_int at 0x401a1f
unsigned int param_by_value_int(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = a0;
 v0 *= 2;
 return v0;
}


// Function: call_by_value_int at 0x401a32
int call_by_value_int()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = 5;
 v1 = param_by_value_int(v0);
 return v1 + v0;
}


// Function: param_by_value_ptr at 0x401a5c
char param_by_value_ptr(unsigned int *a0)
{
 unsigned int *ptr; // [bp-0x10], Other Possible Types: unsigned long long

 ptr = a0;
 *(ptr) = *(ptr) * 2;
 ptr = 0;
 return !ptr;
}


// Function: call_by_value_ptr at 0x401a8c
long long call_by_value_ptr()
{
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 char *v2; // [bp-0x18]

 v0 = 5;
 v2 = &v0;
 v1 = param_by_value_ptr(v2);
 return v1 + v0;
}


// Function: param_array_decay at 0x401ae3
unsigned long long param_array_decay(unsigned long a0, unsigned long a1)
{
 return 8;
}


// Function: call_array_decay at 0x401af9
unsigned long long call_array_decay()
{
 char v0; // [bp-0x38]

 memset(&v0, 0, 40);
 return param_array_decay(&v0, 10);
}


// Function: param_string at 0x401b63
int param_string(char *a0)
{
 return a0[1] + *(a0);
}


// Function: call_string_param at 0x401b8b
int call_string_param()
{
 return param_string("Hello");
}


// Function: param_ptr_array at 0x401ba4
unsigned int param_ptr_array(unsigned long a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int i; // [bp-0xc]

 v0 = 0;
 for (i = 0; i < a1; i += 1)
 {
 v0 += *((char *)*((long long *)(a0 + i * 8)));
 }
 return v0;
}


// Function: call_ptr_array at 0x401bf4
int call_ptr_array()
{
 unsigned long v0; // [bp-0x28]
 unsigned long long v1; // [bp-0x20]
 unsigned long long v2; // [bp-0x18]

 v0 = "abc";
 v1 = "def";
 v2 = "ghi";
 return param_ptr_array(&v0, 3);
}


// Function: param_varargs at 0x401c57
long long param_varargs(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
 char result; // al
 unsigned long long v23; // xmm0
 char *ptr; // rax
 unsigned long long v24; // xmm1
 unsigned long long v25; // xmm2
 unsigned long long v26; // xmm3
 unsigned long long v27; // xmm4
 unsigned long long v28; // xmm5
 unsigned long long v29; // xmm6
 unsigned long long v30; // xmm7
 unsigned long p; // fs
 unsigned int v0; // [bp-0xe0]
 unsigned int i; // [bp-0xdc]
 unsigned int v2; // [bp-0xd8]
 unsigned int v3; // [bp-0xd4]
 char v4[4]; // [bp-0xd0]
 char *v5; // [bp-0xc8]
 unsigned long v6; // [bp-0xc0]
 char v7; // [bp-0xb8]
 unsigned long long v8; // [bp-0xb0]
 unsigned long long v9; // [bp-0xa8]
 unsigned long long v10; // [bp-0xa0]
 unsigned long long v11; // [bp-0x98]
 unsigned long long v12; // [bp-0x90]
 unsigned long long v13; // [bp-0x88]
 unsigned long long v14; // [bp-0x78]
 unsigned long long v15; // [bp-0x68]
 unsigned long long v16; // [bp-0x58]
 unsigned long long v17; // [bp-0x48]
 unsigned long long v18; // [bp-0x38]
 unsigned long long v19; // [bp-0x28]
 unsigned long long v20; // [bp-0x18]
 unsigned long v21; // [bp+0x8]

 v8 = a1;
 v9 = a2;
 v10 = a3;
 v11 = a4;
 v12 = a5;
 if (result)
 {
 v13 = v23;
 v14 = v24;
 v15 = v25;
 v16 = v26;
 v17 = v27;
 v18 = v28;
 v19 = v29;
 v20 = v30;
 }
 v6 = *((long long *)(40 + p));
 v2 = 8;
 v3 = 48;
 *((unsigned long **)&v4) = &v21;
 v5 = &v7;
 v0 = 0;
 for (i = 0; i < a0; i += 1)
 {
 if (v2 <= 47)
 {
 ptr = &v5[v2];
 v2 += 8;
 }
 else
 {
 ptr = v4;
 *(unsigned long long **)&v4 = (unsigned long long *)ptr + 2;
 }
 *(unsigned int *)&v0 = v0 + *(ptr);
 }
 if (v6 == *((long long *)(40 + p)))
 return v0;
 __stack_chk_fail(); /* do not return */
}


// Function: call_varargs_param at 0x401d84
unsigned long long call_varargs_param(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long a5)
{
 return param_varargs(4, 10, 20, 30, 40, a5);
}


// Function: param_func_ptr at 0x401db2
int param_func_ptr(unsigned long long *a0, unsigned int a1)
{
 return ((int (*)(unsigned int))a0)(a1) + 10;
}


// Function: callback_func at 0x401dd5
unsigned int callback_func(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_func_ptr_param at 0x401de7
int call_func_ptr_param()
{
 return param_func_ptr(callback_func, 5);
}


#include <stddef.h>

// Helper function AddV for addition operations
static unsigned int AddV(unsigned int a, unsigned int b)
{
    return a + b;
}

// Function: param_double_ptr at 0x401e05
typedef struct struct_0 {
 unsigned int field_0;
} struct_0;

unsigned long long param_double_ptr(struct_0 **ptr, unsigned int a1)
{
 if (ptr && *(ptr))
 {
 (*ptr)->field_0 = a1;
 *(ptr) = NULL;
 return 1;
 }
 return 4294967295;
}


// Function: call_double_ptr at 0x401e4c
char call_double_ptr()
{
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 char *v2; // [bp-0x18]

 v0 = 10;
 v2 = &v0;
 v1 = param_double_ptr(&v2, 20);
 return (char)v0 + (!v2);
}


// Function: param_complex_cast at 0x401eb2
unsigned long long param_complex_cast(unsigned int *a0, unsigned int a1)
{
 unsigned int v0[2]; // [bp-0x28]
 unsigned int v1[2]; // [bp-0x20]
 unsigned int v2[2]; // [bp-0x18]
 unsigned int v3[2]; // [bp-0x10]

 if (!a1)
 {
 unsigned long long temp;
 memcpy(&temp, &a0, sizeof(a0));
 memcpy((char *)&v1, &temp, sizeof(temp));
 memcpy((char *)&v2, &temp, sizeof(temp));
 memcpy((char *)&v3, &temp, sizeof(temp));
 return v3[0];
 }
 else if (a1 == 1)
 {
 *((unsigned int **)&v0[0]) = a0;
 return *(unsigned int *)((char *)v0 + 4) + v0[0];
 }
 else
 {
 return 4294967295;
 }
}


// Function: call_complex_cast at 0x401f0d
unsigned long long call_complex_cast()
{
 unsigned int v0[1]; // [bp-0x1c]
 unsigned int v1[1]; // [bp-0x18]
 unsigned int v2; // [bp-0x14]

 v0[0] = 305419896;
 v1[0] = 100;
 v2 = 200;
 param_complex_cast(&v1, 1);
 return param_complex_cast(&v0, 0);
}


// Function: param_struct_byval at 0x401f75
int param_struct_byval()
{
 return 0;
}


// Function: call_struct_byval at 0x401f87
void call_struct_byval()
{
 unsigned long v0; // [bp-0xa8]
 unsigned long long v1; // [bp-0xa0]
 unsigned long long v2; // [bp-0x98]
 unsigned long long v3; // [bp-0x90]
 unsigned long long v4; // [bp-0x88]
 unsigned long long v5; // [bp-0x80]
 unsigned long long v6; // [bp-0x78]
 unsigned long long v7; // [bp-0x70]
 unsigned int i; // [bp-0x5c]
 unsigned long v9; // [bp-0x58]
 unsigned long long v10; // [bp-0x50]
 unsigned long long v11; // [bp-0x48]
 unsigned long long v12; // [bp-0x40]
 unsigned long long v13; // [bp-0x38]
 unsigned long long v14; // [bp-0x30]
 unsigned long long v15; // [bp-0x28]
 unsigned long long v16; // [bp-0x20]

 for (i = 0; i <= 15; i += 1)
 {
 *((unsigned int *)((char *)&v9 + 4 * i)) = i;
 }
 v7 = *(unsigned long long *)(char *)&v16;
 v6 = *(unsigned long long *)(char *)&v15;
 v5 = *(unsigned long long *)(char *)&v14;
 v4 = *(unsigned long long *)(char *)&v13;
 v3 = *(unsigned long long *)(char *)&v12;
 v2 = *(unsigned long long *)(char *)&v11;
 v1 = *(unsigned long long *)(char *)&v10;
 v0 = *(unsigned long long *)(char *)&v9;
 param_struct_byval();
 return;
}


// Function: param_order_dep at 0x401ff8
int param_order_dep(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: call_order_dep at 0x402010
int call_order_dep()
{
 unsigned int v0; // [bp-0xc]

 v0 = 0;
 v0 += 1;
 v0 += 1;
 return param_order_dep(v0, v0);
}


// Function: test_parameter_passing at 0x40203c

int test_parameter_passing()
{
 unsigned long long v11; // r9
 unsigned int v6; // rdi
 unsigned int v7; // rsi
 unsigned int v8; // rdx
 unsigned int v9; // rcx
 unsigned int v10; // r8

 puts(&g_4031e8);
 printf("PARAM-L1-01: %d\n", call_by_value_int() & 4294967295);
 printf("PARAM-L1-02: %d\n", call_by_value_ptr() & 4294967295);
 printf("PARAM-L2-01: %d\n", call_array_decay() & 4294967295);
 printf("PARAM-L2-02: %d\n", call_string_param() & 4294967295);
 printf("PARAM-L2-03: %d\n", call_ptr_array() & 4294967295);
 printf("PARAM-L2-04: %d\n", call_varargs_param(v6, v7, v8, v9, v10, v11) & 4294967295);
 printf("PARAM-L3-01: %d\n", call_func_ptr_param() & 4294967295);
 printf("PARAM-L3-02: %d\n", call_double_ptr() & 4294967295);
 printf("PARAM-L3-03: %d\n", call_complex_cast() & 4294967295);
 call_struct_byval();
 return printf("PARAM-L3-05: %d\n", call_order_dep() & 4294967295);
}


// Function: ret_basic_type at 0x4021b6
unsigned int ret_basic_type(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_ret_basic at 0x4021c8
int call_ret_basic()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = 21;
 v1 = ret_basic_type(v0);
 return v1;
}


// Function: ret_pointer at 0x4021ed
long long ret_pointer(unsigned long a0)
{
 return a0 + 4;
}


// Function: call_ret_pointer at 0x402203
long long call_ret_pointer()
{
 unsigned int *v0; // [bp-0x28]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]

 v1 = 10;
 v2 = 20;
 v3 = 30;
 v0 = ret_pointer(&v1);
 return *(v0);
}


// Function: ret_small_struct at 0x40225f
unsigned long long ret_small_struct(unsigned int a0, unsigned long a1)
{
 unsigned int v0; // [bp-0x10]

 v0 = a0;
 return *((long long *)&v0);
}


// Function: call_ret_small_struct at 0x40227f
int call_ret_small_struct()
{
 unsigned long v0; // [bp-0x10]

 v0 = ret_small_struct(3, 4);
 return *((int *)((char *)&v0 + 4)) + (int)v0;
}


// Function: ret_large_struct at 0x4022a8
unsigned long long * ret_large_struct(unsigned long long *ptr, unsigned int a1)
{
 unsigned int i; // [bp-0x6c]
 unsigned long v1; // [bp-0x68]
 unsigned long v2; // [bp-0x60]
 unsigned long v3; // [bp-0x58]
 unsigned long v4; // [bp-0x50]
 unsigned long v5; // [bp-0x48]
 unsigned long v6; // [bp-0x40]
 unsigned long v7; // [bp-0x38]
 unsigned long v8; // [bp-0x30]

 for (i = 0; i <= 15; i += 1)
 {
 *((unsigned int *)((char *)&v1 + 4 * i)) = a1 + i;
 }
 *(ptr) = v1;
 ptr[1] = v2;
 ptr[2] = v3;
 ptr[3] = v4;
 ptr[4] = v5;
 ptr[5] = v6;
 ptr[6] = v7;
 ptr[7] = v8;
 return ptr;
}


// Function: call_ret_large_struct at 0x402350
long long call_ret_large_struct()
{
 unsigned long long v0[7]; // [bp-0x58]
 char v1; // [bp-0x1c]

 ret_large_struct(&v0, 100);
 return *((int *)&v1) + (unsigned int)v0[0];
}


// Function: func_a at 0x40239a
int func_a(unsigned int a0)
{
 return a0 + 10;
}


// Function: func_b at 0x4023ad
unsigned int func_b(unsigned int a0)
{
 return a0 * 2;
}


// Function: ret_func_ptr at 0x4023bf
long long ret_func_ptr(unsigned int a0)
{
 return (!a0 ? func_a : func_b);
}


// Function: call_ret_func_ptr at 0x4023e2
long long call_ret_func_ptr()
{
 unsigned long long *v0; // [bp-0x10]

 v0 = ret_func_ptr(1);
 return ((int (*)(unsigned int))v0)(5);
}


// Function: ret_opaque_handle at 0x402409
extern char handle2_0;

long long ret_opaque_handle(unsigned int a0)
{
 return (!a0 ? "d" : &handle2_0);
}


// Function: call_ret_opaque at 0x40242c
int call_ret_opaque()
{
 unsigned int *v0; // [bp-0x10]

 v0 = ret_opaque_handle(0);
 return *(unsigned int *)v0;
}


// Function: ret_complex_expr at 0x40244e
int ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (a0 <= a1 ? a2 + 10 : a2 * 2);
}


// Function: call_ret_complex_expr at 0x402476
int call_ret_complex_expr()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = ret_complex_expr(5, 3, 10);
 v1 = ret_complex_expr(3, 5, 10);
 return v1 + v0;
}


// Function: ret_multi_branch at 0x4024ba
unsigned long long ret_multi_branch(unsigned int a0)
{
 if (a0 == 2)
 return 30;
 if (a0 > 2)
 return 4294967295;
 if (!a0)
 {
 return 10;
 }
 else if (a0 == 1)
 {
 return 20;
 }
 return 4294967295;
}


// Function: call_ret_multi_branch at 0x4024fb
unsigned int call_ret_multi_branch()
{
 unsigned int v0; // [bp-0xc]

 v0 = 0;
 v0 += (unsigned int)ret_multi_branch(0);
 v0 += (unsigned int)ret_multi_branch(1);
 v0 += (unsigned int)ret_multi_branch(2);
 return v0;
}


// Function: ret_void at 0x40253a
unsigned int * ret_void(unsigned int a0, unsigned int *ptr)
{
 *(ptr) = a0 * 3;
 return ptr;
}


// Function: call_ret_void at 0x40255b
long long call_ret_void()
{
 unsigned int v0[1]; // [bp-0x14]

 ret_void(7, &v0);
 return *(v0);
}


// Function: test_return_values at 0x4025a0

int test_return_values()
{
 puts(&g_4032c4);
 printf(&g_4032e2, call_ret_basic() & 4294967295);
 printf(&g_4032fe, call_ret_pointer() & 4294967295);
 printf(&g_40331a, call_ret_small_struct() & 4294967295);
 printf(&g_403335, call_ret_large_struct() & 4294967295);
 printf(&g_403352, call_ret_func_ptr() & 4294967295);
 printf(&g_40336e, call_ret_opaque() & 4294967295);
 printf(&g_40338b, call_ret_complex_expr() & 4294967295);
 printf(&g_4033a7, call_ret_multi_branch() & 4294967295);
 return printf(&g_4033c3, call_ret_void() & 4294967295);
}


// Function: main at 0x4026da
unsigned int main()
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


