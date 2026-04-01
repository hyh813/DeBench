/* Auto-injected type definitions by preprocessor */
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
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;

struct Base {
 long vtable;
 int value;
};

struct Derived {
 long vtable;
 int value;
};

struct MultiDerived {
 long vtable;
 int value;
};

struct MiddleA {
 long vtable;
 int value;
};

struct MiddleB {
 long vtable;
 int value;
};

struct DiamondDerived {
 long vtable;
 int value;
};

struct RTTIBase {
 long vtable;
};

struct RTTIDerivedA {
 long vtable;
};

struct RTTIDerivedB {
 long vtable;
};

struct Container_int_ {
 char data[40];
 unsigned int size;
};

struct Container_double_ {
 char data[80];
 unsigned int size;
};
typedef struct Init Init;
struct LifecycleClass {
 int instance_count;
};
extern int LifecycleClass__instance_count;

/* Type info structures */
extern void *int__typeinfo;
extern void *RTTIBase__typeinfo;
extern void *RTTIDerivedA__typeinfo;
extern void *RTTIDerivedB__typeinfo;

/* Global variables */
extern int LifecycleClass__instance_count;
extern int completed_0;
extern void *__dso_handle;
extern Init std___ioinit;
extern long ___stack_chk_guard;
extern void **PTR_virtual_func_00113958;
extern void **PTR_virtual_func_00113988;
extern void **PTR_func_00113b30;
extern void *PTR__RTTIDerivedA_00113b58;
extern void *PTR__RTTIDerivedB_00113b80;
extern char DAT_00102130[];
extern char DAT_00102148[];
extern char DAT_00102170[];
extern char DAT_00102190[];
extern char DAT_001021b0[];
extern char DAT_001021d0[];
extern char DAT_001021f0[];
extern char DAT_00102210[];
extern char DAT_00102230[];
extern char DAT_00102250[];
extern char DAT_00102270[];
extern char DAT_00102290[];
extern char DAT_001022b0[];
extern char DAT_001022d0[];

// Decompiled by BinaryAI
// SHA256: 02a1cabe0fe00f6c2b4447d507395f198ebea74125e99fad8cd9bf08ec08f66f

// Forward declaration
int call_weak_fn(void);

// Function: _init @ 0x101458
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn();
 return iVar1;
}

// Function: FUN_00101470 @ 0x101470
void FUN_00101470(void)
{
 ((void (*)(void))0x0)();
 return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x101490
void * operator_new__(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = operator_new__(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::puts @ 0x1014a0
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::strlen @ 0x1014b0
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1014c0
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x1014d0
void __cxa_begin_catch(void)
{
 __cxa_begin_catch();
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x1014e0
void *__cxa_allocate_exception(unsigned long size)
{
 return __cxa_allocate_exception(size);
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1014f0
void __cxa_finalize(void *param_1)
{
 __cxa_finalize(param_1);
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x101500
int __libc_start_main(void *main_fn, void *argc, void *argv, void *init, void *fini, void *rtld_fini, void *stack_end)
{
 return __libc_start_main(main_fn, argc, argv, init, fini, rtld_fini, stack_end);
}

// Function: <EXTERNAL>::operator.new @ 0x101510
void * operator_new(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = operator_new(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x101520
void operator_delete(void *param_1,unsigned long param_2)
{
 operator_delete(param_1,param_2);
 return;
}

// Function: <EXTERNAL>::strncpy @ 0x101530
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x101540
void *__dynamic_cast(void *param_1, void *param_2, void *param_3, int param_4)
{
 return __dynamic_cast(param_1, param_2, param_3, param_4);
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x101550
void __cxa_atexit(void *func, void *arg, void *dso_handle)
{
 __cxa_atexit(func, arg, dso_handle);
 return;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x101560
void operator_delete__(void *param_1)
{
 operator_delete__(param_1);
 return;
}

// Function: <EXTERNAL>::strcmp @ 0x101570
int strcmp(char *__s1,char *__s2)
{
 int iVar1;
 iVar1 = strcmp(__s1,__s2);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x101580
void __cxa_rethrow(void)
{
 __cxa_rethrow();
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x101590
void std_ios_base_Init_Init(Init *param_1)
{
 return;
}

// Function: <EXTERNAL>::abort @ 0x1015a0
void abort(void)
{
 abort();
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x1015b0
void __cxa_end_catch(void)
{
 __cxa_end_catch();
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x1015c0
void __gxx_personality_v0(void)
{
 __gxx_personality_v0();
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x1015d0
void __cxa_throw(void *exception, void *tinfo, void *dest)
{
 __cxa_throw(exception, tinfo, dest);
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x1015e0
void _Unwind_Resume(void)
{
 _Unwind_Resume();
}

// Function: <EXTERNAL>::__printf_chk @ 0x1015f0
void __printf_chk(void)
{
 __printf_chk();
 return;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x101600
void __gmon_start__(void)
{
 __gmon_start__();
 return;
}

// Forward declaration
unsigned long long main(void);

// Function: _start @ 0x101640
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 void *auxv = (void *)0x1000;
 __libc_start_main((void *)main,(void *)param_9,(void *)0,(void *)0,(void *)0,(void *)param_1,(void *)0);
 abort();
}

// Function: call_weak_fn @ 0x101674
int call_weak_fn(void)
{
 __gmon_start__();
 return 0;
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
 return 0;
}

// Function: test_cpp_constructor @ 0x1017cc
int test_cpp_constructor(void)
{
 int iVar1;
 void *pvVar2;
 pvVar2 = operator_new__(0x14);
 *(unsigned int *)((long)pvVar2 + 4) = 10;
 *(unsigned int *)((long)pvVar2 + 8) = 0x14;
 *(unsigned int *)((long)pvVar2 + 0xc) = 0x1e;
 *(unsigned int *)((long)pvVar2 + 0x10) = 0x28;
 iVar1 = LifecycleClass__instance_count + 0x15;
 LifecycleClass__instance_count = LifecycleClass__instance_count + 1;
 operator_delete__(pvVar2);
 LifecycleClass__instance_count = LifecycleClass__instance_count + -1;
 return iVar1 + LifecycleClass__instance_count * 1000;
}

// Function: call_virtual_func @ 0x101838
int call_virtual_func(void *param_1,int param_2)
{
 return (***(void ***)param_1)(param_1,param_2);
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
 local_20 = (char **)&PTR_virtual_func_00113958;
 local_18 = (char **)&PTR_virtual_func_00113988;
 local_10 = 3;
 iVar1 = call_virtual_func((void *)local_20,5);
 iVar2 = call_virtual_func((void *)local_18,5);
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

// Forward declaration
int DiamondDerived_func(DiamondDerived *param_1);

// Function: test_cpp_diamond_inheritance @ 0x1018ec
void test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 char **local_18;
 unsigned int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_18 = (char **)&PTR_func_00113b30;
 local_10 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)local_18);
 local_10 = 100;
 iVar2 = DiamondDerived_func((DiamondDerived *)local_18);
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

// Forward declaration
int template_max_int_(int param_1,int param_2);
double template_max_double_(double param_1,double param_2);
void template_swap_int_(int *param_1,int *param_2);

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
 __cxa_throw(puVar1,&int__typeinfo,0);
 return;
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
 long lVar4;
 size_t sVar5;
 int iVar6;
 char *__s1;
 long lVar7;
 long lVar8;
 plVar2 = (long *)operator_new(8);
 *plVar2 = (long)&PTR__RTTIDerivedA_00113b58;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedB_00113b80;
 lVar7 = *plVar2;
 lVar8 = *plVar3;
 __s1 = *(char **)((char *)lVar7);
 iVar6 = 10;
 if ((__s1 != "12RTTIDerivedA") && (iVar6 = 0, *__s1 != '*')) {
 iVar1 = strcmp(__s1,"12RTTIDerivedA");
 iVar6 = 10;
 if (iVar1 != 0) {
 iVar6 = 0;
 }
 }
 lVar4 = (long)(intptr_t)(__dynamic_cast((char *)plVar2, RTTIBase__typeinfo, RTTIDerivedA__typeinfo, 0));
 iVar1 = iVar6 + 0x78;
 if (lVar4 == 0) {
 iVar1 = iVar6 + 0x14;
 }
 lVar4 = (long)(intptr_t)(__dynamic_cast((char *)plVar3, RTTIBase__typeinfo, RTTIDerivedB__typeinfo, 0));
 iVar6 = iVar1 + 200;
 if (lVar4 == 0) {
 iVar6 = iVar1;
 }
 if (*__s1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar5 = strlen(__s1);
 ((void (*)(void *))(*(long *)((char *)lVar7 + 8)))(plVar2);
 ((void (*)(void *))(*(long *)((char *)lVar8 + 8)))(plVar3);
 return iVar6 + (int)sVar5;
}

// Function: test_cpp_oo_features @ 0x101c8c
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 puts((char *)&DAT_00102148);
 uVar1 = test_cpp_member_func();
 __printf_chk();
 uVar1 = test_cpp_constructor();
 __printf_chk();
 test_cpp_virtual_func();
 __printf_chk();
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk();
 test_cpp_diamond_inheritance();
 __printf_chk();
 __printf_chk();
 test_cpp_template_func();
 __printf_chk();
 __printf_chk();
 __printf_chk();
 test_cpp_exception();
 __printf_chk();
 uVar1 = test_cpp_smart_ptr();
 __printf_chk();
 uVar1 = test_cpp_rtti();
 __printf_chk();
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
 __cxa_atexit((void *)std_ios_base_Init_Init,&std___ioinit,&__dso_handle);
 return;
}

// Function: Base::virtual_func @ 0x101e18
int Base_virtual_func(Base *param_1,int param_2)
{
 return param_2 + 1;
}

// Function: Base::getName @ 0x101e20
unsigned char * Base_getName(void)
{
 return (unsigned char *)&DAT_00102130;
}

// Function: Base::~Base @ 0x101e2c
void Base__Base(Base *param_1)
{
 return;
}

// Function: Derived::virtual_func @ 0x101e30
int Derived_virtual_func(Derived *param_1,int param_2)
{
 return param_2 * *(int *)(param_1 + 8);
}

// Function: Derived::getName @ 0x101e3c
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

// Function: MultiDerived_funcB_2 @ 0x101e58
unsigned long long MultiDerived_funcB_2(MultiDerived *param_1)
{
 return 0x28;
}

// Function: MiddleA_func @ 0x101e60
int MiddleA_func(MiddleA *param_1)
{
 return *(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) + 0x96;
}

// Function: MiddleA_func @ 0x101e78
int MiddleA_func_2(MiddleA *param_1)
{
 return *(int *)(param_1 + *(long *)(*(long *)(param_1 + *(long *)(*(long *)param_1 + -0x18)) + -0x18) +
 *(long *)(*(long *)param_1 + -0x18) + 8) + 0x96;
}

// Function: MiddleB_func @ 0x101e9c
int MiddleB_func(MiddleB *param_1)
{
 return *(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) + 200;
}

// Function: MiddleB_func_2 @ 0x101eb4
int MiddleB_func_2(MiddleB *param_1)
{
 return *(int *)(param_1 + *(long *)(*(long *)(param_1 + *(long *)(*(long *)param_1 + -0x18)) + -0x18) +
 *(long *)(*(long *)param_1 + -0x18) + 8) + 200;
}

// Function: DiamondDerived_func @ 0x101ed8
int DiamondDerived_func(DiamondDerived *param_1)
{
 return *(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived_func_2 @ 0x101ef0
int DiamondDerived_func_2(DiamondDerived *param_1)
{
 return *(int *)(param_1 + *(long *)(*(long *)(param_1 + *(long *)(*(long *)param_1 + -0x18)) + -0x18) +
 *(long *)(*(long *)param_1 + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived_func_3 @ 0x101f14
int DiamondDerived_func_3(DiamondDerived *param_1)
{
 return *(int *)(param_1 + *(long *)(*(long *)(param_1 + -0x10) + -0x18) + -8) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x101f2c
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x101f34
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101f3c
void RTTIDerivedB__RTTIDerivedB_2(RTTIDerivedB *param_1)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101f40
void RTTIDerivedA__RTTIDerivedA_2(RTTIDerivedA *param_1)
{
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x101f44
void DiamondDerived__DiamondDerived(DiamondDerived *param_1)
{
 return;
}

// Function: DiamondDerived__DiamondDerived_2 @ 0x101f48
void DiamondDerived__DiamondDerived_2(DiamondDerived *param_1)
{
 return;
}

// Function: DiamondDerived__DiamondDerived_3 @ 0x101f4c
void DiamondDerived__DiamondDerived_3(DiamondDerived *param_1)
{
 return;
}

// Function: MultiDerived__MultiDerived @ 0x101f50
void MultiDerived__MultiDerived(MultiDerived *param_1)
{
 return;
}

// Function: MultiDerived__MultiDerived_2 @ 0x101f54
void MultiDerived__MultiDerived_2(MultiDerived *param_1)
{
 return;
}

// Function: Derived::~Derived @ 0x101f58
void Derived__Derived(Derived *param_1)
{
 return;
}

// Function: Base::~Base @ 0x101f5c
void Base__Base_2(Base *param_1)
{
 operator_delete(param_1,8);
 return;
}

// Function: Derived::~Derived @ 0x101f74
void Derived__Derived_2(Derived *param_1)
{
 operator_delete(param_1,0x10);
 return;
}

// Function: MultiDerived__MultiDerived_3 @ 0x101f8c
void MultiDerived__MultiDerived_3(MultiDerived *param_1)
{
 operator_delete(param_1,0x20);
 return;
}

// Function: MultiDerived__MultiDerived_4 @ 0x101fa4
void MultiDerived__MultiDerived_4(MultiDerived *param_1)
{
 operator_delete(param_1 + -0x10,0x20);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101fc0
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *param_1)
{
 operator_delete(param_1,8);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101fd8
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *param_1)
{
 operator_delete(param_1,8);
 return;
}

// Function: DiamondDerived__DiamondDerived_4 @ 0x101ff0
void DiamondDerived__DiamondDerived_4(DiamondDerived *param_1)
{
 operator_delete(param_1,0x30);
 return;
}

// Function: DiamondDerived__DiamondDerived_5 @ 0x102008
void DiamondDerived__DiamondDerived_5(DiamondDerived *param_1)
{
 operator_delete(param_1 + *(long *)(*(long *)param_1 + -0x20),0x30);
 return;
}

// Function: DiamondDerived__DiamondDerived_6 @ 0x10202c
void DiamondDerived__DiamondDerived_6(DiamondDerived *param_1)
{
 operator_delete(param_1 + -0x10,0x30);
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

// Function: Container_int__Container @ 0x102074
void Container_int__Container(Container_int_ *param_1)
{
 *(unsigned int *)(param_1 + 0x28) = 0;
 return;
}

// Function: Container_int__push @ 0x10207c
void Container_int__push(Container_int_ *param_1,int param_2)
{
 int iVar1;
 iVar1 = *(int *)(param_1 + 0x28);
 if (iVar1 < 10) {
 *(int *)(param_1 + 0x28) = iVar1 + 1;
 *(int *)(param_1 + (long)iVar1 * 4) = param_2;
 }
 return;
}

// Function: Container_int__get @ 0x102098
unsigned int Container_int__get(Container_int_ *param_1,int param_2)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_2) && (uVar1 = 0, param_2 < *(int *)(param_1 + 0x28))) {
 uVar1 = *(unsigned int *)(param_1 + (long)param_2 * 4);
 }
 return uVar1;
}

// Function: Container_int__getSize @ 0x1020c0
unsigned int Container_int__getSize(Container_int_ *param_1)
{
 return *(unsigned int *)(param_1 + 0x28);
}

// Function: Container_double__Container @ 0x1020c8
void Container_double__Container(Container_double_ *param_1)
{
 *(unsigned int *)(param_1 + 0x50) = 0;
 return;
}

// Function: Container_double__push @ 0x1020d0
void Container_double__push(Container_double_ *param_1,double param_2)
{
 int iVar1;
 iVar1 = *(int *)(param_1 + 0x50);
 if (iVar1 < 10) {
 *(int *)(param_1 + 0x50) = iVar1 + 1;
 *(double *)(param_1 + (long)iVar1 * 8) = param_2;
 }
 return;
}

// Function: Container_double__get @ 0x1020ec
unsigned long long Container_double__get(Container_double_ *param_1,int param_2)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x50))) {
 uVar1 = *(unsigned long long *)(param_1 + (long)param_2 * 8);
 }
 return uVar1;
}

// Function: Container_double__getSize @ 0x10210c
unsigned int Container_double__getSize(Container_double_ *param_1)
{
 return *(unsigned int *)(param_1 + 0x50);
}

// Function: _fini @ 0x102114
void _fini(void)
{
 return;
}

