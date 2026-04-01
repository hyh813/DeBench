/* Auto-injected type definitions by preprocessor */
#include <string.h>
#include <stdio.h>

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
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Macros for 64-bit value manipulation (from IDA) */
#define LODWORD(x) (*(int*)&(x))
#define HIDWORD(x) (*(((int*)&(x))+1))
#define HIBYTE(x) (*(((unsigned char*)&(x))+1))

/* Forward declarations for C++ classes */
void *operator_new(unsigned int size);
void operator_delete(void *ptr, unsigned int size);
unsigned int __readgsdword(unsigned int offset);

/* Stub implementations for external functions */
unsigned int __readgsdword(unsigned int offset)
{
    return 0;
}

void *operator_new(unsigned int size)
{
    return (void *)0;
}

void operator_delete(void *ptr, unsigned int size)
{
    (void)ptr;
    (void)size;
}

void *__cxa_allocate_exception(unsigned int size)
{
    static char exception_buffer[256];
    (void)size;
    return exception_buffer;
}

void __cxa_throw(void *exception, struct type_info *tinfo, void *dest)
{
    (void)exception;
    (void)tinfo;
    (void)dest;
}

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
struct Container_int;
struct Container_double;

/* Struct definitions */
struct Base {
    int (**_vptr_Base)(...);
};

struct Derived {
    int (**_vptr_Base)(...);
    int multiplier;
};

struct MiddleA {
    int (**_vptr_MiddleA)(...);
    int dataA;
};

struct MiddleB {
    int (**_vptr_MiddleB)(...);
    int dataB;
};

struct MultiDerived {
    struct Base BaseA;
    struct Base BaseB;
    int data;
};

struct DiamondDerived {
    struct MiddleA middleA;
    struct MiddleB middleB;
    int data;
    int (**_vptr_DiamondDerived)(...);
};

struct RTTIBase {
    int (**_vptr_RTTIBase)(...);
};

struct RTTIDerivedA {
    int (**_vptr_RTTIBase)(...);
};

struct RTTIDerivedB {
    int (**_vptr_RTTIBase)(...);
};

struct SimpleClass {
    char name[32];
};

struct LifecycleClass {
    int dummy;
};
int LifecycleClass_instance_count;

struct Container_int {
    int data[10];
    int size;
};

struct Container_double {
    double data[10];
    int size;
};

/* External typeinfo declarations for RTTI */
struct type_info {
    void *_vptr_type_info;
    const char *_name;
};
extern const struct __class_type_info typeinfo_for_RTTIBase;
extern const struct __class_type_info typeinfo_for_RTTIDerivedA;
extern const struct __class_type_info typeinfo_for_RTTIDerivedB;
extern const struct __class_type_info typeinfo_for_int;

/* External function declarations */
void *__dynamic_cast(void *obj, const struct __class_type_info *src_type, const struct __class_type_info *dst_type, int src2dst);
extern void *_gmon_start__;
static void *off_3E48 = (void *)0x12345678;
static void *off_3E5C = (void *)0x87654321;
static const char *asc_2018 = "C++ OO Features Test";
static const char *unk_203C = "%ld";
static const char *unk_205A = "%d";
static const char *unk_2076 = "%d";
static const char *unk_2092 = "%d";
static const char *unk_20AE = "%d";
static const char *unk_20CB = "%d";
static const char *unk_20E7 = "%d";
static const char *unk_2103 = "%d";
static const char *unk_211F = "%d";
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);
extern void _do_global_dtors_aux(void);
extern void *__cxa_allocate_exception(unsigned int size);
extern void __cxa_throw(void *exception, struct type_info *tinfo, void *dest);
extern void test_cpp_oo_features(void);
extern int template_max_int(int a, int b);
extern double template_max_double(double a, double b);
extern void template_swap_int(int *a, int *b);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_gcc_O2_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 ;
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

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: main @ 0x1380 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x13A0 */
void GLOBAL_sub_I__Z20test_cpp_member_funcv()
{
 /* std::ios_base stub removed for C compatibility */
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

 v2 = __readgsdword(0x14u);
 strcpy(obj.name, "Test");
 memset(&obj.name[5], 0, 27);
 LODWORD(result) = strlen(obj.name) + 4700;
 HIDWORD(result) = v2 - __readgsdword(0x14u);
 return result;
}


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

 v5 = __readgsdword(0x14u);
 v0 = template_max_int(3, 7);
 a = 10;
 r2 = template_max_double(2.5, 1.5);
 b = 20;
 template_swap_int(&a, &b);
 LODWORD(result) = b + a + v0 + (int)r2;
 HIDWORD(result) = v5 - __readgsdword(0x14u);
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
 return 0;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1880 */
void test_cpp_oo_features()
{
 size_t v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 unsigned short s[4]; // [esp+1Ch] [ebp-30h] BYREF
 int v5; // [esp+24h] [ebp-28h]
 int v6; // [esp+28h] [ebp-24h]
 int v7; // [esp+2Ch] [ebp-20h]
 int v8; // [esp+30h] [ebp-1Ch]
 int v9; // [esp+34h] [ebp-18h]
 short v10; // [esp+38h] [ebp-14h]
 char v11; // [esp+3Ah] [ebp-12h]
 char v12; // [esp+3Bh] [ebp-11h]
 unsigned int v13; // [esp+3Ch] [ebp-10h]

 v13 = __readgsdword(0x14u);
 puts(asc_2018);
 v11 = 0;
 v10 = 0;
 strcpy((char *)s, "Test");
 HIBYTE(s[2]) = 0;
 s[3] = 0;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 v12 = 0;
    v0 = strlen((const char *)s);
    __printf_chk(1, unk_203C, v0 + 4700);
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


/* Function: _ZN4Base12virtual_funcEi @ 0x1A30 */
int Base_virtual_func(struct Base *self, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x1A40 */
const char * Base_getName(const struct Base *self)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1A60 */
void Base_destructor(struct Base *self)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1A70 */
int Derived_virtual_func(struct Derived *self, int x)
{
 return self->multiplier * x;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1A90 */
const char * Derived_getName(const struct Derived *self)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1AB0 */
int MultiDerived_funcA(struct MultiDerived *self)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1AC0 */
int MultiDerived_funcB(struct MultiDerived *self)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x1AD0 */
int non_virtual_thunk_to_MultiDerived_funcB(struct MultiDerived *self)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1AE0 */
int MiddleA_func(struct MiddleA *self)
{
 return *(int *)((char *)&self->dataA + *((unsigned int *)self->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1B00 */
int virtual_thunk_to_MiddleA_func(struct MiddleA *self)
{
 return *(int *)((char *)&self->dataA
 + *((unsigned int *)self->_vptr_MiddleA - 3)
 + *(*(unsigned int **)((char *)&self->_vptr_MiddleA + *((unsigned int *)self->_vptr_MiddleA - 3)) - 3))
 + 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x1B20 */
int MiddleB_func(struct MiddleB *self)
{
 return *(int *)((char *)&self->dataB + *((unsigned int *)self->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1B40 */
int virtual_thunk_to_MiddleB_func(struct MiddleB *self)
{
 return *(int *)((char *)&self->dataB
 + *((unsigned int *)self->_vptr_MiddleB - 3)
 + *(*(unsigned int **)((char *)&self->_vptr_MiddleB + *((unsigned int *)self->_vptr_MiddleB - 3)) - 3))
 + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1B60 */
int DiamondDerived_func(struct DiamondDerived *self)
{
 return *(int *)((char *)&self->middleA.dataA + *((unsigned int *)self->middleA._vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x1B80 */
int virtual_thunk_to_DiamondDerived_func(struct DiamondDerived *self)
{
 return *(int *)((char *)&self->middleA.dataA
 + *((unsigned int *)self->middleA._vptr_MiddleA - 3)
 + *(*(unsigned int **)((char *)&self->middleA._vptr_MiddleA + *((unsigned int *)self->middleA._vptr_MiddleA - 3)) - 3))
 + 250;
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1BA0 */
int non_virtual_thunk_to_DiamondDerived_func(struct DiamondDerived *self)
{
 return *(unsigned int *)((char *)self + *(unsigned int *)(*(&self[-1].middleB.dataB + 1) - 12) - 4) + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1BC0 */
int RTTIDerivedA_getType(const struct RTTIDerivedA *self)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1BD0 */
int RTTIDerivedB_getType(const struct RTTIDerivedB *self)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1BE0 */
void RTTIDerivedB_destructor(struct RTTIDerivedB *self)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1BF0 */
void RTTIDerivedA_destructor(struct RTTIDerivedA *self)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1C00 */
void DiamondDerived_destructor(struct DiamondDerived *self)
{
 ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1C10 */
void virtual_thunk_to_DiamondDerived_destructor(struct DiamondDerived *self)
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x1C20 */
void non_virtual_thunk_to_DiamondDerived_destructor(struct DiamondDerived *self)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1C30 */
void MultiDerived_destructor(struct MultiDerived *self)
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1C40 */
void non_virtual_thunk_to_MultiDerived_destructor(struct MultiDerived *self)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1C50 */
void Derived_destructor(struct Derived *self)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1C60 */
void Base_deleting_destructor(struct Base *self)
{
 operator_delete(self, 4u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1C90 */
void Derived_deleting_destructor(struct Derived *self)
{
 operator_delete(self, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1CC0 */
void MultiDerived_deleting_destructor(struct MultiDerived *self)
{
 operator_delete(self, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1CF0 */
void non_virtual_thunk_to_MultiDerived_deleting_destructor(struct MultiDerived *self)
{
 operator_delete(&self[-1].BaseB, 0x10u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1D20 */
void RTTIDerivedB_deleting_destructor(struct RTTIDerivedB *self)
{
 operator_delete(self, 4u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1D50 */
void RTTIDerivedA_deleting_destructor(struct RTTIDerivedA *self)
{
 operator_delete(self, 4u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1D80 */
void DiamondDerived_deleting_destructor(struct DiamondDerived *self)
{
 operator_delete(self, 0x18u);
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x1DB0 */
void virtual_thunk_to_DiamondDerived_deleting_destructor(struct DiamondDerived *self)
{
 operator_delete((char *)self + *((unsigned int *)self->middleA._vptr_MiddleA - 4), 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x1DE0 */
void non_virtual_thunk_to_DiamondDerived_deleting_destructor(struct DiamondDerived *self)
{
 operator_delete(&self[-1].middleB.dataB + 1, 0x18u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1E10 */
int template_max_int(int a, int b)
{
 int result; // eax

 result = a;
 if ( a < b )
 return b;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1E30 */
double template_max_double(double a, double b)
{
 long double v2; // fst6

 v2 = a;
 if ( a <= (long double)b )
 return b;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1E50 */
void template_swap_int(int *a, int *b)
{
 int v2; // ecx

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1E70 */
void Container_int_constructor(struct Container_int *self)
{
 self->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1E80 */
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


/* Function: _ZNK9ContainerIiE3getEi @ 0x1EA0 */
int Container_int_get(const struct Container_int *self, int idx)
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && self->size > idx )
 return self->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1ED0 */
int Container_int_getSize(const struct Container_int *self)
{
 return self->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1EE0 */
void Container_double_constructor(struct Container_double *self)
{
 self->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1EF0 */
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


/* Function: _ZNK9ContainerIdE3getEi @ 0x1F20 */
double Container_double_get(const struct Container_double *self, int idx)
{
 if ( idx >= 0 && idx < self->size )
 return self->data[idx];
 else
 return 0.0;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1F50 */
int Container_double_getSize(const struct Container_double *self)
{
 return self->size;
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
 ;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */






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
