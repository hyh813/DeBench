/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_gcc_O2_g
 * Processor: arm
 */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/* Global declarations */
void *cpp_operator_new(unsigned long);
void cpp_operator_delete(void *, unsigned long);
int __cxa_atexit(void (*)(void *), void *, void *);
void *__dynamic_cast(void *, const void *, const void *, int);
int __printf_chk(int, const char *, ...);
int puts(const char *);
void GLOBAL__sub_I__Z20test_cpp_member_funcv();
size_t strlen(const char *);
char *strncpy(char *, const char *, size_t);
int strcmp(const char *, const char *);
void *__cxa_allocate_exception(size_t);
void __cxa_throw(void *, const void *, void *);
void __cxa_begin_catch(void *);
void __cxa_end_catch(void);
void __cxa_rethrow(void);
void __cxa_finalize(void *);
void *_Znwm(unsigned long);
void _ZdlPvm(void *, unsigned long);
void _Unwind_Resume(void *);
int __gxx_personality_v0(int, int, long long, void *, void *);
void abort(void);
void __stack_chk_fail(void);
void __gmon_start__(void);
void __libc_start_main(int (*)(int, char **, char **), int, char *, void (*)(void), void *, void *);

/* Template function declarations */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* RTTI globals */
void *off_12C28 = 0;
void *off_12C50 = 0;

/* type_info structure definition */
struct type_info {
    void **_vptr;
    const char *_name;
};

/* type_info structures */
struct type_info typeinfo_for_RTTIBase = {0, "8RTTIBase"};
struct type_info typeinfo_for_RTTIDerivedA = {0, "12RTTIDerivedA"};
struct type_info typeinfo_for_RTTIDerivedB = {0, "12RTTIDerivedB"};
const struct type_info _ZTIi = {0, "i"};

/* std namespace globals - removed as not used */

/* String constants */
const char *asc_1B10 = "Testing C++ OO features";
const char *unk_1B38 = "Member function result: %d\n";
const char *unk_1B58 = "Constructor result: %d\n";
const char *unk_1B78 = "Virtual function result: %d\n";
const char *unk_1B98 = "Multiple inheritance result: %d\n";
const char *unk_1BB8 = "Diamond inheritance result: %d\n";
const char *unk_1BD8 = "Operator overload result: %d\n";
const char *unk_1BF8 = "Template function result: %d\n";
const char *unk_1C18 = "Template class result: %d\n";
const char *unk_1C38 = "Lambda result: %d\n";

/* Function: .init_proc @ 0xE90 */
long long call_weak_fn(void);
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_EB0 @ 0xEB0 */
void JUMPOUT(int);
void sub_EB0()
{
 JUMPOUT(0);
}


/* Function: _Z18test_cpp_exceptionv @ 0x1040 */
int test_cpp_exception()
{
 unsigned int *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw((void *)exception, (const struct type_info *)&_ZTIi, 0);
 return 0;
}


/* Function: main @ 0x1120 */
void test_cpp_oo_features();
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x1140 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 /* std::ios_base::Init::Init(&std::__ioinit); */
 /* __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle); */
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



typedef struct {
 char name[32];
} SimpleClass;

typedef struct {
 int instance_count;
} LifecycleClass;

/* Global LifecycleClass instance */
LifecycleClass g_LifecycleClass = {0};

/* Function: _Z20test_cpp_member_funcv @ 0x12A0 */
int test_cpp_member_func()
{
 char *v0; // x0
 SimpleClass obj; // [xsp+10h] [xbp+10h] BYREF

 v0 = strncpy(obj.name, "Test", 0x1Fu);
 obj.name[31] = 0;
 return strlen(v0) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1310 */
int test_cpp_constructor()
{
 return g_LifecycleClass.instance_count + 21 + 1000 * g_LifecycleClass.instance_count;
}


typedef struct Base {
 void **_vptr;
} Base;

typedef struct Derived {
 void **_vptr;
 int multiplier;
} Derived;

typedef struct MultiDerived {
 void **_vptr;
 int data;
 Base BaseA;
 Base BaseB;
} MultiDerived;

typedef struct MiddleA {
 void **_vptr;
 int dataA;
} MiddleA;

typedef struct MiddleB {
 void **_vptr;
 int dataB;
} MiddleB;

typedef struct DiamondDerived {
 void **_vptr;
 int dataA;
 int dataB;
} DiamondDerived;

typedef struct RTTIBase {
 void **_vptr;
} RTTIBase;

typedef struct RTTIDerivedA {
 void **_vptr;
} RTTIDerivedA;

typedef struct RTTIDerivedB {
 void **_vptr;
} RTTIDerivedB;

typedef struct Container_int {
 int size;
 int data[10];
} Container_int;

typedef struct Container_double {
 int size;
 double data[10];
} Container_double;

/* Function: _Z17call_virtual_funcP4Basei @ 0x1330 */
int call_virtual_func(Base *obj, int x)
{
 return ((int (*)(Base *, int))(*obj->_vptr))(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1340 */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1350 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1360 */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1370 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1380 */
int test_cpp_template_func()
{
 int v0; // w19
 double v1; // d8
 int a; // [xsp+20h] [xbp+20h] BYREF
 int b; // [xsp+24h] [xbp+24h] BYREF

 v0 = template_max_int(3, 7);
 v1 = template_max_double(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap_int(&a, &b);
 return (int)v1 + v0 + a + b;
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


/* Function: _Z18test_cpp_smart_ptrv @ 0x1440 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1450 */
int test_cpp_rtti()
{
 int v0; // w19
 long long *v1; // x21
 void *v2; // x20
 long long v3; // x24
 const char *v4; // x23
 int v5; // w25
 int v6; // w19
 const char *v7; // x0
 int v8; // w19

 v0 = 10;
 v1 = (long long *)cpp_operator_new(8u);
 *v1 = (long long)off_12C28;
 v2 = (void *)cpp_operator_new(8u);
 v3 = *v1;
 v4 = *(const char **)(*(unsigned long long *)(*v1 - 8) + 8LL);
 *(unsigned long long *)v2 = (unsigned long long)off_12C50;
 v5 = *(unsigned char *)v4;
 if ( v4 != "12RTTIDerivedA" )
 {
 v0 = 0;
 if ( v5 != 42 )
 {
 if ( !strcmp(v4, "12RTTIDerivedA") )
 v0 = 10;
 else
 v0 = 0;
 }
 }
 v6 = v0 + 20;
 if ( __dynamic_cast(
 v1,
 (const void *)&typeinfo_for_RTTIBase,
 (const void *)&typeinfo_for_RTTIDerivedA,
 0) )
 {
 v6 += 100;
 }
 if ( __dynamic_cast(
 v2,
 (const void *)&typeinfo_for_RTTIBase,
 (const void *)&typeinfo_for_RTTIDerivedB,
 0) )
 {
 v6 += 200;
 }
 if ( v5 == 42 )
 v7 = v4 + 1;
 else
 v7 = v4;
 v8 = v6 + strlen(v7);
 (*(void ( **)(long long *))(v3 + 8))(v1);
 (*(void ( **)(void *))(*(unsigned long long *)v2 + 8LL))(v2);
 return v8;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x15B0 */
void test_cpp_oo_features()
{
 int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 char v4[36]; // [xsp+24h] [xbp+24h] BYREF

 puts(asc_1B10);
 strncpy(v4, "Test", 0x1Fu);
 v4[31] = 0;
 v0 = strlen(v4);
 __printf_chk(1, unk_1B38, (unsigned int)(v0 + 4700));
 v1 = test_cpp_constructor();
 __printf_chk(1, unk_1B58, v1);
 __printf_chk(1, unk_1B78, 42);
 __printf_chk(1, unk_1B98, 71);
 v2 = test_cpp_diamond_inheritance();
 __printf_chk(1, unk_1BB8, v2);
 __printf_chk(1, unk_1BD8, 22);
 v3 = test_cpp_template_func();
 __printf_chk(1, unk_1BF8, v3);
 __printf_chk(1, unk_1C18, 16);
 __printf_chk(1, unk_1C38, 85);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1740 */
int Base_virtual_func(Base *const this, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x1750 */
const char * Base_getName(const Base *const this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1760 */
void Base_destructor(Base *const this)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1770 */
int Derived_virtual_func(Derived *const this, int x)
{
 return x * this->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1780 */
const char * Derived_getName(const Derived *const this)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1790 */
int MultiDerived_funcA(MultiDerived *const this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x17A0 */
int MultiDerived_funcB(MultiDerived *const this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x17B0 */
long long non_virtual_thunk_MultiDerived_funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x17C0 */
int MiddleA_func(MiddleA *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr - 3)) + 150;
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x17E0 */
long long virtual_thunk_MiddleA_func(MiddleA *this)
{
 return (unsigned int)(*(int *)((char *)&this->dataA
 + *((unsigned long long *)this->_vptr - 3)
 + *(*(unsigned long long **)((char *)&this->_vptr + *((unsigned long long *)this->_vptr - 3)) - 3))
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x1810 */
int MiddleB_func(MiddleB *const this)
{
 return *(int *)((char *)&this->dataB + *((unsigned long long *)this->_vptr - 3)) + 200;
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x1830 */
long long virtual_thunk_MiddleB_func(MiddleB *this)
{
 return (unsigned int)(*(int *)((char *)&this->dataB
 + *((unsigned long long *)this->_vptr - 3)
 + *(*(unsigned long long **)((char *)&this->_vptr + *((unsigned long long *)this->_vptr - 3)) - 3))
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1860 */
int DiamondDerived_func(DiamondDerived *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr - 3)) + 250;
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x1880 */
long long virtual_thunk_DiamondDerived_func(DiamondDerived *this)
{
 return (unsigned int)(*(int *)((char *)&this->dataA
 + *((unsigned long long *)this->_vptr - 3)
 + *(*(unsigned long long **)((char *)&this->_vptr + *((unsigned long long *)this->_vptr - 3)) - 3))
 + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x18A4 */
long long non_virtual_thunk_DiamondDerived_func(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*((unsigned long long *)&this[-1].dataB + 1) - 24LL) - 8) + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x18C0 */
int RTTIDerivedA_getType(const RTTIDerivedA *const this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x18D0 */
int RTTIDerivedB_getType(const RTTIDerivedB *const this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x18E0 */
void RTTIDerivedB_destructor(RTTIDerivedB *const this)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x18F0 */
void RTTIDerivedA_destructor(RTTIDerivedA *const this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1900 */
void DiamondDerived_destructor(DiamondDerived *const this)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x1904 */
void virtual_thunk_DiamondDerived_destructor2(DiamondDerived *this)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x1910 */
void non_virtual_thunk_DiamondDerived_destructor2(DiamondDerived *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1920 */
void MultiDerived_destructor(MultiDerived *const this)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x1924 */
void non_virtual_thunk_MultiDerived_destructor(MultiDerived *this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1930 */
void Derived_destructor(Derived *const this)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1940 */
void Base_delete(Base *const this)
{
 cpp_operator_delete(this, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1950 */
void Derived_delete(Derived *const this)
{
 cpp_operator_delete(this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1960 */
void MultiDerived_delete(MultiDerived *const this)
{
 cpp_operator_delete(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x1970 */
void non_virtual_thunk_MultiDerived_destructor_delete(MultiDerived *this)
{
 cpp_operator_delete(&this[-1].BaseB, 0x20u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1980 */
void RTTIDerivedB_delete(RTTIDerivedB *const this)
{
 cpp_operator_delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1990 */
void RTTIDerivedA_delete(RTTIDerivedA *const this)
{
 cpp_operator_delete(this, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x19A0 */
void DiamondDerived_delete(DiamondDerived *const this)
{
 cpp_operator_delete(this, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x19B0 */
void virtual_thunk_DiamondDerived_destructor_delete(DiamondDerived *this)
{
 cpp_operator_delete((char *)this + *((unsigned long long *)this->_vptr - 4), 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x19C4 */
void non_virtual_thunk_DiamondDerived_destructor_delete(DiamondDerived *this)
{
 cpp_operator_delete(&this[-1].dataB + 2, 0x30u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x19D0 */
int template_max_int(int a, int b)
{
 if ( a < b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x19E0 */
double template_max_double(double a, double b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x19F0 */
void template_swap_int(int *a, int *b)
{
 int v2; // w2

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1A10 */
void Container_int_Constructor(Container_int *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1A20 */
void Container_int_push(Container_int *this, int value)
{
 int size; // w2

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1A40 */
int Container_int_get(const Container_int *this, int idx)
{
 int result; // w0

 result = 0;
 if ( (idx & 0x80000000) == 0 )
 {
 result = 0;
 if ( this->size > idx )
 return this->data[idx];
 }
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1A70 */
int Container_int_getSize(const Container_int *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1A80 */
void Container_double_Constructor(Container_double *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1A90 */
void Container_double_push(Container_double *this, double value)
{
 int size; // w1

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1AB0 */
double Container_double_get(const Container_double *this, int idx)
{
 double result; // d0

 result = 0.0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1AD0 */
int Container_double_getSize(const Container_double *this)
{
 return this->size;
}


/* Function: .term_proc @ 0x1AD8 */
void term_proc()
{
 ;
}

/* Stub implementations for C++ runtime functions */
void *__cxa_allocate_exception(size_t size)
{
 return malloc(size);
}

void __cxa_throw(void *exception, const void *type_info, void *destructor)
{
 /* Stub - just free and abort */
 free(exception);
 abort();
}

void __cxa_begin_catch(void *exception)
{
 /* Stub */
}

void __cxa_end_catch(void)
{
 /* Stub */
}

void __cxa_rethrow(void)
{
 abort();
}

void __cxa_finalize(void *dso_handle)
{
 /* Stub */
}

void *__dynamic_cast(void *src, const void *src_type, const void *dst_type, int flags)
{
 /* Stub - return src for simplicity */
 return src;
}

int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
 return 0;
}

void _Unwind_Resume(void *exception)
{
 abort();
}

int __gxx_personality_v0(int version, int actions, long long exception_class, void *ue_header, void *context)
{
 return 0;
}

void *_Znwm(unsigned long size)
{
 return malloc(size);
}

void _ZdlPvm(void *ptr, unsigned long size)
{
 free(ptr);
}


/* FAILED to decompile: puts @ 0x130A0 */

/* FAILED to decompile: strlen @ 0x130A8 */

/* FAILED to decompile: __stack_chk_fail @ 0x130B0 */

/* FAILED to decompile: __cxa_begin_catch @ 0x130B8 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x130C8 */

/* FAILED to decompile: __cxa_finalize @ 0x130D0 */

/* FAILED to decompile: __libc_start_main @ 0x130E0 */

/* FAILED to decompile: _Znwm @ 0x130E8 */

/* FAILED to decompile: _ZdlPvm @ 0x130F0 */

/* FAILED to decompile: strncpy @ 0x130F8 */

/* FAILED to decompile: __dynamic_cast @ 0x13100 */

/* FAILED to decompile: __cxa_atexit @ 0x13108 */

/* FAILED to decompile: strcmp @ 0x13118 */

/* FAILED to decompile: __cxa_rethrow @ 0x13120 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x13128 */

/* FAILED to decompile: abort @ 0x13130 */

/* FAILED to decompile: __cxa_end_catch @ 0x13138 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x13140 */

/* FAILED to decompile: __cxa_throw @ 0x13148 */

/* FAILED to decompile: _Unwind_Resume @ 0x13150 */

/* FAILED to decompile: __printf_chk @ 0x13158 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x13160 */

/* FAILED to decompile: __gmon_start__ @ 0x13170 */

/* Total functions decompiled: 70, failed: 23 */
