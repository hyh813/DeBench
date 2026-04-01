/* Auto-injected type definitions by preprocessor */
#include <string.h>
#include <stdio.h>

typedef unsigned char uint8_t;

/* Forward declarations for missing functions */
unsigned int __readgsdword(unsigned int offset);
void operator_delete(void *ptr, unsigned int size);
void _do_global_dtors_aux(void);
void *my_operator_new(unsigned int size);
void *__cxa_allocate_exception(unsigned int size);
void __cxa_throw(void *exception, struct type_info *type_info, void *dest);
void test_cpp_oo_features(void);
void *my_operator_new(unsigned int size);
void std_ios_base_Init_Init(void *ptr);
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
int __printf_chk(int flag, const char *format, ...);

/* Forward declarations for template functions */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* Forward declarations for RTTI functions */
void *__dynamic_cast(void *obj, const struct __class_type_info *src_type, const struct __class_type_info *dst_type, int src_flags);
extern struct type_info typeinfo_for_RTTIBase;
extern struct type_info typeinfo_for_RTTIDerivedA;
extern struct type_info typeinfo_for_RTTIDerivedB;
extern struct type_info typeinfo_for_int;

/* Global variables */
int LifecycleClass_instance_count;
extern void *_gmon_start__;
void frame_dummy(void);
int _do_global_ctors_aux(void);
extern void *std___ioinit;
extern void *_dso_handle;
extern void *off_4E48;
extern void *off_4E5C;
extern const char *asc_3018;
extern const char *unk_303C;
extern const char *unk_305A;
extern const char *unk_3076;
extern const char *unk_3092;
extern const char *unk_30AE;
extern const char *unk_30CB;
extern const char *unk_30E7;
extern const char *unk_3103;
extern const char *unk_311F;

typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* IDA Pro macros for accessing low/high parts of 64-bit values */
#define LODWORD(x) ((unsigned int)(x))
#define HIDWORD(x) ((unsigned int)((unsigned long long)(x) >> 32))
#define HIBYTE(x) ((unsigned char)((x) >> 8))
#define LOBYTE(x) ((unsigned char)(x))

/* Struct definitions */
struct SimpleClass {
    char name[32];
};
struct LifecycleClass;
struct Base {
    int (**_vptr_Base)(...);
};
struct Derived {
    int (**_vptr_Derived)(...);
    int multiplier;
};
struct MultiDerived {
    int (**_vptr_MultiDerived)(...);
    struct Base BaseA;
    struct Base BaseB;
};
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIBase {
    int (**_vptr_RTTIBase)(...);
};
struct RTTIDerivedA;
struct RTTIDerivedB;

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
};

struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_gcc_O3_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 if ( &_gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile("jmp dword ptr [ebx+8]");
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
void test_cpp_exception()
{
 unsigned int *exception; // eax

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: main @ 0x1380 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x13A0 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 std_ios_base_Init_Init(&std___ioinit);
 __cxa_atexit((void (*)(void *))&std_ios_base_Init_Init, &std___ioinit, &_dso_handle);
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
long long test_cpp_member_func()
{
 long long result; // rax
 SimpleClass obj; // [esp+0h] [ebp-34h] BYREF
 unsigned int v2; // [esp+24h] [ebp-10h]
 unsigned int result_lo;
 unsigned int result_hi;

 v2 = __readgsdword(0x14u);
 strcpy(obj.name, "Test");
 memset(&obj.name[5], 0, 27);
 result_lo = strlen(obj.name) + 4700;
 result_hi = v2 - __readgsdword(0x14u);
 result = ((long long)result_hi << 32) | result_lo;
 return result;
}

/* Forward declarations for classes */
struct LifecycleClass;
struct Derived;
struct MultiDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;


/* Function: _Z20test_cpp_constructorv @ 0x1600 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass_instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1620 */
int call_virtual_func(Base *obj, int x)
{
 return (*obj->_vptr_Base)();
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1630 */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1640 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1650 */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1660 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1670 */
long long test_cpp_template_func()
{
 int v0; // ebx
 long long result; // rax
 double r2; // [esp+8h] [ebp-2Ch]
 int a; // [esp+1Ch] [ebp-18h] BYREF
 int b; // [esp+20h] [ebp-14h] BYREF
 unsigned int v5; // [esp+24h] [ebp-10h]
 unsigned int result_lo;
 unsigned int result_hi;

 v5 = __readgsdword(0x14u);
 v0 = template_max_int(3, 7);
 a = 10;
 r2 = template_max_double(2.5, 1.5);
 b = 20;
 template_swap_int(&a, &b);
 result_lo = b + a + v0 + (int)r2;
 result_hi = v5 - __readgsdword(0x14u);
 result = ((long long)result_hi << 32) | result_lo;
 return result;
}


/* Function: _Z23test_cpp_template_classv @ 0x1720 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1730 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1740 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1750 */
size_t test_cpp_rtti()
{
 unsigned int *v0; // edi
 const char *v1; // ebp
 int v2; // ecx
 int v3; // esi
 size_t v4; // esi
 RTTIBase *obj2; // [esp+14h] [ebp-28h]
 int v7; // [esp+18h] [ebp-24h]

 v0 = (unsigned int *)(void *)my_operator_new(4u);
 *v0 = (int)off_4E48;
 obj2 = (RTTIBase *)my_operator_new(4u);
 obj2->_vptr_RTTIBase = (int (**)(...))off_4E5C;
 v7 = *v0;
 v1 = *(const char **)(*(unsigned int *)(*v0 - 4) + 4);
 if ( v1 == "12RTTIDerivedA" )
 {
 v2 = 30;
 }
 else if ( *v1 == 42 )
 {
 v2 = 20;
 }
 else
 {
 v2 = strcmp(v1, "12RTTIDerivedA") == 0 ? 30 : 20;
 }
 v3 = v2;
 if ( __dynamic_cast(
 v0,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0) )
 {
 v3 += 100;
 }
 if ( __dynamic_cast(
 obj2,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0) )
 {
 v3 += 200;
 }
 v4 = strlen(v1 + (*v1 == 42)) + v3;
 ((void (*)(int *))(v7 + 4))((int *)v0);
 (*(void (*)(RTTIBase *))((*(unsigned int **)obj2->_vptr_RTTIBase)[1]))(obj2);
 return v4;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x18C0 */
void test_cpp_oo_features()
{
 size_t v0; // eax
 int v1; // esi
 double v2; // [esp+10h] [ebp-4Ch]
 int a; // [esp+20h] [ebp-3Ch] BYREF
 int b; // [esp+24h] [ebp-38h] BYREF
 unsigned short s[4]; // [esp+2Ch] [ebp-30h] BYREF
 int v6; // [esp+34h] [ebp-28h]
 int v7; // [esp+38h] [ebp-24h]
 int v8; // [esp+3Ch] [ebp-20h]
 int v9; // [esp+40h] [ebp-1Ch]
 int v10; // [esp+44h] [ebp-18h]
 short v11; // [esp+48h] [ebp-14h]
 char v12; // [esp+4Ah] [ebp-12h]
 char v13; // [esp+4Bh] [ebp-11h]
 unsigned int v14; // [esp+4Ch] [ebp-10h]

 v14 = __readgsdword(0x14u);
 puts(asc_3018);
 v12 = 0;
 v11 = 0;
 strcpy((char *)s, "Test");
  {
   unsigned char *tmp_ptr = (unsigned char *)&s[2];
   tmp_ptr[1] = 0;
  }
  s[3] = 0;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 v10 = 0;
 v13 = 0;
 v0 = strlen((const char *)s);
 __printf_chk(1, unk_303C, v0 + 4700);
 __printf_chk(1, unk_305A, 1001 * LifecycleClass_instance_count + 21);
 __printf_chk(1, unk_3076, 42);
 __printf_chk(1, unk_3092, 71);
 __printf_chk(1, unk_30AE, 650);
 __printf_chk(1, unk_30CB, 22);
 v1 = template_max_int(3, 7);
 a = 10;
 v2 = template_max_double(2.5, 1.5);
 b = 20;
 template_swap_int(&a, &b);
 __printf_chk(1, unk_30E7, b + a + v1 + (int)v2);
 __printf_chk(1, unk_3103, 16);
 __printf_chk(1, unk_311F, 85);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1AE0 */
int Base_virtual_func(Base *self, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x1AF0 */
const char * Base_getName(const Base *self)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1B10 */
void Base_dtor(Base *self)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1B20 */
int Derived_virtual_func(Derived *self, int x)
{
 return self->multiplier * x;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1B40 */
const char * Derived_getName(const Derived *self)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1B60 */
int MultiDerived_funcA(MultiDerived *self)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1B70 */
int MultiDerived_funcB(MultiDerived *self)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x1B80 */
int non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *self)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1B90 */
int MiddleA_func(MiddleA *self)
{
 return *(int *)((char *)&self->dataA + *((unsigned int *)self->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1BB0 */
int virtual_thunk_to_MiddleA_func(MiddleA *self)
{
 return *(int *)((char *)&self->dataA
 + *((unsigned int *)self->_vptr_MiddleA - 3)
 + *(*(unsigned int **)((char *)&self->_vptr_MiddleA + *((unsigned int *)self->_vptr_MiddleA - 3)) - 3))
 + 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x1BD0 */
int MiddleB_func(MiddleB *self)
{
 return *(int *)((char *)&self->dataB + *((unsigned int *)self->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1BF0 */
int virtual_thunk_to_MiddleB_func(MiddleB *self)
{
 return *(int *)((char *)&self->dataB
 + *((unsigned int *)self->_vptr_MiddleB - 3)
 + *(*(unsigned int **)((char *)&self->_vptr_MiddleB + *((unsigned int *)self->_vptr_MiddleB - 3)) - 3))
 + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1C10 */
int DiamondDerived_func(DiamondDerived *self)
{
 return *(int *)((char *)&self->dataA + *((unsigned int *)self->_vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x1C30 */
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *self)
{
 return *(int *)((char *)&self->dataA
 + *((unsigned int *)self->_vptr_MiddleA - 3)
 + *(*(unsigned int **)((char *)&self->_vptr_MiddleA + *((unsigned int *)self->_vptr_MiddleA - 3)) - 3))
 + 250;
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1C50 */
int non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *self)
{
 return *(unsigned int *)((char *)self + *(unsigned int *)(*(&self[-1].dataB + 1) - 12) - 4) + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1C70 */
int RTTIDerivedA_getType(const RTTIDerivedA *self)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1C80 */
int RTTIDerivedB_getType(const RTTIDerivedB *self)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1C90 */
void RTTIDerivedB_dtor(RTTIDerivedB *self)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1CA0 */
void RTTIDerivedA_dtor(RTTIDerivedA *self)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1CB0 */
void DiamondDerived_dtor(DiamondDerived *self)
{
 ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1CC0 */
void virtual_thunk_to_DiamondDerived_dtor(DiamondDerived *self)
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x1CD0 */
void non_virtual_thunk_to_DiamondDerived_dtor(DiamondDerived *self)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1CE0 */
void MultiDerived_dtor(MultiDerived *self)
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1CF0 */
void non_virtual_thunk_to_MultiDerived_dtor(MultiDerived *self)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1D00 */
void Derived_dtor(Derived *self)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1D10 */
void Base_dtor_delete(Base *self)
{
 operator_delete(self, 4u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1D40 */
void Derived_dtor_delete(Derived *self)
{
 operator_delete(self, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1D70 */
void MultiDerived_dtor_delete(MultiDerived *self)
{
 operator_delete(self, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1DA0 */
void non_virtual_thunk_to_MultiDerived_dtor_delete(MultiDerived *self)
{
 operator_delete(&self[-1].BaseB, 0x10u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1DD0 */
void RTTIDerivedB_dtor_delete(RTTIDerivedB *self)
{
 operator_delete(self, 4u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1E00 */
void RTTIDerivedA_dtor_delete(RTTIDerivedA *self)
{
 operator_delete(self, 4u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1E30 */
void DiamondDerived_dtor_delete(DiamondDerived *self)
{
 operator_delete(self, 0x18u);
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x1E60 */
void virtual_thunk_to_DiamondDerived_dtor_delete(DiamondDerived *self)
{
 operator_delete((char *)self + *((unsigned int *)self->_vptr_MiddleA - 4), 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x1E90 */
void non_virtual_thunk_to_DiamondDerived_dtor_delete(DiamondDerived *self)
{
 operator_delete(&self[-1].dataB + 1, 0x18u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1EC0 */
int template_max_int(int a, int b)
{
 int result; // eax

 result = a;
 if ( a < b )
 return b;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1EE0 */
double template_max_double(double a, double b)
{
 long double v2; // fst6

 v2 = a;
 if ( a <= (long double)b )
 return b;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1F00 */
void template_swap_int(int *a, int *b)
{
 int v2; // ecx

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1F20 */
void Container_int_ctor(struct Container_int *self)
{
 self->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1F30 */
void Container_int_push(struct Container_int *self, int value)
{
 int size; // edx

 size = self->size;
 if ( size <= 9 )
 {
 self->size = size + 1;
 self->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1F50 */
int Container_int_get(const struct Container_int *self, int idx)
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && self->size > idx )
 return self->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1F80 */
int Container_int_getSize(const struct Container_int *self)
{
 return self->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1F90 */
void Container_double_ctor(struct Container_double *self)
{
 self->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1FA0 */
void Container_double_push(struct Container_double *self, double value)
{
 int size; // edx

 size = self->size;
 if ( size <= 9 )
 {
 self->size = size + 1;
 self->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1FD0 */
double Container_double_get(const struct Container_double *self, int idx)
{
 if ( idx >= 0 && self->size > idx )
 return self->data[idx];
 else
 return 0.0;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2000 */
int Container_double_getSize(const struct Container_double *self)
{
 return self->size;
}


/* Function: __x86.get_pc_thunk.ax @ 0x200C */
void *_x86_get_pc_thunk_ax()
{
 void *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __x86.get_pc_thunk.si @ 0x2010 */
void _x86_get_pc_thunk_si()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x2020 */
void _stack_chk_fail_local()
{
 __asm__ volatile("add ebx, (offset _GLOBAL_OFFSET_TABLE_ - $)");
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x208C */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __printf_chk @ 0x502C */

/* FAILED to decompile: _Znwj @ 0x5034 */

/* FAILED to decompile: __cxa_finalize @ 0x5038 */

/* FAILED to decompile: __cxa_begin_catch @ 0x503C */

/* FAILED to decompile: __cxa_allocate_exception @ 0x5040 */

/* FAILED to decompile: strlen @ 0x5044 */

/* FAILED to decompile: __cxa_atexit @ 0x5048 */

/* FAILED to decompile: _ZdlPvj @ 0x504C */

/* FAILED to decompile: strcmp @ 0x5054 */

/* FAILED to decompile: __libc_start_main @ 0x5058 */

/* FAILED to decompile: __stack_chk_fail @ 0x505C */

/* FAILED to decompile: __dynamic_cast @ 0x5060 */

/* FAILED to decompile: __cxa_rethrow @ 0x5068 */

/* FAILED to decompile: puts @ 0x506C */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x5070 */

/* FAILED to decompile: __cxa_end_catch @ 0x5074 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x5078 */

/* FAILED to decompile: __cxa_throw @ 0x507C */

/* FAILED to decompile: _Unwind_Resume @ 0x5080 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x5084 */

/* Total functions decompiled: 95, failed: 20 */
