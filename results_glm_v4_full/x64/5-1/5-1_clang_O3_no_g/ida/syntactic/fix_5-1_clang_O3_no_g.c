/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_clang_O3_no_g
 * Processor: pc
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <math.h>
#include <new>

/* Stub declarations for missing C++ runtime components */
struct type_info {
    void **vtable;  /* virtual table pointer */
    const char *name;  /* type name */
};

struct __class_type_info {
    void **vtable;
    const char *name;
};

namespace std {
    struct ios_base {
        struct Init {
            Init();
            ~Init();
        };
    };
    extern ios_base::Init __ioinit;
}

/* Stub for missing globals */
extern void *_gmon_start__;
extern void *_dso_handle;

/* Stub for JUMPOUT macro */
#define JUMPOUT(x) do {} while(0)

/* Data constants */
static unsigned char xmmword_21F8[32] = {0};
static const char s[] = "Testing C++ features";
static const char format[] = "test_cpp_member_func: %d\n";
static const char aCppL302D[] = "test_cpp_constructor: %d\n";
static const char aCppL303D[] = "test_cpp_virtual_func: %d\n";
static const char aCppL304D[] = "test_cpp_multiple_inheritance: %d\n";
static const char aCppL305D[] = "test_cpp_diamond_inheritance: %d\n";
static const char aCppL306D[] = "test_cpp_operator_overload: %d\n";
static const char aCppL307D[] = "test_cpp_template_func: %d\n";
static const char aCppL308D[] = "test_cpp_template_class: %d\n";
static const char aCppL309D[] = "test_cpp_lambda: %d\n";

/* Stub for missing class */
struct LifecycleClass {
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

/* Stub for Container template class */
template<typename T>
struct Container {
    Container();
    long long push(T value);
    T get(int index);
    long long getSize();
};

/* Stub for RTTI classes */
struct RTTIBase {
    virtual ~RTTIBase();
};

struct RTTIDerivedA : RTTIBase {
    virtual ~RTTIDerivedA();
    virtual long long getType();
};

struct RTTIDerivedB : RTTIBase {
    virtual ~RTTIDerivedB();
    virtual long long getType();
};

/* Function declarations */
void *__cxa_allocate_exception(unsigned int size);
void __cxa_throw(void *exception, struct type_info *type_info, void *dest);

/* Stub implementations for exception handling */
void *__cxa_allocate_exception(unsigned int size)
{
    return malloc(size);
}

void __cxa_throw(void *exception, struct type_info *type_info, void *dest)
{
    /* Stub - in real code this would unwind and never return */
    fprintf(stderr, "Exception thrown (not handled in this stub)\n");
    exit(1);
}
int __cxa_atexit(void (*func)(void *), void *obj, void *dso);
void *__dynamic_cast(void *src, const struct __class_type_info *src_type, 
                     const struct __class_type_info *dst_type, int src2dst);
void *operator new(unsigned long size);
void operator delete(void *ptr);

/* Function: .init_proc @ 0x1000 - CRT stub removed */


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 JUMPOUT(0);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1120 - CRT stub removed */



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1240 */
long long test_cpp_member_func(void)
{
 unsigned char s[31]; // [rsp+4h] [rbp-24h] BYREF
 char v2; // [rsp+23h] [rbp-5h]

 *(unsigned long long *)&s[15] = *(__int128 *)((char *)&xmmword_21F8 + 15);
 *(unsigned long long *)s = *(unsigned long long *)xmmword_21F8;
 v2 = 0;
 return (unsigned int)strlen((char *)s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1280 */
long long test_cpp_constructor(void)
{
 return (unsigned int)(1001 * LifecycleClass::instance_count + 21);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x12A0 */
long long call_virtual_func(void *a1)
{
 long long (*vfunc)(void *) = (long long (*)(void *))(unsigned long long)*(long long **)a1;
 return vfunc(a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x12B0 */
long long test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x12C0 */
long long test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x12D0 */
long long test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x12E0 */
long long test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x12F0 */
long long test_cpp_template_func(void)
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x1300 */
long long test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1310 */
long long test_cpp_lambda(void)
{
 return 85;
}


/* Stub for typeinfo */
extern struct type_info typeinfo_for_int;
struct type_info typeinfo_for_int = {};

/* Function: _Z18test_cpp_exceptionv @ 0x1320 */
void test_cpp_exception(void)
{
 unsigned int *exception; // rax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, &typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x13E0 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Stubs for RTTI typeinfo */
extern struct __class_type_info typeinfo_for_RTTIBase;
extern struct __class_type_info typeinfo_for_RTTIDerivedA;
extern struct __class_type_info typeinfo_for_RTTIDerivedB;

/* Function: _Z13test_cpp_rttiv @ 0x13F0 */
long long test_cpp_rtti(void)
{
 return 344;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x14A0 */
void test_cpp_oo_features(void)
{
 int v0; // eax
 unsigned char s[31]; // [rsp+Ch] [rbp-4Ch] BYREF
 char v2; // [rsp+2Bh] [rbp-2Dh]

 puts(::s);
 *(unsigned long long *)&s[15] = *(__int128 *)((char *)&xmmword_21F8 + 15);
 *(unsigned long long *)s = *(unsigned long long *)xmmword_21F8;
 v2 = 0;
 v0 = strlen((char *)s);
 printf(format, (unsigned int)(v0 + 4700));
 printf(aCppL302D, (unsigned int)(1001 * LifecycleClass::instance_count + 21));
 printf(aCppL303D, 42);
 printf(aCppL304D, 71);
 printf(aCppL305D, 650);
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: main @ 0x1680 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
 return 0;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1690 */
long long template_max_int(unsigned int a1, unsigned int a2)
{
 long long result; // rax

 result = a2;
 if ( (int)a1 > (int)a2 )
 return a1;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x16A0 */
double template_max_double(double a1, double a2)
{
 return fmax(a1, a2);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x16B0 */
long long template_swap_int(unsigned int *a1, unsigned int *a2)
{
 long long result; // rax

 result = (unsigned int)*a1;
 *a1 = *a2;
 *a2 = result;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x16C0 */
void Container_int_Constructor(long long a1)
{
 *(unsigned int *)(a1 + 40) = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x16D0 */
long long Container_int_push(long long a1, int a2)
{
 long long result; // rax

 result = *(int *)(a1 + 40);
 if ( result <= 9 )
 {
 *(unsigned int *)(a1 + 40) = result + 1;
 *(unsigned int *)(a1 + 4 * result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x16F0 */
long long Container_int_get(long long a1, int a2)
{
 long long result; // rax

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4LL * (unsigned int)a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1710 */
long long Container_int_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1720 */
void Container_double_Constructor(long long a1)
{
 *(unsigned int *)(a1 + 80) = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1730 */
long long Container_double_push(long long a1, double a2)
{
 long long result; // rax

 result = *(int *)(a1 + 80);
 if ( result <= 9 )
 {
 *(unsigned int *)(a1 + 80) = result + 1;
 *(double *)(a1 + 8 * result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1750 */
double Container_double_get(long long a1, int a2)
{
 double result; // xmm0_8

 result = 0.0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8LL * (unsigned int)a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1770 */
long long Container_double_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1780 */
// attributes: thunk
void RTTIDerivedA_deleting_destructor(RTTIDerivedA *self)
{
 operator delete(self);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1790 */
long long RTTIDerivedA_getType(RTTIDerivedA *self)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x17A0 */
void RTTIBase_destructor(RTTIBase *self)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x17B0 */
// attributes: thunk
void RTTIDerivedB_deleting_destructor(RTTIDerivedB *self)
{
 operator delete(self);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x17C0 */
long long RTTIDerivedB_getType(RTTIDerivedB *self)
{
 return 2;
}


/* Function: .term_proc @ 0x17C8 */
void term_proc()
{
 ;
}


/* FAILED to decompile: printf @ 0x40D8 */

/* FAILED to decompile: __cxa_begin_catch @ 0x40E0 */

/* FAILED to decompile: strlen @ 0x40E8 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x40F0 */

/* FAILED to decompile: __libc_start_main @ 0x4100 */

/* FAILED to decompile: __cxa_atexit @ 0x4108 */

/* FAILED to decompile: _ZdlPv @ 0x4110 */

/* FAILED to decompile: _Znwm @ 0x4118 */

/* FAILED to decompile: __dynamic_cast @ 0x4120 */

/* FAILED to decompile: __cxa_rethrow @ 0x4130 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x4138 */

/* FAILED to decompile: puts @ 0x4140 */

/* FAILED to decompile: __cxa_end_catch @ 0x4148 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x4150 */

/* FAILED to decompile: __cxa_throw @ 0x4158 */

/* FAILED to decompile: _Unwind_Resume @ 0x4160 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x4168 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4170 */

/* FAILED to decompile: __gmon_start__ @ 0x4180 */

/* Total functions decompiled: 40, failed: 19 */
