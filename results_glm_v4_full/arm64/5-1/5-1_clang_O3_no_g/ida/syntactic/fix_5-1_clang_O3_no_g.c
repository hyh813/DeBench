/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_clang_O3_no_g
 * Processor: arm
 */

/* Stub declarations */
#define JUMPOUT(x) do { } while(0)

/* Definition for call_weak_fn - typically used for weak symbol resolution */
long long call_weak_fn(void)
{
 return 0;
}

/* C++ runtime declarations */
typedef long ptrdiff_t;

/* Standard type definitions */
#include <stddef.h>
typedef unsigned long size_t;
typedef unsigned long long uintptr_t;

/* C++ type_info structure (C-compatible version) */
struct type_info {
    const char *name;
};

/* C++ operator new/delete declarations (mangled names) */
extern void *_Znwm(size_t);  // operator new(unsigned long)

/* C++ runtime implementations */
#include <stdlib.h>

/* operator new implementation */
void *_Znwm(size_t size)
{
 return malloc(size);
}

/* operator delete implementation */
void _ZdlPv(void *ptr)
{
 free(ptr);
}

/* Forward declarations for RTTI classes */

/* Standard C++ operator new/delete (mangled names) - provided by C++ runtime */

/* C++ exception handling */
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *, struct type_info *, void (*)(void *));
extern void *__dynamic_cast(void *, const struct type_info *, const struct type_info *, ptrdiff_t);

/* C++ exception handling implementations */
void *__cxa_allocate_exception(size_t size)
{
 return malloc(size);
}

/* Note: __cxa_throw typically does not return */
void __cxa_throw(void *exception, struct type_info *type, void (*destructor)(void *))
{
 /* Stub - in real implementation this would unwind and handle the exception */
 free(exception);
}

void *__dynamic_cast(void *obj, const struct type_info *src, const struct type_info *dst, ptrdiff_t offset)
{
 /* Simplified stub - check if src and dst types match */
 if (src == dst)
 return (char *)obj + offset;
 return 0;
}

/* Additional C++ exception handling stubs */
void *__cxa_begin_catch(void *exception)
{
 /* Stub - return the exception object */
 return exception;
}

void __cxa_end_catch(void)
{
 /* Stub - cleanup exception handling */
}

void __cxa_rethrow(void)
{
 /* Stub - rethrow current exception */
}

/* Unwind resume stub */
void _Unwind_Resume(void)
{
 /* Stub - resume exception unwinding */
}

/* Exception personality function stub */
int __gxx_personality_v0(void)
{
 /* Stub - exception personality routine */
 return 0;
}

/* abort implementation */
void abort(void)
{
 /* Stub - terminate program */
 while(1);
}

/* __gmon_start__ - profiling entry point (weak) */
void __gmon_start__(void) __attribute__((weak));
void __gmon_start__(void)
{
 /* Stub - profiling initialization */
}

/* __cxa_finalize - run cleanup handlers */
void __cxa_finalize(void *dso_handle)
{
 /* Stub - finalize C++ runtime */
}

/* Compatibility wrappers */
void *operator_new(size_t size) { return _Znwm(size); }
void operator_delete(void *ptr) { _ZdlPv(ptr); }

/* RTTI typeinfo symbols */
extern struct type_info typeinfo_for_int;
extern struct type_info typeinfo_for_RTITIBase;
extern struct type_info typeinfo_for_RTTIDerivedA;
extern struct type_info typeinfo_for_RTTIDerivedB;

/* VTable symbols */
extern void *off_11D58[];
extern void *off_11D80[];

/* C standard library declarations */
extern int puts(const char *s);
extern size_t strlen(const char *s);
extern int printf(const char *format, ...);
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);

/* __cxa_atexit implementation */
typedef struct __atexit_handler {
 void (*func)(void *);
 void *arg;
 void *dso_handle;
 struct __atexit_handler *next;
} __atexit_handler_t;

static __atexit_handler_t *__atexit_handlers = NULL;

int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
 __atexit_handler_t *handler = malloc(sizeof(__atexit_handler_t));
 if (!handler)
 return -1;
 handler->func = func;
 handler->arg = arg;
 handler->dso_handle = dso_handle;
 handler->next = __atexit_handlers;
 __atexit_handlers = handler;
 return 0;
}

/* std namespace stub for ios_base::Init */
struct ios_base_Init;
extern void std_ios_base_Init_Init(struct ios_base_Init *this);
extern void std_ios_base_Init_dInit(struct ios_base_Init *this);

extern struct ios_base_Init std___ioinit;
extern void *_dso_handle;

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
long long GLOBAL__sub_I_5_1_cpp()
{
 std_ios_base_Init_Init(&std___ioinit);
 return __cxa_atexit((void (*)(void *))std_ios_base_Init_dInit, &std___ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* LifecycleClass declaration */
struct LifecycleClass {
    int instance_count;
};

/* RTTI class declarations */
struct RTTIBase {
    void (**vptr)(void);
    int (*virtual_func)(void);
};

struct RTTIDerivedA {
    struct RTTIBase base;
    int (*virtual_func)(void);
    void (*destructor)(void);
};

struct RTTIDerivedB {
    struct RTTIBase base;
    int (*virtual_func)(void);
    void (*destructor)(void);
};

/* std namespace stub for ios_base::Init */
struct ios_base {
    struct Init {
    };
};

/* ios_base::Init type definition */
struct ios_base_Init {
    int dummy; // Placeholder member for complete type
};

/* Global data definitions */
extern unsigned long long xmmword_1767[2];
extern const char asc_1734[];
extern const char aCppL301D[];
extern const char aCppL302D[];
extern const char aCppL303D[];
extern const char aCppL304D[];
extern const char aCppL305D[];
extern const char aCppL306D[];
extern const char aCppL307D[];
extern const char aCppL308D[];
extern const char aCppL309D[];
extern struct LifecycleClass lifecycleClassInstance;

/* std::ios_base::Init implementation */
void std_ios_base_Init_Init(struct ios_base_Init *this)
{
 /* Empty stub - ios_base::Init constructor */
}

void std_ios_base_Init_dInit(struct ios_base_Init *this)
{
 /* Empty stub - ios_base::Init destructor */
}

/* Function: _Z20test_cpp_member_funcv @ 0x1014 */
long long test_cpp_member_func(void)
{
 unsigned char v1[31]; // [xsp+Ch] [xbp-24h] BYREF
 char v2; // [xsp+2Bh] [xbp-5h]

 v2 = 0;
 *(unsigned long long *)v1 = (unsigned long long)(uintptr_t)(void *)"Test";
 *(unsigned long long *)&v1[15] = xmmword_1767[0];
 return (unsigned int)strlen(v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1064 */
long long test_cpp_constructor(void)
{
 return (unsigned int)(1001 * lifecycleClassInstance.instance_count + 21);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x107C */
long long call_virtual_func(long long ( ***a1)(unsigned long long))
{
 return (**a1)((unsigned long long)a1);
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
 __cxa_throw(exception, &typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x11BC */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x11C4 */
long long test_cpp_rtti(void)
{
 unsigned long long *v0; // x19
 void *v1; // x20
 int v2; // w22
 int v3; // w21

 v0 = (unsigned long long *)operator_new(8u);
 *v0 = (unsigned long long)(uintptr_t)(void *)off_11D58;
 v1 = (void *)operator_new(8u);
 *(unsigned long long *)v1 = (unsigned long long)(uintptr_t)(void *)off_11D80;
 if ( __dynamic_cast(
 v0,
 (const struct type_info *)&typeinfo_for_RTITIBase,
 (const struct type_info *)&typeinfo_for_RTTIDerivedA,
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
 (const struct type_info *)&typeinfo_for_RTITIBase,
 (const struct type_info *)&typeinfo_for_RTTIDerivedB,
 0) )
 {
 v3 = v2 + 200;
 }
 else
 {
 v3 = v2;
 }
 operator_delete(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
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
 *(unsigned long long *)v1 = (unsigned long long)(uintptr_t)(void *)"Test";
 *(unsigned long long *)&v1[15] = xmmword_1767[0];
 v0 = strlen(v1);
 printf(aCppL301D, (unsigned int)(v0 + 4700));
 printf(aCppL302D, (unsigned int)(1001 * lifecycleClassInstance.instance_count + 21));
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
void RTTIDerivedA_destructor(void *this)
{
 operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1534 */
long long RTTIDerivedA_getType(void *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x153C */
void RTTIBase_destructor(void *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1540 */
// attributes: thunk
void RTTIDerivedB_destructor(void *this)
{
 operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1544 */
long long RTTIDerivedB_getType(void *this)
{
 return 2;
}


/* Function: .term_proc @ 0x154C */
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

/* Global data definitions */
unsigned long long xmmword_1767[2] = { 0, 0 };
const char asc_1734[] = "Test";
const char aCppL301D[] = "%d\n";
const char aCppL302D[] = "%d\n";
const char aCppL303D[] = "%d\n";
const char aCppL304D[] = "%d\n";
const char aCppL305D[] = "%d\n";
const char aCppL306D[] = "%d\n";
const char aCppL307D[] = "%d\n";
const char aCppL308D[] = "%d\n";
const char aCppL309D[] = "%d\n";

struct LifecycleClass lifecycleClassInstance = { 0 };

/* Global C++ runtime objects */
struct ios_base_Init std___ioinit = { 0 };
void *_dso_handle = 0;

/* VTable definitions for RTTI classes */
void *off_11D58[] = {
    (void *)RTTIBase_destructor,
    (void *)RTTIDerivedA_getType,
    (void *)RTTIDerivedA_destructor
};

void *off_11D80[] = {
    (void *)RTTIBase_destructor,
    (void *)RTTIDerivedB_getType,
    (void *)RTTIDerivedB_destructor
};

/* type_info definitions */
struct type_info typeinfo_for_int = { "int" };
struct type_info typeinfo_for_RTITIBase = { "RTTIBase" };
struct type_info typeinfo_for_RTTIDerivedA = { "RTTIDerivedA" };
struct type_info typeinfo_for_RTTIDerivedB = { "RTTIDerivedB" };
