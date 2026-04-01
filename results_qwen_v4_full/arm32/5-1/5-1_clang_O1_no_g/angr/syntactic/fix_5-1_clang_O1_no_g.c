// Angr Decompilation of 5-1_clang_O1_no_g
// Platform: ARMEL

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

// Declare ARM helper function
int armg_calculate_condition(unsigned int cond, unsigned int arg1, unsigned int arg2, unsigned int arg3);


/* CRT stub function _init removed by preprocessor */

// Declare C++ operator new/delete
void* operator_new(unsigned int size);
void* operator_new_array(unsigned int size);
void operator_delete(void* ptr);
void operator_delete_array(void* ptr);

// Declare C++ exception handling functions
void* __cxa_allocate_exception(unsigned int size);
void __cxa_throw(void* exc, void* type_info, void* dest);
void* __cxa_begin_catch(void* exc);
void __cxa_end_catch();
void __cxa_end_cleanup();
void __cxa_rethrow();
int __dynamic_cast(void*, void*, void*, int);
int __cxa_atexit(void*, void*, void*);



// Function: sub_400b90 at 0x400b90
extern unsigned int g_413008;

unsigned int sub_400b90()
{
 return g_413008;
}


// Function: __dollar_a_79 at 0x400cb8
extern void _ZNSt8ios_base4InitD1Ev();
extern void _ZStL8__ioinit();
extern unsigned int __dso_handle;

int __dollar_a_79()
{
 unsigned int v0; // r0

 _ZStL8__ioinit();
 v0 = __cxa_atexit((void*)&_ZNSt8ios_base4InitD1Ev, (void*)&_ZStL8__ioinit, (void*)&__dso_handle);
 return __cxa_atexit((void*)&_ZNSt8ios_base4InitD1Ev, (void*)&_ZStL8__ioinit, (void*)&__dso_handle);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400d30 at 0x400d30
void sub_400d30()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x400e60
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x2c]
 char v1[5]; // [bp-0x28]
 unsigned int result; // [bp-0x24]
 unsigned int flag1; // [bp-0x20]
 char v4; // [bp-0x1c]
 char v5; // [bp-0xc]

 v0 = 5;
 strncpy(v1, "Test", 5);
 result = 0;
 flag1 = 0;
 memset(&v4, 0, 16);
 memset(&v5, 0, 4);
 v0 = 10;
 strlen(v1);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x400ed0
extern unsigned int _ZN14LifecycleClass14instance_countE;

void test_cpp_constructor()
{
 unsigned int *ptr; // r0
 unsigned int v1; // r1
 unsigned int i; // r2

 ptr = (unsigned int*)operator_new_array(20);
 v1 = 0;
 i = 0;
 do
 {
 ptr[i] = v1;
 v1 += 10;
 i += 1;
 } while (i != 5);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 operator_delete_array(ptr);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x400f48
class Base {
    int vtable_ptr;
};

void call_virtual_func(class Base *arg_0, int arg_1)
{
 ((void (*)(void*, int))(*((int *)arg_0)))(arg_0, arg_1);
 return;
}


// Global struct definitions
typedef struct struct_0 {
 unsigned int field_0;
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

typedef struct struct_2 {
 unsigned int field_0;
} struct_2;

typedef struct struct_3 {
 unsigned int field_0;
} struct_3;

// Function: _Z21test_cpp_virtual_funcv at 0x400f64
typedef unsigned int (*func_ptr_t)(void*, int, void*);
extern func_ptr_t g_412cf0;
extern func_ptr_t g_412d10;

void test_cpp_virtual_func()
{
 func_ptr_t v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 func_ptr_t v2; // [bp-0xc]

 v2 = g_412cf0;
 v1 = 3;
 v0 = g_412d10;
 ((func_ptr_t)v2)((void*)v2, 5, (void*)v2);
 ((func_ptr_t)v0)((void*)v0, 5, (void*)v0);
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x400fdc
typedef unsigned int (*func_ptr_2arg_t)(void*, void*);
extern func_ptr_2arg_t g_412d34;
extern func_ptr_2arg_t g_412d4c;

void test_cpp_multiple_inheritance()
{
 func_ptr_2arg_t v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 func_ptr_2arg_t v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]

 v3 = 200;
 v1 = 100;
 v0 = g_412d34;
 v2 = g_412d4c;
 g_412d34((void*)v0, (void*)g_412d34);
 ((func_ptr_2arg_t)v2)((void*)v2, (void*)v2);
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x40104c
extern char g_412dbc;
extern unsigned int g_412dd4;
typedef unsigned int (*func_ptr_3arg_t)(void*, void*, void*);
extern func_ptr_3arg_t g_412df0;

void test_cpp_diamond_inheritance()
{
 void* v0; // [bp-0x28]
 char v1[1]; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 func_ptr_3arg_t v3; // [bp-0x18]
 unsigned int v4; // [bp-0x14]

 v4 = 50;
 v3 = g_412df0;
 v0 = &g_412dbc;
 v2 = (unsigned int)&g_412dd4;
 g_412df0((void*)v3, (void*)g_412df0, (void*)v0);
 ((unsigned int*)((char*)v0))[12] = 100;
 (*v3)((void*)v3, (void*)(*v3), (void*)100);
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x4010d0
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x4010d8
void test_cpp_template_func()
{
 return;
}


// Function: _Z23test_cpp_template_classv at 0x4010e0
void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x4010e8
void test_cpp_lambda()
{
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x4010f0
extern char _ZTIi;

unsigned int test_cpp_exception()
{
 unsigned int *ptr; // r0

 ptr = (unsigned int*)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw((void*)ptr, (void*)&_ZTIi, (void*)0);
 return 0;
}


// Function: sub_40111c at 0x40111c
extern unsigned int _ZTIZ18test_cpp_exceptionvE16DerivedException;

void sub_40111c(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // r2
 unsigned int v2; // r3
 unsigned int v4; // r2
 unsigned int v5; // r3

 if (a1 != 1)
 {
 if (a1 != 1)
 {
 __cxa_end_catch();
 return;
 }
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 }
 __cxa_rethrow();
}


// Function: sub_401144 at 0x401144
void sub_401144(unsigned int a0, unsigned int a1)
{
 __cxa_end_catch();
}


// Function: _Z18test_cpp_smart_ptrv at 0x4011c0
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x4011cc
extern unsigned int _ZTI12RTTIDerivedA;
extern unsigned int _ZTI12RTTIDerivedB;
extern unsigned int _ZTI8RTTIBase;
extern char g_412ed8;
extern char g_412eec;

unsigned int test_cpp_rtti()
{
 unsigned int v8; // lr
 unsigned int v9; // r10
 char *v18; // r6
 unsigned int result; // r10
 unsigned int v20; // r0
 unsigned int flag1; // r0
 unsigned int flag2; // r0
 char *v23; // r0
 char *v24; // r0
 unsigned int v10; // r9
 unsigned int v11; // r8
 unsigned int v12; // r7
 unsigned int v13; // r6
 unsigned int v14; // r5
 unsigned int v15; // r4
 unsigned int* p; // r4
 unsigned int* ptr; // r5
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]
 unsigned int v5; // [bp-0xc]
 unsigned int v6; // [bp-0x8]
 unsigned int v7; // [bp-0x4]

 v7 = v8;
 v6 = v9;
 v5 = v10;
 v4 = v11;
 v3 = v12;
 v2 = v13;
 v1 = v14;
 v0 = v15;
 p = (unsigned int*)operator_new(4);
 *(int*)p = (int)&g_412ed8;
 ptr = (unsigned int*)operator_new(4);
 *(int*)ptr = NULL;
 *(int*)ptr = (int)&g_412eec;
 v18 = (char*)((int)(*((int**)p)[4]) + 4);
 if ((unsigned int)*((int **)((int)(*((int**)ptr)[4]) + 4))) == 0)
 {
 result = 0;
 }
 else
 {
 result = 1;
 }
 flag1 = __dynamic_cast(p, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0);
 flag2 = __dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedB, 0);
 v23 = v18;
 v24 = v23 + 1;
 if (*(v23) != 42)
 v24 = v18;
 strlen(v24);
 ((void (*)(void*, int))((int)((*((int**)p))[4])))(p, (int)((*((int**)p))[4]));
 ((void (*)(void*, int))((int)((*((int**)ptr))[4])))(ptr, (int)((*((int**)ptr))[4]));
 if (!flag2)
 return 0;
 return 0;
}


// Function: _Z20test_cpp_oo_featuresv at 0x40136c
extern unsigned int _ZN14LifecycleClass14instance_countE;
extern char g_401b0d;
extern char g_401b2b;
extern char g_401b47;
extern char g_401b63;
extern char g_401b7f;
extern char g_401b9c;
extern char g_401bb8;
extern char g_401bd4;
extern char g_401bf0;
extern char g_401c0c;
extern char g_401c29;
extern char g_401c46;
extern char g_401c71;
extern func_ptr_t g_412cf0;
extern func_ptr_t g_412d10;
extern func_ptr_2arg_t g_412d34;
extern func_ptr_2arg_t g_412d4c;
extern char g_412dbc;
extern unsigned int g_412dd4;
extern func_ptr_3arg_t g_412df0;

void test_cpp_oo_features()
{
 unsigned int v13; // r4
 unsigned int *ptr; // r0
 unsigned int i; // r1
 unsigned int v17; // r6
 unsigned int v18; // r0
 char *v21; // r5
 unsigned int v22; // r0
 unsigned int v0; // [bp-0x40], Other Possible Types: void*, unsigned int
 char v1[5]; // [bp-0x3c]
 func_ptr_t v2; // [bp-0x3c]
 func_ptr_3arg_t v3; // [bp-0x3c]
 func_ptr_2arg_t v4; // [bp-0x38], Other Possible Types: unsigned int
 unsigned int v5; // [bp-0x34]
 func_ptr_3arg_t v6; // [bp-0x30]
 unsigned int v8; // [bp-0x2c]
 unsigned short result; // [bp-0x20]
 char flag1; // [bp-0x1e]
 char flag2; // [bp-0x1d]
 func_ptr_t v12; // [bp-0x1c]

 puts(&g_401c71);
 v0 = 5;
 strncpy(v1, "Test", 5);
 v4 = (func_ptr_2arg_t)NULL;
 v5 = 0;
 memset(&v6, 0, 16);
 result = 0;
 flag1 = 0;
 v13 = 0;
 flag2 = 0;
 v0 = 10;
 printf(&g_401b0d, strlen(v1) + 4700);
 ptr = (unsigned int*)operator_new_array(20);
 i = 0;
 do
 {
 ((unsigned int*)ptr)[i] = v13;
 v13 += 10;
 i += 1;
 } while (i != 5);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 v17 = ((unsigned int*)ptr)[2];
 operator_delete_array(ptr);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 printf(&g_401b2b, v17 + _ZN14LifecycleClass14instance_countE + _ZN14LifecycleClass14instance_countE * 1000);
 v12 = g_412cf0;
 v2 = g_412d10;
 v0 = 3;
 v18 = g_412cf0((void*)&v12, 5, (void*)g_412cf0);
 printf(&g_401b47, v18 + v2((void*)&v2, 5, (void*)v2) + 21);
 v4 = g_412d4c;
 v5 = 200;
 v3 = g_412df0;
 v0 = 100;
 printf(&g_401b63, v4((void*)&v4, (void*)v4) + 31);
 v6 = g_412df0;
 v8 = 50;
 v0 = (unsigned int)&g_412dbc;
 v4 = (func_ptr_2arg_t)&g_412dd4;
 v21 = (char*)(void*)&v6;
 v22 = v6((void*)&v6, (void*)v6, (void*)&g_412dbc);
 ((unsigned int*)((char*)&v3 + 12))[0] = 100;
 printf(&g_401b7f, v6((void*)&v6, (void*)v6, (void*)v0) + v22);
 printf(&g_401b9c, 22);
 printf(&g_401bb8, 39);
 printf(&g_401bd4, 16);
 printf(&g_401bf0, 85);
 printf(&g_401c0c, test_cpp_exception());
 printf(&g_401c29, 703);
 printf(&g_401c46, test_cpp_rtti());
 return;
}


// Function: main at 0x401648
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _ZN4Base12virtual_funcEi at 0x40165c
void Base_virtual_func(void* this_ptr, int arg_0)
{
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x401664
void Derived_virtual_func(void* this_ptr, int arg_0)
{
 return;
}


// Function: _ZN4BaseD2Ev at 0x401670
void Base_D2Ev(void* this_ptr)
{
 return;
}


// Function: _ZN12MultiDerivedD2Ev at 0x401674
void MultiDerived_D2Ev(void* this_ptr)
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401678
void DiamondDerived_D1Ev(void* this_ptr)
{
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x40167c
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 > arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x401688
double template_max_double(double arg_0, double arg_1)
{
 if (arg_0 > arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4016bc
void template_swap_int(int *ptr, int *p)
{
 unsigned int v0; // r2

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4016d0
void Container_int_C2Ev(void* ptr)
{
 *((unsigned int *)&((char*)ptr)[40]) = 0;
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4016dc
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index; // r2
 unsigned int v1; // r3

 index = (int)((char*)ptr)[40];
 if (index <= 9)
 v1 = index + 1;
 *((unsigned int *)&((char*)ptr)[40]) = v1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4016f4
void Container_int_get(void* this_ptr, int arg_0)
{
 if (!((char)armg_calculate_condition(66, arg_0, 0, 0)))
 {
 goto LABEL_401704;
 }
 return;
LABEL_401704:
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401714
void Container_int_getSize(void* this_ptr)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x40171c
void Container_double_C1Ev(void* ptr)
{
 *((unsigned int *)&((char*)ptr)[80]) = 0;
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401728
void Container_double_push(void* ptr, double arg_0)
{
 unsigned int index; // r12
 unsigned int v1; // r2
 unsigned int v2; // r3
 double temp; // r0

 temp = arg_0;
 v1 = *(unsigned int*)&temp;
 v2 = *((unsigned int*)&temp + 1);
 index = (int)((char*)ptr)[80];
 if (9 >= index)
 {
  *((unsigned int *)((char *)ptr + 8 * index)) = v1;
  *((unsigned int *)(4 + (char *)ptr + 8 * index)) = v2;
  *((unsigned int *)&((char*)ptr)[80]) = index + 1;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x40174c
void Container_double_get(void* this_ptr, int arg_0)
{
 if (!((char)armg_calculate_condition(66, arg_0, 0, 0)))
 goto LABEL_401764;
 return;
LABEL_401764:
 if (arg_0 >= (int)((char*)this_ptr)[80])
 return;
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401778
void Container_double_getSize(void* this_ptr)
{
 return;
}


// Function: _ZNK4Base7getNameEv at 0x401780
void Base_getName(void* this_ptr)
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x401790
void Base_D0Ev(void* this_ptr)
{
 operator_delete(this_ptr);
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x4017a0
void Derived_getName(void* this_ptr)
{
 return;
}


// Function: _ZN7DerivedD0Ev at 0x4017b0
void Derived_D0Ev(void* this_ptr)
{
 operator_delete(this_ptr);
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x4017c0
void MultiDerived_funcA(void* this_ptr)
{
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x4017c8
void MultiDerived_D0Ev(void* this_ptr)
{
 operator_delete(this_ptr);
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x4017d8
void MultiDerived_funcB(void* this_ptr)
{
 return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x4017e0
unsigned int non_virtual_thunk_MultiDerived_funcB()
{
 return 40;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x4017e8
void non_virtual_thunk_MultiDerived_D1Ev(void* this)
{
 return;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x4017ec
void non_virtual_thunk_MultiDerived_D0Ev(void* a0)
{
 operator_delete((void*)((char*)a0 - 8));
 return;
}


// Function: _ZN5BaseA5funcAEv at 0x401800
void BaseA_funcA(void* this_ptr)
{
 return;
}


// Function: _ZN5BaseAD2Ev at 0x401808
void BaseA_D2Ev(void* this_ptr)
{
 return;
}


// Function: _ZN5BaseAD0Ev at 0x40180c
void BaseA_D0Ev(void* this_ptr)
{
 operator_delete(this_ptr);
 return;
}


// Function: _ZN5BaseB5funcBEv at 0x40181c
void BaseB_funcB(void* this_ptr)
{
 return;
}


// Function: _ZN5BaseBD2Ev at 0x401824
void BaseB_D2Ev(void* this_ptr)
{
 return;
}


// Function: _ZN5BaseBD0Ev at 0x401828
void BaseB_D0Ev(void* this_ptr)
{
 operator_delete(this_ptr);
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x401838
void MiddleA_func(void* this_ptr)
{
 return;
}


// Function: _ZN7MiddleAD1Ev at 0x401850
void MiddleA_D1Ev(void* this_ptr)
{
 return;
}


// Function: _ZN7MiddleAD0Ev at 0x401854
void MiddleA_D0Ev(void* this_ptr)
{
 operator_delete(this_ptr);
 return;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x401864
int thunk_to_MiddleA_func(void** a0)
{
 int *vtable = *(int **)a0;
 int offset = vtable[12];
 int *vtable2 = *(int **)((char *)a0 + offset);
 int offset2 = vtable2[-12];
 return *((int *)(4 + (char *)a0 + offset + offset2)) + 150;
}


// Function: _ZTv0_n16_N7MiddleAD1Ev at 0x401884
void thunk_MiddleA_D1Ev(void** a0)
{
 return;
}


// Function: _ZTv0_n16_N7MiddleAD0Ev at 0x401888
unsigned int thunk_to_MiddleA_D0Ev(void* *a0)
{
 operator_delete((void*)((char *)a0 + ((int*)(*a0))[16]));
 return 0;
}


// Function: _ZN7MiddleB4funcEv at 0x4018a4
void MiddleB_func(void* this_ptr)
{
 return;
}


// Function: _ZN7MiddleBD1Ev at 0x4018bc
void MiddleB_D1Ev(void* this_ptr)
{
 return;
}


// Function: _ZN7MiddleBD0Ev at 0x4018c0
void MiddleB_D0Ev(void* this_ptr)
{
 operator_delete(this_ptr);
 return;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x4018d0
int thunk_to_MiddleB_func(void* *a0)
{
 return *((int *)(4 + (char *)a0 + ((int*)(*a0))[12] + *((int *)(*((int *)((char *)a0 + ((int*)(*a0))[12])) - 12)))) + 200;
}


// Function: _ZTv0_n16_N7MiddleBD1Ev at 0x4018f0
void thunk_MiddleB_D1Ev(void** a0)
{
 return;
}


// Function: _ZTv0_n16_N7MiddleBD0Ev at 0x4018f4
unsigned int thunk_to_MiddleB_D0Ev(void* *a0)
{
 operator_delete((void*)((char *)a0 + ((int*)(*a0))[16]));
 return 0;
}


// Function: _ZN14DiamondDerived4funcEv at 0x401910
void DiamondDerived_func(void* this_ptr)
{
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x401928
void DiamondDerived_D0Ev(void* this_ptr)
{
 operator_delete(this_ptr);
 return;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x401938
int non_virtual_thunk_to_DiamondDerived_func(void* a0)
{
 return *((int *)(-4 + (char *)a0 + *((int *)((int)((int*)a0)[8] - 12)))) + 250;
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x401950
void non_virtual_thunk_DiamondDerived_D1Ev(void* a0)
{
 return;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x401954
unsigned int non_virtual_thunk_to_DiamondDerived_D0Ev(void* a0)
{
 operator_delete((void*)((char*)a0 - 8));
 return 0;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x401968
int thunk_to_DiamondDerived_func(void* *a0)
{
 return *((int *)(4 + (char *)a0 + ((int*)(*a0))[12] + *((int *)(*((int *)((char *)a0 + ((int*)(*a0))[12])) - 12)))) + 250;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x401988
void thunk_DiamondDerived_D1Ev(void** a0)
{
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x40198c
unsigned int thunk_to_DiamondDerived_D0Ev(void* *a0)
{
 operator_delete((void*)((char *)a0 + ((int*)(*a0))[16]));
 return 0;
}


// Function: _ZN11VirtualBase4funcEv at 0x4019a8
void VirtualBase_func(void* this_ptr)
{
 return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x4019b0
void VirtualBase_D2Ev(void* this_ptr)
{
 return;
}


// Function: _ZN11VirtualBaseD0Ev at 0x4019b4
void VirtualBase_D0Ev(void* this_ptr)
{
 operator_delete(this_ptr);
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x4019c4
void RTTIDerivedA_D0Ev(void* this_ptr)
{
 operator_delete(this_ptr);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x4019d4
void RTTIDerivedA_getType(void* this_ptr)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x4019dc
void RTTIBase_D2Ev(void* this_ptr)
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x4019e0
void RTTIDerivedB_D0Ev(void* this_ptr)
{
 operator_delete(this_ptr);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4019f0
void RTTIDerivedB_getType(void* this_ptr)
{
 return;
}

/* CRT stub function _fini removed by preprocessor */

