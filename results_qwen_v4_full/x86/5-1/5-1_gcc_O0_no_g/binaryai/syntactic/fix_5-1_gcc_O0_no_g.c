// Decompiled by BinaryAI
// SHA256: 3ebbf3ff5582d9a738f04e27e2558d06de36473668947778f025084499c8b92d

#include <stdint.h>

void __gmon_start__(void);
void frame_dummy(void);
int __do_global_ctors_aux(void);
void __x86_get_pc_thunk_di(void);
typedef struct SimpleClass { int data; } SimpleClass;
typedef struct LifecycleClass { int data; } LifecycleClass;
typedef struct Base { void **vtable; } Base;
typedef struct Derived { void **vtable; int data; } Derived;
typedef struct BaseA { void **vtable; } BaseA;
typedef struct BaseB { void **vtable; } BaseB;
typedef struct MultiDerived { BaseA baseA; BaseB baseB; } MultiDerived;
typedef struct VirtualBase { void **vtable; } VirtualBase;
typedef struct MiddleA { VirtualBase vb; int data; } MiddleA;
typedef struct MiddleB { VirtualBase vb; int data; } MiddleB;
typedef struct DiamondDerived { MiddleA ma; MiddleB mb; VirtualBase vb; } DiamondDerived;
typedef struct Point { int x; int y; } Point;
typedef struct RTTIBase { void **vtable; } RTTIBase;
typedef struct RTTIDerivedA { RTTIBase base; } RTTIDerivedA;
typedef struct RTTIDerivedB { RTTIBase base; } RTTIDerivedB;
typedef struct type_info { char *name; } type_info;

// Helper macro for rounding
#define ROUND(x) ((int)((x) + 0.5))

// C++ template type stubs
typedef struct unique_ptr { void *ptr; } unique_ptr;
typedef struct unique_ptr_int_std__default_delete_int__ { void *ptr; } unique_ptr_int_std__default_delete_int__;
typedef struct unique_ptr_int___std__default_delete_int____ { void *ptr; } unique_ptr_int___std__default_delete_int____;
typedef struct unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ { void *ptr; } unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__;
typedef struct _Tuple_impl { void *data; } _Tuple_impl;
typedef struct _Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__ { void *data; } _Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__;
typedef struct _Tuple_impl_0u_int__std__default_delete_int__ { void *data; } _Tuple_impl_0u_int__std__default_delete_int__;
typedef struct _Tuple_impl_0u_int__std__default_delete_int____ { void *data; } _Tuple_impl_0u_int__std__default_delete_int____;
typedef struct _Head_base { void *data; } _Head_base;
typedef struct _Head_base_0u_int__false_ { void *data; } _Head_base_0u_int__false_;
typedef struct __uniq_ptr_impl { void *ptr; } __uniq_ptr_impl;
typedef struct __uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ { void *ptr; } __uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__;
typedef struct __uniq_ptr_impl_int_std__default_delete_int__ { void *ptr; } __uniq_ptr_impl_int_std__default_delete_int__;
typedef struct __uniq_ptr_impl_int_std__default_delete_int____ { void *ptr; } __uniq_ptr_impl_int_std__default_delete_int____;
typedef struct __uniq_ptr_data { void *ptr; } __uniq_ptr_data;
typedef struct __uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1__true_false_ { void *ptr; } __uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1__true_false_;
typedef struct __uniq_ptr_data_int_std__default_delete_int__true_true_ { void *ptr; } __uniq_ptr_data_int_std__default_delete_int__true_true_;
typedef struct __uniq_ptr_data_int_std__default_delete_int____true_true_ { void *ptr; } __uniq_ptr_data_int_std__default_delete_int____true_true_;
typedef struct tuple { void *data; } tuple;
typedef struct tuple_int__test_cpp_smart_ptr_____lambda_int___1__ { void *data; } tuple_int__test_cpp_smart_ptr_____lambda_int___1__;
typedef struct tuple_int__std__default_delete_int__ { void *data; } tuple_int__std__default_delete_int__;
typedef struct tuple_int__std__default_delete_int____ { void *data; } tuple_int__std__default_delete_int____;
typedef struct _lambda_int__1_ { int data; } _lambda_int__1_;
typedef struct _lambda_int___1_ { int data; } _lambda_int___1_;
typedef struct default_delete_int_ { void *data; } default_delete_int_;
typedef struct default_delete_int___ { void *data; } default_delete_int___;
typedef struct default_delete { void *data; } default_delete;
typedef struct type { void *data; } type;
typedef struct Container_int_ { int data[10]; unsigned int size; } Container_int_;
typedef struct Container_double_ { double data[10]; unsigned int size; } Container_double_;

// Missing function declaration
int __stack_chk_fail_local(void);

// Missing variable declarations
void *_GLOBAL_OFFSET_TABLE_;
void *PTR_virtual_func_00018da8;
void *PTR_virtual_func_00018d90;
void *PTR_funcA_00018d7c;
void *PTR_funcB_00018d68;
void *PTR_funcA_00018d3c;
void *PTR_funcB_00018d54;
void *PTR_func_00018d28;
void *PTR__RTTIBase_00018c44;
void *PTR__RTTIDerivedA_00018c30;
void *PTR__RTTIDerivedB_00018c1c;
void *std___ioinit;
void *__dso_handle;
void *std_ios_base_Init__Init;
type_info RTTIBase_typeinfo;
type_info RTTIDerivedA_typeinfo;
type_info RTTIDerivedB_typeinfo;

// Helper function declarations
int **std_forward_int___(type *param_1);
int *get_deleter(void *self);
int *__uniq_ptr_impl_int_std__default_delete_int______M_ptr(__uniq_ptr_impl_int_std__default_delete_int__ *self);
int *get(void *self);
int *get_0u_int__test_cpp_smart_ptr_____lambda_int___1__(int *self);
_lambda_int___1_ *get_1u_int__test_cpp_smart_ptr_____lambda_int___1__(int *self);
int *get_0u_int__std__default_delete_int__(tuple *self);
void *get_1u_int__std__default_delete_int__(tuple *self);
int *get_0u_int__std__default_delete_int____(tuple *self);
void *get_1u_int__std__default_delete_int____(tuple *self);
void default_delete_int_operator__(default_delete_int_ *self, int *param_1);
void default_delete_int_array_operator__(default_delete_int___ *self, int *param_1);
int **__get_helper_0u_int__std__default_delete_int__(_Tuple_impl *param_1);
void *__get_helper_1u_std__default_delete_int__(_Tuple_impl *param_1);
int **__get_helper_0u_int__std__default_delete_int____(_Tuple_impl *param_1);
void *__get_helper_1u_std__default_delete_int____(_Tuple_impl *param_1);
void *_Tuple_impl_0u_int__std__default_delete_int___M_head(_Tuple_impl *param_1);
void *_Tuple_impl_0u_int__std__default_delete_int______M_head(_Tuple_impl *param_1);
char ** std__Head_base_1u_std__default_delete_int__true__Head_base(void);
char ** std__Head_base_1u_std__default_delete_int____true__Head_base(void);
_Head_base * std__Head_base_1u_std__default_delete_int__true__M_head(_Head_base *param_1);
_Head_base * std__Head_base_1u_std__default_delete_int____true__M_head(_Head_base *param_1);
_Head_base * std__Head_base_0u_int__false__M_head(_Head_base *param_1);
int *__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1______M_ptr(__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *self);
int **move_int___(int **param_1);
int *__uniq_ptr_impl_int_std__default_delete_int_______M_ptr(__uniq_ptr_impl_int_std__default_delete_int____ *self);
void *__uniq_ptr_impl_int_std__default_delete_int______M_deleter(__uniq_ptr_impl_int_std__default_delete_int__ *self);
int *std___uniq_ptr_impl_int_std__default_delete_int______M_ptr(__uniq_ptr_impl_int_std__default_delete_int__ *self);

// SimpleClass method declarations
void SimpleClass_SimpleClass(SimpleClass *self);
unsigned int SimpleClass_getValue(SimpleClass *self);
void SimpleClass_setValue(SimpleClass *self);
int SimpleClass_compute(SimpleClass *self, int param_1);
unsigned int SimpleClass_getClassID(void);

// LifecycleClass method declarations
void LifecycleClass_LifecycleClass(LifecycleClass *self, unsigned int param_1);
void LifecycleClass_LifecycleClass(LifecycleClass *self);
unsigned int LifecycleClass_getData(LifecycleClass *self, unsigned int param_1);
unsigned int LifecycleClass_getInstanceCount(void);

// Global variable
unsigned int instance_count = 0;

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
 ((void (*)(void))(char *)0x0)();
 return;
}


// Function: FUN_000111a0 @ 0x111a0
void FUN_000111a0(unsigned int param_1)
{
 int unaff_EBX;
 ((void (*)(void))**(void ***)(unaff_EBX + 0x68))();
 return;
}


// Function: FUN_000111b0 @ 0x111b0
void *FUN_000111b0(unsigned int size)
{
 return (void *)0;
}


// Function: FUN_000111c0 @ 0x111c0
void FUN_000111c0(void)
{
 int unaff_EBX;
 ((void (*)(void))**(void ***)(unaff_EBX + 0x10))();
 return;
}


// Function: FUN_000111d0 @ 0x111d0
void *FUN_000111d0(unsigned int size)
{
 return (void *)0;
}


// Function: FUN_000111e0 @ 0x111e0
int FUN_000111e0(unsigned int param_1)
{
 int unaff_EBX;
 ((void (*)(void))**(void ***)(unaff_EBX + 0x18))();
 return (int)param_1;
}


// Function: FUN_000111f0 @ 0x111f0
void FUN_000111f0(void)
{
 int unaff_EBX;
 ((void (*)(void))**(void ***)(unaff_EBX + 0x1c))();
 return;
}


// Function: FUN_00011200 @ 0x11200
void FUN_00011200(void *ptr, unsigned int size)
{
 int unaff_EBX;
 ((void (*)(void))**(void ***)(unaff_EBX + 0x20))();
 return;
}


// Function: FUN_00011210 @ 0x11210
void FUN_00011210(void)
{
 int unaff_EBX;
 ((void (*)(void))**(void ***)(unaff_EBX + 0x24))();
 return;
}


// Function: FUN_00011220 @ 0x11220
void FUN_00011220(int main_func, unsigned int param_2, char *auStack_4, int p1, int p2, unsigned int param_1, char *auStack_4_2)
{
 int unaff_EBX;
 ((void (*)(void))**(void ***)(unaff_EBX + 0x28))();
 return;
}


// Function: FUN_00011230 @ 0x11230
void *FUN_00011230(unsigned int size)
{
 return (void *)0;
}


// Function: FUN_00011240 @ 0x11240
void FUN_00011240(void)
{
 int unaff_EBX;
 ((void (*)(void))**(void ***)(unaff_EBX + 0x30))();
 return;
}


// Function: FUN_00011250 @ 0x11250
void *FUN_00011250(void *param_1)
{
 int unaff_EBX;
 ((void (*)(void))**(void ***)(unaff_EBX + 0x34))();
 return (void *)0;
}


// Function: FUN_00011260 @ 0x11260
void FUN_00011260(void *param_1)
{
 int unaff_EBX;
 ((void (*)(void))**(void ***)(unaff_EBX + 0x38))();
 return;
}


// Function: FUN_00011270 @ 0x11270
int FUN_00011270(void *param_1, void *param_2, void *param_3, int param_4)
{
 int unaff_EBX;
 ((void (*)(void))**(void ***)(unaff_EBX + 0x3c))();
 return param_4;
}


// Function: FUN_00011280 @ 0x11280
void FUN_00011280(void *param_1)
{
 int unaff_EBX;
 ((void (*)(void))**(void ***)(unaff_EBX + 0x40))();
 return;
}


// Function: FUN_00011290 @ 0x11290
void FUN_00011290(void)
{
 int unaff_EBX;
 ((void (*)(void))**(void ***)(unaff_EBX + 0x44))();
 return;
}


// Function: FUN_000112a0 @ 0x112a0
void FUN_000112a0(void *param_1, unsigned int param_2)
{
 int unaff_EBX;
 ((void (*)(void))**(void ***)(unaff_EBX + 0x48))();
 return;
}


// Function: FUN_000112b0 @ 0x112b0
void FUN_000112b0(void)
{
 int unaff_EBX;
 ((void (*)(void))**(void ***)(unaff_EBX + 0x4c))();
 return;
}


// Function: FUN_000112c0 @ 0x112c0
void FUN_000112c0(void *param_1)
{
 int unaff_EBX;
 ((void (*)(void))**(void ***)(unaff_EBX + 0x50))();
 return;
}


// Function: FUN_000112d0 @ 0x112d0
void FUN_000112d0(void)
{
 int unaff_EBX;
 ((void (*)(void))**(void ***)(unaff_EBX + 0x54))();
 return;
}


// Function: FUN_000112e0 @ 0x112e0
void FUN_000112e0(void)
{
 int unaff_EBX;
 ((void (*)(void))**(void ***)(unaff_EBX + 0x58))();
 return;
}


// Function: FUN_000112f0 @ 0x112f0
void FUN_000112f0(void *param_1, void *param_2, void *param_3)
{
 int unaff_EBX;
 ((void (*)(void))**(void ***)(unaff_EBX + 0x5c))();
 return;
}


// Function: FUN_00011300 @ 0x11300
void FUN_00011300(void)
{
 int unaff_EBX;
 ((void (*)(void))**(void ***)(unaff_EBX + 0x60))();
 return;
}


// Function: _start @ 0x11310
int main(void);
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 FUN_00011220(main,param_2,auStack_4,0,0,param_1,auStack_4);
 do {
  while( true );
 } while( true );
}


// Function: __i686.get_pc_thunk.bx @ 0x1133c
void __i686_get_pc_thunk_bx(void)
{
 return;
}


// Function: __x86.get_pc_thunk.bx @ 0x11340
void __x86_get_pc_thunk_bx(void)
{
 return;
}


// Function: deregister_tm_clones @ 0x11350
void deregister_tm_clones(void)
{
 return;
}


// Function: register_tm_clones @ 0x11390
void register_tm_clones(void)
{
 return;
}


// Function: __do_global_dtors_aux @ 0x113e0
void __do_global_dtors_aux(void)
{
 unsigned int uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x7c2b) == '\0') {
 if (*(int *)(unaff_EDI + 0x7bfb) != 0) {
 FUN_000111a0(*(unsigned int *)(unaff_EDI + 0x7c17));
 
 uVar1 = *(unsigned int *)(unaff_EDI + 0x7c2f);
 while (uVar1 < (((int)((char *)&unaff_EDI + 0x7823) - (int)((char *)&unaff_EDI + 0x781f)) >> 2) - 1U) {
 *(unsigned int *)(unaff_EDI + 0x7c2f) = uVar1 + 1;
 (**(void **)((int)(char *)&unaff_EDI + 0x781f + (uVar1 + 1) * 4))();
 uVar1 = *(unsigned int *)(unaff_EDI + 0x7c2f);
 
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x7c2b) = 1;
 
 return;
 }
 }
 }
}


// Function: __x86.get_pc_thunk.dx @ 0x11479
void __x86_get_pc_thunk_dx(void)
{
 return;
}


// Function: __x86.get_pc_thunk.di @ 0x1147d
void __x86_get_pc_thunk_di(void)
{
 return;
}


// Function: test_cpp_member_func @ 0x11482
int test_cpp_member_func(void);
int test_cpp_member_func(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 SimpleClass local_34;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 SimpleClass_SimpleClass(&local_34);
 SimpleClass_setValue(&local_34);
 iVar1 = SimpleClass_getValue(&local_34);
 iVar2 = SimpleClass_compute(&local_34, 3);
 iVar3 = SimpleClass_getClassID();
 iVar3 = iVar3 + iVar1 + iVar2;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar3 = __stack_chk_fail_local();
 }
 return iVar3;
}


// Function: test_cpp_constructor @ 0x11519
int test_cpp_constructor(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 LifecycleClass local_18;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 LifecycleClass_LifecycleClass(&local_18, 5);
 iVar1 = LifecycleClass_getData(&local_18, 2);
 iVar2 = LifecycleClass_getInstanceCount();
 LifecycleClass_LifecycleClass(&local_18);
 iVar3 = LifecycleClass_getInstanceCount();
 iVar1 = iVar1 + iVar2 + iVar3 * 1000;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}


// Function: call_virtual_func @ 0x1159f
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)(param_1,param_2);
 return;
}


// Function: test_cpp_virtual_func @ 0x115ca
int test_cpp_virtual_func(void)
{
 int iVar1;
 int in_GS_OFFSET;
 Base *local_34;
 int local_30;
 int local_2c;
 Base *local_28;
 Derived *local_24;
 int local_20;
 int local_1c;
 Derived local_18 [8];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_34 = (Base *)&PTR_virtual_func_00018da8;
 Derived_Derived(local_18,3);
 local_30 = Base_virtual_func((Base *)local_34,5);
 local_2c = Derived_virtual_func(local_18,5);
 local_28 = local_34;
 local_24 = local_18;
 local_20 = call_virtual_func(local_28,5);
 local_1c = call_virtual_func((Base *)local_24,5);
 iVar1 = local_30 + local_2c + local_20 + local_1c;
 Derived__Derived(local_18);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return iVar1;
}


// Function: test_cpp_multiple_inheritance @ 0x116de
int test_cpp_multiple_inheritance(void)
{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 MultiDerived local_20;
 unsigned int local_1c;
 BaseA *local_18;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 MultiDerived_MultiDerived(&local_20);
 local_1c = 100;
 local_14 = 200;
 iVar1 = MultiDerived_funcA(&local_20);
 local_18 = (BaseA *)&local_20;
 iVar2 = BaseA_funcA(local_18);
 iVar1 = iVar1 + iVar2 + ((unsigned int)((char *)&local_20 != (char *)local_18));
 MultiDerived__MultiDerived(&local_20);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return iVar1;
}


// Function: test_cpp_diamond_inheritance @ 0x117c0
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 DiamondDerived local_28 [16];
 VirtualBase *local_18;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 DiamondDerived_DiamondDerived(local_28);
 local_14 = 0x32;
 local_18 = (VirtualBase *)((char *)local_28 + 0x10);
 iVar1 = VirtualBase_func(local_18);
 local_14 = 100;
 iVar2 = VirtualBase_func(local_18);
 iVar1 = iVar1 + iVar2;
 DiamondDerived__DiamondDerived(local_28);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}


// Function: test_cpp_operator_overload @ 0x11888
int test_cpp_operator_overload(void)
{
 char cVar1;
 int iVar2;
 int in_GS_OFFSET;
 Point local_28;
 Point local_20;
 int local_18;
 int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_28.x = 1;
 local_28.y = 2;
 local_20.x = 3;
 local_20.y = 4;
 Point_operator_add((Point *)&local_18,&local_28,0,0);
 cVar1 = Point_operator_eq(&local_28,&local_20);
 Point_operator_inc((Point *)&local_18);
 if (cVar1 == '\0') {
 iVar2 = 10;
 }
 else {
 iVar2 = 0;
 }
 iVar2 = local_14 + local_18 + iVar2;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return iVar2;
}


// Function: test_cpp_template_func @ 0x11938
int test_cpp_template_func(void)
{
 int iVar1;
 int in_GS_OFFSET;
 int local_28;
 int local_24;
 int local_20;
 double local_1c;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_20 = template_max_int_(3,7);
 local_1c = template_max_double_(2.5,1.5);
 local_28 = 10;
 local_24 = 0x14;
 template_swap_int_(&local_28,&local_24);
 iVar1 = local_24 + (int)ROUND(local_1c) + local_20 + local_28;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return iVar1;
}


// Function: test_cpp_template_class @ 0x119f3
int test_cpp_template_class(void)
{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 longdouble lVar3;
 Container_int_ local_90 [44];
 Container_double_ local_64 [84];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 Container_int_Container(local_90);
 Container_int_push(local_90,10);
 Container_int_push(local_90,0x14);
 Container_int_push(local_90,0x1e);
 iVar1 = Container_int_get(local_90,0);
 iVar2 = Container_int_getSize(local_90);
 Container_double_Container(local_64);
 Container_double_push(local_64,20.5);
 lVar3 = (longdouble)*(double *)((char *)local_64);
 iVar1 = (int)ROUND((double)lVar3) + iVar1 + iVar2;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}


// Function: test_cpp_lambda()::_lambda_int__1::operator() @ 0x11b34
int  test_cpp_lambda_____lambda_int__1__operator__(_lambda_int__1_ *self,int param_1)
{
 **(int **)(self + 4) = **(int **)(self + 4) + 5;
 return **(int **)(self + 4) + *(int *)self * param_1;
}


// Function: test_cpp_lambda @ 0x11b6b
int test_cpp_lambda(void)
{
 int iVar1;
 int in_GS_OFFSET;
 unsigned int local_28;
 unsigned int local_24;
 int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int *local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_24 = 10;
 local_28 = 0x14;
 local_18 = 10;
 local_14 = &local_28;
 local_20 = test_cpp_lambda_____lambda_int__1__operator__((_lambda_int__1_ *)&local_18,3);
 local_1c = 0x1e;
 iVar1 = local_20 + 0x1e;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}


// Function: test_cpp_exception @ 0x11bd7
unsigned int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)FUN_000111d0(4);
 *puVar1 = 0x2a;
 FUN_000112f0(puVar1,&int::typeinfo,0);
 return 0;
}


// Function: test_cpp_smart_ptr()::_lambda_int_ptr__1::operator() @ 0x11d26
void 
test_cpp_smart_ptr_____lambda_int_ptr__1__operator__(_lambda_int___1_ *self,int *param_1)
{
 *param_1 = -1;
 if (param_1 != (int *)0x0) {
 FUN_00011200(param_1,4);
 }
}


// Function: test_cpp_smart_ptr @ 0x11d5e
int test_cpp_smart_ptr(void)
{
 int *piVar1;
 unsigned int *puVar2;
 type *ptVar3;
 int iVar4;
 int in_GS_OFFSET;
 _lambda_int___1_ local_2d;
 unique_ptr_int_std__default_delete_int__ local_2c [4];
 unique_ptr_int_std__default_delete_int__ local_28 [4];
 unique_ptr_int___std__default_delete_int____ local_24 [4];
 unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ local_20 [4];
 int local_1c;
 int local_18;
 int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 piVar1 = (int *)FUN_000111b0(4);
 *piVar1 = 100;
 std_unique_ptr_int_std__default_delete_int____unique_ptr_std__default_delete_int__void_
 (local_2c,piVar1);
 puVar2 = (unsigned int *)std_unique_ptr_int_std__default_delete_int____operator_(local_2c);
 *puVar2 = 200;
 ptVar3 = std_move_std__unique_ptr_int_std__default_delete_int____((unique_ptr *)local_2c);
 std_unique_ptr_int_std__default_delete_int____unique_ptr(local_28,(unique_ptr *)ptVar3);
 piVar1 = (int *)std_unique_ptr_int_std__default_delete_int____operator_(local_28);
 local_1c = *piVar1;
 piVar1 = (int *)FUN_00011230(0x14);
 *piVar1 = 1;
 piVar1[1] = 2;
 piVar1[2] = 3;
 piVar1[3] = 4;
 piVar1[4] = 5;
 std_unique_ptr_int___std__default_delete_int____unique_ptr_int__std__default_delete_int____void_bool_(local_24,piVar1);
 piVar1 = (int *)std_unique_ptr_int___std__default_delete_int____operator__(local_24,2);
 local_18 = *piVar1;
 piVar1 = (int *)FUN_000111b0(4);
 *piVar1 = 500;
 std_unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1____unique_ptr__lambda_int___1__void_
 (local_20,piVar1,&local_2d);
 piVar1 = (int *)std_unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1____operator_(local_20);
 local_14 = *piVar1;
 iVar4 = local_1c + local_18 + local_14;
 std_unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1______unique_ptr(local_20);
 std_unique_ptr_int___std__default_delete_int______unique_ptr(local_24);
 std_unique_ptr_int_std__default_delete_int______unique_ptr(local_28);
 std_unique_ptr_int_std__default_delete_int______unique_ptr(local_2c);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return iVar4;
}


// Function: test_cpp_rtti @ 0x11f3b
int test_cpp_rtti(void)
{
 char cVar1;
 RTTIDerivedA *local_this;
 RTTIDerivedB *this_00;
 int iVar2;
 unsigned int uVar3;
 int local_20;
 local_this = (RTTIDerivedA *)FUN_000111b0(4);
 local_this->base.vtable = (void **)0;
 RTTIDerivedA_RTTIDerivedA(local_this);
 this_00 = (RTTIDerivedB *)FUN_000111b0(4);
 this_00->base.vtable = (void **)0;
 RTTIDerivedB_RTTIDerivedB(this_00);
 local_20 = 0;
 if (local_this == (RTTIDerivedA *)0x0) {
 FUN_00011250((void *)0);
 local_20 = 10;
 }
 else {
 cVar1 = std_type_info_operator_eq
 (*(type_info **)((char *)local_this + -4),(type_info *)&RTTIDerivedA_typeinfo);
 if (cVar1 != '\0') {
 local_20 = 10;
 }
 else {
 if (this_00 == (RTTIDerivedB *)0x0) {
 FUN_00011250((void *)0);
 local_20 = local_20 + 0x14;
 }
 else {
 cVar1 = std_type_info_operator_eq
 (*(type_info **)((char *)this_00 + -4),(type_info *)&RTTIDerivedB_typeinfo);
 if (cVar1 != '\0') {
 local_20 = local_20 + 0x14;
 }
 else {
 if (local_this == (RTTIDerivedA *)0x0) {
 iVar2 = 0;
 }
 else {
 iVar2 = FUN_00011270(local_this,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 if (iVar2 != 0) {
 iVar2 = RTTIDerivedA_derivedA_data();
 local_20 = local_20 + iVar2;
 }
 }
 if (this_00 == (RTTIDerivedB *)0x0) {
 iVar2 = 0;
 }
 else {
 iVar2 = FUN_00011270(this_00,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (iVar2 != 0) {
 iVar2 = RTTIDerivedB_derivedB_data();
 local_20 = local_20 + iVar2;
 }
 }
 if (local_this == (RTTIDerivedA *)0x0) {
 local_this = (RTTIDerivedA *)FUN_00011250((void *)0);
 }
 else {
 uVar3 = std_type_info_name(*(type_info **)((char *)local_this + -4));
 iVar2 = FUN_000111e0(uVar3);
 local_20 = iVar2 + local_20;
 if (local_this != (RTTIDerivedA *)0x0) {
 ((void (*)(RTTIBase *))((void **)local_this->base.vtable)[1])((RTTIBase *)local_this);
 }
 }
 if (this_00 != (RTTIDerivedB *)0x0) {
 ((void (*)(RTTIBase *))((void **)this_00->base.vtable)[1])((RTTIBase *)this_00);
 }
 }
 }
 }
 }
 return local_20;
}


// Function: test_cpp_oo_features @ 0x120ea
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 FUN_000112c0(&DAT_0001503c);
 uVar1 = test_cpp_member_func();
 FUN_000112a0(&DAT_00015060,uVar1);
 uVar1 = test_cpp_constructor();
 FUN_000112a0(&DAT_0001507e,uVar1);
 uVar1 = test_cpp_virtual_func();
 FUN_000112a0(&DAT_0001509a,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 FUN_000112a0(&DAT_000150b6,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 FUN_000112a0(&DAT_000150d2,uVar1);
 uVar1 = test_cpp_operator_overload();
 FUN_000112a0(&DAT_000150ef,uVar1);
 uVar1 = test_cpp_template_func();
 FUN_000112a0(&DAT_0001510b,uVar1);
 uVar1 = test_cpp_template_class();
 FUN_000112a0(&DAT_00015127,uVar1);
 uVar1 = test_cpp_lambda();
 FUN_000112a0(&DAT_00015143,uVar1);
 uVar1 = test_cpp_exception();
 FUN_000112a0(&DAT_0001515f,uVar1);
 uVar1 = test_cpp_smart_ptr();
 FUN_000112a0(&DAT_0001517c,uVar1);
 uVar1 = test_cpp_rtti();
 FUN_000112a0(&DAT_00015199,uVar1);
 return;
}


// Function: main @ 0x12238
unsigned int main(void)
{
 test_cpp_oo_features();
 return 0;
}


// Function: std::__uniq_ptr_data<int,test_cpp_smart_ptr()::_lambda_int_ptr__1,true,false>::__uniq_ptr_impl<_lambda_int_ptr__1const&> @ 0x12258
void
std___uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1__true_false______uniq_ptr_impl__lambda_int___1_const__
 (__uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1__true_false_ *self,int *param_1
 ,_lambda_int___1_ *param_2)
{
 __uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1______uniq_ptr_impl__lambda_int___1_const__
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *)self,param_1,param_2);
 return;
}


// Function: std::unique_ptr<int,test_cpp_smart_ptr()::_lambda_int_ptr__1>::unique_ptr<_lambda_int_ptr__1,void> @ 0x12282
void
std_unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1____unique_ptr__lambda_int___1__void_
 (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *self,int *param_1,
 _lambda_int___1_ *param_2)
{
 __uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1__true_false______uniq_ptr_impl__lambda_int___1_const__
 ((__uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1__true_false_ *)self,param_1,
 param_2);
 return;
}


// Function: std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_unique_ptr @ 0x122aa
void
std_unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1______unique_ptr
 (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *self)
{
 int **ppiVar1;
 _lambda_int___1_ *deleter_00;
 int **ppiVar2;
 ppiVar1 = (int **)__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1______M_ptr
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *)self);
 if (*ppiVar1 != (int *)0x0) {
  deleter_00 = (_lambda_int___1_ *)get_deleter(self);
  ppiVar2 = (int **)move_int___(ppiVar1);
  test_cpp_smart_ptr_____lambda_int___1__operator__(deleter_00,*ppiVar2);
  
  *ppiVar1 = (int *)0x0;
 }
 return;
}


// Function: std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_operator_deref @ 0x12312
int *
std_unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1____operator_
 (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *self)
{
 return get(self);
}


// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda_int_ptr__1>::__uniq_ptr_impl<_lambda_int_ptr__1const&> @ 0x1233a
void
std___uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1______uniq_ptr_impl__lambda_int___1_const__
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *self,int *param_1,
 _lambda_int___1_ *param_2)
{
 _lambda_int___1_ *p_Var1;
 p_Var1 = forward_test_cpp_smart_ptr_____lambda_int___1_const__((type *)param_2);
 tuple_int__test_cpp_smart_ptr_____lambda_int___1__tuple_int____lambda_int___1_const__true_
 ((tuple_int__test_cpp_smart_ptr_____lambda_int___1__ *)self,&param_1,p_Var1);
 return;
}


// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda_int_ptr__1>::_M_ptr @ 0x12374
int *
std___uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1______M_ptr
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *self)
{
 return get_0u_int__test_cpp_smart_ptr_____lambda_int___1__((int *)self);
}


// Function: std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_get_deleter @ 0x12396
_lambda_int___1_ *
std_unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1____get_deleter
 (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *self)
{
 return __uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1______M_deleter
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *)self);
}


// Function: std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_get @ 0x123b8
int *
std_unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1____get
 (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *self)
{
 return __uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1______M_ptr
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *)self);
}


// Function: std::forward<test_cpp_smart_ptr()::_lambda_int_ptr__1const&> @ 0x123d9
_lambda_int___1_ * std_forward_test_cpp_smart_ptr_____lambda_int___1_const__(type *param_1)
{
 return (_lambda_int___1_ *)param_1;
}


// Function: std_tuple_int_test_cpp_smart_ptr_lambda_int_ptr_1_tuple @ 0x123ec
void
std_tuple_int__test_cpp_smart_ptr_____lambda_int___1__tuple_int____lambda_int___1_const__true_
 (tuple_int__test_cpp_smart_ptr_____lambda_int___1__ *self,int **param_1,
 _lambda_int___1_ *param_2)
{
 _lambda_int___1_ *p_Var1;
 int **ppiVar2;
 p_Var1 = std_forward_test_cpp_smart_ptr_____lambda_int___1_const__((type *)param_2);
 ppiVar2 = std_forward_int___((type *)param_1);
 std__Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1___Tuple_impl_int____lambda_int___1_const__void_
 ((_Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__ *)self,ppiVar2,p_Var1);
 return;
}


// Function: std_get_0u_int_test_cpp_smart_ptr_lambda_int_ptr_1 @ 0x1242f
type * std_get_0u_int__test_cpp_smart_ptr_____lambda_int___1__
 (_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = std___get_helper_0u_int__test_cpp_smart_ptr_____lambda_int___1__(param_1);
 return (type *)ppiVar1;
}


// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda_int_ptr__1>::_M_deleter @ 0x12450
_lambda_int___1_ *
std___uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1______M_deleter
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *self)
{
 return get_1u_int__test_cpp_smart_ptr_____lambda_int___1__((int *)self);
}


// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda_int_ptr__1>::_M_ptr @ 0x12472
int *
std___uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1______M_ptr
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *self)
{
 return get_0u_int__test_cpp_smart_ptr_____lambda_int___1__((int *)self);
}


// Function: std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::_lambda_int_ptr__1>::_Tuple_impl<int*&,_lambda_int_ptr__1const&,void> @ 0x12496
void
std__Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1___Tuple_impl_int____lambda_int___1_const__void_
 (_Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__ *self,int **param_1,
 _lambda_int___1_ *param_2)
{
 int **ppiVar1;
 std_forward_test_cpp_smart_ptr_____lambda_int___1_const__((type *)param_2);
 std__Tuple_impl_1u_test_cpp_smart_ptr_____lambda_int___1___Tuple_impl((_lambda_int___1_ *)self);
 ppiVar1 = std_forward_int___((type *)param_1);
 std__Head_base_0u_int__false__Head_base_int___((_Head_base_0u_int__false_ *)self,ppiVar1);
 return;
}


// Function: std::__get_helper<0u,int*,test_cpp_smart_ptr()::_lambda_int_ptr__1> @ 0x124e5
int ** std___get_helper_0u_int__test_cpp_smart_ptr_____lambda_int___1__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)std__Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1___M_head
 ((_lambda_int___1_ *)param_1);
 return ppiVar1;
}


// Function: std_get_1u_int_test_cpp_smart_ptr_lambda_int_ptr_1 @ 0x12505
type * std_get_1u_int__test_cpp_smart_ptr_____lambda_int___1__
 (_Tuple_impl *param_1)
{
 _lambda_int___1_ *p_Var1;
 p_Var1 = std___get_helper_1u_test_cpp_smart_ptr_____lambda_int___1__(param_1);
 return (type *)p_Var1;
}


// Function: std_get_0u_int_test_cpp_smart_ptr_lambda_int_ptr_1_dup @ 0x12525
type * std_get_0u_int__test_cpp_smart_ptr_____lambda_int___1__
 (_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = std___get_helper_0u_int__test_cpp_smart_ptr_____lambda_int___1__(param_1);
 return (type *)ppiVar1;
}


// Function: std_Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_ptr_1_Tuple_impl @ 0x12546
void std__Tuple_impl_1u_test_cpp_smart_ptr_____lambda_int___1___Tuple_impl
 (_lambda_int___1_ *param_1)
{
 std__Head_base_1u_test_cpp_smart_ptr_____lambda_int___1__true__Head_base(param_1);
 return;
}


// Function: std_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_int_ptr_1_M_head @ 0x1256a
void std__Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1___M_head
 (_lambda_int___1_ *param_1)
{
 std__Head_base_0u_int__false__M_head((_Head_base *)param_1);
 return;
}


// Function: std::__get_helper<1u,test_cpp_smart_ptr()::_lambda_int_ptr__1> @ 0x1258b
_lambda_int___1_ *
std___get_helper_1u_test_cpp_smart_ptr_____lambda_int___1__(_Tuple_impl *param_1)
{
 _lambda_int___1_ *p_Var1;
 p_Var1 = (_lambda_int___1_ *)
 std__Tuple_impl_1u_test_cpp_smart_ptr_____lambda_int___1___M_head
 ((_lambda_int___1_ *)param_1);
 return p_Var1;
}


// Function: std::__get_helper<0u,int*,test_cpp_smart_ptr()::_lambda_int_ptr__1> @ 0x125ab
int ** std___get_helper_0u_int__test_cpp_smart_ptr_____lambda_int___1__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)std__Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1___M_head
 ((_lambda_int___1_ *)param_1);
 return ppiVar1;
}


// Function: std::_Head_base<1u,test_cpp_smart_ptr()::_lambda_int_ptr__1,true>::_Head_base @ 0x125cc
void
std__Head_base_1u_test_cpp_smart_ptr_____lambda_int___1__true__Head_base
 (_lambda_int___1_ *self)
{
 return;
}


// Function: std_Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_ptr_1_M_head @ 0x125dc
void std__Tuple_impl_1u_test_cpp_smart_ptr_____lambda_int___1___M_head(_lambda_int___1_ *param_1)
{
 std__Head_base_1u_test_cpp_smart_ptr_____lambda_int___1__true__M_head(param_1);
 return;
}


// Function: std_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_int_ptr_1_M_head_dup @ 0x125fc
void std__Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1___M_head
 (_lambda_int___1_ *param_1)
{
 std__Head_base_0u_int__false__M_head((_Head_base *)param_1);
 return;
}


// Function: std_Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_1_true_M_head @ 0x1261d
_lambda_int___1_ *
std__Head_base_1u_test_cpp_smart_ptr_____lambda_int___1__true__M_head(_lambda_int___1_ *param_1)
{
 return param_1;
}


// Function: __static_initialization_and_destruction_0 @ 0x1262f
void __static_initialization_and_destruction_0(int param_1,int param_2)
{
 if ((param_1 == 1) && (param_2 == 0xffff)) {
 FUN_000112d0(&std___ioinit);
 FUN_000111f0(std_ios_base_Init__Init,&std___ioinit,&__dso_handle);
 }
 return;
}


// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x1268c
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 __static_initialization_and_destruction_0(1,0xffff);
 return;
}


// Function: std_type_info_name @ 0x126b4
int std_type_info_name(type_info *self);
int std_type_info_name(type_info *self)
{
 int iVar1;
 if (**(char **)(self + 4) == '*') {
  iVar1 = *(int *)(self + 4) + 1;
 }
 else {
  iVar1 = *(int *)(self + 4);
 }
 return iVar1;
}


// Function: std_type_info_operator_eq @ 0x126e6
unsigned int std_type_info_operator_eq(type_info *self,type_info *param_1)
{
 int iVar1;
 unsigned int uVar2;
 if (*(int *)((char *)self + 4) == *(int *)((char *)param_1 + 4)) {
LAB_00012738:
 uVar2 = 1;
 }
 else {
 if (**(char **)((char *)self + 4) != '*') {
 iVar1 = FUN_00011210(*(unsigned int *)((char *)self + 4),*(unsigned int *)((char *)param_1 + 4));
 if (iVar1 == 0) goto LAB_00012738;
 }
 uVar2 = 0;
 }
 return uVar2;
}


// Function: SimpleClass_SimpleClass @ 0x1274a
void SimpleClass_SimpleClass(SimpleClass *self, int param_1, char *param_2)
{
 *(int *)self = param_1;
 FUN_00011240((char *)self + 4,param_2,0x1f,0x1275a);
 ((char *)self)[0x23] = (char)0x0;
 return;
}


// Function: SimpleClass_getValue @ 0x1278e
unsigned int SimpleClass_getValue(SimpleClass *self)
{
 return *(unsigned int *)((char *)self);
}


// Function: SimpleClass_setValue @ 0x127a6
void SimpleClass_setValue(SimpleClass *self, int param_1)
{
 *(int *)((char *)self) = param_1;
 return;
}


// Function: SimpleClass_compute @ 0x127c2
int SimpleClass_compute(SimpleClass *self,int param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = *(int *)((char *)self);
 iVar2 = FUN_000111e0((char *)self + 4);
 return iVar2 + iVar1 * param_1;
}


// Function: SimpleClass::getClassID @ 0x127fd
unsigned int SimpleClass_getClassID(void)
{
 return 0x1234;
}


// Function: LifecycleClass_LifecycleClass @ 0x12816
void LifecycleClass_LifecycleClass(LifecycleClass *self,unsigned int param_1);
void LifecycleClass_LifecycleClass(LifecycleClass *self,unsigned int param_1)
{
 unsigned int uVar1;
 unsigned int local_10;
 *(unsigned int *)((char *)self + 4) = param_1;
 if (param_1 < 0x20000000) {
 uVar1 = FUN_00011230(param_1 << 2);
 *(unsigned int *)((char *)self) = uVar1;
 for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {
 *(unsigned int *)((char *)self + local_10 * 4) = local_10 * 10;
 instance_count = instance_count + 1;
 }
 return;
 }
 FUN_00011290();
}


// Function: LifecycleClass_LifecycleClass @ 0x128a4
void LifecycleClass_LifecycleClass(LifecycleClass *self)
{
 if (*(int *)((char *)self) != 0) {
 FUN_00011280(*(unsigned int *)((char *)self));
 
 instance_count = instance_count + -1;
 }
 return;
}


// Function: LifecycleClass_getData @ 0x128ea
unsigned int LifecycleClass_getData(LifecycleClass *self,unsigned int param_1);
unsigned int LifecycleClass_getData(LifecycleClass *self,unsigned int param_1)
{
 unsigned int uVar1;
 if (param_1 < *(uint *)((char *)self + 4)) {
 uVar1 = *(unsigned int *)((char *)self + param_1 * 4);
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}


// Function: LifecycleClass_getInstanceCount @ 0x1291e
unsigned int LifecycleClass_getInstanceCount(void);
unsigned int LifecycleClass_getInstanceCount(void)
{
 return instance_count;
}


// Function: Base_virtual_func @ 0x12938
int Base_virtual_func(Base *self,int param_1)
{
 (void)self;
 return param_1 + 1;
}


// Function: Base_getName @ 0x12952
char * Base_getName(void)
{
 return (char *)&DAT_0001502d;
}


// Function: Base_Base @ 0x1296c
void Base_Base(Base *self)
{
 *(void ***)((char *)self) = (void **)&PTR_virtual_func_00018da8;
 return;
}


// Function: Derived_Derived @ 0x129e6
void Derived_Derived(Derived *self,int param_1)
{
 Base_Base((Base *)self);
 *(void ***)((char *)self) = &PTR_virtual_func_00018d90;
 *(int *)((char *)self + 4) = param_1;
 return;
}


// Function: Derived_virtual_func @ 0x12a26
int Derived_virtual_func(Derived *self,int param_1)
{
 return *(int *)((char *)self + 4) * param_1;
}

// Forward declarations for virtual functions
int Base_virtual_func(Base *self,int param_1);
int Derived_virtual_func(Derived *self,int param_1);
void Base_Base(Base *self);
void Derived_Derived(Derived *self,int param_1);
void Derived__Derived(Derived *self);
void Base__Base(Base *self);
void Derived_Derived(Derived *self);
void Derived_Derived(Derived *self);


// Function: Derived_getName @ 0x12a44
char * Derived_getName(void)
{
 return (char *)"Derived";
}


// Function: BaseA_funcA @ 0x12a5e
unsigned int BaseA_funcA(BaseA *self)
{
 (void)self;
 return 10;
}

// Function: BaseB_funcB @ 0x12ad0
unsigned int BaseB_funcB(BaseB *self)
{
 (void)self;
 return 0x14;
}

// Function: MultiDerived_funcA @ 0x12b42
unsigned int MultiDerived_funcA(MultiDerived *self)
{
 (void)self;
 return 0x1e;
}

// Function: MultiDerived_funcB @ 0x12b5a
unsigned int MultiDerived_funcB_0(MultiDerived *self)
{
 (void)self;
 return 0x28;
}


// Function: BaseA_BaseA @ 0x12a76
void BaseA_BaseA(BaseA *self)
{
 *(void ***)((char *)self) = (void **)&PTR_funcA_00018d7c;
 return;
}





// Function: BaseB_BaseB @ 0x12ae8
void BaseB_BaseB(BaseB *self)
{
 *(void ***)((char *)self) = (void **)&PTR_funcB_00018d68;
 return;
}








// Function: MultiDerived_funcB @ 0x12b72
void MultiDerived_funcB_call(MultiDerived *self)
{
 MultiDerived_funcB_0(self);
 return;
}





// Function: MultiDerived_MultiDerived @ 0x12bbe
void MultiDerived_MultiDerived(MultiDerived *self)
{
 BaseA_BaseA((BaseA *)self);
 BaseB_BaseB((BaseB *)((char *)self + 8));
 *(void ***)((char *)self) = &PTR_funcA_00018d3c;
 *(void ***)((char *)self + 8) = &PTR_funcB_00018d54;
 return;
}


// Function: VirtualBase_func @ 0x12c12
unsigned int VirtualBase_func(VirtualBase *self)
{
 (void)self;
 return 100;
}


// Function: VirtualBase_VirtualBase @ 0x12c2a
void VirtualBase_VirtualBase(VirtualBase *self)
{
 *(void ***)((char *)self) = (void **)&PTR_func_00018d28;
 return;
}


// Function: MiddleA_func @ 0x12c84
int MiddleA_func_get(MiddleA *self)
{
 return *(int *)((char *)self + *(int *)(*(int *)((char *)self) + -0xc) + 4) + 0x96;
}

// Function: MiddleA_func @ 0x12cb0
void MiddleA_func_call(MiddleA *self)
{
 MiddleA_func_get((MiddleA *)((char *)self + *(int *)(*(int *)((char *)self) + -0xc)));
 return;
}





// Function: MiddleB_func @ 0x12cc4
int MiddleB_func_get(MiddleB *self)
{
 return *(int *)((char *)self + *(int *)(*(int *)((char *)self) + -0xc) + 4) + 200;
}

// Function: MiddleB_func @ 0x12cf0
void MiddleB_func_call(MiddleB *self)
{
 MiddleB_func_get((MiddleB *)((char *)self + *(int *)(*(int *)((char *)self) + -0xc)));
 return;
}





// Function: DiamondDerived_func @ 0x12d04
int DiamondDerived_func_get(DiamondDerived *self)
{
 return *(int *)((char *)self + *(int *)(*(int *)((char *)self) + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived_func @ 0x12d30
void DiamondDerived_func_call(DiamondDerived *self)
{
 DiamondDerived_func_get((DiamondDerived *)((char *)self + *(int *)(*(int *)((char *)self) + -0xc)));
 return;
}

// Function: DiamondDerived_func @ 0x12d43
void DiamondDerived_func_call2(DiamondDerived *self)
{
 DiamondDerived_func_get((DiamondDerived *)((char *)self + -8));
 return;
}








// Function: VirtualBase_VirtualBase @ 0x12d4e
void VirtualBase_VirtualBase(VirtualBase *self)
{
 *(void ***)((char *)self) = (void **)&PTR_func_00018d28;
 return;
}


// Function: MiddleA_MiddleA @ 0x12d6e
void MiddleA_MiddleA(MiddleA *self)
{
 unsigned int *in_stack_00000008;
 *(unsigned int *)((char *)self) = *in_stack_00000008;
 *(unsigned int *)((char *)self + *(int *)(*(int *)((char *)self) + -0xc)) = in_stack_00000008[1];
 return;
}


// Function: MiddleA_MiddleA @ 0x12da6
void MiddleA_MiddleA(MiddleA *self)
{
 unsigned int *in_stack_00000008;
 *(unsigned int *)((char *)self) = *in_stack_00000008;
 *(unsigned int *)((char *)self + *(int *)(*(int *)((char *)self) + -0xc)) = in_stack_00000008[1];
 return;
}


// Function: MiddleB_MiddleB @ 0x12dde
void MiddleB_MiddleB(MiddleB *self)
{
 unsigned int *in_stack_00000008;
 *(unsigned int *)((char *)self) = *in_stack_00000008;
 *(unsigned int *)((char *)self + *(int *)(*(int *)((char *)self) + -0xc)) = in_stack_00000008[1];
 return;
}


// Function: MiddleB_MiddleB @ 0x12e16
void MiddleB_MiddleB(MiddleB *self)
{
 unsigned int *in_stack_00000008;
 *(unsigned int *)((char *)self) = *in_stack_00000008;
 *(unsigned int *)((char *)self + *(int *)(*(int *)((char *)self) + -0xc)) = in_stack_00000008[1];
 return;
}


// Function: DiamondDerived_DiamondDerived @ 0x12e4e
void DiamondDerived_DiamondDerived(DiamondDerived *self)
{
 VirtualBase_VirtualBase((VirtualBase *)((char *)self + 0x10));
 MiddleA_MiddleA((MiddleA *)self);
 MiddleB_MiddleB((MiddleB *)((char *)self + 8));
 *(unsigned int *)((char *)self) = 0x18c5c;
 *(unsigned int *)((char *)self + 0x10) = 0x18c90;
 *(unsigned int *)((char *)self + 8) = 0x18c74;
 return;
}


// Function: Point_Point @ 0x12ed0
void Point_Point(Point *self,int param_1,int param_2)
{
 *(int *)((char *)self) = param_1;
 *(int *)((char *)self + 4) = param_2;
 return;
}


// Function: Point_operator_add @ 0x12ef6
Point *  Point_operator_add(Point *self,Point *param_1,int x_val,int y_val)
{
 Point_Point(self,x_val + param_1->x,param_1->y + y_val);
 return self;
}


// Function: Point_operator_eq @ 0x12f3c
unsigned int Point_operator_eq(Point *self,Point *param_1)
{
 unsigned int uVar1;
 if ((self->x == param_1->x) && (self->y == param_1->y)) {
 uVar1 = 1;
 }
 else {
 uVar1 = 0;
 }
 return uVar1;
}


// Function: Point_operator_inc @ 0x12f7a
Point * Point_operator_inc(Point *self)
{
 self->x = self->x + 1;
 self->y = self->y + 1;
 return self;
}


// Function: template_max<int> @ 0x12fac
int template_max_int_(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}


// Function: template_max<double> @ 0x12fcf
double template_max_double_(double param_1,double param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}


// Function: template_swap<int> @ 0x13011
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}


// Function: Container_int_Container @ 0x13042
void Container_int_Container(Container_int_ *self)
{
 *(unsigned int *)((char *)self + 0x28) = 0;
 return;
}


// Function: Container_int_push @ 0x13060
void Container_int_push(Container_int_ *self,int param_1)
{
 int iVar1;
 if (*(int *)((char *)self + 0x28) < 10) {
 iVar1 = *(int *)((char *)self + 0x28);
 *(int *)((char *)self + 0x28) = iVar1 + 1;
 *(int *)((char *)self + iVar1 * 4) = param_1;
 }
 return;
}


// Function: Container_int_get @ 0x1309c
unsigned int Container_int_get(Container_int_ *self,int param_1)
{
 unsigned int uVar1;
 if ((param_1 < 0) || (*(int *)((char *)self + 0x28) <= param_1)) {
 uVar1 = 0;
 }
 else {
 uVar1 = *(unsigned int *)((char *)self + param_1 * 4);
 }
 return uVar1;
}


// Function: Container_int_getSize @ 0x130d0
unsigned int Container_int_getSize(Container_int_ *self)
{
 return *(unsigned int *)((char *)self + 0x28);
}


// Function: Container_double_Container @ 0x130ea
void Container_double_Container(Container_double_ *self)
{
 *(unsigned int *)((char *)self + 0x50) = 0;
 return;
}


// Function: Container_double_push @ 0x13108
void Container_double_push(Container_double_ *self,double param_1)
{
 int iVar1;
 if (*(int *)((char *)self + 0x50) < 10) {
 iVar1 = *(int *)((char *)self + 0x50);
 *(int *)((char *)self + 0x50) = iVar1 + 1;
 *(double *)((char *)self + iVar1 * 8) = param_1;
 }
}


// Function: Container_double_get @ 0x1314e
double Container_double_get(Container_double_ *self,int param_1)
{
 double dVar1;
 dVar1 = 0.0;
 if ((-1 < param_1) && (param_1 < *(int *)((char *)self + 0x50))) {
 dVar1 = *(double *)((char *)self + param_1 * 8);
 }
 return dVar1;
}


// Function: Container_double_getSize @ 0x13180
unsigned int Container_double_getSize(Container_double_ *self)
{
 return *(unsigned int *)((char *)self + 0x50);
}


// Function: std___uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_data @ 0x1319a
void std___uniq_ptr_data_int_std__default_delete_int__true_true______uniq_ptr_data
 (__uniq_ptr_data_int_std__default_delete_int__true_true_ *self,__uniq_ptr_data *param_1)
{
 std___uniq_ptr_impl_int_std__default_delete_int______uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)self,(__uniq_ptr_impl *)param_1);
}

// Missing function declaration
void std___uniq_ptr_impl_int_std__default_delete_int______uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int__ *self,__uniq_ptr_impl *param_1);


// Function: std_unique_ptr_int_std_default_delete_int_unique_ptr @ 0x131c4
void std_unique_ptr_int_std__default_delete_int____unique_ptr
 (unique_ptr_int_std__default_delete_int__ *self,unique_ptr *param_1)
{
 std___uniq_ptr_data_int_std__default_delete_int__true_true______uniq_ptr_data
 ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)self,
 (__uniq_ptr_data *)param_1);
}


// Function: RTTIBase_getType @ 0x131ee
unsigned int RTTIBase_getType(void)
{
 return 0;
}


// Function: RTTIDerivedA_getType @ 0x13206
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}


// Function: RTTIDerivedA_derivedA_data @ 0x1321e
unsigned int RTTIDerivedA_derivedA_data(void)
{
 return 100;
}


// Function: RTTIDerivedB_getType @ 0x13236
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}


// Function: RTTIDerivedB_derivedB_data @ 0x1324e
unsigned int RTTIDerivedB_derivedB_data(void)
{
 return 200;
}


// Function: RTTIBase_RTTIBase @ 0x13266
void RTTIBase_RTTIBase(RTTIBase *self)
{
 *(void ***)((char *)self) = (void **)&PTR__RTTIBase_00018c44;
 return;
}


// Function: RTTIDerivedA_RTTIDerivedA @ 0x132e0
void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *self)
{
 RTTIBase_RTTIBase((RTTIBase *)self);
 *(void ***)((char *)self) = (void **)&PTR__RTTIDerivedA_00018c30;
 return;
}


// Function: RTTIDerivedB_RTTIDerivedB @ 0x13316
void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *self)
{
 RTTIBase_RTTIBase((RTTIBase *)self);
 *(void ***)((char *)self) = (void **)&PTR__RTTIDerivedB_00018c1c;
 return;
}


// Function: std___uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_impl @ 0x1334c
void std___uniq_ptr_data_int_std__default_delete_int__true_true______uniq_ptr_impl
 (__uniq_ptr_data_int_std__default_delete_int__true_true_ *self,int *param_1)
{
 std___uniq_ptr_impl_int_std__default_delete_int______uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)self,(__uniq_ptr_impl *)param_1);
}


// Function: std_unique_ptr_int_std_default_delete_int_unique_ptr_std_default_delete_int_void @ 0x13376
void std_unique_ptr_int_std__default_delete_int____unique_ptr_std__default_delete_int__void_
 (unique_ptr_int_std__default_delete_int__ *self,int *param_1)
{
 std___uniq_ptr_data_int_std__default_delete_int__true_true______uniq_ptr_impl
 ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)self,param_1);
}


// Function: std_unique_ptr_int_std_default_delete_int_unique_ptr @ 0x133a0
void
std_unique_ptr_int_std__default_delete_int______unique_ptr
 (unique_ptr_int_std__default_delete_int__ *self)
{
 int **ppiVar1;
 default_delete_int_ *deleter_00;
 int **ppiVar2;
 ppiVar1 = (int **)__uniq_ptr_impl_int_std__default_delete_int______M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)self);
 if (*ppiVar1 != (int *)0x0) {
  deleter_00 = (default_delete_int_ *)get_deleter(self);
  ppiVar2 = (int **)move_int___(ppiVar1);
  default_delete_int_operator__(deleter_00,*ppiVar2);
  
  *ppiVar1 = (int *)0x0;
 }
 return;
}


// Function: std_unique_ptr_int_std_default_delete_int_operator_deref @ 0x1340c
int *
std_unique_ptr_int_std__default_delete_int____operator_
 (unique_ptr_int_std__default_delete_int__ *self)
{
 return get(self);
}


// Function: std_move_std_unique_ptr_int_std_default_delete_int @ 0x13437
type * std_move_std__unique_ptr_int_std__default_delete_int____(unique_ptr *param_1);
type * std_move_std__unique_ptr_int_std__default_delete_int____(unique_ptr *param_1)
{
 return (type *)param_1;
}


// Function: std__Tuple_impl_0u_int_std_default_delete_int__Tuple_impl @ 0x1344e
void std__Tuple_impl_0u_int__std__default_delete_int___Tuple_impl
 (_Tuple_impl_0u_int__std__default_delete_int__ *self,_Tuple_impl *param_1)
{
 std__Tuple_impl_1u_std__default_delete_int___Tuple_impl((_Tuple_impl *)self);
 *(unsigned int *)self = *(unsigned int *)param_1;
}


// Function: std_tuple_int_std_default_delete_int_tuple @ 0x13480
void std_tuple_int__std__default_delete_int__tuple
 (tuple_int__std__default_delete_int__ *self,tuple *param_1)
{
 std__Tuple_impl_0u_int__std__default_delete_int___Tuple_impl
 ((_Tuple_impl_0u_int__std__default_delete_int__ *)self,(_Tuple_impl *)param_1);
}


// Function: std___uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl @ 0x134aa
void std___uniq_ptr_impl_int_std__default_delete_int______uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int__ *self,__uniq_ptr_impl *param_1)
{
 type *ptVar1;
 unsigned int *puVar2;
 ptVar1 = std_move_std__tuple_int__std__default_delete_int____((tuple *)param_1);
 std_tuple_int__std__default_delete_int__tuple
 ((tuple_int__std__default_delete_int__ *)self,(tuple *)ptVar1);
 puVar2 = (unsigned int *)(uintptr_t)std___uniq_ptr_impl_int_std__default_delete_int______M_ptr((__uniq_ptr_impl_int_std__default_delete_int__ *)param_1);
 if (puVar2 != (unsigned int *)0x0) {
 *puVar2 = 0;
 }
 return;
}

// Function: std___uniq_ptr_impl_int_std_default_delete_int_array___uniq_ptr_impl @ 0x13702
void std___uniq_ptr_impl_int_std__default_delete_int_______uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int____ *self,int *param_1);


// Function: std___uniq_ptr_data_int_std_default_delete_int_array_true_true___uniq_ptr_impl @ 0x134f8
void std___uniq_ptr_data_int_std__default_delete_int____true_true______uniq_ptr_impl
 (__uniq_ptr_data_int_std__default_delete_int____true_true_ *self,int *param_1)
{
 std___uniq_ptr_impl_int_std__default_delete_int_______uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)self,param_1);
}


// Function: std_unique_ptr_int_array_std_default_delete_int_array_unique_ptr_int_std_default_delete_int_array_void_bool @ 0x13522
void std_unique_ptr_int___std__default_delete_int____unique_ptr_int__std__default_delete_int____void_bool_
 (unique_ptr_int___std__default_delete_int____ *self,int *param_1)
{
 std___uniq_ptr_data_int_std__default_delete_int____true_true______uniq_ptr_impl
 ((__uniq_ptr_data_int_std__default_delete_int____true_true_ *)self,param_1);
}


// Function: std_unique_ptr_int_array_std_default_delete_int_array_unique_ptr @ 0x1354c
void
std_unique_ptr_int___std__default_delete_int______unique_ptr
 (unique_ptr_int___std__default_delete_int____ *self)
{
 int *piVar1;
 default_delete_int___ *deleter_00;
 piVar1 = __uniq_ptr_impl_int_std__default_delete_int_______M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)self);
 if (piVar1 != (int *)0x0) {
  deleter_00 = (default_delete_int___ *)get_deleter(self);
  default_delete_int_array_operator__(deleter_00,piVar1);
 }
 return;
}


// Function: std_unique_ptr_int_array_std_default_delete_int_array_operator_index @ 0x135a8
int
std_unique_ptr_int___std__default_delete_int____operator__
 (unique_ptr_int___std__default_delete_int____ *self,uint param_1)
{
 int *piVar1;
 piVar1 = std_unique_ptr_int___std__default_delete_int____get(self);
 return piVar1[param_1];
}


// Function: std___uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl @ 0x135de
void std___uniq_ptr_impl_int_std__default_delete_int______uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int__ *self,int *param_1)
{
 int **ppiVar1;
 std_tuple_int__std__default_delete_int__tuple_true_true_
 ((tuple_int__std__default_delete_int__ *)self);
 ppiVar1 = (int **)std___uniq_ptr_impl_int_std__default_delete_int______M_ptr(self);
 if (ppiVar1 != (int **)0x0) {
 *ppiVar1 = param_1;
 }
 return;
}


// Function: std___uniq_ptr_impl_int_std_default_delete_int___M_ptr @ 0x1361c
int * std___uniq_ptr_impl_int_std__default_delete_int______M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int__ *self)
{
 return std_get_0u_int__std__default_delete_int__((tuple *)self);
}


// Function: std_unique_ptr_int_std_default_delete_int_get_deleter @ 0x13642
void *
std_unique_ptr_int_std__default_delete_int____get_deleter
 (unique_ptr_int_std__default_delete_int__ *self)
{
 return __uniq_ptr_impl_int_std__default_delete_int______M_deleter
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)self);
}


// Function: std_move_int @ 0x13667
type * std_move_int___(int **param_1)
{
 return (type *)param_1;
}


// Function: std_default_delete_int_operator_call @ 0x1367e
void std_default_delete_int_operator__(default_delete_int_ *self,int *param_1)
{
 if (param_1 != (int *)0x0) {
  FUN_00011200(param_1,4);
 }
 return;
}


// Function: std_unique_ptr_int_std_default_delete_int_get @ 0x136b2
int *
std_unique_ptr_int_std__default_delete_int____get(unique_ptr_int_std__default_delete_int__ *self)
{
 return __uniq_ptr_impl_int_std__default_delete_int______M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)self);
}


// Function: std_move_std_tuple_int_std_default_delete_int @ 0x136d7
type * std_move_std__tuple_int__std__default_delete_int____(tuple *param_1)
{
 return (type *)param_1;
}


// Function: std__Tuple_impl_1u_std__default_delete_int__Tuple_impl @ 0x136ee
char ** std__Tuple_impl_1u_std__default_delete_int___Tuple_impl(_Tuple_impl *param_1)
{
 return &_GLOBAL_OFFSET_TABLE_;
}


// Function: std___uniq_ptr_impl_int_std_default_delete_int_array___uniq_ptr_impl @ 0x13702
void std___uniq_ptr_impl_int_std__default_delete_int_______uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int____ *self,int *param_1)
{
 int *piVar1;
 std_tuple_int__std__default_delete_int____tuple_true_true_
 ((tuple_int__std__default_delete_int____ *)self);
 piVar1 = std___uniq_ptr_impl_int_std__default_delete_int_______M_ptr(self);
 if (piVar1 != (int *)0x0) {
 *piVar1 = *param_1;
 }
 return;
}


// Function: std___uniq_ptr_impl_int_std_default_delete_int_array___M_ptr @ 0x13740
int * std___uniq_ptr_impl_int_std__default_delete_int_______M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int____ *self)
{
 return std_get_0u_int__std__default_delete_int____((tuple *)self);
}


// Function: std_unique_ptr_int_array_std_default_delete_int_array_get_deleter @ 0x13766
void *
std_unique_ptr_int___std__default_delete_int____get_deleter
 (unique_ptr_int___std__default_delete_int____ *self)
{
 return __uniq_ptr_impl_int_std__default_delete_int______M_deleter
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)self);
}


// Function: std_default_delete_int_array_operator_call @ 0x1378c
void std_default_delete_int_array_operator__(default_delete_int___ *self,int *param_1)
{
 if (param_1 != (int *)0x0) {
  FUN_00011280(param_1);
 }
 return;
}


// Function: std_unique_ptr_int_array_std_default_delete_int_array_get @ 0x137be
int *
std_unique_ptr_int___std__default_delete_int____get
 (unique_ptr_int___std__default_delete_int____ *self)
{
 return __uniq_ptr_impl_int_std__default_delete_int_______M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)self);
}


// Function: std_tuple_int_std_default_delete_int_tuple_true_true @ 0x137e4
void std_tuple_int__std__default_delete_int__tuple_true_true_
 (tuple_int__std__default_delete_int__ *self)
{
 std__Tuple_impl_0u_int__std__default_delete_int___Tuple_impl
 ((_Tuple_impl_0u_int__std__default_delete_int__ *)self);
 return;
}


// Function: std_get_0u_int_std_default_delete_int @ 0x1380a
type * std_get_0u_int__std__default_delete_int__(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}


// Function: std___uniq_ptr_impl_int_std_default_delete_int___M_deleter @ 0x13830
void * std___uniq_ptr_impl_int_std__default_delete_int______M_deleter
 (__uniq_ptr_impl_int_std__default_delete_int__ *self)
{
 return (void *)(uintptr_t)std_get_1u_int__std__default_delete_int__((tuple *)self);
}


// Function: std___uniq_ptr_impl_int_std_default_delete_int___M_ptr @ 0x13856
int * std___uniq_ptr_impl_int_std__default_delete_int______M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int__ *self)
{
 int **ppiVar1;
 ppiVar1 = (int **)(uintptr_t)std_get_0u_int__std__default_delete_int__((tuple *)self);
 return *ppiVar1;
}


// Function: std_tuple_int_std_default_delete_int_array_tuple_true_true @ 0x1387e
void std_tuple_int__std__default_delete_int____tuple_true_true_
 (tuple_int__std__default_delete_int____ *self)
{
 std__Tuple_impl_0u_int__std__default_delete_int______Tuple_impl
 ((_Tuple_impl_0u_int__std__default_delete_int____ *)self);
 return;
}


// Function: std_get_0u_int_std_default_delete_int_array @ 0x138a4
type * std_get_0u_int__std__default_delete_int____(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__std__default_delete_int____((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}


// Function: std___uniq_ptr_impl_int_std_default_delete_int_array___M_deleter @ 0x138ca
void * std___uniq_ptr_impl_int_std__default_delete_int_______M_deleter
 (__uniq_ptr_impl_int_std__default_delete_int____ *self)
{
 return (void *)(uintptr_t)std_get_1u_int__std__default_delete_int____((tuple *)self);
}


// Function: std___uniq_ptr_impl_int_std_default_delete_int_array___M_ptr @ 0x138f0
int * std___uniq_ptr_impl_int_std__default_delete_int_______M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int____ *self)
{
 int **ppiVar1;
 ppiVar1 = (int **)(uintptr_t)std_get_0u_int__std__default_delete_int____((tuple *)self);
 return *ppiVar1;
}


// Function: std__Tuple_impl_0u_int__std__default_delete_int___Tuple_impl @ 0x13918
void std__Tuple_impl_0u_int__std__default_delete_int___Tuple_impl
 (_Tuple_impl_0u_int__std__default_delete_int__ *self)
{
 std__Tuple_impl_1u_std__default_delete_int___Tuple_impl((_Tuple_impl *)self);
 std__Head_base_0u_int__false__Head_base((_Head_base_0u_int__false_ *)self, (int **)0);
 return;
}


// Function: std__get_helper_0u_int__std__default_delete_int__ @ 0x1394c
int ** std__get_helper_0u_int__std__default_delete_int__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)std__Tuple_impl_0u_int__std__default_delete_int___M_head(param_1);
 return ppiVar1;
}


// Function: std_get_1u_int_std_default_delete_int @ 0x13970
type * std_get_1u_int__std__default_delete_int__(tuple *param_1)
{
 default_delete *pdVar1;
 pdVar1 = (default_delete *)__get_helper_1u_std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}


// Function: std_get_0u_int_std_default_delete_int_dup @ 0x13994
type * std_get_0u_int__std__default_delete_int__(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}


// Function: std__Tuple_impl_0u_int__std__default_delete_int______Tuple_impl @ 0x139ba
void std__Tuple_impl_0u_int__std__default_delete_int______Tuple_impl
 (_Tuple_impl_0u_int__std__default_delete_int____ *self)
{
 std__Tuple_impl_1u_std__default_delete_int______Tuple_impl((_Tuple_impl *)self);
 std__Head_base_0u_int__false__Head_base((_Head_base_0u_int__false_ *)self, (int **)0);
 return;
}


// Function: std__get_helper_0u_int__std__default_delete_int____ @ 0x139ee
int ** std__get_helper_0u_int__std__default_delete_int____(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)std__Tuple_impl_0u_int__std__default_delete_int______M_head(param_1);
 return ppiVar1;
}


// Function: std_get_1u_int_std_default_delete_int_array @ 0x13a12
type * std_get_1u_int__std__default_delete_int____(tuple *param_1)
{
 default_delete *pdVar1;
 pdVar1 = (default_delete *)__get_helper_1u_std__default_delete_int____((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}


// Function: std_get_0u_int_std_default_delete_int_array_dup @ 0x13a36
type * std_get_0u_int__std__default_delete_int____(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__std__default_delete_int____((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}


// Function: std_forward_int @ 0x13a5b
int ** std_forward_int___(type *param_1)
{
 return (int **)param_1;
}


// Function: std_Tuple_impl_1u_std_default_delete_int_Tuple_impl @ 0x13a72
void std__Tuple_impl_1u_std__default_delete_int___Tuple_impl(_Tuple_impl *param_1)
{
 std__Head_base_1u_std__default_delete_int__true__Head_base((_Head_base *)param_1);
 return;
}


// Function: std__Head_base_0u_int_false__Head_base @ 0x13a98
void std__Head_base_0u_int__false__Head_base(_Head_base_0u_int__false_ *self, int **param_1);
void std__Head_base_0u_int__false__Head_base(_Head_base_0u_int__false_ *self, int **param_1)
{
 int **ppiVar1;
 ppiVar1 = std_forward_int___((type *)param_1);
 *(int **)self = *ppiVar1;
 return;
}

// Function declaration
void std__Head_base_0u_int__false__Head_base_int(_Head_base_0u_int__false_ *self, int **param_1);

// Function: std__Head_base_0u_int_false__Head_base_int @ 0x13bb4
void std__Head_base_0u_int__false__Head_base_int(_Head_base_0u_int__false_ *self, int **param_1);


// Function: std__Head_base_0u_int_false__Head_base_int @ 0x13bb4
void std__Head_base_0u_int__false__Head_base_int(_Head_base_0u_int__false_ *self, int **param_1)
{
 int **ppiVar1;
 ppiVar1 = std_forward_int___((type *)param_1);
 *(int **)self = *ppiVar1;
 return;
}


// Function: std_Tuple_impl_0u_int_std_default_delete_int_M_head @ 0x13ab5
void std__Tuple_impl_0u_int__std__default_delete_int___M_head(_Tuple_impl *param_1)
{
 std__Head_base_0u_int__false__M_head((_Head_base *)param_1);
 return;
}


// Function: std__get_helper_1u_std_default_delete_int @ 0x13ada
default_delete * std__get_helper_1u_std__default_delete_int__(_Tuple_impl *param_1)
{
 void *pVar1;
 pVar1 = std__Tuple_impl_1u_std__default_delete_int___M_head(param_1);
 return (default_delete *)pVar1;
}


// Function: std__get_helper_0u_int_std_default_delete_int @ 0x13afe
int ** std__get_helper_0u_int__std__default_delete_int__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)std__Tuple_impl_0u_int__std__default_delete_int___M_head(param_1);
 return ppiVar1;
}


// Function: std_Tuple_impl_1u_std_default_delete_int_array_Tuple_impl @ 0x13b22
void std__Tuple_impl_1u_std__default_delete_int______Tuple_impl(_Tuple_impl *param_1)
{
 std__Head_base_1u_std__default_delete_int____true__Head_base((_Head_base *)param_1);
 return;
}


// Function: std_Tuple_impl_0u_int_std_default_delete_int_array_M_head @ 0x13b47
void std__Tuple_impl_0u_int__std__default_delete_int______M_head(_Tuple_impl *param_1)
{
 std__Head_base_0u_int__false__M_head((_Head_base *)param_1);
 return;
}


// Function: std__get_helper_1u_std_default_delete_int_array @ 0x13b6c
default_delete * std__get_helper_1u_std__default_delete_int____(_Tuple_impl *param_1)
{
 void *pVar1;
 pVar1 = std__Tuple_impl_1u_std__default_delete_int______M_head(param_1);
 return (default_delete *)pVar1;
}


// Function: std__get_helper_0u_int_std_default_delete_int_array @ 0x13b90
int ** std__get_helper_0u_int__std__default_delete_int____(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)std__Tuple_impl_0u_int__std__default_delete_int______M_head(param_1);
 return ppiVar1;
}


// Function: std_Head_base_1u_std_default_delete_int_true_Head_base @ 0x13be0
void std__Head_base_1u_std__default_delete_int__true__Head_base(_Head_base *param_1)
{
 return;
}


// Function: std_Head_base_0u_int_false_M_head @ 0x13bf4
_Head_base * std__Head_base_0u_int__false__M_head(_Head_base *param_1)
{
 return param_1;
}


// Function: std_Tuple_impl_1u_std_default_delete_int_M_head @ 0x13c0a
void std__Tuple_impl_1u_std__default_delete_int___M_head(_Tuple_impl *param_1)
{
 std__Head_base_1u_std__default_delete_int__true__M_head((_Head_base *)param_1);
 return;
}


// Function: std_Tuple_impl_0u_int_std_default_delete_int_M_head_dup @ 0x13c2e
void std__Tuple_impl_0u_int__std__default_delete_int___M_head(_Tuple_impl *param_1)
{
 std__Head_base_0u_int__false__M_head((_Head_base *)param_1);
 return;
}


// Function: std_Head_base_1u_std_default_delete_int_array_true_Head_base @ 0x13c54
void std__Head_base_1u_std__default_delete_int____true__Head_base(_Head_base *param_1)
{
 return;
}


// Function: std_Tuple_impl_1u_std_default_delete_int_array_M_head @ 0x13c68
void std__Tuple_impl_1u_std__default_delete_int______M_head(_Tuple_impl *param_1)
{
 std__Head_base_1u_std__default_delete_int____true__M_head((_Head_base *)param_1);
 return;
}


// Function: std_Tuple_impl_0u_int_std_default_delete_int_array_M_head_dup @ 0x13c8c
void std__Tuple_impl_0u_int__std__default_delete_int______M_head(_Tuple_impl *param_1)
{
 std__Head_base_0u_int__false__M_head((_Head_base *)param_1);
 return;
}


// Function: std_Head_base_1u_std_default_delete_int_true_M_head @ 0x13cb1
_Head_base * std__Head_base_1u_std__default_delete_int__true__M_head(_Head_base *param_1)
{
 return param_1;
}


// Function: std_Head_base_0u_int_false_M_head_dup @ 0x13cc7
_Head_base * std__Head_base_0u_int__false__M_head(_Head_base *param_1)
{
 return param_1;
}


// Function: std_Head_base_1u_std_default_delete_int_array_true_M_head @ 0x13cdd
_Head_base * std__Head_base_1u_std__default_delete_int____true__M_head(_Head_base *param_1)
{
 return param_1;
}


// Function: RTTIDerivedB_RTTIDerivedB @ 0x13cf4
void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *self)
{
 *(void ***)((char *)self) = (void **)&PTR__RTTIDerivedB_00018c1c;
 RTTIBase_RTTIBase((RTTIBase *)self);
 return;
}


// Function: RTTIDerivedA_RTTIDerivedA @ 0x13d60
void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *self)
{
 *(void ***)((char *)self) = (void **)&PTR__RTTIDerivedA_00018c30;
 RTTIBase_RTTIBase((RTTIBase *)self);
 return;
}




















// Function: MultiDerived_MultiDerived @ 0x13eca
void MultiDerived_MultiDerived(MultiDerived *self)
{
 *(void ***)((char *)self) = (void **)&PTR_funcA_00018d3c;
 *(void ***)((char *)self + 8) = (void **)&PTR_funcB_00018d54;
 BaseB_BaseB((BaseB *)((char *)self + 8));
 BaseA_BaseA((BaseA *)self);
 return;
}


// Function: Derived_Derived @ 0x13f68
void Derived_Derived(Derived *self)
{
 *(void ***)((char *)self) = (void **)&PTR_virtual_func_00018d90;
 Base_Base((Base *)self);
 return;
}


// Function: __x86.get_pc_thunk.ax @ 0x13fd3
unsigned int __x86_get_pc_thunk_ax(void)
{
 unsigned int unaff_retaddr;
 return unaff_retaddr;
}


// Function: __x86.get_pc_thunk.si @ 0x13fd7
void __x86_get_pc_thunk_si(void)
{
 return;
}


// Function: __stack_chk_fail_local @ 0x13fe0
int __stack_chk_fail_local(void);
void __stack_chk_fail_local(void)
{
 FUN_00011260();
 return;
}


// Function: __do_global_ctors_aux @ 0x14000
void __do_global_ctors_aux(void)
{
 return;
}


// Function: _fini @ 0x1404c
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}


