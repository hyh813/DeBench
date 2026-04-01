/* Auto-injected type definitions by preprocessor */
#include <stdarg.h>
#include <stdio.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
// typedef unsigned long size_t; // Already defined in stdio.h
// typedef long ssize_t; // Already defined in system headers
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Forward declarations for types */
struct Base;
struct Derived;
struct DiamondDerived;
struct MiddleA;
struct MiddleB;
struct VirtualBase;
struct MultiDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct type_info {
    const char *name;
};
struct Init;

/* Global pointer declarations */
extern void *PTR_func_00011b2c;
extern void *PTR_func_00011b48;
extern void *PTR_func_00011b68;
extern void *PTR_func_00011b84;
extern void *PTR_func_00011c20;
extern void *PTR_func_00011c38;
extern void *PTR_func_00011c54;
extern void *PTR__RTTIDerivedA_00011c68;
extern void *PTR__RTTIDerivedB_00011c7c;
extern void *PTR_virtual_func_00011af0;
extern void *PTR_virtual_func_00011b08;

/* Other global variables */
extern char completed_0;
extern Init std___ioinit;
void *__dso_handle = NULL;
extern char DAT_00011866[];
extern char DAT_0001188a[];
extern char DAT_000118a8[];
extern char DAT_000118c4[];
extern char DAT_000118e0[];
extern char DAT_000118fc[];
extern char DAT_00011919[];
extern char DAT_00011935[];
extern char DAT_00011951[];
extern char DAT_0001196d[];
extern char DAT_00011989[];
extern char DAT_000119a6[];
extern char DAT_000119c3[];
extern char DAT_00011854[];

/* Static RTTI type_info members */
extern type_info RTTIDerivedA_typeinfo;
extern type_info RTTIDerivedB_typeinfo;

/* Struct definitions to resolve incomplete type errors */
struct Base {
    void **vtable;
};

struct Derived {
    void **vtable;
    int data;
};

struct MiddleA {
    void **vtable;
    void *vtable2;
};

struct MiddleB {
    void **vtable;
    void *vtable2;
};

struct VirtualBase {
    void **vtable;
};

struct DiamondDerived {
    void **vtable;
    void *vtable2;
    void **vtable_MiddleA;
    void *vtable2_MiddleA;
    void **vtable_MiddleB;
    void *vtable2_MiddleB;
};

struct MultiDerived {
    void **vtable;
    void *vtable2;
};

struct RTTIDerivedA {
    void **vtable;
    type_info *typeinfo;
};

struct RTTIDerivedB {
    void **vtable;
    type_info *typeinfo;
};

struct LifecycleClass {
    static int instance_count;
};

typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;
typedef struct unique_ptr_int_std__default_delete_int__ unique_ptr_int_std__default_delete_int__;
typedef struct unique_ptr_int___std__default_delete_int____ unique_ptr_int___std__default_delete_int____;

/* Container type definitions */
struct Container_int_ {
    int data[10];
    unsigned int size;
};

struct Container_double_ {
    double data[10];
    unsigned int size;
};

struct unique_ptr_int_std__default_delete_int__ {
    void *ptr;
};

struct unique_ptr_int___std__default_delete_int____ {
    void *ptr;
};

/* NULL definition */
#ifndef NULL
#define NULL ((void *)0)
#endif

/* Forward declarations for functions */
void call_weak_fn(void);
void test_cpp_oo_features(void);
int __aeabi_atexit(void *object, void (*destructor)(void *), void *dso_handle);
int DiamondDerived_func(DiamondDerived *_this);
void DiamondDerived__DiamondDerived(DiamondDerived *_this);
int template_max_int_(int param_1, int param_2);
double template_max_double_(double param_1, double param_2);
void template_swap_int_(int *param_1, int *param_2);
void Container_int__push(Container_int_ *_this, int param_1);
unsigned int Container_int__get(Container_int_ *_this, int param_1);
unsigned int Container_int__getSize(Container_int_ *_this);
struct unique_ptr_int_std__default_delete_int__ *std_unique_ptr_int___unique_ptr(struct unique_ptr_int_std__default_delete_int__ *_this);
struct unique_ptr_int___std__default_delete_int____ *std_unique_ptr_int_array___unique_ptr(struct unique_ptr_int___std__default_delete_int____ *_this);

// Decompiled by BinaryAI
// SHA256: 3a4de938d6abc6bdc65dd41346a89f50af55fc0c72fe03f1ae863edbc2c55bf7

// Function: _init @ 0x109b0
int _init(void *ctx)
{
 int iVar1;
 call_weak_fn();
 iVar1 = 0;
 return iVar1;
}

// Function: FUN_000109bc @ 0x109bc
void FUN_000109bc(void)
{
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x109d0
void * operator_new(unsigned int param_1)
{
 return (void *)0;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x109e8
void __cxa_begin_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x109f4
void * __cxa_allocate_exception(size_t size)
{
 return (void *)0;
}

// Function: <EXTERNAL>::puts @ 0x10a00
int puts(char *__s)
{
 return 0;
}

// Function: <EXTERNAL>::operator.delete @ 0x10a0c
void operator_delete(void *param_1,unsigned int param_2)
{
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10a18
void __libc_start_main(int (*main)(void), int argc, void **argv, void (*init)(void), void (*fini)(void), void (*stack_end)(void))
{
 return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x10a24
void * operator_new__(unsigned int param_1)
{
 return (void *)0;
}

// Function: <EXTERNAL>::abort @ 0x10a30
void abort(void)
{
 return;
}

// Function: <EXTERNAL>::std::type_info::operator== @ 0x10a3c
int std_type_info_operator_equal(type_info *_this,type_info *param_1)
{
 return _this == param_1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x10a48
void __stack_chk_fail(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x10a54
void __cxa_end_cleanup(void)
{
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x10a60
void * __dynamic_cast(void *param_1, void *param_2, void *param_3, int param_4)
{
 return (void *)0;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x10a6c
void operator_delete__(void *param_1)
{
 (void)param_1;
 return;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x10a78
void __cxa_rethrow(void)
{
 return;
}

// Function: <EXTERNAL>::strlen @ 0x10a84
size_t strlen(char *__s)
{
 return 0;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x10a90
void std_ios_base_Init__Init(Init *_this)
{
 return;
}

// Function: <EXTERNAL>::__aeabi_d2iz @ 0x10a9c
void __aeabi_d2iz(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10aa8
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x10ab4
void __gxx_personality_v0(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x10ac0
void __cxa_throw(void *param_1, void *param_2, void *param_3)
{
 return;
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10acc
void __aeabi_dcmpgt(void)
{
 return;
}

// Function: <EXTERNAL>::strncpy @ 0x10ad8
char * strncpy(char *__dest,char *__src,size_t __n)
{
 return __dest;
}

// __printf_chk is provided by libc, declare its signature
int __printf_chk(int flag, const char *format, ...);

// Function: test_cpp_exception @ 0x10b08
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,0,0);
}

// Function: main @ 0x10bbc
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x10bcc
void std_ios_base_Init__Init_destructor(void *obj);
static void std_ios_base_Init__Init_destructor_wrapper(void *obj)
{
 std_ios_base_Init__Init_destructor(obj);
}
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std_ios_base_Init__Init(&std___ioinit);
 __aeabi_atexit(&std___ioinit, std_ios_base_Init__Init_destructor_wrapper, &__dso_handle);
 return;
}

// Function: _start @ 0x10bfc
void _start(unsigned int param_1,unsigned int param_2)
{
 void *stack0x00000004 = NULL;
 __libc_start_main(main,param_2,&stack0x00000004,(void (*)(void))0,(void (*)(void))0,(void (*)(void))param_1);
 abort();
}

// Function: call_weak_fn @ 0x10c40
void __attribute__((weak)) __gmon_start__(void);
void call_weak_fn(void)
{
 if (__gmon_start__ != NULL) __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x10c64
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x10c90
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x10cc8
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: test_cpp_member_func @ 0x10cf4
int test_cpp_member_func(void)
{
 size_t sVar1;
 char acStack_2c [31];
 char local_d;
 int local_c;
 local_c = 0;
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(acStack_2c);
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x10d60
int test_cpp_constructor(void)
{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10d7c
typedef int (*VirtualFuncType)(Base *, int);
void call_virtual_func(Base *param_1,int param_2)
{
 VirtualFuncType vf = (VirtualFuncType)(*(void **)param_1);
 vf(param_1, param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x10d88
void test_cpp_virtual_func(void)
{
 int iVar1;
 unsigned long long uVar2;
 char **local_18;
 char **local_14;
 unsigned int local_10;
 int local_c;
 local_c = 0;
 local_18 = (char **)&PTR_virtual_func_00011af0;
 local_14 = (char **)&PTR_virtual_func_00011b08;
 local_10 = 3;
 call_virtual_func((Base *)(void *)local_18,5);
 call_virtual_func((Base *)(void *)local_14,5);
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: test_cpp_multiple_inheritance @ 0x10e08
unsigned int test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_operator_overload @ 0x10e10
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x10e18
void test_cpp_template_func(void)
{
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 unsigned long long uVar4;
 int iVar5;
 int iVar6;
 double dVar1;
 double dVar2;
 int temp1, temp2;
 iVar3 = 0;
 iVar1 = template_max_int_(3,7);
 uVar2 = 0;
 dVar1 = 3.5;
 dVar2 = 7.5;
 template_max_double_(dVar1,dVar2);
 iVar5 = 10;
 iVar6 = 0x14;
 temp1 = 5;
 temp2 = 10;
 template_swap_int_(&temp1,&temp2);
 uVar4 = (unsigned long long)uVar2;
 if (iVar3 != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: test_cpp_template_class @ 0x10ec0
void test_cpp_template_class(void)
{
 unsigned int extraout_r1;
 int iVar1;
 int local_38 [10];
 int local_10;
 int local_c;
 local_c = 0;
 local_10 = 1;
 local_38[0] = 10;
 Container_int__push((Container_int_ *)local_38,0x14);
 Container_int__push((Container_int_ *)local_38,0x1e);
 iVar1 = local_38[0];
 if (local_10 < 1) {
 iVar1 = 0;
 }
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: test_cpp_lambda @ 0x10f40
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_rtti @ 0x10f48
int test_cpp_rtti(void)
{
 void **piVar1;
 void **piVar2;
 int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 void *iVar6;
 piVar1 = (void **)operator_new(4);
 *piVar1 = &PTR__RTTIDerivedA_00011c68;
 piVar2 = (void **)operator_new(4);
 *piVar2 = &PTR__RTTIDerivedB_00011c7c;
 iVar3 = std_type_info_operator_equal(
 *(type_info **)(*piVar1 + -4),&RTTIDerivedA_typeinfo);
 if (iVar3 == 0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 iVar4 = std_type_info_operator_equal(
 *(type_info **)(*piVar2 + -4),&RTTIDerivedB_typeinfo);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 0x14;
 }
 __dynamic_cast(piVar1,0,0,0);
 iVar4 = 0;
 if (iVar4 != 0) {
 iVar3 = iVar3 + 100;
 }
 __dynamic_cast(piVar2,0,0,0);
 iVar4 = 0;
 iVar6 = *piVar1;
 if (iVar4 != 0) {
 iVar3 = iVar3 + 200;
 }
 __s = *(char **)(*(void **)((char *)iVar6 + -4) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 ((void (*)(void **))(*(void **)((char *)iVar6 + 4)))(piVar1);
 ((void (*)(void **))(*(void **)((char *)*piVar2 + 4)))(piVar2);
 (void)piVar1;
 (void)piVar2;
 return iVar3 + sVar5;
}

// Function: test_cpp_smart_ptr @ 0x11038
unsigned int test_cpp_smart_ptr(void)
{
 unsigned int local_18;
 unsigned int *local_14;
 unsigned int *local_10;
 int local_c;
 local_c = 0;
 local_14 = (unsigned int *)operator_new(4);
 *local_14 = 200;
 local_18 = 0;
 local_10 = (unsigned int *)operator_new__(0x14);
 *local_10 = 1;
 local_10[1] = 2;
 local_10[2] = 3;
 local_10[3] = 4;
 local_10[4] = 5;
 std_unique_ptr_int_array___unique_ptr((unique_ptr_int___std__default_delete_int____ *)&local_10);
 std_unique_ptr_int___unique_ptr((unique_ptr_int_std__default_delete_int__ *)&local_14);
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return 0x2bf;
}

// Function: test_cpp_diamond_inheritance @ 0x110ec
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 void *local_24;
 void *local_1c;
 void *local_14;
 unsigned int local_10;
 int local_c;
 local_c = 0;
 local_14 = PTR_func_00011c54;
 local_24 = PTR_func_00011c20;
 local_1c = PTR_func_00011c38;
 local_10 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)local_14);
 local_10 = 100;
 iVar2 = DiamondDerived_func((DiamondDerived *)local_14);
 DiamondDerived__DiamondDerived((DiamondDerived *)local_24);
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return iVar1 + iVar2;
}

// Function: test_cpp_oo_features @ 0x1117c
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 puts((char *)DAT_00011866);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,(char *)DAT_0001188a,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,(char *)DAT_000118a8,uVar1);
 test_cpp_virtual_func();
 uVar1 = 0;
 __printf_chk(1,(char *)DAT_000118c4,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,(char *)DAT_000118e0,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,(char *)DAT_000118fc,uVar1);
 uVar1 = test_cpp_operator_overload();
 __printf_chk(1,(char *)DAT_00011919,uVar1);
 test_cpp_template_func();
 uVar1 = 0;
 __printf_chk(1,(char *)DAT_00011935,uVar1);
 test_cpp_template_class();
 uVar1 = 0;
 __printf_chk(1,(char *)DAT_00011951,uVar1);
 uVar1 = test_cpp_lambda();
 __printf_chk(1,(char *)DAT_0001196d,uVar1);
 uVar1 = test_cpp_exception();
 __printf_chk(1,(char *)DAT_00011989,uVar1);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,(char *)DAT_000119a6,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,(char *)DAT_000119c3,uVar1);
 return;
}

// Function: Base::virtual_func @ 0x112b0
int Base_virtual_func(Base *_this,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x112b8
unsigned char * Base_getName(Base *_this)
{
 (void)_this;
 return (unsigned char *)DAT_00011854;
}

// Function: Base::~Base @ 0x112c4
void Base__Base(Base *_this)
{
 return;
}

// Function: Derived::virtual_func @ 0x112c8
int Derived_virtual_func(Derived *_this,int param_1)
{
 return param_1 * *(int *)(_this + 4);
}

// Function: Derived::getName @ 0x112d4
char * Derived_getName(Derived *_this)
{
 (void)_this;
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x112e0
unsigned int MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x112e8
unsigned int MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x112f0
unsigned int MultiDerived_funcB(MultiDerived *_this)
{
 return 0x28;
}

// Function: VirtualBase::func @ 0x112f8
unsigned int VirtualBase_func(VirtualBase *_this)
{
 (void)_this;
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x11300
void VirtualBase__VirtualBase(VirtualBase *_this)
{
 return;
}

// Function: MiddleA::func @ 0x11304
int MiddleA_func(MiddleA *_this)
{
 return *(int *)(_this + *(int *)(*(int *)_this + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func @ 0x1131c
void MiddleA_func_1(MiddleA *_this)
{
 MiddleA_func((MiddleA *)(void *)((char *)_this + *(int *)(*(int *)_this + -0xc)));
 return;
}

// Function: MiddleB::func @ 0x11330
int MiddleB_func(MiddleB *_this)
{
 return *(int *)(_this + *(int *)(*(int *)_this + -0xc) + 4) + 200;
}

// Function: MiddleB::func @ 0x11348
void MiddleB_func_1(MiddleB *_this)
{
 MiddleB_func((MiddleB *)((char *)_this + *(int *)(*(int *)_this + -0xc)));
 return;
}

// Function: DiamondDerived::func @ 0x1135c
int DiamondDerived_func(DiamondDerived *_this)
{
 return *(int *)(_this + *(int *)(*(int *)_this + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x11374
void DiamondDerived_func_1(DiamondDerived *_this)
{
 DiamondDerived_func(_this + *(int *)(*(int *)_this + -0xc));
 return;
}

// Function: DiamondDerived::func @ 0x11388
void DiamondDerived_func_2(DiamondDerived *_this)
{
 DiamondDerived_func((DiamondDerived *)((char *)_this - 8));
 return;
}

// Function: MiddleA::~MiddleA @ 0x11390
void MiddleA__MiddleA(MiddleA *_this)
{
 _this->vtable = (void **)(intptr_t)PTR_func_00011b2c;
 _this->vtable2 = (void *)(intptr_t)PTR_func_00011b48;
 return;
}

// Function: MiddleA::~MiddleA @ 0x113a8
void MiddleA__MiddleA_2(MiddleA *_this)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)_this + -0x10);
 *(void **)((char *)_this + iVar1) = PTR_func_00011b2c;
 *(void **)((char *)_this + iVar1 + 8) = PTR_func_00011b48;
 return;
}

// Function: MiddleB::~MiddleB @ 0x113d0
void MiddleB__MiddleB(MiddleB *_this)
{
 _this->vtable = (void **)(intptr_t)PTR_func_00011b68;
 _this->vtable2 = (void *)(intptr_t)PTR_func_00011b84;
 return;
}

// Function: MiddleB::~MiddleB @ 0x113e8
void MiddleB__MiddleB_2(MiddleB *_this)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)_this + -0x10);
 *(void **)((char *)_this + iVar1) = (void *)PTR_func_00011b68;
 *(void **)((char *)_this + iVar1 + 8) = (void *)PTR_func_00011b84;
 return;
}

// Function: RTTIDerivedA::getType @ 0x11410
unsigned int RTTIDerivedA_getType(RTTIDerivedA *_this)
{
 (void)_this;
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x11418
unsigned int RTTIDerivedB_getType(RTTIDerivedB *_this)
{
 (void)_this;
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11420
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *_this)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11424
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *_this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11428
void MultiDerived__MultiDerived(MultiDerived *_this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x1142c
MultiDerived * MultiDerived__MultiDerived_2(MultiDerived *_this)
{
 return _this + -8;
}

// Function: Derived::~Derived @ 0x11434
void Derived__Derived(Derived *_this)
{
 return;
}

// Function: Base::~Base @ 0x11438
Base * Base__Base_2(Base *_this)
{
 operator_delete(_this,4);
 return _this;
}

// Function: Derived::~Derived @ 0x11450
Derived * Derived__Derived_2(Derived *_this)
{
 operator_delete(_this,8);
 return _this;
}

// Function: MultiDerived::~MultiDerived @ 0x11468
MultiDerived * MultiDerived__MultiDerived_3(MultiDerived *_this)
{
 operator_delete(_this,0x10);
 return _this;
}

// Function: MultiDerived::~MultiDerived @ 0x11480
void MultiDerived__MultiDerived_4(MultiDerived *_this)
{
 MultiDerived__MultiDerived_2(_this + -8);
 return;
}

// Function: VirtualBase::~VirtualBase @ 0x11488
VirtualBase * VirtualBase__VirtualBase_2(VirtualBase *_this)
{
 operator_delete(_this,8);
 return _this;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x114a0
RTTIDerivedB * RTTIDerivedB__RTTIDerivedB_2(RTTIDerivedB *_this)
{
 operator_delete(_this,4);
 return _this;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x114b8
RTTIDerivedA * RTTIDerivedA__RTTIDerivedA_2(RTTIDerivedA *_this)
{
 operator_delete(_this,4);
 return _this;
}

// Function: MiddleA::~MiddleA @ 0x114d0
void MiddleA__MiddleA_3(MiddleA *_this)
{
 _this->vtable = (void **)&PTR_func_00011b2c;
 _this->vtable2 = (void **)&PTR_func_00011b48;
 operator_delete(_this,0x10);
 return;
}

// Function: MiddleA::~MiddleA @ 0x114fc
void MiddleA__MiddleA_4(MiddleA *_this)
{
 MiddleA__MiddleA_2((MiddleA *)((char *)_this + *(int *)(*(int *)_this + -0x10)));
 return;
}

// Function: MiddleB::~MiddleB @ 0x11510
void MiddleB__MiddleB_3(MiddleB *_this)
{
 _this->vtable = (void **)&PTR_func_00011b68;
 _this->vtable2 = (void **)&PTR_func_00011b84;
 operator_delete(_this,0x10);
 return;
}

// Function: MiddleB::~MiddleB @ 0x1153c
void MiddleB__MiddleB_4(MiddleB *_this)
{
 MiddleB__MiddleB_2((MiddleB *)((char *)_this + *(int *)(*(int *)_this + -0x10)));
 return;
}

// Function: MiddleA::~MiddleA @ 0x11550
void MiddleA__MiddleA_5(MiddleA *_this, int *in_r1)
{
 int iVar1;
 int *ptr;
 iVar1 = *in_r1;
 _this->vtable = (void **)(intptr_t)iVar1;
 ptr = (int *)((char *)_this + *(int *)((int *)iVar1 + -0xc));
 *ptr = in_r1[1];
 return;
}

// Function: MiddleB::~MiddleB @ 0x11568
void MiddleB__MiddleB_5(MiddleB *_this, int *in_r1)
{
 int iVar1;
 int *ptr;
 iVar1 = *in_r1;
 _this->vtable = (void **)(intptr_t)iVar1;
 ptr = (int *)((char *)_this + *(int *)((int *)iVar1 + -0xc));
 *ptr = in_r1[1];
 return;
}

// Function: template_max<int> @ 0x11580
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x1158c
double template_max_double_(double param_1,double param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x115bc
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x115d0
void Container_int__Container(Container_int_ *_this)
{
 *(unsigned int *)(_this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x115dc
void Container_int__push(Container_int_ *_this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(_this + 0x28);
 if (iVar1 < 10) {
 *(int *)(_this + 0x28) = iVar1 + 1;
 *(int *)(_this + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x115f4
unsigned int Container_int__get(Container_int_ *_this,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(_this + 0x28))) {
 return *(unsigned int *)(_this + param_1 * 4);
 }
 return 0;
}

// Function: Container<int>::getSize @ 0x11618
unsigned int Container_int__getSize(Container_int_ *_this)
{
 return *(unsigned int *)(_this + 0x28);
}

// Function: Container<double>::Container @ 0x11620
void Container_double__Container(Container_double_ *_this)
{
 *(unsigned int *)(_this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x1162c
void Container_double__push(Container_double_ *_this,double param_1)
{
 unsigned int *puVar1;
 int iVar2;
 unsigned int *in_r2;
 iVar2 = *(int *)(_this + 0x50);
 if (9 < iVar2) {
 return;
 }
 *(int *)(_this + 0x50) = iVar2 + 1;
 puVar1 = (unsigned int *)(_this + iVar2 * 8);
 *puVar1 = *(unsigned int *)&param_1;
 puVar1[1] = ((unsigned int *)&param_1)[1];
 return;
}

// Function: Container<double>::get @ 0x1164c
unsigned long long Container_double__get(Container_double_ *_this,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(_this + 0x50))) {
 return *(unsigned long long *)(_this + param_1 * 8);
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x11678
unsigned int Container_double__getSize(Container_double_ *_this)
{
 return *(unsigned int *)(_this + 0x50);
}

// Function: std::unique_ptr<int,std::default_delete<int>>::~unique_ptr @ 0x11680
unique_ptr_int_std__default_delete_int__ *
std_unique_ptr_int___unique_ptr(unique_ptr_int_std__default_delete_int__ *_this)
{
 if (*(void **)_this != (void *)0x0) {
 operator_delete(*(void **)_this,4);
 }
 return _this;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr @ 0x116a4
unique_ptr_int___std__default_delete_int____ *
std_unique_ptr_int_array___unique_ptr(unique_ptr_int___std__default_delete_int____ *_this)
{
 if (*(void **)_this != (void *)0x0) {
 operator_delete__(*(void **)_this);
 }
 return _this;
}

// Function: DiamondDerived::~DiamondDerived @ 0x116c4
void DiamondDerived__DiamondDerived(DiamondDerived *_this)
{
 _this->vtable = (void **)(intptr_t)PTR_func_00011c20;
 _this->vtable2 = (void *)(intptr_t)PTR_func_00011c54;
 _this->vtable_MiddleB = (void **)(intptr_t)PTR_func_00011c38;
 MiddleB__MiddleB((MiddleB *)((char *)_this + 8));
 MiddleA__MiddleA((MiddleA *)_this);
}

// Function: DiamondDerived::~DiamondDerived @ 0x11748
void DiamondDerived__DiamondDerived_2(DiamondDerived *_this)
{
 DiamondDerived__DiamondDerived(_this);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11754
void DiamondDerived__DiamondDerived_3(DiamondDerived *_this)
{
 DiamondDerived__DiamondDerived((DiamondDerived *)((char *)_this + -8));
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1175c
void DiamondDerived__DiamondDerived_4(DiamondDerived *_this)
{
 DiamondDerived__DiamondDerived((DiamondDerived *)((char *)_this + *(int *)(*(int *)_this + -0x10)));
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11770
void DiamondDerived__DiamondDerived_5(DiamondDerived *_this)
{
 DiamondDerived__DiamondDerived(_this);
 operator_delete(_this,0x18);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11790
void DiamondDerived__DiamondDerived_6(DiamondDerived *_this)
{
 DiamondDerived__DiamondDerived((DiamondDerived *)((char *)_this + -8));
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11798
void DiamondDerived__DiamondDerived_7(DiamondDerived *_this)
{
 DiamondDerived__DiamondDerived((DiamondDerived *)((char *)_this + *(int *)(*(int *)_this + -0x10)));
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x117ac
void DiamondDerived__DiamondDerived_8(DiamondDerived *_this)
{
 DiamondDerived__DiamondDerived(_this);
 return;
}

// Function: _fini @ 0x117b8
void _fini(void)
{
 return;
}

