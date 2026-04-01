/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_clang_O3_g
 * Processor: pc
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* Global declarations */
static unsigned long long xmmword_21F8 = 0x7473657400000000ULL;
static unsigned long long off_3D78 = 0;
static unsigned long long off_3DA0 = 0;

/* Base class with vptr */
typedef struct Base {
    void **_vptr$Base;
} Base;

/* LifecycleClass */
typedef struct LifecycleClass {
    int instance_count;
} LifecycleClass;
static int _ZL13instance_count = 1;
#define LifecycleClass_instance_count _ZL13instance_count

/* std namespace stubs - removed CRT dependencies */

extern void *_dso_handle;
extern void __cxa_atexit(void (*func)(void*), void *arg, void *dso);

/* Exception handling - stub implementations */
void *__cxa_allocate_exception(unsigned long size)
{
    return malloc(size);
}

void __cxa_throw(void *exc, void *type_info, void *dest)
{
    (void)exc; (void)type_info; (void)dest;
}

extern void __cxa_begin_catch(void *exc);
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);

/* RTTI */
extern void *__dynamic_cast(void *src, void *src_type, void *dst_type, int flags);

/* Operator new/delete */
extern void *operator new(unsigned long size);
extern void operator delete(void *ptr);

/* Type info stubs */
struct type_info {
    const char *name;
};
static struct type_info typeinfo_for_int = { "int" };
static struct __class_type_info {
    const char *name;
} typeinfo_for_RTTIBase = { "RTTIBase" }, 
  typeinfo_for_RTTIDerivedA = { "RTTIDerivedA" }, 
  typeinfo_for_RTTIDerivedB = { "RTTIDerivedB" };

/* Container template */
typedef struct Container_int {
    int size;
    int data[10];
} Container_int;
typedef struct Container_double {
    int size;
    double data[10];
} Container_double;

/* RTTI classes */
typedef struct RTTIBase {
    void **_vptr;
} RTTIBase;
typedef struct RTTIDerivedA {
    void **_vptr;
} RTTIDerivedA;
typedef struct RTTIDerivedB {
    void **_vptr;
} RTTIDerivedB;

/* JUMPOUT macro */
#define JUMPOUT(x) do { } while(0)

/* Global variables */
static char *s = "test";
static char *format = "%d\n";
static char *aCppL302D = "cpp_l302d: %d\n";
static char *aCppL303D = "cpp_l303d: %d\n";
static char *aCppL304D = "cpp_l304d: %d\n";
static char *aCppL305D = "cpp_l305d: %d\n";
static char *aCppL306D = "cpp_l306d: %d\n";
static char *aCppL307D = "cpp_l307d: %d\n";
static char *aCppL308D = "cpp_l308d: %d\n";
static char *aCppL309D = "cpp_l309d: %d\n";




/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 JUMPOUT(0);
}






/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1240 */
int test_cpp_member_func()
{
 unsigned char s[31]; // [rsp+4h] [rbp-24h] BYREF
 char v2; // [rsp+23h] [rbp-5h]

 *(unsigned long long *)&s[15] = *(__int128 *)((char *)&xmmword_21F8 + 15);
 *(unsigned long long *)s = xmmword_21F8;
 v2 = 0;
 return strlen((char *)s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1280 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass_instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x12A0 */
int call_virtual_func(Base *obj, int x)
{
 return ((long long ( *)(Base *, int))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x12B0 */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x12C0 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x12D0 */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x12E0 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x12F0 */
int test_cpp_template_func()
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x1300 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1310 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1320 */
int test_cpp_exception()
{
 unsigned int *exception; // rax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x13E0 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x13F0 */
int test_cpp_rtti()
{
 return 144;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x14A0 */
void test_cpp_oo_features()
{
 int v0; // eax
 unsigned char s[31]; // [rsp+Ch] [rbp-4Ch] BYREF
 char v2; // [rsp+2Bh] [rbp-2Dh]

 puts((char *)s);
 *(unsigned long long *)&s[15] = *(__int128 *)((char *)&xmmword_21F8 + 15);
 *(unsigned long long *)s = xmmword_21F8;
 v2 = 0;
 v0 = strlen((char *)s);
 printf(format, (unsigned int)(v0 + 4700));
 printf(aCppL302D, (unsigned int)(1001 * LifecycleClass_instance_count + 21));
 printf(aCppL303D, 42);
 printf(aCppL304D, 71);
 printf(aCppL305D, 650);
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
}


/* Function: main @ 0x1680 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1690 */
int template_max_int(int a, int b)
{
 int result; // eax

 result = b;
 if ( a > b )
 return a;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x16A0 */
double template_max_double(double a, double b)
{
 return fmax(a, b);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x16B0 */
void template_swap_int(int *a, int *b)
{
 int v2; // eax

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x16C0 */
void Container_int_C2(Container_int *self)
{
 self->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x16D0 */
void Container_int_push(Container_int *self, int value)
{
 long long size; // rax

 size = self->size;
 if ( size <= 9 )
 {
 self->size = size + 1;
 self->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x16F0 */
int Container_int_get(const Container_int *self, int idx)
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && self->size > idx )
 return self->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1710 */
int Container_int_getSize(const Container_int *self)
{
 return self->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1720 */
void Container_double_C2(Container_double *self)
{
 self->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1730 */
void Container_double_push(Container_double *self, double a2, double value)
{
 long long size; // rax

 size = self->size;
 if ( size <= 9 )
 {
 self->size = size + 1;
 self->data[size] = a2;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1750 */
double Container_double_get(const Container_double *self, int idx)
{
 double result; // xmm0_8

 result = 0.0;
 if ( idx >= 0 && self->size > idx )
 return self->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1770 */
int Container_double_getSize(const Container_double *self)
{
 return self->size;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1780 */
// attributes: thunk
void RTTIDerivedA_dtor(RTTIDerivedA *self)
{
 operator delete(self);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1790 */
int RTTIDerivedA_getType(const RTTIDerivedA *self)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x17A0 */
void RTTIBase_dtor(RTTIBase *self)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x17B0 */
// attributes: thunk
void RTTIDerivedB_dtor(RTTIDerivedB *self)
{
 operator delete(self);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x17C0 */
int RTTIDerivedB_getType(const RTTIDerivedB *self)
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
