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

/* Helper macro for combining two 32-bit values into a 64-bit value */
#define CONCAT44(low, high) (((uint64_t)(high) << 32) | ((uint64_t)(low) & 0xFFFFFFFF))

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// Decompiled by BinaryAI
// SHA256: efecdc1e2e1499d0d6f5b3062a443c663a5af169a91020bccc9bf1d12e021120

/* Forward declarations */
struct Init;
struct type_info;
struct Base;
struct DiamondDerived;
struct Derived;
struct MultiDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct MiddleA;
struct MiddleB;
struct Container_int_;
struct Container_double_;
struct LifecycleClass;

extern int main(int, char **, char **);

/* External function declarations */
extern int template_max_int_(int,int);
extern double template_max_double_(double,double);
extern void template_swap_int_(int *,int *);
extern int __gmon_start__(void);

extern void __aeabi_atexit(void *, void (*)(void *), void *);
extern void __stack_chk_fail(void);
extern int call_weak_fn(void);
extern void __cxa_end_catch(void);
extern int __aeabi_dcmpgt(double, double);
extern int64_t __aeabi_d2iz(double param_1);
extern void *__dynamic_cast(void *, const struct type_info *, const struct type_info *, int);
extern int __printf_chk(int, const char *, ...);
extern void __cxa_throw(void *, void *, void *);
extern int __libc_start_main(int (*)(int, char **, char **), int, char **, void (*)(), void (*)(), void *);

/* Global variables */
extern char completed_0;
extern char std___ioinit[4];
extern void *__dso_handle;
extern int LifecycleClass_instance_count;
extern struct type_info int_typeinfo;
extern struct type_info RTTIDerivedA_typeinfo;
extern struct type_info RTTIDerivedB_typeinfo;
extern struct type_info RTTIBase_typeinfo;

/* Static data references */
static void *PTR_virtual_func_0001187c;
static void *PTR_virtual_func_00011894;
static void *PTR_func_00011968;
static void *PTR__RTTIDerivedA_0001197c;
static void *PTR__RTTIDerivedB_00011990;
static void *PTR__RTTIBase_000119a4;
static void *PTR__RTTIDerivedA_typeinfo;
static void *PTR__RTTIDerivedB_typeinfo;
static char DAT_000115cc[] = "Base";
static char DAT_000115e4[] = "Testing C++ OO features...\n";
static char DAT_00011608[] = "Member func result: %u\n";
static char DAT_00011628[] = "Constructor result: %u\n";
static char DAT_00011644[] = "Virtual func result: %u\n";
static char DAT_00011660[] = "Multiple inheritance: %u\n";
static char DAT_0001167c[] = "Diamond inheritance: %u\n";
static char DAT_0001169c[] = "Operator overload: %u\n";
static char DAT_000116b8[] = "Template func result: %u\n";
static char DAT_000116d4[] = "Template class: %u\n";
static char DAT_000116f0[] = "Lambda: %u\n";
static char DAT_0001170c[] = "Exception: %u\n";
static char DAT_0001172c[] = "Smart ptr: %u\n";
static char DAT_0001174c[] = "RTTI result: %u\n";

/* Type definitions for C++ classes */
struct type_info {
    const char *name;
};

struct Init {
};

struct Base {
    void **vtable;
    int value;
    int virtual_func(Base*, int);
    char* getName(Base*);
    Base* _Base(Base*);
    Base* _Base_ptr(Base*);
    Base* _Base_delete(Base*, uint);
};

struct DiamondDerived {
    void **vtable;
    int func(DiamondDerived*);
    int func2(DiamondDerived*);
    DiamondDerived* _DiamondDerived_void(DiamondDerived*);
    DiamondDerived* _DiamondDerived_ptr_adjust(DiamondDerived*);
    DiamondDerived* _DiamondDerived(DiamondDerived*);
    DiamondDerived* _DiamondDerived2(DiamondDerived*);
    DiamondDerived* _DiamondDerived3(DiamondDerived*);
    DiamondDerived* _DiamondDerived2_delete(DiamondDerived*, int);
    DiamondDerived* _DiamondDerived3_delete(DiamondDerived*);
};

struct Derived {
    void **vtable;
    int value;
    int virtual_func(Derived*, int);
    char* getName(Derived*);
    Derived* _Derived(Derived*);
    Derived* _Derived_ptr(Derived*);
    Derived* _Derived_delete(Derived*, uint);
};

struct MultiDerived {
    void **vtable;
    unsigned int funcA(MultiDerived*);
    unsigned int funcB(MultiDerived*);
    MultiDerived* _MultiDerived(MultiDerived*);
    MultiDerived* _MultiDerived2(MultiDerived*);
    MultiDerived* _MultiDerived_delete(MultiDerived*, int);
    MultiDerived* _MultiDerived2_delete(MultiDerived*, int);
};

struct RTTIDerivedA {
    void **vtable;
    unsigned int getType(RTTIDerivedA*);
    void _RTTIDerivedA(RTTIDerivedA*);
    void _RTTIDerivedA_delete(RTTIDerivedA*);
};

struct RTTIDerivedB {
    void **vtable;
    unsigned int getType(RTTIDerivedB*);
    void _RTTIDerivedB(RTTIDerivedB*);
    void _RTTIDerivedB_delete(RTTIDerivedB*);
};

struct MiddleA {
    void **vtable;
    int func(MiddleA*);
    int func2(MiddleA*);
};

struct MiddleB {
    void **vtable;
    int func(MiddleB*);
    int func2(MiddleB*);
};

struct Container_int_ {
    int data[10];
    unsigned int size;
    unsigned int capacity;
};

struct Container_double_ {
    double data[10];
    unsigned int size;
    unsigned int capacity;
};

struct LifecycleClass {
    static int instance_count;
};

// Function: _init @ 0x109b0
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn();
 return iVar1;
}

// Function: FUN_000109bc @ 0x109bc
void FUN_000109bc(void)
{
 (*(void (*)(void))(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x109d0
void * operator_new(unsigned int param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__aeabi_atexit @ 0x109dc
void __aeabi_atexit_dummy(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x109e8
void *__cxa_begin_catch(void)
{
 return (void*)0;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x109f4
void *__cxa_allocate_exception(size_t size)
{
 return malloc(size);
}

// Function: <EXTERNAL>::puts @ 0x10a00
// Wrapper removed - using external declaration directly

// Function: <EXTERNAL>::operator.delete @ 0x10a0c
void operator_delete(void *param_1,uint param_2)
{
 free(param_1);
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10a18
// Wrapper removed - using external declaration directly

// Function: <EXTERNAL>::operator.new[] @ 0x10a24
void * operator_new__(unsigned int param_1)
{
 void *pvVar1;
 pvVar1 = operator_new(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::abort @ 0x10a30
// Wrapper removed - using external declaration directly

// Function: <EXTERNAL>::std::type_info::operator== @ 0x10a3c
int type_info_operator__(type_info *self,type_info *param_1)
{
 return (int)(self == param_1 ? 1 : 0);
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x10a48
// Wrapper removed - using external declaration directly

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x10a54
// Wrapper removed - using external declaration directly

// Function: <EXTERNAL>::__dynamic_cast @ 0x10a60
// Wrapper removed - using external declaration directly

// Function: <EXTERNAL>::operator.delete[] @ 0x10a6c
void operator_delete__(void *param_1)
{
 free(param_1);
 return;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x10a78
// Wrapper removed - using external declaration directly

// Function: <EXTERNAL>::strlen @ 0x10a84
// Wrapper removed - using external declaration directly

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x10a90
void std_ios_base_Init_Init(Init *self)
{
 return;
}

// Function: <EXTERNAL>::__aeabi_d2iz @ 0x10a9c
// Wrapper removed - using external declaration directly

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10aa8
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x10ab4
// Wrapper removed - using external declaration directly

// Function: <EXTERNAL>::__cxa_throw @ 0x10ac0
// Wrapper removed - using external declaration directly

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10acc
// Wrapper removed - using external declaration directly

// Function: <EXTERNAL>::strncpy @ 0x10a78
// Wrapper removed - using external declaration directly

// Function: <EXTERNAL>::__printf_chk @ 0x10af0
int __printf_chk(int flag, const char *format, ...)
{
 return 0;
}

static char **stack0x00000004;

// Function: _start @ 0x10b08
void _start(unsigned int param_1,unsigned int param_2)
{
 __libc_start_main((int (*)(int, char**, char**))main,param_2,stack0x00000004,0,0,(void *)(intptr_t)param_1);
 abort();
}

// Function: call_weak_fn @ 0x10b4c
int call_weak_fn(void)
{
 __gmon_start__();
 return 0;
}

// Function: deregister_tm_clones @ 0x10b70
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x10b9c
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x10bd4
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: test_cpp_member_func @ 0x10c00
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
 if (local_c == 0) {
 return sVar1 + 0x125c;
 }
 __stack_chk_fail();
}

// Function: test_cpp_constructor @ 0x10c6c
int test_cpp_constructor(void)
{
 void *pvVar1;
 int iVar2;
 pvVar1 = operator_new__(0x14);
 *(unsigned int *)((int)pvVar1 + 4) = 10;
 *(unsigned int *)((int)pvVar1 + 8) = 0x14;
 *(unsigned int *)((int)pvVar1 + 0xc) = 0x1e;
 *(unsigned int *)((int)pvVar1 + 0x10) = 0x28;
 iVar2 = LifecycleClass::instance_count + 0x15;
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 operator_delete__(pvVar1);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 return iVar2 + LifecycleClass::instance_count * 1000;
}

// Function: call_virtual_func @ 0x10cd0
int call_virtual_func(Base *param_1,int param_2)
{
 return (*(int (**)(Base*, int))(*(void **)param_1))(param_1, param_2);
}

// Function: test_cpp_virtual_func @ 0x10ce4
unsigned int test_cpp_virtual_func(void)
{
 int iVar1;
 unsigned long long uVar2;
 char **local_18;
 char **local_14;
 unsigned int local_10;
 int local_c;
 local_c = 0;
 local_18 = (char **)&PTR_virtual_func_0001187c;
 local_14 = (char **)&PTR_virtual_func_00011894;
 local_10 = 3;
 iVar1 = call_virtual_func((Base *)&local_18,5);
 uVar2 = (unsigned int)(uintptr_t)call_virtual_func((Base *)&local_14,5);
 if (local_c == 0) {
 return 0;
 }
 __stack_chk_fail();
}

// Function: test_cpp_multiple_inheritance @ 0x10d68
unsigned int test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x10d70
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 unsigned long long uVar2;
 void **local_14;
 unsigned int local_10;
 int local_c;
 local_c = 0;
 local_14 = &PTR_func_00011968;
 local_10 = 0x32;
 iVar1 = (*(int (*)(DiamondDerived*))local_14)((DiamondDerived *)&local_14);
 local_10 = 100;
 uVar2 = (*(int (*)(DiamondDerived*))local_14)((DiamondDerived *)&local_14);
 if (local_c == 0) {
 return iVar1 + (int)uVar2;
 }
  __stack_chk_fail();
 return 0;
}

// Function: test_cpp_operator_overload @ 0x10df4
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x10dfc
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
 int stack0xffffffe4;
 int stack0xffffffe8;
	iVar3 = 0;
	iVar1 = template_max_int_(3,7);
	uVar2 = 0;
	uVar2 = (unsigned int)__aeabi_d2iz(template_max_double_
 ((double)CONCAT44(in_stack_ffffffe4,in_stack_ffffffe0),
 (double)CONCAT44(iVar3,in_stack_ffffffe8)));
	iVar5 = 10;
	iVar6 = 0x14;
	template_swap_int_((int *)&stack0xffffffe4,(int *)&stack0xffffffe8);
 if (iVar3 == 0) {
 return;
 }
  __stack_chk_fail();
}

// Function: test_cpp_template_class @ 0x10eac
unsigned int test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x10eb4
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x10ebc
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int_typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x10f78
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x10f84
int test_cpp_rtti(void)
{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)(intptr_t)&PTR__RTTIDerivedA_0001197c;
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)&PTR__RTTIDerivedB_00011990;
 iVar3 = type_info_operator__
 (*(type_info **)((char *)*piVar1 + -4),(type_info *)&RTTIDerivedA_typeinfo);
 if (iVar3 == 0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 iVar4 = type_info_operator__
 (*(type_info **)((char *)*piVar2 + -4),(type_info *)&RTTIDerivedB_typeinfo);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 0x14;
 }
 {
 void *cast_result = __dynamic_cast(piVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 if (cast_result != 0) {
 iVar3 = iVar3 + 100;
 }
 }
 {
 void *cast_result = __dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (cast_result != 0) {
 iVar3 = iVar3 + 200;
 }
 }
  iVar4 = (int)(long)(char *)*piVar1;
 __s = *(char **)(*(int *)(iVar4 + -4) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 ((void (*)(void *))(void *)(*(void **)(iVar4 + 4)))((void *)piVar1);
 ((void (*)(void *))(void *)(*(void **)(piVar2 + 4)))((void *)piVar2);
 return iVar3 + (int)sVar5;
}

// Function: test_cpp_oo_features @ 0x11074
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 puts((const char *)&DAT_000115e4);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,(const char*)(&DAT_00011608),uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,(const char*)(&DAT_00011628),uVar1);
 uVar1 = test_cpp_virtual_func();
 __printf_chk(1,(const char*)(&DAT_00011644),uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,(const char*)(&DAT_00011660),uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,(const char*)(&DAT_0001167c),uVar1);
	__printf_chk(1,(const char*)(&DAT_0001169c),0x16);
	test_cpp_template_func();
	__printf_chk(1,(const char*)(&DAT_000116b8),0);
 __printf_chk(1,(const char*)(&DAT_000116d4),0x10);
 __printf_chk(1,(const char*)(&DAT_000116f0),0x55);
 test_cpp_exception();
 __printf_chk(1,(const char*)(&DAT_0001170c),0x2a);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,(const char*)(&DAT_0001172c),uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,(const char*)(&DAT_0001174c),uVar1);
 return;
}

// Function: main @ 0x1119c
int main(int argc, char **argv, char **envp)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x111ac
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std_ios_base_Init_Init((Init *)&std___ioinit);
 __aeabi_atexit(&std___ioinit,(void (*)(void *))std_ios_base_Init_Init,&__dso_handle);
 return;
}

// Function: Base::virtual_func @ 0x111dc
int Base::virtual_func(Base *self,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x111e4
char * Base::getName(Base *obj)
{
 return DAT_000115cc;
}

// Function: Base::~Base @ 0x111f0
Base * Base::_Base(Base *obj)
{
 return obj;
}

// Function: Derived::virtual_func @ 0x111f4
int Derived::virtual_func(Derived *obj,int param_1)
{
 return param_1 * *(int *)(obj + 4);
}

// Function: Derived::getName @ 0x11200
char * Derived::getName(Derived *obj)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x1120c
unsigned int MultiDerived::funcA(MultiDerived *obj)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x11214
unsigned int MultiDerived::funcB(MultiDerived *obj)
{
 return 0x28;
}



// Function: MiddleA::func @ 0x11224
int MiddleA::func(MiddleA *obj)
{
 return *(int *)(obj + *(int *)(*(int *)obj + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func2 @ 0x1123c
int MiddleA::func2(MiddleA *obj)
{
 return *(int *)(obj + *(int *)(*(int *)(obj + *(int *)(*(int *)obj + -0xc)) + -0xc) +
 *(int *)(*(int *)obj + -0xc) + 4) + 0x96;
}

// Function: MiddleB::func @ 0x11260
int MiddleB::func(MiddleB *obj)
{
 return *(int *)(obj + *(int *)(*(int *)obj + -0xc) + 4) + 200;
}

// Function: MiddleB::func2 @ 0x11278
int MiddleB::func2(MiddleB *obj)
{
 return *(int *)(obj + *(int *)(*(int *)(obj + *(int *)(*(int *)obj + -0xc)) + -0xc) +
 *(int *)(*(int *)obj + -0xc) + 4) + 200;
}

// Function: DiamondDerived::func @ 0x1129c
int DiamondDerived::func(DiamondDerived *obj)
{
 return *(int *)(obj + *(int *)(*(int *)obj + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func2 @ 0x112d8
int DiamondDerived::func2(DiamondDerived *obj)
{
 return *(int *)(obj + *(int *)(*(int *)(obj + -8) + -0xc) + -4) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x112f0
unsigned int RTTIDerivedA::getType(RTTIDerivedA *obj)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x112f8
unsigned int RTTIDerivedB::getType(RTTIDerivedB *obj)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11300
void RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *obj)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11304
void RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *obj)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11308
DiamondDerived * DiamondDerived::_DiamondDerived_void(DiamondDerived *obj)
{
 return obj;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1130c
DiamondDerived * DiamondDerived::_DiamondDerived2(DiamondDerived *obj)
{
 return obj + *(int *)(*(int *)obj + -0x10);
}

// Function: DiamondDerived::~DiamondDerived @ 0x1131c
DiamondDerived * DiamondDerived::_DiamondDerived_ptr_adjust(DiamondDerived *obj)
{
 return obj + -8;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1131c
DiamondDerived * DiamondDerived::_DiamondDerived3(DiamondDerived *obj)
{
 return obj + -8;
}

// Function: MultiDerived::~MultiDerived @ 0x11324
MultiDerived * MultiDerived::_MultiDerived(MultiDerived *obj)
{
 return obj;
}

// Function: MultiDerived::~MultiDerived @ 0x11328
MultiDerived * MultiDerived::_MultiDerived2(MultiDerived *obj)
{
 return obj + -8;
}

// Function: Derived::~Derived @ 0x11330
Derived * Derived::_Derived(Derived *obj)
{
 return obj;
}

// Function: Base::_Base_delete @ 0x11334
Base * Base::_Base_delete(Base *obj, uint size)
{
 operator_delete(obj,4);
 return obj;
}

// Function: Derived::~Derived @ 0x1134c
Derived * Derived::_Derived_delete(Derived *obj, uint size)
{
 operator_delete(obj,8);
 return obj;
}

// Function: MultiDerived::~MultiDerived @ 0x11364
MultiDerived * MultiDerived::_MultiDerived_delete(MultiDerived *obj, int size)
{
 operator_delete(obj,0x10);
 return obj;
}

// Function: MultiDerived::~MultiDerived @ 0x1137c
MultiDerived * MultiDerived::_MultiDerived2_delete(MultiDerived *obj, int size)
{
 operator_delete(obj + -8,0x10);
 return obj + -8;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11398
void RTTIDerivedA::_RTTIDerivedA_delete(RTTIDerivedA *obj)
{
 operator_delete(obj,4);
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x113b0
void RTTIDerivedB::_RTTIDerivedB_delete(RTTIDerivedB *obj)
{
 operator_delete(obj,4);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x113c8
DiamondDerived * DiamondDerived::_DiamondDerived(DiamondDerived *obj)
{
 operator_delete(obj,0x18);
 return obj;
}

// Function: DiamondDerived::~DiamondDerived @ 0x113e0
DiamondDerived * DiamondDerived::_DiamondDerived2_delete(DiamondDerived *obj, int size)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)obj + -0x10);
 operator_delete((void *)((char *)obj + iVar1),0x18);
 return (DiamondDerived *)((char *)obj + iVar1);
}

// Function: DiamondDerived::~DiamondDerived @ 0x11404
DiamondDerived * DiamondDerived::_DiamondDerived3_delete(DiamondDerived *obj)
{
 operator_delete(obj + -8,0x18);
 return obj + -8;
}

// Function: template_max<int> @ 0x11420
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x1142c
double template_max_double_(double param_1,double param_2)
{
 double extraout_d0;
 if (__aeabi_dcmpgt(param_1, param_2)) {
 return param_1;
 }
 return param_2;
}

// Function: template_swap<int> @ 0x1145c
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x11470
void Container_int__Container(Container_int_ *obj)
{
 *(unsigned int *)(obj + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x1147c
void Container_int__push(Container_int_ *obj,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(obj + 0x28);
 if (iVar1 < 10) {
 *(int *)(obj + 0x28) = iVar1 + 1;
 *(int *)(obj + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x11494
unsigned int Container_int__get(Container_int_ *obj,int param_1)
{
 if (param_1 < 0) {
 return 0;
 }
 if (*(int *)(obj + 0x28) <= param_1) {
 return 0;
 }
 return *(unsigned int *)(obj + param_1 * 4);
}

// Function: Container<int>::getSize @ 0x114c0
unsigned int Container_int__getSize(Container_int_ *obj)
{
 return *(unsigned int *)(obj + 0x28);
}

// Function: Container<double>::Container @ 0x114c8
void Container_double__Container(Container_double_ *obj)
{
 *(unsigned int *)(obj + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x114d4
void Container_double__push(Container_double_ *obj,double param_1)
{
 int iVar2;
 unsigned int *puVar1;
 unsigned long long val64;
 iVar2 = *(int *)(obj + 0x50);
 if (iVar2 < 10) {
 *(int *)(obj + 0x50) = iVar2 + 1;
 puVar1 = (unsigned int *)(obj + iVar2 * 8);
 val64 = *(unsigned long long *)&param_1;
 *puVar1 = (unsigned int)val64;
 puVar1[1] = (unsigned int)(val64 >> 32);
 }
 return;
}

// Function: Container<double>::get @ 0x114f0
unsigned long long Container_double__get(Container_double_ *obj,int param_1)
{
 if (param_1 < 0) {
 return 0;
 }
 if (*(int *)(obj + 0x50) <= param_1) {
 return 0;
 }
 return *(unsigned long long *)(obj + param_1 * 8);
}

// Function: Container<double>::getSize @ 0x11528
unsigned int Container_double__getSize(Container_double_ *obj)
{
 return *(unsigned int *)(obj + 0x50);
}

// Function: _fini @ 0x11530
void _fini(void)
{
 return;
}

