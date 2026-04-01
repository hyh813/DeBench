/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_gcc_O1_no_g
 * Processor: pc
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// Forward declarations
typedef struct LifecycleClass LifecycleClass;
extern int LifecycleClass_instance_count;

// External function declarations
extern void* operator_new(unsigned long size);
extern void* operator_new_array(unsigned long size);
extern void operator_delete(void* ptr, unsigned long size);
extern void operator_delete_array(void* ptr, unsigned long size);
extern unsigned long __readfsqword(unsigned int offset);
extern char* __cxa_allocate_exception(unsigned long size);
extern void __cxa_throw(void* exception, void* type_info, void* destructor);
extern void* __dynamic_cast(void* src, void* src_type, void* dst_type, int flags);
extern int strcmp(const char* s1, const char* s2);
extern unsigned long strlen(const char* s);
extern int puts(const char* s);
extern int __printf_chk(int flag, const char* format, ...);
extern int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);
extern double fmax(double a, double b);

// Forward declarations for C++ classes (needed before external variable declarations)
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

// External variable declarations
extern long long (*off_59A0)(Base *, int);
extern long long (*off_59D0)(Derived *, int);

// Define string constants for printf format strings
char unk_303C[] = "Member function result: %u\n";
char unk_305A[] = "Constructor result: %u\n";
char unk_3076[] = "Virtual function result: %u\n";
char unk_3092[] = "Multiple inheritance result: %u\n";
char unk_30AE[] = "Diamond inheritance result: %u\n";
char unk_30CB[] = "Operator overload result: %u\n";
char unk_30E7[] = "Template function result: %u\n";
char unk_3103[] = "Template class result: %u\n";
char unk_311F[] = "Lambda result: %u\n";

// Define global variables
int LifecycleClass_instance_count = 0;

// Forward declarations for functions used in function pointer initializations
extern long long Base_virtual_func(Base *self, int a2);
extern long long Derived_virtual_func(Derived *self, int a2);

// Define function pointers
long long (*off_59A0)(Base *, int) = Base_virtual_func;
long long (*off_59D0)(Derived *, int) = Derived_virtual_func;

// Macro definitions
#define JUMPOUT(x) return

// Stub implementations for C++ runtime functions
void* operator_new(unsigned long size)
{
 return malloc(size);
}

void* operator_new_array(unsigned long size)
{
 return malloc(size);
}

void operator_delete(void* ptr, unsigned long size)
{
 free(ptr);
}

void operator_delete_array(void* ptr, unsigned long size)
{
 free(ptr);
}

unsigned long __readfsqword(unsigned int offset)
{
 return 0;
}

char* __cxa_allocate_exception(unsigned long size)
{
 return (char*)malloc(size);
}

void __cxa_throw(void* exception, void* type_info, void* destructor)
{
 // Stub - just free and return
 free(exception);
}

void* __dynamic_cast(void* src, void* src_type, void* dst_type, int flags)
{
 // Stub - return src for simplicity
 return src;
}

double fmax(double a, double b)
{
 return (a > b) ? a : b;
}

// Forward function declarations
extern long long DiamondDerived_func(struct DiamondDerived *self);
extern long long virtual_thunk_to_DiamondDerived_func(struct DiamondDerived *self);
extern long long template_max_int(unsigned int a1, unsigned int a2);
extern double template_max_double(double a1, double a2);
extern long long template_swap_int(unsigned int *a1, unsigned int *a2);
extern void RTTIDerivedA_destructor(RTTIDerivedA *self);
extern void RTTIDerivedB_destructor(RTTIDerivedB *self);
extern long long Base_virtual_func(Base *self, int a2);
extern long long Derived_virtual_func(Derived *self, int a2);

// External variable declarations
extern long long (*off_59A0)(Base *, int);
extern long long (*off_59D0)(Derived *, int);




/* Function: sub_2020 @ 0x2020 */
void sub_2020()
{
 JUMPOUT(0);
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

/* Function: _Z20test_cpp_member_funcv @ 0x2369 */
long long test_cpp_member_func(void)
{
 char s[8]; // [rsp+4h] [rbp-34h] BYREF
 long long v2; // [rsp+Ch] [rbp-2Ch]
 long long v3; // [rsp+14h] [rbp-24h]
 int v4; // [rsp+1Ch] [rbp-1Ch]
 short v5; // [rsp+20h] [rbp-18h]
 char v6; // [rsp+22h] [rbp-16h]
 char v7; // [rsp+23h] [rbp-15h]
 unsigned long long v8; // [rsp+28h] [rbp-10h]

 v8 = __readfsqword(0x28u);
 *(unsigned long long *)s = 1953719636;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 return (unsigned int)strlen(s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x23DE */
long long test_cpp_constructor(void)
{
 int *v0; // rdi
 int v1; // eax
 int v2; // ebx

 v0 = (int *)operator_new_array(0x14u);
 v0[1] = 10;
 v0[2] = 20;
 v0[3] = 30;
 v0[4] = 40;
 v1 = LifecycleClass_instance_count++;
 v2 = v1 + 21;
 operator_delete_array(v0, 0x14u);
 --LifecycleClass_instance_count;
 return (unsigned int)(v2 + 1000 * (int)LifecycleClass_instance_count);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x243C */
long long call_virtual_func(Base *a1)
{
 return (**(long long ( ***)(Base *))a1)(a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x244E */
long long test_cpp_virtual_func(void)
{
 int v0; // ebx
 long long ( **v2)(Base *, int); // [rsp+8h] [rbp-30h] BYREF
 long long ( **v3)(Derived *, int); // [rsp+10h] [rbp-28h] BYREF
 int v4; // [rsp+18h] [rbp-20h]
 unsigned long long v5; // [rsp+28h] [rbp-10h]

 v5 = __readfsqword(0x28u);
 v2 = &off_59A0;
 v3 = &off_59D0;
 v4 = 3;
 v0 = call_virtual_func((Base *)&v2);
 return v0 + (unsigned int)call_virtual_func((Base *)&v3) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x24C6 */
long long test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x24D0 */
long long test_cpp_diamond_inheritance(void)
{
 int v0; // ebx
 long long ( **v2)(DiamondDerived *); // [rsp+20h] [rbp-38h] BYREF
 int v3; // [rsp+28h] [rbp-30h]
 unsigned long long v4; // [rsp+38h] [rbp-20h]

 v4 = __readfsqword(0x28u);
 v2 = (long long ( **)(DiamondDerived *))&DiamondDerived_func;
 v3 = 50;
 v0 = virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&v2);
 v3 = 100;
 return v0 + (unsigned int)virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&v2);
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x254C */
long long test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x2556 */
long long test_cpp_template_func(void)
{
 int v0; // ebx
 double v2; // [rsp+8h] [rbp-20h]
 unsigned int v3; // [rsp+10h] [rbp-18h] BYREF
 unsigned int v4; // [rsp+14h] [rbp-14h] BYREF
 unsigned long long v5; // [rsp+18h] [rbp-10h]

 v5 = __readfsqword(0x28u);
 v0 = template_max_int(3, 7);
 v2 = template_max_double(2.5, 1.5);
 v3 = 10;
 v4 = 20;
 template_swap_int(&v3, &v4);
 return (unsigned int)(v4 + v3 + v0 + (int)v2);
}


/* Function: _Z23test_cpp_template_classv @ 0x25E5 */
long long test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x25EF */
long long test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x25F9 */
void test_cpp_exception(void)
{
 void *exception; // rdi

 exception = __cxa_allocate_exception(4u);
 *(int *)exception = 42;
 __cxa_throw(exception, (void *)"typeinfo for int", 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x26D1 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x26DB */
long long test_cpp_rtti(void)
{
 long long *v0; // r12
 void *v1; // r13
 long long v2; // r14
 const char *v3; // rbp
 int v4; // ebx
 int v5; // ebx
 unsigned int v6; // ebx

 v0 = (long long *)operator_new(8u);
 *v0 = (long long)(void*)&RTTIDerivedA_destructor;
 v1 = (void *)operator_new(8u);
 *(unsigned long long *)v1 = (unsigned long long)(void*)&RTTIDerivedB_destructor;
 v2 = *v0;
 v3 = (const char *)((char *)(unsigned long)(*(unsigned long long *)((char *)(long long)(char*)((char*)(void*)(long long)(*v0)) - 8)) + 8LL);
 v4 = 10;
 if ( v3 != "12RTTIDerivedA" )
 {
 v4 = 0;
 if ( *v3 != 42 )
 v4 = strcmp(*(const char **)(*(unsigned long long *)((void *)(*v0) - 8) + 8LL), "12RTTIDerivedA") == 0 ? 0xA : 0;
 }
 v5 = v4 + 20;
 if ( __dynamic_cast(
 (void *)v0,
 (void *)"typeinfo for RTTIBase",
 (void *)"typeinfo for RTTIDerivedA",
 0) )
 {
 v5 += 100;
 }
 if ( __dynamic_cast(
 v1,
 (void *)"typeinfo for RTTIBase",
 (void *)"typeinfo for RTTIDerivedB",
 0) )
 {
 v5 += 200;
 }
 v6 = (unsigned int)strlen(&v3[(int)(*v3 == 42)]) + v5;
 (*(void ( **)(long long *))(v2 + 8))(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return v6;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x2801 */
void test_cpp_oo_features(void)
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax

 puts("Testing C++ OO features");
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
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 return 0;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x29B4 */
long long Base_virtual_func(Base *self, int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x29BC */
const char * Base_getName(Base *self)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x29C8 */
void Base_destructor(Base *self)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x29CE */
long long Derived_virtual_func(Derived *self, int a2)
{
 return (unsigned int)(*((unsigned int *)self + 2) * a2);
}


/* Function: _ZNK7Derived7getNameEv @ 0x29DA */
const char * Derived_getName(Derived *self)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x29E6 */
long long MultiDerived_funcA(MultiDerived *self)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x29F0 */
long long MultiDerived_funcB(MultiDerived *self)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x29FA */
long long non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *self)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x2A04 */
long long MiddleA_func(MiddleA *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL) + 8) + 150);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x2A19 */
long long virtual_thunk_to_MiddleA_func(MiddleA *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self
 + *(unsigned long long *)(*(unsigned long long *)self - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL)) - 24LL)
 + 8)
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x2A36 */
long long MiddleB_func(MiddleB *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL) + 8) + 200);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x2A4B */
long long virtual_thunk_to_MiddleB_func(MiddleB *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self
 + *(unsigned long long *)(*(unsigned long long *)self - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL)) - 24LL)
 + 8)
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x2A68 */
long long DiamondDerived_func(DiamondDerived *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL) + 8) + 250);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x2A7D */
long long virtual_thunk_to_DiamondDerived_func(DiamondDerived *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self
 + *(unsigned long long *)(*(unsigned long long *)self - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL)) - 24LL)
 + 8)
 + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x2A99 */
long long non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self + *(unsigned long long *)(*((unsigned long long *)self - 2) - 24LL) - 8) + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x2AB0 */
long long RTTIDerivedA_getType(RTTIDerivedA *self)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x2ABA */
long long RTTIDerivedB_getType(RTTIDerivedB *self)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x2AC4 */
void RTTIDerivedB_destructor(RTTIDerivedB *self)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x2ACA */
void RTTIDerivedA_destructor(RTTIDerivedA *self)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2AD0 */
void DiamondDerived_destructor(DiamondDerived *self)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x2AD5 */
void non_virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *self)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x2ADA */
void virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *self)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x2AE0 */
void MultiDerived_destructor(MultiDerived *self)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x2AE5 */
void non_virtual_thunk_to_MultiDerived_destructor(MultiDerived *self)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x2AEA */
void Derived_destructor(Derived *self)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x2AF0 */
void Base_destructor_delete(Base *self)
{
 operator_delete(self, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x2B08 */
void Derived_destructor_delete(Derived *self)
{
 operator_delete(self, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x2B20 */
void MultiDerived_destructor_delete(MultiDerived *self)
{
 operator_delete(self, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x2B37 */
void non_virtual_thunk_to_MultiDerived_destructor_delete(MultiDerived *self)
{
 operator_delete((char *)self - 16, 0x20u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x2B52 */
void RTTIDerivedA_destructor_delete(RTTIDerivedA *self)
{
 operator_delete(self, 8u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x2B6A */
void RTTIDerivedB_destructor_delete(RTTIDerivedB *self)
{
 operator_delete(self, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x2B82 */
void DiamondDerived_destructor_delete(DiamondDerived *self)
{
 operator_delete(self, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2B99 */
void virtual_thunk_to_DiamondDerived_destructor_delete(DiamondDerived *self)
{
 operator_delete((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 32LL), 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x2BB7 */
void non_virtual_thunk_to_DiamondDerived_destructor_delete(DiamondDerived *self)
{
 operator_delete((char *)self - 16, 0x30u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2BD2 */
long long template_max_int(unsigned int a1, unsigned int a2)
{
 long long result; // rax

 result = a2;
 if ( (int)a1 >= (int)a2 )
 return a1;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2BDE */
double template_max_double(double a1, double a2)
{
 return fmax(a1, a2);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x2BE7 */
long long template_swap_int(unsigned int *a1, unsigned int *a2)
{
 long long result; // rax

 result = (unsigned int)*a1;
 *a1 = *a2;
 *a2 = result;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x2BF4 */
void Container_int_Constructor(long long a1)
{
 *(unsigned int *)(a1 + 40) = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x2C00 */
long long Container_int_push(long long a1, int a2)
{
 long long result; // rax

 result = *(unsigned int *)(a1 + 40);
 if ( (int)result <= 9 )
 {
 *(unsigned int *)(a1 + 40) = result + 1;
 result = (int)result;
 *(unsigned int *)(a1 + 4LL * (int)result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x2C18 */
long long Container_int_get(long long a1, int a2)
{
 long long result; // rax

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x2C34 */
long long Container_int_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x2C3C */
void Container_double_Constructor(long long a1)
{
 *(unsigned int *)(a1 + 80) = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x2C48 */
long long Container_double_push(long long a1, double a2)
{
 long long result; // rax

 result = *(unsigned int *)(a1 + 80);
 if ( (int)result <= 9 )
 {
 *(unsigned int *)(a1 + 80) = result + 1;
 result = (int)result;
 *(double *)(a1 + 8LL * (int)result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x2C62 */
double Container_double_get(long long a1, int a2)
{
 double result; // xmm0_8

 result = 0.0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2C7E */
long long Container_double_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
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
