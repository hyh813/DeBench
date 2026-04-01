/* Auto-injected type definitions by preprocessor */
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
/* size_t and ssize_t already defined in system headers */
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Stub for call_weak_fn */
int call_weak_fn() { return 0; }

/* Stub for JUMPOUT macro */
#define JUMPOUT(x) do { } while(0)

/* Macro for HIBYTE */
#define HIBYTE(x) (*((uint8_t*)&(x) + 1))

/* Macro for LODWORD */
#define LODWORD(x) ((unsigned int)(x))

/* C++ runtime function declarations */
void *_cxa_allocate_exception(unsigned long size);
void _cxa_throw(void *exception, void *type_info, void *dest);
void *_cxa_begin_catch(void *exception);
void _cxa_end_catch();
void _cxa_end_cleanup();
void _cxa_rethrow();
void *_dynamic_cast(void *obj, void *src_type, void *dst_type, int flags);
int _cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void _cxa_finalize(void *dso_handle);
void *_Znwj(unsigned int size);
void _ZdlPv(void *ptr);

/* C++ runtime function stub implementations */
void *_cxa_allocate_exception(unsigned long size) {
    static char exception_buffer[256];
    return exception_buffer;
}
void _cxa_throw(void *exception, void *type_info, void *dest) {
    /* Stub: just return, exception handling not fully implemented */
}
void *_Znwj(unsigned int size) {
    static char alloc_buffer[1024];
    return alloc_buffer;
}
void _ZdlPv(void *ptr) {
    /* Stub: do nothing */
}
int _cxa_atexit(void (*func)(void *), void *arg, void *dso_handle) {
    /* Stub: return success */
    return 0;
}

/* Forward declarations for C++ classes */
struct Base;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;

/* Missing global references from decompilation */
extern int off_11ED8;
extern int off_11EEC;
static const char *asc_1358 = "C++ OO Features Test";
static const char *aCppL301D = "strlen result: %zu\n";
static const char *aCppL302D = "constructor result: %d\n";
static const char *aCppL303D = "virtual func result: %d\n";
static const char *aCppL304D = "multiple inheritance result: %d\n";
static const char *aCppL305D = "diamond inheritance result: %d\n";
static const char *aCppL306D = "operator overload result: %d\n";
static const char *aCppL307D = "template func result: %d\n";
static const char *aCppL308D = "template class result: %d\n";
static const char *aCppL309D = "lambda result: %d\n";

/* Base class with vptr */
struct Base {
    int (**_vptr$Base)(void);
};

/* RTTI Base class */
struct RTTIBase {
    int (**_vptr$RTTIBase)(void);
};

/* RTTI DerivedA class */
struct RTTIDerivedA {
    int (**_vptr$RTTIBase)(void);
};

/* RTTI DerivedB class */
struct RTTIDerivedB {
    int (**_vptr$RTTIBase)(void);
};

/* LifecycleClass */
struct LifecycleClass {
    int instance_count;
};
int LifecycleClass_instance_count = 0;

/* Container template for int */
struct Container_int {
    int size;
    int data[10];
};

/* Container template for double */
struct Container_double {
    int size;
    double data[10];
};

/* std namespace stubs */
struct std___ioinit {
    int dummy;
};
struct std___ioinit std___ioinit_instance = {0};
void *_dso_handle = 0;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_clang_O3_g
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


/* Function: _ZN12RTTIDerivedAD0Ev_0 @ 0x8BC */
void RTTIDerivedA_D0Ev(RTTIDerivedA *self)
{
 _ZdlPv(self);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x958 */
void GLOBAL__sub_I_5_1_cpp()
{
 /* std::ios_base::Init constructor stub */
 _cxa_atexit((void (*)(void *))0, &std___ioinit_instance, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0xAFC */
size_t test_cpp_member_func()
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
int test_cpp_constructor()
{
 return 1001 * LifecycleClass_instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0xB80 */
int call_virtual_func(Base *obj, int x)
{
 return ((int ( *)(Base *, int))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0xB8C */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0xB94 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0xB9C */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0xBA8 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0xBB0 */
int test_cpp_template_func()
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0xBB8 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0xBC0 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0xBC8 */
void test_cpp_exception()
{
 void *exception; // r0

 exception = _cxa_allocate_exception(4u);
 *(unsigned int *)exception = 42;
 _cxa_throw(exception, (struct type_info *)0, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0xCA4 */
int test_cpp_smart_ptr()
{
 return 703;
}





/* Function: _Z20test_cpp_oo_featuresv @ 0xD7C */
void test_cpp_oo_features()
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
 printf(aCppL302D, 1001 * LifecycleClass_instance_count + 21);
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
int template_max_int(int a, int b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0xFD8 */
int template_max_double(double a, double b)
{
 int v2; // r5

 v2 = LODWORD(b);
 if ( a > b )
 return LODWORD(a);
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x100C */
void template_swap_int(int *a, int *b)
{
 int v2; // r2

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1020 */
void Container_int_Constructor(Container_int *self)
{
 self->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x102C */
void Container_int_push(Container_int *self, int value)
{
 int size; // r2

 size = self->size;
 if ( size <= 9 )
 {
 self->size = size + 1;
 self->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1044 */
int Container_int_get(const Container_int *self, int idx)
{
 int result; // r0

 result = 0;
 if ( idx >= 0 && self->size > idx )
 return self->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1064 */
int Container_int_getSize(const Container_int *self)
{
 return self->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x106C */
void Container_double_Constructor(Container_double *self)
{
 self->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1078 */
void Container_double_push(Container_double *self, double value)
{
 int size; // r12

 size = self->size;
 if ( size <= 9 )
 {
 self->data[size] = value;
 self->size = size + 1;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x109C */
double Container_double_get(const Container_double *self, int idx)
{
 double result; // r0

 result = 0.0;
 if ( idx >= 0 && self->size > idx )
 return self->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x10C8 */
int Container_double_getSize(const Container_double *self)
{
 return self->size;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x10D4 */
int RTTIDerivedA_getType(const RTTIDerivedA *self)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x10DC */
void RTTIBase_D2Ev(RTTIBase *self)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x10E0 */
/* attributes: thunk */
void RTTIDerivedB_D0Ev(RTTIDerivedB *self)
{
 RTTIDerivedA_D0Ev((RTTIDerivedA *)self);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x10E4 */
int RTTIDerivedB_getType(const RTTIDerivedB *self)
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

/* FAILED to decompile: _ZdlPv @ 0x120E0 */

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

/* Total functions decompiled: 41, failed: 22 */
