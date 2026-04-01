/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_clang_O2_no_g
 * Processor: arm
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* External library function declarations */
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern unsigned long strlen(const char *s);
extern void abort(void);
extern void exit(int status);
extern void *malloc(unsigned long size);
extern void free(void *ptr);

/* Global declarations for decompiled symbols */
unsigned long long xmmword_175B = 0;
void JUMPOUT(int x) { }
long long call_weak_fn(void);
int main(int argc, const char **argv, const char **envp);
__attribute__((noreturn)) void __cxa_throw(void *exception, void *tinfo, void *dest);

/* C++ exception handling implementations */
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle) {
    (void)func; (void)arg; (void)dso_handle;
    return 0;
}

void *__cxa_allocate_exception(unsigned long size) {
    return malloc(size);
}

__attribute__((noreturn)) void __cxa_throw(void *exception, void *tinfo, void *dest) {
    (void)exception; (void)tinfo; (void)dest;
    abort();
}

void __cxa_begin_catch(void *exception) {
    (void)exception;
}

void __cxa_end_catch(void) {
}

void __cxa_rethrow(void) {
}

void __cxa_finalize(void *d) {
    (void)d;
}

/* C++ runtime function implementations */
void *cpp_operator_new(unsigned long size) {
    return malloc(size);
}

void cpp_operator_delete(void *ptr) {
    free(ptr);
}

void *__dynamic_cast(void *src_ptr, const void *src_type, const void *dst_type, int src_class) {
    return 0;
}

/* C++ iostream initialization implementations */
void _ZNSt8ios_base4InitC1Ev(void *this) {
    (void)this;
}

void _ZNSt8ios_base4InitD1Ev(void *this) {
    (void)this;
}

/* Additional C++ runtime implementations */
int __gxx_personality_v0(int version, int actions, long long exception_class, void *uefi_exception, void *context) {
    (void)version; (void)actions; (void)exception_class; (void)uefi_exception; (void)context;
    return 0;
}

void _Unwind_Resume(void *exception) {
    (void)exception;
}

/* RTTI class definitions */
typedef struct RTTIBase {
    void *vtable;
} RTTIBase;

typedef struct RTTIDerivedA {
    void *vtable;
} RTTIDerivedA;

typedef struct RTTIDerivedB {
    void *vtable;
} RTTIDerivedB;

/* LifecycleClass declaration */
typedef struct LifecycleClass {
    int instance_count;
} LifecycleClass;
int LifecycleClass_instance_count = 0;

/* std namespace declarations */
void *__dso_handle = 0;

/* String constants */
char *asc_1728 = "Test string";
char *aCppL301D = "Result1: %d\n";
char *aCppL302D = "Result2: %d\n";
char *aCppL303D = "Result3: %d\n";
char *aCppL304D = "Result4: %d\n";
char *aCppL305D = "Result5: %d\n";
char *aCppL306D = "Result6: %d\n";
char *aCppL307D = "Result7: %d\n";
char *aCppL308D = "Result8: %d\n";
char *aCppL309D = "Result9: %d\n";

/* RTTI and offset declarations */
void *off_11D58 = 0;
void *off_11D80 = 0;
void *typeinfo_for_RTTIBase = 0;
void *typeinfo_for_RTTIDerivedA = 0;
void *typeinfo_for_RTTIDerivedB = 0;

/* Function: .init_proc @ 0xD48 */
long long init_proc()
{
 return call_weak_fn();
}

/* Entry point _start */
void _start(void)
{
 int ret = main(0, 0, 0);
 exit(ret);
}


/* Function: sub_D60 @ 0xD60 */
void sub_D60()
{
 JUMPOUT(0);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0xEC0 */
long long GLOBAL__sub_I_5_1_cpp()
{
 return 0;
}



long long call_weak_fn(void) { return 0; }

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
 *(unsigned long long *)&v1[15] = xmmword_175B;
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
 long long (**vtable)(void *) = (long long (**)(void *))a1;
 return vtable[0](a1);
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

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, 0, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x11B0 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x11B8 */
long long test_cpp_rtti(void)
{
 unsigned long long *v0; // x19
 void *v1; // x20
 int v2; // w22
 int v3; // w21

 v0 = (unsigned long long *)cpp_operator_new(8u);
 *v0 = (unsigned long long)off_11D58;
 v1 = (void *)cpp_operator_new(8u);
 *(unsigned long long *)v1 = (unsigned long long)off_11D80;
 if ( __dynamic_cast(
 v0,
 (const void *)&typeinfo_for_RTTIBase,
 (const void *)&typeinfo_for_RTTIDerivedA,
 0) )
 {
 v2 = 130;
 }
 else
 {
 v2 = 30;
 }
 if ( __dynamic_cast(
 v1,
 (const void *)&typeinfo_for_RTTIBase,
 (const void *)&typeinfo_for_RTTIDerivedB,
 0) )
 {
 v3 = v2 + 200;
 }
 else
 {
 v3 = v2;
 }
 cpp_operator_delete(v0);
 cpp_operator_delete(v1);
 return (unsigned int)(v3 + 14);
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1278 */
void test_cpp_oo_features(void)
{
 int v0; // w0
 unsigned char v1[31]; // [xsp+Ch] [xbp-24h] BYREF
 char v2; // [xsp+2Bh] [xbp-5h]

 puts(asc_1728);
 v2 = 0;
 *(unsigned long long *)v1 = *(unsigned long long *)"Test";
 *(unsigned long long *)&v1[15] = xmmword_175B;
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


/* Function: main @ 0x144C */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1464 */
long long template_max_int(long long result, int a2)
{
 if ( (int)result <= a2 )
 return (unsigned int)a2;
 else
 return (unsigned int)result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1470 */
double template_max_double(double result, double a2)
{
 if ( result <= a2 )
 return a2;
 return result;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x147C */
int * template_swap_int(int *result, int *a2)
{
 int v2; // w9

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1490 */
long long Container_int_Constructor(long long result)
{
 *(unsigned int *)(result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1498 */
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


/* Function: _ZNK9ContainerIiE3getEi @ 0x14B4 */
long long Container_int_get(long long a1, unsigned int a2)
{
 long long result; // x0

 result = 0;
 if ( (a2 & 0x80000000) == 0 && *(unsigned int *)(a1 + 40) > (signed int)a2 )
 return *(unsigned int *)(a1 + 4LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x14D4 */
long long Container_int_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x14DC */
long long Container_double_Constructor(long long result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x14E4 */
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


/* Function: _ZNK9ContainerIdE3getEi @ 0x1500 */
double Container_double_get(long long a1, unsigned int a2)
{
 double result; // d0

 result = 0.0;
 if ( (a2 & 0x80000000) == 0 && *(unsigned int *)(a1 + 80) > (signed int)a2 )
 return *(double *)(a1 + 8LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x151C */
long long Container_double_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1524 */
// attributes: thunk
void RTTIDerivedA_destructor(RTTIDerivedA *this)
{
 cpp_operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1528 */
long long RTTIDerivedA_getType(RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x1530 */
void RTTIBase_destructor(RTTIBase *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1534 */
// attributes: thunk
void RTTIDerivedB_destructor(RTTIDerivedB *this)
{
 cpp_operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1538 */
long long RTTIDerivedB_getType(RTTIDerivedB *this)
{
 return 2;
}


/* Function: .term_proc @ 0x1540 */
void term_proc()
{
 ;
}


/* FAILED to decompile: puts @ 0x12130 */

/* FAILED to decompile: strlen @ 0x12138 */

/* FAILED to decompile: __cxa_begin_catch @ 0x12140 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x12148 */

/* FAILED to decompile: __cxa_finalize @ 0x12150 */

/* FAILED to decompile: __libc_start_main @ 0x12160 */

/* FAILED to decompile: _ZdlPv @ 0x12168 */

/* FAILED to decompile: _Znwm @ 0x12170 */

/* FAILED to decompile: __dynamic_cast @ 0x12178 */

/* FAILED to decompile: __cxa_atexit @ 0x12180 */

/* FAILED to decompile: __cxa_rethrow @ 0x12190 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x12198 */

/* FAILED to decompile: abort @ 0x121A0 */

/* FAILED to decompile: __cxa_end_catch @ 0x121A8 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x121B0 */

/* FAILED to decompile: __cxa_throw @ 0x121B8 */

/* FAILED to decompile: _Unwind_Resume @ 0x121C0 */

/* FAILED to decompile: printf @ 0x121C8 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x121D0 */

/* FAILED to decompile: __gmon_start__ @ 0x121E0 */

/* Total functions decompiled: 41, failed: 20 */
