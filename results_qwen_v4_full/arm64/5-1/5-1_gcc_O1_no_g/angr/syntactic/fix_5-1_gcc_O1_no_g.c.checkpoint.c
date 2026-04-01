// Angr Decompilation of 5-1_gcc_O1_no_g
// Platform: AARCH64

#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/* CRT stub function _init removed by preprocessor */


// Forward declarations for implicitly declared functions
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
long long frame_dummy(void);
void __stack_chk_fail(void);
void DiamondDerived_func(void* a0, ...);
int template_max_int(int arg_0, int arg_1);
double template_max_double(double arg_0, double arg_1);
unsigned int* template_swap_int(unsigned int *ptr, unsigned int *p);
void* __cxa_allocate_exception(unsigned long size);
void __cxa_throw(void* exc, void* type, void* dest) __attribute__((noreturn));
void __cxa_end_catch(void* exc);
void* __cxa_begin_catch(void* exc);
void _Unwind_Resume(void);
int __cxa_atexit(void (*func)(void), void* arg, void* dso_handle);
size_t strlen(const char *s);
char *strncpy(char *dest, const char *src, size_t n);
int puts(const char *s);
int __printf_chk(int flag, const char *format, ...);
void abort(void) __attribute__((noreturn));



// Function: __dollar_x at 0x401470
extern unsigned long long g_413ef0;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 return g_413ef0;
}


// Function: sub_401484 at 0x401484
extern void* operatornew(unsigned int size);
void* sub_401484()
{
 unsigned int v0; // x0

 return operatornew(v0);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401670 at 0x401670
void sub_401670()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_401688 at 0x401688
void sub_401688()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4016fc at 0x4016fc
void sub_4016fc()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401748 at 0x401748
long long sub_401748()
{
 frame_dummy();
 return frame_dummy();
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x401754
extern char __stack_chk_guard;

void test_cpp_member_func()
{
 char *v0; // [bp-0x50]
 char v1[31]; // [bp-0x2c]
 char result; // [bp-0xd]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 strncpy(v1, "Test", 31);
 result = 0;
 strlen(v1);
 if (v3 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z20test_cpp_constructorv at 0x4017cc
extern unsigned int _ZN14LifecycleClass14instance_countE;
extern void* operatornew(unsigned int size);
extern void operatordelete(void* ptr, unsigned long size);

 void test_cpp_constructor()
{
 unsigned int *ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = (unsigned int *)operatornew(20);
 ptr[1] = 10;
 ptr[2] = 20;
 ptr[3] = 30;
 ptr[4] = 40;
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 operatordelete(ptr, 20);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x401838
struct Base {
} Base;

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 ((void (*)(void*, int))(*(long long *)arg_0))(arg_0, arg_1);
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x401854
struct Base {
} Base;

extern char __stack_chk_guard;
extern struct Base g_413958;
extern struct Base g_413988;

void test_cpp_virtual_func()
{
 char *v0; // [bp-0x40]
 struct Base *v1; // [bp-0x20]
 struct Base *v2; // [bp-0x18]
 unsigned int v3; // [bp-0x10]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 v1 = &g_413958;
 v2 = &g_413988;
 v3 = 3;
 call_virtual_func(v1, 5);
 call_virtual_func(v2, 5);
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4018e4
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4018ec
extern char __stack_chk_guard;
extern unsigned long long g_413ac8;
extern unsigned long long g_413af8;
extern char g_413b30;

void DiamondDerived_func(void* a0, ...);

void test_cpp_diamond_inheritance()
{
 char *v0; // [bp-0x60]
 unsigned long long v1; // [bp-0x38]
 unsigned long long v2; // [bp-0x28]
 unsigned long v3; // [bp-0x18]
 unsigned int v4; // [bp-0x10]
 unsigned long v5; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 v5 = *((long long *)&__stack_chk_guard);
 v1 = g_413ac8;
 v3 = (unsigned long)&g_413b30;
 v2 = g_413af8;
 v4 = 50;
 DiamondDerived_func((void*)&v3, 0);
 v4 = 100;
 DiamondDerived_func((void*)&v3);
 if (v5 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401988
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x401990
extern char __stack_chk_guard;

void test_cpp_template_func()
{
 unsigned long long v6; // d8
 char *v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x18]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v1 = v6;
 v4 = *((long long *)&__stack_chk_guard);
 template_max_double(template_max_int(3, 7), 7);
 v2 = 10;
 v3 = 20;
 template_swap_int(&v2, &v3);
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z23test_cpp_template_classv at 0x401a38
void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401a40
void test_cpp_lambda()
{
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x401a48
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;
extern char _ZTIi;

void test_cpp_exception()
{
 unsigned int *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 __builtin_unreachable();
}


// Function: _Z18test_cpp_smart_ptrv at 0x401b20
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x401b28
typedef struct struct_2 {
 char padding_0[8];
 struct struct_3 *field_8;
} struct_2;

typedef struct struct_3 {
 unsigned long long field_0;
} struct_3;

extern char g_413b58;
extern char g_413b80;

void test_cpp_rtti()
{
 void* *p; // x20
 struct_2 **ptr; // x21
 char *v4; // x22
 char *v5; // x0
 char *v0; // [bp-0x40]
 char v1; // [bp+0x0]

 v0 = &v1;
 p = (void**)operatornew(8);
 p[0] = (void*)&g_413b58;
 ptr = (struct_2 **)operatornew(8);
 ptr[0] = (struct_2 *)&g_413b80;
 v4 = (char *)*((long long *)((long long)(p[1]) + 8));
 if (*(v4) != 42)
 v5 = v4;
 else
 v5 = v4 + 1;
 strlen(v5);
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401c8c
extern char g_402148;
extern char g_402170;
extern char g_402190;
extern char g_4021b0;
extern char g_4021d0;
extern char g_4021f0;
extern char g_402210;
extern char g_402230;
extern char g_402250;
extern char g_402270;
extern char g_402290;
extern char g_4022b0;
extern char g_4022d0;

void test_cpp_oo_features()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(&g_402148);
 test_cpp_member_func();
 __printf_chk(1, &g_402170, 0);
 test_cpp_constructor();
 __printf_chk(1, &g_402190, 0);
 test_cpp_virtual_func();
 __printf_chk(1, &g_4021b0, 0);
 test_cpp_multiple_inheritance();
 __printf_chk(1, &g_4021d0, 0);
 test_cpp_diamond_inheritance();
 __printf_chk(1, &g_4021f0, 0);
 __printf_chk(1, &g_402210, 22);
 test_cpp_template_func();
 __printf_chk(1, &g_402230, 0);
 __printf_chk(1, &g_402250, 16);
 __printf_chk(1, &g_402270, 85);
 test_cpp_exception();
 __printf_chk(1, &g_402290, 0);
 test_cpp_smart_ptr();
 __printf_chk(1, &g_4022b0, 0);
 test_cpp_rtti();
 __printf_chk(1, &g_4022d0, 0);
 return;
}


// Function: main at 0x401dbc
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_cpp_oo_features();
 return 0;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x401dd4
extern void _ZNSt8ios_base4InitD1Ev(void* this);
extern void _ZStL8__ioinit;
extern unsigned long long __dso_handle;

void _ZNSt8ios_base4InitC1Ev(void* this);
void _ZNSt8ios_base4InitD1Ev_wrapper(void);

long long _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]
 long long result; // [bp-0x8]

 v0 = &v1;
 _ZNSt8ios_base4InitC1Ev(&_ZStL8__ioinit);
 result = __cxa_atexit(_ZNSt8ios_base4InitD1Ev_wrapper, &_ZStL8__ioinit, &__dso_handle);
 return result;
}

void _ZNSt8ios_base4InitD1Ev_wrapper(void)
{
 _ZNSt8ios_base4InitD1Ev(&_ZStL8__ioinit);
}


// Function: _ZN4Base12virtual_funcEi at 0x401e18
void _ZN4Base12virtual_funcEi(void* this, int arg_0)
{
 return;
}


// Function: _ZNK4Base7getNameEv at 0x401e20
void _ZNK4Base7getNameEv(void* this)
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x401e2c
void _ZN4BaseD1Ev(void* this)
{
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x401e30
void _ZN7Derived12virtual_funcEi(void* this, int arg_0)
{
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x401e3c
void _ZNK7Derived7getNameEv(void* this)
{
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x401e48
void _ZN12MultiDerived5funcAEv(void* this)
{
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x401e50
void _ZN12MultiDerived5funcBEv(void* this)
{
 return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x401e58
unsigned long long thunk_MultiDerived_funcB()
{
 return 40;
}


// Function: _ZN7MiddleA4funcEv at 0x401e60
void _ZN7MiddleA4funcEv(void* this)
{
 return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x401e78
int thunk_MiddleA_func(void* *a0)
{
 void* vtable_entry = ((void**)(*(a0)))[24];
 return *((int *)(8 + (char *)a0 + (long long)vtable_entry + *((long long *)(*((long long *)((char *)a0 + (long long)vtable_entry)) - 24)))) + 150;
}


// Function: _ZN7MiddleB4funcEv at 0x401e9c
void _ZN7MiddleB4funcEv(void* this)
{
 return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x401eb4
int thunk_MiddleB_func(void* *a0)
{
 void* vtable_entry = ((void**)(*(a0)))[24];
 return *((int *)(8 + (char *)a0 + (long long)vtable_entry + *((long long *)(*((long long *)((char *)a0 + (long long)vtable_entry)) - 24)))) + 200;
}


// Function: _ZN14DiamondDerived4funcEv at 0x401ed8
void _ZN14DiamondDerived4funcEv(void* this)
{
 return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x401ef0
int thunk_DiamondDerived_func(void* *a0)
{
 void* vtable_entry = ((void**)(*(a0)))[24];
 return *((int *)(8 + (char *)a0 + (long long)vtable_entry + *((long long *)(*((long long *)((char *)a0 + (long long)vtable_entry)) - 24)))) + 250;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x401f14
int thunk_DiamondDerived_func_nonvirtual(void* a0)
{
 return *((int *)(-8 + (char *)a0 + *((long long *)((long long)((void**)a0)[16] - 24)))) + 250;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401f2c
void _ZNK12RTTIDerivedA7getTypeEv(void* this)
{
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401f34
void _ZNK12RTTIDerivedB7getTypeEv(void* this)
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x401f3c
void _ZN12RTTIDerivedBD1Ev(void* this)
{
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x401f40
void _ZN12RTTIDerivedAD1Ev(void* this)
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401f44
void _ZN14DiamondDerivedD1Ev(void* this)
{
 return;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x401f48
long long thunk_DiamondDerived_destructor_nonvirtual()
{
 return 0;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x401f4c
long long thunk_DiamondDerived_destructor()
{
 return 0;
}


// Function: _ZN12MultiDerivedD1Ev at 0x401f50
void _ZN12MultiDerivedD1Ev(void* this)
{
 return;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x401f54
long long thunk_MultiDerived_destructor_nonvirtual()
{
 return 0;
}


// Function: _ZN7DerivedD2Ev at 0x401f58
void _ZN7DerivedD2Ev(void* this)
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x401f5c
void _ZN4BaseD0Ev(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 8);
 return;
}


// Function: _ZN7DerivedD0Ev at 0x401f74
void _ZN7DerivedD0Ev(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 16);
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x401f8c
void _ZN12MultiDerivedD0Ev(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 32);
 return;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x401fa4
extern void operatordelete(void* ptr, unsigned long size);
void thunk_MultiDerived_destructor0(void* a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete((void*)(a0 - 16), 32);
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401fc0
void _ZN12RTTIDerivedAD0Ev(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 8);
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401fd8
void _ZN12RTTIDerivedBD0Ev(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 8);
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x401ff0
void _ZN14DiamondDerivedD0Ev(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 48);
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x402008
void thunk_DiamondDerived_destructor0(void* *a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]
 void* vtable_entry; // x2

 v0 = &v1;
 vtable_entry = ((void**)(*(a0)))[32];
 operatordelete((char *)a0 + (long long)vtable_entry, 48);
 return;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x40202c
void thunk_DiamondDerived_destructor0_nonvirtual(void* a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(a0 - 16, 48);
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x402048
int template_max_int_impl(int arg_0, int arg_1)
{
 if (arg_1 > arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x402054
double template_max_double_impl(double arg_0, double arg_1)
{
 if (arg_1 > arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x402060
unsigned int* template_swap_int_impl(unsigned int *ptr, unsigned int *p)
{
 unsigned int v0; // w2

 v0 = *(ptr);
 *(ptr) = *(p);
 *(p) = v0;
 return ptr;
}


// Function: _ZN9ContainerIiEC2Ev at 0x402074
void _ZN9ContainerIiEC2Ev(void* ptr)
{
 *((unsigned int *)((char*)ptr + 40)) = 0;
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x40207c
void _ZN9ContainerIiE4pushEi(void* ptr, int arg_0)
{
 unsigned int v0; // w2

 v0 = *((unsigned int *)((char*)ptr + 40));
 if (9 >= v0)
 {
 *((unsigned int *)((char*)ptr + 40)) = v0 + 1;
 *((int *)((char *)ptr + 4 * v0)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x402098
void _ZNK9ContainerIiE3getEi(void* this, int arg_0)
{
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4020c0
void _ZNK9ContainerIiE7getSizeEv(void* this)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4020c8
void _ZN9ContainerIdEC1Ev(void* ptr)
{
 *((unsigned int *)((char*)ptr + 80)) = 0;
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x4020d0
void _ZN9ContainerIdE4pushEd(void* ptr, double arg_0)
{
 unsigned int v0; // w1

 v0 = *((unsigned int *)((char*)ptr + 80));
 if (9 >= v0)
 {
 *((unsigned int *)((char*)ptr + 80)) = v0 + 1;
 *((double *)((char *)ptr + 8 * v0)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x4020ec
void _ZNK9ContainerIdE3getEi(void* this, int arg_0)
{
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x40210c
void _ZNK9ContainerIdE7getSizeEv(void* this)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


