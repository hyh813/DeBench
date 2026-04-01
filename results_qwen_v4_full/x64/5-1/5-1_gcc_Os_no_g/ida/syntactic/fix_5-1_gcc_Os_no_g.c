/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_gcc_Os_no_g
 * Processor: pc
 */

#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

/* GCC intrinsic for reading FS segment */
static inline unsigned long long __readfsqword(unsigned int offset) {
    return 0;
}

/* Missing declarations */
extern void *_gmon_start__;
#define JUMPOUT(x) do { } while(0)

/* Missing C++ operator declarations */
extern void* operator_new(unsigned long size);
extern void* operator_new_array(unsigned long size);
extern void operator_delete(void* ptr, unsigned long size);
extern void operator_delete_array(void* ptr);

/* Missing class declarations */
typedef struct LifecycleClass {
    static int instance_count;
} LifecycleClass;
extern int LifecycleClass_instance_count;

/* Missing function forward declarations */
extern void test_cpp_oo_features(void);
extern long long template_max_int(unsigned int a1, unsigned int a2);
extern double template_max_double(double a1, double a2);
extern long long template_swap_int(unsigned int *a1, unsigned int *a2);
extern long long Container_int_push(long long a1, int a2);
extern void std_unique_ptr_int_destructor(void **a1);
extern void std_unique_ptr_int_array_destructor(void **a1);
extern long long virtual_thunk_to_DiamondDerived_func(DiamondDerived *a1);
extern void DiamondDerived_destructor(DiamondDerived *this_ptr);

/* Missing C++ runtime functions */
extern void* __dynamic_cast(const void*, const void*, const void*, int);
extern void* __cxa_allocate_exception(unsigned long size);
extern void __cxa_throw(void* exception, void* type_info, void* dest_fn);

/* Missing standard library functions */
extern int __printf_chk(int flag, const char *format, ...);
extern char unk_303A[];
extern char unk_3058[];
extern char unk_3074[];
extern char unk_3090[];
extern char unk_30AC[];
extern char unk_30C9[];
extern char unk_30E5[];
extern char unk_3101[];
extern char unk_311D[];

/* Missing typeinfo declarations */
extern void* typeinfo_for_int;
extern void* typeinfo_for_RTTIBase;
extern void* typeinfo_for_RTTIDerivedA;
extern void* typeinfo_for_RTTIDerivedB;

/* C++ standard library iostream init */
extern void* _ZStL8__ioinit;
extern void* _dso_handle;

/* Vtable pointers */
extern unsigned long long off_5920;
extern unsigned long long off_5958;
extern unsigned long long off_5998;
extern unsigned long long off_59D0;
extern unsigned long long off_5B08;
extern unsigned long long off_5B70;
extern unsigned long long off_5B38;
extern unsigned long long off_5AD0;
extern unsigned long long off_5AC0;
extern unsigned long long off_58A8;
extern unsigned long long off_58D8;
extern void* off_5B98;
extern void* off_5BC0;

/* Function: .init_proc @ 0x2000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = (long long (**)(void))&_gmon_start__;
 if ( &_gmon_start__ )
 return result;
 return result;
}


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


/* Function: sub_2150 @ 0x2150 */
void sub_2150()
{
 sub_2020();
}


/* Function: _Z18test_cpp_exceptionv @ 0x22A0 */
void test_cpp_exception(void)
{
 unsigned int *exception; // rax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: main @ 0x2367 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
 return 0;
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x2375 */
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x2489 */
long long test_cpp_member_func(void)
{
 char *v0; // rax
 char dest[32]; // [rsp+8h] [rbp-30h] BYREF
 unsigned long long v3; // [rsp+28h] [rbp-10h]

 v3 = __readfsqword(0x28u);
 v0 = strncpy(dest, "Test", 0x1Fu);
 dest[31] = 0;
 return (unsigned int)strlen(v0) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x24E3 */
long long test_cpp_constructor(void)
{
 return (unsigned int)(1001 * LifecycleClass_instance_count + 21);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x24F5 */
long long call_virtual_func(Base *a1)
{
 return (**(long long ( ***)(Base *))a1)(a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x24FE */
long long test_cpp_virtual_func(void)
{
 int v0; // ebx
 long long ( **v2)(Base *__hidden, int); // [rsp+0h] [rbp-28h] BYREF
 long long ( **v3)(Derived *__hidden, int); // [rsp+8h] [rbp-20h] BYREF
 int v4; // [rsp+10h] [rbp-18h]
 unsigned long long v5; // [rsp+18h] [rbp-10h]

 v5 = __readfsqword(0x28u);
 v4 = 3;
 v2 = (long long ( **)(Base *__hidden, int))&off_58A8;
 v3 = (long long ( **)(Derived *__hidden, int))&off_58D8;
 v0 = call_virtual_func((Base *)&v2);
 return v0 + (unsigned int)call_virtual_func((Base *)&v3) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x2571 */
long long test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x257B */
long long test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x2585 */
long long test_cpp_template_func(void)
{
 int v0; // ebx
 double v2; // [rsp+8h] [rbp-20h]
 int v3; // [rsp+10h] [rbp-18h] BYREF
 int v4; // [rsp+14h] [rbp-14h] BYREF
 unsigned long long v5; // [rsp+18h] [rbp-10h]

 v5 = __readfsqword(0x28u);
 v0 = template_max_int(3, 7);
 v3 = 10;
 v2 = template_max_double(2.5, 1.5);
 v4 = 20;
 template_swap_int((unsigned int *)&v3, (unsigned int *)&v4);
 return (unsigned int)(v4 + v3 + v0 + (int)v2);
}


/* Function: _Z23test_cpp_template_classv @ 0x2618 */
long long test_cpp_template_class(void)
{
 int v0; // eax
 unsigned int v2[10]; // [rsp+Ch] [rbp-3Ch] BYREF
 int v3; // [rsp+34h] [rbp-14h]
 unsigned long long v4; // [rsp+38h] [rbp-10h]

 v4 = __readfsqword(0x28u);
 v3 = 1;
 v2[0] = 10;
 Container_int_push(v2, 20);
 Container_int_push(v2, 30);
 v0 = 0;
 if ( v3 > 0 )
 v0 = v2[0];
 return (unsigned int)(v3 + v0 + 3);
}


/* Function: _Z15test_cpp_lambdav @ 0x268D */
long long test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z13test_cpp_rttiv @ 0x2697 */
long long test_cpp_rtti(void)
{
 long long v0; // ebx
 long long *v1; // r13
 unsigned long long *v2; // rax
 unsigned long long v3; // r14
 unsigned long long *v4; // rbp
 unsigned long long v5; // rax
 const char *v6; // r12
 long long v7; // ebx
 long long v8; // r12d

 v0 = 10;
 v1 = (long long *)operator_new(8u);
 *(unsigned long long *)v1 = (unsigned long long)off_5B98;
 v2 = (unsigned long long *)operator_new(8u);
 v3 = *v1;
 v4 = v2;
 *v2 = (unsigned long long)off_5BC0;
 v5 = *(unsigned long long *)(v3 - 8);
 v6 = *(const char **)(v5 + 8);
 if ( v6 != "12RTTIDerivedA" )
 {
 v0 = 0;
 if ( *v6 != 42 )
 v0 = strcmp(*(const char **)(v5 + 8), "12RTTIDerivedA") == 0 ? 0xA : 0;
 }
 v7 = v0 + 20;
 if ( __dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0) )
 {
 v7 += 100;
 }
 if ( __dynamic_cast(
 v4,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0) )
 {
 v7 += 200;
 }
 if ( *v6 == 42 )
 ++v6;
 v8 = v7 + strlen(v6);
 ((void (*)(void *))((char *)((uintptr_t)v3) + 8))((void *)v1);
 ((void (*)(void *))((char *)((uintptr_t)(*(unsigned long long *)v4)) + 8LL))((void *)v4);
 return v8;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x27AC */
long long test_cpp_smart_ptr(void)
{
 unsigned int *v0; // rax
 long long v1; // rax
 long long v3; // [rsp+0h] [rbp-38h] BYREF
 unsigned int *v4; // [rsp+8h] [rbp-30h] BYREF
 unsigned long long v5[5]; // [rsp+10h] [rbp-28h] BYREF

 v5[1] = __readfsqword(0x28u);
 v0 = (unsigned int *)operator_new(4u);
 v3 = 0;
 *v0 = 200;
 v4 = v0;
 v1 = (unsigned long long)operator_new_array(0x14u);
 v5[0] = v1;
 *(unsigned long long *)v1 = 0x200000001LL;
 *(unsigned long long *)(v1 + 8) = 0x400000003LL;
 *(unsigned int *)(v1 + 16) = 5;
 std_unique_ptr_int_array_destructor((void **)v5);
 std_unique_ptr_int_destructor((void **)&v4);
 std_unique_ptr_int_destructor((void **)&v3);
 return 703;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x287C */
long long test_cpp_diamond_inheritance(void)
{
 int v0; // eax
 unsigned int v1; // r12d
 unsigned long long v3[4]; // [rsp+8h] [rbp-50h] BYREF
 long long ( **v4)(DiamondDerived *__hidden); // [rsp+28h] [rbp-30h] BYREF
 int v5; // [rsp+30h] [rbp-28h]
 unsigned long long v6; // [rsp+38h] [rbp-20h]

 v6 = __readfsqword(0x28u);
 v5 = 50;
 v3[0] = (unsigned long long)&off_5B08;
 v4 = (long long ( **)(DiamondDerived *__hidden))&off_5B70;
 v3[2] = (unsigned long long)&off_5B70 - 7;
 v0 = virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&v4);
 v5 = 100;
 v1 = v0 + virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&v4);
 DiamondDerived_destructor((DiamondDerived *)v3);
 return v1;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x290D */
void test_cpp_oo_features(void)
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned int v6; // eax
 unsigned int v7; // eax
 unsigned int v8; // eax

 puts("Starting C++ OO features test");
 v0 = test_cpp_member_func();
 __printf_chk(1, unk_303A, v0);
 v1 = test_cpp_constructor();
 __printf_chk(1, unk_3058, v1);
 v2 = test_cpp_virtual_func();
 __printf_chk(1, unk_3074, v2);
 v3 = test_cpp_multiple_inheritance();
 __printf_chk(1, unk_3090, v3);
 v4 = test_cpp_diamond_inheritance();
 __printf_chk(1, unk_30AC, v4);
 v5 = test_cpp_operator_overload();
 __printf_chk(1, unk_30C9, v5);
 v6 = test_cpp_template_func();
 __printf_chk(1, unk_30E5, v6);
 v7 = test_cpp_template_class();
 __printf_chk(1, unk_3101, v7);
 v8 = test_cpp_lambda();
 __printf_chk(1, unk_311D, v8);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x2A58 */
long long Base_virtual_func(Base *this_ptr, int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x2A60 */
const char * Base_getName(Base *this_ptr)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x2A6C */
void Base_destructor(Base *this_ptr)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x2A72 */
long long Derived_virtual_func(Derived *this_ptr, int a2)
{
 return (unsigned int)(a2 * *((unsigned int *)this_ptr + 2));
}


/* Function: _ZNK7Derived7getNameEv @ 0x2A7E */
const char * Derived_getName(Derived *this_ptr)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x2A8A */
long long MultiDerived_funcA(MultiDerived *this_ptr)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x2A94 */
long long MultiDerived_funcB(MultiDerived *this_ptr)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x2A9E */
long long non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *this_ptr)
{
 return 40;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x2AA8 */
long long VirtualBase_func(VirtualBase *this_ptr)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x2AB2 */
void VirtualBase_destructor(VirtualBase *this_ptr)
{
 ;
}


/* Function: _ZN7MiddleA4funcEv @ 0x2AB8 */
long long MiddleA_func(MiddleA *this_ptr)
{
 return (unsigned int)(*(unsigned int *)((char *)this_ptr + *(unsigned long long *)(*(unsigned long long *)this_ptr - 24LL) + 8) + 150);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x2ACD */
long long virtual_thunk_to_MiddleA_func(MiddleA *this_ptr)
{
 return MiddleA_func((MiddleA *)((char *)this_ptr + *(unsigned long long *)(*(unsigned long long *)this_ptr - 24LL)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x2ADA */
long long MiddleB_func(MiddleB *this_ptr)
{
 return (unsigned int)(*(unsigned int *)((char *)this_ptr + *(unsigned long long *)(*(unsigned long long *)this_ptr - 24LL) + 8) + 200);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x2AEF */
long long virtual_thunk_to_MiddleB_func(MiddleB *this_ptr)
{
 return MiddleB_func((MiddleB *)((char *)this_ptr + *(unsigned long long *)(*(unsigned long long *)this_ptr - 24LL)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x2AFC */
long long DiamondDerived_func(DiamondDerived *this_ptr)
{
 return (unsigned int)(*(unsigned int *)((char *)this_ptr + *(unsigned long long *)(*(unsigned long long *)this_ptr - 24LL) + 8) + 250);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x2B11 */
long long virtual_thunk_to_DiamondDerived_func(DiamondDerived *this_ptr)
{
 return DiamondDerived_func((DiamondDerived *)((char *)this_ptr + *(unsigned long long *)(*(unsigned long long *)this_ptr - 24LL)));
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x2B1E */
long long non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *this_ptr)
{
 return DiamondDerived_func((DiamondDerived *)((char *)this_ptr - 16));
}


/* Function: _ZN7MiddleAD1Ev @ 0x2B28 */
void MiddleA_destructor(MiddleA *this_ptr)
{
 *(unsigned long long *)this_ptr = (unsigned long long)&off_5920;
 *((unsigned long long *)this_ptr + 2) = (unsigned long long)&off_5958;
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x2B3F */
void virtual_thunk_to_MiddleA_destructor(MiddleA *this_ptr)
{
 unsigned long long *v1; // rdi

 v1 = (unsigned long long *)((char *)this_ptr + *(unsigned long long *)(*(unsigned long long *)this_ptr - 32LL));
 *v1 = (unsigned long long)&off_5920;
 v1[2] = (unsigned long long)&off_5958;
}


/* Function: _ZN7MiddleBD1Ev @ 0x2B5E */
void MiddleB_destructor(MiddleB *this_ptr)
{
 *(unsigned long long *)this_ptr = (unsigned long long)&off_5998;
 *((unsigned long long *)this_ptr + 2) = (unsigned long long)&off_59D0;
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x2B75 */
void virtual_thunk_to_MiddleB_destructor(MiddleB *this_ptr)
{
 unsigned long long *v1; // rdi

 v1 = (unsigned long long *)((char *)this_ptr + *(unsigned long long *)(*(unsigned long long *)this_ptr - 32LL));
 *v1 = (unsigned long long)&off_5998;
 v1[2] = (unsigned long long)&off_59D0;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x2B94 */
long long RTTIDerivedA_getType(RTTIDerivedA *this_ptr)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x2B9E */
long long RTTIDerivedB_getType(RTTIDerivedB *this_ptr)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x2BA8 */
void RTTIDerivedB_destructor(RTTIDerivedB *this_ptr)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x2BAE */
void RTTIDerivedA_destructor(RTTIDerivedA *this_ptr)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x2BB4 */
void MultiDerived_destructor(MultiDerived *this_ptr)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x2BB9 */
void non_virtual_thunk_to_MultiDerived_destructor(MultiDerived *this_ptr)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x2BBE */
void Derived_destructor(Derived *this_ptr)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x2BC4 */
void Base_destructor_delete(Base *this_ptr)
{
 operator_delete(this_ptr, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x2BD2 */
void Derived_destructor_delete(Derived *this_ptr)
{
 operator_delete(this_ptr, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x2BE0 */
void MultiDerived_destructor_delete(MultiDerived *this_ptr)
{
 operator_delete(this_ptr, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x2BEE */
void non_virtual_thunk_to_MultiDerived_destructor_delete(MultiDerived *this_ptr)
{
 MultiDerived_destructor((MultiDerived *)((char *)this_ptr - 16));
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x2BF8 */
void VirtualBase_destructor_delete(VirtualBase *this_ptr)
{
 operator_delete(this_ptr, 0x10u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x2C06 */
void RTTIDerivedB_destructor_delete(RTTIDerivedB *this_ptr)
{
 operator_delete(this_ptr, 8u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x2C14 */
void RTTIDerivedA_destructor_delete(RTTIDerivedA *this_ptr)
{
 operator_delete(this_ptr, 8u);
}


/* Function: _ZN7MiddleAD0Ev @ 0x2C22 */
void MiddleA_destructor_delete(MiddleA *this_ptr)
{
 *(unsigned long long *)this_ptr = (unsigned long long)&off_5920;
 *((unsigned long long *)this_ptr + 2) = (unsigned long long)&off_5958;
 operator_delete(this_ptr, 0x20u);
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x2C42 */
void virtual_thunk_to_MiddleA_destructor_delete(MiddleA *this_ptr)
{
 MiddleA_destructor((MiddleA *)((char *)this_ptr + *(unsigned long long *)(*(unsigned long long *)this_ptr - 32LL)));
}


/* Function: _ZN7MiddleBD0Ev @ 0x2C50 */
void MiddleB_destructor_delete(MiddleB *this_ptr)
{
 *(unsigned long long *)this_ptr = (unsigned long long)&off_5998;
 *((unsigned long long *)this_ptr + 2) = (unsigned long long)&off_59D0;
 operator_delete(this_ptr, 0x20u);
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x2C70 */
void virtual_thunk_to_MiddleB_destructor_delete(MiddleB *this_ptr)
{
 MiddleB_destructor((MiddleB *)((char *)this_ptr + *(unsigned long long *)(*(unsigned long long *)this_ptr - 32LL)));
}


/* Function: _ZN7MiddleAD4Ev @ 0x2C7E */
void MiddleA_destructor_complete(MiddleA *this_ptr, int a2, long long ( ***a3)(void))
{
 long long ( **v3)(void); // rax
 long long ( **v4)(void); // r8
 long long v5; // rcx

 v3 = (long long ( **)(void))(unsigned long long)&off_5920;
 if ( !a2 )
 v3 = *a3;
 *(unsigned long long *)this_ptr = (unsigned long long)v3;
 v4 = (long long ( **)(void))(unsigned long long)&off_5958;
 v5 = 16;
 if ( !a2 )
 {
 v4 = a3[1];
 v5 = (long long)*(v3 - 3);
 }
 *(unsigned long long *)((char *)this_ptr + v5) = (unsigned long long)v4;
}


/* Function: _ZN7MiddleAD2Ev @ 0x2CB0 */
void MiddleA_destructor_base(MiddleA *this_ptr, long long ( ***a2)(void))
{
 MiddleA_destructor_complete(this_ptr, 0, a2);
}


/* Function: _ZN7MiddleBD4Ev @ 0x2CBE */
void MiddleB_destructor_complete(MiddleB *this_ptr, int a2, long long ( ***a3)(void))
{
 long long ( **v3)(void); // rax
 long long ( **v4)(void); // r8
 long long v5; // rcx

 v3 = (long long ( **)(void))(unsigned long long)&off_5998;
 if ( !a2 )
 v3 = *a3;
 *(unsigned long long *)this_ptr = (unsigned long long)v3;
 v4 = (long long ( **)(void))(unsigned long long)&off_59D0;
 v5 = 16;
 if ( !a2 )
 {
 v4 = a3[1];
 v5 = (long long)*(v3 - 3);
 }
 *(unsigned long long *)((char *)this_ptr + v5) = (unsigned long long)v4;
}


/* Function: _ZN7MiddleBD2Ev @ 0x2CF0 */
void MiddleB_destructor_base(MiddleB *this_ptr, long long ( ***a2)(void))
{
 MiddleB_destructor_complete(this_ptr, 0, a2);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2CFE */
long long template_max_int(unsigned int a1, unsigned int a2)
{
 long long result; // rax

 result = a2;
 if ( (int)a1 >= (int)a2 )
 return a1;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2D0A */
double template_max_double(double a1, double a2)
{
 return fmax(a1, a2);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x2D13 */
long long template_swap_int(unsigned int *a1, unsigned int *a2)
{
 long long result; // rax

 result = (unsigned int)*a1;
 *a1 = *a2;
 *a2 = result;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x2D20 */
void Container_int_Constructor(long long a1)
{
 *(unsigned int *)(a1 + 40) = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x2D2C */
long long Container_int_push(long long a1, int a2)
{
 long long result; // rax

 result = *(int *)(a1 + 40);
 if ( (int)result <= 9 )
 {
 *(unsigned int *)(a1 + 40) = result + 1;
 *(unsigned int *)(a1 + 4 * result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x2D44 */
long long Container_int_get(long long a1, int a2)
{
 long long result; // rax

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x2D5A */
long long Container_int_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x2D62 */
void Container_double_Constructor(long long a1)
{
 *(unsigned int *)(a1 + 80) = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x2D6E */
long long Container_double_push(long long a1, double a2)
{
 long long result; // rax

 result = *(int *)(a1 + 80);
 if ( (int)result <= 9 )
 {
 *(unsigned int *)(a1 + 80) = result + 1;
 *(double *)(a1 + 8 * result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x2D88 */
double Container_double_get(long long a1, int a2)
{
 double result; // xmm0_8

 result = 0.0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2DA2 */
long long Container_double_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x2DAA */
void std_unique_ptr_int_destructor(void **a1)
{
 void *v1; // rdi

 v1 = *a1;
 if ( v1 )
 operator_delete(v1, 4u);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x2DC2 */
void std_unique_ptr_int_array_destructor(void **a1)
{
 void *v1; // rdi

 v1 = *a1;
 if ( v1 )
 operator_delete_array(v1);
}


/* Function: _ZN14DiamondDerivedD4Ev @ 0x2DD4 */
void DiamondDerived_destructor_complete(
 DiamondDerived *this_ptr,
 int a2,
 long long ( ***a3)(void))
{
 long long ( **v3)(void); // rax
 long long ( **v7)(void); // rcx
 long long v8; // rdx
 long long ( **v9)(void); // rax
 MiddleB *v10; // rdi
 long long ( ***v11)(void); // rsi
 long long ( ***v12)(void); // rsi

 v3 = (long long ( **)(void))(unsigned long long)&off_5B08;
 if ( !a2 )
 v3 = *a3;
 *(unsigned long long *)this_ptr = (unsigned long long)v3;
 v7 = (long long ( **)(void))(unsigned long long)&off_5B70;
 v8 = 32;
 if ( !a2 )
 {
 v7 = a3[5];
 v8 = (long long)*(v3 - 3);
 }
 *(unsigned long long *)((char *)this_ptr + v8) = (unsigned long long)v7;
 v9 = (long long ( **)(void))(unsigned long long)&off_5B38;
 if ( !a2 )
 v9 = a3[6];
 *((unsigned long long *)this_ptr + 2) = (unsigned long long)v9;
 v10 = (MiddleB *)((char *)this_ptr + 16);
 v11 = (long long ( ***)(void))(unsigned long long)&off_5AD0;
 if ( !a2 )
 v11 = a3 + 3;
 MiddleB_destructor_base(v10, v11);
 v12 = (long long ( ***)(void))(unsigned long long)&off_5AC0;
 if ( !a2 )
 v12 = a3 + 1;
 MiddleA_destructor_base((MiddleA *)this_ptr, v12);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2E5E */
void DiamondDerived_destructor(DiamondDerived *this_ptr)
{
 DiamondDerived_destructor_complete(this_ptr, 2, 0);
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x2E6E */
void non_virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *this_ptr)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)this_ptr - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x2E78 */
void virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *this_ptr)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)this_ptr + *(unsigned long long *)(*(unsigned long long *)this_ptr - 32LL)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x2E86 */
void DiamondDerived_destructor_delete(DiamondDerived *this_ptr)
{
 DiamondDerived_destructor(this_ptr);
 operator_delete(this_ptr, 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x2EAB */
void non_virtual_thunk_to_DiamondDerived_destructor_delete(DiamondDerived *this_ptr)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)this_ptr - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2EB5 */
void virtual_thunk_to_DiamondDerived_destructor_delete(DiamondDerived *this_ptr)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)this_ptr + *(unsigned long long *)(*(unsigned long long *)this_ptr - 32LL)));
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x2EC2 */
void DiamondDerived_destructor_base(
 DiamondDerived *this_ptr,
 long long ( ***a2)(void))
{
 DiamondDerived_destructor_complete(this_ptr, 0, a2);
}


/* Function: .term_proc @ 0x2ED0 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __printf_chk @ 0x6048 */

/* FAILED to decompile: _Znam @ 0x6050 */

/* FAILED to decompile: __cxa_begin_catch @ 0x6058 */

/* FAILED to decompile: strlen @ 0x6060 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x6068 */

/* FAILED to decompile: strncpy @ 0x6070 */

/* FAILED to decompile: __libc_start_main @ 0x6080 */

/* FAILED to decompile: __cxa_atexit @ 0x6088 */

/* FAILED to decompile: _Znwm @ 0x6090 */

/* FAILED to decompile: _ZdlPvm @ 0x6098 */

/* FAILED to decompile: __stack_chk_fail @ 0x60A0 */

/* FAILED to decompile: __dynamic_cast @ 0x60A8 */

/* FAILED to decompile: _ZdaPv @ 0x60B0 */

/* FAILED to decompile: strcmp @ 0x60C0 */

/* FAILED to decompile: __cxa_rethrow @ 0x60C8 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x60D0 */

/* FAILED to decompile: puts @ 0x60D8 */

/* FAILED to decompile: __cxa_end_catch @ 0x60E0 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x60E8 */

/* FAILED to decompile: __cxa_throw @ 0x60F0 */

/* FAILED to decompile: _Unwind_Resume @ 0x6100 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x6108 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6110 */

/* FAILED to decompile: __gmon_start__ @ 0x6120 */

/* Total functions decompiled: 107, failed: 24 */
