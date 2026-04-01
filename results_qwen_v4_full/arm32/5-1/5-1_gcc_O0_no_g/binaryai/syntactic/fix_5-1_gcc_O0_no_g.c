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

// Define missing type
typedef unsigned char* type;
typedef unsigned int uint;

// Define CONCAT44 macro for concatenating two 32-bit values into 64-bit
#define CONCAT44(hi, lo) (((unsigned long long)(hi) << 32) | (unsigned int)(lo))

// Missing type definitions for template classes
struct _Tuple_impl;
struct _Head_base;
struct _Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__;
struct _Tuple_impl_1u_test_cpp_smart_ptr_____lambda_int___1__;
struct _Head_base_0u_int__false_;
struct _Head_base_1u_test_cpp_smart_ptr_____lambda_int___1__true_;
struct _lambda_int__1_;
struct _lambda_int___1_;
struct tuple_int__test_cpp_smart_ptr_____lambda_int___1__;
struct tuple;
struct unique_ptr;
struct __uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__;
struct __uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1__true_false_;
struct unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__;
struct _Tuple_impl_0u_int__std__default_delete_int__;
struct _Tuple_impl_1u_std__default_delete_int__;
struct _Head_base_1u_std__default_delete_int__true_;
struct tuple_int__std__default_delete_int__;
struct __uniq_ptr_impl_int_std__default_delete_int__;
struct __uniq_ptr_data_int_std__default_delete_int__true_true_;
struct unique_ptr_int_std__default_delete_int__;
struct __uniq_ptr_impl_int_std__default_delete_int____;
struct __uniq_ptr_data_int_std__default_delete_int____true_true_;
struct unique_ptr_int___std__default_delete_int____;
struct _Tuple_impl_0u_int__std__default_delete_int____;
struct _Tuple_impl_1u_std__default_delete_int____;
struct _Head_base_1u_std__default_delete_int____true_;
struct tuple_int__std__default_delete_int____;
struct default_delete;
struct default_delete_int_;
struct default_delete_int___;
struct __uniq_ptr_impl;
struct __uniq_ptr_data;
struct tuple_int__std__default_delete_int__true_true_;
struct tuple_int__std__default_delete_int_array_tuple_true_true_;

// Missing class type definitions
struct SimpleClass {
 int value;
 char name[32];
 char *padding;
};
struct LifecycleClass {
 int *data;
 uint size;
};
struct Base {
 void *vtable;
};
struct Derived {
 void *vtable;
 int value;
};
struct BaseA {
 void *vtable;
};
struct BaseB {
 void *vtable;
};
struct MultiDerived {
 void *vtable_a;
 void *vtable_b;
};
struct VirtualBase {
 void *vtable;
};
struct MiddleA {
 void *vtable;
 int offset;
 int value;
};
struct MiddleB {
 void *vtable;
 int offset;
 int value;
};
struct DiamondDerived {
 void *vtable;
 void *vtable_mid;
 void *vtable_virt;
 int value;
};
struct RTTIBase {
 void *vtable;
};
struct RTTIDerivedA {
 void *vtable;
};
struct RTTIDerivedB {
 void *vtable;
};
struct Point {
 int x;
 int y;
};
struct Container_int_ {
 int data[10];
 int size;
};
struct Container_double_ {
 double data[10];
 int size;
};
struct Init {
 int dummy;
};
struct type_info {
 void *vtable;
 char name[1];
};

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

// Function: <EXTERNAL>_operator.new @ 0x10a7c
void * operator_new(uint param_1)
{
 void *pvVar1;
 pvVar1 = operator_new(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>___aeabi_atexit @ 0x10a88
void __aeabi_atexit(void)
{
 __aeabi_atexit();
 return;
}

// Function: <EXTERNAL>___cxa_begin_catch @ 0x10a94
void __cxa_begin_catch(void)
{
 __cxa_begin_catch();
 return;
}

// Function: <EXTERNAL>___cxa_allocate_exception @ 0x10aa0
void __cxa_allocate_exception(void)
{
 __cxa_allocate_exception();
 return;
}

// Function: <EXTERNAL>_printf @ 0x10aac
int printf(char *__format,...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
}

// Function: <EXTERNAL>_puts @ 0x10ab8
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>_operator.delete @ 0x10ac4
void operator_delete(void *param_1,uint param_2)
{
 operator_delete(param_1,param_2);
 return;
}

// Function: <EXTERNAL>___libc_start_main @ 0x10ad0
void __libc_start_main(void)
{
 __libc_start_main();
 return;
}

// Function: <EXTERNAL>_operator.new[] @ 0x10adc
void * operator_new__(uint param_1)
{
 void *pvVar1;
 pvVar1 = operator_new__(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>_abort @ 0x10ae8
void abort(void)
{
 abort();
}

// Function: <EXTERNAL>_std_type_info_operator== @ 0x10af4
void std_type_info_operator__(type_info *this_ptr,type_info *param_1)
{
 operator__(this_ptr,param_1);
 return;
}

// Function: <EXTERNAL>___cxa_bad_typeid @ 0x10b00
void __cxa_bad_typeid(void)
{
 __cxa_bad_typeid();
 return;
}

// Function: <EXTERNAL>___stack_chk_fail @ 0x10b0c
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>___cxa_end_cleanup @ 0x10b18
void __cxa_end_cleanup(void)
{
 __cxa_end_cleanup();
 return;
}

// Function: <EXTERNAL>___dynamic_cast @ 0x10b24
void *__dynamic_cast(void *obj,void *target_type,void *derived_type,int flags)
{
 return __dynamic_cast(obj,target_type,derived_type,flags);
}

// Function: <EXTERNAL>_operator.delete[] @ 0x10b30
void operator_delete__(void *param_1)
{
 operator_delete__(param_1);
 return;
}

// Function: <EXTERNAL>___cxa_throw_bad_array_new_length @ 0x10b3c
void __cxa_throw_bad_array_new_length(void)
{
 __cxa_throw_bad_array_new_length();
 return;
}

// Function: <EXTERNAL>___cxa_rethrow @ 0x10b48
void __cxa_rethrow(void)
{
 __cxa_rethrow();
 return;
}

// Function: <EXTERNAL>_strlen @ 0x10b54
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>_std_ios_base_Init_Init @ 0x10b60
void std_ios_base_Init_Init(Init *this_ptr)
{
 std_ios_base_Init_Init(this_ptr);
 return;
}

// Function: <EXTERNAL>___aeabi_d2iz @ 0x10b6c
void __aeabi_d2iz(void)
{
 __aeabi_d2iz();
 return;
}

// Function: <EXTERNAL>___cxa_end_catch @ 0x10b78
void __cxa_end_catch(void)
{
 __cxa_end_catch();
 return;
}

// Function: <EXTERNAL>___gxx_personality_v0 @ 0x10b84
void __gxx_personality_v0(void)
{
 __gxx_personality_v0();
 return;
}

// Function: <EXTERNAL>___cxa_throw @ 0x10b90
void __cxa_throw(void)
{
 __cxa_throw();
}

// Function: <EXTERNAL>___aeabi_dcmpgt @ 0x10b9c
void __aeabi_dcmpgt(void)
{
 __aeabi_dcmpgt();
 return;
}

// Function: <EXTERNAL>_strncpy @ 0x10ba8
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: _start @ 0x10bcc
void processEntry _start(unsigned int param_1,unsigned int param_2)
{
 __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
 abort();
}

// Missing global variable declarations
void *PTR_virtual_func_000145f0;
void *PTR_virtual_func_000145d8;
void *PTR_funcA_000145c4;
void *PTR_funcB_000145b0;
void *PTR_funcA_00014584;
void *PTR_funcB_0001459c;
void *PTR_func_00014570;
void *PTR_func_000144a4;
void *PTR_func_000144d8;
void *PTR_func_000144bc;
void *PTR__RTTIBase_0001448c;
void *PTR__RTTIDerivedA_00014478;
void *PTR__RTTIDerivedB_00014464;
int instance_count;
int completed_0;
type_info RTTIDerivedA_typeinfo;
type_info RTTIDerivedB_typeinfo;
type_info RTTIBase_typeinfo;
type_info int_typeinfo;
void *std___ioinit;
void *__dso_handle;
void *__gmon_start__;

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
 SimpleClass_SimpleClass(aSStack_30,5,"Test");
 SimpleClass_setValue(aSStack_30,10);
 iVar1 = SimpleClass_getValue(aSStack_30);
 iVar2 = SimpleClass_compute(aSStack_30,3);
 iVar3 = SimpleClass_getClassID();
 if (local_c != 0) {
 __stack_chk_fail();
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
 LifecycleClass_LifecycleClass(aLStack_14,5);
 iVar1 = LifecycleClass_getData(aLStack_14,2);
 iVar2 = LifecycleClass_getInstanceCount();
 LifecycleClass__LifecycleClass(aLStack_14);
 iVar3 = LifecycleClass_getInstanceCount();
 if (local_c != 0) {
 __stack_chk_fail();
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
 Derived_Derived(aDStack_1c,3);
 local_34 = Base_virtual_func((Base *)&local_38,5);
 local_30 = Derived_virtual_func(aDStack_1c,5);
 local_2c = &local_38;
 local_28 = aDStack_1c;
 local_24 = call_virtual_func((Base *)local_2c,5);
 local_20 = call_virtual_func((Base *)local_28,5);
 iVar2 = local_34 + local_30 + local_24 + local_20;
 Derived__Derived(aDStack_1c);
 uVar1 = Base__Base((Base *)&local_38);
 if (local_14 != 0) {
 __stack_chk_fail();
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
 MultiDerived_MultiDerived((MultiDerived *)&local_24);
 local_20 = 100;
 local_18 = 200;
 iVar1 = (**local_24)(&local_24);
 iVar2 = (**local_1c)(&local_1c);
 uVar3 = MultiDerived__MultiDerived((MultiDerived *)&local_24);
 if (local_14 == 0) {
 return iVar1 + iVar2 + (uint)(&local_24 != &local_1c);
 }
 __stack_chk_fail();
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
 DiamondDerived_DiamondDerived(aDStack_2c);
 local_18 = 0x32;
 iVar1 = (**local_1c)(&local_1c);
 local_18 = 100;
 iVar2 = (**local_1c)(&local_1c);
 uVar3 = DiamondDerived__DiamondDerived(aDStack_2c);
 if (local_14 != 0) {
 __stack_chk_fail();
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
 Point_Point(aPStack_24,1,2);
 Point_Point(aPStack_1c,3,4);
 Point_operator_((Point *)&local_14,aPStack_24);
 cVar1 = Point_operator__(aPStack_24,aPStack_1c);
 uVar2 = Point_operator__((Point *)&local_14);
 if (cVar1 == '\0') {
 iVar3 = 10;
 }
 else {
 iVar3 = 0;
 }
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return iVar3 + local_14 + local_10;
}

// Function: test_cpp_template_func @ 0x11250
int test_cpp_template_func(void)
{
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 unsigned int extraout_r1;
 unsigned int in_stack_ffffffd8;
 int in_stack_ffffffdc;
 int iVar4;
 int in_stack_ffffffe0;
 int iVar5;
 iVar1 = template_max_int_(3,7);
 uVar2 = 0;
 template_max_double_
 ((double)CONCAT44(in_stack_ffffffdc,in_stack_ffffffd8),
 (double)CONCAT44(iVar1,in_stack_ffffffe0));
 iVar4 = 10;
 iVar5 = 0x14;
 template_swap_int_((int *)&stack0xffffffdc,(int *)&stack0xffffffe0);
 iVar3 = __aeabi_d2iz(uVar2,extraout_r1);
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
 Container_int__Container(aCStack_9c);
 Container_int__push(aCStack_9c,10);
 Container_int__push(aCStack_9c,0x14);
 Container_int__push(aCStack_9c,0x1e);
 iVar1 = Container_int__get(aCStack_9c,0);
 iVar2 = Container_int__getSize(aCStack_9c);
 Container_double__Container(aCStack_70);
 Container_double__push((double)CONCAT44(iVar2,iVar1));
 uVar4 = Container_double__get(aCStack_70,0);
 iVar3 = __aeabi_d2iz((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
 if (local_14 != 0) {
 __stack_chk_fail();
 }
 return iVar1 + iVar2 + iVar3;
}

// Function: test_cpp_lambda_lambda_int_1_operator @ 0x1143c
int test_cpp_lambda_lambda_int_1_operator_(void *this_ptr,int param_1)
{
 int *pval = *(int **)((char *)this_ptr + 4);
 *pval = *pval + 5;
 return *(int *)this_ptr * param_1 + *pval;
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
 local_1c = test_cpp_lambda_lambda_int_1_operator_((_lambda_int__1_ *)&local_14,3);
 local_18 = 0x1e;
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return local_1c + 0x1e;
}

// Function: test_cpp_exception @ 0x1152c
unsigned int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,(void*)&int_typeinfo,0);
 return 0;
}

// Function: test_cpp_smart_ptr_lambda_int_1_operator @ 0x1169c
void
test_cpp_smart_ptr_lambda_int_1_operator_(void *this_ptr,int *param_1)
{
 if (param_1 != (int *)0x0) {
 *param_1 = -1;
 operator_delete(param_1,4);
 }
 return;
}

// Function: test_cpp_smart_ptr @ 0x116e0
int test_cpp_smart_ptr(void)
{
 int *piVar1;
 unsigned int *puVar2;
 unsigned char *ptVar3;
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
  std_unique_ptr_int_std_default_delete_int_unique_ptr_std_default_delete_int_void_
 (auStack_30,piVar1);
  puVar2 = (unsigned int *)std_unique_ptr_int_std_default_delete_int_operator_(auStack_30);
 *puVar2 = 200;
  ptVar3 = (unsigned char *)std_move_unique_ptr_int_std_default_delete_int_((unique_ptr *)auStack_30);
  std_unique_ptr_int_std_default_delete_int_unique_ptr(auStack_2c,(unique_ptr *)ptVar3);
  piVar1 = (int *)std_unique_ptr_int_std_default_delete_int_operator_(auStack_2c);
 local_20 = *piVar1;
 piVar1 = (int *)operator_new__(0x14);
 *piVar1 = 1;
 piVar1[1] = 2;
 piVar1[2] = 3;
 piVar1[3] = 4;
 piVar1[4] = 5;
  std_unique_ptr_int_array_std_default_delete_int_array_unique_ptr_int_std_default_delete_int_array_void_bool_(auStack_28,piVar1);
  piVar1 = (int *)std_unique_ptr_int_array_std_default_delete_int_array_operator__(auStack_28,2);
 local_1c = *piVar1;
 piVar1 = (int *)operator_new(4);
 *piVar1 = 500;
 std_unique_ptr_int_test_cpp_smart_ptr_lambda_unique_ptr__lambda_int___1__void_
 (auStack_24,piVar1,a_Stack_34);
 piVar1 = (int *)std_unique_ptr_int_test_cpp_smart_ptr_lambda_operator_(auStack_24)
 ;
 local_18 = *piVar1;
 iVar5 = local_20 + local_1c + local_18;
 std_unique_ptr_int_test_cpp_smart_ptr_lambda__unique_ptr(auStack_24);
  std_unique_ptr_int_array_std_default_delete_int_array__unique_ptr(auStack_28);
  std_unique_ptr_int_std_default_delete_int__unique_ptr(auStack_2c);
  uVar4 = std_unique_ptr_int_std_default_delete_int__unique_ptr(auStack_30);
 if (local_14 != 0) {
 __stack_chk_fail();
 }
 return iVar5;
}

// Function: test_cpp_rtti @ 0x118c4
int test_cpp_rtti(void)
{
 int *this_ptr;
 int *this_00;
 int iVar1;
 char *__s;
 size_t sVar2;
 int local_24;
 this_ptr = (int *)operator_new(4);
 *this_ptr = 0;
 RTTIDerivedA_RTTIDerivedA((RTTIDerivedA *)this_ptr);
 this_00 = (int *)operator_new(4);
 *this_00 = 0;
 RTTIDerivedB_RTTIDerivedB((RTTIDerivedB *)this_00);
 local_24 = 0;
 if (this_ptr == (int *)0x0) {
 __cxa_bad_typeid();
LAB_00011954:
 local_24 = 10;
 }
 else {
 iVar1 = std_type_info_operator__
 (*(type_info **)(*this_ptr + -4),(type_info *)&RTTIDerivedA_typeinfo);
 if (iVar1 != 0) goto LAB_00011954;
 }
 if (this_00 == (int *)0x0) {
 __cxa_bad_typeid();
LAB_00011994:
 local_24 = local_24 + 0x14;
 }
 else {
 iVar1 = std_type_info_operator__
 (*(type_info **)(*this_00 + -4),(type_info *)&RTTIDerivedB_typeinfo);
 if (iVar1 != 0) goto LAB_00011994;
 }
 if (this_ptr == (int *)0x0) {
 iVar1 = 0;
 }
 else {
 iVar1 = __dynamic_cast(this_ptr,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 }
 if (iVar1 != 0) {
 iVar1 = RTTIDerivedA_derivedA_data();
 local_24 = local_24 + iVar1;
 }
 if (this_00 == (int *)0x0) {
 iVar1 = 0;
 }
 else {
 iVar1 = __dynamic_cast(this_00,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 }
 if (iVar1 != 0) {
 iVar1 = RTTIDerivedB_derivedB_data();
 local_24 = local_24 + iVar1;
 }
 if (this_ptr == (int *)0x0) {
 __cxa_bad_typeid();
 }
 else {
 __s = (char *)std_type_info_name(*(type_info **)(*this_ptr + -4));
 sVar2 = strlen(__s);
 local_24 = sVar2 + local_24;
 if (this_ptr == (int *)0x0) goto LAB_00011aa0;
 }
 (**(void **)(*this_ptr + 4))(this_ptr);
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
 printf(&DAT_00014290,uVar1);
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

// Function: std_uniq_ptr_data_impl @ 0x11c30
__uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1__true_false_ *
std_uniq_ptr_data_impl
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *this_ptr,int *param_1
 ,void *param_2)
{
 __uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1____uniq_ptr_impl
 (this_ptr,param_1,param_2);
 return (__uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1__true_false_ *)this_ptr;
}

// Function: std_unique_ptr_constructor @ 0x11c6c
unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *
std_unique_ptr_constructor
 (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *this_ptr,int *param_1,
 void *param_2)
{
 std_uniq_ptr_data_impl
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *)this_ptr,param_1,
 param_2);
 return (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *)this_ptr;
}

// Function: std_unique_ptr_destructor @ 0x11ca8
unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *
std_unique_ptr_destructor
 (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *this_ptr)
{
 int **ppiVar1;
 _lambda_int___1_ *this_00;
 int **ppiVar2;
 ppiVar1 = (int **)std_uniq_ptr_impl_M_ptr((void *)this_ptr);
 if (ppiVar1 != (int **)0x0 && *ppiVar1 != (int *)0x0) {
 this_00 = (_lambda_int___1_ *)std_unique_ptr_get_deleter((void *)this_ptr);
 ppiVar2 = (int **)std_move_int_(ppiVar1);
 test_cpp_smart_ptr_lambda_int_1_operator_(this_00,*ppiVar2);
 }
 if (ppiVar1 != (int **)0x0) *ppiVar1 = (int *)0x0;
 return (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *)this_ptr;
}

// Function: std_unique_ptr_deref @ 0x11d1c
unsigned int
std_unique_ptr_deref
 (void *this_ptr)
{
 unsigned int uVar1;
 uVar1 = std_unique_ptr_get((unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *)this_ptr);
 return uVar1;
}

// Function: std_uniq_ptr_impl_constructor @ 0x11d4c
__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *
std_uniq_ptr_impl_constructor
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *this_ptr,int *param_1,
 void *param_2)
{
 void *p_Var1;
 int *local_18;
 void *local_14;
 local_18 = param_1;
 local_14 = (void *)this_ptr;
 p_Var1 = forward_test_cpp_smart_ptr_____lambda_int___1_const__((type *)param_2);
 tuple_int_test_cpp_smart_ptr_lambda_constructor
 ((tuple *)this_ptr,&local_18,p_Var1);
 return (__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *)local_14;
}

// Function: std_uniq_ptr_impl_M_ptr @ 0x11d94
int* std_uniq_ptr_impl_M_ptr(__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *this_ptr)
{
 int *ptVar1;
 ptVar1 = get_0u_int__test_cpp_smart_ptr_____lambda_int___1__((tuple *)this_ptr);
 return ptVar1;
}



// Function: get_0u_int__test_cpp_smart_ptr_____lambda_int___1__ @ 0x11db0
int* get_0u_int__test_cpp_smart_ptr_____lambda_int___1__(tuple *param_1)
{
 int *ptVar1;
 ptVar1 = (int*)_Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__M_head((void *)param_1);
 return ptVar1;
}



// Missing function declarations
int* get_0u_int__test_cpp_smart_ptr_____lambda_int___1__(void *param_1);
void* _Head_base_0u_int_false_M_head(void *param_1);
void* _Head_base_1u_test_cpp_smart_ptr_lambda_true_M_head(void *param_1);
void* _Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_M_head(void *param_1);
void* _Tuple_impl_1u_test_cpp_smart_ptr_lambda_M_head(void *param_1);
void* _Head_base_0u_int_false__M_head(void *param_1);
void* _Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__M_head(void *param_1);
void* _Tuple_impl_1u_test_cpp_smart_ptr_____lambda_int___1__M_head(void *param_1);
void* _Head_base_1u_test_cpp_smart_ptr_____lambda_int___1__true_M_head(void *param_1);
void* _Head_base_1u_std_default_delete_int_true_M_head(void *param_1);
void* _Head_base_1u_std_default_delete_int_array_true_M_head(void *param_1);
void* _Tuple_impl_0u_int_std_default_delete_int_M_head(void *param_1);
void* _Tuple_impl_1u_std_default_delete_int_M_head(void *param_1);
void* _Tuple_impl_0u_int_std_default_delete_int_array_M_head(void *param_1);
void* _Tuple_impl_1u_std_default_delete_int_array_M_head(void *param_1);
void* _Head_base_0u_int_false_Head_base(void *param_1);
void* _Head_base_1u_std_default_delete_int_true_Head_base(void *param_1);
void* _Head_base_1u_std_default_delete_int_array_true_Head_base(void *param_1);
void* _Tuple_impl_0u_int_std_default_delete_int_Tuple_impl(void *param_1);
void* _Tuple_impl_1u_std_default_delete_int_Tuple_impl(void *param_1);
void* _Tuple_impl_0u_int_std_default_delete_int_array_Tuple_impl(void *param_1);
void* _Tuple_impl_1u_std_default_delete_int_array_Tuple_impl(void *param_1);
void* _M_ptr(void *param_1);
void* _M_deleter(void *param_1);
void* get_deleter(void *param_1);
int** move_int___(void *param_1);
void default_delete_int_operator__(void *param_1,int *param_2);
void default_delete_int_array_operator__(void *param_1,int *param_2);
int* get(void *param_1);
void* move_std_tuple_int_std_default_delete_int(void *param_1);
int** __get_helper_0u_int_std_default_delete_int(void *param_1);
void* __get_helper_1u_std_default_delete_int(void *param_1);
int** __get_helper_0u_int_std_default_delete_int_array(void *param_1);
void* __get_helper_1u_std_default_delete_int_array(void *param_1);
int** get_0u_int__std__default_delete_int__(void *param_1);
void* get_1u_int__std__default_delete_int__(void *param_1);
int** get_0u_int__std__default_delete_int____(void *param_1);
void* get_1u_int__std__default_delete_int____(void *param_1);
int** get_0u_int__std_default_delete_int_array(void *param_1);
int** forward_int_(void *param_1);
int** forward_int___(type *param_1);
void* forward_test_cpp_smart_ptr_____lambda_int___1_const__(type *param_1);
void* _Base(void *param_1);
void* _BaseA(void *param_1);
void* _BaseB(void *param_1);
void* _VirtualBase(void *param_1);
void* _MiddleA(void *param_1);
void* _MiddleB(void *param_1);
void* _DiamondDerived(void *param_1);
void* _MultiDerived(void *param_1);
void* _Derived(void *param_1);
void* _RTTIBase(void *param_1);
void* _RTTIDerivedA(void *param_1);
void* _RTTIDerivedB(void *param_1);
void funcB(void);
char* std_type_info_name(void *param_1);
int operator__(void *param_1,void *param_2);
int ** std_get_helper_0u_int_test_cpp_smart_ptr_lambda_(_Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__ *param_1);

// Function: std_unique_ptr_get_deleter @ 0x11dc0
unsigned int std_unique_ptr_get_deleter(unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *this_ptr)
{
 unsigned int uVar1;
 uVar1 = (unsigned int)(uintptr_t)std_uniq_ptr_impl_M_deleter((__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *)this_ptr);
 return uVar1;
}

// Function: std_unique_ptr_get @ 0x11dec
unsigned int std_unique_ptr_get(unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *this_ptr)
{
 unsigned int uVar1;
 uVar1 = std_uniq_ptr_impl_M_ptr((__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *)this_ptr);
 return uVar1;
}

// Function: std_forward @ 0x11e18
void* std_forward(void* param_1)
{
 return param_1;
}

// Function: std_tuple_tuple @ 0x11e3c
tuple_int__test_cpp_smart_ptr_____lambda_int___1__ *
std_tuple_tuple
 (tuple_int__test_cpp_smart_ptr_____lambda_int___1__ *this_ptr,int **param_1,
 type *param_2)
{
 int **ppiVar1;
 type *p_Var2;
 ppiVar1 = forward_int___((type *)param_1);
 p_Var2 = forward_test_cpp_smart_ptr_____lambda_int___1_const__((type *)param_2);
 _Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1___Tuple_impl_int____lambda_int___1_const__void_
 ((void *)this_ptr,ppiVar1,p_Var2);
 return this_ptr;
}

// Function: std_get_0u @ 0x11e90
int** std_get_0u_int__test_cpp_smart_ptr_____lambda_int___1__
 (tuple_int__test_cpp_smart_ptr_____lambda_int___1__ *param_1,void *param_2)
{
 int **ppiVar1;
 ppiVar1 = std_get_helper_0u_int_test_cpp_smart_ptr_lambda_((_Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__ *)param_1);
 return ppiVar1;
}

// Function: std_uniq_ptr_impl_M_deleter @ 0x11ebc
void* std_uniq_ptr_impl_M_deleter(__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *this_ptr)
{
 void *ptVar1;
 ptVar1 = get_1u_int__test_cpp_smart_ptr_____lambda_int___1__((tuple *)this_ptr);
 return ptVar1;
}

// Function: std_uniq_ptr_impl_M_ptr @ 0x11ee8
unsigned int std_uniq_ptr_impl_M_ptr(__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *this_ptr)
{
 int *piVar1;
 piVar1 = get_0u_int__test_cpp_smart_ptr_____lambda_int___1__((tuple *)this_ptr);
 return (unsigned int)(uintptr_t)piVar1;
}

// Function: std_Tuple_impl_0u_Tuple_impl @ 0x11f18
_Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__ *
std_Tuple_impl_0u_Tuple_impl
 (_Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__ *this_ptr,int **param_1,
 void *param_2)
{
 int **ppiVar1;
 forward_test_cpp_smart_ptr_____lambda_int___1_const__((type *)param_2);
 _Tuple_impl_1u_test_cpp_smart_ptr_____lambda_int___1___Tuple_impl((_Tuple_impl_1u_test_cpp_smart_ptr_____lambda_int___1__ *)this_ptr);
 ppiVar1 = forward_int___((type *)param_1);
 _Head_base_0u_int__false__Head_base_int___((_Head_base_0u_int__false_ *)this_ptr,ppiVar1);
 return this_ptr;
}

// Function: std_get_helper_0u @ 0x11f74
int ** std_get_helper_0u_int__test_cpp_smart_ptr_____lambda_int___1__(_Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__ *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__M_head
 ((void *)param_1);
 return ppiVar1;
}

// Function: get_1u_int__test_cpp_smart_ptr_____lambda_int___1__ @ 0x11f9c
void* get_1u_int__test_cpp_smart_ptr_____lambda_int___1__
 (tuple_int__test_cpp_smart_ptr_____lambda_int___1__ *param_1)
{
 void *p_Var1;
 p_Var1 = _Tuple_impl_1u_test_cpp_smart_ptr_____lambda_int___1__M_head((void *)param_1);
 return p_Var1;
}

// Function: get_0u_int__test_cpp_smart_ptr_____lambda_int___1___2 @ 0x11fc4
int** get_0u_int__test_cpp_smart_ptr_____lambda_int___1___2
 (tuple_int__test_cpp_smart_ptr_____lambda_int___1__ *param_1)
{
 int **ppiVar1;
 ppiVar1 = std_get_helper_0u_int_test_cpp_smart_ptr_lambda_((_Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__ *)param_1);
 return ppiVar1;
}

// Function: std_Tuple_impl_1u_Tuple_impl @ 0x11ff0
_lambda_int___1_ *
std_Tuple_impl_1u_Tuple_impl(_Tuple_impl_1u_test_cpp_smart_ptr_____lambda_int___1__ *this_ptr)
{
 _Head_base_1u_test_cpp_smart_ptr_____lambda_int___1__true_Head_base(this_ptr);
 return this_ptr;
}

// Function: std_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_M_head @ 0x12020
unsigned int
std_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_M_head(_Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__ *this_ptr)
{
 unsigned int uVar1;
 uVar1 = (unsigned int)(uintptr_t)_Head_base_0u_int__false_M_head(this_ptr);
 return uVar1;
}

// Function: std_get_helper_1u_test_cpp_smart_ptr_lambda @ 0x1204c
_lambda_int___1_ *
std_get_helper_1u_test_cpp_smart_ptr_lambda_(_Tuple_impl_1u_test_cpp_smart_ptr_____lambda_int___1__ *param_1)
{
 _lambda_int___1_ *p_Var1;
 p_Var1 = (_lambda_int___1_ *)_Tuple_impl_1u_test_cpp_smart_ptr_____lambda_int___1__M_head
 ((void *)param_1);
 return p_Var1;
}

// Function: std_get_helper_0u_int_test_cpp_smart_ptr_lambda @ 0x12074
int ** std_get_helper_0u_int_test_cpp_smart_ptr_lambda_(_Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__ *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)(uintptr_t)_Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__M_head
 ((void *)param_1);
 return ppiVar1;
}

// Function: std_Head_base_1u_test_cpp_smart_ptr_lambda_true_Head_base @ 0x1209c
void *
std_Head_base_1u_test_cpp_smart_ptr_lambda_true_Head_base
 (_Head_base_1u_test_cpp_smart_ptr_____lambda_int___1__true_ *this_ptr)
{
 return this_ptr;
}

// Function: std_Tuple_impl_1u_test_cpp_smart_ptr_lambda_M_head @ 0x120c4
unsigned int
std_Tuple_impl_1u_test_cpp_smart_ptr_lambda_M_head(_Tuple_impl_1u_test_cpp_smart_ptr_____lambda_int___1__ *this_ptr)
{
 unsigned int uVar1;
 uVar1 = (unsigned int)(uintptr_t)_Head_base_1u_test_cpp_smart_ptr_____lambda_int___1__true_M_head(this_ptr);
 return uVar1;
}

// Function: std_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_M_head_2 @ 0x120ec
unsigned int
std_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_M_head_2(_Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__ *this_ptr)
{
 unsigned int uVar1;
 uVar1 = (unsigned int)(uintptr_t)_Head_base_0u_int__false__M_head(this_ptr);
 return uVar1;
}

// Function: std_Head_base_1u_test_cpp_smart_ptr_lambda_true_M_head @ 0x12118
void *
std_Head_base_1u_test_cpp_smart_ptr_lambda_true_M_head(_Head_base_1u_test_cpp_smart_ptr_____lambda_int___1__true_ *this_ptr)
{
 return this_ptr;
}

// Function: __static_initialization_and_destruction_0 @ 0x1213c
int __static_initialization_and_destruction_0(int param_1,int param_2)
{
 if ((param_1 == 1) && (param_2 == 0xffff)) {
 std_ios_base_Init_Init((Init *)&std___ioinit);
 param_1 = __aeabi_atexit(&std___ioinit,std_ios_base_Init__Init,&__dso_handle);
 }
 return param_1;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x121a0
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 __static_initialization_and_destruction_0(1,0xffff);
 return;
}

// Function: std_type_info_name @ 0x121bc
char* std_type_info_name(type_info *this_ptr)
{
 return this_ptr->name;
}

// Function: SimpleClass_SimpleClass @ 0x12208
SimpleClass * SimpleClass_SimpleClass(SimpleClass *this_ptr,int param_2,char *param_3)
{
 *(int *)this_ptr = param_2;
 strncpy((char *)((char *)this_ptr + 4),param_3,0x1f);
 *(char **)((char *)this_ptr + 0x23) = (char *)0x0;
 return this_ptr;
}

// Function: SimpleClass_getValue @ 0x12260
unsigned int SimpleClass_getValue(SimpleClass *this_ptr)
{
 return *(unsigned int *)this_ptr;
}

// Function: SimpleClass_setValue @ 0x12288
SimpleClass * SimpleClass_setValue(SimpleClass *this_ptr,int param_2)
{
 *(int *)this_ptr = param_2;
 return this_ptr;
}

// Function: SimpleClass_compute @ 0x122b8
int SimpleClass_compute(SimpleClass *this_ptr,int param_2)
{
 size_t sVar1;
 int iVar2;
 iVar2 = *(int *)this_ptr;
 sVar1 = strlen((char *)((char *)this_ptr + 4));
 return param_2 * iVar2 + sVar1;
}

// Function: SimpleClass_getClassID @ 0x12304
unsigned int SimpleClass_getClassID(void)
{
 return 0x1234;
}

// Function: LifecycleClass_LifecycleClass @ 0x12324
LifecycleClass * LifecycleClass_LifecycleClass(LifecycleClass *this_ptr,uint param_2)
{
 void *pvVar1;
 uint local_c;
 int *data_ptr;
 *(uint *)((char *)this_ptr + 4) = param_2;
 if (param_2 < 0x1fffffff) {
 pvVar1 = operator_new__(param_2 << 2);
 *(void **)this_ptr = pvVar1;
 data_ptr = (int *)pvVar1;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
LAB_0001237c:
 data_ptr[local_c] = local_c * 10;
 }
 instance_count = instance_count + 1;
 return this_ptr;
 }
 __cxa_throw_bad_array_new_length();
 goto LAB_0001237c;
}

// Function: LifecycleClass_~LifecycleClass @ 0x123f4
LifecycleClass * LifecycleClass__LifecycleClass(LifecycleClass *this_ptr)
{
 void *data_ptr;
 data_ptr = *(void **)this_ptr;
 if (data_ptr != (void *)0x0) {
 operator_delete__(data_ptr);
 }
 instance_count = instance_count + -1;
 return this_ptr;
}

// Function: LifecycleClass_getData @ 0x1244c
unsigned int LifecycleClass_getData(LifecycleClass *this_ptr,uint param_2)
{
 unsigned int uVar1;
 int *data_ptr;
 if (param_2 < *(uint *)((char *)this_ptr + 4)) {
 data_ptr = (int *)*(void **)this_ptr;
 uVar1 = (unsigned int)data_ptr[param_2];
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}

// Function: LifecycleClass_getInstanceCount @ 0x124a4
unsigned int LifecycleClass_getInstanceCount(void)
{
 return instance_count;
}

// Function: Base_virtual_func @ 0x124c8
int Base_virtual_func(Base *this_ptr,int param_2)
{
 return param_2 + 1;
}

// Function: Base_getName @ 0x124f4
char * Base_getName(void)
{
 return &DAT_0001425c;
}

// Function: Base_~Base @ 0x1251c
Base * Base__Base(Base *this_ptr)
{
 *(void **)this_ptr = PTR_virtual_func_000145f0;
 return this_ptr;
}

// Function: Base_~Base_deleting @ 0x12550
Base * Base__Base_deleting(Base *this_ptr)
{
 _Base(this_ptr);
 operator_delete(this_ptr,4);
 return this_ptr;
}

// Function: Base_Base @ 0x12584
Base * Base_Base(Base *this_ptr)
{
 *(void **)this_ptr = PTR_virtual_func_000145f0;
 return this_ptr;
}

// Function: Derived_Derived @ 0x125b8
Derived * Derived_Derived(Derived *this_ptr,int param_2)
{
 Base_Base((Base *)this_ptr);
 *(void **)this_ptr = PTR_virtual_func_000145d8;
 *(int *)((char *)this_ptr + 4) = param_2;
 return this_ptr;
}

// Function: Derived_virtual_func @ 0x12604
int Derived_virtual_func(Derived *this_ptr,int param_2)
{
 return param_2 * *(int *)((char *)this_ptr + 4);
}

// Function: Derived_getName @ 0x12638
char * Derived_getName(void)
{
 return "Derived";
}

// Function: BaseA_funcA @ 0x12660
unsigned int BaseA_funcA(void)
{
 return 10;
}

// Function: BaseA_~BaseA @ 0x12684
BaseA * BaseA__BaseA(BaseA *this_ptr)
{
 *(void **)this_ptr = PTR_funcA_000145c4;
 return this_ptr;
}

// Function: BaseA_~BaseA_deleting @ 0x126b8
BaseA * BaseA__BaseA_deleting(BaseA *this_ptr)
{
 _BaseA(this_ptr);
 operator_delete(this_ptr,8);
 return this_ptr;
}

// Function: BaseB_funcB @ 0x126ec
unsigned int BaseB_funcB(void)
{
 return 0x14;
}

// Function: BaseB_~BaseB @ 0x12710
BaseB * BaseB__BaseB(BaseB *this_ptr)
{
 *(void **)this_ptr = PTR_funcB_000145b0;
 return this_ptr;
}

// Function: BaseB_~BaseB_deleting @ 0x12744
BaseB * BaseB__BaseB_deleting(BaseB *this_ptr)
{
 _BaseB(this_ptr);
 operator_delete(this_ptr,8);
 return this_ptr;
}

// Function: MultiDerived_funcA @ 0x12778
unsigned int MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived_funcB @ 0x1279c
unsigned int MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived_funcB @ 0x127c0
void MultiDerived_funcB(MultiDerived *this_ptr)
{
 funcB();
 return;
}

// Function: BaseA_BaseA @ 0x127c8
BaseA * BaseA_BaseA(BaseA *this_ptr)
{
 *(void **)this_ptr = PTR_funcA_000145c4;
 return this_ptr;
}

// Function: BaseB_BaseB @ 0x127fc
BaseB * BaseB_BaseB(BaseB *this_ptr)
{
 *(void **)this_ptr = PTR_funcB_000145b0;
 return this_ptr;
}

// Function: MultiDerived_MultiDerived @ 0x12830
MultiDerived * MultiDerived_MultiDerived(MultiDerived *this_ptr)
{
 BaseA_BaseA((BaseA *)this_ptr);
 BaseB_BaseB((BaseB *)((char *)this_ptr + 8));
 *(void **)this_ptr = PTR_funcA_00014584;
 *(void **)((char *)this_ptr + 8) = PTR_funcB_0001459c;
 return this_ptr;
}

// Function: VirtualBase_func @ 0x1288c
unsigned int VirtualBase_func(void)
{
 return 100;
}

// Function: VirtualBase_~VirtualBase @ 0x128b0
VirtualBase * VirtualBase__VirtualBase(VirtualBase *this_ptr)
{
 *(void **)this_ptr = PTR_func_00014570;
 return this_ptr;
}

// Function: VirtualBase_~VirtualBase_deleting @ 0x128e4
VirtualBase * VirtualBase__VirtualBase_deleting(VirtualBase *this_ptr)
{
 _VirtualBase(this_ptr);
 operator_delete(this_ptr,8);
 return this_ptr;
}

// Function: MiddleA_func @ 0x12918
int MiddleA_func(MiddleA *this_ptr)
{
 return *(int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0x96;
}

// Function: MiddleA_func @ 0x1295c
void MiddleA_func(MiddleA *this_ptr)
{
 MiddleA_func((MiddleA *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc)));
 return;
}

// Function: MiddleB_func @ 0x12970
int MiddleB_func(MiddleB *this_ptr)
{
 return *(int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 200;
}

// Function: MiddleB_func @ 0x129b4
void MiddleB_func(MiddleB *this_ptr)
{
 MiddleB_func((MiddleB *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc)));
 return;
}

// Function: DiamondDerived_func @ 0x129c8
int DiamondDerived_func(DiamondDerived *this_ptr)
{
 return *(int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived_func @ 0x12a0c
void DiamondDerived_func(DiamondDerived *this_ptr)
{
 DiamondDerived_func((DiamondDerived *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc)));
 return;
}

// Function: DiamondDerived_func @ 0x12a20
void DiamondDerived_func(DiamondDerived *this_ptr)
{
 DiamondDerived_func((DiamondDerived *)((char *)this_ptr + -8));
 return;
}

// Function: VirtualBase_VirtualBase @ 0x12a28
VirtualBase * VirtualBase_VirtualBase(VirtualBase *this_ptr)
{
 *(void **)this_ptr = PTR_func_00014570;
 return this_ptr;
}

// Function: MiddleA_MiddleA @ 0x12a5c
MiddleA * MiddleA_MiddleA(MiddleA *this_ptr)
{
 unsigned int *in_r1;
 *(unsigned int *)this_ptr = *in_r1;
 *(unsigned int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc)) = in_r1[1];
 return this_ptr;
}

// Function: MiddleA_~MiddleA @ 0x12abc
MiddleA * MiddleA__MiddleA(MiddleA *this_ptr)
{
 unsigned int *in_r1 = (unsigned int *)0x0;
 *(unsigned int *)this_ptr = *in_r1;
 *(unsigned int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc)) = in_r1[1];
 return this_ptr;
}

// Function: MiddleB_MiddleB @ 0x12b1c
MiddleB * MiddleB_MiddleB(MiddleB *this_ptr)
{
 unsigned int *in_r1;
 *(unsigned int *)this_ptr = *in_r1;
 *(unsigned int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc)) = in_r1[1];
 return this_ptr;
}

// Function: MiddleB_~MiddleB @ 0x12b7c
MiddleB * MiddleB__MiddleB(MiddleB *this_ptr)
{
 unsigned int *in_r1 = (unsigned int *)0x0;
 *(unsigned int *)this_ptr = *in_r1;
 *(unsigned int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc)) = in_r1[1];
 return this_ptr;
}

// Function: DiamondDerived_DiamondDerived @ 0x12bdc
DiamondDerived * DiamondDerived_DiamondDerived(DiamondDerived *this_ptr)
{
 VirtualBase_VirtualBase((VirtualBase *)((char *)this_ptr + 0x10));
 MiddleA_MiddleA((MiddleA *)this_ptr);
 MiddleB_MiddleB((MiddleB *)((char *)this_ptr + 8));
 *(void **)this_ptr = PTR_func_000144a4;
 *(void **)((char *)this_ptr + 0x10) = PTR_func_000144d8;
 *(void **)((char *)this_ptr + 8) = PTR_func_000144bc;
 return this_ptr;
}

// Function: Point_Point @ 0x12c74
Point * Point_Point(Point *this_ptr,int param_2,int param_3)
{
 *(int *)this_ptr = param_2;
 *(int *)((char *)this_ptr + 4) = param_3;
 return this_ptr;
}

// Function: Point_operator+ @ 0x12cb8
Point * Point_operator_(Point *this_ptr,Point *param_2)
{
 int *in_r2;
 Point_Point(this_ptr,*(int *)param_2 + *in_r2,*(int *)((char *)param_2 + 4) + in_r2[1]);
 return this_ptr;
}

// Function: Point_operator== @ 0x12d10
unsigned int Point_operator__(Point *this_ptr,Point *param_2)
{
 unsigned int uVar1;
 if ((*(int *)this_ptr == *(int *)param_2) && (*(int *)((char *)this_ptr + 4) == *(int *)((char *)param_2 + 4))) {
 uVar1 = 1;
 }
 else {
 uVar1 = 0;
 }
 return uVar1;
}

// Function: Point_operator++ @ 0x12d70
Point * Point_operator__(Point *this_ptr)
{
 *(int *)this_ptr = *(int *)this_ptr + 1;
 *(int *)((char *)this_ptr + 4) = *(int *)((char *)this_ptr + 4) + 1;
 return this_ptr;
}

// Function: template_max<int> @ 0x12dbc
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

// Function: Container_int__Container @ 0x12ea8
Container_int_ * Container_int__Container(Container_int_ *this_ptr)
{
 *(unsigned int *)((char *)this_ptr + 0x28) = 0;
 return this_ptr;
}

// Function: Container_int__push @ 0x12ed8
Container_int_ * Container_int__push(Container_int_ *this_ptr,int param_1)
{
 Container_int_ *pCVar1;
 int iVar2;
 pCVar1 = this_ptr;
 if (*(int *)((char *)this_ptr + 0x28) < 10) {
 iVar2 = *(int *)((char *)this_ptr + 0x28);
 pCVar1 = (Container_int_ *)(iVar2 + 1);
 *(Container_int_ **)((char *)this_ptr + 0x28) = pCVar1;
 *(int *)((char *)this_ptr + iVar2 * 4) = param_1;
 }
 return pCVar1;
}

// Function: Container_int__get @ 0x12f2c
unsigned int Container_int__get(Container_int_ *this_ptr,int param_1)
{
 unsigned int uVar1;
 if ((param_1 < 0) || (*(int *)((char *)this_ptr + 0x28) <= param_1)) {
 uVar1 = 0;
 }
 else {
 uVar1 = *(unsigned int *)((char *)this_ptr + param_1 * 4);
 }
 return uVar1;
}

// Function: Container_int__getSize @ 0x12f84
unsigned int Container_int__getSize(Container_int_ *this_ptr)
{
 return *(unsigned int *)((char *)this_ptr + 0x28);
}

// Function: Container_double__Container @ 0x12fac
Container_double_ * Container_double__Container(Container_double_ *this_ptr)
{
 *(unsigned int *)((char *)this_ptr + 0x50) = 0;
 return this_ptr;
}

// Function: Container_double__push @ 0x12fdc
void Container_double__push(Container_double_ *this_ptr,double param_1)
{
 int iVar1;
 unsigned int *puVar2;
 unsigned int in_r2;
 unsigned int in_r3;
 if (*(int *)((char *)this_ptr + 0x50) < 10) {
 iVar1 = *(int *)((char *)this_ptr + 0x50);
 *(int *)((char *)this_ptr + 0x50) = iVar1 + 1;
 puVar2 = (unsigned int *)((char *)this_ptr + iVar1 * 8);
 *puVar2 = in_r2;
 puVar2[1] = in_r3;
 }
 return;
}

// Function: Container_double__get @ 0x13040
unsigned long long Container_double__get(Container_double_ *this_ptr,int param_1)
{
 unsigned int uVar1;
 unsigned int uVar2;
 if ((param_1 < 0) || (*(int *)((char *)this_ptr + 0x50) <= param_1)) {
 uVar1 = 0;
 uVar2 = 0;
 }
 else {
 uVar1 = *(unsigned int *)((char *)this_ptr + param_1 * 8);
 uVar2 = *(unsigned int *)((char *)this_ptr + param_1 * 8 + 4);
 }
 return CONCAT44(uVar2,uVar1);
}

// Function: Container_double__getSize @ 0x130a8
unsigned int Container_double__getSize(Container_double_ *this_ptr)
{
 return *(unsigned int *)((char *)this_ptr + 0x50);
}

// Function: std_uniq_ptr_data_int_std_default_delete_int_true_true_uniq_ptr_data @ 0x130d0
__uniq_ptr_data_int_std__default_delete_int__true_true_ *
std_uniq_ptr_data_int_std_default_delete_int_true_true_uniq_ptr_data
 (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this_ptr,__uniq_ptr_data *param_1)
{
 __uniq_ptr_impl_int_std_default_delete_int_uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this_ptr,(__uniq_ptr_impl *)param_1);
 return this_ptr;
}

// Function: std_unique_ptr_int_std_default_delete_int_unique_ptr @ 0x13108
unique_ptr_int_std__default_delete_int__ *
std_unique_ptr_int_std_default_delete_int_unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this_ptr,unique_ptr *param_1)
{
 std_uniq_ptr_data_int_std_default_delete_int_true_true_uniq_ptr_data
 ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this_ptr,
 (__uniq_ptr_data *)param_1);
 return this_ptr;
}

// Function: RTTIBase_getType @ 0x13140
unsigned int RTTIBase_getType(void)
{
 return 0;
}

// Function: RTTIDerivedA_getType @ 0x13164
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedA_derivedA_data @ 0x13188
unsigned int RTTIDerivedA_derivedA_data(void)
{
 return 100;
}

// Function: RTTIDerivedB_getType @ 0x131ac
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: RTTIDerivedB_derivedB_data @ 0x131d0
unsigned int RTTIDerivedB_derivedB_data(void)
{
 return 200;
}

// Function: RTTIBase_RTTIBase @ 0x131f4
RTTIBase * RTTIBase_RTTIBase(RTTIBase *this_ptr)
{
 *(void **)this_ptr = PTR__RTTIBase_0001448c;
 return this_ptr;
}

// Function: RTTIBase_~RTTIBase @ 0x13228
RTTIBase * RTTIBase__RTTIBase(RTTIBase *this_ptr)
{
 *(void **)this_ptr = PTR__RTTIBase_0001448c;
 return this_ptr;
}

// Function: RTTIBase_~RTTIBase_deleting @ 0x1325c
RTTIBase * RTTIBase__RTTIBase_deleting(RTTIBase *this_ptr)
{
 _RTTIBase(this_ptr);
 operator_delete(this_ptr,4);
 return this_ptr;
}

// Function: RTTIDerivedA_RTTIDerivedA @ 0x13290
RTTIDerivedA * RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this_ptr)
{
 RTTIBase_RTTIBase((RTTIBase *)this_ptr);
 *(void **)this_ptr = PTR__RTTIDerivedA_00014478;
 return this_ptr;
}

// Function: RTTIDerivedB_RTTIDerivedB @ 0x132cc
RTTIDerivedB * RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this_ptr)
{
 RTTIBase_RTTIBase((RTTIBase *)this_ptr);
 *(void **)this_ptr = PTR__RTTIDerivedB_00014464;
 return this_ptr;
}

// Function: std_uniq_ptr_data_int_std_default_delete_int_true_true_uniq_ptr_impl @ 0x13308
__uniq_ptr_data_int_std__default_delete_int__true_true_ *
std_uniq_ptr_data_int_std_default_delete_int_true_true_uniq_ptr_impl
 (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this_ptr,int *param_1)
{
 __uniq_ptr_impl_int_std_default_delete_int_uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this_ptr,param_1);
 return this_ptr;
}

// Function: std_unique_ptr_int_std_default_delete_int_unique_ptr_std_default_delete_int_void @ 0x13340
unique_ptr_int_std__default_delete_int__ *
std_unique_ptr_int_std_default_delete_int_unique_ptr_std_default_delete_int_void_
 (unique_ptr_int_std__default_delete_int__ *this_ptr,int *param_1)
{
 std_uniq_ptr_data_int_std_default_delete_int_true_true_uniq_ptr_impl
 ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this_ptr,param_1);
 return this_ptr;
}

// Function: std_unique_ptr_int_std_default_delete_int_unique_ptr @ 0x13374
unique_ptr_int_std__default_delete_int__ *
std_unique_ptr_int_std_default_delete_int__unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this_ptr)
{
 int **ppiVar1;
 default_delete_int_ *this_00;
 int **ppiVar2;
 ppiVar1 = (int **)__uniq_ptr_impl_int_std_default_delete_int_M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this_ptr);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (default_delete_int_ *)get_deleter(this_ptr);
 ppiVar2 = (int **)move_int___(ppiVar1);
 default_delete_int_operator__(this_00,*ppiVar2);
 }
 *ppiVar1 = (int *)0x0;
 return this_ptr;
}

// Function: std_unique_ptr_int_std_default_delete_int_operator @ 0x133e8
unsigned int
std_unique_ptr_int_std_default_delete_int_operator_
 (unique_ptr_int_std__default_delete_int__ *this_ptr)
{
 unsigned int uVar1;
 uVar1 = get(this_ptr);
 return uVar1;
}

// Function: std_move_unique_ptr_int_std_default_delete_int @ 0x13418
void* std_move_unique_ptr_int_std_default_delete_int_(unique_ptr *param_1)
{
 return (void*)param_1;
}

// Function: std_Tuple_impl_0u_int_std_default_delete_int_Tuple_impl @ 0x1343c
_Tuple_impl_0u_int__std__default_delete_int__ *
std_Tuple_impl_0u_int_std_default_delete_int_Tuple_impl
 (_Tuple_impl_0u_int__std__default_delete_int__ *this_ptr,_Tuple_impl *param_1)
{
 _Tuple_impl_1u_std_default_delete_int_Tuple_impl((_Tuple_impl *)this_ptr);
 *(unsigned int *)this_ptr = *(unsigned int *)param_1;
 return this_ptr;
}

// Function: std_tuple_int_std_default_delete_int_tuple @ 0x1347c
tuple_int__std__default_delete_int__ *
std_tuple_int_std_default_delete_int_tuple
 (tuple_int__std__default_delete_int__ *this_ptr,tuple *param_1)
{
 _Tuple_impl_0u_int_std_default_delete_int_Tuple_impl
 ((_Tuple_impl_0u_int__std__default_delete_int__ *)this_ptr,(_Tuple_impl *)param_1);
 return this_ptr;
}

// Function: std_uniq_ptr_impl_int_std_default_delete_int_uniq_ptr_impl @ 0x134b4
__uniq_ptr_impl_int_std__default_delete_int__ *
std_uniq_ptr_impl_int_std_default_delete_int_uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int__ *this_ptr,__uniq_ptr_impl *param_1)
{
 void *ptVar1;
 unsigned int *puVar2;
 ptVar1 = move_std_tuple_int_std_default_delete_int((tuple *)param_1);
 std_tuple_int_std_default_delete_int_tuple
 ((tuple_int__std__default_delete_int__ *)this_ptr,(tuple *)ptVar1);
 puVar2 = (unsigned int *)_M_ptr((__uniq_ptr_impl_int_std__default_delete_int__ *)param_1);
 *puVar2 = 0;
 return this_ptr;
}

// Function: std_uniq_ptr_data_int_std_default_delete_int_array_true_true_uniq_ptr_impl @ 0x1350c
__uniq_ptr_data_int_std__default_delete_int____true_true_ *
std_uniq_ptr_data_int_std_default_delete_int_array_true_true_uniq_ptr_impl
 (__uniq_ptr_data_int_std__default_delete_int____true_true_ *this_ptr,int *param_1)
{
 __uniq_ptr_impl_int_std_default_delete_int_array_uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this_ptr,param_1);
 return this_ptr;
}

// Function: std_unique_ptr_int_array_std_default_delete_int_array_unique_ptr @ 0x13544
unique_ptr_int___std__default_delete_int____ *
std_unique_ptr_int_array_std_default_delete_int_array_unique_ptr_int_std_default_delete_int_array_void_bool_
 (unique_ptr_int___std__default_delete_int____ *this_ptr,int *param_1)
{
 std_uniq_ptr_data_int_std_default_delete_int_array_true_true_uniq_ptr_impl
 ((__uniq_ptr_data_int_std__default_delete_int____true_true_ *)this_ptr,param_1);
 return this_ptr;
}

// Function: std_unique_ptr_int_array_std_default_delete_int_array_unique_ptr @ 0x13578
unique_ptr_int___std__default_delete_int____ *
std_unique_ptr_int_array_std_default_delete_int_array__unique_ptr
 (unique_ptr_int___std__default_delete_int____ *this_ptr)
{
 int **ppiVar1;
 default_delete_int___ *this_00;
 ppiVar1 = (int **)__uniq_ptr_impl_int_std_default_delete_int_array_M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this_ptr);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (default_delete_int___ *)get_deleter(this_ptr);
 default_delete_int_array_operator__(this_00,*ppiVar1);
 }
 *ppiVar1 = (int *)0x0;
 return this_ptr;
}

// Function: std_unique_ptr_int_array_std_default_delete_int_array_operator @ 0x135e4
int
std_unique_ptr_int_array_std_default_delete_int_array_operator__
 (unique_ptr_int___std__default_delete_int____ *this_ptr,uint param_1)
{
 int iVar1;
 iVar1 = get(this_ptr);
 return iVar1 + param_1 * 4;
}

// Function: std_uniq_ptr_impl_int_std_default_delete_int_uniq_ptr_impl_2 @ 0x13624
__uniq_ptr_impl_int_std__default_delete_int__ *
std_uniq_ptr_impl_int_std_default_delete_int_uniq_ptr_impl_2
 (__uniq_ptr_impl_int_std__default_delete_int__ *this_ptr,int *param_1)
{
 int **ppiVar1;
 std_tuple_int_std_default_delete_int_tuple_true_true_
 ((tuple_int__std__default_delete_int__ *)this_ptr);
 ppiVar1 = (int **)_M_ptr(this_ptr);
 *ppiVar1 = param_1;
 return this_ptr;
}

// Function: std_uniq_ptr_impl_int_std_default_delete_int_M_ptr @ 0x13668
int** std_uniq_ptr_impl_int_std_default_delete_int_M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int__ *this_ptr)
{
 int **ptVar1;
 ptVar1 = (int **)get_0u_int__std__default_delete_int__((tuple *)this_ptr);
 return ptVar1;
}

// Function: std_unique_ptr_int_std_default_delete_int_get_deleter @ 0x13694
unsigned int
std_unique_ptr_int_std_default_delete_int_get_deleter
 (unique_ptr_int_std__default_delete_int__ *this_ptr)
{
 unsigned int uVar1;
 uVar1 = __uniq_ptr_impl_int_std_default_delete_int_M_deleter
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this_ptr);
 return uVar1;
}

// Function: std_move_int @ 0x136c0
int** std_move_int_(int **param_1)
{
 return param_1;
}

// Function: std_default_delete_int_operator @ 0x136e4
void std_default_delete_int_operator_(default_delete_int_ *this_ptr,int *param_1)
{
 if (param_1 != (int *)0x0) {
 operator_delete(param_1,4);
 }
 return;
}

// Function: std_unique_ptr_int_std_default_delete_int_get @ 0x1371c
unsigned int
std_unique_ptr_int_std_default_delete_int_get(unique_ptr_int_std__default_delete_int__ *this_ptr)
{
 unsigned int uVar1;
 uVar1 = __uniq_ptr_impl_int_std_default_delete_int_M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this_ptr);
 return uVar1;
}

// Function: std_move_tuple_int_std_default_delete_int @ 0x13748
void* std_move_tuple_int_std_default_delete_int_(tuple *param_1)
{
 return (void*)param_1;
}

// Function: std_Tuple_impl_1u_std_default_delete_int_Tuple_impl @ 0x1376c
_Tuple_impl * std_Tuple_impl_1u_std_default_delete_int_Tuple_impl(_Tuple_impl *param_1)
{
 return param_1;
}

// Function: std_uniq_ptr_impl_int_std_default_delete_int_array_uniq_ptr_impl @ 0x13794
__uniq_ptr_impl_int_std__default_delete_int____ *
std_uniq_ptr_impl_int_std_default_delete_int_array_uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int____ *this_ptr,int *param_1)
{
 int **ppiVar1;
 std_tuple_int_std_default_delete_int_array_tuple_true_true_
 ((tuple_int__std__default_delete_int____ *)this_ptr);
 ppiVar1 = (int **)_M_ptr(this_ptr);
 *ppiVar1 = param_1;
 return this_ptr;
}

// Function: std_uniq_ptr_impl_int_std_default_delete_int_array_M_ptr @ 0x137d8
int**
std_uniq_ptr_impl_int_std_default_delete_int_array_M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int____ *this_ptr)
{
 int **ptVar1;
 ptVar1 = (int **)get_0u_int__std__default_delete_int____((tuple *)this_ptr);
 return ptVar1;
}

// Function: std_unique_ptr_int_array_std_default_delete_int_array_get_deleter @ 0x13804
unsigned int
std_unique_ptr_int_array_std_default_delete_int_array_get_deleter
 (unique_ptr_int___std__default_delete_int____ *this_ptr)
{
 unsigned int uVar1;
 uVar1 = __uniq_ptr_impl_int_std_default_delete_int_array_M_deleter
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this_ptr);
 return uVar1;
}

// Function: std_default_delete_int_array_operator @ 0x13830
void std_default_delete_int_array_operator_(default_delete_int___ *this_ptr,int *param_1)
{
 if (param_1 != (int *)0x0) {
 operator_delete__(param_1);
 }
 return;
}

// Function: std_unique_ptr_int_array_std_default_delete_int_array_get @ 0x13864
unsigned int
std_unique_ptr_int_array_std_default_delete_int_array_get
 (unique_ptr_int___std__default_delete_int____ *this_ptr)
{
 unsigned int uVar1;
 uVar1 = __uniq_ptr_impl_int_std_default_delete_int_array_M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this_ptr);
 return uVar1;
}

// Function: std_tuple_int_std_default_delete_int_tuple_true_true @ 0x13890
tuple_int__std__default_delete_int__ *
std_tuple_int_std_default_delete_int_tuple_true_true_
 (tuple_int__std__default_delete_int__ *this_ptr)
{
 _Tuple_impl_0u_int_std_default_delete_int_Tuple_impl
 ((_Tuple_impl_0u_int__std__default_delete_int__ *)this_ptr);
 return this_ptr;
}

// Function: std_get_0u_int_std_default_delete_int @ 0x138bc
int** std_get_0u_int_std_default_delete_int_(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int_std_default_delete_int((_Tuple_impl *)param_1);
 return ppiVar1;
}

// Function: std_uniq_ptr_impl_int_std_default_delete_int_M_deleter @ 0x138e8
void*
std_uniq_ptr_impl_int_std_default_delete_int_M_deleter
 (__uniq_ptr_impl_int_std__default_delete_int__ *this_ptr)
{
 void *ptVar1;
 ptVar1 = (void*)get_1u_int__std__default_delete_int__((tuple *)this_ptr);
 return ptVar1;
}

// Function: std_uniq_ptr_impl_int_std_default_delete_int_M_ptr_2 @ 0x13914
unsigned int
std_uniq_ptr_impl_int_std_default_delete_int_M_ptr_2
 (__uniq_ptr_impl_int_std__default_delete_int__ *this_ptr)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)(uintptr_t)get_0u_int__std__default_delete_int__((tuple *)this_ptr);
 return *puVar1;
}

// Function: std_tuple_int_std_default_delete_int_array_tuple_true_true @ 0x13944
tuple_int__std__default_delete_int____ *
std_tuple_int_std_default_delete_int_array_tuple_true_true_
 (tuple_int__std__default_delete_int____ *this_ptr)
{
 _Tuple_impl_0u_int_std_default_delete_int_array_Tuple_impl
 ((_Tuple_impl_0u_int__std__default_delete_int____ *)this_ptr);
 return this_ptr;
}

// Function: std_get_0u_int_std_default_delete_int_array @ 0x13970
int** std_get_0u_int_std_default_delete_int_array_(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int_std_default_delete_int_array((_Tuple_impl *)param_1);
 return ppiVar1;
}

// Function: std_uniq_ptr_impl_int_std_default_delete_int_array_M_deleter @ 0x1399c
void*
std_uniq_ptr_impl_int_std_default_delete_int_array_M_deleter
 (__uniq_ptr_impl_int_std__default_delete_int____ *this_ptr)
{
 void *ptVar1;
 ptVar1 = (void*)get_1u_int__std__default_delete_int____((tuple *)this_ptr);
 return ptVar1;
}

// Function: std_uniq_ptr_impl_int_std_default_delete_int_array_M_ptr_2 @ 0x139c8
unsigned int
std_uniq_ptr_impl_int_std_default_delete_int_array_M_ptr_2
 (__uniq_ptr_impl_int_std__default_delete_int____ *this_ptr)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)(uintptr_t)get_0u_int__std_default_delete_int_array((tuple *)this_ptr);
 return *puVar1;
}

// Function: std_Tuple_impl_0u_int_std_default_delete_int_Tuple_impl_2 @ 0x139f8
_Tuple_impl_0u_int__std__default_delete_int__ *
std_Tuple_impl_0u_int_std_default_delete_int_Tuple_impl_2
 (_Tuple_impl_0u_int__std__default_delete_int__ *this_ptr)
{
 _Tuple_impl_1u_std_default_delete_int_Tuple_impl
 ((_Tuple_impl_1u_std__default_delete_int__ *)this_ptr);
 _Head_base_0u_int__false__Head_base((_Head_base_0u_int__false_ *)this_ptr);
 return this_ptr;
}

// Function: std_get_helper_0u_int_std_default_delete_int @ 0x13a2c
int ** std_get_helper_0u_int_std_default_delete_int_(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0u_int_std_default_delete_int_M_head(param_1);
 return ppiVar1;
}

// Function: std_get_1u_int_std_default_delete_int @ 0x13a54
type std_get_1u_int_std_default_delete_int_(tuple *param_1)
{
 default_delete *pdVar1;
 pdVar1 = __get_helper_1u_std_default_delete_int((_Tuple_impl *)param_1);
 return (type)pdVar1;
}

// Function: std_get_0u_int_std_default_delete_int_2 @ 0x13a7c
type std_get_0u_int_std_default_delete_int_2(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int_std_default_delete_int((_Tuple_impl *)param_1);
 return (type)ppiVar1;
}

// Function: std_Tuple_impl_0u_int_std_default_delete_int_array_Tuple_impl @ 0x13aa8
_Tuple_impl_0u_int__std__default_delete_int____ *
std_Tuple_impl_0u_int_std_default_delete_int_array_Tuple_impl
 (_Tuple_impl_0u_int__std__default_delete_int____ *this_ptr)
{
 _Tuple_impl_1u_std_default_delete_int_array_Tuple_impl
 ((_Tuple_impl_1u_std__default_delete_int____ *)this_ptr);
 _Head_base_0u_int__false__Head_base((_Head_base_0u_int__false_ *)this_ptr);
 return this_ptr;
}

// Function: std_get_helper_0u_int_std_default_delete_int_array @ 0x13adc
int ** std_get_helper_0u_int_std_default_delete_int_array_(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0u_int_std_default_delete_int_array_M_head(param_1);
 return ppiVar1;
}

// Function: std_get_1u_int_std_default_delete_int_array @ 0x13b04
type std_get_1u_int_std_default_delete_int_array_(tuple *param_1)
{
 default_delete *pdVar1;
 pdVar1 = __get_helper_1u_std_default_delete_int_array((_Tuple_impl *)param_1);
 return (type)pdVar1;
}

// Function: std_get_0u_int_std_default_delete_int_array_2 @ 0x13b2c
type std_get_0u_int_std_default_delete_int_array_2(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int_std_default_delete_int_array((_Tuple_impl *)param_1);
 return (type)ppiVar1;
}

// Function: std_forward_int @ 0x13b58
int ** std_forward_int_(void *param_1)
{
 return (int **)param_1;
}

// Function: std_Tuple_impl_1u_std_default_delete_int_Tuple_impl_2 @ 0x13b7c
_Tuple_impl_1u_std__default_delete_int__ *
std_Tuple_impl_1u_std_default_delete_int_Tuple_impl_2
 (_Tuple_impl_1u_std__default_delete_int__ *this_ptr)
{
 _Head_base_1u_std_default_delete_int_true_Head_base
 ((_Head_base_1u_std__default_delete_int__true_ *)this_ptr);
 return this_ptr;
}

// Function: std_Head_base_0u_int_false_Head_base @ 0x13ba4
_Head_base_0u_int__false_ *
std_Head_base_0u_int_false_Head_base(_Head_base_0u_int__false_ *this_ptr)
{
 *(unsigned int *)this_ptr = 0;
 return this_ptr;
}

// Function: std_Tuple_impl_0u_int_std_default_delete_int_M_head @ 0x13bd4
unsigned int std_Tuple_impl_0u_int_std_default_delete_int_M_head(_Tuple_impl *this_ptr)
{
 unsigned int uVar1;
 uVar1 = (unsigned int)(uintptr_t)_Head_base_0u_int_false_M_head((_Head_base *)this_ptr);
 return uVar1;
}

// Function: std_get_helper_1u_std_default_delete_int @ 0x13c00
default_delete * std_get_helper_1u_std_default_delete_int_(_Tuple_impl *param_1)
{
 default_delete *pdVar1;
 pdVar1 = (default_delete *)_Tuple_impl_1u_std_default_delete_int_M_head(param_1);
 return pdVar1;
}

// Function: std_get_helper_0u_int_std_default_delete_int_3 @ 0x13c28
int ** std_get_helper_0u_int_std_default_delete_int_3(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0u_int_std_default_delete_int_M_head(param_1);
 return ppiVar1;
}

// Function: std_Tuple_impl_1u_std_default_delete_int_array_Tuple_impl @ 0x13c50
_Tuple_impl_1u_std__default_delete_int____ *
std_Tuple_impl_1u_std_default_delete_int_array_Tuple_impl
 (_Tuple_impl_1u_std__default_delete_int____ *this_ptr)
{
 _Head_base_1u_std_default_delete_int_array_true_Head_base
 ((_Head_base_1u_std__default_delete_int____true_ *)this_ptr);
 return this_ptr;
}

// Function: std_Tuple_impl_0u_int_std_default_delete_int_array_M_head @ 0x13c78
unsigned int std_Tuple_impl_0u_int_std_default_delete_int_array_M_head(_Tuple_impl *this_ptr)
{
 unsigned int uVar1;
 uVar1 = (unsigned int)(uintptr_t)_Head_base_0u_int_false_M_head((_Head_base *)this_ptr);
 return uVar1;
}

// Function: std_get_helper_1u_std_default_delete_int_array @ 0x13ca4
default_delete * std_get_helper_1u_std_default_delete_int_array_(_Tuple_impl *param_1)
{
 default_delete *pdVar1;
 pdVar1 = (default_delete *)_Tuple_impl_1u_std_default_delete_int_array_M_head(param_1);
 return pdVar1;
}

// Function: std_get_helper_0u_int_std_default_delete_int_array_3 @ 0x13ccc
int ** std_get_helper_0u_int_std_default_delete_int_array_3(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0u_int_std_default_delete_int_array_M_head(param_1);
 return ppiVar1;
}

// Function: std_Head_base_0u_int_false_Head_base_int @ 0x13cf4
_Head_base_0u_int__false_ *
std_Head_base_0u_int_false_Head_base_int_(_Head_base_0u_int__false_ *this_ptr,int **param_1)
{
 int **ppiVar1;
 ppiVar1 = forward_int_((type *)param_1);
 *(int **)this_ptr = *ppiVar1;
 return this_ptr;
}

// Function: std_Head_base_1u_std_default_delete_int_true_Head_base @ 0x13d30
_Head_base_1u_std__default_delete_int__true_ *
std_Head_base_1u_std_default_delete_int_true_Head_base
 (_Head_base_1u_std__default_delete_int__true_ *this_ptr)
{
 return this_ptr;
}

// Function: std_Head_base_0u_int_false_M_head @ 0x13d54
void* std_Head_base_0u_int_false_M_head(_Head_base *param_1)
{
 return (void*)param_1;
}

// Function: std_Tuple_impl_1u_std_default_delete_int_M_head @ 0x13d78
unsigned int std_Tuple_impl_1u_std_default_delete_int_M_head(_Tuple_impl *this_ptr)
{
 unsigned int uVar1;
 uVar1 = (unsigned int)_Head_base_1u_std_default_delete_int_true_M_head((_Head_base *)this_ptr);
 return uVar1;
}

// Function: std_Tuple_impl_0u_int_std_default_delete_int_M_head_2 @ 0x13da0
unsigned int std_Tuple_impl_0u_int_std_default_delete_int_M_head_2(_Tuple_impl *this_ptr)
{
 unsigned int uVar1;
 uVar1 = (unsigned int)(uintptr_t)_Head_base_0u_int_false_M_head((_Head_base *)this_ptr);
 return uVar1;
}

// Function: std_Head_base_1u_std_default_delete_int_array_true_Head_base @ 0x13dcc
_Head_base_1u_std__default_delete_int____true_ *
std_Head_base_1u_std_default_delete_int_array_true_Head_base
 (_Head_base_1u_std__default_delete_int____true_ *this_ptr)
{
 return this_ptr;
}

// Function: std_Tuple_impl_1u_std_default_delete_int_array_M_head @ 0x13df0
unsigned int std_Tuple_impl_1u_std_default_delete_int_array_M_head(_Tuple_impl *this_ptr)
{
 unsigned int uVar1;
 uVar1 = (unsigned int)_Head_base_1u_std_default_delete_int_array_true_M_head((_Head_base *)this_ptr);
 return uVar1;
}

// Function: std_Tuple_impl_0u_int_std_default_delete_int_array_M_head_2 @ 0x13e18
unsigned int std_Tuple_impl_0u_int_std_default_delete_int_array_M_head_2(_Tuple_impl *this_ptr)
{
 unsigned int uVar1;
 uVar1 = (unsigned int)(uintptr_t)_Head_base_0u_int_false_M_head((_Head_base *)this_ptr);
 return uVar1;
}

// Function: std_Head_base_1u_std_default_delete_int_true_M_head @ 0x13e44
void* std_Head_base_1u_std_default_delete_int_true_M_head(_Head_base *param_1)
{
 return (void*)param_1;
}

// Function: std_Head_base_0u_int_false_M_head_2 @ 0x13e68
void* std_Head_base_0u_int_false_M_head_2(_Head_base *param_1)
{
 return (void*)param_1;
}

// Function: std_Head_base_1u_std_default_delete_int_array_true_M_head @ 0x13e8c
void* std_Head_base_1u_std_default_delete_int_array_true_M_head(_Head_base *param_1)
{
 return (void*)param_1;
}

// Function: RTTIDerivedB_~RTTIDerivedB @ 0x13eb0
RTTIDerivedB * RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_ptr)
{
 *(void ***)this_ptr = &PTR__RTTIDerivedB_00014464;
 RTTIBase__RTTIBase((RTTIBase *)this_ptr);
 return this_ptr;
}

// Function: RTTIDerivedB_~RTTIDerivedB_deleting @ 0x13eec
RTTIDerivedB * RTTIDerivedB__RTTIDerivedB_deleting(RTTIDerivedB *this_ptr)
{
 _RTTIDerivedB(this_ptr);
 operator_delete(this_ptr,4);
 return this_ptr;
}

// Function: RTTIDerivedA_~RTTIDerivedA @ 0x13f20
RTTIDerivedA * RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_ptr)
{
 *(void ***)this_ptr = &PTR__RTTIDerivedA_00014478;
 RTTIBase__RTTIBase((RTTIBase *)this_ptr);
 return this_ptr;
}

// Function: RTTIDerivedA_~RTTIDerivedA_deleting @ 0x13f5c
RTTIDerivedA * RTTIDerivedA__RTTIDerivedA_deleting(RTTIDerivedA *this_ptr)
{
 _RTTIDerivedA(this_ptr);
 operator_delete(this_ptr,4);
 return this_ptr;
}

// Function: DiamondDerived_~DiamondDerived @ 0x13f90
DiamondDerived * DiamondDerived__DiamondDerived(DiamondDerived *this_ptr)
{
 *(void **)this_ptr = PTR_func_000144a4;
 *(void **)((char *)this_ptr + 0x10) = PTR_func_000144d8;
 *(void **)((char *)this_ptr + 8) = PTR_func_000144bc;
 MiddleB__MiddleB((MiddleB *)((char *)this_ptr + 8));
 MiddleA__MiddleA((MiddleA *)this_ptr);
 VirtualBase__VirtualBase((VirtualBase *)((char *)this_ptr + 0x10));
 return this_ptr;
}

// Function: DiamondDerived_~DiamondDerived_thunk @ 0x14028
void DiamondDerived__DiamondDerived_thunk(DiamondDerived *this_ptr)
{
 DiamondDerived__DiamondDerived((DiamondDerived *)((char *)this_ptr + -8));
 return;
}

// Function: DiamondDerived_~DiamondDerived_thunk2 @ 0x14030
void DiamondDerived__DiamondDerived_thunk2(DiamondDerived *this_ptr)
{
 DiamondDerived__DiamondDerived((DiamondDerived *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0x10)));
 return;
}

// Function: DiamondDerived_~DiamondDeleting @ 0x14044
DiamondDerived * DiamondDerived__DiamondDeleting(DiamondDerived *this_ptr)
{
 _DiamondDerived(this_ptr);
 operator_delete(this_ptr,0x18);
 return this_ptr;
}

// Function: DiamondDerived_~DiamondDerived_thunk3 @ 0x14078
void DiamondDerived__DiamondDerived_thunk3(DiamondDerived *this_ptr)
{
 DiamondDerived__DiamondDerived((DiamondDerived *)((char *)this_ptr + -8));
 return;
}

// Function: DiamondDerived_~DiamondDerived_thunk4 @ 0x14080
void DiamondDerived__DiamondDerived_thunk4(DiamondDerived *this_ptr)
{
 DiamondDerived__DiamondDerived((DiamondDerived *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0x10)));
 return;
}

// Function: MultiDerived_~MultiDerived @ 0x14094
MultiDerived * MultiDerived__MultiDerived(MultiDerived *this_ptr)
{
 *(void **)this_ptr = PTR_funcA_00014584;
 *(void **)((char *)this_ptr + 8) = PTR_funcB_0001459c;
 BaseB__BaseB((BaseB *)((char *)this_ptr + 8));
 BaseA__BaseA((BaseA *)this_ptr);
 return this_ptr;
}

// Function: MultiDerived_~MultiDerived_thunk @ 0x140f0
void MultiDerived__MultiDerived_thunk(MultiDerived *this_ptr)
{
 MultiDerived__MultiDerived((MultiDerived *)((char *)this_ptr + -8));
 return;
}

// Function: MultiDerived_~MultiDerived_deleting @ 0x140f8
MultiDerived * MultiDerived__MultiDerived_deleting(MultiDerived *this_ptr)
{
 _MultiDerived(this_ptr);
 operator_delete(this_ptr,0x10);
 return this_ptr;
}

// Function: MultiDerived_~MultiDerived_thunk2 @ 0x1412c
void MultiDerived__MultiDerived_thunk2(MultiDerived *this_ptr)
{
 MultiDerived__MultiDerived((MultiDerived *)((char *)this_ptr + -8));
 return;
}

// Function: Derived_~Derived @ 0x14134
Derived * Derived__Derived(Derived *this_ptr)
{
 *(void **)this_ptr = PTR_virtual_func_000145d8;
 Base__Base((Base *)this_ptr);
 return this_ptr;
}

// Function: Derived_~Derived_deleting @ 0x14170
Derived * Derived__Derived_deleting(Derived *this_ptr)
{
 _Derived(this_ptr);
 operator_delete(this_ptr,8);
 return this_ptr;
}

// Function: _fini @ 0x141a4
void _fini(void)
{
 return;
}

