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

/* Forward declarations for C++ classes */
struct SimpleClass;
struct LifecycleClass;
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct Point;
struct Container_int;
struct Container_double;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct VirtualBase;
struct MiddleA;
struct MiddleB;
struct BaseA;
struct BaseB;

/* Struct definitions for C++ classes */
struct SimpleClass {
    int value;
    char name[32];
};
struct LifecycleClass {
    size_t size;
    int *data;
};
struct Base {
    int (**_vptr)(...);
};
struct Derived {
    int (**_vptr)(...);
    int multiplier;
};
struct VirtualBase {
    int (**_vptr)(...);
};
struct BaseA {
    int (**_vptr)(...);
};
struct BaseB {
    int (**_vptr)(...);
};
struct MiddleA {
    struct VirtualBase vb;
    int dataA;
    int (**_vptr)(...);
};
struct MiddleB {
    struct VirtualBase vb;
    int dataB;
    int (**_vptr)(...);
};
struct MultiDerived {
    struct BaseA baseA;
    struct BaseB baseB;
    int dataA;
    int dataB;
    int (**_vptr)(...);
};
struct DiamondDerived {
    struct MiddleA middleA;
    struct MiddleB middleB;
    int dataA;
    int (**_vptr)(...);
};
struct Point {
    int x;
    int y;
};
struct Container_int {
    int data[10];
    int size;
};
struct Container_double {
    double data[10];
    int size;
};
struct RTTIBase {
    int (**_vptr)(...);
};
struct RTTIDerivedA {
    struct RTTIBase rtbiBase;
};
struct RTTIDerivedB {
    struct RTTIBase rtbiBase;
};

/* Missing function declarations */
void Derived_Derived(struct Derived *const this, int m);
void Derived_Derived_destructor(struct Derived *const this);
int Base_virtual_func(struct Base *const this, int x);
int Derived_virtual_func(struct Derived *const this, int x);
void Base_Base_destructor(struct Base *const this);
void MultiDerived_MultiDerived(struct MultiDerived *const this);
void MultiDerived_MultiDerived_destructor(struct MultiDerived *const this);
void DiamondDerived_DiamondDerived(struct DiamondDerived *const this);
void DiamondDerived_DiamondDerived_destructor(struct DiamondDerived *const this);
void Point_Point(struct Point *const this, int _x, int _y);
struct Point Point_operator_plus(const struct Point *const this, const struct Point *other);
bool Point_operator_eq(const struct Point *const this, const struct Point *other);
struct Point * Point_operator_inc(struct Point *const this);
void RTTIDerivedA_RTTIDerivedA(struct RTTIDerivedA *const this);
void RTTIDerivedB_RTTIDerivedB(struct RTTIDerivedB *const this);
int RTTIDerivedA_derivedA_data(const struct RTTIDerivedA *const this);
int RTTIDerivedB_derivedB_data(const struct RTTIDerivedB *const this);
int LifecycleClass_instance_count;

/* Forward declarations for CRT stubs */
long long call_weak_fn(void);
void JUMPOUT(int);
void *__cxa_allocate_exception(unsigned long size);
void __cxa_throw(void *exception, struct type_info *tinfo, void *dest);
void __cxa_bad_typeid(void);
void __cxa_throw_bad_array_new_length(void);
void *__dynamic_cast(const void *src_ptr, const struct __class_type_info *src_type, const struct __class_type_info *dst_type, long src2dst);

/* Missing type definitions for std types */
typedef struct { unsigned char gap0; } std_type_info;

/* std type_info function declarations */
bool std_type_info_operator_eq(const std_type_info *const this, const std_type_info *__arg);
const char * std_type_info_name(const std_type_info *const this);

/* External vtable declarations */
extern long long off_16B10[];
extern long long off_16AE0[];
extern long long off_16AB8[];
extern long long off_16A90[];
extern long long off_16A38[];
extern long long off_16A68[];
extern long long off_16A10[];
extern long long off_16900[];
extern long long off_16910[];
extern long long off_16878[];
extern long long off_168E0[];
extern long long off_168A8[];
extern long long off_16848[];
extern long long off_16820[];
extern long long off_167F8[];

/* External typeinfo declarations */
extern const struct type_info typeinfo_for_RTTIBase;
extern const struct type_info typeinfo_for_RTTIDerivedA;
extern const struct type_info typeinfo_for_RTTIDerivedB;

/* External string constant declarations */
extern const char *asc_45E8;
extern const char *aCppL301D;
extern const char *aCppL302D;
extern const char *aCppL303D;
extern const char *aCppL304D;
extern const char *aCppL305D;
extern const char *aCppL306D;
extern const char *aCppL307D;
extern const char *aCppL308D;
extern const char *aCppL309D;

/* External function declarations */
size_t strlen(const char *s);
int puts(const char *s);
int printf(const char *format, ...);
int strcmp(const char *s1, const char *s2);
char *strncpy(char *dest, const char *src, size_t n);

/* Template function declarations */
int template_max(int a, int b);
double template_max_double(double a, double b);
void template_swap(int *a, int *b);

/* Typedefs for C++ classes */
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct DiamondDerived DiamondDerived;
typedef struct Point Point;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;

/* Deleter struct for smart pointer */
typedef struct { unsigned char gap0; } std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter_inner;
typedef struct { std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter_inner _M_t; } std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter;
typedef struct { std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter _M_t; } std_tuple_int_ptr_deleter;
typedef struct { std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter _M_t; } unique_ptr_int_smart_ptr_deleter;

typedef struct { unsigned char gap0; } std_Tuple_impl_0_int_ptr_deleter;
typedef struct { unsigned char gap0; } std_Tuple_impl_1_deleter;
typedef struct { unsigned char gap0; } std_Head_base_0_int_ptr_false;
typedef struct { unsigned char gap0; } std_Head_base_1_deleter_true;
typedef struct { unsigned char gap0; } std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter;
typedef int * std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter_pointer;

typedef int * std_tuple_element_t_1;
typedef struct { unsigned char gap0; } std_tuple_element_t;
typedef struct { unsigned char gap0; } std_remove_reference_deleter_ref_type;
typedef struct { unsigned char gap0; } unique_ptr_int_smart_ptr_deleter_deleter_type;
typedef int * unique_ptr_int_smart_ptr_deleter_pointer;
typedef struct { unsigned char gap0; } std_default_delete_int;
typedef struct { unsigned char gap0; } std_default_delete_int_array;
typedef struct { unsigned char gap0; } std_uniq_ptr_impl_int_std_default_delete_int;
typedef struct { unsigned char gap0; } std_Tuple_impl_0_int_ptr_default_delete_int_array;
typedef struct { unsigned char gap0; } std_uniq_ptr_impl_int_std_default_delete_int_array;
typedef struct { unsigned char gap0; } std_tuple_int_ptr_default_delete_int_array;
typedef struct { unsigned char gap0; } std_Tuple_impl_1_default_delete_int_array;
typedef struct { unsigned char gap0; } std_Head_base_1_default_delete_int_true;
typedef struct { unsigned char gap0; } std_Head_base_1_default_delete_int_array_true;

/* C++ operator declarations */
void *operator_new(unsigned long size);
void *operator_new_array(unsigned long size);
void operator_delete(void *ptr, unsigned long size);
void operator_delete_array(void *ptr);

/* std unique_ptr function declarations */
typedef struct { unsigned char gap0; } std_unique_ptr_int;
typedef struct { unsigned char gap0; } std_unique_ptr_int_array;
typedef struct { unsigned char gap0; } std_unique_ptr_int_deleter_type;
typedef struct { unsigned char gap0; } std_unique_ptr_int_array_deleter_type;
typedef int * std_uniq_ptr_impl_int_std_default_delete_int_pointer;
typedef int * std_uniq_ptr_impl_int_std_default_delete_int_array_pointer;

void std_Tuple_impl_0ul_int_ptr_deleter_Tuple_impl_int_ptr_ref_deleter_const_void(
 std_Tuple_impl_0_int_ptr_deleter *const this,
 int **__head,
 const const struct {unsigned char gap0;} *a3);
int ** std_get_helper_0ul_int_ptr_deleter(
 std_Tuple_impl_0_int_ptr_deleter *__t);
int ** std_get_0ul_int_ptr_default_delete_int(
 std_tuple_int_ptr_deleter *__t);
std_tuple_element_t * std_get_1ul_int_ptr_deleter(
 std_tuple_int_ptr_deleter *__t);
void std_Tuple_impl_1ul_deleter_Tuple_impl(
 std_Tuple_impl_1_deleter *const this,
 const const struct {unsigned char gap0;} *__head);
const int ** std_get_0ul_int_ptr_default_delete_int_array_const(
 const std_tuple_int_ptr_default_delete_int_array *__t);
void std_Tuple_impl_1ul_default_delete_int_Tuple_impl_void(
 std_Tuple_impl_1_deleter *const this);
std_default_delete_int * std_Tuple_impl_1ul_default_delete_int_M_head(
 std_Tuple_impl_1_deleter *__t);
void std_Tuple_impl_1ul_default_delete_int_array_Tuple_impl_void(
 std_Tuple_impl_1_default_delete_int_array *const this);
std_default_delete_int_array * std_Tuple_impl_1ul_default_delete_int_array_M_head(
 std_Tuple_impl_1_default_delete_int_array *__t);
void std_Head_base_0ul_int_ptr_false_Head_base_void(
 std_Head_base_0_int_ptr_false *const this);
int ** std_Tuple_impl_0ul_int_ptr_default_delete_int_M_head(
 std_Tuple_impl_0_int_ptr_deleter *__t);
int *const * std_Tuple_impl_0ul_int_ptr_default_delete_int_M_head_const(
 const std_Tuple_impl_0_int_ptr_deleter *__t);
int ** std_Tuple_impl_0ul_int_ptr_default_delete_int_array_M_head(
 std_Tuple_impl_0_int_ptr_default_delete_int_array *__t);
int *const * std_Tuple_impl_0ul_int_ptr_default_delete_int_array_M_head_const(
 const std_Tuple_impl_0_int_ptr_default_delete_int_array *__t);
int ** std_get_0ul_int_ptr_default_delete_int_array(
 std_tuple_int_ptr_default_delete_int_array *__t);
const int ** std_get_0ul_int_ptr_default_delete_int_const(
 const std_tuple_int_ptr_deleter *__t);
void std_Tuple_impl_0ul_int_ptr_default_delete_int_array_Tuple_impl_void(
 std_Tuple_impl_0_int_ptr_default_delete_int_array *const this);
int ** std_get_helper_0ul_int_ptr_default_delete_int_array(
 std_Tuple_impl_0_int_ptr_default_delete_int_array *__t);
std_default_delete_int_array * std_get_1ul_int_ptr_default_delete_int_array(
 std_tuple_int_ptr_default_delete_int_array *__t);
void std_Tuple_impl_0ul_int_ptr_default_delete_int_Tuple_impl_void(
 std_Tuple_impl_0_int_ptr_deleter *const this);
int ** std_get_helper_0ul_int_ptr_default_delete_int(
 std_Tuple_impl_0_int_ptr_deleter *__t);
const int ** std_get_helper_0ul_int_ptr_default_delete_int_const(
 const std_Tuple_impl_0_int_ptr_deleter *__t);
std_default_delete_int * std_get_1ul_int_ptr_default_delete_int(
 std_tuple_int_ptr_deleter *__t);
std_default_delete_int_array * std_get_helper_1ul_default_delete_int_array(
 std_Tuple_impl_1_default_delete_int_array *__t);
const int ** std_get_helper_0ul_int_ptr_default_delete_int_array_const(
 const std_Tuple_impl_0_int_ptr_default_delete_int_array *__t);
void std_Head_base_1ul_default_delete_int_true_Head_base_void(
 std_Head_base_1_default_delete_int_true *const this);
void std_Head_base_1ul_default_delete_int_array_true_Head_base_void(
 std_Head_base_1_default_delete_int_array_true *const this);
void std_Tuple_impl_1ul_default_delete_int_Tuple_impl(
 std_Tuple_impl_1_deleter *const this,
 std_Tuple_impl_1_deleter *__in);
std_tuple_int_ptr_deleter * std_move_std_tuple_int_ptr_deleter_ref(
 std_tuple_int_ptr_deleter *__t);

void std_unique_ptr_int_unique_ptr_std_default_delete_int_void(std_unique_ptr_int *this, int *v0);
int * std_unique_ptr_int_operator_deref(std_unique_ptr_int *this);
void * std_move_std_unique_ptr_int_ref(std_unique_ptr_int *this);
void std_unique_ptr_int_unique_ptr(std_unique_ptr_int *const this, void *v1);
void std_unique_ptr_int_array_unique_ptr_int_ptr_std_default_delete_int_array_void_bool(std_unique_ptr_int_array *const this, int *v2);
int std_unique_ptr_int_array_operator_index(const std_unique_ptr_int_array *const this, unsigned int idx);
void std_unique_ptr_int_destructor(std_unique_ptr_int *const this);
void std_unique_ptr_int_array_destructor(std_unique_ptr_int_array *const this);
std_uniq_ptr_impl_int_std_default_delete_int_pointer * std_uniq_ptr_impl_int_std_default_delete_int_M_ptr(void *this_ptr);
std_uniq_ptr_impl_int_std_default_delete_int_array_pointer * std_uniq_ptr_impl_int_std_default_delete_int_array_M_ptr(void *this_ptr);
std_uniq_ptr_impl_int_std_default_delete_int_pointer * std_uniq_ptr_impl_int_default_delete_int_M_ptr(void *this_ptr);
std_uniq_ptr_impl_int_std_default_delete_int_array_pointer * std_uniq_ptr_impl_int_default_delete_int_array_M_ptr(void *this_ptr);
std_default_delete_int * std_uniq_ptr_impl_int_default_delete_int_M_deleter(
 std_uniq_ptr_impl_int_std_default_delete_int *const this);
std_default_delete_int_array * std_uniq_ptr_impl_int_default_delete_int_array_M_deleter(
 std_uniq_ptr_impl_int_std_default_delete_int_array *const this);
void std_uniq_ptr_impl_int_default_delete_int_uniq_ptr_impl(
 std_uniq_ptr_impl_int_std_default_delete_int *const this,
 std_uniq_ptr_impl_int_std_default_delete_int *__u);
void std_uniq_ptr_impl_int_default_delete_int_uniq_ptr_impl_ptr(
 std_uniq_ptr_impl_int_std_default_delete_int *const this,
 int *__p);
void std_uniq_ptr_impl_int_default_delete_int_array_uniq_ptr_impl(
 std_uniq_ptr_impl_int_std_default_delete_int_array *const this,
 int *__p);
int * std_unique_ptr_int_get(
 const std_unique_ptr_int *const this);
std_unique_ptr_int_deleter_type * std_unique_ptr_int_get_deleter(std_unique_ptr_int *this);
std_unique_ptr_int_array_deleter_type * std_unique_ptr_int_array_get_deleter(std_unique_ptr_int_array *this);
int * std_unique_ptr_int_array_get(
 const std_unique_ptr_int_array *const this);
int ** std_move_int_ptr_ref(std_uniq_ptr_impl_int_std_default_delete_int_pointer *__ptr);
void std_default_delete_int_operator()(const std_unique_ptr_int_deleter_type *const this, int *__ptr);
void std_default_delete_int_array_operator()(const std_unique_ptr_int_array_deleter_type *const this, int *__ptr);
void unique_ptr_int_smart_ptr_deleter_unique_ptr_test_cpp_smart_ptr_deleter_void(
 unique_ptr_int_smart_ptr_deleter *const this,
 unique_ptr_int_smart_ptr_deleter_pointer __p,
 const unique_ptr_int_smart_ptr_deleter_deleter_type *__d);
int unique_ptr_int_smart_ptr_deleter_operator_deref(
 const unique_ptr_int_smart_ptr_deleter *const this);
void unique_ptr_int_smart_ptr_deleter_destructor(
 unique_ptr_int_smart_ptr_deleter *const this);
unique_ptr_int_smart_ptr_deleter_deleter_type * unique_ptr_int_smart_ptr_deleter_get_deleter(
 unique_ptr_int_smart_ptr_deleter *const this);
unique_ptr_int_smart_ptr_deleter_pointer unique_ptr_int_smart_ptr_deleter_get(
 const unique_ptr_int_smart_ptr_deleter *const this);
void std_uniq_ptr_data_int_test_cpp_smart_ptr_lambda_int_true_false_uniq_ptr_data_const_test_cpp_smart_ptr_lambda_int(
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter *const this,
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter_pointer a2,
 const const struct {unsigned char gap0;} *a3);
std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter_pointer * std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter_M_ptr(
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter *const this);
struct {unsigned char gap0;} * std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter_M_deleter(
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter *const this);
void std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter_uniq_ptr_impl_deleter_const(
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter *const this,
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter_pointer __p,
 const const struct {unsigned char gap0;} *__d);
const const struct {unsigned char gap0;} * std_forward_test_cpp_smart_ptr_deleter_const(
 std_remove_reference_deleter_ref_type *__t);
void std_tuple_int_ptr_deleter_tuple_int_ptr_ref_deleter_const_true(
 std_tuple_int_ptr_deleter *const this,
 int **__a1,
 const const struct {unsigned char gap0;} *__a2);
void std_tuple_int_ptr_default_delete_int_tuple_true_true(
 std_tuple_int_ptr_deleter *const this);
void std_tuple_int_ptr_default_delete_int_array_tuple_true_true(
 std_tuple_int_ptr_default_delete_int_array *const this);
std_tuple_element_t_1 * std_get_0ul_int_ptr_deleter(
 std_tuple_int_ptr_deleter *__t);
std_default_delete_int * std_get_helper_1ul_default_delete_int(
 std_Tuple_impl_1_deleter *__t);
int ** std_forward_int_ptr_ref(int **__t);
void std_Head_base_0ul_int_ptr_false_Head_base_int_ptr_ref(
 std_Head_base_0_int_ptr_false *const this,
 int **__h);
int ** std_Tuple_impl_0ul_int_ptr_deleter_M_head(
 std_Tuple_impl_0_int_ptr_deleter *__t);
struct {unsigned char gap0;} * std_get_helper_1_test_cpp_smart_ptr_deleter(
 std_Tuple_impl_1_deleter *__t);
void std_Head_base_1ul_deleter_true_Head_base(
 std_Head_base_1_deleter_true *const this,
 const const struct {unsigned char gap0;} *__h);
int ** std_Head_base_0ul_int_ptr_false_M_head(
 std_Head_base_0_int_ptr_false *__b);
struct {unsigned char gap0;} * std_Tuple_impl_1ul_deleter_M_head(
 std_Tuple_impl_1_deleter *__t);
struct {unsigned char gap0;} * std_Head_base_1ul_deleter_true_M_head(
 std_Head_base_1_deleter_true *__b);
std_default_delete_int * std_Head_base_1ul_default_delete_int_true_M_head(
 std_Head_base_1_default_delete_int_true *__b);
int *const * std_Head_base_0ul_int_ptr_false_M_head_const(
 const std_Head_base_0_int_ptr_false *__b);
std_default_delete_int_array * std_Head_base_1ul_default_delete_int_array_true_M_head(
 std_Head_base_1_default_delete_int_array_true *__b);

/* std namespace stubs */
typedef struct { unsigned char gap0; } std_type;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_gcc_O0_g
 * Processor: arm
 */

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
int test_cpp_member_func()
{
 int r1; // [xsp+14h] [xbp+14h]
 int r2; // [xsp+18h] [xbp+18h]
 SimpleClass obj; // [xsp+20h] [xbp+20h] BYREF

 SimpleClass::SimpleClass(&obj, 5, "Test");
 SimpleClass::setValue(&obj, 10);
 r1 = SimpleClass::getValue(&obj);
 r2 = SimpleClass::compute(&obj, 3);
 return r1 + r2 + SimpleClass::getClassID();
}


/* Function: _Z20test_cpp_constructorv @ 0x1BBC */
int test_cpp_constructor()
{
 int result; // [xsp+14h] [xbp+14h]
 int resulta; // [xsp+14h] [xbp+14h]
 LifecycleClass obj; // [xsp+18h] [xbp+18h] BYREF

 LifecycleClass::LifecycleClass(&obj, 5u);
 result = LifecycleClass::getData(&obj, 2u);
 resulta = result + LifecycleClass::getInstanceCount();
 LifecycleClass::~LifecycleClass(&obj);
 return resulta + 1000 * LifecycleClass::getInstanceCount();
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1C70 */
int call_virtual_func(Base *obj, int x)
{
 return (*obj->_vptr.Base)(obj, (unsigned int)x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1CA0 */
int test_cpp_virtual_func()
{
 int v0; // w19
 int r1; // [xsp+20h] [xbp+20h]
 int r2; // [xsp+24h] [xbp+24h]
 int r3; // [xsp+28h] [xbp+28h]
 Base base; // [xsp+30h] [xbp+30h] BYREF
 Base *pb; // [xsp+38h] [xbp+38h]
 Base *pd; // [xsp+40h] [xbp+40h]
 Derived derived; // [xsp+48h] [xbp+48h] BYREF

 base._vptr.Base = (int (**)(...))&off_16B10;
 Derived_Derived(&derived, 3);
 r1 = Base_virtual_func(&base, 5);
 r2 = Derived_virtual_func(&derived, 5);
 pb = &base;
 pd = &derived;
 r3 = call_virtual_func(&base, 5);
 v0 = r1 + r2 + r3 + call_virtual_func(pd, 5);
 Derived_Derived_destructor(&derived);
 Base_Base_destructor(&base);
 return v0;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1DA8 */
int test_cpp_multiple_inheritance()
{
 int v0; // w19
 int r1; // [xsp+2Ch] [xbp+2Ch]
 MultiDerived obj; // [xsp+48h] [xbp+48h] BYREF

 MultiDerived_MultiDerived(&obj);
 obj.dataA = 100;
 obj.dataB = 200;
 r1 = (*obj._vptr.BaseA)(&obj);
 v0 = r1 + (*(long long ( **)(BaseB *))obj._vptr.BaseB)(&obj.BaseB) + (&obj != (MultiDerived *)&obj.BaseB);
 MultiDerived_MultiDerived_destructor(&obj);
 return v0;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1EA4 */
int test_cpp_diamond_inheritance()
{
 int v0; // w19
 int r1; // [xsp+28h] [xbp+28h]
 unsigned char obj[44]; // [xsp+38h] [xbp+38h] BYREF

 DiamondDerived_DiamondDerived((DiamondDerived *const)obj);
 *(unsigned int *)&obj[40] = 50;
 r1 = (**(long long ( ***)(unsigned char *))&obj[32])(&obj[32]);
 *(unsigned int *)&obj[40] = 100;
 v0 = r1 + (**(long long ( ***)(unsigned char *))&obj[32])(&obj[32]);
 DiamondDerived_DiamondDerived_destructor((DiamondDerived *const)obj);
 return v0;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1F78 */
int test_cpp_operator_overload()
{
 int v0; // w0
 bool eq; // [xsp+1Fh] [xbp+1Fh]
 Point p1; // [xsp+20h] [xbp+20h] BYREF
 Point p2; // [xsp+28h] [xbp+28h] BYREF
 Point p3; // [xsp+30h] [xbp+30h] BYREF

 Point_Point(&p1, 1, 2);
 Point::Point(&p2, 3, 4);
 p3 = Point_operator_plus(&p1, &p2);
 eq = Point_operator_eq(&p1, &p2);
 Point_operator_inc(&p3);
 if ( eq )
 v0 = 0;
 else
 v0 = 10;
 return v0 + p3.x + p3.y;
}


/* Function: _Z22test_cpp_template_funcv @ 0x2034 */
int test_cpp_template_func()
{
 int a; // [xsp+14h] [xbp+14h] BYREF
 int b; // [xsp+18h] [xbp+18h] BYREF
 int r1; // [xsp+1Ch] [xbp+1Ch]
 double r2; // [xsp+20h] [xbp+20h]

 r1 = template_max<int>(3, 7);
 r2 = template_max<double>(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap<int>(&a, &b);
 return (int)r2 + r1 + a + b;
}


/* Function: _Z23test_cpp_template_classv @ 0x20DC */
int test_cpp_template_class()
{
 int r1; // [xsp+10h] [xbp+10h]
 int r2; // [xsp+14h] [xbp+14h]
 Container_int int_container; // [xsp+20h] [xbp+20h] BYREF
 Container_double double_container; // [xsp+50h] [xbp+50h] BYREF

 Container_int::Container(&int_container);
 Container_int::push(&int_container, 10);
 Container_int::push(&int_container, 20);
 Container_int::push(&int_container, 30);
 r1 = Container_int::get(&int_container, 0);
 r2 = Container_int::getSize(&int_container);
 Container_double::Container(&double_container);
 Container_double::push(&double_container, 3.14);
 return r1 + r2 + (int)Container_double::get(&double_container, 0);
}


/* Function: _ZZ15test_cpp_lambdavENKUliE_clEi @ 0x21B0 */
int test_cpp_lambda_lambda_int_1_operator__(
 const const struct {int __capture_by_value;int *__capture_by_ref;} *const __closure,
 int x)
{
 *__closure->__capture_by_ref += 5;
 return __closure->__capture_by_value * x + *__closure->__capture_by_ref;
}


/* Function: _Z15test_cpp_lambdav @ 0x2200 */
// local variable allocation has failed, the output may be wrong!
int test_cpp_lambda()
{
 int capture_by_ref; // [xsp+18h] [xbp+18h] BYREF
 int capture_by_value; // [xsp+1Ch] [xbp+1Ch]
 int lambda2; // [xsp+28h] [xbp+28h] OVERLAPPED BYREF
 int *p_capture_by_ref; // [xsp+30h] [xbp+30h]

 capture_by_value = 10;
 capture_by_ref = 20;
 lambda2 = 10;
 p_capture_by_ref = &capture_by_ref;
 return test_cpp_lambda_lambda_int_1_operator__(
 (const const struct {int __capture_by_value;int *__capture_by_ref;} *const)&lambda2,
 3)
 + 30;
}


/* Function: _Z18test_cpp_exceptionv @ 0x2290 */
int test_cpp_exception()
{
 unsigned int *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)0, 0);
}


/* Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ @ 0x23B4 */
void test_cpp_smart_ptr_lambda_int_ptr_1_operator__(
 const const struct {unsigned char gap0;} *const __closure,
 int *p)
{
 *p = -1;
 if ( p )
 operator_delete(p, 4u);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x23F0 */
int test_cpp_smart_ptr()
{
 int *v0; // x0
 void *v1; // x0
 int *v2; // x2
 int *v3; // x0
 int v4; // w19
 unique_ptr_int_smart_ptr_deleter deleter; // [xsp+28h] [xbp+28h] BYREF
 int r1; // [xsp+2Ch] [xbp+2Ch]
 int r2; // [xsp+30h] [xbp+30h]
 int r3; // [xsp+34h] [xbp+34h]
 void *ptr2; // [xsp+38h] [xbp+38h] BYREF
 unique_ptr_int_smart_ptr_deleter ptr3; // [xsp+48h] [xbp+48h] BYREF

 v0 = (int *)operator_new(4u);
 *v0 = 100;
 std_unique_ptr_int_unique_ptr_std_default_delete_int_void(&ptr2, v0);
 *std_unique_ptr_int_operator_deref(&ptr2) = 200;
 v1 = std_move_std_unique_ptr_int_ref(&ptr2);
 std_unique_ptr_int_unique_ptr((std_unique_ptr_int *const)&ptr2._M_t._M_t.std::_Head_base<0,int*,false>, v1);
 r1 = *std_unique_ptr_int_operator_deref((const std_unique_ptr_int *const)&ptr2._M_t._M_t.std::_Head_base<0,int*,false>);
 v2 = (int *)operator_new_array(0x14u);
 *v2 = 1;
 v2[1] = 2;
 v2[2] = 3;
 v2[3] = 4;
 v2[4] = 5;
 std_unique_ptr_int_array_unique_ptr_int_ptr_std_default_delete_int_array_void_bool(
 (std_unique_ptr_int_array *const)&ptr3,
 v2);
 r2 = *std_unique_ptr_int_array_operator_index((const std_unique_ptr_int_array *const)&ptr3, 2u);
 v3 = (int *)operator_new(4u);
 *v3 = 500;
 unique_ptr_int_smart_ptr_deleter_unique_ptr_test_cpp_smart_ptr_deleter_void(
 (unique_ptr_int_smart_ptr_deleter *const)&ptr3._M_t._M_t.std::_Head_base<0,int*,false>,
 v3,
 (const unique_ptr_int_smart_ptr_deleter_deleter_type *)&deleter);
 r3 = *unique_ptr_int_smart_ptr_deleter_operator_deref((const unique_ptr_int_smart_ptr_deleter *const)&ptr3._M_t._M_t.std::_Head_base<0,int*,false>);
 v4 = r1 + r2 + r3;
 unique_ptr_int_smart_ptr_deleter_destructor((unique_ptr_int_smart_ptr_deleter *const)&ptr3._M_t._M_t.std::_Head_base<0,int*,false>);
 std_unique_ptr_int_array_destructor((std_unique_ptr_int_array *const)&ptr3);
 std_unique_ptr_int_destructor((std_unique_ptr_int *const)&ptr2._M_t._M_t.std::_Head_base<0,int*,false>);
 std_unique_ptr_int_destructor(&ptr2);
 return v4;
}


/* Function: _Z13test_cpp_rttiv @ 0x25A0 */
int test_cpp_rtti()
{
 RTTIDerivedA *v0; // x19
 RTTIDerivedB *v1; // x19
 const RTTIDerivedA *v2; // x0
 const RTTIDerivedB *v3; // x0
 const char *v4; // x0
 int result; // [xsp+2Ch] [xbp+2Ch]
 int resulta; // [xsp+2Ch] [xbp+2Ch]
 RTTIBase *obj1; // [xsp+30h] [xbp+30h]

 v0 = (RTTIDerivedA *)operator_new(8u);
 v0->_vptr.RTTIBase = 0;
 RTTIDerivedA_RTTIDerivedA(v0);
 obj1 = v0;
 v1 = (RTTIDerivedB *)operator_new(8u);
 v1->_vptr.RTTIBase = 0;
 RTTIDerivedB_RTTIDerivedB(v1);
 result = 0;
 if ( !obj1 )
 __cxa_bad_typeid();
 if ( std_type_info_operator_eq(
 *((const std_type_info *const *)obj1->_vptr.RTTIBase - 1),
 (const std_type_info *)&typeinfo_for_RTTIDerivedA) )
 {
 result = 10;
 }
 if ( !v1 )
 __cxa_bad_typeid();
 if ( std_type_info_operator_eq(
 *((const std_type_info *const *)v1->_vptr.RTTIBase - 1),
 (const std_type_info *)&typeinfo_for_RTTIDerivedB) )
 {
 result += 20;
 }
 v2 = (const RTTIDerivedA *)__dynamic_cast(
 obj1,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0);
 if ( v2 )
 result += RTTIDerivedA_derivedA_data(v2);
 v3 = (const RTTIDerivedB *)__dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0);
 if ( v3 )
 result += RTTIDerivedB_derivedB_data(v3);
 v4 = std_type_info_name(*((const std_type_info *const *)obj1->_vptr.RTTIBase - 1));
 resulta = strlen(v4) + result;
 (*((void (**)(void))obj1->_vptr.RTTIBase + 1))();
 (*((void ( **)(RTTIDerivedB *))v1->_vptr.RTTIBase + 1))(v1);
 return resulta;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x2794 */
void test_cpp_oo_features()
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


/* Function: std_uniq_ptr_data_int_test_cpp_smart_ptr_lambda @ 0x28BC */
void std_uniq_ptr_data_int_test_cpp_smart_ptr_lambda_int_true_false_uniq_ptr_data_const_test_cpp_smart_ptr_lambda_int(
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter *const this,
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter_pointer a2,
 const const struct {unsigned char gap0;} *a3)
{
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter_uniq_ptr_impl_deleter_const(
 this,
 a2,
 a3);
}


/* Function: unique_ptr_int_smart_ptr_deleter_unique_ptr_test_cpp_smart_ptr_deleter_void @ 0x28EC */
void unique_ptr_int_smart_ptr_deleter_unique_ptr_test_cpp_smart_ptr_deleter_void(
 unique_ptr_int_smart_ptr_deleter *const this,
 unique_ptr_int_smart_ptr_deleter_pointer __p,
 const unique_ptr_int_smart_ptr_deleter_deleter_type *__d)
{
 std_uniq_ptr_data_int_test_cpp_smart_ptr_lambda_int_true_false_uniq_ptr_data_const_test_cpp_smart_ptr_lambda_int(
 &this->_M_t._M_t,
 __p,
 __d);
}


/* Function: unique_ptr_int_smart_ptr_deleter_destructor @ 0x291C */
void unique_ptr_int_smart_ptr_deleter_destructor(
 unique_ptr_int_smart_ptr_deleter *const this)
{
 unique_ptr_int_smart_ptr_deleter_deleter_type *deleter; // x19
 int **v2; // x0
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter_pointer *__ptr; // [xsp+38h] [xbp+38h]

 __ptr = std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter_M_ptr(&this->_M_t._M_t);
 if ( __ptr && *__ptr )
 {
 deleter = unique_ptr_int_smart_ptr_deleter_get_deleter(this);
 v2 = std_move_int_ptr_ref(__ptr);
 test_cpp_smart_ptr_lambda_int_ptr_1_operator__(deleter, *v2);
 }
 if ( __ptr )
 *__ptr = 0;
}


/* Function: unique_ptr_int_smart_ptr_deleter_operator_deref @ 0x2984 */
int unique_ptr_int_smart_ptr_deleter_operator_deref(
 const unique_ptr_int_smart_ptr_deleter *const this)
{
 return unique_ptr_int_smart_ptr_deleter_get(this);
}


/* Function: std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter_uniq_ptr_impl_deleter_const @ 0x29A8 */
void std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter_uniq_ptr_impl_deleter_const(
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter *const this,
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter_pointer __p,
 const const struct {unsigned char gap0;} *__d)
{
 const const struct {unsigned char gap0;} *v4; // x0
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter_pointer __pa; // [xsp+30h] [xbp+30h] BYREF
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter *thisa; // [xsp+38h] [xbp+38h]

 thisa = this;
 __pa = __p;
 v4 = std_forward_test_cpp_smart_ptr_deleter_const((std_remove_reference_deleter_ref_type *)__d);
 std_tuple_int_ptr_deleter_tuple_int_ptr_ref_deleter_const_true(
 &this->_M_t,
 &__pa,
 v4);
}


/* Function: std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter_M_ptr @ 0x29F4 */
std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter_pointer * std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter_M_ptr(
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter *const this)
{
 return std_get_0ul_int_ptr_deleter(&this->_M_t);
}


/* Function: unique_ptr_int_smart_ptr_deleter_get_deleter @ 0x2A10 */
unique_ptr_int_smart_ptr_deleter_deleter_type * unique_ptr_int_smart_ptr_deleter_get_deleter(
 unique_ptr_int_smart_ptr_deleter *const this)
{
 return (unique_ptr_int_smart_ptr_deleter_deleter_type *)std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter_M_deleter(&this->_M_t._M_t);
}


/* Function: unique_ptr_int_smart_ptr_deleter_get @ 0x2A2C */
unique_ptr_int_smart_ptr_deleter_pointer unique_ptr_int_smart_ptr_deleter_get(
 const unique_ptr_int_smart_ptr_deleter *const this)
{
 return std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter_M_ptr(&this->_M_t._M_t);
}


/* Function: std_forward_test_cpp_smart_ptr_deleter_const @ 0x2A48 */
const const struct {unsigned char gap0;} * std_forward_test_cpp_smart_ptr_deleter_const(
 std_remove_reference_deleter_ref_type *__t)
{
 return (const const struct {unsigned char gap0;} *)__t;
}


/* Function: std_tuple_int_ptr_deleter_tuple_int_ptr_ref_deleter_const_true @ 0x2A5C */
void std_tuple_int_ptr_deleter_tuple_int_ptr_ref_deleter_const_true(
 std_tuple_int_ptr_deleter *const this,
 int **__a1,
 const const struct {unsigned char gap0;} *__a2)
{
 int **v4; // x20
 const const struct {unsigned char gap0;} *v5; // x0

 v4 = __a1;
 v5 = std_forward_test_cpp_smart_ptr_deleter_const((std_remove_reference_deleter_ref_type *)__a2);
 std_Tuple_impl_0ul_int_ptr_deleter_Tuple_impl_int_ptr_ref_deleter_const_void(
 this,
 v4,
 v5);
}


/* Function: std_get_0ul_int_ptr_deleter @ 0x2AAC */
std_tuple_element_t_1 * std_get_0ul_int_ptr_deleter(
 std_tuple_int_ptr_deleter *__t)
{
 return (std_tuple_element_t_1 *)std_get_helper_0ul_int_ptr_deleter((std_Tuple_impl_0_int_ptr_deleter *)__t);
}


/* Function: std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter_M_deleter @ 0x2AC8 */
struct {unsigned char gap0;} * std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter_M_deleter(
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter *const this)
{
 return (struct {unsigned char gap0;} *)std_get_1ul_int_ptr_deleter(&this->_M_t);
}


/* Function: std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter_M_ptr_const @ 0x2AE4 */
std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter_pointer std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter_M_ptr_const(
 const std_uniq_ptr_impl_int_test_cpp_smart_ptr_deleter *const this)
{
 return *std_get_0ul_int_ptr_deleter(&this->_M_t);
}


/* Function: std_Tuple_impl_0ul_int_ptr_deleter_Tuple_impl_int_ptr_ref_deleter_const_void @ 0x2B04 */
void std_Tuple_impl_0ul_int_ptr_deleter_Tuple_impl_int_ptr_ref_deleter_const_void(
 std_Tuple_impl_0_int_ptr_deleter *const this,
 int **__head,
 const const struct {unsigned char gap0;} *a3)
{
 const const struct {unsigned char gap0;} *v3; // x0
 int **v4; // x0

 v3 = std_forward_test_cpp_smart_ptr_deleter_const((std_remove_reference_deleter_ref_type *)a3);
 std_Tuple_impl_1ul_deleter_Tuple_impl(this, v3);
 v4 = std_forward_int_ptr_ref(__head);
 std_Head_base_0ul_int_ptr_false_Head_base_int_ptr_ref((std_Head_base_0_int_ptr_false *const)this, v4);
}


/* Function: std_get_helper_0ul_int_ptr_deleter @ 0x2B58 */
int ** std_get_helper_0ul_int_ptr_deleter(
 std_Tuple_impl_0_int_ptr_deleter *__t)
{
 return std_Tuple_impl_0ul_int_ptr_deleter_M_head(__t);
}


/* Function: std_get_1ul_int_ptr_deleter @ 0x2B74 */
std_tuple_element_t * std_get_1ul_int_ptr_deleter(
 std_tuple_int_ptr_deleter *__t)
{
 return (std_tuple_element_t *)std_get_helper_1_test_cpp_smart_ptr_deleter((std_Tuple_impl_1_deleter *)__t);
}


/* Function: std_get_0ul_int_ptr_deleter_const @ 0x2B90 */
const std_tuple_element_t_1 * std_get_0ul_int_ptr_deleter_const(
 const std_tuple_int_ptr_deleter *__t)
{
 return std_get_helper_0ul_int_ptr_deleter(__t);
}


/* Function: std_Tuple_impl_1ul_deleter_Tuple_impl @ 0x2BAC */
void std_Tuple_impl_1ul_deleter_Tuple_impl(
 std_Tuple_impl_1_deleter *const this,
 const const struct {unsigned char gap0;} *__head)
{
 std_Head_base_1ul_deleter_true_Head_base(this, __head);
}


/* Function: std_Tuple_impl_0ul_int_ptr_deleter_M_head @ 0x2BD4 */
int ** std_Tuple_impl_0ul_int_ptr_deleter_M_head(
 std_Tuple_impl_0_int_ptr_deleter *__t)
{
 return std_Head_base_0ul_int_ptr_false_M_head((std_Head_base_0_int_ptr_false *)__t);
}


/* Function: std_get_helper_1_test_cpp_smart_ptr_deleter @ 0x2BF0 */
struct {unsigned char gap0;} * std_get_helper_1_test_cpp_smart_ptr_deleter(
 std_Tuple_impl_1_deleter *__t)
{
 return std_Tuple_impl_1ul_deleter_M_head(__t);
}


/* Function: std_get_helper_0ul_int_ptr_deleter_const @ 0x2C0C */
int *const * std_get_helper_0ul_int_ptr_deleter_const(
 const std_Tuple_impl_0_int_ptr_deleter *__t)
{
 return std_Tuple_impl_0ul_int_ptr_deleter_M_head(__t);
}


/* Function: std_Head_base_1ul_deleter_true_Head_base @ 0x2C28 */
void std_Head_base_1ul_deleter_true_Head_base(
 std_Head_base_1_deleter_true *const this,
 const const struct {unsigned char gap0;} *__h)
{
 ;
}


/* Function: std_Tuple_impl_1ul_deleter_M_head @ 0x2C40 */
struct {unsigned char gap0;} * std_Tuple_impl_1ul_deleter_M_head(
 std_Tuple_impl_1_deleter *__t)
{
 return std_Head_base_1ul_deleter_true_M_head(__t);
}


/* Function: std_Tuple_impl_0ul_int_ptr_deleter_M_head_const @ 0x2C5C */
int *const * std_Tuple_impl_0ul_int_ptr_deleter_M_head_const(
 const std_Tuple_impl_0_int_ptr_deleter *__t)
{
 return std_Head_base_0ul_int_ptr_false_M_head((const std_Head_base_0_int_ptr_false *)__t);
}


/* Function: std_Head_base_1ul_deleter_true_M_head @ 0x2C78 */
struct {unsigned char gap0;} * std_Head_base_1ul_deleter_true_M_head(
 std_Head_base_1_deleter_true *__b)
{
 return (struct {unsigned char gap0;} *)__b;
}


/* Function: _Z41__static_initialization_and_destruction_0ii @ 0x2C8C */
void __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
 if ( __initialize_p == 1 && __priority == 0xFFFF )
 {
 /* std::ios_base::Init::Init(&std::__ioinit); */
 /* __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle); */
 }
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x2CEC */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 __static_initialization_and_destruction_0(1, 0xFFFF);
}


/* Function: _ZNKSt9type_info4nameEv @ 0x2D08 */
const char * std_type_info_name(const std_type_info *const this)
{
 if ( **((unsigned char **)this + 1) == 42 )
 return (const char *)(*((unsigned long long *)this + 1) + 1LL);
 else
 return (const char *)*((unsigned long long *)this + 1);
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x2D44 */
bool std_type_info_operator_eq(const std_type_info *const this, const std_type_info *__arg)
{
 return *((unsigned long long *)this + 1) == *((unsigned long long *)__arg + 1)
 || **((unsigned char **)this + 1) != 42 && !strcmp(*((const char **)this + 1), *((const char **)__arg + 1));
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x2DB8 */
void SimpleClass_SimpleClass(SimpleClass *const this, int v, const char *n)
{
 this->value = v;
 strncpy(this->name, n, 0x1Fu);
 this->name[31] = 0;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x2E00 */
int SimpleClass_getValue(const SimpleClass *const this)
{
 return this->value;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x2E18 */
void SimpleClass_setValue(SimpleClass *const this, int v)
{
 this->value = v;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x2E3C */
int SimpleClass_compute(const SimpleClass *const this, int x)
{
 int v2; // w19

 v2 = this->value * x;
 return v2 + strlen(this->name);
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x2E80 */
int SimpleClass_getClassID()
{
 return 4660;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x2E00 */
int SimpleClass_getValue(const SimpleClass *const this)
{
 return this->value;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x2E18 */
void SimpleClass_setValue(SimpleClass *const this, int v)
{
 this->value = v;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x2E3C */
int SimpleClass_compute(const SimpleClass *const this, int x)
{
 int v2; // w19

 v2 = this->value * x;
 return v2 + strlen(this->name);
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x2E80 */
int SimpleClass_getClassID()
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Em @ 0x2E88 */
void LifecycleClass_LifecycleClass(LifecycleClass *const this, size_t s)
{
 size_t i; // [xsp+28h] [xbp+28h]

 this->size = s;
 if ( s > 0x1FFFFFFFFFFFFFFELL )
 __cxa_throw_bad_array_new_length();
 this->data = (int *)operator_new_array(4 * s);
 for ( i = 0; i < s; ++i )
 this->data[i] = 10 * i;
 ++LifecycleClass_instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x2F50 */
void LifecycleClass_LifecycleClass_destructor(LifecycleClass *const this)
{
 if ( this->data )
 operator_delete_array(this->data);
 --LifecycleClass_instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEm @ 0x2FA0 */
int LifecycleClass_getData(const LifecycleClass *const this, size_t idx)
{
 if ( idx >= this->size )
 return -1;
 else
 return this->data[idx];
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x2FE8 */
int LifecycleClass_getInstanceCount()
{
 return LifecycleClass_instance_count;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x2FF8 */
int Base_virtual_func(Base *const this, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x3014 */
const char * Base_getName(const Base *const this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x302C */
void Base_Base_destructor(Base *const this)
{
 this->_vptr.Base = (int (**)(...))&off_16B10;
}


/* Function: _ZN4BaseD0Ev @ 0x3050 */
void Base_D0(Base *const this)
{
 Base_Base_destructor(this);
 operator_delete(this, 8u);
}


/* Function: _ZN4BaseC2Ev @ 0x3078 */
void Base_Base(Base *const this)
{
 this->_vptr.Base = (int (**)(...))&off_16B10;
}


/* Function: _ZN7DerivedC2Ei @ 0x309C */
void Derived_Derived(Derived *const this, int m)
{
 Base_Base(this);
 this->_vptr.Base = (int (**)(...))&off_16AE0;
 this->multiplier = m;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x30DC */
int Derived_virtual_func(Derived *const this, int x)
{
 return this->multiplier * x;
}


/* Function: _ZNK7Derived7getNameEv @ 0x3100 */
const char * Derived_getName(const Derived *const this)
{
 return "Derived";
}


/* Function: _ZN5BaseA5funcAEv @ 0x3118 */
int BaseA_funcA(BaseA *const this)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x312C */
void BaseA_BaseA_destructor(BaseA *const this)
{
 this->_vptr.BaseA = (int (**)(...))&off_16AB8;
}


/* Function: _ZN5BaseAD0Ev @ 0x3150 */
void BaseA_D0(BaseA *const this)
{
 BaseA_BaseA_destructor(this);
 operator_delete(this, 0x10u);
}


/* Function: _ZN5BaseB5funcBEv @ 0x3178 */
int BaseB_funcB(BaseB *const this)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x318C */
void BaseB_BaseB_destructor(BaseB *const this)
{
 this->_vptr.BaseB = (int (**)(...))&off_16A90;
}


/* Function: _ZN5BaseBD0Ev @ 0x31B0 */
void BaseB_D0(BaseB *const this)
{
 BaseB_BaseB_destructor(this);
 operator_delete(this, 0x10u);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x31D8 */
int MultiDerived_funcA(MultiDerived *const this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x31EC */
int MultiDerived_funcB(MultiDerived *const this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x3200 */
long long non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *this)
{
 return MultiDerived_funcB((MultiDerived *)((char *)this - 16));
}


/* Function: _ZN5BaseAC2Ev @ 0x3208 */
void BaseA_BaseA(BaseA *const this)
{
 this->_vptr.BaseA = (int (**)(...))&off_16AB8;
}


/* Function: _ZN5BaseBC2Ev @ 0x322C */
void BaseB_BaseB(BaseB *const this)
{
 this->_vptr.BaseB = (int (**)(...))&off_16A90;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x3250 */
void MultiDerived_MultiDerived(MultiDerived *const this)
{
 BaseA_BaseA(this);
 BaseB_BaseB(&this->BaseB);
 this->_vptr.BaseA = (int (**)(...))&off_16A38;
 this->_vptr.BaseB = (int (**)(...))&off_16A68;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x329C */
int VirtualBase_func(VirtualBase *const this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x32B0 */
void VirtualBase_VirtualBase_destructor(VirtualBase *const this)
{
 this->_vptr.VirtualBase = (int (**)(...))&off_16A10;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x32D4 */
void VirtualBase_D0(VirtualBase *const this)
{
 VirtualBase_VirtualBase_destructor(this);
 operator_delete(this, 0x10u);
}


/* Function: _ZN7MiddleA4funcEv @ 0x32FC */
int MiddleA_func(MiddleA *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr.MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x3330 */
long long virtual_thunk_to_MiddleA_func(MiddleA *this)
{
 return MiddleA_func((MiddleA *)((char *)this + *((unsigned long long *)this->_vptr.MiddleA - 3)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x3340 */
int MiddleB_func(MiddleB *const this)
{
 return *(int *)((char *)&this->dataB + *((unsigned long long *)this->_vptr.MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x3374 */
long long virtual_thunk_to_MiddleB_func(MiddleB *this)
{
 return MiddleB_func((MiddleB *)((char *)this + *((unsigned long long *)this->_vptr.MiddleB - 3)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x3384 */
int DiamondDerived_func(DiamondDerived *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr.MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x33B8 */
long long virtual_thunk_to_DiamondDerived_func(DiamondDerived *this)
{
 return DiamondDerived_func((DiamondDerived *)((char *)this + *((unsigned long long *)this->_vptr.MiddleA - 3)));
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x33C8 */
long long non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *this)
{
 return DiamondDerived_func((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x33D0 */
void VirtualBase_VirtualBase(VirtualBase *const this)
{
 this->_vptr.VirtualBase = (int (**)(...))&off_16A10;
}


/* Function: _ZN7MiddleAC2Ev @ 0x33F4 */
void MiddleA_MiddleA(MiddleA *const this, const void **const __vtt_parm)
{
 this->_vptr.MiddleA = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&this->_vptr.MiddleA + *((unsigned long long *)this->_vptr.MiddleA - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN7MiddleAD2Ev @ 0x3444 */
void MiddleA_MiddleA_destructor(MiddleA *const this, const void **const __vtt_parm)
{
 this->_vptr.MiddleA = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&this->_vptr.MiddleA + *((unsigned long long *)this->_vptr.MiddleA - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x3494 */
void MiddleB_MiddleB(MiddleB *const this, const void **const __vtt_parm)
{
 this->_vptr.MiddleB = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&this->_vptr.MiddleB + *((unsigned long long *)this->_vptr.MiddleB - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN7MiddleBD2Ev @ 0x34E4 */
void MiddleB_MiddleB_destructor(MiddleB *const this, const void **const __vtt_parm)
{
 this->_vptr.MiddleB = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&this->_vptr.MiddleB + *((unsigned long long *)this->_vptr.MiddleB - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x3534 */
void DiamondDerived_DiamondDerived(DiamondDerived *const this)
{
 VirtualBase_VirtualBase((VirtualBase *const)&this->MiddleB);
 MiddleA_MiddleA(this, (const void **const)off_16900);
 MiddleB_MiddleB((MiddleB *const)(&this->dataA + 2), (const void **const)off_16910);
 this->_vptr.MiddleA = (int (**)(...))&off_16878;
 this->_vptr.MiddleB = (int (**)(...))&off_168E0;
 *((unsigned long long *)&this->dataA + 1) = &off_168A8;
}


/* Function: _ZN5PointC2Eii @ 0x35C0 */
void Point_Point(Point *const this, int _x, int _y)
{
 this->x = _x;
 this->y = _y;
}


/* Function: _ZNK5PointplERKS_ @ 0x35F4 */
Point Point_operator_plus(const Point *const this, const Point *other)
{
 Point v3; // [xsp+20h] [xbp+20h] BYREF

 Point_Point(&v3, this->x + other->x, this->y + other->y);
 return v3;
}


/* Function: _ZNK5PointeqERKS_ @ 0x3684 */
bool Point_operator_eq(const Point *const this, const Point *other)
{
 return this->x == other->x && this->y == other->y;
}


/* Function: _ZN5PointppEv @ 0x36D4 */
Point * Point_operator_inc(Point *const this)
{
 ++this->x;
 ++this->y;
 return this;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x3710 */
int template_max<int>(int a, int b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x3740 */
double template_max<double>(double a, double b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x3774 */
void template_swap<int>(int *a, int *b)
{
 int temp; // [xsp+1Ch] [xbp-4h]

 temp = *a;
 *a = *b;
 *b = temp;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x37B4 */
void Container_int_Container(Container_int *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x37D0 */
void Container_int_push(Container_int *const this, int value)
{
 int size; // w0

 if ( this->size <= 9 )
 {
 size = this->size;
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x381C */
int Container_int_get(const Container_int *const this, int idx)
{
 if ( idx < 0 || idx >= this->size )
 return 0;
 else
 return this->data[idx];
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x3864 */
int Container_int_getSize(const Container_int *const this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x387C */
void Container_double_Container(Container_double *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x3898 */
void Container_double_push(Container_double *const this, double value)
{
 int size; // w0

 if ( this->size <= 9 )
 {
 size = this->size;
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x38E4 */
double Container_double_get(const Container_double *const this, int idx)
{
 if ( idx < 0 || idx >= this->size )
 return 0.0;
 else
 return this->data[idx];
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x392C */
int Container_double_getSize(const Container_double *const this)
{
 return this->size;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x3944 */
void std_uniq_ptr_data_int_default_delete_int_true_true_uniq_ptr_data(
 std_unique_ptr_int *const this,
 std_unique_ptr_int *a2)
{
 std_uniq_ptr_impl_int_default_delete_int_uniq_ptr_impl(&this->_M_t, &a2->_M_t);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x396C */
void std_unique_ptr_int_unique_ptr_std_unique_ptr_int_ref(
 std_unique_ptr_int *const this,
 std_unique_ptr_int *a2)
{
 std_uniq_ptr_data_int_default_delete_int_true_true_uniq_ptr_data(&this->_M_t, &a2->_M_t);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x3994 */
int RTTIBase_getType(const RTTIBase *const this)
{
 return 0;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x39A8 */
int RTTIDerivedA_getType(const RTTIDerivedA *const this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x39BC */
int RTTIDerivedA_derivedA_data(const RTTIDerivedA *const this)
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x39D0 */
int RTTIDerivedB_getType(const RTTIDerivedB *const this)
{
 return 2;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x39E4 */
int RTTIDerivedB_derivedB_data(const RTTIDerivedB *const this)
{
 return 200;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x39F8 */
void RTTIBase_RTTIBase(RTTIBase *const this)
{
 this->_vptr.RTTIBase = (int (**)(...))off_16848;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x3A1C */
void RTTIBase_RTTIBase_destructor(RTTIBase *const this)
{
 this->_vptr.RTTIBase = (int (**)(...))off_16848;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x3A40 */
void RTTIBase_D0(RTTIBase *const this)
{
 RTTIBase_RTTIBase_destructor(this);
 operator_delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x3A68 */
void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *const this)
{
 RTTIBase_RTTIBase(this);
 this->_vptr.RTTIBase = (int (**)(...))off_16820;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x3A98 */
void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *const this)
{
 RTTIBase_RTTIBase(this);
 this->_vptr.RTTIBase = (int (**)(...))off_167F8;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x3AC8 */
void std_uniq_ptr_data_int_default_delete_int_true_true_CI2_uniq_ptr_impl_int_ptr(
 std_unique_ptr_int *const this,
 int *a2)
{
 std_uniq_ptr_impl_int_default_delete_int_uniq_ptr_impl_ptr(&this->_M_t, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x3AF0 */
void std_unique_ptr_int_unique_ptr_std_default_delete_int_void(
 std_unique_ptr_int *const this,
 int *__p)
{
 std_uniq_ptr_data_int_default_delete_int_true_true_CI2_uniq_ptr_impl_int_ptr(&this->_M_t, __p);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x3B18 */
void std_unique_ptr_int_destructor(std_unique_ptr_int *const this)
{
 std_unique_ptr_int_deleter_type *deleter; // x19
 int **v2; // x0
 std_uniq_ptr_impl_int_std_default_delete_int_pointer *_M_ptr_result; // [xsp+38h] [xbp+38h]

 _M_ptr_result = std_uniq_ptr_impl_int_default_delete_int_M_ptr(&this->_M_t);
 if ( *_M_ptr_result )
 {
 deleter = std_unique_ptr_int_get_deleter(this);
 v2 = std_move_int_ptr_ref(_M_ptr_result);
 std_default_delete_int_operator()(deleter, *v2);
 }
 *_M_ptr_result = 0;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x3B80 */
int std_unique_ptr_int_operator_deref_value(
 const std_unique_ptr_int *const this)
{
 return *std_unique_ptr_int_get(this);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x3BA4 */
std_unique_ptr_int * std_move_std_unique_ptr_int_ref(
 std_unique_ptr_int *__t)
{
 return __t;
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x3BB8 */
void std_Tuple_impl_0ul_int_ptr_default_delete_int_Tuple_impl(
 std_Tuple_impl_0_int_ptr_deleter *const this,
 std_Tuple_impl_0_int_ptr_deleter *a2)
{
 std_Tuple_impl_1ul_default_delete_int_Tuple_impl(this, a2);
 *(unsigned long long *)&this->_M_head_impl.gap0 = *(unsigned long long *)&a2->_M_head_impl.gap0;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x3BF0 */
void std_tuple_int_ptr_default_delete_int_tuple(
 std_tuple_int_ptr_deleter *const this,
 std_tuple_int_ptr_deleter *a2)
{
 std_Tuple_impl_0ul_int_ptr_default_delete_int_Tuple_impl(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x3C18 */
void std_uniq_ptr_impl_int_default_delete_int_uniq_ptr_impl(
 std_uniq_ptr_impl_int_std_default_delete_int *const this,
 std_uniq_ptr_impl_int_std_default_delete_int *__u)
{
 std_tuple_int_ptr_deleter *v3; // x0

 v3 = std_move_std_tuple_int_ptr_deleter_ref(&__u->_M_t);
 std_tuple_int_ptr_default_delete_int_tuple(&this->_M_t, v3);
 *std_uniq_ptr_impl_int_default_delete_int_M_ptr(__u) = 0;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x3C60 */
void std_uniq_ptr_data_int_default_delete_int_array_true_true_CI2_uniq_ptr_impl_int_ptr(
 std_unique_ptr_int_array *const this,
 int *a2)
{
 std_uniq_ptr_impl_int_default_delete_int_array_uniq_ptr_impl(&this->_M_t, a2);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x3C88 */
void std_unique_ptr_int_array_unique_ptr_int_ptr_void_bool(
 std_unique_ptr_int_array *const this,
 int *__p)
{
 std_uniq_ptr_data_int_default_delete_int_array_true_true_CI2_uniq_ptr_impl_int_ptr(&this->_M_t, __p);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x3CB0 */
void std_unique_ptr_int_array_destructor(std_unique_ptr_int_array *const this)
{
 std_unique_ptr_int_array_deleter_type *deleter; // x0
 std_uniq_ptr_impl_int_std_default_delete_int_array_pointer *_M_ptr_result; // [xsp+28h] [xbp+28h]

 _M_ptr_result = std_uniq_ptr_impl_int_default_delete_int_array_M_ptr(&this->_M_t);
 if ( *_M_ptr_result )
 {
 deleter = std_unique_ptr_int_array_get_deleter(this);
 std_default_delete_int_array_operator()(deleter, *_M_ptr_result);
 }
 *_M_ptr_result = 0;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm @ 0x3D0C */
int std_unique_ptr_int_array_operator_index_value(
 const std_unique_ptr_int_array *const this,
 size_t __i)
{
 return std_unique_ptr_int_array_get(this)[__i];
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x3D44 */
void std_uniq_ptr_impl_int_default_delete_int_uniq_ptr_impl_ptr(
 std_uniq_ptr_impl_int_std_default_delete_int *const this,
 int *__p)
{
 std_tuple_int_ptr_default_delete_int_tuple_true_true(&this->_M_t);
 *std_uniq_ptr_impl_int_default_delete_int_M_ptr(this) = __p;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x3D80 */
int ** std_uniq_ptr_impl_int_default_delete_int_M_ptr(
 std_uniq_ptr_impl_int_std_default_delete_int *const this)
{
 return std_get_0ul_int_ptr_default_delete_int(&this->_M_t);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x3D9C */
std_default_delete_int * std_unique_ptr_int_get_deleter_impl(
 std_unique_ptr_int *const this)
{
 return std_uniq_ptr_impl_int_default_delete_int_M_deleter(&this->_M_t);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x3DB8 */
int ** std_move_int_ptr_ref(
 int **__t)
{
 return __t;
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x3DCC */
void std_default_delete_int_operator()(const std_default_delete_int *const this, int *__ptr)
{
 if ( __ptr )
 operator_delete(__ptr, 4u);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x3DFC */
int * std_unique_ptr_int_get(
 const std_unique_ptr_int *const this)
{
 return *std_uniq_ptr_impl_int_default_delete_int_M_ptr(&this->_M_t);
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x3E18 */
std_tuple_int_ptr_deleter * std_move_std_tuple_int_ptr_deleter_ref(
 std_tuple_int_ptr_deleter *__t)
{
 return __t;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ @ 0x3E2C */
void std_Tuple_impl_1ul_default_delete_int_Tuple_impl(
 std_Tuple_impl_1_deleter *const this,
 std_Tuple_impl_1_deleter *__in)
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x3E44 */
void std_uniq_ptr_impl_int_default_delete_int_array_uniq_ptr_impl(
 std_uniq_ptr_impl_int_std_default_delete_int_array *const this,
 int *__p)
{
 std_tuple_int_ptr_default_delete_int_array_tuple_true_true(&this->_M_t);
 *std_uniq_ptr_impl_int_default_delete_int_array_M_ptr(this) = __p;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x3E80 */
int ** std_uniq_ptr_impl_int_default_delete_int_array_M_ptr(
 std_uniq_ptr_impl_int_std_default_delete_int_array *const this)
{
 return std_get_0ul_int_ptr_default_delete_int_array(&this->_M_t);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x3E9C */
std_default_delete_int_array * std_unique_ptr_int_array_get_deleter_impl(
 std_unique_ptr_int_array *const this)
{
 return std_uniq_ptr_impl_int_default_delete_int_array_M_deleter(&this->_M_t);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ @ 0x3EB8 */
void std_default_delete_int_array_operator()(const std_default_delete_int_array *const this, int *__ptr)
{
 if ( __ptr )
 operator_delete_array(__ptr);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x3EE8 */
int * std_unique_ptr_int_array_get(
 const std_unique_ptr_int_array *const this)
{
 return *std_uniq_ptr_impl_int_default_delete_int_array_M_ptr(&this->_M_t);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x3F04 */
void std_tuple_int_ptr_default_delete_int_tuple_true_true(
 std_tuple_int_ptr_deleter *const this)
{
 std_Tuple_impl_0ul_int_ptr_default_delete_int_Tuple_impl_void(this);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x3F24 */
int ** std_get_0ul_int_ptr_default_delete_int(
 std_tuple_int_ptr_deleter *__t)
{
 return std_get_helper_0ul_int_ptr_default_delete_int(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x3F40 */
std_default_delete_int * std_uniq_ptr_impl_int_default_delete_int_M_deleter(
 std_uniq_ptr_impl_int_std_default_delete_int *const this)
{
 return (std_default_delete_int *)std_get_1ul_int_ptr_default_delete_int(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x3F5C */
int * std_uniq_ptr_impl_int_default_delete_int_M_ptr_const(
 const std_uniq_ptr_impl_int_std_default_delete_int *const this)
{
 return *std_get_0ul_int_ptr_default_delete_int_const(&this->_M_t);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x3F7C */
void std_tuple_int_ptr_default_delete_int_array_tuple_true_true(
 std_tuple_int_ptr_default_delete_int_array *const this)
{
 std_Tuple_impl_0ul_int_ptr_default_delete_int_array_Tuple_impl_void(this);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x3F9C */
int ** std_get_0ul_int_ptr_default_delete_int_array(
 std_tuple_int_ptr_default_delete_int_array *__t)
{
 return std_get_helper_0ul_int_ptr_default_delete_int_array(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x3FB8 */
std_default_delete_int_array * std_uniq_ptr_impl_int_default_delete_int_array_M_deleter(
 std_uniq_ptr_impl_int_std_default_delete_int_array *const this)
{
 return (std_default_delete_int_array *)std_get_1ul_int_ptr_default_delete_int_array(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x3FD4 */
int * std_uniq_ptr_impl_int_default_delete_int_array_M_ptr_const(
 const std_uniq_ptr_impl_int_std_default_delete_int_array *const this)
{
 return *std_get_0ul_int_ptr_default_delete_int_array_const(&this->_M_t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev @ 0x3FF4 */
void std_Tuple_impl_0ul_int_ptr_default_delete_int_Tuple_impl_void(
 std_Tuple_impl_0_int_ptr_deleter *const this)
{
 std_Tuple_impl_1ul_default_delete_int_Tuple_impl_void(this);
 std_Head_base_0ul_int_ptr_false_Head_base_void((std_Head_base_0_int_ptr_false *const)this);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x401C */
int ** std_get_helper_0ul_int_ptr_default_delete_int(
 std_Tuple_impl_0_int_ptr_deleter *__t)
{
 return std_Tuple_impl_0ul_int_ptr_default_delete_int_M_head(__t);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x4038 */
std_default_delete_int * std_get_1ul_int_ptr_default_delete_int(
 std_tuple_int_ptr_deleter *__t)
{
 return (std_default_delete_int *)std_get_helper_1ul_default_delete_int(__t);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x4054 */
const int ** std_get_0ul_int_ptr_default_delete_int_const(
 const std_tuple_int_ptr_deleter *__t)
{
 return std_get_helper_0ul_int_ptr_default_delete_int_const(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x4070 */
void std_Tuple_impl_0ul_int_ptr_default_delete_int_array_Tuple_impl_void(
 std_Tuple_impl_0_int_ptr_default_delete_int_array *const this)
{
 std_Tuple_impl_1ul_default_delete_int_array_Tuple_impl_void(this);
 std_Head_base_0ul_int_ptr_false_Head_base_void((std_Head_base_0_int_ptr_false *const)this);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4098 */
int ** std_get_helper_0ul_int_ptr_default_delete_int_array(
 std_Tuple_impl_0_int_ptr_default_delete_int_array *__t)
{
 return std_Tuple_impl_0ul_int_ptr_default_delete_int_array_M_head(__t);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x40B4 */
std_default_delete_int_array * std_get_1ul_int_ptr_default_delete_int_array(
 std_tuple_int_ptr_default_delete_int_array *__t)
{
 return (std_default_delete_int_array *)std_get_helper_1ul_default_delete_int_array(__t);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x40D0 */
const int ** std_get_0ul_int_ptr_default_delete_int_array_const(
 const std_tuple_int_ptr_default_delete_int_array *__t)
{
 return std_get_helper_0ul_int_ptr_default_delete_int_array_const(__t);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x40EC */
int ** std_forward_int_ptr_ref(
 int **__t)
{
 return __t;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev @ 0x4100 */
void std_Tuple_impl_1ul_default_delete_int_Tuple_impl_void(
 std_Tuple_impl_1_deleter *const this)
{
 std_Head_base_1ul_default_delete_int_true_Head_base_void(this);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2Ev @ 0x4120 */
void std_Head_base_0ul_int_ptr_false_Head_base_void(
 std_Head_base_0_int_ptr_false *const this)
{
 this->_M_head_impl = 0;
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x413C */
int ** std_Tuple_impl_0ul_int_ptr_default_delete_int_M_head(
 std_Tuple_impl_0_int_ptr_deleter *__t)
{
 return std_Head_base_0ul_int_ptr_false_M_head((std_Head_base_0_int_ptr_false *)__t);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x4158 */
std_default_delete_int * std_get_helper_1ul_default_delete_int(
 std_Tuple_impl_1_deleter *__t)
{
 return std_Tuple_impl_1ul_default_delete_int_M_head(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4174 */
int *const * std_get_helper_0ul_int_ptr_default_delete_int_const(
 const std_Tuple_impl_0_int_ptr_deleter *__t)
{
 return std_Tuple_impl_0ul_int_ptr_default_delete_int_M_head_const(__t);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev @ 0x4190 */
void std_Tuple_impl_1ul_default_delete_int_array_Tuple_impl_void(
 std_Tuple_impl_1_default_delete_int_array *const this)
{
 std_Head_base_1ul_default_delete_int_array_true_Head_base_void(this);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x41B0 */
int ** std_Tuple_impl_0ul_int_ptr_default_delete_int_array_M_head(
 std_Tuple_impl_0_int_ptr_default_delete_int_array *__t)
{
 return std_Head_base_0ul_int_ptr_false_M_head((std_Head_base_0_int_ptr_false *)__t);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x41CC */
std_default_delete_int_array * std_get_helper_1ul_default_delete_int_array(
 std_Tuple_impl_1_default_delete_int_array *__t)
{
 return std_Tuple_impl_1ul_default_delete_int_array_M_head(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x41E8 */
int *const * std_get_helper_0ul_int_ptr_default_delete_int_array_const(
 const std_Tuple_impl_0_int_ptr_default_delete_int_array *__t)
{
 return std_Tuple_impl_0ul_int_ptr_default_delete_int_array_M_head_const(__t);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ @ 0x4204 */
void std_Head_base_0ul_int_ptr_false_Head_base_int_ptr_ref(
 std_Head_base_0_int_ptr_false *const this,
 int **__h)
{
 this->_M_head_impl = *std_forward_int_ptr_ref(__h);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev @ 0x4234 */
void std_Head_base_1ul_default_delete_int_true_Head_base_void(
 std_Head_base_1_default_delete_int_true *const this)
{
 ;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ @ 0x4248 */
int ** std_Head_base_0ul_int_ptr_false_M_head(
 std_Head_base_0_int_ptr_false *__b)
{
 return &__b->_M_head_impl;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x425C */
std_default_delete_int * std_Tuple_impl_1ul_default_delete_int_M_head(
 std_Tuple_impl_1_deleter *__t)
{
 return std_Head_base_1ul_default_delete_int_true_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x4278 */
int *const * std_Tuple_impl_0ul_int_ptr_default_delete_int_M_head_const(
 const std_Tuple_impl_0_int_ptr_deleter *__t)
{
 return std_Head_base_0ul_int_ptr_false_M_head_const((const std_Head_base_0_int_ptr_false *)__t);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev @ 0x4294 */
void std_Head_base_1ul_default_delete_int_array_true_Head_base_void(
 std_Head_base_1_default_delete_int_array_true *const this)
{
 ;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x42A8 */
std_default_delete_int_array * std_Tuple_impl_1ul_default_delete_int_array_M_head(
 std_Tuple_impl_1_default_delete_int_array *__t)
{
 return std_Head_base_1ul_default_delete_int_array_true_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x42C4 */
int *const * std_Tuple_impl_0ul_int_ptr_default_delete_int_array_M_head_const(
 const std_Tuple_impl_0_int_ptr_default_delete_int_array *__t)
{
 return std_Head_base_0ul_int_ptr_false_M_head_const((const std_Head_base_0_int_ptr_false *)__t);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x42E0 */
std_default_delete_int * std_Head_base_1ul_default_delete_int_true_M_head(
 std_Head_base_1_default_delete_int_true *__b)
{
 return &__b->_M_head_impl;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ @ 0x42F4 */
int *const * std_Head_base_0ul_int_ptr_false_M_head_const(
 const std_Head_base_0_int_ptr_false *__b)
{
 return &__b->_M_head_impl;
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x4308 */
std_default_delete_int_array * std_Head_base_1ul_default_delete_int_array_true_M_head(
 std_Head_base_1_default_delete_int_array_true *__b)
{
 return &__b->_M_head_impl;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x431C */
void RTTIDerivedB_RTTIDerivedB_destructor(RTTIDerivedB *const this)
{
 this->_vptr.RTTIBase = (int (**)(...))off_167F8;
 RTTIBase_RTTIBase_destructor(this);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x434C */
void RTTIDerivedB_D0(RTTIDerivedB *const this)
{
 RTTIDerivedB_RTTIDerivedB_destructor(this);
 operator_delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x4374 */
void RTTIDerivedA_RTTIDerivedA_destructor(RTTIDerivedA *const this)
{
 this->_vptr.RTTIBase = (int (**)(...))off_16820;
 RTTIBase_RTTIBase_destructor(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x43A4 */
void RTTIDerivedA_D0(RTTIDerivedA *const this)
{
 RTTIDerivedA_RTTIDerivedA_destructor(this);
 operator_delete(this, 8u);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x43CC */
void DiamondDerived_DiamondDerived_destructor(DiamondDerived *const this)
{
 this->_vptr.MiddleA = (int (**)(...))&off_16878;
 this->_vptr.MiddleB = (int (**)(...))&off_168E0;
 *((unsigned long long *)&this->dataA + 1) = &off_168A8;
 MiddleB_MiddleB_destructor((MiddleB *const)(&this->dataA + 2), (const void **const)off_16910);
 MiddleA_MiddleA_destructor(this, (const void **const)off_16900);
 VirtualBase_VirtualBase_destructor((VirtualBase *const)&this->MiddleB);
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x4458 */
void non_virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *this)
{
 DiamondDerived_DiamondDerived_destructor((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x4460 */
void virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *this)
{
 DiamondDerived_DiamondDerived_destructor((DiamondDerived *)((char *)this + *((unsigned long long *)this->_vptr.MiddleA - 4)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x4470 */
void DiamondDerived_D0(DiamondDerived *const this)
{
 DiamondDerived_DiamondDerived_destructor(this);
 operator_delete(this, 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x4498 */
void non_virtual_thunk_to_DiamondDerived_D0(DiamondDerived *this)
{
 DiamondDerived_DiamondDerived_destructor((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x44A0 */
void virtual_thunk_to_DiamondDerived_D0(DiamondDerived *this)
{
 DiamondDerived_DiamondDerived_destructor((DiamondDerived *)((char *)this + *((unsigned long long *)this->_vptr.MiddleA - 4)));
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x44B0 */
void MultiDerived_MultiDerived_destructor(MultiDerived *const this)
{
 this->_vptr.BaseA = (int (**)(...))&off_16A38;
 this->_vptr.BaseB = (int (**)(...))&off_16A68;
 BaseB_BaseB_destructor(&this->BaseB);
 BaseA_BaseA_destructor(this);
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x44FC */
void non_virtual_thunk_to_MultiDerived_D1(MultiDerived *this)
{
 MultiDerived_MultiDerived_destructor((MultiDerived *)((char *)this - 16));
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x4504 */
void MultiDerived_D0(MultiDerived *const this)
{
 MultiDerived_MultiDerived_destructor(this);
 operator_delete(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x452C */
void non_virtual_thunk_to_MultiDerived_D0(MultiDerived *this)
{
 MultiDerived_MultiDerived_destructor((MultiDerived *)((char *)this - 16));
}


/* Function: _ZN7DerivedD2Ev @ 0x4534 */
void Derived_Derived_destructor(Derived *const this)
{
 this->_vptr.Base = (int (**)(...))&off_16AE0;
 Base_Base_destructor(this);
}


/* Function: _ZN7DerivedD0Ev @ 0x4564 */
void Derived_D0(Derived *const this)
{
 Derived_Derived_destructor(this);
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
