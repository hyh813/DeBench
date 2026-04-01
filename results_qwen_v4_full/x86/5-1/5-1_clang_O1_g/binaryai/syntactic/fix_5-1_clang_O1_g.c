#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>

/* Auto-injected type definitions by preprocessor */

// External function declarations
void __gmon_start__(void);
void frame_dummy(void);

// Define __do_global_ctors_aux as it's called but not provided externally
void __do_global_ctors_aux(void)
{
 return;
}

void *_Znwm(size_t);
void *_Znam(size_t);
void _ZdlPv(void *);
void _ZdaPv(void *);
void __cxa_begin_catch(void *);
void *__cxa_allocate_exception(size_t);
void __cxa_atexit(void (*)(void), void *, void *);
void __cxa_end_catch(void);
void __cxa_throw(void *, void *, void (*)(void *));
void __cxa_rethrow(void);
void *_Unwind_Resume(void *);
void *__dynamic_cast(const void *, const void *, const void *, int);
void __libc_start_main(int (*)(int, char **, char **), int, char **, void (*)(void), void (*)(void), void *, void *);
size_t strlen(const char *);
int strcmp(const char *, const char *);
int printf(const char *, ...);
int puts(const char *);

int vprintf(const char *, va_list);

// std namespace declarations - C compatible
void* __dso_handle = (void*)0;
void* std___ioinit = (void*)0;

// Global variable declarations
int LifecycleClass_instance_count = 0;
void* int_typeinfo = (void*)0;
void* RTTIBase_typeinfo = (void*)0;
void* RTTIDerivedA_typeinfo = (void*)0;
void* RTTIDerivedB_typeinfo = (void*)0;

// Forward declarations for C++ classes (as C structs)
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

// Struct definitions for C++ classes (opaque with sufficient size for pointer arithmetic)
struct Base { char data[16]; };
struct Derived { char data[16]; };
struct MultiDerived { char data[32]; };
struct DiamondDerived { char data[32]; };
struct BaseA { char data[16]; };
struct BaseB { char data[16]; };
struct MiddleA { char data[32]; };
struct MiddleB { char data[32]; };
struct VirtualBase { char data[16]; };
struct RTTIBase { char data[16]; };
struct RTTIDerivedA { char data[16]; };
struct RTTIDerivedB { char data[16]; };
struct Container_int_ { char data[0x50]; };
struct Container_double_ { char data[0x70]; };

// Forward declarations for class methods
int main(int argc, char **argv, char **envp);
int Base_virtual_func(Base *this, int param_1);
int Derived_virtual_func(Derived *this, int param_1);
unsigned int MultiDerived_funcA(MultiDerived *this);
unsigned int MultiDerived_funcB(MultiDerived *this);
int DiamondDerived_func(DiamondDerived *this);
void FUN_00011160(unsigned int);
void FUN_00011c35(void);
void FUN_00011c85(void);
void MultiDerived__MultiDerived_11b00(MultiDerived *this);
void DiamondDerived__DiamondDerived_11b10(DiamondDerived *this);
int template_max_int_(int param_1, int param_2);
double template_max_double_(double param_1, double param_2);
void template_swap_int_(int *param_1, int *param_2);
void Container_int__Container(Container_int_ *this);
void Container_int__push(Container_int_ *this, int param_1);
unsigned int Container_int__get(Container_int_ *this, int param_1);
unsigned int Container_int__getSize(Container_int_ *this);
void Container_double__Container(Container_double_ *this);
void Container_double__push(Container_double_ *this, double param_1);
long double Container_double__get(Container_double_ *this, int param_1);
unsigned int Container_double__getSize(Container_double_ *this);
char *Base_getName(Base *this);
void Base__Base(Base *this);
char *Derived_getName(Derived *this);
void Derived__Derived(Derived *this);
void MultiDerived__MultiDerived_11ce0(MultiDerived *this);
void MultiDerived__MultiDerived_11d30(MultiDerived *this);
void MultiDerived__MultiDerived_11d40(MultiDerived *this);
unsigned int BaseA_funcA(BaseA *this);
void BaseA__BaseA_11d80(BaseA *this);
void BaseA__BaseA_11d90(BaseA *this);
unsigned int BaseB_funcB(BaseB *this);
void BaseB__BaseB_11dd0(BaseB *this);
void BaseB__BaseB_11de0(BaseB *this);
int MiddleA_func_11e10(MiddleA *this);
void MiddleA__MiddleA_11e30(MiddleA *this);
void MiddleA__MiddleA_11e40(MiddleA *this);
int MiddleA_func_11e70(MiddleA *this);
void MiddleA__MiddleA_11e90(MiddleA *this);
void MiddleA__MiddleA_11ea0(MiddleA *this);
int MiddleB_func_11ed0(MiddleB *this);
void MiddleB__MiddleB_11ef0(MiddleB *this);
void MiddleB__MiddleB_11f00(MiddleB *this);
int MiddleB_func_11f30(MiddleB *this);
void MiddleB__MiddleB_11f50(MiddleB *this);
void MiddleB__MiddleB_11f60(MiddleB *this);
int DiamondDerived_func_11f90(DiamondDerived *this);
void DiamondDerived__DiamondDerived_11fb0(DiamondDerived *this);
int DiamondDerived_func_11fe0(DiamondDerived *this);
void DiamondDerived__DiamondDerived_12000(DiamondDerived *this);
void DiamondDerived__DiamondDerived_12010(DiamondDerived *this);
int DiamondDerived_func_12040(DiamondDerived *this);
void DiamondDerived__DiamondDerived_12060(DiamondDerived *this);
void DiamondDerived__DiamondDerived_12070(DiamondDerived *this);
unsigned int VirtualBase_func(VirtualBase *this);
void VirtualBase__VirtualBase_120b0(VirtualBase *this);
void VirtualBase__VirtualBase_120c0(VirtualBase *this);
void RTTIDerivedA__RTTIDerivedA_120f0(RTTIDerivedA *this);
unsigned int RTTIDerivedA_getType(RTTIDerivedA *this);
void RTTIBase__RTTIBase_12130(RTTIBase *this);
void RTTIDerivedB__RTTIDerivedB_12140(RTTIDerivedB *this);
unsigned int RTTIDerivedB_getType(RTTIDerivedB *this);
void* PTR_virtual_func_00015ce4 = (void*)0;
void* PTR_virtual_func_00015d04 = (void*)0;
void* PTR_funcA_00015d28 = (void*)0;
void* PTR_funcB_00015d40 = (void*)0;
void* PTR_func_00015db0 = (void*)0;
void* PTR_func_00015dc8 = (void*)0;
void* PTR_func_00015de4 = (void*)0;
void* PTR__RTTIBase_00015ecc = (void*)0;
void* PTR__RTTIBase_00015ee0 = (void*)0;
char DAT_000131e5[] = "Test";
char DAT_00013081[] = "%d\n";
char DAT_0001309f[] = "%d\n";
char DAT_000130bb[] = "%d\n";
char DAT_000130d7[] = "%d\n";
char DAT_000130f3[] = "%d\n";
char DAT_00013110[] = "%d\n";
char DAT_0001312c[] = "%d\n";
char DAT_00013148[] = "%d\n";
char DAT_00013164[] = "%d\n";
char DAT_00013180[] = "%d\n";
char DAT_0001319d[] = "%d\n";
char DAT_000131ba[] = "%d\n";
char UNK_000131d8[] = "Base";

// C wrapper for std::ios_base::Init::_Init
void std_ios_base_Init__Init(void *this_ptr)
{
 return;
}

// Decompiled by BinaryAI
// SHA256: 0a96bd41cb195b9185632e927b93f27c13250273ffd623ed96f7f06e151b4daf

// Function: _init @ 0x11000
int _init(void *ctx)
{
 __gmon_start__();
 frame_dummy();
 __do_global_ctors_aux();
 return 0;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 (*(void *)(char *)0x0)();
 return;
}

// Function: operator_new @ 0x11040
void *my_operator_new(size_t param_1)
{
 void *pvVar1;
 pvVar1 = _Znwm(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x11050
void __cxa_begin_catch_wrapper(void *param_1)
{
 __cxa_begin_catch(param_1);
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x11060
void *__cxa_allocate_exception_wrapper(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = __cxa_allocate_exception(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::strlen @ 0x11070
size_t strlen_wrapper(const char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x11080
void __cxa_atexit_wrapper(void (*param_1)(void), void *param_2, void *param_3)
{
 __cxa_atexit(param_1, param_2, param_3);
 return;
}

// Function: <EXTERNAL>::strcmp @ 0x11090
int strcmp_wrapper(const char *__s1,const char *__s2)
{
 int iVar1;
 iVar1 = strcmp(__s1,__s2);
 return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x110a0
void __libc_start_main_wrapper(int (*main_fn)(int, char **, char **), int argc, char **argv, void (*init)(void), void (*fini)(void), void *rtld_fini, void *stack_end)
{
 __libc_start_main(main_fn, argc, argv, init, fini, rtld_fini, stack_end);
 return;
}

// Function: operator_new_array @ 0x110b0
void *my_operator_new_array(size_t param_1)
{
 void *pvVar1;
 pvVar1 = _Znam(param_1);
 return pvVar1;
}

// Function: operator_delete @ 0x110c0
void my_operator_delete(void *param_1)
{
 _ZdlPv(param_1);
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x110d0
void *__dynamic_cast_wrapper(void *param_1, void *param_2, void *param_3, int param_4)
{
 void *pvVar1;
 pvVar1 = __dynamic_cast(param_1, param_2, param_3, param_4);
 return pvVar1;
}

// Function: operator_delete_array @ 0x110e0
void my_operator_delete_array(void *param_1)
{
 _ZdaPv(param_1);
 return;
}

// Function: <EXTERNAL>::printf @ 0x110f0
int printf_wrapper(const char *__format, ...)
{
 int iVar1;
 va_list args;
 va_start(args, __format);
 iVar1 = vprintf(__format, args);
 va_end(args);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x11100
void __cxa_rethrow_wrapper(void)
{
 __cxa_rethrow();
 return;
}

// Function: <EXTERNAL>::puts @ 0x11110
int puts_wrapper(const char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x11120
void std_ios_base_Init_Init(void *this_ptr)
{
 std_ios_base_Init__Init(this_ptr);
 return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x11130
void __cxa_end_catch_wrapper(void)
{
 __cxa_end_catch();
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x11140
void __cxa_throw_wrapper_func(void *param_1, void *param_2, void *param_3)
{
 __cxa_throw(param_1, param_2, param_3);
 return;
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x11150
void _Unwind_Resume_wrapper(void *param_1)
{
 _Unwind_Resume(param_1);
 return;
}

// Function: FUN_00011160 @ 0x11160
void FUN_00011160(unsigned int param_1)
{
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x11170
void _GLOBAL__sub_I_5_1_cpp(void)
{
 unsigned int uVar1;
 unsigned int extraout_var;
 uVar1 = 0x11178;
 std_ios_base_Init_Init(&std___ioinit);
 __cxa_atexit((void (*)(void))std_ios_base_Init__Init,&std___ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x111b0
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 __libc_start_main(main,param_2,auStack_4,0,0,param_1,auStack_4);
 do {
 } while( true );
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
 int unaff_EDI = 0;
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
void __x86_get_pc_thunk_dx(void)
{
 return;
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
 piVar1 = (int *)operator_new__(0x14);
 piVar2 = piVar1;
 do {
 *piVar2 = iVar3;
 iVar3 = iVar3 + 10;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar3 = LifecycleClass_instance_count + piVar1[2];
 operator_delete__(piVar1);
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
 iVar1 = Base_virtual_func((Base *)&local_c,5);
 iVar2 = (**local_14)(&local_14,5);
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
 iVar1 = MultiDerived_funcA((MultiDerived *)0);
 iVar2 = (**local_14)(&local_14);
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
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_14);
 local_10 = 100;
 iVar2 = (**local_14)(&local_14);
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
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw_wrapper_func(puVar1,&int_typeinfo,0);
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
 unsigned int uVar5;
 unsigned int uVar6;
 int bVar7;
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)&PTR__RTTIBase_00015ecc;
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)&PTR__RTTIBase_00015ee0;
 __s1 = *(char **)(*(int *)(*piVar1 + -4) + 4);
 if (__s1 == "12RTTIDerivedA") {
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
 if (__s1_00 == "12RTTIDerivedB") {
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
 sVar4 = strlen(__s1);
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
 void **local_38 [4];
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int uStack_1c;
 char **local_14 [2];
 puts(&DAT_000131e5);
 local_38[0] = (void **)0x74736554;
 local_38[1] = (void **)0x0;
 local_38[2] = (void **)0x0;
 local_38[3] = (void **)0x0;
 local_28 = 0;
 local_24 = 0;
 local_20 = 0;
 uStack_1c = 0;
 local_3c = (void **)0xa;
 sVar1 = strlen((char *)local_38);
 printf(&DAT_00013081,sVar1 + 0x125c);
 iVar6 = 0;
 piVar2 = (int *)operator_new__(0x14);
 piVar5 = piVar2;
 do {
 *piVar5 = iVar6;
 iVar6 = iVar6 + 10;
 piVar5 = piVar5 + 1;
 } while (iVar6 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar6 = LifecycleClass_instance_count + piVar2[2];
 operator_delete__(piVar2);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 printf(&DAT_0001309f,LifecycleClass_instance_count * 1000 + iVar6);
 local_14[0] = &PTR_virtual_func_00015ce4;
 local_3c = (void **)&PTR_virtual_func_00015d04;
 local_38[0] = (void **)0x3;
 iVar6 = Base_virtual_func((Base *)local_14,5);
 iVar3 = (**local_3c)(&local_3c,5);
 printf(&DAT_000130bb,iVar3 + iVar6 + 0x15);
 local_3c = (void **)&PTR_funcA_00015d28;
 local_38[1] = (void **)&PTR_funcB_00015d40;
 local_38[0] = (void **)0x64;
 local_38[2] = (void **)0xc8;
 iVar6 = MultiDerived_funcB((MultiDerived *)(local_38 + 1));
 printf(&DAT_000130d7,iVar6 + 0x1f);
 local_3c = (void **)&PTR_func_00015db0;
 local_38[3] = (void **)&PTR_func_00015de4;
 local_38[1] = (void **)&PTR_func_00015dc8;
 local_28 = 0x32;
 iVar6 = DiamondDerived_func((DiamondDerived *)(local_38 + 3));
 *(unsigned int *)((uintptr_t)local_38 + (uintptr_t)local_3c[-3]) = 100;
 iVar3 = (**local_38[3])(local_38 + 3);
 printf(&DAT_000130f3,iVar3 + iVar6);
 printf(&DAT_00013110,0x16);
 printf(&DAT_0001312c,0x27);
 printf(&DAT_00013148,0x10);
 printf(&DAT_00013164,0x55);
 test_cpp_exception();
 printf(&DAT_00013180,0);
 printf(&DAT_0001319d,0x2bf);
 uVar4 = test_cpp_rtti();
 printf(&DAT_000131ba,uVar4);
 return;
}

// Function: main @ 0x11ab0
int main(int argc, char **argv, char **envp)
{
 test_cpp_oo_features();
 return 0;
}

// Function: Base::virtual_func @ 0x11ad0
int Base_virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Derived::virtual_func @ 0x11ae0
int Derived_virtual_func(Derived *this,int param_1)
{
 return *(int *)(this + 4) * param_1;
}



// Function: MultiDerived::~MultiDerived @ 0x11b00
void MultiDerived__MultiDerived_11b00(MultiDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11b10
void DiamondDerived__DiamondDerived_11b10(DiamondDerived *this)
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

// Function: Container<int>::Container @ 0x11b70
void Container_int__Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x11b80
void Container_int__push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x11ba0
unsigned int Container_int__get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)(this + 0x28) != param_1 && param_1 <= *(int *)(this + 0x28))) {
 uVar1 = *(unsigned int *)(this + param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x11bc0
unsigned int Container_int__getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x11bd0
void Container_double__Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x11be0
void Container_double__push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x11c00
long double Container_double__get(Container_double_ *this,int param_1)
{
 long double lVar1;
 lVar1 = (long double)0;
 if ((-1 < param_1) && (*(int *)(this + 0x50) != param_1 && param_1 <= *(int *)(this + 0x50))) {
 lVar1 = (long double)*(double *)(this + param_1 * 8);
 }
 return lVar1;
}

// Function: Container<double>::getSize @ 0x11c20
unsigned int Container_double__getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: Base::getName @ 0x11c30
char *Base_getName(Base *this)
{
 (void)this;
 return &UNK_000131d8;
}

// Function: FUN_00011c35 @ 0x11c35
int FUN_00011c35(void)
{
 return 0;
}

// Function: Base::~Base @ 0x11c50
void Base__Base(Base *this)
{
 operator_delete((void*)this);
 return;
}

// Function: Derived::getName @ 0x11c80
char *Derived_getName(Derived *this)
{
 (void)this;
 return "Derived";
}

// Function: FUN_00011c85 @ 0x11c85
int FUN_00011c85(void)
{
 return 0;
}

// Function: Derived::~Derived @ 0x11ca0
void Derived__Derived(Derived *this)
{
 operator_delete((void*)this);
 return;
}

// Function: MultiDerived::funcA @ 0x11cd0
unsigned int MultiDerived_funcA(MultiDerived *this)
{
 (void)this;
 return 0x1e;
}

// Function: MultiDerived::~MultiDerived @ 0x11ce0
void MultiDerived__MultiDerived_11ce0(MultiDerived *this)
{
 operator_delete((void*)this);
 return;
}

// Function: MultiDerived::funcB @ 0x11d20
unsigned int MultiDerived_funcB(MultiDerived *this)
{
 return 0x28;
}

// Function: MultiDerived::~MultiDerived @ 0x11d30
void MultiDerived__MultiDerived_11d30(MultiDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11d40
void MultiDerived__MultiDerived_11d40(MultiDerived *this)
{
 operator_delete((void*)((char*)this + -8));
 return;
}

// Function: BaseA::funcA @ 0x11d70
unsigned int BaseA_funcA(BaseA *this)
{
 (void)this;
 return 10;
}

// Function: BaseA::~BaseA @ 0x11d80
void BaseA__BaseA_11d80(BaseA *this)
{
 return;
}

// Function: BaseA::~BaseA @ 0x11d90
void BaseA__BaseA_11d90(BaseA *this)
{
 operator_delete((void*)this);
 return;
}

// Function: BaseB::funcB @ 0x11dc0
unsigned int BaseB_funcB(BaseB *this)
{
 (void)this;
 return 0x14;
}

// Function: BaseB::~BaseB @ 0x11dd0
void BaseB__BaseB_11dd0(BaseB *this)
{
 return;
}

// Function: BaseB::~BaseB @ 0x11de0
void BaseB__BaseB_11de0(BaseB *this)
{
 operator_delete((void*)this);
 return;
}

// Function: MiddleA::func @ 0x11e10
int MiddleA_func_11e10(MiddleA *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x11e30
void MiddleA__MiddleA_11e30(MiddleA *this)
{
 return;
}

// Function: MiddleA::~MiddleA @ 0x11e40
void MiddleA__MiddleA_11e40(MiddleA *this)
{
 operator_delete((void*)this);
 return;
}

// Function: MiddleA::func @ 0x11e70
int MiddleA_func_11e70(MiddleA *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4 +
 *(int *)(*(int *)this + -0xc)) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x11e90
void MiddleA__MiddleA_11e90(MiddleA *this)
{
 return;
}

// Function: MiddleA::~MiddleA @ 0x11ea0
void MiddleA__MiddleA_11ea0(MiddleA *this)
{
 operator_delete((void*)((char*)this + *(int *)(*(int *)this + -0x10)));
 return;
}

// Function: MiddleB::func @ 0x11ed0
int MiddleB_func_11ed0(MiddleB *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}

// Function: MiddleB::~MiddleB @ 0x11ef0
void MiddleB__MiddleB_11ef0(MiddleB *this)
{
 return;
}

// Function: MiddleB::~MiddleB @ 0x11f00
void MiddleB__MiddleB_11f00(MiddleB *this)
{
 operator_delete((void*)this);
 return;
}

// Function: MiddleB::func @ 0x11f30
int MiddleB_func_11f30(MiddleB *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4 +
 *(int *)(*(int *)this + -0xc)) + 200;
}

// Function: MiddleB::~MiddleB @ 0x11f50
void MiddleB__MiddleB_11f50(MiddleB *this)
{
 return;
}

// Function: MiddleB::~MiddleB @ 0x11f60
void MiddleB__MiddleB_11f60(MiddleB *this)
{
 operator_delete((void*)((char*)this + *(int *)(*(int *)this + -0x10)));
 return;
}

// Function: DiamondDerived::func @ 0x11f90
int DiamondDerived_func_11f90(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11fb0
void DiamondDerived__DiamondDerived_11fb0(DiamondDerived *this)
{
 operator_delete((void*)this);
 return;
}

// Function: DiamondDerived::func @ 0x11fe0
int DiamondDerived_func_11fe0(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + -8) + -0xc) + -4) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x12000
void DiamondDerived__DiamondDerived_12000(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x12010
void DiamondDerived__DiamondDerived_12010(DiamondDerived *this)
{
 operator_delete((void*)((char*)this + -8));
 return;
}

// Function: DiamondDerived::func @ 0x12040
int DiamondDerived_func_12040(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4 +
 *(int *)(*(int *)this + -0xc)) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x12060
void DiamondDerived__DiamondDerived_12060(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x12070
void DiamondDerived__DiamondDerived_12070(DiamondDerived *this)
{
 operator_delete((void*)((char*)this + *(int *)(*(int *)this + -0x10)));
 return;
}

// Function: VirtualBase::func @ 0x120a0
unsigned int VirtualBase_func(VirtualBase *this)
{
 (void)this;
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x120b0
void VirtualBase__VirtualBase_120b0(VirtualBase *this)
{
 return;
}

// Function: VirtualBase::~VirtualBase @ 0x120c0
void VirtualBase__VirtualBase_120c0(VirtualBase *this)
{
 operator_delete((void*)this);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x120f0
void RTTIDerivedA__RTTIDerivedA_120f0(RTTIDerivedA *this)
{
 operator_delete((void*)this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x12120
unsigned int RTTIDerivedA_getType(RTTIDerivedA *this)
{
 (void)this;
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x12130
void RTTIBase__RTTIBase_12130(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x12140
void RTTIDerivedB__RTTIDerivedB_12140(RTTIDerivedB *this)
{
 operator_delete((void*)this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x12170
unsigned int RTTIDerivedB_getType(RTTIDerivedB *this)
{
 (void)this;
 return 2;
}



// Function: _fini @ 0x121cc
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

