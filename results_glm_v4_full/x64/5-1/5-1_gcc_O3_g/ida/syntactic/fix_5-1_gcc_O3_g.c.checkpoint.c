/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_gcc_O3_g
 * Processor: pc
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/* Forward declarations for C++ class types */
struct Base;
struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct SimpleClass;
struct LifecycleClass;

/* Function prototypes for C-style member functions */
int Base_virtual_func(struct Base *self, int x);
const char *Base_getName(const struct Base *self);
void Base_destructor(struct Base *self);
int Derived_virtual_func(struct Derived *self, int x);
const char *Derived_getName(const struct Derived *self);

/* Test function prototypes */
void test_cpp_oo_features(void);
int test_cpp_member_func(void);
int test_cpp_constructor(void);
int call_virtual_func(struct Base *obj, int x);
int test_cpp_virtual_func(void);
int test_cpp_multiple_inheritance(void);
int test_cpp_diamond_inheritance(void);
int test_cpp_operator_overload(void);
int test_cpp_template_func(void);
int test_cpp_template_class(void);
int test_cpp_lambda(void);
int test_cpp_smart_ptr(void);
int MultiDerived_funcA(struct MultiDerived *self);
int MultiDerived_funcB(struct MultiDerived *self);
int MiddleA_func(struct MiddleA *self);
int MiddleB_func(struct MiddleB *self);
int DiamondDerived_func(struct DiamondDerived *self);
int RTTIDerivedA_getType(const struct RTTIDerivedA *self);
int RTTIDerivedB_getType(const struct RTTIDerivedB *self);
void Derived_destructor(struct Derived *self);
void MultiDerived_destructor(struct MultiDerived *self);
void RTTIDerivedA_destructor(struct RTTIDerivedA *self);
void RTTIDerivedB_destructor(struct RTTIDerivedB *self);
void DiamondDerived_destructor(struct DiamondDerived *self);

/* Template function prototypes */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* External function declarations */
static inline unsigned long long __readfsqword(unsigned long long offset)
{
 unsigned long long value;
 __asm__ volatile ("movq %%fs:%1, %0" : "=r" (value) : "m" (*(const unsigned long long *)(offset)));
 return value;
}
size_t strlen(const char *s);
extern void *_gmon_start__;
void *operator new(size_t size);
void operator delete(void *ptr, size_t size);
int __printf_chk(int flag, const char *format, ...);
int puts(const char *s);

/* Vtable pointers */
extern void *off_3C70;
extern void *off_3C98;

/* String literals */
extern const char *unk_203C;
extern const char *unk_205A;
extern const char *unk_2076;
extern const char *unk_2092;
extern const char *unk_20AE;
extern const char *unk_20CB;
extern const char *unk_20E7;
extern const char *unk_2103;
extern const char *unk_211F;

/* JUMPOUT macro for unreachable code */
#define JUMPOUT(x) __builtin_unreachable()

/* C++ exception handling functions */
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *exception, struct type_info *tinfo, void (*dest)(void *));

/* Stub implementations for C++ ABI functions */
void *__cxa_allocate_exception(size_t size)
{
 return malloc(size);
}

void __cxa_throw(void *exception, struct type_info *tinfo, void (*dest)(void *))
{
 (void)tinfo;
 (void)dest;
 free(exception);
 abort();
}

/* RTTI and dynamic cast declarations */
extern struct type_info *typeinfo_for_int;
extern struct type_info *typeinfo_for_RTITIBase;
extern struct type_info *typeinfo_for_RTITIDerivedA;
extern struct type_info *typeinfo_for_RTITIDerivedB;

/* RTTI type_info definitions */
struct type_info {
 const char *_name;
};

/* RTTI type info objects */
struct type_info typeinfo_for_int_obj = { "int" };
struct type_info *typeinfo_for_int = &typeinfo_for_int_obj;
void *__dynamic_cast(void *obj, const struct __class_type_info *src, const struct __class_type_info *dst, int src2dst_offset);

/* Base class definition */
struct Base {
 void *_vptr_Base;
};

/* Derived class definition */
struct Derived {
 struct Base base;
 int multiplier;
};

/* MultiDerived class definition (multiple inheritance) */
struct MultiDerived {
 struct Base BaseA;
 struct Base BaseB;
};

/* MiddleA class definition (diamond inheritance) */
struct MiddleA {
 void *_vptr_MiddleA;
 int dataA;
};

/* MiddleB class definition (diamond inheritance) */
struct MiddleB {
 void *_vptr_MiddleB;
 int dataB;
};

/* DiamondDerived class definition (diamond inheritance) */
struct DiamondDerived {
 struct MiddleA middleA;
 struct MiddleB middleB;
 int dataA;
 int dataB;
};

/* RTTI class definitions */
struct RTTIBase {
 void *_vptr_RTITIBase;
};

struct RTTIDerivedA {
 void *_vptr_RTITIDerivedA;
};

struct RTTIDerivedB {
 void *_vptr_RTITIDerivedB;
};

/* SimpleClass definition */
struct SimpleClass {
 char name[32];
};

/* LifecycleClass definition */
struct LifecycleClass {
 int dummy;
};
int LifecycleClass_instance_count = 0;

/* Container template instantiations */
struct Container_int {
 int size;
 int data[10];
};

struct Container_double {
 int size;
 double data[10];
};




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
 __cxa_throw(exception, (struct type_info *)typeinfo_for_int, 0);
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1260 */
void test_cpp_oo_features(void)
{
 test_cpp_member_func();
 test_cpp_constructor();
 call_virtual_func(0, 0);
 test_cpp_virtual_func();
 test_cpp_multiple_inheritance();
 test_cpp_diamond_inheritance();
 test_cpp_operator_overload();
 test_cpp_template_func();
 test_cpp_template_class();
 test_cpp_lambda();
 test_cpp_smart_ptr();
}


/* Function: main @ 0x1310 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x1330 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 /* std::ios_base initialization stub */
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
 return 1001 * LifecycleClass_instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x14F0 */
int call_virtual_func(struct Base *obj, int x)
{
 return ((int (*)(struct Base *, int))obj->_vptr_Base)(obj, x);
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








/* Function: _ZN4Base12virtual_funcEi @ 0x1990 */
int Base_virtual_func(struct Base *self, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x19A0 */
const char * Base_getName(const struct Base *self)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x19B0 */
void Base_destructor(struct Base *self)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x19C0 */
int Derived_virtual_func(struct Derived *self, int x)
{
 return x * self->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x19D0 */
const char * Derived_getName(struct Derived *self)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x19E0 */
int MultiDerived_funcA(struct MultiDerived *self)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x19F0 */
int MultiDerived_funcB(struct MultiDerived *self)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x1A00 */
long long MultiDerived_funcB_thunk(MultiDerived *self)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1A10 */
int MiddleA_func(struct MiddleA *self)
{
 return *(int *)((char *)&self->dataA + *((unsigned long long *)self->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x1A30 */
long long MiddleA_func_virtual_thunk(void *self)
{
 return (unsigned int)(*(int *)((char *)&((struct MiddleA *)self)->dataA
 + *((unsigned long long *)((struct MiddleA *)self)->_vptr_MiddleA - 3)
 + *(*(unsigned long long **)((char *)&((struct MiddleA *)self)->_vptr_MiddleA + *((unsigned long long *)((struct MiddleA *)self)->_vptr_MiddleA - 3)) - 3))
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x1A50 */
int MiddleB_func(struct MiddleB *self)
{
 return *(int *)((char *)&self->dataB + *((unsigned long long *)self->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x1A70 */
long long MiddleB_func_virtual_thunk(void *self)
{
 return (unsigned int)(*(int *)((char *)&((struct MiddleB *)self)->dataB
 + *((unsigned long long *)((struct MiddleB *)self)->_vptr_MiddleB - 3)
 + *(*(unsigned long long **)((char *)&((struct MiddleB *)self)->_vptr_MiddleB + *((unsigned long long *)((struct MiddleB *)self)->_vptr_MiddleB - 3)) - 3))
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1A90 */
int DiamondDerived_func(struct DiamondDerived *self)
{
 return *(int *)((char *)&self->dataA + *((unsigned long long *)self->middleA._vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x1AB0 */
long long DiamondDerived_func_virtual_thunk(void *self)
{
 return (unsigned int)(*(int *)((char *)&((struct DiamondDerived *)self)->dataA
 + *((unsigned long long *)((struct DiamondDerived *)self)->middleA._vptr_MiddleA - 3)
 + *(*(unsigned long long **)((char *)&((struct DiamondDerived *)self)->middleA._vptr_MiddleA + *((unsigned long long *)((struct DiamondDerived *)self)->middleA._vptr_MiddleA - 3)) - 3))
 + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x1AD0 */
long long DiamondDerived_func_nonvirtual_thunk(void *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self + *(unsigned long long *)(*((unsigned long long *)&((struct DiamondDerived *)self)[-1].dataB + 1) - 24LL) - 8) + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1AF0 */
int RTTIDerivedA_getType(struct RTTIDerivedA *self)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1B00 */
int RTTIDerivedB_getType(struct RTTIDerivedB *self)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1B10 */
void RTTIDerivedB_destructor(struct RTTIDerivedB *self)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1B20 */
void RTTIDerivedA_destructor(struct RTTIDerivedA *self)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1B30 */
void DiamondDerived_destructor(struct DiamondDerived *self)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x1B40 */
void DiamondDerived_destructor_virtual_thunk(void *self)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x1B50 */
void DiamondDerived_destructor_nonvirtual_thunk(void *self)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1B60 */
void MultiDerived_destructor(struct MultiDerived *self)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x1B70 */
void MultiDerived_destructor_nonvirtual_thunk(void *self)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1B80 */
void Derived_destructor(struct Derived *self)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1B90 */
void Base_deleting_destructor(struct Base *self)
{
 operator delete(self, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1BA0 */
void Derived_deleting_destructor(struct Derived *self)
{
 operator delete(self, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1BB0 */
void MultiDerived_deleting_destructor(struct MultiDerived *self)
{
 operator delete(self, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x1BC0 */
void MultiDerived_delete_nonvirtual_thunk(void *self)
{
 operator delete(&((struct MultiDerived *)self)[-1].BaseB, 0x20u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1BE0 */
void RTTIDerivedB_deleting_destructor(struct RTTIDerivedB *self)
{
 operator delete(self, 8u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1BF0 */
void RTTIDerivedA_deleting_destructor(struct RTTIDerivedA *self)
{
 operator delete(self, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1C00 */
void DiamondDerived_deleting_destructor(struct DiamondDerived *self)
{
 operator delete(self, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x1C10 */
void DiamondDerived_delete_virtual_thunk(void *self)
{
 operator delete((char *)self + *((unsigned long long *)((struct DiamondDerived *)self)->middleA._vptr_MiddleA - 4), 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x1C30 */
void DiamondDerived_delete_nonvirtual_thunk(void *self)
{
 operator delete(&((struct DiamondDerived *)self)[-1].dataB + 2, 0x30u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1C50 */
int template_max_int(int a, int b)
{
 int result; // eax

 result = b;
 if ( a >= b )
 return a;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1C60 */
double template_max_double(double a, double b)
{
 return fmax(a, b);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1C70 */
void template_swap_int(int *a, int *b)
{
 int v2; // eax

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1C80 */
void Container_int_Constructor(struct Container_int *self)
{
 self->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1C90 */
void Container_int_push(struct Container_int *self, int value)
{
 long long size; // rax

 size = self->size;
 if ( (int)size <= 9 )
 {
 self->size = size + 1;
 self->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1CB0 */
int Container_int_get(const struct Container_int *self, int idx)
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && self->size > idx )
 return self->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1CD0 */
int Container_int_getSize(const struct Container_int *self)
{
 return self->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1CE0 */
void Container_double_Constructor(struct Container_double *self)
{
 self->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1CF0 */
void Container_double_push(struct Container_double *self, double value)
{
 long long size; // rax

 size = self->size;
 if ( (int)size <= 9 )
 {
 self->size = size + 1;
 self->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1D10 */
double Container_double_get(const struct Container_double *self, int idx)
{
 double result; // xmm0_8

 result = 0.0;
 if ( idx >= 0 && self->size > idx )
 return self->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1D40 */
int Container_double_getSize(const struct Container_double *self)
{
 return self->size;
}


/* Function: .term_proc @ 0x1D48 */
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
