/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_clang_O0_no_g
 * Processor: arm
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Forward declarations for classes */
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

/* Forward declarations for std namespace */
typedef struct std_type_info std_type_info;

/* Helper function declarations for std namespace */
long long std_type_info_operator_eq(long long a1, long long a2);
long long std_type_info_name(std_type_info *this);

/* Global variable declarations */
unsigned int LifecycleClass_instance_count;
extern void *typeinfo_for_int;
extern void *typeinfo_for_RTTIBase;
extern void *typeinfo_for_RTTIDerivedA;
extern void *typeinfo_for_RTTIDerivedB;

/* String declarations */
extern const char *asc_4BD5;
extern const char *aCppL301D;
extern const char *aCppL302D;
extern const char *aCppL303D;
extern const char *aCppL304D;
extern const char *aCppL305D;
extern const char *aCppL306D;
extern const char *aCppL307D;
extern const char *aCppL308D;
extern const char *aCppL309D;

/* SimpleClass function declarations */
void SimpleClass_SimpleClass(SimpleClass *this, int a2, const char *a3);
unsigned int * SimpleClass_setValue(unsigned int *this, int a2);
long long SimpleClass_getValue(SimpleClass *this);
long long SimpleClass_compute(SimpleClass *this, int a2);
long long SimpleClass_getClassID(SimpleClass *this);

/* LifecycleClass function declarations */
void LifecycleClass_LifecycleClass(LifecycleClass *this, unsigned long long a2);
long long LifecycleClass_getData(LifecycleClass *this, unsigned long long a2);
long long LifecycleClass_getInstanceCount(LifecycleClass *this);
void LifecycleClass_LifecycleClass_destructor(void **this);

/* Base and Derived function declarations */
void Base_Base(Base *this);
void Base_Base_destructor(Base *this);
long long Base_virtual_func(Base *this, int a2);
void Derived_Derived(Derived *this, int a2);
void Derived_Derived_destructor(Derived *this);
long long Derived_virtual_func(Derived *this, int a2);

/* MultiDerived function declarations */
void MultiDerived_MultiDerived(MultiDerived *this);
void MultiDerived_MultiDerived_destructor(MultiDerived *this);

/* DiamondDerived function declarations */
void DiamondDerived_DiamondDerived(DiamondDerived *this);
void DiamondDerived_DiamondDerived_destructor(DiamondDerived *this);

/* Point function declarations */
void Point_Point(Point *this, int a2, int a3);
long long Point_operator_plus(unsigned int *a1, unsigned int *a2);
bool Point_operator_eq(unsigned int *a1, unsigned int *a2);
unsigned int * Point_operator_inc(unsigned int *result);

/* RTTI class function declarations */
void RTTIBase_RTTIBase(RTTIBase *this);
void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this);
void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this);
long long RTTIDerivedA_derivedA_data(RTTIDerivedA *this);
long long RTTIDerivedB_derivedB_data(RTTIDerivedB *this);

/* CRT stub function declarations */
long long call_weak_fn();
void JUMPOUT(int);
long long __cxa_atexit(void (*)(void *), void *, void *);
void *__cxa_allocate_exception(unsigned long size);
void __cxa_throw(void *exception, void *tinfo, void *dest);
void __cxa_bad_typeid();
void *__dynamic_cast(void *, const void *, const void *, unsigned long);

/* C++ operator function declarations */
void *operator_new(unsigned long size);
void *operator_new_array(unsigned long size);
void operator_delete(void *ptr);
void operator_delete_array(void *ptr);

/* Lambda operator function declarations */
long long test_cpp_lambda_1_operator();
long long test_cpp_lambda_0_operator_int_int(long long a1, int a2, int a3);

/* std unique_ptr helper function declarations */
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_ptr();
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_deleter();
long long std_unique_ptr_int_test_cpp_smart_ptr_2_get(long long a1);
long long std_move_int_ref(unsigned long long *a1);
long long std___uniq_ptr_impl_int_std_default_delete_int__M_ptr(long long a1);
long long std___uniq_ptr_impl_int_std_default_delete_int__M_deleter(long long a1);
long long std___uniq_ptr_impl_int_std_default_delete_int_array__M_ptr(long long a1);
long long std___uniq_ptr_impl_int_std_default_delete_int_array__M_deleter(long long a1);
long long std___uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl(long long a1, long long a2);
long long std___uniq_ptr_impl_int_std_default_delete_int_array___uniq_ptr_impl(long long a1, long long a2);
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr_2___uniq_ptr_impl_test_cpp_smart_ptr_2_const_ref(long long a1, long long a2, long long a3);
long long std_unique_ptr_int_unique_ptr_std_default_delete_int_void(long long a1, long long a2);
long long std_unique_ptr_int_operator_deref(long long a1);
long long std_unique_ptr_int_test_cpp_smart_ptr_2_unique_ptr(long long a1, long long a2, long long a3);
long long std_unique_ptr_int_test_cpp_smart_ptr_2_operator_deref(long long a1);
long long std_unique_ptr_int_test_cpp_smart_ptr_2_destructor(long long a1);
long long std_unique_ptr_int_array_unique_ptr(long long a1, long long a2);
long long std_unique_ptr_int_array_operator_index(long long a1, long long a2);
long long std_unique_ptr_int_array_destructor(long long a1);
long long std_unique_ptr_int_destructor(long long a1);
long long std_move_std_unique_ptr_int_ref(long long a1, long long a2);
long long std_uniq_ptr_impl_int_test_cpp_smart_ptr_2_M_ptr();
long long std_unique_ptr_int_test_cpp_smart_ptr_2_get_deleter(long long a1);
long long test_cpp_smart_ptr_2_operator_call(long long a1, unsigned long long a2);
long long std_unique_ptr_int_array_get_deleter();
long long std_default_delete_int_array_operator_call_int(long long a1, unsigned long long a2);
long long std_unique_ptr_int_get_deleter();
long long std_default_delete_int_operator_call(long long a1, unsigned long long a2);
long long std___uniq_ptr_impl_int_std_default_delete_int_M_ptr();
long long std___uniq_ptr_impl_int_std_default_delete_int_array_M_ptr();
long long std_move_int_ptr_ref(unsigned long long *a1);

/* Helper macros */
#define HIDWORD(x) ((unsigned int)((unsigned long long)(x) >> 32))

/* Template function forward declarations */
long long template_max_int(unsigned int a1, unsigned int a2);
double template_max_double(double a1, double a2);
int *template_swap_int(int *result, int *a2);

/* Template class forward declarations */
long long Container_int_Container(long long result);
long long Container_int_push(long long result, int a2);
long long Container_int_get(long long a1, int a2);
long long Container_int_getSize(long long a1);
long long Container_double_Container(long long result);
long long Container_double_push(long long result, double a2);
double Container_double_get(long long a1, int a2);
long long Container_double_getSize(long long a1);

/* Function: .init_proc @ 0x1988 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_19A0 @ 0x19A0 */
void sub_19A0()
{
 JUMPOUT(0);
}


/* Function: __cxx_global_var_init @ 0x1B40 */
long long _cxx_global_var_init()
{
 return 0;
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1B80 */
long long GLOBAL__sub_I_5_1_cpp()
{
 return _cxx_global_var_init();
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1CD4 */
long long test_cpp_member_func(void)
{
 SimpleClass *v0; // x0
 int Value; // [xsp+18h] [xbp-28h]
 unsigned char v3[36]; // [xsp+1Ch] [xbp-24h] BYREF

 SimpleClass_SimpleClass((SimpleClass *)v3, 5, "Test");
 SimpleClass_setValue((SimpleClass *)v3, 10);
 Value = SimpleClass_getValue((SimpleClass *)v3);
 v0 = (SimpleClass *)SimpleClass_compute((SimpleClass *)v3, 3);
 return Value + (unsigned int)v0 + (unsigned int)SimpleClass_getClassID(v0);
}


/* Function: _Z20test_cpp_constructorv @ 0x1D4C */
long long test_cpp_constructor(void)
{
 LifecycleClass *Data; // x0
 LifecycleClass *v1; // x0
 int v2; // w0
 int InstanceCount; // [xsp+Ch] [xbp-34h]
 unsigned char v5[20]; // [xsp+28h] [xbp-18h] BYREF
 int v6; // [xsp+3Ch] [xbp-4h]

 v6 = 0;
 LifecycleClass_LifecycleClass((LifecycleClass *)v5, 5u);
 Data = (LifecycleClass *)LifecycleClass_getData((LifecycleClass *)v5, 2u);
 v6 += (int)Data;
 InstanceCount = LifecycleClass_getInstanceCount(Data);
 v6 += InstanceCount;
 LifecycleClass_LifecycleClass_destructor((LifecycleClass *)v5);
 v2 = LifecycleClass_getInstanceCount(v1);
 return (unsigned int)(v6 + 1000 * v2);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1DFC */
long long call_virtual_func(long long ( ***a1)(unsigned long long, unsigned long long), unsigned int a2)
{
 return (**a1)(a1, a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1E30 */
long long test_cpp_virtual_func(void)
{
 unsigned int v1; // [xsp+4h] [xbp-5Ch]
 int v2; // [xsp+1Ch] [xbp-44h]
 int v3; // [xsp+34h] [xbp-2Ch]
 int v4; // [xsp+38h] [xbp-28h]
 long long ( **v5[2])(unsigned long long, unsigned long long); // [xsp+48h] [xbp-18h] BYREF
 long long ( **v6)(unsigned long long, unsigned long long); // [xsp+58h] [xbp-8h] BYREF

 Base_Base((Base *)&v6);
 Derived_Derived((Derived *)v5, 3);
 v4 = Base_virtual_func((Base *)&v6, 5);
 v3 = Derived_virtual_func((Derived *)v5, 5);
 v2 = call_virtual_func(&v6, 5u);
 v1 = v4 + v3 + v2 + call_virtual_func(v5, 5u);
 Derived_Derived_destructor((Derived *)v5);
 Base_Base_destructor((Base *)&v6);
 return v1;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1F50 */
long long test_cpp_multiple_inheritance(void)
{
 unsigned int v1; // [xsp+4h] [xbp-6Ch]
 unsigned long long *v2; // [xsp+18h] [xbp-58h]
 int v3; // [xsp+3Ch] [xbp-34h]
 long long ( **v4)(unsigned long long); // [xsp+50h] [xbp-20h] BYREF
 int v5; // [xsp+58h] [xbp-18h]
 unsigned int v6[4]; // [xsp+60h] [xbp-10h] BYREF

 MultiDerived_MultiDerived((MultiDerived *)&v4);
 v5 = 100;
 v6[2] = 200;
 v2 = 0;
 if ( &v4 )
 v2 = v6;
 v3 = (*v4)(&v4);
 v1 = v3 + (*(long long ( **)(unsigned long long *))*v2)(v2) + (&v4 != v2);
 MultiDerived_MultiDerived_destructor((MultiDerived *)&v4);
 return v1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x2050 */
long long test_cpp_diamond_inheritance(void)
{
 unsigned int v1; // [xsp+4h] [xbp-6Ch]
 long long ( ***v2)(unsigned long long); // [xsp+18h] [xbp-58h]
 int v3; // [xsp+34h] [xbp-3Ch]
 unsigned long long v4[6]; // [xsp+40h] [xbp-30h] BYREF

 DiamondDerived_DiamondDerived((DiamondDerived *)v4);
 *(unsigned int *)((char *)&v4[1] + *(unsigned long long *)(v4[0] - 24LL)) = 50;
 v2 = 0;
 if ( v4 )
 v2 = (long long ( ***)(unsigned long long))((char *)v4 + *(unsigned long long *)(v4[0] - 24LL));
 v3 = (**v2)(v2);
 *(unsigned int *)((char *)&v4[1] + *(unsigned long long *)(v4[0] - 24LL)) = 100;
 v1 = v3 + (**v2)(v2);
 DiamondDerived_DiamondDerived_destructor((DiamondDerived *)v4);
 return v1;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x2154 */
long long test_cpp_operator_overload(void)
{
 int v0; // w9
 char v2; // [xsp+27h] [xbp-19h]
 long long v3; // [xsp+28h] [xbp-18h] BYREF
 unsigned char v4[8]; // [xsp+30h] [xbp-10h] BYREF
 unsigned char v5[8]; // [xsp+38h] [xbp-8h] BYREF

 Point_Point((Point *)v5, 1, 2);
 Point_Point((Point *)v4, 3, 4);
 v3 = Point_operator_plus(v5, v4);
 v2 = Point_operator_eq(v5, v4) & 1;
 Point_operator_inc(&v3);
 if ( (v2 & 1) != 0 )
 v0 = 0;
 else
 v0 = 10;
 return (unsigned int)(v3 + HIDWORD(v3) + v0);
}


/* Function: _Z22test_cpp_template_funcv @ 0x21FC */
long long test_cpp_template_func(void)
{
 int v0; // w0
 int v2; // [xsp+8h] [xbp-18h] BYREF
 int v3; // [xsp+Ch] [xbp-14h] BYREF
 double v4; // [xsp+10h] [xbp-10h]
 int v5; // [xsp+1Ch] [xbp-4h]

 template_max_int(3, 7);
 v5 = v0;
 v4 = template_max_double(2.5, 1.5);
 v3 = 10;
 v2 = 20;
 template_swap_int(&v3, &v2);
 return (unsigned int)(v5 + (int)v4 + v3 + v2);
}


/* Function: _Z23test_cpp_template_classv @ 0x2270 */
long long test_cpp_template_class(void)
{
 double v1; // [xsp+18h] [xbp-98h]
 unsigned char v2[92]; // [xsp+20h] [xbp-90h] BYREF
 int Size; // [xsp+7Ch] [xbp-34h]
 int v4; // [xsp+80h] [xbp-30h]
 unsigned char v5[44]; // [xsp+84h] [xbp-2Ch] BYREF

 Container_int_Container(0);
 Container_int_push((long long)v5, 10);
 Container_int_push((long long)v5, 20);
 Container_int_push((long long)v5, 30);
 v4 = Container_int_get((long long)v5, 0);
 Size = Container_int_getSize((long long)v5);
 Container_double_Container(0);
 Container_double_push((long long)v2, 3.14);
 v1 = Container_double_get((long long)v2, 0);
 return (unsigned int)(v4 + Size + (int)v1);
}


/* Function: _Z15test_cpp_lambdav @ 0x2330 */
long long test_cpp_lambda(void)
{
 int v1; // [xsp+10h] [xbp-20h]
 char v2; // [xsp+17h] [xbp-19h] BYREF
 int v3; // [xsp+18h] [xbp-18h] BYREF
 unsigned int *v4; // [xsp+20h] [xbp-10h]
 unsigned int v5[2]; // [xsp+28h] [xbp-8h] BYREF

 v5[1] = 10;
 v5[0] = 20;
 v3 = 10;
 v4 = v5;
 v1 = test_cpp_lambda_1_operator()(&v3, 3);
 return v1 + (unsigned int)test_cpp_lambda_0_operator_int_int(&v2, 10, 20);
}


/* Function: _ZZ15test_cpp_lambdavENK3$_1clEi @ 0x23A0 */
long long test_cpp_lambda_1_operator()(long long a1, int a2)
{
 **(unsigned int **)(a1 + 8) += 5;
 return (unsigned int)(a2 * *(unsigned int *)a1 + **(unsigned int **)(a1 + 8));
}


/* Function: _ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_ @ 0x23E0 */
long long test_cpp_lambda_0_operator_int_int(long long a1, int a2, int a3)
{
 return (unsigned int)(a2 + a3);
}


/* Function: _Z18test_cpp_exceptionv @ 0x2404 */
void test_cpp_exception(void)
{
 unsigned int *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x2574 */
long long test_cpp_smart_ptr(void)
{
 unsigned int v1; // [xsp+4h] [xbp-9Ch]
 unsigned int *v2; // [xsp+10h] [xbp-90h]
 unsigned int *v3; // [xsp+30h] [xbp-70h]
 unsigned char v4[11]; // [xsp+60h] [xbp-40h] BYREF
 int v5; // [xsp+6Ch] [xbp-34h]
 unsigned char v6[12]; // [xsp+70h] [xbp-30h] BYREF
 int v7; // [xsp+7Ch] [xbp-24h]
 unsigned char v8[12]; // [xsp+80h] [xbp-20h] BYREF
 unsigned char v9[8]; // [xsp+98h] [xbp-8h] BYREF

 *(unsigned int *)operator_new(4u) = 100;
 std_unique_ptr_int_unique_ptr_std_default_delete_int_void(v9, 0);
 *(unsigned int *)std_unique_ptr_int_operator_deref(v9) = 200;
 std_move_std_unique_ptr_int_ref(v9, v8);
 v7 = *(unsigned int *)std_unique_ptr_int_operator_deref(v8);
 v3 = (unsigned int *)operator_new_array(0x14u);
 *v3 = 1;
 v3[1] = 2;
 v3[2] = 3;
 v3[3] = 4;
 v3[4] = 5;
 std_unique_ptr_int_array_unique_ptr(v6, v3);
 v5 = *(unsigned int *)std_unique_ptr_int_array_operator_index(v6, 2);
 *(unsigned int *)operator_new(4u) = 500;
 std_unique_ptr_int_test_cpp_smart_ptr_2_unique_ptr(v4, 0, 0);
 v2 = (unsigned int *)std_unique_ptr_int_test_cpp_smart_ptr_2_operator_deref(v4);
 v1 = v7 + v5 + *v2;
 std_unique_ptr_int_test_cpp_smart_ptr_2_destructor(v4);
 std_unique_ptr_int_array_destructor(v6);
 std_unique_ptr_int_destructor(v8);
 std_unique_ptr_int_destructor(v9);
 return v1;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EC2IS0_vEEPiRKS0_ @ 0x275C */
long long std_unique_ptr_int_test_cpp_smart_ptr_2_unique_ptr(long long a1, long long a2, long long a3)
{
 return std___uniq_ptr_impl_int_test_cpp_smart_ptr_2___uniq_ptr_impl_test_cpp_smart_ptr_2_const_ref(a1, a2, a3);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EdeEv @ 0x2798 */
long long std_unique_ptr_int_test_cpp_smart_ptr_2_operator_deref(long long a1)
{
 return std_unique_ptr_int_test_cpp_smart_ptr_2_get(a1);
}

/* Missing function declaration */
long long std_unique_ptr_int_test_cpp_smart_ptr_2_get(long long a1);


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev @ 0x27CC */
unsigned long long * std_unique_ptr_int_test_cpp_smart_ptr_2_destructor(long long a1)
{
 unsigned long long *result; // x0
 unsigned long long *v2; // x0
 long long deleter; // [xsp+8h] [xbp-28h]
 unsigned long long *v5; // [xsp+20h] [xbp-10h]

 result = (unsigned long long *)std___uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_ptr(a1);
 v5 = result;
 if ( *result )
 {
 deleter = std_unique_ptr_int_test_cpp_smart_ptr_2_get_deleter(a1);
 v2 = (unsigned long long *)std_move_int_ref(v5);
 result = (unsigned long long *)test_cpp_smart_ptr_2_operator_call(deleter, (unsigned long long)*v2);
 }
 *v5 = 0;
 return result;
}

/* Helper function declaration */
unsigned long long * std_move_int_ref(unsigned long long *a1);

/* Helper function for std_move */
unsigned long long * std_move_int_ref(unsigned long long *a1)
{
 return a1;
}

/* Helper function for std_move */
unsigned long long * std_move_int_ref(unsigned long long *a1)
{
 return a1;
}


/* Function: _Z13test_cpp_rttiv @ 0x284C */
long long test_cpp_rtti(void)
{
 const char *v0; // x0
 RTTIDerivedB *v2; // [xsp+20h] [xbp-70h]
 RTTIDerivedA *v3; // [xsp+30h] [xbp-60h]
 RTTIDerivedA *v4; // [xsp+48h] [xbp-48h]
 RTTIDerivedB *v5; // [xsp+58h] [xbp-38h]
 int v6; // [xsp+7Ch] [xbp-14h]
 unsigned int v7; // [xsp+7Ch] [xbp-14h]

 v4 = (RTTIDerivedA *)operator_new(8u);
 *(unsigned long long *)v4 = 0;
 RTTIDerivedA_RTTIDerivedA(v4);
 v5 = (RTTIDerivedB *)operator_new(8u);
 *(unsigned long long *)v5 = 0;
 RTTIDerivedB_RTTIDerivedB(v5);
 v6 = 0;
 if ( !v4 )
 __cxa_bad_typeid();
 if ( (std_type_info_operator_eq(*(unsigned long long *)(*(unsigned long long *)v4 - 8LL), (long long)&typeinfo_for_RTTIDerivedA) & 1) != 0 )
 v6 = 10;
 if ( !v5 )
 __cxa_bad_typeid();
 if ( (std_type_info_operator_eq(*(unsigned long long *)(*(unsigned long long *)v5 - 8LL), (long long)&typeinfo_for_RTTIDerivedB) & 1) != 0 )
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
 v0 = (const char *)std_type_info_name(*(std_type_info **)(*(unsigned long long *)v4 - 8LL));
 v7 = v6 + strlen(v0);
 (*(void ( **)(RTTIDerivedA *))(*(unsigned long long *)v4 + 8LL))(v4);
 (*(void ( **)(RTTIDerivedB *))(*(unsigned long long *)v5 + 8LL))(v5);
 return v7;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x2A84 */
void test_cpp_oo_features(void)
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0
 unsigned int v6; // w0
 unsigned int v7; // w0
 unsigned int v8; // w0

 printf(asc_4BD5);
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


/* Function: main @ 0x2B90 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3$_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_ @ 0x2BBC */
long long ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
 long long a1,
 long long a2,
 long long a3)
{
 return std___uniq_ptr_impl_int_test_cpp_smart_ptr_2___uniq_ptr_impl_test_cpp_smart_ptr_2_const_ref(
 a1,
 a2,
 a3);
}


/* Helper function declarations */
long long std_forward_test_cpp_smart_ptr_2_const_ref(long long a1);
long long std_tuple_int_test_cpp_smart_ptr_2_tuple_int_ptr_ref_test_cpp_smart_ptr_2_const_ref_true(
 long long a1,
 long long a2,
 long long a3);

/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2EC2IRKS0_EEPiOT_ @ 0x2BF0 */
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr_2___uniq_ptr_impl_test_cpp_smart_ptr_2_const_ref(
 long long a1,
 long long a2,
 long long a3)
{
 long long v3; // x0
 unsigned long long v6[2]; // [xsp+20h] [xbp-10h] BYREF

 v6[1] = a1;
 v6[0] = a2;
 v3 = std_forward_test_cpp_smart_ptr_2_const_ref(a3);
 return std_tuple_int_test_cpp_smart_ptr_2_tuple_int_ptr_ref_test_cpp_smart_ptr_2_const_ref_true(
 a1,
 v6,
 v3);
}

/* Helper function declaration */
long long std___uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl(long long a1, long long a2);
long long std___uniq_ptr_impl_int_std_default_delete_int_array___uniq_ptr_impl(long long a1, long long a2);

/* Missing function declarations */
long long std_unique_ptr_int_test_cpp_smart_ptr_2_get(long long a1);
long long std_move_int_ref(unsigned long long *a1);
long long std___uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl(long long a1, long long a2);
long long std___uniq_ptr_impl_int_std_default_delete_int_array___uniq_ptr_impl(long long a1, long long a2);
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_ptr(long long a1);
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr_2___uniq_ptr_impl(long long a1, long long a2);
long long std___uniq_ptr_impl_int_std_default_delete_int_array_M_ptr(long long a1);
long long std___uniq_ptr_impl_int_std_default_delete_int_M_ptr(long long a1);
long long std___uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_data(long long a1, long long a2);


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE @ 0x2C3C */
long long std_forward_test_cpp_smart_ptr_2_const_ref(long long a1)
{
 return a1;
}


/* Helper function declarations */
long long std_forward_int_ptr_ref(long long a1);
long long std__Tuple_impl_0ul_int_test_cpp_smart_ptr_2__Tuple_impl_int_ptr_ref_test_cpp_smart_ptr_2_const_ref_void(
 unsigned long long *a1,
 unsigned long long *a2,
 unsigned long long *a3);

/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x2C50 */
long long std_tuple_int_test_cpp_smart_ptr_2_tuple_int_ptr_ref_test_cpp_smart_ptr_2_const_ref_true(
 long long a1,
 long long a2,
 long long a3)
{
 long long v2; // x0
 long long v4; // [xsp+8h] [xbp-28h]

 v4 = std_forward_int_ptr_ref(a2);
 std_forward_test_cpp_smart_ptr_2_const_ref(a3);
 return std__Tuple_impl_0ul_int_test_cpp_smart_ptr_2__Tuple_impl_int_ptr_ref_test_cpp_smart_ptr_2_const_ref_void(
 a1,
 v4,
 v2);
}


/* Helper function declaration */
long long std__Tuple_impl_1ul_test_cpp_smart_ptr_2__Tuple_impl(long long a1, long long a2);

/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x2CA8 */
long long std__Tuple_impl_0ul_int_test_cpp_smart_ptr_2__Tuple_impl_int_ptr_ref_test_cpp_smart_ptr_2_const_ref_void(
 unsigned long long *a1,
 unsigned long long *a2,
 unsigned long long *a3)
{
 long long v2; // x0
 long long v3; // x0

 (void)a3;
 v2 = std__Tuple_impl_1ul_test_cpp_smart_ptr_2__Tuple_impl((long long)a1, (long long)a2);
 v3 = std_forward_int_ptr_ref((long long)a2);
 return std__Head_base_0ul_int_false__Head_base_int_ptr_ref(a1, (unsigned long long *)v3);
}

/* Helper function declarations */
long long std_forward_int_ptr_ref(long long a1);
long long std__Tuple_impl_1ul_test_cpp_smart_ptr_2__Tuple_impl(long long a1, long long a2);
long long std__Head_base_0ul_int_false__Head_base_int_ptr_ref(unsigned long long *a1, unsigned long long *a2);
long long std__Tuple_impl_0ul_int_test_cpp_smart_ptr_2__Tuple_impl_int_ptr_ref_test_cpp_smart_ptr_2_const_ref_void(
 unsigned long long *a1,
 unsigned long long *a2,
 unsigned long long *a3);

/* Helper function declarations */
long long std__Tuple_impl_1ul_test_cpp_smart_ptr_2__Tuple_impl(long long a1, long long a2);
long long std_forward_int_ptr_ref(long long a1);
long long std__Head_base_0ul_int_false__Head_base_int_ptr_ref(unsigned long long *a1, unsigned long long *a2);
long long std__Tuple_impl_0ul_int_test_cpp_smart_ptr_2__Tuple_impl_int_ptr_ref_test_cpp_smart_ptr_2_const_ref_void(
 unsigned long long *a1,
 unsigned long long *a2,
 unsigned long long *a3);
long long std__Head_base_1ul_test_cpp_smart_ptr_2_true__Head_base(long long a1, long long a2);
long long std__Head_base_1ul_test_cpp_smart_ptr_2_true__M_head(long long a1);
long long std__Tuple_impl_0ul_int_test_cpp_smart_ptr_2__M_head(long long a1);
long long std__Head_base_0ul_int_false__M_head(long long a1);

/* Forward declarations for std tuple helper functions */
long long std_forward_int_ptr_ref(long long a1);
long long std__Tuple_impl_0ul_int_test_cpp_smart_ptr_2__Tuple_impl_int_ptr_ref_test_cpp_smart_ptr_2_const_ref_void(
 unsigned long long *a1,
 unsigned long long *a2,
 unsigned long long *a3);
long long std__Tuple_impl_1ul_test_cpp_smart_ptr_2__Tuple_impl(long long a1, long long a2);

/* Helper function declarations */
long long std_forward_test_cpp_smart_ptr_2_const_ref(long long a1);
long long std_tuple_int_test_cpp_smart_ptr_2_tuple_int_ptr_ref_test_cpp_smart_ptr_2_const_ref_true(
 long long a1,
 long long a2,
 long long a3);


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EEC2ERKS0_ @ 0x2CFC */
long long std__Tuple_impl_1ul_test_cpp_smart_ptr_2__Tuple_impl(long long a1, long long a2)
{
 return std__Head_base_1ul_test_cpp_smart_ptr_2_true__Head_base(a1, a2);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EEC2ERKS0_ @ 0x2D28 */
long long std__Head_base_1ul_test_cpp_smart_ptr_2_true__Head_base(long long a1, long long a2)
{
 (void)a1;
 (void)a2;
 return 0;
}

/* Helper function declaration */
long long std__Head_base_1ul_test_cpp_smart_ptr_2_true__M_head(long long a1);

/* Helper function declaration */
long long std__Head_base_1ul_test_cpp_smart_ptr_2_true__M_head(long long a1);

/* Helper function declarations for std tuple/forward */
long long std_forward_test_cpp_smart_ptr_2_const_ref(long long a1);
long long std_tuple_int_test_cpp_smart_ptr_2_tuple_int_ptr_ref_test_cpp_smart_ptr_2_const_ref_true(
 long long a1,
 long long a2,
 long long a3);
long long std__Head_base_0ul_int_false__Head_base_int_ptr_ref(unsigned long long *a1, unsigned long long *a2);
long long std_get_0ul_int_test_cpp_smart_ptr_2(long long a1);
long long std___get_helper_0ul_int_test_cpp_smart_ptr_2(long long a1);
long long std__Tuple_impl_1ul_test_cpp_smart_ptr_2__Tuple_impl(long long a1, long long a2);
long long std__Head_base_0ul_int_false__Head_base_int_ptr_ref(unsigned long long *a1, unsigned long long *a2);
long long std_forward_int_ptr_ref(long long a1);
long long std__Tuple_impl_0ul_int_test_cpp_smart_ptr_2__Tuple_impl_int_ptr_ref_test_cpp_smart_ptr_2_const_ref_void(
 unsigned long long *a1,
 unsigned long long *a2,
 unsigned long long *a3);
long long std__Head_base_1ul_test_cpp_smart_ptr_2_true__Head_base(long long a1, long long a2);
long long std__Head_base_1ul_test_cpp_smart_ptr_2_true__M_head(long long a1);


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x2D3C */
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_ptr(long long a1)
{
 return std_get_0ul_int_test_cpp_smart_ptr_2(a1);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E11get_deleterEv @ 0x2D60 */
long long std_unique_ptr_int_test_cpp_smart_ptr_2_get_deleter()
{
 return std___uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_deleter();
}


/* Function: _ZZ18test_cpp_smart_ptrvENK3$_2clEPi @ 0x2D94 */
long long test_cpp_smart_ptr_2_operator_call(long long a1, unsigned int *a2)
{
 *a2 = -1;
 if ( a2 )
 operator_delete(a2);
 return 0;
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x2DDC */
long long std_get_0ul_int_test_cpp_smart_ptr_2(long long a1)
{
 return std___get_helper_0ul_int_test_cpp_smart_ptr_2(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x2E00 */
long long std___get_helper_0ul_int_test_cpp_smart_ptr_2(long long a1)
{
 return std__Tuple_impl_0ul_int_test_cpp_smart_ptr_2__M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS2_ @ 0x2E24 */
long long std__Tuple_impl_0ul_int_test_cpp_smart_ptr_2__M_head(long long a1)
{
 return std__Head_base_0ul_int_false__M_head(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E10_M_deleterEv @ 0x2E48 */
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_deleter(long long a1)
{
 return std_get_1ul_int_test_cpp_smart_ptr_2(a1);
}


/* Function: _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x2E6C */
long long std_get_1ul_int_test_cpp_smart_ptr_2(long long a1)
{
 return std___get_helper_1ul_test_cpp_smart_ptr_2(a1);
}


/* Function: _ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvE3$_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE @ 0x2E90 */
long long std___get_helper_1ul_test_cpp_smart_ptr_2(long long a1)
{
 return std__Tuple_impl_1ul_test_cpp_smart_ptr_2__M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS1_ @ 0x2EB4 */
long long std__Tuple_impl_1ul_test_cpp_smart_ptr_2__M_head(long long a1)
{
 return std__Head_base_1ul_test_cpp_smart_ptr_2_true__M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EE7_M_headERS1_ @ 0x2ED8 */
long long std__Head_base_1ul_test_cpp_smart_ptr_2_true__M_head(long long a1)
{
 (void)a1;
 return 0;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E3getEv @ 0x2EEC */
long long std_unique_ptr_int_test_cpp_smart_ptr_2_get(long long a1)
{
 return std___uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_ptr(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x2F20 */
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_ptr(long long a1)
{
 return *(unsigned long long *)std_get_0ul_int_test_cpp_smart_ptr_2(a1);
}

/* Helper function declaration */
long long std_get_0ul_int_test_cpp_smart_ptr_2(long long a1);


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x2F48 */
long long std_get_0ul_int_test_cpp_smart_ptr_2(long long a1)
{
 return std___get_helper_0ul_int_test_cpp_smart_ptr_2(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x2F6C */
long long std___get_helper_0ul_int_test_cpp_smart_ptr_2(long long a1)
{
 return std__Tuple_impl_0ul_int_test_cpp_smart_ptr_2__M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERKS2_ @ 0x2F90 */
long long std__Tuple_impl_0ul_int_test_cpp_smart_ptr_2__M_head(long long a1)
{
 return std__Head_base_0ul_int_false__M_head(a1);
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x2FB4 */
void SimpleClass_SimpleClass(SimpleClass *this, int a2, const char *a3)
{
 *(unsigned int *)this = a2;
 strncpy((char *)this + 4, a3, 0x1Fu);
 *((unsigned char *)this + 35) = 0;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x3000 */
unsigned int * SimpleClass_setValue(unsigned int *this, int a2)
{
 *this = a2;
 return this;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x3020 */
long long SimpleClass_getValue(SimpleClass *this)
{
 return *(unsigned int *)this;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x3038 */
long long SimpleClass_compute(SimpleClass *this, int a2)
{
 int v3; // [xsp+0h] [xbp-10h]

 v3 = *(unsigned int *)this * a2;
 return (unsigned int)strlen((const char *)this + 4) + v3;
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x3080 */
long long SimpleClass_getClassID(SimpleClass *this)
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Em @ 0x3088 */
void LifecycleClass_LifecycleClass(LifecycleClass *this, unsigned long long a2)
{
 unsigned long long v2; // x0
 unsigned long long i; // [xsp+8h] [xbp-18h]

 *((unsigned long long *)this + 1) = a2;
 if ( is_mul_ok(a2, 4u) )
 v2 = 4 * a2;
 else
 v2 = -1;
 *(unsigned long long *)this = operator_new_array(v2);
 for ( i = 0; i < a2; ++i )
 *(unsigned int *)(*(unsigned long long *)this + 4 * i) = 10 * i;
 ++LifecycleClass_instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEm @ 0x3138 */
long long LifecycleClass_getData(LifecycleClass *this, unsigned long long a2)
{
 if ( a2 >= *((unsigned long long *)this + 1) )
 return (unsigned int)-1;
 else
 return *(unsigned int *)(*(unsigned long long *)this + 4 * a2);
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x3190 */
long long LifecycleClass_getInstanceCount(LifecycleClass *this)
{
 return (unsigned int)LifecycleClass_instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x319C */
void LifecycleClass_LifecycleClass_destructor(void **this)
{
 if ( *this )
 operator_delete_array(*this);
 --LifecycleClass_instance_count;
}


/* Function: _ZN4BaseC2Ev @ 0x31E8 */
void Base::Base(Base *this)
{
 *(unsigned long long *)this = &off_17858;
}


/* Function: _ZN7DerivedC2Ei @ 0x320C */
void Derived::Derived(Derived *this, int a2)
{
 Base::Base(this);
 *(unsigned long long *)this = &off_17898;
 *((unsigned int *)this + 2) = a2;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x325C */
long long Base::virtual_func(Base *this, int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x3278 */
long long Derived::virtual_func(Derived *this, int a2)
{
 return (unsigned int)(a2 * *((unsigned int *)this + 2));
}


/* Function: _ZN7DerivedD2Ev @ 0x329C */
void Derived::~Derived(Derived *this)
{
 Base::~Base(this);
}


/* Function: _ZN4BaseD2Ev @ 0x32C0 */
void Base::~Base(Base *this)
{
 ;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x32D0 */
void MultiDerived::MultiDerived(MultiDerived *this)
{
 BaseA::BaseA(this);
 BaseB::BaseB((MultiDerived *)((char *)this + 16));
 *(unsigned long long *)this = &off_178E0;
 *((unsigned long long *)this + 2) = &off_17910;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x3330 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 BaseB::~BaseB((MultiDerived *)((char *)this + 16));
 BaseA::~BaseA(this);
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x3364 */
void DiamondDerived::DiamondDerived(DiamondDerived *this)
{
 VirtualBase::VirtualBase((DiamondDerived *)((char *)this + 32));
 MiddleA::MiddleA(this);
 MiddleB::MiddleB((DiamondDerived *)((char *)this + 16));
 *(unsigned long long *)this = &off_179E8;
 *((unsigned long long *)this + 4) = &off_17A50;
 *((unsigned long long *)this + 2) = &off_17A18;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x3400 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived(this);
 VirtualBase::~VirtualBase((DiamondDerived *)((char *)this + 32));
}


/* Function: _ZN5PointC2Eii @ 0x343C */
void Point::Point(Point *this, int a2, int a3)
{
 *(unsigned int *)this = a2;
 *((unsigned int *)this + 1) = a3;
}


/* Function: _ZNK5PointplERKS_ @ 0x3468 */
long long Point::operator+(unsigned int *a1, unsigned int *a2)
{
 long long v3; // [xsp+18h] [xbp-8h] BYREF

 Point::Point((Point *)&v3, *a1 + *a2, a1[1] + a2[1]);
 return v3;
}


/* Function: _ZNK5PointeqERKS_ @ 0x34B8 */
bool Point::operator==(unsigned int *a1, unsigned int *a2)
{
 bool v3; // [xsp+Ch] [xbp-14h]

 v3 = 0;
 if ( *a1 == *a2 )
 return a1[1] == a2[1];
 return v3;
}


/* Function: _ZN5PointppEv @ 0x351C */
unsigned int * Point::operator++(unsigned int *result)
{
 ++*result;
 ++result[1];
 return result;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x3548 */
long long template_max<int>(unsigned int a1, unsigned int a2)
{
 if ( (int)a1 <= (int)a2 )
 return a2;
 else
 return a1;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x358C */
double template_max<double>(double a1, double a2)
{
 if ( a1 <= a2 )
 return a2;
 else
 return a1;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x35D4 */
int * template_swap<int>(int *result, int *a2)
{
 int v2; // [xsp+Ch] [xbp-14h]

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x3610 */
long long Container<int>::Container(long long result)
{
 *(unsigned int *)(result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x3628 */
long long Container<int>::push(long long result, int a2)
{
 long long v2; // x10

 if ( *(int *)(result + 40) < 10 )
 {
 v2 = (int)(*(unsigned int *)(result + 40))++;
 *(unsigned int *)(result + 4 * v2) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x3674 */
long long Container<int>::get(long long a1, int a2)
{
 if ( a2 < 0 || a2 >= *(unsigned int *)(a1 + 40) )
 return 0;
 else
 return *(unsigned int *)(a1 + 4LL * a2);
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x36D4 */
long long Container<int>::getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x36EC */
long long Container<double>::Container(long long result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x3704 */
long long Container<double>::push(long long result, double a2)
{
 long long v2; // x10

 if ( *(int *)(result + 80) < 10 )
 {
 v2 = (int)(*(unsigned int *)(result + 80))++;
 *(double *)(result + 8 * v2) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x3750 */
double Container<double>::get(long long a1, int a2)
{
 if ( a2 < 0 || a2 >= *(unsigned int *)(a1 + 80) )
 return 0.0;
 else
 return *(double *)(a1 + 8LL * a2);
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x37B4 */
long long Container<double>::getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x37CC */
long long std_unique_ptr<int>::unique_ptr<std_default_delete<int>,void>(long long a1, long long a2)
{
 return ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(a1, a2);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x3800 */
long long std_unique_ptr<int>::operator*(long long a1)
{
 return std_unique_ptr<int>::get(a1);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x3834 */
void std_move<std_unique_ptr<int> &>()
{
 ;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x3848 */
long long std_unique_ptr<int>::unique_ptr(long long a1, long long a2)
{
 return std___uniq_ptr_data<int,std_default_delete<int>,true,true>::__uniq_ptr_data(a1, a2);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x3874 */
long long std_unique_ptr<int []>::unique_ptr<int *,std_default_delete<int []>,void,bool>(
 long long a1,
 long long a2)
{
 return ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(a1, a2);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm @ 0x38A8 */
long long std_unique_ptr<int []>::operator[](long long a1, long long a2)
{
 return std_unique_ptr<int []>::get(a1) + 4 * a2;
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x38E8 */
unsigned long long * std_unique_ptr_int_array_destructor(long long a1, long long a2)
{
 unsigned long long *result; // x0
 long long deleter; // x0
 unsigned long long *v4; // [xsp+10h] [xbp-10h]

 result = (unsigned long long *)std___uniq_ptr_impl_int_std_default_delete_int_array_M_ptr(a1);
 v4 = result;
 if ( *result )
 {
 deleter = std_unique_ptr_int_array_get_deleter(a1);
 result = (unsigned long long *)std_default_delete_int_array_operator_call_int(deleter, *v4);
 }
 *v4 = 0;
 return result;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x394C */
unsigned long long * std_unique_ptr_int_destructor(long long a1, long long a2)
{
 unsigned long long *result; // x0
 unsigned long long *v2; // x8
 long long deleter; // [xsp+0h] [xbp-20h]
 unsigned long long *v5; // [xsp+10h] [xbp-10h]

 result = (unsigned long long *)std___uniq_ptr_impl_int_std_default_delete_int_M_ptr(a1);
 v5 = result;
 if ( *result )
 {
 deleter = std_unique_ptr_int_get_deleter(a1);
 v2 = (unsigned long long *)std_move_int_ptr_ref(v5);
 result = (unsigned long long *)std_default_delete_int_operator_call(deleter, *v2);
 }
 *v5 = 0;
 return result;
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x39C0 */
void RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase::RTTIBase(this);
 *(unsigned long long *)this = off_17D30;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x3A04 */
void RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase::RTTIBase(this);
 *(unsigned long long *)this = off_17D80;
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x3A48 */
long long std_type_info::operator==(long long a1, long long a2)
{
 bool v3; // [xsp+Ch] [xbp-24h]
 char v4; // [xsp+1Ch] [xbp-14h]

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


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x3AE8 */
long long RTTIDerivedA::derivedA_data(RTTIDerivedA *this)
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x3AFC */
long long RTTIDerivedB::derivedB_data(RTTIDerivedB *this)
{
 return 200;
}


/* Function: _ZNKSt9type_info4nameEv @ 0x3B10 */
long long std_type_info::name(std_type_info *this)
{
 if ( **((unsigned char **)this + 1) == 42 )
 return *((unsigned long long *)this + 1) + 1LL;
 else
 return *((unsigned long long *)this + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x3B64 */
const char * Base::getName(Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x3B7C */
void Base::~Base(Base *this)
{
 Base::~Base(this);
 operator_delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x3BAC */
const char * Derived::getName(Derived *this)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x3BC4 */
void Derived::~Derived(Derived *this)
{
 Derived::~Derived(this);
 operator_delete(this);
}


/* Function: _ZN5BaseAC2Ev @ 0x3BF4 */
void BaseA::BaseA(BaseA *this)
{
 *(unsigned long long *)this = &off_17990;
}


/* Function: _ZN5BaseBC2Ev @ 0x3C18 */
void BaseB::BaseB(BaseB *this)
{
 *(unsigned long long *)this = &off_179B8;
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x3C3C */
long long MultiDerived::funcA(MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x3C50 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 MultiDerived::~MultiDerived(this);
 operator_delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x3C80 */
long long MultiDerived::funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x3C94 */
long long non_virtual_thunk_to_MultiDerived::funcB(MultiDerived *this)
{
 return MultiDerived::funcB((MultiDerived *)((char *)this - 16));
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x3CAC */
void non_virtual_thunk_to_MultiDerived::~MultiDerived(MultiDerived *this)
{
 MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 16));
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x3CC4 */
void non_virtual_thunk_to_MultiDerived::~MultiDerived(MultiDerived *this)
{
 MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 16));
}


/* Function: _ZN5BaseA5funcAEv @ 0x3CDC */
long long BaseA::funcA(BaseA *this)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x3CF0 */
void BaseA::~BaseA(BaseA *this)
{
 ;
}


/* Function: _ZN5BaseAD0Ev @ 0x3D00 */
void BaseA::~BaseA(BaseA *this)
{
 BaseA::~BaseA(this);
 operator_delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x3D30 */
long long BaseB::funcB(BaseB *this)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x3D44 */
void BaseB::~BaseB(BaseB *this)
{
 ;
}


/* Function: _ZN5BaseBD0Ev @ 0x3D54 */
void BaseB::~BaseB(BaseB *this)
{
 BaseB::~BaseB(this);
 operator_delete(this);
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x3D84 */
void VirtualBase::VirtualBase(VirtualBase *this)
{
 *(unsigned long long *)this = &off_17C18;
}


/* Function: _ZN7MiddleAC2Ev @ 0x3DA8 */
void MiddleA::MiddleA(MiddleA *this, unsigned long long *a2)
{
 *(unsigned long long *)this = *a2;
 *(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) = a2[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x3DDC */
void MiddleB::MiddleB(MiddleB *this, unsigned long long *a2)
{
 *(unsigned long long *)this = *a2;
 *(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) = a2[1];
}


/* Function: _ZN7MiddleA4funcEv @ 0x3E10 */
long long MiddleA::func(MiddleA *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 150);
}


/* Function: _ZN7MiddleAD1Ev @ 0x3E38 */
void MiddleA::~MiddleA(MiddleA *this)
{
 MiddleA::~MiddleA(this);
 VirtualBase::~VirtualBase((MiddleA *)((char *)this + 16));
}


/* Function: _ZN7MiddleAD0Ev @ 0x3E74 */
void MiddleA::~MiddleA(MiddleA *this)
{
 MiddleA::~MiddleA(this);
 operator_delete(this);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x3EA4 */
long long virtual_thunk_to_MiddleA::func(MiddleA *this)
{
 return MiddleA::func((MiddleA *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)));
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x3EC4 */
void virtual_thunk_to_MiddleA::~MiddleA(MiddleA *this)
{
 MiddleA::~MiddleA((MiddleA *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL)));
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x3EE4 */
void virtual_thunk_to_MiddleA::~MiddleA(MiddleA *this)
{
 MiddleA::~MiddleA((MiddleA *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x3F04 */
long long MiddleB::func(MiddleB *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 200);
}


/* Function: _ZN7MiddleBD1Ev @ 0x3F2C */
void MiddleB::~MiddleB(MiddleB *this)
{
 MiddleB::~MiddleB(this);
 VirtualBase::~VirtualBase((MiddleB *)((char *)this + 16));
}


/* Function: _ZN7MiddleBD0Ev @ 0x3F68 */
void MiddleB::~MiddleB(MiddleB *this)
{
 MiddleB::~MiddleB(this);
 operator_delete(this);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x3F98 */
long long virtual_thunk_to_MiddleB::func(MiddleB *this)
{
 return MiddleB::func((MiddleB *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)));
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x3FB8 */
void virtual_thunk_to_MiddleB::~MiddleB(MiddleB *this)
{
 MiddleB::~MiddleB((MiddleB *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL)));
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x3FD8 */
void virtual_thunk_to_MiddleB::~MiddleB(MiddleB *this)
{
 MiddleB::~MiddleB((MiddleB *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x3FF8 */
long long DiamondDerived::func(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 250);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x4020 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived(this);
 operator_delete(this);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x4050 */
long long non_virtual_thunk_to_DiamondDerived::func(DiamondDerived *this)
{
 return DiamondDerived::func((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x4068 */
void non_virtual_thunk_to_DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x4080 */
void non_virtual_thunk_to_DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x4098 */
long long virtual_thunk_to_DiamondDerived::func(DiamondDerived *this)
{
 return DiamondDerived::func((DiamondDerived *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x40B8 */
void virtual_thunk_to_DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL)));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x40D8 */
void virtual_thunk_to_DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL)));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x40F8 */
long long VirtualBase::func(VirtualBase *this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x410C */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x411C */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 VirtualBase::~VirtualBase(this);
 operator_delete(this);
}


/* Function: _ZN7MiddleAD2Ev @ 0x414C */
void MiddleA::~MiddleA(MiddleA *this)
{
 ;
}


/* Function: _ZN7MiddleBD2Ev @ 0x4160 */
void MiddleB::~MiddleB(MiddleB *this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x4174 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 MiddleB::~MiddleB((DiamondDerived *)((char *)this + 16));
 MiddleA::~MiddleA(this);
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x41C0 */
long long std___uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_data(
 long long a1,
 long long a2)
{
 return std___uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x41EC */
unsigned long long * std___uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl(long long a1, long long a2)
{
 long long v2; // x0
 unsigned long long *result; // x0

 v2 = std_move_std_tuple_int_ptr_std_default_delete_int_ref(a2);
 std_tuple_int_ptr_std_default_delete_int_tuple(a1, v2);
 result = (unsigned long long *)std___uniq_ptr_impl_int_std_default_delete_int__M_ptr(a2);
 *result = 0;
 return result;
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x4244 */
long long std_move_std_tuple_int_ptr_std_default_delete_int_ref(long long a1)
{
 return a1;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x4258 */
long long std_tuple_int_ptr_std_default_delete_int_tuple(long long a1, long long a2)
{
 return std__Tuple_impl_0ul_int_ptr_std_default_delete_int__Tuple_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x4284 */
long long std___uniq_ptr_impl<int,std_default_delete<int>>::_M_ptr(long long a1)
{
 return std_get<0ul,int *,std_default_delete<int>>(a1);
}


/* Function: __clang_call_terminate @ 0x42A8 */
void _clang_call_terminate(void *a1)
{
 __cxa_begin_catch(a1);
 std_terminate();
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x42B4 */
long long std__Tuple_impl<0ul,int *,std_default_delete<int>>::_Tuple_impl(unsigned long long *a1, unsigned long long *a2)
{
 long long result; // x0

 result = std__Tuple_impl<1ul,std_default_delete<int>>::_Tuple_impl();
 *a1 = *a2;
 return result;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ @ 0x42F4 */
void std__Tuple_impl<1ul,std_default_delete<int>>::_Tuple_impl()
{
 ;
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x4308 */
long long std_get<0ul,int *,std_default_delete<int>>(long long a1)
{
 return std___get_helper<0ul,int *,std_default_delete<int>>(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x432C */
long long std___get_helper<0ul,int *,std_default_delete<int>>(long long a1)
{
 return std__Tuple_impl<0ul,int *,std_default_delete<int>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x4350 */
long long std__Tuple_impl<0ul,int *,std_default_delete<int>>::_M_head(long long a1)
{
 return std__Head_base<0ul,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ @ 0x4374 */
void std__Head_base<0ul,int *,false>::_M_head()
{
 ;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x4388 */
void RTTIBase::RTTIBase(RTTIBase *this)
{
 *(unsigned long long *)this = off_17D58;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x43AC */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x43D0 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIDerivedA::~RTTIDerivedA(this);
 operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x4400 */
long long RTTIDerivedA::getType(RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x4414 */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
 ;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x4424 */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
 RTTIBase::~RTTIBase(this);
 operator_delete(this);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x4454 */
long long RTTIBase::getType(RTTIBase *this)
{
 return 0;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x4468 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x448C */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIDerivedB::~RTTIDerivedB(this);
 operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x44BC */
long long RTTIDerivedB::getType(RTTIDerivedB *this)
{
 return 2;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x44D0 */
long long ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(
 long long a1,
 long long a2)
{
 return std___uniq_ptr_impl<int,std_default_delete<int>>::__uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x44FC */
unsigned long long * std___uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl_2(long long a1, long long a2)
{
 unsigned long long *result; // x0

 std_tuple_int_ptr_std_default_delete_int_tuple_true_true();
 result = (unsigned long long *)std___uniq_ptr_impl_int_std_default_delete_int__M_ptr(a1);
 *result = a2;
 return result;
}

/* Helper function declaration */
long long std___uniq_ptr_impl_int_std_default_delete_int__M_ptr(long long a1);
long long std_tuple_int_ptr_std_default_delete_int_tuple_true_true();


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x4540 */
long long std_tuple<int *,std_default_delete<int>>::tuple<true,true>()
{
 return std__Tuple_impl<0ul,int *,std_default_delete<int>>::_Tuple_impl();
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev @ 0x456C */
long long std__Tuple_impl<0ul,int *,std_default_delete<int>>::_Tuple_impl(long long a1)
{
 std__Tuple_impl<1ul,std_default_delete<int>>::_Tuple_impl();
 return std__Head_base<0ul,int *,false>::_Head_base(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev @ 0x459C */
long long std__Tuple_impl<1ul,std_default_delete<int>>::_Tuple_impl(long long a1)
{
 return std__Head_base<1ul,std_default_delete<int>,true>::_Head_base(a1);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2Ev @ 0x45C0 */
unsigned long long * std__Head_base<0ul,int *,false>::_Head_base(unsigned long long *result)
{
 *result = 0;
 return result;
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev @ 0x45D8 */
void std__Head_base<1ul,std_default_delete<int>,true>::_Head_base()
{
 ;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x45E8 */
long long std_unique_ptr<int>::get_deleter()
{
 return std___uniq_ptr_impl<int,std_default_delete<int>>::_M_deleter();
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x461C */
void std_default_delete_int_operator_call(long long a1, void *a2)
{
 if ( a2 )
 operator_delete(a2);
}

/* C++ operator function declarations */
void operator_delete(void *ptr);
void operator_delete_array(void *ptr);


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x4658 */
unsigned long long * std_move_int_ptr_ref(unsigned long long *a1)
{
 return a1;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x466C */
long long std___uniq_ptr_impl<int,std_default_delete<int>>::_M_deleter(long long a1)
{
 return std_get<1ul,int *,std_default_delete<int>>(a1);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x4690 */
long long std_get<1ul,int *,std_default_delete<int>>(long long a1)
{
 return std___get_helper<1ul,std_default_delete<int>>(a1);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x46B4 */
long long std___get_helper<1ul,std_default_delete<int>>(long long a1)
{
 return std__Tuple_impl<1ul,std_default_delete<int>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x46D8 */
long long std__Tuple_impl<1ul,std_default_delete<int>>::_M_head(long long a1)
{
 return std__Head_base<1ul,std_default_delete<int>,true>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x46FC */
void std__Head_base<1ul,std_default_delete<int>,true>::_M_head()
{
 ;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x4710 */
long long std_unique_ptr<int>::get()
{
 return std___uniq_ptr_impl<int,std_default_delete<int>>::_M_ptr();
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x4744 */
long long std___uniq_ptr_impl<int,std_default_delete<int>>::_M_ptr(long long a1)
{
 return *(unsigned long long *)std_get<0ul,int *,std_default_delete<int>>(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x476C */
long long std_get<0ul,int *,std_default_delete<int>>(long long a1)
{
 return std___get_helper<0ul,int *,std_default_delete<int>>(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4790 */
long long std___get_helper<0ul,int *,std_default_delete<int>>(long long a1)
{
 return std__Tuple_impl<0ul,int *,std_default_delete<int>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x47B4 */
long long std__Tuple_impl<0ul,int *,std_default_delete<int>>::_M_head(long long a1)
{
 return std__Head_base<0ul,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ @ 0x47D8 */
void std__Head_base<0ul,int *,false>::_M_head()
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x47EC */
long long ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(
 long long a1,
 long long a2)
{
 return std___uniq_ptr_impl_int_std_default_delete_int_array___uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x4818 */
unsigned long long * std___uniq_ptr_impl_int_std_default_delete_int_array___uniq_ptr_impl_2(long long a1, long long a2)
{
 unsigned long long *result; // x0

 std_tuple_int_ptr_std_default_delete_int_array_tuple_true_true();
 result = (unsigned long long *)std___uniq_ptr_impl_int_std_default_delete_int_array__M_ptr(a1);
 *result = a2;
 return result;
}

/* Helper function declaration */
long long std___uniq_ptr_impl_int_std_default_delete_int_array__M_ptr(long long a1);
long long std_tuple_int_ptr_std_default_delete_int_array_tuple_true_true();


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x485C */
long long std_tuple_int_ptr_std_default_delete_int_array_tuple_true_true()
{
 return std__Tuple_impl_0ul_int_ptr_std_default_delete_int_array__Tuple_impl();
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4888 */
long long std___uniq_ptr_impl<int,std_default_delete<int []>>::_M_ptr(long long a1)
{
 return std_get<0ul,int *,std_default_delete<int []>>(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x48AC */
unsigned long long * std__Tuple_impl<0ul,int *,std_default_delete<int []>>::_Tuple_impl(unsigned long long *a1)
{
 std__Tuple_impl<1ul,std_default_delete<int []>>::_Tuple_impl();
 return std__Head_base<0ul,int *,false>::_Head_base(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev @ 0x48DC */
long long std__Tuple_impl<1ul,std_default_delete<int []>>::_Tuple_impl(long long a1)
{
 return std__Head_base<1ul,std_default_delete<int []>,true>::_Head_base(a1);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev @ 0x4900 */
void std__Head_base<1ul,std_default_delete<int []>,true>::_Head_base()
{
 ;
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4910 */
long long std_get<0ul,int *,std_default_delete<int []>>(long long a1)
{
 return std___get_helper<0ul,int *,std_default_delete<int []>>(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4934 */
long long std___get_helper<0ul,int *,std_default_delete<int []>>(long long a1)
{
 return std__Tuple_impl<0ul,int *,std_default_delete<int []>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x4958 */
void std__Tuple_impl<0ul,int *,std_default_delete<int []>>::_M_head()
{
 std__Head_base<0ul,int *,false>::_M_head();
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x497C */
long long std_unique_ptr<int []>::get_deleter()
{
 return std___uniq_ptr_impl<int,std_default_delete<int []>>::_M_deleter();
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ @ 0x49B0 */
void std_default_delete_int_array_operator_call_int(long long a1, void *a2)
{
 if ( a2 )
 operator_delete_array(a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x49EC */
long long std___uniq_ptr_impl<int,std_default_delete<int []>>::_M_deleter(long long a1)
{
 return std_get<1ul,int *,std_default_delete<int []>>(a1);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4A10 */
long long std_get<1ul,int *,std_default_delete<int []>>(long long a1)
{
 return std___get_helper<1ul,std_default_delete<int []>>(a1);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4A34 */
long long std___get_helper<1ul,std_default_delete<int []>>(long long a1)
{
 return std__Tuple_impl<1ul,std_default_delete<int []>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x4A58 */
long long std__Tuple_impl<1ul,std_default_delete<int []>>::_M_head(long long a1)
{
 return std__Head_base<1ul,std_default_delete<int []>,true>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x4A7C */
void std__Head_base<1ul,std_default_delete<int []>,true>::_M_head()
{
 ;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x4A90 */
long long std_unique_ptr<int []>::get()
{
 return std___uniq_ptr_impl<int,std_default_delete<int []>>::_M_ptr();
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4AC4 */
long long std___uniq_ptr_impl<int,std_default_delete<int []>>::_M_ptr(long long a1)
{
 return *(unsigned long long *)std_get<0ul,int *,std_default_delete<int []>>(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x4AEC */
long long std_get<0ul,int *,std_default_delete<int []>>(long long a1)
{
 return std___get_helper<0ul,int *,std_default_delete<int []>>(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4B10 */
long long std___get_helper<0ul,int *,std_default_delete<int []>>(long long a1)
{
 return std__Tuple_impl<0ul,int *,std_default_delete<int []>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x4B34 */
void std__Tuple_impl<0ul,int *,std_default_delete<int []>>::_M_head()
{
 std__Head_base<0ul,int *,false>::_M_head();
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x4B58 */
long long std_forward_int_ptr_ref(long long a1)
{
 return a1;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ @ 0x4B6C */
long long std__Head_base_0ul_int_false__Head_base_int_ptr_ref(unsigned long long *a1, unsigned long long *a2)
{
 unsigned long long *v1; // x0

 v1 = std_forward_int_ptr_ref((long long)a2);
 *a1 = *v1;
 return (long long)a1;
}


/* Function: .term_proc @ 0x4BA8 */
void term_proc()
{
 ;
}


/* FAILED to decompile: _Znam @ 0x18150 */

/* FAILED to decompile: _ZSt9terminatev @ 0x18160 */

/* FAILED to decompile: strlen @ 0x18168 */

/* FAILED to decompile: __cxa_begin_catch @ 0x18170 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x18178 */

/* FAILED to decompile: __cxa_finalize @ 0x18180 */

/* FAILED to decompile: __libc_start_main @ 0x18190 */

/* FAILED to decompile: _ZdlPv @ 0x18198 */

/* FAILED to decompile: _Znwm @ 0x181A0 */

/* FAILED to decompile: strncpy @ 0x181A8 */

/* FAILED to decompile: __cxa_bad_typeid @ 0x181B0 */

/* FAILED to decompile: __dynamic_cast @ 0x181B8 */

/* FAILED to decompile: __cxa_atexit @ 0x181C0 */

/* FAILED to decompile: _ZdaPv @ 0x181C8 */

/* FAILED to decompile: strcmp @ 0x181D8 */

/* FAILED to decompile: __cxa_rethrow @ 0x181E0 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x181E8 */

/* FAILED to decompile: abort @ 0x181F0 */

/* FAILED to decompile: __cxa_end_catch @ 0x181F8 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x18200 */

/* FAILED to decompile: __cxa_throw @ 0x18208 */

/* FAILED to decompile: _Unwind_Resume @ 0x18218 */

/* FAILED to decompile: printf @ 0x18220 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x18228 */

/* FAILED to decompile: __gmon_start__ @ 0x18238 */

/* Total functions decompiled: 216, failed: 25 */
