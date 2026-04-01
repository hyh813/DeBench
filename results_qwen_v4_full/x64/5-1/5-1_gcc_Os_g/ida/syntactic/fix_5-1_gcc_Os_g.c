/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_gcc_Os_g
 * Processor: pc
 */

/* Forward declarations for C++ classes */
struct Base;
struct Derived;
struct MultiDerived;
struct VirtualBase;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct Container_int;
struct Container_double;
struct std_unique_ptr_int;
struct std_unique_ptr_int_array;
struct SimpleClass;
struct LifecycleClass;

/* Struct definitions */
struct Base {
    int (**_vptr_Base)(...);
};

struct Derived {
    int (**_vptr_Base)(...);
    int multiplier;
};

struct MultiDerived {
    int (**_vptr_Base)(...);
};

struct VirtualBase {
    int dummy;
};

struct MiddleA {
    int (**_vptr_MiddleA)(...);
    int dataA;
};

struct MiddleB {
    int (**_vptr_MiddleB)(...);
    int dataB;
};

struct DiamondDerived {
    int (**_vptr_MiddleA)(...);
    int dataA;
    int dataB;
    int (**_vptr_MiddleB)(...);
    MiddleA middleA_subobj;
    MiddleB middleB_subobj;
};

struct RTTIDerivedA {
    long long dummy;
};

struct RTTIDerivedB {
    long long dummy;
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
    union {
        int *gap0;
        int *_M_head_impl;
    } _M_t;
};

struct std_unique_ptr_int_array {
    union {
        int *gap0;
        int *_M_head_impl;
    } _M_t;
};

struct SimpleClass {
    char name[32];
};

struct LifecycleClass {
    int dummy;
};

/* External declarations */
extern int LifecycleClass_instance_count;
extern char *s;
extern const char *unk_303A;
extern const char *unk_3058;
extern const char *unk_3074;
extern const char *unk_3090;
extern const char *unk_30AC;
extern const char *unk_30C9;
extern const char *unk_30E5;
extern const char *unk_3101;
extern const char *unk_311D;
extern void *off_58A8;
extern void *off_58D8;
extern void *off_5920;
extern void *off_5958;
extern void *off_5998;
extern void *off_59D0;
extern void *off_5B08;
extern void *off_5B38;
extern void *off_5B70;
extern const void **off_5AD0;
extern const void **off_5AC0;
extern void *off_5B98;
extern void *off_5BC0;
extern void *typeinfo_for_int;
extern void *typeinfo_for_RTTIBase;
extern void *typeinfo_for_RTTIDerivedA;
extern void *typeinfo_for_RTTIDerivedB;
extern void *_dso_handle;
extern void *_gmon_start__;
extern struct std___ioinit { char dummy; } std___ioinit;

/* Function prototypes */
#include <math.h>
#include <stdint.h>
int __printf_chk(int flag, const char *format, ...);
void *operator_new(unsigned long size);
void *operator_new_array(unsigned long size);
void operator_delete(void *ptr, unsigned long size);
void operator_delete_array(void *ptr);
void *__cxa_allocate_exception(unsigned long size);
void __cxa_throw(void *exc, void *type_info, void *dest);
int __dynamic_cast(void *src, void *src_type, void *dst_type, int flags);
void *_Znwm(unsigned long size);
void _ZdlPvm(void *ptr, unsigned long size);
void _ZdaPv(void *ptr);
char *strncpy(char *dest, const char *src, unsigned long n);
unsigned long strlen(const char *s);
int strcmp(const char *s1, const char *s2);
void puts(const char *s);
unsigned long long __readfsqword(unsigned int offset);
void _cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void std__ios_base__Init__Init(void *this_);
void std__ios_base__Init___Init(void *this_);
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);
void Container_int_push(Container_int *this_, int value);
void Container_double_push(Container_double *this_, double value);
void std_unique_ptr_int_destructor(std_unique_ptr_int *this_);
void std_unique_ptr_int_array_destructor(std_unique_ptr_int_array *this_);
void DiamondDerived_destructor(DiamondDerived *this_);
void MiddleA_destructor_vtt_wrapper(MiddleA *this_, const void **vtt_parm);
void MiddleB_destructor_vtt_wrapper(MiddleB *this_, const void **vtt_parm);
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *this_);
int virtual_thunk_to_MiddleA_func(MiddleA *this_);
int virtual_thunk_to_MiddleB_func(MiddleB *this_);
int Base_virtual_func(Base *this_, int x);
const char *Base_getName(const Base *this_);
void Base_destructor(Base *this_);
int Derived_virtual_func(Derived *this_, int x);
const char *Derived_getName(const Derived *this_);
int MultiDerived_funcA(MultiDerived *this_);
int MultiDerived_funcB(MultiDerived *this_);
long long non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *this_);
int VirtualBase_func(VirtualBase *this_);
void VirtualBase_destructor(VirtualBase *this_);
int MiddleA_func(MiddleA *this_);
int virtual_thunk_to_MiddleA_func(MiddleA *this_);
int MiddleB_func(MiddleB *this_);
int virtual_thunk_to_MiddleB_func(MiddleB *this_);
int DiamondDerived_func(DiamondDerived *this_);
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *this_);
int non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *this_);
void MiddleA_destructor(MiddleA *this_);
void virtual_thunk_to_MiddleA_destructor(MiddleA *this_);
void MiddleB_destructor(MiddleB *this_);
void virtual_thunk_to_MiddleB_destructor(MiddleB *this_);
int RTTIDerivedA_getType(const RTTIDerivedA *this_);
int RTTIDerivedB_getType(const RTTIDerivedB *this_);
void RTTIDerivedB_destructor(RTTIDerivedB *this_);
void RTTIDerivedA_destructor(RTTIDerivedA *this_);
void MultiDerived_destructor(MultiDerived *this_);
void non_virtual_thunk_to_MultiDerived_destructor(MultiDerived *this_);
void Derived_destructor(Derived *this_);
void Base_destructor_delete(Base *this_);
void Derived_destructor_delete(Derived *this_);
void MultiDerived_destructor_delete(MultiDerived *this_);
void non_virtual_thunk_to_MultiDerived_destructor_delete(MultiDerived *this_);
void VirtualBase_destructor_delete(VirtualBase *this_);
void RTTIDerivedB_destructor_delete(RTTIDerivedB *this_);
void RTTIDerivedA_destructor_delete(RTTIDerivedA *this_);
void MiddleA_destructor_delete(MiddleA *this_);
void virtual_thunk_to_MiddleA_destructor_delete(MiddleA *this_);
void MiddleB_destructor_delete(MiddleB *this_);
void virtual_thunk_to_MiddleB_destructor_delete(MiddleB *this_);
void MiddleA_destructor_vtt(MiddleA *this_, int __in_chrg, const void **__vtt_parm);
void MiddleA_destructor_vtt_wrapper(MiddleA *this_, const void **__vtt_parm);
void MiddleB_destructor_vtt(MiddleB *this_, int __in_chrg, const void **__vtt_parm);
void MiddleB_destructor_vtt_wrapper(MiddleB *this_, const void **__vtt_parm);
void DiamondDerived_destructor_vtt(DiamondDerived *this_, int __in_chrg, const void **__vtt_parm);
void DiamondDerived_destructor(DiamondDerived *this_);
void non_virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *this_);
void virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *this_);
void DiamondDerived_destructor_delete(DiamondDerived *this_);
void non_virtual_thunk_to_DiamondDerived_destructor_delete(DiamondDerived *this_);
void virtual_thunk_to_DiamondDerived_destructor_delete(DiamondDerived *this_);
void DiamondDerived_destructor_vtt_wrapper(DiamondDerived *this_, const void **__vtt_parm);
void Container_int_constructor(Container_int *this_);
void Container_int_push(Container_int *this_, int value);
int Container_int_get(Container_int *this_, int idx);
int Container_int_getSize(Container_int *this_);
void Container_double_constructor(Container_double *this_);
void Container_double_push(Container_double *this_, double value);
double Container_double_get(Container_double *this_, int idx);
int Container_double_getSize(Container_double *this_);
void std_unique_ptr_int_destructor(std_unique_ptr_int *this_);
void std_unique_ptr_int_array_destructor(std_unique_ptr_int_array *this_);
void test_cpp_oo_features();

/* Function: .init_proc @ 0x2000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = (long long (**)(void))&_gmon_start__;
 if ( &_gmon_start__ )
 return (long long (**)(void))_gmon_start__;
 return result;
}


/* Function: sub_2020 @ 0x2020 */
void sub_2020()
{
 return;
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
int test_cpp_exception()
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
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x2375 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 std__ios_base__Init__Init(&std___ioinit);
 _cxa_atexit((void (*)(void *))&std__ios_base__Init___Init, &std___ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x2489 */
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


/* Function: _Z20test_cpp_constructorv @ 0x24E3 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass_instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x24F5 */
int call_virtual_func(Base *obj, int x)
{
 return (*obj->_vptr_Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x24FE */
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


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x2571 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x257B */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x2585 */
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
 r2 = template_max_double(1.5, v0);
 b = 20;
 template_swap_int(&a, &b);
 return b + a + v1 + (int)r2;
}


/* Function: _Z23test_cpp_template_classv @ 0x2618 */
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


/* Function: _Z15test_cpp_lambdav @ 0x268D */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z13test_cpp_rttiv @ 0x2697 */
int test_cpp_rtti()
{
 int v0; // ebx
 long long *v1; // r13
 unsigned long long *v2; // rax
 unsigned long long v3; // r14
 void *v4; // rbp
 unsigned long long v5; // rax
 const char *v6; // r12
 int v7; // ebx
 int v8; // r12d

  v0 = 10;
  v1 = (long long *)operator_new(8u);
  *v1 = (long long)(uintptr_t)off_5B98;
  v2 = (unsigned long long *)operator_new(8u);
  v3 = *v1;
  v4 = (void *)v2;
  *(unsigned long long *)v4 = (uintptr_t)off_5BC0;
 v5 = (unsigned long long)(uintptr_t)*((void **)((char *)(uintptr_t)v3 - 8));
 v6 = (const char *)(*(unsigned long long *)((char *)v5 + 8));
 if ( v6 != "12RTTIDerivedA" )
 {
 v0 = 0;
 if ( *v6 != 42 )
 v0 = strcmp((const char *)*(unsigned long long *)((char *)v5 + 8), "12RTTIDerivedA") == 0 ? 0xA : 0;
 }
 v7 = v0 + 20;
 if ( __dynamic_cast(
 (void *)v1,
 (void *)&typeinfo_for_RTTIBase,
 (void *)&typeinfo_for_RTTIDerivedA,
 0) )
 {
 v7 += 100;
 }
 if ( __dynamic_cast(
 (void *)v4,
 (void *)&typeinfo_for_RTTIBase,
 (void *)&typeinfo_for_RTTIDerivedB,
 0) )
 {
 v7 += 200;
 }
 if ( *v6 == 42 )
 v6++;
 v8 = v7 + strlen(v6);
 (*(void ( **)(long long *))((char *)v3 + 8))(v1);
 (*(void ( **)(void *))(*(unsigned long long *)v4 + 8LL))(v4);
 return v8;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x27AC */
int test_cpp_smart_ptr()
{
 int *v0; // rax
 long long v1; // rax
 std_unique_ptr_int ptr2; // [rsp+0h] [rbp-38h] BYREF
 std_unique_ptr_int_array arr; // [rsp+10h] [rbp-28h] BYREF

  arr._M_t._M_head_impl = (int *)(unsigned long)__readfsqword(0x28u);
  v0 = (int *)operator_new(4u);
  ptr2._M_t._M_head_impl = 0;
  *v0 = 200;
  ptr2._M_t._M_head_impl = v0;
 v1 = (unsigned long long)operator_new_array(0x14u);
 arr._M_t._M_head_impl = (int *)v1;
 *(unsigned long long *)v1 = 0x200000001LL;
 *(unsigned long long *)(v1 + 8) = 0x400000003LL;
 *(unsigned int *)(v1 + 16) = 5;
 std_unique_ptr_int_array_destructor(&arr);
 std_unique_ptr_int_destructor(&ptr2);
 return 703;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x287C */
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
  v0 = virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&obj.middleB_subobj);
  obj.dataB = 100;
  v1 = v0 + virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&obj.middleB_subobj);
 DiamondDerived_destructor(&obj);
 return v1;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x290D */
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
int Base_virtual_func(Base *this_, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x2A60 */
const char *Base_getName(const Base *this_)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x2A6C */
void Base_destructor(Base *this_)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x2A72 */
int Derived_virtual_func(Derived *this_, int x)
{
 return x * this_->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x2A7E */
const char *Derived_getName(const Derived *this_)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x2A8A */
int MultiDerived_funcA(MultiDerived *this_)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x2A94 */
int MultiDerived_funcB(MultiDerived *this_)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x2A9E */
long long non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *this_)
{
 return 40;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x2AA8 */
int VirtualBase_func(VirtualBase *this_)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x2AB2 */
void VirtualBase_destructor(VirtualBase *this_)
{
 ;
}


/* Function: _ZN7MiddleA4funcEv @ 0x2AB8 */
int MiddleA_func(MiddleA *this_)
{
 return *(int *)((char *)&this_->dataA + (long long)*((unsigned long long *)(uintptr_t)this_->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x2ACD */
int virtual_thunk_to_MiddleA_func(MiddleA *this_)
{
 return MiddleA_func((MiddleA *)((char *)this_ + (long long)((long long)*((unsigned long long *)(uintptr_t)this_->_vptr_MiddleA - 3))));
}


/* Function: _ZN7MiddleB4funcEv @ 0x2ADA */
int MiddleB_func(MiddleB *this_)
{
 return *(int *)((char *)&this_->dataB + (long long)((long long)*((unsigned long long *)(uintptr_t)this_->_vptr_MiddleB - 3))) + 200;
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x2AEF */
int virtual_thunk_to_MiddleB_func(MiddleB *this_)
{
 return MiddleB_func((MiddleB *)((char *)this_ + (long long)((long long)*((unsigned long long *)(uintptr_t)this_->_vptr_MiddleB - 3))));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x2AFC */
int DiamondDerived_func(DiamondDerived *this_)
{
 return *(int *)((char *)&this_->dataA + (long long)((long long)*((unsigned long long *)(uintptr_t)this_->_vptr_MiddleA - 3))) + 250;
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x2B11 */
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *this_)
{
 return DiamondDerived_func((DiamondDerived *)((char *)this_ + (long long)((long long)*((unsigned long long *)(uintptr_t)this_->_vptr_MiddleA - 3))));
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x2B1E */
int non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *this_)
{
 return DiamondDerived_func((DiamondDerived *)((char *)this_ - 16));
}


/* Function: _ZN7MiddleAD1Ev @ 0x2B28 */
void MiddleA_destructor(MiddleA *this_)
{
 this_->_vptr_MiddleA = (int (**)(...))&off_5920;
 *((unsigned long long *)&this_->dataA + 1) = (unsigned long long)&off_5958;
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x2B3F */
void virtual_thunk_to_MiddleA_destructor(MiddleA *this_)
{
 unsigned long long *v1; // rdi

 v1 = (unsigned long long *)((char *)&this_->_vptr_MiddleA + (long long)((long long)*((unsigned long long *)(char *)this_->_vptr_MiddleA - 4)));
 *v1 = (unsigned long long)&off_5920;
 v1[2] = (unsigned long long)&off_5958;
}


/* Function: _ZN7MiddleBD1Ev @ 0x2B5E */
void MiddleB_destructor(MiddleB *this_)
{
 this_->_vptr_MiddleB = (int (**)(...))&off_5998;
 *((unsigned long long *)&this_->dataB + 1) = (unsigned long long)&off_59D0;
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x2B75 */
void virtual_thunk_to_MiddleB_destructor(MiddleB *this_)
{
 unsigned long long *v1; // rdi

 v1 = (unsigned long long *)((char *)&this_->_vptr_MiddleB + (long long)((long long)*((unsigned long long *)(char *)this_->_vptr_MiddleB - 4)));
 *v1 = (unsigned long long)&off_5998;
 v1[2] = (unsigned long long)&off_59D0;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x2B94 */
int RTTIDerivedA_getType(const RTTIDerivedA *this_)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x2B9E */
int RTTIDerivedB_getType(const RTTIDerivedB *this_)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x2BA8 */
void RTTIDerivedB_destructor(RTTIDerivedB *this_)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x2BAE */
void RTTIDerivedA_destructor(RTTIDerivedA *this_)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x2BB4 */
void MultiDerived_destructor(MultiDerived *this_)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x2BB9 */
void non_virtual_thunk_to_MultiDerived_destructor(MultiDerived *this_)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x2BBE */
void Derived_destructor(Derived *this_)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x2BC4 */
void Base_destructor_delete(Base *this_)
{
 operator_delete(this_, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x2BD2 */
void Derived_destructor_delete(Derived *this_)
{
 operator_delete(this_, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x2BE0 */
void MultiDerived_destructor_delete(MultiDerived *this_)
{
 operator_delete(this_, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x2BEE */
void non_virtual_thunk_to_MultiDerived_destructor_delete(MultiDerived *this_)
{
 MultiDerived_destructor_delete((MultiDerived *)((char *)this_ - 16));
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x2BF8 */
void VirtualBase_destructor_delete(VirtualBase *this_)
{
 operator_delete(this_, 0x10u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x2C06 */
void RTTIDerivedB_destructor_delete(RTTIDerivedB *this_)
{
 operator_delete(this_, 8u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x2C14 */
void RTTIDerivedA_destructor_delete(RTTIDerivedA *this_)
{
 operator_delete(this_, 8u);
}


/* Function: _ZN7MiddleAD0Ev @ 0x2C22 */
void MiddleA_destructor_delete(MiddleA *this_)
{
 this_->_vptr_MiddleA = (int (**)(...))&off_5920;
 *((unsigned long long *)&this_->dataA + 1) = (unsigned long long)&off_5958;
 operator_delete(this_, 0x20u);
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x2C42 */
void virtual_thunk_to_MiddleA_destructor_delete(MiddleA *this_)
{
 MiddleA_destructor_delete((MiddleA *)((char *)this_ + (long long)*((unsigned long long *)(char *)this_->_vptr_MiddleA - 4)));
}


/* Function: _ZN7MiddleBD0Ev @ 0x2C50 */
void MiddleB_destructor_delete(MiddleB *this_)
{
 this_->_vptr_MiddleB = (int (**)(...))&off_5998;
 *((unsigned long long *)&this_->dataB + 1) = (unsigned long long)&off_59D0;
 operator_delete(this_, 0x20u);
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x2C70 */
void virtual_thunk_to_MiddleB_destructor_delete(MiddleB *this_)
{
 MiddleB_destructor_delete((MiddleB *)((char *)this_ + (long long)*((unsigned long long *)(char *)this_->_vptr_MiddleB - 4)));
}


/* Function: _ZN7MiddleAD4Ev @ 0x2C7E */
void MiddleA_destructor_vtt(MiddleA *this_, int __in_chrg, const void **__vtt_parm)
{
 int (**v3)(...); // rax
 int (**v4)(...); // r8
 long long v5; // rcx

  v3 = (int (**)(...))&off_5920;
  if ( !__in_chrg )
    v3 = (int (**)(...))*(void **)*(const void ***)__vtt_parm;
  this_->_vptr_MiddleA = v3;
  v4 = (int (**)(...))&off_5958;
  v5 = 16;
  if ( !__in_chrg )
  {
    v4 = (int (**)(...))*((const void ***)((const char *)__vtt_parm + 1 * sizeof(void *)));
    v5 = (long long)*(unsigned long long *)((char *)v3 - 24);
  }
 *(int (***)(...))((char *)&this_->_vptr_MiddleA + v5) = v4;
}


/* Function: _ZN7MiddleAD2Ev @ 0x2CB0 */
void MiddleA_destructor_vtt_wrapper(MiddleA *this_, const void **__vtt_parm)
{
 MiddleA_destructor_vtt(this_, 0, __vtt_parm);
}


/* Function: _ZN7MiddleBD4Ev @ 0x2CBE */
void MiddleB_destructor_vtt(MiddleB *this_, int __in_chrg, const void **__vtt_parm)
{
 int (**v3)(...); // rax
 int (**v4)(...); // r8
 long long v5; // rcx

  v3 = (int (**)(...))&off_5998;
  if ( !__in_chrg )
    v3 = (int (**)(...))*(void **)*(const void ***)__vtt_parm;
  this_->_vptr_MiddleB = v3;
  v4 = (int (**)(...))&off_59D0;
  v5 = 16;
  if ( !__in_chrg )
  {
    v4 = (int (**)(...))*((const void ***)((const char *)__vtt_parm + 1 * sizeof(void *)));
    v5 = (long long)*(unsigned long long *)((char *)v3 - 24);
  }
 *(int (***)(...))((char *)&this_->_vptr_MiddleB + v5) = v4;
}


/* Function: _ZN7MiddleBD2Ev @ 0x2CF0 */
void MiddleB_destructor_vtt_wrapper(MiddleB *this_, const void **__vtt_parm)
{
 MiddleB_destructor_vtt(this_, 0, __vtt_parm);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2CFE */
int template_max_int(int a, int b)
{
 int result; // eax

 result = b;
 if ( a >= b )
 return a;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2D0A */
double template_max_double(double a, double b)
{
 return fmax(a, b);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x2D13 */
void template_swap_int(int *a, int *b)
{
 int v2; // eax

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x2D20 */
void Container_int_constructor(Container_int *const this_)
{
 this_->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x2D2C */
void Container_int_push(Container_int *this_, int value)
{
 long long size; // rax

 size = this_->size;
 if ( (int)size <= 9 )
 {
 this_->size = size + 1;
 this_->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x2D44 */
int Container_int_get(const Container_int *this_, int idx)
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && this_->size > idx )
 return this_->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x2D5A */
int Container_int_getSize(const Container_int *this_)
{
 return this_->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x2D62 */
void Container_double_constructor(Container_double *this_)
{
 this_->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x2D6E */
void Container_double_push(Container_double *this_, double value)
{
 long long size; // rax

 size = this_->size;
 if ( (int)size <= 9 )
 {
 this_->size = size + 1;
 this_->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x2D88 */
double Container_double_get(const Container_double *this_, int idx)
{
 double result; // xmm0_8

 result = 0.0;
 if ( idx >= 0 && this_->size > idx )
 return this_->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2DA2 */
int Container_double_getSize(const Container_double *this_)
{
 return this_->size;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x2DAA */
void std_unique_ptr_int_destructor(std_unique_ptr_int *this_)
{
 void *v1; // rdi

 v1 = this_->_M_t._M_head_impl;
 if ( v1 )
 operator_delete(v1, 4u);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x2DC2 */
void std_unique_ptr_int_array_destructor(std_unique_ptr_int_array *this_)
{
 void *v1; // rdi

 v1 = this_->_M_t._M_head_impl;
 if ( v1 )
 operator_delete_array(v1);
}


/* Function: _ZN14DiamondDerivedD4Ev @ 0x2DD4 */
void DiamondDerived_destructor_vtt(
 DiamondDerived *this_,
 int __in_chrg,
 const void **__vtt_parm)
{
 int (**v3)(...); // rax
 int (**v7)(...); // rcx
 long long v8; // rdx
 long long ( **v9)(DiamondDerived *__hidden); // rax
 MiddleB *v10; // rdi
 const void **v11; // rsi
 const void **v12; // rsi

  v3 = (int (**)(...))&off_5B08;
  if ( !__in_chrg )
    v3 = (int (**)(...))*(void **)*(const void ***)__vtt_parm;
  this_->_vptr_MiddleA = v3;
  v7 = (int (**)(...))&off_5B70;
  v8 = 32;
  if ( !__in_chrg )
  {
    v7 = (int (**)(...))*((const void ***)((const char *)__vtt_parm + 5 * sizeof(void *)));
    v8 = (long long)*(unsigned long long *)((char *)v3 - 24);
  }
 *(int (***)(...))((char *)&this_->_vptr_MiddleA + v8) = v7;
  v9 = (long long ( **)(DiamondDerived *__hidden))&off_5B38;
  if ( !__in_chrg )
    v9 = (long long ( **)(DiamondDerived *__hidden))*((const void ***)((const char *)__vtt_parm + 6 * sizeof(void *)));
  *((unsigned long long *)&this_->dataA + 1) = (unsigned long long)(void *)v9;
    v10 = (MiddleB *)(&this_->dataA + 2);
    v11 = (const void **)off_5AD0;
    if ( !__in_chrg )
      v11 = (const void **)((const char *)__vtt_parm + 3 * sizeof(void *));
    MiddleB_destructor_vtt_wrapper(v10, v11);
    v12 = (const void **)off_5AC0;
    if ( !__in_chrg )
      v12 = (const void **)((const char *)__vtt_parm + 1 * sizeof(void *));
    MiddleA_destructor_vtt_wrapper((MiddleA *)this_, v12);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2E5E */
void DiamondDerived_destructor(DiamondDerived *this_)
{
 DiamondDerived_destructor_vtt(this_, 2, 0);
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x2E6E */
void non_virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *this_)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)this_ - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x2E78 */
void virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *this_)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)this_ + (long long)((long long)*((unsigned long long *)(char *)this_->_vptr_MiddleA - 4))));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x2E86 */
void DiamondDerived_destructor_delete(DiamondDerived *this_)
{
 DiamondDerived_destructor(this_);
 operator_delete(this_, 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x2EAB */
void non_virtual_thunk_to_DiamondDerived_destructor_delete(DiamondDerived *this_)
{
 DiamondDerived_destructor_delete((DiamondDerived *)((char *)this_ - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2EB5 */
void virtual_thunk_to_DiamondDerived_destructor_delete(DiamondDerived *this_)
{
 DiamondDerived_destructor_delete((DiamondDerived *)((char *)this_ + (long long)((long long)*((unsigned long long *)(char *)this_->_vptr_MiddleA - 4))));
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x2EC2 */
void DiamondDerived_destructor_vtt_wrapper(DiamondDerived *this_, const void **__vtt_parm)
{
 DiamondDerived_destructor_vtt(this_, 0, __vtt_parm);
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
