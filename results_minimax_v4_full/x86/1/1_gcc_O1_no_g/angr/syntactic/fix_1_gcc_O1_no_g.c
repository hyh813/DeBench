// Angr Decompilation of 1_gcc_O1_no_g
// Platform: X86


/* CRT stub function _init removed by preprocessor */

#include <stdbool.h>

// GCC x86 intrinsics - these are typically defined in assembly
extern void __x86_get_pc_thunk_bx(void);
extern void __x86_get_pc_thunk_dx(void);
extern void __x86_get_pc_thunk_di(void);
extern void __x86_get_pc_thunk_ax(void);

// Global variable declarations
unsigned int g_405ff4;

int _init()
{
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030(unsigned int index)
{
 // Jump table dispatch - switch statement
 return index;
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
// Switch/jump table implementation - returns based on index
int sub_4010a0(unsigned int index)
{
 // Jump table dispatch - switch statement
 return index;
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
 sub_4010ba();
 return;
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
 unsigned int *v1; // ebx

 return *v1;
}


// Function: sub_4010ca at 0x4010ca
int sub_4010ca()
{
 sub_4010d0();
 return;
}


// Global struct definitions
typedef struct struct_0_d0 {
 char padding_0[20];
 unsigned int field_14;
} struct_0_d0;

typedef struct struct_0 {
 char padding_0[24];
 unsigned int field_18;
} struct_0;

typedef struct struct_0_1c {
 char padding_0[28];
 unsigned int field_1c;
} struct_0_1c;

typedef struct struct_0_20 {
 char padding_0[32];
 unsigned int field_20;
} struct_0_20;

// Function: sub_4010d0 at 0x4010d0
int sub_4010d0()
{
 struct_0_d0 *v1; // ebx

 return v1->field_14;
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

 return v1->field_18;
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
 struct_0_1c *v1; // ebx

 return v1->field_1c;
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
 struct_0_20 *v1; // ebx

 return v1->field_20;
}


// Function: sub_40110a at 0x40110a
void sub_40110a()
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



void deregister_tm_clones()
{
 return;
}


// Function: sub_401183 at 0x401183
void sub_401183()
{
}


// Function: sub_401189 at 0x401189
void sub_401189()
{
 register_tm_clones();
 return;
}



void register_tm_clones()
{
 struct_0 *v2; // edx
 struct_0 *v3; // edx
 unsigned int v4; // ebx

 __x86_get_pc_thunk_dx();
 v3 = &v2->padding_0[20019];
 // Pointer arithmetic - simplified
 v4 = 0;
 return;
}


// Function: sub_4011d7 at 0x4011d7
void sub_4011d7()
{
 __do_global_dtors_aux();
 return;
}



// Function: __do_global_dtors_aux at 0x4011d7
void __do_global_dtors_aux()
{
 struct_0 *v6; // edi
 struct_0 *ptr; // edi
 unsigned int v8; // esi
 unsigned int v9; // ebx
 struct_0 *v10; // esi
 unsigned int v11; // eax
 unsigned int i; // ebx
 unsigned int v13; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 ptr = &v6->padding_0[19931];
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[88])
 return;
 if (*((int *)&ptr->padding_0[40]))
 sub_4010a0(*((int *)&ptr->padding_0[60]));
 v10 = &ptr->padding_0[224];
 v11 = *((int *)&ptr->padding_0[92]);
 i = (&ptr->padding_0[220] - v10 >> 2) - 1;
 if (*((int *)&ptr->padding_0[92]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[92]) = v13;
 (*((int *)&v10->padding_0[4 * v13]))();
 v11 = *((int *)&ptr->padding_0[92]);
 } while (*((int *)&ptr->padding_0[92]) < i);
 }
 ptr->padding_0[88] = 1;
 return;
}


// Function: sub_40126a at 0x40126a
void sub_40126a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86_get_pc_thunk_dx at 0x401279
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86_get_pc_thunk_di at 0x40127d
void __x86_get_pc_thunk_di(void)
{
}

// Helper to get PC value for global offset table
unsigned int get_pc(void)
{
 unsigned int pc;
 return pc;
}


// Function: recursion_factorial at 0x401281
unsigned int recursion_factorial(unsigned int a0)
{
 if (a0 <= 1)
 return 1;
 return a0 * recursion_factorial(a0 - 1);
}


// Function: double_value at 0x4012ae
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: triple_value at 0x4012b9
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: op_add at 0x4012c5
int op_add(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: op_sub at 0x4012d2
int op_sub(unsigned int a0, unsigned int a1)
{
 return a0 - a1;
}


// Function: op_mul at 0x4012df
int op_mul(unsigned int a0, unsigned int a1)
{
 return a0 * a1;
}


// Function: op_div at 0x4012ed
unsigned int op_div(unsigned int a0, unsigned int a1)
{
 unsigned int result; // ecx

 result = a1;
 if (result)
 result = a0 / result;
 return result;
}


// Function: op_mod at 0x401305
unsigned int op_mod(unsigned int a0, unsigned int a1)
{
 unsigned int result; // edx

 result = a1;
 if (result)
 result = a0 % result;
 return result;
}


// Function: op_and at 0x40131d
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a1 & a0;
}


// Function: op_or at 0x40132a
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a1 | a0;
}


// Function: op_xor at 0x401337
int op_xor(unsigned int a0, unsigned int a1)
{
 return a1 ^ a0;
}


// Function: op_shl at 0x401344
int op_shl(unsigned int a0, char a1)
{
 return a0 << (a1 & 31);
}


// Function: op_shr at 0x401353
int op_shr(unsigned int a0, char a1)
{
 return a0 >> (a1 & 31);
}


// Function: state_idle at 0x401362
char state_idle(unsigned int a0)
{
 return a0 == 1;
}


// Function: state_processing at 0x401372
unsigned int state_processing(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = a0;
 if (v0 != 2)
 v0 = (v0 == 99) * 2 + 1;
 return v0;
}


// Function: state_done at 0x40138d
unsigned int state_done()
{
 return 2;
}


// Function: state_error at 0x401397
unsigned int state_error(unsigned int a0)
{
 if (!a0)
 return 0;
 return 3;
}


// Function: sequential_ops at 0x4013aa
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (a1 + a0) * 2 - a2;
}


// Function: single_if at 0x4013bd
unsigned int single_if(unsigned int a0)
{
 if (a0 > 0)
 return a0 * 2;
 return a0;
}


// Function: if_else at 0x4013ce
char if_else(unsigned int a0)
{
 return a0 > 0;
}


// Function: nested_if_2 at 0x4013de
unsigned int nested_if_2(unsigned int a0, unsigned int a1)
{
 if (a0 <= 0)
 {
 return 0;
 }
 else if (a1 <= 0)
 {
 return a0;
 }
 else
 {
 return a0 + a1;
 }
}


// Function: nested_if_deep at 0x4013fc
unsigned int nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 if (a0 <= 0)
 {
 return 0;
 }
 else if (a1 <= 0)
 {
 return 1;
 }
 else if (a2 <= 0)
 {
 return 2;
 }
 else if (a3 > 0)
 {
 return (unsigned int)((a4 > 0) + 4);
 }
 else
 {
 return 3;
 }
}


// Function: if_elseif_chain at 0x401441
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


// Function: if_elseif_long at 0x40146e
unsigned int if_elseif_long(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = __x86_get_pc_thunk_ax();
 if (a0 > 4)
 return 4294967295;
 // Jump table dispatch
 v0 = v0 + 19281 + *((int *)(v0 + 19281 + a0 * 4 - 12224));
 return v0;
}


// Function: _L56 at 0x4014ad
unsigned int _L56()
{
 return 100;
}


// Function: switch_small at 0x4014b3
unsigned int switch_small(unsigned int a0)
{
 if (a0 == 2)
 {
 return 50;
 }
 else if (a0 > 2)
 {
 return (a0 == 3) * 3 - 1;
 }
 else if (!a0)
 {
 return 15;
 }
 else if (a0 == 1)
 {
 return 5;
 }
 else
 {
 return 4294967295;
 }
}


// Function: switch_large at 0x4014f0
unsigned int switch_large(unsigned int a0)
{
 // Jump table dispatch - switch statement with cases 0-9
 if (a0 > 9)
 return 4294967295;
 
 // Jump table cases would go here - return based on index
 return a0 * 10 + 10;
}

// Function: switch_default at 0x40154e
unsigned int switch_default(unsigned int a0)
{
 if (a0 == 2)
 {
 return 200;
 }
 else if (a0 == 3)
 {
 return 300;
 }
 else if (a0 == 1)
 {
 return 100;
 }
 else
 {
 return 0;
 }
}


// Function: switch_fallthrough at 0x40157b
unsigned int switch_fallthrough(unsigned int a0)
{
 unsigned int v0; // eax
 unsigned int v1; // eax

 if (a0 != 2)
 {
 if (a0 != 3)
 {
 if (a0 != 1)
 return 4294967295;
 v0 = 0;
 }
 else
 {
 v1 = 12;
LABEL_4015a4:
 v0 = v1 + a0 * 2;
 }
 return v0 + a0;
 }
 v1 = 0;
 goto LABEL_4015a4;
}


// Function: loop_for_fixed at 0x4015b1
unsigned int loop_for_fixed(unsigned int i)
{
 unsigned int v0; // eax
 unsigned int v1; // edx
 unsigned int v2; // edx
 unsigned int v3; // eax
 unsigned int v4; // edx

 if (i <= 0)
 return 0;
 v0 = 0;
 v1 = 0;
 do
 {
 v3 = v0;
 v4 = v1 + v3;
 v0 = v3 + 1;
 v1 = v4;
 } while (i != v0);
 return v2 + v3;
}


// Function: loop_while at 0x4015da
unsigned int loop_while(unsigned int i)
{
 unsigned int v2; // esi
 unsigned int v3; // ebx
 unsigned int v4; // ebx

 v4 = 0;
 if (i)
 {
 do
 {
 i = (i * 1717986919 >> 34) - (i >> 31);
 v4 += 1;
 } while (i);
 }
 if (v4 == 0)
 return 1;
 return v4;
}


// Function: loop_dowhile at 0x401618
unsigned int loop_dowhile(unsigned int i)
{
 unsigned int v0; // ebx
 unsigned int v1; // ebx
 unsigned int v2; // ebx

 v0 = 0;
 do
 {
 i = (i * 1717986919 >> 34) - (i >> 31);
 v2 = v0 + 1;
 v0 = v2;
 } while (i);
 return v1 + 1;
}


// Function: loop_nested at 0x401646
unsigned int loop_nested(unsigned int a0, unsigned int i)
{
 unsigned int v0; // ecx
 unsigned int v1; // ebx
 unsigned int v2; // eax

 v0 = 0;
 v1 = 0;
 if (a0 <= 0)
 return 0;
 do
 {
 v2 = 0;
 if (i > 0)
 {
 do
 {
 v2 += 1;
 } while (i != v2);
 v1 += v2;
 }
 } while ((v0 += 1, a0 != v0));
 return v1;
}


// Function: loop_break at 0x401682
int loop_break()
{
 unsigned long v7; // ldt
 unsigned long v8; // gdt
 unsigned short v9; // gs
 unsigned int v10; // eax
 unsigned int v0; // [bp-0x24]
 unsigned int v1; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 unsigned int v3; // [bp-0x18]
 unsigned int v4; // [bp-0x14]
 unsigned int v5; // [bp-0x10]
 unsigned int v6; // [bp+0x4]

 v5 = *((int *)_ccall(v7, v8, (unsigned int)v9, 20));
 v10 = 0;
 v0 = 10;
 v1 = 20;
 v2 = 30;
 v3 = 40;
 v4 = 50;
 do
 {
 if ((&v0)[v10] == v6)
 goto LABEL_4016d2;
 } while ((v10 += 1, v10 != 5));
LABEL_4016d2:
 if (v5 == *((int *)_ccall(v7, v8, (unsigned int)v9, 20)))
 return;
 __stack_chk_fail_local();
}


// Function: loop_continue at 0x4016ed
unsigned int loop_continue(unsigned int a0)
{
 unsigned int v0; // eax
 unsigned int v1; // edx
 unsigned int v2; // ecx

 if (a0 <= 0)
 return 0;
 v0 = 1;
 v1 = 0;
 do
 {
 v2 = v1 + v0;
 if (((char)v0 & 1))
 v1 = v2;
 else
 v1 = v1;
 } while ((v0 += 1, v0 != a0 + 1));
 return v1;
}


// Function: goto_forward at 0x401721
unsigned int goto_forward(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = a0;
 if (v0 > 0)
 v0 *= v0;
 return v0 * 2;
}


// Function: goto_backward at 0x401735
unsigned int goto_backward(unsigned int a0)
{
 unsigned int v0; // edx
 unsigned int i; // eax
 unsigned int v2; // eax
 unsigned int v3; // edx
 unsigned int v4; // edx

 v0 = 1;
 if (a0 <= 0)
 return 1;
 i = 1;
 do
 {
 v2 = i;
 v4 = v2 * v0;
 v0 = v4;
 i = v2 + 1;
 } while (i != a0 + 1);
 return v2 * v3;
}


// Function: ternary_op at 0x40175b
int ternary_op(unsigned int a0, unsigned int a1)
{
 if (a1 >= a0)
 return a1;
 return a0;
}


// Function: test_control_flow_l1 at 0x40176d
extern unsigned int g_403064;
extern int printf(const char *format, ...);

int test_control_flow_l1()
{
 sub_4010e0(&g_403064);
 printf("CF-L1-01 (sequential_ops): %d\n", 21);
 printf("CF-L1-02 (single_if): %d\n", 20);
 printf("CF-L1-02 (single_if): %d\n", 4294967291);
 printf("CF-L1-03 (if_else): %d\n", 1);
 printf("CF-L1-03 (if_else): %d\n", 0);
 printf("CF-L1-04 (nested_if_2): %d\n", 15);
 printf("CF-L1-04 (nested_if_2): %d\n", 10);
 printf("CF-L1-04 (nested_if_2): %d\n", 0);
 printf("CF-L1-05 (nested_if_deep): %d\n", 5);
 printf("CF-L1-06 (if_elseif_chain): %d\n", 20);
 printf("CF-L1-07 (if_elseif_long): %d\n", 400);
 printf("CF-L1-08 (switch_small): %d\n", 50);
 printf("CF-L1-09 (switch_large): %d\n", 70);
 printf("CF-L1-10 (switch_default): %d\n", 0);
 printf("CF-L1-11 (switch_fallthrough): %d\n", 21);
 printf("CF-L1-12 (loop_for_fixed): %d\n", loop_for_fixed(10));
 printf("CF-L1-13 (loop_while): %d\n", loop_while(12345));
 printf("CF-L1-14 (loop_dowhile): %d\n", loop_dowhile(9876));
 printf("CF-L1-15 (loop_nested): %d\n", loop_nested(3, 4));
 printf("CF-L1-16 (loop_break): %d\n", loop_break(30));
 printf("CF-L1-16 (loop_break): %d\n", loop_break(99));
 printf("CF-L1-17 (loop_continue): %d\n", loop_continue(10));
 printf("CF-L1-18 (goto_forward): %d\n", 50);
 printf("CF-L1-18 (goto_forward): %d\n", 4294967290);
 printf("CF-L1-19 (goto_backward): %d\n", goto_backward(5));
 printf("CF-L1-20 (ternary_op): %d\n", 10);
 return printf("CF-L1-20 (ternary_op): %d\n", 8);
}


// Function: loop_multi_exit at 0x4019c5
unsigned int loop_multi_exit(unsigned int a0)
{
 unsigned long v13; // ldt
 unsigned long v14; // gdt
 unsigned short v15; // gs
 char *v16; // edx
 unsigned int v17; // ebx
 unsigned int v18; // eax
 unsigned int result; // [bp-0x40]
 unsigned int v1; // [bp-0x3c]
 unsigned int v2; // [bp-0x38]
 unsigned int v3; // [bp-0x34]
 unsigned int v4; // [bp-0x30]
 unsigned int v5; // [bp-0x2c]
 unsigned int v6; // [bp-0x28]
 unsigned int v7; // [bp-0x24]
 unsigned int v8; // [bp-0x20]
 unsigned int v9; // [bp-0x1c]
 unsigned int v10; // [bp-0x18]
 unsigned int v11; // [bp-0x14]
 unsigned int v12; // [bp-0x10]

 v12 = *((int *)_ccall(v13, v14, (unsigned int)v15, 20));
 result = 1;
 v1 = 2;
 v2 = 3;
 v3 = 4;
 v4 = 5;
 v5 = 6;
 v6 = 7;
 v7 = 8;
 v8 = 9;
 v9 = 10;
 v10 = 11;
 v11 = 12;
 v16 = &result;
 v17 = 0;
 while (true)
 {
 v18 = 0;
 do
 {
 if (*((int *)&v16[4 * v18]) == a0)
 {
 if (v12 == *((int *)_ccall(v13, v14, (unsigned int)v15, 20)))
 return v18 + v17 * 10;
 __stack_chk_fail_local();
 }
 } while ((v18 += 1, v18 != 4));
 v17 += 1;
 v16 += 16;
 if (v17 == 3)
 {
 if (v12 == *((int *)_ccall(v13, v14, (unsigned int)v15, 20)))
 return 4294967295;
 __stack_chk_fail_local();
 }
 }
}


// Function: infinite_loop at 0x401a87
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


// Function: multi_return at 0x401aac
unsigned int multi_return(unsigned int a0)
{
 if (a0 < 0)
 {
 return 4294967295;
 }
 else if (a0 > 50)
 {
 return 4294967294;
 }
 else if (((char)a0 & 1))
 {
 return a0 + 1;
 }
 else
 {
 return a0 * 2;
 }
}


// Function: conditional_return at 0x401ad6
unsigned int conditional_return(unsigned int a0)
{
 if (a0 > 0)
 {
 return a0 * 2;
 }
 else if (a0 < 0)
 {
 return -(a0);
 }
 else
 {
 return 0;
 }
}


// Function: duffs_device at 0x401af4
unsigned int duffs_device(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v1; // edi
 char v0; // [bp-0x10]

 __x86_get_pc_thunk_di(*((int *)&v0));
 if (a2 <= 0)
 {
 return 4294967295;
 }
 else if ((a2 + (a2 >> 31 >> 29) & 7) - (a2 >> 31 >> 29) <= 7)
 {
 goto v1 + 17607 + *((int *)(v1 + 17607 + ((a2 + (a2 >> 31 >> 29) & 7) - (a2 >> 31 >> 29)) * 4 - 12164));
 }
 else
 {
 return a2;
 }
}


// Function: loop_complex_cond at 0x401bbf
int loop_complex_cond(unsigned int a0)
{
 unsigned int v0; // esi
 unsigned int v1; // eax
 unsigned int v2; // edx
 unsigned int v3; // edx
 unsigned int v4; // ebx
 unsigned int v5; // ecx

 v0 = a0;
 if (v0 > 0)
 {
 v1 = 0;
 v2 = v0;
 do
 {
 v1 += 2;
 v4 = v0 - (v2 - 1);
 if (v1 >= 0)
 v5 = v1;
 else
 v5 = 0;
 } while ((v2 = v3, v2 > v5 && (v2 = v3, v4 <= 9)));
 }
 else
 {
 v4 = 0;
 v1 = 0;
 v2 = v0;
 }
 return v1 + v2 + v4;
}


// Function: loop_modify_var at 0x401c06
unsigned int loop_modify_var(unsigned int a0)
{
 unsigned int v0; // ecx
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // edx
 unsigned int v4; // eax

 v0 = 0;
 v1 = 0;
 if (a0 <= 0)
 return 0;
 while (true)
 {
 v2 = v1;
 v3 = v2 + 1;
 if (a0 <= v3)
 break;
 v0 += v3;
 v4 = v2 + 3;
 if (v3 <= 5)
 v1 = v3;
 else
 v1 = v4;
 }
 return v0;
}


// Function: loop_external_state at 0x401c35
unsigned int loop_external_state(unsigned int *a0)
{
 unsigned int v0; // eax

 v0 = 0;
 do
 {
 } while (!*(a0) && (v0 += 1, v0 != 101));
 return v0;
}


// Function: tail_recursion at 0x401c51
int tail_recursion(unsigned int a0, unsigned int a1)
{
 if (a0 <= 1)
 return a1;
 return tail_recursion(a0 - 1, a0 * a1);
}


// Function: indirect_recursion_a at 0x401c7e
unsigned int indirect_recursion_a(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // eax

 if (a1 <= 0)
 {
 return a0;
 }
 else if (((char)a0 & 1))
 {
 v0 = a0 * 3;
 return (a1 <= 1 ? v0 + 1 : indirect_recursion_a(v0 + 2, a1 - 2));
 }
 else if (a1 <= 1)
 {
 return a0 + (a0 >> 31) >> 1;
 }
 else
 {
 return indirect_recursion_a((a0 + (a0 >> 31) >> 1) + 1, a1 - 2);
 }
}


// Function: call_func_ptr at 0x401cdf
void call_func_ptr(unsigned int *a0, unsigned int a1)
{
 a0(a1);
 return;
}


// Function: call_func_ptr_array at 0x401cf2
unsigned int call_func_ptr_array(unsigned int a0, unsigned int a1)
{
 unsigned int v4; // eax
 unsigned long v5; // ldt
 unsigned long v6; // gdt
 unsigned short v7; // gs
 unsigned int v8; // eax
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 v4 = __x86_get_pc_thunk_ax() + 17098;
 v3 = *((int *)_ccall(v5, v6, (unsigned int)v7, 20));
 v0 = v4 - 19738;
 v1 = v4 - 19727;
 v2 = v4 - 19783;
 v8 = (a0 <= 2 ? (&v0)[a0](a1) : 4294967295);
 if (v3 == *((int *)_ccall(v5, v6, (unsigned int)v7, 20)))
 return v8;
 __stack_chk_fail_local();
}


// Function: call_virtual_func at 0x401d61
unsigned int call_virtual_func(unsigned int a0, unsigned int a1)
{
 return a1 * 2;
}


// Function: process_with_callback at 0x401d6c
unsigned int process_with_callback(unsigned int a0, unsigned int i, unsigned int *a2)
{
 unsigned int v0; // ebx
 unsigned int v1; // esi

 if (i <= 0)
 return 0;
 v0 = 0;
 v1 = 0;
 do
 {
 v1 += a2(*((int *)(a0 + v0 * 4)));
 v0 += 1;
 } while (i != v0);
 return v1;
}


// Function: test_control_flow_l2 at 0x401db7
extern unsigned int g_40316c;

int test_control_flow_l2()
{
 unsigned long v18; // ldt
 unsigned long v19; // gdt
 unsigned short v20; // gs
 unsigned int i; // eax
 unsigned int flag1[1]; // [bp-0x7c]
 unsigned int flag2[1]; // [bp-0x78]
 unsigned int flag3; // [bp-0x74]
 unsigned int v3; // [bp-0x70]
 unsigned int v4; // [bp-0x6c]
 unsigned int v5; // [bp-0x68]
 unsigned int v6; // [bp-0x64]
 unsigned int result; // [bp-0x60]
 unsigned int v8; // [bp-0x5c]
 unsigned int v9; // [bp-0x58]
 unsigned int v10; // [bp-0x54]
 unsigned int v11; // [bp-0x50]
 unsigned int v12; // [bp-0x4c]
 unsigned int v13; // [bp-0x48]
 unsigned int v14; // [bp-0x44]
 unsigned long v15; // [bp-0x40]
 unsigned int v16; // [bp-0x20]

 v16 = *((int *)_ccall(v18, v19, (unsigned int)v20, 20));
 sub_4010e0(&g_40316c);
 sub_4010f0(1, "CF-L2-01 (loop_multi_exit): %d\n", loop_multi_exit(7));
 *((unsigned int [1])flag1) = 0;
 sub_4010f0(1, "CF-L2-02 (infinite_loop): %d\n", infinite_loop(&flag1));
 sub_4010f0(1, "CF-L2-03 (multi_return): %d\n", 4294967295);
 sub_4010f0(1, "CF-L2-03 (multi_return): %d\n", 4294967294);
 sub_4010f0(1, "CF-L2-03 (multi_return): %d\n", 4);
 sub_4010f0(1, "CF-L2-04 (conditional_return): %d\n", 10);
 sub_4010f0(1, "CF-L2-04 (conditional_return): %d\n", 5);
 result = 1;
 v8 = 2;
 v9 = 3;
 v10 = 4;
 v11 = 5;
 v12 = 6;
 v13 = 7;
 v14 = 8;
 i = 0;
 do
 {
 *((unsigned int *)((char *)&v15 + i)) = 0;
 i += 4;
 } while (i < 32);
 sub_4010f0(1, "CF-L2-05 (duffs_device): %d\n", duffs_device(&v15, &result, 8));
 sub_4010f0(1, "CF-L2-06 (loop_complex_cond): %d\n", loop_complex_cond(10));
 sub_4010f0(1, "CF-L2-07 (loop_modify_var): %d\n", loop_modify_var(10));
 *((unsigned int [1])flag2) = 0;
 sub_4010f0(1, "CF-L2-08 (loop_external_state): %d\n", loop_external_state(&flag2));
 sub_4010f0(1, "CF-L2-09 (recursion_factorial): %d\n", recursion_factorial(5));
 sub_4010f0(1, "CF-L2-10 (tail_recursion): %d\n", tail_recursion(5, 1));
 sub_4010f0(1, "CF-L2-11 (indirect_recursion): %d\n", indirect_recursion_a(10, 3));
 sub_4010f0(1, "CF-L2-12 (call_func_ptr): %d\n", (unsigned int)call_func_ptr(double_value, 5));
 sub_4010f0(1, "CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(0, 5));
 sub_4010f0(1, "CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(2, 5));
 flag3 = 1;
 v3 = 2;
 v4 = 3;
 v5 = 4;
 v6 = 5;
 sub_4010f0(1, "CF-L2-15 (process_with_callback): %d\n", process_with_callback(&flag3, 5, double_value));
 if (v16 == *((int *)_ccall(v18, v19, (unsigned int)v20, 20)))
 return v16 - *((int *)_ccall(v18, v19, (unsigned int)v20, 20));
 __stack_chk_fail_local();
}


// Function: non_local_jump at 0x40205e
extern unsigned int _GLOBAL_OFFSET_TABLE_;
extern unsigned int jump_buffer;

unsigned int non_local_jump(unsigned int a0)
{
 unsigned int v3; // ebx
 char v0; // [bp-0x20]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0x4]

 v2 = v3;
 v1 = &_GLOBAL_OFFSET_TABLE_;
 if (!sub_4010c0(&jump_buffer))
 {
 if (a0 < 0)
 {
 sub_401100(v1 + 120, 1);
 }
 else if (a0 <= 100)
 {
 return a0 * 2;
 }
 sub_401100(*((int *)&v0) + 120, 2);
 }
 return 4294967295;
}


// Function: cpp_exception at 0x4020d6
unsigned int cpp_exception(unsigned int a0)
{
 if (a0 < 0)
 {
 return 4294967295;
 }
 else if (a0 <= 100)
 {
 return a0 * 2;
 }
 else
 {
 return 4294967294;
 }
}


// Function: large_jump_table at 0x4020f6
unsigned int large_jump_table(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v11; // eax
 unsigned long v12; // ldt
 unsigned long v13; // gdt
 unsigned short v14; // gs
 unsigned int v15; // eax
 unsigned int v0; // [bp-0x38]
 unsigned int v1; // [bp-0x34]
 unsigned int v2; // [bp-0x30]
 unsigned int v3; // [bp-0x2c]
 unsigned int v4; // [bp-0x28]
 unsigned int v5; // [bp-0x24]
 unsigned int v6; // [bp-0x20]
 unsigned int v7; // [bp-0x1c]
 unsigned int v8; // [bp-0x18]
 unsigned int v9; // [bp-0x14]
 unsigned int v10; // [bp-0x10]

 v11 = __x86_get_pc_thunk_ax() + 16070;
 v10 = *((int *)_ccall(v12, v13, (unsigned int)v14, 20));
 v0 = v11 - 19715;
 v1 = v11 - 19702;
 v2 = v11 - 19689;
 v3 = v11 - 19675;
 v4 = v11 - 19651;
 v5 = v11 - 19627;
 v6 = v11 - 19614;
 v7 = v11 - 19601;
 v8 = v11 - 19588;
 v9 = v11 - 19573;
 v15 = (a0 <= 9 ? (&v0)[a0](a1, a2) : 4294967295);
 if (v10 == *((int *)_ccall(v12, v13, (unsigned int)v14, 20)))
 return v15;
 __stack_chk_fail_local();
}


// Function: conditional_func_ptr at 0x4021b0
int conditional_func_ptr(unsigned int a0, unsigned int a1)
{
 void* v0; // edx
 void* v1; // edx
 void* v2; // eax

 __x86_get_pc_thunk_dx();
 v1 = v0 + 15884;
 v2 = v1 - 19738;
 if (a0)
 {
 v2 = v1 - 19727;
 if (a0 != 1)
 v2 = v1 - 19783;
 }
 return v2(a1);
}


// Function: state_machine at 0x4021ef
unsigned int state_machine(unsigned int a0, unsigned int a1)
{
 if (a1 == 2)
 {
 return a1;
 }
 else if (a1 <= 2)
 {
 if (!a1)
 {
 return a0 == 1;
 }
 else if (a1 == 1)
 {
 switch (a0)
 {
 case 2:
 return a0;
 case 99:
 return 3;
 default:
 return 1;
 }
 }
 else
 {
 return 3;
 }
 }
 else
 {
 if (a1 != 3)
 {
 return 3;
 }
 else if (!a0)
 {
 return a0;
 }
 else
 {
 return 3;
 }
 }
}


// Function: fsm_func_table at 0x402249
unsigned int fsm_func_table(unsigned int a0, unsigned int a1)
{
 unsigned int v5; // eax
 unsigned long v6; // ldt
 unsigned long v7; // gdt
 unsigned short v8; // gs
 unsigned int v9; // eax
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]

 v5 = __x86_get_pc_thunk_ax() + 15731;
 v4 = *((int *)_ccall(v6, v7, (unsigned int)v8, 20));
 v0 = v5 - 19558;
 v1 = v5 - 19542;
 v2 = v5 - 19515;
 v3 = v5 - 19505;
 v9 = 3;
 if (a1 <= 3)
 v9 = (&v0)[a1](a0);
 if (v4 == *((int *)_ccall(v6, v7, (unsigned int)v8, 20)))
 return v9;
 __stack_chk_fail_local();
}


// Function: computed_goto at 0x4022c1
unsigned int computed_goto(unsigned int a0, unsigned int a1)
{
 unsigned int v5; // eax
 unsigned long v6; // ldt
 unsigned long v7; // gdt
 unsigned short v8; // gs
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]

 v5 = __x86_get_pc_thunk_ax() + 15611;
 v4 = *((int *)_ccall(v6, v7, (unsigned int)v8, 20));
 v0 = v5 - 15540;
 v1 = v5 - 15514;
 v2 = v5 - 15503;
 v3 = v5 - 15492;
 if (a1 <= 3)
 {
 goto (&v0)[a1];
 }
 else
 {
 if (v4 == *((int *)_ccall(v6, v7, (unsigned int)v8, 20)))
 return 4294967295;
 __stack_chk_fail_local();
 }
}


// Function: obfuscated_cf at 0x40235b
unsigned int obfuscated_cf(unsigned int a0)
{
 return a0 * 2;
}


// Function: opaque_predicate at 0x402366
unsigned int opaque_predicate(unsigned int a0)
{
 return a0 * 2;
}


// Function: overlapped_code at 0x402371
unsigned int overlapped_code(unsigned int a0)
{
 if (!((char)a0 & 1))
 return (a0 >> 31) + a0 >> 1;
 return a0 * 3 + 1;
}


// Function: test_control_flow_l3 at 0x40238d
extern unsigned int g_4032f0;

int test_control_flow_l3()
{
 unsigned long v6; // ldt
 unsigned long v7; // gdt
 unsigned short v8; // gs
 unsigned int result; // [bp-0x20]
 unsigned int flag1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]

 v4 = *((int *)_ccall(v6, v7, (unsigned int)v8, 20));
 sub_4010e0(&g_4032f0);
 sub_4010f0(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump(5));
 sub_4010f0(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump(4294967291));
 sub_4010f0(1, "CF-L3-02 (cpp_exception): %d\n", 10);
 sub_4010f0(1, "CF-L3-02 (cpp_exception): %d\n", 4294967295);
 sub_4010f0(1, "CF-L3-03 (large_jump_table): %d\n", large_jump_table(0, 10, 5));
 sub_4010f0(1, "CF-L3-04 (conditional_func_ptr): %d\n", conditional_func_ptr(0, 5));
 sub_4010f0(1, "CF-L3-05 (state_machine): %d\n", 1);
 sub_4010f0(1, "CF-L3-06 (fsm_func_table): %d\n", fsm_func_table(2, 1));
 result = 0;
 flag1 = 1;
 v2 = 2;
 v3 = 3;
 sub_4010f0(1, "CF-L3-07 (computed_goto): %d\n", computed_goto(&result, 2));
 sub_4010f0(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 sub_4010f0(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 sub_4010f0(1, "CF-L3-10 (overlapped_code): %d\n", 16);
 if (v4 == *((int *)_ccall(v6, v7, (unsigned int)v8, 20)))
 return v4 - *((int *)_ccall(v6, v7, (unsigned int)v8, 20));
 __stack_chk_fail_local();
}


// Function: main at 0x402513
unsigned int main()
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}


// Function: __x86_get_pc_thunk_ax at 0x402533
unsigned int __x86_get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: sub_402537 at 0x402537
int sub_402537()
{
 __stack_chk_fail_local();
 return;
}


// Function: __stack_chk_fail_local at 0x402540
int __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 sub_4010d0();
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */
 struct_0;

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
 ptr = &v2[1]_padding_0[227];
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


// Function: sub_4025a2 at 0x4025a2
void sub_4025a2()
{
}



/* CRT stub function _fini removed by preprocessor */


