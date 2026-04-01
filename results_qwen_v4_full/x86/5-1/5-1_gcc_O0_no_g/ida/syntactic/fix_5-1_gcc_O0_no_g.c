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

/* Missing macros for decompiled code */
#define __readgsdword(x) 0
#define LODWORD(x) (*(int*)&(x))
#define HIDWORD(x) (*(((int*)&(x))+1))

/* Missing function declarations */
void *operator_new(size_t size);
void *operator_new_array(size_t size);
void operator_delete(void *ptr, size_t size);
void operator_delete_array(void *ptr);
size_t strlen(const char *s);

/* C++ runtime declarations */
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *exc, struct type_info *tinfo, void *dest);
void *__dynamic_cast(void *src, const struct __class_type_info *src_type, const struct __class_type_info *dst_type, int src2dst);
void __cxa_bad_typeid(void);
void __cxa_throw_bad_array_new_length(void);

/* External variables */
extern void *GLOBAL_OFFSET_TABLE_;
extern void *_gmon_start__;
extern void _do_global_ctors_aux(void);
extern void _do_global_dtors_aux(void);
void frame_dummy(void);

/* Forward declarations for C++ classes */
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct MultiDerived MultiDerived;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct Point Point;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* SimpleClass method declarations */
void SimpleClass_SimpleClass(SimpleClass *self, int a2, char *src);
int SimpleClass_getValue(SimpleClass *self);
SimpleClass *SimpleClass_setValue(SimpleClass *self, int a2);
size_t SimpleClass_compute(SimpleClass *self, int a2);
int SimpleClass_getClassID(void);

/* Derived method declarations */
void Derived_Derived(Derived *self, int a2);
void Derived_Derived_destructor(Derived *self);
int Derived_virtual_func(Derived *self, int a2);
const char *Derived_getName(void);

/* Base method declarations */
int Base_virtual_func(Base *self, int a2);
const char *Base_getName(void);
void Base_Base_destructor(Base *self);
void Base_Base(Base *self);

/* MultiDerived method declarations */
void MultiDerived_MultiDerived(MultiDerived *self);
void MultiDerived_MultiDerived_destructor(MultiDerived *self);
int MultiDerived_funcA(void);
int MultiDerived_funcB(void);

/* DiamondDerived method declarations */
void DiamondDerived_DiamondDerived(DiamondDerived *self);
void DiamondDerived_DiamondDerived_destructor(DiamondDerived *self);
int DiamondDerived_func(DiamondDerived *self);

/* Point method declarations */
void Point_Point(Point *self, int a2, int a3);
Point *Point_operator_plus(Point *self, unsigned int *a2, unsigned int *a3);
int Point_operator_eq(unsigned int *a1, unsigned int *a2);
unsigned int *Point_operator_inc(unsigned int *a1);

/* Template function declarations */
int template_max_int(int a1, int a2);
long double template_max_double(double a1, double a2);
int *template_swap_int(int *a1, int *a2);

/* Container method declarations */
int Container_int_Container(int a1);
int Container_int_push(int a1, int a2);
int Container_int_get(int a1, int a2);
int Container_int_getSize(int a1);
int Container_double_Container(int a1);
int Container_double_push(int a1, double a2);
long double Container_double_get(int a1, int a2);
int Container_double_getSize(int a1);

/* RTTI method declarations */
void RTTIBase_RTTIBase(RTTIBase *self);
void RTTIBase_RTTIBase_destructor(RTTIBase *self);
void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *self);
void RTTIDerivedA_RTTIDerivedA_destructor(RTTIDerivedA *self);
void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *self);
void RTTIDerivedB_RTTIDerivedB_destructor(RTTIDerivedB *self);
int RTTIDerivedA_derivedA_data(void);
int RTTIDerivedB_derivedB_data(void);

/* LifecycleClass method declarations */
void LifecycleClass_LifecycleClass(LifecycleClass *self, unsigned int a2);
unsigned int *LifecycleClass_getData(LifecycleClass *self, unsigned int a2);
void LifecycleClass_LifecycleClass_destructor(LifecycleClass *self);
int LifecycleClass_getInstanceCount(void);
struct Container_int { unsigned int data[10]; unsigned int size; };
struct Container_double { double data[10]; unsigned int size; };
struct SimpleClass { unsigned int value; char name[32]; };
struct LifecycleClass { unsigned int *data; unsigned int size; };
struct Base { void *vtable; };
struct Derived { void *vtable; int value; };
struct BaseA { void *vtable; };
struct BaseB { void *vtable; };
struct MultiDerived { void *vtable; void *vtable2; void *vtable3; };
struct VirtualBase { void *vtable; };
struct MiddleA { void *vtable; int offset; };
struct MiddleB { void *vtable; int offset; };
struct DiamondDerived { void *vtable; void *vtable2; void *vtable3; void *vtable4; void *vtable5; int offset; };
struct Point { unsigned int x; unsigned int y; };
struct RTTIBase { void *vtable; };
struct RTTIDerivedA { void *vtable; };
struct RTTIDerivedB { void *vtable; };

/* std::type_info definition */
typedef struct std_type_info std_type_info;
struct std_type_info { void *vtable; const char *name; };

/* Forward declarations for STL types */
typedef struct std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1 std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1;
typedef struct std_Tuple_impl_0u_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1 std_Tuple_impl_0u_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1;
typedef struct std_Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_ptr_1 std_Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_ptr_1;
typedef struct std_Head_base_0u_int_ptr_false std_Head_base_0u_int_ptr_false;
typedef struct std_Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_1_true std_Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_1_true;

/* STL struct definitions */
struct std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1 { unsigned int data[2]; };
struct std_Tuple_impl_0u_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1 { unsigned int data[2]; };
struct std_Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_ptr_1 { unsigned int data[1]; };
struct std_Head_base_0u_int_ptr_false { unsigned int data[1]; };
struct std_Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_1_true { unsigned int data[1]; };

/* Missing function declarations for STL helpers */
int std_Head_base_0u_int_ptr_false__M_head(unsigned int *a1);
int std_Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_1_true__M_head(unsigned int *a1);
int std_uniq_ptr_impl_int_std_default_delete_int__M_ptr(int a1);
int std_type_info_operator_eq(std_type_info *a1, std_type_info *a2);
int std_Tuple_impl_0u_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1__M_head(unsigned int *a1);
int std_Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_ptr_1__M_head(unsigned int *a1);
int std_Head_base_0u_int_ptr_false__Head_base(unsigned int *a1, unsigned int *a2);
int std_Head_base_0u_int_ptr_false__Head_base(unsigned int *a1);
int std_Tuple_impl_0u_int_ptr_std_default_delete_int__Tuple_impl(unsigned int *a1, unsigned int *a2);
int std_Tuple_impl_0u_int_ptr_std_default_delete_int__Tuple_impl(unsigned int *a1);
int std_Tuple_impl_1u_std_default_delete_int__Tuple_impl(unsigned int *a1);
int std_Head_base_0u_int_ptr_false__Head_base_int_ptr_ref(unsigned int *a1, int a2);
int std_uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl(int a1, int a2);
int std_uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl(int a1, int a2);
int std_tuple_int_ptr_std_default_delete_int_tuple(int a1, int a2);
int std_tuple_int_ptr_std_default_delete_int_tuple_true_true(int a1);
int std_uniq_ptr_impl_int_std_default_delete_int_array___uniq_ptr_impl(int a1, int a2);
int std_tuple_int_ptr_std_default_delete_int_array_tuple_true_true(int a1);
int std_Tuple_impl_0u_int_ptr_std_default_delete_int_array__Tuple_impl(int a1);
int std_Tuple_impl_1u_std_default_delete_int_array__Tuple_impl(int a1);
int std_Head_base_1u_std_default_delete_int_true__Head_base(int a1);
int std_Head_base_1u_std_default_delete_int_array_true__Head_base(int a1);
int std_get_0u_int_ptr_std_default_delete_int(int a1);
int std_get_1u_int_ptr_std_default_delete_int(int a1);
int std_get_0u_int_ptr_std_default_delete_int_array(int a1);
int std_get_1u_int_ptr_std_default_delete_int_array(int a1);
int std_get_helper_0u_int_ptr_std_default_delete_int(int a1);
int std_get_helper_1u_std_default_delete_int(int a1);
int std_get_helper_0u_int_ptr_std_default_delete_int_array(int a1);
int std_get_helper_1u_std_default_delete_int_array(int a1);
int std_Tuple_impl_0u_int_ptr_std_default_delete_int__M_head(int a1);
int std_Tuple_impl_0u_int_ptr_std_default_delete_int_array__M_head(int a1);
int std_Tuple_impl_1u_std_default_delete_int__M_head(int a1);
int std_Tuple_impl_1u_std_default_delete_int_array__M_head(int a1);
int std_Head_base_0u_int_ptr_false__M_head(unsigned int *a1);
int std_Head_base_1u_std_default_delete_int_true__M_head(int a1);
int std_Head_base_1u_std_default_delete_int_array_true__M_head(int a1);
int std_forward_int_ptr_ref(int a1);
int std_move_int_ptr_ref(int a1);
int std_move_tuple_int_ptr_std_default_delete_int_ref(int a1);
int std_uniq_ptr_impl_int_std_default_delete_int__M_deleter(int a1);
int std_uniq_ptr_impl_int_std_default_delete_int_array__M_deleter(int a1);
int std_uniq_ptr_impl_int_std_default_delete_int_array__M_ptr(int a1);
int std_unique_ptr_int_array_get(int a1);
int std_unique_ptr_int_array_get_deleter(int a1);
int std_unique_ptr_int_std_default_delete_int_get(int a1);
int std_unique_ptr_int_std_default_delete_int_get_deleter(int a1);
int std_get_0u_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1(int a1);
int std_get_1u_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1(int a1);
int std_get_helper_0u_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1(int a1);
int std_get_helper_1u_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1(int a1);
int std_Tuple_impl_0u_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1__Tuple_impl(int a1, int a2, int a3);
int std_Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_ptr_1__Tuple_impl(int a1, int a2);
int std_forward_test_cpp_smart_ptr_lambda_int_ptr_1_const(int a1);
int std_tuple_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1_tuple(int a1, int a2, int a3);
int std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1__M_deleter(int a1);
int std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1__M_ptr(int a1);
int std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1__uniq_ptr_impl(int a1, char a2, int a3);
int std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_get(int a1);
int std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_get_deleter(int a1);
int std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1__unique_ptr(int a1);
int std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_operator_star(int a1);
int std_unique_ptr_int_std_default_delete_int__unique_ptr(int a1);
int std_unique_ptr_int_std_default_delete_int_unique_ptr(int a1, int a2);
int std_unique_ptr_int_std_default_delete_int_unique_ptr_std_default_delete_int_void(int a1, int a2);
int std_unique_ptr_int_array_unique_ptr_int_ptr_std_default_delete_int_array_void_bool(int a1, int a2);
int std_unique_ptr_int_array__unique_ptr(int a1);
int std_unique_ptr_int_array_operator_bracket(int a1, int a2);
int std_move_unique_ptr_int_ref(int a1);

/* Missing C++ runtime function declarations */
void __cxa_bad_typeid(void);

/* External variables */
extern void *off_8DA8;
extern void *off_8D90;
extern void *off_8D7C;
extern void *off_8D68;
extern void *off_8D3C;
extern void *off_8D54;
extern void *off_8D28;
extern void *off_8CA0;
extern void *off_8CA8;
extern void *off_8C5C;
extern void *off_8C90;
extern void *off_8C74;
extern void *off_8C44;
extern void *off_8C30;
extern void *off_8C1C;
extern int LifecycleClass_instance_count;
extern void *typeinfo_for_RTTIDerivedA;
extern void *typeinfo_for_RTTIDerivedB;
extern void *typeinfo_for_RTTIBase;
extern void *typeinfo_for_int;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_gcc_O0_no_g
 * Processor: pc
 */

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
 __asm__ volatile ("jmp dword ptr [ebx+8]");
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
void sub_1180()
{
 sub_1030();
}


/* Function: sub_1190 @ 0x1190 */
void sub_1190()
{
 sub_1030();
}


/* Function: sub_11A0 @ 0x11A0 */
int sub_11A0(int a1)
{
 return (*(int (**)(void))(a1 + 104))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_133C @ 0x133C */
void sub_133C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1340 */
void _x86_get_pc_thunk_bx()
{
 __asm__ volatile ("");
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1479 */
void _x86_get_pc_thunk_dx()
{
 __asm__ volatile ("");
}


/* Function: __x86.get_pc_thunk.di @ 0x147D */
void _x86_get_pc_thunk_di()
{
 __asm__ volatile ("");
}


/* Function: _Z20test_cpp_member_funcv @ 0x1482 */
long long test_cpp_member_func(void)
{
 long long result; // rax
 SimpleClass *v1; // [esp+0h] [ebp-48h]
 int Value; // [esp+Ch] [ebp-3Ch]
 int v3; // [esp+10h] [ebp-38h]
 unsigned char v4[36]; // [esp+18h] [ebp-30h] BYREF
 unsigned int v5; // [esp+3Ch] [ebp-Ch]

 v5 = __readgsdword(0x14u);
 SimpleClass_SimpleClass((SimpleClass *)v4, 5, "Test");
 SimpleClass_setValue((SimpleClass *)v4, 10);
 Value = SimpleClass_getValue((SimpleClass *)v4);
 v3 = SimpleClass_compute((SimpleClass *)v4, 3);
 LODWORD(result) = v3 + Value + SimpleClass_getClassID();
 HIDWORD(result) = v5 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z20test_cpp_constructorv @ 0x1519 */
long long test_cpp_constructor(void)
{
 LifecycleClass *Data; // eax
 int InstanceCount; // eax
 int v2; // eax
 long long result; // rax
 int v4; // [esp+0h] [ebp-18h]
 LifecycleClass *v5; // [esp+0h] [ebp-18h]
 int v6; // [esp+0h] [ebp-18h]
 unsigned char v7[8]; // [esp+4h] [ebp-14h] BYREF
 unsigned int v8; // [esp+Ch] [ebp-Ch]

 v8 = __readgsdword(0x14u);
 LifecycleClass_LifecycleClass((LifecycleClass *)v7, 5u);
 Data = (LifecycleClass *)LifecycleClass_getData((LifecycleClass *)v7, 2u);
 InstanceCount = LifecycleClass_getInstanceCount();
 v5 = (LifecycleClass *)(InstanceCount + v4);
 LifecycleClass_LifecycleClass_destructor((LifecycleClass *)v7);
 v2 = LifecycleClass_getInstanceCount();
 LODWORD(result) = 1000 * v2 + v6;
 HIDWORD(result) = v8 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x159F */
int call_virtual_func(Base *a1, int a2)
{
 return (**(int ( ***)(Base *, int))a1)(a1, a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x15CA */
long long test_cpp_virtual_func(void)
{
 int v0; // ebx
 long long result; // rax
 void *v2; // [esp+8h] [ebp-30h]
 int v3; // [esp+Ch] [ebp-2Ch]
 int v4; // [esp+10h] [ebp-28h]
 void **v5; // [esp+14h] [ebp-24h]
 Base *v6; // [esp+18h] [ebp-20h]
 int v7; // [esp+1Ch] [ebp-1Ch]
 int v8; // [esp+20h] [ebp-18h]
 unsigned char v9[8]; // [esp+24h] [ebp-14h] BYREF
 unsigned int v10; // [esp+2Ch] [ebp-Ch]

 v10 = __readgsdword(0x14u);
 v2 = off_8DA8;
 Derived_Derived((Derived *)v9, 3);
 v3 = Base_virtual_func((Base *)&v2, 5);
 v4 = Derived_virtual_func((Derived *)v9, 5);
 v5 = &v2;
 v6 = (Base *)v9;
 v7 = call_virtual_func((Base *)&v2, 5);
 v8 = call_virtual_func(v6, 5);
 v0 = v7 + v4 + v3 + v8;
 Derived_Derived_destructor((Derived *)v9);
 Base_Base_destructor((Base *)&v2);
 LODWORD(result) = v0;
 HIDWORD(result) = v10 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x16DE */
long long test_cpp_multiple_inheritance(void)
{
 int v0; // ebx
 long long result; // rax
 int v2; // [esp+10h] [ebp-28h]
 unsigned int v3[2]; // [esp+1Ch] [ebp-1Ch] BYREF
 unsigned int v4[2]; // [esp+24h] [ebp-14h] BYREF
 unsigned int v5; // [esp+2Ch] [ebp-Ch]

 v5 = __readgsdword(0x14u);
 MultiDerived_MultiDerived((MultiDerived *)v3);
 v3[1] = 100;
 v4[1] = 200;
 v2 = (*(int ( **)(unsigned int *))v3[0])(v3);
 v0 = (*(int ( **)(unsigned int *))v4[0])(v4) + v2 + (v3 != v4);
 MultiDerived_MultiDerived_destructor((MultiDerived *)v3);
 LODWORD(result) = v0;
 HIDWORD(result) = v5 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x17C0 */
long long test_cpp_diamond_inheritance(void)
{
 int v0; // ebx
 long long result; // rax
 int v2; // [esp+Ch] [ebp-2Ch]
 unsigned char v3[16]; // [esp+14h] [ebp-24h] BYREF
 int v5; // [esp+28h] [ebp-10h]
 unsigned int v6; // [esp+2Ch] [ebp-Ch]

 v6 = __readgsdword(0x14u);
 DiamondDerived_DiamondDerived((DiamondDerived *)v3);
 v5 = 50;
 v2 = DiamondDerived_func((DiamondDerived *)v3);
 v5 = 100;
 v0 = v2 + DiamondDerived_func((DiamondDerived *)v3);
 DiamondDerived_DiamondDerived_destructor((DiamondDerived *)v3);
 LODWORD(result) = v0;
 HIDWORD(result) = v6 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1888 */
long long test_cpp_operator_overload(void)
{
 int v0; // edx
 long long result; // rax
 char v2; // [esp+3h] [ebp-25h]
 unsigned char v3[8]; // [esp+4h] [ebp-24h] BYREF
 unsigned char v4[8]; // [esp+Ch] [ebp-1Ch] BYREF
 unsigned int v5[2]; // [esp+14h] [ebp-14h] BYREF
 unsigned int v6; // [esp+1Ch] [ebp-Ch]

 v6 = __readgsdword(0x14u);
 Point_Point((Point *)v3, 1, 2);
 Point_Point((Point *)v4, 3, 4);
 Point_operator_plus((Point *)v5, (unsigned int *)v3, (unsigned int *)v4);
 v2 = Point_operator_eq((unsigned int *)v3, (unsigned int *)v4);
 Point_operator_inc((unsigned int *)v5);
 if ( v2 )
 v0 = 0;
 else
 v0 = 10;
 LODWORD(result) = v0 + v5[0] + v5[1];
 HIDWORD(result) = v6 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1938 */
long long test_cpp_template_func(void)
{
 long long result; // rax
 int v1; // [esp+14h] [ebp-24h] BYREF
 int v2; // [esp+18h] [ebp-20h] BYREF
 int v3; // [esp+1Ch] [ebp-1Ch]
 double v4; // [esp+20h] [ebp-18h]
 unsigned int v5; // [esp+2Ch] [ebp-Ch]

 v5 = __readgsdword(0x14u);
 v3 = template_max_int(3, 7);
 v4 = template_max_double(0, 1074003968, 0, 1073217536);
 v1 = 10;
 v2 = 20;
 template_swap_int(&v1, &v2);
 LODWORD(result) = v1 + v3 + (int)v4 + v2;
 HIDWORD(result) = v5 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z23test_cpp_template_classv @ 0x19F3 */
long long test_cpp_template_class(void)
{
 long long result; // rax
 int v1; // [esp+18h] [ebp-A0h]
 int Size; // [esp+1Ch] [ebp-9Ch]
 unsigned char v3[44]; // [esp+2Ch] [ebp-8Ch] BYREF
 unsigned char v4[84]; // [esp+58h] [ebp-60h] BYREF
 unsigned int v5; // [esp+ACh] [ebp-Ch]

 v5 = __readgsdword(0x14u);
 Container_int_Container(v3);
 Container_int_push(v3, 10);
 Container_int_push(v3, 20);
 Container_int_push(v3, 30);
 v1 = Container_int_get(v3, 0);
 Size = Container_int_getSize(v3);
 Container_double_Container(v4);
 Container_double_push(v4, 1374389535, 1074339512);
 LODWORD(result) = Size + v1 + (int)Container_double_get(v4, 0);
 HIDWORD(result) = v5 - __readgsdword(0x14u);
 return result;
}


/* Function: _ZZ15test_cpp_lambdavENKUliE_clEi @ 0x1B34 */
int test_cpp_lambda_lambda_int_1_operator(int a1, int a2)
{
 **(unsigned int **)(a1 + 4) += 5;
 return a2 * *(unsigned int *)a1 + **(unsigned int **)(a1 + 4);
}


/* Function: _Z15test_cpp_lambdav @ 0x1B6B */
long long test_cpp_lambda(void)
{
 long long result; // rax
 unsigned int v1[2]; // [esp+4h] [ebp-24h] BYREF
 int v2; // [esp+Ch] [ebp-1Ch]
 unsigned int v3[2]; // [esp+14h] [ebp-14h] BYREF
 unsigned int v4; // [esp+1Ch] [ebp-Ch]

 v4 = __readgsdword(0x14u);
 v1[1] = 10;
 v1[0] = 20;
 v3[0] = 10;
 v3[1] = (unsigned int)v1;
 v2 = test_cpp_lambda_lambda_int_1_operator((int)v3, 3);
 LODWORD(result) = v2 + 30;
 HIDWORD(result) = v4 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1BD7 */
void test_cpp_exception(void)
{
 unsigned int *exception; // eax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ @ 0x1D26 */
void test_cpp_smart_ptr_lambda_int_ptr_1_operator(int a1, unsigned int *a2)
{
 *a2 = -1;
 if ( a2 )
 operator delete(a2, 4u);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1D5E */
long long test_cpp_smart_ptr(void)
{
 unsigned int *v0; // eax
 int v1; // eax
 unsigned int *v2; // edx
 unsigned int *v3; // eax
 int v4; // ebx
 long long result; // rax
 int v6; // [esp+Fh] [ebp-29h] BYREF
 int v7[1]; // [esp+10h] [ebp-28h] BYREF
 int v8[1]; // [esp+14h] [ebp-24h] BYREF
 int v9[1]; // [esp+18h] [ebp-20h] BYREF
 int v10[1]; // [esp+1Ch] [ebp-1Ch] BYREF
 int v11; // [esp+20h] [ebp-18h]
 int v12; // [esp+24h] [ebp-14h]
 int v13; // [esp+28h] [ebp-10h]
 unsigned int v14; // [esp+2Ch] [ebp-Ch]

 v14 = __readgsdword(0x14u);
 v0 = (unsigned int *)operator_new(4u);
 *v0 = 100;
 std_unique_ptr_int_std_default_delete_int_unique_ptr_std_default_delete_int_void((int)v7, (int)v0);
 *(unsigned int *)std_unique_ptr_int_std_default_delete_int_operator_star((int)v7) = 200;
 v1 = std_move_unique_ptr_int_ref((int)v7);
 std_unique_ptr_int_std_default_delete_int_unique_ptr((int)v8, v1);
 v11 = *(unsigned int *)std_unique_ptr_int_std_default_delete_int_operator_star((int)v8);
 v2 = (unsigned int *)operator_new_array(0x14u);
 *v2 = 1;
 v2[1] = 2;
 v2[2] = 3;
 v2[3] = 4;
 v2[4] = 5;
 std_unique_ptr_int_array_unique_ptr_int_ptr_std_default_delete_int_array_void_bool((int)v9, (int)v2);
 v12 = *(unsigned int *)std_unique_ptr_int_array_operator_bracket((int)v9, 2);
 v3 = (unsigned int *)operator_new(4u);
 *v3 = 500;
 std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_unique_ptr((int)v10, (int)v3, v6);
 v13 = *(unsigned int *)std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_operator_star((int)v10);
 v4 = v12 + v11 + v13;
 std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1__unique_ptr((int)v10);
 std_unique_ptr_int_array__unique_ptr((int)v9);
 std_unique_ptr_int_std_default_delete_int__unique_ptr((int)v8);
 std_unique_ptr_int_std_default_delete_int__unique_ptr((int)v7);
 LODWORD(result) = v4;
 HIDWORD(result) = v14 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z13test_cpp_rttiv @ 0x1F3B */
size_t test_cpp_rtti(void)
{
 RTTIDerivedA *v0; // esi
 RTTIDerivedB *v1; // esi
 RTTIDerivedA *v2; // eax
 RTTIDerivedB *v3; // eax
 const char *v4; // eax
 int v6; // [esp+Ch] [ebp-1Ch]
 size_t v7; // [esp+Ch] [ebp-1Ch]
 RTTIDerivedA *lpsrc; // [esp+10h] [ebp-18h]

 v0 = (RTTIDerivedA *)operator_new(4u);
 *(unsigned int *)v0 = 0;
 RTTIDerivedA_RTTIDerivedA(v0);
 lpsrc = v0;
 v1 = (RTTIDerivedB *)operator_new(4u);
 *(unsigned int *)v1 = 0;
 RTTIDerivedB_RTTIDerivedB(v1);
 v6 = 0;
 if ( !lpsrc )
 __cxa_bad_typeid();
 if ( (unsigned char)std_type_info_operator_eq((std_type_info *)(*(unsigned int *)lpsrc - 4), (std_type_info *)&typeinfo_for_RTTIDerivedA) )
 v6 = 10;
 if ( !v1 )
 __cxa_bad_typeid();
 if ( (unsigned char)std_type_info_operator_eq((std_type_info *)(*(unsigned int *)v1 - 4), (std_type_info *)&typeinfo_for_RTTIDerivedB) )
 v6 += 20;
 v2 = (RTTIDerivedA *)__dynamic_cast(
 lpsrc,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0);
 if ( v2 )
 v6 += RTTIDerivedA_derivedA_data();
 v3 = (RTTIDerivedB *)__dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0);
 if ( v3 )
 v6 += RTTIDerivedB_derivedB_data();
 v4 = (const char *)std_type_info_name(*(std_type_info **)(*(unsigned int *)lpsrc - 4));
 v7 = v6 + strlen(v4);
 RTTIDerivedA_RTTIDerivedA_destructor(lpsrc);
 RTTIDerivedB_RTTIDerivedB_destructor(v1);
 return v7;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x20EA */
void test_cpp_oo_features(void)
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax

 puts(asc_503C);
 v0 = test_cpp_member_func();
 printf(aCppL301D, v0);
 v1 = test_cpp_constructor();
 printf(aCppL302D, v1);
 v2 = test_cpp_virtual_func();
 printf(aCppL303D, v2);
 v3 = test_cpp_multiple_inheritance();
 printf(aCppL304D, v3);
 v4 = test_cpp_diamond_inheritance();
 printf(aCppL305D, v4);
 v5 = test_cpp_operator_overload();
 printf(aCppL306D, v5);
 v6 = test_cpp_template_func();
 printf(aCppL307D, v6);
 v7 = test_cpp_template_class();
 printf(aCppL308D, v7);
 v8 = test_cpp_lambda();
 printf(aCppL309D, v8);
 test_cpp_exception();
}


/* Function: main @ 0x2238 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI2St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_ @ 0x2258 */
int ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI2St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_(
 int a1,
 int a2,
 int a3)
{
 return std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1__uniq_ptr_impl(
 a1,
 a2,
 a3);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC2IS1_vEES0_RKS1_ @ 0x2282 */
int std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_unique_ptr(
 int a1,
 int a2,
 int a3)
{
 return ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI2St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_(
 a1,
 a2,
 a3);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED2Ev @ 0x22AA */
int std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1__unique_ptr(int a1)
{
 int deleter; // ebx
 int v2; // eax
 int result; // eax
 unsigned int *v4; // [esp+Ch] [ebp-Ch]

 v4 = (unsigned int *)std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1__M_ptr(a1);
 if ( v4 && *v4 )
 {
 deleter = std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_get_deleter(a1);
 v2 = std_move_int_ptr_ref((int)v4);
 test_cpp_smart_ptr_lambda_int_ptr_1_operator(deleter, (unsigned int *)v2);
 }
 result = (int)v4;
 if ( v4 ) *v4 = 0;
 return result;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv @ 0x2312 */
int std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_operator_star(int a1)
{
 return std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_get(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_ @ 0x233A */
int std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1__uniq_ptr_impl(
 int a1,
 int a2,
 int a3)
{
 int v3; // eax

 v3 = std_forward_test_cpp_smart_ptr_lambda_int_ptr_1_const(a3);
 return std_tuple_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1_tuple(
 a1,
 a2,
 (int)v3);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x2374 */
int std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1__M_ptr(int a1)
{
 return std_get_0u_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1(a1);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv @ 0x2396 */
int std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_get_deleter(int a1)
{
 return std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1__M_deleter(a1);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv @ 0x23B8 */
int std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_get(int a1)
{
 return (int)std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1__M_ptr(a1);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE @ 0x23D9 */
int std_forward_test_cpp_smart_ptr_lambda_int_ptr_1_const(int a1)
{
 return a1;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x23EC */
int std_tuple_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1_tuple(
 int a1,
 int a2,
 int a3)
{
 int v3; // ebx
 int v4; // eax

 v3 = std_forward_test_cpp_smart_ptr_lambda_int_ptr_1_const(a3);
 v4 = std_forward_int_ptr_ref(a2);
 return std_Tuple_impl_0u_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1__Tuple_impl(
 a1,
 v4,
 v3);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x242F */
int std_get_0u_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1(int a1)
{
 return std_get_helper_0u_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv @ 0x2450 */
int std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1__M_deleter(int a1)
{
 return std_get_1u_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1(a1);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv @ 0x23B8 */
int std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_get(int a1)
{
 return (int)std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1__M_ptr(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x2472 */
int std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1__M_ptr(int a1)
{
 return std_get_0u_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x2496 */
int std_Tuple_impl_0u_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1__Tuple_impl(
 int a1,
 int a2,
 int a3)
{
 int v3; // eax
 int v4; // eax

 v3 = std_forward_test_cpp_smart_ptr_lambda_int_ptr_1_const(a3);
 std_Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_ptr_1__Tuple_impl(a1, v3);
 v4 = std_forward_int_ptr_ref(a2);
 std_Head_base_0u_int_ptr_false__Head_base_int_ptr_ref((unsigned int *)a1, v4);
 return a1;
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x24E5 */
int std_get_helper_0u_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1(int a1)
{
 return std_Tuple_impl_0u_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1__M_head(a1);
}


/* Function: _ZSt3getILj1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x2505 */
int std_get_1u_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1(int a1)
{
 return std_get_helper_1u_test_cpp_smart_ptr_lambda_int_ptr_1(a1);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x2525 */
int std_get_0u_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1(int a1)
{
 return std_get_helper_0u_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1(a1);
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_ @ 0x2546 */
int std_Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_ptr_1__Tuple_impl(int a1, int a2)
{
 return std_Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_1_true__Head_base(a1, a2);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_ @ 0x256A */
int std_Tuple_impl_0u_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1__M_head(int a1)
{
 return (int)std_Head_base_0u_int_ptr_false__M_head((unsigned int *)a1);
}


/* Function: _ZSt12__get_helperILj1EZ18test_cpp_smart_ptrvEUlPiE_JEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x258B */
int std_get_helper_1u_test_cpp_smart_ptr_lambda_int_ptr_1(int a1)
{
 return std_Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_ptr_1__M_head(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x25AB */
int std_get_helper_0u_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1(int a1)
{
 return std_Tuple_impl_0u_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1__M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_ @ 0x25CC */
int std_Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_1_true__Head_base(int a1, int a2)
{
 (void)a2;
 return (int)a1;
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_ @ 0x25DC */
int std_Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_ptr_1__M_head(int a1)
{
 return (int)std_Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_1_true__M_head((int *)a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ @ 0x25FC */
int std_Tuple_impl_0u_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1__M_head(int a1)
{
 return (int)std_Head_base_0u_int_ptr_false__M_head((unsigned int *)a1);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_ @ 0x261D */
int std_Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_1_true__M_head(int *a1)
{
 return *(int *)a1;
}


/* Function: _Z41__static_initialization_and_destruction_0ii @ 0x262F */
int __static_initialization_and_destruction_0(int a1, int a2)
{
 int result; // eax

 if ( a1 == 1 && a2 == 0xFFFF )
 {
 return 0;
 }
 return result;
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x268C */
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 return __static_initialization_and_destruction_0(1, 0xFFFF);
}


/* Function: _ZNKSt9type_info4nameEv @ 0x26B4 */
const char *std_type_info_name(std_type_info *a1)
{
 if ( **((unsigned char **)a1 + 1) == 42 )
 return (const char *)(*((unsigned int *)a1 + 1) + 1);
 else
 return (const char *)(*((unsigned int *)a1 + 1));
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x26E6 */
int std_type_info_operator_eq(std_type_info *a1, std_type_info *a2)
{
 return *(unsigned int *)((int)a1 + 4) == *(unsigned int *)((int)a2 + 4)
 || **(unsigned char **)((int)a1 + 4) != 42 && !strcmp(*(const char **)((int)a1 + 4), *(const char **)((int)a2 + 4));
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x274A */
void SimpleClass_SimpleClass(SimpleClass *self, int a2, char *src)
{
 *(unsigned int *)self = a2;
 strncpy((char *)self + 4, src, 0x1Fu);
 *((unsigned char *)self + 35) = 0;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x278E */
int SimpleClass_getValue(SimpleClass *self)
{
 return *(unsigned int *)self;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x27A6 */
SimpleClass * SimpleClass_setValue(SimpleClass *self, int a2)
{
 SimpleClass *result; // eax

 result = self;
 *(unsigned int *)self = a2;
 return result;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x27C2 */
size_t SimpleClass_compute(SimpleClass *self, int a2)
{
 int v2; // esi

 v2 = a2 * *(unsigned int *)self;
 return v2 + strlen((const char *)self + 4);
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x27FD */
int SimpleClass_getClassID()
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Ej @ 0x2816 */
void LifecycleClass_LifecycleClass(LifecycleClass *self, unsigned int a2)
{
 unsigned int i; // [esp+Ch] [ebp-Ch]

 *((unsigned int *)self + 1) = a2;
 if ( a2 > 0x1FFFFFFF )
 __cxa_throw_bad_array_new_length();
 *(unsigned int *)self = operator_new_array(4 * a2);
 for ( i = 0; i < a2; ++i )
 *(unsigned int *)(*(unsigned int *)self + 4 * i) = 10 * i;
 ++LifecycleClass_instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x28A4 */
void LifecycleClass_LifecycleClass_destructor(LifecycleClass *self)
{
 if ( *(unsigned int *)self )
 operator_delete_array((void *)*(unsigned int *)self);
 --LifecycleClass_instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEj @ 0x28EA */
unsigned int *LifecycleClass_getData(LifecycleClass *self, unsigned int a2)
{
 if ( a2 >= *((unsigned int *)self + 1) )
 return (unsigned int *)-1;
 else
 return (unsigned int *)(*(unsigned int *)self + 4 * a2);
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x291E */
int LifecycleClass_getInstanceCount()
{
 return LifecycleClass_instance_count;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x2938 */
int Base_virtual_func(Base *self, int a2)
{
 return a2 + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x2952 */
const char *Base_getName()
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x296C */
void Base_Base_destructor(Base *self)
{
 *(void **)self = &off_8DA8;
}


/* Function: _ZN4BaseD0Ev @ 0x298C */
void Base_Base_destructor_0(Base *self)
{
 Base_Base_destructor(self);
 operator_delete(self, 4u);
}


/* Function: _ZN4BaseC2Ev @ 0x29C6 */
void Base_Base(Base *self)
{
 *(void **)self = &off_8DA8;
}


/* Function: _ZN7DerivedC2Ei @ 0x29E6 */
void Derived_Derived(Derived *self, int a2)
{
 Base_Base(self);
 *(void **)self = &off_8D90;
 *((unsigned int *)self + 1) = a2;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x2A26 */
int Derived_virtual_func(Derived *self, int a2)
{
 return a2 * *((unsigned int *)self + 1);
}


/* Function: _ZNK7Derived7getNameEv @ 0x2A44 */
const char *Derived_getName()
{
 return "Derived";
}


/* Function: _ZN5BaseA5funcAEv @ 0x2A5E */
int BaseA_funcA()
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x2A76 */
void BaseA_BaseA_destructor(BaseA *self)
{
 *(void **)self = &off_8D7C;
}


/* Function: _ZN5BaseAD0Ev @ 0x2A96 */
void BaseA_BaseA_destructor_0(BaseA *self)
{
 BaseA_BaseA_destructor(self);
 operator_delete(self, 8u);
}


/* Function: _ZN5BaseB5funcBEv @ 0x2AD0 */
int BaseB_funcB()
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x2AE8 */
void BaseB_BaseB_destructor(BaseB *self)
{
 *(void **)self = &off_8D68;
}


/* Function: _ZN5BaseBD0Ev @ 0x2B08 */
void BaseB_BaseB_destructor_0(BaseB *self)
{
 BaseB_BaseB_destructor(self);
 operator_delete(self, 8u);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x2B42 */
int MultiDerived_funcA()
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x2B5A */
int MultiDerived_funcB()
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x2B72 */
int non_virtual_thunk_to_MultiDerived_funcB()
{
 return MultiDerived_funcB();
}


/* Function: _ZN5BaseAC2Ev @ 0x2B7E */
void BaseA_BaseA(BaseA *self)
{
 *(void **)self = &off_8D7C;
}


/* Function: _ZN5BaseBC2Ev @ 0x2B9E */
void BaseB_BaseB(BaseB *self)
{
 *(void **)self = &off_8D68;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x2BBE */
void MultiDerived_MultiDerived(MultiDerived *self)
{
 BaseA_BaseA(self);
 BaseB_BaseB((MultiDerived *)((char *)self + 8));
 *(void **)self = &off_8D3C;
 *((void **)self + 2) = &off_8D54;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x2C12 */
int VirtualBase_func()
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x2C2A */
void VirtualBase_VirtualBase_destructor(VirtualBase *self)
{
 *(void **)self = &off_8D28;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x2C4A */
void VirtualBase_VirtualBase_destructor_0(VirtualBase *self)
{
 VirtualBase_VirtualBase_destructor(self);
 operator_delete(self, 8u);
}


/* Function: _ZN7MiddleA4funcEv @ 0x2C84 */
int MiddleA_func(MiddleA *self)
{
 return *(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12) + 4) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x2CB0 */
int virtual_thunk_to_MiddleA_func(MiddleA *self)
{
 return MiddleA_func((MiddleA *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x2CC4 */
int MiddleB_func(MiddleB *self)
{
 return *(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12) + 4) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x2CF0 */
int virtual_thunk_to_MiddleB_func(MiddleB *self)
{
 return MiddleB_func((MiddleB *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x2D04 */
int DiamondDerived_func(DiamondDerived *self)
{
 return *(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12) + 4) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x2D30 */
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *self)
{
 return DiamondDerived_func((DiamondDerived *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12)));
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x2D43 */
int non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *self)
{
 return DiamondDerived_func((DiamondDerived *)((char *)self - 8));
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x2D4E */
void VirtualBase_VirtualBase(VirtualBase *self)
{
 *(void **)self = &off_8D28;
}


/* Function: _ZN7MiddleAC2Ev @ 0x2D6E */
void MiddleA_MiddleA(MiddleA *self, unsigned int *a2)
{
 *(unsigned int *)self = *a2;
 *(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12)) = a2[1];
}


/* Function: _ZN7MiddleAD2Ev @ 0x2DA6 */
void MiddleA_MiddleA_destructor(MiddleA *self, unsigned int *a2)
{
 *(unsigned int *)self = *a2;
 *(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12)) = a2[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x2DDE */
void MiddleB_MiddleB(MiddleB *self, unsigned int *a2)
{
 *(unsigned int *)self = *a2;
 *(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12)) = a2[1];
}


/* Function: _ZN7MiddleBD2Ev @ 0x2E16 */
void MiddleB_MiddleB_destructor(MiddleB *self, unsigned int *a2)
{
 *(unsigned int *)self = *a2;
 *(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12)) = a2[1];
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x2E4E */
void DiamondDerived_DiamondDerived(DiamondDerived *self)
{
 VirtualBase_VirtualBase((DiamondDerived *)((char *)self + 16));
 MiddleA_MiddleA(self, off_8CA0);
 MiddleB_MiddleB((DiamondDerived *)((char *)self + 8), off_8CA8);
 *(void **)self = &off_8C5C;
 *((void **)self + 4) = &off_8C90;
 *((void **)self + 2) = &off_8C74;
}


/* Function: _ZN5PointC2Eii @ 0x2ED0 */
void Point_Point(Point *self, int a2, int a3)
{
 *(unsigned int *)self = a2;
 *((unsigned int *)self + 1) = a3;
}


/* Function: _ZNK5PointplERKS_ @ 0x2EF6 */
Point * Point_operator_plus(Point *self, unsigned int *a2, unsigned int *a3)
{
 Point_Point(self, *a2 + *a3, a3[1] + a2[1]);
 return self;
}


/* Function: _ZNK5PointeqERKS_ @ 0x2F3C */
int Point_operator_eq(unsigned int *a1, unsigned int *a2)
{
 return *a1 == *a2 && a1[1] == a2[1];
}


/* Function: _ZN5PointppEv @ 0x2F7A */
unsigned int * Point_operator_inc(unsigned int *a1)
{
 ++*a1;
 ++a1[1];
 return a1;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2FAC */
int template_max_int(int a1, int a2)
{
 if ( a1 <= a2 )
 return a2;
 else
 return a1;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2FCF */
long double template_max_double(double a1, double a2)
{
 if ( a1 <= (long double)a2 )
 return a2;
 else
 return a1;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x3011 */
int * template_swap_int(int *a1, int *a2)
{
 int *result; // eax
 int v3; // [esp+Ch] [ebp-4h]

 v3 = *a1;
 *a1 = *a2;
 result = a2;
 *a2 = v3;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x3042 */
int Container_int_Container(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x3060 */
int Container_int_push(int a1, int a2)
{
 int result; // eax

 result = *(unsigned int *)(a1 + 40);
 if ( result <= 9 )
 {
 result = *(unsigned int *)(a1 + 40);
 *(unsigned int *)(a1 + 40) = result + 1;
 *(unsigned int *)(a1 + 4 * result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x309C */
int Container_int_get(int a1, int a2)
{
 if ( a2 < 0 || a2 >= *(unsigned int *)(a1 + 40) )
 return 0;
 else
 return *(unsigned int *)(a1 + 4 * a2);
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x30D0 */
int Container_int_getSize(int a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x30EA */
int Container_double_Container(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x3108 */
int Container_double_push(int a1, double a2)
{
 int result; // eax

 result = *(unsigned int *)(a1 + 80);
 if ( result <= 9 )
 {
 result = *(unsigned int *)(a1 + 80);
 *(unsigned int *)(a1 + 80) = result + 1;
 *(double *)(a1 + 8 * result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x314E */
long double Container_double_get(int a1, int a2)
{
 if ( a2 < 0 || a2 >= *(unsigned int *)(a1 + 80) )
 return 0.0;
 else
 return *(double *)(a1 + 8 * a2);
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x3180 */
int Container_double_getSize(int a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x319A */
int std_uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_data(int a1, int a2)
{
 return (int)std_uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x31C4 */
int std_unique_ptr_int_std_default_delete_int_unique_ptr(int a1, int a2)
{
 return std_uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_data(a1, a2);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x31EE */
int RTTIBase_getType()
{
 return 0;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x3206 */
int RTTIDerivedA_getType()
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x321E */
int RTTIDerivedA_derivedA_data()
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x3236 */
int RTTIDerivedB_getType()
{
 return 2;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x324E */
int RTTIDerivedB_derivedB_data()
{
 return 200;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x3266 */
void RTTIBase_RTTIBase(RTTIBase *self)
{
 *(void **)self = off_8C44;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x3286 */
void RTTIBase_RTTIBase_destructor(RTTIBase *self)
{
 *(void **)self = off_8C44;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x32A6 */
void RTTIBase_RTTIBase_destructor_0(RTTIBase *self)
{
 RTTIBase_RTTIBase_destructor(self);
 operator_delete(self, 4u);
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x32E0 */
void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *self)
{
 RTTIBase_RTTIBase(self);
 *(void **)self = off_8C30;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x3316 */
void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *self)
{
 RTTIBase_RTTIBase(self);
 *(void **)self = off_8C1C;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x334C */
int ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(int a1, int a2)
{
 return std_uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x3376 */
int std_unique_ptr_int_std_default_delete_int_unique_ptr_std_default_delete_int_void(int a1, int a2)
{
 return ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(a1, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x31C4 */
int std_unique_ptr_int_std_default_delete_int_unique_ptr(int a1, int a2)
{
 return std_uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_data(a1, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x33A0 */
int std_unique_ptr_int_std_default_delete_int__unique_ptr(int a1)
{
 int deleter; // ebx
 int v2; // eax
 int result; // eax
 unsigned int *v4; // [esp+Ch] [ebp-Ch]

 v4 = (unsigned int *)std_uniq_ptr_impl_int_std_default_delete_int__M_ptr(a1);
 if ( v4 && *v4 )
 {
 deleter = std_unique_ptr_int_std_default_delete_int_get_deleter(a1);
 v2 = std_move_int_ptr_ref((int)v4);
 std_default_delete_int_operator_call(deleter, (void *)v2);
 }
 result = (int)v4;
 if ( v4 ) *v4 = 0;
 return result;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x340C */
int std_unique_ptr_int_std_default_delete_int_operator_star(int a1)
{
 return std_unique_ptr_int_std_default_delete_int_get(a1);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x3437 */
int std_move_unique_ptr_int_ref(int a1)
{
 return a1;
}





/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x344E */
int std_Tuple_impl_0u_int_ptr_std_default_delete_int__Tuple_impl(int a1, int a2)
{
 int result; // eax

 std_Tuple_impl_1u_std_default_delete_int__Tuple_impl(a1, a2);
 result = a1;
 *(unsigned int *)a1 = *(unsigned int *)a2;
 return result;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x3480 */
int std_tuple_int_ptr_std_default_delete_int_tuple(int a1, int a2)
{
 return (int)std_Tuple_impl_0u_int_ptr_std_default_delete_int__Tuple_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x34AA */
int std_uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl(int a1, int a2)
{
 int v2; // eax
 int result; // eax

 v2 = std_move_tuple_int_ptr_std_default_delete_int_ref(a2);
 std_tuple_int_ptr_std_default_delete_int_tuple(a1, v2);
 result = std_uniq_ptr_impl_int_std_default_delete_int__M_ptr(a2);
 *(unsigned int *)result = 0;
 return result;
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x36D7 */
int std_move_tuple_int_ptr_std_default_delete_int_ref(int a1)
{
 return a1;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x34F8 */
int ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(int a1, int a2)
{
 return std_uniq_ptr_impl_int_std_default_delete_int_array___uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x3522 */
int std_unique_ptr_int_array_unique_ptr_int_ptr_std_default_delete_int_array_void_bool(int a1, int a2)
{
 return ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(a1, a2);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x354C */
int std_unique_ptr_int_array__unique_ptr(int a1)
{
 int deleter; // eax
 int result; // eax
 unsigned int *v3; // [esp+Ch] [ebp-Ch]

 v3 = std_uniq_ptr_impl_int_std_default_delete_int_array__M_ptr(a1);
 if ( *(void **)v3 )
 {
 deleter = std_unique_ptr_int_array_get_deleter(a1);
 std_default_delete_int_array_operator_call(deleter, *(void **)v3);
 }
 result = v3;
 *(void **)v3 = 0;
 return result;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj @ 0x35A8 */
int std_unique_ptr_int_array_operator_bracket(int a1, int a2)
{
 return std_unique_ptr_int_array_get(a1) + 4 * a2;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x35DE */
int std_uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl(int a1, int a2)
{
 int result; // eax

 std_tuple_int_ptr_std_default_delete_int_tuple_true_true(a1);
 result = std_uniq_ptr_impl_int_std_default_delete_int__M_ptr(a1);
 *(unsigned int *)result = a2;
 return result;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x361C */
int std_uniq_ptr_impl_int_std_default_delete_int__M_ptr(int a1)
{
 return (int)std_get_0u_int_ptr_std_default_delete_int(a1);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x3642 */
int std_unique_ptr_int_std_default_delete_int_get_deleter(int a1)
{
 return std_uniq_ptr_impl_int_std_default_delete_int__M_deleter(a1);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x3667 */
int std_move_int_ptr_ref(int a1)
{
 return a1;
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x367E */
void std_default_delete_int_operator_call(int a1, void *a2)
{
 if ( a2 )
 operator_delete(a2, 4u);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x36B2 */
int std_unique_ptr_int_std_default_delete_int_get(int a1)
{
 return std_uniq_ptr_impl_int_std_default_delete_int__M_ptr(a1);
}





/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_ @ 0x36EE */
int std_Tuple_impl_1u_std_default_delete_int__Tuple_impl(int a1)
{
 return a1;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC2Ev @ 0x3BE0 */
int std_Head_base_1u_std_default_delete_int_true__Head_base(int a1)
{
 return a1;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x3702 */
int std_uniq_ptr_impl_int_std_default_delete_int_array___uniq_ptr_impl(int a1, int a2)
{
 int result; // eax

 std_tuple_int_ptr_std_default_delete_int_array_tuple_true_true(a1);
 result = std_uniq_ptr_impl_int_std_default_delete_int_array__M_ptr(a1);
 *(unsigned int *)result = (unsigned int)a2;
 return result;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x3740 */
int std_uniq_ptr_impl_int_std_default_delete_int_array__M_ptr(int a1)
{
 return (int)std_get_0u_int_ptr_std_default_delete_int_array(a1);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x3766 */
int std_unique_ptr_int_array_get_deleter(int a1)
{
 return std_uniq_ptr_impl_int_std_default_delete_int_array__M_deleter(a1);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ @ 0x378C */
void std_default_delete_int_array_operator_call(int a1, void *a2)
{
 if ( a2 )
 operator_delete_array(a2);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x37BE */
int std_unique_ptr_int_array_get(int a1)
{
 return (int)std_uniq_ptr_impl_int_std_default_delete_int_array__M_ptr(a1);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x37E4 */
int std_tuple_int_ptr_std_default_delete_int_tuple_true_true(int a1)
{
 return (int)std_Tuple_impl_0u_int_ptr_std_default_delete_int__Tuple_impl(a1);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x380A */
int std_get_0u_int_ptr_std_default_delete_int(int a1)
{
 return std_get_helper_0u_int_ptr_std_default_delete_int(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x3830 */
int std_uniq_ptr_impl_int_std_default_delete_int__M_deleter(int a1)
{
 return std_get_1u_int_ptr_std_default_delete_int(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x3856 */
int std_uniq_ptr_impl_int_std_default_delete_int__M_ptr(int a1)
{
 return (int)std_get_0u_int_ptr_std_default_delete_int(a1);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x387E */
int std_tuple_int_ptr_std_default_delete_int_array_tuple_true_true(int a1)
{
 return (int)std_Tuple_impl_0u_int_ptr_std_default_delete_int_array__Tuple_impl(a1);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x38A4 */
int std_get_0u_int_ptr_std_default_delete_int_array(int a1)
{
 return std_get_helper_0u_int_ptr_std_default_delete_int_array(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x38CA */
int std_uniq_ptr_impl_int_std_default_delete_int_array__M_deleter(int a1)
{
 return std_get_1u_int_ptr_std_default_delete_int_array(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x38F0 */
int std_uniq_ptr_impl_int_std_default_delete_int_array__M_ptr(int a1)
{
 return (int)std_get_0u_int_ptr_std_default_delete_int_array(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2Ev @ 0x3918 */
int std_Tuple_impl_0u_int_ptr_std_default_delete_int__Tuple_impl(int a1)
{
 std_Tuple_impl_1u_std_default_delete_int__Tuple_impl(a1);
 return (int)std_Head_base_0u_int_ptr_false__Head_base((unsigned int *)a1);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x394C */
int std_get_helper_0u_int_ptr_std_default_delete_int(int a1)
{
 return std_Tuple_impl_0u_int_ptr_std_default_delete_int__M_head(a1);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x3970 */
int std_get_1u_int_ptr_std_default_delete_int(int a1)
{
 return std_get_helper_1u_std_default_delete_int(a1);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x3994 */
int std_get_0u_int_ptr_std_default_delete_int(int a1)
{
 return std_get_helper_0u_int_ptr_std_default_delete_int(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x39BA */
int std_Tuple_impl_0u_int_ptr_std_default_delete_int_array__Tuple_impl(int a1)
{
 std_Tuple_impl_1u_std_default_delete_int_array__Tuple_impl(a1);
 return (int)std_Head_base_0u_int_ptr_false__Head_base((unsigned int *)a1);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x39EE */
int std_get_helper_0u_int_ptr_std_default_delete_int_array(int a1)
{
 return std_Tuple_impl_0u_int_ptr_std_default_delete_int_array__M_head(a1);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x3A12 */
int std_get_1u_int_ptr_std_default_delete_int_array(int a1)
{
 return std_get_helper_1u_std_default_delete_int_array(a1);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x3A36 */
int std_get_0u_int_ptr_std_default_delete_int_array(int a1)
{
 return std_get_helper_0u_int_ptr_std_default_delete_int_array(a1);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x3A5B */
int std_forward_int_ptr_ref(int a1)
{
 return a1;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2Ev @ 0x3A72 */
int std_Tuple_impl_1u_std_default_delete_int__Tuple_impl(int a1)
{
 return std_Head_base_1u_std_default_delete_int_true__Head_base(a1);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2Ev @ 0x3A98 */
int std_Head_base_0u_int_ptr_false__Head_base(unsigned int *a1)
{
 int result; // eax

 *a1 = 0;
 result = (int)a1;
 return result;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x3AB5 */
int std_Tuple_impl_0u_int_ptr_std_default_delete_int__M_head(int a1)
{
 return (int)std_Head_base_0u_int_ptr_false__M_head((unsigned int *)a1);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x3ADA */
int std_get_helper_1u_std_default_delete_int(int a1)
{
 return std_Tuple_impl_1u_std_default_delete_int__M_head(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x3AFE */
int std_get_helper_0u_int_ptr_std_default_delete_int(int a1)
{
 return std_Tuple_impl_0u_int_ptr_std_default_delete_int__M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC2Ev @ 0x3B22 */
int std_Tuple_impl_1u_std_default_delete_int_array__Tuple_impl(int a1)
{
 return (int)std_Head_base_1u_std_default_delete_int_array_true__Head_base(a1);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev @ 0x3C54 */
int std_Head_base_1u_std_default_delete_int_array_true__Head_base(int a1)
{
 return a1;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x3B47 */
int std_Tuple_impl_0u_int_ptr_std_default_delete_int_array__M_head(int a1)
{
 return (int)std_Head_base_0u_int_ptr_false__M_head((unsigned int *)a1);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x3C68 */
int std_Tuple_impl_1u_std_default_delete_int_array__M_head(int a1)
{
 return std_Head_base_1u_std_default_delete_int_array_true__M_head(a1);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x3B6C */
int std_get_helper_1u_std_default_delete_int_array(int a1)
{
 return std_Tuple_impl_1u_std_default_delete_int_array__M_head(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x3B90 */
int std_get_helper_0u_int_ptr_std_default_delete_int_array(int a1)
{
 return std_Tuple_impl_0u_int_ptr_std_default_delete_int_array__M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_ @ 0x3BB4 */
int std_Head_base_0u_int_ptr_false__Head_base_int_ptr_ref(unsigned int *a1, int a2)
{
 int v2; // edx
 int result; // eax

 v2 = *(unsigned int *)std_forward_int_ptr_ref(a2);
 *a1 = (unsigned int)v2;
 result = (int)a1;
 return result;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC2Ev @ 0x3BE0 */
int std_Head_base_1u_std_default_delete_int_true__Head_base(int a1)
{
 return a1;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ @ 0x3BF4 */
int std_Head_base_0u_int_ptr_false__M_head(unsigned int *a1)
{
 return (int)a1;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x3C0A */
int std_Tuple_impl_1u_std_default_delete_int__M_head(int a1)
{
 return (int)std_Head_base_1u_std_default_delete_int_true__M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x3CB1 */
int std_Head_base_1u_std_default_delete_int_true__M_head(int a1)
{
 return a1;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x3C2E */
int std_Tuple_impl_0u_int_ptr_std_default_delete_int__M_head(int a1)
{
 return (int)std_Head_base_0u_int_ptr_false__M_head((unsigned int *)a1);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev @ 0x3C54 */
int std_Head_base_1u_std_default_delete_int_array_true__Head_base(int a1)
{
 return a1;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x3C68 */
int std_Tuple_impl_1u_std_default_delete_int_array__M_head(int a1)
{
 return std_Head_base_1u_std_default_delete_int_array_true__M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x3C8C */
int std_Tuple_impl_0u_int_ptr_std_default_delete_int_array__M_head(int a1)
{
 return (int)std_Head_base_0u_int_ptr_false__M_head((unsigned int *)a1);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x3CB1 */
int std_Head_base_1u_std_default_delete_int_true__M_head(int a1)
{
 return a1;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ @ 0x3CC7 */
int std_Head_base_0u_int_ptr_false__M_head(unsigned int *a1)
{
 return (int)a1;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x3CDD */
int std_Head_base_1u_std_default_delete_int_array_true__M_head(int a1)
{
 return (int)a1;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x3CF4 */
void RTTIDerivedB_RTTIDerivedB_destructor(RTTIDerivedB *self)
{
 *(void **)self = off_8C1C;
 RTTIBase_RTTIBase_destructor(self);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x3D26 */
void RTTIDerivedB_RTTIDerivedB_destructor_0(RTTIDerivedB *self)
{
 RTTIDerivedB_RTTIDerivedB_destructor(self);
 operator_delete(self, 4u);
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x3D60 */
void RTTIDerivedA_RTTIDerivedA_destructor(RTTIDerivedA *self)
{
 *(void **)self = off_8C30;
 RTTIBase_RTTIBase_destructor(self);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x3D92 */
void RTTIDerivedA_RTTIDerivedA_destructor_0(RTTIDerivedA *self)
{
 RTTIDerivedA_RTTIDerivedA_destructor(self);
 operator_delete(self, 4u);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x3DCC */
void DiamondDerived_DiamondDerived_destructor(DiamondDerived *self)
{
 *(void **)self = &off_8C5C;
 *((void **)self + 4) = &off_8C90;
 *((void **)self + 2) = &off_8C74;
 MiddleB_MiddleB_destructor((DiamondDerived *)((char *)self + 8), off_8CA8);
 MiddleA_MiddleA_destructor(self, off_8CA0);
 VirtualBase_VirtualBase_destructor((DiamondDerived *)((char *)self + 16));
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x3E4E */
void non_virtual_thunk_to_DiamondDerived_DiamondDerived_destructor(DiamondDerived *self)
{
 DiamondDerived_DiamondDerived_destructor((DiamondDerived *)((char *)self - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x3E5C */
void virtual_thunk_to_DiamondDerived_DiamondDerived_destructor(DiamondDerived *self)
{
 DiamondDerived_DiamondDerived_destructor((DiamondDerived *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 16)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x3E72 */
void DiamondDerived_DiamondDerived_destructor_0(DiamondDerived *self)
{
 DiamondDerived_DiamondDerived_destructor(self);
 operator_delete(self, 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x3EAB */
void non_virtual_thunk_to_DiamondDerived_DiamondDerived_destructor_0(DiamondDerived *self)
{
 DiamondDerived_DiamondDerived_destructor((DiamondDerived *)((char *)self - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x3EB6 */
void virtual_thunk_to_DiamondDerived_DiamondDerived_destructor_0(DiamondDerived *self)
{
 DiamondDerived_DiamondDerived_destructor((DiamondDerived *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 16)));
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x3ECA */
void MultiDerived_MultiDerived_destructor(MultiDerived *self)
{
 *(void **)self = &off_8D3C;
 *((void **)self + 2) = &off_8D54;
 BaseB_BaseB_destructor((MultiDerived *)((char *)self + 8));
 BaseA_BaseA_destructor(self);
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x3F19 */
void non_virtual_thunk_to_MultiDerived_MultiDerived_destructor(MultiDerived *self)
{
 MultiDerived_MultiDerived_destructor((MultiDerived *)((char *)self - 8));
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x3F24 */
void MultiDerived_MultiDerived_destructor_0(MultiDerived *self)
{
 MultiDerived_MultiDerived_destructor(self);
 operator_delete(self, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x3F5D */
void non_virtual_thunk_to_MultiDerived_MultiDerived_destructor_0(MultiDerived *self)
{
 MultiDerived_MultiDerived_destructor((MultiDerived *)((char *)self - 8));
}


/* Function: _ZN7DerivedD2Ev @ 0x3F68 */
void Derived_Derived_destructor(Derived *self)
{
 *(void **)self = &off_8D90;
 Base_Base_destructor(self);
}


/* Function: _ZN7DerivedD0Ev @ 0x3F9A */
void Derived_Derived_destructor_0(Derived *self)
{
 Derived_Derived_destructor(self);
 operator_delete(self, 8u);
}


/* Function: __x86.get_pc.thunk.ax @ 0x3FD3 */
void *_x86_get_pc_thunk_ax(void)
{
 void *retaddr;
 __asm__ volatile ("movl %%ebp, %0" : "=r"(retaddr));
 return retaddr;
}


/* Function: __x86.get_pc_thunk.si @ 0x3FD7 */
void _x86_get_pc_thunk_si()
{
 __asm__ volatile ("");
}


/* Function: __stack_chk_fail_local @ 0x3FE0 */
void _stack_chk_fail_local()
{
 __asm__ volatile ("add ebx, (offset _GLOBAL_OFFSET_TABLE_ - $)");
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x404C */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: _Znwj @ 0x9030 */

/* FAILED to decompile: __cxa_finalize @ 0x9034 */

/* FAILED to decompile: __cxa_begin_catch @ 0x9038 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x903C */

/* FAILED to decompile: strlen @ 0x9040 */

/* FAILED to decompile: __cxa_atexit @ 0x9044 */

/* FAILED to decompile: _ZdlPvj @ 0x9048 */

/* FAILED to decompile: strcmp @ 0x9050 */

/* FAILED to decompile: __libc_start_main @ 0x9054 */

/* FAILED to decompile: _Znaj @ 0x9058 */

/* FAILED to decompile: strncpy @ 0x905C */

/* FAILED to decompile: __cxa_bad_typeid @ 0x9060 */

/* FAILED to decompile: __stack_chk_fail @ 0x9064 */

/* FAILED to decompile: __dynamic_cast @ 0x9068 */

/* FAILED to decompile: _ZdaPv @ 0x906C */

/* FAILED to decompile: __cxa_throw_bad_array_new_length @ 0x9074 */

/* FAILED to decompile: printf @ 0x9078 */

/* FAILED to decompile: __cxa_rethrow @ 0x907C */

/* FAILED to decompile: puts @ 0x9080 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x9084 */

/* FAILED to decompile: __cxa_end_catch @ 0x9088 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x908C */

/* FAILED to decompile: __cxa_throw @ 0x9090 */

/* FAILED to decompile: _Unwind_Resume @ 0x9098 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x909C */

/* Total functions decompiled: 235, failed: 25 */
