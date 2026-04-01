/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_gcc_Os_g
 * Processor: pc
 */

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>

/* Forward declarations for C++ classes */
typedef struct Base Base;

/* Macros for accessing high/low parts of 64-bit values */
#define LODWORD(x) ((unsigned int)(x))
#define HIDWORD(x) ((unsigned int)((unsigned long long)(x) >> 32))

/* External symbol declarations */
extern void *off_5C58;
extern void *__cxa_allocate_exception(unsigned int size);
extern void __cxa_throw(void *exception, void *type_info, void *dest);
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void _ZNSt8ios_base4InitC1Ev(void *self);
extern void _ZNSt8ios_base4InitD1Ev(void *self);
extern void *off_5C70;
extern void *off_5C94;
extern void *off_5CB0;
extern void *off_5CD0;
extern void *off_5CEC;
extern void *off_5D64;
extern void *off_5D6C;
extern void *off_5D88;
extern void *off_5DA0;
extern void *off_5DBC;
extern void *off_5DD0;
extern void *off_5DE4;
extern int typeinfo_for_int;
extern void __dynamic_cast(void *obj, void *src_type, void *dst_type, int flags);
extern int typeinfo_for_int;
extern int typeinfo_for_RTTIBase;
extern int typeinfo_for_RTTIDerivedA;
extern int typeinfo_for_RTTIDerivedB;
extern int typeinfo_for_RTTIBase;
extern int typeinfo_for_RTTIDerivedA;
extern int typeinfo_for_RTTIDerivedB;
extern int std___ioinit;
extern int _dso_handle;
extern int _gmon_start__;
extern char asc_301A;
extern size_t strlen(const char *s);
extern int __printf_chk(int flag, const char *format, ...);
extern char unk_303E;
extern char unk_305C;
extern char unk_3078;
extern char unk_3094;
extern char unk_30B0;
extern char unk_30CD;
extern char unk_30E9;
extern char unk_3105;
extern char unk_3121;
extern size_t strlen(const char *s);
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct std_unique_ptr_int std_unique_ptr_int;
typedef struct std_unique_ptr_int_array std_unique_ptr_int_array;
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
extern void Container_int_push(Container_int *self, int value);
extern void std_unique_ptr_int_destructor(std_unique_ptr_int *self);
extern void std_unique_ptr_int_array_destructor(std_unique_ptr_int_array *self);
extern void DiamondDerived_destructor(DiamondDerived *self);
extern int virtual_thunk_to_DiamondDerived_func(DiamondDerived *self);

/* Struct definitions */
struct Base {
    void *_vptr_Base;
};

struct Derived {
    void *_vptr_Base;
    int multiplier;
};

struct MultiDerived {
    void *_vptr_Base;
    int data;
};

struct VirtualBase {
    void *_vptr_VirtualBase;
};

struct MiddleA {
    void *_vptr_MiddleA;
    int dataA;
};

struct MiddleB {
    void *_vptr_MiddleB;
    int dataB;
};

struct DiamondDerived {
    void *_vptr_MiddleA;
    void *_vptr_MiddleB;
    int dataA;
    int dataB;
    MiddleA middleA_part;
    MiddleB middleB_part;
};

struct RTTIBase {
    void *_vptr_RTTIBase;
};

struct RTTIDerivedA {
    void *_vptr_RTTIBase;
};

struct RTTIDerivedB {
    void *_vptr_RTTIBase;
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
    void *_M_head_impl;
};

struct std_unique_ptr_int_array {
    void *_M_head_impl;
};

struct SimpleClass {
    char name[32];
};

struct LifecycleClass {
    int instance_count;
};
struct LifecycleClass g_LifecycleClass_instance = {0};

/* Function declarations */
void *operator_new(unsigned int size);
void *operator_new_array(unsigned int size);
void operator_delete(void *ptr, unsigned int size);
void operator_delete_array(void *ptr);
unsigned int __readgsdword(unsigned int offset);
void frame_dummy(void);
int _do_global_ctors_aux(void);
void _do_global_dtors_aux(void);
void test_cpp_oo_features(void);
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* Function: .init_proc @ 0x1000 */
int init_proc(void)
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
void test_cpp_exception()
{
 unsigned int *exception; // eax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: main @ 0x13C2 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x13D5 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 _ZNSt8ios_base4InitC1Ev(&std___ioinit);
 __cxa_atexit((void (*)(void *))&_ZNSt8ios_base4InitD1Ev, &std___ioinit, &_dso_handle);
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
long long test_cpp_member_func()
{
 long long result; // rax
 SimpleClass obj; // [esp+0h] [ebp-30h] BYREF
 unsigned int v2; // [esp+24h] [ebp-Ch]

 v2 = __readgsdword(0x14u);
 strncpy(obj.name, "Test", 0x1Fu);
 obj.name[31] = 0;
 LODWORD(result) = strlen(obj.name) + 4700;
 HIDWORD(result) = v2 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z20test_cpp_constructorv @ 0x15F1 */
int test_cpp_constructor()
{
 return 1001 * g_LifecycleClass_instance.instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x160D */
int call_virtual_func(Base *obj, int x)
{
 return ((int (*)(int))(*(int (**)(int))obj->_vptr_Base))(x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1621 */
long long test_cpp_virtual_func(int a1)
{
 int v1; // ebx
 long long result; // rax
 Base base; // [esp+0h] [ebp-1Ch] BYREF
 Derived derived; // [esp+4h] [ebp-18h] BYREF
 unsigned int v5; // [esp+Ch] [ebp-10h]
 int v6; // [esp+18h] [ebp-4h]

 v6 = a1;
 v5 = __readgsdword(0x14u);
 derived._vptr_Base = (void *)&off_5C70;
 base._vptr_Base = (void *)&off_5C58;
 derived.multiplier = 3;
 v1 = call_virtual_func(&base, 5);
 LODWORD(result) = v1 + call_virtual_func((Base *)&derived, 5) + 21;
 HIDWORD(result) = v5 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x168F */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1699 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x16A3 */
long long test_cpp_template_func()
{
 int v0; // ebx
 long long result; // rax
 double r2; // [esp+8h] [ebp-28h]
 int a; // [esp+1Ch] [ebp-14h] BYREF
 int b; // [esp+20h] [ebp-10h] BYREF
 unsigned int v5; // [esp+24h] [ebp-Ch]

 v5 = __readgsdword(0x14u);
 v0 = template_max_int(3, 7);
 r2 = template_max_double(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap_int(&a, &b);
 LODWORD(result) = b + a + v0 + (int)r2;
 HIDWORD(result) = v5 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z23test_cpp_template_classv @ 0x1735 */
long long test_cpp_template_class()
{
 int v0; // eax
 long long result; // rax
 int r2[10]; // [esp+8h] [ebp-38h] BYREF
 int v3; // [esp+30h] [ebp-10h]
 unsigned int v4; // [esp+34h] [ebp-Ch]

 v4 = __readgsdword(0x14u);
 v3 = 1;
 r2[0] = 10;
 Container_int_push((Container_int *)r2, 20);
 Container_int_push((Container_int *)r2, 30);
 v0 = 0;
 if ( v3 > 0 )
 v0 = r2[0];
 LODWORD(result) = v3 + v0 + 3;
 HIDWORD(result) = v4 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z15test_cpp_lambdav @ 0x1797 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z13test_cpp_rttiv @ 0x17A1 */
RTTIBase *test_cpp_rtti()
{
 const char *v0; // edi
 int v2; // [esp-Ch] [ebp-34h]
 int v3; // [esp-8h] [ebp-30h]
 int v4; // [esp-4h] [ebp-2Ch]
 RTTIBase *obj2; // [esp+8h] [ebp-20h]
 RTTIBase *obj1; // [esp+Ch] [ebp-1Ch]

 obj1 = (RTTIBase *)operator_new(4u);
 obj1->_vptr_RTTIBase = (void *)off_5DD0;
 obj2 = (RTTIBase *)operator_new(4u);
 obj2->_vptr_RTTIBase = (void *)off_5DE4;
 v0 = (const char *)*((unsigned int **)obj1->_vptr_RTTIBase - 1) + 4;
 if ( strcmp(v0, "12RTTIDerivedA") != 0 && *v0 != 42 )
 {
 ;
 }
 __dynamic_cast(
 obj1,
 (void *)&typeinfo_for_RTTIBase,
 (void *)&typeinfo_for_RTTIDerivedA,
 0);
 __dynamic_cast(
 obj2,
 (void *)&typeinfo_for_RTTIBase,
 (void *)&typeinfo_for_RTTIDerivedB,
 0);
 if ( v0[0] == 42 )
 v0++;
 (*((void (**)(void))obj1->_vptr_RTTIBase + 1))();
 (*((void (**)(void))obj2->_vptr_RTTIBase + 1))();
 return obj2;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x18C9 */
int test_cpp_smart_ptr()
{
 int *v0; // eax
 unsigned int *v1; // eax
 std_unique_ptr_int ptr2; // [esp+30h] [ebp-2Ch] BYREF
 std_unique_ptr_int_array arr; // [esp+38h] [ebp-24h] BYREF

 arr._M_head_impl = (int *)__readgsdword(0x14u);
 v0 = (int *)operator_new(4u);
 ptr2._M_head_impl = (void *)0;
 *v0 = 200;
 ptr2._M_head_impl = v0;
 v1 = (unsigned int *)operator_new_array(0x14u);
 *v1 = 1;
 v1[1] = 2;
 v1[2] = 3;
 v1[3] = 4;
 v1[4] = 5;
 arr._M_head_impl = (void *)v1;
 std_unique_ptr_int_array_destructor(&arr);
 std_unique_ptr_int_destructor(&ptr2);
 return 703;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x199D */
long long test_cpp_diamond_inheritance()
{
 int v0; // ebx
 long long result; // rax
 int v2; // [esp+1Ch] [ebp-40h]
 int *data_ptr; // helper
 DiamondDerived obj; // [esp+24h] [ebp-38h] BYREF

 data_ptr = (int *)((char *)&obj.dataB + 4);
 *data_ptr = __readgsdword(0x14u);
 obj._vptr_MiddleA = (void *)&off_5D88;
 obj._vptr_MiddleB = (void *)&off_5DBC;
 data_ptr = (int *)((char *)&obj.dataA + 4);
 *data_ptr = (int)&off_5DA0;
 obj.dataB = 50;
 v0 = virtual_thunk_to_DiamondDerived_func((DiamondDerived *)((char *)&obj + 8));
 obj.dataB = 100;
 v2 = v0 + virtual_thunk_to_DiamondDerived_func((DiamondDerived *)((char *)&obj + 8));
 DiamondDerived_destructor(&obj);
 LODWORD(result) = v2;
 HIDWORD(result) = *(int *)((char *)&obj.dataB + 4) - __readgsdword(0x14u);
 return result;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1A22 */
// bad sp value at call has been detected, the output may be wrong!
void test_cpp_oo_features(void)
{
 int v0; // eax
 int v1; // eax
 long long v2; // rax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // ecx
 int v8; // eax
 int v9; // eax
 int savedregs; // [esp+4h] [ebp+0h] BYREF

 puts(asc_301A);
 v0 = test_cpp_member_func();
 __printf_chk(1, &unk_303E, v0);
 v1 = test_cpp_constructor();
 __printf_chk(1, &unk_305C, v1);
 v2 = test_cpp_virtual_func((int)&savedregs);
 savedregs = HIDWORD(v2);
 __printf_chk(1, &unk_3078, v2);
 v3 = test_cpp_multiple_inheritance();
 __printf_chk(1, &unk_3094, v3);
 v4 = test_cpp_diamond_inheritance();
 __printf_chk(1, &unk_30B0, v4);
 v5 = test_cpp_operator_overload();
 __printf_chk(1, &unk_30CD, v5);
 v6 = test_cpp_template_func();
 savedregs = v7;
 __printf_chk(1, &unk_30E9, v6);
 v8 = test_cpp_template_class();
 __printf_chk(1, &unk_3105, v8);
 v9 = test_cpp_lambda();
 __printf_chk(1, &unk_3121, v9);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1B66 */
int Base_virtual_func(Base *self, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x1B74 */
const char * Base_getName(const Base *self)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1B8A */
void Base_destructor(Base *self)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1B90 */
int Derived_virtual_func(Derived *self, int x)
{
 return self->multiplier * x;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1BA4 */
const char * Derived_getName(const Derived *self)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1BBA */
int MultiDerived_funcA(MultiDerived *self)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1BC4 */
int MultiDerived_funcB(MultiDerived *self)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x1BCE */
int non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *self)
{
 return 40;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x1BD8 */
int VirtualBase_func(VirtualBase *self)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x1BE2 */
void VirtualBase_destructor(VirtualBase *self)
{
 ;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1BE8 */
int MiddleA_func(MiddleA *self)
{
 return *(int *)((char *)&self->dataA + *((unsigned int *)(int *)self->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1C02 */
int virtual_thunk_to_MiddleA_func(MiddleA *self)
{
 return MiddleA_func((MiddleA *)((char *)self + *((unsigned int *)(int *)self->_vptr_MiddleA - 3)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x1C16 */
int MiddleB_func(MiddleB *self)
{
 return *(int *)((char *)&self->dataB + *((unsigned int *)self->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1C30 */
int virtual_thunk_to_MiddleB_func(MiddleB *self)
{
 return MiddleB_func((MiddleB *)((char *)self + *((unsigned int *)(int *)self->_vptr_MiddleB - 3)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1C44 */
int DiamondDerived_func(DiamondDerived *self)
{
 return *(int *)((char *)&self->dataA + *((unsigned int *)self->_vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x1C5E */
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *self)
{
 return DiamondDerived_func((DiamondDerived *)((char *)self + *((unsigned int *)(int *)self->_vptr_MiddleA - 3)));
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1C71 */
int non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *self)
{
 return DiamondDerived_func((DiamondDerived *)((char *)self - 8));
}


/* Function: _ZN7MiddleAD1Ev @ 0x1C7C */
void MiddleA_destructor(MiddleA *self)
{
 int *data_ptr;
 self->_vptr_MiddleA = (void *)&off_5C94;
 data_ptr = (int *)((char *)self + 4);
 *data_ptr = (int)&off_5CB0;
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x1CA1 */
void virtual_thunk_to_MiddleA_destructor(MiddleA *self)
{
 int *v1; // eax
 int *v2; // helper
 int offset; // helper
 int temp_val;

 offset = ((int *)self->_vptr_MiddleA)[-4];
 v1 = (int *)((char *)self + offset);
 temp_val = (int)(uintptr_t)&off_5C94;
 *v1 = temp_val;
 v2 = (int *)((char *)v1 + 8);
 temp_val = (int)(uintptr_t)&off_5CB0;
 *v2 = temp_val;
}


/* Function: _ZN7MiddleBD1Ev @ 0x1CCC */
void MiddleB_destructor(MiddleB *self)
{
 int *data_ptr;
 self->_vptr_MiddleB = (void *)&off_5CD0;
 data_ptr = (int *)((char *)self + 4);
 *data_ptr = (int)&off_5CEC;
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x1CF1 */
void virtual_thunk_to_MiddleB_destructor(MiddleB *self)
{
 int *v1; // eax
 int *v2; // helper
 int offset; // helper
 int temp_val;

 offset = ((int *)self->_vptr_MiddleB)[-4];
 v1 = (int *)((char *)self + offset);
 temp_val = (int)(uintptr_t)&off_5CD0;
 *v1 = temp_val;
 v2 = (int *)((char *)v1 + 8);
 temp_val = (int)(uintptr_t)&off_5CEC;
 *v2 = temp_val;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1D1C */
int RTTIDerivedA_getType(const RTTIDerivedA *self)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1D26 */
int RTTIDerivedB_getType(const RTTIDerivedB *self)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1D30 */
void RTTIDerivedB_destructor(RTTIDerivedB *self)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1D36 */
void RTTIDerivedA_destructor(RTTIDerivedA *self)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1D3C */
void MultiDerived_destructor(MultiDerived *self)
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1D41 */
void non_virtual_thunk_to_MultiDerived_destructor(MultiDerived *self)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1D46 */
void Derived_destructor(Derived *self)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1D4C */
void Base_destructor_delete(Base *self)
{
 operator_delete(self, 4u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1D74 */
void Derived_destructor_delete(Derived *self)
{
 operator_delete(self, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1D9C */
void MultiDerived_destructor_delete(MultiDerived *self)
{
 operator_delete(self, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1DC4 */
void non_virtual_thunk_to_MultiDerived_destructor_delete(MultiDerived *self)
{
 MultiDerived_destructor_delete((MultiDerived *)((char *)self - 8));
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x1DD0 */
void VirtualBase_destructor_delete(VirtualBase *self)
{
 operator_delete(self, 8u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1DF8 */
void RTTIDerivedB_destructor_delete(RTTIDerivedB *self)
{
 operator_delete(self, 4u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1E20 */
void RTTIDerivedA_destructor_delete(RTTIDerivedA *self)
{
 operator_delete(self, 4u);
}


/* Function: _ZN7MiddleAD0Ev @ 0x1E48 */
void MiddleA_destructor_delete(MiddleA *self)
{
 int *data_ptr;
 self->_vptr_MiddleA = (void *)&off_5C94;
 data_ptr = (int *)((char *)self + 4);
 *data_ptr = (int)&off_5CB0;
 operator_delete(self, 0x10u);
}


/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x1E7F */
void virtual_thunk_to_MiddleA_destructor_delete(MiddleA *self)
{
 int offset; // helper
 offset = ((int *)self->_vptr_MiddleA)[-4];
 MiddleA_destructor_delete((MiddleA *)((char *)self + offset));
}


/* Function: _ZN7MiddleBD0Ev @ 0x1E92 */
void MiddleB_destructor_delete(MiddleB *self)
{
 int *data_ptr;
 self->_vptr_MiddleB = (void *)&off_5CD0;
 data_ptr = (int *)((char *)self + 4);
 *data_ptr = (int)&off_5CEC;
 operator_delete(self, 0x10u);
}


/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x1EC9 */
void virtual_thunk_to_MiddleB_destructor_delete(MiddleB *self)
{
 int offset; // helper
 offset = ((int *)self->_vptr_MiddleB)[-4];
 MiddleB_destructor_delete((MiddleB *)((char *)self + offset));
}


/* Function: _ZN7MiddleAD4Ev @ 0x1EDC */
void MiddleA_destructor_vtt(MiddleA *self, int __in_chrg, const void **__vtt_parm)
{
 void **v3; // eax
 void **v4; // ecx
 void **v6; // helper
 int v5; // eax
 const void **vtt_ptr;

 v3 = (void **)&off_5C94;
 if ( !__in_chrg )
 {
 vtt_ptr = *(const void ***)__vtt_parm;
 v3 = *(void **)vtt_ptr;
 }
 self->_vptr_MiddleA = *v3;
 if ( __in_chrg )
 {
 v4 = (void **)&off_5CB0;
 v5 = 8;
 }
 else
 {
 vtt_ptr = (const void **)__vtt_parm[1];
 v4 = (void **)vtt_ptr;
 v5 = (int)*((unsigned int *)v3 - 3);
 }
 v6 = (void **)((char *)&self->_vptr_MiddleA + v5);
 *(void **)v6 = *v4;
}


/* Function: _ZN7MiddleAD2Ev @ 0x1F26 */
void MiddleA_destructor_vtt_wrapper(MiddleA *self, const void **__vtt_parm)
{
 MiddleA_destructor_vtt(self, 0, __vtt_parm);
}


/* Function: _ZN7MiddleBD4Ev @ 0x1F42 */
void MiddleB_destructor_vtt(MiddleB *self, int __in_chrg, const void **__vtt_parm)
{
 void **v3; // eax
 void **v4; // ecx
 void **v6; // helper
 int v5; // eax
 const void **vtt_ptr;

 v3 = (void **)&off_5CD0;
 if ( !__in_chrg )
 {
 vtt_ptr = *(const void ***)__vtt_parm;
 v3 = *(void **)vtt_ptr;
 }
 self->_vptr_MiddleB = *v3;
 if ( __in_chrg )
 {
 v4 = (void **)&off_5CEC;
 v5 = 8;
 }
 else
 {
 vtt_ptr = (const void **)__vtt_parm[1];
 v4 = (void **)vtt_ptr;
 v5 = (int)*((unsigned int *)v3 - 3);
 }
 v6 = (void **)((char *)&self->_vptr_MiddleB + v5);
 *(void **)v6 = *v4;
}


/* Function: _ZN7MiddleBD2Ev @ 0x1F8C */
void MiddleB_destructor_vtt_wrapper(MiddleB *self, const void **__vtt_parm)
{
 MiddleB_destructor_vtt(self, 0, __vtt_parm);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1FA8 */
int template_max_int(int a, int b)
{
 int result; // eax

 result = a;
 if ( a < b )
 return b;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1FBC */
double template_max_double(double a, double b)
{
 long double result; // fst7

 result = b;
 if ( a > (long double)b )
 return a;
 return result;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1FD5 */
void template_swap_int(int *a, int *b)
{
 int v2; // ecx

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1FEE */
void Container_int_constructor(Container_int *self)
{
 self->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x2002 */
void Container_int_push(Container_int *self, int value)
{
 int size; // edx

 size = self->size;
 if ( size <= 9 )
 {
 self->size = size + 1;
 self->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x2022 */
int Container_int_get(const Container_int *self, int idx)
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && self->size > idx )
 return self->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x2040 */
int Container_int_getSize(const Container_int *self)
{
 return self->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x2050 */
void Container_double_constructor(Container_double *self)
{
 self->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x2064 */
void Container_double_push(Container_double *self, double value)
{
 int size; // edx

 size = self->size;
 if ( size <= 9 )
 {
 self->size = size + 1;
 self->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x2088 */
double Container_double_get(const Container_double *self, int idx)
{
 long double result; // fst7

 result = 0.0;
 if ( idx >= 0 && idx < self->size )
 return self->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x20A8 */
int Container_double_getSize(const Container_double *self)
{
 return self->size;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x20B8 */
void std_unique_ptr_int_destructor(std_unique_ptr_int *self)
{
 if ( self->_M_head_impl )
 operator_delete(self->_M_head_impl, 4u);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x20E8 */
void std_unique_ptr_int_array_destructor(std_unique_ptr_int_array *self)
{
 if ( self->_M_head_impl )
 operator_delete_array(self->_M_head_impl);
}


/* Function: _ZN14DiamondDerivedD4Ev @ 0x2116 */
void DiamondDerived_destructor_vtt(
 DiamondDerived *self,
 int __in_chrg,
 const void **__vtt_parm)
{
 void **v3; // edx
 void **v4; // ecx
 void **v9; // helper
 int v5; // edx
 void **v6; // edx
 const void **v7; // edx
 const void **v8; // eax
 int *data_ptr; // helper

 v3 = (void **)&off_5D88;
 if ( !__in_chrg )
 v3 = *(void ***)__vtt_parm;
 self->_vptr_MiddleA = *v3;
 if ( __in_chrg )
 {
 v4 = (void **)&off_5DBC;
 v5 = 16;
 }
 else
 {
 v4 = (void **)__vtt_parm[5];
 v5 = (int)*((unsigned int *)v3 - 3);
 }
 v9 = (void **)((char *)&self->_vptr_MiddleA + v5);
 *(void **)v9 = *v4;
 v6 = (void **)&off_5DA0;
 if ( !__in_chrg )
 v6 = (void **)__vtt_parm[6];
 data_ptr = (int *)((char *)&self->dataA + 4);
 *data_ptr = (int)(uintptr_t)*v6;
 v7 = (const void **)&off_5D6C;
 if ( !__in_chrg )
 v7 = (const void **)(__vtt_parm + 3);
 MiddleB_destructor_vtt_wrapper((MiddleB *)((char *)&self->dataA + 4), v7);
 v8 = (const void **)&off_5D64;
 if ( !__in_chrg )
 v8 = (const void **)(__vtt_parm + 1);
 MiddleA_destructor_vtt_wrapper((MiddleA *)self, v8);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x21B0 */
void DiamondDerived_destructor(DiamondDerived *self)
{
 DiamondDerived_destructor_vtt(self, 2, 0);
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x21CB */
void non_virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *self)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)self - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x21D6 */
void virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *self)
{
 int offset; // helper
 offset = ((int *)self->_vptr_MiddleA)[-4];
 DiamondDerived_destructor((DiamondDerived *)((char *)self + offset));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x21EA */
void DiamondDerived_destructor_delete(DiamondDerived *self)
{
 DiamondDerived_destructor(self);
 operator_delete(self, 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x221E */
void non_virtual_thunk_to_DiamondDerived_destructor_delete(DiamondDerived *self)
{
 DiamondDerived_destructor_delete((DiamondDerived *)((char *)self - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x2229 */
void virtual_thunk_to_DiamondDerived_destructor_delete(DiamondDerived *self)
{
 int offset; // helper
 offset = ((int *)self->_vptr_MiddleA)[-4];
 DiamondDerived_destructor_delete((DiamondDerived *)((char *)self + offset));
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x223C */
void DiamondDerived_destructor_vtt_wrapper(DiamondDerived *self, const void **__vtt_parm)
{
 DiamondDerived_destructor_vtt(self, 0, __vtt_parm);
}


/* Function: __x86.get_pc_thunk.ax @ 0x2258 */
void *_x86_get_pc_thunk_ax(void)
{
 void *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
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
void _stack_chk_fail_local()
{
 __asm__ volatile("add ebx, (offset _GLOBAL_OFFSET_TABLE_ - $)");
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
