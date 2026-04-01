/* Auto-injected type definitions by preprocessor */
#include <string.h>
#include <stdio.h>
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
struct MultiDerived;
struct Derived;
struct BaseA;
struct BaseB;
struct Point;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct VirtualBase;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct Container_int;
struct Container_double;

/* Forward declarations for SimpleClass methods */
void SimpleClass_SimpleClass(struct SimpleClass *this, int v, const char *n);
void SimpleClass_setValue(struct SimpleClass *this, int v);
int SimpleClass_getValue(const struct SimpleClass *this);
long long SimpleClass_compute(const struct SimpleClass *this, int x);
int SimpleClass_getClassID();

/* Forward declarations for LifecycleClass methods */
void LifecycleClass_LifecycleClass(struct LifecycleClass *this, size_t s);
int LifecycleClass_getData(const struct LifecycleClass *this, size_t idx);
int LifecycleClass_getInstanceCount(void);
void LifecycleClass_dtor(struct LifecycleClass *this);

/* Forward declarations for Base/Derived methods */
void Base_Base(struct Base *this);
void Derived_Derived(struct Derived *this, int m);
int Base_virtual_func(struct Base *this, int x);
int Derived_virtual_func(struct Derived *this, int x);
void Derived_dtor(struct Derived *this);
void Base_dtor(struct Base *this);

/* Forward declarations for Point methods */
void Point_Point(struct Point *this, int _x, int _y);
struct Point Point_operator_plus(const struct Point *this, const struct Point *other);
bool Point_operator_eq(const struct Point *this, const struct Point *other);
struct Point *Point_operator_inc(struct Point *this);

/* Forward declarations for RTTI base methods */
void RTTIBase_RTTIBase(struct RTTIBase *this);
void RTTIBase_dtor(struct RTTIBase *this);

/* Forward declarations for std::unique_ptr methods */
typedef int *std_unique_ptr_int_lambda_ptr;
void std_unique_ptr_int_unique_ptr(struct std_unique_ptr_int *this, int *__p);
int *std_unique_ptr_int_deref(const struct std_unique_ptr_int *this);
struct std_unique_ptr_int *std_move_std_unique_ptr_int(struct std_unique_ptr_int *__t);
void std_unique_ptr_int_unique_ptr_move(struct std_unique_ptr_int *this, struct std_unique_ptr_int *a2);
void std_unique_ptr_int_dtor(struct std_unique_ptr_int *this);
void std_unique_ptr_int_array_unique_ptr(struct std_unique_ptr_int_array *this, int *__p);
int *std_unique_ptr_int_array_at(const struct std_unique_ptr_int_array *this, unsigned long __i);
void std_unique_ptr_int_array_dtor(struct std_unique_ptr_int_array *this);
int *std_unique_ptr_int_array_get(const struct std_unique_ptr_int_array *this);
struct std_default_delete_int_array *std_unique_ptr_int_array_get_deleter(struct std_unique_ptr_int_array *this);
struct std_default_delete_int *std_unique_ptr_int_get_deleter(struct std_unique_ptr_int *this);
void std_unique_ptr_int_lambda_unique_ptr(struct std_unique_ptr_int_lambda *this, std_unique_ptr_int_lambda_ptr __p, const struct std_unique_ptr_int_lambda_deleter *__d);
int std_unique_ptr_int_lambda_deref(const struct std_unique_ptr_int_lambda *this);
void std_unique_ptr_int_lambda_dtor(struct std_unique_ptr_int_lambda *this);
struct std_unique_ptr_int_lambda_deleter *std_unique_ptr_int_lambda_get_deleter(struct std_unique_ptr_int_lambda *this);
void test_cpp_smart_ptr_lambda_operator(const struct std_unique_ptr_int_lambda_deleter *this, int *p);

/* Forward declarations for missing impl move function */
void std___uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl_move(struct std___uniq_ptr_impl_int_default_delete_int *this, struct std___uniq_ptr_impl_int_default_delete_int *__u);
int lambda_type_53A263AF813E6A51E9D2036C8CF165B2_operator(const struct lambda_type_53A263AF813E6A51E9D2036C8CF165B2 *this, int x);
void lambda_type_44B1EA910F358000232221CCB0AF3F67_operator(const struct lambda_type_44B1EA910F358000232221CCB0AF3F67 *this, int a, int b);
void std_default_delete_int_array_operator_int(const struct std_default_delete_int_array *this, int *__ptr);
void std_default_delete_int_operator_int(const struct std_default_delete_int *this, int *__ptr);
const struct std_unique_ptr_int_lambda_deleter *std_forward_const_std_unique_ptr_int_lambda_deleter(struct std_unique_ptr_int_lambda_deleter *__t);
void std_tuple_int_std_unique_ptr_int_lambda_deleter_tuple_int_amp_const_true(struct std_tuple_int_std_unique_ptr_int_lambda_deleter *this, int **__a1, struct std_unique_ptr_int_lambda_deleter *__a2);
int **std_forward_int_ptr_amp(int **__t);
void std_Tuple_impl_0ul_int_std_unique_ptr_int_lambda_deleter__Tuple_impl_void(struct std_Tuple_impl_0ul_int_std_unique_ptr_int_lambda_deleter *this, int **__head, struct std_unique_ptr_int_lambda_deleter *__tail);
void std_Tuple_impl_1ul_std_unique_ptr_int_lambda_deleter__Tuple_impl(struct std_Tuple_impl_1ul_std_unique_ptr_int_lambda_deleter *this, const struct std_unique_ptr_int_lambda_deleter *__head);
void std_Head_base_0ul_int_false__Head_base_int_amp(struct std_Head_base_0ul_int_false *this, int **__h);
void std_Head_base_1ul_std_unique_ptr_int_lambda_deleter_true__Head_base(struct std_Head_base_1ul_std_unique_ptr_int_lambda_deleter_true *this, const struct std_unique_ptr_int_lambda_deleter *__h);
int **std_get_0ul_int_std_unique_ptr_int_lambda_deleter(struct std_tuple_int_std_unique_ptr_int_lambda_deleter *__t);
struct std_unique_ptr_int *std_move_std_unique_ptr_int(struct std_unique_ptr_int *__t);
struct std_unique_ptr_int_lambda_deleter *std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_deleter(struct std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *this);
void std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda___uniq_ptr_impl_const(struct std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *this, int *__p, struct std_unique_ptr_int_lambda_deleter *__d);
int **std__get_helper_0ul_int_test_cpp_smart_ptr_lambda(struct std_Tuple_impl_0ul_int_std_unique_ptr_int_lambda_deleter *__t);
int **std_Tuple_impl_0ul_int_std_unique_ptr_int_lambda_deleter__M_head(struct std_Tuple_impl_0ul_int_std_unique_ptr_int_lambda_deleter *__t);
int **std_Head_base_0ul_int_false__M_head(struct std_Head_base_0ul_int_false *__b);
struct std_unique_ptr_int_lambda_deleter *std_get_1ul_std_unique_ptr_int_lambda_deleter(struct std_tuple_int_std_unique_ptr_int_lambda_deleter *__t);
struct std_unique_ptr_int_lambda_deleter *std__get_helper_1ul_test_cpp_smart_ptr_lambda(struct std_Tuple_impl_1ul_std_unique_ptr_int_lambda_deleter *__t);
struct std_unique_ptr_int_lambda_deleter *std_Tuple_impl_1ul_std_unique_ptr_int_lambda_deleter__M_head(struct std_Tuple_impl_1ul_std_unique_ptr_int_lambda_deleter *__t);
struct std_unique_ptr_int_lambda_deleter *std_Head_base_1ul_std_unique_ptr_int_lambda_deleter_true__M_head(struct std_Head_base_1ul_std_unique_ptr_int_lambda_deleter_true *__b);
int *std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_const__M_ptr(const struct std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *this);
int *const *std_get_0ul_const_int_std_unique_ptr_int_lambda_deleter(const struct std_tuple_int_std_unique_ptr_int_lambda_deleter *__t);
int *const *std__get_helper_0ul_const_int_test_cpp_smart_ptr_lambda(const struct std_Tuple_impl_0ul_int_std_unique_ptr_int_lambda_deleter *__t);
int *const *std_Tuple_impl_0ul_const_int_std_unique_ptr_int_lambda_deleter__M_head(const struct std_Tuple_impl_0ul_int_std_unique_ptr_int_lambda_deleter *__t);
int *const *std_Head_base_0ul_const_int_false__M_head(const struct std_Head_base_0ul_int_false *__b);
int *std_unique_ptr_int_get(const struct std_unique_ptr_int *this);
int **std___uniq_ptr_impl_int_default_delete_int___M_ptr(struct std___uniq_ptr_impl_int_default_delete_int *this);
int **std___uniq_ptr_impl_int_default_delete_int_array___M_ptr(struct std___uniq_ptr_impl_int_default_delete_int_array *this);
void std___uniq_ptr_data_int_default_delete_int_true_true___uniq_ptr_data(struct std___uniq_ptr_data_int_default_delete_int_true_true *this, struct std___uniq_ptr_data_int_default_delete_int_true_true *a2);
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(struct std___uniq_ptr_data_int_default_delete_int_true_true *this, int *a2);
void std___uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl(struct std___uniq_ptr_impl_int_default_delete_int *this, int *__p);
void std_tuple_int_std_default_delete_int__tuple_true_true(struct std_tuple_int_std_default_delete_int *this);
void std_Tuple_impl_0ul_int_std_default_delete_int___Tuple_impl(struct std_Tuple_impl_0ul_int_std_default_delete_int *this);
void std_Tuple_impl_1ul_std_default_delete_int___Tuple_impl(struct std_Tuple_impl_1ul_std_default_delete_int *this);
void std_Head_base_0ul_int_false__Head_base(struct std_Head_base_0ul_int_false *this);
void std_Head_base_1ul_std_default_delete_int_true__Head_base(struct std_Head_base_1ul_std_default_delete_int_true *this);
struct std_default_delete_int *std___uniq_ptr_impl_int_default_delete_int___M_deleter(struct std___uniq_ptr_impl_int_default_delete_int *this);
void std_default_delete_int_operator(const struct std_default_delete_int *this, int *__ptr);
void std_Tuple_impl_0ul_int_std_default_delete_int___Tuple_impl_move(struct std_Tuple_impl_0ul_int_std_default_delete_int *this, struct std_Tuple_impl_0ul_int_std_default_delete_int *a2);
struct std_tuple_int_std_default_delete_int *std_move_tuple_int_std_default_delete_int(struct std_tuple_int_std_default_delete_int *__t);
void std_tuple_int_std_default_delete_int__tuple(struct std_tuple_int_std_default_delete_int *this, struct std_tuple_int_std_default_delete_int *a2);
int **std_get_0ul_int_std_default_delete_int(struct std_tuple_int_std_default_delete_int *__t);
int **std__get_helper_0ul_int_std_default_delete_int(struct std_Tuple_impl_0ul_int_std_default_delete_int *__t);
int **std_Tuple_impl_0ul_int_std_default_delete_int___M_head(struct std_Tuple_impl_0ul_int_std_default_delete_int *__t);
int **std_Head_base_0ul_int_false__M_head(struct std_Head_base_0ul_int_false *__b);
struct std_default_delete_int *std_get_1ul_int_std_default_delete_int(struct std_tuple_int_std_default_delete_int *__t);
struct std_default_delete_int *std__get_helper_1ul_std_default_delete_int(struct std_Tuple_impl_1ul_std_default_delete_int *__t);
struct std_default_delete_int *std_Tuple_impl_1ul_std_default_delete_int___M_head(struct std_Tuple_impl_1ul_std_default_delete_int *__t);
struct std_default_delete_int *std_Head_base_1ul_std_default_delete_int_true__M_head(struct std_Head_base_1ul_std_default_delete_int_true *__b);
int *std___uniq_ptr_impl_int_default_delete_int_const__M_ptr(const struct std___uniq_ptr_impl_int_default_delete_int *this);
int *const *std_get_0ul_const_int_std_default_delete_int(const struct std_tuple_int_std_default_delete_int *__t);
int *const *std__get_helper_0ul_const_int_std_default_delete_int(const struct std_Tuple_impl_0ul_int_std_default_delete_int *__t);
int *const *std_Tuple_impl_0ul_const_int_std_default_delete_int___M_head(const struct std_Tuple_impl_0ul_int_std_default_delete_int *__t);
int *const *std_Head_base_0ul_const_int_false__M_head(const struct std_Head_base_0ul_int_false *__b);
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(struct std___uniq_ptr_data_int_default_delete_int_array_true_true *this, int *a2);
void std___uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl(struct std___uniq_ptr_impl_int_default_delete_int_array *this, int *__p);
void std_tuple_int_std_default_delete_int_array__tuple_true_true(struct std_tuple_int_std_default_delete_int_array *this);
void std_Tuple_impl_0ul_int_std_default_delete_int_array___Tuple_impl(struct std_Tuple_impl_0ul_int_std_default_delete_int_array *this);
void std_Tuple_impl_1ul_std_default_delete_int_array___Tuple_impl(struct std_Tuple_impl_1ul_std_default_delete_int_array *this);
void std_Head_base_0ul_int_false__Head_base_int_ptr(struct std_Head_base_0ul_int_false *this, int **__h);
void std_Head_base_1ul_std_default_delete_int_array_true__Head_base(struct std_Head_base_1ul_std_default_delete_int_array_true *this);
int **std_get_0ul_int_std_default_delete_int_array(struct std_tuple_int_std_default_delete_int_array *__t);
int **std__get_helper_0ul_int_std_default_delete_int_array(struct std_Tuple_impl_0ul_int_std_default_delete_int_array *__t);
int **std_Tuple_impl_0ul_int_std_default_delete_int_array___M_head(struct std_Tuple_impl_0ul_int_std_default_delete_int_array *__t);
int **std_Head_base_0ul_int_false__M_head_int_ptr(struct std_Head_base_0ul_int_false *__b);
struct std_default_delete_int_array *std___uniq_ptr_impl_int_default_delete_int_array___M_deleter(struct std___uniq_ptr_impl_int_default_delete_int_array *this);
struct std_default_delete_int_array *std_get_1ul_int_std_default_delete_int_array(struct std_tuple_int_std_default_delete_int_array *__t);
struct std_default_delete_int_array *std__get_helper_1ul_std_default_delete_int_array(struct std_Tuple_impl_1ul_std_default_delete_int_array *__t);
struct std_default_delete_int_array *std_Tuple_impl_1ul_std_default_delete_int_array___M_head(struct std_Tuple_impl_1ul_std_default_delete_int_array *__t);
struct std_default_delete_int_array *std_Head_base_1ul_std_default_delete_int_array_true__M_head(struct std_Head_base_1ul_std_default_delete_int_array_true *__b);
int *const *std_get_0ul_const_int_std_default_delete_int_array(const struct std_tuple_int_std_default_delete_int_array *__t);
int *const *std__get_helper_0ul_const_int_std_default_delete_int_array(const struct std_Tuple_impl_0ul_int_std_default_delete_int_array *__t);
int *const *std_Tuple_impl_0ul_const_int_std_default_delete_int_array___M_head(const struct std_Tuple_impl_0ul_int_std_default_delete_int_array *__t);
int *const *std_Head_base_0ul_const_int_false__M_head_int_ptr(const struct std_Head_base_0ul_int_false *__b);
int **std_forward_int_ptr(int **__t);
int **std_move_int_ptr(int **__ptr);
void std_unique_ptr_int_lambda_unique_ptr(struct std_unique_ptr_int_lambda *this, std_unique_ptr_int_lambda_ptr __p, const struct std_unique_ptr_int_lambda_deleter *__d);
int std_unique_ptr_int_lambda_deref(const struct std_unique_ptr_int_lambda *this);
void std_unique_ptr_int_lambda_dtor(struct std_unique_ptr_int_lambda *this);
struct std_unique_ptr_int_lambda_deleter *std_unique_ptr_int_lambda_get_deleter(struct std_unique_ptr_int_lambda *this);
void test_cpp_smart_ptr_lambda_operator(const struct std_unique_ptr_int_lambda_deleter *this, int *p);
int lambda_type_53A263AF813E6A51E9D2036C8CF165B2_operator(const struct lambda_type_53A263AF813E6A51E9D2036C8CF165B2 *this, int x);
void lambda_type_44B1EA910F358000232221CCB0AF3F67_operator(const struct lambda_type_44B1EA910F358000232221CCB0AF3F67 *this, int a, int b);
void std_default_delete_int_array_operator_int(const struct std_default_delete_int_array *this, int *__ptr);
void std_default_delete_int_operator_int(const struct std_default_delete_int *this, int *__ptr);
const struct std_unique_ptr_int_lambda_deleter *std_forward_const_std_unique_ptr_int_lambda_deleter(struct std_unique_ptr_int_lambda_deleter *__t);
void std_tuple_int_std_unique_ptr_int_lambda_deleter_tuple_int_amp_const_true(struct std_tuple_int_std_unique_ptr_int_lambda_deleter *this, int **__a1, struct std_unique_ptr_int_lambda_deleter *__a2);
int **std_forward_int_ptr_amp(int **__t);
void std_Tuple_impl_0ul_int_std_unique_ptr_int_lambda_deleter__Tuple_impl_void(struct std_Tuple_impl_0ul_int_std_unique_ptr_int_lambda_deleter *this, int **__head, struct std_unique_ptr_int_lambda_deleter *__tail);
void std_Tuple_impl_1ul_std_unique_ptr_int_lambda_deleter__Tuple_impl(struct std_Tuple_impl_1ul_std_unique_ptr_int_lambda_deleter *this, const struct std_unique_ptr_int_lambda_deleter *__head);
void std_Head_base_0ul_int_false__Head_base_int_amp(struct std_Head_base_0ul_int_false *this, int **__h);
void std_Head_base_1ul_std_unique_ptr_int_lambda_deleter_true__Head_base(struct std_Head_base_1ul_std_unique_ptr_int_lambda_deleter_true *this, const struct std_unique_ptr_int_lambda_deleter *__h);
int **std_get_0ul_int_std_unique_ptr_int_lambda_deleter(struct std_tuple_int_std_unique_ptr_int_lambda_deleter *__t);
struct std_unique_ptr_int *std_move_std_unique_ptr_int(struct std_unique_ptr_int *__t);
struct std_unique_ptr_int_lambda_deleter *std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_deleter(struct std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *this);
void std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda___uniq_ptr_impl_const(struct std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *this, int *__p, struct std_unique_ptr_int_lambda_deleter *__d);
int **std__get_helper_0ul_int_test_cpp_smart_ptr_lambda(struct std_Tuple_impl_0ul_int_std_unique_ptr_int_lambda_deleter *__t);
int **std_Tuple_impl_0ul_int_std_unique_ptr_int_lambda_deleter__M_head(struct std_Tuple_impl_0ul_int_std_unique_ptr_int_lambda_deleter *__t);
int **std_Head_base_0ul_int_false__M_head(struct std_Head_base_0ul_int_false *__b);
struct std_unique_ptr_int_lambda_deleter *std_get_1ul_std_unique_ptr_int_lambda_deleter(struct std_tuple_int_std_unique_ptr_int_lambda_deleter *__t);
struct std_unique_ptr_int_lambda_deleter *std__get_helper_1ul_test_cpp_smart_ptr_lambda(struct std_Tuple_impl_1ul_std_unique_ptr_int_lambda_deleter *__t);
struct std_unique_ptr_int_lambda_deleter *std_Tuple_impl_1ul_std_unique_ptr_int_lambda_deleter__M_head(struct std_Tuple_impl_1ul_std_unique_ptr_int_lambda_deleter *__t);
struct std_unique_ptr_int_lambda_deleter *std_Head_base_1ul_std_unique_ptr_int_lambda_deleter_true__M_head(struct std_Head_base_1ul_std_unique_ptr_int_lambda_deleter_true *__b);
int *std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_const__M_ptr(const struct std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *this);
int *const *std_get_0ul_const_int_std_unique_ptr_int_lambda_deleter(const struct std_tuple_int_std_unique_ptr_int_lambda_deleter *__t);
int *const *std__get_helper_0ul_const_int_test_cpp_smart_ptr_lambda(const struct std_Tuple_impl_0ul_int_std_unique_ptr_int_lambda_deleter *__t);
int *const *std_Tuple_impl_0ul_const_int_std_unique_ptr_int_lambda_deleter__M_head(const struct std_Tuple_impl_0ul_int_std_unique_ptr_int_lambda_deleter *__t);
int *const *std_Head_base_0ul_const_int_false__M_head(const struct std_Head_base_0ul_int_false *__b);

/* Forward declarations for RTTI methods */
void RTTIDerivedA_RTTIDerivedA(struct RTTIDerivedA *this);
void RTTIDerivedB_RTTIDerivedB(struct RTTIDerivedB *this);
int RTTIDerivedA_derivedA_data(const struct RTTIDerivedA *this);
int RTTIDerivedB_derivedB_data(const struct RTTIDerivedB *this);
bool std_type_info_operator_eq(const struct type_info *this, const struct type_info *__arg);
const char *std_type_info_name(const struct type_info *this);

/* Forward declarations for MultiDerived methods */
void MultiDerived_MultiDerived(struct MultiDerived *this);
void MultiDerived_dtor(struct MultiDerived *this);
void MultiDerived_dtor1(struct MultiDerived *this);
void MultiDerived_dtor0(struct MultiDerived *this);
int MultiDerived_funcA(struct MultiDerived *this);
int MultiDerived_funcB(struct MultiDerived *this);
void BaseA_BaseA(struct BaseA *this);
void BaseB_BaseB(struct BaseB *this);
void BaseA_dtor(struct BaseA *this);
void BaseB_dtor(struct BaseB *this);

/* Forward declarations for DiamondDerived methods */
void DiamondDerived_DiamondDerived(struct DiamondDerived *this);
void DiamondDerived_dtor(struct DiamondDerived *this);
void DiamondDerived_dtor1(struct DiamondDerived *this);
void DiamondDerived_dtor2(struct DiamondDerived *this, void **vtt);
void DiamondDerived_dtor0(struct DiamondDerived *this);
void VirtualBase_VirtualBase(struct VirtualBase *this);
void MiddleA_MiddleA(struct MiddleA *this, void **vtt);
void MiddleB_MiddleB(struct MiddleB *this, void **vtt);
void VirtualBase_dtor(struct VirtualBase *this);
void MiddleA_dtor2(struct MiddleA *this, void **vtt);
void MiddleB_dtor2(struct MiddleB *this, void **vtt);

/* VTT table declarations */
extern void *VTT_for_DiamondDerived;
extern void *VTT_for_MiddleA;
extern void *VTT_for_MiddleB;

/* Lambda type definitions */
struct lambda_type_44B1EA910F358000232221CCB0AF3F67;
typedef struct lambda_type_44B1EA910F358000232221CCB0AF3F67 lambda_type_44B1EA910F358000232221CCB0AF3F67;
struct lambda_type_53A263AF813E6A51E9D2036C8CF165B2;
typedef struct lambda_type_53A263AF813E6A51E9D2036C8CF165B2 lambda_type_53A263AF813E6A51E9D2036C8CF165B2;

/* C++ class definitions */

/* Forward declarations for RTTI type_info objects */
extern const struct type_info typeinfo_for_RTTIDerivedA;
extern const struct type_info typeinfo_for_RTTIDerivedB;
extern const struct type_info typeinfo_for_RTTIBase;
extern const char asc_4BD5[];
extern const char aCppL301D[];
extern const char aCppL302D[];
extern const char aCppL303D[];
extern const char aCppL304D[];
extern const char aCppL305D[];
extern const char aCppL306D[];
extern const char aCppL307D[];
extern const char aCppL308D[];
extern const char aCppL309D[];
extern const char aCppL401D[];
extern const char aCppL402D[];
extern const char aCppL403D[];

/* Forward declarations for CRT stub functions */
long long call_weak_fn(void);
void JUMPOUT(unsigned long long target);
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
int is_mul_ok(unsigned long a, unsigned long b);

/* Forward declarations for static member accessor functions */
int LifecycleClass_instance_count(void);

/* Forward declarations for vtable offsets */
extern void *off_17858;
extern void *off_17898;
extern void *off_178E0;
extern void *off_17910;
extern void *off_17990;
extern void *off_179B8;
extern void *off_179E8;
extern void *off_17A50;
extern void *off_17A70;
extern void *off_17A80;
extern void *off_17A18;
extern void *off_17C18;
extern void *off_17D30;
extern void *off_17D58;
extern void *off_17D80;

/* Forward declarations for operator new/delete */
void *operator_new(unsigned long size);
void *operator_new_array(unsigned long size);
void operator_delete(void *ptr);
void operator_delete_array(void *ptr);
void __cxa_allocate_exception(unsigned long size);
void __cxa_throw(void *exception, const struct type_info *type, void *dest);
void __cxa_bad_typeid(void);
void __cxa_begin_catch(void *exception);
void __cxa_end_catch(void);
void std_terminate(void);
void __gxx_personality_v0(void);
void _Unwind_Resume(void *exception);
void *__cxa_allocate_exception(unsigned long size);
void __cxa_throw(void *exception, const struct type_info *type, void *dest);
void __cxa_bad_typeid(void);
void __cxa_begin_catch(void *exception);
void __cxa_end_catch(void);
void std_terminate(void);
void __gxx_personality_v0(void);
void _Unwind_Resume(void *exception);

/* Forward declarations for std::default_delete operators */
void std_default_delete_int_operator(const struct std_default_delete_int *this, int *__ptr);
void std_default_delete_int_array_operator_int(const struct std_default_delete_int_array *this, int *__ptr);
void __dynamic_cast(void *src_ptr, const void *src_type, const void *dst_type, int src2dst_offset);
int *std_unique_ptr_int_get(const struct std_unique_ptr_int *this);
int *std_unique_ptr_int_array_get(const struct std_unique_ptr_int_array *this);
int *std_unique_ptr_int_lambda_get(const struct std_unique_ptr_int_lambda *this);
int **std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_ptr(const struct std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *_M_t);
int **std_move_int_ptr(int **__ptr);
void ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
    struct std___uniq_ptr_data_int_lambda_true_false *this,
    std_unique_ptr_int_lambda_ptr __p,
    const struct std_unique_ptr_int_lambda_deleter *__d);
const struct type_info typeinfo_for_int;
#define HIDWORD(x) (*(((unsigned int *)&(x)) + 1))

/* Namespace typedef for std */
typedef struct {
    struct ios_base {
        struct Init {
            void (*Init)(struct Init *);
            void (*dtor)(struct Init *);
        };
        void (*Init_Init)(struct ios_base__Init *);
        void (*Init_dtor)(struct ios_base__Init *);
    };
    struct type_info {
        int (*operator_eq)(const struct type_info *, const struct type_info *);
        const char *(*name)(const struct type_info *);
    };
} std_namespace;
#define std std_namespace

/* Forward declarations for std::ios_base::Init */
void std_ios_base_Init_Init(struct std_ios_base__Init *this);
void std_ios_base_Init_dtor(struct std_ios_base__Init *this);

/* Forward declarations for ios_base::Init types */
struct std_ios_base__Init;
typedef struct std_ios_base_Init std_ios_base_Init;

/* Global declarations for C++ runtime */
extern struct std_ios_base_Init std___ioinit;
extern void *_dso_handle;

struct SimpleClass {
    int value;
    char name[32];
};
typedef struct SimpleClass SimpleClass;

struct LifecycleClass {
    size_t size;
    int *data;
    static int instance_count;
};
typedef struct LifecycleClass LifecycleClass;

struct Base {
    int (**_vptr$Base)(void);
};
typedef struct Base Base;

struct Derived {
    int (**_vptr$Base)(void);
    int multiplier;
};
typedef struct Derived Derived;

struct BaseA {
    int (**_vptr$BaseA)(void);
};
typedef struct BaseA BaseA;

struct BaseB {
    int (**_vptr$BaseB)(void);
};
typedef struct BaseB BaseB;

struct MultiDerived {
    int (**_vptr$BaseA)(void);
    BaseB BaseB;
    int dataA;
    int dataB;
};
typedef struct MultiDerived MultiDerived;

struct Point {
    int x;
    int y;
};
typedef struct Point Point;

struct RTTIBase {
    int (**_vptr$RTTIBase)(void);
};
typedef struct RTTIBase RTTIBase;

struct RTTIDerivedA {
    int (**_vptr$RTTIBase)(void);
};
typedef struct RTTIDerivedA RTTIDerivedA;

struct RTTIDerivedB {
    int (**_vptr$RTTIBase)(void);
};
typedef struct RTTIDerivedB RTTIDerivedB;

struct VirtualBase {
    int (**_vptr$VirtualBase)(void);
};
typedef struct VirtualBase VirtualBase;

struct MiddleA {
    int (**_vptr$MiddleA)(void);
    int dataA;
};
typedef struct MiddleA MiddleA;

struct MiddleB {
    int (**_vptr$MiddleB)(void);
    int dataB;
};
typedef struct MiddleB MiddleB;

struct DiamondDerived {
    int (**_vptr$MiddleA)(void);
    int (**_vptr$MiddleB)(void);
    int dataA;
    int dataB;
};
typedef struct DiamondDerived DiamondDerived;

template<typename T>
struct Container {
    int size;
    T data[10];
};

/* Explicit instantiations as C structs */
struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

/* Lambda struct definitions */
struct lambda_type_44B1EA910F358000232221CCB0AF3F67 {
    unsigned char gap0;
};
struct lambda_type_53A263AF813E6A51E9D2036C8CF165B2 {
    int capture_by_value;
    int *capture_by_ref;
};

/* Lambda deleter type for std::unique_ptr */
struct std_unique_ptr_int_lambda_deleter {
    unsigned char gap0;
};
typedef struct std_unique_ptr_int_lambda_deleter std_unique_ptr_int_lambda_deleter;

/* std::unique_ptr<int, lambda> type */
struct std_unique_ptr_int {
    struct {
        struct {
            int * _M_head_impl;
            struct {
                unsigned char gap0[8];
            } _M_head_impl2;
        } _M_head_impl;
        struct {
            unsigned char gap0[8];
        } _M_head_impl2;
    } _M_t;
};

/* std::unique_ptr<int, lambda> type */
struct std_unique_ptr_int_lambda {
    struct {
        struct {
            int * _M_head_impl;
            struct {
                unsigned char gap0[8];
            } _M_head_impl2;
        } _M_head_impl;
        struct std_unique_ptr_int_lambda_deleter {
            unsigned char gap0[8];
        } _M_head_impl2;
    } _M_t;
};

/* std::tuple and std::_Tuple_impl types for unique_ptr with default_delete<int> */
struct std_Head_base_1ul_std_default_delete_int_true {
    unsigned char _M_head_impl;
};

struct std_Tuple_impl_1ul_std_default_delete_int {
    struct std_Head_base_1ul_std_default_delete_int_true std_Head_base_1ul_std_default_delete_int_true;
};

struct std_Head_base_0ul_int_false {
    int *_M_head_impl;
};

struct std_Tuple_impl_0ul_int_std_default_delete_int {
    struct std_Head_base_0ul_int_false std_Head_base_0ul_int_false;
    struct std_Tuple_impl_1ul_std_default_delete_int std_Tuple_impl_1ul_std_default_delete_int;
};

struct std_tuple_int_std_default_delete_int {
    struct std_Tuple_impl_0ul_int_std_default_delete_int std_Tuple_impl_0ul_int_std_default_delete_int;
};

/* std::tuple and std::_Tuple_impl types for unique_ptr with lambda deleter */
struct std_Head_base_1ul_std_unique_ptr_int_lambda_deleter_true {
    unsigned char gap0[8];
};

struct std_Tuple_impl_1ul_std_unique_ptr_int_lambda_deleter {
    struct std_Head_base_1ul_std_unique_ptr_int_lambda_deleter_true std_Head_base_1ul_std_unique_ptr_int_lambda_deleter_true;
};

struct std_Tuple_impl_0ul_int_std_unique_ptr_int_lambda_deleter {
    struct std_Head_base_0ul_int_false std_Head_base_0ul_int_false;
    struct std_Tuple_impl_1ul_std_unique_ptr_int_lambda_deleter std_Tuple_impl_1ul_std_unique_ptr_int_lambda_deleter;
};

struct std_tuple_int_std_unique_ptr_int_lambda_deleter {
    struct std_Tuple_impl_0ul_int_std_unique_ptr_int_lambda_deleter std_Tuple_impl_0ul_int_std_unique_ptr_int_lambda_deleter;
};

/* std::tuple and std::_Tuple_impl types for unique_ptr with default_delete<int[]> */
struct std_Head_base_1ul_std_default_delete_int_array_true {
    unsigned char _M_head_impl;
};

struct std_Tuple_impl_1ul_std_default_delete_int_array {
    struct std_Head_base_1ul_std_default_delete_int_array_true std_Head_base_1ul_std_default_delete_int_array_true;
};

struct std_Tuple_impl_0ul_int_std_default_delete_int_array {
    struct std_Head_base_0ul_int_false std_Head_base_0ul_int_false;
    struct std_Tuple_impl_1ul_std_default_delete_int_array std_Tuple_impl_1ul_std_default_delete_int_array;
};

struct std_tuple_int_std_default_delete_int_array {
    struct std_Tuple_impl_0ul_int_std_default_delete_int_array std_Tuple_impl_0ul_int_std_default_delete_int_array;
};

/* std::__uniq_ptr_impl types */
struct std___uniq_ptr_impl_int_default_delete_int {
    struct std_tuple_int_std_default_delete_int _M_t;
};

struct std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda {
    struct std_tuple_int_std_unique_ptr_int_lambda_deleter _M_t;
};

struct std___uniq_ptr_impl_int_default_delete_int_array {
    struct std_tuple_int_std_default_delete_int_array _M_t;
};

/* std::__uniq_ptr_data types */
struct std___uniq_ptr_data_int_default_delete_int_true_true {
    struct std___uniq_ptr_impl_int_default_delete_int _M_t;
};

struct std___uniq_ptr_data_int_lambda_true_false {
    struct std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda _M_t;
};

struct std_default_delete_int {
    unsigned char gap0[1];
};

struct std_default_delete_int_array {
    unsigned char gap0[1];
};

/* Additional type typedefs for std::unique_ptr types */
typedef int std___add_lvalue_reference_helper_int_true_type;

/* std::unique_ptr<int> and std::unique_ptr<int[]> types */
typedef struct std_unique_ptr_int std_unique_ptr_int;
typedef struct std_unique_ptr_int_lambda std_unique_ptr_int_lambda;
typedef struct std_unique_ptr_int_array std_unique_ptr_int_array;

/* Forward declarations for template-instantiated functions */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);
void Container_int_Container(struct Container_int *this);
void Container_int_push(struct Container_int *this, int value);
int Container_int_get(const struct Container_int *this, int idx);
int Container_int_getSize(const struct Container_int *this);
void Container_double_Container(struct Container_double *this);
void Container_double_push(struct Container_double *this, double value);
double Container_double_get(const struct Container_double *this, int idx);
int Container_double_getSize(const struct Container_double *this);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_clang_O0_g
 * Processor: arm
 */

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
void _cxx_global_var_init()
{
 std_ios_base_Init_Init((struct std_ios_base_Init *)&std___ioinit);
 __cxa_atexit((void (*)(void *))&std_ios_base_Init_dtor, &std___ioinit, &_dso_handle);
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
 SimpleClass v3; // [xsp+1Ch] [xbp-24h] BYREF

 SimpleClass_SimpleClass(&v3, 5, "Test");
 SimpleClass_setValue(&v3, 10);
 Value = SimpleClass_getValue(&v3);
 v1 = SimpleClass_compute(&v3, 3);
 return Value + v1 + SimpleClass_getClassID();
}


/* Function: _Z20test_cpp_constructorv @ 0x1D4C */
int test_cpp_constructor()
{
 int Data; // [xsp+18h] [xbp-28h]
 LifecycleClass obj; // [xsp+28h] [xbp-18h] BYREF
 int result; // [xsp+3Ch] [xbp-4h]

 result = 0;
 LifecycleClass_LifecycleClass(&obj, 5u);
 Data = LifecycleClass_getData(&obj, 2u);
 result += Data;
 result += LifecycleClass_getInstanceCount();
 LifecycleClass_dtor(&obj);
 return result + 1000 * LifecycleClass_getInstanceCount();
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1DFC */
long long call_virtual_func(Base *obj, unsigned int x)
{
 return ((long long ( *)(Base *, unsigned long long))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1E30 */
int test_cpp_virtual_func()
{
 int v1; // [xsp+4h] [xbp-5Ch]
 int v2; // [xsp+1Ch] [xbp-44h]
 int r2; // [xsp+34h] [xbp-2Ch]
 int r1; // [xsp+38h] [xbp-28h]
 Derived derived; // [xsp+48h] [xbp-18h] BYREF
 Base base; // [xsp+58h] [xbp-8h] BYREF

 Base_Base(&base);
 Derived_Derived(&derived, 3);
 r1 = Base_virtual_func(&base, 5);
 r2 = Derived_virtual_func(&derived, 5);
 v2 = call_virtual_func(&base, 5u);
 v1 = r1 + r2 + v2 + call_virtual_func(&derived, 5u);
 Derived_dtor(&derived);
 Base_dtor(&base);
 return v1;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1F50 */
int test_cpp_multiple_inheritance()
{
 int v1; // [xsp+4h] [xbp-6Ch]
 MultiDerived *v2; // [xsp+18h] [xbp-58h]
 int r1; // [xsp+3Ch] [xbp-34h]
 MultiDerived obj; // [xsp+50h] [xbp-20h] BYREF

 MultiDerived_MultiDerived(&obj);
 obj.dataA = 100;
 obj.dataB = 200;
 v2 = 0;
 if ( &obj )
 v2 = (MultiDerived *)&obj.BaseB;
 r1 = ((long long ( *)(MultiDerived *))*obj._vptr$BaseA)(&obj);
 v1 = r1 + (*(long long ( **)(MultiDerived *))v2->_vptr$BaseA)(v2) + (&obj != v2);
 MultiDerived_dtor(&obj);
 return v1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x2050 */
int test_cpp_diamond_inheritance()
{
 int v1; // [xsp+4h] [xbp-6Ch]
 long long ( ***v2)(unsigned long long); // [xsp+18h] [xbp-58h]
 int v3; // [xsp+34h] [xbp-3Ch]
 DiamondDerived var30; // [xsp+40h] [xbp-30h] BYREF

 DiamondDerived_DiamondDerived(&var30);
 *(int *)((char *)&var30.dataA + *((unsigned long long *)var30._vptr$MiddleA - 3)) = 50;
 v2 = 0;
 if ( &var30 )
 v2 = (long long ( ***)(unsigned long long))((char *)&var30 + *((unsigned long long *)var30._vptr$MiddleA - 3));
 v3 = (**v2)(v2);
 *(int *)((char *)&var30.dataA + *((unsigned long long *)var30._vptr$MiddleA - 3)) = 100;
 v1 = v3 + (**v2)(v2);
 DiamondDerived_dtor(&var30);
 return v1;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x2154 */
int test_cpp_operator_overload()
{
 int v0; // w9
 bool eq; // [xsp+27h] [xbp-19h]
 Point p3; // [xsp+28h] [xbp-18h] BYREF
 Point p2; // [xsp+30h] [xbp-10h] BYREF
 Point p1; // [xsp+38h] [xbp-8h] BYREF

 Point_Point(&p1, 1, 2);
 Point_Point(&p2, 3, 4);
 p3 = Point_operator_plus(&p1, &p2);
 eq = Point_operator_eq(&p1, &p2);
 Point_operator_inc(&p3);
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
 lambda_type_44B1EA910F358000232221CCB0AF3F67 v3; // [xsp+17h] [xbp-19h] BYREF
 lambda_type_53A263AF813E6A51E9D2036C8CF165B2 v4; // [xsp+18h] [xbp-18h] BYREF
 int capture_by_ref; // [xsp+28h] [xbp-8h] BYREF
 int capture_by_value; // [xsp+2Ch] [xbp-4h]

 capture_by_value = 10;
 capture_by_ref = 20;
 v4.capture_by_value = 10;
 v4.capture_by_ref = &capture_by_ref;
 v2 = lambda_type_53A263AF813E6A51E9D2036C8CF165B2_operator(
 (const const struct __cppobj {int capture_by_value;int *capture_by_ref;} *)&v4,
 3);
 lambda_type_44B1EA910F358000232221CCB0AF3F67_operator(&v3, 10, 20);
 return v2 + v0;
}


/* Function: _ZZ15test_cpp_lambdavENK3$_1clEi @ 0x23A0 */
int lambda_type_53A263AF813E6A51E9D2036C8CF165B2_operator(
 const const struct __cppobj {int capture_by_value;int *capture_by_ref;} *this,
 int x)
{
 *this->capture_by_ref += 5;
 return x * this->capture_by_value + *this->capture_by_ref;
}


/* Function: _ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_ @ 0x23E0 */
void lambda_type_44B1EA910F358000232221CCB0AF3F67_operator(const const struct {unsigned char gap0;} *this, int a, int b)
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
 std_unique_ptr_int *v1; // x0
 int v3; // [xsp+4h] [xbp-9Ch]
 std___add_lvalue_reference_helper_int_true_type v4; // [xsp+10h] [xbp-90h]
 std_unique_ptr_int_lambda_ptr v5; // [xsp+18h] [xbp-88h]
 int *__p; // [xsp+30h] [xbp-70h]
 std_unique_ptr_int_lambda v7; // [xsp+60h] [xbp-40h] BYREF
 std_unique_ptr_int_array v8; // [xsp+70h] [xbp-30h] BYREF
 std_unique_ptr_int ptr2; // [xsp+80h] [xbp-20h] BYREF
 std_unique_ptr_int __t; // [xsp+98h] [xbp-8h] BYREF

 v0 = (int *)operator_new(4u);
 *v0 = 100;
 std_unique_ptr_int_unique_ptr(&__t, v0);
 *std_unique_ptr_int_deref(&__t) = 200;
 v1 = std_move_std_unique_ptr_int(&__t);
 std_unique_ptr_int_unique_ptr_move(&ptr2, v1);
 HIDWORD(v8._M_t._M_t._M_head_impl) = *std_unique_ptr_int_deref(&ptr2);
 __p = (int *)operator_new_array(0x14u);
 *__p = 1;
 __p[1] = 2;
 __p[2] = 3;
 __p[3] = 4;
 __p[4] = 5;
 std_unique_ptr_int_array_unique_ptr(&v8, __p);
 HIDWORD(v7._M_t._M_t._M_head_impl) = *std_unique_ptr_int_array_at(&v8, 2u);
 v5 = (std_unique_ptr_int_lambda_ptr)operator_new(4u);
 *v5 = 500;
 std_unique_ptr_int_lambda_unique_ptr(&v7, v5, (const std_unique_ptr_int_lambda_deleter *)&v7._M_t._M_t._M_head_impl + 3);
 v4 = std_unique_ptr_int_lambda_deref(&v7);
 v3 = HIDWORD(v8._M_t._M_t._M_head_impl) + HIDWORD(v7._M_t._M_t._M_head_impl) + *v4;
 std_unique_ptr_int_lambda_dtor(&v7);
 std_unique_ptr_int_array_dtor(&v8);
 std_unique_ptr_int_dtor(&ptr2);
 std_unique_ptr_int_dtor(&__t);
 return v3;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EC2IS0_vEEPiRKS0_ @ 0x275C */
void std_unique_ptr_int_lambda_unique_ptr(
 struct std_unique_ptr_int_lambda *this,
 std_unique_ptr_int_lambda_ptr __p,
 const struct std_unique_ptr_int_lambda_deleter *__d)
{
 ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
 &this->_M_t,
 __p,
 __d);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EdeEv @ 0x2798 */
std___add_lvalue_reference_helper_int_true_type std_unique_ptr_int_lambda_deref(
 const struct std_unique_ptr_int_lambda *this)
{
 return std_unique_ptr_int_lambda_get(this);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev @ 0x27CC */
void std_unique_ptr_int_lambda_dtor(
 struct std_unique_ptr_int_lambda *this)
{
 int **v1; // x0
 std_unique_ptr_int_lambda_deleter *deleter; // [xsp+8h] [xbp-28h]
 int **__ptr; // [xsp+20h] [xbp-10h]

 __ptr = std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_ptr(&this->_M_t);
 if ( *__ptr )
 {
 deleter = std_unique_ptr_int_lambda_get_deleter(this);
 v1 = std_move_int_ptr(__ptr);
 test_cpp_smart_ptr_lambda_operator(deleter, *v1);
 }
 *__ptr = 0;
}


/* Function: _Z13test_cpp_rttiv @ 0x284C */
int test_cpp_rtti()
{
 const char *v0; // x0
 const RTTIDerivedB *v2; // [xsp+20h] [xbp-70h]
 const RTTIDerivedA *v3; // [xsp+30h] [xbp-60h]
 RTTIDerivedA *v4; // [xsp+48h] [xbp-48h]
 RTTIDerivedB *v5; // [xsp+58h] [xbp-38h]
 int result; // [xsp+7Ch] [xbp-14h]
 int resulta; // [xsp+7Ch] [xbp-14h]

 v4 = (struct RTTIDerivedA *)operator_new(8u);
 v4->_vptr$RTTIBase = 0;
 RTTIDerivedA_RTTIDerivedA(v4);
 v5 = (struct RTTIDerivedB *)operator_new(8u);
 v5->_vptr$RTTIBase = 0;
 RTTIDerivedB_RTTIDerivedB(v5);
 result = 0;
 if ( !v4 )
 __cxa_bad_typeid();
 if ( std_type_info_operator_eq(
 *((const struct std::type_info **)v4->_vptr$RTTIBase - 1),
 (const struct std::type_info *)&typeinfo_for_RTTIDerivedA) )
 {
 result = 10;
 }
 if ( !v5 )
 __cxa_bad_typeid();
 if ( std_type_info_operator_eq(
 *((const struct std::type_info **)v5->_vptr$RTTIBase - 1),
 (const struct std::type_info *)&typeinfo_for_RTTIDerivedB) )
 {
 result += 20;
 }
 v3 = (const struct RTTIDerivedA *)__dynamic_cast(
 v4,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0);
 if ( v3 )
 result += RTTIDerivedA_derivedA_data(v3);
 v2 = (const struct RTTIDerivedB *)__dynamic_cast(
 v5,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0);
 if ( v2 )
 result += RTTIDerivedB_derivedB_data(v2);
 v0 = std_type_info_name(*((const struct std::type_info **)v4->_vptr$RTTIBase - 1));
 resulta = result + strlen(v0);
 (*((void ( **)(RTTIDerivedA *))v4->_vptr$RTTIBase + 1))(v4);
 (*((void ( **)(RTTIDerivedB *))v5->_vptr$RTTIBase + 1))(v5);
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
 struct std___uniq_ptr_data_int_lambda_true_false *this,
 int *a2,
 const struct std_unique_ptr_int_lambda_deleter *a3)
{
 std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda___uniq_ptr_impl_const(
 this,
 a2,
 (struct std_unique_ptr_int_lambda_deleter *)a3);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2EC2IRKS0_EEPiOT_ @ 0x2BF0 */
void std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda___uniq_ptr_impl_const(
 struct std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *this,
 int *__p,
 struct std_unique_ptr_int_lambda_deleter *__d)
{
 const struct std_unique_ptr_int_lambda_deleter *v3; // x0
 int *__pa; // [xsp+20h] [xbp-10h] BYREF
 struct std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *thisa; // [xsp+28h] [xbp-8h]

 thisa = this;
 __pa = __p;
 v3 = std_forward_const_std_unique_ptr_int_lambda_deleter(__d);
 std_tuple_int_std_unique_ptr_int_lambda_deleter_tuple_int_amp_const_true(
 (struct std_tuple_int_std_unique_ptr_int_lambda_deleter *)&thisa->_M_t,
 &__pa,
 v3);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE @ 0x2C3C */
const struct std_unique_ptr_int_lambda_deleter * std_forward_const_std_unique_ptr_int_lambda_deleter(
 struct std_unique_ptr_int_lambda_deleter *__t)
{
 return (const struct std_unique_ptr_int_lambda_deleter *)__t;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x2C50 */
void std_tuple_int_std_unique_ptr_int_lambda_deleter_tuple_int_amp_const_true(
 struct std_tuple_int_std_unique_ptr_int_lambda_deleter *this,
 int **__a1,
 struct std_unique_ptr_int_lambda_deleter *__a2)
{
 const struct std_unique_ptr_int_lambda_deleter *v3; // x0
 int **__head; // [xsp+8h] [xbp-28h]

 __head = std_forward_int_ptr_amp(__a1);
 v3 = std_forward_const_std_unique_ptr_int_lambda_deleter(__a2);
 std_Tuple_impl_0ul_int_std_unique_ptr_int_lambda_deleter__Tuple_impl_void(
 this,
 __head,
 v3);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x2CA8 */
void std_Tuple_impl_0ul_int_std_unique_ptr_int_lambda_deleter__Tuple_impl_void(
 struct std_Tuple_impl_0ul_int_std_unique_ptr_int_lambda_deleter *this,
 int **__head,
 struct std_unique_ptr_int_lambda_deleter *__tail)
{
 const struct std_unique_ptr_int_lambda_deleter *v3; // x0
 int **v4; // x0

 v3 = std_forward_const_std_unique_ptr_int_lambda_deleter(__tail);
 std_Tuple_impl_1ul_std_unique_ptr_int_lambda_deleter__Tuple_impl(this, v3);
 v4 = std_forward_int_ptr_amp(__head);
 std_Head_base_0ul_int_false__Head_base_int_amp((struct std_Head_base_0ul_int_false *)this, v4);
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EEC2ERKS0_ @ 0x2CFC */
void std_Tuple_impl_1ul_std_unique_ptr_int_lambda_deleter__Tuple_impl(
 struct std_Tuple_impl_1ul_std_unique_ptr_int_lambda_deleter *this,
 const struct std_unique_ptr_int_lambda_deleter *__head)
{
 std_Head_base_1ul_std_unique_ptr_int_lambda_deleter_true__Head_base(this, __head);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EEC2ERKS0_ @ 0x2D28 */
void std_Head_base_1ul_std_unique_ptr_int_lambda_deleter_true__Head_base(
 struct std_Head_base_1ul_std_unique_ptr_int_lambda_deleter_true *this,
 const struct std_unique_ptr_int_lambda_deleter *__h)
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x2D3C */
int ** std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_ptr(
 struct std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *this)
{
 return std_get_0ul_int_std_unique_ptr_int_lambda_deleter(&this->_M_t);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E11get_deleterEv @ 0x2D60 */
struct std_unique_ptr_int_lambda_deleter * std_unique_ptr_int_lambda_get_deleter(
 struct std_unique_ptr_int_lambda *this)
{
 return (struct std_unique_ptr_int_lambda_deleter *)std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_deleter(&this->_M_t);
}


/* Function: _ZZ18test_cpp_smart_ptrvENK3$_2clEPi @ 0x2D94 */
void test_cpp_smart_ptr_lambda_operator(const const struct {unsigned char gap0;} *this, int *p)
{
 *p = -1;
 if ( p )
 operator_delete(p);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x2DDC */
int ** std_get_0ul_int_std_unique_ptr_int_lambda_deleter(
 struct std_tuple_int_std_unique_ptr_int_lambda_deleter *__t)
{
 return std__get_helper_0ul_int_test_cpp_smart_ptr_lambda(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x2E00 */
int ** std__get_helper_0ul_int_test_cpp_smart_ptr_lambda(
 struct std_Tuple_impl_0ul_int_std_unique_ptr_int_lambda_deleter *__t)
{
 return std_Tuple_impl_0ul_int_std_unique_ptr_int_lambda_deleter__M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS2_ @ 0x2E24 */
int ** std_Tuple_impl_0ul_int_std_unique_ptr_int_lambda_deleter__M_head(
 struct std_Tuple_impl_0ul_int_std_unique_ptr_int_lambda_deleter *__t)
{
 return std_Head_base_0ul_int_false__M_head(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E10_M_deleterEv @ 0x2E48 */
struct std_unique_ptr_int_lambda_deleter * std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_deleter(
 struct std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *this)
{
 return std_get_1ul_std_unique_ptr_int_lambda_deleter((struct std_tuple_int_std_unique_ptr_int_lambda_deleter *)&this->_M_t);
}


/* Function: _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x2E6C */
struct std_unique_ptr_int_lambda_deleter * std_get_1ul_std_unique_ptr_int_lambda_deleter(
 struct std_tuple_int_std_unique_ptr_int_lambda_deleter *__t)
{
 return std__get_helper_1ul_test_cpp_smart_ptr_lambda(__t);
}


/* Function: _ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvE3$_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE @ 0x2E90 */
struct std_unique_ptr_int_lambda_deleter * std__get_helper_1ul_test_cpp_smart_ptr_lambda(
 struct std_Tuple_impl_1ul_std_unique_ptr_int_lambda_deleter *__t)
{
 return std_Tuple_impl_1ul_std_unique_ptr_int_lambda_deleter__M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS1_ @ 0x2EB4 */
struct std_unique_ptr_int_lambda_deleter * std_Tuple_impl_1ul_std_unique_ptr_int_lambda_deleter__M_head(
 struct std_Tuple_impl_1ul_std_unique_ptr_int_lambda_deleter *__t)
{
 return std_Head_base_1ul_std_unique_ptr_int_lambda_deleter_true__M_head(__t);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EE7_M_headERS1_ @ 0x2ED8 */
struct std_unique_ptr_int_lambda_deleter * std_Head_base_1ul_std_unique_ptr_int_lambda_deleter_true__M_head(
 struct std_Head_base_1ul_std_unique_ptr_int_lambda_deleter_true *__b)
{
 return (struct std_unique_ptr_int_lambda_deleter *)__b;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E3getEv @ 0x2EEC */
int * std_unique_ptr_int_lambda_get(
 const struct std_unique_ptr_int_lambda *this)
{
 return std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_const__M_ptr(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x2F20 */
int * std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_const__M_ptr(
 const struct std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *this)
{
 return *std_get_0ul_const_int_std_unique_ptr_int_lambda_deleter((struct std_tuple_int_std_unique_ptr_int_lambda_deleter *)&this->_M_t);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x2F48 */
int *const * std_get_0ul_const_int_std_unique_ptr_int_lambda_deleter(
 const struct std_tuple_int_std_unique_ptr_int_lambda_deleter *__t)
{
 return std__get_helper_0ul_const_int_test_cpp_smart_ptr_lambda(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x2F6C */
int *const * std__get_helper_0ul_const_int_test_cpp_smart_ptr_lambda(
 const struct std_Tuple_impl_0ul_int_std_unique_ptr_int_lambda_deleter *__t)
{
 return std_Tuple_impl_0ul_const_int_std_unique_ptr_int_lambda_deleter__M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERKS2_ @ 0x2F90 */
int *const * std_Tuple_impl_0ul_const_int_std_unique_ptr_int_lambda_deleter__M_head(
 const struct std_Tuple_impl_0ul_int_std_unique_ptr_int_lambda_deleter *__t)
{
 return std_Head_base_0ul_const_int_false__M_head(__t);
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x2FB4 */
void SimpleClass_SimpleClass(SimpleClass *this, int v, const char *n)
{
 this->value = v;
 strncpy(this->name, n, 0x1Fu);
 this->name[31] = 0;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x3000 */
void SimpleClass_setValue(SimpleClass *this, int v)
{
 this->value = v;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x3020 */
int SimpleClass_getValue(const SimpleClass *this)
{
 return this->value;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x3038 */
long long SimpleClass_compute(const SimpleClass *this, int x)
{
 int v3; // [xsp+0h] [xbp-10h]

 v3 = this->value * x;
 return (unsigned int)strlen(this->name) + v3;
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x3080 */
int SimpleClass_getClassID()
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Em @ 0x3088 */
void LifecycleClass_LifecycleClass(LifecycleClass *this, size_t s)
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
 ++LifecycleClass_instance_count();
}


/* Function: _ZNK14LifecycleClass7getDataEm @ 0x3138 */
int LifecycleClass_getData(const LifecycleClass *this, size_t idx)
{
 if ( idx >= this->size )
 return -1;
 else
 return this->data[idx];
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x3190 */
int LifecycleClass_getInstanceCount(void)
{
 return LifecycleClass_instance_count();
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x319C */
void LifecycleClass_dtor(LifecycleClass *this)
{
 if ( this->data )
 operator_delete_array(this->data);
 LifecycleClass_instance_count();
}


/* Function: _ZN4BaseC2Ev @ 0x31E8 */
void Base_Base(Base *this)
{
 this->_vptr$Base = (int (**)(void))&off_17858;
}


/* Function: _ZN7DerivedC2Ei @ 0x320C */
void Derived_Derived(Derived *this, int m)
{
 Base_Base(this);
 this->_vptr$Base = (int (**)(void))&off_17898;
 this->multiplier = m;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x325C */
int Base_virtual_func(Base *this, int x)
{
 return x + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x3278 */
int Derived_virtual_func(Derived *this, int x)
{
 return x * this->multiplier;
}


/* Function: _ZN7DerivedD2Ev @ 0x329C */
void Derived_dtor(Derived *this)
{
 Base_dtor(this);
}


/* Function: _ZN4BaseD2Ev @ 0x32C0 */
void Base_dtor(Base *this)
{
 ;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x32D0 */
void MultiDerived_MultiDerived(MultiDerived *this)
{
 BaseA_BaseA(this);
 BaseB_BaseB(&this->BaseB);
 this->_vptr$BaseA = (int (**)(void))&off_178E0;
 this->_vptr$BaseB = (int (**)(void))&off_17910;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x3330 */
void MultiDerived_dtor(MultiDerived *this)
{
 BaseB_dtor(&this->BaseB);
 BaseA_dtor(this);
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x3364 */
void DiamondDerived_DiamondDerived(DiamondDerived *this)
{
 VirtualBase_VirtualBase((VirtualBase *)&this->MiddleB);
 MiddleA_MiddleA(this, (void **)off_17A70);
 MiddleB_MiddleB((MiddleB *)(&this->dataA + 2), (void **)off_17A80);
 this->_vptr$MiddleA = (int (**)(void))&off_179E8;
 this->_vptr$MiddleB = (int (**)(void))&off_17A50;
 *((unsigned long long *)&this->dataA + 1) = &off_17A18;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x3400 */
void DiamondDerived_dtor1(DiamondDerived *this)
{
 DiamondDerived_dtor2(this, (void **)&VTT_for_DiamondDerived);
 VirtualBase_dtor((VirtualBase *)&this->MiddleB);
}


/* Function: _ZN5PointC2Eii @ 0x343C */
void Point_Point(Point *this, int _x, int _y)
{
 this->x = _x;
 this->y = _y;
}


/* Function: _ZNK5PointplERKS_ @ 0x3468 */
struct Point Point_operator_plus(const struct Point *this, const struct Point *other)
{
 Point v3; // [xsp+18h] [xbp-8h] BYREF

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
int template_max_int(int a, int b)
{
 if ( a <= b )
 return b;
 else
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x358C */
double template_max_double(double a, double b)
{
 if ( a <= b )
 return b;
 else
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x35D4 */
void template_swap_int(int *a, int *b)
{
 int v2; // [xsp+Ch] [xbp-14h]

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x3610 */
void Container_int_Container(struct Container_int *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x3628 */
void Container_int_push(struct Container_int *this, int value)
{
 long long v2; // x10

 if ( this->size < 10 )
 {
 v2 = this->size++;
 this->data[v2] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x3674 */
int Container_int_get(const struct Container_int *this, int idx)
{
 if ( idx < 0 || idx >= this->size )
 return 0;
 else
 return this->data[idx];
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x36D4 */
int Container_int_getSize(const struct Container_int *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x36EC */
void Container_double_Container(struct Container_double *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x3704 */
void Container_double_push(struct Container_double *this, double value)
{
 long long v2; // x10

 if ( this->size < 10 )
 {
 v2 = this->size++;
 this->data[v2] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x3750 */
double Container_double_get(const struct Container_double *this, int idx)
{
 if ( idx < 0 || idx >= this->size )
 return 0.0;
 else
 return this->data[idx];
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x37B4 */
int Container_double_getSize(const struct Container_double *this)
{
 return this->size;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x37CC */
void std_unique_ptr_int_unique_ptr(
 struct std_unique_ptr_int *this,
 int *__p)
{
 ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(&this->_M_t, __p);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x3800 */
int *std_unique_ptr_int_deref(const struct std_unique_ptr_int *this)
{
 return (int *)std_unique_ptr_int_get(this);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x3834 */
struct std_unique_ptr_int * std_move_std_unique_ptr_int(
 struct std_unique_ptr_int *__t)
{
 return __t;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x3848 */
void std_unique_ptr_int_unique_ptr_move(
 struct std_unique_ptr_int *this,
 struct std_unique_ptr_int *a2)
{
 std___uniq_ptr_data_int_default_delete_int_true_true___uniq_ptr_data(&this->_M_t, &a2->_M_t);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x3874 */
void std_unique_ptr_int_array_unique_ptr(
 struct std_unique_ptr_int_array *this,
 int *__p)
{
 ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(&this->_M_t, __p);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm @ 0x38A8 */
int *std_unique_ptr_int_array_at(const struct std_unique_ptr_int_array *this, unsigned long __i)
{
 return (int *)std_unique_ptr_int_array_get(this) + __i;
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x38E8 */
void std_unique_ptr_int_array_dtor(
 struct std_unique_ptr_int_array *this)
{
 const struct std_default_delete_int_array *deleter; // x0
 int **v3; // [xsp+10h] [xbp-10h]

 v3 = std___uniq_ptr_impl_int_default_delete_int_array___M_ptr(&this->_M_t);
 if ( *v3 )
 {
 deleter = std_unique_ptr_int_array_get_deleter(this);
 std_default_delete_int_array_operator_int(deleter, *v3);
 }
 *v3 = 0;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x394C */
void std_unique_ptr_int_dtor(
 struct std_unique_ptr_int *this)
{
 int **v1; // x8
 struct std_default_delete_int *deleter; // [xsp+0h] [xbp-20h]
 int **__t; // [xsp+10h] [xbp-10h]

 __t = std___uniq_ptr_impl_int_default_delete_int___M_ptr(&this->_M_t);
 if ( *__t )
 {
 deleter = std_unique_ptr_int_get_deleter(this);
 v1 = std_forward_int_ptr(__t);
 std_default_delete_int_operator(deleter, *v1);
 }
 *__t = 0;
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x39C0 */
void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase_RTTIBase(this);
 this->_vptr$RTTIBase = (int (**)(void))off_17D30;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x3A04 */
void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase_RTTIBase(this);
 this->_vptr$RTTIBase = (int (**)(void))off_17D80;
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x3A48 */
bool std_type_info_operator_eq(const struct type_info *this, const struct type_info *__arg)
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
int RTTIDerivedA_derivedA_data(const RTTIDerivedA *this)
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x3AFC */
int RTTIDerivedB_derivedB_data(const RTTIDerivedB *this)
{
 return 200;
}


/* Function: _ZNKSt9type_info4nameEv @ 0x3B10 */
const char * std_type_info_name(const struct type_info *this)
{
 if ( **((unsigned char **)this + 1) == 42 )
 return (const char *)(*((unsigned long long *)this + 1) + 1LL);
 else
 return (const char *)*((unsigned long long *)this + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x3B64 */
const char * Base_getName(const Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x3B7C */
void Base_dtor0(Base *this)
{
 Base_dtor(this);
 operator_delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x3BAC */
const char * Derived_getName(const Derived *this)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x3BC4 */
void Derived_dtor0(Derived *this)
{
 Derived_dtor(this);
 operator_delete(this);
}


/* Function: _ZN5BaseAC2Ev @ 0x3BF4 */
void BaseA_BaseA(BaseA *this)
{
 this->_vptr$BaseA = (int (**)(void))&off_17990;
}


/* Function: _ZN5BaseBC2Ev @ 0x3C18 */
void BaseB_BaseB(BaseB *this)
{
 this->_vptr$BaseB = (int (**)(void))&off_179B8;
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x3C3C */
int MultiDerived_funcA(MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x3C50 */
void MultiDerived_dtor0(MultiDerived *this)
{
 MultiDerived_dtor(this);
 operator_delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x3C80 */
int MultiDerived_funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x3C94 */
void non_virtual_thunk_to_MultiDerived_funcB()
{
 long long v0; // x0

 MultiDerived_funcB((MultiDerived *)(v0 - 16));
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x3CAC */
void non_virtual_thunk_to_MultiDerived_dtor1()
{
 long long v0; // x0

 MultiDerived_dtor1((MultiDerived *)(v0 - 16));
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x3CC4 */
void non_virtual_thunk_to_MultiDerived_dtor0()
{
 long long v0; // x0

 MultiDerived_dtor0((MultiDerived *)(v0 - 16));
}


/* Function: _ZN5BaseA5funcAEv @ 0x3CDC */
int BaseA_funcA(BaseA *this)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x3CF0 */
void BaseA_dtor(BaseA *this)
{
 ;
}


/* Function: _ZN5BaseAD0Ev @ 0x3D00 */
void BaseA_dtor0(BaseA *this)
{
 BaseA_dtor(this);
 operator_delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x3D30 */
int BaseB_funcB(BaseB *this)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x3D44 */
void BaseB_dtor(BaseB *this)
{
 ;
}


/* Function: _ZN5BaseBD0Ev @ 0x3D54 */
void BaseB_dtor0(BaseB *this)
{
 BaseB_dtor(this);
 operator_delete(this);
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x3D84 */
void VirtualBase_VirtualBase(VirtualBase *this)
{
 this->_vptr$VirtualBase = (int (**)(void))&off_17C18;
}


/* Function: _ZN7MiddleAC2Ev @ 0x3DA8 */
void MiddleA_MiddleA(MiddleA *this, void **vtt)
{
 this->_vptr$MiddleA = (int (**)(void))*vtt;
 *(int (***)(void))((char *)&this->_vptr$MiddleA + *((unsigned long long *)this->_vptr$MiddleA - 3)) = (int (**)(void))vtt[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x3DDC */
void MiddleB_MiddleB(MiddleB *this, void **vtt)
{
 this->_vptr$MiddleB = (int (**)(void))*vtt;
 *(int (***)(void))((char *)&this->_vptr$MiddleB + *((unsigned long long *)this->_vptr$MiddleB - 3)) = (int (**)(void))vtt[1];
}


/* Function: _ZN7MiddleA4funcEv @ 0x3E10 */
int MiddleA_func(MiddleA *this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr$MiddleA - 3)) + 150;
}


/* Function: _ZN7MiddleAD1Ev @ 0x3E38 */
void MiddleA_dtor1(MiddleA *this)
{
 MiddleA_dtor2(this, (void **)VTT_for_MiddleA);
 VirtualBase_dtor((VirtualBase *)(&this->dataA + 2));
}


/* Function: _ZN7MiddleAD0Ev @ 0x3E74 */
void MiddleA_dtor0(MiddleA *this)
{
 MiddleA_dtor1(this);
 operator_delete(this);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x3EA4 */
void virtual_thunk_to_MiddleA_func()
{
 unsigned long long *v0; // x0

 MiddleA_func((MiddleA *)((char *)v0 + *(unsigned long long *)(*v0 - 24LL)));
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x3EC4 */
void virtual_thunk_to_MiddleA_dtor1()
{
 unsigned long long *v0; // x0

 MiddleA_dtor1((MiddleA *)((char *)v0 + *(unsigned long long *)(*v0 - 32LL)));
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x3EE4 */
void virtual_thunk_to_MiddleA_dtor0()
{
 unsigned long long *v0; // x0

 MiddleA_dtor0((MiddleA *)((char *)v0 + *(unsigned long long *)(*v0 - 32LL)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x3F04 */
int MiddleB_func(MiddleB *this)
{
 return *(int *)((char *)&this->dataB + *((unsigned long long *)this->_vptr$MiddleB - 3)) + 200;
}


/* Function: _ZN7MiddleBD1Ev @ 0x3F2C */
void MiddleB_dtor1(MiddleB *this)
{
 MiddleB_dtor2(this, (void **)VTT_for_MiddleB);
 VirtualBase_dtor((VirtualBase *)(&this->dataB + 2));
}


/* Function: _ZN7MiddleBD0Ev @ 0x3F68 */
void MiddleB_dtor0(MiddleB *this)
{
 MiddleB_dtor1(this);
 operator_delete(this);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x3F98 */
void virtual_thunk_to_MiddleB_func()
{
 unsigned long long *v0; // x0

 MiddleB_func((MiddleB *)((char *)v0 + *(unsigned long long *)(*v0 - 24LL)));
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x3FB8 */
void virtual_thunk_to_MiddleB_dtor1()
{
 unsigned long long *v0; // x0

 MiddleB_dtor1((MiddleB *)((char *)v0 + *(unsigned long long *)(*v0 - 32LL)));
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x3FD8 */
void virtual_thunk_to_MiddleB_dtor0()
{
 unsigned long long *v0; // x0

 MiddleB_dtor0((MiddleB *)((char *)v0 + *(unsigned long long *)(*v0 - 32LL)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x3FF8 */
int DiamondDerived_func(DiamondDerived *this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr$MiddleA - 3)) + 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x4020 */
void DiamondDerived_dtor0(DiamondDerived *this)
{
 DiamondDerived_dtor1(this);
 operator_delete(this);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x4050 */
void non_virtual_thunk_to_DiamondDerived_func()
{
 long long v0; // x0

 DiamondDerived_func((DiamondDerived *)(v0 - 16));
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x4068 */
void non_virtual_thunk_to_DiamondDerived_dtor1()
{
 long long v0; // x0

 DiamondDerived_dtor1((DiamondDerived *)(v0 - 16));
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x4080 */
void non_virtual_thunk_to_DiamondDerived_dtor0()
{
 long long v0; // x0

 DiamondDerived_dtor0((DiamondDerived *)(v0 - 16));
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x4098 */
void virtual_thunk_to_DiamondDerived_func()
{
 unsigned long long *v0; // x0

 DiamondDerived_func((DiamondDerived *)((char *)v0 + *(unsigned long long *)(*v0 - 24LL)));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x40B8 */
void virtual_thunk_to_DiamondDerived_dtor1()
{
 unsigned long long *v0; // x0

 DiamondDerived_dtor1((DiamondDerived *)((char *)v0 + *(unsigned long long *)(*v0 - 32LL)));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x40D8 */
void virtual_thunk_to_DiamondDerived_dtor0()
{
 unsigned long long *v0; // x0

 DiamondDerived_dtor0((DiamondDerived *)((char *)v0 + *(unsigned long long *)(*v0 - 32LL)));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x40F8 */
int VirtualBase_func(VirtualBase *this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x410C */
void VirtualBase_dtor(VirtualBase *this)
{
 ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x411C */
void VirtualBase_dtor0(VirtualBase *this)
{
 VirtualBase_dtor(this);
 operator_delete(this);
}


/* Function: _ZN7MiddleAD2Ev @ 0x414C */
void MiddleA_dtor2(MiddleA *this, void **vtt)
{
 ;
}


/* Function: _ZN7MiddleBD2Ev @ 0x4160 */
void MiddleB_dtor2(MiddleB *this, void **vtt)
{
 ;
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x4174 */
void DiamondDerived_dtor2(DiamondDerived *this, void **vtt)
{
 MiddleB_dtor2((MiddleB *)(&this->dataA + 2), vtt + 3);
 MiddleA_dtor2(this, vtt + 1);
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x41C0 */
void std___uniq_ptr_data_int_default_delete_int_true_true___uniq_ptr_data(
 struct std___uniq_ptr_data_int_default_delete_int_true_true *this,
 struct std___uniq_ptr_data_int_default_delete_int_true_true *a2)
{
 std___uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl_move(&this->_M_t, &a2->_M_t);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x41EC */
void std___uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl_move(
 struct std___uniq_ptr_impl_int_default_delete_int *this,
 struct std___uniq_ptr_impl_int_default_delete_int *__u)
{
 struct std_tuple_int_std_default_delete_int *v2; // x0

 v2 = std_move_tuple_int_std_default_delete_int(&__u->_M_t);
 std_tuple_int_std_default_delete_int__tuple(&this->_M_t, v2);
 *std___uniq_ptr_impl_int_default_delete_int___M_ptr(__u) = 0;
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x4244 */
struct std_tuple_int_std_default_delete_int * std_move_tuple_int_std_default_delete_int(
 struct std_tuple_int_std_default_delete_int *__t)
{
 return __t;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x4258 */
void std_tuple_int_std_default_delete_int__tuple(
 struct std_tuple_int_std_default_delete_int *this,
 struct std_tuple_int_std_default_delete_int *a2)
{
 std_Tuple_impl_0ul_int_std_default_delete_int___Tuple_impl_move(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x4284 */
int ** std___uniq_ptr_impl_int_default_delete_int___M_ptr(
 struct std___uniq_ptr_impl_int_default_delete_int *this)
{
 return std_get_0ul_int_std_default_delete_int((struct std_tuple_int_std_default_delete_int *)&this->_M_t);
}


/* Function: __clang_call_terminate @ 0x42A8 */
void _clang_call_terminate(void *a1)
{
 __cxa_begin_catch(a1);
 std_terminate();
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x42B4 */
void std_Tuple_impl_0ul_int_std_default_delete_int___Tuple_impl_move(
 struct std_Tuple_impl_0ul_int_std_default_delete_int *this,
 struct std_Tuple_impl_0ul_int_std_default_delete_int *a2)
{
 std_Tuple_impl_1ul_std_default_delete_int___Tuple_impl(this, a2);
 this->std_Tuple_impl_1ul_std_default_delete_int.std_Head_base_1ul_std_default_delete_int_true.gap0[0] = a2->std_Tuple_impl_1ul_std_default_delete_int.std_Head_base_1ul_std_default_delete_int_true.gap0[0];
 this->std_Tuple_impl_1ul_std_default_delete_int.std_Head_base_1ul_std_default_delete_int_true.gap0[1] = a2->std_Tuple_impl_1ul_std_default_delete_int.std_Head_base_1ul_std_default_delete_int_true.gap0[1];
 this->std_Tuple_impl_1ul_std_default_delete_int.std_Head_base_1ul_std_default_delete_int_true.gap0[2] = a2->std_Tuple_impl_1ul_std_default_delete_int.std_Head_base_1ul_std_default_delete_int_true.gap0[2];
 this->std_Tuple_impl_1ul_std_default_delete_int.std_Head_base_1ul_std_default_delete_int_true.gap0[3] = a2->std_Tuple_impl_1ul_std_default_delete_int.std_Head_base_1ul_std_default_delete_int_true.gap0[3];
 this->std_Tuple_impl_1ul_std_default_delete_int.std_Head_base_1ul_std_default_delete_int_true.gap0[4] = a2->std_Tuple_impl_1ul_std_default_delete_int.std_Head_base_1ul_std_default_delete_int_true.gap0[4];
 this->std_Tuple_impl_1ul_std_default_delete_int.std_Head_base_1ul_std_default_delete_int_true.gap0[5] = a2->std_Tuple_impl_1ul_std_default_delete_int.std_Head_base_1ul_std_default_delete_int_true.gap0[5];
 this->std_Tuple_impl_1ul_std_default_delete_int.std_Head_base_1ul_std_default_delete_int_true.gap0[6] = a2->std_Tuple_impl_1ul_std_default_delete_int.std_Head_base_1ul_std_default_delete_int_true.gap0[6];
 this->std_Tuple_impl_1ul_std_default_delete_int.std_Head_base_1ul_std_default_delete_int_true.gap0[7] = a2->std_Tuple_impl_1ul_std_default_delete_int.std_Head_base_1ul_std_default_delete_int_true.gap0[7];
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ @ 0x42F4 */
void std_Tuple_impl_1ul_std_default_delete_int___Tuple_impl(
 struct std_Tuple_impl_1ul_std_default_delete_int *this,
 struct std_Tuple_impl_1ul_std_default_delete_int *__in)
{
 ;
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x4308 */
int ** std_get_0ul_int_std_default_delete_int(
 struct std_tuple_int_std_default_delete_int *__t)
{
 return std__get_helper_0ul_int_std_default_delete_int(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x432C */
int ** std__get_helper_0ul_int_std_default_delete_int(
 struct std_Tuple_impl_0ul_int_std_default_delete_int *__t)
{
 return std_Tuple_impl_0ul_int_std_default_delete_int___M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x4350 */
int ** std_Tuple_impl_0ul_int_std_default_delete_int___M_head(
 struct std_Tuple_impl_0ul_int_std_default_delete_int *__t)
{
 return std_Head_base_0ul_int_false__M_head((struct std_Head_base_0ul_int_false *)__t);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ @ 0x4374 */
int ** std_Head_base_0ul_int_false__M_head(
 struct std_Head_base_0ul_int_false *__b)
{
 return &__b->_M_head_impl;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x4388 */
void RTTIBase_RTTIBase(RTTIBase *this)
{
 this->_vptr$RTTIBase = (int (**)(void))off_17D58;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x43AC */
void RTTIDerivedA_dtor(RTTIDerivedA *this)
{
 RTTIBase_dtor(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x43D0 */
void RTTIDerivedA_dtor0(RTTIDerivedA *this)
{
 RTTIDerivedA_dtor(this);
 operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x4400 */
int RTTIDerivedA_getType(const RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x4414 */
void RTTIBase_dtor(RTTIBase *this)
{
 ;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x4424 */
void RTTIBase_dtor0(RTTIBase *this)
{
 RTTIBase_dtor(this);
 operator_delete(this);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x4454 */
int RTTIBase_getType(const RTTIBase *this)
{
 return 0;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x4468 */
void RTTIDerivedB_dtor(RTTIDerivedB *this)
{
 RTTIBase_dtor(this);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x448C */
void RTTIDerivedB_dtor0(RTTIDerivedB *this)
{
 RTTIDerivedB_dtor(this);
 operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x44BC */
int RTTIDerivedB_getType(const RTTIDerivedB *this)
{
 return 2;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x44D0 */
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(
 std::__uniq_ptr_data<int,std::default_delete<int>,true,true> *this,
 std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer a2)
{
 std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x44FC */
void std___uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl(
 struct std___uniq_ptr_impl_int_default_delete_int *this,
 int *__p)
{
 std_tuple_int_std_default_delete_int__tuple_true_true(&this->_M_t);
 *std___uniq_ptr_impl_int_default_delete_int___M_ptr(this) = __p;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x4540 */
void std_tuple_int_std_default_delete_int__tuple_true_true(
 struct std_tuple_int_std_default_delete_int *this)
{
 std_Tuple_impl_0ul_int_std_default_delete_int___Tuple_impl(this);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev @ 0x456C */
void std_Tuple_impl_0ul_int_std_default_delete_int___Tuple_impl(
 struct std_Tuple_impl_0ul_int_std_default_delete_int *this)
{
 std_Tuple_impl_1ul_std_default_delete_int___Tuple_impl(this);
 std_Head_base_0ul_int_false__Head_base((struct std_Head_base_0ul_int_false *)this);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev @ 0x459C */
void std_Tuple_impl_1ul_std_default_delete_int___Tuple_impl(
 struct std_Tuple_impl_1ul_std_default_delete_int *this)
{
 std_Head_base_1ul_std_default_delete_int_true__Head_base(this);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2Ev @ 0x45C0 */
void std_Head_base_0ul_int_false__Head_base(struct std_Head_base_0ul_int_false *this)
{
 this->_M_head_impl = 0;
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev @ 0x45D8 */
void std_Head_base_1ul_std_default_delete_int_true__Head_base(
 struct std_Head_base_1ul_std_default_delete_int_true *this)
{
 ;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x45E8 */
struct std_default_delete_int * std_unique_ptr_int_get_deleter(struct std_unique_ptr_int *this)
{
 return std___uniq_ptr_impl_int_default_delete_int___M_deleter(&this->_M_t);
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x461C */
void std_default_delete_int_operator(const struct std_default_delete_int *this, int *__ptr)
{
 if ( __ptr )
 operator_delete(__ptr);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x4658 */
int ** std_forward_int_ptr(int **__t)
{
 return __t;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x466C */
struct std_default_delete_int * std___uniq_ptr_impl_int_default_delete_int___M_deleter(
 struct std___uniq_ptr_impl_int_default_delete_int *this)
{
 return std_get_1ul_int_std_default_delete_int((struct std_tuple_int_std_default_delete_int *)&this->_M_t);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x4690 */
struct std_default_delete_int * std_get_1ul_int_std_default_delete_int(
 struct std_tuple_int_std_default_delete_int *__t)
{
 return std__get_helper_1ul_std_default_delete_int(__t);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x46B4 */
struct std_default_delete_int * std__get_helper_1ul_std_default_delete_int(
 struct std_Tuple_impl_1ul_std_default_delete_int *__t)
{
 return std_Tuple_impl_1ul_std_default_delete_int___M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x46D8 */
struct std_default_delete_int * std_Tuple_impl_1ul_std_default_delete_int___M_head(
 struct std_Tuple_impl_1ul_std_default_delete_int *__t)
{
 return std_Head_base_1ul_std_default_delete_int_true__M_head(__t);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x46FC */
struct std_default_delete_int * std_Head_base_1ul_std_default_delete_int_true__M_head(
 struct std_Head_base_1ul_std_default_delete_int_true *__b)
{
 return (struct std_default_delete_int *)&__b->_M_head_impl;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x4710 */
int * std_unique_ptr_int_get(const struct std_unique_ptr_int *this)
{
 return std___uniq_ptr_impl_int_default_delete_int_const__M_ptr(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x4744 */
int * std___uniq_ptr_impl_int_default_delete_int_const__M_ptr(
 const struct std___uniq_ptr_impl_int_default_delete_int *this)
{
 return *std_get_0ul_const_int_std_default_delete_int((struct std_tuple_int_std_default_delete_int *)&this->_M_t);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x476C */
int *const * std_get_0ul_const_int_std_default_delete_int(
 const struct std_tuple_int_std_default_delete_int *__t)
{
 return std__get_helper_0ul_const_int_std_default_delete_int(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4790 */
int *const * std__get_helper_0ul_const_int_std_default_delete_int(
 const struct std_Tuple_impl_0ul_int_std_default_delete_int *__t)
{
 return std_Tuple_impl_0ul_const_int_std_default_delete_int___M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x47B4 */
int *const * std_Tuple_impl_0ul_const_int_std_default_delete_int___M_head(
 const struct std_Tuple_impl_0ul_int_std_default_delete_int *__t)
{
 return std_Head_base_0ul_const_int_false__M_head((struct std_Head_base_0ul_int_false *)__t);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ @ 0x47D8 */
int *const * std_Head_base_0ul_const_int_false__M_head(
 const struct std_Head_base_0ul_int_false *__b)
{
 return &__b->_M_head_impl;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x47EC */
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(
 std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true> *this,
 std::__uniq_ptr_impl<int,std::default_delete<int[]> >::pointer a2)
{
 std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x4818 */
void std___uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl(
 std::__uniq_ptr_impl<int,std::default_delete<int[]> > *this,
 std::__uniq_ptr_impl<int,std::default_delete<int[]> >::pointer __p)
{
 std_tuple_int_std_default_delete_int_array__tuple_true_true(&this->_M_t);
 *std___uniq_ptr_impl_int_default_delete_int_array___M_ptr(this) = __p;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x485C */
void std_tuple_int_std_default_delete_int_array__tuple_true_true(
 std::tuple<int *,std::default_delete<int[]> > *this)
{
 std_Tuple_impl_0ul_int_std_default_delete_int_array___Tuple_impl(this);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4888 */
int ** std___uniq_ptr_impl_int_default_delete_int_array___M_ptr(
 std::__uniq_ptr_impl<int,std::default_delete<int[]> > *this)
{
 return std::get<0ul,int *,std::default_delete<int []>>(&this->_M_t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x48AC */
void std_Tuple_impl_0ul_int_std_default_delete_int_array___Tuple_impl(
 std::_Tuple_impl<0UL,int *,std::default_delete<int[]> > *this)
{
 std_Tuple_impl_1ul_std_default_delete_int_array___Tuple_impl(this);
 std_Head_base_0ul_int_false__Head_base_int_ptr((struct std_Head_base_0ul_int_false *)this);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev @ 0x48DC */
void std_Tuple_impl_1ul_std_default_delete_int_array___Tuple_impl(
 std::_Tuple_impl<1UL,std::default_delete<int[]> > *this)
{
 std_Head_base_1ul_std_default_delete_int_array_true__Head_base(this);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev @ 0x4900 */
void std_Head_base_1ul_std_default_delete_int_array_true__Head_base(
 std::_Head_base<1UL,std::default_delete<int[]>,true> *this)
{
 ;
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4910 */
int ** std_get_0ul_int_std_default_delete_int_array(
 std::tuple<int *,std::default_delete<int[]> > *__t)
{
 return std__get_helper_0ul_int_std_default_delete_int_array(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4934 */
int ** std__get_helper_0ul_int_std_default_delete_int_array(
 std::_Tuple_impl<0UL,int *,std::default_delete<int[]> > *__t)
{
 return std_Tuple_impl_0ul_int_std_default_delete_int_array___M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x4958 */
int ** std_Tuple_impl_0ul_int_std_default_delete_int_array___M_head(
 std::_Head_base<0UL,int *,false> *__t)
{
 return std_Head_base_0ul_int_false__M_head_int_ptr(__t);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x497C */
struct std_default_delete_int_array * std_unique_ptr_int_array_get_deleter(struct std_unique_ptr_int_array *this)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(&this->_M_t);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ @ 0x49B0 */
void std_default_delete_int_array_operator_int(const struct std_default_delete_int_array *this, int *__ptr)
{
 if ( __ptr )
 operator_delete_array(__ptr);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x49EC */
struct std_default_delete_int_array * std___uniq_ptr_impl_int_default_delete_int_array___M_deleter(
 std::__uniq_ptr_impl<int,std::default_delete<int[]> > *this)
{
 return std_get_1ul_int_std_default_delete_int_array(&this->_M_t);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4A10 */
struct std_default_delete_int_array * std_get_1ul_int_std_default_delete_int_array(
 std::tuple<int *,std::default_delete<int[]> > *__t)
{
 return std__get_helper_1ul_std_default_delete_int_array(__t);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4A34 */
struct std_default_delete_int_array * std__get_helper_1ul_std_default_delete_int_array(
 std::_Tuple_impl<1UL,std::default_delete<int[]> > *__t)
{
 return std_Tuple_impl_1ul_std_default_delete_int_array___M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x4A58 */
struct std_default_delete_int_array * std_Tuple_impl_1ul_std_default_delete_int_array___M_head(
 std::_Tuple_impl<1UL,std::default_delete<int[]> > *__t)
{
 return std_Head_base_1ul_std_default_delete_int_array_true__M_head(__t);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x4A7C */
struct std_default_delete_int_array * std_Head_base_1ul_std_default_delete_int_array_true__M_head(
 std::_Head_base<1UL,std::default_delete<int[]>,true> *__b)
{
 return &__b->_M_head_impl;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x4A90 */
int * std_unique_ptr_int_array_get(const struct std_unique_ptr_int_array *this)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4AC4 */
int * std___uniq_ptr_impl_int_default_delete_int_array_const__M_ptr(
 const std::__uniq_ptr_impl<int,std::default_delete<int[]> > *this)
{
 return *std_get_0ul_int_std_default_delete_int_array(&this->_M_t);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x4AEC */
int *const * std_get_0ul_const_int_std_default_delete_int_array(
 const std::tuple<int *,std::default_delete<int[]> > *__t)
{
 return std__get_helper_0ul_const_int_std_default_delete_int_array(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4B10 */
int *const * std__get_helper_0ul_const_int_std_default_delete_int_array(
 const std::_Tuple_impl<0UL,int *,std::default_delete<int[]> > *__t)
{
 return std_Tuple_impl_0ul_const_int_std_default_delete_int_array___M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x4B34 */
int *const * std_Tuple_impl_0ul_const_int_std_default_delete_int_array___M_head(
 const std::_Head_base<0UL,int *,false> *__t)
{
 return std_Head_base_0ul_const_int_false__M_head_int_ptr(__t);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x4B58 */
int ** std_forward_int_ptr(int **__t)
{
 return __t;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ @ 0x4B6C */
void std::_Head_base<0ul,int *,false>::_Head_base<int *&>(std::_Head_base<0UL,int *,false> *this, int **__h)
{
 this->_M_head_impl = *std::forward<int *&>(__h);
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
