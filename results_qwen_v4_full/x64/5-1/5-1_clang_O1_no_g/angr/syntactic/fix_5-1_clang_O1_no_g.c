// Angr Decompilation of 5-1_clang_O1_no_g
// Platform: AMD64

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
 unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
 unsigned long long field_0;
} struct_1;

extern struct_0 *g_405fe8;

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)g_405fe8;
 if (g_405fe8)
 v1 = (unsigned long long *)g_405fe8->field_0;
 return v1;
}


// Function: sub_402020 at 0x402020
extern unsigned long long g_406008;
extern unsigned long long g_406010;

// Forward declarations
struct Base {
 unsigned long long field_0;
};
void test_cpp_member_func();
void test_cpp_constructor();
void call_virtual_func(struct Base *arg_0, int arg_1);
void test_cpp_virtual_func();
void test_cpp_multiple_inheritance();
void test_cpp_diamond_inheritance();
void test_cpp_operator_overload();
void test_cpp_template_func();
void test_cpp_template_class();
void test_cpp_lambda();
void test_cpp_exception();
void test_cpp_smart_ptr();
void test_cpp_rtti();
void test_cpp_oo_features();
long long Base_virtual_func(void* this, int arg);
long long MultiDerived_funcA(void* this);
long long MultiDerived_funcB(void* this);
long long MultiDerived_funcB_thunk(void* this);
void DiamondDerived_func(void* this);
int DiamondDerived_func_thunk(void* a0);
long long DiamondDerived_func_vthunk(void* v1);
void* operatornew(unsigned long size);
void* operatornew[](unsigned long size);
void operatordelete(void* ptr);
void operatordelete[](void* ptr);
int puts(const char *s);
int printf(const char *format, ...);
size_t strlen(const char *s);
char *strncpy(char *dest, const char *src, size_t n);
int strcmp(const char *s1, const char *s2);
void Derived_virtual_func(void* this, int arg_0);
int template_max_int(int arg_0, int arg_1);
double template_max_double(double arg_0, double arg_1);
void template_swap_int(int *ptr, int *p);
int Container_int_Constructor(void* ptr);
void Container_int_push(void* ptr, int arg_0);
void Container_int_get(void* this, int arg_0);
void Container_int_getSize(void* this);
int Container_double_Constructor(void* ptr);
void Container_double_push(void* ptr, double arg_0);
void Container_double_get(void* this, int arg_0);
void Container_double_getSize(void* this);
void Base_getName(void* this);
void Derived_getName(void* this);
void BaseA_funcA(void* this);
void BaseB_funcB(void* this);
void MiddleA_func(void* this);
int MiddleA_func_thunk(void* a0);
void MiddleB_func(void* this);
int MiddleB_func_thunk(void* a0);
void VirtualBase_func(void* this);
void RTTIDerivedA_getType(void* this);
void RTTIDerivedB_getType(void* this);

void sub_402020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_406008;
 return;
}


// Function: sub_40202c at 0x40202c
extern void* operatornew[](unsigned long size);
int sub_40202c()
{
 unsigned int v1 = 0; // rdi

 return (int)operatornew[](v1);
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x402150
extern char _ZNSt8ios_base4InitD1Ev;
extern void _ZStL8__ioinit;
extern unsigned long long __dso_handle;
extern int __cxa_atexit(void (*func)(void), void *arg, void *dso_handle);
extern void* __cxa_allocate_exception(unsigned long size);
extern void* __cxa_allocate_ex(unsigned long size);
extern void __cxa_throw(void* exc, void* type, void* dest);
extern void _Unwind_Resume(void* exc);
extern void* __cxa_begin_catch(void* exc);
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);

void _GLOBAL__sub_I_5_1.cpp()
{
 __cxa_atexit((void (*)(void))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, (void *)&__dso_handle);
 return;
}


// Function: sub_402178 at 0x402178
extern void _start();
void sub_402178(unsigned long a0, unsigned long a1, unsigned long a2)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4021a5 at 0x4021a5
void sub_4021a5()
{
 // Unsupported jumpkind Ijk_SigTRAP at address 4202917
}


// Function: sub_4021a6 at 0x4021a6
extern void deregister_tm_clones();
void sub_4021a6()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4021d9 at 0x4021d9
extern void register_tm_clones();
void sub_4021d9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_402219 at 0x402219
extern void __do_global_dtors_aux();
void sub_402219()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_402255 at 0x402255
void sub_402255()
{
}


// Function: sub_402259 at 0x402259
extern void frame_dummy();
void sub_402259()
{
 frame_dummy();
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
 strlen(v1);
 return;
}


// Function: sub_4022ac at 0x4022ac
void sub_4022ac()
{
 test_cpp_constructor();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x4022b0
extern unsigned int _ZN14LifecycleClass14instance_countE;
unsigned int _ZN14LifecycleClass14instance_countE = 0;
extern void* operatornew[](unsigned long size);
extern void operatordelete[](void* ptr);

void test_cpp_constructor()
{
 unsigned int *v1; // rax
 unsigned long long i; // rcx
 unsigned int *ptr; // rdx

 v1 = (unsigned int *)operatornew[](20);
 i = 0;
 ptr = v1;
 do
 {
 *(ptr) = (unsigned int)i;
 i += 10;
 ptr += 1;
 } while (i != 50);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 operatordelete[](v1);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: sub_402303 at 0x402303
void sub_402303(unsigned long a0)
{
 call_virtual_func(0, 0);
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x402310
void call_virtual_func(struct Base *arg_0, int arg_1)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v2 = arg_0->field_0;
 ((void (*)(void))(*(unsigned long long *)v2))();
 return;
}


// Function: sub_402318 at 0x402318
void sub_402318()
{
 test_cpp_virtual_func();
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x402320
extern char g_4059c8;
extern struct_0 *g_405a08;
extern long long Base_virtual_func(void* this, int arg);

void test_cpp_virtual_func()
{
 struct_0 **v0; // [bp-0x20]
 unsigned int v1; // [bp-0x18]
 unsigned long v2; // [bp-0x10]

 v2 = (unsigned long)&g_4059c8;
 v0 = (struct_0 **)&g_405a08;
 v1 = 3;
 Base_virtual_func((void*)&v2, 5);
 return;
}


// Function: sub_402373 at 0x402373
void sub_402373()
{
 test_cpp_multiple_inheritance();
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x402380
extern char g_405a50;
extern struct_0 *g_405a80;
extern long long MultiDerived_funcA(void* this);

void test_cpp_multiple_inheritance()
{
 unsigned long v0; // [bp-0x30]
 unsigned int v1; // [bp-0x28]
 struct_0 **v2; // [bp-0x20]
 unsigned int v3; // [bp-0x18]

 v0 = (unsigned long)&g_405a50;
 v2 = (struct_0 **)&g_405a80;
 v1 = 100;
 v3 = 200;
 MultiDerived_funcA((void*)&v0);
 return;
}


// Function: sub_4023d8 at 0x4023d8
void sub_4023d8()
{
 test_cpp_diamond_inheritance();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4023e0
extern char g_405b58;
extern unsigned long long g_405b88;
extern struct_0 *g_405bc0;
extern void DiamondDerived_func(void* this);

void test_cpp_diamond_inheritance()
{
 void* v0; // [bp-0x40]
 char v1; // [bp-0x38]
 unsigned long long v2; // [bp-0x30]
 struct_0 **v3; // [bp-0x20]
 unsigned int v4; // [bp-0x18]

 v0 = &g_405b58;
 v3 = (struct_0 **)&g_405bc0;
 v2 = (unsigned long)&g_405b88;
 v4 = 50;
 DiamondDerived_func((void*)v3);
 *((unsigned int *)((char*)&v1 + ((unsigned long long*)v0)[24])) = 100;
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
extern char _ZTIi;
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;

void test_cpp_exception()
{
 unsigned int *ptr; // rax
 unsigned long long v2; // r14
 unsigned int v3; // edx
 unsigned long long v4; // rdi
 unsigned long long v5; // rsi
 unsigned long long v6; // rdx
 unsigned long long v7; // rcx
 unsigned long long v8; // r8
 unsigned long long v9; // r9

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 v2 = (unsigned long long)ptr;
 if (v3 != 3 && v3 != 2)
 _Unwind_Resume((void*)v2); /* do not return */
 __cxa_begin_catch((void*)v2);
 __cxa_end_catch();
 return;
}


// Function: sub_4024bb at 0x4024bb

long long sub_4024bb(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 unsigned int result; // ebx
 unsigned long long v3; // rcx
 unsigned long long v4; // r8
 unsigned long long v5; // r9
 unsigned long long v6; // rax
 unsigned long long v7; // rcx
 unsigned long long v8; // r8
 unsigned long long v9; // r9

 result = (unsigned int)a2;
 if (result != 1)
 {
 if (result != 1)
 {
 __cxa_begin_catch((void*)v6);
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), (void*)&_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 }
 }
 __cxa_begin_catch((void*)v6);
 __cxa_rethrow();
 return 0;
}


// Function: sub_4024d8 at 0x4024d8
void sub_4024d8(unsigned long a0, unsigned long a1, unsigned long a2)
{
 __cxa_end_catch();
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
extern char g_405d78;
extern char g_405da0;
extern void* operatornew(unsigned long size);
extern void operatordelete(void* ptr);

void test_cpp_rtti()
{
 unsigned long long v2; // rax
 void* *p; // r14
 void* *ptr; // r13
 char *v5; // r15
 char result; // al
 unsigned long long v0; // [bp-0x38]

 p = (void**)operatornew(8);
 *(p) = &g_405d78;
 ptr = (void**)operatornew(8);
 *(ptr) = &g_405da0;
 v5 = (char*)((unsigned long long*)(*p))[1];
 if (strcmp((char*)((unsigned long long*)(*ptr))[1], "12RTTIDerivedB") == 0)
 {
 result = 1;
 }
 else if (*((char *)((unsigned long long*)(*ptr))[1]) == 42)
 {
 result = 0;
 }
 else
 {
 result = !strcmp((char*)((unsigned long long*)(*ptr))[1], "12RTTIDerivedB");
 }
 strlen(v5);
 operatordelete(p);
 operatordelete(ptr);
 return;
}


// Function: sub_40269a at 0x40269a
void sub_40269a()
{
 test_cpp_oo_features();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x4026a0
extern unsigned int _ZN14LifecycleClass14instance_countE;
extern char g_40307d;
extern char g_40309b;
extern char g_4030b7;
extern char g_4030d3;
extern char g_4030ef;
extern char g_40310c;
extern char g_403128;
extern char g_403144;
extern char g_403160;
extern char g_40317c;
extern char g_403199;
extern char g_4031b6;
extern char g_4031e1;
extern char g_4059c8;
extern struct_0 *g_405a08;
extern char g_405a50;
extern struct_0 *g_405a80;
extern char g_405b58;
extern unsigned long long g_405b88;
extern struct_1 *g_405bc0;
extern long long Base_virtual_func(void* this, int arg);
extern long long MultiDerived_funcB_thunk(void* this);
extern int DiamondDerived_func_thunk(void* this);

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

 puts(&g_4031e1);
 strncpy(&v4, "Test", 4);
 v7 = 0;
 result = 0;
 v5 = 10;
 i = 0;
 printf("%d", (unsigned int)strlen(&v4) + 4700);
 p = (unsigned int *)operatornew[](20);
 ptr = p;
 do
 {
 ptr[0] = (unsigned int)i;
 i += 10;
 ptr = &ptr[1];
 } while (i != 50);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 v19 = _ZN14LifecycleClass14instance_countE + p[2];
 operatordelete[](p);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 printf("%d", _ZN14LifecycleClass14instance_countE * 1000 + v19);
 v12 = (unsigned long)&g_4059c8;
 v2 = (struct_0 **)&g_405a08;
 v5 = 3;
 v20 = (unsigned int)Base_virtual_func((void*)&v12, 5);
 printf("%d", v20 + 21);
 v3 = (unsigned long)&g_405a50;
 v6 = (unsigned long)&g_405a80;
 v5 = 100;
 v8 = 200;
 printf("%d", (int)MultiDerived_funcB_thunk((void*)&v6) + 31);
 v0 = &g_405b58;
 v9 = (struct_1 **)&g_405bc0;
 v6 = (unsigned long)&g_405b88;
 v11 = 50;
 v23 = DiamondDerived_func_thunk((void*)v9);
 *((unsigned int *)((char *)&v5 + ((unsigned long long*)v0)[24])) = 100;
 printf("%d", (unsigned int)(v23 & 4294967295));
 printf("%d", 22);
 printf("%d", 39);
 printf("%d", 16);
 printf("%d", 85);
 printf("%d", 0);
 printf("%d", 703);
 printf("%d", 0);
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
long long Base_virtual_func(void* this, int arg)
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
void Derived_virtual_func(void* this, int arg_0)
{
 return;
}


// Function: sub_402917 at 0x402917
void sub_402917()
{
 return;
}


// Function: _ZN4BaseD2Ev at 0x402920
int Base_destructor(void* this)
{
 return 0;
}


// Function: sub_402921 at 0x402921
void sub_402921()
{
 return;
}


// Function: _ZN12MultiDerivedD2Ev at 0x402930
int MultiDerived_destructor(void* this)
{
 return 0;
}


// Function: sub_402931 at 0x402931
void sub_402931()
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x402940
int DiamondDerived_destructor(void* this)
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
 return (arg_0 > arg_1) ? arg_0 : arg_1;
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

 v1 = *ptr;
 *ptr = *p;
 *p = v1;
 return;
}


// Function: sub_402979 at 0x402979
void sub_402979(unsigned long a0)
{
 Container_int_Constructor(0);
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x402980
int Container_int_Constructor(void* ptr)
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

 index = (int)((unsigned int*)((char*)ptr + 40))[0];
 if (index <= 9)
 {
 ((unsigned int*)((char*)ptr + 40))[0] = (unsigned int)index + 1;
 ((int *)((char *)ptr + 4 * index))[0] = arg_0;
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
void Container_int_get(void* this, int arg_0)
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
void Container_int_getSize(void* this)
{
 return;
}


// Function: sub_4029d4 at 0x4029d4
void sub_4029d4(unsigned long a0)
{
 Container_double_Constructor(0);
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4029e0
int Container_double_Constructor(void* ptr)
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

 index = (int)((unsigned int*)((char*)ptr + 80))[0];
 if (index <= 9)
 {
 ((unsigned int*)((char*)ptr + 80))[0] = (unsigned int)index + 1;
 ((double *)((char *)ptr + 8 * index))[0] = arg_0;
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
void Container_double_get(void* this, int arg_0)
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
void Container_double_getSize(void* this)
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
void Base_getName(void* this)
{
 return;
}


// Function: sub_402a48 at 0x402a48
void sub_402a48()
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x402a50
int Base_destructor_delete(void* this)
{
 operatordelete(this);
 return 0;
}


// Function: sub_402a58 at 0x402a58
void sub_402a58()
{
 Derived_getName(0);
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x402a60
void Derived_getName(void* this)
{
 return;
}


// Function: sub_402a68 at 0x402a68
void sub_402a68()
{
 return;
}


// Function: _ZN7DerivedD0Ev at 0x402a70
int Derived_destructor_delete(void* this)
{
 operatordelete(this);
 return 0;
}


// Function: sub_402a78 at 0x402a78
void sub_402a78()
{
 MultiDerived_funcA(0);
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x402a80
long long MultiDerived_funcA(void* this)
{
 return 30;
}


// Function: sub_402a86 at 0x402a86
void sub_402a86()
{
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x402a90
int MultiDerived_destructor_delete(void* this)
{
 operatordelete(this);
 return 0;
}


// Function: sub_402a98 at 0x402a98
void sub_402a98()
{
 MultiDerived_funcB(0);
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x402aa0
void MultiDerived_funcB(void* this)
{
 return;
}


// Function: sub_402aa6 at 0x402aa6
void sub_402aa6()
{
 MultiDerived_funcB_thunk(0);
 return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x402ab0
long long MultiDerived_funcB_thunk(void* this)
{
 return 40;
}


// Function: sub_402ab6 at 0x402ab6
void sub_402ab6()
{
 return;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x402ac0
int MultiDerived_destructor_thunk(void* this)
{
 return 0;
}


// Function: sub_402ac1 at 0x402ac1
void sub_402ac1(unsigned long a0)
{
 return;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x402ad0
long long MultiDerived_destructor_delete_thunk(void* a0)
{
 unsigned long v1 = 0; // rax

 operatordelete((char*)a0 - 16);
 return v1;
}


// Function: sub_402adc at 0x402adc
void sub_402adc()
{
 BaseA_funcA(0);
 return;
}


// Function: _ZN5BaseA5funcAEv at 0x402ae0
void BaseA_funcA(void* this)
{
 return;
}


// Function: sub_402ae6 at 0x402ae6
void sub_402ae6()
{
 return;
}


// Function: _ZN5BaseAD2Ev at 0x402af0
int BaseA_destructor(void* this)
{
 return 0;
}


// Function: sub_402af1 at 0x402af1
void sub_402af1()
{
 return;
}


// Function: _ZN5BaseAD0Ev at 0x402b00
int BaseA_destructor_delete(void* this)
{
 operatordelete(this);
 return 0;
}


// Function: sub_402b08 at 0x402b08
void sub_402b08()
{
 BaseB_funcB(0);
 return;
}


// Function: _ZN5BaseB5funcBEv at 0x402b10
void BaseB_funcB(void* this)
{
 return;
}


// Function: sub_402b16 at 0x402b16
void sub_402b16()
{
 return;
}


// Function: _ZN5BaseBD2Ev at 0x402b20
int BaseB_destructor(void* this)
{
 return 0;
}


// Function: sub_402b21 at 0x402b21
void sub_402b21()
{
 return;
}


// Function: _ZN5BaseBD0Ev at 0x402b30
int BaseB_destructor_delete(void* this)
{
 operatordelete(this);
 return 0;
}


// Function: sub_402b38 at 0x402b38
void sub_402b38(unsigned long a0)
{
 MiddleA_func(0);
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x402b40
void MiddleA_func(void* this)
{
 return;
}


// Function: sub_402b51 at 0x402b51
void sub_402b51()
{
 return;
}


// Function: _ZN7MiddleAD1Ev at 0x402b60
int MiddleA_destructor(void* this)
{
 return 0;
}


// Function: sub_402b61 at 0x402b61
void sub_402b61()
{
 return;
}


// Function: _ZN7MiddleAD0Ev at 0x402b70
int MiddleA_destructor_delete(void* this)
{
 operatordelete(this);
 return 0;
}


// Function: sub_402b78 at 0x402b78
void sub_402b78(unsigned long a0)
{
 MiddleA_func_thunk(0);
 return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x402b80
int MiddleA_func_thunk(void* a0)
{
 return 150 + *((int *)(8 + *((long long *)(*((long long *)((char *)a0 + ((unsigned long long*)(a0))[24])) - 24)) + (char *)a0 + ((unsigned long long*)(a0))[24]));
}


// Function: sub_402b9d at 0x402b9d
void sub_402b9d()
{
 return;
}


// Function: _ZTv0_n32_N7MiddleAD1Ev at 0x402ba0
int MiddleA_destructor_thunk(void* this)
{
 return 0;
}


// Function: sub_402ba1 at 0x402ba1
void sub_402ba1(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N7MiddleAD0Ev at 0x402bb0
long long MiddleA_destructor_delete_thunk(void* a0)
{
 unsigned long v1 = 0; // rax

 operatordelete((char *)a0 + ((unsigned long long*)(a0))[32]);
 return v1;
}


// Function: sub_402bbf at 0x402bbf
void sub_402bbf(unsigned long a0)
{
 MiddleB_func(0);
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x402bc0
void MiddleB_func(void* this)
{
 return;
}


// Function: sub_402bd1 at 0x402bd1
void sub_402bd1()
{
 return;
}


// Function: _ZN7MiddleBD1Ev at 0x402be0
int MiddleB_destructor(void* this)
{
 return 0;
}


// Function: sub_402be1 at 0x402be1
void sub_402be1()
{
 return;
}


// Function: _ZN7MiddleBD0Ev at 0x402bf0
int MiddleB_destructor_delete(void* this)
{
 operatordelete(this);
 return 0;
}


// Function: sub_402bf8 at 0x402bf8
void sub_402bf8(unsigned long a0)
{
 MiddleB_func_thunk(0);
 return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x402c00
int MiddleB_func_thunk(void* a0)
{
 return 200 + *((int *)(8 + *((long long *)(*((long long *)((char *)a0 + ((unsigned long long*)(a0))[24])) - 24)) + (char *)a0 + ((unsigned long long*)(a0))[24]));
}


// Function: sub_402c1d at 0x402c1d
void sub_402c1d()
{
 return;
}


// Function: _ZTv0_n32_N7MiddleBD1Ev at 0x402c20
int MiddleB_destructor_thunk(void* this)
{
 return 0;
}


// Function: sub_402c21 at 0x402c21
void sub_402c21(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N7MiddleBD0Ev at 0x402c30
long long MiddleB_destructor_delete_thunk(void* a0)
{
 unsigned long v1 = 0; // rax

 operatordelete((char *)a0 + ((unsigned long long*)(a0))[32]);
 return v1;
}


// Function: sub_402c3f at 0x402c3f
void sub_402c3f(unsigned long a0)
{
 DiamondDerived_func(0);
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x402c40
void DiamondDerived_func(void* this)
{
 return;
}


// Function: sub_402c51 at 0x402c51
void sub_402c51()
{
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x402c60
int DiamondDerived_destructor_delete(void* this)
{
 operatordelete(this);
 return 0;
}


// Function: sub_402c68 at 0x402c68
void sub_402c68(unsigned long a0)
{
 DiamondDerived_func_thunk(0);
 return;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x402c70
int DiamondDerived_func_thunk(void* a0)
{
 return 250 + *((int *)(-8 + (char *)a0 + *((long long *)((long long)((unsigned long long*)a0)[16] - 24))));
}


// Function: sub_402c82 at 0x402c82
void sub_402c82()
{
 return;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x402c90
int DiamondDerived_destructor_thunk(void* this)
{
 return 0;
}


// Function: sub_402c91 at 0x402c91
void sub_402c91(unsigned long a0)
{
 return;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x402ca0
long long DiamondDerived_destructor_delete_thunk(void* a0)
{
 unsigned long v1 = 0; // rax

 operatordelete((char*)a0 - 16);
 return v1;
}


// Function: sub_402cac at 0x402cac
void sub_402cac(unsigned long a0)
{
 DiamondDerived_func_vthunk(0);
 return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x402cb0
long long DiamondDerived_func_vthunk(void* v1)
{
 return 250 + *((int *)(8 + *((long long *)(*((long long *)((char *)v1 + ((unsigned long long*)(v1))[24])) - 24)) + (char *)v1 + ((unsigned long long*)(v1))[24]));
}


// Function: sub_402ccd at 0x402ccd
void sub_402ccd()
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x402cd0
int DiamondDerived_destructor_vthunk(void* this)
{
 return 0;
}


// Function: sub_402cd1 at 0x402cd1
void sub_402cd1(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x402ce0
long long DiamondDerived_destructor_delete_vthunk(void* a0)
{
 unsigned long v1 = 0; // rax

 operatordelete((char *)a0 + ((unsigned long long*)(a0))[32]);
 return v1;
}


// Function: sub_402cef at 0x402cef
void sub_402cef()
{
 VirtualBase_func(0);
 return;
}


// Function: _ZN11VirtualBase4funcEv at 0x402cf0
void VirtualBase_func(void* this)
{
 return;
}


// Function: sub_402cf6 at 0x402cf6
void sub_402cf6()
{
 return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x402d00
int VirtualBase_destructor(void* this)
{
 return 0;
}


// Function: sub_402d01 at 0x402d01
void sub_402d01()
{
 return;
}


// Function: _ZN11VirtualBaseD0Ev at 0x402d10
int VirtualBase_destructor_delete(void* this)
{
 operatordelete(this);
 return 0;
}


// Function: sub_402d18 at 0x402d18
void sub_402d18()
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x402d20
int RTTIDerivedA_destructor_delete(void* this)
{
 operatordelete(this);
 return 0;
}


// Function: sub_402d28 at 0x402d28
void sub_402d28()
{
 RTTIDerivedA_getType(0);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x402d30
void RTTIDerivedA_getType(void* this)
{
 return;
}


// Function: sub_402d36 at 0x402d36
void sub_402d36()
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x402d40
int RTTIBase_destructor(void* this)
{
 return 0;
}


// Function: sub_402d41 at 0x402d41
void sub_402d41()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x402d50
int RTTIDerivedB_destructor_delete(void* this)
{
 operatordelete(this);
 return 0;
}


// Function: sub_402d58 at 0x402d58
void sub_402d58()
{
 RTTIDerivedB_getType(0);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x402d60
void RTTIDerivedB_getType(void* this)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


