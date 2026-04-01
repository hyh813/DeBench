/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
#ifndef __need_size_t
#endif
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int uint;
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Decompiled by BinaryAI
// SHA256: e887006d2b7cc734b10593330b5a0c94858cad9c019ddee9890acaa73c8d550a

// Forward declarations
struct Base;
struct Derived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct RTTIBase;
struct LifecycleClass;
struct type_info;
struct Init;

// Missing type definitions
struct Base {
    void **vtable;
};

struct RTTIBase {
};

struct Derived {
    void **vtable;
    int value;
};

struct MiddleA {
    void **vtable;
};

struct MiddleB {
    void **vtable;
};

struct DiamondDerived {
    void **vtable;
    char padding[16];
};

struct RTTIDerivedA {
    void **vtable;
};

struct RTTIDerivedB {
    void **vtable;
};

struct MultiDerived {
    void **vtable;
    char padding[16];
};

struct type_info {
    const char *name;
};

struct Init {
    int dummy;
};

// Global initialization variable
Init __ioinit;

char completed_0 = 0;

// Global variables
int instance_count = 0;

// String constants
const char DAT_000115e4[] = "Testing C++ Features:\n";
const char DAT_00011608[] = "  test_cpp_member_func: %u\n";
const char DAT_00011628[] = "  test_cpp_constructor: %u\n";
const char DAT_00011644[] = "  test_cpp_virtual_func: %u\n";
const char DAT_00011660[] = "  test_cpp_multiple_inheritance: %u\n";
const char DAT_0001167c[] = "  test_cpp_diamond_inheritance: %u\n";
const char DAT_0001169c[] = "  test_cpp_operator_overload: %u\n";
const char DAT_000116b8[] = "  test_cpp_template_func: %u\n";
const char DAT_000116d4[] = "  test_cpp_template_class: %u\n";
const char DAT_000116f0[] = "  test_cpp_lambda: %u\n";
const char DAT_0001170c[] = "  test_cpp_exception: %u\n";
const char DAT_0001172c[] = "  test_cpp_smart_ptr: %u\n";
const char DAT_0001174c[] = "  test_cpp_rtti: %u\n";
const char DAT_000115cc[] = "Base";

// Define global type_info objects for RTTI
static type_info g_RTIBase_typeinfo = { "RTTIBase" };
static type_info g_RTTIDerivedA_typeinfo = { "RTTIDerivedA" };
static type_info g_RTTIDerivedB_typeinfo = { "RTTIDerivedB" };

// Vtable pointers
static void *PTR_virtual_func_0001187c;
static void *PTR_virtual_func_00011894;
static void *PTR_func_00011968;
static void *PTR__RTTIDerivedA_0001197c;
static void *PTR__RTTIDerivedB_00011990;
static void *__dso_handle;


int DiamondDerived_func(DiamondDerived *_this);
int DiamondDerived_func_(DiamondDerived *_this);
int template_max_int_(int param_1,int param_2);
double template_max_double_(double param_1,double param_2);
void template_swap_int_(int *param_1,int *param_2);
void call_weak_fn(void);

// Macro for combining two 32-bit ints into a 64-bit long long (for double conversion)
#define CONCAT44(hi, lo) (((long long)(hi) << 32) | (unsigned int)(lo))

struct Container_int_ {
    unsigned int count;
    int data[10];
};

struct Container_double_ {
    unsigned int count;
    double data[10];
};

// Function: _init @ 0x109b0
int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: FUN_000109bc @ 0x109bc
void FUN_000109bc(void)
{
 ((void (*)(void))(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x109d0
extern "C" void * operator_new(uint param_1)
{
 return malloc(param_1);
}

// Function: <EXTERNAL>::__aeabi_atexit @ 0x109dc
extern "C" int __aeabi_atexit(void *obj, void (*dtor)(void *), void *dso_handle)
{
 return 0;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x109e8
extern "C" void * __cxa_begin_catch(void)
{
 return 0;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x109f4
extern "C" void * __cxa_allocate_exception(void)
{
 return malloc(4);
}

// Function: <EXTERNAL>::operator.delete @ 0x10a0c
extern "C" void operator_delete(void *param_1,uint param_2)
{
 free(param_1);
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10a18
void __libc_start_main(void)
{
 return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x10a24
extern "C" void * operator_new__(uint param_1)
{
 return malloc(param_1);
}

// Function: <EXTERNAL>::abort @ 0x10a30
void abort(void)
{
}

// Function: <EXTERNAL>::std::type_info::operator== @ 0x10a3c
int std_type_info_operator_eq(type_info *_this,type_info *param_1)
{
 return _this->name == param_1->name;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x10a48
void __stack_chk_fail(void)
{
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x10a54
void __cxa_end_cleanup(void)
{
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x10a60
void *__dynamic_cast(void *src_ptr, const void *src_type, const void *dst_type, int src2dst_offset)
{
 return 0;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x10a6c
extern "C" void operator_delete__(void *param_1)
{
 free(param_1);
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x10a90
void std_ios_base_Init_Init(Init *_this)
{
}

// Function: <EXTERNAL>::__aeabi_d2iz @ 0x10a9c
extern "C" int __aeabi_d2iz(double param_1)
{
 return (int)param_1;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10aa8
extern "C" void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x10ab4
void __gxx_personality_v0(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x10ac0
extern "C" void __cxa_throw(void *thrown_exception, void *tinfo, void (*dest)(void *))
{
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10acc
extern "C" int __aeabi_dcmpgt(double a, double b)
{
 return a > b ? 1 : 0;
}

#include <stdarg.h>

// Function: <EXTERNAL>::__printf_chk @ 0x10af0
int __printf_chk(int __flag, const char *__fmt, ...)
{
 va_list args;
 va_start(args, __fmt);
 int ret = vprintf(__fmt, args);
 va_end(args);
 return ret;
}

// Function: _start @ 0x10b08
void _start(unsigned int param_1,unsigned int param_2)
{
 __libc_start_main();
 abort();
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
 iVar2 = instance_count + 0x15;
 instance_count = instance_count + 1;
 operator_delete__(pvVar1);
 instance_count = instance_count + -1;
 return iVar2 + instance_count * 1000;
}

// Function: call_virtual_func @ 0x10cd0
int call_virtual_func(Base *param_1,int param_2)
{
 typedef int (*VirtualFunc)(Base *, int);
 VirtualFunc vf = (VirtualFunc)(*(void **)param_1);
 return vf(param_1, param_2);
}

// Function: test_cpp_virtual_func @ 0x10ce4
void test_cpp_virtual_func(void)
{
 int iVar1;
 unsigned long long uVar2;
 void **local_18;
 void **local_14;
 unsigned int local_10;
 int local_c;
 local_c = 0;
 local_18 = &PTR_virtual_func_0001187c;
 local_14 = &PTR_virtual_func_00011894;
 local_10 = 3;
 iVar1 = call_virtual_func((Base *)&local_18,5);
 uVar2 = call_virtual_func((Base *)&local_14,5);
 if (local_c == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: test_cpp_multiple_inheritance @ 0x10d68
unsigned int test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x10d70
void test_cpp_diamond_inheritance(void)
{
 int iVar1;
 unsigned long long uVar2;
 void **local_14;
 unsigned int local_10;
 int local_c;
 local_c = 0;
 local_14 = &PTR_func_00011968;
 local_10 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_14);
 local_10 = 100;
 uVar2 = DiamondDerived_func_((DiamondDerived *)&local_14);
 if (local_c == 0) {
 return;
 }
 __stack_chk_fail();
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
 iVar3 = 0;
 iVar1 = template_max_int_(3,7);
 uVar2 = 0;
 uVar2 = template_max_double_
 ((double)CONCAT44(in_stack_ffffffe4,in_stack_ffffffe0),
 (double)CONCAT44(iVar3,in_stack_ffffffe8));
 iVar5 = 10;
 iVar6 = 0x14;
 template_swap_int_(&iVar5,&iVar6);
 uVar4 = __aeabi_d2iz(uVar2);
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
 puVar1 = (unsigned int *)__cxa_allocate_exception();
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,0,0);
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
 *piVar1 = (int)&PTR__RTTIDerivedA_0001197c;
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)&PTR__RTTIDerivedB_00011990;
 iVar3 = std_type_info_operator_eq
 (*(type_info **)(*piVar1 + -4),(type_info *)&g_RTTIDerivedA_typeinfo);
 if (iVar3 == 0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 iVar4 = std_type_info_operator_eq
 (*(type_info **)(*piVar2 + -4),(type_info *)&g_RTTIDerivedB_typeinfo);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 0x14;
 }
 iVar4 = (int)__dynamic_cast(piVar1,&g_RTIBase_typeinfo,&g_RTTIDerivedA_typeinfo,0);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 100;
 }
 iVar4 = (int)__dynamic_cast(piVar2,&g_RTIBase_typeinfo,&g_RTTIDerivedB_typeinfo,0);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 200;
 }
 iVar4 = (int)*piVar1;
 __s = *(char **)(*(int *)(iVar4 + -4) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 (void)((void (*)(void *))(iVar4 + 4))(piVar1);
 (void)((void (*)(void *))(*piVar2 + 4))(piVar2);
 operator_delete(piVar1, 4);
 operator_delete(piVar2, 4);
 return iVar3 + sVar5;
}

// Function: test_cpp_oo_features @ 0x11074
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 puts(DAT_000115e4);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,DAT_00011608,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,DAT_00011628,uVar1);
 test_cpp_virtual_func();
 __printf_chk(1,DAT_00011644,0x0);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,DAT_00011660,uVar1);
 test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_0001167c,0x0);
 __printf_chk(1,DAT_0001169c,0x16);
 test_cpp_template_func();
 __printf_chk(1,DAT_000116b8,0x0);
 __printf_chk(1,DAT_000116d4,0x10);
 __printf_chk(1,DAT_000116f0,0x55);
 test_cpp_exception();
 __printf_chk(1,DAT_0001170c,uVar1);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_0001172c,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,DAT_0001174c,uVar1);
 return;
}

// Function: main @ 0x1119c
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x111ac
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std_ios_base_Init_Init(&__ioinit);
 __aeabi_atexit(&__ioinit,(void (*)(void *))std_ios_base_Init_Init,&__dso_handle);
 return;
}

// Function: Base::virtual_func @ 0x111dc
int Base_virtual_func(Base *_this,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x111e4
const char * Base_getName(void)
{
 return DAT_000115cc;
}

// Function: Base::~Base @ 0x111f0
void Base__Base(Base *_this)
{
 return;
}

// Function: Derived::virtual_func @ 0x111f4
int Derived_virtual_func(Derived *_this,int param_1)
{
 return param_1 * *(int *)(_this + 4);
}

// Function: Derived::getName @ 0x11200
char * Derived_getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x1120c
unsigned int MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x11214
unsigned int MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x1121c
unsigned int MultiDerived_funcB_(MultiDerived *_this)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x11224
int MiddleA_func(MiddleA *_this)
{
 return *(int *)(_this + *(int *)(*(int *)_this + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func @ 0x1123c
int MiddleA_func_(MiddleA *_this)
{
 return *(int *)(_this + *(int *)(*(int *)(_this + *(int *)(*(int *)_this + -0xc)) + -0xc) +
 *(int *)(*(int *)_this + -0xc) + 4) + 0x96;
}

// Function: MiddleB::func @ 0x11260
int MiddleB_func(MiddleB *_this)
{
 return *(int *)(_this + *(int *)(*(int *)_this + -0xc) + 4) + 200;
}

// Function: MiddleB::func @ 0x11278
int MiddleB_func_(MiddleB *_this)
{
 return *(int *)(_this + *(int *)(*(int *)(_this + *(int *)(*(int *)_this + -0xc)) + -0xc) +
 *(int *)(*(int *)_this + -0xc) + 4) + 200;
}

// Function: DiamondDerived::func @ 0x1129c
int DiamondDerived_func(DiamondDerived *_this)
{
 return *(int *)(_this + *(int *)(*(int *)_this + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x112b4
int DiamondDerived_func_(DiamondDerived *_this)
{
 return *(int *)(_this + *(int *)(*(int *)(_this + *(int *)(*(int *)_this + -0xc)) + -0xc) +
 *(int *)(*(int *)_this + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x112d8
int DiamondDerived_func__(DiamondDerived *_this)
{
 return *(int *)(_this + *(int *)(*(int *)(_this + -8) + -0xc) + -4) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x112f0
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x112f8
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11300
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *_this)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11304
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *_this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11308
void DiamondDerived__DiamondDerived(DiamondDerived *_this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1130c
DiamondDerived * DiamondDerived__DiamondDerived_(DiamondDerived *_this)
{
 return _this + *(int *)(*(int *)_this + -0x10);
}

// Function: DiamondDerived::~DiamondDerived @ 0x1131c
DiamondDerived * DiamondDerived__DiamondDerived__(DiamondDerived *_this)
{
 return _this + -8;
}

// Function: MultiDerived::~MultiDerived @ 0x11324
void MultiDerived__MultiDerived(MultiDerived *_this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11328
MultiDerived * MultiDerived__MultiDerived_(MultiDerived *_this)
{
 return _this + -8;
}

// Function: Derived::~Derived @ 0x11330
void Derived__Derived(Derived *_this)
{
 return;
}

// Function: Base::~Base @ 0x11334
Base * Base__Base_(Base *_this)
{
 operator_delete(_this,4);
 return _this;
}

// Function: Derived::~Derived @ 0x1134c
Derived * Derived__Derived_(Derived *_this)
{
 operator_delete(_this,8);
 return _this;
}

// Function: MultiDerived::~MultiDerived @ 0x11364
MultiDerived * MultiDerived__MultiDerived__(MultiDerived *_this)
{
 operator_delete(_this,0x10);
 return _this;
}

// Function: MultiDerived::~MultiDerived @ 0x1137c
MultiDerived * MultiDerived__MultiDerived___(MultiDerived *_this)
{
 operator_delete(_this + -8,0x10);
 return _this + -8;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11398
RTTIDerivedA * RTTIDerivedA__RTTIDerivedA_(RTTIDerivedA *_this)
{
 operator_delete(_this,4);
 return _this;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x113b0
RTTIDerivedB * RTTIDerivedB__RTTIDerivedB_(RTTIDerivedB *_this)
{
 operator_delete(_this,4);
 return _this;
}

// Function: DiamondDerived::~DiamondDerived @ 0x113c8
DiamondDerived * DiamondDerived__DiamondDerived___(DiamondDerived *_this)
{
 operator_delete(_this,0x18);
 return _this;
}

// Function: DiamondDerived::~DiamondDerived @ 0x113e0
DiamondDerived * DiamondDerived__DiamondDerived____(DiamondDerived *_this)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)_this + -0x10);
 operator_delete(_this + iVar1,0x18);
 return _this + iVar1;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11404
DiamondDerived * DiamondDerived__DiamondDerived_____(DiamondDerived *_this)
{
 operator_delete(_this + -8,0x18);
 return _this + -8;
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
void Container_int__Container(Container_int_ *_this)
{
 *(unsigned int *)(_this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x1147c
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

// Function: Container<int>::get @ 0x11494
unsigned int Container_int__get(Container_int_ *_this,int param_1)
{
 if (param_1 < 0) {
 return 0;
 }
 if (*(int *)(_this + 0x28) <= param_1) {
 return 0;
 }
 return *(unsigned int *)(_this + param_1 * 4);
}

// Function: Container<int>::getSize @ 0x114c0
unsigned int Container_int__getSize(Container_int_ *_this)
{
 return *(unsigned int *)(_this + 0x28);
}

// Function: Container<double>::Container @ 0x114c8
void Container_double__Container(Container_double_ *_this)
{
 *(unsigned int *)(_this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x114d4
void Container_double__push(Container_double_ *_this,double param_1)
{
 int iVar2;
 unsigned int *puVar1;
 unsigned int *puVar2;
 iVar2 = *(int *)(_this + 0x50);
 if (iVar2 < 10) {
 *(int *)(_this + 0x50) = iVar2 + 1;
 puVar1 = (unsigned int *)(_this + iVar2 * 8);
 puVar2 = (unsigned int *)&param_1;
 *puVar1 = *puVar2;
 puVar1[1] = puVar2[1];
 }
 return;
}

// Function: Container<double>::get @ 0x114f0
unsigned long long Container_double__get(Container_double_ *_this,int param_1)
{
 if (param_1 < 0) {
 return 0;
 }
 if (*(int *)(_this + 0x50) <= param_1) {
 return 0;
 }
 return *(unsigned long long *)(_this + param_1 * 8);
}

// Function: Container<double>::getSize @ 0x11528
unsigned int Container_double__getSize(Container_double_ *_this)
{
 return *(unsigned int *)(_this + 0x50);
}

// Function: _fini @ 0x11530
void _fini(void)
{
 return;
}

// Define call_weak_fn
void call_weak_fn(void)
{
}





