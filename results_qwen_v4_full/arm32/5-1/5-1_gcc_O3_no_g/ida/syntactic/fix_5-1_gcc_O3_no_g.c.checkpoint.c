/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

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
struct LifecycleClass;

/* External function declarations */
void *operator_new(size_t size);
void operator_delete(void *ptr, size_t size);
void *operator_new(size_t size)
{
 return (void *)0;
}
void operator_delete(void *ptr, size_t size)
{
 ;
}
size_t strlen(const char *s);
char *strncpy(char *dest, const char *src, size_t n);
size_t strlen(const char *s)
{
 size_t len = 0;
 while (s[len]) len++;
 return len;
}
char *strncpy(char *dest, const char *src, size_t n)
{
 size_t i;
 for (i = 0; i < n && src[i]; i++)
  dest[i] = src[i];
 for (; i < n; i++)
  dest[i] = 0;
 return dest;
}
void *_cxa_allocate_exception(size_t size)
{
 return (void *)0;
}
void _cxa_throw(void *exception, void *type_info, void *dest)
{
 ;
}
int puts(const char *s);
int _printf_chk(int flag, const char *format, ...);
void *_cxa_allocate_exception(size_t size);
void _cxa_throw(void *exception, void *type_info, void *dest);
int _aeabi_atexit(void *object, void *dtor, void *dso_handle);
int type_info_operator_eq(int a1, void *a2);
void *_dynamic_cast(void *src, const void *src_type, const void *dst_type, int flags);
int call_weak_fn(void);
int *template_swap(int *result, int *a2);
void test_cpp_oo_features(void);
void ios_base_Init_ctor(void *init);
void ios_base_Init_dtor(void *init);

/* Global variables */
int std___ioinit;
extern void *_dso_handle;
const char *s = "Test";
const void *typeinfo_for_int = 0;
extern const void *typeinfo_for_RTTIBase;
extern const void *typeinfo_for_RTTIDerivedA;
extern const void *typeinfo_for_RTTIDerivedB;
int LifecycleClass_instance_count = 0;

/* Macro for double coercion */
#define COERCE_DOUBLE(x) ({ union { long long ll; double d; } _u; _u.ll = (x); _u.d; })

/* Forward declarations for template functions */
int template_max(int a1, int a2);
long long template_max_double(double a1, double a2);
int template_max(int a1, int a2)
{
 if (a1 < a2)
  return a2;
 return a1;
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_gcc_O3_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x10920 */
int init_proc()
{
 return 0;
}


/* Function: sub_1092C @ 0x1092C */
void sub_1092C()
{
}


/* Function: _Z18test_cpp_exceptionv @ 0x10A60 */
void test_cpp_exception(void)
{
 void *exception; // r0

 exception = _cxa_allocate_exception(4u);
 *(unsigned int *)exception = 42;
 _cxa_throw(exception, (void *)typeinfo_for_int, 0);
}


/* Function: main @ 0x10B18 */
int main(int argc, const char **argv, const char **envp)
{
 return 0;
}






/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x10C50 */
size_t test_cpp_member_func(void)
{
 char dest[32]; // [sp+4h] [bp-2Ch] BYREF

 strncpy(dest, "Test", 0x1Fu);
 dest[31] = 0;
 return strlen(dest) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x10CBC */
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count + 21 + 1000 * LifecycleClass_instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x10CDC */
int call_virtual_func(void **a1)
{
 return ((int (*)(void *))(*a1))(a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x10CE8 */
int test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x10CF0 */
int test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x10CF8 */
int test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x10D04 */
int test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x10D0C */
int test_cpp_template_func(int a1, int a2, int a3)
{
 int v3; // r4
 double v4; // r6
 int v6; // [sp+4h] [bp-1Ch] BYREF
 int v7; // [sp+8h] [bp-18h] BYREF

 v3 = template_max(3, 7);
 v4 = COERCE_DOUBLE(template_max_double(0, 1074003968));
 v6 = 10;
 v7 = 20;
 template_swap(&v6, &v7);
 return (int)v4 + v3 + v6 + v7;
}


/* Function: _Z23test_cpp_template_classv @ 0x10DB4 */
int test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x10DBC */
int test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x10DC4 */
int test_cpp_smart_ptr(void)
{
 return 703;
}








/* Function: _ZN4Base12virtual_funcEi @ 0x110D0 */
int Base_virtual_func(struct Base *self, int a2)
{
 return a2 + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x110D8 */
const char * Base_getName(struct Base *self)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x110E4 */
void Base_dtor(struct Base *self)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x110E8 */
int Derived_virtual_func(struct Derived *self, int a2)
{
 return a2 * *((unsigned int *)self + 1);
}


/* Function: _ZNK7Derived7getNameEv @ 0x110F4 */
const char * Derived_getName(struct Derived *self)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x11100 */
int MultiDerived_funcA(struct MultiDerived *self)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x11108 */
int MultiDerived_funcB(struct MultiDerived *self)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x11110 */
int non_virtual_thunk_to_MultiDerived_funcB(struct MultiDerived *self)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x11118 */
int MiddleA_func(struct MiddleA *self)
{
 return *(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12) + 4) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x11130 */
int virtual_thunk_to_MiddleA_func(struct MiddleA *self)
{
 return *(unsigned int *)((char *)self
 + *(unsigned int *)(*(unsigned int *)self - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12)) - 12)
 + 4)
 + 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x11154 */
int MiddleB_func(struct MiddleB *self)
{
 return *(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12) + 4) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1116C */
int virtual_thunk_to_MiddleB_func(struct MiddleB *self)
{
 return *(unsigned int *)((char *)self
 + *(unsigned int *)(*(unsigned int *)self - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12)) - 12)
 + 4)
 + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x11190 */
int DiamondDerived_func(struct DiamondDerived *self)
{
 return *(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12) + 4) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x111A8 */
int virtual_thunk_to_DiamondDerived_func(struct DiamondDerived *self)
{
 return *(unsigned int *)((char *)self
 + *(unsigned int *)(*(unsigned int *)self - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12)) - 12)
 + 4)
 + 250;
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x111CC */
int non_virtual_thunk_to_DiamondDerived_func(struct DiamondDerived *self)
{
 return *(unsigned int *)((char *)self + *(unsigned int *)(*((unsigned int *)self - 2) - 12) - 4) + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x111E4 */
int RTTIDerivedA_getType(struct RTTIDerivedA *self)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x111EC */
int RTTIDerivedB_getType(struct RTTIDerivedB *self)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x111F4 */
void RTTIDerivedB_dtor(struct RTTIDerivedB *self)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x111F8 */
void RTTIDerivedA_dtor(struct RTTIDerivedA *self)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x111FC */
void DiamondDerived_dtor(struct DiamondDerived *self)
{
 ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x11200 */
void virtual_thunk_to_DiamondDerived_dtor(struct DiamondDerived *self)
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x11210 */
void non_virtual_thunk_to_DiamondDerived_dtor(struct DiamondDerived *self)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x11218 */
void MultiDerived_dtor(struct MultiDerived *self)
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1121C */
void non_virtual_thunk_to_MultiDerived_dtor(struct MultiDerived *self)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x11224 */
void Derived_dtor(struct Derived *self)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x11228 */
void Base_dtor0(struct Base *self)
{
 operator_delete((void *)self, 4u);
}


/* Function: _ZN7DerivedD0Ev @ 0x11240 */
void Derived_dtor0(struct Derived *self)
{
 operator_delete((void *)self, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x11258 */
void MultiDerived_dtor0(struct MultiDerived *self)
{
 operator_delete((void *)self, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x11270 */
void non_virtual_thunk_to_MultiDerived_dtor0(struct MultiDerived *self)
{
 operator_delete((void *)((char *)self - 8), 0x10u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1128C */
void RTTIDerivedB_dtor0(struct RTTIDerivedB *self)
{
 operator_delete((void *)self, 4u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x112A4 */
void RTTIDerivedA_dtor0(struct RTTIDerivedA *self)
{
 operator_delete((void *)self, 4u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x112BC */
void DiamondDerived_dtor0(struct DiamondDerived *self)
{
 operator_delete((void *)self, 0x18u);
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x112D4 */
void virtual_thunk_to_DiamondDerived_dtor0(struct DiamondDerived *self)
{
 operator_delete((void *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 16)), 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x112F8 */
void non_virtual_thunk_to_DiamondDerived_dtor0(struct DiamondDerived *self)
{
 operator_delete((void *)((char *)self - 8), 0x18u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x11314 */
int template_max_i(int result, int a2)
{
 if ( result < a2 )
 return a2;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x11320 */
long long template_max_double(double a1, double a2)
{
 double v2; // r4

 v2 = a1;
 if ( a1 <= a2 )
 v2 = a2;
 return *(unsigned long long *)&v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x11350 */
int * template_swap(int *result, int *a2)
{
 int v2; // r3

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x11364 */
int Container_int_Constructor(int result)
{
 *(unsigned int *)(result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x11370 */
int Container_int_push(int result, int a2)
{
 int v2; // r3

 v2 = *(unsigned int *)(result + 40);
 if ( v2 <= 9 )
 {
 *(unsigned int *)(result + 40) = v2 + 1;
 *(unsigned int *)(result + 4 * v2) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x11388 */
int Container_int_get(int a1, int a2)
{
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4 * a2);
 else
 return 0;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x113AC */
int Container_int_getSize(int a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x113B4 */
int Container_double_Constructor(int result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x113C0 */
int Container_double_push(int result, int a2, int a3, int a4)
{
 int v5; // r3
 int v7; // r2
 unsigned int *v8; // r3

 v5 = *(unsigned int *)(result + 80);
 if ( v5 <= 9 )
 {
 v7 = v5 + 1;
 v8 = (unsigned int *)(result + 8 * v5);
 *(unsigned int *)(result + 80) = v7;
 *v8 = a3;
 v8[1] = a4;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x113F0 */
long long Container_double_get(int a1, int a2)
{
 if ( a2 >= 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(unsigned long long *)(a1 + 8 * a2);
 else
 return 0;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1141C */
int Container_double_getSize(int a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: .term_proc @ 0x11424 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x22098 */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x2209C */

/* FAILED to decompile: __imp_strncpy @ 0x220A0 */

/* FAILED to decompile: __imp___aeabi_d2iz @ 0x220A4 */

/* FAILED to decompile: __imp_abort @ 0x220A8 */

/* FAILED to decompile: __imp___cxa_throw @ 0x220AC */

/* FAILED to decompile: __imp___libc_start_main @ 0x220B0 */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x220B4 */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x220B8 */

/* FAILED to decompile: __imp___printf_chk @ 0x220BC */

/* FAILED to decompile: __imp___aeabi_atexit @ 0x220C0 */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x220C4 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitD1Ev @ 0x220C8 */

/* FAILED to decompile: __imp___dynamic_cast @ 0x220CC */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x220D0 */

/* FAILED to decompile: __imp_strlen @ 0x220D4 */

/* FAILED to decompile: __imp__Znwj @ 0x220D8 */

/* FAILED to decompile: __imp__ZNKSt9type_infoeqERKS_ @ 0x220DC */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x220E0 */

/* FAILED to decompile: __imp_puts @ 0x220E4 */

/* FAILED to decompile: __imp__ZdlPvj @ 0x220E8 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x220EC */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x220F0 */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x220F4 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x220FC */

/* Total functions decompiled: 70, failed: 25 */
