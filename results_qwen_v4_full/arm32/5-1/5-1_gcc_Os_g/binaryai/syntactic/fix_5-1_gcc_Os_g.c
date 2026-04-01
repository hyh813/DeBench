#include <stdlib.h>
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

/* C++ Class type definitions */
typedef struct Base {
    void *vtable;
} Base;

typedef struct Derived {
    void *vtable;
    int value;
} Derived;

typedef struct MiddleA {
    void *vtable;
    int data;
} MiddleA;

typedef struct MiddleB {
    void *vtable;
    int data;
} MiddleB;

typedef struct DiamondDerived {
    void *vtable;
    int data;
    MiddleB middleB;
} DiamondDerived;

typedef struct MultiDerived {
    void *vtable;
    int data[2];
} MultiDerived;

typedef struct VirtualBase {
    void *vtable;
    int data;
} VirtualBase;

typedef struct RTTIDerivedA {
    void *vtable;
} RTTIDerivedA;

typedef struct RTTIDerivedB {
    void *vtable;
} RTTIDerivedB;

typedef struct type_info {
    void *vtable;
    char *name;
} type_info;

typedef struct Init {
    int data;
} Init;

typedef struct LifecycleClass {
    int instance_count;
} LifecycleClass;

LifecycleClass LifecycleClass_instance = {0};

/* Global variables */
extern type_info RTTIDerivedA_typeinfo;
extern type_info RTTIDerivedB_typeinfo;
extern type_info RTTIBase_typeinfo;
extern Init std___ioinit;
extern void *__dso_handle;
int completed_0 = 0;

/* External pointer declarations */
char *PTR_func_00011b2c = "PTR_func_00011b2c";
char *PTR_func_00011b48 = "PTR_func_00011b48";
char *PTR_func_00011b68 = "PTR_func_00011b68";
char *PTR_func_00011b84 = "PTR_func_00011b84";
char *PTR_func_00011c20 = "PTR_func_00011c20";
char *PTR_func_00011c38 = "PTR_func_00011c38";
char *PTR_func_00011c54 = "PTR_func_00011c54";
char *PTR_virtual_func_00011af0 = "PTR_virtual_func_00011af0";
char *PTR_virtual_func_00011b08 = "PTR_virtual_func_00011b08";
extern char *PTR__RTTIDerivedA_00011c68;
extern char *PTR__RTTIDerivedB_00011c7c;

/* External data declarations */
char DAT_00011854[] = "Base";
char DAT_00011866[] = "Test string";
extern char DAT_0001188a[];
extern char DAT_000118a8[];
extern char DAT_000118e0[];
extern char DAT_000118fc[];
extern char DAT_00011919[];
extern char DAT_0001196d[];
extern char DAT_000119a6[];
extern char DAT_000119c3[];

typedef struct Container_int_ {
    int storage[10];
    int count;
} Container_int_;

typedef struct Container_double_ {
    double storage[10];
    int count;
} Container_double_;

typedef struct unique_ptr_int_std__default_delete_int__ {
    void *ptr;
} unique_ptr_int_std__default_delete_int__;

typedef struct unique_ptr_int___std__default_delete_int____ {
    void *ptr;
} unique_ptr_int___std__default_delete_int____;

/* Forward declarations for template and container functions */
int template_max_int_(int param_1,int param_2);
double template_max_double_(double param_1,double param_2);
void template_swap_int_(int *param_1,int *param_2);
int DiamondDerived_func(DiamondDerived *param_1);
DiamondDerived * DiamondDerived__DiamondDerived(DiamondDerived *param_1);
void Container_int__push(Container_int_ *param_1,int param_2);
unique_ptr_int___std__default_delete_int____ * std_unique_ptr_int___std__default_delete_int______unique_ptr(unique_ptr_int___std__default_delete_int____ *param_1);
unique_ptr_int_std__default_delete_int__ * std_unique_ptr_int_std__default_delete_int____unique_ptr(unique_ptr_int_std__default_delete_int__ *param_1);

// Decompiled by BinaryAI
// SHA256: d65490c74640e79d8582be148a4edf699e4568d599b00068e580cec657afee0d

// Function: call_weak_fn @ 0x10c40
void call_weak_fn(void)
{
 return;
}

// Function: _init @ 0x109b0
int _init(void *ctx)
{
 (void)ctx;
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
void * operator_new(unsigned int param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x109e8
void __cxa_begin_catch(void *param_1)
{
 (void)param_1;
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x109f4
void *__cxa_allocate_exception(unsigned int param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::puts @ 0x10a00
int puts_wrapper(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x10a0c
void operator_delete(void *param_1,unsigned int param_2)
{
 free(param_1);
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10a18
int __libc_start_main(int (*main)(int, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void (*stack_end))
{
 return __libc_start_main(main, argc, ubp_av, init, fini, rtld_fini, stack_end);
}

// Function: <EXTERNAL>::operator.new[] @ 0x10a24
void * operator_new__(unsigned int param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::abort @ 0x10a30
void abort_wrapper(void)
{
 abort();
}

// Function: <EXTERNAL>::std::type_info::operator== @ 0x10a3c
int type_info_operator_eq(type_info *param_1,type_info *param_2)
{
 return param_1 == param_2;
}

int std_type_info_operator_eq(type_info *param_1,type_info *param_2)
{
 return type_info_operator_eq(param_1,param_2);
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x10a48
void __stack_chk_fail(void)
{
 return;
}

// Function: <EXTERNAL>::__stack_chk_fail (wrapper) @ 0x10a48
void __stack_chk_fail_wrapper(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x10a54
void __cxa_end_cleanup(void)
{
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x10a60
void *__dynamic_cast(void *param_1, void *param_2, void *param_3, int param_4)
{
 return __dynamic_cast(param_1, param_2, param_3, param_4);
}

// Function: <EXTERNAL>::operator.delete[] @ 0x10a6c
void operator_delete__(void *param_1)
{
 free(param_1);
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
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x10a90
void std_ios_base_Init_Init(Init *param_1)
{
 (void)param_1;
 return;
}

// Function: <EXTERNAL>::__aeabi_d2iz @ 0x10a9c
long long __aeabi_d2iz(double param_1)
{
 return __aeabi_d2iz(param_1);
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10aa8
void __cxa_end_catch(void)
{
 __cxa_end_catch();
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x10ab4
int __gxx_personality_v0(int version, int actions, long long exception_class, void *ue_header, void *context)
{
 return __gxx_personality_v0(version, actions, exception_class, ue_header, context);
}

// Function: <EXTERNAL>::__cxa_throw @ 0x10ac0
void __cxa_throw(void *param_1,void *param_2,void *param_3)
{
 __cxa_throw(param_1,param_2,param_3);
}

// Function: <EXTERNAL>::__cxa_throw (wrapper) @ 0x10ac0
void __cxa_throw_wrapper(void *param_1,void *param_2,void *param_3)
{
 __cxa_throw(param_1,param_2,param_3);
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10acc
int __aeabi_dcmpgt(double param_1, double param_2)
{
 return __aeabi_dcmpgt(param_1, param_2);
}

// Function: <EXTERNAL>::strncpy @ 0x10ad8
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x10af0
int __printf_chk(int flag, const char *format, ...)
{
 return __printf_chk(flag, format);
}

// Function: test_cpp_exception @ 0x10b08
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,(void *)0,(void *)0);
}

// Function: test_cpp_oo_features @ 0x1117c
void test_cpp_oo_features(void);

// Function: main @ 0x10bbc
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x10bcc
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std_ios_base_Init_Init((Init *)&std___ioinit);
 return;
}

// Function: _start @ 0x10bfc
void _start(unsigned int param_1,unsigned int param_2)
{
 char **stack_ptr = (char **)0x4;
 __libc_start_main((int (*)(int, char **))main,param_2,stack_ptr,(void (*)(void))0,(void (*)(void))0,(void (*)(void))0,stack_ptr);
 abort();
}

// External function declaration
void __gmon_start__(void);



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
 return LifecycleClass_instance.instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10d7c
void call_virtual_func(Base *param_1,int param_2)
{
 void **vtable = *(void ***)param_1;
 void (*func)() = (void (*)())*vtable;
 func();
 return;
}

// Function: test_cpp_virtual_func @ 0x10d88
void test_cpp_virtual_func(void)
{
 char **local_18;
 char **local_14;
 unsigned int local_10;
 int local_c;
 local_c = 0;
 local_18 = (char **)&PTR_virtual_func_00011af0;
 local_14 = (char **)&PTR_virtual_func_00011b08;
 local_10 = 3;
 call_virtual_func((Base *)&local_18,5);
 call_virtual_func((Base *)&local_14,5);
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
 unsigned int in_r0;
 int iVar1;
 unsigned int uVar2;
 int in_r1;
 unsigned int extraout_r1;
 int in_r2;
 int iVar3;
 unsigned long long uVar4;
 int iVar5;
 int iVar6;
 int local_1c;
 int local_18;
 iVar3 = 0;
 iVar1 = template_max_int_(3,7);
 uVar2 = 0;
 template_max_double_((double)in_r0,(double)in_r2);
 iVar5 = 10;
 iVar6 = 0x14;
 local_1c = iVar5;
 local_18 = iVar6;
 template_swap_int_(&local_1c,&local_18);
 uVar4 = __aeabi_d2iz((double)uVar2);
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
 int *piVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 int iVar6;
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)&PTR__RTTIDerivedA_00011c68;
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)&PTR__RTTIDerivedB_00011c7c;
 iVar3 = std_type_info_operator_eq
 ((type_info *)(*piVar1 + -4),(type_info *)&RTTIDerivedA_typeinfo);
 if (iVar3 == 0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 iVar4 = std_type_info_operator_eq
 ((type_info *)(*piVar2 + -4),(type_info *)&RTTIDerivedB_typeinfo);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 0x14;
 }
 iVar4 = (int)__dynamic_cast(piVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 100;
 }
 iVar4 = (int)__dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar6 = *piVar1;
 if (iVar4 != 0) {
 iVar3 = iVar3 + 200;
 }
  __s = *(char **)(*(int *)(iVar6 + -4) + 4);
  if (*__s == '*') {
    __s = __s + 1;
  }
  sVar5 = strlen(__s);
  (*(void (*)(void *))(iVar6 + 4))(piVar1);
  (*(void (*)(void *))(*piVar2 + 4))(piVar2);
  return iVar3 + (int)sVar5;
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
 std_unique_ptr_int___std__default_delete_int______unique_ptr
 ((unique_ptr_int___std__default_delete_int____ *)&local_10);
 std_unique_ptr_int_std__default_delete_int____unique_ptr
 ((unique_ptr_int_std__default_delete_int__ *)&local_14);
 std_unique_ptr_int_std__default_delete_int____unique_ptr
 ((unique_ptr_int_std__default_delete_int__ *)&local_18);
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
 char **local_24 [2];
 char **local_1c;
 char **local_14;
 unsigned int local_10;
 int local_c;
 local_c = 0;
 local_14 = &PTR_func_00011c54;
 local_24[0] = &PTR_func_00011c20;
 local_1c = &PTR_func_00011c38;
 local_10 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_14);
 local_10 = 100;
 iVar2 = DiamondDerived_func((DiamondDerived *)&local_14);
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
 puts((char *)&DAT_00011866);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,(char *)&DAT_0001188a,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,(char *)&DAT_000118a8,uVar1);
 test_cpp_virtual_func();
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,(char *)&DAT_000118e0,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,(char *)&DAT_000118fc,uVar1);
 uVar1 = test_cpp_operator_overload();
 __printf_chk(1,(char *)&DAT_00011919,uVar1);
 test_cpp_template_func();
 test_cpp_template_class();
 uVar1 = test_cpp_lambda();
 __printf_chk(1,(char *)&DAT_0001196d,uVar1);
 test_cpp_exception();
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,(char *)&DAT_000119a6,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,(char *)&DAT_000119c3,uVar1);
 return;
}

// Function: Base_virtual_func @ 0x112b0
int Base_virtual_func(Base *param_1,int param_2)
{
 return param_2 + 1;
}

// Function: Base_getName @ 0x112b8
unsigned char * Base_getName(void)
{
 return (unsigned char *)&DAT_00011854;
}

// Function: Base__Base @ 0x112c4
void Base__Base(Base *param_1)
{
 (void)param_1;
 return;
}

// Function: Derived_virtual_func @ 0x112c8
int Derived_virtual_func(Derived *param_1,int param_2)
{
 return param_2 * *(int *)(param_1 + 4);
}

// Function: Derived_getName @ 0x112d4
char * Derived_getName(void)
{
 return "Derived";
}

// Function: MultiDerived_funcA @ 0x112e0
unsigned int MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived_funcB @ 0x112e8
unsigned int MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived_funcB_v2 @ 0x112f0
unsigned int MultiDerived_funcB_v2(MultiDerived *param_1)
{
 (void)param_1;
 return 0x28;
}

// Function: VirtualBase_func @ 0x112f8
unsigned int VirtualBase_func(void)
{
 return 100;
}

// Function: VirtualBase__VirtualBase @ 0x11300
void VirtualBase__VirtualBase(VirtualBase *param_1)
{
 (void)param_1;
 return;
}

// Function: MiddleA_func @ 0x11304
int MiddleA_func(MiddleA *param_1)
{
 return *(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 4) + 0x96;
}

// Function: MiddleA_func @ 0x1131c
void MiddleA_func_v2(MiddleA *param_1)
{
 MiddleA_func(param_1 + *(int *)(*(int *)param_1 + -0xc));
 return;
}

// Function: MiddleB_func @ 0x11330
int MiddleB_func(MiddleB *param_1)
{
 return *(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 4) + 200;
}

// Function: MiddleB_func @ 0x11348
void MiddleB_func_v2(MiddleB *param_1)
{
 MiddleB_func(param_1 + *(int *)(*(int *)param_1 + -0xc));
 return;
}

// Function: DiamondDerived_func @ 0x1135c
int DiamondDerived_func(DiamondDerived *param_1)
{
 return *(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived_func @ 0x11374
void DiamondDerived_func_v2(DiamondDerived *param_1)
{
 DiamondDerived_func(param_1 + *(int *)(*(int *)param_1 + -0xc));
 return;
}

// Function: DiamondDerived_func @ 0x11388
void DiamondDerived_func_v3(DiamondDerived *param_1)
{
 DiamondDerived_func(param_1 + -8);
 return;
}

// Function: MiddleA__MiddleA @ 0x11390
void MiddleA__MiddleA(MiddleA *param_1)
{
 *(char **)param_1 = PTR_func_00011b2c;
 *(char **)(param_1 + 8) = PTR_func_00011b48;
 return;
}

// Function: MiddleA__MiddleA @ 0x113a8
void MiddleA__MiddleA_v2(MiddleA *param_1)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)param_1 + -0x10);
 *(char **)(param_1 + iVar1) = PTR_func_00011b2c;
 *(char **)(param_1 + iVar1 + 8) = PTR_func_00011b48;
 return;
}

// Function: MiddleB__MiddleB @ 0x113d0
void MiddleB__MiddleB(MiddleB *param_1)
{
 *(char **)param_1 = PTR_func_00011b68;
 *(char **)(param_1 + 8) = PTR_func_00011b84;
 return;
}

// Function: MiddleB__MiddleB @ 0x113e8
void MiddleB__MiddleB_v2(MiddleB *param_1)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)param_1 + -0x10);
 *(char **)(param_1 + iVar1) = PTR_func_00011b68;
 *(char **)(param_1 + iVar1 + 8) = PTR_func_00011b84;
 return;
}

// Function: RTTIDerivedA_getType @ 0x11410
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB_getType @ 0x11418
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: RTTIDerivedB__RTTIDerivedB @ 0x11420
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *param_1)
{
 (void)param_1;
 return;
}

// Function: RTTIDerivedA__RTTIDerivedA @ 0x11424
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *param_1)
{
 (void)param_1;
 return;
}

// Function: MultiDerived__MultiDerived @ 0x11428
void MultiDerived__MultiDerived(MultiDerived *param_1)
{
 (void)param_1;
 return;
}

// Function: MultiDerived__MultiDerived @ 0x1142c
MultiDerived * MultiDerived__MultiDerived_v2(MultiDerived *param_1)
{
 return param_1 + -8;
}

// Function: Derived__Derived @ 0x11434
void Derived__Derived(Derived *param_1)
{
 (void)param_1;
 return;
}

// Function: Base__Base @ 0x11438
Base * Base__Base_v2(Base *param_1)
{
 operator_delete(param_1,4);
 return param_1;
}

// Function: Derived__Derived @ 0x11450
Derived * Derived__Derived_v2(Derived *param_1)
{
 operator_delete(param_1,8);
 return param_1;
}

// Function: MultiDerived__MultiDerived @ 0x11468
MultiDerived * MultiDerived__MultiDerived_v3(MultiDerived *param_1)
{
 operator_delete(param_1,0x10);
 return param_1;
}

// Function: MultiDerived__MultiDerived @ 0x11480
void MultiDerived__MultiDerived_v4(MultiDerived *param_1)
{
 MultiDerived__MultiDerived_v2(param_1 + -8);
 return;
}

// Function: VirtualBase__VirtualBase @ 0x11488
VirtualBase * VirtualBase__VirtualBase_v2(VirtualBase *param_1)
{
 operator_delete(param_1,8);
 return param_1;
}

// Function: RTTIDerivedB__RTTIDerivedB @ 0x114a0
RTTIDerivedB * RTTIDerivedB__RTTIDerivedB_v2(RTTIDerivedB *param_1)
{
 operator_delete(param_1,4);
 return param_1;
}

// Function: RTTIDerivedA__RTTIDerivedA @ 0x114b8
RTTIDerivedA * RTTIDerivedA__RTTIDerivedA_v2(RTTIDerivedA *param_1)
{
 operator_delete(param_1,4);
 return param_1;
}

// Function: MiddleA__MiddleA @ 0x114d0
MiddleA * MiddleA__MiddleA_v5(MiddleA *param_1)
{
 *(char **)param_1 = PTR_func_00011b2c;
 *(char **)(param_1 + 8) = PTR_func_00011b48;
 operator_delete(param_1,0x10);
 return param_1;
}

// Function: MiddleA__MiddleA @ 0x114fc
void MiddleA__MiddleA_v3(MiddleA *param_1)
{
 MiddleA__MiddleA_v2(param_1 + *(int *)(*(int *)param_1 + -0x10));
 return;
}

// Function: MiddleB__MiddleB @ 0x11510
MiddleB * MiddleB__MiddleB_v5(MiddleB *param_1)
{
 *(char **)param_1 = PTR_func_00011b68;
 *(char **)(param_1 + 8) = PTR_func_00011b84;
 operator_delete(param_1,0x10);
 return param_1;
}

// Function: MiddleB__MiddleB @ 0x1153c
void MiddleB__MiddleB_v3(MiddleB *param_1)
{
 MiddleB__MiddleB_v2(param_1 + *(int *)(*(int *)param_1 + -0x10));
 return;
}

// Function: MiddleA__MiddleA @ 0x11550
void MiddleA__MiddleA_v4(MiddleA *param_1)
{
 int *in_r1;
 int iVar1;
 iVar1 = *in_r1;
 *(int *)param_1 = iVar1;
 *(int *)(param_1 + *(int *)(iVar1 + -0xc)) = in_r1[1];
 return;
}

// Function: MiddleB__MiddleB @ 0x11568
void MiddleB__MiddleB_v4(MiddleB *param_1)
{
 int *in_r1;
 int iVar1;
 iVar1 = *in_r1;
 *(int *)param_1 = iVar1;
 *(int *)(param_1 + *(int *)(iVar1 + -0xc)) = in_r1[1];
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
 if (__aeabi_dcmpgt(param_1, param_2)) {
 return param_1;
 }
 return param_2;
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

// Function: Container_int_::Container @ 0x115d0
void Container_int__Container(Container_int_ *param_1)
{
 *(unsigned int *)(param_1 + 0x28) = 0;
 return;
}

// Function: Container_int_::push @ 0x115dc
void Container_int__push(Container_int_ *param_1,int param_2)
{
 int iVar1;
 iVar1 = *(int *)(param_1 + 0x28);
 if (iVar1 < 10) {
 *(int *)(param_1 + 0x28) = iVar1 + 1;
 *(int *)(param_1 + iVar1 * 4) = param_2;
 }
 return;
}

// Function: Container_int_::get @ 0x115f4
unsigned int Container_int__get(Container_int_ *param_1,int param_2)
{
 if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x28))) {
 return *(unsigned int *)(param_1 + param_2 * 4);
 }
 return 0;
}

// Function: Container_int_::getSize @ 0x11618
unsigned int Container_int__getSize(Container_int_ *param_1)
{
 return *(unsigned int *)(param_1 + 0x28);
}

// Function: Container_double_::Container @ 0x11620
void Container_double__Container(Container_double_ *param_1)
{
 *(unsigned int *)(param_1 + 0x50) = 0;
 return;
}

// Function: Container_double_::push @ 0x1162c
void Container_double__push(Container_double_ *param_1,double param_2)
{
 unsigned int *puVar1;
 int iVar2;
 unsigned int in_r2;
 unsigned int in_r3;
 iVar2 = *(int *)(param_1 + 0x50);
 if (9 < iVar2) {
 return;
 }
 *(int *)(param_1 + 0x50) = iVar2 + 1;
 puVar1 = (unsigned int *)(param_1 + iVar2 * 8);
 *puVar1 = in_r2;
 puVar1[1] = in_r3;
 return;
}

// Function: Container_double_::get @ 0x1164c
unsigned long long Container_double__get(Container_double_ *param_1,int param_2)
{
 if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x50))) {
 return *(unsigned long long *)(param_1 + param_2 * 8);
 }
 return 0;
}

// Function: Container_double_::getSize @ 0x11678
unsigned int Container_double__getSize(Container_double_ *param_1)
{
 return *(unsigned int *)(param_1 + 0x50);
}

// Function: std::unique_ptr<int,std::default_delete<int>>::~unique_ptr @ 0x11680
unique_ptr_int_std__default_delete_int__ *
std_unique_ptr_int_std__default_delete_int____unique_ptr
 (unique_ptr_int_std__default_delete_int__ *param_1)
{
 if (*(void **)param_1 != (void *)0x0) {
 operator_delete(*(void **)param_1,4);
 }
 return param_1;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr @ 0x116a4
unique_ptr_int___std__default_delete_int____ *
std_unique_ptr_int___std__default_delete_int______unique_ptr
 (unique_ptr_int___std__default_delete_int____ *param_1)
{
 if (*(void **)param_1 != (void *)0x0) {
 operator_delete__(*(void **)param_1);
 }
 return param_1;
}

// Function: DiamondDerived__DiamondDerived @ 0x116c4
DiamondDerived * DiamondDerived__DiamondDerived(DiamondDerived *param_1)
{
 int in_r1;
 unsigned int *in_r2;
 char **ppuVar1;
 char *puVar2;
 if (in_r1 == 0) {
 ppuVar1 = (char **)*in_r2;
 }
 else {
 ppuVar1 = &PTR_func_00011c20;
 }
 *(char ***)param_1 = ppuVar1;
 if (in_r1 == 0) {
 puVar2 = ppuVar1[-3];
 ppuVar1 = (char **)in_r2[5];
 }
 else {
 puVar2 = (char *)0x10;
 ppuVar1 = &PTR_func_00011c54;
 }
 *(char ***)(param_1 + (int)puVar2) = ppuVar1;
 if (in_r1 == 0) {
 ppuVar1 = (char **)in_r2[6];
 }
 else {
 ppuVar1 = &PTR_func_00011c38;
 }
 *(char ***)(param_1 + 8) = ppuVar1;
 MiddleB__MiddleB_v2((MiddleB *)(param_1 + 8));
 MiddleA__MiddleA_v2((MiddleA *)param_1);
 return param_1;
}

// Function: DiamondDerived__DiamondDerived @ 0x11748
void DiamondDerived__DiamondDerived_v2(DiamondDerived *param_1)
{
 DiamondDerived__DiamondDerived(param_1);
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x11754
void DiamondDerived__DiamondDerived_v3(DiamondDerived *param_1)
{
 DiamondDerived__DiamondDerived(param_1 + -8);
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x1175c
void DiamondDerived__DiamondDerived_v4(DiamondDerived *param_1)
{
 DiamondDerived__DiamondDerived(param_1 + *(int *)(*(int *)param_1 + -0x10));
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x11770
DiamondDerived * DiamondDerived__DiamondDerived_v5(DiamondDerived *param_1)
{
 DiamondDerived__DiamondDerived(param_1);
 operator_delete(param_1,0x18);
 return param_1;
}

// Function: DiamondDerived__DiamondDerived @ 0x11790
void DiamondDerived__DiamondDerived_v6(DiamondDerived *param_1)
{
 DiamondDerived__DiamondDerived(param_1 + -8);
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x11798
void DiamondDerived__DiamondDerived_v7(DiamondDerived *param_1)
{
 DiamondDerived__DiamondDerived(param_1 + *(int *)(*(int *)param_1 + -0x10));
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x117ac
void DiamondDerived__DiamondDerived_v8(DiamondDerived *param_1)
{
 DiamondDerived__DiamondDerived(param_1);
 return;
}

// Function: _fini @ 0x117b8
void _fini(void)
{
 return;
}

