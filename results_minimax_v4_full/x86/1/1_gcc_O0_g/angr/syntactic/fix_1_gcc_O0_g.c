// Angr Decompilation of 1_gcc_O0_g
// Platform: X86


/* CRT stub function _init removed by preprocessor */

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

#ifndef true
#define true TRUE
#endif

#ifndef false
#define false FALSE
#endif

// Struct definition
typedef struct struct_0 {
 char padding_0[40];
 unsigned int field_28;
} struct_0;

// Function declarations for stub functions
void frame_dummy(void);
unsigned int * deregister_tm_clones(void);
unsigned int register_tm_clones(void);
unsigned int * __do_global_dtors_aux(void);
unsigned int __do_global_ctors_aux(void);
void __x86_get_pc_thunk_di(int);
void __x86_get_pc_thunk_ax(void);
void __x86_get_pc_thunk_dx(void);

// Printf-like function declaration (stub - actual implementation removed)
void sub_4010c0(const char *format, ...);

// _ccall stub - represents a call that gets compiler canary
unsigned int _ccall(unsigned long ldt, unsigned long gdt, unsigned short gs, unsigned int arg);

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

// Function prototypes for __x86.get_pc_thunk intrinsics
void __x86_get_pc_thunk_bx(void);
void __x86_get_pc_thunk_dx(void);
void __x86_get_pc_thunk_di(int);
void __x86_get_pc_thunk_ax(void);

// Stack check fail stub
void __stack_chk_fail_local(void);

// Extern global variable
extern struct_0 *g_405ff4;

int _init()
{
 if (g_405ff4)
 (void)g_405ff4;
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
void sub_401030(unsigned int a0)
{
 // Empty stub function
}


// Function: sub_401040 at 0x401040
void sub_401040()
{
 sub_401030(0);
}


// Function: sub_40104e at 0x40104e
void sub_40104e()
{
 sub_401050();
}


// Function: sub_401050 at 0x401050
void sub_401050()
{
 sub_401030(8);
}


// Function: sub_40105e at 0x40105e
void sub_40105e()
{
 sub_401060();
}


// Function: sub_401060 at 0x401060
int sub_401060()
{
 sub_401030(16);
 return 0;
}


// Function: sub_40106e at 0x40106e
void sub_40106e()
{
 sub_401070();
}


// Function: sub_401070 at 0x401070
int sub_401070()
{
 sub_401030(24);
 return 0;
}


// Function: sub_40107e at 0x40107e
void sub_40107e()
{
 sub_401080();
}


// Function: sub_401080 at 0x401080
int sub_401080()
{
 sub_401030(32);
 return 0;
}


// Function: sub_40108e at 0x40108e
void sub_40108e()
{
 sub_401090();
}


// Function: sub_401090 at 0x401090
int sub_401090()
{
 sub_401030(40);
 return 0;
}


// Function: sub_40109e at 0x40109e
int sub_40109e()
{
 sub_4010a0();
 return;
}


// Function: sub_4010a0 at 0x4010a0
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
int sub_4010ea()
{
 sub_4010f0();
 return;
}


// Function: sub_4010f0 at 0x4010f0
int sub_4010f0()
{
 return 0;
}


// Function: sub_4010fa at 0x4010fa
int sub_4010fa()
{
 sub_401100();
 return;
}


// Function: sub_401100 at 0x401100
int sub_401100(unsigned int *a0)
{
 (void)a0;
 return 0;
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



/* CRT stub function deregister_tm_clones removed by preprocessor */

unsigned int * deregister_tm_clones()
{
 unsigned int *ptr; // edx

 __x86_get_pc_thunk_dx();
 return (char *)&ptr[5036] + 3;
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



/* CRT stub function register_tm_clones removed by preprocessor */

unsigned int register_tm_clones()
{
 // Empty stub - returns 0
 return 0;
}


// Function: sub_4011d7 at 0x4011d7
void sub_4011d7()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

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

 __x86_get_pc_thunk_di(*((int *)&v2));
 ptr = (struct_0 *)((char *)v6 + 19931);
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[88])
 return v5;
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
 v14 = deregister_tm_clones();
 ptr->padding_0[88] = 1;
 return v14;
}


// Function: sub_40126a at 0x40126a
void sub_40126a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */






// Function: __x86_get_pc_thunk_di at 0x40127d
void __x86_get_pc_thunk_di(int a0)
{
 (void)a0;
}


// Function: sequential_ops at 0x401281
unsigned int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = a1 + a0;
 v1 = v0 * 2;
 v2 = v1 - a2;
 return v2;
}


// Function: single_if at 0x4012b6
unsigned int single_if(unsigned int a0)
{
 __x86_get_pc_thunk_ax();
 if (a0 <= 0)
 {
 return a0;
 }
 return a0 * 2;
}


// Function: if_else at 0x4012d5
unsigned int if_else(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return (a0 <= 0 ? 0 : 1);
}


// Function: nested_if_2 at 0x4012fa
unsigned int nested_if_2(unsigned int a0)
{
 char v0; // [bp+0x0]
 char v1; // [bp+0x8]

 __x86_get_pc_thunk_ax();
 if (a0 <= 0)
 {
 return 0;
 }
 else if (*((int *)&v1) > 0)
 {
 return *((int *)&v1) + a0;
 }
 else
 {
 return a0;
 }
 return 0;
}


// Function: nested_if_deep at 0x40132d
unsigned int nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return (a0 <= 0 ? 0 : (a1 <= 0 ? 1 : (a2 <= 0 ? 2 : (a3 <= 0 ? 3 : (a4 <= 0 ? 4 : 5)))));
}


// Function: if_elseif_chain at 0x401386
unsigned int if_elseif_chain(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return (!a0 ? 10 : (a0 == 1 ? 20 : (a0 == 2 ? 30 : 4294967295)));
}


// Function: if_elseif_long at 0x4013c5
unsigned int if_elseif_long(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return (!a0 ? 100 : (a0 == 1 ? 200 : (a0 == 2 ? 300 : (a0 == 3 ? 400 : (a0 == 4 ? 500 : 4294967295)))));
}


// Function: switch_small at 0x40141e
unsigned int switch_small(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 10;
 v1 = 5;
 if (a0 == 3)
 return v0 / v1;
 if (a0 > 3)
 return 4294967295;
 if (a0 == 2)
 {
 return v1 * v0;
 }
 else if (a0 <= 2)
 {
 if (!a0)
 {
 return v1 + v0;
 }
 else if (a0 == 1)
 {
 return v0 - v1;
 }
 }
 return 4294967295;
}


// Function: switch_large at 0x401491
unsigned int switch_large(unsigned int a0)
{
 unsigned int v1; // eax
 char v0; // [bp+0x0]

 v1 = __x86_get_pc_thunk_ax();
 if (a0 > 9)
 return 4294967295;
 goto v1 + 19243 + *((int *)(a0 * 4 + v1 + 19243 - 12224));
}


// Function: switch_default at 0x401507
unsigned int switch_default(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 if (a0 == 3)
 return 300;
 if (a0 > 3)
 return 0;
 if (a0 == 1)
 {
 return 100;
 }
 else if (a0 == 2)
 {
 return 200;
 }
 return 0;
}


// Function: switch_fallthrough at 0x40154e
unsigned int switch_fallthrough(unsigned int a0)
{
 unsigned int cur; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 cur = 0;
 if (a0 == 3)
 {
 cur += a0 * 4;
 }
 else if (a0 > 3)
 {
 cur = 4294967295;
 return cur;
 }
 else if (a0 == 1)
 {
 cur += a0;
 return cur;
 }
 else if (a0 != 2)
 {
 cur = 4294967295;
 return cur;
 }
 cur += a0 * 2;
 cur += a0;
 return cur;
}


// Function: loop_for_fixed at 0x4015a8
unsigned int loop_for_fixed(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]
 unsigned int i; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 0;
 for (i = 0; i < a0; i += 1)
 {
 v0 += i;
 }
 return v0;
}


// Function: loop_while at 0x4015e3
unsigned int loop_while(unsigned int a0)
{
 unsigned int i; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 for (i = 0; a0; i += 1)
 {
 a0 = (a0 * 1717986919 >> 34) - (a0 >> 31);
 }
 if (i > 0)
 return i;
 return 1;
}


// Function: loop_dowhile at 0x401634
unsigned int loop_dowhile(unsigned int i)
{
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 0;
 do
 {
 i = (i * 1717986919 >> 34) - (i >> 31);
 v0 += 1;
 } while (i);
 return v0;
}


// Function: loop_nested at 0x401679
unsigned int loop_nested(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int i; // [bp-0xc]
 unsigned int j; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 0;
 for (i = 0; i < a0; i += 1)
 {
 for (j = 0; j < a1; j += 1)
 {
 v0 += 1;
 }
 }
 return v0;
}


// Function: loop_break at 0x4016c7
unsigned int loop_break(unsigned int a0)
{
 unsigned long v8; // ldt
 unsigned long v9; // gdt
 unsigned short v10; // gs
 unsigned int v0; // [bp-0x2c]
 unsigned int v1; // [bp-0x28]
 unsigned int v2; // [bp-0x24]
 unsigned int v3; // [bp-0x20]
 unsigned int v4; // [bp-0x1c]
 unsigned int v5; // [bp-0x18]
 unsigned int v6; // [bp-0x14]
 unsigned int v7; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v7 = *((int *)_ccall(v8, v9, (unsigned int)v10, 20));
 v2 = 10;
 v3 = 20;
 v4 = 30;
 v5 = 40;
 v6 = 50;
 v1 = 5;
 v0 = 0;
 while (true)
 {
 if (v0 >= v1)
 {
 v0 = 4294967295;
 break;
 }
 else if (a0 == (&v2)[v0])
 {
 break;
 }
 else
 {
 v0 += 1;
 }
 }
 if (v7 != *((int *)_ccall(v8, v9, (unsigned int)v10, 20)))
 v0 = __stack_chk_fail_local();
 return v0;
}


// Function: loop_continue at 0x40174e
unsigned int loop_continue(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]
 unsigned int i; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 0;
 for (i = 1; i <= a0; i += 1)
 {
 if (((char)i & 1))
 v0 += i;
 }
 return v0;
}


// Function: goto_forward at 0x401796
unsigned int goto_forward(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = (a0 <= 0 ? a0 : a0 * a0);
 v0 *= 2;
 return v0;
}


// Function: goto_backward at 0x4017c9
unsigned int goto_backward(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 if (a0 <= 0)
 return 1;
 v0 = 1;
 for (v1 = 1; v1 <= a0; v1 += 1)
 {
 v0 *= v1;
 }
 return v0;
}


// Function: ternary_op at 0x401816
int ternary_op(unsigned int a0, unsigned int a1)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 if (a1 < a0)
 return a0;
 return a1;
}


// Function: test_control_flow_l1 at 0x401834
extern unsigned int g_403030;

int test_control_flow_l1()
{
 sub_401100(&g_403030);
 sub_4010c0("CF-L1-01 (sequential_ops): %d\n", sequential_ops(5, 7, 3));
 sub_4010c0("CF-L1-02 (single_if): %d\n", single_if(10));
 sub_4010c0("CF-L1-02 (single_if): %d\n", single_if(4294967291));
 sub_4010c0("CF-L1-03 (if_else): %d\n", if_else(5));
 sub_4010c0("CF-L1-03 (if_else): %d\n", if_else(4294967293));
 sub_4010c0("CF-L1-04 (nested_if_2): %d\n", nested_if_2(10));
 sub_4010c0("CF-L1-04 (nested_if_2): %d\n", nested_if_2(10));
 sub_4010c0("CF-L1-04 (nested_if_2): %d\n", nested_if_2(4294967286));
 sub_4010c0("CF-L1-05 (nested_if_deep): %d\n", nested_if_deep(1, 1, 1, 1, 1));
 sub_4010c0("CF-L1-06 (if_elseif_chain): %d\n", if_elseif_chain(1));
 sub_4010c0("CF-L1-07 (if_elseif_long): %d\n", if_elseif_long(3));
 sub_4010c0("CF-L1-08 (switch_small): %d\n", switch_small(2));
 sub_4010c0("CF-L1-09 (switch_large): %d\n", switch_large(7));
 sub_4010c0("CF-L1-10 (switch_default): %d\n", switch_default(5));
 sub_4010c0("CF-L1-11 (switch_fallthrough): %d\n", switch_fallthrough(3));
 sub_4010c0("CF-L1-12 (loop_for_fixed): %d\n", loop_for_fixed(10));
 sub_4010c0("CF-L1-13 (loop_while): %d\n", loop_while(12345));
 sub_4010c0("CF-L1-14 (loop_dowhile): %d\n", loop_dowhile(9876));
 sub_4010c0("CF-L1-15 (loop_nested): %d\n", loop_nested(3, 4));
 sub_4010c0("CF-L1-16 (loop_break): %d\n", loop_break(30));
 sub_4010c0("CF-L1-16 (loop_break): %d\n", loop_break(99));
 sub_4010c0("CF-L1-17 (loop_continue): %d\n", loop_continue(10));
 sub_4010c0("CF-L1-18 (goto_forward): %d\n", goto_forward(5));
 sub_4010c0("CF-L1-18 (goto_forward): %d\n", goto_forward(4294967293));
 sub_4010c0("CF-L1-19 (goto_backward): %d\n", goto_backward(5));
 sub_4010c0("CF-L1-20 (ternary_op): %d\n", ternary_op(10, 5));
 sub_4010c0("CF-L1-20 (ternary_op): %d\n", ternary_op(3, 8));
 return 0;
}


// Function: loop_multi_exit at 0x401be0
unsigned int loop_multi_exit(unsigned int a0)
{
 unsigned long v15; // ldt
 unsigned long v16; // gdt
 unsigned short v17; // gs
 unsigned int v18; // eax
 unsigned int v0; // [bp-0x48]
 unsigned int v1; // [bp-0x44]
 unsigned int result; // [bp-0x40]
 unsigned int v3; // [bp-0x3c]
 unsigned int v4; // [bp-0x38]
 unsigned int v5; // [bp-0x34]
 unsigned int v6; // [bp-0x30]
 unsigned int v7; // [bp-0x2c]
 unsigned int v8; // [bp-0x28]
 unsigned int v9; // [bp-0x24]
 unsigned int v10; // [bp-0x20]
 unsigned int v11; // [bp-0x1c]
 unsigned int v12; // [bp-0x18]
 unsigned int v13; // [bp-0x14]
 unsigned int v14; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v14 = *((int *)_ccall(v15, v16, (unsigned int)v17, 20));
 result = 1;
 v3 = 2;
 v4 = 3;
 v5 = 4;
 v6 = 5;
 v7 = 6;
 v8 = 7;
 v9 = 8;
 v10 = 9;
 v11 = 10;
 v12 = 11;
 v13 = 12;
 v0 = 0;
 while (true)
 {
 if (v0 <= 2)
 {
 v1 = 0;
 if (v1 > 3)
 {
 v0 += 1;
 }
 else if (a0 == (&result)[4 * v0 + v1])
 {
 v18 = v1 + v0 * 10;
 break;
 }
 else
 {
 v1 += 1;
 }
 }
 else
 {
 v18 = 4294967295;
 break;
 }
 }
 if (v14 != *((int *)_ccall(v15, v16, (unsigned int)v17, 20)))
 v18 = __stack_chk_fail_local();
 return v18;
}


// Function: infinite_loop at 0x401cbe
unsigned int infinite_loop(unsigned int *ptr)
{
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 0;
 while (*(ptr) != 1)
 {
 v0 += 1;
 if (v0 > 1000)
 {
 *(ptr) = 1;
 return v0;
 }
 }
 return v0;
}


// Function: multi_return at 0x401d01
unsigned int multi_return(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 if (a0 < 0)
 return 4294967295;
 v0 = a0 * 2;
 if (v0 > 100)
 {
 return 4294967294;
 }
 else if (!((char)a0 & 1))
 {
 return v0;
 }
 else
 {
 return a0 + 1;
 }
}


// Function: conditional_return at 0x401d4e
unsigned int conditional_return(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return (a0 <= 0 ? (a0 - 0 < 0 ? -(a0) : 0) : a0 * 2);
}


// Function: duffs_device at 0x401d80
unsigned int duffs_device(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v1; // eax
 unsigned int v2; // edx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 if (a2 <= 0)
 return 4294967295;
 v1 = a2 + 7;
 v0 = (v1 < 0 ? v1 + 7 : v1) >> 3;
 if ((a2 + (a2 >> 31 >> 29) & 7) - (a2 >> 31 >> 29) > 7)
 return a2;
 goto *((int *)(((a2 + (a2 >> 31 >> 29) & 7) - (a2 >> 31 >> 29)) * 4 + v2 + 16953 - 11552)) + v2 + 16953;
}


// Function: loop_complex_cond at 0x401ea7
int loop_complex_cond(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int i; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 0;
 v1 = a0;
 for (i = 0; v0 < v1 && i <= 9 && v1 > 0; i += 1)
 {
 v0 += 2;
 v1 -= 1;
 }
 return i + v0 + v1;
}


// Function: loop_modify_var at 0x401f00
unsigned int loop_modify_var(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]
 unsigned int cur; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 0;
 for (cur = 0; cur < a0; cur += 1)
 {
 v0 += cur;
 if (cur > 5)
 cur += 2;
 }
 return v0;
}


// Function: loop_external_state at 0x401f45
unsigned int loop_external_state(unsigned int *a0)
{
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 0;
 do
 {
 } while (!*(a0) && (v0 += 1, v0 <= 100));
 return v0;
}


// Function: recursion_factorial at 0x401f7d
unsigned int recursion_factorial(unsigned int a0)
{
 __x86_get_pc_thunk_ax();
 return (a0 <= 1 ? 1 : a0 * recursion_factorial(a0 - 1));
}


// Function: tail_recursion at 0x401fb6
unsigned int tail_recursion(unsigned int a0, unsigned int a1)
{
 __x86_get_pc_thunk_ax();
 if (a0 > 1)
 return tail_recursion(a0 - 1, a1 * a0);
 return a1;
}


// Function: indirect_recursion_a at 0x401ff1
unsigned int indirect_recursion_a(unsigned int a0, unsigned int a1)
{
 __x86_get_pc_thunk_ax();
 if (a1 > 0)
 return (!(a0 & 1) ? indirect_recursion_b(a0 + (a0 >> 31) >> 1, a1 - 1) : indirect_recursion_b(a0 * 3 + 1, a1 - 1));
 return a0;
}


// Function: indirect_recursion_b at 0x40205c
unsigned int indirect_recursion_b(unsigned int a0, unsigned int a1)
{
 __x86_get_pc_thunk_ax();
 if (a1 > 0)
 return indirect_recursion_a(a0 + 1, a1 - 1);
 return a0;
}


// Function: call_func_ptr at 0x402096
int call_func_ptr(unsigned int *a0, unsigned int a1)
{
 __x86_get_pc_thunk_ax();
 return a0(a1);
}


// Function: double_value at 0x4020ba
unsigned int double_value(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return a0 * 2;
}


// Function: triple_value at 0x4020d2
unsigned int triple_value(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return a0 * 3;
}


// Function: call_func_ptr_array at 0x4020ee
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

 v4 = __x86_get_pc_thunk_ax() + 16075;
 v3 = *((int *)_ccall(v5, v6, (unsigned int)v7, 20));
 v0 = v4 - 16142;
 v1 = v4 - 16118;
 v2 = v4 - 16459;
 if (a0 < 0 || a0 > 2)
 v8 = 4294967295;
 else
 v8 = (&v0)[a0](a1);
 if (v3 != *((int *)_ccall(v5, v6, (unsigned int)v7, 20)))
 v8 = __stack_chk_fail_local();
 return v8;
}


// Function: call_virtual_func at 0x402161
unsigned int call_virtual_func(unsigned int a0, unsigned int a1)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return a1 * 2;
}


// Function: process_with_callback at 0x402179
unsigned int process_with_callback(unsigned int a0, unsigned int a1, unsigned int *a2)
{
 unsigned int v0; // [bp-0x14]
 unsigned int i; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v0 = 0;
 for (i = 0; i < a1; i += 1)
 {
 v0 += a2(*((int *)(a0 + i * 4)));
 }
 return v0;
}


// Function: test_control_flow_l2 at 0x4021ce
extern unsigned int g_4032c8;

int test_control_flow_l2()
{
 unsigned long v18; // ldt
 unsigned long v19; // gdt
 unsigned int i; // eax
 unsigned short v20; // gs
 unsigned int flag1[1]; // [bp-0x6c]
 unsigned int flag2[1]; // [bp-0x68]
 unsigned int flag3; // [bp-0x64]
 unsigned int v3; // [bp-0x60]
 unsigned int v4; // [bp-0x5c]
 unsigned int v5; // [bp-0x58]
 unsigned int v6; // [bp-0x54]
 unsigned int result; // [bp-0x50]
 unsigned int v8; // [bp-0x4c]
 unsigned int v9; // [bp-0x48]
 unsigned int v10; // [bp-0x44]
 unsigned int v11; // [bp-0x40]
 unsigned int v12; // [bp-0x3c]
 unsigned int v13; // [bp-0x38]
 unsigned int v14; // [bp-0x34]
 unsigned long v15; // [bp-0x30]
 unsigned int v16; // [bp-0x10]

 v16 = *((int *)_ccall(v18, v19, (unsigned int)v20, 20));
 sub_401100(&g_4032c8);
 sub_4010c0("CF-L2-01 (loop_multi_exit): %d\n", loop_multi_exit(7));
 *flag1 = 0;
 sub_4010c0("CF-L2-02 (infinite_loop): %d\n", infinite_loop(&flag1));
 sub_4010c0("CF-L2-03 (multi_return): %d\n", multi_return(4294967291));
 sub_4010c0("CF-L2-03 (multi_return): %d\n", multi_return(100));
 sub_4010c0("CF-L2-03 (multi_return): %d\n", multi_return(3));
 sub_4010c0("CF-L2-04 (conditional_return): %d\n", conditional_return(5));
 sub_4010c0("CF-L2-04 (conditional_return): %d\n", conditional_return(4294967291));
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
 sub_4010c0("CF-L2-05 (duffs_device): %d\n", duffs_device(&v15, &result, 8));
 sub_4010c0("CF-L2-06 (loop_complex_cond): %d\n", loop_complex_cond(10));
 sub_4010c0("CF-L2-07 (loop_modify_var): %d\n", loop_modify_var(10));
 *flag2 = 0;
 sub_4010c0("CF-L2-08 (loop_external_state): %d\n", loop_external_state(&flag2));
 sub_4010c0("CF-L2-09 (recursion_factorial): %d\n", recursion_factorial(5));
 sub_4010c0("CF-L2-10 (tail_recursion): %d\n", tail_recursion(5, 1));
 sub_4010c0("CF-L2-11 (indirect_recursion): %d\n", indirect_recursion_a(10, 3));
 sub_4010c0("CF-L2-12 (call_func_ptr): %d\n", call_func_ptr(double_value, 5));
 sub_4010c0("CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(0, 5));
 sub_4010c0("CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(2, 5));
 flag3 = 1;
 v3 = 2;
 v4 = 3;
 v5 = 4;
 v6 = 5;
 sub_4010c0("CF-L2-15 (process_with_callback): %d\n", process_with_callback(&flag3, 5, double_value));
 if (v16 == *((int *)_ccall(v18, v19, (unsigned int)v20, 20)))
 return v16 - *((int *)_ccall(v18, v19, (unsigned int)v20, 20));
 return __stack_chk_fail_local();
}


// Function: non_local_jump at 0x402506
extern unsigned int _GLOBAL_OFFSET_TABLE_;
extern unsigned int jump_buffer;

unsigned int non_local_jump(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 v0 = &_GLOBAL_OFFSET_TABLE_;
 if (sub_4010e0(&jump_buffer))
 return 4294967295;
 if (a0 < 0)
 sub_4010d0(v0 + 120, 1);
 if (a0 <= 100)
 return a0 * 2;
 sub_4010d0(v0 + 120, 2);
 return a0 * 2;
}


// Function: cpp_exception at 0x402581
unsigned int cpp_exception(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return (a0 - 0 < 0 ? 4294967295 : (a0 <= 100 ? a0 * 2 : 4294967294));
}


// Function: op_add at 0x4025b3
int op_add(unsigned int a0, unsigned int a1)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return a1 + a0;
}


// Function: op_sub at 0x4025ce
int op_sub(unsigned int a0, unsigned int a1)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return a0 - a1;
}


// Function: op_mul at 0x4025e7
int op_mul(unsigned int a0, unsigned int a1)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return a1 * a0;
}


// Function: op_div at 0x402601
unsigned int op_div(unsigned int a0, unsigned int a1)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return (!a1 ? 0 : a0 / a1);
}


// Function: op_mod at 0x402628
unsigned int op_mod(unsigned int a0, unsigned int a1)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return (!a1 ? 0 : ((int)((a0 >> 31 CONCAT a0) % a1) CONCAT (int)((a0 >> 31 CONCAT a0) / a1)) >> 32);
}


// Function: op_and at 0x402651
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return a0 & a1;
}


// Function: op_or at 0x40266a
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return a0 | a1;
}


// Function: op_xor at 0x402683
int op_xor(unsigned int a0, unsigned int a1)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return a0 ^ a1;
}


// Function: op_shl at 0x40269c
int op_shl(unsigned int a0, char a1)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return a0 << (a1 & 31);
}


// Function: op_shr at 0x4026bb
int op_shr(unsigned int a0, char a1)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return a0 >> (a1 & 31);
}


// Function: large_jump_table at 0x4026da
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

 v11 = __x86_get_pc_thunk_ax() + 14559;
 v10 = *((int *)_ccall(v12, v13, (unsigned int)v14, 20));
 v0 = v11 - 14869;
 v1 = v11 - 14842;
 v2 = v11 - 14817;
 v3 = v11 - 14791;
 v4 = v11 - 14752;
 v5 = v11 - 14711;
 v6 = v11 - 14686;
 v7 = v11 - 14661;
 v8 = v11 - 14636;
 v9 = v11 - 14605;
 if (a0 < 0 || a0 > 9)
 v15 = 4294967295;
 else
 v15 = (&v0)[a0](a1, a2);
 if (v10 != *((int *)_ccall(v12, v13, (unsigned int)v14, 20)))
 v15 = __stack_chk_fail_local();
 return v15;
}


// Function: conditional_func_ptr at 0x40278f
int conditional_func_ptr(unsigned int a0, unsigned int a1)
{
 unsigned int *v1; // eax
 unsigned int *v0; // [bp-0x10]

 v1 = __x86_get_pc_thunk_ax() + 14378;
 v0 = (!a0 ? (unsigned int *)((char *)&v1[4035] + 2) : (a0 == 1 ? (unsigned int *)((char *)&v1[4029] + 2) : (unsigned int *)((char *)&v1[4114] + 3)));
 return v0(a1);
}


// Function: state_machine at 0x4027de
unsigned int state_machine(unsigned int a0, unsigned int a1)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 if (a1 == 3)
 return (!a0 ? 0 : 3);
 if (a1 > 3)
 return 3;
 if (a1 == 2)
 {
 return 2;
 }
 else if (a1 <= 2)
 {
 if (!a1)
 {
 return (a0 == 1 ? 1 : 0);
 }
 else if (a1 == 1)
 {
 return (a0 == 2 ? 2 : (a0 == 99 ? 3 : 1));
 }
 }
 return 3;
}


// Function: state_idle at 0x40286c
char state_idle(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return (a0 == 1) ? 1 : 0;
}


// Function: state_processing at 0x402889
unsigned int state_processing(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return (a0 == 2 ? 2 : (a0 == 99 ? 3 : 1));
}


// Function: state_done at 0x4028bb
unsigned int state_done()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return 2;
}


// Function: state_error at 0x4028d3
unsigned int state_error(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return (!a0 ? 0 : 3);
}


// Function: fsm_func_table at 0x4028f8
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

 v5 = __x86_get_pc_thunk_ax() + 14017;
 v4 = *((int *)_ccall(v6, v7, (unsigned int)v8, 20));
 v0 = v5 - 14172;
 v1 = v5 - 14143;
 v2 = v5 - 14093;
 v3 = v5 - 14069;
 if (a1 < 0 || a1 > 3)
 v9 = 3;
 else
 v9 = (&v0)[a1](a0);
 if (v4 != *((int *)_ccall(v6, v7, (unsigned int)v8, 20)))
 v9 = __stack_chk_fail_local();
 return v9;
}


// Function: computed_goto at 0x402974
unsigned int computed_goto(unsigned int a0, unsigned int a1)
{
 unsigned int v6; // eax
 unsigned long v7; // ldt
 unsigned long v8; // gdt
 unsigned short v9; // gs
 unsigned int v10; // eax
 unsigned int v0; // [bp-0x30]
 unsigned int v1; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 unsigned int v3; // [bp-0x18]
 unsigned int v4; // [bp-0x14]
 unsigned int v5; // [bp-0x10]

 v6 = __x86_get_pc_thunk_ax() + 13893;
 v0 = a0;
 v5 = *((int *)_ccall(v7, v8, (unsigned int)v9, 20));
 v1 = v6 - 13805;
 v2 = v6 - 13794;
 v3 = v6 - 13783;
 v4 = v6 - 13772;
 if (a1 >= 0 && a1 <= 3)
 goto (&v1)[a1];
 v10 = 4294967295;
 if (v5 != *((int *)_ccall(v7, v8, (unsigned int)v9, 20)))
 v10 = __stack_chk_fail_local();
 return v10;
}


// Function: obfuscated_cf at 0x402a18
unsigned int obfuscated_cf(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = a0;
 if (a0 * a0 < 4294967295)
 v0 = v0 * 2 + 1;
 v0 *= 2;
 return v0;
}


// Function: opaque_predicate at 0x402a50
unsigned int opaque_predicate(unsigned int a0)
{
 unsigned int result; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 result = 0;
 return (!result ? a0 * 2 : a0 * 3);
}


// Function: overlapped_code at 0x402a83
unsigned int overlapped_code(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 return (!(a0 & 1) ? a0 + (a0 >> 31) >> 1 : a0 * 3 + 1);
}


// Function: test_control_flow_l3 at 0x402aba
extern unsigned int g_4034c4;

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
 sub_401100(&g_4034c4);
 sub_4010c0("CF-L3-01 (non_local_jump): %d\n", non_local_jump(5));
 sub_4010c0("CF-L3-01 (non_local_jump): %d\n", non_local_jump(4294967291));
 sub_4010c0("CF-L3-02 (cpp_exception): %d\n", cpp_exception(5));
 sub_4010c0("CF-L3-02 (cpp_exception): %d\n", cpp_exception(4294967291));
 sub_4010c0("CF-L3-03 (large_jump_table): %d\n", large_jump_table(0, 10, 5));
 sub_4010c0("CF-L3-04 (conditional_func_ptr): %d\n", conditional_func_ptr(0, 5));
 sub_4010c0("CF-L3-05 (state_machine): %d\n", state_machine(1, 0));
 sub_4010c0("CF-L3-06 (fsm_func_table): %d\n", fsm_func_table(2, 1));
 result = 0;
 flag1 = 1;
 v2 = 2;
 v3 = 3;
 sub_4010c0("CF-L3-07 (computed_goto): %d\n", computed_goto(&result, 2));
 sub_4010c0("CF-L3-08 (obfuscated_cf): %d\n", obfuscated_cf(5));
 sub_4010c0("CF-L3-09 (opaque_predicate): %d\n", opaque_predicate(5));
 sub_4010c0("CF-L3-10 (overlapped_code): %d\n", overlapped_code(5));
 if (v4 == *((int *)_ccall(v6, v7, (unsigned int)v8, 20)))
 return v4 - *((int *)_ccall(v6, v7, (unsigned int)v8, 20));
 return __stack_chk_fail_local();
}


// Function: main at 0x402cae
unsigned int main()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax();
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}


// Function: __x86_get_pc_thunk_ax at 0x402cd8
int __x86_get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: sub_402cdc at 0x402cdc
int sub_402cdc()
{
 __stack_chk_fail_local();
 return;
}


// Function: __stack_chk_fail_local at 0x402ce0
int __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 sub_4010f0();
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

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


// Function: sub_402d42 at 0x402d42
void sub_402d42()
{
}



/* CRT stub function _fini removed by preprocessor */


