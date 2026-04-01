/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <unistd.h>

/* HIBYTE macro for extracting high byte */
#define HIBYTE(x) (((x) >> 8) & 0xFF)

/* External declarations for CRT and profiling functions */
extern void *_gmon_start__;
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);
extern void _do_global_dtors_aux(void);

/* Standard library function declarations */
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern size_t strlen(const char *s);
extern void *memset(void *s, int c, size_t n);
extern char *strcpy(char *dest, const char *src);
extern void *malloc(size_t size);
extern void free(void *ptr);

/* Additional builtin definitions */
#ifndef __builtin_unreachable
#define __builtin_unreachable() do {} while(0)
#endif

/* C++ standard library external declarations */
extern void *__cxa_allocate_exception(unsigned long size);
extern void __cxa_throw(void *exception, void *type_info, void *dest);
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void *__dynamic_cast(const void *src_ptr, const void *src_type, const void *dst_type, unsigned long src_ptr_dist);

/* C++ operators (not in extern "C") */
extern void *operator_new(size_t size);
extern void operator_delete(void *ptr);

/* Stub implementations for C++ operators */
void *operator_new(size_t size) { return malloc(size); }
void operator_delete(void *ptr) { free(ptr); }

/* Stub implementations for C++ runtime functions */
void *__cxa_allocate_exception(unsigned long size) { return malloc(size); }
void __cxa_throw(void *exception, void *type_info, void *dest) { /* stub */ }
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle) { return 0; /* stub */ }
void *__dynamic_cast(const void *src_ptr, const void *src_type, const void *dst_type, unsigned long src_ptr_dist) { return (void *)src_ptr; /* stub */ }
void __cxa_begin_catch(void *exception) { /* stub */ }
void __cxa_end_catch(void) { /* stub */ }
void __cxa_rethrow(void) { /* stub */ }
void __cxa_finalize(void *d) { /* stub */ }
void *_Unwind_Resume(void *exception) { return 0; /* stub */ }
int __gxx_personality_v0(int version, int actions, long exception_class, void *ue_header, void *context) { return 0; /* stub */ }

/* Forward declarations for C++ classes */
struct Base;
struct LifecycleClass;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

/* Container template - forward declarations removed (C++ only) */

/* std namespace objects */
struct std_ios_base_Init {
void *_vptr;
};
struct std_ios_base_Init std___ioinit = {0};

/* Global variables */
void *_dso_handle = 0;
const char *asc_21D8 = "C++ OO Features Test";
const char *aCppL301D = "strlen result: %zu\n";
const char *aCppL302D = "constructor result: %d\n";
const char *aCppL303D = "virtual func result: %d\n";
const char *aCppL304D = "multiple inheritance result: %d\n";
const char *aCppL305D = "diamond inheritance result: %d\n";
const char *aCppL306D = "operator overload result: %d\n";
const char *aCppL307D = "template func result: %d\n";
const char *aCppL308D = "template class result: %d\n";
const char *aCppL309D = "lambda result: %d\n";

/* Type info structures */
struct type_info {
void *_vptr;
const char *name;
};
struct type_info typeinfo_for_int = {0, "int"};

struct __class_type_info {
void *_vptr;
const char *name;
};
struct __class_type_info typeinfo_for_RTTIBase = {0, "RTTIBase"};
struct __class_type_info typeinfo_for_RTTIDerivedA = {0, "RTTIDerivedA"};
struct __class_type_info typeinfo_for_RTTIDerivedB = {0, "RTTIDerivedB"};

/* Global variable references to typeinfo */
void *off_3ECC = &typeinfo_for_RTTIDerivedA;
void *off_3EE0 = &typeinfo_for_RTTIDerivedB;

/* LifecycleClass with static member */
struct LifecycleClass {
int instance_count;
};
int LifecycleClass_instance_count = 0;

/* Base class with vtable pointer */
struct Base {
void *_vptr_Base;
};

/* RTTI classes */
struct RTTIBase {
void *_vptr_RTTIBase;
};

struct RTTIDerivedA {
void *_vptr_RTTIDerivedA;
};

struct RTTIDerivedB {
void *_vptr_RTTIDerivedB;
};

/* Container template - int specialization */
struct Container_int {
int data[10];
int size;
};

/* Container template - double specialization */
struct Container_double {
double data[10];
int size;
};

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_clang_O2_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 if ( &_gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 /* Inline assembly stub removed */
}


/* Function: sub_1130 @ 0x1130 */
int sub_1130(int a1)
{
 return (*(int (**)(void))(a1 - 24))();
}


/* Wrapper function for ios_base::Init destructor */
void __destroy_ioinit(void *arg)
{
 /* destructor stub */
}

/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1140 */
void GLOBAL__sub_I_5_1_cpp()
{
 __cxa_atexit(__destroy_ioinit, &std___ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_11AC @ 0x11AC */
void sub_11AC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x11B0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x12E9 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x12ED */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1300 */
size_t test_cpp_member_func()
{
 unsigned short s[4]; // [esp+14h] [ebp-28h] BYREF
 int v2; // [esp+1Ch] [ebp-20h]
 int v3; // [esp+20h] [ebp-1Ch]
 int v4; // [esp+24h] [ebp-18h]
 int v5; // [esp+28h] [ebp-14h]
 unsigned char v6[8]; // [esp+2Ch] [ebp-10h] BYREF

 memset(v6, 0, sizeof(v6));
 v5 = 0;
 v4 = 0;
 v3 = 0;
 v2 = 0;
 HIBYTE(s[2]) = 0;
 s[3] = 0;
 strcpy((char *)s, "Test");
 return strlen((const char *)s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1380 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass_instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x13A0 */
int call_virtual_func(Base *obj, int x)
{
 return ((int (*)(Base *, int))(*(void **)obj->_vptr_Base))(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x13D0 */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x13E0 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x13F0 */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1400 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1410 */
int test_cpp_template_func()
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x1420 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1430 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1440 */
void test_cpp_exception()
{
 unsigned int *exception; // eax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, &typeinfo_for_int, 0);
 __builtin_unreachable();
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1530 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1540 */
int test_cpp_rtti()
{
 void *v0; // eax
 const void *v1; // esi
 void *v2; // edi
 void *v3; // eax
 int v4; // esi
 int v5; // ebp
 void *v7; // [esp+8h] [ebp-14h]

 v0 = operator_new(4u);
 *(void **)v0 = &typeinfo_for_RTTIDerivedA;
 v1 = v0;
 v7 = v0;
 v2 = operator_new(4u);
 *(void **)v2 = &typeinfo_for_RTTIDerivedB;
 v3 = __dynamic_cast(
 v1,
 (const void *)&typeinfo_for_RTTIBase,
 (const void *)&typeinfo_for_RTTIDerivedA,
 0);
 v4 = 130;
 if ( !v3 )
 v4 = 30;
 v5 = v4 + 200;
 if ( !__dynamic_cast(
 v2,
 (const void *)&typeinfo_for_RTTIBase,
 (const void *)&typeinfo_for_RTTIDerivedB,
 0) )
 v5 = v4;
 operator_delete(v7);
 operator_delete(v2);
 return v5 + 14;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1600 */
void test_cpp_oo_features()
{
 size_t v0; // eax
 char s[6]; // [esp+Ch] [ebp-30h] BYREF
 short v2; // [esp+12h] [ebp-2Ah]
 int v3; // [esp+14h] [ebp-28h]
 int v4; // [esp+18h] [ebp-24h]
 int v5; // [esp+1Ch] [ebp-20h]
 int v6; // [esp+20h] [ebp-1Ch]
 unsigned char v7[8]; // [esp+24h] [ebp-18h] BYREF

 puts(asc_21D8);
 memset(v7, 0, sizeof(v7));
 v6 = 0;
 v5 = 0;
 v4 = 0;
 v3 = 0;
 s[5] = 0;
 v2 = 0;
 strcpy(s, "Test");
 v0 = strlen(s);
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
 __builtin_unreachable();
}


/* Function: main @ 0x1810 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1830 */
int template_max_int(int a, int b)
{
 int result; // eax

 result = b;
 if ( a > b )
 return a;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1840 */
double template_max_double(double a, double b)
{
 long double v2; // fst6

 v2 = b;
 if ( a > (long double)b )
 return a;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1860 */
void template_swap_int(int *a, int *b)
{
 int v2; // edx

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1880 */
void Container_int_init(struct Container_int *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1890 */
void Container_int_push(struct Container_int *this, int value)
{
 int size; // ecx

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x18B0 */
int Container_int_get(const struct Container_int *this, int idx)
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x18D0 */
int Container_int_getSize(const struct Container_int *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x18E0 */
void Container_double_init(struct Container_double *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x18F0 */
void Container_double_push(struct Container_double *this, double value)
{
 int size; // ecx

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1910 */
double Container_double_get(const struct Container_double *this, int idx)
{
 long double result; // fst7

 result = 0.0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1930 */
int Container_double_getSize(const struct Container_double *this)
{
 return this->size;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1940 */
void RTTIDerivedA_destroy(RTTIDerivedA *this)
{
 operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1970 */
int RTTIDerivedA_getType(const RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x1980 */
void RTTIBase_destroy(RTTIBase *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1990 */
void RTTIDerivedB_destroy(RTTIDerivedB *this)
{
 operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x19C0 */
int RTTIDerivedB_getType(const RTTIDerivedB *this)
{
 return 2;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1A1C */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: _Znwj @ 0x4078 */

/* FAILED to decompile: __cxa_finalize @ 0x407C */

/* FAILED to decompile: __cxa_begin_catch @ 0x4080 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x4084 */

/* FAILED to decompile: strlen @ 0x4088 */

/* FAILED to decompile: __cxa_atexit @ 0x408C */

/* FAILED to decompile: __libc_start_main @ 0x4094 */

/* FAILED to decompile: _ZdlPv @ 0x4098 */

/* FAILED to decompile: __dynamic_cast @ 0x409C */

/* FAILED to decompile: printf @ 0x40A4 */

/* FAILED to decompile: __cxa_rethrow @ 0x40A8 */

/* FAILED to decompile: puts @ 0x40AC */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x40B0 */

/* FAILED to decompile: __cxa_end_catch @ 0x40B4 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x40B8 */

/* FAILED to decompile: __cxa_throw @ 0x40BC */

/* FAILED to decompile: _Unwind_Resume @ 0x40C0 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x40C4 */

/* Total functions decompiled: 46, failed: 18 */
