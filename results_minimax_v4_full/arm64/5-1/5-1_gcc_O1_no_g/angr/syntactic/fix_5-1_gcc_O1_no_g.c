// Angr Decompilation of 5-1_gcc_O1_no_g
// Platform: AARCH64


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* C++ operator declarations - renamed for C compatibility */
void *cpp_operator_new(unsigned long size);
void cpp_operator_delete(void *ptr);
void cpp_operator_delete(void *ptr, unsigned long size);

/* CRT/stdlib functions */
int printf(const char *format, ...);
int puts(const char *s);
void abort(void);
void* malloc(unsigned long);
void free(void*);
unsigned long strlen(const char *s);
char* strncpy(char *dest, const char *src, unsigned long n);
int __printf_chk(int flag, const char *format, ...);

/* Function declarations for CRT stub functions */
void __do_global_dtors_aux(void);
void frame_dummy(void);
void __stack_chk_fail(void);

/* Forward declarations for template functions */
int template_max(int arg_0, int arg_1);
double template_max(double arg_0, double arg_1);
long long template_swap(unsigned int *ptr);

/* Forward declarations for C++ exception handling */
void* __cxa_allocate_exception(unsigned long);
void __cxa_throw(void*, void*, void*);
void* __cxa_begin_catch(void*);
void __cxa_end_catch(void);
void _Unwind_Resume(void*);
int __cxa_atexit(void (*)(void*), void*, void*);

/* C++ class forward declarations and struct definitions */
struct Base {
    void* virtual_table_ptr;
};

struct Derived {
    void* virtual_table_ptr;
};

struct MultiDerived {
    void* virtual_table_ptr;
    long long base1[2];
    long long base2[2];
};

struct MiddleA {
    void* virtual_table_ptr;
};

struct MiddleB {
    void* virtual_table_ptr;
};

struct DiamondDerived {
    void* virtual_table_ptr;
    long long base1[2];
    long long base2[2];
};

struct RTTIDerivedA {
    void* virtual_table_ptr;
};

struct RTTIDerivedB {
    void* virtual_table_ptr;
};

struct ContainerInt {
    int data[10];
    unsigned int size;
};

struct ContainerDouble {
    double data[10];
    unsigned int size;
};

/* Additional function declarations needed */
int arm64g_calculate_condition(int, unsigned long long, unsigned long long, int, int);
unsigned long long CmpF(unsigned long, unsigned long);

/* CRT stub function _init removed by preprocessor */



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
 goto g_413ef0;
}


// Function: sub_401484 at 0x401484
#include <stdlib.h>

int sub_401484()
{
 unsigned int v0; // x0

 return (int)malloc(v0);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401670 at 0x401670
void sub_401670()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */
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
void* __stack_chk_guard;

void test_cpp_member_func()
{
 char *v0; // [bp-0x50]
 char v1[31]; // [bp-0x2c]
 char result; // [bp-0xd]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 strncpy(&v1, "Test", 31);
 result = 0;
 strlen(&v1);
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
 ptr = (unsigned int *)malloc(20);
 ptr[1] = 10;
 ptr[2] = 20;
 ptr[3] = 30;
 ptr[4] = 40;
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 free(ptr);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: call_virtual_func at 0x401838

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 (*((void (*)(void *))(*((long long *)&arg_0))))((void *)arg_0);
 return;
}


struct Base;

extern char __stack_chk_guard;
extern struct Base *g_413958;
extern struct Base *g_413988;

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
 v1 = g_413958;
 v2 = g_413988;
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
 v1 = (unsigned long long)&g_413ac8;
 v3 = (unsigned long)&g_413b30;
 v2 = (unsigned long long)&g_413af8;
 v4 = 50;
 // thunk to DiamondDerived::func()(&v3, 0);
 v4 = 100;
 // thunk to DiamondDerived::func()(&v3);
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
 template_max(3, 7);
 template_max(7.0, 7.0);
 v2 = 10;
 v3 = 20;
 template_swap(&v2);
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
 result = &_ZTIi;
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
 void* *p; // x20
 struct_2 **ptr; // x21
 char *v4; // x22
 char *v5; // x0
 char *v0; // [bp-0x40]
 char v1; // [bp+0x0]

 v0 = &v1;
 p = (void**)malloc(8);
 *(p) = &g_413b58;
 ptr = (struct_2**)malloc(8);
 *(ptr) = &g_413b80;
 v4 = *((long long *)((long long)(*(p))[8] + 8));
 if (*(v4) != 42)
 v5 = v4;
 else
 v5 = v4 + 1;
 strlen(v5);
 (long long)(*(p))[8](p, (long long)(*(p))[8]);
 *(ptr)->field_8(ptr, *(ptr)->field_8);
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
 __printf_chk(1, &g_402170, (unsigned long long)test_cpp_member_func() & 4294967295);
 __printf_chk(1, &g_402190, (unsigned long long)test_cpp_constructor() & 4294967295);
 __printf_chk(1, &g_4021b0, (unsigned long long)test_cpp_virtual_func() & 4294967295);
 __printf_chk(1, &g_4021d0, (unsigned long long)test_cpp_multiple_inheritance() & 4294967295);
 __printf_chk(1, &g_4021f0, (unsigned long long)test_cpp_diamond_inheritance() & 4294967295);
 __printf_chk(1, &g_402210, 22);
 __printf_chk(1, &g_402230, (unsigned long long)test_cpp_template_func() & 4294967295);
 __printf_chk(1, &g_402250, 16);
 __printf_chk(1, &g_402270, 85);
 __printf_chk(1, &g_402290, (unsigned long long)test_cpp_exception() & 4294967295);
 __printf_chk(1, &g_4022b0, (unsigned long long)test_cpp_smart_ptr() & 4294967295);
 __printf_chk(1, &g_4022d0, (unsigned long long)test_cpp_rtti() & 4294967295);
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
extern void _ZStL8__ioinit;
extern unsigned long long __dso_handle;

long long _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 // std::ios_base::Init::Init(&_ZStL8__ioinit); // Removed C++ initializer call
 v2 = __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
}


// Function: Base_virtual_func at 0x401e18
void Base_virtual_func(void* this, int arg_0)
{
 return;
}


// Function: Base_getName at 0x401e20
void Base_getName(void* this)
{
 return;
}


// Function: Base_destructor at 0x401e2c
int Base_destructor(void* this)
{
 return;
}


// Function: Derived_virtual_func at 0x401e30
void Derived_virtual_func(void* this, int arg_0)
{
 return;
}


// Function: Derived_getName at 0x401e3c
void Derived_getName(void* this)
{
 return;
}


// Function: MultiDerived_funcA at 0x401e48
void MultiDerived_funcA(void* this)
{
 return;
}


// Function: MultiDerived_funcB at 0x401e50
void MultiDerived_funcB(void* this)
{
 return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x401e58
unsigned long long _ZThn16_N12MultiDerived5funcBEv()
{
 return 40;
}


// Function: MiddleA_func at 0x401e60
void MiddleA_func(void* this)
{
 return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x401e78
// thunk to MiddleA::func()
int func_thunk_MiddleA(void* *a0)
{
 return *((int *)(8 + (char *)a0 + (*(a0))[24] + *((long long *)(*((long long *)((char *)a0 + (*(a0))[24])) - 24)))) + 150;
}


// Function: MiddleB_func at 0x401e9c
void MiddleB_func(void* this)
{
 return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x401eb4
// thunk to MiddleB::func()
int func_thunk_MiddleB(void* *a0)
{
 return *((int *)(8 + (char *)a0 + (*(a0))[24] + *((long long *)(*((long long *)((char *)a0 + (*(a0))[24])) - 24)))) + 200;
}


// Function: _ZN14DiamondDerived4funcEv at 0x401ed8
void DiamondDerived::func(void* this)
{
 return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x401ef0
// thunk to DiamondDerived::func()
int func_thunk_DiamondDerived(void* *a0)
{
 return *((int *)(8 + (char *)a0 + (*(a0))[24] + *((long long *)(*((long long *)((char *)a0 + (*(a0))[24])) - 24)))) + 250;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x401f14
int non_virtual_thunk_to_DiamondDerived_func(void* a0)
{
 return *((int *)(-8 + (char *)a0 + *((long long *)((long long)a0[16] - 24)))) + 250;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401f2c
void RTTIDerivedA::getType(void* this)
{
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401f34
void RTTIDerivedB::getType(void* this)
{
 return;
}


// Function: RTTIDerivedB_destructor at 0x401f3c
void RTTIDerivedB_destructor(void* this)
{
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x401f40
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401f44
int DiamondDerived::~DiamondDerived(void* this)
{
 return;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x401f48
long long non_virtual_thunk_to_DiamondDerived_destructor(void* this)
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x401f4c
long long thunk_to_DiamondDerived_destructor(void* *a0)
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN12MultiDerivedD1Ev at 0x401f50
int MultiDerived::~MultiDerived(void* this)
{
 return;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x401f54
long long non_virtual_thunk_to_MultiDerived_destructor(void* this)
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN7DerivedD2Ev at 0x401f58
int Derived::~Derived(void* this)
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x401f5c
int Base::~Base(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 free(this);
 return;
}


// Function: _ZN7DerivedD0Ev at 0x401f74
int Derived::~Derived(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 free(this);
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x401f8c
int MultiDerived::~MultiDerived(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 free(this);
 return;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x401fa4
int non_virtual_thunk_to_MultiDerived_destructor_delete(void* a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return free(a0 - 16);
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401fc0
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 free(this);
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401fd8
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 free(this);
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x401ff0
int DiamondDerived::~DiamondDerived(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 free(this);
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x402008
int thunk_to_DiamondDerived_destructor_delete(void* *a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return free((char *)a0 + (*(a0))[32]);
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x40202c
int non_virtual_thunk_to_DiamondDerived_destructor_delete(void* a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return free(a0 - 16);
}


// Function: template_max_int at 0x402048
int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 > arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x402054
double template_max_double(double arg_0, double arg_1)
{
 unsigned long v0; // d0
 unsigned long v1; // d1
 unsigned long v3; // x0

 if (!((char)arm64g_calculate_condition(192, (((((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) & ((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) >> 1 & 1)) * 0x10000000, 0, 0)))
 return v3;
 return v3;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x402060
long long template_swap<int>(unsigned int *ptr)
{
 unsigned int v0; // w2
 unsigned int *p; // x1

 v0 = *(ptr);
 *(ptr) = *(p);
 *(p) = v0;
 return ptr;
}


// Function: Container_int_Constructor at 0x402074
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)&ptr[40]) = 0;
 return;
}


// Function: Container_int_push at 0x40207c
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int v0; // w2

 v0 = (int)ptr[40];
 if (9 >= v0)
 {
 *((unsigned int *)&ptr[40]) = v0 + 1;
 *((int *)((char *)ptr + 4 * v0)) = arg_0;
 }
 return;
}


// Function: Container_int_get at 0x402098
void Container_int_get(void* this, int arg_0)
{
 return;
}


// Function: Container_int_getSize at 0x4020c0
void Container_int_getSize(void* this)
{
 return;
}


// Function: Container_double_Constructor at 0x4020c8
int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)&ptr[80]) = 0;
 return;
}


// Function: Container_double_push at 0x4020d0
void Container_double_push(void* ptr, double arg_0)
{
 unsigned int v0; // w1
 unsigned long v1; // d0

 v0 = (int)ptr[80];
 if (9 >= v0)
 {
 *((unsigned int *)&ptr[80]) = v0 + 1;
 *((unsigned long *)((char *)ptr + 8 * v0)) = v1;
 }
 return;
}


// Function: Container_double_get at 0x4020ec
void Container_double_get(void* this, int arg_0)
{
 return;
}


// Function: Container_double_getSize at 0x40210c
void Container_double_getSize(void* this)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


