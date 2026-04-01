// Angr Decompilation of 5-1_gcc_O3_g
// Platform: ARMEL

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


unsigned int __glibc___stack_chk_guard = 0;

// Forward declarations for template functions
int _Z12template_maxIiET_S0_S0_(int arg_0, int arg_1);
double _Z12template_maxIdET_S0_S0_(double arg_0, double arg_1);
int _Z13template_swapIiEvRT_S1_(unsigned int *ptr, unsigned int *ptr2);

// Stub implementations for missing functions
static void* operatornew(unsigned int size) { return (void*)0; }
static void operatordelete(void* ptr, unsigned int size) { }
static int __aeabi_atexit(unsigned int a, void* b, unsigned int c) { return 0; }
static int armg_calculate_condition(unsigned int a, unsigned int b, unsigned int c, unsigned int d) { return 0; }
static void __stack_chk_fail() { }
static int __aeabi_d2iz(double a, unsigned int b) { return (int)a; }
static int __aeabi_dcmpgt() { return 0; }
int __printf_chk(int flag, const char* format, ...) { return 0; }

/* CRT stub function _init removed by preprocessor */



// Function: sub_1092c at 0x1092c

int sub_1092c()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return v0;
}





// Function: main at 0x10b18
extern void test_cpp_oo_features();
extern void test_cpp_exception();
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x10b28
static char _ZStL8__ioinit = 0;
static unsigned int __dso_handle = 0;

int _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 unsigned int v0; // r0

 v0 = __aeabi_atexit(0x22090, 0, 0x22084);
 return __aeabi_atexit(0x22090, 0, 0x22084);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_10b90 at 0x10b90
extern void abort();
void sub_10b90()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x10c50

void test_cpp_member_func()
{
 unsigned int v4; // lr
 char v0[31]; // [bp-0x2c]
 char result; // [bp-0xd]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = __glibc___stack_chk_guard;
 strncpy(v0, "Test", 31);
 result = 0;
 strlen((char*)&v0);
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z20test_cpp_constructorv at 0x10cbc
void test_cpp_constructor()
{
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x10c00
void test_cpp_exception()
{
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x10cdc
struct Base {
 int dummy;
};

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 goto *((int *)*((int *)arg_0));
}


// Function: _Z21test_cpp_virtual_funcv at 0x10ce8
void test_cpp_virtual_func()
{
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x10cf0
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x10cf8
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x10d04
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x10d0c

void test_cpp_template_func()
{
 unsigned int v3; // r0
 unsigned int v4; // r1
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]

 v2 = __glibc___stack_chk_guard;
 _Z12template_maxIiET_S0_S0_(3, 7);
 v3 = (unsigned int)_Z12template_maxIdET_S0_S0_(0, 0x40040000);
 v0 = 10;
 v1 = 20;
 _Z13template_swapIiEvRT_S1_(&v0, &v1);
 v3 = __aeabi_d2iz((double)v3, v4);
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z23test_cpp_template_classv at 0x10db4
void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x10dbc
void test_cpp_lambda()
{
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x10dc4
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x10dd0
typedef struct struct_0 {
 char padding_0[4];
 struct struct_1 *field_4;
} struct_0;

typedef struct struct_1 {
 char field_0;
} struct_1;

char _ZTI12RTTIDerivedA = 0;
char g_116b4 = 0;
char g_116c8 = 0;

void test_cpp_rtti()
{
 void* *ptr; // r6
 void* *p; // r5
 struct_0 *v2; // r0
 unsigned int result; // r3
 char *cur; // r0

 ptr = (void**)operatornew(4);
 *(ptr) = (void*)71348;
 p = (void**)operatornew(4);
 v2 = (struct_0 *)((char*)*(ptr) + 4);
 *(p) = (void*)71368;
 result = (unsigned int)((void*)v2 == (void*)0x11684);
 if (result)
 {
 if (!armg_calculate_condition(18, result, 0, 0))
 goto LABEL_10e26;
 if (!armg_calculate_condition(2, result, 0, 0))
 goto LABEL_10e2a;
 if (!armg_calculate_condition(2, result, 0, 0))
 goto LABEL_10e2e;
 }
 else
 {
 if (armg_calculate_condition(18, result, 0, 0))
 goto LABEL_10e25;
 if (armg_calculate_condition(2, result, 0, 0))
 goto LABEL_10e29;
 if (armg_calculate_condition(2, result, 0, 0))
 goto LABEL_10e2d;
 }
LABEL_10e26:
LABEL_10e2a:
LABEL_10e2e:
LABEL_10e25:
LABEL_10e29:
LABEL_10e2d:
 cur = (char*)*((int *)((char*)*(ptr) + 4 + 4));
 if (*(cur) == 42)
 cur += 1;
 strlen((char*)cur);
 ((void(*)(void*))((char*)*(ptr) + 4))(ptr);
 ((void(*)(void*))((char*)*(p) + 4))(p);
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x10ed4
unsigned int _ZN14LifecycleClass14instance_countE = 0;
char g_114d8 = 0;
char g_114fc = 0;
char g_1151c = 0;
char g_11538 = 0;
char g_11554 = 0;
char g_11570 = 0;
char g_11590 = 0;
char g_115ac = 0;
char g_115c8 = 0;
char g_115e4 = 0;
char g_11600 = 0;
char g_11620 = 0;
char g_11640 = 0;

void test_cpp_oo_features()
{
 unsigned int v6; // r0
 unsigned int v7; // r0
 unsigned int v8; // r1
 unsigned int v9; // r0
 unsigned int v11; // r0
 unsigned int v0; // [bp-0x40]
 unsigned int v1; // [bp-0x3c]
 char v2[1][31]; // [bp-0x34]
 char result; // [bp-0x15]
 unsigned int v4; // [bp-0x14]

 v4 = __glibc___stack_chk_guard;
 puts((char*)0x114d8);
 strncpy((char*)&v2, "Test", 31);
 result = 0;
 __printf_chk(1, (char*)0x114fc, strlen((char*)&v2) + 4700);
 __printf_chk(1, (char*)0x1151c, _ZN14LifecycleClass14instance_countE + 21 + _ZN14LifecycleClass14instance_countE * 1000);
 __printf_chk(1, (char*)0x11538, 42);
 __printf_chk(1, (char*)0x11554, 71);
 __printf_chk(1, (char*)0x11570, 650);
 __printf_chk(1, (char*)0x11590, 22);
 v6 = _Z12template_maxIiET_S0_S0_(3, 7);
 v7 = (unsigned int)_Z12template_maxIdET_S0_S0_(0, 0x40040000);
 v0 = 10;
 v1 = 20;
 _Z13template_swapIiEvRT_S1_(&v0, &v1);
 v9 = __aeabi_d2iz((double)v7, v8);
 __printf_chk(1, (char*)0x115ac, v9 + v6 + v0 + v1);
 __printf_chk(1, (char*)0x115c8, 16);
 __printf_chk(1, (char*)0x115e4, 85);
 test_cpp_exception();
 __printf_chk(1, (char*)0x11620, 703);
 test_cpp_rtti();
 if ((v4 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 __printf_chk(1, (char*)0x11640, 0);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x110d0
void Base_virtual_func(void* this_ptr, int arg_0)
{
 return;
}


// Function: _ZNK4Base7getNameEv at 0x110d8
void Base_getName(void* this_ptr)
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x110e4
void Base_D1Ev(void* this_ptr)
{
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x110e8
void Derived_virtual_func(void* this_ptr, int arg_0)
{
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x110f4
void Derived_getName(void* this_ptr)
{
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x11100
void MultiDerived_funcA(void* this_ptr)
{
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x11108
void MultiDerived_funcB(void* this_ptr)
{
 return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x11110
unsigned int MultiDerived_funcB_thunk()
{
 return 40;
}


// Function: _ZN7MiddleA4funcEv at 0x11118
void MiddleA_func(void* this_ptr)
{
 return;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x11130
int MiddleA_func_thunk(void **a0)
{
 int v0 = ((int*)((char**)a0)[0])[12];
 int v1 = *((int *)((char *)a0 + v0));
 return *((int *)(4 + (char *)a0 + v0 + v1 - 12)) + 150;
}


// Function: _ZN7MiddleB4funcEv at 0x11154
void MiddleB_func(void* this_ptr)
{
 return;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x1116c
int MiddleB_func_thunk(void **a0)
{
 int v0 = ((int*)((char**)a0)[0])[12];
 int v1 = *((int *)((char *)a0 + v0));
 return *((int *)(4 + (char *)a0 + v0 + v1 - 12)) + 200;
}


// Function: _ZN14DiamondDerived4funcEv at 0x11190
void DiamondDerived_func(void* this_ptr)
{
 return;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x111a8
int DiamondDerived_func_thunk(void **a0)
{
 return *((int *)(4 + (char *)a0 + ((int*)((char**)a0)[0])[12] + *((int *)(*((int *)((char *)a0 + ((int*)((char**)a0)[0])[12])) - 12)))) + 250;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x111cc
int DiamondDerived_func_thunk2(void *a0)
{
 int v0 = ((int*)((char**)a0)[0])[8];
 int v1 = *((int *)(v0 - 12));
 return *((int *)(-4 + (char *)a0 + v1)) + 250;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x111e4
void RTTIDerivedA_getType(void* this_ptr)
{
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x111ec
void RTTIDerivedB_getType(void* this_ptr)
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x111f4
void RTTIDerivedB_D1Ev(void* this_ptr)
{
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x111f8
void RTTIDerivedA_D1Ev(void* this_ptr)
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x111fc
void DiamondDerived_D1Ev(void* this_ptr)
{
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x11200
void* DiamondDerived_D1Ev_thunk(void **a0)
{
 return (char *)a0 + ((int*)((char**)a0)[0])[16];
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x11210
int DiamondDerived_D1Ev_thunk2(unsigned int a0)
{
 return a0 - 8;
}


// Function: _ZN12MultiDerivedD1Ev at 0x11218
void MultiDerived_D1Ev(void* this_ptr)
{
 return;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x1121c
int MultiDerived_D1Ev_thunk(unsigned int a0)
{
 int v0 = a0;
 return v0 - 8;
}


// Function: _ZN7DerivedD2Ev at 0x11224
void Derived_D2Ev(void* this_ptr)
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x11228
void Base_D0Ev(void* this_ptr)
{
 operatordelete(this_ptr, 4);
 return;
}


// Function: _ZN7DerivedD0Ev at 0x11240
void Derived_D0Ev(void* this_ptr)
{
 operatordelete(this_ptr, 8);
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x11258
void MultiDerived_D0Ev(void* this_ptr)
{
 operatordelete(this_ptr, 16);
 return;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x11270
void* MultiDerived_D0Ev_thunk(void *a0)
{
 operatordelete((char *)a0 - 8, 16);
 return (void *)((char *)a0 - 8);
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x1128c
void RTTIDerivedB_D0Ev(void* this_ptr)
{
 operatordelete(this_ptr, 4);
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x112a4
void RTTIDerivedA_D0Ev(void* this_ptr)
{
 operatordelete(this_ptr, 4);
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x112bc
void DiamondDerived_D0Ev(void* this_ptr)
{
 operatordelete(this_ptr, 24);
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x112d4
void* DiamondDerived_D0Ev_thunk(void **a0)
{
 void* v0; // r4

 v0 = (char *)a0 + ((int*)((char**)a0)[0])[16];
 operatordelete(v0, 24);
 return v0;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x112f8
void* DiamondDerived_D0Ev_thunk2(void *a0)
{
 operatordelete((char *)a0 - 8, 24);
 return (void *)((char *)a0 - 8);
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x11314
int _Z12template_maxIiET_S0_S0_(int arg_0, int arg_1)
{
 if (arg_0 >= arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x11320
double _Z12template_maxIdET_S0_S0_(double arg_0, double arg_1)
{
 if (arg_0 > arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x11350
int _Z13template_swapIiEvRT_S1_(unsigned int *ptr, unsigned int *ptr2)
{
 unsigned int v0; // r3
 unsigned int *p; // r1

 p = ptr2;
 v0 = *(ptr);
 *(ptr) = *(p);
 *(p) = v0;
 return 0;
}


// Function: _ZN9ContainerIiEC2Ev at 0x11364
int _ZN9ContainerIiEC2Ev(void* ptr)
{
 *((unsigned int *)((char*)ptr + 40)) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x11370
void _ZN9ContainerIiE4pushEi(void* ptr, int arg_0)
{
 unsigned int index; // r3
 unsigned int v1; // r2

 index = *((unsigned int *)((char*)ptr + 40));
 if (index <= 9)
 v1 = index + 1;
 else
 v1 = index;
 *((unsigned int *)((char*)ptr + 40)) = v1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x11388
void _ZNK9ContainerIiE3getEi(void* this_ptr, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x113ac
void _ZNK9ContainerIiE7getSizeEv(void* this_ptr)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x113b4
int _ZN9ContainerIdEC1Ev(void* ptr)
{
 *((unsigned int *)((char*)ptr + 80)) = 0;
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x113c0
void _ZN9ContainerIdE4pushEd(void* p, unsigned int v2, unsigned int v3)
{
 unsigned int v0; // r3
 unsigned int *ptr; // r3

 v0 = *((unsigned int *)((char*)p + 80));
 if (9 >= v0)
 {
 ptr = (unsigned int*)((char*)p + v0 * 8);
 *((unsigned int *)((char*)p + 80)) = v0 + 1;
 ptr[0] = v2;
 ptr[1] = v3;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x113f0
void _ZNK9ContainerIdE3getEi(void* this_ptr, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x1141c
void _ZNK9ContainerIdE7getSizeEv(void* this_ptr)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


