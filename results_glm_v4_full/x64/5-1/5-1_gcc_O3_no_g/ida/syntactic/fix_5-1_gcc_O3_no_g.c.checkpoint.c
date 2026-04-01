/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_gcc_O3_no_g
 * Processor: pc
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <new>
#include <typeinfo>
#include <cxxabi.h>
#include <iostream>

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct RTTIBase RTTIBase;
typedef struct LifecycleClass LifecycleClass;

/* Define LifecycleClass with static member */
struct LifecycleClass {
    static int instance_count;
};
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <new>
#include <typeinfo>
#include <cxxabi.h>
#include <iostream>

/* Declare __cxa_atexit from cxxabi.h namespace */
extern "C" int __cxa_atexit(void (*func)(void*), void* obj, void* dso_handle);

/* Forward declare global variables */
extern void *_dso_handle;
extern std::ios_base::Init __ioinit;
extern const char *s;

/* Forward declare template functions */
int template_max_int(int a1, int a2);
double template_max_double(double a1, double a2);
void template_swap_int(int *a1, int *a2);

/* Forward declare test functions */
void test_cpp_oo_features(void);

/* Define global variables */
const char *s = "Hello, World!";
std::ios_base::Init __ioinit;
void *_dso_handle = 0;

/* Define static class members */
int LifecycleClass::instance_count = 0;

/* Define type_info structures for RTTI */
struct type_info {
    void **__type_name;
    void *__base_type;
};

static const char typeinfo_name_int[] = "int";
static const char typeinfo_name_RTTIBase[] = "12RTTIBase";
static const char typeinfo_name_RTTIDerivedA[] = "12RTTIDerivedA";
static const char typeinfo_name_RTTIDerivedB[] = "12RTTIDerivedB";

struct type_info typeinfo_for_int = {
    (void**)&typeinfo_name_int,
    (void*)0
};
struct type_info typeinfo_for_RTTIBase = {
    (void**)&typeinfo_name_RTTIBase,
    (void*)0
};
struct type_info typeinfo_for_RTTIDerivedA = {
    (void**)&typeinfo_name_RTTIDerivedA,
    (void*)&typeinfo_for_RTTIBase
};
struct type_info typeinfo_for_RTTIDerivedB = {
    (void**)&typeinfo_name_RTTIDerivedB,
    (void*)&typeinfo_for_RTTIBase
};

/* Inline assembly for stack canary */
static inline unsigned long long __readfsqword(unsigned long long offset)
{
    unsigned long long value;
    __asm__ volatile ("movq %%fs:%1, %0" : "=r" (value) : "m" (*(const unsigned long long *)(offset)));
    return value;
}




/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 ;
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 sub_1020();
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1020();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1020();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1020();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1020();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1020();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
 sub_1020();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
 sub_1020();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
 sub_1020();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
 sub_1020();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0()
{
 sub_1020();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
 sub_1020();
}


/* Function: sub_10F0 @ 0x10F0 */
void sub_10F0()
{
 sub_1020();
}


/* Function: sub_1100 @ 0x1100 */
void sub_1100()
{
 sub_1020();
}


/* Function: sub_1110 @ 0x1110 */
void sub_1110()
{
 sub_1020();
}


/* Function: sub_1120 @ 0x1120 */
void sub_1120()
{
 sub_1020();
}


/* Function: _Z18test_cpp_exceptionv @ 0x1240 */
void test_cpp_exception(void)
{
 unsigned int *exception; // rax

 exception = (unsigned int *)__cxxabiv1::__cxa_allocate_exception(4u);
 *exception = 42;
 __cxxabiv1::__cxa_throw(exception, (std::type_info *)&typeinfo_for_int, 0);
}





/* Function: main @ 0x1310 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
 return 0;
}

/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x1330 */
static void ios_init_cleanup(void* obj) {
 ((std::ios_base::Init*)obj)->~Init();
}

int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 new (&__ioinit) std::ios_base::Init();
 return __cxa_atexit(ios_init_cleanup, &__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1450 */
long long test_cpp_member_func(void)
{
 char s[8]; // [rsp+4h] [rbp-34h] BYREF
 long long v2; // [rsp+Ch] [rbp-2Ch]
 long long v3; // [rsp+14h] [rbp-24h]
 int v4; // [rsp+1Ch] [rbp-1Ch]
 short v5; // [rsp+20h] [rbp-18h]
 char v6; // [rsp+22h] [rbp-16h]
 char v7; // [rsp+23h] [rbp-15h]
 unsigned long long v8; // [rsp+28h] [rbp-10h]

 v8 = __readfsqword(0x28u);
 v6 = 0;
 *(unsigned long long *)s = 1953719636;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v7 = 0;
 return (unsigned int)strlen(s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x14D0 */
long long test_cpp_constructor(void)
{
 return (unsigned int)(1001 * LifecycleClass::instance_count + 21);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x14F0 */
long long call_virtual_func(Base *a1)
{
 return (**(long long ( ***)(Base *))a1)(a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1500 */
long long test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1510 */
long long test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1520 */
long long test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1530 */
long long test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1540 */
long long test_cpp_template_func(void)
{
 int v0; // ebx
 double v2; // [rsp+8h] [rbp-20h]
 int v3; // [rsp+10h] [rbp-18h] BYREF
 int v4; // [rsp+14h] [rbp-14h] BYREF
 unsigned long long v5; // [rsp+18h] [rbp-10h]

 v5 = __readfsqword(0x28u);
 v0 = template_max_int(3, 7);
 v3 = 10;
 v2 = template_max_double(2.5, 1.5);
 v4 = 20;
 template_swap_int(&v3, &v4);
 return (unsigned int)(v4 + v3 + v0 + (int)v2);
}


/* Function: _Z23test_cpp_template_classv @ 0x15E0 */
long long test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x15F0 */
long long test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1600 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1610 */
long long test_cpp_rtti(void)
{
 /* Simplified RTTI test stub - original used CRT artifacts */
 const char *v5 = "12RTTIDerivedA";
 int v6 = 30;
 int v9 = v6;
 v9 += 300; /* Base value for successful casts */
 return v9 + strlen(v5);
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1780 */
void test_cpp_oo_features(void)
{
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1990 */
long long Base_virtual_func(Base *self, int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x19A0 */
const char * Base_getName(Base *self)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x19B0 */
void Base_destructor(Base *self)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x19C0 */
long long Derived_virtual_func(Derived *self, int a2)
{
 return (unsigned int)(a2 * *((unsigned int *)self + 2));
}


/* Function: _ZNK7Derived7getNameEv @ 0x19D0 */
const char * Derived_getName(Derived *self)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x19E0 */
long long MultiDerived_funcA(MultiDerived *self)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x19F0 */
long long MultiDerived_funcB(MultiDerived *self)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x1A00 */
long long MultiDerived_non_virtual_thunk_funcB(MultiDerived *self)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1A10 */
long long MiddleA_func(MiddleA *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL) + 8) + 150);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x1A30 */
long long MiddleA_virtual_thunk_func(MiddleA *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self
 + *(unsigned long long *)(*(unsigned long long *)self - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL)) - 24LL)
 + 8)
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x1A50 */
long long MiddleB_func(MiddleB *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL) + 8) + 200);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x1A70 */
long long MiddleB_virtual_thunk_func(MiddleB *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self
 + *(unsigned long long *)(*(unsigned long long *)self - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL)) - 24LL)
 + 8)
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1A90 */
long long DiamondDerived_func(DiamondDerived *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL) + 8) + 250);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x1AB0 */
long long DiamondDerived_virtual_thunk_func(DiamondDerived *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self
 + *(unsigned long long *)(*(unsigned long long *)self - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL)) - 24LL)
 + 8)
 + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x1AD0 */
long long DiamondDerived_non_virtual_thunk_func(DiamondDerived *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self + *(unsigned long long *)(*((unsigned long long *)self - 2) - 24LL) - 8) + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1AF0 */
long long RTTIDerivedA_getType(RTTIDerivedA *self)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1B00 */
long long RTTIDerivedB_getType(RTTIDerivedB *self)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1B10 */
void RTTIDerivedB_destructor(RTTIDerivedB *self)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1B20 */
void RTTIDerivedA_destructor(RTTIDerivedA *self)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1B30 */
void DiamondDerived_destructor(DiamondDerived *self)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x1B40 */
void DiamondDerived_virtual_thunk_destructor(DiamondDerived *self)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x1B50 */
void DiamondDerived_non_virtual_thunk_destructor(DiamondDerived *self)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1B60 */
void MultiDerived_destructor(MultiDerived *self)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x1B70 */
void MultiDerived_non_virtual_thunk_destructor(MultiDerived *self)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1B80 */
void Derived_destructor(Derived *self)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1B90 */
void Base_deleting_destructor(Base *self)
{
 operator delete(self, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1BA0 */
void Derived_deleting_destructor(Derived *self)
{
 operator delete(self, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1BB0 */
void MultiDerived_deleting_destructor(MultiDerived *self)
{
 operator delete(self, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x1BC0 */
void MultiDerived_non_virtual_thunk_deleting_destructor(MultiDerived *self)
{
 operator delete((char *)self - 16, 0x20u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1BE0 */
void RTTIDerivedB_deleting_destructor(RTTIDerivedB *self)
{
 operator delete(self, 8u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1BF0 */
void RTTIDerivedA_deleting_destructor(RTTIDerivedA *self)
{
 operator delete(self, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1C00 */
void DiamondDerived_deleting_destructor(DiamondDerived *self)
{
 operator delete(self, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x1C10 */
void DiamondDerived_virtual_thunk_deleting_destructor(DiamondDerived *self)
{
 operator delete((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 32LL), 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x1C30 */
void DiamondDerived_non_virtual_thunk_deleting_destructor(DiamondDerived *self)
{
 operator delete((char *)self - 16, 0x30u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1C50 */
int template_max_int(int a1, int a2)
{
 int result;

 result = a2;
 if ( a1 >= a2 )
 return a1;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1C60 */
double template_max_double(double a1, double a2)
{
 return fmax(a1, a2);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1C70 */
void template_swap_int(int *a1, int *a2)
{
 int result;

 result = *a1;
 *a1 = *a2;
 *a2 = result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1C80 */
void Container_int_Constructor(long long a1)
{
 *(unsigned int *)(a1 + 40) = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1C90 */
long long Container_int_push(long long a1, int a2)
{
 long long result; // rax

 result = *(int *)(a1 + 40);
 if ( (int)result <= 9 )
 {
 *(unsigned int *)(a1 + 40) = result + 1;
 *(unsigned int *)(a1 + 4 * result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1CB0 */
long long Container_int_get(long long a1, int a2)
{
 long long result; // rax

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1CD0 */
long long Container_int_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1CE0 */
void Container_double_Constructor(long long a1)
{
 *(unsigned int *)(a1 + 80) = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1CF0 */
long long Container_double_push(long long a1, double a2)
{
 long long result; // rax

 result = *(int *)(a1 + 80);
 if ( (int)result <= 9 )
 {
 *(unsigned int *)(a1 + 80) = result + 1;
 *(double *)(a1 + 8 * result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1D10 */
double Container_double_get(long long a1, int a2)
{
 double result; // xmm0_8

 result = 0.0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1D40 */
long long Container_double_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: .term_proc @ 0x1D48 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __printf_chk @ 0x4048 */

/* FAILED to decompile: __cxa_begin_catch @ 0x4050 */

/* FAILED to decompile: strlen @ 0x4058 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x4060 */

/* FAILED to decompile: __libc_start_main @ 0x4070 */

/* FAILED to decompile: __cxa_atexit @ 0x4078 */

/* FAILED to decompile: _Znwm @ 0x4080 */

/* FAILED to decompile: _ZdlPvm @ 0x4088 */

/* FAILED to decompile: __stack_chk_fail @ 0x4090 */

/* FAILED to decompile: __dynamic_cast @ 0x4098 */

/* FAILED to decompile: strcmp @ 0x40A8 */

/* FAILED to decompile: __cxa_rethrow @ 0x40B0 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x40B8 */

/* FAILED to decompile: puts @ 0x40C0 */

/* FAILED to decompile: __cxa_end_catch @ 0x40C8 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x40D0 */

/* FAILED to decompile: __cxa_throw @ 0x40D8 */

/* FAILED to decompile: _Unwind_Resume @ 0x40E0 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x40E8 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x40F0 */

/* FAILED to decompile: __gmon_start__ @ 0x4100 */

/* Total functions decompiled: 85, failed: 21 */
