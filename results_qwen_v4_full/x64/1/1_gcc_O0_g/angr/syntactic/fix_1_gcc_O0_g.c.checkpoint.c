// Angr Decompilation of 1_gcc_O0_g
// Platform: AMD64


/* CRT stub function _init removed by preprocessor */
typedef unsigned long long (*struct_0)();

unsigned long long g_405fe8 = 0;
char g_4028b7 = 0;
unsigned long long g_4028c2 = 0;
unsigned long long g_4028cd = 0;
unsigned long long g_4028d8 = 0;


// Function: sub_401020 at 0x401020
unsigned long long g_405fa0 = 0;
void (*g_405fa8)() = 0;




































/* CRT stub function _start removed by preprocessor */










/* CRT stub function deregister_tm_clones removed by preprocessor */







/* CRT stub function register_tm_clones removed by preprocessor */







/* CRT stub function __do_global_dtors_aux removed by preprocessor */










/* CRT stub function frame_dummy removed by preprocessor */



// Function: sequential_ops at 0x4011c9
unsigned int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v0 = a1 + a0;
 v1 = v0 * 2;
 v2 = v1 - a2;
 return v2;
}


// Function: single_if at 0x4011fb
unsigned int single_if(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = a0;
 if (v0 > 0)
 v0 *= 2;
 return v0;
}


// Function: if_else at 0x401214
unsigned long long if_else(unsigned int a0)
{
 return (a0 <= 0 ? 0 : 1);
}


// Function: nested_if_2 at 0x401233
unsigned long long nested_if_2(unsigned int a0, unsigned int a1)
{
 return (a0 <= 0 ? 0 : (a1 <= 0 ? a0 : a1 + a0));
}


// Function: nested_if_deep at 0x401263
unsigned long long nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return (a0 <= 0 ? 0 : (a1 <= 0 ? 1 : (a2 <= 0 ? 2 : (a3 <= 0 ? 3 : (a4 <= 0 ? 4 : 5)))));
}


// Function: if_elseif_chain at 0x4012c3
unsigned long long if_elseif_chain(unsigned int a0)
{
 return (!a0 ? 10 : (a0 == 1 ? 20 : (a0 == 2 ? 30 : 4294967295)));
}


// Function: if_elseif_long at 0x4012fc
unsigned long long if_elseif_long(unsigned int a0)
{
 return (!a0 ? 100 : (a0 == 1 ? 200 : (a0 == 2 ? 300 : (a0 == 3 ? 400 : (a0 == 4 ? 500 : 4294967295)))));
}


// Function: switch_small at 0x40134f
unsigned long long switch_small(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = 10;
 v1 = 5;
 if (a0 == 3)
 return ((int)(v0 % v1)) & 4294967295;
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


// Function: switch_large at 0x4013b9

unsigned long long switch_large(unsigned int a0)
{
 switch (a0)
 {
 case 0:
 return 0;
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


// Function: switch_default at 0x40143b
unsigned long long switch_default(unsigned int a0)
{
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


// Function: switch_fallthrough at 0x40147c
unsigned int switch_fallthrough(unsigned int a0)
{
 unsigned int cur; // [bp-0xc]

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


// Function: loop_for_fixed at 0x4014cd
unsigned int loop_for_fixed(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int i; // [bp-0xc]

 v0 = 0;
 for (i = 0; i < a0; i += 1)
 {
 v0 += i;
 }
 return v0;
}


// Function: loop_while at 0x4014ff
unsigned long long loop_while(unsigned int a0)
{
 unsigned int result; // [bp-0x1c]
 unsigned int v1; // [bp-0xc]

 result = a0;
 for (v1 = 0; result; v1 += 1)
 {
 result = (result * 1717986919 >> 34 & 4294967295) - (result >> 31);
 }
 return (v1 <= 0 ? 1 : v1);
}


// Function: loop_dowhile at 0x40154c
unsigned int loop_dowhile(unsigned int a0)
{
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0xc]

 v0 = a0;
 v1 = 0;
 do
 {
 v0 /= 10;
 v1 += 1;
 } while (v0);
 return v1;
}


// Function: loop_nested at 0x40158d
unsigned int loop_nested(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x14]
 unsigned int i; // [bp-0x10]
 unsigned int j; // [bp-0xc]

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


// Function: loop_break at 0x4015d5
unsigned long long loop_break(unsigned int a0)
{
 unsigned int i; // [bp-0x30]
 unsigned int v1; // [bp-0x2c]
 unsigned int v2; // [bp-0x28]
 unsigned int v3; // [bp-0x24]
 unsigned int v4; // [bp-0x20]
 unsigned int v5; // [bp-0x1c]
 unsigned int v6; // [bp-0x18]

 v2 = 10;
 v3 = 20;
 v4 = 30;
 v5 = 40;
 v6 = 50;
 v1 = 5;
 for (i = 0; i < v1; i += 1)
 {
 if (a0 == (&v2)[i])
 return i;
 }
 return 4294967295;
}


// Function: loop_continue at 0x401660
unsigned int loop_continue(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int i; // [bp-0xc]

 v0 = 0;
 for (i = 1; i <= a0; i += 1)
 {
 if (((char)i & 1))
 v0 += i;
 }
 return v0;
}


// Function: goto_forward at 0x40169f
unsigned int goto_forward(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = (a0 <= 0 ? a0 : a0 * a0);
 v0 *= 2;
 return v0;
}


// Function: goto_backward at 0x4016c9
unsigned long long goto_backward(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 if (a0 <= 0)
 return 1;
 v0 = 1;
 for (v1 = 1; v1 <= a0; v1 += 1)
 {
 v0 *= v1;
 }
 return v0;
}


// Function: ternary_op at 0x40170d
long long ternary_op(unsigned int a0, unsigned int a1)
{
 return (a0 <= a1 ? a1 : a0);
}


// Function: test_control_flow_l1 at 0x401728
char g_403030[] = "Control Flow L1 Tests";

int test_control_flow_l1()
{
 puts(&g_403030);
 printf("CF-L1-01 (sequential_ops): %d\n", sequential_ops(5, 7, 3) & 4294967295);
 printf("CF-L1-02 (single_if): %d\n", single_if(10) & 4294967295);
 printf("CF-L1-02 (single_if): %d\n", single_if(4294967291) & 4294967295);
 printf("CF-L1-03 (if_else): %d\n", if_else(5) & 4294967295);
 printf("CF-L1-03 (if_else): %d\n", if_else(4294967293) & 4294967295);
 printf("CF-L1-04 (nested_if_2): %d\n", nested_if_2(10, 5) & 4294967295);
 printf("CF-L1-04 (nested_if_2): %d\n", nested_if_2(10, 4294967291) & 4294967295);
 printf("CF-L1-04 (nested_if_2): %d\n", nested_if_2(4294967286, 5) & 4294967295);
 printf("CF-L1-05 (nested_if_deep): %d\n", nested_if_deep(1, 1, 1, 1, 1) & 4294967295);
 printf("CF-L1-06 (if_elseif_chain): %d\n", if_elseif_chain(1) & 4294967295);
 printf("CF-L1-07 (if_elseif_long): %d\n", if_elseif_long(3) & 4294967295);
 printf("CF-L1-08 (switch_small): %d\n", switch_small(2) & 4294967295);
 printf("CF-L1-09 (switch_large): %d\n", switch_large(7) & 4294967295);
 printf("CF-L1-10 (switch_default): %d\n", switch_default(5) & 4294967295);
 printf("CF-L1-11 (switch_fallthrough): %d\n", switch_fallthrough(3) & 4294967295);
 printf("CF-L1-12 (loop_for_fixed): %d\n", loop_for_fixed(10) & 4294967295);
 printf("CF-L1-13 (loop_while): %d\n", loop_while(12345) & 4294967295);
 printf("CF-L1-14 (loop_dowhile): %d\n", loop_dowhile(9876) & 4294967295);
 printf("CF-L1-15 (loop_nested): %d\n", loop_nested(3, 4) & 4294967295);
 printf("CF-L1-16 (loop_break): %d\n", loop_break(30) & 4294967295);
 printf("CF-L1-16 (loop_break): %d\n", loop_break(99) & 4294967295);
 printf("CF-L1-17 (loop_continue): %d\n", loop_continue(10) & 4294967295);
 printf("CF-L1-18 (goto_forward): %d\n", goto_forward(5) & 4294967295);
 printf("CF-L1-18 (goto_forward): %d\n", goto_forward(4294967293) & 4294967295);
 printf("CF-L1-19 (goto_backward): %d\n", goto_backward(5) & 4294967295);
 printf("CF-L1-20 (ternary_op): %d\n", ternary_op(10, 5) & 4294967295);
 return printf("CF-L1-20 (ternary_op): %d\n", ternary_op(3, 8) & 4294967295);
}


// Function: loop_multi_exit at 0x401adf
unsigned long long loop_multi_exit(unsigned int a0)
{
 unsigned int i; // [bp-0x50]
 unsigned int j; // [bp-0x4c]
 unsigned int result; // [bp-0x48]
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
 for (i = 0; i <= 2; i += 1)
 {
 for (j = 0; j <= 3; j += 1)
 {
 if (a0 == (&result)[4 * i + j])
 return j + i * 10;
 }
 }
 return 4294967295;
}


// Function: infinite_loop at 0x401bc2
unsigned int infinite_loop(unsigned int *ptr)
{
 unsigned int v0; // [bp-0xc]

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


// Function: multi_return at 0x401bff
unsigned long long multi_return(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 if (a0 >= 0)
 {
 v0 = a0 * 2;
 return (v0 <= 100 ? (!(a0 & 1) ? v0 : a0 + 1) : 4294967294);
 }
 return 4294967295;
}


// Function: conditional_return at 0x401c43
long long conditional_return(unsigned int a0)
{
 return (a0 <= 0 ? (a0 < 0 ? -(a0) : 0) : a0 * 2);
}


// Function: duffs_device at 0x401c6f

unsigned long long duffs_device(unsigned int *a0, unsigned int *a1, unsigned int a2)
{
 unsigned int v4; // eax
 unsigned int *iter; // [bp-0x28]
 unsigned int *cur; // [bp-0x20]
 unsigned int v2; // [bp-0xc]

 cur = a0;
 iter = a1;
 if (a2 <= 0)
 return 4294967295;
 v4 = a2 + 7;
 v2 = (v4 < 0 ? v4 + 7 : v4) >> 3;
 switch ((a2 + (a2 >> 31 >> 29) & 7) - (a2 >> 31 >> 29))
 {
 case 0:
 do
 {
 iter += 1;
 cur += 1;
 *(cur) = *(iter);
LABEL_401cfd:
 iter += 1;
 cur += 1;
 *(cur) = *(iter);
LABEL_401d19:
 iter += 1;
 cur += 1;
 *(cur) = *(iter);
LABEL_401d35:
 iter += 1;
 cur += 1;
 *(cur) = *(iter);
LABEL_401d51:
 iter += 1;
 cur += 1;
 *(cur) = *(iter);
LABEL_401d6d:
 iter += 1;
 cur += 1;
 *(cur) = *(iter);
LABEL_401d89:
 iter += 1;
 cur += 1;
 *(cur) = *(iter);
LABEL_401da5:
 iter += 1;
 cur += 1;
 *(cur) = *(iter);
 v2 -= 1;
 } while (v2 > 0);
 case 1:
 goto LABEL_401da5;
 case 2:
 goto LABEL_401d89;
 case 3:
 goto LABEL_401d6d;
 case 4:
 goto LABEL_401d51;
 case 5:
 goto LABEL_401d35;
 case 6:
 goto LABEL_401d19;
 case 7:
 goto LABEL_401cfd;
 }
 return a2;
}


// Function: loop_complex_cond at 0x401dd4
int loop_complex_cond(unsigned int a0)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int i; // [bp-0xc]

 v0 = 0;
 v1 = a0;
 for (i = 0; v0 < v1 && i <= 9 && v1 > 0; i += 1)
 {
 v0 += 2;
 v1 -= 1;
 }
 return i + v0 + v1;
}


// Function: loop_modify_var at 0x401e24
unsigned int loop_modify_var(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int cur; // [bp-0xc]

 v0 = 0;
 for (cur = 0; cur < a0; cur += 1)
 {
 v0 += cur;
 if (cur > 5)
 cur += 2;
 }
 return v0;
}


// Function: loop_external_state at 0x401e60
unsigned int loop_external_state(unsigned int *a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = 0;
 do
 {
 } while (!*(a0) && (v0 += 1, v0 <= 100));
 return v0;
}


// Function: recursion_factorial at 0x401e91
unsigned long long recursion_factorial(unsigned int a0)
{
 return (a0 <= 1 ? 1 : a0 * (unsigned int)recursion_factorial(a0 - 1));
}


// Function: tail_recursion at 0x401ec0
unsigned int tail_recursion(unsigned int a0, unsigned int a1)
{
 return (a0 <= 1 ? a1 : (unsigned int)tail_recursion(a0 - 1, a1 * a0));
}


// Function: indirect_recursion_b forward declaration
unsigned int indirect_recursion_b(unsigned int a0, unsigned int a1);

// Function: indirect_recursion_a at 0x401ef5
unsigned int indirect_recursion_a(unsigned int a0, unsigned int a1)
{
 return (a1 <= 0 ? a0 : (!(a0 & 1) ? (unsigned int)indirect_recursion_b(a0 + (a0 >> 31) >> 1, a1 - 1) : (unsigned int)indirect_recursion_b(a0 * 3 + 1, a1 - 1)));
}


// Function: indirect_recursion_b at 0x401f56
unsigned int indirect_recursion_b(unsigned int a0, unsigned int a1)
{
 return (a1 <= 0 ? a0 : (unsigned int)indirect_recursion_a(a0 + 1, a1 - 1));
}


// Function: call_func_ptr at 0x401f8a
int call_func_ptr(unsigned int (*a0)(unsigned int), unsigned int a1)
{
 return a0(a1);
}


// Function: double_value at 0x401faa
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: triple_value at 0x401fbc
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: call_func_ptr_array at 0x401fd2
unsigned long long call_func_ptr_array(unsigned int a0, unsigned int a1)
{
 unsigned int (*v0)(unsigned int); // [bp-0x28]
 unsigned int (*v1)(unsigned int); // [bp-0x20]
 unsigned long long (*v2)(unsigned int); // [bp-0x18]

 v0 = double_value;
 v1 = triple_value;
 v2 = recursion_factorial;
 if (a0 >= 0 && a0 <= 2)
 {
  if (a0 == 0) return v0(a1);
  if (a0 == 1) return v1(a1);
  if (a0 == 2) return v2(a1);
 }
 return 4294967295;
}


// Function: call_virtual_func at 0x40204e
unsigned int call_virtual_func(unsigned long a0, unsigned int a1)
{
 return a1 * 2;
}


// Function: process_with_callback at 0x402064
unsigned int process_with_callback(unsigned long a0, unsigned int a1, unsigned int (*a2)(unsigned int))
{
 unsigned int v0; // [bp-0x10]
 unsigned int i; // [bp-0xc]

 v0 = 0;
 for (i = 0; i < a1; i += 1)
 {
 v0 += a2(*((int *)(a0 + i * 4)));
 }
 return v0;
}


// Function: test_control_flow_l2 at 0x4020bd
char g_4032d8[] = "Control Flow L2 Tests";

long long test_control_flow_l2()
{
 unsigned long v36; // fs
 unsigned int result[1]; // [bp-0x80]
 unsigned int flag1[1]; // [bp-0x7c]
 unsigned int flag3; // [bp-0x78]
 unsigned int v3; // [bp-0x74]
 unsigned int v4; // [bp-0x70]
 unsigned int v5; // [bp-0x6c]
 unsigned int v6; // [bp-0x68]
 unsigned int flag2[1]; // [bp-0x58]
 unsigned int v8; // [bp-0x54]
 unsigned int v9; // [bp-0x50]
 unsigned int v10; // [bp-0x4c]
 unsigned int v11; // [bp-0x48]
 unsigned int v12; // [bp-0x44]
 unsigned int v13; // [bp-0x40]
 unsigned int v14; // [bp-0x3c]
 char v15; // [bp-0x38]
 unsigned long v16; // [bp-0x10]

 puts(&g_4032d8);
 printf("CF-L2-01 (loop_multi_exit): %d\n", loop_multi_exit(7) & 4294967295);
 *((unsigned int *)result) = 0;
 printf("CF-L2-02 (infinite_loop): %d\n", infinite_loop(&result) & 4294967295);
 printf("CF-L2-03 (multi_return): %d\n", multi_return(4294967291) & 4294967295);
 printf("CF-L2-03 (multi_return): %d\n", multi_return(100) & 4294967295);
 printf("CF-L2-03 (multi_return): %d\n", multi_return(3) & 4294967295);
 printf("CF-L2-04 (conditional_return): %d\n", conditional_return(5) & 4294967295);
 printf("CF-L2-04 (conditional_return): %d\n", conditional_return(4294967291) & 4294967295);
 *((unsigned int *)flag2) = 1;
 v8 = 2;
 v9 = 3;
 v10 = 4;
 v11 = 5;
 v12 = 6;
 v13 = 7;
 v14 = 8;
 memset(&v15, 0, 32);
 printf("CF-L2-05 (duffs_device): %d\n", duffs_device(&v15, &flag2, 8) & 4294967295);
 printf("CF-L2-06 (loop_complex_cond): %d\n", loop_complex_cond(10) & 4294967295);
 printf("CF-L2-07 (loop_modify_var): %d\n", loop_modify_var(10) & 4294967295);
 *((unsigned int *)flag1) = 0;
 printf("CF-L2-08 (loop_external_state): %d\n", loop_external_state(&flag1) & 4294967295);
 printf("CF-L2-09 (recursion_factorial): %d\n", recursion_factorial(5) & 4294967295);
 printf("CF-L2-10 (tail_recursion): %d\n", tail_recursion(5, 1) & 4294967295);
 printf("CF-L2-11 (indirect_recursion): %d\n", indirect_recursion_a(10, 3) & 4294967295);
 printf("CF-L2-12 (call_func_ptr): %d\n", call_func_ptr(double_value, 5) & 4294967295);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(0, 5) & 4294967295);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(2, 5) & 4294967295);
 flag3 = 1;
 v3 = 2;
 v4 = 3;
 v5 = 4;
 v6 = 5;
 printf("CF-L2-15 (process_with_callback): %d\n", process_with_callback(&flag3, 5, double_value) & 4294967295);
 return v16 - *((long long *)(40 + v36));
}


// Function: non_local_jump at 0x402405
unsigned long long jump_buffer[100] = {0};

unsigned long long non_local_jump(unsigned int a0)
{
 return a0 * 2;
}


// Function: cpp_exception at 0x40246d
unsigned long long cpp_exception(unsigned int a0)
{
 return (a0 < 0 ? 4294967295 : (a0 <= 100 ? a0 * 2 : 4294967294));
}


// Function: op_add at 0x402499
int op_add(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: op_sub at 0x4024b1
int op_sub(unsigned int a0, unsigned int a1)
{
 return a0 - a1;
}


// Function: op_mul at 0x4024c7
int op_mul(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: op_div at 0x4024de
unsigned long long op_div(unsigned int a0, unsigned int a1)
{
 return (!a1 ? 0 : (a0 / a1) & 4294967295);
}


// Function: op_mod at 0x402502
unsigned long long op_mod(unsigned int a0, unsigned int a1)
{
 return (!a1 ? 0 : (a0 % a1));
}


// Function: op_and at 0x402528
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a0 & a1;
}


// Function: op_or at 0x40253e
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a0 | a1;
}


// Function: op_xor at 0x402554
int op_xor(unsigned int a0, unsigned int a1)
{
 return a0 ^ a1;
}


// Function: op_shl at 0x40256a
int op_shl(unsigned int a0, char a1)
{
 return a0 << (a1 & 31);
}


// Function: op_shr at 0x402586
int op_shr(unsigned int a0, char a1)
{
 return a0 >> (a1 & 31);
}


// Function: large_jump_table at 0x4025a2
unsigned long long large_jump_table(unsigned int a0, unsigned int a1, unsigned int a2)
{
 int (*v0)(unsigned int, unsigned int); // [bp-0x68]
 unsigned long long (*v1)(unsigned int, unsigned int); // [bp-0x60]
 unsigned long long (*v2)(unsigned int, unsigned int); // [bp-0x58]
 unsigned long long (*v3)(unsigned int, unsigned int); // [bp-0x50]
 unsigned long long (*v4)(unsigned int, unsigned int); // [bp-0x48]
 unsigned int (*v5)(unsigned int, unsigned int); // [bp-0x40]
 unsigned int (*v6)(unsigned int, unsigned int); // [bp-0x38]
 int (*v7)(unsigned int, unsigned int); // [bp-0x30]
 int (*v8)(unsigned int, char); // [bp-0x28]
 int (*v9)(unsigned int, char); // [bp-0x20]

 v0 = op_add;
 v1 = op_sub;
 v2 = op_mul;
 v3 = op_div;
 v4 = op_mod;
 v5 = op_and;
 v6 = op_or;
 v7 = op_xor;
 v8 = op_shl;
 v9 = op_shr;
 if (a0 >= 0 && a0 <= 9)
 {
  if (a0 == 0) return v0(a1, a2);
  if (a0 == 1) return v1(a1, a2);
  if (a0 == 2) return v2(a1, a2);
  if (a0 == 3) return v3(a1, a2);
  if (a0 == 4) return v4(a1, a2);
  if (a0 == 5) return v5(a1, a2);
  if (a0 == 6) return v6(a1, a2);
  if (a0 == 7) return v7(a1, a2);
  if (a0 == 8) return v8(a1, (char)a2);
  if (a0 == 9) return v9(a1, (char)a2);
 }
 return 4294967295;
}


// Function: conditional_func_ptr at 0x402673
int conditional_func_ptr(unsigned int a0, unsigned int a1)
{
 unsigned int (*v0)(unsigned int); // [bp-0x10]

 v0 = (!a0 ? double_value : (a0 == 1 ? triple_value : (unsigned int (*)(unsigned int))recursion_factorial));
 return v0(a1);
}


// Function: state_machine at 0x4026c3
unsigned long long state_machine(unsigned int a0, unsigned int a1)
{
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


// Function: state_idle at 0x40274e
char state_idle(unsigned int a0)
{
 return a0 == 1;
}


// Function: state_processing at 0x402765
unsigned long long state_processing(unsigned int a0)
{
 return (a0 == 2 ? 2 : (a0 == 99 ? 3 : 1));
}


// Function: state_done at 0x402791
unsigned long long state_done(unsigned long a0)
{
 return 2;
}


// Function: state_error at 0x4027a3
unsigned long long state_error(unsigned int a0)
{
 return (!a0 ? 0 : 3);
}


// Function: fsm_func_table at 0x4027c2
unsigned long long fsm_func_table(unsigned int a0, unsigned int a1)
{
 char (*v0)(unsigned int); // [bp-0x38]
 unsigned long long (*v1)(unsigned int); // [bp-0x30]
 unsigned long long (*v2)(unsigned long); // [bp-0x28]
 unsigned long long (*v3)(unsigned int); // [bp-0x20]

 v0 = state_idle;
 v1 = state_processing;
 v2 = state_done;
 v3 = state_error;
 if (a1 >= 0 && a1 <= 3)
 {
  if (a1 == 0) return v0(a0);
  if (a1 == 1) return v1(a0);
  if (a1 == 2) return v2(a0);
  if (a1 == 3) return v3(a0);
 }
 return 3;
}


// Function: computed_goto at 0x402849
extern char g_4028b7;
extern unsigned long long g_4028c2;
extern unsigned long long g_4028cd;
extern unsigned long long g_4028d8;

unsigned long long computed_goto(unsigned long long a0, unsigned int a1)
{
 unsigned long long v0; // [bp-0x40]
 void *v1; // [bp-0x38]
 void *v2; // [bp-0x30]
 void *v3; // [bp-0x28]
 void *v4; // [bp-0x20]

 v0 = a0;
 v1 = &g_4028b7;
 v2 = &g_4028c2;
 v3 = &g_4028cd;
 v4 = &g_4028d8;
 if (a1 < 0)
 return 4294967295;
 if (a1 > 3)
 return 4294967295;
 switch (a1)
 {
 case 0:
 goto LABEL_0;
 case 1:
 goto LABEL_1;
 case 2:
 goto LABEL_2;
 case 3:
 goto LABEL_3;
 }
LABEL_0:
 return g_4028b7;
LABEL_1:
 return g_4028c2;
LABEL_2:
 return g_4028cd;
LABEL_3:
 return g_4028d8;
}


// Function: obfuscated_cf at 0x4028f7
unsigned int obfuscated_cf(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = a0;
 if (a0 * a0 < 4294967295)
 v0 = v0 * 2 + 1;
 v0 *= 2;
 return v0;
}


// Function: opaque_predicate at 0x402926
unsigned int opaque_predicate(unsigned int a0)
{
 unsigned int result; // [bp-0xc]

 result = 0;
 return (!result ? a0 * 2 : a0 * 3);
}


// Function: overlapped_code at 0x402950
int overlapped_code(unsigned int a0)
{
 return (!(a0 & 1) ? (unsigned int)((a0 + (a0 >> 31) & 4294967295) >> 1) : a0 * 3 + 1);
}


// Function: test_control_flow_l3 at 0x402981
char g_4034f0[] = "Control Flow L3 Tests";

long long test_control_flow_l3()
{
 unsigned long v18; // fs
 unsigned int result; // [bp-0x28]
 unsigned int flag1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 unsigned int v3; // [bp-0x1c]
 unsigned long v4; // [bp-0x10]

 puts(&g_4034f0);
 printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(5) & 4294967295);
 printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(4294967291) & 4294967295);
 printf("CF-L3-02 (cpp_exception): %d\n", cpp_exception(5) & 4294967295);
 printf("CF-L3-02 (cpp_exception): %d\n", cpp_exception(4294967291) & 4294967295);
 printf("CF-L3-03 (large_jump_table): %d\n", large_jump_table(0, 10, 5) & 4294967295);
 printf("CF-L3-04 (conditional_func_ptr): %d\n", conditional_func_ptr(0, 5) & 4294967295);
 printf("CF-L3-05 (state_machine): %d\n", state_machine(1, 0) & 4294967295);
 printf("CF-L3-06 (fsm_func_table): %d\n", fsm_func_table(2, 1) & 4294967295);
 result = 0;
 flag1 = 1;
 v2 = 2;
 v3 = 3;
 printf("CF-L3-07 (computed_goto): %d\n", computed_goto(&result, 2) & 4294967295);
 printf("CF-L3-08 (obfuscated_cf): %d\n", obfuscated_cf(5) & 4294967295);
 printf("CF-L3-09 (opaque_predicate): %d\n", opaque_predicate(5) & 4294967295);
 printf("CF-L3-10 (overlapped_code): %d\n", overlapped_code(5) & 4294967295);
 return v4 - *((long long *)(40 + v18));
}


// Function: main at 0x402b7e
unsigned int main()
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


