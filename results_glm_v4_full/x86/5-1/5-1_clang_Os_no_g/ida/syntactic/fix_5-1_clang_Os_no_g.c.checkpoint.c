/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;

/* C library includes */
#include <string.h>
#include <stdio.h>
#include <new>

/* External CRT symbols */
extern void (*_gmon_start__)(void);
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);
#if !defined(__uint16_t_defined)
typedef unsigned short uint16_t;
#endif
#if !defined(__uint32_t_defined)
typedef unsigned int uint32_t;
#endif
#if !defined(__uint64_t_defined)
typedef unsigned long long uint64_t;
#endif
#if !defined(__int8_t_defined)
typedef signed char int8_t;
#endif
#if !defined(__int16_t_defined)
typedef short int16_t;
#endif
#if !defined(__int32_t_defined)
typedef int int32_t;
#endif
#if !defined(__int64_t_defined)
typedef long long int64_t;
#endif

typedef unsigned long uintptr_t;
#if !defined(__intptr_t_defined) && !defined(_INTPTR_T) && !defined(__intptr_t)
typedef signed long intptr_t;
#endif
#if !defined(__PTRDIFF_T_DEFINED) && !defined(_PTRDIFF_T) && !defined(__ptrdiff_t_defined)
typedef long ptrdiff_t;
#endif
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* C++ library stub declarations */
extern void *__dso_handle;

namespace std {
    namespace ios_base {
        class Init {
        public:
            Init();
            ~Init();
        };
    }
}

/* Global C++ I/O init object */
static std::ios_base::Init __ioinit;

/* LifecycleClass stub definition */
class LifecycleClass {
public:
    static int instance_count;
};

/* Define static member */
int LifecycleClass::instance_count = 0;

/* RTTI class forward declarations */
class RTTIBase;
class RTTIDerivedA;
class RTTIDerivedB;

/* External symbols for operator new/delete */
extern void *operator new(size_t size);
extern void *operator new[](size_t size);
extern void operator delete(void *ptr);
extern void operator delete[](void *ptr);

/* C++ runtime functions */
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *, struct type_info *, void (*)(void *));
extern void *__dynamic_cast(void *, const struct __class_type_info *, const struct __class_type_info *, ptrdiff_t);
extern int __cxa_atexit(void (*)(void *), void *, void *);
extern void _do_global_dtors_aux(void);

/* Stub implementations for C++ runtime functions */
void *__cxa_allocate_exception(size_t size) {
    return operator new(size);
}

void __cxa_throw(void *obj, struct type_info *tinfo, void (*dest)(void *)) {
    /* Stub - exception handling not fully implemented */
    (void)obj;
    (void)tinfo;
    (void)dest;
}

void *__dynamic_cast(void *obj, const struct __class_type_info *src, const struct __class_type_info *dst, ptrdiff_t offset) {
    /* Stub - RTTI not fully implemented */
    (void)src;
    (void)dst;
    (void)offset;
    return obj;
}

int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle) {
    /* Stub - atexit handlers not fully implemented */
    (void)func;
    (void)arg;
    (void)dso_handle;
    return 0;
}

void _do_global_dtors_aux(void) {
    /* Stub - global destructors not fully implemented */
}

/* RTTI type info structures */
struct __class_type_info;

extern const struct __class_type_info type_info_for_RTITIBase;
extern const struct __class_type_info type_info_for_RTITIDerivedB;

/* String constants from decompiled code */
static const char asc_21D8[] = "Testing C++ Object Oriented Features";
static const char aCppL301D[] = "Member function result: %d\n";
static const char aCppL302D[] = "Constructor result: %d\n";
static const char aCppL303D[] = "Virtual function result: %d\n";
static const char aCppL304D[] = "Multiple inheritance result: %d\n";
static const char aCppL305D[] = "Diamond inheritance result: %d\n";
static const char aCppL306D[] = "Operator overload result: %d\n";
static const char aCppL307D[] = "Template function result: %d\n";
static const char aCppL308D[] = "Template class result: %d\n";
static const char aCppL309D[] = "Lambda result: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_clang_Os_no_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
    __asm__ volatile("jmp *8(%%ebx)" ::: "memory");
}


/* Function: sub_1160 @ 0x1160 */
int sub_1160(int a1)
{
    return (*(int (**)(void))(a1 - 24))();
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1170 */
static void io_init_cleanup(void *arg)
{
 ((std::ios_base::Init *)arg)->~Init();
}

int GLOBAL__sub_I_5_1_cpp()
{
 ::new ((void *)&__ioinit) std::ios_base::Init();
 return __cxa_atexit(io_init_cleanup, &__ioinit, &__dso_handle);
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_11DC @ 0x11DC */
void sub_11DC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x11E0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1319 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x131D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1324 */
size_t test_cpp_member_func(void)
{
 char dest[40]; // [esp+4h] [ebp-28h] BYREF

 memcpy(dest, "Test", 0x1Fu);
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
 v1 = (unsigned int *)operator new[](0x14u);
 v2 = v1;
 do
 {
 *v2 = v0;
 v0 += 10;
 ++v2;
 }
 while ( v0 != 50 );
 ++LifecycleClass::instance_count;
 v3 = v1[2] + LifecycleClass::instance_count;
 operator delete[](v1);
 --LifecycleClass::instance_count;
 return v3 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x13CF */
int call_virtual_func(void *a1, int a2)
{
 return (*(int (**)(void *, int))a1)(a1, a2);
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

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, 0, 0);
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

 v0 = (unsigned int *)operator new(4);
 *v0 = 0;
 v6 = v0;
 v1 = (void *)operator new(4);
 *(unsigned int *)v1 = 0;
 v2 = __dynamic_cast(
 v0,
 0,
 0,
 0);
 v3 = 130;
 if ( !v2 )
 v3 = 30;
 v4 = v3 + 200;
 if ( !__dynamic_cast(
 v1,
 &type_info_for_RTITIBase,
 &type_info_for_RTITIDerivedB,
 0) )
 v4 = v3;
 operator delete(v6);
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
 memcpy(dest, "Test", 0x1Fu);
 dest[31] = 0;
 v0 = strlen(dest);
 printf(aCppL301D, v0 + 4700);
 v1 = test_cpp_constructor();
 printf(aCppL302D, v1);
 printf(aCppL303D, 42);
 printf(aCppL304D, 71);
 printf(aCppL305D, 650);
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
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
void template_swap_int(int *a1, int *a2)
{
 int v3; // edx

 v3 = *a1;
 *a1 = *a2;
 *a2 = v3;
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
void RTTIDerivedA_destructor(RTTIDerivedA *_this)
{
 operator delete(_this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1826 */
int RTTIDerivedA_getType()
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x182A */
void RTTIBase_destructor()
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x182C */
void RTTIDerivedB_destructor(RTTIDerivedB *_this)
{
 operator delete(_this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x184E */
int RTTIDerivedB_getType()
{
 return 2;
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
