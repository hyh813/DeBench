/* Type definitions */
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
typedef void * type;
typedef int * unique_ptr;
typedef int * tuple;
typedef void * _Tuple_impl;
typedef void * _Head_base;
typedef int * default_delete;
typedef int * default_delete_int_;
typedef void * default_delete_int__;
typedef void * Container_int_;
typedef void * Container_double_;
typedef void * __uniq_ptr_impl_int_std__default_delete_int__;
typedef void * __uniq_ptr_impl_int_std__default_delete_int____;
typedef void * __uniq_ptr_data_int_std__default_delete_int__true_true_;
typedef void * __uniq_ptr_data_int_std__default_delete_int____true_true_;
typedef void * unique_ptr_int_std__default_delete_int__;
typedef void * unique_ptr_int___std__default_delete_int____;
typedef void * unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__;
typedef void * _lambda_int__1_;
typedef void * _lambda_int___1_;
typedef void * __uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1__true_false_;
typedef void * __uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__;
typedef void * tuple_int__test_cpp_smart_ptr_____lambda_int___1__;
typedef void * _Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__;
typedef void * _Head_base_0u_int__false_;
typedef void * tuple_int__std__default_delete_int__;
typedef void * _Tuple_impl_0u_int__std__default_delete_int__;
typedef void * _Tuple_impl_1u_std__default_delete_int__;
typedef void * _Head_base_1u_std__default_delete_int__true_;
typedef void * tuple_int__std__default_delete_int____;
typedef void * _Tuple_impl_0u_int__std__default_delete_int____;
typedef void * _Tuple_impl_1u_std__default_delete_int____;
typedef void * _Head_base_1u_std__default_delete_int____true_;
typedef void * _Head_base;
typedef int type_info;
typedef void * PTR_virtual_func_000145f0;
typedef void * PTR_virtual_func_000145d8;
typedef void * PTR_funcA_000145c4;
typedef void * PTR_funcB_000145b0;
typedef void * PTR_func_00014570;
typedef void * PTR_func_000144a4;
typedef void * PTR_func_000144d8;
typedef void * PTR_func_000144bc;
typedef void * PTR__RTTIBase_0001448c;
typedef void * PTR__RTTIDerivedA_00014478;
typedef void * PTR__RTTIDerivedB_00014464;
typedef void * PTR_funcA_00014584;
typedef void * PTR_funcB_0001459c;

#define CONCAT44(a,b) (((a) << 32) | (b))
#define CONCAT22(a,b) (((a) << 16) | (b))

// Forward declarations for template functions (C++ templates - stubs)
// Since C doesn't support templates, we provide these as regular functions

// template functions
int template_max_int_(int a, int b);
double template_max_double_(double a, double b);
void template_swap_int_(int *a, int *b);
void template_swap_double_(double *a, double *b);

// Stub implementations for template classes
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;

struct Container_int_ { int data[10]; int size; };
struct Container_double_ { double data[10]; int size; };

char *DAT_0001425c = "Base";
char *DAT_0001426c = "Testing C++ OO Features:";
char *DAT_00014290 = "test_cpp_member_func: %u\n";
char *DAT_000142b0 = "test_cpp_constructor: %u\n";
char *DAT_000142cc = "test_cpp_virtual_func: %u\n";
char *DAT_000142e8 = "test_cpp_multiple_inheritance: %u\n";
char *DAT_00014304 = "test_cpp_diamond_inheritance: %u\n";
char *DAT_00014324 = "test_cpp_operator_overload: %u\n";
char *DAT_00014340 = "test_cpp_template_func: %u\n";
char *DAT_0001435c = "test_cpp_template_class: %u\n";
char *DAT_00014378 = "test_cpp_lambda: %u\n";
char *DAT_00014394 = "test_cpp_exception: %u\n";
char *DAT_000143b4 = "test_cpp_smart_ptr: %u\n";
char *DAT_000143d4 = "test_cpp_rtti: %u\n";

int completed_0 = 0;
int instance_count = 0;
int __dso_handle = 0;
int std___ioinit = 0;
int int::typeinfo = 0;
int RTTIDerivedA::typeinfo = 0;
int RTTIDerivedB::typeinfo = 0;
int RTTIBase::typeinfo = 0;

void * __gmon_start__ = 0;

// Decompiled by BinaryAI
// SHA256: a4113cd6489034e880a6cc86266cdc2691af7a2af75a44e7f19d937a05597258

// Function: _init @ 0x10a5c
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn();
 return iVar1;
}

// Function: FUN_00010a68 @ 0x10a68
void FUN_00010a68(void)
{
 (*(void *)(char *)0x0)();
 return;
}

// Function: operator_new @ 0x10a7c
void * operator_new(uint param_1)
{
 void *pvVar1;
 pvVar1 = operator_new(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__aeabi_atexit @ 0x10a88
void __aeabi_atexit(void)
{
 __aeabi_atexit();
 return;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x10a94
void __cxa_begin_catch(void)
{
 __cxa_begin_catch();
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x10aa0
void __cxa_allocate_exception(void)
{
 __cxa_allocate_exception();
 return;
}

// Function: printf @ 0x10aac
int printf(char *__format,...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
}

// Function: <EXTERNAL>::puts @ 0x10ab8
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x10ac4
void operator_delete(void *param_1,uint param_2)
{
 operator_delete(param_1,param_2);
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10ad0
void __libc_start_main(void)
{
 __libc_start_main();
 return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x10adc
void * operator_new__(uint param_1)
{
 void *pvVar1;
 pvVar1 = operator_new__(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::abort @ 0x10ae8
void abort(void)
{
 abort();
}

// Function: std_type_info_operator_equal @ 0x10af4
void __thiscall type_info_operator_equal(type_info *this,type_info *param_1)
{
 operator__(this,param_1);
 return;
}

// Function: <EXTERNAL>::__cxa_bad_typeid @ 0x10b00
void __cxa_bad_typeid(void)
{
 __cxa_bad_typeid();
 return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x10b0c
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x10b18
void __cxa_end_cleanup(void)
{
 __cxa_end_cleanup();
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x10b24
void __dynamic_cast(void)
{
 __dynamic_cast();
 return;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x10b30
void operator_delete__(void *param_1)
{
 operator_delete__(param_1);
 return;
}

// Function: <EXTERNAL>::__cxa_throw_bad_array_new_length @ 0x10b3c
void __cxa_throw_bad_array_new_length(void)
{
 __cxa_throw_bad_array_new_length();
 return;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x10b48
void __cxa_rethrow(void)
{
 __cxa_rethrow();
 return;
}

// Function: <EXTERNAL>::strlen @ 0x10b54
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::std_ios_base::Init::Init @ 0x10b60
void __thiscall std_ios_base::Init::Init(Init *this)
{
 Init(this);
 return;
}

// Function: <EXTERNAL>::__aeabi_d2iz @ 0x10b6c
void __aeabi_d2iz(void)
{
 __aeabi_d2iz();
 return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10b78
void __cxa_end_catch(void)
{
 __cxa_end_catch();
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x10b84
void __gxx_personality_v0(void)
{
 __gxx_personality_v0();
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x10b90
void __cxa_throw(void)
{
 __cxa_throw();
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10b9c
void __aeabi_dcmpgt(void)
{
 __aeabi_dcmpgt();
 return;
}

// Function: <EXTERNAL>::strncpy @ 0x10ba8
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: _start @ 0x10bcc
void _start(unsigned int param_1,unsigned int param_2)
{
 __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x10c10
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x10c34
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x10c60
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x10c98
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: test_cpp_member_func @ 0x10cc4
int test_cpp_member_func(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 SimpleClass aSStack_30 [36];
 int local_c;
 local_c = 0;
 SimpleClass::SimpleClass(aSStack_30,5,"Test");
 SimpleClass::setValue(aSStack_30,10);
 iVar1 = SimpleClass::getValue(aSStack_30);
 iVar2 = SimpleClass::compute(aSStack_30,3);
 iVar3 = SimpleClass::getClassID();
 if (local_c != 0) {
 __stack_chk_fail(iVar3,local_c,0);
 }
 return iVar1 + iVar2 + iVar3;
}

// Function: test_cpp_constructor @ 0x10d74
int test_cpp_constructor(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 LifecycleClass aLStack_14 [8];
 int local_c;
 local_c = 0;
 LifecycleClass::LifecycleClass(aLStack_14,5);
 iVar1 = LifecycleClass::getData(aLStack_14,2);
 iVar2 = LifecycleClass::getInstanceCount();
 LifecycleClass::_LifecycleClass(aLStack_14);
 iVar3 = LifecycleClass::getInstanceCount();
 if (local_c != 0) {
 __stack_chk_fail(iVar3,local_c,0);
 }
 return iVar1 + iVar2 + iVar3 * 1000;
}

// Function: call_virtual_func @ 0x10e48
unsigned int call_virtual_func(Base *param_1,int param_2)
{
 unsigned int uVar1;
 uVar1 = (***(void ***)param_1)(param_1,param_2);
 return uVar1;
}

// Function: test_cpp_virtual_func @ 0x10e84
int test_cpp_virtual_func(void)
{
 unsigned int uVar1;
 int iVar2;
 char **local_38;
 int local_34;
 int local_30;
 char ***local_2c;
 Derived *local_28;
 int local_24;
 int local_20;
 Derived aDStack_1c [8];
 int local_14;
 local_14 = 0;
 local_38 = &PTR_virtual_func_000145f0;
 Derived::Derived(aDStack_1c,3);
 local_34 = Base::virtual_func((Base *)&local_38,5);
 local_30 = Derived::virtual_func(aDStack_1c,5);
 local_2c = &local_38;
 local_28 = aDStack_1c;
 local_24 = call_virtual_func((Base *)local_2c,5);
 local_20 = call_virtual_func((Base *)local_28,5);
 iVar2 = local_34 + local_30 + local_24 + local_20;
 Derived::_Derived(aDStack_1c);
 uVar1 = Base::_Base((Base *)&local_38);
 if (local_14 != 0) {
 __stack_chk_fail(uVar1,local_14,0);
 }
 return iVar2;
}

// Function: test_cpp_multiple_inheritance @ 0x10fa0
int test_cpp_multiple_inheritance(void)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 void **local_24;
 unsigned int local_20;
 void **local_1c;
 unsigned int local_18;
 int local_14;
 local_14 = 0;
 MultiDerived::MultiDerived((MultiDerived *)&local_24);
 local_20 = 100;
 local_18 = 200;
 iVar1 = (**local_24)(&local_24);
 iVar2 = (**local_1c)(&local_1c);
 uVar3 = MultiDerived::_MultiDerived((MultiDerived *)&local_24);
 if (local_14 == 0) {
 return iVar1 + iVar2 + (uint)(&local_24 != &local_1c);
 }
 __stack_chk_fail(uVar3,local_14,0);
}

// Function: test_cpp_diamond_inheritance @ 0x110a4
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 DiamondDerived aDStack_2c [16];
 void **local_1c;
 unsigned int local_18;
 int local_14;
 local_14 = 0;
 DiamondDerived::DiamondDerived(aDStack_2c);
 local_18 = 0x32;
 iVar1 = (**local_1c)(&local_1c);
 local_18 = 100;
 iVar2 = (**local_1c)(&local_1c);
 uVar3 = DiamondDerived::_DiamondDerived(aDStack_2c);
 if (local_14 != 0) {
 __stack_chk_fail(uVar3,local_14,0);
 }
 return iVar1 + iVar2;
}

// Function: test_cpp_operator_overload @ 0x1117c
int test_cpp_operator_overload(void)
{
 char cVar1;
 unsigned int uVar2;
 int iVar3;
 Point aPStack_24 [8];
 Point aPStack_1c [8];
 int local_14;
 int local_10;
 int local_c;
 local_c = 0;
 Point::Point(aPStack_24,1,2);
 Point::Point(aPStack_1c,3,4);
 Point::operator_((Point *)&local_14,aPStack_24);
 cVar1 = Point::operator__(aPStack_24,aPStack_1c);
 uVar2 = Point::operator__((Point *)&local_14);
 if (cVar1 == '\0') {
 iVar3 = 10;
 }
 else {
 iVar3 = 0;
 }
 if (local_c != 0) {
 __stack_chk_fail(uVar2,local_c,0);
 }
 return iVar3 + local_14 + local_10;
}

// Function: test_cpp_template_func @ 0x11250
int test_cpp_template_func(void)
{
 int iVar1;
 double dVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int a = 3;
 int b = 7;
 iVar1 = template_max_int_(a, b);
 dVar2 = template_max_double_(10.0, 20.0);
 iVar4 = 10;
 iVar5 = 0x14;
 template_swap_int_(&iVar4, &iVar5);
 iVar3 = (int)dVar2;
 return iVar3 + iVar1 + iVar4 + iVar5;
}

// Function: test_cpp_template_class @ 0x11324
int test_cpp_template_class(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 unsigned long long uVar4;
 Container_int_ aCStack_9c [44];
 Container_double_ aCStack_70 [92];
 int local_14;
 local_14 = 0;
 Container_int_Container(aCStack_9c);
 Container_int_push(aCStack_9c,10);
 Container_int_push(aCStack_9c,0x14);
 Container_int_push(aCStack_9c,0x1e);
 iVar1 = Container_int_get(aCStack_9c,0);
 iVar2 = Container_int_getSize(aCStack_9c);
 Container_double_Container(aCStack_70);
 Container_double_push(aCStack_70,(double)CONCAT44(iVar2,iVar1));
 uVar4 = Container_double_get(aCStack_70,0);
 iVar3 = __aeabi_d2iz((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
 if (local_14 != 0) {
 __stack_chk_fail(iVar3,local_14,0);
 }
 return iVar1 + iVar2 + iVar3;
}

// Function: test_cpp_lambda()::{lambda(int)#1}::operator() @ 0x1143c
int __thiscall test_cpp_lambda()::{lambda(int)#1}::operator__(_lambda_int__1_ *this,int param_1)
{
 **(int **)(this + 4) = **(int **)(this + 4) + 5;
 return *(int *)this * param_1 + **(int **)(this + 4);
}

// Function: test_cpp_lambda @ 0x1149c
int test_cpp_lambda(void)
{
 unsigned int local_24;
 unsigned int local_20;
 int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 unsigned int *local_10;
 int local_c;
 local_c = 0;
 local_20 = 10;
 local_24 = 0x14;
 local_14 = 10;
 local_10 = &local_24;
 local_1c = test_cpp_lambda()::{lambda(int)#1}::operator__((_lambda_int__1_ *)&local_14,3);
 local_18 = 0x1e;
 if (local_c != 0) {
 __stack_chk_fail(local_1c,local_c,0);
 }
 return local_1c + 0x1e;
}

// Function: test_cpp_exception @ 0x1152c
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int::typeinfo,0);
}

// Function: test_cpp_smart_ptr_lambda_operator @ 0x1169c
void __thiscall
test_cpp_smart_ptr_lambda_operator(_lambda_int___1_ *this,int *param_1)
{
 *param_1 = -1;
 if (param_1 != (int *)0x0) {
 operator_delete(param_1,4);
 }
 return;
}

// Function: test_cpp_smart_ptr @ 0x116e0
int test_cpp_smart_ptr(void)
{
 int *piVar1;
 unsigned int *puVar2;
 type *ptVar3;
 unsigned int uVar4;
 int iVar5;
 _lambda_int___1_ a_Stack_34 [4];
 unique_ptr_int_std__default_delete_int__ auStack_30 [4];
 unique_ptr_int_std__default_delete_int__ auStack_2c [4];
 unique_ptr_int___std__default_delete_int____ auStack_28 [4];
 unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ auStack_24 [4];
 int local_20;
 int local_1c;
 int local_18;
 int local_14;
 local_14 = 0;
 piVar1 = (int *)operator_new(4);
 *piVar1 = 100;
 std_unique_ptr_int_std_default_delete_int__unique_ptr_std__default_delete_int__void_
 (auStack_30,piVar1);
 puVar2 = (unsigned int *)std_unique_ptr_int_std_default_delete_int__operator_(auStack_30);
 *puVar2 = 200;
 ptVar3 = std_move_std__unique_ptr_int_std__default_delete_int____((unique_ptr *)auStack_30);
 std_unique_ptr_int_std_default_delete_int__unique_ptr_std__default_delete_int__void_(auStack_2c,(unique_ptr *)ptVar3);
 piVar1 = (int *)std_unique_ptr_int_std_default_delete_int__operator_(auStack_2c);
 local_20 = *piVar1;
 piVar1 = (int *)operator_new__(0x14);
 *piVar1 = 1;
 piVar1[1] = 2;
 piVar1[2] = 3;
 piVar1[3] = 4;
 piVar1[4] = 5;
 std_unique_ptr<int[],std_default_delete<int[]>>::
 unique_ptr_int__std__default_delete_int____void_bool_(auStack_28,piVar1);
 piVar1 = (int *)std_unique_ptr<int[],std_default_delete<int[]>>::operator__(auStack_28,2);
 local_1c = *piVar1;
 piVar1 = (int *)operator_new(4);
 *piVar1 = 500;
 std_unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::unique_ptr__lambda_int___1__void_
 (auStack_24,piVar1,a_Stack_34);
 piVar1 = (int *)std_unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::operator_(auStack_24)
 ;
 local_18 = *piVar1;
 iVar5 = local_20 + local_1c + local_18;
 std_unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_unique_ptr(auStack_24);
 std_unique_ptr<int[],std_default_delete<int[]>>::_unique_ptr(auStack_28);
 std_unique_ptr<int,std_default_delete<int>>::_unique_ptr(auStack_2c);
 uVar4 = std_unique_ptr<int,std_default_delete<int>>::_unique_ptr(auStack_30);
 if (local_14 != 0) {
 __stack_chk_fail(uVar4,local_14,0);
 }
 return iVar5;
}

// Function: test_cpp_rtti @ 0x118c4
int test_cpp_rtti(void)
{
 int *this;
 int *this_00;
 int iVar1;
 char *__s;
 size_t sVar2;
 int local_24;
 this = (int *)operator_new(4);
 *this = 0;
 RTTIDerivedA::RTTIDerivedA((RTTIDerivedA *)this);
 this_00 = (int *)operator_new(4);
 *this_00 = 0;
 RTTIDerivedB::RTTIDerivedB((RTTIDerivedB *)this_00);
 local_24 = 0;
 if (this == (int *)0x0) {
 __cxa_bad_typeid();
LAB_00011954:
 local_24 = 10;
 }
 else {
 iVar1 = std_type_info::operator__
 (*(type_info **)(*this + -4),(type_info *)&RTTIDerivedA::typeinfo);
 if (iVar1 != 0) goto LAB_00011954;
 }
 if (this_00 == (int *)0x0) {
 __cxa_bad_typeid();
LAB_00011994:
 local_24 = local_24 + 0x14;
 }
 else {
 iVar1 = std_type_info::operator__
 (*(type_info **)(*this_00 + -4),(type_info *)&RTTIDerivedB::typeinfo);
 if (iVar1 != 0) goto LAB_00011994;
 }
 if (this == (int *)0x0) {
 iVar1 = 0;
 }
 else {
 iVar1 = __dynamic_cast(this,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 }
 if (iVar1 != 0) {
 iVar1 = RTTIDerivedA::derivedA_data();
 local_24 = local_24 + iVar1;
 }
 if (this_00 == (int *)0x0) {
 iVar1 = 0;
 }
 else {
 iVar1 = __dynamic_cast(this_00,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 }
 if (iVar1 != 0) {
 iVar1 = RTTIDerivedB::derivedB_data();
 local_24 = local_24 + iVar1;
 }
 if (this == (int *)0x0) {
 __cxa_bad_typeid();
 }
 else {
 __s = (char *)std_type_info::name(*(type_info **)(*this + -4));
 sVar2 = strlen(__s);
 local_24 = sVar2 + local_24;
 if (this == (int *)0x0) goto LAB_00011aa0;
 }
 (**(void **)(*this + 4))(this);
LAB_00011aa0:
 if (this_00 != (int *)0x0) {
 (**(void **)(*this_00 + 4))(this_00);
 }
 return local_24;
}

// Function: test_cpp_oo_features @ 0x11adc
int test_cpp_oo_features(void)
{
 unsigned int uVar1;
 int iVar2;
 puts(&DAT_0001426c);
 uVar1 = test_cpp_member_func();
 printf(DAT_00014290,uVar1);
 uVar1 = test_cpp_constructor();
 printf(&DAT_000142b0,uVar1);
 uVar1 = test_cpp_virtual_func();
 printf(&DAT_000142cc,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 printf(&DAT_000142e8,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 printf(&DAT_00014304,uVar1);
 uVar1 = test_cpp_operator_overload();
 printf(&DAT_00014324,uVar1);
 uVar1 = test_cpp_template_func();
 printf(&DAT_00014340,uVar1);
 uVar1 = test_cpp_template_class();
 printf(&DAT_0001435c,uVar1);
 uVar1 = test_cpp_lambda();
 printf(&DAT_00014378,uVar1);
 uVar1 = test_cpp_exception();
 printf(&DAT_00014394,uVar1);
 uVar1 = test_cpp_smart_ptr();
 printf(&DAT_000143b4,uVar1);
 uVar1 = test_cpp_rtti();
 iVar2 = printf(&DAT_000143d4,uVar1);
 return iVar2;
}

// Function: main @ 0x11c18
unsigned int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: __uniq_ptr_data_impl @ 0x11c30
__uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1__true_false_ * __thiscall
__uniq_ptr_data_impl
 (__uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1__true_false_ *this,int *param_1
 ,_lambda_int___1_ *param_2)
{
 __uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::
 __uniq_ptr_impl__lambda_int___1_const__
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *)this,param_1,param_2);
 return this;
}

// Function: std_unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::unique_ptr<{lambda(int*)#1},void> @ 0x11c6c
unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ * __thiscall
std_unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::unique_ptr__lambda_int___1__void_
 (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *this,int *param_1,
 _lambda_int___1_ *param_2)
{
 __uniq_ptr_data<int,test_cpp_smart_ptr()::{lambda(int*)#1},true,false>::
 __uniq_ptr_impl__lambda_int___1_const__
 ((__uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1__true_false_ *)this,param_1,
 param_2);
 return this;
}

// Function: std_unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::~unique_ptr @ 0x11ca8
unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ * __thiscall
std_unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_unique_ptr
 (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *this)
{
 int **ppiVar1;
 _lambda_int___1_ *this_00;
 int **ppiVar2;
 ppiVar1 = (int **)__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr();
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (_lambda_int___1_ *)get_deleter();
 ppiVar2 = (int **)move_int___(ppiVar1);
 test_cpp_smart_ptr()::{lambda(int*)#1}::operator__(this_00,*ppiVar2);
 }
 *ppiVar1 = (int *)0x0;
 return this;
}

// Function: std_unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::operator* @ 0x11d1c
unsigned int __thiscall
std_unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::operator_
 (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *this)
{
 unsigned int uVar1;
 uVar1 = get();
 return uVar1;
}

// Function: std___uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::__uniq_ptr_impl<{lambda(int*)#1}const&> @ 0x11d4c
__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ * __thiscall
std___uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::
__uniq_ptr_impl__lambda_int___1_const__
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *this,int *param_1,
 _lambda_int___1_ *param_2)
{
 _lambda_int___1_ *p_Var1;
 int *local_18;
 __uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *local_14;
 local_18 = param_1;
 local_14 = this;
 p_Var1 = forward_test_cpp_smart_ptr_____lambda_int___1_const__((type *)param_2);
 tuple<int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::tuple_int____lambda_int___1_const__true_
 ((tuple_int__test_cpp_smart_ptr_____lambda_int___1__ *)this,&local_18,p_Var1);
 return local_14;
}

// Function: std___uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr @ 0x11d94
type * std___uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr(void)
{
 int *in_r0;
 type *ptVar1;
 _lambda_int___1_ *in_r1;
 ptVar1 = get_0u_int__test_cpp_smart_ptr_____lambda_int___1__(in_r0,in_r1);
 return ptVar1;
}

// Function: std_unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::get_deleter @ 0x11dc0
unsigned int std_unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::get_deleter(void)
{
 unsigned int uVar1;
 uVar1 = __uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_deleter();
 return uVar1;
}

// Function: std_unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::get @ 0x11dec
unsigned int std_unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::get(void)
{
 unsigned int uVar1;
 uVar1 = __uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr();
 return uVar1;
}

// Function: std_forward<test_cpp_smart_ptr()::{lambda(int*)#1}const&> @ 0x11e18
_lambda_int___1_ * std_forward_test_cpp_smart_ptr_____lambda_int___1_const__(type *param_1)
{
 return (_lambda_int___1_ *)param_1;
}

// Function: std_tuple<int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::tuple<int*&,{lambda(int*)#1}const&,true> @ 0x11e3c
tuple_int__test_cpp_smart_ptr_____lambda_int___1__ * __thiscall
std_tuple<int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::tuple_int____lambda_int___1_const__true_
 (tuple_int__test_cpp_smart_ptr_____lambda_int___1__ *this,int **param_1,
 _lambda_int___1_ *param_2)
{
 int **ppiVar1;
 _lambda_int___1_ *p_Var2;
 ppiVar1 = forward_int___((type *)param_1);
 p_Var2 = forward_test_cpp_smart_ptr_____lambda_int___1_const__((type *)param_2);
 _Tuple_impl<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::
 _Tuple_impl_int____lambda_int___1_const__void_
 ((_Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__ *)this,ppiVar1,p_Var2);
 return this;
}

// Function: std_get<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 0x11e90
type * std_get_0u_int__test_cpp_smart_ptr_____lambda_int___1__
 (int *param_1,_lambda_int___1_ *param_2)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__test_cpp_smart_ptr_____lambda_int___1__((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_deleter @ 0x11ebc
type * std___uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_deleter(void)
{
 int *in_r0;
 type *ptVar1;
 _lambda_int___1_ *in_r1;
 ptVar1 = get_1u_int__test_cpp_smart_ptr_____lambda_int___1__(in_r0,in_r1);
 return ptVar1;
}

// Function: std___uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr @ 0x11ee8
unsigned int std___uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr(void)
{
 int *in_r0;
 unsigned int *puVar1;
 _lambda_int___1_ *in_r1;
 puVar1 = (unsigned int *)get_0u_int__test_cpp_smart_ptr_____lambda_int___1__(in_r0,in_r1);
 return *puVar1;
}

// Function: std__Tuple_impl<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_Tuple_impl<int*&,{lambda(int*)#1}const&,void> @ 0x11f18
_Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__ * __thiscall
std__Tuple_impl<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::
_Tuple_impl_int____lambda_int___1_const__void_
 (_Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__ *this,int **param_1,
 _lambda_int___1_ *param_2)
{
 int **ppiVar1;
 forward_test_cpp_smart_ptr_____lambda_int___1_const__((type *)param_2);
 _Tuple_impl<1u,test_cpp_smart_ptr()::{lambda(int*)#1}>::_Tuple_impl((_lambda_int___1_ *)this);
 ppiVar1 = forward_int___((type *)param_1);
 _Head_base<0u,int*,false>::_Head_base_int___((_Head_base_0u_int__false_ *)this,ppiVar1);
 return this;
}

// Function: std___get_helper<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 0x11f74
int ** std___get_helper_0u_int__test_cpp_smart_ptr_____lambda_int___1__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head
 ((_lambda_int___1_ *)param_1);
 return ppiVar1;
}

// Function: std_get<1u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 0x11f9c
type * std_get_1u_int__test_cpp_smart_ptr_____lambda_int___1__
 (int *param_1,_lambda_int___1_ *param_2)
{
 _lambda_int___1_ *p_Var1;
 p_Var1 = __get_helper_1u_test_cpp_smart_ptr_____lambda_int___1__((_Tuple_impl *)param_1);
 return (type *)p_Var1;
}

// Function: std_get<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 0x11fc4
type * std_get_0u_int__test_cpp_smart_ptr_____lambda_int___1__
 (int *param_1,_lambda_int___1_ *param_2)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__test_cpp_smart_ptr_____lambda_int___1__((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std__Tuple_impl<1u,test_cpp_smart_ptr()::{lambda(int*)#1}>::_Tuple_impl @ 0x11ff0
_lambda_int___1_ *
std__Tuple_impl<1u,test_cpp_smart_ptr()::{lambda(int*)#1}>::_Tuple_impl(_lambda_int___1_ *param_1)
{
 _Head_base<1u,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_Head_base(param_1);
 return param_1;
}

// Function: std__Tuple_impl<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head @ 0x12020
unsigned int
std__Tuple_impl<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(_lambda_int___1_ *param_1)
{
 unsigned int uVar1;
 uVar1 = _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
 return uVar1;
}

// Function: std___get_helper<1u,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 0x1204c
_lambda_int___1_ *
std___get_helper_1u_test_cpp_smart_ptr_____lambda_int___1__(_Tuple_impl *param_1)
{
 _lambda_int___1_ *p_Var1;
 p_Var1 = (_lambda_int___1_ *)
 _Tuple_impl<1u,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head
 ((_lambda_int___1_ *)param_1);
 return p_Var1;
}

// Function: std___get_helper<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 0x12074
int ** std___get_helper_0u_int__test_cpp_smart_ptr_____lambda_int___1__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head
 ((_lambda_int___1_ *)param_1);
 return ppiVar1;
}

// Function: std__Head_base<1u,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_Head_base @ 0x1209c
_lambda_int___1_ *
std__Head_base<1u,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_Head_base
 (_lambda_int___1_ *param_1)
{
 return param_1;
}

// Function: std__Tuple_impl<1u,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head @ 0x120c4
unsigned int
std__Tuple_impl<1u,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(_lambda_int___1_ *param_1)
{
 unsigned int uVar1;
 uVar1 = _Head_base<1u,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_M_head(param_1);
 return uVar1;
}

// Function: std__Tuple_impl<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head @ 0x120ec
unsigned int
std__Tuple_impl<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(_lambda_int___1_ *param_1)
{
 unsigned int uVar1;
 uVar1 = _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
 return uVar1;
}

// Function: std__Head_base<1u,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_M_head @ 0x12118
_lambda_int___1_ *
std__Head_base<1u,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_M_head(_lambda_int___1_ *param_1)
{
 return param_1;
}

// Function: __static_initialization_and_destruction_0 @ 0x1213c
int __static_initialization_and_destruction_0(int param_1,int param_2)
{
 if ((param_1 == 1) && (param_2 == 0xffff)) {
 std_ios_base::Init::Init((Init *)&std___ioinit);
 param_1 = __aeabi_atexit(&std___ioinit,std_ios_base::Init::_Init,&__dso_handle);
 }
 return param_1;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x121a0
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 __static_initialization_and_destruction_0(1,0xffff);
 return;
}

// Function: std_type_info::name @ 0x121bc
int __thiscall std_type_info::name(type_info *this)
{
 int iVar1;
 if (**(char **)(this + 4) == '*') {
 iVar1 = *(int *)(this + 4) + 1;
 }
 else {
 iVar1 = *(int *)(this + 4);
 }
 return iVar1;
}

// Function: SimpleClass::SimpleClass @ 0x12208
SimpleClass * __thiscall SimpleClass::SimpleClass(SimpleClass *this,int param_1,char *param_2)
{
 *(int *)this = param_1;
 strncpy((char *)(this + 4),param_2,0x1f);
 this[0x23] = (SimpleClass)0x0;
 return this;
}

// Function: SimpleClass::getValue @ 0x12260
unsigned int __thiscall SimpleClass::getValue(SimpleClass *this)
{
 return *(unsigned int *)this;
}

// Function: SimpleClass::setValue @ 0x12288
SimpleClass * __thiscall SimpleClass::setValue(SimpleClass *this,int param_1)
{
 *(int *)this = param_1;
 return this;
}

// Function: SimpleClass::compute @ 0x122b8
int __thiscall SimpleClass::compute(SimpleClass *this,int param_1)
{
 size_t sVar1;
 int iVar2;
 iVar2 = *(int *)this;
 sVar1 = strlen((char *)(this + 4));
 return param_1 * iVar2 + sVar1;
}

// Function: SimpleClass::getClassID @ 0x12304
unsigned int SimpleClass::getClassID(void)
{
 return 0x1234;
}

// Function: LifecycleClass::LifecycleClass @ 0x12324
LifecycleClass * __thiscall LifecycleClass::LifecycleClass(LifecycleClass *this,uint param_1)
{
 void *pvVar1;
 uint local_c;
 *(uint *)(this + 4) = param_1;
 if (param_1 < 0x1fffffff) {
 pvVar1 = operator_new__(param_1 << 2);
 *(void **)this = pvVar1;
 for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
LAB_0001237c:
 *(uint *)(*(int *)this + local_c * 4) = local_c * 10;
 }
 instance_count = instance_count + 1;
 return this;
 }
 __cxa_throw_bad_array_new_length();
 goto LAB_0001237c;
}

// Function: LifecycleClass::~LifecycleClass @ 0x123f4
LifecycleClass * __thiscall LifecycleClass::_LifecycleClass(LifecycleClass *this)
{
 if (*(int *)this != 0) {
 operator_delete__(*(void **)this);
 }
 instance_count = instance_count + -1;
 return this;
}

// Function: LifecycleClass::getData @ 0x1244c
unsigned int __thiscall LifecycleClass::getData(LifecycleClass *this,uint param_1)
{
 unsigned int uVar1;
 if (param_1 < *(uint *)(this + 4)) {
 uVar1 = *(unsigned int *)(*(int *)this + param_1 * 4);
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}

// Function: LifecycleClass::getInstanceCount @ 0x124a4
unsigned int LifecycleClass::getInstanceCount(void)
{
 return instance_count;
}

// Function: Base::virtual_func @ 0x124c8
int __thiscall Base::virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x124f4
char * Base::getName(void)
{
 return &DAT_0001425c;
}

// Function: Base::~Base @ 0x1251c
Base * __thiscall Base::_Base(Base *this)
{
 *(char ***)this = &PTR_virtual_func_000145f0;
 return this;
}

// Function: Base::~Base @ 0x12550
Base * __thiscall Base::_Base(Base *this)
{
 _Base(this);
 operator_delete(this,4);
 return this;
}

// Function: Base::Base @ 0x12584
Base * __thiscall Base::Base(Base *this)
{
 *(char ***)this = &PTR_virtual_func_000145f0;
 return this;
}

// Function: Derived::Derived @ 0x125b8
Derived * __thiscall Derived::Derived(Derived *this,int param_1)
{
 Base::Base((Base *)this);
 *(char ***)this = &PTR_virtual_func_000145d8;
 *(int *)(this + 4) = param_1;
 return this;
}

// Function: Derived::virtual_func @ 0x12604
int __thiscall Derived::virtual_func(Derived *this,int param_1)
{
 return param_1 * *(int *)(this + 4);
}

// Function: Derived::getName @ 0x12638
char * Derived::getName(void)
{
 return "Derived";
}

// Function: BaseA::funcA @ 0x12660
unsigned int BaseA::funcA(void)
{
 return 10;
}

// Function: BaseA::~BaseA @ 0x12684
BaseA * __thiscall BaseA::_BaseA(BaseA *this)
{
 *(char ***)this = &PTR_funcA_000145c4;
 return this;
}

// Function: BaseA::~BaseA @ 0x126b8
BaseA * __thiscall BaseA::_BaseA(BaseA *this)
{
 _BaseA(this);
 operator_delete(this,8);
 return this;
}

// Function: BaseB::funcB @ 0x126ec
unsigned int BaseB::funcB(void)
{
 return 0x14;
}

// Function: BaseB::~BaseB @ 0x12710
BaseB * __thiscall BaseB::_BaseB(BaseB *this)
{
 *(char ***)this = &PTR_funcB_000145b0;
 return this;
}

// Function: BaseB::~BaseB @ 0x12744
BaseB * __thiscall BaseB::_BaseB(BaseB *this)
{
 _BaseB(this);
 operator_delete(this,8);
 return this;
}

// Function: MultiDerived::funcA @ 0x12778
unsigned int MultiDerived::funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x1279c
unsigned int MultiDerived::funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x127c0
void __thiscall MultiDerived::funcB(MultiDerived *this)
{
 funcB();
 return;
}

// Function: BaseA::BaseA @ 0x127c8
BaseA * __thiscall BaseA::BaseA(BaseA *this)
{
 *(char ***)this = &PTR_funcA_000145c4;
 return this;
}

// Function: BaseB::BaseB @ 0x127fc
BaseB * __thiscall BaseB::BaseB(BaseB *this)
{
 *(char ***)this = &PTR_funcB_000145b0;
 return this;
}

// Function: MultiDerived::MultiDerived @ 0x12830
MultiDerived * __thiscall MultiDerived::MultiDerived(MultiDerived *this)
{
 BaseA::BaseA((BaseA *)this);
 BaseB::BaseB((BaseB *)(this + 8));
 *(char ***)this = &PTR_funcA_00014584;
 *(char ***)(this + 8) = &PTR_funcB_0001459c;
 return this;
}

// Function: VirtualBase::func @ 0x1288c
unsigned int VirtualBase::func(void)
{
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x128b0
VirtualBase * __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
 *(char ***)this = &PTR_func_00014570;
 return this;
}

// Function: VirtualBase::~VirtualBase @ 0x128e4
VirtualBase * __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
 _VirtualBase(this);
 operator_delete(this,8);
 return this;
}

// Function: MiddleA::func @ 0x12918
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func @ 0x1295c
void __thiscall MiddleA::func(MiddleA *this)
{
 func(this + *(int *)(*(int *)this + -0xc));
 return;
}

// Function: MiddleB::func @ 0x12970
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}

// Function: MiddleB::func @ 0x129b4
void __thiscall MiddleB::func(MiddleB *this)
{
 func(this + *(int *)(*(int *)this + -0xc));
 return;
}

// Function: DiamondDerived::func @ 0x129c8
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x12a0c
void __thiscall DiamondDerived::func(DiamondDerived *this)
{
 func(this + *(int *)(*(int *)this + -0xc));
 return;
}

// Function: DiamondDerived::func @ 0x12a20
void __thiscall DiamondDerived::func(DiamondDerived *this)
{
 func(this + -8);
 return;
}

// Function: VirtualBase::VirtualBase @ 0x12a28
VirtualBase * __thiscall VirtualBase::VirtualBase(VirtualBase *this)
{
 *(char ***)this = &PTR_func_00014570;
 return this;
}

// Function: MiddleA::MiddleA @ 0x12a5c
MiddleA * __thiscall MiddleA::MiddleA(MiddleA *this)
{
 unsigned int *in_r1;
 *(unsigned int *)this = *in_r1;
 *(unsigned int *)(this + *(int *)(*(int *)this + -0xc)) = in_r1[1];
 return this;
}

// Function: MiddleA::~MiddleA @ 0x12abc
MiddleA * __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 unsigned int *in_r1;
 *(unsigned int *)this = *in_r1;
 *(unsigned int *)(this + *(int *)(*(int *)this + -0xc)) = in_r1[1];
 return this;
}

// Function: MiddleB::MiddleB @ 0x12b1c
MiddleB * __thiscall MiddleB::MiddleB(MiddleB *this)
{
 unsigned int *in_r1;
 *(unsigned int *)this = *in_r1;
 *(unsigned int *)(this + *(int *)(*(int *)this + -0xc)) = in_r1[1];
 return this;
}

// Function: MiddleB::~MiddleB @ 0x12b7c
MiddleB * __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 unsigned int *in_r1;
 *(unsigned int *)this = *in_r1;
 *(unsigned int *)(this + *(int *)(*(int *)this + -0xc)) = in_r1[1];
 return this;
}

// Function: DiamondDerived::DiamondDerived @ 0x12bdc
DiamondDerived * __thiscall DiamondDerived::DiamondDerived(DiamondDerived *this)
{
 VirtualBase::VirtualBase((VirtualBase *)(this + 0x10));
 MiddleA::MiddleA((MiddleA *)this);
 MiddleB::MiddleB((MiddleB *)(this + 8));
 *(char ***)this = &PTR_func_000144a4;
 *(char ***)(this + 0x10) = &PTR_func_000144d8;
 *(char ***)(this + 8) = &PTR_func_000144bc;
 return this;
}

// Function: Point::Point @ 0x12c74
Point * __thiscall Point::Point(Point *this,int param_1,int param_2)
{
 *(int *)this = param_1;
 *(int *)(this + 4) = param_2;
 return this;
}

// Function: Point::operator+ @ 0x12cb8
Point * __thiscall Point::operator_(Point *this,Point *param_1)
{
 int *in_r2;
 Point(this,*(int *)param_1 + *in_r2,*(int *)(param_1 + 4) + in_r2[1]);
 return this;
}

// Function: Point::operator== @ 0x12d10
unsigned int __thiscall Point::operator__(Point *this,Point *param_1)
{
 unsigned int uVar1;
 if ((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) {
 uVar1 = 1;
 }
 else {
 uVar1 = 0;
 }
 return uVar1;
}

// Function: Point::operator++ @ 0x12d70
Point * __thiscall Point::operator__(Point *this)
{
 *(int *)this = *(int *)this + 1;
 *(int *)(this + 4) = *(int *)(this + 4) + 1;
 return this;
}

// Function: template_max_int_ @ 0x12dbc
int template_max_int_(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x12dfc
double template_max_double_(double param_1,double param_2)
{
 unsigned int in_r0;
 unsigned int in_r1;
 unsigned int in_r2;
 unsigned int in_r3;
 double extraout_d0;
 __aeabi_dcmpgt(in_r0,in_r1,in_r2,in_r3);
 return extraout_d0;
}

// Function: template_swap<int> @ 0x12e5c
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x12ea8
Container_int_ * __thiscall Container_int_Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return this;
}

// Function: Container_int_push @ 0x12ed8
Container_int_ * __thiscall Container_int_push(Container_int_ *this,int param_1)
{
 Container_int_ *pCVar1;
 int iVar2;
 pCVar1 = this;
 if (*(int *)(this + 0x28) < 10) {
 iVar2 = *(int *)(this + 0x28);
 pCVar1 = (Container_int_ *)(iVar2 + 1);
 *(Container_int_ **)(this + 0x28) = pCVar1;
 *(int *)(this + iVar2 * 4) = param_1;
 }
 return pCVar1;
}

// Function: Container<int>::get @ 0x12f2c
unsigned int __thiscall Container<int>::get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
 uVar1 = 0;
 }
 else {
 uVar1 = *(unsigned int *)(this + param_1 * 4);
 }
 return uVar1;
}

// Function: Container_int_getSize_ @ 0x12f84
unsigned int __thiscall Container_int_getSize_(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x12fac
Container_double_ * __thiscall Container<double>::Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return this;
}

// Function: Container<double>::push @ 0x12fdc
void Container<double>::push(double param_1)
{
 int in_r0;
 int iVar1;
 unsigned int *puVar2;
 unsigned int in_r2;
 unsigned int in_r3;
 if (*(int *)(in_r0 + 0x50) < 10) {
 iVar1 = *(int *)(in_r0 + 0x50);
 *(int *)(in_r0 + 0x50) = iVar1 + 1;
 puVar2 = (unsigned int *)(in_r0 + iVar1 * 8);
 *puVar2 = in_r2;
 puVar2[1] = in_r3;
 }
 return;
}

// Function: Container<double>::get @ 0x13040
unsigned long long __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
 unsigned int uVar1;
 unsigned int uVar2;
 if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
 uVar1 = 0;
 uVar2 = 0;
 }
 else {
 uVar1 = *(unsigned int *)(this + param_1 * 8);
 uVar2 = *(unsigned int *)((int)(this + param_1 * 8) + 4);
 }
 return CONCAT44(uVar2,uVar1);
}

// Function: Container<double>::getSize @ 0x130a8
unsigned int __thiscall Container<double>::getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: std___uniq_ptr_data_int_std__default_delete_int__true_true_impl @ 0x130d0
__uniq_ptr_data_int_std__default_delete_int__true_true_ * __thiscall
std___uniq_ptr_data_int_std__default_delete_int__true_true_impl
 (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,__uniq_ptr_data *param_1)
{
 __uniq_ptr_impl<int,std_default_delete<int>>::__uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,(__uniq_ptr_impl *)param_1);
 return this;
}

// Function: std_unique_ptr_int_std_default_delete_int__unique_ptr @ 0x13108
unique_ptr_int_std__default_delete_int__ * __thiscall
std_unique_ptr_int_std_default_delete_int__unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this,unique_ptr *param_1)
{
 __uniq_ptr_data<int,std_default_delete<int>,true,true>::__uniq_ptr_data
 ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this,
 (__uniq_ptr_data *)param_1);
 return this;
}

// Function: RTTIBase::getType @ 0x13140
unsigned int RTTIBase::getType(void)
{
 return 0;
}

// Function: RTTIDerivedA::getType @ 0x13164
unsigned int RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIDerivedA::derivedA_data @ 0x13188
unsigned int RTTIDerivedA::derivedA_data(void)
{
 return 100;
}

// Function: RTTIDerivedB::getType @ 0x131ac
unsigned int RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::derivedB_data @ 0x131d0
unsigned int RTTIDerivedB::derivedB_data(void)
{
 return 200;
}

// Function: RTTIBase::RTTIBase @ 0x131f4
RTTIBase * __thiscall RTTIBase::RTTIBase(RTTIBase *this)
{
 *(char ***)this = &PTR__RTTIBase_0001448c;
 return this;
}

// Function: RTTIBase::~RTTIBase @ 0x13228
RTTIBase * __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
 *(char ***)this = &PTR__RTTIBase_0001448c;
 return this;
}

// Function: RTTIBase::~RTTIBase @ 0x1325c
RTTIBase * __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
 _RTTIBase(this);
 operator_delete(this,4);
 return this;
}

// Function: RTTIDerivedA::RTTIDerivedA @ 0x13290
RTTIDerivedA * __thiscall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase::RTTIBase((RTTIBase *)this);
 *(char ***)this = &PTR__RTTIDerivedA_00014478;
 return this;
}

// Function: RTTIDerivedB::RTTIDerivedB @ 0x132cc
RTTIDerivedB * __thiscall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase::RTTIBase((RTTIBase *)this);
 *(char ***)this = &PTR__RTTIDerivedB_00014464;
 return this;
}

// Function: std___uniq_ptr_data<int,std_default_delete<int>,true,true>::__uniq_ptr_impl @ 0x13308
__uniq_ptr_data_int_std__default_delete_int__true_true_ * __thiscall
std___uniq_ptr_data<int,std_default_delete<int>,true,true>::__uniq_ptr_impl
 (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,int *param_1)
{
 __uniq_ptr_impl<int,std_default_delete<int>>::__uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,param_1);
 return this;
}

// Function: std_unique_ptr_int_std_default_delete_int__unique_ptr_std__default_delete_int__void_ @ 0x13340
unique_ptr_int_std__default_delete_int__ * __thiscall
std_unique_ptr_int_std_default_delete_int_construct
 (unique_ptr_int_std__default_delete_int__ *this,int *param_1)
{
 __uniq_ptr_data<int,std_default_delete<int>,true,true>::__uniq_ptr_impl
 ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this,param_1);
 return this;
}

// Function: std_unique_ptr<int,std_default_delete<int>>::~unique_ptr @ 0x13374
unique_ptr_int_std__default_delete_int__ * __thiscall
std_unique_ptr<int,std_default_delete<int>>::_unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this)
{
 int **ppiVar1;
 default_delete_int_ *this_00;
 int **ppiVar2;
 ppiVar1 = (int **)__uniq_ptr_impl<int,std_default_delete<int>>::_M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (default_delete_int_ *)get_deleter(this);
 ppiVar2 = (int **)move_int___(ppiVar1);
 default_delete<int>::operator__(this_00,*ppiVar2);
 }
 *ppiVar1 = (int *)0x0;
 return this;
}

// Function: std_unique_ptr<int,std_default_delete<int>>::operator* @ 0x133e8
unsigned int __thiscall
std_unique_ptr_int_std_default_delete_int__operator_
 (unique_ptr_int_std__default_delete_int__ *this)
{
 unsigned int uVar1;
 uVar1 = get(this);
 return uVar1;
}

// Function: std_move<std_unique_ptr<int,std_default_delete<int>>&> @ 0x13418
type * std_move_std__unique_ptr_int_std__default_delete_int____(unique_ptr *param_1)
{
 return (type *)param_1;
}

// Function: std__Tuple_impl<0u,int*,std_default_delete<int>>::_Tuple_impl @ 0x1343c
_Tuple_impl_0u_int__std__default_delete_int__ * __thiscall
std__Tuple_impl<0u,int*,std_default_delete<int>>::_Tuple_impl
 (_Tuple_impl_0u_int__std__default_delete_int__ *this,_Tuple_impl *param_1)
{
 _Tuple_impl<1u,std_default_delete<int>>::_Tuple_impl((_Tuple_impl *)this);
 *(unsigned int *)this = *(unsigned int *)param_1;
 return this;
}

// Function: std_tuple<int*,std_default_delete<int>>::tuple @ 0x1347c
tuple_int__std__default_delete_int__ * __thiscall
std_tuple<int*,std_default_delete<int>>::tuple
 (tuple_int__std__default_delete_int__ *this,tuple *param_1)
{
 _Tuple_impl<0u,int*,std_default_delete<int>>::_Tuple_impl
 ((_Tuple_impl_0u_int__std__default_delete_int__ *)this,(_Tuple_impl *)param_1);
 return this;
}

// Function: std___uniq_ptr_impl<int,std_default_delete<int>>::__uniq_ptr_impl @ 0x134b4
__uniq_ptr_impl_int_std__default_delete_int__ * __thiscall
std___uniq_ptr_impl<int,std_default_delete<int>>::__uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int__ *this,__uniq_ptr_impl *param_1)
{
 type *ptVar1;
 unsigned int *puVar2;
 ptVar1 = move_std__tuple_int__std__default_delete_int____((tuple *)param_1);
 tuple<int*,std_default_delete<int>>::tuple
 ((tuple_int__std__default_delete_int__ *)this,(tuple *)ptVar1);
 puVar2 = (unsigned int *)_M_ptr((__uniq_ptr_impl_int_std__default_delete_int__ *)param_1);
 *puVar2 = 0;
 return this;
}

// Function: std___uniq_ptr_data<int,std_default_delete<int[]>,true,true>::__uniq_ptr_impl @ 0x1350c
__uniq_ptr_data_int_std__default_delete_int____true_true_ * __thiscall
std___uniq_ptr_data<int,std_default_delete<int[]>,true,true>::__uniq_ptr_impl
 (__uniq_ptr_data_int_std__default_delete_int____true_true_ *this,int *param_1)
{
 __uniq_ptr_impl<int,std_default_delete<int[]>>::__uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this,param_1);
 return this;
}

// Function: std_unique_ptr<int[],std_default_delete<int[]>>::unique_ptr<int*,std_default_delete<int[]>,void,bool> @ 0x13544
unique_ptr_int___std__default_delete_int____ * __thiscall
std_unique_ptr<int[],std_default_delete<int[]>>::
unique_ptr_int__std__default_delete_int____void_bool_
 (unique_ptr_int___std__default_delete_int____ *this,int *param_1)
{
 __uniq_ptr_data<int,std_default_delete<int[]>,true,true>::__uniq_ptr_impl
 ((__uniq_ptr_data_int_std__default_delete_int____true_true_ *)this,param_1);
 return this;
}

// Function: std_unique_ptr<int[],std_default_delete<int[]>>::~unique_ptr @ 0x13578
unique_ptr_int___std__default_delete_int____ * __thiscall
std_unique_ptr<int[],std_default_delete<int[]>>::_unique_ptr
 (unique_ptr_int___std__default_delete_int____ *this)
{
 int **ppiVar1;
 default_delete_int___ *this_00;
 ppiVar1 = (int **)__uniq_ptr_impl<int,std_default_delete<int[]>>::_M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (default_delete_int___ *)get_deleter(this);
 default_delete<int[]>::operator__(this_00,*ppiVar1);
 }
 *ppiVar1 = (int *)0x0;
 return this;
}

// Function: std_unique_ptr<int[],std_default_delete<int[]>>::operator[] @ 0x135e4
int __thiscall
std_unique_ptr<int[],std_default_delete<int[]>>::operator__
 (unique_ptr_int___std__default_delete_int____ *this,uint param_1)
{
 int iVar1;
 iVar1 = get(this);
 return iVar1 + param_1 * 4;
}

// Function: std___uniq_ptr_impl<int,std_default_delete<int>>::__uniq_ptr_impl @ 0x13624
__uniq_ptr_impl_int_std__default_delete_int__ * __thiscall
std___uniq_ptr_impl<int,std_default_delete<int>>::__uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int__ *this,int *param_1)
{
 int **ppiVar1;
 tuple<int*,std_default_delete<int>>::tuple_true_true_
 ((tuple_int__std__default_delete_int__ *)this);
 ppiVar1 = (int **)_M_ptr(this);
 *ppiVar1 = param_1;
 return this;
}

// Function: std___uniq_ptr_impl<int,std_default_delete<int>>::_M_ptr @ 0x13668
type * __thiscall
std___uniq_ptr_impl<int,std_default_delete<int>>::_M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 type *ptVar1;
 ptVar1 = get_0u_int__std__default_delete_int__((tuple *)this);
 return ptVar1;
}

// Function: std_unique_ptr<int,std_default_delete<int>>::get_deleter @ 0x13694
unsigned int __thiscall
std_unique_ptr<int,std_default_delete<int>>::get_deleter
 (unique_ptr_int_std__default_delete_int__ *this)
{
 unsigned int uVar1;
 uVar1 = __uniq_ptr_impl<int,std_default_delete<int>>::_M_deleter
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 return uVar1;
}

// Function: std_move<int*&> @ 0x136c0
type * std_move_int___(int **param_1)
{
 return (type *)param_1;
}

// Function: std_default_delete<int>::operator() @ 0x136e4
void __thiscall std_default_delete<int>::operator__(default_delete_int_ *this,int *param_1)
{
 if (param_1 != (int *)0x0) {
 operator_delete(param_1,4);
 }
 return;
}

// Function: std_unique_ptr<int,std_default_delete<int>>::get @ 0x1371c
unsigned int __thiscall
std_unique_ptr<int,std_default_delete<int>>::get(unique_ptr_int_std__default_delete_int__ *this)
{
 unsigned int uVar1;
 uVar1 = __uniq_ptr_impl<int,std_default_delete<int>>::_M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 return uVar1;
}

// Function: std_move<std_tuple<int*,std_default_delete<int>>&> @ 0x13748
type * std_move_std__tuple_int__std__default_delete_int____(tuple *param_1)
{
 return (type *)param_1;
}

// Function: std__Tuple_impl<1u,std_default_delete<int>>::_Tuple_impl @ 0x1376c
_Tuple_impl * std__Tuple_impl<1u,std_default_delete<int>>::_Tuple_impl(_Tuple_impl *param_1)
{
 return param_1;
}

// Function: std___uniq_ptr_impl<int,std_default_delete<int[]>>::__uniq_ptr_impl @ 0x13794
__uniq_ptr_impl_int_std__default_delete_int____ * __thiscall
std___uniq_ptr_impl<int,std_default_delete<int[]>>::__uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int____ *this,int *param_1)
{
 int **ppiVar1;
 tuple<int*,std_default_delete<int[]>>::tuple_true_true_
 ((tuple_int__std__default_delete_int____ *)this);
 ppiVar1 = (int **)_M_ptr(this);
 *ppiVar1 = param_1;
 return this;
}

// Function: std___uniq_ptr_impl<int,std_default_delete<int[]>>::_M_ptr @ 0x137d8
type * __thiscall
std___uniq_ptr_impl<int,std_default_delete<int[]>>::_M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 type *ptVar1;
 ptVar1 = get_0u_int__std__default_delete_int____((tuple *)this);
 return ptVar1;
}

// Function: std_unique_ptr<int[],std_default_delete<int[]>>::get_deleter @ 0x13804
unsigned int __thiscall
std_unique_ptr<int[],std_default_delete<int[]>>::get_deleter
 (unique_ptr_int___std__default_delete_int____ *this)
{
 unsigned int uVar1;
 uVar1 = __uniq_ptr_impl<int,std_default_delete<int[]>>::_M_deleter
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 return uVar1;
}

// Function: std_default_delete<int[]>::operator() @ 0x13830
type __thiscall std_default_delete<int[]>::operator__(default_delete_int___ *this,int *param_1)
{
 if (param_1 != (int *)0x0) {
 operator_delete__(param_1);
 this = (default_delete_int___ *)param_1;
 }
 return (type)(int *)this;
}

// Function: std_unique_ptr<int[],std_default_delete<int[]>>::get @ 0x13864
unsigned int __thiscall
std_unique_ptr<int[],std_default_delete<int[]>>::get
 (unique_ptr_int___std__default_delete_int____ *this)
{
 unsigned int uVar1;
 uVar1 = __uniq_ptr_impl<int,std_default_delete<int[]>>::_M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 return uVar1;
}

// Function: std_tuple<int*,std_default_delete<int>>::tuple<true,true> @ 0x13890
tuple_int__std__default_delete_int__ * __thiscall
std_tuple<int*,std_default_delete<int>>::tuple_true_true_
 (tuple_int__std__default_delete_int__ *this)
{
 _Tuple_impl<0u,int*,std_default_delete<int>>::_Tuple_impl
 ((_Tuple_impl_0u_int__std__default_delete_int__ *)this);
 return this;
}

// Function: std_get<0u,int*,std_default_delete<int>> @ 0x138bc
type * std_get_0u_int__std__default_delete_int__(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___uniq_ptr_impl<int,std_default_delete<int>>::_M_deleter @ 0x138e8
type * __thiscall
std___uniq_ptr_impl<int,std_default_delete<int>>::_M_deleter
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 type *ptVar1;
 ptVar1 = get_1u_int__std__default_delete_int__((tuple *)this);
 return ptVar1;
}

// Function: std___uniq_ptr_impl<int,std_default_delete<int>>::_M_ptr @ 0x13914
unsigned int __thiscall
std___uniq_ptr_impl<int,std_default_delete<int>>::_M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)get_0u_int__std__default_delete_int__((tuple *)this);
 return *puVar1;
}

// Function: std_tuple<int*,std_default_delete<int[]>>::tuple<true,true> @ 0x13944
tuple_int__std__default_delete_int____ * __thiscall
std_tuple<int*,std_default_delete<int[]>>::tuple_true_true_
 (tuple_int__std__default_delete_int____ *this)
{
 _Tuple_impl<0u,int*,std_default_delete<int[]>>::_Tuple_impl
 ((_Tuple_impl_0u_int__std__default_delete_int____ *)this);
 return this;
}

// Function: std_get<0u,int*,std_default_delete<int[]>> @ 0x13970
type * std_get_0u_int__std__default_delete_int____(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__std__default_delete_int____((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___uniq_ptr_impl<int,std_default_delete<int[]>>::_M_deleter @ 0x1399c
type * __thiscall
std___uniq_ptr_impl<int,std_default_delete<int[]>>::_M_deleter
 (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 type *ptVar1;
 ptVar1 = get_1u_int__std__default_delete_int____((tuple *)this);
 return ptVar1;
}

// Function: std___uniq_ptr_impl<int,std_default_delete<int[]>>::_M_ptr @ 0x139c8
unsigned int __thiscall
std___uniq_ptr_impl<int,std_default_delete<int[]>>::_M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)get_0u_int__std__default_delete_int____((tuple *)this);
 return *puVar1;
}

// Function: std__Tuple_impl<0u,int*,std_default_delete<int>>::_Tuple_impl @ 0x139f8
_Tuple_impl_0u_int__std__default_delete_int__ * __thiscall
std__Tuple_impl<0u,int*,std_default_delete<int>>::_Tuple_impl
 (_Tuple_impl_0u_int__std__default_delete_int__ *this)
{
 _Tuple_impl<1u,std_default_delete<int>>::_Tuple_impl
 ((_Tuple_impl_1u_std__default_delete_int__ *)this);
 _Head_base<0u,int*,false>::_Head_base((_Head_base_0u_int__false_ *)this);
 return this;
}

// Function: std___get_helper<0u,int*,std_default_delete<int>> @ 0x13a2c
int ** std___get_helper_0u_int__std__default_delete_int__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl<0u,int*,std_default_delete<int>>::_M_head(param_1);
 return ppiVar1;
}

// Function: std_get<1u,int*,std_default_delete<int>> @ 0x13a54
type * std_get_1u_int__std__default_delete_int__(tuple *param_1)
{
 default_delete *pdVar1;
 pdVar1 = __get_helper_1u_std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}

// Function: std_get<0u,int*,std_default_delete<int>> @ 0x13a7c
type * std_get_0u_int__std__default_delete_int__(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std__Tuple_impl<0u,int*,std_default_delete<int[]>>::_Tuple_impl @ 0x13aa8
_Tuple_impl_0u_int__std__default_delete_int____ * __thiscall
std__Tuple_impl<0u,int*,std_default_delete<int[]>>::_Tuple_impl
 (_Tuple_impl_0u_int__std__default_delete_int____ *this)
{
 _Tuple_impl<1u,std_default_delete<int[]>>::_Tuple_impl
 ((_Tuple_impl_1u_std__default_delete_int____ *)this);
 _Head_base<0u,int*,false>::_Head_base((_Head_base_0u_int__false_ *)this);
 return this;
}

// Function: std___get_helper<0u,int*,std_default_delete<int[]>> @ 0x13adc
int ** std___get_helper_0u_int__std__default_delete_int____(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl<0u,int*,std_default_delete<int[]>>::_M_head(param_1);
 return ppiVar1;
}

// Function: std_get<1u,int*,std_default_delete<int[]>> @ 0x13b04
type * std_get_1u_int__std__default_delete_int____(tuple *param_1)
{
 default_delete *pdVar1;
 pdVar1 = __get_helper_1u_std__default_delete_int____((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}

// Function: std_get<0u,int*,std_default_delete<int[]>> @ 0x13b2c
type * std_get_0u_int__std__default_delete_int____(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__std__default_delete_int____((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std_forward<int*&> @ 0x13b58
int ** std_forward_int___(type *param_1)
{
 return (int **)param_1;
}

// Function: std__Tuple_impl<1u,std_default_delete<int>>::_Tuple_impl @ 0x13b7c
_Tuple_impl_1u_std__default_delete_int__ * __thiscall
std__Tuple_impl<1u,std_default_delete<int>>::_Tuple_impl
 (_Tuple_impl_1u_std__default_delete_int__ *this)
{
 _Head_base<1u,std_default_delete<int>,true>::_Head_base
 ((_Head_base_1u_std__default_delete_int__true_ *)this);
 return this;
}

// Function: std__Head_base<0u,int*,false>::_Head_base @ 0x13ba4
_Head_base_0u_int__false_ * __thiscall
std__Head_base<0u,int*,false>::_Head_base(_Head_base_0u_int__false_ *this)
{
 *(unsigned int *)this = 0;
 return this;
}

// Function: std__Tuple_impl<0u,int*,std_default_delete<int>>::_M_head @ 0x13bd4
unsigned int std__Tuple_impl<0u,int*,std_default_delete<int>>::_M_head(_Tuple_impl *param_1)
{
 unsigned int uVar1;
 uVar1 = _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
 return uVar1;
}

// Function: std___get_helper<1u,std_default_delete<int>> @ 0x13c00
default_delete * std___get_helper_1u_std__default_delete_int__(_Tuple_impl *param_1)
{
 default_delete *pdVar1;
 pdVar1 = (default_delete *)_Tuple_impl<1u,std_default_delete<int>>::_M_head(param_1);
 return pdVar1;
}

// Function: std___get_helper<0u,int*,std_default_delete<int>> @ 0x13c28
int ** std___get_helper_0u_int__std__default_delete_int__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl<0u,int*,std_default_delete<int>>::_M_head(param_1);
 return ppiVar1;
}

// Function: std__Tuple_impl<1u,std_default_delete<int[]>>::_Tuple_impl @ 0x13c50
_Tuple_impl_1u_std__default_delete_int____ * __thiscall
std__Tuple_impl<1u,std_default_delete<int[]>>::_Tuple_impl
 (_Tuple_impl_1u_std__default_delete_int____ *this)
{
 _Head_base<1u,std_default_delete<int[]>,true>::_Head_base
 ((_Head_base_1u_std__default_delete_int____true_ *)this);
 return this;
}

// Function: std__Tuple_impl<0u,int*,std_default_delete<int[]>>::_M_head @ 0x13c78
unsigned int std__Tuple_impl<0u,int*,std_default_delete<int[]>>::_M_head(_Tuple_impl *param_1)
{
 unsigned int uVar1;
 uVar1 = _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
 return uVar1;
}

// Function: std___get_helper<1u,std_default_delete<int[]>> @ 0x13ca4
default_delete * std___get_helper_1u_std__default_delete_int____(_Tuple_impl *param_1)
{
 default_delete *pdVar1;
 pdVar1 = (default_delete *)_Tuple_impl<1u,std_default_delete<int[]>>::_M_head(param_1);
 return pdVar1;
}

// Function: std___get_helper<0u,int*,std_default_delete<int[]>> @ 0x13ccc
int ** std___get_helper_0u_int__std__default_delete_int____(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl<0u,int*,std_default_delete<int[]>>::_M_head(param_1);
 return ppiVar1;
}

// Function: std__Head_base<0u,int*,false>::_Head_base<int*&> @ 0x13cf4
_Head_base_0u_int__false_ * __thiscall
std__Head_base<0u,int*,false>::_Head_base_int___(_Head_base_0u_int__false_ *this,int **param_1)
{
 int **ppiVar1;
 ppiVar1 = forward_int___((type *)param_1);
 *(int **)this = *ppiVar1;
 return this;
}

// Function: std__Head_base<1u,std_default_delete<int>,true>::_Head_base @ 0x13d30
_Head_base_1u_std__default_delete_int__true_ * __thiscall
std__Head_base<1u,std_default_delete<int>,true>::_Head_base
 (_Head_base_1u_std__default_delete_int__true_ *this)
{
 return this;
}

// Function: std__Head_base<0u,int*,false>::_M_head @ 0x13d54
_Head_base * std__Head_base<0u,int*,false>::_M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std__Tuple_impl<1u,std_default_delete<int>>::_M_head @ 0x13d78
unsigned int std__Tuple_impl<1u,std_default_delete<int>>::_M_head(_Tuple_impl *param_1)
{
 unsigned int uVar1;
 uVar1 = _Head_base<1u,std_default_delete<int>,true>::_M_head((_Head_base *)param_1);
 return uVar1;
}

// Function: std__Tuple_impl<0u,int*,std_default_delete<int>>::_M_head @ 0x13da0
unsigned int std__Tuple_impl<0u,int*,std_default_delete<int>>::_M_head(_Tuple_impl *param_1)
{
 unsigned int uVar1;
 uVar1 = _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
 return uVar1;
}

// Function: std__Head_base<1u,std_default_delete<int[]>,true>::_Head_base @ 0x13dcc
_Head_base_1u_std__default_delete_int____true_ * __thiscall
std__Head_base<1u,std_default_delete<int[]>,true>::_Head_base
 (_Head_base_1u_std__default_delete_int____true_ *this)
{
 return this;
}

// Function: std__Tuple_impl<1u,std_default_delete<int[]>>::_M_head @ 0x13df0
unsigned int std__Tuple_impl<1u,std_default_delete<int[]>>::_M_head(_Tuple_impl *param_1)
{
 unsigned int uVar1;
 uVar1 = _Head_base<1u,std_default_delete<int[]>,true>::_M_head((_Head_base *)param_1);
 return uVar1;
}

// Function: std__Tuple_impl<0u,int*,std_default_delete<int[]>>::_M_head @ 0x13e18
unsigned int std__Tuple_impl<0u,int*,std_default_delete<int[]>>::_M_head(_Tuple_impl *param_1)
{
 unsigned int uVar1;
 uVar1 = _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
 return uVar1;
}

// Function: std__Head_base<1u,std_default_delete<int>,true>::_M_head @ 0x13e44
_Head_base * std__Head_base<1u,std_default_delete<int>,true>::_M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std__Head_base<0u,int*,false>::_M_head @ 0x13e68
_Head_base * std__Head_base<0u,int*,false>::_M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std__Head_base<1u,std_default_delete<int[]>,true>::_M_head @ 0x13e8c
_Head_base * std__Head_base<1u,std_default_delete<int[]>,true>::_M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x13eb0
RTTIDerivedB * __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 *(char ***)this = &PTR__RTTIDerivedB_00014464;
 RTTIBase::_RTTIBase((RTTIBase *)this);
 return this;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x13eec
RTTIDerivedB * __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 _RTTIDerivedB(this);
 operator_delete(this,4);
 return this;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x13f20
RTTIDerivedA * __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 *(char ***)this = &PTR__RTTIDerivedA_00014478;
 RTTIBase::_RTTIBase((RTTIBase *)this);
 return this;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x13f5c
RTTIDerivedA * __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 _RTTIDerivedA(this);
 operator_delete(this,4);
 return this;
}

// Function: DiamondDerived::~DiamondDerived @ 0x13f90
DiamondDerived * __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 *(char ***)this = &PTR_func_000144a4;
 *(char ***)(this + 0x10) = &PTR_func_000144d8;
 *(char ***)(this + 8) = &PTR_func_000144bc;
 MiddleB::_MiddleB((MiddleB *)(this + 8));
 MiddleA::_MiddleA((MiddleA *)this);
 VirtualBase::_VirtualBase((VirtualBase *)(this + 0x10));
 return this;
}

// Function: DiamondDerived::~DiamondDerived @ 0x14028
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + -8);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x14030
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x14044
DiamondDerived * __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this);
 operator_delete(this,0x18);
 return this;
}

// Function: DiamondDerived::~DiamondDerived @ 0x14078
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + -8);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x14080
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x14094
MultiDerived * __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 *(char ***)this = &PTR_funcA_00014584;
 *(char ***)(this + 8) = &PTR_funcB_0001459c;
 BaseB::_BaseB((BaseB *)(this + 8));
 BaseA::_BaseA((BaseA *)this);
 return this;
}

// Function: MultiDerived::~MultiDerived @ 0x140f0
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 _MultiDerived(this + -8);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x140f8
MultiDerived * __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 _MultiDerived(this);
 operator_delete(this,0x10);
 return this;
}

// Function: MultiDerived::~MultiDerived @ 0x1412c
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 _MultiDerived(this + -8);
 return;
}

// Function: Derived::~Derived @ 0x14134
Derived * __thiscall Derived::_Derived(Derived *this)
{
 *(char ***)this = &PTR_virtual_func_000145d8;
 Base::_Base((Base *)this);
 return this;
}

// Function: Derived::~Derived @ 0x14170
Derived * __thiscall Derived::_Derived(Derived *this)
{
 _Derived(this);
 operator_delete(this,8);
 return this;
}

// Function: _fini @ 0x141a4
void _fini(void)
{
 return;
}

