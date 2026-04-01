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
typedef unsigned char byte;
#define __thiscall
#define SUB168(x, n) ((x) >> (n))
#define ZEXT816(x) ((unsigned long long)(x))

// Forward declarations for C++ classes
typedef void type;
typedef struct _Head_base _Head_base;
typedef struct Base Base;
typedef struct Point Point;
struct Point {
 int x;
 int y;
};
typedef struct __2 __2;
typedef struct Init Init;
typedef struct SimpleClass SimpleClass;
struct SimpleClass {
 int value;
 char name[32];
 unsigned int id;
};
typedef struct LifecycleClass LifecycleClass;
typedef struct Derived Derived;
struct Derived {
 void *vtable;
 int data;
};
typedef struct MultiDerived MultiDerived;
struct MultiDerived {
 void *vtable;
 void *vtable2;
 unsigned int data;
};
typedef struct DiamondDerived DiamondDerived;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
struct MiddleA {
 void *vtable;
 unsigned long long data[2];
};
typedef struct MiddleB MiddleB;
struct MiddleB {
 void *vtable;
 unsigned long long data[2];
};
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct type_info type_info;
struct type_info {
 void *vtable;
 char *name;
};
typedef struct tuple tuple;
typedef struct _Tuple_impl _Tuple_impl;
typedef struct unique_ptr unique_ptr;
typedef struct default_delete default_delete;
typedef struct __uniq_ptr_impl __uniq_ptr_impl;
typedef struct __uniq_ptr_data __uniq_ptr_data;
typedef struct __0 __0;
struct __0 {
 int field_0;
 int field_4;
};
typedef struct __1 __1;
struct __1 {
 int field_0;
 int field_4;
 int field_8;
};
typedef struct Container_int_ Container_int_;
struct Container_int_ {
 unsigned int data[10];
 unsigned int size;
};
typedef struct Container_double_ Container_double_;
struct Container_double_ {
 unsigned long long data[10];
 unsigned int size;
};
typedef struct DiamondDerived DiamondDerived;
struct DiamondDerived {
 void *vtable;
 unsigned int data;
};
typedef struct unique_ptr_int_std__default_delete_int__ unique_ptr_int_std__default_delete_int__;
typedef struct unique_ptr_int___std__default_delete_int____ unique_ptr_int___std__default_delete_int____;
typedef struct unique_ptr_int_test_cpp_smart_ptr______2_ unique_ptr_int_test_cpp_smart_ptr______2_;
typedef struct __uniq_ptr_impl_int_test_cpp_smart_ptr______2_ __uniq_ptr_impl_int_test_cpp_smart_ptr______2_;
typedef struct __uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ __uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_;
typedef struct tuple_int__test_cpp_smart_ptr______2_ tuple_int__test_cpp_smart_ptr______2_;
typedef struct _Tuple_impl_0ul_int__test_cpp_smart_ptr______2_ _Tuple_impl_0ul_int__test_cpp_smart_ptr______2_;
typedef struct _Head_base_0ul_int__false_ _Head_base_0ul_int__false_;
typedef struct __uniq_ptr_impl_int_std__default_delete_int__ __uniq_ptr_impl_int_std__default_delete_int__;
typedef struct __uniq_ptr_data_int_std__default_delete_int__true_true_ __uniq_ptr_data_int_std__default_delete_int__true_true_;
typedef struct tuple_int__std__default_delete_int__ tuple_int__std__default_delete_int__;
typedef struct _Tuple_impl_0ul_int__std__default_delete_int__ _Tuple_impl_0ul_int__std__default_delete_int__;
typedef struct __uniq_ptr_impl_int_std__default_delete_int____ __uniq_ptr_impl_int_std__default_delete_int____;
typedef struct __uniq_ptr_data_int_std__default_delete_int____true_true_ __uniq_ptr_data_int_std__default_delete_int____true_true_;
typedef struct tuple_int__std__default_delete_int____ tuple_int__std__default_delete_int____;
typedef struct _Tuple_impl_0ul_int__std__default_delete_int____ _Tuple_impl_0ul_int__std__default_delete_int____;
typedef struct default_delete_int_ default_delete_int_;

// Global variables
static int instance_count = 0;
static char completed_0 = 0;
static void *__dso_handle = 0;
static Init std___ioinit;

// External data declarations
extern char DAT_00104bd5;
extern char DAT_00104bfa;
extern char DAT_00104c18;
extern char DAT_00104c34;
extern char DAT_00104c50;
extern char DAT_00104c6c;
extern char DAT_00104c89;
extern char DAT_00104ca5;
extern char DAT_00104cc1;
extern char DAT_00104cdd;
extern char DAT_00104cf9;
extern char DAT_00104d16;
extern char DAT_00104d33;
extern char DAT_00104d51;
extern void *PTR_virtual_func_00117858;
extern void *PTR_virtual_func_00117898;
extern void *PTR_funcA_001178e0;
extern void *PTR_funcB_00117910;
extern void *PTR_func_001179e8;
extern void *PTR_func_00117a50;
extern void *PTR_func_00117a18;
extern void *PTR__RTTIDerivedA_00117d30;
extern void *PTR__RTTIDerivedB_00117d80;
extern void *PTR__RTTIBase_00117d58;
extern void *PTR_func_00117c18;
extern void *PTR_funcA_00117990;
extern void *PTR_funcB_001179b8;

// LifecycleClass struct definition
struct LifecycleClass {
 void *data;
 unsigned long count;
};

// Forward declarations
int call_weak_fn(void *ctx);
unsigned int main(void);
int template_max_int_(int param_1,int param_2);
double template_max_double_(double param_1,double param_2);
void template_swap_int_(int *param_1,int *param_2);
int test_cpp_lambda_1_operator(__1 *this,int param_1);
int test_cpp_lambda_0_operator(__0 *this,int param_1,int param_2);
void abort(void);
int ** __get_helper_1ul_test_cpp_smart_ptr______2_(_Tuple_impl *param_1);
void _Tuple_impl_1ul_test_cpp_smart_ptr_2__M_head(_Tuple_impl *param_1);
_Head_base * _Head_base_1ul_test_cpp_smart_ptr_2_true__M_head(_Head_base *param_1);
void __uniq_ptr_data_int_test_cpp_smart_ptr_2_true_false___uniq_ptr_impl_test_cpp_smart_ptr_2_const
 (__uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ *this,int *param_1,__2 *param_2);
unsigned long long get(unique_ptr_int_test_cpp_smart_ptr______2_ *this);
unsigned long long __uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_ptr
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this);
unsigned long long get_deleter(unique_ptr_int_test_cpp_smart_ptr______2_ *this);
int ** move_int___(int **param_1);
type * std_move_int___(int **param_1);
void test_cpp_smart_ptr_2_operator(__2 *this,int *param_1);
unsigned long std_type_info_operator__(type_info *this,type_info *param_1);
long std_type_info_name(type_info *this);
void __uniq_ptr_impl_int_test_cpp_smart_ptr_2___uniq_ptr_impl_test_cpp_smart_ptr_2_const
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this,int *param_1,__2 *param_2);
__2 * forward_test_cpp_smart_ptr______2_const__(type *param_1);
type * std_move_std__unique_ptr_int_std__default_delete_int____(unique_ptr *param_1);
void tuple_int_test_cpp_smart_ptr_2__tuple_int__test_cpp_smart_ptr_2_const_true
 (tuple_int__test_cpp_smart_ptr______2_ *this,int **param_1,__2 *param_2);
int ** forward_int___(type *param_1);
void std__Tuple_impl_1ul_test_cpp_smart_ptr_2__Tuple_impl(__2 *param_1);
void std__Head_base_0ul_int_false__Head_base_int(_Head_base_0ul_int__false_ *this,int **param_1);
void std__Head_base_1ul_test_cpp_smart_ptr_2_true__Head_base(__2 *param_1);
type * std_get_0ul_int_test_cpp_smart_ptr_2(tuple *param_1);
type * std_get_0ul_int__std__default_delete_int__(tuple *param_1);
unsigned long long __uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_deleter
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this);
int ** __get_helper_0ul_int__test_cpp_smart_ptr______2_(_Tuple_impl *param_1);
int ** std___get_helper_0ul_int__std__default_delete_int__(_Tuple_impl *param_1);
void _Tuple_impl_0ul_int_test_cpp_smart_ptr_2__M_head(_Tuple_impl *param_1);
void std__Tuple_impl_0ul_int__std__default_delete_int____M_head(_Tuple_impl *param_1);
void _Head_base_0ul_int_false__M_head(_Head_base *param_1);
_Head_base * std__Head_base_0ul_int__false__M_head(_Head_base *param_1);
type * std_get_1ul_int_test_cpp_smart_ptr_2(tuple *param_1);
void std_unique_ptr_int_std__default_delete_int__unique_ptr_std__default_delete_int__void_
 (unique_ptr_int_std__default_delete_int__ *this,int *param_1);
void std_unique_ptr_int_std__default_delete_int__operator_
 (unique_ptr_int_std__default_delete_int__ *this);
void std_default_delete_int_operator_(default_delete_int_ *this,int *param_1);
unsigned long long std_unique_ptr_int_std__default_delete_int__get
 (unique_ptr_int_std__default_delete_int__ *this);
unsigned long long std_unique_ptr_int_std__default_delete_int__get_deleter
 (unique_ptr_int_std__default_delete_int__ *this);
void std_unique_ptr_int_std__default_delete_int__unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this,unique_ptr *param_1);
void std_unique_ptr_int___std__default_delete_int____unique_ptr_int__std__default_delete_int____void_bool_
 (unique_ptr_int___std__default_delete_int____ *this,int *param_1);
unsigned long long std_unique_ptr_int___std__default_delete_int____get
 (unique_ptr_int___std__default_delete_int____ *this);
unsigned long long std_unique_ptr_int___std__default_delete_int____get_deleter
 (unique_ptr_int___std__default_delete_int____ *this);
long std_unique_ptr_int___std__default_delete_int____operator__
 (unique_ptr_int___std__default_delete_int____ *this,unsigned long param_1);
void std_unique_ptr_int_test_cpp_smart_ptr_2_unique_ptr_test_cpp_smart_ptr_2_void_
 (unique_ptr_int_test_cpp_smart_ptr______2_ *this,int *param_1,__2 *param_2);
void std_unique_ptr_int_test_cpp_smart_ptr_2_operator_
 (unique_ptr_int_test_cpp_smart_ptr______2_ *this);
unsigned long long std_unique_ptr_int_test_cpp_smart_ptr_2_get
 (unique_ptr_int_test_cpp_smart_ptr______2_ *this);
void std_unique_ptr_int_test_cpp_smart_ptr_2__unique_ptr
 (unique_ptr_int_test_cpp_smart_ptr______2_ *this);
void std_unique_ptr_int___std__default_delete_int______unique_ptr
 (unique_ptr_int___std__default_delete_int____ *this);
void std_unique_ptr_int_std__default_delete_int____unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this);
void std___uniq_ptr_data_int_std__default_delete_int__true_true____uniq_ptr_impl
 (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,int *param_1);
void std___uniq_ptr_data_int_std__default_delete_int__true_true____uniq_ptr_data
 (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,__uniq_ptr_data *param_1);
void std___uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int__ *this,__uniq_ptr_impl *param_1);
unsigned long long std___uniq_ptr_impl_int_std__default_delete_int__M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int__ *this);
unsigned long long std___uniq_ptr_impl_int_std__default_delete_int__M_deleter
 (__uniq_ptr_impl_int_std__default_delete_int__ *this);
void std___uniq_ptr_data_int_std__default_delete_int____true_true____uniq_ptr_impl
 (__uniq_ptr_data_int_std__default_delete_int____true_true_ *this,int *param_1);
type * std_move_std__tuple_int__std__default_delete_int____(tuple *param_1);
void std_tuple_int__std__default_delete_int____tuple
 (tuple_int__std__default_delete_int__ *this,tuple *param_1);
unsigned long long std___uniq_ptr_impl_int_std__default_delete_int____M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int__ *this);
void std__Tuple_impl_0ul_int__std__default_delete_int____Tuple_impl
 (_Tuple_impl_0ul_int__std__default_delete_int__ *this,_Tuple_impl *param_1);
void std__Tuple_impl_1ul_std__default_delete_int____Tuple_impl(void);
void std_tuple_int__std__default_delete_int____tuple_true_true_
 (tuple_int__std__default_delete_int__ *this);
void std__Head_base_0ul_int__false__Head_base(_Head_base_0ul_int__false_ *this);
void std__Head_base_1ul_std__default_delete_int__true__Head_base(void);
void std___uniq_ptr_impl_int_std__default_delete_int____M_deleter
 (__uniq_ptr_impl_int_std__default_delete_int__ *this);
type * std_get_1ul_int__std__default_delete_int__(tuple *param_1);
default_delete * std___get_helper_1ul_std__default_delete_int__(_Tuple_impl *param_1);
void std__Tuple_impl_1ul_std__default_delete_int____M_head(_Tuple_impl *param_1);
_Head_base * std__Head_base_1ul_std__default_delete_int__true__M_head(_Head_base *param_1);
void std___uniq_ptr_impl_int_std__default_delete_int______uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int____ *this,int *param_1);
void std_tuple_int__std__default_delete_int______tuple_true_true_
 (tuple_int__std__default_delete_int____ *this);
void _DiamondDerived(DiamondDerived *this);
void funcB(void);
void _MiddleA(MiddleA *this);
void func(void *this);
void _MiddleB(MiddleB *this);
void _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_
 (default_delete *this,void *param_2);
void SimpleClass_SimpleClass(SimpleClass *this,int param_1,char *param_2);
void SimpleClass_setValue(SimpleClass *this,int param_1);
unsigned int SimpleClass_getValue(SimpleClass *this);
unsigned long SimpleClass_compute(SimpleClass *this,int param_1);
unsigned long long SimpleClass_getClassID(void);
void LifecycleClass_LifecycleClass(LifecycleClass *this,unsigned long param_1);
unsigned int LifecycleClass_getData(LifecycleClass *this,unsigned long param_1);
unsigned int LifecycleClass_getInstanceCount(void);
void LifecycleClass__LifecycleClass(LifecycleClass *this);
void Base_Base(Base *this);
void BaseA_BaseA(BaseA *this);
void BaseA__BaseA(BaseA *this);
void BaseB_BaseB(BaseB *this);
void BaseB__BaseB(BaseB *this);
void VirtualBase_VirtualBase(VirtualBase *this);
void VirtualBase__VirtualBase(VirtualBase *this);
void MiddleA_MiddleA(MiddleA *this);
void MiddleA__MiddleA(MiddleA *this);
void MiddleB_MiddleB(MiddleB *this);
void MiddleB__MiddleB(MiddleB *this);
void RTTIBase_RTTIBase(RTTIBase *this);
void RTTIBase__RTTIBase(RTTIBase *this);
void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this);
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this);
void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this);
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this);
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;
unsigned long long RTTIDerivedA_derivedA_data(void);
unsigned long long RTTIDerivedB_derivedB_data(void);
void Derived_Derived(Derived *this,int param_1);
int Base_virtual_func(Base *this,int param_1);
int Derived_virtual_func(Derived *this,int param_1);
void Derived__Derived(Derived *this);
void Base__Base(Base *this);
void MultiDerived_MultiDerived(MultiDerived *this);
void MultiDerived__MultiDerived(MultiDerived *this);
void DiamondDerived_DiamondDerived(DiamondDerived *this);
void DiamondDerived__DiamondDerived(DiamondDerived *this);
void Point_Point(Point *this,int param_1,int param_2);
unsigned long long Point_operator_(Point *this,Point *param_1);
bool Point_operator__(Point *this,Point *param_1);
void Point_operator___(Point *this);
void Container_int__Container(Container_int_ *this);
void Container_int__push(Container_int_ *this,int param_1);
unsigned int Container_int__get(Container_int_ *this,int param_1);
unsigned int Container_int__getSize(Container_int_ *this);
void Container_double__Container(Container_double_ *this);
void Container_double__push(Container_double_ *this,double param_1);
unsigned long long Container_double__get(Container_double_ *this,int param_1);

// Decompiled by BinaryAI
// SHA256: dbd4cb8a02206feb832e816e140464fbc2915c604b18d426db08f0a8fd1f6839

// Function: _init @ 0x101988
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((int)ctx);
 return iVar1;
}

// Function: FUN_001019a0 @ 0x1019a0
void FUN_001019a0(void)
{
 (*(void *)(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x1019c0
void * operator_new__(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = operator_new__(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::std::terminate @ 0x1019d0
void std_terminate(void)
{
 abort();
}

// Function: <EXTERNAL>::strlen @ 0x1019e0
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x1019f0
void __cxa_begin_catch(void)
{
 __cxa_begin_catch();
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x101a00
void __cxa_allocate_exception(void)
{
 __cxa_allocate_exception();
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101a10
void __cxa_finalize(void)
{
 __cxa_finalize();
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x101a20
void __libc_start_main(void)
{
 __libc_start_main();
 return;
}

// Function: <EXTERNAL>::operator.delete @ 0x101a30
void operator_delete(void *param_1)
{
 operator_delete(param_1);
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x101a40
void * operator_new(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = operator_new(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::strncpy @ 0x101a50
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::__cxa_bad_typeid @ 0x101a60
void __cxa_bad_typeid(void)
{
 __cxa_bad_typeid();
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x101a70
void *__dynamic_cast(void *obj, void *t1, void *t2, int param_4)
{
 void *pvVar1;
 pvVar1 = __dynamic_cast(obj, t1, t2, param_4);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x101a80
void __cxa_atexit(void)
{
 __cxa_atexit();
 return;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x101a90
void operator_delete__(void *param_1)
{
 operator_delete__(param_1);
 return;
}

// Function: <EXTERNAL>::strcmp @ 0x101aa0
int strcmp(char *__s1,char *__s2)
{
 int iVar1;
 iVar1 = strcmp(__s1,__s2);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x101ab0
void __cxa_rethrow(void)
{
 __cxa_rethrow();
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x101ac0
void std_ios_base_Init_Init(Init *this)
{
 Init(this);
 return;
}

// Function: <EXTERNAL>::abort @ 0x101ad0
void abort(void)
{
 abort();
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x101ae0
void __cxa_end_catch(void)
{
 __cxa_end_catch();
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x101af0
void __gxx_personality_v0(void)
{
 __gxx_personality_v0();
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x101b00
void __cxa_throw(void)
{
 __cxa_throw();
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x101b10
void _Unwind_Resume(void)
{
 _Unwind_Resume();
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x101b20
void __gmon_start__(void)
{
 __gmon_start__();
 return;
}

// Function: <EXTERNAL>::printf @ 0x101b30
int printf(char *__format,...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
}

// Function: __cxx_global_var_init @ 0x101b40
void __cxx_global_var_init(void)
{
 std_ios_base_Init_Init((Init *)&std___ioinit);
 __cxa_atexit(std_ios_base_Init_Init,&std___ioinit,&__dso_handle);
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x101b80
void _GLOBAL__sub_I_5_1_cpp(void)
{
 __cxx_global_var_init();
 return;
}

// Function: _start @ 0x101bc0
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 __libc_start_main(main,param_9,0,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x101bf4
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x101c10
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x101c40
void register_tm_clones(void)
{
 return;
}

// Function: FUN_00101c7c @ 0x101c7c
void FUN_00101c7c(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize();
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x101c80
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize();
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: test_cpp_member_func @ 0x101cd4
int test_cpp_member_func(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 SimpleClass aSStack_34 [36];
 SimpleClass_SimpleClass(aSStack_34,5,"Test");
 SimpleClass_setValue(aSStack_34,10);
 iVar1 = SimpleClass_getValue(aSStack_34);
 iVar2 = SimpleClass_compute(aSStack_34,3);
 iVar3 = SimpleClass_getClassID();
 return iVar1 + iVar2 + iVar3;
}

// Function: test_cpp_constructor @ 0x101d4c
int test_cpp_constructor(void)
{
 int iVar1;
 LifecycleClass aLStack_28 [20];
 int local_14;
 local_14 = 0;
 LifecycleClass_LifecycleClass(aLStack_28,5);
 iVar1 = LifecycleClass_getData(aLStack_28,2);
 local_14 = local_14 + iVar1;
 iVar1 = LifecycleClass_getInstanceCount();
 local_14 = local_14 + iVar1;
 LifecycleClass__LifecycleClass(aLStack_28);
 iVar1 = LifecycleClass_getInstanceCount();
 return local_14 + iVar1 * 1000;
}

// Function: call_virtual_func @ 0x101dfc
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)(param_1,param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x101e30
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 Derived aDStack_28 [16];
 Base aBStack_18 [8];
 Base_Base(aBStack_18);
 Derived_Derived(aDStack_28,3);
 iVar1 = Base_virtual_func(aBStack_18,5);
 iVar2 = Derived_virtual_func(aDStack_28,5);
 iVar3 = call_virtual_func(aBStack_18,5);
 iVar4 = call_virtual_func((Base *)aDStack_28,5);
 Derived__Derived(aDStack_28);
 Base__Base(aBStack_18);
 return iVar1 + iVar2 + iVar3 + iVar4;
}

// Function: test_cpp_multiple_inheritance @ 0x101f50
int test_cpp_multiple_inheritance(void)
{
 int iVar1;
 int iVar2;
 void ***local_68;
 void **local_30;
 unsigned int local_28;
 void **local_20;
 unsigned int local_18;
 MultiDerived_MultiDerived((MultiDerived *)&local_30);
 local_28 = 100;
 local_18 = 200;
 local_68 = (void ***)0x0;
 if (&local_30 != (void ***)0x0) {
 local_68 = &local_20;
 }
 iVar1 = (**local_30)();
 iVar2 = (***local_68)();
 MultiDerived__MultiDerived((MultiDerived *)&local_30);
 return iVar1 + iVar2 + (unsigned int)(&local_30 != local_68);
}

// Function: test_cpp_diamond_inheritance @ 0x102050
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 unsigned long long *local_68;
 long local_40;
 unsigned int auStack_38 [10];
 DiamondDerived_DiamondDerived((DiamondDerived *)&local_40);
 *(unsigned int *)((long)auStack_38 + *(long *)(local_40 + -0x18)) = 0x32;
 local_68 = (unsigned long long *)0x0;
 if (&local_40 != (long *)0x0) {
 local_68 = (unsigned long long *)((long)auStack_38 + *(long *)(local_40 + -0x18) + -8);
 }
 iVar1 = (**(void **)*local_68)();
 *(unsigned int *)((long)auStack_38 + *(long *)(local_40 + -0x18)) = 100;
 iVar2 = (**(void **)*local_68)();
 DiamondDerived__DiamondDerived((DiamondDerived *)&local_40);
 return iVar1 + iVar2;
}

// Function: test_cpp_operator_overload @ 0x102154
int test_cpp_operator_overload(void)
{
 byte bVar1;
 int iVar2;
 unsigned long long local_28;
 Point aPStack_20 [8];
 Point aPStack_18 [8];
 Point_Point(aPStack_18,1,2);
 Point_Point(aPStack_20,3,4);
 local_28 = Point_operator_(aPStack_18,aPStack_20);
 bVar1 = Point_operator__(aPStack_18,aPStack_20);
 Point_operator___((Point *)&local_28);
 iVar2 = 0;
 if ((bVar1 & 1) == 0) {
 iVar2 = 10;
 }
 return (int)local_28 + local_28._4_4_ + iVar2;
}

// Function: test_cpp_template_func @ 0x1021fc
int test_cpp_template_func(void)
{
 int local_28;
 int local_24;
 double local_20;
 int local_14;
 local_14 = template_max_int_(3,7);
 local_20 = template_max_double_(2.5,1.5);
 local_24 = 10;
 local_28 = 0x14;
 template_swap_int_(&local_24,&local_28);
 return local_14 + (int)local_20 + local_24 + local_28;
}

// Function: test_cpp_template_class @ 0x102270
int test_cpp_template_class(void)
{
 double dVar1;
 Container_double_ aCStack_a0 [92];
 int local_44;
 int local_40;
 Container_int_ aCStack_3c [44];
 Container_int__Container(aCStack_3c);
 Container_int__push(aCStack_3c,10);
 Container_int__push(aCStack_3c,0x14);
 Container_int__push(aCStack_3c,0x1e);
 local_40 = Container_int__get(aCStack_3c,0);
 local_44 = Container_int__getSize(aCStack_3c);
 Container_double__Container(aCStack_a0);
 Container_double__push(aCStack_a0,3.14);
 dVar1 = (double)Container_double__get(aCStack_a0,0);
 return local_40 + local_44 + (int)dVar1;
}

// Function: test_cpp_lambda @ 0x102330
int test_cpp_lambda(void)
{
 int iVar1;
 int aVar2;
 __0 _Stack_29;
 unsigned int local_28 [2];
 unsigned int *local_20;
 unsigned int local_18;
 unsigned int local_14;
 local_14 = 10;
 local_20 = &local_18;
 local_18 = 0x14;
 local_28[0] = 10;
 iVar1 = test_cpp_lambda_1_operator((__1 *)local_28,3);
 aVar2 = test_cpp_lambda_0_operator(&_Stack_29,10,0x14);
 return iVar1 + aVar2;
}

// Function: test_cpp_lambda()::$_1::operator() @ 0x1023a0
int test_cpp_lambda_1_operator(__1 *this,int param_1)
{
 **(int **)(this + 8) = **(int **)(this + 8) + 5;
 return param_1 * *(int *)this + **(int **)(this + 8);
}

// Function: test_cpp_lambda()::$_0::operator() @ 0x1023e0
int test_cpp_lambda_0_operator(__0 *this,int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: test_cpp_exception @ 0x102404
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,0,0);
}

// Function: test_cpp_smart_ptr @ 0x102574
int test_cpp_smart_ptr(void)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 unsigned int *puVar4;
 type *ptVar5;
 unique_ptr_int_test_cpp_smart_ptr______2_ *auStack_50;
 __2 _Stack_45;
 int local_44;
 unique_ptr_int___std__default_delete_int____ *auStack_40;
 int local_34;
 unique_ptr_int_std__default_delete_int__ *auStack_30;
 unique_ptr_int_std__default_delete_int__ *auStack_18;
 piVar3 = (int *)operator_new(4);
 *piVar3 = 100;
 std_unique_ptr_int_std__default_delete_int__unique_ptr_std__default_delete_int__void_
 (auStack_18,piVar3);
 std_unique_ptr_int_std__default_delete_int__operator_(auStack_18);
 puVar4 = (unsigned int *)std_unique_ptr_int_std__default_delete_int__get(auStack_18);
 *puVar4 = 200;
 ptVar5 = std_move_std__unique_ptr_int_std__default_delete_int____((unique_ptr *)auStack_18);
 std_unique_ptr_int_std__default_delete_int__unique_ptr(auStack_30,(unique_ptr *)ptVar5);
 std_unique_ptr_int_std__default_delete_int__operator_(auStack_30);
 piVar3 = (int *)std_unique_ptr_int_std__default_delete_int__get(auStack_30);
 local_34 = *piVar3;
 piVar3 = (int *)operator_new__(0x14);
 *piVar3 = 1;
 piVar3[1] = 2;
 piVar3[2] = 3;
 piVar3[3] = 4;
 piVar3[4] = 5;
 std_unique_ptr_int___std__default_delete_int____unique_ptr_int__std__default_delete_int____void_bool_(auStack_40,piVar3);
 std_unique_ptr_int___std__default_delete_int____operator__(auStack_40,2);
 piVar3 = (int *)std_unique_ptr_int___std__default_delete_int____get(auStack_40);
 local_44 = *piVar3;
 piVar3 = (int *)operator_new(4);
 *piVar3 = 500;
 std_unique_ptr_int_test_cpp_smart_ptr_2_unique_ptr_test_cpp_smart_ptr_2_void_
 (auStack_50,piVar3,&_Stack_45);
 std_unique_ptr_int_test_cpp_smart_ptr_2_operator_(auStack_50);
 piVar3 = (int *)std_unique_ptr_int_test_cpp_smart_ptr_2_get(auStack_50);
 iVar2 = *piVar3;
 iVar1 = local_34 + local_44;
 std_unique_ptr_int_test_cpp_smart_ptr_2__unique_ptr(auStack_50);
 std_unique_ptr_int___std__default_delete_int______unique_ptr(auStack_40);
 std_unique_ptr_int_std__default_delete_int____unique_ptr(auStack_30);
 std_unique_ptr_int_std__default_delete_int____unique_ptr(auStack_18);
 return iVar1 + iVar2;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::unique_ptr<test_cpp_smart_ptr()::$_2,void> @ 0x10275c
void
std_unique_ptr_int_test_cpp_smart_ptr_2_unique_ptr_test_cpp_smart_ptr_2_void
 (unique_ptr_int_test_cpp_smart_ptr______2_ *this,int *param_1,__2 *param_2)
{
 __uniq_ptr_data_int_test_cpp_smart_ptr_2_true_false___uniq_ptr_impl_test_cpp_smart_ptr_2_const
 ((__uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ *)this,param_1,param_2);
 return;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::operator* @ 0x102798
void
std_unique_ptr_int_test_cpp_smart_ptr_2_operator
 (unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
 get(this);
 return;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::~unique_ptr @ 0x1027cc
void
std_unique_ptr_int_test_cpp_smart_ptr_2__unique_ptr
 (unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
 int **ppiVar1;
 __2 *this_00;
 int **ppiVar2;
 ppiVar1 = (int **)__uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_ptr
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (__2 *)get_deleter(this);
 ppiVar2 = (int **)move_int___(ppiVar1);
 test_cpp_smart_ptr_2_operator(this_00,*ppiVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}

// Function: test_cpp_rtti @ 0x10284c
int test_cpp_rtti(void)
{
 int iVar1;
 long *this;
 long *this_00;
 unsigned long uVar2;
 char *__s;
 size_t sVar3;
 long local_80;
 long local_70;
 int local_24;
 this = (long *)operator_new(8);
 *this = 0;
 RTTIDerivedA_RTTIDerivedA((RTTIDerivedA *)this);
 this_00 = (long *)operator_new(8);
 *this_00 = 0;
 RTTIDerivedB_RTTIDerivedB((RTTIDerivedB *)this_00);
 local_24 = 0;
 if (this == (long *)0x0) {
 __cxa_bad_typeid();
 }
 uVar2 = std_type_info_operator__
 (*(type_info **)(*this + -8),(type_info *)&RTTIDerivedA_typeinfo);
 if ((uVar2 & 1) != 0) {
 local_24 = 10;
 }
 if (this_00 == (long *)0x0) {
 __cxa_bad_typeid();
 }
 uVar2 = std_type_info_operator__
 (*(type_info **)(*this_00 + -8),(type_info *)&RTTIDerivedB_typeinfo);
 if ((uVar2 & 1) != 0) {
 local_24 = local_24 + 0x14;
 }
 if (this == (long *)0x0) {
 local_70 = 0;
 }
 else {
 local_70 = __dynamic_cast(this,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 }
 if (local_70 != 0) {
 iVar1 = (int)RTTIDerivedA_derivedA_data();
 local_24 = local_24 + iVar1;
 }
 if (this_00 == (long *)0x0) {
 local_80 = 0;
 }
 else {
 local_80 = __dynamic_cast(this_00,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 }
 if (local_80 != 0) {
 iVar1 = (int)RTTIDerivedB_derivedB_data();
 local_24 = local_24 + iVar1;
 }
 if (this == (long *)0x0) {
 __cxa_bad_typeid();
 }
 __s = (char *)std_type_info_name(*(type_info **)(*this + -8));
 sVar3 = strlen(__s);
 if (this != (long *)0x0) {
 (**(void **)(*this + 8))();
 }
 if (this_00 != (long *)0x0) {
 (**(void **)(*this_00 + 8))();
 }
 return local_24 + (int)sVar3;
}

// Function: test_cpp_oo_features @ 0x102a84
int test_cpp_oo_features(void)
{
 int iVar1;
 unsigned long uVar2;
 printf(&DAT_00104bd5);
 uVar2 = test_cpp_member_func();
 printf(&DAT_00104bfa,uVar2 & 0xffffffff);
 uVar2 = test_cpp_constructor();
 printf(&DAT_00104c18,uVar2 & 0xffffffff);
 uVar2 = test_cpp_virtual_func();
 printf(&DAT_00104c34,uVar2 & 0xffffffff);
 uVar2 = test_cpp_multiple_inheritance();
 printf(&DAT_00104c50,uVar2 & 0xffffffff);
 uVar2 = test_cpp_diamond_inheritance();
 printf(&DAT_00104c6c,uVar2 & 0xffffffff);
 uVar2 = test_cpp_operator_overload();
 printf(&DAT_00104c89,uVar2 & 0xffffffff);
 uVar2 = test_cpp_template_func();
 printf(&DAT_00104ca5,uVar2 & 0xffffffff);
 uVar2 = test_cpp_template_class();
 printf(&DAT_00104cc1,uVar2 & 0xffffffff);
 uVar2 = test_cpp_lambda();
 printf(&DAT_00104cdd,uVar2 & 0xffffffff);
 test_cpp_exception();
 printf(&DAT_00104cf9,0);
 uVar2 = test_cpp_smart_ptr();
 printf(&DAT_00104d16,uVar2 & 0xffffffff);
 uVar2 = test_cpp_rtti();
 iVar1 = printf(&DAT_00104d33,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: main @ 0x102b90
unsigned int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: std___uniq_ptr_data_int_test_cpp_smart_ptr_2_true_false___uniq_ptr_impl_test_cpp_smart_ptr_2_const @ 0x102bbc
void
std__uniq_ptr_data_int_test_cpp_smart_ptr_2_true_false___uniq_ptr_impl_test_cpp_smart_ptr_2_const
 (__uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ *this,int *param_1,__2 *param_2
 )
{
 __uniq_ptr_impl_int_test_cpp_smart_ptr_2___uniq_ptr_impl_test_cpp_smart_ptr_2_const
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this,param_1,param_2);
 return;
}

// Function: std___uniq_ptr_impl_int_test_cpp_smart_ptr_2___uniq_ptr_impl_test_cpp_smart_ptr_2_const @ 0x102bf0
void
std__uniq_ptr_impl_int_test_cpp_smart_ptr_2___uniq_ptr_impl_test_cpp_smart_ptr_2_const
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this,int *param_1,__2 *param_2)
{
 __2 *p_Var1;
 int *local_20;
 __uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *local_18;
 local_20 = param_1;
 local_18 = this;
 p_Var1 = forward_test_cpp_smart_ptr______2_const__((type *)param_2);
 tuple_int_test_cpp_smart_ptr_2__tuple_int__test_cpp_smart_ptr_2_const_true
 ((tuple_int__test_cpp_smart_ptr______2_ *)this,&local_20,p_Var1);
 return;
}

// Function: std_forward_test_cpp_smart_ptr_2_const @ 0x102c3c
__2 * std_forward_test_cpp_smart_ptr_2_const(type *param_1)
{
 return (__2 *)param_1;
}

// Function: std_tuple_int_test_cpp_smart_ptr_2__tuple_int__test_cpp_smart_ptr_2_const_true @ 0x102c50
void
std_tuple_int_test_cpp_smart_ptr_2__tuple_int__test_cpp_smart_ptr_2_const_true
 (tuple_int__test_cpp_smart_ptr______2_ *this,int **param_1,__2 *param_2)
{
 int **ppiVar1;
 __2 *p_Var2;
 ppiVar1 = forward_int___((type *)param_1);
 p_Var2 = forward_test_cpp_smart_ptr______2_const__((type *)param_2);
 _Tuple_impl_0ul_int__test_cpp_smart_ptr______2_
 _Tuple_impl_int__test_cpp_smart_ptr_2_const_void
 ((_Tuple_impl_0ul_int__test_cpp_smart_ptr______2_ *)this,ppiVar1,p_Var2);
 return;
}

// Function: std__Tuple_impl_0ul_int_test_cpp_smart_ptr_2__Tuple_impl_int__test_cpp_smart_ptr_2_const_void @ 0x102ca8
void
std__Tuple_impl_0ul_int_test_cpp_smart_ptr_2__Tuple_impl_int__test_cpp_smart_ptr_2_const_void
 (_Tuple_impl_0ul_int__test_cpp_smart_ptr______2_ *this,int **param_1,__2 *param_2)
{
 int **ppiVar1;
 forward_test_cpp_smart_ptr______2_const__((type *)param_2);
 std__Tuple_impl_1ul_test_cpp_smart_ptr_2__Tuple_impl((__2 *)this);
 ppiVar1 = forward_int___((type *)param_1);
 std__Head_base_0ul_int_false__Head_base_int((_Head_base_0ul_int__false_ *)this,ppiVar1);
 return;
}

// Function: std__Tuple_impl_1ul_test_cpp_smart_ptr_2__Tuple_impl @ 0x102cfc
void std__Tuple_impl_1ul_test_cpp_smart_ptr_2__Tuple_impl(__2 *param_1)
{
 std__Head_base_1ul_test_cpp_smart_ptr_2_true__Head_base(param_1);
 return;
}

// Function: std__Head_base_1ul_test_cpp_smart_ptr_2_true__Head_base @ 0x102d28
void std__Head_base_1ul_test_cpp_smart_ptr_2_true__Head_base(__2 *param_1)
{
 return;
}

// Function: std___uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_ptr @ 0x102d3c
unsigned long long
std__uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_ptr
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
 return (unsigned long long)std_get_0ul_int_test_cpp_smart_ptr_2((tuple *)this);
}

// Function: std_unique_ptr_int_test_cpp_smart_ptr_2_get_deleter @ 0x102d60
unsigned long long
std_unique_ptr_int_test_cpp_smart_ptr_2_get_deleter
 (unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
 unsigned long long uVar1;
 uVar1 = __uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_deleter
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
 return uVar1;
}

// Function: test_cpp_smart_ptr_2_operator @ 0x102d94
void test_cpp_smart_ptr_2_operator(__2 *this,int *param_1)
{
 *param_1 = -1;
 if (param_1 != (int *)0x0) {
 operator_delete(param_1);
 }
 return;
}

// Function: std_get_0ul_int_test_cpp_smart_ptr_2 @ 0x102ddc
type * std_get_0ul_int_test_cpp_smart_ptr_2(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0ul_int__test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___get_helper_0ul_int_test_cpp_smart_ptr_2 @ 0x102e00
int ** std__get_helper_0ul_int_test_cpp_smart_ptr_2(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0ul_int_test_cpp_smart_ptr_2__M_head(param_1);
 return ppiVar1;
}

// Function: std__Tuple_impl_0ul_int_test_cpp_smart_ptr_2__M_head @ 0x102e24
void std__Tuple_impl_0ul_int_test_cpp_smart_ptr_2__M_head(_Tuple_impl *param_1)
{
 _Head_base_0ul_int_false__M_head((_Head_base *)param_1);
 return;
}

// Function: std___uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_deleter @ 0x102e48
unsigned long long
std__uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_deleter
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
 return (unsigned long long)std_get_1ul_int_test_cpp_smart_ptr_2((tuple *)this);
}

// Function: std_get_1ul_int_test_cpp_smart_ptr_2 @ 0x102e6c
type * std_get_1ul_int_test_cpp_smart_ptr_2(tuple *param_1)
{
 __2 *p_Var1;
 p_Var1 = __get_helper_1ul_test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
 return (type *)p_Var1;
}

// Function: std___get_helper_1ul_test_cpp_smart_ptr_2 @ 0x102e90
__2 * std__get_helper_1ul_test_cpp_smart_ptr_2(_Tuple_impl *param_1)
{
 __2 *p_Var1;
 p_Var1 = (__2 *)_Tuple_impl_1ul_test_cpp_smart_ptr_2__M_head(param_1);
 return p_Var1;
}

// Function: std__Tuple_impl_1ul_test_cpp_smart_ptr_2__M_head @ 0x102eb4
__2 *std__Tuple_impl_1ul_test_cpp_smart_ptr_2__M_head(_Tuple_impl *param_1)
{
 return _Head_base_1ul_test_cpp_smart_ptr_2_true__M_head((_Head_base *)param_1);
}

// Function: std__Head_base_1ul_test_cpp_smart_ptr_2_true__M_head @ 0x102ed8
_Head_base * std__Head_base_1ul_test_cpp_smart_ptr_2_true__M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std_unique_ptr_int_test_cpp_smart_ptr_2_get @ 0x102eec
unsigned long long
std_unique_ptr_int_test_cpp_smart_ptr_2_get(unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
 unsigned long long uVar1;
 uVar1 = __uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_ptr
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
 return uVar1;
}

// Function: std___uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_ptr @ 0x102f20
unsigned long long
std__uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_ptr
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)std_get_0ul_int_test_cpp_smart_ptr_2((tuple *)this);
 return *puVar1;
}

// Function: std_get_0ul_int_test_cpp_smart_ptr_2 @ 0x102f48
type * std_get_0ul_int_test_cpp_smart_ptr_2(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0ul_int__test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___get_helper_0ul_int_test_cpp_smart_ptr_2 @ 0x102f6c
int ** std__get_helper_0ul_int_test_cpp_smart_ptr_2(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0ul_int_test_cpp_smart_ptr_2__M_head(param_1);
 return ppiVar1;
}

// Function: std__Tuple_impl_0ul_int_test_cpp_smart_ptr_2__M_head @ 0x102f90
void std__Tuple_impl_0ul_int_test_cpp_smart_ptr_2__M_head(_Tuple_impl *param_1)
{
 _Head_base_0ul_int_false__M_head((_Head_base *)param_1);
 return;
}

// Function: SimpleClass_SimpleClass @ 0x102fb4
void __thiscall SimpleClass_SimpleClass(SimpleClass *this,int param_1,char *param_2)
{
 *(int *)this = param_1;
 strncpy((char *)(this + 4),param_2,0x1f);
 this[0x23] = (SimpleClass)0x0;
 return;
}

// Function: SimpleClass_setValue @ 0x103000
void __thiscall SimpleClass_setValue(SimpleClass *this,int param_1)
{
 *(int *)this = param_1;
 return;
}

// Function: SimpleClass_getValue @ 0x103020
unsigned int __thiscall SimpleClass_getValue(SimpleClass *this)
{
 return *(unsigned int *)this;
}

// Function: SimpleClass_compute @ 0x103038
unsigned long __thiscall SimpleClass_compute(SimpleClass *this,int param_1)
{
 int iVar1;
 size_t sVar2;
 iVar1 = *(int *)this;
 sVar2 = strlen((char *)(this + 4));
 return sVar2 + (long)(iVar1 * param_1) & 0xffffffff;
}

// Function: SimpleClass_getClassID @ 0x103080
unsigned long long SimpleClass_getClassID(void)
{
 return 0x1234;
}

// Function: LifecycleClass_LifecycleClass @ 0x103088
void __thiscall LifecycleClass_LifecycleClass(LifecycleClass *this,unsigned long param_1)
{
 char auVar1 [16];
 void *pvVar2;
 unsigned long uVar3;
 unsigned long local_28;
 *(unsigned long *)(this + 8) = param_1;
 auVar1._8_8_ = 0;
 auVar1._0_8_ = param_1;
 uVar3 = param_1 * 4;
 if (SUB168(auVar1 * ZEXT816(4),8) != 0) {
 uVar3 = 0xffffffffffffffff;
 }
 pvVar2 = operator_new__(uVar3);
 *(void **)this = pvVar2;
 for (local_28 = 0; local_28 < param_1; local_28 = local_28 + 1) {
 *(int *)(*(long *)this + local_28 * 4) = (int)local_28 * 10;
 }
 instance_count = instance_count + 1;
 return;
}

// Function: LifecycleClass_getData @ 0x103138
unsigned int __thiscall LifecycleClass_getData(LifecycleClass *this,unsigned long param_1)
{
 unsigned int local_1c;
 if (param_1 < *(unsigned long *)(this + 8)) {
 local_1c = *(unsigned int *)(*(long *)this + param_1 * 4);
 }
 else {
 local_1c = 0xffffffff;
 }
 return local_1c;
}

// Function: LifecycleClass_getInstanceCount @ 0x103190
unsigned int LifecycleClass_getInstanceCount(void)
{
 return instance_count;
}

// Function: LifecycleClass__LifecycleClass @ 0x10319c
void __thiscall LifecycleClass__LifecycleClass(LifecycleClass *this)
{
 if (*(void **)this != (void *)0x0) {
 operator_delete__(*(void **)this);
 }
 instance_count = instance_count + -1;
 return;
}

// Function: Base_Base @ 0x1031e8
void __thiscall Base_Base(Base *this)
{
 *(void ***)this = &PTR_virtual_func_00117858;
 return;
}

// Function: Derived_Derived @ 0x10320c
void __thiscall Derived_Derived(Derived *this,int param_1)
{
 Base_Base((Base *)this);
 *(void ***)this = &PTR_virtual_func_00117898;
 *(int *)(this + 8) = param_1;
 return;
}

// Function: Base_virtual_func @ 0x10325c
int __thiscall Base_virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Derived_virtual_func @ 0x103278
int __thiscall Derived_virtual_func(Derived *this,int param_1)
{
 return param_1 * *(int *)(this + 8);
}

// Function: Derived__Derived @ 0x10329c
void __thiscall Derived__Derived(Derived *this)
{
 Base__Base((Base *)this);
 return;
}

// Function: Base__Base @ 0x1032c0
void __thiscall Base__Base(Base *this)
{
 return;
}

// Function: MultiDerived_MultiDerived @ 0x1032d0
void __thiscall MultiDerived_MultiDerived(MultiDerived *this)
{
 BaseA_BaseA((BaseA *)this);
 BaseB_BaseB((BaseB *)(this + 0x10));
 *(void ***)this = &PTR_funcA_001178e0;
 *(void ***)(this + 0x10) = &PTR_funcB_00117910;
 return;
}

// Function: MultiDerived__MultiDerived @ 0x103330
void __thiscall MultiDerived__MultiDerived(MultiDerived *this)
{
 BaseB__BaseB((BaseB *)(this + 0x10));
 BaseA__BaseA((BaseA *)this);
 return;
}

// Function: DiamondDerived_DiamondDerived @ 0x103364
void __thiscall DiamondDerived_DiamondDerived(DiamondDerived *this)
{
 VirtualBase_VirtualBase((VirtualBase *)(this + 0x20));
 MiddleA_MiddleA((MiddleA *)this);
 MiddleB_MiddleB((MiddleB *)(this + 0x10));
 *(void ***)this = &PTR_func_001179e8;
 *(void ***)(this + 0x20) = &PTR_func_00117a50;
 *(void ***)(this + 0x10) = &PTR_func_00117a18;
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x103400
void __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this);
 VirtualBase__VirtualBase((VirtualBase *)(this + 0x20));
 return;
}

// Function: Point_Point @ 0x10343c
void __thiscall Point_Point(Point *this,int param_1,int param_2)
{
 *(int *)this = param_1;
 *(int *)(this + 4) = param_2;
 return;
}

// Function: Point_operator_ @ 0x103468
unsigned long long __thiscall Point_operator_(Point *this,Point *param_1)
{
 unsigned long long local_18;
 Point((Point *)&local_18,*(int *)this + *(int *)param_1,*(int *)(this + 4) + *(int *)(param_1 + 4)
 );
 return local_18;
}

// Function: Point_operator__ @ 0x1034b8
bool __thiscall Point_operator__(Point *this,Point *param_1)
{
 bool bVar1;
 bVar1 = false;
 if (*(int *)this == *(int *)param_1) {
 bVar1 = *(int *)(this + 4) == *(int *)(param_1 + 4);
 }
 return bVar1;
}

// Function: Point_operator___ @ 0x10351c
void __thiscall Point_operator___(Point *this)
{
 *(int *)this = *(int *)this + 1;
 *(int *)(this + 4) = *(int *)(this + 4) + 1;
 return;
}

// Function: template_max<int> @ 0x103548
int template_max_int_(int param_1,int param_2)
{
 int local_c;
 local_c = param_2;
 if (param_2 < param_1) {
 local_c = param_1;
 }
 return local_c;
}

// Function: template_max<double> @ 0x10358c
double template_max_double_(double param_1,double param_2)
{
 double local_18;
 local_18 = param_2;
 if (param_2 < param_1) {
 local_18 = param_1;
 }
 return local_18;
}

// Function: template_swap<int> @ 0x1035d4
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container_int__Container @ 0x103610
void __thiscall Container_int__Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container_int__push @ 0x103628
void __thiscall Container_int__push(Container_int_ *this,int param_1)
{
 int iVar1;
 if (*(int *)(this + 0x28) < 10) {
 iVar1 = *(int *)(this + 0x28);
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int__get @ 0x103674
unsigned int __thiscall Container_int__get(Container_int_ *this,int param_1)
{
 unsigned int local_4;
 if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
 local_4 = 0;
 }
 else {
 local_4 = *(unsigned int *)(this + (long)param_1 * 4);
 }
 return local_4;
}

// Function: Container_int__getSize @ 0x1036d4
unsigned int __thiscall Container_int__getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container_double__Container @ 0x1036ec
void __thiscall Container_double__Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container_double__push @ 0x103704
void __thiscall Container_double__push(Container_double_ *this,double param_1)
{
 int iVar1;
 if (*(int *)(this + 0x50) < 10) {
 iVar1 = *(int *)(this + 0x50);
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container_double__get @ 0x103750
unsigned long long __thiscall Container_double__get(Container_double_ *this,int param_1)
{
 unsigned long long local_8;
 if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
 local_8 = 0;
 }
 else {
 local_8 = *(unsigned long long *)(this + (long)param_1 * 8);
 }
 return local_8;
}

// Function: Container_double__getSize @ 0x1037b4
unsigned int __thiscall Container_double__getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: std_unique_ptr_int_std__default_delete_int__unique_ptr_std__default_delete_int__void_ @ 0x1037cc
void __thiscall
std_unique_ptr_int_std__default_delete_int__unique_ptr_std__default_delete_int__void_
 (unique_ptr_int_std__default_delete_int__ *this,int *param_1)
{
 std___uniq_ptr_data_int_std__default_delete_int__true_true____uniq_ptr_impl
 ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this,param_1);
 return;
}

// Function: std_unique_ptr_int_std__default_delete_int__operator_ @ 0x103800
void __thiscall
std_unique_ptr_int_std__default_delete_int__operator_
 (unique_ptr_int_std__default_delete_int__ *this)
{
 std_unique_ptr_int_std__default_delete_int__get(this);
 return;
}

// Function: std::move<std::unique_ptr<int,std::default_delete<int>>&> @ 0x103834
type * std_move_std__unique_ptr_int_std__default_delete_int____(unique_ptr *param_1)
{
 return (type *)param_1;
}

// Function: std_unique_ptr_int_std__default_delete_int__unique_ptr @ 0x103848
void __thiscall
std_unique_ptr_int_std__default_delete_int__unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this,unique_ptr *param_1)
{
 std___uniq_ptr_data_int_std__default_delete_int__true_true____uniq_ptr_data
 ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this,
 (__uniq_ptr_data *)param_1);
 return;
}

// Function: std_unique_ptr_int___std__default_delete_int____unique_ptr_int__std__default_delete_int____void_bool_ @ 0x103874
void __thiscall
std_unique_ptr_int___std__default_delete_int____unique_ptr_int__std__default_delete_int____void_bool_
 (unique_ptr_int___std__default_delete_int____ *this,int *param_1)
{
 std___uniq_ptr_data_int_std__default_delete_int____true_true____uniq_ptr_impl
 ((__uniq_ptr_data_int_std__default_delete_int____true_true_ *)this,param_1);
 return;
}

// Function: std_unique_ptr_int___std__default_delete_int____operator__ @ 0x1038a8
long __thiscall
std_unique_ptr_int___std__default_delete_int____operator__
 (unique_ptr_int___std__default_delete_int____ *this,unsigned long param_1)
{
 long lVar1;
 lVar1 = std_unique_ptr_int___std__default_delete_int____get(this);
 return lVar1 + param_1 * 4;
}

// Function: std_unique_ptr_int___std__default_delete_int______unique_ptr @ 0x1038e8
void __thiscall
std_unique_ptr_int___std__default_delete_int______unique_ptr
 (unique_ptr_int___std__default_delete_int____ *this)
{
 long *plVar1;
 unsigned long long uVar2;
 plVar1 = (long *)std___uniq_ptr_impl_int_std__default_delete_int____M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 if (*plVar1 != 0) {
 uVar2 = std_unique_ptr_int___std__default_delete_int____get_deleter(this);
 _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_
 ((default_delete *)uVar2,*plVar1);
 }
 *plVar1 = 0;
 return;
}

// Function: std_unique_ptr_int_std__default_delete_int____unique_ptr @ 0x10394c
void __thiscall
std_unique_ptr_int_std__default_delete_int____unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this)
{
 int **ppiVar1;
 default_delete_int_ *this_00;
 int **ppiVar2;
 ppiVar1 = (int **)std___uniq_ptr_impl_int_std__default_delete_int__M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (default_delete_int_ *)std_unique_ptr_int_std__default_delete_int__get_deleter(this);
 ppiVar2 = (int **)std_move_int___(ppiVar1);
 std_default_delete_int_operator_(this_00,*ppiVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}

// Function: RTTIDerivedA_RTTIDerivedA @ 0x1039c0
void __thiscall RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase_RTTIBase((RTTIBase *)this);
 *(void ***)this = &PTR__RTTIDerivedA_00117d30;
 return;
}

// Function: RTTIDerivedB_RTTIDerivedB @ 0x103a04
void __thiscall RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase_RTTIBase((RTTIBase *)this);
 *(void ***)this = &PTR__RTTIDerivedB_00117d80;
 return;
}

// Function: std_type_info_operator__ @ 0x103a48
bool __thiscall std_type_info_operator__(type_info *this,type_info *param_1)
{
 bool bVar1;
 int iVar2;
 bVar1 = true;
 if ((*(long *)(this + 8) != *(long *)(param_1 + 8)) &&
 (bVar1 = false, **(char **)(this + 8) != '*')) {
 iVar2 = strcmp(*(char **)(this + 8),*(char **)(param_1 + 8));
 bVar1 = iVar2 == 0;
 }
 return bVar1;
}

// Function: RTTIDerivedA_derivedA_data @ 0x103ae8
unsigned long long RTTIDerivedA_derivedA_data(void)
{
 return 100;
}

// Function: RTTIDerivedB_derivedB_data @ 0x103afc
unsigned long long RTTIDerivedB_derivedB_data(void)
{
 return 200;
}

// Function: std_type_info_name @ 0x103b10
long __thiscall std_type_info_name(type_info *this)
{
 long local_18;
 if (**(char **)(this + 8) == '*') {
 local_18 = *(long *)(this + 8) + 1;
 }
 else {
 local_18 = *(long *)(this + 8);
 }
 return local_18;
}

// Function: Base_getName @ 0x103b64
char * Base_getName(void)
{
 return &DAT_00104d51;
}

// Function: Derived_getName @ 0x103bac
char * Derived_getName(void)
{
 return "Derived";
}

// Function: BaseA_BaseA @ 0x103bf4
void __thiscall BaseA_BaseA(BaseA *this)
{
 *(void ***)this = &PTR_funcA_00117990;
 return;
}

// Function: BaseB_BaseB @ 0x103c18
void __thiscall BaseB_BaseB(BaseB *this)
{
 *(void ***)this = &PTR_funcB_001179b8;
 return;
}

// Function: MultiDerived_funcA @ 0x103c3c
unsigned long long MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived_funcB @ 0x103c80
unsigned long long MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived_funcB_ @ 0x103c94
void __thiscall MultiDerived_funcB_(MultiDerived *this)
{
 funcB();
 return;
}

// Function: BaseA_funcA @ 0x103cdc
unsigned long long BaseA_funcA(void)
{
 return 10;
}

// Function: BaseB_funcB @ 0x103d30
unsigned long long BaseB_funcB(void)
{
 return 0x14;
}

// Function: VirtualBase_VirtualBase @ 0x103d84
void __thiscall VirtualBase_VirtualBase(VirtualBase *this)
{
 *(void ***)this = &PTR_func_00117c18;
 return;
}

// Function: MiddleA_MiddleA @ 0x103da8
void __thiscall MiddleA_MiddleA(MiddleA *this)
{
 unsigned long long *in_x1;
 *(unsigned long long *)this = *in_x1;
 *(unsigned long long *)(this + *(long *)(*(long *)this + -0x18)) = in_x1[1];
 return;
}

// Function: MiddleB_MiddleB @ 0x103ddc
void __thiscall MiddleB_MiddleB(MiddleB *this)
{
 unsigned long long *in_x1;
 *(unsigned long long *)this = *in_x1;
 *(unsigned long long *)(this + *(long *)(*(long *)this + -0x18)) = in_x1[1];
 return;
}

// Function: MiddleA_func @ 0x103e10
int __thiscall MiddleA_func(MiddleA *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleA_func_ @ 0x103ea4
void __thiscall MiddleA_func_(MiddleA *this)
{
 func(this + *(long *)(*(long *)this + -0x18));
 return;
}

// Function: MiddleB_func @ 0x103f04
int __thiscall MiddleB_func(MiddleB *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: MiddleB_func_ @ 0x103f98
void __thiscall MiddleB_func_(MiddleB *this)
{
 func(this + *(long *)(*(long *)this + -0x18));
 return;
}

// Function: DiamondDerived_func @ 0x103ff8
int __thiscall DiamondDerived_func(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived_func_ @ 0x104050
void __thiscall DiamondDerived_func_(DiamondDerived *this)
{
 func(this + -0x10);
 return;
}

// Function: DiamondDerived_func @ 0x104098
void __thiscall DiamondDerived_func(DiamondDerived *this)
{
 func(this + *(long *)(*(long *)this + -0x18));
 return;
}

// Function: VirtualBase_func @ 0x1040f8
unsigned long long VirtualBase_func(void)
{
 return 100;
}

// Function: VirtualBase__VirtualBase @ 0x10410c
void __thiscall VirtualBase__VirtualBase(VirtualBase *this)
{
 return;
}

// Function: std___uniq_ptr_data_int_std__default_delete_int__true_true____uniq_ptr_data @ 0x1041c0
void __thiscall
std___uniq_ptr_data_int_std__default_delete_int__true_true____uniq_ptr_data
 (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,__uniq_ptr_data *param_1)
{
 std___uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,(__uniq_ptr_impl *)param_1);
 return;
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl @ 0x1041ec
void __thiscall
std___uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int__ *this,__uniq_ptr_impl *param_1)
{
 type *ptVar1;
 unsigned long long *puVar2;
 ptVar1 = std_move_std__tuple_int__std__default_delete_int____((tuple *)param_1);
 std_tuple_int__std__default_delete_int____tuple
 ((tuple_int__std__default_delete_int__ *)this,(tuple *)ptVar1);
 puVar2 = (unsigned long long *)std___uniq_ptr_impl_int_std__default_delete_int__M_ptr((__uniq_ptr_impl_int_std__default_delete_int__ *)param_1);
 *puVar2 = 0;
 return;
}

// Function: std_move_std__tuple_int__std__default_delete_int____ @ 0x104244
type * std_move_std__tuple_int__std__default_delete_int____(tuple *param_1)
{
 return (type *)param_1;
}

// Function: std_tuple_int__std__default_delete_int____tuple @ 0x104258
void __thiscall
std_tuple_int__std__default_delete_int____tuple
 (tuple_int__std__default_delete_int__ *this,tuple *param_1)
{
 std__Tuple_impl_0ul_int__std__default_delete_int____Tuple_impl
 ((_Tuple_impl_0ul_int__std__default_delete_int__ *)this,(_Tuple_impl *)param_1);
 return;
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int__M_ptr @ 0x104284
unsigned long long __thiscall
std___uniq_ptr_impl_int_std__default_delete_int__M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)std_get_0ul_int__std__default_delete_int__((tuple *)this);
 return *puVar1;
}

// Function: __clang_call_terminate @ 0x1042a8
void __clang_call_terminate(void)
{
 __cxa_begin_catch();
 std_terminate();
}

// Function: std__Tuple_impl_0ul_int__std__default_delete_int____Tuple_impl @ 0x1042b4
void __thiscall
std__Tuple_impl_0ul_int__std__default_delete_int____Tuple_impl
 (_Tuple_impl_0ul_int__std__default_delete_int__ *this,_Tuple_impl *param_1)
{
 std__Tuple_impl_1ul_std__default_delete_int____Tuple_impl((_Tuple_impl *)this);
 *(unsigned long long *)this = *(unsigned long long *)param_1;
 return;
}

// Function: std__Tuple_impl_1ul_std__default_delete_int____Tuple_impl @ 0x1042f4
void std__Tuple_impl_1ul_std__default_delete_int____Tuple_impl(_Tuple_impl *param_1)
{
 return;
}



// Function: std__Head_base_0ul_int__false__M_head @ 0x104374
_Head_base * std__Head_base_0ul_int__false__M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: RTTIBase_RTTIBase @ 0x104388
void __thiscall RTTIBase_RTTIBase(RTTIBase *this)
{
 *(void ***)this = &PTR__RTTIBase_00117d58;
 return;
}

// Function: RTTIDerivedA_getType @ 0x104400
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase_getType @ 0x104454
unsigned long long RTTIBase_getType(void)
{
 return 0;
}

// Function: RTTIDerivedB_getType @ 0x1044bc
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: std___uniq_ptr_data_int_std__default_delete_int__true_true____uniq_ptr_impl @ 0x1044d0
void __thiscall
std___uniq_ptr_data_int_std__default_delete_int__true_true____uniq_ptr_impl
 (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,int *param_1)
{
 std___uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,param_1);
 return;
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl @ 0x1044fc
void __thiscall
std___uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int__ *this,int *param_1)
{
 int **ppiVar1;
 std_tuple_int__std__default_delete_int____tuple_true_true_
 ((tuple_int__std__default_delete_int__ *)this);
 ppiVar1 = (int **)std___uniq_ptr_impl_int_std__default_delete_int__M_ptr(this);
 *ppiVar1 = param_1;
 return;
}

// Function: std_tuple_int__std__default_delete_int____tuple_true_true_ @ 0x104540
void __thiscall
std_tuple_int__std__default_delete_int____tuple_true_true_
 (tuple_int__std__default_delete_int__ *this)
{
 std__Tuple_impl_0ul_int__std__default_delete_int____Tuple_impl
 ((_Tuple_impl_0ul_int__std__default_delete_int__ *)this);
 return;
}

// Function: std__Tuple_impl_0ul_int__std__default_delete_int____Tuple_impl @ 0x10456c
void __thiscall
std__Tuple_impl_0ul_int__std__default_delete_int____Tuple_impl
 (_Tuple_impl_0ul_int__std__default_delete_int__ *this)
{
 std__Tuple_impl_1ul_std__default_delete_int____Tuple_impl();
 std__Head_base_0ul_int__false__Head_base((_Head_base_0ul_int__false_ *)this);
 return;
}

// Function: std__Tuple_impl_1ul_std__default_delete_int____Tuple_impl @ 0x10459c
void std__Tuple_impl_1ul_std__default_delete_int____Tuple_impl(void)
{
 std__Head_base_1ul_std__default_delete_int__true__Head_base();
 return;
}

// Function: std__Head_base_0ul_int__false__Head_base @ 0x1045c0
void __thiscall std__Head_base_0ul_int__false__Head_base(_Head_base_0ul_int__false_ *this)
{
 *(unsigned long long *)this = 0;
 return;
}

// Function: std__Head_base_1ul_std__default_delete_int__true__Head_base @ 0x1045d8
void std__Head_base_1ul_std__default_delete_int__true__Head_base(void)
{
 return;
}

// Function: std_unique_ptr_int_std__default_delete_int__get_deleter @ 0x1045e8
unsigned long long __thiscall
std_unique_ptr_int_std__default_delete_int__get_deleter
 (unique_ptr_int_std__default_delete_int__ *this)
{
 unsigned long long uVar1;
 uVar1 = std___uniq_ptr_impl_int_std__default_delete_int__M_deleter
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 return uVar1;
}

// Function: std_default_delete_int_operator_ @ 0x10461c
void __thiscall std_default_delete_int_operator_(default_delete_int_ *this,int *param_1)
{
 if (param_1 != (int *)0x0) {
 operator_delete(param_1);
 }
 return;
}

// Function: std_move_int___ @ 0x104658
type * std_move_int___(int **param_1)
{
 return (type *)param_1;
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int__M_deleter @ 0x10466c
unsigned long long __thiscall
std___uniq_ptr_impl_int_std__default_delete_int__M_deleter
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 unsigned long long uVar1;
 uVar1 = std_get_1ul_int__std__default_delete_int__((tuple *)this);
 return uVar1;
}

// Function: std_get_1ul_int__std__default_delete_int__ @ 0x104690
type * std_get_1ul_int__std__default_delete_int__(tuple *param_1)
{
 default_delete *pdVar1;
 pdVar1 = std___get_helper_1ul_std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}

// Function: std___get_helper_1ul_std__default_delete_int__ @ 0x1046b4
default_delete * std___get_helper_1ul_std__default_delete_int__(_Tuple_impl *param_1)
{
 default_delete *pdVar1;
 pdVar1 = (default_delete *)std__Tuple_impl_1ul_std__default_delete_int____M_head(param_1);
 return pdVar1;
}

// Function: std__Tuple_impl_1ul_std__default_delete_int____M_head @ 0x1046d8
void std__Tuple_impl_1ul_std__default_delete_int____M_head(_Tuple_impl *param_1)
{
 std__Head_base_1ul_std__default_delete_int__true__M_head((_Head_base *)param_1);
 return;
}

// Function: std__Head_base_1ul_std__default_delete_int__true__M_head @ 0x1046fc
_Head_base * std__Head_base_1ul_std__default_delete_int__true__M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std_unique_ptr_int_std__default_delete_int__get @ 0x104710
unsigned long long __thiscall
std_unique_ptr_int_std__default_delete_int__get(unique_ptr_int_std__default_delete_int__ *this)
{
 unsigned long long uVar1;
 uVar1 = std___uniq_ptr_impl_int_std__default_delete_int__M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 return uVar1;
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int__M_ptr @ 0x104744
unsigned long long __thiscall
std___uniq_ptr_impl_int_std__default_delete_int__M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)std_get_0ul_int__std__default_delete_int__((tuple *)this);
 return *puVar1;
}

// Function: std_get_0ul_int__std__default_delete_int__ @ 0x10476c
type * std_get_0ul_int__std__default_delete_int__(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = std___get_helper_0ul_int__std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___get_helper_0ul_int__std__default_delete_int__ @ 0x104790
int ** std___get_helper_0ul_int__std__default_delete_int__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)std__Tuple_impl_0ul_int__std__default_delete_int____M_head(param_1);
 return ppiVar1;
}

// Function: std__Tuple_impl_0ul_int__std__default_delete_int____M_head @ 0x1047b4
void std__Tuple_impl_0ul_int__std__default_delete_int____M_head(_Tuple_impl *param_1)
{
 std__Head_base_0ul_int__false__M_head((_Head_base *)param_1);
 return;
}

// Function: std__Head_base_0ul_int__false__M_head @ 0x1047d8
_Head_base * std__Head_base_0ul_int__false__M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std___uniq_ptr_data_int_std__default_delete_int____true_true____uniq_ptr_impl @ 0x1047ec
void __thiscall
std___uniq_ptr_data_int_std__default_delete_int____true_true____uniq_ptr_impl
 (__uniq_ptr_data_int_std__default_delete_int____true_true_ *this,int *param_1)
{
 std___uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this,param_1);
 return;
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl @ 0x104818
void __thiscall
std___uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int____ *this,int *param_1)
{
 int **ppiVar1;
 std_tuple_int__std__default_delete_int____tuple_true_true_
 ((tuple_int__std__default_delete_int____ *)this);
 ppiVar1 = (int **)std___uniq_ptr_impl_int_std__default_delete_int____M_ptr(this);
 *ppiVar1 = param_1;
 return;
}

// Function: std_tuple_int__std__default_delete_int____tuple_true_true_ @ 0x10485c
void __thiscall
std_tuple_int__std__default_delete_int____tuple_true_true_
 (tuple_int__std__default_delete_int____ *this)
{
 std__Tuple_impl_0ul_int__std__default_delete_int____Tuple_impl
 ((_Tuple_impl_0ul_int__std__default_delete_int____ *)this);
 return;
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int____M_ptr @ 0x104888
unsigned long long __thiscall
std___uniq_ptr_impl_int_std__default_delete_int____M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)std_get_0ul_int__std__default_delete_int__((tuple *)this);
 return *puVar1;
}

// Function: std__Tuple_impl_0ul_int__std__default_delete_int____Tuple_impl @ 0x1048ac
void __thiscall
std__Tuple_impl_0ul_int__std__default_delete_int____Tuple_impl
 (_Tuple_impl_0ul_int__std__default_delete_int____ *this)
{
 std__Tuple_impl_1ul_std__default_delete_int____Tuple_impl();
 std__Head_base_0ul_int__false__Head_base((_Head_base_0ul_int__false_ *)this);
 return;
}

// Function: std__Tuple_impl_1ul_std__default_delete_int____Tuple_impl @ 0x1048dc
void std__Tuple_impl_1ul_std__default_delete_int____Tuple_impl(void)
{
 std__Head_base_1ul_std__default_delete_int__true__Head_base();
 return;
}

// Function: std__Head_base_1ul_std__default_delete_int__true__Head_base @ 0x104900
void std__Head_base_1ul_std__default_delete_int__true__Head_base(void)
{
 return;
}



// Function: std_unique_ptr_int___std__default_delete_int____get_deleter @ 0x10497c
unsigned long long __thiscall
std_unique_ptr_int___std__default_delete_int____get_deleter
 (unique_ptr_int___std__default_delete_int____ *this)
{
 unsigned long long uVar1;
 uVar1 = std___uniq_ptr_impl_int_std__default_delete_int____M_deleter
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 return uVar1;
}

// Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ @ 0x1049b0
void _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_
 (unsigned long long param_1,void *param_2)
{
 if (param_2 != (void *)0x0) {
 operator_delete__(param_2);
 }
 return;
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int____M_deleter @ 0x1049ec
unsigned long long __thiscall
std___uniq_ptr_impl_int_std__default_delete_int____M_deleter
 (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 unsigned long long uVar1;
 uVar1 = std_get_1ul_int__std__default_delete_int__((tuple *)this);
 return uVar1;
}

// Function: std_get_1ul_int__std__default_delete_int__ @ 0x104a10
type * std_get_1ul_int__std__default_delete_int__(tuple *param_1)
{
 default_delete *pdVar1;
 pdVar1 = std___get_helper_1ul_std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}

// Function: std___get_helper_1ul_std__default_delete_int__ @ 0x104a34
default_delete * std___get_helper_1ul_std__default_delete_int__(_Tuple_impl *param_1)
{
 default_delete *pdVar1;
 pdVar1 = (default_delete *)std__Tuple_impl_1ul_std__default_delete_int____M_head(param_1);
 return pdVar1;
}

// Function: std__Tuple_impl_1ul_std__default_delete_int____M_head @ 0x104a58
void std__Tuple_impl_1ul_std__default_delete_int____M_head(_Tuple_impl *param_1)
{
 std__Head_base_1ul_std__default_delete_int__true__M_head((_Head_base *)param_1);
 return;
}

// Function: std__Head_base_1ul_std__default_delete_int__true__M_head @ 0x104a7c
_Head_base * std__Head_base_1ul_std__default_delete_int__true__M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std_unique_ptr_int___std__default_delete_int____get @ 0x104a90
unsigned long long __thiscall
std_unique_ptr_int___std__default_delete_int____get
 (unique_ptr_int___std__default_delete_int____ *this)
{
 unsigned long long uVar1;
 uVar1 = std___uniq_ptr_impl_int_std__default_delete_int____M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 return uVar1;
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int____M_ptr @ 0x104ac4
unsigned long long __thiscall
std___uniq_ptr_impl_int_std__default_delete_int____M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)std_get_0ul_int__std__default_delete_int__((tuple *)this);
 return *puVar1;
}

// Function: std_get_0ul_int__std__default_delete_int__ @ 0x104aec
type * std_get_0ul_int__std__default_delete_int__(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = std___get_helper_0ul_int__std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___get_helper_0ul_int__std__default_delete_int__ @ 0x104b10
int ** std___get_helper_0ul_int__std__default_delete_int__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)std__Tuple_impl_0ul_int__std__default_delete_int____M_head(param_1);
 return ppiVar1;
}

// Function: std__Tuple_impl_0ul_int__std__default_delete_int____M_head @ 0x104b34
void std__Tuple_impl_0ul_int__std__default_delete_int____M_head(_Tuple_impl *param_1)
{
 std__Head_base_0ul_int__false__M_head((_Head_base *)param_1);
 return;
}

// Function: std_forward_int___ @ 0x104b58
int ** std_forward_int___(type *param_1)
{
 return (int **)param_1;
}

// Function: std__Head_base_0ul_int__false__Head_base_int___ @ 0x104b6c
void __thiscall
std__Head_base_0ul_int__false__Head_base_int___(_Head_base_0ul_int__false_ *this,int **param_1)
{
 int **ppiVar1;
 ppiVar1 = std_forward_int___((type *)param_1);
 *(int **)this = *ppiVar1;
 return;
}

// Function: _fini @ 0x104ba8
void _fini(void)
{
 return;
}

