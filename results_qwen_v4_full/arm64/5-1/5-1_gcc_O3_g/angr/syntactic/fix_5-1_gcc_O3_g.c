// Angr Decompilation of 5-1_gcc_O3_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* CRT stub function _init removed by preprocessor */

// Forward declaration for main
unsigned int main();

// Exception handling function declarations
extern void* __cxa_allocate_exception(unsigned long size);
extern void __cxa_throw(void* thrown_exception, void* tinfo, void* dest);
extern void _Unwind_Resume();

// Additional function forward declarations
extern void test_cpp_oo_features();
extern long long _GLOBAL__sub_I__Z20test_cpp_member_funcv();
extern int __cxa_atexit(void* func, void* arg, void* dso_handle);
extern void deregister_tm_clones();
extern void __do_global_dtors_aux();
extern unsigned long long frame_dummy();
extern void test_cpp_member_func();
extern void __stack_chk_fail();
extern int test_cpp_constructor();
extern void call_virtual_func(void *arg_0, int arg_1);
extern int test_cpp_multiple_inheritance();
extern int test_cpp_diamond_inheritance();
extern int test_cpp_operator_overload();
extern void test_cpp_template_func();
extern int test_cpp_lambda();
extern int test_cpp_smart_ptr();
extern void test_cpp_rtti();
extern void* operatornew(unsigned long size);
extern void operatordelete(void* ptr, unsigned long size);
extern char arm64g_calculate_condition(unsigned int condition, unsigned long val1, unsigned long val2, unsigned long val3);
extern int thunk_MiddleA_func(void* *a0);
extern int thunk_MiddleB_func(void* *a0);



// Function: __dollar_x at 0x400eb0
extern unsigned long long g_412f00;

// Forward declarations for template functions
extern int template_max_int(int arg_0, int arg_1);
extern double template_max_double(double arg_0, double arg_1);
extern void template_swap_int(unsigned int *ptr, unsigned int *p);
extern void Container_int_Constructor(void* ptr);
extern void Container_int_push(void* ptr, int arg_0);
extern int Container_int_get(void* this, int arg_0);
extern int Container_int_getSize(void* this);
extern void Container_double_Constructor(void* ptr);
extern void Container_double_push(void* ptr, double arg_0);
extern double Container_double_get(void* this, int arg_0);
extern int Container_double_getSize(void* this);

// Forward declarations for classes
struct Base;
struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct Container_int;
struct Container_double;

// Forward declarations for class methods
extern int Base_getName(void* this);
extern int Base_virtual_func(void* this, int arg_0);
extern int Derived_virtual_func(void* this, int arg_0);
extern int Derived_getName(void* this);
extern int MultiDerived_funcA(void* this);
extern int MultiDerived_funcB(void* this);
extern int MiddleA_func(void* this);
extern int MiddleB_func(void* this);
extern int DiamondDerived_func(void* this);
extern int RTTIDerivedA_getType(void* this);
extern int RTTIDerivedB_getType(void* this);

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
unsigned int main()
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
 // std::ios_base::Init::Init(&_ZStL8__ioinit);
 __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
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
long long sub_401288()
{
 unsigned long long v0; // x0

 v0 = frame_dummy();
 return frame_dummy();
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
 strncpy(v1, "Test", 31);
 strlen(v1);
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
int test_cpp_constructor()
{
 return 0;
}


// Function: sub_401328 at 0x401328
void sub_401328(unsigned long a0)
{
 call_virtual_func(0, 0);
}


// Function: _Z17call_virtual_funcP4Basei at 0x401330
void call_virtual_func(void *arg_0, int arg_1)
{
 ((void (*)(void*, int))(*((long long *)arg_0)))(arg_0, arg_1);
}


// Function: _Z21test_cpp_virtual_funcv at 0x401340
int test_cpp_virtual_func()
{
 return 0;
}


// Function: sub_401348 at 0x401348
void sub_401348()
{
 test_cpp_multiple_inheritance();
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x401350
int test_cpp_multiple_inheritance()
{
 return 0;
}


// Function: sub_401358 at 0x401358
void sub_401358()
{
 test_cpp_diamond_inheritance();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401360
int test_cpp_diamond_inheritance()
{
 return 0;
}


// Function: sub_401368 at 0x401368
void sub_401368()
{
 test_cpp_operator_overload();
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401370
int test_cpp_operator_overload()
{
 return 0;
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
 template_max_double(3.0, 7.0);
 v2 = 10;
 v3 = 20;
 template_swap_int(&v2, &v3);
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z23test_cpp_template_classv at 0x401420
int test_cpp_template_class()
{
 return 0;
}


// Function: sub_401428 at 0x401428
void sub_401428()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401430
int test_cpp_lambda()
{
 return 0;
}


// Function: sub_401438 at 0x401438
void sub_401438()
{
 test_cpp_smart_ptr();
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x401440
int test_cpp_smart_ptr()
{
 return 0;
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

typedef struct struct_5 {
 char field_0;
} struct_5;

typedef struct struct_4 {
 char padding_0[8];
 struct struct_5 *field_8;
} struct_4;

extern char g_412c28;
extern char g_412c50;
extern struct_4 *p;

void test_cpp_rtti()
{
 void* *ptr; // x21
 struct_2 **ptr3; // x20
 char *ptr4; // x0
 void* v4; // x24
 char *addr; // x23
 unsigned int v6; // w25
 unsigned int result; // w0
 unsigned long v8; // cc_dep1
 char *v9; // x0
 char *v0; // [bp-0x50]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = operatornew(8);
 *(ptr) = &g_412c28;
 ptr3 = operatornew(8);
 v4 = *(ptr);
 addr = (char *)*((long long *)((long long)v4 + 8) + 8);
 *(ptr3) = (struct_2 *)&g_412c50;
 if (addr != "12RTTIDerivedA")
 {
 v6 = *(addr);
 if (v6 != 42)
 {
 result = strcmp(addr, "12RTTIDerivedA");
 v8 = result;
 if (result)
 {
 if (!((char)arm64g_calculate_condition(19, v8, 0, 0)))
 goto LABEL_4014de;
LABEL_4014dd:
 }
 else
 {
 if ((char)arm64g_calculate_condition(19, v8, 0, 0))
 goto LABEL_4014dd;
LABEL_4014de:
 }
LABEL_4014e0:
 v9 = (char *)p->field_8;
 if (v9 == "12RTTIDerivedB")
 goto LABEL_4015d0;
LABEL_4014fc:
 }
 else
 {
 v9 = (char *)p->field_8;
 if (v9 != "12RTTIDerivedB")
 goto LABEL_4014fc;
LABEL_4015d0:
 }
 }
 else
 {
 v6 = 49;
 goto LABEL_4014e0;
 }
 if (v6 != 42)
 ptr4 = addr;
 else
 ptr4 = addr + 1;
 strlen(ptr4);
 ((void (*)(void*, long long))((long long *)v4)[8])(ptr, (long long)((long long *)v4)[8]);
 ((void (*)(struct_2 *, void *))((struct_2 *)*(ptr3))->field_8)((struct_2 *)*(ptr3), ((void (*)(struct_2 *, void *))((struct_2 *)*(ptr3))->field_8));
 return;
}


// Function: sub_4015e8 at 0x4015e8
void sub_4015e8()
{
 test_cpp_oo_features();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x4015f0
extern unsigned int _ZN14LifecycleClass14instance_countE;
extern char __stack_chk_guard;
extern char g_401ba0;
extern char g_401bc8;
extern char g_401be8;
extern char g_401c08;
extern char g_401c28;
extern char g_401c48;
extern char g_401c68;
extern char g_401c88;
extern char g_401ca8;
extern char g_401cc8;
extern char g_401ce8;
extern char g_401d08;
extern char g_401d28;

void test_cpp_oo_features()
{
 unsigned long long v8; // d8
 unsigned long long v10; // x0
 unsigned int v12; // w0
 char *v0; // [bp-0x60]
 unsigned long long v1; // [bp-0x48]
 unsigned int v2; // [bp-0x38]
 unsigned int v3; // [bp-0x34]
 char v4; // [bp-0x2c]
 char result; // [bp-0xd]
 unsigned long v6; // [bp-0x8]
 char v7; // [bp+0x0]

 v0 = &v7;
 v1 = v8;
 v6 = *((long long *)&__stack_chk_guard);
 puts(&g_401ba0);
 strncpy(&v4, "Test", 31);
 result = 0;
 v12 = strlen(&v4) + 4700;
 __printf_chk(1, &g_401bc8, v12);
 v12 = _ZN14LifecycleClass14instance_countE + 21 + 1000 * _ZN14LifecycleClass14instance_countE;
 __printf_chk(1, &g_401be8, v12);
 v12 = 42;
 __printf_chk(1, &g_401c08, v12);
 v12 = 71;
 __printf_chk(1, &g_401c28, v12);
 v12 = 650;
 __printf_chk(1, &g_401c48, v12);
 v12 = 22;
 __printf_chk(1, &g_401c68, v12);
 template_max_int(3, 7);
 template_max_double(3.0, 7.0);
 v2 = 10;
 v3 = 20;
 template_swap_int(&v2, &v3);
 v10 = (unsigned long long)template_max_double(3.0, 7.0);
 v12 = (unsigned int)0x4004000000000000 + (v10 & 4294967295) + v2 + v3;
 __printf_chk(1, &g_401c88, v12);
 v12 = 16;
 __printf_chk(1, &g_401ca8, v12);
 v12 = 85;
 __printf_chk(1, &g_401cc8, v12);
 // test_cpp_exception() throws, so this code is unreachable
 // test_cpp_exception();
 v12 = 0;
 __printf_chk(1, &g_401ce8, v12);
 v12 = 703;
 __printf_chk(1, &g_401d08, v12);
 // test_cpp_rtti();
 v12 = 0;
 if (v6 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 __printf_chk(1, &g_401d28, 0);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x4017d0
int Base_virtual_func(void* this, int arg_0)
{
 return 0;
}


// Function: sub_4017c4 at 0x4017c4
void sub_4017c4(unsigned long a0, unsigned long a1)
{
 Base_virtual_func(0, 0);
 return;
}


// Function: sub_4017d8 at 0x4017d8
void sub_4017d8()
{
 Base_getName(0);
 return;
}


// Function: _ZNK4Base7getNameEv at 0x4017e0
int Base_getName(void* this)
{
 return 0;
}


// Function: sub_4017ec at 0x4017ec
long long sub_4017ec()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN4BaseD1Ev at 0x4017f0
int Base_destructor(void* this)
{
 return 0;
}


// Function: sub_4017f4 at 0x4017f4
void sub_4017f4(unsigned long a0, unsigned long a1)
{
 Derived_virtual_func(0, 0);
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x401800
int Derived_virtual_func(void* this, int arg_0)
{
 return 0;
}


// Function: sub_40180c at 0x40180c
void sub_40180c()
{
 Derived_getName(0);
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x401810
int Derived_getName(void* this)
{
 return 0;
}


// Function: sub_40181c at 0x40181c
void sub_40181c()
{
 MultiDerived_funcA(0);
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x401820
int MultiDerived_funcA(void* this)
{
 return 0;
}


// Function: sub_401828 at 0x401828
void sub_401828()
{
 MultiDerived_funcB(0);
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x401830
int MultiDerived_funcB(void* this)
{
 return 0;
}


// Function: sub_401838 at 0x401838
void sub_401838()
{
 // non-virtual thunk to MultiDerived::funcB()();
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x401840
unsigned long long MultiDerived_funcB_thunk()
{
 return 40;
}


// Function: sub_401848 at 0x401848
void sub_401848(unsigned long a0)
{
 // MiddleA::func();
}


// Function: _ZN7MiddleA4funcEv at 0x401850
int MiddleA_func(void* this)
{
 return 0;
}


// Function: sub_401868 at 0x401868
void sub_401868(unsigned long a0)
{
 // thunk_MiddleA_func();
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x401870
int thunk_MiddleA_func(void* *a0)
{
 return *((int *)(8 + (char *)a0 + (*(a0))[24] + *((long long *)(*((long long *)((char *)a0 + (*(a0))[24])) - 24)))) + 150;
}


// Function: sub_401894 at 0x401894
void sub_401894(unsigned long a0)
{
 // MiddleB::func();
}


// Function: _ZN7MiddleB4funcEv at 0x4018a0
int MiddleB_func(void* this)
{
 return 0;
}


// Function: sub_4018b8 at 0x4018b8
void sub_4018b8(unsigned long a0)
{
 // thunk_MiddleB_func();
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x4018c0
int thunk_MiddleB_func(void* *a0)
{
 return *((int *)(8 + (char *)a0 + (*(a0))[24] + *((long long *)(*((long long *)((char *)a0 + (*(a0))[24])) - 24)))) + 200;
}


// Function: sub_4018e4 at 0x4018e4
void sub_4018e4(unsigned long a0)
{
 // DiamondDerived::func();
}


// Function: _ZN14DiamondDerived4funcEv at 0x4018f0
int DiamondDerived_func(void* this)
{
 return 0;
}


// Function: sub_401908 at 0x401908
void sub_401908(unsigned long a0)
{
 // thunk_DiamondDerived_func();
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x401910
int thunk_DiamondDerived_func(void* *a0)
{
 return *((int *)(8 + (char *)a0 + (*(a0))[24] + *((long long *)(*((long long *)((char *)a0 + (*(a0))[24])) - 24)))) + 250;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x401934
int DiamondDerived_func_thunk(void* a0)
{
 return *((int *)(-8 + (char *)a0 + *((long long *)((long long)a0[16] - 24)))) + 250;
}


// Function: sub_40194c at 0x40194c
void sub_40194c()
{
 // RTTIDerivedA::getType();
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401950
int RTTIDerivedA_getType(void* this)
{
 return 0;
}


// Function: sub_401958 at 0x401958
void sub_401958()
{
 // RTTIDerivedB::getType();
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401960
int RTTIDerivedB_getType(void* this)
{
 return 0;
}


// Function: sub_401968 at 0x401968
long long sub_401968()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x401970
int RTTIDerivedB_destructor(void* this)
{
 return 0;
}


// Function: sub_401974 at 0x401974
long long sub_401974()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x401980
int RTTIDerivedA_destructor(void* this)
{
 return 0;
}


// Function: sub_401984 at 0x401984
long long sub_401984()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401990
int DiamondDerived_destructor(void* this)
{
 return 0;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x401994
long long thunk_DiamondDerived_destructor()
{
 unsigned long v0; // x0

 return v0;
}


// Function: sub_401998 at 0x401998
long long sub_401998()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x4019a0
long long DiamondDerived_destructor_thunk()
{
 unsigned long v0; // x0

 return v0;
}


// Function: sub_4019a4 at 0x4019a4
long long sub_4019a4()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN12MultiDerivedD1Ev at 0x4019b0
int MultiDerived_destructor(void* this)
{
 return 0;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x4019b4
long long MultiDerived_destructor_thunk()
{
 unsigned long v0; // x0

 return v0;
}


// Function: sub_4019b8 at 0x4019b8
long long sub_4019b8()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN7DerivedD2Ev at 0x4019c0
int Derived_destructor(void* this)
{
 return 0;
}


// Function: sub_4019c4 at 0x4019c4
long long sub_4019c4()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN4BaseD0Ev at 0x4019d0
int Base_destructor_delete(void* this)
{
 operatordelete(this, 8);
 return 0;
}


// Function: sub_4019d8 at 0x4019d8
long long sub_4019d8()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN7DerivedD0Ev at 0x4019e0
int Derived_destructor_delete(void* this)
{
 operatordelete(this, 16);
 return 0;
}


// Function: sub_4019e8 at 0x4019e8
long long sub_4019e8()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN12MultiDerivedD0Ev at 0x4019f0
int MultiDerived_destructor_delete(void* this)
{
 operatordelete(this, 32);
 return 0;
}


// Function: sub_4019f8 at 0x4019f8
void sub_4019f8(unsigned long a0)
{
 return;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x401a00
int MultiDerived_destructor_delete_thunk(void* a0)
{
 return operatordelete(a0 - 16, 32);
}


// Function: sub_401a0c at 0x401a0c
long long sub_401a0c()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401a10
int RTTIDerivedB_destructor_delete(void* this)
{
 operatordelete(this, 8);
 return 0;
}


// Function: sub_401a18 at 0x401a18
long long sub_401a18()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401a20
int RTTIDerivedA_destructor_delete(void* this)
{
 operatordelete(this, 8);
 return 0;
}


// Function: sub_401a28 at 0x401a28
long long sub_401a28()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x401a30
int DiamondDerived_destructor_delete(void* this)
{
 operatordelete(this, 48);
 return 0;
}


// Function: sub_401a38 at 0x401a38
void sub_401a38(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x401a40
int thunk_DiamondDerived_destructor_delete(void* *a0)
{
 return operatordelete((char *)a0 + (*(a0))[32], 48);
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x401a54
int DiamondDerived_destructor_delete_thunk(void* a0)
{
 return operatordelete(a0 - 16, 48);
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401a60
int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 > arg_0)
 return arg_1;
 return arg_0;
}


// Function: sub_401a6c at 0x401a6c
void sub_401a6c()
{
 template_max_double(0.0, 0.0);
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x401a70
extern int CmpF(unsigned long val1, unsigned long val2);

double template_max_double(double arg_0, double arg_1)
{
 if (arg_1 > arg_0)
 return arg_1;
 return arg_0;
}


// Function: sub_401a7c at 0x401a7c
void sub_401a7c(unsigned long a0, unsigned long a1)
{
 template_swap_int((unsigned int *)0, (unsigned int *)0);
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x401a80
void template_swap_int(unsigned int *ptr, unsigned int *p)
{
 unsigned int v0; // w2

 v0 = *(ptr);
 *(ptr) = *(p);
 *(p) = v0;
}


// Function: sub_401a94 at 0x401a94
void sub_401a94(unsigned long a0)
{
 Container_int_Constructor(0);
}


// Function: _ZN9ContainerIiEC2Ev at 0x401aa0
void Container_int_Constructor(void* ptr)
{
 *((unsigned int *)&ptr[40]) = 0;
}


// Function: sub_401aa8 at 0x401aa8
void sub_401aa8(unsigned long a0)
{
 Container_int_push(0, 0);
}


// Function: _ZN9ContainerIiE4pushEi at 0x401ab0
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int v0; // w2

 v0 = (int)ptr[40];
 if (9 >= v0)
 {
  *((unsigned int *)&ptr[40]) = v0 + 1;
  *((int *)((char *)ptr + 4 * v0)) = arg_0;
 }
}


// Function: sub_401acc at 0x401acc
void sub_401acc(unsigned long a0, unsigned long a1)
{
 Container_int_get(0, 0);
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401ad0
int Container_int_get(void* this, int arg_0)
{
 if (((char)(arg_0 >> 31) & 1))
 {
 return 0;
 }
 else if (arg_0 >= (int)this[40])
 {
 return 0;
 }
 else
 {
 return *((int *)((char *)this + 4 * arg_0));
 }
}


// Function: sub_401af8 at 0x401af8
void sub_401af8(unsigned long a0)
{
 Container_int_getSize(0);
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401b00
int Container_int_getSize(void* this)
{
 return *((unsigned int *)&this[40]);
}


// Function: sub_401b08 at 0x401b08
void sub_401b08(unsigned long a0)
{
 Container_double_Constructor(0);
}


// Function: _ZN9ContainerIdEC1Ev at 0x401b10
void Container_double_Constructor(void* ptr)
{
 *((unsigned int *)&ptr[80]) = 0;
}


// Function: sub_401b18 at 0x401b18
void sub_401b18(unsigned long a0)
{
 Container_double_push(0, 0.0);
}


// Function: _ZN9ContainerIdE4pushEd at 0x401b20
void Container_double_push(void* ptr, double arg_0)
{
 unsigned int v0; // w1

 v0 = (int)ptr[80];
 if (9 >= v0)
 {
  *((unsigned int *)&ptr[80]) = v0 + 1;
  *((double *)((char *)ptr + 8 * v0)) = arg_0;
 }
}


// Function: sub_401b3c at 0x401b3c
void sub_401b3c(unsigned long a0, unsigned long a1)
{
 Container_double_get(0, 0);
}


// Function: _ZNK9ContainerIdE3getEi at 0x401b40
double Container_double_get(void* this, int arg_0)
{
 if (((char)(arg_0 >> 31) & 1))
 {
 return 0.0;
 }
 else if (arg_0 >= (int)this[80])
 {
 return 0.0;
 }
 else
 {
 return *((double *)((char *)this + 8 * arg_0));
 }
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401b60
int Container_double_getSize(void* this)
{
 return *((unsigned int *)&this[80]);
}



/* CRT stub function _fini removed by preprocessor */


