/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_clang_O3_g
 * Processor: arm
 */

/* Forward declarations and type definitions */
struct Base {
    void* _vptr$Base;
};

struct RTTIBase {
    void* _vptr$RTTIBase;
};

struct RTTIDerivedA {
    void* _vptr$RTTIDerivedA;
};

struct RTTIDerivedB {
    void* _vptr$RTTIDerivedB;
};

/* C library includes */
#include <string.h>
#include <stdio.h>

extern const unsigned long long xmmword_1767[2];
extern void* off_11D58;
extern void* off_11D80;
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
extern const char aCppL401D[];
extern const char aCppL402D[];
extern const char aCppL403D[];

struct LifecycleClass {
    int instance_count;
};

extern int LifecycleClass_instance_count;

/* RTTI and type info structures */
struct type_info {
    const char *name;
};

/* Declare std namespace for iostream initialization */
struct ios_base_Init {
    /* C-compatible version of std::ios_base::Init */
};

/* C++ runtime declarations */
extern void __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);
extern void* _dso_handle;
extern struct ios_base_Init std___ioinit;
extern void* __cxa_allocate_exception(size_t size);
extern void __cxa_throw(void* exception, const struct type_info* type, void (*destructor)(void*));
extern void* __dynamic_cast(void* obj, const struct type_info* src, const struct type_info* dst, int offset);
extern int puts(const char* s);
extern int printf(const char* format, ...);
extern void* operator_new(size_t size);
extern void operator_delete(void* ptr);

/* RTTI type_info structures */
extern struct type_info __ti_int;
extern struct type_info typeinfo_for_RTTIBase;
extern struct type_info typeinfo_for_RTTIDerivedA;
extern struct type_info typeinfo_for_RTTIDerivedB;

/* Template container definitions */
struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

/* JUMPOUT macro for decompiler artifact */
#define JUMPOUT(x) __builtin_unreachable()

/* Forward declaration for weak function */
long long call_weak_fn(void);

/* Function: .init_proc @ 0xD48 */
void init_proc()
{
 call_weak_fn();
}


/* Function: sub_D60 @ 0xD60 */
void sub_D60()
{
 JUMPOUT(0);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0xEC0 */
void GLOBAL__sub_I_5_1_cpp()
{
 /* std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit); */
 __cxa_atexit((void (*)(void *))0, &std___ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1014 */
int test_cpp_member_func()
{
 unsigned char v1[31]; // [xsp+Ch] [xbp-24h] BYREF
 char v2; // [xsp+2Bh] [xbp-5h]

 v2 = 0;
 *(unsigned long long *)v1 = *(const unsigned long long *)"Test";
 *(unsigned long long *)&v1[15] = xmmword_1767[0];
 return strlen(v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1064 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass_instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x107C */
int call_virtual_func(struct Base *obj, int x)
{
 return ((long long (*)(struct Base *, int))*obj->_vptr$Base)(obj, x);
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
int test_cpp_exception()
{
 unsigned int *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, &__ti_int, (void (*)(void*))0);
 return 0;  // Never reached, noreturn function
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x11BC */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x11C4 */
int test_cpp_rtti()
{
 unsigned long long *v0; // x19
 void *v1; // x20
 int v2; // w22
 int v3; // w21
 void *cast_result1;
 void *cast_result2;

 v0 = (unsigned long long *)operator_new(8u);
 *v0 = (unsigned long long)(void*)off_11D58;
 v1 = (void *)operator_new(8u);
 *(unsigned long long *)v1 = (unsigned long long)(void*)off_11D80;
 cast_result1 = __dynamic_cast(v0, (const struct type_info *)0, (const struct type_info *)0, 0);
 v2 = (cast_result1 != 0) ? 130 : 30;
 cast_result2 = __dynamic_cast(v1, (const struct type_info *)0, (const struct type_info *)0, 0);
 v3 = (cast_result2 != 0) ? (v2 + 200) : v2;
 operator_delete(v0);
 void **vtable = (void **)*(void **)v1;
 void (*destructor)(void*) = (void (*)(void*))vtable[1];
 destructor(v1);
 return v3 + 14;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1284 */
void test_cpp_oo_features()
{
 int v0; // w0
 unsigned char v1[31]; // [xsp+Ch] [xbp-24h] BYREF
 char v2; // [xsp+2Bh] [xbp-5h]

 puts(asc_1734);
 v2 = 0;
 *(unsigned long long *)v1 = *(const unsigned long long *)"Test";
 *(unsigned long long *)&v1[15] = xmmword_1767[0];
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


/* Function: sub_137C @ 0x137C */
// positive sp value has been detected, the output may be wrong!
int sub_137C(unsigned int a1)
{
 unsigned long long *v1; // x19
 void *v2; // x20
 int v3; // w22
 int v4; // w21
 void *cast_result1;
 void *cast_result2;
 int result;

 printf(aCppL401D, a1);
 printf(aCppL402D, 703);
 v1 = (unsigned long long *)operator_new(8u);
 *v1 = (unsigned long long)(void*)off_11D58;
 v2 = operator_new(8u);
 *(unsigned long long *)v2 = (unsigned long long)(void*)off_11D80;
 cast_result1 = __dynamic_cast(v1, &typeinfo_for_RTTIBase, &typeinfo_for_RTTIDerivedA, 0);
 v3 = (cast_result1 != 0) ? 130 : 30;
 *(unsigned long long *)v2 = (unsigned long long)(void*)off_11D80;
 cast_result2 = __dynamic_cast(v2, &typeinfo_for_RTTIBase, &typeinfo_for_RTTIDerivedB, 0);
 v4 = (cast_result2 != 0) ? (v3 + 200) : v3;
 operator_delete(v1);
 (*(void (*)(void*))(*(void **)v2)[1])(v2);
 result = printf(aCppL403D, (unsigned int)(v4 + 14));
 return result;
}


/* Function: main @ 0x1458 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: sub_1464 @ 0x1464 */
// positive sp value has been detected, the output may be wrong!
long long sub_1464()
{
 return 0;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1470 */
int template_max_int(int a, int b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x147C */
double template_max_double(double a, double b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1488 */
void template_swap_int(int *a, int *b)
{
 int v2; // w9

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x149C */
void Container_int__ctor(struct Container_int *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x14A4 */
void Container_int_push(struct Container_int *this, int value)
{
 long long size; // x8

 size = this->size;
 if ( (int)size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x14C0 */
int Container_int_get(const struct Container_int *this, int idx)
{
 int result; // w0

 result = 0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x14E0 */
int Container_int_getSize(const struct Container_int *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x14E8 */
void Container_double__ctor(struct Container_double *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x14F0 */
void Container_double_push(struct Container_double *this, double value)
{
 long long size; // x8

 size = this->size;
 if ( (int)size <= 9 )
 {
 this->data[size] = value;
 this->size = size + 1;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x150C */
double Container_double_get(const struct Container_double *this, int idx)
{
 double result; // d0

 result = 0.0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1528 */
int Container_double_getSize(const struct Container_double *this)
{
 return this->size;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1530 */
// attributes: thunk
void RTTIDerivedA_destructor(struct RTTIDerivedA *this)
{
 operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1534 */
int RTTIDerivedA_getType(const struct RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x153C */
void RTTIBase_destructor(struct RTTIBase *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1540 */
// attributes: thunk
void RTTIDerivedB_destructor(struct RTTIDerivedB *this)
{
 operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1544 */
int RTTIDerivedB_getType(const struct RTTIDerivedB *this)
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

/* Total functions decompiled: 43, failed: 20 */
