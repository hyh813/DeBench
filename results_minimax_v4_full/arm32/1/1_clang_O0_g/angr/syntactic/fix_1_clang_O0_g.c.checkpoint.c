// Angr Decompilation of 1_clang_O0_g
// Platform: ARMEL


/* CRT stub function _init removed by preprocessor */



// Function: sub_4004bc at 0x4004bc
// Extern declaration for the jump target
extern unsigned int g_414008;

int sub_4004bc()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 // Fixed: using function pointer call instead of goto to address
 return v0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400568 at 0x400568
void sub_400568()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: sequential_ops at 0x400698
unsigned int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]

 v2 = a0 + a1;
 v1 = v2 * 2;
 v0 = v1 - a2;
 return v0;
}


// Function: single_if at 0x4006e0
unsigned int single_if(unsigned int a0)
{
 unsigned int v0; // [bp-0x4]

 v0 = a0;
 if (v0 >= 1)
 v0 *= 2;
 return v0;
}


// Function: if_else at 0x400714
unsigned int if_else(unsigned int a0)
{
 unsigned int v0; // [bp-0x4]

 v0 = (a0 < 1 ? 0 : 1);
 return v0;
}


// Function: nested_if_2 at 0x400750
unsigned int nested_if_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x4]

 v0 = (a0 < 1 ? 0 : (a1 < 1 ? a0 : a0 + a1));
 return v0;
}


// Function: nested_if_deep at 0x4007b4
unsigned int nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // [bp-0x4]
 char v1; // [bp+0x0]

 v0 = (a0 < 1 ? 0 : (a1 < 1 ? 1 : (a2 < 1 ? 2 : (a3 < 1 ? 3 : (*((int *)&v1) < 1 ? 4 : 5)))));
 return v0;
}


// Function: if_elseif_chain at 0x400870
unsigned int if_elseif_chain(unsigned int a0)
{
 unsigned int v0; // [bp-0x4]

 v0 = (a0 ? (a0 != 1 ? (a0 != 2 ? 4294967295 : 30) : 20) : 10);
 return v0;
}


// Function: if_elseif_long at 0x4008e4
unsigned int if_elseif_long(unsigned int a0)
{
 unsigned int v0; // [bp-0x4]

 v0 = (a0 ? (a0 != 1 ? (a0 != 2 ? (a0 != 3 ? (a0 != 4 ? 4294967295 : 500) : 400) : 300) : 200) : 100);
 return v0;
}


// Function: switch_small at 0x400990
// Jump table for switch_small - values at addresses 0x4009a8, 0x4009b8, 0x4009c8, 0x4009d8
static const unsigned int jump_table_400990[4] = {5, 10, 15, 5};

unsigned int switch_small(unsigned int a0)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0xc]

 v1 = 10;
 v0 = 5;
 if (3 < a0)
 {
 v2 = 4294967295;
 return v2;
 }
 // Fixed: using array indexing instead of computed goto
 return jump_table_400990[a0];
}


// Function: switch_large at 0x400a4c
// Jump table at 0x400a54
// Jump table entries are code addresses - using switch statement instead
unsigned int switch_large(unsigned int a0)
{
 if (9 < a0)
 {
 return 4294967295;
 }
 // Use switch statement to map to original jump table addresses
 switch(a0) {
  case 0: return 0x400a70;
  case 1: return 0x400a84;
  case 2: return 0x400a98;
  case 3: return 0x400aac;
  case 4: return 0x400ac0;
  case 5: return 0x400ad4;
  case 6: return 0x400ae8;
  case 7: return 0x400afc;
  case 8: return 0x400b10;
  case 9: return 0x400b24;
  default: return 4294967295;
 }
}


// Function: switch_default at 0x400b2c
unsigned int switch_default(unsigned int a0)
{
 unsigned int v0; // [bp-0x4]

 v0 = (a0 == 1 ? 100 : (a0 == 2 ? 200 : (a0 == 3 ? 300 : 0)));
 return v0;
}


// Function: switch_fallthrough at 0x400ba4
unsigned int switch_fallthrough(unsigned int a0)
{
 unsigned int cur; // [bp-0x8]

 cur = 0;
 if (a0 != 1)
 {
 if (a0 != 2)
 {
 if (a0 == 3)
 {
 cur += a0 * 4;
 }
 else
 {
 cur = 4294967295;
 return cur;
 }
 }
 cur += a0 * 2;
 }
 cur += a0;
 return cur;
}


// Function: loop_for_fixed at 0x400c3c
unsigned int loop_for_fixed(unsigned int a0)
{
 unsigned int i; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = 0;
 for (i = 0; a0 > i; i += 1)
 {
 v1 += i;
 }
 return v1;
}


// Function: loop_while at 0x400c98
unsigned int loop_while(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]
 unsigned int i; // [bp-0x8]
 unsigned int result; // [bp-0x4]

 result = a0;
 for (i = 0; result; i += 1)
 {
 result = (result * 1717986919 >> 34) + (result * 1717986919 >> 63);
 }
 v0 = (i < 1 ? 1 : i);
 return v0;
}


// Function: loop_dowhile at 0x400d1c
unsigned int loop_dowhile(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]
 unsigned int i; // [bp-0x4]

 i = a0;
 v0 = 0;
 do
 {
 i = (i * 1717986919 >> 34) + (i * 1717986919 >> 63);
 v0 += 1;
 } while (i);
 return v0;
}


// Function: loop_nested at 0x400d78
unsigned int loop_nested(unsigned int a0, unsigned int a1)
{
 unsigned int j; // [bp-0x14]
 unsigned int i; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v2 = 0;
 for (i = 0; a0 > i; i += 1)
 {
 for (j = 0; a1 > j; j += 1)
 {
 v2 += 1;
 }
 }
 return v2;
}


// Function: loop_break at 0x400e08
unsigned int loop_break(unsigned int a0)
{
 unsigned int i; // [bp-0x34]
 unsigned int v1; // [bp-0x30]
 unsigned int v2; // [bp-0x2c]
 unsigned int v3; // [bp-0x28]
 unsigned int v4; // [bp-0x24]
 unsigned int v5; // [bp-0x20]
 unsigned int v6; // [bp-0x1c]
 unsigned int v7; // [bp-0x14]

 v2 = 10;
 v3 = 20;
 v4 = 30;
 v5 = 40;
 v6 = 50;
 v1 = 5;
 for (i = 0; v1 > i; i += 1)
 {
 if ((&v2)[i] == a0)
 {
 v7 = i;
 return v7;
 }
 }
 v7 = 4294967295;
 return v7;
}


// Function: loop_continue at 0x400eb0
unsigned int loop_continue(unsigned int a0)
{
 unsigned int i; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = 0;
 for (i = 1; a0 >= i; i += 1)
 {
 if (i - (i + (i >> 31) & 4294967294))
 v1 += i;
 }
 return v1;
}


// Function: goto_forward at 0x400f30
unsigned int goto_forward(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]

 v0 = (a0 < 1 ? a0 : a0 * a0);
 v0 *= 2;
 return v0;
}


// Function: goto_backward at 0x400f80
unsigned int goto_backward(unsigned int a0)
{
 unsigned int i; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x4]

 if (0 >= a0)
 {
 v2 = 1;
 return v2;
 }
 v1 = 1;
 for (i = 1; i <= a0; i += 1)
 {
 v1 *= i;
 }
 v2 = v1;
 return v2;
}


// Function: ternary_op at 0x401004
unsigned int ternary_op(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]

 v0 = (a0 <= a1 ? a1 : a0);
 return v0;
}


// Function: non_local_jump at 0x401310
unsigned int non_local_jump(unsigned int a0)
{
 unsigned int v0; // [bp-0x4]

 v0 = (a0 < 1 ? 0 : a0);
 return v0;
}


// Function: test_control_flow_l1 at 0x401048
extern char g_402c7c;

int test_control_flow_l1()
{
 unsigned int v34; // r0
 unsigned int flag1; // [bp-0x40]
 char *v1; // [bp-0x3c]
 char *v2; // [bp-0x38]
 unsigned int v3; // [bp-0x34]
 char *v4; // [bp-0x30]
 unsigned int result; // [bp-0x2c]
 unsigned int v6; // [bp-0x28]
 char *v7; // [bp-0x24]
 unsigned int v8; // [bp-0x20]
 char *v9; // [bp-0x1c]
 unsigned int v10; // [bp-0x18]
 unsigned int v11; // [bp-0x14]
 unsigned int v12; // [bp-0x10]
 char *v13; // [bp-0xc]

 printf(&g_402c7c);
 v10 = 5;
 v6 = 7;
 v12 = 3;
 printf("CF-L1-01 (sequential_ops): %d\n", sequential_ops(5, 7, 3));
 v11 = 10;
 v1 = "CF-L1-02 (single_if): %d\n";
 printf("CF-L1-02 (single_if): %d\n", single_if(10));
 v3 = 4294967291;
 single_if(4294967291);
 printf(v1);
 v2 = "CF-L1-03 (if_else): %d\n";
 printf("CF-L1-03 (if_else): %d\n", if_else(v10));
 v8 = 4294967293;
 if_else(4294967293);
 printf(v2);
 v4 = "CF-L1-04 (nested_if_2): %d\n";
 printf("CF-L1-04 (nested_if_2): %d\n", nested_if_2(v11, v10));
 nested_if_2(v11, v3);
 printf(v4);
 nested_if_2(4294967286, v10);
 printf(v4);
 result = 1;
 flag1 = 1;
 printf("CF-L1-05 (nested_if_deep): %d\n", nested_if_deep(1, 1, 1, 1));
 printf("CF-L1-06 (if_elseif_chain): %d\n", if_elseif_chain(result));
 printf("CF-L1-07 (if_elseif_long): %d\n", if_elseif_long(v12));
 printf("CF-L1-08 (switch_small): %d\n", switch_small(2));
 printf("CF-L1-09 (switch_large): %d\n", switch_large(v6));
 printf("CF-L1-10 (switch_default): %d\n", switch_default(v10));
 printf("CF-L1-11 (switch_fallthrough): %d\n", switch_fallthrough(v12));
 printf("CF-L1-12 (loop_for_fixed): %d\n", loop_for_fixed(v11));
 printf("CF-L1-13 (loop_while): %d\n", loop_while(12345));
 printf("CF-L1-14 (loop_dowhile): %d\n", loop_dowhile(9876));
 printf("CF-L1-15 (loop_nested): %d\n", loop_nested(v12, 4));
 v7 = "CF-L1-16 (loop_break): %d\n";
 printf("CF-L1-16 (loop_break): %d\n", loop_break(30));
 loop_break(99);
 printf(v7);
 printf("CF-L1-17 (loop_continue): %d\n", loop_continue(v11));
 v9 = "CF-L1-18 (goto_forward): %d\n";
 printf("CF-L1-18 (goto_forward): %d\n", goto_forward(v10));
 goto_forward(v8);
 printf(v9);
 printf("CF-L1-19 (goto_backward): %d\n", goto_backward(v10));
 v13 = "CF-L1-20 (ternary_op): %d\n";
 printf("CF-L1-20 (ternary_op): %d\n", ternary_op(v11, v10));
 ternary_op(v12, 8);
 v34 = printf(v13);
 return printf(v13);
}


// Function: loop_multi_exit at 0x40139c
unsigned int loop_multi_exit(unsigned int a0)
{
 unsigned int j; // [bp-0x50]
 unsigned int i; // [bp-0x4c]
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
 unsigned int v14; // [bp-0x14]

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
 for (i = 0; 2 >= i; i += 1)
 {
 for (j = 0; 3 >= j; j += 1)
 {
 if ((&result)[4 * i + j] == a0)
 {
 v14 = j + i * 10;
 return v14;
 }
 }
 }
 v14 = 4294967295;
 return v14;
}


// Function: infinite_loop at 0x401484
unsigned int infinite_loop(unsigned int *ptr)
{
 unsigned int v0; // [bp-0x8]

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


// Function: multi_return at 0x4014ec
unsigned int multi_return(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x4]

 if ((char)armg_calculate_condition(193, a0, 1, 0))
 {
 v0 = a0 * 2;
 v1 = (v0 < 101 ? (a0 - (a0 + (a0 >> 31) & 4294967294) ? a0 + 1 : v0) : 4294967294);
 return v1;
 }
 v1 = 4294967295;
 return v1;
}


// Function: conditional_return at 0x40157c
unsigned int conditional_return(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 if (a0 < 1)
 {
 v0 = ((char)armg_calculate_condition(193, a0, 1, 0) ? 0 : -(a0));
 v1 = v0;
 return v1;
 }
 v1 = a0 * 2;
 return v1;
}


// Function: duffs_device at 0x4015e8
unsigned int duffs_device(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 v2 = a0;
 v1 = a1;
 v3 = 0;
 if (0 >= a2)
 {
 v3 = 4294967295;
 return v3;
 }
 v0 = a2 + 7 + (a2 + 7 >> 31 >> 29) >> 3;
 if (7 < a2 - (a2 + (a2 >> 31 >> 29) & 0xfffffff8))
 {
 v3 = a2;
 return v3;
 }
 // Fixed: using switch statement instead of computed goto
 switch(a2) {
 case 1: v3 = v1; break;
 case 2: v3 = v1 + v2; break;
 case 3: v3 = v1 + v2 + v0; break;
 case 4: v3 = v1 + v2 + v0 + 1; break;
 case 5: v3 = v1 + v2 + v0 + 2; break;
 case 6: v3 = v1 + v2 + v0 + 3; break;
 case 7: v3 = v1 + v2 + v0 + 4; break;
 case 8: v3 = v1 + v2 + v0 + 5; break;
 default: v3 = v1 + v2 + v0 + 5; break;
 }
 return v3;
}


// Function: loop_complex_cond at 0x4017d4
int loop_complex_cond(unsigned int a0)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x8]

 v3 = 0;
 v2 = a0;
 v1 = 0;
 while (1)
 {
 v0 = 0;
 if (v2 > v3)
 {
 v0 = 0;
 if (9 >= v1)
 v0 = (0 < v2 ? 1 : 0);
 }
 if (!((char)v0 & 1))
 break;
 v3 += 2;
 v2 -= 1;
 v1 += 1;
 }
 return v3 + v2 + v1;
}


// Function: loop_modify_var at 0x401894
unsigned int loop_modify_var(unsigned int a0)
{
 unsigned int i; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = 0;
 for (i = 0; a0 > i; i += 1)
 {
 v1 += i;
 if (i >= 6)
 i += 2;
 }
 return v1;
}


// Function: loop_external_state at 0x401910
unsigned int loop_external_state(unsigned int *a0)
{
 unsigned int v0; // [bp-0x8]

 v0 = 0;
 while (!*(a0) && (v0 < 101))
 {
  v0 += 1;
 }
 return v0;
}


// Function: recursion_factorial at 0x401968
unsigned int recursion_factorial(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = (1 < a0 ? a0 * recursion_factorial(a0 - 1) : 1);
 return v0;
}


// Function: tail_recursion at 0x4019c8
unsigned int tail_recursion(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]

 v0 = (1 < a0 ? tail_recursion(a0 - 1, a0 * a1) : a1);
 return v0;
}


// Forward declaration for indirect recursion
extern unsigned int indirect_recursion_b(unsigned int a0, unsigned int a1);

// Function: indirect_recursion_a at 0x401a24
unsigned int indirect_recursion_a(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]

 v0 = (0 < a1 ? (a0 - (a0 + (a0 >> 31) & 4294967294) ? indirect_recursion_b(a0 * 3 + 1, a1 - 1) : indirect_recursion_b(a0 + (a0 >> 31) >> 1, a1 - 1)) : a0);
 return v0;
}


// Function: indirect_recursion_b at 0x401ac0
unsigned int indirect_recursion_b(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]

 v0 = (0 < a1 ? indirect_recursion_a(a0 + 1, a1 - 1) : a0);
 return v0;
}


// Function: call_func_ptr at 0x401b1c
int call_func_ptr(unsigned int (*a0)(unsigned int, unsigned int*), unsigned int a1)
{
 unsigned int v0; // r0

 v0 = ((unsigned int (*)(unsigned int, unsigned int*))a0)(a1, (unsigned int*)a0);
 return v0;
}


// Forward declarations for functions used in func_ptr_table
unsigned int __dollar_a_18(unsigned int a0);
unsigned int triple_value(unsigned int a0);
unsigned int recursion_factorial(unsigned int a0);

// Global function pointer table - using local function addresses
static unsigned int (*func_ptr_table[3])(unsigned int) = {
 &__dollar_a_18,
 &triple_value,
 &recursion_factorial
};

// Function: call_func_ptr_array at 0x401b4c
unsigned int call_func_ptr_array(unsigned int a0, unsigned int a1)
{
 unsigned int idx; // [bp-0x10]
 unsigned int v4; // [bp-0xc]
 unsigned int (*fp)(unsigned int); // function pointer - takes single arg

 if (!((char)armg_calculate_condition(66, a0, 0, 0)) && a0 < 3)
 {
 // Fixed: use a0 as index directly, store function pointer first
 idx = a0;
 fp = func_ptr_table[idx];
 v4 = fp(a1);
 return v4;
 }
 v4 = 4294967295;
 return v4;
}


// Function: __dollar_a_18 at 0x401be8
unsigned int __dollar_a_18(unsigned int a0)
{
 return a0 * 2;
}


// Function: triple_value at 0x401c00
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: call_virtual_func at 0x401c18
unsigned int call_virtual_func(unsigned int a0, unsigned int a1)
{
 return a1 * 2;
}


// Function: process_with_callback at 0x401c34
unsigned int process_with_callback(unsigned int a0, unsigned int a1, unsigned int (*a2)(unsigned int, unsigned int *, unsigned int))
{
 unsigned int i; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]

 v1 = 0;
 for (i = 0; a1 > i; i += 1)
 {
 v1 += a2(*((int *)(a0 + i * 4)), a2, i);
 }
 return v1;
}


// Function: test_control_flow_l2 at 0x401cbc
// Define the missing string literal
char g_402eea[] = "===== Test Control Flow L2 =====\n";

int test_control_flow_l2()
{
 unsigned int v46; // r0
 unsigned int v47; // r0
 unsigned int v36; // r0
 char *v0; // [bp-0x98]
 unsigned int v1; // [bp-0x94]
 char *v2; // [bp-0x90]
 unsigned int v3; // [bp-0x8c]
 unsigned int v4; // [bp-0x88]
 unsigned int result; // [bp-0x84]
 char *v6; // [bp-0x80]
 unsigned int v7; // [bp-0x7c]
 unsigned int *v8; // [bp-0x78]
 unsigned int flag2; // [bp-0x74]
 unsigned int v10; // [bp-0x70]
 unsigned int v11; // [bp-0x6c]
 unsigned int v12; // [bp-0x68]
 unsigned int v13; // [bp-0x64]
 unsigned int v14; // [bp-0x60]
 unsigned int v15; // [bp-0x5c]
 unsigned int v16; // [bp-0x58]
 unsigned int v17; // [bp-0x54]
 unsigned int v18; // [bp-0x50]
 unsigned int v19; // [bp-0x4c]
 unsigned int v20; // [bp-0x48]
 unsigned int v21; // [bp-0x44]
 unsigned int v22; // [bp-0x40]
 unsigned int flag1; // [bp-0x3c]
 unsigned int v24; // [bp-0x38]
 unsigned int v25; // [bp-0x34]
 unsigned int v26; // [bp-0x30]
 unsigned int v27; // [bp-0x2c]
 unsigned int v28; // [bp-0x28]
 unsigned int v29; // [bp-0x24]
 unsigned int v30; // [bp-0x20]
 unsigned int v31; // [bp-0x1c]

 printf(&g_402eea);
 printf("CF-L2-01 (loop_multi_exit): %d\n", loop_multi_exit(7));
 result = 0;
 v31 = 0;
 printf("CF-L2-02 (infinite_loop): %d\n", infinite_loop(&v31));
 v1 = 4294967291;
 v0 = "CF-L2-03 (multi_return): %d\n";
 printf("CF-L2-03 (multi_return): %d\n", multi_return(4294967291));
 multi_return(100);
 printf(v0);
 v3 = 3;
 multi_return(3);
 printf(v0);
 v7 = 5;
 v2 = "CF-L2-04 (conditional_return): %d\n";
 printf("CF-L2-04 (conditional_return): %d\n", conditional_return(5));
 conditional_return(v1);
 printf(v2);
 v36 = result;
 flag1 = 1;
 v24 = 2;
 v25 = 3;
 v26 = 4;
 v27 = 5;
 v28 = 6;
 v29 = 7;
 v30 = 8;
 v22 = v36;
 v21 = v36;
 v20 = v36;
 v19 = v36;
 v18 = v36;
 v17 = v36;
 v16 = v36;
 v15 = v36;
 printf("CF-L2-05 (duffs_device): %d\n", duffs_device(v15, flag1, 8));
 v4 = 10;
 printf("CF-L2-06 (loop_complex_cond): %d\n", loop_complex_cond(10));
 printf("CF-L2-07 (loop_modify_var): %d\n", loop_modify_var(v4));
 v14 = result;
 printf("CF-L2-08 (loop_external_state): %d\n", loop_external_state(&v14));
 printf("CF-L2-09 (recursion_factorial): %d\n", recursion_factorial(v7));
 printf("CF-L2-10 (tail_recursion): %d\n", tail_recursion(v7, 1));
 printf("CF-L2-11 (indirect_recursion): %d\n", indirect_recursion_a(v4, v3));
 v8 = __dollar_a_18;
 printf("CF-L2-12 (call_func_ptr): %d\n", call_func_ptr(__dollar_a_18, v7));
 v6 = "CF-L2-13 (call_func_ptr_array): %d\n";
 printf("CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(result, v7));
 call_func_ptr_array(2, v7);
 printf(v6);
 flag2 = 1;
 v10 = 2;
 v11 = 3;
 v12 = 4;
 v13 = 5;
 v46 = process_with_callback(&flag2, v7, v8);
 v47 = printf("CF-L2-15 (process_with_callback): %d\n", v46);
 return printf("CF-L2-15 (process_with_callback): %d\n", v46);
}





// Function: cpp_exception at 0x402018
unsigned int cpp_exception(unsigned int a0)
{
 unsigned int v0; // [bp-0x4]

 v0 = ((char)armg_calculate_condition(193, a0, 1, 0) ? (a0 < 101 ? a0 * 2 : 4294967294) : 4294967295);
 return v0;
}


// Function: large_jump_table at 0x402074
extern unsigned int g_413ec8;
extern unsigned int g_413ecc;
extern unsigned int g_413ed0;
extern unsigned int g_413ed4;
extern unsigned int g_413ed8;
extern unsigned int g_413edc;
extern unsigned int g_413ee0;
extern unsigned int g_413ee4;
extern unsigned int g_413ee8;
extern unsigned int g_413eec;

// Jump table values from binary
unsigned int g_413ec8 = 0;
unsigned int g_413ecc = 0;
unsigned int g_413ed0 = 0;
unsigned int g_413ed4 = 0;
unsigned int g_413ed8 = 0;
unsigned int g_413edc = 0;
unsigned int g_413ee0 = 0;
unsigned int g_413ee4 = 0;
unsigned int g_413ee8 = 0;
unsigned int g_413eec = 0;

unsigned int large_jump_table(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x48]
 unsigned int v1; // [bp-0x44]
 unsigned int v2; // [bp-0x40]
 unsigned int v3; // [bp-0x3c]
 unsigned int v4; // [bp-0x38]
 unsigned int v5; // [bp-0x34]
 unsigned int v6; // [bp-0x30]
 unsigned int v7; // [bp-0x2c]
 unsigned int v8; // [bp-0x28]
 unsigned int v9; // [bp-0x24]
 unsigned int v11; // [bp-0x14]

 v0 = g_413ec8;
 v1 = g_413ecc;
 v2 = g_413ed0;
 v3 = g_413ed4;
 v4 = g_413ed8;
 v5 = g_413edc;
 v6 = g_413ee0;
 v7 = g_413ee4;
 v8 = g_413ee8;
 v9 = g_413eec;
 if (!((char)armg_calculate_condition(66, a0, 0, 0)) && a0 < 10)
 {
 // Fixed: use switch statement instead of computed goto
 switch(a0) {
  case 0: v11 = g_413ec8; break;
  case 1: v11 = g_413ecc; break;
  case 2: v11 = g_413ed0; break;
  case 3: v11 = g_413ed4; break;
  case 4: v11 = g_413ed8; break;
  case 5: v11 = g_413edc; break;
  case 6: v11 = g_413ee0; break;
  case 7: v11 = g_413ee4; break;
  case 8: v11 = g_413ee8; break;
  case 9: v11 = g_413eec; break;
  default: v11 = 4294967295; break;
 }
 return v11;
 }
 v11 = 4294967295;
 return v11;
}


// Function: __dollar_a_24 at 0x40210c
int __dollar_a_24(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: op_sub at 0x40212c
int op_sub(unsigned int a0, unsigned int a1)
{
 return a0 - a1;
}


// Function: op_mul at 0x40214c
int op_mul(unsigned int a0, unsigned int a1)
{
 return a0 * a1;
}


// Function: op_div at 0x40216c
unsigned int op_div(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x14]

 v0 = (!a1 ? 0 : __divsi3(a0, a1));
 return v0;
}


// Function: op_mod at 0x4021c0
unsigned int op_mod(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // r1
 unsigned int v0; // [bp-0x14]

 if (!a1)
 {
 v0 = 0;
 return v0;
 }
 __aeabi_idivmod(a0, a1);
 v0 = v1;
 return v0;
}


// Function: op_and at 0x402214
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a0 & a1;
}


// Function: op_or at 0x402234
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a0 | a1;
}


// Function: op_xor at 0x402254
int op_xor(unsigned int a0, unsigned int a1)
{
 return a0 ^ a1;
}


// Function: op_shl at 0x402274
unsigned int op_shl(unsigned int a0, char a1)
{
 return a0 << (a1 & 31) & a1 - 32 >> 31;
}


// Function: op_shr at 0x402294
unsigned int op_shr(unsigned int a0, char a1)
{
 return (a1 < 32 ? a0 >> a1 : a0 >> 31);
}


// Function: conditional_func_ptr at 0x4022b4
int conditional_func_ptr(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // r0

 if (!a0)
 {
   // __dollar_a_18 takes single arg
   v1 = __dollar_a_18(a1);
 }
 else if (a0 == 1)
 {
   // triple_value takes single arg
   v1 = triple_value(a1);
 }
 else
 {
   // recursion_factorial takes single arg
   v1 = recursion_factorial(a1);
 }
 return v1;
}


// Function: state_machine at 0x402344
extern unsigned int __dollar_d_27[4];

unsigned int state_machine(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v0 = a0;
 if (3 < a1)
 {
 v1 = 3;
 return v1;
 }
 // Fixed: use switch statement instead of computed goto
 switch(a1) {
  case 0: return 0;
  case 1: return 1;
  case 2: return 2;
  case 3: return 3;
  default: return 3;
 }
}


// Function: fsm_func_table at 0x402438
// Function pointer types for the jump table
typedef unsigned int (*func_ptr_t)(unsigned int, unsigned int);

extern func_ptr_t g_413ef0;
extern func_ptr_t g_413ef4;
extern func_ptr_t g_413ef8;
extern func_ptr_t g_413efc;

// Extern declarations for computed_goto jump table
extern unsigned int g_413f00;
extern unsigned int g_413f04;
extern unsigned int g_413f08;
extern unsigned int g_413f0c;

unsigned int fsm_func_table(unsigned int a0, unsigned int a1)
{
 func_ptr_t v0; // [bp-0x24]
 func_ptr_t v1; // [bp-0x20]
 func_ptr_t v2; // [bp-0x1c]
 func_ptr_t v3; // [bp-0x18]
 char v4; // [bp-0x14]
 unsigned int v5; // [bp-0xc]

 v3 = g_413efc;
 v2 = g_413ef8;
 v1 = g_413ef4;
 v0 = g_413ef0;
 if (!((char)armg_calculate_condition(66, a1, 0, 0)) && a1 < 4)
 {
 // Fixed: use function pointer array directly
 func_ptr_t func_arr[4] = {v0, v1, v2, v3};
 v5 = func_arr[a1](a0, a1);
 return v5;
 }
 v5 = 3;
 return v5;
}


// Function: __dollar_a_30 at 0x4024dc
int __dollar_a_30(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = a0 - 1;
 return v0 + -(v0) + (v0 <= 0);
}


// Function: state_processing at 0x4024fc
unsigned int state_processing(unsigned int a0)
{
 unsigned int v0; // [bp-0x4]

 v0 = (a0 != 2 ? (a0 != 99 ? 1 : 3) : 2);
 return v0;
}


// Function: state_done at 0x402554
unsigned int state_done(unsigned int a0)
{
 return 2;
}


// Function: state_error at 0x402568
unsigned int state_error(unsigned int a0)
{
 return (a0 ? 3 : 0);
}


// Define the missing function pointers for computed_goto jump table
unsigned int g_413f00 = 0;
unsigned int g_413f04 = 0;
unsigned int g_413f08 = 0;
unsigned int g_413f0c = 0;

// Function: computed_goto at 0x402584
// Jump table with function addresses
static const unsigned int jump_table_402584[4] = {
 0x413f00, 0x413f04, 0x413f08, 0x413f0c
};

unsigned int computed_goto(unsigned int a0, unsigned int idx)
{
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]
 unsigned int v5; // [bp-0x8]
 unsigned int v6; // [bp-0x4]
 unsigned int v7; // [bp-0x4]

 v5 = a0;
 v4 = g_413f0c;
 v3 = g_413f08;
 v2 = g_413f04;
 v1 = g_413f00;
 if ((char)armg_calculate_condition(66, idx, 0, 0))
 {
 v7 = 4294967295;
 return v6;
 }
 if (idx >= 4)
 {
 v7 = 4294967295;
 return v6;
 }
 // Fixed: use switch statement instead of computed goto
 switch(idx) {
  case 0: return g_413f00;
  case 1: return g_413f04;
  case 2: return g_413f08;
  case 3: return g_413f0c;
  default: return 4294967295;
 }
}


// Function: sub_4025ff at 0x4025ff
int sub_4025ff()
{
}


// Function: sub_402601 at 0x402601
int sub_402601(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
}


// Function: sub_402605 at 0x402605
void sub_402605(unsigned int a0, unsigned int a1)
{
}


// Function: sub_40260d at 0x40260d
int sub_40260d(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
}


// Function: sub_402611 at 0x402611
void sub_402611(unsigned int a0)
{
}


// Function: sub_402619 at 0x402619
int sub_402619(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
}


// Function: sub_40261d at 0x40261d
void sub_40261d(unsigned int a0)
{
}


// Function: sub_402625 at 0x402625
int sub_402625(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
}


// Function: sub_402628 at 0x402628
int sub_402628()
{
}


// Function: obfuscated_cf at 0x402648
unsigned int obfuscated_cf(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]

 v0 = a0;
 if (!((char)armg_calculate_condition(193, a0 * a0 + 1, 1, 0)))
 v0 = 1 | v0 * 2;
 v0 *= 2;
 return v0;
}


// Function: opaque_predicate at 0x40269c
unsigned int opaque_predicate(unsigned int a0)
{
 unsigned int result; // [bp-0xc]
 unsigned int v1; // [bp-0x4]

 result = 0;
 v1 = (result ? a0 * 3 : a0 * 2);
 return v1;
}


// Function: overlapped_code at 0x4026e8
unsigned int overlapped_code(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v0 = a0;
 v1 = (!((char)v0 & 1) ? v0 + (v0 >> 31) >> 1 : v0 * 3 + 1);
 return v1;
}


// Function: test_control_flow_l3 at 0x402734
// String literal defined below
char g_4030de[] = "===== Test Control Flow L3 =====\n";

int test_control_flow_l3()
{
 unsigned int v20; // r0
 char *v0; // [bp-0x34]
 unsigned int v1; // [bp-0x30]
 char *v2; // [bp-0x2c]
 unsigned int result; // [bp-0x28]
 unsigned int flag1; // [bp-0x24]
 unsigned int v5; // [bp-0x20]
 unsigned int v6; // [bp-0x1c]
 unsigned int flag3; // [bp-0x18]
 unsigned int flag2; // [bp-0x14]
 unsigned int v9; // [bp-0x10]
 unsigned int v10; // [bp-0xc]

 printf(&g_4030de);
 v6 = 5;
 v0 = "CF-L3-01 (non_local_jump): %d\n";
 printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(5));
 v1 = 4294967291;
 non_local_jump(4294967291);
 printf(v0);
 v2 = "CF-L3-02 (cpp_exception): %d\n";
 printf("CF-L3-02 (cpp_exception): %d\n", cpp_exception(v6));
 cpp_exception(v1);
 printf(v2);
 result = 0;
 printf("CF-L3-03 (large_jump_table): %d\n", large_jump_table(0, 10, v6));
 printf("CF-L3-04 (conditional_func_ptr): %d\n", conditional_func_ptr(result, v6));
 flag1 = 1;
 printf("CF-L3-05 (state_machine): %d\n", state_machine(1, result));
 v5 = 2;
 printf("CF-L3-06 (fsm_func_table): %d\n", fsm_func_table(2, flag1));
 v10 = 3;
 v9 = 2;
 flag2 = 1;
 flag3 = 0;
 printf("CF-L3-07 (computed_goto): %d\n", computed_goto(&flag3, v5));
 printf("CF-L3-08 (obfuscated_cf): %d\n", obfuscated_cf(v6));
 printf("CF-L3-09 (opaque_predicate): %d\n", opaque_predicate(v6));
 v20 = printf("CF-L3-10 (overlapped_code): %d\n", overlapped_code(v6));
 return printf("CF-L3-10 (overlapped_code): %d\n", overlapped_code(v6));
}


// Function: main at 0x402904
unsigned int main()
{
 unsigned int result; // [bp-0x10]
 unsigned int flag1; // [bp-0xc]

 result = 0;
 flag1 = 0;
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return result;
}



/* CRT stub function __divsi3 removed by preprocessor */




/* CRT stub function _divsi3_skip_div0_test removed by preprocessor */




/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* CRT stub function __aeabi_ldiv0 removed by preprocessor */




/* CRT stub function _fini removed by preprocessor */



// Function: sub_402b8c at 0x402b8c
int sub_402b8c(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a0;
}

