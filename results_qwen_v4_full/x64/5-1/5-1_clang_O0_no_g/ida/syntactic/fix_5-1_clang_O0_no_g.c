/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_clang_O0_no_g
 * Processor: pc
 */

#include <string.h>
#include <stdio.h>

/* Global declarations for runtime symbols */
extern void *_gmon_start__;
extern void *_dso_handle;
extern int __cxa_atexit(void (*)(void *), void *, void *);
extern void *__cxa_allocate_exception(unsigned long size);
extern void __cxa_throw(void *exception, void *tinfo, void *dest);
extern void *__cxa_begin_catch(void *exception);
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);
extern void __cxa_bad_typeid(void);
extern unsigned char _ZSt8__ioinit;

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

/* Typeinfo declarations for RTTI */
extern unsigned long long typeinfo_for_RTTIBase;
extern unsigned long long typeinfo_for_RTTIDerivedA;
extern unsigned long long typeinfo_for_RTTIDerivedB;

/* Vtable declarations */
extern unsigned long long off_8878;
extern unsigned long long off_88B8;
extern unsigned long long off_8900;
extern unsigned long long off_8930;
extern unsigned long long off_89B0;
extern unsigned long long off_89D8;
extern unsigned long long off_8A08;
extern unsigned long long off_8A38;
extern unsigned long long off_8A70;
extern unsigned long long off_8C38;
extern unsigned long long off_8D50;
extern unsigned long long off_8D78;
extern unsigned long long off_8DA0;

/* Typeinfo operator declaration */
long long type_info_operator_eq(unsigned long long a1, unsigned long long a2);

/* Dynamic cast declaration */
void *__dynamic_cast(void *obj, const void *src_type, const void *dst_type, unsigned long flags);

/* Class definitions */
struct SimpleClass {
  unsigned int value;
  char name[32];
};

struct LifecycleClass {
  unsigned long long *data;
  unsigned long long size;
};
extern unsigned int LifecycleClass_instance_count;

struct Base {
  unsigned long long *vtable;
};

struct Derived {
  unsigned long long *vtable;
  unsigned int value;
};

struct BaseA {
  unsigned long long *vtable;
};

struct BaseB {
  unsigned long long *vtable;
};

struct MultiDerived {
  unsigned long long *vtable;
  unsigned long long *vtable2;
};

struct VirtualBase {
  unsigned long long *vtable;
};

struct MiddleA {
  unsigned long long *vtable;
};

struct MiddleB {
  unsigned long long *vtable;
};

struct DiamondDerived {
  unsigned long long *vtable;
  unsigned long long *vtable2;
  unsigned long long *vtable3;
  unsigned long long *vtable4;
};

struct Point {
  unsigned int x;
  unsigned int y;
};

struct RTTIBase {
  unsigned long long *vtable;
};

struct RTTIDerivedA {
  unsigned long long *vtable;
};

struct RTTIDerivedB {
  unsigned long long *vtable;
};

/* Type definitions */
typedef unsigned char _BOOL8;

/* type_info structure for RTTI */
typedef struct type_info {
  unsigned long long vtable;
  const char *name;
} type_info;

/* Macro definitions */
#define HIDWORD(x) ((unsigned int)((unsigned long long)(x) >> 32))

/* Forward declarations for class methods */
void SimpleClass_init(SimpleClass *thiz, int a2, const char *a3);
SimpleClass * setValue(SimpleClass *thiz, int a2);
long long getValue(SimpleClass *thiz);
long long compute(SimpleClass *thiz, int a2);
long long getClassID(SimpleClass *thiz);

/* Forward declarations for RTTI class methods */
long long RTTIDerivedA_derivedA_data(RTTIDerivedA *thiz);
long long RTTIDerivedB_derivedB_data(RTTIDerivedB *thiz);

/* type_info name function */
long long type_info_name(type_info *thiz);

void LifecycleClass_init(LifecycleClass *thiz, unsigned long long a2);
long long getData(LifecycleClass *thiz, unsigned long long a2);
long long getInstanceCount(LifecycleClass *thiz);
void LifecycleClass_destroy(LifecycleClass *thiz);

void Base_init(Base *thiz);
void Derived_init(Derived *thiz, int a2);
void Base_destroy(Base *thiz);
void Derived_destroy(Derived *thiz);
long long Base_virtual_func(Base *thiz, int a2);
long long Derived_virtual_func(Derived *thiz, int a2);

void MultiDerived_init(MultiDerived *thiz);
void MultiDerived_destroy(MultiDerived *thiz);

void BaseA_init(BaseA *thiz);
void BaseA_init_2(BaseA *thiz, unsigned long long *a2);
void BaseB_init(BaseB *thiz);
void BaseB_init_2(BaseB *thiz, unsigned long long *a2);
void BaseA_destroy(BaseA *thiz);
void BaseB_destroy(BaseB *thiz);

void VirtualBase_init(VirtualBase *thiz);
void MiddleA_init(MiddleA *thiz, unsigned long long *a2);
void MiddleB_init(MiddleB *thiz, unsigned long long *a2);
void VirtualBase_destroy(VirtualBase *thiz);
void MiddleA_destroy(MiddleA *thiz);
void MiddleB_destroy(MiddleB *thiz);

void DiamondDerived_init(DiamondDerived *thiz);
void DiamondDerived_destroy(DiamondDerived *thiz);

void Point_init(Point *thiz, int a2, int a3);
long long Point_operator_add(unsigned int *a1, unsigned int *a2);
_BOOL8 Point_operator_eq(unsigned int *a1, unsigned int *a2);
void Point_operator_inc(unsigned int *a1);

void RTTIBase_init(RTTIBase *thiz);
void RTTIDerivedA_init(RTTIDerivedA *thiz);
void RTTIDerivedB_init(RTTIDerivedB *thiz);
void RTTIBase_destroy(RTTIBase *thiz);
void RTTIDerivedA_destroy(RTTIDerivedA *thiz);
void RTTIDerivedB_destroy(RTTIDerivedB *thiz);

/* Forward declarations for Container class methods */
void Container_int_Container(unsigned char *thiz);
void Container_int_push(unsigned char *thiz, int value);
int Container_int_get(unsigned char *thiz, int index);
int Container_int_getSize(unsigned char *thiz);

void Container_double_Container(unsigned char *thiz);
void Container_double_push(unsigned char *thiz, double value);
double Container_double_get(unsigned char *thiz, int index);
int Container_double_getSize(unsigned char *thiz);

/* Forward declarations for unique_ptr helper functions */
long long unique_ptr_int_init_default(long long a1, long long a2);
long long unique_ptr_int_deref(long long a1);
long long unique_ptr_int_move(long long a1);
long long unique_ptr_int_init(long long a1, long long a2);
long long unique_ptr_int_array_init(long long a1, long long a2);
long long unique_ptr_int_array_index(long long a1, long long a2);
long long unique_ptr_int_array_destroy(long long a1);
long long unique_ptr_int_destroy(long long a1);
long long unique_ptr_int_custom_init(long long a1, long long a2, long long a3);
long long unique_ptr_int_custom_deref(long long a1);
long long unique_ptr_int_custom_destroy(long long a1);
long long unique_ptr_int_custom_deref_2(long long a1);
long long unique_ptr_int_destroy_2(long long a1);
long long ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(long long a1, long long a2, long long a3);
long long uniq_ptr_impl_custom_M_ptr(long long a1);
long long unique_ptr_int_custom_get_deleter(long long a1);
long long move_int_ptr(unsigned long long *a1);
long long uniq_ptr_impl_custom_M_ptr(long long a1);
void test_cpp_smart_ptr_deleter(long long a1, unsigned int *a2);
long long ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(long long a1, long long a2);
long long std_unique_ptr_int_get(long long a1);
long long std__uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_data(long long a1, long long a2);
long long ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(long long a1, long long a2);
long long std_unique_ptr_int_array_get(long long a1);
long long std__uniq_ptr_impl_int_std_default_delete_int_array__M_ptr(long long a1);
long long std_unique_ptr_int_array_get_deleter(long long a1);
void std_default_delete_int_array_operator_int(long long a1, void *a2);
long long std__uniq_ptr_impl_int_std_default_delete_int__M_ptr(long long a1);
long long std_unique_ptr_int_get_deleter(long long a1);
void std_default_delete_int_operator(long long a1, void *a2);

/* Forward declarations for std helper functions */
long long std_forward(long long a1);
long long std_tuple_tuple(long long a1, long long a2, long long a3);
long long std_tuple_int_ptr_std_default_delete_int_tuple_2(long long a1, long long a2);
long long std_Tuple_impl__Tuple_impl(long long a1, long long a2, long long a3);
long long std_Tuple_impl__Tuple_impl_1(long long a1, long long a2);
long long std_Head_base__Head_base(long long a1, long long a2);
long long std_Head_base__Head_base_1(long long a1, long long a2);
long long std___uniq_ptr_impl___uniq_ptr_impl(long long a1, long long a2, long long a3);
long long std___uniq_ptr_impl___uniq_ptr_impl_1(long long a1, long long a2, long long a3);
long long std_get(long long a1);
long long std___uniq_ptr_impl__M_deleter(long long a1);
long long std___get_helper(long long a1);
long long std_Tuple_impl__M_head(long long a1);
long long std_Head_base__M_head(long long a1);
long long std_get_1(long long a1);
long long std___get_helper_1(long long a1);
long long std_Tuple_impl__M_head_1(long long a1);
long long std_Head_base__M_head_1(long long a1);
long long std___get_helper_2(long long a1);
long long std_Tuple_impl__M_head_2(long long a1);
long long std_Head_base__M_head_2(long long a1);
long long std__uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl(long long a1, long long a2);
long long std_move_tuple_int_ptr_std_default_delete_int(long long a1);
long long std_Tuple_impl_0ul_int_ptr_std_default_delete_int__Tuple_impl_2(long long a1);
unsigned long long * std_Head_base_0ul_int_ptr_false__Head_base_3(unsigned long long *a1);
long long std_Head_base_0ul_int_ptr_false__Head_base(long long a1, long long a2);
long long std_Head_base_1ul_std_default_delete_int_true__Head_base(long long a1);
long long std__uniq_ptr_impl_int_std_default_delete_int__M_deleter_3(void);
long long std_Tuple_impl_1ul_std_default_delete_int__Tuple_impl_2(long long a1);
long long std_Head_base_1ul_std_default_delete_int_true__M_head(long long a1);
long long std__uniq_ptr_impl_int_std_default_delete_int__M_ptr_4(void);
long long std__get_helper_0ul_int_ptr_std_default_delete_int_2(long long a1);
long long std_Tuple_impl_0ul_int_ptr_std_default_delete_int__M_head_2(long long a1);
long long std_Head_base_0ul_int_ptr_false__M_head_2(long long a1);
long long std_tuple_int_ptr_std_default_delete_int_tuple_true_true(void);
long long std__get_helper_0ul_int_ptr_std_default_delete_int(long long a1);
long long std_Tuple_impl_0ul_int_ptr_std_default_delete_int__M_head(long long a1);
long long std_Head_base_0ul_int_ptr_false__M_head(long long a1);
long long std__uniq_ptr_impl_int_std_default_delete_int__M_ptr(long long a1);
long long std_get_0ul_int_ptr_std_default_delete_int(long long a1);
long long std_get_1ul_int_ptr_std_default_delete_int(long long a1);
long long std__get_helper_1ul_std_default_delete_int(long long a1);
long long std_Tuple_impl_1ul_std_default_delete_int__M_head(long long a1);
long long std_Tuple_impl_0ul_int_ptr_std_default_delete_int__Tuple_impl(unsigned long long *a1, unsigned long long *a2);
long long std_Tuple_impl_1ul_std_default_delete_int__Tuple_impl(void);
long long std__get_helper_0ul_int_ptr_std_default_delete_int_2(long long a1);
long long std_tuple_int_ptr_std_default_delete_int_array_tuple_true_true(void);
long long std_Tuple_impl_0ul_int_ptr_std_default_delete_int_array__Tuple_impl_2(unsigned long long *a1);
long long std_Head_base_0ul_int_ptr_false__Head_base_2(unsigned long long *a1);
long long std_Head_base_1ul_std_default_delete_int_array_true__Head_base(long long a1);
long long std_get_0ul_int_ptr_std_default_delete_int_array(long long a1);
long long std__get_helper_0ul_int_ptr_std_default_delete_int_array(long long a1);
long long std_Tuple_impl_0ul_int_ptr_std_default_delete_int_array__M_head(long long a1);
long long std_Head_base_0ul_int_ptr_false__M_head_3(long long a1);
long long std__uniq_ptr_impl_int_std_default_delete_int_array__M_deleter_3(void);
long long std_get_1ul_int_ptr_std_default_delete_int_array(long long a1);
long long std__get_helper_1ul_std_default_delete_int_array(long long a1);
long long std_Tuple_impl_1ul_std_default_delete_int_array__M_head(long long a1);
long long std_Head_base_1ul_std_default_delete_int_array_true__M_head(long long a1);
long long std__uniq_ptr_impl_int_std_default_delete_int_array__M_ptr_4(void);
long long std__get_helper_0ul_int_ptr_std_default_delete_int_array_2(long long a1);
long long std_Tuple_impl_0ul_int_ptr_std_default_delete_int_array__M_head_2(long long a1);
long long std_Head_base_0ul_int_ptr_false__M_head_4(long long a1);
long long std_Head_base_0ul_int_ptr_false__Head_base_int_ptr(unsigned long long *a1, long long a2);
long long std_Tuple_impl_1ul_std_default_delete_int_array__Tuple_impl_2(long long a1);
unsigned long long * std_Head_base_0ul_int_ptr_false__Head_base_3(unsigned long long *a1);
long long std__uniq_ptr_impl_int_std_default_delete_int_array___uniq_ptr_impl(long long a1, long long a2);

/* Operator new/delete declarations */
void *operator new(unsigned long size);
void operator delete(void *ptr);
void *operator new[](unsigned long size);
void operator delete[](void *ptr);

/* C++ runtime declarations */
extern void terminate(void);

/* Template function declarations - implemented as regular functions */
long long template_max_int(unsigned int a1, unsigned int a2);
double template_max_double(double a1, double a2);
int *template_swap_int(int *a1, int *a2);

/* Container class methods already declared above */

/* Macro definitions */
#define JUMPOUT(x) return

/* Function: .init_proc @ 0x2000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = (long long (**)(void))&_gmon_start__;
 if ( &_gmon_start__ )
 return (long long (**)(void))((long long (*)(void))_gmon_start__)();
 return result;
}


/* Function: sub_2020 @ 0x2020 */
void sub_2020()
{
 JUMPOUT(0);
}


/* Function: __cxx_global_var_init @ 0x2180 */
int _cxx_global_var_init()
{
 return __cxa_atexit((void (*)(void *))0, (void *)&_ZSt8__ioinit, &_dso_handle);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x21B0 */
int GLOBAL__sub_I_5_1_cpp()
{
 return _cxx_global_var_init();
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x22B0 */
long long test_cpp_member_func(void)
{
 int v1; // [rsp+10h] [rbp-30h]
 int Value; // [rsp+14h] [rbp-2Ch]
 unsigned char v3[40]; // [rsp+18h] [rbp-28h] BYREF

 SimpleClass_init((SimpleClass *)v3, 5, "Test");
 setValue((SimpleClass *)v3, 10);
 Value = getValue((SimpleClass *)v3);
 v1 = compute((SimpleClass *)v3, 3);
 return (unsigned int)getClassID((SimpleClass *)v3) + v1 + Value;
}


/* Function: _Z20test_cpp_constructorv @ 0x2310 */
long long test_cpp_constructor(void)
{
 int v0; // eax
 int InstanceCount; // [rsp+Ch] [rbp-34h]
 int Data; // [rsp+18h] [rbp-28h]
 unsigned char v4[20]; // [rsp+28h] [rbp-18h] BYREF
 int v5; // [rsp+3Ch] [rbp-4h]

 v5 = 0;
 LifecycleClass_init((LifecycleClass *)v4, 5u);
 Data = getData((LifecycleClass *)v4, 2u);
 v5 += Data;
 InstanceCount = getInstanceCount((LifecycleClass *)v4);
 v5 += InstanceCount;
 LifecycleClass_destroy((LifecycleClass *)v4);
 v0 = getInstanceCount((LifecycleClass *)v4);
 return (unsigned int)(v5 + 1000 * v0);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x23B0 */
long long call_virtual_func(Base *a1, unsigned int a2)
{
 return (**(long long ( ***)(Base *, unsigned long long))a1)(a1, a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x23E0 */
long long test_cpp_virtual_func(void)
{
 unsigned int v1; // [rsp+4h] [rbp-5Ch]
 int v2; // [rsp+1Ch] [rbp-44h]
 int v3; // [rsp+34h] [rbp-2Ch]
 int v4; // [rsp+38h] [rbp-28h]
 unsigned char v5[16]; // [rsp+48h] [rbp-18h] BYREF
 unsigned char v6[8]; // [rsp+58h] [rbp-8h] BYREF

 Base_init((Base *)v6);
 Derived_init((Derived *)v5, 3);
 v4 = Base_virtual_func((Base *)v6, 5);
 v3 = Derived_virtual_func((Derived *)v5, 5);
 v2 = call_virtual_func((Base *)v6, 5u);
 v1 = call_virtual_func((Base *)v5, 5u) + v2 + v3 + v4;
 Derived_destroy((Derived *)v5);
 Base_destroy((Base *)v6);
 return v1;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x24F0 */
long long test_cpp_multiple_inheritance(void)
{
 unsigned long long *v1; // [rsp+18h] [rbp-58h]
 int v2; // [rsp+28h] [rbp-48h]
 int v3; // [rsp+3Ch] [rbp-34h]
 long long ( **v4)(MultiDerived *); // [rsp+50h] [rbp-20h] BYREF
 int v5; // [rsp+58h] [rbp-18h]
 unsigned int v6[4]; // [rsp+60h] [rbp-10h] BYREF

 MultiDerived_init((MultiDerived *)&v4);
 v5 = 100;
 v6[2] = 200;
  v1 = 0;
  if ( &v4 )
    v1 = (unsigned long long *)v6;
 v3 = (*v4)((MultiDerived *)&v4);
 v2 = (*(long long ( **)(unsigned long long *))*v1)(v1);
 MultiDerived_destroy((MultiDerived *)&v4);
 return (unsigned int)((long long)v4 != (long long)v1) + v2 + v3;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x25D0 */
long long test_cpp_diamond_inheritance(void)
{
 unsigned int v1; // [rsp+Ch] [rbp-64h]
 long long ( ***v2)(unsigned long long); // [rsp+18h] [rbp-58h]
 int v3; // [rsp+34h] [rbp-3Ch]
 unsigned long long v4[6]; // [rsp+40h] [rbp-30h] BYREF

 DiamondDerived_init((DiamondDerived *)v4);
 *(unsigned int *)((char *)&v4[1] + *(unsigned long long *)(v4[0] - 24LL)) = 50;
  v2 = 0;
  if ( v4 )
    v2 = (long long ( ***)(unsigned long long))((char *)v4 + *(unsigned long long *)(v4[0] - 24LL));
  v3 = (**v2)((unsigned long long)v2);
  *(unsigned int *)((char *)&v4[1] + *(unsigned long long *)(v4[0] - 24LL)) = 100;
  v1 = (**v2)((unsigned long long)v2) + v3;
 DiamondDerived_destroy((DiamondDerived *)v4);
 return v1;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x26A0 */
long long test_cpp_operator_overload(void)
{
 int v0; // ecx
 char v2; // [rsp+7h] [rbp-19h]
 long long v3; // [rsp+8h] [rbp-18h] BYREF
 unsigned char v4[8]; // [rsp+10h] [rbp-10h] BYREF
 unsigned char v5[8]; // [rsp+18h] [rbp-8h] BYREF

 Point_init((Point *)v5, 1, 2);
 Point_init((Point *)v4, 3, 4);
 v3 = Point_operator_add((unsigned int *)v5, (unsigned int *)v4);
 v2 = Point_operator_eq((unsigned int *)v5, (unsigned int *)v4) & 1;
 Point_operator_inc((unsigned int *)&v3);
 v0 = 10;
 if ( (v2 & 1) != 0 )
 v0 = 0;
 return (unsigned int)(v0 + HIDWORD(v3) + v3);
}


/* Function: _Z22test_cpp_template_funcv @ 0x2720 */
long long test_cpp_template_func(void)
{
 int v1; // [rsp+8h] [rbp-18h] BYREF
 int v2; // [rsp+Ch] [rbp-14h] BYREF
 double v3; // [rsp+10h] [rbp-10h]
 int v4; // [rsp+1Ch] [rbp-4h]

 v4 = template_max_int(3, 7);
 v3 = template_max_double(2.5, 1.5);
 v2 = 10;
 v1 = 20;
 template_swap_int(&v2, &v1);
 return (unsigned int)(v1 + v2 + (int)v3 + v4);
}


/* Function: _Z23test_cpp_template_classv @ 0x2790 */
long long test_cpp_template_class(void)
{
 double v1; // [rsp+8h] [rbp-98h]
 unsigned char v2[88]; // [rsp+10h] [rbp-90h] BYREF
 int Size; // [rsp+68h] [rbp-38h]
 int v4; // [rsp+6Ch] [rbp-34h]
 unsigned char v5[48]; // [rsp+70h] [rbp-30h] BYREF

 Container_int_Container(v5);
 Container_int_push(v5, 10);
 Container_int_push(v5, 20);
 Container_int_push(v5, 30);
 v4 = Container_int_get(v5, 0);
 Size = Container_int_getSize(v5);
 Container_double_Container(v2);
 Container_double_push(v2, 3.14);
 v1 = Container_double_get(v2, 0);
 return (unsigned int)((int)v1 + Size + v4);
}


/* Forward declarations for lambda functions */
long long test_cpp_lambda_ZZ15test_cpp_lambdavENK3$_1clEi(long long a1, int a2);
long long test_cpp_lambda_ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_(long long a1, int a2, int a3);

/* Function: _Z15test_cpp_lambdav @ 0x2840 */
long long test_cpp_lambda(void)
{
 int v1; // [rsp+Ch] [rbp-24h]
 unsigned char v2[8]; // [rsp+10h] [rbp-20h] BYREF
 int v3; // [rsp+18h] [rbp-18h] BYREF
 unsigned int *v4; // [rsp+20h] [rbp-10h]
 unsigned int v5[2]; // [rsp+28h] [rbp-8h] BYREF

 v5[1] = 10;
 v5[0] = 20;
  v3 = 10;
  v4 = (unsigned int *)v5;
  v1 = test_cpp_lambda_ZZ15test_cpp_lambdavENK3$_1clEi((long long)&v3, 3);
  return (unsigned int)test_cpp_lambda_ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_((long long)v2, 10, 20) + v1;
}


/* Function: _ZZ15test_cpp_lambdavENK3$_1clEi @ 0x28A0 */
long long test_cpp_lambda_ZZ15test_cpp_lambdavENK3$_1clEi(long long a1, int a2)
{
 **(unsigned int **)(a1 + 8) += 5;
 return (unsigned int)(**(unsigned int **)(a1 + 8) + *(unsigned int *)a1 * a2);
}


/* Function: _ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_ @ 0x28D0 */
long long test_cpp_lambda_ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_(long long a1, int a2, int a3)
{
 return (unsigned int)(a3 + a2);
}


/* Function: _Z18test_cpp_exceptionv @ 0x28F0 */
void test_cpp_exception(void)
{
 unsigned int *exception; // rdi

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, 0, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x2A50 */
long long test_cpp_smart_ptr(void)
{
 long long v0; // rax
 unsigned int *v1; // rsi
 unsigned int v3; // [rsp+4h] [rbp-9Ch]
 unsigned int *v4; // [rsp+10h] [rbp-90h]
 unsigned int *v5; // [rsp+18h] [rbp-88h]
 unsigned char v6[8]; // [rsp+60h] [rbp-40h] BYREF
 unsigned char v7[4]; // [rsp+68h] [rbp-38h] BYREF
 int v8; // [rsp+6Ch] [rbp-34h]
 unsigned char v9[12]; // [rsp+70h] [rbp-30h] BYREF
 int v10; // [rsp+7Ch] [rbp-24h]
 unsigned char v11[12]; // [rsp+80h] [rbp-20h] BYREF
 unsigned char v12[8]; // [rsp+98h] [rbp-8h] BYREF

  *(unsigned int *)operator new(4u) = 100;
  unique_ptr_int_init_default((long long)v12, 0);
  *(unsigned int *)unique_ptr_int_deref((long long)v12) = 200;
  v0 = unique_ptr_int_move((long long)v12);
  unique_ptr_int_init((long long)v11, v0);
  v10 = *(unsigned int *)unique_ptr_int_custom_deref_2((long long)v11);
  v1 = (unsigned int *)operator new[](0x14u);
  *v1 = 1;
  v1[1] = 2;
  v1[2] = 3;
  v1[3] = 4;
  v1[4] = 5;
  unique_ptr_int_array_init((long long)v9, (long long)v1);
  v8 = *(unsigned int *)unique_ptr_int_array_index((long long)v9, 2);
 v5 = (unsigned int *)operator new(4u);
 *v5 = 500;
 unique_ptr_int_custom_init((long long)v6, (long long)v5, (long long)v7);
 v4 = (unsigned int *)unique_ptr_int_custom_deref((long long)v6);
  v3 = *v4 + v8 + v10;
  unique_ptr_int_custom_destroy((long long)v6);
  unique_ptr_int_array_destroy((long long)v9);
  unique_ptr_int_destroy((long long)v11);
  unique_ptr_int_destroy((long long)v12);
 return v3;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EC2IS0_vEEPiRKS0_ @ 0x2C40 */
long long unique_ptr_int_custom_init_wrapper()
{
 return ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(0, 0, 0);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EdeEv @ 0x2C80 */
long long unique_ptr_int_custom_deref_wrapper(long long a1)
{
 return unique_ptr_int_custom_deref(a1);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev @ 0x2CB0 */
unsigned long long * unique_ptr_int_custom_destroy_wrapper(long long a1)
{
 unsigned long long *v1; // rax
 unsigned long long *result; // rax
 long long deleter; // [rsp+8h] [rbp-28h]
 unsigned long long *v4; // [rsp+20h] [rbp-10h]

 v4 = (unsigned long long *)uniq_ptr_impl_custom_M_ptr(a1);
 if ( *v4 )
 {
 deleter = unique_ptr_int_custom_get_deleter(a1);
 v1 = (unsigned long long *)move_int_ptr(v4);
 test_cpp_smart_ptr_deleter(deleter, (unsigned int *)v1);
 }
 result = v4;
 *v4 = 0;
 return result;
}


/* Function: _Z13test_cpp_rttiv @ 0x2D30 */
long long test_cpp_rtti(void)
{
 const char *v0; // rax
 RTTIDerivedB *v2; // [rsp+18h] [rbp-68h]
 RTTIDerivedA *v3; // [rsp+28h] [rbp-58h]
 RTTIDerivedA *v4; // [rsp+40h] [rbp-40h]
 RTTIDerivedB *v5; // [rsp+48h] [rbp-38h]
 int v6; // [rsp+6Ch] [rbp-14h]
 unsigned int v7; // [rsp+6Ch] [rbp-14h]

 v4 = (RTTIDerivedA *)operator new(8u);
 memset(v4, 0, 8u);
 RTTIDerivedA_init(v4);
 v5 = (RTTIDerivedB *)operator new(8u);
 memset(v5, 0, 8u);
 RTTIDerivedB_init(v5);
 v6 = 0;
  if ( !v4 )
  __cxa_bad_typeid();
  if ( (type_info_operator_eq(*(unsigned long long *)(*(unsigned long long *)v4 - 8LL), (unsigned long long)typeinfo_for_RTTIDerivedA) & 1) != 0 )
  v6 = 10;
  if ( !v5 )
  __cxa_bad_typeid();
  if ( (type_info_operator_eq(*(unsigned long long *)(*(unsigned long long *)v5 - 8LL), (unsigned long long)typeinfo_for_RTTIDerivedB) & 1) != 0 )
 v6 += 20;
 v3 = (RTTIDerivedA *)__dynamic_cast(
 v4,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0);
 if ( v3 )
 v6 += RTTIDerivedA_derivedA_data(v3);
 v2 = (RTTIDerivedB *)__dynamic_cast(
 v5,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0);
 if ( v2 )
 v6 += RTTIDerivedB_derivedB_data(v2);
  v0 = (const char *)type_info_name((type_info *)(*(unsigned long long *)v4 - 8LL));
 v7 = strlen(v0) + v6;
 RTTIDerivedA_destroy(v4);
 RTTIDerivedB_destroy(v5);
 return v7;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x2F70 */
void test_cpp_oo_features(void)
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

 printf("Testing C++ OO features:\n");
 v0 = test_cpp_member_func();
 printf("Cpp member func result: %d\n", v0);
 v1 = test_cpp_constructor();
 printf("Cpp constructor result: %d\n", v1);
 v2 = test_cpp_virtual_func();
 printf("Cpp virtual func result: %d\n", v2);
 v3 = test_cpp_multiple_inheritance();
 printf("Cpp multiple inheritance result: %d\n", v3);
 v4 = test_cpp_diamond_inheritance();
 printf("Cpp diamond inheritance result: %d\n", v4);
 v5 = test_cpp_operator_overload();
 printf("Cpp operator overload result: %d\n", v5);
 v6 = test_cpp_template_func();
 printf("Cpp template func result: %d\n", v6);
 v7 = test_cpp_template_class();
 printf("Cpp template class result: %d\n", v7);
 v8 = test_cpp_lambda();
 printf("Cpp lambda result: %d\n", v8);
 test_cpp_exception();
}


/* Function: main @ 0x3080 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3$_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_ @ 0x30A0 */
long long ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
 long long a1,
 long long a2,
 long long a3)
{
 return std___uniq_ptr_impl___uniq_ptr_impl_1(a1, a2, a3);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2EC2IRKS0_EEPiOT_ @ 0x30D0 */
long long std___uniq_ptr_impl___uniq_ptr_impl_1(
 long long a1,
 long long a2,
 long long a3)
{
 long long v3; // rax
 unsigned long long v5[2]; // [rsp+10h] [rbp-10h] BYREF

 v5[1] = a1;
 v5[0] = a2;
 v3 = std_forward(a3);
 return std_tuple_tuple(a1, v5[0], v3);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE @ 0x3110 */
long long std_forward(long long a1)
{
 return a1;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x3120 */
long long std_tuple_tuple(
 long long a1,
 long long a2,
 long long a3)
{
 long long v3; // rdx
 long long v5; // [rsp+10h] [rbp-20h]

 v5 = std_forward(a2);
 v3 = std_forward(a3);
 return std_Tuple_impl__Tuple_impl(a1, v5, v3);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x3180 */
long long std_Tuple_impl__Tuple_impl(
 long long a1,
 long long a2,
 long long a3)
{
 long long v3; // rax
 long long v4; // rax

 v3 = std_forward(a3);
 std_Tuple_impl__Tuple_impl_1(a1, v3);
 v4 = std_forward(a2);
 return std_Head_base__Head_base(a1, v4);
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EEC2ERKS0_ @ 0x31E0 */
long long std_Tuple_impl__Tuple_impl_1(long long a1, long long a2)
{
 return std_Head_base__Head_base_1(a1, a2);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EEC2ERKS0_ @ 0x3210 */
void std_Head_base__Head_base_1(long long a1, long long a2)
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x3220 */
long long std___uniq_ptr_impl__M_ptr(long long a1)
{
 return std_get(a1);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E11get_deleterEv @ 0x3240 */
long long std_unique_ptr_get_deleter(long long a1)
{
 return std___uniq_ptr_impl__M_deleter(a1);
}


/* Function: _ZZ18test_cpp_smart_ptrvENK3$_2clEPi @ 0x3270 */
void test_cpp_smart_ptr__2_operator(long long a1, unsigned int *a2)
{
 *a2 = -1;
 if ( a2 )
 operator delete(a2);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x32B0 */
long long std_get(long long a1)
{
 return std___get_helper(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x32D0 */
long long std___get_helper(long long a1)
{
 return std_Tuple_impl__M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS2_ @ 0x32F0 */
long long std_Tuple_impl__M_head(long long a1)
{
 return std_Head_base__M_head(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E10_M_deleterEv @ 0x3310 */
long long std___uniq_ptr_impl__M_deleter(long long a1)
{
 return std_get_1(a1);
}


/* Function: _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x3330 */
long long std_get_1(long long a1)
{
 return std___get_helper_1(a1);
}


/* Function: _ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvE3$_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE @ 0x3350 */
long long std___get_helper_1(long long a1)
{
 return std_Tuple_impl__M_head_1(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS1_ @ 0x3370 */
long long std_Tuple_impl__M_head_1(long long a1)
{
 return std_Head_base__M_head_1(a1);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EE7_M_headERS1_ @ 0x3390 */
long long std_Head_base__M_head_1(long long a1)
{
 return a1;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E3getEv @ 0x33A0 */
long long std_unique_ptr_get()
{
 return std___uniq_ptr_impl__M_ptr(0);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x33D0 */
long long std___uniq_ptr_impl__M_ptr_2(long long a1)
{
 return *(unsigned long long *)std_get(a1);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x33F0 */
long long std_get_2(long long a1)
{
 return std___get_helper_2(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x3410 */
long long std___get_helper_2(long long a1)
{
 return std_Tuple_impl__M_head_2(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERKS2_ @ 0x3430 */
long long std_Tuple_impl__M_head_2(long long a1)
{
 return std_Head_base__M_head_2(a1);
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x3450 */
void SimpleClass_init(SimpleClass *thiz, int a2, const char *a3)
{
 *(unsigned int *)thiz = a2;
 strncpy((char *)thiz + 4, a3, 0x1Fu);
 *((unsigned char *)thiz + 35) = 0;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x3490 */
SimpleClass * setValue(SimpleClass *thiz, int a2)
{
 SimpleClass *result; // rax

 result = thiz;
 *(unsigned int *)thiz = a2;
 return result;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x34B0 */
long long getValue(SimpleClass *thiz)
{
 return *(unsigned int *)thiz;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x34C0 */
long long compute(SimpleClass *thiz, int a2)
{
 long long v3; // [rsp+8h] [rbp-18h]

 v3 = a2 * *(unsigned int *)thiz;
 return strlen((const char *)thiz + 4) + v3;
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x3500 */
long long getClassID(SimpleClass *thiz)
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Em @ 0x3510 */
void LifecycleClass_init(LifecycleClass *thiz, unsigned long long a2)
{
 unsigned long long i; // [rsp+8h] [rbp-18h]

 *((unsigned long long *)thiz + 1) = a2;
 *(unsigned long long *)thiz = operator new[](4 * a2);
 for ( i = 0; i < a2; ++i )
 *(unsigned int *)(*(unsigned long long *)thiz + 4 * i) = 10 * i;
 ++LifecycleClass_instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEm @ 0x35B0 */
long long getData(LifecycleClass *thiz, unsigned long long a2)
{
 if ( a2 >= *((unsigned long long *)thiz + 1) )
 return (unsigned int)-1;
 else
 return *(unsigned int *)(*(unsigned long long *)thiz + 4 * a2);
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x3600 */
long long getInstanceCount(LifecycleClass *thiz)
{
 return (unsigned int)LifecycleClass_instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x3610 */
void LifecycleClass_destroy(void **thiz)
{
 if ( *thiz )
 operator delete[](*thiz);
 --LifecycleClass_instance_count;
}


/* Function: _ZN4BaseC2Ev @ 0x3650 */
void Base_init(Base *thiz)
{
 *(unsigned long long *)thiz = (unsigned long long)&off_8878;
}


/* Function: _ZN7DerivedC2Ei @ 0x3670 */
void Derived_Derived(Derived *thiz, int a2)
{
 Base_init((Base *)thiz);
 *(unsigned long long *)thiz = (unsigned long long)&off_88B8;
 *((unsigned int *)thiz + 2) = a2;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x36B0 */
long long Base_virtual_func(Base *thiz, int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x36D0 */
long long Derived_virtual_func(Derived *thiz, int a2)
{
 return (unsigned int)(*((unsigned int *)thiz + 2) * a2);
}


/* Function: _ZN7DerivedD2Ev @ 0x36F0 */
void Derived_destroy(Derived *thiz)
{
 Base_destroy_2((Base *)thiz);
}


/* Function: _ZN4BaseD2Ev @ 0x3710 */
void Base_destroy(Base *thiz)
{
 ;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x3720 */
void MultiDerived_init(MultiDerived *thiz)
{
 BaseA_init_2((BaseA *)thiz, (unsigned long long *)thiz);
 BaseB_init_2((BaseB *)((char *)thiz + 16), (unsigned long long *)((char *)thiz + 16));
 *(unsigned long long *)thiz = (unsigned long long)&off_8900;
 *((unsigned long long *)thiz + 2) = (unsigned long long)&off_8930;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x3770 */
void MultiDerived_destroy(MultiDerived *thiz)
{
 BaseB_destroy((MultiDerived *)((char *)thiz + 16));
 BaseA_destroy(thiz);
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x37A0 */
void DiamondDerived_init(DiamondDerived *thiz)
{
 VirtualBase_init((VirtualBase *)((char *)thiz + 32));
 MiddleA_init((MiddleA *)thiz, (unsigned long long *)thiz);
 MiddleB_init((MiddleB *)((char *)thiz + 16), (unsigned long long *)((char *)thiz + 16));
 *(unsigned long long *)thiz = (unsigned long long)&off_8A08;
 *((unsigned long long *)thiz + 4) = (unsigned long long)&off_8A70;
 *((unsigned long long *)thiz + 2) = (unsigned long long)&off_8A38;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x3830 */
void DiamondDerived_destroy(DiamondDerived *thiz)
{
 MiddleB_destroy((MiddleB *)((char *)thiz + 16));
 MiddleA_destroy((MiddleA *)thiz);
 VirtualBase_destroy((VirtualBase *)((char *)thiz + 32));
}


/* Function: _ZN5PointC2Eii @ 0x3870 */
void Point_init(Point *thiz, int a2, int a3)
{
 *(unsigned int *)thiz = a2;
 *((unsigned int *)thiz + 1) = a3;
}


/* Function: _ZNK5PointplERKS_ @ 0x3890 */
long long Point_operator_add(unsigned int *a1, unsigned int *a2)
{
 long long v3; // [rsp+18h] [rbp-8h] BYREF

 Point_init((Point *)&v3, *a2 + *a1, a2[1] + a1[1]);
 return v3;
}


/* Function: _ZNK5PointeqERKS_ @ 0x38D0 */
_BOOL8 Point_operator_eq(unsigned int *a1, unsigned int *a2)
{
 _BOOL8 v3; // [rsp+Fh] [rbp-11h]

 v3 = 0;
 if ( *a1 == *a2 )
 return a1[1] == a2[1];
 return v3;
}


/* Function: _ZN5PointppEv @ 0x3920 */
unsigned int * Point_operator_inc(unsigned int *a1)
{
 unsigned int *result; // rax

 result = a1;
 ++*a1;
 ++a1[1];
 return result;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x3940 */
long long template_max_int(unsigned int a1, unsigned int a2)
{
 if ( (int)a1 <= (int)a2 )
 return a2;
 else
 return a1;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x3970 */
double template_max_double(double a1, double a2)
{
 if ( a1 <= a2 )
 return a2;
 else
 return a1;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x39B0 */
int * template_swap_int(int *a1, int *a2)
{
 int *result; // rax
 int v3; // [rsp+0h] [rbp-14h]

 v3 = *a1;
 *a1 = *a2;
 result = a2;
 *a2 = v3;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x39E0 */
long long Container_int_Container(long long a1)
{
 long long result; // rax

 result = a1;
 *(unsigned int *)(a1 + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x3A00 */
long long Container_int_push(long long a1, int a2)
{
 long long result; // rax
 int v3; // ecx

 result = a1;
 if ( *(int *)(a1 + 40) < 10 )
 {
 result = a1;
 v3 = *(unsigned int *)(a1 + 40);
 *(unsigned int *)(a1 + 40) = v3 + 1;
 *(unsigned int *)(a1 + 4LL * v3) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x3A40 */
long long Container_int_get(long long a1, int a2)
{
 if ( a2 < 0 || a2 >= *(unsigned int *)(a1 + 40) )
 return 0;
 else
 return *(unsigned int *)(a1 + 4LL * a2);
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x3A90 */
long long Container_int_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x3AB0 */
long long Container_double_Container(long long a1)
{
 long long result; // rax

 result = a1;
 *(unsigned int *)(a1 + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x3AD0 */
long long Container_double_push(long long a1, double a2)
{
 long long result; // rax
 int v3; // ecx

 result = a1;
 if ( *(int *)(a1 + 80) < 10 )
 {
 result = a1;
 v3 = *(unsigned int *)(a1 + 80);
 *(unsigned int *)(a1 + 80) = v3 + 1;
 *(double *)(a1 + 8LL * v3) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x3B10 */
double Container_double_get(long long a1, int a2)
{
 if ( a2 < 0 || a2 >= *(unsigned int *)(a1 + 80) )
 return 0.0;
 else
 return *(double *)(a1 + 8LL * a2);
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x3B70 */
long long Container_double_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x3B90 */
long long std_unique_ptr_int_unique_ptr_default_delete_void(long long a1, long long a2)
{
 return ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(a1, a2);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x3BC0 */
long long std_unique_ptr_int_operator_deref(long long a1)
{
 return std_unique_ptr_int_get(a1);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x3BF0 */
long long std_move_unique_ptr_int(long long a1)
{
 return a1;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x3C00 */
long long std_unique_ptr_int_unique_ptr_2(long long a1, long long a2)
{
 return std__uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_data(a1, a2);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x3C30 */
long long std_unique_ptr_int_array_unique_ptr(long long a1, long long a2)
{
 return ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(a1, a2);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm @ 0x3C60 */
long long std_unique_ptr_int_array_operator_index(long long a1, long long a2)
{
 return 4 * a2 + std_unique_ptr_int_array_get(a1);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x3CA0 */
unsigned long long * std_unique_ptr_int_array_destroy(long long a1)
{
 long long deleter; // rdi
 unsigned long long *result; // rax
 unsigned long long *v3; // [rsp+10h] [rbp-10h]

 v3 = (unsigned long long *)std__uniq_ptr_impl_int_std_default_delete_int_array__M_ptr(0);
 if ( *v3 )
 {
 deleter = std_unique_ptr_int_array_get_deleter(a1);
 std_default_delete_int_array_operator_int(deleter, *v3);
 }
 result = v3;
 *v3 = 0;
 return result;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x3D10 */
unsigned long long * std_unique_ptr_int_destroy(long long a1)
{
 long long v1; // rsi
 unsigned long long *result; // rax
 long long deleter; // [rsp+0h] [rbp-20h]
 unsigned long long *v4; // [rsp+10h] [rbp-10h]

 v4 = (unsigned long long *)std__uniq_ptr_impl_int_std_default_delete_int__M_ptr(0);
 if ( *v4 )
 {
 deleter = std_unique_ptr_int_get_deleter(a1);
 v1 = *(unsigned long long *)move_int_ptr(v4);
 std_default_delete_int_operator(deleter, (void *)v1);
 }
 result = v4;
 *v4 = 0;
 return result;
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x3D80 */
void RTTIDerivedA_init(RTTIDerivedA *thiz)
{
 RTTIBase_init((RTTIBase *)thiz);
 *(unsigned long long *)thiz = (unsigned long long)off_8D50;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x3DC0 */
void RTTIDerivedB_init(RTTIDerivedB *thiz)
{
 RTTIBase_init((RTTIBase *)thiz);
 *(unsigned long long *)thiz = (unsigned long long)off_8DA0;
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x3E00 */
long long std_type_info_operator_eq(long long a1, long long a2)
{
 _BOOL8 v3; // [rsp+Fh] [rbp-21h]
 char v4; // [rsp+1Fh] [rbp-11h]

 v4 = 1;
 if ( *(unsigned long long *)(a1 + 8) != *(unsigned long long *)(a2 + 8) )
 {
 v3 = 0;
 if ( **(unsigned char **)(a1 + 8) != 42 )
 v3 = strcmp(*(const char **)(a1 + 8), *(const char **)(a2 + 8)) == 0;
 v4 = v3;
 }
 return v4 & 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x3E80 */
long long RTTIDerivedA_derivedA_data(RTTIDerivedA *thiz)
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x3E90 */
long long RTTIDerivedB_derivedB_data(RTTIDerivedB *thiz)
{
 return 200;
}


/* Function: _ZNKSt9type_info4nameEv @ 0x3EA0 */
long long std_type_info_name(type_info *thiz)
{
 if ( **((unsigned char **)thiz + 1) == 42 )
 return *((unsigned long long *)thiz + 1) + 1LL;
 else
 return *((unsigned long long *)thiz + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x3EF0 */
const char * Base_getName(Base *thiz)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x3F10 */
void Base_destroy_2(Base *thiz)
{
 Base_destroy(thiz);
 operator delete(thiz);
}


/* Function: _ZNK7Derived7getNameEv @ 0x3F40 */
const char * Derived_getName(Derived *thiz)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x3F60 */
void Derived_destroy_2(Derived *thiz)
{
 Derived_destroy(thiz);
 operator delete(thiz);
}


/* Function: _ZN5BaseAC2Ev @ 0x3F90 */
void BaseA_init(BaseA *thiz)
{
 *(unsigned long long *)thiz = (unsigned long long)&off_89B0;
}


/* Function: _ZN5BaseBC2Ev @ 0x3FB0 */
void BaseB_init(BaseB *thiz)
{
 *(unsigned long long *)thiz = (unsigned long long)&off_89D8;
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x3FD0 */
long long MultiDerived_funcA(MultiDerived *thiz)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x3FE0 */
void MultiDerived_destroy_2(MultiDerived *thiz)
{
 MultiDerived_destroy(thiz);
 operator delete(thiz);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x4010 */
long long MultiDerived_funcB(MultiDerived *thiz)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x4020 */
long long non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *thiz)
{
 return MultiDerived_funcB((MultiDerived *)((char *)thiz - 16));
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x4040 */
void non_virtual_thunk_to_MultiDerived_destroy(MultiDerived *thiz)
{
 MultiDerived_destroy((MultiDerived *)((char *)thiz - 16));
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x4060 */
void non_virtual_thunk_to_MultiDerived_destroy_2(MultiDerived *thiz)
{
 MultiDerived_destroy((MultiDerived *)((char *)thiz - 16));
}


/* Function: _ZN5BaseA5funcAEv @ 0x4080 */
long long BaseA_funcA(BaseA *thiz)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x4090 */
void BaseA_destroy(BaseA *thiz)
{
 ;
}


/* Function: BaseA_init_2 */
void BaseA_init_2(BaseA *thiz, unsigned long long *a2)
{
 unsigned long long *v2;
 v2 = a2;
 *(unsigned long long *)thiz = *v2;
 *(unsigned long long *)((char *)thiz + *(unsigned long long *)(*(unsigned long long *)thiz - 24LL)) = v2[1];
}


/* Function: BaseB_init_2 */
void BaseB_init_2(BaseB *thiz, unsigned long long *a2)
{
 unsigned long long *v2;
 v2 = a2;
 *(unsigned long long *)thiz = *v2;
 *(unsigned long long *)((char *)thiz + *(unsigned long long *)(*(unsigned long long *)thiz - 24LL)) = v2[1];
}


/* Function: Base_destroy_2 */
void Base_destroy_2(Base *thiz)
{
 ;
}


/* Function: _ZN5BaseAD0Ev @ 0x40A0 */
void BaseA_destroy_2(BaseA *thiz)
{
 BaseA_destroy(thiz);
 operator delete(thiz);
}


/* Function: _ZN5BaseB5funcBEv @ 0x40D0 */
long long BaseB_funcB(BaseB *thiz)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x40E0 */
void BaseB_destroy(BaseB *thiz)
{
 ;
}


/* Function: _ZN5BaseBD0Ev @ 0x40F0 */
void BaseB_destroy_2(BaseB *thiz)
{
 BaseB_destroy(thiz);
 operator delete(thiz);
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x4120 */
void VirtualBase_init(VirtualBase *thiz)
{
 *(unsigned long long *)thiz = (unsigned long long)&off_8C38;
}


/* Function: _ZN7MiddleAC2Ev @ 0x4140 */
void MiddleA_init(MiddleA *thiz, unsigned long long *a2)
{
 unsigned long long *v2;
 v2 = a2;
 *(unsigned long long *)thiz = *v2;
 *(unsigned long long *)((char *)thiz + *(unsigned long long *)(*(unsigned long long *)thiz - 24LL)) = v2[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x4170 */
void MiddleB_init(MiddleB *thiz, unsigned long long *a2)
{
 unsigned long long *v2;
 v2 = a2;
 *(unsigned long long *)thiz = *v2;
 *(unsigned long long *)((char *)thiz + *(unsigned long long *)(*(unsigned long long *)thiz - 24LL)) = v2[1];
}


/* Function: _ZN7MiddleA4funcEv @ 0x41A0 */
long long MiddleA_func(MiddleA *thiz)
{
 return (unsigned int)(*(unsigned int *)((char *)thiz + *(unsigned long long *)(*(unsigned long long *)thiz - 24LL) + 8) + 150);
}


/* Function: _ZN7MiddleAD1Ev @ 0x41C0 */
void MiddleA_destroy(MiddleA *thiz)
{
 VirtualBase_destroy((VirtualBase *)((char *)thiz + 16));
}


/* Function: _ZN7MiddleAD0Ev @ 0x4200 */
void MiddleA_destroy_2(MiddleA *thiz)
{
 MiddleA_destroy(thiz);
 operator delete(thiz);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x4230 */
long long virtual_thunk_to_MiddleA_func(MiddleA *thiz)
{
 return MiddleA_func((MiddleA *)((char *)thiz + *(unsigned long long *)(*(unsigned long long *)thiz - 24LL)));
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x4250 */
void virtual_thunk_to_MiddleA_destroy(MiddleA *thiz)
{
 MiddleA_destroy((MiddleA *)((char *)thiz + *(unsigned long long *)(*(unsigned long long *)thiz - 32LL)));
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x4270 */
void virtual_thunk_to_MiddleA_destroy_2(MiddleA *thiz)
{
 MiddleA_destroy((MiddleA *)((char *)thiz + *(unsigned long long *)(*(unsigned long long *)thiz - 32LL)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x4290 */
long long MiddleB_func(MiddleB *thiz)
{
 return (unsigned int)(*(unsigned int *)((char *)thiz + *(unsigned long long *)(*(unsigned long long *)thiz - 24LL) + 8) + 200);
}


/* Function: _ZN7MiddleBD1Ev @ 0x42B0 */
void MiddleB_destroy(MiddleB *thiz)
{
 VirtualBase_destroy((VirtualBase *)((char *)thiz + 16));
}


/* Function: _ZN7MiddleBD0Ev @ 0x42F0 */
void MiddleB_destroy_2(MiddleB *thiz)
{
 MiddleB_destroy(thiz);
 operator delete(thiz);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x4320 */
long long virtual_thunk_to_MiddleB_func(MiddleB *thiz)
{
 return MiddleB_func((MiddleB *)((char *)thiz + *(unsigned long long *)(*(unsigned long long *)thiz - 24LL)));
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x4340 */
void virtual_thunk_to_MiddleB_destroy(MiddleB *thiz)
{
 MiddleB_destroy((MiddleB *)((char *)thiz + *(unsigned long long *)(*(unsigned long long *)thiz - 32LL)));
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x4360 */
void virtual_thunk_to_MiddleB_destroy_2(MiddleB *thiz)
{
 MiddleB_destroy((MiddleB *)((char *)thiz + *(unsigned long long *)(*(unsigned long long *)thiz - 32LL)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x4380 */
long long DiamondDerived_func(DiamondDerived *thiz)
{
 return (unsigned int)(*(unsigned int *)((char *)thiz + *(unsigned long long *)(*(unsigned long long *)thiz - 24LL) + 8) + 250);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x43A0 */
void DiamondDerived_destroy_2(DiamondDerived *thiz)
{
 DiamondDerived_destroy(thiz);
 operator delete(thiz);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x43D0 */
long long non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *thiz)
{
 return DiamondDerived_func((DiamondDerived *)((char *)thiz - 16));
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x43F0 */
void non_virtual_thunk_to_DiamondDerived_destroy(DiamondDerived *thiz)
{
 DiamondDerived_destroy((DiamondDerived *)((char *)thiz - 16));
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x4410 */
void non_virtual_thunk_to_DiamondDerived_destroy_2(DiamondDerived *thiz)
{
 DiamondDerived_destroy((DiamondDerived *)((char *)thiz - 16));
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x4430 */
long long virtual_thunk_to_DiamondDerived_func(DiamondDerived *thiz)
{
 return DiamondDerived_func((DiamondDerived *)((char *)thiz + *(unsigned long long *)(*(unsigned long long *)thiz - 24LL)));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x4450 */
void virtual_thunk_to_DiamondDerived_destroy(DiamondDerived *thiz)
{
 DiamondDerived_destroy((DiamondDerived *)((char *)thiz + *(unsigned long long *)(*(unsigned long long *)thiz - 32LL)));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x4470 */
void virtual_thunk_to_DiamondDerived_destroy_2(DiamondDerived *thiz)
{
 DiamondDerived_destroy((DiamondDerived *)((char *)thiz + *(unsigned long long *)(*(unsigned long long *)thiz - 32LL)));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x4490 */
long long VirtualBase_func(VirtualBase *thiz)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x44A0 */
void VirtualBase_destroy(VirtualBase *thiz)
{
 ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x44B0 */
void VirtualBase_destroy_2(VirtualBase *thiz)
{
 VirtualBase_destroy(thiz);
 operator delete(thiz);
}


/* Function: _ZN7MiddleAD2Ev @ 0x44E0 */
void MiddleA_destroy_3(MiddleA *thiz)
{
 ;
}


/* Function: _ZN7MiddleBD2Ev @ 0x44F0 */
void MiddleB_destroy_3(MiddleB *thiz)
{
 ;
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x4500 */
void DiamondDerived_destroy_3(DiamondDerived *thiz)
{
 MiddleB_destroy_3((DiamondDerived *)((char *)thiz + 16));
 MiddleA_destroy_3(thiz);
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x4550 */
long long std__uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_data(
 long long a1,
 long long a2)
{
 return std__uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x4580 */
long long std___uniq_ptr_impl___uniq_ptr_impl_2(long long a1, long long a2)
{
 long long v2; // rax
 long long result; // rax

 v2 = std_move_tuple_int_ptr_std_default_delete_int(a2);
 std_tuple_int_ptr_std_default_delete_int_tuple_2(a1, v2);
 result = std__uniq_ptr_impl_int_std_default_delete_int__M_ptr(a2);
 *(unsigned long long *)result = 0;
 return result;
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x45E0 */
long long std_move_tuple_int_ptr_std_default_delete_int(long long a1)
{
 return a1;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x45F0 */
long long std_tuple_int_ptr_std_default_delete_int_tuple(long long a1, long long a2)
{
 return std_Tuple_impl_0ul_int_ptr_std_default_delete_int__Tuple_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x4620 */
long long std__uniq_ptr_impl_int_std_default_delete_int__M_ptr(long long a1)
{
 return std_get_0ul_int_ptr_std_default_delete_int(a1);
}


/* Function: __clang_call_terminate @ 0x4640 */
void _clang_call_terminate(void *a1)
{
 __cxa_begin_catch(a1);
 terminate();
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x4650 */
unsigned long long * std_Tuple_impl_0ul_int_ptr_std_default_delete_int__Tuple_impl(unsigned long long *a1, unsigned long long *a2)
{
 unsigned long long *result; // rax

 std_Tuple_impl_1ul_std_default_delete_int__Tuple_impl(a1, a2);
 result = a1;
 *a1 = *a2;
 return result;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ @ 0x4690 */
void std_Tuple_impl_1ul_std_default_delete_int__Tuple_impl()
{
 ;
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x46A0 */
long long std_get_0ul_int_ptr_std_default_delete_int(long long a1)
{
 return std__get_helper_0ul_int_ptr_std_default_delete_int(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x46C0 */
long long std__get_helper_0ul_int_ptr_std_default_delete_int(long long a1)
{
 return std_Tuple_impl_0ul_int_ptr_std_default_delete_int__M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x46E0 */
long long std_Tuple_impl_0ul_int_ptr_std_default_delete_int__M_head(long long a1)
{
 return std_Head_base_0ul_int_ptr_false__M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ @ 0x4700 */
long long std_Head_base_0ul_int_ptr_false__M_head(long long a1)
{
 return a1;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x4710 */
void RTTIBase_init(RTTIBase *thiz)
{
 *(unsigned long long *)thiz = (unsigned long long)off_8D78;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x4730 */
void RTTIDerivedA_destroy(RTTIDerivedA *thiz)
{
 RTTIBase_destroy((RTTIBase *)thiz);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x4750 */
void RTTIDerivedA_destroy_2(RTTIDerivedA *thiz)
{
 RTTIDerivedA_destroy(thiz);
 operator delete(thiz);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x4780 */
long long RTTIDerivedA_getType(RTTIDerivedA *thiz)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x4790 */
void RTTIBase_destroy(RTTIBase *thiz)
{
 ;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x47A0 */
void RTTIBase_destroy_2(RTTIBase *thiz)
{
 RTTIBase_destroy(thiz);
 operator delete(thiz);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x47D0 */
long long RTTIBase_getType(RTTIBase *thiz)
{
 return 0;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x47E0 */
void RTTIDerivedB_destroy(RTTIDerivedB *thiz)
{
 RTTIBase_destroy((RTTIBase *)thiz);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x4800 */
void RTTIDerivedB_destroy_2(RTTIDerivedB *thiz)
{
 RTTIDerivedB_destroy(thiz);
 operator delete(thiz);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x4830 */
long long RTTIDerivedB_getType(RTTIDerivedB *thiz)
{
 return 2;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x4840 */
long long ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(
 long long a1,
 long long a2)
{
 return std__uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x4870 */
long long std___uniq_ptr_impl___uniq_ptr_impl_3(long long a1, long long a2)
{
 long long result; // rax

 std_tuple_int_ptr_std_default_delete_int_tuple_true_true();
 result = std__uniq_ptr_impl_int_std_default_delete_int__M_ptr(a1);
 *(unsigned long long *)result = a2;
 return result;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x48B0 */
long long std_tuple_int_ptr_std_default_delete_int_tuple_true_true()
{
 return std_Tuple_impl_0ul_int_ptr_std_default_delete_int__Tuple_impl_2();
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev @ 0x48E0 */
long long std_Tuple_impl_0ul_int_ptr_std_default_delete_int__Tuple_impl_2(long long a1)
{
 std_Tuple_impl_1ul_std_default_delete_int__Tuple_impl_2();
 return std_Head_base_0ul_int_ptr_false__Head_base(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev @ 0x4910 */
long long std_Tuple_impl_1ul_std_default_delete_int__Tuple_impl_2(long long a1)
{
 return std_Head_base_1ul_std_default_delete_int_true__Head_base(a1);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2Ev @ 0x4930 */
unsigned long long * std_Head_base_0ul_int_ptr_false__Head_base_3(unsigned long long *a1)
{
 unsigned long long *result; // rax

 result = a1;
 *a1 = 0;
 return result;
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev @ 0x4950 */
void std_Head_base_1ul_std_default_delete_int_true__Head_base()
{
 ;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x4960 */
long long std_unique_ptr_int_get_deleter_2()
{
 return std__uniq_ptr_impl_int_std_default_delete_int__M_deleter_3();
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x4990 */
void std_default_delete_int_operator(long long a1, void *a2)
{
 if ( a2 )
 operator delete(a2);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x49D0 */
long long std_move_int_ptr_2(long long a1)
{
 return a1;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x49E0 */
long long std__uniq_ptr_impl_int_std_default_delete_int__M_deleter(long long a1)
{
 return std_get_1ul_int_ptr_std_default_delete_int(a1);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x4A00 */
long long std_get_1ul_int_ptr_std_default_delete_int(long long a1)
{
 return std__get_helper_1ul_std_default_delete_int(a1);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x4A20 */
long long std__get_helper_1ul_std_default_delete_int(long long a1)
{
 return std_Tuple_impl_1ul_std_default_delete_int__M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x4A40 */
long long std_Tuple_impl_1ul_std_default_delete_int__M_head(long long a1)
{
 return std_Head_base_1ul_std_default_delete_int_true__M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x4A60 */
long long std_Head_base_1ul_std_default_delete_int_true__M_head(long long a1)
{
 return a1;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x4A70 */
long long std_unique_ptr_int_get_2()
{
 return std__uniq_ptr_impl_int_std_default_delete_int__M_ptr_4();
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x4AA0 */
long long std__uniq_ptr_impl_int_std_default_delete_int__M_ptr_2(long long a1)
{
 return *(unsigned long long *)std_get_0ul_int_ptr_std_default_delete_int(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x4AC0 */
long long std_get_0ul_int_ptr_std_default_delete_int_2(long long a1)
{
 return std__get_helper_0ul_int_ptr_std_default_delete_int_2(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4AE0 */
long long std__get_helper_0ul_int_ptr_std_default_delete_int_2(long long a1)
{
 return std_Tuple_impl_0ul_int_ptr_std_default_delete_int__M_head_2(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x4B00 */
long long std_Tuple_impl_0ul_int_ptr_std_default_delete_int__M_head_2(long long a1)
{
 return std_Head_base_0ul_int_ptr_false__M_head_2(a1);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ @ 0x4B20 */
long long std_Head_base_0ul_int_ptr_false__M_head_2(long long a1)
{
 return a1;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x4B30 */
long long ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(
 long long a1,
 long long a2)
{
 return std__uniq_ptr_impl_int_std_default_delete_int_array___uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x4B60 */
long long std__uniq_ptr_impl_int_std_default_delete_int_array___uniq_ptr_impl(long long a1, long long a2)
{
 long long result; // rax

 std_tuple_int_ptr_std_default_delete_int_array_tuple_true_true();
 result = std__uniq_ptr_impl_int_std_default_delete_int_array__M_ptr(a1);
 *(unsigned long long *)result = a2;
 return result;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x4BA0 */
long long std_tuple_int_ptr_std_default_delete_int_array_tuple_true_true()
{
 return std_Tuple_impl_0ul_int_ptr_std_default_delete_int_array__Tuple_impl_2();
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4BD0 */
long long std__uniq_ptr_impl_int_std_default_delete_int_array__M_ptr(long long a1)
{
 return std_get_0ul_int_ptr_std_default_delete_int_array(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x4BF0 */
long long std_Tuple_impl_0ul_int_ptr_std_default_delete_int_array__Tuple_impl_2(long long a1)
{
 std_Tuple_impl_1ul_std_default_delete_int_array__Tuple_impl_2();
 return std_Head_base_0ul_int_ptr_false__Head_base_2(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev @ 0x4C20 */
long long std_Tuple_impl_1ul_std_default_delete_int_array__Tuple_impl_2(long long a1)
{
 return std_Head_base_1ul_std_default_delete_int_array_true__Head_base(a1);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev @ 0x4C40 */
void std_Head_base_1ul_std_default_delete_int_array_true__Head_base()
{
 ;
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4C50 */
long long std_get_0ul_int_ptr_std_default_delete_int_array(long long a1)
{
 return std__get_helper_0ul_int_ptr_std_default_delete_int_array(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4C70 */
long long std__get_helper_0ul_int_ptr_std_default_delete_int_array(long long a1)
{
 return std_Tuple_impl_0ul_int_ptr_std_default_delete_int_array__M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x4C90 */
long long std_Tuple_impl_0ul_int_ptr_std_default_delete_int_array__M_head(long long a1)
{
 return std_Head_base_0ul_int_ptr_false__M_head_3(a1);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x4CB0 */
long long std_unique_ptr_int_array_get_deleter_2()
{
 return std__uniq_ptr_impl_int_std_default_delete_int_array__M_deleter_3();
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ @ 0x4CE0 */
void std_default_delete_int_array_operator_int(long long a1, void *a2)
{
 if ( a2 )
 operator delete[](a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x4D20 */
long long std__uniq_ptr_impl_int_std_default_delete_int_array__M_deleter(long long a1)
{
 return std_get_1ul_int_ptr_std_default_delete_int_array(a1);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4D40 */
long long std_get_1ul_int_ptr_std_default_delete_int_array(long long a1)
{
 return std__get_helper_1ul_std_default_delete_int_array(a1);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4D60 */
long long std__get_helper_1ul_std_default_delete_int_array(long long a1)
{
 return std_Tuple_impl_1ul_std_default_delete_int_array__M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x4D80 */
long long std_Tuple_impl_1ul_std_default_delete_int_array__M_head(long long a1)
{
 return std_Head_base_1ul_std_default_delete_int_array_true__M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x4DA0 */
long long std_Head_base_1ul_std_default_delete_int_array_true__M_head(long long a1)
{
 return a1;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x4DB0 */
long long std_unique_ptr_int_array_get_2()
{
 return std__uniq_ptr_impl_int_std_default_delete_int_array__M_ptr_4();
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4DE0 */
long long std__uniq_ptr_impl_int_std_default_delete_int_array__M_ptr_2(long long a1)
{
 return *(unsigned long long *)std_get_0ul_int_ptr_std_default_delete_int_array(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x4E00 */
long long std_get_0ul_int_ptr_std_default_delete_int_array_2(long long a1)
{
 return std__get_helper_0ul_int_ptr_std_default_delete_int_array_2(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4E20 */
long long std__get_helper_0ul_int_ptr_std_default_delete_int_array_2(long long a1)
{
 return std_Tuple_impl_0ul_int_ptr_std_default_delete_int_array__M_head_2(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x4E40 */
long long std_Tuple_impl_0ul_int_ptr_std_default_delete_int_array__M_head_2(long long a1)
{
 return std_Head_base_0ul_int_ptr_false__M_head_4(a1);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x4E60 */
long long std_forward_int_ptr(long long a1)
{
 return a1;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ @ 0x4E70 */
long long std_Head_base_0ul_int_ptr_false__Head_base_int_ptr(long long a1, long long a2)
{
 long long v2; // rcx
 long long result; // rax

 v2 = std_forward_int_ptr(a2);
 *(unsigned long long *)a1 = *(unsigned long long *)v2;
 result = a1;
 return result;
}


/* Function: .term_proc @ 0x4EA4 */
void term_proc()
{
 ;
}


/* FAILED to decompile: _Znam @ 0x9100 */

/* FAILED to decompile: printf @ 0x9110 */

/* FAILED to decompile: _ZSt9terminatev @ 0x9118 */

/* FAILED to decompile: __cxa_begin_catch @ 0x9120 */

/* FAILED to decompile: strlen @ 0x9128 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x9130 */

/* FAILED to decompile: strncpy @ 0x9138 */

/* FAILED to decompile: memset @ 0x9140 */

/* FAILED to decompile: __libc_start_main @ 0x9150 */

/* FAILED to decompile: __cxa_atexit @ 0x9158 */

/* FAILED to decompile: _ZdlPv @ 0x9160 */

/* FAILED to decompile: _Znwm @ 0x9168 */

/* FAILED to decompile: __cxa_bad_typeid @ 0x9170 */

/* FAILED to decompile: __dynamic_cast @ 0x9178 */

/* FAILED to decompile: _ZdaPv @ 0x9180 */

/* FAILED to decompile: strcmp @ 0x9190 */

/* FAILED to decompile: __cxa_rethrow @ 0x9198 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x91A0 */

/* FAILED to decompile: __cxa_end_catch @ 0x91A8 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x91B0 */

/* FAILED to decompile: __cxa_throw @ 0x91B8 */

/* FAILED to decompile: _Unwind_Resume @ 0x91C8 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x91D0 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x91D8 */

/* FAILED to decompile: __gmon_start__ @ 0x91E8 */

/* Total functions decompiled: 215, failed: 25 */
