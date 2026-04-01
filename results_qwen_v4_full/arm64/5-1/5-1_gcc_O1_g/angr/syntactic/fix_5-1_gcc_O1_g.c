// Angr Decompilation of 5-1_gcc_O1_g
// Platform: AARCH64

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>

/* CRT stub function _init removed by preprocessor */

// Global variable definitions (for extern declarations)
typedef struct Base {
 void* vtable;
} Base;

unsigned long long g_413ef0 = 0;
unsigned int _ZN14LifecycleClass14instance_countE = 0;
Base g_413958 = {0};
Base g_413988 = {0};
unsigned long long g_413ac8 = 0;
unsigned long long g_413af8 = 0;
char g_413b30 = 0;
unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException = 0;
char _ZTIi = 0;
char g_413b58 = 0;
char g_413b80 = 0;
char g_402148 = 0;
char g_402170 = 0;
char g_402190 = 0;
char g_4021b0 = 0;
char g_4021d0 = 0;
char g_4021f0 = 0;
char g_402210 = 0;
char g_402230 = 0;
char g_402250 = 0;
char g_402270 = 0;
char g_402290 = 0;
char g_4022b0 = 0;
char g_4022d0 = 0;
char _ZNSt8ios_base4InitD1Ev = 0;
char _ZStL8__ioinit = 0;
unsigned long long __dso_handle = 0;

// Function declarations
void* operator_new(unsigned long size);
void* operator_new_array(unsigned long size);
void operator_delete(void* ptr);
void operator_delete_array(void* ptr);
void abort();
void __stack_chk_fail();

// Stub implementations for missing functions
void* operator_new(unsigned long size) { return malloc(size); }
void* operator_new_array(unsigned long size) { return malloc(size); }
void operator_delete(void* ptr) { free(ptr); }
void operator_delete_array(void* ptr) { free(ptr); }
void abort() { exit(1); }
void __stack_chk_fail() { exit(1); }
size_t strlen(const char* s) { size_t len = 0; while (s[len]) len++; return len; }
char* strncpy(char* dest, const char* src, unsigned long n) { unsigned long i; for (i = 0; i < n && src[i]; i++) dest[i] = src[i]; for (; i < n; i++) dest[i] = 0; return dest; }
int puts(const char* s) { printf("%s\n", s); return 0; }
void __printf_chk(int flag, char* format, ...) { printf(format); }
long long __cxa_atexit(void* func, void* arg, void* dso_handle) { return 0; }
void* __cxa_allocate_exception(unsigned long size) { return malloc(size); }
void __cxa_throw(void* exc, void* type, void* destructor) { exit(1); }
void* __cxa_begin_catch() { return 0; }
void __cxa_end_catch(void* p) { }
void _Unwind_Resume() { exit(1); }
void __cxa_pure_virtual() { exit(1); }
void deregister_tm_clones() { }
void __do_global_dtors_aux() { }
long long frame_dummy() { return 0; }
void _ZTv0_n24_N14DiamondDerived4funcEv(void* a0);
void _ZThn16_N14DiamondDerived4funcEv(void* a0);
void _ZTv0_n32_N14DiamondDerivedD1Ev(void* a0);
void _ZThn16_N14DiamondDerivedD1Ev(void* a0);
void _ZTv0_n32_N14DiamondDerivedD0Ev(void* a0);
void _ZThn16_N14DiamondDerivedD0Ev(void* a0);
void _ZThn16_N12MultiDerivedD1Ev(void* a0);
void _ZThn16_N12MultiDerivedD0Ev(void* a0);
void _ZThn16_N12MultiDerived5funcBEv(void* a0);

// Template function declarations
int _Z12template_maxIiET_S0_S0_(int arg_0, int arg_1);
double _Z12template_maxIdET_S0_S0_(double arg_0, double arg_1);
long long _Z13template_swapIiEvRT_S1_(unsigned int *ptr, unsigned int *p);



// Function: __dollar_x at 0x401470

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
void* sub_401484()
{
 unsigned int v0; // x0

 return operator_new_array(v0);
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
 unsigned long long v0; // x0

 v0 = frame_dummy();
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

void test_cpp_constructor()
{
 unsigned int *ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
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


// Function: _Z17call_virtual_funcP4Basei at 0x401838
extern Base g_413958;
extern Base g_413988;

void call_virtual_func(Base *arg_0, int arg_1)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 ((void(*)())(*((long long *)arg_0->vtable)))();
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x401854
extern char __stack_chk_guard;

void test_cpp_virtual_func()
{
 char *v0; // [bp-0x40]
 Base v1; // [bp-0x20]
 Base v2; // [bp-0x18]
 unsigned int v3; // [bp-0x10]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 v1.vtable = &g_413958;
 v2.vtable = &g_413988;
 v3 = 3;
 call_virtual_func(&v1, 5);
 call_virtual_func(&v2, 5);
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

void test_cpp_diamond_inheritance()
{
 char *v0; // [bp-0x60]
 unsigned long long v1; // [bp-0x38]
 unsigned long long v2; // [bp-0x28]
 void* v3; // [bp-0x18]
 unsigned int v4; // [bp-0x10]
 unsigned long v5; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 v5 = *((long long *)&__stack_chk_guard);
 v1 = (unsigned long long)&g_413ac8;
 v3 = (void*)&g_413b30;
 v2 = (unsigned long long)&g_413af8;
 v4 = 50;
 _ZTv0_n24_N14DiamondDerived4funcEv(v3);
 v4 = 100;
 _ZThn16_N14DiamondDerived4funcEv(v3);
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
 (void)template_max_double((double)template_max_int(3, 7), 7.0);
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
 unsigned long long result; // x1
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 result = (unsigned long long)&_ZTIi;
 __cxa_throw(ptr, &_ZTIi, 0);
 if (result == 1)
 {
 __cxa_end_catch(__cxa_begin_catch());
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 _Unwind_Resume(); /* do not return */
 }
 _Unwind_Resume(); /* do not return */
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
 void** p; // x20
 struct_2 **ptr; // x21
 char *v4; // x22
 char *v5; // x0
 char *v0; // [bp-0x40]
 char v1; // [bp+0x0]

 v0 = &v1;
 p = (void**)operator_new(8);
 p[0] = &g_413b58;
 ptr = (struct_2**)operator_new(8);
 ptr[0] = (struct_2*)&g_413b80;
 v4 = (char*)((long long)(p[0]) + 8);
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
 __printf_chk(1, &g_402170, 0);
 __printf_chk(1, &g_402190, 0);
 __printf_chk(1, &g_4021b0, 0);
 __printf_chk(1, &g_4021d0, 0);
 __printf_chk(1, &g_4021f0, 0);
 __printf_chk(1, &g_402210, 22);
 __printf_chk(1, &g_402230, 0);
 __printf_chk(1, &g_402250, 16);
 __printf_chk(1, &g_402270, 85);
 __printf_chk(1, &g_402290, 0);
 __printf_chk(1, &g_4022b0, 0);
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
extern char _ZNSt8ios_base4InitD1Ev;
extern char _ZStL8__ioinit;
extern unsigned long long __dso_handle;

long long _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
}


// Function: _ZN4Base12virtual_funcEi at 0x401e18
int Base_virtual_func(void* this, int arg_0)
{
 return 0;
}


// Function: _ZNK4Base7getNameEv at 0x401e20
char* Base_getName(void* this)
{
 return 0;
}


// Function: _ZN4BaseD1Ev at 0x401e2c
void Base_D1Ev(void* this)
{
 operator_delete(this);
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x401e30
int Derived_virtual_func(void* this, int arg_0)
{
 return 0;
}


// Function: _ZNK7Derived7getNameEv at 0x401e3c
char* Derived_getName(void* this)
{
 return 0;
}


// Function: _ZN12MultiDerived5funcAEv at 0x401e48
int MultiDerived_funcA(void* this)
{
 return 0;
}


// Function: _ZN12MultiDerived5funcBEv at 0x401e50
int MultiDerived_funcB(void* this)
{
 return 0;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x401e58
void _ZThn16_N12MultiDerived5funcBEv(void* a0)
{
 MultiDerived_funcB((char*)a0 - 16);
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x401f4c
void _ZTv0_n32_N14DiamondDerivedD1Ev(void* a0)
{
 operator_delete((char*)a0 - 32);
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x401e60
int MiddleA_func(void* this)
{
 return 0;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x401e78
void _ZTv0_n24_N7MiddleA4funcEv(void* a0)
{
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x401e9c
int MiddleB_func(void* this)
{
 return 0;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x401eb4
void _ZTv0_n24_N7MiddleB4funcEv(void* a0)
{
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x401ed8
int DiamondDerived_func(void* this)
{
 return 0;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x401ef0
void _ZTv0_n24_N14DiamondDerived4funcEv(void* a0)
{
 return;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x401f14
void _ZThn16_N14DiamondDerived4funcEv(void* a0)
{
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401f2c
int RTTIDerivedA_getType(void* this)
{
 return 0;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401f34
int RTTIDerivedB_getType(void* this)
{
 return 0;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x401f3c
void RTTIDerivedB_D1Ev(void* this)
{
 operator_delete(this);
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x401f40
void RTTIDerivedA_D1Ev(void* this)
{
 operator_delete(this);
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401f44
void DiamondDerived_D1Ev(void* this)
{
 operator_delete(this);
 return;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x401f48
void _ZThn16_N14DiamondDerivedD1Ev(void* a0)
{
 operator_delete((char*)a0 - 16);
 return;
}


// Function: _ZN12MultiDerivedD1Ev at 0x401f50
void MultiDerived_D1Ev(void* this)
{
 operator_delete(this);
 return;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x401f54
void _ZThn16_N12MultiDerivedD1Ev(void* a0)
{
 operator_delete((char*)a0 - 16);
 return;
}


// Function: _ZN7DerivedD1Ev at 0x401f58
void Derived_D1Ev(void* this)
{
 operator_delete(this);
 return;
}


// Function: _ZN7DerivedD2Ev at 0x401f6c
void Derived_D2Ev(void* this)
{
 operator_delete(this);
 return;
}


// Function: _ZN4BaseD0Ev at 0x401f5c
void Base_D0Ev(void* this)
{
 operator_delete(this);
 return;
}


// Function: _ZN7DerivedD0Ev at 0x401f74
void Derived_D0Ev(void* this)
{
 operator_delete(this);
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x401f8c
void MultiDerived_D0Ev(void* this)
{
 operator_delete(this);
 return;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x401fa4
void _ZThn16_N12MultiDerivedD0Ev(void* a0)
{
 operator_delete((char*)a0 - 16);
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401fc0
void RTTIDerivedA_D0Ev(void* this)
{
 operator_delete(this);
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401fd8
void RTTIDerivedB_D0Ev(void* this)
{
 operator_delete(this);
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x401ff0
void DiamondDerived_D0Ev(void* this)
{
 operator_delete(this);
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x402008
void _ZTv0_n32_N14DiamondDerivedD0Ev(void* a0)
{
 operator_delete((char*)a0 - 32);
 return;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x40202c
void _ZThn16_N14DiamondDerivedD0Ev(void* a0)
{
 operator_delete((char*)a0 - 16);
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x402048
int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 > arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x402054
double template_max_double(double arg_0, double arg_1)
{
 if (arg_1 > arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x402060
long long template_swap_int(unsigned int *ptr, unsigned int *p)
{
 unsigned int v0; // w2

 v0 = *(ptr);
 *(ptr) = *(p);
 *(p) = v0;
 return (long long)ptr;
}


// Function: _ZN9ContainerIiEC2Ev at 0x402074
void Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 40)) = 0;
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x40207c
void Container_int_push(void* ptr, int arg_0)
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
int Container_int_get(void* this_ptr, int arg_0)
{
 return 0;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4020c0
unsigned int Container_int_getSize(void* this_ptr)
{
 return 0;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4020c8
int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 80)) = 0;
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x4020d0
void Container_double_push(void* ptr, double arg_0)
{
 unsigned int v0; // w1
 unsigned long v1; // d0

 v0 = *((unsigned int *)((char*)ptr + 80));
 if (9 >= v0)
 {
 *((unsigned int *)((char*)ptr + 80)) = v0 + 1;
 v1 = *(unsigned long*)&arg_0;
 *((unsigned long *)((char *)ptr + 8 * v0)) = v1;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x4020ec
double Container_double_get(void* this_ptr, int arg_0)
{
 return 0.0;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x40210c
unsigned int Container_double_getSize(void* this_ptr)
{
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


