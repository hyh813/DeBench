/* Auto-injected type definitions by preprocessor */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Forward declarations for CRT and profiling functions */
extern void *_gmon_start__;
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);
extern void _do_global_dtors_aux(void);

/* Forward declarations for C++ runtime and standard library */
extern void *_dso_handle;
extern void *memcpy(void *dest, const void *src, size_t n);
extern size_t strlen(const char *s);
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern void free(void *ptr);
extern void *_Znwm(size_t size);  /* operator new */
extern void *_Znam(size_t size);  /* operator new[] */
extern void _ZdlPv(void *ptr);    /* operator delete */
extern void _ZdaPv(void *ptr);    /* operator delete[] */
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *exception, void *type_info, void *dest);
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void *__dynamic_cast(void *src, const void *src_type, const void *dst_type, int src_ref_type);
extern void _ZNSt8ios_base4InitC1Ev(void *this_ptr);
extern void _ZNSt8ios_base4InitD1Ev(void *this_ptr);

/* std namespace objects (C compatibility) */
extern void *std___ioinit;

/* Forward declarations for C++ classes */
typedef struct LifecycleClass {
    int instance_count;
} LifecycleClass;
int LifecycleClass_instance_count = 0;

/* String constants */
static const char *asc_21D8 = "CPP Test";
static const char *aCppL301D = "L301: ";
static const char *aCppL302D = "L302: ";
static const char *aCppL303D = "L303: ";
static const char *aCppL304D = "L304: ";
static const char *aCppL305D = "L305: ";
static const char *aCppL306D = "L306: ";
static const char *aCppL307D = "L307: ";
static const char *aCppL308D = "L308: ";
static const char *aCppL309D = "L309: ";

/* Forward declarations for std namespace */
/* namespace std removed - C doesn't support namespaces */

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_clang_Os_no_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 /* stub function - assembly removed for C compatibility */
}


/* Function: sub_1160 @ 0x1160 */
int sub_1160(int a1)
{
 int (*func_ptr)(void) = (int (*)(void))((void*)(uintptr_t)(a1 - 24));
 return func_ptr();
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1170 */
int GLOBAL__sub_I_5_1_cpp()
{
 _ZNSt8ios_base4InitC1Ev(&std___ioinit);
 return __cxa_atexit((void (*)(void *))_ZNSt8ios_base4InitD1Ev, &std___ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_11DC @ 0x11DC */
void sub_11DC(void)
{
}


/* Function: __x86.get_pc_thunk.bx @ 0x11E0 */
void _x86_get_pc_thunk_bx(void)
{
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1319 */
void _x86_get_pc_thunk_dx(void)
{
}


/* Function: __x86.get_pc_thunk.di @ 0x131D */
void _x86_get_pc_thunk_di(void)
{
}


/* Function: _Z20test_cpp_member_funcv @ 0x1324 */
size_t test_cpp_member_func(void)
{
 char dest[40];

 memcpy(dest, "Test", 31);
 dest[31] = 0;
 return strlen(dest) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1370 */
int test_cpp_constructor(void)
{
 int v0; // esi
 unsigned int *v1; // eax
 unsigned int *v2; // ecx
 int v3; // esi

 v0 = 0;
 v1 = (unsigned int *)_Znam(0x14u);
 v2 = v1;
 do
 {
 *v2 = v0;
 v0 += 10;
 ++v2;
 }
 while ( v0 != 50 );
 ++LifecycleClass_instance_count;
 v3 = v1[2] + LifecycleClass_instance_count;
 _ZdaPv(v1);
 --LifecycleClass_instance_count;
 return v3 + 1000 * LifecycleClass_instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x13CF */
int call_virtual_func(void *a1, int a2)
{
 int (*func)(void *, int) = (int (*)(void *, int))((*(void ***)a1)[0]);
 return func(a1, a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x13F4 */
int test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x13FA */
int test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1400 */
int test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1406 */
int test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x140C */
int test_cpp_template_func(void)
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x1412 */
int test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1418 */
int test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x141E */
void test_cpp_exception(void)
{
 unsigned int *exception; // eax
 void *type_info;

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 type_info = (void *)0x1234; /* placeholder for typeinfo for int */
 __cxa_throw(exception, type_info, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1502 */
int test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1508 */
int test_cpp_rtti(void)
{
 unsigned int *v0; // esi
 void *v1; // edi
 void *v2; // eax
 int v3; // esi
 int v4; // ebp
 void *v6; // [esp+8h] [ebp-14h]
 void *typeinfo_base;
 void *typeinfo_derived_a;
 void *typeinfo_derived_b;

 typeinfo_base = (void *)0x2000;
 typeinfo_derived_a = (void *)0x2004;
 typeinfo_derived_b = (void *)0x2008;

 v0 = (unsigned int *)_Znwm(4u);
 *v0 = (unsigned int)typeinfo_base;
 v6 = v0;
 v1 = (void *)_Znwm(4u);
 *(unsigned int *)v1 = (unsigned int)typeinfo_base;
 v2 = __dynamic_cast(
 v0,
 (const void *)typeinfo_base,
 (const void *)typeinfo_derived_a,
 0);
 v3 = 130;
 if ( !v2 )
 v3 = 30;
 v4 = v3 + 200;
 if ( !__dynamic_cast(
 v1,
 (const void *)typeinfo_base,
 (const void *)typeinfo_derived_b,
 0) )
 v4 = v3;
 _ZdlPv(v6);
 (*(void ( **)(void *))(*(unsigned int *)v1 + 4))(v1);
 return v4 + 14;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x15C0 */
void test_cpp_oo_features(void)
{
 size_t v0; // eax
 int v1; // eax
 char dest[40]; // [esp+14h] [ebp-28h] BYREF

 puts(asc_21D8);
 memcpy(dest, "Test", 0x1F);
 dest[31] = 0;
 v0 = strlen(dest);
 printf("%s", aCppL301D);
 printf("%d", (int)(v0 + 4700));
 v1 = test_cpp_constructor();
 printf("%s", aCppL302D);
 printf("%d", v1);
 printf("%s", aCppL303D);
 printf("%d", 42);
 printf("%s", aCppL304D);
 printf("%d", 71);
 printf("%s", aCppL305D);
 printf("%d", 650);
 printf("%s", aCppL306D);
 printf("%d", 22);
 printf("%s", aCppL307D);
 printf("%d", 39);
 printf("%s", aCppL308D);
 printf("%d", 16);
 printf("%s", aCppL309D);
 printf("%d", 85);
 test_cpp_exception();
}


/* Function: main @ 0x1722 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x173E */
int template_max_int(int a1, int a2)
{
 int result; // eax

 result = a2;
 if ( a1 > a2 )
 return a1;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x174C */
long double template_max_double(double a1, double a2)
{
 long double v2; // fst6

 v2 = a2;
 if ( a1 > (long double)a2 )
 return a1;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x175D */
unsigned int * template_swap_int(int *a1, unsigned int *a2)
{
 unsigned int *result; // eax
 int v3; // edx

 result = a2;
 v3 = *a1;
 *a1 = *a2;
 *a2 = v3;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1770 */
int Container_int_Constructor(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x177C */
int Container_int_push(int a1, int a2)
{
 int result; // eax
 int v3; // ecx

 result = a1;
 v3 = *(unsigned int *)(a1 + 40);
 if ( v3 <= 9 )
 {
 *(unsigned int *)(a1 + 40) = v3 + 1;
 *(unsigned int *)(a1 + 4 * v3) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1798 */
int Container_int_get(int a1, int a2)
{
 int result; // eax

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4 * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x17B0 */
int Container_int_getSize(int a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x17B8 */
int Container_double_Constructor(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x17C4 */
int Container_double_push(int a1, double a2)
{
 int result; // eax
 int v3; // ecx

 result = a1;
 v3 = *(unsigned int *)(a1 + 80);
 if ( v3 <= 9 )
 {
 *(unsigned int *)(a1 + 80) = v3 + 1;
 *(double *)(a1 + 8 * v3) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x17E2 */
long double Container_double_get(int a1, int a2)
{
 long double result; // fst7

 result = 0.0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8 * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x17FC */
int Container_double_getSize(int a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1804 */
void RTTIDerivedA_dtor(void *this_ptr)
{
 _ZdlPv(this_ptr);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1826 */
int RTTIDerivedA_getType(void *this_ptr)
{
 (void)this_ptr;
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x182A */
void RTTIBase_dtor(void *this_ptr)
{
 (void)this_ptr;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x182C */
void RTTIDerivedB_dtor(void *this_ptr)
{
 _ZdlPv(this_ptr);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x184E */
int RTTIDerivedB_getType(void *this_ptr)
{
 (void)this_ptr;
 return 2;
}


/* Stub implementations for C++ runtime functions */

/* C++ iostream initialization stubs */
void _ZNSt8ios_base4InitC1Ev(void *this_ptr)
{
 (void)this_ptr;
 /* stub - no-op for C compatibility */
}

void _ZNSt8ios_base4InitD1Ev(void *this_ptr)
{
 (void)this_ptr;
 /* stub - no-op for C compatibility */
}

/* __cxa_atexit stub */
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
 (void)func;
 (void)arg;
 (void)dso_handle;
 return 0;
}

/* _do_global_dtors_aux stub */
void _do_global_dtors_aux(void)
{
 /* stub - no-op for C compatibility */
}

void *_Znam(size_t size)
{
 /* operator new[] stub - allocate memory */
 return _Znwm(size);
}

void _ZdaPv(void *ptr)
{
 /* operator delete[] stub - free memory */
 extern void _ZdlPv(void *ptr);
 _ZdlPv(ptr);
}

void *__cxa_allocate_exception(size_t size)
{
 /* Exception allocation stub */
 extern void *_Znwm(size_t size);
 return _Znwm(size);
}

void __cxa_throw(void *exception, void *type_info, void *dest)
{
 /* Exception throw stub - just return, can't actually throw in C */
 (void)exception;
 (void)type_info;
 (void)dest;
}

void *__dynamic_cast(void *src, const void *src_type, const void *dst_type, int src_ref_type)
{
 /* RTTI dynamic_cast stub - return src for simplicity */
 (void)src_type;
 (void)dst_type;
 (void)src_ref_type;
 return src;
}

void *_Znwm(size_t size)
{
 /* operator new stub - use malloc */
 return malloc(size);
}

void _ZdlPv(void *ptr)
{
 /* operator delete stub - use free */
 free(ptr);
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x18AC */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: _Znwj @ 0x4084 */

/* FAILED to decompile: __cxa_finalize @ 0x4088 */

/* FAILED to decompile: __cxa_begin_catch @ 0x408C */

/* FAILED to decompile: __cxa_allocate_exception @ 0x4090 */

/* FAILED to decompile: memcpy @ 0x4094 */

/* FAILED to decompile: strlen @ 0x4098 */

/* FAILED to decompile: __cxa_atexit @ 0x409C */

/* FAILED to decompile: __libc_start_main @ 0x40A4 */

/* FAILED to decompile: _Znaj @ 0x40A8 */

/* FAILED to decompile: _ZdlPv @ 0x40AC */

/* FAILED to decompile: __dynamic_cast @ 0x40B0 */

/* FAILED to decompile: _ZdaPv @ 0x40B4 */

/* FAILED to decompile: printf @ 0x40BC */

/* FAILED to decompile: __cxa_rethrow @ 0x40C0 */

/* FAILED to decompile: puts @ 0x40C4 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x40C8 */

/* FAILED to decompile: __cxa_end_catch @ 0x40CC */

/* FAILED to decompile: __gxx_personality_v0 @ 0x40D0 */

/* FAILED to decompile: __cxa_throw @ 0x40D4 */

/* FAILED to decompile: _Unwind_Resume @ 0x40D8 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x40DC */

/* Total functions decompiled: 46, failed: 21 */
