// Angr Decompilation of 1_gcc_O1_no_g
// Platform: AMD64


/* CRT stub function _init removed by preprocessor */
struct struct_0;
extern unsigned long long (*g_405fe8)();

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)g_405fe8;
 if (g_405fe8)
 v1 = (unsigned long long *)g_405fe8();
 return v1;
}


// Function: sub_401020 at 0x401020
extern unsigned long long g_405fa0;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_405fa0;
 return;
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
 sub_401070();
 return;
}


// Function: sub_401070 at 0x401070
void sub_401070()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 4;
 sub_401020();
 return;
}


// Function: sub_40107f at 0x40107f
void sub_40107f()
{
 __cxa_finalize();
 return;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401105 at 0x401105
void sub_401105()
{
 // Unsupported operation - placeholder
 return;
}


// Function: sub_401106 at 0x401106
void sub_401106()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_401139 at 0x401139
void sub_401139()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_401179 at 0x401179
void sub_401179()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_4011b5 at 0x4011b5
void sub_4011b5()
{
}


// Function: sub_4011b9 at 0x4011b9
void sub_4011b9()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: recursion_factorial at 0x4011c9
unsigned long long recursion_factorial(unsigned long a0)
{
 unsigned long long v2; // rbx
 unsigned long long v0; // [bp-0x8]

 if ((unsigned int)a0 <= 1)
 return 1;
 v0 = v2;
 return (a0 & 4294967295) * recursion_factorial(a0 - 1 & 4294967295);
}


// Function: double_value at 0x4011e8
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: triple_value at 0x4011f0
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: op_add at 0x4011f8
int op_add(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: op_sub at 0x401200
int op_sub(unsigned long a0, unsigned int a1)
{
 return (a0 & 4294967295) - a1;
}


// Function: op_mul at 0x401209
int op_mul(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: op_div at 0x401213
int op_div(unsigned int a0, unsigned long long a1)
{
 if ((unsigned int)a1)
 a1 = ((int)((a0 >> 31, a0) / (a1 & 4294967295))) & 4294967295;
 return a1;
}


// Function: op_mod at 0x401225
int op_mod(unsigned int a0, unsigned long long a1)
{
 if ((unsigned int)a1)
 a1 = ((int)((a0 >> 31, a0) % (a1 & 4294967295)), (int)((a0 >> 31, a0) / (a1 & 4294967295))) >> 32;
 return a1;
}


// Function: op_and at 0x401237
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a0 & a1;
}


// Function: op_or at 0x401240
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a0 | a1;
}


// Function: op_xor at 0x401249
int op_xor(unsigned int a0, unsigned int a1)
{
 return a0 ^ a1;
}


// Function: op_shl at 0x401252
int op_shl(unsigned long a0, char a1)
{
 return (a0 & 4294967295) << (a1 & 31);
}


// Function: op_shr at 0x40125d
int op_shr(unsigned long a0, char a1)
{
 return (a0 & 4294967295) >> (a1 & 31);
}


// Function: state_idle at 0x401268
char state_idle(unsigned int a0)
{
 return a0 == 1;
}


// Function: state_processing at 0x401276
unsigned int state_processing(unsigned int a0)
{
 if (a0 == 2)
 return a0;
 return (a0 == 99) * 2 + 1;
}


// Function: state_done at 0x401290
unsigned long long state_done(void)
{
 return 2;
}


// Function: state_error at 0x40129a
unsigned long long state_error(unsigned int a0)
{
 if (!a0)
 return a0;
 return 3;
}


// Function: sequential_ops at 0x4012ab
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (a0 + a1) * 2 - a2;
}


// Function: single_if at 0x4012b7
long long single_if(unsigned int a0)
{
 return (a0 <= 0 ? a0 : a0 * 2);
}


// Function: if_else at 0x4012c4
char if_else(unsigned int a0)
{
 return a0 > 0;
}


// Function: nested_if_2 at 0x4012d1
unsigned long long nested_if_2(unsigned int a0, unsigned int a1)
{
 unsigned long long v1; // rax

 v1 = 0;
 if (a0 > 0)
 v1 = (a1 <= 0 ? a0 : a0 + a1 & 4294967295);
 return v1;
}


// Function: nested_if_deep at 0x4012e7
unsigned long long nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
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
 return (unsigned long long)((a4 > 0) + 4);
 }
 else
 {
 return 3;
 }
}


// Function: if_elseif_chain at 0x40131e
unsigned long long if_elseif_chain(unsigned int a0)
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


// Function: if_elseif_long at 0x401347

unsigned long long if_elseif_long(unsigned int a0)
{
 switch (a0)
 {
 case 0:
 return 100;
 case 1:
 return 200;
 case 2:
 return 300;
 case 3:
 return 400;
 case 4:
 return 500;
 default:
 return 4294967295;
 }
}


// Function: switch_small at 0x401387
unsigned long long switch_small(unsigned int a0)
{
 if (a0 == 2)
 {
 return 50;
 }
 else if (a0 > 2)
 {
 return (a0 == 3) * 3 - 1 & 4294967295;
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


// Function: switch_large at 0x4013c0

unsigned long long switch_large(unsigned int a0)
{
 switch (a0)
 {
 case 0:
 return a0;
 case 1:
 return 10;
 case 2:
 return 20;
 case 3:
 return 30;
 case 4:
 return 40;
 case 5:
 return 50;
 case 6:
 return 60;
 case 7:
 return 70;
 case 8:
 return 80;
 case 9:
 return 90;
 default:
 return 4294967295;
 }
}


// Function: switch_default at 0x40141b
unsigned long long switch_default(unsigned int a0)
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


// Function: switch_fallthrough at 0x401444
unsigned long long switch_fallthrough(unsigned long a0)
{
 unsigned long long v1; // rax
 unsigned long long v2; // rax

 if ((unsigned int)a0 != 2)
 {
 if ((unsigned int)a0 != 3)
 {
 if ((unsigned int)a0 != 1)
 return 4294967295;
 v1 = 0;
 }
 else
 {
 v2 = 12;
LABEL_401469:
 v1 = v2 + a0 * 2;
 }
 return v1 + a0;
 }
 v2 = 0;
 goto LABEL_401469;
}


// Function: loop_for_fixed at 0x401476
unsigned int loop_for_fixed(unsigned int i)
{
 unsigned long long v1; // rax
 unsigned long long v2; // rdx
 unsigned long long v4; // rax
 unsigned long long v5; // rdx

 if (i <= 0)
 return 0;
 v1 = 0;
 v2 = 0;
 do
 {
 v4 = v1;
 v5 = v2 + v4;
 v1 = (unsigned int)v4 + 1;
 v2 = v5;
 } while (i != (unsigned int)v1);
 return (unsigned int)v5 + (unsigned int)v4;
}


// Function: loop_while at 0x40149b
unsigned long long loop_while(unsigned int i)
{
 if (i)
 {
 i = 0;
 do
 {
 i = (i * 1717986919 >> 34) - (i >> 31);
 i += 1;
 } while (i);
 }
 if (i > 0)
 return i;
 return 1;
}


// Function: loop_dowhile at 0x4014d3
unsigned int loop_dowhile(unsigned int i)
{
 unsigned int v1; // edx
 unsigned int v2; // edx
 unsigned int v3; // edx

 v1 = 0;
 v3 = 0;
 do
 {
 i = (i * 1717986919 >> 34) - (i >> 31);
 v2 = v1 + 1;
 v1 = v2;
 v3 = v2;
 } while (i);
 return v3 + 1;
}


// Function: loop_nested at 0x4014fb
unsigned int loop_nested(unsigned int a0, unsigned int i)
{
 unsigned int v1; // edx
 unsigned long long v2; // rcx
 unsigned long long v3; // rax

 v1 = 0;
 v2 = 0;
 if (a0 <= 0)
 return 0;
 do
 {
 v3 = 0;
 if (i > 0)
 {
 do
 {
 v3 = (unsigned int)v3 + 1;
 } while (i != (unsigned int)v3);
 v2 += v3;
 }
 } while ((v1 += 1, a0 != v1));
 return v2;
}


// Function: loop_break at 0x40152b
unsigned long long loop_break(unsigned int i)
{
 unsigned long long v6; // rax
 unsigned int v0; // [bp-0x28]
 unsigned int v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 unsigned int v3; // [bp-0x1c]
 unsigned int v4; // [bp-0x18]

 v6 = 0;
 v0 = 10;
 v1 = 20;
 v2 = 30;
 v3 = 40;
 v4 = 50;
 while ((&v0)[v6] != i)
 {
 v6 += 1;
 if (v6 == 5)
 return 4294967295;
 }
 return v6 & 4294967295;
}


// Function: loop_continue at 0x40159f
unsigned int loop_continue(unsigned int a0)
{
 unsigned int v1; // eax
 unsigned int v2; // edx
 unsigned int v3; // edx
 unsigned int v4; // eax
 unsigned int v5; // edx
 unsigned int v6; // eax

 if (a0 <= 0)
 return 0;
 v1 = 1;
 v2 = 0;
 v3 = 0;
 do
 {
 v3 = v2;
 v4 = v1;
 } while ((v5 = (((char)v4 & 1) ? v3 + v4 : v3), v6 = v4 + 1, v1 = v4 + 1, v2 = (((char)v4 & 1) ? v3 + v4 : v3), v1 != a0 + 1));
 return (((char)v4 & 1) ? v3 + v4 : v3);
}


// Function: goto_forward at 0x4015cd
unsigned int goto_forward(unsigned long long a0)
{
 if ((unsigned int)a0 > 0)
 a0 *= a0;
 return (unsigned int)a0 * 2;
}


// Function: goto_backward at 0x4015de
unsigned int goto_backward(unsigned int a0)
{
 unsigned long long v1; // rdx
 unsigned long long v2; // rax
 unsigned long long v3; // rax
 unsigned long long v4; // rdx
 unsigned long long v5; // rdx

 v1 = 1;
 if (a0 <= 0)
 return 1;
 v2 = 1;
 do
 {
 v3 = v2;
 v5 = v3 * v1;
 v1 = v5;
 v2 = (unsigned int)v3 + 1;
 } while ((unsigned int)v2 != a0 + 1);
 return (unsigned int)v3 * (unsigned int)v4;
}


// Function: ternary_op at 0x401600
long long ternary_op(unsigned int a0, unsigned int a1)
{
 return (a0 <= a1 ? a1 : a0);
}


// Function: test_control_flow_l1 at 0x40160c
extern char g_403060;

int test_control_flow_l1()
{
 puts(&g_403060);
 __printf_chk(1, "CF-L1-01 (sequential_ops): %d\n", 21);
 __printf_chk(1, "CF-L1-02 (single_if): %d\n", 20);
 __printf_chk(1, "CF-L1-02 (single_if): %d\n", 4294967291);
 __printf_chk(1, "CF-L1-03 (if_else): %d\n", 1);
 __printf_chk(1, "CF-L1-03 (if_else): %d\n", 0);
 __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 15);
 __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 10);
 __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 0);
 __printf_chk(1, "CF-L1-05 (nested_if_deep): %d\n", 5);
 __printf_chk(1, "CF-L1-06 (if_elseif_chain): %d\n", 20);
 __printf_chk(1, "CF-L1-07 (if_elseif_long): %d\n", 400);
 __printf_chk(1, "CF-L1-08 (switch_small): %d\n", 50);
 __printf_chk(1, "CF-L1-09 (switch_large): %d\n", 70);
 __printf_chk(1, "CF-L1-10 (switch_default): %d\n", 0);
 __printf_chk(1, "CF-L1-11 (switch_fallthrough): %d\n", 21);
 __printf_chk(1, "CF-L1-12 (loop_for_fixed): %d\n", loop_for_fixed(10) & 4294967295);
 __printf_chk(1, "CF-L1-13 (loop_while): %d\n", loop_while(12345) & 4294967295);
 __printf_chk(1, "CF-L1-14 (loop_dowhile): %d\n", loop_dowhile(9876) & 4294967295);
 __printf_chk(1, "CF-L1-15 (loop_nested): %d\n", loop_nested(3, 4) & 4294967295);
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", loop_break(30) & 4294967295);
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", loop_break(99) & 4294967295);
 __printf_chk(1, "CF-L1-17 (loop_continue): %d\n", loop_continue(10) & 4294967295);
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 50);
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 4294967290);
 __printf_chk(1, "CF-L1-19 (goto_backward): %d\n", goto_backward(5) & 4294967295);
 __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
 return __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


// Function: loop_multi_exit at 0x40192b
unsigned long long loop_multi_exit(unsigned int a0)
{
 char *v13; // rdx
 unsigned long long v14; // rsi
 unsigned long long v15; // rax
 unsigned int result; // [bp-0x48]
 unsigned int v1; // [bp-0x44]
 unsigned int v2; // [bp-0x40]
 unsigned int v3; // [bp-0x3c]
 unsigned int v4; // [bp-0x38]
 unsigned int v5; // [bp-0x34]
 unsigned int v6; // [bp-0x30]
 unsigned int v7; // [bp-0x2c]
 unsigned int v8; // [bp-0x28]
 unsigned int v9; // [bp-0x24]
 unsigned int v10; // [bp-0x20]
 unsigned int v11; // [bp-0x1c]

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
 v13 = (char *)&result;
 v14 = 0;
 do
 {
 v15 = 0;
 do
 {
 if (*((int *)&v13[4 * v15]) == a0)
 return (v15 & 4294967295) + v14 * 10;
 } while ((v15 += 1, v15 != 4));
 v14 = (unsigned int)v14 + 1;
 v13 += 16;
 } while ((unsigned int)v14 != 3);
 return 4294967295;
}


// Function: infinite_loop at 0x4019f3
unsigned long long infinite_loop(unsigned int *ptr)
{
 unsigned long long v1; // rax

 v1 = 0;
 while (*(ptr) != 1)
 {
 v1 = (unsigned int)v1 + 1;
 if ((unsigned int)v1 == 1001)
 {
 *(ptr) = 1;
 return v1;
 }
 }
 return v1;
}


// Function: multi_return at 0x401a14
unsigned long long multi_return(unsigned int a0)
{
 if (a0 < 0)
 {
 return 4294967295;
 }
 else if (a0 <= 50)
 {
 return (((char)a0 & 1) ? a0 + 1 : a0 * 2);
 }
 else
 {
 return 4294967294;
 }
}


// Function: conditional_return at 0x401a3b
unsigned long long conditional_return(unsigned int a0)
{
 if (a0 > 0)
 {
 return a0 * 2;
 }
 else if (a0 >= 0)
 {
 return 0;
 }
 else
 {
 return -(a0);
 }
}


// Function: duffs_device at 0x401a56

unsigned long long duffs_device(unsigned int *a0, unsigned int *iter, unsigned long a2)
{
 unsigned int *cur; // rcx
 unsigned long v2; // cc_ndep
 unsigned int v3; // edi
 unsigned int *v4; // r8
 unsigned int *p; // rdx
 unsigned int *v6; // r8
 unsigned int *addr; // rdx
 unsigned int *v8; // r8
 unsigned int *ptr; // rdx

 cur = a0;
 if ((unsigned int)a2 <= 0)
 return 4294967295;
 v3 = ((char)_ccall(9, 3, a2 & 4294967295, 7, v2) ? (unsigned int)a2 + 7 : (unsigned int)a2 + 14) >> 3;
 switch (((unsigned int)a2 + ((unsigned int)a2 >> 31 >> 29) & 7) - ((unsigned int)a2 >> 31 >> 29))
 {
 case 0:
 break;
 case 1:
 v8 = iter;
 ptr = cur;
 goto LABEL_401af0;
 case 2:
 goto LABEL_401ae4;
 case 3:
 v6 = iter;
 addr = cur;
 goto LABEL_401ad6;
 case 4:
 goto LABEL_401aca;
 case 5:
 v4 = iter;
 p = cur;
 goto LABEL_401abc;
 case 6:
 goto LABEL_401ab0;
 case 7:
 while (1)
 {
 *(cur) = *(iter);
 iter += 1;
 cur += 1;
LABEL_401ab0:
 v4 = iter + 1;
 p = cur + 1;
 *(cur) = *(iter);
LABEL_401abc:
 iter = v4 + 1;
 cur = p + 1;
 *(p) = *(v4);
LABEL_401aca:
 v6 = iter + 1;
 addr = cur + 1;
 *(cur) = *(iter);
LABEL_401ad6:
 iter = v6 + 1;
 cur = addr + 1;
 *(addr) = *(v6);
LABEL_401ae4:
 v8 = iter + 1;
 ptr = cur + 1;
 *(cur) = *(iter);
LABEL_401af0:
 *(ptr) = *(v8);
 v3 -= 1;
 if (v3 <= 0)
 break;
 iter = v8 + 1;
 cur = ptr + 1;
 *(cur) = *(iter);
 iter += 1;
 cur += 1;
 }
 return a2 & 4294967295;
 default:
 return a2 & 4294967295;
 }
}


// Function: loop_complex_cond at 0x401b30
int loop_complex_cond(unsigned int a0)
{
 unsigned int v1; // edx
 unsigned int v2; // eax

 if (a0 > 0)
 {
 v1 = 0;
 v2 = 0;
 do
 {
 v2 += 2;
 a0 -= 1;
 v1 += 1;
 } while ((v1 <= 9) && (v2 < a0) && a0 > 0);
 }
 else
 {
 v1 = 0;
 v2 = 0;
 }
 return v2 + a0 + v1;
}


// Function: loop_modify_var at 0x401b71
unsigned int loop_modify_var(unsigned int a0)
{
 unsigned long long v1; // rcx
 unsigned int v2; // eax
 unsigned long v3; // rdx

 v1 = 0;
 v2 = 0;
 if (a0 <= 0)
 return 0;
 while (1)
 {
 v3 = v2 + 1;
 if (a0 <= (unsigned int)v3)
 break;
 v1 += v3;
 v2 = ((unsigned int)v3 <= 5 ? (unsigned int)v3 : v2 + 3);
 }
 return v1;
}


// Function: loop_external_state at 0x401b9a
unsigned long long loop_external_state(unsigned int *a0)
{
 unsigned long long v1; // rax

 v1 = 0;
 do
 {
 } while (!*(a0) && (v1 = (unsigned long long)((unsigned int)v1 + 1), (unsigned int)v1 != 101));
 return v1;
}


// Function: tail_recursion at 0x401bb2
unsigned long long tail_recursion(unsigned long long a0, unsigned long a1)
{
 if ((unsigned int)a0 <= 1)
 return a1 & 4294967295;
 return tail_recursion((unsigned int)a0 - 1, a0 * a1);
}


// Function: indirect_recursion_a at 0x401bd2
unsigned long long indirect_recursion_a(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // eax

 if (a1 <= 0)
 {
 return a0;
 }
 else if (((char)a0 & 1))
 {
 v1 = a0 * 3;
 return (a1 <= 1 ? v1 + 1 : indirect_recursion_a(v1 + 2, a1 - 2));
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


// Function: call_func_ptr at 0x401c1f
long long call_func_ptr(unsigned long long (*a0)(unsigned int), unsigned int a1)
{
 return a0(a1);
}


// Function: call_func_ptr_array at 0x401c33
unsigned long long call_func_ptr_array(unsigned int a0)
{
 unsigned int v4; // esi
 unsigned long long (*func_ptr[3])(unsigned int); // [bp-0x28]

 func_ptr[0] = double_value;
 func_ptr[1] = triple_value;
 func_ptr[2] = recursion_factorial;
 v4 = a0;
 if ((unsigned int)a0 <= 2)
   return (func_ptr[a0 & 4294967295])(v4);
 return 4294967295;
}


// Function: call_virtual_func at 0x401c9d
unsigned int call_virtual_func(unsigned long a0, unsigned int a1)
{
 return a1 * 2;
}


// Function: process_with_callback at 0x401ca5
unsigned int process_with_callback(unsigned int *a0, unsigned int a1, unsigned long long (*a2)(unsigned int))
{
 unsigned long long v1; // rbp
 unsigned int *i; // rbx
 unsigned int *v3; // rbx

 if (a1 <= 0)
 return 0;
 v1 = 0;
 i = a0;
 do
 {
 v3 = i;
 v1 += a2(*(v3));
 i = v3 + 1;
 } while (i != &a0[1 + a1 + 1]);
 return v1;
}


// Function: test_control_flow_l2 at 0x401cee
extern char g_403170;

long long test_control_flow_l2()
{
 unsigned long v31; // fs
 unsigned int result; // [bp-0x90]
 unsigned int flag1; // [bp-0x8c]
 unsigned int flag3; // [bp-0x88]
 unsigned int v3; // [bp-0x84]
 unsigned int v4; // [bp-0x80]
 unsigned int v5; // [bp-0x7c]
 unsigned int v6; // [bp-0x78]
 unsigned int flag2; // [bp-0x68]
 unsigned int v8; // [bp-0x64]
 unsigned int v9; // [bp-0x60]
 unsigned int v10; // [bp-0x5c]
 unsigned int v11; // [bp-0x58]
 unsigned int v12; // [bp-0x54]
 unsigned int v13; // [bp-0x50]
 unsigned int v14; // [bp-0x4c]
 char v15; // [bp-0x48]
 unsigned long v16; // [bp-0x20]

 puts(&g_403170);
 __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", loop_multi_exit(7) & 4294967295);
 result = 0;
 __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", infinite_loop(&result) & 4294967295);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4294967295);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4294967294);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
 *((unsigned int *)&flag2) = 1;
 v8 = 2;
 v9 = 3;
 v10 = 4;
 v11 = 5;
 v12 = 6;
 v13 = 7;
 v14 = 8;
 memset(&v15, 0, 32);
 __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", duffs_device(&v15, &flag2, 8) & 4294967295);
 __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", loop_complex_cond(10) & 4294967295);
 __printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", loop_modify_var(10) & 4294967295);
 flag1 = 0;
 __printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", loop_external_state(&flag1) & 4294967295);
 __printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", recursion_factorial(5) & 4294967295);
 __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", tail_recursion(5, 1) & 4294967295);
 __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", indirect_recursion_a(10, 3) & 4294967295);
 __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", call_func_ptr(double_value, 5) & 4294967295);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(0) & 4294967295);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(2) & 4294967295);
 *((unsigned int *)flag3) = 1;
 v3 = 2;
 v4 = 3;
 v5 = 4;
 v6 = 5;
 __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", process_with_callback(&flag3, 5, double_value) & 4294967295);
 return v16 - *((long long *)(40 + v31));
}


// Function: non_local_jump at 0x40203c
extern unsigned long long jump_buffer;

unsigned long long non_local_jump(unsigned int a0)
{
 if (_setjmp(&jump_buffer))
 {
 return 4294967295;
 }
 else if (a0 < 0)
 {
 __longjmp_chk(&jump_buffer, 1);
 }
 else if (a0 <= 100)
 {
 return a0 * 2;
 }
 else
 {
 __longjmp_chk(&jump_buffer, 2);
 }
}


// Function: cpp_exception at 0x40209e
unsigned long long cpp_exception(unsigned int a0)
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


// Function: large_jump_table at 0x4020bb
unsigned long long large_jump_table(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned long long v11; // [bp-0x64]
 int (*funcs[10])(unsigned int, unsigned int); // [bp-0x68]

 funcs[0] = op_add;
 funcs[1] = op_sub;
 funcs[2] = op_mul;
 funcs[3] = op_div;
 funcs[4] = op_mod;
 funcs[5] = op_and;
 funcs[6] = op_or;
 funcs[7] = op_xor;
 funcs[8] = op_shl;
 funcs[9] = op_shr;
 v11 = a0;
 if ((unsigned int)v11 <= 9)
   return funcs[v11 & 4294967295](a1, a2);
 return 4294967295;
}


// Function: conditional_func_ptr at 0x40217b
long long conditional_func_ptr(unsigned int a0, unsigned int a1)
{
 unsigned long long (*v1)(unsigned int); // rdx

 v1 = double_value;
 if (a0)
 {
 if (a0 != 1)
 v1 = recursion_factorial;
 else
 v1 = triple_value;
 }
 return v1(a1);
}


// Function: state_machine at 0x4021ae
unsigned long long state_machine(unsigned int a0, unsigned int a1)
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
 else if (a1 != 1)
 {
 return 3;
 }
 else if (a0 != 2)
 {
 return (a0 != 99 ? a1 : 3);
 }
 else
 {
 return a0;
 }
 }
 else
 {
 if (a1 == 3)
 return (a0 ? a1 : a0);
 return 3;
 }
}


// Function: fsm_func_table at 0x4021fc
unsigned long long fsm_func_table(unsigned long a0, unsigned long a1)
{
 unsigned long long v5; // rax
 unsigned long long (*v0)(void); // [bp-0x38]
 unsigned long long (*v1)(void); // [bp-0x30]
 unsigned long long (*v2)(void); // [bp-0x28]
 unsigned long long (*v3)(void); // [bp-0x20]

 v0 = state_idle;
 v1 = state_processing;
 v2 = state_done;
 v3 = state_error;
 v5 = 3;
 if ((unsigned int)a1 <= 3)
 v5 = (&v0)[a1 & 4294967295]();
 return v5;
}


// Function: computed_goto at 0x40226d
extern char g_4022bf;
extern unsigned long long g_4022dd;
extern unsigned long long g_4022e8;
extern unsigned long long g_4022f3;

unsigned long long computed_goto(unsigned long a0, unsigned int a1)
{
 unsigned long v0; // [bp-0x38]
 unsigned long long v1; // [bp-0x30]
 unsigned long long v2; // [bp-0x28]
 unsigned long long v3; // [bp-0x20]

 v0 = &g_4022bf;
 v1 = &g_4022dd;
 v2 = &g_4022e8;
 v3 = &g_4022f3;
 if (a1 > 3)
 return 4294967295;
 goto (&v0)[a1];
}


// Function: obfuscated_cf at 0x40230a
unsigned int obfuscated_cf(unsigned int a0)
{
 return a0 * 2;
}


// Function: opaque_predicate at 0x402312
unsigned int opaque_predicate(unsigned int a0)
{
 return a0 * 2;
}


// Function: overlapped_code at 0x40231a
int overlapped_code(unsigned int a0)
{
 if (!((char)a0 & 1))
 return ((a0 >> 31) + a0 & 4294967295) >> 1;
 return a0 * 3 + 1;
}


// Function: test_control_flow_l3 at 0x402333
extern char g_403310;

long long test_control_flow_l3()
{
 unsigned long v12; // fs
 unsigned int result; // [bp-0x28]
 unsigned int flag1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 unsigned int v3; // [bp-0x1c]
 unsigned long v4; // [bp-0x10]

 puts(&g_403310);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump(5) & 4294967295);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump(4294967291) & 4294967295);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 4294967295);
 __printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", large_jump_table(0, 10, 5) & 4294967295);
 __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", conditional_func_ptr(0, 5) & 4294967295);
 __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
 __printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", fsm_func_table(2, 1) & 4294967295);
 result = 0;
 flag1 = 1;
 v2 = 2;
 v3 = 3;
 __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", computed_goto(&result, 2) & 4294967295);
 __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
 return v4 - *((long long *)(40 + v12));
}


// Function: main at 0x402515
unsigned int main()
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


