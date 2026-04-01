/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef void _UNKNOWN;

/* typedef long ssize_t; - commented out to avoid conflict with system headers */
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
#define NULL ((void*)0)

/* Standard library declarations */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* Runtime library declarations */
extern void *__dynamic_cast(void *src_ptr, const void *src_type, const void *dst_type, int src2dst_offset);

/* Helper macros for extracting/assigning 32-bit parts from 64-bit values */
#define LODWORD(x)  (*(uint32_t*)&(x))
#define HIDWORD(x)  (*(((uint32_t*)&(x)) + 1))

/* Forward declarations for undefined global variables */
int LifecycleClass_instance_count = 0;






/* Forward declarations for functions used before definition */
int virtual_thunk_to_DiamondDerived_func(void *self);
int template_max_int(int a1, int a2);
long double template_max_double(double a1, double a2);
unsigned int * template_swap_int(int *a1, unsigned int *a2);
void * __cxa_allocate_exception(unsigned int size);
void __cxa_throw(void *exception, const void *type, void (*destructor)(void *));
void * operator new[](unsigned int size);
void operator delete[](void *ptr);
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);

/* C++ runtime exception handling stubs */
void *__cxa_allocate_exception(unsigned int size)
{
    return malloc(size);
}

void __cxa_throw(void *exception, const void *type, void (*destructor)(void *))
{
    /* Minimal stub - in real implementation this would unwind the stack */
    free(exception);
    _Exit(1);
}

/* C++ class definitions */
typedef struct Base Base;
struct Base {
    void **vptr;  // virtual table pointer
};

typedef struct DiamondDerived DiamondDerived;
typedef struct Derived Derived;

/* Forward declaration for LifecycleClass */
typedef struct LifecycleClass LifecycleClass;
struct LifecycleClass {
    int instance_count;
};

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_gcc_O1_no_g
 * Processor: pc
 */








/* CRT stub function _start removed by preprocessor */







/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */





/* Stub for __readgsdword */
static inline unsigned int __readgsdword(unsigned int offset)
{
    unsigned int val;
    __asm__ volatile ("movl %%gs:%1,%0" : "=r" (val) : "m" (*(unsigned int *)(offset)));
    return val;
}





/* Function: _Z20test_cpp_member_funcv @ 0x1421 */
long long test_cpp_member_func(void)
{
 long long result; // rax
 char s[6]; // [esp+Ch] [ebp-30h] BYREF
 short v2; // [esp+12h] [ebp-2Ah]
 int v3; // [esp+14h] [ebp-28h]
 int v4; // [esp+18h] [ebp-24h]
 int v5; // [esp+1Ch] [ebp-20h]
 int v6; // [esp+20h] [ebp-1Ch]
 int v7; // [esp+24h] [ebp-18h]
 short v8; // [esp+28h] [ebp-14h]
 char v9; // [esp+2Ah] [ebp-12h]
 char v10; // [esp+2Bh] [ebp-11h]
 unsigned int v11; // [esp+2Ch] [ebp-10h]

 v11 = __readgsdword(0x14u);
 strcpy(s, "Test");
 s[5] = 0;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 v10 = 0;
 LODWORD(result) = strlen(s) + 4700;
 HIDWORD(result) = v11 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z20test_cpp_constructorv @ 0x14B5 */
int test_cpp_constructor(void)
{
 unsigned int *v0; // eax
 int v1; // esi

 v0 = (unsigned int *)operator new[](0x14u);
 v0[1] = 10;
 v0[2] = 20;
 v0[3] = 30;
 v0[4] = 40;
 v1 = LifecycleClass_instance_count++;
 operator delete[](v0);
 --LifecycleClass_instance_count;
 return v1 + 21 + 1000 * LifecycleClass_instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1523 */
int call_virtual_func(void *a1, int a2)
{
 return (**(int ( ***)(Base *, int))a1)((Base *)a1, a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x153B */
long long test_cpp_virtual_func(void)
{
 long long result; // rax
 unsigned int v4; // [esp+14h] [ebp-10h]

 v4 = __readgsdword(0x14u);
 LODWORD(result) = 0;
 HIDWORD(result) = v4 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x15B1 */
int test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x15BB */
long long test_cpp_diamond_inheritance(void)
{
 long long result; // rax
 unsigned int v4; // [esp+2Ch] [ebp-10h]

 v4 = __readgsdword(0x14u);
 LODWORD(result) = 0;
 HIDWORD(result) = v4 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1634 */
int test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x163E */
long long test_cpp_template_func(long double a1)
{
 int v1; // ebx
 long long result; // rax
 int v3; // [esp+1Ch] [ebp-18h] BYREF
 int v4; // [esp+20h] [ebp-14h] BYREF
 unsigned int v5; // [esp+24h] [ebp-10h]

 v5 = __readgsdword(0x14u);
 v1 = template_max_int(3, 7);
 template_max_double(2.5, 1.5);
 v3 = 10;
 v4 = 20;
 template_swap_int(&v3, (unsigned int *)&v4);
 LODWORD(result) = v4 + v3 + v1 + (int)(double)a1;
 HIDWORD(result) = v5 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z23test_cpp_template_classv @ 0x16E2 */
int test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x16EC */
int test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x16F6 */
void test_cpp_exception(void)
{
 unsigned int *exception;

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, NULL, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1806 */
int test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1810 */
size_t test_cpp_rtti(void)
{
 const char *v1; // edi
 int v2; // esi
 int v3; // esi
 size_t v4; // esi

 v1 = "12RTTIDerivedA";
 v2 = 10;
 if ( v1 != "12RTTIDerivedA" )
 {
 v2 = 0;
 if ( *v1 != 42 )
 v2 = strcmp(v1, "12RTTIDerivedA") == 0 ? 0xA : 0;
 }
 v3 = v2 + 20;
 v4 = strlen(&v1[*v1 == 42]) + v3;
 return v4;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x193A */
void test_cpp_oo_features(void)
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 long double v5; // fst7
 int v6; // eax

 v0 = test_cpp_member_func();
 printf("test_cpp_member_func: %lld\n", v0);
 v1 = test_cpp_constructor();
 printf("test_cpp_constructor: %d\n", v1);
 v2 = test_cpp_virtual_func();
 printf("test_cpp_virtual_func: %lld\n", v2);
 v3 = test_cpp_multiple_inheritance();
 printf("test_cpp_multiple_inheritance: %d\n", v3);
 v4 = test_cpp_diamond_inheritance();
 printf("test_cpp_diamond_inheritance: %lld\n", v4);
 v5 = printf("test_cpp_operator_overload: %d\n", 22);
 v6 = test_cpp_template_func(v5);
 printf("test_cpp_template_func: %d\n", v6);
 printf("test_cpp_template_class: %d\n", 16);
 printf("test_cpp_lambda: %d\n", 85);
 test_cpp_exception();
}


/* Function: main @ 0x1A75 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}





/* Function: _ZN4Base12virtual_funcEi @ 0x1AC8 */
int Base_virtual_func(void *self, int a2)
{
 return a2 + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x1AD4 */
const char *Base_getName(void)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1AEA */
void Base_destructor(void)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1AF0 */
int Derived_virtual_func(void *self, int a2)
{
 return *((unsigned int *)self + 1) * a2;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1B02 */
const char *Derived_getName(void)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1B18 */
int MultiDerived_funcA(void *self)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1B22 */
int MultiDerived_funcB(void *self)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x1B2C */
int non_virtual_thunk_to_MultiDerived_funcB(void *self)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1B36 */
int MiddleA_func(void *self)
{
 unsigned int *vptr;
 unsigned int offset;
 vptr = *(unsigned int **)self;
 offset = *(unsigned int *)((char *)self + *(int *)((char *)vptr - 12) + 4);
 return offset + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1B4D */
int virtual_thunk_to_MiddleA_func(void *self)
{
 unsigned int *vptr;
 unsigned int *base;
 unsigned int offset;
 vptr = *(unsigned int **)self;
 base = (unsigned int *)((char *)self + *(int *)((char *)vptr - 12));
 offset = *(unsigned int *)((char *)base + *(int *)((char *)base - 12) + 4);
 return offset + 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x1B6A */
int MiddleB_func(void *self)
{
 unsigned int *vptr;
 unsigned int offset;
 vptr = *(unsigned int **)self;
 offset = *(unsigned int *)((char *)self + *(int *)((char *)vptr - 12) + 4);
 return offset + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1B81 */
int virtual_thunk_to_MiddleB_func(void *self)
{
 unsigned int *vptr;
 unsigned int *base;
 unsigned int offset;
 vptr = *(unsigned int **)self;
 base = (unsigned int *)((char *)self + *(int *)((char *)vptr - 12));
 offset = *(unsigned int *)((char *)base + *(int *)((char *)base - 12) + 4);
 return offset + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1B9E */
int DiamondDerived_func(void *self)
{
 unsigned int *vptr;
 unsigned int offset;
 vptr = *(unsigned int **)self;
 offset = *(unsigned int *)((char *)self + *(int *)((char *)vptr - 12) + 4);
 return offset + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x1BB5 */
int virtual_thunk_to_DiamondDerived_func(void *self)
{
 unsigned int *vptr;
 unsigned int *base;
 unsigned int offset;
 vptr = *(unsigned int **)self;
 base = (unsigned int *)((char *)self + *(int *)((char *)vptr - 12));
 offset = *(unsigned int *)((char *)base + *(int *)((char *)base - 12) + 4);
 return offset + 250;
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1BD1 */
int non_virtual_thunk_to_DiamondDerived_func(void *self)
{
 unsigned int *base;
 unsigned int offset;
 base = (unsigned int *)((char *)self - 8);
 offset = *(unsigned int *)((char *)base + *(int *)((char *)base - 12) - 4);
 return offset + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1BEA */
int RTTIDerivedA_getType(void)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1BF4 */
int RTTIDerivedB_getType(void)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1BFE */
void RTTIDerivedB_destructor(void)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1C04 */
void RTTIDerivedA_destructor(void)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1C0A */
void DiamondDerived_destructor(void)
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x1C0F */
void non_virtual_thunk_to_DiamondDerived_destructor(void)
{
 ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1C14 */
void virtual_thunk_to_DiamondDerived_destructor(void)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1C1A */
void MultiDerived_destructor(void)
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1C1F */
void non_virtual_thunk_to_MultiDerived_destructor(void)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1C24 */
void Derived_destructor(void)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1C2A */
void Base_deleting_destructor(void *self)
{
 operator delete(self, 4u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1C4E */
void Derived_deleting_destructor(void *self)
{
 operator delete(self, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1C72 */
void MultiDerived_deleting_destructor(void *self)
{
 operator delete(self, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1C95 */
void non_virtual_thunk_to_MultiDerived_deleting_destructor(void *self)
{
 operator delete((char *)self - 8, 0x10u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1CBC */
void RTTIDerivedA_deleting_destructor(void *self)
{
 operator delete(self, 4u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1CE0 */
void RTTIDerivedB_deleting_destructor(void *self)
{
 operator delete(self, 4u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1D04 */
void DiamondDerived_deleting_destructor(void *self)
{
 operator delete(self, 0x18u);
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x1D27 */
void virtual_thunk_to_DiamondDerived_deleting_destructor(void *self)
{
 unsigned int *vptr;
 unsigned int offset;
 vptr = *(unsigned int **)self;
 offset = *(unsigned int *)((char *)self + vptr[-4]);
 operator delete((char *)self + offset, 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x1D50 */
void non_virtual_thunk_to_DiamondDerived_deleting_destructor(void *self)
{
 operator delete((char *)self - 8, 0x18u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1D77 */
int template_max_int(int a1, int a2)
{
 int result; // eax

 result = a1;
 if ( a1 < a2 )
 return a2;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1D89 */
long double template_max_double(double a1, double a2)
{
 long double v2; // fst6

 v2 = a1;
 if ( a1 <= (long double)a2 )
 return a2;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1D9C */
unsigned int * template_swap_int(int *a1, unsigned int *a2)
{
 unsigned int *result; // eax
 int v3; // ecx

 result = a2;
 v3 = *a1;
 *a1 = *a2;
 *a2 = v3;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1DB4 */
int Container_int_Constructor(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1DC4 */
int Container_int_push(int a1, int a2)
{
 int result; // eax
 int v3; // edx

 result = a1;
 v3 = *(unsigned int *)(a1 + 40);
 if ( v3 <= 9 )
 {
 *(unsigned int *)(a1 + 40) = v3 + 1;
 *(unsigned int *)(a1 + 4 * v3) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1DE2 */
int Container_int_get(int a1, int a2)
{
 int result; // eax

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4 * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1E02 */
int Container_int_getSize(int a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1E0E */
int Container_double_Constructor(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1E1E */
int Container_double_push(int a1, double a2)
{
 int result; // eax
 int v3; // edx

 result = a1;
 v3 = *(unsigned int *)(a1 + 80);
 if ( v3 <= 9 )
 {
 *(unsigned int *)(a1 + 80) = v3 + 1;
 *(double *)(a1 + 8 * v3) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1E40 */
long double Container_double_get(int a1, int a2)
{
 if ( a2 < 0 )
 return 0.0;
 if ( *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8 * a2);
 return 0.0;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1E60 */
int Container_double_getSize(int a1)
{
 return *(unsigned int *)(a1 + 80);
}






/* CRT stub function __do_global_ctors_aux removed by preprocessor */






/* FAILED to decompile: __printf_chk @ 0x502C */

/* FAILED to decompile: _Znwj @ 0x5034 */

/* FAILED to decompile: __cxa_finalize @ 0x5038 */

/* FAILED to decompile: __cxa_begin_catch @ 0x503C */

/* FAILED to decompile: __cxa_allocate_exception @ 0x5040 */

/* FAILED to decompile: strlen @ 0x5044 */

/* FAILED to decompile: __cxa_atexit @ 0x5048 */

/* FAILED to decompile: _ZdlPvj @ 0x504C */

/* FAILED to decompile: strcmp @ 0x5054 */

/* FAILED to decompile: __libc_start_main @ 0x5058 */

/* FAILED to decompile: _Znaj @ 0x505C */

/* FAILED to decompile: __stack_chk_fail @ 0x5060 */

/* FAILED to decompile: __dynamic_cast @ 0x5064 */

/* FAILED to decompile: _ZdaPv @ 0x5068 */

/* FAILED to decompile: __cxa_rethrow @ 0x5070 */

/* FAILED to decompile: puts @ 0x5074 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x5078 */

/* FAILED to decompile: __cxa_end_catch @ 0x507C */

/* FAILED to decompile: __gxx_personality_v0 @ 0x5080 */

/* FAILED to decompile: __cxa_throw @ 0x5084 */

/* FAILED to decompile: _Unwind_Resume @ 0x508C */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x5090 */

/* Total functions decompiled: 97, failed: 22 */
