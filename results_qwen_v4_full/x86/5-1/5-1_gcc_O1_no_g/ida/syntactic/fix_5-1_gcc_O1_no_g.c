/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* LODWORD/HIDWORD macros for 64-bit value manipulation */
#define LODWORD(x) (*(int *)&(x))
#define HIDWORD(x) (*(((int *)&(x)) + 1))

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct MultiDerived MultiDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct LifecycleClass LifecycleClass;

/* LifecycleClass definition */
struct LifecycleClass {
    int instance_count;
};

/* Static member definition for LifecycleClass */
static int LifecycleClass_instance_count = 0;

/* Define __readgsdword intrinsic */
static inline unsigned int __readgsdword(unsigned int offset) { return 0; }

/* External function declarations */
extern size_t strlen(const char *s);
extern int strcmp(const char *s1, const char *s2);
extern char *strcpy(char *dest, const char *src);
extern void *__dynamic_cast(const void *, const struct __class_type_info *, const struct __class_type_info *, int);
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);
extern void _do_global_dtors_aux(void);
extern int virtual_thunk_to_DiamondDerived_func(DiamondDerived *);
extern int template_max_int(int, int);
extern long double template_max_double(double, double);
extern int *template_swap_int(int *, int *);
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *, struct type_info *, void *);
extern int puts(const char *);
extern int __printf_chk(int, const char *, ...);
extern void *operator_new(size_t);
extern void *operator_new_array(size_t);
extern void operator_delete(void *, size_t);
extern void operator_delete_array(void *);

/* External typeinfo declarations */
extern struct type_info typeinfo_for_int;
extern struct __class_type_info typeinfo_for_RTTIBase;
extern struct __class_type_info typeinfo_for_RTTIDerivedA;
extern struct __class_type_info typeinfo_for_RTTIDerivedB;

/* External variable declarations */
extern void *_gmon_start__;
extern void *_dso_handle;
extern void *off_4CD4;
extern void *off_4CEC;
extern void *off_4DC0;
extern void *off_4DD4;
extern void *off_4DE8;
extern char *asc_2018;
extern char *unk_203C;
extern char *unk_205A;
extern char *unk_2076;
extern char *unk_2092;
extern char *unk_20AE;
extern char *unk_20CB;
extern char *unk_20E7;
extern char *unk_2103;
extern char *unk_211F;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_gcc_O1_no_g
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
void sub_1150()
{
 sub_1030();
}


/* Function: sub_1160 @ 0x1160 */
void sub_1160()
{
 sub_1030();
}


/* Function: sub_1170 @ 0x1170 */
int sub_1170(int a1)
{
 return (*(int (**)(void))(a1 + 92))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_12DC @ 0x12DC */
void sub_12DC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x12E0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1419 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x141D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1421 */
long long test_cpp_member_func(void)
{
 long long result; // rax
 char s[6]; // [esp+Ch] [ebp-30h] BYREF
 short v2; // [esp+12h] [ebp-2Ah]
 int v3; // [esp+14h] [ebp-28h]
 int v4; // [esp+18h] [ebp-24h]
 int v5; // [esp+1Ch] [ebp-20h]
 int v6; // [esp+20h] [ebp-1Ch]
 int v7; // [esp+24h] [ebp-18h]
 short v8; // [esp+28h] [ebp-14h]
 char v9; // [esp+2Ah] [ebp-12h]
 char v10; // [esp+2Bh] [ebp-11h]
 unsigned int v11; // [esp+2Ch] [ebp-10h]

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


/* Function: _Z20test_cpp_constructorv @ 0x14B5 */
int test_cpp_constructor(void)
{
 unsigned int *v0; // eax
 int v1; // esi

 v0 = (unsigned int *)operator_new_array(0x14u);
 v0[1] = 10;
 v0[2] = 20;
 v0[3] = 30;
 v0[4] = 40;
 v1 = LifecycleClass_instance_count++;
 operator_delete_array(v0);
 --LifecycleClass_instance_count;
 return v1 + 21 + 1000 * LifecycleClass_instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1523 */
int call_virtual_func(Base *a1, int a2)
{
 return (**(int ( ***)(Base *, int))a1)(a1, a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x153B */
long long test_cpp_virtual_func(void)
{
 int v0; // ebx
 long long result; // rax
 unsigned int ( **v2)(Base *__hidden, int); // [esp+8h] [ebp-1Ch] BYREF
 unsigned int v3[2]; // [esp+Ch] [ebp-18h] BYREF
 unsigned int v4; // [esp+14h] [ebp-10h]

 v4 = __readgsdword(0x14u);
 v2 = (unsigned int ( **)(Base *__hidden, int))&off_4CD4;
 v3[0] = (unsigned int)&off_4CEC;
 v3[1] = 3;
 v0 = call_virtual_func((Base *)&v2, 5);
 LODWORD(result) = v0 + call_virtual_func((Base *)v3, 5) + 21;
 HIDWORD(result) = v4 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x15B1 */
int test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x15BB */
long long test_cpp_diamond_inheritance(void)
{
 int v0; // ebx
 long long result; // rax
 unsigned int ( **v2)(DiamondDerived *__hidden); // [esp+24h] [ebp-18h] BYREF
 int v3; // [esp+28h] [ebp-14h]
 unsigned int v4; // [esp+2Ch] [ebp-10h]

 v4 = __readgsdword(0x14u);
 v2 = (unsigned int ( **)(DiamondDerived *__hidden))&off_4DC0;
 v3 = 50;
 v0 = virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&v2);
 v3 = 100;
 LODWORD(result) = v0 + virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&v2);
 HIDWORD(result) = v4 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1634 */
int test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x163E */
long long test_cpp_template_func(void)
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
 LODWORD(result) = v4 + v3 + v1;
 HIDWORD(result) = v5 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z23test_cpp_template_classv @ 0x16E2 */
int test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x16EC */
int test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x16F6 */
void test_cpp_exception(void)
{
 unsigned int *exception; // eax

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1806 */
int test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1810 */
size_t test_cpp_rtti(void)
{
 unsigned int *v0; // ebp
 const char *v1; // edi
 int v2; // esi
 int v3; // esi
 size_t v4; // esi
 int *lpsrc; // [esp+18h] [ebp-24h]
 int v7; // [esp+1Ch] [ebp-20h]

lpsrc = (int *)operator_new(4u);
*lpsrc = (int)(uintptr_t)off_4DD4;
v0 = (unsigned int *)operator_new(4u);
*v0 = (unsigned int)(uintptr_t)off_4DE8;
 v7 = *lpsrc;
 v1 = *(const char **)(*(unsigned int *)(*lpsrc - 4) + 4);
 v2 = 10;
 if ( v1 != "12RTTIDerivedA" )
 {
 v2 = 0;
 if ( *v1 != 42 )
 v2 = strcmp(v1, "12RTTIDerivedA") == 0 ? 0xA : 0;
 }
 v3 = v2 + 20;
 if ( __dynamic_cast(
 lpsrc,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0) )
 {
 v3 += 100;
 }
 if ( __dynamic_cast(
 (const void *)v0,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0) )
 {
 v3 += 200;
 }
 v4 = strlen(&v1[*v1 == 42]) + v3;
 (*(void ( **)(int *))(v7 + 4))(lpsrc);
 (*(void ( **)(void *))(*(unsigned int *)v0 + 4))(v0);
 return v4;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x193A */
void test_cpp_oo_features(void)
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 long double v5; // fst7
 int v6; // eax

 puts(asc_2018);
 v0 = test_cpp_member_func();
 __printf_chk(1, unk_203C, v0);
 v1 = test_cpp_constructor();
 __printf_chk(1, unk_205A, v1);
 v2 = test_cpp_virtual_func();
 __printf_chk(1, unk_2076, v2);
 v3 = test_cpp_multiple_inheritance();
 __printf_chk(1, unk_2092, v3);
 v4 = test_cpp_diamond_inheritance();
 __printf_chk(1, unk_20AE, v4);
 v5 = __printf_chk(1, unk_20CB, 22);
 v6 = test_cpp_template_func();
 __printf_chk(1, unk_20E7, v6);
 __printf_chk(1, unk_2103, 16);
 __printf_chk(1, unk_211F, 85);
 test_cpp_exception();
}


/* Function: main @ 0x1A75 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x1A8B */
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 return 0;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1AC8 */
int Base_virtual_func(Base *this_, int a2)
{
 (void)this_;
 return a2 + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x1AD4 */
const char *Base_getName()
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1AEA */
void Base_destructor()
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1AF0 */
int Derived_virtual_func(Derived *this_, int a2)
{
 return *((unsigned int *)this_ + 1) * a2;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1B02 */
const char *Derived_getName()
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1B18 */
int MultiDerived_funcA()
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1B22 */
int MultiDerived_funcB()
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x1B2C */
int non_virtual_thunk_to_MultiDerived_funcB()
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1B36 */
int MiddleA_func(MiddleA *this_)
{
 return *(unsigned int *)((char *)this_ + *(unsigned int *)(*(unsigned int *)this_ - 12) + 4) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1B4D */
int virtual_thunk_to_MiddleA_func(MiddleA *this_)
{
 return *(unsigned int *)((char *)this_
 + *(unsigned int *)(*(unsigned int *)this_ - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)this_ + *(unsigned int *)(*(unsigned int *)this_ - 12)) - 12)
 + 4)
 + 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x1B6A */
int MiddleB_func(MiddleB *this_)
{
 return *(unsigned int *)((char *)this_ + *(unsigned int *)(*(unsigned int *)this_ - 12) + 4) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1B81 */
int virtual_thunk_to_MiddleB_func(MiddleB *this_)
{
 return *(unsigned int *)((char *)this_
 + *(unsigned int *)(*(unsigned int *)this_ - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)this_ + *(unsigned int *)(*(unsigned int *)this_ - 12)) - 12)
 + 4)
 + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1B9E */
int DiamondDerived_func(DiamondDerived *this_)
{
 return *(unsigned int *)((char *)this_ + *(unsigned int *)(*(unsigned int *)this_ - 12) + 4) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x1BB5 */
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *this_)
{
 return *(unsigned int *)((char *)this_
 + *(unsigned int *)(*(unsigned int *)this_ - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)this_ + *(unsigned int *)(*(unsigned int *)this_ - 12)) - 12)
 + 4)
 + 250;
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1BD1 */
int non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *this_)
{
 return *(unsigned int *)((char *)this_ + *(unsigned int *)(*((unsigned int *)this_ - 2) - 12) - 4) + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1BEA */
int RTTIDerivedA_getType()
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1BF4 */
int RTTIDerivedB_getType()
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1BFE */
void RTTIDerivedB_destructor()
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1C04 */
void RTTIDerivedA_destructor()
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1C0A */
void DiamondDerived_destructor()
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x1C0F */
void non_virtual_thunk_to_DiamondDerived_destructor()
{
 ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1C14 */
void virtual_thunk_to_DiamondDerived_destructor()
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1C1A */
void MultiDerived_destructor()
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1C1F */
void non_virtual_thunk_to_MultiDerived_destructor()
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1C24 */
void Derived_destructor()
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1C2A */
void Base_destructor_delete(Base *this_)
{
 operator_delete(this_, 4u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1C4E */
void Derived_destructor_delete(Derived *this_)
{
 operator_delete(this_, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1C72 */
void MultiDerived_destructor_delete(MultiDerived *this_)
{
 operator_delete(this_, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1C95 */
void non_virtual_thunk_to_MultiDerived_destructor_delete(MultiDerived *this_)
{
 operator_delete((char *)this_ - 8, 0x10u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1CBC */
void RTTIDerivedA_destructor_delete(RTTIDerivedA *this_)
{
 operator_delete(this_, 4u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1CE0 */
void RTTIDerivedB_destructor_delete(RTTIDerivedB *this_)
{
 operator_delete(this_, 4u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1D04 */
void DiamondDerived_destructor_delete(DiamondDerived *this_)
{
 operator_delete(this_, 0x18u);
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x1D27 */
void virtual_thunk_to_DiamondDerived_destructor_delete(DiamondDerived *this_)
{
 operator_delete((char *)this_ + *(unsigned int *)(*(unsigned int *)this_ - 16), 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x1D50 */
void non_virtual_thunk_to_DiamondDerived_destructor_delete(DiamondDerived *this_)
{
 operator_delete((char *)this_ - 8, 0x18u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1D77 */
int template_max_int(int a1, int a2)
{
 int result; // eax

 result = a1;
 if ( a1 < a2 )
 return a2;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1D89 */
long double template_max_double(double a1, double a2)
{
 long double v2; // fst6

 v2 = a1;
 if ( a1 <= (long double)a2 )
 return a2;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1D9C */
int *template_swap_int(int *a1, int *a2)
{
 int *result; // eax
 int v3; // ecx

 result = a1;
 v3 = *a2;
 *a2 = *a1;
 *a1 = v3;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1DB4 */
int Container_int_Constructor(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1DC4 */
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


/* Function: _ZNK9ContainerIiE3getEi @ 0x1DE2 */
int Container_int_get(int a1, int a2)
{
 int result; // eax

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4 * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1E02 */
int Container_int_getSize(int a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1E0E */
int Container_double_Constructor(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1E1E */
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


/* Function: _ZNK9ContainerIdE3getEi @ 0x1E40 */
long double Container_double_get(int a1, int a2)
{
 if ( a2 < 0 )
 return 0.0;
 if ( *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8 * a2);
 return 0.0;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1E60 */
int Container_double_getSize(int a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: __x86.get_pc_thunk.ax @ 0x1E6C */
void *_x86_get_pc_thunk_ax()
{
 void *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __x86.get_pc_thunk.si @ 0x1E70 */
void _x86_get_pc_thunk_si()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x1E80 */
void _stack_chk_fail_local()
{
 __asm__ volatile("addl $_GLOBAL_OFFSET_TABLE_, %%ebx" ::: "memory");
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1EEC */
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

/* FAILED to decompile: _Znaj @ 0x505C */

/* FAILED to decompile: __stack_chk_fail @ 0x5060 */

/* FAILED to decompile: __dynamic_cast @ 0x5064 */

/* FAILED to decompile: _ZdaPv @ 0x5068 */

/* FAILED to decompile: __cxa_rethrow @ 0x5070 */

/* FAILED to decompile: puts @ 0x5074 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x5078 */

/* FAILED to decompile: __cxa_end_catch @ 0x507C */

/* FAILED to decompile: __gxx_personality_v0 @ 0x5080 */

/* FAILED to decompile: __cxa_throw @ 0x5084 */

/* FAILED to decompile: _Unwind_Resume @ 0x508C */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x5090 */

/* Total functions decompiled: 97, failed: 22 */
