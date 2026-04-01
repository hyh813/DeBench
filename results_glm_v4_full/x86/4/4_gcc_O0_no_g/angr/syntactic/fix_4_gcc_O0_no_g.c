// Angr Decompilation of 4_gcc_O0_no_g
// Platform: X86


/* CRT stub function _init removed by preprocessor */

typedef struct struct_0 {
 char padding_0[36];
 unsigned int field_24;
 unsigned int field_c;
 unsigned int field_10;
 unsigned int field_14;
 unsigned int field_18;
 unsigned int field_1c;
 unsigned int field_0;
} struct_0_t;

typedef struct_0_t struct_0;

extern void (*g_405ff4)(void);




// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return v0;
}


// Function: sub_401040 at 0x401040
void sub_401040()
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
void sub_401050()
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
void sub_401060()
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
void sub_401070()
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
void sub_401080()
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

int sub_401090(struct_0 *a0)
{
 struct_0 *v1; // ebx

 v1 = a0;
 ((void (*)())v1->field_24)();
 return 0;
}


// Function: sub_40109a at 0x40109a
void sub_40109a()
{
 sub_4010a0();
 return;
}


// Function: sub_4010a0 at 0x4010a0

int sub_4010a0(struct_0 *a0)
{
 struct_0 *v1; // ebx

 v1 = a0;
 ((void (*)())v1->field_c)();
 return 0;
}


// Function: sub_4010aa at 0x4010aa
void sub_4010aa()
{
 return;
}





// Function: sub_4010ba at 0x4010ba
void sub_4010ba()
{
 sub_4010c0();
 return;
}


// Function: sub_4010c0 at 0x4010c0

int sub_4010c0(struct_0 *a0)
{
 struct_0 *v1; // ebx

 v1 = a0;
 ((void (*)())v1->field_14)();
 return 0;
}


// Function: sub_4010ca at 0x4010ca
void sub_4010ca()
{
 sub_4010d0();
 return;
}


// Function: sub_4010d0 at 0x4010d0

int sub_4010d0(struct_0 *a0)
{
 struct_0 *v1; // ebx

 v1 = a0;
 ((void (*)())v1->field_18)();
 return 0;
}


// Function: sub_4010da at 0x4010da
void sub_4010da()
{
 sub_4010e0();
 return;
}


// Function: sub_4010e0 at 0x4010e0

int sub_4010e0(struct_0 *a0)
{
 struct_0 *v1; // ebx

 v1 = a0;
 ((void (*)())v1->field_1c)();
 return 0;
}


// Function: sub_4010ea at 0x4010ea
void sub_4010ea()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */

#include <math.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/* Forward declarations */
void __do_global_ctors_aux(void);

/* Stack canary support - simulates gs:20 access */
static inline unsigned int _ccall(unsigned long ldt, unsigned long gdt, unsigned int gs, unsigned int offset)
{
    unsigned int result;
    __asm__("movl %%gs:%1, %0" : "=r"(result) : "m"(*(unsigned int*)offset));
    (void)ldt;
    (void)gdt;
    (void)gs;
    return result;
}

/* Global stack canary guard */
extern unsigned long __stack_chk_guard;

int sub_4010b0(const char *fmt, ...)
{
 va_list args;
 va_start(args, fmt);
 int ret = vprintf(fmt, args);
 va_end(args);
 return ret;
}

// Overloaded version for integer arguments
int sub_4010b0_int(unsigned int fmt, unsigned int a1)
{
 return a1;
}

#ifndef NULL
#define NULL ((void*)0)
#endif

unsigned long __stack_chk_guard = 0;
unsigned int vvar_1[32] = {0};
void (*g_405ff4)(void) = NULL;
const char *g_403008 = "test_calling_conventions";
const char *g_4030cc = "CALL-L2-01: %d\n";
const char *g_4030f4 = "CALL-L2-02: %d\n";
const char *g_403118 = "CALL-L2-03: %d\n";
const char *g_403144 = "CALL-L2-04: %d\n";
const char *g_40316c = "CALL-L2-05: %d\n";
const char *g_403198 = "CALL-L2-05: %d\n";
const char *g_4031d8 = "PARAM-L1-01: %d\n";
const char *g_4032b4 = "RET-L1-01: %d\n";
const char *g_4032d2 = "RET-L1-02: %d\n";
const char *g_4032ee = "RET-L1-03: %d\n";
const char *g_40330a = "RET-L1-04: %d\n";
const char *g_403325 = "RET-L1-05: %d\n";
const char *g_403342 = "RET-L1-06: %d\n";
const char *g_40335e = "RET-L1-07: %d\n";
const char *g_40337b = "RET-L1-08: %d\n";
const char *g_403397 = "RET-L1-09: %d\n";
const char *g_4033b3 = "RET-L1-10: %d\n";



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

void deregister_tm_clones()
{
 unsigned int *ptr; // edx

 __x86_get_pc_thunk_dx();
 (void)((char *)&ptr[5048] + 3);
}


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

void register_tm_clones()
{
 struct_0 *v2; // edx
 struct_0 *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]
 unsigned int (*func_ptr)(char*, unsigned int); // function pointer

 __x86_get_pc_thunk_dx();
 v3 = (struct_0 *)((char *)&v2->padding_0[20055]);
 v0 = v4;
 {
 ptrdiff_t diff = (char *)&v3->padding_0[76] - (char *)v3;
 if (!((unsigned int)diff >> 31) + ((unsigned int)diff >> 2) >> 1)
 {
 (void)((diff >> 31) + (diff >> 2) >> 1);
 }
 else if (*((int *)&v3->padding_0[48]))
 {
 func_ptr = (unsigned int (*)(char*, unsigned int))*((int *)&v3->padding_0[48]);
 func_ptr(&v3->padding_0[76], (diff >> 31) + (diff >> 2) >> 1);
 }
 else
 {
 (void)((diff >> 31) + (diff >> 2) >> 1);
 }
 }
}


// Function: sub_4011b7 at 0x4011b7
void sub_4011b7()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

void __do_global_dtors_aux()
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
 ptr = &v6->padding_0[19967];
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[76])
 return;
 if (*((int *)&ptr->padding_0[36]))
 sub_401090((struct_0 *)(void *)(*((int *)&ptr->padding_0[56])));
 v10 = &ptr->padding_0[224];
 v11 = *((int *)&ptr->padding_0[80]);
 i = ((char *)&ptr->padding_0[220] - (char *)v10 >> 2) - 1;
 if (*((int *)&ptr->padding_0[80]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[80]) = v13;
 (*((void (**)())&v10->padding_0[4 * v13]))();
 v11 = *((int *)&ptr->padding_0[80]);
 } while (*((int *)&ptr->padding_0[80]) < i);
 }
 deregister_tm_clones();
 ptr->padding_0[76] = 1;
}


// Function: sub_40124a at 0x40124a
void sub_40124a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */

void frame_dummy()
{
 __x86_get_pc_thunk_dx();
 return;
}



// Function: __x86_get_pc_thunk_dx at 0x401259
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86_get_pc_thunk_di at 0x40125d
int __x86_get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: cdecl_func at 0x401261
int cdecl_func(unsigned int a0, unsigned int a1)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a1 + a0;
}


// Function: call_cdecl at 0x40127c
unsigned int call_cdecl()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return cdecl_func(5, 10);
}


// Function: stdcall_func at 0x40129b
int stdcall_func(unsigned int a0, unsigned int a1)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a1 * a0;
}


// Function: call_stdcall at 0x4012b7
unsigned int call_stdcall()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return stdcall_func(5, 10);
}


// Function: fastcall_func at 0x4012d3
int fastcall_func(unsigned int a0)
{
 unsigned int v0; // ecx
 unsigned int v1; // edx

 __x86_get_pc_thunk_ax();
 return a0 + v0 + v1;
}


// Function: call_fastcall at 0x4012fe
unsigned int call_fastcall()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return fastcall_func(3);
}


// Function: call_thiscall at 0x401322
unsigned int call_thiscall()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return 15;
}


// Function: arm_aapcs_func at 0x40133a
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a4 + a0 + a1 + a2 + a3;
}


// Function: call_arm_aapcs at 0x401364
unsigned int call_arm_aapcs()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return arm_aapcs_func(1, 2, 3, 4, 5);
}


// Function: mips_func at 0x401389
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a3 + a0 + a1 + a2;
}


// Function: call_mips at 0x4013ae
unsigned int call_mips()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return mips_func(10, 20, 30, 40);
}


// Function: amd64_sysv_func at 0x4013d1
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a5 + a0 + a1 + a2 + a3 + a4;
}


// Function: call_amd64_sysv at 0x401400
unsigned int call_amd64_sysv()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return amd64_sysv_func(1, 2, 3, 4, 5, 6);
}


// Function: ms_x64_func at 0x401427
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a4 + a0 + a1 + a2 + a3;
}


// Function: call_ms_x64 at 0x401451
unsigned int call_ms_x64()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return ms_x64_func(1, 2, 3, 4, 5);
}


// Function: vectorcall_func at 0x401476
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a3 + a0 + a1 + a2;
}


// Function: call_vectorcall at 0x40149b
unsigned int call_vectorcall()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return vectorcall_func(1, 2, 3, 4);
}


// Function: mixed_conventions_test at 0x4014be
unsigned int mixed_conventions_test()
{
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 0;
 v0 += cdecl_func(1, 2);
 v0 += stdcall_func(3, 4);
 v0 += fastcall_func(7);
 return v0;
}


// Function: varargs_func at 0x40150d
unsigned int varargs_func(unsigned int a0, unsigned int a1)
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 unsigned int *ptr; // eax
 unsigned int *v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int i; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v3 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 v1 = 0;
 v0 = &vvar_1;
 for (i = 0; i < a0; i += 1)
 {
 ptr = v0;
 v0 = ptr + 1;
 v1 += *(ptr);
 }
 if (v3 != *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 __stack_chk_fail_local();
 return v1;
}


// Function: func_no_args at 0x401572
unsigned int func_no_args()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return 42;
}


// Function: func_many_args at 0x40158a
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a7 + a0 + a1 + a2 + a3 + a4 + a5 + a6;
}


// Function: func_mixed_args at 0x4015c3
int func_mixed_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 unsigned int v7; // ebx
 unsigned int v0; // [bp-0x34]
 unsigned int v1; // [bp-0x2c]
 unsigned int v2; // [bp-0x28]
 unsigned int v3; // [bp-0x24]
 unsigned int v4; // [bp-0x20]
 unsigned int v5; // [bp-0x10]
 unsigned int v6; // [bp-0x8]

 v6 = v7;
 __x86_get_pc_thunk_ax();
 v3 = a2;
 v4 = a3;
 v1 = a4;
 v2 = a5;
 v5 = (!a1 ? 0 : sub_4010e0(a1));
 v0 = v5 + a0;
 v0 = 0;
 return v0;
}


// Function: func_struct_byval at 0x401645
unsigned int func_struct_byval()
{
 unsigned int v5; // 4101
 char i; // [bp-0x10], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp+0x4]
 char v4; // [bp+0x8]

 __x86_get_pc_thunk_ax();
 memset(&i, 0, 12);
 for (; i <= 15; i += 1)
 {
 v5 = v1;
 v1 = v5 + (&v3)[2 * i];
 v2 = v2 + *((int *)&(&v4)[8 * i]) + (v5 + (&v3)[2 * i] < v5);
 }
 return v1;
}


// Function: func_struct_byptr at 0x401690
unsigned int func_struct_byptr(unsigned int *a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return (!a0 ? 4294967295 : *(a0) * a0[1]);
}


// Function: test_calling_conventions at 0x4016be
extern const char *g_403008;
extern const char *g_4030cc;
extern const char *g_4030f4;
extern const char *g_403118;
extern const char *g_403144;
extern const char *g_40316c;
extern const char *g_403198;

int test_calling_conventions()
{
 unsigned long v16; // ldt
 unsigned long v17; // gdt
 unsigned int v29; // eax
 char *cur; // edi
 char *j; // esi
 unsigned int result; // ecx
 unsigned short v18; // gs
 char v0; // [bp-0x14c]
 double v1; // [bp-0xe4], Other Possible Types: unsigned int, unsigned long
 unsigned int v2; // [bp-0xe0]
 unsigned int idx; // [bp-0xc8]
 unsigned int v4; // [bp-0xc4]
 unsigned int v5; // [bp-0xc0]
 unsigned int v6; // [bp-0xbc]
 unsigned int v7; // [bp-0xb8]
 unsigned int v8; // [bp-0xb4]
 unsigned int v9; // [bp-0xb0]
 unsigned int v10; // [bp-0xac]
 unsigned int v11; // [bp-0xa8]
 unsigned int v12; // [bp-0xa4]
 unsigned int v13; // [bp-0xa0]
 unsigned long v33; // [bp-0x9c]
 unsigned int v14; // [bp-0x20]

 v14 = *((int *)_ccall(v16, v17, (unsigned int)v18, 20));
 sub_4010d0(&g_403008);
 sub_4010b0("CALL-L1-01: %d\n", call_cdecl());
 sub_4010b0("CALL-L1-02: %d\n", call_stdcall());
 sub_4010b0("CALL-L1-03: %d\n", call_fastcall());
 sub_4010b0("CALL-L1-04: %d\n", call_thiscall());
 sub_4010b0("CALL-L1-05: %d\n", call_arm_aapcs());
 sub_4010b0("CALL-L1-06: %d\n", call_mips());
 sub_4010b0("CALL-L1-07: %d\n", call_amd64_sysv());
 sub_4010b0("CALL-L1-08: %d\n", call_ms_x64());
 sub_4010b0("CALL-L1-09: %d\n", call_vectorcall());
 sub_4010b0("CALL-L1-10: %d\n", mixed_conventions_test());
 v4 = varargs_func(5, 1);
 sub_4010b0(&g_4030cc, v4);
 v5 = func_no_args();
 sub_4010b0(&g_4030f4, v5);
 v1 = 3;
 v6 = func_many_args(1, 2, 3, 4, 5, 6, 7, 8);
 sub_4010b0(&g_403118, v6);
 v7 = (unsigned int)"test";
 *((unsigned long long *)&v1) = 0;
 v8 = func_mixed_args(10, v7, v1, v2, 100, 0);
 sub_4010b0(&g_403144, v8);
 for (idx = 0; idx <= 15; idx += 1)
 {
 v29 = idx + 1;
 (&v13)[2 * idx] = v29;
 (&v33)[2 * idx] = v29 >> 31;
 }
 cur = (char *)&v0;
 j = (char *)&v13;
 for (result = 32; result; j += 1)
 {
 result -= 1;
 *(cur) = *(j);
 cur += 1;
 }
 v9 = func_struct_byval();
 sub_4010b0(&g_40316c, v9);
 v11 = 5;
 v12 = 10;
 v10 = func_struct_byptr(&v11);
 sub_4010b0(&g_403198, v10);
 if (v14 == *((int *)_ccall(v16, v17, (unsigned int)v18, 20)))
 return v14 - *((int *)_ccall(v16, v17, (unsigned int)v18, 20));
 return __stack_chk_fail_local();
}


// Function: param_by_value_int at 0x401998
unsigned int param_by_value_int(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 a0 *= 2;
 return a0;
}


// Function: call_by_value_int at 0x4019b1
unsigned int call_by_value_int()
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 5;
 v1 = param_by_value_int(v0);
 return v1 + v0;
}


// Function: param_by_value_ptr at 0x4019e4
char param_by_value_ptr(unsigned int *ptr)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 *(ptr) = *(ptr) * 2;
 ptr = 0;
 return !ptr;
}


// Function: call_by_value_ptr at 0x401a15
unsigned int call_by_value_ptr()
{
 unsigned long v5; // ldt
 unsigned long v6; // gdt
 unsigned short v7; // gs
 unsigned int v0; // [bp-0x1c]
 char *v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v3 = *((int *)_ccall(v5, v6, (unsigned int)v7, 20));
 v0 = 5;
 v1 = &v0;
 v2 = param_by_value_ptr(v1);
 if (v3 == *((int *)_ccall(v5, v6, (unsigned int)v7, 20)))
 return v2 + v0;
 return __stack_chk_fail_local();
}


// Function: param_array_decay at 0x401a6a
unsigned int param_array_decay()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return 4;
}


// Function: call_array_decay at 0x401a82
unsigned int call_array_decay()
{
 unsigned long v5; // ldt
 unsigned long v6; // gdt
 unsigned short v7; // gs
 unsigned int result; // ecx
 unsigned int *cur; // edi
 unsigned int v10; // eax
 char *v0; // [bp-0x44]
 unsigned int v1; // [bp-0x40]
 unsigned int v2; // [bp-0x38]
 unsigned int v3; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v3 = *((int *)_ccall(v5, v6, (unsigned int)v7, 20));
 result = 10;
 for (cur = &v2; result; cur += 1)
 {
 result -= 1;
 *(cur) = 0;
 }
 v1 = 10;
 v0 = &v2;
 v10 = param_array_decay();
 if (v3 == *((int *)_ccall(v5, v6, (unsigned int)v7, 20)))
 return v10;
 return __stack_chk_fail_local();
}


// Function: param_string at 0x401ad7
int param_string(char *a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a0[1] + *(a0);
}


// Function: call_string_param at 0x401b01
unsigned int call_string_param()
{
 char v0; // [bp+0x0]

 return param_string(__x86_get_pc_thunk_ax(&v0) - -5816);
}


// Function: param_ptr_array at 0x401b23
unsigned int param_ptr_array(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]
 unsigned int i; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 0;
 for (i = 0; i < a1; i += 1)
 {
 v0 += *((char *)*((int *)(a0 + i * 4)));
 }
 return v0;
}


// Function: call_ptr_array at 0x401b72
unsigned int call_ptr_array()
{
 unsigned int v5; // eax
 unsigned long v6; // ldt
 unsigned long v7; // gdt
 unsigned short v8; // gs
 unsigned int v9; // eax
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 v5 = __x86_get_pc_thunk_ax() + 17483;
 v3 = *((int *)_ccall(v6, v7, (unsigned int)v8, 20));
 v0 = v5 - 11777;
 v1 = v5 - 11773;
 v2 = v5 - 11769;
 v9 = param_ptr_array(&v0, 3);
 if (v3 == *((int *)_ccall(v6, v7, (unsigned int)v8, 20)))
 return v9;
 return __stack_chk_fail_local();
}


// Function: param_varargs at 0x401bce
unsigned int param_varargs(unsigned int a0, unsigned int a1)
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 unsigned int *ptr; // eax
 unsigned int *v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int i; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v3 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 v0 = &vvar_1;
 v1 = 0;
 for (i = 0; i < a0; i += 1)
 {
 ptr = v0;
 v0 = ptr + 1;
 v1 += *(ptr);
 }
 if (v3 != *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 __stack_chk_fail_local();
 return v1;
}


// Function: call_varargs_param at 0x401c33
unsigned int call_varargs_param()
{
 unsigned int v0; // [bp-0x24]
 unsigned int v1; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]

 __x86_get_pc_thunk_ax();
 v2 = 40;
 v1 = 30;
 v0 = 20;
 return param_varargs(4, 10);
}


// Function: param_func_ptr at 0x401c5e
int param_func_ptr(unsigned int (*a0)(unsigned int), unsigned int a1)
{
 __x86_get_pc_thunk_ax();
 return a0(a1) + 10;
}


// Function: callback_func at 0x401c85
unsigned int callback_func(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a0 * 2;
}


// Function: call_func_ptr_param at 0x401c9d
unsigned int call_func_ptr_param()
{
 return param_func_ptr(__x86_get_pc_thunk_ax() - 39, 5);
}


// Function: param_double_ptr at 0x401cc7

unsigned int param_double_ptr(struct_0 **ptr, unsigned int a1)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 if (ptr && *(ptr))
 {
 (*ptr)->field_0 = a1;
 *(ptr) = NULL;
 return 1;
 }
 return 4294967295;
}


// Function: call_double_ptr at 0x401d08
char call_double_ptr()
{
 unsigned long v5; // ldt
 unsigned long v6; // gdt
 unsigned short v7; // gs
 unsigned int v0; // [bp-0x1c]
 char *v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v3 = *((int *)_ccall(v5, v6, (unsigned int)v7, 20));
 v0 = 10;
 v1 = &v0;
 v2 = param_double_ptr(&v1, 20);
 if (v3 == *((int *)_ccall(v5, v6, (unsigned int)v7, 20)))
 return (char)v0 + (!v1);
 return __stack_chk_fail_local();
}


// Function: param_complex_cast at 0x401d68
int param_complex_cast(unsigned int *a0, unsigned int a1)
{
 __x86_get_pc_thunk_ax();
 return (!a1 ? *(a0) : (a1 == 1 ? a0[1] + *(a0) : 4294967295));
}


// Function: call_complex_cast at 0x401dbd
unsigned int call_complex_cast()
{
 unsigned long v5; // ldt
 unsigned long v6; // gdt
 unsigned short v7; // gs
 unsigned int v8; // eax
 unsigned int v0[1]; // [bp-0x1c]
 unsigned int v1[1]; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v3 = *((int *)_ccall(v5, v6, (unsigned int)v7, 20));
 v0[0] = 305419896;
 v1[0] = 100;
 v1[0] = 100;
 v2 = 200;
 param_complex_cast(&v1, 1);
 v8 = param_complex_cast(&v0, 0);
 if (v3 == *((int *)_ccall(v5, v6, (unsigned int)v7, 20)))
 return v8;
 return __stack_chk_fail_local();
}


// Function: param_struct_byval at 0x401e20
int param_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a15 + a0;
}


// Function: call_struct_byval at 0x401e3b
unsigned int call_struct_byval()
{
 unsigned long v19; // ldt
 unsigned long v20; // gdt
 unsigned short v21; // gs
 unsigned int v22; // eax
 unsigned int idx; // [bp-0x54]
 unsigned int v1; // [bp-0x50]
 unsigned int v2; // [bp-0x4c]
 unsigned int v3; // [bp-0x48]
 unsigned int v4; // [bp-0x44]
 unsigned int v5; // [bp-0x40]
 unsigned int v6; // [bp-0x3c]
 unsigned int v7; // [bp-0x38]
 unsigned int v8; // [bp-0x34]
 unsigned int v9; // [bp-0x30]
 unsigned int v10; // [bp-0x2c]
 unsigned int v11; // [bp-0x28]
 unsigned int v12; // [bp-0x24]
 unsigned int v13; // [bp-0x20]
 unsigned int v14; // [bp-0x1c]
 unsigned int v15; // [bp-0x18]
 unsigned int v16; // [bp-0x14]
 unsigned int v17; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v17 = *((int *)_ccall(v19, v20, (unsigned int)v21, 20));
 for (idx = 0; idx <= 15; idx += 1)
 {
 (&v1)[idx] = idx;
 }
 v22 = param_struct_byval(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16);
 if (v17 == *((int *)_ccall(v19, v20, (unsigned int)v21, 20)))
 return v22;
 return __stack_chk_fail_local();
}


// Function: param_order_dep at 0x401ec2
int param_order_dep(unsigned int a0, unsigned int a1)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a1 + a0;
}


// Function: call_order_dep at 0x401edd
unsigned int call_order_dep()
{
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 0;
 v0 += 1;
 v0 += 1;
 return param_order_dep(v0, v0);
}


// Function: test_parameter_passing at 0x401f10
extern const char *g_4031d8;

int test_parameter_passing()
{
 sub_4010d0(&g_4031d8);
 sub_4010b0("PARAM-L1-01: %d\n", call_by_value_int());
 sub_4010b0("PARAM-L1-02: %d\n", call_by_value_ptr());
 sub_4010b0("PARAM-L2-01: %d\n", call_array_decay());
 sub_4010b0("PARAM-L2-02: %d\n", call_string_param());
 sub_4010b0("PARAM-L2-03: %d\n", call_ptr_array());
 sub_4010b0("PARAM-L2-04: %d\n", call_varargs_param());
 sub_4010b0("PARAM-L3-01: %d\n", call_func_ptr_param());
 sub_4010b0("PARAM-L3-02: %d\n", call_double_ptr());
 sub_4010b0("PARAM-L3-03: %d\n", call_complex_cast());
 sub_4010b0("PARAM-L3-04: %d\n", call_struct_byval());
 return sub_4010b0("PARAM-L3-05: %d\n", call_order_dep());
}


// Function: ret_basic_type at 0x402046
unsigned int ret_basic_type(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a0 * 2;
}


// Function: call_ret_basic at 0x40205e
unsigned int call_ret_basic()
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 21;
 v1 = ret_basic_type(v0);
 return v1;
}


// Function: ret_pointer at 0x40208c
int ret_pointer(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a0 + 4;
}


// Function: call_ret_pointer at 0x4020a5
int call_ret_pointer()
{
 unsigned long v6; // ldt
 unsigned long v7; // gdt
 unsigned short v8; // gs
 unsigned int *v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v4 = *((int *)_ccall(v6, v7, (unsigned int)v8, 20));
 v1 = 10;
 v2 = 20;
 v3 = 30;
 v0 = ret_pointer(&v1);
 if (v4 == *((int *)_ccall(v6, v7, (unsigned int)v8, 20)))
 return *(v0);
 return __stack_chk_fail_local();
}


// Function: ret_small_struct at 0x402100
unsigned int * ret_small_struct(unsigned int *ptr, unsigned int a1, unsigned int a2)
{
 __x86_get_pc_thunk_ax();
 *(ptr) = a1;
 ptr[1] = a2;
 return ptr;
}


// Function: call_ret_small_struct at 0x402135
int call_ret_small_struct()
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 unsigned int v0[2]; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v2 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 ret_small_struct(v0, 3, 4);
 if (v2 == *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 return v1 + v0[0];
 return __stack_chk_fail_local();
}


// Function: ret_large_struct at 0x40217f
unsigned int * ret_large_struct(unsigned int *ptr, unsigned int a1)
{
 unsigned long v18; // ldt
 unsigned long v19; // gdt
 unsigned short v20; // gs
 unsigned int index; // [bp-0x54]
 unsigned int v1; // [bp-0x50]
 unsigned int v2; // [bp-0x4c]
 unsigned int v3; // [bp-0x48]
 unsigned int v4; // [bp-0x44]
 unsigned int v5; // [bp-0x40]
 unsigned int v6; // [bp-0x3c]
 unsigned int v7; // [bp-0x38]
 unsigned int v8; // [bp-0x34]
 unsigned int v9; // [bp-0x30]
 unsigned int v10; // [bp-0x2c]
 unsigned int v11; // [bp-0x28]
 unsigned int v12; // [bp-0x24]
 unsigned int v13; // [bp-0x20]
 unsigned int v14; // [bp-0x1c]
 unsigned int v15; // [bp-0x18]
 unsigned int v16; // [bp-0x14]
 unsigned int v17; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v17 = *((int *)_ccall(v18, v19, (unsigned int)v20, 20));
 for (index = 0; index <= 15; index += 1)
 {
 (&v1)[index] = a1 + index;
 }
 memcpy(ptr, &v1, 16 * sizeof(unsigned int));
 ptr[1] = v2;
 ptr[2] = v3;
 ptr[3] = v4;
 ptr[4] = v5;
 ptr[5] = v6;
 ptr[6] = v7;
 ptr[7] = v8;
 ptr[8] = v9;
 ptr[9] = v10;
 ptr[10] = v11;
 ptr[11] = v12;
 ptr[12] = v13;
 ptr[13] = v14;
 ptr[14] = v15;
 ptr[15] = v16;
 if (v17 != *((int *)_ccall(v18, v19, (unsigned int)v20, 20)))
 __stack_chk_fail_local();
 return ptr;
}


// Function: call_ret_large_struct at 0x402240
int call_ret_large_struct()
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 unsigned int v0[16]; // [bp-0x50]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v2 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 ret_large_struct(&v0, 100);
 if (v2 == *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 return v1 + v0[0];
 return __stack_chk_fail_local();
}


// Function: func_a at 0x40228b
int func_a(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a0 + 10;
}


// Function: func_b at 0x4022a4
unsigned int func_b(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a0 * 2;
}


// Function: ret_func_ptr at 0x4022bc
unsigned int ret_func_ptr(unsigned int a0)
{
 unsigned int v1; // eax
 char v0; // [bp+0x0]

 v1 = __x86_get_pc_thunk_ax(&v0) + 15620;
 return (!a0 ? v1 - 15681 : v1 - 15656);
}


// Function: call_ret_func_ptr at 0x4022e3
int call_ret_func_ptr()
{
 unsigned int (*v0)(unsigned int); // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v0 = (unsigned int (*)(unsigned int))ret_func_ptr(1);
 return v0(5);
}


// Function: ret_opaque_handle at 0x402313
unsigned int ret_opaque_handle(unsigned int a0)
{
 unsigned int v1; // eax
 char v0; // [bp+0x0]

 v1 = __x86_get_pc_thunk_ax(&v0) + 15533;
 return (!a0 ? v1 + 60 : v1 + 68);
}


// Function: call_ret_opaque at 0x40233a
int call_ret_opaque()
{
 unsigned int *v0; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = (unsigned int *)ret_opaque_handle(0);
 return *(v0);
}


// Function: ret_complex_expr at 0x402362
int ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return (a0 <= a1 ? a2 + 10 : a2 * 2);
}


// Function: call_ret_complex_expr at 0x40238a
int call_ret_complex_expr()
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = ret_complex_expr(5, 3, 10);
 v1 = ret_complex_expr(3, 5, 10);
 return v1 + v0;
}


// Function: ret_multi_branch at 0x4023ca
unsigned int ret_multi_branch(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
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


// Function: call_ret_multi_branch at 0x402411
unsigned int call_ret_multi_branch()
{
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 0;
 v0 += ret_multi_branch(0);
 v0 += ret_multi_branch(1);
 v0 += ret_multi_branch(2);
 return v0;
}


// Function: ret_void at 0x402458
unsigned int * ret_void(unsigned int a0, unsigned int *ptr)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 *(ptr) = a0 * 3;
 return ptr;
}


// Function: call_ret_void at 0x40247a
int call_ret_void()
{
 unsigned long v3; // ldt
 unsigned long v4; // gdt
 unsigned short v5; // gs
 unsigned int v0[1]; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v1 = *((int *)_ccall(v3, v4, (unsigned int)v5, 20));
 ret_void(7, &v0);
 if (v1 == *((int *)_ccall(v3, v4, (unsigned int)v5, 20)))
 return *(v0);
 return __stack_chk_fail_local();
}


// Function: test_return_values at 0x4024bd
extern const char *g_4032b4;
extern const char *g_4032d2;
extern const char *g_4032ee;
extern const char *g_40330a;
extern const char *g_403325;
extern const char *g_403342;
extern const char *g_40335e;
extern const char *g_40337b;
extern const char *g_403397;
extern const char *g_4033b3;

int test_return_values()
{
 sub_4010d0(&g_4032b4);
 sub_4010b0(&g_4032d2, call_ret_basic());
 sub_4010b0(&g_4032ee, call_ret_pointer());
 sub_4010b0(&g_40330a, call_ret_small_struct());
 sub_4010b0(&g_403325, call_ret_large_struct());
 sub_4010b0(&g_403342, call_ret_func_ptr());
 sub_4010b0(&g_40335e, call_ret_opaque());
 sub_4010b0(&g_40337b, call_ret_complex_expr());
 sub_4010b0(&g_403397, call_ret_multi_branch());
 return sub_4010b0(&g_4033b3, call_ret_void());
}


// Function: main at 0x4025c3
unsigned int main()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


// Function: __x86_get_pc_thunk_ax at 0x4025ed
int __x86_get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: sub_4025f1 at 0x4025f1
int sub_4025f1()
{
 __stack_chk_fail_local();
 return;
}


// Function: __stack_chk_fail_local at 0x402600
int __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4];
 struct_0 temp_struct;

 v0 = v2;
 sub_4010c0(&temp_struct);
 __do_global_ctors_aux();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

void __do_global_ctors_aux(void)
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 unsigned int *v4; // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 ptr = (struct_0 *)((char *)v2 + sizeof(struct_0) + 227);
 v4 = *((int *)&ptr->padding_0[232]);
 if (*((int *)&ptr->padding_0[232]) == 0xffffffff)
 return;
 v0 = v5;
 v6 = &ptr->padding_0[232];
 do
 {
 p = v6;
 ((void (*)(void))v4)();
 v4 = *((int *)&p->padding_0[4]);
 v6 = &p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return;
}


// Function: sub_402662 at 0x402662
void sub_402662()
{
}



/* CRT stub function _fini removed by preprocessor */


