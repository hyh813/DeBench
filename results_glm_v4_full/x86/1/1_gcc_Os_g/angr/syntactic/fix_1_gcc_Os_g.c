// Angr Decompilation of 1_gcc_Os_g
// Platform: X86


#include <stdbool.h>

/* Forward declarations for CRT functions */
unsigned int deregister_tm_clones(void);
unsigned int register_tm_clones(void);
unsigned int __do_global_dtors_aux(void);
unsigned int __x86_get_pc_thunk_ax(void);
void __x86_get_pc_thunk_dx(void);
int __x86_get_pc_thunk_di(int a0);
int __x86_get_pc_thunk_si(int a0, int a1);
void __x86_get_pc_thunk_cx(void);
void __x86_get_pc_thunk_bx(void);
void __do_global_ctors_aux(void);
void *_ccall(unsigned long a0, unsigned long a1, unsigned int a2, int a3);

struct struct_0 {
    char padding_0[221];
};

struct struct_0 *g_405ff4;

int _init()
{
 return 0;
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 goto *(void *)ptr[2];
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
int sub_40109e()
{
 sub_4010a0();
 return;
}


// Function: sub_4010a0 at 0x4010a0
typedef struct struct_0_a0 {
 char padding_0[40];
 unsigned int field_28;
} struct_0_a0;

int sub_4010a0()
{
 return 0;
}


// Function: sub_4010aa at 0x4010aa
int sub_4010aa()
{
 sub_4010b0();
 return;
}


// Function: sub_4010b0 at 0x4010b0
typedef struct struct_0_b0 {
 char padding_0[12];
 unsigned int field_c;
} struct_0_b0;

void sub_4010b0()
{
 return;
}


// Function: sub_4010ba at 0x4010ba
int sub_4010ba()
{
 sub_4010c0();
 return;
}


// Function: sub_4010c0 at 0x4010c0
typedef struct struct_0_c0 {
 char padding_0[16];
 unsigned int field_10;
} struct_0_c0;

void sub_4010c0()
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
typedef struct struct_0_d0 {
 char padding_0[20];
 unsigned int field_14;
} struct_0_d0;

void sub_4010d0()
{
 return;
}


// Function: sub_4010da at 0x4010da
int sub_4010da()
{
 sub_4010e0();
 return;
}


// Function: sub_4010e0 at 0x4010e0
typedef struct struct_0_e0 {
 char padding_0[24];
 unsigned int field_18;
} struct_0_e0;

void sub_4010e0()
{
 return;
}


// Function: sub_4010ea at 0x4010ea
int sub_4010ea()
{
 sub_4010f0();
 return;
}


// Function: sub_4010f0 at 0x4010f0
typedef struct struct_0_f0 {
 char padding_0[28];
 unsigned int field_1c;
} struct_0_f0;

void sub_4010f0()
{
 return;
}


// Function: sub_4010fa at 0x4010fa
int sub_4010fa()
{
 sub_401100();
 return;
}


// Function: sub_401100 at 0x401100
typedef struct struct_0_100 {
 char padding_0[32];
 unsigned int field_20;
} struct_0_100;

void sub_401100()
{
 return;
}


// Function: sub_40110a at 0x40110a
void sub_40110a()
{
 main();
 return;
}


// Function: main at 0x401110
int main()
{
 char v0; // [bp+0x0]

 test_control_flow_l1(&v0);
 test_control_flow_l2(&v0);
 test_control_flow_l3();
 return 0;
}


// Function: sub_40112d at 0x40112d
void sub_40112d()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40115c at 0x40115c
void sub_40115c()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x401160
void __x86_get_pc_thunk_bx(void)
{
 return;
}

/* Stub for missing CRT function */
void __do_global_ctors_aux(void)
{
}

/* Stub for stack canary check function */
void *_ccall(unsigned long a0, unsigned long a1, unsigned int a2, int a3)
{
 static int canary = 0;
 return &canary;
}


// Function: sub_401164 at 0x401164
void sub_401164()
{
 deregister_tm_clones();
 return;
}


// Function: deregister_tm_clones at 0x401170
unsigned int deregister_tm_clones(void)
{
 unsigned int *ptr; // edx
 unsigned int v1; // eax

 ptr = (unsigned int *)__x86_get_pc_thunk_dx() + 19709;
 v1 = *((int *)ptr);
 return (unsigned int)((char *)ptr + 20211);
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


// Function: register_tm_clones at 0x4011b0
unsigned int register_tm_clones(void)
{
 char *v2; // edx
 char *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]

 v2 = (char *)__x86_get_pc_thunk_dx() + 19709;
 v3 = v2 + 19987;
 v4 = 0;
 v0 = v4;
 if (!((v3 + 160 - (v3 + 160) >> 31) + (v3 + 160 - (v3 + 160) >> 2) >> 1))
 {
 return (v3 + 160 - (v3 + 160) >> 31) + (v3 + 160 - (v3 + 160) >> 2) >> 1;
 }
 else if (*((int *)(v3 + 52)))
 {
 unsigned int (*func_ptr)(unsigned int, unsigned int) = (unsigned int (*)(unsigned int, unsigned int))*(int *)(v3 + 52);
 return func_ptr(v3 + 160, (v3 + 160 - (v3 + 160) >> 31) + (v3 + 160 - (v3 + 160) >> 2) >> 1);
 }
 else
 {
 return (v3 + 160 - (v3 + 160) >> 31) + (v3 + 160 - (v3 + 160) >> 2) >> 1;
 }
}


// Function: sub_4011f7 at 0x4011f7
void sub_4011f7()
{
 __do_global_dtors_aux();
 return;
}


// Function: __do_global_dtors_aux at 0x401200
unsigned int __do_global_dtors_aux(void)
{
 struct struct_0 *v6; // edi
 struct struct_0 *v10; // esi
 unsigned int v5; // eax
 unsigned int v8; // esi
 unsigned int v9; // ebx
 unsigned int v3_var; // esi
 unsigned int v11; // eax
 unsigned int i; // ebx
 unsigned int v13; // eax
 unsigned int *v14; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v6 = (struct struct_0 *)__x86_get_pc_thunk_di(0);
 v8 = 0;
 v9 = 0;
 v5 = __x86_get_pc_thunk_di(0);
 v10 = (struct struct_0 *)((char *)v6 + 19899);
 v1 = v8;
 v0 = v9;
 if (*((char *)v10 + 184))
 return v5;
 if (*((int *)((char *)v10 + 40)))
 sub_4010a0();
 v11 = *((int *)((char *)v10 + 188));
 i = 220 / 4 - 1;
 if (*((int *)&v10->padding_0[188]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&v10->padding_0[188]) = v13;
 v11 = *((int *)&v10->padding_0[188]);
 } while (*((int *)&v10->padding_0[188]) < i);
 }
 v14 = deregister_tm_clones();
 v10->padding_0[184] = 1;
 return v14;
}


// Function: sub_40128a at 0x40128a
void sub_40128a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401299
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x40129d
int __x86_get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: recursion_factorial at 0x4012a1
unsigned int recursion_factorial(unsigned int i)
{
 unsigned int v0; // eax

 for (v0 = 1; i > 1; i -= 1)
 {
 v0 *= i;
 }
 return v0;
}


// Function: double_value at 0x4012bd
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: triple_value at 0x4012cb
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: op_add at 0x4012d8
int op_add(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: op_sub at 0x4012e7
int op_sub(unsigned int a0, unsigned int a1)
{
 return a0 - a1;
}


// Function: op_mul at 0x4012f6
int op_mul(unsigned int a0, unsigned int a1)
{
 return a0 * a1;
}


// Function: op_div at 0x401306
unsigned int op_div(unsigned int a0, unsigned int a1)
{
 unsigned int result; // ecx

 result = a1;
 if (result)
 result = a0 / result;
 return result;
}


// Function: op_mod at 0x401320
unsigned int op_mod(unsigned int a0, unsigned int a1)
{
 unsigned int result; // edx

 result = a1;
 if (result)
 result = a0 % result;
 return result;
}


// Function: op_and at 0x40133a
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a1 & a0;
}


// Function: op_or at 0x401349
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a1 | a0;
}


// Function: op_xor at 0x401358
int op_xor(unsigned int a0, unsigned int a1)
{
 return a1 ^ a0;
}


// Function: op_shl at 0x401367
int op_shl(unsigned int a0, char a1)
{
 return a0 << (a1 & 31);
}


// Function: op_shr at 0x401378
int op_shr(unsigned int a0, char a1)
{
 return a0 >> (a1 & 31);
}


// Function: state_idle at 0x401389
int state_idle(unsigned int a0)
{
 return a0 == 1;
}


// Function: state_processing at 0x40139b
unsigned int state_processing(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = a0;
 if (v0 != 2)
 v0 = (v0 == 99 ? 3 : 1);
 return v0;
}


// Function: state_done at 0x4013bd
unsigned int state_done()
{
 return 2;
}


// Function: state_error at 0x4013c7
unsigned int state_error(unsigned int a0)
{
 unsigned int result; // eax

 result = a0;
 if (result)
 result = 3;
 return result;
}


// Function: sequential_ops at 0x4013dc
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (a1 + a0) * 2 - a2;
}


// Function: single_if at 0x4013f0
unsigned int single_if(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = a0;
 if (v0 > 0)
 v0 *= 2;
 return v0;
}


// Function: if_else at 0x401402
int if_else(unsigned int a0)
{
 char v0; // [bp+0x8]

 return *((int *)&v0) > 0;
}


// Function: nested_if_2 at 0x401414
unsigned int nested_if_2(unsigned int a0, unsigned int a1)
{
 if (a0 <= 0)
 return 0;
 return a0 + a1;
}


// Function: nested_if_deep at 0x401431
unsigned int nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 unsigned int v0; // eax

 v0 = 0;
 if (a0 > 0)
 {
 v0 = 1;
 if (a1 > 0)
 {
 v0 = 2;
 if (a2 > 0)
 {
 v0 = 3;
 if (a3 > 0)
 v0 = (unsigned int)((a4 > 0) + 4);
 }
 }
 }
 return v0;
}


// Function: if_elseif_chain at 0x40146f
unsigned int if_elseif_chain(unsigned int a0)
{
 if (!a0)
 {
 return 10;
 }
 else if (a0 == 1)
 {
 return 20;
 }
 else if (a0 != 2)
 {
 return 4294967295;
 }
 else
 {
 return 30;
 }
}


// Function: if_elseif_long at 0x40149e
unsigned int if_elseif_long(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = 4294967295;
 if (a0 <= 4)
 v0 = (a0 + 1) * 100;
 return v0;
}


// Function: switch_small at 0x4014b8
unsigned int switch_small(unsigned int a0)
{
 unsigned int v0; // ecx
 unsigned int v3; // [bp-0x8]
 unsigned int v6; // eax

 v6 = 0;
 v0 = v6;
 if (a0 > 3)
 return 4294967295;
 return *((char *)(v0 + 19207 + a0 - 12004));
}


// Function: switch_large at 0x4014df
unsigned int switch_large(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = a0 * 10;
 if (a0 > 9)
 v0 = 4294967295;
 return v0;
}


// Function: switch_default at 0x4014f6
unsigned int switch_default(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = a0 * 100;
 if (a0 - 1 > 2)
 v0 = 0;
 return v0;
}


// Function: switch_fallthrough at 0x40150f
unsigned int switch_fallthrough(unsigned int a0)
{
 unsigned int v0; // eax
 unsigned int v1; // ecx

 if (a0 != 2)
 {
 if (a0 == 3)
 {
 v1 = 12;
LABEL_401538:
 v0 = a0 * 2 + v1;
 }
 else if (a0 == 1)
 {
 v0 = 0;
 }
 else
 {
 return 4294967295;
 }
 return v0 + a0;
 }
 v1 = 0;
 v0 = a0 * 2 + v1;
 return v0 + a0;
}


// Function: loop_for_fixed at 0x401541
unsigned int loop_for_fixed(unsigned int a0)
{
 unsigned int i; // eax
 unsigned int v1; // edx

 i = 0;
 for (v1 = 0; i < a0; i += 1)
 {
 v1 += i;
 }
 return v1;
}


// Function: loop_while at 0x40155a
unsigned int loop_while(unsigned int i)
{
 unsigned int v0; // ecx

 for (v0 = 0; i; i = i / 10)
 {
 v0 += 1;
 }
 return v0;
}


// Function: loop_dowhile at 0x401583
unsigned int loop_dowhile(unsigned int i)
{
 unsigned int v0; // ecx
 unsigned int v1; // ecx
 unsigned int v2; // ecx

 v0 = 0;
 do
 {
 v2 = v0 + 1;
 i = i / 10;
 v0 = v2;
 } while (i);
 return v0;
}


// Function: loop_nested at 0x4015a2
unsigned int loop_nested(unsigned int a0, unsigned int a1)
{
 unsigned int i; // ecx
 unsigned int v1; // edx

 i = 0;
 v1 = 0;
 if (a1 < 0)
 a1 = 0;
 for (; i < a0; i += 1)
 {
 v1 += a1;
 }
 return v1;
}


// Function: loop_break at 0x4015c7
unsigned int loop_break(unsigned int a0)
{
 unsigned int v4; // edi
 unsigned int v5; // esi
 unsigned int v9; // ldt
 unsigned int v10; // gdt
 unsigned short v11; // gs
 unsigned int result; // ecx
 unsigned int v8; // eax
 unsigned int cur[5]; // edi
 void* i; // esi
 char v0; // [bp-0x24]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x8]

 v3 = 0;
 v2 = 0;
 v9 = 0;
 v10 = 0;
 v11 = 0;
 cur[0] = 0;
 cur[1] = 0;
 cur[2] = 0;
 cur[3] = 0;
 cur[4] = 0;
 i = (void *)__x86_get_pc_thunk_ax() - -6736;
 v8 = 0;
 v1 = 0;
 for (result = 5; result; i += 4)
 {
 result -= 1;
 cur[5 - result] = *((int *)i);
 }
 do
 {
 if (*((int *)&(&v0)[4 * v8]) == a0)
 goto LABEL_40160f;
 } while ((v8 += 1, v8 != 5));
 v8 = 4294967295;
LABEL_40160f:
 return v8;
}


// Function: loop_continue at 0x401627
unsigned int loop_continue(unsigned int a0)
{
 unsigned int i; // eax
 unsigned int v1; // edx

 i = 1;
 for (v1 = 0; i <= a0; i += 1)
 {
 if (((char)i & 1))
 v1 += i;
 }
 return v1;
}


// Function: goto_forward at 0x401647
unsigned int goto_forward(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = a0;
 if (v0 > 0)
 v0 *= v0;
 return v0 * 2;
}


// Function: goto_backward at 0x40165c
unsigned int goto_backward(unsigned int i)
{
 unsigned int v0; // edx
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // edx
 unsigned int v4; // edx

 v0 = 1;
 if (i <= 0)
 return 1;
 v1 = 1;
 do
 {
 v2 = v1;
 v4 = v2 * v0;
 v0 = v4;
 v1 = v2 + 1;
 } while (i >= v1);
 return v2 * v3;
}


// Function: ternary_op at 0x401680
int ternary_op(unsigned int a0, unsigned int a1)
{
 if (a1 >= a0)
 return a1;
 return a0;
}


// Function: test_control_flow_l1 at 0x401694
unsigned int g_4030e8;

int test_control_flow_l1()
{
 (void)&g_4030e8;
 return 0;
}


// Function: loop_multi_exit at 0x4018e7
unsigned int loop_multi_exit()
{
 unsigned int v2; // ebp
 unsigned int v3; // ebp
 unsigned int result; // ecx
 unsigned int v6; // edi
 unsigned int v7; // esi
 unsigned int v10; // ecx
 unsigned int cur[4]; // edi
 void *i; // esi
 unsigned int v17; // eax
 unsigned long v11; // ldt
 unsigned long v12; // gdt
 unsigned short v13; // gs
 unsigned int *v14; // ecx
 char v0[16]; // [bp-0x40]
 unsigned int v1; // [bp-0x10]
 unsigned int v4; // [bp+0x4]
 unsigned int v15; // edx
 unsigned int v16; // eax

 result = 12;
 v3 = 0;
 v2 = 0;
 cur[0] = 0;
 cur[1] = 0;
 cur[2] = 0;
 cur[3] = 0;
 i = (void *)((unsigned int)__x86_get_pc_thunk_ax() + 5968);
 v17 = 0;
 v10 = 0;
 for (v1 = v17; result; i += 4)
 {
 result -= 1;
 cur[4 - result] = *((int *)i);
 }
 v14 = cur;
 while (true)
 {
 v15 = 0;
 do
 {
 if (v14[v15] == v4)
 {
 v16 = v10 * 10 + v15;
 goto LABEL_401941;
 }
 } while ((v15 += 1, v15 != 4));
 v10 += 1;
 v14 += 4;
 v16 = v10;
 if (v10 == 3)
 {
 v16 = 4294967295;
LABEL_401941:
 if (v1 != v17)
 __stack_chk_fail_local();
 return v16;
 }
 }
}


// Function: infinite_loop at 0x401959
unsigned int infinite_loop(unsigned int *ptr)
{
 unsigned int v0; // eax

 v0 = 0;
 while (*(ptr) != 1)
 {
 v0 += 1;
 if (v0 == 1001)
 {
 *(ptr) = 1;
 return v0;
 }
 }
 return v0;
}


// Function: multi_return at 0x40197a
unsigned int multi_return(unsigned int a0)
{
 if (a0 < 0)
 {
 return 4294967295;
 }
 else if (a0 <= 50)
 {
 return a0 + 1;
 }
 else
 {
 return 4294967294;
 }
}


// Function: conditional_return at 0x4019a4
unsigned int conditional_return(unsigned int a0)
{
 if (a0 <= 0)
 return -(a0);
 return a0 * 2;
}


// Function: duffs_device at 0x4019bc
unsigned int duffs_device(unsigned int a0, unsigned int *a1, unsigned int a2)
{
 unsigned int v4; // eax
 unsigned int v5; // ebx
 unsigned int v6; // edx
 unsigned int v7; // ecx
 unsigned int v8; // ebx
 unsigned int v9; // esi
 unsigned int v10; // ebx
 unsigned int v12; // edx
 unsigned int v14; // edx
 unsigned int v16; // edx
 unsigned int v18; // edx
 unsigned int v20; // edx
 unsigned int v22; // edx
 unsigned int v24; // edx
 unsigned int v25; // ebx
 unsigned int p; // eax
 unsigned int ptr; // eax
 unsigned int ptr3; // eax
 unsigned int ptr4; // eax
 unsigned int ptr5; // eax
 unsigned int ptr6; // eax
 unsigned int addr; // eax
 unsigned int v0; // [bp-0x10]
 char v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v4 = 0;
 v6 = 0;
 v9 = 0;
 v0 = 0;
 v6 = (unsigned int)a1;
 v7 = a0;
 if (v7 <= 0)
 return 4294967295;
 v8 = v7 + 7 >> 3;
 if ((v7 & 7) - 1 <= 6)
 {
 return a0;
 }
 else
 {
 while (true)
 {
 v10 = v8;
 p = (unsigned int)((unsigned int *)v4 + 1);
 v12 = (unsigned int)((unsigned int *)v6 + 1);
 *((unsigned int *)p) = *((unsigned int *)v6);
 addr = (unsigned int)((unsigned int *)p + 1);
 v14 = (unsigned int)((unsigned int *)v12 + 1);
 *((unsigned int *)addr) = *((unsigned int *)v12);
 ptr3 = (unsigned int)((unsigned int *)addr + 1);
 v16 = (unsigned int)((unsigned int *)v14 + 1);
 *((unsigned int *)ptr3) = *((unsigned int *)v14);
 ptr4 = (unsigned int)((unsigned int *)ptr3 + 1);
 v18 = (unsigned int)((unsigned int *)v16 + 1);
 *((unsigned int *)ptr4) = *((unsigned int *)v16);
 ptr5 = (unsigned int)((unsigned int *)ptr4 + 1);
 v20 = (unsigned int)((unsigned int *)v18 + 1);
 *((unsigned int *)ptr5) = *((unsigned int *)v18);
 ptr6 = (unsigned int)((unsigned int *)ptr5 + 1);
 v22 = (unsigned int)((unsigned int *)v20 + 1);
 *((unsigned int *)ptr6) = *((unsigned int *)v20);
 ptr = (unsigned int)((unsigned int *)ptr6 + 1);
 v24 = (unsigned int)((unsigned int *)v22 + 1);
 *((unsigned int *)ptr) = *((unsigned int *)v22);
 *((unsigned int *)((unsigned int)ptr + 4)) = *((unsigned int *)v24);
 v25 = v10 - 1;
 if (v10 == 1)
 break;
 v6 = (unsigned int)((unsigned int *)v24 + 1);
 v4 = (unsigned int)((unsigned int *)ptr + 1);
 v8 = v25;
 }
 return v7;
 }
}


// Function: loop_complex_cond at 0x401a5f
int loop_complex_cond(unsigned int a0)
{
 unsigned int i; // edx

 for (i = 0; i * 2 < a0 - i && i <= 9; i += 1);
 return i * 2 + a0 - i + i;
}


// Function: loop_modify_var at 0x401a82
unsigned int loop_modify_var(unsigned int a0)
{
 unsigned int cur; // eax
 unsigned int v1; // edx

 cur = 0;
 for (v1 = 0; cur < a0; cur += 1)
 {
 v1 += cur;
 if (cur > 5)
 cur += 2;
 }
 return v1;
}


// Function: loop_external_state at 0x401aa3
unsigned int loop_external_state(unsigned int *a0)
{
 unsigned int v0; // eax

 v0 = 0;
 do
 {
 } while (!*(a0) && (v0 += 1, v0 != 101));
 return v0;
}


// Function: tail_recursion at 0x401abd
unsigned int tail_recursion(unsigned int i, unsigned int a1)
{
 for (; i > 1; i -= 1)
 {
 a1 *= i;
 }
 return a1;
}


// Function: indirect_recursion_a at 0x401ad7
unsigned int indirect_recursion_a(unsigned int a0, unsigned int i)
{
 for (; i > 0; i -= 2)
 {
 if (((char)a0 & 1))
 {
 if (i == 1)
 return a0 * 3 + 1;
 a0 = a0 * 3 + 2;
 }
 else if (i != 1)
 {
 a0 = ((unsigned int)a0 / 2) + 1;
 }
 else
 {
 return (unsigned int)a0 / 2;
 }
 }
 return a0;
}


// Function: call_func_ptr at 0x401b13
int call_func_ptr(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp+0x4]

 v0 = a1;
 goto *(void *)a0;
}


// Function: call_func_ptr_array at 0x401b26
unsigned int call_func_ptr_array(unsigned int a0, unsigned int a1)
{
 unsigned int v6; // eax
 unsigned int v7; // ebx
 unsigned long v8; // ldt
 unsigned long v9; // gdt
 unsigned short v10; // gs
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp+0x4]

 v6 = (unsigned int)__x86_get_pc_thunk_ax() + 17561;
 v4 = v7;
 _ccall(v8, v9, (unsigned int)v10, 20);
 v3 = 0;
 v0 = v6 - 19723;
 v1 = v6 - 19709;
 v2 = v6 - 19751;
 if (a0 <= 2)
 {
 if (v3 == *((int *)_ccall(v8, v9, (unsigned int)v10, 20)))
 {
 v5 = a1;
 goto (&v0)[a0];
 }
 }
 else
 {
 if (v3 == *((int *)_ccall(v8, v9, (unsigned int)v10, 20)))
 return 4294967295;
 }
 __stack_chk_fail_local();
 return 4294967295;
}


// Function: call_virtual_func at 0x401ba1
unsigned int call_virtual_func(unsigned int a0, unsigned int a1)
{
 return a1 * 2;
}


// Function: process_with_callback at 0x401baf
unsigned int process_with_callback(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // esi
 unsigned int v1; // ebx
 unsigned int v2; // ebx
 unsigned int v3; // ebx

 v0 = 0;
 v1 = 0;
 while (true)
 {
 v2 = v1;
 if (v2 >= a1)
 break;
 v3 = v2 + 1;
 v0 += ((int (*)(int))a2)(*((int *)(a0 + v2 * 4)));
 v1 = v3;
 }
 return v0;
}


// Function: test_control_flow_l2 at 0x401bde
unsigned int g_4030a0;
unsigned int g_4030c0;
unsigned int g_403355;

int test_control_flow_l2()
{
 (void)&g_403355;
 return 0;
}


// Function: non_local_jump at 0x401e36
unsigned int non_local_jump()
{
 unsigned int v7; // ebx
 unsigned int v8; // edx
 unsigned int v2; // [sp-0x20]
 unsigned int v3; // ebp
 unsigned int v0; // [bp-0x28]
 unsigned int v1; // [sp-0x24]
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp+0x4]

 v7 = 0;
 v2 = 0;
 v4 = v7;
 v3 = __x86_get_pc_thunk_ax() + 16777;
 if (!sub_4010c0(v3 + 216))
 {
 if (v5 < 0)
 {
 v2 = v8;
 v1 = v8;
 v0 = 1;
 }
 else if (v5 > 100)
 {
 v2 = v5 * 2;
 v1 = v2;
 v0 = 2;
 }
 else
 {
 return v2;
 }
 sub_401100(v3 + 216);
 }
 return 4294967295;
}


// Function: cpp_exception at 0x401e9d
unsigned int cpp_exception(unsigned int a0)
{
 if (a0 < 0)
 {
 return 4294967295;
 }
 else if (a0 >= 101)
 {
 return 4294967294;
 }
 else
 {
 return a0 * 2;
 }
}


// Function: large_jump_table at 0x401ebe
typedef struct struct_0_large {
 char padding_0[16729];
 unsigned int field_4159;
} struct_0_large;

unsigned int large_jump_table(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v6; // edi
 unsigned int v7; // esi
 unsigned int cur[10];
 unsigned int v9; // ebx
 unsigned long v10; // ldt
 unsigned long v11; // gdt
 unsigned short v12; // gs
 struct_0_large *v13; // ecx
 struct_0_large *i; // esi
 unsigned int result; // ecx
 char v0; // [bp-0x48]
 unsigned int v1; // [bp-0x20]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp+0x4]

 __x86_get_pc_thunk_cx();
 v4 = 0;
 v3 = 0;
 cur[0] = 0;
 cur[1] = 0;
 cur[2] = 0;
 cur[3] = 0;
 cur[4] = 0;
 cur[5] = 0;
 cur[6] = 0;
 cur[7] = 0;
 cur[8] = 0;
 cur[9] = 0;
 v2 = 0;
 _ccall(v10, v11, (unsigned int)v12, 20);
 v1 = 0;
 i = (struct_0_large *)((unsigned int)&v13->padding_0[1]);
 for (result = 10; result; i = (struct_0_large *)((unsigned int)i + 4))
 {
 result -= 1;
 cur[10 - result] = *((int *)&i->padding_0[0]);
 }
 if (a0 <= 9)
 {
 if (v1 == *((int *)_ccall(v10, v11, (unsigned int)v12, 20)))
 {
 v5 = a1;
 a1 = a2;
 goto *(void *)((int *)&(&v0)[4 * a0]);
 }
 }
 else
 {
 if (v1 == *((int *)_ccall(v10, v11, (unsigned int)v12, 20)))
 return 4294967295;
 }
 __stack_chk_fail_local();
 return 4294967295;
}


// Function: conditional_func_ptr at 0x401f3b
int conditional_func_ptr(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // edx
 unsigned int v2; // edx
 unsigned int v3; // ebx
 unsigned int v4; // eax
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 v2 = v1 + 16516;
 v0 = v3;
 v4 = (unsigned int)v2 - 19723;
 if (a0)
 {
 v4 = (unsigned int)v2 - 19709;
 if (a0 != 1)
 v4 = (unsigned int)v2 - 19751;
 }
 a0 = a1;
 return a0;
}


// Function: state_machine at 0x401f74
unsigned int state_machine(unsigned int a0, unsigned int a1)
{
 unsigned int result; // eax

 result = a1;
 if (result == 2)
 return result;
 if (result <= 2)
 {
 if (!result)
 return !a0 - 1;
 if (result != 1)
 return 3;
 if (a0 == 2)
 return 2;
 result = 3;
 if (a0 != 99)
 goto LABEL_401fbf;
LABEL_401fbe:
 ;
 }
 else
 {
 if (result != 3)
 return 3;
 result = 0;
 if (!a0)
 goto LABEL_401fbe;
LABEL_401fbf:
 ;
 }
 return result;
}


// Function: fsm_func_table at 0x401fc9
typedef struct struct_0_fsm {
 char padding_0[16502];
 unsigned int field_4076;
} struct_0_fsm;

unsigned int fsm_func_table(unsigned int a0, unsigned int a1)
{
 unsigned int v4; // edi
 unsigned int v5; // esi
 unsigned int cur[4];
 unsigned long v7; // ldt
 unsigned long v8; // gdt
 unsigned short v9; // gs
 struct_0_fsm *v10; // ecx
 struct_0_fsm *i; // esi
 unsigned int result; // ecx
 char v0; // [bp-0x20]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc];
 unsigned int v3; // [bp-0x8]

 __x86_get_pc_thunk_cx();
 v3 = 0;
 v2 = 0;
 cur[0] = 0;
 cur[1] = 0;
 cur[2] = 0;
 cur[3] = 0;
 v1 = 0;
 i = (struct_0_fsm *)((unsigned int)&v10->padding_0[1]);
 for (result = 4; result; i = (struct_0_fsm *)((unsigned int)i + 4))
 {
 result -= 1;
 cur[4 - result] = *((int *)&i->padding_0[0]);
 }
 if (a1 <= 3)
 {
 if (v1 == *((int *)_ccall(v7, v8, (unsigned int)v9, 20)))
 goto *(void *)((int *)&(&v0)[4 * a1]);
 }
 else
 {
 if (v1 == *((int *)_ccall(v7, v8, (unsigned int)v9, 20)))
 return 3;
 }
 __stack_chk_fail_local();
 return 3;
}


// Function: computed_goto at 0x40203f
typedef struct struct_0_computed {
 char padding_0[16400];
 unsigned int field_4010;
} struct_0_computed;

unsigned int computed_goto(unsigned int a0, unsigned int a1)
{
 unsigned int v4; // edi
 unsigned int v5; // esi
 unsigned int cur[4];
 struct_0_computed *i; // esi
 unsigned int v8; // eax
 unsigned long v9; // ldt
 unsigned long v10; // gdt
 unsigned short v11; // gs
 unsigned int result; // ecx
 char v0; // [bp-0x20];
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc];
 unsigned int v3; // [bp-0x8];

 v3 = v4;
 v2 = v5;
 cur[0] = 0;
 cur[1] = 0;
 cur[2] = 0;
 cur[3] = 0;
 i = (struct_0_computed *)((unsigned int)__x86_get_pc_thunk_ax() + 16400);
 v8 = 4294967295;
 v1 = *((int *)_ccall(v9, v10, (unsigned int)v11, 20));
 for (result = 4; result; i = (struct_0_computed *)((unsigned int)i + 4))
 {
 result -= 1;
 cur[4 - result] = *((int *)&i->padding_0[0]);
 }
 if (a1 <= 3)
 {
 goto *(void *)((int *)&(&v0)[4 * a1]);
 }
 else
 {
 if (v1 != *((int *)_ccall(v9, v10, (unsigned int)v11, 20)))
 v8 = __stack_chk_fail_local();
 return v8;
 }
}


// Function: obfuscated_cf at 0x4020bf
unsigned int obfuscated_cf(unsigned int a0)
{
 return a0 * 2;
}


// Function: opaque_predicate at 0x4020cd
unsigned int opaque_predicate(unsigned int a0)
{
 return a0 * 2;
}


// Function: overlapped_code at 0x4020db
int overlapped_code(char a0)
{
 return (!(a0 & 1) ? (int)((int)a0 % 2) + (int)((int)a0 / 2) : a0 * 3 + 1);
}


// Function: test_control_flow_l3 at 0x4020f9
unsigned int g_4030d4;
unsigned int g_403548;

int test_control_flow_l3()
{
 (void)&g_403548;
 return 0;
}


// Function: __x86.get_pc_thunk_ax at 0x40226f
unsigned int __x86_get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: __x86.get_pc_thunk_cx at 0x402273
void __x86_get_pc_thunk_cx()
{
 return;
}


// Function: __x86.get_pc_thunk_si at 0x402277
int __x86_get_pc_thunk_si(int a0, int a1)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_40227b at 0x40227b
int sub_40227b()
{
 __stack_chk_fail_local();
 return 0;
}


// Function: __stack_chk_fail_local at 0x402280
void __stack_chk_fail_local()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



// Function: sub_4022e2 at 0x4022e2
void sub_4022e2()
{
}



/* CRT stub function _fini removed by preprocessor */


