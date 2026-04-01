/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_gcc_Os_g
 * Processor: pc
 */

#include <ios>
#include <cxxabi.h>
#include <exception>
#include <stdint.h>
#include <cstring>

/* Forward declarations and macros */
extern void *_gmon_start__;
extern void *_dso_handle;

/* Forward declarations for vtable offsets */
extern void *off_58A8;
extern void *off_58D8;
extern void *off_5920;
extern void *off_5958;
;
extern void *off_5998;
extern void *off_59D0;
extern void *off_5B08;
extern void *off_5B38;
extern void *off_5B70;
extern void *off_5B98;
extern void *off_5BC0;
extern void *off_5AD0;
extern void *off_5AC0;

/* Forward declarations for structs */
struct SimpleClass {
    char name[32];
};

struct LifecycleClass {
    static int instance_count;
};

struct Base {
    int (**_vptr_Base)(...);
};

struct Derived {
    int (**_vptr_Base)(...);
    int multiplier;
};

struct MultiDerived {
    int (**_vptr_Base)(...);
    int data[8];
};

struct VirtualBase {
    int (**_vptr_VirtualBase)(...);
    int dataA;
};

struct MiddleA {
    int (**_vptr_MiddleA)(...);
    long long dataA;
};

struct MiddleB {
    int (**_vptr_MiddleB)(...);
    int dataB;
};

struct DiamondDerived {
    int (**_vptr_MiddleA)(...);
    long long dataA;
    int (**_vptr_MiddleB)(...);
    long long dataB;
};

/* Forward declarations for functions */
void DiamondDerived_D2(DiamondDerived *const self, const void **const __vtt_parm);
void DiamondDerived_D0(DiamondDerived *const self);
void MiddleA_D2(MiddleA *const self, const void **const __vtt_parm);
void MiddleB_D2(MiddleB *const self, const void **const __vtt_parm);
void DiamondDerived_D1(DiamondDerived *const self, const void **const __vtt_parm);
void MiddleA_D4(MiddleA *const self, const int __inchar, const void **const __vtt_parm);
void MiddleB_D4(MiddleB *const self, const int __in_chrg, const void **const __vtt_parm);
int template_max_int(int a, int b);
void Container_int_push(Container_int *const self, int value);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

struct RTTIBase {
    int (**_vptr_RTITIBase)(...);
};

struct RTTIDerivedA {
    int (**_vptr_RTITIBase)(...);
};

struct RTTIDerivedB {
    int (**_vptr_RTITIBase)(...);
};

struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

struct std_unique_ptr_int {
    struct {
        struct {
            int *_M_head_impl;
            char gap0[8];
        } _M_t;
    } _M_t;
};

struct std_unique_ptr_int_array {
    struct {
        struct {
            int *_M_head_impl;
            char gap0[8];
        } _M_t;
    } _M_t;
};

extern unsigned long long __readfsqword(unsigned long);
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso);
namespace std { extern ios_base::Init __ioinit; }
extern const struct type_info *typeinfo_for_int;
extern const struct type_info *typeinfo_for_RTITIBase;
extern const struct type_info *typeinfo_for_RTITIDerivedA;
extern const struct type_info *typeinfo_for_RTITIDerivedB;
void test_cpp_oo_features(void);
#define JUMPOUT(x) do { } while(0)


/* .init_proc 2000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = (long long (**)(void))&_gmon_start__;
 if ( _gmon_start__ )
 return (long long (**)(void))(*(long long (**)(void))_gmon_start__)();
 return result;
}


/* sub_2020 2020 */
void sub_2020()
{
 JUMPOUT(0);
}


/* sub_2030 2030 */
void sub_2030()
{
 sub_2020();
}


/* sub_2040 2040 */
void sub_2040()
{
 sub_2020();
}


/* sub_2050 2050 */
void sub_2050()
{
 sub_2020();
}


/* sub_2060 2060 */
void sub_2060()
{
 sub_2020();
}


/* sub_2070 2070 */
void sub_2070()
{
 sub_2020();
}


/* sub_2080 2080 */
void sub_880()
{
 sub_2020();
}


/* sub_2090 2090 */
void sub_2090()
{
 sub_2020();
}


/* sub_20A0 20A0 */
void sub_20A0()
{
 sub_2020();
}


/* sub_20B0 20B0 */
void sub_20B0()
{
 sub_2020();
}


/* sub_20C0 20C0 */
void sub_20C0()
{
 sub_2020();
}


/* sub_20D0 20D0 */
void sub_20D0()
{
 sub_2020();
}


/* sub_20E0 20E0 */
void sub_20E0()
{
 sub_2020();
}


/* sub_20F0 20F0 */
void sub_20F0()
{
 sub_2020();
}


/* sub_2100 2100 */
void sub_2100()
{
 sub_2020();
}


/* sub_2110 2110 */
void sub_2110()
{
 sub_2020();
}


/* sub_2120 2120 */
void sub_2120()
{
 sub_2020();
}


/* sub_2130 2130 */
void sub_2130()
{
 sub_2020();
}


/* sub_2140 2140 */
void sub_2140()
{
 sub_2020();
}


/* sub_2150 2150 */
void sub_2150()
{
 sub_2020();
}


/* _Z18test_cpp_exceptionv 22A0 */
int test_cpp_exception()
{
 unsigned int *exception; // rax

 exception = (unsigned int *)__cxxabiv1::__cxa_allocate_exception(4u);
 *exception = 42;
 __cxxabiv1::__cxa_throw(exception, (std::type_info *)&typeinfo_for_int, 0);
}


/* main 2367 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* _GLOBAL__sub_I__Z20test_cpp_member_funcv 2375 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 new (&std::__ioinit) std::ios_base::Init();
 __cxa_atexit((void (*)(void *))std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* _Z20test_cpp_member_funcv 2489 */
int test_cpp_member_func()
{
 char *v0; // rax
 SimpleClass obj; // [rsp+4h] [rbp-34h] BYREF
 unsigned long long v3; // [rsp+28h] [rbp-10h]

 v3 = __readfsqword(0x28u);
 v0 = strncpy(obj.name, "Test", 0x1Fu);
 obj.name[31] = 0;
 return strlen(v0) + 4700;
}


/* _Z20test_cpp_constructorv 24E3 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass::instance_count + 21;
}


/* _Z17call_virtual_funcP4Basei 24F5 */
int call_virtual_func(Base *obj, int x)
{
 return (*obj->_vptr_Base)(obj, x);
}


/* _Z21test_cpp_virtual_funcv 24FE */
int test_cpp_virtual_func()
{
 int v0; // ebx
 Base base; // [rsp+0h] [rbp-28h] BYREF
 Derived derived; // [rsp+8h] [rbp-20h] BYREF
 unsigned long long v4; // [rsp+18h] [rbp-10h]

 v4 = __readfsqword(0x28u);
 derived.multiplier = 3;
 base._vptr_Base = (int (**)(...))&off_58A8;
 derived._vptr_Base = (int (**)(...))&off_58D8;
 v0 = call_virtual_func(&base, 5);
 return v0 + call_virtual_func((Base *)&derived, 5) + 21;
}


/* _Z29test_cpp_multiple_inheritancev 2571 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* _Z26test_cpp_operator_overloadv 257B */
int test_cpp_operator_overload()
{
 return 22;
}


/* _Z22test_cpp_template_funcv 2585 */
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
 a = 10;
 v0 = 2.5;
 r2 = template_max_double(1.5, v0);
 b = 20;
 template_swap_int(&a, &b);
 return b + a + v1 + (int)r2;
}


/* _Z23test_cpp_template_classv 2618 */
int test_cpp_template_class()
{
 int v0; // eax
 int r2[10]; // [rsp+Ch] [rbp-3Ch] BYREF
 int v3; // [rsp+34h] [rbp-14h]
 unsigned long long v4; // [rsp+38h] [rbp-10h]

 v4 = __readfsqword(0x28u);
 v3 = 1;
 r2[0] = 10;
 Container_int_push((Container_int *const)r2, 20);
 Container_int_push((Container_int *const)r2, 30);
 v0 = 0;
 if ( v3 > 0 )
 v0 = r2[0];
 return v3 + v0 + 3;
}


/* _Z15test_cpp_lambdav 268D */
int test_cpp_lambda()
{
 return 85;
}


/* _Z13test_cpp_rttiv 2697 */
int test_cpp_rtti()
{
 int v0; // ebx
 long long *v1; // r13
 unsigned long long *v2; // rax
 long long v3; // r14
 const void *v4; // rbp
 long long v5; // rax
 const char *v6; // r12
 int v7; // ebx
 int v8; // r12d

 v0 = 10;
 v1 = (long long *)operator new(8u);
 *v1 = (long long)off_5B98;
 v2 = (unsigned long long *)operator new(8u);
 v3 = *v1;
 v4 = v2;
 *(unsigned long long *)v2 = (unsigned long long)off_5BC0;
 v5 = *(unsigned long long *)((char *)v3 - 8);
 v6 = *(const char **)(v5 + 8);
 if ( v6 != "12RTTIDerivedA" )
 {
 v0 = 0;
 if ( *v6 != 42 )
 v0 = strcmp(*(const char **)(v5 + 8), "12RTTIDerivedA") == 0 ? 0xA : 0;
 }
 v7 = v0 + 20;
 if ( __cxxabiv1::__dynamic_cast(
 v1,
 (const __cxxabiv1::__class_type_info *)&typeinfo_for_RTITIBase,
 (const __cxxabiv1::__class_type_info *)&typeinfo_for_RTITIDerivedA,
 0) )
 {
 v7 += 100;
 }
 if ( __cxxabiv1::__dynamic_cast(
 v4,
 (const __cxxabiv1::__class_type_info *)&typeinfo_for_RTITIBase,
 (const __cxxabiv1::__class_type_info *)&typeinfo_for_RTITIDerivedB,
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


/* _Z18test_cpp_smart_ptrv 27AC */
int test_cpp_smart_ptr()
{
 int *v0; // rax
 long long v1; // rax
 std_unique_ptr_int ptr2; // [rsp+0h] [rbp-38h] BYREF
 std_unique_ptr_int_array arr; // [rsp+10h] [rbp-28h] BYREF

 arr._M_t._M_t._M_head_impl = (int *)__readfsqword(0x28u);
 v0 = (int *)operator new(4u);
 ptr2._M_t._M_t._M_head_impl = v0;
 *(unsigned long long *)&ptr2._M_t._M_t.gap0 = 0;
 *v0 = 200;
 v1 = operator new[](0x14u);
 *(unsigned long long *)&arr._M_t._M_t.gap0 = v1;
 *(unsigned long long *)v1 = 0x200000001LL;
 *(unsigned long long *)(v1 + 8) = 0x400000003LL;
 *(unsigned int *)(v1 + 16) = 5;
 std_unique_ptr_int_array_D2(&arr);
 std_unique_ptr_int_D2((std_unique_ptr_int *const)&ptr2._M_t._M_t);
 std_unique_ptr_int_D2(&ptr2);
 return 703;
}


/* _Z28test_cpp_diamond_inheritancev 287C */
int test_cpp_diamond_inheritance()
{
 int v0; // eax
 int v1; // r12d
 DiamondDerived obj; // [rsp+8h] [rbp-50h] BYREF

 *((unsigned long long *)&obj.dataB + 1) = __readfsqword(0x28u);
 obj.dataB = 50;
 obj._vptr_MiddleA = (int (**)(...))&off_5B08;
 obj._vptr_MiddleB = (int (**)(...))&off_5B70;
 *((unsigned long long *)&obj.dataA + 1) = &off_5B70 - 7;
 v0 = virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&obj._vptr_MiddleB);
 obj.dataB = 100;
 v1 = v0 + virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&obj._vptr_MiddleB);
 DiamondDerived_~DiamondDerived(&obj);
 return v1;
}


/* _Z20test_cpp_oo_featuresv 290D */
void test_cpp_oo_features()
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
 __printf_chk(1, &unk_303A, v0);
 v1 = test_cpp_constructor();
 __printf_chk(1, &unk_3058, v1);
 v2 = test_cpp_virtual_func();
 __printf_chk(1, &unk_3074, v2);
 v3 = test_cpp_multiple_inheritance();
 __printf_chk(1, &unk_3090, v3);
 v4 = test_cpp_diamond_inheritance();
 __printf_chk(1, &unk_30AC, v4);
 v5 = test_cpp_operator_overload();
 __printf_chk(1, &unk_30C9, v5);
 v6 = test_cpp_template_func();
 __printf_chk(1, &unk_30E5, v6);
 v7 = test_cpp_template_class();
 __printf_chk(1, &unk_3101, v7);
 v8 = test_cpp_lambda();
 __printf_chk(1, &unk_311D, v8);
 test_cpp_exception();
}


/* _ZN4Base12virtual_funcEi 2A58 */
int Base_virtual_func(Base *const self, int x)
{
 return x + 1;
}


/* _ZNK4Base7getNameEv 2A60 */
const char * Base_getName(const Base *const self)
{
 return "Base";
}


/* _ZN4BaseD2Ev 2A6C */
void Base_Dtor(Base *const self)
{
 ;
}


/* _ZN7Derived12virtual_funcEi 2A72 */
int Derived_virtual_func(Derived *const self, int x)
{
 return x * self->multiplier;
}


/* _ZNK7Derived7getNameEv 2A7E */
const char * Derived_getName(const Derived *const self)
{
 return "Derived";
}


/* _ZN12MultiDerived5funcAEv 2A8A */
int MultiDerived_funcA(MultiDerived *const)
{
 return 30;
}


/* _ZN12MultiDerived5funcBEv 2A94 */
int MultiDerived_funcB(MultiDerived *const self)
{
 return 40;
}


/* _ZThn16_N12MultiDerived5funcBEv 2A9E */
long long non-virtual thunk to'MultiDerived_funcB(MultiDerived *this)
{
 return 40;
}


/* _ZN11VirtualBase4funcEv 2AA8 */
int VirtualBase_func(VirtualBase *const self)
{
 return 100;
}


/* _ZN11VirtualBaseD2Ev 2AB2 */
void VirtualBase_Dtor(VirtualBase *const self)
{
 ;
}


/* _ZN7MiddleA4funcEv 2AB8 */
int MiddleA_func(MiddleA *const self)
{
 return *(int *)((char *)&self->dataA + *((unsigned long long *)self->_vptr_MiddleA - 3)) + 150;
}


/* _ZTv0_n24_N7MiddleA4funcEv 2ACD */
int virtual_thunk_to_MiddleA_func(MiddleA *self)
{
 return MiddleA_func((MiddleA *)((char *)self + *((unsigned long long *)self->_vptr_MiddleA - 3)));
}


/* _ZN7MiddleB4funcEv 2ADA */
int MiddleB_func(MiddleB *self)
{
 return *(int *)((char *)&self->dataB + *((unsigned long long *)self->_vptr_MiddleB - 3)) + 200;
}


/* _ZTv0_n24_N7MiddleB4funcEv 2AEF */
int virtual_thunk_to_MiddleB_func(MiddleB *self)
{
 return MiddleB_func((MiddleB *)((char *)self + *((unsigned long long *)self->_vptr_MiddleB - 3)));
}


/* _ZN14DiamondDerived4funcEv 2AFC */
int DiamondDerived_func(DiamondDerived *self)
{
 return *(int *)((char *)&self->dataA + *((unsigned long long *)self->_vptr_MiddleA - 3)) + 250;
}


/* _ZTv0_n24_N14DiamondDerived4funcEv 2B11 */
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *self)
{
 return DiamondDerived_func((DiamondDerived *)((char *)self + *((unsigned long long *)self->_vptr_MiddleA - 3)));
}


/* _ZThn16_N14DiamondDerived4funcEv 2B1E */
int non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *self)
{
 return DiamondDerived_func((DiamondDerived *)((char *)self - 16));
}


/* _ZN7MiddleAD1Ev 2B28 */
void MiddleA_D1(MiddleA *self)
{
 self->_vptr_MiddleA = (int (**)(...))&off_5920;
 *((unsigned long long *)&self->dataA + 1) = &off_5958;
}


/* _ZTv0_n32_N7MiddleAD1Ev 2B3F */
void virtual_thunk_to_MiddleA_destructor(MiddleA *self)
{
 unsigned long long *v1; // rdi

 v1 = (int (***)(...))((char *)&self->_vptr_MiddleA + *((unsigned long long *)self->_vptr_MiddleA - 4));
 *v1 = &off_5920;
 v1[2] = &off_5958;
}


/* _ZN7MiddleBD1Ev 2B5E */
void MiddleB_D1(MiddleB *self)
{
 self->_vptr_MiddleB = (int (**)(...))&off_5998;
 *((unsigned long long *)&self->dataB + 1) = &off_59D0;
}


/* _ZTv0_n32_N7MiddleBD1Ev 2B75 */
void virtual_thunk_to_MiddleB_destructor(MiddleB *self)
{
 unsigned long long *v1; // rdi

 v1 = (int (***)(...))((char *)&self->_vptr_MiddleB + *((unsigned long long *)self->_vptr_MiddleB - 4));
 *v1 = &off_5998;
 v1[2] = &off_59D0;
}


/* _ZNK12RTTIDerivedA7getTypeEv 2B94 */
int RTTIDerivedA_getType(const RTTIDerivedA *const self)
{
 return 1;
}


/* _ZNK12RTTIDerivedB7getTypeEv 2B9E */
int RTTIDerivedB_getType(const RTTIDerivedB *const self)
{
 return 2;
}


/* _ZN12RTTIDerivedBD2Ev 2BA8 */
void RTTIDerivedB_Dtor(RTTIDerivedB *self)
{
 ;
}


/* _ZN12RTTIDerivedAD2Ev 2BAE */
void RTTIDerivedA_Dtor(RTTIDerivedA *const self)
{
 ;
}


/* _ZN12MultiDerivedD2Ev 2BB4 */
void MultiDerived_Dtor(MultiDerived *const self)
{
 ;
}


/* _ZThn16_N12MultiDerivedD1Ev 2BB9 */
void non_virtual_thunk_to_MultiDerived_D1(MultiDerived *const self)
{
 ;
}


/* _ZN7DerivedD2Ev 2BBE */
void Derived_Dtor(Derived *const self)
{
 ;
}


/* _ZN4BaseD0Ev 2BC4 */
void Base_D0(Base *const self)
{
 operator delete(self, 8u);
}


/* _ZN7DerivedD0Ev 2BD2 */
void Derived_D0(Derived *const self)
{
 operator delete(self, 0x10u);
}


/* _ZN12MultiDerivedD0Ev 2BE0 */
void MultiDerived_D0(MultiDerived *const self)
{
 operator delete(self, 0x20u);
}


/* _ZThn16_N12MultiDerivedD0Ev 2BEE */
void non_virtual_thunk_to_MultiDerived_D0(MultiDerived *this)
{
 MultiDerived_Dtor((MultiDerived *)((char *)this - 16));
}


/* _ZN11VirtualBaseD0Ev 2BF8 */
void VirtualBase_D0(VirtualBase *const self)
{
 operator delete(self, 0x10u);
}


/* _ZN12RTTIDerivedAD0Ev 2C14 */
void RTTIDerivedA_D0(RTTIDerivedA *const self)
{
 operator delete(self, 8u);
}


/* _ZN7MiddleAD0Ev 2C22 */
void MiddleA_D0(MiddleA *self)
{
 self->_vptr_MiddleA = (int (**)(...))&off_5920;
 *((unsigned long long *)&self->dataA + 1) = &off_5958;
 operator delete(self, 0x20u);
}


/* _ZTv0_n32_N7MiddleAD0Ev 2C42 */
void virtual_thunk_to_MiddleA_destructor_2(MiddleA *self)
{
 MiddleA_D0((MiddleA *)((char *)self + *((unsigned long long *)self->_vptr_MiddleA - 4)));
}


/* _ZN7MiddleBD0Ev 2C50 */
void MiddleB_D0(MiddleB *self)
{
 self->_vptr_MiddleB = (int (**)(...))&off_5998;
 *((unsigned long long *)&self->dataB + 1) = &off_59D0;
 operator delete(self, 0x20u);
}


/* _ZTv0_n32_N7MiddleBD0Ev 2C70 */
void virtual_thunk_to_MiddleB_destructor_2(MiddleB *self)
{
 MiddleB_D0((MiddleB *)((char *)self + *((unsigned long long *)self->_vptr_MiddleB - 4)));
}


/* _ZN7MiddleAD4Ev 2C7E */
void MiddleA_destructor_with_in_chrg(MiddleA *const self, const int __in_chrg, const void **const __vtt_parm)
{
 int (**v3)(...); // rax
 int (**v4)(...); // r8
 long long v5; // rcx

 v3 = (int (**)(...))&off_5920;
 if ( !__in_chrg )
 v3 = (int (**)(...))*__vtt_parm;
 self->_vptr_MiddleA = v3;
 v4 = (int (**)(...))&off_5958;
 v5 = 16;
 if ( !__in_chrg )
 {
 v4 = (int (**)(...))__vtt_parm[1];
 v5 = *(long long *)((char *)v3 - 24);
 }
 *(const void **)((char *)&self->_vptr_MiddleA + (long long unsigned int)v5) = (const void *)v4;
}

/* Forward declarations for vtable offsets */
extern void *off_5920;
extern void *off_5958;
extern void *off_5998;
extern void *off_59D0;


/* _ZN7MiddleAD2Ev 2CB0 */
void MiddleA_D2(MiddleA *const self, const void **const __vtt_parm)
{
 MiddleA_D4(self, 0, (const void **const)__vtt_parm);
}


/* _ZN7MiddleBD4Ev 2CBE */
void MiddleB_D4(MiddleB *const self, const int __in_chrg, const void **const __vtt_parm)
{
 int (**v3)(...); // rax
 int (**v4)(...); // r8
 long long v5; // rcx

 v3 = (int (**)(...))&off_5998;
 if ( !__in_chrg )
 v3 = (int (**)(...))*__vtt_parm;
 self->_vptr_MiddleB = v3;
 v4 = (int (**)(...))&off_59D0;
 v5 = 16;
 if ( !__in_chrg )
 {
 v4 = (int (**)(...))__vtt_parm[1];
 v5 = *(long long *)((char *)v3 - 24);
 }
 *(int (**)(...))((char *)&self->_vptr_MiddleB + (long long unsigned int)v5) = v4;
}


/* _ZN7MiddleBD2Ev 2CF0 */
void MiddleB_D2(MiddleB *const self, const void **const __vtt_parm)
{
 MiddleB_D4(self, 0, (const void **const)__vtt_parm);
}


/* _Z12template_maxIiET_S0_S0_ 2CFE */
int template_max_int(int a, int b)
{
 int result; // eax

 result = b;
 if ( a >= b )
 return a;
 return result;
}


/* _Z12template_maxIdET_S0_S0_ 2D0A */
double template_max_double(double a1, double a, double b)
{
 return fmax(a1, a);
}


/* _Z13template_swapIiEvRT_S1_ 2D13 */
void template_swap_int(int *a, int *b)
{
 int v2; // eax

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* _ZN9ContainerIiEC2Ev 2D20 */
void Container_int_Container(Container_int *const self)
{
 self->size = 0;
}


/* _ZN9ContainerIiE4pushEi 2D2C */
void Container_int_push(Container_int *const self, int value)
{
 long long size; // rax

 size = self->size;
 if ( (int)size <= 9 )
 {
 self->size = size + 1;
 self->data[size] = value;
 }
}


/* _ZNK9ContainerIiE3getEi 2D44 */
int Container_int_get(const Container_int *const self, int idx)
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && self->size > idx )
 return self->data[idx];
 return result;
}


/* _ZNK9ContainerIiE7getSizeEv 2D5A */
int Container_int_getSize(const Container_int *const self)
{
 return self->size;
}


/* _ZN9ContainerIdEC2Ev 2D62 */
void Container_double_Container(Container_double *const self)
{
 self->size = 0;
}


/* _ZN9ContainerIdE4pushEd 2D6E */
void Container_double_push(Container_double *const self, double a2, double value)
{
 long long size; // rax

 size = self->size;
 if ( (int)size <= 9 )
 {
 self->size = size + 1;
 self->data[size] = a2;
 }
}


/* _ZNK9ContainerIdE3getEi 2D88 */
double Container_double_get(const Container_double *const self, int idx)
{
 double result; // xmm0_8

 result = 0.0;
 if ( idx >= 0 && self->size > idx )
 return self->data[idx];
 return result;
}


/* _ZNK9ContainerIdE7getSizeEv 2DA2 */
int Container_double_getSize(const Container_double *const self)
{
 return self->size;
}


/* _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev 2DAA */
void std_unique_ptr_int_D2(std_unique_ptr_int *const self)
{
 void *v1; // rdi

 v1 = (void *)self->_M_t._M_t._M_head_impl;
 if ( v1 )
 operator delete(v1, 4u);
}


/* _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev 2DC2 */
void std_unique_ptr_int_array_D2(std_unique_ptr_int_array *const self)
{
 void *v1; // rdi

 v1 = (void *)self->_M_t._M_t._M_head_impl;
 if ( v1 )
 operator delete[](v1);
}


/* _ZN14DiamondDerivedD4Ev 2DD4 */
void DiamondDerived_D4(
 DiamondDerived *const self,
 const int __in_chrg,
 const void **const __vtt_parm)
{
 int (**v3)(...); // rax
 int (**v7)(...); // rcx
 long long v8; // rdx
 const void *v9; // rax
 MiddleB *v10; // rdi
 const void **v11; // rsi
 const void **v12; // rsi

 v3 = (int (**)(...))&off_5B08;
 if ( !__in_chrg )
 v3 = (int (**)(...))*__vtt_parm;
 self->_vptr_MiddleA = v3;
 v7 = (int (**)(...))&off_5B70;
 v8 = 32;
 if ( !__in_chrg )
 {
 v7 = (int (**)(...))(long long)(unsigned long long)__vtt_parm[5];
 v8 = *(unsigned long long *)((unsigned long long)v3 - 3);
 }
 *(int (**)(...))((char *)&self->_vptr_MiddleA + (long long unsigned int)v8) = v7;
 v9 = &off_5B38;
 v10 = (MiddleB *)(&self->dataA + 2);
 v11 = (const void **)off_5AD0;
 if ( !__in_chrg )
 v11 = (const void **)(__vtt_parm + 3);
 MiddleB_D2(v10, v11);
 v12 = (const void **)off_5AC0;
 if ( !__in_chrg )
 v12 = (const void **)(__vtt_parm + 1);
 MiddleA_D2(self, v12);
}





/* _ZThn16_N14DiamondDerivedD1Ev 2E6E */
void non_virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *self)
{
 DiamondDerived_D2((DiamondDerived *)((char *)self - 16), 0);
}


/* _ZTv0_n32_N14DiamondDerivedD1Ev 2E78 */
void virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *self)
{
 DiamondDerived_D2((DiamondDerived *)((char *)self + *((unsigned long long *)self->_vptr_MiddleA - 4)), 0);
}


/* _ZN14DiamondDerivedD0Ev 2E86 */
void DiamondDerived_D0(DiamondDerived *const self)
{
 DiamondDerived_D2(self, 0);
 operator delete(self, 0x30u);
}


/* _ZThn16_N14DiamondDerivedD0Ev 2EAB */
void non_virtual_thunk_to_DiamondDerived_D0(DiamondDerived *self)
{
 DiamondDerived_D0((DiamondDerived *)((char *)self - 16));
}


/* _ZTv0_n32_N14DiamondDerivedD0Ev 2EB5 */
void virtual_thunk_to_DiamondDerived_D0(DiamondDerived *self)
{
 DiamondDerived_D0((DiamondDerived *)((char *)self + *((unsigned long long *)self->_vptr_MiddleA - 4)));
}


/* _ZN14DiamondDerivedD2Ev 2EC2 */
void DiamondDerived_D2(DiamondDerived *const self, const void **const __vtt_parm)
{
 DiamondDerived_D4(self, 0, __vtt_parm);
}


/* .term_proc 2ED0 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __printf_chk 6048 */

/* FAILED to decompile: _Znam 6050 */

/* FAILED to decompile: __cxa_begin_catch 6058 */

/* FAILED to decompile: strlen 6060 */

/* FAILED to decompile: __cxa_allocate_exception 6068 */

/* FAILED to decompile: strncpy 6070 */

/* FAILED to decompile: __libc_start_main 6080 */

/* FAILED to decompile: __cxa_atexit 6088 */

/* FAILED to decompile: _Znwm 6090 */

/* FAILED to decompile: _ZdlPvm 6098 */

/* FAILED to decompile: __stack_chk_fail 60A0 */

/* FAILED to decompile: __dynamic_cast 60A8 */

/* FAILED to decompile: _ZdaPv 60B0 */

/* FAILED to decompile: strcmp 60C0 */

/* FAILED to decompile: __cxa_rethrow 60C8 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev 60D0 */

/* FAILED to decompile: puts 60D8 */

/* FAILED to decompile: __cxa_end_catch 60E0 */

/* FAILED to decompile: __gxx_personality_v0 60E8 */

/* FAILED to decompile: __cxa_throw 60F0 */

/* FAILED to decompile: _Unwind_Resume 6100 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev 6108 */

/* FAILED to decompile: __imp___cxa_finalize 6110 */

/* FAILED to decompile: __gmon_start__ 6120 */

/* Total functions decompiled: 107, failed: 24 */
