/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_gcc_Os_no_g
 * Processor: pc
 */

#ifndef __readgsdword
#define __readgsdword(x) 0
#endif

#ifndef LODWORD
#define LODWORD(x) (*(unsigned int*)&(x))
#endif

#ifndef HIDWORD
#define HIDWORD(x) (*(unsigned int*)((char*)&(x) + 4))
#endif

#ifndef operator_delete
#define operator_delete(ptr, size) free(ptr)
#endif

#ifndef operator_delete_array
#define operator_delete_array(ptr) free(ptr)
#endif

#ifndef operator_new
#define operator_new(size) malloc(size)
#endif

#ifndef operator_new_array
#define operator_new_array(size) malloc(size)
#endif

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Forward declarations for classes/structs */
struct Base;
struct Derived;
struct MultiDerived;
struct VirtualBase;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;

/* Forward function declarations */
void DiamondDerived_destructor(DiamondDerived *self);
void DiamondDerived_destructor0(DiamondDerived *self);
void frame_dummy(void);
void _do_global_ctors_aux(void);
void _do_global_dtors_aux(void);
void *__cxa_allocate_exception(unsigned int size);
void __cxa_throw(void *exception, void *type_info, void *dest);
void *__dynamic_cast(void *obj, const void *src_type, const void *dst_type, int flags);
void test_cpp_oo_features(long double a1);
void std_ios_base_Init_Init(void *);
void std_ios_base_Init_Init_D1(void *);
int template_max_int(int a1, int a2);
long double template_max_double(double a1, double a2);
void template_swap_int(int *a1, int *a2);
int Container_int_push(int a1, int a2);
void std_unique_ptr_int_array_destructor(void **a1);
void std_unique_ptr_int_destructor(void **a1);
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *self);
void MiddleA_destructor_2(MiddleA *self, int a2);
void MiddleB_destructor_2(MiddleB *self, int a2);

/* External symbol declarations */
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void *off_5C94;
extern void *off_5CB0;
extern void *off_5CD0;
extern void *off_5CEC;
extern void *off_5D88;
extern void *off_5DA0;
extern void *off_5DBC;
extern int (**off_5C58)(void);
extern int (**off_5C70)(void);
extern int *off_5DD0;
extern int *off_5DE4;
extern int *off_5D64;
extern int *off_5D6C;
extern int dword_0;
extern char *asc_301A;
extern char *unk_303E;
extern char *unk_305C;
extern char *unk_3078;
extern char *unk_3094;
extern char *unk_30B0;
extern char *unk_30CD;
extern char *unk_30E9;
extern char *unk_3105;
extern char *unk_3121;
extern void *_gmon_start__;
extern void *_dso_handle;
extern void *std___ioinit;
extern void *typeinfo_for_int;
extern void *typeinfo_for_RTTIBase;
extern void *typeinfo_for_RTTIDerivedA;
extern void *typeinfo_for_RTTIDerivedB;
extern int LifecycleClass_instance_count;

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 if ( &_gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 frame_dummy();
 _do_global_ctors_aux();
 return 0;
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp dword ptr [ebx+8]" ::: "memory");
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
void sub_1170()
{
 sub_1030();
}


/* Function: sub_1180 @ 0x1180 */
int sub_1180(int a1)
{
 return (*(int (**)(void))(a1 + 96))();
}


/* Function: _Z18test_cpp_exceptionv @ 0x12D0 */
void test_cpp_exception(void)
{
 unsigned int *exception; // eax

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: main @ 0x13C2 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features(0.0);
 return 0;
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x13D5 */
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 std_ios_base_Init_Init(&std___ioinit);
 return __cxa_atexit((void (*)(void *))&std_ios_base_Init_Init_D1, &std___ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_144C @ 0x144C */
void sub_144C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1450 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1589 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x158D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1591 */
long long test_cpp_member_func(void)
{
 long long result; // rax
 char dest[32]; // [esp+0h] [ebp-2Ch] BYREF
 unsigned int v2; // [esp+20h] [ebp-Ch]

 v2 = __readgsdword(0x14u);
 strncpy(dest, "Test", 0x1Fu);
 dest[31] = 0;
 LODWORD(result) = strlen(dest) + 4700;
 HIDWORD(result) = v2 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z20test_cpp_constructorv @ 0x15F1 */
int test_cpp_constructor(void)
{
 return 1001 * LifecycleClass_instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x160D */
int call_virtual_func(int (***a1)(void), int a2)
{
 return (**a1)();
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1621 */
// bad sp value at call has been detected, the output may be wrong!
// positive sp value has been detected, the output may be wrong!
long long test_cpp_virtual_func(void)
{
 int v0; // ebx
 long long result; // rax
 int (**v2)(void); // [esp-20h] [ebp-20h] BYREF
 int (**v3[2])(void); // [esp-1Ch] [ebp-1Ch] BYREF
 unsigned int v4; // [esp-14h] [ebp-14h]

 v4 = __readgsdword(0x14u);
 v3[0] = (int (**)(void))off_5C70;
 v2 = (int (**)(void))off_5C58;
 v3[1] = (int (**)(void))(&dword_0 + 3);
 v0 = call_virtual_func(&v2, 5);
 LODWORD(result) = v0 + call_virtual_func(v3, 5) + 21;
 HIDWORD(result) = v4 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x168F */
int test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1699 */
int test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x16A3 */
long long test_cpp_template_func(long double a1)
{
 int v1; // ebx
 long long result; // rax
 int v3; // [esp+1Ch] [ebp-14h] BYREF
 int v4; // [esp+20h] [ebp-10h] BYREF
 unsigned int v5; // [esp+24h] [ebp-Ch]

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


/* Function: _Z23test_cpp_template_classv @ 0x1735 */
long long test_cpp_template_class(void)
{
 int v0; // eax
 long long result; // rax
 unsigned int v2[10]; // [esp+8h] [ebp-38h] BYREF
 int v3; // [esp+30h] [ebp-10h]
 unsigned int v4; // [esp+34h] [ebp-Ch]

 v4 = __readgsdword(0x14u);
 v3 = 1;
 v2[0] = 10;
 Container_int_push(v2, 20);
 Container_int_push(v2, 30);
 v0 = 0;
 if ( v3 > 0 )
 v0 = v2[0];
 LODWORD(result) = v3 + v0 + 3;
 HIDWORD(result) = v4 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z15test_cpp_lambdav @ 0x1797 */
int test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z13test_cpp_rttiv @ 0x17A1 */
void *test_cpp_rtti(void)
{
 const char *v0; // edi
 int v2; // [esp-Ch] [ebp-34h]
 int v3; // [esp-8h] [ebp-30h]
 int v4; // [esp-4h] [ebp-2Ch]
 int v5; // [esp+4h] [ebp-24h]
 unsigned int *v6; // [esp+8h] [ebp-20h]
 unsigned int *lpsrc; // [esp+Ch] [ebp-1Ch]

 lpsrc = (unsigned int *)operator_new(4u);
 *lpsrc = (unsigned int)(long)off_5DD0;
 v6 = (unsigned int *)operator_new(4u);
 *v6 = (unsigned int)(long)off_5DE4;
 v6 = (unsigned int *)operator_new(4u);
 *v6 = (unsigned int)(long)off_5DE4;
 v5 = (unsigned int)lpsrc;
 v0 = *(const char **)(*(unsigned int *)(*lpsrc - 4) + 4);
 if ( v0 != "12RTTIDerivedA" && *v0 != 42 )
 strcmp(v0, "12RTTIDerivedA");
 __dynamic_cast(
 lpsrc,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0);
 __dynamic_cast(
 v6,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0);
 if ( *v0 == 42 )
 ++v0;
 strlen(v0);
 (*(void ( **)(unsigned int *, int, int, int))(v5 + 4))(lpsrc, 0, 0, 0);
 (*(void (**)(void))(*(unsigned int *)v6 + 4))();
 return v6;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x18C9 */
int test_cpp_smart_ptr(void)
{
 void *v0; // eax
 void *v1; // eax
 void *v3; // [esp+30h] [ebp-2Ch] BYREF
 void *v4; // [esp+34h] [ebp-28h] BYREF
 unsigned int v5[5]; // [esp+38h] [ebp-24h] BYREF

 v5[1] = __readgsdword(0x14u);
 v0 = operator_new(4u);
 v3 = 0;
 *(unsigned int *)v0 = 200;
 v4 = v0;
 v1 = operator_new_array(0x14u);
 *(int *)v1 = 1;
 ((int *)v1)[1] = 2;
 ((int *)v1)[2] = 3;
 ((int *)v1)[3] = 4;
 ((int *)v1)[4] = 5;
 v5[0] = (unsigned int)(long)v1;
 std_unique_ptr_int_array_destructor((void **)v5);
 std_unique_ptr_int_destructor((void **)&v4);
 std_unique_ptr_int_destructor((void **)&v3);
 return 703;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x199D */
long long test_cpp_diamond_inheritance(void)
{
 int v0; // ebx
 long long result; // rax
 int v2; // [esp+1Ch] [ebp-40h]
 unsigned int v3[4]; // [esp+24h] [ebp-38h] BYREF
 unsigned int v4; // [esp+34h] [ebp-28h] BYREF
 int v5; // [esp+38h] [ebp-24h]
 unsigned int v6; // [esp+3Ch] [ebp-20h]

 v6 = __readgsdword(0x14u);
 v3[0] = (unsigned int)off_5D88;
 v4 = (unsigned int)off_5DBC;
 v3[2] = (unsigned int)off_5DA0;
 v5 = 50;
 v0 = virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&v4);
 v5 = 100;
 v2 = v0 + virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&v4);
 DiamondDerived_destructor((DiamondDerived *)v3);
 LODWORD(result) = v2;
 HIDWORD(result) = v6 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1A22 */
void test_cpp_oo_features(long double a1)
{
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v9; // eax

 puts(asc_301A);
 v1 = test_cpp_member_func();
 __printf_chk(1, unk_303E, v1);
 v2 = test_cpp_constructor();
 __printf_chk(1, unk_305C, v2);
 v3 = test_cpp_virtual_func();
 __printf_chk(1, unk_3078, v3);
 v4 = test_cpp_multiple_inheritance();
 __printf_chk(1, unk_3094, v4);
 v5 = test_cpp_diamond_inheritance();
 __printf_chk(1, unk_30B0, v5);
 v6 = test_cpp_operator_overload();
 __printf_chk(1, unk_30CD, v6);
 v7 = test_cpp_template_func(a1);
 __printf_chk(1, unk_30E9, v7);
 v8 = test_cpp_template_class();
 __printf_chk(1, unk_3105, v8);
 v9 = test_cpp_lambda();
 __printf_chk(1, unk_3121, v9);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1B66 */
int Base_virtual_func(struct Base *self, int a2)
{
 (void)self;
 return a2 + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x1B74 */
const char *Base_getName()
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1B8A */
void Base_destructor()
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1B90 */
int Derived_virtual_func(struct Derived *self, int a2)
{
 return (int)(*((unsigned int *)self + 1) * a2);
}


/* Function: _ZNK7Derived7getNameEv @ 0x1BA4 */
const char *Derived_getName()
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1BBA */
int MultiDerived_funcA(struct MultiDerived *self)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1BC4 */
int MultiDerived_funcB(struct MultiDerived *self)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x1BCE */
int non_virtual_thunk_to_MultiDerived_funcB()
{
 return 40;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x1BD8 */
int VirtualBase_func(struct VirtualBase *self)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x1BE2 */
void VirtualBase_destructor(struct VirtualBase *self)
{
 ;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1BE8 */
int MiddleA_func(struct MiddleA *self)
{
 return (int)*(unsigned int *)((char *)self + *(int *)(*(int *)self - 12) + 4) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1C02 */
int virtual_thunk_to_MiddleA_func(MiddleA *self)
{
 return MiddleA_func((MiddleA *)((char *)self + *(int *)(*(int *)self - 12)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x1C16 */
int MiddleB_func(struct MiddleB *self)
{
 return (int)*(unsigned int *)((char *)self + *(int *)(*(int *)self - 12) + 4) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1C30 */
int virtual_thunk_to_MiddleB_func(MiddleB *self)
{
 return MiddleB_func((MiddleB *)((char *)self + *(int *)(*(int *)self - 12)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1C44 */
int DiamondDerived_func(struct DiamondDerived *self)
{
 return *(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12) + 4) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x1C5E */
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *self)
{
 return DiamondDerived_func((DiamondDerived *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12)));
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1C71 */
int non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *self)
{
 return DiamondDerived_func((DiamondDerived *)((char *)self - 8));
}


/* Function: _ZN7MiddleAD1Ev @ 0x1C7C */
void MiddleA_destructor_1(MiddleA *self)
{
 *(unsigned int *)self = &off_5C94;
 *((unsigned int *)self + 2) = &off_5CB0;
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x1CA1 */
void virtual_thunk_to_MiddleA_destructor(MiddleA *self)
{
 unsigned int *v1; // eax

 v1 = (unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 16));
 *v1 = (unsigned int)off_5C94;
 v1[2] = (unsigned int)off_5CB0;
}


/* Function: _ZN7MiddleBD1Ev @ 0x1CCC */
void MiddleB_destructor_1(MiddleB *self)
{
 *(unsigned int *)self = &off_5CD0;
 *((unsigned int *)self + 2) = &off_5CEC;
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x1CF1 */
void virtual_thunk_to_MiddleB_destructor(MiddleB *self)
{
 unsigned int *v1; // eax

 v1 = (unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 16));
 *v1 = (unsigned int)off_5CD0;
 v1[2] = (unsigned int)off_5CEC;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1D1C */
int RTTIDerivedA_getType(struct RTTIDerivedA *self)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1D26 */
int RTTIDerivedB_getType(struct RTTIDerivedB *self)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1D30 */
void RTTIDerivedB_destructor(struct RTTIDerivedB *self)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1D36 */
void RTTIDerivedA_destructor(struct RTTIDerivedA *self)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1D3C */
void MultiDerived_destructor(struct MultiDerived *self)
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1D41 */
void non_virtual_thunk_to_MultiDerived_destructor()
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1D46 */
void Derived_destructor(struct Derived *self)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1D4C */
void Base_destructor0(struct Base *self)
{
 operator_delete(self, 4u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1D74 */
void Derived_destructor0(struct Derived *self)
{
 operator_delete(self, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1D9C */
void MultiDerived_destructor0(struct MultiDerived *self)
{
 operator_delete(self, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1DC4 */
void non_virtual_thunk_to_MultiDerived_destructor0(MultiDerived *self)
{
 MultiDerived_destructor0((MultiDerived *)((char *)self - 8));
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x1DD0 */
void VirtualBase_destructor0(struct VirtualBase *self)
{
 operator_delete(self, 8u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1DF8 */
void RTTIDerivedB_destructor0(struct RTTIDerivedB *self)
{
 operator_delete(self, 4u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1E20 */
void RTTIDerivedA_destructor0(struct RTTIDerivedA *self)
{
 operator_delete(self, 4u);
}


/* Function: _ZN7MiddleAD0Ev @ 0x1E48 */
void MiddleA_destructor0(MiddleA *self)
{
 *(unsigned int *)self = (unsigned int)off_5C94;
 *((unsigned int *)self + 2) = (unsigned int)off_5CB0;
 operator_delete(self, 0x10u);
}


/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x1E7F */
void virtual_thunk_to_MiddleA_destructor0(MiddleA *self)
{
 MiddleA_destructor0((MiddleA *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 16)));
}


/* Function: _ZN7MiddleBD0Ev @ 0x1E92 */
void MiddleB_destructor0(MiddleB *self)
{
 *(unsigned int *)self = (unsigned int)off_5CD0;
 *((unsigned int *)self + 2) = (unsigned int)off_5CEC;
 operator_delete(self, 0x10u);
}


/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x1EC9 */
void virtual_thunk_to_MiddleB_destructor0(MiddleB *self)
{
 MiddleB_destructor0((MiddleB *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 16)));
}


/* Function: _ZN7MiddleAD4Ev @ 0x1EDC */
 void MiddleA_destructor_4(MiddleA *self, int a2, int a3)
{
 unsigned int ( **v3)(MiddleA *__hidden); // eax
 unsigned int ( **v4)(MiddleA *__hidden); // ecx
 int v5; // eax

 v3 = (unsigned int (**)(MiddleA *))off_5C94;
 if ( !a2 )
 v3 = *(unsigned int ( ***)(MiddleA *__hidden))a3;
 *(unsigned int *)self = (unsigned int)(long)v3;
 if ( a2 )
 {
 v4 = (unsigned int (**)(MiddleA *))(long)off_5CB0;
 v5 = 8;
 }
 else
 {
 v4 = *(unsigned int ( ***)(MiddleA *__hidden))(a3 + 4);
 v5 = (int)*(v3 - 3);
 }
 *(unsigned int *)((char *)self + v5) = (unsigned int)(long)v4;
}


/* Function: _ZN7MiddleAD2Ev @ 0x1F26 */
void MiddleA_destructor_2(MiddleA *self, int a2)
{
 MiddleA_destructor_4(self, 0, a2);
}


/* Function: _ZN7MiddleBD4Ev @ 0x1F42 */
 void MiddleB_destructor_4(MiddleB *self, int a2, int a3)
{
 unsigned int ( **v3)(MiddleB *__hidden); // eax
 unsigned int ( **v4)(MiddleB *__hidden); // ecx
 int v5; // eax

 v3 = (unsigned int (**)(MiddleB *))off_5CD0;
 if ( !a2 )
 v3 = *(unsigned int ( ***)(MiddleB *__hidden))a3;
 *(unsigned int *)self = (unsigned int)(long)v3;
 if ( a2 )
 {
 v4 = (unsigned int (**)(MiddleB *))(long)off_5CEC;
 v5 = 8;
 }
 else
 {
 v4 = *(unsigned int ( ***)(MiddleB *__hidden))(a3 + 4);
 v5 = (int)*(v3 - 3);
 }
 *(unsigned int *)((char *)self + v5) = (unsigned int)(long)v4;
}


/* Function: _ZN7MiddleBD2Ev @ 0x1F8C */
void MiddleB_destructor_2(MiddleB *self, int a2)
{
 MiddleB_destructor_4(self, 0, a2);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1FA8 */
int template_max_int(int a1, int a2)
{
 int result; // eax

 result = a1;
 if ( a1 < a2 )
 return a2;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1FBC */
long double template_max_double(double a1, double a2)
{
 long double result; // fst7

 result = a2;
 if ( a1 > (long double)a2 )
 return a1;
 return result;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1FD5 */
void template_swap_int(int *a1, int *a2)
{
 int v3; // ecx

 v3 = *a1;
 *a1 = *a2;
 *a2 = v3;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1FEE */
int Container_int_Constructor(int a1)
{
 int result; // eax

 result = a1;
 *(int *)(a1 + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x2002 */
int Container_int_push(int a1, int a2)
{
 int v3; // edx

 v3 = *(int *)(a1 + 40);
 if ( v3 <= 9 )
 {
 *(int *)(a1 + 40) = v3 + 1;
 *(int *)(a1 + 4 * v3) = a2;
 }
 return a1;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x2022 */
int Container_int_get(int a1, int a2)
{
 int result; // eax

 result = 0;
 if ( a2 >= 0 && *(int *)(a1 + 40) > a2 )
 return *(int *)(a1 + 4 * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x2040 */
int Container_int_getSize(int a1)
{
 return *(int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x2050 */
int Container_double_Constructor(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x2064 */
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


/* Function: _ZNK9ContainerIdE3getEi @ 0x2088 */
long double Container_double_get(int a1, int a2)
{
 long double result; // fst7

 result = 0.0;
 if ( a2 >= 0 && a2 < *(unsigned int *)(a1 + 80) )
 return *(double *)(a1 + 8 * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x20A8 */
int Container_double_getSize(int a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x20B8 */
void std_unique_ptr_int_destructor(void **a1)
{
 if ( *a1 )
 operator_delete(*a1, 4u);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x20E8 */
void std_unique_ptr_int_array_destructor(void **a1)
{
 if ( *a1 )
 operator_delete_array(*a1);
}


/* Function: _ZN14DiamondDerivedD4Ev @ 0x2116 */
 void DiamondDerived_destructor_4(DiamondDerived *self, int a2, int a3)
{
 void ( **v3)(DiamondDerived *__hidden); // edx
 void ( **v4)(DiamondDerived *__hidden); // ecx
 int v5; // edx
 void ( **v6)(DiamondDerived *__hidden); // edx
 int v7; // edx
 int v8; // eax

 v3 = (void (**)(DiamondDerived *))off_5D88;
 if ( !a2 )
 v3 = *(void ( ***)(DiamondDerived *__hidden))a3;
 *(unsigned int *)self = (unsigned int)v3;
 if ( a2 )
 {
 v4 = (void (**)(DiamondDerived *))off_5DBC;
 v5 = 16;
 }
 else
 {
 v4 = *(void ( ***)(DiamondDerived *__hidden))(a3 + 20);
 v5 = (int)*(v3 - 3);
 }
 *(unsigned int *)((char *)self + v5) = (unsigned int)v4;
 v6 = (void (**)(DiamondDerived *))off_5DA0;
 if ( !a2 )
 v6 = *(void ( ***)(DiamondDerived *__hidden))(a3 + 24);
 *((unsigned int *)self + 2) = (unsigned int)(long)v6;
 v7 = (int)(long)off_5D6C;
 if ( !a2 )
 v7 = *(int *)(a3 + 12);
 MiddleB_destructor_2((MiddleB *)((char *)self + 8), v7);
 v8 = (int)(long)off_5D64;
 if ( !a2 )
 v8 = *(int *)(a3 + 4);
 MiddleA_destructor_2((MiddleA *)self, v8);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x21B0 */
void DiamondDerived_destructor_1(DiamondDerived *self)
{
 DiamondDerived_destructor_4(self, 2, 0);
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x21CB */
void non_virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *self)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)self - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x21D6 */
void virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *self)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 16)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x21EA */
void DiamondDerived_destructor_0(DiamondDerived *self)
{
 DiamondDerived_destructor_1(self);
 operator_delete(self, 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x221E */
void non_virtual_thunk_to_DiamondDerived_destructor0(DiamondDerived *self)
{
 DiamondDerived_destructor0((DiamondDerived *)((char *)self - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x2229 */
void virtual_thunk_to_DiamondDerived_destructor0(DiamondDerived *self)
{
 DiamondDerived_destructor0((DiamondDerived *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 16)));
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x223C */
void DiamondDerived_destructor_2(DiamondDerived *self, int a2)
{
 DiamondDerived_destructor_4(self, 0, a2);
}


/* Function: __x86.get_pc_thunk.ax @ 0x2258 */
void *_x86_get_pc_thunk_ax()
{
 return 0;
}


/* Function: __x86.get_pc_thunk.cx @ 0x225C */
void _x86_get_pc_thunk_cx()
{
 ;
}


/* Function: __x86.get_pc_thunk.si @ 0x2260 */
void _x86_get_pc_thunk_si()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x2270 */
void _stack_chk_fail_local(void)
{
 ;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x22DC */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __printf_chk @ 0x602C */

/* FAILED to decompile: _Znwj @ 0x6034 */

/* FAILED to decompile: __cxa_finalize @ 0x6038 */

/* FAILED to decompile: __cxa_begin_catch @ 0x603C */

/* FAILED to decompile: __cxa_allocate_exception @ 0x6040 */

/* FAILED to decompile: strlen @ 0x6044 */

/* FAILED to decompile: __cxa_atexit @ 0x6048 */

/* FAILED to decompile: _ZdlPvj @ 0x604C */

/* FAILED to decompile: strcmp @ 0x6054 */

/* FAILED to decompile: __libc_start_main @ 0x6058 */

/* FAILED to decompile: _Znaj @ 0x605C */

/* FAILED to decompile: strncpy @ 0x6060 */

/* FAILED to decompile: __stack_chk_fail @ 0x6064 */

/* FAILED to decompile: __dynamic_cast @ 0x6068 */

/* FAILED to decompile: _ZdaPv @ 0x606C */

/* FAILED to decompile: __cxa_rethrow @ 0x6074 */

/* FAILED to decompile: puts @ 0x6078 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x607C */

/* FAILED to decompile: __cxa_end_catch @ 0x6080 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x6084 */

/* FAILED to decompile: __cxa_throw @ 0x6088 */

/* FAILED to decompile: _Unwind_Resume @ 0x6090 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x6094 */

/* Total functions decompiled: 118, failed: 23 */
