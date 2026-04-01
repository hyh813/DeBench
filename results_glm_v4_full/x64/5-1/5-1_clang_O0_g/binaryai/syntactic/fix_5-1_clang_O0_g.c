#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

/* Additional type definitions for C++ constructs */
typedef unsigned char bool;
typedef unsigned char byte;
#define true 1
#define false 0
typedef void *type;

/* C++ type info structure */
typedef struct type_info {
    void **vtable;
    char *name;
} type_info;

/* std_ios_base_Init type */
typedef struct Init {
    int dummy;
} Init;

/* Tuple and unique_ptr related types */
typedef struct tuple tuple;
typedef struct _Tuple_impl _Tuple_impl;
typedef struct _Head_base _Head_base;
typedef struct unique_ptr unique_ptr;
typedef struct __uniq_ptr_impl __uniq_ptr_impl;
typedef struct __uniq_ptr_data __uniq_ptr_data;

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct MultiDerived MultiDerived;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct DiamondDerived DiamondDerived;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Point Point;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;
typedef struct __0 __0;
typedef struct __1 __1;
typedef struct __2 __2;
typedef struct default_delete_int_ default_delete_int_;
typedef struct unique_ptr_int_test_cpp____2_ unique_ptr_int_test_cpp____2_;
typedef struct unique_ptr_int_std_default_delete_int unique_ptr_int_std_default_delete_int;
typedef struct unique_ptr_int___std_default_delete_int_ unique_ptr_int___std_default_delete_int_;
typedef struct __uniq_ptr_impl_0ul_int__test_cpp_smart_ptr____2_ __uniq_ptr_impl_0ul_int__test_cpp_smart_ptr____2_;
typedef struct __uniq_ptr_impl_0ul_int__std__default_delete_int__ __uniq_ptr_impl_0ul_int__std__default_delete_int__;
typedef struct __uniq_ptr_impl_0ul_int__std__default_delete_int____ __uniq_ptr_impl_0ul_int__std__default_delete_int____;
typedef struct __uniq_ptr_data_int_test_cpp_smart_ptr____2_true_false_ __uniq_ptr_data_int_test_cpp_smart_ptr____2_true_false_;
typedef struct __uniq_ptr_data_int_std__default_delete_int__true_true_ __uniq_ptr_data_int_std__default_delete_int__true_true_;
typedef struct __uniq_ptr_data_int_std__default_delete_int____true_true_ __uniq_ptr_data_int_std__default_delete_int____true_true_;
typedef struct _Tuple_impl_0ul_int__test_cpp_smart_ptr______2_ _Tuple_impl_0ul_int__test_cpp_smart_ptr______2_;
typedef struct _Tuple_impl_0ul_int__std__default_delete_int__ _Tuple_impl_0ul_int__std__default_delete_int__;
typedef struct _Tuple_impl_0ul_int__std__default_delete_int____ _Tuple_impl_0ul_int__std__default_delete_int____;
typedef struct _Head_base_0ul_int__false_ _Head_base_0ul_int__false_;
typedef struct tuple_int__test_cpp_smart_ptr____2_ tuple_int__test_cpp_smart_ptr____2_;
typedef struct tuple_int__std__default_delete_int__ tuple_int__std__default_delete_int__;
typedef struct tuple_int__std__default_delete_int____ tuple_int__std__default_delete_int____;

/* Stub definitions for lambda-related types */
struct __0 {
    char dummy[8];
};

struct __1 {
    int capture;
    int *capture_ptr;
};

struct __2 {
    char dummy[4];
};

/* Stub definitions for unique_ptr and tuple types */
struct __uniq_ptr_impl_int_test_cpp_smart_ptr____2_ {
    char dummy[16];
};

struct __uniq_ptr_data_int_test_cpp_smart_ptr____2_true_false_ {
    char dummy[16];
};

struct __uniq_ptr_impl_0ul_int__test_cpp_smart_ptr____2_ {
    char dummy[16];
};

struct _Tuple_impl_0ul_int__test_cpp_smart_ptr______2_ {
    char dummy[16];
};

struct tuple_int__test_cpp_smart_ptr____2_ {
    char dummy[16];
};

struct _Head_base_0ul_int__false_ {
    char dummy[8];
};

struct _Head_base {
    char dummy[8];
};

struct _Tuple_impl {
    char dummy[16];
};

struct __uniq_ptr_data_int_std__default_delete_int__true_true_ {
    char dummy[16];
};

struct __uniq_ptr_impl_int_std__default_delete_int__ {
    char dummy[16];
};

struct __uniq_ptr_impl_int_std__default_delete_int____ {
    char dummy[16];
};

struct __uniq_ptr_data_int_std__default_delete_int____true_true_ {
    char dummy[16];
};

struct tuple_int__std__default_delete_int__ {
    char dummy[16];
};

struct tuple_int__std__default_delete_int____ {
    char dummy[16];
};

struct _Tuple_impl_0ul_int__std__default_delete_int__ {
    char dummy[16];
};

struct _Tuple_impl_0ul_int__std__default_delete_int____ {
    char dummy[16];
};

/* Stub definitions for classes */
struct SimpleClass {
    int value;
    char name[32];
};

struct LifecycleClass {
    void *data;
    unsigned long size;
};

struct Base {
    void **vtable;
};

struct Derived {
    void **vtable;
    int data;
};

struct MultiDerived {
    BaseA basea;
    char padding[16];
    BaseB baseb;
};

struct BaseA {
    void **vtable;
};

struct BaseB {
    void **vtable;
};

struct DiamondDerived {
    void **vtable1;
    char padding1[16];
    void **vtable2;
    char padding2[8];
    void **vtable3;
};

struct VirtualBase {
    void **vtable;
};

struct MiddleA {
    void **vtable;
};

struct MiddleB {
    void **vtable;
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

struct Point {
    int x;
    int y;
};

struct Container_int_ {
    int data[10];
    int size;
    char padding[12];
};

struct Container_double_ {
    double data[10];
    int size;
    char padding[12];
};

struct default_delete_int_ {
    char dummy;
};

struct __uniq_ptr_impl {
    char dummy[16];
};

struct __uniq_ptr_data {
    char dummy[16];
};

struct default_delete {
    char dummy;
};

/* External variable stubs */
extern char std___ioinit[16];
extern void *__dso_handle;
extern char completed_0;
extern unsigned int instance_count;
extern int *stack0x00000000;
extern int *stack0x00000008;

/* External function stubs */
extern int __gmon_start__(void);
extern void __libc_start_main(void *, unsigned long long, void *, void *, void *, unsigned long long, void *);
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *, void *, void *);
extern void __cxa_begin_catch(void);
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);
extern void __cxa_finalize(void *);
extern void std_terminate(void);
extern void *__dynamic_cast(void *, void *, void *, int);
extern void *__cxa_atexit(void *, void *, void *);
extern void terminate(void);
extern void __cxa_bad_typeid(void);

/* Virtual table pointer stubs */
extern void *PTR_virtual_func_00108878;
extern void *PTR_virtual_func_001088b8;
extern void *PTR_funcA_00108900;
extern void *PTR_funcB_00108930;
extern void *PTR__RTTIDerivedA_00108d50;
extern void *PTR__RTTIDerivedB_00108da0;
extern void *PTR__RTTIBase_00108d78;
extern void *PTR_func_00108c38;
extern void *PTR_funcA_001089b0;
extern void *PTR_funcB_001089d8;

/* Type info stubs */
extern type_info RTTIBase_typeinfo;
extern type_info RTTIDerivedA_typeinfo;
extern type_info RTTIDerivedB_typeinfo;

/* String data stubs */
extern char DAT_00105025[];
extern char DAT_0010504a[];
extern char DAT_00105068[];
extern char DAT_00105084[];
extern char DAT_001050a0[];
extern char DAT_001050bc[];
extern char DAT_001050d9[];
extern char DAT_001050f5[];
extern char DAT_00105111[];
extern char DAT_0010512d[];
extern char DAT_00105149[];
extern char DAT_00105166[];
extern char DAT_00105183[];
extern char DAT_001051a1[];

/* Additional helper function stubs */
extern type_info *int_typeinfo;
extern void SUB168(void);
extern unsigned long long ZEXT816(unsigned long);
extern void std_ios_base_Init_Init(Init *);
extern void std_ios_base_Init__Init(Init *);
extern unsigned long long std_move_std__unique_ptr_int_std__default_delete_int____(unique_ptr *);
extern type_info *std_type_info_name(type_info *);
extern bool std_type_info_operator__(type_info *, type_info *);
extern unsigned long long __uniq_ptr_data_int_test_cpp_smart_ptr____2_true_false___uniq_ptr_impl(__uniq_ptr_data_int_test_cpp_smart_ptr____2_true_false_ *, int *, __2 *);
extern __2 *std_forward_test_cpp_smart_ptr______2_const__(type *);
extern void tuple_int___test_cpp_smart_ptr______2___tuple(tuple_int__test_cpp_smart_ptr____2_ *, int **, __2 *);
extern _Tuple_impl *_Tuple_impl_0ul_int__test_cpp_smart_ptr______2___Tuple_impl(_Tuple_impl_0ul_int__test_cpp_smart_ptr______2_ *);
extern void _Head_base_1ul_test_cpp_smart_ptr______2_true__Head_base(__2 *);
extern void __uniq_ptr_impl_0ul_int__test_cpp_smart_ptr____2___M_ptr(__uniq_ptr_impl_0ul_int__test_cpp_smart_ptr____2_ *);
extern unsigned long long __uniq_ptr_impl_0ul_int__test_cpp_smart_ptr____2___M_deleter(__uniq_ptr_impl_0ul_int__test_cpp_smart_ptr____2_ *);
extern type *get_0ul_int__test_cpp_smart_ptr______2_(tuple *);
extern int **__get_helper_0ul_int__test_cpp_smart_ptr______2_(_Tuple_impl *);
extern void _Tuple_impl_0ul_int__test_cpp_smart_ptr______2___M_head(_Tuple_impl *);
extern type *get_1ul_int__test_cpp_smart_ptr______2_(tuple *);
extern __2 *__get_helper_1ul_test_cpp_smart_ptr______2_(_Tuple_impl *);
extern void _Tuple_impl_1ul_test_cpp_smart_ptr______2___M_head(_Tuple_impl *);
extern _Head_base *_Head_base_1ul_test_cpp_smart_ptr______2_true__M_head(_Head_base *);
extern unsigned long long __uniq_ptr_impl_0ul_int__test_cpp_smart_ptr____2___M_ptr_0(__uniq_ptr_impl_0ul_int__test_cpp_smart_ptr____2_ *);
extern type *get_0ul_int__test_cpp_smart_ptr______2__0(tuple *);
extern int **__get_helper_0ul_int__test_cpp_smart_ptr______2__0(_Tuple_impl *);
extern void _Tuple_impl_0ul_int__test_cpp_smart_ptr______2___M_head_0(_Tuple_impl *);
extern type *_ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_(unsigned long long, void *);
extern void tuple_int_ptr_test_cpp_smart_ptr____2__tuple_int___test_cpp_smart_ptr______2_const__true_(tuple_int__test_cpp_smart_ptr____2_ *, int **, __2 *);
extern void std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr____2___Tuple_impl_int___test_cpp_smart_ptr______2_const__void_(_Tuple_impl_0ul_int__test_cpp_smart_ptr______2_ *, int **, __2 *);
extern void _Tuple_impl_1ul_test_cpp_smart_ptr____2___Tuple_impl(__2 *);
extern void _Head_base_0ul_int_ptr_false___Head_base_int___(_Head_base_0ul_int__false_ *, int **);
extern int **forward_int___(type *);
extern void _Tuple_impl_0ul_int_ptr_std_default_delete_int___Tuple_impl(_Tuple_impl_0ul_int__std__default_delete_int__ *, _Tuple_impl *);
extern void _Tuple_impl_1ul_std_default_delete_int___Tuple_impl(_Tuple_impl *);
extern type *std_move_std__tuple_int__std__default_delete_int____(tuple *);
extern void tuple_int_ptr_std_default_delete_int__tuple(tuple_int__std__default_delete_int__ *, tuple *);
extern int **_M_ptr(__uniq_ptr_impl_int_std__default_delete_int__ *);
extern int **__get_helper_0ul_int__std__default_delete_int__(_Tuple_impl *);
extern void _Tuple_impl_0ul_int_ptr_std_default_delete_int___M_head(_Tuple_impl *);
extern void _Tuple_impl_0ul_int_ptr_std_default_delete_int_array___Tuple_impl(_Tuple_impl_0ul_int__std__default_delete_int____ *);
extern void _Tuple_impl_1ul_std_default_delete_int_array___Tuple_impl(void);
extern void tuple_int_ptr_std_default_delete_int_array__tuple_true_true_(tuple_int__std__default_delete_int____ *);
extern void std__Head_base_1ul_std_default_delete_int_array__true___M_head(_Head_base *);
extern int **__get_helper_0ul_int__std__default_delete_int____(_Tuple_impl *);
extern void _Tuple_impl_0ul_int_ptr_std_default_delete_int_array___M_head(_Tuple_impl *);
extern default_delete *__get_helper_1ul_std__default_delete_int____(_Tuple_impl *);
extern void _Tuple_impl_1ul_std_default_delete_int_array___M_head_(_Tuple_impl *);
extern type *std_move_std__unique_ptr_int_std__default_delete_int____(unique_ptr *);
extern void __uniq_ptr_impl_int_test_cpp_smart_ptr____2____uniq_ptr_impl_test_cpp_smart_ptr______2_const__(__uniq_ptr_impl_int_test_cpp_smart_ptr____2_ *, int *, __2 *);
extern void __uniq_ptr_data_int_std_default_delete_int____true_true___uniq_ptr_impl(__uniq_ptr_data_int_std__default_delete_int____true_true_ *, int *);
extern void __uniq_ptr_impl_int_std_default_delete_int_array____uniq_ptr_impl(__uniq_ptr_impl_int_std__default_delete_int____ *, int *);
extern void __uniq_ptr_data_int_std_default_delete_int__true_true____uniq_ptr_impl(__uniq_ptr_data_int_std__default_delete_int__true_true_ *, __uniq_ptr_impl *);
extern void __uniq_ptr_impl_int_std_default_delete_int____uniq_ptr_impl(__uniq_ptr_impl_int_std__default_delete_int__ *, __uniq_ptr_impl *);

// Decompiled by BinaryAI
// SHA256: 65689cc4b5254da015479fbe114e061803955129fa71f564e7db9b148f7955a7

// Function: _init @ 0x102000
int _init(void *ctx)
{
 int iVar1;
 iVar1 = __gmon_start__();
 return iVar1;
}

// Function: FUN_00102020 @ 0x102020
void FUN_00102020(void)
{
 (*(void *)(char *)0x0)();
 return;
}

// Function: <EXTERNAL>_operator.new[] @ 0x102030
void * operator_new__(unsigned long param_1)
{
 void *pvVar1;
 if (param_1 == 0) {
    pvVar1 = malloc(1);
 } else {
    pvVar1 = malloc(param_1);
 }
 return pvVar1;
}

// Function: <EXTERNAL>_printf @ 0x102040
int printf(char *__format,...)
{
 return 0;
}

// Function: <EXTERNAL>_std_terminate @ 0x102050
void std_terminate(void)
{
 terminate();
}

// Function: <EXTERNAL>___cxa_begin_catch @ 0x102060
void __cxa_begin_catch(void)
{
 return;
}

// Function: <EXTERNAL>_strlen @ 0x102070
size_t strlen(char *__s)
{
 return 0;
}

// Function: <EXTERNAL>___cxa_allocate_exception @ 0x102080
void *__cxa_allocate_exception(size_t size)
{
 return malloc(size);
}

// Function: <EXTERNAL>_strncpy @ 0x102090
char * strncpy(char *__dest,char *__src,size_t __n)
{
 return __dest;
}

// Function: <EXTERNAL>_memset @ 0x1020a0
void * memset(void *__s,int __c,size_t __n)
{
 return __s;
}

// Function: <EXTERNAL>___cxa_atexit @ 0x1020b0
int __cxa_atexit(void (*func)(void *), void *obj, void *dso)
{
 return 0;
}

// Function: <EXTERNAL>_operator.delete @ 0x1020c0
void operator_delete(void *param_1)
{
 return;
}

// Function: <EXTERNAL>_operator.new @ 0x1020d0
void * operator_new(unsigned long param_1)
{
 void *pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>___cxa_bad_typeid @ 0x1020e0
void __cxa_bad_typeid(void)
{
 std_terminate();
 return;
}

// Function: <EXTERNAL>___dynamic_cast @ 0x1020f0
void __dynamic_cast(void)
{
 return;
}

// Function: <EXTERNAL>_operator.delete[] @ 0x102100
void operator_delete__(void *param_1)
{
 if (param_1 != (void *)0x0) {
    free(param_1);
 }
 return;
}

// Function: <EXTERNAL>_strcmp @ 0x102110
int strcmp(char *__s1,char *__s2)
{
 return 0;
}

// Function: <EXTERNAL>___cxa_rethrow @ 0x102120
void __cxa_rethrow(void)
{
 return;
}

// Function: <EXTERNAL>_std_ios_base_Init_Init @ 0x102130
void __thiscall std_ios_base_Init_Init(Init *this)
{
 return;
}

// Function: <EXTERNAL>___cxa_end_catch @ 0x102140
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>___cxa_throw @ 0x102150
void __cxa_throw(void)
{
 return;
}

// Function: <EXTERNAL>__Unwind_Resume @ 0x102160
void _Unwind_Resume(void)
{
 return;
}

// Function: <EXTERNAL>___cxa_finalize @ 0x102170
void __cxa_finalize(void)
{
 return;
}

// Function: __cxx_global_var_init @ 0x102180
void __cxx_global_var_init(void)
{
 std_ios_base_Init_Init((Init *)&std___ioinit);
 __cxa_atexit(std_ios_base_Init__Init,&std___ioinit,&__dso_handle);
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x1021b0
void _GLOBAL__sub_I_5_1_cpp(void)
{
 __cxx_global_var_init();
 return;
}

// Function: _start @ 0x1021c0
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
 do {
 } while( true );
}

// Function: deregister_tm_clones @ 0x1021f0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x102220
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x102260
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: test_cpp_member_func @ 0x1022b0
int test_cpp_member_func(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 SimpleClass local_30 [40];
 SimpleClass_SimpleClass(local_30,5,"Test");
 SimpleClass_setValue(local_30,10);
 iVar1 = SimpleClass_getValue(local_30);
 iVar2 = SimpleClass_compute(local_30,3);
 iVar3 = SimpleClass_getClassID();
 return iVar1 + iVar2 + iVar3;
}

// Function: test_cpp_constructor @ 0x102310
int test_cpp_constructor(void)
{
 int iVar1;
 LifecycleClass local_20 [20];
 int local_c;
 local_c = 0;
 LifecycleClass_LifecycleClass(local_20,5);
 iVar1 = LifecycleClass_getData(local_20,2);
 local_c = local_c + iVar1;
 iVar1 = LifecycleClass_getInstanceCount();
 local_c = iVar1 + local_c;
 LifecycleClass__LifecycleClass(local_20);
 iVar1 = LifecycleClass_getInstanceCount();
 return iVar1 * 1000 + local_c;
}

// Function: call_virtual_func @ 0x1023b0
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)(param_1,param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x1023e0
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 Derived local_20 [16];
 Base local_10 [8];
 Base_Base(local_10);
 Derived_Derived(local_20,3);
 iVar1 = Base_virtual_func(local_10,5);
 iVar2 = Derived_virtual_func(local_20,5);
 iVar3 = call_virtual_func(local_10,5);
 iVar4 = call_virtual_func((Base *)local_20,5);
 Derived__Derived(local_20);
 Base__Base(local_10);
 return iVar1 + iVar2 + iVar3 + iVar4;
}

// Function: test_cpp_multiple_inheritance @ 0x1024f0
int test_cpp_multiple_inheritance(void)
{
 int iVar1;
 int iVar2;
 void ***local_60;
 void **local_28;
 unsigned int local_20;
 void **local_18;
 unsigned int local_10;
 MultiDerived_MultiDerived((MultiDerived *)&local_28);
 local_20 = 100;
 local_10 = 200;
 local_60 = (void ***)0x0;
 if (&stack0x00000000 != (char *)0x28) {
 local_60 = &local_18;
 }
 iVar1 = (**local_28)();
 iVar2 = (***local_60)();
 MultiDerived__MultiDerived((MultiDerived *)&local_28);
 return iVar1 + iVar2 + (uint)(&local_28 != local_60);
}

// Function: test_cpp_diamond_inheritance @ 0x1025d0
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 unsigned long long *local_60;
 long local_38;
 unsigned int auStack_30 [10];
 DiamondDerived_DiamondDerived((DiamondDerived *)&local_38);
 *(unsigned int *)((long)auStack_30 + *(long *)(local_38 + -0x18)) = 0x32;
 local_60 = (unsigned long long *)0x0;
 if (&stack0x00000000 != (char *)0x38) {
 local_60 = (unsigned long long *)((long)auStack_30 + *(long *)(local_38 + -0x18) + -8);
 }
 iVar1 = (**(void **)*local_60)();
 *(unsigned int *)((long)auStack_30 + *(long *)(local_38 + -0x18)) = 100;
 iVar2 = (**(void **)*local_60)();
 DiamondDerived__DiamondDerived((DiamondDerived *)&local_38);
 return iVar1 + iVar2;
}

// Function: test_cpp_operator_overload @ 0x1026a0
int test_cpp_operator_overload(void)
{
 byte bVar1;
 int iVar2;
 unsigned long long local_20;
 Point local_18 [8];
 Point local_10 [8];
 Point_Point(local_10,1,2);
 Point_Point(local_18,3,4);
 local_20 = Point_operator_(local_10,local_18);
 bVar1 = Point_operator__(local_10,local_18);
 Point_operator__((Point *)&local_20);
 iVar2 = 10;
 if ((bVar1 & 1) != 0) {
 iVar2 = 0;
 }
 return (int)local_20 + local_20._4_4_ + iVar2;
}

// Function: test_cpp_template_func @ 0x102720
int test_cpp_template_func(void)
{
 int local_20;
 int local_1c;
 double local_18;
 int local_c;
 local_c = template_max_int_(3,7);
 local_18 = template_max_double_(2.5,1.5);
 local_1c = 10;
 local_20 = 0x14;
 template_swap_int_(&local_1c,&local_20);
 return local_c + (int)local_18 + local_1c + local_20;
}

// Function: test_cpp_template_class @ 0x102790
int test_cpp_template_class(void)
{
 double dVar1;
 Container_double_ local_98 [88];
 int local_40;
 int local_3c;
 Container_int_ local_38 [48];
 Container_int__Container(local_38);
 Container_int__push(local_38,10);
 Container_int__push(local_38,0x14);
 Container_int__push(local_38,0x1e);
 local_3c = Container_int__get(local_38,0);
 local_40 = Container_int__getSize(local_38);
 Container_double__Container(local_98);
 Container_double__push(local_98,3.14);
 dVar1 = (double)Container_double__get(local_98,0);
 return local_3c + local_40 + (int)dVar1;
}

// Function: test_cpp_lambda @ 0x102840
int test_cpp_lambda(void)
{
 int iVar1;
 int iVar2;
 __0 local_28 [8];
 __1 local_20 [12];
 unsigned int *local_18;
 unsigned int local_10;
 unsigned int local_c;
 local_c = 10;
 local_10 = 0x14;
 local_20.capture = 10;
 local_20.capture_ptr = &local_10;
 iVar1 = lambda_1_operator__(&local_20,3);
 iVar2 = lambda_0_operator__(&local_28,10,0x14);
 return iVar1 + iVar2;
}

// Function: test_cpp_lambda()_$_1_operator() @ 0x1028a0
int __thiscall lambda_1_operator__(__1 *this,int param_1)
{
 **(int **)(this + 8) = **(int **)(this + 8) + 5;
 return param_1 * *(int *)this + **(int **)(this + 8);
}

// Function: test_cpp_lambda()_$_0_operator() @ 0x1028d0
int __thiscall lambda_0_operator__(__0 *this,int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: test_cpp_exception @ 0x1028f0
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int_typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x102a50
int test_cpp_smart_ptr(void)
{
 int iVar1;
 int iVar2;
 unsigned int *puVar3;
 type *ptVar4;
 int *piVar5;
 unique_ptr_int_test_cpp_smart_ptr____2_ local_48 [8];
 __2 local_40 [4];
 int local_3c;
 unique_ptr_int___std__default_delete_int____ local_38 [12];
 int local_2c;
 unique_ptr_int_std__default_delete_int__ local_28 [24];
 int local_10 [2];
 puVar3 = (unsigned int *)operator_new(4);
 *puVar3 = 100;
 std_unique_ptr_int_std_default_delete_int__unique_ptr_std__default_delete_int__void_((void *)local_10);
 puVar3 = (unsigned int *)std_unique_ptr_int_std_default_delete_int___get((unique_ptr_int_std__default_delete_int__ *)local_10);
 *puVar3 = 200;
 ptVar4 = std_move_std__unique_ptr_int_std__default_delete_int____((unique_ptr *)local_10);
 std_unique_ptr_int_std_default_delete_int__unique_ptr(local_28,(unique_ptr *)ptVar4);
 piVar5 = (int *)std_unique_ptr_int_std_default_delete_int__operator_(local_28);
 local_2c = *piVar5;
 piVar5 = (int *)operator_new__(0x14);
 *piVar5 = 1;
 piVar5[1] = 2;
 piVar5[2] = 3;
 piVar5[3] = 4;
 piVar5[4] = 5;
 std_unique_ptr_int_array_std_default_delete_int_array__unique_ptr_int__std__default_delete_int____void_bool_(local_38,piVar5);
 piVar5 = (int *)std_unique_ptr_int_array_std_default_delete_int_array__operator__(local_38,2);
 local_3c = *piVar5;
 piVar5 = (int *)operator_new(4);
 *piVar5 = 500;
 std_unique_ptr_int_test_cpp_smart_ptr____2___unique_ptr_test_cpp_smart_ptr____2__void_
 (local_48,piVar5,local_40);
 piVar5 = (int *)std_unique_ptr_int_test_cpp_smart_ptr____2___operator_(local_48);
 iVar1 = *piVar5;
 iVar2 = local_2c + local_3c;
 std_unique_ptr_int_test_cpp_smart_ptr____2____unique_ptr(local_48);
 std_unique_ptr_int_array_std_default_delete_int_array___unique_ptr(local_38);
 std_unique_ptr_int_std_default_delete_int____unique_ptr(local_28);
 std_unique_ptr_int_std_default_delete_int____unique_ptr
 ((unique_ptr_int_std__default_delete_int__ *)local_10);
 return iVar2 + iVar1;
}

// Function: std_unique_ptr<int,test_cpp_smart_ptr()_$_2>_unique_ptr<test_cpp_smart_ptr()_$_2,void> @ 0x102c40
void __thiscall
std_unique_ptr_int_test_cpp_smart_ptr____2___unique_ptr_test_cpp_smart_ptr____2__void_
 (unique_ptr_int_test_cpp_smart_ptr____2_ *this,int *param_1,__2 *param_2)
{
 __uniq_ptr_data_int_test_cpp_smart_ptr____2__true_false_
 __uniq_ptr_impl_test_cpp_smart_ptr______2_const__
 ((__uniq_ptr_data_int_test_cpp_smart_ptr____2_true_false_ *)this,param_1,param_2);
 return;
}

// Function: std_unique_ptr<int,test_cpp_smart_ptr()_$_2>_operator* @ 0x102c80
void __thiscall
std_unique_ptr_int_test_cpp_smart_ptr____2___operator_
 (unique_ptr_int_test_cpp_smart_ptr____2_ *this)
{
 get(this);
 return;
}

// Function: std_unique_ptr<int,test_cpp_smart_ptr()_$_2>_~unique_ptr @ 0x102cb0
void __thiscall
std_unique_ptr_int_test_cpp_smart_ptr____2____unique_ptr
 (unique_ptr_int_test_cpp_smart_ptr____2_ *this)
{
 int **ppiVar1;
 __2 *this_00;
 int **ppiVar2;
 ppiVar1 = (int **)__uniq_ptr_impl_int_test_cpp_smart_ptr____2___M_ptr
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr____2_ *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (__2 *)get_deleter(this);
 ppiVar2 = (int **)move_int___(ppiVar1);
 test_cpp_smart_ptr___2_operator__(this_00,*ppiVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}

// Function: test_cpp_rtti @ 0x102d30
int test_cpp_rtti(void)
{
 int iVar1;
 long *this;
 long *this_00;
 unsigned long uVar2;
 char *__s;
 size_t sVar3;
 long local_70;
 long local_60;
 int local_1c;
 this = (long *)operator_new(8);
 memset(this,0,8);
 RTTIDerivedA_RTTIDerivedA((RTTIDerivedA *)this);
 this_00 = (long *)operator_new(8);
 memset(this_00,0,8);
 RTTIDerivedB_RTTIDerivedB((RTTIDerivedB *)this_00);
 local_1c = 0;
 if (this == (long *)0x0) {
 __cxa_bad_typeid();
 }
 uVar2 = std_type_info_operator__
 (*(type_info **)(*this + -8),(type_info *)&RTTIDerivedA_typeinfo);
 if ((uVar2 & 1) != 0) {
 local_1c = 10;
 }
 if (this_00 == (long *)0x0) {
 __cxa_bad_typeid();
 }
 uVar2 = std_type_info_operator__
 (*(type_info **)(*this_00 + -8),(type_info *)&RTTIDerivedB_typeinfo);
 if ((uVar2 & 1) != 0) {
 local_1c = local_1c + 0x14;
 }
 if (this == (long *)0x0) {
 local_60 = 0;
 }
 else {
 local_60 = __dynamic_cast(this,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 }
 if (local_60 != 0) {
 iVar1 = RTTIDerivedA_derivedA_data();
 local_1c = iVar1 + local_1c;
 }
 if (this_00 == (long *)0x0) {
 local_70 = 0;
 }
 else {
 local_70 = __dynamic_cast(this_00,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 }
 if (local_70 != 0) {
 iVar1 = RTTIDerivedB_derivedB_data();
 local_1c = iVar1 + local_1c;
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
 return local_1c + (int)sVar3;
}

// Function: test_cpp_oo_features @ 0x102f70
void test_cpp_oo_features(void)
{
 uint uVar1;
 printf(&DAT_00105025);
 uVar1 = test_cpp_member_func();
 printf(&DAT_0010504a,(unsigned long)uVar1);
 uVar1 = test_cpp_constructor();
 printf(&DAT_00105068,(unsigned long)uVar1);
 uVar1 = test_cpp_virtual_func();
 printf(&DAT_00105084,(unsigned long)uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 printf(&DAT_001050a0,(unsigned long)uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 printf(&DAT_001050bc,(unsigned long)uVar1);
 uVar1 = test_cpp_operator_overload();
 printf(&DAT_001050d9,(unsigned long)uVar1);
 uVar1 = test_cpp_template_func();
 printf(&DAT_001050f5,(unsigned long)uVar1);
 uVar1 = test_cpp_template_class();
 printf(&DAT_00105111,(unsigned long)uVar1);
 uVar1 = test_cpp_lambda();
 printf(&DAT_0010512d,(unsigned long)uVar1);
 uVar1 = test_cpp_exception();
 printf(&DAT_00105149,(unsigned long)uVar1);
 uVar1 = test_cpp_smart_ptr();
 printf(&DAT_00105166,(unsigned long)uVar1);
 uVar1 = test_cpp_rtti();
 printf(&DAT_00105183,(unsigned long)uVar1);
 return;
}

// Function: main @ 0x103080
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: std___uniq_ptr_data_int_test_cpp_smart_ptr____2__true_false___uniq_ptr_impl<test_cpp_smart_ptr()_$_2_const&> @ 0x1030a0
void __thiscall
std___uniq_ptr_data_int_test_cpp_smart_ptr____2__true_false_
__uniq_ptr_impl_test_cpp_smart_ptr______2_const__
 (__uniq_ptr_data_int_test_cpp_smart_ptr____2_true_false_ *this,int *param_1,__2 *param_2
 )
{
 __uniq_ptr_impl_int_test_cpp_smart_ptr____2____uniq_ptr_impl_test_cpp_smart_ptr______2_const__
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr____2_ *)this,param_1,param_2);
 return;
}

// Function: std___uniq_ptr_impl_int_test_cpp_smart_ptr____2____uniq_ptr_impl<test_cpp_smart_ptr()_$_2_const&> @ 0x1030d0
void __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr____2__
__uniq_ptr_impl_test_cpp_smart_ptr______2_const__
 (__uniq_ptr_impl_int_test_cpp_smart_ptr____2_ *this,int *param_1,__2 *param_2)
{
 __2 *p_Var1;
 int *local_18;
 __uniq_ptr_impl_int_test_cpp_smart_ptr____2_ *local_10;
 local_18 = param_1;
 local_10 = this;
 p_Var1 = forward_test_cpp_smart_ptr______2_const__((type *)param_2);
 tuple_int_ptr_test_cpp_smart_ptr____2__tuple_int___test_cpp_smart_ptr______2_const__true_
 ((tuple_int__test_cpp_smart_ptr____2_ *)this,&local_18,p_Var1);
 return;
}

// Function: std_forward<test_cpp_smart_ptr()_$_2_const&> @ 0x103110
__2 * std_forward_test_cpp_smart_ptr______2_const__(type *param_1)
{
 return (__2 *)param_1;
}

// Function: std_tuple_int_ptr_test_cpp_smart_ptr____2__tuple<int*&,test_cpp_smart_ptr()_$_2_const&,true> @ 0x103120
void __thiscall
std_tuple_int_ptr_test_cpp_smart_ptr____2__tuple_int___test_cpp_smart_ptr______2_const__true_
 (tuple_int__test_cpp_smart_ptr____2_ *this,int **param_1,__2 *param_2)
{
 int **ppiVar1;
 __2 *p_Var2;
 ppiVar1 = forward_int___((type *)param_1);
 p_Var2 = forward_test_cpp_smart_ptr______2_const__((type *)param_2);
 _Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr____2__
 _Tuple_impl_int___test_cpp_smart_ptr______2_const__void_
 ((_Tuple_impl_0ul_int__test_cpp_smart_ptr______2_ *)this,ppiVar1,p_Var2);
 return;
}

// Function: std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr____2___Tuple_impl<int*&,test_cpp_smart_ptr()_$_2_const&,void> @ 0x103180
void __thiscall
std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr____2__
_Tuple_impl_int___test_cpp_smart_ptr______2_const__void_
 (_Tuple_impl_0ul_int__test_cpp_smart_ptr______2_ *this,int **param_1,__2 *param_2)
{
 int **ppiVar1;
 forward_test_cpp_smart_ptr______2_const__((type *)param_2);
 _Tuple_impl_1ul_test_cpp_smart_ptr____2___Tuple_impl((__2 *)this);
 ppiVar1 = forward_int___((type *)param_1);
 _Head_base_0ul_int_ptr_false___Head_base_int___((_Head_base_0ul_int__false_ *)this,ppiVar1);
 return;
}

// Function: std__Tuple_impl_1ul_test_cpp_smart_ptr____2___Tuple_impl @ 0x1031e0
void std__Tuple_impl_1ul_test_cpp_smart_ptr____2___Tuple_impl(__2 *param_1)
{
 _Head_base_1ul_test_cpp_smart_ptr____2__true___Head_base(param_1);
 return;
}

// Function: std__Head_base_1ul_test_cpp_smart_ptr____2__true___Head_base @ 0x103210
void std__Head_base_1ul_test_cpp_smart_ptr____2__true___Head_base(__2 *param_1)
{
 return;
}

// Function: std___uniq_ptr_impl_int_test_cpp_smart_ptr____2___M_ptr @ 0x103220
void __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr____2___M_ptr
 (__uniq_ptr_impl_int_test_cpp_smart_ptr____2_ *this)
{
 get_0ul_int__test_cpp_smart_ptr______2_((tuple *)this);
}

// Function: std_unique_ptr_int_test_cpp_smart_ptr____2___get_deleter @ 0x103240
unsigned long long __thiscall
std_unique_ptr_int_test_cpp_smart_ptr____2___get_deleter
 (unique_ptr_int_test_cpp_smart_ptr____2_ *this)
{
 unsigned long long uVar1;
 uVar1 = __uniq_ptr_impl_int_test_cpp_smart_ptr____2___M_deleter
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr____2_ *)this);
 return uVar1;
}

// Function: test_cpp_smart_ptr()_$_2_operator() @ 0x103270
void __thiscall test_cpp_smart_ptr___2_operator__(__2 *this,int *param_1)
{
 *param_1 = -1;
 if (param_1 != (int *)0x0) {
 operator_delete(param_1);
 }
 return;
}

// Function: std_get_0ul_int_ptr_test_cpp_smart_ptr____2_ @ 0x1032b0
type * std_get_0ul_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0ul_int__test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___get_helper_0ul_int_ptr_test_cpp_smart_ptr____2_ @ 0x1032d0
int ** std___get_helper_0ul_int__test_cpp_smart_ptr______2_(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr____2___M_head(param_1);
 return ppiVar1;
}

// Function: std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr____2___M_head @ 0x1032f0
void std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr____2___M_head(_Tuple_impl *param_1)
{
 _Head_base_0ul_int_ptr_false___M_head((_Head_base *)param_1);
}

// Function: std___uniq_ptr_impl_int_test_cpp_smart_ptr____2___M_deleter @ 0x103310
void __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr____2___M_deleter
 (__uniq_ptr_impl_int_test_cpp_smart_ptr____2_ *this)
{
 get_1ul_int__test_cpp_smart_ptr______2_((tuple *)this);
}

// Function: std_get_1ul_int_ptr_test_cpp_smart_ptr____2_ @ 0x103330
type * std_get_1ul_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
 __2 *p_Var1;
 p_Var1 = __get_helper_1ul_test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
 return (type *)p_Var1;
}

// Function: std___get_helper_1ul_test_cpp_smart_ptr____2_ @ 0x103350
__2 * std___get_helper_1ul_test_cpp_smart_ptr______2_(_Tuple_impl *param_1)
{
 __2 *p_Var1;
 p_Var1 = (__2 *)_Tuple_impl_1ul_test_cpp_smart_ptr____2___M_head(param_1);
 return p_Var1;
}

// Function: std__Tuple_impl_1ul_test_cpp_smart_ptr____2___M_head @ 0x103370
void std__Tuple_impl_1ul_test_cpp_smart_ptr____2___M_head(_Tuple_impl *param_1)
{
 _Head_base_1ul_test_cpp_smart_ptr____2__true___M_head((_Head_base *)param_1);
}

// Function: std__Head_base_1ul_test_cpp_smart_ptr____2__true___M_head @ 0x103390
_Head_base * std__Head_base_1ul_test_cpp_smart_ptr____2__true___M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std_unique_ptr_int_test_cpp_smart_ptr____2___get @ 0x1033a0
unsigned long long __thiscall
std_unique_ptr_int_test_cpp_smart_ptr____2___get(unique_ptr_int_test_cpp_smart_ptr____2_ *this)
{
 unsigned long long uVar1;
 uVar1 = __uniq_ptr_impl_int_test_cpp_smart_ptr____2___M_ptr
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr____2_ *)this);
 return uVar1;
}

// Function: std___uniq_ptr_impl_int_test_cpp_smart_ptr____2___M_ptr @ 0x1033d0
unsigned long long __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr____2___M_ptr
 (__uniq_ptr_impl_int_test_cpp_smart_ptr____2_ *this)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)get_0ul_int__test_cpp_smart_ptr______2_((tuple *)this);
 return *puVar1;
}

// Function: std_get_0ul_int_ptr_test_cpp_smart_ptr____2_ @ 0x1033f0
type * std_get_0ul_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0ul_int__test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___get_helper_0ul_int_ptr_test_cpp_smart_ptr____2_ @ 0x103410
int ** std___get_helper_0ul_int__test_cpp_smart_ptr______2_(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr____2___M_head(param_1);
 return ppiVar1;
}

// Function: std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr____2___M_head @ 0x103430
void std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr____2___M_head(_Tuple_impl *param_1)
{
 _Head_base_0ul_int_ptr_false___M_head((_Head_base *)param_1);
 return;
}

// Function: SimpleClass_SimpleClass @ 0x103450
void __thiscall SimpleClass_SimpleClass(SimpleClass *this,int param_1,char *param_2)
{
 *(int *)this = param_1;
 strncpy((char *)(this + 4),param_2,0x1f);
 this[0x23] = (SimpleClass)0x0;
 return;
}

// Function: SimpleClass_setValue @ 0x103490
void __thiscall SimpleClass_setValue(SimpleClass *this,int param_1)
{
 *(int *)this = param_1;
 return;
}

// Function: SimpleClass_getValue @ 0x1034b0
unsigned int __thiscall SimpleClass_getValue(SimpleClass *this)
{
 return *(unsigned int *)this;
}

// Function: SimpleClass_compute @ 0x1034c0
long __thiscall SimpleClass_compute(SimpleClass *this,int param_1)
{
 int iVar1;
 size_t sVar2;
 iVar1 = *(int *)this;
 sVar2 = strlen((char *)(this + 4));
 return (long)(iVar1 * param_1) + sVar2;
}

// Function: SimpleClass_getClassID @ 0x103500
unsigned long long SimpleClass_getClassID(void)
{
 return 0x1234;
}

// Function: LifecycleClass_LifecycleClass @ 0x103510
void __thiscall LifecycleClass_LifecycleClass(LifecycleClass *this,unsigned long param_1)
{
 unsigned long uVar2;
 void *pvVar3;
 unsigned long local_20;
 unsigned long auVar1_0, auVar1_1;
 *(unsigned long *)(this + 8) = param_1;
 auVar1_1 = 0;
 auVar1_0 = param_1;
 uVar2 = SUB168(auVar1_0 * ZEXT816(4),0);
 if (SUB168(auVar1_0 * ZEXT816(4),8) != 0) {
 uVar2 = 0xffffffffffffffff;
 }
 pvVar3 = operator_new__(uVar2);
 *(void **)this = pvVar3;
 for (local_20 = 0; local_20 < param_1; local_20 = local_20 + 1) {
 *(int *)(*(long *)this + local_20 * 4) = (int)local_20 * 10;
 }
 instance_count = instance_count + 1;
 return;
}

// Function: LifecycleClass_getData @ 0x1035b0
unsigned int __thiscall LifecycleClass_getData(LifecycleClass *this,unsigned long param_1)
{
 unsigned int local_24;
 if (param_1 < *(unsigned long *)(this + 8)) {
 local_24 = *(unsigned int *)(*(long *)this + param_1 * 4);
 }
 else {
 local_24 = 0xffffffff;
 }
 return local_24;
}

// Function: LifecycleClass_getInstanceCount @ 0x103600
unsigned int LifecycleClass_getInstanceCount(void)
{
 return instance_count;
}

// Function: LifecycleClass_~LifecycleClass @ 0x103610
void __thiscall LifecycleClass__LifecycleClass(LifecycleClass *this)
{
 if (*(void **)this != (void *)0x0) {
 operator_delete__(*(void **)this);
 }
 instance_count = instance_count + -1;
 return;
}

// Function: Base_Base @ 0x103650
void __thiscall Base_Base(Base *this)
{
 *(char ***)this = &PTR_virtual_func_00108878;
 return;
}

// Function: Derived_Derived @ 0x103670
void __thiscall Derived_Derived(Derived *this,int param_1)
{
 Base_Base((Base *)this);
 *(char ***)this = &PTR_virtual_func_001088b8;
 *(int *)(this + 8) = param_1;
 return;
}

// Function: Base_virtual_func @ 0x1036b0
int __thiscall Base_virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Derived_virtual_func @ 0x1036d0
int __thiscall Derived_virtual_func(Derived *this,int param_1)
{
 return param_1 * *(int *)(this + 8);
}

// Function: Derived_~Derived @ 0x1036f0
void __thiscall Derived__Derived(Derived *this)
{
 Base__Base((Base *)this);
 return;
}

// Function: Base_~Base @ 0x103710
void __thiscall Base__Base(Base *this)
{
 return;
}

// Function: MultiDerived_MultiDerived @ 0x103720
void __thiscall MultiDerived_MultiDerived(MultiDerived *this)
{
 BaseA_BaseA((BaseA *)this);
 BaseB_BaseB((BaseB *)(this + 0x10));
 *(char ***)this = &PTR_funcA_00108900;
 *(char ***)(this + 0x10) = &PTR_funcB_00108930;
 return;
}

// Function: MultiDerived_~MultiDerived @ 0x103770
void __thiscall MultiDerived__MultiDerived(MultiDerived *this)
{
 BaseB__BaseB((BaseB *)(this + 0x10));
 BaseA__BaseA((BaseA *)this);
 return;
}

// Function: DiamondDerived_DiamondDerived @ 0x1037a0
void __thiscall DiamondDerived_DiamondDerived(DiamondDerived *this)
{
 VirtualBase_VirtualBase((VirtualBase *)(this + 0x20));
 MiddleA_MiddleA((MiddleA *)this);
 MiddleB_MiddleB((MiddleB *)(this + 0x10));
 *(unsigned long long *)this = 0x108a08;
 *(unsigned long long *)(this + 0x20) = 0x108a70;
 *(unsigned long long *)(this + 0x10) = 0x108a38;
 return;
}

// Function: DiamondDerived_~DiamondDerived @ 0x103830
void __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this);
 VirtualBase__VirtualBase((VirtualBase *)(this + 0x20));
 return;
}

// Function: Point_Point @ 0x103870
void __thiscall Point_Point(Point *this,int param_1,int param_2)
{
 *(int *)this = param_1;
 *(int *)(this + 4) = param_2;
 return;
}

// Function: Point_operator+ @ 0x103890
unsigned long long __thiscall Point_operator_(Point *this,Point *param_1)
{
 unsigned long long local_10;
 Point_Point((Point *)&local_10,*(int *)this + *(int *)param_1,*(int *)(this + 4) + *(int *)(param_1 + 4)
 );
 return local_10;
}

// Function: Point_operator== @ 0x1038d0
bool __thiscall Point_operator__(Point *this,Point *param_1)
{
 bool local_19;
 local_19 = false;
 if (*(int *)this == *(int *)param_1) {
 local_19 = *(int *)(this + 4) == *(int *)(param_1 + 4);
 }
 return local_19;
}

// Function: Point_operator++ @ 0x103920
void __thiscall Point_operator__(Point *this)
{
 *(int *)this = *(int *)this + 1;
 *(int *)(this + 4) = *(int *)(this + 4) + 1;
 return;
}

// Function: template_max<int> @ 0x103940
int template_max_int_(int param_1,int param_2)
{
 int local_14;
 local_14 = param_2;
 if (param_2 < param_1) {
 local_14 = param_1;
 }
 return local_14;
}

// Function: template_max<double> @ 0x103970
double template_max_double_(double param_1,double param_2)
{
 double local_20;
 local_20 = param_2;
 if (param_2 < param_1) {
 local_20 = param_1;
 }
 return local_20;
}

// Function: template_swap<int> @ 0x1039b0
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container_int__Container @ 0x1039e0
void __thiscall Container_int__Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container_int__push @ 0x103a00
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

// Function: Container_int__get @ 0x103a40
unsigned int __thiscall Container_int__get(Container_int_ *this,int param_1)
{
 unsigned int local_c;
 if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
 local_c = 0;
 }
 else {
 local_c = *(unsigned int *)(this + (long)param_1 * 4);
 }
 return local_c;
}

// Function: Container_int__getSize @ 0x103a90
unsigned int __thiscall Container_int__getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container_double__Container @ 0x103ab0
void __thiscall Container_double__Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container_double__push @ 0x103ad0
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

// Function: Container_double__get @ 0x103b10
unsigned long long __thiscall Container_double__get(Container_double_ *this,int param_1)
{
 unsigned long long local_10;
 if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
 local_10 = 0;
 }
 else {
 local_10 = *(unsigned long long *)(this + (long)param_1 * 8);
 }
 return local_10;
}

// Function: Container_double__getSize @ 0x103b70
unsigned int __thiscall Container_double__getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: std_unique_ptr_int_std_default_delete_int__unique_ptr<std_default_delete<int>,void> @ 0x103b90
void std_unique_ptr_int_std_default_delete_int__unique_ptr_std__default_delete_int__void_
 (int *param_1)
{
 __uniq_ptr_data_int_std_default_delete_int__true_true____uniq_ptr_impl(param_1);
 return;
}

// Function: std_unique_ptr_int_std_default_delete_int__operator_ @ 0x103bc0
void __thiscall
std_unique_ptr_int_std_default_delete_int__operator_
 (unique_ptr_int_std__default_delete_int__ *this)
{
 get(this);
 return;
}

// Function: std_move_std__unique_ptr_int_std__default_delete_int____ @ 0x103bf0
type * std_move_std__unique_ptr_int_std__default_delete_int____(unique_ptr *param_1)
{
 return (type *)param_1;
}

// Function: std_unique_ptr_int_std_default_delete_int__unique_ptr @ 0x103c00
void __thiscall
std_unique_ptr_int_std_default_delete_int__unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this,unique_ptr *param_1)
{
 __uniq_ptr_data_int_std_default_delete_int__true_true____uniq_ptr_data
 ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this,
 (__uniq_ptr_data *)param_1);
 return;
}

// Function: std_unique_ptr_int_array_std_default_delete_int_array__unique_ptr<int*,std_default_delete<int[]>,void,bool> @ 0x103c30
void __thiscall
std_unique_ptr_int_array_std_default_delete_int_array__
unique_ptr_int__std__default_delete_int____void_bool_
 (unique_ptr_int___std__default_delete_int____ *this,int *param_1)
{
 __uniq_ptr_data_int_std_default_delete_int____true_true___uniq_ptr_impl
 ((__uniq_ptr_data_int_std__default_delete_int____true_true_ *)this,param_1);
 return;
}

// Function: std_unique_ptr_int_array_std_default_delete_int_array__operator[] @ 0x103c60
long __thiscall
std_unique_ptr_int_array_std_default_delete_int_array__operator__
 (unique_ptr_int___std__default_delete_int____ *this,unsigned long param_1)
{
 long lVar1;
 lVar1 = (long)get(this);
 return lVar1 + param_1 * 4;
}

// Function: std_unique_ptr_int_array_std_default_delete_int_array__~unique_ptr @ 0x103ca0
void __thiscall
std_unique_ptr_int_array_std_default_delete_int_array___unique_ptr
 (unique_ptr_int___std__default_delete_int____ *this)
{
 long *plVar1;
 unsigned long long uVar2;
 plVar1 = (long *)__uniq_ptr_impl_int_std_default_delete_int_array___M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 if (*plVar1 != 0) {
 uVar2 = std_unique_ptr_int_array_std_default_delete_int_array__get_deleter(this);
 _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_
 (uVar2,*plVar1);
 }
 *plVar1 = 0;
 return;
}

// Function: std_unique_ptr_int_std_default_delete_int____unique_ptr @ 0x103d10
void __thiscall
std_unique_ptr_int_std_default_delete_int____unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this)
{
 int **ppiVar1;
 default_delete_int_ *this_00;
 int **ppiVar2;
 ppiVar1 = (int **)__uniq_ptr_impl_int_std_default_delete_int___M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (default_delete_int_ *)std_unique_ptr_int_std_default_delete_int___get_deleter(this);
 ppiVar2 = (int **)move_int___(ppiVar1);
 std_default_delete_int__operator__(this_00,*ppiVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}

// Function: RTTIDerivedA_RTTIDerivedA @ 0x103d80
void __thiscall RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase_RTTIBase((RTTIBase *)this);
 *(char ***)this = &PTR__RTTIDerivedA_00108d50;
 return;
}

// Function: RTTIDerivedB_RTTIDerivedB @ 0x103dc0
void __thiscall RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase_RTTIBase((RTTIBase *)this);
 *(char ***)this = &PTR__RTTIDerivedB_00108da0;
 return;
}

// Function: std_type_info_operator== @ 0x103e00
bool __thiscall std_type_info_operator__(type_info *this,type_info *param_1)
{
 int iVar1;
 bool local_29;
 bool local_19;
 local_19 = true;
 if (*(long *)(this + 8) != *(long *)(param_1 + 8)) {
 local_29 = false;
 if (**(char **)(this + 8) != '*') {
 iVar1 = strcmp(*(char **)(this + 8),*(char **)(param_1 + 8));
 local_29 = iVar1 == 0;
 }
 local_19 = local_29;
 }
 return local_19;
}

// Function: RTTIDerivedA_derivedA_data @ 0x103e80
unsigned long long RTTIDerivedA_derivedA_data(void)
{
 return 100;
}

// Function: RTTIDerivedB_derivedB_data @ 0x103e90
unsigned long long RTTIDerivedB_derivedB_data(void)
{
 return 200;
}

// Function: std_type_info_name @ 0x103ea0
long __thiscall std_type_info_name(type_info *this)
{
 long local_20;
 if (**(char **)(this + 8) == '*') {
 local_20 = *(long *)(this + 8) + 1;
 }
 else {
 local_20 = *(long *)(this + 8);
 }
 return local_20;
}

// Function: Base_getName @ 0x103ef0
char * Base_getName(void)
{
 return &DAT_001051a1;
}

// Function: Base_~Base @ 0x103f10
void __thiscall Base__Base(Base *this)
{
 _Base(this);
 operator_delete(this);
 return;
}

// Function: Derived_getName @ 0x103f40
char * Derived_getName(void)
{
 return "Derived";
}

// Function: Derived_~Derived @ 0x103f60
void __thiscall Derived__Derived(Derived *this)
{
 _Derived(this);
 operator_delete(this);
 return;
}

// Function: BaseA_BaseA @ 0x103f90
void __thiscall BaseA_BaseA(BaseA *this)
{
 *(char ***)this = &PTR_funcA_001089b0;
 return;
}

// Function: BaseB_BaseB @ 0x103fb0
void __thiscall BaseB_BaseB(BaseB *this)
{
 *(char ***)this = &PTR_funcB_001089d8;
 return;
}

// Function: MultiDerived_funcA @ 0x103fd0
unsigned long long MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived_~MultiDerived @ 0x103fe0
void __thiscall MultiDerived__MultiDerived(MultiDerived *this)
{
 _MultiDerived(this);
 operator_delete(this);
 return;
}

// Function: MultiDerived_funcB @ 0x104010
unsigned long long MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived_funcB @ 0x104020
void __thiscall MultiDerived_funcB(MultiDerived *this)
{
 funcB();
 return;
}

// Function: MultiDerived_~MultiDerived @ 0x104040
void __thiscall MultiDerived__MultiDerived(MultiDerived *this)
{
 _MultiDerived(this + -0x10);
 return;
}

// Function: MultiDerived_~MultiDerived @ 0x104060
void __thiscall MultiDerived__MultiDerived(MultiDerived *this)
{
 _MultiDerived(this + -0x10);
 return;
}

// Function: BaseA_funcA @ 0x104080
unsigned long long BaseA_funcA(void)
{
 return 10;
}

// Function: BaseA_~BaseA @ 0x104090
void __thiscall BaseA__BaseA(BaseA *this)
{
 return;
}

// Function: BaseA_~BaseA @ 0x1040a0
void __thiscall BaseA__BaseA(BaseA *this)
{
 _BaseA(this);
 operator_delete(this);
 return;
}

// Function: BaseB_funcB @ 0x1040d0
unsigned long long BaseB_funcB(void)
{
 return 0x14;
}

// Function: BaseB_~BaseB @ 0x1040e0
void __thiscall BaseB__BaseB(BaseB *this)
{
 return;
}

// Function: BaseB_~BaseB @ 0x1040f0
void __thiscall BaseB__BaseB(BaseB *this)
{
 _BaseB(this);
 operator_delete(this);
 return;
}

// Function: VirtualBase_VirtualBase @ 0x104120
void __thiscall VirtualBase_VirtualBase(VirtualBase *this)
{
 *(char ***)this = &PTR_func_00108c38;
 return;
}

// Function: MiddleA_MiddleA @ 0x104140
void __thiscall MiddleA_MiddleA(MiddleA *this)
{
 unsigned long long *in_RSI;
 *(unsigned long long *)this = *in_RSI;
 *(unsigned long long *)(this + *(long *)(*(long *)this + -0x18)) = in_RSI[1];
 return;
}

// Function: MiddleB_MiddleB @ 0x104170
void __thiscall MiddleB_MiddleB(MiddleB *this)
{
 unsigned long long *in_RSI;
 *(unsigned long long *)this = *in_RSI;
 *(unsigned long long *)(this + *(long *)(*(long *)this + -0x18)) = in_RSI[1];
 return;
}

// Function: MiddleA_func @ 0x1041a0
int __thiscall MiddleA_func(MiddleA *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleA_~MiddleA @ 0x1041c0
void __thiscall MiddleA__MiddleA(MiddleA *this)
{
 _MiddleA(this);
 VirtualBase__VirtualBase((VirtualBase *)(this + 0x10));
 return;
}

// Function: MiddleA_~MiddleA @ 0x104200
void __thiscall MiddleA__MiddleA(MiddleA *this)
{
 _MiddleA(this);
 operator_delete(this);
 return;
}

// Function: MiddleA_func @ 0x104230
void __thiscall MiddleA_func(MiddleA *this)
{
 func(this + *(long *)(*(long *)this + -0x18));
 return;
}

// Function: MiddleA_~MiddleA @ 0x104250
void __thiscall MiddleA__MiddleA(MiddleA *this)
{
 _MiddleA(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: MiddleA_~MiddleA @ 0x104270
void __thiscall MiddleA__MiddleA(MiddleA *this)
{
 _MiddleA(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: MiddleB_func @ 0x104290
int __thiscall MiddleB_func(MiddleB *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: MiddleB_~MiddleB @ 0x1042b0
void __thiscall MiddleB__MiddleB(MiddleB *this)
{
 _MiddleB(this);
 VirtualBase__VirtualBase((VirtualBase *)(this + 0x10));
 return;
}

// Function: MiddleB_~MiddleB @ 0x1042f0
void __thiscall MiddleB__MiddleB(MiddleB *this)
{
 _MiddleB(this);
 operator_delete(this);
 return;
}

// Function: MiddleB_func @ 0x104320
void __thiscall MiddleB_func(MiddleB *this)
{
 func(this + *(long *)(*(long *)this + -0x18));
 return;
}

// Function: MiddleB_~MiddleB @ 0x104340
void __thiscall MiddleB__MiddleB(MiddleB *this)
{
 _MiddleB(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: MiddleB_~MiddleB @ 0x104360
void __thiscall MiddleB__MiddleB(MiddleB *this)
{
 _MiddleB(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: DiamondDerived_func @ 0x104380
int __thiscall DiamondDerived_func(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived_~DiamondDerived @ 0x1043a0
void __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this);
 operator_delete(this);
 return;
}

// Function: DiamondDerived_func @ 0x1043d0
void __thiscall DiamondDerived_func(DiamondDerived *this)
{
 func(this + -0x10);
 return;
}

// Function: DiamondDerived_~DiamondDerived @ 0x1043f0
void __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + -0x10);
 return;
}

// Function: DiamondDerived_~DiamondDerived @ 0x104410
void __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + -0x10);
 return;
}

// Function: DiamondDerived_func @ 0x104430
void __thiscall DiamondDerived_func(DiamondDerived *this)
{
 func(this + *(long *)(*(long *)this + -0x18));
 return;
}

// Function: DiamondDerived_~DiamondDerived @ 0x104450
void __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: DiamondDerived_~DiamondDerived @ 0x104470
void __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: VirtualBase_func @ 0x104490
unsigned long long VirtualBase_func(void)
{
 return 100;
}

// Function: VirtualBase_~VirtualBase @ 0x1044a0
void __thiscall VirtualBase__VirtualBase(VirtualBase *this)
{
 return;
}

// Function: VirtualBase_~VirtualBase @ 0x1044b0
void __thiscall VirtualBase__VirtualBase(VirtualBase *this)
{
 _VirtualBase(this);
 operator_delete(this);
 return;
}

// Function: MiddleA_~MiddleA @ 0x1044e0
void __thiscall MiddleA__MiddleA(MiddleA *this)
{
 return;
}

// Function: MiddleB_~MiddleB @ 0x1044f0
void __thiscall MiddleB__MiddleB(MiddleB *this)
{
 return;
}

// Function: DiamondDerived_~DiamondDerived @ 0x104500
void __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 MiddleB__MiddleB((MiddleB *)(this + 0x10));
 MiddleA__MiddleA((MiddleA *)this);
 return;
}

// Function: std___uniq_ptr_data_int_std_default_delete_int__true_true____uniq_ptr_data @ 0x104550
void __thiscall
std___uniq_ptr_data_int_std_default_delete_int__true_true____uniq_ptr_data
 (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,__uniq_ptr_data *param_1)
{
 __uniq_ptr_impl_int_std_default_delete_int____uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,(__uniq_ptr_impl *)param_1);
 return;
}

// Function: std___uniq_ptr_impl_int_std_default_delete_int____uniq_ptr_impl @ 0x104580
void __thiscall
std___uniq_ptr_impl_int_std_default_delete_int____uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int__ *this,__uniq_ptr_impl *param_1)
{
 type *ptVar1;
 unsigned long long *puVar2;
 ptVar1 = move_std__tuple_int__std__default_delete_int____((tuple *)param_1);
 tuple_int_ptr_std_default_delete_int__tuple
 ((tuple_int__std__default_delete_int__ *)this,(tuple *)ptVar1);
 puVar2 = (unsigned long long *)_M_ptr((__uniq_ptr_impl_int_std__default_delete_int__ *)param_1);
 *puVar2 = 0;
 return;
}

// Function: std_move<std_tuple_int_ptr_std_default_delete_int_&> @ 0x1045e0
type * std_move_std__tuple_int__std__default_delete_int____(tuple *param_1)
{
 return (type *)param_1;
}

// Function: std_tuple_int_ptr_std_default_delete_int__tuple @ 0x1045f0
void __thiscall
std_tuple_int_ptr_std_default_delete_int__tuple
 (tuple_int__std__default_delete_int__ *this,tuple *param_1)
{
 _Tuple_impl_0ul_int_ptr_std_default_delete_int___Tuple_impl
 ((_Tuple_impl_0ul_int__std__default_delete_int__ *)this,(_Tuple_impl *)param_1);
 return;
}

// Function: std___uniq_ptr_impl_int_std_default_delete_int___M_ptr @ 0x104620
void __thiscall
std___uniq_ptr_impl_int_std_default_delete_int___M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 get_0ul_int__std__default_delete_int__((tuple *)this);
}

// Function: __clang_call_terminate @ 0x104640
void __clang_call_terminate(void)
{
 __cxa_begin_catch();
 std_terminate();
}

// Function: std__Tuple_impl_0ul_int_ptr_std_default_delete_int___Tuple_impl_ @ 0x104650
void __thiscall
std__Tuple_impl_0ul_int_ptr_std_default_delete_int___Tuple_impl_
 (_Tuple_impl_0ul_int__std__default_delete_int__ *this,_Tuple_impl *param_1)
{
 _Tuple_impl_1ul_std_default_delete_int___Tuple_impl((_Tuple_impl *)this);
 *(unsigned long long *)this = *(unsigned long long *)param_1;
 return;
}

// Function: std__Tuple_impl_1ul_std_default_delete_int___Tuple_impl @ 0x104690
void std__Tuple_impl_1ul_std_default_delete_int___Tuple_impl(_Tuple_impl *param_1)
{
 return;
}

// Function: std_get_0ul_int_ptr_std_default_delete_int_ @ 0x1046a0
type * std_get_0ul_int__std__default_delete_int__(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0ul_int__std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___get_helper_0ul_int_ptr_std_default_delete_int_ @ 0x1046c0
int ** std___get_helper_0ul_int__std__default_delete_int__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0ul_int_ptr_std_default_delete_int___M_head(param_1);
 return ppiVar1;
}

// Function: std__Tuple_impl_0ul_int_ptr_std_default_delete_int___M_head_ @ 0x1046e0
void std__Tuple_impl_0ul_int_ptr_std_default_delete_int___M_head_(_Tuple_impl *param_1)
{
 _Head_base_0ul_int_ptr_false___M_head((_Head_base *)param_1);
}

// Function: std__Head_base_0ul_int_ptr_false___M_head_ @ 0x104700
_Head_base * std__Head_base_0ul_int_ptr_false___M_head_(_Head_base *param_1)
{
 return param_1;
}

// Function: RTTIBase_RTTIBase @ 0x104710
void __thiscall RTTIBase_RTTIBase(RTTIBase *this)
{
 *(char ***)this = &PTR__RTTIBase_00108d78;
 return;
}

// Function: RTTIDerivedA_~RTTIDerivedA @ 0x104730
void __thiscall RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase__RTTIBase((RTTIBase *)this);
 return;
}

// Function: RTTIDerivedA_~RTTIDerivedA @ 0x104750
void __thiscall RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
 _RTTIDerivedA(this);
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA_getType @ 0x104780
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase_~RTTIBase @ 0x104790
void __thiscall RTTIBase__RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIBase_~RTTIBase @ 0x1047a0
void __thiscall RTTIBase__RTTIBase(RTTIBase *this)
{
 _RTTIBase(this);
 operator_delete(this);
 return;
}

// Function: RTTIBase_getType @ 0x1047d0
unsigned long long RTTIBase_getType(void)
{
 return 0;
}

// Function: RTTIDerivedB_~RTTIDerivedB @ 0x1047e0
void __thiscall RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase__RTTIBase((RTTIBase *)this);
 return;
}

// Function: RTTIDerivedB_~RTTIDerivedB @ 0x104800
void __thiscall RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)
{
 _RTTIDerivedB(this);
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB_getType @ 0x104830
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: std___uniq_ptr_data_int_std_default_delete_int__true_true____uniq_ptr_impl @ 0x104840
void std___uniq_ptr_data_int_std_default_delete_int__true_true____uniq_ptr_impl(int *param_1)
{
 int *in_RSI;
 __uniq_ptr_impl_int_std_default_delete_int____uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)param_1,in_RSI);
 return;
}

// Function: std___uniq_ptr_impl_int_std_default_delete_int____uniq_ptr_impl @ 0x104870
void __thiscall
std___uniq_ptr_impl_int_std_default_delete_int____uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int__ *this,int *param_1)
{
 int **ppiVar1;
 tuple_int_ptr_std_default_delete_int__tuple_true_true_
 ((tuple_int__std__default_delete_int__ *)this);
 ppiVar1 = (int **)_M_ptr(this);
 *ppiVar1 = param_1;
 return;
}

// Function: std_tuple_int_ptr_std_default_delete_int__tuple_true_true_ @ 0x1048b0
void __thiscall
std_tuple_int_ptr_std_default_delete_int__tuple_true_true_
 (tuple_int__std__default_delete_int__ *this)
{
 _Tuple_impl_0ul_int_ptr_std_default_delete_int___Tuple_impl
 ((_Tuple_impl_0ul_int__std__default_delete_int__ *)this);
 return;
}

// Function: std__Tuple_impl_0ul_int_ptr_std_default_delete_int___Tuple_impl_ @ 0x1048e0
void __thiscall
std__Tuple_impl_0ul_int_ptr_std_default_delete_int___Tuple_impl_
 (_Tuple_impl_0ul_int__std__default_delete_int__ *this)
{
    std__Tuple_impl_1ul_std_default_delete_int___Tuple_impl_();
    _Head_base_0ul_int_ptr_false___Head_base((_Head_base_0ul_int__false_ *)this);
    return;
}

// Function: std__Tuple_impl_1ul_std_default_delete_int___Tuple_impl @ 0x104910
void std__Tuple_impl_1ul_std_default_delete_int___Tuple_impl(void)
{
 _Head_base_1ul_std_default_delete_int__true___Head_base_();
 return;
}

// Function: std__Head_base_0ul_int_ptr_false___Head_base @ 0x104930
void __thiscall std__Head_base_0ul_int_ptr_false___Head_base(_Head_base_0ul_int__false_ *this)
{
 *(unsigned long long *)this = 0;
 return;
}

// Function: std__Head_base_1ul_std_default_delete_int__true___Head_base @ 0x104950
void std__Head_base_1ul_std_default_delete_int__true___Head_base(void)
{
 return;
}

// Function: std_unique_ptr_int_std_default_delete_int___get_deleter @ 0x104960
unsigned long long __thiscall
std_unique_ptr_int_std_default_delete_int___get_deleter
 (unique_ptr_int_std__default_delete_int__ *this)
{
 unsigned long long uVar1;
 uVar1 = __uniq_ptr_impl_int_std_default_delete_int___M_deleter
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 return uVar1;
}

// Function: std_default_delete<int>_operator() @ 0x104990
void __thiscall std_default_delete_int__operator__(default_delete_int_ *this,int *param_1)
{
 if (param_1 != (int *)0x0) {
 operator_delete(param_1);
 }
 return;
}

// Function: std_move_int___ @ 0x1049d0
type * std_move_int___(int **param_1)
{
 return (type *)param_1;
}

// Function: std___uniq_ptr_impl_int_std_default_delete_int___M_deleter @ 0x1049e0
void __thiscall
std___uniq_ptr_impl_int_std_default_delete_int___M_deleter
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 get_1ul_int__std__default_delete_int__((tuple *)this);
}

// Function: std_get_1ul_int_ptr_std_default_delete_int_ @ 0x104a00
type * std_get_1ul_int__std__default_delete_int__(tuple *param_1)
{
 default_delete *pdVar1;
 pdVar1 = __get_helper_1ul_std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}

// Function: std___get_helper_1ul_std_default_delete_int_ @ 0x104a20
default_delete * std___get_helper_1ul_std__default_delete_int__(_Tuple_impl *param_1)
{
 default_delete *pdVar1;
 pdVar1 = (default_delete *)_Tuple_impl_1ul_std_default_delete_int___M_head(param_1);
 return pdVar1;
}

// Function: std__Tuple_impl_1ul_std_default_delete_int___M_head_ @ 0x104a40
void std__Tuple_impl_1ul_std_default_delete_int___M_head_(_Tuple_impl *param_1)
{
 _Head_base_1ul_std_default_delete_int__true___M_head((_Head_base *)param_1);
}

// Function: std__Head_base_1ul_std_default_delete_int__true___M_head @ 0x104a60
_Head_base * std__Head_base_1ul_std_default_delete_int__true___M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std_unique_ptr_int_std_default_delete_int___get @ 0x104a70
unsigned long long __thiscall
std_unique_ptr_int_std_default_delete_int___get(unique_ptr_int_std__default_delete_int__ *this)
{
 unsigned long long uVar1;
 uVar1 = __uniq_ptr_impl_int_std_default_delete_int___M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 return uVar1;
}

// Function: std___uniq_ptr_impl_int_std_default_delete_int___M_ptr @ 0x104aa0
unsigned long long __thiscall
std___uniq_ptr_impl_int_std_default_delete_int___M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)get_0ul_int__std__default_delete_int__((tuple *)this);
 return *puVar1;
}

// Function: std_get_0ul_int_ptr_std_default_delete_int_ @ 0x104ac0
type * std_get_0ul_int__std__default_delete_int__(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0ul_int__std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___get_helper_0ul_int_ptr_std_default_delete_int_ @ 0x104ae0
int ** std___get_helper_0ul_int__std__default_delete_int__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0ul_int_ptr_std_default_delete_int___M_head(param_1);
 return ppiVar1;
}

// Function: std__Tuple_impl_0ul_int_ptr_std_default_delete_int___M_head_ @ 0x104b00
void std__Tuple_impl_0ul_int_ptr_std_default_delete_int___M_head_(_Tuple_impl *param_1)
{
 _Head_base_0ul_int_ptr_false___M_head((_Head_base *)param_1);
 return;
}

// Function: std__Head_base_0ul_int_ptr_false___M_head_ @ 0x104b20
_Head_base * std__Head_base_0ul_int_ptr_false___M_head_(_Head_base *param_1)
{
 return param_1;
}

// Function: std___uniq_ptr_data_int_std_default_delete_int____true_true___uniq_ptr_impl @ 0x104b30
void __thiscall
std___uniq_ptr_data_int_std_default_delete_int____true_true___uniq_ptr_impl
 (__uniq_ptr_data_int_std__default_delete_int____true_true_ *this,int *param_1)
{
 __uniq_ptr_impl_int_std_default_delete_int_array____uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this,param_1);
 return;
}

// Function: std___uniq_ptr_impl_int_std_default_delete_int_array____uniq_ptr_impl @ 0x104b60
void __thiscall
std___uniq_ptr_impl_int_std_default_delete_int_array____uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int____ *this,int *param_1)
{
 int **ppiVar1;
 tuple_int_ptr_std_default_delete_int_array__tuple_true_true_
 ((tuple_int__std__default_delete_int____ *)this);
 ppiVar1 = (int **)_M_ptr(this);
 *ppiVar1 = param_1;
 return;
}

// Function: std_tuple_int_ptr_std_default_delete_int_array__tuple_true_true_ @ 0x104ba0
void __thiscall
std_tuple_int_ptr_std_default_delete_int_array__tuple_true_true_
 (tuple_int__std__default_delete_int____ *this)
{
 _Tuple_impl_0ul_int_ptr_std_default_delete_int_array___Tuple_impl
 ((_Tuple_impl_0ul_int__std__default_delete_int____ *)this);
 return;
}

// Function: std___uniq_ptr_impl_int_std_default_delete_int_array___M_ptr @ 0x104bd0
void __thiscall
std___uniq_ptr_impl_int_std_default_delete_int_array___M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 get_0ul_int__std__default_delete_int____((tuple *)this);
}

// Function: std__Tuple_impl_0ul_int_ptr_std_default_delete_int_array___Tuple_impl_ @ 0x104bf0
void __thiscall
std__Tuple_impl_0ul_int_ptr_std_default_delete_int_array___Tuple_impl_
 (_Tuple_impl_0ul_int__std__default_delete_int____ *this)
{
 _Tuple_impl_1ul_std_default_delete_int_array___Tuple_impl();
 _Head_base_0ul_int_ptr_false___Head_base((_Head_base_0ul_int__false_ *)this);
 return;
}

// Function: std__Tuple_impl_1ul_std_default_delete_int_array___Tuple_impl @ 0x104c20
void std__Tuple_impl_1ul_std_default_delete_int_array___Tuple_impl(void)
{
    std__Head_base_1ul_std_default_delete_int_array__true___Head_base_();
    return;
}

// Function: std__Head_base<1ul,std_default_delete<int[]>,true>__Head_base @ 0x104c40
void std__Head_base_1ul_std_default_delete_int_array__true___Head_base(void)
{
 return;
}

// Function: std_get_0ul_int_ptr_std_default_delete_int_array_ @ 0x104c50
type * std_get_0ul_int__std__default_delete_int____(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0ul_int__std__default_delete_int____((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___get_helper_0ul_int_ptr_std_default_delete_int_array_ @ 0x104c70
int ** std___get_helper_0ul_int__std__default_delete_int____(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0ul_int_ptr_std_default_delete_int_array___M_head(param_1);
 return ppiVar1;
}

// Function: std__Tuple_impl_0ul_int_ptr_std_default_delete_int_array___M_head_ @ 0x104c90
void std__Tuple_impl_0ul_int_ptr_std_default_delete_int_array___M_head_(_Tuple_impl *param_1)
{
 _Head_base_0ul_int_ptr_false___M_head((_Head_base *)param_1);
 return;
}

// Function: std_unique_ptr_int_array_std_default_delete_int_array__get_deleter @ 0x104cb0
unsigned long long __thiscall
std_unique_ptr_int_array_std_default_delete_int_array__get_deleter
 (unique_ptr_int___std__default_delete_int____ *this)
{
 unsigned long long uVar1;
 uVar1 = __uniq_ptr_impl_int_std_default_delete_int_array___M_deleter
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 return uVar1;
}

// Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ @ 0x104ce0
void _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_
 (unsigned long long param_1,void *param_2)
{
 if (param_2 != (void *)0x0) {
 operator_delete__(param_2);
 }
 return;
}

// Function: std___uniq_ptr_impl_int_std_default_delete_int_array___M_deleter @ 0x104d20
void __thiscall
std___uniq_ptr_impl_int_std_default_delete_int_array___M_deleter
 (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 get_1ul_int__std__default_delete_int____((tuple *)this);
}

// Function: std_get_1ul_int_ptr_std_default_delete_int_array_ @ 0x104d40
type * std_get_1ul_int__std__default_delete_int____(tuple *param_1)
{
 default_delete *pdVar1;
 pdVar1 = __get_helper_1ul_std__default_delete_int____((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}

// Function: std___get_helper_1ul_std_default_delete_int_array_ @ 0x104d60
default_delete * std___get_helper_1ul_std__default_delete_int____(_Tuple_impl *param_1)
{
 default_delete *pdVar1;
 pdVar1 = (default_delete *)_Tuple_impl_1ul_std_default_delete_int_array___M_head(param_1);
 return pdVar1;
}

// Function: std__Tuple_impl_1ul_std_default_delete_int_array___M_head_ @ 0x104d80
void std__Tuple_impl_1ul_std_default_delete_int_array___M_head_(_Tuple_impl *param_1)
{
 std__Head_base_1ul_std_default_delete_int_array__true___M_head((_Head_base *)param_1);
}

// Function: std__Head_base_1ul_std_default_delete_int_array__true___M_head_ @ 0x104da0
_Head_base * std__Head_base_1ul_std_default_delete_int_array__true___M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std_unique_ptr_int_array_std_default_delete_int_array__get @ 0x104db0
unsigned long long __thiscall
std_unique_ptr_int_array_std_default_delete_int_array__get
 (unique_ptr_int___std__default_delete_int____ *this)
{
 unsigned long long uVar1;
 uVar1 = __uniq_ptr_impl_int_std_default_delete_int_array___M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 return uVar1;
}

// Function: std___uniq_ptr_impl_int_std_default_delete_int_array___M_ptr @ 0x104de0
unsigned long long __thiscall
std___uniq_ptr_impl_int_std_default_delete_int_array___M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)get_0ul_int__std__default_delete_int____((tuple *)this);
 return *puVar1;
}

// Function: std_get_0ul_int_ptr_std_default_delete_int_array_ @ 0x104e00
type * std_get_0ul_int__std__default_delete_int____(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0ul_int__std__default_delete_int____((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___get_helper_0ul_int_ptr_std_default_delete_int_array_ @ 0x104e20
int ** std___get_helper_0ul_int__std__default_delete_int____(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0ul_int_ptr_std_default_delete_int_array___M_head(param_1);
 return ppiVar1;
}

// Function: std__Tuple_impl_0ul_int_ptr_std_default_delete_int_array___M_head_ @ 0x104e40
void std__Tuple_impl_0ul_int_ptr_std_default_delete_int_array___M_head_(_Tuple_impl *param_1)
{
 _Head_base_0ul_int_ptr_false___M_head((_Head_base *)param_1);
 return;
}

// Function: std_forward_int___ @ 0x104e60
int ** std_forward_int___(type *param_1)
{
 return (int **)param_1;
}

// Function: std__Head_base_0ul_int_ptr_false___Head_base_int___ @ 0x104e70
void __thiscall
std__Head_base_0ul_int_ptr_false___Head_base_int___(_Head_base_0ul_int__false_ *this,int **param_1)
{
 int **ppiVar1;
 ppiVar1 = forward_int___((type *)param_1);
 *(int **)this = *ppiVar1;
 return;
}

// Function: _fini @ 0x104ea4
void _fini(void)
{
 return;
}

/* Missing function implementations */

/* Undefined function stubs for unique_ptr and tuple operations */
type *get(void *this_ptr) {
    return (type *)this_ptr;
}

default_delete *get_deleter(void *this_ptr) {
    return (default_delete *)this_ptr;
}

int **move_int___(int **param) {
    return param;
}

/* Missing ZEXT816 function - zero extend 8 to 16 bits */
unsigned long ZEXT816(unsigned long param) {
    return param & 0xFF;
}

/* Missing std_ios_base_Init destructor */
void std_ios_base_Init__Init(Init *this) {
    return;
}

/* get functions */
type *get_0ul_int__std__default_delete_int__(tuple *param) {
    return (type *)param;
}

type *get_0ul_int__std__default_delete_int____(tuple *param) {
    return (type *)param;
}

type *get_1ul_int__std__default_delete_int__(tuple *param) {
    return (type *)((char *)param + 8);
}

type *get_1ul_int__std__default_delete_int____(tuple *param) {
    return (type *)((char *)param + 8);
}

/* _Head_base stub implementations */
_Head_base *_Head_base_0ul_int__false___M_head(_Head_base *param) {
    return param;
}

/* Tuple _M_head implementations */
void _Tuple_impl_0ul_int__test_cpp_smart_ptr______2___M_head(_Tuple_impl *param) {
    return;
}

/* Tuple helper implementations */
int **__get_helper_0ul_int__std__default_delete_int__(_Tuple_impl *param) {
    return (int **)param;
}

int **__get_helper_0ul_int__std__default_delete_int____(_Tuple_impl *param) {
    return (int **)param;
}

default_delete *__get_helper_1ul_std__default_delete_int__(_Tuple_impl *param) {
    return (default_delete *)param;
}

default_delete *__get_helper_1ul_std__default_delete_int____(_Tuple_impl *param) {
    return (default_delete *)param;
}

/* _Tuple_impl implementations */
void _Tuple_impl_1ul_std__default_delete_int____Tuple_impl(_Tuple_impl *param) {
    return;
}

void _Tuple_impl_1ul_std__default_delete_int__Tuple_impl(void) {
    return;
}



/* Virtual destructor stubs */
void _Base(Base *this) {
    return;
}

void _Derived(Derived *this) {
    return;
}

void _MultiDerived(MultiDerived *this) {
    return;
}

void _DiamondDerived(DiamondDerived *this) {
    return;
}

void _VirtualBase(VirtualBase *this) {
    return;
}

void _MiddleA(MiddleA *this) {
    return;
}

void _MiddleB(MiddleB *this) {
    return;
}

void _RTTIBase(RTTIBase *this) {
    return;
}

void _RTTIDerivedA(RTTIDerivedA *this) {
    return;
}

void _RTTIDerivedB(RTTIDerivedB *this) {
    return;
}

void _BaseA(BaseA *this) {
    return;
}

void _BaseB(BaseB *this) {
    return;
}

/* Other missing functions */
void func(void *ptr) {
    return;
}

void funcB(void) {
    return;
}



/* VirtualBase functions */
void VirtualBase_VirtualBase(VirtualBase *this) {
    *(void ***)this = &PTR_func_00108c38;
}

void VirtualBase__VirtualBase(VirtualBase *this) {
    return;
}

/* MiddleA and MiddleB implementations */
void MiddleA_MiddleA(MiddleA *this) {
    VirtualBase_VirtualBase((VirtualBase *)(this + 0x10));
}

void MiddleB_MiddleB(MiddleB *this) {
    VirtualBase_VirtualBase((VirtualBase *)(this + 0x10));
}

/* Forward and move implementations */
int **forward_int___(type *param) {
    return (int **)param;
}

/* Tuple implementations */
void tuple_int___test_cpp_smart_ptr______2___tuple(tuple_int__test_cpp_smart_ptr____2_ *this, int **param1, __2 *param2) {
    return;
}

/* _Head_base constructors */
void _Head_base_0ul_int__false___Head_base(_Head_base_0ul_int__false_ *this) {
    *(void **)this = NULL;
}

void _Head_base_0ul_int__false___Head_base_int___(_Head_base_0ul_int__false_ *this, int **param) {
    *(void **)this = param;
}

/* _Tuple_impl implementations */
_Tuple_impl *_Tuple_impl_0ul_int__test_cpp_smart_ptr______2___Tuple_impl(_Tuple_impl_0ul_int__test_cpp_smart_ptr______2_ *this) {
    return this;
}

/* Additional missing helper functions - removed duplicate implementations */

/* Pointer and tuple accessor functions */
void *_M_ptr_0(void *this_ptr) {
    return NULL;
}

/* Missing unique_ptr and template function stubs */
void std_unique_ptr_int_std_default_delete_int__unique_ptr_std__default_delete_int__void_(void *this_ptr) {
    return;
}

type *_M_ptr_int_std__default_delete_int__(void *this_ptr) {
    return NULL;
}

/* Missing move and tuple implementations */
type *std_move_std__tuple_int__std__default_delete_int____(tuple *param_1) {
    return (type *)param_1;
}

/* _M_ptr implementation for __uniq_ptr_impl_int_std_default_delete_int__ */


default_delete *_M_deleter_int_std__default_delete_int__(void *this_ptr) {
    return NULL;
}

void tuple_int__std__default_delete_int___tuple(tuple_int__std__default_delete_int__ *this) {
    return;
}

type *_M_ptr_int_test_cpp_smart_ptr______2_(void *this_ptr) {
    return NULL;
}

void tuple_int__test_cpp_smart_ptr____2___tuple_true_false_(
    tuple_int__test_cpp_smart_ptr____2_ *this) {
    return;
}

void _Tuple_impl_1ul_test_cpp_smart_ptr______2___Tuple_impl(__2 *param) {
    return;
}

void _Head_base_1ul_test_cpp_smart_ptr______2_true___Head_base(_Head_base *param) {
    return;
}

void __uniq_ptr_impl_0ul_int__test_cpp_smart_ptr____2___M_ptr(__uniq_ptr_impl_0ul_int__test_cpp_smart_ptr____2_ *this_ptr) {
    return;
}

unsigned long long __uniq_ptr_impl_0ul_int__test_cpp_smart_ptr____2___M_deleter(__uniq_ptr_impl_0ul_int__test_cpp_smart_ptr____2_ *this_ptr) {
    return 0;
}

type *get_1ul_int__test_cpp_smart_ptr______2_(tuple *param) {
    return (type *)param;
}

__2 *__get_helper_1ul_test_cpp_smart_ptr______2_(_Tuple_impl *param) {
    return (__2 *)param;
}

void _Tuple_impl_1ul_test_cpp_smart_ptr______2___M_head(_Tuple_impl *param) {
    return;
}

_Head_base *_Head_base_1ul_test_cpp_smart_ptr______2_true___M_head(_Head_base *param) {
    return param;
}

type *get_0ul_int__test_cpp_smart_ptr______2__0(tuple *param) {
    return (type *)param;
}

int **__get_helper_0ul_int__test_cpp_smart_ptr______2__0(_Tuple_impl *param) {
    return (int **)param;
}

void _Tuple_impl_0ul_int__test_cpp_smart_ptr______2___M_head_0(_Tuple_impl *param) {
    return;
}

/* Container implementations */
void Container_int__Container(Container_int_ *this) {
    this->size = 0;
}

void Container_int__push(Container_int_ *this, int param) {
    if (this->size < 10) {
        this->data[this->size] = param;
        this->size = this->size + 1;
    }
}

unsigned int Container_int__get(Container_int_ *this, int param) {
    if ((param < 0) || (this->size <= param)) {
        return 0;
    } else {
        return this->data[param];
    }
}

unsigned int Container_int__getSize(Container_int_ *this) {
    return this->size;
}

void Container_double__Container(Container_double_ *this) {
    this->size = 0;
}

void Container_double__push(Container_double_ *this, double param) {
    if (this->size < 10) {
        this->data[this->size] = param;
        this->size = this->size + 1;
    }
}

unsigned long long Container_double__get(Container_double_ *this, int param) {
    if ((param < 0) || (this->size <= param)) {
        return 0;
    } else {
        unsigned long long result;
        *(double *)&result = this->data[param];
        return result;
    }
}

unsigned int Container_double__getSize(Container_double_ *this) {
    return this->size;
}

/* Virtual table pointer stubs - must be defined, not just declared */
void *PTR_virtual_func_00108878;
void *PTR_virtual_func_001088b8;
void *PTR_funcA_00108900;
void *PTR_funcB_00108930;
void *PTR__RTTIDerivedA_00108d50;
void *PTR__RTTIDerivedB_00108da0;
void *PTR__RTTIBase_00108d78;
void *PTR_func_00108c38;
void *PTR_funcA_001089b0;
void *PTR_funcB_001089d8;

/* Missing function implementations with underscore suffixes */
void std__Tuple_impl_1ul_std_default_delete_int___Tuple_impl_(void)
{
    return;
}

void std__Head_base_1ul_std_default_delete_int__true___Head_base_(void)
{
    return;
}

void std__Tuple_impl_1ul_std_default_delete_int_array___Tuple_impl_(void)
{
    std__Head_base_1ul_std_default_delete_int_array__true___Head_base_();
    return;
}

void std__Head_base_1ul_std_default_delete_int_array__true___Head_base_(void)
{
    return;
}

/* Additional missing function stubs */
void _Head_base_1ul_std_default_delete_int__true___M_head(_Head_base *param) {
    return;
}

void _Head_base_1ul_std_default_delete_int_array__true___M_head(_Head_base *param) {
    return;
}

void std__Head_base_1ul_std_default_delete_int__true___M_head(_Head_base *param) {
    return;
}

void std__Head_base_1ul_std_default_delete_int_array__true___M_head(_Head_base *param) {
    return;
}

void _Head_base_0ul_int_ptr_false___M_head(_Head_base *param) {
    return;
}

void std__Head_base_0ul_int_ptr_false___Head_base(_Head_base_0ul_int__false_ *this) {
    *(void **)this = NULL;
}

void _Tuple_impl_0ul_int_ptr_std_default_delete_int___M_head(_Tuple_impl *param) {
    return;
}

void _Tuple_impl_0ul_int_ptr_std_default_delete_int_array___M_head(_Tuple_impl *param) {
    return;
}

void _Tuple_impl_0ul_int_ptr_std_default_delete_int_array___Tuple_impl(_Tuple_impl_0ul_int__std__default_delete_int____ *this) {
    _Tuple_impl_1ul_std_default_delete_int_array___Tuple_impl();
    _Head_base_0ul_int_ptr_false___Head_base((_Head_base_0ul_int__false_ *)this);
}

void _Tuple_impl_0ul_int_ptr_std_default_delete_int___Tuple_impl(_Tuple_impl_0ul_int__std__default_delete_int__ *this) {
    std__Tuple_impl_1ul_std_default_delete_int___Tuple_impl();
    _Head_base_0ul_int_ptr_false___Head_base((_Head_base_0ul_int__false_ *)this);
}

void _Tuple_impl_1ul_std_default_delete_int_int___Tuple_impl(_Tuple_impl *param) {
    return;
}

void _Tuple_impl_0ul_int__std__default_delete_int____Tuple_impl(_Tuple_impl_0ul_int__std__default_delete_int__ *this, _Tuple_impl *param) {
    _Tuple_impl_1ul_std_default_delete_int___Tuple_impl((_Tuple_impl *)this);
    *(unsigned long long *)this = *(unsigned long long *)param;
}

void _Head_base_0ul_int_ptr_false___Head_base(_Head_base_0ul_int__false_ *this) {
    *(void **)this = NULL;
}

type *_M_ptr(void *this_ptr) {
    if (this_ptr != NULL) {
        return *(type **)this_ptr;
    }
    return NULL;
}

void __uniq_ptr_impl_int_std_default_delete_int___M_ptr(__uniq_ptr_impl_int_std__default_delete_int__ *this) {
    return;
}

void __uniq_ptr_impl_int_std_default_delete_int___M_deleter(__uniq_ptr_impl_int_std__default_delete_int__ *this) {
    return;
}

void __uniq_ptr_impl_int_std_default_delete_int_array___M_ptr(__uniq_ptr_impl_int_std__default_delete_int____ *this) {
    return;
}

void __uniq_ptr_impl_int_std_default_delete_int_array___M_deleter(__uniq_ptr_impl_int_std__default_delete_int____ *this) {
    return;
}

type *move_std__tuple_int__std__default_delete_int____(tuple *param) {
    return (type *)param;
}

