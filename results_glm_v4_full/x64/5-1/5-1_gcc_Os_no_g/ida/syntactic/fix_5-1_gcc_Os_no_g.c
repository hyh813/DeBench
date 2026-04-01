/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_gcc_Os_no_g
 * Processor: pc
 */

/* Forward declarations for C++ classes used in decompiled code */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

#include <string.h>
#include <stdio.h>
#include <typeinfo>
#include <cxxabi.h>
#include <stdint.h>
#include <new>
#include <cmath>
extern "C" int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);

#define JUMPOUT(x) __builtin_unreachable()

/* Forward declarations for std types */
namespace std {
    class ios_base {
    public:
        class Init {
        public:
            Init();
            ~Init();
        };
    };
}

/* External symbol declarations */
extern void *_dso_handle;
extern void *_gmon_start__;
extern const char *s;
extern const char *unk_303A;
extern const char *unk_3058;
extern const char *unk_3074;
extern const char *unk_3090;
extern const char *unk_30AC;
extern const char *unk_30C9;
extern const char *unk_30E5;
extern const char *unk_3101;
extern const char *unk_311D;
extern const struct type_info typeinfo_for_int;
extern const struct type_info typeinfo_for_RTTIBase;
extern const struct type_info typeinfo_for_RTTIDerivedA;
extern const struct type_info typeinfo_for_RTTIDerivedB;

/* Struct definitions for incomplete types */
struct Base {
    long long *vtable;  /* Virtual function table pointer */
};

struct LifecycleClass {
    static int instance_count;
};

struct DiamondDerived {
    long long *vtable0;  /* Primary vtable pointer */
    long long *vtable1;  /* Secondary vtable pointer */
    long long *vtable2;  /* Tertiary vtable pointer */
    unsigned int data;   /* Data member */
};

/* unique_ptr type definitions */
typedef struct std_unique_ptr_int {
    void *ptr;
} std_unique_ptr_int;

typedef struct std_unique_ptr_int_array {
    void *ptr;
} std_unique_ptr_int_array;

/* Function declarations */
unsigned long long __readfsqword(unsigned long long offset);

/* Offset variable declarations */
extern void *off_58A8;
extern void *off_58D8;
extern void *off_5920;
extern void *off_5958;
extern void *off_5998;
extern void *off_59D0;
extern void *off_5B08;
extern void *off_5B38;
extern void *off_5B70;
extern void *off_5B98;
extern void *off_5BC0;
extern void *off_5AD0;
extern void *off_5AC0;

/* Global variable for std::ios_base::Init */
static std::ios_base::Init __ioinit;

/* Function declarations */
void test_cpp_oo_features(void);
long long Container_int_push(void *a1, int a2);
void std_unique_ptr_int_dtor(std_unique_ptr_int *a1);
void std_unique_ptr_int_array_dtor(std_unique_ptr_int_array *a1);
long long virtual_thunk_to_DiamondDerived_func(DiamondDerived *self);
void DiamondDerived_dtor(DiamondDerived *self);

/* Template function declarations */
long long template_max_int(unsigned int a1, unsigned int a2);
double template_max_double(double a1, double a2);
long long template_swap_int(unsigned int *a1, unsigned int *a2);

/* Function: .init_proc @ 0x2000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = (long long (**)(void))&_gmon_start__;
 if ( &_gmon_start__ )
 return (long long (**)(void))((long long (*)(void))_gmon_start__)();
 return result;
}


/* Function: sub_2020 @ 0x2020 */
void sub_2020()
{
 __builtin_unreachable();
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

 exception = (unsigned int *)__cxxabiv1::__cxa_allocate_exception(4u);
 *exception = 42;
 __cxxabiv1::__cxa_throw(exception, &typeinfo_for_int, 0);
}


/* Function: main @ 0x2367 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
 return 0;
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x2375 */
static void ios_init_dtor_wrapper(void *arg) {
    static_cast<std::ios_base::Init*>(arg)->~Init();
}

int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 std::ios_base::Init *v1 = &__ioinit;
 v1->std::ios_base::Init::~Init();
 new (&__ioinit) std::ios_base::Init();
 return __cxa_atexit(ios_init_dtor_wrapper, &__ioinit, &_dso_handle);
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
 return (unsigned int)(1001 * LifecycleClass::instance_count + 21);
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
 v2 = (long long (**)(Base *, int))&off_58A8;
 v3 = (long long (**)(Derived *, int))&off_58D8;
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
 template_swap_int(reinterpret_cast<unsigned int *>(&v3), reinterpret_cast<unsigned int *>(&v4));
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
 int v0; // ebx
 long long *v1; // r13
 unsigned long long *v2; // rax
 long long v3; // r14
 const void *v4; // rbp
 long long v5; // rax
 const char *v6; // r12
 int v7; // ebx
 unsigned int v8; // r12d

 v0 = 10;
 v1 = (long long *)operator new(8u);
 *v1 = (unsigned long long)(uintptr_t)off_5B98;
 v2 = (unsigned long long *)operator new(8u);
 v3 = *v1;
 v4 = v2;
*v2 = (unsigned long long)(uintptr_t)off_5BC0;
v5 = *(unsigned long long*)(v3 - 8);
v6 = static_cast<const std::type_info*>(reinterpret_cast<const void*>(v5))->name();
if ( v6 != "12RTTIDerivedA" )
{
v0 = 0;
if ( *v6 != 42 )
v0 = strcmp((const char *)((unsigned long long *)v5)[1], "12RTTIDerivedA") == 0 ? 0xA : 0;
}
v7 = v0 + 20;
if ( __cxxabiv1::__dynamic_cast(
v1,
reinterpret_cast<__cxxabiv1::__class_type_info*>(const_cast<std::type_info*>(reinterpret_cast<const std::type_info*>(&typeinfo_for_RTTIBase))),
reinterpret_cast<__cxxabiv1::__class_type_info*>(const_cast<std::type_info*>(reinterpret_cast<const std::type_info*>(&typeinfo_for_RTTIDerivedA))),
0) )
 {
 v7 += 100;
 }
if ( __cxxabiv1::__dynamic_cast(
v4,
reinterpret_cast<__cxxabiv1::__class_type_info*>(const_cast<std::type_info*>(reinterpret_cast<const std::type_info*>(&typeinfo_for_RTTIBase))),
reinterpret_cast<__cxxabiv1::__class_type_info*>(const_cast<std::type_info*>(reinterpret_cast<const std::type_info*>(&typeinfo_for_RTTIDerivedB))),
0) )
 {
 v7 += 200;
 }
 if ( *v6 == 42 )
 ++v6;
 v8 = v7 + strlen(v6);
 (*(void ( **)(long long *))(v3 + 8))(v1);
 (*(void ( **)(const void *))(*(unsigned long long *)v4 + 8LL))(v4);
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
 v0 = (unsigned int *)(unsigned long long)operator new(4u);
 v3 = 0;
 *v0 = 200;
 v4 = v0;
 v1 = operator new[](0x14u);
 v5[0] = (unsigned long long)(uintptr_t)v1;
 *(unsigned long long *)v1 = 0x200000001LL;
 *(unsigned long long *)(v1 + 8) = 0x400000003LL;
 *(unsigned int *)(v1 + 16) = 5;
 std_unique_ptr_int_array_dtor(reinterpret_cast<std_unique_ptr_int_array*>(v5));
 std_unique_ptr_int_dtor(reinterpret_cast<std_unique_ptr_int*>(&v4));
 std_unique_ptr_int_dtor(reinterpret_cast<std_unique_ptr_int*>(&v3));
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
v3[0] = (unsigned long long)(uintptr_t)&off_5B08;
v4 = (long long ( **)(DiamondDerived *__hidden))&off_5B70;
v3[2] = (unsigned long long)(uintptr_t)&off_5B70 - 7;
v0 = static_cast<unsigned int>(virtual_thunk_to_DiamondDerived_func((DiamondDerived*)(uintptr_t)&v4));
 v5 = 100;
 v1 = v0 + virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&v4);
 DiamondDerived_dtor((DiamondDerived *)v3);
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

 puts(s);
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
long long Base_virtual_func(Base *self, int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x2A60 */
const char * Base_getName(Base *self)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x2A6C */
void Base_dtor(Base *self)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x2A72 */
long long Derived_virtual_func(Derived *self, int a2)
{
 return (unsigned int)(a2 * *((unsigned int *)self + 2));
}


/* Function: _ZNK7Derived7getNameEv @ 0x2A7E */
const char * Derived_getName(Derived *self)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x2A8A */
long long MultiDerived_funcA(MultiDerived *self)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x2A94 */
long long MultiDerived_funcB(MultiDerived *self)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x2A9E */
long long non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *self)
{
 return 40;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x2AA8 */
long long VirtualBase_func(VirtualBase *self)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x2AB2 */
void VirtualBase_dtor(VirtualBase *self)
{
 ;
}


/* Function: _ZN7MiddleA4funcEv @ 0x2AB8 */
long long MiddleA_func(MiddleA *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL) + 8) + 150);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x2ACD */
long long virtual_thunk_to_MiddleA_func(MiddleA *self)
{
 return MiddleA_func((MiddleA *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x2ADA */
long long MiddleB_func(MiddleB *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL) + 8) + 200);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x2AEF */
long long virtual_thunk_to_MiddleB_func(MiddleB *self)
{
 return MiddleB_func((MiddleB *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x2AFC */
long long DiamondDerived_func(DiamondDerived *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL) + 8) + 250);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x2B11 */
long long virtual_thunk_to_DiamondDerived_func(DiamondDerived *self)
{
 return DiamondDerived_func((DiamondDerived *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL)));
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x2B1E */
long long non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *self)
{
 return DiamondDerived_func((DiamondDerived *)((char *)self - 16));
}


/* Function: _ZN7MiddleAD1Ev @ 0x2B28 */
void MiddleA_dtor(MiddleA *self)
{
 *(unsigned long long *)self = (unsigned long long)&off_5920;
 *((unsigned long long *)self + 2) = (unsigned long long)&off_5958;
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x2B3F */
void virtual_thunk_to_MiddleA_dtor(MiddleA *self)
{
 unsigned long long *v1; // rdi
 v1 = (unsigned long long *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 32LL));
 *v1 = &off_5920;
 v1[2] = &off_5958;
}


/* Function: _ZN7MiddleBD1Ev @ 0x2B5E */
void MiddleB_dtor(MiddleB *self)
{
 *(unsigned long long *)self = (unsigned long long)&off_5998;
 *((unsigned long long *)self + 2) = (unsigned long long)&off_59D0;
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x2B75 */
void virtual_thunk_to_MiddleB_dtor(MiddleB *self)
{
 unsigned long long *v1; // rdi
 v1 = (unsigned long long *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 32LL));
 *v1 = &off_5998;
 v1[2] = &off_59D0;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x2B94 */
long long RTTIDerivedA_getType(RTTIDerivedA *self)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x2B9E */
long long RTTIDerivedB_getType(RTTIDerivedB *self)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x2BA8 */
void RTTIDerivedB_dtor(RTTIDerivedB *self)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x2BAE */
void RTTIDerivedA_dtor(RTTIDerivedA *self)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x2BB4 */
void MultiDerived_dtor(MultiDerived *self)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x2BB9 */
void non_virtual_thunk_to_MultiDerived_dtor(MultiDerived *self)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x2BBE */
void Derived_dtor(Derived *self)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x2BC4 */
void Base_dtor0(Base *self)
{
 operator delete(self, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x2BD2 */
void Derived_dtor0(Derived *self)
{
 operator delete(self, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x2BE0 */
void MultiDerived_dtor0(MultiDerived *self)
{
 operator delete(self, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x2BEE */
void non_virtual_thunk_to_MultiDerived_dtor0(MultiDerived *self)
{
 MultiDerived_dtor((MultiDerived *)((char *)self - 16));
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x2BF8 */
void VirtualBase_dtor0(VirtualBase *self)
{
 operator delete(self, 0x10u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x2C06 */
void RTTIDerivedB_dtor0(RTTIDerivedB *self)
{
 operator delete(self, 8u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x2C14 */
void RTTIDerivedA_dtor0(RTTIDerivedA *self)
{
 operator delete(self, 8u);
}


/* Function: _ZN7MiddleAD0Ev @ 0x2C22 */
void MiddleA_dtor0(MiddleA *self)
{
 *(unsigned long long *)self = (unsigned long long)&off_5920;
 *((unsigned long long *)self + 2) = (unsigned long long)&off_5958;
 operator delete(self, 0x20u);
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x2C42 */
void virtual_thunk_to_MiddleA_dtor0(MiddleA *self)
{
 MiddleA_dtor((MiddleA *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 32LL)));
}


/* Function: _ZN7MiddleBD0Ev @ 0x2C50 */
void MiddleB_dtor0(MiddleB *self)
{
 *(unsigned long long *)self = (unsigned long long)&off_5998;
 *((unsigned long long *)self + 2) = (unsigned long long)&off_59D0;
 operator delete(self, 0x20u);
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x2C70 */
void virtual_thunk_to_MiddleB_dtor0(MiddleB *self)
{
 MiddleB_dtor((MiddleB *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 32LL)));
}


/* Function: _ZN7MiddleAD4Ev @ 0x2C7E */
void MiddleA_dtor4(MiddleA *self, int a2, long long ( ***a3)(MiddleA *__hidden))
{
 void *v3; // rax
 void *v4; // r8
 long long v5; // rcx

 v3 = &off_5920;
 if ( !a2 )
 v3 = *a3;
 *(unsigned long long *)self = reinterpret_cast<unsigned long long>(v3);
 v4 = &off_5958;
 v5 = 16;
 if ( !a2 )
 {
 v4 = (void *)a3[1];
 v5 = (long long)*(char *)((uintptr_t)(unsigned long long)v3 - 3);
 }
 *(unsigned long long *)((char *)self + v5) = (unsigned long long)v4;
}


/* Function: _ZN7MiddleAD2Ev @ 0x2CB0 */
void MiddleA_dtor2(MiddleA *self, long long ( ***a2)(MiddleA *__hidden))
{
 MiddleA_dtor4(self, 0, a2);
}


/* Function: _ZN7MiddleBD4Ev @ 0x2CBE */
void MiddleB_dtor4(MiddleB *self, int a2, long long ( ***a3)(MiddleB *__hidden))
{
 void *v3; // rax
 void *v4; // r8
 long long v5; // rcx

 v3 = &off_5998;
 if ( !a2 )
 v3 = *a3;
 *(unsigned long long *)self = reinterpret_cast<unsigned long long>(v3);
 v4 = &off_59D0;
 v5 = 16;
 if ( !a2 )
 {
 v4 = (void *)a3[1];
 v5 = (long long)*(char *)((uintptr_t)(unsigned long long)v3 - 3);
 }
 *(unsigned long long *)((char *)self + v5) = (unsigned long long)v4;
}


/* Function: _ZN7MiddleBD2Ev @ 0x2CF0 */
void MiddleB_dtor2(MiddleB *self, long long ( ***a2)(MiddleB *__hidden))
{
 MiddleB_dtor4(self, 0, a2);
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
void Container_int_ctor(void *a1)
{
 *(unsigned int *)((char *)a1 + 40) = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x2D2C */
long long Container_int_push(void *a1, int a2)
{
 long long result; // rax

 result = *(int *)((char *)a1 + 40);
 if ( (int)result <= 9 )
 {
 *(unsigned int *)((char *)a1 + 40) = result + 1;
 *(unsigned int *)((char *)a1 + 4 * result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x2D44 */
long long Container_int_get(void *a1, int a2)
{
 long long result; // rax

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)((char *)a1 + 40) > a2 )
 return *(unsigned int *)((char *)a1 + 4LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x2D5A */
long long Container_int_getSize(void *a1)
{
 return *(unsigned int *)((char *)a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x2D62 */
void Container_double_ctor(void *a1)
{
 *(unsigned int *)((char *)a1 + 80) = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x2D6E */
long long Container_double_push(void *a1, double a2)
{
 long long result; // rax

 result = *(int *)((char *)a1 + 80);
 if ( (int)result <= 9 )
 {
 *(unsigned int *)((char *)a1 + 80) = result + 1;
 *(double *)((char *)a1 + 8 * result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x2D88 */
double Container_double_get(void *a1, int a2)
{
 double result; // xmm0_8

 result = 0.0;
 if ( a2 >= 0 && *(unsigned int *)((char *)a1 + 80) > a2 )
 return *(double *)((char *)a1 + 8LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2DA2 */
long long Container_double_getSize(void *a1)
{
 return *(unsigned int *)((char *)a1 + 80);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x2DAA */
void std_unique_ptr_int_dtor(std_unique_ptr_int *a1)
{
 void *v1; // rdi

 v1 = a1->ptr;
 if ( v1 )
 operator delete(v1, 4u);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x2DC2 */
void std_unique_ptr_int_array_dtor(std_unique_ptr_int_array *a1)
{
 void *v1; // rdi

 v1 = a1->ptr;
 if ( v1 )
 operator delete[](v1);
}


/* Function: _ZN14DiamondDerivedD4Ev @ 0x2DD4 */
void DiamondDerived_dtor4(
 DiamondDerived *self,
 int a2,
 long long ( ***a3)(DiamondDerived *__hidden))
{
void *v3; // rax
void *v7; // rcx
long long v8; // rdx
void *v9; // rax
long long **v10; // rsi
long long **v11; // rsi
long long **v12; // rsi

v3 = off_5B08;
if ( !a2 )
v3 = *a3;
*(unsigned long long *)self = (unsigned long long)(uintptr_t)v3;
v7 = off_5B70;
v8 = 32;
if ( !a2 )
{
v7 = reinterpret_cast<unsigned long long>(a3[5]);
v8 = (long long)*(char *)((uintptr_t)(unsigned long long)v3 - 3);
}
*(unsigned long long *)((char *)self + v8) = reinterpret_cast<uintptr_t>(v7);
v9 = off_5B38;
if ( !a2 )
v9 = reinterpret_cast<unsigned long long>(a3[6]);
*((unsigned long long *)self + 2) = (unsigned long long)v9;
v10 = reinterpret_cast<long long **>((char *)self + 16);
MiddleB_dtor2(reinterpret_cast<MiddleB *>(v10), reinterpret_cast<long long (***)(MiddleB *)>(off_5AD0));
v12 = reinterpret_cast<long long **>(off_5AC0);
if ( !a2 )
    v12 = reinterpret_cast<long long **>(a3 + 1);
MiddleA_dtor2((MiddleA *)self, reinterpret_cast<long long (***)(MiddleA *)>(v12));
MiddleA_dtor2((MiddleA *)self, reinterpret_cast<long long (***)(MiddleA *)>(off_5AC0));
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2E5E */
void DiamondDerived_dtor(DiamondDerived *self)
{
 DiamondDerived_dtor4(self, 2, 0);
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x2E6E */
void non_virtual_thunk_to_DiamondDerived_dtor(DiamondDerived *self)
{
 DiamondDerived_dtor((DiamondDerived *)((char *)self - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x2E78 */
void virtual_thunk_to_MiddleB_dtor(DiamondDerived *self)
{
 DiamondDerived_dtor((DiamondDerived *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 32LL)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x2E86 */
void DiamondDerived_dtor0(DiamondDerived *self)
{
 DiamondDerived_dtor4(self, 0, 0);
 operator delete(self, 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x2EAB */
void non_virtual_thunk_to_DiamondDerived_dtor0(DiamondDerived *self)
{
 DiamondDerived_dtor4((DiamondDerived *)((char *)self - 16), 0, 0);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2EB5 */
void virtual_thunk_to_DiamondDerived_dtor0(DiamondDerived *self)
{
 DiamondDerived_dtor4((DiamondDerived *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 32LL)), 0, 0);
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x2EC2 */
void DiamondDerived_dtor2(
 DiamondDerived *self,
 long long ( ***a2)(DiamondDerived *__hidden))
{
 DiamondDerived_dtor4(self, 0, a2);
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
