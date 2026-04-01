// Decompiled by BinaryAI
// SHA256: 3be429f024f897038c57fbd39d96d9a6f92ba2c8767c09c5fdf388c885ba8633

typedef char* type;

// Forward declarations for C++ classes
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct Base Base;
struct Base {
 char **vtable;
};
typedef struct Derived Derived;
struct Derived {
 unsigned int data[2];
};
typedef struct BaseA BaseA;
struct BaseA {
 char **vtable;
};
typedef struct BaseB BaseB;
struct BaseB {
 char **vtable;
};
typedef struct MultiDerived MultiDerived;
struct MultiDerived {
 unsigned int data[4];
};
typedef struct VirtualBase VirtualBase;
struct VirtualBase {
 char **vtable;
};
typedef struct MiddleA MiddleA;
struct MiddleA {
 unsigned int data[2];
};
typedef struct MiddleB MiddleB;
struct MiddleB {
 unsigned int data[2];
};
typedef struct DiamondDerived DiamondDerived;
struct DiamondDerived {
 unsigned int data[6];
};
typedef struct Point Point;
typedef struct Container_int_ Container_int_;
struct Container_int_ {
 int data[10];
 unsigned int size;
};
typedef struct Container_double_ Container_double_;
struct Container_double_ {
 double data[10];
 unsigned int size;
};
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct _lambda_int__1_ _lambda_int__1_;
typedef struct _lambda_int___1_ _lambda_int___1_;
typedef struct unique_ptr_int_std__default_delete_int__ unique_ptr_int_std__default_delete_int__;
typedef struct unique_ptr_int___std__default_delete_int____ unique_ptr_int___std__default_delete_int____;
typedef struct unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__;
typedef struct __uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1__true_false_ __uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1__true_false_;
typedef struct __uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ __uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__;
typedef struct tuple_int__test_cpp_smart_ptr_____lambda_int___1__ tuple_int__test_cpp_smart_ptr_____lambda_int___1__;
typedef struct _Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__ _Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__;
typedef struct _Head_base_0u_int__false_ _Head_base_0u_int__false_;
typedef struct _Tuple_impl _Tuple_impl;
typedef struct _Head_base _Head_base;
typedef struct tuple tuple;
typedef struct __uniq_ptr_data_int_std__default_delete_int__true_true_ __uniq_ptr_data_int_std__default_delete_int__true_true_;
typedef struct __uniq_ptr_impl_int_std__default_delete_int__ __uniq_ptr_impl_int_std__default_delete_int__;
typedef struct unique_ptr unique_ptr;
typedef struct __uniq_ptr_data __uniq_ptr_data;
typedef struct __uniq_ptr_impl __uniq_ptr_impl;
typedef struct _Tuple_impl_0u_int__std__default_delete_int__ _Tuple_impl_0u_int__std__default_delete_int__;
typedef struct tuple_int__std__default_delete_int__ tuple_int__std__default_delete_int__;
typedef struct _Tuple_impl_1u_std__default_delete_int__true_Head_base _Tuple_impl_1u_std__default_delete_int__true_Head_base;
typedef struct default_delete_int_ default_delete_int_;
typedef struct __uniq_ptr_impl_int_std__default_delete_int____ __uniq_ptr_impl_int_std__default_delete_int____;
typedef struct unique_ptr_int___std__default_delete_int____ unique_ptr_int___std__default_delete_int____;
typedef struct default_delete_int___ default_delete_int___;
typedef struct __uniq_ptr_data_int_std__default_delete_int____true_true_ __uniq_ptr_data_int_std__default_delete_int____true_true_;
typedef struct tuple_int__std__default_delete_int____ tuple_int__std__default_delete_int____;
typedef struct _Tuple_impl_0u_int__std__default_delete_int____ _Tuple_impl_0u_int__std__default_delete_int____;
typedef struct default_delete default_delete;
typedef struct type_info type_info;

// Struct definitions for C++ template types
struct unique_ptr_int_std__default_delete_int__ {
 void *data[2];
};
struct unique_ptr_int___std__default_delete_int____ {
 void *data[4];
};
struct unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ {
 void *data[2];
};
struct __uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1__true_false_ {
 void *data[2];
};
struct __uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ {
 void *data[2];
};
struct tuple_int__test_cpp_smart_ptr_____lambda_int___1__ {
 void *data[2];
};
struct _Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__ {
 unsigned int data[2];
};
struct _Head_base_0u_int__false_ {
 unsigned int data[1];
};
struct _Tuple_impl {
 unsigned int data[2];
};
struct _Head_base {
 unsigned int data[1];
};
struct tuple {
 unsigned int data[2];
};
struct __uniq_ptr_data_int_std__default_delete_int__true_true_ {
 void *data[2];
};
struct __uniq_ptr_impl_int_std__default_delete_int__ {
 unsigned int data[2];
};
struct unique_ptr {
 void *data[2];
};
struct __uniq_ptr_data {
 void *data[2];
};
struct __uniq_ptr_impl {
 void *data[2];
};
struct _Tuple_impl_0u_int__std__default_delete_int__ {
 unsigned int data[2];
};
struct tuple_int__std__default_delete_int__ {
 unsigned int data[2];
};
struct _Tuple_impl_1u_std__default_delete_int__true_Head_base {
 unsigned int data[2];
};
struct default_delete_int_ {
 int dummy;
};
struct __uniq_ptr_impl_int_std__default_delete_int____ {
 unsigned int data[2];
};
struct default_delete_int___ {
 int dummy;
};
struct __uniq_ptr_data_int_std__default_delete_int____true_true_ {
 void *data[2];
};
struct tuple_int__std__default_delete_int____ {
 unsigned int data[2];
};
struct _Tuple_impl_0u_int__std__default_delete_int____ {
 unsigned int data[2];
};
struct default_delete {
 int dummy;
};
struct type_info {
 char *name;
 int *data;
};

// Function declarations
int __stack_chk_fail_local(void);

// Global variables
static unsigned int instance_count = 0;

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
 (*(void *)(char *)0x0)();
 return;
}

// Function: FUN_000111a0 @ 0x111a0
void FUN_000111a0(void *unaff_EBX)
{
 (*(void (**)())((int)unaff_EBX + 0x68))();
 return;
}

// Function: FUN_000111b0 @ 0x111b0
void FUN_000111b0(void *unaff_EBX)
{
 (*(void (**)())((int)unaff_EBX + 0xc))();
 return;
}

// Function: FUN_000111c0 @ 0x111c0
void FUN_000111c0(void *unaff_EBX)
{
 (*(void (**)())((int)unaff_EBX + 0x10))();
 return;
}

// Function: FUN_000111d0 @ 0x111d0
void *FUN_000111d0(void *unaff_EBX)
{
 return (*(void *(**)())((int)unaff_EBX + 0x14))();
}

// Function: FUN_000111e0 @ 0x111e0
int FUN_000111e0(void *unaff_EBX)
{
 return (*(int (**)())((int)unaff_EBX + 0x18))();
}

// Function: FUN_000111f0 @ 0x111f0
void FUN_000111f0(void *unaff_EBX)
{
 (*(void (**)())((int)unaff_EBX + 0x1c))();
 return;
}

// Function: FUN_00011200 @ 0x11200
void FUN_00011200(void *unaff_EBX, unsigned int size)
{
 (*(void (**)())((int)unaff_EBX + 0x20))();
 return;
}

// Function: FUN_00011210 @ 0x11210
int FUN_00011210(void *unaff_EBX)
{
 return (*(int (**)())((int)unaff_EBX + 0x24))();
}

// Function: FUN_00011220 @ 0x11220
void FUN_00011220(void *unaff_EBX)
{
 (*(void (**)())((int)unaff_EBX + 0x28))();
 return;
}

// Function: FUN_00011230 @ 0x11230
void *FUN_00011230(void *unaff_EBX)
{
 return (*(void *(**)())((int)unaff_EBX + 0x2c))();
}

// Function: FUN_00011240 @ 0x11240
void FUN_00011240(void *unaff_EBX)
{
 (*(void (**)())((int)unaff_EBX + 0x30))();
 return;
}

// Function: FUN_00011250 @ 0x11250
void *FUN_00011250(void *unaff_EBX)
{
 return (*(void *(**)())((int)unaff_EBX + 0x34))();
}

// Function: FUN_00011260 @ 0x11260
void FUN_00011260(void *unaff_EBX)
{
 (*(void (**)())((int)unaff_EBX + 0x38))();
 return;
}

// Function: FUN_00011270 @ 0x11270
int FUN_00011270(void *unaff_EBX)
{
 return (*(int (**)())((int)unaff_EBX + 0x3c))();
}

// Function: FUN_00011280 @ 0x11280
void FUN_00011280(void *unaff_EBX)
{
 (*(void (**)())((int)unaff_EBX + 0x40))();
 return;
}

// Function: FUN_00011290 @ 0x11290
void FUN_00011290(void *unaff_EBX)
{
 (*(void (**)())((int)unaff_EBX + 0x44))();
 return;
}

// Function: FUN_000112a0 @ 0x112a0
void FUN_000112a0(void *unaff_EBX)
{
 (*(void (**)())((int)unaff_EBX + 0x48))();
 return;
}

// Function: FUN_000112b0 @ 0x112b0
void FUN_000112b0(void *unaff_EBX)
{
 (*(void (**)())((int)unaff_EBX + 0x4c))();
 return;
}

// Function: FUN_000112c0 @ 0x112c0
void FUN_000112c0(void *unaff_EBX)
{
 (*(void (**)())((int)unaff_EBX + 0x50))();
 return;
}

// Function: FUN_000112d0 @ 0x112d0
void FUN_000112d0(void *unaff_EBX)
{
 (*(void (**)())((int)unaff_EBX + 0x54))();
 return;
}

// Function: FUN_000112e0 @ 0x112e0
void FUN_000112e0(void *unaff_EBX)
{
 (*(void (**)())((int)unaff_EBX + 0x58))();
 return;
}

// Function: FUN_000112f0 @ 0x112f0
void FUN_000112f0(void *unaff_EBX)
{
 (*(void (**)())((int)unaff_EBX + 0x5c))();
 return;
}

// Function: FUN_00011300 @ 0x11300
void FUN_00011300(void *unaff_EBX)
{
 (*(void (**)())((int)unaff_EBX + 0x60))();
 return;
}

// Function: _start @ 0x11310
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 FUN_00011220(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
 do {
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
 uint uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x7c2b) == '\0') {
 if (*(int *)(unaff_EDI + 0x7bfb) != 0) {
 FUN_000111a0(*(unsigned int *)(unaff_EDI + 0x7c17));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x7c2f);
 while (uVar1 < ((unaff_EDI + 0x7823) - (unaff_EDI + 0x781f) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x7c2f) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x781f + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x7c2f);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x7c2b) = 1;
 }
 return;
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
int test_cpp_member_func(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 SimpleClass local_34 [36];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 SimpleClass_SimpleClass(local_34,5,"Test");
 SimpleClass_setValue(local_34,10);
 iVar1 = SimpleClass_getValue(local_34);
 iVar2 = SimpleClass_compute(local_34,3);
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
 LifecycleClass local_18 [8];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 LifecycleClass_LifecycleClass(local_18,5);
 iVar1 = LifecycleClass_getData(local_18,2);
 iVar2 = LifecycleClass_getInstanceCount();
 LifecycleClass_LifecycleClass(local_18);
 iVar3 = LifecycleClass::getInstanceCount();
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
 char **local_34;
 int local_30;
 int local_2c;
 char ***local_28;
 Derived *local_24;
 int local_20;
 int local_1c;
 Derived local_18 [8];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_34 = &PTR_virtual_func_00018da8;
 Derived_Derived(local_18,3);
 local_30 = Base_virtual_func((Base *)&local_34,5);
 local_2c = Derived_virtual_func(local_18,5);
 local_28 = &local_34;
 local_24 = local_18;
 local_20 = call_virtual_func((Base *)local_28,5);
 local_1c = call_virtual_func((Base *)local_24,5);
 iVar1 = local_30 + local_2c + local_20 + local_1c;
 Derived_Derived(local_18);
 Base_Base((Base *)&local_34);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}

// Function: test_cpp_multiple_inheritance @ 0x116de
int test_cpp_multiple_inheritance(void)
{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 void **local_20;
 unsigned int local_1c;
 void **local_18;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 MultiDerived_MultiDerived((MultiDerived *)&local_20);
 local_1c = 100;
 local_14 = 200;
 iVar1 = (**local_20)(&local_20);
 iVar2 = (**local_18)(&local_18);
 iVar1 = iVar1 + iVar2 + (uint)(&local_20 != &local_18);
 MultiDerived_MultiDerived((MultiDerived *)&local_20);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
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
 void **local_18;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 DiamondDerived_DiamondDerived(local_28);
 local_14 = 0x32;
 iVar1 = (**local_18)(&local_18);
 local_14 = 100;
 iVar2 = (**local_18)(&local_18);
 iVar1 = iVar1 + iVar2;
 DiamondDerived_DiamondDerived(local_28);
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
 Point local_28 [8];
 Point local_20 [8];
 int local_18;
 int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 Point_Point(local_28,1,2);
 Point::Point(local_20,3,4);
 Point_operator_((Point *)&local_18,local_28);
 cVar1 = Point_operator__(local_28,local_20);
 Point::operator__((Point *)&local_18);
 if (cVar1 == '\0') {
 iVar2 = 10;
 }
 else {
 iVar2 = 0;
 }
 iVar2 = local_14 + local_18 + iVar2;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
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
 iVar1 = __stack_chk_fail_local();
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
 Container_int__Container(local_90);
 Container_int__push(local_90,10);
 Container<int>::push(local_90,0x14);
 Container<int>::push(local_90,0x1e);
 iVar1 = Container_int__get(local_90,0);
 iVar2 = Container_int__getSize(local_90);
 Container_double__Container(local_64);
 Container_double__push((double)CONCAT44(0x51eb851f,local_64));
 lVar3 = (longdouble)Container_double__get(local_64,0);
 iVar1 = (int)ROUND((double)lVar3) + iVar1 + iVar2;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}

// Function: test_cpp_lambda_lambda_int_1_operator @ 0x11b34
int test_cpp_lambda_lambda_int_1_operator(_lambda_int__1_ *this_ptr,int param_1)
{
 int *data_ptr = (int *)this_ptr;
 data_ptr[1] = data_ptr[1] + 5;
 return data_ptr[1] + data_ptr[0] * param_1;
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
 local_20 = test_cpp_lambda_lambda_int_1_operator((_lambda_int__1_ *)&local_18,3);
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

// Function: test_cpp_smart_ptr_lambda_int_ptr_1_operator @ 0x11d26
void 
test_cpp_smart_ptr_lambda_int_ptr_1_operator(_lambda_int___1_ *this_ptr,int *param_1)
{
 *param_1 = -1;
 if (param_1 != (int *)0x0) {
 FUN_00011200(param_1,4);
 }
 return;
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
 std_unique_ptr_int_std_default_delete_int_unique_ptr_std__default_delete_int__void_(local_2c,piVar1);
 puVar2 = (unsigned int *)std_unique_ptr_int_std_default_delete_int_get(local_2c);
 *puVar2 = 200;
 ptVar3 = std_move_std__unique_ptr_int_std__default_delete_int____((unique_ptr *)local_2c);
 std_unique_ptr_int_std_default_delete_int_unique_ptr(local_28,(unique_ptr *)ptVar3);
 piVar1 = (int *)std_unique_ptr_int_std_default_delete_int_get(local_28);
 local_1c = *piVar1;
 piVar1 = (int *)FUN_00011230(0x14);
 *piVar1 = 1;
 piVar1[1] = 2;
 piVar1[2] = 3;
 piVar1[3] = 4;
 piVar1[4] = 5;
 std_unique_ptr_int__std__default_delete_int____unique_ptr_int__std__default_delete_int____void_bool_(local_24,piVar1);
 piVar1 = (int *)std_unique_ptr_int__std__default_delete_int____operator__(local_24,2);
 local_18 = *piVar1;
 piVar1 = (int *)FUN_000111b0(4);
 *piVar1 = 500;
 std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_unique_ptr_lambda_int_1_void_(local_20,piVar1,&local_2d);
 piVar1 = (int *)std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_get(local_20);
 local_14 = *piVar1;
 iVar4 = local_1c + local_18 + local_14;
 std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_unique_ptr(local_20);
 std_unique_ptr_int__std__default_delete_int____unique_ptr(local_24);
 std_unique_ptr_int_std_default_delete_int__unique_ptr(local_28);
 std_unique_ptr_int_std_default_delete_int__unique_ptr(local_2c);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar4 = __stack_chk_fail_local();
 }
 return iVar4;
}

// Function: test_cpp_rtti @ 0x11f3b
int test_cpp_rtti(void)
{
 char cVar1;
 int *this;
 int *this_00;
 int iVar2;
 unsigned int uVar3;
 int local_20;
 this = (int *)FUN_000111b0(4);
 *this = 0;
 RTTIDerivedA_RTTIDerivedA((RTTIDerivedA *)this);
 this_00 = (int *)FUN_000111b0(4);
 *this_00 = 0;
 RTTIDerivedB_RTTIDerivedB((RTTIDerivedB *)this_00);
 local_20 = 0;
 if (this == (int *)0x0) {
 FUN_00011250();
LAB_00011fcb:
 local_20 = 10;
 }
 else {
 cVar1 = std_type_info_operator__
 (*(type_info **)(*this + -4),(type_info *)&RTTIDerivedA::typeinfo);
 if (cVar1 != '\0') goto LAB_00011fcb;
 }
 if (this_00 == (int *)0x0) {
 FUN_00011250();
LAB_00011ff9:
 local_20 = local_20 + 0x14;
 }
 else {
 cVar1 = std_type_info::operator__
 (*(type_info **)(*this_00 + -4),(type_info *)&RTTIDerivedB::typeinfo);
 if (cVar1 != '\0') goto LAB_00011ff9;
 }
 if (this == (int *)0x0) {
 iVar2 = 0;
 }
 else {
 iVar2 = FUN_00011270(this,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 }
 if (iVar2 != 0) {
 iVar2 = RTTIDerivedA_derivedA_data();
 local_20 = local_20 + iVar2;
 }
 if (this_00 == (int *)0x0) {
 iVar2 = 0;
 }
 else {
 iVar2 = FUN_00011270(this_00,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 }
 if (iVar2 != 0) {
 iVar2 = RTTIDerivedB_derivedB_data();
 local_20 = local_20 + iVar2;
 }
 if (this == (int *)0x0) {
 this = (int *)FUN_00011250();
 }
 else {
 uVar3 = std_type_info_name(*(type_info **)(*this + -4));
 iVar2 = FUN_000111e0(uVar3);
 local_20 = iVar2 + local_20;
 if (this == (int *)0x0) goto LAB_000120c9;
 }
 (**(void **)(*this + 4))(this);
LAB_000120c9:
 if (this_00 != (int *)0x0) {
 (**(void **)(*this_00 + 4))(this_00);
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

// Function: std___uniq_ptr_data<int,test_cpp_smart_ptr()::{lambda(int*)1},true,false>::__uniq_ptr_impl<{lambda(int*)1}const&> @ 0x12258
void
std_uniq_ptr_data_int_test_cpp_smart_ptr_lambda_int_ptr_1_true_false__uniq_ptr_impl_lambda_int_1_const__
 (__uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1__true_false_ *this_ptr,int *param_1
 ,_lambda_int___1_ *param_2)
{
 __uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1__uniq_ptr_impl_lambda_int_1_const_
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *)this_ptr,param_1,param_2);
 return;
}

// Function: std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_unique_ptr_lambda_int_1_void @ 0x12282
void
std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_unique_ptr_lambda_int_1_void
 (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *this_ptr,int *param_1,
 _lambda_int___1_ *param_2)
{
 std_uniq_ptr_data_int_test_cpp_smart_ptr_lambda_int_ptr_1_true_false__uniq_ptr_impl_lambda_int_1_const_
 ((__uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1__true_false_ *)this_ptr,param_1,
 param_2);
}

// Function: std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_unique_ptr @ 0x122aa
void
std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_unique_ptr
 (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *this_ptr)
{
 int **ppiVar1;
 _lambda_int___1_ *this_00;
 int **ppiVar2;
 ppiVar1 = (int **)std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1_M_ptr
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *)this_ptr);
 if (*ppiVar1 != (int *)0x0) {
  this_00 = (_lambda_int___1_ *)std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_get_deleter(this_ptr);
  ppiVar2 = (int **)std_move_int___(ppiVar1);
  test_cpp_smart_ptr_lambda_int_ptr_1_operator(this_00,*ppiVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}

// Function: std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_operator @ 0x12312
int*
std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_operator
 (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *this_ptr)
{
 return std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_get(this_ptr);
}

// Function: std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1_uniq_ptr_impl_lambda_int_1_const @ 0x1233a
void
std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1_uniq_ptr_impl_lambda_int_1_const
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *this_ptr,int *param_1,
 _lambda_int___1_ *param_2)
{
 _lambda_int___1_ *p_Var1;
 p_Var1 = std_forward_test_cpp_smart_ptr_lambda_int_1_const__((type *)param_2);
 std_tuple_int_test_cpp_smart_ptr_lambda_int_ptr_1_tuple_int_lambda_int_1_const_true
 ((tuple_int__test_cpp_smart_ptr_____lambda_int___1__ *)this_ptr,&param_1,p_Var1);
 return;
}

// Function: std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1_M_ptr @ 0x12374
int*
std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1_M_ptr
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *this_ptr)
{
 _lambda_int___1_ *in_stack_ffffffe8;
 return (int*)std_get_0u_int_test_cpp_smart_ptr_lambda_int_ptr_1((int *)this_ptr,in_stack_ffffffe8);
}

// Function: std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_get_deleter @ 0x12396
_lambda_int___1_*
std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_get_deleter
 (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *this_ptr)
{
 return std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1_M_deleter
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *)this_ptr);
}

// Function: std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_get @ 0x123b8
int*
std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1_get
 (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *this_ptr)
{
 return std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1_M_ptr
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *)this_ptr);
}

// Function: std_forward<test_cpp_smart_ptr()::{lambda(int*)1}const&> @ 0x123d9
_lambda_int___1_ * std_forward_test_cpp_smart_ptr_lambda_int_1_const__(type *param_1)
{
 return (_lambda_int___1_ *)param_1;
}

// Function: std_tuple_int_test_cpp_smart_ptr_lambda_int_ptr_1_tuple_int_lambda_int_1_const_true @ 0x123ec
void
std_tuple_int_test_cpp_smart_ptr_lambda_int_ptr_1_tuple_int_lambda_int_1_const_true
 (tuple_int__test_cpp_smart_ptr_____lambda_int___1__ *this_ptr,int **param_1,
 _lambda_int___1_ *param_2)
{
 _lambda_int___1_ *p_Var1;
 int **ppiVar2;
 p_Var1 = forward_test_cpp_smart_ptr_lambda_int_1_const((type *)param_2);
 ppiVar2 = forward_int___((type *)param_1);
 _Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_int_ptr_1_Tuple_impl_int_lambda_int_1_const_void
 ((_Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__ *)this_ptr,ppiVar2,p_Var1);
 return;
}

// Function: std_get_0u_int_test_cpp_smart_ptr_lambda_int_ptr_1 @ 0x1242f
type * std_get_0u_int_test_cpp_smart_ptr_lambda_int_ptr_1
 (int *param_1,_lambda_int___1_ *param_2)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int_test_cpp_smart_ptr_lambda_int_ptr_1((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1_M_deleter @ 0x12450
_lambda_int___1_*
std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1_M_deleter
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *this_ptr)
{
 _lambda_int___1_ *in_stack_ffffffe8;
 return (_lambda_int___1_*)get_1u_int__test_cpp_smart_ptr_____lambda_int___1__((int *)this_ptr,in_stack_ffffffe8);
}

// Function: std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1_M_ptr @ 0x12472
int*
std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1_M_ptr
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *this_ptr)
{
 _lambda_int___1_ *in_stack_ffffffe8;
 return (int*)get_0u_int_test_cpp_smart_ptr_lambda_int_ptr_1((int *)this_ptr,in_stack_ffffffe8);
}

// Function: std_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_int_ptr_1_Tuple_impl_int_lambda_int_1_const_void @ 0x12496
void
std_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_int_ptr_1_Tuple_impl_int_lambda_int_1_const_void
 (_Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__ *this_ptr,int **param_1,
 _lambda_int___1_ *param_2)
{
 int **ppiVar1;
 forward_test_cpp_smart_ptr_lambda_int_1_const((type *)param_2);
 _Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_ptr_1_Tuple_impl((_lambda_int___1_ *)this_ptr);
 ppiVar1 = forward_int___((type *)param_1);
 _Head_base_0u_int_false_Head_base_int((_Head_base_0u_int__false_ *)this_ptr,ppiVar1);
 return;
}

// Function: std_get_helper_0u_int_test_cpp_smart_ptr_lambda_int_ptr_1 @ 0x124e5
int ** std_get_helper_0u_int_test_cpp_smart_ptr_lambda_int_ptr_1(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_int_ptr_1_M_head
 ((_Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__ *)param_1);
 return ppiVar1;
}

// Function: std_get_1u_int_test_cpp_smart_ptr_lambda_int_ptr_1 @ 0x12505
type * std_get_1u_int_test_cpp_smart_ptr_lambda_int_ptr_1
 (int *param_1,_lambda_int___1_ *param_2)
{
 _lambda_int___1_ *p_Var1;
 p_Var1 = __get_helper_1u_test_cpp_smart_ptr_lambda_int_ptr_1((_Tuple_impl *)param_1);
 return (type *)p_Var1;
}

// Function: std_get_0u_int_test_cpp_smart_ptr_lambda_int_ptr_1 @ 0x12525
type * std_get_0u_int_test_cpp_smart_ptr_lambda_int_ptr_1
 (int *param_1,_lambda_int___1_ *param_2)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int_test_cpp_smart_ptr_lambda_int_ptr_1((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std_Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_ptr_1_Tuple_impl @ 0x12546
void std_Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_ptr_1_Tuple_impl
 (_lambda_int___1_ *this_ptr)
{
 std_Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_1_true_Head_base((_Head_base *)this_ptr);
 return;
}

// Function: std_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_int_ptr_1_M_head @ 0x1256a
int** std_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_int_ptr_1_M_head
 (_Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__ *this_ptr)
{
 return (int**)_Head_base_0u_int_false_M_head((_Head_base *)this_ptr);
}

// Function: std_get_helper_1u_test_cpp_smart_ptr_lambda_int_ptr_1 @ 0x1258b
_lambda_int___1_ *
std_get_helper_1u_test_cpp_smart_ptr_lambda_int_ptr_1(_Tuple_impl *this_ptr)
{
 _lambda_int___1_ *p_Var1;
 p_Var1 = (_lambda_int___1_ *)
 _Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_ptr_1_M_head
 ((_Tuple_impl_1u_test_cpp_smart_ptr_____lambda_int___1__ *)this_ptr);
 return p_Var1;
}

// Function: std_get_helper_0u_int_test_cpp_smart_ptr_lambda_int_ptr_1 @ 0x125ab
int ** std_get_helper_0u_int_test_cpp_smart_ptr_lambda_int_ptr_1(_Tuple_impl *this_ptr)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_int_ptr_1_M_head
 ((_Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__ *)this_ptr);
 return ppiVar1;
}

// Function: std_Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_1_true_Head_base @ 0x125cc
_lambda_int___1_*
std_Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_1_true_Head_base
 (_Head_base *this_ptr)
{
 return (_lambda_int___1_*)this_ptr;
}

// Function: std_Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_ptr_1_M_head @ 0x125dc
_lambda_int___1_* std_Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_ptr_1_M_head(_Tuple_impl_1u_test_cpp_smart_ptr_____lambda_int___1__ *this_ptr)
{
 return (_lambda_int___1_*)std_Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_1_true_M_head((_Head_base *)this_ptr);
}

// Function: std_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_int_ptr_1_M_head @ 0x125fc
int** std_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_int_ptr_1_M_head
 (_Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__ *this_ptr)
{
 return (int**)_Head_base_0u_int_false_M_head((_Head_base_0u_int__false_ *)this_ptr);
}

// Function: std_Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_1_true_M_head @ 0x1261d
_lambda_int___1_*
std_Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_1_true_M_head(_Head_base *this_ptr)
{
 return (_lambda_int___1_*)this_ptr;
}

// Function: __static_initialization_and_destruction_0 @ 0x1262f
void __static_initialization_and_destruction_0(int param_1,int param_2)
{
 if ((param_1 == 1) && (param_2 == 0xffff)) {
 FUN_000112d0(&std___ioinit);
 FUN_000111f0(std_ios_base::Init::_Init,&std___ioinit,&__dso_handle);
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
int std_type_info_name(type_info *this_ptr)
{
 int iVar1;
 if (**(char **)((int)this_ptr + 4) == '*') {
 iVar1 = *(int *)((int)this_ptr + 4) + 1;
 }
 else {
 iVar1 = *(int *)((int)this_ptr + 4);
 }
 return iVar1;
}

// Function: std_type_info_operator__ @ 0x126e6
unsigned int std_type_info_operator__(type_info *this_ptr,type_info *param_2)
{
 int iVar1;
 unsigned int uVar2;
 if (*(int *)((int)this_ptr + 4) == *(int *)((int)param_2 + 4)) {
LAB_00012738:
 uVar2 = 1;
 }
 else {
 if (**(char **)((int)this_ptr + 4) != '*') {
 iVar1 = FUN_00011210(*(unsigned int *)((int)this_ptr + 4),*(unsigned int *)((int)param_2 + 4));
 if (iVar1 == 0) goto LAB_00012738;
 }
 uVar2 = 0;
 }
 return uVar2;
}

// Function: SimpleClass_SimpleClass @ 0x1274a
void SimpleClass_SimpleClass(SimpleClass *this_ptr,int param_2,char *param_3)
{
 *(int *)this_ptr = param_2;
 FUN_00011240((char*)this_ptr + 4,param_3,0x1f,0x1275a);
 ((char*)this_ptr)[0x23] = 0;
 return;
}

// Function: SimpleClass_getValue @ 0x1278e
unsigned int SimpleClass_getValue(SimpleClass *this_ptr)
{
 return *(unsigned int *)this_ptr;
}

// Function: SimpleClass_setValue @ 0x127a6
void SimpleClass_setValue(SimpleClass *this_ptr,int param_2)
{
 *(int *)this_ptr = param_2;
 return;
}

// Function: SimpleClass_compute @ 0x127c2
int SimpleClass_compute(SimpleClass *this_ptr,int param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = *(int *)this_ptr;
 iVar2 = FUN_000111e0((char*)this_ptr + 4);
 return iVar2 + iVar1 * param_2;
}

// Function: SimpleClass::getClassID @ 0x127fd
unsigned int SimpleClass::getClassID(void)
{
 return 0x1234;
}

// Function: LifecycleClass_LifecycleClass @ 0x12816
void LifecycleClass_LifecycleClass(LifecycleClass *this_ptr,uint param_2)
{
 unsigned int uVar1;
 uint local_10;
 *(uint *)((char*)this_ptr + 4) = param_2;
 if (param_2 < 0x20000000) {
 uVar1 = FUN_00011230(param_2 << 2);
 *(unsigned int *)this_ptr = uVar1;
 for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
LAB_00012863:
 *(uint *)(local_10 * 4 + *(int *)this_ptr) = local_10 * 10;
 }
 instance_count = instance_count + 1;
 return;
 }
 FUN_00011290();
 goto LAB_00012863;
}

// Function: LifecycleClass__LifecycleClass @ 0x128a4
void LifecycleClass__LifecycleClass(LifecycleClass *this_ptr)
{
 if (*(int *)this_ptr != 0) {
 FUN_00011280(*(unsigned int *)this_ptr);
 }
 instance_count = instance_count + -1;
 return;
}

// Function: LifecycleClass_getData @ 0x128ea
unsigned int LifecycleClass_getData(LifecycleClass *this_ptr,uint param_2)
{
 unsigned int uVar1;
 if (param_2 < *(uint *)((char*)this_ptr + 4)) {
 uVar1 = *(unsigned int *)(param_2 * 4 + *(int *)this_ptr);
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}

// Function: LifecycleClass::getInstanceCount @ 0x1291e
unsigned int LifecycleClass::getInstanceCount(void)
{
 return instance_count;
}

// Function: Base_virtual_func @ 0x12938
int Base_virtual_func(Base *this_ptr,int param_2)
{
 return param_2 + 1;
}

// Function: Base_getName @ 0x12952
char * Base::getName(void)
{
 return &DAT_0001502d;
}

// Function: Base__Base @ 0x1296c
void Base__Base(Base *this_ptr)
{
 *(char ***)this_ptr = &PTR_virtual_func_00018da8;
 return;
}

// Function: Base__Base @ 0x1298c
void Base__Base_destructor(Base *this_ptr)
{
 Base__Base(this_ptr);
 FUN_00011200(this_ptr,4);
 return;
}

// Function: Base_Base @ 0x129c6
void Base_Base(Base *this_ptr)
{
 *(char ***)this_ptr = &PTR_virtual_func_00018da8;
 return;
}

// Function: Derived_Derived @ 0x129e6
void Derived_Derived(Derived *this_ptr,int param_1)
{
 Base_Base((Base *)this_ptr);
 *(char ***)this_ptr = &PTR_virtual_func_00018d90;
 *(int *)((char*)this_ptr + 4) = param_1;
 return;
}

// Function: Derived_virtual_func @ 0x12a26
int Derived_virtual_func(Derived *this_ptr,int param_1)
{
 return *(int *)((char*)this_ptr + 4) * param_1;
}

// Function: Derived_getName @ 0x12a44
char * Derived::getName(void)
{
 return "Derived";
}

// Function: BaseA_funcA @ 0x12a5e
unsigned int BaseA::funcA(void)
{
 return 10;
}

// Function: BaseA__BaseA @ 0x12a76
void BaseA__BaseA(BaseA *this_ptr)
{
 *(char ***)this_ptr = &PTR_funcA_00018d7c;
 return;
}

// Function: BaseA__BaseA @ 0x12a96
void BaseA__BaseA_destructor(BaseA *this_ptr)
{
 BaseA__BaseA(this_ptr);
 FUN_00011200(this_ptr,8);
 return;
}

// Function: BaseB_funcB @ 0x12ad0
unsigned int BaseB::funcB(void)
{
 return 0x14;
}

// Function: BaseB__BaseB @ 0x12ae8
void BaseB__BaseB(BaseB *this_ptr)
{
 *(char ***)this_ptr = &PTR_funcB_00018d68;
 return;
}

// Function: BaseB__BaseB @ 0x12b08
void BaseB__BaseB_destructor(BaseB *this_ptr)
{
 BaseB__BaseB(this_ptr);
 FUN_00011200(this_ptr,8);
 return;
}

// Function: MultiDerived_funcA @ 0x12b42
unsigned int MultiDerived::funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived_funcB @ 0x12b5a
unsigned int MultiDerived::funcB(void)
{
 return 0x28;
}

// Function: MultiDerived_funcB @ 0x12b72
void MultiDerived_funcB(MultiDerived *this_ptr)
{
 MultiDerived_funcB();
 return;
}

// Function: BaseA_BaseA @ 0x12b7e
void BaseA_BaseA(BaseA *this_ptr)
{
 *(char ***)this_ptr = &PTR_funcA_00018d7c;
 return;
}

// Function: BaseB_BaseB @ 0x12b9e
void BaseB_BaseB(BaseB *this_ptr)
{
 *(char ***)this_ptr = &PTR_funcB_00018d68;
 return;
}

// Function: MultiDerived_MultiDerived @ 0x12bbe
void MultiDerived_MultiDerived(MultiDerived *this_ptr)
{
 BaseA_BaseA((BaseA *)this_ptr);
 BaseB_BaseB((BaseB *)(this_ptr + 8));
 *(char ***)this_ptr = &PTR_funcA_00018d3c;
 *(char ***)(this_ptr + 8) = &PTR_funcB_00018d54;
 return;
}

// Function: VirtualBase_func @ 0x12c12
unsigned int VirtualBase::func(void)
{
 return 100;
}

// Function: VirtualBase__VirtualBase @ 0x12c2a
void VirtualBase__VirtualBase(VirtualBase *this_ptr)
{
 *(char ***)this_ptr = &PTR_func_00018d28;
 return;
}

// Function: VirtualBase__VirtualBase @ 0x12c4a
void VirtualBase__VirtualBase_destructor(VirtualBase *this_ptr)
{
 VirtualBase__VirtualBase(this_ptr);
 FUN_00011200(this_ptr,8);
 return;
}

// Function: MiddleA_func @ 0x12c84
int MiddleA_func(MiddleA *this_ptr)
{
 unsigned int *vtable = (unsigned int *)this_ptr;
 unsigned int offset = vtable[0];
 return *(int *)((char*)this_ptr + *(int *)(offset + -0xc) + 4) + 0x96;
}

// Function: MiddleA_func @ 0x12cb0
void MiddleA_func_impl(MiddleA *this_ptr)
{
 unsigned int *vtable = (unsigned int *)this_ptr;
 unsigned int offset = vtable[0];
 MiddleA_func((MiddleA*)((char*)this_ptr + *(int *)(offset + -0xc)));
 return;
}

// Function: MiddleB_func @ 0x12cc4
int MiddleB_func(MiddleB *this_ptr)
{
 unsigned int *vtable = (unsigned int *)this_ptr;
 unsigned int offset = vtable[0];
 return *(int *)((char*)this_ptr + *(int *)(offset + -0xc) + 4) + 200;
}

// Function: MiddleB_func @ 0x12cf0
void MiddleB_func_impl(MiddleB *this_ptr)
{
 unsigned int *vtable = (unsigned int *)this_ptr;
 unsigned int offset = vtable[0];
 MiddleB_func((MiddleB*)((char*)this_ptr + *(int *)(offset + -0xc)));
 return;
}

// Function: DiamondDerived_func @ 0x12d04
int DiamondDerived_func(DiamondDerived *this_ptr)
{
 unsigned int *vtable = (unsigned int *)this_ptr;
 unsigned int offset = vtable[0];
 return *(int *)((char*)this_ptr + *(int *)(offset + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived_func @ 0x12d30
void DiamondDerived_func_impl(DiamondDerived *this_ptr)
{
 unsigned int *vtable = (unsigned int *)this_ptr;
 unsigned int offset = vtable[0];
 DiamondDerived_func((DiamondDerived*)((char*)this_ptr + *(int *)(offset + -0xc)));
 return;
}

// Function: DiamondDerived_func @ 0x12d43
void DiamondDerived_func2(DiamondDerived *this_ptr)
{
 DiamondDerived_func((DiamondDerived*)((char*)this_ptr - 8));
 return;
}

// Function: VirtualBase_VirtualBase @ 0x12d4e
void VirtualBase_VirtualBase(VirtualBase *this_ptr)
{
 *(char ***)this_ptr = &PTR_func_00018d28;
 return;
}

// Function: MiddleA_MiddleA @ 0x12d6e
void MiddleA_MiddleA(MiddleA *this_ptr)
{
 unsigned int *in_stack_00000008;
 *(unsigned int *)this_ptr = *in_stack_00000008;
 *(unsigned int *)((char*)this_ptr + *(int *)(*in_stack_00000008 + -0xc)) = in_stack_00000008[1];
 return;
}

// Function: MiddleA__MiddleA @ 0x12da6
void MiddleA__MiddleA(MiddleA *this_ptr)
{
 unsigned int *in_stack_00000008;
 *(unsigned int *)this_ptr = *in_stack_00000008;
 *(unsigned int *)((char*)this_ptr + *(int *)(*in_stack_00000008 + -0xc)) = in_stack_00000008[1];
 return;
}

// Function: MiddleB_MiddleB @ 0x12dde
void MiddleB_MiddleB(MiddleB *this_ptr)
{
 unsigned int *in_stack_00000008;
 *(unsigned int *)this_ptr = *in_stack_00000008;
 *(unsigned int *)((char*)this_ptr + *(int *)(*in_stack_00000008 + -0xc)) = in_stack_00000008[1];
 return;
}

// Function: MiddleB__MiddleB @ 0x12e16
void MiddleB__MiddleB(MiddleB *this_ptr)
{
 unsigned int *in_stack_00000008;
 *(unsigned int *)this_ptr = *in_stack_00000008;
 *(unsigned int *)((char*)this_ptr + *(int *)(*in_stack_00000008 + -0xc)) = in_stack_00000008[1];
 return;
}

// Function: DiamondDerived_DiamondDerived @ 0x12e4e
void DiamondDerived_DiamondDerived(DiamondDerived *this_ptr)
{
 VirtualBase_VirtualBase((VirtualBase *)((char*)this_ptr + 0x10));
 MiddleA_MiddleA((MiddleA *)this_ptr);
 MiddleB_MiddleB((MiddleB *)((char*)this_ptr + 8));
 *(unsigned int *)this_ptr = 0x18c5c;
 *(unsigned int *)((char*)this_ptr + 0x10) = 0x18c90;
 *(unsigned int *)((char*)this_ptr + 8) = 0x18c74;
 return;
}

// Function: Point_Point @ 0x12ed0
void Point_Point(Point *this_ptr,int param_1,int param_2)
{
 *(int *)this_ptr = param_1;
 *(int *)((char*)this_ptr + 4) = param_2;
 return;
}

// Function: Point_operator_ @ 0x12ef6
Point * Point_operator_(Point *this_ptr,Point *param_1)
{
 int *in_stack_0000000c;
 Point_Point(this_ptr,*in_stack_0000000c + *(int *)param_1,*(int *)((char*)param_1 + 4) + in_stack_0000000c[1]);
 return this_ptr;
}

// Function: Point_operator__ @ 0x12f3c
unsigned int Point_operator__(Point *this_ptr,Point *param_1)
{
 unsigned int uVar1;
 if ((*(int *)this_ptr == *(int *)param_1) && (*(int *)((char*)this_ptr + 4) == *(int *)((char*)param_1 + 4))) {
 uVar1 = 1;
 }
 else {
 uVar1 = 0;
 }
 return uVar1;
}

// Function: Point_operator__ @ 0x12f7a
Point * Point_operator___inc(Point *this_ptr)
{
 *(int *)this_ptr = *(int *)this_ptr + 1;
 *(int *)((char*)this_ptr + 4) = *(int *)((char*)this_ptr + 4) + 1;
 return this_ptr;
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

// Function: Container_int__Container @ 0x13042
void Container_int__Container(Container_int_ *this_ptr)
{
 *(unsigned int *)(this_ptr + 0x28) = 0;
 return;
}

// Function: Container_int__push @ 0x13060
void Container_int__push(Container_int_ *this_ptr,int param_1)
{
 int iVar1;
 if (*(int *)(this_ptr + 0x28) < 10) {
 iVar1 = *(int *)(this_ptr + 0x28);
 *(int *)(this_ptr + 0x28) = iVar1 + 1;
 *(int *)(this_ptr + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int__get @ 0x1309c
unsigned int Container_int__get(Container_int_ *this_ptr,int param_1)
{
 unsigned int uVar1;
 if ((param_1 < 0) || (*(int *)(this_ptr + 0x28) <= param_1)) {
 uVar1 = 0;
 }
 else {
 uVar1 = *(unsigned int *)(this_ptr + param_1 * 4);
 }
 return uVar1;
}

// Function: Container_int__getSize @ 0x130d0
unsigned int Container_int__getSize(Container_int_ *this_ptr)
{
 return *(unsigned int *)(this_ptr + 0x28);
}

// Function: Container_double__Container @ 0x130ea
void Container_double__Container(Container_double_ *this_ptr)
{
 *(unsigned int *)(this_ptr + 0x50) = 0;
 return;
}

// Function: Container_double__push @ 0x13108
void Container_double__push(Container_double_ *this_ptr,double param_1)
{
 int iVar1;
 unsigned int in_stack_0000000c;
 if (*(int *)(this_ptr + 0x50) < 10) {
 iVar1 = *(int *)(this_ptr + 0x50);
 *(int *)(this_ptr + 0x50) = iVar1 + 1;
 }
 return;
}

// Function: Container_double__get @ 0x1314e
char ** Container_double__get(Container_double_ *this_ptr,int param_1)
{
 char **ppuVar1;
 ppuVar1 = &_GLOBAL_OFFSET_TABLE_;
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x50))) {
 ppuVar1 = (char **)this_ptr;
 }
 return ppuVar1;
}

// Function: Container_double__getSize @ 0x13180
unsigned int Container_double__getSize(Container_double_ *this_ptr)
{
 return *(unsigned int *)(this_ptr + 0x50);
}

// Function: std___uniq_ptr_data_int_std__default_delete_int__true_true___uniq_ptr_data @ 0x1319a
void
std___uniq_ptr_data_int_std__default_delete_int__true_true___uniq_ptr_data
 (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this_ptr,__uniq_ptr_data *param_1)
{
 std___uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this_ptr,(__uniq_ptr_impl *)param_1);
}

// Function: std_unique_ptr_int_std_default_delete_int_unique_ptr @ 0x131c4
void
std_unique_ptr_int_std_default_delete_int_unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this_ptr,unique_ptr *param_1)
{
 std___uniq_ptr_data_int_std__default_delete_int__true_true___uniq_ptr_data
 ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this_ptr,
 (__uniq_ptr_data *)param_1);
}

// Function: RTTIBase_getType @ 0x131ee
unsigned int RTTIBase::getType(void)
{
 return 0;
}

// Function: RTTIDerivedA_getType @ 0x13206
unsigned int RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIDerivedA::derivedA_data @ 0x1321e
unsigned int RTTIDerivedA::derivedA_data(void)
{
 return 100;
}

// Function: RTTIDerivedB_getType @ 0x13236
unsigned int RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::derivedB_data @ 0x1324e
unsigned int RTTIDerivedB::derivedB_data(void)
{
 return 200;
}

// Function: RTTIBase_RTTIBase @ 0x13266
void RTTIBase_RTTIBase(RTTIBase *this_ptr)
{
 *(char ***)this_ptr = &PTR__RTTIBase_00018c44;
 return;
}

// Function: RTTIBase__RTTIBase @ 0x13286
void RTTIBase__RTTIBase(RTTIBase *this_ptr)
{
 *(char ***)this_ptr = &PTR__RTTIBase_00018c44;
 return;
}

// Function: RTTIBase__RTTIBase @ 0x132a6
void RTTIBase__RTTIBase_destructor(RTTIBase *this_ptr)
{
 RTTIBase__RTTIBase(this_ptr);
 FUN_00011200(this_ptr,4);
 return;
}

// Function: RTTIDerivedA_RTTIDerivedA @ 0x132e0
void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this_ptr)
{
 RTTIBase_RTTIBase((RTTIBase *)this_ptr);
 *(char ***)this_ptr = &PTR__RTTIDerivedA_00018c30;
 return;
}

// Function: RTTIDerivedB_RTTIDerivedB @ 0x13316
void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this_ptr)
{
 RTTIBase_RTTIBase((RTTIBase *)this_ptr);
 *(char ***)this_ptr = &PTR__RTTIDerivedB_00018c1c;
 return;
}

// Function: std___uniq_ptr_data_int_std__default_delete_int__true_true___uniq_ptr_impl @ 0x1334c
void
std___uniq_ptr_data_int_std__default_delete_int__true_true___uniq_ptr_impl
 (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this_ptr,int *param_1)
{
 std___uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this_ptr,param_1);
}

// Function: std_unique_ptr_int_std_default_delete_int_unique_ptr_std__default_delete_int__void_ @ 0x13376
void
std_unique_ptr_int_std_default_delete_int_unique_ptr_std__default_delete_int__void_
 (unique_ptr_int_std__default_delete_int__ *this_ptr,int *param_1)
{
 std___uniq_ptr_data_int_std__default_delete_int__true_true___uniq_ptr_impl
 ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this_ptr,param_1);
 return;
}

// Function: std_unique_ptr_int_std_default_delete_int__unique_ptr @ 0x133a0
void
std_unique_ptr_int_std_default_delete_int__unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this_ptr)
{
 int **ppiVar1;
 default_delete_int_ *this_00;
 int **ppiVar2;
 ppiVar1 = (int **)std___uniq_ptr_impl_int_std__default_delete_int___M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this_ptr);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (default_delete_int_ *)std_unique_ptr_int_std_default_delete_int_get_deleter(this_ptr);
 ppiVar2 = (int **)std_move_int___(ppiVar1);
 std_default_delete_int_operator__(this_00,*ppiVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}

// Function: std_unique_ptr_int_std_default_delete_int_operator_ @ 0x1340c
int*
std_unique_ptr_int_std_default_delete_int_operator_
 (unique_ptr_int_std__default_delete_int__ *this_ptr)
{
 return (int*)std_unique_ptr_int_std_default_delete_int_get(this_ptr);
}

// Function: std_move<std_unique_ptr<int,std_default_delete<int>>&> @ 0x13437
type * std_move_std__unique_ptr_int_std__default_delete_int____(unique_ptr *param_1)
{
 return (type *)param_1;
}

// Function: std__Tuple_impl_0u_int__std__default_delete_int___Tuple_impl @ 0x1344e
void
std__Tuple_impl_0u_int__std__default_delete_int___Tuple_impl
 (_Tuple_impl_0u_int__std__default_delete_int__ *this_ptr,_Tuple_impl *param_1)
{
 std__Tuple_impl_1u_std__default_delete_int___Tuple_impl((_Tuple_impl *)this_ptr);
 *(unsigned int *)this_ptr = *(unsigned int *)param_1;
 return;
}

// Function: std_tuple_int__std__default_delete_int__tuple @ 0x13480
void
std_tuple_int__std__default_delete_int__tuple
 (tuple_int__std__default_delete_int__ *this_ptr,tuple *param_1)
{
 std__Tuple_impl_0u_int__std__default_delete_int___Tuple_impl
 ((_Tuple_impl_0u_int__std__default_delete_int__ *)this_ptr,(_Tuple_impl *)param_1);
 return;
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl @ 0x134aa
void
std___uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int__ *this_ptr,__uniq_ptr_impl *param_1)
{
 type *ptVar1;
 unsigned int *puVar2;
 ptVar1 = std_move_std__tuple_int__std__default_delete_int____((tuple *)param_1);
 std_tuple_int__std__default_delete_int__tuple
 ((tuple_int__std__default_delete_int__ *)this_ptr,(tuple *)ptVar1);
 puVar2 = (unsigned int *)std___uniq_ptr_impl_int_std__default_delete_int___M_ptr((__uniq_ptr_impl_int_std__default_delete_int__ *)param_1);
 *puVar2 = 0;
}

// Function: std___uniq_ptr_data_int_std__default_delete_int____true_true___uniq_ptr_impl @ 0x134f8
void
std___uniq_ptr_data_int_std__default_delete_int____true_true___uniq_ptr_impl
 (__uniq_ptr_data_int_std__default_delete_int____true_true_ *this_ptr,int *param_1)
{
 std___uniq_ptr_impl_int_std__default_delete_int______uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this_ptr,param_1);
}

// Function: std_unique_ptr_int__std__default_delete_int____unique_ptr_int__std__default_delete_int____void_bool_ @ 0x13522
void
std_unique_ptr_int__std__default_delete_int____unique_ptr_int__std__default_delete_int____void_bool_
 (unique_ptr_int___std__default_delete_int____ *this_ptr,int *param_1)
{
 std___uniq_ptr_data_int_std__default_delete_int____true_true___uniq_ptr_impl
 ((__uniq_ptr_data_int_std__default_delete_int____true_true_ *)this_ptr,param_1);
}

// Function: std_unique_ptr_int__std__default_delete_int____unique_ptr @ 0x1354c
void
std_unique_ptr_int__std__default_delete_int____unique_ptr
 (unique_ptr_int___std__default_delete_int____ *this_ptr)
{
 int **ppiVar1;
 default_delete_int___ *this_00;
 ppiVar1 = (int **)std___uniq_ptr_impl_int_std__default_delete_int______M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this_ptr);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (default_delete_int___ *)std_unique_ptr_int__std__default_delete_int____get_deleter(this_ptr);
 std_default_delete_int___operator__(this_00,*ppiVar1);
 }
 *ppiVar1 = (int *)0x0;
 return;
}

// Function: std_unique_ptr_int__std__default_delete_int____operator__ @ 0x135a8
int*
std_unique_ptr_int__std__default_delete_int____operator__
 (unique_ptr_int___std__default_delete_int____ *this_ptr,uint param_1)
{
 int *iVar1;
 iVar1 = std_unique_ptr_int__std__default_delete_int____get(this_ptr);
 return (int*)(param_1 * 4 + (int)iVar1);
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl @ 0x135de
void
std___uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int__ *this_ptr,int *param_1)
{
 int **ppiVar1;
 std_tuple_int__std__default_delete_int__tuple_true_true_
 ((tuple_int__std__default_delete_int__ *)this_ptr);
 ppiVar1 = (int **)std___uniq_ptr_impl_int_std__default_delete_int___M_ptr(this_ptr);
 *ppiVar1 = param_1;
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int___M_ptr @ 0x1361c
int*
std___uniq_ptr_impl_int_std__default_delete_int___M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int__ *this_ptr)
{
 return (int*)std_get_0u_int__std__default_delete_int__((tuple *)this_ptr);
}

// Function: std_unique_ptr_int_std_default_delete_int_get_deleter @ 0x13642
default_delete_int_*
std_unique_ptr_int_std_default_delete_int_get_deleter
 (unique_ptr_int_std__default_delete_int__ *this_ptr)
{
 return std___uniq_ptr_impl_int_std__default_delete_int___M_deleter
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this_ptr);
}

// Function: std_move<int*&> @ 0x13667
type * std_move_int___(int **param_1)
{
 return (type *)param_1;
}

// Function: std_default_delete_int_operator__ @ 0x1367e
void std_default_delete_int_operator__(default_delete_int_ *this_ptr,int *param_1)
{
 if (param_1 != (int *)0x0) {
 FUN_00011200(param_1,4);
 }
 return;
}

// Function: std_unique_ptr_int_std_default_delete_int_get @ 0x136b2
int*
std_unique_ptr_int_std_default_delete_int_get(unique_ptr_int_std__default_delete_int__ *this_ptr)
{
 return (int*)std___uniq_ptr_impl_int_std__default_delete_int___M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this_ptr);
}

// Function: std_move<std_tuple<int*,std_default_delete<int>>&> @ 0x136d7
type * std_move_std__tuple_int__std__default_delete_int____(tuple *param_1)
{
 return (type *)param_1;
}

// Function: std__Tuple_impl_1u_std__default_delete_int___Tuple_impl @ 0x136ee
void std__Tuple_impl_1u_std__default_delete_int___Tuple_impl(_Tuple_impl *this_ptr)
{
 std__Head_base_1u_std__default_delete_int__true__Head_base((_Head_base *)this_ptr);
 return;
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int______uniq_ptr_impl @ 0x13702
void
std___uniq_ptr_impl_int_std__default_delete_int______uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int____ *this_ptr,int *param_1)
{
 int **ppiVar1;
 std_tuple_int__std__default_delete_int____tuple_true_true_
 ((tuple_int__std__default_delete_int____ *)this_ptr);
 ppiVar1 = (int **)std___uniq_ptr_impl_int_std__default_delete_int______M_ptr(this_ptr);
 *ppiVar1 = param_1;
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int______M_ptr @ 0x13740
int*
std___uniq_ptr_impl_int_std__default_delete_int______M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int____ *this_ptr)
{
 return (int*)std_get_0u_int__std__default_delete_int____((tuple *)this_ptr);
}

// Function: std_unique_ptr_int__std__default_delete_int____get_deleter @ 0x13766
default_delete_int___*
std_unique_ptr_int__std__default_delete_int____get_deleter
 (unique_ptr_int___std__default_delete_int____ *this_ptr)
{
 return std___uniq_ptr_impl_int_std__default_delete_int______M_deleter
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this_ptr);
}

// Function: std_default_delete_int___operator__ @ 0x1378c
void std_default_delete_int___operator__(default_delete_int___ *this_ptr,int *param_1)
{
 if (param_1 != (int *)0x0) {
 FUN_00011280(param_1);
 }
 return;
}

// Function: std_unique_ptr_int__std__default_delete_int____get @ 0x137be
int*
std_unique_ptr_int__std__default_delete_int____get
 (unique_ptr_int___std__default_delete_int____ *this_ptr)
{
 return (int*)std___uniq_ptr_impl_int_std__default_delete_int______M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this_ptr);
}

// Function: std_tuple_int__std__default_delete_int__tuple_true_true_ @ 0x137e4
void
std_tuple_int__std__default_delete_int__tuple_true_true_
 (tuple_int__std__default_delete_int__ *this_ptr)
{
 std__Tuple_impl_0u_int__std__default_delete_int___Tuple_impl
 ((_Tuple_impl_0u_int__std__default_delete_int__ *)this_ptr);
 return;
}

// Function: std_get_0u_int__std__default_delete_int__ @ 0x1380a
type * std_get_0u_int__std__default_delete_int__(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = std___get_helper_0u_int__std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int___M_deleter @ 0x13830
default_delete_int_*
std___uniq_ptr_impl_int_std__default_delete_int___M_deleter
 (__uniq_ptr_impl_int_std__default_delete_int__ *this_ptr)
{
 return (default_delete_int_*)std_get_1u_int__std__default_delete_int__((tuple *)this_ptr);
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int___M_ptr @ 0x13856
int*
std___uniq_ptr_impl_int_std__default_delete_int___M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int__ *this_ptr)
{
 return (int*)std_get_0u_int__std__default_delete_int__((tuple *)this_ptr);
}

// Function: std_tuple_int__std__default_delete_int____tuple_true_true_ @ 0x1387e
void
std_tuple_int__std__default_delete_int____tuple_true_true_
 (tuple_int__std__default_delete_int____ *this_ptr)
{
 std__Tuple_impl_0u_int__std__default_delete_int______Tuple_impl
 ((_Tuple_impl_0u_int__std__default_delete_int____ *)this_ptr);
 return;
}

// Function: std_get_0u_int__std__default_delete_int____ @ 0x138a4
type * std_get_0u_int__std__default_delete_int____(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = std___get_helper_0u_int__std__default_delete_int____((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int______M_deleter @ 0x138ca
default_delete_int___*
std___uniq_ptr_impl_int_std__default_delete_int______M_deleter
 (__uniq_ptr_impl_int_std__default_delete_int____ *this_ptr)
{
 return (default_delete_int___*)std_get_1u_int__std__default_delete_int____((tuple *)this_ptr);
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int______M_ptr @ 0x138f0
int*
std___uniq_ptr_impl_int_std__default_delete_int______M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int____ *this_ptr)
{
 return (int*)std_get_0u_int__std__default_delete_int____((tuple *)this_ptr);
}

// Function: std__Tuple_impl_0u_int__std__default_delete_int___Tuple_impl @ 0x13918
void
std__Tuple_impl_0u_int__std__default_delete_int___Tuple_impl
 (_Tuple_impl_0u_int__std__default_delete_int__ *this_ptr)
{
 std__Tuple_impl_1u_std__default_delete_int___Tuple_impl((_Tuple_impl *)this_ptr);
 std__Head_base_0u_int__false__Head_base((_Head_base_0u_int__false_ *)this_ptr);
}

// Function: std___get_helper_0u_int__std__default_delete_int__ @ 0x1394c
int ** std___get_helper_0u_int__std__default_delete_int__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)std__Tuple_impl_0u_int__std__default_delete_int___M_head(param_1);
 return ppiVar1;
}

// Function: std_get_1u_int__std__default_delete_int__ @ 0x13970
type * std_get_1u_int__std__default_delete_int__(tuple *param_1)
{
 default_delete *pdVar1;
 pdVar1 = std___get_helper_1u_std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}

// Function: std_get_0u_int__std__default_delete_int__ @ 0x13994
type * std_get_0u_int__std__default_delete_int__(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = std___get_helper_0u_int__std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std__Tuple_impl_0u_int__std__default_delete_int______Tuple_impl @ 0x139ba
void
std__Tuple_impl_0u_int__std__default_delete_int______Tuple_impl
 (_Tuple_impl_0u_int__std__default_delete_int____ *this_ptr)
{
 std__Tuple_impl_1u_std__default_delete_int______Tuple_impl((_Tuple_impl *)this_ptr);
 std__Head_base_0u_int__false__Head_base((_Head_base_0u_int__false_ *)this_ptr);
}

// Function: std___get_helper_0u_int__std__default_delete_int____ @ 0x139ee
int ** std___get_helper_0u_int__std__default_delete_int____(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)std__Tuple_impl_0u_int__std__default_delete_int______M_head(param_1);
 return ppiVar1;
}

// Function: std_get_1u_int__std__default_delete_int____ @ 0x13a12
type * std_get_1u_int__std__default_delete_int____(tuple *param_1)
{
 default_delete *pdVar1;
 pdVar1 = std___get_helper_1u_std__default_delete_int____((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}

// Function: std_get_0u_int__std__default_delete_int____ @ 0x13a36
type * std_get_0u_int__std__default_delete_int____(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = std___get_helper_0u_int__std__default_delete_int____((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std_forward<int*&> @ 0x13a5b
int ** std_forward_int___(type *param_1)
{
 return (int **)param_1;
}

// Function: std__Tuple_impl_1u_std__default_delete_int___Tuple_impl @ 0x13a72
void std__Tuple_impl_1u_std__default_delete_int___Tuple_impl(_Tuple_impl *this_ptr)
{
 std__Head_base_1u_std__default_delete_int__true__Head_base((_Head_base *)this_ptr);
}

// Function: std__Head_base_0u_int__false__Head_base @ 0x13a98
void std__Head_base_0u_int__false__Head_base(_Head_base_0u_int__false_ *this_ptr)
{
 this_ptr->data[0] = 0;
}

// Function: std__Tuple_impl_0u_int__std__default_delete_int___M_head @ 0x13ab5
int** std__Tuple_impl_0u_int__std__default_delete_int___M_head(_Tuple_impl *param_1)
{
 return (int**)std__Head_base_0u_int__false__M_head((_Head_base_0u_int__false_ *)param_1);
}

// Function: std___get_helper_1u_std__default_delete_int__ @ 0x13ada
default_delete * std___get_helper_1u_std__default_delete_int__(_Tuple_impl *param_1)
{
 default_delete *pdVar1;
 pdVar1 = (default_delete *)std__Tuple_impl_1u_std__default_delete_int___M_head(param_1);
 return pdVar1;
}

// Function: std___get_helper_0u_int__std__default_delete_int__ @ 0x13afe
int ** std___get_helper_0u_int__std__default_delete_int__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)std__Tuple_impl_0u_int__std__default_delete_int___M_head(param_1);
 return ppiVar1;
}

// Function: std__Tuple_impl_1u_std__default_delete_int______Tuple_impl @ 0x13b22
void std__Tuple_impl_1u_std__default_delete_int______Tuple_impl(_Tuple_impl *param_1)
{
 std__Head_base_1u_std__default_delete_int____true__Head_base((_Head_base *)param_1);
}

// Function: std__Tuple_impl_0u_int__std__default_delete_int______M_head @ 0x13b47
void* std__Tuple_impl_0u_int__std__default_delete_int______M_head(_Tuple_impl *param_1)
{
 return std__Head_base_0u_int__false__M_head((_Head_base *)param_1);
}

// Function: std___get_helper_1u_std__default_delete_int____ @ 0x13b6c
default_delete * std___get_helper_1u_std__default_delete_int____(_Tuple_impl *param_1)
{
 default_delete *pdVar1;
 pdVar1 = (default_delete *)std__Tuple_impl_1u_std__default_delete_int______M_head(param_1);
 return pdVar1;
}

// Function: std___get_helper_0u_int__std__default_delete_int____ @ 0x13b90
int ** std___get_helper_0u_int__std__default_delete_int____(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)std__Tuple_impl_0u_int__std__default_delete_int______M_head(param_1);
 return ppiVar1;
}

// Function: std__Head_base_0u_int__false__Head_base_int___ @ 0x13bb4
void
std__Head_base_0u_int__false__Head_base_int___(_Head_base_0u_int__false_ *this_ptr,int **param_1)
{
 int **ppiVar1;
 ppiVar1 = forward_int___((type *)param_1);
 *(int **)this_ptr = *ppiVar1;
 return;
}

// Function: std__Head_base_1u_std__default_delete_int__true__Head_base @ 0x13be0
void std__Head_base_1u_std__default_delete_int__true__Head_base(_Head_base *this_ptr)
{
 this_ptr->data[0] = 0;
}

// Function: std__Head_base_0u_int__false__M_head @ 0x13bf4
int** std__Head_base_0u_int__false__M_head(_Head_base_0u_int__false_ *this_ptr)
{
 return (int**)&this_ptr->data[0];
}

// Function: std__Tuple_impl_1u_std__default_delete_int___M_head @ 0x13c0a
default_delete* std__Tuple_impl_1u_std__default_delete_int___M_head(_Tuple_impl *param_1)
{
 return std__Head_base_1u_std__default_delete_int__true__M_head((_Head_base *)param_1);
}

// Function: std__Tuple_impl_0u_int__std__default_delete_int___M_head @ 0x13c2e
int** std__Tuple_impl_0u_int__std__default_delete_int___M_head(_Tuple_impl *param_1)
{
 return (int**)std__Head_base_0u_int__false__M_head((_Head_base_0u_int__false_ *)param_1);
}

// Function: std__Head_base_1u_std__default_delete_int____true__Head_base @ 0x13c54
void std__Head_base_1u_std__default_delete_int____true__Head_base(_Head_base *this_ptr)
{
 this_ptr->data[0] = 0;
}

// Function: std__Tuple_impl_1u_std__default_delete_int______M_head @ 0x13c68
default_delete* std__Tuple_impl_1u_std__default_delete_int______M_head(_Tuple_impl *param_1)
{
 return std__Head_base_1u_std__default_delete_int____true__M_head((_Head_base *)param_1);
}

// Function: std__Tuple_impl_0u_int__std__default_delete_int______M_head @ 0x13c8c
int** std__Tuple_impl_0u_int__std__default_delete_int______M_head(_Tuple_impl *param_1)
{
 return (int**)std__Head_base_0u_int__false__M_head((_Head_base_0u_int__false_ *)param_1);
}

// Function: std__Head_base_1u_std__default_delete_int__true__M_head @ 0x13cb1
default_delete* std__Head_base_1u_std__default_delete_int__true__M_head(_Head_base *this_ptr)
{
 return (default_delete*)&this_ptr->data[0];
}

// Function: std__Head_base_0u_int__false__M_head @ 0x13cc7
int** std__Head_base_0u_int__false__M_head(_Head_base_0u_int__false_ *this_ptr)
{
 return (int**)&this_ptr->data[0];
}

// Function: std__Head_base_1u_std__default_delete_int____true__M_head @ 0x13cdd
default_delete* std__Head_base_1u_std__default_delete_int____true__M_head(_Head_base *this_ptr)
{
 return (default_delete*)&this_ptr->data[0];
}

// Function: RTTIDerivedB__RTTIDerivedB @ 0x13cf4
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_ptr)
{
 *(char ***)this_ptr = &PTR__RTTIDerivedB_00018c1c;
 RTTIBase__RTTIBase_destructor((RTTIBase *)this_ptr);
 return;
}

// Function: RTTIDerivedB__RTTIDerivedB @ 0x13d26
void RTTIDerivedB__RTTIDerivedB_destructor(RTTIDerivedB *this_ptr)
{
 RTTIDerivedB__RTTIDerivedB(this_ptr);
 FUN_00011200(this_ptr,4);
 return;
}

// Function: RTTIDerivedA__RTTIDerivedA @ 0x13d60
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_ptr)
{
 *(char ***)this_ptr = &PTR__RTTIDerivedA_00018c30;
 RTTIBase__RTTIBase_destructor((RTTIBase *)this_ptr);
 return;
}

// Function: RTTIDerivedA__RTTIDerivedA @ 0x13d92
void RTTIDerivedA__RTTIDerivedA_destructor(RTTIDerivedA *this_ptr)
{
 RTTIDerivedA__RTTIDerivedA(this_ptr);
 FUN_00011200(this_ptr,4);
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x13dcc
void DiamondDerived__DiamondDerived(DiamondDerived *this_ptr)
{
 *(unsigned int *)this_ptr = 0x18c5c;
 *(unsigned int *)(this_ptr + 0x10) = 0x18c90;
 *(unsigned int *)(this_ptr + 8) = 0x18c74;
 MiddleB__MiddleB((MiddleB *)(this_ptr + 8));
 MiddleA__MiddleA((MiddleA *)this_ptr);
 VirtualBase__VirtualBase_destructor((VirtualBase *)(this_ptr + 0x10));
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x13e4e
void DiamondDerived__DiamondDerived2(DiamondDerived *this_ptr)
{
 DiamondDerived__DiamondDerived(this_ptr + -8);
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x13e5c
void DiamondDerived__DiamondDerived3(DiamondDerived *this_ptr)
{
 DiamondDerived__DiamondDerived(this_ptr + *(int *)(*(int *)this_ptr + -0x10));
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x13e72
void DiamondDerived__DiamondDerived4(DiamondDerived *this_ptr)
{
 DiamondDerived__DiamondDerived(this_ptr);
 FUN_00011200(this_ptr,0x18);
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x13eab
void DiamondDerived__DiamondDerived5(DiamondDerived *this_ptr)
{
 DiamondDerived__DiamondDerived(this_ptr + -8);
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x13eb6
void DiamondDerived__DiamondDerived6(DiamondDerived *this_ptr)
{
 DiamondDerived__DiamondDerived(this_ptr + *(int *)(*(int *)this_ptr + -0x10));
 return;
}

// Function: MultiDerived__MultiDerived @ 0x13eca
void MultiDerived__MultiDerived(MultiDerived *this_ptr)
{
 *(char ***)this_ptr = &PTR_funcA_00018d3c;
 *(char ***)(this_ptr + 8) = &PTR_funcB_00018d54;
 BaseB__BaseB_destructor((BaseB *)(this_ptr + 8));
 BaseA__BaseA_destructor((BaseA *)this_ptr);
 return;
}

// Function: MultiDerived__MultiDerived @ 0x13f19
void MultiDerived__MultiDerived2(MultiDerived *this_ptr)
{
 MultiDerived__MultiDerived(this_ptr + -8);
 return;
}

// Function: MultiDerived__MultiDerived @ 0x13f24
void MultiDerived__MultiDerived3(MultiDerived *this_ptr)
{
 MultiDerived__MultiDerived(this_ptr);
 FUN_00011200(this_ptr,0x10);
 return;
}

// Function: MultiDerived__MultiDerived @ 0x13f5d
void MultiDerived__MultiDerived4(MultiDerived *this_ptr)
{
 MultiDerived__MultiDerived(this_ptr + -8);
 return;
}

// Function: Derived__Derived @ 0x13f68
void Derived__Derived(Derived *this_ptr)
{
 *(char ***)this_ptr = &PTR_virtual_func_00018d90;
 Base__Base((Base *)this_ptr);
 return;
}

// Function: Derived__Derived @ 0x13f9a
void Derived__Derived_destructor(Derived *this_ptr)
{
 Derived__Derived(this_ptr);
 FUN_00011200(this_ptr,8);
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

