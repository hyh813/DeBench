/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Standard library declarations */
#include <string.h>
extern char *strcpy(char *dest, const char *src);

/* RTTI type info declarations */
struct type_info;
extern const type_info _ZTSi;  /* typeinfo for int */

/* Missing type/function definitions */
#define HIBYTE(x) (((unsigned char*)&(x))[1])
void JUMPOUT(unsigned int addr) { (void)addr; }

/* C++ namespace and type stubs */
namespace std {
    namespace ios_base {
        struct Init {
            Init() {}
            ~Init() {}
        };
    }
    extern ios_base::Init __ioinit __attribute__((weak));
}

/* Class declarations needed */
struct LifecycleClass {
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

/* RTTI type info structures */
struct __class_type_info {
    const char *name;
};
struct __si_class_type_info : __class_type_info {
    const __class_type_info *base;
};

/* RTTI type names for dynamic_cast */
extern const __class_type_info _ZTS9RTTIBase;
extern const __class_type_info _ZTS11RTTIDerivedA;
extern const __class_type_info _ZTS11RTTIDerivedB;

/* Missing string literals and function pointers */
extern const unsigned int off_11ED8;  /* vtable pointer for RTTIDerivedA */
extern const unsigned int off_11EEC;  /* vtable pointer for RTTIDerivedB */
extern const char asc_1358[];         /* string literal */
extern const char aCppL301D[];        /* printf format string */
extern const char aCppL302D[];        /* printf format string */
extern const char aCppL303D[];        /* printf format string */
extern const char aCppL304D[];        /* printf format string */
extern const char aCppL305D[];        /* printf format string */
extern const char aCppL306D[];        /* printf format string */
extern const char aCppL307D[];        /* printf format string */
extern const char aCppL308D[];        /* printf format string */
extern const char aCppL309D[];        /* printf format string */

/* CRT extern declarations */
extern void *(*_cxa_atexit)(void (*)(void *), void *, void *);
extern void *_dso_handle;
extern void *(*_cxa_allocate_exception)(unsigned int);
extern void (*_cxa_throw)(void *, const struct type_info *, void (*)(void *));
extern void *(*_cxa_begin_catch)(void *);
extern void (*_cxa_end_catch)(void);
extern void (*_cxa_end_cleanup)(void);
extern void *(*_dynamic_cast)(const void *, const struct __class_type_info *, const struct __class_type_info *, long);
void *operator new(size_t size);
void operator delete(void *ptr);
void operator delete(void *ptr, size_t size);
extern int printf(const char *format, ...);
extern int puts(const char *s);

/* Weak function declaration */
extern int call_weak_fn(void) __attribute__((weak));

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_clang_O3_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x848 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_854 @ 0x854 */
void sub_854()
{
 JUMPOUT(0);
}


/* Static helper for destructor registration */
static void init_destructor(void *p) {
    ((std::ios_base::Init *)p)->~Init();
}

/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x958 */
int GLOBAL__sub_I_5_1_cpp()
{
 new (&std::__ioinit) std::ios_base::Init();
 return _cxa_atexit(init_destructor, &std::__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0xAFC */
size_t test_cpp_member_func(void)
{
 unsigned short v1[4]; // [sp+8h] [bp-28h] BYREF
 int v2; // [sp+10h] [bp-20h]
 int v3; // [sp+14h] [bp-1Ch]
 int v4; // [sp+18h] [bp-18h]
 int v5; // [sp+1Ch] [bp-14h]
 int v6; // [sp+20h] [bp-10h]
 short v7; // [sp+24h] [bp-Ch]
 char v8; // [sp+26h] [bp-Ah]
 char v9; // [sp+27h] [bp-9h]

 strcpy((char *)v1, "Test");
 HIBYTE(v1[2]) = 0;
 v1[3] = 0;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 return strlen((const char *)v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0xB64 */
int test_cpp_constructor(void)
{
 return 1001 * LifecycleClass::instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0xB80 */
int call_virtual_func(int (**a1)(unsigned int))
{
 return (**a1)((unsigned int)a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0xB8C */
int test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0xB94 */
int test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0xB9C */
int test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0xBA8 */
int test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0xBB0 */
int test_cpp_template_func(void)
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0xBB8 */
int test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0xBC0 */
int test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0xBC8 */
void test_cpp_exception(void)
{
 unsigned int *exception; // r0

 exception = (unsigned int *)_cxa_allocate_exception(4u);
 *exception = 42;
 _cxa_throw(exception, (struct type_info *)&_ZTSi, 0);
}


/* Function: sub_BF0 @ 0xBF0 */
// positive sp value has been detected, the output may be wrong!
int sub_BF0(void *a1, int a2)
{
 int v2; // r4
 int v3; // r6
 int v4; // r5
 bool v5; // zf
 int ( *v7)(int); // [sp-4h] [bp-4h]

 v4 = 100;
 v5 = a2 == 3;
 if ( a2 != 3 )
 {
 v4 = 200;
 v5 = a2 == 2;
 }
 if ( !v5 )
 ((void ( *)(void))_cxa_end_cleanup)();
 _cxa_begin_catch(a1);
 _cxa_end_catch();
 return v7(v3 + 2 * v2 + v4);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0xCA4 */
int test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0xCB0 */
void *test_cpp_rtti(void)
{
 void *v0; // r4
 void *v1; // r5
 void *v2; // r7
 void *v3; // r6
 int v4; // r0

 v0 = operator new((size_t)4);
 *(unsigned int *)v0 = (unsigned int)(intptr_t)off_11ED8;
 v1 = operator new((size_t)4);
 *(unsigned int *)v1 = (unsigned int)(intptr_t)off_11EEC;
 v2 = _dynamic_cast(
 (const struct __class_type_info *)&_ZTS9RTTIBase,
 (const struct __class_type_info *)&_ZTS11RTTIDerivedA,
 0);
 v3 = _dynamic_cast(
 (const struct __class_type_info *)&_ZTS9RTTIBase,
 (const struct __class_type_info *)&_ZTS11RTTIDerivedB,
 0);
 operator delete(v0);
 (*(void ( **)(void *))(*(unsigned int *)v1 + 4))(v1);
 v4 = 130;
 if ( !v2 )
 v4 = 30;
 if ( v3 )
 v4 += 200;
 return (void *)(long long)(v4 + 14);
}


/* Function: _Z20test_cpp_oo_featuresv @ 0xD7C */
void test_cpp_oo_features(void)
{
 size_t v0; // r0
 unsigned short v1[4]; // [sp+8h] [bp-38h] BYREF
 int v2; // [sp+10h] [bp-30h]
 int v3; // [sp+14h] [bp-2Ch]
 int v4; // [sp+18h] [bp-28h]
 int v5; // [sp+1Ch] [bp-24h]
 int v6; // [sp+20h] [bp-20h]
 short v7; // [sp+24h] [bp-1Ch]
 char v8; // [sp+26h] [bp-1Ah]
 char v9; // [sp+27h] [bp-19h]

 puts(asc_1358);
 strcpy((char *)v1, "Test");
 HIBYTE(v1[2]) = 0;
 v1[3] = 0;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v6 = 0;
 v8 = 0;
 v7 = 0;
 v9 = 0;
 v0 = strlen((const char *)v1);
 printf(aCppL301D, v0 + 4700);
 printf(aCppL302D, 1001 * LifecycleClass::instance_count + 21);
 printf(aCppL303D, 42);
 printf(aCppL304D, 71);
 printf(aCppL305D, 650);
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: main @ 0xFB8 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0xFCC */
int template_max(int result, int a2)
{
 if ( result <= a2 )
 return a2;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0xFD8 */
int template_max(double a1, double a2)
{
 int v2; // r5

 v2 = (int)a2;
 if ( a1 > a2 )
 return (int)a1;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x100C */
int * template_swap(int *result, int *a2)
{
 int v2; // r2

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1020 */
void *Container<int>::Container(void *result)
{
 *(unsigned int *)((uintptr_t)result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x102C */
int Container<int>::push(int result, int a2)
{
 int v2; // r2

 v2 = *(unsigned int *)(result + 40);
 if ( v2 <= 9 )
 {
 *(unsigned int *)(result + 40) = v2 + 1;
 *(unsigned int *)(result + 4 * v2) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1044 */
int Container<int>::get(int a1, int a2)
{
 int result; // r0

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4 * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1064 */
int Container<int>::getSize(int a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x106C */
void *Container<double>::Container(void *result)
{
 *(unsigned int *)((uintptr_t)result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1078 */
int Container<double>::push(int result, double a2)
{
 int v4; // r12

 v4 = *(unsigned int *)(result + 80);
 if ( v4 <= 9 )
 {
 *(unsigned int *)(result + 8 * v4) = (unsigned int)(int)a2;
 *(unsigned int *)(result + 8 * v4 + 4) = (unsigned int)(int)((double)a2);
 *(unsigned int *)(result + 80) = v4 + 1;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x109C */
long long Container<double>::get(int a1, int a2)
{
 long long result; // r0

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(unsigned long long *)(a1 + 8 * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x10C8 */
int Container<double>::getSize(int a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x10D0 */
// attributes: thunk
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x10D4 */
int RTTIDerivedA::getType(RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x10DC */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x10E0 */
// attributes: thunk
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x10E4 */
int RTTIDerivedB::getType(RTTIDerivedB *this)
{
 return 2;
}


/* Function: .term_proc @ 0x10EC */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp__Znwj @ 0x120C0 */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x120C4 */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x120C8 */

/* FAILED to decompile: __imp_printf @ 0x120CC */

/* FAILED to decompile: __imp_puts @ 0x120D0 */

/* FAILED to decompile: __imp___libc_start_main @ 0x120D8 */

/* FAILED to decompile: __imp_abort @ 0x120DC */

/* FAILED to decompile: __imp__ZdlPv @ 0x120E0 */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x120E4 */

/* FAILED to decompile: __imp___dynamic_cast @ 0x120E8 */

/* FAILED to decompile: __imp___cxa_atexit @ 0x120EC */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x120F4 */

/* FAILED to decompile: __imp_strlen @ 0x120F8 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x120FC */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x12100 */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x12104 */

/* FAILED to decompile: __imp___cxa_throw @ 0x12108 */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x1210C */

/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x12110 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x12114 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x12118 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x12120 */

/* Total functions decompiled: 42, failed: 22 */
