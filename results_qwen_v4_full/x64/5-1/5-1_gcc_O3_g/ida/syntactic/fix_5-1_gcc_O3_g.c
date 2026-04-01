/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_gcc_O3_g
 * Processor: pc
 */

#include <string.h>
#include <stdio.h>
#include <math.h>

extern void *_gmon_start__;
extern void *std___ioinit;
extern void *_dso_handle;
extern void *typeinfo_for_int;
extern void *typeinfo_for_RTTIBase;
extern void *typeinfo_for_RTTIDerivedA;
extern void *typeinfo_for_RTTIDerivedB;
extern void *off_3C70;
extern void *off_3C98;
extern char *global_s;
extern char *unk_203C;
extern char *unk_205A;
extern char *unk_2076;
extern char *unk_2092;
extern char *unk_20AE;
extern char *unk_20CB;
extern char *unk_20E7;
extern char *unk_2103;
extern char *unk_211F;
extern int LifecycleClass_instance_count;

typedef struct SimpleClass {
    char name[32];
} SimpleClass;

typedef struct Base {
    void *_vptr_Base;
} Base;

typedef struct Derived {
    void *_vptr_Base;
    int multiplier;
} Derived;

typedef struct MultiDerived {
    void *_vptr_Base;
    void *_vptr_MiddleB;
    char data[32];
} MultiDerived;

typedef struct MiddleA {
    void *_vptr_MiddleA;
    int dataA;
} MiddleA;

typedef struct MiddleB {
    void *_vptr_MiddleB;
    int dataB;
} MiddleB;

typedef struct DiamondDerived {
    void *_vptr_MiddleA;
    void *_vptr_MiddleB;
    int dataA;
    int dataB;
} DiamondDerived;

typedef struct RTTIBase {
    void *_vptr_RTTIBase;
} RTTIBase;

typedef struct RTTIDerivedA {
    void *_vptr_RTTIBase;
} RTTIDerivedA;

typedef struct RTTIDerivedB {
    void *_vptr_RTTIBase;
} RTTIDerivedB;

typedef struct LifecycleClass {
    int dummy;
} LifecycleClass;

typedef struct Container_int {
    int data[10];
    int size;
} Container_int;

typedef struct Container_double {
    double data[10];
    int size;
} Container_double;

extern int LifecycleClass_instance_count;
extern char *global_s;

/* Global definitions for undefined symbols */
int LifecycleClass_instance_count = 1;
void *std___ioinit = 0;
void *typeinfo_for_RTTIBase = 0;
void *typeinfo_for_RTTIDerivedA = 0;
void *typeinfo_for_RTTIDerivedB = 0;
void *off_3C70 = 0;
void *off_3C98 = 0;
char *unk_203C = "%d";
char *unk_205A = "%d";
char *unk_2076 = "%d";
char *unk_2092 = "%d";
char *unk_20AE = "%d";
char *unk_20CB = "%d";
char *unk_20E7 = "%d";
char *unk_2103 = "%d";
char *unk_211F = "%d";
char *global_s = "Hello";
void *_gmon_start__ = 0;
void *_dso_handle = 0;

void test_cpp_oo_features();
int template_max_int(int a, int b);
double template_max_double(double a1, double a2, double b);
void template_swap_int(int *a, int *b);

extern void *_cxa_atexit(void (*)(void *), void *, void *);
extern void *std_ios_base_Init_Init(void *);

/* Stub implementations for C++ runtime functions */
void *__cxa_allocate_exception(unsigned int size) { return 0; }
void __cxa_throw(void *exception, void *typeinfo, void *dest) { }
void *operator_new(unsigned long size) { return 0; }
void operator_delete(void *ptr, unsigned long size) { }
extern int __printf_chk(int, const char *, ...);
extern int puts(const char *);
extern int strcmp(const char *, const char *);
extern void *__dynamic_cast(void *, const void *, const void *, int);

/* Stub implementation for GCC builtin */
unsigned long long __readfsqword(unsigned int offset) { return 0; }




/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 ;
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 sub_1020();
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1020();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1020();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1020();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1020();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1020();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
 sub_1020();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
 sub_1020();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
 sub_1020();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
 sub_1020();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0()
{
 sub_1020();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
 sub_1020();
}


/* Function: sub_10F0 @ 0x10F0 */
void sub_10F0()
{
 sub_1020();
}


/* Function: sub_1100 @ 0x1100 */
void sub_1100()
{
 sub_1020();
}


/* Function: sub_1110 @ 0x1110 */
void sub_1110()
{
 sub_1020();
}


/* Function: sub_1120 @ 0x1120 */
void sub_1120()
{
 sub_1020();
}


/* Function: _Z18test_cpp_exceptionv @ 0x1240 */
int test_cpp_exception()
{
 unsigned int *exception; // rax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: main @ 0x1310 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}






/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1450 */
int test_cpp_member_func()
{
 SimpleClass obj; // [rsp+0h] [rbp-38h] BYREF
 unsigned long long v2; // [rsp+28h] [rbp-10h]

 v2 = __readfsqword(0x28u);
 *(unsigned long long *)obj.name = 1953719636;
 memset(&obj.name[8], 0, 24);
 return strlen(obj.name) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x14D0 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass_instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x14F0 */
int call_virtual_func(Base *obj, int x)
{
 return ((int (*)(Base *, int))obj->_vptr_Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1500 */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1510 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1520 */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1530 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1540 */
int test_cpp_template_func()
{
 double v0; // xmm2_8
 int v1; // ebx
 double r2; // [rsp+8h] [rbp-20h]
 int a; // [rsp+10h] [rbp-18h] BYREF
 int b; // [rsp+14h] [rbp-14h] BYREF
 unsigned long long v6; // [rsp+18h] [rbp-10h]

 v6 = __readfsqword(0x28u);
 v1 = template_max_int(3, 7);
 a = 10;
 r2 = template_max_double(1.5, v0, 0.0);
 b = 20;
 template_swap_int(&a, &b);
 return b + a + v1 + (int)r2;
}


/* Function: _Z23test_cpp_template_classv @ 0x15E0 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x15F0 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1600 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1610 */
int test_cpp_rtti()
{
 long long *v0; // r13
 unsigned long long *v1; // rax
 void *v2; // r15
 const void *v3; // rbp
 long long v4; // rax
 const char *v5; // r12
 int v6; // r14d
 int v7; // r12d
 int v9; // ebx

 v0 = (long long *)operator_new(8u);
 *v0 = (long long)off_3C70;
 v1 = (unsigned long long *)operator_new(8u);
 v2 = (void *)*v0;
 v3 = v1;
 *v1 = (unsigned long long)off_3C98;
 v4 = *(unsigned long long *)((char *)v2 - 8);
 v5 = *(const char **)((char *)v4 + 8);
 if ( v5 == "12RTTIDerivedA" )
 {
 v6 = 30;
 }
 else if ( *v5 == 42 )
 {
 v6 = 20;
 }
 else
 {
 v6 = strcmp(*(const char **)(v4 + 8), "12RTTIDerivedA") == 0 ? 30 : 20;
 }
 v9 = v6;
 if ( __dynamic_cast(
 (void *)v0,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0) )
 {
 v9 = v6 + 100;
 }
 if ( __dynamic_cast(
 (void *)v3,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0) )
 {
 v9 += 200;
 }
 v7 = v9 + strlen(&v5[*v5 == 42]);
 (*(void ( **)(long long *))(v2 + 8))(v0);
 (*(void ( **)(const void *))(*(unsigned long long *)v3 + 8LL))(v3);
 return v7;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1780 */
void test_cpp_oo_features()
{
 double v0; // xmm2_8
 int v1; // eax
 int v2; // ebx
 double v3; // [rsp+8h] [rbp-50h]
 int a; // [rsp+18h] [rbp-40h] BYREF
 int b; // [rsp+1Ch] [rbp-3Ch] BYREF
 char s[8]; // [rsp+24h] [rbp-34h] BYREF
 long long v7; // [rsp+2Ch] [rbp-2Ch]
 long long v8; // [rsp+34h] [rbp-24h]
 int v9; // [rsp+3Ch] [rbp-1Ch]
 short v10; // [rsp+40h] [rbp-18h]
 char v11; // [rsp+42h] [rbp-16h]
 char v12; // [rsp+43h] [rbp-15h]
 unsigned long long v13; // [rsp+48h] [rbp-10h]

 v13 = __readfsqword(0x28u);
 puts(global_s);
 *(unsigned long long *)s = 1953719636;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 v10 = 0;
 v11 = 0;
 v12 = 0;
 v1 = strlen(s);
 printf("%d", (unsigned int)(v1 + 4700));
 printf("%d", (unsigned int)(1001 * LifecycleClass_instance_count + 21));
 printf("%d", 42);
 printf("%d", 71);
 printf("%d", 650);
 printf("%d", 22);
 v2 = template_max_int(3, 7);
 a = 10;
 v3 = template_max_double(1.5, v0, 0.0);
 b = 20;
 template_swap_int(&a, &b);
 printf("%d", (unsigned int)(b + a + v2 + (int)v3));
 printf("%d", 16);
 printf("%d", 85);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1990 */
int Base_virtual_func(Base *this_ptr, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x19A0 */
const char * Base_getName(const Base *this_ptr)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x19B0 */
void Base_destructor(Base *this_ptr)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x19C0 */
int Derived_virtual_func(Derived *this_ptr, int x)
{
 return x * this_ptr->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x19D0 */
const char * Derived_getName(const Derived *this_ptr)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x19E0 */
int MultiDerived_funcA(MultiDerived *this_ptr)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x19F0 */
int MultiDerived_funcB(MultiDerived *this_ptr)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x1A00 */
long long MultiDerived_funcB_thunk(MultiDerived *this_ptr)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1A10 */
int MiddleA_func(MiddleA *this_ptr)
{
 return *(int *)((char *)&this_ptr->dataA + *((unsigned long long *)this_ptr->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x1A30 */
long long MiddleA_func_thunk(MiddleA *this_ptr)
{
 return (unsigned int)(*(int *)((char *)&this_ptr->dataA
 + *((unsigned long long *)this_ptr->_vptr_MiddleA - 3)
 + *(*(unsigned long long **)((char *)&this_ptr->_vptr_MiddleA + *((unsigned long long *)this_ptr->_vptr_MiddleA - 3)) - 3))
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x1A50 */
int MiddleB_func(MiddleB *this_ptr)
{
 return *(int *)((char *)&this_ptr->dataB + *((unsigned long long *)this_ptr->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x1A70 */
long long MiddleB_func_thunk(MiddleB *this_ptr)
{
 return (unsigned int)(*(int *)((char *)&this_ptr->dataB
 + *((unsigned long long *)this_ptr->_vptr_MiddleB - 3)
 + *(*(unsigned long long **)((char *)&this_ptr->_vptr_MiddleB + *((unsigned long long *)this_ptr->_vptr_MiddleB - 3)) - 3))
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1A90 */
int DiamondDerived_func(DiamondDerived *this_ptr)
{
 return *(int *)((char *)&this_ptr->dataA + *((unsigned long long *)this_ptr->_vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x1AB0 */
long long DiamondDerived_func_thunk(DiamondDerived *this_ptr)
{
 return (unsigned int)(*(int *)((char *)&this_ptr->dataA
 + *((unsigned long long *)this_ptr->_vptr_MiddleA - 3)
 + *(*(unsigned long long **)((char *)&this_ptr->_vptr_MiddleA + *((unsigned long long *)this_ptr->_vptr_MiddleA - 3)) - 3))
 + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x1AD0 */
long long DiamondDerived_func_thunk2(DiamondDerived *this_ptr)
{
 return (unsigned int)(*(unsigned int *)((char *)this_ptr + *(unsigned long long *)(*((unsigned long long *)&this_ptr[-1].dataB + 1) - 24LL) - 8) + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1AF0 */
int RTTIDerivedA_getType(const RTTIDerivedA *this_ptr)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1B00 */
int RTTIDerivedB_getType(const RTTIDerivedB *this_ptr)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1B10 */
void RTTIDerivedB_destructor(RTTIDerivedB *this_ptr)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1B20 */
void RTTIDerivedA_destructor(RTTIDerivedA *this_ptr)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1B30 */
void DiamondDerived_destructor(DiamondDerived *this_ptr)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x1B40 */
void DiamondDerived_destructor_thunk(DiamondDerived *this_ptr)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x1B50 */
void DiamondDerived_destructor_thunk2(DiamondDerived *this_ptr)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1B60 */
void MultiDerived_destructor(MultiDerived *this_ptr)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x1B70 */
void MultiDerived_destructor_thunk(MultiDerived *this_ptr)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1B80 */
void Derived_destructor(Derived *this_ptr)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1B90 */
void Base_destructor_delete(Base *this_ptr)
{
 operator_delete(this_ptr, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1BA0 */
void Derived_destructor_delete(Derived *this_ptr)
{
 operator_delete(this_ptr, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1BB0 */
void MultiDerived_destructor_delete(MultiDerived *this_ptr)
{
 operator_delete(this_ptr, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x1BC0 */
void MultiDerived_destructor_delete_thunk(MultiDerived *this_ptr)
{
 operator_delete((char *)this_ptr - 16, 0x20u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1BE0 */
void RTTIDerivedB_destructor_delete(RTTIDerivedB *this_ptr)
{
 operator_delete(this_ptr, 8u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1BF0 */
void RTTIDerivedA_destructor_delete(RTTIDerivedA *this_ptr)
{
 operator_delete(this_ptr, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1C00 */
void DiamondDerived_destructor_delete(DiamondDerived *this_ptr)
{
 operator_delete(this_ptr, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x1C10 */
void DiamondDerived_destructor_delete_thunk(DiamondDerived *this_ptr)
{
 operator_delete((char *)this_ptr + *((unsigned long long *)this_ptr->_vptr_MiddleA - 4), 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x1C30 */
void DiamondDerived_destructor_delete_thunk2(DiamondDerived *this_ptr)
{
 operator_delete(&this_ptr[-1].dataB + 2, 0x30u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1C50 */
int template_max_int(int a, int b)
{
 int result; // eax

 result = b;
 if ( a >= b )
 return a;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1C60 */
double template_max_double(double a1, double a, double b)
{
 return fmax(a1, a);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1C70 */
void template_swap_int(int *a, int *b)
{
 int v2; // eax

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1C80 */
void Container_int_Constructor(Container_int *this_ptr)
{
 this_ptr->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1C90 */
void Container_int_push(Container_int *this_ptr, int value)
{
 long long size; // rax

 size = this_ptr->size;
 if ( (int)size <= 9 )
 {
 this_ptr->size = size + 1;
 this_ptr->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1CB0 */
int Container_int_get(const Container_int *this_ptr, int idx)
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && this_ptr->size > idx )
 return this_ptr->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1CD0 */
int Container_int_getSize(const Container_int *this_ptr)
{
 return this_ptr->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1CE0 */
void Container_double_Constructor(Container_double *this_ptr)
{
 this_ptr->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1CF0 */
void Container_double_push(Container_double *this_ptr, double a2, double value)
{
 long long size; // rax

 size = this_ptr->size;
 if ( (int)size <= 9 )
 {
 this_ptr->size = size + 1;
 this_ptr->data[size] = a2;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1D10 */
double Container_double_get(const Container_double *this_ptr, int idx)
{
 double result; // xmm0_8

 result = 0.0;
 if ( idx >= 0 && this_ptr->size > idx )
 return this_ptr->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1D40 */
int Container_double_getSize(const Container_double *this_ptr)
{
 return this_ptr->size;
}


/* Function: .term_proc @ 0x1D48 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __printf_chk @ 0x4048 */

/* FAILED to decompile: __cxa_begin_catch @ 0x4050 */

/* FAILED to decompile: strlen @ 0x4058 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x4060 */

/* FAILED to decompile: __libc_start_main @ 0x4070 */

/* FAILED to decompile: __cxa_atexit @ 0x4078 */

/* FAILED to decompile: _Znwm @ 0x4080 */

/* FAILED to decompile: _ZdlPvm @ 0x4088 */

/* FAILED to decompile: __stack_chk_fail @ 0x4090 */

/* FAILED to decompile: __dynamic_cast @ 0x4098 */

/* FAILED to decompile: strcmp @ 0x40A8 */

/* FAILED to decompile: __cxa_rethrow @ 0x40B0 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x40B8 */

/* FAILED to decompile: puts @ 0x40C0 */

/* FAILED to decompile: __cxa_end_catch @ 0x40C8 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x40D0 */

/* FAILED to decompile: __cxa_throw @ 0x40D8 */

/* FAILED to decompile: _Unwind_Resume @ 0x40E0 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x40E8 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x40F0 */

/* FAILED to decompile: __gmon_start__ @ 0x4100 */

/* Total functions decompiled: 85, failed: 21 */
