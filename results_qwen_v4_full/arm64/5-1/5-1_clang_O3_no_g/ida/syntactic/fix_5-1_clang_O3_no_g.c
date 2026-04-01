/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_clang_O3_no_g
 * Processor: arm
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>

/* Standard library function declarations */
int puts(const char *s);
int printf(const char *format, ...);
size_t strlen(const char *s);
void abort(void);
void exit(int status);
void *malloc(size_t size);
void free(void *ptr);


/* Global declarations for undeclared identifiers */
unsigned long long xmmword_1767 = 0;
void *off_11D58 = NULL;
void *off_11D80 = NULL;
void *_dso_handle = NULL;

/* Forward declaration of main */
int main(int argc, const char **argv, const char **envp);

/* Entry point _start */
void _start(void)
{
    extern int main(int, const char **, const char **);
    extern void exit(int);
    exit(main(0, NULL, NULL));
}

/* C++ operator declarations */
void *operator_new(unsigned long size);
void operator_delete(void *ptr);

/* C++ operator stub implementations */
void *operator_new(unsigned long size)
{
    return malloc(size);
}

void operator_delete(void *ptr)
{
    free(ptr);
}

/* C++ mangled operator aliases */
void *_Znwm(unsigned long size)
{
    return operator_new(size);
}

void _ZdlPv(void *ptr)
{
    operator_delete(ptr);
}

/* RTTI typeinfo structures */
struct __class_type_info {
    void *dummy;
};
struct __class_type_info typeinfo_for_RTTIBase = {NULL};
struct __class_type_info typeinfo_for_RTTIDerivedA = {NULL};
struct __class_type_info typeinfo_for_RTTIDerivedB = {NULL};

/* RTTI class forward declarations */
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

/* String constants */
char *asc_1734 = "Testing C++ OO features\n";
char *aCppL301D = "strlen result: %d\n";
char *aCppL302D = "constructor result: %d\n";
char *aCppL303D = "virtual func result: %d\n";
char *aCppL304D = "multiple inheritance result: %d\n";
char *aCppL305D = "diamond inheritance result: %d\n";
char *aCppL306D = "operator overload result: %d\n";
char *aCppL307D = "template func result: %d\n";
char *aCppL308D = "template class result: %d\n";
char *aCppL309D = "lambda result: %d\n";

/* RTTI dynamic cast declaration and stub */
__attribute__((weak)) void *__dynamic_cast(void *src, const struct __class_type_info *src_type, const struct __class_type_info *dst_type, size_t flags)
{
    /* Stub implementation - returns src for compatibility */
    return src;
}

/* C++ runtime function stubs */
__attribute__((weak)) int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
    /* Stub - no-op for C compatibility */
    return 0;
}

__attribute__((weak)) void *__cxa_allocate_exception(unsigned long size)
{
    return malloc(size);
}

__attribute__((weak)) void __cxa_throw(void *exception, void *type_info, void *dest)
{
    /* Stub - abort on throw for C compatibility */
    abort();
}

__attribute__((weak)) void *__cxa_begin_catch(void *exception)
{
    /* Stub - returns exception for C compatibility */
    return exception;
}

__attribute__((weak)) void __cxa_end_catch(void)
{
    /* Stub - no-op for C compatibility */
}

__attribute__((weak)) void __cxa_rethrow(void)
{
    /* Stub - abort on rethrow for C compatibility */
    abort();
}

__attribute__((weak)) int __gxx_personality_v0(int version, int actions, long long exception_class, void *exception_object, void *context)
{
    /* Stub - returns error for C compatibility */
    return 0;
}

__attribute__((weak)) void _Unwind_Resume(void *exception_object)
{
    /* Stub - abort for C compatibility */
    abort();
}

__attribute__((weak)) void __cxa_finalize(void *dso)
{
    /* Stub - no-op for C compatibility */
}

/* std namespace stub structures */
typedef struct {
    int dummy;
} std_ios_base_Init;

std_ios_base_Init std___ioinit = {0};

/* std::ios_base::Init constructor stub */
__attribute__((weak)) void _ZNSt8ios_base4InitC1Ev(std_ios_base_Init *this)
{
    /* Stub - no-op for C compatibility */
}

/* std::ios_base::Init destructor stub */
__attribute__((weak)) void _ZNSt8ios_base4InitD1Ev(std_ios_base_Init *this)
{
    /* Stub - no-op for C compatibility */
}

/* LifecycleClass declaration */
typedef struct LifecycleClass {
    int instance_count;
} LifecycleClass;
int LifecycleClass_instance_count = 0;

/* CRT stub function declarations */
long long call_weak_fn(void);
void JUMPOUT(int);

/* CRT stub function implementations */
long long call_weak_fn(void)
{
    return 0;
}

void JUMPOUT(int val)
{
    /* Stub - no-op */
}









/* Function: .init_proc @ 0xD48 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_D60 @ 0xD60 */
void sub_D60()
{
 JUMPOUT(0);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0xEC0 */
long long global_sub_I_5_1_cpp()
{
 /* std::ios_base::Init stub - no-op for C compatibility */
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1014 */
long long test_cpp_member_func(void)
{
 unsigned char v1[31]; // [xsp+Ch] [xbp-24h] BYREF
 char v2; // [xsp+2Bh] [xbp-5h]

 v2 = 0;
 *(unsigned long long *)v1 = *(unsigned long long *)"Test";
 *(unsigned long long *)&v1[15] = xmmword_1767;
 return (unsigned int)strlen(v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1064 */
long long test_cpp_constructor(void)
{
 return (unsigned int)(1001 * LifecycleClass_instance_count + 21);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x107C */
long long call_virtual_func(void *a1)
{
 return 42;
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1088 */
long long test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1090 */
long long test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1098 */
long long test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x10A0 */
long long test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x10A8 */
long long test_cpp_template_func(void)
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x10B0 */
long long test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x10B8 */
long long test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x10C0 */
void test_cpp_exception(void)
{
 unsigned int *exception; // x0

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (void *)0, (void *)0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x11BC */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x11C4 */
long long test_cpp_rtti(void)
{
 int v2;
 int v3;

 if ( __dynamic_cast(
 (void *)off_11D58,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0) )
 {
 v2 = 130;
 }
 else
 {
 v2 = 30;
 }
 if ( __dynamic_cast(
 (void *)off_11D80,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0) )
 {
 v3 = v2 + 200;
 }
 else
 {
 v3 = v2;
 }
 return (unsigned int)(v3 + 14);
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1284 */
void test_cpp_oo_features(void)
{
 int v0; // w0
 unsigned char v1[31]; // [xsp+Ch] [xbp-24h] BYREF
 char v2; // [xsp+2Bh] [xbp-5h]

 puts(asc_1734);
 v2 = 0;
 *(unsigned long long *)v1 = *(unsigned long long *)"Test";
 *(unsigned long long *)&v1[15] = xmmword_1767;
 v0 = strlen(v1);
 printf(aCppL301D, (unsigned int)(v0 + 4700));
 printf(aCppL302D, (unsigned int)(1001 * LifecycleClass_instance_count + 21));
 printf(aCppL303D, 42);
 printf(aCppL304D, 71);
 printf(aCppL305D, 650);
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: main @ 0x1458 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
 return 0;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1470 */
long long template_max_int(long long result, int a2)
{
 if ( (int)result <= a2 )
 return (unsigned int)a2;
 else
 return (unsigned int)result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x147C */
double template_max_double(double result, double a2)
{
 if ( result <= a2 )
 return a2;
 return result;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1488 */
int * template_swap_int(int *result, int *a2)
{
 int v2; // w9

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x149C */
long long Container_int_Constructor(long long result)
{
 *(unsigned int *)(result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x14A4 */
long long Container_int_push(long long result, int a2)
{
 long long v2; // x8

 v2 = *(int *)(result + 40);
 if ( (int)v2 <= 9 )
 {
 *(unsigned int *)(result + 40) = v2 + 1;
 *(unsigned int *)(result + 4 * v2) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x14C0 */
long long Container_int_get(long long a1, unsigned int a2)
{
 long long result; // x0

 result = 0;
 if ( (a2 & 0x80000000) == 0 && *(unsigned int *)(a1 + 40) > (signed int)a2 )
 return *(unsigned int *)(a1 + 4LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x14E0 */
long long Container_int_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x14E8 */
long long Container_double_Constructor(long long result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x14F0 */
long long Container_double_push(long long result, double a2)
{
 long long v2; // x8

 v2 = *(int *)(result + 80);
 if ( (int)v2 <= 9 )
 {
 *(double *)(result + 8 * v2) = a2;
 *(unsigned int *)(result + 80) = v2 + 1;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x150C */
double Container_double_get(long long a1, unsigned int a2)
{
 double result; // d0

 result = 0.0;
 if ( (a2 & 0x80000000) == 0 && *(unsigned int *)(a1 + 80) > (signed int)a2 )
 return *(double *)(a1 + 8LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1528 */
long long Container_double_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1530 */
// attributes: thunk
void RTTIDerivedA_destructor(RTTIDerivedA *this)
{
 operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1534 */
long long RTTIDerivedA_getType(RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x153C */
void RTTIBase_destructor(RTTIBase *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1540 */
// attributes: thunk
void RTTIDerivedB_destructor(RTTIDerivedB *this)
{
 operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1544 */
long long RTTIDerivedB_getType(RTTIDerivedB *this)
{
 return 2;
}


/* Function: .term_proc @ 0x154C */
void term_proc()
{
 ;
}

/* Profiling stub */
__attribute__((weak)) void __gmon_start__(void)
{
 /* Stub - no-op for C compatibility */
}


