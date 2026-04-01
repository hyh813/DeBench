/* Auto-injected type definitions by preprocessor */

/* Stub for JUMPOUT */
#define JUMPOUT(x) return

/* HIDWORD macro - extracts high 32 bits of a 64-bit value */
#define HIDWORD(x) ((unsigned int)((unsigned long long)(x) >> 32))

/* C++ exception handling declarations */
void __cxa_atexit(void (*)(void *), void *, void *);
void *__dso_handle;
void *__cxa_allocate_exception(unsigned long size);
void __cxa_throw(void *exception, struct type_info *tinfo, void *dest);
void __cxa_bad_typeid(void);
void *__dynamic_cast(const void *, const struct __class_type_info *, const struct __class_type_info *, unsigned long);
void __cxa_begin_catch(void *exception);
void __cxa_end_catch(void);
void terminate(void);

/* Operator new/delete declarations */
void *operator_new(unsigned long size);
void *operator_new_array(unsigned long size);
void operator_delete(void *ptr);
void operator_delete_array(void *ptr);

/* C++ standard library stubs - namespace removed for C compatibility */

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

/* Standard library function declarations */
size_t strlen(const char *s);
char *strncpy(char *dest, const char *src, size_t n);
int printf(const char *format, ...);

/* String constants */
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
extern const char *aCppL401D;
extern const char *aCppL402D;
extern const char *aCppL403D;

/* Forward declarations for C++ classes */
struct SimpleClass;
struct LifecycleClass;
struct Base;
struct Derived;
struct BaseA;
struct BaseB;
struct MultiDerived;
struct VirtualBase;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct Point;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

/* Global variable declarations */
int LifecycleClass_instance_count;

/* Vtable offset declarations */
extern void *off_17858;
extern void *off_17898;
extern void *off_178E0;
extern void *off_17910;
extern void *off_17990;
extern void *off_179B8;
extern void *off_179E8;
extern void *off_17A50;
extern void *off_17A18;
extern void *off_17A70;
extern void *off_17A80;
extern void *off_17C18;
extern void *off_17D30;
extern void *off_17D58;
extern void *off_17D80;
extern void *VTT_for_DiamondDerived;
extern void *VTT_for_MiddleA;
extern void *VTT_for_MiddleB;

/* Helper function declarations */
bool is_mul_ok(size_t a, size_t b);

/* Helper type definitions for unique_ptr with custom deleter */
struct lambda_445_20 {
 unsigned char gap0;
};

struct unique_ptr_int_lambda_445_20 {
 struct {
  struct {
   int *_M_head_impl;
   struct lambda_445_20 _M_deleter_impl;
  } _M_t;
 } _M_t;
};

typedef int * unique_ptr_int_lambda_445_20_pointer;
typedef struct lambda_445_20 unique_ptr_int_lambda_445_20_deleter_type;

/* Helper type for add_lvalue_reference */
typedef int * __add_lvalue_reference_helper_int_true_type;

/* type_info structure for RTTI */
struct type_info {
 void *_vptr;
 const char *_name;
};

extern struct type_info typeinfo_for_int;
extern struct type_info typeinfo_for_RTTIBase;
extern struct type_info typeinfo_for_RTTIDerivedA;
extern struct type_info typeinfo_for_RTTIDerivedB;

/* __class_type_info for dynamic_cast */
struct __class_type_info {
 struct type_info base;
};

/* unique_ptr type definitions */
struct default_delete_int {
 unsigned char gap0;
};

struct unique_ptr_int {
 struct {
  struct {
   int *_M_head_impl;
   struct default_delete_int _M_deleter_impl;
  } _M_t;
 } _M_t;
};

typedef int * unique_ptr_int_pointer;
typedef struct default_delete_int unique_ptr_int_deleter_type;

struct unique_ptr_int_array {
 struct {
  struct {
   int *_M_head_impl;
   struct default_delete_int _M_deleter_impl;
  } _M_t;
 } _M_t;
};

typedef int * unique_ptr_int_array_pointer;
typedef struct default_delete_int unique_ptr_int_array_deleter_type;

/* Forward declarations for C++ member functions (mangled names) */
int test_cpp_lambda_ZZ15test_cpp_lambdavENK3_1clEi(const struct __cppobj *this, int x);
void test_cpp_lambda_ZZ15test_cpp_lambdavENK3_0clIiiEEDaT_T0_(const struct {unsigned char gap0;} *this, int a, int b);

/* RTTI function forward declarations */
bool _ZNKSt9type_infoeqERKS_(const struct type_info *this, const struct type_info *__arg);
int _ZNK12RTTIDerivedA13derivedA_dataEv(const struct RTTIDerivedA *this);
int _ZNK12RTTIDerivedB13derivedB_dataEv(const struct RTTIDerivedB *this);
const char *_ZNKSt9type_info4nameEv(const struct type_info *this);

/* unique_ptr function forward declarations */
void unique_ptr_int_unique_ptr_default_delete_int_void(struct unique_ptr_int *this, int *__p);
int *unique_ptr_int_operator_deref(const struct unique_ptr_int *this);
struct unique_ptr_int *move_unique_ptr_int(struct unique_ptr_int *__t);
void unique_ptr_int_unique_ptr(struct unique_ptr_int *this, struct unique_ptr_int *a2);
int * unique_ptr_int_get(const struct unique_ptr_int *this);
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(
 struct {unsigned char gap0;} *this,
 int *__p);
void __uniq_ptr_data_int_default_delete_int_true_true___uniq_ptr_data(
 struct {unsigned char gap0;} *this,
 struct {unsigned char gap0;} *a2);
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(
 struct {unsigned char gap0;} *this,
 int *__p);
int * unique_ptr_int_array_get(const struct unique_ptr_int_array *this);

/* unique_ptr array function forward declarations */
void unique_ptr_int_array_unique_ptr_int_ptr_default_delete_int_array_void_bool(struct unique_ptr_int_array *this, int *__p);
int unique_ptr_int_array_operator_index(const struct unique_ptr_int_array *this, size_t __i);
void unique_ptr_int_array_destructor(struct unique_ptr_int_array *this);

/* unique_ptr with custom deleter function forward declarations */
void unique_ptr_int_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi_unique_ptr(
 struct unique_ptr_int_lambda_445_20 *this,
 unique_ptr_int_lambda_445_20_pointer __p,
 const unique_ptr_int_lambda_445_20_deleter_type *__d);
int unique_ptr_int_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi_operator_deref(const struct unique_ptr_int_lambda_445_20 *this);
void unique_ptr_int_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi_destructor(struct unique_ptr_int_lambda_445_20 *this);
unique_ptr_int_lambda_445_20_pointer * __uniq_ptr_impl_int_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi__M_ptr(
 struct unique_ptr_int_lambda_445_20 *this);
unique_ptr_int_lambda_445_20_deleter_type * unique_ptr_int_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi_get_deleter(
 struct unique_ptr_int_lambda_445_20 *this);

/* unique_ptr destructor forward declaration */
void unique_ptr_int_destructor(struct unique_ptr_int *this);

/* Additional unique_ptr helper function forward declarations */
void ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
 struct unique_ptr_int_lambda_445_20 *this,
 unique_ptr_int_lambda_445_20_pointer __p,
 const unique_ptr_int_lambda_445_20_deleter_type *__d);
int **move_int_ptr(int ***__t);
void __uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl(
 struct {unsigned char gap0;} *this,
 struct {unsigned char gap0;} *__u);
void __uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl(
 struct {unsigned char gap0;} *this,
 int *__p);
struct {unsigned char gap0;} * move_tuple_int_ptr_default_delete_int(
 struct {unsigned char gap0;} *__t);
void tuple_int_ptr_default_delete_int_tuple(
 struct {unsigned char gap0;} *this,
 struct {unsigned char gap0;} *a2);
void tuple_int_ptr_default_delete_int_tuple_int_true_true(
 struct {unsigned char gap0;} *this);
void tuple_int_ptr_default_delete_int_array_tuple_int_true_true(
 struct {unsigned char gap0;} *this);
int ** __uniq_ptr_impl_int_default_delete_int__M_ptr(
 struct {unsigned char gap0;} *this);
int ** __uniq_ptr_impl_int_default_delete_int_array__M_ptr(
 struct {unsigned char gap0;} *this);
int * __uniq_ptr_impl_int_default_delete_int__M_ptr_const(
 const struct {unsigned char gap0;} *this);
void _Tuple_impl_0ul_int_ptr_default_delete_int__Tuple_impl(
 struct {unsigned char gap0;} *this,
 struct {unsigned char gap0;} *a2);
void _Tuple_impl_0ul_int_ptr_default_delete_int__Tuple_impl_void(
 struct {unsigned char gap0;} *this);
void test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi_operator_call(
 const struct {unsigned char gap0;} *this, int *p);
void __uniq_ptr_impl_int_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi___uniq_ptr_impl(
 struct unique_ptr_int_lambda_445_20 *this,
 unique_ptr_int_lambda_445_20_pointer __p,
 const struct {unsigned char gap0;} *__d);

/* Additional helper function forward declarations */
int ** get_0ul_int_ptr_default_delete_int(struct {unsigned char gap0;} *__t);
int ** get_0ul_int_ptr_default_delete_int_array(
 struct {unsigned char gap0;} *__t);
const int ** get_0ul_int_ptr_default_delete_int_const(
 const struct {unsigned char gap0;} *__t);
void _Tuple_impl_1ul_default_delete_int__Tuple_impl(
 struct {unsigned char gap0;} *this,
 struct {unsigned char gap0;} *__in);
void _Tuple_impl_1ul_default_delete_int__Tuple_impl_void(
 struct {unsigned char gap0;} *this);
void _Tuple_impl_1ul_default_delete_int_array__Tuple_impl(
 struct {unsigned char gap0;} *this);
void _Tuple_impl_0ul_int_ptr_default_delete_int_array__Tuple_impl(
 struct {unsigned char gap0;} *this);
int ** __get_helper_0ul_int_ptr_default_delete_int(struct {unsigned char gap0;} *__t);
int ** __get_helper_0ul_int_ptr_default_delete_int_array(
 struct {unsigned char gap0;} *__t);
int *const * __get_helper_0ul_int_ptr_default_delete_int_array_const(
 const struct {unsigned char gap0;} *__t);
int *const * __get_helper_0ul_int_ptr_default_delete_int_const(
 const struct {unsigned char gap0;} *__t);
struct default_delete_int * __uniq_ptr_impl_int_default_delete_int__M_deleter(
 struct {unsigned char gap0;} *this);
struct default_delete_int * __uniq_ptr_impl_int_default_delete_int_array__M_deleter(
 struct {unsigned char gap0;} *this);
struct {unsigned char gap0;} * get_1ul_int_ptr_default_delete_int(
 struct {unsigned char gap0;} *__t);
struct {unsigned char gap0;} * get_1ul_int_ptr_default_delete_int_array(
 struct {unsigned char gap0;} *__t);
struct {unsigned char gap0;} * __get_helper_1ul_default_delete_int(
 struct {unsigned char gap0;} *__t);
struct {unsigned char gap0;} * __get_helper_1ul_default_delete_int_array(
 struct {unsigned char gap0;} *__t);
struct {unsigned char gap0;} * _Tuple_impl_1ul_default_delete_int__M_head(
 struct {unsigned char gap0;} *__t);
struct {unsigned char gap0;} * _Tuple_impl_1ul_default_delete_int_array__M_head(
 struct {unsigned char gap0;} *__t);
struct {unsigned char gap0;} * _Head_base_1ul_default_delete_int_true__M_head(
 struct {unsigned char gap0;} *__b);
struct {unsigned char gap0;} * _Head_base_1ul_default_delete_int_array_true__M_head(
 struct {unsigned char gap0;} *__b);
int ** _Tuple_impl_0ul_int_ptr_default_delete_int__M_head(struct {int *_M_head_impl;} *__t);
int ** _Tuple_impl_0ul_int_ptr_default_delete_int_array__M_head(
 struct {int *_M_head_impl;} *__t);
int *const * _Tuple_impl_0ul_int_ptr_default_delete_int__M_head_const(
 const struct {int *_M_head_impl;} *__t);
const struct {unsigned char gap0;} * forward_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi_const_ref(
 const unique_ptr_int_lambda_445_20_deleter_type *__t);
void tuple_int_ptr_lambda_445_20_tuple_int_ptr_ref_lambda_445_20_const_ref_true(
 struct unique_ptr_int_lambda_445_20 *this,
 int **__a1,
 const unique_ptr_int_lambda_445_20_deleter_type *__a2);
int ** forward_int_ptr_ref(int **__t);
void _Tuple_impl_0ul_int_ptr_lambda_445_20__Tuple_impl_int_ptr_ref_lambda_445_20_const_ref_void(
 struct unique_ptr_int_lambda_445_20 *this,
 int **__head,
 const unique_ptr_int_lambda_445_20_deleter_type *__tail);
void _Tuple_impl_1ul_lambda_445_20__Tuple_impl(
 struct {unsigned char gap0;} *this,
 const struct {unsigned char gap0;} *__head);
void _Head_base_0ul_int_ptr_false__Head_base_int_ptr_ref(
 struct {int *_M_head_impl;} *this,
 int **__h);
void _Head_base_0ul_int_ptr_false__Head_base_void(
 struct {int *_M_head_impl;} *this);
void _Head_base_1ul_lambda_445_20_true__Head_base(
 struct {unsigned char gap0;} *this,
 const struct {unsigned char gap0;} *__h);
void _Head_base_1ul_default_delete_int_true__Head_base_void(
 struct {unsigned char gap0;} *this);
void _Head_base_1ul_default_delete_int_array_true__Head_base_void(
 struct {unsigned char gap0;} *this);
unique_ptr_int_lambda_445_20_pointer * get_0ul_int_ptr_lambda_445_20(
 struct unique_ptr_int_lambda_445_20 *__t);
unique_ptr_int_lambda_445_20_deleter_type * __uniq_ptr_impl_int_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi__M_deleter(
 struct unique_ptr_int_lambda_445_20 *this);
int ** __get_helper_0ul_int_ptr_lambda_445_20(
 struct unique_ptr_int_lambda_445_20 *__t);
int ** _Tuple_impl_0ul_int_ptr_lambda_445_20__M_head(
 struct {int *_M_head_impl;} *__t);
int ** _Head_base_0ul_int_ptr_false__M_head(
 struct {int *_M_head_impl;} *__b);
struct {unsigned char gap0;} * get_1ul_int_ptr_lambda_445_20(
 struct unique_ptr_int_lambda_445_20 *__t);
struct {unsigned char gap0;} * __get_helper_1ul_lambda_445_20(
 struct {unsigned char gap0;} *__t);
struct {unsigned char gap0;} * _Tuple_impl_1ul_lambda_445_20__M_head(
 struct {unsigned char gap0;} *__t);
struct {unsigned char gap0;} * _Head_base_1ul_lambda_445_20_true__M_head(
 struct {unsigned char gap0;} *__b);
const int ** __get_helper_0ul_int_ptr_lambda_445_20_const(
 const struct unique_ptr_int_lambda_445_20 *__t);
int *const * _Tuple_impl_0ul_int_ptr_lambda_445_20__M_head_const(
 const struct {int *_M_head_impl;} *__t);
int *const * _Head_base_0ul_int_ptr_false__M_head_const(
 const struct {int *_M_head_impl;} *__b);
int *const * _Tuple_impl_0ul_int_ptr_default_delete_int_array__M_head_const(
 const struct {int *_M_head_impl;} *__t);

/* Template function forward declarations */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* Container template class forward declarations */
struct Container_int;
struct Container_double;
void Container_int_Container(struct Container_int *this);
void Container_int_push(struct Container_int *this, int value);
int Container_int_get(const struct Container_int *this, int idx);
int Container_int_getSize(const struct Container_int *this);
void Container_double_Container(struct Container_double *this);
void Container_double_push(struct Container_double *this, double value);
double Container_double_get(const struct Container_double *this, int idx);
int Container_double_getSize(const struct Container_double *this);

void _ZN11SimpleClassC2EiPKc(struct SimpleClass *this, int v, const char *n);
void _ZN11SimpleClass8setValueEi(struct SimpleClass *this, int v);
int _ZNK11SimpleClass8getValueEv(const struct SimpleClass *this);
long long _ZNK11SimpleClass7computeEi(const struct SimpleClass *this, int x);
int _ZN11SimpleClass10getClassIDEv(void);

void _ZN14LifecycleClassC2Em(struct LifecycleClass *this, size_t s);
int _ZNK14LifecycleClass7getDataEm(const struct LifecycleClass *this, size_t idx);
int _ZN14LifecycleClass16getInstanceCountEv(void);
void _ZN14LifecycleClassD2Ev(struct LifecycleClass *this);

void _ZN4BaseC2Ev(struct Base *this);
void _ZN7DerivedC2Ei(struct Derived *this, int m);
int _ZN4Base12virtual_funcEi(struct Base *this, int x);
int _ZN7Derived12virtual_funcEi(struct Derived *this, int x);
void _ZN4BaseD2Ev(struct Base *this);
void _ZN7DerivedD2Ev(struct Derived *this);
void Base_D2Ev(struct Base *this);
void BaseA_BaseA(struct BaseA *this);
void BaseB_BaseB(struct BaseB *this);
void BaseA_D2Ev(struct BaseA *this);
void BaseB_D2Ev(struct BaseB *this);
void VirtualBase_VirtualBase(struct VirtualBase *this);
void VirtualBase_D2Ev(struct VirtualBase *this);
void MiddleA_MiddleA(struct MiddleA *this, void **vtt);
void MiddleB_MiddleB(struct MiddleB *this, void **vtt);
void MiddleA_D2Ev(struct MiddleA *this, void **vtt);
void MiddleB_D2Ev(struct MiddleB *this, void **vtt);
void DiamondDerived_D2Ev(struct DiamondDerived *this, void **vtt);

void _ZN12MultiDerivedC2Ev(struct MultiDerived *this);
void _ZN12MultiDerivedD2Ev(struct MultiDerived *this);

void _ZN14DiamondDerivedC1Ev(struct DiamondDerived *this);
void _ZN14DiamondDerivedD1Ev(struct DiamondDerived *this);

void _ZN12RTTIDerivedAC2Ev(struct RTTIDerivedA *this);
void _ZN12RTTIDerivedBC2Ev(struct RTTIDerivedB *this);

void _ZN5PointC2Eii(struct Point *this, int _x, int _y);
struct Point _ZNK5PointplERKS_(const struct Point *this, const struct Point *other);
bool _ZNK5PointeqERKS_(const struct Point *this, const struct Point *other);
struct Point * _ZN5PointppEv(struct Point *this);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_clang_O0_g
 * Processor: arm
 */

/* Type definitions for C++ classes */
struct SimpleClass {
 int value;
 char name[32];
};

struct LifecycleClass {
 size_t size;
 int *data;
 int instance_count;
};

struct Base {
 int (**_vptr$Base)(void);
};

struct Derived {
 int (**_vptr$Base)(void);
 int multiplier;
};

struct BaseA {
 int (**_vptr$BaseA)(void);
};

struct BaseB {
 int (**_vptr$BaseB)(void);
};

struct MultiDerived {
 struct BaseA BaseA;
 int (**_vptr$BaseA)(void);
 struct BaseB BaseB;
 int (**_vptr$BaseB)(void);
 int dataA;
 int dataB;
};

struct VirtualBase {
 int (**_vptr$VirtualBase)(void);
};

struct MiddleA {
 int (**_vptr$MiddleA)(void);
 int dataA;
};

struct MiddleB {
 int (**_vptr$MiddleB)(void);
 int dataB;
};

struct DiamondDerived {
 struct MiddleA MiddleA;
 int (**_vptr$MiddleA)(void);
 struct MiddleB MiddleB;
 int (**_vptr$MiddleB)(void);
 int dataA;
};

struct Point {
 int x;
 int y;
};

/* Container template class definitions */
struct Container_int {
 int size;
 int data[10];
};

struct Container_double {
 int size;
 double data[10];
};

struct RTTIBase {
 int (**_vptr$RTTIBase)(void);
};

struct RTTIDerivedA {
 int (**_vptr$RTTIBase)(void);
};

struct RTTIDerivedB {
 int (**_vptr$RTTIBase)(void);
};

/* Function: .init_proc @ 0x1988 */
long long call_weak_fn(void);
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_19A0 @ 0x19A0 */
void sub_19A0()
{
 return;
}


/* Function: __cxx_global_var_init @ 0x1B40 */
void _cxx_global_var_init()
{
 /* C++ iostream initialization stub */
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1B80 */
void GLOBAL__sub_I_5_1_cpp()
{
 _cxx_global_var_init();
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1CD4 */
int test_cpp_member_func()
{
 int v1; // [xsp+14h] [xbp-2Ch]
 int Value; // [xsp+18h] [xbp-28h]
 struct SimpleClass v3; // [xsp+1Ch] [xbp-24h] BYREF

 _ZN11SimpleClassC2EiPKc(&v3, 5, "Test");
 _ZN11SimpleClass8setValueEi(&v3, 10);
 Value = _ZNK11SimpleClass8getValueEv(&v3);
 v1 = _ZNK11SimpleClass7computeEi(&v3, 3);
 return Value + v1 + _ZN11SimpleClass10getClassIDEv();
}


/* Function: _Z20test_cpp_constructorv @ 0x1D4C */
int test_cpp_constructor()
{
 int Data; // [xsp+18h] [xbp-28h]
 struct LifecycleClass obj; // [xsp+28h] [xbp-18h] BYREF
 int result; // [xsp+3Ch] [xbp-4h]

 result = 0;
 _ZN14LifecycleClassC2Em(&obj, 5u);
 Data = _ZNK14LifecycleClass7getDataEm(&obj, 2u);
 result += Data;
 result += _ZN14LifecycleClass16getInstanceCountEv();
 _ZN14LifecycleClassD2Ev(&obj);
 return result + 1000 * _ZN14LifecycleClass16getInstanceCountEv();
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1DFC */
long long call_virtual_func(struct Base *obj, unsigned int x)
{
 return ((long long ( *)(struct Base *, unsigned long long))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1E30 */
int test_cpp_virtual_func()
{
 int v1; // [xsp+4h] [xbp-5Ch]
 int v2; // [xsp+1Ch] [xbp-44h]
 int r2; // [xsp+34h] [xbp-2Ch]
 int r1; // [xsp+38h] [xbp-28h]
 struct Derived derived; // [xsp+48h] [xbp-18h] BYREF
 struct Base base; // [xsp+58h] [xbp-8h] BYREF

 _ZN4BaseC2Ev(&base);
 _ZN7DerivedC2Ei(&derived, 3);
 r1 = _ZN4Base12virtual_funcEi(&base, 5);
 r2 = _ZN7Derived12virtual_funcEi(&derived, 5);
 v2 = call_virtual_func(&base, 5u);
 v1 = r1 + r2 + v2 + call_virtual_func(&derived, 5u);
 _ZN7DerivedD2Ev(&derived);
 _ZN4BaseD2Ev(&base);
 return v1;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1F50 */
int test_cpp_multiple_inheritance()
{
 int v1; // [xsp+4h] [xbp-6Ch]
 struct MultiDerived *v2; // [xsp+18h] [xbp-58h]
 int r1; // [xsp+3Ch] [xbp-34h]
 struct MultiDerived obj; // [xsp+50h] [xbp-20h] BYREF

 _ZN12MultiDerivedC2Ev(&obj);
 obj.dataA = 100;
 obj.dataB = 200;
 v2 = 0;
 if ( &obj )
 v2 = (struct MultiDerived *)&obj.BaseB;
 r1 = ((long long ( *)(struct MultiDerived *))*obj._vptr$BaseA)(&obj);
 v1 = r1 + (*(long long ( **)(struct MultiDerived *))v2->_vptr$BaseA)(v2) + (&obj != v2);
 _ZN12MultiDerivedD2Ev(&obj);
 return v1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x2050 */
int test_cpp_diamond_inheritance()
{
 int v1; // [xsp+4h] [xbp-6Ch]
 long long ( ***v2)(unsigned long long); // [xsp+18h] [xbp-58h]
 int v3; // [xsp+34h] [xbp-3Ch]
 struct DiamondDerived var30; // [xsp+40h] [xbp-30h] BYREF

 _ZN14DiamondDerivedC1Ev(&var30);
 *(int *)((char *)&var30.dataA + *((unsigned long long *)var30._vptr$MiddleA - 3)) = 50;
 v2 = 0;
 if ( &var30 )
 v2 = (long long ( ***)(unsigned long long))((char *)&var30 + *((unsigned long long *)var30._vptr$MiddleA - 3));
 v3 = (**v2)(v2);
 *(int *)((char *)&var30.dataA + *((unsigned long long *)var30._vptr$MiddleA - 3)) = 100;
 v1 = v3 + (**v2)(v2);
 _ZN14DiamondDerivedD1Ev(&var30);
 return v1;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x2154 */
int test_cpp_operator_overload()
{
 int v0; // w9
 bool eq; // [xsp+27h] [xbp-19h]
 struct Point p3; // [xsp+28h] [xbp-18h] BYREF
 struct Point p2; // [xsp+30h] [xbp-10h] BYREF
 struct Point p1; // [xsp+38h] [xbp-8h] BYREF

 _ZN5PointC2Eii(&p1, 1, 2);
 _ZN5PointC2Eii(&p2, 3, 4);
 p3 = _ZNK5PointplERKS_(&p1, &p2);
 eq = _ZNK5PointeqERKS_(&p1, &p2);
 _ZN5PointppEv(&p3);
 if ( eq )
 v0 = 0;
 else
 v0 = 10;
 return p3.x + p3.y + v0;
}


/* Function: _Z22test_cpp_template_funcv @ 0x21FC */
int test_cpp_template_func()
{
 int b; // [xsp+8h] [xbp-18h] BYREF
 int a; // [xsp+Ch] [xbp-14h] BYREF
 double v3; // [xsp+10h] [xbp-10h]
 int r1; // [xsp+1Ch] [xbp-4h]

 r1 = template_max_int(3, 7);
 v3 = template_max_double(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap_int(&a, &b);
 return r1 + (int)v3 + a + b;
}


/* Function: _Z23test_cpp_template_classv @ 0x2270 */
int test_cpp_template_class()
{
 double v1; // [xsp+18h] [xbp-98h]
 struct Container_double v2; // [xsp+20h] [xbp-90h] BYREF
 int r2; // [xsp+7Ch] [xbp-34h]
 int r1; // [xsp+80h] [xbp-30h]
 struct Container_int int_container; // [xsp+84h] [xbp-2Ch] BYREF

 Container_int_Container(&int_container);
 Container_int_push(&int_container, 10);
 Container_int_push(&int_container, 20);
 Container_int_push(&int_container, 30);
 r1 = Container_int_get(&int_container, 0);
 r2 = Container_int_getSize(&int_container);
 Container_double_Container(&v2);
 Container_double_push(&v2, 3.14);
 v1 = Container_double_get(&v2, 0);
 return r1 + r2 + (int)v1;
}


/* Function: _Z15test_cpp_lambdav @ 0x2330 */
int test_cpp_lambda()
{
 int v0; // w0
 int v2; // [xsp+10h] [xbp-20h]
 struct {unsigned char gap0;} v3; // [xsp+17h] [xbp-19h] BYREF
 struct {unsigned char gap0;} v4; // [xsp+18h] [xbp-18h] BYREF
 int capture_by_ref; // [xsp+28h] [xbp-8h] BYREF
 int capture_by_value; // [xsp+2Ch] [xbp-4h]

 capture_by_value = 10;
 capture_by_ref = 20;
 v4.capture_by_value = 10;
 v4.capture_by_ref = &capture_by_ref;
 v2 = test_cpp_lambda_ZZ15test_cpp_lambdavENK3_1clEi(
 (const const struct __cppobj {int capture_by_value;int *capture_by_ref;} *)&v4,
 3);
 test_cpp_lambda_ZZ15test_cpp_lambdavENK3_0clIiiEEDaT_T0_(&v3, 10, 20);
 return v2 + v0;
}


/* Function: _ZZ15test_cpp_lambdavENK3$_1clEi @ 0x23A0 */
int test_cpp_lambda_ZZ15test_cpp_lambdavENK3_1clEi(
 const struct __cppobj *this,
 int x)
{
 *this->capture_by_ref += 5;
 return x * this->capture_by_value + *this->capture_by_ref;
}


/* Function: _ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_ @ 0x23E0 */
void test_cpp_lambda_ZZ15test_cpp_lambdavENK3_0clIiiEEDaT_T0_(const struct {unsigned char gap0;} *this, int a, int b)
{
 ;
}


/* Function: _Z18test_cpp_exceptionv @ 0x2404 */
int test_cpp_exception()
{
 unsigned int *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x2574 */
int test_cpp_smart_ptr()
{
 int *v0; // x0
 struct unique_ptr_int *v1; // x0
 int v3; // [xsp+4h] [xbp-9Ch]
 int v4; // [xsp+10h] [xbp-90h]
 unique_ptr_int_lambda_445_20_pointer v5; // [xsp+18h] [xbp-88h]
 int *__p; // [xsp+30h] [xbp-70h]
 struct unique_ptr_int_lambda_445_20 v7; // [xsp+60h] [xbp-40h] BYREF
 struct unique_ptr_int_array v8; // [xsp+70h] [xbp-30h] BYREF
 struct unique_ptr_int ptr2; // [xsp+80h] [xbp-20h] BYREF
 struct unique_ptr_int __t; // [xsp+98h] [xbp-8h] BYREF

 v0 = (int *)operator_new(4u);
 *v0 = 100;
 unique_ptr_int_unique_ptr_default_delete_int_void(&__t, v0);
 *unique_ptr_int_operator_deref(&__t) = 200;
 v1 = move_unique_ptr_int(&__t);
 unique_ptr_int_unique_ptr(&ptr2, v1);
 HIDWORD(v8._M_t._M_t._M_head_impl) = *unique_ptr_int_operator_deref(&ptr2);
 __p = (int *)operator_new_array(0x14u);
 *__p = 1;
 __p[1] = 2;
 __p[2] = 3;
 __p[3] = 4;
 __p[4] = 5;
 unique_ptr_int_array_unique_ptr_int_ptr_default_delete_int_array_void_bool(&v8, __p);
 HIDWORD(v7._M_t._M_t._M_head_impl) = *unique_ptr_int_array_operator_index(&v8, 2u);
 v5 = (unique_ptr_int_lambda_445_20_pointer)operator_new(4u);
 *v5 = 500;
 unique_ptr_int_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi_unique_ptr(
 &v7,
 v5,
 (const unique_ptr_int_lambda_445_20_deleter_type *)&v7._M_t._M_t._M_head_impl + 3);
 v4 = unique_ptr_int_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi_operator_deref(&v7);
 v3 = HIDWORD(v8._M_t._M_t._M_head_impl) + HIDWORD(v7._M_t._M_t._M_head_impl) + *v4;
 unique_ptr_int_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi_destructor(&v7);
 unique_ptr_int_array_destructor(&v8);
 unique_ptr_int_destructor(&ptr2);
 unique_ptr_int_destructor(&__t);
 return v3;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EC2IS0_vEEPiRKS0_ @ 0x275C */
void unique_ptr_int_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi_unique_ptr(
 struct unique_ptr_int_lambda_445_20 *this,
 unique_ptr_int_lambda_445_20_pointer __p,
 const unique_ptr_int_lambda_445_20_deleter_type *__d)
{
 ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
 &this->_M_t,
 __p,
 __d);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EdeEv @ 0x2798 */
int & unique_ptr_int_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi_operator_deref(
 const struct unique_ptr_int_lambda_445_20 *this)
{
 return unique_ptr_int_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi_get(this);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev @ 0x27CC */
void unique_ptr_int_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi_destructor(
 struct unique_ptr_int_lambda_445_20 *this)
{
 int **v1; // x0
 unique_ptr_int_lambda_445_20_deleter_type *deleter; // [xsp+8h] [xbp-28h]
 int **__ptr; // [xsp+20h] [xbp-10h]

 __ptr = __uniq_ptr_impl_int_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi__M_ptr(&this->_M_t);
 if ( *__ptr )
 {
 deleter = unique_ptr_int_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi_get_deleter(this);
 v1 = move_int_ptr(__ptr);
 test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi_operator_call(deleter, *v1);
 }
 *__ptr = 0;
}


/* Function: _Z13test_cpp_rttiv @ 0x284C */
int test_cpp_rtti()
{
 const char *v0; // x0
 const struct RTTIDerivedB *v2; // [xsp+20h] [xbp-70h]
 const struct RTTIDerivedA *v3; // [xsp+30h] [xbp-60h]
 struct RTTIDerivedA *v4; // [xsp+48h] [xbp-48h]
 struct RTTIDerivedB *v5; // [xsp+58h] [xbp-38h]
 int result; // [xsp+7Ch] [xbp-14h]
 int resulta; // [xsp+7Ch] [xbp-14h]

 v4 = (struct RTTIDerivedA *)operator_new(8u);
 v4->_vptr$RTTIBase = 0;
 _ZN12RTTIDerivedAC2Ev(v4);
 v5 = (struct RTTIDerivedB *)operator_new(8u);
 v5->_vptr$RTTIBase = 0;
 _ZN12RTTIDerivedBC2Ev(v5);
 result = 0;
 if ( !v4 )
 __cxa_bad_typeid();
 if ( _ZNKSt9type_infoeqERKS_(
  *((const struct type_info **)v4->_vptr$RTTIBase - 1),
  (const struct type_info *)&typeinfo_for_RTTIDerivedA) )
 {
 result = 10;
 }
 if ( !v5 )
 __cxa_bad_typeid();
 if ( _ZNKSt9type_infoeqERKS_(
  *((const struct type_info **)v5->_vptr$RTTIBase - 1),
  (const struct type_info *)&typeinfo_for_RTTIDerivedB) )
 {
 result += 20;
 }
 v3 = (const struct RTTIDerivedA *)__dynamic_cast(
 v4,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0);
 if ( v3 )
  result += _ZNK12RTTIDerivedA13derivedA_dataEv(v3);
 v2 = (const struct RTTIDerivedB *)__dynamic_cast(
 v5,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0);
 if ( v2 )
  result += _ZNK12RTTIDerivedB13derivedB_dataEv(v2);
 v0 = _ZNKSt9type_info4nameEv(*((const struct type_info **)v4->_vptr$RTTIBase - 1));
 resulta = result + strlen(v0);
 (*((void ( **)(struct RTTIDerivedA *))v4->_vptr$RTTIBase + 1))(v4);
 (*((void ( **)(struct RTTIDerivedB *))v5->_vptr$RTTIBase + 1))(v5);
 return resulta;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x2A84 */
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


/* Function: sub_2B50 @ 0x2B50 */
// positive sp value has been detected, the output may be wrong!
long long sub_2B50(unsigned int a1)
{
 unsigned int v1; // w0
 unsigned int v2; // w0

 printf(aCppL401D, a1);
 v1 = test_cpp_smart_ptr();
 printf(aCppL402D, v1);
 v2 = test_cpp_rtti();
 return printf(aCppL403D, v2);
}


/* Function: main @ 0x2B90 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: sub_2BAC @ 0x2BAC */
// positive sp value has been detected, the output may be wrong!
long long sub_2BAC()
{
 unsigned int v1; // [xsp-18h] [xbp-18h]

 return v1;
}


/* Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3$_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_ @ 0x2BBC */
void ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
 struct unique_ptr_int_lambda_445_20 *this,
 unique_ptr_int_lambda_445_20_pointer a2,
 const unique_ptr_int_lambda_445_20_deleter_type *a3)
{
 __uniq_ptr_impl_int_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi___uniq_ptr_impl(
 this,
 a2,
 a3);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2EC2IRKS0_EEPiOT_ @ 0x2BF0 */
void __uniq_ptr_impl_int_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi___uniq_ptr_impl(
 struct unique_ptr_int_lambda_445_20 *this,
 unique_ptr_int_lambda_445_20_pointer __p,
 const unique_ptr_int_lambda_445_20_deleter_type *__d)
{
 const struct {unsigned char gap0;} *v3; // x0
 unique_ptr_int_lambda_445_20_pointer __pa; // [xsp+20h] [xbp-10h] BYREF
 struct unique_ptr_int_lambda_445_20 *thisa; // [xsp+28h] [xbp-8h]

 thisa = this;
 __pa = __p;
 v3 = forward_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi_const_ref(__d);
 tuple_int_ptr_lambda_445_20_tuple_int_ptr_ref_lambda_445_20_const_ref_true(
 &this->_M_t,
 &__pa,
 v3);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE @ 0x2C3C */
const struct {unsigned char gap0;} * forward_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi_const_ref(
 const unique_ptr_int_lambda_445_20_deleter_type *__t)
{
 return (const struct {unsigned char gap0;} *)__t;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x2C50 */
void tuple_int_ptr_lambda_445_20_tuple_int_ptr_ref_lambda_445_20_const_ref_true(
 struct unique_ptr_int_lambda_445_20 *this,
 int **__a1,
 const unique_ptr_int_lambda_445_20_deleter_type *__a2)
{
 const struct {unsigned char gap0;} *v3; // x0
 int **__head; // [xsp+8h] [xbp-28h]

 __head = forward_int_ptr_ref(__a1);
 v3 = forward_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi_const_ref(__a2);
 _Tuple_impl_0ul_int_ptr_lambda_445_20__Tuple_impl_int_ptr_ref_lambda_445_20_const_ref_void(
 this,
 __head,
 v3);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x2CA8 */
void _Tuple_impl_0ul_int_ptr_lambda_445_20__Tuple_impl_int_ptr_ref_lambda_445_20_const_ref_void(
 struct unique_ptr_int_lambda_445_20 *this,
 int **__head,
 const unique_ptr_int_lambda_445_20_deleter_type *__tail)
{
 const struct {unsigned char gap0;} *v3; // x0
 int **v4; // x0

 v3 = forward_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi_const_ref(__tail);
 _Tuple_impl_1ul_lambda_445_20__Tuple_impl(this, v3);
 v4 = forward_int_ptr_ref(__head);
 _Head_base_0ul_int_ptr_false__Head_base_int_ptr_ref((struct {int *_M_head_impl;} *)this, v4);
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EEC2ERKS0_ @ 0x2CFC */
void _Tuple_impl_1ul_lambda_445_20__Tuple_impl(
 struct {unsigned char gap0;} *this,
 const struct {unsigned char gap0;} *__head)
{
 _Head_base_1ul_lambda_445_20_true__Head_base(this, __head);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EEC2ERKS0_ @ 0x2D28 */
void _Head_base_1ul_lambda_445_20_true__Head_base(
 struct {unsigned char gap0;} *this,
 const struct {unsigned char gap0;} *__h)
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x2D3C */
unique_ptr_int_lambda_445_20_pointer * __uniq_ptr_impl_int_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi__M_ptr(
 struct unique_ptr_int_lambda_445_20 *this)
{
 return get_0ul_int_ptr_lambda_445_20(&this->_M_t);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E11get_deleterEv @ 0x2D60 */
unique_ptr_int_lambda_445_20_deleter_type * unique_ptr_int_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi_get_deleter(
 struct unique_ptr_int_lambda_445_20 *this)
{
 return (unique_ptr_int_lambda_445_20_deleter_type *)__uniq_ptr_impl_int_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi__M_deleter(&this->_M_t);
}


/* Function: _ZZ18test_cpp_smart_ptrvENK3$_2clEPi @ 0x2D94 */
void test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi_operator_call(const struct {unsigned char gap0;} *this, int *p)
{
 *p = -1;
 if ( p )
 operator_delete(p);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x2DDC */
int ** get_0ul_int_ptr_lambda_445_20(
 struct unique_ptr_int_lambda_445_20 *__t)
{
 return __get_helper_0ul_int_ptr_lambda_445_20(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x2E00 */
int ** __get_helper_0ul_int_ptr_lambda_445_20(
 struct unique_ptr_int_lambda_445_20 *__t)
{
 return _Tuple_impl_0ul_int_ptr_lambda_445_20__M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS2_ @ 0x2E24 */
int ** _Tuple_impl_0ul_int_ptr_lambda_445_20__M_head(
 struct {int *_M_head_impl;} *__t)
{
 return _Head_base_0ul_int_ptr_false__M_head(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E10_M_deleterEv @ 0x2E48 */
unique_ptr_int_lambda_445_20_deleter_type * __uniq_ptr_impl_int_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi__M_deleter(
 struct unique_ptr_int_lambda_445_20 *this)
{
 return get_1ul_int_ptr_lambda_445_20(&this->_M_t);
}


/* Function: _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x2E6C */
struct {unsigned char gap0;} * get_1ul_int_ptr_lambda_445_20(
 struct unique_ptr_int_lambda_445_20 *__t)
{
 return (struct {unsigned char gap0;} *)__get_helper_1ul_lambda_445_20(__t);
}


/* Function: _ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvE3$_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE @ 0x2E90 */
struct {unsigned char gap0;} * __get_helper_1ul_lambda_445_20(
 struct {unsigned char gap0;} *__t)
{
 return _Tuple_impl_1ul_lambda_445_20__M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS1_ @ 0x2EB4 */
struct {unsigned char gap0;} * _Tuple_impl_1ul_lambda_445_20__M_head(
 struct {unsigned char gap0;} *__t)
{
 return _Head_base_1ul_lambda_445_20_true__M_head(__t);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EE7_M_headERS1_ @ 0x2ED8 */
struct {unsigned char gap0;} * _Head_base_1ul_lambda_445_20_true__M_head(
 struct {unsigned char gap0;} *__b)
{
 return (struct {unsigned char gap0;} *)__b;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E3getEv @ 0x2EEC */
unique_ptr_int_lambda_445_20_pointer unique_ptr_int_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi_get(
 const struct unique_ptr_int_lambda_445_20 *this)
{
 return __uniq_ptr_impl_int_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi__M_ptr(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x2F20 */
unique_ptr_int_lambda_445_20_pointer __uniq_ptr_impl_int_test_cpp_smart_ptr_ZZ18test_cpp_smart_ptrvENK3_2clEPi__M_ptr(
 const struct unique_ptr_int_lambda_445_20 *this)
{
 return *get_0ul_int_ptr_lambda_445_20(&this->_M_t);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x2F48 */
const int ** get_0ul_int_ptr_lambda_445_20_const(
 const struct unique_ptr_int_lambda_445_20 *__t)
{
 return __get_helper_0ul_int_ptr_lambda_445_20_const(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x2F6C */
int *const * __get_helper_0ul_int_ptr_lambda_445_20_const(
 const struct unique_ptr_int_lambda_445_20 *__t)
{
 return _Tuple_impl_0ul_int_ptr_lambda_445_20__M_head_const(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERKS2_ @ 0x2F90 */
int *const * _Tuple_impl_0ul_int_ptr_lambda_445_20__M_head_const(
 const struct {int *_M_head_impl;} *__t)
{
 return _Head_base_0ul_int_ptr_false__M_head_const(__t);
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x2FB4 */
void _ZN11SimpleClassC2EiPKc(struct SimpleClass *this, int v, const char *n)
{
 this->value = v;
 strncpy(this->name, n, 0x1Fu);
 this->name[31] = 0;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x3000 */
void _ZN11SimpleClass8setValueEi(struct SimpleClass *this, int v)
{
 this->value = v;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x3020 */
int _ZNK11SimpleClass8getValueEv(const struct SimpleClass *this)
{
 return this->value;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x3038 */
long long _ZNK11SimpleClass7computeEi(const struct SimpleClass *this, int x)
{
 int v3; // [xsp+0h] [xbp-10h]

 v3 = this->value * x;
 return (unsigned int)strlen(this->name) + v3;
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x3080 */
int _ZN11SimpleClass10getClassIDEv(void)
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Em @ 0x3088 */
void LifecycleClass_LifecycleClass(struct LifecycleClass *this, size_t s)
{
 unsigned long long v2; // x0
 size_t i; // [xsp+8h] [xbp-18h]

 this->size = s;
 if ( is_mul_ok(s, 4u) )
 v2 = 4 * s;
 else
 v2 = -1;
 this->data = (int *)operator_new_array(v2);
 for ( i = 0; i < s; ++i )
 this->data[i] = 10 * i;
 ++LifecycleClass_instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEm @ 0x3138 */
int LifecycleClass_getData(const struct LifecycleClass *this, size_t idx)
{
 if ( idx >= this->size )
 return -1;
 else
 return this->data[idx];
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x3190 */
int LifecycleClass_getInstanceCount()
{
 return LifecycleClass_instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x319C */
void LifecycleClass_D2Ev(struct LifecycleClass *this)
{
 if ( this->data )
 operator_delete_array(this->data);
 --LifecycleClass_instance_count;
}


/* Function: _ZN4BaseC2Ev @ 0x31E8 */
void Base_Base(struct Base *this)
{
 this->_vptr$Base = (int (**)(void))&off_17858;
}


/* Function: _ZN7DerivedC2Ei @ 0x320C */
void Derived_Derived(struct Derived *this, int m)
{
 Base_Base(this);
 this->_vptr$Base = (int (**)(void))&off_17898;
 this->multiplier = m;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x325C */
int Base_virtual_func(struct Base *this, int x)
{
 return x + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x3278 */
int Derived_virtual_func(struct Derived *this, int x)
{
 return x * this->multiplier;
}


/* Function: _ZN7DerivedD2Ev @ 0x329C */
void Derived_D2Ev(struct Derived *this)
{
 Base_D2Ev(this);
}


/* Function: _ZN4BaseD2Ev @ 0x32C0 */
void Base_D2Ev(struct Base *this)
{
 ;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x32D0 */
void MultiDerived_MultiDerived(struct MultiDerived *this)
{
 BaseA_BaseA(this);
 BaseB_BaseB(&this->BaseB);
 this->_vptr$BaseA = (int (**)(void))&off_178E0;
 this->_vptr$BaseB = (int (**)(void))&off_17910;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x3330 */
void MultiDerived_D2Ev(struct MultiDerived *this)
{
 BaseB_D2Ev(&this->BaseB);
 BaseA_D2Ev(this);
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x3364 */
void DiamondDerived_DiamondDerived(struct DiamondDerived *this)
{
 VirtualBase_VirtualBase((struct VirtualBase *)&this->MiddleB);
 MiddleA_MiddleA(this, (void **)off_17A70);
 MiddleB_MiddleB((struct MiddleB *)(&this->dataA + 2), (void **)off_17A80);
 this->_vptr$MiddleA = (int (**)(void))&off_179E8;
 this->_vptr$MiddleB = (int (**)(void))&off_17A50;
 *((unsigned long long *)&this->dataA + 1) = &off_17A18;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x3400 */
void DiamondDerived_D1Ev(struct DiamondDerived *this)
{
 DiamondDerived_D2Ev(this, (void **)&VTT_for_DiamondDerived);
 VirtualBase_D2Ev((struct VirtualBase *)&this->MiddleB);
}


/* Function: _ZN5PointC2Eii @ 0x343C */
void Point_Point(struct Point *this, int _x, int _y)
{
 this->x = _x;
 this->y = _y;
}


/* Function: _ZNK5PointplERKS_ @ 0x3468 */
struct Point Point_operator_plus(const struct Point *this, const struct Point *other)
{
 struct Point v3; // [xsp+18h] [xbp-8h] BYREF

 Point_Point(&v3, this->x + other->x, this->y + other->y);
 return v3;
}


/* Function: _ZNK5PointeqERKS_ @ 0x34B8 */
bool Point_operator_eq(const struct Point *this, const struct Point *other)
{
 bool v3; // [xsp+Ch] [xbp-14h]

 v3 = 0;
 if ( this->x == other->x )
 return this->y == other->y;
 return v3;
}


/* Function: _ZN5PointppEv @ 0x351C */
struct Point * Point_operator_inc(struct Point *this)
{
 ++this->x;
 ++this->y;
 return this;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x3548 */
int template_max_int_impl(int a, int b)
{
 if ( a <= b )
 return b;
 else
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x358C */
double template_max_double_impl(double a, double b)
{
 if ( a <= b )
 return b;
 else
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x35D4 */
void template_swap_int_impl(int *a, int *b)
{
 int v2; // [xsp+Ch] [xbp-14h]

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x3610 */
void Container_int_Container_impl(struct Container_int *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x3628 */
void Container_int_push_impl(struct Container_int *this, int value)
{
 long long v2; // x10

 if ( this->size < 10 )
 {
 v2 = this->size++;
 this->data[v2] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x3674 */
int Container_int_get_impl(const struct Container_int *this, int idx)
{
 if ( idx < 0 || idx >= this->size )
 return 0;
 else
 return this->data[idx];
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x36D4 */
int Container_int_getSize_impl(const struct Container_int *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x36EC */
void Container_double_Container_impl(struct Container_double *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x3704 */
void Container_double_push_impl(struct Container_double *this, double value)
{
 long long v2; // x10

 if ( this->size < 10 )
 {
 v2 = this->size++;
 this->data[v2] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x3750 */
double Container_double_get_impl(const struct Container_double *this, int idx)
{
 if ( idx < 0 || idx >= this->size )
 return 0.0;
 else
 return this->data[idx];
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x37B4 */
int Container_double_getSize_impl(const struct Container_double *this)
{
 return this->size;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x37CC */
void unique_ptr_int_unique_ptr_default_delete_int_void(
 struct unique_ptr_int *this,
 int *__p)
{
 ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(&this->_M_t, __p);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x3800 */
int * unique_ptr_int_operator_deref(
 const struct unique_ptr_int *this)
{
 return unique_ptr_int_get(this);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x3834 */
struct unique_ptr_int * move_unique_ptr_int(
 struct unique_ptr_int *__t)
{
 return __t;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x3848 */
void unique_ptr_int_unique_ptr(struct unique_ptr_int *this, struct unique_ptr_int *a2)
{
 __uniq_ptr_data_int_default_delete_int_true_true___uniq_ptr_data(&this->_M_t, &a2->_M_t);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x3874 */
void unique_ptr_int_array_unique_ptr_int_ptr_default_delete_int_array_void_bool(
 struct unique_ptr_int_array *this,
 int *__p)
{
 ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(&this->_M_t, __p);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm @ 0x38A8 */
int unique_ptr_int_array_operator_index(
 const struct unique_ptr_int_array *this,
 size_t __i)
{
 return unique_ptr_int_array_get(this)[__i];
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x38E8 */
void unique_ptr_int_array_destructor(struct unique_ptr_int_array *this)
{
 const struct default_delete_int *deleter; // x0
 int **v3; // [xsp+10h] [xbp-10h]

 v3 = __uniq_ptr_impl_int_default_delete_int_array__M_ptr(&this->_M_t);
 if ( *v3 )
 {
 deleter = unique_ptr_int_array_get_deleter(this);
 default_delete_int_array_operator_call(deleter, *v3);
 }
 *v3 = 0;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x394C */
void unique_ptr_int_destructor(struct unique_ptr_int *this)
{
 int **v1; // x8
 struct default_delete_int *deleter; // [xsp+0h] [xbp-20h]
 int **__t; // [xsp+10h] [xbp-10h]

 __t = __uniq_ptr_impl_int_default_delete_int__M_ptr(&this->_M_t);
 if ( *__t )
 {
 deleter = unique_ptr_int_get_deleter(this);
 v1 = move_int_ptr(__t);
 default_delete_int_operator_call(deleter, *v1);
 }
 *__t = 0;
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x39C0 */
void RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase::RTTIBase(this);
 this->_vptr$RTTIBase = (int (**)(void))off_17D30;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x3A04 */
void RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase::RTTIBase(this);
 this->_vptr$RTTIBase = (int (**)(void))off_17D80;
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x3A48 */
bool type_info::operator==(const type_info *this, const type_info *__arg)
{
 bool v3; // [xsp+Ch] [xbp-24h]
 bool v4; // [xsp+1Ch] [xbp-14h]

 v4 = 1;
 if ( *((unsigned long long *)this + 1) != *((unsigned long long *)__arg + 1) )
 {
 v3 = 0;
 if ( **((unsigned char **)this + 1) != 42 )
 return strcmp(*((const char **)this + 1), *((const char **)__arg + 1)) == 0;
 return v3;
 }
 return v4;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x3AE8 */
int RTTIDerivedA::derivedA_data(const RTTIDerivedA *this)
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x3AFC */
int RTTIDerivedB::derivedB_data(const RTTIDerivedB *this)
{
 return 200;
}


/* Function: _ZNKSt9type_info4nameEv @ 0x3B10 */
const char * type_info::name(const type_info *this)
{
 if ( **((unsigned char **)this + 1) == 42 )
 return (const char *)(*((unsigned long long *)this + 1) + 1LL);
 else
 return (const char *)*((unsigned long long *)this + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x3B64 */
const char * Base::getName(const Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x3B7C */
void Base::~Base(Base *this)
{
 Base::~Base(this);
 operator delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x3BAC */
const char * Derived::getName(const Derived *this)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x3BC4 */
void Derived::~Derived(Derived *this)
{
 Derived::~Derived(this);
 operator delete(this);
}


/* Function: _ZN5BaseAC2Ev @ 0x3BF4 */
void BaseA::BaseA(BaseA *this)
{
 this->_vptr$BaseA = (int (**)(void))&off_17990;
}


/* Function: _ZN5BaseBC2Ev @ 0x3C18 */
void BaseB::BaseB(BaseB *this)
{
 this->_vptr$BaseB = (int (**)(void))&off_179B8;
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x3C3C */
int MultiDerived::funcA(MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x3C50 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 MultiDerived::~MultiDerived(this);
 operator delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x3C80 */
int MultiDerived::funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x3C94 */
void non_virtual_thunk_to_MultiDerived::funcB()
{
 long long v0; // x0

 MultiDerived::funcB((MultiDerived *)(v0 - 16));
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x3CAC */
void non_virtual_thunk_to_MultiDerived::~MultiDerived()
{
 long long v0; // x0

 MultiDerived::~MultiDerived((MultiDerived *)(v0 - 16));
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x3CC4 */
void non_virtual_thunk_to_MultiDerived::~MultiDerived()
{
 long long v0; // x0

 MultiDerived::~MultiDerived((MultiDerived *)(v0 - 16));
}


/* Function: _ZN5BaseA5funcAEv @ 0x3CDC */
int BaseA::funcA(BaseA *this)
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
 operator delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x3D30 */
int BaseB::funcB(BaseB *this)
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
 operator delete(this);
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x3D84 */
void VirtualBase::VirtualBase(VirtualBase *this)
{
 this->_vptr$VirtualBase = (int (**)(void))&off_17C18;
}


/* Function: _ZN7MiddleAC2Ev @ 0x3DA8 */
void MiddleA::MiddleA(MiddleA *this, void **vtt)
{
 this->_vptr$MiddleA = (int (**)(void))*vtt;
 *(int (***)(void))((char *)&this->_vptr$MiddleA + *((unsigned long long *)this->_vptr$MiddleA - 3)) = (int (**)(void))vtt[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x3DDC */
void MiddleB::MiddleB(MiddleB *this, void **vtt)
{
 this->_vptr$MiddleB = (int (**)(void))*vtt;
 *(int (***)(void))((char *)&this->_vptr$MiddleB + *((unsigned long long *)this->_vptr$MiddleB - 3)) = (int (**)(void))vtt[1];
}


/* Function: _ZN7MiddleA4funcEv @ 0x3E10 */
int MiddleA::func(MiddleA *this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr$MiddleA - 3)) + 150;
}


/* Function: _ZN7MiddleAD1Ev @ 0x3E38 */
void MiddleA::~MiddleA(MiddleA *this)
{
 MiddleA::~MiddleA(this, (void **)VTT_for_MiddleA);
 VirtualBase::~VirtualBase((VirtualBase *)(&this->dataA + 2));
}


/* Function: _ZN7MiddleAD0Ev @ 0x3E74 */
void MiddleA::~MiddleA(MiddleA *this)
{
 MiddleA::~MiddleA(this);
 operator delete(this);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x3EA4 */
void virtual_thunk_to_MiddleA::func()
{
 unsigned long long *v0; // x0

 MiddleA::func((MiddleA *)((char *)v0 + *(unsigned long long *)(*v0 - 24LL)));
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x3EC4 */
void virtual_thunk_to_MiddleA::~MiddleA()
{
 unsigned long long *v0; // x0

 MiddleA::~MiddleA((MiddleA *)((char *)v0 + *(unsigned long long *)(*v0 - 32LL)));
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x3EE4 */
void virtual_thunk_to_MiddleA::~MiddleA()
{
 unsigned long long *v0; // x0

 MiddleA::~MiddleA((MiddleA *)((char *)v0 + *(unsigned long long *)(*v0 - 32LL)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x3F04 */
int MiddleB::func(MiddleB *this)
{
 return *(int *)((char *)&this->dataB + *((unsigned long long *)this->_vptr$MiddleB - 3)) + 200;
}


/* Function: _ZN7MiddleBD1Ev @ 0x3F2C */
void MiddleB::~MiddleB(MiddleB *this)
{
 MiddleB::~MiddleB(this, (void **)VTT_for_MiddleB);
 VirtualBase::~VirtualBase((VirtualBase *)(&this->dataB + 2));
}


/* Function: _ZN7MiddleBD0Ev @ 0x3F68 */
void MiddleB::~MiddleB(MiddleB *this)
{
 MiddleB::~MiddleB(this);
 operator delete(this);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x3F98 */
void virtual_thunk_to_MiddleB::func()
{
 unsigned long long *v0; // x0

 MiddleB::func((MiddleB *)((char *)v0 + *(unsigned long long *)(*v0 - 24LL)));
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x3FB8 */
void virtual_thunk_to_MiddleB::~MiddleB()
{
 unsigned long long *v0; // x0

 MiddleB::~MiddleB((MiddleB *)((char *)v0 + *(unsigned long long *)(*v0 - 32LL)));
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x3FD8 */
void virtual_thunk_to_MiddleB::~MiddleB()
{
 unsigned long long *v0; // x0

 MiddleB::~MiddleB((MiddleB *)((char *)v0 + *(unsigned long long *)(*v0 - 32LL)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x3FF8 */
int DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr$MiddleA - 3)) + 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x4020 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived(this);
 operator delete(this);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x4050 */
void non_virtual_thunk_to_DiamondDerived::func()
{
 long long v0; // x0

 DiamondDerived::func((DiamondDerived *)(v0 - 16));
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x4068 */
void non_virtual_thunk_to_DiamondDerived::~DiamondDerived()
{
 long long v0; // x0

 DiamondDerived::~DiamondDerived((DiamondDerived *)(v0 - 16));
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x4080 */
void non_virtual_thunk_to_DiamondDerived::~DiamondDerived()
{
 long long v0; // x0

 DiamondDerived::~DiamondDerived((DiamondDerived *)(v0 - 16));
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x4098 */
void virtual_thunk_to_DiamondDerived::func()
{
 unsigned long long *v0; // x0

 DiamondDerived::func((DiamondDerived *)((char *)v0 + *(unsigned long long *)(*v0 - 24LL)));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x40B8 */
void virtual_thunk_to_DiamondDerived::~DiamondDerived()
{
 unsigned long long *v0; // x0

 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)v0 + *(unsigned long long *)(*v0 - 32LL)));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x40D8 */
void virtual_thunk_to_DiamondDerived::~DiamondDerived()
{
 unsigned long long *v0; // x0

 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)v0 + *(unsigned long long *)(*v0 - 32LL)));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x40F8 */
int VirtualBase::func(VirtualBase *this)
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
 operator delete(this);
}


/* Function: _ZN7MiddleAD2Ev @ 0x414C */
void MiddleA::~MiddleA(MiddleA *this, void **vtt)
{
 ;
}


/* Function: _ZN7MiddleBD2Ev @ 0x4160 */
void MiddleB::~MiddleB(MiddleB *this, void **vtt)
{
 ;
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x4174 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this, void **vtt)
{
 MiddleB::~MiddleB((MiddleB *)(&this->dataA + 2), vtt + 3);
 MiddleA::~MiddleA(this, vtt + 1);
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x41C0 */
void __uniq_ptr_data_int_default_delete_int_true_true___uniq_ptr_data(
 struct {unsigned char gap0;} *this,
 struct {unsigned char gap0;} *a2)
{
 __uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x41EC */
void __uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl(
 struct {unsigned char gap0;} *this,
 struct {unsigned char gap0;} *__u)
{
 struct {unsigned char gap0;} *v2; // x0

 v2 = move_tuple_int_ptr_default_delete_int(&__u->_M_t);
 tuple_int_ptr_default_delete_int_tuple(&this->_M_t, v2);
 *__uniq_ptr_impl_int_default_delete_int__M_ptr(__u) = 0;
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x4244 */
struct {unsigned char gap0;} * move_tuple_int_ptr_default_delete_int(
 struct {unsigned char gap0;} *__t)
{
 return __t;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x4258 */
void tuple_int_ptr_default_delete_int_tuple(
 struct {unsigned char gap0;} *this,
 struct {unsigned char gap0;} *a2)
{
 _Tuple_impl_0ul_int_ptr_default_delete_int__Tuple_impl(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x4284 */
int ** __uniq_ptr_impl_int_default_delete_int__M_ptr(
 struct {unsigned char gap0;} *this)
{
 return get_0ul_int_ptr_default_delete_int(&this->_M_t);
}


/* Function: __clang_call_terminate @ 0x42A8 */
void _clang_call_terminate(void *a1)
{
 __cxa_begin_catch(a1);
 terminate();
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x42B4 */
void _Tuple_impl_0ul_int_ptr_default_delete_int__Tuple_impl(
 struct {unsigned char gap0;} *this,
 struct {unsigned char gap0;} *a2)
{
 _Tuple_impl_1ul_default_delete_int__Tuple_impl(this, a2);
 *(unsigned long long *)&this->gap0 = *(unsigned long long *)&a2->gap0;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ @ 0x42F4 */
void _Tuple_impl_1ul_default_delete_int__Tuple_impl(
 struct {unsigned char gap0;} *this,
 struct {unsigned char gap0;} *__in)
{
 ;
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x4308 */
int ** get_0ul_int_ptr_default_delete_int(
 struct {unsigned char gap0;} *__t)
{
 return __get_helper_0ul_int_ptr_default_delete_int(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x432C */
int ** __get_helper_0ul_int_ptr_default_delete_int(
 struct {unsigned char gap0;} *__t)
{
 return _Tuple_impl_0ul_int_ptr_default_delete_int__M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x4350 */
int ** _Tuple_impl_0ul_int_ptr_default_delete_int__M_head(struct {int *_M_head_impl;} *__t)
{
 return _Head_base_0ul_int_ptr_false__M_head(__t);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ @ 0x4374 */
int ** _Head_base_0ul_int_ptr_false__M_head(struct {int *_M_head_impl;} *__b)
{
 return &__b->_M_head_impl;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x4388 */
void RTTIBase::RTTIBase(RTTIBase *this)
{
 this->_vptr$RTTIBase = (int (**)(void))off_17D58;
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
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x4400 */
int RTTIDerivedA::getType(const RTTIDerivedA *this)
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
 operator delete(this);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x4454 */
int RTTIBase::getType(const RTTIBase *this)
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
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x44BC */
int RTTIDerivedB::getType(const RTTIDerivedB *this)
{
 return 2;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x44D0 */
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(
 struct {unsigned char gap0;} *this,
 int *a2)
{
 __uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x44FC */
void __uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl(
 struct {unsigned char gap0;} *this,
 int *__p)
{
 tuple_int_ptr_default_delete_int_tuple_int_true_true(&this->_M_t);
 *__uniq_ptr_impl_int_default_delete_int__M_ptr(this) = __p;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x4540 */
void tuple_int_ptr_default_delete_int_tuple_int_true_true(
 struct {unsigned char gap0;} *this)
{
 _Tuple_impl_0ul_int_ptr_default_delete_int__Tuple_impl_void(this);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev @ 0x456C */
void _Tuple_impl_0ul_int_ptr_default_delete_int__Tuple_impl_void(
 struct {unsigned char gap0;} *this)
{
 _Tuple_impl_1ul_default_delete_int__Tuple_impl_void(this);
 _Head_base_0ul_int_ptr_false__Head_base_void((struct {int *_M_head_impl;} *)this);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev @ 0x459C */
void _Tuple_impl_1ul_default_delete_int__Tuple_impl_void(
 struct {unsigned char gap0;} *this)
{
 _Head_base_1ul_default_delete_int_true__Head_base_void(this);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2Ev @ 0x45C0 */
void _Head_base_0ul_int_ptr_false__Head_base_void(struct {int *_M_head_impl;} *this)
{
 this->_M_head_impl = 0;
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev @ 0x45D8 */
void _Head_base_1ul_default_delete_int_true__Head_base_void(
 struct {unsigned char gap0;} *this)
{
 ;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x45E8 */
struct default_delete_int * unique_ptr_int_get_deleter(struct unique_ptr_int *this)
{
 return __uniq_ptr_impl_int_default_delete_int__M_deleter(&this->_M_t);
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x461C */
void default_delete_int_operator_call(const struct default_delete_int *this, int *__ptr)
{
 if ( __ptr )
 operator_delete(__ptr);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x4658 */
int ** move_int_ptr_ref(int **__t)
{
 return __t;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x466C */
struct default_delete_int * __uniq_ptr_impl_int_default_delete_int__M_deleter(
 struct {unsigned char gap0;} *this)
{
 return get_1ul_int_ptr_default_delete_int(&this->_M_t);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x4690 */
struct {unsigned char gap0;} * get_1ul_int_ptr_default_delete_int(
 struct {unsigned char gap0;} *__t)
{
 return __get_helper_1ul_default_delete_int(__t);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x46B4 */
struct {unsigned char gap0;} * __get_helper_1ul_default_delete_int(
 struct {unsigned char gap0;} *__t)
{
 return _Tuple_impl_1ul_default_delete_int__M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x46D8 */
struct {unsigned char gap0;} * _Tuple_impl_1ul_default_delete_int__M_head(
 struct {unsigned char gap0;} *__t)
{
 return _Head_base_1ul_default_delete_int_true__M_head(__t);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x46FC */
struct {unsigned char gap0;} * _Head_base_1ul_default_delete_int_true__M_head(
 struct {unsigned char gap0;} *__b)
{
 return (struct {unsigned char gap0;} *)__b;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x4710 */
int * unique_ptr_int_get(const struct unique_ptr_int *this)
{
 return __uniq_ptr_impl_int_default_delete_int__M_ptr_const(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x4744 */
int * __uniq_ptr_impl_int_default_delete_int__M_ptr_const(
 const struct {unsigned char gap0;} *this)
{
 return *get_0ul_int_ptr_default_delete_int_const(&this->_M_t);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x476C */
const int ** get_0ul_int_ptr_default_delete_int_const(
 const struct {unsigned char gap0;} *__t)
{
 return __get_helper_0ul_int_ptr_default_delete_int_const(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4790 */
int *const * __get_helper_0ul_int_ptr_default_delete_int_const(
 const struct {unsigned char gap0;} *__t)
{
 return _Tuple_impl_0ul_int_ptr_default_delete_int__M_head_const(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x47B4 */
int *const * _Tuple_impl_0ul_int_ptr_default_delete_int__M_head_const(
 const struct {int *_M_head_impl;} *__t)
{
 return _Head_base_0ul_int_ptr_false__M_head_const(__t);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ @ 0x47D8 */
int *const * _Head_base_0ul_int_ptr_false__M_head_const(const struct {int *_M_head_impl;} *__b)
{
 return &__b->_M_head_impl;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x47EC */
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(
 struct {unsigned char gap0;} *this,
 int *a2)
{
 __uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x4818 */
void __uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl(
 struct {unsigned char gap0;} *this,
 int *__p)
{
 tuple_int_ptr_default_delete_int_array_tuple_int_true_true(&this->_M_t);
 *__uniq_ptr_impl_int_default_delete_int_array__M_ptr(this) = __p;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x485C */
void tuple_int_ptr_default_delete_int_array_tuple_int_true_true(
 struct {unsigned char gap0;} *this)
{
 _Tuple_impl_0ul_int_ptr_default_delete_int_array__Tuple_impl(this);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4888 */
int ** __uniq_ptr_impl_int_default_delete_int_array__M_ptr(
 struct {unsigned char gap0;} *this)
{
 return get_0ul_int_ptr_default_delete_int_array(&this->_M_t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x48AC */
void _Tuple_impl_0ul_int_ptr_default_delete_int_array__Tuple_impl(
 struct {unsigned char gap0;} *this)
{
 _Tuple_impl_1ul_default_delete_int_array__Tuple_impl(this);
 _Head_base_0ul_int_ptr_false__Head_base_void((struct {int *_M_head_impl;} *)this);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev @ 0x48DC */
void _Tuple_impl_1ul_default_delete_int_array__Tuple_impl(
 struct {unsigned char gap0;} *this)
{
 _Head_base_1ul_default_delete_int_array_true__Head_base_void(this);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev @ 0x4900 */
void _Head_base_1ul_default_delete_int_array_true__Head_base_void(
 struct {unsigned char gap0;} *this)
{
 ;
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4910 */
int ** get_0ul_int_ptr_default_delete_int_array(
 struct {unsigned char gap0;} *__t)
{
 return __get_helper_0ul_int_ptr_default_delete_int_array(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4934 */
int ** __get_helper_0ul_int_ptr_default_delete_int_array(
 struct {unsigned char gap0;} *__t)
{
 return _Tuple_impl_0ul_int_ptr_default_delete_int_array__M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x4958 */
int ** _Tuple_impl_0ul_int_ptr_default_delete_int_array__M_head(
 struct {int *_M_head_impl;} *__t)
{
 return _Head_base_0ul_int_ptr_false__M_head(__t);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x497C */
struct default_delete_int * unique_ptr_int_array_get_deleter(struct unique_ptr_int_array *this)
{
 return __uniq_ptr_impl_int_default_delete_int_array__M_deleter(&this->_M_t);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ @ 0x49B0 */
void default_delete_int_array_operator_call(const struct default_delete_int *this, int *__ptr)
{
 if ( __ptr )
 operator_delete_array(__ptr);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x49EC */
struct default_delete_int * __uniq_ptr_impl_int_default_delete_int_array__M_deleter(
 struct {unsigned char gap0;} *this)
{
 return get_1ul_int_ptr_default_delete_int_array(&this->_M_t);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4A10 */
struct {unsigned char gap0;} * get_1ul_int_ptr_default_delete_int_array(
 struct {unsigned char gap0;} *__t)
{
 return __get_helper_1ul_default_delete_int_array(__t);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4A34 */
struct {unsigned char gap0;} * __get_helper_1ul_default_delete_int_array(
 struct {unsigned char gap0;} *__t)
{
 return _Tuple_impl_1ul_default_delete_int_array__M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x4A58 */
struct {unsigned char gap0;} * _Tuple_impl_1ul_default_delete_int_array__M_head(
 struct {unsigned char gap0;} *__t)
{
 return _Head_base_1ul_default_delete_int_array_true__M_head(__t);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x4A7C */
struct {unsigned char gap0;} * _Head_base_1ul_default_delete_int_array_true__M_head(
 struct {unsigned char gap0;} *__b)
{
 return (struct {unsigned char gap0;} *)__b;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x4A90 */
int * unique_ptr_int_array_get(const struct unique_ptr_int_array *this)
{
 return __uniq_ptr_impl_int_default_delete_int_array__M_ptr(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4AC4 */
int * __uniq_ptr_impl_int_default_delete_int_array__M_ptr_const(
 const struct {unsigned char gap0;} *this)
{
 return *get_0ul_int_ptr_default_delete_int_array(&this->_M_t);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x4AEC */
const int ** get_0ul_int_ptr_default_delete_int_array_const(
 const struct {unsigned char gap0;} *__t)
{
 return __get_helper_0ul_int_ptr_default_delete_int_array_const(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4B10 */
int *const * __get_helper_0ul_int_ptr_default_delete_int_array_const(
 const struct {unsigned char gap0;} *__t)
{
 return _Tuple_impl_0ul_int_ptr_default_delete_int_array__M_head_const(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x4B34 */
int *const * _Tuple_impl_0ul_int_ptr_default_delete_int_array__M_head_const(
 const struct {int *_M_head_impl;} *__t)
{
 return _Head_base_0ul_int_ptr_false__M_head_const(__t);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x4B58 */
int ** forward_int_ptr_ref(int **__t)
{
 return __t;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ @ 0x4B6C */
void _Head_base_0ul_int_ptr_false__Head_base_int_ptr_ref(
 struct {int *_M_head_impl;} *this,
 int **__h)
{
 this->_M_head_impl = *forward_int_ptr_ref(__h);
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

/* Total functions decompiled: 218, failed: 25 */
