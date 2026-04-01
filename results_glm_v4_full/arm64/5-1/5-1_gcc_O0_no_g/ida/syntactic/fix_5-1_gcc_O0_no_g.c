/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_gcc_O0_no_g
 * Processor: arm
 */

#include <stdio.h>
#include <string.h>

/* Forward declarations for C++ classes (C-compatible) */
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

/* SimpleClass method declarations */
void SimpleClass_ctor(SimpleClass *this, int a2, const char *a3);
long long SimpleClass_getValue(SimpleClass *this);
unsigned int * SimpleClass_setValue(unsigned int *this, int a2);
long long SimpleClass_compute(SimpleClass *this, int a2);
long long SimpleClass_getClassID(SimpleClass *this);

/* LifecycleClass method declarations */
void LifecycleClass_ctor(LifecycleClass *this, unsigned long long a2);
void LifecycleClass_dtor(LifecycleClass *this);
long long LifecycleClass_getData(LifecycleClass *this, unsigned long long a2);
long long LifecycleClass_getInstanceCount(LifecycleClass *this);

/* Base and Derived method declarations */
void Base_ctor(Base *this);
void Base_dtor(Base *this);
long long Base_virtual_func(Base *this, int a2);
void Derived_ctor(Derived *this, int a2);
void Derived_dtor(Derived *this);
long long Derived_virtual_func(Derived *this, int a2);
void MultiDerived_ctor(MultiDerived *this);
void MultiDerived_dtor(MultiDerived *this);
void DiamondDerived_ctor(DiamondDerived *this);
void DiamondDerived_dtor(DiamondDerived *this);

/* Point class method declarations */
void Point_ctor(Point *this, int x, int y);
long long Point_operator_plus(void *a1, void *a2);
bool Point_operator_equals(void *a1, void *a2);
void *Point_operator_increment(void *result);

/* CRT function declarations */
long long call_weak_fn(void);
void JUMPOUT(int);

/* Helper macro for extracting high 32 bits */
#define HIDWORD(x) ((unsigned int)(((unsigned long long)(x) >> 32) & 0xFFFFFFFF))
#define LODWORD(x) ((unsigned int)((x) & 0xFFFFFFFF))

/* Template function forward declarations */
long long template_max_int(long long result, int a2);
double template_max_double(double result, double a2);
int * template_swap_int(int *a1, int *a2);

/* Container class forward declarations */
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
long long Container_int_ctor(long long result);
long long Container_int_push(long long a1, int a2);
long long Container_int_get(long long a1, int a2);
long long Container_int_getSize(long long a1);
long long Container_int_Container(long long result);
long long Container_double_ctor(long long result);
long long Container_double_push(long long a1, double a2);
double Container_double_get(long long a1, int a2);
long long Container_double_getSize(long long a1);
long long Container_double_Container(long long result);

/* Vtable pointer declarations */
extern long long off_16B10;
extern long long off_16A10;
extern long long off_16848;
extern long long off_16820;
extern long long off_167F8;
extern long long off_16AB8;
extern long long off_16A90;
extern long long off_16A38;
extern long long off_16A68;
extern long long off_16900;
extern long long off_16910;
extern long long off_16878;
extern long long off_168E0;
extern long long off_168A8;
extern long long off_16AE0;

/* RTTI type_info symbols */
extern struct type_info typeinfo_for_RTTIBase;
extern struct type_info typeinfo_for_RTTIDerivedA;
extern struct type_info typeinfo_for_RTTIDerivedB;

/* LifecycleClass static member */
extern unsigned long long LifecycleClass_instance_count;

/* std::ios_base::Init globals */
typedef struct std_ios_base_Init std_ios_base_Init;
extern std_ios_base_Init std___ioinit;
extern void *_dso_handle;

/* String constant declarations */
extern const char asc_45E8[];
extern const char aCppL301D[];
extern const char aCppL302D[];
extern const char aCppL303D[];
extern const char aCppL304D[];
extern const char aCppL305D[];
extern const char aCppL306D[];
extern const char aCppL307D[];
extern const char aCppL308D[];
extern const char aCppL309D[];

/* C++ operator declarations (C-compatible) */
void *operator new(unsigned long size);
void *operator_new(unsigned long size);
void operator_delete(void *ptr, unsigned long size);
void *operator_new_array(unsigned long size);
void operator_delete_array(void *ptr);

/* RTTI class method declarations */
void RTTIBase_ctor(RTTIBase *this);
void RTTIBase_dtor(RTTIBase *this);
void RTTIDerivedA_ctor(RTTIDerivedA *this);
void RTTIDerivedA_dtor(RTTIDerivedA *this);
long long RTTIDerivedA_getType(RTTIDerivedA *this);
long long RTTIDerivedA_derivedA_data(RTTIDerivedA *this);
void RTTIDerivedB_ctor(RTTIDerivedB *this);
void RTTIDerivedB_dtor(RTTIDerivedB *this);
long long RTTIDerivedB_getType(RTTIDerivedB *this);
long long RTTIDerivedB_derivedB_data(RTTIDerivedB *this);

/* std::type_info method declarations */
bool std_type_info_operator_equals(long long a1, long long a2);
long long std_type_info_name(long long a1);

/* std::unique_ptr<int> function declarations */
long long std_unique_ptr_int_std_default_delete_int_void_unique_ptr(long long a1, long long a2);
long long std_unique_ptr_int_operator_dereference(long long a1);
long long std_move_unique_ptr_int(long long a1);
void std_unique_ptr_int_unique_ptr(long long a1, long long a2);
void std_unique_ptr_int_destructor(long long a1);
void std_unique_ptr_int_array_unique_ptr(long long a1, long long a2);
long long std_unique_ptr_int_array_operator_bracket(long long a1, long long a2);
void std_unique_ptr_int_array_destructor(long long a1);
void std_unique_ptr_int_lambda_unique_ptr(long long a1, long long a2, long long a3);
long long std_unique_ptr_int_lambda_operator_dereference(long long a1);
void std_unique_ptr_int_lambda_destructor(long long a1);
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_ptr(long long a1);
long long std_unique_ptr_int_lambda_get_deleter(long long a1);
long long std_move_int_ptr_ref(long long a1);
long long std_unique_ptr_int_lambda_get(long long a1);
long long std_unique_ptr_int_array_get(long long a1);
long long std_unique_ptr_int_array_get_deleter(long long a1);
long long std_unique_ptr_int_get(long long a1);
long long std_unique_ptr_int_get_deleter(long long a1);
long long std_unique_ptr_int_get_const(long long a1);
long long std_unique_ptr_int_get_deleter_const(long long a1);

/* Additional missing function declarations */
long long std___uniq_ptr_impl_lambda_constructor(long long a1, long long a2, long long a3);
long long std___uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl(long long a1, long long a2);
long long std___uniq_ptr_impl_int_default_delete_int_array__M_ptr(long long a1);
long long std___uniq_ptr_impl_int_default_delete_int_array__M_deleter(long long a1);
void std_default_delete_int_operator(long long a1, void *a2);
void std_default_delete_int_array_operator_int(long long a1, void *a2);
long long std__get_helper_0ul_int_ptr_default_delete_int(long long a1);
long long std__get_helper_1ul_default_delete_int(long long a1);
long long std__get_helper_0ul_int_ptr_default_delete_int_const_ref(long long a1);
long long std__get_helper_0ul_int_ptr_default_delete_int_array(long long a1);
long long std__get_helper_1ul_default_delete_int_array(long long a1);
long long std__get_helper_0ul_int_ptr_default_delete_int_array_const_ref(long long a1);
long long std_Tuple_impl_1ul_default_delete_int_array__Tuple_impl(long long a1);
long long std__Tuple_impl_1ul_default_delete_int_array__Tuple_impl_void(long long a1);
long long std__Head_base_1ul_default_delete_int_true__Head_base(long long a1);
long long std__Head_base_1ul_default_delete_int_array_true__Head_base(long long a1);
long long std_Tuple_impl_1ul_default_delete_int__Tuple_impl_void(long long a1);
long long std__Head_base_0ul_int_ptr_false__Head_base_void(long long a1);
long long std_Tuple_impl_0ul_int_ptr_default_delete_int__M_head(long long a1);
long long std__Tuple_impl_1ul_default_delete_int__M_head(long long a1);
long long std_Tuple_impl_0ul_int_ptr_default_delete_int__M_head_const_ref(long long a1);
long long std_Tuple_impl_0ul_int_ptr_default_delete_int_array__M_head(long long a1);
long long std__Tuple_impl_1ul_default_delete_int_array__M_head(long long a1);
long long std_Tuple_impl_0ul_int_ptr_default_delete_int_array__M_head_const_ref(long long a1);
long long std__Head_base_0ul_int_ptr_false__M_head(long long a1);
long long std__Head_base_1ul_default_delete_int_true__M_head(long long a1);
long long std__Head_base_1ul_default_delete_int_array_true__M_head(long long a1);
long long std__Head_base_1ul_default_delete_int_true__M_head_ref(long long a1);
long long std__Head_base_1ul_default_delete_int_array_true__M_head_ref(long long a1);
long long std_forward_int_ptr(long long a1);
long long std_forward_default_delete_int(long long a1);
long long std__get_helper_1ul_test_cpp_smart_ptr_lambda(long long a1);
long long std__get_helper_0ul_int_ptr_test_cpp_smart_ptr_lambda_const_ref(long long a1);
long long std___uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl(long long a1, long long a2);
long long std__Tuple_impl_0ul_int_ptr_default_delete_int__Tuple_impl(long long a1);
long long std_Tuple_impl_1ul_default_delete_int__Tuple_impl(long long a1);
long long std_move_tuple_int_ptr_default_delete_int_ref(void);
long long std_tuple_int_ptr_default_delete_int_tuple_move(long long a1, long long a2);
unsigned long long * std___uniq_ptr_impl_int_default_delete_int__M_ptr(long long a1);
long long std___uniq_ptr_impl_int_default_delete_int__M_deleter(long long a1);
long long std___uniq_ptr_impl_int_default_delete_int__M_ptr_const(long long a1);
long long std_forward_int_ptr(long long a1);
long long std_forward_default_delete_int(long long a1);
long long std__Head_base_0ul_int_ptr_false__M_head(long long a1);
long long std__Head_base_1ul_default_delete_int_true__M_head(long long a1);
long long std__Head_base_0ul_int_ptr_false__M_head_const_ref(long long a1);
long long std__Head_base_1ul_default_delete_int_array_true__M_head(long long a1);
long long std__Head_base_1ul_default_delete_int_true__M_head_ref(long long a1);
long long std__Head_base_1ul_default_delete_int_array_true__M_head_ref(long long a1);
long long std__Tuple_impl_0ul_int_ptr_default_delete_int_array__Tuple_impl_void(long long a1);
long long std__Head_base_0ul_int_ptr_false__Head_base_void(long long a1);
long long std__Head_base_1ul_default_delete_int_array_true__Head_base_void(long long a1);
long long std__Tuple_impl_0ul_int_ptr_default_delete_int__M_head(long long a1);
long long std__Tuple_impl_1ul_default_delete_int__M_head(long long a1);
long long std__Tuple_impl_0ul_int_ptr_default_delete_int__M_head_const_ref(long long a1);
long long std__Tuple_impl_0ul_int_ptr_default_delete_int_array__M_head(long long a1);
long long std__Tuple_impl_1ul_default_delete_int_array__M_head(long long a1);
long long std__Tuple_impl_0ul_int_ptr_default_delete_int_array__M_head_const_ref(long long a1);
long long std__get_helper_0ul_int_ptr_default_delete_int(long long a1);
long long std__get_helper_1ul_default_delete_int(long long a1);
long long std__get_helper_0ul_int_ptr_default_delete_int_const_ref(long long a1);
long long std__get_helper_0ul_int_ptr_default_delete_int_array(long long a1);
long long std__get_helper_1ul_default_delete_int_array(long long a1);
long long std__get_helper_0ul_int_ptr_default_delete_int_array_const_ref(long long a1);
long long std__get_helper_0ul_int_ptr_test_cpp_smart_ptr_lambda(long long a1);
long long std___uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl_ptr(long long a1, long long a2);
long long std_tuple_int_ptr_default_delete_int_tuple_true_true(long long a1);
long long std_get_0ul_int_ptr_default_delete_int(long long a1);
long long std_Tuple_impl_0ul_int_ptr_default_delete_int__Tuple_impl_void(long long a1);
long long std_get_1ul_int_ptr_default_delete_int(long long a1);
long long std_Tuple_impl_0ul_int_ptr_default_delete_int_array__Tuple_impl_void(long long a1);
long long std_get_1ul_int_ptr_default_delete_int_array(long long a1);
long long std_tuple_int_ptr_default_delete_int_array_tuple_true_true(long long a1);

/* Lambda-related helper function declarations */
void std_forward_test_cpp_smart_ptr_lambda_const_ref(long long a1);
long long std_tuple_int_ptr_test_cpp_smart_ptr_lambda_tuple_int_ptr_ref_const_ref_true(long long a1, long long a2, long long a3);
long long std_get_0ul_int_ptr_test_cpp_smart_ptr_lambda(long long a1);
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_deleter(long long a1);
long long std_get_1ul_int_ptr_test_cpp_smart_ptr_lambda(long long a1);
long long std___get_helper_0ul_int_ptr_test_cpp_smart_ptr_lambda(long long a1);
long long std__get_helper_1ul_test_cpp_smart_ptr_lambda(long long a1);
long long std__get_helper_0ul_int_ptr_test_cpp_smart_ptr_lambda_const_ref(long long a1);
long long std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_lambda__M_head(long long a1);
long long std__Tuple_impl_1ul_test_cpp_smart_ptr_lambda__M_head(long long a1);
long long std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_lambda__M_head_const_ref(long long a1);
long long std__Head_base_0ul_int_ptr_false__M_head(long long a1);
long long std__Head_base_1ul_test_cpp_smart_ptr_lambda_true__M_head(long long a1);
long long std__Head_base_0ul_int_ptr_false__Head_base_int_ptr_ref(long long a1, long long a2);
long long std__Head_base_0ul_int_ptr_false__Head_base(long long a1);
long long std__Tuple_impl_1ul_test_cpp_smart_ptr_lambda__Tuple_impl(long long a1, long long a2);
long long std_forward_int_ptr_ref(long long a1);
long long std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_lambda__Tuple_impl_int_ptr_ref_const_ref_void(long long a1, long long a2, long long a3);
long long std__Head_base_1ul_test_cpp_smart_ptr_lambda_true__Head_base(long long a1, long long a2);
long long std__Head_base_0ul_int_ptr_false__M_head_const_ref(long long a1);
long long std__Head_base_1ul_test_cpp_smart_ptr_lambda_true__M_head_const_ref(long long a1);

/* C++ exception handling declarations */
void *__cxa_allocate_exception(unsigned long size);
void __cxa_throw(void *exception, struct type_info *tinfo, void (*dest)(void *));
void __cxa_bad_typeid(void);
void __cxa_throw_bad_array_new_length(void);
void *__dynamic_cast(void *src, const void *from_type, const void *to_type, int src2to_dst);
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);

/* std::ios_base::Init function declarations */
typedef struct std_ios_base_Init std_ios_base_Init;
void std_ios_base_Init_ctor(std_ios_base_Init *init);
void std_ios_base_Init_dtor(std_ios_base_Init *init);

/* C++ standard library type declarations */
typedef struct type_info {
 unsigned long vptr;
 const char *name;
} type_info;

std_ios_base_Init std___ioinit;

/* Function: .init_proc @ 0x1820 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_1840 @ 0x1840 */
void sub_1840()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1B14 */
long long test_cpp_member_func(void)
{
 SimpleClass *v0; // x0
 int Value; // [xsp+14h] [xbp+14h]
 unsigned char v3[40]; // [xsp+20h] [xbp+20h] BYREF

 SimpleClass_ctor((SimpleClass *)v3, 5, "Test");
 SimpleClass_setValue((SimpleClass *)v3, 10);
 Value = SimpleClass_getValue((SimpleClass *)v3);
 v0 = (SimpleClass *)SimpleClass_compute((SimpleClass *)v3, 3);
 return Value + (unsigned int)v0 + (unsigned int)SimpleClass_getClassID(v0);
}


/* Function: _Z20test_cpp_constructorv @ 0x1BBC */
long long test_cpp_constructor(void)
{
 LifecycleClass *Data; // x0
 LifecycleClass *v1; // x0
 int v3; // [xsp+14h] [xbp+14h]
 unsigned char v4[16]; // [xsp+18h] [xbp+18h] BYREF

 LifecycleClass_ctor((LifecycleClass *)v4, 5u);
 Data = (LifecycleClass *)(unsigned int)LifecycleClass_getData((LifecycleClass *)v4, 2u);
 v3 = (unsigned int)Data + LifecycleClass_getInstanceCount(Data);
 LifecycleClass_dtor((LifecycleClass *)v4);
 return v3 + 1000 * (unsigned int)LifecycleClass_getInstanceCount(v1);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1C70 */
long long call_virtual_func(long long ( ***a1)(unsigned long long, unsigned long long), unsigned int a2)
{
 return (**a1)(a1, a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1CA0 */
long long test_cpp_virtual_func(void)
{
 unsigned int v0; // w19
 int v2; // [xsp+20h] [xbp+20h]
 int v3; // [xsp+24h] [xbp+24h]
 int v4; // [xsp+28h] [xbp+28h]
 long long ( **v5[2])(unsigned long long, unsigned long long); // [xsp+30h] [xbp+30h] BYREF
 unsigned char *v6; // [xsp+40h] [xbp+40h]
 unsigned char v7[16]; // [xsp+48h] [xbp+48h] BYREF

 v5[0] = (long long ( **)(unsigned long long, unsigned long long))&off_16B10;
 Derived_ctor((Derived *)v7, 3);
 v2 = Base_virtual_func((Base *)v5, 5);
 v3 = Derived_virtual_func((Derived *)v7, 5);
 v5[1] = (long long ( **)(unsigned long long, unsigned long long))v5;
 v6 = v7;
 v4 = call_virtual_func(v5, 5u);
 v0 = v2 + v3 + v4 + call_virtual_func((long long ( ***)(unsigned long long, unsigned long long))v6, 5u);
 Derived_dtor((Derived *)v7);
 Base_dtor((Base *)v5);
 return v0;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1DA8 */
long long test_cpp_multiple_inheritance(void)
{
 unsigned int v0; // w19
 int v2; // [xsp+2Ch] [xbp+2Ch]
 long long ( **v3)(unsigned long long); // [xsp+48h] [xbp+48h] BYREF
 int v4; // [xsp+50h] [xbp+50h]
 long long ( **v5)(unsigned long long); // [xsp+58h] [xbp+58h] BYREF
 int v6; // [xsp+60h] [xbp+60h]

 MultiDerived_ctor((MultiDerived *)&v3);
 v4 = 100;
 v6 = 200;
 v2 = (*v3)(&v3);
 v0 = v2 + (*v5)(&v5) + (&v3 != &v5);
 MultiDerived_dtor((MultiDerived *)&v3);
 return v0;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1EA4 */
long long test_cpp_diamond_inheritance(void)
{
 unsigned int v0; // w19
 int v2; // [xsp+28h] [xbp+28h]
 unsigned char v3[32]; // [xsp+38h] [xbp+38h] BYREF
 long long ( **v4)(unsigned long long); // [xsp+58h] [xbp+58h] BYREF
 int v5; // [xsp+60h] [xbp+60h]

 DiamondDerived_ctor((DiamondDerived *)v3);
 v5 = 50;
 v2 = (*v4)(&v4);
 v5 = 100;
 v0 = v2 + (*v4)(&v4);
 DiamondDerived_dtor((DiamondDerived *)v3);
 return v0;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1F78 */
long long test_cpp_operator_overload(void)
{
 int v0; // w0
 char v2; // [xsp+1Fh] [xbp+1Fh]
 unsigned char v3[8]; // [xsp+20h] [xbp+20h] BYREF
 unsigned char v4[8]; // [xsp+28h] [xbp+28h] BYREF
 long long v5; // [xsp+30h] [xbp+30h] BYREF

 Point_ctor((Point *)v3, 1, 2);
 Point_ctor((Point *)v4, 3, 4);
 v5 = Point_operator_plus(v3, v4);
 v2 = Point_operator_equals(v3, v4);
 Point_operator_increment(&v5);
 if ( v2 )
 v0 = 0;
 else
 v0 = 10;
 return (unsigned int)(v0 + v5 + HIDWORD(v5));
}


/* Function: _Z22test_cpp_template_funcv @ 0x2034 */
long long test_cpp_template_func(void)
{
 int v0; // w0
 int v2; // [xsp+14h] [xbp+14h] BYREF
 int v3; // [xsp+18h] [xbp+18h] BYREF
 int v4; // [xsp+1Ch] [xbp+1Ch]
 double v5; // [xsp+20h] [xbp+20h]

 v0 = template_max_int(3, 7);
 v4 = v0;
 v5 = template_max_double(2.5, 1.5);
 v2 = 10;
 v3 = 20;
 template_swap_int(&v2, &v3);
 return (unsigned int)((int)v5 + v4 + v2 + v3);
}


/* Function: _Z23test_cpp_template_classv @ 0x20DC */
long long test_cpp_template_class(void)
{
 int v1; // [xsp+10h] [xbp+10h]
 int Size; // [xsp+14h] [xbp+14h]
 unsigned char v3[48]; // [xsp+20h] [xbp+20h] BYREF
 unsigned char v4[88]; // [xsp+50h] [xbp+50h] BYREF

 Container_int_Container((long long)v3);
 Container_int_push((long long)v3, 10);
 Container_int_push((long long)v3, 20);
 Container_int_push((long long)v3, 30);
 v1 = Container_int_get((long long)v3, 0);
 Size = Container_int_getSize((long long)v3);
 Container_double_Container((long long)v4);
 Container_double_push((long long)v4, 3.14);
 return (unsigned int)(v1 + Size + (int)Container_double_get((long long)v4, 0));
}


/* Function: _ZZ15test_cpp_lambdavENKUliE_clEi @ 0x21B0 */
long long test_cpp_lambda_lambda_int_operator(long long a1, int a2)
{
 **(unsigned int **)(a1 + 8) += 5;
 return (unsigned int)(*(unsigned int *)a1 * a2 + **(unsigned int **)(a1 + 8));
}


/* Function: _Z15test_cpp_lambdav @ 0x2200 */
long long test_cpp_lambda(void)
{
 unsigned int v1[2]; // [xsp+18h] [xbp+18h] BYREF
 int v2; // [xsp+28h] [xbp+28h] BYREF
 unsigned int *v3; // [xsp+30h] [xbp+30h]

 v1[1] = 10;
 v1[0] = 20;
 v2 = 10;
 v3 = v1;
 return (unsigned int)test_cpp_lambda_lambda_int_operator((long long)&v2, 3) + 30;
}


/* Function: _Z18test_cpp_exceptionv @ 0x2290 */
void test_cpp_exception(void)
{
 unsigned int *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)0, 0);
}


/* Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ @ 0x23B4 */
void test_cpp_smart_ptr_lambda_int_ptr_operator(long long a1, unsigned int *a2)
{
 *a2 = -1;
 if ( a2 )
 operator_delete(a2, 4u);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x23F0 */
long long test_cpp_smart_ptr(void)
{
 unsigned int *v0; // x0
 long long v1; // x0
 unsigned int *v2; // x2
 unsigned int *v3; // x0
 unsigned int v4; // w19
 unsigned char v6[4]; // [xsp+28h] [xbp+28h] BYREF
 int v7; // [xsp+2Ch] [xbp+2Ch]
 int v8; // [xsp+30h] [xbp+30h]
 int v9; // [xsp+34h] [xbp+34h]
 unsigned char v10[8]; // [xsp+38h] [xbp+38h] BYREF
 unsigned char v11[8]; // [xsp+40h] [xbp+40h] BYREF
 unsigned char v12[8]; // [xsp+48h] [xbp+48h] BYREF
 unsigned char v13[8]; // [xsp+50h] [xbp+50h] BYREF

 v0 = (unsigned int *)operator_new(4u);
 *v0 = 100;
 std_unique_ptr_int_std_default_delete_int_void_unique_ptr(v10, v0);
 *(unsigned int *)std_unique_ptr_int_operator_dereference(v10) = 200;
 v1 = std_move_unique_ptr_int(v10);
 std_unique_ptr_int_unique_ptr(v11, v1);
 v7 = *(unsigned int *)std_unique_ptr_int_operator_dereference(v11);
 v2 = (unsigned int *)operator_new_array(0x14u);
 *v2 = 1;
 v2[1] = 2;
 v2[2] = 3;
 v2[3] = 4;
 v2[4] = 5;
 std_unique_ptr_int_array_unique_ptr(v12, v2);
 v8 = *(unsigned int *)std_unique_ptr_int_array_operator_bracket(v12, 2);
 v3 = (unsigned int *)operator_new(4u);
 *v3 = 500;
 std_unique_ptr_int_lambda_unique_ptr(
 v13,
 v3,
 v6);
 v9 = *(unsigned int *)std_unique_ptr_int_lambda_operator_dereference(v13);
 v4 = v7 + v8 + v9;
 std_unique_ptr_int_lambda_destructor(v13);
 std_unique_ptr_int_array_destructor(v12);
 std_unique_ptr_int_destructor(v11);
 operator_delete(v10, 8u);
 return v4;
}


/* Function: _Z13test_cpp_rttiv @ 0x25A0 */
long long test_cpp_rtti(void)
{
 RTTIDerivedA *v0; // x19
 RTTIDerivedB *v1; // x19
 RTTIDerivedA *v2; // x0
 RTTIDerivedB *v3; // x0
 const char *v4; // x0
 int v6; // [xsp+2Ch] [xbp+2Ch]
 unsigned int v7; // [xsp+2Ch] [xbp+2Ch]
 RTTIDerivedA *lpsrc; // [xsp+30h] [xbp+30h]

 v0 = (RTTIDerivedA *)operator_new(8u);
 *(unsigned long long *)v0 = 0;
 RTTIDerivedA_ctor(v0);
 lpsrc = v0;
 v1 = (RTTIDerivedB *)operator_new(8u);
 *(unsigned long long *)v1 = 0;
 RTTIDerivedB_ctor(v1);
 v6 = 0;
 if ( !lpsrc )
 __cxa_bad_typeid();
 if ( (unsigned char)std_type_info_operator_equals(*(unsigned long long *)(*(unsigned long long *)lpsrc - 8LL), &typeinfo_for_RTTIDerivedA) )
 v6 = 10;
 if ( !v1 )
 __cxa_bad_typeid();
 if ( (unsigned char)std_type_info_operator_equals(*(unsigned long long *)(*(unsigned long long *)v1 - 8LL), &typeinfo_for_RTTIDerivedB) )
 v6 += 20;
 v2 = (RTTIDerivedA *)__dynamic_cast(
 lpsrc,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0);
 if ( v2 )
 v6 += RTTIDerivedA_derivedA_data(v2);
 v3 = (RTTIDerivedB *)__dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0);
 if ( v3 )
 v6 += RTTIDerivedB_derivedB_data(v3);
 v4 = (const char *)std_type_info_name((type_info *)(*(unsigned long long *)lpsrc - 8LL));
 v7 = strlen(v4) + v6;
 (*(void (**)(void))(*(unsigned long long *)lpsrc + 8LL))();
 (*(void ( **)(RTTIDerivedB *))(*(unsigned long long *)v1 + 8LL))(v1);
 return v7;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x2794 */
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

 puts(asc_45E8);
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


/* Function: main @ 0x28A4 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI2St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_ @ 0x28BC */
long long ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI2St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_(
 long long a1,
 long long a2,
 long long a3)
{
 return std___uniq_ptr_impl_lambda_constructor(
 a1,
 a2,
 a3);
}


/* Function: std_unique_ptr_lambda_unique_ptr @ 0x28EC */
long long std_unique_ptr_lambda_unique_ptr(
 long long a1,
 long long a2,
 long long a3)
{
 return ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI2St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_(
 a1,
 a2,
 a3);
}


/* Function: std_unique_ptr_lambda_destructor @ 0x291C */
unsigned long long * std_unique_ptr_lambda_destructor(long long a1)
{
 long long deleter; // x19
 unsigned int **v2; // x0
 unsigned long long *result; // x0
 unsigned long long *v5; // [xsp+38h] [xbp+38h]

 v5 = (unsigned long long *)std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_ptr(a1);
 if ( *v5 )
 {
 deleter = std_unique_ptr_int_lambda_get_deleter(a1);
 v2 = (unsigned int **)std_move_int_ptr_ref(v5);
 test_cpp_smart_ptr_lambda_int_ptr_operator(deleter, *v2);
 }
 result = v5;
 *v5 = 0;
 return result;
}


/* Function: std_unique_ptr_int_lambda_operator_dereference @ 0x2984 */
long long std_unique_ptr_int_lambda_operator_dereference(long long a1)
{
 return std_unique_ptr_int_lambda_get(a1);
}


/* Function: std___uniq_ptr_impl_lambda_constructor @ 0x29A8 */
long long std___uniq_ptr_impl_lambda_constructor(
 long long a1,
 long long a2,
 long long a3)
{
 long long v4; // x0
 unsigned long long v6[2]; // [xsp+30h] [xbp+30h] BYREF

 v6[1] = a1;
 v6[0] = a2;
 v4 = std_forward_test_cpp_smart_ptr_lambda_const_ref(a3);
 return std_tuple_int_ptr_test_cpp_smart_ptr_lambda_tuple_int_ptr_ref_const_ref_true(
 a1,
 v6,
 v4);
}


/* Function: std___uniq_ptr_impl_lambda_M_ptr @ 0x29F4 */
long long std___uniq_ptr_impl_lambda_M_ptr(long long a1)
{
 return std_get_0ul_int_ptr_test_cpp_smart_ptr_lambda(a1);
}


/* Function: std_unique_ptr_lambda_get_deleter @ 0x2A10 */
long long std_unique_ptr_lambda_get_deleter(long long a1)
{
 return std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_deleter(a1);
}


/* Function: std_unique_ptr_lambda_get @ 0x2A2C */
long long std_unique_ptr_lambda_get(long long a1)
{
 return std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_ptr(a1);
}


/* Function: std_forward_lambda_const_ref @ 0x2A48 */
long long std_forward_test_cpp_smart_ptr_lambda_const_ref(long long a1)
{
 return a1;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x2A5C */
long long std_tuple_int_ptr_test_cpp_smart_ptr_lambda_tuple_int_ptr_ref_const_ref_true(
 long long a1,
 long long a2)
{
 long long v3; // x20
 long long v4; // x0

 v3 = std_forward_int_ptr_ref(a2);
 std_forward_test_cpp_smart_ptr_lambda_const_ref();
 return std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_lambda__Tuple_impl_int_ptr_ref_const_ref_void(
 a1,
 v3,
 v4);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x2AAC */
long long std_get_0ul_int_ptr_test_cpp_smart_ptr_lambda(long long a1)
{
 return std__get_helper_0ul_int_ptr_test_cpp_smart_ptr_lambda(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv @ 0x2AC8 */
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_deleter(long long a1)
{
 return std_get_1ul_int_ptr_test_cpp_smart_ptr_lambda(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x2AE4 */
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_ptr(long long a1)
{
 return *(unsigned long long *)std_get_0ul_int_ptr_test_cpp_smart_ptr_lambda(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x2B04 */
long long std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_lambda__Tuple_impl_int_ptr_ref_const_ref_void(
 long long a1,
 long long a2,
 long long a3)
{
 long long v2;
 long long v3;

 v2 = std_forward_test_cpp_smart_ptr_lambda_const_ref(a3);
 std__Tuple_impl_1ul_test_cpp_smart_ptr_lambda__Tuple_impl(a1, v2);
 v3 = std_forward_int_ptr_ref(a2);
 return std__Head_base_0ul_int_ptr_false__Head_base_int_ptr_ref(a1, v3);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x2B58 */
long long std___get_helper_0ul_int_ptr_test_cpp_smart_ptr_lambda(long long a1)
{
 return std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_lambda__M_head(a1);
}


/* Function: _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x2B74 */
long long std_get_1ul_int_ptr_test_cpp_smart_ptr_lambda(long long a1)
{
 return std__get_helper_1ul_test_cpp_smart_ptr_lambda(a1);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x2B90 */
long long std_get_0ul_int_ptr_test_cpp_smart_ptr_lambda_const_ref(long long a1)
{
 return std__get_helper_0ul_int_ptr_test_cpp_smart_ptr_lambda_const_ref(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_ @ 0x2BAC */
long long std__Tuple_impl_1ul_test_cpp_smart_ptr_lambda__Tuple_impl(
 long long a1,
 long long a2)
{
 return std__Head_base_1ul_test_cpp_smart_ptr_lambda_true__Head_base(a1, a2);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_ @ 0x2BD4 */
long long std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_lambda__M_head(long long a1)
{
 return std__Head_base_0ul_int_ptr_false__M_head(a1);
}


/* Function: _ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvEUlPiE_JEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x2BF0 */
long long std___get_helper_1ul_test_cpp_smart_ptr_lambda(long long a1)
{
 return std__Tuple_impl_1ul_test_cpp_smart_ptr_lambda__M_head(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x2C0C */
long long std___get_helper_0ul_int_ptr_test_cpp_smart_ptr_lambda_const_ref(long long a1)
{
 return std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_lambda__M_head_const_ref(a1);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_ @ 0x2C28 */
void std__Head_base_1ul_test_cpp_smart_ptr_lambda_true__Head_base()
{
 ;
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_ @ 0x2C40 */
long long std__Tuple_impl_1ul_test_cpp_smart_ptr_lambda__M_head(long long a1)
{
 return std__Head_base_1ul_test_cpp_smart_ptr_lambda_true__M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ @ 0x2C5C */
long long std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_lambda__M_head_const_ref(long long a1)
{
 return std__Head_base_0ul_int_ptr_false__M_head_const_ref(a1);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_ @ 0x2C78 */
void std__Head_base_1ul_test_cpp_smart_ptr_lambda_true__M_head()
{
 ;
}


/* Function: _Z41__static_initialization_and_destruction_0ii @ 0x2C8C */
long long __static_initialization_and_destruction_0(long long result, int a2)
{
 result = (unsigned int)result;
 if ( (unsigned int)result == 1 )
 {
 result = 0xFFFF;
 if ( a2 == 0xFFFF )
 {
 std_ios_base_Init_ctor(&std___ioinit);
 return __cxa_atexit((void (*)(void *))&std_ios_base_Init_dtor, &std___ioinit, &_dso_handle);
 }
 }
 return result;
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x2CEC */
long long GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 return __static_initialization_and_destruction_0(1, 0xFFFF);
}


/* Function: _ZNKSt9type_info4nameEv @ 0x2D08 */
long long std_type_info_name(std::type_info *this)
{
 if ( **((unsigned char **)this + 1) == 42 )
 return *((unsigned long long *)this + 1) + 1LL;
 else
 return *((unsigned long long *)this + 1);
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x2D44 */
bool std_type_info_operator_equals(long long a1, long long a2)
{
 return *(unsigned long long *)(a1 + 8) == *(unsigned long long *)(a2 + 8)
 || **(unsigned char **)(a1 + 8) != 42 && !strcmp(*(const char **)(a1 + 8), *(const char **)(a2 + 8));
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x2DB8 */
void SimpleClass_ctor(SimpleClass *this, int a2, const char *a3)
{
 *(unsigned int *)this = a2;
 strncpy((char *)this + 4, a3, 0x1Fu);
 *((unsigned char *)this + 35) = 0;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x2E00 */
long long SimpleClass_getValue(SimpleClass *this)
{
 return *(unsigned int *)this;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x2E18 */
unsigned int * SimpleClass_setValue(unsigned int *this, int a2)
{
  *this = a2;
  return this;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x2E3C */
long long SimpleClass_compute(SimpleClass *this, int a2)
{
 int v2; // w19

 v2 = *(unsigned int *)this * a2;
 return (long long)(v2 + (unsigned int)strlen((const char *)this + 4));
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x2E80 */
long long SimpleClass_getClassID(SimpleClass *this)
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Em @ 0x2E88 */
void LifecycleClass_ctor(LifecycleClass *this, unsigned long long a2)
{
 unsigned long long i; // [xsp+28h] [xbp+28h]

 *((unsigned long long *)this + 1) = a2;
 if ( a2 > 0x1FFFFFFFFFFFFFFELL )
 __cxa_throw_bad_array_new_length();
 *(unsigned long long *)this = operator_new_array(4 * a2);
 for ( i = 0; i < a2; ++i )
 *(unsigned int *)(*(unsigned long long *)this + 4 * i) = 10 * i;
 ++LifecycleClass_instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x2F50 */
void LifecycleClass_dtor(void **this)
{
 if ( *this )
 operator_delete_array(*this);
 --LifecycleClass_instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEm @ 0x2FA0 */
long long LifecycleClass_getData(LifecycleClass *this, unsigned long long a2)
{
 if ( a2 >= *((unsigned long long *)this + 1) )
 return 0xFFFFFFFFLL;
 else
 return *(unsigned int *)(*(unsigned long long *)this + 4 * a2);
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x2FE8 */
long long LifecycleClass_getInstanceCount(LifecycleClass *this)
{
 return (unsigned int)LifecycleClass_instance_count;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x2FF8 */
long long Base_virtual_func(Base *this, int a2)
{
return (unsigned int)(a2 + 1);
}

/* Function: _ZNK4Base7getNameEv @ 0x3014 */
const char * Base_getName(Base *this)
{
 return "Base";
}

/* Function: _ZN4BaseD2Ev @ 0x302C */
void Base_dtor(Base *this)
{
 *(unsigned long long *)this = &off_16B10;
}

/* Function: _ZN4BaseD0Ev @ 0x3050 */
void Base_deleting_dtor(Base *this)
{
 Base_dtor(this);
 operator_delete(this, 8u);
}

/* Function: _ZN4BaseC2Ev @ 0x3078 */
void Base_ctor(Base *this)
{
 *(unsigned long long *)this = &off_16B10;
}


/* Function: _ZN7DerivedC2Ei @ 0x309C */
void Derived_ctor(Derived *this, int a2)
{
 Base_ctor(this);
 *(unsigned long long *)this = &off_16AE0;
 *((unsigned int *)this + 2) = a2;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x30DC */
long long Derived_virtual_func(Derived *this, int a2)
{
  return (unsigned int)(*((unsigned int *)this + 2) * a2);
}


/* Function: _ZNK7Derived7getNameEv @ 0x3100 */
const char * Derived_getName(Derived *this)
{
 return "Derived";
}


/* Function: _ZN5BaseA5funcAEv @ 0x3118 */
long long BaseA_funcA(BaseA *this)
{
  return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x312C */
void BaseA_dtor(BaseA *this)
{
  *(unsigned long long *)this = &off_16AB8;
}


/* Function: _ZN5BaseAD0Ev @ 0x3150 */
void BaseA_deleting_dtor(BaseA *this)
{
 BaseA_dtor(this);
 operator_delete(this, 0x10u);
}


/* Function: _ZN5BaseB5funcBEv @ 0x3178 */
long long BaseB_funcB(BaseB *this)
{
  return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x318C */
void BaseB_dtor(BaseB *this)
{
  *(unsigned long long *)this = &off_16A90;
}


/* Function: _ZN5BaseBD0Ev @ 0x31B0 */
void BaseB_deleting_dtor(BaseB *this)
{
 BaseB_dtor(this);
 operator_delete(this, 0x10u);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x31D8 */
long long MultiDerived_funcA(MultiDerived *this)
{
  return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x31EC */
long long MultiDerived_funcB(MultiDerived *this)
{
  return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x3200 */
long long MultiDerived_funcB_nonvirtual_thunk(MultiDerived *this)
{
 return MultiDerived_funcB((MultiDerived *)((char *)this - 16));
}


/* Function: _ZN5BaseAC2Ev @ 0x3208 */
void BaseA_ctor(BaseA *this)
{
 *(unsigned long long *)this = &off_16AB8;
}


/* Function: _ZN5BaseBC2Ev @ 0x322C */
void BaseB_ctor(BaseB *this)
{
 *(unsigned long long *)this = &off_16A90;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x3250 */
void MultiDerived_ctor(MultiDerived *this)
{
 BaseA_ctor(this);
 BaseB_ctor((MultiDerived *)((char *)this + 16));
 *(unsigned long long *)this = &off_16A38;
 *((unsigned long long *)this + 2) = &off_16A68;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x329C */
long long VirtualBase_func(VirtualBase *this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x32B0 */
void VirtualBase_dtor(VirtualBase *this)
{
 *(unsigned long long *)this = &off_16A10;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x32D4 */
void VirtualBase_deleting_dtor(VirtualBase *this)
{
 VirtualBase_dtor(this);
 operator_delete(this, 0x10u);
}


/* Function: _ZN7MiddleA4funcEv @ 0x32FC */
long long MiddleA_func(MiddleA *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 150);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x3330 */
long long MiddleA_func_virtual_thunk(MiddleA *this)
{
 return MiddleA_func((MiddleA *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x3340 */
long long MiddleB_func(MiddleB *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 200);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x3374 */
long long MiddleB_func_virtual_thunk(MiddleB *this)
{
 return MiddleB_func((MiddleB *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x3384 */
long long DiamondDerived_func(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 250);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x33B8 */
long long DiamondDerived_func_virtual_thunk(DiamondDerived *this)
{
 return DiamondDerived_func((DiamondDerived *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)));
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x33C8 */
long long DiamondDerived_func_nonvirtual_thunk(DiamondDerived *this)
{
 return DiamondDerived_func((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x33D0 */
void VirtualBase_ctor(VirtualBase *this)
{
 *(unsigned long long *)this = &off_16A10;
}


/* Function: _ZN7MiddleAC2Ev @ 0x33F4 */
void MiddleA_ctor(MiddleA *this, unsigned long long *a2)
{
 *(unsigned long long *)this = *a2;
 *(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) = a2[1];
}


/* Function: _ZN7MiddleAD2Ev @ 0x3444 */
void MiddleA_dtor(MiddleA *this, unsigned long long *a2)
{
 *(unsigned long long *)this = *a2;
 *(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) = a2[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x3494 */
void MiddleB_ctor(MiddleB *this, unsigned long long *a2)
{
 *(unsigned long long *)this = *a2;
 *(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) = a2[1];
}


/* Function: _ZN7MiddleBD2Ev @ 0x34E4 */
void MiddleB_dtor(MiddleB *this, unsigned long long *a2)
{
 *(unsigned long long *)this = *a2;
 *(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) = a2[1];
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x3534 */
void DiamondDerived_ctor(DiamondDerived *this)
{
 VirtualBase_ctor((VirtualBase *)((DiamondDerived *)((char *)this + 32)));
 MiddleA_ctor(this, off_16900);
 MiddleB_ctor((MiddleB *)((DiamondDerived *)((char *)this + 16), off_16910);
 *(unsigned long long *)this = &off_16878;
 *((unsigned long long *)this + 4) = &off_168E0;
 *((unsigned long long *)this + 2) = &off_168A8;
}


/* Function: _ZN5PointC2Eii @ 0x35C0 */
void Point_ctor(Point *this, int a2, int a3)
{
 *(unsigned int *)this = a2;
 *((unsigned int *)this + 1) = a3;
}


/* Function: _ZNK5PointplERKS_ @ 0x35F4 */
long long Point_operator_plus(unsigned int *a1, unsigned int *a2)
{
 long long v3; // [xsp+20h] [xbp+20h] BYREF

 Point_ctor((Point *)&v3, *a1 + *a2, a1[1] + a2[1]);
 return v3;
}


/* Function: _ZNK5PointeqERKS_ @ 0x3684 */
bool Point_operator_equals(unsigned int *a1, unsigned int *a2)
{
 return *a1 == *a2 && a1[1] == a2[1];
}


/* Function: _ZN5PointppEv @ 0x36D4 */
unsigned int * Point_operator_increment(unsigned int *result)
{
 ++*result;
 ++result[1];
 return result;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x3710 */
long long template_max_int(long long result, int a2)
{
 if ( (int)result <= a2 )
 return (unsigned int)a2;
 else
 return (unsigned int)result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x3740 */
double template_max_double(double result, double a2)
{
 if ( result <= a2 )
 return a2;
 return result;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x3774 */
int * template_swap_int(int *a1, int *a2)
{
 int *result; // x0
 int v3; // [xsp+1Ch] [xbp-4h]

 v3 = *a1;
 *a1 = *a2;
 result = a2;
 *a2 = v3;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x37B4 */
long long Container_int_ctor(long long result)
{
 *(unsigned int *)(result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x37D0 */
long long Container_int_push(long long a1, int a2)
{
 long long result; // x0

 result = *(unsigned int *)(a1 + 40);
 if ( (int)result <= 9 )
 {
 LODWORD(result) = *(unsigned int *)(a1 + 40);
 *(unsigned int *)(a1 + 40) = result + 1;
 result = (int)result;
 *(unsigned int *)(a1 + 4LL * (int)result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x381C */
long long Container_int_get(long long a1, int a2)
{
 if ( a2 < 0 || a2 >= *(unsigned int *)(a1 + 40) )
 return 0;
 else
 return *(unsigned int *)(a1 + 4LL * a2);
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x3864 */
long long Container_int_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x387C */
long long Container_double_ctor(long long result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x3898 */
long long Container_double_push(long long a1, double a2)
{
 long long result; // x0

 result = *(unsigned int *)(a1 + 80);
 if ( (int)result <= 9 )
 {
 LODWORD(result) = *(unsigned int *)(a1 + 80);
 *(unsigned int *)(a1 + 80) = result + 1;
 result = (int)result;
 *(double *)(a1 + 8LL * (int)result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x38E4 */
double Container_double_get(long long a1, int a2)
{
 if ( a2 < 0 || a2 >= *(unsigned int *)(a1 + 80) )
 return 0.0;
 else
 return *(double *)(a1 + 8LL * a2);
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x392C */
long long Container_double_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x3944 */
long long std___uniq_ptr_data_int_default_delete_int___uniq_ptr_data(
 long long a1,
 long long a2)
{
 return std___uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x396C */
long long std_unique_ptr_int_unique_ptr(long long a1, long long a2)
{
 return std___uniq_ptr_data_int_default_delete_int___uniq_ptr_data(a1, a2);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x3994 */
long long RTTIBase_getType(RTTIBase *this)
{
 return 0;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x39A8 */
long long RTTIDerivedA_getType(RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x39BC */
long long RTTIDerivedA_derivedA_data(RTTIDerivedA *this)
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x39D0 */
long long RTTIDerivedB_getType(RTTIDerivedB *this)
{
 return 2;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x39E4 */
long long RTTIDerivedB_derivedB_data(RTTIDerivedB *this)
{
 return 200;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x39F8 */
void RTTIBase_ctor(RTTIBase *this)
{
 *(unsigned long long *)this = off_16848;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x3A1C */
void RTTIBase_dtor(RTTIBase *this)
{
 *(unsigned long long *)this = off_16848;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x3A40 */
void RTTIBase_deleting_dtor(RTTIBase *this)
{
 RTTIBase_dtor(this);
 operator_delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x3A68 */
void RTTIDerivedA_ctor(RTTIDerivedA *this)
{
 RTTIBase_ctor(this);
 *(unsigned long long *)this = off_16820;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x3A98 */
void RTTIDerivedB_ctor(RTTIDerivedB *this)
{
 RTTIBase_ctor(this);
 *(unsigned long long *)this = off_167F8;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x3AC8 */
long long ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(
 long long a1,
 long long a2)
{
 return std___uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x3AF0 */
long long std_unique_ptr_int_std_default_delete_int_void_unique_ptr(long long a1, long long a2)
{
 return ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(a1, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x3B18 */
unsigned long long * std_unique_ptr_int_destructor(long long a1)
{
 long long deleter; // x19
 unsigned long long *v2; // x0
 unsigned long long *result; // x0
 unsigned long long *v5; // [xsp+38h] [xbp+38h]

 v5 = (unsigned long long *)std___uniq_ptr_impl_int_default_delete_int__M_ptr(a1);
 if ( *v5 )
 {
 deleter = std_unique_ptr_int_get_deleter(a1);
 v2 = (unsigned long long *)std_move_int_ptr_ref((long long)v5);
 std_default_delete_int_operator(deleter, (void *)*v2);
 }
 result = v5;
 *v5 = 0;
 return result;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x3B80 */
long long std_unique_ptr_int_operator_dereference(long long a1)
{
 return std_unique_ptr_int_get(a1);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x3BA4 */
void std_move_unique_ptr_int()
{
 ;
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x3BB8 */
unsigned long long * std_Tuple_impl_0ul_int_ptr_default_delete_int__Tuple_impl(unsigned long long *a1, unsigned long long *a2)
{
 unsigned long long *result; // x0

 std_Tuple_impl_1ul_default_delete_int__Tuple_impl(a1, a2);
 result = a1;
 *a1 = *a2;
 return result;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x3BF0 */
unsigned long long * std_tuple_int_ptr_default_delete_int_tuple_move(unsigned long long *a1, unsigned long long *a2)
{
 return std_Tuple_impl_0ul_int_ptr_default_delete_int__Tuple_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x3C18 */
unsigned long long * std___uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl_move(unsigned long long *a1, long long a2)
{
 unsigned long long *v3; // x0
 unsigned long long *result; // x0

 std_move_tuple_int_ptr_default_delete_int_ref();
 v3 = (unsigned long long *)(a2);
 std_tuple_int_ptr_default_delete_int_tuple_move(a1, v3);
 result = (unsigned long long *)std___uniq_ptr_impl_int_default_delete_int__M_ptr(a2);
 *result = 0;
 return result;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x3C60 */
long long ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(
 long long a1,
 long long a2)
{
 return std___uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl_ptr(a1, a2);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x3C88 */
long long std_unique_ptr_int_array_unique_ptr_int_ptr_default_delete_int_array_void_bool(
 long long a1,
 long long a2)
{
 return std___uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x3CB0 */
unsigned long long * std_unique_ptr_int_array_destructor(long long a1)
{
 long long deleter; // x0
 unsigned long long *result; // x0
 unsigned long long *v4; // [xsp+28h] [xbp+28h]

 v4 = (unsigned long long *)std___uniq_ptr_impl_int_default_delete_int_array__M_ptr(a1);
 if ( *v4 )
 {
 deleter = std_unique_ptr_int_array_get_deleter(a1);
 std_default_delete_int_array_operator_int(deleter, (void *)*v4);
 }
 result = v4;
 *v4 = 0;
 return result;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm @ 0x3D0C */
long long std_unique_ptr_int_array_operator_bracket(long long a1, long long a2)
{
 return std_unique_ptr_int_array_get(a1) + 4 * a2;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x3D44 */
unsigned long long * std___uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl_ptr(unsigned long long *a1, long long a2)
{
 unsigned long long *result; // x0

 std_tuple_int_ptr_default_delete_int_tuple_true_true(a1);
 result = (unsigned long long *)std___uniq_ptr_impl_int_default_delete_int__M_ptr((long long)a1);
 *result = a2;
 return result;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x3D80 */
long long std___uniq_ptr_impl_int_default_delete_int__M_ptr(long long a1)
{
 return std_get_0ul_int_ptr_default_delete_int(a1);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x3D9C */
long long std_unique_ptr_int_get_deleter(long long a1)
{
 return std___uniq_ptr_impl_int_default_delete_int__M_deleter(a1);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x3DB8 */
void std_move_int_ptr_ref()
{
 ;
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x3DCC */
void std_default_delete_int_operator(long long a1, void *a2)
{
 if ( a2 )
 operator_delete(a2, 4u);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x3DFC */
long long std_unique_ptr_int_get(long long a1)
{
 return std___uniq_ptr_impl_int_default_delete_int__M_ptr(a1);
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x3E18 */
void std_move_tuple_int_ptr_default_delete_int_ref()
{
 ;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ @ 0x3E2C */
void std_Tuple_impl_1ul_default_delete_int__Tuple_impl()
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x3E44 */
unsigned long long * std___uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl_ptr(unsigned long long *a1, long long a2)
{
 unsigned long long *result; // x0

 std_tuple_int_ptr_default_delete_int_array_tuple_true_true((long long)a1);
 result = (unsigned long long *)std___uniq_ptr_impl_int_default_delete_int_array__M_ptr((long long)a1);
 *result = a2;
 return result;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x3E80 */
long long std___uniq_ptr_impl_int_default_delete_int_array__M_ptr(long long a1)
{
 return std_get_0ul_int_ptr_default_delete_int_array(a1);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x3E9C */
long long std_unique_ptr_int_array_get_deleter(long long a1)
{
 return std___uniq_ptr_impl_int_default_delete_int_array__M_deleter(a1);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ @ 0x3EB8 */
void std_default_delete_int_array_operator_int(long long a1, void *a2)
{
 if ( a2 )
 operator_delete_array(a2);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x3EE8 */
long long std_unique_ptr_int_array_get(long long a1)
{
 return std___uniq_ptr_impl_int_default_delete_int_array__M_ptr(a1);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x3F04 */
long long std_tuple_int_ptr_default_delete_int_tuple_true_true(long long a1)
{
 return std_Tuple_impl_0ul_int_ptr_default_delete_int__Tuple_impl_void(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x3F24 */
long long std_get_0ul_int_ptr_default_delete_int(long long a1)
{
 return std__get_helper_0ul_int_ptr_default_delete_int(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x3F40 */
long long std___uniq_ptr_impl_int_default_delete_int__M_deleter(long long a1)
{
 return std_get_1ul_int_ptr_default_delete_int(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x3F5C */
long long std___uniq_ptr_impl_int_default_delete_int__M_ptr_const(long long a1)
{
 return *(unsigned long long *)std__get_helper_0ul_int_ptr_default_delete_int(a1);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x3F7C */
long long std_tuple_int_ptr_default_delete_int_array_tuple_true_true(long long a1)
{
 return std_Tuple_impl_0ul_int_ptr_default_delete_int_array__Tuple_impl_void(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x3F9C */
long long std_get_0ul_int_ptr_default_delete_int_array(long long a1)
{
 return std__get_helper_0ul_int_ptr_default_delete_int_array(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x3FB8 */
long long std___uniq_ptr_impl_int_default_delete_int_array__M_deleter(long long a1)
{
 return std_get_1ul_int_ptr_default_delete_int_array(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x3FD4 */
long long std___uniq_ptr_impl_int_default_delete_int_array__M_ptr_const(long long a1)
{
 return *(unsigned long long *)std__get_helper_0ul_int_ptr_default_delete_int_array(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev @ 0x3FF4 */
long long std_Tuple_impl_0ul_int_ptr_default_delete_int__Tuple_impl_void(long long a1)
{
 std_Tuple_impl_1ul_default_delete_int__Tuple_impl_void(a1);
 return std__Head_base_0ul_int_ptr_false__Head_base_void(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x401C */
long long std__get_helper_0ul_int_ptr_default_delete_int(long long a1)
{
 return std_Tuple_impl_0ul_int_ptr_default_delete_int__M_head(a1);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x4038 */
long long std_get_1ul_int_ptr_default_delete_int(long long a1)
{
 return std__get_helper_1ul_default_delete_int(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x4054 */
long long std_get_0ul_int_ptr_default_delete_int_const_ref(long long a1)
{
 return std__get_helper_0ul_int_ptr_default_delete_int_const_ref(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x4070 */
long long std_Tuple_impl_0ul_int_ptr_default_delete_int_array__Tuple_impl_void(long long a1)
{
 std__Tuple_impl_1ul_default_delete_int_array__Tuple_impl_void(a1);
 return std__Head_base_0ul_int_ptr_false__Head_base_void(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4098 */
long long std__get_helper_0ul_int_ptr_default_delete_int_array(long long a1)
{
 return std_Tuple_impl_0ul_int_ptr_default_delete_int_array__M_head(a1);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x40B4 */
long long std_get_1ul_int_ptr_default_delete_int_array(long long a1)
{
 return std__get_helper_1ul_default_delete_int_array(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x40D0 */
long long std_get_0ul_int_ptr_default_delete_int_array_const_ref(long long a1)
{
 return std__get_helper_0ul_int_ptr_default_delete_int_array_const_ref(a1);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x40EC */
void std_forward_int_ptr_ref()
{
 ;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev @ 0x4100 */
long long std__Tuple_impl_1ul_default_delete_int__Tuple_impl_void(long long a1)
{
 return std__Head_base_1ul_default_delete_int_true__Head_base(a1);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2Ev @ 0x4120 */
unsigned long long * std__Head_base_0ul_int_ptr_false__Head_base(unsigned long long *result)
{
 *result = 0;
 return result;
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x413C */
long long std_Tuple_impl_0ul_int_ptr_default_delete_int__M_head(long long a1)
{
 return std__Head_base_0ul_int_ptr_false__M_head(a1);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x4158 */
long long std__get_helper_1ul_default_delete_int(long long a1)
{
 return std__Tuple_impl_1ul_default_delete_int__M_head(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4174 */
long long std__get_helper_0ul_int_ptr_default_delete_int_const_ref(long long a1)
{
 return std_Tuple_impl_0ul_int_ptr_default_delete_int__M_head_const_ref(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev @ 0x4190 */
long long std__Tuple_impl_1ul_default_delete_int_array__Tuple_impl_void(long long a1)
{
 return std__Head_base_1ul_default_delete_int_array_true__Head_base(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x41B0 */
long long std_Tuple_impl_0ul_int_ptr_default_delete_int_array__M_head(long long a1)
{
 return std__Head_base_0ul_int_ptr_false__M_head(a1);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x41CC */
long long std__get_helper_1ul_default_delete_int_array(long long a1)
{
 return std__Tuple_impl_1ul_default_delete_int_array__M_head(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x41E8 */
long long std__get_helper_0ul_int_ptr_default_delete_int_array_const_ref(long long a1)
{
 return std_Tuple_impl_0ul_int_ptr_default_delete_int_array__M_head_const_ref(a1);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ @ 0x4204 */
unsigned long long * std__Head_base_0ul_int_ptr_false__Head_base_int_ptr_ref(unsigned long long *a1)
{
 long long *v1; // x0
 long long v2; // x1
 unsigned long long *result; // x0

 std_forward_int_ptr_ref();
 v2 = *v1;
 result = a1;
 *a1 = v2;
 return result;
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev @ 0x4234 */
void std__Head_base_1ul_default_delete_int_true__Head_base(long long a1)
{
 ;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ @ 0x4248 */
void std__Head_base_0ul_int_ptr_false__M_head()
{
 ;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x425C */
long long std__Tuple_impl_1ul_default_delete_int__M_head(long long a1)
{
 return std__Head_base_1ul_default_delete_int_true__M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x4278 */
long long std__Tuple_impl_0ul_int_ptr_default_delete_int__M_head_const_ref(long long a1)
{
 return std__Head_base_0ul_int_ptr_false__M_head_const_ref(a1);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev @ 0x4294 */
void std__Head_base_1ul_default_delete_int_array_true__Head_base(long long a1)
{
 ;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x42A8 */
long long std__Tuple_impl_1ul_default_delete_int_array__M_head(long long a1)
{
 return std__Head_base_1ul_default_delete_int_array_true__M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x42C4 */
long long std__Tuple_impl_0ul_int_ptr_default_delete_int_array__M_head_const_ref(long long a1)
{
 return std__Head_base_0ul_int_ptr_false__M_head_const_ref(a1);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x42E0 */
void std__Head_base_1ul_default_delete_int_true__M_head_ref()
{
 ;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ @ 0x42F4 */
void std__Head_base_0ul_int_ptr_false__M_head_const_ref()
{
 ;
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x4308 */
void std__Head_base_1ul_default_delete_int_array_true__M_head_ref()
{
 ;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x431C */
void RTTIDerivedB_dtor(RTTIDerivedB *this)
{
 *(unsigned long long *)this = off_167F8;
 RTTIBase_dtor(this);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x434C */
void RTTIDerivedB_deleting_dtor(RTTIDerivedB *this)
{
 RTTIDerivedB_dtor(this);
 operator_delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x4374 */
void RTTIDerivedA_dtor(RTTIDerivedA *this)
{
 *(unsigned long long *)this = off_16820;
 RTTIBase_dtor(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x43A4 */
void RTTIDerivedA_deleting_dtor(RTTIDerivedA *this)
{
 RTTIDerivedA_dtor(this);
 operator_delete(this, 8u);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x43CC */
void DiamondDerived_dtor(DiamondDerived *this)
{
 *(unsigned long long *)this = &off_16878;
 *((unsigned long long *)this + 4) = &off_168E0;
 *((unsigned long long *)this + 2) = &off_168A8;
 MiddleB_dtor((MiddleB *)((char *)this + 16), off_16910);
 MiddleA_dtor(this, off_16900);
 VirtualBase_dtor((VirtualBase *)((char *)this + 32));
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x4458 */
void DiamondDerived_D1Ev_non_virtual_thunk(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x4460 */
void DiamondDerived_D1Ev_virtual_thunk(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x4470 */
void DiamondDerived_deleting_dtor(DiamondDerived *this)
{
 DiamondDerived_dtor(this);
 operator_delete(this, 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x4498 */
void DiamondDerived_D0Ev_non_virtual_thunk(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x44A0 */
void DiamondDerived_D0Ev_virtual_thunk(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL)));
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x44B0 */
void MultiDerived_dtor(MultiDerived *this)
{
 *(unsigned long long *)this = &off_16A38;
 *((unsigned long long *)this + 2) = &off_16A68;
 BaseB_dtor((BaseB *)((char *)this + 16));
 BaseA_dtor(this);
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x44FC */
void MultiDerived_D1Ev_non_virtual_thunk(MultiDerived *this)
{
 MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 16));
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x4504 */
void MultiDerived_deleting_dtor(MultiDerived *this)
{
 MultiDerived_dtor(this);
 operator_delete(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x452C */
void MultiDerived_D0Ev_non_virtual_thunk(MultiDerived *this)
{
 MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 16));
}


/* Function: _ZN7DerivedD2Ev @ 0x4534 */
void Derived_dtor(Derived *this)
{
 *(unsigned long long *)this = &off_16AE0;
 Base_dtor(this);
}


/* Function: _ZN7DerivedD0Ev @ 0x4564 */
void Derived_deleting_dtor(Derived *this)
{
 Derived_dtor(this);
 operator_delete(this, 0x10u);
}


/* Function: .term_proc @ 0x458C */
void term_proc()
{
 ;
}


/* FAILED to decompile: _Znam @ 0x17098 */

/* FAILED to decompile: puts @ 0x170A8 */

/* FAILED to decompile: strlen @ 0x170B0 */

/* FAILED to decompile: __stack_chk_fail @ 0x170B8 */

/* FAILED to decompile: __cxa_begin_catch @ 0x170C0 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x170D0 */

/* FAILED to decompile: __cxa_finalize @ 0x170D8 */

/* FAILED to decompile: __libc_start_main @ 0x170E8 */

/* FAILED to decompile: _Znwm @ 0x170F0 */

/* FAILED to decompile: _ZdlPvm @ 0x170F8 */

/* FAILED to decompile: strncpy @ 0x17100 */

/* FAILED to decompile: __cxa_bad_typeid @ 0x17108 */

/* FAILED to decompile: __dynamic_cast @ 0x17110 */

/* FAILED to decompile: __cxa_atexit @ 0x17118 */

/* FAILED to decompile: _ZdaPv @ 0x17120 */

/* FAILED to decompile: __cxa_throw_bad_array_new_length @ 0x17130 */

/* FAILED to decompile: strcmp @ 0x17138 */

/* FAILED to decompile: __cxa_rethrow @ 0x17140 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x17148 */

/* FAILED to decompile: abort @ 0x17150 */

/* FAILED to decompile: __cxa_end_catch @ 0x17158 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x17160 */

/* FAILED to decompile: __cxa_throw @ 0x17168 */

/* FAILED to decompile: _Unwind_Resume @ 0x17178 */

/* FAILED to decompile: printf @ 0x17180 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x17188 */

/* FAILED to decompile: __gmon_start__ @ 0x17198 */

/* Total functions decompiled: 205, failed: 27 */
