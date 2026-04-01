/* Auto-injected type definitions by preprocessor */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define __thiscall

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Forward declaration */
int call_weak_fn(intptr_t ctx);

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Init Init;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;

/* Typeinfo structures */
typedef struct {
    char *type_info;
} typeinfo;

extern char *RTTIBase_typeinfo;
extern char *RTTIDerivedA_typeinfo;
extern char *RTTIDerivedB_typeinfo;
extern char *int_typeinfo;

/* Global variables */
long ___stack_chk_guard;
char *DAT_00102170;
char *DAT_00102190;
char *DAT_001021b0;
char *DAT_001021d0;
char *DAT_001021f0;
char *DAT_00102210;
char *DAT_00102230;
char *DAT_00102250;
char *DAT_00102270;
char *DAT_00102290;
char *DAT_001022b0;
char *DAT_001022d0;
char *DAT_00102130;
long __dso_handle;
char completed_0;
char *std___ioinit;
int LifecycleClass_instance_count;
char *stack0x00000008;
char *PTR_virtual_func_00113958;
char *PTR_virtual_func_00113988;
char *PTR_func_00113b30;
char *PTR__RTTIDerivedA_00113b58;
char *PTR__RTTIDerivedB_00113b80;

/* LifecycleClass definition */
typedef struct {
    int instance_count;
} LifecycleClass;

// Decompiled by BinaryAI
// SHA256: 7d311dfebf96a5c85e41061f84a3af51bf430580e2ac13b96016e277e14b8782

// Function: _init @ 0x101458
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((intptr_t)ctx);
 return iVar1;
}

// Function: FUN_00101470 @ 0x101470
void FUN_00101470(void)
{
 (*(void *)(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x101490
void * my_operator_new_array(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::operator.new__ @ 0x101498
void * my_operator_new__(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::operator.delete__ @ 0x1014a8
void my_operator_delete__(void *param_1)
{
 free(param_1);
 return;
}

// Function: <EXTERNAL>::puts @ 0x1014a0
int puts(char *__s)
{
 int iVar1;
 iVar1 = ::puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::strlen @ 0x1014b0
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = ::strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1014c0
void __stack_chk_fail(void)
{
 // Stub implementation
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x1014d0
void __cxa_begin_catch(void)
{
 // Stub implementation
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x1014e0
void *__cxa_allocate_exception(unsigned long size)
{
 return malloc(size);
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1014f0
void __cxa_finalize(void *param_1)
{
 (void)param_1;
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x101500
void __libc_start_main(void *main_fn, unsigned long arg2, void *arg3, void *arg4, void *arg5, unsigned long long arg6)
{
 (void)main_fn; (void)arg2; (void)arg3; (void)arg4; (void)arg5; (void)arg6;
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x101510
void * my_operator_new(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x101520
void my_operator_delete(void *param_1,unsigned long param_2)
{
 free(param_1);
 return;
}

// Function: <EXTERNAL>::strncpy @ 0x101530
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = ::strncpy(__dest,__src,__n);
 return pcVar1;
}



// Function: <EXTERNAL>::__cxa_atexit @ 0x101550
int __cxa_atexit(void (*func)(void), void *arg, void *dso_handle)
{
 (void)func; (void)arg; (void)dso_handle;
 return 0;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x101560
void my_operator_delete_array(void *param_1)
{
 free(param_1);
 return;
}

// Function: <EXTERNAL>::strcmp @ 0x101570
int strcmp(char *__s1,char *__s2)
{
 int iVar1;
 iVar1 = ::strcmp(__s1,__s2);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x101580
void __cxa_rethrow(void)
{
 // Stub implementation
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x101590
void std_ios_base_Init_Init(Init *this_)
{
 (void)this_;
 return;
}

// Function: <EXTERNAL>::abort @ 0x1015a0
void abort(void)
{
 // Stub implementation - exit program
 exit(1);
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x1015b0
void __cxa_end_catch(void)
{
 // Stub implementation
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x1015c0
void __gxx_personality_v0(void)
{
 // Stub implementation
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x1015d0
void __cxa_throw(void *exception, void *typeinfo, void (*dest)(void *))
{
 (void)exception; (void)typeinfo; (void)dest;
 // Stub implementation
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x1015e0
void _Unwind_Resume(void)
{
 // Stub implementation
}

// Function: <EXTERNAL>::__printf_chk @ 0x1015f0
int __printf_chk(int flag, const char *format, ...)
{
 (void)flag; (void)format;
 return 0;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x101600
void __gmon_start__(void)
{
 // Stub implementation
 return;
}

// Forward declaration
unsigned long long main(void);
int DiamondDerived_func(DiamondDerived *param_1);
int template_max_int_(int param_1, int param_2);
double template_max_double_(double param_1, double param_2);
void template_swap_int_(int *param_1, int *param_2);
char *__dynamic_cast(char *obj, char *base_typeinfo, char *derived_typeinfo, int flags);

// Function: _start @ 0x101640
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 __libc_start_main(main,param_9,&stack0x00000008,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x101674
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x101690
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1016c0
void register_tm_clones(void)
{
 return;
}

// Function: FUN_001016fc @ 0x1016fc
void FUN_001016fc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x101700
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: test_cpp_member_func @ 0x101754
int test_cpp_member_func(void)
{
 size_t sVar1;
 char acStack_2c [31];
 char local_d;
 long local_8;
 local_8 = ___stack_chk_guard;
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(acStack_2c);
 if (local_8 - ___stack_chk_guard == 0) {
 return (int)sVar1 + 0x125c;
 }
 __stack_chk_fail();
}

// Function: test_cpp_constructor @ 0x1017cc
int test_cpp_constructor(void)
{
 int iVar1;
 void *pvVar2;
 pvVar2 = my_operator_new__(0x14);
 *(unsigned int *)((long)pvVar2 + 4) = 10;
 *(unsigned int *)((long)pvVar2 + 8) = 0x14;
 *(unsigned int *)((long)pvVar2 + 0xc) = 0x1e;
 *(unsigned int *)((long)pvVar2 + 0x10) = 0x28;
 iVar1 = LifecycleClass_instance_count + 0x15;
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 my_operator_delete__(pvVar2);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return iVar1 + LifecycleClass_instance_count * 1000;
}

// Function: call_virtual_func @ 0x101838
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)(param_1,param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x101854
void test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 char **local_20;
 char **local_18;
 unsigned int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_20 = &PTR_virtual_func_00113958;
 local_18 = &PTR_virtual_func_00113988;
 local_10 = 3;
 call_virtual_func((Base *)&local_20,5);
 call_virtual_func((Base *)&local_18,5);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: test_cpp_multiple_inheritance @ 0x1018e4
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x1018ec
void test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 char **local_18;
 unsigned int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_18 = &PTR_func_00113b30;
 local_10 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_18);
 local_10 = 100;
 iVar2 = DiamondDerived_func((DiamondDerived *)&local_18);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: test_cpp_operator_overload @ 0x101988
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x101990
void test_cpp_template_func(void)
{
 int iVar1;
 double dVar2;
 int local_10;
 int local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 iVar1 = template_max_int_(3,7);
 dVar2 = template_max_double_(2.5,1.5);
 local_10 = 10;
 local_c = 0x14;
 template_swap_int_(&local_10,&local_c);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: test_cpp_template_class @ 0x101a38
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x101a40
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x101a48
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int_typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x101b20
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x101b28
int test_cpp_rtti(void)
{
 int iVar1;
 long *plVar2;
 long *plVar3;
 char *pVar4;
 size_t sVar5;
 int iVar6;
 char *__s1;
 long lVar7;
 plVar2 = (long *)my_operator_new(8);
 *plVar2 = (long)(uintptr_t)PTR__RTTIDerivedA_00113b58;
 plVar3 = (long *)my_operator_new(8);
 *plVar3 = (long)(uintptr_t)PTR__RTTIDerivedB_00113b80;
  lVar7 = *plVar2;
  __s1 = *(char **)((char *)(*(long *)((char *)lVar7 + -8)) + 8);
 iVar6 = 10;
 if ((__s1 != "12RTTIDerivedA") && (iVar6 = 0, *__s1 != '*')) {
 iVar1 = strcmp((char*)__s1,(char*)"12RTTIDerivedA");
 iVar6 = 10;
 if (iVar1 != 0) {
 iVar6 = 0;
 }
 }
 pVar4 = (char *)__dynamic_cast((char*)plVar2,(char*)RTTIBase_typeinfo,(char*)RTTIDerivedA_typeinfo,0);
 iVar1 = iVar6 + 0x78;
 if (pVar4 == 0) {
 iVar1 = iVar6 + 0x14;
 }
 pVar4 = (char *)__dynamic_cast((char*)plVar3,(char*)RTTIBase_typeinfo,(char*)RTTIDerivedB_typeinfo,0);
 iVar6 = iVar1 + 200;
 if (pVar4 == 0) {
 iVar6 = iVar1;
 }
 if (*__s1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar5 = strlen(__s1);
  (*(void (*)(void *))((char *)lVar7 + 8))((void *)plVar2);
  (*(void (*)(void *))((char *)*plVar3 + 8))((void *)plVar3);
 return iVar6 + (int)sVar5;
}

// Function: test_cpp_oo_features @ 0x101c8c
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 puts("Testing C++ OO features");
 uVar1 = test_cpp_member_func();
 __printf_chk(1,(const char*)DAT_00102170,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,(const char*)DAT_00102190,uVar1);
 test_cpp_virtual_func();
 __printf_chk(1,(const char*)DAT_001021b0,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,(const char*)DAT_001021d0,uVar1);
 test_cpp_diamond_inheritance();
 __printf_chk(1,(const char*)DAT_001021f0,uVar1);
 __printf_chk(1,(const char*)DAT_00102210,0x16);
 test_cpp_template_func();
 __printf_chk(1,(const char*)DAT_00102230,uVar1);
 __printf_chk(1,(const char*)DAT_00102250,0x10);
 __printf_chk(1,(const char*)DAT_00102270,0x55);
 test_cpp_exception();
 __printf_chk(1,(const char*)DAT_00102290,uVar1);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,(const char*)DAT_001022b0,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,(const char*)DAT_001022d0,uVar1);
 return;
}

// Function: main @ 0x101dbc
unsigned long long main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x101dd4
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std_ios_base_Init_Init((Init *)&std___ioinit);
 __cxa_atexit((void (*)(void))FUN_00101470,&std___ioinit,&__dso_handle);
 return;
}

// Function: Base_virtual_func @ 0x101e18
int Base_virtual_func(Base *this_,int param_1)
{
 (void)this_;
 return param_1 + 1;
}

// Function: Base_getName @ 0x101e20
char * Base_getName(void)
{
 return DAT_00102130;
}

// Function: Base__Base @ 0x101e2c
void Base__Base(Base *this_)
{
 (void)this_;
 return;
}

// Function: Derived_virtual_func @ 0x101e30
int Derived_virtual_func(Derived *this_,int param_1)
{
 return param_1 * *(int *)((char *)this_ + 8);
}

// Function: Derived_getName @ 0x101e3c
char * Derived_getName(void)
{
 return "Derived";
}

// Function: MultiDerived_funcA @ 0x101e48
unsigned long long MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived_funcB @ 0x101e50
unsigned long long MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived_funcB @ 0x101e58
unsigned long long MultiDerived_funcB_this(MultiDerived *this_)
{
 (void)this_;
 return 0x28;
}

// Function: MiddleA_func @ 0x101e60
int MiddleA_func_this(MiddleA *this_)
{
 return *(int *)((char *)this_ + *(long *)(*(long *)this_ + -0x18) + 8) + 0x96;
}

// Function: MiddleA_func @ 0x101e78
int MiddleA_func_this2(MiddleA *this_)
{
 return *(int *)((char *)this_ + *(long *)(*(long *)((char *)this_ + *(long *)(*(long *)this_ + -0x18)) + -0x18) +
 *(long *)(*(long *)this_ + -0x18) + 8) + 0x96;
}

// Function: MiddleB_func @ 0x101e9c
int MiddleB_func_this(MiddleB *this_)
{
 return *(int *)((char *)this_ + *(long *)(*(long *)this_ + -0x18) + 8) + 200;
}

// Function: MiddleB_func @ 0x101eb4
int MiddleB_func_this2(MiddleB *this_)
{
 return *(int *)((char *)this_ + *(long *)(*(long *)((char *)this_ + *(long *)(*(long *)this_ + -0x18)) + -0x18) +
 *(long *)(*(long *)this_ + -0x18) + 8) + 200;
}

// Function: DiamondDerived_func @ 0x101ed8
int DiamondDerived_func_this(DiamondDerived *this_)
{
 return *(int *)((char *)this_ + *(long *)((long *)this_ + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived_func @ 0x101ef0
int DiamondDerived_func_this2(DiamondDerived *this_)
{
 return *(int *)((char *)this_ + *(long *)((long *)((char *)this_ + *(long *)((long *)this_ + -0x18)) + -0x18) +
 *(long *)((long *)this_ + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived_func @ 0x101f14
int DiamondDerived_func_this3(DiamondDerived *this_)
{
 return *(int *)((char *)this_ + *(long *)((long *)((char *)this_ + -0x10) + -0x18) + -8) + 0xfa;
}

// Function: RTTIDerivedA_getType @ 0x101f2c
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB_getType @ 0x101f34
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: RTTIDerivedB__RTTIDerivedB @ 0x101f3c
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_)
{
 (void)this_;
 return;
}

// Function: RTTIDerivedA__RTTIDerivedA @ 0x101f40
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_)
{
 (void)this_;
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x101f44
void DiamondDerived__DiamondDerived(DiamondDerived *this_)
{
 (void)this_;
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x101f48
void DiamondDerived__DiamondDerived2(DiamondDerived *this_)
{
 (void)this_;
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x101f4c
void DiamondDerived__DiamondDerived3(DiamondDerived *this_)
{
 (void)this_;
 return;
}

// Function: MultiDerived__MultiDerived @ 0x101f50
void MultiDerived__MultiDerived(MultiDerived *this_)
{
 (void)this_;
 return;
}

// Function: MultiDerived__MultiDerived @ 0x101f54
void MultiDerived__MultiDerived2(MultiDerived *this_)
{
 (void)this_;
 return;
}

// Function: Derived__Derived @ 0x101f58
void Derived__Derived(Derived *this_)
{
 (void)this_;
 return;
}

// Function: Base__Base_destructor @ 0x101f5c
void Base__Base_destructor(Base *this_)
{
 my_operator_delete((void *)this_,8);
 return;
}

// Function: Derived__Derived_destructor @ 0x101f74
void Derived__Derived_destructor(Derived *this_)
{
 my_operator_delete((void *)this_,0x10);
 return;
}

// Function: MultiDerived__MultiDerived_destructor @ 0x101f8c
void MultiDerived__MultiDerived_destructor(MultiDerived *this_)
{
 my_operator_delete((void *)this_,0x20);
 return;
}

// Function: MultiDerived__MultiDerived @ 0x101fa4
void MultiDerived__MultiDerived3(MultiDerived *this_)
{
 my_operator_delete((void *)((char *)this_ + -0x10),0x20);
 return;
}

// Function: RTTIDerivedA__RTTIDerivedA_destructor @ 0x101fc0
void RTTIDerivedA__RTTIDerivedA_destructor(RTTIDerivedA *this_)
{
 my_operator_delete((void *)this_,8);
 return;
}

// Function: RTTIDerivedB__RTTIDerivedB_2 @ 0x101fd8
void RTTIDerivedB__RTTIDerivedB_2(RTTIDerivedB *this_)
{
 my_operator_delete((void *)this_,8);
 return;
}

// Function: DiamondDerived__DiamondDerived_4 @ 0x101ff0
void DiamondDerived__DiamondDerived_4(DiamondDerived *this_)
{
 my_operator_delete((void *)this_,0x30);
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x102008
void DiamondDerived__DiamondDerived4(DiamondDerived *this_)
{
 my_operator_delete((char *)this_ + *(long *)(*(long *)(char *)this_ + -0x20),0x30);
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x10202c
void DiamondDerived__DiamondDerived5(DiamondDerived *this_)
{
 my_operator_delete((char *)this_ + -0x10,0x30);
 return;
}

// Function: template_max<int> @ 0x102048
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x102054
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x102060
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container_int_Container @ 0x102074
void Container_int__Container(Container_int_ *this_)
{
 *(unsigned int *)((char *)this_ + 0x28) = 0;
 return;
}

// Function: Container_int__push @ 0x10207c
void Container_int__push(Container_int_ *this_,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this_ + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)this_ + 0x28) = iVar1 + 1;
 *(int *)((char *)this_ + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int__get @ 0x102098
unsigned int Container_int__get(Container_int_ *this_,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (uVar1 = 0, param_1 < *(int *)((char *)this_ + 0x28))) {
 uVar1 = *(unsigned int *)((char *)this_ + (long)param_1 * 4);
 }
 return uVar1;
}

// Function: Container_int__getSize @ 0x1020c0
unsigned int Container_int__getSize(Container_int_ *this_)
{
 return *(unsigned int *)((char *)this_ + 0x28);
}

// Function: Container_double__Container @ 0x1020c8
void Container_double__Container(Container_double_ *this_)
{
 *(unsigned int *)((char *)this_ + 0x50) = 0;
 return;
}

// Function: Container_double__push @ 0x1020d0
void Container_double__push(Container_double_ *this_,double param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this_ + 0x50);
 if (iVar1 < 10) {
 *(int *)((char *)this_ + 0x50) = iVar1 + 1;
 *(double *)((char *)this_ + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container_double__get @ 0x1020ec
unsigned long long Container_double__get(Container_double_ *this_,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)((char *)this_ + 0x50))) {
 uVar1 = *(unsigned long long *)((char *)this_ + (long)param_1 * 8);
 }
 return uVar1;
}

// Function: Container_double__getSize @ 0x10210c
unsigned int Container_double__getSize(Container_double_ *this_)
{
 return *(unsigned int *)((char *)this_ + 0x50);
}

// Function: _fini @ 0x102114
void _fini(void)
{
 return;
}

