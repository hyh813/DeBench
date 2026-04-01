/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdarg.h>
#include <limits.h>
#include <errno.h>
#include <math.h>

/* Suppress common warnings in decompiled code */
#pragma GCC diagnostic ignored "-Wimplicit-function-declaration"
#pragma GCC diagnostic ignored "-Wsign-compare"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#pragma GCC diagnostic ignored "-Wpointer-arith"
#pragma GCC diagnostic ignored "-Wint-conversion"
#pragma GCC diagnostic ignored "-Wincompatible-pointer-types"

/* External declarations for CRT and profiling functions */
extern void *_gmon_start__;
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);
extern void _do_global_dtors_aux(void);

/* Forward declarations for C++ classes - converted to C structs */
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct BaseA;
struct BaseB;
struct MiddleA;
struct MiddleB;
struct VirtualBase;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;

/* Extern C declarations for class methods */
int Base_virtual_func(Base *this, int a2);
int Derived_virtual_func(Derived *this, int a2);
void Base_destructor(Base *this);
void Base_D0Ev(Base *this);
void Derived_destructor(Derived *this);
void Derived_D0Ev(Derived *this);
void MultiDerived_destructor(MultiDerived *this);
void MultiDerived_D0Ev(MultiDerived *this);
void DiamondDerived_destructor(DiamondDerived *this);
void DiamondDerived_D0Ev(DiamondDerived *this);
int MultiDerived_funcA(MultiDerived *this);
int MultiDerived_funcB(MultiDerived *this);
int non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *this);
void non_virtual_thunk_to_MultiDerived_destructor(MultiDerived *this);
void non_virtual_thunk_to_MultiDerived_D0Ev(MultiDerived *this);
int BaseA_funcA(BaseA *this);
void BaseA_destructor(BaseA *this);
void BaseA_D0Ev(BaseA *this);
int BaseB_funcB(BaseB *this);
void BaseB_destructor(BaseB *this);
void BaseB_D0Ev(BaseB *this);
int MiddleA_func(MiddleA *this);
void MiddleA_destructor(MiddleA *this);
void MiddleA_D0Ev(MiddleA *this);
int virtual_thunk_to_MiddleA_func(MiddleA *this);
void virtual_thunk_to_MiddleA_destructor(MiddleA *this);
void virtual_thunk_to_MiddleA_D0Ev(MiddleA *this);
int MiddleB_func(MiddleB *this);
void MiddleB_destructor(MiddleB *this);
void MiddleB_D0Ev(MiddleB *this);
int virtual_thunk_to_MiddleB_func(MiddleB *this);
void virtual_thunk_to_MiddleB_destructor(MiddleB *this);
void virtual_thunk_to_MiddleB_D0Ev(MiddleB *this);
int DiamondDerived_func(DiamondDerived *this);
void DiamondDerived_destructor(DiamondDerived *this);
void DiamondDerived_D0Ev(DiamondDerived *this);
int non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *this);
void non_virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *this);
void non_virtual_thunk_to_DiamondDerived_D0Ev(DiamondDerived *this);
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *this);
void virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *this);
void virtual_thunk_to_DiamondDerived_D0Ev(DiamondDerived *this);
int VirtualBase_func(VirtualBase *this);
void VirtualBase_destructor(VirtualBase *this);
void VirtualBase_D0Ev(VirtualBase *this);
void RTTIDerivedA_destructor(RTTIDerivedA *this);
void RTTIDerivedA_D0Ev(RTTIDerivedA *this);
int RTTIDerivedA_getType(RTTIDerivedA *this);
void RTTIBase_destructor(RTTIBase *this);
void RTTIDerivedB_destructor(RTTIDerivedB *this);
void RTTIDerivedB_D0Ev(RTTIDerivedB *this);
int RTTIDerivedB_getType(RTTIDerivedB *this);
const char *Base_getName(Base *this);
const char *Derived_getName(Derived *this);
int Container_int_Constructor(int a1);
int Container_int_push(int a1, int a2);
int Container_int_get(int a1, int a2);
int Container_int_getSize(int a1);
int Container_double_Constructor(int a1);
int Container_double_push(int a1, double a2);
double Container_double_get(int a1, int a2);
int Container_double_getSize(int a1);

/* Struct definitions for C++ classes */
struct Base {
 void *vtable_ptr;
 int value;
};

struct Derived {
 void *vtable_ptr;
 int value;
};

struct MultiDerived {
 void *vtable_ptr;
 int value1;
 int value2;
};

struct DiamondDerived {
 void *vtable_ptr;
 int value1;
 int value2;
};

struct BaseA {
 void *vtable_ptr;
 int value;
};

struct BaseB {
 void *vtable_ptr;
 int value;
};

struct MiddleA {
 void *vtable_ptr;
 int value;
};

struct MiddleB {
 void *vtable_ptr;
 int value;
};

struct VirtualBase {
 void *vtable_ptr;
 int value;
};

struct RTTIBase {
 void *vtable_ptr;
};

struct RTTIDerivedA {
 void *vtable_ptr;
};

struct RTTIDerivedB {
 void *vtable_ptr;
};

struct LifecycleClass {
 int data;
};

/* C++ runtime type info structures */
typedef struct type_info {
 void *_vptr;
 const char *__type_name;
} type_info_t;

typedef struct __class_type_info {
 type_info_t base;
} __class_type_info_t;

/* External symbols - defined as stubs */
void *off_5CE4 = 0;
void *off_5D04 = 0;
void *off_5D28 = 0;
void *off_5D40 = 0;
void *off_5DB0 = 0;
void *off_5DC8 = 0;
void *off_5DE4 = 0;
void *off_5ECC = 0;
void *off_5EE0 = 0;
unsigned char byte_9 = 0;
const char asc_31E5[] = "C++ OO Features Test";
const char aCppL301D[] = "Test 1: %d\n";
const char aCppL302D[] = "Test 2: %d\n";
const char aCppL303D[] = "Test 3: %d\n";
const char aCppL304D[] = "Test 4: %d\n";
const char aCppL305D[] = "Test 5: %d\n";
const char aCppL306D[] = "Test 6: %d\n";
const char aCppL307D[] = "Test 7: %d\n";
const char aCppL308D[] = "Test 8: %d\n";
const char aCppL309D[] = "Test 9: %d\n";
void *std___ioinit = 0;
void *_dso_handle = 0;

/* Define the typeinfo structures */
static type_info_t typeinfo_for_int = {0, "int"};
static __class_type_info_t typeinfo_for_RTTIBase = {{0, "RTTIBase"}};
static __class_type_info_t typeinfo_for_RTTIDerivedA = {{0, "RTTIDerivedA"}};
static __class_type_info_t typeinfo_for_RTTIDerivedB = {{0, "RTTIDerivedB"}};

/* Lifecycle class instance counter */
static int LifecycleClass_instance_count = 0;


/* C++ runtime function declarations */
void *operator_new(unsigned long);
void *operator_new_array(unsigned long);
void operator_delete(void *);
void operator_delete_array(void *);
void *__cxa_allocate_exception(unsigned long);
void __cxa_throw(void *, type_info_t *, void *);
int __cxa_atexit(void (*)(void *), void *, void *);
void *__dynamic_cast(void *, const __class_type_info_t *, const __class_type_info_t *, long);
void *__cxa_begin_catch(void *);
void __cxa_end_catch(void);
void __cxa_rethrow(void);

/* Namespace std declarations - removed for C compatibility */

/* Windows-style byte/word access macros */
#define HIBYTE(x) (*((unsigned char*)&(x) + 1))
#define BYTE1(x) (*((unsigned char*)&(x) + 1))
#define HIWORD(x) (*((unsigned short*)&(x) + 1))


/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_clang_O1_no_g
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
 asm volatile ("jmp dword ptr [ebx+8]");
}


/* Function: sub_1160 @ 0x1160 */
int sub_1160(int a1)
{
 return (*(int (**)(void))(a1 - 24))();
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1170 */
int GLOBAL__sub_I_5_1_cpp()
{
 return __cxa_atexit((void (*)(void *))sub_11DC, &std___ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_11DC @ 0x11DC */
void sub_11DC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x11E0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1319 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x131D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1330 */
size_t test_cpp_member_func(void)
{
 unsigned short s[4]; // [esp+14h] [ebp-28h] BYREF
 int v2; // [esp+1Ch] [ebp-20h]
 int v3; // [esp+20h] [ebp-1Ch]
 int v4; // [esp+24h] [ebp-18h]
 int v5; // [esp+28h] [ebp-14h]
 unsigned char v6[8]; // [esp+2Ch] [ebp-10h] BYREF

 strcpy((char *)s, "Test");
 HIBYTE(s[2]) = 0;
 s[3] = 0;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 memset(v6, 0, sizeof(v6));
 return strlen((const char *)s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x13B0 */
int test_cpp_constructor(void)
{
 int v0; // esi
 unsigned int *v1; // eax
 unsigned int *v2; // ecx
 int v3; // esi

 v0 = 0;
 v1 = (unsigned int *)operator_new_array(0x14u);
 v2 = v1;
 do
 {
 *v2 = v0;
 v0 += 10;
 ++v2;
 }
 while ( v0 != 50 );
 ++LifecycleClass_instance_count;
 v3 = v1[2] + LifecycleClass_instance_count;
 operator_delete_array(v1);
 --LifecycleClass_instance_count;
 return v3 + 1000 * LifecycleClass_instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1420 */
int call_virtual_func(Base *a1, int a2)
{
 return (**(int ( ***)(Base *, int))a1)(a1, a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1450 */
int test_cpp_virtual_func(void)
{
 int v0; // esi
 unsigned int v2[2]; // [esp+8h] [ebp-14h] BYREF
 unsigned int *v3; // [esp+10h] [ebp-Ch] BYREF

 v3 = (unsigned int *)&off_5CE4;
 v2[0] = (unsigned int)v3;
 v2[1] = 3;
 v0 = Base_virtual_func((Base *)v2, 5);
 return v0 + Derived_virtual_func((Derived *)v2, 5) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x14B0 */
int test_cpp_multiple_inheritance(void)
{
 int v0; // eax
 unsigned int v2[2]; // [esp+10h] [ebp-1Ch] BYREF
 unsigned int v3[5]; // [esp+18h] [ebp-14h] BYREF

 v2[0] = (unsigned int)&off_5D28;
 v3[0] = (unsigned int)&off_5D40;
 v2[1] = 100;
 v3[1] = 200;
 v0 = MultiDerived_funcA((MultiDerived *)v2);
 return v0 + MultiDerived_funcB((MultiDerived *)v3) + 1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1510 */
int test_cpp_diamond_inheritance(void)
{
 int v0; // esi
 unsigned int v2[3]; // [esp+Ch] [ebp-20h]
 unsigned int v3[5]; // [esp+18h] [ebp-14h] BYREF

 v3[0] = (unsigned int)&off_5DE4;
 v2[1] = (unsigned int)&off_5DC8;
 v3[1] = 50;
 v0 = virtual_thunk_to_DiamondDerived_func((DiamondDerived *)v3);
 *(unsigned int *)((char *)v2 + (unsigned int)((char *)&off_5DB0 - 3)) = 100;
 return v0 + DiamondDerived_func((DiamondDerived *)v3);
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1580 */
int test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1590 */
int test_cpp_template_func(void)
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x15A0 */
int test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x15B0 */
int test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x15C0 */
void test_cpp_exception(void)
{
 unsigned int *exception; // eax

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, &typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x16B0 */
int test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x16C0 */
size_t test_cpp_rtti(void)
{
 unsigned int *v0; // edi
 unsigned int *v1; // ebp
 const char *v2; // ecx
 int v3; // esi
 char *v4; // eax
 bool v5; // al
 int v6; // ebp
 void *v7; // eax
 int v8; // edi
 void *v9; // eax
 int v10; // ecx
 int v11; // edi
 size_t v12; // ebp
 char *s1; // [esp+0h] [ebp-1Ch]
 unsigned int *v15; // [esp+4h] [ebp-18h]
 void *lpsrc; // [esp+8h] [ebp-14h]

 v0 = (unsigned int *)operator_new(4u);
 *v0 = off_5ECC;
 v1 = (unsigned int *)operator_new(4u);
 *v1 = off_5EE0;
 v2 = *(const char **)(*(unsigned int *)(*v0 - 4) + 4);
 s1 = (char *)v2;
 if ( strcmp(v2, "12RTTIDerivedA") == 0 )
 {
 v3 = 10;
 }
 else
 {
 v3 = 0;
 if ( *v2 != 42 )
 {
 v3 = 10;
 if ( strcmp(v2, "12RTTIDerivedA") )
 v3 = 0;
 }
 }
 v4 = *(char **)(*(unsigned int *)(*v1 - 4) + 4);
 lpsrc = v1;
 v5 = strcmp(v4, "12RTTIDerivedB") == 0 || *v4 != 42 && strcmp(v4, "12RTTIDerivedB") == 0;
 v6 = v3 | 0x14;
 if ( !v5 )
 v6 = v3;
 v7 = __dynamic_cast(
 v0,
 (const __class_type_info_t *)&typeinfo_for_RTTIBase,
 (const __class_type_info_t *)&typeinfo_for_RTTIDerivedA,
 0);
 v15 = v0;
 v8 = v6 + 100;
 if ( !v7 )
 v8 = v6;
 v9 = __dynamic_cast(
 lpsrc,
 (const __class_type_info_t *)&typeinfo_for_RTTIBase,
 (const __class_type_info_t *)&typeinfo_for_RTTIDerivedB,
 0);
 v10 = v8 + 200;
 if ( !v9 )
 v10 = v8;
 v11 = v10;
 v12 = strlen(s1 + (*s1 == 42));
 (*(void ( **)(unsigned int *))(*v15 + 4))(v15);
 (*(void ( **)(void *))(*(unsigned int *)lpsrc + 4))(lpsrc);
 return v11 + v12;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1810 */
void test_cpp_oo_features(void)
{
 size_t v0; // eax
 int v1; // esi
 unsigned int *v2; // eax
 unsigned int *v3; // ecx
 int v4; // esi
 int v5; // esi
 int v6; // eax
 int v7; // eax
 int v8; // esi
 int v9; // eax
 unsigned int *v10; // [esp+10h] [ebp-3Ch] BYREF
 unsigned int s[2]; // [esp+14h] [ebp-38h] BYREF
 unsigned int v12[2]; // [esp+1Ch] [ebp-30h] BYREF
 unsigned int *v13; // [esp+20h] [ebp-2Ch] BYREF
 int v14; // [esp+24h] [ebp-28h]
 int v15; // [esp+28h] [ebp-24h]
 unsigned char v16[8]; // [esp+2Ch] [ebp-20h] BYREF
 unsigned int *v17; // [esp+38h] [ebp-14h] BYREF

 puts(asc_31E5);
 strcpy((char *)s, "Test");
 BYTE1(s[1]) = 0;
 HIWORD(s[1]) = 0;
 v12[0] = 0;
 v12[1] = 0;
 v13 = 0;
 v14 = 0;
 v15 = 0;
 memset(v16, 0, sizeof(v16));
 v0 = strlen((const char *)s);
 printf(aCppL301D, v0 + 4700);
 v1 = 0;
 v2 = (unsigned int *)operator_new_array(0x14u);
 v3 = v2;
 do
 {
 *v3 = v1;
 v1 += 10;
 ++v3;
 }
 while ( v1 != 50 );
 ++LifecycleClass_instance_count;
 v4 = v2[2] + LifecycleClass_instance_count;
 operator_delete_array(v2);
 --LifecycleClass_instance_count;
 printf(aCppL302D, v4 + 1000 * LifecycleClass_instance_count);
 v17 = (unsigned int *)&off_5CE4;
 s[0] = (unsigned int)v17;
 v5 = Base_virtual_func((Base *)s, 5);
 v17 = (unsigned int *)&off_5D04;
 v12[0] = (unsigned int)v17;
 v6 = Derived_virtual_func((Derived *)v12, 5);
 printf(aCppL303D, v5 + v6 + 21);
 v12[0] = (unsigned int)&off_5D28;
 s[0] = 100;
 s[1] = 200;
 v7 = non_virtual_thunk_to_MultiDerived_funcB((MultiDerived *)s);
 printf(aCppL304D, v7 + 31);
 v13 = (unsigned int *)&off_5DE4;
 v12[0] = (unsigned int)v13;
 s[1] = (unsigned int)&off_5DC8;
 v14 = 50;
 v8 = virtual_thunk_to_DiamondDerived_func((DiamondDerived *)v12);
 *(unsigned int *)((char *)s + (unsigned int)((char *)&off_5DB0 - 3)) = 100;
 v9 = DiamondDerived_func((DiamondDerived *)v12);
 printf(aCppL305D, v8 + v9);
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: main @ 0x1AB0 */
int main(int argc, const char *argv[])
{
 test_cpp_oo_features();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1AD0 */
int Base_virtual_func(Base *this, int a2)
{
 return a2 + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1AE0 */
int Derived_virtual_func(Derived *this, int a2)
{
 return a2 * *((unsigned int *)this + 1);
}


/* Function: _ZN4BaseD2Ev @ 0x1AF0 */
void Base_destructor(Base *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1B00 */
void MultiDerived_destructor(MultiDerived *this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1B10 */
void DiamondDerived_destructor(DiamondDerived *this)
{
 ;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1B20 */
int template_max_int(int a1, int a2)
{
 int result; // eax

 result = a2;
 if ( a1 > a2 )
 return a1;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1B30 */
double template_max_double(double a1, double a2)
{
 double v2; // fst6

 v2 = a2;
 if ( a1 > a2 )
 return a1;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1B50 */
void template_swap_int(int *a1, int *a2)
{
 int v3; // edx

 v3 = *a1;
 *a1 = *a2;
 *a2 = v3;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1B70 */
int Container_int_Constructor(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1B80 */
int Container_int_push(int a1, int a2)
{
 int result; // eax
 int v3; // ecx

 result = a1;
 v3 = *(unsigned int *)(a1 + 40);
 if ( v3 <= 9 )
 {
 *(unsigned int *)(a1 + 40) = v3 + 1;
 *(unsigned int *)(a1 + 4 * v3) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1BA0 */
int Container_int_get(int a1, int a2)
{
 int result; // eax

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4 * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1BC0 */
int Container_int_getSize(int a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1BD0 */
int Container_double_Constructor(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1BE0 */
int Container_double_push(int a1, double a2)
{
 int result; // eax
 int v3; // ecx

 result = a1;
 v3 = *(unsigned int *)(a1 + 80);
 if ( v3 <= 9 )
 {
 *(unsigned int *)(a1 + 80) = v3 + 1;
 *(double *)(a1 + 8 * v3) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1C00 */
double Container_double_get(int a1, int a2)
{
 double result; // fst7

 result = 0.0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8 * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1C20 */
int Container_double_getSize(int a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZNK4Base7getNameEv @ 0x1C30 */
const char *Base_getName(Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x1C50 */
void Base_D0Ev(Base *this)
{
 operator_delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x1C80 */
const char *Derived_getName(Derived *this)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x1CA0 */
void Derived_D0Ev(Derived *this)
{
 operator_delete(this);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1CD0 */
int MultiDerived_funcA(MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1CE0 */
void MultiDerived_D0Ev(MultiDerived *this)
{
 operator_delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1D10 */
int MultiDerived_funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x1D20 */
int non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1D30 */
void non_virtual_thunk_to_MultiDerived_destructor(MultiDerived *this)
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1D40 */
void non_virtual_thunk_to_MultiDerived_D0Ev(MultiDerived *this)
{
 operator_delete((char *)this - 8);
}


/* Function: _ZN5BaseA5funcAEv @ 0x1D70 */
int BaseA_funcA(BaseA *this)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x1D80 */
void BaseA_destructor(BaseA *this)
{
 ;
}


/* Function: _ZN5BaseAD0Ev @ 0x1D90 */
void BaseA_D0Ev(BaseA *this)
{
 operator_delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x1DC0 */
int BaseB_funcB(BaseB *this)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x1DD0 */
void BaseB_destructor(BaseB *this)
{
 ;
}


/* Function: _ZN5BaseBD0Ev @ 0x1DE0 */
void BaseB_D0Ev(BaseB *this)
{
 operator_delete(this);
}


/* Function: _ZN7MiddleA4funcEv @ 0x1E10 */
int MiddleA_func(MiddleA *this)
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 150;
}


/* Function: _ZN7MiddleAD1Ev @ 0x1E30 */
void MiddleA_destructor(MiddleA *this)
{
 ;
}


/* Function: _ZN7MiddleAD0Ev @ 0x1E40 */
void MiddleA_D0Ev(MiddleA *this)
{
 operator_delete(this);
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1E70 */
int virtual_thunk_to_MiddleA_func(MiddleA *this)
{
 return *(unsigned int *)((char *)this
 + *(unsigned int *)(*(unsigned int *)this - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)) - 12)
 + 4)
 + 150;
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x1E90 */
void virtual_thunk_to_MiddleA_destructor(MiddleA *this)
{
 ;
}


/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x1EA0 */
void virtual_thunk_to_MiddleA_D0Ev(MiddleA *this)
{
 operator_delete((char *)this + *(unsigned int *)(*(unsigned int *)this - 16));
}


/* Function: _ZN7MiddleB4funcEv @ 0x1ED0 */
int MiddleB_func(MiddleB *this)
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 200;
}


/* Function: _ZN7MiddleBD1Ev @ 0x1EF0 */
void MiddleB_destructor(MiddleB *this)
{
 ;
}


/* Function: _ZN7MiddleBD0Ev @ 0x1F00 */
void MiddleB_D0Ev(MiddleB *this)
{
 operator_delete(this);
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1F30 */
int virtual_thunk_to_MiddleB_func(MiddleB *this)
{
 return *(unsigned int *)((char *)this
 + *(unsigned int *)(*(unsigned int *)this - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)) - 12)
 + 4)
 + 200;
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x1F50 */
void virtual_thunk_to_MiddleB_destructor(MiddleB *this)
{
 ;
}


/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x1F60 */
void virtual_thunk_to_MiddleB_D0Ev(MiddleB *this)
{
 operator_delete((char *)this + *(unsigned int *)(*(unsigned int *)this - 16));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1F90 */
int DiamondDerived_func(DiamondDerived *this)
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1FB0 */
void DiamondDerived_D0Ev(DiamondDerived *this)
{
 operator_delete(this);
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1FE0 */
int non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *this)
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*((unsigned int *)this - 2) - 12) - 4) + 250;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x2000 */
void non_virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *this)
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x2010 */
void non_virtual_thunk_to_DiamondDerived_D0Ev(DiamondDerived *this)
{
 operator_delete((char *)this - 8);
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x2040 */
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *this)
{
 return *(unsigned int *)((char *)this
 + *(unsigned int *)(*(unsigned int *)this - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)) - 12)
 + 4)
 + 250;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x2060 */
void virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *this)
{
 ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x2070 */
void virtual_thunk_to_DiamondDerived_D0Ev(DiamondDerived *this)
{
 operator_delete((char *)this + *(unsigned int *)(*(unsigned int *)this - 16));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x20A0 */
int VirtualBase_func(VirtualBase *this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x20B0 */
void VirtualBase_destructor(VirtualBase *this)
{
 ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x20C0 */
void VirtualBase_D0Ev(VirtualBase *this)
{
 operator_delete(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x20F0 */
void RTTIDerivedA_D0Ev(RTTIDerivedA *this)
{
 operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x2120 */
int RTTIDerivedA_getType(RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x2130 */
void RTTIBase_destructor(RTTIBase *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x2140 */
void RTTIDerivedB_D0Ev(RTTIDerivedB *this)
{
 operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x2170 */
int RTTIDerivedB_getType(RTTIDerivedB *this)
{
 return 2;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x21CC */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: _Znwj @ 0x6084 */

/* FAILED to decompile: __cxa_finalize @ 0x6088 */

/* FAILED to decompile: __cxa_begin_catch @ 0x608C */

/* FAILED to decompile: __cxa_allocate_exception @ 0x6090 */

/* FAILED to decompile: strlen @ 0x6094 */

/* FAILED to decompile: __cxa_atexit @ 0x6098 */

/* FAILED to decompile: strcmp @ 0x60A0 */

/* FAILED to decompile: __libc_start_main @ 0x60A4 */

/* FAILED to decompile: _Znaj @ 0x60A8 */

/* FAILED to decompile: _ZdlPv @ 0x60AC */

/* FAILED to decompile: __dynamic_cast @ 0x60B0 */

/* FAILED to decompile: _ZdaPv @ 0x60B4 */

/* FAILED to decompile: printf @ 0x60BC */

/* FAILED to decompile: __cxa_rethrow @ 0x60C0 */

/* FAILED to decompile: puts @ 0x60C4 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x60C8 */

/* FAILED to decompile: __cxa_end_catch @ 0x60CC */

/* FAILED to decompile: __gxx_personality_v0 @ 0x60D0 */

/* FAILED to decompile: __cxa_throw @ 0x60D4 */

/* FAILED to decompile: _Unwind_Resume @ 0x60DC */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x60E0 */

/* Total functions decompiled: 90, failed: 21 */

/* Stub implementations for C++ runtime functions */
void *operator_new(unsigned long size) { return malloc(size); }
void *operator_new_array(unsigned long size) { return malloc(size); }
void operator_delete(void *ptr) { free(ptr); }
void operator_delete_array(void *ptr) { free(ptr); }
void *__cxa_allocate_exception(unsigned long size) { return malloc(size); }
void __cxa_throw(void *exc, type_info_t *ti, void *dest) { }
int __cxa_atexit(void (*func)(void *), void *arg, void *dso) { return 0; }
void *__dynamic_cast(void *src, const __class_type_info_t *src_type, const __class_type_info_t *dst_type, long flags) { return src; }
void *__cxa_begin_catch(void *exc) { return exc; }
void __cxa_end_catch(void) { }
void __cxa_rethrow(void) { }
