/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_clang_O2_g
 * Processor: arm
 */

#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/* Declare memcpy with correct return type */
extern void *memcpy(void *dest, const void *src, size_t n);

/* Declare standard library functions */
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern size_t strlen(const char *s);

/* Forward declarations */
struct Base;
struct LifecycleClass;

/* Function: .init_proc @ 0xD48 */
long long init_proc()
{
 extern long long call_weak_fn(void);
 return call_weak_fn();
}


/* External data declarations */
extern unsigned long long xmmword_175B[2];
extern void *off_11D58;
extern void *off_11D80;
extern char asc_1728[];
extern char aCppL301D[];
extern char aCppL302D[];
extern char aCppL303D[];
extern char aCppL304D[];
extern char aCppL305D[];
extern char aCppL306D[];
extern char aCppL307D[];
extern char aCppL308D[];
extern char aCppL309D[];
extern char aCppL401D[];
extern char aCppL402D[];
extern char aCppL403D[];

/* Forward declarations for RTTI types */
extern struct type_info type_info_for_int;
extern struct __class_type_info type_info_for_RTTIBase;
extern struct __class_type_info type_info_for_RTTIDerivedA;
extern struct __class_type_info type_info_for_RTTIDerivedB;

/* type_info structure with virtual function table pointer */
struct type_info {
 void **_vptr$type_info;
};

/* C++ runtime declarations */
extern void *__dso_handle;
extern void *__cxa_atexit(void (*)(void *), void *, void *);

/* std::ios_base::Init structure for C++ stdio initialization */
struct ios_base_Init {
  void (*vptr)(void);
};
extern struct ios_base_Init __ioinit;

/* C++ exception handling functions */
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *exception, const struct type_info *type_info, void (*dest)(void*));
extern void *__dynamic_cast(void *src_ptr, const struct __class_type_info *src_type, const struct __class_type_info *dst_type, ptrdiff_t src2dst_offset);

/* Base class definition */
struct Base {
 void *_vptr$Base;
};

/* Forward declaration for call_virtual_func parameter */

/* LifecycleClass definition */
struct LifecycleClass {
};

int LifecycleClass_instance_count = 0;

/* Container template instantiations */
struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

/* RTTI class forward declarations */
struct RTTIBase {
 void **_vptr$RTTIBase;
};

struct RTTIDerivedA {
 void **_vptr$RTTIDerivedA;
};

struct RTTIDerivedB {
 void **_vptr$RTTIDerivedB;
};

/* Function: sub_D60 @ 0xD60 */
void sub_D60()
{
 extern void JUMPOUT(long long);
 JUMPOUT(0);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0xEC0 */
void GLOBAL__sub_I_5_1_cpp()
{
 void (*init_fn)(struct ios_base_Init *) = (void (*)(struct ios_base_Init *))0x1000;
 (*init_fn)(&__ioinit);
 __cxa_atexit((void (*)(void *))0x1008, &__ioinit, &__dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* CRT stub function call_weak_fn */
long long call_weak_fn(void)
{
 return 0;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1014 */
int test_cpp_member_func()
{
 unsigned char v1[31]; // [xsp+Ch] [xbp-24h] BYREF
 char v2; // [xsp+2Bh] [xbp-5h]

 v2 = 0;
 memcpy(v1, "Test", 8);
 *(unsigned long long *)&v1[15] = xmmword_175B[0];
 return strlen(v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1064 */
int test_cpp_constructor()
{
 extern int LifecycleClass_instance_count;
 return 1001 * LifecycleClass_instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x107C */
int call_virtual_func(struct Base *obj, int x)
{
 long long (*vfunc)(struct Base *, int);
 vfunc = (long long (*)(struct Base *, int))*obj->_vptr$Base;
 return (int)vfunc(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1088 */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1090 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1098 */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x10A0 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x10A8 */
int test_cpp_template_func()
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x10B0 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x10B8 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x10C0 */
void test_cpp_exception()
{
 unsigned int *exception; // x0

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, &type_info_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x11B0 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x11B8 */
int test_cpp_rtti()
{
 void **v0; // x19
 void **v1; // x20
 int v2; // w22
 int v3; // w21

 v0 = (void **)malloc(8u);
 *v0 = off_11D58;
 v1 = malloc(8u);
 *v1 = off_11D80;
 if ( __dynamic_cast(
 v0,
 (const struct __class_type_info *)&type_info_for_RTTIBase,
 (const struct __class_type_info *)&type_info_for_RTTIDerivedA,
 0) != NULL )
 {
 v2 = 130;
 }
 else
 {
 v2 = 30;
 }
 if ( __dynamic_cast(
 v1,
 (const struct __class_type_info *)&type_info_for_RTTIBase,
 (const struct __class_type_info *)&type_info_for_RTTIDerivedB,
 0) != NULL )
 {
 v3 = v2 + 200;
 }
 else
 {
 v3 = v2;
 }
 free(v0);
 free(v1);
 return v3 + 14;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1278 */
void test_cpp_oo_features()
{
 int v0; // w0
 unsigned char v1[31]; // [xsp+Ch] [xbp-24h] BYREF
 char v2; // [xsp+2Bh] [xbp-5h]

 puts(asc_1728);
 v2 = 0;
 memcpy(v1, "Test", 8);
 *(unsigned long long *)&v1[15] = xmmword_175B[0];
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
}


/* Function: sub_1370 @ 0x1370 */
// positive sp value has been detected, the output may be wrong!
int sub_1370(unsigned int a1)
{
 void **v1; // x19
 void **v2; // x20
 int v3; // w22
 int v4; // w21

 printf(aCppL401D, a1);
 printf(aCppL402D, 703);
 v1 = (void **)malloc(8u);
 *v1 = off_11D58;
 v2 = (void **)malloc(8u);
 *v2 = off_11D80;
 if ( __dynamic_cast(
 v1,
 (const struct __class_type_info *)&type_info_for_RTTIBase,
 (const struct __class_type_info *)&type_info_for_RTTIDerivedA,
 0) != NULL )
 {
 v3 = 130;
 }
 else
 {
 v3 = 30;
 }
 if ( __dynamic_cast(
 v2,
 (const struct __class_type_info *)&type_info_for_RTTIBase,
 (const struct __class_type_info *)&type_info_for_RTTIDerivedB,
 0) != NULL )
 {
 v4 = v3 + 200;
 }
 else
 {
 v4 = v3;
 }
 free((void *)v1);
 free((void *)v2);
 printf(aCppL403D, (unsigned int)(v4 + 14));
 return v4 + 14;
}


/* Function: main @ 0x144C */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: sub_1458 @ 0x1458 */
// positive sp value has been detected, the output may be wrong!
int sub_1458()
{
 return 0;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1464 */
int _Z12template_maxIiET_S0_S0_(int a, int b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1470 */
double _Z12template_maxIdET_S0_S0_(double a, double b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x147C */
void _Z13template_swapIiEvRT_S1_(int *a, int *b)
{
 int v2; // w9

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1490 */
void _ZN9ContainerIiEC2Ev(void *_this)
{
 struct Container_int *this = (struct Container_int *)_this;
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1498 */
void _ZN9ContainerIiE4pushEi(void *_this, int value)
{
 struct Container_int *this = (struct Container_int *)_this;
 long long size; // x8

 size = this->size;
 if ( (int)size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x14B4 */
int _ZNK9ContainerIiE3getEi(const void *_this, int idx)
{
 const struct Container_int *this = (const struct Container_int *)_this;
 int result; // w0

 result = 0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x14D4 */
int _ZNK9ContainerIiE7getSizeEv(const void *_this)
{
 const struct Container_int *this = (const struct Container_int *)_this;
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x14DC */
void _ZN9ContainerIdEC2Ev(void *_this)
{
 struct Container_double *this = (struct Container_double *)_this;
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x14E4 */
void _ZN9ContainerIdE4pushEd(void *_this, double value)
{
 struct Container_double *this = (struct Container_double *)_this;
 long long size; // x8

 size = this->size;
 if ( (int)size <= 9 )
 {
 this->data[size] = value;
 this->size = size + 1;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1500 */
double _ZNK9ContainerIdE3getEi(const void *_this, int idx)
{
 const struct Container_double *this = (const struct Container_double *)_this;
 double result; // d0

 result = 0.0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x151C */
int _ZNK9ContainerIdE7getSizeEv(const void *_this)
{
 const struct Container_double *this = (const struct Container_double *)_this;
 return this->size;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1524 */
// attributes: thunk
void _ZN12RTTIDerivedAD0Ev(struct RTTIDerivedA *this)
{
 free(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1528 */
int RTTIDerivedA_getType(const struct RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x1530 */
void _ZN8RTTIBaseD2Ev(struct RTTIBase *this)
{
  /* empty destructor */
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1534 */
// attributes: thunk
void _ZN12RTTIDerivedBD0Ev(struct RTTIDerivedB *this)
{
 free(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1538 */
int RTTIDerivedB_getType(const struct RTTIDerivedB *this)
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

/* Total functions decompiled: 43, failed: 20 */
