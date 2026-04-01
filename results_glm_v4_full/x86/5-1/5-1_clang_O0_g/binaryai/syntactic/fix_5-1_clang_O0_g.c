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
typedef unsigned int uint;
#ifndef __cplusplus
typedef unsigned char bool;
#define true 1
#define false 0
#endif
typedef long double longdouble;
#define ROUND(x) ((int)((x) + 0.5))

/* External function declarations */
extern void __gmon_start__(void);
extern void frame_dummy(void);
extern int __do_global_ctors_aux(void);

/* Type declarations for std library - converted from C++ namespace */
struct ios_base {
    struct Init {
        void (*ctor)(struct ios_base_Init *);
        void (*dtor)(struct ios_base_Init *);
        void (*_Init)(void *, void *, void *);
    };
};
extern void std___cxa_atexit(void (*)(void*, void*, void*), void*, void*);
extern void std_terminate(void);

/* External objects */
extern void *__dso_handle;

/* Type definitions for classes and structures */
struct SimpleClass {
    int value;
    char name[32];
};

struct LifecycleClass {
    void *data;
    uint size;
    static uint instance_count;
};

struct Base {
    void **vtable;
};

struct Derived {
    void **vtable;
    int value;
};

struct BaseA {
    void **vtable;
};

struct BaseB {
    void **vtable;
};

struct MultiDerived {
    BaseA baseA;
    BaseB baseB;
    void **vtableA;
    void **vtableB;
};

struct VirtualBase {
    void **vtable;
};

struct MiddleA {
    void **vtable;
    VirtualBase *virtualBase;
};

struct MiddleB {
    void **vtable;
    VirtualBase *virtualBase;
};

struct DiamondDerived {
    void **vtable;
    MiddleB *middleB;
    VirtualBase *virtualBase;
};

struct Point {
    int x;
    int y;
};

template<typename T>
struct Container {
    T data[10];
    uint size;
};

typedef uint8_t byte;

/* RTTI type info structures */
struct type_info {
    char *name_ptr;
    int type_value;
};

struct RTTIBase {
    void **vtable;
};

struct RTTIDerivedA {
    void **vtable;
};

struct RTTIDerivedB {
    void **vtable;
};

/* Smart pointer and tuple related types */
struct _Head_base {
    void *data;
};

struct _Tuple_impl {
    void *data;
};

struct tuple {
    void *data;
};

struct __uniq_ptr_impl {
    void *ptr;
    void *deleter;
};

/* Missing struct definitions for smart pointer implementations */
struct __uniq_ptr_impl_int_test_cpp_smart_ptr______2_ {
    void *ptr;
    void *deleter;
};

struct __uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ {
    void *ptr;
    void *deleter;
};

struct unique_ptr_int_test_cpp_smart_ptr______2_ {
    void *data;
};

struct __uniq_ptr_impl_int_std__default_delete_int__ {
    void *ptr;
    void *deleter;
};

struct __uniq_ptr_data_int_std__default_delete_int__true_true_ {
    void *ptr;
    void *deleter;
};

struct unique_ptr_int_std__default_delete_int__ {
    void *data;
};

struct __uniq_ptr_impl_int_std__default_delete_int____ {
    void *ptr;
    void *deleter;
};

struct __uniq_ptr_data_int_std__default_delete_int____true_true_ {
    void *ptr;
    void *deleter;
};

struct unique_ptr_int___std__default_delete_int____ {
    void *data;
};

struct default_delete_int_ {
    void *data;
};

struct default_delete {
    void *data;
};

struct _Tuple_impl_0u_int__test_cpp_smart_ptr______2_ {
    void *data;
};

struct _Tuple_impl_1u_test_cpp_smart_ptr______2_ {
    void *data;
};

struct _Head_base_0u_int__false_ {
    void *data;
};

struct _Head_base_1u_test_cpp_smart_ptr______2_true_ {
    void *data;
};

struct tuple_int__test_cpp_smart_ptr______2_ {
    void *data;
};

struct _Tuple_impl_0u_int__std__default_delete_int__ {
    void *data;
};

struct _Tuple_impl_1u_std__default_delete_int__ {
    void *data;
};

struct _Head_base_1u_std__default_delete_int__true_ {
    void *data;
};

struct tuple_int__std__default_delete_int__ {
    void *data;
};

struct _Tuple_impl_0u_int__std__default_delete_int____ {
    void *data;
};

struct _Tuple_impl_1u_std__default_delete_int____ {
    void *data;
};

struct _Head_base_1u_std__default_delete_int____true_ {
    void *data;
};

struct tuple_int__std__default_delete_int____ {
    void *data;
};

struct unique_ptr {
    void *data;
};

/* Generic type placeholder */
struct type {
    void *data;
};

/* Lambda closure types */
struct __0 {
    int unused;
};

struct __1 {
    int capture;
    int *capture_ptr;
};

struct __2 {
    int unused;
};

/* Template instantiation types */
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;

/* Smart pointer types */
typedef struct __uniq_ptr_impl_int_test_cpp_smart_ptr______2_ __uniq_ptr_impl_int_test_cpp_smart_ptr______2_;
typedef struct __uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ __uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_;
typedef struct unique_ptr_int_test_cpp_smart_ptr______2_ unique_ptr_int_test_cpp_smart_ptr______2_;
typedef struct __uniq_ptr_impl_int_std__default_delete_int__ __uniq_ptr_impl_int_std__default_delete_int__;
typedef struct __uniq_ptr_data_int_std__default_delete_int__true_true_ __uniq_ptr_data_int_std__default_delete_int__true_true_;
typedef struct unique_ptr_int_std__default_delete_int__ unique_ptr_int_std__default_delete_int__;
typedef struct __uniq_ptr_impl_int_std__default_delete_int____ __uniq_ptr_impl_int_std__default_delete_int____;
typedef struct __uniq_ptr_data_int_std__default_delete_int____true_true_ __uniq_ptr_data_int_std__default_delete_int____true_true_;
typedef struct unique_ptr_int___std__default_delete_int____ unique_ptr_int___std__default_delete_int____;
typedef struct default_delete_int_ default_delete_int_;
typedef struct default_delete default_delete;
typedef struct _Tuple_impl_0u_int__test_cpp_smart_ptr______2_ _Tuple_impl_0u_int__test_cpp_smart_ptr______2_;
typedef struct _Tuple_impl_1u_test_cpp_smart_ptr______2_ _Tuple_impl_1u_test_cpp_smart_ptr______2_;
typedef struct _Head_base_0u_int__false_ _Head_base_0u_int__false_;
typedef struct _Head_base_1u_test_cpp_smart_ptr______2_true_ _Head_base_1u_test_cpp_smart_ptr______2_true_;
typedef struct tuple_int__test_cpp_smart_ptr______2_ tuple_int__test_cpp_smart_ptr______2_;
typedef struct _Tuple_impl_0u_int__std__default_delete_int__ _Tuple_impl_0u_int__std__default_delete_int__;
typedef struct _Tuple_impl_1u_std__default_delete_int__ _Tuple_impl_1u_std__default_delete_int__;
typedef struct _Head_base_1u_std__default_delete_int__true_ _Head_base_1u_std__default_delete_int__true_;
typedef struct tuple_int__std__default_delete_int__ tuple_int__std__default_delete_int__;
typedef struct _Tuple_impl_0u_int__std__default_delete_int____ _Tuple_impl_0u_int__std__default_delete_int____;
typedef struct _Tuple_impl_1u_std__default_delete_int____ _Tuple_impl_1u_std__default_delete_int____;
typedef struct _Head_base_1u_std__default_delete_int____true_ _Head_base_1u_std__default_delete_int____true_;
typedef struct tuple_int__std__default_delete_int____ tuple_int__std__default_delete_int____;
typedef struct unique_ptr unique_ptr;
typedef struct type type;

/* Virtual function table pointers */
extern void *PTR_virtual_func_00018c3c;
extern void *PTR_virtual_func_00018c5c;
extern void *PTR_funcA_00018cdc;
extern void *PTR_funcB_00018cf0;
extern void *PTR__RTTIDerivedA_00018eb8;
extern void *PTR__RTTIDerivedB_00018ee0;
extern void *PTR__RTTIBase_00018ecc;
extern void *PTR_func_00018e2c;
extern void *PTR_funcA_00018c80;
extern void *PTR_funcB_00018c98;
extern void *PTR_00018d08;
extern void *PTR_00018d3c;
extern void *PTR_00018d20;

/* Missing function declarations */
extern type *get(void *this);
extern type *get_deleter(void *this);
extern int ** get_0u_int__test_cpp_smart_ptr______2_(tuple *param_1);
extern __2 * get_1u_int__test_cpp_smart_ptr______2_(tuple *param_1);
extern int ** get_0u_int__std__default_delete_int__((tuple *param_1));
extern default_delete * get_1u_int__std__default_delete_int__((tuple *param_1));
extern int ** get_0u_int__std__default_delete_int____((tuple *param_1));
extern default_delete * get_1u_int__std__default_delete_int____((tuple *param_1));
extern void __uniq_ptr_impl_int_test_cpp_smart_ptr______2___uniq_ptr_impl_test_cpp_smart_ptr______2_const__
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this,int *param_1,__2 *param_2);
extern void tuple_int__test_cpp_smart_ptr______2__tuple_int___test_cpp_smart_ptr______2_const__true_
 (tuple_int__test_cpp_smart_ptr______2_ *this,int **param_1,__2 *param_2);
extern void _Tuple_impl_0u_int__test_cpp_smart_ptr______2__Tuple_impl_int___test_cpp_smart_ptr______2_const__void_
 (_Tuple_impl_0u_int__test_cpp_smart_ptr______2_ *this,int **param_1,__2 *param_2);
extern void std__Tuple_impl_1u_test_cpp_smart_ptr______2___Tuple_impl(__2 *param_1);
extern __2 * std__Head_base_1u_test_cpp_smart_ptr______2_true___Head_base(__2 *param_1);
extern void _Tuple_impl_0u_int__test_cpp_smart_ptr______2__Tuple_impl(_Tuple_impl_0u_int__test_cpp_smart_ptr______2_ *this,_Tuple_impl *param_1);
extern void _Tuple_impl_1u_std__default_delete_int____Tuple_impl(_Tuple_impl_1u_std__default_delete_int__ *this);
extern void tuple_int__std__default_delete_int___tuple(tuple_int__std__default_delete_int__ *this,tuple *param_1);
extern void _Tuple_impl_0u_int__std__default_delete_int____Tuple_impl(_Tuple_impl_0u_int__std__default_delete_int__ *this,_Tuple_impl *param_1);
extern void _Tuple_impl_1u_std__default_delete_int____Tuple_impl(_Tuple_impl_1u_std__default_delete_int____ *this);
extern void _Head_base_0u_int__false___Head_base((_Head_base_0u_int__false_ *)this,int **param_1);
extern void _M_ptr(__uniq_ptr_impl_int_std__default_delete_int__ *this);
extern __2 * __uniq_ptr_impl_int_test_cpp_smart_ptr______2___M_deleter(__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this);
extern void std__Head_base_0u_int__false___Head_base(_Head_base_0u_int__false_ *this);
extern _Head_base_1u_std__default_delete_int__true_ * _Head_base_1u_std__default_delete_int__true___Head_base(_Head_base_1u_std__default_delete_int__true_ *this);
extern _Head_base_1u_std__default_delete_int____true_ * _Head_base_1u_std__default_delete_int____true___Head_base(_Head_base_1u_std__default_delete_int____true_ *this);
extern void _Head_base_0u_int__false___Head_base(_Head_base_0u_int__false_ *this);
extern void _Head_base_0u_int__false___M_head(_Head_base_0u_int__false_ *this);
extern void _Head_base_0u_int__false___M_head(_Head_base_0u_int__false_ *this);
extern int ** _Head_base_0u_int__false___M_head(_Head_base *param_1);
extern default_delete * _Head_base_1u_std__default_delete_int__true___M_head(_Head_base *param_1);
extern default_delete * _Head_base_1u_std__default_delete_int____true___M_head(_Head_base *param_1);
extern default_delete * __uniq_ptr_impl_int_std__default_delete_int______M_deleter(__uniq_ptr_impl_int_std__default_delete_int____ *this);
extern void __uniq_ptr_impl_int_std__default_delete_int_______uniq_ptr_impl(__uniq_ptr_impl_int_std__default_delete_int____ *this,int *param_1);
extern void tuple_int__std__default_delete_int______tuple_true_true_((tuple_int__std__default_delete_int____ *)this);
extern void _Tuple_impl_0u_int__std__default_delete_int_____Tuple_impl(_Tuple_impl_0u_int__std__default_delete_int____ *this);
extern void _Tuple_impl_1u_std__default_delete_int____Tuple_impl(_Tuple_impl_1u_std__default_delete_int__ *this);
extern void _Head_base_0u_int__false___Head_base(_Head_base_0u_int__false_ *this);
extern default_delete * __uniq_ptr_impl_int_std__default_delete_int______M_deleter(__uniq_ptr_impl_int_std__default_delete_int__ *this);
extern void std_unique_ptr_int__std__default_delete_int____get_deleter(void);
extern void __uniq_ptr_impl_int_std__default_delete_int_______uniq_ptr_impl(__uniq_ptr_impl_int_std__default_delete_int__ *this,int *param_1);
extern void tuple_int__std__default_delete_int___tuple_true_true_(tuple_int__std__default_delete_int__ *this);
extern void _Tuple_impl_0u_int__std__default_delete_int____Tuple_impl(_Tuple_impl_0u_int__std__default_delete_int__ *this);
extern __2 * _Head_base_1u_test_cpp_smart_ptr______2_true___M_head(_Head_base *param_1);
extern void _Head_base_0u_int__false___Head_base_int___(_Head_base_0u_int__false_ *this,int **param_1);
extern void Container<int>_Container(Container_int_ *this);
extern void Container<int>_push(Container_int_ *this,int param_1);
extern unsigned int Container<int>_get(Container_int_ *this,int param_1);
extern unsigned int Container<int>_getSize(Container_int_ *this);
extern void Container<double>_Container(Container_double_ *this);
extern void Container<double>_push(Container_double_ *this,double param_1);
extern longdouble Container<double>_get(Container_double_ *this,int param_1);
extern unsigned int Container<double>_getSize(Container_double_ *this);
extern int ** get_0u_int__test_cpp_smart_ptr______2_(tuple *param_1);
extern __2 * get_1u_int__test_cpp_smart_ptr______2_(tuple *param_1);
extern int ** get_0u_int__std__default_delete_int__((tuple *param_1));
extern default_delete * get_1u_int__std__default_delete_int__((tuple *param_1));
extern int ** get_0u_int__std__default_delete_int____((tuple *param_1));
extern default_delete * get_1u_int__std__default_delete_int____((tuple *param_1));
extern void std_ios_base_Init__Init(struct ios_base_Init *this);
extern void SimpleClass_SimpleClass(SimpleClass *this,int param_1,char *param_2);
extern void SimpleClass_setValue(SimpleClass *this,int param_1);
extern unsigned int SimpleClass_getValue(SimpleClass *this);
extern int SimpleClass_compute(SimpleClass *this,int param_1);
extern unsigned int SimpleClass_getClassID(void);
extern void LifecycleClass_LifecycleClass(LifecycleClass *this,uint param_1);
extern unsigned int LifecycleClass_getData(LifecycleClass *this,uint param_1);
extern unsigned int LifecycleClass_getInstanceCount(void);
extern void LifecycleClass__LifecycleClass(LifecycleClass *this);
extern void Base_Base(Base *this);
extern void Derived_Derived(Derived *this,int param_1);
extern int Base_virtual_func(Base *this,int param_1);
extern int Derived_virtual_func(Derived *this,int param_1);
extern void Derived__Derived(Derived *this);
extern void Base__Base(Base *this);
extern void MultiDerived_MultiDerived(MultiDerived *this);
extern void MultiDerived__MultiDerived(MultiDerived *this);
extern void DiamondDerived_DiamondDerived(DiamondDerived *this);
extern void DiamondDerived__DiamondDerived(DiamondDerived *this);
extern void Point_Point(Point *this,int param_1,int param_2);
extern void Point_operator_(Point *this,Point *param_1);
extern bool Point_operator__(Point *this,Point *param_1);
extern void Point_operator__(Point *this);
extern int template_max_int_(int param_1,int param_2);
extern double template_max_double_(double param_1,double param_2);
extern void template_swap_int_(int *param_1,int *param_2);
extern void Container_int__Container(Container_int_ *this);
extern void Container_int__push(Container_int_ *this,int param_1);
extern unsigned int Container_int__get(Container_int_ *this,int param_1);
extern unsigned int Container_int__getSize(Container_int_ *this);
extern void Container_double__Container(Container_double_ *this);
extern void Container_double__push(Container_double_ *this,double param_1);
extern longdouble Container_double__get(Container_double_ *this,int param_1);
extern unsigned int Container_double__getSize(Container_double_ *this);
extern int test_cpp_lambda()_$_1_operator__(__1 *this,int param_1);
extern auto test_cpp_lambda()_$_0_operator__(__0 *this,int param_1,int param_2);
extern struct type_info int_typeinfo;
extern struct type_info RTTIDerivedA_typeinfo;
extern struct type_info RTTIDerivedB_typeinfo;
extern struct type_info RTTIBase_typeinfo;
extern bool std_type_info_operator__(type_info *this,type_info *param_1);
extern char *std_type_info_name(type_info *this);
extern void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this);
extern void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this);
extern unsigned int RTTIDerivedA_derivedA_data(void);
extern unsigned int RTTIDerivedB_derivedB_data(void);
extern void *std_dynamic_cast(void *obj,void *src_type,void *dst_type,int offset);
extern void std_unique_ptr<int,std_default_delete<int>>_unique_ptr_std__default_delete_int__void_(unique_ptr_int_std__default_delete_int__ *this,int *param_1);
extern int * std_unique_ptr<int,std_default_delete<int>>_operator_(unique_ptr_int_std__default_delete_int__ *this);
extern void std_unique_ptr<int,std_default_delete<int>>__unique_ptr(unique_ptr_int_std__default_delete_int__ *this);
extern type *std_move_std__unique_ptr_int_std__default_delete_int____(unique_ptr *param_1);
extern void std_unique_ptr<int,std_default_delete<int>>_unique_ptr(unique_ptr_int_std__default_delete_int__ *this,unique_ptr *param_1);
extern void std_unique_ptr<int[],std_default_delete<int[]>>_unique_ptr_int__std__default_delete_int____void_bool_(unique_ptr_int___std__default_delete_int____ *this,int *param_1);
extern int std_unique_ptr<int[],std_default_delete<int[]>>_operator__(unique_ptr_int___std__default_delete_int____ *this,uint param_1);
extern void std_unique_ptr<int[],std_default_delete<int[]>>__unique_ptr(unique_ptr_int___std__default_delete_int____ *this);
extern void default_delete<int>_operator__(default_delete_int_ *this,int *param_1);
extern void *__uniq_ptr_impl<int,std_default_delete<int>>__M_ptr(__uniq_ptr_impl_int_std__default_delete_int__ *this);
extern void _M_ptr(__uniq_ptr_impl_int_std__default_delete_int__ *this);
extern void BaseA_BaseA(BaseA *this);
extern void BaseB_BaseB(BaseB *this);
extern unsigned int BaseA_funcA(void);
extern unsigned int BaseB_funcB(void);
extern void VirtualBase_VirtualBase(VirtualBase *this);
extern void MiddleA_MiddleA(MiddleA *this);
extern void MiddleB_MiddleB(MiddleB *this);
extern int MiddleA_func(MiddleA *this);
extern void MiddleA__MiddleA(MiddleA *this);
extern int MiddleB_func(MiddleB *this);
extern void MiddleB__MiddleB(MiddleB *this);
extern int DiamondDerived_func(DiamondDerived *this);
extern unsigned int VirtualBase_func(void);
extern void VirtualBase__VirtualBase(VirtualBase *this);
extern void RTTIBase_RTTIBase(RTTIBase *this);
extern void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this);
extern void RTTIBase__RTTIBase(RTTIBase *this);
extern unsigned int RTTIDerivedA_getType(void);
extern unsigned int RTTIBase_getType(void);
extern void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this);
extern unsigned int RTTIDerivedB_getType(void);
extern void _DiamondDerived(DiamondDerived *this);
extern void _Base(Base *this);
extern void _Derived(Derived *this);
extern void _MultiDerived(MultiDerived *this);
extern void _BaseA(BaseA *this);
extern void _BaseB(BaseB *this);
extern void _MiddleA(MiddleA *this);
extern void _MiddleB(MiddleB *this);
extern void _VirtualBase(VirtualBase *this);
extern void _RTTIDerivedA(RTTIDerivedA *this);
extern void _RTTIBase(RTTIBase *this);
extern void _RTTIDerivedB(RTTIDerivedB *this);
extern void funcB(void);
extern void func(MiddleA *this);
extern int *move_int___(int **param_1);
extern void *move_std__tuple_int__std__default_delete_int____(tuple *param_1);
extern void *forward_test_cpp_smart_ptr______2_const__(type *param_1);
extern int **forward_int___(type *param_1);
extern type *__get_helper_0u_int__test_cpp_smart_ptr______2_(_Tuple_impl *param_1);
extern __2 *__get_helper_1u_test_cpp_smart_ptr______2_(_Tuple_impl *param_1);
extern void *_Tuple_impl_0u_int__test_cpp_smart_ptr______2___M_head(_Tuple_impl *param_1);
extern void *_Head_base_1u_test_cpp_smart_ptr______2_true___M_head(_Head_base *param_1);
extern type *__get_helper_0u_int__std__default_delete_int__(_Tuple_impl *param_1);
extern default_delete *__get_helper_1u_std__default_delete_int__(_Tuple_impl *param_1);
extern void *_Tuple_impl_0u_int__std__default_delete_int____M_head(_Tuple_impl *param_1);
extern void *_Head_base_1u_std__default_delete_int__true___M_head(_Head_base *param_1);
extern type *__get_helper_0u_int__std__default_delete_int____(_Tuple_impl *param_1);
extern default_delete *__get_helper_1u_std__default_delete_int____(_Tuple_impl *param_1);
extern void *_Tuple_impl_0u_int__std__default_delete_int______M_head(_Tuple_impl *param_1);
extern void *_Head_base_1u_std__default_delete_int____true___M_head(_Head_base *param_1);
extern void *_M_head(void *this);
extern void _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_(unsigned int param_1, void *param_2);
extern void *PTR_virtual_func_00018c5c;
extern void *PTR_funcA_00018cdc;
extern void *PTR_funcB_00018cf0;
extern void *PTR__RTTIDerivedA_00018eb8;
extern void *PTR__RTTIDerivedB_00018ee0;
extern void *PTR__RTTIBase_00018ecc;
extern void *PTR_func_00018e2c;
extern void *PTR_funcA_00018c80;
extern void *PTR_funcB_00018c98;
extern void *PTR_00018d08;
extern void *PTR_00018d3c;
extern void *PTR_00018d20;

extern __2 * std__Head_base_1u_test_cpp_smart_ptr______2_true___M_head(_Head_base *param_1);

/* Global data references */
extern char DAT_0001500d;
extern char DAT_00015032;
extern char DAT_00015050;
extern char DAT_0001506c;
extern char DAT_00015088;
extern char DAT_000150a4;
extern char DAT_000150c1;
extern char DAT_000150dd;
extern char DAT_000150f9;
extern char DAT_00015115;
extern char DAT_00015131;
extern char DAT_0001514e;
extern char DAT_0001516b;
extern char DAT_00015189;

/* Global variable */
extern uint instance_count;

/* Forward declaration of std_ios_base_Init */
extern struct ios_base ios_base_obj;
struct ios_base_Init __ioinit;

// Decompiled by BinaryAI
// SHA256: 24a6cf7df4a52c991aecc9a2834c7b342da6bb631815f47ef57fafc1b12dc764

// Function: _init @ 0x11000
int _init(void *ctx)
{
 int iVar1;
 __gmon_start__();
 frame_dummy();
 iVar1 = __do_global_ctors_aux();
 return iVar1;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 (*(void (**)(void))(char *)0x0)();
 return;
}

// Function: <EXTERNAL>_operator.new @ 0x11040
void * operator_new(size_t param_1)
{
 return 0;
}

// Function: operator new (placement) @ 0x11045
void * operator_new(size_t size, void *ptr)
{
 return ptr;
}

// Function: <EXTERNAL>_std_terminate @ 0x11050
void std_terminate(void)
{
 return;
}

// Function: <EXTERNAL>___cxa_begin_catch @ 0x11060
void __cxa_begin_catch(void *exception)
{
 return;
}

// Function: <EXTERNAL>___cxa_allocate_exception @ 0x11070
void * __cxa_allocate_exception(size_t param_1)
{
 return 0;
}

// Function: <EXTERNAL>_strlen @ 0x11080
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>___cxa_atexit @ 0x11090
void __cxa_atexit(void (*func)(void*, void*, void*), void *arg, void *dso_handle)
{
 return;
}

// Function: <EXTERNAL>_strcmp @ 0x110a0
int strcmp(char *__s1,char *__s2)
{
 int iVar1;
 iVar1 = strcmp(__s1,__s2);
 return iVar1;
}

// Function: <EXTERNAL>___libc_start_main @ 0x110b0
void __libc_start_main(void)
{
 return;
}

// Function: <EXTERNAL>_operator.new[] @ 0x110c0
void * operator_new__(size_t param_1)
{
 void *pvVar1;
 pvVar1 = operator_new__(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>_strncpy @ 0x110d0
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>_operator.delete @ 0x110e0
void operator_delete(void *param_1)
{
 return;
}

// Function: <EXTERNAL>___cxa_bad_typeid @ 0x110f0
void __cxa_bad_typeid(void)
{
 return;
}

// Function: <EXTERNAL>___dynamic_cast @ 0x11100
void * __dynamic_cast(void *obj, void *src_type, void *dst_type, int offset)
{
 return (void *)0;
}

// Function: <EXTERNAL>_operator.delete[] @ 0x11110
void operator_delete__(void *param_1)
{
 return;
}

// Function: <EXTERNAL>_printf @ 0x11120
int printf(char *__format,...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
}

// Function: <EXTERNAL>___cxa_rethrow @ 0x11130
void __cxa_rethrow(void)
{
 return;
}

// Function: <EXTERNAL>_std_ios_base_Init_Init @ 0x11140
void std_ios_base_Init_Init(struct ios_base_Init *this)
{
 return;
}

// Function: <EXTERNAL>___cxa_end_catch @ 0x11150
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>_memset @ 0x11160
void * memset(void *__s,int __c,size_t __n)
{
 void *pvVar1;
 pvVar1 = memset(__s,__c,__n);
 return pvVar1;
}

// Function: <EXTERNAL>___cxa_throw @ 0x11170
void __cxa_throw(void *obj, void *type, void *destructor)
{
 return;
}

// Function: <EXTERNAL>__Unwind_Resume @ 0x11180
void _Unwind_Resume(void *exception)
{
 return;
}

// Function: FUN_00011190 @ 0x11190
void FUN_00011190(void)
{
 int unaff_EBX;
 (**(void (**)(void))(unaff_EBX + -0x18))();
 return;
}

// Function: __cxx_global_var_init @ 0x111a0
void __cxx_global_var_init(void)
{
 memset(&__ioinit, 0, sizeof(__ioinit));
 std___cxa_atexit((void (*)(void*, void*, void*))std_ios_base_Init__Init,&__ioinit,&__dso_handle);
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x111f0
void __attribute__((regparm(3))) _GLOBAL__sub_I_5_1_cpp(unsigned int param_1)
{
 __cxx_global_var_init();
 return;
}

// Function: _start @ 0x11210
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 __libc_start_main((void*)main,param_2,&auStack_4,0,0,param_1,auStack_4);
 do {
 } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x1123c
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11240
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x11250
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11290
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x112e0
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x7d8b) == '\0') {
 if (*(int *)(unaff_EDI + 0x7cfb) != 0) {
 FUN_00011190(*(unsigned int *)(unaff_EDI + 0x7d77));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x7d8f);
 while (uVar1 < ((unaff_EDI + 0x790f) - (unaff_EDI + 0x790b) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x7d8f) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x790b + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x7d8f);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x7d8b) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11379
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1137d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: test_cpp_member_func @ 0x11390
int test_cpp_member_func(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 SimpleClass local_2c [36];
 SimpleClass_SimpleClass(local_2c,5,"Test");
 SimpleClass_setValue(local_2c,10);
 iVar1 = SimpleClass_getValue(local_2c);
 iVar2 = SimpleClass_compute(local_2c,3);
 iVar3 = SimpleClass_getClassID();
 return iVar1 + iVar2 + iVar3;
}

// Function: test_cpp_constructor @ 0x11420
int test_cpp_constructor(void)
{
 int iVar1;
 LifecycleClass local_14 [8];
 int local_c;
 local_c = 0;
 LifecycleClass_LifecycleClass(local_14,5);
 iVar1 = LifecycleClass_getData(local_14,2);
 local_c = local_c + iVar1;
 iVar1 = LifecycleClass_getInstanceCount();
 local_c = iVar1 + local_c;
 LifecycleClass__LifecycleClass(local_14);
 iVar1 = LifecycleClass_getInstanceCount();
 return iVar1 * 1000 + local_c;
}

// Function: call_virtual_func @ 0x114f0
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)(param_1,param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x11520
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 Derived local_14 [8];
 Base local_c [4];
 Base_Base(local_c);
 Derived_Derived(local_14,3);
 iVar1 = Base_virtual_func(local_c,5);
 iVar2 = Derived_virtual_func(local_14,5);
 iVar3 = call_virtual_func(local_c,5);
 iVar4 = call_virtual_func((Base *)local_14,5);
 Derived__Derived(local_14);
 Base__Base(local_c);
 return iVar1 + iVar2 + iVar3 + iVar4;
}

// Function: test_cpp_multiple_inheritance @ 0x11670
int test_cpp_multiple_inheritance(void)
{
 int iVar1;
 int iVar2;
 void ***local_3c;
 void **local_1c;
 unsigned int local_18;
 void **local_14;
 unsigned int local_10;
 MultiDerived_MultiDerived((MultiDerived *)&local_1c);
 local_18 = 100;
 local_10 = 200;
 local_3c = (void ***)0x0;
 if (&stack0x00000000 != (char *)0x1c) {
 local_3c = &local_14;
 }
 iVar1 = (**local_1c)(&local_1c);
 iVar2 = (***local_3c)(local_3c);
 MultiDerived__MultiDerived((MultiDerived *)&local_1c);
 return iVar1 + iVar2 + (uint)(&local_1c != local_3c);
}

// Function: test_cpp_diamond_inheritance @ 0x11760
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 unsigned int *local_3c;
 int local_24 [7];
 DiamondDerived_DiamondDerived((DiamondDerived *)local_24);
 *(unsigned int *)((int)local_24 + *(int *)(local_24[0] + -0xc) + 4) = 0x32;
 local_3c = (unsigned int *)0x0;
 if (&stack0x00000000 != (char *)0x24) {
 local_3c = (unsigned int *)((int)local_24 + *(int *)(local_24[0] + -0xc));
 }
 iVar1 = (**(void **)*local_3c)(local_3c);
 *(unsigned int *)((int)local_24 + *(int *)(local_24[0] + -0xc) + 4) = 100;
 iVar2 = (**(void **)*local_3c)(local_3c);
 DiamondDerived__DiamondDerived((DiamondDerived *)local_24);
 return iVar1 + iVar2;
}

// Function: test_cpp_operator_overload @ 0x11840
int test_cpp_operator_overload(void)
{
 byte bVar1;
 int iVar2;
 int local_24;
 int local_20;
 Point local_1c [8];
 Point local_14 [12];
 Point_Point(local_14,1,2);
 Point_Point(local_1c,3,4);
 Point_operator_((Point *)&local_24,local_14);
 bVar1 = Point_operator__(local_14,local_1c);
 Point_operator__((Point *)&local_24);
 iVar2 = 10;
 if ((bVar1 & 1) != 0) {
 iVar2 = 0;
 }
 return local_24 + local_20 + iVar2;
}

// Function: test_cpp_template_func @ 0x11900
int test_cpp_template_func(void)
{
 int local_1c;
 int local_18;
 double local_14;
 int local_c;
 local_c = template_max_int_(3,7);
 local_14 = template_max_double_(2.5,1.5);
 local_18 = 10;
 local_1c = 0x14;
 template_swap_int_(&local_18,&local_1c);
 return local_c + (int)ROUND(local_14) + local_18 + local_1c;
}

// Function: test_cpp_template_class @ 0x119b0
int test_cpp_template_class(void)
{
 longdouble lVar1;
 Container_double_ local_94 [88];
 int local_3c;
 int local_38;
 Container_int_ local_34 [44];
 Container<int>_Container(local_34);
 Container<int>_push(local_34,10);
 Container<int>_push(local_34,0x14);
 Container<int>_push(local_34,0x1e);
 local_38 = Container<int>_get(local_34,0);
 local_3c = Container<int>_getSize(local_34);
 Container<double>_Container(local_94);
 Container<double>_push(local_94,3.14);
 lVar1 = (longdouble)Container<double>_get(local_94,0);
 return local_38 + local_3c + (int)ROUND((double)lVar1);
}

// Function: test_cpp_lambda @ 0x11b20
int test_cpp_lambda(void)
{
 int iVar1;
 int aVar2;
 __0 local_24 [8];
 unsigned int local_1c;
 unsigned int *local_18;
 unsigned int local_10;
 unsigned int local_c;
 local_c = 10;
 local_10 = 0x14;
 local_1c = 10;
 local_18 = &local_10;
 iVar1 = test_cpp_lambda()_$_1_operator__((__1 *)&local_1c,3);
 aVar2 = test_cpp_lambda()_$_0_operator__(local_24,10,0x14);
 return iVar1 + aVar2;
}

// Function: test_cpp_lambda()_$_1_operator() @ 0x11ba0
int __thiscall test_cpp_lambda()_$_1_operator__(__1 *this,int param_1)
{
 **(int **)(this + 4) = **(int **)(this + 4) + 5;
 return param_1 * *(int *)this + **(int **)(this + 4);
}

// Function: test_cpp_lambda()_$_0_operator() @ 0x11bd0
auto __thiscall test_cpp_lambda()_$_0_operator__(__0 *this,int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: test_cpp_exception @ 0x11bf0
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int_typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x11d90
int test_cpp_smart_ptr(void)
{
 int iVar1;
 int *piVar2;
 unsigned int *puVar3;
 type *ptVar4;
 int iVar5;
 unique_ptr_int_test_cpp_smart_ptr______2_ local_34 [8];
 __2 local_2c [4];
 int local_28;
 unique_ptr_int___std__default_delete_int____ local_24 [4];
 int local_20;
 unique_ptr_int_std__default_delete_int__ local_1c [16];
 unique_ptr_int_std__default_delete_int__ local_c [4];
 piVar2 = (int *)operator_new(4);
 *piVar2 = 100;
 std_unique_ptr_int_std__default_delete_int___unique_ptr_std__default_delete_int__void_
 (local_c,piVar2);
 puVar3 = (unsigned int *)std_unique_ptr_int_std__default_delete_int___operator_(local_c);
 *puVar3 = 200;
 ptVar4 = std_move_std__unique_ptr_int_std__default_delete_int____((unique_ptr *)local_c);
 std_unique_ptr_int_std__default_delete_int___unique_ptr(local_1c,(unique_ptr *)ptVar4);
 piVar2 = (int *)std_unique_ptr<int,std_default_delete<int>>_operator_(local_1c);
 local_20 = *piVar2;
 piVar2 = (int *)operator_new__(0x14);
 *piVar2 = 1;
 piVar2[1] = 2;
 piVar2[2] = 3;
 piVar2[3] = 4;
 piVar2[4] = 5;
 std_unique_ptr_int___std__default_delete_int____
 unique_ptr_int__std__default_delete_int____void_bool_(local_24,piVar2);
 piVar2 = (int *)std_unique_ptr_int___std__default_delete_int____operator__(local_24,2);
 local_28 = *piVar2;
 piVar2 = (int *)operator_new(4);
 *piVar2 = 500;
 std_unique_ptr<int,test_cpp_smart_ptr()_$_2>_unique_ptr_test_cpp_smart_ptr______2_void_
 (local_34,piVar2,local_2c);
 piVar2 = (int *)std_unique_ptr<int,test_cpp_smart_ptr()_$_2>_operator_(local_34);
 iVar1 = *piVar2;
 iVar5 = local_20 + local_28;
 std_unique_ptr<int,test_cpp_smart_ptr()_$_2>__unique_ptr(local_34);
 std_unique_ptr<int[],std_default_delete<int[]>>__unique_ptr(local_24);
 std_unique_ptr<int,std_default_delete<int>>__unique_ptr(local_1c);
 std_unique_ptr<int,std_default_delete<int>>__unique_ptr(local_c);
 return iVar5 + iVar1;
}

// Function: std_unique_ptr<int,test_cpp_smart_ptr()_$_2>_unique_ptr<test_cpp_smart_ptr()_$_2,void> @ 0x11fd0
void __thiscall
std_unique_ptr<int,test_cpp_smart_ptr()_$_2>_unique_ptr_test_cpp_smart_ptr______2_void_
 (unique_ptr_int_test_cpp_smart_ptr______2_ *this,int *param_1,__2 *param_2)
{
 __uniq_ptr_data<int,test_cpp_smart_ptr()_$_2,true,false>_
 __uniq_ptr_impl_test_cpp_smart_ptr______2_const__
 ((__uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ *)this,param_1,param_2);
 return;
}

// Function: std_unique_ptr<int,test_cpp_smart_ptr()_$_2>_operator* @ 0x12020
void __thiscall
std_unique_ptr<int,test_cpp_smart_ptr()_$_2>_operator_
 (unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
 get(this);
 return;
}

// Function: std_unique_ptr<int,test_cpp_smart_ptr()_$_2>_~unique_ptr @ 0x12060
void __thiscall
std_unique_ptr<int,test_cpp_smart_ptr()_$_2>__unique_ptr
 (unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
 int **ppiVar1;
 __2 *this_00;
 int **ppiVar2;
 ppiVar1 = (int **)__uniq_ptr_impl_int_test_cpp_smart_ptr______2__M_ptr
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (__2 *)get_deleter(this);
 ppiVar2 = (int **)move_int___(ppiVar1);
 test_cpp_smart_ptr()_$_2_operator__(this_00,*ppiVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}

// Function: test_cpp_rtti @ 0x12100
int test_cpp_rtti(void)
{
 int *this;
 int *this_00;
 uint uVar1;
 int iVar2;
 char *__s;
 size_t sVar3;
 int *this_01;
 int *local_44;
 int *local_3c;
 int local_18;
 this = (int *)operator_new(4);
 memset(this,0,4);
 RTTIDerivedA_RTTIDerivedA((RTTIDerivedA *)this);
 this_00 = (int *)operator_new(4);
 memset(this_00,0,4);
 RTTIDerivedB_RTTIDerivedB((RTTIDerivedB *)this_00);
 local_18 = 0;
 if (this == (int *)0x0) {
 __cxa_bad_typeid();
 }
 uVar1 = std_type_info_operator__
 (*(type_info **)(*this + -4),(type_info *)&RTTIDerivedA_typeinfo);
 if ((uVar1 & 1) != 0) {
 local_18 = 10;
 }
 if (this_00 == (int *)0x0) {
 __cxa_bad_typeid();
 }
 this_01 = *(int **)(*this_00 + -4);
 uVar1 = std_type_info_operator__((type_info *)this_01,(type_info *)&RTTIDerivedB_typeinfo);
 if ((uVar1 & 1) != 0) {
 local_18 = local_18 + 0x14;
 }
 if (this == (int *)0x0) {
 local_3c = (int *)0x0;
 }
 else {
 this_01 = this;
 local_3c = (int *)__dynamic_cast(this,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 }
 if (local_3c != (int *)0x0) {
 iVar2 = RTTIDerivedA_derivedA_data();
 local_18 = iVar2 + local_18;
 this_01 = local_3c;
 }
 if (this_00 == (int *)0x0) {
 local_44 = (int *)0x0;
 }
 else {
 this_01 = this_00;
 local_44 = (int *)__dynamic_cast(this_00,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 }
 if (local_44 != (int *)0x0) {
 iVar2 = RTTIDerivedB_derivedB_data();
 local_18 = iVar2 + local_18;
 this_01 = local_44;
 }
 if (this == (int *)0x0) {
 __cxa_bad_typeid(this_01);
 }
 __s = (char *)std_type_info_name(*(type_info **)(*this + -4));
 sVar3 = strlen(__s);
 if (this != (int *)0x0) {
 (**(void **)(*this + 4))(this);
 }
 if (this_00 != (int *)0x0) {
 (**(void **)(*this_00 + 4))(this_00);
 }
 return sVar3 + local_18;
}

// Function: test_cpp_oo_features @ 0x123a0
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 printf(&DAT_0001500d);
 uVar1 = test_cpp_member_func();
 printf(&DAT_00015032,uVar1);
 uVar1 = test_cpp_constructor();
 printf(&DAT_00015050,uVar1);
 uVar1 = test_cpp_virtual_func();
 printf(&DAT_0001506c,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 printf(&DAT_00015088,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 printf(&DAT_000150a4,uVar1);
 uVar1 = test_cpp_operator_overload();
 printf(&DAT_000150c1,uVar1);
 uVar1 = test_cpp_template_func();
 printf(&DAT_000150dd,uVar1);
 uVar1 = test_cpp_template_class();
 printf(&DAT_000150f9,uVar1);
 uVar1 = test_cpp_lambda();
 printf(&DAT_00015115,uVar1);
 uVar1 = test_cpp_exception();
 printf(&DAT_00015131,uVar1);
 uVar1 = test_cpp_smart_ptr();
 printf(&DAT_0001514e,uVar1);
 uVar1 = test_cpp_rtti();
 printf(&DAT_0001516b,uVar1);
 return;
}

// Function: main @ 0x12530
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: std___uniq_ptr_data<int,test_cpp_smart_ptr()_$_2,true,false>___uniq_ptr_impl<test_cpp_smart_ptr()_$_2_const&> @ 0x12560
void __thiscall
std___uniq_ptr_data<int,test_cpp_smart_ptr()_$_2,true,false>_
__uniq_ptr_impl_test_cpp_smart_ptr______2_const__
 (__uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ *this,int *param_1,__2 *param_2
 )
{
 __uniq_ptr_impl_int_test_cpp_smart_ptr______2___uniq_ptr_impl_test_cpp_smart_ptr______2_const__
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this,param_1,param_2);
 return;
}

// Function: std___uniq_ptr_impl<int,test_cpp_smart_ptr()_$_2>___uniq_ptr_impl<test_cpp_smart_ptr()_$_2_const&> @ 0x125a0
void __thiscall
std___uniq_ptr_impl<int,test_cpp_smart_ptr()_$_2>_
__uniq_ptr_impl_test_cpp_smart_ptr______2_const__
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this,int *param_1,__2 *param_2)
{
 __2 *p_Var1;
 p_Var1 = forward_test_cpp_smart_ptr______2_const__((type *)param_2);
 tuple<int*,test_cpp_smart_ptr()_$_2>_tuple_int___test_cpp_smart_ptr______2_const__true_
 ((tuple_int__test_cpp_smart_ptr______2_ *)this,&param_1,p_Var1);
 return;
}

// Function: std_forward<test_cpp_smart_ptr()_$_2_const&> @ 0x125f0
__2 * std_forward_test_cpp_smart_ptr______2_const__(type *param_1)
{
 return (__2 *)param_1;
}

// Function: std_tuple<int*,test_cpp_smart_ptr()_$_2>_tuple<int*&,test_cpp_smart_ptr()_$_2_const&,true> @ 0x12600
void __thiscall
std_tuple<int*,test_cpp_smart_ptr()_$_2>_tuple_int___test_cpp_smart_ptr______2_const__true_
 (tuple_int__test_cpp_smart_ptr______2_ *this,int **param_1,__2 *param_2)
{
 int **ppiVar1;
 __2 *p_Var2;
 ppiVar1 = forward_int___((type *)param_1);
 p_Var2 = forward_test_cpp_smart_ptr______2_const__((type *)param_2);
 _Tuple_impl<0u,int*,test_cpp_smart_ptr()_$_2>_
 _Tuple_impl_int___test_cpp_smart_ptr______2_const__void_
 ((_Tuple_impl_0u_int__test_cpp_smart_ptr______2_ *)this,ppiVar1,p_Var2);
 return;
}

// Function: std__Tuple_impl_0u_int__test_cpp_smart_ptr______2___Tuple_impl_int___test_cpp_smart_ptr______2_const__void_ @ 0x12680
void __thiscall
std__Tuple_impl_0u_int__test_cpp_smart_ptr______2_
_Tuple_impl_int___test_cpp_smart_ptr______2_const__void_
 (_Tuple_impl_0u_int__test_cpp_smart_ptr______2_ *this,int **param_1,__2 *param_2)
{
 int **ppiVar1;
 forward_test_cpp_smart_ptr______2_const__((type *)param_2);
 std__Tuple_impl_1u_test_cpp_smart_ptr______2___Tuple_impl((__2 *)this);
 ppiVar1 = forward_int___((type *)param_1);
 std__Head_base_0u_int__false___Head_base_int___((_Head_base_0u_int__false_ *)this,ppiVar1);
 return;
}

// Function: std__Tuple_impl_1u_test_cpp_smart_ptr______2___Tuple_impl @ 0x12700
void std__Tuple_impl_1u_test_cpp_smart_ptr______2___Tuple_impl(__2 *param_1)
{
 std__Head_base_1u_test_cpp_smart_ptr______2_true___Head_base(param_1);
 return;
}

// Function: std__Head_base_1u_test_cpp_smart_ptr______2_true___Head_base @ 0x12740
__2 * std__Head_base_1u_test_cpp_smart_ptr______2_true___Head_base(__2 *param_1)
{
 return param_1;
}

// Function: std___uniq_ptr_impl<int,test_cpp_smart_ptr()_$_2>__M_ptr @ 0x12750
int ** __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr______2__M_ptr
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
 return (int **)get_0u_int__test_cpp_smart_ptr______2_((tuple *)this);
}

// Function: std_unique_ptr<int,test_cpp_smart_ptr()_$_2>_get_deleter @ 0x12780
unsigned int __thiscall
std_unique_ptr<int,test_cpp_smart_ptr()_$_2>_get_deleter
 (unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
 unsigned int uVar1;
 uVar1 = __uniq_ptr_impl_int_test_cpp_smart_ptr______2__M_deleter
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
 return uVar1;
}

// Function: test_cpp_smart_ptr()_$_2_operator() @ 0x127d0
void __thiscall test_cpp_smart_ptr()_$_2_operator__(__2 *this,int *param_1)
{
 *param_1 = -1;
 if (param_1 != (int *)0x0) {
 operator_delete(param_1);
 }
 return;
}

// Function: std_get<0u,int*,test_cpp_smart_ptr()_$_2> @ 0x12820
type * std_get_0u_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___get_helper<0u,int*,test_cpp_smart_ptr()_$_2> @ 0x12850
int ** std___get_helper_0u_int__test_cpp_smart_ptr______2_(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0u_int__test_cpp_smart_ptr______2___M_head(param_1);
 return ppiVar1;
}

// Function: std__Tuple_impl<0u,int*,test_cpp_smart_ptr()_$_2>__M_head @ 0x12880
int ** std__Tuple_impl_0u_int__test_cpp_smart_ptr______2___M_head(_Tuple_impl *param_1)
{
 return (int **)_Head_base_0u_int__false___M_head((_Head_base *)param_1);
}

// Function: std___uniq_ptr_impl<int,test_cpp_smart_ptr()_$_2>__M_deleter @ 0x128b0
__2 * __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr______2__M_deleter
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
 return (__2 *)get_1u_int__test_cpp_smart_ptr______2_((tuple *)this);
}

// Function: std_get<1u,int*,test_cpp_smart_ptr()_$_2> @ 0x128e0
type * std_get_1u_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
 __2 *p_Var1;
 p_Var1 = __get_helper_1u_test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
 return (type *)p_Var1;
}

// Function: std___get_helper<1u,test_cpp_smart_ptr()_$_2> @ 0x12910
__2 * std___get_helper_1u_test_cpp_smart_ptr______2_(_Tuple_impl *param_1)
{
 __2 *p_Var1;
 p_Var1 = (__2 *)_Tuple_impl_1u_test_cpp_smart_ptr______2___M_head(param_1);
 return p_Var1;
}

// Function: std__Tuple_impl<1u,test_cpp_smart_ptr()_$_2>__M_head @ 0x12940
__2 * std__Tuple_impl_1u_test_cpp_smart_ptr______2___M_head(_Tuple_impl *param_1)
{
 return (__2 *)_Head_base_1u_test_cpp_smart_ptr______2_true___M_head((_Head_base *)param_1);
}

// Function: std__Head_base_1u_test_cpp_smart_ptr______2_true___M_head @ 0x12970
__2 * std__Head_base_1u_test_cpp_smart_ptr______2_true___M_head(_Head_base *param_1)
{
 return (__2 *)param_1;
}

// Function: std_unique_ptr<int,test_cpp_smart_ptr()_$_2>_get @ 0x12980
unsigned int __thiscall
std_unique_ptr<int,test_cpp_smart_ptr()_$_2>_get(unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
 unsigned int uVar1;
 uVar1 = __uniq_ptr_impl_int_test_cpp_smart_ptr______2__M_ptr
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
 return uVar1;
}

// Function: std___uniq_ptr_impl<int,test_cpp_smart_ptr()_$_2>__M_ptr @ 0x129d0
unsigned int __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr______2__M_ptr
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)get_0u_int__test_cpp_smart_ptr______2_((tuple *)this);
 return *puVar1;
}

// Function: std_get<0u,int*,test_cpp_smart_ptr()_$_2> @ 0x12a00
type * std_get_0u_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___get_helper<0u,int*,test_cpp_smart_ptr()_$_2> @ 0x12a30
int ** std___get_helper_0u_int__test_cpp_smart_ptr______2_(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0u_int__test_cpp_smart_ptr______2___M_head(param_1);
 return ppiVar1;
}

// Function: std__Tuple_impl<0u,int*,test_cpp_smart_ptr()_$_2>__M_head @ 0x12a60
void std__Tuple_impl_0u_int__test_cpp_smart_ptr______2___M_head(_Tuple_impl *param_1)
{
 _Head_base_0u_int__false___M_head((_Head_base *)param_1);
 return;
}

// Function: SimpleClass_SimpleClass @ 0x12a90
void __thiscall SimpleClass_SimpleClass(SimpleClass *this,int param_1,char *param_2)
{
 *(int *)this = param_1;
 strncpy((char *)(this + 4),param_2,0x1f);
 this[0x23] = (SimpleClass)0x0;
 return;
}

// Function: SimpleClass_setValue @ 0x12ae0
void __thiscall SimpleClass_setValue(SimpleClass *this,int param_1)
{
 *(int *)this = param_1;
 return;
}

// Function: SimpleClass_getValue @ 0x12b00
unsigned int __thiscall SimpleClass_getValue(SimpleClass *this)
{
 return *(unsigned int *)this;
}

// Function: SimpleClass_compute @ 0x12b10
int __thiscall SimpleClass_compute(SimpleClass *this,int param_1)
{
 int iVar1;
 size_t sVar2;
 iVar1 = *(int *)this;
 sVar2 = strlen((char *)(this + 4));
 return iVar1 * param_1 + sVar2;
}

// Function: SimpleClass_getClassID @ 0x12b50
unsigned int SimpleClass_getClassID(void)
{
 return 0x1234;
}

// Function: LifecycleClass_LifecycleClass @ 0x12b60
void __thiscall LifecycleClass_LifecycleClass(LifecycleClass *this,uint param_1)
{
 uint uVar1;
 void *pvVar2;
 uint local_c;
 *(uint *)(this + 4) = param_1;
 uVar1 = (uint)((ulonglong)param_1 * 4);
 if ((int)((ulonglong)param_1 * 4 >> 0x20) != 0) {
 uVar1 = 0xffffffff;
 }
 pvVar2 = operator_new__(uVar1);
 *(void **)this = pvVar2;
 for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
 *(uint *)(*(int *)this + local_c * 4) = local_c * 10;
 }
 instance_count = instance_count + 1;
 return;
}

// Function: LifecycleClass_getData @ 0x12c00
unsigned int __thiscall LifecycleClass_getData(LifecycleClass *this,uint param_1)
{
 unsigned int local_c;
 if (param_1 < *(uint *)(this + 4)) {
 local_c = *(unsigned int *)(*(int *)this + param_1 * 4);
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}

// Function: LifecycleClass_getInstanceCount @ 0x12c50
unsigned int LifecycleClass_getInstanceCount(void)
{
 return instance_count;
}

// Function: LifecycleClass_~LifecycleClass @ 0x12c70
void __thiscall LifecycleClass__LifecycleClass(LifecycleClass *this)
{
 if (*(void **)this != (void *)0x0) {
 operator_delete__(*(void **)this);
 }
 instance_count = instance_count + -1;
 return;
}

// Function: Base_Base @ 0x12cc0
void __thiscall Base_Base(Base *this)
{
 *(char ***)this = &PTR_virtual_func_00018c3c;
 return;
}

// Function: Derived_Derived @ 0x12cf0
void __thiscall Derived_Derived(Derived *this,int param_1)
{
 Base_Base((Base *)this);
 *(char ***)this = &PTR_virtual_func_00018c5c;
 *(int *)(this + 4) = param_1;
 return;
}

// Function: Base_virtual_func @ 0x12d40
int __thiscall Base_virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Derived_virtual_func @ 0x12d60
int __thiscall Derived_virtual_func(Derived *this,int param_1)
{
 return param_1 * *(int *)(this + 4);
}

// Function: Derived_~Derived @ 0x12d80
void __thiscall Derived__Derived(Derived *this)
{
 Base__Base((Base *)this);
 return;
}

// Function: Base_~Base @ 0x12db0
Base * __thiscall Base__Base(Base *this)
{
 return this;
}

// Function: MultiDerived_MultiDerived @ 0x12dc0
void __thiscall MultiDerived_MultiDerived(MultiDerived *this)
{
 BaseA_BaseA((BaseA *)this);
 BaseB_BaseB((BaseB *)(this + 8));
 *(char ***)this = &PTR_funcA_00018c80;
 *(char ***)(this + 8) = &PTR_funcB_00018c98;
 return;
}

// Function: MultiDerived_~MultiDerived @ 0x12e20
void __thiscall MultiDerived__MultiDerived(MultiDerived *this)
{
 BaseB__BaseB((BaseB *)(this + 8));
 BaseA__BaseA((BaseA *)this);
 return;
}

// Function: DiamondDerived_DiamondDerived @ 0x12e60
void __thiscall DiamondDerived_DiamondDerived(DiamondDerived *this)
{
 VirtualBase_VirtualBase((VirtualBase *)(this + 0x10));
 MiddleA_MiddleA((MiddleA *)this);
 MiddleB_MiddleB((MiddleB *)(this + 8));
 *(unsigned int *)this = 0x18d08;
 *(unsigned int *)(this + 0x10) = 0x18d3c;
 *(unsigned int *)(this + 8) = 0x18d20;
 return;
}

// Function: DiamondDerived_~DiamondDerived @ 0x12f00
void __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this);
 VirtualBase__VirtualBase((VirtualBase *)(this + 0x10));
 return;
}

// Function: Point_Point @ 0x12f50
void __thiscall Point_Point(Point *this,int param_1,int param_2)
{
 *(int *)this = param_1;
 *(int *)(this + 4) = param_2;
 return;
}

// Function: Point_operator+ @ 0x12f70
Point * __thiscall Point_operator_(Point *this,Point *param_1)
{
 int *in_stack_0000000c;
 Point(this,*(int *)param_1 + *in_stack_0000000c,*(int *)(param_1 + 4) + in_stack_0000000c[1]);
 return this;
}

// Function: Point_operator== @ 0x12fd0
bool __thiscall Point_operator__(Point *this,Point *param_1)
{
 bool local_5;
 local_5 = false;
 if (*(int *)this == *(int *)param_1) {
 local_5 = *(int *)(this + 4) == *(int *)(param_1 + 4);
 }
 return local_5;
}

// Function: Point_operator++ @ 0x13020
void __thiscall Point_operator__(Point *this)
{
 *(int *)this = *(int *)this + 1;
 *(int *)(this + 4) = *(int *)(this + 4) + 1;
 return;
}

// Function: template_max<int> @ 0x13040
int template_max_int_(int param_1,int param_2)
{
 int local_8;
 if (param_2 < param_1) {
 local_8 = param_1;
 }
 else {
 local_8 = param_2;
 }
 return local_8;
}

// Function: template_max<double> @ 0x13070
double template_max_double_(double param_1,double param_2)
{
 double local_c;
 if (param_1 <= param_2) {
 local_c = param_2;
 }
 else {
 local_c = param_1;
 }
 return local_c;
}

// Function: template_swap<int> @ 0x130b0
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>_Container @ 0x130e0
void __thiscall Container<int>_Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>_push @ 0x13100
void __thiscall Container<int>_push(Container_int_ *this,int param_1)
{
 int iVar1;
 if (*(int *)(this + 0x28) < 10) {
 iVar1 = *(int *)(this + 0x28);
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>_get @ 0x13140
unsigned int __thiscall Container<int>_get(Container_int_ *this,int param_1)
{
 unsigned int local_8;
 if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
 local_8 = 0;
 }
 else {
 local_8 = *(unsigned int *)(this + param_1 * 4);
 }
 return local_8;
}

// Function: Container<int>_getSize @ 0x13190
unsigned int __thiscall Container<int>_getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>_Container @ 0x131a0
void __thiscall Container<double>_Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>_push @ 0x131c0
void __thiscall Container<double>_push(Container_double_ *this,double param_1)
{
 int iVar1;
 if (*(int *)(this + 0x50) < 10) {
 iVar1 = *(int *)(this + 0x50);
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>_get @ 0x13200
longdouble __thiscall Container<double>_get(Container_double_ *this,int param_1)
{
 double local_c;
 if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
 local_c = 0.0;
 }
 else {
 local_c = *(double *)(this + param_1 * 8);
 }
 return (longdouble)local_c;
}

// Function: Container<double>_getSize @ 0x13260
unsigned int __thiscall Container<double>_getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: std_unique_ptr<int,std_default_delete<int>>_unique_ptr<std_default_delete<int>,void> @ 0x13270
void __thiscall
std_unique_ptr_int_std__default_delete_int___unique_ptr_std__default_delete_int__void_
 (unique_ptr_int_std__default_delete_int__ *this,int *param_1)
{
 __uniq_ptr_data_int_std__default_delete_int__true_true___uniq_ptr_impl
 ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this,param_1);
 return;
}

// Function: std_unique_ptr<int,std_default_delete<int>>_operator* @ 0x132c0
void __thiscall
std_unique_ptr_int_std__default_delete_int___operator_
 (unique_ptr_int_std__default_delete_int__ *this)
{
 get(this);
 return;
}

// Function: std_move<std_unique_ptr<int,std_default_delete<int>>&> @ 0x13300
type * std_move_std__unique_ptr_int_std__default_delete_int____(unique_ptr *param_1)
{
 return (type *)param_1;
}

// Function: std_unique_ptr<int,std_default_delete<int>>_unique_ptr @ 0x13310
void __thiscall
std_unique_ptr<int,std_default_delete<int>>_unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this,unique_ptr *param_1)
{
 __uniq_ptr_data<int,std_default_delete<int>,true,true>___uniq_ptr_data
 ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this,
 (__uniq_ptr_data *)param_1);
 return;
}

// Function: std_unique_ptr<int[],std_default_delete<int[]>>_unique_ptr<int*,std_default_delete<int[]>,void,bool> @ 0x13350
void __thiscall
std_unique_ptr_int___std__default_delete_int____
unique_ptr_int__std__default_delete_int____void_bool_
 (unique_ptr_int___std__default_delete_int____ *this,int *param_1)
{
 __uniq_ptr_data_int_std__default_delete_int____true_true___uniq_ptr_impl
 ((__uniq_ptr_data_int_std__default_delete_int____true_true_ *)this,param_1);
 return;
}

// Function: std_unique_ptr<int[],std_default_delete<int[]>>_operator[] @ 0x133a0
int __thiscall
std_unique_ptr_int___std__default_delete_int____operator__
 (unique_ptr_int___std__default_delete_int____ *this,uint param_1)
{
 int iVar1;
 iVar1 = get(this);
 return iVar1 + param_1 * 4;
}

// Function: std_unique_ptr<int[],std_default_delete<int[]>>_~unique_ptr @ 0x133f0
void __thiscall
std_unique_ptr_int___std__default_delete_int_____unique_ptr
 (unique_ptr_int___std__default_delete_int____ *this)
{
 int *piVar1;
 unsigned int uVar2;
 char **ppuVar3;
 ppuVar3 = &_GLOBAL_OFFSET_TABLE_;
 piVar1 = (int *)__uniq_ptr_impl_int_std__default_delete_int_____M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 if (*piVar1 != 0) {
 uVar2 = get_deleter();
 _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_
 (uVar2,*piVar1,ppuVar3,this);
 }
 *piVar1 = 0;
 return;
}

// Function: std_unique_ptr<int,std_default_delete<int>>_~unique_ptr @ 0x13470
void __thiscall
std_unique_ptr<int,std_default_delete<int>>__unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this)
{
 int **ppiVar1;
 default_delete_int_ *this_00;
 int **ppiVar2;
 ppiVar1 = (int **)__uniq_ptr_impl_int_std__default_delete_int____M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (default_delete_int_ *)get_deleter(this);
 ppiVar2 = (int **)move_int___(ppiVar1);
 default_delete<int>_operator__(this_00,*ppiVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}

// Function: RTTIDerivedA_RTTIDerivedA @ 0x13500
void __thiscall RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase_RTTIBase((RTTIBase *)this);
 *(char ***)this = &PTR__RTTIDerivedA_00018eb8;
 return;
}

// Function: RTTIDerivedB_RTTIDerivedB @ 0x13540
void __thiscall RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase_RTTIBase((RTTIBase *)this);
 *(char ***)this = &PTR__RTTIDerivedB_00018ee0;
 return;
}

// Function: std_type_info_operator== @ 0x13580
bool __thiscall std_type_info_operator__(type_info *this,type_info *param_1)
{
 int iVar1;
 bool local_15;
 bool local_9;
 local_9 = true;
 if (*(int *)(this + 4) != *(int *)(param_1 + 4)) {
 local_15 = false;
 if (**(char **)(this + 4) != '*') {
 iVar1 = strcmp(*(char **)(this + 4),*(char **)(param_1 + 4));
 local_15 = iVar1 == 0;
 }
 local_9 = local_15;
 }
 return local_9;
}

// Function: RTTIDerivedA_derivedA_data @ 0x13610
unsigned int RTTIDerivedA_derivedA_data(void)
{
 return 100;
}

// Function: RTTIDerivedB_derivedB_data @ 0x13620
unsigned int RTTIDerivedB_derivedB_data(void)
{
 return 200;
}

// Function: std_type_info_name @ 0x13630
int __thiscall std_type_info_name(type_info *this)
{
 int local_c;
 if (**(char **)(this + 4) == '*') {
 local_c = *(int *)(this + 4) + 1;
 }
 else {
 local_c = *(int *)(this + 4);
 }
 return local_c;
}

// Function: Base_getName @ 0x13670
char * Base_getName(void)
{
 return &DAT_00015189;
}

// Function: Base_~Base @ 0x13690
void __thiscall Base__Base(Base *this)
{
 _Base(this);
 operator_delete(this);
 return;
}

// Function: Derived_getName @ 0x136d0
char * Derived_getName(void)
{
 return "Derived";
}

// Function: Derived_~Derived @ 0x136f0
void __thiscall Derived__Derived(Derived *this)
{
 _Derived(this);
 operator_delete(this);
 return;
}

// Function: BaseA_BaseA @ 0x13730
void __thiscall BaseA_BaseA(BaseA *this)
{
 *(char ***)this = &PTR_funcA_00018cdc;
 return;
}

// Function: BaseB_BaseB @ 0x13760
void __thiscall BaseB_BaseB(BaseB *this)
{
 *(char ***)this = &PTR_funcB_00018cf0;
 return;
}

// Function: MultiDerived_funcA @ 0x13790
unsigned int MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived_~MultiDerived @ 0x137a0
void __thiscall MultiDerived__MultiDerived(MultiDerived *this)
{
 _MultiDerived(this);
 operator_delete(this);
 return;
}

// Function: MultiDerived_funcB @ 0x137e0
unsigned int MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived_funcB @ 0x137f0
void __thiscall MultiDerived_funcB(MultiDerived *this)
{
 funcB();
 return;
}

// Function: MultiDerived_~MultiDerived @ 0x13820
void __thiscall MultiDerived__MultiDerived(MultiDerived *this)
{
 _MultiDerived(this + -8);
 return;
}

// Function: MultiDerived_~MultiDerived @ 0x13850
void __thiscall MultiDerived__MultiDerived(MultiDerived *this)
{
 _MultiDerived(this + -8);
 return;
}

// Function: BaseA_funcA @ 0x13880
unsigned int BaseA_funcA(void)
{
 return 10;
}

// Function: BaseA_~BaseA @ 0x13890
BaseA * __thiscall BaseA__BaseA(BaseA *this)
{
 return this;
}

// Function: BaseA_~BaseA @ 0x138a0
void __thiscall BaseA__BaseA(BaseA *this)
{
 _BaseA(this);
 operator_delete(this);
 return;
}

// Function: BaseB_funcB @ 0x138e0
unsigned int BaseB_funcB(void)
{
 return 0x14;
}

// Function: BaseB_~BaseB @ 0x138f0
BaseB * __thiscall BaseB__BaseB(BaseB *this)
{
 return this;
}

// Function: BaseB_~BaseB @ 0x13900
void __thiscall BaseB__BaseB(BaseB *this)
{
 _BaseB(this);
 operator_delete(this);
 return;
}

// Function: VirtualBase_VirtualBase @ 0x13940
void __thiscall VirtualBase_VirtualBase(VirtualBase *this)
{
 *(char ***)this = &PTR_func_00018e2c;
 return;
}

// Function: MiddleA_MiddleA @ 0x13970
void __thiscall MiddleA_MiddleA(MiddleA *this)
{
 unsigned int *in_stack_00000008;
 *(unsigned int *)this = *in_stack_00000008;
 *(unsigned int *)(this + *(int *)(*(int *)this + -0xc)) = in_stack_00000008[1];
 return;
}

// Function: MiddleB_MiddleB @ 0x13990
void __thiscall MiddleB_MiddleB(MiddleB *this)
{
 unsigned int *in_stack_00000008;
 *(unsigned int *)this = *in_stack_00000008;
 *(unsigned int *)(this + *(int *)(*(int *)this + -0xc)) = in_stack_00000008[1];
 return;
}

// Function: MiddleA_func @ 0x139b0
int __thiscall MiddleA_func(MiddleA *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}

// Function: MiddleA_~MiddleA @ 0x139d0
void __thiscall MiddleA__MiddleA(MiddleA *this)
{
 _MiddleA(this);
 VirtualBase__VirtualBase((VirtualBase *)(this + 8));
 return;
}

// Function: MiddleA_~MiddleA @ 0x13a20
void __thiscall MiddleA__MiddleA(MiddleA *this)
{
 _MiddleA(this);
 operator_delete(this);
 return;
}

// Function: MiddleA_func @ 0x13a60
void __thiscall MiddleA_func(MiddleA *this)
{
 func(this + *(int *)(*(int *)this + -0xc));
 return;
}

// Function: MiddleA_~MiddleA @ 0x13a90
void __thiscall MiddleA__MiddleA(MiddleA *this)
{
 _MiddleA(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: MiddleA_~MiddleA @ 0x13ac0
void __thiscall MiddleA__MiddleA(MiddleA *this)
{
 _MiddleA(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: MiddleB_func @ 0x13af0
int __thiscall MiddleB_func(MiddleB *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}

// Function: MiddleB_~MiddleB @ 0x13b10
void __thiscall MiddleB__MiddleB(MiddleB *this)
{
 _MiddleB(this);
 VirtualBase__VirtualBase((VirtualBase *)(this + 8));
 return;
}

// Function: MiddleB_~MiddleB @ 0x13b60
void __thiscall MiddleB__MiddleB(MiddleB *this)
{
 _MiddleB(this);
 operator_delete(this);
 return;
}

// Function: MiddleB_func @ 0x13ba0
void __thiscall MiddleB_func(MiddleB *this)
{
 func(this + *(int *)(*(int *)this + -0xc));
 return;
}

// Function: MiddleB_~MiddleB @ 0x13bd0
void __thiscall MiddleB__MiddleB(MiddleB *this)
{
 _MiddleB(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: MiddleB_~MiddleB @ 0x13c00
void __thiscall MiddleB__MiddleB(MiddleB *this)
{
 _MiddleB(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: DiamondDerived_func @ 0x13c30
int __thiscall DiamondDerived_func(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived_~DiamondDerived @ 0x13c50
void __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this);
 operator_delete(this);
 return;
}

// Function: DiamondDerived_func @ 0x13c90
void __thiscall DiamondDerived_func(DiamondDerived *this)
{
 func(this + -8);
 return;
}

// Function: DiamondDerived_~DiamondDerived @ 0x13cc0
void __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + -8);
 return;
}

// Function: DiamondDerived_~DiamondDerived @ 0x13cf0
void __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + -8);
 return;
}

// Function: DiamondDerived_func @ 0x13d20
void __thiscall DiamondDerived_func(DiamondDerived *this)
{
 func(this + *(int *)(*(int *)this + -0xc));
 return;
}

// Function: DiamondDerived_~DiamondDerived @ 0x13d50
void __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: DiamondDerived_~DiamondDerived @ 0x13d80
void __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: VirtualBase_func @ 0x13db0
unsigned int VirtualBase_func(void)
{
 return 100;
}

// Function: VirtualBase_~VirtualBase @ 0x13dc0
VirtualBase * __thiscall VirtualBase__VirtualBase(VirtualBase *this)
{
 return this;
}

// Function: VirtualBase_~VirtualBase @ 0x13dd0
void __thiscall VirtualBase__VirtualBase(VirtualBase *this)
{
 _VirtualBase(this);
 operator_delete(this);
 return;
}

// Function: MiddleA_~MiddleA @ 0x13e10
MiddleA * __thiscall MiddleA__MiddleA(MiddleA *this)
{
 return this;
}

// Function: MiddleB_~MiddleB @ 0x13e20
MiddleB * __thiscall MiddleB__MiddleB(MiddleB *this)
{
 return this;
}

// Function: DiamondDerived_~DiamondDerived @ 0x13e30
void __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 MiddleB__MiddleB((MiddleB *)(this + 8));
 MiddleA__MiddleA((MiddleA *)this);
 return;
}

// Function: std___uniq_ptr_data<int,std_default_delete<int>,true,true>___uniq_ptr_data @ 0x13e90
void __thiscall
__uniq_ptr_data_int_std__default_delete_int__true_true___uniq_ptr_data
 (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,__uniq_ptr_data *param_1)
{
 __uniq_ptr_impl_int_std__default_delete_int______uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,(__uniq_ptr_impl *)param_1);
 return;
}

// Function: std___uniq_ptr_impl<int,std_default_delete<int>>___uniq_ptr_impl @ 0x13ed0
void __thiscall
__uniq_ptr_impl_int_std__default_delete_int______uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int__ *this,__uniq_ptr_impl *param_1)
{
 type *ptVar1;
 unsigned int *puVar2;
 ptVar1 = move_std__tuple_int__std__default_delete_int____((tuple *)param_1);
 tuple_int__std__default_delete_int___tuple
 ((tuple_int__std__default_delete_int__ *)this,(tuple *)ptVar1);
 puVar2 = (unsigned int *)_M_ptr((__uniq_ptr_impl_int_std__default_delete_int__ *)param_1);
 *puVar2 = 0;
 return;
}

// Function: std_move<std_tuple<int*,std_default_delete<int>>&> @ 0x13f50
type * std_move_std__tuple_int__std__default_delete_int____(tuple *param_1)
{
 return (type *)param_1;
}

// Function: std_tuple<int*,std_default_delete<int>>_tuple @ 0x13f60
void __thiscall
tuple_int__std__default_delete_int___tuple
 (tuple_int__std__default_delete_int__ *this,tuple *param_1)
{
 _Tuple_impl_0u_int__std__default_delete_int____Tuple_impl
 ((_Tuple_impl_0u_int__std__default_delete_int__ *)this,(_Tuple_impl *)param_1);
 return;
}

// Function: std___uniq_ptr_impl<int,std_default_delete<int>>__M_ptr @ 0x13fa0
int ** __thiscall
std___uniq_ptr_impl_int_std__default_delete_int____M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 return (int **)get_0u_int__std__default_delete_int__((tuple *)this);
}

// Function: __clang_call_terminate @ 0x13fd0
void __clang_call_terminate(unsigned int param_1)
{
 __cxa_begin_catch(param_1,&_GLOBAL_OFFSET_TABLE_);
 std_terminate();
}

// Function: std__Tuple_impl_0u_int__std__default_delete_int____Tuple_impl @ 0x14000
void __thiscall
std__Tuple_impl_0u_int__std__default_delete_int____Tuple_impl
 (_Tuple_impl_0u_int__std__default_delete_int__ *this,_Tuple_impl *param_1)
{
 std__Tuple_impl_1u_std__default_delete_int____Tuple_impl((_Tuple_impl *)this);
 *(unsigned int *)this = *(unsigned int *)param_1;
 return;
}

// Function: std__Tuple_impl<1u,std_default_delete<int>>__Tuple_impl @ 0x14040
_Tuple_impl * std__Tuple_impl_1u_std__default_delete_int____Tuple_impl(_Tuple_impl *param_1)
{
 return param_1;
}

// Function: std_get<0u,int*,std_default_delete<int>> @ 0x14050
type * std_get_0u_int__std__default_delete_int__(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___get_helper<0u,int*,std_default_delete<int>> @ 0x14080
int ** std___get_helper_0u_int__std__default_delete_int__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0u_int__std__default_delete_int____M_head(param_1);
 return ppiVar1;
}

// Function: std__Tuple_impl<0u,int*,std_default_delete<int>>__M_head @ 0x140b0
int ** std__Tuple_impl_0u_int__std__default_delete_int____M_head(_Tuple_impl *param_1)
{
 return (int **)std__Head_base_0u_int__false___M_head((_Head_base *)param_1);
}

// Function: std__Head_base<0u,int*,false>__M_head @ 0x140e0
int ** std__Head_base<0u,int*,false>__M_head(_Head_base *param_1)
{
 return (int **)param_1;
}

// Function: RTTIBase_RTTIBase @ 0x140f0
void __thiscall RTTIBase_RTTIBase(RTTIBase *this)
{
 *(char ***)this = &PTR__RTTIBase_00018ecc;
 return;
}

// Function: RTTIDerivedA_~RTTIDerivedA @ 0x14120
void __thiscall RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase__RTTIBase((RTTIBase *)this);
 return;
}

// Function: RTTIDerivedA_~RTTIDerivedA @ 0x14150
void __thiscall RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
 _RTTIDerivedA(this);
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA_getType @ 0x14190
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase_~RTTIBase @ 0x141a0
RTTIBase * __thiscall RTTIBase__RTTIBase(RTTIBase *this)
{
 return this;
}

// Function: RTTIBase_~RTTIBase @ 0x141b0
void __thiscall RTTIBase__RTTIBase(RTTIBase *this)
{
 _RTTIBase(this);
 operator_delete(this);
 return;
}

// Function: RTTIBase_getType @ 0x141f0
unsigned int RTTIBase_getType(void)
{
 return 0;
}

// Function: RTTIDerivedB_~RTTIDerivedB @ 0x14200
void __thiscall RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase__RTTIBase((RTTIBase *)this);
 return;
}

// Function: RTTIDerivedB_~RTTIDerivedB @ 0x14230
void __thiscall RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)
{
 _RTTIDerivedB(this);
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB_getType @ 0x14270
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: std___uniq_ptr_data<int,std_default_delete<int>,true,true>___uniq_ptr_impl @ 0x14280
void __thiscall
__uniq_ptr_data_int_std__default_delete_int__true_true___uniq_ptr_impl
 (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,int *param_1)
{
 __uniq_ptr_impl_int_std__default_delete_int______uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,param_1);
 return;
}

// Function: std___uniq_ptr_impl<int,std_default_delete<int>>___uniq_ptr_impl @ 0x142c0
void __thiscall
__uniq_ptr_impl_int_std__default_delete_int______uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int__ *this,int *param_1)
{
 int **ppiVar1;
 tuple_int__std__default_delete_int___tuple_true_true_
 ((tuple_int__std__default_delete_int__ *)this);
 ppiVar1 = (int **)_M_ptr(this);
 *ppiVar1 = param_1;
 return;
}

// Function: std_tuple<int*,std_default_delete<int>>_tuple<true,true> @ 0x14310
void __thiscall
tuple_int__std__default_delete_int___tuple_true_true_
 (tuple_int__std__default_delete_int__ *this)
{
 _Tuple_impl_0u_int__std__default_delete_int____Tuple_impl
 ((_Tuple_impl_0u_int__std__default_delete_int__ *)this);
 return;
}

// Function: std__Tuple_impl<0u,int*,std_default_delete<int>>__Tuple_impl @ 0x14350
void __thiscall
std__Tuple_impl_0u_int__std__default_delete_int____Tuple_impl
 (_Tuple_impl_0u_int__std__default_delete_int__ *this)
{
 std__Tuple_impl_1u_std__default_delete_int____Tuple_impl
 ((_Tuple_impl_1u_std__default_delete_int__ *)this);
 std__Head_base_0u_int__false___Head_base((_Head_base_0u_int__false_ *)this);
 return;
}

// Function: std__Tuple_impl<1u,std_default_delete<int>>__Tuple_impl @ 0x14390
void __thiscall
std__Tuple_impl_1u_std__default_delete_int____Tuple_impl
 (_Tuple_impl_1u_std__default_delete_int__ *this)
{
 std__Head_base_1u_std__default_delete_int__true___Head_base
 ((_Head_base_1u_std__default_delete_int__true_ *)this);
 return;
}

// Function: std__Head_base<0u,int*,false>__Head_base @ 0x143c0
void __thiscall std__Head_base_0u_int__false___Head_base(_Head_base_0u_int__false_ *this)
{
 *(unsigned int *)this = 0;
 return;
}

// Function: std__Head_base<1u,std_default_delete<int>,true>__Head_base @ 0x143e0
_Head_base_1u_std__default_delete_int__true_ * __thiscall
std__Head_base_1u_std__default_delete_int__true___Head_base
 (_Head_base_1u_std__default_delete_int__true_ *this)
{
 return this;
}

// Function: std_unique_ptr<int,std_default_delete<int>>_get_deleter @ 0x143f0
unsigned int __thiscall
std_unique_ptr_int_std__default_delete_int___get_deleter
 (unique_ptr_int_std__default_delete_int__ *this)
{
 unsigned int uVar1;
 uVar1 = __uniq_ptr_impl_int_std__default_delete_int____M_deleter
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 return uVar1;
}

// Function: std_default_delete<int>_operator() @ 0x14440
void __thiscall std_default_delete_int__operator__(default_delete_int_ *this,int *param_1)
{
 if (param_1 != (int *)0x0) {
 operator_delete(param_1);
 }
 return;
}

// Function: std_move<int*&> @ 0x14480
type * std_move_int___(int **param_1)
{
 return (type *)param_1;
}

// Function: std___uniq_ptr_impl<int,std_default_delete<int>>__M_deleter @ 0x14490
default_delete * __thiscall
std___uniq_ptr_impl_int_std__default_delete_int____M_deleter
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 return (default_delete *)get_1u_int__std__default_delete_int__((tuple *)this);
}

// Function: std_get<1u,int*,std_default_delete<int>> @ 0x144c0
type * std_get_1u_int__std__default_delete_int__(tuple *param_1)
{
 default_delete *pdVar1;
 pdVar1 = __get_helper_1u_std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}

// Function: std___get_helper<1u,std_default_delete<int>> @ 0x144f0
default_delete * std___get_helper_1u_std__default_delete_int__(_Tuple_impl *param_1)
{
 default_delete *pdVar1;
 pdVar1 = (default_delete *)_Tuple_impl_1u_std__default_delete_int____M_head(param_1);
 return pdVar1;
}

// Function: std__Tuple_impl<1u,std_default_delete<int>>__M_head @ 0x14520
default_delete * std__Tuple_impl_1u_std__default_delete_int____M_head(_Tuple_impl *param_1)
{
 return (default_delete *)std__Head_base_1u_std__default_delete_int__true___M_head((_Head_base *)param_1);
}

// Function: std__Head_base<1u,std_default_delete<int>,true>__M_head @ 0x14550
default_delete * std__Head_base_1u_std__default_delete_int__true___M_head(_Head_base *param_1)
{
 return (default_delete *)param_1;
}

// Function: std_unique_ptr<int,std_default_delete<int>>_get @ 0x14560
unsigned int __thiscall
std_unique_ptr<int,std_default_delete<int>>_get(unique_ptr_int_std__default_delete_int__ *this)
{
 unsigned int uVar1;
 uVar1 = __uniq_ptr_impl_int_std__default_delete_int____M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 return uVar1;
}

// Function: std___uniq_ptr_impl<int,std_default_delete<int>>__M_ptr @ 0x145b0
unsigned int __thiscall
std___uniq_ptr_impl_int_std__default_delete_int____M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)get_0u_int__std__default_delete_int__((tuple *)this);
 return *puVar1;
}

// Function: std_get<0u,int*,std_default_delete<int>> @ 0x145e0
type * std_get_0u_int__std__default_delete_int__(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___get_helper<0u,int*,std_default_delete<int>> @ 0x14610
int ** std___get_helper_0u_int__std__default_delete_int__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0u_int__std__default_delete_int____M_head(param_1);
 return ppiVar1;
}

// Function: std__Tuple_impl<0u,int*,std_default_delete<int>>__M_head @ 0x14640
void std__Tuple_impl_0u_int__std__default_delete_int____M_head(_Tuple_impl *param_1)
{
 std__Head_base_0u_int__false___M_head((_Head_base *)param_1);
 return;
}

// Function: std__Head_base<0u,int*,false>__M_head @ 0x14670
int ** std__Head_base<0u,int*,false>__M_head(_Head_base *param_1)
{
 return (int **)param_1;
}

// Function: std___uniq_ptr_data<int,std_default_delete<int[]>,true,true>___uniq_ptr_impl @ 0x14680
void __thiscall
__uniq_ptr_data_int_std__default_delete_int____true_true___uniq_ptr_impl
 (__uniq_ptr_data_int_std__default_delete_int____true_true_ *this,int *param_1)
{
 __uniq_ptr_impl_int_std__default_delete_int________uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this,param_1);
 return;
}

// Function: std___uniq_ptr_impl<int,std_default_delete<int[]>>___uniq_ptr_impl @ 0x146c0
void __thiscall
__uniq_ptr_impl_int_std__default_delete_int________uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int____ *this,int *param_1)
{
 int **ppiVar1;
 tuple_int__std__default_delete_int______tuple_true_true_
 ((tuple_int__std__default_delete_int____ *)this);
 ppiVar1 = (int **)_M_ptr(this);
 *ppiVar1 = param_1;
 return;
}

// Function: std_tuple<int*,std_default_delete<int[]>>_tuple<true,true> @ 0x14710
void __thiscall
tuple_int__std__default_delete_int______tuple_true_true_
 (tuple_int__std__default_delete_int____ *this)
{
 _Tuple_impl_0u_int__std__default_delete_int________Tuple_impl
 ((_Tuple_impl_0u_int__std__default_delete_int____ *)this);
 return;
}

// Function: std___uniq_ptr_impl<int,std_default_delete<int[]>>__M_ptr @ 0x14750
int ** __thiscall
std___uniq_ptr_impl_int_std__default_delete_int_____M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 return (int **)get_0u_int__std__default_delete_int____((tuple *)this);
}

// Function: std__Tuple_impl<0u,int*,std_default_delete<int[]>>__Tuple_impl @ 0x14780
void __thiscall
std__Tuple_impl_0u_int__std__default_delete_int______Tuple_impl
 (_Tuple_impl_0u_int__std__default_delete_int____ *this)
{
 std__Tuple_impl_1u_std__default_delete_int______Tuple_impl
 ((_Tuple_impl_1u_std__default_delete_int____ *)this);
 std__Head_base_0u_int__false___Head_base((_Head_base_0u_int__false_ *)this);
 return;
}

// Function: std__Tuple_impl<1u,std_default_delete<int[]>>__Tuple_impl @ 0x147c0
void __thiscall
std__Tuple_impl_1u_std__default_delete_int______Tuple_impl
 (_Tuple_impl_1u_std__default_delete_int____ *this)
{
 std__Head_base_1u_std__default_delete_int____true___Head_base
 ((_Head_base_1u_std__default_delete_int____true_ *)this);
 return;
}

// Function: std__Head_base<1u,std_default_delete<int[]>,true>__Head_base @ 0x147f0
_Head_base_1u_std__default_delete_int____true_ * __thiscall
std__Head_base_1u_std__default_delete_int____true___Head_base
 (_Head_base_1u_std__default_delete_int____true_ *this)
{
 return this;
}

// Function: std_get<0u,int*,std_default_delete<int[]>> @ 0x14800
type * std_get_0u_int__std__default_delete_int____(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__std__default_delete_int____((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___get_helper<0u,int*,std_default_delete<int[]>> @ 0x14830
int ** std___get_helper_0u_int__std__default_delete_int____(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0u_int__std__default_delete_int________M_head(param_1);
 return ppiVar1;
}

// Function: std__Tuple_impl<0u,int*,std_default_delete<int[]>>__M_head @ 0x14860
int ** std__Tuple_impl_0u_int__std__default_delete_int________M_head(_Tuple_impl *param_1)
{
 return (int **)_Head_base_0u_int__false___M_head((_Head_base *)param_1);
}

// Function: std_unique_ptr<int[],std_default_delete<int[]>>_get_deleter @ 0x14890
unsigned int std_unique_ptr<int[],std_default_delete<int[]>>_get_deleter(void)
{
 unsigned int uVar1;
 uVar1 = __uniq_ptr_impl<int,std_default_delete<int[]>>__M_deleter();
 return uVar1;
}

// Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ @ 0x148e0
void _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_
 (unsigned int param_1,void *param_2)
{
 if (param_2 != (void *)0x0) {
 operator_delete__(param_2);
 }
 return;
}

// Function: std___uniq_ptr_impl<int,std_default_delete<int[]>>__M_deleter @ 0x14920
default_delete * std___uniq_ptr_impl_int_std__default_delete_int_____M_deleter(__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 return (default_delete *)get_1u_int__std__default_delete_int____((tuple *)this);
}

// Function: std_get<1u,int*,std_default_delete<int[]>> @ 0x14950
type * std_get_1u_int__std__default_delete_int____(tuple *param_1)
{
 default_delete *pdVar1;
 pdVar1 = __get_helper_1u_std__default_delete_int____((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}

// Function: std___get_helper<1u,std_default_delete<int[]>> @ 0x14980
default_delete * std___get_helper_1u_std__default_delete_int____(_Tuple_impl *param_1)
{
 default_delete *pdVar1;
 pdVar1 = (default_delete *)_Tuple_impl_1u_std__default_delete_int________M_head(param_1);
 return pdVar1;
}

// Function: std__Tuple_impl<1u,std_default_delete<int[]>>__M_head @ 0x149b0
default_delete * std__Tuple_impl_1u_std__default_delete_int________M_head(_Tuple_impl *param_1)
{
 return (default_delete *)std__Head_base_1u_std__default_delete_int______true___M_head((_Head_base *)param_1);
}

// Function: std__Head_base<1u,std_default_delete<int[]>,true>__M_head @ 0x149e0
default_delete * std__Head_base_1u_std__default_delete_int______true___M_head(_Head_base *param_1)
{
 return (default_delete *)param_1;
}

// Function: std_unique_ptr<int[],std_default_delete<int[]>>_get @ 0x149f0
unsigned int __thiscall
std_unique_ptr<int[],std_default_delete<int[]>>_get
 (unique_ptr_int___std__default_delete_int____ *this)
{
 unsigned int uVar1;
 uVar1 = __uniq_ptr_impl_int_std__default_delete_int_____M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 return uVar1;
}

// Function: std___uniq_ptr_impl<int,std_default_delete<int[]>>__M_ptr @ 0x14a40
unsigned int __thiscall
std___uniq_ptr_impl_int_std__default_delete_int_____M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)get_0u_int__std__default_delete_int____((tuple *)this);
 return *puVar1;
}

// Function: std_get<0u,int*,std_default_delete<int[]>> @ 0x14a70
type * std_get_0u_int__std__default_delete_int____(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__std__default_delete_int____((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___get_helper<0u,int*,std_default_delete<int[]>> @ 0x14aa0
int ** std___get_helper_0u_int__std__default_delete_int____(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0u_int__std__default_delete_int________M_head(param_1);
 return ppiVar1;
}

// Function: std__Tuple_impl<0u,int*,std_default_delete<int[]>>__M_head @ 0x14ad0
void std__Tuple_impl_0u_int__std__default_delete_int________M_head(_Tuple_impl *param_1)
{
 std__Head_base_0u_int__false___M_head((_Head_base *)param_1);
 return;
}

// Function: std_forward<int*&> @ 0x14b00
int ** std_forward_int___(type *param_1)
{
 return (int **)param_1;
}

// Function: std__Head_base<0u,int*,false>__Head_base<int*&> @ 0x14b10
void __thiscall
std__Head_base_0u_int__false___Head_base_int___(_Head_base_0u_int__false_ *this,int **param_1)
{
 int **ppiVar1;
 ppiVar1 = forward_int___((type *)param_1);
 *(int **)this = *ppiVar1;
 return;
}

// Function: __do_global_ctors_aux @ 0x14b50
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x14b9c
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

