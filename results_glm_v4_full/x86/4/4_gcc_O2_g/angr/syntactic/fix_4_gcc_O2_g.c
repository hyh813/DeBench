// Angr Decompilation of 4_gcc_O2_g
// Platform: X86

#include <stddef.h>
#include <math.h>

struct struct_0 {
 unsigned int padding_0[256];
 unsigned int field_c;
 unsigned int field_10;
 unsigned int field_14;
 unsigned int field_18;
 unsigned int field_1c;
 unsigned int field_24;
};

typedef struct struct_0 struct_0;

void *_ccall(unsigned long a, unsigned long b, unsigned int c, int d)
{
    static unsigned int dummy = 0;
    return &dummy;
}

extern void __x86_get_pc_thunk_dx(void);
extern int __x86_get_pc_thunk_di(int a0);
extern unsigned int __x86_get_pc_thunk_ax(void);
extern void __stack_chk_fail_local(void);
extern void _start(void);
extern void frame_dummy(void);
extern unsigned int __do_global_ctors_aux(void);
extern unsigned int deregister_tm_clones(void);
extern unsigned int register_tm_clones(void);
extern void __do_global_dtors_aux(void);
extern int sub_401090(int);
extern int sub_4010b0(void);
extern int sub_4010d0(void);
extern void sub_4010e0(int, const char *, ...);
extern void sub_4010c0(void *ptr);
extern unsigned int call_fastcall(void);
extern unsigned int call_thiscall(void);
extern unsigned int param_by_value_int(int a0);
extern unsigned int call_arm_aapcs(void);
extern unsigned int call_mips(void);
extern unsigned int call_amd64_sysv(void);
extern unsigned int call_ms_x64(void);
extern unsigned int call_vectorcall(void);
extern unsigned int mixed_conventions_test(void);

/* CRT stub function _init removed by preprocessor */
extern const char *g_402008;
extern const char *g_40202c;
extern const char *g_402054;
extern const char *g_402078;
extern const char *g_4020a0;
extern const char *g_4020c8;
extern const char *g_4020f4;
struct struct_0 *g_404ff4 = NULL;

static int my_init()
{
 if (g_404ff4)
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return v0;
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
 sub_401090(0);
 return;
}


// Function: sub_401090 at 0x401090
int sub_401090(int param)
{
 struct_0 *v1; // ebx
 param = 0;
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
int sub_4010b0(void)
{
 struct_0 *v1; // ebx

 return 0;
}


// Function: sub_4010ba at 0x4010ba
int sub_4010ba()
{
 sub_4010c0(NULL);
 return;
}


// Function: sub_4010c0 at 0x4010c0
void sub_4010c0(void *ptr)
{
 return;
}


// Function: sub_4010ca at 0x4010ca
int sub_4010ca()
{
 sub_4010d0();
 return;
}


// Function: sub_4010d0 at 0x4010d0
int sub_4010d0(void)
{
 struct_0 *v1; // ebx

 return 0;
}


// Function: sub_4010da at 0x4010da
int sub_4010da()
{
 sub_4010e0(0, "");
 return;
}


// Function: sub_4010e0 at 0x4010e0
void sub_4010e0(int a, const char *b, ...)
{
 struct_0 *v1; // ebx

 return;
}


// Function: sub_4010ea at 0x4010ea
void sub_4010ea()
{
 main();
 return;
}


extern int test_calling_conventions(char *);
extern int test_parameter_passing(char *);
extern int test_return_values(void);

// Function: main at 0x4010f0
int main()
{
 char v0; // [bp+0x0]

 test_calling_conventions(&v0);
 test_parameter_passing(&v0);
 test_return_values();
 return 0;
}


// Function: sub_40110d at 0x40110d
void sub_40110d()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40113c at 0x40113c
void sub_40113c()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x401140
void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_401144 at 0x401144
void sub_401144()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

unsigned int deregister_tm_clones()
{
 __x86_get_pc_thunk_dx();
 return 0;
}


// Function: sub_401183 at 0x401183
void sub_401183()
{
}


unsigned int register_tm_clones(void);

// Function: sub_401189 at 0x401189
void sub_401189()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

unsigned int register_tm_clones()
{
 struct_0 *v2; // edx
 struct_0 *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]
 typedef unsigned int (*func_ptr_t)(void *, unsigned int);

 __x86_get_pc_thunk_dx();
 v3 = &v2->padding_0[15927];
 v0 = v4;
 if (!(&v3->padding_0[72] - &v3->padding_0[72] >> 31) + (&v3->padding_0[72] - &v3->padding_0[72] >> 2) >> 1)
 {
 return (&v3->padding_0[72] - &v3->padding_0[72] >> 31) + (&v3->padding_0[72] - &v3->padding_0[72] >> 2) >> 1;
 }
 else if (*((int *)&v3->padding_0[48]))
 {
 return ((func_ptr_t)*((int *)&v3->padding_0[48]))(&v3->padding_0[72], (&v3->padding_0[72] - &v3->padding_0[72] >> 31) + (&v3->padding_0[72] - &v3->padding_0[72] >> 2) >> 1);
 }
 else
 {
 return (&v3->padding_0[72] - &v3->padding_0[72] >> 31) + (&v3->padding_0[72] - &v3->padding_0[72] >> 2) >> 1;
 }
}


// Function: sub_4011d7 at 0x4011d7
void sub_4011d7()
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
 unsigned int v14; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v5 = (unsigned int *)__x86_get_pc_thunk_di(*((int *)&v2));
 ptr = (struct_0 *)&v6->padding_0[15839];
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[72])
 return;
 if (*((int *)&ptr->padding_0[36]))
 sub_401090(*((int *)&ptr->padding_0[56]));
 v10 = (struct_0 *)&ptr->padding_0[224];
 v11 = *((int *)&ptr->padding_0[76]);
 i = ((&ptr->padding_0[220] - (unsigned int *)v10 >> 2) - 1);
 if (*((int *)&ptr->padding_0[76]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[76]) = v13;
 ((void (*)(void))(*((int *)&v10->padding_0[4 * v13])))();
 v11 = *((int *)&ptr->padding_0[76]);
 } while (*((int *)&ptr->padding_0[76]) < i);
 }
 v14 = deregister_tm_clones();
 ptr->padding_0[72] = 1;
}


// Function: sub_40126a at 0x40126a
void sub_40126a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */

void frame_dummy()
{
 return;
}


// Function: __x86_get_pc_thunk_dx at 0x401279
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86_get_pc_thunk_di at 0x40127d
int __x86_get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401281 at 0x401281
void sub_401281(unsigned int a0)
{
 func_a();
 return;
}


// Function: func_a at 0x401290
int func_a(unsigned int a0)
{
 return a0 + 10;
}


// Function: sub_40129c at 0x40129c
void sub_40129c(unsigned int a0)
{
 func_b(a0);
 return;
}


// Function: func_b at 0x4012a0
void func_b(unsigned int a0)
{
 a0 = a0 * 2;
 return;
}


// Function: sub_4012ab at 0x4012ab
void sub_4012ab(unsigned int a0, unsigned int a1)
{
 cdecl_func();
 return;
}


// Function: cdecl_func at 0x4012b0
int cdecl_func(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: sub_4012bd at 0x4012bd
void sub_4012bd()
{
 call_cdecl();
 return;
}


// Function: call_cdecl at 0x4012c0
void call_cdecl()
{
 return;
}


// Function: sub_4012ca at 0x4012ca
void sub_4012ca(unsigned int a0, unsigned int a1)
{
 stdcall_func();
 return;
}


// Function: stdcall_func at 0x4012d0
int stdcall_func(unsigned int a0, unsigned int a1)
{
 return a0 * a1;
}


// Function: call_stdcall at 0x4012e0
unsigned int call_stdcall()
{
 return 50;
}


// Function: sub_4012ea at 0x4012ea
void sub_4012ea(unsigned int a0)
{
 fastcall_func();
 return;
}


// Function: fastcall_func at 0x4012f0
int fastcall_func(unsigned int a0)
{
 unsigned int v0; // ecx
 unsigned int v1; // edx

 return v0 + v1 + a0;
}


// Function: sub_4012fe at 0x4012fe
void sub_4012fe()
{
 call_fastcall();
 return;
}


// Function: call_fastcall at 0x401300
unsigned int call_fastcall()
{
 return 6;
}


// Function: sub_40130a at 0x40130a
void sub_40130a()
{
 call_thiscall();
 return;
}


// Function: call_thiscall at 0x401310
unsigned int call_thiscall()
{
 return 15;
}


// Function: sub_40131a at 0x40131a
void sub_40131a(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 arm_aapcs_func();
 return;
}


// Function: arm_aapcs_func at 0x401320
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a1 + a0 + a2 + a3 + a4;
}


// Function: sub_401339 at 0x401339
void sub_401339()
{
 call_arm_aapcs();
 return;
}


// Function: call_arm_aapcs at 0x401340
unsigned int call_arm_aapcs()
{
 return 15;
}


// Function: sub_40134a at 0x40134a
void sub_40134a(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 mips_func();
 return;
}


// Function: mips_func at 0x401350
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a1 + a0 + a2 + a3;
}


// Function: sub_401365 at 0x401365
void sub_401365()
{
 call_mips();
 return;
}


// Function: call_mips at 0x401370
unsigned int call_mips()
{
 return 100;
}


// Function: sub_40137a at 0x40137a
void sub_40137a(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 amd64_sysv_func();
 return;
}


// Function: amd64_sysv_func at 0x401380
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a1 + a0 + a2 + a3 + a4 + a5;
}


// Function: sub_40139d at 0x40139d
void sub_40139d()
{
 call_amd64_sysv();
 return;
}


// Function: call_amd64_sysv at 0x4013a0
unsigned int call_amd64_sysv()
{
 return 21;
}


// Function: sub_4013aa at 0x4013aa
void sub_4013aa(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 ms_x64_func();
 return;
}


// Function: ms_x64_func at 0x4013b0
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a1 + a0 + a2 + a3 + a4;
}


// Function: sub_4013c9 at 0x4013c9
void sub_4013c9()
{
 call_ms_x64();
 return;
}


// Function: call_ms_x64 at 0x4013d0
unsigned int call_ms_x64()
{
 return 15;
}


// Function: sub_4013da at 0x4013da
void sub_4013da(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 vectorcall_func();
 return;
}


// Function: vectorcall_func at 0x4013e0
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a1 + a0 + a2 + a3;
}


// Function: sub_4013f5 at 0x4013f5
void sub_4013f5()
{
 call_vectorcall();
 return;
}


// Function: call_vectorcall at 0x401400
unsigned int call_vectorcall()
{
 return 10;
}


// Function: sub_40140a at 0x40140a
void sub_40140a()
{
 mixed_conventions_test();
 return;
}


// Function: mixed_conventions_test at 0x401410
unsigned int mixed_conventions_test()
{
 return 33;
}


extern unsigned int varargs_func(unsigned int i);

// Function: sub_40141a at 0x40141a
int sub_40141a()
{
 varargs_func(0);
 return;
}


// Function: varargs_func at 0x401420
unsigned int varargs_func(unsigned int i)
{
 unsigned int idx; // eax
 unsigned int v2; // edx
 char v0; // [bp+0x8]

 if (i <= 0)
 return 0;
 idx = 0;
 v2 = 0;
 do
 {
 v2 += *((int *)&(&v0)[4 * idx]);
 idx += 1;
 } while (i != idx);
 return v2;
}


// Function: sub_401446 at 0x401446
void sub_401446()
{
}


// Function: sub_401456 at 0x401456
void sub_401456()
{
 func_no_args();
 return;
}


// Function: func_no_args at 0x40145c
int func_no_args()
{
 return 0;
}


// Function: sub_40146a at 0x40146a
void sub_40146a(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 func_many_args();
 return;
}


// Function: func_many_args at 0x401470
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a1 + a0 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: sub_401495 at 0x401495
int sub_401495()
{
 func_mixed_args();
 return;
}


// Function: func_mixed_args at 0x4014a0
int func_mixed_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 unsigned int v6; // edi
 unsigned int v7; // esi
 unsigned int v8; // ebx
 unsigned int v9; // eax
 unsigned int v10; // fpround
 unsigned int v0; // [bp-0x2c]
 double v1; // [bp-0x1c], Other Possible Types: unsigned int, unsigned long
 unsigned short v2; // [bp-0xe]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp-0x4]

 v5 = v6;
 v4 = v7;
 v3 = v8;
 if (a1)
 {
 v1 = 0x7ff8000000000000ULL;
 v0 = a1;
 v9 = sub_4010d0();
 a0 += v9;
 }
 v2 = 0;
 v1 = 0x7ff8000000000000ULL;
 return v1;
}


// Function: sub_401517 at 0x401517
int sub_401517()
{
 func_struct_byval();
 return;
}


// Function: func_struct_byval at 0x40151c
int func_struct_byval()
{
 return 1;
}


// Function: sub_401548 at 0x401548
void sub_401548(unsigned int a0)
{
 func_struct_byptr();
 return;
}


// Function: func_struct_byptr at 0x40154e
int func_struct_byptr()
{
 return 1;
}


// Function: sub_401569 at 0x401569
int sub_401569()
{
 test_calling_conventions(NULL);
 return;
}


int test_calling_conventions(char *param)
{
 unsigned long v7; // ldt
 unsigned long v8; // gdt
 unsigned int flag1; // ecx
 char *iter; // eax
 unsigned int v19; // esi
 unsigned short v9; // gs
 unsigned int v11; // eax
 unsigned int v12; // edx
 char i; // esi
 unsigned int v14; // ecx
 unsigned int v15; // eax
 char *cur; // edi
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
 i = (char)v3;
 do
 {
 v14 = v11 * 8;
 *((unsigned int *)((char *)&v20 + v14)) = v11;
 v15 = v11 + 1;
 *((unsigned int *)((char *)&v21 + v14)) = v12;
 v12 += v11 + 1 < v11;
 v11 = v15;
 } while (v12 || (v11 ^ 17));
 cur = (char *)&v4;
 flag1 = 32;
 iter = &v3;
 for (; flag1; i++)
 {
 flag1 -= 1;
 *cur++ = i;
 }
 v19 = 0;
 iter = (char *)&v4;
 do
 {
 v19 += *((int *)iter);
 iter += 2;
 } while ((char *)&v5 != iter);
 sub_4010e0(1, &g_4020c8, v19);
 sub_4010e0(1, &g_4020f4, 50);
 if (v5 != *((int *)_ccall(v7, v8, (unsigned int)v9, 20)))
 {
 __stack_chk_fail_local();
 return param_by_value_int(0);
 }
 return v5 - *((int *)_ccall(v7, v8, (unsigned int)v9, 20));
}


// Function: param_by_value_int at 0x401770
unsigned int param_by_value_int(int a0)
{
 return 30;
}


// Function: sub_40177b at 0x40177b
void sub_40177b()
{
 call_by_value_int();
 return;
}


// Function: call_by_value_int at 0x401780
void call_by_value_int(void)
{
 param_by_value_int(0);
}

extern unsigned int param_by_value_ptr(void *a0);

// Function: sub_40178a at 0x40178a
void sub_40178a(unsigned int a0)
{
 param_by_value_ptr(NULL);
 return;
}

// Function: param_by_value_ptr at 0x401790
unsigned int param_by_value_ptr(void *a0)
{
 return 11;
}


// Function: call_by_value_ptr at 0x4017a0
unsigned int call_by_value_ptr()
{
 return 11;
}

extern unsigned int param_array_decay(int a0[]);
extern unsigned int call_array_decay(void);
extern unsigned int call_string_param(void);
extern unsigned int param_ptr_array(struct_0 **a0, unsigned int a1);
extern unsigned int call_ptr_array(void);
extern unsigned int param_varargs(unsigned int i);
extern unsigned int call_double_ptr(void);
extern unsigned int param_complex_cast(unsigned int *a0, unsigned int a1);
extern unsigned int call_complex_cast(void);
extern unsigned int call_order_dep(void);
extern unsigned int call_ret_basic(void);
extern int ret_pointer(unsigned int a0);
extern unsigned int call_ret_pointer(void);
extern unsigned int *ret_small_struct(unsigned int *ptr, unsigned int a1, unsigned int a2);
extern unsigned int call_ret_small_struct(void);
extern unsigned int *ret_large_struct(unsigned int *ptr, unsigned int a1);
extern unsigned int call_ret_large_struct(void);
extern unsigned int ret_func_ptr(unsigned int a0);
extern unsigned int call_ret_func_ptr(void);
extern unsigned int ret_opaque_handle(unsigned int a0);
extern int call_ret_opaque(void);
extern int ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2);
extern unsigned int call_ret_complex_expr(void);
extern unsigned int ret_multi_branch(unsigned int a0);
extern unsigned int call_ret_multi_branch(void);
extern unsigned int *ret_void(unsigned int a0, unsigned int *ptr);
extern unsigned int call_ret_void(void);

// Function: sub_4017aa at 0x4017aa
void sub_4017aa()
{
 param_array_decay(NULL);
 return;
}

// Function: param_array_decay at 0x4017b0
unsigned int param_array_decay(int a0[])
{
 return 4;
}


// Function: sub_4017ba at 0x4017ba
void sub_4017ba()
{
 call_array_decay();
 return;
}


// Function: call_array_decay at 0x4017c0
unsigned int call_array_decay()
{
 param_array_decay(NULL);
 return 4;
}


// Function: sub_4017ca at 0x4017ca
void sub_4017ca(unsigned int a0)
{
 param_string();
 return;
}


// Function: param_string at 0x4017d0
int param_string(char *a0)
{
 return *(a0) + a0[1];
}


// Function: sub_4017e2 at 0x4017e2
void sub_4017e2()
{
 call_string_param();
 return;
}


// Function: call_string_param at 0x4017f0
unsigned int call_string_param()
{
 return 173;
}


// Function: sub_4017fa at 0x4017fa
int sub_4017fa()
{
 param_ptr_array(NULL, 0);
 return;
}


// Function: param_ptr_array at 0x401800
unsigned int param_ptr_array(struct_0 **a0, unsigned int a1)
{
 unsigned int v0; // edx
 struct_0 **i; // eax
 struct_0 **v2; // eax
 unsigned int v3; // edx
 struct_0 **v4; // eax
 unsigned int v5; // edx

 if (a1 <= 0)
 return 0;
 v0 = 0;
 i = a0;
 do
 {
 v2 = i;
 v3 = v0;
 v4 = v2 + 1;
 v5 = v3 + (*v2)->field_c;
 v0 = v5;
 i = v4;
 } while (&a0[a1] != i);
 return v3 + (*v2)->field_c;
}


// Function: sub_401832 at 0x401832
void sub_401832()
{
}


// Function: sub_40183e at 0x40183e
void sub_40183e()
{
 call_ptr_array();
 return;
}


// Function: call_ptr_array at 0x401840
unsigned int call_ptr_array()
{
 return 300;
}


// Function: sub_40184a at 0x40184a
int sub_40184a()
{
 param_varargs(0);
 return;
}


// Function: param_varargs at 0x401850
unsigned int param_varargs(unsigned int i)
{
 unsigned int idx; // eax
 unsigned int v2; // edx
 char v0; // [bp+0x8]

 if (i <= 0)
 return 0;
 idx = 0;
 v2 = 0;
 do
 {
 v2 += *((int *)&(&v0)[4 * idx]);
 idx += 1;
 } while (i != idx);
 return v2;
}


// Function: sub_401876 at 0x401876
void sub_401876()
{
}


// Function: sub_401886 at 0x401886
void sub_401886()
{
 call_varargs_param();
 return;
}


// Function: call_varargs_param at 0x401890
void call_varargs_param()
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


// Function: sub_4018a7 at 0x4018a7
void sub_4018a7(unsigned int a0, unsigned int a1)
{
 param_func_ptr();
 return;
}


// Function: param_func_ptr at 0x4018b0
typedef unsigned int (*func_ptr_t)(unsigned int);

int param_func_ptr(func_ptr_t a0, unsigned int a1)
{
 return a0(a1) + 10;
}


// Function: sub_4018c6 at 0x4018c6
void sub_4018c6()
{
 call_func_ptr_param();
 return;
}


// Function: call_func_ptr_param at 0x4018d0
int call_func_ptr_param()
{
 return 20;
}


// Function: sub_4018da at 0x4018da
void sub_4018da(unsigned int a0)
{
 param_double_ptr();
 return;
}


// Function: param_double_ptr at 0x4018e0
int param_double_ptr(struct_0 **ptr, unsigned int a1)
{
 if (!ptr)
 {
 return 4294967295;
 }
 else if (*(ptr))
 {
 (*ptr)->field_c = a1;
 *(ptr) = NULL;
 return 1;
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_401904 at 0x401904
void sub_401904()
{
}


// Function: sub_40190e at 0x40190e
void sub_40190e()
{
 call_double_ptr();
 return;
}


// Function: call_double_ptr at 0x401910
unsigned int call_double_ptr(void)
{
 return 21;
}


// Function: sub_40191a at 0x40191a
void sub_40191a(unsigned int a0, unsigned int a1)
{
 param_complex_cast(&a0, a1);
 return;
}


// Function: param_complex_cast at 0x401920
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


// Function: sub_40193b at 0x40193b
void sub_40193b()
{
}


// Function: sub_401943 at 0x401943
void sub_401943()
{
}


// Function: sub_40194e at 0x40194e
void sub_40194e()
{
 call_complex_cast();
 return;
}


// Function: call_complex_cast at 0x401950
unsigned int call_complex_cast(void)
{
 return 305419896;
}


// Function: sub_40195a at 0x40195a
void sub_40195a(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
 param_struct_byval();
 return;
}


// Function: param_struct_byval at 0x401960
int param_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
 return a15 + a0;
}


// Function: sub_40196d at 0x40196d
void sub_40196d()
{
 call_struct_byval();
 return;
}


// Function: call_struct_byval at 0x401970
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
 if (v2 != *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 {
 __stack_chk_fail_local();
 return param_order_dep();
 }
 return v1 + v0;
}


// Function: param_order_dep at 0x4019c0
int param_order_dep(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: sub_4019cd at 0x4019cd
void sub_4019cd()
{
 call_order_dep();
 return;
}


// Function: call_order_dep at 0x4019d0
unsigned int call_order_dep(void)
{
 return 4;
}


// Function: sub_4019da at 0x4019da
int sub_4019da()
{
 test_parameter_passing(NULL);
 return;
}


// Function: test_parameter_passing at 0x4019e0
extern unsigned int g_402124;
extern unsigned int ret_basic_type(unsigned int a0);

int test_parameter_passing(char *param)
{
 unsigned long v7; // ldt
 unsigned long v8; // gdt
 unsigned short v9; // gs
 unsigned int idx; // eax
 unsigned int v0; // [bp-0x78]
 unsigned int v1; // [bp-0x74]
 unsigned int v2; // [bp-0x70]
 unsigned long v3; // [bp-0x50]
 unsigned int v4; // [bp-0x14]
 unsigned int v5; // [bp-0x10]

 v5 = *((int *)_ccall(v7, v8, (unsigned int)v9, 20));
 sub_4010c0(&g_402124);
 sub_4010e0(1, "PARAM-L1-01: %d\n", 15);
 sub_4010e0(1, "PARAM-L1-02: %d\n", 11);
 sub_4010e0(1, "PARAM-L2-01: %d\n", 4);
 sub_4010e0(1, "PARAM-L2-02: %d\n", 173);
 sub_4010e0(1, "PARAM-L2-03: %d\n", 300);
 v2 = 30;
 v1 = 20;
 v0 = 10;
 sub_4010e0(1, "PARAM-L2-04: %d\n", param_varargs(4));
 sub_4010e0(1, "PARAM-L3-01: %d\n", 20);
 sub_4010e0(1, "PARAM-L3-02: %d\n", 21);
 sub_4010e0(1, "PARAM-L3-03: %d\n", 305419896);
 idx = 0;
 do
 {
 (&v3)[idx] = idx;
 idx += 1;
 } while (idx != 16);
 sub_4010e0(1, "PARAM-L3-04: %d\n", v4 + v3);
 sub_4010e0(1, "PARAM-L3-05: %d\n", 4);
 if (v5 != *((int *)_ccall(v7, v8, (unsigned int)v9, 20)))
 {
 __stack_chk_fail_local();
 return ret_basic_type(0);
 }
 param = NULL;
 return v5 - *((int *)_ccall(v7, v8, (unsigned int)v9, 20));
}


// Function: ret_basic_type at 0x401b40
unsigned int ret_basic_type(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401b4b at 0x401b4b
void sub_401b4b()
{
 call_ret_basic();
 return;
}


// Function: call_ret_basic at 0x401b50
unsigned int call_ret_basic()
{
 return 42;
}


// Function: sub_401b5a at 0x401b5a
void sub_401b5a(unsigned int a0)
{
 ret_pointer(a0);
 return;
}


// Function: ret_pointer at 0x401b60
int ret_pointer(unsigned int a0)
{
 return a0 + 4;
}


// Function: sub_401b6c at 0x401b6c
void sub_401b6c()
{
 call_ret_pointer();
 return;
}


// Function: call_ret_pointer at 0x401b70
unsigned int call_ret_pointer()
{
 return 20;
}


// Function: sub_401b7a at 0x401b7a
void sub_401b7a(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int arr[2];
 ret_small_struct(arr, a0, a1);
 return;
}


// Function: ret_small_struct at 0x401b80
unsigned int * ret_small_struct(unsigned int *ptr, unsigned int a1, unsigned int a2)
{
 *(ptr) = a1;
 ptr[1] = a2;
 return ptr;
}


// Function: sub_401b98 at 0x401b98
void sub_401b98()
{
 call_ret_small_struct();
 return;
}


// Function: call_ret_small_struct at 0x401ba0
unsigned int call_ret_small_struct()
{
 return 7;
}


// Function: sub_401baa at 0x401baa
int sub_401baa()
{
 unsigned int arr[16];
 ret_large_struct(arr, 0);
 return 0;
}


// Function: ret_large_struct at 0x401bb0
unsigned int * ret_large_struct(unsigned int *ptr, unsigned int a1)
{
 unsigned long v17; // ldt
 unsigned long v18; // gdt
 unsigned short v19; // gs
 unsigned int v20; // eax
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

 v16 = *((int *)_ccall(v17, v18, (unsigned int)v19, 20));
 v20 = a1;
 index = v20;
 do
 {
 (&v0)[index + -(v20)] = index;
 index += 1;
 } while (index != v20 + 16);
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
if (v16 != *((int *)_ccall(v17, v18, (unsigned int)v19, 20)))
{
 __stack_chk_fail_local();
 return NULL;
}
return ptr;
}


// Function: call_ret_large_struct at 0x401c70
unsigned int call_ret_large_struct()
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 unsigned int idx; // eax
 unsigned long v8; // [bp-0x1e0]
 char v0; // [bp-0x50]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]

 v2 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 idx = 100;
 do
 {
 (&v8)[idx] = idx;
 idx += 1;
 } while (idx != 116);
 if (v2 != *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 {
 __stack_chk_fail_local();
 return ret_func_ptr(0);
 }
 return v1 + *((int *)&v0);
}


// Function: ret_func_ptr at 0x401cc0
unsigned int ret_func_ptr(unsigned int a0)
 {
 unsigned int v0; // eax

 v0 = __x86_get_pc_thunk_ax() + 13059;
 if (a0)
 return v0 - 15660;
 return v0 - 15676;
}


// Function: sub_401ce4 at 0x401ce4
void sub_401ce4()
{
 call_ret_func_ptr();
 return;
}


// Function: call_ret_func_ptr at 0x401cf0
unsigned int call_ret_func_ptr()
{
 return 10;
}


// Function: sub_401cfa at 0x401cfa
void sub_401cfa()
{
 ret_opaque_handle(0);
 return;
}


// Function: ret_opaque_handle at 0x401d00
unsigned int ret_opaque_handle(unsigned int a0)
 {
 unsigned int v0; // eax

 v0 = __x86_get_pc_thunk_ax() + 12995;
 if (!a0)
 return v0 + 68;
 return v0 + 60;
}


// Function: sub_401d24 at 0x401d24
void sub_401d24()
{
 call_ret_opaque();
 return;
}


// Function: call_ret_opaque at 0x401d30
int call_ret_opaque()
{
 return *((int *)(__x86_get_pc_thunk_ax() + 13015));
}


// Function: sub_401d45 at 0x401d45
void sub_401d45(unsigned int a0, unsigned int a1, unsigned int a2)
{
 ret_complex_expr(a0, a1, a2);
 return;
}


// Function: ret_complex_expr at 0x401d50
int ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
 if (a0 <= a1)
 return a2 + 10;
 return a2 * 2;
}


// Function: sub_401d6a at 0x401d6a
void sub_401d6a()
{
 call_ret_complex_expr();
 return;
}


// Function: call_ret_complex_expr at 0x401d70
unsigned int call_ret_complex_expr()
{
 return 40;
}


// Function: sub_401d7a at 0x401d7a
void sub_401d7a(unsigned int a0)
{
 ret_multi_branch(a0);
 return;
}


// Function: ret_multi_branch at 0x401d80
unsigned int ret_multi_branch(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = 4294967295;
 if (a0 <= 2)
 v0 = (a0 * 5 + 5) * 2;
 return v0;
}


// Function: sub_401d99 at 0x401d99
void sub_401d99()
{
 call_ret_multi_branch();
 return;
}


// Function: call_ret_multi_branch at 0x401da0
unsigned int call_ret_multi_branch()
{
 return 60;
}


// Function: sub_401daa at 0x401daa
void sub_401daa(unsigned int a0, unsigned int a1)
{
 unsigned int ptr[2];
 ret_void(a0, ptr);
 return;
}


// Function: ret_void at 0x401db0
unsigned int * ret_void(unsigned int a0, unsigned int *ptr)
{
 *(ptr) = a0 * 3;
 return ptr;
}


// Function: sub_401dc2 at 0x401dc2
void sub_401dc2()
{
 call_ret_void();
 return;
}


// Function: call_ret_void at 0x401dd0
unsigned int call_ret_void()
{
 return 21;
}


// Function: sub_401dda at 0x401dda
int sub_401dda()
{
 test_return_values();
 return;
}


// Function: test_return_values at 0x401de0
extern unsigned int g_4022a0;
extern unsigned int g_4022be;
extern unsigned int g_4022da;
extern unsigned int g_4022f6;
extern unsigned int g_402311;
extern unsigned int g_40232e;
extern unsigned int g_40234a;
extern unsigned int g_402367;
extern unsigned int g_402383;
extern unsigned int g_40239f;
extern unsigned int handle1_1;

int test_return_values()
{
 sub_4010c0(&g_4022a0);
 sub_4010e0(1, &g_4022be, 42);
 sub_4010e0(1, &g_4022da, 20);
 sub_4010e0(1, &g_4022f6, 7);
 sub_4010e0(1, &g_402311, call_ret_large_struct());
 sub_4010e0(1, &g_40232e, 10);
 sub_4010e0(1, &g_40234a, handle1_1);
 sub_4010e0(1, &g_402367, 40);
 sub_4010e0(1, &g_402383, 60);
 sub_4010e0(1, &g_40239f, 21);
 return 0;
}


// Function: __x86_get_pc_thunk_ax at 0x401eb7
unsigned int __x86_get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: sub_401ebb at 0x401ebb
int sub_401ebb()
{
 __stack_chk_fail_local();
 return;
}


// Function: __stack_chk_fail_local at 0x401ec0
void __stack_chk_fail_local()
{
 unsigned int v2; // ebx

 sub_4010b0();
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

 __x86_get_pc_thunk_dx();
 ptr = (struct_0 *)&v2[1].padding_0[227];
 v4 = (unsigned int *)*((int *)&ptr->padding_0[232]);
 if (*((int *)&ptr->padding_0[232]) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = (struct_0 *)&ptr->padding_0[232];
 do
 {
 p = v6;
 ((void (*)(void))v4)();
 v4 = (unsigned int *)*((int *)&p->padding_0[4]);
 v6 = (struct_0 *)&p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_401f22 at 0x401f22
void sub_401f22()
{
}



/* CRT stub function _fini removed by preprocessor */


