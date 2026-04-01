/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_gcc_O1_no_g
 * Processor: pc
 */

#include <string.h>
#include <stdio.h>
#include <math.h>
#include <new>

/* Define GCC intrinsic for stack canary */
static inline unsigned long long __readfsqword(unsigned long long offset)
{
    unsigned long long val;
    __asm__ volatile ("movq %%fs:%1, %0" : "=r" (val) : "m" (offset));
    return val;
}

/* Forward declarations for decompiled types */
struct Base;
struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;

/* Forward declarations for virtual thunk functions */
long long virtual_thunk_to_DiamondDerived_func(DiamondDerived *_this);

/* Forward declarations for template functions */
long long template_max_int(unsigned int a1, unsigned int a2);
double template_max_double(double a1, double a2);
long long template_swap_int(unsigned int *a1, unsigned int *a2);

struct LifecycleClass {
    static int instance_count;
};

int LifecycleClass::instance_count = 0;

/* Forward declarations for RTTI */
struct type_info;

/* __dynamic_cast declaration */
extern void *__dynamic_cast(void *src, const struct type_info *src_type, const struct type_info *dst_type, long offset);

/* __cxa_allocate_exception declaration */
extern void *__cxa_allocate_exception(unsigned int size);

/* __cxa_throw declaration */
extern void __cxa_throw(void *exception, const struct type_info *tinfo, void (*dest)(void *));

/* __printf_chk declaration */
extern int __printf_chk(int flag, const char *fmt, ...);

/* Minimal std::ios_base stub for decompiled code */
namespace std {
    struct ios_base {
        ios_base() {}
        ~ios_base() {}
        struct Init {
            Init() {}
            ~Init() {}
        };
    };
    extern ios_base::Init __ioinit;
}

/* External symbols referenced */
extern "C" void *_dso_handle;
extern "C" void _gmon_start__(void);

/* Vtable and data references */
extern long long off_59A0[];
extern long long off_59D0[4];
extern long long off_5B78[4];
extern long long off_5BA0[];
extern long long off_5BC8[];
extern long long typeinfo_for_RTTRIBase;
extern long long typeinfo_for_RTTIDerivedA;
extern long long typeinfo_for_RTTIDerivedB;
extern long long typeinfo_for_int;

/* String and data references */
extern const char *s;
extern const char *unk_303C;
extern const char *unk_305A;
extern const char *unk_3076;
extern const char *unk_3092;
extern const char *unk_30AE;
extern const char *unk_30CB;
extern const char *unk_30E7;
extern const char *unk_3103;
extern const char *unk_311F;

/* Function: .init_proc @ 0x2000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = (long long (**)(void))&_gmon_start__;
 if ( &_gmon_start__ )
 {
 _gmon_start__();
 return result;
 }
 return result;
}


/* Function: sub_2020 @ 0x2020 */
void sub_2020()
{
 /* JUMPOUT(0) - decompiler artifact */
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
 unsigned int *v0; // rdi
 int v1; // eax
 int v2; // ebx

 v0 = (unsigned int *)(char *)operator new[](0x14u);
 v0[1] = 10;
 v0[2] = 20;
 v0[3] = 30;
 v0[4] = 40;
 v1 = LifecycleClass::instance_count++;
 v2 = v1 + 21;
 operator delete[](v0);
 --LifecycleClass::instance_count;
 return (unsigned int)(v2 + 1000 * LifecycleClass::instance_count);
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
 long long ( **v2)(Base *__hidden, int); // [rsp+8h] [rbp-30h] BYREF
 long long ( **v3)(Derived *__hidden, int); // [rsp+10h] [rbp-28h] BYREF
 int v4; // [rsp+18h] [rbp-20h]
 unsigned long long v5; // [rsp+28h] [rbp-10h]

 v5 = __readfsqword(0x28u);
 v2 = (long long ( **)(Base *__hidden, int))off_59A0;
 v3 = (long long ( **)(Derived *__hidden, int))off_59D0;
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
 long long v0; // rbx
 unsigned long long v2; // [rsp+20h] [rbp-38h] BYREF
 int v3; // [rsp+28h] [rbp-30h]
 unsigned long long v4; // [rsp+38h] [rbp-20h]

 v4 = __readfsqword(0x28u);
 v2 = (unsigned long long)&off_5B78;
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
 unsigned int *exception; // rdi

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
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
 unsigned long long v2; // r14
 const char *v3; // rbp
 int v4; // ebx
 unsigned int v5; // ebx
 unsigned int v6; // ebx

 v0 = (long long *)operator new(8u);
 *v0 = (long long)off_5BA0;
 v1 = (void *)operator new(8u);
 *(unsigned long long *)v1 = off_5BC8;
 v2 = (unsigned long long)v0;
 v3 = "12RTTIDerivedA";
 v4 = 10;
 if ( v3 != "12RTTIDerivedA" )
 {
 v4 = 0;
 }
 v5 = v4 + 20;
 if ( __dynamic_cast(
 v0,
 (const struct type_info *)&typeinfo_for_RTTRIBase,
 (const struct type_info *)&typeinfo_for_RTTIDerivedA,
 0) )
 {
 v5 += 100;
 }
 if ( __dynamic_cast(
 v1,
 (const struct type_info *)&typeinfo_for_RTTRIBase,
 (const struct type_info *)&typeinfo_for_RTTIDerivedB,
 0) )
 {
 v5 += 200;
 }
 v6 = strlen(v3) + v5;
 (*(void (**)(long long *))((long long *)(v2) + 1))(v0);
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

 puts(s);
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


/* Forward declaration for cleanup function */
extern "C" int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);

/* Cleanup function for ios_base::Init */
static void ios_base_Init_cleanup(void *arg)
{
 std::ios_base::Init *p = (std::ios_base::Init*)arg;
 p->~Init();
}

/* Function: _GLOBAL__sub_I__Z20test_cpp_member_func__Z20test_cpp_member_funcv @ 0x2987 */
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 new (&std::__ioinit) std::ios_base::Init();
 return __cxa_atexit(ios_base_Init_cleanup, &std::__ioinit, &_dso_handle);
}


/* Function: _ZN4Base12virtual_funcEi @ 0x29B4 */
long long Base_virtual_func(Base *_this, int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x29BC */
const char * Base_getName(Base *_this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x29C8 */
void Base_destructor(Base *_this)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x29CE */
long long Derived_virtual_func(Derived *_this, int a2)
{
 return (unsigned int)(*((unsigned int *)_this + 2) * a2);
}


/* Function: _ZNK7Derived7getNameEv @ 0x29DA */
const char * Derived_getName(Derived *_this)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x29E6 */
long long MultiDerived_funcA(MultiDerived *_this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x29F0 */
long long MultiDerived_funcB(MultiDerived *_this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x29FA */
long long non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *_this)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x2A04 */
long long MiddleA_func(MiddleA *_this)
{
 return (unsigned int)(*(unsigned int *)((char *)_this + *(unsigned long long *)((unsigned long long)*(unsigned long long *)_this - 24LL) + 8) + 150);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x2A19 */
long long virtual_thunk_to_MiddleA_func(MiddleA *_this)
{
 return (unsigned int)(*(unsigned int *)((char *)_this
 + *(unsigned long long *)(*(unsigned long long *)_this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)_this + *(unsigned long long *)(*(unsigned long long *)_this - 24LL)) - 24LL)
 + 8)
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x2A36 */
long long MiddleB_func(MiddleB *_this)
{
 return (unsigned int)(*(unsigned int *)((char *)_this + *(unsigned long long *)(*(unsigned long long *)_this - 24LL) + 8) + 200);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x2A4B */
long long virtual_thunk_to_MiddleB_func(MiddleB *_this)
{
 return (unsigned int)(*(unsigned int *)((char *)_this
 + *(unsigned long long *)(*(unsigned long long *)_this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)_this + *(unsigned long long *)(*(unsigned long long *)_this - 24LL)) - 24LL)
 + 8)
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x2A68 */
long long DiamondDerived_func(DiamondDerived *_this)
{
 unsigned long long vtable_offset;
 char *vtable_ptr;
 vtable_offset = (unsigned long long)(*(long long *)_this) - 24ULL;
 vtable_ptr = (char *)_this + vtable_offset;
 return (unsigned int)(*(unsigned int *)(vtable_ptr + *(unsigned long long *)((unsigned long long)(*(unsigned long long *)vtable_ptr) - 24LL) + 8) + 250);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x2A7D */
long long virtual_thunk_to_DiamondDerived_func(DiamondDerived *_this)
{
 unsigned long long vtable_offset;
 char *vtable_ptr;
 vtable_offset = *(unsigned long long *)((char *)_this - 24LL);
 vtable_ptr = (char *)_this + vtable_offset;
 return (unsigned int)(*(unsigned int *)(vtable_ptr + *(unsigned long long *)(*(unsigned long long *)vtable_ptr - 24LL) + 8) + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x2A99 */
long long non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *_this)
{
 return (unsigned int)(*(unsigned int *)((char *)_this + *(unsigned long long *)(*((unsigned long long *)_this - 2) - 24LL) - 8) + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x2AB0 */
long long RTTIDerivedA_getType(RTTIDerivedA *_this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x2ABA */
long long RTTIDerivedB_getType(RTTIDerivedB *_this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x2AC4 */
void RTTIDerivedB_destructor(RTTIDerivedB *_this)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x2ACA */
void RTTIDerivedA_destructor(RTTIDerivedA *_this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2AD0 */
void DiamondDerived_destructor(DiamondDerived *_this)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x2AD5 */
void non_virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *_this)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x2ADA */
void virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *_this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2AEv @ 0x2AE0 */
void MultiDerived_destructor(MultiDerived *_this)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x2AE5 */
void non_virtual_thunk_to_MultiDerived_destructor(MultiDerived *_this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x2AEA */
void Derived_destructor(Derived *_this)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x2AF0 */
void Base_deleting_destructor(Base *_this)
{
 operator delete(_this, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x2B08 */
void Derived_deleting(Derived *_this)
{
operator delete(_this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x2B20 */
void MultiDerived_deleting(MultiDerived *_this)
{
 operator delete(_this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x2B37 */
void non_virtual_thunk_to_MultiDerived_deleting(MultiDerived *_this)
{
 operator delete((char *)_this - 16, 0x20u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x2B52 */
void RTTIDerivedA_deleting(RTTIDerivedA *_this)
{
 operator delete(_this, 8u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x2B6A */
void RTTIDerivedB_deleting(RTTIDerivedB *_this)
{
 operator delete(_this, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x2B82 */
void DiamondDerived_deleting(DiamondDerived *_this)
{
 operator delete(_this, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2B99 */
void virtual_thunk_to_DiamondDerived_deleting(DiamondDerived *_this)
{
 operator delete((void *)((char *)_this + *(unsigned long long *)(*(unsigned long long *)_this - 32LL)), 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x2BB7 */
void non_virtual_thunk_to_DiamondDerived_deleting(DiamondDerived *_this)
{
 operator delete((char *)_this - 16, 0x30u);
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
