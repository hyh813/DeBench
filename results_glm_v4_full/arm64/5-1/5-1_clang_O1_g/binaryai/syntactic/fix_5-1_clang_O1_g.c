/* Standard library includes */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>

/* Auto-injected type definitions by preprocessor */
#ifndef uint8_t
typedef unsigned char uint8_t;
#endif
#ifndef uint16_t
typedef unsigned short uint16_t;
#endif
#ifndef uint32_t
typedef unsigned int uint32_t;
#endif
#ifndef int8_t
typedef signed char int8_t;
#endif
#ifndef int16_t
typedef short int16_t;
#endif
#ifndef int32_t
typedef int int32_t;
#endif
typedef unsigned int uint;
typedef unsigned long long undefined7;

// Decompiled by BinaryAI
// SHA256: f3d450b5aedd92fe5f48cf1ec75c783ad3ee6bba737509a90c001843531f4b41

/* Forward declarations */
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct BaseA;
struct BaseB;
struct MiddleA;
struct MiddleB;
struct VirtualBase;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;

/* Type definitions */
struct Init {
    int dummy;
};

struct Base {
    void **vtable;
};

struct Derived {
    void **vtable;
    int data;
};

struct MultiDerived {
    void **vtable;
};

struct DiamondDerived {
    void **vtable;
};

struct BaseA {
    void **vtable;
};

struct BaseB {
    void **vtable;
};

struct MiddleA {
    void **vtable;
};

struct MiddleB {
    void **vtable;
};

struct VirtualBase {
    void **vtable;
};

struct RTTIBase {
    void **vtable;
};

struct RTTIDerivedA {
    void **vtable;
};

struct RTTIDerivedB {
    void **vtable;
};

struct LifecycleClass {
    int instance_count;
};

/* Template class type definitions */
struct Container_int_ {
    int data[10];
    int size;
};

struct Container_double_ {
    double data[10];
    int size;
};

/* Typedefs for C++ compatibility */
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

/* Forward declarations */
struct Init;
int main(void);
void call_weak_fn(void);

/* Global variables */
char completed_0 = 0;
int LifecycleClass_instance_count = 0;
unsigned long long stack0x00000008;
struct Init std__ioinit;
char DAT_001025f9[] = "Testing";
char DAT_00102495[] = "Member func result: %lu\n";
char DAT_001024b3[] = "Constructor result: %lu\n";
char DAT_001024cf[] = "Virtual func result: %lu\n";
char DAT_001024eb[] = "Multiple inheritance result: %lu\n";
char DAT_00102507[] = "Diamond inheritance result: %lu\n";
char DAT_00102524[] = "Operator overload result: %lu\n";
char DAT_00102540[] = "Template func result: %lu\n";
char DAT_0010255c[] = "Template class result: %lu\n";
char DAT_00102578[] = "Lambda result: %lu\n";
char DAT_00102594[] = "Exception result: %lu\n";
char DAT_001025b1[] = "Smart ptr result: %lu\n";
char DAT_001025ce[] = "RTTI result: %lu\n";
char DAT_001025ec[] = "Base";

/* External symbol for dynamic shared object handle */
void *__dso_handle = NULL;

/* Vtable pointer declarations */
extern void *PTR_virtual_func_001139a8;
extern void *PTR_virtual_func_001139e8;
extern void *PTR_funcB_00113a60;
extern void *PTR_func_00113ba0;
extern void *PTR__RTTIBase_00113d58;
extern void *PTR__RTTIBase_00113d80;

/* RTTI typeinfo pointer declarations */
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;

/* Macro for concatenating two 32-bit values into 64-bit */
#define CONCAT44(high, low) (((unsigned long long)(high) << 32) | ((unsigned long long)(low) & 0xFFFFFFFF))

/* Constructor/destructor function declarations */
void Init(struct Init *this);
void Init_destructor(struct Init *this);

/* Virtual function declarations */
int Base_virtual_func(struct Base *this, int param_1);
int Derived_virtual_func(struct Derived *this, int param_1);
unsigned long long MultiDerived_funcA(void);
unsigned long long MultiDerived_funcB(struct MultiDerived *this);
int DiamondDerived_func(struct DiamondDerived *this);
int DiamondDerived_func2(struct DiamondDerived *this);
int MiddleA_func(struct MiddleA *this);
int MiddleB_func(struct MiddleB *this);
void operator_delete(void *ptr);

// Function: _init @ 0x101618
int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: FUN_00101630 @ 0x101630
void FUN_00101630(void)
{
 /* Intentional crash via null function pointer */
 ((void (*)(void))0)();
 return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x101650
void *operator_new__(unsigned long size)
{
 return malloc(size);
}

// Function: <EXTERNAL>::puts @ 0x101660
#include <string.h>
extern int _puts(char *__s);
#define puts _puts

// Function: <EXTERNAL>::strlen @ 0x101670
extern size_t strlen(const char *__s);

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x101680
void __cxa_begin_catch(void)
{
 return;
}
void __cxa_begin_catch_wrapper()
{
 __cxa_begin_catch();
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x101690
void *__cxa_allocate_exception(size_t size)
{
 (void)size;
 return malloc(16);
}
void *__cxa_allocate_exception_wrapper(void)
{
 return __cxa_allocate_exception(4);
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1016a0
extern void __cxa_finalize(void *dso_handle);
void __cxa_finalize_wrapper(void)
{
 __cxa_finalize(__dso_handle);
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x1016b0
extern void __libc_start_main(int (*main)(), int argc, char **ubp_av, void (*init)(), void (*fini)(), void (*rtld_fini)());
void __libc_start_main_wrapper(void)
{
 __libc_start_main(main, 0, (char **)&stack0x00000008, 0, 0, 0);
 return;
}

// Function: <EXTERNAL>::operator.delete @ 0x1016c0
void _operator_delete(void *ptr)
{
 free(ptr);
}
void operator_delete_wrapper(void *param_1)
{
 _operator_delete(param_1);
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x1016d0
void *operator_new(unsigned long size)
{
 return malloc(size);
}
void * _operator_new_wrapper(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = operator_new(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x1016e0
void *__dynamic_cast(void *ptr, void *src, void *dst, int offset)
{
 (void)ptr; (void)src; (void)dst; (void)offset;
 return NULL;
}
void *__dynamic_cast_wrapper(void)
{
 return __dynamic_cast(0, 0, 0, 0);
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x1016f0
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void *__dso_handle;

// Function: <EXTERNAL>::operator.delete[] @ 0x101700
void operator_delete__(void *ptr)
{
 free(ptr);
}

// Function: <EXTERNAL>::strcmp @ 0x101710
extern int strcmp(const char *__s1,const char *__s2);

// Function: <EXTERNAL>::__cxa_rethrow @ 0x101720
void __cxa_rethrow(void)
{
 abort();
}
void __cxa_rethrow_wrapper(void)
{
 __cxa_rethrow();
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x101730
void std_ios_base_Init_Init(struct Init *this)
{
 Init(this);
 return;
}

// Function: <EXTERNAL>::abort @ 0x101740
extern void abort(void);
void abort_wrapper(void)
{
 abort();
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x101750
extern void __cxa_end_catch(void);
void __cxa_end_catch_wrapper(void)
{
 __cxa_end_catch();
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x101760
void __gxx_personality_v0(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x101770
void __cxa_throw(void *thrown_exception, void *tinfo, void (*dest)(void *))
{
 (void)thrown_exception; (void)tinfo; (void)dest;
 abort();
}
void __cxa_throw_wrapper(void)
{
 __cxa_throw(0, 0, 0);
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x101780
void _Unwind_Resume(void)
{
 abort();
}
void _Unwind_Resume_wrapper(void)
{
 _Unwind_Resume();
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x101790
void __gmon_start__(void)
{
 return;
}
void __gmon_start___wrapper(void)
{
 __gmon_start__();
 return;
}

// Function: <EXTERNAL>::printf @ 0x1017a0
extern int printf(const char *__format,...);
int printf_wrapper(const char *__format,...)
{
 int iVar1;
 va_list args;
 va_start(args, __format);
 iVar1 = vprintf(__format, args);
 va_end(args);
 return iVar1;
}
#define printf printf_wrapper

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x1017c0
void _GLOBAL__sub_I_5_1_cpp(void)
{
 Init(&std__ioinit);
 __cxa_atexit((void (*)(void *))Init_destructor,&std__ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x101800
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 __libc_start_main(main,param_9,(char **)&stack0x00000008,0,0,(void (*)(void))param_1);
 abort();
}

// Function: call_weak_fn @ 0x101834
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x101850
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x101880
void register_tm_clones(void)
{
 return;
}

// Function: FUN_001018bc @ 0x1018bc
void FUN_001018bc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x1018c0
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: test_cpp_member_func @ 0x101914
int test_cpp_member_func(void)
{
 size_t sVar1;
 unsigned int local_38;
 unsigned long long local_34;
 undefined7 uStack_2c;
 char uStack_25;
 undefined7 uStack_24;
 unsigned long long uStack_1d;
 char local_15;
 local_15 = 0;
 local_38 = 10;
 uStack_2c = 0;
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 uStack_24 = 0;
 sVar1 = strlen((char *)((unsigned long)&local_38 | 4));
 return (int)sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x101964
int test_cpp_constructor(void)
{
 void *pvVar1;
 int iVar2;
 long lVar3;
 pvVar1 = operator_new__(0x14);
 iVar2 = 0;
 lVar3 = 0;
 do {
 *(int *)((long)pvVar1 + lVar3) = iVar2;
 lVar3 = lVar3 + 4;
 iVar2 = iVar2 + 10;
 } while (lVar3 != 0x14);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar2 = *(int *)((long)pvVar1 + 8) + LifecycleClass_instance_count;
 operator_delete__(pvVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return iVar2 + LifecycleClass_instance_count * 1000;
}

// Function: call_virtual_func @ 0x1019d0
typedef int (*virtual_func_t)(Base *, int);
void call_virtual_func(Base *param_1,int param_2)
{
 virtual_func_t func = (virtual_func_t)(*(void **)param_1);
 func(param_1,param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x1019ec
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 void **local_30;
 unsigned int local_28;
 char **local_8;
 local_8 = (char **)&PTR_virtual_func_001139a8;
 local_30 = (void **)&PTR_virtual_func_001139e8;
 local_28 = 3;
 iVar1 = Base_virtual_func((Base *)(void *)local_8,5);
 iVar2 = ((virtual_func_t)*local_30)((Base *)local_30,5);
 return iVar1 + iVar2 + 0x15;
}

// Function: test_cpp_multiple_inheritance @ 0x101a5c
int test_cpp_multiple_inheritance(void)
{
 int iVar1;
 int iVar2;
 void **local_30;
 unsigned int local_28;
 local_30 = (void **)&PTR_funcB_00113a60;
 local_28 = 200;
 iVar1 = 0x1e; /* MultiDerived::funcA() */
 iVar2 = (*(unsigned long long (*)(struct MultiDerived *))(*local_30))((struct MultiDerived *)local_30);
 return iVar1 + iVar2 + 1;
}

// Function: test_cpp_diamond_inheritance @ 0x101acc
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 void **local_40;
 unsigned int local_38;
 local_40 = (void **)&PTR_func_00113ba0;
 local_38 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_40);
 local_38 = 100;
 iVar2 = (*(int (*)(struct DiamondDerived *))(*local_40))((struct DiamondDerived *)local_40);
 return iVar2 + iVar1;
}

// Function: test_cpp_operator_overload @ 0x101b54
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x101b5c
unsigned long long test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x101b64
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x101b6c
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x101b74
unsigned long long test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,0,0);
 return 0x2a;
}

// Function: test_cpp_smart_ptr @ 0x101c64
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x101c6c
int test_cpp_rtti(void)
{
 uint uVar1;
 int bVar2;
 int iVar3;
 long *plVar4;
 long *plVar5;
 char *__s1;
 size_t sVar6;
 uint uVar7;
 long lVar8;
 char *__s1_00;
 plVar4 = (long *)operator_new(8);
 *plVar4 = (long)&PTR__RTTIBase_00113d58;
 plVar5 = (long *)operator_new(8);
 lVar8 = *plVar4;
 *plVar5 = 0;
 *plVar5 = (long)&PTR__RTTIBase_00113d80;
 __s1_00 = *(char **)((void *)((unsigned long)*(long *)(lVar8 + -8) + 8));
 if (strcmp(__s1_00, "12RTTIDerivedA") == 0) {
 uVar7 = 10;
 }
 else if (*__s1_00 == '*') {
 uVar7 = 0;
 }
 else {
 iVar3 = strcmp(__s1_00,"12RTTIDerivedA");
 uVar7 = 10;
 if (iVar3 != 0) {
 uVar7 = 0;
 }
 }
 __s1 = *(char **)(*(long *)(*plVar5 + -8) + 8);
 if (strcmp(__s1, "12RTTIDerivedB") == 0) {
 bVar2 = 1;
 }
 else if (*__s1 == '*') {
 bVar2 = 0;
 }
 else {
 iVar3 = strcmp(__s1,"12RTTIDerivedB");
 bVar2 = iVar3 == 0;
 }
 uVar1 = uVar7 | 0x14;
 if (!bVar2) {
 uVar1 = uVar7;
 }
 lVar8 = (long)__dynamic_cast(plVar4,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 if (lVar8 != 0) {
 uVar1 = uVar1 + 100;
 }
 lVar8 = (long)__dynamic_cast(plVar5,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 if (lVar8 != 0) {
 uVar1 = uVar1 + 200;
 }
 if (*__s1_00 == '*') {
 __s1_00 = __s1_00 + 1;
 }
 sVar6 = strlen(__s1_00);
 ((void (*)(void *))(*(void **)(*plVar4 + 8)))(plVar4);
 ((void (*)(void *))(*(void **)(*plVar5 + 8)))(plVar5);
 return uVar1 + (int)sVar6;
}

// Function: test_cpp_oo_features @ 0x101e04
int test_cpp_oo_features(void)
{
 int iVar1;
 int iVar2;
 size_t sVar3;
 void *pvVar4;
 unsigned long uVar5;
 long lVar6;
char **local_68;
unsigned int local_60;
unsigned int uStack_5c;
unsigned int auStack_58 [4];
unsigned int local_48;
unsigned int uStack_44;
void **local_40;
unsigned int uStack_3c;
unsigned int local_38;
 puts(DAT_001025f9);
 local_60 = 10;
 auStack_58[1] = 0;
 uStack_5c = 0x74736554;
 auStack_58[0] = 0;
 uStack_44 = 0;
 local_40 = 0;
 auStack_58[2] = 0;
 auStack_58[3] = 0;
 local_48 = 0;
 sVar3 = strlen((char *)((unsigned long)&local_60 | 4));
 printf(DAT_00102495,(unsigned long)((int)sVar3 + 0x125c));
 pvVar4 = operator_new__(0x14);
 iVar1 = 0;
 lVar6 = 0;
 do {
 *(int *)((long)pvVar4 + lVar6) = iVar1;
 lVar6 = lVar6 + 4;
 iVar1 = iVar1 + 10;
 } while (lVar6 != 0x14);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar1 = *(int *)((long)pvVar4 + 8) + LifecycleClass_instance_count;
 operator_delete__(pvVar4);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 printf(DAT_001024b3,(unsigned long)(uint)(iVar1 + LifecycleClass_instance_count * 1000));
 auStack_58[0] = 3;
 local_68 = (char **)(void *)&PTR_virtual_func_001139a8;
 local_60 = 0x1139e8;
 uStack_5c = 0;
 iVar1 = Base_virtual_func((Base *)(void *)local_68,5);
 iVar2 = ((int (*)(void *, int))(void *)CONCAT44(uStack_5c,local_60))(&local_60,5);
 printf(DAT_001024cf,(unsigned long)(iVar1 + iVar2 + 0x15));
 local_60 = 0x113a30;
 uStack_5c = 0;
 auStack_58[2] = 0x113a60;
 auStack_58[3] = 0;
 auStack_58[0] = 100;
 local_48 = 200;
 iVar1 = MultiDerived_funcB((struct MultiDerived *)NULL);
 printf(DAT_001024eb,(unsigned long)(iVar1 + 0x1f));
 local_60 = 0x113b38;
 uStack_5c = 0;
 local_40 = (void **)0x113ba0;
 uStack_3c = 0;
 auStack_58[2] = 0x113b68;
 auStack_58[3] = 0;
 local_38 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_40);
 iVar2 = DiamondDerived_func2((DiamondDerived *)NULL);
 printf(DAT_00102507,(unsigned long)(uint)(iVar2 + iVar1));
 printf(DAT_00102524,0x16);
 printf(DAT_00102540,0x27);
 printf(DAT_0010255c,0x10);
 printf(DAT_00102578,0x55);
 uVar5 = test_cpp_exception();
 printf(DAT_00102594,uVar5 & 0xffffffff);
 printf(DAT_001025b1,0x2bf);
 uVar5 = test_cpp_rtti();
 iVar1 = printf(DAT_001025ce,uVar5 & 0xffffffff);
 return iVar1;
}

// Function: main @ 0x102050
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: Base::virtual_func @ 0x102068
int Base_virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Derived::virtual_func @ 0x102070
int Derived_virtual_func(Derived *this,int param_1)
{
 return *(int *)(this + 8) * param_1;
}

// Function: Base::~Base @ 0x10207c
void Base_destructor(Base *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102080
void MultiDerived_destructor(MultiDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102084
void DiamondDerived_destructor(DiamondDerived *this)
{
 return;
}

// Function: template_max<int> @ 0x102088
int template_max_int_(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x102094
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x1020a0
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x1020b4
void Container_int_Constructor(struct Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x1020bc
void Container_int_push(struct Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x1020d8
unsigned int Container_int_get(struct Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(unsigned int *)(this + (long)param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x1020f8
unsigned int Container_int_getSize(struct Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container_double_Constructor @ 0x102100
void Container_double_Constructor(struct Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x102108
void Container_double_push(struct Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(double *)(this + (long)iVar1 * 8) = param_1;
 *(int *)(this + 0x50) = iVar1 + 1;
 }
 return;
}

// Function: Container<double>::get @ 0x102124
unsigned long long Container_double_get(struct Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 uVar1 = *(unsigned long long *)(this + (long)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x102140
unsigned int Container_double_getSize(struct Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: Base::getName @ 0x102148
char * Base_getName(void)
{
 return (char *)&DAT_001025ec;
}

// Function: Base::~Base @ 0x102154
void Base_destructor_with_delete(Base *this)
{
 operator_delete(this);
 return;
}

// Function: Derived::getName @ 0x102168
char * Derived_getName(void)
{
 return "Derived";
}

// Function: Derived::~Derived @ 0x102174
void Derived_destructor(Derived *this)
{
 operator_delete(this);
 return;
}

// Function: MultiDerived::funcA @ 0x102188
unsigned long long MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::~MultiDerived @ 0x102190
void MultiDerived_destructor_with_delete(MultiDerived *this)
{
 operator_delete(this);
 return;
}

// Function: MultiDerived::funcB @ 0x1021a4
unsigned long long MultiDerived_funcB(struct MultiDerived *this)
{
 (void)this;  // Unused parameter
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x1021ac
unsigned long long MultiDerived_funcB_thiscall(MultiDerived *this)
{
 return 0x28;
}

// Function: MultiDerived::~MultiDerived @ 0x1021b4
void MultiDerived_destructor3(MultiDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x1021b8
void MultiDerived_destructor4(MultiDerived *this)
{
 operator_delete(this + -0x10);
 return;
}

// Function: BaseA::funcA @ 0x1021d0
unsigned long long BaseA_funcA(void)
{
 return 10;
}

// Function: BaseA::~BaseA @ 0x1021d8
void BaseA_destructor(BaseA *this)
{
 return;
}

// Function: BaseA::~BaseA @ 0x1021dc
void BaseA_destructor_with_delete(BaseA *this)
{
 operator_delete(this);
 return;
}

// Function: BaseB::funcB @ 0x1021f0
unsigned long long BaseB_funcB(void)
{
 return 0x14;
}

// Function: BaseB::~BaseB @ 0x1021f8
void BaseB_destructor(BaseB *this)
{
 return;
}

// Function: BaseB::~BaseB @ 0x1021fc
void BaseB_destructor_with_delete(BaseB *this)
{
 operator_delete(this);
 return;
}

// Function: MiddleA::func @ 0x102210
int MiddleA_func(MiddleA *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x102228
void MiddleA_destructor(MiddleA *this)
{
 return;
}

// Function: MiddleA::~MiddleA @ 0x10222c
void MiddleA_destructor_with_delete(MiddleA *this)
{
 operator_delete(this);
 return;
}

// Function: MiddleA::func @ 0x102240
int MiddleA_func2(MiddleA *this)
{
 return *(int *)((long)(this + *(long *)(*(long *)this + -0x18)) +
 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x102264
void MiddleA_destructor3(MiddleA *this)
{
 return;
}

// Function: MiddleA::~MiddleA @ 0x102268
void MiddleA_destructor4(MiddleA *this)
{
 operator_delete(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: MiddleB::func @ 0x102288
int MiddleB_func(MiddleB *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: MiddleB::~MiddleB @ 0x1022a0
void MiddleB_destructor(MiddleB *this)
{
 return;
}

// Function: MiddleB::~MiddleB @ 0x1022a4
void MiddleB_destructor_with_delete(MiddleB *this)
{
 operator_delete(this);
 return;
}

// Function: MiddleB::func @ 0x1022b8
int MiddleB_func2(MiddleB *this)
{
 return *(int *)((long)(this + *(long *)(*(long *)this + -0x18)) +
 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 200;
}

// Function: MiddleB::~MiddleB @ 0x1022dc
void MiddleB_destructor3(MiddleB *this)
{
 return;
}

// Function: MiddleB::~MiddleB @ 0x1022e0
void MiddleB_destructor4(MiddleB *this)
{
 operator_delete(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: DiamondDerived::func @ 0x102300
int DiamondDerived_func(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

int DiamondDerived_func2(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102318
void DiamondDerived_destructor_with_delete(DiamondDerived *this)
{
 operator_delete(this);
 return;
}

// Function: DiamondDerived::func @ 0x10232c
int DiamondDerived_func3(DiamondDerived *this)
{
 return *(int *)((long)(this + -0x10) + *(long *)(*(long *)(this + -0x10) + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102344
void DiamondDerived_destructor3(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102348
void DiamondDerived_destructor4(DiamondDerived *this)
{
 operator_delete(this + -0x10);
 return;
}

// Function: DiamondDerived::func @ 0x102360
int DiamondDerived_func4(DiamondDerived *this)
{
 return *(int *)((long)(this + *(long *)(*(long *)this + -0x18)) +
 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102384
void DiamondDerived_destructor5(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102388
void DiamondDerived_destructor6(DiamondDerived *this)
{
 operator_delete(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: VirtualBase::func @ 0x1023a8
unsigned long long VirtualBase_func(void)
{
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x1023b0
void VirtualBase_destructor(VirtualBase *this)
{
 return;
}

// Function: VirtualBase::~VirtualBase @ 0x1023b4
void VirtualBase_destructor_with_delete(VirtualBase *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x1023c8
void RTTIDerivedA_destructor(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x1023dc
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x1023e4
void RTTIBase_destructor(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1023e8
void RTTIDerivedB_destructor(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x1023fc
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: Init @ std::ios_base::Init::Init
void Init(struct Init *this)
{
 /* std::ios_base::Init constructor - initializes I/O streams */
 /* Typically a no-op in simple implementations */
 (void)this;
 return;
}

// Function: Init_destructor @ std::ios_base::Init::~Init
void Init_destructor(struct Init *this)
{
 /* std::ios_base::Init destructor - typically a no-op */
 (void)this;
 return;
}

// Function: _fini @ 0x102404
void _fini(void)
{
 return;
}



/* Vtable pointer definitions */
void *PTR_virtual_func_001139a8 = &Base_virtual_func;
void *PTR_virtual_func_001139e8 = &Derived_virtual_func;
void *PTR_funcB_00113a60 = &MultiDerived_funcB_thiscall;
void *PTR_func_00113ba0 = &DiamondDerived_func;
void *PTR__RTTIBase_00113d58 = &RTTIBase_typeinfo;
void *PTR__RTTIBase_00113d80 = &RTTIBase_typeinfo;

/* RTTI typeinfo placeholders */
int _int_typeinfo_data = 0;
int _RTTIBase_typeinfo_data = 0;
int _RTTIDerivedA_typeinfo_data = 0;
int _RTTIDerivedB_typeinfo_data = 0;

void *int_typeinfo = &_int_typeinfo_data;
void *RTTIBase_typeinfo = &_RTTIBase_typeinfo_data;
void *RTTIDerivedA_typeinfo = &_RTTIDerivedA_typeinfo_data;
void *RTTIDerivedB_typeinfo = &_RTTIDerivedB_typeinfo_data;

