/* Auto-injected type definitions by preprocessor */
#pragma GCC diagnostic ignored "-Wimplicit-function-declaration"
#pragma GCC diagnostic ignored "-Wint-conversion"
#pragma GCC diagnostic ignored "-Wpointer-to-int-cast"
#pragma GCC diagnostic ignored "-Wint-to-pointer-cast"
#pragma GCC diagnostic ignored "-Wcast-function-type"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <unistd.h>
#include <stddef.h>
#include <ctype.h>
#include <dlfcn.h>

/* Explicit declarations for standard library functions */
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern size_t strlen(const char *s);

// Type definitions
typedef unsigned int uint;

// Decompiled by BinaryAI
// SHA256: 7d2eb3f67d7b79284ccda07814eb56f8d50035e18d0f3d5748618154554cf5d9

// Function: _init @ 0x102000
int _init(void *ctx)
{
 (void)ctx;
 return 0;
}

// External function declarations
extern void *__libc_start_main(void *main, unsigned long long argc, void *argv, void *init, void *fini, void *rtld_fini, void *stack_end);
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void __cxa_finalize(void *dso_handle);

// C++ runtime function stubs
void *operator_new__(unsigned long param_1) { return malloc(param_1); }
void *operator_new(unsigned long param_1) { return malloc(param_1); }
void operator_delete(void *param_1) { free(param_1); }
void operator_delete__(void *param_1) { free(param_1); }
void *__cxa_allocate_exception(size_t size) { return malloc(size); }
void __cxa_throw(void *exc, void *type, void *dest) { (void)exc; (void)type; (void)dest; }
void __cxa_begin_catch(void *exc) { (void)exc; }
void __cxa_end_catch(void) { }
void __cxa_rethrow(void) { }
void _Unwind_Resume(void *exc) { (void)exc; }
void *__dynamic_cast(void *src, void *src_type, void *dst_type, unsigned long dst_class) { (void)src; (void)src_type; (void)dst_type; (void)dst_class; return src; }

// Forward declarations for classes
typedef struct Base { char data[16]; } Base;
typedef struct Derived { char data[32]; } Derived;
typedef struct MultiDerived { char data[64]; } MultiDerived;
typedef struct DiamondDerived { char data[64]; } DiamondDerived;
typedef struct BaseA { char data[16]; } BaseA;
typedef struct BaseB { char data[16]; } BaseB;
typedef struct MiddleA { char data[64]; } MiddleA;
typedef struct MiddleB { char data[64]; } MiddleB;
typedef struct VirtualBase { char data[32]; } VirtualBase;
typedef struct RTTIBase { char data[32]; } RTTIBase;
typedef struct RTTIDerivedA { char data[32]; } RTTIDerivedA;
typedef struct RTTIDerivedB { char data[32]; } RTTIDerivedB;
typedef struct Container_int_ { char data[128]; } Container_int_;
typedef struct Container_double_ { char data[128]; } Container_double_;

// Function: FUN_00102020 @ 0x102020
void FUN_00102020(void)
{
 (*(void (*)(void))0x0)();
 return;
}

// Global variables
char completed_0 = 0;
void *__dso_handle = 0;
char std___ioinit[64];
int LifecycleClass_instance_count = 0;

// Pointer declarations
void *PTR_virtual_func_001059c8 = 0;
void *PTR_virtual_func_00105a08 = 0;
void *PTR_funcB_00105a80 = 0;
void *PTR_funcA_00105a50 = 0;
void *PTR_func_00105bc0 = 0;
void *PTR_func_00105b58 = 0;
void *PTR__RTTIBase_00105d78 = 0;
void *PTR__RTTIBase_00105da0 = 0;
void *RTTIBase_typeinfo = 0;
void *RTTIDerivedA_typeinfo = 0;
void *RTTIDerivedB_typeinfo = 0;

// Data declarations
char DAT_001031e1[] = "Testing C++ OO features";
char DAT_0010307d[] = "test_cpp_member_func: %lu\n";
char DAT_0010309b[] = "test_cpp_constructor: %lu\n";
char DAT_001030b7[] = "test_cpp_virtual_func: %lu\n";
char DAT_001030d3[] = "test_cpp_multiple_inheritance: %lu\n";
char DAT_001030ef[] = "test_cpp_diamond_inheritance: %lu\n";
char DAT_0010310c[] = "test_cpp_operator_overload: %lu\n";
char DAT_00103128[] = "test_cpp_template_func: %lu\n";
char DAT_00103144[] = "test_cpp_template_class: %lu\n";
char DAT_00103160[] = "test_cpp_lambda: %lu\n";
char DAT_0010317c[] = "test_cpp_exception: %lu\n";
char DAT_00103199[] = "test_cpp_smart_ptr: %lu\n";
char DAT_001031b6[] = "test_cpp_rtti: %lu\n";
char DAT_001031d4[] = "Base";

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x102150
void _GLOBAL__sub_I_5_1_cpp(void)
{
 // std::ios_base::Init::Init((Init *)&std::__ioinit);
 // __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
 return;
}

// Forward declaration
int main(void);

// Function: _start @ 0x102180
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main,param_2,auStack_8,0,0,param_1,auStack_8);
 do {
 } while( 1 );
}

// Function: deregister_tm_clones @ 0x1021b0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1021e0
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x102220
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: test_cpp_member_func @ 0x102270
int test_cpp_member_func(void)
{
 size_t sVar1;
 unsigned int local_24;
 unsigned int uStack_20;
 unsigned int uStack_1c;
 unsigned int uStack_18;
 unsigned int uStack_14;
 unsigned int uStack_11;
 unsigned int uStack_d;
 unsigned int uStack_9;
 char local_5;
 local_24 = 0x74736554;
 uStack_20 = 0;
 uStack_1c = 0;
 uStack_18 = 0;
 uStack_14 = 0;
 uStack_11 = 0;
 uStack_d = 0;
 uStack_9 = 0;
 local_5 = 0;
 sVar1 = strlen((char *)&local_24);
 return (int)sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x1022b0
int test_cpp_constructor(void)
{
 unsigned int *puVar1;
 long lVar2;
 unsigned int *puVar3;
 int iVar4;
 puVar1 = (unsigned int *)operator_new__(0x14);
 lVar2 = 0;
 puVar3 = puVar1;
 do {
 *puVar3 = (int)lVar2;
 lVar2 = lVar2 + 10;
 puVar3 = puVar3 + 1;
 } while (lVar2 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar4 = LifecycleClass_instance_count + puVar1[2];
 operator_delete__(puVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar4;
}

// Function: call_virtual_func @ 0x102310
void call_virtual_func(Base *param_1,int param_2)
{
 void **vtable = *(void ***)param_1;
 ((void (*)(void *, int))vtable[0])(param_1, param_2);
 return;
}

// Forward declarations for functions
int main(void);
int Base_virtual_func(Base *this,int param_1);
int Derived_virtual_func(Derived *this,int param_1);
void Base__Base(Base *this);
void MultiDerived__MultiDerived(MultiDerived *this);
void DiamondDerived__DiamondDerived(DiamondDerived *this);
int template_max_int_(int param_1,int param_2);
double template_max_double_(double param_1,double param_2);
void template_swap_int_(int *param_1,int *param_2);
void Container_int__Container(Container_int_ *this);
void Container_int__push(Container_int_ *this,int param_1);
unsigned int Container_int__get(Container_int_ *this,int param_1);
unsigned int Container_int__getSize(Container_int_ *this);
void Container_double__Container(Container_double_ *this);
void Container_double__push(Container_double_ *this,double param_1);
unsigned long long Container_double__get(Container_double_ *this,int param_1);
unsigned int Container_double__getSize(Container_double_ *this);
char * Base_getName(void);
unsigned long long Base__Base_destructor(Base *this);
char * Derived_getName(void);
unsigned long long Derived__Derived_destructor(Derived *this);
unsigned long long MultiDerived_funcA(void);
unsigned long long MultiDerived__MultiDerived_destructor(MultiDerived *this);
unsigned long long MultiDerived_funcB_static(void);
unsigned long long MultiDerived_funcB(MultiDerived *this);
void MultiDerived__MultiDerived_destructor2(MultiDerived *this);
unsigned long long MultiDerived__MultiDerived_destructor3(MultiDerived *this);
unsigned long long BaseA_funcA(void);
void BaseA__BaseA(BaseA *this);
unsigned long long BaseA__BaseA_destructor(BaseA *this);
unsigned long long BaseB_funcB(void);
void BaseB__BaseB(BaseB *this);
unsigned long long BaseB__BaseB_destructor(BaseB *this);
int MiddleA_func(MiddleA *this);
void MiddleA__MiddleA(MiddleA *this);
unsigned long long MiddleA__MiddleA_destructor(MiddleA *this);
int MiddleA_func2(MiddleA *this);
void MiddleA__MiddleA2(MiddleA *this);
unsigned long long MiddleA__MiddleA_destructor2(MiddleA *this);
int MiddleB_func(MiddleB *this);
void MiddleB__MiddleB(MiddleB *this);
unsigned long long MiddleB__MiddleB_destructor(MiddleB *this);
int MiddleB_func2(MiddleB *this);
void MiddleB__MiddleB2(MiddleB *this);
unsigned long long MiddleB__MiddleB_destructor2(MiddleB *this);
int DiamondDerived_func(DiamondDerived *this);
unsigned long long DiamondDerived__DiamondDerived_destructor(DiamondDerived *this);
int DiamondDerived_func2(DiamondDerived *this);
void DiamondDerived__DiamondDerived2(DiamondDerived *this);
unsigned long long DiamondDerived__DiamondDerived_destructor2(DiamondDerived *this);
int DiamondDerived_func3(DiamondDerived *this);
void DiamondDerived__DiamondDerived3(DiamondDerived *this);
unsigned long long DiamondDerived__DiamondDerived_destructor3(DiamondDerived *this);
unsigned long long VirtualBase_func(void);
void VirtualBase__VirtualBase(VirtualBase *this);
unsigned long long VirtualBase__VirtualBase_destructor(VirtualBase *this);
unsigned long long RTTIDerivedA__RTTIDerivedA_destructor(RTTIDerivedA *this);
unsigned long long RTTIDerivedA_getType(void);
void RTTIBase__RTTIBase(RTTIBase *this);
unsigned long long RTTIDerivedB__RTTIDerivedB_destructor(RTTIDerivedB *this);
unsigned long long RTTIDerivedB_getType(void);

// Function: test_cpp_virtual_func @ 0x102320
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 void **local_20;
 unsigned int local_18;
 char **local_10;
 local_10 = (char **)&PTR_virtual_func_001059c8;
 local_20 = (void **)&PTR_virtual_func_00105a08;
 local_18 = 3;
 iVar1 = Base_virtual_func((Base *)local_10,5);
 iVar2 = ((int (*)(void *, int))local_20[0])(local_20,5);
 return (int)(iVar2 + iVar1 + 0x15);
}

// Function: test_cpp_multiple_inheritance @ 0x102380
int test_cpp_multiple_inheritance(void)
{
 int iVar1;
 int iVar2;
 void **local_20;
 unsigned int local_18;
 local_20 = (void **)&PTR_funcB_00105a80;
 local_18 = 200;
 iVar1 = (int)MultiDerived_funcA();
 iVar2 = ((int (*)(void *))local_20[0])(local_20);
 return iVar2 + iVar1 + 1;
}

// Function: test_cpp_diamond_inheritance @ 0x1023e0
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 void **local_20;
 unsigned int local_18;
 local_20 = (void **)&PTR_func_00105bc0;
 local_18 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)local_20);
 local_18 = 100;
 iVar2 = ((int (*)(void *))local_20[0])(local_20);
 return (int)(iVar2 + iVar1);
}

// Function: test_cpp_operator_overload @ 0x102450
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x102460
unsigned long long test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x102470
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x102480
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x102490
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,0,0);
}

// Function: test_cpp_smart_ptr @ 0x102550
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x102560
int test_cpp_rtti(void)
{
 char *__s1;
 char *__s1_00;
 uint uVar1;
 int iVar2;
 void **plVar3;
 void **plVar4;
 long lVar5;
 size_t sVar6;
 uint uVar7;
 bool bVar8;
 plVar3 = (void **)operator_new(16);
 *plVar3 = PTR__RTTIBase_00105d78;
 plVar3[1] = 0;
 plVar4 = (void **)operator_new(16);
 *plVar4 = PTR__RTTIBase_00105da0;
 plVar4[1] = 0;
 __s1 = *(char **)((char *)(*(void **)((char *)*plVar3 + -8)) + 8);
 if (__s1 == (char *)"12RTTIDerivedA") {
 uVar7 = 10;
 }
 else {
 uVar7 = 0;
 if (*__s1 != '*') {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = 10;
 if (iVar2 != 0) {
 uVar7 = 0;
 }
 }
 }
 __s1_00 = *(char **)((char *)(*(void **)((char *)*plVar4 + -8)) + 8);
 if (__s1_00 == (char *)"12RTTIDerivedB") {
 bVar8 = 1;
 }
 else if (*__s1_00 == '*') {
 bVar8 = 0;
 }
 else {
 iVar2 = strcmp(__s1_00,"12RTTIDerivedB");
 bVar8 = iVar2 == 0;
 }
 uVar1 = uVar7 | 0x14;
 if (!bVar8) {
 uVar1 = uVar7;
 }
 lVar5 = (long)__dynamic_cast((void *)plVar3,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 uVar7 = uVar1 + 100;
 if (lVar5 == 0) {
 uVar7 = uVar1;
 }
 lVar5 = (long)__dynamic_cast((void *)plVar4,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 uVar1 = uVar7 + 200;
 if (lVar5 == 0) {
 uVar1 = uVar7;
 }
    sVar6 = strlen(__s1);
    operator_delete(plVar3);
    operator_delete(plVar4);
    return (int)((int)sVar6 + (int)uVar1);
}

// Function: test_cpp_oo_features @ 0x1026a0
void test_cpp_oo_features(void)
{
 int iVar1;
 uint uVar2;
 size_t sVar3;
 unsigned int *puVar4;
 unsigned int *puVar5;
 int iVar6;
 long lVar7;
 unsigned long long local_48;
 unsigned int auStack_40 [4];
 unsigned int local_30;
 unsigned int uStack_2c;
 unsigned int local_28;
 unsigned int uStack_24;
 unsigned int local_20;
 char **local_18;
 puts(DAT_001031e1);
 auStack_40[0] = 0;
 auStack_40[1] = 0;
 auStack_40[2] = 0;
 auStack_40[3] = 0;
 local_30 = 0;
 uStack_2c = 0;
 local_28 = 0;
 local_48 = 0x747365540000000a;
 sVar3 = strlen((char *)((long)&local_48 + 4));
 lVar7 = 0;
 printf(DAT_0010307d,(unsigned long)((int)sVar3 + 0x125c));
 puVar4 = (unsigned int *)operator_new__(0x14);
 puVar5 = puVar4;
 do {
 *puVar5 = (int)lVar7;
 lVar7 = lVar7 + 10;
 puVar5 = puVar5 + 1;
 } while (lVar7 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar6 = LifecycleClass_instance_count + puVar4[2];
 operator_delete__(puVar4);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 printf(DAT_0010309b,(unsigned long)(uint)(LifecycleClass_instance_count * 1000 + iVar6));
 local_18 = (char **)&PTR_virtual_func_001059c8;
 local_48 = (unsigned long long)&PTR_virtual_func_00105a08;
 auStack_40[0] = 3;
 iVar6 = Base_virtual_func((Base *)local_18,5);
 iVar1 = ((int (*)(void *, int))((void **)local_48)[0])((void *)local_48,5);
 printf(DAT_001030b7,(unsigned long)(iVar6 + iVar1 + 0x15));
 local_48 = (unsigned long long)&PTR_funcA_00105a50;
 auStack_40[2] = 0x105a80;
 auStack_40[3] = 0;
 auStack_40[0] = 100;
 local_30 = 200;
 iVar6 = MultiDerived_funcB((MultiDerived *)(auStack_40 + 2));
 printf(DAT_001030d3,(unsigned long)(iVar6 + 0x1f));
 local_48 = (unsigned long long)&PTR_func_00105b58;
 local_28 = 0x105bc0;
 uStack_24 = 0;
 auStack_40[2] = 0x105b88;
 auStack_40[3] = 0;
 local_20 = 0x32;
 iVar6 = DiamondDerived_func((DiamondDerived *)&local_28);
 *(unsigned int *)((long)auStack_40 + (long)((char **)local_48)[-3]) = 100;
 iVar1 = ((int (*)(void *))((void **)local_28)[0])((void *)&local_28);
 printf(DAT_001030ef,(unsigned long)(uint)(iVar6 + iVar1));
 printf(DAT_0010310c,0x16);
 printf(DAT_00103128,0x27);
 printf(DAT_00103144,0x10);
 printf(DAT_00103160,0x55);
 test_cpp_exception();
 printf(DAT_0010317c,(unsigned long)0);
 printf(DAT_00103199,0x2bf);
 uVar2 = test_cpp_rtti();
 printf(DAT_001031b6,(unsigned long)uVar2);
 return;
}

// Function: main @ 0x1028f0
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: Base_virtual_func @ 0x102900
int Base_virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Derived_virtual_func @ 0x102910
int Derived_virtual_func(Derived *this,int param_1)
{
 return param_1 * *(int *)(this + 8);
}

// Function: Base__Base @ 0x102920
void Base__Base(Base *this)
{
 return;
}

// Function: MultiDerived__MultiDerived @ 0x102930
void MultiDerived__MultiDerived(MultiDerived *this)
{
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x102940
void DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: template_max<int> @ 0x102950
int template_max_int_(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x102960
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x102970
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container_int__Container @ 0x102980
void Container_int__Container(Container_int_ *this)
{
 *(unsigned int *)((char *)this + 0x28) = 0;
 return;
}

// Function: Container_int__push @ 0x102990
void Container_int__push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x28);
 if ((long)iVar1 < 10) {
 *(int *)((char *)this + 0x28) = iVar1 + 1;
 *(int *)((char *)this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int__get @ 0x1029b0
unsigned int Container_int__get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x28) != param_1 && param_1 <= *(int *)((char *)this + 0x28))) {
 uVar1 = *(unsigned int *)((char *)this + (long)param_1 * 4);
 }
 return uVar1;
}

// Function: Container_int__getSize @ 0x1029d0
unsigned int Container_int__getSize(Container_int_ *this)
{
 return *(unsigned int *)((char *)this + 0x28);
}

// Function: Container_double__Container @ 0x1029e0
void Container_double__Container(Container_double_ *this)
{
 *(unsigned int *)((char *)this + 0x50) = 0;
 return;
}

// Function: Container_double__push @ 0x1029f0
void Container_double__push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x50);
 if ((long)iVar1 < 10) {
 *(int *)((char *)this + 0x50) = iVar1 + 1;
 *(double *)((char *)this + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container_double__get @ 0x102a10
unsigned long long Container_double__get(Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x50) != param_1 && param_1 <= *(int *)((char *)this + 0x50))) {
 uVar1 = *(unsigned long long *)((char *)this + (long)param_1 * 8);
 }
 return uVar1;
}

// Function: Container_double__getSize @ 0x102a30
unsigned int Container_double__getSize(Container_double_ *this)
{
 return *(unsigned int *)((char *)this + 0x50);
}

// Function: Base_getName @ 0x102a40
char * Base_getName(void)
{
 return DAT_001031d4;
}

// Function: Base__Base @ 0x102a50
unsigned long long Base__Base_destructor(Base *this)
{
 operator_delete(this);
 return 0;
}

// Function: Derived_getName @ 0x102a60
char * Derived_getName(void)
{
 return (char *)"Derived";
}

// Function: Derived__Derived @ 0x102a70
unsigned long long Derived__Derived_destructor(Derived *this)
{
 operator_delete(this);
 return 0;
}

// Function: MultiDerived_funcA @ 0x102a80
unsigned long long MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived__MultiDerived @ 0x102a90
unsigned long long MultiDerived__MultiDerived_destructor(MultiDerived *this)
{
 operator_delete(this);
 return 0;
}

// Function: MultiDerived_funcB @ 0x102aa0
unsigned long long MultiDerived_funcB_static(void)
{
 return 0x28;
}

// Function: MultiDerived_funcB @ 0x102ab0
unsigned long long MultiDerived_funcB(MultiDerived *this)
{
 return 0x28;
}

// Function: MultiDerived__MultiDerived @ 0x102ac0
void MultiDerived__MultiDerived_destructor2(MultiDerived *this)
{
 return;
}

// Function: MultiDerived__MultiDerived @ 0x102ad0
unsigned long long MultiDerived__MultiDerived_destructor3(MultiDerived *this)
{
 operator_delete((char *)this + -0x10);
 return 0;
}

// Function: BaseA_funcA @ 0x102ae0
unsigned long long BaseA_funcA(void)
{
 return 10;
}

// Function: BaseA__BaseA @ 0x102af0
void BaseA__BaseA(BaseA *this)
{
 return;
}

// Function: BaseA__BaseA @ 0x102b00
unsigned long long BaseA__BaseA_destructor(BaseA *this)
{
 operator_delete(this);
 return 0;
}

// Function: BaseB_funcB @ 0x102b10
unsigned long long BaseB_funcB(void)
{
 return 0x14;
}

// Function: BaseB__BaseB @ 0x102b20
void BaseB__BaseB(BaseB *this)
{
 return;
}

// Function: BaseB__BaseB @ 0x102b30
unsigned long long BaseB__BaseB_destructor(BaseB *this)
{
 operator_delete(this);
 return 0;
}

// Function: MiddleA_func @ 0x102b40
int MiddleA_func(MiddleA *this)
{
 return *(int *)((char *)this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleA__MiddleA @ 0x102b60
void MiddleA__MiddleA(MiddleA *this)
{
 return;
}

// Function: MiddleA__MiddleA @ 0x102b70
unsigned long long MiddleA__MiddleA_destructor(MiddleA *this)
{
 operator_delete(this);
 return 0;
}

// Function: MiddleA_func @ 0x102b80
int MiddleA_func2(MiddleA *this)
{
 return *(int *)((char *)this + *(long *)(*(long *)((char *)this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8 +
 *(long *)(*(long *)this + -0x18)) + 0x96;
}

// Function: MiddleA__MiddleA2 @ 0x102ba0
void MiddleA__MiddleA2(MiddleA *this)
{
 return;
}

// Function: MiddleA__MiddleA @ 0x102bb0
unsigned long long MiddleA__MiddleA_destructor2(MiddleA *this)
{
 operator_delete((char *)this + *(long *)(*(long *)this + -0x20));
 return 0;
}

// Function: MiddleB_func @ 0x102bc0
int MiddleB_func(MiddleB *this)
{
 return *(int *)((char *)this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: MiddleB__MiddleB @ 0x102be0
void MiddleB__MiddleB(MiddleB *this)
{
 return;
}

// Function: MiddleB__MiddleB @ 0x102bf0
unsigned long long MiddleB__MiddleB_destructor(MiddleB *this)
{
 operator_delete(this);
 return 0;
}

// Function: MiddleB_func @ 0x102c00
int MiddleB_func2(MiddleB *this)
{
 return *(int *)((char *)this + *(long *)(*(long *)((char *)this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8 +
 *(long *)(*(long *)this + -0x18)) + 200;
}

// Function: MiddleB__MiddleB2 @ 0x102c20
void MiddleB__MiddleB2(MiddleB *this)
{
 return;
}

// Function: MiddleB__MiddleB @ 0x102c30
unsigned long long MiddleB__MiddleB_destructor2(MiddleB *this)
{
 operator_delete((char *)this + *(long *)(*(long *)this + -0x20));
 return 0;
}

// Function: DiamondDerived_func @ 0x102c40
int DiamondDerived_func(DiamondDerived *this)
{
 return *(int *)((char *)this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived__DiamondDerived @ 0x102c60
unsigned long long DiamondDerived__DiamondDerived_destructor(DiamondDerived *this)
{
 operator_delete(this);
 return 0;
}

// Function: DiamondDerived_func @ 0x102c70
int DiamondDerived_func2(DiamondDerived *this)
{
 return *(int *)((char *)this + *(long *)(*(long *)((char *)this + -0x10) + -0x18) + -8) + 0xfa;
}

// Function: DiamondDerived__DiamondDerived2 @ 0x102c90
void DiamondDerived__DiamondDerived2(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x102ca0
unsigned long long DiamondDerived__DiamondDerived_destructor2(DiamondDerived *this)
{
 operator_delete((char *)this + -0x10);
 return 0;
}

// Function: DiamondDerived_func @ 0x102cb0
int DiamondDerived_func3(DiamondDerived *this)
{
 return *(int *)((char *)this + *(long *)(*(long *)((char *)this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8 +
 *(long *)(*(long *)this + -0x18)) + 0xfa;
}

// Function: DiamondDerived__DiamondDerived3 @ 0x102cd0
void DiamondDerived__DiamondDerived3(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x102ce0
unsigned long long DiamondDerived__DiamondDerived_destructor3(DiamondDerived *this)
{
 operator_delete((char *)this + *(long *)(*(long *)this + -0x20));
 return 0;
}

// Function: VirtualBase_func @ 0x102cf0
unsigned long long VirtualBase_func(void)
{
 return 100;
}

// Function: VirtualBase__VirtualBase @ 0x102d00
void VirtualBase__VirtualBase(VirtualBase *this)
{
 return;
}

// Function: VirtualBase__VirtualBase @ 0x102d10
unsigned long long VirtualBase__VirtualBase_destructor(VirtualBase *this)
{
 operator_delete(this);
 return 0;
}

// Function: RTTIDerivedA__RTTIDerivedA @ 0x102d20
unsigned long long RTTIDerivedA__RTTIDerivedA_destructor(RTTIDerivedA *this)
{
 operator_delete(this);
 return 0;
}

// Function: RTTIDerivedA_getType @ 0x102d30
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase__RTTIBase @ 0x102d40
void RTTIBase__RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB__RTTIDerivedB @ 0x102d50
unsigned long long RTTIDerivedB__RTTIDerivedB_destructor(RTTIDerivedB *this)
{
 operator_delete(this);
 return 0;
}

// Function: RTTIDerivedB_getType @ 0x102d60
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: _fini @ 0x102d68
void _fini(void)
{
 return;
}

