/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_gcc_O1_g
 * Processor: pc
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* External declarations */
/* CRT stubs - defined as globals below */
/* extern long long (*_gmon_start__)(void); */
/* extern void *_dso_handle; */

/* String constants (replacing extern references) */
static const char *s = "Testing C++ OO features";
static const char *unk_303C = "test_cpp_member_func: %d\n";
static const char *unk_305A = "test_cpp_constructor: %d\n";
static const char *unk_3076 = "test_cpp_virtual_func: %d\n";
static const char *unk_3092 = "test_cpp_multiple_inheritance: %d\n";
static const char *unk_30AE = "test_cpp_diamond_inheritance: %d\n";
static const char *unk_30CB = "test_cpp_operator_overload: %d\n";
static const char *unk_30E7 = "test_cpp_template_func: %d\n";
static const char *unk_3103 = "test_cpp_template_class: %d\n";
static const char *unk_311F = "test_cpp_lambda: %d\n";

/* CRT stub global variables */
long long (*_gmon_start__)(void) = 0;
void *_dso_handle = 0;

/* Vtable pointers (replacing extern references) */
static int off_59A0_stub = 0;
static int off_59D0_stub = 0;
static int off_5B78_stub = 0;
static long long off_5BA0_stub = 0;
static long long off_5BC8_stub = 0;

/* Function declarations */
extern int __printf_chk(int flag, const char *format, ...);
extern void *operator new(unsigned long size);
extern void *operator new[](unsigned long size);
extern void operator delete(void *ptr);
extern void operator delete[](void *ptr);
extern void operator_delete(void *ptr, unsigned long size);
extern void *memset(void *s, int c, unsigned long n);
extern unsigned long strlen(const char *s);
extern int strcmp(const char *s1, const char *s2);
extern void *memcpy(void *dest, const void *src, unsigned long n);
extern int puts(const char *s);
extern double fmax(double x, double y);
extern unsigned long long __readfsqword(unsigned int offset);
extern void *__cxa_allocate_exception(unsigned long size);
extern void __cxa_throw(void *exc, void *type_info, void *dest);
extern void *__dynamic_cast(void *src, void *src_type, void *dst_type, int flags);
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);

/* Stub implementations for missing functions */
void __cxa_throw_stub(void *exc, void *type_info, void *dest) { }
void *__cxa_allocate_exception_stub(unsigned long size) { static char buf[64]; return buf; }
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle) { return 0; }
void *__dynamic_cast(void *src, void *src_type, void *dst_type, int flags) { return 0; }
unsigned long long __readfsqword(unsigned int offset) { return 0; }
void operator_delete(void *ptr, unsigned long size) { operator delete(ptr); }

/* Forward declarations for functions defined later */
extern long long virtual_thunk_to_DiamondDerived_func(DiamondDerived *this_ptr);
extern int template_max_int(int a, int b);
extern double template_max_double(double a1, double a, double b);
extern void template_swap_int(int *a, int *b);

/* Struct definitions */
struct Base {
    int (**_vptr_Base)(...);
};

struct Derived {
    int (**_vptr_Base)(...);
    int multiplier;
};

struct MultiDerived {
    Base BaseA;
    Base BaseB;
    int data;
};

struct MiddleA {
    int (**_vptr_MiddleA)(...);
    int dataA;
};

struct MiddleB {
    int (**_vptr_MiddleB)(...);
    int dataB;
};

struct DiamondDerived {
    MiddleA middleA;
    MiddleB middleB;
    int dataA;
    int dataB;
};

struct RTTIBase {
    int (**_vptr)(...);
};

struct RTTIDerivedA {
    int (**_vptr)(...);
};

struct RTTIDerivedB {
    int (**_vptr)(...);
};

struct SimpleClass {
    char name[32];
};

struct LifecycleClass {
    int instance_count;
};

/* Global variable for LifecycleClass instance count */
int LifecycleClass_instance_count = 0;

struct Container_int {
    int data[10];
    int size;
};

struct Container_double {
    double data[10];
    int size;
};

/* std namespace stubs */
namespace std {
    struct ios_base {
        struct Init {
            void (*constructor)(void *);
            void (*destructor)(void *);
        };
    };
    /* Define __ioinit as a global variable */
    ios_base::Init __ioinit = {0, 0};
}




/* Function: sub_2020 @ 0x2020 */
void sub_2020()
{
}


/* Function: sub_2030 @ 0x2030 */
void sub_2030()
{
 sub_2020();
}


/* Function: sub_2040 @ 0x2040 */
void sub_2040()
{
 sub_2020();
}


/* Function: sub_2050 @ 0x2050 */
void sub_2050()
{
 sub_2020();
}


/* Function: sub_2060 @ 0x2060 */
void sub_2060()
{
 sub_2020();
}


/* Function: sub_2070 @ 0x2070 */
void sub_2070()
{
 sub_2020();
}


/* Function: sub_2080 @ 0x2080 */
void sub_2080()
{
 sub_2020();
}


/* Function: sub_2090 @ 0x2090 */
void sub_2090()
{
 sub_2020();
}


/* Function: sub_20A0 @ 0x20A0 */
void sub_20A0()
{
 sub_2020();
}


/* Function: sub_20B0 @ 0x20B0 */
void sub_20B0()
{
 sub_2020();
}


/* Function: sub_20C0 @ 0x20C0 */
void sub_20C0()
{
 sub_2020();
}


/* Function: sub_20D0 @ 0x20D0 */
void sub_20D0()
{
 sub_2020();
}


/* Function: sub_20E0 @ 0x20E0 */
void sub_20E0()
{
 sub_2020();
}


/* Function: sub_20F0 @ 0x20F0 */
void sub_20F0()
{
 sub_2020();
}


/* Function: sub_2100 @ 0x2100 */
void sub_2100()
{
 sub_2020();
}


/* Function: sub_2110 @ 0x2110 */
void sub_2110()
{
 sub_2020();
}


/* Function: sub_2120 @ 0x2120 */
void sub_2120()
{
 sub_2020();
}


/* Function: sub_2130 @ 0x2130 */
void sub_2130()
{
 sub_2020();
}


/* Function: sub_2140 @ 0x2140 */
void sub_2140()
{
 sub_2020();
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x2369 */
int test_cpp_member_func()
{
 SimpleClass obj; // [rsp+0h] [rbp-38h] BYREF
 unsigned long long v2; // [rsp+28h] [rbp-10h]

 v2 = __readfsqword(0x28u);
 *(unsigned long long *)obj.name = 1953719636;
 memset(&obj.name[8], 0, 24);
 return strlen(obj.name) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x23DE */
int test_cpp_constructor()
{
 unsigned int *v0; // rdi
 int v1; // eax
 int v2; // ebx

 v0 = (unsigned int *)operator new[](0x14u);
 v0[1] = 10;
 v0[2] = 20;
 v0[3] = 30;
 v0[4] = 40;
 v1 = LifecycleClass_instance_count++;
 v2 = v1 + 21;
 operator delete[](v0);
 --LifecycleClass_instance_count;
 return v2 + 1000 * LifecycleClass_instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x243C */
int call_virtual_func(Base *obj, int x)
{
 return (*obj->_vptr_Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x244E */
int test_cpp_virtual_func()
{
 int v0; // ebx
 Base base; // [rsp+8h] [rbp-30h] BYREF
 Derived derived; // [rsp+10h] [rbp-28h] BYREF
 unsigned long long v4; // [rsp+28h] [rbp-10h]

 v4 = __readfsqword(0x28u);
 base._vptr_Base = (int (**)(...))&off_59A0_stub;
 derived._vptr_Base = (int (**)(...))&off_59D0_stub;
 derived.multiplier = 3;
 v0 = call_virtual_func(&base, 5);
 return v0 + call_virtual_func((Base *)&derived, 5) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x24C6 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x24D0 */
int test_cpp_diamond_inheritance()
{
 int v0; // ebx
 DiamondDerived obj; // [rsp+0h] [rbp-58h] BYREF

 *((unsigned long long *)&obj.dataB + 2) = __readfsqword(0x28u);
 obj.middleB._vptr_MiddleB = (int (**)(...))&off_5B78_stub;
 obj.dataB = 50;
 v0 = virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&obj.middleB);
 obj.dataB = 100;
 return v0 + virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&obj.middleB);
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x254C */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x2556 */
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
 r2 = template_max_double(1.5, 2.5, 3.5);
 a = 10;
 b = 20;
 template_swap_int(&a, &b);
 return b + a + v1 + (int)r2;
}


/* Function: _Z23test_cpp_template_classv @ 0x25E5 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x25EF */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x25F9 */
int test_cpp_exception()
{
 unsigned int *exception; // rdi

 exception = (unsigned int *)__cxa_allocate_exception_stub(4u);
 *exception = 42;
 __cxa_throw_stub(exception, (struct type_info *)"typeinfo_for_int", 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x26D1 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x26DB */
int test_cpp_rtti()
{
 long long *v0; // r12
 void *v1; // r13
 long long v2; // r14
 const char *v3; // rbp
 int v4; // ebx
 int v5; // ebx
 int v6; // ebx

 v0 = (long long *)operator new(8u);
 *v0 = (long long)off_5BA0_stub;
 v1 = (void *)operator new(8u);
 *(unsigned long long *)v1 = (unsigned long long)off_5BC8_stub;
 v2 = *v0;
 v3 = *(const char **)(*(unsigned long long *)(*v0 - 8) + 8LL);
 v4 = 10;
 if ( v3 != "12RTTIDerivedA" )
 {
 v4 = 0;
 if ( *v3 != 42 )
 v4 = strcmp(*(const char **)(*(unsigned long long *)(*v0 - 8) + 8LL), "12RTTIDerivedA") == 0 ? 0xA : 0;
 }
 v5 = v4 + 20;
 if ( __dynamic_cast(
 v0,
 (void *)"typeinfo_for_RTTIBase",
 (void *)"typeinfo_for_RTTIDerivedA",
 0) )
 {
 v5 += 100;
 }
 if ( __dynamic_cast(
 v1,
 (void *)"typeinfo_for_RTTIBase",
 (void *)"typeinfo_for_RTTIDerivedB",
 0) )
 {
 v5 += 200;
 }
 v6 = strlen(&v3[*v3 == 42]) + v5;
 (*(void ( **)(long long *))(v2 + 8))(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return v6;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x2801 */
void test_cpp_oo_features()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax

 puts(s);
 v0 = test_cpp_member_func();
 __printf_chk(1, unk_303C, v0);
 v1 = test_cpp_constructor();
 __printf_chk(1, unk_305A, v1);
 v2 = test_cpp_virtual_func();
 __printf_chk(1, unk_3076, v2);
 v3 = test_cpp_multiple_inheritance();
 __printf_chk(1, unk_3092, v3);
 v4 = test_cpp_diamond_inheritance();
 __printf_chk(1, unk_30AE, v4);
 __printf_chk(1, unk_30CB, 22);
 v5 = test_cpp_template_func();
 __printf_chk(1, unk_30E7, v5);
 __printf_chk(1, unk_3103, 16);
 __printf_chk(1, unk_311F, 85);
 test_cpp_exception();
}


/* Function: main @ 0x2970 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x2987 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 std::__ioinit.constructor(&std::__ioinit);
 __cxa_atexit((void (*)(void *))std::__ioinit.destructor, &std::__ioinit, &_dso_handle);
}


/* Function: _ZN4Base12virtual_funcEi @ 0x29B4 */
int Base_virtual_func(Base *this_ptr, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x29BC */
const char * Base_getName(const Base *this_ptr)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x29C8 */
void Base_destructor(Base *this_ptr)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x29CE */
int Derived_virtual_func(Derived *this_ptr, int x)
{
 return this_ptr->multiplier * x;
}


/* Function: _ZNK7Derived7getNameEv @ 0x29DA */
const char * Derived_getName(const Derived *this_ptr)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x29E6 */
int MultiDerived_funcA(MultiDerived *this_ptr)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x29F0 */
int MultiDerived_funcB(MultiDerived *this_ptr)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x29FA */
long long non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *this_ptr)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x2A04 */
int MiddleA_func(MiddleA *this_ptr)
{
 return *(int *)((char *)&this_ptr->dataA + *((unsigned long long *)this_ptr->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x2A19 */
long long virtual_thunk_to_MiddleA_func(MiddleA *this_ptr)
{
 return (unsigned int)(*(int *)((char *)&this_ptr->dataA
 + *((unsigned long long *)this_ptr->_vptr_MiddleA - 3)
 + *(*(unsigned long long **)((char *)&this_ptr->_vptr_MiddleA + *((unsigned long long *)this_ptr->_vptr_MiddleA - 3)) - 3))
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x2A36 */
int MiddleB_func(MiddleB *this_ptr)
{
 return *(int *)((char *)&this_ptr->dataB + *((unsigned long long *)this_ptr->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x2A4B */
long long virtual_thunk_to_MiddleB_func(MiddleB *this_ptr)
{
 return (unsigned int)(*(int *)((char *)&this_ptr->dataB
 + *((unsigned long long *)this_ptr->_vptr_MiddleB - 3)
 + *(*(unsigned long long **)((char *)&this_ptr->_vptr_MiddleB + *((unsigned long long *)this_ptr->_vptr_MiddleB - 3)) - 3))
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x2A68 */
int DiamondDerived_func(DiamondDerived *this_ptr)
{
 return *(int *)((char *)&this_ptr->dataA + *((unsigned long long *)this_ptr->middleA._vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x2A7D */
long long virtual_thunk_to_DiamondDerived_func(DiamondDerived *this_ptr)
{
 return (unsigned int)(*(int *)((char *)&this_ptr->dataA
 + *((unsigned long long *)this_ptr->middleA._vptr_MiddleA - 3)
 + *(*(unsigned long long **)((char *)&this_ptr->middleA._vptr_MiddleA + *((unsigned long long *)this_ptr->middleA._vptr_MiddleA - 3)) - 3))
 + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x2A99 */
long long non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *this_ptr)
{
 return (unsigned int)(*(unsigned int *)((char *)this_ptr + *(unsigned long long *)(*((unsigned long long *)&this_ptr[-1].dataB + 1) - 24LL) - 8) + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x2AB0 */
int RTTIDerivedA_getType(const RTTIDerivedA *this_ptr)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x2ABA */
int RTTIDerivedB_getType(const RTTIDerivedB *this_ptr)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x2AC4 */
void RTTIDerivedB_destructor(RTTIDerivedB *this_ptr)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x2ACA */
void RTTIDerivedA_destructor(RTTIDerivedA *this_ptr)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2AD0 */
void DiamondDerived_destructor(DiamondDerived *this_ptr)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x2AD5 */
void non_virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *this_ptr)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x2ADA */
void virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *this_ptr)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x2AE0 */
void MultiDerived_destructor(MultiDerived *this_ptr)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x2AE5 */
void non_virtual_thunk_to_MultiDerived_destructor(MultiDerived *this_ptr)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x2AEA */
void Derived_destructor(Derived *this_ptr)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x2AF0 */
void Base_destructor_delete(Base *this_ptr)
{
 operator_delete(this_ptr, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x2B08 */
void Derived_destructor_delete(Derived *this_ptr)
{
 operator_delete(this_ptr, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x2B20 */
void MultiDerived_destructor_delete(MultiDerived *this_ptr)
{
 operator_delete(this_ptr, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x2B37 */
void non_virtual_thunk_to_MultiDerived_destructor_delete(MultiDerived *this_ptr)
{
 operator_delete(&this_ptr[-1].BaseB, 0x20u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x2B52 */
void RTTIDerivedA_destructor_delete(RTTIDerivedA *this_ptr)
{
 operator_delete(this_ptr, 8u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x2B6A */
void RTTIDerivedB_destructor_delete(RTTIDerivedB *this_ptr)
{
 operator_delete(this_ptr, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x2B82 */
void DiamondDerived_destructor_delete(DiamondDerived *this_ptr)
{
 operator_delete(this_ptr, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2B99 */
void virtual_thunk_to_DiamondDerived_destructor_delete(DiamondDerived *this_ptr)
{
 operator_delete((char *)this_ptr + *((unsigned long long *)this_ptr->middleA._vptr_MiddleA - 4), 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x2BB7 */
void non_virtual_thunk_to_DiamondDerived_destructor_delete(DiamondDerived *this_ptr)
{
 operator_delete(&this_ptr[-1].dataB + 2, 0x30u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2BD2 */
int template_max_int(int a, int b)
{
 int result; // eax

 result = b;
 if ( a >= b )
 return a;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2BDE */
double template_max_double(double a1, double a, double b)
{
 return fmax(a1, a);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x2BE7 */
void template_swap_int(int *a, int *b)
{
 int v2; // eax

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x2BF4 */
void Container_int_constructor(Container_int *this_ptr)
{
 this_ptr->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x2C00 */
void Container_int_push(Container_int *this_ptr, int value)
{
 int size; // eax

 size = this_ptr->size;
 if ( size <= 9 )
 {
 this_ptr->size = size + 1;
 this_ptr->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x2C18 */
int Container_int_get(const Container_int *this_ptr, int idx)
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && this_ptr->size > idx )
 return this_ptr->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x2C34 */
int Container_int_getSize(const Container_int *this_ptr)
{
 return this_ptr->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x2C3C */
void Container_double_constructor(Container_double *this_ptr)
{
 this_ptr->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x2C48 */
void Container_double_push(Container_double *this_ptr, double a2, double value)
{
 int size; // eax

 size = this_ptr->size;
 if ( size <= 9 )
 {
 this_ptr->size = size + 1;
 this_ptr->data[size] = a2;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x2C62 */
double Container_double_get(const Container_double *this_ptr, int idx)
{
 double result; // xmm0_8

 result = 0.0;
 if ( idx >= 0 && this_ptr->size > idx )
 return this_ptr->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2C7E */
int Container_double_getSize(const Container_double *this_ptr)
{
 return this_ptr->size;
}


/* Function: .term_proc @ 0x2C88 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __printf_chk @ 0x6048 */

/* FAILED to decompile: _Znam @ 0x6050 */

/* FAILED to decompile: __cxa_begin_catch @ 0x6058 */

/* FAILED to decompile: strlen @ 0x6060 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x6068 */

/* FAILED to decompile: __libc_start_main @ 0x6078 */

/* FAILED to decompile: __cxa_atexit @ 0x6080 */

/* FAILED to decompile: _Znwm @ 0x6088 */

/* FAILED to decompile: _ZdlPvm @ 0x6090 */

/* FAILED to decompile: __stack_chk_fail @ 0x6098 */

/* FAILED to decompile: __dynamic_cast @ 0x60A0 */

/* FAILED to decompile: _ZdaPv @ 0x60A8 */

/* FAILED to decompile: strcmp @ 0x60B8 */

/* FAILED to decompile: __cxa_rethrow @ 0x60C0 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x60C8 */

/* FAILED to decompile: puts @ 0x60D0 */

/* FAILED to decompile: __cxa_end_catch @ 0x60D8 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x60E0 */

/* FAILED to decompile: __cxa_throw @ 0x60E8 */

/* FAILED to decompile: _Unwind_Resume @ 0x60F8 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x6100 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6108 */

/* FAILED to decompile: __gmon_start__ @ 0x6118 */

/* Total functions decompiled: 87, failed: 23 */
