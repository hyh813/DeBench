/* Auto-injected type definitions by preprocessor */
#include <string.h>
#include <stdio.h>
#include <new>
#include <stddef.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

typedef unsigned long uintptr_t;
typedef long intptr_t;

typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Forward declarations for typeinfo */
struct type_info;
struct __class_type_info;

/* CRT function declarations */
extern void *_gmon_start__;
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);
void _do_global_dtors_aux(void) {
  /* CRT stub - does nothing */
}

/* Missing C++ library declarations */
namespace std {
  class ios_base {
  public:
    class Init {
    public:
      Init();
      ~Init();
    };
  };
  ios_base::Init __ioinit;
}

/* Platform intrinsics */
static inline unsigned int __readgsdword(unsigned int offset) {
  unsigned int result;
  __asm__ volatile("movl %%gs:%1,%0" : "=r"(result) : "m"(*(unsigned int *)(offset)));
  return result;
}

/* Helper macros for 64-bit integer manipulation */
#define LODWORD(x)  (*(uint32_t*)&(x))
#define HIDWORD(x)  (*(((uint32_t*)&(x)) + 1))
#define HIBYTE(x)  (*(((uint8_t*)&(x)) + 1))

/* C++ RTTI declarations */
extern "C" void *__dynamic_cast(const void *src_ptr,
                                 const struct __class_type_info *src_type,
                                 const struct __class_type_info *dst_type,
                                 ssize_t src2dst_offset);

/* C++ exception handling declarations */
extern "C" void *__cxa_allocate_exception(size_t thrown_size);
extern "C" void __cxa_throw(void *thrown_exception, const struct type_info *tinfo, void (*dest)(void*));
extern "C" int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);

/* DSO handle for atexit registration */
extern void *_dso_handle;

/* Forward declaration for test_cpp_oo_features */
extern void test_cpp_oo_features(void);

/* Forward declarations for template functions */
extern int template_max_int(int a1, int a2);
extern long double template_max_double(double a1, double a2);
extern int *template_swap_int(int *a1, int *a2);

/* External data declarations */
extern int off_3E48;
extern unsigned int off_3E5C;
static const char *asc_2018 = "Test";
extern const char unk_203C[];
extern const char unk_205A[];
extern const char unk_2076[];
extern const char unk_2092[];
extern const char unk_20AE[];
extern const char unk_20CB[];
extern const char unk_20E7[];
extern const char unk_2103[];
extern const char unk_211F[];

/* Forward declarations for classes used in test_cpp_constructor */
class LifecycleClass {
public:
  static int instance_count;
};

int LifecycleClass::instance_count = 0;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_gcc_O2_no_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile("jmp *8(%ebx)");
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1030();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1030();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1030();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1030();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1030();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
 sub_1030();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
 sub_1030();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
 sub_1030();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
 sub_1030();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0()
{
 sub_1030();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
 sub_1030();
}


/* Function: sub_10F0 @ 0x10F0 */
void sub_10F0()
{
 sub_1030();
}


/* Function: sub_1100 @ 0x1100 */
void sub_1100()
{
 sub_1030();
}


/* Function: sub_1110 @ 0x1110 */
void sub_1110()
{
 sub_1030();
}


/* Function: sub_1120 @ 0x1120 */
void sub_1120()
{
 sub_1030();
}


/* Function: sub_1130 @ 0x1130 */
void sub_1130()
{
 sub_1030();
}


/* Function: sub_1140 @ 0x1140 */
void sub_1140()
{
 sub_1030();
}


/* Function: sub_1150 @ 0x1150 */
int sub_1150(int a1)
{
 return (*(int (**)(void))(a1 + 84))();
}


/* Function: _Z18test_cpp_exceptionv @ 0x1270 */
void test_cpp_exception(void)
{
 unsigned int *exception; // eax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (const struct type_info *)0, 0);
}


/* Function: main @ 0x1380 */
int main(int argc, const char **argv, const char **envp)
{
 return 0;
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x13A0 */
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 new (&std::__ioinit) std::ios_base::Init();
 return 0;
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_140C @ 0x140C */
void sub_140C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1410 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1549 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x154D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1560 */
long long test_cpp_member_func(void)
{
 long long result; // rax
 char s[6]; // [esp+0h] [ebp-30h] BYREF
 short v2; // [esp+6h] [ebp-2Ah]
 int v3; // [esp+8h] [ebp-28h]
 int v4; // [esp+Ch] [ebp-24h]
 int v5; // [esp+10h] [ebp-20h]
 int v6; // [esp+14h] [ebp-1Ch]
 int v7; // [esp+18h] [ebp-18h]
 short v8; // [esp+1Ch] [ebp-14h]
 char v9; // [esp+1Eh] [ebp-12h]
 char v10; // [esp+1Fh] [ebp-11h]
 unsigned int v11; // [esp+20h] [ebp-10h]

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


/* Function: _Z20test_cpp_constructorv @ 0x1600 */
int test_cpp_constructor(void)
{
 return 1001 * LifecycleClass::instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1620 */
int call_virtual_func(int (***a1)(void), int a2)
{
 return (**a1)();
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1630 */
int test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1640 */
int test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1650 */
int test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1660 */
int test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1670 */
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
 template_swap_int(&v3, &v4);
 LODWORD(result) = v4 + v3 + v1 + (int)(double)a1;
 HIDWORD(result) = v5 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z23test_cpp_template_classv @ 0x1720 */
int test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1730 */
int test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1740 */
int test_cpp_smart_ptr(void)
{
 return 703;
}








/* Function: _ZN4Base12virtual_funcEi @ 0x1A30 */
int Base_virtual_func(void *this_, int a2)
{
 return a2 + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x1A40 */
const char *Base_getName()
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1A60 */
void Base_dtor()
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1A70 */
int Derived_virtual_func(void *this_, int a2)
{
 return *((unsigned int *)this_ + 1) * a2;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1A90 */
const char *Derived_getName()
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1AB0 */
int MultiDerived_funcA()
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1AC0 */
int MultiDerived_funcB()
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x1AD0 */
int ZThn8_N12MultiDerived5funcBEv()
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1AE0 */
int MiddleA_func(void *this_)
{
 return *(unsigned int *)((char *)this_ + *(unsigned int *)(*(unsigned int *)this_ - 12) + 4) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1B00 */
int ZTv0_n12_N7MiddleA4funcEv(void *this_)
{
 return *(unsigned int *)((char *)this_
 + *(unsigned int *)(*(unsigned int *)this_ - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)this_ + *(unsigned int *)(*(unsigned int *)this_ - 12)) - 12)
 + 4)
 + 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x1B20 */
int MiddleB_func(void *this_)
{
 return *(unsigned int *)((char *)this_ + *(unsigned int *)(*(unsigned int *)this_ - 12) + 4) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1B40 */
int ZTv0_n12_N7MiddleB4funcEv(void *this_)
{
 return *(unsigned int *)((char *)this_
 + *(unsigned int *)(*(unsigned int *)this_ - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)this_ + *(unsigned int *)(*(unsigned int *)this_ - 12)) - 12)
 + 4)
 + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1B60 */
int DiamondDerived_func(void *this_)
{
 return *(unsigned int *)((char *)this_ + *(unsigned int *)(*(unsigned int *)this_ - 12) + 4) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x1B80 */
int ZTv0_n12_N14DiamondDerived4funcEv(void *this_)
{
 return *(unsigned int *)((char *)this_
 + *(unsigned int *)(*(unsigned int *)this_ - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)this_ + *(unsigned int *)(*(unsigned int *)this_ - 12)) - 12)
 + 4)
 + 250;
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1BA0 */
int ZThn8_N14DiamondDerived4funcEv(void *this_)
{
 return *(unsigned int *)((char *)this_ + *(unsigned int *)(*((unsigned int *)this_ - 2) - 12) - 4) + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1BC0 */
int RTTIDerivedA_getType()
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1BD0 */
int RTTIDerivedB_getType()
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1BE0 */
void RTTIDerivedB_dtor()
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1BF0 */
void RTTIDerivedA_dtor()
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1C00 */
void DiamondDerived_dtor()
{
 ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1C10 */
void ZTv0_n16_N14DiamondDerivedD1Ev()
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x1C20 */
void ZThn8_N14DiamondDerivedD1Ev()
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1C30 */
void MultiDerived_dtor()
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1C40 */
void ZThn8_N12MultiDerivedD1Ev()
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1C50 */
void Derived_dtor()
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1C60 */
void Base_d0(void *this_)
{
 operator delete(this_, 4u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1C90 */
void Derived_d0(void *this_)
{
 operator delete(this_, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1CC0 */
void MultiDerived_d0(void *this_)
{
 operator delete(this_, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1CF0 */
void ZThn8_N12MultiDerivedD0Ev(void *this_)
{
 operator delete((char *)this_ - 8, 0x10u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1D20 */
void RTTIDerivedB_d0(void *this_)
{
 operator delete(this_, 4u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1D50 */
void RTTIDerivedA_d0(void *this_)
{
 operator delete(this_, 4u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1D80 */
void DiamondDerived_d0(void *this_)
{
 operator delete(this_, 0x18u);
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x1DB0 */
void ZTv0_n16_N14DiamondDerivedD0Ev(void *this_)
{
 operator delete((char *)this_ + *(unsigned int *)(*(unsigned int *)this_ - 16), 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x1DE0 */
void ZThn8_N14DiamondDerivedD0Ev(void *this_)
{
 operator delete((char *)this_ - 8, 0x18u);
}


/* Template function declarations */
/* Template function declarations */
template<typename T>
T template_max(T a1, T a2) {
  return a1 < a2 ? a2 : a1;
}

template<typename T>
void template_swap(T *a1, T *a2) {
  T temp = *a1;
  *a1 = *a2;
  *a2 = temp;
}

/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1E10 */
int template_max_int(int a1, int a2)
{
 int result; // eax

 result = a1 < a2 ? a2 : a1;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1E30 */
long double template_max_double(double a1, double a2)
{
 return a1 <= (long double)a2 ? (long double)a2 : (long double)a1;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1E50 */
int *template_swap_int(int *a1, int *a2)
{
 int *result; // eax
 int v3; // ecx

 result = a2;
 v3 = *a1;
 *a1 = *a2;
 *a2 = v3;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1E70 */
int Container_int_ctor(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1E80 */
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


/* Function: _ZNK9ContainerIiE3getEi @ 0x1EA0 */
int Container_int_get(int a1, int a2)
{
 int result; // eax

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4 * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1ED0 */
int Container_int_getSize(int a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1EE0 */
int Container_double_ctor(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1EF0 */
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


/* Function: _ZNK9ContainerIdE3getEi @ 0x1F20 */
long double Container_double_get(int a1, int a2)
{
 if ( a2 >= 0 && a2 < *(unsigned int *)(a1 + 80) )
 return *(double *)(a1 + 8 * a2);
 else
 return 0.0;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1F50 */
int Container_double_getSize(int a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: __x86.get_pc_thunk.ax @ 0x1F5C */
void *_x86_get_pc_thunk_ax()
{
 void *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __x86.get_pc_thunk.si @ 0x1F60 */
void _x86_get_pc_thunk_si()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x1F70 */
void _stack_chk_fail_local()
{
 __asm__ volatile("call __stack_chk_fail");
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1FDC */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __printf_chk @ 0x402C */

/* FAILED to decompile: _Znwj @ 0x4034 */

/* FAILED to decompile: __cxa_finalize @ 0x4038 */

/* FAILED to decompile: __cxa_begin_catch @ 0x403C */

/* FAILED to decompile: __cxa_allocate_exception @ 0x4040 */

/* FAILED to decompile: strlen @ 0x4044 */

/* FAILED to decompile: __cxa_atexit @ 0x4048 */

/* FAILED to decompile: _ZdlPvj @ 0x404C */

/* FAILED to decompile: strcmp @ 0x4054 */

/* FAILED to decompile: __libc_start_main @ 0x4058 */

/* FAILED to decompile: __stack_chk_fail @ 0x405C */

/* FAILED to decompile: __dynamic_cast @ 0x4060 */

/* FAILED to decompile: __cxa_rethrow @ 0x4068 */

/* FAILED to decompile: puts @ 0x406C */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x4070 */

/* FAILED to decompile: __cxa_end_catch @ 0x4074 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x4078 */

/* FAILED to decompile: __cxa_throw @ 0x407C */

/* FAILED to decompile: _Unwind_Resume @ 0x4080 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x4084 */

/* Total functions decompiled: 95, failed: 20 */
