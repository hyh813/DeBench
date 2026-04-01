// Angr Decompilation of 5-1_gcc_O1_g
// Platform: ARMEL

#include <string.h>
#include <ios>
#include <cstdlib>

/* ARM EABI functions */
int __aeabi_d2iz(double d);
int __aeabi_dcmpge(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
int __aeabi_dcmpgt(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
int __aeabi_dcmplt(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
int __aeabi_dcmpun(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
int __aeabi_atexit(void* object, void (* destructor)(void*), void* dso_handle);

/* Forward declarations */
void operatordelete(void* ptr, unsigned int size);
void* operatornew(unsigned int size);
void* operator_new_array(unsigned int size);
void operator_delete_array(void* ptr);
void __stack_chk_fail(void);
int armg_calculate_condition(int cond, int r0, int r1, int r2);
void __cxa_end_cleanup(void);

/* Global variables */
unsigned int __glibc___stack_chk_guard = 0xdeadbeef;
unsigned int _ZN14LifecycleClass14instance_countE = 0;

/* Implementations of missing functions */
void* operatornew(unsigned int size) {
    return malloc(size);
}

void __stack_chk_fail(void) {
    abort();
}

int __aeabi_d2iz(double d) {
    return (int)d;
}

int __aeabi_dcmpgt(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3) {
    union { unsigned int u[2]; double d; } d1, d2;
    d1.u[0] = a0; d1.u[1] = a1;
    d2.u[0] = a2; d2.u[1] = a3;
    return d1.d > d2.d ? 1 : 0;
}

int armg_calculate_condition(int cond, int r0, int r1, int r2) {
    // Decompiler artifact - return the condition result
    return r0;
}

void __cxa_end_cleanup(void) {
    // C++ ABI stub
}

void operatordelete(void* ptr, unsigned int size) {
    free(ptr);
}

void* operator_new_array(unsigned int size) {
    return malloc(size);
}

void operator_delete_array(void* ptr) {
    free(ptr);
}

int __aeabi_atexit(void* object, void (* destructor)(void*), void* dso_handle) {
    // ARM EABI atexit stub - would normally register destructor
    return 0;
}

/* C++ ABI functions */
void* __cxa_allocate_exception(unsigned int size) {
    return malloc(size);
}

void __cxa_throw(void* exception, void* type_info, void* dest) {
    // C++ ABI stub - would normally unwind and terminate
    abort();
}

void* __cxa_begin_catch(void* exception_ptr) {
    return exception_ptr;
}

void __cxa_end_catch(void) {
    // C++ ABI stub
}

void __cxa_rethrow(void) {
    // C++ ABI stub - would normally rethrow exception
    abort();
}

/* Template functions */
int template_max_int(int arg_0, int arg_1);
double template_max_double(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
int template_swap_int(unsigned int *ptr);

/* CRT stub function _init removed by preprocessor */



// Function: sub_109bc at 0x109bc
extern unsigned int g_22008;

int sub_109bc()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 /* goto g_22008; - removed, invalid label */
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_10b40 at 0x10b40
void sub_10b40()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x10c00
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
 strncpy((char*)&v0, "Test", 31);
 result = 0;
 (void)strlen((char*)&v0);
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z20test_cpp_constructorv at 0x10c6c
extern unsigned int _ZN14LifecycleClass14instance_countE;

void test_cpp_constructor()
{
 unsigned int *ptr; // r0

 ptr = (unsigned int*)operator_new_array(20);
 ptr[1] = 10;
 ptr[2] = 20;
 ptr[3] = 30;
 ptr[4] = 40;
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 operator_delete_array(ptr);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x10cd0
typedef void (*VirtualFuncPtr)(void *);

void call_virtual_func(void *arg_0, int arg_1)
{
 VirtualFuncPtr vptr;
 vptr = *(VirtualFuncPtr*)arg_0;
 vptr(arg_0);
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x10ce4
extern unsigned int __glibc___stack_chk_guard;

void test_cpp_virtual_func()
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v3 = __glibc___stack_chk_guard;
 *((unsigned int *)&v0) = 71804;
 *((unsigned int *)&v1) = 71828;
 v2 = 3;
 call_virtual_func(&v0, 5);
 call_virtual_func(&v1, 5);
 if ((v3 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x10d68
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x10d70
extern unsigned int __glibc___stack_chk_guard;
extern unsigned int g_11934;
extern unsigned int g_1194c;
extern char g_11968;

typedef void (*VirtualFuncPtr)(void *);

void test_cpp_diamond_inheritance()
{
 unsigned int v0; // [bp-0x24]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v4 = __glibc___stack_chk_guard;
 v0 = 71988;
 v2 = 72040;
 v1 = 72012;
 v3 = 50;
 {
   VirtualFuncPtr fn = (VirtualFuncPtr)0x112b4;
   fn(&v2);
 }
 v3 = 100;
 {
   VirtualFuncPtr fn = (VirtualFuncPtr)0x112b4;
   fn(&v2);
 }
 if ((v4 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x10df4
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x10dfc
extern unsigned int __glibc___stack_chk_guard;

void test_cpp_template_func()
{
 unsigned int v3; // r0
 unsigned int v4; // r1
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]

 v2 = __glibc___stack_chk_guard;
 v3 = template_max_int(3, 7);
 v3 = template_max_double(0, 0x40040000, 0, 0x3ff80000);
 v3 = template_max_double(0, 0x40040000, 0, 0x3ff80000);
 v0 = 10;
 v1 = 20;
 /* Swap values manually */
 {
 unsigned int tmp = v0;
 v0 = v1;
 v1 = tmp;
 }
 v3 = __aeabi_d2iz(v3);
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z23test_cpp_template_classv at 0x10eac
void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x10eb4
void test_cpp_lambda()
{
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x10ebc
extern unsigned int _ZTIi;
extern unsigned int _ZTIZ18test_cpp_exceptionvE16DerivedException;

void test_cpp_exception()
{
 unsigned int *ptr; // r0
 unsigned int result; // r1
 unsigned int v6; // r2
 unsigned int v7; // r3
 void *v10; // r0
 char v0; // [bp-0x10]
 char v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp-0x4]

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, (void*)0x21e70, 0);
 if (result != 1)
 {
 if (!((char)armg_calculate_condition(18, result, 1, 0)))
 goto LABEL_10ee8;
 }
 else
 {
 if (!((char)armg_calculate_condition(18, result, 1, 0)))
 {
LABEL_10ee8:
 __cxa_rethrow();
 __cxa_end_catch();
 }
 }
 if (result != 1)
 __cxa_end_cleanup();
 v10 = __cxa_begin_catch(&result);
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), (void*)0x1199c, 0);
 if (result != 2)
 {
 if (result != 3)
 {
 __cxa_end_cleanup();
 }
 else
 {
 __cxa_begin_catch(&result);
 __cxa_end_catch();
 return;
 }
 }
 __cxa_begin_catch(&result);
 __cxa_end_catch();
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x10f78
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x10f84
extern char _ZTI12RTTIDerivedA;
extern char g_1197c;
extern char g_11990;

void test_cpp_rtti()
{
 void *p; // r5
 void *ptr; // r4
 unsigned int result; // r0
 char *cur; // r0

 p = operatornew(4);
 *((unsigned int*)p) = 72060;
 ptr = operatornew(4);
 *((unsigned int*)ptr) = 72080;
 result = 0;
 if (!result)
 {
 if (!armg_calculate_condition(18, result, 0, 0))
 goto LABEL_10fca;
LABEL_10fc9:
 ;
 }
 else
 {
 if (armg_calculate_condition(18, result, 0, 0))
 goto LABEL_10fc9;
LABEL_10fca:
 ;
 }
 cur = (char *)*((int *)((int)*((unsigned int**)p)[4] + 4));
 if (*((unsigned char*)cur) == 42)
 cur += 1;
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x11074
extern char g_115e4;
extern char g_11608;
extern char g_11644;
extern char g_11660;
extern char g_1167c;
extern char g_1169c;
extern char g_116b8;
extern char g_116d4;
extern char g_116f0;
extern char g_1170c;
extern char g_1172c;
extern char g_1174c;

void test_cpp_oo_features()
{
 (void)puts((const char*)0x115e4);
 test_cpp_member_func();
 test_cpp_constructor();
 test_cpp_virtual_func();
 test_cpp_multiple_inheritance();
 test_cpp_diamond_inheritance();
 __printf_chk(1, "%d", 22);
 test_cpp_template_func();
 __printf_chk(1, "%d", 16);
 __printf_chk(1, "%d", 85);
 test_cpp_exception();
 test_cpp_smart_ptr();
 test_cpp_rtti();
 return;
}


// Function: main at 0x1119c
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x111ac
extern int _ZStL8__ioinit;
extern unsigned int __dso_handle;

int _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 unsigned int v0; // r0

 ((void (*)(void*))0x22098)((void*)0x22098);
 v0 = __aeabi_atexit((void*)0x22098, (void (*)(void*))0x2208c, (void*)0x2208c);
 return __aeabi_atexit((void*)0x22098, (void (*)(void*))0x2208c, (void*)0x2208c);
}


// Function: _ZN4Base12virtual_funcEi at 0x111dc
void Base_virtual_func(void* _this, int arg_0)
{
 return;
}


// Function: _ZNK4Base7getNameEv at 0x111e4
int Base_getName(void* _this)
{
 return 0;
}


// Function: _ZN4BaseD1Ev at 0x111f0
void* Base_destructor(void* _this)
{
 return _this;
}


// Function: _ZN7Derived12virtual_funcEi at 0x111f4
void Derived_virtual_func(void* _this, int arg_0)
{
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x11200
int Derived_getName(void* _this)
{
 return 0;
}


// Function: _ZN12MultiDerived5funcAEv at 0x1120c
int MultiDerived_funcA(void* _this)
{
 return 0;
}


// Function: _ZN12MultiDerived5funcBEv at 0x11214
int MultiDerived_funcB(void* _this)
{
 return 0;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x1121c
void* thunk_MultiDerived_funcB()
{
 return (void*)(uintptr_t)40;
}


// Function: _ZN7MiddleA4funcEv at 0x11224
int MiddleA_func(void* _this)
{
 return 0;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x1123c
int thunk_MiddleA_func(void* *a0)
{
 return *((int *)(4 + (char *)a0 + ((unsigned int*)a0)[12] + *((int *)(*((int *)((char *)a0 + ((unsigned int*)a0)[12])) - 12)))) + 150;
}


// Function: _ZN7MiddleB4funcEv at 0x11260
int MiddleB_func(void* _this)
{
 return 0;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x11278
int thunk_MiddleB_func(void* *a0)
{
 return *((int *)(4 + (char *)a0 + ((unsigned int*)a0)[12] + *((int *)(*((int *)((char *)a0 + ((unsigned int*)a0)[12])) - 12)))) + 200;
}


// Function: _ZN14DiamondDerived4funcEv at 0x1129c
int DiamondDerived_func(void* _this)
{
 return 0;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x112b4
int thunk_DiamondDerived_func(void* *a0)
{
 return *((int *)(4 + (char *)a0 + ((unsigned int*)a0)[12] + *((int *)(*((int *)((char *)a0 + ((unsigned int*)a0)[12])) - 12)))) + 250;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x112d8
int non_virtual_thunk_DiamondDerived_func(void* a0)
{
 return *((int *)(-4 + (char *)a0 + *((int *)((int)((unsigned int*)a0)[8] - 12)))) + 250;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x112f0
int RTTIDerivedA_getType(void* _this)
{
 return 0;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x112f8
int RTTIDerivedB_getType(void* _this)
{
 return 0;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x11300
int RTTIDerivedB_destructor(void* _this)
{
 return 0;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x11304
int RTTIDerivedA_destructor(void* _this)
{
 return 0;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x11308
void* DiamondDerived_destructor(void* _this)
{
 return _this;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x1130c
void* thunk_DiamondDerived_destructor(void* a0)
{
 return (char *)a0 + ((unsigned int*)a0)[16];
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x1131c
int non_virtual_thunk_DiamondDerived_destructor(unsigned int a0)
{
 return a0 - 8;
}


// Function: _ZN12MultiDerivedD1Ev at 0x11324
int MultiDerived_destructor(void* _this)
{
 return 0;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x11328
void* non_virtual_thunk_MultiDerived_destructor(void* a0)
{
 return (void*)((uintptr_t)a0 - 8);
}


// Function: _ZN7DerivedD2Ev at 0x11330
int Derived_destructor(void* _this)
{
 return 0;
}


// Function: _ZN4BaseD0Ev at 0x11334
int Base_deleting_destructor(void* _this)
{
 operatordelete(_this, 4);
 return 0;
}


// Function: _ZN7DerivedD0Ev at 0x1134c
int Derived_deleting_destructor_2(void* _this)
{
 operatordelete(_this, 8);
 return 0;
}


// Function: _ZN12MultiDerivedD0Ev at 0x11364
int MultiDerived_deleting_destructor(void* _this)
{
 operatordelete(_this, 16);
 return 0;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x1137c
void* non_virtual_thunk_MultiDerived_deleting_destructor(void* a0)
{
 operatordelete((void*)((char*)a0 - 8), 16);
 return (void*)((char*)a0 - 8);
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x11398
int RTTIDerivedA_deleting_destructor(void* _this)
{
 operatordelete(_this, 4);
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x113b0
int RTTIDerivedB_deleting_destructor(void* _this)
{
 operatordelete(_this, 4);
 return 0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x113c8
int DiamondDerived_deleting_destructor(void* _this)
{
 operatordelete(_this, 24);
 return 0;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x113e0
void* * thunk_DiamondDerived_deleting_destructor(void* *a0)
{
 void* *v0; // r4

 v0 = (void**)((char *)a0 + ((unsigned int*)a0)[16]);
 operatordelete(v0, 24);
 return v0;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x11404
void* non_virtual_thunk_DiamondDerived_deleting_destructor(void* a0)
{
 operatordelete(a0 - 8, 24);
 return a0 - 8;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x11420
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 >= arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x1142c
double template_max_double(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int result;
 
 // a0,a1 = first double (low, high)
 // a2,a3 = second double (low, high)
 result = __aeabi_dcmpgt(a0, a1, a2, a3);
 if (!result)
 {
 if (!result)
 return a2;
 }
 else
 {
 if (!result)
 return a0;
 }
 return a0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x1145c
int template_swap_int(unsigned int *ptr)
{
 unsigned int v0; // r3
 unsigned int *p; // r1

 p = ptr + 1;
 v0 = *(ptr);
 *(ptr) = *(p);
 *(p) = v0;
 return (int)ptr;
}


// Function: _ZN9ContainerIiEC2Ev at 0x11470
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)&((char*)ptr)[40]) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x1147c
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index; // r3
 unsigned int v1; // r2

 index = (int)((unsigned int*)ptr)[10];
 if (index <= 9)
 v1 = index + 1;
 *((unsigned int *)&((char*)ptr)[40]) = v1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x11494
int Container_int_get(void* _this, int arg_0)
{
 if (arg_0 < 0)
 return 0;
 return 0;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x114c0
int Container_int_getSize(void* _this)
{
 return 0;
}


// Function: _ZN9ContainerIdEC1Ev at 0x114c8
int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)&((char*)ptr)[80]) = 0;
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x114d4
void Container_double_push(void* ptr)
{
 unsigned int v0; // r1
 unsigned int v1; // r12
 unsigned int v3; // r2
 unsigned int v4; // r3
 unsigned int v5; // r2
 unsigned int v6; // r3
 unsigned int* data_ptr;

 v0 = *((unsigned int *)((char*)ptr + 80));
 if (v0 <= 9)
 v1 = v0 + 1;
 *((unsigned int *)((char*)ptr + 80)) = v1;
 if (!armg_calculate_condition(210, v0, 9, 0))
 {
 if (!((char)armg_calculate_condition(210, v0, 9, 0)))
 goto LABEL_0x114ec;
 else
 goto LABEL_0x114ec;
 *((unsigned int *)ptr) = v5;
 *((unsigned int *)((char*)ptr + 4)) = v6;
 return;
 }
 if (!((char)armg_calculate_condition(210, v0, 9, 0)))
 goto LABEL_0x114ec;
 else
 goto LABEL_0x114ec;
LABEL_0x114ec:
 data_ptr = (unsigned int*)((char*)ptr + 8 * v0);
 data_ptr[0] = v3;
 data_ptr[1] = v4;
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x114f0
void Container_double_get(void* _this, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x11528
void Container_double_getSize(void* _this)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


