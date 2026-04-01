/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>
#include <stdarg.h>
#include <stdbool.h>

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
// bool, true, false are now defined by stdbool.h

// Decompiled by BinaryAI
// SHA256: 85e9ecac6d8b6ebe519049785e008d18be08b73b581943e7dd3c6b273f7f1be0

// Class placeholders (must come before function prototypes that use them)
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct DiamondDerived DiamondDerived;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct VirtualBase VirtualBase;
typedef struct LifecycleClass LifecycleClass;

// Minimal struct definitions (must come before function prototypes that use them)
struct Base { void *vtable; int data; };
struct Derived { struct Base base; int value; };
struct MultiDerived { void *vtable; int data[2]; };
struct DiamondDerived { void *vtable; int data[3]; };
struct BaseA { void *vtable; };
struct BaseB { void *vtable; };
struct MiddleA { void *vtable; };
struct MiddleB { void *vtable; };
struct VirtualBase { void *vtable; };
struct RTTIBase { void *vtable; };
struct RTTIDerivedA { struct RTTIBase base; };
struct RTTIDerivedB { struct RTTIBase base; };
struct LifecycleClass { int count; };
struct Container_int_ { int pad[16]; unsigned int size; int data[10]; };
struct Container_double_ { int pad1[20]; unsigned int size; double data[10]; };

// Forward declarations
void call_weak_fn(void);
void abort(void) __attribute__((noreturn));
unsigned int main(void);
void __cxa_atexit(void (*)(void *), void *, void *);
void __libc_start_main(int (*main_func)(void), int argc, char **argv, int init, int fini, void *rtld_fini);
void __gmon_start__(void);
void *malloc(size_t);
void free(void *);
void *operator_new(unsigned int);
void operator_delete(void *param);
void *__dynamic_cast(void *, void *, void *, int);
void *__cxa_allocate_exception(unsigned int);
void __cxa_throw(void *, void *, void *);
void __cxa_begin_catch(void);
void __cxa_end_catch(void);
void __gxx_personality_v0(void);
void __cxa_finalize(void *);
int __aeabi_dcmpgt(double a, double b);
void __cxa_rethrow(void);
void __cxa_end_cleanup(void);
void *operator_new__(unsigned int);
void operator_delete__(void *);
int puts(const char *s);
int printf(const char *format, ...);
int strcmp(const char *s1, const char *s2);
size_t strlen(const char *s);

// Class method prototypes
int Base_virtual_func(Base *this, int param_1);
char *Base_getName(void);
void Base__Base(Base *this);
void Base__Base_2(Base *this);
int Derived_virtual_func(Derived *this, int param_1);
char *Derived_getName(void);
void Derived__Derived(Derived *this);
unsigned int MultiDerived_funcA(void);
unsigned int MultiDerived_funcB(MultiDerived *this);
unsigned int MultiDerived_funcB_static(void);
void MultiDerived__MultiDerived(MultiDerived *this);
void MultiDerived__MultiDerived_3(MultiDerived *this);
int DiamondDerived_func(DiamondDerived *this);
void DiamondDerived__DiamondDerived(DiamondDerived *this);
void DiamondDerived__DiamondDerived_2(DiamondDerived *this);
void DiamondDerived__DiamondDerived_3(DiamondDerived *this);
void DiamondDerived__DiamondDerived_4(DiamondDerived *this);
void DiamondDerived__DiamondDerived_5(DiamondDerived *this);
void DiamondDerived__DiamondDerived_6(DiamondDerived *this);
unsigned int BaseA_funcA(void);
void BaseA__BaseA(BaseA *this);
void BaseA__BaseA_2(BaseA *this);
unsigned int BaseB_funcB(void);
void BaseB__BaseB(BaseB *this);
void BaseB__BaseB_2(BaseB *this);
int MiddleA_func(MiddleA *this);
void MiddleA__MiddleA(MiddleA *this);
void MiddleA__MiddleA_2(MiddleA *this);
void MiddleA__MiddleA_3(MiddleA *this);
void MiddleA__MiddleA_4(MiddleA *this);
int MiddleA_func_2(MiddleA *this);
int MiddleB_func(MiddleB *this);
void MiddleB__MiddleB(MiddleB *this);
void MiddleB__MiddleB_2(MiddleB *this);
void MiddleB__MiddleB_3(MiddleB *this);
void MiddleB__MiddleB_4(MiddleB *this);
void MiddleB__MiddleB_5(MiddleB *this);
int MiddleB_func_2(MiddleB *this);
int MiddleB_func_3(MiddleB *this);
unsigned int VirtualBase_func(void);
void VirtualBase__VirtualBase(VirtualBase *this);
void VirtualBase__VirtualBase_2(VirtualBase *this);
void VirtualBase__VirtualBase_3(VirtualBase *this);
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this);
void RTTIDerivedA__RTTIDerivedA_2(RTTIDerivedA *this);
unsigned int RTTIDerivedA_getType(void);
void RTTIBase__RTTIBase(RTTIBase *this);
void RTTIBase__RTTIBase_2(RTTIBase *this);
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this);
void RTTIDerivedB__RTTIDerivedB_2(RTTIDerivedB *this);
unsigned int RTTIDerivedB_getType(void);
unsigned int Container_int__get(Container_int_ *this, int param_1);
void Container_double__push(Container_double_ *this, double param_1);
int DiamondDerived_func_2(DiamondDerived *this);
int DiamondDerived_func_3(DiamondDerived *this);
int DiamondDerived_func_4(DiamondDerived *this);
void Container_int__Container_int_(Container_int_ *this);
void Container_int__push(Container_int_ *this, int param_1);
unsigned int Container_int__getSize(Container_int_ *this);
void Container_double__Container_double_(Container_double_ *this);
unsigned int Container_double__getSize(Container_double_ *this);
void BaseA__BaseA_deleting(BaseA *this);
void BaseB__BaseB_deleting(BaseB *this);
void MiddleA__MiddleA_deleting(MiddleA *this);
void MiddleA__MiddleA_3(MiddleA *this);
void MiddleA__MiddleA_4(MiddleA *this);
void MiddleB__MiddleB_deleting(MiddleB *this);
void MiddleB__MiddleB_2(MiddleB *this);
void MiddleB__MiddleB_4(MiddleB *this);
void MiddleB__MiddleB_5(MiddleB *this);
void DiamondDerived__DiamondDerived_deleting(DiamondDerived *this);
void DiamondDerived__DiamondDerived_3(DiamondDerived *this);
void DiamondDerived__DiamondDerived_4(DiamondDerived *this);
void VirtualBase__VirtualBase_3(VirtualBase *this);
void RTTIDerivedA__RTTIDerivedA_2(RTTIDerivedA *this);
void RTTIBase__RTTIBase_2(RTTIBase *this);
void RTTIDerivedB__RTTIDerivedB_2(RTTIDerivedB *this);
void DiamondDerived__DiamondDerived_5(DiamondDerived *this);

// Placeholder variables
char completed_0 = 0;
void *stack0x00000004;

// Data references
extern char DAT_00011c71[1];
extern char DAT_00011b0d[1];
extern char DAT_00011b2b[1];
extern char DAT_00011b47[1];
extern char DAT_00011b63[1];
extern char DAT_00011b7f[1];
extern char DAT_00011b9c[1];
extern char DAT_00011bb8[1];
extern char DAT_00011bd4[1];
extern char DAT_00011bf0[1];
extern char DAT_00011c0c[1];
extern char DAT_00011c29[1];
extern char DAT_00011c46[1];
extern char DAT_00011c64[1];
extern void *PTR_virtual_func_00022cf0[1];
extern void *PTR_virtual_func_00022d10[1];
extern void *DAT_00022d4c[1];
extern void *DAT_00022df0[1];
extern void *PTR_funcA_00022d34[1];
extern void *PTR_func_00022dbc[1];
extern void *PTR_func_00022dd4[1];
extern void *PTR__RTTIBase_00022ed8[1];
extern void *PTR__RTTIBase_00022eec[1];

// Global variables for LifecycleClass
int LifecycleClass_instance_count;

// RTTI typeinfo placeholders
typedef struct { void *_vtable; char *name; } type_info;
type_info int_typeinfo;
type_info RTTIBase_typeinfo;
type_info RTTIDerivedA_typeinfo;
type_info RTTIDerivedB_typeinfo;

// CONCAT44 macro for ARM register pairing
#define CONCAT44(hi, lo) (((unsigned long long)(hi) << 32) | (unsigned long long)(lo))

// C++ runtime placeholders
struct Init { void (*_Init)(struct Init *); };
struct ios_base { struct Init Init; };
struct std_class { struct ios_base ios_base; struct Init __ioinit; };

extern void *__dso_handle;

// Global std instance
struct std_class g_std;
#define std g_std

// Function: _init @ 0x10b84
void _init(void *ctx)
{
 call_weak_fn();
}



// Function: <EXTERNAL>::__cxa_begin_catch @ 0x10bb0
void __cxa_begin_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x10bbc
void *__cxa_allocate_exception(unsigned int param_1)
{
 return malloc(param_1);
}



// Function: <EXTERNAL>::__libc_start_main @ 0x10be0
void __libc_start_main(int (*main_func)(void), int argc, char **argv, int init, int fini, void *rtld_fini)
{
 main_func();
}

// Function: <EXTERNAL>::operator.new[] @ 0x10bec
void * operator_new__(unsigned int param_1)
{
 return malloc(param_1);
}

// Function: <EXTERNAL>::operator.new @ 0x10bf0
void * operator_new(unsigned int param_1)
{
 return malloc(param_1);
}





// Function: <EXTERNAL>::__dynamic_cast @ 0x10c1c
void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int src2dst)
{
 return obj;  // Simple stub: return the object unchanged
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x10c28
void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
 (void)func; (void)arg; (void)dso_handle;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x10c34
void operator_delete__(void *param_1)
{
 free(param_1);
}

// Function: <EXTERNAL>::operator.delete @ 0x10c38
void operator_delete(void *param_1)
{
 free(param_1);
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x10c58
void std_ios_base_Init_Init(struct Init *this)
{
 (void)this;
 return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10c64
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x10c70
void __gxx_personality_v0(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x10c88
void __cxa_throw(void *thrown_exception, void *type_info, void *dest)
{
 (void)thrown_exception; (void)type_info; (void)dest;
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10c94
int __aeabi_dcmpgt(double a, double b)
{
 return a > b ? 1 : 0;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x10c9c
void __cxa_rethrow(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x10ca0
void __cxa_end_cleanup(void)
{
 return;
}



// Function: _GLOBAL__sub_I_5_1.cpp @ 0x10cb8
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std_ios_base_Init_Init(&std.__ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init_Init, &std.__ioinit, &__dso_handle);
 return;
}

// Function: _start @ 0x10cf8
void _start(void)
{
 __libc_start_main(main, 0, NULL, 0, 0, NULL);
 abort();
}

// Function: __gmon_start__ @ 0x10d3c
void __gmon_start__(void)
{
 return;
}

// Function: call_weak_fn @ 0x10d3c
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x10d60
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x10da4
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x10df4
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
 }
 return;
}

// Function: test_cpp_member_func @ 0x10e60
int test_cpp_member_func(void)
{
 size_t sVar1;
 unsigned int local_28;
 unsigned int uStack_24;
 unsigned int uStack_20;
 unsigned int local_1c;
 unsigned int uStack_18;
 unsigned int uStack_14;
 unsigned int uStack_10;
 unsigned short local_c;
 char local_a;
 char local_9;
 local_28 = 0x74736554;
 uStack_24 = 0;
 uStack_20 = 0;
 local_1c = 0;
 uStack_18 = 0;
 uStack_14 = 0;
 uStack_10 = 0;
 local_c = 0;
 local_a = 0;
 local_9 = 0;
 sVar1 = strlen((char *)&local_28);
 return sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x10ed0
int test_cpp_constructor(void)
{
 void *pvVar1;
 int iVar2;
 int iVar3;
 pvVar1 = operator_new__(0x14);
 iVar2 = 0;
 iVar3 = 0;
 do {
 *(int *)((int)pvVar1 + iVar3 * -4) = iVar2;
 iVar2 = iVar2 + 10;
 iVar3 = iVar3 + -1;
 } while (iVar3 != -5);
 iVar2 = LifecycleClass_instance_count + 1;
 iVar3 = *(int *)((int)pvVar1 + 8);
 LifecycleClass_instance_count = iVar2;
 operator_delete__(pvVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar3 + iVar2;
}

// Function: call_virtual_func @ 0x10f48
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)();
 return;
}

// Function: test_cpp_virtual_func @ 0x10f64
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 void **local_14;
 unsigned int local_10;
 void **local_c;
 local_c = (void **)PTR_virtual_func_00022cf0;
 local_10 = 3;
 local_14 = (void **)PTR_virtual_func_00022d10;
 iVar1 = Base_virtual_func((Base *)local_c,5);
 iVar2 = (**local_14)(local_14,5);
 return iVar1 + iVar2 + 0x15;
}

// Function: test_cpp_multiple_inheritance @ 0x10fdc
int test_cpp_multiple_inheritance(void)
{
 int iVar1;
 int iVar2;
 void **local_18;
 unsigned int local_14;
 local_14 = 200;
 local_18 = (void **)DAT_00022d4c;
 iVar1 = MultiDerived_funcA();
 iVar2 = (**local_18)(local_18);
 return iVar1 + iVar2 + 1;
}

// Function: test_cpp_diamond_inheritance @ 0x1104c
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 void **local_18;
 unsigned int local_14;
 local_14 = 0x32;
 local_18 = (void **)DAT_00022df0;
 iVar1 = DiamondDerived_func((DiamondDerived *)local_18);
 local_14 = 100;
 iVar2 = (**local_18)(local_18);
 return iVar2 + iVar1;
}

// Function: test_cpp_operator_overload @ 0x110d0
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x110d8
unsigned int test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x110e0
unsigned int test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x110e8
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x110f0
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int_typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x111c0
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x111cc
int test_cpp_rtti(void)
{
 intptr_t *piVar1;
 intptr_t *piVar2;
 int iVar3;
 char *pcVar4;
 int iVar5;
 size_t sVar6;
 char *__s1;
 unsigned int uVar7;
 bool bVar8;
 piVar1 = (intptr_t *)operator_new(4);
 *piVar1 = (intptr_t)&PTR__RTTIBase_00022ed8;
 piVar2 = (intptr_t *)operator_new(4);
 uVar7 = 0;
 *piVar2 = 0;
 *piVar2 = (intptr_t)&PTR__RTTIBase_00022eec;
 __s1 = *(char **)(*(intptr_t *)(*piVar1 + -4) + 4);
 iVar3 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = 0;
 if (iVar3 == 0) {
 uVar7 = 10;
 }
 pcVar4 = *(char **)(*(intptr_t *)(*piVar2 + -4) + 4);
 iVar3 = strcmp(pcVar4,"12RTTIDerivedB");
 bVar8 = iVar3 == 0;
 iVar3 = (intptr_t)__dynamic_cast(piVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar5 = (intptr_t)__dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 pcVar4 = __s1 + 1;
 if (*__s1 != '*') {
 pcVar4 = __s1;
 }
 sVar6 = strlen(pcVar4);
 (**(void **)(*piVar1 + 4))(piVar1);
 (**(void **)(*piVar2 + 4))(piVar2);
 if (bVar8) {
 uVar7 = uVar7 | 0x14;
 }
 if (iVar3 != 0) {
 uVar7 = uVar7 + 100;
 }
 if (iVar5 != 0) {
 uVar7 = uVar7 + 200;
 }
 return uVar7 + sVar6;
}

// Function: test_cpp_oo_features @ 0x1136c
void test_cpp_oo_features(void)
{
 void **ppcVar1;
 size_t sVar2;
 void *pvVar3;
 unsigned int uVar4;
 int iVar5;
 int iVar6;
 void **local_40;
 void **local_3c [4];
 unsigned int local_2c;
 unsigned int uStack_28;
 unsigned int uStack_24;
 unsigned short local_20;
 char local_1e;
 char local_1d;
 void **local_1c;
 puts((const char *)&DAT_00011c71);
 local_3c[0] = (void **)0x74736554;
 local_3c[1] = (void **)0x0;
 local_3c[2] = (void **)0x0;
 local_3c[3] = (void **)0x0;
 local_2c = 0;
 uStack_28 = 0;
 uStack_24 = 0;
 local_20 = 0;
 local_1e = 0;
 iVar6 = 0;
 local_1d = 0;
 local_40 = (void **)0xa;
 sVar2 = strlen((char *)local_3c);
 printf((const char *)&DAT_00011b0d,sVar2 + 0x125c);
 pvVar3 = operator_new__(0x14);
 iVar5 = 0;
 do {
 *(int *)((int)pvVar3 + iVar5 * -4) = iVar6;
 iVar6 = iVar6 + 10;
 iVar5 = iVar5 + -1;
 } while (iVar5 != -5);
	iVar5 = LifecycleClass_instance_count + 1;
	iVar6 = *(int *)((int)pvVar3 + 8);
	LifecycleClass_instance_count = iVar5;
	operator_delete__(pvVar3);
	LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
	printf((const char *)&DAT_00011b2b,LifecycleClass_instance_count * 1000 + iVar6 + iVar5);
 local_1c = (void **)PTR_virtual_func_00022cf0;
 local_3c[0] = (void **)0x3;
 local_40 = (void **)PTR_virtual_func_00022d10;
 iVar5 = Base_virtual_func((Base *)local_1c,5);
 iVar6 = (**local_40)(local_40,5);
	printf((const char *)&DAT_00011b47,iVar5 + iVar6 + 0x15);
 local_3c[1] = (void **)DAT_00022d4c;
 local_3c[2] = (void **)0xc8;
 local_3c[0] = (void **)0x64;
 local_40 = (void **)PTR_funcA_00022d34;
	iVar5 = MultiDerived_funcB((MultiDerived *)(local_3c + 1));
	printf((const char *)&DAT_00011b63,iVar5 + 0x1f);
 local_3c[3] = (void **)DAT_00022df0;
 local_2c = 0x32;
 local_40 = (void **)PTR_func_00022dbc;
 local_3c[1] = (void **)PTR_func_00022dd4;
	iVar5 = DiamondDerived_func((DiamondDerived *)(local_3c + 3));
 ppcVar1 = local_3c[3];
 *(unsigned int *)((int)local_3c + (int)local_40[-3]) = 100;
 iVar6 = (**ppcVar1)(local_3c + 3);
	printf((const char *)&DAT_00011b7f,iVar6 + iVar5);
	printf((const char *)&DAT_00011b9c,0x16);
	printf((const char *)&DAT_00011bb8,0x27);
	printf((const char *)&DAT_00011bd4,0x10);
	printf((const char *)&DAT_00011bf0,0x55);
	test_cpp_exception();
	uVar4 = 0x2a;
	printf((const char *)&DAT_00011c0c,uVar4);
	printf((const char *)&DAT_00011c29,0x2bf);
 uVar4 = test_cpp_rtti();
	printf((const char *)&DAT_00011c46,uVar4);
 return;
}

// Function: main @ 0x11648
unsigned int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: Base::virtual_func @ 0x1165c
int Base_virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Derived::virtual_func @ 0x11664
int Derived_virtual_func(Derived *this,int param_1)
{
 return *(int *)(this + 4) * param_1;
}

// Function: Base::~Base @ 0x11670
void Base__Base(Base *this)
{
 return;
}

// Function: Base::Base @ 0x11672
void Base__Base_2(Base *this)
{
 return;
}

// Function: Derived::Derived @ 0x11672
void Derived__Derived(Derived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11674
void MultiDerived__MultiDerived(MultiDerived *this)
{
 return;
}

// Function: DiamondDerived::DiamondDerived @ 0x11676
void DiamondDerived__DiamondDerived_6(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11678
void DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: template_max<int> @ 0x1167c
int template_max_int_(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x11688
double template_max_double_(double param_1,double param_2)
{
 if (__aeabi_dcmpgt(param_2, param_1)) {
 return param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x116bc
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x116d0
void Container_int__Container_int_(Container_int_ *this)
{
 this->size = 0;
 return;
}

// Function: Container<int>::push @ 0x116dc
void Container_int__push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x116f4
unsigned int Container_int__get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if (param_1 < 0) {
 return uVar1;
 }
 if (param_1 < (int)this->size) {
 uVar1 = (unsigned int)this->data[param_1];
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x11714
unsigned int Container_int__getSize(Container_int_ *this)
{
 return this->size;
}

// Function: Container<double>::Container @ 0x1171c
void Container_double__Container_double_(Container_double_ *this)
{
 this->size = 0;
 return;
}

// Function: Container<double>::push @ 0x11728
void Container_double__push(Container_double_ *this, double param_1)
{
 unsigned int iVar2;
 iVar2 = this->size;
 if (9 < iVar2) {
 return;
 }
 this->data[iVar2] = param_1;
 this->size = iVar2 + 1;
 return;
}

// Function: Container<double>::get @ 0x1174c
unsigned long long Container_double__get(Container_double_ *this,int param_1)
{
 union { double d; unsigned long long ll; } u;
 u.d = 0.0;
 if (-1 < param_1) {
 if (param_1 < (int)this->size) {
 u.d = this->data[param_1];
 return u.ll;
 }
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x11778
unsigned int Container_double__getSize(Container_double_ *this)
{
 return this->size;
}

// Function: Base::getName @ 0x11780
char * Base_getName(void)
{
 return &DAT_00011c64;
}



// Function: Derived::getName @ 0x117a0
char * Derived_getName(void)
{
 return "Derived";
}



// Function: MultiDerived::funcA @ 0x117c0
unsigned int MultiDerived_funcA(void)
{
 return 0x1e;
}



// Function: MultiDerived::funcB @ 0x117d8
unsigned int MultiDerived_funcB_static(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x117e0
unsigned int MultiDerived_funcB(MultiDerived *this)
{
 return 0x28;
}

// Function: MultiDerived::~MultiDerived @ 0x117e8
void MultiDerived__MultiDerived_3(MultiDerived *this)
{
 return;
}

// Function: DiamondDerived::func @ 0x11910
int DiamondDerived_func(DiamondDerived *this)
{
 return DiamondDerived_func_2(this);
}

// Function: MiddleB::func @ 0x118a4
int MiddleB_func(MiddleB *this)
{
 return MiddleB_func_2(this);
}



// Function: BaseA::funcA @ 0x11800
unsigned int BaseA_funcA(void)
{
 return 10;
}

// Function: BaseA::BaseA @ 0x11804
void BaseA__BaseA_2(BaseA *this)
{
 return;
}

// Function: BaseA::~BaseA @ 0x11808
void BaseA__BaseA(BaseA *this)
{
 return;
}

// Function: BaseA::~BaseA @ 0x1180c
void BaseA__BaseA_deleting(BaseA *this)
{
 operator_delete(this);
 return;
}

// Function: BaseB::funcB @ 0x1181c
unsigned int BaseB_funcB(void)
{
 return 0x14;
}

// Function: BaseB::BaseB @ 0x11818
void BaseB__BaseB_2(BaseB *this)
{
 return;
}

// Function: BaseB::~BaseB @ 0x11824
void BaseB__BaseB(BaseB *this)
{
 return;
}

// Function: BaseB::~BaseB @ 0x11828
void BaseB__BaseB_deleting(BaseB *this)
{
 operator_delete(this);
 return;
}

// Function: MiddleA::func @ 0x11838
int MiddleA_func(MiddleA *this)
{
 return *(int *)((char *)this + *(int *)((char *)this->vtable - 0xc) + 4) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x11850
void MiddleA__MiddleA(MiddleA *this)
{
 return;
}

// Function: MiddleA::~MiddleA @ 0x11854
void MiddleA__MiddleA_deleting(MiddleA *this)
{
 operator_delete(this);
 return;
}

// Function: MiddleA::func @ 0x11864
int MiddleA_func_2(MiddleA *this)
{
 int offset = *(int *)((char *)this->vtable - 0xc);
 char *base = (char *)this + offset;
 int offset2 = *(int *)((char *)*(void **)base - 0xc);
 return *(int *)(base + offset2 + 4) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x11884
void MiddleA__MiddleA_3(MiddleA *this)
{
 return;
}

// Function: MiddleA::~MiddleA @ 0x11888
void MiddleA__MiddleA_4(MiddleA *this)
{
 operator_delete((void *)((char *)this + *(int *)(*(int *)this + -0x10)));
 return;
}

// Function: MiddleB::func @ 0x118a4
int MiddleB_func_2(MiddleB *this)
{
 return *(int *)((char *)this + *(int *)((char *)this->vtable - 0xc) + 4) + 200;
}

// Function: MiddleB::MiddleB @ 0x118b8
void MiddleB__MiddleB(MiddleB *this)
{
 return;
}

// Function: MiddleB::~MiddleB @ 0x118bc
void MiddleB__MiddleB_2(MiddleB *this)
{
 return;
}

// Function: MiddleB::~MiddleB @ 0x118c0
void MiddleB__MiddleB_deleting(MiddleB *this)
{
 operator_delete(this);
 return;
}

// Function: MiddleB::func @ 0x118d0
int MiddleB_func_3(MiddleB *this)
{
 int offset = *(int *)((char *)this->vtable - 0xc);
 char *base = (char *)this + offset;
 int offset2 = *(int *)((char *)*(void **)base - 0xc);
 return *(int *)(base + offset2 + 4) + 200;
}

// Function: MiddleB::~MiddleB @ 0x118f0
void MiddleB__MiddleB_4(MiddleB *this)
{
 return;
}

// Function: MiddleB::~MiddleB @ 0x118f4
void MiddleB__MiddleB_5(MiddleB *this)
{
 operator_delete((void *)((char *)this + *(int *)(*(int *)this + -0x10)));
 return;
}

// Function: DiamondDerived::func @ 0x11910
int DiamondDerived_func_2(DiamondDerived *this)
{
 return *(int *)((char *)this + *(int *)((char *)this->vtable - 0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11928
void DiamondDerived__DiamondDerived_deleting(DiamondDerived *this)
{
 operator_delete(this);
 return;
}

// Function: DiamondDerived::func @ 0x11938
int DiamondDerived_func_3(DiamondDerived *this)
{
 char *base = (char *)this - 8;
 return *(int *)(base + *(int *)((char *)*(void **)base - 0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11950
void DiamondDerived__DiamondDerived_3(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11954
void DiamondDerived__DiamondDerived_4(DiamondDerived *this)
{
 operator_delete((void *)((char *)this - 8));
 return;
}

// Function: DiamondDerived::func @ 0x11968
int DiamondDerived_func_4(DiamondDerived *this)
{
 int offset = *(int *)((char *)this->vtable - 0xc);
 char *base = (char *)this + offset;
 int offset2 = *(int *)((char *)*(void **)base - 0xc);
 return *(int *)(base + offset2 + 4) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11988
void DiamondDerived__DiamondDerived_5(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1198c
void DiamondDerived__DiamondDerived_6(DiamondDerived *this)
{
 operator_delete((void *)((char *)this + *(int *)(*(int *)this + -0x10)));
 return;
}

// Function: VirtualBase::func @ 0x119a8
unsigned int VirtualBase_func(void)
{
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x119b0
void VirtualBase__VirtualBase_2(VirtualBase *this)
{
 return;
}

// Function: VirtualBase::VirtualBase @ 0x119b2
void VirtualBase__VirtualBase(VirtualBase *this)
{
 return;
}

// Function: VirtualBase::~VirtualBase @ 0x119b4
void VirtualBase__VirtualBase_3(VirtualBase *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::RTTIDerivedA @ 0x119c0
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x119c4
void RTTIDerivedA__RTTIDerivedA_2(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x119d4
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase::RTTIBase @ 0x119d8
void RTTIBase__RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIBase::~RTTIBase @ 0x119dc
void RTTIBase__RTTIBase_2(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::RTTIDerivedB @ 0x119de
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x119e0
void RTTIDerivedB__RTTIDerivedB_2(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x119f0
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: _fini @ 0x119f8
void _fini(void)
{
 return;
}

