/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_gcc_O2_g
 * Processor: pc
 */

/* Forward declarations for missing types */
struct Base;
struct Derived;
struct MultiDerived;

/* Define Base */
struct Base {
    void *_vptr_Base;
};

/* Define Derived */
struct Derived {
    void *_vptr_Derived;
    int multiplier;
};

/* Define MultiDerived */
struct MultiDerived {
    void *_vptr_MultiDerived;
    int padding1;
    void *_vptr_BaseB;
    int padding2;
};

/* Forward declare template functions */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* Define MiddleA with vtable pointer and data member */
struct MiddleA {
    void *_vptr_MiddleA;
    void *_vbptr_MiddleA;  /* virtual base pointer for diamond inheritance */
    int dataA;
};

/* Define MiddleB with vtable pointer and data member */
struct MiddleB {
    void *_vptr_MiddleB;
    void *_vbptr_MiddleB;  /* virtual base pointer for diamond inheritance */
    int dataB;
};

/* Define DiamondDerived (inherits from both MiddleA and MiddleB via virtual inheritance) */
struct DiamondDerived {
    void *_vptr_MiddleA;
    void *_vbptr_DiamondDerived;
    int dataA;
    void *_vptr_MiddleB;
    void *_vbptr_MiddleB;
    int dataB;
};

/* Define SimpleClass */
struct SimpleClass {
    char name[32];
};

/* Define LifecycleClass */
struct LifecycleClass {
    static int instance_count;
};

/* Define static member */
int LifecycleClass::instance_count = 0;

/* Define RTTIBase */
struct RTTIBase {
    void *_vptr;
    int type;
};

/* Define RTTIDerivedA */
struct RTTIDerivedA {
    void *_vptr;
    int type;
};

/* Define RTTIDerivedB */
struct RTTIDerivedB {
    void *_vptr;
    int type;
};

/* Define Container_int */
struct Container_int {
    int size;
    int data[10];
};

/* Define Container_double */
struct Container_double {
    int size;
    double data[10];
};

/* Include standard headers for needed functions */
#include <string.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <math.h>

/* Declare C++ operator new for use in decompiled code */
extern void *operator new(size_t size);

/* Define __readfsqword if not available */
#ifndef __readfsqword
static inline unsigned long long __readfsqword(unsigned long long offset)
{
    unsigned long long value;
    __asm__ volatile ("movq %%fs:%1, %0" : "=r" (value) : "m" (*(const unsigned long long *)(offset)));
    return value;
}
#endif

/* Define JUMPOUT macro for IDA decompilation */
#define JUMPOUT(x) return

/* Forward declare std::ios_base::Init for C++ compatibility */
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

/* Declare missing symbols */
extern void *_gmon_start__;
extern void *_dso_handle;
extern std::ios_base::Init __ioinit;

/* Declare vtable addresses */
extern void *off_3C70;
extern void *off_3C98;

/* Declare format string references */
extern const char unk_203C[];
extern const char unk_205A[];
extern const char unk_2076[];
extern const char unk_2092[];
extern const char unk_20AE[];
extern const char unk_20CB[];
extern const char unk_20E7[];
extern const char unk_2103[];
extern const char unk_211F[];

/* Forward declare type_info and typeinfo objects */
struct type_info;
extern struct type_info typeinfo_for_int;
extern struct type_info typeinfo_for_RTITIBase;
extern struct type_info typeinfo_for_RTITIDerivedA;
extern struct type_info typeinfo_for_RTITIDerivedB;

/* Forward declare __dynamic_cast */
extern void *__dynamic_cast(const void *src_ptr,
                            const struct __class_type_info *src_type,
                            const struct __class_type_info *dst_type,
                            long src2dst_offset);

/* Forward declare __printf_chk */
extern int __printf_chk(int flag, const char *format, ...);

/* Forward declare __cxa_atexit */
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);

/* Forward declare C++ exception handling functions */
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *exception, struct type_info *tinfo, void (*dest)(void *));

/* Forward declare test_cpp_oo_features */
void test_cpp_oo_features();

/* Forward declare __class_type_info */
struct __class_type_info;

/* Function: .init_proc @ 0x1000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = (long long (**)(void))&_gmon_start__;
 if ( &_gmon_start__ )
 return (long long (**)(void))((long long (*)(void))_gmon_start__)();
 return result;
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 JUMPOUT(0);
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 sub_1020();
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1020();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1020();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1020();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1020();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1020();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
 sub_1020();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
 sub_1020();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
 sub_1020();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
 sub_1020();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0()
{
 sub_1020();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
 sub_1020();
}


/* Function: sub_10F0 @ 0x10F0 */
void sub_10F0()
{
 sub_1020();
}


/* Function: sub_1100 @ 0x1100 */
void sub_1100()
{
 sub_1020();
}


/* Function: sub_1110 @ 0x1110 */
void sub_1110()
{
 sub_1020();
}


/* Function: sub_1120 @ 0x1120 */
void sub_1120()
{
 sub_1020();
}


/* Function: _Z18test_cpp_exceptionv @ 0x1240 */
int test_cpp_exception()
{
 unsigned int *exception; // rax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: main @ 0x1310 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x1330 */

/* Static wrapper for ios_base::Init initialization */
static void ios_init_wrapper(std::ios_base::Init *obj)
{
    /* Stub - constructor would be called here */
    (void)obj;
}

/* Static wrapper for ios_base::Init destruction */
static void ios_destroy_wrapper(void *obj)
{
    (void)obj;
}

void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
    ios_init_wrapper(&__ioinit);
    __cxa_atexit(ios_destroy_wrapper, &__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1450 */
int test_cpp_member_func()
{
 SimpleClass obj; // [rsp+0h] [rbp-38h] BYREF
 unsigned long long v2; // [rsp+28h] [rbp-10h]

 v2 = __readfsqword(0x28u);
 *(unsigned long long *)obj.name = 1953719636;
 memset(&obj.name[8], 0, 24);
 return strlen(obj.name) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x14D0 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass::instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x14F0 */
int call_virtual_func(Base *obj, int x)
{
 return (*obj->_vptr_Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1500 */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1510 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1520 */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1530 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1540 */
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
 v0 = 2.5; /* Initialize v0 */
 r2 = template_max_double(1.5, v0);
 b = 20;
 template_swap_int(&a, &b);
 return b + a + v1 + (int)r2;
}


/* Function: _Z23test_cpp_template_classv @ 0x15E0 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x15F0 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1600 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1610 */
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
 *v1 = (long long)off_3C70;
 v2 = (unsigned long long *)operator new(8u);
 v3 = *v1;
 v4 = v2;
 *v2 = (unsigned long long)off_3C98;
 v5 = *(unsigned long long *)(v3 - 8);
 v6 = *(const char **)(uintptr_t)(v5 + 8);
 if ( v6 != "12RTTIDerivedA" )
 {
 v0 = 0;
 if ( *v6 != 42 )
 v0 = strcmp(*(const char **)(uintptr_t)(v5 + 8), "12RTTIDerivedA") == 0 ? 0xA : 0;
 }
 v7 = v0 + 20;
 if ( __dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeinfo_for_RTITIBase,
 (const struct __class_type_info *)&typeinfo_for_RTITIDerivedA,
 0) )
 {
 v7 += 100;
 }
 if ( __dynamic_cast(
 v4,
 (const struct __class_type_info *)&typeinfo_for_RTITIBase,
 (const struct __class_type_info *)&typeinfo_for_RTITIDerivedB,
 0) )
 {
 v7 += 200;
 }
 v8 = v7 + strlen(&((const char *)v6)[*v6 == 42]);
 (*(void ( **)(long long *))(v3 + 8))(v1);
 (*(void ( **)(const void *))(*(unsigned long long *)v4 + 8LL))(v4);
 return v8;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1740 */
void test_cpp_oo_features()
{
 int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 char s[8]; // [rsp+4h] [rbp-34h] BYREF
 long long v5; // [rsp+Ch] [rbp-2Ch]
 long long v6; // [rsp+14h] [rbp-24h]
 int v7; // [rsp+1Ch] [rbp-1Ch]
 short v8; // [rsp+20h] [rbp-18h]
 char v9; // [rsp+22h] [rbp-16h]
 char v10; // [rsp+23h] [rbp-15h]
 unsigned long long v11; // [rsp+28h] [rbp-10h]

 v11 = __readfsqword(0x28u);
 puts("test_cpp_oo_features");
 *(unsigned long long *)s = 1953719636;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 v10 = 0;
 v0 = strlen(s);
 __printf_chk(1, unk_203C, (unsigned int)(v0 + 4700));
 v1 = test_cpp_constructor();
 __printf_chk(1, unk_205A, v1);
 __printf_chk(1, unk_2076, 42);
 __printf_chk(1, unk_2092, 71);
 v2 = test_cpp_diamond_inheritance();
 __printf_chk(1, unk_20AE, v2);
 __printf_chk(1, unk_20CB, 22);
 v3 = test_cpp_template_func();
 __printf_chk(1, unk_20E7, v3);
 __printf_chk(1, unk_2103, 16);
 __printf_chk(1, unk_211F, 85);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x18F0 */
int Base_virtual_func(Base *const _this, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x1900 */
const char * Base_getName(const Base *const _this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1910 */
void Base_destructor(Base *const _this)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1920 */
int Derived_virtual_func(Derived *const _this, int x)
{
 return x * _this->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1930 */
const char * Derived_getName(const Derived *const _this)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1940 */
int MultiDerived_funcA(MultiDerived *const _this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1950 */
int MultiDerived_funcB(MultiDerived *const _this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x1960 */
long long MultiDerived_funcB_thunk(MultiDerived *_this)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1970 */
int MiddleA_func(MiddleA *const _this)
{
 return *(int *)((char *)&_this->dataA + *((unsigned long long *)_this->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x1990 */
long long MiddleA_func_virtual_thunk(MiddleA *_this)
{
 return (unsigned int)(*(int *)((char *)&_this->dataA
 + *((unsigned long long *)(uintptr_t)_this->_vptr_MiddleA - 3)
 + *(*(unsigned long long **)((char *)&_this->_vptr_MiddleA + *((unsigned long long *)(uintptr_t)_this->_vptr_MiddleA - 3)) - 3))
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x19B0 */
int MiddleB_func(MiddleB *const _this)
{
 return *(int *)((char *)&_this->dataB + *((unsigned long long *)_this->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x19D0 */
long long MiddleB_func_virtual_thunk(MiddleB *_this)
{
 return (unsigned int)(*(int *)((char *)&_this->dataB
 + *((unsigned long long *)_this->_vptr_MiddleB - 3)
 + *(*(unsigned long long **)((char *)&_this->_vptr_MiddleB + *((unsigned long long *)_this->_vptr_MiddleB - 3)) - 3))
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x19F0 */
int DiamondDerived_func(DiamondDerived *const _this)
{
 return *(int *)((char *)&_this->dataA + *((unsigned long long *)_this->_vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x1A10 */
long long DiamondDerived_func_virtual_thunk(DiamondDerived *_this)
{
 return (unsigned int)(*(int *)((char *)&_this->dataA
 + *((unsigned long long *)_this->_vptr_MiddleA - 3)
 + *(*(unsigned long long **)((char *)&_this->_vptr_MiddleA + *((unsigned long long *)_this->_vptr_MiddleA - 3)) - 3))
 + 250);
}


/* Function: _ZThn16_N14DiamondDerivedFromB4funcEv @ 0x1A30 */
long long DiamondDerived_func_nonvirtual_thunk(DiamondDerived *_this)
{
  DiamondDerived *adjusted_this = (DiamondDerived *)((char *)_this - 0x10);
  return (unsigned int)(adjusted_this->dataB + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1A50 */
int RTTIDerivedA_getType(const RTTIDerivedA *const _this)
{
  return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1A60 */
int RTTIDerivedB_getType(const RTTIDerivedB *const _this)
{
  return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1A70 */
void RTTIDerivedB_destructor(RTTIDerivedB *const _this)
{
  ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1A80 */
void RTTIDerivedA_destructor(RTTIDerivedA *const _this)
{
  ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1A90 */
void DiamondDerived_destructor(DiamondDerived *const _this)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x1AA0 */
void DiamondDerived_destructor_virtual_thunk(DiamondDerived *_this)
{
  ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x1AB0 */
void DiamondDerived_destructor_nonvirtual_thunk(DiamondDerived *_this)
{
  ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1AC0 */
void MultiDerived_destructor(MultiDerived *const _this)
{
  ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x1AD0 */
void MultiDerived_destructor_nonvirtual_thunk(MultiDerived *_this)
{
  ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1AE0 */
void Derived_destructor(Derived *const _this)
{
  ;
}


/* Function: _ZN4BaseD0Ev @ 0x1AF0 */
void Base_deleting_destructor(Base *const _this)
{
  free((void *)_this);
}


/* Function: _ZN7DerivedD0Ev @ 0x1B00 */
void Derived_deleting_destructor(Derived *const _this)
{
  free((void *)_this);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1B10 */
void MultiDerived_deleting_destructor(MultiDerived *const _this)
{
  free((void *)_this);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x1B20 */
void MultiDerived_deleting_destructor_nonvirtual_thunk(MultiDerived *_this)
{
  free((char *)_this - 0x10);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1B40 */
void RTTIDerivedB_deleting_destructor(RTTIDerivedB *const _this)
{
  free((void *)_this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1B50 */
void RTTIDerivedA_deleting_destructor(RTTIDerivedA *const _this)
{
  free((void *)_this);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1B60 */
void DiamondDerived_deleting_destructor(DiamondDerived *const _this)
{
  free((void *)_this);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x1B70 */
void DiamondDerived_deleting_destructor_virtual_thunk(DiamondDerived *_this)
{
  uintptr_t vtable_ptr = (uintptr_t)_this->_vptr_MiddleA;
  long long offset = *((long long *)(vtable_ptr - 4));
  free((void *)((uintptr_t)_this + (uintptr_t)offset));
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x1B90 */
void DiamondDerived_deleting_destructor_nonvirtual_thunk(DiamondDerived *_this)
{
  free((char *)_this - sizeof(DiamondDerived) + offsetof(DiamondDerived, dataB) + 2 * sizeof(int));
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1BB0 */
int template_max_int(int a, int b)
{
  int result; // eax

  result = b;
  if ( a >= b )
    return a;
  return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1BC0 */
double template_max_double(double a1, double a, double b)
{
  return fmax(a1, a);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1BD0 */
void template_swap_int(int *a, int *b)
{
  int v2; // eax

  v2 = *a;
  *a = *b;
  *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1BE0 */
void Container_int_constructor(Container_int *const _this)
{
  _this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1BF0 */
void Container_int_push(Container_int *const _this, int value)
{
  long long size; // rax

  size = _this->size;
  if ( (int)size <= 9 )
  {
    _this->size = size + 1;
    _this->data[size] = value;
  }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1C10 */
int Container_int_get(const Container_int *const _this, int idx)
{
  int result; // eax

  result = 0;
  if ( idx >= 0 && _this->size > idx )
    return _this->data[idx];
  return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1C30 */
int Container_int_getSize(const Container_int *const _this)
{
  return _this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1C40 */
void Container_double_constructor(Container_double *const _this)
{
  _this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1C50 */
void Container_double_push(Container_double *const _this, double a2, double value)
{
  long long size; // rax

  size = _this->size;
  if ( (int)size <= 9 )
  {
    _this->size = size + 1;
    _this->data[size] = a2;
  }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1C70 */
double Container_double_get(const Container_double *const _this, int idx)
{
  double result; // xmm0_8

  result = 0.0;
  if ( idx >= 0 && _this->size > idx )
    return _this->data[idx];
  return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1CA0 */
int Container_double_getSize(const Container_double *const _this)
{
  return _this->size;
}


/* Function: .term_proc @ 0x1CA8 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __printf_chk @ 0x4048 */

/* FAILED to decompile: __cxa_begin_catch @ 0x4050 */

/* FAILED to decompile: strlen @ 0x4058 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x4060 */

/* FAILED to decompile: __libc_start_main @ 0x4070 */

/* FAILED to decompile: __cxa_atexit @ 0x4078 */

/* FAILED to decompile: _Znwm @ 0x4080 */

/* FAILED to decompile: _ZdlPvm @ 0x4088 */

/* FAILED to decompile: __stack_chk_fail @ 0x4090 */

/* FAILED to decompile: __dynamic_cast @ 0x4098 */

/* FAILED to decompile: strcmp @ 0x40A8 */

/* FAILED to decompile: __cxa_rethrow @ 0x40B0 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x40B8 */

/* FAILED to decompile: puts @ 0x40C0 */

/* FAILED to decompile: __cxa_end_catch @ 0x40C8 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x40D0 */

/* FAILED to decompile: __cxa_throw @ 0x40D8 */

/* FAILED to decompile: _Unwind_Resume @ 0x40E0 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x40E8 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x40F0 */

/* FAILED to decompile: __gmon_start__ @ 0x4100 */

/* Total functions decompiled: 85, failed: 21 */
