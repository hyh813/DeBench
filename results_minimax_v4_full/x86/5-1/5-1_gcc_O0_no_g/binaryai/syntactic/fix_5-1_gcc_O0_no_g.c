// Decompiled by BinaryAI
// SHA256: 3ebbf3ff5582d9a738f04e27e2558d06de36473668947778f025084499c8b92d

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

// Stack canary offset for GCC
#ifdef __GNUC__
#define in_GS_OFFSET 0x14
#endif

// Stub functions that may be linked in
extern void __gmon_start__(void);
extern void frame_dummy(void);
extern void __stack_chk_fail_local(void);

// Forward declarations for C++ classes/structures
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct DiamondDerived DiamondDerived;
typedef struct Point Point;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct type_info type_info;
typedef void *type;

// C++ template type aliases (as structs for C compatibility)
typedef struct unique_ptr_int_std__default_delete_int__ unique_ptr_int_std__default_delete_int__;
typedef struct unique_ptr_int_std__default_delete_int____ unique_ptr_int___std__default_delete_int____;
typedef struct unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__;
typedef struct _lambda_int__1_ _lambda_int__1_;
typedef struct _lambda_int___1_ _lambda_int___1_;
typedef struct __uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1__true_false_ __uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1__true_false_;
typedef struct __uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ __uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__;
typedef struct tuple_int__test_cpp_smart_ptr_____lambda_int___1__ tuple_int__test_cpp_smart_ptr_____lambda_int___1__;
typedef struct _Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__ _Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__;
typedef struct _Tuple_impl _Tuple_impl;
typedef struct _Head_base_0u_int__false_ _Head_base_0u_int__false_;
typedef struct _Head_base _Head_base;
typedef struct tuple tuple;
typedef struct __uniq_ptr_impl __uniq_ptr_impl;
typedef struct __uniq_ptr_data __uniq_ptr_data;
typedef struct unique_ptr unique_ptr;

// Additional template types
typedef struct __uniq_ptr_data_int_std__default_delete_int__true_true_ __uniq_ptr_data_int_std__default_delete_int__true_true_;
typedef struct __uniq_ptr_impl_int_std__default_delete_int__ __uniq_ptr_impl_int_std__default_delete_int__;
typedef struct __uniq_ptr_impl_int_std__default_delete_int____ __uniq_ptr_impl_int_std__default_delete_int____;
typedef struct tuple_int__std__default_delete_int__ tuple_int__std__default_delete_int__;
typedef struct tuple_int__std__default_delete_int____ tuple_int__std__default_delete_int____;
typedef struct _Tuple_impl_0u_int__std__default_delete_int__ _Tuple_impl_0u_int__std__default_delete_int__;
typedef struct _Tuple_impl_0u_int__std__default_delete_int____ _Tuple_impl_0u_int__std__default_delete_int____;
typedef struct default_delete_int_ default_delete_int_;
typedef struct default_delete_int___ default_delete_int___;
typedef struct default_delete default_delete;

// Function: _init @ 0x11000
int _init(void)
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
 // Original code called NULL - made it a no-op
 return;
}

// Stub function pointers - these are actually function pointers used for PLT calls
typedef void *(*FUN_PTR)(void);

// PLT stub functions - these are external function references
// Stub for malloc
void *FUN_000111b0(int size) { return malloc(size); }
// Stub for free  
void *FUN_00011200(void *ptr, int size) { if (ptr) free(ptr); return NULL; }
// Stub for printf
void *FUN_000112a0(char *fmt, unsigned int val) { printf(fmt, val); return NULL; }
// Stub for strlen
void *FUN_000111e0(void *s) { return (void*)strlen((char*)s); }
// Stub for strcmp
void *FUN_00011210(unsigned int s1, unsigned int s2) { return (void*)(strcmp((char*)s1, (char*)s2) == 0); }
// Stub for exit
void *FUN_00011290(void) { exit(0); return NULL; }
// Stub for memcpy
void *FUN_00011270(void *dest, void *src, void *n, int x) { return memcpy(dest, src, (size_t)n); }
// Stub for memset
void *FUN_00011280(unsigned int s) { return NULL; }
// Stub for operator new
void *FUN_000111a0(int size) { return malloc(size); }
// Stub for other operators
void *FUN_000111c0(int x) { return NULL; }
void *FUN_000111d0(int x) { return malloc(x); }
void *FUN_000111f0(void *a, void *b, void *c) { return NULL; }
void *FUN_00011220(void *a, void *b, void *c, int d, int e, void *f, void *g) { return NULL; }
void *FUN_00011230(unsigned int x) { return malloc(x); }
void *FUN_00011240(void *a, char *b, int c, void *d) { return NULL; }
void *FUN_00011250(void) { return NULL; }
void *FUN_00011260(void) { return NULL; }
void *FUN_000112b0(void *a) { return NULL; }
void *FUN_000112c0(void *a) { return NULL; }
void *FUN_000112d0(void *a) { return NULL; }
void *FUN_000112e0(void *a) { return NULL; }
void *FUN_000112f0(void *a, void *b, int c) { return NULL; }
void *FUN_00011300(void) { return NULL; }

// Global variables
unsigned int instance_count = 0;
char *DAT_0001502d = "Base";
char *DAT_0001503c = "%d\n";
char *DAT_00015060 = "test_cpp_member_func: %d\n";
char *DAT_0001507e = "test_cpp_constructor: %d\n";
char *DAT_0001509a = "test_cpp_virtual_func: %d\n";
char *DAT_000150b6 = "test_cpp_multiple_inheritance: %d\n";
char *DAT_000150d2 = "test_cpp_diamond_inheritance: %d\n";
char *DAT_000150ef = "test_cpp_operator_overload: %d\n";
char *DAT_0001510b = "test_cpp_template_func: %d\n";
char *DAT_00015127 = "test_cpp_template_class: %d\n";
char *DAT_00015143 = "test_cpp_lambda: %d\n";
char *DAT_0001515f = "test_cpp_exception: %d\n";
char *DAT_0001517c = "test_cpp_smart_ptr: %d\n";
char *DAT_00015199 = "test_cpp_rtti: %d\n";

// Function: _start @ 0x11310
void _start(unsigned int param_1, unsigned int param_2)
{
 // Call main with proper argc/argv
 ((int (*)(int, char **))main)(param_2, (char **)param_1);
 // Exit (should not reach here)
 while(1) {} 
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
 SimpleClass::SimpleClass(local_34,5,"Test");
 SimpleClass::setValue(local_34,10);
 iVar1 = SimpleClass::getValue(local_34);
 iVar2 = SimpleClass::compute(local_34,3);
 iVar3 = SimpleClass::getClassID();
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
 LifecycleClass::LifecycleClass(local_18,5);
 iVar1 = LifecycleClass::getData(local_18,2);
 iVar2 = LifecycleClass::getInstanceCount();
 LifecycleClass::_LifecycleClass(local_18);
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
 Derived::Derived(local_18,3);
 local_30 = Base::virtual_func((Base *)&local_34,5);
 local_2c = Derived::virtual_func(local_18,5);
 local_28 = &local_34;
 local_24 = local_18;
 local_20 = call_virtual_func((Base *)local_28,5);
 local_1c = call_virtual_func((Base *)local_24,5);
 iVar1 = local_30 + local_2c + local_20 + local_1c;
 Derived::_Derived(local_18);
 Base::_Base((Base *)&local_34);
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
 MultiDerived::MultiDerived((MultiDerived *)&local_20);
 local_1c = 100;
 local_14 = 200;
 iVar1 = (**local_20)(&local_20);
 iVar2 = (**local_18)(&local_18);
 iVar1 = iVar1 + iVar2 + (uint)(&local_20 != &local_18);
 MultiDerived::_MultiDerived((MultiDerived *)&local_20);
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
 DiamondDerived::DiamondDerived(local_28);
 local_14 = 0x32;
 iVar1 = (**local_18)(&local_18);
 local_14 = 100;
 iVar2 = (**local_18)(&local_18);
 iVar1 = iVar1 + iVar2;
 DiamondDerived::_DiamondDerived(local_28);
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
 Point::Point(local_28,1,2);
 Point::Point(local_20,3,4);
 Point::operator_((Point *)&local_18,local_28);
 cVar1 = Point::operator__(local_28,local_20);
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
 local_20 = template_max(3,7);
 local_1c = template_max(2.5,1.5);
 local_28 = 10;
 local_24 = 0x14;
 template_swap(&local_28,&local_24);
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
 Container_int_Container(local_90);
 Container_int_push(local_90,10);
 Container_int_push(local_90,0x14);
 Container_int_push(local_90,0x1e);
 iVar1 = Container_int_get(local_90,0);
 iVar2 = Container_int_getSize(local_90);
 Container_double_Container(local_64);
 Container_double_push(local_64);
 lVar3 = (longdouble)Container_double_get(local_64,0);
 iVar1 = (int)ROUND((double)lVar3) + iVar1 + iVar2;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}

// Function: test_cpp_lambda()::{lambda(int)#1}::operator() @ 0x11b34
int __thiscall test_cpp_lambda()::{lambda(int)#1}::operator__(_lambda_int__1_ *this,int param_1)
{
 **(int **)(this + 4) = **(int **)(this + 4) + 5;
 return **(int **)(this + 4) + *(int *)this * param_1;
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
 local_20 = test_cpp_lambda()::{lambda(int)#1}::operator__((_lambda_int__1_ *)&local_18,3);
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

// Function: lambda_deleter_operator @ 0x11d26
void __thiscall
test_cpp_smart_ptr()::{lambda(int*)#1}::operator__(_lambda_int___1_ *this,int *param_1)
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
 unique_ptr_default_delete_int_ctor
 (local_2c,piVar1);
 puVar2 = (unsigned int *)unique_ptr_int_std_default_delete_int_operator_deref(local_2c);
 *puVar2 = 200;
 ptVar3 = std::move_std__unique_ptr_int_std__default_delete_int____((unique_ptr *)local_2c);
 unique_ptr_default_delete_int_ctor(local_28,(unique_ptr *)ptVar3);
 piVar1 = (int *)unique_ptr_int_std_default_delete_int_operator_deref(local_28);
 local_1c = *piVar1;
 piVar1 = (int *)FUN_00011230(0x14);
 *piVar1 = 1;
 piVar1[1] = 2;
 piVar1[2] = 3;
 piVar1[3] = 4;
 piVar1[4] = 5;
 std::unique_ptr<int[],std::default_delete<int[]>>::
 unique_ptr_int__std__default_delete_int____void_bool_(local_24,piVar1);
 piVar1 = (int *)std::unique_ptr<int[],std::default_delete<int[]>>::operator__(local_24,2);
 local_18 = *piVar1;
 piVar1 = (int *)FUN_000111b0(4);
 *piVar1 = 500;
 unique_ptr_int_test_cpp_smart_ptr_lambda_int__1__unique_ptr_lambda_void_
 (local_20,piVar1,&local_2d);
 piVar1 = (int *)std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::operator_(local_20);
 local_14 = *piVar1;
 iVar4 = local_1c + local_18 + local_14;
 std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_unique_ptr(local_20);
 std::unique_ptr<int[],std::default_delete<int[]>>::_unique_ptr(local_24);
 std::unique_ptr<int,std::default_delete<int>>::_unique_ptr(local_28);
 std::unique_ptr<int,std::default_delete<int>>::_unique_ptr(local_2c);
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
 RTTIDerivedA::RTTIDerivedA((RTTIDerivedA *)this);
 this_00 = (int *)FUN_000111b0(4);
 *this_00 = 0;
 RTTIDerivedB::RTTIDerivedB((RTTIDerivedB *)this_00);
 local_20 = 0;
 if (this == (int *)0x0) {
 FUN_00011250();
LAB_00011fcb:
 local_20 = 10;
 }
 else {
 cVar1 = std::type_info::operator__
 (*(type_info **)(*this + -4),(type_info *)&RTTIDerivedA::typeinfo);
 if (cVar1 != '\0') goto LAB_00011fcb;
 }
 if (this_00 == (int *)0x0) {
 FUN_00011250();
LAB_00011ff9:
 local_20 = local_20 + 0x14;
 }
 else {
 cVar1 = std::type_info::operator__
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
 iVar2 = RTTIDerivedA::derivedA_data();
 local_20 = local_20 + iVar2;
 }
 if (this_00 == (int *)0x0) {
 iVar2 = 0;
 }
 else {
 iVar2 = FUN_00011270(this_00,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 }
 if (iVar2 != 0) {
 iVar2 = RTTIDerivedB::derivedB_data();
 local_20 = local_20 + iVar2;
 }
 if (this == (int *)0x0) {
 this = (int *)FUN_00011250();
 }
 else {
 uVar3 = std::type_info::name(*(type_info **)(*this + -4));
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

// Stub for unique_ptr with custom deleter
void stub_unique_ptr_data_lambda_impl(void *this, int *param_1, void *param_2)
{
 return;
}

// Function: unique_ptr_lambda_ctor @ 0x12282
void __thiscall
unique_ptr_lambda_ctor
 (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *this,int *param_1,
 _lambda_int___1_ *param_2)
{
 __uniq_ptr_data<int,test_cpp_smart_ptr()::{lambda(int*)#1},true,false>::
 __uniq_ptr_impl__lambda_int___1_const__
 ((__uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1__true_false_ *)this,param_1,
 param_2);
 return;
}

// Function: unique_ptr_lambda_dtor @ 0x122aa
void __thiscall
unique_ptr_lambda_dtor
 (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *this)
{
 int **ppiVar1;
 _lambda_int___1_ *this_00;
 int **ppiVar2;
 ppiVar1 = (int **)__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (_lambda_int___1_ *)get_deleter(this);
 ppiVar2 = (int **)move_int___(ppiVar1);
 test_cpp_smart_ptr()::{lambda(int*)#1}::operator__(this_00,*ppiVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::operator* @ 0x12312
void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::operator_
 (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *this)
{
 get(this);
 return;
}

// Function: __uniq_ptr_impl_lambda_ctor @ 0x1233a
void __thiscall
__uniq_ptr_impl_lambda_ctor
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *this,int *param_1,
 _lambda_int___1_ *param_2)
{
 _lambda_int___1_ *p_Var1;
 p_Var1 = forward_test_cpp_smart_ptr_____lambda_int___1_const__((type *)param_2);
 tuple<int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::tuple_int____lambda_int___1_const__true_
 ((tuple_int__test_cpp_smart_ptr_____lambda_int___1__ *)this,&param_1,p_Var1);
 return;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr @ 0x12374
void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *this)
{
 _lambda_int___1_ *in_stack_ffffffe8;
 get_0u_int__test_cpp_smart_ptr_____lambda_int___1__((int *)this,in_stack_ffffffe8);
 return;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::get_deleter @ 0x12396
void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::get_deleter
 (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *this)
{
 __uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_deleter
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *)this);
 return;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::get @ 0x123b8
void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::get
 (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *this)
{
 __uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *)this);
 return;
}

// Function: std::forward<test_cpp_smart_ptr()::{lambda(int*)#1}const&> @ 0x123d9
_lambda_int___1_ * forward_lambda_int_1(type *param_1)
{
 return (_lambda_int___1_ *)param_1;
}

// Function: tuple_lambda_ctor @ 0x123ec
void __thiscall
tuple_lambda_ctor
 (tuple_int__test_cpp_smart_ptr_____lambda_int___1__ *this,int **param_1,
 _lambda_int___1_ *param_2)
{
 _lambda_int___1_ *p_Var1;
 int **ppiVar2;
 p_Var1 = forward_lambda_int_1((type *)param_2);
 ppiVar2 = forward_int___((type *)param_1);
 std__Tuple_impl_0u_int_std_default_delete_int__Tuple_impl
 ((_Tuple_impl_0u_int__std__default_delete_int__ *)this,ppiVar2,p_Var1);
 return;
}

// Function: std::get<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 0x1242f
type * std::get_0u_int__test_cpp_smart_ptr_____lambda_int___1__
 (int *param_1,_lambda_int___1_ *param_2)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__test_cpp_smart_ptr_____lambda_int___1__((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_deleter @ 0x12450
void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_deleter
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *this)
{
 _lambda_int___1_ *in_stack_ffffffe8;
 get_1u_int__test_cpp_smart_ptr_____lambda_int___1__((int *)this,in_stack_ffffffe8);
 return;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr @ 0x12472
unsigned int __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *this)
{
 unsigned int *puVar1;
 _lambda_int___1_ *in_stack_ffffffe8;
 puVar1 = (unsigned int *)
 get_0u_int__test_cpp_smart_ptr_____lambda_int___1__((int *)this,in_stack_ffffffe8);
 return *puVar1;
}

// Function: std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_Tuple_impl<int*&,{lambda(int*)#1}const&,void> @ 0x12496
void __thiscall
std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::
_Tuple_impl_int____lambda_int___1_const__void_
 (_Tuple_impl_0u_int__test_cpp_smart_ptr_____lambda_int___1__ *this,int **param_1,
 _lambda_int___1_ *param_2)
{
 int **ppiVar1;
 forward_test_cpp_smart_ptr_____lambda_int___1_const__((type *)param_2);
 _Tuple_impl<1u,test_cpp_smart_ptr()::{lambda(int*)#1}>::_Tuple_impl((_lambda_int___1_ *)this);
 ppiVar1 = forward_int___((type *)param_1);
 _Head_base<0u,int*,false>::_Head_base_int___((_Head_base_0u_int__false_ *)this,ppiVar1);
 return;
}

// Function: std::__get_helper<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 0x124e5
int ** std::__get_helper_0u_int__test_cpp_smart_ptr_____lambda_int___1__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head
 ((_lambda_int___1_ *)param_1);
 return ppiVar1;
}

// Function: std::get<1u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 0x12505
type * std::get_1u_int__test_cpp_smart_ptr_____lambda_int___1__
 (int *param_1,_lambda_int___1_ *param_2)
{
 _lambda_int___1_ *p_Var1;
 p_Var1 = __get_helper_1u_test_cpp_smart_ptr_____lambda_int___1__((_Tuple_impl *)param_1);
 return (type *)p_Var1;
}

// Function: std::get<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 0x12525
type * std::get_0u_int__test_cpp_smart_ptr_____lambda_int___1__
 (int *param_1,_lambda_int___1_ *param_2)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__test_cpp_smart_ptr_____lambda_int___1__((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std::_Tuple_impl<1u,test_cpp_smart_ptr()::{lambda(int*)#1}>::_Tuple_impl @ 0x12546
void std::_Tuple_impl<1u,test_cpp_smart_ptr()::{lambda(int*)#1}>::_Tuple_impl
 (_lambda_int___1_ *param_1)
{
 _Head_base<1u,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_Head_base(param_1);
 return;
}

// Function: std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head @ 0x1256a
void std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head
 (_lambda_int___1_ *param_1)
{
 _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
 return;
}

// Function: std::__get_helper<1u,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 0x1258b
_lambda_int___1_ *
std::__get_helper_1u_test_cpp_smart_ptr_____lambda_int___1__(_Tuple_impl *param_1)
{
 _lambda_int___1_ *p_Var1;
 p_Var1 = (_lambda_int___1_ *)
 _Tuple_impl<1u,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head
 ((_lambda_int___1_ *)param_1);
 return p_Var1;
}

// Function: std::__get_helper<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 0x125ab
int ** std::__get_helper_0u_int__test_cpp_smart_ptr_____lambda_int___1__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head
 ((_lambda_int___1_ *)param_1);
 return ppiVar1;
}

// Function: std::_Head_base<1u,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_Head_base @ 0x125cc
char **
std::_Head_base<1u,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_Head_base
 (_lambda_int___1_ *param_1)
{
 return &_GLOBAL_OFFSET_TABLE_;
}

// Function: std::_Tuple_impl<1u,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head @ 0x125dc
void std::_Tuple_impl<1u,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(_lambda_int___1_ *param_1)
{
 _Head_base<1u,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_M_head(param_1);
 return;
}

// Function: std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head @ 0x125fc
void std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head
 (_lambda_int___1_ *param_1)
{
 _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
 return;
}

// Function: std::_Head_base<1u,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_M_head @ 0x1261d
_lambda_int___1_ *
std::_Head_base<1u,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_M_head(_lambda_int___1_ *param_1)
{
 return param_1;
}

// Function: __static_initialization_and_destruction_0 @ 0x1262f
void __static_initialization_and_destruction_0(int param_1,int param_2)
{
 if ((param_1 == 1) && (param_2 == 0xffff)) {
 FUN_000112d0(&std::__ioinit);
 FUN_000111f0(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
 }
 return;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x1268c
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 __static_initialization_and_destruction_0(1,0xffff);
 return;
}

// Function: std::type_info::name @ 0x126b4
int __thiscall std::type_info::name(type_info *this)
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

// Function: std::type_info::operator== @ 0x126e6
unsigned int __thiscall std::type_info::operator__(type_info *this,type_info *param_1)
{
 int iVar1;
 unsigned int uVar2;
 if (*(int *)(this + 4) == *(int *)(param_1 + 4)) {
LAB_00012738:
 uVar2 = 1;
 }
 else {
 if (**(char **)(this + 4) != '*') {
 iVar1 = FUN_00011210(*(unsigned int *)(this + 4),*(unsigned int *)(param_1 + 4));
 if (iVar1 == 0) goto LAB_00012738;
 }
 uVar2 = 0;
 }
 return uVar2;
}

// Function: SimpleClass::SimpleClass @ 0x1274a
void __thiscall SimpleClass::SimpleClass(SimpleClass *this,int param_1,char *param_2)
{
 *(int *)this = param_1;
 FUN_00011240(this + 4,param_2,0x1f,0x1275a);
 this[0x23] = (SimpleClass)0x0;
 return;
}

// Function: SimpleClass::getValue @ 0x1278e
unsigned int __thiscall SimpleClass::getValue(SimpleClass *this)
{
 return *(unsigned int *)this;
}

// Function: SimpleClass::setValue @ 0x127a6
void __thiscall SimpleClass::setValue(SimpleClass *this,int param_1)
{
 *(int *)this = param_1;
 return;
}

// Function: SimpleClass::compute @ 0x127c2
int __thiscall SimpleClass::compute(SimpleClass *this,int param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = *(int *)this;
 iVar2 = FUN_000111e0(this + 4);
 return iVar2 + iVar1 * param_1;
}

// Function: SimpleClass::getClassID @ 0x127fd
unsigned int SimpleClass::getClassID(void)
{
 return 0x1234;
}

// Function: LifecycleClass::LifecycleClass @ 0x12816
void __thiscall LifecycleClass::LifecycleClass(LifecycleClass *this,uint param_1)
{
 unsigned int uVar1;
 uint local_10;
 *(uint *)(this + 4) = param_1;
 if (param_1 < 0x20000000) {
 uVar1 = FUN_00011230(param_1 << 2);
 *(unsigned int *)this = uVar1;
 for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {
LAB_00012863:
 *(uint *)(local_10 * 4 + *(int *)this) = local_10 * 10;
 }
 instance_count = instance_count + 1;
 return;
 }
 FUN_00011290();
 goto LAB_00012863;
}

// Function: LifecycleClass::~LifecycleClass @ 0x128a4
void __thiscall LifecycleClass::_LifecycleClass(LifecycleClass *this)
{
 if (*(int *)this != 0) {
 FUN_00011280(*(unsigned int *)this);
 }
 instance_count = instance_count + -1;
 return;
}

// Function: LifecycleClass::getData @ 0x128ea
unsigned int __thiscall LifecycleClass::getData(LifecycleClass *this,uint param_1)
{
 unsigned int uVar1;
 if (param_1 < *(uint *)(this + 4)) {
 uVar1 = *(unsigned int *)(param_1 * 4 + *(int *)this);
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

// Function: Base::virtual_func @ 0x12938
int __thiscall Base::virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x12952
char * Base::getName(void)
{
 return &DAT_0001502d;
}

// Function: Base::~Base @ 0x1296c
void __thiscall Base::_Base(Base *this)
{
 *(char ***)this = &PTR_virtual_func_00018da8;
 return;
}

// Function: Base::~Base @ 0x1298c
void __thiscall Base::_Base(Base *this)
{
 _Base(this);
 FUN_00011200(this,4);
 return;
}

// Function: Base::Base @ 0x129c6
void __thiscall Base::Base(Base *this)
{
 *(char ***)this = &PTR_virtual_func_00018da8;
 return;
}

// Function: Derived::Derived @ 0x129e6
void __thiscall Derived::Derived(Derived *this,int param_1)
{
 Base::Base((Base *)this);
 *(char ***)this = &PTR_virtual_func_00018d90;
 *(int *)(this + 4) = param_1;
 return;
}

// Function: Derived::virtual_func @ 0x12a26
int __thiscall Derived::virtual_func(Derived *this,int param_1)
{
 return *(int *)(this + 4) * param_1;
}

// Function: Derived::getName @ 0x12a44
char * Derived::getName(void)
{
 return "Derived";
}

// Function: BaseA::funcA @ 0x12a5e
unsigned int BaseA::funcA(void)
{
 return 10;
}

// Function: BaseA::~BaseA @ 0x12a76
void __thiscall BaseA::_BaseA(BaseA *this)
{
 *(char ***)this = &PTR_funcA_00018d7c;
 return;
}

// Function: BaseA::~BaseA @ 0x12a96
void __thiscall BaseA::_BaseA(BaseA *this)
{
 _BaseA(this);
 FUN_00011200(this,8);
 return;
}

// Function: BaseB::funcB @ 0x12ad0
unsigned int BaseB::funcB(void)
{
 return 0x14;
}

// Function: BaseB::~BaseB @ 0x12ae8
void __thiscall BaseB::_BaseB(BaseB *this)
{
 *(char ***)this = &PTR_funcB_00018d68;
 return;
}

// Function: BaseB::~BaseB @ 0x12b08
void __thiscall BaseB::_BaseB(BaseB *this)
{
 _BaseB(this);
 FUN_00011200(this,8);
 return;
}

// Function: MultiDerived::funcA @ 0x12b42
unsigned int MultiDerived::funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x12b5a
unsigned int MultiDerived::funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x12b72
void __thiscall MultiDerived::funcB(MultiDerived *this)
{
 funcB();
 return;
}

// Function: BaseA::BaseA @ 0x12b7e
void __thiscall BaseA::BaseA(BaseA *this)
{
 *(char ***)this = &PTR_funcA_00018d7c;
 return;
}

// Function: BaseB::BaseB @ 0x12b9e
void __thiscall BaseB::BaseB(BaseB *this)
{
 *(char ***)this = &PTR_funcB_00018d68;
 return;
}

// Function: MultiDerived::MultiDerived @ 0x12bbe
void __thiscall MultiDerived::MultiDerived(MultiDerived *this)
{
 BaseA::BaseA((BaseA *)this);
 BaseB::BaseB((BaseB *)(this + 8));
 *(char ***)this = &PTR_funcA_00018d3c;
 *(char ***)(this + 8) = &PTR_funcB_00018d54;
 return;
}

// Function: VirtualBase::func @ 0x12c12
unsigned int VirtualBase::func(void)
{
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x12c2a
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
 *(char ***)this = &PTR_func_00018d28;
 return;
}

// Function: VirtualBase::~VirtualBase @ 0x12c4a
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
 _VirtualBase(this);
 FUN_00011200(this,8);
 return;
}

// Function: MiddleA::func @ 0x12c84
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func @ 0x12cb0
void __thiscall MiddleA::func(MiddleA *this)
{
 func(this + *(int *)(*(int *)this + -0xc));
 return;
}

// Function: MiddleB::func @ 0x12cc4
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}

// Function: MiddleB::func @ 0x12cf0
void __thiscall MiddleB::func(MiddleB *this)
{
 func(this + *(int *)(*(int *)this + -0xc));
 return;
}

// Function: DiamondDerived::func @ 0x12d04
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x12d30
void __thiscall DiamondDerived::func(DiamondDerived *this)
{
 func(this + *(int *)(*(int *)this + -0xc));
 return;
}

// Function: DiamondDerived::func @ 0x12d43
void __thiscall DiamondDerived::func(DiamondDerived *this)
{
 func(this + -8);
 return;
}

// Function: VirtualBase::VirtualBase @ 0x12d4e
void __thiscall VirtualBase::VirtualBase(VirtualBase *this)
{
 *(char ***)this = &PTR_func_00018d28;
 return;
}

// Function: MiddleA::MiddleA @ 0x12d6e
void __thiscall MiddleA::MiddleA(MiddleA *this)
{
 unsigned int *in_stack_00000008;
 *(unsigned int *)this = *in_stack_00000008;
 *(unsigned int *)(this + *(int *)(*(int *)this + -0xc)) = in_stack_00000008[1];
 return;
}

// Function: MiddleA::~MiddleA @ 0x12da6
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 unsigned int *in_stack_00000008;
 *(unsigned int *)this = *in_stack_00000008;
 *(unsigned int *)(this + *(int *)(*(int *)this + -0xc)) = in_stack_00000008[1];
 return;
}

// Function: MiddleB::MiddleB @ 0x12dde
void __thiscall MiddleB::MiddleB(MiddleB *this)
{
 unsigned int *in_stack_00000008;
 *(unsigned int *)this = *in_stack_00000008;
 *(unsigned int *)(this + *(int *)(*(int *)this + -0xc)) = in_stack_00000008[1];
 return;
}

// Function: MiddleB::~MiddleB @ 0x12e16
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 unsigned int *in_stack_00000008;
 *(unsigned int *)this = *in_stack_00000008;
 *(unsigned int *)(this + *(int *)(*(int *)this + -0xc)) = in_stack_00000008[1];
 return;
}

// Function: DiamondDerived::DiamondDerived @ 0x12e4e
void __thiscall DiamondDerived::DiamondDerived(DiamondDerived *this)
{
 VirtualBase::VirtualBase((VirtualBase *)(this + 0x10));
 MiddleA::MiddleA((MiddleA *)this);
 MiddleB::MiddleB((MiddleB *)(this + 8));
 *(unsigned int *)this = 0x18c5c;
 *(unsigned int *)(this + 0x10) = 0x18c90;
 *(unsigned int *)(this + 8) = 0x18c74;
 return;
}

// Function: Point::Point @ 0x12ed0
void __thiscall Point::Point(Point *this,int param_1,int param_2)
{
 *(int *)this = param_1;
 *(int *)(this + 4) = param_2;
 return;
}

// Function: Point::operator+ @ 0x12ef6
Point * __thiscall Point::operator_(Point *this,Point *param_1)
{
 int *in_stack_0000000c;
 Point(this,*in_stack_0000000c + *(int *)param_1,*(int *)(param_1 + 4) + in_stack_0000000c[1]);
 return this;
}

// Function: Point::operator== @ 0x12f3c
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

// Function: Point::operator++ @ 0x12f7a
Point * __thiscall Point::operator__(Point *this)
{
 *(int *)this = *(int *)this + 1;
 *(int *)(this + 4) = *(int *)(this + 4) + 1;
 return this;
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

// Function: Container<int>::Container @ 0x13042
void __thiscall Container<int>::Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x13060
void __thiscall Container<int>::push(Container_int_ *this,int param_1)
{
 int iVar1;
 if (*(int *)(this + 0x28) < 10) {
 iVar1 = *(int *)(this + 0x28);
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x1309c
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

// Function: Container<int>::getSize @ 0x130d0
unsigned int __thiscall Container<int>::getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x130ea
void __thiscall Container<double>::Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x13108
void Container<double>::push(double param_1)
{
 int iVar1;
 unsigned int in_stack_0000000c;
 if (*(int *)(param_1._0_4_ + 0x50) < 10) {
 iVar1 = *(int *)(param_1._0_4_ + 0x50);
 *(int *)(param_1._0_4_ + 0x50) = iVar1 + 1;
 *(ulonglong *)(param_1._0_4_ + iVar1 * 8) = CONCAT44(in_stack_0000000c,param_1._4_4_);
 }
 return;
}

// Function: Container<double>::get @ 0x1314e
char ** __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
 char **ppuVar1;
 ppuVar1 = &_GLOBAL_OFFSET_TABLE_;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 ppuVar1 = (char **)this;
 }
 return ppuVar1;
}

// Function: Container<double>::getSize @ 0x13180
unsigned int __thiscall Container<double>::getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data @ 0x1319a
void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data
 (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,__uniq_ptr_data *param_1)
{
 __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,(__uniq_ptr_impl *)param_1);
 return;
}

// Function: unique_ptr_default_ctor @ 0x131c4
void __thiscall
unique_ptr_default_ctor
 (unique_ptr_int_std__default_delete_int__ *this,unique_ptr *param_1)
{
 __uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data
 ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this,
 (__uniq_ptr_data *)param_1);
 return;
}

// Function: RTTIBase::getType @ 0x131ee
unsigned int RTTIBase::getType(void)
{
 return 0;
}

// Function: RTTIDerivedA::getType @ 0x13206
unsigned int RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIDerivedA::derivedA_data @ 0x1321e
unsigned int RTTIDerivedA::derivedA_data(void)
{
 return 100;
}

// Function: RTTIDerivedB::getType @ 0x13236
unsigned int RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::derivedB_data @ 0x1324e
unsigned int RTTIDerivedB::derivedB_data(void)
{
 return 200;
}

// Function: RTTIBase::RTTIBase @ 0x13266
void __thiscall RTTIBase::RTTIBase(RTTIBase *this)
{
 *(char ***)this = &PTR__RTTIBase_00018c44;
 return;
}

// Function: RTTIBase::~RTTIBase @ 0x13286
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
 *(char ***)this = &PTR__RTTIBase_00018c44;
 return;
}

// Function: RTTIBase::~RTTIBase @ 0x132a6
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
 _RTTIBase(this);
 FUN_00011200(this,4);
 return;
}

// Function: RTTIDerivedA::RTTIDerivedA @ 0x132e0
void __thiscall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase::RTTIBase((RTTIBase *)this);
 *(char ***)this = &PTR__RTTIDerivedA_00018c30;
 return;
}

// Function: RTTIDerivedB::RTTIDerivedB @ 0x13316
void __thiscall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase::RTTIBase((RTTIBase *)this);
 *(char ***)this = &PTR__RTTIDerivedB_00018c1c;
 return;
}

// Function: std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl @ 0x1334c
void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
 (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,int *param_1)
{
 __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,param_1);
 return;
}

// Function: unique_ptr_default_delete_int_ctor<std::default_delete<int>,void> @ 0x13376
void __thiscall
unique_ptr_default_delete_int_ctor
 (unique_ptr_int_std__default_delete_int__ *this,int *param_1)
{
 __uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
 ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this,param_1);
 return;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::~unique_ptr @ 0x133a0
void __thiscall
std::unique_ptr<int,std::default_delete<int>>::_unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this)
{
 int **ppiVar1;
 default_delete_int_ *this_00;
 int **ppiVar2;
 ppiVar1 = (int **)__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (default_delete_int_ *)get_deleter(this);
 ppiVar2 = (int **)move_int___(ppiVar1);
 default_delete<int>::operator__(this_00,*ppiVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}

// Function: unique_ptr_int_std_default_delete_int_operator_deref @ 0x1340c
void __thiscall
unique_ptr_int_std_default_delete_int_operator_deref
 (unique_ptr_int_std__default_delete_int__ *this)
{
 get(this);
 return;
}

// Function: std::move<std::unique_ptr<int,std::default_delete<int>>&> @ 0x13437
type * move_unique_ptr_int_default_delete_int(unique_ptr *param_1)
{
 return (type *)param_1;
}

// Function: std__Tuple_impl_0u_int_std_default_delete_int__Tuple_impl @ 0x1344e
void __thiscall
std__Tuple_impl_0u_int_std_default_delete_int__Tuple_impl
 (_Tuple_impl_0u_int__std__default_delete_int__ *this,_Tuple_impl *param_1)
{
 _Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl((_Tuple_impl *)this);
 *(unsigned int *)this = *(unsigned int *)param_1;
 return;
}

// Function: std::tuple<int*,std::default_delete<int>>::tuple @ 0x13480
void __thiscall
std::tuple<int*,std::default_delete<int>>::tuple
 (tuple_int__std__default_delete_int__ *this,tuple *param_1)
{
 _Tuple_impl<0u,int*,std::default_delete<int>>::_Tuple_impl
 ((_Tuple_impl_0u_int__std__default_delete_int__ *)this,(_Tuple_impl *)param_1);
 return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl @ 0x134aa
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int__ *this,__uniq_ptr_impl *param_1)
{
 type *ptVar1;
 unsigned int *puVar2;
 ptVar1 = move_std__tuple_int__std__default_delete_int____((tuple *)param_1);
 tuple<int*,std::default_delete<int>>::tuple
 ((tuple_int__std__default_delete_int__ *)this,(tuple *)ptVar1);
 puVar2 = (unsigned int *)_M_ptr((__uniq_ptr_impl_int_std__default_delete_int__ *)param_1);
 *puVar2 = 0;
 return;
}

// Function: std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl @ 0x134f8
void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
 (__uniq_ptr_data_int_std__default_delete_int____true_true_ *this,int *param_1)
{
 __uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this,param_1);
 return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::unique_ptr<int*,std::default_delete<int[]>,void,bool> @ 0x13522
void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::
unique_ptr_int__std__default_delete_int____void_bool_
 (unique_ptr_int___std__default_delete_int____ *this,int *param_1)
{
 __uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
 ((__uniq_ptr_data_int_std__default_delete_int____true_true_ *)this,param_1);
 return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr @ 0x1354c
void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::_unique_ptr
 (unique_ptr_int___std__default_delete_int____ *this)
{
 int **ppiVar1;
 default_delete_int___ *this_00;
 ppiVar1 = (int **)__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (default_delete_int___ *)get_deleter(this);
 default_delete<int[]>::operator__(this_00,*ppiVar1);
 }
 *ppiVar1 = (int *)0x0;
 return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::operator[] @ 0x135a8
int __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::operator__
 (unique_ptr_int___std__default_delete_int____ *this,uint param_1)
{
 int iVar1;
 iVar1 = get(this);
 return param_1 * 4 + iVar1;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl @ 0x135de
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int__ *this,int *param_1)
{
 int **ppiVar1;
 tuple<int*,std::default_delete<int>>::tuple_true_true_
 ((tuple_int__std__default_delete_int__ *)this);
 ppiVar1 = (int **)_M_ptr(this);
 *ppiVar1 = param_1;
 return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr @ 0x1361c
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 get_0u_int__std__default_delete_int__((tuple *)this);
 return;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::get_deleter @ 0x13642
void __thiscall
std::unique_ptr<int,std::default_delete<int>>::get_deleter
 (unique_ptr_int_std__default_delete_int__ *this)
{
 __uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 return;
}

// Function: std::move<int*&> @ 0x13667
type * std::move_int___(int **param_1)
{
 return (type *)param_1;
}

// Function: std::default_delete<int>::operator() @ 0x1367e
void __thiscall std::default_delete<int>::operator__(default_delete_int_ *this,int *param_1)
{
 if (param_1 != (int *)0x0) {
 FUN_00011200(param_1,4);
 }
 return;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::get @ 0x136b2
void __thiscall
std::unique_ptr<int,std::default_delete<int>>::get(unique_ptr_int_std__default_delete_int__ *this)
{
 __uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 return;
}

// Function: std::move<std::tuple<int*,std::default_delete<int>>&> @ 0x136d7
type * std::move_std__tuple_int__std__default_delete_int____(tuple *param_1)
{
 return (type *)param_1;
}

// Function: std__Tuple_impl_1u_std_default_delete_int__Tuple_impl @ 0x136ee
char ** std__Tuple_impl_1u_std_default_delete_int__Tuple_impl(_Tuple_impl *param_1)
{
 return &_GLOBAL_OFFSET_TABLE_;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl @ 0x13702
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int____ *this,int *param_1)
{
 int **ppiVar1;
 tuple<int*,std::default_delete<int[]>>::tuple_true_true_
 ((tuple_int__std__default_delete_int____ *)this);
 ppiVar1 = (int **)_M_ptr(this);
 *ppiVar1 = param_1;
 return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr @ 0x13740
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 get_0u_int__std__default_delete_int____((tuple *)this);
 return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::get_deleter @ 0x13766
void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::get_deleter
 (unique_ptr_int___std__default_delete_int____ *this)
{
 __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 return;
}

// Function: std::default_delete<int[]>::operator() @ 0x1378c
type __thiscall std::default_delete<int[]>::operator__(default_delete_int___ *this,int *param_1)
{
 char **ppuVar1;
 ppuVar1 = &_GLOBAL_OFFSET_TABLE_;
 if (param_1 != (int *)0x0) {
 ppuVar1 = (char **)FUN_00011280(param_1);
 }
 return (type)ppuVar1;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::get @ 0x137be
void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::get
 (unique_ptr_int___std__default_delete_int____ *this)
{
 __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 return;
}

// Function: std::tuple<int*,std::default_delete<int>>::tuple<true,true> @ 0x137e4
void __thiscall
std::tuple<int*,std::default_delete<int>>::tuple_true_true_
 (tuple_int__std__default_delete_int__ *this)
{
 _Tuple_impl<0u,int*,std::default_delete<int>>::_Tuple_impl
 ((_Tuple_impl_0u_int__std__default_delete_int__ *)this);
 return;
}

// Function: std::get<0u,int*,std::default_delete<int>> @ 0x1380a
type * std::get_0u_int__std__default_delete_int__(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter @ 0x13830
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 get_1u_int__std__default_delete_int__((tuple *)this);
 return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr @ 0x13856
unsigned int __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)get_0u_int__std__default_delete_int__((tuple *)this);
 return *puVar1;
}

// Function: std::tuple<int*,std::default_delete<int[]>>::tuple<true,true> @ 0x1387e
void __thiscall
std::tuple<int*,std::default_delete<int[]>>::tuple_true_true_
 (tuple_int__std__default_delete_int____ *this)
{
 _Tuple_impl<0u,int*,std::default_delete<int[]>>::_Tuple_impl
 ((_Tuple_impl_0u_int__std__default_delete_int____ *)this);
 return;
}

// Function: std::get<0u,int*,std::default_delete<int[]>> @ 0x138a4
type * std::get_0u_int__std__default_delete_int____(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__std__default_delete_int____((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter @ 0x138ca
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
 (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 get_1u_int__std__default_delete_int____((tuple *)this);
 return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr @ 0x138f0
unsigned int __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)get_0u_int__std__default_delete_int____((tuple *)this);
 return *puVar1;
}

// Function: std__Tuple_impl_0u_int_std_default_delete_int__Tuple_impl @ 0x13918
void __thiscall
std__Tuple_impl_0u_int_std_default_delete_int__Tuple_impl
 (_Tuple_impl_0u_int__std__default_delete_int__ *this)
{
 _Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl();
 _Head_base<0u,int*,false>::_Head_base((_Head_base_0u_int__false_ *)this);
 return;
}

// Function: std::__get_helper<0u,int*,std::default_delete<int>> @ 0x1394c
int ** std::__get_helper_0u_int__std__default_delete_int__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(param_1);
 return ppiVar1;
}

// Function: std::get<1u,int*,std::default_delete<int>> @ 0x13970
type * std::get_1u_int__std__default_delete_int__(tuple *param_1)
{
 default_delete *pdVar1;
 pdVar1 = __get_helper_1u_std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}

// Function: std::get<0u,int*,std::default_delete<int>> @ 0x13994
type * std::get_0u_int__std__default_delete_int__(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std__Tuple_impl_0u_int_std_default_delete_int_arr__Tuple_impl @ 0x139ba
void __thiscall
std__Tuple_impl_0u_int_std_default_delete_int_arr__Tuple_impl
 (_Tuple_impl_0u_int__std__default_delete_int____ *this)
{
 _Tuple_impl<1u,std::default_delete<int[]>>::_Tuple_impl();
 _Head_base<0u,int*,false>::_Head_base((_Head_base_0u_int__false_ *)this);
 return;
}

// Function: std::__get_helper<0u,int*,std::default_delete<int[]>> @ 0x139ee
int ** std::__get_helper_0u_int__std__default_delete_int____(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(param_1);
 return ppiVar1;
}

// Function: std::get<1u,int*,std::default_delete<int[]>> @ 0x13a12
type * std::get_1u_int__std__default_delete_int____(tuple *param_1)
{
 default_delete *pdVar1;
 pdVar1 = __get_helper_1u_std__default_delete_int____((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}

// Function: std::get<0u,int*,std::default_delete<int[]>> @ 0x13a36
type * std::get_0u_int__std__default_delete_int____(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__std__default_delete_int____((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std::forward<int*&> @ 0x13a5b
int ** std::forward_int___(type *param_1)
{
 return (int **)param_1;
}

// Function: std__Tuple_impl_1u_std_default_delete_int__Tuple_impl @ 0x13a72
void std__Tuple_impl_1u_std_default_delete_int__Tuple_impl(void)
{
 _Head_base<1u,std::default_delete<int>,true>::_Head_base();
 return;
}

// Function: std::_Head_base<0u,int*,false>::_Head_base @ 0x13a98
void __thiscall std::_Head_base<0u,int*,false>::_Head_base(_Head_base_0u_int__false_ *this)
{
 *(unsigned int *)this = 0;
 return;
}

// Function: std::_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head @ 0x13ab5
void std::_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)
{
 _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
 return;
}

// Function: std::__get_helper<1u,std::default_delete<int>> @ 0x13ada
default_delete * std::__get_helper_1u_std__default_delete_int__(_Tuple_impl *param_1)
{
 default_delete *pdVar1;
 pdVar1 = (default_delete *)_Tuple_impl<1u,std::default_delete<int>>::_M_head(param_1);
 return pdVar1;
}

// Function: std::__get_helper<0u,int*,std::default_delete<int>> @ 0x13afe
int ** std::__get_helper_0u_int__std__default_delete_int__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(param_1);
 return ppiVar1;
}

// Function: std__Tuple_impl_1u_std_default_delete_int_arr__Tuple_impl @ 0x13b22
void std__Tuple_impl_1u_std_default_delete_int_arr__Tuple_impl(void)
{
 _Head_base<1u,std::default_delete<int[]>,true>::_Head_base();
 return;
}

// Function: std::_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head @ 0x13b47
void std::_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)
{
 _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
 return;
}

// Function: std::__get_helper<1u,std::default_delete<int[]>> @ 0x13b6c
default_delete * std::__get_helper_1u_std__default_delete_int____(_Tuple_impl *param_1)
{
 default_delete *pdVar1;
 pdVar1 = (default_delete *)_Tuple_impl<1u,std::default_delete<int[]>>::_M_head(param_1);
 return pdVar1;
}

// Function: std::__get_helper<0u,int*,std::default_delete<int[]>> @ 0x13b90
int ** std::__get_helper_0u_int__std__default_delete_int____(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(param_1);
 return ppiVar1;
}

// Function: std::_Head_base<0u,int*,false>::_Head_base<int*&> @ 0x13bb4
void __thiscall
std::_Head_base<0u,int*,false>::_Head_base_int___(_Head_base_0u_int__false_ *this,int **param_1)
{
 int **ppiVar1;
 ppiVar1 = forward_int___((type *)param_1);
 *(int **)this = *ppiVar1;
 return;
}

// Function: std::_Head_base<1u,std::default_delete<int>,true>::_Head_base @ 0x13be0
char ** std::_Head_base<1u,std::default_delete<int>,true>::_Head_base(void)
{
 return &_GLOBAL_OFFSET_TABLE_;
}

// Function: std::_Head_base<0u,int*,false>::_M_head @ 0x13bf4
_Head_base * std::_Head_base<0u,int*,false>::_M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std::_Tuple_impl<1u,std::default_delete<int>>::_M_head @ 0x13c0a
void std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)
{
 _Head_base<1u,std::default_delete<int>,true>::_M_head((_Head_base *)param_1);
 return;
}

// Function: std::_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head @ 0x13c2e
void std::_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)
{
 _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
 return;
}

// Function: std::_Head_base<1u,std::default_delete<int[]>,true>::_Head_base @ 0x13c54
char ** std::_Head_base<1u,std::default_delete<int[]>,true>::_Head_base(void)
{
 return &_GLOBAL_OFFSET_TABLE_;
}

// Function: std::_Tuple_impl<1u,std::default_delete<int[]>>::_M_head @ 0x13c68
void std::_Tuple_impl<1u,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)
{
 _Head_base<1u,std::default_delete<int[]>,true>::_M_head((_Head_base *)param_1);
 return;
}

// Function: std::_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head @ 0x13c8c
void std::_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)
{
 _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
 return;
}

// Function: std::_Head_base<1u,std::default_delete<int>,true>::_M_head @ 0x13cb1
_Head_base * std::_Head_base<1u,std::default_delete<int>,true>::_M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std::_Head_base<0u,int*,false>::_M_head @ 0x13cc7
_Head_base * std::_Head_base<0u,int*,false>::_M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std::_Head_base<1u,std::default_delete<int[]>,true>::_M_head @ 0x13cdd
_Head_base * std::_Head_base<1u,std::default_delete<int[]>,true>::_M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x13cf4
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 *(char ***)this = &PTR__RTTIDerivedB_00018c1c;
 RTTIBase::_RTTIBase((RTTIBase *)this);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x13d26
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 _RTTIDerivedB(this);
 FUN_00011200(this,4);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x13d60
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 *(char ***)this = &PTR__RTTIDerivedA_00018c30;
 RTTIBase::_RTTIBase((RTTIBase *)this);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x13d92
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 _RTTIDerivedA(this);
 FUN_00011200(this,4);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x13dcc
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 *(unsigned int *)this = 0x18c5c;
 *(unsigned int *)(this + 0x10) = 0x18c90;
 *(unsigned int *)(this + 8) = 0x18c74;
 MiddleB::_MiddleB((MiddleB *)(this + 8));
 MiddleA::_MiddleA((MiddleA *)this);
 VirtualBase::_VirtualBase((VirtualBase *)(this + 0x10));
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x13e4e
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + -8);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x13e5c
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x13e72
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this);
 FUN_00011200(this,0x18);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x13eab
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + -8);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x13eb6
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x13eca
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 *(char ***)this = &PTR_funcA_00018d3c;
 *(char ***)(this + 8) = &PTR_funcB_00018d54;
 BaseB::_BaseB((BaseB *)(this + 8));
 BaseA::_BaseA((BaseA *)this);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x13f19
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 _MultiDerived(this + -8);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x13f24
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 _MultiDerived(this);
 FUN_00011200(this,0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x13f5d
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 _MultiDerived(this + -8);
 return;
}

// Function: Derived::~Derived @ 0x13f68
void __thiscall Derived::_Derived(Derived *this)
{
 *(char ***)this = &PTR_virtual_func_00018d90;
 Base::_Base((Base *)this);
 return;
}

// Function: Derived::~Derived @ 0x13f9a
void __thiscall Derived::_Derived(Derived *this)
{
 _Derived(this);
 FUN_00011200(this,8);
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

