#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

// Macro for concatenating two 32-bit values into 64-bit
#define CONCAT44(high, low) (((unsigned long long)(high) << 32) | (unsigned int)(low))

// Decompiled by BinaryAI
// SHA256: 73da54d3d9affd9ed2b8da5f92d284321a7f5abf447111edfe026752bb113408

// Forward declarations for C++ classes
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct RTTIBase RTTIBase;
typedef struct LifecycleClass LifecycleClass;
typedef struct type_info type_info;
typedef struct Init Init;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;

// External declarations
extern int std___ioinit;
extern int __dso_handle;
extern char* PTR__RTTIDerivedA_000116b4;
extern char* PTR__RTTIDerivedB_000116c8;
extern type_info RTTIDerivedA_typeinfo;
extern type_info RTTIDerivedB_typeinfo;
extern type_info RTTIBase_typeinfo;
extern int LifecycleClass_instance_count;
extern void __stack_chk_fail(void);
extern char DAT_000114c0[];
extern char DAT_000114d8[];
extern char DAT_000114fc[];
extern char DAT_0001151c[];
extern char DAT_00011538[];
extern char DAT_00011554[];
extern char DAT_00011570[];
extern char DAT_00011590[];
extern char DAT_000115ac[];
extern char DAT_000115c8[];
extern char DAT_000115e4[];
extern char DAT_00011600[];
extern char DAT_00011620[];
extern char DAT_00011640[];
extern char completed_0;

// Function prototypes
int call_weak_fn(void);
void __gmon_start__(void);
int __aeabi_atexit(void*, void*, void*);
void* __cxa_allocate_exception(size_t);
void __cxa_throw(char*, char*, char*);
int __dynamic_cast(char* obj, char* type_info, char* src_type, int extra);
int template_max_int_(int, int);
double template_max_double_(double, double);
void template_swap_int_(int*, int*);
unsigned int test_cpp_exception(void);
void test_cpp_oo_features(void);

// Function: _init @ 0x10920
int _init(void)
{
 int iVar1;
 iVar1 = call_weak_fn();
 return iVar1;
}

// Function: FUN_0001092c @ 0x1092c
void FUN_0001092c(void)
{
 (*(void *)(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x10940
char* cpp_operator_new(unsigned int param_1)
{
 char* pvVar1;
 pvVar1 = (char*)malloc((size_t)param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x10958
// Removed recursive wrapper

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x10964
// Removed recursive wrapper - using extern declaration

// Function: <EXTERNAL>::puts @ 0x10970
// Removed recursive wrapper - using standard library

// Function: <EXTERNAL>::operator.delete @ 0x1097c
void cpp_operator_delete(char *param_1,unsigned int param_2)
{
 free((void*)param_1);
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10988
int __libc_start_main(int (*main)(int, char**), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), char *stack_end);

// Function: <EXTERNAL>::abort @ 0x10994
// Removed recursive wrapper - using standard library

// Function: <EXTERNAL>::std::type_info::operator== @ 0x109a0
int std_type_info_operator__(char *this_,char *param_1)
{
 int iVar1;
 iVar1 = 0;
 if (this_ == param_1) {
  iVar1 = 1;
 }
 return iVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x109ac
// Removed recursive wrapper

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x109b8
// Removed recursive wrapper

// Function: <EXTERNAL>::__dynamic_cast @ 0x109c4
// Removed recursive wrapper - using extern declaration

// Function: <EXTERNAL>::__cxa_rethrow @ 0x109d0
// Removed recursive wrapper

// Function: <EXTERNAL>::strlen @ 0x109dc
// Removed recursive wrapper - using standard library

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x109e8
void std_ios_base_Init_Init(Init *this_)
{
 return;
}

// Function: <EXTERNAL>::__aeabi_d2iz @ 0x109f4
int __aeabi_d2iz(double param_1);

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10a00
// Removed recursive wrapper

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x10a0c
// Removed recursive wrapper

// Function: <EXTERNAL>::__cxa_throw @ 0x10a18
// Removed recursive wrapper

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10a24
// Removed recursive wrapper

// Function: <EXTERNAL>::strncpy @ 0x10a30
// Removed recursive wrapper - using standard library



// Function: test_cpp_exception @ 0x10a60
unsigned int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw((char*)puVar1,(char*)0,0);
 return 0x2a;
}

// Function: main @ 0x10b18
int main(int argc, char **argv)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x10b28
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std_ios_base_Init_Init((Init *)&std___ioinit);
 __aeabi_atexit(&std___ioinit,(void*)0,&__dso_handle);
 return;
}

// Function: _start @ 0x10b58
void _start(unsigned int param_1,unsigned int param_2)
{
 uintptr_t stack_ptr = (uintptr_t)&param_1;
 __libc_start_main(main,param_2,(char**)stack_ptr,0,0,0,(void*)stack_ptr);
 abort();
}

// Function: call_weak_fn @ 0x10b9c
int call_weak_fn(void)
{
 __gmon_start__();
 return 0;
}

// Function: deregister_tm_clones @ 0x10bc0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x10bec
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x10c24
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: test_cpp_member_func @ 0x10c50
int test_cpp_member_func(void)
{
 size_t sVar1;
 char acStack_2c [32];
 char local_d;
 int local_c;
 local_c = 0;
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(acStack_2c);
 if (local_c == 0) {
 return (int)(sVar1 + 0x125c);
 }
 __stack_chk_fail();
 return 0;
}

// Function: test_cpp_constructor @ 0x10cbc
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10cdc
void call_virtual_func(Base *this_,int param_2)
{
 char **vtable = *(char***)((char*)this_);
 void (*func_ptr)(void) = (void(*)(void))(uintptr_t)vtable[0];
 func_ptr();
 return;
}

// Function: test_cpp_virtual_func @ 0x10ce8
unsigned int test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x10cf0
unsigned int test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x10cf8
unsigned int test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x10d04
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x10d0c
void test_cpp_template_func(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int extraout_r1;
 int iVar3;
 unsigned long long uVar4;
 unsigned int in_stack_ffffffe0;
 int in_stack_ffffffe4;
 int iVar5;
 int in_stack_ffffffe8;
 int iVar6;
 int stack_ffe4;
 int stack_ffe8;
 iVar3 = 0;
 iVar1 = template_max_int_(3,7);
 uVar2 = 0;
 uVar2 = (unsigned int)template_max_double_
 ((double)CONCAT44(in_stack_ffffffe4,in_stack_ffffffe0),
 (double)CONCAT44(iVar3,in_stack_ffffffe8));
 iVar5 = 10;
 iVar6 = 0x14;
 template_swap_int_(&stack_ffe4,&stack_ffe8);
 uVar4 = (unsigned long long)__aeabi_d2iz((double)uVar2);
 if (iVar3 == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: test_cpp_template_class @ 0x10db4
unsigned int test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x10dbc
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_smart_ptr @ 0x10dc4
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x10dd0
int test_cpp_rtti(void)
{
 int *piVar1;
 int *piVar2;
 type_info *pTypeInfo;
 int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 int iVar6;
 piVar1 = (int *)cpp_operator_new(4);
 *piVar1 = (int)&PTR__RTTIDerivedA_000116b4;
 piVar2 = (int *)cpp_operator_new(4);
 pTypeInfo = *(type_info **)((char*)piVar1 + -4);
 *piVar2 = (int)&PTR__RTTIDerivedB_000116c8;
 iVar3 = std_type_info_operator__((char*)pTypeInfo,(char*)&RTTIDerivedA_typeinfo);
 if (iVar3 == 0) {
  iVar3 = 0x14;
  iVar6 = 0;
 }
 else {
  iVar6 = 10;
  iVar3 = 0x1e;
 }
 iVar4 = std_type_info_operator__
 ((char*)*(type_info **)((char*)piVar2 + -4),(char*)&RTTIDerivedB_typeinfo);
 if (iVar4 != 0) {
 iVar6 = iVar3;
 }
 iVar3 = __dynamic_cast((char*)piVar1,(char*)&RTTIBase_typeinfo,(char*)&RTTIDerivedA_typeinfo,0);
 if (iVar3 != 0) {
  iVar6 = iVar6 + 100;
 }
 iVar3 = __dynamic_cast((char*)piVar2,(char*)&RTTIBase_typeinfo,(char*)&RTTIDerivedB_typeinfo,0);
 iVar4 = *piVar1;
 if (iVar3 != 0) {
  iVar6 = iVar6 + 200;
 }
 __s = (char *)(((uintptr_t)*(int *)((char*)iVar4 + -4)) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 ((void(*)(void*))(*(void**)((char*)iVar4 + 4)))(piVar1);
 ((void(*)(void*))(*(void**)((char*)*piVar2 + 4)))(piVar2);
 return iVar6 + sVar5;
}

// Function: test_cpp_oo_features @ 0x10ed4
void test_cpp_oo_features(void)
{
 size_t sVar1;
 int iVar2;
 unsigned int uVar3;
 int iVar4;
 unsigned int extraout_r1;
 int in_stack_ffffffc0;
 int iVar5;
 int in_stack_ffffffc4;
 int iVar6;
 double in_stack_ffffffc8;
 char stack_ffffffcc[32];
 puts(DAT_000114d8);
 strncpy(stack_ffffffcc,"Test",0x1f);
 sVar1 = strlen(stack_ffffffcc);
 printf(DAT_000114fc,sVar1 + 0x125c);
 printf(DAT_0001151c,LifecycleClass_instance_count * 0x3e9 + 0x15);
 printf(DAT_00011538,0x2a);
 printf(DAT_00011554,0x47);
 printf(DAT_00011570,0x28a);
 printf(DAT_00011590,0x16);
 iVar2 = template_max_int_(3,7);
 uVar3 = 0;
 uVar3 = (unsigned int)template_max_double_((double)CONCAT44(in_stack_ffffffc4,in_stack_ffffffc0),in_stack_ffffffc8);
 iVar5 = 10;
 iVar6 = 0x14;
 template_swap_int_(&in_stack_ffffffc0,&in_stack_ffffffc4);
 iVar4 = __aeabi_d2iz((double)uVar3);
 printf(DAT_000115ac,iVar4 + iVar2 + iVar5 + iVar6);
 printf(DAT_000115c8,0x10);
 printf(DAT_000115e4,0x55);
 uVar3 = test_cpp_exception();
 printf(DAT_00011600,uVar3);
 printf(DAT_00011620,0x2bf);
 uVar3 = test_cpp_rtti();
 printf(DAT_00011640,uVar3);
 return;
}

// Function: Base::virtual_func @ 0x110d0
int Base_virtual_func(Base *this_,int param_1)
{
 (void)this_;
 return param_1 + 1;
}

// Function: Base::getName @ 0x110d8
char * Base_getName(void)
{
 return DAT_000114c0;
}

// Function: Base::~Base @ 0x110e4
void Base__Base(Base *this_)
{
 return;
}

// Function: Derived::virtual_func @ 0x110e8
int Derived_virtual_func(Derived *this_,int param_1)
{
 return param_1 * *(int *)((char*)this_ + 4);
}

// Function: Derived::getName @ 0x110f4
char * Derived_getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x11100
unsigned int MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x11108
unsigned int MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x11110
unsigned int MultiDerived_funcB_this(MultiDerived *this_)
{
 (void)this_;
 return 0x28;
}

// Function: MiddleA::func @ 0x11118
int MiddleA_func(MiddleA *this_)
{
 return *(int *)((char*)this_ + *(int *)(*(int *)this_ + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func @ 0x11130
int MiddleA_func_2(MiddleA *this_)
{
 return *(int *)((char*)this_ + *(int *)(*(int *)((char*)this_ + *(int *)(*(int *)this_ + -0xc)) + -0xc) +
 *(int *)(*(int *)this_ + -0xc) + 4) + 0x96;
}

// Function: MiddleB::func @ 0x11154
int MiddleB_func(MiddleB *this_)
{
 return *(int *)((char*)this_ + *(int *)(*(int *)this_ + -0xc) + 4) + 200;
}

// Function: MiddleB::func @ 0x1116c
int MiddleB_func_2(MiddleB *this_)
{
 return *(int *)((char*)this_ + *(int *)(*(int *)((char*)this_ + *(int *)(*(int *)this_ + -0xc)) + -0xc) +
 *(int *)(*(int *)this_ + -0xc) + 4) + 200;
}

// Function: DiamondDerived::func @ 0x11190
int DiamondDerived_func(DiamondDerived *this_)
{
 return *(int *)((char*)this_ + *(int *)(*(int *)this_ + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x111a8
int DiamondDerived_func_2(DiamondDerived *this_)
{
 return *(int *)((char*)this_ + *(int *)(*(int *)((char*)this_ + *(int *)(*(int *)this_ + -0xc)) + -0xc) +
 *(int *)(*(int *)this_ + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x111cc
int DiamondDerived_func_3(DiamondDerived *this_)
{
 return *(int *)((char*)this_ + *(int *)(*(int *)((char*)this_ + -8) + -0xc) + -4) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x111e4
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x111ec
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x111f4
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x111f8
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x111fc
void DiamondDerived__DiamondDerived(DiamondDerived *this_)
{
 (void)this_;
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11200
DiamondDerived * DiamondDerived__DiamondDerived_2(DiamondDerived *this_)
{
 return (DiamondDerived *)((char*)this_ + *(int *)(*(int *)this_ + -0x10));
}

// Function: DiamondDerived::~DiamondDerived @ 0x11210
DiamondDerived * DiamondDerived__DiamondDerived_3(DiamondDerived *this_)
{
 return (DiamondDerived *)((char*)this_ + -8);
}

// Function: MultiDerived::~MultiDerived @ 0x11218
void MultiDerived__MultiDerived(MultiDerived *this_)
{
 (void)this_;
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x1121c
MultiDerived * MultiDerived__MultiDerived_2(MultiDerived *this_)
{
 return (MultiDerived *)((char*)this_ + -8);
}

// Function: Derived::~Derived @ 0x11224
void Derived__Derived(Derived *this_)
{
 (void)this_;
 return;
}

// Function: Base::~Base @ 0x11228
Base * Base__Base_2(Base *this_)
{
 cpp_operator_delete(this_,4);
 return this_;
}

// Function: Derived::~Derived @ 0x11240
Derived * Derived__Derived_2(Derived *this_)
{
 cpp_operator_delete(this_,8);
 return this_;
}

// Function: MultiDerived::~MultiDerived @ 0x11258
MultiDerived * MultiDerived__MultiDerived_3(MultiDerived *this_)
{
 cpp_operator_delete(this_,0x10);
 return this_;
}

// Function: MultiDerived::~MultiDerived @ 0x11270
MultiDerived * MultiDerived__MultiDerived_4(MultiDerived *this_)
{
 cpp_operator_delete((char*)this_ + -8,0x10);
 return (MultiDerived *)((char*)this_ + -8);
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1128c
RTTIDerivedB * RTTIDerivedB__RTTIDerivedB_2(RTTIDerivedB *this_)
{
 cpp_operator_delete(this_,4);
 return this_;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x112a4
RTTIDerivedA * RTTIDerivedA__RTTIDerivedA_2(RTTIDerivedA *this_)
{
 cpp_operator_delete(this_,4);
 return this_;
}

// Function: DiamondDerived::~DiamondDerived @ 0x112bc
DiamondDerived * DiamondDerived__DiamondDerived_4(DiamondDerived *this_)
{
 cpp_operator_delete(this_,0x18);
 return this_;
}

// Function: DiamondDerived::~DiamondDerived @ 0x112d4
DiamondDerived * DiamondDerived__DiamondDerived_5(DiamondDerived *this_)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)this_ + -0x10);
 cpp_operator_delete((char*)this_ + iVar1,0x18);
 return (DiamondDerived *)((char*)this_ + iVar1);
}

// Function: DiamondDerived::~DiamondDerived @ 0x112f8
DiamondDerived * DiamondDerived__DiamondDerived_6(DiamondDerived *this_)
{
 cpp_operator_delete((char*)this_ + -8,0x18);
 return (DiamondDerived *)((char*)this_ + -8);
}

// Function: template_max<int> @ 0x11314
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x11320
double template_max_double_(double param_1,double param_2)
{
 double extraout_d0;
 if (param_1 > param_2) {
  extraout_d0 = param_1;
 } else {
  extraout_d0 = param_2;
 }
 return extraout_d0;
}

// Function: template_swap<int> @ 0x11350
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x11364
void Container_int__Container(Container_int_ *this_)
{
 *(unsigned int *)((char*)this_ + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x11370
void Container_int__push(Container_int_ *this_,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char*)this_ + 0x28);
 if (iVar1 < 10) {
 *(int *)((char*)this_ + 0x28) = iVar1 + 1;
 *(int *)((char*)this_ + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x11388
unsigned int Container_int__get(Container_int_ *this_,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)((char*)this_ + 0x28))) {
 return *(unsigned int *)((char*)this_ + param_1 * 4);
 }
 return 0;
}

// Function: Container<int>::getSize @ 0x113ac
unsigned int Container_int__getSize(Container_int_ *this_)
{
 return *(unsigned int *)((char*)this_ + 0x28);
}

// Function: Container<double>::Container @ 0x113b4
void Container_double__Container(Container_double_ *this_)
{
 *(unsigned int *)((char*)this_ + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x113c0
void Container_double__push(Container_double_ *this_,double param_1)
{
 int iVar1;
 unsigned int *puVar2;
 iVar1 = *(int *)((char*)this_ + 0x50);
 if (iVar1 < 10) {
 puVar2 = (unsigned int *)((char*)this_ + iVar1 * 8);
 *(int *)((char*)this_ + 0x50) = iVar1 + 1;
 *puVar2 = *(unsigned int*)&param_1;
 puVar2[1] = *((unsigned int*)&param_1 + 1);
 }
 return;
}

// Function: Container<double>::get @ 0x113f0
unsigned long long Container_double__get(Container_double_ *this_,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)((char*)this_ + 0x50))) {
 return *(unsigned long long *)((char*)this_ + param_1 * 8);
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x1141c
unsigned int Container_double__getSize(Container_double_ *this_)
{
 return *(unsigned int *)((char*)this_ + 0x50);
}

// Function: _fini @ 0x11424
void _fini(void)
{
 return;
}

