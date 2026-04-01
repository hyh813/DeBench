// Decompiled by BinaryAI
// SHA256: ed1f85034dfdcf78e87681935df2abbaf51ad826da18e86fc9ebd6eb24c04e27

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <unistd.h>

// Forward declarations for missing functions
void __gmon_start__(void);
void frame_dummy(void);
int __do_global_ctors_aux(void);
unsigned int main(void);
int __x86_get_pc_thunk_di(void);
int __x86_get_pc_thunk_dx(void);
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);

// Forward declarations for C++ classes
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct DiamondDerived DiamondDerived;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct VirtualBase VirtualBase;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;
typedef struct LifecycleClass LifecycleClass;
typedef struct std_ios_base_Init std_ios_base_Init;

// Forward declarations for functions
int Base_virtual_func(Base *this,int param_1);
int Derived_virtual_func(Derived *this,int param_1);
void Base_destructor(Base *this);
void MultiDerived_destructor(MultiDerived *this);
void DiamondDerived_destructor(DiamondDerived *this);
unsigned int MultiDerived_funcA(void);
unsigned int MultiDerived_funcB(MultiDerived *this);
int DiamondDerived_func(DiamondDerived *this);
void std_ios_base_Init_Init(std_ios_base_Init *this);
int template_max_int_(int param_1,int param_2);
double template_max_double_(double param_1,double param_2);
void template_swap_int_(int *param_1,int *param_2);
void Container_int_Constructor(Container_int_ *this);
void Container_int_push(Container_int_ *this,int param_1);
unsigned int Container_int_get(Container_int_ *this,int param_1);
unsigned int Container_int_getSize(Container_int_ *this);
void Container_double_Constructor(Container_double_ *this);
void Container_double_push(Container_double_ *this,double param_1);
long double Container_double_get(Container_double_ *this,int param_1);
unsigned int Container_double_getSize(Container_double_ *this);
char * Base_getName(void);
int FUN_00011c35(void);
void Base_destructor_impl(Base *this);
char * Derived_getName(void);
int FUN_00011c85(void);
void Derived_destructor_impl(Derived *this);
unsigned int MultiDerived_funcA(void);
void MultiDerived_destructor_impl(MultiDerived *this);
unsigned int MultiDerived_funcB_static(void);
unsigned int MultiDerived_funcB(MultiDerived *this);
void MultiDerived_destructor_impl2(MultiDerived *this);
void MultiDerived_destructor_impl3(MultiDerived *this);
unsigned int BaseA_funcA(void);
void BaseA_destructor_impl(BaseA *this);
void BaseA_destructor_impl2(BaseA *this);
unsigned int BaseB_funcB(void);
void BaseB_destructor_impl(BaseB *this);
void BaseB_destructor_impl2(BaseB *this);
int MiddleA_func(MiddleA *this);
void MiddleA_destructor_impl(MiddleA *this);
void MiddleA_destructor_impl2(MiddleA *this);
int MiddleA_func2(MiddleA *this);
void MiddleA_destructor_impl3(MiddleA *this);
void MiddleA_destructor_impl4(MiddleA *this);
int MiddleB_func(MiddleB *this);
void MiddleB_destructor_impl(MiddleB *this);
void MiddleB_destructor_impl2(MiddleB *this);
int MiddleB_func2(MiddleB *this);
void MiddleB_destructor_impl3(MiddleB *this);
void MiddleB_destructor_impl4(MiddleB *this);
int DiamondDerived_func(DiamondDerived *this);
void DiamondDerived_destructor_impl(DiamondDerived *this);
int DiamondDerived_func2(DiamondDerived *this);
void DiamondDerived_destructor_impl2(DiamondDerived *this);
void DiamondDerived_destructor_impl3(DiamondDerived *this);
int DiamondDerived_func3(DiamondDerived *this);
void DiamondDerived_destructor_impl4(DiamondDerived *this);
void DiamondDerived_destructor_impl5(DiamondDerived *this);
unsigned int VirtualBase_func(void);
void VirtualBase_destructor_impl(VirtualBase *this);
void VirtualBase_destructor_impl2(VirtualBase *this);
void RTTIDerivedA_destructor(RTTIDerivedA *this);
unsigned int RTTIDerivedA_getType(void);
void RTTIBase_destructor(RTTIBase *this);
void RTTIDerivedB_destructor(RTTIDerivedB *this);
unsigned int RTTIDerivedB_getType(void);

// Struct definitions for C++ classes
struct Base {
 void *vtable;
 int data;
};

struct Derived {
 void *vtable;
 int data;
};

struct MultiDerived {
 void *vtable;
 int data;
};

struct DiamondDerived {
 void *vtable;
 int data;
};

struct BaseA {
 void *vtable;
 int data;
};

struct BaseB {
 void *vtable;
 int data;
};

struct MiddleA {
 void *vtable;
 int data;
};

struct MiddleB {
 void *vtable;
 int data;
};

struct VirtualBase {
 void *vtable;
 int data;
};

struct RTTIBase {
 void *vtable;
 int data;
};

struct RTTIDerivedA {
 void *vtable;
 int data;
};

struct RTTIDerivedB {
 void *vtable;
 int data;
};

struct Container_int_ {
 int data[10];
 int size;
};

struct Container_double_ {
 double data[10];
 int size;
};

struct LifecycleClass {
 int data[5];
};

struct std_ios_base_Init {
 void *vtable;
 int data;
};

// Global variables
int LifecycleClass_instance_count = 0;
struct std_ios_base_Init std___ioinit;
void *__dso_handle = 0;
void *PTR_virtual_func_00015ce4 = 0;
void *PTR_virtual_func_00015d04 = 0;
void *PTR_funcA_00015d28 = 0;
void *PTR_funcB_00015d40 = 0;
void *PTR_func_00015db0 = 0;
void *PTR_func_00015dc8 = 0;
void *PTR_func_00015de4 = 0;
void *PTR__RTTIBase_00015ecc = 0;
void *PTR__RTTIBase_00015ee0 = 0;
void *RTTIBase_typeinfo = 0;
void *RTTIDerivedA_typeinfo = 0;
void *RTTIDerivedB_typeinfo = 0;
void *int_typeinfo = 0;
char DAT_000131e5[] = "";
char DAT_00013081[] = "";
char DAT_0001309f[] = "";
char DAT_000130bb[] = "";
char DAT_000130d7[] = "";
char DAT_000130f3[] = "";
char DAT_00013110[] = "";
char DAT_0001312c[] = "";
char DAT_00013148[] = "";
char DAT_00013164[] = "";
char DAT_00013180[] = "";
char DAT_0001319d[] = "";
char DAT_000131ba[] = "";
char UNK_000131d8[] = "";
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
 ((void (*)(void))0)();
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x11040
void *operator_new(unsigned int param_1)
{
 return malloc(param_1);
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x11050
void __cxa_begin_catch(void *param_1)
{
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x11060
void *__cxa_allocate_exception(uint param_1)
{
 return malloc(param_1);
}

// Function: <EXTERNAL>::strlen @ 0x11070
// strlen already declared in string.h

// Function: <EXTERNAL>::__cxa_atexit @ 0x11080
int __cxa_atexit(void (*func)(void), void *obj, void *dso_handle)
{
 return 0;
}

// Function: <EXTERNAL>::strcmp @ 0x11090
// strcmp already declared in string.h

// Function: <EXTERNAL>::__libc_start_main @ 0x110a0
int __libc_start_main(void *main_func, int argc, char **argv, void (*init)(void), void (*fini)(void), void *rtld_fini, void *stack_end)
{
 ((int (*)(void))main_func)();
 return 0;
}

// Function: <EXTERNAL>::operator.new[] @ 0x110b0
void *operator_new_array_func(uint param_1)
{
 return malloc(param_1);
}

// Function: <EXTERNAL>::operator.delete @ 0x110c0
void operator_delete(void *param_1)
{
 free(param_1);
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x110d0
void *__dynamic_cast(void *obj, void *src_type, void *dst_type, size_t src_dst_dist)
{
 return obj;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x110e0
void operator_delete_array_func(void *param_1)
{
 free(param_1);
}

// Function: <EXTERNAL>::printf @ 0x110f0
// printf already declared in stdio.h

// Function: <EXTERNAL>::__cxa_rethrow @ 0x11100
void __cxa_rethrow(void)
{
 return;
}

// Function: <EXTERNAL>::puts @ 0x11110
// puts already declared in stdio.h



// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x11120
void std_ios_base_Init_Init(std_ios_base_Init *this)
{
 return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x11130
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x11140
void __cxa_throw(void *exc, void *tinfo, void *dest)
{
 return;
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x11150
void _Unwind_Resume(void *exc)
{
 return;
}

// Function: FUN_00011160 @ 0x11160
void FUN_00011160(unsigned int param_1)
{
 ((void (*)(void))*(void **)(param_1 + -0x18))();
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x11170
void _GLOBAL__sub_I_5_1_cpp(void)
{
 unsigned int uVar1;
 uVar1 = 0x11178;
 std_ios_base_Init_Init(&std___ioinit);
 __cxa_atexit((void (*)(void))0,&std___ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x111b0
void _start(unsigned int param_1, unsigned int param_2)
{
 char auStack_4[4];
 __libc_start_main((void *)main, param_2, auStack_4, 0, 0, param_1, auStack_4);
 do {
 } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x111dc
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x111e0
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x111f0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11230
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x11280
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI;
 unaff_EDI = __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x4ddf) == '\0') {
 if (*(int *)(unaff_EDI + 0x4d5b) != 0) {
 FUN_00011160(*(unsigned int *)(unaff_EDI + 0x4dcb));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x4de3);
 while (uVar1 < ((unaff_EDI + 0x4a17) - (unaff_EDI + 0x4a13) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x4de3) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x4a13 + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x4de3);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x4ddf) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11319
int __x86_get_pc_thunk_dx(void)
{
 return 0;
}

// Function: __x86.get_pc_thunk.di @ 0x1131d
int __x86_get_pc_thunk_di(void)
{
 return 0;
}

// Function: test_cpp_member_func @ 0x11330
int test_cpp_member_func(void)
{
 size_t sVar1;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 unsigned int local_10;
 unsigned int uStack_c;
 local_28 = 0x74736554;
 local_24 = 0;
 local_20 = 0;
 local_1c = 0;
 local_18 = 0;
 local_14 = 0;
 local_10 = 0;
 uStack_c = 0;
 sVar1 = strlen((char *)&local_28);
 return sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x113b0
int test_cpp_constructor(void)
{
 int *piVar1;
 int *piVar2;
 int iVar3;
 iVar3 = 0;
 piVar1 = (int *)operator_new(0x14);
 piVar2 = piVar1;
 do {
 *piVar2 = iVar3;
 iVar3 = iVar3 + 10;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar3 = LifecycleClass_instance_count + piVar1[2];
 operator_delete(piVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar3;
}

// Function: call_virtual_func @ 0x11420
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)(param_1,param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x11450
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 void **local_14;
 unsigned int local_10;
 char **local_c;
 local_c = &PTR_virtual_func_00015ce4;
 local_14 = (void **)&PTR_virtual_func_00015d04;
 local_10 = 3;
 iVar1 = Base_virtual_func((Base *)local_c,5);
 iVar2 = (**local_14)(local_14,5);
 return iVar2 + iVar1 + 0x15;
}

// Function: test_cpp_multiple_inheritance @ 0x114b0
int test_cpp_multiple_inheritance(void)
{
 int iVar1;
 int iVar2;
 void **local_14;
 unsigned int local_10;
 local_14 = (void **)&PTR_funcB_00015d40;
 local_10 = 200;
 iVar1 = MultiDerived_funcA();
 iVar2 = (**local_14)(local_14);
 return iVar2 + iVar1 + 1;
}

// Function: test_cpp_diamond_inheritance @ 0x11510
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 void **local_14;
 unsigned int local_10;
 local_14 = (void **)&PTR_func_00015de4;
 local_10 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)local_14);
 local_10 = 100;
 iVar2 = (**local_14)(local_14);
 return iVar2 + iVar1;
}

// Function: test_cpp_operator_overload @ 0x11580
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x11590
unsigned int test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x115a0
unsigned int test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x115b0
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x115c0
unsigned int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int_typeinfo,0);
 return 0;
}

// Function: test_cpp_smart_ptr @ 0x116b0
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x116c0
int test_cpp_rtti(void)
{
 char *__s1;
 char *__s1_00;
 int *piVar1;
 int *piVar2;
 int iVar3;
 size_t sVar4;
 uint uVar5;
 uint uVar6;
 bool bVar7;
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)&PTR__RTTIBase_00015ecc;
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)&PTR__RTTIBase_00015ee0;
 __s1 = *(char **)(*(int *)(*piVar1 + -4) + 4);
 if (strcmp(__s1, "12RTTIDerivedA") == 0) {
 uVar6 = 10;
 }
 else {
 uVar6 = 0;
 if (*__s1 != '*') {
 iVar3 = strcmp(__s1,"12RTTIDerivedA");
 uVar6 = 10;
 if (iVar3 != 0) {
 uVar6 = 0;
 }
 }
 }
 __s1_00 = *(char **)(*(int *)(*piVar2 + -4) + 4);
 if (strcmp(__s1_00, "12RTTIDerivedB") == 0) {
 bVar7 = true;
 }
 else if (*__s1_00 == '*') {
 bVar7 = false;
 }
 else {
 iVar3 = strcmp(__s1_00,"12RTTIDerivedB");
 bVar7 = iVar3 == 0;
 }
 uVar5 = uVar6 | 0x14;
 if (!bVar7) {
 uVar5 = uVar6;
 }
 iVar3 = __dynamic_cast(piVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 uVar6 = uVar5 + 100;
 if (iVar3 == 0) {
 uVar6 = uVar5;
 }
 iVar3 = __dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 uVar5 = uVar6 + 200;
 if (iVar3 == 0) {
 uVar5 = uVar6;
 }
 sVar4 = strlen(__s1 + (*__s1 == '*'));
 ((void (*)(int *))(*piVar1 + 4))(piVar1);
 ((void (*)(int *))(*piVar2 + 4))(piVar2);
 return sVar4 + uVar5;
}

// Function: test_cpp_oo_features @ 0x11810
void test_cpp_oo_features(void)
{
 size_t sVar1;
 int *piVar2;
 int iVar3;
 unsigned int uVar4;
 int *piVar5;
 int iVar6;
 void **local_3c;
 void *local_38 [4];
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int uStack_1c;
 void **local_14 [2];
 puts(&DAT_000131e5);
 local_38[0] = (void *)0x74736554;
 local_38[1] = (void *)0x0;
 local_38[2] = (void *)0x0;
 local_38[3] = (void *)0x0;
 local_28 = 0;
 local_24 = 0;
 local_20 = 0;
 uStack_1c = 0;
 local_3c = (void **)0xa;
 sVar1 = strlen((char *)local_38);
 printf(&DAT_00013081,sVar1 + 0x125c);
 iVar6 = 0;
 piVar2 = (int *)operator_new(0x14);
 piVar5 = piVar2;
 do {
 *piVar5 = iVar6;
 iVar6 = iVar6 + 10;
 piVar5 = piVar5 + 1;
 } while (iVar6 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar6 = LifecycleClass_instance_count + piVar2[2];
 operator_delete(piVar2);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 printf(&DAT_0001309f,LifecycleClass_instance_count * 1000 + iVar6);
 local_14[0] = &PTR_virtual_func_00015ce4;
 local_3c = (void **)&PTR_virtual_func_00015d04;
 local_38[0] = (void *)0x3;
 iVar6 = Base_virtual_func((Base *)local_14,5);
 iVar3 = (**local_3c)(local_3c,5);
 printf(&DAT_000130bb,iVar3 + iVar6 + 0x15);
 local_3c = (void **)&PTR_funcA_00015d28;
 local_38[1] = (void *)&PTR_funcB_00015d40;
 local_38[0] = (void *)0x64;
 local_38[2] = (void *)0xc8;
 iVar6 = MultiDerived_funcB((MultiDerived *)(local_38 + 1));
 printf(&DAT_000130d7,iVar6 + 0x1f);
 local_3c = (void **)&PTR_func_00015db0;
 local_38[3] = (void *)&PTR_func_00015de4;
 local_38[1] = (void *)&PTR_func_00015dc8;
 local_28 = 0x32;
 iVar6 = DiamondDerived_func((DiamondDerived *)(local_38 + 3));
 local_28 = 100;
 iVar3 = ((int (*)(void **))(*local_38[3]))(local_38 + 3);
 printf(&DAT_000130f3,iVar3 + iVar6);
 printf(&DAT_00013110,0x16);
 printf(&DAT_0001312c,0x27);
 printf(&DAT_00013148,0x10);
 printf(&DAT_00013164,0x55);
 uVar4 = test_cpp_exception();
 printf(&DAT_00013180,uVar4);
 printf(&DAT_0001319d,0x2bf);
 uVar4 = test_cpp_rtti();
 printf(&DAT_000131ba,uVar4);
 return;
}

// Function: main @ 0x11ab0
unsigned int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: Base_virtual_func @ 0x11ad0
int Base_virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Derived_virtual_func @ 0x11ae0
int Derived_virtual_func(Derived *this,int param_1)
{
 return *(int *)(this + 4) * param_1;
}

// Function: Base_destructor @ 0x11af0
void Base_destructor(Base *this)
{
 return;
}

// Function: MultiDerived_destructor @ 0x11b00
void MultiDerived_destructor(MultiDerived *this)
{
 return;
}

// Function: DiamondDerived_destructor @ 0x11b10
void DiamondDerived_destructor(DiamondDerived *this)
{
 return;
}

// Function: template_max<int> @ 0x11b20
int template_max_int_(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x11b30
double template_max_double_(double param_1,double param_2)
{
 if (param_2 <= param_1 || param_1 != param_2) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_swap<int> @ 0x11b50
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container_int_Constructor @ 0x11b70
void Container_int_Constructor(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container_int_push @ 0x11b80
void Container_int_push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int_get @ 0x11ba0
unsigned int Container_int_get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)(this + 0x28) != param_1 && param_1 <= *(int *)(this + 0x28))) {
 uVar1 = *(unsigned int *)(this + param_1 * 4);
 }
 return uVar1;
}

// Function: Container_int_getSize @ 0x11bc0
unsigned int Container_int_getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container_double_Constructor @ 0x11bd0
void Container_double_Constructor(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container_double_push @ 0x11be0
void Container_double_push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container_double_get @ 0x11c00
long double Container_double_get(Container_double_ *this,int param_1)
{
 long double lVar1;
 lVar1 = (long double)0;
 if ((-1 < param_1) && (*(int *)(this + 0x50) != param_1 && param_1 <= *(int *)(this + 0x50))) {
 lVar1 = (long double)*(double *)(this + param_1 * 8);
 }
 return lVar1;
}

// Function: Container_double_getSize @ 0x11c20
unsigned int Container_double_getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: Base_getName @ 0x11c30
char * Base_getName(void)
{
 return &UNK_000131d8;
}

// Function: FUN_00011c35 @ 0x11c35
int FUN_00011c35(void)
{
 return 0x15a3;
}

// Function: Base_destructor_impl @ 0x11c50
void Base_destructor_impl(Base *this)
{
 operator_delete(this);
 return;
}

// Function: Derived_getName @ 0x11c80
char * Derived_getName(void)
{
 return "Derived";
}

// Function: FUN_00011c85 @ 0x11c85
int FUN_00011c85(void)
{
 return 0x1558;
}

// Function: Derived_destructor_impl @ 0x11ca0
void Derived_destructor_impl(Derived *this)
{
 operator_delete(this);
 return;
}

// Function: MultiDerived_funcA @ 0x11cd0
unsigned int MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived_destructor_impl @ 0x11ce0
void MultiDerived_destructor_impl(MultiDerived *this)
{
 operator_delete(this);
 return;
}

// Function: MultiDerived_funcB_static @ 0x11d10
unsigned int MultiDerived_funcB_static(void)
{
 return 0x28;
}

// Function: MultiDerived_funcB @ 0x11d20
unsigned int MultiDerived_funcB(MultiDerived *this)
{
 return 0x28;
}

// Function: MultiDerived_destructor_impl2 @ 0x11d30
void MultiDerived_destructor_impl2(MultiDerived *this)
{
 return;
}

// Function: MultiDerived_destructor_impl3 @ 0x11d40
void MultiDerived_destructor_impl3(MultiDerived *this)
{
 operator_delete(this + -8);
 return;
}

// Function: BaseA_funcA @ 0x11d70
unsigned int BaseA_funcA(void)
{
 return 10;
}

// Function: BaseA_destructor_impl @ 0x11d80
void BaseA_destructor_impl(BaseA *this)
{
 return;
}

// Function: BaseA_destructor_impl2 @ 0x11d90
void BaseA_destructor_impl2(BaseA *this)
{
 operator_delete(this);
 return;
}

// Function: BaseB_funcB @ 0x11dc0
unsigned int BaseB_funcB(void)
{
 return 0x14;
}

// Function: BaseB_destructor_impl @ 0x11dd0
void BaseB_destructor_impl(BaseB *this)
{
 return;
}

// Function: BaseB_destructor_impl2 @ 0x11de0
void BaseB_destructor_impl2(BaseB *this)
{
 operator_delete(this);
 return;
}

// Function: MiddleA_func @ 0x11e10
int MiddleA_func(MiddleA *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}

// Function: MiddleA_destructor_impl @ 0x11e30
void MiddleA_destructor_impl(MiddleA *this)
{
 return;
}

// Function: MiddleA_destructor_impl2 @ 0x11e40
void MiddleA_destructor_impl2(MiddleA *this)
{
 operator_delete(this);
 return;
}

// Function: MiddleA_func2 @ 0x11e70
int MiddleA_func2(MiddleA *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4 +
 *(int *)(*(int *)this + -0xc)) + 0x96;
}

// Function: MiddleA_destructor_impl3 @ 0x11e90
void MiddleA_destructor_impl3(MiddleA *this)
{
 return;
}

// Function: MiddleA_destructor_impl4 @ 0x11ea0
void MiddleA_destructor_impl4(MiddleA *this)
{
 operator_delete(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: MiddleB_func @ 0x11ed0
int MiddleB_func(MiddleB *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}

// Function: MiddleB_destructor_impl @ 0x11ef0
void MiddleB_destructor_impl(MiddleB *this)
{
 return;
}

// Function: MiddleB_destructor_impl2 @ 0x11f00
void MiddleB_destructor_impl2(MiddleB *this)
{
 operator_delete(this);
 return;
}

// Function: MiddleB_func2 @ 0x11f30
int MiddleB_func2(MiddleB *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4 +
 *(int *)(*(int *)this + -0xc)) + 200;
}

// Function: MiddleB_destructor_impl3 @ 0x11f50
void MiddleB_destructor_impl3(MiddleB *this)
{
 return;
}

// Function: MiddleB_destructor_impl4 @ 0x11f60
void MiddleB_destructor_impl4(MiddleB *this)
{
 operator_delete(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: DiamondDerived_func @ 0x11f90
int DiamondDerived_func(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived_destructor_impl @ 0x11fb0
void DiamondDerived_destructor_impl(DiamondDerived *this)
{
 operator_delete(this);
 return;
}

// Function: DiamondDerived_func2 @ 0x11fe0
int DiamondDerived_func2(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + -8) + -0xc) + -4) + 0xfa;
}

// Function: DiamondDerived_destructor_impl2 @ 0x12000
void DiamondDerived_destructor_impl2(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived_destructor_impl3 @ 0x12010
void DiamondDerived_destructor_impl3(DiamondDerived *this)
{
 operator_delete(this + -8);
 return;
}

// Function: DiamondDerived_func3 @ 0x12040
int DiamondDerived_func3(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4 +
 *(int *)(*(int *)this + -0xc)) + 0xfa;
}

// Function: DiamondDerived_destructor_impl4 @ 0x12060
void DiamondDerived_destructor_impl4(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived_destructor_impl5 @ 0x12070
void DiamondDerived_destructor_impl5(DiamondDerived *this)
{
 operator_delete(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: VirtualBase_func @ 0x120a0
unsigned int VirtualBase_func(void)
{
 return 100;
}

// Function: VirtualBase_destructor_impl @ 0x120b0
void VirtualBase_destructor_impl(VirtualBase *this)
{
 return;
}

// Function: VirtualBase_destructor_impl2 @ 0x120c0
void VirtualBase_destructor_impl2(VirtualBase *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA_destructor @ 0x120f0
void RTTIDerivedA_destructor(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA_getType @ 0x12120
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase_destructor @ 0x12130
void RTTIBase_destructor(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB_destructor @ 0x12140
void RTTIDerivedB_destructor(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB_getType @ 0x12170
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: __do_global_ctors_aux @ 0x12180
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x121cc
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

