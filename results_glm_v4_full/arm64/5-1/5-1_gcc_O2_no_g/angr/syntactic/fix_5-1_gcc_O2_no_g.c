// Angr Decompilation of 5-1_gcc_O2_no_g
// Platform: AARCH64

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* CRT stub function _init removed by preprocessor */

// Forward declarations for functions used before definition
int main();
void test_cpp_oo_features();
void test_cpp_member_func();
void test_cpp_constructor();
void test_cpp_virtual_func();
void test_cpp_multiple_inheritance();
void test_cpp_diamond_inheritance();
void test_cpp_operator_overload();
void test_cpp_template_func();
void test_cpp_template_class();
void test_cpp_lambda();
void test_cpp_smart_ptr();
void test_cpp_rtti();
void test_cpp_exception();
long long _GLOBAL__sub_I__Z20test_cpp_member_funcv();
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void __stack_chk_fail(void);

// Forward declarations for std::ios_base Init
void std_ios_base_Init_Init(void *ptr);
void std_ios_base_Init_D1Ev(void *ptr);

// Forward declarations for template functions
int template_max_int(int arg_0, int arg_1);
double template_max_double(double arg_0, double arg_1);
void template_swap_int(int *arg_0, int *arg_1);

// Forward declarations for classes
struct Base {
 void **vtable;
};

struct Derived {
 void **vtable;
};

// Forward declarations for class methods
void Base_virtual_func(struct Base *this, int arg_0);
void Base_getName(struct Base *this);
void Base_dtor(struct Base *this);
void Derived_virtual_func(struct Derived *this, int arg_0);
void Derived_getName(struct Derived *this);
void Derived_dtor(struct Derived *this);
void MultiDerived_funcA(void);
void MultiDerived_funcB(void);
void MultiDerived_dtor(void);
void MiddleA_func(void *this);
void MiddleB_func(void *this);
void DiamondDerived_func(void *this);
void RTTIDerivedA_getType(void);
void RTTIDerivedB_getType(void);
void _ZTv0_n24_N7MiddleA4funcEv(void **a0);
void _ZTv0_n24_N7MiddleB4funcEv(void **a0);
void _ZTv0_n24_N14DiamondDerived4funcEv(void **a0);

struct MultiDerived {
 void **vtable;
 /* inherits from Base and virtual Base */
};

// Template class Container definition - templates not supported in C

// Forward declarations for ARM64 helper functions
int arm64g_calculate_condition(int cond, unsigned long long cc_dep1, unsigned long long cc_dep2, unsigned long long cc_ndep);
unsigned long long CmpF(unsigned long long a, unsigned long long b);

// Declaration for operator_delete function
void operator_delete(void *ptr, unsigned long long size);

struct MiddleA {
 void **vtable;
 /* virtual inheritance from Base */
};

struct MiddleB {
 void **vtable;
 /* virtual inheritance from Base */
};

struct DiamondDerived {
 void **vtable;
 /* inherits from MiddleA and MiddleB */
};

struct RTTIDerivedA {
 void **vtable;
};

struct RTTIDerivedB {
 void **vtable;
};

// Function definitions for template_max and template_swap
int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 > arg_0)
 return arg_1;
 return arg_0;
}

double template_max_double(double arg_0, double arg_1)
{
 if (arg_1 > arg_0)
 return arg_1;
 return arg_0;
}

void template_swap_int(int *arg_0, int *arg_1)
{
 int temp = *arg_0;
 *arg_0 = *arg_1;
 *arg_1 = temp;
}

// Forward declarations for exception handling functions
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *thrown_exception, void *tinfo, void (*dest)(void *));
void _Unwind_Resume(void);

// Forward declaration for operator new
void *operatornew(size_t size);

// Forward declarations for CRT stub functions
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);

// Forward declarations for Container classes
struct Container_int;
struct Container_double;

void Container_int_ctor(struct Container_int *this);
void Container_int_push(struct Container_int *this, int arg_0);
int Container_int_get(struct Container_int *this, int arg_0);
int Container_int_getSize(struct Container_int *this);

void Container_double_ctor(struct Container_double *this);
void Container_double_push(struct Container_double *this, double arg_0);
double Container_double_get(struct Container_double *this, int arg_0);
int Container_double_getSize(struct Container_double *this);

#define CONTAINER_CAPACITY 10

struct Container_int {
 int data[10];
 int size;
};

struct Container_double {
 double data[10];
 int size;
};


// Function: __dollar_x at 0x400eb0
extern unsigned long long g_412f00;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 return g_412f00;
}


// Function: sub_400ec4 at 0x400ec4
int sub_400ec4()
{
 char *v0; // x0

 return puts(v0);
}


// Function: _Z18test_cpp_exceptionv at 0x401040
extern char _ZTIi;

void test_cpp_exception()
{
 unsigned int *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 _Unwind_Resume(); /* do not return */
}


// Function: sub_401114 at 0x401114
void sub_401114()
{
 main();
 return;
}


// Function: main at 0x401120
int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_cpp_oo_features();
 return 0;
}


// Function: sub_401138 at 0x401138
void sub_401138()
{
 _GLOBAL__sub_I__Z20test_cpp_member_funcv();
 return;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x401140
extern char _ZNSt8ios_base4InitD1Ev;
extern void _ZStL8__ioinit;
extern unsigned long long __dso_handle;

long long _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 std_ios_base_Init_Init(&_ZStL8__ioinit);
 v2 = __cxa_atexit((void (*)(void *))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return __cxa_atexit((void (*)(void *))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4011b0 at 0x4011b0
void sub_4011b0()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_4011c8 at 0x4011c8
void sub_4011c8()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_40123c at 0x40123c
void sub_40123c()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401288 at 0x401288
void sub_401288()
{
 frame_dummy();
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401294 at 0x401294
void sub_401294()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x4012a0
extern char __stack_chk_guard;

void test_cpp_member_func()
{
 char *v0; // [bp-0x40]
 char v1[31]; // [bp-0x2c]
 char result; // [bp-0xd]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 result = 0;
 strlen(strncpy((char*)&v1, "Test", 31));
 if (v3 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: sub_40130c at 0x40130c
void sub_40130c()
{
 test_cpp_constructor();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401310
void test_cpp_constructor()
{
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x401330
void call_virtual_func(struct Base *arg_0, int arg_1)
{
 goto *((long long *)*((long long *)&arg_0));
}


// Function: sub_401328 at 0x401328
long long sub_401328(unsigned long a0)
{
 unsigned long long v0; // x0

 call_virtual_func((struct Base *)a0, 0);
 return 0;
}


// Function: _Z17call_virtual_funcP4Basei at 0x401330
void call_virtual_func(struct Base *arg_0, int arg_1);


// Function: _Z21test_cpp_virtual_funcv at 0x401340
void test_cpp_virtual_func()
{
 return;
}


// Function: sub_401348 at 0x401348
void sub_401348()
{
 test_cpp_multiple_inheritance();
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x401350
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: sub_401358 at 0x401358
void sub_401358()
{
 test_cpp_diamond_inheritance();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401360
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: sub_401368 at 0x401368
void sub_401368()
{
 test_cpp_operator_overload();
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401370
void test_cpp_operator_overload()
{
 return;
}


// Function: sub_401378 at 0x401378
void sub_401378()
{
 test_cpp_template_func();
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x401380
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
 template_max_double(template_max_int(3, 7), 7.0);
 v2 = 10;
 v3 = 20;
 template_swap_int(&v2, &v3);
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z23test_cpp_template_classv at 0x401420
void test_cpp_template_class()
{
 return;
}


// Function: sub_401428 at 0x401428
void sub_401428()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401430
void test_cpp_lambda()
{
 return;
}


// Function: sub_401438 at 0x401438
void sub_401438()
{
 test_cpp_smart_ptr();
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x401440
void test_cpp_smart_ptr()
{
 return;
}


// Function: sub_401448 at 0x401448
void sub_401448()
{
 test_cpp_rtti();
 return;
}


// Function: _Z13test_cpp_rttiv at 0x401450
typedef struct struct_2 {
 char padding_0[8];
 struct struct_3 *field_8;
} struct_2;

typedef struct struct_3 {
 unsigned long long field_0;
} struct_3;

extern char g_412c28;
extern char g_412c50;

void test_cpp_rtti()
{
 void* *ptr; // x21
 struct_2 *p; // x20
 void* v4; // x24
 char *addr; // x23
 char *ptr3; // x0
 char *v0; // [bp-0x50]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = (void**)operatornew(8);
 *(ptr) = &g_412c28;
 p = (struct_2*)operatornew(8);
 v4 = *(ptr);
 addr = *((long long *)((long long)(char*)(long long)v4[8] + 8));
 p = (struct_2*)&g_412c50;
 if (*(addr) != 42)
 ptr3 = addr;
 else
 ptr3 = addr + 1;
 strlen(ptr3);
 ((void (*)(void**, void**))((void**)(char*)(long long)v4[8])[1])(ptr, (void**)v4[8]);
 return;
}


// Function: sub_4015a8 at 0x4015a8
void sub_4015a8()
{
 test_cpp_oo_features();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x4015b0
extern char __stack_chk_guard;
extern char g_401b10;
extern char g_401b38;
extern char g_401b58;
extern char g_401b78;
extern char g_401b98;
extern char g_401bb8;
extern char g_401bd8;
extern char g_401bf8;
extern char g_401c18;
extern char g_401c38;
extern char g_401c58;
extern char g_401c78;
extern char g_401c98;

void test_cpp_oo_features()
{
 unsigned int v11; // w0
 char *v0; // [bp-0x50]
 char v1; // [bp-0x2c]
 char result; // [bp-0xd]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 puts(&g_401b10);
 strncpy(&v1, "Test", 31);
 result = 0;
 __printf_chk(1, &g_401b38, strlen(&v1) + 4700);
 test_cpp_constructor();
 __printf_chk(1, &g_401b58, 42);
 __printf_chk(1, &g_401b98, 71);
 test_cpp_diamond_inheritance();
 __printf_chk(1, &g_401bb8, 22);
 test_cpp_template_func();
 __printf_chk(1, &g_401bf8, 16);
 __printf_chk(1, &g_401c38, 85);
 test_cpp_exception();
 test_cpp_smart_ptr();
 test_cpp_rtti();
 if (v3 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 __printf_chk(1, &g_401c98, 0);
 return;
}


// Function: sub_401734 at 0x401734
void sub_401734(unsigned long a0, unsigned long a1)
{
 Base_virtual_func((struct Base *)a0, (int)a1);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x401740
void Base_virtual_func(struct Base *this, int arg_0)
{
 return;
}


// Function: sub_401748 at 0x401748
int sub_401748()
{
 Base_getName(NULL);
 return 0;
}


// Function: _ZNK4Base7getNameEv at 0x401750
void Base_getName(struct Base *this)
{
}


// Function: sub_40175c at 0x40175c
void sub_40175c()
{
}


// Function: _ZN4BaseD1Ev at 0x401760
void Base_dtor(struct Base *this)
{
}


// Function: sub_401764 at 0x401764
void sub_401764(unsigned long a0, unsigned long a1)
{
 Derived_virtual_func((struct Derived *)a0, (int)a1);
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x401770
void Derived_virtual_func(struct Derived *this, int arg_0)
{
 return;
}


// Function: sub_40177c at 0x40177c
int sub_40177c()
{
 Derived_getName(NULL);
 return 0;
}


// Function: _ZNK7Derived7getNameEv at 0x401780
void Derived_getName(struct Derived *this)
{
}


// Function: sub_40178c at 0x40178c
void sub_40178c()
{
 MultiDerived_funcA();
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x401790
void MultiDerived_funcA(void)
{
 return;
}


// Function: sub_401798 at 0x401798
void sub_401798()
{
 MultiDerived_funcB();
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x4017a0
void MultiDerived_funcB(void)
{
 return;
}


// Function: sub_4017a8 at 0x4017a8
void sub_4017a8()
{
 /* non-virtual thunk to MultiDerived::funcB() */
 return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x4017b0
void _ZThn16_N12MultiDerived5funcBEv()
{
}


// Function: sub_4017b8 at 0x4017b8
void sub_4017b8(unsigned long a0)
{
 MiddleA_func((struct MiddleA *)a0);
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x4017c0
void MiddleA_func(void *this)
{
 return;
}


// Function: sub_4017d8 at 0x4017d8
void sub_4017d8(unsigned long a0)
{
 _ZTv0_n24_N7MiddleA4funcEv((void **)a0);
 return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x4017e0
void _ZTv0_n24_N7MiddleA4funcEv(void* *a0)
{
 MiddleA_func((struct MiddleA *)(8 + (char *)a0 + (*(a0))[24] + *((long long *)(*((long long *)((char *)a0 + (*(a0))[24])) - 24))));
}


// Function: sub_401804 at 0x401804
int sub_401804(unsigned long a0)
{
 MiddleB_func((struct MiddleB *)a0);
 return 0;
}


// Function: _ZN7MiddleB4funcEv at 0x401810
void MiddleB_func(void *this)
{
 return;
}


// Function: sub_401828 at 0x401828
void sub_401828(unsigned long a0)
{
 _ZTv0_n24_N7MiddleB4funcEv((void **)a0);
 return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x401830
void _ZTv0_n24_N7MiddleB4funcEv(void* *a0)
{
 MiddleB_func((struct MiddleB *)(8 + (char *)a0 + (*(a0))[24] + *((long long *)(*((long long *)((char *)a0 + (*(a0))[24])) - 24))));
}


// Function: sub_401854 at 0x401854
void sub_401854(unsigned long a0)
{
 DiamondDerived_func((struct DiamondDerived *)a0);
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x401860
void DiamondDerived_func(void *this)
{
 return;
}


// Function: sub_401878 at 0x401878
void sub_401878(unsigned long a0)
{
 _ZTv0_n24_N14DiamondDerived4funcEv((void **)a0);
 return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x401880
void _ZTv0_n24_N14DiamondDerived4funcEv(void* *a0)
{
 DiamondDerived_func((struct DiamondDerived *)(8 + (char *)a0 + (*(a0))[24] + *((long long *)(*((long long *)((char *)a0 + (*(a0))[24])) - 24))));
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x4018a4
int _ZThn16_N14DiamondDerived4funcEv(void* a0)
{
 DiamondDerived_func((struct DiamondDerived *)(-8 + (char *)a0 + *((long long *)((long long)a0[16] - 24))));
 return 0;
}


// Function: sub_4018bc at 0x4018bc
void sub_4018bc()
{
 RTTIDerivedA_getType();
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x4018c0
void RTTIDerivedA_getType(void)
{
}


// Function: sub_4018c8 at 0x4018c8
void sub_4018c8()
{
 RTTIDerivedB_getType();
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4018d0
void RTTIDerivedB_getType(void)
{
}


// Function: sub_4018d8 at 0x4018d8
void sub_4018d8()
{
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x4018e0
void RTTIDerivedB_D1Ev(struct RTTIDerivedB *this)
{
}


// Function: sub_4018e4 at 0x4018e4
void sub_4018e4()
{
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x4018f0
void RTTIDerivedA_D1Ev(struct RTTIDerivedA *this)
{
}


// Function: sub_4018f4 at 0x4018f4
void sub_4018f4()
{
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401900
void DiamondDerived_D1Ev(struct DiamondDerived *this)
{
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x401904
long long _ZTv0_n32_N14DiamondDerivedD1Ev(void* a0)
{
 unsigned long v0; // x0

 return v0;
}


// Function: sub_401908 at 0x401908
void sub_401908()
{
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x401910
long long _ZThn16_N14DiamondDerivedD1Ev(void* a0)
{
 unsigned long v0; // x0

 return v0;
}


// Function: sub_401914 at 0x401914
void sub_401914()
{
}


// Function: _ZN12MultiDerivedD1Ev at 0x401920
void MultiDerived_D1Ev(struct MultiDerived *this)
{
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x401924
long long _ZThn16_N12MultiDerivedD1Ev(void* a0)
{
 unsigned long v0; // x0

 return v0;
}


// Function: sub_401928 at 0x401928
void sub_401928()
{
}


// Function: _ZN7DerivedD2Ev at 0x401930
void Derived_D2Ev(struct Derived *this)
{
}


// Function: sub_401934 at 0x401934
void sub_401934()
{
}


// Function: _ZN4BaseD0Ev at 0x401940
void Base_D0Ev(struct Base *this)
{
 operator_delete(this, 8);
}


// Function: sub_401948 at 0x401948
void sub_401948()
{
}


// Function: _ZN7DerivedD0Ev at 0x401950
void Derived_D0Ev(struct Derived *this)
{
 operator_delete(this, 16);
}


// Function: sub_401958 at 0x401958
void sub_401958()
{
}


// Function: _ZN12MultiDerivedD0Ev at 0x401960
void MultiDerived_D0Ev(struct MultiDerived *this)
{
 operator_delete(this, 32);
}


// Function: sub_401968 at 0x401968
void sub_401968(unsigned long a0)
{
 return;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x401970
/* non-virtual thunk to MultiDerived::~MultiDerived */
void _ZThn16_N12MultiDerivedD0Ev(void* a0)
{
 operator_delete(a0 - 16, 32);
}


// Function: sub_40197c at 0x40197c
void sub_40197c()
{
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401980
void RTTIDerivedB_D0Ev(struct RTTIDerivedB *this)
{
 operator_delete(this, 8);
}


// Function: sub_401988 at 0x401988
void sub_401988()
{
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401990
void RTTIDerivedA_D0Ev(struct RTTIDerivedA *this)
{
 operator_delete(this, 8);
}


// Function: sub_401998 at 0x401998
void sub_401998()
{
}


// Function: _ZN14DiamondDerivedD0Ev at 0x4019a0
void DiamondDerived_D0Ev(struct DiamondDerived *this)
{
 operator_delete(this, 48);
}


// Function: sub_4019a8 at 0x4019a8
void sub_4019a8(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x4019b0
/* thunk to DiamondDerived::~DiamondDerived */
void _ZTv0_n32_N14DiamondDerivedD0Ev(void* *a0)
{
 operator_delete((char *)a0 + (*(a0))[32], 48);
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x4019c4
/* non-virtual thunk to DiamondDerived::~DiamondDerived */
void _ZThn16_N14DiamondDerivedD0Ev(void* a0)
{
 operator_delete(a0 - 16, 48);
}





// Function: sub_4019dc at 0x4019dc
long long sub_4019dc(double a0, double a1)
{
 unsigned long long v0; // x0

 v0 = (unsigned long long)template_max_double(a0, a1);
 return v0;
}





// Function: sub_4019ec at 0x4019ec
long long sub_4019ec(unsigned int *a0, unsigned int *a1)
{
 template_swap_int(a0, a1);
 return 0;
}





// Function: sub_401a04 at 0x401a04
long long sub_401a04(void* a0)
{
 Container_int_ctor(a0);
 return 0;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401a10
void Container_int_ctor(struct Container_int *this)
{
 this->size = 0;
}


// Function: sub_401a18 at 0x401a18
long long sub_401a18(void* a0, int a1)
{
 Container_int_push(a0, a1);
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x401a20
void Container_int_push(struct Container_int *this, int arg_0)
{
 if (this->size < CONTAINER_CAPACITY)
 {
 this->data[this->size] = arg_0;
 this->size++;
 }
}


// Function: sub_401a3c at 0x401a3c
void sub_401a3c(void* a0, int a1)
{
 Container_int_get(a0, a1);
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401a40
int Container_int_get(struct Container_int *this, int arg_0)
{
 if (arg_0 < 0 || arg_0 >= this->size)
 {
 return 0;
 }
 return this->data[arg_0];
}


// Function: sub_401a68 at 0x401a68
void sub_401a68(void* a0)
{
 Container_int_getSize(a0);
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401a70
int Container_int_getSize(struct Container_int *this)
{
 return this->size;
}


// Function: sub_401a78 at 0x401a78
long long sub_401a78(void* a0)
{
 Container_double_ctor(a0);
 return 0;
}


// Function: _ZN9ContainerIdEC1Ev at 0x401a80
void Container_double_ctor(struct Container_double *this)
{
 this->size = 0;
}


// Function: sub_401a88 at 0x401a88
long long sub_401a88(void* a0, double a1)
{
 Container_double_push(a0, a1);
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401a90
void Container_double_push(struct Container_double *this, double arg_0)
{
 if (this->size < CONTAINER_CAPACITY)
 {
 this->data[this->size] = arg_0;
 this->size++;
 }
}


// Function: sub_401aac at 0x401aac
long long sub_401aac(void* a0, int a1)
{
 unsigned long long v0; // x0

 v0 = Container_double_get(a0, a1);
 return v0;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401ab0
double Container_double_get(struct Container_double *this, int arg_0)
{
 if (arg_0 < 0 || arg_0 >= this->size)
 {
 return 0.0;
 }
 return this->data[arg_0];
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401ad0
int Container_double_getSize(struct Container_double *this)
{
 return this->size;
}



/* CRT stub function _fini removed by preprocessor */


