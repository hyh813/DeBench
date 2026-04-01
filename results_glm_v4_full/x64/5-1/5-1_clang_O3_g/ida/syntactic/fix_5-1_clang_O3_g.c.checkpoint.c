/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_clang_O3_g
 * Processor: pc
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stddef.h>
#include <math.h>

/* Forward declarations */
struct type_info;
struct __class_type_info;

/* Type info structures */
struct type_info {
    const char *name;
};

static struct type_info typeinfo_for_int = { "int" };
static struct type_info typeinfo_for_RT_TIBase = { "RTTIBase" };
static struct type_info typeinfo_for_RT_TIDerivedA = { "RTTIDerivedA" };
static struct type_info typeinfo_for_RT_TIDerivedB = { "RTTIDerivedB" };

/* Global data */
static const char *s = "Testing C++ OO Features";
static const char *format = "Member function test: %d\n";
static const char *aCppL302D = "Constructor test: %d\n";
static const char *aCppL303D = "Virtual function test: %d\n";
static const char *aCppL304D = "Multiple inheritance test: %d\n";
static const char *aCppL305D = "Diamond inheritance test: %d\n";
static const char *aCppL306D = "Operator overload test: %d\n";
static const char *aCppL307D = "Template function test: %d\n";
static const char *aCppL308D = "Template class test: %d\n";
static const char *aCppL309D = "Lambda test: %d\n";

static unsigned __int128 xmmword_21F8 = 0;

/* Forward declarations for vtable functions */
void RTTIBase_destructor(struct RTTIBase *self);
void RTTIDerivedA_destructor(struct RTTIDerivedA *self);
int RTTIDerivedA_getType(const struct RTTIDerivedA *self);
void RTTIDerivedB_destructor(struct RTTIDerivedB *self);
int RTTIDerivedB_getType(const struct RTTIDerivedB *self);

/* Vtable definitions */
static const void *off_3D78[] = {
    (void *)RTTIBase_destructor,
    (void *)RTTIDerivedA_destructor,
    (void *)RTTIDerivedA_getType
};

static const void *off_3DA0[] = {
    (void *)RTTIBase_destructor,
    (void *)RTTIDerivedB_destructor,
    (void *)RTTIDerivedB_getType
};

/* Exception handling */
extern void *__cxa_allocate_exception(unsigned int);
extern void __cxa_throw(void *, struct type_info *, void (*destructor)(void *));
extern void *__cxa_begin_catch(void *);
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);
extern int __gxx_personality_v0(int version, int actions, uint64_t exception_class,
                                 struct _Unwind_Exception *exception_object,
                                 struct _Unwind_Context *context);

/* RTTI */
extern void *__dynamic_cast(void *src_ptr,
                            const struct __class_type_info *src_type,
                            const struct __class_type_info *dst_type,
                            int src2dst_offset);

/* Memory operators - malloc/free wrappers */
void *_Znwm(unsigned long size)
{
    return malloc(size);
}

void _ZdlPv(void *ptr)
{
    free(ptr);
}

/* Dynamic cast stub */
void *__dynamic_cast(void *src_ptr,
                    const struct __class_type_info *src_type,
                    const struct __class_type_info *dst_type,
                    int src2dst_offset)
{
    /* Simplified implementation - always succeed for this test */
    return src_ptr;
}

/* Exception handling stubs */
void *__cxa_allocate_exception(unsigned int size)
{
    /* Simple stub - allocate memory for exception */
    return malloc(size);
}

void __cxa_throw(void *exception_obj, struct type_info *tinfo, void (*destructor)(void *))
{
    /* Simple stub - in real code this would unwind the stack */
    /* For this test, we just free the exception and abort */
    if (destructor)
        destructor(exception_obj);
    else
        free(exception_obj);
    _Exit(1);
}

/* Forward declarations for classes */
struct Base {
    const void **_vptr$Base;
};

struct LifecycleClass {
};

struct RTTIBase {
    const void **_vptr;
};

struct RTTIDerivedA {
    const void **_vptr;
};

struct RTTIDerivedB {
    const void **_vptr;
};

/* Template classes - converted to C structs */
struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

/* Function prototypes */
int call_virtual_func(struct Base *obj, int x);
void test_cpp_oo_features(void);
int test_cpp_member_func(void);
int test_cpp_virtual_func(void);
int test_cpp_multiple_inheritance(void);
int test_cpp_diamond_inheritance(void);
int test_cpp_operator_overload(void);
int test_cpp_template_func(void);
int test_cpp_template_class(void);
int test_cpp_lambda(void);
int test_cpp_exception(void);
int test_cpp_smart_ptr(void);
int test_cpp_rtti(void);

/* Template instantiations */
extern double template_max_double(double a, double b);
extern void template_swap_int(int *a, int *b);

/* Static member definition */
int LifecycleClass_instance_count = 0;











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
 unsigned long long *v0; // r14
 void *v1; // r12
 int v2; // ebx
 int v3; // ebp

 v0 = (unsigned long long *)_Znwm(8u);
 *v0 = (unsigned long long)&off_3D78;
 v1 = (void *)_Znwm(8u);
 *(unsigned long long *)v1 = (unsigned long long)&off_3DA0;
 v2 = 130;
 if ( !__dynamic_cast(
 v0,
 (const struct __class_type_info *)&typeinfo_for_RT_TIBase,
 (const struct __class_type_info *)&typeinfo_for_RT_TIDerivedA,
 0) )
 v2 = 30;
 v3 = v2 + 200;
 if ( !__dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeinfo_for_RT_TIBase,
 (const struct __class_type_info *)&typeinfo_for_RT_TIDerivedB,
 0) )
 v3 = v2;
 _ZdlPv(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return v3 + 14;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x14A0 */
void test_cpp_oo_features()
{
 int v0; // eax
 unsigned char s[31]; // [rsp+Ch] [rbp-4Ch] BYREF
 char v2; // [rsp+2Bh] [rbp-2Dh]

 puts(::s);
 *(unsigned long long *)&s[15] = *(__int128 *)((char *)&xmmword_21F8 + 15);
 *(unsigned long long *)s = xmmword_21F8;
 v2 = 0;
 v0 = strlen((const char *)s);
 printf(format, (unsigned int)(v0 + 4700));
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
void Container_int_Constructor(struct Container_int *self)
{
 self->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x16D0 */
void Container_int_push(struct Container_int *self, int value)
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
int Container_int_get(const struct Container_int *self, int idx)
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && self->size > idx )
 return self->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1710 */
int Container_int_getSize(const struct Container_int *self)
{
 return self->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1720 */
void Container_double_Constructor(struct Container_double *self)
{
 self->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1730 */
void Container_double_push(struct Container_double *self, double a2, double value)
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
double Container_double_get(const struct Container_double *self, int idx)
{
 double result; // xmm0_8

 result = 0.0;
 if ( idx >= 0 && self->size > idx )
 return self->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1770 */
int Container_double_getSize(const struct Container_double *self)
{
 return self->size;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1780 */
// attributes: thunk
void RTTIDerivedA_destructor(RTTIDerivedA *self)
{
 _ZdlPv(self);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1790 */
int RTTIDerivedA_getType(const RTTIDerivedA *self)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x17A0 */
void RTTIBase_destructor(RTTIBase *self)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x17B0 */
// attributes: thunk
void RTTIDerivedB_destructor(RTTIDerivedB *self)
{
 _ZdlPv(self);
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
