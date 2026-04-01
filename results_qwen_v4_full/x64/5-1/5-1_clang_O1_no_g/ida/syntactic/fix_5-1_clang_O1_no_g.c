/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_clang_O1_no_g
 * Processor: pc
 */

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

/* Global declarations for undeclared identifiers */
unsigned long long xmmword_3262 = 0;

/* Vtable pointers - defined as global variables */
long long (*off_59C8)(void) = 0;
long long (*off_5A50)(void) = 0;
long long (*off_5A80)(void) = 0;
long long (*off_5B58)(void) = 0;
long long (*off_5B88)(void) = 0;
long long (*off_5BC0)(void) = 0;
long long (*off_5D78)(void) = 0;
long long (*off_5DA0)(void) = 0;
long long (*off_5A08)(void) = 0;
extern const char *s;
const char *format = "%d\n";
const char *aCppL302D = "cpp_l302d";
const char *aCppL303D = "cpp_l303d";
const char *aCppL304D = "cpp_l304d";
const char *aCppL305D = "cpp_l305d";
const char *aCppL306D = "cpp_l306d";
const char *aCppL307D = "cpp_l307d";
const char *aCppL308D = "cpp_l308d";
const char *aCppL309D = "cpp_l309d";

/* C++ runtime function declarations */
extern void *__cxa_allocate_exception(unsigned long size);
extern void __cxa_throw(void *exception, void *type_info, void *dest);

/* C++ Class forward declarations */
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

/* C++ Class definitions */
struct Base {
    long long (*virtual_func)(Base *self, int a2);
};
struct Derived {
    long long (*virtual_func)(Derived *self, int a2);
};
struct MultiDerived {
    long long (*funcA)(MultiDerived *self);
    long long (*funcB)(MultiDerived *self);
};
struct DiamondDerived {
    long long (*func)(DiamondDerived *self);
};
struct BaseA {
    long long (*funcA)(BaseA *self);
};
struct BaseB {
    long long (*funcB)(BaseB *self);
};
struct MiddleA {
    long long (*func)(MiddleA *self);
};
struct MiddleB {
    long long (*func)(MiddleB *self);
};
struct VirtualBase {
    long long (*func)(VirtualBase *self);
};
struct RTTIBase {
};
struct RTTIDerivedA {
    long long (*getType)(RTTIDerivedA *self);
};
struct RTTIDerivedB {
    long long (*getType)(RTTIDerivedB *self);
};

/* Forward declarations for thunk functions */
long long virtual_thunk_to_DiamondDerived_func(DiamondDerived *self);
long long virtual_thunk_to_MiddleA_func(MiddleA *self);
long long virtual_thunk_to_MiddleB_func(MiddleB *self);
long long non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *self);
long long non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *self);

/* Forward declarations for class methods */
long long MultiDerived_funcA(MultiDerived *self);
long long Base_virtual_func(Base *self, int a2);

/* typeinfo declarations */
void *typeinfo_for_int = 0;
void *typeinfo_for_RTTIBase = 0;
void *typeinfo_for_RTTIDerivedA = 0;
void *typeinfo_for_RTTIDerivedB = 0;

/* __class_type_info forward declaration */
struct __class_type_info;

/* __dynamic_cast implementation */
void *__dynamic_cast(void *src, const struct __class_type_info *src_type, const struct __class_type_info *dst_type, int src2dst) {
    return src;
}

/* C++ runtime function stub implementations */
void *__cxa_allocate_exception(unsigned long size) {
    return malloc(size);
}

void __cxa_throw(void *exception, void *type_info, void *dest) {
    if (dest) ((void (*)(void *))dest)(exception);
    free(exception);
}

void *__dynamic_cast_impl(void *src, const struct __class_type_info *src_type, const struct __class_type_info *dst_type, int src2dst) {
    return src;
}

/* LifecycleClass declaration */
struct LifecycleClass {
    int instance_count;
};
int LifecycleClass_instance_count = 0;

/* std namespace declarations */
namespace std {
    class ios_base {
    public:
        class Init {
        public:
            Init(void *ptr);
            ~Init();
        };
    };
    extern ios_base::Init __ioinit;
}
extern void *_dso_handle;

/* JUMPOUT macro replacement */
#define JUMPOUT(x) return




/* Function: sub_2020 @ 0x2020 */
void sub_2020()
{
 return;
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x2150 */
int GLOBAL__sub_I_5_1_cpp()
{
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x2270 */
long long test_cpp_member_func(void)
{
 unsigned char s[31]; // [rsp+4h] [rbp-24h] BYREF
 char v2; // [rsp+23h] [rbp-5h]

 *(unsigned long long *)s = xmmword_3262;
 *(unsigned long long *)&s[15] = *(__int128 *)((char *)&xmmword_3262 + 15);
 v2 = 0;
 return (unsigned int)strlen((const char *)s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x22B0 */
long long test_cpp_constructor(void)
{
 unsigned int *v0; // rax
 long long v1; // rcx
 unsigned int *v2; // rdx
 int v3; // ebx

 v0 = (unsigned int *)operator new[](0x14u);
 v1 = 0;
 v2 = v0;
 do
 {
 *v2 = v1;
 v1 += 10;
 ++v2;
 }
 while ( v1 != 50 );
 ++LifecycleClass_instance_count;
 v3 = v0[2] + LifecycleClass_instance_count;
 operator delete[](v0);
 --LifecycleClass_instance_count;
 return (unsigned int)(v3 + 1000 * LifecycleClass_instance_count);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x2310 */
long long call_virtual_func(Base *a1)
{
 return (**(long long ( ***)(Base *))a1)(a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x2320 */
long long test_cpp_virtual_func(void)
{
 int v0; // ebx
 long long v2; // [rsp+8h] [rbp-20h] BYREF
 int v3; // [rsp+10h] [rbp-18h]
 long long ( **v4)(Base *__hidden, int); // [rsp+18h] [rbp-10h] BYREF

 v4 = (long long ( **)(Base *__hidden, int))&off_59C8;
 v3 = 3;
 v0 = (*v4)((Base *)&v4, 5);
 return v0 + (unsigned int)(*(long long ( **)(Derived *, int))&off_5A08)((Derived *)&v2, 5) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x2380 */
long long test_cpp_multiple_inheritance(void)
{
 int v0; // ebx
 long long ( **v2)(MultiDerived *__hidden); // [rsp+8h] [rbp-30h] BYREF
 int v3; // [rsp+10h] [rbp-28h]
 long long ( **v4)(MultiDerived *__hidden); // [rsp+18h] [rbp-20h] BYREF
 int v5; // [rsp+20h] [rbp-18h]

 v2 = (long long ( **)(MultiDerived *))&off_5A50;
 v4 = (long long ( **)(MultiDerived *))&off_5A80;
 v3 = 100;
 v5 = 200;
 v0 = MultiDerived_funcA((MultiDerived *)&v2);
 return v0 + (unsigned int)(*v4)((MultiDerived *)&v4) + 1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x23E0 */
long long test_cpp_diamond_inheritance(void)
{
 int v0; // ebp
 unsigned int v2[2]; // [rsp+10h] [rbp-38h]
 long long ( **v3)(DiamondDerived *__hidden); // [rsp+18h] [rbp-30h]
 long long ( **v4)(DiamondDerived *__hidden); // [rsp+28h] [rbp-20h] BYREF
 int v5; // [rsp+30h] [rbp-18h]

 v4 = (long long ( **)(DiamondDerived *))&off_5BC0;
 v3 = (long long ( **)(DiamondDerived *))&off_5B88;
 v5 = 50;
 v0 = virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&v4);
 *(unsigned int *)((char *)v2 + (unsigned long long)*(&off_5B58 - 3)) = 100;
 return v0 + (unsigned int)(*v4)((DiamondDerived *)&v4);
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x2450 */
long long test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x2460 */
long long test_cpp_template_func(void)
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x2470 */
long long test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x2480 */
long long test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x2490 */
void test_cpp_exception(void)
{
 unsigned int *exception; // rax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x2550 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x2560 */
long long test_cpp_rtti(void)
{
 void *v0; // r14
 void *v1; // r13
 const char *v2; // r15
 int v3; // ebx
 const char *v4; // rdi
 bool v5; // al
 int v6; // ebp
 int v7; // ebx
 int v8; // ebp
 int v9; // ebx

 v0 = (void *)operator new(8u);
 *(unsigned long long *)v0 = (unsigned long long)off_5D78;
 v1 = (void *)operator new(8u);
 *(unsigned long long *)v1 = (unsigned long long)off_5DA0;
 v2 = *(const char **)(*(unsigned long long *)(*(unsigned long long *)v0 - 8LL) + 8LL);
 if ( v2 == "12RTTIDerivedA" )
 {
 v3 = 10;
 }
 else
 {
 v3 = 0;
 if ( *v2 != 42 )
 {
 v3 = 10;
 if ( strcmp(*(const char **)(*(unsigned long long *)(*(unsigned long long *)v0 - 8LL) + 8LL), "12RTTIDerivedA") )
 v3 = 0;
 }
 }
 v4 = *(const char **)(*(unsigned long long *)(*(unsigned long long *)v1 - 8LL) + 8LL);
 v5 = v4 == "12RTTIDerivedB" || *v4 != 42 && strcmp(v4, "12RTTIDerivedB") == 0;
 v6 = v3 | 0x14;
 if ( !v5 )
 v6 = v3;
 v7 = v6 + 100;
 if ( !__dynamic_cast(
 v0,
 (const struct __class_type_info *)typeinfo_for_RTTIBase,
 (const struct __class_type_info *)typeinfo_for_RTTIDerivedA,
 0) )
 v7 = v6;
 v8 = v7 + 200;
 if ( !__dynamic_cast(
 v1,
 (const struct __class_type_info *)typeinfo_for_RTTIBase,
 (const struct __class_type_info *)typeinfo_for_RTTIDerivedB,
 0) )
 v8 = v7;
 v9 = strlen(&v2[*v2 == 42] ? v2 + 1 : v2);
 (*(void ( **)(void *))(*(unsigned long long *)v0 + 8LL))(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return (unsigned int)(v8 + v9);
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x26A0 */
void test_cpp_oo_features(void)
{
 int v0; // eax
 long long v1; // rbx
 unsigned int *v2; // rax
 unsigned int *v3; // rcx
 int v4; // ebx
 int v5; // ebx
 int v6; // eax
 int v7; // eax
 int v8; // ebp
 int v9; // eax
 unsigned char s[40]; // [rsp+0h] [rbp-48h] BYREF
 int v11; // [rsp+28h] [rbp-20h]
 long long ( **v12)(Base *__hidden, int); // [rsp+30h] [rbp-18h] BYREF

 puts((const char *)s);
 *(unsigned long long *)&s[4] = xmmword_3262;
 memset(&s[19], 0, 17);
 *(unsigned int *)s = 10;
 v0 = strlen((const char *)&s[4]);
 v1 = 0;
 printf(format, (unsigned int)(v0 + 4700));
 v2 = (unsigned int *)operator new[](0x14u);
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
 operator delete[](v2);
 --LifecycleClass_instance_count;
 printf(aCppL302D, (unsigned int)(v4 + 1000 * LifecycleClass_instance_count));
 v12 = (long long ( **)(Base *__hidden, int))&off_59C8;
 *(unsigned long long *)s = (unsigned long long)&off_5A08;
 *(unsigned int *)&s[8] = 3;
 v5 = Base_virtual_func((Base *)&v12, 5);
 v6 = (**(long long ( ***)(unsigned char *, long long))s)(s, 5);
 printf(aCppL303D, (unsigned int)(v5 + v6 + 21));
 *(unsigned long long *)s = (unsigned long long)&off_5A50;
 *(unsigned long long *)&s[16] = (unsigned long long)&off_5A80;
 *(unsigned int *)&s[8] = 100;
 *(unsigned int *)&s[24] = 200;
 v7 = non_virtual_thunk_to_MultiDerived_funcB((MultiDerived *)&s[16]);
 printf(aCppL304D, (unsigned int)(v7 + 31));
 *(unsigned long long *)s = (unsigned long long)&off_5B58;
 *(unsigned long long *)&s[32] = (unsigned long long)&off_5BC0;
 *(unsigned long long *)&s[16] = (unsigned long long)&off_5B88;
 v11 = 50;
 v8 = virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&s[32]);
 *(unsigned int *)&s[*(unsigned long long *)(*(unsigned long long *)s - 24LL) + 8] = 100;
 v9 = (**(long long ( ***)(unsigned char *))&s[32])(&s[32]);
 printf(aCppL305D, (unsigned int)(v9 + v8));
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: main @ 0x28F0 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x2900 */
long long Base_virtual_func(Base *self, int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x2910 */
long long Derived_virtual_func(Derived *self, int a2)
{
 return (unsigned int)(*((unsigned int *)self + 2) * a2);
}


/* Function: _ZN4BaseD2Ev @ 0x2920 */
void Base_D2Ev(Base *self)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x2930 */
void MultiDerived_D2Ev(MultiDerived *self)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2940 */
void DiamondDerived_D1Ev(DiamondDerived *self)
{
 ;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2950 */
long long template_max_int(unsigned int a1, unsigned int a2)
{
 long long result; // rax

 result = a2;
 if ( (int)a1 > (int)a2 )
 return a1;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2960 */
double template_max_double(double a1, double a2)
{
 return fmax(a1, a2);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x2970 */
long long template_swap_int(unsigned int *a1, unsigned int *a2)
{
 long long result; // rax

 result = (unsigned int)*a1;
 *a1 = *a2;
 *a2 = result;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x2980 */
void Container_int_Constructor(long long a1)
{
 *(unsigned int *)(a1 + 40) = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x2990 */
long long Container_int_push(long long a1, int a2)
{
 long long result; // rax

 result = *(int *)(a1 + 40);
 if ( result <= 9 )
 {
 *(unsigned int *)(a1 + 40) = result + 1;
 *(unsigned int *)(a1 + 4 * result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x29B0 */
long long Container_int_get(long long a1, int a2)
{
 long long result; // rax

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x29D0 */
long long Container_int_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x29E0 */
void Container_double_Constructor(long long a1)
{
 *(unsigned int *)(a1 + 80) = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x29F0 */
long long Container_double_push(long long a1, double a2)
{
 long long result; // rax

 result = *(int *)(a1 + 80);
 if ( result <= 9 )
 {
 *(unsigned int *)(a1 + 80) = result + 1;
 *(double *)(a1 + 8 * result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x2A10 */
double Container_double_get(long long a1, int a2)
{
 double result; // xmm0_8

 result = 0.0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2A30 */
long long Container_double_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZNK4Base7getNameEv @ 0x2A40 */
const char * Base_getName(Base *self)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x2A50 */
void Base_D0Ev(Base *self)
{
 operator delete(self);
}


/* Function: _ZNK7Derived7getNameEv @ 0x2A60 */
const char * Derived_getName(Derived *self)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x2A70 */
void Derived_D0Ev(Derived *self)
{
 operator delete(self);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x2A80 */
long long MultiDerived_funcA(MultiDerived *self)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x2A90 */
void MultiDerived_D0Ev(MultiDerived *self)
{
 operator delete(self);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x2AA0 */
long long MultiDerived_funcB(MultiDerived *self)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x2AB0 */
long long non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *self)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x2AC0 */
void non_virtual_thunk_to_MultiDerived_D1(MultiDerived *self)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x2AD0 */
void non_virtual_thunk_to_MultiDerived_D0(MultiDerived *self)
{
 operator delete((char *)self - 16);
}


/* Function: _ZN5BaseA5funcAEv @ 0x2AE0 */
long long BaseA_funcA(BaseA *self)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x2AF0 */
void BaseA_D2Ev(BaseA *self)
{
 ;
}


/* Function: _ZN5BaseAD0Ev @ 0x2B00 */
void BaseA_D0Ev(BaseA *self)
{
 operator delete(self);
}


/* Function: _ZN5BaseB5funcBEv @ 0x2B10 */
long long BaseB_funcB(BaseB *self)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x2B20 */
void BaseB_D2Ev(BaseB *self)
{
 ;
}


/* Function: _ZN5BaseBD0Ev @ 0x2B30 */
void BaseB_D0Ev(BaseB *self)
{
 operator delete(self);
}


/* Function: _ZN7MiddleA4funcEv @ 0x2B40 */
long long MiddleA_func(MiddleA *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL) + 8) + 150);
}


/* Function: _ZN7MiddleAD1Ev @ 0x2B60 */
void MiddleA_D1Ev(MiddleA *self)
{
 ;
}


/* Function: _ZN7MiddleAD0Ev @ 0x2B70 */
void MiddleA_D0Ev(MiddleA *self)
{
 operator delete(self);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x2B80 */
long long virtual_thunk_to_MiddleA_func(MiddleA *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self
 + *(unsigned long long *)(*(unsigned long long *)self - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL)) - 24LL)
 + 8)
 + 150);
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x2BA0 */
void virtual_thunk_to_MiddleA_D1Ev(MiddleA *self)
{
 ;
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x2BB0 */
void virtual_thunk_to_MiddleA_D0(MiddleA *self)
{
 operator delete((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 32LL));
}


/* Function: _ZN7MiddleB4funcEv @ 0x2BC0 */
long long MiddleB_func(MiddleB *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL) + 8) + 200);
}


/* Function: _ZN7MiddleBD1Ev @ 0x2BE0 */
void MiddleB_D1Ev(MiddleB *self)
{
 ;
}


/* Function: _ZN7MiddleBD0Ev @ 0x2BF0 */
void MiddleB_D0Ev(MiddleB *self)
{
 operator delete(self);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x2C00 */
long long virtual_thunk_to_MiddleB_func(MiddleB *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self
 + *(unsigned long long *)(*(unsigned long long *)self - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL)) - 24LL)
 + 8)
 + 200);
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x2C20 */
void virtual_thunk_to_MiddleB_D1Ev(MiddleB *self)
{
 ;
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x2C30 */
void virtual_thunk_to_MiddleB_D0(MiddleB *self)
{
 operator delete((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 32LL));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x2C40 */
long long DiamondDerived_func(DiamondDerived *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL) + 8) + 250);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x2C60 */
void DiamondDerived_D0Ev(DiamondDerived *self)
{
 operator delete(self);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x2C70 */
long long non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self + *(unsigned long long *)(*((unsigned long long *)self - 2) - 24LL) - 8) + 250);
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x2C90 */
void non_virtual_thunk_to_DiamondDerived_D1(DiamondDerived *self)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x2CA0 */
void non_virtual_thunk_to_DiamondDerived_D0(DiamondDerived *self)
{
 operator delete((char *)self - 16);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x2CB0 */
long long virtual_thunk_to_DiamondDerived_func(DiamondDerived *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self
 + *(unsigned long long *)(*(unsigned long long *)self - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL)) - 24LL)
 + 8)
 + 250);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x2CD0 */
void virtual_thunk_to_DiamondDerived_D1Ev(DiamondDerived *self)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2CE0 */
void virtual_thunk_to_DiamondDerived_D0(DiamondDerived *self)
{
 operator delete((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 32LL));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x2CF0 */
long long VirtualBase_func(VirtualBase *self)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x2D00 */
void VirtualBase_D2Ev(VirtualBase *self)
{
 ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x2D10 */
void VirtualBase_D0Ev(VirtualBase *self)
{
 operator delete(self);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x2D20 */
void RTTIDerivedA_D0Ev(RTTIDerivedA *self)
{
 operator delete(self);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x2D30 */
long long RTTIDerivedA_getType(RTTIDerivedA *self)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x2D40 */
void RTTIBase_D2Ev(RTTIBase *self)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x2D50 */
void RTTIDerivedB_D0Ev(RTTIDerivedB *self)
{
 operator delete(self);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x2D60 */
long long RTTIDerivedB_getType(RTTIDerivedB *self)
{
 return 2;
}


/* Function: .term_proc @ 0x2D68 */
void term_proc()
{
 ;
}


/* FAILED to decompile: _Znam @ 0x60E8 */

/* FAILED to decompile: printf @ 0x60F8 */

/* FAILED to decompile: __cxa_begin_catch @ 0x6100 */

/* FAILED to decompile: strlen @ 0x6108 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x6110 */

/* FAILED to decompile: __libc_start_main @ 0x6120 */

/* FAILED to decompile: __cxa_atexit @ 0x6128 */

/* FAILED to decompile: _ZdlPv @ 0x6130 */

/* FAILED to decompile: _Znwm @ 0x6138 */

/* FAILED to decompile: __dynamic_cast @ 0x6140 */

/* FAILED to decompile: _ZdaPv @ 0x6148 */

/* FAILED to decompile: strcmp @ 0x6158 */

/* FAILED to decompile: __cxa_rethrow @ 0x6160 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x6168 */

/* FAILED to decompile: puts @ 0x6170 */

/* FAILED to decompile: __cxa_end_catch @ 0x6178 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x6180 */

/* FAILED to decompile: __cxa_throw @ 0x6188 */

/* FAILED to decompile: _Unwind_Resume @ 0x6198 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x61A0 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x61A8 */

/* FAILED to decompile: __gmon_start__ @ 0x61B8 */

/* Total functions decompiled: 84, failed: 22 */
