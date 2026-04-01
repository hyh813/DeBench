/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_gcc_O2_no_g
 * Processor: arm
 */

#include <string.h>

/* Function declarations */
long long call_weak_fn(void);
void JUMPOUT(long long addr);
unsigned int *__cxa_allocate_exception(unsigned int size);
void __cxa_throw(void *exception, void *type_info, void (*destructor)(void *));
void test_cpp_oo_features(void);
void _ZNSt8ios_base4InitC1Ev(void *obj);
void _ZNSt8ios_base4InitD1Ev(void *obj);
int __cxa_atexit(void (*func)(void *), void *obj, void *dso_handle);
void *operator_new(unsigned long size);
void operator_delete(void *ptr);
void _ZdlPvm(void *ptr, unsigned long size);
long long template_max_int(long long result, int a2);
double template_max_double(double result, double a2);
int * template_swap_int(int *result, int *a2);
void * __dynamic_cast(void *sub, struct type_info const *src, struct type_info const *dst, long src2dst_offset);
int puts(const char *s);
size_t strlen(const char *s);
int __printf_chk(int flag, const char *format, ...);

/* type_info structure for RTTI */
struct type_info {
    void **vtable;  // virtual table pointer
};

/* __class_type_info is compatible with type_info in C */
typedef struct type_info __class_type_info;
extern struct type_info const *typeinfo_for_int;
extern struct type_info const *typeinfo_for_RTTIBase;
extern struct type_info const *typeinfo_for_RTTIDerivedA;
extern struct type_info const *typeinfo_for_RTTIDerivedB;
extern long long off_12C28;
extern long long off_12C50;

/* Forward declarations for classes */
struct Base;
struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;
struct Container_int;
struct Container_double;

/* Empty struct definitions for decompiled types */
struct Base {};
struct Derived {};
struct MultiDerived {};
struct MiddleA {};
struct MiddleB {};
struct DiamondDerived {};
struct RTTIDerivedA {};
struct RTTIDerivedB {};
struct LifecycleClass {};
struct Container_int {};
struct Container_double {};

/* Typedefs to allow C++ style naming without 'struct' keyword */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct LifecycleClass LifecycleClass;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* Function: .init_proc @ 0xE90 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_EB0 @ 0xEB0 */
void sub_EB0()
{
 JUMPOUT(0);
}


/* Function: _Z18test_cpp_exceptionv @ 0x1040 */
void test_cpp_exception(void)
{
 unsigned int *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: main @ 0x1120 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
 return 0;
}


/* Global objects */
struct { int dummy; } std___ioinit;
void *_dso_handle;
int LifecycleClass_instance_count = 0;
extern const char asc_1B10[];
extern const char unk_1B38[];
extern const char unk_1B58[];
extern const char unk_1B78[];
extern const char unk_1B98[];
extern const char unk_1BB8[];
extern const char unk_1BD8[];
extern const char unk_1BF8[];
extern const char unk_1C18[];
extern const char unk_1C38[];

/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x1140 */
long long GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 _ZNSt8ios_base4InitC1Ev((void *)&std___ioinit);
 return __cxa_atexit((void (*)(void *))&_ZNSt8ios_base4InitD1Ev, &std___ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x12A0 */
long long test_cpp_member_func(void)
{
 char *v0; // x0
 char dest[36]; // [xsp+14h] [xbp+14h] BYREF

 v0 = strncpy(dest, "Test", 0x1Fu);
 dest[31] = 0;
 return (unsigned int)strlen(v0) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1310 */
long long test_cpp_constructor(void)
{
 return (unsigned int)(LifecycleClass_instance_count + 21 + 1000 * LifecycleClass_instance_count);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1330 */
long long call_virtual_func(long long ( ***a1)(unsigned long long))
{
 return (**a1)((unsigned long long)a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1340 */
long long test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1350 */
long long test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1360 */
long long test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1370 */
long long test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1380 */
long long test_cpp_template_func(void)
{
 int v0; // w0
 int v1; // w19
 double v2; // d8
 int v4; // [xsp+20h] [xbp+20h] BYREF
 int v5; // [xsp+24h] [xbp+24h] BYREF

 v0 = template_max_int(3, 7);
 v1 = v0;
 v2 = template_max_double(2.5, 1.5);
 v4 = 10;
 v5 = 20;
 template_swap_int(&v4, &v5);
 return (unsigned int)((int)v2 + v1 + v4 + v5);
}


/* Function: _Z23test_cpp_template_classv @ 0x1420 */
long long test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1430 */
long long test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1440 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1450 */
long long test_cpp_rtti(void)
{
 int v0; // w19
 long long *v1; // x21
 void *v2; // x20
 long long v3; // x24
 const char *v4; // x23
 int v5; // w25
 int v6; // w19
 const char *v7; // x0
 unsigned int v8; // w19

 v0 = 10;
 v1 = (long long *)operator_new(8u);
 *v1 = (long long)off_12C28;
 v2 = (void *)operator_new(8u);
 v3 = *v1;
 v4 = *(const char **)(*(unsigned long long *)(*v1 - 8) + 8LL);
 *(unsigned long long *)v2 = off_12C50;
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
 (struct type_info const *)typeinfo_for_RTTIBase,
 (struct type_info const *)typeinfo_for_RTTIDerivedA,
 0) )
{
 v6 += 100;
 }
 if ( __dynamic_cast(
 v2,
 (struct type_info const *)typeinfo_for_RTTIBase,
 (struct type_info const *)typeinfo_for_RTTIDerivedB,
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
void test_cpp_oo_features(void)
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
long long Base_virtual_func(Base *this, int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x1750 */
const char * Base_getName(Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1760 */
void Base_dtor(Base *this)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1770 */
long long Derived_virtual_func(Derived *this, int a2)
{
 return (unsigned int)(a2 * *((unsigned int *)this + 2));
}


/* Function: _ZNK7Derived7getNameEv @ 0x1780 */
const char * Derived_getName(Derived *this)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1790 */
long long MultiDerived_funcA(MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x17A0 */
long long MultiDerived_funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x17B0 */
long long thunk_non_virtual_MultiDerived_funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x17C0 */
long long MiddleA_func(struct MiddleA *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 150);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x17E0 */
long long thunk_virtual_MiddleA_func(struct MiddleA *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x1810 */
long long MiddleB_func(struct MiddleB *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 200);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x1830 */
long long thunk_virtual_MiddleB_func(struct MiddleB *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1860 */
long long DiamondDerived_func(struct DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 250);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x1880 */
long long thunk_virtual_DiamondDerived_func(struct DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x18A4 */
long long non_virtual_thunk_DiamondDerived_func(struct DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*((unsigned long long *)this - 2) - 24LL) - 8) + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x18C0 */
long long RTTIDerivedA_getType(RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x18D0 */
long long RTTIDerivedB_getType(RTTIDerivedB *this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x18E0 */
void RTTIDerivedB_dtor(RTTIDerivedB *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x18F0 */
void RTTIDerivedA_dtor(RTTIDerivedA *this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1900 */
void DiamondDerived_dtor(struct DiamondDerived *this)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x1904 */
void thunk_virtual_DiamondDerived_destructor(struct DiamondDerived *this)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x1910 */
void non_virtual_thunk_to_DiamondDerived_destructor(struct DiamondDerived *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1920 */
void MultiDerived_dtor(struct MultiDerived *this)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x1924 */
void non_virtual_thunk_to_MultiDerived_dtor(struct MultiDerived *this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1930 */
void Derived_dtor(Derived *this)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1940 */
void Base_deleting_dtor(Base *this)
{
 _ZdlPvm(this, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1950 */
void Derived_deleting_dtor(Derived *this)
{
 _ZdlPvm(this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1960 */
void MultiDerived_deleting_dtor(MultiDerived *this)
{
 _ZdlPvm(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x1970 */
void non_virtual_thunk_to_MultiDerived_destructor(MultiDerived *this)
{
 _ZdlPvm((char *)this - 16, 0x20u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1980 */
void RTTIDerivedB_deleting_dtor(RTTIDerivedB *this)
{
 _ZdlPvm(this, 8u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1990 */
void RTTIDerivedA_deleting_dtor(RTTIDerivedA *this)
{
 _ZdlPvm(this, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x19A0 */
void DiamondDerived_deleting_dtor(struct DiamondDerived *this)
{
 _ZdlPvm(this, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x19B0 */
void virtual_thunk_to_DiamondDerived_deleting_dtor(struct DiamondDerived *this)
{
 _ZdlPvm((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL), 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x19C4 */
void non_virtual_thunk_to_DiamondDerived_deleting_dtor(struct DiamondDerived *this)
{
 _ZdlPvm((char *)this - 16, 0x30u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x19D0 */
long long template_max_int(long long result, int a2)
{
 if ( (int)result < a2 )
 return (unsigned int)a2;
 else
 return (unsigned int)result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x19E0 */
double template_max_double(double result, double a2)
{
 if ( result <= a2 )
 return a2;
 return result;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x19F0 */
int * template_swap_int(int *result, int *a2)
{
 int v2; // w2

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1A10 */
long long Container_int_Constructor(long long result)
{
 *(unsigned int *)(result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1A20 */
long long Container_int_push(long long result, int a2)
{
 int v2; // w2

 v2 = *(unsigned int *)(result + 40);
 if ( v2 <= 9 )
 {
 *(unsigned int *)(result + 40) = v2 + 1;
 *(unsigned int *)(result + 4LL * v2) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1A40 */
long long Container_int_get(long long a1, int a2)
{
 long long result; // x0

 result = 0;
 if ( (a2 & 0x80000000) == 0 )
 {
 result = 0;
 if ( *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4LL * a2);
 }
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1A70 */
long long Container_int_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1A80 */
long long Container_double_Constructor(long long result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1A90 */
long long Container_double_push(long long result, double a2)
{
 int v2; // w1

 v2 = *(unsigned int *)(result + 80);
 if ( v2 <= 9 )
 {
 *(unsigned int *)(result + 80) = v2 + 1;
 *(double *)(result + 8LL * v2) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1AB0 */
double Container_double_get(long long a1, int a2)
{
 double result; // d0

 result = 0.0;
 if ( (a2 & 0x80000000) == 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1AD0 */
long long Container_double_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: .term_proc @ 0x1AD8 */
void term_proc()
{
 ;
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
