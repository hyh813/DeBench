// Angr Decompilation of 5-1_clang_O1_g
// Platform: AMD64

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

/* Forward declarations for test functions */
void test_cpp_member_func(void);
void test_cpp_constructor(void);
void test_cpp_virtual_func(void);
void test_cpp_multiple_inheritance(void);
void test_cpp_diamond_inheritance(void);
void test_cpp_operator_overload(void);
void test_cpp_template_func(void);
void test_cpp_template_class(void);
void test_cpp_lambda(void);
void test_cpp_exception(void);
void test_cpp_rtti(void);
void test_cpp_oo_features(void);
void test_cpp_smart_ptr(void);
void call_virtual_func(struct Base *arg_0, int arg_1);

/* Forward declarations for C++ functions */
long long Base_virtual_func(void* this_ptr, int arg_0);
void Derived_virtual_func(void* this_ptr, int arg_0);
long long MultiDerived_funcA(void* this_ptr);
void MultiDerived_funcB(void* this_ptr);
long long thunk_MultiDerived_funcB(void*);
void DiamondDerived_func(void* this_ptr);
int thunk_DiamondDerived_func(void* a0);
long long thunk_DiamondDerived_func2(long long *a0);
int thunk_MiddleA_func(long long *a0);
int thunk_MiddleB_func(long long *a0);
void* operator_new_array(unsigned long size);
void operator_delete_array(void* ptr);
void* operator_new(unsigned long size);
void operator_delete(void* ptr);
void* __cxa_allocate_exception(unsigned long size);
void __cxa_throw(void* exc, void* type, void* dest);
void _Unwind_Resume(void* exc);
void* __cxa_begin_catch(void* exc);
void __cxa_end_catch(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5);
void __cxa_rethrow(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5);

/* Forward declarations for template and container functions */
int template_max_int(int arg_0, int arg_1);
double template_max_double(double arg_0, double arg_1);
void template_swap_int(int *ptr, int *p);
int Container_int_Container(void* ptr);
void Container_int_push(void* ptr, int arg_0);
void Container_int_get(void* this_ptr, int arg_0);
void Container_int_getSize(void* this_ptr);
int Container_double_Container(void* ptr);
void Container_double_push(void* ptr, double arg_0);
void Container_double_get(void* this_ptr, int arg_0);
void Container_double_getSize(void* this_ptr);
void Base_getName(void* this_ptr);
void Derived_getName(void* this_ptr);
void BaseA_funcA(void* this_ptr);
void BaseB_funcB(void* this_ptr);
void MiddleA_func(void* this_ptr);
void MiddleB_func(void* this_ptr);
void VirtualBase_func(void* this_ptr);
void RTTIDerivedA_getType(void* this_ptr);
void RTTIDerivedB_getType(void* this_ptr);

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
 unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
 unsigned long long field_0;
} struct_1;

struct Base {
 unsigned long long vtable;
};

struct Derived {
 unsigned long long vtable;
};

struct MultiDerived {
 unsigned long long vtable;
};

struct DiamondDerived {
 unsigned long long vtable;
};

/* Forward declarations for C++ mangled functions and variables */
extern void* _ZTIi;
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;
extern int _ZStL8__ioinit;
extern void* __dso_handle;

/* Forward declarations for C++ mangled functions */
#define _ZN4Base12virtual_funcEi Base_virtual_func
#define _ZN12MultiDerived5funcAEv MultiDerived_funcA
#define _ZThn16_N12MultiDerived5funcBEv thunk_MultiDerived_funcB
#define _ZThn16_N14DiamondDerived4funcEv thunk_DiamondDerived_func
void _ZNSt8ios_base4InitD1Ev(void*);
void _ZNSt8ios_base4InitC1Ev(void*);
int __cxa_atexit(void (*func)(void), void* arg, void* dso_handle);

struct_0 *g_405fe8 = 0;

/* Definition for LifecycleClass instance count */
unsigned int _ZN14LifecycleClass14instance_countE = 0;

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)g_405fe8;
 if (g_405fe8)
 v1 = (unsigned long long *)g_405fe8->field_0;
 return v1;
}


// Function: sub_402020 at 0x402020
unsigned long long g_406008 = 0;
unsigned long long g_406010 = 0;

void sub_402020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_406008;
 goto g_406010;
}


// Function: sub_40202c at 0x40202c
int sub_40202c()
{
 unsigned int v1 = 0; // rdi

 return (int)operator_new_array(v1);
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x402150
void _GLOBAL__sub_I_5_1.cpp()
{
 _ZNSt8ios_base4InitC1Ev(&_ZStL8__ioinit);
 __cxa_atexit((void (*)(void))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return;
}


// Function: sub_402178 at 0x402178
void sub_402178(unsigned long a0, unsigned long a1, unsigned long a2)
{
 return;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4021a5 at 0x4021a5
void sub_4021a5()
{
 // Unsupported jumpkind Ijk_SigTRAP at address 4202917
}


// Function: sub_4021a6 at 0x4021a6
void sub_4021a6()
{
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4021d9 at 0x4021d9
void sub_4021d9()
{
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_402219 at 0x402219
void sub_402219()
{
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_402255 at 0x402255
void sub_402255()
{
}


// Function: sub_402259 at 0x402259
void sub_402259()
{
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_402269 at 0x402269
void sub_402269()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x402270
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x28]
 char v1[15]; // [bp-0x24]
 unsigned long long flag1; // [bp-0x15]
 char result; // [bp-0x5]

 strncpy(v1, "Test", 4);
 flag1 = 0;
 result = 0;
 v0 = 10;
 (void)strlen(v1);
 return;
}


// Function: sub_4022ac at 0x4022ac
void sub_4022ac()
{
 test_cpp_constructor();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x4022b0

void test_cpp_constructor()
{
 unsigned int *v1; // rax
 unsigned long long i; // rcx
 unsigned int *ptr; // rdx

 v1 = operator_new_array(20);
 i = 0;
 ptr = v1;
 do
 {
 *(ptr) = i;
 i += 10;
 ptr += 1;
 } while (i != 50);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 operator_delete_array(v1);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: sub_402303 at 0x402303
void sub_402303(unsigned long a0)
{
 call_virtual_func((struct Base*)a0, 0);
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x402310

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v2 = arg_0->vtable;
 v0 = v2;
 ((void (*)(void*))(*(unsigned long long*)(arg_0->vtable)))(arg_0);
 return;
}


// Function: sub_402318 at 0x402318
void sub_402318()
{
 test_cpp_virtual_func();
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x402320
char g_4059c8 = 0;
struct_0 *g_405a08 = 0;

void test_cpp_virtual_func()
{
 struct_0 **v0; // [bp-0x20]
 unsigned int v1; // [bp-0x18]
 unsigned long v2; // [bp-0x10]

 v2 = (unsigned long)&g_4059c8;
 v0 = &g_405a08;
 v1 = 3;
 (void)_ZN4Base12virtual_funcEi((void*)v2, 5);
 ((void (*)(void**, int))(*v0))(v0, 5);
 return;
}


// Function: sub_402373 at 0x402373
void sub_402373()
{
 test_cpp_multiple_inheritance();
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x402380
char g_405a50 = 0;
struct_0 *g_405a80 = 0;

void test_cpp_multiple_inheritance()
{
 unsigned long v0; // [bp-0x30]
 unsigned int v1; // [bp-0x28]
 struct_0 **v2; // [bp-0x20]
 unsigned int v3; // [bp-0x18]

 v0 = (unsigned long)&g_405a50;
 v2 = &g_405a80;
 v1 = 100;
 v3 = 200;
 (void)_ZN12MultiDerived5funcAEv((void*)v0);
 ((void (*)(void**))(*v2))(v2);
 return;
}


// Function: sub_4023d8 at 0x4023d8
void sub_4023d8()
{
 test_cpp_diamond_inheritance();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4023e0
char g_405b58 = 0;
unsigned long long g_405b88 = 0;
struct_0 *g_405bc0 = 0;

void test_cpp_diamond_inheritance()
{
 void* v0; // [bp-0x40]
 char v1; // [bp-0x38]
 unsigned long long v2; // [bp-0x30]
 struct_0 **v3; // [bp-0x20]
 unsigned int v4; // [bp-0x18]

 v0 = &g_405b58;
 v3 = &g_405bc0;
 v2 = (unsigned long)&g_405b88;
 v4 = 50;
 (void)_ZThn16_N14DiamondDerived4funcEv(v0);
 *((unsigned int *)((char*)&v1 + ((unsigned long*)v0)[24])) = 100;
 ((void (*)(void**))(*v3))(v3);
 return;
}


// Function: sub_402446 at 0x402446
void sub_402446()
{
 test_cpp_operator_overload();
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x402450
void test_cpp_operator_overload()
{
 return;
}


// Function: sub_402456 at 0x402456
void sub_402456()
{
 test_cpp_template_func();
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x402460
void test_cpp_template_func()
{
 return;
}


// Function: sub_402466 at 0x402466
void sub_402466()
{
 test_cpp_template_class();
 return;
}


// Function: _Z23test_cpp_template_classv at 0x402470
void test_cpp_template_class()
{
 return;
}


// Function: sub_402476 at 0x402476
void sub_402476()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x402480
void test_cpp_lambda()
{
 return;
}


// Function: sub_402486 at 0x402486
void sub_402486()
{
 test_cpp_exception();
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x402490

void test_cpp_exception()
{
 unsigned int *ptr; // rax
 unsigned long long v2; // r14
 unsigned int v3 = 0; // edx
 unsigned long long v4 = 0; // rdi
 unsigned long long v5 = 0; // rsi
 unsigned long long v6 = 0; // rdx
 unsigned long long v7 = 0; // rcx
 unsigned long long v8 = 0; // r8
 unsigned long long v9 = 0; // r9

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 v2 = (unsigned long long)ptr;
 __cxa_throw(ptr, &_ZTIi, 0);
 if (v3 != 3 && v3 != 2)
 _Unwind_Resume((void*)v2); /* do not return */
 __cxa_begin_catch((void*)v2);
 __cxa_end_catch((void*)v4, (void*)v5, (void*)v6, (void*)v7, (void*)v8, (void*)v9);
 return;
}


// Function: sub_4024bb at 0x4024bb
long long sub_4024bb(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 unsigned int result; // ebx
 unsigned long long v3 = 0; // rcx
 unsigned long long v4 = 0; // r8
 unsigned long long v5 = 0; // r9
 unsigned long long v6 = 0; // rax
 unsigned long long v7 = 0; // rcx
 unsigned long long v8 = 0; // r8
 unsigned long long v9 = 0; // r9

 result = a2;
 if (result != 1)
 {
 if (result != 1)
 goto LABEL_0x402548;
 __cxa_begin_catch((void*)v6);
 __cxa_end_catch((void*)a0, (void*)a1, (void*)a2, (void*)v7, (void*)v8, (void*)v9);
 __cxa_throw(__cxa_allocate_exception(1), (void*)&_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 }
 __cxa_begin_catch((void*)v6);
 __cxa_rethrow((void*)a0, (void*)a1, (void*)a2, (void*)v3, (void*)v4, (void*)v5);
 return 0;
}


// Function: sub_4024d8 at 0x4024d8
void sub_4024d8(unsigned long a0, unsigned long a1, unsigned long a2)
{
 __cxa_end_catch(0, 0, 0, 0, 0, 0);
}


// Function: _Z18test_cpp_smart_ptrv at 0x402550
void test_cpp_smart_ptr()
{
 return;
}


// Function: sub_402556 at 0x402556
void sub_402556()
{
 test_cpp_rtti();
 return;
}


// Function: _Z13test_cpp_rttiv at 0x402560
char g_405d78 = 0;
char g_405da0 = 0;

void test_cpp_rtti()
{
 unsigned long long v2; // rax
 void* *p; // r14
 void* *ptr; // r13
 char *v5; // r15
 char result; // al
 unsigned long long v0; // [bp-0x38]

 v2 = 0;
 v0 = v2;
 p = (void**)operator_new(8);
 *(p) = &g_405d78;
 ptr = (void**)operator_new(8);
 *(ptr) = &g_405da0;
 v5 = (char*)*((long long *)((long long)(*(p))[8] + 8));
 if (*((long long *)((long long)(*(ptr))[8] + 8)) == (long long)"12RTTIDerivedB")
 {
 result = 1;
 }
 else if (*((char *)*((long long *)((long long)(*(ptr))[8] + 8))) == 42)
 {
 result = 0;
 }
 else
 {
 result = !strcmp((char*)*((long long *)((long long)(*(ptr))[8] + 8)), "12RTTIDerivedB");
 }
 strlen(v5);
 ((void (*)(void*))((long long)(*(p))[8]))(p);
 ((void (*)(void*))((long long)(*(ptr))[8]))(ptr);
 return;
}


// Function: sub_40269a at 0x40269a
void sub_40269a()
{
 test_cpp_oo_features();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x4026a0
const char *g_40307d = 0;
const char *g_40309b = 0;
const char *g_4030b7 = 0;
const char *g_4030d3 = 0;
const char *g_4030ef = 0;
const char *g_40310c = 0;
const char *g_403128 = 0;
const char *g_403144 = 0;
const char *g_403160 = 0;
const char *g_40317c = 0;
const char *g_403199 = 0;
const char *g_4031b6 = 0;
const char *g_4031e1 = 0;

void test_cpp_oo_features()
{
 unsigned long long i; // rbx
 unsigned int *p; // rax
 unsigned int *ptr; // rcx
 unsigned long v19; // rbx
 unsigned int v20; // eax
 unsigned long long v23; // rax
 void* v0; // [bp-0x48]
 struct_0 **v2; // [bp-0x48]
 unsigned long v3; // [bp-0x48]
 char v4; // [bp-0x44]
 unsigned int v5; // [bp-0x40]
 unsigned long v6; // [bp-0x38]
 unsigned long long v7; // [bp-0x35]
 unsigned int v8; // [bp-0x30]
 struct_1 **v9; // [bp-0x28]
 char result; // [bp-0x25]
 unsigned int v11; // [bp-0x20]
 unsigned long v12; // [bp-0x18]

 puts(g_4031e1);
 strncpy(&v4, "Test", 4);
 v7 = 0;
 result = 0;
 v5 = 10;
 i = 0;
 printf(g_40307d, (unsigned int)strlen(&v4) + 4700);
 p = (unsigned int *)operator_new_array(20);
 ptr = p;
 do
 {
 ptr[0] = (unsigned int)i;
 i += 10;
 ptr = &ptr[1];
 } while (i != 50);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 v19 = _ZN14LifecycleClass14instance_countE + p[2];
 operator_delete_array(p);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 printf(g_40309b, _ZN14LifecycleClass14instance_countE * 1000 + v19);
 v12 = (unsigned long)&g_4059c8;
 v2 = &g_405a08;
 v5 = 3;
 v20 = _ZN4Base12virtual_funcEi((void*)v12, 5);
 printf(g_4030b7, v20 + ((void (*)(void**, int))(*v2))(v2, 5) + 21);
 v3 = (unsigned long)&g_405a50;
 v6 = (unsigned long)&g_405a80;
 v5 = 100;
 v8 = 200;
 printf(g_4030d3, (int)_ZThn16_N12MultiDerived5funcBEv((void*)v6) + 31);
 v0 = &g_405b58;
 v9 = &g_405bc0;
 v6 = (unsigned long)&g_405b88;
 v11 = 50;
 v23 = _ZThn16_N14DiamondDerived4funcEv((void*)v0);
 *((unsigned int *)((char *)&v5 + ((unsigned long*)v0)[24])) = 100;
 printf(g_4030ef, (unsigned int)(v23 & 4294967295) + (unsigned int)(((void (*)(void**))(*v9))(v9) & 4294967295));
 printf(g_40310c, 22);
 printf(g_403128, 39);
 printf(g_403144, 16);
 printf(g_403160, 85);
 test_cpp_exception();
 printf(g_40317c, 0);
 printf(g_403199, 703);
 test_cpp_rtti();
 printf(g_4031b6, 0);
 return;
}


// Function: sub_4028ec at 0x4028ec
void sub_4028ec()
{
 main();
 return;
}


// Function: main at 0x4028f0
unsigned int main()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v2 = 0;
 v0 = v2;
 test_cpp_oo_features();
 return 0;
}


// Function: sub_4028fa at 0x4028fa
void sub_4028fa(unsigned long a0, unsigned long a1)
{
 Base_virtual_func(0, 0);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x402900
long long Base_virtual_func(void* this_ptr, int arg_0)
{
 unsigned int v1 = 0; // esi

 return v1 + 1;
}


// Function: sub_402904 at 0x402904
void sub_402904(unsigned long a0, unsigned long a1)
{
 Derived_virtual_func(0, 0);
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x402910
void Derived_virtual_func(void* this_ptr, int arg_0)
{
 return;
}


// Function: sub_402917 at 0x402917
void sub_402917()
{
 return;
}


// Function: _ZN4BaseD2Ev at 0x402920
int Base_D2Ev(void* this_ptr)
{
 return 0;
}


// Function: sub_402921 at 0x402921
void sub_402921()
{
 return;
}


// Function: _ZN12MultiDerivedD2Ev at 0x402930
int MultiDerived_D2Ev(void* this_ptr)
{
 return 0;
}


// Function: sub_402931 at 0x402931
void sub_402931()
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x402940
int DiamondDerived_D1Ev(void* this_ptr)
{
 return 0;
}


// Function: sub_402941 at 0x402941
void sub_402941(unsigned long a0, unsigned long a1)
{
 template_max_int(0, 0);
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x402950
int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: sub_402958 at 0x402958
void sub_402958()
{
 template_max_double(0.0, 0.0);
 return;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x402960
double template_max_double(double arg_0, double arg_1)
{
 (void)arg_0;
 (void)arg_1;
 return 0.0;
}


// Function: sub_402965 at 0x402965
void sub_402965(unsigned long a0, unsigned long a1)
{
 template_swap_int(0, 0);
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x402970
void template_swap_int(int *ptr, int *p)
{
 unsigned int v1; // eax

 v1 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v1;
 return;
}


// Function: sub_402979 at 0x402979
void sub_402979(unsigned long a0)
{
 Container_int_Container(0);
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x402980
int Container_int_Container(void* ptr)
{
 *((unsigned int *)((char*)ptr + 40)) = 0;
 return 0;
}


// Function: sub_402988 at 0x402988
void sub_402988(unsigned long a0)
{
 Container_int_push(0, 0);
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x402990
void Container_int_push(void* ptr, int arg_0)
{
 unsigned long index; // rax

 index = (int)*((unsigned int *)((char*)ptr + 40));
 if (index <= 9)
 {
 *((unsigned int *)((char*)ptr + 40)) = (unsigned int)index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: sub_4029a4 at 0x4029a4
void sub_4029a4(unsigned long a0, unsigned long a1)
{
 Container_int_get(0, 0);
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4029b0
void Container_int_get(void* this_ptr, int arg_0)
{
 return;
}


// Function: sub_4029c2 at 0x4029c2
void sub_4029c2(unsigned long a0)
{
 Container_int_getSize(0);
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4029d0
void Container_int_getSize(void* this_ptr)
{
 return;
}


// Function: sub_4029d4 at 0x4029d4
void sub_4029d4(unsigned long a0)
{
 Container_double_Container(0);
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4029e0
int Container_double_Container(void* ptr)
{
 *((unsigned int *)((char*)ptr + 80)) = 0;
 return 0;
}


// Function: sub_4029e8 at 0x4029e8
void sub_4029e8(unsigned long a0)
{
 Container_double_push(0, 0.0);
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x4029f0
void Container_double_push(void* ptr, double arg_0)
{
 unsigned long index; // rax

 index = (int)*((unsigned int *)((char*)ptr + 80));
 if (index <= 9)
 {
 *((unsigned int *)((char*)ptr + 80)) = (unsigned int)index + 1;
 *((double *)((char *)ptr + 8 * index)) = arg_0;
 }
 return;
}


// Function: sub_402a06 at 0x402a06
void sub_402a06(unsigned long a0, unsigned long a1)
{
 Container_double_get(0, 0);
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x402a10
void Container_double_get(void* this_ptr, int arg_0)
{
 return;
}


// Function: sub_402a25 at 0x402a25
void sub_402a25(unsigned long a0)
{
 Container_double_getSize(0);
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x402a30
void Container_double_getSize(void* this_ptr)
{
 return;
}


// Function: sub_402a34 at 0x402a34
void sub_402a34()
{
 Base_getName(0);
 return;
}


// Function: _ZNK4Base7getNameEv at 0x402a40
void Base_getName(void* this_ptr)
{
 return;
}


// Function: sub_402a48 at 0x402a48
void sub_402a48()
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x402a50
int Base_D0Ev(void* this_ptr)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v2 = 0;
 v0 = v2;
 operator_delete(this_ptr);
 return 0;
}


// Function: sub_402a58 at 0x402a58
void sub_402a58()
{
 Derived_getName(0);
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x402a60
void Derived_getName(void* this_ptr)
{
 return;
}


// Function: sub_402a68 at 0x402a68
void sub_402a68()
{
 return;
}


// Function: _ZN7DerivedD0Ev at 0x402a70
int Derived_D0Ev(void* this_ptr)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v2 = 0;
 v0 = v2;
 operator_delete(this_ptr);
 return 0;
}


// Function: sub_402a78 at 0x402a78
void sub_402a78()
{
 MultiDerived_funcA(0);
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x402a80
long long MultiDerived_funcA(void* this_ptr)
{
 return 30;
}


// Function: sub_402a86 at 0x402a86
void sub_402a86()
{
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x402a90
int MultiDerived_D0Ev(void* this_ptr)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v2 = 0;
 v0 = v2;
 operator_delete(this_ptr);
 return 0;
}


// Function: sub_402a98 at 0x402a98
void sub_402a98()
{
 MultiDerived_funcB(0);
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x402aa0
void MultiDerived_funcB(void* this_ptr)
{
 return;
}


// Function: sub_402aa6 at 0x402aa6
void sub_402aa6()
{
 // non-virtual thunk to MultiDerived::funcB()
 return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x402ab0
long long thunk_MultiDerived_funcB(void* this_ptr)
{
 return 40;
}


// Function: sub_402ab6 at 0x402ab6
void sub_402ab6()
{
 return;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x402ac0
void thunk_MultiDerived_D1Ev()
{
 return;
}


// Function: sub_402ac1 at 0x402ac1
void sub_402ac1(unsigned long a0)
{
 return;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x402ad0
long long thunk_MultiDerived_D0Ev(void* a0)
{
 unsigned long v1 = 0; // rax

 operator_delete((char*)a0 - 16);
 return v1;
}


// Function: sub_402adc at 0x402adc
void sub_402adc()
{
 BaseA_funcA(0);
 return;
}


// Function: _ZN5BaseA5funcAEv at 0x402ae0
void BaseA_funcA(void* this_ptr)
{
 return;
}


// Function: sub_402ae6 at 0x402ae6
void sub_402ae6()
{
 return;
}


// Function: _ZN5BaseAD2Ev at 0x402af0
int BaseA_D2Ev(void* this_ptr)
{
 return 0;
}


// Function: sub_402af1 at 0x402af1
void sub_402af1()
{
 return;
}


// Function: _ZN5BaseAD0Ev at 0x402b00
int BaseA_D0Ev(void* this_ptr)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 operator_delete(this_ptr);
 return 0;
}


// Function: sub_402b08 at 0x402b08
void sub_402b08()
{
 BaseB_funcB(0);
 return;
}


// Function: _ZN5BaseB5funcBEv at 0x402b10
void BaseB_funcB(void* this_ptr)
{
 return;
}


// Function: sub_402b16 at 0x402b16
void sub_402b16()
{
 return;
}


// Function: _ZN5BaseBD2Ev at 0x402b20
int BaseB_D2Ev(void* this_ptr)
{
 return 0;
}


// Function: sub_402b21 at 0x402b21
void sub_402b21()
{
 return;
}


// Function: _ZN5BaseBD0Ev at 0x402b30
int BaseB_D0Ev(void* this_ptr)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 operator_delete(this_ptr);
 return 0;
}


// Function: sub_402b38 at 0x402b38
void sub_402b38(unsigned long a0)
{
 MiddleA_func(0);
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x402b40
void MiddleA_func(void* this_ptr)
{
 return;
}


// Function: sub_402b51 at 0x402b51
void sub_402b51()
{
 return;
}


// Function: _ZN7MiddleAD1Ev at 0x402b60
int MiddleA_D1Ev(void* this_ptr)
{
 return 0;
}


// Function: sub_402b61 at 0x402b61
void sub_402b61()
{
 return;
}


// Function: _ZN7MiddleAD0Ev at 0x402b70
int MiddleA_D0Ev(void* this_ptr)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v2 = 0;
 v0 = v2;
 operator_delete(this_ptr);
 return 0;
}


// Function: sub_402b78 at 0x402b78
void sub_402b78(unsigned long a0)
{
 thunk_MiddleA_func(0);
 return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x402b80
int thunk_MiddleA_func(long long *a0)
{
 long long offset = a0[24];
 long long base = *((long long *)((char *)a0 + offset));
 long long adj = base - 24;
 long long *ptr = (long long *)adj;
 return 150 + *((int *)(8 + (long long)ptr + (char *)a0 + offset));
}


// Function: sub_402b9d at 0x402b9d
void sub_402b9d()
{
 return;
}


// Function: _ZTv0_n32_N7MiddleAD1Ev at 0x402ba0
void thunk_MiddleA_D1Ev()
{
 return;
}


// Function: sub_402ba1 at 0x402ba1
void sub_402ba1(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N7MiddleAD0Ev at 0x402bb0
long long thunk_MiddleA_D0Ev(long long *a0)
{
 unsigned long v1 = 0; // rax

 operator_delete((char *)a0 + a0[32]);
 return v1;
}


// Function: sub_402bbf at 0x402bbf
void sub_402bbf(unsigned long a0)
{
 MiddleB_func(0);
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x402bc0
void MiddleB_func(void* this_ptr)
{
 return;
}


// Function: sub_402bd1 at 0x402bd1
void sub_402bd1()
{
 return;
}


// Function: _ZN7MiddleBD1Ev at 0x402be0
int MiddleB_D1Ev(void* this_ptr)
{
 return 0;
}


// Function: sub_402be1 at 0x402be1
void sub_402be1()
{
 return;
}


// Function: _ZN7MiddleBD0Ev at 0x402bf0
int MiddleB_D0Ev(void* this_ptr)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v2 = 0;
 v0 = v2;
 operator_delete(this_ptr);
 return 0;
}


// Function: sub_402bf8 at 0x402bf8
void sub_402bf8(unsigned long a0)
{
 thunk_MiddleB_func(0);
 return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x402c00
int thunk_MiddleB_func(long long *a0)
{
 long long offset = a0[24];
 long long base = *((long long *)((char *)a0 + offset));
 long long adj = base - 24;
 long long *ptr = (long long *)adj;
 return 200 + *((int *)(8 + (long long)ptr + (char *)a0 + offset));
}


// Function: sub_402c1d at 0x402c1d
void sub_402c1d()
{
 return;
}


// Function: _ZTv0_n32_N7MiddleBD1Ev at 0x402c20
void thunk_MiddleB_D1Ev()
{
 return;
}


// Function: sub_402c21 at 0x402c21
void sub_402c21(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N7MiddleBD0Ev at 0x402c30
long long thunk_MiddleB_D0Ev(long long *a0)
{
 unsigned long v1 = 0; // rax

 operator_delete((char *)a0 + a0[32]);
 return v1;
}


// Function: sub_402c3f at 0x402c3f
void sub_402c3f(unsigned long a0)
{
 DiamondDerived_func(0);
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x402c40
void DiamondDerived_func(void* this_ptr)
{
 return;
}


// Function: sub_402c51 at 0x402c51
void sub_402c51()
{
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x402c60
int DiamondDerived_D0Ev(void* this_ptr)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v2 = 0;
 v0 = v2;
 operator_delete(this_ptr);
 return 0;
}


// Function: sub_402c68 at 0x402c68
void sub_402c68(unsigned long a0)
{
 thunk_DiamondDerived_func(0);
 return;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x402c70
int thunk_DiamondDerived_func(void* a0)
{
 unsigned long long *ull_a0 = (unsigned long long *)a0;
 long long val = (long long)ull_a0[16] - 24;
 long long *ptr = (long long *)val;
 return 250 + *((int *)(-8 + (char *)a0 + (long long)ptr));
}


// Function: sub_402c82 at 0x402c82
void sub_402c82()
{
 return;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x402c90
void thunk_DiamondDerived_D1Ev()
{
 return;
}


// Function: sub_402c91 at 0x402c91
void sub_402c91(unsigned long a0)
{
 return;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x402ca0
long long thunk_DiamondDerived_D0Ev(void* a0)
{
 unsigned long v1 = 0; // rax

 operator_delete((char*)a0 - 16);
 return v1;
}


// Function: sub_402cac at 0x402cac
void sub_402cac(unsigned long a0)
{
 thunk_DiamondDerived_func2(0);
 return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x402cb0
long long thunk_DiamondDerived_func2(long long *a0)
{
 long long *v1 = a0; // rdi
 long long offset = v1[24];
 long long base = *((long long *)((char *)v1 + offset));
 long long adj = base - 24;
 long long *ptr = (long long *)adj;
 return 250 + *((int *)(8 + (long long)ptr + (char *)v1 + offset));
}


// Function: sub_402ccd at 0x402ccd
void sub_402ccd()
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x402cd0
void thunk_DiamondDerived_D1Ev2()
{
 return;
}


// Function: sub_402cd1 at 0x402cd1
void sub_402cd1(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x402ce0
long long thunk_DiamondDerived_D0Ev2(long long *a0)
{
 unsigned long v1 = 0; // rax

 operator_delete((char *)a0 + a0[32]);
 return v1;
}


// Function: sub_402cef at 0x402cef
void sub_402cef()
{
 VirtualBase_func(0);
 return;
}


// Function: _ZN11VirtualBase4funcEv at 0x402cf0
void VirtualBase_func(void* this_ptr)
{
 return;
}


// Function: sub_402cf6 at 0x402cf6
void sub_402cf6()
{
 return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x402d00
int VirtualBase_D2Ev(void* this_ptr)
{
 return 0;
}


// Function: sub_402d01 at 0x402d01
void sub_402d01()
{
 return;
}


// Function: _ZN11VirtualBaseD0Ev at 0x402d10
int VirtualBase_D0Ev(void* this_ptr)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v2 = 0;
 v0 = v2;
 operator_delete(this_ptr);
 return 0;
}


// Function: sub_402d18 at 0x402d18
void sub_402d18()
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x402d20
int RTTIDerivedA_D0Ev(void* this_ptr)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v2 = 0;
 v0 = v2;
 operator_delete(this_ptr);
 return 0;
}


// Function: sub_402d28 at 0x402d28
void sub_402d28()
{
 RTTIDerivedA_getType(0);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x402d30
void RTTIDerivedA_getType(void* this_ptr)
{
 return;
}


// Function: sub_402d36 at 0x402d36
void sub_402d36()
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x402d40
int RTTIBase_D2Ev(void* this_ptr)
{
 return 0;
}


// Function: sub_402d41 at 0x402d41
void sub_402d41()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x402d50
int RTTIDerivedB_D0Ev(void* this_ptr)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v2 = 0;
 v0 = v2;
 operator_delete(this_ptr);
 return 0;
}


// Function: sub_402d58 at 0x402d58
void sub_402d58()
{
 RTTIDerivedB_getType(0);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x402d60
void RTTIDerivedB_getType(void* this_ptr)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


