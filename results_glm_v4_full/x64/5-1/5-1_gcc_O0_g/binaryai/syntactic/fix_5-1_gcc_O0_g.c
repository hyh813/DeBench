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
typedef void type;

/* Forward declarations for C++ std library types */
typedef struct type_info type_info;
typedef struct _Tuple_impl _Tuple_impl;
typedef struct _Head_base _Head_base;
typedef struct tuple tuple;
typedef struct unique_ptr unique_ptr;
typedef struct __uniq_ptr_impl __uniq_ptr_impl;
typedef struct __uniq_ptr_data __uniq_ptr_data;

/* Unique pointer type aliases */
typedef struct __uniq_ptr_impl_int_std__default_delete_int__ __uniq_ptr_impl_int_std__default_delete_int__;
typedef struct __uniq_ptr_data_int_std__default_delete_int__true_true_ __uniq_ptr_data_int_std__default_delete_int__true_true_;
typedef struct unique_ptr_int_std__default_delete_int__ unique_ptr_int_std__default_delete_int__;

typedef struct __uniq_ptr_impl_int_std__default_delete_int_arr__ __uniq_ptr_impl_int_std__default_delete_int_arr__;
typedef struct __uniq_ptr_data_int_std__default_delete_int_arr__true_true_ __uniq_ptr_data_int_std__default_delete_int_arr__true_true_;
typedef struct unique_ptr_int___std__default_delete_int____ unique_ptr_int___std__default_delete_int____;

/* Lambda-based unique pointer types */
typedef struct _lambda_int___1_ _lambda_int___1_;
struct _lambda_int___1_ {
    int _0;
    void *_1;
};

typedef struct __uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ __uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__;
typedef struct __uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1__true_false_ __uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1__true_false_;
typedef struct unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__;

/* Tuple type aliases */
typedef struct tuple_int__std__default_delete_int__ tuple_int__std__default_delete_int__;
typedef struct _Tuple_impl_0ul_int__std__default_delete_int__ _Tuple_impl_0ul_int__std__default_delete_int__;
typedef struct _Head_base_0ul_int__false_ _Head_base_0ul_int__false_;
struct _Head_base_0ul_int__false_ {
    void *_M_head;
};
typedef struct _Head_base_1ul_std__default_delete_int__true___ _Head_base_1ul_std__default_delete_int__true___;

typedef struct tuple_int__test_cpp_smart_ptr_____lambda_int___1__ tuple_int__test_cpp_smart_ptr_____lambda_int___1__;
typedef struct _Tuple_impl_0ul_int__test_cpp_smart_ptr_____lambda_int___1__ _Tuple_impl_0ul_int__test_cpp_smart_ptr_____lambda_int___1__;
typedef struct _Tuple_impl_1ul_test_cpp_smart_ptr_____lambda_int___1__ _Tuple_impl_1ul_test_cpp_smart_ptr_____lambda_int___1__;
typedef struct _Head_base_1ul_test_cpp_smart_ptr_____lambda_int___1__true___ _Head_base_1ul_test_cpp_smart_ptr_____lambda_int___1__true___;

typedef struct tuple_int__std__default_delete_int____ tuple_int__std__default_delete_int____;
typedef struct _Tuple_impl_0ul_int__std__default_delete_int____ _Tuple_impl_0ul_int__std__default_delete_int____;
typedef struct _Head_base_1ul_std__default_delete_int_arr__true___ _Head_base_1ul_std__default_delete_int_arr__true___;

/* Deleter types */
typedef struct default_delete_int_ default_delete_int_;
struct default_delete_int_ {
    int _0;
};

/* SimpleClass definition */
typedef struct SimpleClass SimpleClass;
struct SimpleClass {
    int value;
    char name[32];
};

/* LifecycleClass definition */
typedef struct LifecycleClass LifecycleClass;
struct LifecycleClass {
    void *data;
    unsigned long size;
};

/* Base definition */
typedef struct Base Base;
struct Base {
    void **vtable;
};

/* Derived definition */
typedef struct Derived Derived;
struct Derived {
    void **vtable;
    int derived_value;
};

/* BaseA definition */
typedef struct BaseA BaseA;
struct BaseA {
    void **vtable;
};

/* BaseB definition */
typedef struct BaseB BaseB;
struct BaseB {
    void **vtable;
};

/* MultiDerived definition */
typedef struct MultiDerived MultiDerived;
struct MultiDerived {
    void **vtable;
    void **vtable2;
};

/* VirtualBase definition */
typedef struct VirtualBase VirtualBase;
struct VirtualBase {
    void **vtable;
};

/* MiddleA definition */
typedef struct MiddleA MiddleA;
struct MiddleA {
    void **vtable;
};

/* MiddleB definition */
typedef struct MiddleB MiddleB;
struct MiddleB {
    void **vtable;
};

/* DiamondDerived definition */
typedef struct DiamondDerived DiamondDerived;
struct DiamondDerived {
    void **vtable;
    void **vtable2;
    void **vtable3;
};

/* Point definition */
typedef struct Point Point;
struct Point {
    int x;
    int y;
};

/* RTTIBase definition */
typedef struct RTTIBase RTTIBase;
struct RTTIBase {
    void **vtable;
};

/* RTTIDerivedA definition */
typedef struct RTTIDerivedA RTTIDerivedA;
struct RTTIDerivedA {
    void **vtable;
};

/* RTTIDerivedB definition */
typedef struct RTTIDerivedB RTTIDerivedB;
struct RTTIDerivedB {
    void **vtable;
};

/* Lambda definitions */
typedef struct _lambda_int__1_ _lambda_int__1_;
struct _lambda_int__1_ {
    int _0;
    int *_1;
};

typedef struct default_delete_int___ default_delete_int___;
struct default_delete_int___ {
    int _0;
};

typedef struct default_delete default_delete;
struct default_delete {
    int _0;
};

/* Container types */
typedef struct Container_int_ Container_int_;
struct Container_int_ {
    int _data[10];
    unsigned int _size;
};

typedef struct Container_double_ Container_double_;
struct Container_double_ {
    double _data[10];
    unsigned int _size;
};

// Decompiled by BinaryAI
// SHA256: 571c716d007affa826894ab0316efc8ddb459209e4b3d40841f267d947a3b691

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
 (*(void (**)(void))((char *)0x0))();
 return;
}

// Function: __cxa_finalize @ 0x102180
void __cxa_finalize(void)
{
 __cxa_finalize(0);
 return;
}

// Function: operator.new[] @ 0x102190
void * operator_new__(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: printf @ 0x1021a0
int printf(char *__format,...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
}

// Function: __cxa_begin_catch @ 0x1021b0
void __cxa_begin_catch(void)
{
 __cxa_begin_catch(0);
 return;
}

// Function: strlen @ 0x1021c0
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: __cxa_allocate_exception @ 0x1021d0
void __cxa_allocate_exception(void)
{
 __cxa_allocate_exception(0);
 return;
}

// Function: strncpy @ 0x1021e0
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: __cxa_atexit @ 0x1021f0
void __cxa_atexit(void)
{
 __cxa_atexit(0,0,0);
 return;
}

// Function: operator.new @ 0x102200
void * operator_new(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: operator.delete @ 0x102210
void operator_delete(void *param_1,unsigned long param_2)
{
 operator_delete(param_1,param_2);
 return;
}

// Function: __cxa_bad_typeid @ 0x102220
void __cxa_bad_typeid(void)
{
 __cxa_bad_typeid(0);
 return;
}

// Function: __stack_chk_fail @ 0x102230
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: __dynamic_cast @ 0x102240
void __dynamic_cast(void)
{
 __dynamic_cast(0,0,0,0);
 return;
}

// Function: operator.delete[] @ 0x102250
void operator_delete__(void *param_1)
{
 free(param_1);
 return;
}

// Function: strcmp @ 0x102260
int strcmp(char *__s1,char *__s2)
{
 int iVar1;
 iVar1 = strcmp(__s1,__s2);
 return iVar1;
}

// Function: __cxa_throw_bad_array_new_length @ 0x102270
void __cxa_throw_bad_array_new_length(void)
{
 __cxa_throw_bad_array_new_length(0,0,0);
 return;
}

// Function: __cxa_rethrow @ 0x102280
void __cxa_rethrow(void)
{
 __cxa_rethrow(0);
 return;
}

// Function: std::ios_base::Init::Init @ 0x102290
void __thiscall std_ios_base_Init_Init(Init *this)
{
 Init(this);
 return;
}

// Function: puts @ 0x1022a0
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: __cxa_end_catch @ 0x1022b0
void __cxa_end_catch(void)
{
 __cxa_end_catch(0);
 return;
}

// Function: __cxa_throw @ 0x1022c0
void __cxa_throw(void)
{
 __cxa_throw(0,0,0);
}

// Function: _Unwind_Resume @ 0x1022d0
void _Unwind_Resume(void)
{
 _Unwind_Resume(0);
}

// Function: _start @ 0x1022e0
void processEntry _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
 do {
 } while( true );
}

// Function: deregister_tm_clones @ 0x102310
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x102340
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x102380
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

// Function: test_cpp_member_func @ 0x1023ca
int test_cpp_member_func(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 long in_FS_OFFSET;
 SimpleClass local_38 [40];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 SimpleClass::SimpleClass((SimpleClass *)local_38,5,"Test");
SimpleClass::setValue((SimpleClass *)local_38,10);
  iVar1 = SimpleClass::getValue((SimpleClass *)local_38);
  iVar2 = SimpleClass::compute((SimpleClass *)local_38,3);
 iVar3 = SimpleClass::getClassID();
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return iVar3 + iVar1 + iVar2;
}

// Function: test_cpp_constructor @ 0x10245c
int test_cpp_constructor(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 long in_FS_OFFSET;
 LifecycleClass local_28 [24];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
LifecycleClass::LifecycleClass((LifecycleClass *)local_28,5);
  iVar1 = LifecycleClass::getData((LifecycleClass *)local_28,2);
  iVar2 = LifecycleClass::getInstanceCount();
  LifecycleClass::_LifecycleClass((LifecycleClass *)local_28);
 iVar3 = LifecycleClass::getInstanceCount();
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return iVar1 + iVar2 + iVar3 * 1000;
}

// Function: call_virtual_func @ 0x1024de
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)(param_1,param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x10250b
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 long in_FS_OFFSET;
 char **local_50;
 char ***local_48;
 Derived *local_40;
 Derived local_38 [24];
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 local_50 = &PTR_virtual_func_00108b50;
Derived::Derived((Derived *)local_38,3);
  iVar1 = Base::virtual_func((Base *)&local_50,5);
  iVar2 = Derived::virtual_func((Derived *)local_38,5);
  local_48 = &local_50;
  local_40 = local_38;
  iVar3 = call_virtual_func((Base *)local_48,5);
  iVar4 = call_virtual_func((Base *)local_40,5);
  Derived::_Derived((Derived *)local_38);
  Base::_Base((Base *)&local_50);
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return iVar1 + iVar2 + iVar3 + iVar4;
}

// Function: test_cpp_multiple_inheritance @ 0x102616
int test_cpp_multiple_inheritance(void)
{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 void **local_48;
 unsigned int local_40;
 void **local_38;
 unsigned int local_30;
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
MultiDerived::MultiDerived((MultiDerived *)&local_48);
  local_40 = 100;
  local_30 = 200;
  iVar1 = (int)(*(unsigned long long (*)(void *))local_48)(&local_48);
  iVar2 = (int)(*(unsigned long long (*)(void *))local_38)(&local_38);
  MultiDerived::_MultiDerived((MultiDerived *)&local_48);
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return iVar1 + iVar2 + (uint)(&local_48 != &local_38);
}

// Function: test_cpp_diamond_inheritance @ 0x1026f3
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 DiamondDerived local_58 [32];
 void **local_38;
 unsigned int local_30;
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
DiamondDerived::DiamondDerived((DiamondDerived *)local_58);
  local_30 = 0x32;
  iVar1 = (int)(*(int (*)(void *))local_38)(&local_38);
  local_30 = 100;
  iVar2 = (int)(*(int (*)(void *))local_38)(&local_38);
  DiamondDerived::_DiamondDerived((DiamondDerived *)local_58);
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return iVar1 + iVar2;
}

// Function: test_cpp_operator_overload @ 0x1027b2
int test_cpp_operator_overload(void)
{
 char cVar1;
 int iVar2;
 long in_FS_OFFSET;
 Point local_28 [8];
 Point local_20 [8];
 unsigned long long local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
Point::Point((Point *)local_28,1,2);
  Point::Point((Point *)local_20,3,4);
  local_18 = Point::operator_((Point *)local_28,(Point *)local_20);
  cVar1 = Point::operator__((Point *)local_28,(Point *)local_20);
  Point::operator__((Point *)&local_18);
 if (cVar1 == '\0') {
 iVar2 = 10;
 }
 else {
 iVar2 = 0;
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return local_18._4_4_ + (int)local_18 + iVar2;
}

// Function: test_cpp_template_func @ 0x102864
int test_cpp_template_func(void)
{
 long in_FS_OFFSET;
 int local_24;
 int local_20;
 int local_1c;
 double local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_1c = template_max_int_(3,7);
 local_18 = template_max_double_(2.5,1.5);
 local_24 = 10;
 local_20 = 0x14;
 template_swap_int_(&local_24,&local_20);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return local_20 + (int)local_18 + local_1c + local_24;
}

// Function: test_cpp_template_class @ 0x102906
int test_cpp_template_class(void)
{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 double dVar3;
 Container_int_ local_98 [48];
 Container_double_ local_68 [88];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
Container_int_::Container((Container_int_ *)local_98);
  Container_int_::push((Container_int_ *)local_98,10);
  Container_int_::push((Container_int_ *)local_98,0x14);
  Container_int_::push((Container_int_ *)local_98,0x1e);
  iVar1 = Container_int_::get((Container_int_ *)local_98,0);
  iVar2 = Container_int_::getSize((Container_int_ *)local_98);
  Container_double_::Container((Container_double_ *)local_68);
  Container_double_::push((Container_double_ *)local_68,3.14);
  dVar3 = (double)Container_double_::get((Container_double_ *)local_68,0);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return (int)dVar3 + iVar1 + iVar2;
}

int __thiscall test_cpp_lambda_lambda_operator__(_lambda_int__1_ *_this,int param_1)
{
 **(int **)(_this + 8) = **(int **)(_this + 8) + 5;
 return **(int **)(_this + 8) + *(int *)_this * param_1;
}

// Function: test_cpp_lambda @ 0x102a4e
int test_cpp_lambda(void)
{
 long in_FS_OFFSET;
 unsigned int local_38;
 unsigned int local_34;
 int local_30;
 unsigned int local_2c;
 unsigned int local_28 [2];
 unsigned int *local_20;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_34 = 10;
 local_38 = 0x14;
 local_28[0] = 10;
 local_20 = &local_38;
 local_30 = test_cpp_lambda_lambda_operator__((_lambda_int__1_ *)local_28,3);
 local_2c = 0x1e;
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return local_30 + 0x1e;
}

// Function: test_cpp_exception @ 0x102abe
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,0,0);
}

void __thiscall
test_cpp_smart_ptr_lambda_operator__(_lambda_int___1_ *_this,int *param_1)
{
 *param_1 = -1;
 if (param_1 != (int *)0x0) {
 operator_delete(param_1,4);
 }
 return;
}

// Function: test_cpp_smart_ptr @ 0x102c17
int test_cpp_smart_ptr(void)
{
 int iVar1;
 int *piVar2;
 unsigned int *puVar3;
 long in_FS_OFFSET;
 _lambda_int___1_ local_4d;
 int local_4c;
 int local_48;
 int local_44;
 unique_ptr_int_std__default_delete_int__ local_40 [8];
 unique_ptr_int_std__default_delete_int__ local_38 [8];
 unique_ptr_int___std__default_delete_int____ local_30 [8];
 unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ local_28 [8];
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 piVar2 = (int *)operator_new(4);
 *piVar2 = 100;
 std__unique_ptr_int_std__default_delete_int___unique_ptr_std__default_delete_int__void_
 (local_40,piVar2);
 puVar3 = (unsigned int *)std__unique_ptr_int_std__default_delete_int___operator_(local_40);
 *puVar3 = 200;
 std__move_std__unique_ptr_int_std__default_delete_int____((unique_ptr *)local_40);
 std__unique_ptr_int_std__default_delete_int___unique_ptr(local_38,(unique_ptr *)local_40);
 piVar2 = (int *)std__unique_ptr_int_std__default_delete_int___operator_(local_38);
 local_4c = *piVar2;
 piVar2 = (int *)operator_new__(0x14);
 *piVar2 = 1;
 piVar2[1] = 2;
 piVar2[2] = 3;
 piVar2[3] = 4;
 piVar2[4] = 5;
 std__unique_ptr_int___std__default_delete_int____
 unique_ptr_int__std__default_delete_int____void_bool_(local_30,piVar2);
 piVar2 = (int *)std__unique_ptr_int___std__default_delete_int____operator__(local_30,2);
 local_48 = *piVar2;
 piVar2 = (int *)operator_new(4);
 *piVar2 = 500;
 std__unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1___unique_ptr__lambda_int___1__void_
 (local_28,piVar2,&local_4d);
 piVar2 = (int *)std__unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1___operator_(local_28);
 local_44 = *piVar2;
 iVar1 = local_4c + local_48 + local_44;
 std__unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1___unique_ptr(local_28);
 std__unique_ptr_int___std__default_delete_int____unique_ptr(local_30);
 std__unique_ptr_int_std__default_delete_int___unique_ptr(local_38);
 std__unique_ptr_int_std__default_delete_int___unique_ptr(local_40);
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return iVar1;
}

// Function: test_cpp_rtti @ 0x102dc5
int test_cpp_rtti(void)
{
 char cVar1;
 int iVar2;
 long *this_ptr;
 long *this_00;
 long lVar3;
 char *__s;
 size_t sVar4;
 int local_3c;
 this_ptr = (long *)operator_new(8);
 *this_ptr = 0;
 RTTIDerivedA::RTTIDerivedA((RTTIDerivedA *)this_ptr);
 this_00 = (long *)operator_new(8);
 *this_00 = 0;
 RTTIDerivedB::RTTIDerivedB((RTTIDerivedB *)this_00);
 local_3c = 0;
 if (this_ptr == (long *)0x0) {
 __cxa_bad_typeid();
LAB_00102e46:
 local_3c = 10;
 }
 else {
 cVar1 = std__type_info__operator__
 (*(type_info **)(*this_ptr + -8),(type_info *)0);
 if (cVar1 != '\0') goto LAB_00102e46;
 }
 if (this_00 == (long *)0x0) {
 __cxa_bad_typeid();
LAB_00102e77:
 local_3c = local_3c + 0x14;
 }
 else {
 cVar1 = std__type_info__operator__
 (*(type_info **)(*this_00 + -8),(type_info *)0);
 if (cVar1 != '\0') goto LAB_00102e77;
 }
 if (this_ptr == (long *)0x0) {
 lVar3 = 0;
 }
 else {
 lVar3 = __dynamic_cast(this_ptr,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 }
 if (lVar3 != 0) {
 iVar2 = RTTIDerivedA::derivedA_data();
 local_3c = local_3c + iVar2;
 }
 if (this_00 == (long *)0x0) {
 lVar3 = 0;
 }
 else {
 lVar3 = __dynamic_cast(this_00,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 }
 if (lVar3 != 0) {
 iVar2 = RTTIDerivedB::derivedB_data();
 local_3c = local_3c + iVar2;
 }
 if (this_ptr == (long *)0x0) {
 __cxa_bad_typeid();
 }
 else {
 __s = (char *)std__type_info__name(*(type_info **)(*this_ptr + -8));
 sVar4 = strlen(__s);
 local_3c = local_3c + (int)sVar4;
 if (this_ptr == (long *)0x0) goto LAB_00102f4e;
 }
 (**(void **)(*this_ptr + 8))(this_ptr);
LAB_00102f4e:
 if (this_00 != (long *)0x0) {
 (**(void **)(*this_00 + 8))(this_00);
 }
 return local_3c;
}

// Function: test_cpp_oo_features @ 0x102f6f
void test_cpp_oo_features(void)
{
 uint uVar1;
 puts(&DAT_00105040);
 uVar1 = test_cpp_member_func();
 printf(&DAT_00105064,(unsigned long)uVar1);
 uVar1 = test_cpp_constructor();
 printf(&DAT_00105082,(unsigned long)uVar1);
 uVar1 = test_cpp_virtual_func();
 printf(&DAT_0010509e,(unsigned long)uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 printf(&DAT_001050ba,(unsigned long)uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 printf(&DAT_001050d6,(unsigned long)uVar1);
 uVar1 = test_cpp_operator_overload();
 printf(&DAT_001050f3,(unsigned long)uVar1);
 uVar1 = test_cpp_template_func();
 printf(&DAT_0010510f,(unsigned long)uVar1);
 uVar1 = test_cpp_template_class();
 printf(&DAT_0010512b,(unsigned long)uVar1);
 uVar1 = test_cpp_lambda();
 printf(&DAT_00105147,(unsigned long)uVar1);
 uVar1 = test_cpp_exception();
 printf(&DAT_00105163,(unsigned long)uVar1);
 uVar1 = test_cpp_smart_ptr();
 printf(&DAT_00105180,(unsigned long)uVar1);
 uVar1 = test_cpp_rtti();
 printf(&DAT_0010519d,(unsigned long)uVar1);
 return;
}

// Function: main @ 0x1030cd
unsigned long long main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: std::__uniq_ptr_data<int,test_cpp_smart_ptr()::{lambda(int*)_num_1_},true,false>::__uniq_ptr_impl<{lambda(int*)_num_1_}const&> @ 0x1030e2
void __thiscall
std____uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1____true_false____uniq_ptr_impl__lambda_int___1_const__
 (__uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1__true_false_ *this_ptr,int *param_1
 ,_lambda_int___1_ *param_2)
{
__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1____uniq_ptr_impl__lambda_int___1_const__
((__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *)this_ptr,param_1,param_2);
 return;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)_num_1_}>::unique_ptr<{lambda(int*)_num_1_},void> @ 0x103110
void __thiscall
std__unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1___unique_ptr_void
 (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *this_ptr,int *param_1,
 _lambda_int___1_ *param_2)
{
std____uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1____true_false____uniq_ptr_impl__lambda_int___1_const__
((__uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1__true_false_ *)this,param_1,
param_2);
 return;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)_num_1_}>::~unique_ptr @ 0x10313e
void __thiscall
std__unique_ptr_int_test_cpp_smart_ptr____lambda_int___1___unique_ptr
 (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *this_ptr)
{
 int **ppiVar1;
 _lambda_int___1_ *this_00;
 int **ppiVar2;
 ppiVar1 = (int **)std____uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1___::_M_ptr(this_ptr);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (_lambda_int___1_ *)get_deleter(this_ptr);
 ppiVar2 = (int **)move_int___(ppiVar1);
 test_cpp_smart_ptr_lambda_operator__(this_00,*ppiVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)_num_1_}>::operator* @ 0x1031a2
int * __thiscall
std__unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1___operator_
 (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *this_ptr)
{
 return std__unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__get(this_ptr);
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)_num_1_}>::__uniq_ptr_impl<{lambda(int*)_num_1_}const&> @ 0x1031c4
void __thiscall
std____uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1___uniq_ptr_impl__lambda_int___1_const__
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *this_ptr,int *param_1,
 _lambda_int___1_ *param_2)
{
 _lambda_int___1_ *p_Var1;
 int *local_28;
 __uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *local_20;
 local_28 = param_1;
 local_20 = this_ptr;
 p_Var1 = forward_test_cpp_smart_ptr_____lambda_int___1_const__((type *)param_2);
 std__tuple_int__test_cpp_smart_ptr_____lambda_int___1__tuple_int____lambda_int___1_const__true_
 ((tuple_int__test_cpp_smart_ptr_____lambda_int___1__ *)this_ptr,&local_28,p_Var1);
 return;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)_num_1_}>::_M_ptr @ 0x103202
int * std____uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1___M_ptr(__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *_this)
{
 return get_0ul_int__test_cpp_smart_ptr_____lambda_int___1__((int *)_this, (_lambda_int___1_ *)0);
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)_num_1_}>::get_deleter @ 0x10321c
_lambda_int___1_ * std__unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__get_deleter(unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *this)
{
 return std____uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1___::_M_deleter((__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *)this);
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)_num_1_}>::get @ 0x103236
int * std__unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__get(unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *this)
{
 return std____uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1___::_M_ptr((__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *)this);
}

// Function: std::forward<test_cpp_smart_ptr()::{lambda(int*)_num_1_}const&> @ 0x103250
_lambda_int___1_ * std::forward_test_cpp_smart_ptr_____lambda_int___1_const__(type *param_1)
{
 return (_lambda_int___1_ *)param_1;
}

// Function: std::tuple<int*,test_cpp_smart_ptr()::{lambda(int*)_num_1_}>::tuple<{int*,test_cpp_smart_ptr()::{lambda(int*)_num_1_}>const&,true> @ 0x10325e
void __thiscall
std__tuple_int__test_cpp_smart_ptr_____lambda_int___1__tuple_int____lambda_int___1_const__true_
 (tuple_int__test_cpp_smart_ptr_____lambda_int___1__ *this,int **param_1,
 _lambda_int___1_ *param_2)
{
 _lambda_int___1_ *p_Var1;
 int **ppiVar2;
 p_Var1 = forward_test_cpp_smart_ptr_____lambda_int___1_const__((type *)param_2);
 ppiVar2 = forward_int___((type *)param_1);
 std____Tuple_impl_0ul_int__test_cpp_smart_ptr_____lambda_int___1__::
 _Tuple_impl_int____lambda_int___1_const__void_
 ((_Tuple_impl_0ul_int__test_cpp_smart_ptr_____lambda_int___1__ *)this,ppiVar2,p_Var1);
}

// Function: std::get_0ul_int__test_cpp_smart_ptr_____lambda_int___1__ @ 0x1032ac
int * std_get_0ul_int__test_cpp_smart_ptr_____lambda_int___1__
 (int *param_1,_lambda_int___1_ *param_2)
{
 return param_1;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)_num_1_}>::_M_deleter @ 0x1032c6
_lambda_int___1_ * std____uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__M_deleter(__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *self)
{
 return get_1ul_int__test_cpp_smart_ptr_____lambda_int___1__((int *)self, (_lambda_int___1_ *)((char *)self + 8));
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)_num_1_}>::_M_ptr @ 0x1032e0
unsigned long long std____uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__M_ptr(__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *self)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)std____get_helper_0ul_int__test_cpp_smart_ptr_____lambda_int___1__((_Tuple_impl *)self);
 return *puVar1;
}

// Function: std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)_num_1_}>::_Tuple_impl<{int*,test_cpp_smart_ptr()::{lambda(int*)_num_1_}>const&,void> @ 0x1032fe
void __thiscall
std____Tuple_impl_0ul_int__test_cpp_smart_ptr_____lambda_int___1___Tuple_impl_int____lambda_int___1_const__void_
 (_Tuple_impl_0ul_int__test_cpp_smart_ptr_____lambda_int___1__ *this_ptr,int **param_1,
 _lambda_int___1_ *param_2)
{
 int **ppiVar1;
 std::forward_test_cpp_smart_ptr_____lambda_int___1_const__(param_2);
 std____Tuple_impl_1ul_test_cpp_smart_ptr_____lambda_int___1__::_Tuple_impl((_Tuple_impl_1ul_test_cpp_smart_ptr_____lambda_int___1__ *)this_ptr);
 ppiVar1 = forward_int___((type *)param_1);
 std____Head_base_0ul_int__false___::_Head_base_int___((_Head_base_0ul_int__false_ *)this_ptr,ppiVar1);
 return;
}

// Function: std::__get_helper<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)_num_1_}> @ 0x103353
int ** std____get_helper_0ul_int__test_cpp_smart_ptr_____lambda_int___1_(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = std____Tuple_impl_0ul_int__test_cpp_smart_ptr_____lambda_int___1__M_head
 ((_Tuple_impl_0ul_int__test_cpp_smart_ptr_____lambda_int___1__ *)param_1);
 return ppiVar1;
}

// Function: std::get<1ul,test_cpp_smart_ptr()::{lambda(int*)_num_1_}> @ 0x10336d
_lambda_int___1_ * std__get_1ul_test_cpp_smart_ptr_____lambda_int___1_(_Tuple_impl *param_1)
{
 _lambda_int___1_ *p_Var1;
 p_Var1 = std____get_helper_1ul_test_cpp_smart_ptr_____lambda_int___1__((_Tuple_impl_1ul_test_cpp_smart_ptr_____lambda_int___1__ *)param_1);
 return p_Var1;
}

// Function: std::get<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)_num_1_}> @ 0x103387
int * std__get_0ul_int__test_cpp_smart_ptr_____lambda_int___1_(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = std____get_helper_0ul_int__test_cpp_smart_ptr_____lambda_int___1__(param_1);
 return *ppiVar1;
}

// Function: std::_Tuple_impl<1ul,test_cpp_smart_ptr()::{lambda(int*)_num_1_}>::_Tuple_impl @ 0x1033a2
void std____Tuple_impl_1ul_test_cpp_smart_ptr_____lambda_int___1___Tuple_impl(_Tuple_impl_1ul_test_cpp_smart_ptr_____lambda_int___1__ *param_1)
{
 std_Head_base_1ul_test_cpp_smart_ptr_____lambda_int___1__true___Head_base(param_1);
 return;
}

// Function: std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)_num_1_}>::_M_head @ 0x1033c8
int ** std____Tuple_impl_0ul_int__test_cpp_smart_ptr_____lambda_int___1__M_head(_Tuple_impl_0ul_int__test_cpp_smart_ptr_____lambda_int___1__ *this_ptr)
{
 return std____Head_base_0ul_int__false___::_M_head(this_ptr);
}

// Function: std::__get_helper<1ul,test_cpp_smart_ptr()::{lambda(int*)_num_1_}> @ 0x1033e2
_lambda_int___1_ *
std____get_helper_1ul_test_cpp_smart_ptr_____lambda_int___1_(_Tuple_impl *param_1)
{
 _lambda_int___1_ *p_Var1;
 p_Var1 = (_lambda_int___1_ *)
 std____Tuple_impl_1ul_test_cpp_smart_ptr_____lambda_int___1__::_M_head
 ((_Tuple_impl_1ul_test_cpp_smart_ptr_____lambda_int___1__ *)param_1);
 return p_Var1;
}

// Function: std::__get_helper<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)_num_1_}> @ 0x1033fc
int ** std____get_helper_0ul_int__test_cpp_smart_ptr_____lambda_int___1_(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = std____Tuple_impl_0ul_int__test_cpp_smart_ptr_____lambda_int___1__::_M_head
 ((_Tuple_impl_0ul_int__test_cpp_smart_ptr_____lambda_int___1__ *)param_1);
 return ppiVar1;
}

// Function: std::_Head_base<1ul,test_cpp_smart_ptr()::{lambda(int*)_num_1_},true>::_Head_base @ 0x103416
void std_Head_base_1ul_test_cpp_smart_ptr_____lambda_int___1__true___Head_base(_Head_base_1ul_test_cpp_smart_ptr_____lambda_int___1__true___ *self)
{
 return;
}

// Function: std::_Tuple_impl<1ul,test_cpp_smart_ptr()::{lambda(int*)_num_1_}>::_M_head @ 0x103425
_lambda_int___1_ * std____Tuple_impl_1ul_test_cpp_smart_ptr_____lambda_int___1__M_head(_Tuple_impl_1ul_test_cpp_smart_ptr_____lambda_int___1__ *param_1)
{
 return std____Head_base_1ul_test_cpp_smart_ptr_____lambda_int___1__true___M_head((_Head_base_1ul_test_cpp_smart_ptr_____lambda_int___1__true___ *)param_1);
}

// Function: std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)_num_1_}>::_M_head @ 0x10343f
int ** std____Tuple_impl_0ul_int__test_cpp_smart_ptr_____lambda_int___1__M_head(_Tuple_impl_0ul_int__test_cpp_smart_ptr_____lambda_int___1__ *this_ptr)
{
 return std____Head_base_0ul_int__false___::_M_head(this_ptr);
}

// Function: std::_Head_base<1ul,test_cpp_smart_ptr()::{lambda(int*)_num_1_},true>::_M_head @ 0x103459
_lambda_int___1_ *
std____Head_base_1ul_test_cpp_smart_ptr_____lambda_int___1__true___M_head(_Head_base_1ul_test_cpp_smart_ptr_____lambda_int___1__true___ *self)
{
 return (_lambda_int___1_ *)self;
}

// Function: __static_initialization_and_destruction_0 @ 0x103467
void __static_initialization_and_destruction_0(int param_1,int param_2)
{
 if ((param_1 == 1) && (param_2 == 0xffff)) {
 std::ios_base::Init::Init((Init *)&std::__ioinit);
 __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
 }
 return;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x1034bd
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 __static_initialization_and_destruction_0(1,0xffff);
 return;
}

// Function: std::type_info::name @ 0x1034d6
long __thiscall std::type_info::name(type_info *this)
{
 long lVar1;
 if (**(char **)(this + 8) == '*') {
 lVar1 = *(long *)(this + 8) + 1;
 }
 else {
 lVar1 = *(long *)(this + 8);
 }
 return lVar1;
}

// Function: std::type_info::operator== @ 0x10350a
unsigned long long __thiscall std::type_info::operator__(type_info *this,type_info *param_1)
{
 int iVar1;
 unsigned long long uVar2;
 if (*(long *)(this + 8) == *(long *)(param_1 + 8)) {
LAB_00103561:
 uVar2 = 1;
 }
 else {
 if (**(char **)(this + 8) != '*') {
 iVar1 = strcmp(*(char **)(this + 8),*(char **)(param_1 + 8));
 if (iVar1 == 0) goto LAB_00103561;
 }
 uVar2 = 0;
 }
 return uVar2;
}

// Function: SimpleClass::SimpleClass @ 0x103570
void __thiscall SimpleClass_SimpleClass(SimpleClass *_this,int param_1,char *param_2)
{
 *(int *)_this = param_1;
 strncpy((char *)(_this + 4),param_2,0x1f);
 ((char *)_this)[35] = 0;
 return;
}

// Function: SimpleClass::getValue @ 0x1035b8
unsigned int __thiscall SimpleClass_getValue(SimpleClass *_this)
{
 return *(unsigned int *)_this;
}

// Function: SimpleClass::setValue @ 0x1035cc
void __thiscall SimpleClass_setValue(SimpleClass *_this,int param_1)
{
 *(int *)_this = param_1;
 return;
}

// Function: SimpleClass::compute @ 0x1035e8
int __thiscall SimpleClass_compute(SimpleClass *_this,int param_1)
{
 int iVar1;
 size_t sVar2;
 iVar1 = *(int *)_this;
 sVar2 = strlen((char *)(_this + 4));
 return (int)sVar2 + iVar1 * param_1;
}

// Function: SimpleClass::getClassID @ 0x103620
unsigned long long SimpleClass::getClassID(void)
{
 return 0x1234;
}

// Function: LifecycleClass::LifecycleClass @ 0x103630
void __thiscall LifecycleClass::LifecycleClass(LifecycleClass *_this,unsigned long param_1)
{
 void *pvVar1;
 unsigned long local_10;
 *(unsigned long *)(_this + 8) = param_1;
 if (param_1 < 0x1fffffffffffffff) {
 pvVar1 = operator_new__(param_1 << 2);
 *(void **)_this = pvVar1;
 for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {
LAB_00103688:
 *(int *)(local_10 * 4 + *(long *)_this) = (int)local_10 * 10;
 }
 instance_count = instance_count + 1;
 return;
 }
 __cxa_throw_bad_array_new_length();
 goto LAB_00103688;
}

// Function: LifecycleClass::~LifecycleClass @ 0x1036d0
void __thiscall LifecycleClass__LifecycleClass(LifecycleClass *_this)
{
 if (*(long *)_this != 0) {
 operator_delete__(*(void **)_this);
 }
 instance_count = instance_count + -1;
 return;
}

// Function: LifecycleClass::getData @ 0x10370e
unsigned int __thiscall LifecycleClass::getData(LifecycleClass *_this,unsigned long param_1)
{
 unsigned int uVar1;
 if (param_1 < *(unsigned long *)(_this + 8)) {
 uVar1 = *(unsigned int *)(param_1 * 4 + *(long *)_this);
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}

// Function: LifecycleClass::getInstanceCount @ 0x103749
unsigned int LifecycleClass::getInstanceCount(void)
{
 return instance_count;
}

// Function: Base::virtual_func @ 0x10375a
int __thiscall Base::virtual_func(Base *_this,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x103772
char * Base::getName(void)
{
 return &DAT_0010502d;
}

// Function: Base::~Base @ 0x103788
void __thiscall Base__Base(Base *_this)
{
 *(char ***)_this = &PTR_virtual_func_00108b50;
 return;
}

// Function: Base::~Base @ 0x1037a6
void __thiscall Base__Base_free(Base *_this)
{
 Base__Base(_this);
 operator_delete(_this,8);
 return;
}

// Function: Base::Base @ 0x1037d6
void __thiscall Base::Base(Base *_this)
{
 *(char ***)_this = &PTR_virtual_func_00108b50;
 return;
}

// Function: Derived::Derived @ 0x1037f4
void __thiscall Derived::Derived(Derived *_this,int param_1)
{
 Base::Base((Base *)_this);
 *(char ***)_this = &PTR_virtual_func_00108b20;
 *(int *)(_this + 8) = param_1;
 return;
}

// Function: Derived::virtual_func @ 0x10382e
int __thiscall Derived::virtual_func(Derived *_this,int param_1)
{
 return *(int *)(_this + 8) * param_1;
}

// Function: Derived::getName @ 0x10384a
char * Derived::getName(void)
{
 return "Derived";
}

// Function: BaseA::funcA @ 0x103860
unsigned long long BaseA::funcA(void)
{
 return 10;
}

// Function: BaseA::~BaseA @ 0x103874
void __thiscall BaseA__BaseA(BaseA *_this)
{
 *(char ***)_this = &PTR_funcA_00108af8;
 return;
}

// Function: BaseA::~BaseA @ 0x103892
void __thiscall BaseA__BaseA_free(BaseA *_this)
{
 BaseA__BaseA(_this);
 operator_delete(_this,0x10);
 return;
}

// Function: BaseB::funcB @ 0x1038c2
unsigned long long BaseB::funcB(void)
{
 return 0x14;
}

// Function: BaseB::~BaseB @ 0x1038d6
void __thiscall BaseB__BaseB(BaseB *_this)
{
 *(char ***)_this = &PTR_funcB_00108ad0;
 return;
}

// Function: BaseB::~BaseB @ 0x1038f4
void __thiscall BaseB__BaseB_free(BaseB *_this)
{
 BaseB__BaseB(_this);
 operator_delete(_this,0x10);
 return;
}

// Function: MultiDerived::funcA @ 0x103924
unsigned long long MultiDerived::funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x103938
unsigned long long MultiDerived::funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x10394b
unsigned long long __thiscall MultiDerived::funcB(MultiDerived *_this)
{
 return MultiDerived::funcB();
}

// Function: BaseA::BaseA @ 0x103956
void __thiscall BaseA::BaseA(BaseA *_this)
{
 *(char ***)_this = &PTR_funcA_00108af8;
 return;
}

// Function: BaseB::BaseB @ 0x103974
void __thiscall BaseB::BaseB(BaseB *_this)
{
 *(char ***)_this = &PTR_funcB_00108ad0;
 return;
}

// Function: MultiDerived::MultiDerived @ 0x103992
void __thiscall MultiDerived::MultiDerived(MultiDerived *_this)
{
 BaseA::BaseA((BaseA *)_this);
 BaseB::BaseB((BaseB *)(_this + 0x10));
 *(char ***)_this = &PTR_funcA_00108a78;
 *(char ***)(_this + 0x10) = &PTR_funcB_00108aa8;
 return;
}

// Function: VirtualBase::func @ 0x1039de
unsigned long long VirtualBase::func(void)
{
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x1039f2
void __thiscall VirtualBase__VirtualBase(VirtualBase *_this)
{
 *(char ***)_this = &PTR_func_00108a50;
 return;
}

// Function: VirtualBase::~VirtualBase @ 0x103a10
void __thiscall VirtualBase__VirtualBase_free(VirtualBase *_this)
{
 VirtualBase__VirtualBase(_this);
 operator_delete(_this,0x10);
 return;
}

// Function: MiddleA::func @ 0x103a40
int __thiscall MiddleA__func(MiddleA *_this)
{
 return *(int *)(_this + *(long *)(*(long *)_this + -0x18) + 8) + 0x96;
}

// Function: MiddleA::func @ 0x103a6e
void __thiscall MiddleA__func_void(MiddleA *_this)
{
 MiddleA__func(_this + *(long *)(*(long *)_this + -0x18));
 return;
}

// Function: MiddleB::func @ 0x103a7c
int __thiscall MiddleB__func(MiddleB *_this)
{
 return *(int *)(_this + *(long *)(*(long *)_this + -0x18) + 8) + 200;
}

// Function: MiddleB::func @ 0x103aaa
void __thiscall MiddleB__func_void(MiddleB *_this)
{
 MiddleB__func(_this + *(long *)(*(long *)_this + -0x18));
 return;
}

// Function: DiamondDerived::func @ 0x103ab8
int __thiscall DiamondDerived__func_int(DiamondDerived *_this)
{
 return *(int *)(_this + *(long *)(*(long *)_this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x103ae6
void __thiscall DiamondDerived__func_void1(DiamondDerived *_this)
{
 DiamondDerived__func_int(_this + *(long *)(*(long *)_this + -0x18));
 return;
}

// Function: DiamondDerived::func @ 0x103af3
void __thiscall DiamondDerived__func_void2(DiamondDerived *_this)
{
 DiamondDerived__func_int(_this + -0x10);
 return;
}

// Function: VirtualBase::VirtualBase @ 0x103afe
void __thiscall VirtualBase__VirtualBase(VirtualBase *_this)
{
 *(char ***)_this = &PTR_func_00108a50;
 return;
}

// Function: MiddleA::MiddleA @ 0x103b1c
void __thiscall MiddleA__MiddleA(MiddleA *self, unsigned long long *in_RSI)
{
 *(unsigned long long *)self = *in_RSI;
 *(unsigned long long *)(self + *(long *)(*(long *)self + -0x18)) = in_RSI[1];
 return;
}

// Function: MiddleA::~MiddleA @ 0x103b60
void __thiscall MiddleA__MiddleA_Destructor(MiddleA *self, unsigned long long *in_RSI)
{
 *(unsigned long long *)self = *in_RSI;
 *(unsigned long long *)(self + *(long *)(*(long *)self + -0x18)) = in_RSI[1];
 return;
}

// Function: MiddleB::MiddleB @ 0x103ba4
void __thiscall MiddleB__MiddleB(MiddleB *self, unsigned long long *in_RSI)
{
 *(unsigned long long *)self = *in_RSI;
 *(unsigned long long *)(self + *(long *)(*(long *)self + -0x18)) = in_RSI[1];
 return;
}

// Function: MiddleB::~MiddleB @ 0x103be8
void __thiscall MiddleB__MiddleB_Destructor(MiddleB *self, unsigned long long *in_RSI)
{
 *(unsigned long long *)self = *in_RSI;
 *(unsigned long long *)(self + *(long *)(*(long *)self + -0x18)) = in_RSI[1];
 return;
}

// Function: DiamondDerived::DiamondDerived @ 0x103c2c
void __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 VirtualBase__VirtualBase((VirtualBase *)(this + 0x20));
 MiddleA__MiddleA((MiddleA *)this);
 MiddleB__MiddleB((MiddleB *)(this + 0x10));
 *(unsigned long long *)this = 0x1088b8;
 *(unsigned long long *)(this + 0x20) = 0x108920;
 *(unsigned long long *)(this + 0x10) = 0x1088e8;
 return;
}

// Function: Point::Point @ 0x103cae
void __thiscall Point::Point(Point *_this,int param_1,int param_2)
{
 *(int *)_this = param_1;
 *(int *)(_this + 4) = param_2;
 return;
}

// Function: Point::operator+ @ 0x103cd6
unsigned long long __thiscall Point::operator_(Point *_this,Point *param_1)
{
 long in_FS_OFFSET;
 unsigned long long local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 Point::Point((Point *)&local_18,*(int *)_this + *(int *)param_1,*(int *)(_this + 4) + *(int *)(param_1 + 4)
 );
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return local_18;
}

// Function: Point::operator== @ 0x103d40
unsigned long long __thiscall Point::operator__(Point *_this,Point *param_1)
{
 unsigned long long uVar1;
 if ((*(int *)_this == *(int *)param_1) && (*(int *)(_this + 4) == *(int *)(param_1 + 4))) {
 uVar1 = 1;
 }
 else {
 uVar1 = 0;
 }
 return uVar1;
}

// Function: Point::operator++ @ 0x103d80
Point * __thiscall Point__operator_increment(Point *__this)
{
 *(int *)__this = *(int *)__this + 1;
 *(int *)(__this + 4) = *(int *)(__this + 4) + 1;
 return __this;
}

// Function: template_max_int_ @ 0x103db2
int template_max_int_(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max_double_ @ 0x103dd2
double template_max_double_(double param_1,double param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_swap_int_ @ 0x103e08
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container_int_::Container @ 0x103e3a
void __thiscall Container_int__Container(Container_int_ *_this)
{
 *(unsigned int *)(_this + 0x28) = 0;
 return;
}

// Function: Container_int_::push @ 0x103e54
void __thiscall Container_int__push(Container_int_ *_this,int param_1)
{
 int iVar1;
 if (*(int *)(_this + 0x28) < 10) {
 iVar1 = *(int *)(_this + 0x28);
 *(int *)(_this + 0x28) = iVar1 + 1;
 *(int *)(_this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int_::get @ 0x103e90
unsigned int __thiscall Container_int__get(Container_int_ *_this,int param_1)
{
 unsigned int uVar1;
 if ((param_1 < 0) || (*(int *)(_this + 0x28) <= param_1)) {
 uVar1 = 0;
 }
 else {
 uVar1 = *(unsigned int *)(_this + (long)param_1 * 4);
 }
 return uVar1;
}

// Function: Container_int_::getSize @ 0x103ec8
unsigned int __thiscall Container_int__getSize(Container_int_ *_this)
{
 return *(unsigned int *)(_this + 0x28);
}

// Function: Container_double_::Container @ 0x103ede
void __thiscall Container_double__Container(Container_double_ *_this)
{
 *(unsigned int *)(_this + 0x50) = 0;
 return;
}

// Function: Container_double_::push @ 0x103ef8
void __thiscall Container_double__push(Container_double_ *_this,double param_1)
{
 int iVar1;
 if (*(int *)(_this + 0x50) < 10) {
 iVar1 = *(int *)(_this + 0x50);
 *(int *)(_this + 0x50) = iVar1 + 1;
 *(double *)(_this + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container_double_::get @ 0x103f3a
unsigned long long __thiscall Container_double__get(Container_double_ *_this,int param_1)
{
 unsigned long long uVar1;
 if ((param_1 < 0) || (*(int *)(_this + 0x50) <= param_1)) {
 uVar1 = 0;
 }
 else {
 uVar1 = *(unsigned long long *)(_this + (long)param_1 * 8);
 }
 return uVar1;
}

// Function: Container_double_::getSize @ 0x103f7c
unsigned int __thiscall Container_double__getSize(Container_double_ *_this)
{
 return *(unsigned int *)(_this + 0x50);
}

// Function: std::__uniq_ptr_data<int,std::default_delete_int_,true,true>::__uniq_ptr_data @ 0x103f92
void __thiscall
std____uniq_ptr_data_int_std__default_delete_int__true_true____uniq_ptr_data
 (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,__uniq_ptr_data *param_1)
{
 __uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,(__uniq_ptr_impl *)param_1);
 return;
}

// Function: std::unique_ptr<int,std::default_delete_int_>::unique_ptr @ 0x103fbc
void __thiscall
std__unique_ptr_int_std__default_delete_int___unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this,unique_ptr *param_1)
{
 std____uniq_ptr_data_int_std__default_delete_int__true_true____uniq_ptr_data
 ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this,
 (__uniq_ptr_data *)param_1);
 return;
}

// Function: RTTIBase::getType @ 0x103fe6
unsigned long long RTTIBase::getType(void)
{
 return 0;
}

// Function: RTTIDerivedA::getType @ 0x103ffa
unsigned long long RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIDerivedA::derivedA_data @ 0x10400e
unsigned long long RTTIDerivedA::derivedA_data(void)
{
 return 100;
}

// Function: RTTIDerivedB::getType @ 0x104022
unsigned long long RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::derivedB_data @ 0x104036
unsigned long long RTTIDerivedB::derivedB_data(void)
{
 return 200;
}

// Function: RTTIBase::RTTIBase @ 0x10404a
void __thiscall RTTIBase::RTTIBase(RTTIBase *this)
{
 *(char ***)this = &PTR__RTTIBase_00108888;
 return;
}

// Function: RTTIBase::~RTTIBase @ 0x104068
void __thiscall RTTIBase__RTTIBase(RTTIBase *this)
{
 *(char ***)this = &PTR__RTTIBase_00108888;
 return;
}

// Function: RTTIBase::~RTTIBase @ 0x104086
void __thiscall RTTIBase__RTTIBase_free(RTTIBase *this)
{
 RTTIBase__RTTIBase(this);
 operator_delete(this,8);
 return;
}

// Function: RTTIDerivedA::RTTIDerivedA @ 0x1040b6
void __thiscall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase::RTTIBase((RTTIBase *)this);
 *(char ***)this = &PTR__RTTIDerivedA_00108860;
 return;
}

// Function: RTTIDerivedB::RTTIDerivedB @ 0x1040e4
void __thiscall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase::RTTIBase((RTTIBase *)this);
 *(char ***)this = &PTR__RTTIDerivedB_00108838;
 return;
}

// Function: std::__uniq_ptr_data<int,std::default_delete_int_,true,true>::__uniq_ptr_impl @ 0x104112
void __thiscall
std____uniq_ptr_data_int_std__default_delete_int__true_true____uniq_ptr_impl
 (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,int *param_1)
{
 __uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,param_1);
 return;
}

// Function: std__unique_ptr_int_std__default_delete_int___unique_ptr_std__default_delete_int__void_ @ 0x10413c
void __thiscall
std__unique_ptr_int_std__default_delete_int___unique_ptr_std__default_delete_int__void_
 (unique_ptr_int_std__default_delete_int__ *this,int *param_1)
{
 __uniq_ptr_data_int_std__default_delete_int__true_true___uniq_ptr_impl
 ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this,param_1);
 return;
}

// Function: std::unique_ptr<int,std::default_delete_int_>::~unique_ptr @ 0x104166
void __thiscall
std__unique_ptr_int_std__default_delete_int____unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this)
{
 int **ppiVar1;
 default_delete_int_ *this_00;
 int **ppiVar2;
 ppiVar1 = (int **)__uniq_ptr_impl_int_std__default_delete_int___M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (default_delete_int_ *)get_deleter(this);
 ppiVar2 = (int **)move_int___(ppiVar1);
 std__default_delete_int___operator__(this_00,*ppiVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}

// Function: std::unique_ptr<int,std::default_delete_int_>::operator* @ 0x1041ce
int * __thiscall
std__unique_ptr_int_std__default_delete_int___operator_
 (unique_ptr_int_std__default_delete_int__ *this)
{
 return (int *)__uniq_ptr_impl_int_std__default_delete_int___M_ptr((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
}

// Function: std::move<std::unique_ptr<int,std::default_delete_int_>&> @ 0x1041f3
void * std::move_std__unique_ptr_int_std__default_delete_int____(unique_ptr *param_1)
{
 return (void *)param_1;
}

// Function: std::_Tuple_impl_0ul_int__std__default_delete_int___::_Tuple_impl @ 0x104206
void __thiscall
std_Tuple_impl_0ul_int__std__default_delete_int___Tuple_impl
 (_Tuple_impl_0ul_int__std__default_delete_int__ *this,_Tuple_impl *param_1)
{
 std_Tuple_impl_1ul_std__default_delete_int___Tuple_impl((_Tuple_impl *)this);
 *(unsigned long long *)this = *(unsigned long long *)param_1;
 return;
}

// Function: std::tuple<int*,std::default_delete_int_>::tuple @ 0x10423e
void __thiscall
std__tuple_int__std__default_delete_int__tuple
 (tuple_int__std__default_delete_int__ *this,tuple *param_1)
{
 std_Tuple_impl_0ul_int__std__default_delete_int___Tuple_impl
 ((_Tuple_impl_0ul_int__std__default_delete_int__ *)this,(_Tuple_impl *)param_1);
 return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete_int_>::__uniq_ptr_impl @ 0x104268
void __thiscall
std____uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int__ *_this,__uniq_ptr_impl *param_1)
{
 type *ptVar1;
 unsigned long long *puVar2;
 ptVar1 = move_std__tuple_int__std__default_delete_int____((tuple *)param_1);
 std__tuple_int__std__default_delete_int__tuple
 ((tuple_int__std__default_delete_int__ *)_this,(tuple *)ptVar1);
 puVar2 = (unsigned long long *)__uniq_ptr_impl_int_std__default_delete_int___M_ptr((__uniq_ptr_impl_int_std__default_delete_int__ *)param_1);
 *puVar2 = 0;
 return;
}

// Function: std::__uniq_ptr_data<int,std::default_delete_int_arr_,true,true>::__uniq_ptr_impl @ 0x1042b2
void __thiscall
std____uniq_ptr_data_int_std__default_delete_int____true_true____uniq_ptr_impl
 (__uniq_ptr_data_int_std__default_delete_int____true_true_ *this,int *param_1)
{
 __uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this,param_1);
 return;
}

// Function: std__unique_ptr_int___std__default_delete_int____unique_ptr_int__std__default_delete_int____void_bool_ @ 0x1042dc
void __thiscall
std__unique_ptr_int___std__default_delete_int____
unique_ptr_int__std__default_delete_int____void_bool_
 (unique_ptr_int___std__default_delete_int____ *this,int *param_1)
{
 __uniq_ptr_data_int_std__default_delete_int____true_true___uniq_ptr_impl
 ((__uniq_ptr_data_int_std__default_delete_int____true_true_ *)this,param_1);
 return;
}

// Function: std::unique_ptr<int[],std::default_delete_int_arr_>::~unique_ptr @ 0x104306
void __thiscall
std__unique_ptr_int___std__default_delete_int____unique_ptr
 (unique_ptr_int___std__default_delete_int____ *this)
{
 int **ppiVar1;
 default_delete_int___ *this_00;
 ppiVar1 = (int **)__uniq_ptr_impl_int_std__default_delete_int____M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (default_delete_int___ *)get_deleter(this);
 std__default_delete_int_arr___operator__(this_00,*ppiVar1);
 }
 *ppiVar1 = (int *)0x0;
 return;
}

// Function: std::unique_ptr<int[],std::default_delete_int_arr_>::operator[] @ 0x104362
long __thiscall
std__unique_ptr_int___std__default_delete_int____operator__
 (unique_ptr_int___std__default_delete_int____ *this,unsigned long param_1)
{
 long lVar1;
 lVar1 = get(this);
 return param_1 * 4 + lVar1;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete_int_>::__uniq_ptr_impl @ 0x10439a
void __thiscall
std____uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl_2
 (__uniq_ptr_impl_int_std__default_delete_int__ *_this,int *param_1)
{
 int **ppiVar1;
 std__tuple_int__std__default_delete_int__tuple_true_true_
 ((tuple_int__std__default_delete_int__ *)_this);
 ppiVar1 = (int **)_M_ptr(_this);
 *ppiVar1 = param_1;
 return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete_int_>::_M_ptr @ 0x1043d6
int * __thiscall
std____uniq_ptr_impl_int_std__default_delete_int___M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int__ *_this)
{
 return std_get_0ul_int__std__default_delete_int__((tuple *)_this);
}

// Function: std::unique_ptr<int,std::default_delete_int_>::get_deleter @ 0x1043f4
default_delete_int_ * __thiscall
std__unique_ptr_int_std__default_delete_int___get_deleter
 (unique_ptr_int_std__default_delete_int__ *this)
{
 return (default_delete_int_ *)std____uniq_ptr_impl_int_std__default_delete_int___M_deleter
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
}

// Function: std::move<int*&> @ 0x104412
void * std::move_int___(int **param_1)
{
 return (void *)param_1;
}

// Function: std::default_delete_int_::operator() @ 0x104424
void __thiscall std__default_delete_int___operator__(default_delete_int_ *this,int *param_1)
{
 if (param_1 != (int *)0x0) {
 operator_delete(param_1,4);
 }
 return;
}

// Function: std::unique_ptr<int,std::default_delete_int_>::get @ 0x104452
int * __thiscall
std__unique_ptr_int_std__default_delete_int___get(unique_ptr_int_std__default_delete_int__ *this)
{
 return (int *)__uniq_ptr_impl_int_std__default_delete_int___M_ptr((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
}

// Function: std::move<std::tuple<int*,std::default_delete_int_>&> @ 0x104470
void * std::move_std__tuple_int__std__default_delete_int____(tuple *param_1)
{
 return (void *)param_1;
}

// Function: std::_Tuple_impl<1ul,std::default_delete_int_>::_Tuple_impl @ 0x104482
void std_Tuple_impl_1ul_std__default_delete_int___Tuple_impl(_Tuple_impl_1ul_std__default_delete_int__ *_this)
{
 std_Head_base_1ul_std__default_delete_int__true___Head_base((_Head_base_1ul_std__default_delete_int__true___ *)_this);
 return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete_int_arr_>::__uniq_ptr_impl @ 0x104496
void __thiscall
std____uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl_2
 (__uniq_ptr_impl_int_std__default_delete_int____ *this,int *param_1)
{
 int **ppiVar1;
 std__tuple_int__std__default_delete_int____tuple_true_true_
 ((tuple_int__std__default_delete_int____ *)this);
 ppiVar1 = (int **)_M_ptr(this);
 *ppiVar1 = param_1;
 return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete_int_arr_>::_M_ptr @ 0x1044d2
long __thiscall
std____uniq_ptr_impl_int_std__default_delete_int____M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int____ *_this)
{
 return std_get_0ul_int__std__default_delete_int____((tuple *)_this);
}

// Function: std::unique_ptr<int[],std::default_delete_int_arr_>::get_deleter @ 0x1044f0
default_delete_int___ * __thiscall
std__unique_ptr_int___std__default_delete_int____get_deleter
 (unique_ptr_int___std__default_delete_int____ *this)
{
 return (default_delete_int___ *)std____uniq_ptr_impl_int_std__default_delete_int____M_deleter
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
}

// Function: std::default_delete_int_arr_::operator() @ 0x10450e
void __thiscall std__default_delete_int_arr___operator__(default_delete_int___ *this,int *param_1)
{
 if (param_1 != (int *)0x0) {
 operator_delete__(param_1);
 }
 return;
}

// Function: std::unique_ptr<int[],std::default_delete_int_arr_>::get @ 0x104538
long __thiscall
std__unique_ptr_int___std__default_delete_int____get
 (unique_ptr_int___std__default_delete_int____ *this)
{
 return __uniq_ptr_impl_int_std__default_delete_int____M_ptr((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
}

// Function: std::tuple<int*,std::default_delete_int_>::tuple_true_true_ @ 0x104556
void __thiscall
std__tuple_int__std__default_delete_int__tuple_true_true_
 (tuple_int__std__default_delete_int__ *this)
{
 std_Tuple_impl_0ul_int__std__default_delete_int___Tuple_impl
 ((_Tuple_impl_0ul_int__std__default_delete_int__ *)this);
 return;
}

// Function: std::get<0ul,int*,std::default_delete_int_> @ 0x104575
void * std_get_0ul_int__std__default_delete_int__(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = std____get_helper_0ul_int__std__default_delete_int__((_Tuple_impl *)param_1);
 return (void *)ppiVar1;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete_int_>::_M_deleter @ 0x104594
void __thiscall
std____uniq_ptr_impl_int_std__default_delete_int___M_deleter
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 std_get_1ul_int__std__default_delete_int__((tuple *)this);
 return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete_int_>::_M_ptr @ 0x1045b2
unsigned long long __thiscall
std____uniq_ptr_impl_int_std__default_delete_int___M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)std_get_0ul_int__std__default_delete_int__((tuple *)this);
 return *puVar1;
}

// Function: std::tuple<int*,std::default_delete_int_arr_>::tuple_true_true_ @ 0x1045d4
void __thiscall
std__tuple_int__std__default_delete_int____tuple_true_true_
 (tuple_int__std__default_delete_int____ *this)
{
 std_Tuple_impl_0ul_int__std__default_delete_int____Tuple_impl
 ((_Tuple_impl_0ul_int__std__default_delete_int____ *)this);
 return;
}

// Function: std::get<0ul,int*,std::default_delete_int_arr_> @ 0x1045f3
type * std_get_0ul_int__std__default_delete_int____(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = std____get_helper_0ul_int__std__default_delete_int____((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete_int_arr_>::_M_deleter @ 0x104612
void __thiscall
std____uniq_ptr_impl_int_std__default_delete_int____M_deleter
 (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 std_get_1ul_int__std__default_delete_int____((tuple *)this);
 return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete_int_arr_>::_M_ptr @ 0x104630
unsigned long long __thiscall
std____uniq_ptr_impl_int_std__default_delete_int____M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)std_get_0ul_int__std__default_delete_int____((tuple *)this);
 return *puVar1;
}

// Function: std::_Tuple_impl<0ul,int*,std::default_delete_int_>::_Tuple_impl @ 0x104652
void __thiscall
std_Tuple_impl_0ul_int__std__default_delete_int___Tuple_impl
 (_Tuple_impl_0ul_int__std__default_delete_int__ *this)
{
 std_Tuple_impl_1ul_std__default_delete_int___Tuple_impl();
 std_Head_base_0ul_int__false___Head_base((_Head_base_0ul_int__false_ *)this);
 return;
}

// Function: std::__get_helper<0ul,int*,std::default_delete_int_> @ 0x10467d
int ** std____get_helper_0ul_int__std__default_delete_int__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)std_Tuple_impl_0ul_int__std__default_delete_int___M_head(param_1);
 return ppiVar1;
}

// Function: std::get_1ul_int__std::default_delete_int__ @ 0x10469b
void * std_get_1ul_int__std__default_delete_int__(tuple *param_1)
{
 default_delete *pdVar1;
 pdVar1 = std____get_helper_1ul_std__default_delete_int__((_Tuple_impl *)param_1);
 return (void *)pdVar1;
}

// Function: std::get<0ul,int*,std::default_delete_int_> @ 0x1046b9
void * std_get_0ul_int__std__default_delete_int__(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = std____get_helper_0ul_int__std__default_delete_int__((_Tuple_impl *)param_1);
 return (void *)ppiVar1;
}

// Function: std::_Tuple_impl<0ul,int*,std::default_delete_int_arr_>::_Tuple_impl @ 0x1046d8
void __thiscall
std_Tuple_impl_0ul_int__std__default_delete_int____Tuple_impl
 (_Tuple_impl_0ul_int__std__default_delete_int____ *this)
{
 std_Tuple_impl_1ul_std__default_delete_int_arr___Tuple_impl();
 std_Head_base_0ul_int__false___Head_base((_Head_base_0ul_int__false_ *)this);
 return;
}

// Function: std::__get_helper<0ul,int*,std::default_delete_int_arr_> @ 0x104703
int ** std____get_helper_0ul_int__std__default_delete_int____(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)std_Tuple_impl_0ul_int__std__default_delete_int____M_head(param_1);
 return ppiVar1;
}

// Function: std::get_1ul_int__std::default_delete_int_arr_ @ 0x104721
void * std_get_1ul_int__std__default_delete_int____(tuple *param_1)
{
 default_delete *pdVar1;
 pdVar1 = std____get_helper_1ul_std__default_delete_int____((_Tuple_impl *)param_1);
 return (void *)pdVar1;
}

// Function: std::get<0ul,int*,std::default_delete_int_arr_> @ 0x10473f
void * std_get_0ul_int__std__default_delete_int____(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = std____get_helper_0ul_int__std__default_delete_int____((_Tuple_impl *)param_1);
 return (void *)ppiVar1;
}

// Function: std::forward<int*&> @ 0x10475d
int ** std::forward_int___(void *param_1)
{
 return (int **)param_1;
}

// Function: std::_Tuple_impl<1ul,std::default_delete_int_>::_Tuple_impl @ 0x104770
void std_Tuple_impl_1ul_std__default_delete_int___Tuple_impl(_Tuple_impl_1ul_std__default_delete_int__ *_this)
{
 std_Head_base_1ul_std__default_delete_int__true___Head_base(_this);
 return;
}

// Function: std::_Head_base_0ul_int__false_::_Head_base @ 0x104790
void __thiscall std_Head_base_0ul_int__false_::_Head_base(_Head_base_0ul_int__false_ *_this)
{
 _this->_M_head = 0;
 return;
}

// Function: std::_Tuple_impl<0ul,int*,std::default_delete_int_>::_M_head @ 0x1047aa
void * std_Tuple_impl_0ul_int__std__default_delete_int___M_head(_Tuple_impl *param_1)
{
 return std_Head_base_0ul_int__false___M_head((_Head_base_0ul_int__false_ *)param_1);
}

// Function: std::__get_helper<1ul,std::default_delete_int_> @ 0x1047c8
default_delete * std____get_helper_1ul_std__default_delete_int__(_Tuple_impl *param_1)
{
 default_delete *pdVar1;
 pdVar1 = (default_delete *)std_Tuple_impl_1ul_std__default_delete_int___M_head(param_1);
 return pdVar1;
}

// Function: std::__get_helper<0ul,int*,std::default_delete_int_> @ 0x1047e6
int ** std____get_helper_0ul_int__std__default_delete_int__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)std_Tuple_impl_0ul_int__std__default_delete_int___M_head(param_1);
 return ppiVar1;
}

// Function: std::_Tuple_impl<1ul,std::default_delete_int_arr_>::_Tuple_impl @ 0x104804
void std_Tuple_impl_1ul_std__default_delete_int_arr___Tuple_impl(_Tuple_impl_1ul_std__default_delete_int_arr__ *_this)
{
 std_Head_base_1ul_std__default_delete_int_arr__true___Head_base(_this);
 return;
}

// Function: std::_Tuple_impl<0ul,int*,std::default_delete_int_arr_>::_M_head @ 0x104823
void * std_Tuple_impl_0ul_int__std__default_delete_int_arr___M_head(_Tuple_impl *param_1)
{
 return std_Head_base_0ul_int__false___M_head((_Head_base_0ul_int__false_ *)param_1);
}

// Function: std::__get_helper<1ul,std::default_delete_int_arr_> @ 0x104841
default_delete * std____get_helper_1ul_std__default_delete_int____(_Tuple_impl *param_1)
{
 default_delete *pdVar1;
 pdVar1 = (default_delete *)std_Tuple_impl_1ul_std__default_delete_int_arr___M_head(param_1);
 return pdVar1;
}

// Function: std::__get_helper<0ul,int*,std::default_delete_int_arr_> @ 0x10485f
int ** std____get_helper_0ul_int__std__default_delete_int____(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)std_Tuple_impl_0ul_int__std__default_delete_int_arr___M_head(param_1);
 return ppiVar1;
}

// Function: std::_Head_base_0ul_int__false_::_Head_base_int___ @ 0x10487e
void __thiscall std_Head_base_0ul_int__false___Head_base_int___(_Head_base_0ul_int__false_ *_this, int **param_1)
{
 _this->_M_head = param_1;
 return;
}

// Function: std::_Head_base_1ul_std__default_delete_int__true___::_Head_base @ 0x1048ac
void std_Head_base_1ul_std__default_delete_int__true___Head_base(_Head_base_1ul_std__default_delete_int__true___ *_this)
{
 return;
}

// Function: std::_Head_base<0ul,int*,false>::_M_head @ 0x1048bb
void * __thiscall std_Head_base_0ul_int__false___M_head(_Head_base_0ul_int__false_ *self)
{
 return (void *)&self->_M_head;
}

// Function: std::_Tuple_impl<1ul,std::default_delete_int_>::_M_head @ 0x1048cd
_Head_base_1ul_std__default_delete_int__true___ * __thiscall std_Tuple_impl_1ul_std__default_delete_int___M_head(_Tuple_impl *param_1)
{
 return std_Head_base_1ul_std__default_delete_int__true___M_head((_Head_base_1ul_std__default_delete_int__true___ *)param_1);
}

// Function: std::_Tuple_impl<0ul,int*,std::default_delete_int_>::_M_head @ 0x1048eb
void * __thiscall std_Tuple_impl_0ul_int__std__default_delete_int___M_head(_Tuple_impl *param_1)
{
 return std_Head_base_0ul_int__false___M_head((_Head_base_0ul_int__false_ *)param_1);
}

// Function: std::_Head_base<1ul,std::default_delete_int_arr_,true>::_Head_base @ 0x10490a
void std_Head_base_1ul_std__default_delete_int_arr__true___Head_base(_Head_base_1ul_std__default_delete_int_arr__true___ *self)
{
 return;
}

// Function: std::_Tuple_impl<1ul,std::default_delete_int_arr_>::_M_head @ 0x104919
_Head_base_1ul_std__default_delete_int_arr__true___ * __thiscall std_Tuple_impl_1ul_std__default_delete_int_arr___M_head(_Tuple_impl *param_1)
{
 return std_Head_base_1ul_std__default_delete_int_arr__true___M_head((_Head_base_1ul_std__default_delete_int_arr__true___ *)param_1);
}

// Function: std::_Tuple_impl<0ul,int*,std::default_delete_int_arr_>::_M_head @ 0x104937
void * __thiscall std_Tuple_impl_0ul_int__std__default_delete_int_arr___M_head(_Tuple_impl *param_1)
{
 return std_Head_base_0ul_int__false___M_head((_Head_base_0ul_int__false_ *)param_1);
}

// Function: std::_Head_base_1ul_std__default_delete_int__true___::_M_head @ 0x104955
_Head_base_1ul_std__default_delete_int__true___ * __thiscall std_Head_base_1ul_std__default_delete_int__true___M_head(_Head_base_1ul_std__default_delete_int__true___ *param_1)
{
 return param_1;
}

// Function: std::_Head_base<0ul,int*,false>::_M_head @ 0x104967
int ** __thiscall std_Head_base_0ul_int__false___M_head(_Head_base_0ul_int__false_ *self)
{
 return &self->_M_head;
}

// Function: std::_Head_base_1ul_std__default_delete_int____true___::_M_head @ 0x104979
_Head_base_1ul_std__default_delete_int_arr__true___ * __thiscall std_Head_base_1ul_std__default_delete_int_arr__true___M_head(_Head_base_1ul_std__default_delete_int_arr__true___ *param_1)
{
 return param_1;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x10498c
void __thiscall RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)
{
 *(char ***)this = &PTR__RTTIDerivedB_00108838;
 RTTIBase__RTTIBase((RTTIBase *)this);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1049ba
void __thiscall RTTIDerivedB__RTTIDerivedB_free(RTTIDerivedB *this)
{
 RTTIDerivedB__RTTIDerivedB(this);
 operator_delete(this,8);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x1049ea
void __thiscall RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
 *(char ***)this = &PTR__RTTIDerivedA_00108860;
 RTTIBase__RTTIBase((RTTIBase *)this);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x104a18
void __thiscall RTTIDerivedA__RTTIDerivedA_free(RTTIDerivedA *this)
{
 RTTIDerivedA__RTTIDerivedA(this);
 operator_delete(this,8);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x104a48
void __thiscall DiamondDerived_DiamondDerived(DiamondDerived *this)
{
 *(unsigned long long *)this = 0x1088b8;
 *(unsigned long long *)(this + 0x20) = 0x108920;
 *(unsigned long long *)(this + 0x10) = 0x1088e8;
 MiddleB__MiddleB((MiddleB *)(this + 0x10));
 MiddleA__MiddleA((MiddleA *)this);
 VirtualBase__VirtualBase((VirtualBase *)(this + 0x20));
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x104aca
void __thiscall DiamondDerived_DiamondDerived_offset_10(DiamondDerived *this)
{
 DiamondDerived__DiamondDerived(this + -0x10);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x104ad7
void __thiscall DiamondDerived_DiamondDerived_virtual(DiamondDerived *this)
{
 DiamondDerived__DiamondDerived(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x104ae8
void __thiscall DiamondDerived_DiamondDerived_free(DiamondDerived *this)
{
 DiamondDerived__DiamondDerived(this);
 operator_delete(this,0x30);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x104b17
void __thiscall DiamondDerived_DiamondDerived_free_2(DiamondDerived *this)
{
 DiamondDerived__DiamondDerived(this + -0x10);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x104b21
void __thiscall DiamondDerived_DiamondDerived_free_3(DiamondDerived *this)
{
 DiamondDerived__DiamondDerived(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x104b2e
void __thiscall MultiDerived__MultiDerived(MultiDerived *this)
{
 *(char ***)this = &PTR_funcA_00108a78;
 *(char ***)(this + 0x10) = &PTR_funcB_00108aa8;
 BaseB__BaseB((BaseB *)(this + 0x10));
 BaseA__BaseA((BaseA *)this);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x104b7a
void __thiscall MultiDerived__MultiDerived(MultiDerived *this)
{
 MultiDerived__MultiDerived(this + -0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x104b84
void __thiscall MultiDerived__MultiDerived_free(MultiDerived *this)
{
 MultiDerived__MultiDerived(this);
 operator_delete(this,0x20);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x104bb3
void __thiscall MultiDerived__MultiDerived_free_2(MultiDerived *this)
{
 MultiDerived__MultiDerived(this + -0x10);
 return;
}

// Function: Derived::~Derived @ 0x104bbe
void __thiscall Derived__Derived(Derived *this)
{
 *(char ***)this = &PTR_virtual_func_00108b20;
 Base__Base((Base *)this);
 return;
}

// Function: Derived::~Derived @ 0x104bec
void __thiscall Derived__Derived_free(Derived *this)
{
 Derived__Derived(this);
 operator_delete(this,0x10);
 return;
}

// Function: _fini @ 0x104c1c
void _fini(void)
{
 return;
}

