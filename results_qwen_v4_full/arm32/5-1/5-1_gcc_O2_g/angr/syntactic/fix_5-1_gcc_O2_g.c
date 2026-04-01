// Angr Decompilation of 5-1_gcc_O2_g
// Platform: ARMEL

#include <stdint.h>

// Missing function declarations
extern int armg_calculate_condition(unsigned int, unsigned int, unsigned int, unsigned int);
extern void operator_delete(void*, unsigned int);
extern void operatordelete(void*, unsigned int);
extern void* operatornew(unsigned int);
extern int __aeabi_dcmpgt();
extern int __aeabi_d2iz(unsigned int, unsigned int);
extern void __stack_chk_fail();
extern unsigned int __cxa_allocate_exception(unsigned int);
extern void __cxa_throw(void*, void*, void*, ...);
extern void* __cxa_begin_catch(void*);
extern void __cxa_end_catch(void*);
extern void __cxa_rethrow(void*);
extern void __cxa_end_cleanup();
extern int __aeabi_atexit(void*, void*, void*);
extern void strncpy(char*, const char*, unsigned int);
extern unsigned int strlen(const char*);
extern int puts(const char*);
extern int template_max_int(int, int);
extern double template_max_double(double, double);
extern int template_swap_int(unsigned int*, unsigned int*);
extern int __printf_chk(int, void*, ...);
extern void abort();

/* CRT stub function _init removed by preprocessor */



// Function: sub_1092c at 0x1092c
extern unsigned int g_22008;

int sub_1092c()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return 0;
}


// Function: _Z18test_cpp_exceptionv at 0x10a60
extern unsigned int _ZTIi;
extern unsigned int _ZTIZ18test_cpp_exceptionvE16DerivedException;

void test_cpp_exception()
{
 void *ptr; // r0
 unsigned int flag1; // r1
 unsigned int v14; // r2
 unsigned int v15; // r1
 void *v16; // r0
 unsigned int v6; // r2
 unsigned int v7; // r3
 void *result; // r4
 void *v10; // r0
 void *v11; // r0
 unsigned int v13; // r3
 char v0; // [bp-0x10]
 char v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp-0x4]

 ptr = (void *)__cxa_allocate_exception(4);
 *(unsigned int*)(ptr) = 42;
 __cxa_throw((void*)ptr, (void*)0x21e98, (void*)0);
 result = (void*)0;
 if (flag1 != 1)
 {
 if (!((char)armg_calculate_condition(18, flag1, 1, 0)))
 goto LABEL_10a90;
 }
 else
 {
 if (!((char)armg_calculate_condition(18, flag1, 1, 0)))
 {
LABEL_10a90:
 result = (void*)((intptr_t)flag1);
 __cxa_end_catch((void*)0);
 __cxa_rethrow((void*)0);
 __cxa_begin_catch((void*)0);
 }
 }
 if ((intptr_t)result == 1)
 {
  v10 = (void *)__cxa_begin_catch((void*)0);
 __cxa_end_catch((void*)0);
 v11 = (void *)__cxa_allocate_exception(1);
 __cxa_throw((void*)v11, (void*)0x1164c, (void*)0);
 if (flag1 == 2)
 {
 v16 = (void *)__cxa_begin_catch((void*)0);
 __cxa_end_catch((void*)0);
 return;
 }
 else if (flag1 == 3)
 {
 __cxa_end_catch((void*)0);
 __cxa_begin_catch((void*)0);
 return;
 }
 }
 else
 {
 result = (void*)0;
 }
 __cxa_end_cleanup();
 __cxa_end_catch((void*)0);
 __cxa_begin_catch((void*)0);
 return;
}


// Function: main at 0x10b18
extern void test_cpp_oo_features();

int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x10b28
extern unsigned int _ZStL8__ioinit;
extern unsigned int __dso_handle;

int _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 unsigned int v0; // r0

 return __aeabi_atexit(0x22090, (void*)0, 0x22084);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_10b90 at 0x10b90
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
extern unsigned int __glibc___stack_chk_guard;

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
 strlen(v0);
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z20test_cpp_constructorv at 0x10cbc
void test_cpp_constructor()
{
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x10cdc
class Base {
} Base;

void call_virtual_func(class Base *arg_0, int arg_1)
{
 goto *((int *)*((int *)(void*)arg_0));
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
extern unsigned int __glibc___stack_chk_guard;

void test_cpp_template_func()
{
 unsigned int v3; // r0
 unsigned int v4; // r1
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]

 v2 = __glibc___stack_chk_guard;
 template_max_int(3, 7);
 v3 = (unsigned int)template_max_double(0.0, 10.0);
 v0 = 10;
 v1 = 20;
 template_swap_int(&v0, &v1);
 __aeabi_d2iz(v3, v4);
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

extern char _ZTI12RTTIDerivedA;
extern char g_1162c;
extern char g_11640;

void test_cpp_rtti()
{
 void* ptr; // r5
 void* p; // r4
 struct_0 *v2; // r0
 unsigned int result; // r3
 char *cur; // r0

 ptr = (void*)operatornew(4);
 *(void**)ptr = (void*)0x1162c;
 p = (void*)operatornew(4);
 v2 = (struct_0*)(*(void**)ptr);
 *(void**)p = (void*)0x11640;
 result = 1;
 if (result)
 {
 if (!armg_calculate_condition(2, result, 0, 0))
 {
 }
 }
 else
 {
 if (armg_calculate_condition(2, result, 0, 0))
 {
 }
 }
 cur = (char*)((intptr_t)*(void**)ptr) + 4;
 if (*(cur) == 42)
 cur += 1;
 strlen(cur);
 ((void(*)(void**))((intptr_t)*(void**)ptr))(&ptr);
 ((void(*)(void**))((intptr_t)*(void**)p))(&p);
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x10ec8
extern unsigned int __glibc___stack_chk_guard;
extern char g_11474;
extern char g_11494;
extern char g_114b0;
extern char g_114cc;
extern char g_114e8;
extern char g_11508;
extern char g_11524;
extern char g_11540;
extern char g_1155c;
extern char g_11578;
extern char g_11598;
extern char g_115b8;

void test_cpp_oo_features()
{
 unsigned int v9; // r0
 char v0[1][31]; // [bp-0x2c]
 char result; // [bp-0xd]
 unsigned int v2; // [bp-0xc]

 v2 = __glibc___stack_chk_guard;
 puts("=== ");
 strncpy(v0[0], "Test", 31);
 result = 0;
 __printf_chk(1, (void*)0x11474, strlen(v0[0]) + 4700);
 test_cpp_constructor();
 __printf_chk(1, (void*)0x11494, 0);
 __printf_chk(1, (void*)0x114b0, 42);
 __printf_chk(1, (void*)0x114cc, 71);
 test_cpp_diamond_inheritance();
 __printf_chk(1, (void*)0x114e8, 0);
 __printf_chk(1, (void*)0x11508, 22);
 test_cpp_template_func();
 __printf_chk(1, (void*)0x11524, 0);
 __printf_chk(1, (void*)0x11540, 16);
 __printf_chk(1, (void*)0x1155c, 85);
 test_cpp_exception();
 __printf_chk(1, (void*)0x11578, 0);
 test_cpp_smart_ptr();
 __printf_chk(1, (void*)0x11598, 0);
 test_cpp_rtti();
 v9 = 0;
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 __printf_chk(1, (void*)0x115b8, v9);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x11048
void Base_virtual_func(void* this_ptr, int arg_0)
{
 return;
}


// Function: _ZNK4Base7getNameEv at 0x11050
void Base_getName(void* this_ptr)
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x1105c
void Base_D1Ev(void* this_ptr)
{
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x11060
void Derived_virtual_func(void* this_ptr, int arg_0)
{
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x1106c
void Derived_getName(void* this_ptr)
{
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x11078
void MultiDerived_funcA(void* this_ptr)
{
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x11080
void MultiDerived_funcB(void* this_ptr)
{
 return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x11088
void* non_virtual_thunk_to_MultiDerived_funcB()
{
 void* result = (void*)((intptr_t)40);
 return result;
}


// Function: _ZN7MiddleA4funcEv at 0x11090
void MiddleA_func(void* this_ptr)
{
 return;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x110a8
void* thunk_to_MiddleA_func(void** a0)
{
 void* result = (void*)((intptr_t)((int)*((int *)(4 + (char *)a0 + (intptr_t)((int*)((void*)(*(a0))))[12] + (intptr_t)*((int *)(*((int *)((char *)a0 + (intptr_t)((int*)((void*)(*(a0))))[12])) - 12))))) + (intptr_t)150);
 return result;
}


// Function: _ZN7MiddleB4funcEv at 0x110cc
void MiddleB_func(void* this_ptr)
{
 return;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x110e4
void* thunk_to_MiddleB_func(void** a0)
{
 void* result = (void*)((intptr_t)((int)*((int *)(4 + (char *)a0 + (intptr_t)((int*)((void*)(*(a0))))[12] + (intptr_t)*((int *)(*((int *)((char *)a0 + (intptr_t)((int*)((void*)(*(a0))))[12])) - 12))))) + (intptr_t)200);
 return result;
}


// Function: _ZN14DiamondDerived4funcEv at 0x11108
void DiamondDerived_func(void* this_ptr)
{
 return;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x11120
void* thunk_to_DiamondDerived_func(void** a0)
{
 void* result = (void*)((intptr_t)((int)*((int *)(4 + (char *)a0 + (intptr_t)((int*)((void*)(*(a0))))[12] + (intptr_t)*((int *)(*((int *)((char *)a0 + (intptr_t)((int*)((void*)(*(a0))))[12])) - 12))))) + (intptr_t)250);
 return result;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x11144
void* non_virtual_thunk_to_DiamondDerived_func(void* a0)
{
 void* result = (void*)((intptr_t)((int)*((int *)(-4 + (char *)a0 + (intptr_t)*((int *)((intptr_t)((char**)((void*)a0))[8] - 12))))) + (intptr_t)250);
 return result;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x1115c
void RTTIDerivedA_getType(void* this_ptr)
{
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x11164
void RTTIDerivedB_getType(void* this_ptr)
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x1116c
void RTTIDerivedB_D1Ev(void* this_ptr)
{
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x11170
void RTTIDerivedA_D1Ev(void* this_ptr)
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x11174
void DiamondDerived_D1Ev(void* this_ptr)
{
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x11178
void* thunk_to_DiamondDerived_D1Ev(void** a0)
{
 void* result = (void*)((char *)a0 + (intptr_t)((int)((int*)((void*)(*(a0))))[16]));
 return result;
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x11188
void* non_virtual_thunk_to_DiamondDerived_D1Ev(void* a0)
{
 void* result = (void*)((char*)a0 - 8);
 return result;
}


// Function: _ZN12MultiDerivedD1Ev at 0x11190
void MultiDerived_D1Ev(void* this_ptr)
{
 return;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x11194
void* non_virtual_thunk_to_MultiDerived_D1Ev(void* a0)
{
 void* result = (void*)((char*)a0 - 8);
 return result;
}


// Function: _ZN7DerivedD2Ev at 0x1119c
void Derived_D2Ev(void* this_ptr)
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x111a0
void Base_D0Ev(void* this_ptr)
{
 operator_delete(this_ptr, 4);
 return;
}


// Function: _ZN7DerivedD0Ev at 0x111b8
void Derived_D0Ev(void* this_ptr)
{
 operator_delete(this_ptr, 8);
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x111d0
void MultiDerived_D0Ev(void* this_ptr)
{
 operator_delete(this_ptr, 16);
 return;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x111e8
void* non_virtual_thunk_to_MultiDerived_D0Ev(void* a0)
{
 operatordelete((void*)((char*)a0 - 8), 16);
 void* result = (void*)((char*)a0 - 8);
 return result;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x11204
void RTTIDerivedB_D0Ev(void* this_ptr)
{
 operator_delete(this_ptr, 4);
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x1121c
void RTTIDerivedA_D0Ev(void* this_ptr)
{
 operator_delete(this_ptr, 4);
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x11234
void DiamondDerived_D0Ev(void* this_ptr)
{
 operator_delete(this_ptr, 24);
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x1124c
void* thunk_to_DiamondDerived_D0Ev(void** a0)
{
 void* v0; // r4

 v0 = (void*)((char *)a0 + (intptr_t)((int)((int*)((void*)(*(a0))))[16]));
 operatordelete((void*)v0, 24);
 return v0;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x11270
void* non_virtual_thunk_to_DiamondDerived_D0Ev(void* a0)
{
 operatordelete((void*)((char*)a0 - 8), 24);
 void* result = (void*)((char*)a0 - 8);
 return result;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x1128c
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 >= arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x11298
double template_max_double(double arg_0, double arg_1)
{
 if (arg_0 > arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x112c8
int template_swap_int(unsigned int *ptr, unsigned int *p)
{
 unsigned int v0; // r3

 v0 = *(ptr);
 *(ptr) = *(p);
 *(p) = v0;
 return (int)(intptr_t)ptr;
}


// Function: _ZN9ContainerIiEC2Ev at 0x112dc
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 40)) = 0;
 return (int)(intptr_t)ptr;
}


// Function: _ZN9ContainerIiE4pushEi at 0x112e8
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index; // r3
 unsigned int v1; // r2

 index = *((unsigned int *)((char*)ptr + 40));
 if (index <= 9)
 v1 = index + 1;
 *((unsigned int *)((char*)ptr + 40)) = v1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x11300
void Container_int_get(void* this_ptr, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x11324
void Container_int_getSize(void* this_ptr)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x1132c
int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 80)) = 0;
 return (int)(intptr_t)ptr;
}


// Function: _ZN9ContainerIdE4pushEd at 0x11338
void Container_double_push(void* p, unsigned int v2, unsigned int v3)
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


// Function: _ZNK9ContainerIdE3getEi at 0x11368
void Container_double_get(void* this_ptr, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x11394
void Container_double_getSize(void* this_ptr)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


