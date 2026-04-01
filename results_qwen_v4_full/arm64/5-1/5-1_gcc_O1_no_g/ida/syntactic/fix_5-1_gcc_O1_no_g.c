/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_gcc_O1_no_g
 * Processor: arm
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* Standard library function declarations */
int printf(const char *format, ...);
int puts(const char *s);
size_t strlen(const char *s);
int strcmp(const char *s1, const char *s2);
char *strncpy(char *dest, const char *src, size_t n);

/* Function: .init_proc @ 0x1458 */
long long call_weak_fn(void) { return 0; }
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_1470 @ 0x1470 */
void JUMPOUT(int a) { }
void sub_1470()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1754 */
long long test_cpp_member_func(void)
{
 char dest[36]; // [xsp+24h] [xbp+24h] BYREF

 strncpy(dest, "Test", 0x1Fu);
 dest[31] = 0;
 return (unsigned int)strlen(dest) + 4700;
}


/* Forward declarations for C++ classes */
struct Base;
struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
int LifecycleClass_instance_count = 0;

/* C++ operator declarations */
void *cpp_operator_new(unsigned long size);
void *cpp_operator_new_array(unsigned long size);
void cpp_operator_delete(void *ptr, unsigned long size);
void cpp_operator_delete_array(void *ptr);
void *cpp_operator_new_single(unsigned long size);
void cpp_operator_delete_single(void *ptr, unsigned long size);
void *operator_new(unsigned long size);
void *operator_new_array(unsigned long size);
void operator_delete(void *ptr, unsigned long size);
void operator_delete_array(void *ptr);

/* External references - now defined */
void *off_13958 = 0;
void *off_13988 = 0;
void *off_13B30 = 0;
void *off_13B58 = 0;
void *off_13B80 = 0;
char std___ioinit = 0;
void *__dso_handle = 0;
char asc_2148[] = "Test";
void *unk_2170 = 0;
void *unk_2190 = 0;
void *unk_21B0 = 0;
void *unk_21D0 = 0;
void *unk_21F0 = 0;
void *unk_2210 = 0;
void *unk_2230 = 0;
void *unk_2250 = 0;
void *unk_2270 = 0;

/* Function prototypes for failed decompiles */
void *__cxa_allocate_exception(unsigned long size);
void __cxa_throw(void *exc, void *type_info, void *dest);
int __dynamic_cast(void *src, void *src_type, void *dst_type, int src_ref);
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void std_ios_base_Init_Init(void *this);
void std_ios_base_Init_D1(void *this);

long long template_max_int(long long result, int a2);
double template_max_double(double result, double a2);
int *template_swap_int(int *result, int *a2);
long long virtual_thunk_to_DiamondDerived_func(void *this);
long long MiddleA_func(void *this);
long long MiddleB_func(void *this);
long long DiamondDerived_func(void *this);
long long MultiDerived_funcA(void *this);
long long MultiDerived_funcB(void *this);
long long non_virtual_thunk_to_MultiDerived_funcB(void *this);
long long virtual_thunk_to_MiddleA_func(void *this);
long long virtual_thunk_to_MiddleB_func(void *this);
long long non_virtual_thunk_to_DiamondDerived_func(void *this);
long long RTTIDerivedA_getType(void *this);
long long RTTIDerivedB_getType(void *this);
void RTTIDerivedA_destructor(void *this);
void RTTIDerivedB_destructor(void *this);
void DiamondDerived_destructor(void *this);
void non_virtual_thunk_to_DiamondDerived_destructor_D1(void *this);
void virtual_thunk_to_DiamondDerived_destructor_D1(void *this);
void MultiDerived_destructor(void *this);
void non_virtual_thunk_to_MultiDerived_destructor_D1(void *this);
void Derived_destructor(void *this);
long long Base_virtual_func(void *this, int a2);
const char *Base_getName(void *this);
void Base_destructor(void *this);
long long Derived_virtual_func(void *this, int a2);
const char *Derived_getName(void *this);
void Base_destructor_D0(void *this);
void Derived_destructor_D0(void *this);
void MultiDerived_destructor_D0(void *this);
void non_virtual_thunk_to_MultiDerived_destructor_D0(void *this);
void RTTIDerivedA_destructor_D0(void *this);
void RTTIDerivedB_destructor_D0(void *this);
void DiamondDerived_destructor_D0(void *this);
void virtual_thunk_to_DiamondDerived_destructor_D0(void *this);
void non_virtual_thunk_to_DiamondDerived_destructor_D0(void *this);
struct type_info_int { long long dummy; };
struct type_info_RTTIBase { long long dummy; };
struct type_info_RTTIDerivedA { long long dummy; };
struct type_info_RTTIDerivedB { long long dummy; };
struct type_info_int typeinfo_int = {0};
struct type_info_RTTIBase typeinfo_RTTIBase = {0};
struct type_info_RTTIDerivedA typeinfo_RTTIDerivedA = {0};
struct type_info_RTTIDerivedB typeinfo_RTTIDerivedB = {0};

/* Stub implementations for missing functions */
void *cpp_operator_new_single(unsigned long size) { return 0; }
void cpp_operator_delete_single(void *ptr, unsigned long size) { }
void *cpp_operator_new(unsigned long size) { return 0; }
void *cpp_operator_new_array(unsigned long size) { return 0; }
void cpp_operator_delete(void *ptr, unsigned long size) { }
void cpp_operator_delete_array(void *ptr) { }
void *operator_new(unsigned long size) { return 0; }
void *operator_new_array(unsigned long size) { return 0; }
void operator_delete(void *ptr, unsigned long size) { }
void operator_delete_array(void *ptr) { }
void std_ios_base_Init_Init(void *this) { }
void std_ios_base_Init_D1(void *this) { }
void *__cxa_allocate_exception(unsigned long size) { return 0; }
void __cxa_throw(void *exc, void *type_info, void *dest) { }
int __dynamic_cast(void *src, void *src_type, void *dst_type, int src_ref) { return 0; }
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle) { return 0; }
void *__cxa_begin_catch(void *exc) { return 0; }
void __cxa_end_catch(void) { }
void __cxa_rethrow(void) { }
void __cxa_finalize(void *dso) { }
int __gxx_personality_v0(void) { return 0; }
void _Unwind_Resume(void *exc) { }
void __stack_chk_fail(void) { }
void __gmon_start__(void) { }
void __printf_chk(int flag, const char *format, ...) { }

/* Function: _Z20test_cpp_constructorv @ 0x17CC */
long long test_cpp_constructor(void)
{
 unsigned int *v0; // x0
 int v1; // w1
 int v2; // w19

 v0 = (unsigned int *)cpp_operator_new_array(0x14u);
 v0[1] = 10;
 v0[2] = 20;
 v0[3] = 30;
 v0[4] = 40;
 v1 = LifecycleClass_instance_count++;
 v2 = v1 + 21;
 cpp_operator_delete_array(v0);
 --LifecycleClass_instance_count;
 return (unsigned int)(v2 + 1000 * LifecycleClass_instance_count);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1838 */
long long call_virtual_func(void *a1)
{
 return 0;
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1854 */
long long test_cpp_virtual_func(void)
{
 int v0; // w19
 long long ( **v2)(void *, int); // [xsp+20h] [xbp+20h] BYREF
 long long ( **v3)(void *, int); // [xsp+28h] [xbp+28h] BYREF
 int v4; // [xsp+30h] [xbp+30h]

 v2 = (long long ( **)(void *, int))&off_13958;
 v3 = (long long ( **)(void *, int))&off_13988;
 v4 = 3;
 v0 = call_virtual_func((long long ( ***)(void *))&v2);
 return v0 + 21 + (unsigned int)call_virtual_func((long long ( ***)(void *))&v3);
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x18E4 */
long long test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x18EC */
long long test_cpp_diamond_inheritance(void)
{
 int v0; // w19
 long long ( **v2)(void *); // [xsp+48h] [xbp+48h] BYREF
 int v3; // [xsp+50h] [xbp+50h]

 v2 = (long long ( **)(void *))&off_13B30;
 v3 = 50;
 v0 = virtual_thunk_to_DiamondDerived_func((void *)&v2);
 v3 = 100;
 return v0 + (unsigned int)virtual_thunk_to_DiamondDerived_func((void *)&v2);
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1988 */
long long test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1990 */
long long test_cpp_template_func(void)
{
 int v0; // w0
 int v1; // w19
 double v2; // d8
 int v4; // [xsp+20h] [xbp+20h] BYREF
 int v5; // [xsp+24h] [xbp+24h] BYREF

 v1 = template_max_int(3, 7);
 v2 = template_max_double(2.5, 1.5);
 v4 = 10;
 v5 = 20;
 template_swap_int(&v4, &v5);
 return (unsigned int)((int)v2 + v1 + v4 + v5);
}


/* Function: _Z23test_cpp_template_classv @ 0x1A38 */
long long test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1A40 */
long long test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1A48 */
void test_cpp_exception(void)
{
 unsigned int *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (void *)&typeinfo_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1B20 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1B28 */
long long test_cpp_rtti(void)
{
 long long *v0; // x20
 void *v1; // x21
 long long v2; // x23
 char *v3; // x22
 int v4; // w19
 int v5; // w19
 const char *v6; // x0
 unsigned int v7; // w19

v0 = (long long *)operator_new(8u);
*v0 = (unsigned long long)off_13B58;
v1 = (void *)operator_new(8u);
*(unsigned long long *)v1 = (unsigned long long)off_13B80;
 v2 = *v0;
 v3 = *(char **)(*(unsigned long long *)(*v0 - 8) + 8LL);
 v4 = 10;
 if ( v3 != "12RTTIDerivedA" )
 {
 v4 = 0;
 if ( *v3 != 42 )
 {
 if ( !strcmp(*(const char **)(*(unsigned long long *)(*v0 - 8) + 8LL), "12RTTIDerivedA") )
 v4 = 10;
 else
 v4 = 0;
 }
 }
 v5 = v4 + 20;
 if ( __dynamic_cast(
 v0,
 (void *)&typeinfo_RTTIBase,
 (void *)&typeinfo_RTTIDerivedA,
 0) )
 {
 v5 += 100;
 }
 if ( __dynamic_cast(
 v1,
 (void *)&typeinfo_RTTIBase,
 (void *)&typeinfo_RTTIDerivedB,
 0) )
 {
 v5 += 200;
 }
 if ( *v3 == 42 )
 v6 = v3 + 1;
 else
 v6 = v3;
 v7 = v5 + strlen(v6);
 (*(void ( **)(long long *))(v2 + 8))(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return v7;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1C8C */
void test_cpp_oo_features(void)
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0

 puts(asc_2148);
 v0 = test_cpp_member_func();
 printf((const char *)&unk_2170, v0);
 v1 = test_cpp_constructor();
 printf((const char *)&unk_2190, v1);
 v2 = test_cpp_virtual_func();
 printf((const char *)&unk_21B0, v2);
 v3 = test_cpp_multiple_inheritance();
 printf((const char *)&unk_21D0, v3);
 v4 = test_cpp_diamond_inheritance();
 printf((const char *)&unk_21F0, v4);
 printf((const char *)&unk_2210, 22);
 v5 = test_cpp_template_func();
 printf((const char *)&unk_2230, v5);
 printf((const char *)&unk_2250, 16);
 printf((const char *)&unk_2270, 85);
 test_cpp_exception();
}


/* Function: main @ 0x1DBC */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
 return 0;
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x1DD4 */
long long GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 std_ios_base_Init_Init(&std___ioinit);
 return __cxa_atexit((void (*)(void *))&std_ios_base_Init_D1, &std___ioinit, &__dso_handle);
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1E18 */
long long Base_virtual_func(void *this, int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x1E20 */
const char * Base_getName(void *this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1E2C */
void Base_destructor(void *this)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1E30 */
long long Derived_virtual_func(void *this, int a2)
{
 return (unsigned int)(a2 * *((unsigned int *)this + 2));
}


/* Function: _ZNK7Derived7getNameEv @ 0x1E3C */
const char * Derived_getName(void *this)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1E48 */
long long MultiDerived_funcA(void *this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1E50 */
long long MultiDerived_funcB(void *this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x1E58 */
long long non_virtual_thunk_to_MultiDerived_funcB(void *this)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1E60 */
long long MiddleA_func(void *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 150);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x1E78 */
long long virtual_thunk_to_MiddleA_func(void *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x1E9C */
long long MiddleB_func(void *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 200);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x1EB4 */
long long virtual_thunk_to_MiddleB_func(void *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1ED8 */
long long DiamondDerived_func(void *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 250);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x1EF0 */
long long virtual_thunk_to_DiamondDerived_func(void *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x1F14 */
long long non_virtual_thunk_to_DiamondDerived_func(void *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*((unsigned long long *)this - 2) - 24LL) - 8) + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1F2C */
long long RTTIDerivedA_getType(void *this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1F34 */
long long RTTIDerivedB_getType(void *this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1F3C */
void RTTIDerivedB_destructor(void *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1F40 */
void RTTIDerivedA_destructor(void *this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1F44 */
void DiamondDerived_destructor(void *this)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x1F48 */
void non_virtual_thunk_to_DiamondDerived_destructor_D1(void *this)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x1F4C */
void virtual_thunk_to_DiamondDerived_destructor_D1(void *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1F50 */
void MultiDerived_destructor(void *this)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x1F54 */
void non_virtual_thunk_to_MultiDerived_destructor_D1(void *this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1F58 */
void Derived_destructor(void *this)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1F5C */
void Base_destructor_D0(void *this)
{
 cpp_operator_delete_single(this, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1F74 */
void Derived_destructor_D0(void *this)
{
 cpp_operator_delete_single(this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1F8C */
void MultiDerived_destructor_D0(void *this)
{
 cpp_operator_delete_single(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x1FA4 */
void non_virtual_thunk_to_MultiDerived_destructor_D0(void *this)
{
 cpp_operator_delete_single((char *)this - 16, 0x20u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1FC0 */
void RTTIDerivedA_destructor_D0(void *this)
{
 cpp_operator_delete_single(this, 8u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1FD8 */
void RTTIDerivedB_destructor_D0(void *this)
{
 cpp_operator_delete_single(this, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1FF0 */
void DiamondDerived_destructor_D0(void *this)
{
 cpp_operator_delete_single(this, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2008 */
void virtual_thunk_to_DiamondDerived_destructor_D0(void *this)
{
 cpp_operator_delete_single((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL), 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x202C */
void non_virtual_thunk_to_DiamondDerived_destructor_D0(void *this)
{
 cpp_operator_delete_single((char *)this - 16, 0x30u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2048 */
long long template_max_int(long long result, int a2)
{
 if ( (int)result < a2 )
 return (unsigned int)a2;
 else
 return (unsigned int)result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2054 */
double template_max_double(double result, double a2)
{
 if ( result <= a2 )
 return a2;
 return result;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x2060 */
int * template_swap_int(int *result, int *a2)
{
 int v2; // w2

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x2074 */
long long Container_int_constructor(long long result)
{
 *(unsigned int *)(result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x207C */
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


/* Function: _ZNK9ContainerIiE3getEi @ 0x2098 */
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


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x20C0 */
long long Container_int_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x20C8 */
long long Container_double_constructor(long long result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x20D0 */
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


/* Function: _ZNK9ContainerIdE3getEi @ 0x20EC */
double Container_double_get(long long a1, int a2)
{
 double result; // d0

 result = 0.0;
 if ( (a2 & 0x80000000) == 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x210C */
long long Container_double_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: .term_proc @ 0x2114 */
void term_proc()
{
 ;
}


/* FAILED to decompile: _Znam @ 0x14098 */

/* FAILED to decompile: puts @ 0x140A8 */

/* FAILED to decompile: strlen @ 0x140B0 */

/* FAILED to decompile: __stack_chk_fail @ 0x140B8 */

/* FAILED to decompile: __cxa_begin_catch @ 0x140C0 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x140D0 */

/* FAILED to decompile: __cxa_finalize @ 0x140D8 */

/* FAILED to decompile: __libc_start_main @ 0x140E8 */

/* FAILED to decompile: _Znwm @ 0x140F0 */

/* FAILED to decompile: _ZdlPvm @ 0x140F8 */

/* FAILED to decompile: strncpy @ 0x14100 */

/* FAILED to decompile: __dynamic_cast @ 0x14108 */

/* FAILED to decompile: __cxa_atexit @ 0x14110 */

/* FAILED to decompile: _ZdaPv @ 0x14118 */

/* FAILED to decompile: strcmp @ 0x14128 */

/* FAILED to decompile: __cxa_rethrow @ 0x14130 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x14138 */

/* FAILED to decompile: abort @ 0x14140 */

/* FAILED to decompile: __cxa_end_catch @ 0x14148 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x14150 */

/* FAILED to decompile: __cxa_throw @ 0x14158 */

/* FAILED to decompile: _Unwind_Resume @ 0x14168 */

/* FAILED to decompile: __printf_chk @ 0x14170 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x14178 */

/* FAILED to decompile: __gmon_start__ @ 0x14188 */

/* Total functions decompiled: 70, failed: 25 */
