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

/* Standard library function declarations */
void *memset(void *s, int c, size_t n);
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* HIDWORD macro for extracting high 32 bits of a 64-bit value */
#define HIDWORD(x) (*((unsigned int *)&(x) + 1))

/* Global variable declarations */
extern long long (*_gmon_start__)(void);
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *exc, void *type_info, void *dest);

/* SimpleClass definition */
typedef struct SimpleClass {
    int value;
    char name[32];
} SimpleClass;

/* SimpleClass member function declarations */
void SimpleClass_SimpleClass(SimpleClass *this_, int v, const char *n);
void SimpleClass_setValue(SimpleClass *this_, int v);
int SimpleClass_getValue(const SimpleClass *this_);
int SimpleClass_compute(const SimpleClass *this_, int x);
int SimpleClass_getClassID(void);

/* LifecycleClass definition */
typedef struct LifecycleClass {
    size_t size;
    int *data;
    int instance_count;
} LifecycleClass;

/* Static member for LifecycleClass */
extern int LifecycleClass_instance_count;

/* LifecycleClass member function declarations */
void LifecycleClass_LifecycleClass(LifecycleClass *this_, size_t s);
int LifecycleClass_getData(const LifecycleClass *this_, size_t idx);
int LifecycleClass_getInstanceCount(void);
void LifecycleClass_LifecycleClass_dtor(LifecycleClass *this_);

/* Base class for virtual functions */
typedef struct Base {
    int (**_vptr$Base)(void);
} Base;

/* Derived class */
typedef struct Derived {
    int (**_vptr$Base)(void);
    int multiplier;
} Derived;

/* Base class member function declarations */
void Base_Base(Base *this_);
int Base_virtual_func(Base *this_, int x);
void Base_Base_dtor(Base *this_);

/* Derived class member function declarations */
void Derived_Derived(Derived *this_, int m);
int Derived_virtual_func(Derived *this_, int x);
void Derived_Derived_dtor(Derived *this_);

/* BaseA for multiple inheritance */
typedef struct BaseA {
    int (**_vptr$BaseA)(void);
} BaseA;

/* BaseA member function declarations */
void BaseA_BaseA(BaseA *this_);
void BaseA_BaseA_dtor(BaseA *this_);

/* BaseB for multiple inheritance */
typedef struct BaseB {
    int (**_vptr$BaseB)(void);
} BaseB;

/* BaseB member function declarations */
void BaseB_BaseB(BaseB *this_);
void BaseB_BaseB_dtor(BaseB *this_);

/* MultiDerived for multiple inheritance */
typedef struct MultiDerived {
    int (**_vptr$BaseA)(void);
    BaseA baseA_member;
    int dataA;
    BaseB baseB_member;
    int dataB;
    int (**_vptr$BaseB)(void);
} MultiDerived;

/* MultiDerived member function declarations */
void MultiDerived_MultiDerived(MultiDerived *this_);
void MultiDerived_MultiDerived_dtor(MultiDerived *this_);

/* VirtualBase for diamond inheritance */
typedef struct VirtualBase {
    int (**_vptr$VirtualBase)(void);
} VirtualBase;

/* MiddleA for diamond inheritance */
typedef struct MiddleA {
    int (**_vptr$MiddleA)(void);
    int dataA;
} MiddleA;

/* MiddleB for diamond inheritance */
typedef struct MiddleB {
    int (**_vptr$MiddleB)(void);
    int dataB;
} MiddleB;

/* VirtualBase member function declarations */
void VirtualBase_VirtualBase(VirtualBase *this_);
void VirtualBase_VirtualBase_dtor(VirtualBase *this_);

/* MiddleA member function declarations */
void MiddleA_MiddleA(MiddleA *this_, void **vtt);
void MiddleA_D2(MiddleA *this_, void **vtt);

/* MiddleB member function declarations */
void MiddleB_MiddleB(MiddleB *this_, void **vtt);
void MiddleB_D2(MiddleB *this_, void **vtt);

/* DiamondDerived for diamond inheritance */
typedef struct DiamondDerived {
    int (**_vptr$MiddleA)(void);
    MiddleA middleA_member;
    int dataA;
    MiddleB middleB_member;
    int dataB;
    int (**_vptr$MiddleB)(void);
} DiamondDerived;

/* Point class */
typedef struct Point {
    int x;
    int y;
} Point;

/* Point class member function declarations */
void Point_Point(Point *this_, int _x, int _y);
void Point_operator_plus(Point *result, const Point *this_, const Point *other);
bool Point_operator_eq(const Point *this_, const Point *other);
Point * Point_operator_inc(Point *this_);

/* DiamondDerived class member function declarations */
void DiamondDerived_DiamondDerived(DiamondDerived *this_);
void DiamondDerived_DiamondDerived_dtor(DiamondDerived *this_);
void DiamondDerived_D2(DiamondDerived *this_, void **vtt);
void DiamondDerived_D1(DiamondDerived *this_);

/* RTTI classes */
typedef struct RTTIBase {
    int (**_vptr$RTTIBase)(void);
} RTTIBase;

typedef struct RTTIDerivedA {
    int (**_vptr$RTTIBase)(void);
} RTTIDerivedA;

typedef struct RTTIDerivedB {
    int (**_vptr$RTTIBase)(void);
} RTTIDerivedB;

/* std namespace stubs */
typedef struct { unsigned char gap0; } std_ios_base_Init;
extern std_ios_base_Init std___ioinit;
extern void *_dso_handle;

typedef struct { unsigned char gap0; } std_type_info;

/* std_type_info function declarations */
bool std_type_info_operator_eq(const std_type_info *this_, const std_type_info *__arg);
const char * std_type_info_name(const std_type_info *this_);

/* RTTI typeinfo extern declarations */
extern const std_type_info typeinfo_for_RTTIDerivedA;
extern const std_type_info typeinfo_for_RTTIDerivedB;
extern const struct __class_type_info { unsigned char gap0; } typeinfo_for_RTTIBase;

/* RTTI class member function declarations */
void RTTIBase_RTTIBase(RTTIBase *this_);
void RTTIBase_RTTIBase_dtor(RTTIBase *this_);
void RTTIBase_D2(RTTIBase *this_);
void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this_);
void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this_);
int RTTIDerivedA_derivedA_data(const RTTIDerivedA *this_);
int RTTIDerivedB_derivedB_data(const RTTIDerivedB *this_);

typedef struct { unsigned char gap0; } std_default_delete_int;
typedef struct { unsigned char gap0; } std_default_delete_int_array;

typedef struct { unsigned char gap0; } std_tuple_int_ptr_deleter;

typedef struct {
    std_tuple_int_ptr_deleter _M_t;
} std_uniq_ptr_impl;

typedef struct {
    std_uniq_ptr_impl _M_t;
} std_unique_ptr_int;

typedef struct {
    std_uniq_ptr_impl _M_t;
} std_unique_ptr_int_array;

typedef struct { int **ptr; } std_add_lvalue_reference_helper_int;

/* Lambda capture structures */
typedef struct {
    int capture_by_value;
    int *capture_by_ref;
} lambda_capture_struct_1;

typedef struct {
    unsigned char gap0;
} lambda_capture_struct_0;

typedef struct {
    int capture_by_value;
    int *capture_by_ref;
} $44B1EA910F358000232221CCB0AF3F67;

typedef struct {
    int capture_by_value;
    int *capture_by_ref;
} $53A263AF813E6A51E9D2036C8CF165B2;

/* Lambda operator function declarations */
int test_cpp_lambda_1_operator(const $44B1EA910F358000232221CCB0AF3F67 *this_, int x);
void test_cpp_lambda_0_operator($53A263AF813E6A51E9D2036C8CF165B2 *this_, int a, int b);

/* Container template instances */
typedef struct Container_int {
    int size;
    int data[10];
} Container_int;

typedef struct Container_double {
    int size;
    double data[10];
} Container_double;

/* Container_int member function declarations */
void Container_int_Container(Container_int *this_);
void Container_int_push(Container_int *this_, int value);
int Container_int_get(const Container_int *this_, int idx);
int Container_int_getSize(const Container_int *this_);

/* Container_double member function declarations */
void Container_double_Container(Container_double *this_);
void Container_double_push(Container_double *this_, double value);
double Container_double_get(const Container_double *this_, int idx);
int Container_double_getSize(const Container_double *this_);

/* std::unique_ptr<int> member function declarations */
void std_unique_ptr_int_unique_ptr(std_unique_ptr_int *this_, int *__p);
void std_unique_ptr_int_unique_ptr_copy(std_unique_ptr_int *this_, std_unique_ptr_int *a2);
int *std_unique_ptr_int_operator_deref(const std_unique_ptr_int *this_);
std_unique_ptr_int *std_move_unique_ptr_int(std_unique_ptr_int *__t);
void std_unique_ptr_int_dtor(std_unique_ptr_int *this_);

/* Additional type definitions for unique_ptr implementation */
typedef struct {
    int *_M_head_impl;
} std_Head_base_0ul_int_ptr_false;

typedef struct {
    std_Head_base_0ul_int_ptr_false _M_t;
} std___uniq_ptr_impl_int_default_delete_int;

typedef struct {
    std___uniq_ptr_impl_int_default_delete_int _M_t;
} std___uniq_ptr_data_int_default_delete_int_true_true;

typedef struct {
    std_Head_base_0ul_int_ptr_false _M_t;
} std_tuple_int_ptr_default_delete_int;

typedef struct {
    std_tuple_int_ptr_default_delete_int _M_t;
} std_Tuple_impl_0ul_int_ptr_default_delete_int;

typedef struct {
    unsigned char gap0;
} std_Head_base_1ul_default_delete_int_true;

typedef struct {
    std_Head_base_1ul_default_delete_int_true _M_t;
} std_Tuple_impl_1ul_default_delete_int;

typedef struct {
    std___uniq_ptr_impl_int_default_delete_int _M_t;
} std_uniq_ptr_impl_int_default_delete_int;

typedef struct {
    unsigned char gap0;
} std___uniq_ptr_data_int_default_delete_int_array_true_true;

typedef struct {
    std_tuple_int_ptr_default_delete_int_array _M_t;
} std___uniq_ptr_impl_int_default_delete_int_array;

typedef struct {
    std_default_delete_int_array _M_head_impl;
} std_Head_base_1ul_default_delete_int_array_true;

typedef struct {
    std_Head_base_0ul_int_ptr_false _M_t;
} std_Tuple_impl_0ul_int_ptr_default_delete_int_array;

typedef struct {
    std_Head_base_1ul_default_delete_int_array_true _M_t;
} std_Tuple_impl_1ul_default_delete_int_array;

typedef struct {
    std_Tuple_impl_0ul_int_ptr_default_delete_int_array _M_t;
} std_tuple_int_ptr_default_delete_int_array;

typedef struct {
    std___uniq_ptr_impl_int_default_delete_int_array _M_t;
} std_tuple_int_ptr_default_delete_int_array;

/* std::unique_ptr<int> with custom deleter member function declarations */
void std_unique_ptr_int_test_cpp_smart_ptr_lambda_unique_ptr(
 std_unique_ptr_int *this_,
 int *__p,
 const std_tuple_int_ptr_deleter *__d);
int *std_unique_ptr_int_test_cpp_smart_ptr_lambda_get(
 const std_unique_ptr_int *this_);
int *std_unique_ptr_int_test_cpp_smart_ptr_lambda_operator_deref(
 const std_unique_ptr_int *this_);
std_tuple_int_ptr_deleter * std_unique_ptr_int_test_cpp_smart_ptr_lambda_get_deleter(
 std_unique_ptr_int *this_);
void test_cpp_smart_ptr_lambda_operator_call(const std_tuple_int_ptr_deleter *this_, int *p);
void std_unique_ptr_int_test_cpp_smart_ptr_lambda_dtor(
 std_unique_ptr_int *this_);

/* std::__uniq_ptr_impl member function declarations */
int ** std_uniq_ptr_impl_M_ptr(std_uniq_ptr_impl *this_);

/* Helper function declaration */
unsigned long saturated_mul(unsigned int a, unsigned int b);

/* Missing function declarations */
void ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
 std_uniq_ptr_impl *this_,
 int *a2,
 const std_tuple_int_ptr_deleter *a3);

void std_Head_base_0ul_int_ptr_false_Head_base(std_uniq_ptr_impl *this_, int **__h);

/* Additional missing function declarations for unique_ptr with default_delete */
void std_uniq_ptr_impl_int_default_delete_int_uniq_ptr_impl(
 std___uniq_ptr_impl_int_default_delete_int *this_,
 int *__p);
int * std_uniq_ptr_impl_int_default_delete_int_M_ptr(
 std___uniq_ptr_impl_int_default_delete_int *this_);
void std___uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl(
 std___uniq_ptr_impl_int_default_delete_int_array *this_,
 int **__p);
int * std_unique_ptr_int_array_get_const(const std_unique_ptr_int_array *this_);
int ** std_uniq_ptr_impl_int_default_delete_int_array_M_ptr(
 std___uniq_ptr_impl_int_default_delete_int_array *this_);
void std_uniq_ptr_impl_uniq_ptr_impl(std_uniq_ptr_impl *this_, int *__p, const std_tuple_int_ptr_deleter *__d);
void std_tuple_int_ptr_deleter_tuple(std_uniq_ptr_impl *this_, int **__a1, const std_tuple_int_ptr_deleter *__a2);
void std_Tuple_impl_0ul_int_ptr_deleter_Tuple_impl(std_uniq_ptr_impl *this_, int **__head, const std_tuple_int_ptr_deleter *__tail);
void std_Tuple_impl_1ul_deleter_Tuple_impl(std_uniq_ptr_impl *this_, const std_tuple_int_ptr_deleter *__head);
void std_Head_base_1ul_deleter_true_Head_base(std_uniq_ptr_impl *this_, const std_tuple_int_ptr_deleter *__h);
std_tuple_int_ptr_deleter * std_uniq_ptr_impl_M_deleter(std_uniq_ptr_impl *this_);
int *std_uniq_ptr_impl_M_ptr_const(const std_uniq_ptr_impl *this_);
int *const * std_get_0ul_int_ptr_deleter_const(const std_uniq_ptr_impl *__t);
int *const * std_get_helper_0ul_int_ptr_deleter_const(const std_uniq_ptr_impl *__t);
int *const * std_Tuple_impl_0ul_int_ptr_deleter_M_head_const(const std_uniq_ptr_impl *__t);
std_tuple_int_ptr_deleter * std_Head_base_1ul_deleter_true_M_head(std_uniq_ptr_impl *__b);
std_tuple_int_ptr_deleter * std_Tuple_impl_1ul_deleter_M_head(std_uniq_ptr_impl *__t);
std_tuple_int_ptr_deleter * std_get_helper_1ul_deleter(std_uniq_ptr_impl *__t);
std_tuple_int_ptr_deleter * std_get_1ul_int_ptr_deleter(std_uniq_ptr_impl *__t);
int ** std_get_0ul_int_ptr_deleter(std_uniq_ptr_impl *__t);
int ** std_get_helper_0ul_int_ptr_deleter(std_uniq_ptr_impl *__t);
int ** std_Tuple_impl_0ul_int_ptr_deleter_M_head(std_uniq_ptr_impl *__t);
int ** std_Head_base_0ul_int_ptr_false_M_head(std_uniq_ptr_impl *__b);
void std_uniq_ptr_impl_uniq_ptr_impl(std_uniq_ptr_impl *this_, std_uniq_ptr_impl *__u);

/* Additional helper function declarations */
std_default_delete_int_array * std_unique_ptr_int_array_get_deleter(std_unique_ptr_int_array *this_);
void std_default_delete_int_array_operator_call_int(
 const std_default_delete_int_array *this_,
 int *__ptr);
std_default_delete_int * std_unique_ptr_int_get_deleter(std_unique_ptr_int *this_);
void std_default_delete_int_operator_call(const std_default_delete_int *this_, int *__ptr);
int ** std_move_int_ptr(int **__t);

/* Additional missing function declarations for unique_ptr helpers */
int ** std_Head_base_0ul_int_ptr_false_M_head_nonconst(std_Head_base_0ul_int_ptr_false *__b);
int *const * std_Head_base_0ul_int_ptr_false_M_head_const(const std_Head_base_0ul_int_ptr_false *__b);
void std_Tuple_impl_0ul_int_ptr_default_delete_int_Tuple_impl_copy(
 std_Tuple_impl_0ul_int_ptr_default_delete_int *this_,
 std_Tuple_impl_0ul_int_ptr_default_delete_int *a2);
void std_Tuple_impl_1ul_default_delete_int_Tuple_impl_copy(
 std_Tuple_impl_1ul_default_delete_int *this_,
 std_Tuple_impl_1ul_default_delete_int *a2);
int ** std_get_0ul_int_ptr_default_delete_int(
 std_tuple_int_ptr_default_delete_int *__t);
int ** std_get_helper_0ul_int_ptr_default_delete_int(
 std_Tuple_impl_0ul_int_ptr_default_delete_int *__t);
int ** std_Tuple_impl_0ul_int_ptr_default_delete_int_M_head(
 std_Tuple_impl_0ul_int_ptr_default_delete_int *__t);
void std_Tuple_impl_0ul_int_ptr_default_delete_int_Tuple_impl_default(
 std_Tuple_impl_0ul_int_ptr_default_delete_int *this_);
void std_Tuple_impl_1ul_default_delete_int_Tuple_impl_default(
 std_Tuple_impl_1ul_default_delete_int *this_);
void std_Head_base_0ul_int_ptr_false__Head_base(std_Head_base_0ul_int_ptr_false *this_);
void std_Head_base_1ul_default_delete_int_true__Head_base(
 std_Head_base_1ul_default_delete_int_true *this_);
std_default_delete_int * std_uniq_ptr_impl_int_default_delete_int_M_deleter(
 std___uniq_ptr_impl_int_default_delete_int *this_);
std_default_delete_int * std___get_helper_1ul_default_delete_int(
 std_Tuple_impl_1ul_default_delete_int *__t);
std_default_delete_int * std_Tuple_impl_1ul_default_delete_int_M_head(
 std_Tuple_impl_1ul_default_delete_int *__t);

/* Vtable and offset extern declarations */
extern int off_8878;
extern int off_88B8;
extern int off_8900;
extern int off_8930;
extern int off_89B0;
extern int off_89D8;
extern int off_8A08;
extern int off_8A70;
extern int off_8A38;
extern int off_8A90;
extern int off_8AA0;
extern int off_8C38;
extern int off_8D50;
extern int off_8DA0;
extern int off_8D78;
extern void *VTT_for_MiddleA;
extern void *VTT_for_MiddleB;
extern void *VTT_for_DiamondDerived;

/* Additional extern declarations */
extern const char *format;
extern const char *aCppL301D;
extern const char *aCppL302D;
extern const char *aCppL303D;
extern const char *aCppL304D;
extern const char *aCppL305D;
extern const char *aCppL306D;
extern const char *aCppL307D;
extern const char *aCppL308D;
extern const char *aCppL309D;
extern void __cxa_bad_typeid(void);
extern void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int src2dst);
extern void *operator new(size_t size);
extern void *operator new[](size_t size);
extern void operator delete(void *ptr);
extern void operator delete[](void *ptr);
extern int strcmp(const char *s1, const char *s2);
extern size_t strlen(const char *s);
extern void *memset(void *s, int c, size_t n);
extern char *strncpy(char *dest, const char *src, size_t n);
extern int printf(const char *format, ...);
extern void __cxa_begin_catch(void *exc);
extern void __cxa_end_catch(void);
extern void std_terminate(void);
extern void _Unwind_Resume(void *exc);
extern int __gxx_personality_v0(int version, int actions, long long exception_class, void *uebp, void *context);
extern void __cxa_rethrow(void);
extern void __cxa_throw(void *exc, void *type_info, void *dest);
extern void *__cxa_allocate_exception(size_t size);
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void __cxa_finalize(void *dso_handle);

/* std::unique_ptr<int[]> member function declarations */
void std_unique_ptr_int_array_unique_ptr(std_unique_ptr_int_array *this_, int *__p);
int *std_unique_ptr_int_array_operator_index(const std_unique_ptr_int_array *this_, size_t idx);
void std_unique_ptr_int_array_dtor(std_unique_ptr_int_array *this_);

/* Template function forward declarations */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_clang_O0_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x2000 */
long long (*init_proc(void))(void)
{
 long long (*result)(void); // rax

 result = _gmon_start__;
 if ( _gmon_start__ )
 return _gmon_start__;
 return result;
}


/* Function: sub_2020 @ 0x2020 */
void sub_2020()
{
 ;
}


/* Function: __cxx_global_var_init @ 0x2180 */
void _cxx_global_var_init()
{
 /* std_ios_base_Init stub initialization */
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x21B0 */
void GLOBAL__sub_I_5_1_cpp()
{
 _cxx_global_var_init();
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x22B0 */
int test_cpp_member_func()
{
 int r2; // [rsp+10h] [rbp-30h]
 int r1; // [rsp+14h] [rbp-2Ch]
 SimpleClass obj; // [rsp+18h] [rbp-28h] BYREF

 SimpleClass_SimpleClass(&obj, 5, "Test");
 SimpleClass_setValue(&obj, 10);
 r1 = SimpleClass_getValue(&obj);
 r2 = SimpleClass_compute(&obj, 3);
 return SimpleClass_getClassID() + r2 + r1;
}


/* Function: _Z20test_cpp_constructorv @ 0x2310 */
int test_cpp_constructor()
{
 int Data; // [rsp+18h] [rbp-28h]
 LifecycleClass obj; // [rsp+28h] [rbp-18h] BYREF
 int result; // [rsp+3Ch] [rbp-4h]

 result = 0;
 LifecycleClass_LifecycleClass(&obj, 5u);
 Data = LifecycleClass_getData(&obj, 2u);
 result += Data;
 result += LifecycleClass_getInstanceCount();
 LifecycleClass_LifecycleClass_dtor(&obj);
 return result + 1000 * LifecycleClass_getInstanceCount();
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x23B0 */
int call_virtual_func(Base *obj, int x)
{
 return ((long long ( *)(Base *, unsigned long long))*obj->_vptr$Base)(obj, (unsigned int)x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x23E0 */
int test_cpp_virtual_func()
{
 int v1; // [rsp+4h] [rbp-5Ch]
 int r3; // [rsp+1Ch] [rbp-44h]
 int r2; // [rsp+34h] [rbp-2Ch]
 int r1; // [rsp+38h] [rbp-28h]
 Derived derived; // [rsp+48h] [rbp-18h] BYREF
 Base base; // [rsp+58h] [rbp-8h] BYREF

 Base_Base(&base);
 Derived_Derived(&derived, 3);
 r1 = Base_virtual_func(&base, 5);
 r2 = Derived_virtual_func(&derived, 5);
  r3 = call_virtual_func(&base, 5);
 v1 = call_virtual_func((Base *)&derived, 5) + r3 + r2 + r1;
 Derived_Derived_dtor(&derived);
 Base_Base_dtor(&base);
 return v1;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x24F0 */
int test_cpp_multiple_inheritance()
{
 MultiDerived *v1; // [rsp+18h] [rbp-58h]
 int r2; // [rsp+28h] [rbp-48h]
 int r1; // [rsp+3Ch] [rbp-34h]
 MultiDerived obj; // [rsp+50h] [rbp-20h] BYREF

 MultiDerived_MultiDerived(&obj);
 obj.dataA = 100;
 obj.dataB = 200;
 v1 = 0;
 if ( &obj )
 v1 = (MultiDerived *)&obj.baseB_member;
 r1 = ((long long ( *)(MultiDerived *))*obj._vptr$BaseA)(&obj);
 r2 = (*(long long ( **)(MultiDerived *))v1->_vptr$BaseB)(v1);
 MultiDerived_MultiDerived_dtor(&obj);
 return (&obj != v1) + r2 + r1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x25D0 */
int test_cpp_diamond_inheritance()
{
 int v1; // [rsp+Ch] [rbp-64h]
 int ( ***v2)(void); // [rsp+18h] [rbp-58h]
 int r1; // [rsp+34h] [rbp-3Ch]
 DiamondDerived obj; // [rsp+40h] [rbp-30h] BYREF

 DiamondDerived_DiamondDerived(&obj);
 *(unsigned int *)((char *)&obj.dataA + *(unsigned long long *)(obj._vptr$MiddleA - 24LL)) = 50;
 v2 = 0;
 if ( &obj )
 v2 = (int ( ***)(void))((char *)&obj + *(unsigned long long *)(obj._vptr$MiddleA - 24LL));
 r1 = (**v2)();
 *(unsigned int *)((char *)&obj.dataA + *(unsigned long long *)(obj._vptr$MiddleA - 24LL)) = 100;
 v1 = (**v2)() + r1;
 DiamondDerived_DiamondDerived_dtor(&obj);
 return v1;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x26A0 */
int test_cpp_operator_overload()
{
 int v0; // ecx
 bool eq; // [rsp+7h] [rbp-19h]
 Point p3; // [rsp+8h] [rbp-18h] BYREF
 Point p2; // [rsp+10h] [rbp-10h] BYREF
 Point p1; // [rsp+18h] [rbp-8h] BYREF

 Point_Point(&p1, 1, 2);
 Point_Point(&p2, 3, 4);
 Point_operator_plus(&p3, &p1, &p2);
 eq = Point_operator_eq(&p1, &p2);
 Point_operator_inc(&p3);
 v0 = 10;
 if ( eq )
 v0 = 0;
 return v0 + p3.y + p3.x;
}


/* Function: _Z22test_cpp_template_funcv @ 0x2720 */
int test_cpp_template_func()
{
 int b; // [rsp+8h] [rbp-18h] BYREF
 int a; // [rsp+Ch] [rbp-14h] BYREF
 double r2; // [rsp+10h] [rbp-10h]
 int r1; // [rsp+1Ch] [rbp-4h]

 r1 = template_max_int(3, 7);
 r2 = template_max_double(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap_int(&a, &b);
 return b + a + (int)r2 + r1;
}


/* Function: _Z23test_cpp_template_classv @ 0x2790 */
int test_cpp_template_class()
{
 double r3; // [rsp+8h] [rbp-98h]
 Container_double double_container; // [rsp+10h] [rbp-90h] BYREF
 int r2; // [rsp+68h] [rbp-38h]
 int r1; // [rsp+6Ch] [rbp-34h]
 Container_int int_container; // [rsp+70h] [rbp-30h] BYREF

 Container_int_Container(&int_container);
 Container_int_push(&int_container, 10);
 Container_int_push(&int_container, 20);
 Container_int_push(&int_container, 30);
 r1 = Container_int_get(&int_container, 0);
 r2 = Container_int_getSize(&int_container);
 Container_double_Container(&double_container);
 Container_double_push(&double_container, 3.14);
 r3 = Container_double_get(&double_container, 0);
 return (int)r3 + r2 + r1;
}


/* Function: _Z15test_cpp_lambdav @ 0x2840 */
int test_cpp_lambda()
{
 int v0; // eax
 int r1; // [rsp+Ch] [rbp-24h]
 $44B1EA910F358000232221CCB0AF3F67 lambda2; // [rsp+10h] [rbp-20h] BYREF
 $53A263AF813E6A51E9D2036C8CF165B2 lambda1; // [rsp+18h] [rbp-18h] BYREF
 int capture_by_ref; // [rsp+28h] [rbp-8h] BYREF
 int capture_by_value; // [rsp+2Ch] [rbp-4h]

 capture_by_value = 10;
 capture_by_ref = 20;
 lambda1.capture_by_value = 10;
 lambda1.capture_by_ref = &capture_by_ref;
 lambda2.capture_by_value = 10;
 lambda2.capture_by_ref = &capture_by_ref;
 r1 = test_cpp_lambda_1_operator(&lambda2, 3);
 test_cpp_lambda_0_operator(&lambda1, 10, 20);
 v0 = 0;
 return v0 + r1;
}


/* Function: _ZZ15test_cpp_lambdavENK3$_1clEi @ 0x28A0 */
int test_cpp_lambda_1_operator(
 const $44B1EA910F358000232221CCB0AF3F67 *this_,
 int x)
{
 *this_->capture_by_ref += 5;
 return *this_->capture_by_ref + this_->capture_by_value * x;
}


/* Function: _ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_ @ 0x28D0 */
void test_cpp_lambda_0_operator($53A263AF813E6A51E9D2036C8CF165B2 *this_, int a, int b)
{
 ;
}


/* Function: _Z18test_cpp_exceptionv @ 0x28F0 */
int test_cpp_exception()
{
 unsigned int *exception; // rdi

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, 0, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x2A50 */
int test_cpp_smart_ptr()
{
 int *v0; // rax
 std_unique_ptr_int *v1; // rax
 int v3; // [rsp+4h] [rbp-9Ch]
 int *v4; // [rsp+10h] [rbp-90h]
 int *v5; // [rsp+18h] [rbp-88h]
 int *__p; // [rsp+30h] [rbp-70h]
 std_unique_ptr_int v7; // [rsp+60h] [rbp-40h] BYREF
 std_unique_ptr_int_array v8; // [rsp+70h] [rbp-30h] BYREF
 std_unique_ptr_int ptr2; // [rsp+80h] [rbp-20h] BYREF
 std_unique_ptr_int __t; // [rsp+98h] [rbp-8h] BYREF

 v0 = (int *)operator new(4u);
 *v0 = 100;
 std_unique_ptr_int_unique_ptr(&__t, v0);
 *std_unique_ptr_int_operator_deref(&__t) = 200;
 v1 = std_move_unique_ptr_int(&__t);
 std_unique_ptr_int_unique_ptr_copy(&ptr2, v1);
 HIDWORD(v8._M_t._M_t) = *std_unique_ptr_int_operator_deref(&ptr2);
 __p = (int *)operator new[](0x14u);
 *__p = 1;
 __p[1] = 2;
 __p[2] = 3;
 __p[3] = 4;
 __p[4] = 5;
 std_unique_ptr_int_array_unique_ptr(&v8, __p);
 HIDWORD(v7._M_t._M_t) = *std_unique_ptr_int_array_operator_index(&v8, 2u);
  v5 = (int *)operator new(4u);
  *v5 = 500;
  std_unique_ptr_int_test_cpp_smart_ptr_lambda_unique_ptr(
 &v7,
 v5,
 (const std_tuple_int_ptr_deleter *)&v7._M_t);
 v4 = std_unique_ptr_int_test_cpp_smart_ptr_lambda_get(&v7);
 v3 = *v4 + HIDWORD(v7._M_t._M_t) + HIDWORD(v8._M_t._M_t);
 std_unique_ptr_int_test_cpp_smart_ptr_lambda_dtor(&v7);
 std_unique_ptr_int_array_dtor(&v8);
 std_unique_ptr_int_dtor(&ptr2);
 std_unique_ptr_int_dtor(&__t);
 return v3;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EC2IS0_vEEPiRKS0_ @ 0x2C40 */
void std_unique_ptr_int_test_cpp_smart_ptr_lambda_unique_ptr(
 std_unique_ptr_int *this_,
 int *__p,
 const std_tuple_int_ptr_deleter *__d)
{
 ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
 &this_->_M_t,
 __p,
 __d);
}

/* Function: std::unique_ptr<int>::unique_ptr (copy/move) */
void std_unique_ptr_int_unique_ptr_copy_impl(
 std_uniq_ptr_impl *this_,
 std_uniq_ptr_impl *a2)
{
 int **v2; // rax

 v2 = std_uniq_ptr_impl_M_ptr(a2);
 std_Head_base_0ul_int_ptr_false_Head_base(this_, v2);
 *v2 = 0;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EdeEv @ 0x2C80 */
int *std_unique_ptr_int_test_cpp_smart_ptr_lambda_operator_deref(
 const std_unique_ptr_int *this_)
{
 return std_unique_ptr_int_test_cpp_smart_ptr_lambda_get(this_);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev @ 0x2CB0 */
void std_unique_ptr_int_test_cpp_smart_ptr_lambda_dtor(
 std_unique_ptr_int *this_)
{
 int **v1; // rax
 std_tuple_int_ptr_deleter *deleter; // [rsp+8h] [rbp-28h]
 int **__ptr; // [rsp+20h] [rbp-10h]

 __ptr = std_uniq_ptr_impl_M_ptr(&this_->_M_t);
 if ( *__ptr )
 {
 deleter = std_unique_ptr_int_test_cpp_smart_ptr_lambda_get_deleter(this_);
 v1 = __ptr;
 test_cpp_smart_ptr_lambda_operator_call(deleter, *v1);
 }
 *__ptr = 0;
}


/* Function: _Z13test_cpp_rttiv @ 0x2D30 */
int test_cpp_rtti()
{
 const char *v0; // rax
 const RTTIDerivedB *v2; // [rsp+18h] [rbp-68h]
 const RTTIDerivedA *v3; // [rsp+28h] [rbp-58h]
 RTTIDerivedA *v4; // [rsp+40h] [rbp-40h]
 RTTIDerivedB *v5; // [rsp+48h] [rbp-38h]
 int result; // [rsp+6Ch] [rbp-14h]
 int resulta; // [rsp+6Ch] [rbp-14h]

 v4 = (RTTIDerivedA *)operator new(8u);
 memset(v4, 0, sizeof(RTTIDerivedA));
 RTTIDerivedA_RTTIDerivedA(v4);
 v5 = (RTTIDerivedB *)operator new(8u);
 memset(v5, 0, sizeof(RTTIDerivedB));
 RTTIDerivedB_RTTIDerivedB(v5);
 result = 0;
 if ( !v4 )
 __cxa_bad_typeid();
 if ( std_type_info_operator_eq(
 *((const std_type_info **)v4->_vptr$RTTIBase - 1),
 (const std_type_info *)&typeinfo_for_RTTIDerivedA) )
 {
 result = 10;
 }
 if ( !v5 )
 __cxa_bad_typeid();
 if ( std_type_info_operator_eq(
 *((const std_type_info **)v5->_vptr$RTTIBase - 1),
 (const std_type_info *)&typeinfo_for_RTTIDerivedB) )
 {
 result += 20;
 }
 v3 = (const RTTIDerivedA *)__dynamic_cast(
 (void *)v4,
 (void *)&typeinfo_for_RTTIBase,
 (void *)&typeinfo_for_RTTIDerivedA,
 0);
 if ( v3 )
 result += RTTIDerivedA_derivedA_data(v3);
 v2 = (const RTTIDerivedB *)__dynamic_cast(
 (void *)v5,
 (void *)&typeinfo_for_RTTIBase,
 (void *)&typeinfo_for_RTTIDerivedB,
 0);
 if ( v2 )
 result += RTTIDerivedB_derivedB_data(v2);
 v0 = std_type_info_name(*((const std_type_info **)v4->_vptr$RTTIBase - 1));
 resulta = strlen(v0) + result;
 (*((void ( **)(RTTIDerivedA *))v4->_vptr$RTTIBase + 1))(v4);
 (*((void ( **)(RTTIDerivedB *))v5->_vptr$RTTIBase + 1))(v5);
 return resulta;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x2F70 */
void test_cpp_oo_features()
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

 printf(format);
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


/* Function: main @ 0x3080 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}





/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x3220 */
int ** std_uniq_ptr_impl_M_ptr(
 std_uniq_ptr_impl *this_)
{
 return std_get_0ul_int_ptr_deleter(this_);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E11get_deleterEv @ 0x3240 */
std_tuple_int_ptr_deleter * std_unique_ptr_int_test_cpp_smart_ptr_lambda_get_deleter(
 std_unique_ptr_int *this_)
{
 return (std_tuple_int_ptr_deleter *)std_uniq_ptr_impl_M_deleter(&this_->_M_t);
}


/* Function: _ZZ18test_cpp_smart_ptrvENK3$_2clEPi @ 0x3270 */
void test_cpp_smart_ptr_lambda_operator_call(const std_tuple_int_ptr_deleter *this_, int *p)
{
 *p = -1;
 if ( p )
 operator delete(p);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x32B0 */
int ** std_get_0ul_int_ptr_deleter(
 std_uniq_ptr_impl *__t)
{
 return std_get_helper_0ul_int_ptr_deleter(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x32D0 */
int ** std_get_helper_0ul_int_ptr_deleter(
 std_uniq_ptr_impl *__t)
{
 return std_Tuple_impl_0ul_int_ptr_deleter_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS2_ @ 0x32F0 */
int ** std_Tuple_impl_0ul_int_ptr_deleter_M_head(
 std_uniq_ptr_impl *__t)
{
 return std_Head_base_0ul_int_ptr_false_M_head((std_uniq_ptr_impl *)__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E10_M_deleterEv @ 0x3310 */
std_tuple_int_ptr_deleter * std_uniq_ptr_impl_M_deleter(
 std_uniq_ptr_impl *this_)
{
 return (std_tuple_int_ptr_deleter *)std_get_1ul_int_ptr_deleter(this_);
}


/* Function: _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x3330 */
std_tuple_int_ptr_deleter * std_get_1ul_int_ptr_deleter(
 std_uniq_ptr_impl *__t)
{
 return (std_tuple_int_ptr_deleter *)std_get_helper_1ul_deleter(__t);
}


/* Function: _ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvE3$_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE @ 0x3350 */
std_tuple_int_ptr_deleter * std_get_helper_1ul_deleter(
 std_uniq_ptr_impl *__t)
{
 return std_Tuple_impl_1ul_deleter_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS1_ @ 0x3370 */
std_tuple_int_ptr_deleter * std_Tuple_impl_1ul_deleter_M_head(
 std_uniq_ptr_impl *__t)
{
 return std_Head_base_1ul_deleter_true_M_head(__t);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EE7_M_headERS1_ @ 0x3390 */
std_tuple_int_ptr_deleter * std_Head_base_1ul_deleter_true_M_head(
 std_uniq_ptr_impl *__b)
{
 return (std_tuple_int_ptr_deleter *)__b;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E3getEv @ 0x33A0 */
int *std_unique_ptr_int_test_cpp_smart_ptr_lambda_get(
 const std_unique_ptr_int *this_)
{
 return std_uniq_ptr_impl_M_ptr_const(&this_->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x33D0 */
int *std_uniq_ptr_impl_M_ptr_const(
 const std_uniq_ptr_impl *this_)
{
 return *std_get_0ul_int_ptr_deleter_const((std_uniq_ptr_impl *)this_);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x33F0 */
int *const * std_get_0ul_int_ptr_deleter_const(
 const std_uniq_ptr_impl *__t)
{
 return std_get_helper_0ul_int_ptr_deleter_const(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x3410 */
int *const * std_get_helper_0ul_int_ptr_deleter_const(
 const std_uniq_ptr_impl *__t)
{
 return std_Tuple_impl_0ul_int_ptr_deleter_M_head_const(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERKS2_ @ 0x3430 */
int *const * std_Tuple_impl_0ul_int_ptr_deleter_M_head_const(
 const std_uniq_ptr_impl *__t)
{
 return std_Head_base_0ul_int_ptr_false_M_head((std_uniq_ptr_impl *)__t);
}




/* Function: _ZN11SimpleClassC2EiPKc @ 0x3450 */
void SimpleClass_SimpleClass(SimpleClass *this_, int v, const char *n)
{
 this_->value = v;
 strncpy(this_->name, n, 0x1Fu);
 this_->name[31] = 0;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x3490 */
void SimpleClass_setValue(SimpleClass *this_, int v)
{
 this_->value = v;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x34B0 */
int SimpleClass_getValue(const SimpleClass *this_)
{
 return this_->value;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x34C0 */
int SimpleClass_compute(const SimpleClass *this_, int x)
{
 int v3; // [rsp+8h] [rbp-18h]

 v3 = x * this_->value;
 return strlen(this_->name) + v3;
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x3500 */
int SimpleClass_getClassID()
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Em @ 0x3510 */
void LifecycleClass_LifecycleClass(LifecycleClass *this_, size_t s)
{
 size_t i; // [rsp+8h] [rbp-18h]

 this_->size = s;
 this_->data = (int *)operator new[](saturated_mul(4u, s));
 for ( i = 0; i < s; ++i )
 this_->data[i] = 10 * i;
 ++LifecycleClass_instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEm @ 0x35B0 */
int LifecycleClass_getData(const LifecycleClass *this_, size_t idx)
{
 if ( idx >= this_->size )
 return -1;
 else
 return this_->data[idx];
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x3600 */
int LifecycleClass_getInstanceCount()
{
 return LifecycleClass_instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x3610 */
void LifecycleClass_LifecycleClass_dtor(LifecycleClass *this_)
{
 if ( this_->data )
 operator delete[](this_->data);
 --LifecycleClass_instance_count;
}


/* Function: _ZN4BaseC2Ev @ 0x3650 */
void Base_Base(Base *this_)
{
 this_->_vptr$Base = (int (**)(void))off_8878;
}


/* Function: _ZN7DerivedC2Ei @ 0x3670 */
void Derived_Derived(Derived *this_, int m)
{
 Base_Base((Base *)this_);
 this_->_vptr$Base = (int (**)(void))off_88B8;
 this_->multiplier = m;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x36B0 */
int Base_virtual_func(Base *this_, int x)
{
 return x + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x36D0 */
int Derived_virtual_func(Derived *this_, int x)
{
 return this_->multiplier * x;
}


/* Function: _ZN7DerivedD2Ev @ 0x36F0 */
void Derived_Derived_dtor(Derived *this_)
{
 Base_Base_dtor((Base *)this_);
}


/* Function: _ZN4BaseD2Ev @ 0x3710 */
void Base_Base_dtor(Base *this_)
{
 ;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x3720 */
void MultiDerived_MultiDerived(MultiDerived *this_)
{
 BaseA_BaseA((BaseA *)this_);
 BaseB_BaseB(&this_->baseB_member);
 this_->_vptr$BaseA = (int (**)(void))off_8900;
 this_->_vptr$BaseB = (int (**)(void))off_8930;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x3770 */
void MultiDerived_MultiDerived_dtor(MultiDerived *this_)
{
 BaseB_BaseB_dtor(&this_->baseB_member);
 BaseA_BaseA_dtor((BaseA *)this_);
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x37A0 */
void DiamondDerived_DiamondDerived(DiamondDerived *this_)
{
 VirtualBase_VirtualBase((VirtualBase *)&this_->middleB_member);
 MiddleA_MiddleA((MiddleA *)this_, (void **)off_8A90);
 MiddleB_MiddleB((MiddleB *)(&this_->dataA + 2), (void **)off_8AA0);
 this_->_vptr$MiddleA = (int (**)(void))off_8A08;
 this_->_vptr$MiddleB = (int (**)(void))off_8A70;
 *((unsigned long long *)&this_->dataA + 1) = off_8A38;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x3830 */
void DiamondDerived_DiamondDerived_dtor(DiamondDerived *this_)
{
 DiamondDerived_D2(this_, (void **)&VTT_for_DiamondDerived);
 VirtualBase_VirtualBase_dtor((VirtualBase *)&this_->middleB_member);
}


/* Function: _ZN5PointC2Eii @ 0x3870 */
void Point_Point(Point *this_, int _x, int _y)
{
 this_->x = _x;
 this_->y = _y;
}


/* Function: _ZNK5PointplERKS_ @ 0x3890 */
void Point_operator_plus(Point *result, const Point *this_, const Point *other)
{
 Point_Point(result, other->x + this_->x, other->y + this_->y);
}


/* Function: _ZNK5PointeqERKS_ @ 0x38D0 */
bool Point_operator_eq(const Point *this_, const Point *other)
{
 bool v3; // [rsp+Fh] [rbp-11h]

 v3 = 0;
 if ( this_->x == other->x )
 return this_->y == other->y;
 return v3;
}


/* Function: _ZN5PointppEv @ 0x3920 */
Point * Point_operator_inc(Point *this_)
{
 Point *result; // rax

 result = this_;
 ++this_->x;
 ++this_->y;
 return result;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x3940 */
int template_max_int(int a, int b)
{
 if ( a <= b )
 return b;
 else
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x3970 */
double template_max_double(double a, double b)
{
 if ( a <= b )
 return b;
 else
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x39B0 */
void template_swap_int(int *a, int *b)
{
 int temp; // [rsp+0h] [rbp-14h]

 temp = *a;
 *a = *b;
 *b = temp;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x39E0 */
void Container_int_Container(Container_int *this_)
{
 this_->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x3A00 */
void Container_int_push(Container_int *this_, int value)
{
 int size; // ecx

 if ( this_->size < 10 )
 {
 size = this_->size;
 this_->size = size + 1;
 this_->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x3A40 */
int Container_int_get(const Container_int *this_, int idx)
{
 if ( idx < 0 || idx >= this_->size )
 return 0;
 else
 return this_->data[idx];
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x3A90 */
int Container_int_getSize(const Container_int *this_)
{
 return this_->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x3AB0 */
void Container_double_Container(Container_double *this_)
{
 this_->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x3AD0 */
void Container_double_push(Container_double *this_, double value)
{
 int size; // ecx

 if ( this_->size < 10 )
 {
 size = this_->size;
 this_->size = size + 1;
 this_->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x3B10 */
double Container_double_get(const Container_double *this_, int idx)
{
 if ( idx < 0 || idx >= this_->size )
 return 0.0;
 else
 return this_->data[idx];
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x3B70 */
int Container_double_getSize(const Container_double *this_)
{
 return this_->size;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x3B90 */
void std_unique_ptr_int_unique_ptr_std_default_delete(
 std_unique_ptr_int *this_,
 int *__p)
{
 std_uniq_ptr_impl_int_default_delete_int_uniq_ptr_impl(&this_->_M_t, __p);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x3BC0 */
int *std_unique_ptr_int_operator_deref_std_default_delete(
 const std_unique_ptr_int *this_)
{
 return *std_Head_base_0ul_int_ptr_false_M_head_const((const std_Head_base_0ul_int_ptr_false *)&this_->_M_t);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x3BF0 */
std_unique_ptr_int * std_move_unique_ptr_int_std_default_delete(
 std_unique_ptr_int *__t)
{
 return __t;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x3C00 */
void std_unique_ptr_int_unique_ptr_std_default_delete_copy(
 std_unique_ptr_int *this_,
 std_unique_ptr_int *a2)
{
 int *ptr = *std_Head_base_0ul_int_ptr_false_M_head_nonconst((std_Head_base_0ul_int_ptr_false *)&a2->_M_t);
 std_Head_base_0ul_int_ptr_false_Head_base(&this_->_M_t, &ptr);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x3C30 */
void std_unique_ptr_int_array_unique_ptr_std_default_delete(
 std_unique_ptr_int_array *this_,
 int *__p)
{
 std___uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl(&this_->_M_t, __p);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm @ 0x3C60 */
int *std_unique_ptr_int_array_operator_index_std_default_delete(
 const std_unique_ptr_int_array *this_,
 size_t __i)
{
 return &std_unique_ptr_int_array_get_const(this_)[__i];
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x3CA0 */
void std_unique_ptr_int_array_dtor_std_default_delete(
 std_unique_ptr_int_array *this_)
{
 std_default_delete_int_array *deleter; // rdi
 int **__ptr; // [rsp+10h] [rbp-10h]

 __ptr = std_uniq_ptr_impl_int_default_delete_int_array_M_ptr(&this_->_M_t);
 if ( *__ptr )
 {
 deleter = std_unique_ptr_int_array_get_deleter(this_);
 std_default_delete_int_array_operator_call_int(deleter, *__ptr);
 }
 *__ptr = 0;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x3D10 */
void std_unique_ptr_int_dtor_std_default_delete(
 std_unique_ptr_int *this_)
{
 int *v1; // rsi
 std_default_delete_int *deleter; // [rsp+0h] [rbp-20h]
 int **__ptr; // [rsp+10h] [rbp-10h]

 __ptr = std_Head_base_0ul_int_ptr_false_M_head_nonconst((std_Head_base_0ul_int_ptr_false *)&this_->_M_t);
 if ( *__ptr )
 {
 deleter = std_unique_ptr_int_get_deleter(this_);
 v1 = *std_move_int_ptr(__ptr);
 std_default_delete_int_operator_call(deleter, v1);
 }
 *__ptr = 0;
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x3D80 */
void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this_)
{
 RTTIBase_RTTIBase((RTTIBase *)this_);
 this_->_vptr$RTTIBase = (int (**)(void))off_8D50;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x3DC0 */
void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this_)
{
 RTTIBase_RTTIBase((RTTIBase *)this_);
 this_->_vptr$RTTIBase = (int (**)(void))off_8DA0;
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x3E00 */
bool std_type_info_operator_eq(const std_type_info *this_, const std_type_info *__arg)
{
 bool v3; // [rsp+Fh] [rbp-21h]
 char v4; // [rsp+1Fh] [rbp-11h]

 v4 = 1;
 if ( *((unsigned long long *)this_ + 1) != *((unsigned long long *)__arg + 1) )
 {
 v3 = 0;
 if ( **((unsigned char **)this_ + 1) != 42 )
 v3 = strcmp(*((const char **)this_ + 1), *((const char **)__arg + 1)) == 0;
 v4 = v3;
 }
 return v4 & 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x3E80 */
int RTTIDerivedA_derivedA_data(const RTTIDerivedA *this_)
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x3E90 */
int RTTIDerivedB_derivedB_data(const RTTIDerivedB *this_)
{
 return 200;
}


/* Function: _ZNKSt9type_info4nameEv @ 0x3EA0 */
const char * std_type_info_name(const std_type_info *this_)
{
 if ( **((unsigned char **)this_ + 1) == 42 )
 return (const char *)(*((unsigned long long *)this_ + 1) + 1LL);
 else
 return (const char *)*((unsigned long long *)this_ + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x3EF0 */
const char * Base_getName(const Base *this_)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x3F10 */
void Base_D0(Base *this_)
{
 Base_Base_dtor(this_);
 operator delete(this_);
}


/* Function: _ZNK7Derived7getNameEv @ 0x3F40 */
const char * Derived_getName(const Derived *this_)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x3F60 */
void Derived_D0(Derived *this_)
{
 Derived_Derived_dtor(this_);
 operator delete(this_);
}


/* Function: _ZN5BaseAC2Ev @ 0x3F90 */
void BaseA_BaseA(BaseA *this_)
{
 this_->_vptr$BaseA = (int (**)(void))off_89B0;
}


/* Function: _ZN5BaseBC2Ev @ 0x3FB0 */
void BaseB_BaseB(BaseB *this_)
{
 this_->_vptr$BaseB = (int (**)(void))off_89D8;
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x3FD0 */
int MultiDerived_funcA(MultiDerived *this_)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x3FE0 */
void MultiDerived_D0(MultiDerived *this_)
{
 MultiDerived_MultiDerived_dtor(this_);
 operator delete(this_);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x4010 */
int MultiDerived_funcB(MultiDerived *this_)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x4020 */
void non_virtual_thunk_MultiDerived_funcB()
{
 long long v0; // rdi

 MultiDerived_funcB((MultiDerived *)(v0 - 16));
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x4040 */
void non_virtual_thunk_MultiDerived_D1()
{
 long long v0; // rdi

 MultiDerived_MultiDerived_dtor((MultiDerived *)(v0 - 16));
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x4060 */
void non_virtual_thunk_MultiDerived_D0()
{
 long long v0; // rdi

 MultiDerived_D0((MultiDerived *)(v0 - 16));
}


/* Function: _ZN5BaseA5funcAEv @ 0x4080 */
int BaseA_funcA(BaseA *this_)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x4090 */
void BaseA_D2(BaseA *this_)
{
 ;
}


/* Function: _ZN5BaseAD0Ev @ 0x40A0 */
void BaseA_D0(BaseA *this_)
{
 BaseA_D2(this_);
 operator delete(this_);
}


/* Function: _ZN5BaseB5funcBEv @ 0x40D0 */
int BaseB_funcB(BaseB *this_)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x40E0 */
void BaseB_D2(BaseB *this_)
{
 ;
}


/* Function: _ZN5BaseBD0Ev @ 0x40F0 */
void BaseB_D0(BaseB *this_)
{
 BaseB_D2(this_);
 operator delete(this_);
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x4120 */
void VirtualBase_VirtualBase(VirtualBase *this_)
{
 this_->_vptr$VirtualBase = (int (**)(void))off_8C38;
}


/* Function: _ZN7MiddleAC2Ev @ 0x4140 */
void MiddleA_MiddleA(MiddleA *this_, void **vtt)
{
 this_->_vptr$MiddleA = (int (**)(void))*vtt;
 *(int (***)(void))((char *)&this_->_vptr$MiddleA + *((unsigned long long *)this_->_vptr$MiddleA - 3)) = (int (**)(void))vtt[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x4170 */
void MiddleB_MiddleB(MiddleB *this_, void **vtt)
{
 this_->_vptr$MiddleB = (int (**)(void))*vtt;
 *(int (***)(void))((char *)&this_->_vptr$MiddleB + *((unsigned long long *)this_->_vptr$MiddleB - 3)) = (int (**)(void))vtt[1];
}


/* Function: _ZN7MiddleA4funcEv @ 0x41A0 */
int MiddleA_func(MiddleA *this_)
{
 return *(int *)((char *)&this_->dataA + *((unsigned long long *)this_->_vptr$MiddleA - 3)) + 150;
}


/* Function: _ZN7MiddleAD1Ev @ 0x41C0 */
void MiddleA_D1(MiddleA *this_)
{
 MiddleA_D2(this_, &VTT_for_MiddleA);
 VirtualBase_VirtualBase_dtor((VirtualBase *)(&this_->dataA + 2));
}


/* Function: _ZN7MiddleAD0Ev @ 0x4200 */
void MiddleA_D0(MiddleA *this_)
{
 MiddleA_D1(this_);
 operator delete(this_);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x4230 */
void virtual_thunk_MiddleA_func()
{
 unsigned long long *v0; // rdi

 MiddleA_func((MiddleA *)((char *)v0 + *(unsigned long long *)(*v0 - 24LL)));
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x4250 */
void virtual_thunk_MiddleA_D1()
{
 unsigned long long *v0; // rdi

 MiddleA_D1((MiddleA *)((char *)v0 + *(unsigned long long *)(*v0 - 32LL)));
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x4270 */
void virtual_thunk_MiddleA_D0()
{
 unsigned long long *v0; // rdi

 MiddleA_D0((MiddleA *)((char *)v0 + *(unsigned long long *)(*v0 - 32LL)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x4290 */
int MiddleB_func(MiddleB *this_)
{
 return *(int *)((char *)&this_->dataB + *((unsigned long long *)this_->_vptr$MiddleB - 3)) + 200;
}


/* Function: _ZN7MiddleBD1Ev @ 0x42B0 */
void MiddleB_D1(MiddleB *this_)
{
 MiddleB_D2(this_, &VTT_for_MiddleB);
 VirtualBase_VirtualBase_dtor((VirtualBase *)(&this_->dataB + 2));
}


/* Function: _ZN7MiddleBD0Ev @ 0x42F0 */
void MiddleB_D0(MiddleB *this_)
{
 MiddleB_D1(this_);
 operator delete(this_);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x4320 */
void virtual_thunk_MiddleB_func()
{
 unsigned long long *v0; // rdi

 MiddleB_func((MiddleB *)((char *)v0 + *(unsigned long long *)(*v0 - 24LL)));
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x4340 */
void virtual_thunk_MiddleB_D1()
{
 unsigned long long *v0; // rdi

 MiddleB_D1((MiddleB *)((char *)v0 + *(unsigned long long *)(*v0 - 32LL)));
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x4360 */
void virtual_thunk_MiddleB_D0()
{
 unsigned long long *v0; // rdi

 MiddleB_D0((MiddleB *)((char *)v0 + *(unsigned long long *)(*v0 - 32LL)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x4380 */
int DiamondDerived_func(DiamondDerived *this_)
{
 return *(int *)((char *)&this_->dataA + *((unsigned long long *)this_->_vptr$MiddleA - 3)) + 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x43A0 */
void DiamondDerived_D0(DiamondDerived *this_)
{
 DiamondDerived_D1(this_);
 operator delete(this_);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x43D0 */
void non_virtual_thunk_DiamondDerived_func()
{
 long long v0; // rdi

 DiamondDerived_func((DiamondDerived *)(v0 - 16));
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x43F0 */
void non_virtual_thunk_DiamondDerived_D1()
{
 long long v0; // rdi

 DiamondDerived_D1((DiamondDerived *)(v0 - 16));
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x4410 */
void non_virtual_thunk_DiamondDerived_D0()
{
 long long v0; // rdi

 DiamondDerived_D0((DiamondDerived *)(v0 - 16));
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x4430 */
void virtual_thunk_DiamondDerived_func()
{
 unsigned long long *v0; // rdi

 DiamondDerived_func((DiamondDerived *)((char *)v0 + *(unsigned long long *)(*v0 - 24LL)));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x4450 */
void virtual_thunk_DiamondDerived_D1()
{
 unsigned long long *v0; // rdi

 DiamondDerived_D1((DiamondDerived *)((char *)v0 + *(unsigned long long *)(*v0 - 32LL)));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x4470 */
void virtual_thunk_DiamondDerived_D0()
{
 unsigned long long *v0; // rdi

 DiamondDerived_D0((DiamondDerived *)((char *)v0 + *(unsigned long long *)(*v0 - 32LL)));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x4490 */
int VirtualBase_func(VirtualBase *this_)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x44A0 */
void VirtualBase_D2(VirtualBase *this_)
{
 ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x44B0 */
void VirtualBase_D0(VirtualBase *this_)
{
 VirtualBase_D2(this_);
 operator delete(this_);
}


/* Function: _ZN7MiddleAD2Ev @ 0x44E0 */
void MiddleA_D2(MiddleA *this_, void **vtt)
{
 ;
}


/* Function: _ZN7MiddleBD2Ev @ 0x44F0 */
void MiddleB_D2(MiddleB *this_, void **vtt)
{
 ;
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x4500 */
void DiamondDerived_D2(DiamondDerived *this_, void **vtt)
{
 MiddleB_D2((MiddleB *)(&this_->dataA + 2), vtt + 3);
 MiddleA_D2(this_, vtt + 1);
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x4550 */
void std_uniq_ptr_data_int_default_delete_int_true_true_uniq_ptr_data(
 std___uniq_ptr_data_int_default_delete_int_true_true *this_,
 std___uniq_ptr_data_int_default_delete_int_true_true *a2)
{
 std_uniq_ptr_impl_int_default_delete_int_uniq_ptr_impl(&this_->_M_t, &a2->_M_t);
}




/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x45F0 */
void std_tuple_int_ptr_default_delete_int_tuple(
 std_tuple_int_ptr_default_delete_int *this_,
 std_tuple_int_ptr_default_delete_int *a2)
{
 std_Tuple_impl_0ul_int_ptr_default_delete_int_Tuple_impl_copy(&this_->_M_t, &a2->_M_t);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x4620 */
int ** std_uniq_ptr_impl_int_default_delete_int_M_ptr(
 std_uniq_ptr_impl_int_default_delete_int *this_)
{
 return std_get_0ul_int_ptr_default_delete_int(&this_->_M_t);
}


/* Function: __clang_call_terminate @ 0x4640 */
void _clang_call_terminate(void *a1)
{
 __cxa_begin_catch(a1);
 std_terminate();
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x4650 */
void std_Tuple_impl_0ul_int_ptr_default_delete_int_Tuple_impl_copy(
 std_Tuple_impl_0ul_int_ptr_default_delete_int *this_,
 std_Tuple_impl_0ul_int_ptr_default_delete_int *a2)
{
 std_Tuple_impl_1ul_default_delete_int_Tuple_impl_copy(this_, a2);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ @ 0x4690 */
void std_Tuple_impl_1ul_default_delete_int_Tuple_impl_copy(
 std_Tuple_impl_1ul_default_delete_int *this_,
 std_Tuple_impl_1ul_default_delete_int *__in)
{
 ;
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x46A0 */
int ** std_get_0ul_int_ptr_default_delete_int(
 std_tuple_int_ptr_default_delete_int *__t)
{
 return std_get_helper_0ul_int_ptr_default_delete_int(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x46C0 */
int ** std_get_helper_0ul_int_ptr_default_delete_int(
 std_Tuple_impl_0ul_int_ptr_default_delete_int *__t)
{
 return std_Tuple_impl_0ul_int_ptr_default_delete_int_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x46E0 */
int ** std_Tuple_impl_0ul_int_ptr_default_delete_int_M_head(
 std_Tuple_impl_0ul_int_ptr_default_delete_int *__t)
{
 return std_Head_base_0ul_int_ptr_false_M_head((std_Head_base_0ul_int_ptr_false *)__t);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ @ 0x4700 */
int ** std_Head_base_0ul_int_ptr_false_M_head(std_Head_base_0ul_int_ptr_false *__b)
{
 return &__b->_M_head_impl;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x4710 */
void RTTIBase_RTTIBase(RTTIBase *this_)
{
 this_->_vptr$RTTIBase = (int (**)(void))off_8D78;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x4730 */
void RTTIDerivedA_D2(RTTIDerivedA *this_)
{
 RTTIBase_D2((RTTIBase *)this_);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x4750 */
void RTTIDerivedA_D0(RTTIDerivedA *this_)
{
 RTTIDerivedA_D2(this_);
 operator delete(this_);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x4780 */
int RTTIDerivedA_getType(const RTTIDerivedA *this_)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x4790 */
void RTTIBase_D2(RTTIBase *this_)
{
 ;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x47A0 */
void RTTIBase_D0(RTTIBase *this_)
{
 RTTIBase_D2(this_);
 operator delete(this_);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x47D0 */
int RTTIBase_getType(const RTTIBase *this_)
{
 return 0;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x47E0 */
void RTTIDerivedB_D2(RTTIDerivedB *this_)
{
 RTTIBase_D2((RTTIBase *)this_);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x4800 */
void RTTIDerivedB_D0(RTTIDerivedB *this_)
{
 RTTIDerivedB_D2(this_);
 operator delete(this_);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x4830 */
int RTTIDerivedB_getType(const RTTIDerivedB *this_)
{
 return 2;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x4840 */
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(
 std___uniq_ptr_data_int_default_delete_int_true_true *this_,
 int *a2)
{
 std_uniq_ptr_impl_int_default_delete_int_uniq_ptr_impl(this_->_M_t, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x4870 */
void std_uniq_ptr_impl_int_default_delete_int_uniq_ptr_impl(
 std_Head_base_0ul_int_ptr_false *this_,
 int *__p)
{
 std_Head_base_0ul_int_ptr_false__Head_base(this_);
 this_->_M_head_impl = __p;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x48B0 */
void std_tuple_int_ptr_default_delete_int_tuple_true_true(
 std_tuple_int_ptr_default_delete_int *this_)
{
 std_Tuple_impl_0ul_int_ptr_default_delete_int_Tuple_impl_default(&this_->_M_t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev @ 0x48E0 */
void std_Tuple_impl_0ul_int_ptr_default_delete_int_Tuple_impl_default(
 std_Tuple_impl_0ul_int_ptr_default_delete_int *this_)
{
 std_Tuple_impl_1ul_default_delete_int_Tuple_impl_default(this_);
 std_Head_base_0ul_int_ptr_false__Head_base((std_Head_base_0ul_int_ptr_false *)this_);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev @ 0x4910 */
void std_Tuple_impl_1ul_default_delete_int_Tuple_impl_default(
 std_Tuple_impl_1ul_default_delete_int *this_)
{
 std_Head_base_1ul_default_delete_int_true__Head_base(this_);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2Ev @ 0x4930 */
void std_Head_base_0ul_int_ptr_false__Head_base(std_Head_base_0ul_int_ptr_false *this_)
{
 this_->_M_head_impl = 0;
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev @ 0x4950 */
void std_Head_base_1ul_default_delete_int_true__Head_base(
 std_Head_base_1ul_default_delete_int_true *this_)
{
 ;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x4960 */
std_default_delete_int * std_unique_ptr_int_get_deleter(std_unique_ptr_int *this_)
{
 return std_uniq_ptr_impl_int_default_delete_int_M_deleter(&this_->_M_t);
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x4990 */
void std_default_delete_int_operator_call(const std_default_delete_int *this_, int *__ptr)
{
 if ( __ptr )
 operator delete(__ptr);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x49D0 */
int ** std_move_int_ptr(int **__t)
{
 return __t;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x49E0 */
std_default_delete_int * std_uniq_ptr_impl_int_default_delete_int_M_deleter(
 std___uniq_ptr_impl_int_default_delete_int *this_)
{
 return (std_default_delete_int *)&this_->_M_t;
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x4A00 */
std_default_delete_int * std_get_1ul_int_ptr_default_delete_int(
 std_tuple_int_ptr_default_delete_int *__t)
{
 return std___get_helper_1ul_default_delete_int(__t);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x4A20 */
std_default_delete_int * std___get_helper_1ul_default_delete_int(
 std_Tuple_impl_1ul_default_delete_int *__t)
{
 return std_Tuple_impl_1ul_default_delete_int_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x4A40 */
std_default_delete_int * std_Tuple_impl_1ul_default_delete_int_M_head(
 std_Tuple_impl_1ul_default_delete_int *__t)
{
 return std_Head_base_1ul_default_delete_int_true_M_head(__t);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x4A60 */
std_default_delete_int * std_Head_base_1ul_default_delete_int_true_M_head(
 std_Head_base_1ul_default_delete_int_true *__b)
{
 return (std_default_delete_int *)__b;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x4A70 */
int * std_unique_ptr_int_get(const std_unique_ptr_int *this_)
{
 return *std_Head_base_0ul_int_ptr_false_M_head_const((const std_Head_base_0ul_int_ptr_false *)&this_->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x4AA0 */
int * std_uniq_ptr_impl_int_default_delete_int_M_ptr_const(
 const std___uniq_ptr_impl_int_default_delete_int *this_)
{
 return *std_get_0ul_int_ptr_default_delete_int_const(&this_->_M_t);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x4AC0 */
int *const * std_get_0ul_int_ptr_default_delete_int_const(
 const std_tuple_int_ptr_default_delete_int *__t)
{
 return std___get_helper_0ul_int_ptr_default_delete_int_const(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4AE0 */
int *const * std___get_helper_0ul_int_ptr_default_delete_int_const(
 const std_Tuple_impl_0ul_int_ptr_default_delete_int *__t)
{
 return std_Tuple_impl_0ul_int_ptr_default_delete_int_M_head_const(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x4B00 */
int *const * std_Tuple_impl_0ul_int_ptr_default_delete_int_M_head_const(
 const std_Tuple_impl_0ul_int_ptr_default_delete_int *__t)
{
 return std_Head_base_0ul_int_ptr_false_M_head_const((const std_Head_base_0ul_int_ptr_false *)__t);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ @ 0x4B20 */
int *const * std_Head_base_0ul_int_ptr_false_M_head_const(const std_Head_base_0ul_int_ptr_false *__b)
{
 return &__b->_M_head_impl;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x4B30 */
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(
 std___uniq_ptr_data_int_default_delete_int_array_true_true *this_,
 int **a2)
{
 std___uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl(this_->_M_t, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x4B60 */
void std___uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl(
 std_tuple_int_ptr_default_delete_int_array *this_,
 int **__p)
{
 std_tuple_int_ptr_default_delete_int_array_tuple_true_true(this_);
 *std___uniq_ptr_impl_int_default_delete_int_array_M_ptr(this_) = __p;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x4BA0 */
void std_tuple_int_ptr_default_delete_int_array_tuple_true_true(
 std_tuple_int_ptr_default_delete_int_array *this_)
{
 std_Tuple_impl_0ul_int_ptr_default_delete_int_array_Tuple_impl(this_);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4BD0 */
int ** std___uniq_ptr_impl_int_default_delete_int_array_M_ptr(
 std_tuple_int_ptr_default_delete_int_array *this_)
{
 return std_get_0ul_int_ptr_default_delete_int_array(this_);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x4BF0 */
void std_Tuple_impl_0ul_int_ptr_default_delete_int_array_Tuple_impl(
 std_Tuple_impl_0ul_int_ptr_default_delete_int_array *this_)
{
 std_Tuple_impl_1ul_default_delete_int_array_Tuple_impl(this_);
 std_Head_base_0ul_int_ptr_false__Head_base((std_Head_base_0ul_int_ptr_false *)this_);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev @ 0x4C20 */
void std_Tuple_impl_1ul_default_delete_int_array_Tuple_impl(
 std_Tuple_impl_1ul_default_delete_int_array *this_)
{
 std_Head_base_1ul_default_delete_int_array_true__Head_base(this_);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev @ 0x4C40 */
void std_Head_base_1ul_default_delete_int_array_true__Head_base(
 std_Head_base_1ul_default_delete_int_array_true *this_)
{
 ;
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4C50 */
int ** std_get_0ul_int_ptr_default_delete_int_array(
 std_tuple_int_ptr_default_delete_int_array *__t)
{
 return std___get_helper_0ul_int_ptr_default_delete_int_array(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4C70 */
int ** std___get_helper_0ul_int_ptr_default_delete_int_array(
 std_Tuple_impl_0ul_int_ptr_default_delete_int_array *__t)
{
 return std_Tuple_impl_0ul_int_ptr_default_delete_int_array_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x4C90 */
int ** std_Tuple_impl_0ul_int_ptr_default_delete_int_array_M_head(
 std_Tuple_impl_0ul_int_ptr_default_delete_int_array *__t)
{
 return std_Head_base_0ul_int_ptr_false_M_head((std_Head_base_0ul_int_ptr_false *)__t);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x4CB0 */
std_default_delete_int_array * std_unique_ptr_int_array_get_deleter(std_unique_ptr_int_array *this_)
{
 return std___uniq_ptr_impl_int_default_delete_int_array_M_deleter(&this_->_M_t);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ @ 0x4CE0 */
void std_default_delete_int_array_operator_call_int(
 const std_default_delete_int_array *this_,
 int *__ptr)
{
 if ( __ptr )
 operator delete[](__ptr);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x4D20 */
std_default_delete_int_array * std___uniq_ptr_impl_int_default_delete_int_array_M_deleter(
 std___uniq_ptr_impl_int_default_delete_int_array *this_)
{
 return std_get_1ul_int_ptr_default_delete_int_array(&this_->_M_t);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4D40 */
std_default_delete_int_array * std_get_1ul_int_ptr_default_delete_int_array(
 std_tuple_int_ptr_default_delete_int_array *__t)
{
 return std___get_helper_1ul_default_delete_int_array(__t);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4D60 */
std_default_delete_int_array * std___get_helper_1ul_default_delete_int_array(
 std_Tuple_impl_1ul_default_delete_int_array *__t)
{
 return std_Tuple_impl_1ul_default_delete_int_array_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x4D80 */
std_default_delete_int_array * std_Tuple_impl_1ul_default_delete_int_array_M_head(
 std_Tuple_impl_1ul_default_delete_int_array *__t)
{
 return std_Head_base_1ul_default_delete_int_array_true_M_head(__t);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x4DA0 */
std_default_delete_int_array * std_Head_base_1ul_default_delete_int_array_true_M_head(
 std_Head_base_1ul_default_delete_int_array_true *__b)
{
 return (std_default_delete_int_array *)__b;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x4DB0 */
int * std_unique_ptr_int_array_get(const std_unique_ptr_int_array *this_)
{
 return *std___uniq_ptr_impl_int_default_delete_int_array_M_ptr_const(&this_->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4DE0 */
int * std___uniq_ptr_impl_int_default_delete_int_array_M_ptr_const(
 const std___uniq_ptr_impl_int_default_delete_int_array *this_)
{
 return *std_get_0ul_int_ptr_default_delete_int_array_const(&this_->_M_t);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x4E00 */
int *const * std_get_0ul_int_ptr_default_delete_int_array_const(
 const std_tuple_int_ptr_default_delete_int_array *__t)
{
 return std___get_helper_0ul_int_ptr_default_delete_int_array_const(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4E20 */
int *const * std___get_helper_0ul_int_ptr_default_delete_int_array_const(
 const std_Tuple_impl_0ul_int_ptr_default_delete_int_array *__t)
{
 return std_Tuple_impl_0ul_int_ptr_default_delete_int_array_M_head_const(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x4E40 */
int *const * std_Tuple_impl_0ul_int_ptr_default_delete_int_array_M_head_const(
 const std_Tuple_impl_0ul_int_ptr_default_delete_int_array *__t)
{
 return std_Head_base_0ul_int_ptr_false_M_head_const((const std_Head_base_0ul_int_ptr_false *)__t);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x4E60 */
int ** std_forward_int_ptr(int **__t)
{
 return __t;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ @ 0x4E70 */
void std_Head_base_0ul_int_ptr_false__Head_base_int_ptr(std_Head_base_0ul_int_ptr_false *this_, int **__h)
{
 this_->_M_head_impl = *std_forward_int_ptr(__h);
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
