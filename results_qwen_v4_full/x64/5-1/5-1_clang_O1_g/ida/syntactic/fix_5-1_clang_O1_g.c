/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_clang_O1_g
 * Processor: pc
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* Global declarations */
#define JUMPOUT(x) return

extern long long (*_gmon_start__)(void);
extern void *_dso_handle;

/* C++ exception handling declarations */
extern void *__cxa_allocate_exception(unsigned long size);
extern void __cxa_throw(void *thrown_exception, void *tinfo, void *dest);
extern unsigned char xmmword_3262[32];
extern char *format;
extern char *aCppL302D;
extern char *aCppL303D;
extern char *aCppL304D;
extern char *aCppL305D;
extern char *aCppL306D;
extern char *aCppL307D;
extern char *aCppL308D;
extern char *aCppL309D;
extern char *s;
extern int off_59C8;
extern int off_5A50;
extern int off_5A80;
extern unsigned long long off_5BC0;
extern unsigned long long off_5B88;
extern unsigned long long off_5B58;
extern int off_5A08;
extern int off_5D78;
extern int off_5DA0;

/* C++ RTTI declaration */
extern void *__dynamic_cast(void *src, void *src_type, void *dst_type, long ptrdiff);

/* LifecycleClass declaration */
struct LifecycleClass {
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

/* std namespace declarations */
namespace std {
    class ios_base {
    public:
        class Init {
        public:
            Init(void *p);
            ~Init();
        };
    };
    extern ios_base::Init __ioinit;
}

/* Forward declarations for classes */
struct Base;
struct Derived;
struct BaseA;
struct BaseB;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct VirtualBase;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

/* Class definitions */
struct Base {
    int (**_vptr$Base)(void);
    static int virtual_func(Base *self, int x);
    static const char *getName(const Base *self);
    static void destructor(Base *self);
};

struct Derived {
    int (**_vptr$Base)(void);
    int multiplier;
    static int virtual_func(Derived *self, int x);
    static const char *getName(const Derived *self);
    static void destructor(Derived *self);
};

struct BaseA {
    int (**_vptr$BaseA)(void);
    int dataA;
    static int funcA(BaseA *self);
    static void destructor(BaseA *self);
};

struct BaseB {
    int (**_vptr$BaseB)(void);
    int dataB;
    static int funcB(BaseB *self);
    static void destructor(BaseB *self);
};

struct MultiDerived {
    int (**_vptr$BaseA)(void);
    int (**_vptr$BaseB)(void);
    BaseA BaseA;
    BaseB BaseB;
    int dataA;
    int dataB;
    static int funcA(MultiDerived *self);
    static int funcB(MultiDerived *self);
    static void destructor(MultiDerived *self);
};

struct MiddleA {
    int (**_vptr$MiddleA)(void);
    int dataA;
    static int func(MiddleA *self);
    static void destructor(MiddleA *self);
};

struct MiddleB {
    int (**_vptr$MiddleB)(void);
    int dataB;
    static int func(MiddleB *self);
    static void destructor(MiddleB *self);
};

struct DiamondDerived {
    int (**_vptr$MiddleA)(void);
    int (**_vptr$MiddleB)(void);
    int dataA;
    static int func(DiamondDerived *self);
    static void destructor(DiamondDerived *self);
};

struct VirtualBase {
    int (**_vptr$VirtualBase)(void);
    static int func(VirtualBase *self);
    static void destructor(VirtualBase *self);
};

struct RTTIBase {
    int (**_vptr$RTTIBase)(void);
    static void destructor(RTTIBase *self);
};

struct RTTIDerivedA {
    int (**_vptr$RTTIBase)(void);
    static void destructor(RTTIDerivedA *self);
    static int getType(const RTTIDerivedA *self);
};

struct RTTIDerivedB {
    int (**_vptr$RTTIBase)(void);
    static void destructor(RTTIDerivedB *self);
    static int getType(const RTTIDerivedB *self);
};

/* Template removed for C compatibility */
struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

/* Function: .init_proc @ 0x2000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = (long long (**)(void))&_gmon_start__;
 if ( _gmon_start__ )
 return (long long (**)(void))_gmon_start__;
 return result;
}


/* Function: sub_2020 @ 0x2020 */
void sub_2020()
{
 JUMPOUT(0);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x2150 */
void GLOBAL__sub_I_5_1_cpp()
{
 /* C++ static initialization stub - simplified */
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x2270 */
int test_cpp_member_func()
{
 unsigned char s[31]; // [rsp+4h] [rbp-24h] BYREF
 char v2; // [rsp+23h] [rbp-5h]

 memcpy(s, xmmword_3262, 15);
 memcpy(&s[15], (char *)&xmmword_3262 + 15, 16);
 v2 = 0;
 return strlen((const char *)s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x22B0 */
int test_cpp_constructor()
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
 ++LifecycleClass::instance_count;
 v3 = v0[2] + LifecycleClass::instance_count;
 operator delete[](v0);
 --LifecycleClass::instance_count;
 return v3 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x2310 */
int call_virtual_func(Base *obj, int x)
{
 return ((long long ( *)(Base *, int))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x2320 */
int test_cpp_virtual_func()
{
 int v0; // ebx
 long long v2; // [rsp+8h] [rbp-20h] BYREF
 int v3; // [rsp+10h] [rbp-18h]
 Base v4; // [rsp+18h] [rbp-10h] BYREF

 v4._vptr$Base = (int (**)(void))&off_59C8;
 v3 = 3;
 v0 = Base::virtual_func(&v4, 5);
 return v0 + ((long long ( *)(long long *, long long))Derived::virtual_func)(&v2, 5) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x2380 */
int test_cpp_multiple_inheritance()
{
 int v0; // ebx
 MultiDerived v2; // [rsp+8h] [rbp-30h] BYREF

 v2._vptr$BaseA = (int (**)(void))&off_5A50;
 v2._vptr$BaseB = (int (**)(void))&off_5A80;
 v2.dataA = 100;
 v2.dataB = 200;
 v0 = MultiDerived::funcA(&v2);
 return v0 + (*(long long ( **)(BaseB *))v2._vptr$BaseB)(&v2.BaseB) + 1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x23E0 */
int test_cpp_diamond_inheritance()
{
 int v0; // eax
 unsigned int v2[2]; // [rsp+10h] [rbp-38h]
 void *v3; // [rsp+18h] [rbp-30h]
 void *v4; // [rsp+28h] [rbp-20h] BYREF
 int v5; // [rsp+30h] [rbp-18h]

    v4 = (void *)off_5BC0;
    v3 = (void *)off_5B88;
    v5 = 50;
 v0 = 0;
 *(unsigned int *)((char *)v2 + (unsigned long long)*(&off_5B58 - 3)) = 100;
 return v0 + 1;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x2450 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x2460 */
int test_cpp_template_func()
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x2470 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x2480 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x2490 */
int test_cpp_exception()
{
 unsigned int *exception; // rax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (void *)0, 0);
 return 0;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x2550 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x2560 */
int test_cpp_rtti()
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
 *(unsigned long long *)v0 = (unsigned long long)&off_5D78;
 v1 = (void *)operator new(8u);
 *(unsigned long long *)v1 = (unsigned long long)&off_5DA0;
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
 (void *)0,
 (void *)0,
 0) )
 v7 = v6;
 v8 = v7 + 200;
 if ( !__dynamic_cast(
 v1,
 (void *)0,
 (void *)0,
 0) )
 v8 = v7;
    v9 = strlen(v2);
    (*(void ( **)(void *))(*(unsigned long long *)v0 + 8LL))(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return v8 + v9;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x26A0 */
void test_cpp_oo_features()
{
 int v0; // eax
 long long v1; // rbx
 unsigned int *v2; // rax
 unsigned int *v3; // rcx
 int v4; // ebx
 int v5; // ebx
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v9; // ebp
 int v10; // eax
 unsigned char s[40]; // [rsp+0h] [rbp-48h] BYREF
 int v12; // [rsp+28h] [rbp-20h]
 Base v13; // [rsp+30h] [rbp-18h] BYREF

 puts(::s);
 memcpy(&s[4], xmmword_3262, 16);
 memset(&s[19], 0, 17);
 *(unsigned int *)s = 10;
 v0 = strlen(&s[4]);
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
 ++LifecycleClass::instance_count;
 v4 = v2[2] + LifecycleClass::instance_count;
 operator delete[](v2);
 --LifecycleClass::instance_count;
 printf(aCppL302D, (unsigned int)(v4 + 1000 * LifecycleClass::instance_count));
 v13._vptr$Base = (int (**)(void))&off_59C8;
 *(void **)s = &off_5A08;
 *(unsigned int *)&s[8] = 3;
 v5 = Base::virtual_func(&v13, 5);
 v6 = (**(long long ( ***)(unsigned char *, long long))s)(s, 5);
 printf(aCppL303D, (unsigned int)(v5 + v6 + 21));
 *(void **)s = &off_5A50;
 *(void **)&s[16] = &off_5A80;
 *(unsigned int *)&s[8] = 100;
 *(unsigned int *)&s[24] = 200;
 v7 = MultiDerived::funcB((MultiDerived *)s);
 printf(aCppL304D, (unsigned int)(v7 + 31));
    *(unsigned long long *)s = (unsigned long long)(void *)off_5B58;
    *(unsigned long long *)&s[32] = (unsigned long long)(void *)off_5BC0;
    *(unsigned long long *)&s[16] = (unsigned long long)(void *)off_5B88;
 v12 = 50;
 v8 = DiamondDerived::func((DiamondDerived *)s);
 v9 = v8;
 *(unsigned int *)&s[*(unsigned long long *)(*(unsigned long long *)s - 24LL) + 8] = 100;
 v10 = (**(long long ( ***)(unsigned char *))&s[32])(&s[32]);
 printf(aCppL305D, (unsigned int)(v10 + v9));
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
int Base::virtual_func(Base *self, int x)
{
 return x + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x2910 */
int Derived::virtual_func(Derived *self, int x)
{
 return self->multiplier * x;
}


/* Function: _ZN4BaseD2Ev @ 0x2920 */
void Base_destructor(Base *self)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x2930 */
void MultiDerived_destructor(MultiDerived *self)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2940 */
void DiamondDerived_destructor(DiamondDerived *self)
{
 ;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2950 */
int template_max_int(int a, int b)
{
 int result; // eax

 result = b;
 if ( a > b )
 return a;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2960 */
double template_max_double(double a1, double a, double b)
{
 return fmax(a1, a);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x2970 */
void template_swap_int(int *a, int *b)
{
 int v2; // eax

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x2980 */
void Container_int_init(Container_int *self)
{
 self->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x2990 */
void Container_int_push(Container_int *self, int value)
{
 long long size; // rax

 size = self->size;
 if ( size <= 9 )
 {
 self->size = size + 1;
 self->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x29B0 */
int Container_int_get(const Container_int *self, int idx)
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && self->size > idx )
 return self->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x29D0 */
int Container_int_getSize(const Container_int *self)
{
 return self->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x29E0 */
void Container_double_init(Container_double *self)
{
 self->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x29F0 */
void Container_double_push(Container_double *self, double a2, double value)
{
 long long size; // rax

 size = self->size;
 if ( size <= 9 )
 {
 self->size = size + 1;
 self->data[size] = a2;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x2A10 */
double Container_double_get(const Container_double *self, int idx)
{
 double result; // xmm0_8

 result = 0.0;
 if ( idx >= 0 && self->size > idx )
 return self->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2A30 */
int Container_double_getSize(const Container_double *self)
{
 return self->size;
}


/* Function: _ZNK4Base7getNameEv @ 0x2A40 */
const char * Base::getName(const Base *self)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x2A50 */
void Base_destructor_D0(Base *self)
{
}


/* Function: _ZNK7Derived7getNameEv @ 0x2A60 */
const char * Derived::getName(const Derived *self)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x2A70 */
void Derived_destructor_D0(Derived *self)
{
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x2A80 */
int MultiDerived::funcA(MultiDerived *self)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x2A90 */
void MultiDerived_destructor_D0(MultiDerived *self)
{
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x2AA0 */
int MultiDerived::funcB(MultiDerived *self)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x2AB0 */
void MultiDerived_thunk_funcB()
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x2AC0 */
void MultiDerived_thunk_D1()
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x2AD0 */
void MultiDerived_thunk_D0()
{
}


/* Function: _ZN5BaseA5funcAEv @ 0x2AE0 */
int BaseA::funcA(BaseA *self)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x2AF0 */
void BaseA_destructor(BaseA *self)
{
 ;
}


/* Function: _ZN5BaseAD0Ev @ 0x2B00 */
void BaseA_destructor_D0(BaseA *self)
{
 operator delete(self);
}


/* Function: _ZN5BaseB5funcBEv @ 0x2B10 */
int BaseB::funcB(BaseB *self)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x2B20 */
void BaseB_destructor(BaseB *self)
{
 ;
}


/* Function: _ZN5BaseBD0Ev @ 0x2B30 */
void BaseB_destructor_D0(BaseB *self)
{
 operator delete(self);
}


/* Function: _ZN7MiddleA4funcEv @ 0x2B40 */
int MiddleA::func(MiddleA *self)
{
 return *(int *)((char *)&self->dataA + *((unsigned long long *)self->_vptr$MiddleA - 3)) + 150;
}


/* Function: _ZN7MiddleAD1Ev @ 0x2B60 */
void MiddleA_destructor(MiddleA *self)
{
 ;
}


/* Function: _ZN7MiddleAD0Ev @ 0x2B70 */
void MiddleA_destructor_D0(MiddleA *self)
{
 operator delete(self);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x2B80 */
void MiddleA_virtual_thunk_func()
{
 ;
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x2BA0 */
void MiddleA_virtual_thunk_destructor()
{
 ;
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x2BB0 */
void MiddleA_virtual_thunk_destructor_D0()
{
 unsigned long long *v0; // rdi

 operator delete((char *)v0 + *(unsigned long long *)(*v0 - 32LL));
}


/* Function: _ZN7MiddleB4funcEv @ 0x2BC0 */
int MiddleB::func(MiddleB *self)
{
 return *(int *)((char *)&self->dataB + *((unsigned long long *)self->_vptr$MiddleB - 3)) + 200;
}


/* Function: _ZN7MiddleBD1Ev @ 0x2BE0 */
void MiddleB_destructor(MiddleB *self)
{
 ;
}


/* Function: _ZN7MiddleBD0Ev @ 0x2BF0 */
void MiddleB_destructor_D0(MiddleB *self)
{
 operator delete(self);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x2C00 */
void MiddleB_virtual_thunk_func()
{
 ;
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x2C20 */
void MiddleB_virtual_thunk_destructor()
{
 ;
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x2C30 */
void MiddleB_virtual_thunk_destructor_D0()
{
 unsigned long long *v0; // rdi

 operator delete((char *)v0 + *(unsigned long long *)(*v0 - 32LL));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x2C40 */
int DiamondDerived::func(DiamondDerived *self)
{
 return *(int *)((char *)&self->dataA + *((unsigned long long *)self->_vptr$MiddleA - 3)) + 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x2C60 */
void DiamondDerived_destructor_D0(DiamondDerived *self)
{
 operator delete(self);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x2C70 */
void DiamondDerived_non_virtual_thunk_func()
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x2C90 */
void DiamondDerived_non_virtual_thunk_destructor()
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x2CA0 */
void DiamondDerived_non_virtual_thunk_destructor_D0()
{
 long long v0; // rdi

 operator delete((void *)(v0 - 16));
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x2CB0 */
void DiamondDerived_virtual_thunk_func()
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x2CD0 */
void DiamondDerived_virtual_thunk_destructor()
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2CE0 */
void DiamondDerived_virtual_thunk_destructor_D0()
{
 unsigned long long *v0; // rdi

 operator delete((char *)v0 + *(unsigned long long *)(*v0 - 32LL));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x2CF0 */
int VirtualBase::func(VirtualBase *self)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x2D00 */
void VirtualBase_destructor(VirtualBase *self)
{
 ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x2D10 */
void VirtualBase_destructor_D0(VirtualBase *self)
{
 operator delete(self);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x2D20 */
void RTTIDerivedA_destructor_D0(RTTIDerivedA *self)
{
 operator delete(self);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x2D30 */
int RTTIDerivedA::getType(const RTTIDerivedA *self)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x2D40 */
void RTTIBase_destructor(RTTIBase *self)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x2D50 */
void RTTIDerivedB_destructor_D0(RTTIDerivedB *self)
{
 operator delete(self);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x2D60 */
int RTTIDerivedB::getType(const RTTIDerivedB *self)
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
